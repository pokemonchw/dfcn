// The artifact journal's producer retains the complete title at entry+08
// and every 58-column paragraph at entry+68. Its unexpanded renderer shows
// only three body rows, so the visible grid cannot supply the item grammar.
// Read these owned sources without replacing any native record or writer.
static NativeJournalArtifactField native_journal_artifact_field(uintptr_t caller) {
#ifdef _WIN32
    const uintptr_t base = native_history_profile_base();
    if (base) {
        if (caller == native_reference_address(base, 0xc861d))
            return NativeJournalArtifactField::Title;
        if (caller == native_reference_address(base, 0xc86c3))
            return NativeJournalArtifactField::Counter;
        if (caller == native_reference_address(base, 0xc8787))
            return NativeJournalArtifactField::Body;
    }
#else
    if (caller == native_elf_5317_address(0x17dcb04)) return NativeJournalArtifactField::Title;
    if (caller == native_elf_5317_address(0x17dcc0a)) return NativeJournalArtifactField::Counter;
    if (caller == native_elf_5317_address(0x17dfb74)) return NativeJournalArtifactField::Body;
#endif
    return NativeJournalArtifactField::None;
}

static uintptr_t native_journal_artifact_screen_field(uintptr_t screen, size_t offset, size_t width) {
#ifdef _WIN32
    return offset <= UINTPTR_MAX - screen ? screen + offset : 0;
#else
    return native_history_object_field(screen, "viewscreen_adventure_logst", offset, width);
#endif
}
static std::optional<NativeJournalArtifactCardSource> native_journal_artifact_card_source(
        size_t one_based_index, size_t total) {
    if (!one_based_index || one_based_index > total || total > 65536) return std::nullopt;
    const uintptr_t base = native_history_profile_base();
    const uintptr_t screen = native_current_viewscreen();
    uintptr_t vtable = 0;
    int16_t mode = -1;
    NativeBorrowedVector<uintptr_t> entries;
    int32_t selected = -1, scroll = 0;
    if (!base || !screen || screen > UINTPTR_MAX - 0x5c0 ||
            !native_history_copy(screen, vtable) ||
            vtable != native_reference_address(base,
#ifdef _WIN32
                0x15eb450
#else
                0x20817e0
#endif
            ) ||
            !native_history_copy(native_journal_artifact_screen_field(screen, 0x256, 2), mode) || mode != 7 ||
            !native_history_read_vector(native_journal_artifact_screen_field(screen, 0x5a8, 24), entries) || entries.size() != total ||
            !native_history_copy(native_journal_artifact_screen_field(screen, 0x250, 4), selected) ||
            !native_history_copy(native_journal_artifact_screen_field(screen, 0x274, 4), scroll)) return std::nullopt;
    const uintptr_t entry = native_history_vector_at(entries, one_based_index - 1);
    NativeJournalArtifactCardSource source;
    std::vector<uintptr_t> addresses;
    NativeBorrowedVector<uintptr_t> body;
    if (!entry || entry > UINTPTR_MAX - 0x80 ||
            !native_history_copy_string(entry + 0x08, source.title) ||
            !native_history_copy_string(entry + 0x48, source.displayed) ||
            source.displayed.size() > 58 || !source.title.starts_with(source.displayed) ||
            !native_history_read_vector(entry + 0x68, body) || body.size() > 4096 ||
            !native_journal_event_rows(entry + 0x68, source.rows, addresses)) return std::nullopt;
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
            !native_history_copy(native_journal_artifact_screen_field(screen, 0x256, 2), current_mode) || current_mode != mode ||
            !native_history_read_vector(native_journal_artifact_screen_field(screen, 0x5a8, 24), current) ||
            current.begin != entries.begin || current.end != entries.end ||
            current.capacity != entries.capacity ||
            native_history_vector_at(current, one_based_index - 1) != entry ||
            !native_history_read_vector(entry + 0x68, current_body) ||
            current_body.begin != body.begin || current_body.end != body.end ||
            current_body.capacity != body.capacity ||
            !native_history_copy(native_journal_artifact_screen_field(screen, 0x250, 4), current_selected) || current_selected != selected ||
            !native_history_copy(native_journal_artifact_screen_field(screen, 0x274, 4), current_scroll) || current_scroll != scroll ||
            !native_history_copy_string(entry + 0x08, current_title) || current_title != source.title ||
            !native_history_copy_string(entry + 0x48, current_displayed) ||
            current_displayed != source.displayed) return std::nullopt;
    return source;
}

