

#include "glove_memory.h"
#include <cstdio>
#include <cstdint>

#include <atomic>

namespace
{
    std::atomic<Gloves::MemAllocFn> g_alloc{ nullptr };
    std::atomic<Gloves::MemFreeFn> g_free{ nullptr };
}

namespace Gloves
{
    void SetMemoryFunctions(MemAllocFn alloc, MemFreeFn free)
    {
        g_alloc.store(alloc, std::memory_order_release);
        g_free.store(free, std::memory_order_release);
    }

    void* Allocate(std::size_t size)
    {
        const auto fn = g_alloc.load(std::memory_order_acquire);
        return fn && size ? fn(size) : nullptr;
    }

    void Free(void* memory)
    {
        if (!memory)
            return;

        const auto fn = g_free.load(std::memory_order_acquire);

        if (fn)
            fn(memory);
    }

    bool MemoryReady()
    {
        return
            g_alloc.load(std::memory_order_acquire) != nullptr &&
            g_free.load(std::memory_order_acquire) != nullptr;
    }

    bool AllocatorSmokeTest()
    {
        constexpr std::size_t TEST_SIZE = 64;
        constexpr std::uint64_t TEST_VALUE = 0x4E315353414EULL;

        if (!MemoryReady())
        {
            printf("[gloves] allocator smoke test: SKIPPED (not ready)\n");
            return false;
        }

        void* memory = Allocate(TEST_SIZE);

        if (!memory)
        {
            printf("[gloves] allocator smoke test: FAILED (allocation returned null)\n");
            return false;
        }

        auto* value = static_cast<std::uint64_t*>(memory);
        *value = TEST_VALUE;

        const bool writeReadPassed = (*value == TEST_VALUE);

        printf("[gloves] allocator smoke test: allocation=%s write_read=%s\n",
            memory ? "PASS" : "FAIL",
            writeReadPassed ? "PASS" : "FAIL");

        Free(memory);

        printf("[gloves] allocator smoke test: free invoked\n");

        return writeReadPassed;
    }
}


