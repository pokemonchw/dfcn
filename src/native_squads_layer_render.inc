// squads_interfacest is a legacy component. Redirect the whole native draw
// before its frame, controls, list records and child pages write to gps.
static NativeUiLayerTarget g_native_squads_target;
#ifdef _WIN32
static NativeEntryHook g_native_squads_draw_hook;
static NativeCallHook g_native_squads_member_cursor_hook;
static uintptr_t g_native_squads_owner = 0;
using NativeSquadsDrawFn = void (*)(void *, uint32_t, int32_t, int32_t);
using NativeSquadsCursorFn = void (*)(graphicst *, int32_t, int32_t);
static NativeSquadsCursorFn g_native_squads_member_cursor_original = nullptr;
static void uninstall_native_squads_layer_hook();

static void capture_native_squads_member_cursor(graphicst *graphics,
        int32_t y, int32_t x) {
    graphics = native_graphics_view(graphics);
    NativeInputCallbackScope callback;
    const auto original = g_native_squads_member_cursor_original;
    if (!original) return;
    callback.call_native([&] { native_graphics_call(original, graphics, y, x); });
    if (!graphics || graphics != g_native_squads_write_graphics) return;
    try {
        const auto &panel = g_native_squads_panel;
        if (x < panel.x || x >= panel.x + panel.w ||
                y < panel.y || y >= panel.y + panel.h) return;
        // The native member selector writes four cells on each of three
        // rows. Retain its first column for each row, including the native
        // scrollbar adjustment, before the name and order writers run.
        const auto found = std::find_if(g_native_squads_member_columns.begin(),
            g_native_squads_member_columns.end(),
            [&](const SDL_Rect &column) { return column.y == y; });
        if (found == g_native_squads_member_columns.end())
            g_native_squads_member_columns.push_back(SDL_Rect{x, y, 4, 1});
        else found->x = std::min(found->x, static_cast<int>(x));
    } catch (...) {}
}

static void native_squads_draw(void *squads, uint32_t tick, int32_t screen_left,
        int32_t screen_right) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeSquadsDrawFn>(g_native_squads_draw_hook.original);
    if (!original) return;
    TranslationStateScope translation;
    auto &layer = g_native_squads_layer;
    auto *gps = native_graphics();
    bool isolate = reinterpret_cast<uintptr_t>(squads) == g_native_squads_owner &&
        gps && g_native_help_layer.native_renderer && g_native_help_layer.renderer &&
        !g_native_squads_write_graphics && !g_native_info_write_graphics &&
        !g_native_stocks_write_graphics && !g_native_reports_write_graphics &&
        !g_native_display_write_graphics &&
        !native_notification_write_active(gps) && !g_native_pause_write_graphics &&
        !g_native_tooltip_output && !native_private_ui_write_active(gps) &&
        gps->screen && gps->screen_top && gps->dimx > 0 && gps->dimx <= 1000 &&
        gps->dimy > 0 && gps->dimy <= 1000;
    int32_t schedule_id = -1;
    if (isolate && !native_object_read_member(squads,
            {0xb4, "squads_interfacest", "editing_squad_schedule_id"}, schedule_id))
        isolate = false;
    const int left = gps ? static_cast<int>(std::clamp<int64_t>(
        int64_t(screen_right) - (schedule_id == -1 ? 27 : 47), 0, gps->dimx)) : 0;
    const int right = gps ? std::min(screen_right, gps->dimx - 1) : -1;
    const auto *settings = native_ui_settings_source();
    int grid_y = gps ? gps->dimy : 0;
    // The producer's opaque sidebar includes init.display.grid_y - 4.
    native_ui_settings_read_member(settings, 0x18, grid_y);
    const int bottom = gps ? std::min(gps->dimy - 1, grid_y - 4) : -1;
    isolate = isolate && left <= right && bottom >= 18;
    const SDL_Rect panel{left, 18, right - left + 1, bottom - 17};
    if (isolate) {
        try {
            if (!layer.ready) {
                const bool resized = layer.foreground.dimx != gps->dimx ||
                    layer.foreground.dimy != gps->dimy;
                layer.foreground.prepare(*gps);
                // Newly allocated/restrided storage may be initialized in
                // full once. Ordinary frames touch only this sidebar.
                if (resized) layer.foreground.clear();
                else layer.foreground.clear(panel);
            } else if (layer.foreground.dimx != gps->dimx || layer.foreground.dimy != gps->dimy) {
                isolate = false;
            }
            // The sidebar owns only this rectangle. Full-grid storage keeps
            // native coordinates, but never grants full-screen paint ownership.
            if (isolate) layer.frames = {panel};
        } catch (...) { isolate = false; }
    }
    if (!isolate) {
        callback.call_native([&] { original(squads, tick, screen_left, screen_right); });
        return;
    }
    g_native_squads_background_grid = gps->screen;
    g_native_squads_background_top_grid = gps->screen_top;
    g_native_squads_panel = panel;
    g_native_squads_member_columns.clear();
    layer.native_renderer = g_native_help_layer.native_renderer;
    layer.renderer = g_native_help_layer.renderer;
    {
        std::optional<NativeUiGridBinding> output;
        if (!native_ui_bind_grid(output, gps, *layer.foreground.graphics())) {
            layer.ready = false;
            g_native_squads_background_grid = nullptr;
            g_native_squads_background_top_grid = nullptr;
            callback.call_native([&] { original(squads, tick, screen_left, screen_right); });
            return;
        }
        NativeInfoCapturedTextScope captions(g_native_squads_text);
        struct WriteScope {
            const graphicst *previous = g_native_squads_write_graphics;
            explicit WriteScope(const graphicst *graphics) { g_native_squads_write_graphics = graphics; }
            ~WriteScope() { g_native_squads_write_graphics = previous; }
        } writing(gps);
        callback.call_native([&] { original(squads, tick, screen_left, screen_right); });
        native_graphics_read_member(gps, offsetof(graphicst, top_in_use),
            layer.foreground.graphics()->top_in_use);
    }
    layer.ready = true;
    NativeUiReadScope::invalidate_reads();
    // Consume only the writers submitted by this original draw. Present
    // reuses this component's text list rather than discovering it in a grid.
    native_squads_prepare_text();
}

