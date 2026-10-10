// stocks_interfacest is a separate legacy component, outside info_interfacest.
// Redirect its native stores and caption captures together; the main screen
// retains only the exposed fortress HUD and map.
static NativeUiLayerStorage g_native_stocks_layer;
static NativeInfoCapturedText g_native_stocks_text;
static const unsigned char *g_native_stocks_background_grid = nullptr;
static const graphicst *g_native_stocks_background_graphics = nullptr;
static SDL_Rect g_native_stocks_panel{};
static int g_native_stocks_category_right = 0;
static int16_t g_native_stocks_current_type = -1;
static uintptr_t g_native_stocks_category_caller = 0;
static uintptr_t g_native_stocks_group_caller = 0;
static uintptr_t g_native_stocks_item_caller = 0;
static uintptr_t g_native_stocks_filter_caller = 0;

static bool native_stocks_background_view(const graphicst *graphics) noexcept {
    return graphics && g_native_stocks_layer.ready && !g_native_info_foreground &&
        graphics != g_native_stocks_write_graphics &&
        graphics->screen == g_native_stocks_background_grid;
}

static bool native_stocks_background_cell_hidden(const graphicst *graphics,
        int x, int y) noexcept {
    return graphics && g_native_stocks_layer.ready &&
        (graphics == g_native_stocks_background_graphics ||
            graphics->screen == g_native_stocks_background_grid) &&
        graphics != g_native_stocks_write_graphics &&
        graphics != g_native_info_write_graphics &&
        graphics != g_native_help_write_graphics &&
        x >= g_native_stocks_panel.x && y >= g_native_stocks_panel.y &&
        x < g_native_stocks_panel.x + g_native_stocks_panel.w &&
        y < g_native_stocks_panel.y + g_native_stocks_panel.h;
}

static bool native_stocks_background_copy_hidden(SDL_Renderer *renderer,
        const SDL_Rect *destination) noexcept {
    if (!destination || destination->w <= 0 || destination->h <= 0 ||
            !g_native_stocks_layer.ready || renderer != g_native_stocks_layer.renderer ||
            SDL_GetRenderTarget(renderer)) return false;
    const auto *graphics = native_graphics();
    if (!graphics || graphics->screen != g_native_stocks_background_grid ||
            graphics->tile_pixel_x <= 0 || graphics->tile_pixel_y <= 0) return false;
    const int tile_x = graphics->tile_pixel_x, tile_y = graphics->tile_pixel_y;
    const int origin_x = (graphics->screen_pixel_x - tile_x * graphics->dimx) / 2;
    const int origin_y = (graphics->screen_pixel_y - tile_y * graphics->dimy) / 2;
    const int left = origin_x + g_native_stocks_panel.x * tile_x;
    const int top = origin_y + g_native_stocks_panel.y * tile_y;
    return destination->x >= left && destination->y >= top &&
        int64_t(destination->x) + destination->w <= left + g_native_stocks_panel.w * tile_x &&
        int64_t(destination->y) + destination->h <= top + g_native_stocks_panel.h * tile_y;
}

static void native_stocks_begin_frame() {
    g_native_stocks_layer.ready = false;
    g_native_stocks_layer.frames.clear();
    g_native_stocks_layer.native_renderer = nullptr;
    g_native_stocks_layer.renderer = nullptr;
    g_native_stocks_text.clear();
    g_native_stocks_background_grid = nullptr;
    g_native_stocks_background_graphics = nullptr;
    g_native_stocks_panel = {};
    g_native_stocks_category_right = 0;
    g_native_stocks_current_type = -1;
    NativeUiReadScope::invalidate_reads();
}
