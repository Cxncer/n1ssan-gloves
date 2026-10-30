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

    constexpr uintptr_t RVA_LOCAL_CONTROLLER = 0x253EEF8;
    constexpr uintptr_t RVA_LOCAL_PAWN = 0x25676D8;
    constexpr uintptr_t RVA_ENTITY_LIST = 0x271C8B8;

    constexpr uintptr_t OFFSET_CONTROLLER_PAWN = 0x92C;
    constexpr uintptr_t OFFSET_HEALTH = 0x34C;

    constexpr uintptr_t ENTITY_CHUNK_TABLE = 0x10;
    constexpr uintptr_t ENTITY_CHUNK_STRIDE = 0x70;

    constexpr int FRAME_STAGE_SLOT = 36;

    uintptr_t g_clientBase = 0;
    size_t g_clientSize = 0;

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
        uintptr_t controller = 0;

        if (Read(
            g_clientBase + RVA_LOCAL_CONTROLLER,
            controller) && controller > 0x10000)
        {
            uint32_t handle = 0;

            if (Read(
                controller + OFFSET_CONTROLLER_PAWN,
                handle) &&
                handle != 0 &&
                handle != 0xFFFFFFFF)
            {
                uintptr_t entitySystem = 0;

                if (Read(
                    g_clientBase + RVA_ENTITY_LIST,
                    entitySystem) &&
                    entitySystem > 0x10000)
                {
                    const uintptr_t pawn =
                        ResolveEntity(entitySystem, handle);

                    if (pawn)
                        return pawn;
                }
            }
        }

        // Direct-pawn fallback.
        uintptr_t pawn = 0;

        if (Read(
            g_clientBase + RVA_LOCAL_PAWN,
            pawn) && pawn > 0x10000)
        {
            uintptr_t vtable = 0;

            if (Read(pawn, vtable) && InClient(vtable))
                return pawn;
        }

        return 0;
    }

    void __fastcall FrameStageHook(void* instance, int stage)
    {
        if (g_original)
            g_original(instance, stage);

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