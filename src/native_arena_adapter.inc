// Both native entry locators supply this context. Picker traversal, name
// selection, query restoration and result publication have one implementation.
using NativeArenaFilterFn = void (*)(unsigned char *);
struct NativeArenaContext {
    unsigned char *picker = nullptr;
    const void *raws = nullptr;
    NativeArenaFilterFn filter = nullptr;
};
static NativeArenaContext g_native_arena;

static void *native_arena_member(void *object,
        native_history_abi::FieldOffset member, size_t width) {
    return reinterpret_cast<void *>(member.address(
        reinterpret_cast<uintptr_t>(object), 0, width, width));
}

static bool native_arena_context_available(const NativeArenaContext &context) {
    if (!context.picker || !context.raws || !context.filter) return false;
    // The optional Arena operation reads both master vectors, restores its
    // native query and writes both filtered vectors as one transaction. No
    // partial layout may enter that operation or consume an unrelated editor.
    const std::pair<native_history_abi::FieldOffset, size_t> fields[]{
        {{0, "create_creature_interfacest", "open"}, 1},
        {{0x18, "create_creature_interfacest", "filter"}, sizeof(NativeString)},
        {{0x38, "create_creature_interfacest", "races_filtered"}, sizeof(NativeBorrowedVector<int16_t>)},
        {{0x50, "create_creature_interfacest", "castes_filtered"}, sizeof(NativeBorrowedVector<int16_t>)},
        {{0x68, "create_creature_interfacest", "races_all"}, sizeof(NativeBorrowedVector<int16_t>)},
        {{0x80, "create_creature_interfacest", "castes_all"}, sizeof(NativeBorrowedVector<int16_t>)},
        {{0x178, "creature_raw", "caste"}, sizeof(NativeBorrowedVector<unsigned char *>)},
        {{0x20, "creature_raw", "name"}, sizeof(NativeString)},
        {{0x20, "caste_raw", "caste_name"}, sizeof(NativeString)},
    };
    return std::all_of(std::begin(fields), std::end(fields), [](const auto &field) {
        return field.first.contains(0, field.second, field.second);
    });
}

