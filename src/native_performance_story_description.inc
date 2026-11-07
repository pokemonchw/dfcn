// The preview keeps only its colored rows after its producer returns.
// Recover each selected subject/form/work by its native ID or index, then require the
// original rich wrapper to reproduce every retained row before attaching it.
// The native preview and its row vector are never changed by this recovery.
struct NativePerformanceStoryColoredScratch {
    uintptr_t base;
    NativeKnowledgeTextBox box{};

    explicit NativePerformanceStoryColoredScratch(uintptr_t image, int width)
        : base(image) { box.width = width; }
    NativePerformanceStoryColoredScratch(const NativePerformanceStoryColoredScratch &) = delete;
    NativePerformanceStoryColoredScratch &operator=(const NativePerformanceStoryColoredScratch &) = delete;
    ~NativePerformanceStoryColoredScratch() {
#ifdef _WIN32
        const auto release = reinterpret_cast<void (*)(void *, size_t)>(
            native_pe_address(base, 0x1539680));
        for (size_t index = 0; index < box.rows.size(); ++index)
            if (box.rows.begin[index])
                release(box.rows.begin[index], sizeof(NativeKnowledgeColoredRow));
        reinterpret_cast<void (*)(void *)>(native_pe_address(base, 0x66b70))(&box.rows);
#else
        const auto release = reinterpret_cast<void (*)(void *, size_t)>(
            dlsym(RTLD_DEFAULT, "_ZdlPvm"));
        if (!release) return;
        for (size_t index = 0; index < box.rows.size(); ++index)
            if (box.rows.begin[index])
                release(box.rows.begin[index], sizeof(NativeKnowledgeColoredRow));
        if (box.rows.begin) release(box.rows.begin,
            reinterpret_cast<uintptr_t>(box.rows.capacity) -
                reinterpret_cast<uintptr_t>(box.rows.begin));
#endif
    }
};

struct NativePerformanceStoryRow {
    uintptr_t address = 0;
    std::string text, colors;
};

static bool read_native_performance_story_row(uintptr_t address,
        NativeKnowledgeColoredRow &row, size_t &length) {
    if (!address || !native_history_copy_bytes(address, &row, sizeof(row))) return false;
    length = strnlen(row.text, sizeof(row.text));
    return length < sizeof(row.text);
}

