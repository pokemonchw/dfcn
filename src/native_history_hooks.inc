// Borrow live arguments to verified native calls and the current screen chain.
// All event data published to the overlay is copied into core objects.
static uintptr_t native_viewscreen_field(uintptr_t object,
        native_history_abi::FieldOffset field, size_t width) noexcept {
    try { return field.address(object, 0, width, width); }
    catch (...) { return 0; }
}

static uintptr_t native_viewscreen_page_owner(uintptr_t screen) {
    using ForeignScreenPredicate = bool (*)(void *);
#ifdef _WIN32
    const auto module = GetModuleHandleW(L"dfhack.dll");
    const auto foreign = module ? reinterpret_cast<ForeignScreenPredicate>(GetProcAddress(module,
        "?is_instance@dfhack_viewscreen@DFHack@@SA_NPEAUviewscreen@df@@@Z")) : nullptr;
#else
    const auto foreign = reinterpret_cast<ForeignScreenPredicate>(dlsym(RTLD_DEFAULT,
        "_ZN6DFHack17dfhack_viewscreen11is_instanceEPN2df10viewscreenE"));
#endif
    if (!foreign) return screen;
    // DFHack owns an independent output layer. Its viewscreens do not replace
    // the native page's semantic context; ordinary native child screens do.
    // Ask DFHack for ownership rather than inferring it from a vtable name.
    std::array<uintptr_t, 64> visited{};
    for (size_t depth = 0; depth < visited.size(); ++depth) {
        if (!screen ||
            std::find(visited.begin(), visited.begin() + depth, screen) != visited.begin() + depth)
            return 0;
        visited[depth] = screen;
        if (!foreign(reinterpret_cast<void *>(screen))) return screen;
        uintptr_t parent = 0;
        if (!native_history_copy(native_viewscreen_field(screen,
                {0x10, "viewscreen", "parent"}, sizeof(parent)), parent)) return 0;
        screen = parent;
    }
    return 0;
}

static uintptr_t native_current_viewscreen() {
    const uintptr_t base = native_history_profile_base();
    if (!base) return 0;
    const uintptr_t view = native_reference_address(base, native_history_layout::gview_rva);
    uintptr_t screen = native_viewscreen_field(view, {8, "interfacest", "view"}, 1);
    if (!screen) return 0;
    std::array<uintptr_t, 64> visited{};
    for (size_t depth = 0; depth < visited.size(); ++depth) {
        if (!screen ||
            std::find(visited.begin(), visited.begin() + depth, screen) != visited.begin() + depth)
            return 0;
        visited[depth] = screen;
        uintptr_t child = 0;
        if (!native_history_copy(native_viewscreen_field(screen,
                {8, "viewscreen", "child"}, sizeof(child)), child)) return 0;
        if (child) { screen = child; continue; }
        return native_viewscreen_page_owner(screen);
    }
    return 0;
}

static std::optional<std::string> native_main_menu_copyright() {
    const uintptr_t screen = native_current_viewscreen();
    if (!screen || !native_history_object_is(screen, "viewscreen_titlest"))
        return std::nullopt;
    std::string source;
    // Use the current title object's owned string and the existing host ABI
    // field binding. FPS-only draws need not redraw this static caption.
    if (!native_history_copy_string(native_history_object_field(screen,
            "viewscreen_titlest", 0x8b0, 32), source)) return std::nullopt;
    return source;
}

static bool native_fortress_gameplay_screen() {
    const uintptr_t screen = native_current_viewscreen();
    return screen && native_history_object_is(screen, "viewscreen_dwarfmodest");
}

static bool native_gameplay_map_screen(bool include_world) {
    const uintptr_t screen = native_current_viewscreen();
    if (!screen) return false;
    // Classic mode leaves graphicst's texture viewport geometry stale;
    // the source-defined vtable identity works for either renderer.
    // The fortress world map is a separate child viewscreen. Text
    // ownership must protect its terrain too, while local HUD callers
    // keep their narrower gameplay-screen scope.
    return native_history_object_is(screen, "viewscreen_dwarfmodest") ||
        native_history_object_is(screen, "viewscreen_dungeonmodest") ||
        (include_world && native_history_object_is(screen, "viewscreen_worldst"));
}

static bool native_world_map_screen() {
    const uintptr_t screen = native_current_viewscreen();
    return screen && native_history_object_is(screen, "viewscreen_worldst");
}

static std::optional<std::vector<std::string>> native_world_site_rumor_lines(bool expanded_only) {
    const uintptr_t screen = native_current_viewscreen();
    if (!screen || !native_history_object_is(screen, "viewscreen_worldst"))
        return std::nullopt;
    const uintptr_t focus_field = native_history_object_member(screen,
        "viewscreen_worldst", "focused_on_last_hover_rumor", sizeof(bool));
    const uintptr_t lines_field = native_history_object_member(screen,
        "viewscreen_worldst", "rumor_text.text", sizeof(NativeBorrowedVector<uintptr_t>));
    bool focused = false;
    NativeBorrowedVector<uintptr_t> native_lines;
    if (!native_history_copy(focus_field, focused) || (expanded_only && !focused) ||
            !native_history_copy(lines_field, native_lines) ||
            !native_lines.valid(16384) || !native_lines.size()) return std::nullopt;
    std::vector<uintptr_t> pointers(native_lines.size());
    if (!native_history_copy_bytes(reinterpret_cast<uintptr_t>(native_lines.begin),
            pointers.data(), pointers.size() * sizeof(uintptr_t))) return std::nullopt;
    std::vector<std::string> lines;
    lines.reserve(pointers.size());
    size_t bytes = 0;
    for (const uintptr_t address : pointers) {
        std::string line;
        // The guarded reader uses the current host's std::string ABI. The
        // retained wrap remains available even when no new paragraph is built.
        if (!native_history_copy_string(address, line) || line.size() > 1024 ||
                line.size() > 1048576 - bytes ||
                line.find_first_of(std::string_view("\0\r\n", 3)) != std::string::npos)
            return std::nullopt;
        bytes += line.size();
        lines.push_back(std::move(line));
    }
    NativeBorrowedVector<uintptr_t> current_lines;
    bool current_focus = false;
    if (!bytes || native_current_viewscreen() != screen ||
            !native_history_copy(focus_field, current_focus) || current_focus != focused ||
            !native_history_copy(lines_field, current_lines) ||
            current_lines.begin != native_lines.begin || current_lines.end != native_lines.end ||
            current_lines.capacity != native_lines.capacity) return std::nullopt;
    return lines;
}