static bool install_native_squads_layer_hook() {
    if (g_native_squads_draw_hook.installed) return true;
    if (g_native_squads_draw_hook.active() || g_native_squads_member_cursor_hook.active()) {
        uninstall_native_squads_layer_hook();
        if (g_native_squads_draw_hook.active() || g_native_squads_member_cursor_hook.active())
            return false;
    }
    constexpr const char *label = "Native fortress Squads component draw entry";
    const auto base = native_history_profile_base();
    auto *draw = reinterpret_cast<unsigned char *>(native_reference_address(base, 0x4411f0));
    const auto owner = native_reference_address(base, 0x18a6ff8);
    g_native_squads_member_cursor_original = reinterpret_cast<NativeSquadsCursorFn>(
        native_reference_address(base, 0xbb120));
    struct InstallGuard {
        bool committed = false;
        ~InstallGuard() { if (!committed) uninstall_native_squads_layer_hook(); }
    } guard;
    // Complete position-independent MOV [RSP+0x10],RBX. The direct native
    // caller passes (squads, tick, screen_left, screen_right) in both editions.
    std::vector<unsigned char> prefix{0x48,0x89,0x5c,0x24,0x10};
    if (!owner || !draw ||
            !native_reference_bytes(0x4411f0, prefix) ||
            !g_native_squads_draw_hook.prepare(draw, prefix,
                reinterpret_cast<const void *>(&native_squads_draw), {}, label)) return false;
    g_native_squads_owner = owner;
    const auto caller = [](uintptr_t address) {
        return address ? address + 5 : 0;
    };
    g_native_squads_footer_callers = {
        caller(native_reference_address(base, 0x44659d)),
        caller(native_reference_address(base, 0x4465e1)),
        caller(native_reference_address(base, 0x446625)),
        caller(native_reference_address(base, 0x446669)),
    };
    g_native_squads_member_name_caller = caller(native_reference_address(base, 0x444605));
    g_native_squads_member_order_caller = caller(native_reference_address(base, 0x44475b));
    g_native_squads_equipment_callers = {
        caller(native_reference_address(base, 0x450a50)),
        caller(native_reference_address(base, 0x450ed6)),
        caller(native_reference_address(base, 0x4512ab)),
        caller(native_reference_address(base, 0x4516ec)),
    };
    // Occupied members in graphical and classic mode share this 4x3
    // selection-control loop. The native cursor signature is (gps, y, x).
    std::vector<NativeCall> calls{
        {0x44434d, 0xbb120,
            reinterpret_cast<const void *>(&capture_native_squads_member_cursor)},
    };
    bool member_columns = false;
    try {
        member_columns = g_native_squads_member_cursor_original && native_reference_calls(calls, 0) &&
            g_native_squads_member_cursor_hook.install(base, calls,
                "Native Squads member column source");
    } catch (...) {}
    if (!member_columns) {
        if (!g_native_squads_member_cursor_hook.uninstall("Native Squads member column source restore") ||
                g_native_squads_member_cursor_hook.active()) return false;
        g_native_squads_member_cursor_original = nullptr;
        log_line("WARN", "Native Squads member column extension deferred; captured sidebar text remains enabled");
    }
    if (!g_native_squads_draw_hook.install(label)) return false;
    guard.committed = true;
    log_line("INFO", "Redirected the complete Squads sidebar and its child pages to a private output layer");
    return true;
}

