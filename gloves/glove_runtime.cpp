#include "glove_runtime.h"
#include "glove_state.h"
#include "glove_config.h"

#include <Windows.h>
#include <cstdio>
#include <algorithm>

namespace
{
    constexpr int APPLY_FRAMES = 4;
    constexpr int CLEAR_FRAMES = 2;
    constexpr std::uint64_t OWN_FLAG_FRAMES = 3;

    constexpr ULONGLONG FOLLOW_UP_DELAYS_MS[] =
    {
        400,
        1200,
        3000
    };

    std::uint16_t DefaultDefinition(int team)
    {
        if (team == 2)
            return 5028;

        if (team == 3)
            return 5029;

        return 0;
    }
}

namespace Gloves
{
    void Update()
    {
        RuntimeState& state = g_state;

        ++state.frame;

        GameContext context{};

        if (!GetGameContext(context) || !context.valid)
            return;

        ActiveConfig config = GetConfigForTeam(context.team);

        const bool customSelection =
            config.enabled && config.definitionIndex != 0;

        if (!customSelection)
        {
            if (!state.appliedCustomGloves)
                return;

            config.definitionIndex =
                DefaultDefinition(context.team);

            if (!config.definitionIndex)
                return;

            config.paintKit = 0;
            config.seed = 0;
            config.wear = 0.0001f;
        }

        config.seed =
            (std::clamp)(config.seed, 0, 1000);

        config.wear =
            (std::clamp)(config.wear, 0.0001f, 1.0f);

        if (customSelection &&
            config.paintKit > 0 &&
            context.currentDefinition == config.definitionIndex)
        {
            ConstructPaintKit(context.gloveItem);
        }

        const ULONGLONG now = GetTickCount64();

        const bool configChanged =
            config.definitionIndex != state.lastDefinition ||
            config.paintKit != state.lastPaintKit ||
            config.seed != state.lastSeed ||
            config.wear != state.lastWear;

        const bool teamChanged =
            state.lastTeam != 0xFF &&
            context.team != state.lastTeam;

        const bool pawnChanged =
            context.pawn != state.lastPawn;

        const bool spawnChanged =
            context.spawnTime != state.lastSpawnTime;

        const bool flagRaisedByGame =
            context.needReapply &&
            state.frame - state.lastWriteFrame >
            OWN_FLAG_FRAMES;

        const uint32_t expectedItemIdHigh =
            (config.definitionIndex == 5028 ||
                config.definitionIndex == 5029)
            ? 0u
            : 0xFFFFFFFFu;

        const bool itemWasReset =
            customSelection &&
            (
                context.currentDefinition != config.definitionIndex ||
                !context.initialized ||
                context.itemIdHigh != expectedItemIdHigh ||
                flagRaisedByGame
                );

        if (context.spawnTime !=
            state.followUpSpawnTime)
        {
            state.followUpSpawnTime =
                context.spawnTime;

            state.spawnSeenAt = now;
            state.followUpIndex = 0;
        }

        bool followUp = false;

        if (customSelection &&
            state.followUpIndex < 3 &&
            now - state.spawnSeenAt >=
            FOLLOW_UP_DELAYS_MS[state.followUpIndex])
        {
            followUp = true;
            ++state.followUpIndex;
        }

        if (teamChanged)
        {
            state.clearFrames = CLEAR_FRAMES;
            state.lastTeam =
                static_cast<std::uint8_t>(context.team);
        }

        if (configChanged ||
            teamChanged ||
            pawnChanged ||
            spawnChanged ||
            itemWasReset ||
            followUp)
        {
            state.updateFrames = APPLY_FRAMES;
        }

        if (state.clearFrames > 0)
        {
            if (!ClearGloveItem(context))
            {
                std::printf(
                    "[runtime] ClearGloveItem FAILED\n");

                state.clearFrames = 0;
                return;
            }

            state.lastWriteFrame = state.frame;
            --state.clearFrames;

            state.lastDefinition = 0;
            state.lastPaintKit = -1;
            state.lastSeed = -1;
            state.lastWear = -1.0f;

            return;
        }

        if (state.updateFrames <= 0)
            return;

        if (!ApplyGloveItem(
            context,
            config.definitionIndex,
            config.paintKit,
            config.seed,
            config.wear))
        {
            std::printf(
                "[runtime] APPLY FAILED "
                "def=%u paint=%d\n",
                config.definitionIndex,
                config.paintKit);

            state.updateFrames = 0;
            return;
        }

        state.lastWriteFrame = state.frame;
        --state.updateFrames;

        state.lastPawn = context.pawn;
        state.lastDefinition = config.definitionIndex;
        state.lastPaintKit = config.paintKit;
        state.lastSeed = config.seed;
        state.lastWear = config.wear;
        state.lastSpawnTime = context.spawnTime;
        state.lastTeam =
            static_cast<std::uint8_t>(context.team);

        state.appliedCustomGloves =
            customSelection;

        std::printf(
            "[runtime] APPLY remaining=%d "
            "pawn=%p def=%u paint=%d\n",
            state.updateFrames,
            context.pawn,
            config.definitionIndex,
            config.paintKit);
    }
}