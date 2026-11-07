// The world report does not dispatch on mission kind. Its three producers
// (1bff9d, 1c09f6, 1d3cfb) resolve campaign.event_id[] and call the complete
// history_event getSentence virtual at +d0. They use context constructor
// 72080 (flags=0), translated=true, glyphs_only=false, then wrap at 53 bytes.
// Recover the retained ordinary textbox from those same records. Nothing in
// the active report, its playback state, or its native strings is modified.
struct NativeMissionReportScratch {
    uintptr_t base;
    NativeString source = native_empty_string();
    NativeBorrowedVector<uintptr_t> rows{};

    explicit NativeMissionReportScratch(uintptr_t image) : base(image) {}
    NativeMissionReportScratch(const NativeMissionReportScratch &) = delete;
    NativeMissionReportScratch &operator=(const NativeMissionReportScratch &) = delete;
    ~NativeMissionReportScratch() {
#ifdef _WIN32
        // 8e7310/8e7440 allocate each row as a native 32-byte string and
        // retain its pointer in a native vector. Release both with DF's
        // allocator, as the native textbox destructor does.
        const auto destroy_string = reinterpret_cast<void (*)(void *)>(native_pe_address(base, 0x6f850));
        const auto destroy_object = reinterpret_cast<void (*)(void *, size_t)>(
            native_pe_address(base, 0x1539680));
        for (size_t index = 0; index < rows.size(); ++index) {
            auto *row = reinterpret_cast<void *>(rows.begin[index]);
            if (!row) continue;
            destroy_string(row);
            destroy_object(row, sizeof(NativeString));
        }
        reinterpret_cast<void (*)(void *)>(native_pe_address(base, 0x66b70))(&rows);
        destroy_string(&source);
#else
        const auto release = reinterpret_cast<void (*)(void *, size_t)>(
            dlsym(RTLD_DEFAULT, "_ZdlPvm"));
        if (!release) return;
        for (size_t index = 0; index < rows.size(); ++index) {
            auto *row = reinterpret_cast<NativeString *>(rows.begin[index]);
            if (!row) continue;
            row->~NativeString();
            release(row, sizeof(NativeString));
        }
        if (rows.begin) release(rows.begin,
            (reinterpret_cast<uintptr_t>(rows.capacity) -
                reinterpret_cast<uintptr_t>(rows.begin)));
#endif
    }
};

static bool copy_native_mission_report_rows(uintptr_t address,
        std::vector<NativeMissionReportRow> &rows) {
    NativeBorrowedVector<uintptr_t> native;
    if (!native_history_read_vector(address, native) ||
            native.size() > kNativeHistoryCaptureTokens) return false;
    rows.clear();
    rows.reserve(native.size());
    for (size_t index = 0; index < native.size(); ++index) {
        NativeMissionReportRow row;
        row.address = native_history_vector_at(native, index);
        if (!row.address || !native_history_copy_string(row.address, row.source)) return false;
        rows.push_back(std::move(row));
    }
    return true;
}

static bool same_native_mission_report_rows(const std::vector<NativeMissionReportRow> &first,
        const std::vector<NativeMissionReportRow> &second) {
    return first.size() == second.size() &&
        std::equal(first.begin(), first.end(), second.begin(), [](const auto &a, const auto &b) {
            return a.address == b.address && a.source == b.source;
        });
}

static void update_native_mission_report_display(uintptr_t screen,
        std::vector<NativeMissionReportParagraph> &paragraphs) {
    NativeBorrowedVector<int32_t> colors;
    const bool have_colors = native_history_copy(native_history_object_member(screen, "viewscreen_worldst", "mission_text_box_color"), colors) &&
        colors.valid(kNativeHistoryCaptureTokens);
    int32_t fade_timer = 0, fade_start = 0;
    const bool have_fade = native_history_copy(native_history_object_member(screen, "viewscreen_worldst", "mission_fade_in_timer"), fade_timer) &&
        native_history_copy(native_history_object_member(screen, "viewscreen_worldst", "mission_fade_start_ind"), fade_start);
    const auto *graphics = native_graphics();
    size_t first = 0;
    for (auto &paragraph : paragraphs) {
        const size_t end = first + paragraph.rows.size();
        paragraph.foreground_rgb = -1;
        int32_t palette = 15;
        if (graphics && have_colors && first < colors.size() &&
                native_history_copy(reinterpret_cast<uintptr_t>(colors.begin) +
                    first * sizeof(int32_t), palette)) {
            // 1d0541..1d0602 selects the complete row's color. Its default
            // branch is bright white, while 0..15 map to the same palette.
            if (palette < 0 || palette > 15) palette = 15;
            paragraph.foreground_rgb = (graphics->uccolor[palette][0] << 16) |
                (graphics->uccolor[palette][1] << 8) | graphics->uccolor[palette][2];
        }
        // 1d01f7..1d0541 paints placeholder glyphs for the newly appended
        // rows until the timer falls below 2. Keep the complete event hidden
        // if any of its rows is still in that native reveal region.
        paragraph.revealed = have_fade && !(fade_timer >= 2 && end > first &&
            (fade_start < 0 || end > static_cast<size_t>(fade_start)));
        first = end;
    }
}

