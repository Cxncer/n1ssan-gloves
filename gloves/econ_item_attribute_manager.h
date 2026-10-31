
#pragma once

class C_EconItemView;

namespace EconItemAttributeManager
{
    // PaintKit, seed and wear are the only attributes this glove subsystem needs.
    bool Create(
        C_EconItemView* item,
        int paintKit,
        float wear,
        int seed
    );

    void Remove(C_EconItemView* item);
}