static std::vector<SDL_Rect> native_text_input_regions(const graphicst &gps,
        const std::vector<std::string> &rows, const unsigned char *screen_override) {
    std::vector<SDL_Rect> regions;
    if (!gps.screen || gps.dimx <= 0 || gps.dimx > 1000 ||
            gps.dimy <= 0 || gps.dimy > 1000 ||
            rows.size() != static_cast<size_t>(gps.dimy)) return regions;
    std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
    const uint64_t epoch = g_native_drawn_text_epoch;
    if (!epoch) return regions;
    const auto has_input = [](const auto &draws) {
        return std::any_of(draws.begin(), draws.end(),
            [](const auto &draw) { return draw.editable_text; });
    };
    if (!has_input(g_native_drawn_text_rows) && !has_input(g_native_drawn_top_text_rows))
        return regions;
    std::vector<uint8_t> input(static_cast<size_t>(gps.dimx) * gps.dimy, 0);
    // The real editable owner marks addst while it renders. Only its current
    // visible glyphs are protected; later labels and popup writes take over
    // even when they happen to contain the same bytes as an input string.
    const auto apply = [&](const auto &draws) {
        for (const auto &draw : draws) {
            if (draw.draw_epoch != epoch || draw.draw_dimx != gps.dimx ||
                    draw.draw_dimy != gps.dimy || draw.y < 0 || draw.y >= gps.dimy ||
                    (screen_override && draw.draw_grid != screen_override)) continue;
            const int left = std::max(0, draw.x);
            const int right = static_cast<int>(std::min<int64_t>(gps.dimx,
                static_cast<int64_t>(draw.x) + draw.source.size()));
            for (int x = left; x < right; ++x) {
                if (draw.draw_clip && (x < draw.draw_clip->x ||
                        x >= draw.draw_clip->x + draw.draw_clip->w ||
                        draw.y < draw.draw_clip->y ||
                        draw.y >= draw.draw_clip->y + draw.draw_clip->h)) continue;
                const size_t tile = static_cast<size_t>(x) * gps.dimy + draw.y;
                if (!screen_override && draw.draw_grid !=
                        (native_ui_top_layer_at(gps, tile) ? gps.screen_top : gps.screen)) continue;
                const char source = draw.source[static_cast<size_t>(x - draw.x)];
                if (rows[draw.y][x] != source) continue;
                input[tile] = draw.editable_text;
                if (!draw.editable_text) continue;
                // Large native text can paint two grid rows from one addst.
                // Reserve its other half too, before words on that row can
                // become a translated caption covering the whole input.
                // Flags alone can survive an ordinary later draw: require
                // the same current bytes, layer and complementary half.
                const auto *flags = draw.top_layer
                    ? gps.screentexpos_top_flag : gps.screentexpos_flag;
                constexpr uint32_t upper = 1u << 3, lower_half = 1u << 4;
                const uint32_t half = flags ? flags[tile] & (upper | lower_half) : 0;
                const int mate = half == upper ? draw.y + 1
                    : half == lower_half ? draw.y - 1 : -1;
                if (mate < 0 || mate >= gps.dimy || !flags ||
                        rows[mate][x] != source ||
                        (draw.draw_clip && (mate < draw.draw_clip->y ||
                            mate >= draw.draw_clip->y + draw.draw_clip->h))) continue;
                const size_t mate_tile = static_cast<size_t>(x) * gps.dimy + mate;
                if ((!screen_override && draw.draw_grid !=
                        (native_ui_top_layer_at(gps, mate_tile) ? gps.screen_top : gps.screen)) ||
                        (flags[mate_tile] & (upper | lower_half)) !=
                            (half == upper ? lower_half : upper)) continue;
                input[mate_tile] = draw.editable_text;
            }
        }
    };
    apply(g_native_drawn_text_rows);
    apply(g_native_drawn_top_text_rows);
    for (int y = 0; y < gps.dimy; ++y) {
        int first = -1;
        for (int x = 0; x <= gps.dimx; ++x) {
            const bool owned = x < gps.dimx && input[static_cast<size_t>(x) * gps.dimy + y];
            if (owned && first < 0) first = x;
            else if (!owned && first >= 0) {
                regions.push_back({first, y, x - first, 1});
                first = -1;
            }
        }
    }
    return regions;
}

static bool native_arena_map_screen() {
    const uintptr_t base = native_history_profile_base();
    if (!base) return false;
    int32_t game_type = -1;
    if (!native_history_copy(native_reference_address(base,
            native_history_layout::gametype_rva), game_type)) return false;
    // game_type DWARF_ARENA and ADVENTURE_ARENA share the map hover.
    // A child picker or another viewscreen does not own arena map captions.
    return (game_type == 4 || game_type == 5) && native_gameplay_map_screen();
}

