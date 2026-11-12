// The direct view_sheets render owns its frame, header, tabs and selected
// page. Intercept it before any native store reaches another component.
static NativeUiLayerTarget g_native_character_target;

static void native_character_paint_grid(NativeUiLayerStorage &layer,
        SDL_Renderer *renderer, const std::vector<Match> &matches, const SDL_Rect *panel) {
#ifdef _WIN32
    // Select the character header for every native SDL input, including
    // RIP-relative helpers; the main page's selected header stays untouched.
    struct ReadCacheScope {
        ReadCacheScope() { NativeUiReadScope::invalidate_reads(); }
        ~ReadCacheScope() { NativeUiReadScope::invalidate_reads(); }
    } reads;
    NativeDfhackLayerRendererGrid input(layer.native_renderer, *layer.foreground.graphics());
#endif
    native_ui_paint_grid(layer, renderer, matches, panel);
}

static NativeEntryHook g_native_character_draw_hook;
using NativeCharacterDrawFn = void (*)(void *, uint32_t, int32_t, int32_t);

static bool native_character_frames(const void *sheet, const graphicst &gps,
        int32_t screen_right, std::vector<SDL_Rect> &frames, SDL_Rect &panel) {
    int32_t context = -1, grid_x = gps.dimx, grid_y = gps.dimy, width_percent = 100;
    if (!native_history_copy(reinterpret_cast<uintptr_t>(sheet) + 4, context)) return false;
    const auto *settings = native_ui_settings_source();
    // The normal native entry loads init.display.grid_y at +0x18. Its
    // prepare-carefully branch also reads grid_x +0x14 and width +0x3c.
    if (settings) {
#ifdef _WIN32
        const uintptr_t init = reinterpret_cast<uintptr_t>(settings);
        if (!native_history_copy(init + 0x14, grid_x) ||
                !native_history_copy(init + 0x18, grid_y) ||
                !native_history_copy(init + 0x3c, width_percent)) return false;
#else
        grid_x = settings->display.grid_x;
        grid_y = settings->display.grid_y;
        width_percent = settings->display.max_interface_percentage;
#endif
    }
    int64_t left = int64_t(screen_right) - 97;
    int64_t right = int64_t(screen_right) - 37;
    int64_t top = 4, bottom = int64_t(grid_y) - 4;
    if (context == 1) {
        // Steam 0x151299..0x151416: reduce [1, grid_x-2] by half
        // the excess on each side, then reserve the native six-column gap.
        if (grid_x <= 0 || grid_x > 1000 || width_percent < 0 || width_percent > 100)
            return false;
        int64_t end = int64_t(grid_x) - 2;
        const int64_t width = std::max<int64_t>(114, int64_t(grid_x) * width_percent / 100);
        if (end > width) {
            const int64_t excess = end - width;
            end -= excess / 2;
        }
        left = int64_t(grid_x) / 2 + 6;
        right = end - 6;
        top = 5; bottom = int64_t(grid_y) - 11;
    } else if (context != 0) return false;
    const int body_left = static_cast<int>(std::clamp<int64_t>(left, 0, gps.dimx));
    const int body_right = static_cast<int>(std::clamp<int64_t>(right, -1, gps.dimx - 1));
    const int body_top = static_cast<int>(std::clamp<int64_t>(top, 0, gps.dimy));
    const int body_bottom = static_cast<int>(std::clamp<int64_t>(bottom, -1, gps.dimy - 1));
    if (body_left > body_right || body_top > body_bottom) return false;
    frames = {{body_left, body_top, body_right - body_left + 1, body_bottom - body_top + 1}};
    panel = frames.front();
    NativeBorrowedVector<int32_t> tabs;
    if (!native_history_copy(reinterpret_cast<uintptr_t>(sheet) + 0x90, tabs) ||
            !tabs.valid(65536)) return false;
    if (tabs.size()) {
        // 0x151786/0x15191b places each sheet selector at right+1..+4;
        // 0x15321f advances its three-row slot. These are native members,
        // independent of how any frame or tab happens to be textured.
        const int tab_left = static_cast<int>(std::clamp<int64_t>(right + 1, 0, gps.dimx));
        const int tab_right = static_cast<int>(std::clamp<int64_t>(right + 4, -1, gps.dimx - 1));
        const int tab_bottom = static_cast<int>(std::min<int64_t>(gps.dimy - 1,
            top + int64_t(tabs.size()) * 3 - 1));
        if (tab_left <= tab_right && body_top <= tab_bottom) {
            frames.push_back({tab_left, body_top, tab_right - tab_left + 1,
                tab_bottom - body_top + 1});
            const int union_right = std::max(body_right, tab_right);
            const int union_bottom = std::max(body_bottom, tab_bottom);
            panel.w = union_right - panel.x + 1;
            panel.h = union_bottom - panel.y + 1;
        }
    }
    return true;
}

