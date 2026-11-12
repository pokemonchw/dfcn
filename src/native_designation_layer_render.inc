static NativeUiLayerTarget g_native_designation_target;
#ifdef _WIN32
static NativeCallHook g_native_designation_producer_hooks;
using NativeDesignationCursorFn = void (*)(graphicst *, int32_t, int32_t);
static NativeDesignationCursorFn g_native_designation_cursor_original = nullptr;

static void native_designation_cursor(graphicst *graphics, int32_t y, int32_t x) {
    NativeInputCallbackScope callback;
    TranslationStateScope translation;
    const auto original = g_native_designation_cursor_original;
    if (!original) return;
    if (graphics == native_graphics()) {
        try {
            if (native_designation_begin_draw()) native_designation_submit_span(x, y, 1);
        } catch (...) {}
    }
    callback.call_native([&] { original(graphics, y, x); });
}

static void native_designation_end_cursor(graphicst *graphics, int32_t y, int32_t x) {
    NativeInputCallbackScope callback;
    TranslationStateScope translation;
    const auto original = g_native_designation_cursor_original;
    if (!original) return;
    if (graphics == native_graphics()) native_designation_end_draw();
    callback.call_native([&] { original(graphics, y, x); });
}

static void uninstall_native_designation_layer_hook();
static bool install_native_designation_layer_hook() {
    if (g_native_designation_producer_hooks.installed) return true;
    if (g_native_designation_producer_hooks.active()) {
        uninstall_native_designation_layer_hook();
        if (g_native_designation_producer_hooks.active()) return false;
    }
    const auto base = native_history_profile_base();
    const auto cursor = native_reference_address(base, 0xbb120);
    if (!base || !cursor) return false;
    g_native_designation_cursor_original = reinterpret_cast<NativeDesignationCursorFn>(cursor);
    // Complete native owner: fortress-rectangle/pe-reference-placement-renderer-owner.asm.
    // 3d8bad starts the seven designation category icons; 3d95b5 selects
    // their operation title, and 3da828 selects their subtools/weights.
    // The common successor 3ddefd starts unrelated build/stockpile/zone icons.
    // Register every cursor in this interval, including each native frame
    // skin cell. No guessed screen rectangle or text lookup selects ownership.
    constexpr uintptr_t cursors[] = {
        0x3d8bad, 0x3d8d99, 0x3d8f69, 0x3d9159, 0x3d9299, 0x3d93f9, 0x3d9519,
        0x3d9619, 0x3d96c9, 0x3d9b12, 0x3d9b89, 0x3d9c34, 0x3d9d69, 0x3d9e14,
        0x3d9f49, 0x3d9ff4, 0x3da299, 0x3da344, 0x3da559, 0x3da604, 0x3da739,
        0x3da7e4, 0x3da9ad, 0x3dacb9, 0x3dae09, 0x3daf8b, 0x3db199, 0x3db3fb,
        0x3db589, 0x3db69b, 0x3db7e9, 0x3db959, 0x3dbbbb, 0x3dbd49, 0x3dbe5b,
        0x3dbfa9, 0x3dc119, 0x3dc37b, 0x3dc579, 0x3dc729, 0x3dc869, 0x3dc9d9,
        0x3dcc2b, 0x3dce8b, 0x3dd0b9, 0x3dd299, 0x3dd459, 0x3dd5a9, 0x3dd679,
        0x3dd808, 0x3dd898, 0x3dd9f8, 0x3ddada, 0x3ddd1b,
    };
    std::vector<NativeCall> calls;
    for (auto site : cursors)
        calls.push_back({site, 0xbb120, reinterpret_cast<const void *>(&native_designation_cursor)});
    calls.push_back({0x3ddefd, 0xbb120,
        reinterpret_cast<const void *>(&native_designation_end_cursor)});
    if (!native_reference_calls(calls, 0) ||
            !g_native_designation_producer_hooks.install(base, calls,
                "Native designation tool producer ownership")) {
        uninstall_native_designation_layer_hook();
        return false;
    }
    return true;
}

