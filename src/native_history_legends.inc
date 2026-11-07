// DF 53.16 Legends uses two native producers: history::describe appends an
// event directly to its local page string, while the age/collection producer
// appends a separate getSentence result. Both terminate each event with [B].
// Bind their event objects to the parser's paragraph-break tokens, never to
// English words, dates, names, or guessed event sentence patterns.
using NativeHistoryDescribeFn = void (*)(void *, void *, bool, NativeString *);
using NativeHistoryCollectionFn = void (*)(void *, NativeString *, void *, void *);
using NativeHistoryLinksFn = void (*)(void *, NativeHistoryRichBox *);
static NativeHistoryDescribeFn g_real_native_history_describe = nullptr;
static NativeHistoryCollectionFn g_real_native_history_collection = nullptr;
static NativeHistoryLinksFn g_real_native_history_links = nullptr;
#ifdef _WIN32
using NativeHistoryCountedTransferFn = NativeString *(*)(NativeString *, const char *, size_t);
static NativeHistoryCountedTransferFn g_real_native_history_counted_transfer = nullptr;
static uint32_t g_native_history_legends_producer_modes = 0;
static uint32_t g_native_history_legends_recovery_modes = 0;
static bool g_native_history_legends_recovery_ready = false;
static bool g_native_history_legends_grouped = false;
#endif

struct NativeHistoryLegendsSpan {
    size_t begin = 0, end = 0;
    NativeHistoryEventData event;
    std::string source;
    std::optional<NativeHistoryPageData> page;
};
struct NativeHistoryLegendsRange {
    size_t begin = 0, end = 0;
    std::string source;
};
struct NativeHistoryLegendsPage {
    const NativeString *source = nullptr;
    uint64_t generation = 0;
    size_t prefix_size = 0;
    bool local_source = false, valid = false;
    bool source_started = false, source_complete = false;
#ifdef _WIN32
    // A formatter's real string object must be the source of the actual
    // final append into describe's fourth argument. No stack offset or
    // equal-looking substring establishes this transfer.
    const NativeString *local_object = nullptr;
    bool local_transfer = false, local_ambiguous = false, transfer_required = false;
    std::string output_prefix, transferred_source;
#endif
    size_t missing_snapshots = 0;
    bool collection_ranges_complete = true;
    std::string complete_source;
    std::vector<NativeHistoryLegendsSpan> spans;
    std::vector<NativeHistoryLegendsRange> collection_ranges;
    int32_t figure_id = -1;
    int32_t artifact_id = -1;
    const NativeString *segment_source = nullptr;
    size_t segment_begin = 0;
    std::optional<NativeHistoryPageData> segment;
    std::optional<NativeHistoryPageData> prepared_segment;
    std::optional<NativeHistoryPageData> introduction;
    int32_t marker_year = -1, marker_seconds = -1;
    std::map<std::pair<NativeHistoryPageKind, int32_t>, size_t> occurrences;
    std::map<std::pair<int, int32_t>, size_t> extra_occurrences;
};
struct NativeHistoryLegendsState {
    NativeHistoryLegendsPage *active = nullptr;
    NativeHistoryLegendsPage completed;
    NativeHistoryLegendsPage parsed;
    NativeHistoryRichBox *parsed_box = nullptr;
    size_t parsed_begin = 0;
};
static NativeHistoryLegendsState &native_history_legends_state() {
    return reloadable_thread_state<NativeHistoryLegendsState, struct HistoryLegendsTag>();
}
struct NativeHistoryLegendsScope {
    NativeHistoryLegendsPage *previous;
    explicit NativeHistoryLegendsScope(NativeHistoryLegendsPage &page)
        : previous(native_history_legends_state().active) {
        native_history_legends_state().active = &page;
    }
    ~NativeHistoryLegendsScope() { native_history_legends_state().active = previous; }
};

static std::mutex g_native_history_legends_mutex;
struct NativeHistoryLegendsReady {
    uintptr_t begin = 0, end = 0, first = 0, last = 0;
    std::vector<uint64_t> sequences;
    uint64_t checked_revision = 0;
    bool retained = false;
};
static std::unordered_map<uintptr_t, NativeHistoryLegendsReady> g_native_history_legends_ready;
static std::unordered_map<uintptr_t, NativeHistoryLegendsReady> g_native_history_legends_attempted;
struct NativeHistoryLegendsOwnership {
    NativeHistoryLegendsReady fingerprint;
    size_t tokens = 0;
    uintptr_t first = 0, last = 0;
};
static std::unordered_map<uintptr_t, NativeHistoryLegendsOwnership> g_native_history_legends_ownership;

struct NativeHistoryLegendsTab {
    uintptr_t screen = 0, tab = 0;
    int32_t type = -1, index = -1;
};

static uintptr_t native_history_legends_screen() {
    const auto screen = native_current_viewscreen();
    return screen && native_history_object_is(screen, "viewscreen_legendsst") ? screen : 0;
}

// Preserve the core's semantic page kinds even if the target reorders its
// enum. Each token is an independent declaration, not an integer heuristic.
static std::optional<int32_t> native_history_legends_mode(int32_t value) {
    using native_history_abi::enum_value;
    const std::array modes{
        enum_value("legends_mode_type", "NONE", -1),
        enum_value("legends_mode_type", "MAIN", 0),
        enum_value("legends_mode_type", "HFS", 1),
        enum_value("legends_mode_type", "SITES", 2),
        enum_value("legends_mode_type", "ARTIFACTS", 3),
        enum_value("legends_mode_type", "BOOKS", 4),
        enum_value("legends_mode_type", "SUBREGIONS", 5),
        enum_value("legends_mode_type", "ENTITIES", 6),
        enum_value("legends_mode_type", "ART", 7),
        enum_value("legends_mode_type", "ABS", 8),
        enum_value("legends_mode_type", "ERA", 9),
        enum_value("legends_mode_type", "HEC", 10),
        enum_value("legends_mode_type", "MAPS", 11),
        enum_value("legends_mode_type", "FEATURE_LAYERS", 12),
        enum_value("legends_mode_type", "POPULATIONS", 13)};
    std::optional<int32_t> result;
    for (size_t i = 0; i < modes.size(); ++i) if (modes[i] && *modes[i] == value) {
        if (result) return std::nullopt;
        result = static_cast<int32_t>(i) - 1;
    }
    return result;
}

