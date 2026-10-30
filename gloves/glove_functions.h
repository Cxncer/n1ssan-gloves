
#pragma once

#include <cstddef>

using GloveCreatePaintKitFn = void* (__fastcall*)(void* item);
using GloveSetBodyGroupFn = void(__fastcall*)(
    void* pawn,
    const char* group,
    unsigned int value
    );

using MemAllocFn = void* (__fastcall*)(std::size_t size);
using MemFreeFn = void(__fastcall*)(void* ptr);

namespace GloveFunctions
{
    GloveCreatePaintKitFn GetCreatePaintKit();
    GloveSetBodyGroupFn GetSetBodyGroup();

    MemAllocFn GetMemAlloc();
    MemFreeFn GetMemFree();
}
