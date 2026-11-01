#pragma once

#include <cstdint>

namespace HardcodedGloves
{
    struct GloveSelection
    {
        std::uint16_t definitionIndex;
        int paintKit;
        int seed;
        float wear;
    };

    // T-side: Gloves
    inline constexpr GloveSelection T =
    {
        5031,
        1400,
        0,
        0.10f
    };

    // CT-side: Gloves
    inline constexpr GloveSelection CT =
    {
        5032,
        10053,
        0,
        0.10f
    };

    inline constexpr bool ENABLED = true;

    constexpr const GloveSelection& ForTeam(int team)
    {
        return team == 2 ? T : CT;
    }
}