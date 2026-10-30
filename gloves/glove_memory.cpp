
#include "glove_memory.h"

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
}
