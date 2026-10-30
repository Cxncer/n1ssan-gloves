#pragma once

#include <cstddef>

namespace Gloves
{
    using MemAllocFn = void* (__fastcall*)(std::size_t);
    using MemFreeFn = void(__fastcall*)(void*);

    void SetMemoryFunctions(MemAllocFn alloc, MemFreeFn free);

    void* Allocate(std::size_t size);
    void Free(void* memory);
    bool MemoryReady();

    bool AllocatorSmokeTest();
}