static std::vector<NativeMissionReportParagraph> native_mission_report_paragraphs() {
    NativeHistoryCallbackScope callback;
    struct Cache {
        uintptr_t report = 0, owner = 0;
        uint64_t generation = 0;
        std::vector<std::pair<int32_t, uintptr_t>> events;
        std::vector<NativeMissionReportRow> rows;
        std::vector<NativeMissionReportParagraph> paragraphs;
    };
    auto &cache = reloadable_thread_state<Cache, struct MissionReportParagraphCacheTag>();
    try {
        const uintptr_t base = native_history_profile_base();
        const uintptr_t screen = base ? native_current_viewscreen() : 0;
        uintptr_t report = 0;
        int32_t mode = -1;
        // World render 1c194f/1c1a6a and input 1d3bfe select the report
        // panel with viewscreen_worldst.page(+1b4)==5.
        if (!screen || !native_history_formatter_ready() || !g_real_native_paragraph ||
                !native_history_object_is(screen, "viewscreen_worldst") ||
                !native_history_copy(native_history_object_member(screen, "viewscreen_worldst", "view_mode"), mode) || mode != 5 ||
                !native_history_copy(native_history_object_member(screen, "viewscreen_worldst", "active_mission_report"), report) || !report) {
            cache = {};
            return {};
        }
        const uintptr_t owner = native_history_object_member(screen, "viewscreen_worldst", "mission_text_box.text");
        std::vector<NativeMissionReportRow> live;
        if (!copy_native_mission_report_rows(owner, live) || live.empty()) {
            cache = {};
            return {};
        }
        const auto sequence = [](NativeHistoryDocument &document) {
            std::lock_guard<std::mutex> lock(g_native_history_mutex);
            g_native_history_sequence = g_native_history_sequence == UINT64_MAX
                ? 1 : g_native_history_sequence + 1;
            document.sequence = g_native_history_sequence;
        };
        const auto untranslated = [&](size_t first, size_t end) {
            NativeMissionReportParagraph paragraph;
            paragraph.document.owner = owner;
            paragraph.document.event.fields["snapshot.incomplete"] = {1};
            paragraph.rows.assign(live.begin() + first, live.begin() + end);
            for (const auto &row : paragraph.rows) {
                if (!paragraph.document.native_source.empty()) paragraph.document.native_source += ' ';
                paragraph.document.native_source += row.source;
            }
            sequence(paragraph.document);
            return paragraph;
        };
        const auto untranslated_report = [&]() {
            std::vector<NativeMissionReportParagraph> paragraphs;
            paragraphs.push_back(untranslated(0, live.size()));
            update_native_mission_report_display(screen, paragraphs);
            return paragraphs;
        };
        NativeBorrowedVector<uintptr_t> campaigns;
        if (!native_history_read_vector(report, campaigns) ||
                campaigns.size() > kNativeHistoryCaptureDocuments) return untranslated_report();
        std::vector<std::pair<int32_t, uintptr_t>> events;
        for (size_t campaign_index = 0; campaign_index < campaigns.size(); ++campaign_index) {
            const uintptr_t campaign = native_history_vector_at(campaigns, campaign_index);
            int32_t count = 0;
            if (!campaign || !native_history_copy(campaign + 0x704, count) ||
                    count < 0 || count > 64) return untranslated_report();
            std::array<int32_t, 64> ids{};
            if (count && !native_history_copy_bytes(campaign + 0x404, ids.data(),
                    static_cast<size_t>(count) * sizeof(int32_t))) return untranslated_report();
            for (int32_t index = 0; index < count; ++index) {
                uintptr_t event = 0;
                if (!native_history_find_structure_id(native_history_global(0x24f9cb8),
                        0x20, ids[index], event)) return untranslated_report();
                events.emplace_back(ids[index], event);
            }
        }
        const uint64_t generation = g_native_history_capture_generation.load(std::memory_order_acquire);
        if (cache.report == report && cache.owner == owner && cache.generation == generation &&
                cache.events == events && same_native_mission_report_rows(cache.rows, live)) {
            update_native_mission_report_display(screen, cache.paragraphs);
            return cache.paragraphs;
        }

        // Reuse the entire existing sentence capture, including subtype
        // snapshots, nested event/item producers and post-format subjects.
        // Its pending slot belongs to a caller; recovery borrows it only for
        // this scope and restores any pre-existing capture on every exit.
        struct PendingScope {
            NativeHistoryPending previous = std::move(pending_native_history());
            ~PendingScope() { pending_native_history() = std::move(previous); }
        } pending_scope;
        std::vector<NativeMissionReportParagraph> paragraphs;
        size_t cursor = 0;
        for (const auto &[id, event] : events) {
            if (cursor == live.size()) break;
            if (!event || id < 0) continue;
            int32_t type = -1;
            if (!capture_native_history_event_identity(reinterpret_cast<void *>(event), type)) continue;
            std::vector<std::max_align_t> context;
            if (!initialize_native_history_context(context)) continue;
            const uint32_t context_flags = 0;
            const auto flags = native_history_object_member(reinterpret_cast<uintptr_t>(context.data()),
                "history_event_context", "flags", sizeof(context_flags));
            if (!flags) continue;
            std::memcpy(reinterpret_cast<void *>(flags), &context_flags, sizeof(context_flags));
            NativeMissionReportScratch scratch(base);
            capture_native_history_sentence_range(reinterpret_cast<void *>(event),
                &scratch.source, context.data(), true, false, 0);
            auto captured = std::move(pending_native_history());
            pending_native_history() = {};
            std::string_view source;
            if (!native_string_view(&scratch.source, &source, kNativeHistorySourceLimit) || source.empty())
                continue;
            // The two playback producers inline the same 8e7440 loop. The
            // skip-to-end producer calls this wrapper directly at 1d3d38.
            // Call the original trampoline: the public entry is hooked for
            // live paragraph capture and must never retain our scratch rows.
            g_real_native_paragraph(&scratch.rows, &scratch.source, 53);
            std::vector<NativeMissionReportRow> generated;
            if (!copy_native_mission_report_rows(reinterpret_cast<uintptr_t>(&scratch.rows), generated) ||
                    generated.empty() || generated.size() > live.size() - cursor) continue;
            const auto agrees = [&](size_t at) {
                return std::equal(generated.begin(), generated.end(), live.begin() + at,
                    [](const auto &a, const auto &b) { return a.source == b.source; });
            };
            size_t matched = cursor;
            if (!agrees(matched)) {
                // A previously rendered name or other referenced object may
                // have changed. Recover later paragraphs only if the complete
                // native row sequence has exactly one remaining occurrence.
                matched = SIZE_MAX;
                for (size_t at = cursor + 1; at <= live.size() - generated.size(); ++at) {
                    if (!agrees(at)) continue;
                    if (matched != SIZE_MAX) { matched = SIZE_MAX; break; }
                    matched = at;
                }
                if (matched == SIZE_MAX) continue;
            }
            const size_t end = matched + generated.size();
            if (captured.event && captured.native_source == source) {
                if (matched > cursor) paragraphs.push_back(untranslated(cursor, matched));
                NativeMissionReportParagraph paragraph;
                paragraph.document.owner = owner;
                paragraph.document.event = std::move(*captured.event);
                paragraph.document.native_source.assign(source);
                // Ordinary textbox rows share the semantic cache's sequence
                // namespace without being registered as richbox tokens.
                sequence(paragraph.document);
                paragraph.rows.assign(live.begin() + matched, live.begin() + end);
                paragraph.paragraph_width = 53;
                paragraphs.push_back(std::move(paragraph));
            } else paragraphs.push_back(untranslated(cursor, end));
            cursor = end;
        }
        // The ordinary textbox itself proves ownership even if one native
        // record cannot currently be reconstructed. Retain every uncovered
        // row together; generic word/name matching must not fragment it.
        if (cursor < live.size()) paragraphs.push_back(untranslated(cursor, live.size()));
        cache.report = report;
        cache.owner = owner;
        cache.generation = generation;
        cache.events = std::move(events);
        cache.rows = std::move(live);
        cache.paragraphs = std::move(paragraphs);
        update_native_mission_report_display(screen, cache.paragraphs);
        return cache.paragraphs;
    } catch (...) {}
    return {};
}
