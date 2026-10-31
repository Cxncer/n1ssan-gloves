#pragma once

#include <cstddef>
#include <cstdint>

struct CPaintKit
{
    int m_ID;
    std::uint32_t m_Pad04;
    const char* m_Name;
    const char* m_DescriptionString;
    const char* m_DescriptionTag;
    std::byte m_Pad20[0x24];
    int m_Rarity;
    std::byte m_Pad48[0x66];
    bool m_UsesOldModel;
};

using GloveCreatePaintKitFn = CPaintKit * (__fastcall*)(void* item);

using GloveSetBodyGroupFn = void(__fastcall*)(
    void* pawn,
    const char* group,
    unsigned int value
    );

using MemAllocFn = void* (__fastcall*)(std::size_t size);
using MemFreeFn = void(__fastcall*)(void* ptr);

namespace GloveFunctions
{
    void SetCreatePaintKit(GloveCreatePaintKitFn fn);
    void SetSetBodyGroup(GloveSetBodyGroupFn fn);

    GloveCreatePaintKitFn GetCreatePaintKit();
    GloveSetBodyGroupFn GetSetBodyGroup();
}