static uintptr_t native_history_legends_tab_box(uintptr_t tab) noexcept {
    return native_viewscreen_field(tab, {0x28, "legend_pagest", "text_box"}, 1);
}

static uintptr_t native_history_legends_tab_header(uintptr_t tab) noexcept {
    return native_viewscreen_field(tab, {0, "legend_pagest", "header"}, sizeof(NativeString));
}

static NativeHistoryLegendsTab native_history_legends_tab(bool history_only = true) {
    const uintptr_t screen = native_history_legends_screen();
    if (!screen) return {};
    NativeBorrowedVector<uintptr_t> tabs{};
    int32_t selected = -1, type = -1, index = -1;
    if (!native_history_markup_read(screen, {0x428, "viewscreen_legendsst", "page"}, tabs) || !tabs.valid(4096) ||
        !native_history_markup_read(screen, {0x440, "viewscreen_legendsst", "active_page_index"}, selected) || selected < 0) return {};
    const uintptr_t tab = native_history_vector_at(tabs, static_cast<size_t>(selected));
    if (!tab || !native_history_markup_read(tab, {0x20, "legend_pagest", "mode"}, type) ||
            !native_history_markup_read(tab, {0x24, "legend_pagest", "index"}, index)) return {};
    const auto mode = native_history_legends_mode(type);
    if (!mode) return {};
    type = *mode;
    // d401c7 selects this tab; d4084f subtracts one before the render
    // switch. Only detail tabs with verified event producers own a richbox.
    // The frame context still distinguishes root, catalog, art and map tabs.
    if (history_only && (type < 1 || type > 13 || type == 7 || type == 10 || type == 11 || index < 0))
        return {};
    // A category and its opened records share the same mode. index == -1
    // selects the catalog (ELF 1cebf24), independently of its visible rows.
    return {screen, tab, type, index};
}

static uintptr_t native_history_legends_box() {
    if (g_native_history_frame) return g_native_history_frame->owner;
    const auto current = native_history_legends_tab();
    return native_history_legends_tab_box(current.tab);
}

static bool native_history_legends_artwork_page() {
    if (g_native_history_frame) return g_native_history_frame->artwork_page;
    const auto current = native_history_legends_tab(false);
    return current.type == 7 && current.index >= 0;
}

static std::optional<NativeHistoryLegendsCaption> native_history_legends_caption() {
    if (g_native_history_frame) return g_native_history_frame->caption;
    const auto current = native_history_legends_tab();
    NativeHistoryLegendsCaption caption;
    // The selected tab owns the complete pinned title, even when its tab
    // button is shortened. Age/collection titles have no quoted name/gloss
    // identity; that is not a reason to send their rich body to plain prose.
    if (!current.tab || !native_history_copy_string(native_history_legends_tab_header(current.tab), caption.source) ||
            caption.source.empty()) return std::nullopt;
    caption.event_title = current.type == 9;
    // The region detail tab remains typed when its introduction scrolls out
    // of view. Carry that fact in the existing core-owned render snapshot.
    caption.region_title = current.type == 5;
    if (current.type == 1 && current.index >= 0) {
        NativeBorrowedVector<int32_t> ids;
        int32_t id = -1;
        const uintptr_t field = native_history_object_field(current.screen,
            "viewscreen_legendsst", 0x1b0, sizeof(ids));
        const uintptr_t base = native_history_profile_base();
        if (native_history_copy(field, ids) && ids.valid(1u << 24) &&
                static_cast<size_t>(current.index) < ids.size() &&
                native_history_copy(reinterpret_cast<uintptr_t>(ids.begin) +
                    size_t(current.index) * sizeof(int32_t), id) && id >= 0) {
            const uintptr_t figure = native_history_find_subject(base,
                NativeHistoryObjectKind::Figure, id);
            const uintptr_t name_address = figure ? native_history_object_field(
                figure, "historical_figure", 0x38) : 0;
            NativeHistoryName name;
            if (name_address && capture_native_history_name(base, name_address, name) &&
                    name.has_name && capture_native_history_original_name(
                        base, name_address, name.native_name))
                caption.character_name = std::move(name);
        }
    }
    if (current.type == 2 && current.index >= 0) {
        NativeBorrowedVector<int32_t> ids;
        int32_t id = -1;
        const uintptr_t field = native_history_object_field(current.screen,
            "viewscreen_legendsst", 0x1c8, sizeof(ids));
        const uintptr_t base = native_history_profile_base();
        if (native_history_copy(field, ids) && ids.valid(1u << 24) &&
                static_cast<size_t>(current.index) < ids.size() &&
                native_history_copy(reinterpret_cast<uintptr_t>(ids.begin) +
                    size_t(current.index) * sizeof(int32_t), id) && id >= 0) {
            const uintptr_t site = native_history_find_subject(base, NativeHistoryObjectKind::Site, id);
            const uintptr_t name_address = site ? native_history_object_field(site, "world_site", 0) : 0;
            NativeHistoryName name;
            if (name_address && capture_native_history_name(base, name_address, name) &&
                    capture_native_history_site_name_context(base, site, name, true))
                caption.site_name = std::move(name);
        }
    }
    return caption;
}

static bool native_history_legends_draw_observed() {
    if (g_native_history_frame) return g_native_history_frame->observed;
    const uintptr_t owner = native_history_legends_box();
    if (!owner) return false;
    uintptr_t identity = 0;
    std::string source;
    {
        std::lock_guard<std::mutex> lock(g_native_history_mutex);
        identity = g_native_history_last_draw_identity;
        source = g_native_history_last_draw_source;
        if (!identity || source.empty()) return false;
        const auto document = g_native_history_token_owners.find(identity);
        if (document != g_native_history_token_owners.end() &&
                document->second.document->owner == owner &&
                document->second.index < document->second.document->tokens.size() &&
                document->second.document->tokens[document->second.index].source == source) return true;
        const auto region = g_native_history_region_owners.find(identity);
        if (region != g_native_history_region_owners.end() &&
                region->second.region->owner == owner &&
                region->second.index < region->second.region->tokens.size() &&
                region->second.region->tokens[region->second.index].source == source) return true;
    }
    // The visible slice may contain only a site's/entity's ordinary prefix.
    // Its words still prove that this box has actually painted. Checking the
    // native word vector avoids treating a long non-event prefix as an
    // indefinitely pending event page merely because no event is visible.
    NativeBorrowedVector<uintptr_t> words;
    if (!native_history_markup_read(owner, {0, "markup_text_boxst", "word"}, words) ||
            !words.valid(kNativeHistoryCaptureTokens)) return false;
    std::array<uintptr_t, 256> identities{};
    for (size_t begin = 0; begin < words.size(); begin += identities.size()) {
        const size_t count = std::min(identities.size(), words.size() - begin);
        if (!native_history_copy_bytes(reinterpret_cast<uintptr_t>(words.begin) +
                begin * sizeof(uintptr_t), identities.data(), count * sizeof(uintptr_t))) return false;
        if (std::none_of(identities.begin(), identities.begin() + count, [&](uintptr_t word) {
                return native_history_markup_text(word) == identity;
            })) continue;
        std::string current;
        return native_history_copy_string(identity, current) && current == source;
    }
    return false;
}

