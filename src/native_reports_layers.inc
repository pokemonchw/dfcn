// announcements_interfacest owns the complete fortress report window and
// every category tab. Keep its native stores and caption ownership together.
static NativeUiLayerStorage g_native_reports_layer;
static NativeInfoCapturedText g_native_reports_text;
static const unsigned char *g_native_reports_background_grid = nullptr;
static const graphicst *g_native_reports_background_graphics = nullptr;
static SDL_Rect g_native_reports_panel{};
struct NativeReportsTab {
    int x, y;
    std::string source;
};
static std::vector<NativeReportsTab> g_native_reports_tabs;

static bool native_reports_background_view(const graphicst *graphics) noexcept {
    return graphics && g_native_reports_layer.ready && !g_native_info_foreground &&
        graphics != g_native_reports_write_graphics &&
        graphics->screen == g_native_reports_background_grid;
}

static bool native_reports_background_cell_hidden(const graphicst *graphics,
        int x, int y) noexcept {
    return graphics && g_native_reports_layer.ready &&
        (graphics == g_native_reports_background_graphics ||
            graphics->screen == g_native_reports_background_grid) &&
        graphics != g_native_reports_write_graphics &&
        graphics != g_native_info_write_graphics &&
        graphics != g_native_stocks_write_graphics &&
        graphics != g_native_display_write_graphics &&
        graphics != g_native_squads_write_graphics &&
        graphics != g_native_help_write_graphics &&
        !native_notification_write_active(graphics) &&
        graphics != g_native_pause_write_graphics &&
        x >= g_native_reports_panel.x && y >= g_native_reports_panel.y &&
        x < g_native_reports_panel.x + g_native_reports_panel.w &&
        y < g_native_reports_panel.y + g_native_reports_panel.h;
}

static bool native_reports_background_copy_hidden(SDL_Renderer *renderer,
        const SDL_Rect *destination) noexcept {
    if (!destination || destination->w <= 0 || destination->h <= 0 ||
            !g_native_reports_layer.ready || renderer != g_native_reports_layer.renderer ||
            SDL_GetRenderTarget(renderer)) return false;
    const auto *graphics = native_graphics();
    if (!graphics || graphics->screen != g_native_reports_background_grid ||
            graphics->tile_pixel_x <= 0 || graphics->tile_pixel_y <= 0) return false;
    const int tile_x = graphics->tile_pixel_x, tile_y = graphics->tile_pixel_y;
    const int origin_x = (graphics->screen_pixel_x - tile_x * graphics->dimx) / 2;
    const int origin_y = (graphics->screen_pixel_y - tile_y * graphics->dimy) / 2;
    const int left = origin_x + g_native_reports_panel.x * tile_x;
    const int top = origin_y + g_native_reports_panel.y * tile_y;
    return destination->x >= left && destination->y >= top &&
        int64_t(destination->x) + destination->w <= left + g_native_reports_panel.w * tile_x &&
        int64_t(destination->y) + destination->h <= top + g_native_reports_panel.h * tile_y;
}

static void native_reports_begin_frame() {
    g_native_reports_tabs.clear();
    g_native_reports_layer.ready = false;
    g_native_reports_layer.frames.clear();
    g_native_reports_layer.native_renderer = nullptr;
    g_native_reports_layer.renderer = nullptr;
    g_native_reports_text.clear();
    g_native_reports_background_grid = nullptr;
    g_native_reports_background_graphics = nullptr;
    g_native_reports_panel = {};
    NativeUiReadScope::invalidate_reads();
}
