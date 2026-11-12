#pragma once
// Included inside dfcn after the native headers. Only this boundary knows the
// game's STL layouts; all capture policy consumes borrowed text/row views.
#ifdef _WIN32
struct GameString {
    union {
        char small[16];
        char *heap;
    } storage;
    size_t size;
    size_t capacity;

    char *data() {
        return capacity <= 15 ? storage.small : storage.heap;
    }
};
static_assert(sizeof(GameString) == 32);

static bool game_string_view(const GameString *value,
                             std::string_view *view,
                             size_t maximum) {
    if (!value || !view || value->size > value->capacity ||
        value->size > maximum) {
        return false;
    }
    const char *data = value->capacity <= 15
        ? value->storage.small
        : value->storage.heap;
    if (!data && value->size != 0) return false;
    *view = std::string_view(data ? data : "", value->size);
    return true;
}

using NativeString = GameString;
using NativeJustification = unsigned int;
#else
using NativeString = std::string;
using NativeJustification = justification;
#endif

// Both verified game runtimes use the same three-pointer vector storage.
// These views never allocate or destroy native elements.
template<typename T> struct NativeBorrowedVector {
    T *begin = nullptr;
    T *end = nullptr;
    T *capacity = nullptr;
    size_t size() const {
        const auto first = reinterpret_cast<uintptr_t>(begin);
        const auto last = reinterpret_cast<uintptr_t>(end);
        return first && first <= last ? (last - first) / sizeof(T) : 0;
    }
    bool valid(size_t maximum = 1u << 20) const {
        const auto first = reinterpret_cast<uintptr_t>(begin);
        const auto last = reinterpret_cast<uintptr_t>(end);
        const auto limit = reinterpret_cast<uintptr_t>(capacity);
        if (!first && !last && !limit) return true;
        return first && first <= last && last <= limit &&
            (last - first) % sizeof(T) == 0 && (limit - first) % sizeof(T) == 0 &&
            (last - first) / sizeof(T) <= maximum;
    }
    static NativeBorrowedVector read(const void *address) {
        NativeBorrowedVector result;
        if (address) std::memcpy(&result, address, sizeof(result));
        return result;
    }
};
static_assert(sizeof(NativeBorrowedVector<void *>) == 3 * sizeof(void *));

static bool native_string_view(const NativeString *value, std::string_view *view,
                               size_t maximum = 262144) {
#ifdef _WIN32
    return game_string_view(value, view, maximum);
#else
    if (!value || !view || value->size() > maximum) return false;
    *view = *value;
    return true;
#endif
}

static char *native_string_data(NativeString *value) { return value->data(); }
static NativeString native_empty_string() {
    NativeString result{};
#ifdef _WIN32
    result.capacity = 15;
#endif
    return result;
}
// Only shrink or restore an already owned buffer; never allocate through a
// different C++ runtime. Callers retain any bytes overwritten by truncation.
static bool native_string_set_length(NativeString *value, size_t length) noexcept {
    if (!value) return false;
#ifdef _WIN32
    if (length > value->capacity) return false;
    value->size = length;
    value->data()[length] = '\0';
#else
    if (length > value->capacity()) return false;
    try { value->resize(length); } catch (...) { return false; }
#endif
    return true;
}

static size_t native_paragraph_row_count(const void *box) {
    if (!box) return SIZE_MAX;
    const auto rows = NativeBorrowedVector<NativeString *>::read(box);
    return rows.valid(262144) ? rows.size() : SIZE_MAX;
}

static const NativeString *native_paragraph_row(const void *box, size_t index) {
    if (!box) return nullptr;
    const auto rows = NativeBorrowedVector<NativeString *>::read(box);
    return rows.valid(262144) && index < rows.size() ? rows.begin[index] : nullptr;
}

struct NativeKnowledgeColoredRow { char text[769]; char colors[769]; };
struct NativeKnowledgeTextBox {
    NativeBorrowedVector<NativeKnowledgeColoredRow *> rows;
    int32_t width;
};

using NativeKnowledgeWrapFn = void (*)(NativeKnowledgeTextBox *, const NativeString *);
static NativeKnowledgeWrapFn g_real_native_knowledge_wrap = nullptr;

