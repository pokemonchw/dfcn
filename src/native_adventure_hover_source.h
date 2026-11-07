#pragma once

#include <cstdint>
#include <cstddef>
#include <array>
#include <memory>
#include <string>
#include <vector>

namespace dfcn {

// Immutable source identity copied while the real addst argument is live.
// The semantic member identifies the document; its spelling never does.
struct NativeAdventureHoverDocument {
    struct Row {
        uintptr_t address = 0;
        std::string source;
        bool operator==(const Row &) const = default;
    };
    uintptr_t screen = 0, vector = 0, begin = 0, end = 0, capacity = 0;
    uintptr_t index_address = 0;
    int32_t index = -1;
    uint64_t epoch = 0;
    std::vector<Row> rows;
    bool operator==(const NativeAdventureHoverDocument &) const = default;
};

// One candidate raster transaction. Every source and destination cell is
// checked before any source glyph is removed from the native input copy.
struct NativeAdventureHoverPaint {
    struct Span { int x = 0, y = 0; std::string source; };
    struct Output {
        std::string target, source;
        std::array<int, 18> geometry{};
        std::array<int, 4> clip{};
        uint32_t flags = 0;
        std::vector<std::string> justified;
        std::vector<int> foregrounds;
        bool operator==(const Output &) const = default;
    };
    struct Cell {
        size_t at = 0;
        std::array<unsigned char, 8> bytes{};
        std::array<uint64_t, 5> textures{};
        uint32_t flags = 0;
    };
    std::shared_ptr<const NativeAdventureHoverDocument> document;
    const unsigned char *grid = nullptr;
    int dimx = 0, dimy = 0;
    bool top = false;
    uint64_t revision = 0;
    size_t match_count = 0;
    std::vector<Span> sources;
    std::vector<Output> outputs;
    std::vector<Cell> cells;
};

static std::shared_ptr<const NativeAdventureHoverDocument>
    capture_native_adventure_hover_document(uintptr_t source);

} // namespace dfcn
