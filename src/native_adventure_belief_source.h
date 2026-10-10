#pragma once

#include <cstdint>
#include <optional>
#include <string>
#include <vector>

namespace dfcn {

struct NativeAdventureBeliefCacheRow {
    uintptr_t address = 0;
    std::string source;
};

struct NativeAdventureBeliefCache {
    uintptr_t screen = 0, owner = 0;
    int32_t practice = -1;
    std::vector<NativeAdventureBeliefCacheRow> rows;
    std::vector<std::string> paragraphs;
};

static std::optional<NativeAdventureBeliefCache> native_adventure_belief_cache();

} // namespace dfcn
