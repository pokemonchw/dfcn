// Borrowed name-creator storage only. The generated schema supplies native
// offsets; matching, traversal, cache invalidation and publication timing are
// shared with no executable-format or operating-system branch.
struct NativeNameSearchSnapshot {
    uintptr_t creator = 0, name = 0;
    int32_t slot = -1, language = -1;
    std::string query;
    std::vector<int32_t> words, parts;
    NativeBorrowedVector<int32_t> output_words, output_parts;
    NativeBorrowedVector<uintptr_t> raws, native_words;
};

static uintptr_t native_name_search_field(uintptr_t creator, size_t coordinate,
        size_t width = 1) {
    return native_history_object_field(creator, "name_creator_interfacest", coordinate, width);
}

static std::optional<NativeHistoryName> capture_native_place_editor_name(
        int32_t expected_context) {
    if (expected_context != 0 && expected_context != 1) return std::nullopt;
    const uintptr_t base = native_history_profile_base();
    // name_creator_interfacest::render receives game.main_interface.name_creator
    // at reference RVA 0x18a2cf8 (render caller 0x627fb3). Edition bindings
    // relocate the owner; its members use the shared generated native schema.
#ifdef _WIN32
    const uintptr_t creator = native_reference_address(base, 0x18a2cf8);
#else
    const uintptr_t creator = native_history_object_member(
        native_reference_address(base, native_history_layout::game_rva),
        "gamest", "main_interface.name_creator.open");
#endif
    uint8_t open = 0;
    int32_t context = -1;
    uintptr_t name_address = 0;
    if (!base || !creator ||
            !native_history_copy(native_name_search_field(creator, 0), open) || open != 1 ||
            !native_history_copy(native_name_search_field(creator, 4, 4), context) ||
            context != expected_context ||
            !native_history_copy(native_name_search_field(creator, 0x10, 8), name_address) ||
            !name_address) return std::nullopt;
    NativeHistoryName name;
    if (!capture_native_history_name(base, name_address, name, nullptr, true) ||
            !name.has_name) return std::nullopt;
    if (context == 1) { // EMBARK_GROUP_NAME owns the future local government.
        name.entity_type = 1;
        name.entity_id = -1;
        name.entity_name_current = false;
        // The embark caller (reference 0x1064086..0x10640aa) resolves the
        // selected civilization and passes it as namer. The candidate group
        // name belongs to setupdwarfgame; named_entity is still null here.
        uintptr_t parent = 0;
        int32_t parent_id = -1;
        if (native_history_copy(native_name_search_field(creator, 0x8, 8), parent) &&
                parent && native_history_copy(native_history_object_field(parent,
                    "historical_entity", 4, sizeof(parent_id)), parent_id) &&
                parent_id >= 0 && native_history_find_subject(base,
                    NativeHistoryObjectKind::Entity, parent_id) == parent) {
            const auto head = capture_native_history_entity_parent_word(base, parent_id, parent);
            name.parent_word_id = head.id;
            name.parent_word_pos = head.part_of_speech;
        }
    }
    return name;
}

static uintptr_t native_name_search_owner(const NativeString *query) {
    const uintptr_t offset = native_name_search_field(1, 0x180, sizeof(NativeString));
    const uintptr_t address = reinterpret_cast<uintptr_t>(query);
    return offset && address >= offset ? address - (offset - 1) : 0;
}

