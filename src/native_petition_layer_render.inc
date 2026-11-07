static NativeUiLayerTarget g_native_petition_target;
#ifdef _WIN32
// Only this inline detail is owned by the optional-panel contract. The
// adjacent trade tooltip, stockpile fields and common successor stay active.
DFCN_NATIVE_OPTIONAL_PANEL("fortress.accepted_petition_detail", 0x3d6950,
    0x3f7dda, 0x3f92fe, 0x3f6bd3, 0x3f6c06, 0x3f7d9b,
    0x3f9310, 0x3f9325, 0x3f97b5, 0x3f97e5, 0x18acef8)
static NativeCallHook g_native_petition_producer_hooks;
using NativePetitionCursorFn = void (*)(graphicst *, int32_t, int32_t);
static NativePetitionCursorFn g_native_petition_cursor_original = nullptr;
static const unsigned char *g_native_petition_successor_flag = nullptr;
static void uninstall_native_petition_layer_hook();

static void native_petition_begin_cursor(graphicst *graphics, int32_t y, int32_t x) {
    graphics = native_graphics_view(graphics);
    NativeInputCallbackScope callback;
    TranslationStateScope translation;
    const auto original = g_native_petition_cursor_original;
    if (!original) return;
    // This cursor starts the 61-column, 18-row skin loop before any stores.
    // Later iterations must retain the same output instead of clearing it.
    if (graphics == native_graphics()) native_petition_begin_draw({x, 3, 61, 18});
    callback.call_native([&] { native_graphics_call(original, graphics, y, x); });
}

static bool native_petition_finish() {
    NativeInputCallbackScope callback;
    TranslationStateScope translation;
    native_petition_end_draw();
    // Reproduce the common successor's CMP, including the header-only branch.
    // The relay's TEST AL,AL supplies the original following JNE condition.
    return g_native_petition_successor_flag && *g_native_petition_successor_flag != 0;
}

static bool install_native_petition_layer_hook() {
    if (g_native_petition_producer_hooks.installed) return true;
    if (g_native_petition_producer_hooks.active()) {
        uninstall_native_petition_layer_hook();
        if (g_native_petition_producer_hooks.active()) return false;
    }
    if (native_pe_feature_span_absent("fortress.accepted_petition_detail", 0x3f7fce, 5)) return true;
    const auto base = native_history_profile_base();
    const auto cursor = native_reference_address(base, 0xbb120);
    const auto flag = native_reference_address(base, 0x18a2cf8);
    if (!base || !cursor || !flag) return false;
    g_native_petition_cursor_original = reinterpret_cast<NativePetitionCursorFn>(cursor);
    g_native_petition_successor_flag = reinterpret_cast<const unsigned char *>(flag);
    std::vector<NativeCall> calls{
        {0x3f7eb9, 0xbb120, reinterpret_cast<const void *>(&native_petition_begin_cursor)},
        {0x3f97b5, 0, reinterpret_cast<const void *>(&native_petition_finish), {},
            {0x80,0x3d,0x3c,0x95,0x4a,0x01,0x00}, {0x84,0xc0}},
    };
    if (!native_reference_calls(calls, 0) ||
            !g_native_petition_producer_hooks.install(base, calls,
                "Native accepted petition detail producer ownership")) {
        uninstall_native_petition_layer_hook();
        return false;
    }
    return true;
}

static void uninstall_native_petition_layer_hook() {
    native_petition_restore_output();
    g_native_petition_producer_hooks.uninstall("Native accepted petition detail restore");
    if (!g_native_petition_producer_hooks.active()) {
        g_native_petition_cursor_original = nullptr;
        g_native_petition_successor_flag = nullptr;
        g_native_petition_target.release();
        native_petition_begin_frame();
        g_native_petition_layer = {};
        g_native_petition_text = {};
    }
}

static bool native_petition_layer_hook_active() {
    return g_native_petition_producer_hooks.active();
}
#else
static bool install_native_petition_layer_hook() { return true; }
static void uninstall_native_petition_layer_hook() { g_native_petition_target.release(); }
static bool native_petition_layer_hook_active() { return false; }
#endif

static void native_petition_present_layer(SDL_Renderer *renderer,
        void (*draw_petition)(SDL_Renderer *)) {
    native_ui_present_layer(g_native_petition_layer, g_native_petition_target,
        renderer, draw_petition);
}