static bool same_native_history_legends_fingerprint(const NativeHistoryLegendsReady &a,
        const NativeHistoryLegendsReady &b) {
    return a.begin == b.begin && a.end == b.end && a.first == b.first && a.last == b.last;
}

static bool native_history_legends_fingerprint(uintptr_t box, NativeHistoryLegendsReady &value) {
    NativeHistoryRichBox view{};
    if (!native_history_markup_box(box, view)) return false;
    const auto &words = view.words;
    value.begin = reinterpret_cast<uintptr_t>(words.begin);
    value.end = reinterpret_cast<uintptr_t>(words.end);
    if (words.size()) {
        value.first = native_history_markup_element(words, 0);
        value.last = native_history_markup_element(words, words.size() - 1);
        if (!value.first || !value.last) return false;
    }
    return true;
}

static bool native_history_legends_page() { return native_history_legends_box() != 0; }
static uintptr_t native_history_legends_owner() { return native_history_legends_box(); }
static bool native_history_legends_ownership_confirmed() {
    if (g_native_history_frame) return g_native_history_frame->ownership;
    const uintptr_t box = native_history_legends_box();
    NativeHistoryLegendsReady current;
    if (!native_history_legends_fingerprint(box, current)) return false;
    NativeHistoryLegendsOwnership ownership;
    {
        std::lock_guard<std::mutex> lock(g_native_history_legends_mutex);
        const auto found = g_native_history_legends_ownership.find(box);
        if (found == g_native_history_legends_ownership.end() ||
            !same_native_history_legends_fingerprint(found->second.fingerprint, current)) return false;
        ownership = found->second;
    }
    if (!ownership.tokens) return true;
    std::lock_guard<std::mutex> lock(g_native_history_mutex);
    return std::any_of(g_native_history_regions.begin(), g_native_history_regions.end(),
        [&](const auto &region) {
            return region->owner == box && region->tokens.size() == ownership.tokens &&
                region->tokens.front().identity == ownership.first &&
                region->tokens.back().identity == ownership.last;
        });
}
static bool native_history_legends_ready() {
    if (g_native_history_frame) return g_native_history_frame->ready;
    const uintptr_t box = native_history_legends_box();
    NativeHistoryLegendsReady current;
    if (!native_history_legends_fingerprint(box, current)) return false;
    std::scoped_lock lock(g_native_history_legends_mutex, g_native_history_mutex);
    const auto found = g_native_history_legends_ready.find(box);
    if (found == g_native_history_legends_ready.end() ||
            !same_native_history_legends_fingerprint(found->second, current)) return false;
    auto &ready = found->second;
    if (ready.checked_revision == g_native_history_registry_revision) return ready.retained;
    // The shared registry can evict an old or oversized page. A retained
    // native box must not fall back to guessing the missing event records.
    // Recheck after a registry transaction, not for every frame of a static
    // page. This also avoids copying tens of thousands of shared pointers
    // and sequence IDs during an ordinary scroll/hover.
    std::unordered_set<uint64_t> retained;
    retained.reserve(ready.sequences.size());
    for (const auto &document : g_native_history_documents)
        if (document->owner == box) retained.insert(document->sequence);
    ready.retained = std::all_of(ready.sequences.begin(), ready.sequences.end(),
        [&](uint64_t sequence) { return retained.contains(sequence); });
    ready.checked_revision = g_native_history_registry_revision;
    return ready.retained;
}

static void begin_native_history_legends_page(NativeHistoryLegendsPage &page,
        NativeString *source, bool local_source) {
    native_history_legends_state().completed = {};
    std::string_view prefix;
    page.source = source;
    page.generation = g_native_history_capture_generation.load(std::memory_order_acquire);
    page.local_source = local_source;
    page.valid = native_string_view(source, &prefix, kNativeHistorySourceLimit);
    page.source_started = page.valid;
    if (page.valid) {
        page.prefix_size = prefix.size();
#ifdef _WIN32
        page.transfer_required = local_source && g_native_history_legends_grouped;
        if (page.transfer_required) page.output_prefix.assign(prefix);
#endif
    }
}

static void finish_native_history_page_segment(const NativeString *source, size_t control_suffix);

static void finish_native_history_legends_page(NativeHistoryLegendsPage page) {
    if (!page.local_source && page.segment_source) {
        NativeHistoryLegendsScope scope(page);
        finish_native_history_page_segment(page.source, 3);
    }
    std::string_view complete;
    if (!page.source_started ||
        page.generation != g_native_history_capture_generation.load(std::memory_order_acquire) ||
        !native_string_view(page.source, &complete, kNativeHistorySourceLimit) ||
        complete.size() < page.prefix_size) return;
#ifdef _WIN32
    if (page.transfer_required && (!page.local_transfer || page.local_ambiguous ||
            complete.size() != page.output_prefix.size() + page.transferred_source.size() ||
            complete.substr(0, page.output_prefix.size()) != page.output_prefix ||
            complete.substr(page.output_prefix.size()) != page.transferred_source)) return;
#endif
    std::erase_if(page.spans, [&](auto &span) {
        if (page.local_source) { span.begin += page.prefix_size; span.end += page.prefix_size; }
        const bool invalid = span.begin > span.end || span.end > complete.size() ||
            complete.substr(span.begin, span.end - span.begin) != span.source ||
            (complete.substr(span.end, 3) != "[B]" && complete.substr(span.end, 3) != "[R]" &&
                complete.substr(span.end, 3) != "[P]");
        if (invalid) ++page.missing_snapshots;
        return invalid;
    });
    std::erase_if(page.collection_ranges, [&](const NativeHistoryLegendsRange &range) {
        const bool invalid = range.begin > range.end || range.end > complete.size() ||
            complete.substr(range.begin, range.end - range.begin) != range.source ||
            complete.substr(range.end, 3) != "[B]";
        if (invalid) { page.valid = false; page.collection_ranges_complete = false; }
        return invalid;
    });
    // The native producer still owns its appended history region when one
    // event snapshot is unavailable. Preserve that independently of whether
    // every event can be translated; the parser verifies its token bounds.
    page.complete_source.assign(complete);
    page.source_complete = true;
    native_history_legends_state().completed = std::move(page);
}

