#include "glove_integration.h"

#include <Windows.h>
#include <Psapi.h>
#include <cstdint>
#include <cstdio>

#pragma comment(lib, "Psapi.lib")

namespace
{
    using FrameStageFn = void(__fastcall*)(void*, int);

    constexpr int FRAME_STAGE_NET_UPDATE_END = 6;

    constexpr uintptr_t OFFSET_CONTROLLER_PAWN = 0x92C;
    constexpr uintptr_t OFFSET_HEALTH = 0x34C;

    constexpr uintptr_t ENTITY_CHUNK_TABLE = 0x10;
    constexpr uintptr_t ENTITY_CHUNK_STRIDE = 0x70;

    constexpr int FRAME_STAGE_SLOT = 36;

    uintptr_t g_clientBase = 0;
    size_t g_clientSize = 0;
    uintptr_t g_localControllerGlobal = 0;
    uintptr_t g_localPawnGlobal = 0;
    uintptr_t g_entityListGlobal = 0;

    void* g_clientInterface = nullptr;
    void** g_vtable = nullptr;

    FrameStageFn g_original = nullptr;

    template<typename T>
    bool Read(uintptr_t address, T& value)
    {
        __try
        {
            value = *reinterpret_cast<T*>(address);
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            value = {};
            return false;
        }
    }

    bool InClient(uintptr_t address)
    {
        return address >= g_clientBase &&
            address < g_clientBase + g_clientSize;
    }


    uintptr_t ScanPattern(const char* pattern)
    {
        uint8_t bytes[256]{};
        bool wildcards[256]{};
        size_t length = 0;

        const char* p = pattern;

        while (*p)
        {
            while (*p == ' ')
                ++p;

            if (!*p)
                break;

            if (length >= 256)
                return 0;

            if (*p == '?')
            {
                wildcards[length] = true;
                ++length;
                ++p;
            }
            else
            {
                char hex[3] = { p[0], p[1], 0 };
                bytes[length] = static_cast<uint8_t>(
                    strtoul(hex, nullptr, 16));

                wildcards[length] = false;
                ++length;
                p += 2;
            }
        }

        if (!length || length > g_clientSize)
            return 0;

        const auto* base =
            reinterpret_cast<const uint8_t*>(g_clientBase);

        __try
        {
            for (size_t i = 0; i <= g_clientSize - length; ++i)
            {
                bool match = true;

                for (size_t j = 0; j < length; ++j)
                {
                    if (!wildcards[j] && base[i + j] != bytes[j])
                    {
                        match = false;
                        break;
                    }
                }

                if (match)
                    return reinterpret_cast<uintptr_t>(base + i);
            }
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return 0;
        }

        return 0;
    }

    uintptr_t ResolveGlobal(
        const char* name,
        const char* pattern)
    {
        const uintptr_t hit = ScanPattern(pattern);

        if (!hit)
        {
            printf("[auto-off] %s: SIGNATURE NOT FOUND\n", name);
            return 0;
        }

        int32_t displacement = 0;

        if (!Read(hit + 3, displacement))
        {
            printf("[auto-off] %s: displacement read FAILED\n", name);
            return 0;
        }

        const uintptr_t target =
            hit + 7 + static_cast<intptr_t>(displacement);

        if (!InClient(target))
        {
            printf("[auto-off] %s: target outside client.dll (%p)\n",
                name, (void*)target);
            return 0;
        }

        uintptr_t currentValue = 0;
        const bool readOK = Read(target, currentValue);

        printf(
            "[auto-off] %-26s hit=%p global=%p value=%p read=%d\n",
            name,
            (void*)hit,
            (void*)target,
            (void*)currentValue,
            readOK);

        return target;
    }

    bool ResolvePawnGlobals()
    {
        printf("[auto-off] Resolving client.dll globals...\n");

        g_entityListGlobal = ResolveGlobal(
            "dwEntityList",
            "48 8B 1D ? ? ? ? 48 89 1D ? ? ? ?");

        g_localControllerGlobal = ResolveGlobal(
            "dwLocalPlayerController",
            "48 8B 05 ? ? ? ? 41 89 BE");

        g_localPawnGlobal = ResolveGlobal(
            "dwLocalPlayerPawn",
            "48 8B 0D ? ? ? ? 4C 8B C0 48 8B");

        const int matched =
            (g_entityListGlobal != 0) +
            (g_localControllerGlobal != 0) +
            (g_localPawnGlobal != 0);

        printf("[auto-off] Summary: %d/3 globals resolved\n", matched);

        return matched == 3;
    }


