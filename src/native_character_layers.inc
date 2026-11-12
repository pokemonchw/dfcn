// view_sheets_interfacest owns the complete character sheet. Its native
// output and current draw records live outside the map/management grids.
static NativeUiLayerStorage g_native_character_layer;
static NativeInfoCapturedText g_native_character_text;
static uintptr_t g_native_character_owner = 0;
static int32_t g_native_character_context = -1;
static int32_t g_native_character_active_id = -1;
static int32_t g_native_character_active_sub_tab = -1;
static const unsigned char *g_native_character_background_grid = nullptr;
static const unsigned char *g_native_character_background_top_grid = nullptr;
static SDL_Rect g_native_character_panel{};
static std::vector<SDL_Rect> g_native_character_previous_frames;

static bool native_character_open() noexcept {
    uint8_t open = 0;
    int32_t type = -1;
    return g_native_character_owner &&
        native_history_copy(g_native_character_owner, open) && open == 1 &&
        native_history_copy(g_native_character_owner + 8, type) && type == 0;
}

static bool native_character_foreground_view(const graphicst *graphics) noexcept {
    // The producer and Present read the live open flag once at their
    // boundaries. Cell readers use that published snapshot, avoiding a
    // process-memory query for every glyph and border sample.
    return graphics &&
        (g_native_character_layer.ready || g_native_character_write_graphics) &&
        graphics->screen == g_native_character_layer.foreground.planes[0].screen.data() &&
        graphics->screen_top == g_native_character_layer.foreground.planes[1].screen.data();
}

static bool native_character_translation_active(const graphicst *graphics) noexcept {
    return native_character_foreground_view(graphics);
}

static std::optional<int32_t> native_character_sub_tab(const graphicst *graphics) noexcept {
    if (!native_character_foreground_view(graphics) ||
            g_native_character_active_sub_tab < 0) return std::nullopt;
    // The native producer saves this page with its private text grid. The
    // reader must not infer Overview from a quote on another character tab.
    return g_native_character_active_sub_tab;
}

static SDL_Rect native_character_read_bounds(const graphicst &graphics) noexcept {
    const SDL_Rect canvas{0, 0, graphics.dimx, graphics.dimy};
    if (!native_character_foreground_view(&graphics)) return canvas;
    SDL_Rect bounds{};
    SDL_IntersectRect(&canvas, &g_native_character_panel, &bounds);
    return bounds;
}

static bool native_character_background_view(const graphicst *graphics) noexcept {
    return graphics && g_native_character_layer.ready &&
        !g_native_character_foreground && !g_native_character_write_graphics &&
        graphics->screen == g_native_character_background_grid &&
        graphics->screen_top == g_native_character_background_top_grid;
}

static bool native_character_background_cell_hidden(const graphicst *graphics,
        int x, int y) noexcept {
    if (!native_character_background_view(graphics) ||
            native_private_ui_write_active(graphics) ||
            g_native_info_write_graphics || g_native_stocks_write_graphics ||
            g_native_display_write_graphics ||
            g_native_squads_write_graphics || g_native_reports_write_graphics ||
            native_notification_write_active(graphics) || g_native_pause_write_graphics)
        return false;
    for (const auto &frame : g_native_character_layer.frames)
        if (x >= frame.x && y >= frame.y && x < frame.x + frame.w && y < frame.y + frame.h)
            return true;
    return false;
}

static bool native_character_background_copy_hidden(SDL_Renderer *renderer,
        const SDL_Rect *destination) noexcept {
    if (!destination || destination->w <= 0 || destination->h <= 0 ||
            !g_native_character_layer.ready || renderer != g_native_character_layer.renderer ||
            SDL_GetRenderTarget(renderer)) return false;
    const auto *gps = native_graphics();
    if (!native_character_background_view(gps) || gps->tile_pixel_x <= 0 ||
            gps->tile_pixel_y <= 0) return false;
    const int64_t tile_x = gps->tile_pixel_x, tile_y = gps->tile_pixel_y;
    const int64_t origin_x = (gps->screen_pixel_x - tile_x * gps->dimx) / 2;
    const int64_t origin_y = (gps->screen_pixel_y - tile_y * gps->dimy) / 2;
    for (const auto &frame : g_native_character_layer.frames) {
        const int64_t left = origin_x + frame.x * tile_x;
        const int64_t top = origin_y + frame.y * tile_y;
        if (destination->x >= left && destination->y >= top &&
                int64_t(destination->x) + destination->w <= left + frame.w * tile_x &&
                int64_t(destination->y) + destination->h <= top + frame.h * tile_y)
            return true;
    }
    return false;
}

struct NativeCharacterCapturedText {
    std::optional<NativeOverviewQuoteDraw> quote;
    std::vector<NativeCharacterRelation> relations;
    uint64_t relation_epoch = 0;
    std::vector<NativeKnowledgeDraw> knowledge_draws, knowledge_previous_draws;
    uint64_t knowledge_epoch = 0, knowledge_previous_epoch = 0;
    decltype(g_native_overview_event_sources) events{};
    size_t event_next = 0;
    uint64_t event_revision = 0;