static void bind_native_arena_context(unsigned char *picker, const void *raws,
                                      NativeArenaFilterFn filter) {
    const NativeArenaContext context{picker, raws, filter};
    const bool available = native_arena_context_available(context);
    g_native_arena = available ? context : NativeArenaContext{};
    g_arena_translated_search_dirty = available;
}
static void clear_native_arena_context() {
    g_native_arena = {};
    g_arena_translated_search_dirty = false;
}
static bool native_arena_open() {
    if (!g_native_arena.picker || !g_native_arena.raws || !g_native_arena.filter) return false;
    const auto *open = static_cast<const unsigned char *>(native_arena_member(
        g_native_arena.picker, {0, "create_creature_interfacest", "open"}, 1));
    return open && g_native_arena.raws && g_native_arena.filter && *open != 0;
}
static NativeString *native_arena_query() {
    if (!g_native_arena.picker || !g_native_arena.raws || !g_native_arena.filter) return nullptr;
    return static_cast<NativeString *>(native_arena_member(g_native_arena.picker,
        {0x18, "create_creature_interfacest", "filter"}, sizeof(NativeString)));
}
static bool native_arena_candidates(std::vector<NativeArenaCandidate> &result) {
    if (!native_arena_open()) return false;
    const auto *race_source = native_arena_member(g_native_arena.picker,
        {0x68, "create_creature_interfacest", "races_all"}, sizeof(NativeBorrowedVector<int16_t>));
    const auto *caste_source = native_arena_member(g_native_arena.picker,
        {0x80, "create_creature_interfacest", "castes_all"}, sizeof(NativeBorrowedVector<int16_t>));
    if (!race_source || !caste_source) return false;
    const auto races = NativeBorrowedVector<int16_t>::read(race_source);
    const auto castes = NativeBorrowedVector<int16_t>::read(caste_source);
    if (!races.valid(1u << 18) || !castes.valid(1u << 18) || races.size() != castes.size()) return false;
    result.reserve(races.size());
    for (size_t i = 0; i < races.size(); ++i) result.emplace_back(races.begin[i], castes.begin[i]);
    return true;
}
static bool native_arena_filtered_candidates(std::vector<NativeArenaCandidate> &result) {
    if (!native_arena_open()) return false;
    // Recompute from the query before taking the English result snapshot.
    // The current vectors may contain our own previous translated results.
    g_native_arena.filter(g_native_arena.picker);
    const auto *race_source = native_arena_member(g_native_arena.picker,
        {0x38, "create_creature_interfacest", "races_filtered"}, sizeof(NativeBorrowedVector<int16_t>));
    const auto *caste_source = native_arena_member(g_native_arena.picker,
        {0x50, "create_creature_interfacest", "castes_filtered"}, sizeof(NativeBorrowedVector<int16_t>));
    if (!race_source || !caste_source) return false;
    const auto races = NativeBorrowedVector<int16_t>::read(race_source);
    const auto castes = NativeBorrowedVector<int16_t>::read(caste_source);
    if (!races.valid(1u << 18) || !castes.valid(1u << 18) || races.size() != castes.size()) return false;
    result.reserve(races.size());
    for (size_t i = 0; i < races.size(); ++i) result.emplace_back(races.begin[i], castes.begin[i]);
    return true;
}
static const NativeString *native_arena_candidate_name(int16_t race, int16_t caste) {
    if (!g_native_arena.raws || race < 0) return nullptr;
    const auto raws = NativeBorrowedVector<unsigned char *>::read(g_native_arena.raws);
    if (!raws.valid(1u << 18) || static_cast<size_t>(race) >= raws.size()) return nullptr;
    auto *raw = raws.begin[race];
    if (!raw) return nullptr;
    if (caste >= 0) {
        const auto *source = native_arena_member(raw,
            {0x178, "creature_raw", "caste"}, sizeof(NativeBorrowedVector<unsigned char *>));
        if (!source) return nullptr;
        const auto castes = NativeBorrowedVector<unsigned char *>::read(source);
        if (castes.valid(1u << 16) && static_cast<size_t>(caste) < castes.size() && castes.begin[caste]) {
            const auto *name = static_cast<const NativeString *>(native_arena_member(castes.begin[caste],
                {0x20, "caste_raw", "caste_name"}, sizeof(NativeString)));
            std::string_view text;
            if (native_string_view(name, &text, 4096) && !text.empty()) return name;
        }
    }
    return static_cast<const NativeString *>(native_arena_member(raw,
        {0x20, "creature_raw", "name"}, sizeof(NativeString)));
}
static bool native_arena_filter_reset(std::string_view saved_query) {
    if (!native_arena_open()) return false;
    NativeString *query = native_arena_query();
    std::string_view current;
    if (!native_string_view(query, &current, 4096) || current != saved_query) return false;
    struct RestoreQuery {
        NativeString *query;
        std::string_view saved;
        ~RestoreQuery() {
            if (!native_string_set_length(query, saved.size())) return;
            char *data = native_string_data(query);
            std::memcpy(data, saved.data(), saved.size());
            data[saved.size()] = '\0';
        }
    } restore{query, saved_query};
    if (!native_string_set_length(query, 0)) return false;
    g_native_arena.filter(g_native_arena.picker);
    return true;
}
static bool native_arena_filter_assign(const std::vector<NativeArenaCandidate> &result) {
    if (!native_arena_open()) return false;
    auto *race_source = static_cast<unsigned char *>(native_arena_member(g_native_arena.picker,
        {0x38, "create_creature_interfacest", "races_filtered"}, sizeof(NativeBorrowedVector<int16_t>)));
    auto *caste_source = static_cast<unsigned char *>(native_arena_member(g_native_arena.picker,
        {0x50, "create_creature_interfacest", "castes_filtered"}, sizeof(NativeBorrowedVector<int16_t>)));
    if (!race_source || !caste_source) return false;
    const auto races = NativeBorrowedVector<int16_t>::read(race_source);
    const auto castes = NativeBorrowedVector<int16_t>::read(caste_source);
    if (!races.valid(1u << 18) || !castes.valid(1u << 18) ||
        result.size() > races.size() || result.size() > castes.size()) return false;
    for (size_t i = 0; i < result.size(); ++i) {
        races.begin[i] = result[i].first;
        castes.begin[i] = result[i].second;
    }
    int16_t *race_end = races.begin ? races.begin + result.size() : nullptr;
    int16_t *caste_end = castes.begin ? castes.begin + result.size() : nullptr;
    // Member discovery proves the complete vector representation. Only its
    // owned end pointer changes; the native allocation and capacity remain.
    std::memcpy(race_source + offsetof(NativeBorrowedVector<int16_t>, end), &race_end, sizeof(race_end));
    std::memcpy(caste_source + offsetof(NativeBorrowedVector<int16_t>, end), &caste_end, sizeof(caste_end));
    return true;
}