static bool native_history_worldgen_page() {
    const uintptr_t screen = native_current_viewscreen();
    return screen && native_history_object_is(screen, "viewscreen_new_regionst");
}

#ifdef _WIN32
static std::optional<std::pair<int, int>> g_native_history_chronicle_observed_rows;
#endif
static std::optional<std::pair<int, int>> native_history_chronicle_row_bounds() {
#ifdef _WIN32
    return g_native_history_chronicle_observed_rows;
#else
    // Native draw bindings own rows 10..19; installation verifies their code.
    return native_history_profile_base() ? std::optional(std::pair<int, int>{10, 20}) : std::nullopt;
#endif
}

struct NativeHistoryRichWord {
    NativeString text;
    uint8_t red, green, blue, padding;
    int32_t link_index, x, y;
    uint32_t flags;
};
struct NativeHistoryRichLink { int32_t type, id, subid; };
struct NativeHistoryRichBox {
    NativeBorrowedVector<NativeHistoryRichWord *> words;
    NativeBorrowedVector<NativeHistoryRichLink *> links;
    int32_t current_width, max_y;
    void *environment;
};
static_assert(sizeof(NativeHistoryRichWord) == 56);
static_assert(offsetof(NativeHistoryRichWord, red) == 0x20);
static_assert(offsetof(NativeHistoryRichWord, link_index) == 0x24);
static_assert(offsetof(NativeHistoryRichWord, x) == 0x28);
static_assert(offsetof(NativeHistoryRichWord, y) == 0x2c);
static_assert(offsetof(NativeHistoryRichWord, flags) == 0x30);
static_assert(sizeof(NativeHistoryRichLink) == 12);
static_assert(sizeof(NativeHistoryRichBox) == 64);
static_assert(offsetof(NativeHistoryRichBox, links) == 0x18);
static_assert(offsetof(NativeHistoryRichBox, current_width) == 0x30);

#include "native_history_markup_view.inc"

// Scratch uses the host's allocator; no native owning header is copied.
struct NativeHistoryScratch {
    NativeString source = native_empty_string();
    NativeHistoryRichBox box{};
    NativeHistoryScratch() {
        if (!native_history_markup_scratch_ready())
            throw std::runtime_error("Native retained markup construction layout unavailable");
        box.current_width = -1;
    }
    NativeHistoryScratch(const NativeHistoryScratch &) = delete;
    NativeHistoryScratch &operator=(const NativeHistoryScratch &) = delete;
    ~NativeHistoryScratch() {
#ifdef _WIN32
        const uintptr_t base = native_history_profile_base();
        reinterpret_cast<void (*)(void *)>(native_pe_address(base, 0xe37d0))(&box);
        const auto destroy_vector = reinterpret_cast<void (*)(void *)>(native_pe_address(base, 0x66b70));
        destroy_vector(&box.links);
        destroy_vector(&box.words);
        reinterpret_cast<void (*)(void *)>(native_pe_address(base, 0x6f850))(&source);
#else
        for (size_t i = 0; i < box.words.size(); ++i) delete box.words.begin[i];
        for (size_t i = 0; i < box.links.size(); ++i) delete box.links.begin[i];
        ::operator delete(box.words.begin);
        ::operator delete(box.links.begin);
#endif
    }
};

using NativeHistorySentenceFn = void (*)(void *, NativeString *, void *, bool, bool);
using NativeHistoryContextSentenceFn = void (*)(void *, NativeString *, void *);
static bool native_history_formatter_method_ready(std::string_view method) noexcept {
    // Direct event consumers share the discovered formatter ABI, not the
    // installation state of Chronicle or Legends page interception.
    try {
        const uintptr_t base = native_history_profile_base();
        if (!base || native_history_event_identity_base() != base) return false;
        if (method != "getSentence" && method != "getPhrase") return false;
        const auto contract = native_history_abi::history_method(method, method == "getPhrase" ? 0xd8 : 0xd0);
        if (contract.slot % sizeof(uintptr_t) || contract.slot > 65536) return false;
        return (contract.parameter_shape == native_history_abi::sentence_shape && contract.argument_count == 4) ||
            (contract.parameter_shape == native_history_abi::sentence_context_shape && contract.argument_count == 2);
    } catch (...) {
        return false;
    }
}
static bool native_history_formatter_ready() noexcept {
    return native_history_formatter_method_ready("getSentence") &&
        native_history_formatter_method_ready("getPhrase");
}
static bool native_history_formatter_context_only(std::string_view method) {
    const auto contract = native_history_abi::history_method(method, method == "getPhrase" ? 0xd8 : 0xd0);
    if (contract.parameter_shape == native_history_abi::sentence_context_shape && contract.argument_count == 2)
        return true;
    if (contract.parameter_shape == native_history_abi::sentence_shape && contract.argument_count == 4)
        return false;
    throw std::runtime_error("Unsupported discovered history formatter signature: " + std::string(method));
}
static const void *native_history_formatter_callback(std::string_view method,
        NativeHistorySentenceFn extended, NativeHistoryContextSentenceFn context_only) {
    return native_history_formatter_context_only(method)
        ? reinterpret_cast<const void *>(context_only) : reinterpret_cast<const void *>(extended);
}
static void native_history_call_formatter(void *event, NativeString *source, void *context,
        bool translated, bool glyphs_only, std::string_view method = "getSentence") {
    const auto contract = native_history_abi::history_method(method, method == "getPhrase" ? 0xd8 : 0xd0);
    const void *table = nullptr;
    void *original = nullptr;
    std::memcpy(&table, event, sizeof(table));
    std::memcpy(&original, static_cast<const unsigned char *>(table) + contract.slot, sizeof(original));
    if (native_history_formatter_context_only(method))
        reinterpret_cast<NativeHistoryContextSentenceFn>(original)(event, source, context);
    else reinterpret_cast<NativeHistorySentenceFn>(original)(event, source, context, translated, glyphs_only);
}
using NativeHistoryAppendFn = void (*)(NativeHistoryRichBox *, const NativeString *);
using NativeHistoryLayoutFn = void (*)(NativeHistoryRichBox *, int);
using NativeHistoryDrawFn = void (*)(graphicst *, const NativeString *, NativeJustification, int);
static NativeHistoryAppendFn g_real_native_history_append = nullptr;
static NativeHistoryLayoutFn g_real_native_history_layout = nullptr;
static NativeHistoryDrawFn g_real_native_history_draw = nullptr;
static NativeHistoryRichBox *g_native_history_box = nullptr;
#ifdef _WIN32
// Retained chronicle words are only owned while their native clear operation
// is observed. Other event formatters and UI pages do not depend on this.
static bool g_native_history_chronicle_lifetime_ready = false;
#endif
static bool g_native_history_legends_capture_ready = false;
static size_t g_native_history_sentence_slot = 0;
static std::atomic_uint g_active_native_history_callbacks{0};
static std::atomic_uint64_t g_native_history_capture_generation{1};
struct NativeHistoryCallbackScope {
    NativeHistoryCallbackScope() { g_active_native_history_callbacks.fetch_add(1, std::memory_order_acq_rel); }
    ~NativeHistoryCallbackScope() { g_active_native_history_callbacks.fetch_sub(1, std::memory_order_acq_rel); }
};
#include "native_history_item_hooks.inc"
#include "native_history_nested_hooks.inc"

