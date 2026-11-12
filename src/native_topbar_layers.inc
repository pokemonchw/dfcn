// Fortress's native top bar owns its four-row output independently of the
// map, sidebar and modal components. Keep absolute native grid coordinates;
// every reader, painter and retained-source comparison uses only this frame.
static NativeUiLayerStorage g_native_topbar_layer;
static NativeInfoCapturedText g_native_topbar_text;
static SDL_Rect g_native_topbar_panel{};
static const unsigned char *g_native_topbar_background_grid = nullptr;
static std::unique_ptr<NativeUiGridBinding> g_native_topbar_output;
static std::unique_ptr<NativeInfoCapturedTextScope> g_native_topbar_captions;
static std::unique_ptr<TranslationStateScope> g_native_topbar_translation;
static bool g_native_topbar_capture_attempted = false;

// These are the three independent addst writers following the native site
// formatters and rank formatter. Their identity does not depend on spelling,
// truncation, or on any neighbouring caption surviving in the tile grid.
static int native_topbar_site_row(uintptr_t caller) {
#ifdef _WIN32
    const auto base = native_history_profile_base();
    constexpr uintptr_t writers[]{0x3f3051, 0x3f3139, 0x3f3202};
    for (int row = 0; row < 3; ++row)
        if (base && caller == native_reference_address(base, writers[row])) return row;
#else
    constexpr uintptr_t writers[]{0x168d544, 0x168d5f0, 0x168d68e};
    for (int row = 0; row < 3; ++row)
        if (caller && caller == native_elf_5317_address(writers[row])) return row;
#endif
    return -1;
}

static int native_topbar_site_right() {
    // Native renderer: name at frame-left + 2 (3f3006), population at
    // frame-left + 22 (3f3554). Reserve its one-column gutter as well.
    return std::min(g_native_topbar_panel.x + g_native_topbar_panel.w,
        g_native_topbar_panel.x + 21);
}

struct NativeTopbarSiteClip {
    graphicst *graphics = nullptr;
    long right = 0;
    NativeTopbarSiteClip(graphicst *value, uintptr_t caller, bool enabled) {
        if (!value || value != g_native_topbar_write_graphics ||
                !enabled || native_topbar_site_row(caller) < 0) return;
        graphics = value;
        right = graphics->clipx[1];
        // Constrain the original writer too: its unbounded native name must
        // not leave glyphs underneath the population and mood artwork.
        graphics->clipx[1] = std::min(right, long(native_topbar_site_right() - 1));
    }
    ~NativeTopbarSiteClip() { if (graphics) graphics->clipx[1] = right; }
};

static bool native_topbar_foreground_view(const graphicst *graphics) noexcept {
    return graphics && (g_native_topbar_layer.ready || g_native_topbar_output) &&
        graphics->screen == g_native_topbar_layer.foreground.planes[0].screen.data() &&
        graphics->screen_top == g_native_topbar_layer.foreground.planes[1].screen.data();
}

static bool native_topbar_background_view(const graphicst *graphics) noexcept {
    return graphics && g_native_topbar_layer.ready && !g_native_topbar_output &&
        !native_topbar_foreground_view(graphics) &&
        (graphics->screen == g_native_topbar_background_grid ||
            native_map_background_view(graphics));
}

static bool native_topbar_cell_outside(const graphicst *graphics, int x, int y) noexcept {
    return native_topbar_foreground_view(graphics) &&
        (x < g_native_topbar_panel.x || y < g_native_topbar_panel.y ||
            int64_t(x) >= int64_t(g_native_topbar_panel.x) + g_native_topbar_panel.w ||
            int64_t(y) >= int64_t(g_native_topbar_panel.y) + g_native_topbar_panel.h);
}

static bool native_topbar_begin_draw(const SDL_Rect &bounds) {
    if (g_native_topbar_output) return true;
    // The first skin call owns the whole bar. If capture cannot start there,
    // keep this native draw intact instead of splitting it at a later call.
    if (g_native_topbar_capture_attempted) return false;
    g_native_topbar_capture_attempted = true;
    try {
        auto translation = std::make_unique<TranslationStateScope>();
        auto *gps = native_graphics();
        auto &layer = g_native_topbar_layer;
        if (!gps || !gps->screen || !gps->screen_top ||
                !g_native_help_layer.native_renderer || !g_native_help_layer.renderer ||
                native_private_ui_write_active(gps) || g_native_tooltip_output ||
                g_native_info_write_graphics || g_native_character_write_graphics ||
                g_native_stocks_write_graphics || g_native_squads_write_graphics ||
                g_native_display_write_graphics ||
                native_notification_write_active(gps) || g_native_pause_write_graphics ||
                gps->dimx <= 0 || gps->dimx > 1000 || gps->dimy <= 0 || gps->dimy > 1000 ||
                bounds.x < 0 || bounds.y < 0 || bounds.w <= 0 || bounds.h <= 0 ||
                int64_t(bounds.x) + bounds.w > gps->dimx ||
                int64_t(bounds.y) + bounds.h > gps->dimy) return false;
        layer.foreground.prepare(*gps);
        native_ui_detach_map_output(*layer.foreground.graphics());
        layer.foreground.clear(bounds);
        layer.frames = {bounds};
        const auto *background = gps->screen;
        auto captions = std::make_unique<NativeInfoCapturedTextScope>(g_native_topbar_text);
        auto output = std::make_unique<NativeUiGridBinding>(gps, *layer.foreground.graphics());
        g_native_topbar_panel = bounds;
        g_native_topbar_background_grid = background;
        layer.native_renderer = g_native_help_layer.native_renderer;
        layer.renderer = g_native_help_layer.renderer;
        g_native_topbar_write_graphics = gps;
        g_native_topbar_captions = std::move(captions);
        g_native_topbar_output = std::move(output);
        g_native_topbar_translation = std::move(translation);
        return true;
    } catch (...) { return false; }
}

static void native_topbar_restore_output() {
    g_native_topbar_output.reset();
    g_native_topbar_captions.reset();
    g_native_topbar_write_graphics = nullptr;
    g_native_topbar_translation.reset();
    NativeUiReadScope::invalidate_reads();
}

static void native_topbar_end_draw() {
    if (!g_native_topbar_output) return;
    auto &layer = g_native_topbar_layer;
    layer.foreground.graphics()->top_in_use = native_graphics()->top_in_use;
    native_topbar_restore_output();
    if (const auto *gps = native_graphics()) g_native_topbar_background_grid = gps->screen;
    layer.ready = true;
    NativeUiReadScope::invalidate_reads();
}

static void native_topbar_begin_frame() {
    native_topbar_restore_output();
    auto &layer = g_native_topbar_layer;
    for (const auto &frame : layer.frames) layer.foreground.clear(frame);
    layer.ready = false;
    layer.frames.clear();
    layer.native_renderer = nullptr;
    layer.renderer = nullptr;
    g_native_topbar_text.clear();
    g_native_topbar_panel = {};
    g_native_topbar_background_grid = nullptr;
    g_native_topbar_capture_attempted = false;
    NativeUiReadScope::invalidate_reads();
}