static void uninstall_native_squads_layer_hook() {
    g_native_squads_draw_hook.uninstall("Native fortress Squads draw entry restore");
    g_native_squads_member_cursor_hook.uninstall("Native Squads member column source restore");
    if (!g_native_squads_draw_hook.active() && !g_native_squads_member_cursor_hook.active()) {
        g_native_squads_owner = 0;
        g_native_squads_member_cursor_original = nullptr;
        g_native_squads_member_name_caller = 0;
        g_native_squads_member_order_caller = 0;
        g_native_squads_footer_callers = {};
        g_native_squads_equipment_callers = {};
        g_native_squads_target.release();
        native_squads_begin_frame();
        g_native_squads_layer = {};
        g_native_squads_text = {};
    }
}
static bool native_squads_layer_hook_active() {
    return g_native_squads_draw_hook.active() || g_native_squads_member_cursor_hook.active();
}
#else
// No PE address is used as an ELF binding. Preserve the existing Linux path
// until this component's native producer has an established ELF owner.
static bool install_native_squads_layer_hook() { return true; }
static void uninstall_native_squads_layer_hook() { g_native_squads_target.release(); }
static bool native_squads_layer_hook_active() { return false; }
#endif

static void native_squads_present_layer(SDL_Renderer *renderer,
        void (*draw_squads)(SDL_Renderer *)) {
    TranslationStateScope translation;
    auto &layer = g_native_squads_layer;
    if (!renderer || !draw_squads || !layer.ready || layer.renderer != renderer) return;
    const auto *gps = layer.foreground.graphics();
    if (gps->tile_pixel_x <= 0 || gps->tile_pixel_y <= 0) return;
    // Native tiles and translated fields use this screen-pixel space.
    // SDL logical dimensions can describe a differently scaled window;
    // clamping native sidebar coordinates to them can erase its entire width.
    const int width = gps->screen_pixel_x, height = gps->screen_pixel_y;
    if (width <= 0 || height <= 0) return;
    const int64_t tile_x = gps->tile_pixel_x, tile_y = gps->tile_pixel_y;
    const int64_t origin_x = (gps->screen_pixel_x - tile_x * gps->dimx) / 2;
    const int64_t origin_y = (gps->screen_pixel_y - tile_y * gps->dimy) / 2;
    const auto &panel = g_native_squads_panel;
    const int left = static_cast<int>(std::clamp<int64_t>(origin_x + panel.x * tile_x, 0, width));
    const int top = static_cast<int>(std::clamp<int64_t>(origin_y + panel.y * tile_y, 0, height));
    const int right = static_cast<int>(std::clamp<int64_t>(
        origin_x + (int64_t(panel.x) + panel.w) * tile_x, 0, width));
    const int bottom = static_cast<int>(std::clamp<int64_t>(
        origin_y + (int64_t(panel.y) + panel.h) * tile_y, 0, height));
    if (right <= left || bottom <= top) return;
    const SDL_Rect pixels{left, top, right - left, bottom - top};
    NativeUiLayerSdlState state(renderer);
    struct DrawingScope {
        bool previous = g_drawing_overlay;
        DrawingScope() { g_drawing_overlay = true; }
        ~DrawingScope() { g_drawing_overlay = previous; }
    } drawing;
    // Never draw this component directly onto the shared destination. The
    // private target plus a cropped copy enforce ownership even if native
    // anchored artwork extends beyond its originating cell.
    // Retain absolute native coordinates in the independent texture. Only
    // the sidebar rectangle is cleared, painted and copied; allocating this
    // coordinate space does not discover or draw any background grid cells.
    if (!g_native_squads_target.prepare(renderer, width, height) ||
            !state.bind(g_native_squads_target.texture, width, height)) return;
    SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_NONE);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    if (SDL_RenderSetClipRect(renderer, &pixels) != 0 ||
            SDL_RenderFillRect(renderer, &pixels) != 0) return;
    draw_squads(renderer);
    if (!state.bind_composite(width, height) || SDL_RenderSetClipRect(renderer, &pixels) != 0) return;
    // Source and destination share one native screen-pixel coordinate space.
    // Pixels outside the sidebar are never submitted to the shared target.
    SDL_RenderCopy(renderer, g_native_squads_target.texture, &pixels, &pixels);
}