struct NativeHistoryPending {
    const NativeString *source = nullptr;
    uint64_t generation = 0;
    std::optional<NativeHistoryEventData> event;
    std::string native_source;
};
static NativeHistoryPending &pending_native_history() {
    return reloadable_thread_state<NativeHistoryPending, struct HistoryPendingTag>();
}

static size_t native_history_word_count(const NativeHistoryRichBox *box) {
    NativeBorrowedVector<NativeHistoryRichWord *> words{};
    return native_history_markup_read(reinterpret_cast<uintptr_t>(box),
        {0, "markup_text_boxst", "word"}, words) && words.valid(kNativeHistoryCaptureTokens)
        ? words.size() : SIZE_MAX;
}

static bool copy_native_history_tokens(const NativeHistoryRichBox *box, size_t begin,
        std::vector<NativeHistoryToken> &tokens, size_t length = SIZE_MAX) {
    NativeHistoryRichBox view{};
    if (!native_history_markup_box(reinterpret_cast<uintptr_t>(box), view)) return false;
    const size_t count = view.words.size();
    if (begin > count) return false;
    if (length == SIZE_MAX) length = count - begin;
    if (length > count - begin || length > kNativeHistoryDocumentTokens) return false;
    tokens.clear();
    tokens.reserve(length);
    for (size_t i = begin; i < begin + length; ++i) {
        NativeHistoryMarkupWord word;
        if (!native_history_markup_word(native_history_markup_element(view.words, i), word)) return false;
        NativeHistoryToken token;
        token.identity = word.text;
        token.source = std::move(word.source);
        token.x = word.x;
        token.y = word.y;
        token.color = (int(word.red) << 16) | (int(word.green) << 8) | int(word.blue);
        if (word.link_index >= 0) {
            NativeHistoryRichLink link{};
            if (!native_history_markup_link(native_history_markup_element(view.links,
                    static_cast<size_t>(word.link_index)), link) || link.type < -1 || link.type > 11) return false;
            token.link_type = link.type;
            token.link_id = link.id;
            token.link_subid = link.subid;
        } else if (word.link_index != -1) return false;
        tokens.push_back(std::move(token));
    }
    return true;
}

