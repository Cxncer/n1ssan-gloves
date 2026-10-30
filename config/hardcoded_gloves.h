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

    // CS2 default glove definitions.
    inline constexpr std::uint16_t DEFAULT_T_GLOVES = 5028;
    inline constexpr std::uint16_t DEFAULT_CT_GLOVES = 5029;

    // TODO: Replace paintKit values with the exact finishes we select.
    // A paintKit of 0 means use the glove definition without a custom finish.
    inline constexpr GloveSelection T =
    {
        DEFAULT_T_GLOVES,
        0,          // paint kit
        0,          // seed
        0.0001f     // wear
    };

    inline constexpr GloveSelection CT =
    {
        DEFAULT_CT_GLOVES,
        0,          // paint kit
        0,          // seed
        0.0001f     // wear
    };

    inline constexpr bool ENABLED = true;

    constexpr const GloveSelection& ForTeam(int team)
    {
        // CS2: T = 2, CT = 3.
        return team == 2 ? T : CT;
    }
}