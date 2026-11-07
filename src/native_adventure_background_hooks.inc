// setupadventure paints its retained Home/Beliefs card inline. Enter at the
// second row-count call, before any background/border cell, and leave at the
// first following world lookup. Neither boundary depends on visible glyphs.
#ifdef _WIN32
using NativeAdventureBackgroundCountFn = size_t (*)(const void *);
using NativeAdventureBackgroundSiteFn = uintptr_t (*)(const void *, int32_t);

struct NativeAdventureBackgroundHook {
    NativeCallHook code;
    NativeAdventureBackgroundCountFn count = nullptr;
    NativeAdventureBackgroundSiteFn site = nullptr;
};
static NativeAdventureBackgroundHook g_native_adventure_background_hook;

struct NativeAdventureBackgroundTooltipState {
    std::optional<NativeTooltipWidgetFrame> frame;
    NativeTooltipWidgetFrame *previous = nullptr;
};

static NativeAdventureBackgroundTooltipState &native_adventure_background_tooltip_state() {
    return reloadable_thread_state<NativeAdventureBackgroundTooltipState,
        struct AdventureBackgroundTooltipTag>();
}

static void finish_native_adventure_background_tooltip() {
    auto &state = native_adventure_background_tooltip_state();
    if (!state.frame) return;
    if (g_native_tooltip_write == &*state.frame)
        g_native_tooltip_write = state.previous;
    if (state.frame->isolated) native_tooltip_end_draw(*state.frame);
    state.frame.reset();
    state.previous = nullptr;
}

static size_t capture_native_adventure_background_tooltip(const void *document,
        int viewport_left) {
    NativeInputCallbackScope callback;
    const auto original = g_native_adventure_background_hook.count;
    const size_t count = callback.call_native([&] { return original(document); });
    try {
        finish_native_adventure_background_tooltip();
        auto *gps = native_graphics();
        const auto *settings = native_ui_settings_source();
        int32_t grid_y = 0;
        if (!document || !count || !gps || !gps->screen || !settings ||
                gps->dimx <= 0 || gps->dimx > 1000 || gps->dimy <= 20 ||
                gps->dimy > 1000 || !native_ui_settings_read_member(settings, 0x18, grid_y) ||
                grid_y <= 20 || grid_y > 1000) return count;
        // The native loop uses init.display.grid_y rather than gps.dimy.
        // Its text is two columns inside the fixed 32-column frame, with
        // at most grid_y-20 retained rows above the bottom at grid_y-6.
        const int visible_rows = static_cast<int>(std::min(count,
            static_cast<size_t>(grid_y - 20)));
        const int64_t left = int64_t(viewport_left) + 0x35;
        const int bottom = grid_y - 6;
        const int top = bottom - visible_rows - 1;
        if (left > std::numeric_limits<int>::max() || visible_rows <= 0) return count;

        NativeTooltipWidgetFrame frame;
        frame.bounds = {static_cast<int>(left), top, 32, visible_rows + 2};
        if (!native_tooltip_valid_bounds(*gps, frame.bounds)) return count;
        frame.dimx = gps->dimx;
        frame.dimy = gps->dimy;
        frame.epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
        frame.rows.assign(static_cast<size_t>(frame.bounds.h), std::string(32, ' '));
        frame.adventure_background = true;
        frame.adventure_belief = native_adventure_belief_cache();
        if (!frame.adventure_belief) frame.adventure_home = native_adventure_home_cache();
        // Keep an owned semantic document only for the paragraph actually
        // passed to this renderer; another selected sheet cannot lend one.
        const auto owns_document = [&](const auto &cache) {
            return cache && cache->rows.size() == count &&
                native_history_object_member(cache->owner, "setup_character_info",
                    "background_desc.text", sizeof(NativeBorrowedVector<uintptr_t>)) ==
                    reinterpret_cast<uintptr_t>(document);
        };
        if (!owns_document(frame.adventure_belief)) frame.adventure_belief.reset();
        if (!owns_document(frame.adventure_home)) frame.adventure_home.reset();

        auto &state = native_adventure_background_tooltip_state();
        state.previous = g_native_tooltip_write;
        state.frame = std::move(frame);
        if (!native_tooltip_begin_draw(*state.frame)) {
            state.frame.reset();
            state.previous = nullptr;
            return count;
        }
        // The existing addst entry hook captures each actual body submission
        // directly in this frame and bypasses shared-page caption discovery.
        g_native_tooltip_write = &*state.frame;
    } catch (...) {}
    return count;
}

static uintptr_t capture_native_adventure_background_end(const void *world,
        int32_t site_id) {
    NativeInputCallbackScope callback;
    // Both an empty retained vector and a non-hovered branch also converge
    // here. Restoring before the original lookup keeps every later native
    // store on its parent page even when no body row was emitted.
    try { finish_native_adventure_background_tooltip(); } catch (...) {}
    const auto original = g_native_adventure_background_hook.site;
    return callback.call_native([&] { return original(world, site_id); });
}
#endif

static bool native_adventure_background_tooltip_active() {
#ifdef _WIN32
    return g_native_adventure_background_hook.code.active();
#else
    return false;
#endif
}

static bool uninstall_native_adventure_background_tooltip() {
#ifdef _WIN32
    auto &hook = g_native_adventure_background_hook;
    if (!hook.code.uninstall("Adventure background tooltip restore")) return false;
    finish_native_adventure_background_tooltip();
    hook.count = nullptr;
    hook.site = nullptr;
#endif
    return true;
}

static bool install_native_adventure_background_tooltip(uintptr_t base) {
#ifndef _WIN32
    (void)base;
    return true;
#else
    auto &hook = g_native_adventure_background_hook;
    if (hook.code.installed) return true;
    if (native_adventure_background_tooltip_active() &&
            !uninstall_native_adventure_background_tooltip()) return false;
    if (!base || !native_pe_supported()) return false;
    struct InstallGuard {
        bool committed = false;
        ~InstallGuard() {
            if (!committed) {
                try { uninstall_native_adventure_background_tooltip(); } catch (...) {}
            }
        }
    } guard;
    std::vector<NativeCall> calls{
        // RCX already owns the retained paragraph; [RBP-0x80] is the native
        // viewport's left origin. EDX is spare at this one-argument call.
        // The relay tail-jumps into a normal Win64 callee, preserving the
        // caller's return address, alignment and shadow space. The original
        // count is returned in RAX; the continuation uses no volatile args
        // or incoming flags and all live rectangle state is nonvolatile.
        // Reference 62d352 maps to Classic 62ad72 through the PE binding.
        {0x62d352, 0x6ee50,
            reinterpret_cast<const void *>(&capture_native_adventure_background_tooltip),
            {0x8b,0x55,0x80}},
        // This is an ordinary two-argument call after all border/body paths
        // merge, including the zero-count skip. Its native RCX/RDX and RAX
        // result remain unchanged; nonvolatile registers remain ABI-owned.
        // The next MOV RBX,RAX is followed by CMP [RBP-3c],0, so no flags
        // from either the original call or our finish scope are consumed.
        // Reference 62d75a maps to Classic 62b17a.
        {0x62d75a, 0x7db20,
            reinterpret_cast<const void *>(&capture_native_adventure_background_end)},
    };
    if (!native_reference_calls(calls, 0)) return false;
    hook.count = reinterpret_cast<NativeAdventureBackgroundCountFn>(base + calls[0].target);
    hook.site = reinterpret_cast<NativeAdventureBackgroundSiteFn>(base + calls[1].target);
    if (!hook.code.install(base, calls, "Adventure background tooltip layer")) return false;
    guard.committed = true;
    return true;
#endif
}