static std::optional<NativeActivityDetailDocument> native_activity_detail_document(
        const std::unordered_set<uintptr_t> &visible_words) {
    // Read the resident/pet selectors' retained markup, including a popup
    // that was already open before capture. Visible word identities below
    // tie this shared box to the current draws instead of a guessed frame.
    if (visible_words.empty()) return std::nullopt;
    const uintptr_t base = native_history_profile_base();
#ifdef _WIN32
    // PE 53.16: creatures_interfacest+0x180. Both selectors clear this box
    // at 0x1427fb1/0x14287f9, then pass it in R9 to 0x26b800. The existing
    // edition binding maps the Steam global to Classic RVA 0x18a04d0.
    const uintptr_t address = native_history_markup_box_from_words(native_reference_address(base, 0x18a6500));
#else
    // ELF selectors pass this box to 0x15c1200 at 0x204e655/0x204f1e5.
    const uintptr_t address = base ? native_reference_address(base, 0x26fb2f8 - 0x400000) : 0;
#endif
    NativeHistoryRichBox box{};
    if (!address || !native_history_markup_box(address, box) ||
            !box.words.valid(16384) || box.words.size() == 0 ||
            box.current_width <= 0 || box.current_width > 1000) return std::nullopt;
    std::vector<uintptr_t> words(box.words.size());
    if (!native_history_copy_bytes(reinterpret_cast<uintptr_t>(box.words.begin),
            words.data(), words.size() * sizeof(uintptr_t)) ||
            std::none_of(words.begin(), words.end(), [&](uintptr_t word) {
                return visible_words.contains(native_history_markup_text(word));
            })) return std::nullopt;
    NativeActivityDetailDocument document;
    document.width = box.current_width;
    NativeActivityDetailParagraph paragraph;
    size_t bytes = 0;
    const auto flush = [&] {
        if (!paragraph.tokens.empty()) document.paragraphs.push_back(std::move(paragraph));
        paragraph = {};
    };
    for (size_t index = 0; index < box.words.size(); ++index) {
        const uintptr_t word = words[index];
        NativeHistoryMarkupWord fields;
        NativeHistoryToken token;
        if (!native_history_markup_word(word, fields)) return std::nullopt;
        token.source = std::move(fields.source);
        if (fields.flags & 7) flush(); // Native [R], [B] and [P] controls.
        if (token.source.empty()) continue;
        if (fields.x < 0 || fields.y < 0 || fields.x > 262144 || fields.y > 262144 ||
                token.source.size() > 262144 - bytes) return std::nullopt;
        bytes += token.source.size();
        token.identity = fields.text;
        token.x = fields.x;
        token.y = fields.y;
        token.color = (int(fields.red) << 16) | (int(fields.green) << 8) | fields.blue;
        if (!paragraph.source.empty()) {
            const auto &previous = paragraph.tokens.back();
            const int64_t gap = fields.y == previous.y
                ? int64_t(fields.x) - previous.x - int64_t(previous.source.size()) : 1;
            if (gap > 4096) return std::nullopt;
            if (gap > 0) paragraph.source.append(static_cast<size_t>(gap), ' ');
        }
        paragraph.source += token.source;
        paragraph.tokens.push_back(std::move(token));
    }
    flush();
    return document.paragraphs.size() >= 2
        ? std::optional<NativeActivityDetailDocument>(std::move(document)) : std::nullopt;
}

static void capture_native_history_sentence_range(void *event, NativeString *source,
        void *context, bool translated, bool glyphs_only, size_t source_begin) {
    NativeHistoryCallbackScope scope;
    // This callsite is virtual: retain the exact event subtype's implementation,
    // rather than remembering whichever formatter happened to run first.
    std::optional<NativeHistoryEventData> snapshot;
    try {
        pending_native_history() = {};
        snapshot = snapshot_native_history_event(event, context);
    } catch (...) {}
    if (!snapshot) {
        // A missing subtype field must not erase ownership of a real event.
        // Let the native adapter verify and copy its common event header.
        try {
            snapshot = snapshot_native_history_event_header(event, context);
            if (snapshot) snapshot->fields["snapshot.incomplete"] = {1};
        } catch (...) {}
    }
    // Never catch an exception from DF or replace its original output buffer.
    {
        NativeHistoryActiveScope active(snapshot ? &*snapshot : nullptr);
        native_history_call_formatter(event, source, context, translated, glyphs_only);
    }
    try {
        auto &pending = pending_native_history();
        pending = {};
        if (snapshot && (snapshot->native_type == 40 || snapshot->native_type == 42 || snapshot->native_type == 43)) {
            // Engraving descriptions can make DF load their art-image chunk.
            // Observe that newly resident data after the original call; never
            // initiate a native allocation or disk load from the adapter.
            auto refreshed = snapshot_native_history_event(event, context);
            if (refreshed) {
                for (auto &[key, value] : snapshot->texts)
                    refreshed->texts.try_emplace(key, std::move(value));
                for (auto &[key, value] : snapshot->fields)
                    refreshed->fields.try_emplace(key, std::move(value));
                for (auto &subject : snapshot->subjects) {
                    const bool present = std::any_of(refreshed->subjects.begin(), refreshed->subjects.end(),
                        [&](const auto &existing) { return existing.kind == subject.kind &&
                            existing.id == subject.id && existing.subid == subject.subid; });
                    if (!present) refreshed->subjects.push_back(std::move(subject));
                }
                refreshed->children = std::move(snapshot->children);
                snapshot = std::move(refreshed);
            }
        }
        std::string_view text;
        if (!snapshot) return;
        // A valid event identity remains owned even when one referenced object
        // is unavailable. The consumer leaves the complete native event visible.
        if (!populate_native_history_subjects(*snapshot))
            snapshot->fields["snapshot.incomplete"] = {1};
        if (!native_string_view(source, &text, kNativeHistorySourceLimit) ||
            source_begin >= text.size() || text.size() - source_begin > 262144) return;
        NativeHistoryPending next;
        next.source = source;
        next.generation = g_native_history_capture_generation.load(std::memory_order_acquire);
        next.event = std::move(snapshot);
        next.native_source.assign(text.substr(source_begin));
        pending = std::move(next);
    } catch (...) {}
}

#include "native_history_page_formatters.inc"
#include "native_history_artifact_page.inc"

static void capture_native_history_sentence(void *event, NativeString *source,
        void *context, bool translated, bool glyphs_only) {
    capture_native_history_sentence_range(event, source, context, translated, glyphs_only, 0);
}
static void capture_native_history_sentence_context(void *event, NativeString *source, void *context) {
    capture_native_history_sentence_range(event, source, context, true, false, 0);
}

