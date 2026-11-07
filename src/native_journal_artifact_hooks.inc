// The artifact journal's producer retains the complete list_name title
// and every 58-column main_text_box paragraph. Its unexpanded renderer shows
// only three body rows, so the visible grid cannot supply the item grammar.
// Read these owned sources without replacing any native record or writer.
static NativeJournalArtifactField native_journal_artifact_field(uintptr_t caller) {
#ifdef _WIN32
    const uintptr_t base = native_history_profile_base();
    if (base && caller) {
        if (caller == native_reference_address(base, 0xc861d))
            return NativeJournalArtifactField::Title;
        if (caller == native_reference_address(base, 0xc86c3))
            return NativeJournalArtifactField::Counter;
        if (caller == native_reference_address(base, 0xc8787))
            return NativeJournalArtifactField::Body;
    }
#endif
    return NativeJournalArtifactField::None;
}

#ifdef _WIN32
static std::optional<NativeJournalArtifactCardSource> native_journal_artifact_card_source(
        size_t one_based_index, size_t total) {
    if (!one_based_index || one_based_index > total || total > 65536) return std::nullopt;
    const uintptr_t screen = native_current_viewscreen();
    const auto artifacts = native_history_abi::enum_value("adventure_log_mode", "ARTIFACTS", 7);
    int16_t mode = -1;
    NativeBorrowedVector<uintptr_t> entries;
    int32_t selected = -1, scroll = 0;
    const uintptr_t entries_owner = native_viewscreen_field(screen,
        {0x5a8, "viewscreen_adventure_logst", "artifact_entry"}, sizeof(entries));
    const uintptr_t selected_address = native_viewscreen_field(screen,
        {0x250, "viewscreen_adventure_logst", "selected"}, sizeof(selected));
    const uintptr_t scroll_address = native_viewscreen_field(screen,
        {0x274, "viewscreen_adventure_logst", "artifact_text_scroll"}, sizeof(scroll));
    if (!artifacts || !native_journal_screen_mode(screen, mode) || mode != *artifacts ||
            !native_history_read_vector(entries_owner, entries) || entries.size() != total ||
            !native_history_copy(selected_address, selected) ||
            !native_history_copy(scroll_address, scroll)) return std::nullopt;
    const uintptr_t entry = native_history_vector_at(entries, one_based_index - 1);
    NativeJournalArtifactCardSource source;
    std::vector<uintptr_t> addresses;
    NativeBorrowedVector<uintptr_t> body;
    const uintptr_t title_address = native_viewscreen_field(entry,
        {0x08, "artifact_entryst", "list_name"}, sizeof(NativeString));
    const uintptr_t displayed_address = native_viewscreen_field(entry,
        {0x48, "artifact_entryst", "p_list_name"}, sizeof(NativeString));
    const uintptr_t body_owner = native_viewscreen_field(entry,
        {0x68, "artifact_entryst", "main_text_box.text"}, sizeof(body));
    if (!entry || !native_history_copy_string(title_address, source.title) ||
            !native_history_copy_string(displayed_address, source.displayed) ||
            source.displayed.size() > 58 || !source.title.starts_with(source.displayed) ||
            !native_history_read_vector(body_owner, body) || body.size() > 4096 ||
            !native_journal_event_rows(body_owner, source.rows, addresses)) return std::nullopt;
    source.first_line = selected >= 0 && static_cast<size_t>(selected) == one_based_index - 1
        ? std::max(0, scroll) : 0;
    NativeBorrowedVector<uintptr_t> current;
    NativeBorrowedVector<uintptr_t> current_body;
    int16_t current_mode = -1;
    int32_t current_selected = -1, current_scroll = 0;
    std::string current_title, current_displayed;
    // The caller owns no native memory. Reject a selection change, rebuilt
    // vector or replaced card before returning the owned text snapshot.
    if (native_current_viewscreen() != screen ||
            !native_journal_screen_mode(screen, current_mode) || current_mode != mode ||
            !native_history_read_vector(entries_owner, current) ||
            current.begin != entries.begin || current.end != entries.end ||
            current.capacity != entries.capacity ||
            native_history_vector_at(current, one_based_index - 1) != entry ||
            !native_history_read_vector(body_owner, current_body) ||
            current_body.begin != body.begin || current_body.end != body.end ||
            current_body.capacity != body.capacity ||
            !native_history_copy(selected_address, current_selected) || current_selected != selected ||
            !native_history_copy(scroll_address, current_scroll) || current_scroll != scroll ||
            !native_history_copy_string(title_address, current_title) || current_title != source.title ||
            !native_history_copy_string(displayed_address, current_displayed) ||
            current_displayed != source.displayed) return std::nullopt;
    return source;
}

