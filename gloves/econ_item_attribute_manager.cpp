#include "econ_item_attribute_manager.h"

#include <Windows.h>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <mutex>
#include <unordered_map>

#include "glove_memory.h"
#include "glove_schema.h"

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

    constexpr std::size_t ATTRIBUTE_COUNT = 3;
    constexpr std::size_t EXTRA_CAPACITY = 8;

    // Track only allocations created by n1ssan.
    std::unordered_map<C_EconItemView*, EconItemAttribute*> g_ownedAttributes;
    std::mutex g_attributeMutex;

    AttributeVector* GetAttributeVector(C_EconItemView* item)
    {
        if (!item || !GlovesSchema::IsReady())
            return nullptr;

        std::uint32_t attributeListOffset = 0;
        std::uint32_t attributesOffset = 0;

        if (!GlovesSchema::TryGet(
            "C_EconItemView",
            "m_AttributeList",
            attributeListOffset))
        {
            return nullptr;
        }

        if (!GlovesSchema::TryGet(
            "CAttributeList",
            "m_Attributes",
            attributesOffset))
        {
            return nullptr;
        }

        auto* bytes = reinterpret_cast<std::uint8_t*>(item);

        auto* attributeList = bytes + attributeListOffset;

        return reinterpret_cast<AttributeVector*>(
            attributeList + attributesOffset);
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
        if (!item || paintKit <= 0 || !Gloves::MemoryReady())
            return;

        AttributeVector* vector = GetAttributeVector(item);

        if (!vector)
            return;

        std::lock_guard<std::mutex> lock(g_attributeMutex);

        // Never overwrite an existing vector.
        if (vector->size != 0 || vector->data != 0)
            return;

        // Prevent duplicate allocations for the same item.
        if (g_ownedAttributes.find(item) != g_ownedAttributes.end())
            return;

        constexpr std::size_t capacity =
            ATTRIBUTE_COUNT + EXTRA_CAPACITY;

        const std::size_t allocationSize =
            capacity * sizeof(EconItemAttribute);

        auto* attributes = static_cast<EconItemAttribute*>(
            Gloves::Allocate(allocationSize));

        if (!attributes)
            return;

        std::memset(attributes, 0, allocationSize);

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

        // Register ownership before exposing the allocation to the game.
        try
        {
            const auto result = g_ownedAttributes.emplace(item, attributes);

            if (!result.second)
            {
                Gloves::Free(attributes);
                return;
            }
        }
        catch (...)
        {
            Gloves::Free(attributes);
            return;
        }

        vector->size = static_cast<std::int32_t>(ATTRIBUTE_COUNT);
        vector->pad = 0;
        vector->data = reinterpret_cast<std::uintptr_t>(attributes);
        vector->allocationCount = static_cast<std::int32_t>(capacity);
        vector->growSizeAndFlags = VECTOR_FIXED_FLAGS;
    }

    void Remove(C_EconItemView* item)
    {
        if (!item || !Gloves::MemoryReady())
            return;

        AttributeVector* vector = GetAttributeVector(item);

        if (!vector)
            return;

        std::lock_guard<std::mutex> lock(g_attributeMutex);

        const auto it = g_ownedAttributes.find(item);

        // Do not free memory that n1ssan does not own.
        if (it == g_ownedAttributes.end())
            return;

        EconItemAttribute* ownedMemory = it->second;

        // If the game has changed the vector pointer, do not touch it.
        // Retain our ownership record rather than risking corruption.
        if (vector->data != reinterpret_cast<std::uintptr_t>(ownedMemory))
            return;

        // Clear the vector before releasing its backing allocation.
        vector->size = 0;
        vector->pad = 0;
        vector->data = 0;
        vector->allocationCount = 0;
        vector->growSizeAndFlags = 0;

        g_ownedAttributes.erase(it);

        Gloves::Free(ownedMemory);
    }
}