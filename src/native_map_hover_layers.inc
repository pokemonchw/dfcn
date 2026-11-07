// The native look-list producer owns its frame and complete typed captions.
// Keep its source grids and captured draws separate from every other panel.
static NativeUiLayerStorage g_native_map_hover_layer;
static NativeInfoCapturedText g_native_map_hover_text;
static SDL_Rect g_native_map_hover_panel{};
static std::unique_ptr<NativeUiGridBinding> g_native_map_hover_output;
static std::unique_ptr<NativeInfoCapturedTextScope> g_native_map_hover_captions;
static std::unique_ptr<TranslationStateScope> g_native_map_hover_translation;
static bool g_native_map_hover_capture_attempted = false;

static bool native_map_hover_foreground_view(const graphicst *graphics) noexcept {
    return graphics && (g_native_map_hover_layer.ready || g_native_map_hover_output) &&
        graphics->screen == g_native_map_hover_layer.foreground.planes[0].screen.data() &&
        graphics->screen_top == g_native_map_hover_layer.foreground.planes[1].screen.data();
}

static bool native_map_hover_cell_outside(const graphicst *graphics, int x, int y) noexcept {
    return native_map_hover_foreground_view(graphics) &&
        (x < g_native_map_hover_panel.x || y < g_native_map_hover_panel.y ||
            int64_t(x) >= int64_t(g_native_map_hover_panel.x) + g_native_map_hover_panel.w ||
            int64_t(y) >= int64_t(g_native_map_hover_panel.y) + g_native_map_hover_panel.h);
}

static bool native_map_hover_begin_draw(const SDL_Rect &bounds) {
    if (g_native_map_hover_output) return true;
    // Starting after the first border write would split one native owner.
    if (g_native_map_hover_capture_attempted) return false;
    g_native_map_hover_capture_attempted = true;
    try {
        auto translation = std::make_unique<TranslationStateScope>();
        auto *gps = native_graphics();
        auto &layer = g_native_map_hover_layer;
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
        auto &view = *layer.foreground.graphics();
        native_ui_detach_map_output(view);
        layer.foreground.clear(bounds);
        layer.frames = {bounds};
        // The producer's own rectangle is the drawing boundary even when a
        // long list runs below the viewport or a caption is wider than it.
        view.clipx[0] = bounds.x;
        view.clipx[1] = bounds.x + bounds.w - 1;
        view.clipy[0] = bounds.y;
        view.clipy[1] = bounds.y + bounds.h - 1;
        auto captions = std::make_unique<NativeInfoCapturedTextScope>(g_native_map_hover_text);
        auto output = std::make_unique<NativeUiGridBinding>(gps, view);
        g_native_map_hover_panel = bounds;
        layer.native_renderer = g_native_help_layer.native_renderer;
        layer.renderer = g_native_help_layer.renderer;
        g_native_map_hover_write_graphics = gps;
        g_native_map_hover_captions = std::move(captions);
        g_native_map_hover_output = std::move(output);
        g_native_map_hover_translation = std::move(translation);
        return true;
    } catch (...) { return false; }
}

static void native_map_hover_restore_output() {
    g_native_map_hover_output.reset();
    g_native_map_hover_captions.reset();
    g_native_map_hover_write_graphics = nullptr;
    g_native_map_hover_translation.reset();
    NativeUiReadScope::invalidate_reads();
}

static void native_map_hover_end_draw() {
    if (!g_native_map_hover_output) return;
    auto &layer = g_native_map_hover_layer;
    auto *gps = native_graphics();
    native_graphics_read_member(gps, offsetof(graphicst, top_in_use),
        layer.foreground.graphics()->top_in_use);
    const auto continuation = NativeDfhackOutputBinding::capture(*gps);
    native_map_hover_restore_output();
    // Restore the parent's ownership and clip, retaining the native writer's
    // final cursor/palette for the renderer's unrelated successor branches.
    continuation.apply_draw(*gps);
    layer.ready = true;
    NativeUiReadScope::invalidate_reads();
}

static void native_map_hover_begin_frame() {
    native_map_hover_restore_output();
    auto &layer = g_native_map_hover_layer;
    for (const auto &frame : layer.frames) layer.foreground.clear(frame);
    layer.frames.clear();
    layer.ready = false;
    layer.native_renderer = nullptr;
    layer.renderer = nullptr;
    g_native_map_hover_text.clear();
    g_native_map_hover_panel = {};
    g_native_map_hover_capture_attempted = false;
    NativeUiReadScope::invalidate_reads();
}
