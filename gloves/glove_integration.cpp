#include "glove_integration.h"
#include "glove_runtime.h"
#include "glove_schema.h"
#include "glove_functions.h"
#include "econ_item_attribute_manager.h"

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

    template<typename T>
    bool Write(uintptr_t address, const T& value)
    {
        __try
        {
            *reinterpret_cast<T*>(address) = value;
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    template<typename T>
    bool ReadField(
        void* base,
        const char* className,
        const char* fieldName,
        T& value)
    {
        uint32_t offset = 0;

        if (!base ||
            !GlovesSchema::TryGet(className, fieldName, offset))
            return false;

        return Read(
            reinterpret_cast<uintptr_t>(base) + offset,
            value);
    }

    template<typename T>
    bool WriteField(
        void* base,
        const char* className,
        const char* fieldName,
        const T& value)
    {
        uint32_t offset = 0;

        if (!base ||
            !GlovesSchema::TryGet(className, fieldName, offset))
            return false;

        return Write(
            reinterpret_cast<uintptr_t>(base) + offset,
            value);
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

        if (stage == FRAME_STAGE_NET_UPDATE_END)
        {
            Gloves::Update();
        }

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

namespace Gloves
{
    bool GetGameContext(GameContext& context)
    {
        context = {};

        // 1. Resolve the pawn through the working entity-system path.
        const uintptr_t pawnAddress = GetLocalPawn();

        if (!pawnAddress)
            return false;

        context.pawn = reinterpret_cast<void*>(pawnAddress);

        // 2. Read the pawn's actual gameplay state.
        int32_t health = 0;
        uint8_t team = 0;
        float spawnTime = 0.0f;

        const bool healthOK = ReadField(
            context.pawn,
            "C_BaseEntity",
            "m_iHealth",
            health);

        const bool teamOK = ReadField(
            context.pawn,
            "C_BaseEntity",
            "m_iTeamNum",
            team);

        const bool spawnOK = ReadField(
            context.pawn,
            "C_CSPlayerPawnBase",
            "m_flLastSpawnTimeIndex",
            spawnTime);

        if (!healthOK || !teamOK || !spawnOK)
        {
            static bool logged = false;

            if (!logged)
            {
                printf(
                    "[gloves] GetGameContext: pawn fields missing "
                    "health=%d team=%d spawn=%d\n",
                    healthOK,
                    teamOK,
                    spawnOK);

                logged = true;
            }

            context = {};
            return false;
        }

        context.health = health;
        context.team = static_cast<int>(team);
        context.spawnTime = spawnTime;

        // 3. Resolve the inline glove item.
        uint32_t gloveOffset = 0;

        if (!GlovesSchema::TryGet(
            "C_CSPlayerPawn",
            "m_EconGloves",
            gloveOffset))
        {
            printf("[gloves] ERROR: m_EconGloves missing\n");
            context = {};
            return false;
        }

        context.gloveItem = reinterpret_cast<void*>(
            pawnAddress + gloveOffset);

        // 4. Read the glove item's current state.
        const bool definitionOK = ReadField(
            context.gloveItem,
            "C_EconItemView",
            "m_iItemDefinitionIndex",
            context.currentDefinition);

        const bool itemIdOK = ReadField(
            context.gloveItem,
            "C_EconItemView",
            "m_iItemIDHigh",
            context.itemIdHigh);

        const bool initializedOK = ReadField(
            context.gloveItem,
            "C_EconItemView",
            "m_bInitialized",
            context.initialized);

        const bool reapplyOK = ReadField(
            context.pawn,
            "C_CSPlayerPawn",
            "m_bNeedToReApplyGloves",
            context.needReapply);

        if (!definitionOK || !itemIdOK ||
            !initializedOK || !reapplyOK)
        {
            static bool logged = false;

            if (!logged)
            {
                printf(
                    "[gloves] GetGameContext: item fields missing "
                    "definition=%d itemId=%d initialized=%d reapply=%d\n",
                    definitionOK,
                    itemIdOK,
                    initializedOK,
                    reapplyOK);

                logged = true;
            }

            context = {};
            return false;
        }

        // 5. Controller is optional; it is only used for account ID.
        uintptr_t controller = 0;

        if (g_localControllerGlobal)
            Read(g_localControllerGlobal, controller);

        if (controller > 0x10000)
            context.controller = reinterpret_cast<void*>(controller);

        // 6. Final validation.
        context.valid =
            context.pawn != nullptr &&
            context.gloveItem != nullptr &&
            context.health > 0 &&
            (context.team == 2 || context.team == 3);

        return context.valid;
    }
}

namespace
{
    bool CallCreatePaintKit(void* item)
    {
        const auto fn = GloveFunctions::GetCreatePaintKit();

        if (!fn || !item)
            return false;

        __try
        {
            fn(item);
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    bool CallSetBodyGroup(void* pawn)
    {
        const auto fn = GloveFunctions::GetSetBodyGroup();

        if (!fn || !pawn)
            return false;

        __try
        {
            fn(pawn, "first_or_third_person", 1);
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }
}

namespace Gloves
{
    bool ApplyGloveItem(
        const GameContext& context,
        uint16_t definitionIndex,
        int paintKit,
        int seed,
        float wear)
    {
        if (!context.valid ||
            !context.pawn ||
            !context.gloveItem ||
            !definitionIndex)
        {
            return false;
        }

        if (!GloveFunctions::GetSetBodyGroup())
            return false;

        if (paintKit > 0 &&
            !GloveFunctions::GetCreatePaintKit())
        {
            return false;
        }

        void* item = context.gloveItem;

        // 1. Set the definition and quality.
        if (!WriteField(
            item, "C_EconItemView",
            "m_iItemDefinitionIndex", definitionIndex) ||
            !WriteField(
                item, "C_EconItemView",
                "m_iEntityQuality", int32_t{ 3 }))
        {
            return false;
        }

        // 2. Remove only attributes owned by our manager.
        EconItemAttributeManager::Remove(
            reinterpret_cast<C_EconItemView*>(item));

        // 3. Create paint, seed and wear attributes.
        if (paintKit > 0)
        {
            if (!EconItemAttributeManager::Create(
                reinterpret_cast<C_EconItemView*>(item),
                paintKit,
                wear,
                seed))
            {
                printf("[gloves] Attribute creation FAILED\n");
                return false;
            }

            // 4. Ask the engine to construct the paint kit.
            if (!CallCreatePaintKit(item))
            {
                printf("[gloves] CreatePaintKit call FAILED\n");
                return false;
            }
        }

        // 5. Preserve the low item ID; mark custom items with high = FFFFFFFF.
        const uint32_t itemIdHigh =
            (definitionIndex == 5028 || definitionIndex == 5029)
            ? 0u
            : 0xFFFFFFFFu;

        if (!WriteField(
            item, "C_EconItemView",
            "m_iItemIDHigh", itemIdHigh))
        {
            return false;
        }

        // 6. Copy the account ID if the controller and schema field are available.
        if (context.controller)
        {
            uint64_t steamId = 0;

            if (ReadField(
                context.controller,
                "CBasePlayerController",
                "m_steamID",
                steamId))
            {
                const uint32_t accountId =
                    static_cast<uint32_t>(steamId & 0xFFFFFFFFull);

                WriteField(
                    item, "C_EconItemView",
                    "m_iAccountID", accountId);
            }
        }

        // 7. Mark the item ready and request material restoration.
        if (!WriteField(
            item, "C_EconItemView",
            "m_bInitialized", true) ||
            !WriteField(
                item, "C_EconItemView",
                "m_bDisallowSOC", false) ||
            !WriteField(
                item, "C_EconItemView",
                "m_bRestoreCustomMaterialAfterPrecache", true))
        {
            return false;
        }

        // 8. Rebuild the glove body group.
        if (!CallSetBodyGroup(context.pawn))
        {
            printf("[gloves] SetBodyGroup call FAILED\n");
            return false;
        }

        // 9. Ask the game to rebuild the gloves.
        if (!WriteField(
            context.pawn,
            "C_CSPlayerPawn",
            "m_bNeedToReApplyGloves",
            true))
        {
            return false;
        }

        printf(
            "[gloves] APPLY OK pawn=%p item=%p def=%u paint=%d seed=%d wear=%.6f\n",
            context.pawn,
            item,
            definitionIndex,
            paintKit,
            seed,
            wear);

        return true;
    }

    bool ClearGloveItem(const GameContext& context)
    {
        if (!context.pawn || !context.gloveItem)
            return false;

        EconItemAttributeManager::Remove(
            reinterpret_cast<C_EconItemView*>(context.gloveItem));

        const bool definitionCleared = WriteField(
            context.gloveItem,
            "C_EconItemView",
            "m_iItemDefinitionIndex",
            uint16_t{ 0 });

        const bool initializedCleared = WriteField(
            context.gloveItem,
            "C_EconItemView",
            "m_bInitialized",
            false);

        const bool rebuildRequested = WriteField(
            context.pawn,
            "C_CSPlayerPawn",
            "m_bNeedToReApplyGloves",
            true);

        return definitionCleared &&
            initializedCleared &&
            rebuildRequested;
    }
}