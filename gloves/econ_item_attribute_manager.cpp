#include "econ_item_attribute_manager.h"

#include <Windows.h>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <mutex>
#include <unordered_map>
#include <cstdio>

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
        if (!item)
        {
            std::printf("[attr] vector lookup FAILED: null item\n");
            return nullptr;
        }

        if (!GlovesSchema::IsReady())
        {
            std::printf("[attr] vector lookup FAILED: schema not ready\n");
            return nullptr;
        }

        std::uint32_t listOffset = 0;
        std::uint32_t attributesOffset = 0;

        if (!GlovesSchema::TryGet(
            "C_EconItemView",
            "m_AttributeList",
            listOffset))
        {
            std::printf("[attr] FAILED: m_AttributeList not found\n");
            return nullptr;
        }

        if (!GlovesSchema::TryGet(
            "CAttributeList",
            "m_Attributes",
            attributesOffset))
        {
            std::printf("[attr] FAILED: m_Attributes not found\n");
            return nullptr;
        }

        auto* bytes = reinterpret_cast<std::uint8_t*>(item);
        auto* attributeList = bytes + listOffset;

        auto* vector = reinterpret_cast<AttributeVector*>(
            attributeList + attributesOffset);

        std::printf(
            "[attr] vector resolved item=%p vector=%p listOffset=0x%X attributesOffset=0x%X\n",
            static_cast<void*>(item),
            static_cast<void*>(vector),
            listOffset,
            attributesOffset);

        return vector;
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
        std::printf(
            "[attr] Create ENTER item=%p paint=%d wear=%.6f seed=%d\n",
            static_cast<void*>(item), paintKit, wear, seed);

        if (!item)
        {
            std::printf("[attr] Create ABORT: null item\n");
            return;
        }

        if (!Gloves::MemoryReady())
        {
            std::printf("[attr] Create ABORT: allocator not ready\n");
            return;
        }

        if (paintKit <= 0)
        {
            std::printf("[attr] Create ABORT: invalid paintKit\n");
            return;
        }

        AttributeVector* vector = GetAttributeVector(item);

        if (!vector)
        {
            std::printf("[attr] Create ABORT: vector lookup failed\n");
            return;
        }

        std::lock_guard<std::mutex> lock(g_attributeMutex);

        std::printf(
            "[attr] Create current size=%d data=%p capacity=%d flags=0x%X\n",
            vector->size,
            reinterpret_cast<void*>(vector->data),
            vector->allocationCount,
            static_cast<unsigned>(vector->growSizeAndFlags));

        if (vector->size != 0 || vector->data != 0)
        {
            std::printf("[attr] Create ABORT: vector already populated\n");
            return;
        }

        if (g_ownedAttributes.find(item) != g_ownedAttributes.end())
        {
            std::printf("[attr] Create ABORT: item already owned\n");
            return;
        }

        constexpr std::size_t capacity =
            ATTRIBUTE_COUNT + EXTRA_CAPACITY;

        constexpr std::size_t allocationSize =
            capacity * sizeof(EconItemAttribute);

        auto* attributes = static_cast<EconItemAttribute*>(
            Gloves::Allocate(allocationSize));

        std::printf(
            "[attr] Allocate size=%zu result=%p\n",
            allocationSize,
            static_cast<void*>(attributes));

        if (!attributes)
        {
            std::printf("[attr] Create ABORT: allocation failed\n");
            return;
        }

        std::memset(attributes, 0, allocationSize);

        SetFloatAttribute(
            attributes[0], ATTR_PAINT, static_cast<float>(paintKit));

        SetFloatAttribute(
            attributes[1], ATTR_SEED,
            static_cast<float>(seed < 0 ? 0 : seed));

        SetFloatAttribute(
            attributes[2], ATTR_WEAR,
            wear < 0.0f ? 0.01f : wear);

        try
        {
            const auto result =
                g_ownedAttributes.emplace(item, attributes);

            if (!result.second)
            {
                std::printf("[attr] Create ABORT: ownership registration failed\n");
                Gloves::Free(attributes);
                return;
            }
        }
        catch (...)
        {
            std::printf("[attr] Create ABORT: ownership registration exception\n");
            Gloves::Free(attributes);
            return;
        }

        vector->size = static_cast<std::int32_t>(ATTRIBUTE_COUNT);
        vector->pad = 0;
        vector->data = reinterpret_cast<std::uintptr_t>(attributes);
        vector->allocationCount = static_cast<std::int32_t>(capacity);
        vector->growSizeAndFlags = VECTOR_FIXED_FLAGS;

        std::printf(
            "[attr] Create SUCCESS item=%p data=%p size=%d capacity=%d flags=0x%X\n",
            static_cast<void*>(item),
            static_cast<void*>(attributes),
            vector->size,
            vector->allocationCount,
            static_cast<unsigned>(vector->growSizeAndFlags));
    }

    void Remove(C_EconItemView* item)
    {
        std::printf(
            "[attr] Remove ENTER item=%p\n",
            static_cast<void*>(item));

        if (!item)
        {
            std::printf("[attr] Remove ABORT: null item\n");
            return;
        }

        if (!Gloves::MemoryReady())
        {
            std::printf("[attr] Remove ABORT: allocator not ready\n");
            return;
        }

        AttributeVector* vector = GetAttributeVector(item);

        if (!vector)
        {
            std::printf("[attr] Remove ABORT: vector lookup failed\n");
            return;
        }

        std::lock_guard<std::mutex> lock(g_attributeMutex);

        const auto it = g_ownedAttributes.find(item);

        std::printf(
            "[attr] Remove current size=%d data=%p owned=%s\n",
            vector->size,
            reinterpret_cast<void*>(vector->data),
            it != g_ownedAttributes.end() ? "YES" : "NO");

        if (it == g_ownedAttributes.end())
        {
            std::printf("[attr] Remove ABORT: no owned allocation\n");
            return;
        }

        EconItemAttribute* ownedMemory = it->second;

        if (vector->data != reinterpret_cast<std::uintptr_t>(ownedMemory))
        {
            std::printf(
                "[attr] Remove ABORT: ownership mismatch vector=%p owned=%p\n",
                reinterpret_cast<void*>(vector->data),
                static_cast<void*>(ownedMemory));

            return;
        }

        vector->size = 0;
        vector->pad = 0;
        vector->data = 0;
        vector->allocationCount = 0;
        vector->growSizeAndFlags = 0;

        g_ownedAttributes.erase(it);

        Gloves::Free(ownedMemory);

        std::printf(
            "[attr] Remove RELEASE INVOKED item=%p allocation=%p\n",
            static_cast<void*>(item),
            static_cast<void*>(ownedMemory));
    }
}