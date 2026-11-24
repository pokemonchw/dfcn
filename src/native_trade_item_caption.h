#pragma once

#include <cstdint>
#include <string>

// Owned snapshot of the actual item passed to the trade name formatter.
// Native pointers are identities only; translation never dereferences them.
struct NativeTradeItemCaption {
    uintptr_t owner = 0;
    int32_t id = -1, type = -1, subtype = -1;
    int32_t material = -1, material_index = -1, count = 1;
    uint32_t flags = 0, flags2 = 0;
    int32_t quality = 0, wear = 0;
    bool right = false, left = false, semantic_name = false;
    bool typed_identity = false;
    std::string source, raw_name, raw_adjective, size_adjective, definition_id;
    std::string material_id, material_prefix, material_state;
};
