// Tooltip producers write into a sparse output grid before their background,
// border, body or keys can overwrite the native page. No page snapshot is
// needed, and only these submitted card bounds enter tooltip translation.
static NativeUiLayerStorage g_native_tooltip_layer;
static std::vector<NativeTooltipWidgetFrame> g_native_tooltip_frames;
static std::vector<SDL_Rect> g_native_tooltip_write_bounds;
static SDL_Rect g_native_tooltip_draw_bounds{};
static NativeInfoCapturedText g_native_tooltip_text;
static std::optional<NativeBitmapFontTextures> g_native_tooltip_fonts;
static std::unique_ptr<NativeUiGridBinding> g_native_tooltip_output;
static std::unique_ptr<NativeInfoCapturedTextScope> g_native_tooltip_captions;
static std::unique_ptr<TranslationStateScope> g_native_tooltip_translation;

// Native addst can leave a font-atlas tile after clearing its character
// byte. Both forms identify the same submitted glyph; artwork never proves
// a source letter merely by occupying the same tooltip cell.
static bool native_tooltip_glyph_at(const graphicst &gps, int x, int y,
        unsigned char expected, bool top_layer) {
    if (x < 0 || x >= gps.dimx || y < 0 || y >= gps.dimy || !expected) return false;
    const auto *screen = top_layer ? gps.screen_top : gps.screen;
    if (!screen) return false;
    const size_t tile = static_cast<size_t>(x) * gps.dimy + y;
    const auto ch = screen[tile * 8];
    if (ch == expected) return true;
    if ((ch != 0 && ch != ' ') || expected == ' ' || !g_native_tooltip_fonts) return false;
    const auto textures = top_layer
        ? std::array{gps.screentexpos_top, gps.screentexpos_top_lower, gps.screentexpos_top_anchored}
        : std::array{gps.screentexpos, gps.screentexpos_lower, gps.screentexpos_anchored};
    return std::any_of(textures.begin(), textures.end(), [&](const auto *atlas) {
        return atlas && g_native_tooltip_fonts->contains(atlas[tile], expected);
    });
}

static const unsigned char *native_tooltip_source_cell(const graphicst &gps,
        int x, int y, unsigned char expected) {
    if (x < 0 || x >= gps.dimx || y < 0 || y >= gps.dimy) return nullptr;
    const size_t at = (static_cast<size_t>(x) * gps.dimy + y) * 8;
    if (gps.top_in_use && native_tooltip_glyph_at(gps, x, y, expected, true))
        return gps.screen_top + at;
    if (native_tooltip_glyph_at(gps, x, y, expected, false)) return gps.screen + at;
    return nullptr;
}

