
#pragma once

#include <cstdint>

namespace GlovesSchema
{
    bool Initialize(const char* moduleName);
    std::uint32_t Get(const char* className, const char* fieldName);
    bool IsReady();
}