static void capture_native_history_describe(void *history, void *context, bool brief,
        NativeString *source) {
    NativeHistoryCallbackScope callback;
    NativeHistoryLegendsPage page;
    try {
        begin_native_history_legends_page(page, source, true);
        if (context) {
            native_history_copy(native_history_object_member(reinterpret_cast<uintptr_t>(context),
                "history_event_context", "histfig_id", sizeof(page.figure_id)), page.figure_id);
            native_history_copy(native_history_object_member(reinterpret_cast<uintptr_t>(context),
                "history_event_context", "artifact_id", sizeof(page.artifact_id)), page.artifact_id);
            page.introduction = snapshot_native_history_region_introduction(
                reinterpret_cast<uintptr_t>(context));
            if (!page.introduction)
                page.introduction = snapshot_native_history_entity_introduction(
                    reinterpret_cast<uintptr_t>(context));
            if (!page.introduction)
                page.introduction = snapshot_native_history_site_introduction(
                    reinterpret_cast<uintptr_t>(context));
            if (!page.introduction)
                page.introduction = snapshot_native_history_structure_introduction(
                    reinterpret_cast<uintptr_t>(context));
        }
    } catch (...) {}
    { NativeHistoryLegendsScope scope(page); g_real_native_history_describe(history, context, brief, source); }
    try { finish_native_history_legends_page(std::move(page)); } catch (...) {}
}

static void capture_native_history_collection(void *screen, NativeString *source,
        void *age, void *collection) {
    NativeHistoryCallbackScope callback;
    NativeHistoryLegendsPage page;
    try {
        begin_native_history_legends_page(page, source, false);
        // Constructors build their typed introduction before invoking the
        // common timeline producer. Capture that existing prefix as well.
        if (page.prefix_size) {
            std::string_view prefix;
            auto introduction = snapshot_native_history_collection_introduction(age, collection);
            if (native_string_view(source, &prefix, kNativeHistorySourceLimit) &&
                prefix.size() <= kNativeHistoryStringLimit && prefix.ends_with("[B]")) {
                NativeHistoryLegendsSpan span;
                span.begin = 0;
                span.end = prefix.size() - 3;
                span.source.assign(prefix.substr(0, span.end));
                page.collection_ranges.push_back({span.begin, span.end, span.source});
                if (introduction) {
                    span.page = std::move(introduction);
                    page.spans.push_back(std::move(span));
                } else ++page.missing_snapshots;
            } else {
                ++page.missing_snapshots;
                page.collection_ranges_complete = false;
            }
        }
    } catch (...) { ++page.missing_snapshots; }
    { NativeHistoryLegendsScope scope(page); g_real_native_history_collection(screen, source, age, collection); }
    try { finish_native_history_legends_page(std::move(page)); } catch (...) {}
}

static void record_native_history_legends_span(const NativeString *source,
        size_t begin, std::string_view added, bool direct) {
    auto captured = std::move(pending_native_history());
    pending_native_history() = {};
    auto *page = native_history_legends_state().active;
    if (!page || !page->source_started || page->local_source != direct ||
        begin > kNativeHistorySourceLimit || added.size() > kNativeHistorySourceLimit - begin || added.empty()) {
        if (page) { page->valid = false; page->collection_ranges_complete = false; }
        return;
    }
    // Range identity survives a missing semantic snapshot. The final page
    // verifies the actual copied bytes before either native ABI may bind it.
    if (!direct && page->collection_ranges.size() < kNativeHistoryCaptureDocuments)
        page->collection_ranges.push_back({begin, begin + added.size(), std::string(added)});
    else if (!direct) page->collection_ranges_complete = false;
    if (!page->valid) return;
    if (page->spans.size() >= kNativeHistoryCaptureDocuments || added.size() > kNativeHistoryStringLimit ||
        captured.source != source || !captured.event || captured.generation != page->generation ||
        captured.native_source != added) { ++page->missing_snapshots; return; }
    NativeHistoryLegendsSpan span;
    span.begin = begin;
    span.end = begin + added.size();
    span.source.assign(added);
    span.event = std::move(*captured.event);
    page->spans.push_back(std::move(span));
}

static void append_native_history_legends_span(const NativeString *source, size_t begin,
        bool direct) {
    std::string_view complete;
    if (!native_string_view(source, &complete, kNativeHistorySourceLimit) || begin >= complete.size()) {
        record_native_history_legends_span(source, SIZE_MAX, {}, direct);
        return;
    }
    record_native_history_legends_span(source, begin, complete.substr(begin), direct);
}

// An inlined native concat has no call instruction to hook. Observe the
// destination offset at getSentence and feed the same range validator.
static void capture_native_history_inline_collection_sentence(void *event, NativeString *source,
        void *context, bool translated, bool glyphs_only) {
    NativeHistoryCallbackScope callback;
    auto *page = native_history_legends_state().active;
    size_t begin = SIZE_MAX;
    try {
        if (page && !page->local_source && page->segment_source)
            finish_native_history_page_segment(page->source, 3);
        std::string_view prefix;
        if (page && !page->local_source && page->valid &&
            native_string_view(page->source, &prefix, kNativeHistorySourceLimit)) begin = prefix.size();
    } catch (...) {}
    capture_native_history_sentence_range(event, source, context, translated, glyphs_only, 0);
    try {
        std::string_view text;
        if (native_string_view(source, &text, kNativeHistoryStringLimit))
            record_native_history_legends_span(source, begin, text, false);
        else record_native_history_legends_span(source, SIZE_MAX, {}, false);
    } catch (...) { if (page) ++page->missing_snapshots; }
}

