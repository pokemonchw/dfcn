// DF 53.16 PE choose-start's retained history is bound while its original
// addst loop still owns the selected events. The overlay consumes these
// owned records with the drawn rows, never a later live selection.
static uintptr_t native_reclaim_screen_field(uintptr_t screen, size_t legacy,
        std::string_view member, size_t width) {
#ifdef _WIN32
    using native_history_abi::FieldOffset;
    static constexpr std::array fields{
        FieldOffset{0x275, "viewscreen_choose_start_sitest", "choosing_reclaim"},
        FieldOffset{0x340, "viewscreen_choose_start_sitest", "reclaim_detail_box_last_processing_dimx"},
        FieldOffset{0x2ac, "viewscreen_choose_start_sitest", "selected_reclaim"},
        FieldOffset{0x338, "viewscreen_choose_start_sitest", "reclaim_detail_she"},
        FieldOffset{0x330, "viewscreen_choose_start_sitest", "reclaim_detail_he"},
        FieldOffset{0x318, "viewscreen_choose_start_sitest", "reclaim_detail_box.text"}};
    for (const auto &field : fields)
        if (field.reference == legacy && field.member == native_history_abi::generated_id(member))
            return native_viewscreen_field(screen, field, width);
    return 0;
#else
    return native_history_object_member(screen, "viewscreen_choose_start_sitest", member, width);
#endif
}

