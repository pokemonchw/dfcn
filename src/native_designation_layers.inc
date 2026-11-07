// The designation producer owns its icons, operation title and controls.
// Coordinates come from its cursor calls, never from the surrounding page.
static NativeUiLayerStorage g_native_designation_layer;
static NativeInfoCapturedText g_native_designation_text;
static std::unique_ptr<NativeUiGridBinding> g_native_designation_output;
static std::unique_ptr<NativeInfoCapturedTextScope> g_native_designation_captions;
static std::unique_ptr<TranslationStateScope> g_native_designation_translation;
// The first category cursor is also reached again by its native tile loop.
// If its first isolation attempt fails, keep this entire producer native;
// a later loop iteration must not start a private frame halfway through it.
static bool g_native_designation_begin_attempted = false;

static void native_designation_submit_span(int x, int y, int length) {
    const auto *gps = native_graphics();
    if (!gps || !g_native_designation_output || length <= 0 ||
            y < 0 || y >= gps->dimy || y < gps->clipy[0] || y > gps->clipy[1]) return;
    int left = static_cast<int>(std::max<int64_t>({0, x, gps->clipx[0]}));
    int right = static_cast<int>(std::min<int64_t>({gps->dimx,
        int64_t(x) + length, int64_t(gps->clipx[1]) + 1}));
    if (left >= right) return;
    auto &frames = g_native_designation_layer.frames;
    // Merge submitted spans only. Empty gaps between controls stay unowned.
    for (auto it = frames.begin(); it != frames.end();) {
        if (it->y == y && it->x <= right && it->x + it->w >= left) {
            left = std::min(left, it->x);
            right = std::max(right, it->x + it->w);
            it = frames.erase(it);
        } else ++it;
    }
    frames.push_back({left, y, right - left, 1});
}

static bool native_designation_begin_draw() {
    if (g_native_designation_output) return true;
    if (g_native_designation_begin_attempted) return false;
    g_native_designation_begin_attempted = true;
    try {
        auto translation = std::make_unique<TranslationStateScope>();
        auto *gps = native_graphics();
        auto &layer = g_native_designation_layer;
        if (!gps || !gps->screen || !gps->screen_top ||
                !g_native_help_layer.native_renderer || !g_native_help_layer.renderer ||
                native_private_ui_write_active(gps) || g_native_tooltip_output ||
                gps->dimx <= 0 || gps->dimx > 1000 || gps->dimy <= 0 || gps->dimy > 1000)
            return false;
        layer.foreground.prepare(*gps);
        native_ui_detach_map_output(*layer.foreground.graphics());
        auto captions = std::make_unique<NativeInfoCapturedTextScope>(g_native_designation_text);
        auto output = std::make_unique<NativeUiGridBinding>(gps, *layer.foreground.graphics());
        layer.native_renderer = g_native_help_layer.native_renderer;
        layer.renderer = g_native_help_layer.renderer;
        g_native_designation_write_graphics = gps;
        g_native_designation_captions = std::move(captions);
        g_native_designation_output = std::move(output);
        g_native_designation_translation = std::move(translation);
        return true;
    } catch (...) { return false; }
}

static void native_designation_restore_output() {
    g_native_designation_output.reset();
    g_native_designation_captions.reset();
    g_native_designation_write_graphics = nullptr;
    g_native_designation_translation.reset();
}

static void native_designation_end_draw() {
    if (!g_native_designation_output) return;
    auto &layer = g_native_designation_layer;
    auto *gps = native_graphics();
    native_graphics_read_member(gps, offsetof(graphicst, top_in_use),
        layer.foreground.graphics()->top_in_use);
    // Continue the native producer with its final cursor/palette, while the
    // binding restores only the parent output ownership and clipping state.
    const auto continuation = NativeDfhackOutputBinding::capture(*gps);
    native_designation_restore_output();
    continuation.apply_draw(*gps);
    layer.ready = !layer.frames.empty();
}

static void native_designation_begin_frame() {
    native_designation_restore_output();
    g_native_designation_begin_attempted = false;
    auto &layer = g_native_designation_layer;
    for (const auto &frame : layer.frames) layer.foreground.clear(frame);
    layer.frames.clear();
    layer.ready = false;
    layer.native_renderer = nullptr;
    layer.renderer = nullptr;
    g_native_designation_text.clear();
}
