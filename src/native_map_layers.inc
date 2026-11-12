// Map glyphs and artwork are produced independently of every text layer.
// The main grid consequently contains only native interface writers.
static NativeUiLayerStorage g_native_map_layer;
static const unsigned char *g_native_map_background_grid = nullptr;
static const unsigned char *g_native_map_mixed_grid = nullptr;
static const graphicst *g_native_map_write_graphics = nullptr;
static uint64_t g_native_map_frame_serial = 0;
static bool g_native_map_classic = false;
static void native_map_begin_frame();
#ifndef _WIN32
static void native_map_restore_missing_outputs();
#endif

// Save only completed native map ownership. The private glyph header is
// prepared before the producer runs and may precede its final map bindings.
struct NativeMapDisplaySource {
    uint64_t serial = 0;
    int dimx = 0, dimy = 0;
    int screen_pixel_x = 0, screen_pixel_y = 0;
    int tile_pixel_x = 0, tile_pixel_y = 0;
    int viewport_zoom_factor = 0;
    const void *main_viewport = nullptr, *main_map_port = nullptr;
    std::array<const void *, 8> lower_viewport{};
};
static NativeMapDisplaySource g_native_map_display_source;
static void bind_native_map_display_frame(const graphicst *graphics) noexcept;

static bool native_map_background_view(const graphicst *graphics) noexcept {
    return graphics && g_native_map_layer.ready &&
        !g_native_map_write_graphics &&
        graphics->screen == g_native_map_background_grid;
}

// A failed private producer leaves terrain in this exact native source.
// The map's own private output is also artwork, never an interface document.
// Independent UI grids keep their own pointers and remain readable.
static bool native_map_artwork_grid(const unsigned char *screen) noexcept {
    if (!screen) return false;
    if (g_native_map_mixed_grid && screen == g_native_map_mixed_grid) return true;
    auto &map_grid = g_native_map_layer.foreground;
    return map_grid.dimx > 0 && map_grid.dimy > 0 &&
        (screen == map_grid.graphics()->screen || screen == map_grid.graphics()->screen_top);
}

static bool native_map_mixed_view(const graphicst *graphics) noexcept {
    return graphics && native_map_artwork_grid(graphics->screen);
}
