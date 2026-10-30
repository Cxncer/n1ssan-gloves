
#include "econ_item_attribute_manager.h"

#include <Windows.h>
#include <cstddef>
#include <cstdint>
#include <cstring>

#include "glove_memory.h"

namespace
{
    struct EconItemAttribute
    {
        char pad0000[0x30];
        std::uint16_t definitionIndex;
        char pad0032[2];
        float value;
        float initialValue;
        std::int32_t refundableCurrency;
        bool setBonus;
        char pad0041[7];
    };

    static_assert(sizeof(EconItemAttribute) == 0x48);

    struct AttributeVector
    {
        std::int32_t size;
        std::int32_t pad;
        std::uintptr_t data;
        std::int32_t allocationCount;
        std::int32_t growSizeAndFlags;
    };

    constexpr std::int32_t VECTOR_FIXED_FLAGS = 0x40000000;

    constexpr std::uint16_t ATTR_PAINT = 6;
    constexpr std::uint16_t ATTR_SEED = 7;
    constexpr std::uint16_t ATTR_WEAR = 8;

    // IMPORTANT:
    // This offset must be verified against the current Lootline schema
    // before enabling Create/Remove in a live game.
    constexpr std::ptrdiff_t ATTRIBUTE_LIST_OFFSET = 0x208;

    AttributeVector* GetAttributeVector(C_EconItemView* item)
    {
        if (!item)
            return nullptr;

        auto* bytes = reinterpret_cast<std::uint8_t*>(item);

        // C_EconItemView -> m_AttributeList -> m_Attributes.
        // The AttributeList vector is at offset +0x08 within the list.
        auto* attributeList = bytes + ATTRIBUTE_LIST_OFFSET;

        return reinterpret_cast<AttributeVector*>(attributeList + 0x08);
    }

    void SetFloatAttribute(
        EconItemAttribute& attribute,
        std::uint16_t definitionIndex,
        float value)
    {
        attribute.definitionIndex = definitionIndex;
        attribute.value = value;
        attribute.initialValue = value;
    }
}

namespace EconItemAttributeManager
{
    void Create(
        C_EconItemView* item,
        int paintKit,
        float wear,
        int seed)
    {
        if (!item || !Gloves::MemoryReady() || paintKit <= 0)
            return;

        AttributeVector* vector = GetAttributeVector(item);

        if (!vector)
            return;

        // Do not overwrite an existing attribute allocation.
        if (vector->size != 0 || vector->data != 0)
            return;

        constexpr std::size_t ATTRIBUTE_COUNT = 3;
        constexpr std::size_t EXTRA_CAPACITY = 8;

        const std::size_t capacity =
            ATTRIBUTE_COUNT + EXTRA_CAPACITY;

        auto* attributes = static_cast<EconItemAttribute*>(
            Gloves::Allocate(capacity * sizeof(EconItemAttribute)));

        if (!attributes)
            return;

        std::memset(
            attributes,
            0,
            capacity * sizeof(EconItemAttribute));

        SetFloatAttribute(
            attributes[0],
            ATTR_PAINT,
            static_cast<float>(paintKit));

        SetFloatAttribute(
            attributes[1],
            ATTR_SEED,
            static_cast<float>(seed < 0 ? 0 : seed));

        SetFloatAttribute(
            attributes[2],
            ATTR_WEAR,
            wear < 0.0f ? 0.01f : wear);

        vector->size = static_cast<std::int32_t>(ATTRIBUTE_COUNT);
        vector->pad = 0;
        vector->data =
            reinterpret_cast<std::uintptr_t>(attributes);
        vector->allocationCount =
            static_cast<std::int32_t>(capacity);
        vector->growSizeAndFlags = VECTOR_FIXED_FLAGS;
    }

    void Remove(C_EconItemView* item)
    {
        if (!item)
            return;

        AttributeVector* vector = GetAttributeVector(item);

        if (!vector)
            return;

        void* oldData =
            reinterpret_cast<void*>(vector->data);

        vector->size = 0;
        vector->pad = 0;
        vector->data = 0;
        vector->allocationCount = 0;
        vector->growSizeAndFlags = 0;

        if (oldData)
            Gloves::Free(oldData);
    }
}
