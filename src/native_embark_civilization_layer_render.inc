static NativeUiLayerTarget g_native_embark_civilization_target;
#ifdef _WIN32
static NativeEntryHook g_native_embark_civilization_owner_hook;
static NativeCallHook g_native_embark_civilization_producer_hooks;
using NativeEmbarkCivilizationCursorFn = void (*)(graphicst *, int32_t, int32_t);
using NativeEmbarkCivilizationViewportFn = void (*)(const void *, int32_t *, int32_t *);
static NativeEmbarkCivilizationCursorFn g_native_embark_civilization_cursor = nullptr;
static NativeEmbarkCivilizationViewportFn g_native_embark_civilization_viewport = nullptr;
static void (*g_native_embark_civilization_help)(void *) = nullptr;
static void uninstall_native_embark_civilization_layer_hook();

static void native_embark_civilization_owner(void *screen) {
    NativeInputCallbackScope callback;
    TranslationStateScope translation;
    const auto original = reinterpret_cast<void (*)(void *)>(
        g_native_embark_civilization_owner_hook.original);
    if (!original) return;
    struct Finish {
        ~Finish() { native_embark_civilization_end_draw(); }
    } finish;
    callback.call_native([&] { original(screen); });
}

static void native_embark_civilization_frame_cursor(graphicst *graphics, int32_t y, int32_t x) {
    graphics = native_graphics_view(graphics);
    NativeInputCallbackScope callback;
    TranslationStateScope translation;
    if (!g_native_embark_civilization_cursor) return;
    // PE 1051a88..1051b53 draws [right-37,right] x [0,40].
    // The first actual frame write supplies its origin; no screen search or
    // title, selection state, map position or resolution heuristic is needed.
    if (graphics == native_graphics() && !g_native_embark_civilization_capture_attempted)
        native_embark_civilization_begin_draw(SDL_Rect{x, y, 38, 41});
    callback.call_native([&] { native_graphics_call(g_native_embark_civilization_cursor, graphics, y, x); });
}

static void native_embark_civilization_box_cursor(graphicst *graphics, int32_t y, int32_t x) {
    graphics = native_graphics_view(graphics);
    NativeInputCallbackScope callback;
    TranslationStateScope translation;
    if (!g_native_embark_civilization_cursor) return;
    // This caller is the first row of each four-column native checkbox.
    // Save its first column once, before artwork covers the name's suffix.
    if (graphics == g_native_embark_civilization_write_graphics) {
        const auto &panel = g_native_embark_civilization_panel;
        auto &boxes = g_native_embark_civilization_boxes;
        if (x >= panel.x && y >= panel.y && x + 4 <= panel.x + panel.w &&
                y + 3 <= panel.y + panel.h &&
                std::none_of(boxes.begin(), boxes.end(),
                    [&](const SDL_Rect &box) { return box.y == y; })) {
            try { boxes.push_back({x, y, 4, 3}); } catch (...) {}
        }
    }
    callback.call_native([&] { native_graphics_call(g_native_embark_civilization_cursor, graphics, y, x); });
}

static void native_embark_civilization_end_viewport(const void *settings,
        int32_t *left, int32_t *right) {
    NativeInputCallbackScope callback;
    TranslationStateScope translation;
    native_embark_civilization_end_draw();
    if (g_native_embark_civilization_viewport)
        callback.call_native([&] { g_native_embark_civilization_viewport(settings, left, right); });
}

static void native_embark_civilization_end_help(void *help) {
    NativeInputCallbackScope callback;
    TranslationStateScope translation;
    native_embark_civilization_end_draw();
    if (g_native_embark_civilization_help)
        callback.call_native([&] { g_native_embark_civilization_help(help); });
}

static bool install_native_embark_civilization_layer_hook() {
    if (g_native_embark_civilization_owner_hook.installed &&
            g_native_embark_civilization_producer_hooks.installed) return true;
    if (g_native_embark_civilization_owner_hook.active() ||
            g_native_embark_civilization_producer_hooks.active()) {
        uninstall_native_embark_civilization_layer_hook();
        if (g_native_embark_civilization_owner_hook.active() ||
                g_native_embark_civilization_producer_hooks.active()) return false;
    }
    const auto base = native_history_profile_base();
    const auto cursor = native_reference_address(base, 0xbb120);
    const auto viewport = native_reference_address(base, 0x41f640);
    const auto help = native_reference_address(base, 0x1e8b20);
    auto *owner = reinterpret_cast<unsigned char *>(native_reference_address(base, 0x1046410));
    std::vector<unsigned char> prefix{0x48,0x89,0x5c,0x24,0x10};
    constexpr auto label = "Native embark civilization producer ownership";
    if (!base || !cursor || !viewport || !help || !owner ||
            !native_reference_bytes(0x1046410, prefix) ||
            !g_native_embark_civilization_owner_hook.prepare(owner, prefix,
                reinterpret_cast<const void *>(&native_embark_civilization_owner), {}, label))
        return false;
    g_native_embark_civilization_cursor = reinterpret_cast<NativeEmbarkCivilizationCursorFn>(cursor);
    g_native_embark_civilization_viewport = reinterpret_cast<NativeEmbarkCivilizationViewportFn>(viewport);
    g_native_embark_civilization_help = reinterpret_cast<void (*)(void *)>(help);
    // After the civilization branch, every optional later writer starts with
    // one of these viewport/help calls. The owner return covers the empty
    // successor, including a missing selected civilization/detail record.
    std::vector<NativeCall> calls{
        {0x1051aac, 0xbb120, reinterpret_cast<const void *>(&native_embark_civilization_frame_cursor)},
        {0x1051ead, 0xbb120, reinterpret_cast<const void *>(&native_embark_civilization_box_cursor)},
        {0x105275e, 0x41f640, reinterpret_cast<const void *>(&native_embark_civilization_end_viewport)},
        {0x10528ec, 0x41f640, reinterpret_cast<const void *>(&native_embark_civilization_end_viewport)},
        {0x1052927, 0x1e8b20, reinterpret_cast<const void *>(&native_embark_civilization_end_help)},
    };
    if (!native_reference_calls(calls, 0) ||
            !g_native_embark_civilization_producer_hooks.install(base, calls, label) ||
            !g_native_embark_civilization_owner_hook.install(label)) {
        uninstall_native_embark_civilization_layer_hook();
        return false;
    }
    log_line("INFO", "Redirected the embark civilization panel to its independent output layer");
    return true;
}