static std::shared_ptr<const NativeEmbarkReclaimHistoryParagraph>
capture_native_embark_reclaim_history_draw(graphicst *graphics,
        const NativeString *source, int width, uintptr_t caller) {
    struct State {
        uintptr_t screen = 0, world_data = 0;
        uint64_t generation = 0;
        std::array<uintptr_t, 3> lines{}, sites{};
        std::array<uintptr_t, 2> events{};
        std::array<int32_t, 2> ids{-1, -1}, types{-1, -1};
        std::array<int32_t, 2> years{-1, -1}, seconds{-1, -1};
        int32_t selection = -1, site = -1, width = -1;
        bool operator==(const State &) const = default;
    };
    struct Row {
        uintptr_t address = 0;
        std::string source;
        int paragraph = -1;
    };
    struct Cache {
        State state;
        std::array<std::string, 2> sources;
        std::array<std::shared_ptr<const NativeEmbarkReclaimHistoryParagraph>, 2> paragraphs;
        std::array<Row, 12> rows;
        const unsigned char *grid = nullptr;
        int dimx = 0, dimy = 0, next_row = 0;
        bool active = false;
    };
    auto &cache = reloadable_thread_state<Cache, struct NativeEmbarkReclaimHistoryTag>();
    const uintptr_t base = native_history_profile_base();
    // The existing addst entry hook supplies this verified return address.
    // Other captions must neither consult nor invalidate the retained batch.
    const uintptr_t writer =
#ifdef _WIN32
        native_pe_address(base, 0x1051865);
#else
        native_reference_address(base, 0x1b458c2);
#endif
    if (!base || caller != writer) return {};
    if (!graphics || !graphics->screen || !source || width != 34 ||
            graphics->screeny < 24 || graphics->screeny > 35) {
        cache = {};
        return {};
    }
    const size_t row_index = static_cast<size_t>(graphics->screeny - 24);
    if (row_index == 0) cache.active = false;
    std::string_view drawn_source;
    if (!native_string_view(source, &drawn_source, kNativeHistorySourceLimit)) {
        cache = {};
        return {};
    }
    const auto paragraph_for_row = [&]()
            -> std::shared_ptr<const NativeEmbarkReclaimHistoryParagraph> {
        if (!cache.active || cache.grid != graphics->screen ||
                cache.dimx != graphics->dimx || cache.dimy != graphics->dimy ||
                cache.next_row != static_cast<int>(row_index) ||
                cache.state.generation !=
                    g_native_history_capture_generation.load(std::memory_order_acquire) ||
                cache.rows[row_index].address != reinterpret_cast<uintptr_t>(source) ||
                cache.rows[row_index].source != drawn_source) {
            cache.active = false;
            return {};
        }
        ++cache.next_row;
        const int paragraph = cache.rows[row_index].paragraph;
        return paragraph >= 0 ? cache.paragraphs[static_cast<size_t>(paragraph)] : nullptr;
    };
    if (row_index != 0) return paragraph_for_row();

    const auto read_state = [&]() -> std::optional<State> {
        State state;
        state.generation = g_native_history_capture_generation.load(std::memory_order_acquire);
        const uintptr_t screen = native_current_viewscreen();
        uintptr_t table = 0;
        uint8_t reclaim = 0;
        // RTTI: viewscreen_choose_start_sitest, vtable RVA 1749000.
        // Native render 1050fdc gates this panel with byte +275.
        if (!screen || !native_history_copy(screen, table) ||
                !native_history_object_is(screen, "viewscreen_choose_start_sitest") ||
                !native_history_copy(native_reclaim_screen_field(screen, 0x275, "choosing_reclaim", sizeof(reclaim)), reclaim) || !reclaim ||
                !native_history_copy(native_reclaim_screen_field(screen, 0x340, "reclaim_detail_box_last_processing_dimx", sizeof(state.width)), state.width) || state.width != 34 ||
                !native_history_copy(native_reclaim_screen_field(screen, 0x2ac, "selected_reclaim", sizeof(state.selection)), state.selection) || state.selection < 0 ||
                !native_history_copy(native_reclaim_screen_field(screen, 0x338, "reclaim_detail_she", sizeof(state.events[0])), state.events[0]) ||
                !native_history_copy(native_reclaim_screen_field(screen, 0x330, "reclaim_detail_he", sizeof(state.events[1])), state.events[1]) ||
                (!state.events[0] && !state.events[1]) ||
                (state.events[0] && state.events[0] == state.events[1])) return std::nullopt;
        state.screen = screen;

        NativeBorrowedVector<uintptr_t> lines;
        if (!native_history_copy(native_reclaim_screen_field(screen, 0x318, "reclaim_detail_box.text", sizeof(lines)), lines) ||
                !lines.valid(kNativeHistorySourceLimit) || lines.size() == 0) return std::nullopt;
        state.lines = {reinterpret_cast<uintptr_t>(lines.begin),
            reinterpret_cast<uintptr_t>(lines.end), reinterpret_cast<uintptr_t>(lines.capacity)};

        // 1054010..105402f selects a full int32 site ID from this vector.
        // The screen's +1a0 WORD is deliberately not used: it truncates IDs.
        NativeBorrowedVector<int32_t> sites;
        if (!native_history_copy(native_history_global(0x24ebb58), state.world_data) ||
                !state.world_data ||
                !native_history_copy(
#ifdef _WIN32
                    native_viewscreen_field(state.world_data,
                        {0x483d0, "world_data", "old_sites"}, sizeof(sites)),
#else
                    native_history_object_member(state.world_data, "world_data", "old_sites", sizeof(sites)),
#endif
                    sites) ||
                !sites.valid(1u << 24) || static_cast<size_t>(state.selection) >= sites.size() ||
                !native_history_copy(reinterpret_cast<uintptr_t>(sites.begin) +
                    sizeof(int32_t) * static_cast<size_t>(state.selection), state.site) ||
                state.site < 0) return std::nullopt;
        state.sites = {reinterpret_cast<uintptr_t>(sites.begin),
            reinterpret_cast<uintptr_t>(sites.end), reinterpret_cast<uintptr_t>(sites.capacity)};
        for (size_t at = 0; at < state.events.size(); ++at) {
            const uintptr_t event = state.events[at];
            if (!event) continue;
            if (!capture_native_history_event_identity(reinterpret_cast<const void *>(event),
                        state.types[at]) ||
                    !native_history_copy(native_viewscreen_field(event,
                        {0x20, "history_event", "id"}, sizeof(state.ids[at])),
                        state.ids[at]) || state.ids[at] < 0 ||
                    !native_history_copy(native_viewscreen_field(event,
                        {8, "history_event", "year"}, sizeof(state.years[at])),
                        state.years[at]) ||
                    !native_history_copy(native_viewscreen_field(event,
                        {12, "history_event", "seconds"}, sizeof(state.seconds[at])),
                        state.seconds[at])) return std::nullopt;
            // The complete producer switch at 1054090..10541ee admits only
            // these types. Meanings and every flag branch use the shared
            // native event adapters and semantic renderer.
            switch (state.types[at]) {
            case 1: case 2: case 23: case 24: case 25: case 26:
            case 47: case 48: case 49: case 50: case 110: break;
            default: return std::nullopt;
            }
        }
        return state;
    };

    const auto before = read_state();
    if (!before) { cache = {}; return {}; }
    const size_t count = (before->lines[1] - before->lines[0]) / sizeof(uintptr_t);
    Cache next;
    next.state = *before;
    next.grid = graphics->screen;
    next.dimx = graphics->dimx;
    next.dimy = graphics->dimy;
    std::array<std::string, 2> sources, visible_sources;
    size_t part = before->events[0] ? 0 : 1;
    bool separated = false;
    size_t remaining = kNativeHistorySourceLimit;
    for (size_t index = 0; index < count; ++index) {
        uintptr_t line = 0;
        std::string text;
        if (!native_history_copy(before->lines[0] + index * sizeof(uintptr_t), line) ||
                !native_history_copy_string(line, text) || text.size() > remaining) {
            cache = {};
            return {};
        }
        remaining -= text.size();
        if (index < next.rows.size()) {
            next.rows[index].address = line;
            next.rows[index].source = text;
        }
        // 10517xx appends this exact standalone string only between the
        // +338 and +330 events. It is a native record boundary, not a date
        // prefix, punctuation mark, or English-name relationship guess.
        if (text == " ") {
            if (part != 0 || separated || !before->events[1] || sources[0].empty()) {
                cache = {};
                return {};
            }
            separated = true;
            part = 1;
            continue;
        }
        if (text.empty() || !before->events[part]) { cache = {}; return {}; }
        if (index < next.rows.size()) next.rows[index].paragraph = static_cast<int>(part);
        if (!sources[part].empty()) sources[part] += ' ';
        sources[part] += text;
        // 10517f0..1051820 draws vector indices 0..11 at rows 24..35.
        // Match that exact native slice when the last event extends below
        // the panel; never accept an arbitrary textual prefix as a match.
        if (index < 12) {
            if (!visible_sources[part].empty()) visible_sources[part] += ' ';
            visible_sources[part] += text;
        }
    }
    if ((before->events[0] && sources[0].empty()) ||
            (before->events[1] && sources[1].empty()) ||
            (before->events[0] && before->events[1] && !separated)) {
        cache = {};
        return {};
    }
    for (auto &text : sources) text = normalize_utterance(text);
    for (auto &text : visible_sources) text = normalize_utterance(text);
    if (next.rows.front().address != reinterpret_cast<uintptr_t>(source) ||
            next.rows.front().source != drawn_source) {
        cache = {};
        return {};
    }
    const auto after = read_state();
    if (!after || *after != *before) { cache = {}; return {}; }
    if (cache.state == *before && cache.sources == sources)
        next.paragraphs = cache.paragraphs;
    next.sources = std::move(sources);
    bool captured = false;
    for (size_t part = 0; part < next.paragraphs.size(); ++part) {
        if (!before->events[part] || next.paragraphs[part]) continue;
        captured = true;
        std::vector<std::max_align_t> context;
        if (!initialize_native_history_context(context)) continue;
        // Choose-start uses the unmodified 072080 constructor: flags are
        // zero, unlike chronicle/Legends callers that subsequently set bit 1.
        const uint32_t context_flags = 0;
        const auto flags = native_history_object_member(reinterpret_cast<uintptr_t>(context.data()),
            "history_event_context", "flags", sizeof(context_flags));
        if (!flags) continue;
        std::memcpy(reinterpret_cast<void *>(flags), &context_flags, sizeof(context_flags));
        auto event = snapshot_native_history_event(
            reinterpret_cast<const void *>(before->events[part]), context.data());
        if (!event || event->fields.contains("snapshot.incomplete") ||
                event->id != before->ids[part] || event->native_type != before->types[part]) continue;
        const auto site = event->fields.find("site");
        if (site == event->fields.end() || site->second.size() != 1 ||
                site->second.front() != before->site || !populate_native_history_subjects(*event)) continue;
        auto document = std::make_shared<NativeHistoryDocument>();
        document->owner = before->screen;
        document->event = std::move(*event);
        document->native_source = next.sources[part];
        // Share the semantic cache's sequence namespace without registering
        // plain-string rows as richbox tokens. Unchanged selections reuse it.
        {
            std::lock_guard<std::mutex> lock(g_native_history_mutex);
            g_native_history_sequence = g_native_history_sequence == UINT64_MAX
                ? 1 : g_native_history_sequence + 1;
            document->sequence = g_native_history_sequence;
        }
        auto paragraph = std::make_shared<NativeEmbarkReclaimHistoryParagraph>();
        paragraph->document = std::move(document);
        paragraph->visible_source = std::move(visible_sources[part]);
        next.paragraphs[part] = std::move(paragraph);
    }
    if (captured) {
        const auto finished = read_state();
        if (!finished || *finished != *before) { cache = {}; return {}; }
    }
    // Publish a complete batch only after state/source and new snapshots
    // agree. Previously drawn rows retain their own shared paragraph owners.
    next.active = true;
    cache = std::move(next);
    return paragraph_for_row();
}
