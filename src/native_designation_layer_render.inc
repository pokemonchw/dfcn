static NativeUiLayerTarget g_native_designation_target;
#ifdef _WIN32
static NativeCallHook g_native_designation_producer_hooks;
static NativeEntryHook g_native_designation_cursor_hook;
using NativeDesignationCursorFn = void (*)(graphicst *, int32_t, int32_t);
static NativeDesignationCursorFn g_native_designation_cursor_original = nullptr;

// All native cursor calls use this complete, separately proved leaf. Once
// the designation producer owns the output, observe its real coordinates
// here, including frame skin calls whose individual call sites moved.
// This observer never starts private ownership and does not classify callers.
static void native_designation_observe_cursor(graphicst *graphics, int32_t y, int32_t x) {
    NativeInputCallbackScope callback;
    const auto original = g_native_designation_cursor_original;
    if (!original) return;
    // The writer tag is thread-local. Unrelated native threads must not read
    // the producer's shared binding before taking its translation lock.
    if (g_native_designation_write_graphics &&
            graphics == native_graphics_identity(g_native_designation_write_graphics)) {
        try {
            TranslationStateScope translation;
            native_designation_submit_span(x, y, 1);
        } catch (...) {}
    }
    callback.call_native([&] { original(graphics, y, x); });
}

static bool native_designation_cursor_contract(uintptr_t base, uintptr_t cursor,
        std::vector<unsigned char> &prefix) {
    // Full canonical leaf: screenx = R8D; screeny = EDX; return. The catalog
    // must own every instruction, and the actual stores must independently
    // name the target graphicst members. An address alone proves no ABI.
    const std::vector<unsigned char> reference{
        0x44, 0x89, 0x81, 0x84, 0x00, 0x00, 0x00,
        0x89, 0x91, 0x88, 0x00, 0x00, 0x00, 0xc3};
    auto actual = reference;
    if (!base || !cursor || !native_pe_bytes(0xbb120, actual) ||
            !native_pe_match(base, 0xbb120, reference.data(), reference.size()) ||
            actual[0] != 0x44 || actual[1] != 0x89 || actual[2] != 0x81 ||
            actual[7] != 0x89 || actual[8] != 0x91 || actual[13] != 0xc3) return false;
    auto *owner = native_graphics_owner();
    const auto *x = native_graphics_member_address(owner, offsetof(graphicst, screenx), sizeof(int32_t));
    const auto *y = native_graphics_member_address(owner, offsetof(graphicst, screeny), sizeof(int32_t));
    int32_t x_offset = 0, y_offset = 0;
    std::memcpy(&x_offset, actual.data() + 3, sizeof(x_offset));
    std::memcpy(&y_offset, actual.data() + 9, sizeof(y_offset));
    const auto address = reinterpret_cast<uintptr_t>(owner);
    if (!owner || !x || !y || x_offset < 0 || y_offset < 0 ||
            uintptr_t(x_offset) > UINTPTR_MAX - address || uintptr_t(y_offset) > UINTPTR_MAX - address ||
            address + uintptr_t(x_offset) != reinterpret_cast<uintptr_t>(x) ||
            address + uintptr_t(y_offset) != reinterpret_cast<uintptr_t>(y)) return false;
    // One complete seven-byte store is sufficient for the entry jump. The
    // unchanged tail is a second store and RET, with no incoming branch.
    prefix.assign(actual.begin(), actual.begin() + 7);
    return true;
}

static void native_designation_cursor(graphicst *graphics, int32_t y, int32_t x) {
    graphics = native_graphics_view(graphics);
    NativeInputCallbackScope callback;
    TranslationStateScope translation;
    const auto original = g_native_designation_cursor_original;
    if (!original) return;
    if (graphics == native_graphics()) {
        try {
            if (native_designation_begin_draw()) native_designation_submit_span(x, y, 1);
        } catch (...) {}
    }
    callback.call_native([&] { native_graphics_call(original, graphics, y, x); });
}