static void capture_native_history_legends_sentence(void *event, NativeString *source,
        void *context, bool translated, bool glyphs_only) {
    NativeHistoryCallbackScope callback;
    const auto *page = native_history_legends_state().active;
    if (!page || !page->valid) {
        native_history_call_formatter(event, source, context, translated, glyphs_only);
        return;
    }
    size_t begin = SIZE_MAX;
    try {
#ifdef _WIN32
        auto *active = native_history_legends_state().active;
        if (active->transfer_required) {
            if (source == active->source || active->local_transfer ||
                    (active->local_object && active->local_object != source))
                active->local_ambiguous = true;
            else active->local_object = source;
        }
#endif
        std::string_view prefix;
        if (native_string_view(source, &prefix, kNativeHistorySourceLimit)) begin = prefix.size();
    } catch (...) {}
    capture_native_history_sentence_range(event, source, context, translated, glyphs_only, begin);
    try { append_native_history_legends_span(source, begin, true); }
    catch (...) { ++native_history_legends_state().active->missing_snapshots; }
}
static void capture_native_history_legends_sentence_context(void *event, NativeString *source, void *context) {
    capture_native_history_legends_sentence(event, source, context, true, false);
}
static void capture_native_history_inline_collection_sentence_context(void *event, NativeString *source, void *context) {
    capture_native_history_inline_collection_sentence(event, source, context, true, false);
}

#ifdef _WIN32
static NativeString *capture_native_history_local_transfer(NativeString *destination,
        const char *data, size_t length) {
    NativeHistoryCallbackScope callback;
    auto *page = native_history_legends_state().active;
    bool observed = false;
    std::string transferred;
    try {
        std::string_view local, prefix;
        observed = page && page->local_source && page->source_started &&
            !page->local_ambiguous && !page->local_transfer && page->source == destination &&
            page->local_object && page->local_object != destination &&
            native_string_view(page->local_object, &local, kNativeHistorySourceLimit) &&
            local.data() == data && local.size() == length &&
            native_string_view(destination, &prefix, kNativeHistorySourceLimit) &&
            prefix == page->output_prefix && length <= kNativeHistorySourceLimit - prefix.size();
        if (observed) transferred.assign(local);
        else if (page && page->local_source) page->local_ambiguous = true;
    } catch (...) {
        observed = false;
        if (page && page->local_source) page->local_ambiguous = true;
    }
    // This standard three-argument native CALL runs exactly once. The
    // transaction cannot be installed without its independently bound callee.
    auto *result = g_real_native_history_counted_transfer(destination, data, length);
    try {
        std::string_view after;
        if (observed && native_history_legends_state().active == page &&
                native_string_view(destination, &after, kNativeHistorySourceLimit) &&
                after.size() == page->output_prefix.size() + transferred.size() &&
                after.substr(0, page->output_prefix.size()) == page->output_prefix &&
                after.substr(page->output_prefix.size()) == transferred) {
            page->transferred_source = std::move(transferred);
            page->local_transfer = true;
        } else if (page && page->local_source) page->local_ambiguous = true;
    } catch (...) { if (page && page->local_source) page->local_ambiguous = true; }
    return result;
}
#endif

static void capture_native_history_legends_append(NativeHistoryRichBox *box,
        const NativeString *source) {
    NativeHistoryCallbackScope callback;
    NativeHistoryLegendsPage page;
    size_t before = SIZE_MAX;
    try {
        { std::lock_guard<std::mutex> lock(g_native_history_legends_mutex);
          g_native_history_legends_ready.erase(reinterpret_cast<uintptr_t>(box));
          g_native_history_legends_ownership.erase(reinterpret_cast<uintptr_t>(box)); }
        // A real append replaces this page's source generation. Invalidate
        // earlier ownership before parsing, including when source/control
        // verification below fails and no replacement region can be proven.
        remember_native_history_region(reinterpret_cast<uintptr_t>(box), {});
        auto &state = native_history_legends_state();
        page = std::move(state.completed);
        state.completed = {};
        state.parsed = {};
        state.parsed_box = nullptr;
        std::string_view text;
        if (page.source_complete && page.source == source &&
            page.generation == g_native_history_capture_generation.load(std::memory_order_acquire) &&
            native_string_view(source, &text, kNativeHistorySourceLimit) && text == page.complete_source)
            before = native_history_word_count(box);
    } catch (...) {}
    g_real_native_history_append(box, source);
    if (before == SIZE_MAX) return;
    auto &state = native_history_legends_state();
    state.parsed = std::move(page);
    state.parsed_box = box;
    state.parsed_begin = before;
}

#include "native_history_page_segments.inc"
#include "native_history_page_kill_hooks.inc"
#include "native_history_page_hooks.inc"
#include "native_history_page_hook_abi.inc"

