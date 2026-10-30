
#pragma once

#include <cstdint>
#include "../config/hardcoded_gloves.h"

namespace Gloves
{
    struct ActiveConfig
    {
        std::uint16_t definitionIndex = 0;
        int paintKit = 0;
        int seed = 0;
        float wear = 0.0001f;
        bool enabled = false;
    };

    inline ActiveConfig GetConfigForTeam(int team)
    {
        if (!HardcodedGloves::ENABLED)
            return {};

        // Only player teams are valid.
        if (team != 2 && team != 3)
            return {};

        const auto& selection = HardcodedGloves::ForTeam(team);

        return {
            selection.definitionIndex,
            selection.paintKit,
            selection.seed,
            selection.wear,
            selection.definitionIndex != 0
        };
    }
}