static void uninstall_native_embark_civilization_layer_hook() {
    native_embark_civilization_restore_output();
    g_native_embark_civilization_producer_hooks.uninstall("Native embark civilization calls restore");
    g_native_embark_civilization_owner_hook.uninstall("Native embark civilization owner restore");
    if (!g_native_embark_civilization_producer_hooks.active() &&
            !g_native_embark_civilization_owner_hook.active()) {
        g_native_embark_civilization_cursor = nullptr;
        g_native_embark_civilization_viewport = nullptr;
        g_native_embark_civilization_help = nullptr;
        g_native_embark_civilization_target.release();
        native_embark_civilization_begin_frame();
        g_native_embark_civilization_layer = {};
        g_native_embark_civilization_text = {};
    }
}

static bool native_embark_civilization_layer_hook_active() {
    return g_native_embark_civilization_producer_hooks.active() ||
        g_native_embark_civilization_owner_hook.active();
}
#else
static bool install_native_embark_civilization_layer_hook() { return true; }
static void uninstall_native_embark_civilization_layer_hook() {
    g_native_embark_civilization_target.release();
}
static bool native_embark_civilization_layer_hook_active() { return false; }
#endif

static void native_embark_civilization_present_layer(SDL_Renderer *renderer,
        void (*draw_embark_civilization)(SDL_Renderer *)) {
    TranslationStateScope translation;
    auto &layer = g_native_embark_civilization_layer;
    if (!renderer || !draw_embark_civilization || !layer.ready || layer.renderer != renderer) return;
    NativeCapturedTextReadScope captured_text_reads;
    const auto *gps = layer.foreground.graphics();
    if (gps->tile_pixel_x <= 0 || gps->tile_pixel_y <= 0) return;
    const int width = gps->screen_pixel_x, height = gps->screen_pixel_y;
    if (width <= 0 || height <= 0) return;
    const int64_t tile_x = gps->tile_pixel_x, tile_y = gps->tile_pixel_y;
    const int64_t origin_x = (gps->screen_pixel_x - tile_x * gps->dimx) / 2;
    const int64_t origin_y = (gps->screen_pixel_y - tile_y * gps->dimy) / 2;
    const auto &panel = g_native_embark_civilization_panel;
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
    // Native coordinates stay intact in the private target. Clear, paint
    // and submit only the panel's owned rectangle, including anchored artwork.
    const auto direct_draw = [&] {
        if (state.bind_composite(width, height) &&
                SDL_RenderSetClipRect(renderer, &pixels) == 0) draw_embark_civilization(renderer);
    };
    if (!g_native_embark_civilization_target.prepare(renderer, width, height)) {
        direct_draw();
        return;
    }
    std::optional<std::string> context;
    try { context = native_ui_layer_cache_context(layer); }
    catch (...) { /* Native drawing remains available without a retained source. */ }
    auto &cache = g_native_embark_civilization_target.frame_cache;
    if (context && cache.matches(layer, renderer, width, height,
            draw_embark_civilization, *context, true)) {
        if (state.bind_composite(width, height) &&
                SDL_RenderSetClipRect(renderer, &pixels) == 0)
            SDL_RenderCopy(renderer, g_native_embark_civilization_target.texture, &pixels, &pixels);
        return;
    }
    cache.invalidate();
    bool captured = false;
    if (context) {
        try {
            cache.capture(layer, renderer, width, height, draw_embark_civilization, *context, true);
            captured = true;
        } catch (...) { /* Source allocation cannot prevent the panel from drawing. */ }
    }
    if (!state.bind(g_native_embark_civilization_target.texture, width, height)) {
        direct_draw();
        return;
    }
    SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_NONE);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    if (SDL_RenderSetClipRect(renderer, &pixels) != 0 ||
            SDL_RenderFillRect(renderer, &pixels) != 0) return;
    draw_embark_civilization(renderer);
    if (captured) {
        try {
            const auto completed_context = native_ui_layer_cache_context(layer);
            if (completed_context && *completed_context == *context) cache.publish();
        } catch (...) { /* Publish only a stable completed native panel. */ }
    }
    if (!state.bind_composite(width, height) || SDL_RenderSetClipRect(renderer, &pixels) != 0) return;
    SDL_RenderCopy(renderer, g_native_embark_civilization_target.texture, &pixels, &pixels);
}
