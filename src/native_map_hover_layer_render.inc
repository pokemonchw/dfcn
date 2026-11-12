// Both fortress/arena look-list branches inline their frame and text loop.
// Their size and loop-condition calls bound that complete native producer.
static NativeUiLayerTarget g_native_map_hover_target;
#ifdef _WIN32
static NativeCallHook g_native_map_hover_producer_hooks;
using NativeMapHoverCountFn = size_t (*)(const void *);
using NativeMapHoverConditionFn = bool (*)(unsigned char, unsigned char);
static NativeMapHoverCountFn g_native_map_hover_count_original = nullptr;
static NativeMapHoverConditionFn g_native_map_hover_condition_original = nullptr;
static void uninstall_native_map_hover_layer_hook();

static bool native_map_hover_arena_modal_open() {
    if (!native_arena_map_screen()) return false;
    const uintptr_t base = native_history_profile_base();
    if (!base) return false;
    // The same native producer draws these three panels after the look-list
    // (0x3fa574..0x3fa5ea). Read its actual open flags, independently of the
    // creature search hook's picker/raws/filter bindings.
    constexpr uintptr_t panels[]{
        0x18a8358, // arena_weather_interfacest
        0x18a82c0, // create_tree_interfacest
        0x18a8110, // create_creature_interfacest, including every tab
    };
    for (const uintptr_t panel : panels) {
        uint8_t open = 0;
        if (native_history_copy(native_reference_address(base, panel), open) && open)
            return true;
    }
    return false;
}

template<bool Attached>
static size_t native_map_hover_count(const void *list, int left, int right) {
    NativeInputCallbackScope callback;
    const auto original = g_native_map_hover_count_original;
    if (!original) return 0;
    const size_t count = callback.call_native([&] { return original(list); });
    try {
        // Arena modals still belong to the main native grid. Keep their
        // lower look-list in that grid too, so subsequent native writes
        // decide which pixels survive before any translation is drawn.
        // The original count and draw still run, including exposed rows.
        if (native_map_hover_arena_modal_open()) return count;
        auto *gps = native_graphics();
        if (!gps || !list || !count || count > 4096 ||
                gps->dimx <= 0 || gps->dimx > 1000 ||
                gps->dimy <= 0 || gps->dimy > 1000 || left > right) return count;
        // These are the native frame formulas, before viewport clipping:
        // closed: top=7,bottom=count+8; attached: top=3,bottom=count+5.
        const int64_t x0 = std::max({int64_t(left), int64_t{0}, int64_t(gps->clipx[0])});
        const int64_t x1 = std::min({int64_t(right), int64_t(gps->dimx) - 1,
            int64_t(gps->clipx[1])});
        const int64_t y0 = std::max(int64_t(Attached ? 3 : 7), int64_t(gps->clipy[0]));
        const int64_t y1 = std::min({int64_t(count) + (Attached ? 5 : 8),
            int64_t(gps->dimy) - 1, int64_t(gps->clipy[1])});
        if (x0 <= x1 && y0 <= y1)
            native_map_hover_begin_draw({static_cast<int>(x0), static_cast<int>(y0),
                static_cast<int>(x1 - x0 + 1), static_cast<int>(y1 - y0 + 1)});
    } catch (...) {}
    return count;
}

static bool native_map_hover_condition(unsigned char value, unsigned char expected) {
    NativeInputCallbackScope callback;
    const auto original = g_native_map_hover_condition_original;
    if (!original) return false;
    const bool more = callback.call_native([&] { return original(value, expected); });
    // Both the initial empty-loop exit and the final iteration use this
    // condition. No later panel can be submitted into this private output.
    if (!more) {
        try { native_map_hover_end_draw(); } catch (...) {}
    }
    return more;
}

static bool install_native_map_hover_layer_hook() {
    if (g_native_map_hover_producer_hooks.installed) return true;
    if (g_native_map_hover_producer_hooks.active()) {
        uninstall_native_map_hover_layer_hook();
        if (g_native_map_hover_producer_hooks.active()) return false;
    }
    const auto base = native_history_profile_base();
    const auto count = native_reference_address(base, 0x420dd0);
    const auto condition = native_reference_address(base, 0x657b0);
    if (!base || !count || !condition) return false;
    g_native_map_hover_count_original = reinterpret_cast<NativeMapHoverCountFn>(count);
    g_native_map_hover_condition_original = reinterpret_cast<NativeMapHoverConditionFn>(condition);
    // Retained source: terrain-captions/reference-look-vector-owner-3d6950.asm.
    // At both size calls R14D=left and EDI=right. Preserve RCX's owned vector
    // and pass those live bounds through the two otherwise unused ABI args.
    const std::vector<unsigned char> bounds_arguments{0x44,0x89,0xf2,0x41,0x89,0xf8};
    std::vector<NativeCall> calls{
        {0x3f936a, 0x420dd0, reinterpret_cast<const void *>(&native_map_hover_count<false>),
            bounds_arguments},
        {0x3f95a8, 0x420dd0, reinterpret_cast<const void *>(&native_map_hover_count<true>),
            bounds_arguments},
        {0x3f94bb, 0x657b0, reinterpret_cast<const void *>(&native_map_hover_condition)},
        {0x3f9582, 0x657b0, reinterpret_cast<const void *>(&native_map_hover_condition)},
        {0x3f96e9, 0x657b0, reinterpret_cast<const void *>(&native_map_hover_condition)},
        {0x3f97a4, 0x657b0, reinterpret_cast<const void *>(&native_map_hover_condition)},
    };
    if (!native_reference_calls(calls, 0) ||
            !g_native_map_hover_producer_hooks.install(base, calls,
                "Native map hover producer ownership")) {
        uninstall_native_map_hover_layer_hook();
        return false;
    }
    return true;
}

static void uninstall_native_map_hover_layer_hook() {
    native_map_hover_restore_output();
    g_native_map_hover_producer_hooks.uninstall("Native map hover producer restore");
    if (!g_native_map_hover_producer_hooks.active()) {
        g_native_map_hover_count_original = nullptr;
        g_native_map_hover_condition_original = nullptr;
        g_native_map_hover_target.release();
        native_map_hover_begin_frame();
        g_native_map_hover_layer = {};
        g_native_map_hover_text = {};
        release_native_map_hover_language_resources();
    }
}

static bool native_map_hover_layer_hook_active() {
    return g_native_map_hover_producer_hooks.active();
}
#else
// The retained ELF hover branches at 169d61a/16ab6ed are announcement
// alerts. Their ownership belongs to native_caption_hooks.inc, where the
// complete report and unit-summary translator can consume their sources.
static bool install_native_map_hover_layer_hook() { return true; }
static void uninstall_native_map_hover_layer_hook() { g_native_map_hover_target.release(); }
static bool native_map_hover_layer_hook_active() { return false; }
#endif

static void native_map_hover_present_layer(SDL_Renderer *renderer,
        void (*draw_hover)(SDL_Renderer *)) {
    native_ui_present_layer(g_native_map_hover_layer, g_native_map_hover_target,
        renderer, draw_hover);
}