static void retain_native_journal_artifact(uintptr_t entry) {
    if (!entry || !g_overlay.translation_enabled()) return;
    const uintptr_t title_address = native_viewscreen_field(entry,
        {0x08, "artifact_entryst", "list_name"}, sizeof(NativeString));
    const uintptr_t displayed_address = native_viewscreen_field(entry,
        {0x48, "artifact_entryst", "p_list_name"}, sizeof(NativeString));
    std::string title, displayed;
    if (native_history_copy_string(title_address, title) && !title.empty() &&
            native_history_copy_string(displayed_address, displayed) && !displayed.empty() &&
            displayed.size() <= 58 && title.starts_with(displayed)) {
        const std::vector<std::string> title_rows{displayed};
        const std::vector<uintptr_t> title_addresses{displayed_address};
        if (!native_journal_event_interval_captured(displayed_address, 58,
                title_rows, title_addresses, 0, 1, title))
            remember_native_paragraph(displayed_address, 58, std::move(title),
                title_rows, 0, title_addresses, true);
    }

    const uintptr_t owner = native_viewscreen_field(entry,
        {0x68, "artifact_entryst", "main_text_box.text"}, sizeof(NativeBorrowedVector<uintptr_t>));
    std::vector<std::string> rows;
    std::vector<uintptr_t> addresses;
    if (!native_journal_event_rows(owner, rows, addresses)) return;
    for (size_t first = 0; first < rows.size();) {
        if (rows[first].empty()) { ++first; continue; }
        size_t last = first + 1;
        while (last < rows.size() && !rows[last].empty()) ++last;
        if (!native_journal_event_interval_captured(owner, 58, rows, addresses, first, last)) {
            std::string source;
            // 8e7440 retains a break-space in the preceding row and may
            // force a split inside one token. Preserve its exact bytes.
            for (size_t line = first; line < last; ++line) source += rows[line];
            remember_native_paragraph(owner, 58, std::move(source),
                std::vector<std::string>(rows.begin() + first, rows.begin() + last), first,
                std::vector<uintptr_t>(addresses.begin() + first, addresses.begin() + last), true);
        }
        first = last;
    }
}

static void retain_native_journal_artifact_draw_sources(const graphicst *graphics) {
    const native_history_abi::FieldOffset displayed_field{0x48, "artifact_entryst", "p_list_name"};
    size_t displayed_offset = 0;
    try {
        if (!displayed_field.contains(0, sizeof(NativeString), sizeof(NativeString))) return;
        displayed_offset = displayed_field.runtime();
    } catch (...) { return; }
    std::unordered_set<uintptr_t> entries;
    const auto retain_draws = [&](const auto &draws) {
        for (const auto &draw : draws) {
            if (draw.draw_dimx != graphics->dimx || draw.draw_dimy != graphics->dimy ||
                    draw.address <= displayed_offset || draw.source.empty() ||
                    native_journal_artifact_field(draw.native_caller) !=
                        NativeJournalArtifactField::Title) continue;
            const uintptr_t entry = draw.address - displayed_offset;
            if (native_viewscreen_field(entry, displayed_field, sizeof(NativeString)) != draw.address)
                continue;
            if (!entries.insert(entry).second) continue;
            std::string displayed;
            if (native_history_copy_string(draw.address, displayed) && displayed == draw.source)
                retain_native_journal_artifact(entry);
        }
    };
    // The actual title writer supplies p_list_name. This path may recover a
    // retained draw independently of the selected tab; a consumer still has
    // to prove its current grid/layer and exact row bytes before using it.
    retain_draws(captured_native_drawn_text_rows());
    retain_draws(captured_native_drawn_text_rows(true));
}

static bool refresh_native_journal_artifact_sources(const graphicst *graphics) {
    if (!graphics || graphics->dimy <= 0 || graphics->dimy > 1000) return false;
    const uintptr_t screen = native_current_viewscreen();
    const auto artifacts = native_history_abi::enum_value("adventure_log_mode", "ARTIFACTS", 7);
    int16_t mode = -1;
    if (!artifacts || !native_journal_screen_mode(screen, mode)) return false;
    if (mode != *artifacts) {
        retain_native_journal_artifact_draw_sources(graphics);
        return false;
    }
    NativeBorrowedVector<uintptr_t> entries;
    int32_t scroll = 0, selected = -1;
    if (!native_history_read_vector(native_viewscreen_field(screen,
                {0x5a8, "viewscreen_adventure_logst", "artifact_entry"}, sizeof(entries)), entries) ||
            entries.size() > 65536 ||
            !native_journal_read(screen, {0x2c8, "viewscreen_adventure_logst", "scroll_position_artifacts"}, scroll) ||
            !native_journal_read(screen, {0x250, "viewscreen_adventure_logst", "selected"}, selected)) return true;
    // c8520..c88da selects this bounded slice of entry pointers. The selected
    // card's artifact_text_scroll is independent of scroll_position_artifacts.
    const size_t count = static_cast<size_t>(std::max(0, (graphics->dimy - 6) / 5));
    const size_t first = static_cast<size_t>(std::clamp<int64_t>(scroll, 0,
        entries.size() > count ? entries.size() - count : 0));
    const size_t last = std::min(entries.size(), first + count);
    for (size_t index = first; index < last; ++index)
        retain_native_journal_artifact(native_history_vector_at(entries, index));
    if (selected >= 0 && static_cast<size_t>(selected) < entries.size() &&
            (static_cast<size_t>(selected) < first || static_cast<size_t>(selected) >= last))
        retain_native_journal_artifact(native_history_vector_at(entries, static_cast<size_t>(selected)));
    return true;
}
#else
static std::optional<NativeJournalArtifactCardSource> native_journal_artifact_card_source(
        size_t, size_t) { return std::nullopt; }
static bool refresh_native_journal_artifact_sources(const graphicst *) { return false; }
#endif