static void capture_native_history_append(NativeHistoryRichBox *box, const NativeString *source) {
    NativeHistoryCallbackScope scope;
    NativeHistoryPending captured;
    size_t before = SIZE_MAX;
    try {
        auto &pending = pending_native_history();
        captured = std::move(pending);
        pending = {};
        std::string_view text;
        // The verified caller adds precisely [R] between getSentence and append.
        // Both the same live string and its complete value must still agree.
        if (box == g_native_history_box && captured.source == source && captured.event &&
#ifdef _WIN32
            g_native_history_chronicle_lifetime_ready &&
#endif
            captured.generation == g_native_history_capture_generation.load(std::memory_order_acquire) &&
            native_string_view(source, &text, 262147) && text.ends_with("[R]") &&
            text.substr(0, text.size() - 3) == captured.native_source)
            before = native_history_word_count(box);
    } catch (...) { before = SIZE_MAX; }
    if (g_real_native_history_append) g_real_native_history_append(box, source);
    if (before == SIZE_MAX || !captured.event) return;
    try {
        auto document = std::make_shared<NativeHistoryDocument>();
        if (!copy_native_history_tokens(box, before, document->tokens) || document->tokens.empty()) return;
        document->owner = reinterpret_cast<uintptr_t>(box);
        document->event = std::move(*captured.event);
        document->native_source = std::move(captured.native_source);
        remember_native_history_document(std::move(document));
    } catch (...) {}
}

static void recover_native_history_legends(NativeHistoryRichBox *box);

static void capture_native_history_layout(NativeHistoryRichBox *box, int width) {
    NativeHistoryCallbackScope scope;
    // The native richbox returns immediately at the same current_width;
    // append invalidates that width and a resize changes it. Mirror this
    // lifetime for the owned coordinates, not the number of draw frames.
    NativeHistoryRichBox before{};
    const bool relayout = !native_history_markup_box(reinterpret_cast<uintptr_t>(box), before) ||
        before.current_width != width;
    if (g_real_native_history_layout) g_real_native_history_layout(box, width);
    if (!box) return;
    try {
        // This is the game's own layout/render thread. Recover retained tabs
        // after core reload before their first native word is drawn.
        if (g_native_history_legends_capture_ready) recover_native_history_legends(box);
        const uintptr_t owner = reinterpret_cast<uintptr_t>(box);
        NativeHistoryRichBox view{};
        if (!native_history_markup_box(owner, view)) return;
        const size_t count = view.words.size();
        struct LayoutStamp {
            uintptr_t begin = 0, end = 0, first = 0, last = 0;
            uintptr_t links_begin = 0, links_end = 0;
            int width = 0, max_y = 0;
            uint64_t revision = 0;
            bool operator==(const LayoutStamp &) const = default;
        };
        auto &layouts = reloadable_thread_state<std::unordered_map<uintptr_t, LayoutStamp>,
            struct HistoryLayoutStampsTag>();
        LayoutStamp current{
            reinterpret_cast<uintptr_t>(view.words.begin), reinterpret_cast<uintptr_t>(view.words.end),
            count ? native_history_markup_element(view.words, 0) : 0,
            count ? native_history_markup_element(view.words, count - 1) : 0,
            reinterpret_cast<uintptr_t>(view.links.begin), reinterpret_cast<uintptr_t>(view.links.end),
            view.current_width, view.max_y, native_history_registry_revision()};
        const auto previous = layouts.find(owner);
        if (!relayout && previous != layouts.end() && previous->second == current) return;
        const auto remember_layout = [&]() {
            if (layouts.size() >= 4096) layouts.clear();
            if (current.revision) layouts.insert_or_assign(owner, current);
        };
        const auto documents = captured_native_history_documents();
        if (std::none_of(documents.begin(), documents.end(),
                [&](const auto &document) { return document->owner == owner; })) {
            remember_layout();
            return;
        }
        // Scan only pointer identities for the whole chronicle. Unknown event
        // text need not be deep-copied each time another year advances.
        std::unordered_map<uintptr_t, size_t> positions;
        positions.reserve(count);
        for (size_t i = 0; i < count; ++i) {
            const uintptr_t identity = native_history_markup_text(native_history_markup_element(view.words, i));
            if (!identity || !positions.emplace(identity, i).second) return;
        }
        std::vector<std::shared_ptr<const NativeHistoryDocument>> updated;
        updated.reserve(documents.size());
        for (const auto &document : documents) {
            if (document->owner != owner) { updated.push_back(document); continue; }
            const auto start = positions.find(document->tokens.front().identity);
            if (start == positions.end()) continue;
            std::vector<NativeHistoryToken> tokens;
            if (!copy_native_history_tokens(box, start->second, tokens, document->tokens.size())) continue;
            bool same = true, moved = false;
            for (size_t i = 0; i < tokens.size(); ++i) {
                if (!same_native_history_token(document->tokens[i], tokens[i])) { same = false; break; }
                moved = moved || document->tokens[i].x != tokens[i].x || document->tokens[i].y != tokens[i].y;
            }
            if (!same) continue;
            if (!moved) { updated.push_back(document); continue; }
            auto moved_document = std::make_shared<NativeHistoryDocument>(*document);
            moved_document->tokens = std::move(tokens);
            updated.push_back(std::move(moved_document));
        }
        current.revision = refresh_native_history_documents(documents, std::move(updated));
        remember_layout();
    } catch (...) {}
}

