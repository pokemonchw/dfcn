// Borrow live arguments to verified native calls and the current screen chain.
// All event data published to the overlay is copied into core objects.
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
        if (!screen || screen > UINTPTR_MAX - 0x10 ||
            std::find(visited.begin(), visited.begin() + depth, screen) != visited.begin() + depth)
            return 0;
        visited[depth] = screen;
        if (!foreign(reinterpret_cast<void *>(screen))) return screen;
        uintptr_t parent = 0;
        if (!native_history_copy(screen + 0x10, parent)) return 0;
        screen = parent;
    }
    return 0;
}

static uintptr_t native_current_viewscreen() {
    const uintptr_t base = native_history_profile_base();
    if (!base) return 0;
    const uintptr_t view = native_reference_address(base, native_history_layout::gview_rva);
    if (!view || view > UINTPTR_MAX - 8) return 0;
    uintptr_t screen = view + 8;
    std::array<uintptr_t, 64> visited{};
    for (size_t depth = 0; depth < visited.size(); ++depth) {
        if (screen > UINTPTR_MAX - 8 ||
            std::find(visited.begin(), visited.begin() + depth, screen) != visited.begin() + depth)
            return 0;
        visited[depth] = screen;
        uintptr_t child = 0;
        if (!native_history_copy(screen + 8, child)) return 0;
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

static std::vector<SDL_Rect> native_text_input_regions(const graphicst &gps,
        const std::vector<std::string> &rows, const unsigned char *screen_override) {
    std::vector<SDL_Rect> regions;
    if (!gps.screen || gps.dimx <= 0 || gps.dimx > 1000 ||
            gps.dimy <= 0 || gps.dimy > 1000 ||
            rows.size() != static_cast<size_t>(gps.dimy)) return regions;
    std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
    const uint64_t epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
    if (g_native_drawn_text_epoch != epoch) return regions;
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

static std::optional<std::pair<int, int>> native_history_chronicle_row_bounds() {
    // Native draw bindings own rows 10..19; installation verifies their code.
    return native_history_profile_base() ? std::optional(std::pair<int, int>{10, 20}) : std::nullopt;
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

// Scratch uses the host's allocator; no native owning header is copied.
struct NativeHistoryScratch {
    NativeString source = native_empty_string();
    NativeHistoryRichBox box{};
    NativeHistoryScratch() { box.current_width = -1; }
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
using NativeHistoryAppendFn = void (*)(NativeHistoryRichBox *, const NativeString *);
using NativeHistoryLayoutFn = void (*)(NativeHistoryRichBox *, int);
using NativeHistoryDrawFn = void (*)(graphicst *, const NativeString *, NativeJustification, int);
static NativeHistoryAppendFn g_real_native_history_append = nullptr;
static NativeHistoryLayoutFn g_real_native_history_layout = nullptr;
static NativeHistoryDrawFn g_real_native_history_draw = nullptr;
static NativeHistoryRichBox *g_native_history_box = nullptr;
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
    return box && box->words.valid(kNativeHistoryCaptureTokens) ? box->words.size() : SIZE_MAX;
}

static bool copy_native_history_tokens(const NativeHistoryRichBox *box, size_t begin,
        std::vector<NativeHistoryToken> &tokens, size_t length = SIZE_MAX) {
    const size_t count = native_history_word_count(box);
    if (count == SIZE_MAX || begin > count || !box->links.valid(kNativeHistoryCaptureTokens)) return false;
    if (length == SIZE_MAX) length = count - begin;
    if (length > count - begin || length > kNativeHistoryDocumentTokens) return false;
    tokens.clear();
    tokens.reserve(length);
    for (size_t i = begin; i < begin + length; ++i) {
        const auto *word = box->words.begin[i];
        std::string_view source;
        if (!word || !native_string_view(&word->text, &source, 262144)) return false;
        NativeHistoryToken token;
        token.identity = reinterpret_cast<uintptr_t>(word);
        token.source.assign(source);
        token.x = word->x;
        token.y = word->y;
        token.color = (int(word->red) << 16) | (int(word->green) << 8) | int(word->blue);
        if (word->link_index >= 0) {
            if (static_cast<size_t>(word->link_index) >= box->links.size()) return false;
            const auto *link = box->links.begin[word->link_index];
            if (!link || link->type < -1 || link->type > 11) return false;
            token.link_type = link->type;
            token.link_id = link->id;
            token.link_subid = link->subid;
        } else if (word->link_index != -1) return false;
        tokens.push_back(std::move(token));
    }
    return true;
}

static void capture_native_history_sentence_range(void *event, NativeString *source,
        void *context, bool translated, bool glyphs_only, size_t source_begin) {
    NativeHistoryCallbackScope scope;
    // This callsite is virtual: retain the exact event subtype's implementation,
    // rather than remembering whichever formatter happened to run first.
    const void *table = nullptr;
    NativeHistorySentenceFn original = nullptr;
    std::memcpy(&table, event, sizeof(table));
    std::memcpy(&original, static_cast<const unsigned char *>(table) +
        g_native_history_sentence_slot, sizeof(original));
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
        original(event, source, context, translated, glyphs_only);
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
#include "native_history_recovery.inc"

static void capture_native_history_layout(NativeHistoryRichBox *box, int width) {
    NativeHistoryCallbackScope scope;
    // The native richbox returns immediately at the same current_width;
    // append invalidates that width and a resize changes it. Mirror this
    // lifetime for the owned coordinates, not the number of draw frames.
    const bool relayout = box && box->current_width != width;
    if (g_real_native_history_layout) g_real_native_history_layout(box, width);
    if (!box) return;
    try {
        // This is the game's own layout/render thread. Recover retained tabs
        // after core reload before their first native word is drawn.
        recover_native_history_legends(box);
        const uintptr_t owner = reinterpret_cast<uintptr_t>(box);
        const size_t count = native_history_word_count(box);
        if (count == SIZE_MAX) return;
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
            reinterpret_cast<uintptr_t>(box->words.begin), reinterpret_cast<uintptr_t>(box->words.end),
            count ? reinterpret_cast<uintptr_t>(box->words.begin[0]) : 0,
            count ? reinterpret_cast<uintptr_t>(box->words.begin[count - 1]) : 0,
            reinterpret_cast<uintptr_t>(box->links.begin), reinterpret_cast<uintptr_t>(box->links.end),
            box->current_width, box->max_y, native_history_registry_revision()};
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
            const uintptr_t identity = reinterpret_cast<uintptr_t>(box->words.begin[i]);
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

static void capture_native_history_draw(graphicst *graphics, const NativeString *source,
        NativeJustification justification, int width) {
    NativeHistoryCallbackScope scope;
    try {
        recover_native_history_chronicle();
        std::string_view text;
        if (graphics && graphics->screenx >= 0 && graphics->screenx < graphics->dimx &&
            graphics->screeny >= 0 && graphics->screeny < graphics->dimy &&
            native_string_view(source, &text, 262144)) {
            // The native parser can place the end of a word beyond addst's
            // live clipping rectangle. Capture that rectangle before the
            // renderer restores it; blank suffix cells are not missing text.
            const int clip_left = static_cast<int>(std::clamp<int64_t>(
                graphics->clipx[0], 0, graphics->dimx));
            int clip_right = static_cast<int>(std::clamp<int64_t>(
                graphics->clipx[1], -1, graphics->dimx - 1) + 1);
            if (graphics->screeny < graphics->clipy[0] ||
                    graphics->screeny > graphics->clipy[1]) clip_right = clip_left;
            remember_native_history_draw(reinterpret_cast<uintptr_t>(source), text,
                graphics->screenx, graphics->screeny, clip_left, clip_right);
        }
    } catch (...) {}
    if (g_real_native_history_draw) g_real_native_history_draw(graphics, source, justification, width);
}

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
};
#include "native_history_legends.inc"
#include "native_mission_report.inc"
#include "native_history_frame.inc"
#include "native_history_profile.inc"

static NativeCallHook g_native_history_hooks;
static bool native_history_hooks_active() {
    return g_native_history_hooks.active() || g_native_history_render_hook.active() ||
        g_active_native_history_callbacks.load(std::memory_order_acquire) != 0;
}
static bool uninstall_native_history_hooks() {
    if (g_active_native_history_callbacks.load(std::memory_order_acquire) != 0) return false;
    if (!g_native_history_render_hook.uninstall("Native Legends render")) return false;
    if (!g_native_history_hooks.uninstall("Native history calls")) return false;
    g_real_native_history_append = nullptr;
    g_real_native_history_layout = nullptr;
    g_real_native_history_draw = nullptr;
    g_real_native_history_item = nullptr;
    g_real_native_history_artifact_item = nullptr;
    g_real_native_history_building_label = nullptr;
    g_native_history_box = nullptr;
    g_native_history_sentence_slot = 0;
    g_native_history_capture_generation.fetch_add(1, std::memory_order_acq_rel);
    clear_native_history_legends();
    clear_native_history_documents();
    clear_native_history_rendered_frame();
    return true;
}
static bool install_native_history_hooks() {
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
    log_line("INFO", "Enabled native history event, token and draw capture");
    return true;
}
