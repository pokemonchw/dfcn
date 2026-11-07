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

#ifdef _WIN32
using NativeCharacterMember = native_history_abi::FieldOffset;
#else
using NativeCharacterMember = size_t;
#endif
struct NativeCharacterLayout {
    NativeCharacterMember health_tab, health_sources, health_boxes, personality_sources, personality_boxes;
    int32_t description_tab;
    std::array<std::pair<NativeCharacterMember, NativeCharacterMember>, 2> thought_vectors;
    NativeCharacterMember recent_thought_width;
};
#ifdef _WIN32
static constexpr NativeCharacterLayout native_character_layout{
    {0x1c7c, "view_sheets_interfacest", "unit_health_active_tab"},
    {0x1c88, "view_sheets_interfacest", "unit_health_raw_str"},
    {0x1ca0, "view_sheets_interfacest", "unit_health_box"},
    {0x1a90, "view_sheets_interfacest", "personality_raw_str"},
    {0x1aa8, "view_sheets_interfacest", "personality_box"}, 4,
    {{{{0x17f8, "view_sheets_interfacest", "raw_thought_str"},
       {0x1810, "view_sheets_interfacest", "thought_box"}},
      {{0x1a50, "view_sheets_interfacest", "thoughts_raw_memory_str"},
       {0x1a68, "view_sheets_interfacest", "thoughts_memory_box"}}}},
    {0x1828, "view_sheets_interfacest", "thought_box_width"}};
#else
static constexpr NativeCharacterLayout native_character_layout{0x1c8c, 0x1c98, 0x1cb0, 0x1aa0, 0x1ab8, 4,
    {{{0x1800, 0x1818}, {0x1a60, 0x1a78}}}, 0x1830};
#endif

static const void *native_character_field_address(const void *sheet,
        const NativeCharacterMember &member, size_t width) noexcept {
#ifdef _WIN32
    return native_object_member_address(sheet, member, width);
#else
    const auto address = reinterpret_cast<uintptr_t>(sheet);
    if (!address || member > UINTPTR_MAX - address || width > UINTPTR_MAX - address - member) return nullptr;
    return reinterpret_cast<const void *>(address + member);
#endif
}
static bool native_character_page_fields_available(const void *sheet, bool health, bool thoughts) {
    constexpr size_t vector_size = sizeof(NativeBorrowedVector<void *>);
    const auto pair = [&](const auto &source, const auto &box) {
        return native_character_field_address(sheet, source, vector_size) &&
            native_character_field_address(sheet, box, vector_size);
    };
    const auto &layout = native_character_layout;
    if (!thoughts) return pair(health ? layout.health_sources : layout.personality_sources,
        health ? layout.health_boxes : layout.personality_boxes);
    // Before a newly wrapped box joins its vectors, its thought-page identity
    // is not yet known. Provisional capture requires both page contracts;
    // aggregate capture below resolves each available page independently.
    for (const auto &[source, box] : layout.thought_vectors)
        if (!pair(source, box)) return false;
    return true;
}