static void native_designation_end_cursor(graphicst *graphics, int32_t y, int32_t x) {
    graphics = native_graphics_view(graphics);
    NativeInputCallbackScope callback;
    TranslationStateScope translation;
    const auto original = g_native_designation_cursor_original;
    if (!original) return;
    if (graphics == native_graphics()) native_designation_end_draw();
    callback.call_native([&] { native_graphics_call(original, graphics, y, x); });
}

static void uninstall_native_designation_layer_hook();
static bool install_native_designation_layer_hook() {
    if (g_native_designation_producer_hooks.installed && g_native_designation_cursor_hook.installed) return true;
    if (g_native_designation_producer_hooks.active() || g_native_designation_cursor_hook.active()) {
        uninstall_native_designation_layer_hook();
        if (g_native_designation_producer_hooks.active() || g_native_designation_cursor_hook.active()) return false;
    }
    const auto base = native_history_profile_base();
    const auto cursor = native_reference_address(base, 0xbb120);
    std::vector<unsigned char> prefix;
    if (!native_designation_cursor_contract(base, cursor, prefix) ||
            !native_pe_output_region(0x3d6950, 0x3d8bad, 0x3ddefd, 0xbb120)) return false;
    // Complete native owner: fortress-rectangle/pe-reference-placement-renderer-owner.asm.
    // 3d8bad starts the seven designation category icons; 3d95b5 selects
    // their operation title, and 3da828 selects their subtools/weights.
    // The common successor 3ddefd starts unrelated build/stockpile/zone icons.
    // Start only at the first category's first cursor, before its first
    // tile write. A missing start never falls through to a later category,
    // title or skin call. Once active, the cursor leaf observes every native
    // cursor and completed caption writes mark their entire submitted spans.
    // The scanner's complete logical-owner CFG additionally proves that all
    // normal paths after start pass end, and that no outside path can enter
    // an output effect after bypassing the first cursor.
    std::vector<NativeCall> calls{
        {0x3d8bad, 0xbb120, reinterpret_cast<const void *>(&native_designation_cursor)},
        {0x3ddefd, 0xbb120, reinterpret_cast<const void *>(&native_designation_end_cursor)},
    };
    if (!native_reference_calls(calls, 0)) return false;
    if (!g_native_designation_cursor_hook.prepare(reinterpret_cast<unsigned char *>(cursor),
            prefix, reinterpret_cast<const void *>(&native_designation_observe_cursor), {},
            "Native designation cursor ABI")) {
        uninstall_native_designation_layer_hook();
        return false;
    }
    g_native_designation_cursor_original = reinterpret_cast<NativeDesignationCursorFn>(
        g_native_designation_cursor_hook.original);
    if (!g_native_designation_cursor_hook.install("Native designation cursor observer") ||
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
    // Start/end wrappers call this trampoline. Never free it while any of
    // those call patches remain active after a failed rollback.
    if (g_native_designation_producer_hooks.active()) return;
    g_native_designation_cursor_hook.uninstall("Native designation cursor restore");
    if (!g_native_designation_cursor_hook.active()) {
        g_native_designation_cursor_original = nullptr;
        g_native_designation_target.release();
        native_designation_begin_frame();
        g_native_designation_layer = {};
        g_native_designation_text = {};
        release_native_designation_language_resources();
    }
}
static bool native_designation_layer_hook_active() {
    return g_native_designation_producer_hooks.active() || g_native_designation_cursor_hook.active();
}
#else
static bool install_native_designation_layer_hook() { return true; }
static void uninstall_native_designation_layer_hook() { g_native_designation_target.release(); }
static bool native_designation_layer_hook_active() { return false; }
#endif

static void native_designation_present_layer(SDL_Renderer *renderer,
        void (*draw_designations)(SDL_Renderer *)) {
    native_ui_present_layer(g_native_designation_layer, g_native_designation_target,
        renderer, draw_designations);
}