static bool bind_native_history_legends_page(NativeHistoryLegendsPage page,
        NativeHistoryRichBox *box, size_t parsed_begin, bool *region_bound = nullptr) {
    if (region_bound) *region_bound = false;
    try {
        NativeHistoryRichBox view{};
        if (!page.source_complete || !native_history_markup_box(reinterpret_cast<uintptr_t>(box), view)) return false;
        const size_t count = view.words.size();
        if (parsed_begin > count) return false;
        // The native parser flushes at [R]/[B]/[P] and emits an empty
        // control word with flags 1/2/4. Lists use [R] for every record;
        // ordinary events use [B]. Compare only native control boundaries.
        std::vector<size_t> source_breaks, word_breaks;
        std::vector<uint32_t> source_controls;
        for (size_t at = 0; at < page.complete_source.size();) {
            if (page.complete_source[at] != '[') { ++at; continue; }
            if (at + 1 < page.complete_source.size() && page.complete_source[at + 1] == '[') {
                at += 2; continue;
            }
            const size_t end = page.complete_source.find(']', at + 1);
            if (end == std::string::npos) return false;
            const auto control = page.complete_source.substr(at, end + 1 - at);
            const uint32_t flag = control == "[R]" ? 1 : control == "[B]" ? 2 : control == "[P]" ? 4 : 0;
            if (flag) { source_breaks.push_back(at); source_controls.push_back(flag); }
            at = end + 1;
        }
        for (size_t i = parsed_begin; i < count; ++i) {
            uint32_t flags = 0;
            if (!native_history_markup_read(native_history_markup_element(view.words, i),
                    {0x30, "markup_text_wordst", "flags"}, flags)) return false;
            if (flags & 7) {
                if (word_breaks.size() >= source_controls.size() ||
                    (flags & 7) != source_controls[word_breaks.size()]) return false;
                word_breaks.push_back(i);
            }
        }
        if (source_breaks.size() != word_breaks.size()) return false;
        std::vector<NativeHistoryToken> history_region;
        const auto append_region = [&](size_t first, size_t last) {
            if (first > last || last > count) return false;
            for (size_t index = first; index < last; ++index) {
                NativeHistoryToken token;
                token.identity = native_history_markup_text(native_history_markup_element(view.words, index));
                if (!token.identity || !native_history_copy_string(token.identity, token.source) ||
                        token.source.size() > 262144) return false;
                history_region.push_back(std::move(token));
            }
            return true;
        };
        if (page.local_source) {
            // history::describe appends its event body after the caller's
            // existing prefix. The native [B] parser boundary retains the
            // biography and labels before that prefix as ordinary content.
            const auto begin = std::lower_bound(source_breaks.begin(), source_breaks.end(),
                page.prefix_size);
            if (page.prefix_size &&
                (begin == source_breaks.begin() || *(begin - 1) + 3 != page.prefix_size)) return false;
            const size_t first = begin == source_breaks.begin() ? parsed_begin :
                word_breaks[static_cast<size_t>(begin - source_breaks.begin()) - 1] + 1;
            if (!append_region(first, count)) return false;
        } else {
            // Collection producers can insert non-event headings. Own only
            // the actual getSentence output spans observed at their concat.
            for (const auto &range : page.collection_ranges) {
                const auto begin = std::lower_bound(source_breaks.begin(), source_breaks.end(), range.begin);
                const auto end = std::lower_bound(source_breaks.begin(), source_breaks.end(), range.end);
                if (end == source_breaks.end() || *end != range.end ||
                    (range.begin && (begin == source_breaks.begin() || *(begin - 1) + 3 != range.begin))) {
                    page.collection_ranges_complete = false;
                    continue;
                }
                const size_t first = begin == source_breaks.begin() ? parsed_begin :
                    word_breaks[static_cast<size_t>(begin - source_breaks.begin()) - 1] + 1;
                const size_t last = word_breaks[static_cast<size_t>(end - source_breaks.begin())];
                if (!append_region(first, last)) return false;
            }
        }
        NativeHistoryLegendsOwnership ownership;
        ownership.tokens = history_region.size();
        if (!history_region.empty()) {
            ownership.first = history_region.front().identity;
            ownership.last = history_region.back().identity;
        }
        if (!remember_native_history_region(reinterpret_cast<uintptr_t>(box),
                std::move(history_region))) return false;
        if (!page.local_source && !page.collection_ranges_complete) return false;
        if (!native_history_legends_fingerprint(reinterpret_cast<uintptr_t>(box),
                ownership.fingerprint)) return false;
        {
            std::lock_guard<std::mutex> lock(g_native_history_legends_mutex);
            if (g_native_history_legends_ownership.size() >= 4096)
                g_native_history_legends_ownership.clear();
            g_native_history_legends_ownership[reinterpret_cast<uintptr_t>(box)] = std::move(ownership);
        }
        if (region_bound) *region_bound = true;
        if (!page.valid) return false;
        std::vector<std::shared_ptr<NativeHistoryDocument>> documents;
        for (auto &span : page.spans) {
            const auto begin = std::lower_bound(source_breaks.begin(), source_breaks.end(), span.begin);
            const auto end = std::lower_bound(source_breaks.begin(), source_breaks.end(), span.end);
            if (end == source_breaks.end() || *end != span.end ||
                (span.begin && (begin == source_breaks.begin() || *(begin - 1) + 3 != span.begin))) {
                ++page.missing_snapshots;
                continue;
            }
            const size_t first = begin == source_breaks.begin() ? parsed_begin :
                word_breaks[static_cast<size_t>(begin - source_breaks.begin()) - 1] + 1;
            const size_t last = word_breaks[static_cast<size_t>(end - source_breaks.begin())];
            if (last <= first) continue;
            auto document = std::make_shared<NativeHistoryDocument>();
            if (!copy_native_history_tokens(box, first, document->tokens, last - first)) {
                ++page.missing_snapshots;
                continue;
            }
            document->owner = reinterpret_cast<uintptr_t>(box);
            document->event = std::move(span.event);
            document->page = std::move(span.page);
            document->native_source = std::move(span.source);
            documents.push_back(std::move(document));
        }
        NativeHistoryLegendsReady ready;
        if (!remember_native_history_documents(documents)) return false;
        if (page.missing_snapshots)
            log_line("WARN", "Native Legends producer snapshots missing: " +
                std::to_string(page.missing_snapshots) + "; retained documents=" +
                std::to_string(documents.size()));
        for (auto &document : documents) {
            ready.sequences.push_back(document->sequence);
        }
        const uintptr_t owner = reinterpret_cast<uintptr_t>(box);
        if (!native_history_legends_fingerprint(owner, ready)) return false;
        std::lock_guard<std::mutex> lock(g_native_history_legends_mutex);
        if (g_native_history_legends_ready.size() >= 4096) g_native_history_legends_ready.clear();
        g_native_history_legends_ready[owner] = ready;
        return true;
    } catch (...) {}
    return false;
}

static void capture_native_history_legends_links(void *screen, NativeHistoryRichBox *box) {
    NativeHistoryCallbackScope callback;
    g_real_native_history_links(screen, box);
    try {
        auto &state = native_history_legends_state();
        if (state.parsed_box != box) return;
        auto page = std::move(state.parsed);
        state.parsed = {};
        state.parsed_box = nullptr;
        bool region_bound = false;
        if (!bind_native_history_legends_page(std::move(page), box, state.parsed_begin, &region_bound))
            log_line("WARN", region_bound
                ? "Native Legends capture incomplete: native event region retained without complete snapshots"
                : "Native Legends capture rejected: native paragraph ownership did not agree");
    } catch (...) {}
}