static bool native_character_description_active(const void *sheet, bool health) {
    if (!sheet) return false;
    if (!health) return true;
    int32_t tab = -1;
    const auto *address = native_character_field_address(sheet, native_character_layout.health_tab, sizeof(tab));
    if (!address) return false;
    std::memcpy(&tab, address, sizeof(tab));
    return tab == native_character_layout.description_tab;
}
// Every Windows page resolves its two named vector fields independently.
// Their actual addresses also identify documents across tab changes.
static bool native_character_page(const void *sheet, bool health,
        std::vector<const NativeString *> &sources,
        std::vector<NativeKnowledgeTextBox *> &boxes, bool thoughts = false,
        const NativeKnowledgeTextBox *current_box = nullptr,
        const NativeString *current_source = nullptr,
        uintptr_t *page_owner = nullptr, const char *current_row = nullptr) {
    if (page_owner) *page_owner = 0;
    if (!sheet) return false;
    const auto &layout = native_character_layout;
    const auto read = [&](const NativeCharacterMember &source_offset, const NativeCharacterMember &box_offset) {
        const auto *source_address = native_character_field_address(sheet, source_offset,
            sizeof(NativeBorrowedVector<const NativeString *>));
        const auto *box_address = native_character_field_address(sheet, box_offset,
            sizeof(NativeBorrowedVector<NativeKnowledgeTextBox *>));
        if (!source_address || !box_address) return false;
        const auto native_sources = NativeBorrowedVector<const NativeString *>::read(source_address);
        const auto native_boxes = NativeBorrowedVector<NativeKnowledgeTextBox *>::read(box_address);
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
        if (page_owner) *page_owner = reinterpret_cast<uintptr_t>(source_address);
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

#ifdef _WIN32
// These indices describe named storage, not native page enum values.
enum class NativeCharacterRichGroup : size_t { Health, Personality, Recent, Memories };
struct NativeCharacterRichOwner {
    const void *sheet = nullptr;
    NativeKnowledgeTextBox *box = nullptr;
    const NativeString *source = nullptr;
    NativeCharacterRichGroup group{};
    uintptr_t page = 0;
    size_t index = 0;
    bool overview = false;
};
struct NativeCharacterRichIndex {
    struct Group {
        uintptr_t owner = 0;
        NativeBorrowedVector<const NativeString *> sources;
        NativeBorrowedVector<NativeKnowledgeTextBox *> boxes;
    };
    struct Entry {
        NativeCharacterRichOwner owner;
        NativeBorrowedVector<NativeKnowledgeColoredRow *> rows;
        int32_t width = 0;
        bool unique = true;
    };
    std::array<uintptr_t, 38> key{};
    std::array<Group, 4> groups{};
    std::vector<Entry> entries;
    std::unordered_map<const NativeKnowledgeTextBox *, size_t> boxes;
    std::unordered_map<const char *, std::pair<size_t, size_t>> rows;
    uint64_t mutation = 0, generation = 0;
    bool ready = false;
};
static thread_local uint64_t g_native_character_rich_mutation = 0;
static NativeCharacterRichIndex &native_character_rich_index() {
    return reloadable_thread_state<NativeCharacterRichIndex, struct NativeCharacterRichIndexTag>();
}
struct NativeCharacterRichMutationScope {
    NativeCharacterRichMutationScope() { ++g_native_character_rich_mutation; }
    ~NativeCharacterRichMutationScope() { ++g_native_character_rich_mutation; }
};
static bool native_character_rich_live(const void *sheet) {
    uint8_t open = 0;
    int32_t type = -1;
    const auto owner = reinterpret_cast<uintptr_t>(sheet);
    return owner && native_history_copy(native_character_sheet_field(owner, 0, "open", 1), open) &&
        open == 1 && native_history_copy(native_character_sheet_field(owner, 8, "active_sheet", 4), type) &&
        type == 0;
}
static std::optional<NativeCharacterRichOwner> native_character_rich_owner(
        const void *sheet, const NativeKnowledgeTextBox *box, const NativeString *source,
        const char *row = nullptr) {
    if (!native_character_rich_live(sheet) || (!row && (!box || !source))) return std::nullopt;
    const auto address = reinterpret_cast<uintptr_t>(sheet);
    int32_t unit = -1, subtab = -1, context = -1, health_tab = -1;
    if (!native_history_copy(native_character_sheet_field(address, 0xc, "active_id", 4), unit) || unit < 0 ||
            !native_history_copy(native_character_sheet_field(address, 0xc0, "active_sub_tab", 4), subtab) || subtab < 0 ||
            !native_history_copy(native_character_sheet_field(address, 4, "context", 4), context))
        return std::nullopt;
    const auto *health_address = native_character_field_address(sheet,
        native_character_layout.health_tab, sizeof(health_tab));
    if (!health_address) return std::nullopt;
    std::memcpy(&health_tab, health_address, sizeof(health_tab));
    std::array<uintptr_t, 38> key{{address, g_native_character_draw_scope_id,
        static_cast<uint32_t>(unit), static_cast<uint32_t>(subtab),
        static_cast<uint32_t>(context), static_cast<uint32_t>(health_tab)}};
    const auto &layout = native_character_layout;
    const std::array<std::pair<NativeCharacterMember, NativeCharacterMember>, 4> fields{{
        {layout.health_sources, layout.health_boxes},
        {layout.personality_sources, layout.personality_boxes},
        layout.thought_vectors[0], layout.thought_vectors[1]}};
    std::array<NativeCharacterRichIndex::Group, 4> groups{};
    for (size_t group = 0; group < groups.size(); ++group) {
        auto &value = groups[group];
        const auto *sources = native_character_field_address(sheet, fields[group].first, 24);
        const auto *boxes = native_character_field_address(sheet, fields[group].second, 24);
        // All four contracts are needed to reject aliases across page groups.
        if (!sources || !boxes) return std::nullopt;
        value.owner = reinterpret_cast<uintptr_t>(sources);
        value.sources = NativeBorrowedVector<const NativeString *>::read(sources);
        value.boxes = NativeBorrowedVector<NativeKnowledgeTextBox *>::read(boxes);
        if (!value.sources.valid(16384) || !value.boxes.valid(16384) ||
                value.sources.size() != value.boxes.size()) return std::nullopt;
        const std::array<uintptr_t, 8> words{{value.owner, reinterpret_cast<uintptr_t>(boxes),
            reinterpret_cast<uintptr_t>(value.sources.begin), reinterpret_cast<uintptr_t>(value.sources.end),
            reinterpret_cast<uintptr_t>(value.sources.capacity), reinterpret_cast<uintptr_t>(value.boxes.begin),
            reinterpret_cast<uintptr_t>(value.boxes.end), reinterpret_cast<uintptr_t>(value.boxes.capacity)}};
        std::copy(words.begin(), words.end(), key.begin() + 6 + group * words.size());
    }
    auto &cache = native_character_rich_index();
    // A no-TLS wrap is a standalone observation, never a cached negative result.
    if (!cache.ready || !g_native_character_draw_scope_id || cache.key != key ||
            cache.mutation != g_native_character_rich_mutation) {
        cache.ready = false;
        cache.entries.clear(); cache.boxes.clear(); cache.rows.clear();
        cache.key = key; cache.groups = groups;
        cache.mutation = g_native_character_rich_mutation;
        ++cache.generation;
        size_t total_rows = 0;
        for (size_t group = 0; group < groups.size(); ++group) {
            const auto &value = groups[group];
            for (size_t i = 0; i < value.boxes.size(); ++i) {
                auto *part_box = value.boxes.begin[i];
                const auto *part_source = value.sources.begin[i];
                if (!part_box || !part_source) continue;
                if (!part_box->rows.valid(16384) || part_box->rows.size() > 65536 - total_rows)
                    return std::nullopt;
                total_rows += part_box->rows.size();
                const size_t index = cache.entries.size();
                cache.entries.push_back({{sheet, part_box, part_source,
                    static_cast<NativeCharacterRichGroup>(group), value.owner, i,
                    group == static_cast<size_t>(NativeCharacterRichGroup::Recent) && subtab == 0},
                    part_box->rows, part_box->width, true});
                const auto [found, inserted] = cache.boxes.emplace(part_box, index);
                if (!inserted) {
                    cache.entries[index].unique = false;
                    cache.entries[found->second].unique = false;
                }
                for (size_t line = 0; line < part_box->rows.size(); ++line) {
                    const auto *part_row = part_box->rows.begin[line];
                    if (!part_row) continue;
                    const auto [found_row, unique] = cache.rows.emplace(part_row->text,
                        std::pair<size_t, size_t>{index, line});
                    if (!unique) found_row->second.first = SIZE_MAX;
                }
            }
        }
        cache.ready = true;
    }
    size_t index = SIZE_MAX, line = 0;
    if (row) {
        const auto found = cache.rows.find(row);
        if (found != cache.rows.end()) { index = found->second.first; line = found->second.second; }
    } else {
        const auto found = cache.boxes.find(box);
        if (found != cache.boxes.end()) index = found->second;
    }
    if (index >= cache.entries.size()) return std::nullopt;
    const auto &entry = cache.entries[index];
    const auto &owner = entry.owner;
    const auto &group = groups[static_cast<size_t>(owner.group)];
    if (!entry.unique || owner.index >= group.boxes.size() ||
            group.boxes.begin[owner.index] != owner.box || group.sources.begin[owner.index] != owner.source ||
            owner.box->width != entry.width || owner.box->rows.begin != entry.rows.begin ||
            owner.box->rows.end != entry.rows.end || owner.box->rows.capacity != entry.rows.capacity ||
            (row && (line >= entry.rows.size() || !entry.rows.begin[line] || entry.rows.begin[line]->text != row))) {
        cache.ready = false;
        return std::nullopt;
    }
    if ((!row && owner.source != source) ||
            (owner.group == NativeCharacterRichGroup::Health && health_tab != layout.description_tab))
        return std::nullopt;
    return owner;
}
#endif