static graphicst *observe_native_history_draw(graphicst *graphics, const NativeString *source) noexcept {
    NativeHistoryCallbackScope scope;
    try {
        graphics = native_graphics_view(graphics);
        std::string_view text;
        if (graphics && graphics->screenx >= 0 && graphics->screenx < graphics->dimx &&
            graphics->screeny >= 0 && graphics->screeny < graphics->dimy &&
            native_string_view(source, &text, 262144)) {
            // Draw only the owned records captured from DF's real formatter
            // calls (or transferred by core reload). A missing record must
            // retain native text, never replay history formatters while world
            // generation is finalizing or releasing their referenced objects.
            // The native parser can place the end of a word beyond addst's
            // live clipping rectangle. Capture that rectangle before the
            // renderer restores it; blank suffix cells are not missing text.
            const int clip_left = static_cast<int>(std::clamp<int64_t>(
                graphics->clipx[0], 0, graphics->dimx));
            int clip_right = static_cast<int>(std::clamp<int64_t>(
                graphics->clipx[1], -1, graphics->dimx - 1) + 1);
            if (graphics->screeny < graphics->clipy[0] ||
                    graphics->screeny > graphics->clipy[1]) clip_right = clip_left;
            // The native caller has already selected the link's render RGB.
            // Read addchar's live palette/RGB branch, rather than the rich
            // word's parser color, which can still be the neutral base color.
            int foreground = -1;
            if (graphics == g_native_worldgen_write_graphics && graphics->use_old_16_colors) {
                const int palette = static_cast<int8_t>(graphics->screenf) +
                    (graphics->screenbright ? 8 : 0);
                if (palette >= 0 && palette < 16)
                    foreground = (graphics->uccolor[palette][0] << 16) |
                        (graphics->uccolor[palette][1] << 8) | graphics->uccolor[palette][2];
            } else if (graphics == g_native_worldgen_write_graphics) {
                foreground = (graphics->screen_color_r << 16) |
                    (graphics->screen_color_g << 8) | graphics->screen_color_b;
            }
            remember_native_history_draw(reinterpret_cast<uintptr_t>(source), text,
                graphics->screenx, graphics->screeny, clip_left, clip_right, foreground);
        }
    } catch (...) {}
    return graphics;
}

static void capture_native_history_draw(graphicst *graphics, const NativeString *source,
        NativeJustification justification, int width) {
    graphics = observe_native_history_draw(graphics, source);
    if (g_real_native_history_draw) native_graphics_call(g_real_native_history_draw, graphics, source, justification, width);
}

#ifdef _WIN32
struct NativeHistoryCallGroup {
    std::vector<NativeCall> calls;
    uint32_t mode = 0;
    bool source = false, requires_source = false;
    const char *label = "Native Legends source";
};
#endif
struct NativeHistoryProfile {
    uintptr_t base = 0;
    NativeHistoryRichBox *box = nullptr;
    size_t sentence_slot = 0;
    NativeHistoryAppendFn append = nullptr;
    NativeHistoryLayoutFn layout = nullptr;
    NativeHistoryDrawFn draw = nullptr;
    uintptr_t legends_render = 0;
    unsigned char *legends_render_entry = nullptr;
    std::vector<unsigned char> legends_render_prefix;
    void **legends_render_slot = nullptr;
    std::vector<NativeCall> calls;
#ifdef _WIN32
    std::vector<NativeHistoryCallGroup> groups;
    uint32_t recovery_modes = 0;
    bool recovery_ready = false, grouped = false;
#endif
};
#include "native_history_legends.inc"
#include "native_mission_report.inc"
#include "native_performance_form_description.inc"
#include "native_performance_story_description.inc"
#include "native_history_frame.inc"
#include "native_history_semantic_hooks.inc"
#include "native_history_profile.inc"
#include "native_history_chronicle_hooks.inc"