#ifdef _WIN32
struct NativeHistoryRecoveryFocus {
    int32_t type;
    native_history_abi::FieldOffset ids, context;
};
static constexpr NativeHistoryRecoveryFocus native_history_recovery_focuses[]{
    {1, {0x1b0, "viewscreen_legendsst", "histfigs"}, {0x20, "history_event_context", "histfig_id"}},
    {2, {0x1c8, "viewscreen_legendsst", "sites"}, {0x28, "history_event_context", "site_id"}},
    {3, {0x1e0, "viewscreen_legendsst", "artifacts"}, {0x18, "history_event_context", "artifact_id"}},
    {4, {0x1f8, "viewscreen_legendsst", "codices"}, {0x18, "history_event_context", "artifact_id"}},
    {5, {0x210, "viewscreen_legendsst", "regions"}, {0x2c, "history_event_context", "region_id"}},
    {12, {0x228, "viewscreen_legendsst", "layers"}, {0x30, "history_event_context", "layer_id"}},
    {6, {0x240, "viewscreen_legendsst", "entities"}, {0x1c, "history_event_context", "entity_id"}},
    {8, {0x258, "viewscreen_legendsst", "structure_sites"}, {0x28, "history_event_context", "site_id"}},
    {13, {0x288, "viewscreen_legendsst", "entity_population"}, {0x34, "history_event_context", "entity_population_id"}}
};
static constexpr NativeHistoryRecoveryFocus native_history_recovery_structure{
    8, {0x270, "viewscreen_legendsst", "structures_indices"},
    {0x38, "history_event_context", "abstract_building_id"}};

static bool native_history_recovery_focus_ready(const NativeHistoryRecoveryFocus &focus,
        size_t context_size) {
    constexpr size_t vector_size = sizeof(NativeBorrowedVector<int32_t>);
    if (!focus.ids.contains(0, vector_size, vector_size) ||
            !focus.context.contains(0, sizeof(int32_t), sizeof(int32_t))) return false;
    (void)focus.ids.runtime();
    const auto offset = focus.context.runtime();
    return offset <= context_size && sizeof(int32_t) <= context_size - offset;
}

// These modes authorize our own typed scratch construction. They do not
// assert that a private page constructor or any of its CALLs was located.
static uint32_t native_history_legends_named_recovery_modes() {
    std::vector<std::max_align_t> context;
    if (!native_history_markup_scratch_ready() || !initialize_native_history_context(context)) return 0;
    const size_t bytes = context.size() * sizeof(std::max_align_t);
    uint32_t modes = 0;
    for (const auto &focus : native_history_recovery_focuses) {
        try {
            if (native_history_recovery_focus_ready(focus, bytes) &&
                    (focus.type != 8 || native_history_recovery_focus_ready(native_history_recovery_structure, bytes)))
                modes |= uint32_t{1} << focus.type;
        } catch (...) {}
    }
    return modes;
}
#endif

static bool native_history_legends_recovery_context(const NativeHistoryLegendsTab &tab,
        std::vector<std::max_align_t> &context) {
#ifdef _WIN32
    const auto focus = std::find_if(std::begin(native_history_recovery_focuses),
        std::end(native_history_recovery_focuses), [&](const auto &entry) { return entry.type == tab.type; });
    if (focus == std::end(native_history_recovery_focuses) || tab.index < 0 ||
            !initialize_native_history_context(context)) return false;
    const size_t bytes = context.size() * sizeof(std::max_align_t);
    const auto copy_id = [&](const NativeHistoryRecoveryFocus &entry) {
        if (!native_history_recovery_focus_ready(entry, bytes)) return false;
        NativeBorrowedVector<int32_t> ids{};
        if (!native_history_copy(entry.ids.address(tab.screen, 0, sizeof(ids), sizeof(ids)), ids) ||
                !ids.valid(1048576) || static_cast<size_t>(tab.index) >= ids.size()) return false;
        int32_t id = -1;
        if (!native_history_copy(reinterpret_cast<uintptr_t>(ids.begin) +
                sizeof(int32_t) * static_cast<size_t>(tab.index), id) || id < 0) return false;
        const auto destination = entry.context.address(reinterpret_cast<uintptr_t>(context.data()),
            0, sizeof(id), sizeof(id));
        if (!destination) return false;
        std::memcpy(reinterpret_cast<void *>(destination), &id, sizeof(id));
        return true;
    };
    return copy_id(*focus) && (tab.type != 8 || copy_id(native_history_recovery_structure));
#else
    // Each entry is the screen ID vector and context field used immediately
    // before the verified history::describe call in that tab's constructor.
    struct Focus { int32_t type; size_t vector, field; };
    static constexpr Focus focuses[] = {
        {1, 0x1b0, 0x20}, // d4be95: historical figure
        {2, 0x1c8, 0x28}, // d4c846: site
        {3, 0x1e0, 0x18}, // d4ce6b: artifact
        {4, 0x1f8, 0x18}, // d4d48b: artifact
        {5, 0x210, 0x2c}, // d4d891: region
        {12, 0x228, 0x30}, // d4dd1b: underground region
        {6, 0x240, 0x1c}, // d4e149: entity
        {8, 0x258, 0x28}, // d4e717: building's site
        {13, 0x288, 0x34}, // d4ea55: entity population
    };
    const auto focus = std::find_if(std::begin(focuses), std::end(focuses),
        [&](const auto &entry) { return entry.type == tab.type; });
    if (focus == std::end(focuses) || tab.index < 0) return false;
    const auto copy_id = [&](size_t vector, size_t field) {
        NativeBorrowedVector<int32_t> ids;
        int32_t id = -1;
        if (!native_history_copy(native_history_object_field(tab.screen, "viewscreen_legendsst", vector), ids) || !ids.valid(1048576) ||
            static_cast<size_t>(tab.index) >= ids.size() ||
            !native_history_copy(reinterpret_cast<uintptr_t>(ids.begin) +
                sizeof(int32_t) * static_cast<size_t>(tab.index), id) || id < 0) return false;
        const auto address = native_history_object_field(reinterpret_cast<uintptr_t>(context.data()),
            "history_event_context", field, sizeof(id));
        if (!address) return false;
        std::memcpy(reinterpret_cast<void *>(address), &id, sizeof(id));
        return true;
    };
    // The context consists of scalar values and borrowed pointers.
    if (!initialize_native_history_context(context)) return false;
    return copy_id(focus->vector, focus->field) &&
        (tab.type != 8 || copy_id(0x270, 0x38));
#endif
}

