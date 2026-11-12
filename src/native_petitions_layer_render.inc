static NativeUiLayerTarget g_native_petitions_target;
#ifdef _WIN32
static NativeCallHook g_native_petitions_producer_hooks;
using NativePetitionsCursorFn = void (*)(graphicst *, int32_t, int32_t);
using NativePetitionsIteratorEqualFn = bool (*)(const void *, const void *);
static NativePetitionsCursorFn g_native_petitions_cursor = nullptr;
static NativePetitionsIteratorEqualFn g_native_petitions_iterator_equal = nullptr;
static void uninstall_native_petitions_layer_hook();

static void native_petitions_frame_cursor(graphicst *graphics, int32_t y, int32_t x) {
    NativeInputCallbackScope callback;
    TranslationStateScope translation;
    const auto original = g_native_petitions_cursor;
    if (!original) return;
    if (graphics == native_graphics()) {
        try {
            if (native_petitions_begin_draw()) native_petitions_submit_skin_cell(x, y);
        } catch (...) {}
    }
    callback.call_native([&] { original(graphics, y, x); });
}

static bool native_petitions_end_iterator(const void *iterator, const void *end) {
    NativeInputCallbackScope callback;
    TranslationStateScope translation;
    const auto original = g_native_petitions_iterator_equal;
    if (!original) return true;
    const bool exhausted = callback.call_native([&] { return original(iterator, end); });
    if (g_native_petitions_output) {
        const auto address = reinterpret_cast<uintptr_t>(iterator);
        int32_t next_row = 0, bottom = 0;
        // Both reviewed PE editions keep this iterator at rbp+0x288,
        // next record's first row at rbp-0x78, and the bottom border at
        // rbp-0x80. The native loop exits if its third row reaches bottom.
        // Ending at these two comparisons covers an empty list, rejected
        // agreements, the last agreement and a full panel before any later
        // fortress component receives the output binding.
        const bool full = address >= 0x308 &&
            native_history_copy(address - 0x300, next_row) &&
            native_history_copy(address - 0x308, bottom) &&
            int64_t(next_row) + 2 >= bottom;
        if (exhausted || full) native_petitions_end_draw();
    }
    return exhausted;
}

static bool install_native_petitions_layer_hook() {
    if (g_native_petitions_producer_hooks.installed) return true;
    if (g_native_petitions_producer_hooks.active()) {
        uninstall_native_petitions_layer_hook();
        if (g_native_petitions_producer_hooks.active()) return false;
    }
    const auto base = native_history_profile_base();
    const auto cursor = native_reference_address(base, 0xbb120);
    const auto equal = native_reference_address(base, 0xb9970);
    if (!base || !cursor || !equal) return false;
    g_native_petitions_cursor = reinterpret_cast<NativePetitionsCursorFn>(cursor);
    g_native_petitions_iterator_equal = reinterpret_cast<NativePetitionsIteratorEqualFn>(equal);
    // Complete native owner: fortress-rectangle/pe-reference-placement-renderer-owner.asm.
    // 3f987c is the skin's first actual store; 3f9992 and 3fa389 own all
    // normal exits before the unrelated interfaces beginning at 3fa39c.
    std::vector<NativeCall> calls{
        {0x3f987c, 0xbb120, reinterpret_cast<const void *>(&native_petitions_frame_cursor)},
        {0x3f9992, 0xb9970, reinterpret_cast<const void *>(&native_petitions_end_iterator)},
        {0x3fa389, 0xb9970, reinterpret_cast<const void *>(&native_petitions_end_iterator)},
    };
    if (!native_reference_calls(calls, 0) ||
            !g_native_petitions_producer_hooks.install(base, calls,
                "Native construction petitions producer ownership")) {
        uninstall_native_petitions_layer_hook();
        return false;
    }
    log_line("INFO", "Redirected the construction petitions list to its independent output layer");
    return true;
}

static void uninstall_native_petitions_layer_hook() {
    native_petitions_restore_output();
    g_native_petitions_producer_hooks.uninstall("Native construction petitions producer restore");
    if (!g_native_petitions_producer_hooks.active()) {
        g_native_petitions_cursor = nullptr;
        g_native_petitions_iterator_equal = nullptr;
        g_native_petitions_target.release();
        native_petitions_begin_frame();
        g_native_petitions_layer = {};
        g_native_petitions_text = {};
    }
}