    uintptr_t ResolveEntity(uintptr_t entitySystem, uint32_t handle)
    {
        if (!entitySystem || !handle || handle == 0xFFFFFFFF)
            return 0;

        const uint32_t index = handle & 0x7FFF;

        if (!index || index == 0x7FFF)
            return 0;

        const uint32_t chunkIndex = index >> 9;
        const uint32_t indexInChunk = index & 0x1FF;

        uintptr_t chunk = 0;

        if (!Read(
            entitySystem + chunkIndex * 8 + ENTITY_CHUNK_TABLE,
            chunk) || !chunk)
            return 0;

        uintptr_t entity = 0;

        if (!Read(
            chunk + indexInChunk * ENTITY_CHUNK_STRIDE,
            entity) || !entity)
            return 0;

        uintptr_t vtable = 0;

        if (!Read(entity, vtable) || !InClient(vtable))
            return 0;

        return entity;
    }




    uintptr_t GetLocalPawn()
    {
        static ULONGLONG lastLogTime = 0;

        const ULONGLONG now = GetTickCount64();
        const bool log = (now - lastLogTime >= 5000);

        if (log)
            lastLogTime = now;

        uintptr_t controller = 0;
        bool controllerRead = false;

        if (g_localControllerGlobal)
            controllerRead = Read(g_localControllerGlobal, controller);

        if (controllerRead && controller > 0x10000)
        {
            uint32_t handle = 0;

            if (Read(controller + OFFSET_CONTROLLER_PAWN, handle) &&
                handle != 0 && handle != 0xFFFFFFFF)
            {
                uintptr_t entitySystem = 0;

                if (g_entityListGlobal &&
                    Read(g_entityListGlobal, entitySystem) &&
                    entitySystem > 0x10000)
                {
                    const uint32_t index = handle & 0x7FFF;
                    const uint32_t chunkIndex = index >> 9;
                    const uint32_t indexInChunk = index & 0x1FF;

                    uintptr_t chunk = 0;

                    const bool chunkRead = Read(
                        entitySystem + chunkIndex * 8 + ENTITY_CHUNK_TABLE,
                        chunk);

                    uintptr_t entity = 0;

                    const bool entityRead =
                        chunkRead && chunk &&
                        Read(
                            chunk + indexInChunk * ENTITY_CHUNK_STRIDE,
                            entity);

                    uintptr_t vtable = 0;

                    const bool vtRead =
                        entityRead && entity && Read(entity, vtable);

                    const bool valid =
                        vtRead && InClient(vtable);

                    if (log)
                    {
                        printf(
                            "[pawn-scan] controller=%p handle=0x%08X "
                            "entitySystem=%p chunk=%p entity=%p "
                            "vtable=%p valid=%d\n",
                            (void*)controller,
                            handle,
                            (void*)entitySystem,
                            (void*)chunk,
                            (void*)entity,
                            (void*)vtable,
                            valid);
                    }

                    if (valid)
                        return entity;
                }
            }
        }

        // Direct-pawn fallback.
        uintptr_t pawn = 0;

        const bool pawnRead =
            g_localPawnGlobal &&
            Read(g_localPawnGlobal, pawn);

        uintptr_t vtable = 0;

        const bool vtRead =
            pawnRead && pawn > 0x10000 && Read(pawn, vtable);

        const bool validVtable =
            vtRead && InClient(vtable);

        int32_t health = 0;

        const bool healthRead =
            pawnRead && pawn > 0x10000 &&
            Read(pawn + OFFSET_HEALTH, health);

        if (log)
        {
            printf(
                "[pawn-scan] globals: controller=%p pawn=%p entityList=%p\n",
                (void*)g_localControllerGlobal,
                (void*)g_localPawnGlobal,
                (void*)g_entityListGlobal);

            printf(
                "[pawn-scan] controllerRead=%d controller=%p "
                "directRead=%d pawn=%p vtable=%p validVtable=%d "
                "healthRead=%d health=%d\n",
                controllerRead,
                controllerRead,
                (void*)controller,
                pawnRead,
                (void*)pawn,
                (void*)vtable,
                validVtable,
                healthRead,
                health);
        }

        if (pawnRead && pawn > 0x10000 && validVtable)
            return pawn;

        return 0;
    }