static void prepare_native_performance_story_document(const char *drawn_row) {
    struct Cache {
        uintptr_t world = 0, owner = 0, choice = 0, event = 0;
        int32_t type = -1, id = -1, width = 0;
        uint64_t generation = 0;
        size_t choice_index = SIZE_MAX;
        NativeBorrowedVector<NativeKnowledgeColoredRow *> native_rows;
        std::vector<NativePerformanceStoryRow> rows;
        std::shared_ptr<const NativeKnowledgeDocument> document;
    };
    auto &cache = reloadable_thread_state<Cache, struct PerformanceStoryDocumentCacheTag>();
    if (!drawn_row) return;
    try {
        NativeHistoryCallbackScope callback;
        const auto reset_cache = [&] {
            if (cache.owner && cache.document) {
                std::lock_guard<std::mutex> lock(g_native_knowledge_mutex);
                const auto found = g_native_knowledge_documents.find(cache.owner);
                if (found != g_native_knowledge_documents.end() && found->second == cache.document)
                    forget_native_knowledge_document(cache.owner);
            }
            cache = {};
        };
        const uintptr_t base = native_history_profile_base();
#ifdef _WIN32
        const uintptr_t perform = native_reference_address(base, 0x18a85b0);
#else
        const uintptr_t perform = native_reference_address(base, 0x22fd520);
#endif
        uint8_t open = 0;
        uintptr_t choice = 0;
        int32_t type = -1, id = -1;
        if (!base || !perform || !native_history_formatter_ready() ||
                !g_real_native_knowledge_wrap ||
                !native_history_copy(native_history_object_member(perform,
                    "adventure_interface_performst", "open", sizeof(open)), open) || open != 1 ||
                !native_history_copy(native_history_object_member(perform,
                    "adventure_interface_performst", "color_box_choice", sizeof(choice)), choice) ||
                !choice || choice > UINTPTR_MAX - 0x70 ||
                !native_history_copy(choice, type) ||
                !native_history_copy(choice + 0x68, id) || id < 0) {
            reset_cache();
            return;
        }
        // The complete native preview switch has five subject arms and an
        // event arm. Each subject writes one focus ID in history::describe's
        // context; the sermon deity arm uses the same figure biography as a
        // person/creature story. Form/work arms use their original formatters.
        size_t focus_offset = 0;
        bool form_preview = false;
        NativeHistoryObjectKind subject_kind = NativeHistoryObjectKind::Figure;
        NativeHistoryPageKind page_kind = NativeHistoryPageKind::FigureBiography;
        switch (type) {
        case 8:
            focus_offset = 0x28;
            subject_kind = NativeHistoryObjectKind::Site;
            page_kind = NativeHistoryPageKind::SiteIntroduction;
            break;
        case 9:
        case 25:
            focus_offset = 0x20;
            break;
        case 10:
            focus_offset = 0x1c;
            subject_kind = NativeHistoryObjectKind::Entity;
            page_kind = NativeHistoryPageKind::EntityIntroduction;
            break;
        case 11:
            focus_offset = 0x2c;
            subject_kind = NativeHistoryObjectKind::Region;
            page_kind = NativeHistoryPageKind::RegionIntroduction;
            break;
        case 12:
            break;
        case 13: case 14: case 15: case 16: case 17: case 18: case 19:
        case 31: case 33: case 35: case 39:
            form_preview = true;
            break;
        default:
            reset_cache();
            return;
        }
        const uintptr_t owner = native_history_object_member(perform,
            "adventure_interface_performst", "color_box.line", sizeof(NativeBorrowedVector<uintptr_t>));
        NativeKnowledgeTextBox live{};
        if (!owner || !native_history_copy(owner, live.rows) || !live.rows.valid(16384) ||
                live.rows.size() == 0 ||
                !native_history_copy(native_history_object_member(perform,
                    "adventure_interface_performst", "color_box.width", sizeof(live.width)), live.width) ||
                live.width <= 0 || live.width > 768) {
            reset_cache();
            return;
        }
        // Most colored writers belong to another native component. Establish
        // this exact preview's row address before copying text or replaying DF.
        bool owns_draw = false;
        for (size_t index = 0; index < live.rows.size(); ++index) {
            uintptr_t row = 0;
            if (!native_history_copy(reinterpret_cast<uintptr_t>(live.rows.begin) +
                    index * sizeof(uintptr_t), row)) return;
            owns_draw = owns_draw || row == reinterpret_cast<uintptr_t>(drawn_row);
        }
        if (!owns_draw) return;
        NativeBorrowedVector<uintptr_t> choices;
        if (!native_history_read_vector(native_history_object_member(perform,
                "adventure_interface_performst", "choice", sizeof(choices)), choices) ||
                choices.size() == 0 || choices.size() > 65536) {
            reset_cache();
            return;
        }
        size_t choice_index = SIZE_MAX;
        if (cache.choice == choice && cache.choice_index < choices.size() &&
                native_history_vector_at(choices, cache.choice_index) == choice)
            choice_index = cache.choice_index;
        else for (size_t index = 0; index < choices.size(); ++index) {
            if (native_history_vector_at(choices, index) != choice) continue;
            choice_index = index;
            break;
        }
        if (choice_index == SIZE_MAX) { reset_cache(); return; }

        uintptr_t world = 0, event = 0;
        if (!native_history_copy(native_history_global(0x24ebb58), world) || !world) {
            reset_cache();
            return;
        }
        if (form_preview)
            event = native_performance_form_subject(base, perform, type, id);
        else if (type != 12)
            event = native_history_find_subject(base, subject_kind, id);
        else if (!native_history_find_structure_id(native_history_global(0x24f9cb8),
                0x20, id, event)) event = 0;
        if (!event || (!form_preview && type != 12 && !g_real_native_history_describe)) {
            reset_cache();
            return;
        }
        const uint64_t generation = g_native_history_capture_generation.load(std::memory_order_acquire);
        const auto rows_agree = [&](const std::vector<NativePerformanceStoryRow> &rows,
                const NativeKnowledgeTextBox &box) {
            if (rows.size() != box.rows.size()) return false;
            NativeKnowledgeColoredRow row{};
            for (size_t index = 0; index < rows.size(); ++index) {
                uintptr_t address = 0;
                size_t length = 0;
                if (!native_history_copy(reinterpret_cast<uintptr_t>(box.rows.begin) +
                            index * sizeof(uintptr_t), address) ||
                        address != rows[index].address ||
                        !read_native_performance_story_row(address, row, length) ||
                        length != rows[index].text.size() ||
                        std::memcmp(row.text, rows[index].text.data(), length) != 0 ||
                        std::memcmp(row.colors, rows[index].colors.data(), length) != 0)
                    return false;
            }
            return true;
        };
        if (cache.world == world && cache.owner == owner && cache.choice == choice &&
                cache.type == type && cache.id == id && cache.event == event && cache.width == live.width &&
                cache.generation == generation && cache.document &&
                cache.native_rows.begin == live.rows.begin && cache.native_rows.end == live.rows.end &&
                cache.native_rows.capacity == live.rows.capacity && rows_agree(cache.rows, live)) {
            std::lock_guard<std::mutex> lock(g_native_knowledge_mutex);
            const auto found = g_native_knowledge_documents.find(owner);
            if (found == g_native_knowledge_documents.end() || found->second != cache.document)
                remember_native_knowledge_document(owner, cache.document);
            return;
        }
        reset_cache();
        {
            std::lock_guard<std::mutex> lock(g_native_knowledge_mutex);
            const auto found = g_native_knowledge_documents.find(owner);
            if (found != g_native_knowledge_documents.end() && found->second->story_event)
                forget_native_knowledge_document(owner);
        }
        std::vector<NativePerformanceStoryRow> rows;
        rows.reserve(live.rows.size());
        NativeKnowledgeColoredRow native_row{};
        for (size_t index = 0; index < live.rows.size(); ++index) {
            uintptr_t address = 0;
            size_t length = 0;
            if (!native_history_copy(reinterpret_cast<uintptr_t>(live.rows.begin) +
                        index * sizeof(uintptr_t), address) ||
                    !read_native_performance_story_row(address, native_row, length)) return;
            rows.push_back({address, std::string(native_row.text, length),
                std::string(native_row.colors, length)});
        }

        // Reuse every subtype/nested-item capture of the original sentence
        // adapter. A pre-existing producer ticket belongs to its own caller.
        struct PendingScope {
            NativeHistoryPending previous = std::move(pending_native_history());
            ~PendingScope() { pending_native_history() = std::move(previous); }
        } pending_scope;
        std::vector<std::max_align_t> context;
        if (!initialize_native_history_context(context)) return;
        const uint32_t context_flags = 0;
        const auto flags = native_history_object_member(reinterpret_cast<uintptr_t>(context.data()),
            "history_event_context", "flags", sizeof(context_flags));
        if (!flags) return;
        std::memcpy(reinterpret_cast<void *>(flags), &context_flags, sizeof(context_flags));
        NativeMissionReportScratch sentence(base);
        std::string_view source;
        std::string rich_source;
        std::shared_ptr<NativeHistoryDocument> story;
        if (form_preview) {
            const uintptr_t assign = native_history_page_address(NativeHistoryPageSymbol::AssignLiteral);
            if (!assign) return;
            reinterpret_cast<NativeHistoryLiteralFn>(assign)(&sentence.source, "[C:6:0:1]");
            if (!recover_native_performance_form_source(base, event, type, &sentence.source) ||
                    !native_string_view(&sentence.source, &source, kNativeHistorySourceLimit) ||
                    source.size() <= 9) return;
            rich_source.assign(source);
        } else if (type != 12) {
            // PE 871052/87116f/8712c8/871421/87157a supplies flags=0,
            // the corresponding focus above and brief=true. The shared
            // producer owns the whole introduction and confidence suffix,
            // including every figure, site, organization and region branch.
            // Preserve any unrelated in-flight Legends capture around it.
            struct LegendsScope {
                NativeHistoryLegendsState previous = std::move(native_history_legends_state());
                LegendsScope() { native_history_legends_state() = {}; }
                ~LegendsScope() { native_history_legends_state() = std::move(previous); }
            } legends_scope;
            const uintptr_t assign = native_history_page_address(NativeHistoryPageSymbol::AssignLiteral);
            const uintptr_t history = native_history_global(0x24f9cb8);
            if (!assign || !history) return;
            const auto focus = native_history_object_field(reinterpret_cast<uintptr_t>(context.data()),
                "history_event_context", focus_offset, sizeof(id));
            if (!focus) return;
            std::memcpy(reinterpret_cast<void *>(focus), &id, sizeof(id));
            reinterpret_cast<NativeHistoryLiteralFn>(assign)(&sentence.source, "[C:6:0:1]");
            capture_native_history_describe(reinterpret_cast<void *>(history),
                context.data(), true, &sentence.source);
            auto &page = native_history_legends_state().completed;
            if (!page.source_complete || page.source != &sentence.source ||
                    page.generation != generation || page.missing_snapshots || page.spans.size() != 1 ||
                    !native_string_view(&sentence.source, &source, kNativeHistorySourceLimit) ||
                    source != page.complete_source) return;
            auto &span = page.spans.front();
            if (!span.page || span.page->kind != page_kind || span.begin != 9 || span.end < span.begin ||
                    source.substr(0, span.begin) != "[C:6:0:1]" ||
                    source.substr(span.end) != "[B]" ||
                    !native_history_tree_within_limits(span.page->data, true)) return;
            const auto &data = span.page->data;
            int32_t captured_id = -1;
            switch (subject_kind) {
            case NativeHistoryObjectKind::Site: captured_id = data.site_id; break;
            case NativeHistoryObjectKind::Entity: captured_id = data.entity_id; break;
            case NativeHistoryObjectKind::Figure: captured_id = data.actor_id; break;
            case NativeHistoryObjectKind::Region: {
                const auto region = data.fields.find("region");
                if (region != data.fields.end() && region->second.size() == 1)
                    captured_id = region->second.front();
                break;
            }
            default: return;
            }
            if (captured_id != id) return;
            rich_source.assign(source);
            story = std::make_shared<NativeHistoryDocument>();
            story->native_source = span.source;
            story->page = std::move(span.page);
        } else {
            int32_t native_type = -1;
            if (!capture_native_history_event_identity(reinterpret_cast<void *>(event), native_type)) return;
            capture_native_history_sentence_range(reinterpret_cast<void *>(event),
                &sentence.source, context.data(), true, false, 0);
            auto captured = std::move(pending_native_history());
            pending_native_history() = {};
            if (!captured.event || captured.event->id != id || captured.generation != generation ||
                    !native_string_view(&sentence.source, &source, kNativeHistorySourceLimit) ||
                    source.empty() || source != captured.native_source ||
                    !native_history_tree_within_limits(*captured.event)) return;
            rich_source = "[C:6:0:1]";
            rich_source.append(source);
            story = std::make_shared<NativeHistoryDocument>();
            story->native_source.assign(source);
            story->event = std::move(*captured.event);
        }
        // This const wrapper argument borrows core-owned bytes. Only the
        // isolated native sentence and colored rows own DF allocations.
#ifdef _WIN32
        NativeString rich = native_empty_string();
        rich.size = rich_source.size();
        if (rich_source.size() <= 15)
            std::memcpy(rich.storage.small, rich_source.c_str(), rich_source.size() + 1);
        else {
            rich.storage.heap = rich_source.data();
            rich.capacity = rich_source.size();
        }
#else
        const NativeString &rich = rich_source;
#endif
        NativePerformanceStoryColoredScratch wrapped(base, live.width);
        g_real_native_knowledge_wrap(&wrapped.box, &rich);
        if (!wrapped.box.rows.valid(16384) || wrapped.box.rows.size() > rows.size()) return;
        for (size_t index = 0; index < wrapped.box.rows.size(); ++index) {
            const auto *row = native_reading_row_at(&wrapped.box, index);
            size_t length = 0;
            if (!read_native_performance_story_row(reinterpret_cast<uintptr_t>(row), native_row, length) ||
                    length != rows[index].text.size() ||
                    std::memcmp(native_row.text, rows[index].text.data(), length) != 0 ||
                    std::memcmp(native_row.colors, rows[index].colors.data(), length) != 0) return;
        }
        // The shared reader can append empty scroll-padding rows for a form
        // mentioned inside an event. They carry no source bytes; retain them
        // without changing the native iterator or relaxing any actual row.
        for (size_t index = wrapped.box.rows.size(); index < rows.size(); ++index)
            if (!rows[index].text.empty()) return;
        NativeKnowledgeTextBox current{};
        uintptr_t current_choice = 0;
        int32_t current_type = -1, current_id = -1;
        uint8_t current_open = 0;
        if (generation != g_native_history_capture_generation.load(std::memory_order_acquire) ||
                !native_history_copy(native_history_object_member(perform,
                    "adventure_interface_performst", "open", sizeof(current_open)), current_open) || current_open != 1 ||
                !native_history_copy(native_history_object_member(perform,
                    "adventure_interface_performst", "color_box_choice", sizeof(current_choice)), current_choice) ||
                current_choice != choice || !native_history_copy(choice, current_type) || current_type != type ||
                !native_history_copy(choice + 0x68, current_id) || current_id != id ||
                !native_history_copy(owner, current.rows) ||
                !current.rows.valid(16384) || current.rows.begin != live.rows.begin ||
                current.rows.end != live.rows.end || current.rows.capacity != live.rows.capacity ||
                !native_history_copy(native_history_object_member(perform,
                    "adventure_interface_performst", "color_box.width", sizeof(current.width)), current.width) ||
                current.width != live.width || !rows_agree(rows, current)) return;

        auto document = read_native_reading_box(&current, &rich, false, false, false);
        if (!document || document->rows.size() != rows.size()) return;
        document->performance_choice_type = type;
        if (story) {
            story->owner = owner;
            std::lock_guard<std::mutex> lock(g_native_history_mutex);
            g_native_history_sequence = g_native_history_sequence == UINT64_MAX
                ? 1 : g_native_history_sequence + 1;
            story->sequence = g_native_history_sequence;
        }
        document->story_event = std::move(story);
        {
            std::lock_guard<std::mutex> lock(g_native_knowledge_mutex);
            remember_native_knowledge_document(owner, document);
        }
        cache.world = world;
        cache.owner = owner;
        cache.choice = choice;
        cache.event = event;
        cache.type = type;
        cache.id = id;
        cache.width = live.width;
        cache.generation = generation;
        cache.choice_index = choice_index;
        cache.native_rows = live.rows;
        cache.rows = std::move(rows);
        cache.document = std::move(document);
    } catch (...) {}
}
