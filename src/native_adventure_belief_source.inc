// The background hover producer keeps all wrapped rows in the selected
// character sheet. Its renderer may stop at the screen bottom, so visible
// punctuation or the last drawn row cannot establish the complete source.
static std::optional<NativeAdventureBeliefCache> native_adventure_belief_cache() {
    const uintptr_t screen = native_current_viewscreen();
    if (!screen || !native_history_object_is(screen, "viewscreen_setupadventurest"))
        return std::nullopt;
    const auto screen_field = [&](std::string_view member, size_t width) {
        return native_history_object_member(screen, "viewscreen_setupadventurest", member, width);
    };
    int32_t selected = -1;
    NativeBorrowedVector<uintptr_t> sheets;
    if (!native_history_copy(screen_field("active_sheet_index", sizeof(selected)), selected) ||
            selected < 0 || !native_history_read_vector(screen_field("csheet", sizeof(sheets)), sheets) ||
            !sheets.valid(64) || static_cast<size_t>(selected) >= sheets.size()) return std::nullopt;
    const uintptr_t owner = native_history_vector_at(sheets, static_cast<size_t>(selected));
    if (!owner) return std::nullopt;
    const auto field = [&](std::string_view member, size_t width) {
        return native_history_object_member(owner, "setup_character_info", member, width);
    };
    int32_t column = -1, description = -1;
    NativeBorrowedVector<int32_t> practices;
    NativeBorrowedVector<uintptr_t> rows;
    if (!native_history_copy(field("active_column", sizeof(column)), column) || column != 2 ||
            !native_history_copy(field("desc_rp_index", sizeof(description)), description) ||
            description < 0 ||
            !native_history_copy(field("religious_practice_option", sizeof(practices)), practices) ||
            !practices.valid(4096) || static_cast<size_t>(description) >= practices.size() ||
            !native_history_read_vector(field("background_desc.text", sizeof(rows)), rows) ||
            !rows.valid(4096) || rows.size() == 0) return std::nullopt;
    NativeAdventureBeliefCache cache;
    cache.screen = screen;
    cache.owner = owner;
    if (!native_history_copy(reinterpret_cast<uintptr_t>(practices.begin) +
            static_cast<size_t>(description) * sizeof(int32_t), cache.practice) ||
            (cache.practice != 0 && cache.practice != 1)) return std::nullopt;
    std::vector<uintptr_t> addresses(rows.size());
    if (!native_history_copy_bytes(reinterpret_cast<uintptr_t>(rows.begin),
            addresses.data(), addresses.size() * sizeof(uintptr_t))) return std::nullopt;
    cache.rows.reserve(addresses.size());
    std::string paragraph;
    size_t bytes = 0;
    const auto flush = [&] {
        if (!paragraph.empty()) cache.paragraphs.push_back(std::move(paragraph));
        paragraph.clear();
    };
    for (uintptr_t address : addresses) {
        NativeAdventureBeliefCacheRow row;
        row.address = address;
        if (!address || !native_history_copy_string(address, row.source) || row.source.size() > 4096 ||
                row.source.find_first_of("\r\n") != std::string::npos ||
                row.source.size() > 262144 - bytes) return std::nullopt;
        bytes += row.source.size();
        const auto text = trim_view(row.source);
        if (text.empty()) flush();
        else {
            if (!paragraph.empty()) paragraph += ' ';
            paragraph += text;
        }
        cache.rows.push_back(std::move(row));
    }
    flush();
    if (cache.paragraphs.empty()) return std::nullopt;
    // Borrowed vectors/strings never survive this snapshot. A selection or
    // cache replacement during the guarded reads cannot lend old row identity.
    int32_t current_selected = -1, current_column = -1, current_description = -1;
    NativeBorrowedVector<uintptr_t> current_sheets, current_rows;
    if (native_current_viewscreen() != screen ||
            !native_history_copy(screen_field("active_sheet_index", sizeof(current_selected)), current_selected) ||
            current_selected != selected ||
            !native_history_read_vector(screen_field("csheet", sizeof(current_sheets)), current_sheets) ||
            current_sheets.begin != sheets.begin || current_sheets.end != sheets.end ||
            native_history_vector_at(current_sheets, static_cast<size_t>(selected)) != owner ||
            !native_history_copy(field("active_column", sizeof(current_column)), current_column) ||
            current_column != column ||
            !native_history_copy(field("desc_rp_index", sizeof(current_description)), current_description) ||
            current_description != description ||
            !native_history_read_vector(field("background_desc.text", sizeof(current_rows)), current_rows) ||
            current_rows.begin != rows.begin || current_rows.end != rows.end) return std::nullopt;
    return cache;
}
