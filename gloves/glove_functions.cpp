#include "glove_functions.h"

namespace
{
    GloveCreatePaintKitFn g_createPaintKit = nullptr;
    GloveSetBodyGroupFn g_setBodyGroup = nullptr;
    MemAllocFn g_memAlloc = nullptr;
    MemFreeFn g_memFree = nullptr;
}

namespace GloveFunctions
{
    void SetCreatePaintKit(GloveCreatePaintKitFn fn)
    {
        g_createPaintKit = fn;
    }

    void SetSetBodyGroup(GloveSetBodyGroupFn fn)
    {
        g_setBodyGroup = fn;
    }

    void SetMemAlloc(MemAllocFn fn)
    {
        g_memAlloc = fn;
    }

    void SetMemFree(MemFreeFn fn)
    {
        g_memFree = fn;
    }

    GloveCreatePaintKitFn GetCreatePaintKit()
    {
        return g_createPaintKit;
    }

    GloveSetBodyGroupFn GetSetBodyGroup()
    {
        return g_setBodyGroup;
    }

    MemAllocFn GetMemAlloc()
    {
        return g_memAlloc;
    }

    MemFreeFn GetMemFree()
    {
        return g_memFree;
    }
}