static bool same_native_history_legends_words(const NativeHistoryRichBox &generated,
        const NativeHistoryRichBox &existing) {
    NativeHistoryRichBox left{}, right{};
    if (!native_history_markup_box(reinterpret_cast<uintptr_t>(&generated), left) ||
            !native_history_markup_box(reinterpret_cast<uintptr_t>(&existing), right) ||
            left.words.size() != right.words.size() || left.links.size() != right.links.size()) return false;
    const size_t count = left.words.size();
    for (size_t i = 0; i < left.links.size(); ++i) {
        NativeHistoryRichLink a{}, b{};
        if (!native_history_markup_link(native_history_markup_element(left.links, i), a) ||
                !native_history_markup_link(native_history_markup_element(right.links, i), b) ||
                a.type != b.type || a.id != b.id || a.subid != b.subid) return false;
    }
    for (size_t i = 0; i < count; ++i) {
        NativeHistoryMarkupWord a, b;
        if (!native_history_markup_word(native_history_markup_element(left.words, i), a) ||
                !native_history_markup_word(native_history_markup_element(right.words, i), b) ||
                a.source != b.source || a.red != b.red || a.green != b.green || a.blue != b.blue ||
                a.flags != b.flags || a.link_index != b.link_index) return false;
    }
    // Word+23 is uninitialized padding (constructor 78bac0), not alignment.
    // Layout changes only x/y/max_y. Content, control flags, and typed links
    // above are the complete parser output; no English meaning is inferred.
    return true;
}

#include "native_history_collection_recovery.inc"

static void recover_native_history_legends(NativeHistoryRichBox *box) {
    const auto tab = native_history_legends_tab();
#ifdef _WIN32
    // This is an independently admitted scratch operation, not a claim that
    // the retained tab's private producer CALLs have been found. Its named
    // focus and full regenerated token/link equality are still mandatory.
    if (g_native_history_legends_grouped && (!g_native_history_legends_recovery_ready ||
            tab.type < 0 || tab.type >= 32 ||
            !(g_native_history_legends_recovery_modes & (uint32_t{1} << tab.type)))) return;
#endif
    const uintptr_t owner = reinterpret_cast<uintptr_t>(box);
    if (!tab.tab || native_history_legends_tab_box(tab.tab) != owner ||
        (native_history_legends_ready() && native_history_legends_ownership_confirmed())) return;
    NativeHistoryLegendsReady fingerprint;
    if (!native_history_legends_fingerprint(owner, fingerprint)) return;
    {
        std::lock_guard<std::mutex> lock(g_native_history_legends_mutex);
        const auto previous = g_native_history_legends_attempted.find(owner);
        if (previous != g_native_history_legends_attempted.end() &&
            same_native_history_legends_fingerprint(previous->second, fingerprint)) return;
        if (g_native_history_legends_attempted.size() >= 4096)
            g_native_history_legends_attempted.clear();
        g_native_history_legends_attempted[owner] = fingerprint;
    }
    const auto report = [&](const char *reason, bool success = false, size_t events = 0) {
        log_line(success ? "INFO" : "WARN", "Native Legends recovery: tab=" +
            std::to_string(tab.type) + " index=" + std::to_string(tab.index) +
            " words=" + std::to_string(native_history_word_count(box)) +
            " events=" + std::to_string(events) + " " + reason);
    };
    if (tab.type == 9) {
        if (!recover_native_history_collection_page(tab, box))
            report("no matching native age/collection body");
        return;
    }
    std::vector<std::max_align_t> context;
    if (!g_real_native_history_describe || !g_real_native_history_append ||
        !g_real_native_history_links || !native_history_legends_recovery_context(tab, context)) {
        report("no verified native focus context");
        return;
    }
    NativeHistoryScratch scratch;
    const uintptr_t history = native_history_global(0x24f9cb8);
    if (!history) { report("native history owner unavailable"); return; }
    capture_native_history_describe(reinterpret_cast<void *>(history),
        context.data(), false, &scratch.source);
    auto &state = native_history_legends_state();
    auto page = std::move(state.completed);
    state.completed = {};
    if (!page.source_complete || page.source != &scratch.source) {
        report("native event capture incomplete");
        return;
    }
    g_real_native_history_append(&scratch.box, &scratch.source);
    g_real_native_history_links(reinterpret_cast<void *>(tab.screen), &scratch.box);
    if (!same_native_history_legends_words(scratch.box, *box)) {
        report("regenerated native page does not match retained tokens");
        return;
    }
    const auto current = native_history_legends_tab();
    NativeHistoryLegendsReady after;
    if (current.screen != tab.screen || current.tab != tab.tab || current.type != tab.type ||
            current.index != tab.index || native_history_legends_tab_box(current.tab) != owner ||
            !native_history_legends_fingerprint(owner, after) ||
            !same_native_history_legends_fingerprint(fingerprint, after)) {
        report("selected native page changed during reconstruction");
        return;
    }
    const size_t events = page.spans.size();
    bool region_bound = false;
    if (!bind_native_history_legends_page(std::move(page), box, 0, &region_bound)) {
        report(region_bound ? "native event region retained without complete snapshots" :
            "native paragraph ownership did not agree", false, events);
        return;
    }
    report("retained page bound to native events", true, events);
}
static void clear_native_history_legends() {
    pending_native_history_war_selection().reset();
    std::lock_guard<std::mutex> lock(g_native_history_legends_mutex);
    g_native_history_legends_ready.clear();
    g_native_history_legends_ownership.clear();
    g_native_history_legends_attempted.clear();
    g_real_native_history_describe = nullptr;
    g_real_native_history_collection = nullptr;
    g_real_native_history_links = nullptr;
#ifdef _WIN32
    g_real_native_history_counted_transfer = nullptr;
    g_native_history_legends_producer_modes = 0;
    g_native_history_legends_recovery_modes = 0;
    g_native_history_legends_recovery_ready = false;
    g_native_history_legends_grouped = false;
#endif
}