static void uninstall_native_designation_layer_hook() {
    native_designation_restore_output();
    g_native_designation_producer_hooks.uninstall("Native designation tool producer restore");
    if (!g_native_designation_producer_hooks.active()) {
        g_native_designation_cursor_original = nullptr;
        g_native_designation_target.release();
        native_designation_begin_frame();
        g_native_designation_layer = {};
        g_native_designation_text = {};
        release_native_designation_language_resources();
    }
}
static bool native_designation_layer_hook_active() {
    return g_native_designation_producer_hooks.active();
}
#else
static NativeInlineObserverHook g_native_designation_begin_hook, g_native_designation_end_hook;
static void native_designation_begin_elf(const NativeInlineRegisters *) noexcept {
    NativeInputCallbackScope callback;
    try {
        TranslationStateScope translation;
        if (native_designation_begin_draw()) g_native_designation_layer.foreground.clear();
    } catch (...) {}
}
static void native_designation_end_elf(const NativeInlineRegisters *) noexcept {
    NativeInputCallbackScope callback;
    try {
        TranslationStateScope translation;
        if (!g_native_designation_output) return;
        const auto *gps = native_graphics();
        // This grid contains only writes between the designation producer's
        // entry and successor. Include inline skin stores as well as addst;
        // unsubmitted gaps remain transparent.
        const auto written = [&](int x, int y) {
            const size_t tile = static_cast<size_t>(x) * gps->dimy + y;
            uint64_t lower = 0, upper = 0;
            std::memcpy(&lower, gps->screen + tile * 8, 8);
            std::memcpy(&upper, gps->screen_top + tile * 8, 8);
            return lower || upper || gps->screentexpos[tile] || gps->screentexpos_lower[tile] ||
                gps->screentexpos_anchored[tile] || gps->screentexpos_top[tile] ||
                gps->screentexpos_top_lower[tile] || gps->screentexpos_top_anchored[tile];
        };
        for (int y = 0; y < gps->dimy; ++y) {
            int first = -1;
            for (int x = 0; x <= gps->dimx; ++x) {
                if (x < gps->dimx && written(x, y)) { if (first < 0) first = x; }
                else if (first >= 0) { native_designation_submit_span(first, y, x - first); first = -1; }
            }
        }
        native_designation_end_draw();
    } catch (...) { native_designation_restore_output(); }
}
static bool install_native_designation_layer_hook() {
    if (!native_elf_5317_address(0x168a2b2)) return true;
    // The arena branch bypasses this fortress-only entry. The successor
    // starts the unrelated building/stockpile/zone icon loops.
    if (g_native_designation_begin_hook.install(reinterpret_cast<unsigned char *>(
                native_elf_5317_address(0x168a2b2)), {0x89,0x85,0xd0,0xfd,0xff,0xff},
            native_designation_begin_elf, "Native ELF designation begin") &&
            g_native_designation_end_hook.install(reinterpret_cast<unsigned char *>(
                native_elf_5317_address(0x168be74)), {0x48,0x8b,0x85,0xe0,0xfd,0xff,0xff},
            native_designation_end_elf, "Native ELF designation end")) return true;
    g_native_designation_begin_hook.uninstall("Native ELF designation begin restore");
    g_native_designation_end_hook.uninstall("Native ELF designation end restore");
    return false;
}
static void uninstall_native_designation_layer_hook() {
    native_designation_restore_output();
    g_native_designation_begin_hook.uninstall("Native ELF designation begin restore");
    g_native_designation_end_hook.uninstall("Native ELF designation end restore");
    if (!g_native_designation_begin_hook.active() && !g_native_designation_end_hook.active()) {
        g_native_designation_target.release(); native_designation_begin_frame();
        g_native_designation_layer = {}; g_native_designation_text = {};
        release_native_designation_language_resources();
    }
}
static bool native_designation_layer_hook_active() {
    return g_native_designation_begin_hook.active() || g_native_designation_end_hook.active();
}
#endif

static void native_designation_present_layer(SDL_Renderer *renderer,
        void (*draw_designations)(SDL_Renderer *)) {
    native_ui_present_layer(g_native_designation_layer, g_native_designation_target,
        renderer, draw_designations);
}