static bool native_tooltip_begin_draw(NativeTooltipWidgetFrame &frame) {
    try {
        // Legacy cards also contain inline native stores between our call
        // hooks. Keep the same state lock as help/info across that interval.
        auto translation = std::make_unique<TranslationStateScope>();
        auto *gps = native_graphics();
        auto &layer = g_native_tooltip_layer;
        if (!gps || !gps->screen || !gps->screen_top || g_native_tooltip_output ||
                !g_native_help_layer.native_renderer ||
                !g_native_help_layer.renderer || gps->dimx <= 0 || gps->dimx > 1000 ||
                gps->dimy <= 0 || gps->dimy > 1000 || frame.dimx != gps->dimx ||
                frame.dimy != gps->dimy ||
                !native_tooltip_valid_bounds(*gps, frame.bounds)) return false;
        if (layer.ready && (layer.foreground.dimx != gps->dimx ||
                layer.foreground.dimy != gps->dimy)) return false;
        // Refresh the current cursor, clipping and palette even when another
        // tooltip has already submitted pixels to this frame's output grid.
        // Later cards retain that lower output wherever their clip writes no
        // replacement. The next native frame retires submitted rectangles.
        layer.foreground.prepare(*gps);
        if (!g_native_tooltip_fonts) g_native_tooltip_fonts.emplace(true);
        layer.frames.reserve(layer.frames.size() + 1);
        g_native_tooltip_frames.reserve(g_native_tooltip_frames.size() + 1);
        g_native_tooltip_write_bounds.reserve(g_native_tooltip_write_bounds.size() + 1);
        const auto &box = frame.bounds;
        const SDL_Rect visible = native_tooltip_visible_bounds(*gps, box);
        frame.occlusions.reserve(frame.occlusions.size() + 4);
        if (visible.w <= 0 || visible.h <= 0) frame.occlusions.push_back(box);
        else {
            if (visible.y > box.y)
                frame.occlusions.push_back({box.x, box.y, box.w, visible.y - box.y});
            if (visible.y + visible.h < box.y + box.h)
                frame.occlusions.push_back({box.x, visible.y + visible.h, box.w,
                    box.y + box.h - visible.y - visible.h});
            if (visible.x > box.x)
                frame.occlusions.push_back({box.x, visible.y, visible.x - box.x, visible.h});
            if (visible.x + visible.w < box.x + box.w)
                frame.occlusions.push_back({visible.x + visible.w, visible.y,
                    box.x + box.w - visible.x - visible.w, visible.h});
        }
        auto captions = std::make_unique<NativeInfoCapturedTextScope>(
            g_native_tooltip_text);
        auto output = std::make_unique<NativeUiGridBinding>(
            gps, *layer.foreground.graphics());
        // Restrict only this temporary native output. The binding preserves
        // the parent's complete cursor and clip state for its continuation.
        const std::array<long, 2> clipx{visible.x, static_cast<long>(visible.x) + visible.w - 1};
        const std::array<long, 2> clipy{visible.y, static_cast<long>(visible.y) + visible.h - 1};
        native_graphics_write_member(gps, offsetof(graphicst, clipx), clipx);
        native_graphics_write_member(gps, offsetof(graphicst, clipy), clipy);
        layer.native_renderer = g_native_help_layer.native_renderer;
        layer.renderer = g_native_help_layer.renderer;
        frame.isolated = true;
        frame.grid_identity = gps->screen;
        frame.page.reset();
        frame.document.reset();
        g_native_tooltip_write_bounds.push_back(visible);
        g_native_tooltip_draw_bounds = visible;
        g_native_tooltip_captions = std::move(captions);
        g_native_tooltip_output = std::move(output);
        g_native_tooltip_translation = std::move(translation);
        return true;
    } catch (...) { return false; }
}

static void native_tooltip_end_draw(NativeTooltipWidgetFrame &frame) {
    if (!frame.isolated || !g_native_tooltip_output) return;
    auto &layer = g_native_tooltip_layer;
    layer.foreground.graphics()->top_in_use = native_graphics()->top_in_use;
    try {
        layer.frames.push_back(g_native_tooltip_draw_bounds);
        g_native_tooltip_frames.push_back(std::move(frame));
        layer.ready = true;
    } catch (...) {}
    g_native_tooltip_output.reset();
    g_native_tooltip_captions.reset();
    g_native_tooltip_translation.reset();
}

static void native_tooltip_restore_output() {
    g_native_tooltip_output.reset();
    g_native_tooltip_captions.reset();
    g_native_tooltip_translation.reset();
}

static void native_tooltip_begin_frame() {
    native_tooltip_restore_output();
    // Retire only the rectangles submitted by the previous native producer.
    // The absolute-address arrays remain allocated without scanning a page.
    for (const auto &frame : g_native_tooltip_write_bounds)
        g_native_tooltip_layer.foreground.clear(frame);
    g_native_tooltip_write_bounds.clear();
    g_native_tooltip_draw_bounds = {};
    g_native_tooltip_layer.ready = false;
    g_native_tooltip_layer.frames.clear();
    g_native_tooltip_layer.native_renderer = nullptr;
    g_native_tooltip_layer.renderer = nullptr;
    g_native_tooltip_frames.clear();
    g_native_tooltip_text.clear();
    g_native_tooltip_fonts.reset();
}
