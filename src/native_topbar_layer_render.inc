// The fortress renderer inlines the complete top bar. Its existing cursor
// and color calls bound the native producer without moving native stores or
// changing its branch flow. Keep that interval on its own output grid.
static NativeUiLayerTarget g_native_topbar_target;
#ifdef _WIN32
static NativeCallHook g_native_topbar_producer_hooks;
using NativeTopbarCursorFn = void (*)(graphicst *, int32_t, int32_t);
using NativeTopbarColorFn = void (*)(graphicst *, int32_t, int32_t, uint8_t);
using NativeTopbarViewportFn = void (*)(const void *, int32_t *, int32_t *);
static NativeTopbarCursorFn g_native_topbar_cursor_original = nullptr;
static NativeTopbarColorFn g_native_topbar_color_original = nullptr;
static NativeTopbarViewportFn g_native_topbar_viewport = nullptr;
static void uninstall_native_topbar_layer_hook();

static bool native_topbar_begin_draw() {
    if (g_native_topbar_output) return true;
    if (g_native_topbar_capture_attempted) return false;
    auto *gps = native_graphics();
    const auto *settings = native_ui_settings_source();
    if (!gps || !settings || !g_native_topbar_viewport ||
            gps->dimx <= 0 || gps->dimx > 1000 ||
            gps->dimy <= 0 || gps->dimy > 1000) return false;
    int32_t viewport_left = 0, viewport_right = -1;
    // 3d6b17 obtains the same settings bounds. The normal fortress branch
    // (3f28cc..3f2e52) reserves 16 columns at left and 37 at right; its
    // complete frame, native artwork and text occupy rows zero through three.
    g_native_topbar_viewport(settings, &viewport_left, &viewport_right);
    const int64_t left = std::max({int64_t(viewport_left) + 16,
        int64_t{0}, int64_t(gps->clipx[0])});
    const int64_t right = std::min({int64_t(viewport_right) - 37,
        int64_t(gps->dimx) - 1, int64_t(gps->clipx[1])});
    const int64_t top = std::max(int64_t{0}, int64_t(gps->clipy[0]));
    const int64_t bottom = std::min({int64_t{3}, int64_t(gps->dimy) - 1,
        int64_t(gps->clipy[1])});
    if (left > right || top > bottom) return false;
    return native_topbar_begin_draw(SDL_Rect{static_cast<int>(left),
        static_cast<int>(top), static_cast<int>(right - left + 1),
        static_cast<int>(bottom - top + 1)});
}

static void native_topbar_begin_cursor(graphicst *graphics, int32_t y, int32_t x) {
    NativeInputCallbackScope callback;
    TranslationStateScope translation;
    const auto original = g_native_topbar_cursor_original;
    if (!original) return;
    if (graphics == native_graphics()) native_topbar_begin_draw();
    callback.call_native([&] { original(graphics, y, x); });
}

static void native_topbar_begin_color(graphicst *graphics, int32_t foreground,
        int32_t background, uint8_t bright) {
    NativeInputCallbackScope callback;
    TranslationStateScope translation;
    const auto original = g_native_topbar_color_original;
    if (!original) return;
    if (graphics == native_graphics()) native_topbar_begin_draw();
    callback.call_native([&] { original(graphics, foreground, background, bright); });
}

static void native_topbar_end_cursor(graphicst *graphics, int32_t y, int32_t x) {
    NativeInputCallbackScope callback;
    TranslationStateScope translation;
    const auto original = g_native_topbar_cursor_original;
    if (!original) return;
    // The common next writer starts the right sidebar. It also runs after
    // the arena branch, which never enters this fortress top-bar capture.
    if (graphics == native_graphics()) native_topbar_end_draw();
    callback.call_native([&] { original(graphics, y, x); });
}

