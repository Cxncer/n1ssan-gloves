
#include <Windows.h>
#include <Psapi.h>
#include <cstdint>
#include <cstdio>
#include <cstdlib>

#include "gloves/glove_memory.h"
#include "gloves/glove_schema.h"

#pragma comment(lib, "Psapi.lib")

// ============================================================
// v1.0.2a
// n1ssan-gloves — Checkpoint 1
// Resolve Loot's two glove functions.
// No game memory writes.
// ============================================================

using GloveCreatePaintKitFn = void* (__fastcall*)(void* item);
using GloveSetBodyGroupFn = void(__fastcall*)(
    void* pawn,
    const char* group,
    unsigned int value
    );
using MemAllocFn = void* (__fastcall*)(size_t size);
using MemFreeFn = void(__fastcall*)(void* ptr);

static MemAllocFn g_memAlloc = nullptr;
static MemFreeFn g_memFree = nullptr;

static void ResolveGameAllocator()
{
    HMODULE tier0 = GetModuleHandleA("tier0.dll");

    if (!tier0)
    {
        printf("[gloves] ERROR: tier0.dll not found\n");
        return;
    }

    g_memAlloc = reinterpret_cast<MemAllocFn>(
        GetProcAddress(tier0, "MemAlloc_AllocFunc"));

    g_memFree = reinterpret_cast<MemFreeFn>(
        GetProcAddress(tier0, "MemAlloc_FreeFunc"));

    Gloves::SetMemoryFunctions(
        reinterpret_cast<Gloves::MemAllocFn>(g_memAlloc),
        reinterpret_cast<Gloves::MemFreeFn>(g_memFree)
    );

    printf("[gloves] MemAlloc=%p\n",
        reinterpret_cast<void*>(g_memAlloc));

    printf("[gloves] MemFree=%p\n",
        reinterpret_cast<void*>(g_memFree));

    printf("[gloves] MemAlloc: %s\n",
        g_memAlloc ? "FOUND" : "NOT FOUND");

    printf("[gloves] MemFree: %s\n",
        g_memFree ? "FOUND" : "NOT FOUND");
}

struct ModuleInfo
{
    uintptr_t base = 0;
    size_t size = 0;

    bool valid() const { return base != 0 && size != 0; }
};

static ModuleInfo GetClientModule()
{
    ModuleInfo result{};

    HMODULE module = GetModuleHandleA("client.dll");
    if (!module)
        return result;

    MODULEINFO info{};
    if (!GetModuleInformation(
        GetCurrentProcess(),
        module,
        &info,
        sizeof(info)))
        return result;

    result.base = reinterpret_cast<uintptr_t>(info.lpBaseOfDll);
    result.size = info.SizeOfImage;

    return result;
}

static uintptr_t ScanPattern(
    const ModuleInfo& module,
    const char* pattern)
{
    if (!module.valid() || !pattern)
        return 0;

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
            bytes[length] = 0;
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

    if (length == 0 || length > module.size)
        return 0;

    const auto* base =
        reinterpret_cast<const uint8_t*>(module.base);

    __try
    {
        for (size_t i = 0; i <= module.size - length; ++i)
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

static uintptr_t ResolveCallTarget(uintptr_t callAddress)
{
    if (!callAddress)
        return 0;

    __try
    {
        const int32_t displacement =
            *reinterpret_cast<const int32_t*>(callAddress + 1);

        return callAddress + 5 + displacement;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return 0;
    }
}

static GloveCreatePaintKitFn g_createPaintKit = nullptr;
static GloveSetBodyGroupFn g_setBodyGroup = nullptr;

static void ResolveGloveFunctions()
{
    const ModuleInfo client = GetClientModule();

    if (!client.valid())
    {
        printf("[gloves] ERROR: client.dll not found\n");
        return;
    }

    printf("[gloves] client.dll base=%p size=0x%llX\n",
        reinterpret_cast<void*>(client.base),
        static_cast<unsigned long long>(client.size));

    constexpr const char* CREATE_PATTERN =
        "48 89 5C 24 ? 56 48 83 EC ? 48 8B 01 FF 50";

    constexpr const char* BODYGROUP_PATTERN =
        "E8 ? ? ? ? EB 0C 48 8B CF";

    const uintptr_t createMatch =
        ScanPattern(client, CREATE_PATTERN);

    const uintptr_t bodyGroupMatch =
        ScanPattern(client, BODYGROUP_PATTERN);

    // Loot's CreatePaintKit signature resolves directly.
    const uintptr_t createAddress = createMatch;

    // Loot's BodyGroup signature starts at a CALL instruction.
    const uintptr_t bodyGroupAddress =
        ResolveCallTarget(bodyGroupMatch);

    g_createPaintKit =
        reinterpret_cast<GloveCreatePaintKitFn>(createAddress);

    g_setBodyGroup =
        reinterpret_cast<GloveSetBodyGroupFn>(bodyGroupAddress);

    printf("[gloves] CreatePaintKit match=%p resolved=%p\n",
        reinterpret_cast<void*>(createMatch),
        reinterpret_cast<void*>(createAddress));

    printf("[gloves] SetBodyGroup match=%p resolved=%p\n",
        reinterpret_cast<void*>(bodyGroupMatch),
        reinterpret_cast<void*>(bodyGroupAddress));

    printf("[gloves] CreatePaintKit: %s\n",
        g_createPaintKit ? "FOUND" : "NOT FOUND");

    printf("[gloves] SetBodyGroup: %s\n",
        g_setBodyGroup ? "FOUND" : "NOT FOUND");
}

DWORD WINAPI ExperimentThread(LPVOID)
{
    AllocConsole();

    FILE* console = nullptr;
    freopen_s(&console, "CONOUT$", "w", stdout);

    printf("[n1ssan-gloves] Checkpoint 1 starting\n");

    ResolveGloveFunctions();
    ResolveGameAllocator();

    const bool schemaReady = GlovesSchema::Initialize("client.dll");

    printf("[gloves] Schema: %s\n",
        schemaReady ? "READY" : "FAILED");

    if (schemaReady)
    {
        printf("[gloves] C_EconItemView::m_AttributeList = 0x%X\n",
            GlovesSchema::Get("C_EconItemView", "m_AttributeList"));

        printf("[gloves] CAttributeList::m_Attributes = 0x%X\n",
            GlovesSchema::Get("CAttributeList", "m_Attributes"));
    }

    printf("[n1ssan-gloves] Checkpoint 1 complete\n");
    return 0;
}

BOOL APIENTRY DllMain(
    HMODULE hModule,
    DWORD reason,
    LPVOID)
{
    if (reason == DLL_PROCESS_ATTACH)
    {
        DisableThreadLibraryCalls(hModule);

        HANDLE thread = CreateThread(
            nullptr, 0, ExperimentThread, nullptr, 0, nullptr);

        if (thread)
            CloseHandle(thread);
    }

    return TRUE;
}