    void swap_current() {
        std::scoped_lock lock(g_native_overview_quote_mutex,
            g_native_character_relation_mutex, g_native_knowledge_mutex,
            g_native_overview_event_mutex);
        quote.swap(g_native_overview_quote_draw);
        g_native_overview_quote_revision.fetch_add(1, std::memory_order_release);
        relations.swap(g_native_character_relations);
        std::swap(relation_epoch, g_native_character_relation_epoch);
        knowledge_draws.swap(g_native_knowledge_draws);
        knowledge_previous_draws.swap(g_native_knowledge_previous_draws);
        std::swap(knowledge_epoch, g_native_knowledge_draw_epoch);
        std::swap(knowledge_previous_epoch, g_native_knowledge_previous_draw_epoch);
        events.swap(g_native_overview_event_sources);
        std::swap(event_next, g_native_overview_event_next);
        std::swap(event_revision, g_native_overview_event_revision);
    }
    void clear_draws() {
        quote.reset(); relations.clear(); relation_epoch = 0;
        knowledge_draws.clear(); knowledge_previous_draws.clear();
        knowledge_epoch = knowledge_previous_epoch = 0;
    }
    void clear() {
        clear_draws();
        for (auto &event : events) event = {};
        event_next = 0; event_revision = 0;
    }
    // The native feed may construct Overview text before invoking render.
    // Transfer only that producer's event sentences; conversation's separate
    // "during " records remain with their original consumer.
    void adopt_pending_events() {
        std::lock_guard<std::mutex> lock(g_native_overview_event_mutex);
        bool changed = false;
        size_t retained = 0;
        for (auto &event : g_native_overview_event_sources) {
            if (event.source.starts_with("It was ")) {
                auto found = std::find_if(events.begin(), events.end(), [&](const auto &old) {
                    return old.source == event.source;
                });
                if (found == events.end()) {
                    events[event_next] = std::move(event);
                    event_next = (event_next + 1) % events.size();
                } else {
                    if (found->collection_id != event.collection_id) found->ambiguous = true;
                    found->ambiguous = found->ambiguous || event.ambiguous;
                    found->document = found->ambiguous ? nullptr : std::move(event.document);
                }
                ++event_revision;
                changed = true;
            } else if (!event.source.empty()) {
                if (&event != &g_native_overview_event_sources[retained])
                    g_native_overview_event_sources[retained] = std::move(event);
                ++retained;
            }
        }
        if (changed) {
            for (size_t i = retained; i < g_native_overview_event_sources.size(); ++i)
                g_native_overview_event_sources[i] = {};
            g_native_overview_event_next = retained % g_native_overview_event_sources.size();
            ++g_native_overview_event_revision;
        }
    }
};
static NativeCharacterCapturedText g_native_character_sources;

struct NativeCharacterCapturedTextScope {
    explicit NativeCharacterCapturedTextScope() {
        g_native_character_sources.swap_current();
        std::scoped_lock lock(g_native_character_relation_mutex, g_native_knowledge_mutex);
        const auto epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
        if (g_native_character_relation_epoch) g_native_character_relation_epoch = epoch;
        if (g_native_knowledge_draw_epoch) g_native_knowledge_draw_epoch = epoch;
        if (g_native_knowledge_previous_draw_epoch) g_native_knowledge_previous_draw_epoch = epoch;
    }
    ~NativeCharacterCapturedTextScope() { g_native_character_sources.swap_current(); }
    NativeCharacterCapturedTextScope(const NativeCharacterCapturedTextScope &) = delete;
    NativeCharacterCapturedTextScope &operator=(const NativeCharacterCapturedTextScope &) = delete;
};

struct NativeCharacterForegroundScope {
    bool previous = g_native_character_foreground;
    NativeCharacterForegroundScope() {
        g_native_character_foreground = true;
        NativeUiReadScope::invalidate_reads();
    }
    ~NativeCharacterForegroundScope() {
        g_native_character_foreground = previous;
        NativeUiReadScope::invalidate_reads();
    }
};

static void native_character_begin_frame() {
    g_native_character_layer.ready = false;
    if (!g_native_character_layer.frames.empty())
        g_native_character_previous_frames = std::move(g_native_character_layer.frames);
    g_native_character_layer.frames.clear();
    g_native_character_layer.native_renderer = nullptr;
    g_native_character_layer.renderer = nullptr;
    g_native_character_text.clear();
    g_native_character_sources.clear_draws();
    if (!native_character_open()) g_native_character_sources.clear();
    if (g_native_character_owner) {
        // Retire character captures from a preceding ordinary-grid producer
        // as well. New sheet draws publish only inside their private scope;
        // retained old rows must not remain dependencies of the map cache.
        std::scoped_lock lock(g_native_overview_quote_mutex,
            g_native_character_relation_mutex, g_native_knowledge_mutex);
        if (g_native_overview_quote_draw) {
            g_native_overview_quote_draw.reset();
            g_native_overview_quote_revision.fetch_add(1, std::memory_order_release);
        }
        g_native_character_relations.clear();
        g_native_character_relation_epoch = 0;
        const auto character = [](const NativeKnowledgeDraw &draw) {
            return draw.document && (draw.document->personality || draw.document->health ||
                draw.document->thoughts || draw.document->overview_footer);
        };
        std::erase_if(g_native_knowledge_draws, character);
        std::erase_if(g_native_knowledge_previous_draws, character);
        if (g_native_knowledge_draws.empty()) g_native_knowledge_draw_epoch = 0;
        if (g_native_knowledge_previous_draws.empty()) g_native_knowledge_previous_draw_epoch = 0;
    }
    g_native_character_background_grid = nullptr;
    g_native_character_background_top_grid = nullptr;
    g_native_character_panel = {};
    g_native_character_context = g_native_character_active_id =
        g_native_character_active_sub_tab = -1;
    NativeUiReadScope::invalidate_reads();
}