static void native_character_draw(void *sheet, uint32_t tick, int32_t screen_left,
        int32_t screen_right) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeCharacterDrawFn>(g_native_character_draw_hook.original);
    if (!original) return;
    TranslationStateScope translation;
    // Native sheet helpers and inlined stores address the executable's gps.
    // Bind that exact writer even when a parent owns another private layer.
    auto *gps = native_graphics_owner();
    auto &layer = g_native_character_layer;
    bool isolate = reinterpret_cast<uintptr_t>(sheet) == g_native_character_owner &&
        native_character_open() && gps && gps->screen && gps->screen_top &&
        gps->dimx > 0 && gps->dimx <= 1000 && gps->dimy > 0 && gps->dimy <= 1000 &&
        !g_native_character_write_graphics;
    std::vector<SDL_Rect> frames;
    SDL_Rect panel{};
    if (isolate) {
        try {
            isolate = native_character_frames(sheet, *gps, screen_right, frames, panel);
            if (isolate && !layer.ready) {
                const bool resized = layer.foreground.dimx != gps->dimx ||
                    layer.foreground.dimy != gps->dimy;
                layer.foreground.prepare(*gps);
                native_ui_detach_map_output(*layer.foreground.graphics());
                if (resized) layer.foreground.clear();
                else {
                    for (const auto &frame : g_native_character_previous_frames)
                        layer.foreground.clear(frame);
                    for (const auto &frame : frames) layer.foreground.clear(frame);
                }
            } else if (isolate && (layer.foreground.dimx != gps->dimx ||
                    layer.foreground.dimy != gps->dimy)) isolate = false;
        } catch (...) { isolate = false; }
    }
    if (!isolate) {
        callback.call_native([&] { original(sheet, tick, screen_left, screen_right); });
        return;
    }
    layer.frames = std::move(frames);
    g_native_character_panel = panel;
    native_history_copy(g_native_character_owner + 4, g_native_character_context);
    native_history_copy(g_native_character_owner + 0xc, g_native_character_active_id);
    native_history_copy(g_native_character_owner + 0xc0, g_native_character_active_sub_tab);
    g_native_character_sources.adopt_pending_events();
    g_native_character_background_grid = gps->screen;
    g_native_character_background_top_grid = gps->screen_top;
    {
        NativeUiGridBinding output(gps, *layer.foreground.graphics());
        NativeInfoCapturedTextScope captions(g_native_character_text);
        NativeCharacterCapturedTextScope sources;
        struct WriteScope {
            const graphicst *previous = g_native_character_write_graphics;
            explicit WriteScope(const graphicst *graphics) { g_native_character_write_graphics = graphics; }
            ~WriteScope() { g_native_character_write_graphics = previous; }
        } writing(gps);
        callback.call_native([&] { original(sheet, tick, screen_left, screen_right); });
        layer.foreground.graphics()->top_in_use = gps->top_in_use;
    }
    layer.native_renderer = g_native_help_layer.native_renderer;
    layer.renderer = g_native_help_layer.renderer;
    layer.ready = true;
    NativeUiReadScope::invalidate_reads();
}

static bool install_native_character_layer_hook() {
    if (g_native_character_draw_hook.installed) return true;
    constexpr const char *label = "Native character sheet component draw entry";
#ifdef _WIN32
    const auto base = native_history_profile_base();
    auto *draw = reinterpret_cast<unsigned char *>(native_reference_address(base, 0x14ef90));
    const auto owner = native_reference_address(base, 0x18a4330);
    // The entire renderer is 0x14ef90..0x1a01c4 (Classic -0x70).
    // Its first complete MOV stores incoming R9D in shadow space. The
    // trampoline preserves all four arguments without a relative fixup.
    std::vector<unsigned char> prefix{0x44,0x89,0x4c,0x24,0x20};
    if (!draw || !owner || !native_reference_bytes(0x14ef90, prefix) ||
            !g_native_character_draw_hook.prepare(draw, prefix,
                reinterpret_cast<const void *>(&native_character_draw), {}, label)) return false;
#else
    if (!native_elf_5317_address(0x13d14b0)) return true;
    const auto owner = native_character_sheet_owner();
    auto *draw = reinterpret_cast<unsigned char *>(native_elf_5317_address(0x13d14b0));
    const std::vector<unsigned char> prefix{0xf3,0x0f,0x1e,0xfa,0x55};
    if (!owner || !draw || !g_native_character_draw_hook.prepare(draw, prefix,
            reinterpret_cast<const void *>(&native_character_draw), {}, label)) return false;
#endif
    g_native_character_owner = owner;
    if (!g_native_character_draw_hook.install(label)) return false;
    log_line("INFO", "Redirected the memory-selected character sheet to its private output layer");
    return true;
}

