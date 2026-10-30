
#include "glove_functions.h"

// These are defined in dllmain.cpp.
// We'll update the bootstrap to expose them through this interface.
extern GloveCreatePaintKitFn g_createPaintKit;
extern GloveSetBodyGroupFn g_setBodyGroup;
extern MemAllocFn g_memAlloc;
extern MemFreeFn g_memFree;

namespace GloveFunctions
{
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