static bool install_native_topbar_layer_hook() {
    if (g_native_topbar_producer_hooks.installed) return true;
    if (g_native_topbar_producer_hooks.active()) {
        uninstall_native_topbar_layer_hook();
        if (g_native_topbar_producer_hooks.active()) return false;
    }
    const auto base = native_history_profile_base();
    const auto cursor = native_reference_address(base, 0xbb120);
    const auto color = native_reference_address(base, 0xbb130);
    const auto viewport = native_reference_address(base, 0x41f640);
    std::vector<unsigned char> viewport_prefix{0x48,0x8b,0xca,0x49,0x8b,0xd0};
    if (!base || !cursor || !color || !viewport ||
            !native_reference_bytes(0x41f640, viewport_prefix)) return false;
    g_native_topbar_cursor_original = reinterpret_cast<NativeTopbarCursorFn>(cursor);
    g_native_topbar_color_original = reinterpret_cast<NativeTopbarColorFn>(color);
    g_native_topbar_viewport = reinterpret_cast<NativeTopbarViewportFn>(viewport);
    // Either frame loop can be empty on a narrow native viewport. Begin at
    // both loops and at their unconditional successor; an active capture is
    // reused, so no component can lose its frame or split its text output.
    std::vector<NativeCall> calls{
        {0x3f2ea8, 0xbb120, reinterpret_cast<const void *>(&native_topbar_begin_cursor)},
        {0x3f2f78, 0xbb120, reinterpret_cast<const void *>(&native_topbar_begin_cursor)},
        {0x3f3001, 0xbb130, reinterpret_cast<const void *>(&native_topbar_begin_color)},
        {0x3f46f0, 0xbb120, reinterpret_cast<const void *>(&native_topbar_end_cursor)},
    };
    if (!native_reference_calls(calls, 0) ||
            !g_native_topbar_producer_hooks.install(base, calls,
                "Native fortress top bar producer ownership")) {
        uninstall_native_topbar_layer_hook();
        return false;
    }
    log_line("INFO", "Redirected the native fortress top bar to its independent output layer");
    return true;
}

static void uninstall_native_topbar_layer_hook() {
    native_topbar_restore_output();
    g_native_topbar_producer_hooks.uninstall("Native fortress top bar producer restore");
    if (!g_native_topbar_producer_hooks.active()) {
        g_native_topbar_cursor_original = nullptr;
        g_native_topbar_color_original = nullptr;
        g_native_topbar_viewport = nullptr;
        g_native_topbar_target.release();
        native_topbar_begin_frame();
        g_native_topbar_layer = {};
        g_native_topbar_text = {};
    }
}

static bool native_topbar_layer_hook_active() {
    return g_native_topbar_producer_hooks.active();
}
#else
static NativeInlineObserverHook g_native_topbar_begin_hook, g_native_topbar_end_hook;
static void native_topbar_begin_elf(const NativeInlineRegisters *) noexcept {
    NativeInputCallbackScope callback;
    try {
        TranslationStateScope translation;
        auto *gps = native_graphics();
        using Bounds = void (*)(int32_t *, int32_t *);
        static const auto bounds = reinterpret_cast<Bounds>(dlsym(RTLD_DEFAULT, "_Z23get_main_interface_dimsRiS_"));
        if (!gps || !bounds || gps->dimx <= 0 || gps->dimy <= 0) return;
        int32_t left = 0, right = -1;
        bounds(&left, &right);
        left = std::max({0, left + 16, static_cast<int>(gps->clipx[0])});
        right = std::min({gps->dimx - 1, right - 37, static_cast<int>(gps->clipx[1])});
        const int top = std::max(0, static_cast<int>(gps->clipy[0]));
        const int bottom = std::min({3, gps->dimy - 1, static_cast<int>(gps->clipy[1])});
        if (left <= right && top <= bottom)
            native_topbar_begin_draw({left, top, right - left + 1, bottom - top + 1});
    } catch (...) {}
}
static void native_topbar_end_elf(const NativeInlineRegisters *) noexcept {
    NativeInputCallbackScope callback;
    try { native_topbar_end_draw(); } catch (...) {}
}
static bool install_native_topbar_layer_hook() {
    if (!native_elf_5317_address(0x168cf10)) return true;
    // Native frame initialization through the common right-sidebar successor.
    if (g_native_topbar_begin_hook.install(reinterpret_cast<unsigned char *>(
                native_elf_5317_address(0x168cf10)),
            {0xc7,0x85,0x58,0xfe,0xff,0xff,0,0,0,0}, native_topbar_begin_elf,
            "Native ELF top bar begin") &&
            g_native_topbar_end_hook.install(reinterpret_cast<unsigned char *>(
                native_elf_5317_address(0x168e625)),
            {0x89,0x85,0x18,0xfe,0xff,0xff}, native_topbar_end_elf,
            "Native ELF top bar end")) return true;
    g_native_topbar_begin_hook.uninstall("Native ELF top bar begin restore");
    g_native_topbar_end_hook.uninstall("Native ELF top bar end restore");
    return false;
}
static void uninstall_native_topbar_layer_hook() {
    native_topbar_restore_output();
    g_native_topbar_begin_hook.uninstall("Native ELF top bar begin restore");
    g_native_topbar_end_hook.uninstall("Native ELF top bar end restore");
    if (!g_native_topbar_begin_hook.active() && !g_native_topbar_end_hook.active()) {
        g_native_topbar_target.release(); native_topbar_begin_frame();
        g_native_topbar_layer = {}; g_native_topbar_text = {};
    }
}
static bool native_topbar_layer_hook_active() {
    return g_native_topbar_begin_hook.active() || g_native_topbar_end_hook.active();
}
#endif

