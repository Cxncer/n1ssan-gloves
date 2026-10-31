
#pragma once

#include <cstdint>

namespace Gloves
{
    struct RuntimeState
    {
        void* lastPawn = nullptr;

        std::uint16_t lastDefinition = 0;
        int lastPaintKit = -1;
        int lastSeed = -1;
        float lastWear = -1.0f;

        float lastSpawnTime = -1.0f;
        std::uint8_t lastTeam = 0xFF;

        int updateFrames = 0;
        int clearFrames = 0;

        std::uint64_t frame = 0;
        std::uint64_t lastWriteFrame = 0;

        std::uint64_t spawnSeenAt = 0;
        int followUpIndex = 0;

        bool appliedCustomGloves = false;
        float followUpSpawnTime = -1.0f;
    };

    inline RuntimeState g_state{};
}
