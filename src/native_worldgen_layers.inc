// viewscreen_new_regionst owns a complete native page. Its output and actual
// caption writers never share the main page's matching or capture registries.
static NativeUiLayerStorage g_native_worldgen_layer;
static NativeInfoCapturedText g_native_worldgen_text;
static const graphicst *g_native_worldgen_background_graphics = nullptr;
static const unsigned char *g_native_worldgen_background_grid = nullptr;
static uintptr_t g_native_worldgen_owner = 0;
static std::array<uintptr_t, 3> g_native_worldgen_edit_returns{};
static bool g_native_worldgen_parameter_name_editing = false;
static uint64_t g_native_worldgen_published_revision = 0;
static uint64_t g_native_worldgen_consumed_revision = 0;

static bool native_worldgen_output_active(const graphicst *graphics) noexcept {
    // A nested help component temporarily redirects the same native gps.
    // Its captions belong to the help grid, not the parent's field catalog.
    return graphics && graphics != g_native_help_write_graphics &&
        (graphics == g_native_worldgen_write_graphics ||
        (g_native_worldgen_layer.ready &&
            graphics == g_native_worldgen_layer.foreground.graphics()));
}

static bool native_worldgen_main_view(const graphicst *graphics) noexcept {
    // Windows display and Present bind their current native buffer after
    // confirming the published page owner. Match that grid, not the producer's
    // header address or its earlier member of the native double buffer.
    return graphics && g_native_worldgen_layer.ready && g_native_worldgen_owner &&
        native_current_viewscreen() == g_native_worldgen_owner &&
        graphics->screen == g_native_worldgen_background_grid &&
        !native_worldgen_output_active(graphics) &&
        graphics->dimx == g_native_worldgen_layer.foreground.dimx &&
        graphics->dimy == g_native_worldgen_layer.foreground.dimy;
}

static bool native_worldgen_has_frame() noexcept {
    return g_native_worldgen_layer.ready && g_native_worldgen_owner &&
        g_native_worldgen_background_graphics && g_native_worldgen_background_grid;
}

static bool native_worldgen_exclusive_output() {
    const auto screen = native_current_viewscreen();
    if (!screen || !native_history_object_is(screen, "viewscreen_new_regionst")) return false;
    return native_worldgen_has_frame() && g_native_worldgen_owner == screen;
}

static bool native_worldgen_shared_view(const graphicst *graphics) {
#ifdef _WIN32
    if (!graphics || !native_display_worldgen_page() || native_worldgen_output_active(graphics) ||
            native_worldgen_main_view(graphics) || native_private_ui_write_active(graphics)) return false;
    // Optional private components can render over worldgen. The current
    // page type must never reclassify their separate grids as shared input.
    const auto *display = native_dfhack_render_read_graphics();
    if (!display || graphics->screen != display->screen ||
            graphics->screen_top != display->screen_top ||
            graphics->dimx != display->dimx || graphics->dimy != display->dimy) return false;
    return true;
#else
    (void)graphics;
    return false;
#endif
}

// A mixed producer cannot authorize raw-grid discovery. Its independently
// completed string writes can still use the shared native raster boundary.
static bool native_captured_ui_view(const graphicst *graphics) {
    return native_map_mixed_view(graphics) || native_worldgen_shared_view(graphics);
}

static bool native_worldgen_consume_frame_submission() noexcept {
    if (!g_native_worldgen_layer.ready ||
            g_native_worldgen_consumed_revision == g_native_worldgen_published_revision)
        return false;
    g_native_worldgen_consumed_revision = g_native_worldgen_published_revision;
    return true;
}

static void native_worldgen_begin_frame() {
    g_native_worldgen_layer.ready = false;
    g_native_worldgen_layer.frames.clear();
    g_native_worldgen_layer.collapsed_titles.clear();
    g_native_worldgen_layer.native_renderer = nullptr;
    g_native_worldgen_layer.renderer = nullptr;
    g_native_worldgen_text.clear();
    g_native_worldgen_background_graphics = nullptr;
    g_native_worldgen_background_grid = nullptr;
    g_native_worldgen_owner = 0;
    g_native_worldgen_panel = {};
    g_native_worldgen_parameter_name_editing = false;
    NativeUiReadScope::invalidate_reads();
}
