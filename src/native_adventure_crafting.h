#pragma once

#include <cstdint>

namespace dfcn {

// Roles are bound to the decompiled crafting renderer's actual addst
// callers. The same caption caller prints either category.name or
// reaction.name; it never prints a generated personal name.
enum class NativeAdventureCraftingRole {
    None,
    Caption,
    Description,
    Needs,
    ReagentPrompt,
    Item,
    Message,
};

static NativeAdventureCraftingRole native_adventure_crafting_role(
    uintptr_t caller, uintptr_t source = 0);

} // namespace dfcn