static bool native_petitions_layer_hook_active() {
    return g_native_petitions_producer_hooks.active();
}
#else
static NativeInlineObserverHook g_native_petitions_begin_hook, g_native_petitions_end_hook;
static void native_petitions_begin_elf(const NativeInlineRegisters *registers) noexcept {
    NativeInputCallbackScope callback;
    try {
        TranslationStateScope translation;
        int32_t left = 0, top = 0, bottom = -1;
        const int right = static_cast<int32_t>(registers->r15);
        if (!native_history_copy(registers->rbp - 0x1e8, left) ||
                !native_history_copy(registers->rbp - 0x1e0, top) ||
                !native_history_copy(registers->rbp - 0x1c8, bottom)) return;
        const auto *gps = native_graphics();
        if (!gps) return;
        left = std::max({left, 0, static_cast<int>(gps->clipx[0])});
        top = std::max({top, 0, static_cast<int>(gps->clipy[0])});
        const int end_x = std::min({right, gps->dimx - 1, static_cast<int>(gps->clipx[1])});
        bottom = std::min({bottom, gps->dimy - 1, static_cast<int>(gps->clipy[1])});
        if (left > end_x || top > bottom || !native_petitions_begin_draw()) return;
        // The reviewed inline native loop fills this whole rectangle.
        native_petitions_submit_skin_cell(left, top);
        native_petitions_submit_skin_cell(end_x, bottom);
    } catch (...) {}
}
static void native_petitions_end_elf(const NativeInlineRegisters *) noexcept {
    NativeInputCallbackScope callback;
    try { native_petitions_end_draw(); } catch (...) {}
}
static bool install_native_petitions_layer_hook() {
    const auto begin = native_elf_5317_address(0x16908f2);
    if (!begin) return true;
    const auto end = native_elf_5317_address(0x1690fe9);
    if (g_native_petitions_begin_hook.install(reinterpret_cast<unsigned char *>(begin),
            {0x8b,0x85,0x38,0xfe,0xff,0xff}, native_petitions_begin_elf,
            "Native ELF construction petitions begin") &&
            g_native_petitions_end_hook.install(reinterpret_cast<unsigned char *>(end),
            {0x80,0x3d,0x60,0xfc,0x09,0x01,0}, native_petitions_end_elf,
            "Native ELF construction petitions end", {{2,7,native_elf_5317_address(0x2730c50)}})) return true;
    g_native_petitions_begin_hook.uninstall("Native ELF construction petitions begin restore");
    g_native_petitions_end_hook.uninstall("Native ELF construction petitions end restore");
    return false;
}
static void uninstall_native_petitions_layer_hook() {
    native_petitions_restore_output();
    g_native_petitions_begin_hook.uninstall("Native ELF construction petitions begin restore");
    g_native_petitions_end_hook.uninstall("Native ELF construction petitions end restore");
    if (!g_native_petitions_begin_hook.active() && !g_native_petitions_end_hook.active()) {
        g_native_petitions_target.release(); native_petitions_begin_frame();
        g_native_petitions_layer = {}; g_native_petitions_text = {};
    }
}
static bool native_petitions_layer_hook_active() {
    return g_native_petitions_begin_hook.active() || g_native_petitions_end_hook.active();
}
#endif

static void native_petitions_present_layer(SDL_Renderer *renderer,
        void (*draw_petitions)(SDL_Renderer *)) {
    TranslationStateScope translation;
    auto &layer = g_native_petitions_layer;
    if (!renderer || !draw_petitions || !layer.ready || layer.renderer != renderer) return;
    NativeCapturedTextReadScope captured_text_reads;
    const auto *gps = layer.foreground.graphics();
    if (gps->tile_pixel_x <= 0 || gps->tile_pixel_y <= 0) return;
    const int width = gps->screen_pixel_x, height = gps->screen_pixel_y;
    if (width <= 0 || height <= 0) return;
    const int64_t tile_x = gps->tile_pixel_x, tile_y = gps->tile_pixel_y;
    const int64_t origin_x = (gps->screen_pixel_x - tile_x * gps->dimx) / 2;
    const int64_t origin_y = (gps->screen_pixel_y - tile_y * gps->dimy) / 2;
    const auto &panel = g_native_petitions_panel;
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
    const auto direct_draw = [&] {
        if (state.bind_composite(width, height) &&
                SDL_RenderSetClipRect(renderer, &pixels) == 0) draw_petitions(renderer);
    };
    if (!g_native_petitions_target.prepare(renderer, width, height)) {
        direct_draw();
        return;
    }
    std::optional<std::string> context;
    try { context = native_ui_layer_cache_context(layer); }
    catch (...) { /* Preserve native painting when source retention is unavailable. */ }
    auto &cache = g_native_petitions_target.frame_cache;
    if (context && cache.matches(layer, renderer, width, height,
            draw_petitions, *context, true)) {
        if (state.bind_composite(width, height) &&
                SDL_RenderSetClipRect(renderer, &pixels) == 0)
            SDL_RenderCopy(renderer, g_native_petitions_target.texture, &pixels, &pixels);
        return;
    }
    cache.invalidate();
    bool captured = false;
    if (context) {
        try {
            cache.capture(layer, renderer, width, height, draw_petitions, *context, true);
            captured = true;
        } catch (...) { /* Render this complete native submission without caching. */ }
    }
    if (!state.bind(g_native_petitions_target.texture, width, height)) {
        direct_draw();
        return;
    }
    SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_NONE);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    if (SDL_RenderSetClipRect(renderer, &pixels) != 0 ||
            SDL_RenderFillRect(renderer, &pixels) != 0) return;
    draw_petitions(renderer);
    if (captured) {
        try {
            const auto completed_context = native_ui_layer_cache_context(layer);
            if (completed_context && *completed_context == *context) cache.publish();
        } catch (...) { /* Publish only a stable, complete panel. */ }
    }
    if (!state.bind_composite(width, height) || SDL_RenderSetClipRect(renderer, &pixels) != 0) return;
    SDL_RenderCopy(renderer, g_native_petitions_target.texture, &pixels, &pixels);
}
