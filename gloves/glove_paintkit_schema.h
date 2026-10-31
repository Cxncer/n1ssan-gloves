#pragma once

#include "glove_functions.h"

namespace GlovePaintKitSchema
{
    bool Initialize();
    const char* GetName(int paintKitId);
    bool RepairGeneratedName(CPaintKit* generated, int paintKitId);
}