static NativeCallHook g_native_history_hooks;
#ifdef _WIN32
static std::vector<NativeCallHook> g_native_history_page_groups;
static bool native_history_page_groups_active() {
    return std::any_of(g_native_history_page_groups.begin(), g_native_history_page_groups.end(),
        [](const auto &hook) { return hook.active(); });
}
static bool uninstall_native_history_page_groups() {
    // Stop outer producers before retiring the shared sentence/transfer pair.
    for (auto at = g_native_history_page_groups.rbegin(); at != g_native_history_page_groups.rend(); ++at)
        if (!at->uninstall("Native Legends group restore")) return false;
    g_native_history_page_groups.clear();
    g_native_history_legends_producer_modes = 0;
    g_native_history_legends_recovery_modes = 0;
    g_native_history_legends_recovery_ready = false;
    return true;
}
#else
static bool native_history_page_groups_active() { return false; }
static bool uninstall_native_history_page_groups() { return true; }
#endif
static bool native_history_hooks_active() {
    return g_native_history_hooks.active() || g_native_history_render_hook.active() ||
        native_history_page_groups_active() ||
        native_history_chronicle_hooks_active() ||
        native_history_semantic_hooks_active() ||
        g_active_native_history_callbacks.load(std::memory_order_acquire) != 0;
}
static bool uninstall_native_history_hooks() {
    if (g_active_native_history_callbacks.load(std::memory_order_acquire) != 0) return false;
    if (!g_native_history_render_hook.uninstall("Native Legends render")) return false;
    if (!g_native_history_hooks.uninstall("Native history calls")) return false;
    if (!uninstall_native_history_page_groups()) return false;
    g_native_history_legends_capture_ready = false;
    if (!uninstall_native_history_semantic_hooks()) return false;
    if (!uninstall_native_history_chronicle_hooks()) return false;
    g_real_native_history_append = nullptr;
    g_real_native_history_layout = nullptr;
    g_real_native_history_draw = nullptr;
    g_real_native_history_item = nullptr;
    g_real_native_history_artifact_item = nullptr;
    g_real_native_history_building_label = nullptr;
    g_native_history_box = nullptr;
#ifdef _WIN32
    g_native_history_chronicle_lifetime_ready = false;
#endif
    g_native_history_sentence_slot = 0;
    g_native_history_capture_generation.fetch_add(1, std::memory_order_acq_rel);
    clear_native_history_legends();
    clear_native_history_documents();
    clear_native_history_rendered_frame();
    return true;
}
static bool install_native_history_hooks() {
#ifdef _WIN32
    if (g_native_history_legends_capture_ready && g_native_history_chronicle_lifetime_ready) return true;
    if (native_history_hooks_active() && !uninstall_native_history_hooks()) return false;
    // Resolve page signatures before any shared entry is patched. A page
    // miss cannot revoke a separately proved Chronicle transaction.
    NativeHistoryProfile profile;
    bool legends_ready = false;
    try {
        legends_ready = resolve_native_history_profile(profile) &&
            (profile.grouped || (!profile.calls.empty() && profile.sentence_slot &&
                profile.append && profile.layout && profile.draw)) &&
            (profile.legends_render_entry || profile.legends_render_slot);
    } catch (...) {}
    const bool chronicle_ready = install_native_history_chronicle_hooks();
    if (!chronicle_ready && native_history_chronicle_hooks_active()) return false;
    if (!install_native_history_semantic_hooks()) return false;
    if (legends_ready) {
        g_native_history_legends_grouped = profile.grouped;
        if (!chronicle_ready) {
            g_real_native_history_append = profile.append;
            g_real_native_history_layout = profile.layout;
        }
        g_native_history_sentence_slot = profile.sentence_slot;
        g_real_native_history_draw = profile.draw;
        try {
            legends_ready = (profile.grouped || g_native_history_hooks.install(
                profile.base, profile.calls, "Native Legends history calls")) &&
                g_native_history_render_hook.install(profile,
                    reinterpret_cast<void *>(&capture_native_history_render), "Native Legends render");
        } catch (...) { legends_ready = false; }
    }
    g_native_history_legends_capture_ready = legends_ready;
    if (!legends_ready) {
        if (!g_native_history_render_hook.uninstall("Native Legends render restore") ||
                !g_native_history_hooks.uninstall("Native Legends calls restore") ||
                !uninstall_native_history_page_groups() ||
                g_native_history_render_hook.active() || g_native_history_hooks.active()) return false;
        clear_native_history_legends();
        log_line("WARN", "Native Legends page capture unavailable; independent chronicle bindings retained");
    } else if (profile.grouped) {
        try { g_native_history_page_groups.resize(profile.groups.size()); }
        catch (...) {
            log_line("WARN", "Native Legends source transaction allocation unavailable; completed render retained");
            return true;
        }
        bool source_ready = false;
        bool public_abi_ready = false;
        size_t enabled = 0;
        for (size_t i = 0; i < profile.groups.size(); ++i) {
            const auto &group = profile.groups[i];
            auto &hook = g_native_history_page_groups[i];
            if (group.requires_source && !source_ready) continue;
            if (group.source) {
                g_real_native_history_describe = reinterpret_cast<NativeHistoryDescribeFn>(
                    native_pe_address(profile.base, 0xb8eeb0));
                g_real_native_history_links = reinterpret_cast<NativeHistoryLinksFn>(
                    native_pe_address(profile.base, 0xd4ecb0));
                g_real_native_history_counted_transfer = reinterpret_cast<NativeHistoryCountedTransferFn>(
                    native_pe_address(profile.base, 0x6fa10));
            }
            bool installed = false;
            try { installed = hook.install(profile.base, group.calls, group.label); }
            catch (...) {}
            if (!installed) {
                if (!hook.uninstall("Native Legends group restore") || hook.active()) return false;
                if (group.source) {
                    g_real_native_history_describe = nullptr;
                    g_real_native_history_links = nullptr;
                    g_real_native_history_counted_transfer = nullptr;
                }
                log_line("WARN", std::string(group.label) + " unavailable; native source retained");
                continue;
            }
            ++enabled;
            if (group.source) source_ready = true;
            if (group.requires_source && group.mode && group.calls.size() == 3)
                public_abi_ready = true;
            if (group.mode && group.mode < 32)
                g_native_history_legends_producer_modes |= uint32_t{1} << group.mode;
        }
        g_native_history_legends_recovery_ready = source_ready && public_abi_ready && profile.recovery_ready;
        g_native_history_legends_recovery_modes = g_native_history_legends_recovery_ready ?
            profile.recovery_modes : 0;
        log_line("INFO", "Enabled native Legends completed render and " +
            std::to_string(enabled) + " independent source/draw transactions");
    } else log_line("INFO", "Enabled native Legends event, token and draw capture");
    return chronicle_ready || legends_ready || native_history_semantic_hooks_active();
#else
    if (g_native_history_hooks.installed) return true;
    if (native_history_hooks_active() && !uninstall_native_history_hooks()) return false;
    NativeHistoryProfile profile;
    if (!resolve_native_history_profile(profile)) return false;
    // Missing bindings are an installation failure on every native ABI,
    // not a successful installation with a silently reduced feature set.
    if (profile.calls.empty()) {
        log_line("ERROR", "Native history event capture bindings are empty; no event hooks installed");
        return false;
    }
    if (!profile.box || !profile.sentence_slot || !profile.append || !profile.layout || !profile.draw ||
            (!profile.legends_render_entry && !profile.legends_render_slot))
        return false;
    g_native_history_box = profile.box;
    g_native_history_sentence_slot = profile.sentence_slot;
    g_real_native_history_append = profile.append;
    g_real_native_history_layout = profile.layout;
    g_real_native_history_draw = profile.draw;
    if (!g_native_history_hooks.install(profile.base, profile.calls, "Native history calls")) {
        uninstall_native_history_hooks();
        return false;
    }
    if (!g_native_history_render_hook.install(profile,
            reinterpret_cast<void *>(&capture_native_history_render), "Native Legends render")) {
        uninstall_native_history_hooks();
        return false;
    }
    g_native_history_legends_capture_ready = true;
    log_line("INFO", "Enabled native history event, token and draw capture");
    return true;
#endif
}