static void uninstall_native_character_layer_hook() {
    g_native_character_draw_hook.uninstall("Native character sheet draw entry restore");
    if (!g_native_character_draw_hook.active()) {
        native_character_begin_frame();
        g_native_character_owner = 0;
        g_native_character_target.release();
        g_native_character_layer = {};
        g_native_character_text = {};
        g_native_character_sources = {};
        g_native_character_previous_frames.clear();
    }
}
static bool native_character_layer_hook_active() { return g_native_character_draw_hook.active(); }

static void native_character_present_layer(SDL_Renderer *renderer,
        void (*draw_character)(SDL_Renderer *)) {
    TranslationStateScope translation;
    auto &layer = g_native_character_layer;
    if (!renderer || !draw_character || !layer.ready || !native_character_open()) return;
#ifdef _WIN32
    // The producer owns only its source grid. Resolve the live raster owner
    // on the SDL thread instead of depending on another component's frame.
    const auto native = NativeDfhackLayerNativeRenderer::current();
    if (!native.object || native.sdl != renderer) return;
    layer.native_renderer = native.object;
    layer.renderer = renderer;
#else
    if (layer.renderer != renderer) return;
#endif
    const auto *gps = layer.foreground.graphics();
    const int width = gps->screen_pixel_x, height = gps->screen_pixel_y;
    if (width <= 0 || height <= 0 || gps->tile_pixel_x <= 0 || gps->tile_pixel_y <= 0) return;
    const int64_t tile_x = gps->tile_pixel_x, tile_y = gps->tile_pixel_y;
    const int64_t origin_x = (width - tile_x * gps->dimx) / 2;
    const int64_t origin_y = (height - tile_y * gps->dimy) / 2;
    std::vector<SDL_Rect> pixels;
    for (const auto &frame : layer.frames) {
        const int left = static_cast<int>(std::clamp<int64_t>(origin_x + frame.x * tile_x, 0, width));
        const int top = static_cast<int>(std::clamp<int64_t>(origin_y + frame.y * tile_y, 0, height));
        const int right = static_cast<int>(std::clamp<int64_t>(origin_x +
            (int64_t(frame.x) + frame.w) * tile_x, 0, width));
        const int bottom = static_cast<int>(std::clamp<int64_t>(origin_y +
            (int64_t(frame.y) + frame.h) * tile_y, 0, height));
        if (left < right && top < bottom) pixels.push_back({left, top, right - left, bottom - top});
    }
    if (pixels.empty()) return;
    NativeUiLayerSdlState state(renderer);
    struct DrawingScope {
        bool previous = g_drawing_overlay;
        DrawingScope() { g_drawing_overlay = true; }
        ~DrawingScope() { g_drawing_overlay = previous; }
    } drawing;
    if (!g_native_character_target.prepare(renderer, width, height)) return;
    std::optional<std::string> context;
    try { context = native_ui_layer_cache_context(layer); } catch (...) {}
    auto &cache = g_native_character_target.frame_cache;
    const bool retained = context && cache.matches(layer, renderer, width, height,
        draw_character, *context, true);
    if (!retained) {
        cache.invalidate();
        bool captured = false;
        if (context) {
            try { cache.capture(layer, renderer, width, height, draw_character, *context, true); captured = true; }
            catch (...) {}
        }
        if (!state.bind(g_native_character_target.texture, width, height)) return;
        SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_NONE);
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
        for (const auto &box : pixels) {
            if (SDL_RenderSetClipRect(renderer, &box) != 0 ||
                    SDL_RenderFillRect(renderer, &box) != 0) return;
        }
        // The callback paints only layer.frames. Keep its native coordinates
        // while the private target prevents any writes to the shared output.
        SDL_RenderSetClipRect(renderer, nullptr);
        draw_character(renderer);
        if (captured) {
            try {
                const auto completed = native_ui_layer_cache_context(layer);
                if (completed && *completed == *context) cache.publish();
            } catch (...) {}
        }
    }
    if (!state.bind_composite(width, height)) return;
    for (const auto &box : pixels) {
        if (SDL_RenderSetClipRect(renderer, &box) != 0) return;
        SDL_RenderCopy(renderer, g_native_character_target.texture, &box, &box);
    }
}