static size_t native_reading_row_count(const NativeKnowledgeTextBox *box) {
    return box && box->rows.valid(16384) ? box->rows.size() : SIZE_MAX;
}
static const NativeKnowledgeColoredRow *native_reading_row_at(
        const NativeKnowledgeTextBox *box, size_t index) {
    return box && box->rows.valid(16384) && index < box->rows.size() ? box->rows.begin[index] : nullptr;
}
static NativeKnowledgeColoredRow *native_append_reading_row(NativeKnowledgeTextBox *box) {
    const size_t before = native_reading_row_count(box);
    if (!g_real_native_knowledge_wrap || before >= 16384) return nullptr;
    NativeString empty = native_empty_string();
    // The native empty-source branch owns allocation and vector growth on
    // every host. This address bypasses our capture hook.
    g_real_native_knowledge_wrap(box, &empty);
    if (native_reading_row_count(box) != before + 1) return nullptr;
    NativeKnowledgeColoredRow *row = box->rows.begin[before];
    if (row) std::memset(row, 0, sizeof(*row));
    return row;
}

struct NativeCharacterLayout {
    size_t health_tab, health_sources, health_boxes, personality_sources, personality_boxes;
    int32_t description_tab;
    std::array<std::pair<size_t, size_t>, 2> thought_vectors;
};
#ifdef _WIN32
static constexpr NativeCharacterLayout native_character_layout{0x1c7c, 0x1c88, 0x1ca0, 0x1a90, 0x1aa8, 4,
    {{{0x17f8, 0x1810}, {0x1a50, 0x1a68}}}};
#else
static const NativeCharacterLayout &native_character_layout_data();
static const NativeCharacterLayout &native_character_layout = native_character_layout_data();
#endif

static bool native_character_description_active(const void *sheet, bool health) {
    if (!sheet) return false;
    if (!health) return true;
    int32_t tab = -1;
    std::memcpy(&tab, static_cast<const unsigned char *>(sheet) + native_character_layout.health_tab, sizeof(tab));
    return tab == native_character_layout.description_tab;
}
// Field offsets follow the pinned view_sheets_interfacest declarations:
// MSVC vector<bool> is 32 bytes, libstdc++ is 40. The recent-thought vectors
// precede the second bit vector; memory/personality vectors follow it.
static bool native_character_page(const void *sheet, bool health,
        std::vector<const NativeString *> &sources,
        std::vector<NativeKnowledgeTextBox *> &boxes, bool thoughts = false,
        const NativeKnowledgeTextBox *current_box = nullptr,
        const NativeString *current_source = nullptr,
        uintptr_t *page_owner = nullptr, const char *current_row = nullptr) {
    if (page_owner) *page_owner = 0;
    if (!sheet) return false;
    const auto *bytes = static_cast<const unsigned char *>(sheet);
    const auto &layout = native_character_layout;
    const auto read = [&](size_t source_offset, size_t box_offset) {
        const auto native_sources = NativeBorrowedVector<const NativeString *>::read(bytes + source_offset);
        const auto native_boxes = NativeBorrowedVector<NativeKnowledgeTextBox *>::read(bytes + box_offset);
        const size_t maximum = thoughts ? 16384 : 256;
        if (!native_sources.valid(maximum) || !native_boxes.valid(maximum) || native_sources.size() == 0 ||
            native_sources.size() != native_boxes.size()) return false;
        if (current_row) {
            // Existing pages can draw without another wrap. Identify that
            // page by the exact native row address, never by visible text.
            bool owns = false;
            for (size_t i = 0; i < native_boxes.size() && !owns; ++i) {
                const auto *part_box = native_boxes.begin[i];
                const size_t row_count = native_reading_row_count(part_box);
                if (row_count > 16384) return false;
                for (size_t row = 0; row < row_count; ++row) {
                    const auto *native_row = native_reading_row_at(part_box, row);
                    if (native_row && native_row->text == current_row) {
                        owns = true;
                        break;
                    }
                }
            }
            if (!owns) return false;
        } else if (current_box || current_source) {
            bool owns = false;
            for (size_t i = 0; i < native_boxes.size(); ++i)
                if (native_boxes.begin[i] == current_box && native_sources.begin[i] == current_source)
                    owns = true;
            if (!owns) return false;
        }
        sources.assign(native_sources.begin, native_sources.end);
        boxes.assign(native_boxes.begin, native_boxes.end);
        // Recent thoughts and memories coexist on the same sheet. Their
        // source-vector fields are stable, distinct document identities even
        // when switching tabs does not rebuild the existing text boxes.
        if (page_owner) *page_owner = reinterpret_cast<uintptr_t>(bytes + source_offset);
        return true;
    };
    if (thoughts) {
        for (const auto &[source_offset, box_offset] : layout.thought_vectors)
            if (read(source_offset, box_offset)) return true;
        return false;
    }
    return read(health ? layout.health_sources : layout.personality_sources,
        health ? layout.health_boxes : layout.personality_boxes);
}