static void native_topbar_present_layer(SDL_Renderer *renderer,
        void (*draw_topbar)(SDL_Renderer *)) {
    TranslationStateScope translation;
    auto &layer = g_native_topbar_layer;
    if (!renderer || !draw_topbar || !layer.ready || layer.renderer != renderer) return;
    NativeCapturedTextReadScope captured_text_reads;
    const auto *gps = layer.foreground.graphics();
    if (gps->tile_pixel_x <= 0 || gps->tile_pixel_y <= 0) return;
    const int width = gps->screen_pixel_x, height = gps->screen_pixel_y;
    if (width <= 0 || height <= 0) return;
    const int64_t tile_x = gps->tile_pixel_x, tile_y = gps->tile_pixel_y;
    const int64_t origin_x = (gps->screen_pixel_x - tile_x * gps->dimx) / 2;
    const int64_t origin_y = (gps->screen_pixel_y - tile_y * gps->dimy) / 2;
    const auto &panel = g_native_topbar_panel;
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
    // and submit only the bar's owned rectangle, including anchored artwork.
    const auto direct_draw = [&] {
        if (state.bind_composite(width, height) &&
                SDL_RenderSetClipRect(renderer, &pixels) == 0) draw_topbar(renderer);
    };
    if (!g_native_topbar_target.prepare(renderer, width, height)) {
        direct_draw();
        return;
    }
    std::optional<std::string> context;
    try { context = native_ui_layer_cache_context(layer); }
    catch (...) { /* Native drawing remains available without a retained source. */ }
    auto &cache = g_native_topbar_target.frame_cache;
    if (context && cache.matches(layer, renderer, width, height,
            draw_topbar, *context, true)) {
        if (state.bind_composite(width, height) &&
                SDL_RenderSetClipRect(renderer, &pixels) == 0)
            SDL_RenderCopy(renderer, g_native_topbar_target.texture, &pixels, &pixels);
        return;
    }
    cache.invalidate();
    bool captured = false;
    if (context) {
        try {
            cache.capture(layer, renderer, width, height, draw_topbar, *context, true);
            captured = true;
        } catch (...) { /* Source allocation cannot prevent the bar from drawing. */ }
    }
    if (!state.bind(g_native_topbar_target.texture, width, height)) {
        direct_draw();
        return;
    }
    SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_NONE);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    if (SDL_RenderSetClipRect(renderer, &pixels) != 0 ||
            SDL_RenderFillRect(renderer, &pixels) != 0) return;
    draw_topbar(renderer);
    if (captured) {
        try {
            const auto completed_context = native_ui_layer_cache_context(layer);
            if (completed_context && *completed_context == *context) cache.publish();
        } catch (...) { /* Publish only a stable completed native bar. */ }
    }
    if (!state.bind_composite(width, height) || SDL_RenderSetClipRect(renderer, &pixels) != 0) return;
    SDL_RenderCopy(renderer, g_native_topbar_target.texture, &pixels, &pixels);
}
