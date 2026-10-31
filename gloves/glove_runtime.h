
#pragma once

#include <cstdint>

namespace Gloves
{
    struct GameContext
    {
        void* pawn = nullptr;
        void* controller = nullptr;
        void* gloveItem = nullptr;

        int team = 0;
        int health = 0;
        float spawnTime = 0.0f;

        std::uint16_t currentDefinition = 0;
        std::uint32_t itemIdHigh = 0;
        bool initialized = false;
        bool needReapply = false;

        bool valid = false;
    };

    // Implemented by the game integration layer.
    bool GetGameContext(GameContext& context);

    // Implemented by the game integration layer.
    bool ApplyGloveItem(
        const GameContext& context,
        std::uint16_t definitionIndex,
        int paintKit,
        int seed,
        float wear
    );

    // Implemented by the game integration layer.
    bool ClearGloveItem(const GameContext& context);

    // Runtime entry point, called by the frame-stage integration.
    void Update();

}

