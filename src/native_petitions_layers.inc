// The accepted construction list owns the complete native skin and each
// three-line agreement. Its output and captions never share the HUD grid.
static NativeUiLayerStorage g_native_petitions_layer;
static NativeInfoCapturedText g_native_petitions_text;
static SDL_Rect g_native_petitions_panel{};
static const unsigned char *g_native_petitions_background_grid = nullptr;
static std::unique_ptr<NativeUiGridBinding> g_native_petitions_output;
static std::unique_ptr<NativeInfoCapturedTextScope> g_native_petitions_captions;
static std::unique_ptr<TranslationStateScope> g_native_petitions_translation;
static bool g_native_petitions_capture_attempted = false;

static bool native_petitions_foreground_view(const graphicst *graphics) noexcept {
    return graphics && (g_native_petitions_layer.ready || g_native_petitions_output) &&
        graphics->screen == g_native_petitions_layer.foreground.planes[0].screen.data() &&
        graphics->screen_top == g_native_petitions_layer.foreground.planes[1].screen.data();
}

static bool native_petitions_cell_outside(const graphicst *graphics, int x, int y) noexcept {
    const auto &panel = g_native_petitions_panel;
    return native_petitions_foreground_view(graphics) &&
        (x < panel.x || y < panel.y ||
            int64_t(x) >= int64_t(panel.x) + panel.w ||
            int64_t(y) >= int64_t(panel.y) + panel.h);
}

static bool native_petitions_background_cell_hidden(const graphicst *graphics,
        int x, int y) noexcept {
    const auto &panel = g_native_petitions_panel;
    return graphics && g_native_petitions_layer.ready && !g_native_petitions_output &&
        graphics->screen == g_native_petitions_background_grid &&
        !native_private_ui_write_active(graphics) &&
        graphics != g_native_info_write_graphics &&
        graphics != g_native_character_write_graphics &&
        graphics != g_native_stocks_write_graphics &&
        graphics != g_native_display_write_graphics &&
        graphics != g_native_squads_write_graphics &&
        !native_notification_write_active(graphics) &&
        graphics != g_native_pause_write_graphics &&
        x >= panel.x && y >= panel.y &&
        int64_t(x) < int64_t(panel.x) + panel.w &&
        int64_t(y) < int64_t(panel.y) + panel.h;
}

static bool native_petitions_begin_draw() {
    if (g_native_petitions_output) return true;
    // Only the first native skin write can claim this producer. A failed
    // capture must not split the remaining frame between two owners.
    if (g_native_petitions_capture_attempted) return false;
    g_native_petitions_capture_attempted = true;
    try {
        auto translation = std::make_unique<TranslationStateScope>();
        auto *gps = native_graphics();
        auto &layer = g_native_petitions_layer;
        if (!gps || !gps->screen || !gps->screen_top ||
                !g_native_help_layer.native_renderer || !g_native_help_layer.renderer ||
                native_private_ui_write_active(gps) || g_native_tooltip_output ||
                g_native_info_write_graphics || g_native_character_write_graphics ||
                g_native_stocks_write_graphics || g_native_squads_write_graphics ||
                g_native_display_write_graphics ||
                native_notification_write_active(gps) || g_native_pause_write_graphics ||
                gps->dimx <= 0 || gps->dimx > 1000 || gps->dimy <= 0 || gps->dimy > 1000)
            return false;
        layer.foreground.prepare(*gps);
        native_ui_detach_map_output(*layer.foreground.graphics());
        layer.foreground.clear();
        layer.frames.reserve(1);
        auto captions = std::make_unique<NativeInfoCapturedTextScope>(g_native_petitions_text);
        auto output = std::make_unique<NativeUiGridBinding>(gps, *layer.foreground.graphics());
        layer.native_renderer = g_native_help_layer.native_renderer;
        layer.renderer = g_native_help_layer.renderer;
        g_native_petitions_write_graphics = gps;
        g_native_petitions_captions = std::move(captions);
        g_native_petitions_output = std::move(output);
        g_native_petitions_translation = std::move(translation);
        return true;
    } catch (...) { return false; }
}

static void native_petitions_submit_skin_cell(int x, int y) {
    const auto *gps = native_graphics();
    if (!gps || !g_native_petitions_output ||
            x < 0 || x >= gps->dimx || y < 0 || y >= gps->dimy ||
            x < gps->clipx[0] || x > gps->clipx[1] ||
            y < gps->clipy[0] || y > gps->clipy[1]) return;
    auto &panel = g_native_petitions_panel;
    // This exact native loop visits every cell of its rectangular skin,
    // including its opaque interior. No title or screen geometry guesses
    // participate in assigning the panel's boundaries.
    if (panel.w <= 0 || panel.h <= 0) panel = {x, y, 1, 1};
    else {
        const int right = std::max(panel.x + panel.w, x + 1);
        const int bottom = std::max(panel.y + panel.h, y + 1);
        panel.x = std::min(panel.x, x);
        panel.y = std::min(panel.y, y);
        panel.w = right - panel.x;
        panel.h = bottom - panel.y;
    }
    auto &frames = g_native_petitions_layer.frames;
    if (frames.empty()) frames.push_back(panel);
    else frames.front() = panel;
}

static void native_petitions_restore_output() {
    g_native_petitions_output.reset();
    g_native_petitions_captions.reset();
    g_native_petitions_write_graphics = nullptr;
    g_native_petitions_translation.reset();
    NativeUiReadScope::invalidate_reads();
}

static void native_petitions_end_draw() {
    if (!g_native_petitions_output) return;
    auto &layer = g_native_petitions_layer;
    auto *gps = native_graphics();
    native_graphics_read_member(gps, offsetof(graphicst, top_in_use),
        layer.foreground.graphics()->top_in_use);
    const auto continuation = NativeDfhackOutputBinding::capture(*gps);
    native_petitions_restore_output();
    // The next native component inherits the producer's cursor and palette,
    // while output arrays and clipping return to the parent owner.
    continuation.apply_draw(*gps);
    g_native_petitions_background_grid = gps->screen;
    layer.ready = !layer.frames.empty();
    NativeUiReadScope::invalidate_reads();
}

static void native_petitions_begin_frame() {
    native_petitions_restore_output();
    auto &layer = g_native_petitions_layer;
    for (const auto &frame : layer.frames) layer.foreground.clear(frame);
    layer.frames.clear();
    layer.ready = false;
    layer.native_renderer = nullptr;
    layer.renderer = nullptr;
    g_native_petitions_text.clear();
    g_native_petitions_panel = {};
    g_native_petitions_background_grid = nullptr;
    g_native_petitions_capture_attempted = false;
    NativeUiReadScope::invalidate_reads();
}