    void __fastcall FrameStageHook(void* instance, int stage)
    {
        // TEMP: Confirm NET_UPDATE_END is being reached
        static int stage6Count = 0;

        if (stage == FRAME_STAGE_NET_UPDATE_END && stage6Count < 5)
        {
            ++stage6Count;

            printf(
                "[integration] NET_UPDATE_END hit #%d\n",
                stage6Count
            );
        }

        // Always pass execution to the original function
        if (g_original)
            g_original(instance, stage);

        // Only inspect the local pawn at NET_UPDATE_END
        if (stage != FRAME_STAGE_NET_UPDATE_END)
            return;

        const uintptr_t pawn = GetLocalPawn();

        int32_t health = 0;

        if (!pawn ||
            !Read(pawn + OFFSET_HEALTH, health) ||
            health <= 0)
        {
            return;
        }

        static uintptr_t lastPawn = 0;

        if (pawn != lastPawn)
        {
            lastPawn = pawn;

            printf(
                "[integration] VALID LOCAL PAWN: %p health=%d stage=%d\n",
                reinterpret_cast<void*>(pawn),
                health,
                stage);
        }
    }

}

namespace GlovesIntegration
{
    bool Install()
    {
        HMODULE client = GetModuleHandleA("client.dll");

        if (!client)
        {
            printf("[integration] client.dll missing\n");
            return false;
        }

        MODULEINFO info{};

        if (!GetModuleInformation(
            GetCurrentProcess(),
            client,
            &info,
            sizeof(info)))
        {
            printf("[integration] module information failed\n");
            return false;
        }

        g_clientBase =
            reinterpret_cast<uintptr_t>(info.lpBaseOfDll);

        g_clientSize = info.SizeOfImage;

        const bool globalsReady = ResolvePawnGlobals();

        printf("[integration] Pawn globals: %s\n",
            globalsReady ? "READY" : "PARTIAL");

        using CreateInterfaceFn = void* (*)(const char*, int*);

        auto factory = reinterpret_cast<CreateInterfaceFn>(
            GetProcAddress(client, "CreateInterface"));

        if (!factory)
        {
            printf("[integration] CreateInterface missing\n");
            return false;
        }

        g_clientInterface = factory("Source2Client002", nullptr);

        if (!g_clientInterface)
        {
            printf("[integration] Source2Client002 missing\n");
            return false;
        }

        g_vtable = *reinterpret_cast<void***>(g_clientInterface);

        if (!g_vtable || !g_vtable[FRAME_STAGE_SLOT])
        {
            printf("[integration] FrameStageNotify slot missing\n");
            return false;
        }

        g_original =
            reinterpret_cast<FrameStageFn>(
                g_vtable[FRAME_STAGE_SLOT]);

        if (!InClient(reinterpret_cast<uintptr_t>(g_original)))
        {
            printf("[integration] original function outside client.dll\n");
            g_original = nullptr;
            return false;
        }

        DWORD oldProtection = 0;

        void** slot = &g_vtable[FRAME_STAGE_SLOT];

        if (!VirtualProtect(
            slot,
            sizeof(void*),
            PAGE_READWRITE,
            &oldProtection))
        {
            printf("[integration] VirtualProtect failed\n");
            g_original = nullptr;
            return false;
        }

        *slot = reinterpret_cast<void*>(&FrameStageHook);

        DWORD ignored = 0;
        VirtualProtect(
            slot,
            sizeof(void*),
            oldProtection,
            &ignored);

        printf(
            "[integration] FrameStageNotify installed slot=%d original=%p\n",
            FRAME_STAGE_SLOT,
            reinterpret_cast<void*>(g_original));

        return true;
    }
}