static void retain_native_journal_artifact(uintptr_t entry) {
    if (!entry || entry > UINTPTR_MAX - 0x80 || !g_overlay.translation_enabled()) return;
    std::string title, displayed;
    if (native_history_copy_string(entry + 0x08, title) && !title.empty() &&
            native_history_copy_string(entry + 0x48, displayed) && !displayed.empty() &&
            displayed.size() <= 58 && title.starts_with(displayed)) {
        const std::vector<std::string> title_rows{displayed};
        const std::vector<uintptr_t> title_addresses{entry + 0x48};
        if (!native_journal_event_interval_captured(entry + 0x48, 58,
                title_rows, title_addresses, 0, 1, title))
            remember_native_paragraph(entry + 0x48, 58, std::move(title),
                title_rows, 0, title_addresses, true);
    }

    const uintptr_t owner = entry + 0x68;
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
    std::unordered_set<uintptr_t> entries;
    const auto retain_draws = [&](const auto &draws) {
        for (const auto &draw : draws) {
            if (draw.draw_dimx != graphics->dimx || draw.draw_dimy != graphics->dimy ||
                    draw.address < 0x48 || draw.source.empty() ||
                    native_journal_artifact_field(draw.native_caller) !=
                        NativeJournalArtifactField::Title) continue;
            const uintptr_t entry = draw.address - 0x48;
            if (!entries.insert(entry).second) continue;
            std::string displayed;
            if (native_history_copy_string(draw.address, displayed) && displayed == draw.source)
                retain_native_journal_artifact(entry);
        }
    };
    // The actual title writer supplies entry+48. This path may recover a
    // retained draw independently of the selected tab; a consumer still has
    // to prove its current grid/layer and exact row bytes before using it.
    retain_draws(captured_native_drawn_text_rows());
    retain_draws(captured_native_drawn_text_rows(true));
}

static bool refresh_native_journal_artifact_sources(const graphicst *graphics) {
    if (!graphics || graphics->dimy <= 0 || graphics->dimy > 1000) return false;
    const uintptr_t base = native_history_profile_base();
    const uintptr_t screen = native_current_viewscreen();
    uintptr_t vtable = 0;
    int16_t mode = -1;
    if (!base || !screen || screen > UINTPTR_MAX - 0x5c0 ||
            !native_history_copy(screen, vtable) ||
            vtable != native_reference_address(base,
#ifdef _WIN32
                0x15eb450
#else
                0x20817e0
#endif
            ) ||
            !native_history_copy(native_journal_artifact_screen_field(screen, 0x256, 2), mode)) return false;
    if (mode != 7) {
        retain_native_journal_artifact_draw_sources(graphics);
        return false;
    }
    NativeBorrowedVector<uintptr_t> entries;
    int32_t scroll = 0, selected = -1;
    if (!native_history_read_vector(native_journal_artifact_screen_field(screen, 0x5a8, 24), entries) || entries.size() > 65536 ||
            !native_history_copy(native_journal_artifact_screen_field(screen, 0x2c8, 4), scroll) ||
            !native_history_copy(native_journal_artifact_screen_field(screen, 0x250, 4), selected)) return true;
    // c8520..c88da selects this bounded slice of entry pointers. +274 is
    // the selected card's paragraph scroll, independently of list +2c8.
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