static bool native_name_search_read(uintptr_t creator, NativeNameSearchSnapshot &out) {
    uint8_t open = 0;
    if (!native_history_copy(native_name_search_field(creator, 0), open) || open != 1 ||
        !native_history_copy(native_name_search_field(creator, 0x20, 4), out.slot) ||
        out.slot < 0 || out.slot >= 6 ||
        !native_history_copy(native_name_search_field(creator, 0x10, 8), out.name) || !out.name ||
        !native_history_copy_string(native_name_search_field(creator, 0x180, 32), out.query) ||
        out.query.size() > 4096 ||
        !native_history_copy(native_history_object_field(out.name, "language_name", 108, 4),
            out.language)) return false;
    out.creator = creator;
    const auto read_vector = [&](size_t coordinate, NativeBorrowedVector<int32_t> &vector) {
        return native_history_copy(native_name_search_field(creator, coordinate, 24), vector) &&
            vector.valid(1u << 18);
    };
    NativeBorrowedVector<int32_t> words, parts;
    if (!read_vector(0x28 + size_t(out.slot) * 24, words) ||
        !read_vector(0xb8 + size_t(out.slot) * 24, parts) || words.size() != parts.size() ||
        !read_vector(0x148, out.output_words) || !read_vector(0x160, out.output_parts) ||
        out.output_words.size() != out.output_parts.size()) return false;
    out.words.resize(words.size());
    out.parts.resize(parts.size());
    if (!out.words.empty() &&
        (!native_history_copy_bytes(reinterpret_cast<uintptr_t>(words.begin), out.words.data(),
            out.words.size() * sizeof(int32_t)) ||
         !native_history_copy_bytes(reinterpret_cast<uintptr_t>(parts.begin), out.parts.data(),
            out.parts.size() * sizeof(int32_t)))) return false;
    if (!native_history_read_vector(native_history_global(0x24ed770), out.raws)) return false;
    if (out.language >= 0) {
        NativeBorrowedVector<uintptr_t> translations;
        if (!native_history_read_vector(native_history_global(0x24ed7a0), translations)) return false;
        const uintptr_t language = native_history_vector_at(translations, size_t(out.language));
        if (!language || !native_history_read_vector(native_history_object_field(language,
                "language_translation", 0x50, 24), out.native_words)) return false;
    }
    return true;
}

static bool native_name_search_word(const NativeNameSearchSnapshot &source, size_t index,
        std::string &id, std::string &english, std::string &native_word) {
    if (index >= source.words.size() || source.words[index] < 0 ||
        source.parts[index] < 0 || source.parts[index] > 8) return false;
    const size_t word_index = size_t(source.words[index]);
    const uintptr_t raw = native_history_vector_at(source.raws, word_index);
    if (!raw || !native_history_copy_string(native_history_object_field(raw,
            "language_word", 0, 32), id) || id.empty() ||
        !native_history_copy_string(native_history_object_field(raw, "language_word",
            0x20 + size_t(source.parts[index]) * 32, 32), english)) return false;
    native_word.clear();
    if (source.language >= 0) {
        const uintptr_t word = native_history_vector_at(source.native_words, word_index);
        if (!word || !native_history_copy_string(word, native_word)) return false;
    }
    return true;
}

static bool native_name_search_publish(const NativeNameSearchSnapshot &source,
        const std::vector<int32_t> &words, const std::vector<int32_t> &parts,
        int32_t scroll_position) {
    const auto &a = source.output_words;
    const auto &b = source.output_parts;
    // The native filter first copies the complete selected word table, then
    // erases rejected entries. Its existing allocation therefore holds all
    // matches. Never grow a vector with a different C++ runtime's allocator.
    const auto capacity = [](const auto &v) {
        return (reinterpret_cast<uintptr_t>(v.capacity) -
                reinterpret_cast<uintptr_t>(v.begin)) / sizeof(int32_t);
    };
    if (words.size() != parts.size() || words.size() > capacity(a) || parts.size() > capacity(b))
        return false;
    const uintptr_t words_end_field = native_name_search_field(source.creator, 0x150, 8);
    const uintptr_t parts_end_field = native_name_search_field(source.creator, 0x168, 8);
    const uintptr_t scroll = native_name_search_field(source.creator, 0x178, 4);
    if (!words_end_field || !parts_end_field || !scroll) return false;
    if (!words.empty()) {
        std::memcpy(a.begin, words.data(), words.size() * sizeof(int32_t));
        std::memcpy(b.begin, parts.data(), parts.size() * sizeof(int32_t));
    }
    int32_t *a_end = a.begin ? a.begin + words.size() : nullptr;
    int32_t *b_end = b.begin ? b.begin + parts.size() : nullptr;
    std::memcpy(reinterpret_cast<void *>(words_end_field), &a_end, sizeof(a_end));
    std::memcpy(reinterpret_cast<void *>(parts_end_field), &b_end, sizeof(b_end));
    std::memcpy(reinterpret_cast<void *>(scroll), &scroll_position, sizeof(scroll_position));
    return true;
}
