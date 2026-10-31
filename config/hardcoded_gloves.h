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

    // T-side: Sport Gloves | Blaze
    inline constexpr GloveSelection T =
    {
        5030,
        1407,
        0,
        0.10f
    };

    // CT-side: Specialist Gloves | Cloud Chaser
    inline constexpr GloveSelection CT =
    {
        5034,
        1440,
        0,
        0.10f
    };

    inline constexpr bool ENABLED = true;

    constexpr const GloveSelection& ForTeam(int team)
    {
        return team == 2 ? T : CT;
    }
}