// Attribute/skill hover documents are legacy native writers. Redirect their
// complete border/body interval before any cell reaches the character page.
using NativeAdventureHoverCountFn = size_t (*)(const void *);
using NativeAdventureHoverConditionFn = bool (*)(unsigned char, unsigned char);
using NativeAdventureHoverDestroyFn = void (*)(NativeString *);
struct NativeAdventureHoverProfile {
    uintptr_t base = 0, site = 0, target = 0;
    uintptr_t condition_first = 0, condition_next = 0, condition_target = 0;
    uintptr_t destroy_site = 0, destroy_target = 0;
    NativeAdventureHoverCountFn count = nullptr;
    NativeAdventureHoverConditionFn condition = nullptr;
    NativeAdventureHoverDestroyFn destroy = nullptr;
};
#include "native_adventure_hover_profile.inc"

struct NativeAdventureHoverHook {
    NativeCallHook code;
    NativeAdventureHoverCountFn count = nullptr;
    NativeAdventureHoverConditionFn condition = nullptr;
    NativeAdventureHoverDestroyFn destroy = nullptr;
};
static NativeAdventureHoverHook g_native_adventure_hover_hook;

struct NativeAdventureHoverState {
    std::optional<NativeTooltipWidgetFrame> frame;
    NativeTooltipWidgetFrame *previous = nullptr;
};
static NativeAdventureHoverState &native_adventure_hover_state() {
    return reloadable_thread_state<NativeAdventureHoverState,
        struct AdventureHoverTooltipTag>();
}

static void finish_native_adventure_hover() {
    auto &state = native_adventure_hover_state();
    if (!state.frame) return;
    if (g_native_tooltip_write == &*state.frame)
        g_native_tooltip_write = state.previous;
    if (state.frame->isolated) native_tooltip_end_draw(*state.frame);
    state.frame.reset();
    state.previous = nullptr;
}

static size_t capture_native_adventure_hover(const void *document,
        int left, int right, int top) {
    NativeInputCallbackScope callback;
    const auto original = g_native_adventure_hover_hook.count;
    const size_t count = callback.call_native([&] { return original(document); });
    try {
        finish_native_adventure_hover();
        auto *gps = native_graphics();
        if (!gps || !gps->screen || !document || !count ||
                gps->dimx <= 0 || gps->dimx > 1000 || gps->dimy <= 0 ||
                gps->dimy > 1000 || count > 1000) return count;
        const int64_t width = int64_t(right) - left + 1;
        if (width <= 2 || width > 1004) return count;
        // Match the native renderer's bottom adjustment and its fixed top
        // limit. A clipped document owns only the rows that this pass draws.
        int64_t native_top = top;
        int64_t bottom = native_top + 1 + static_cast<int>(count);
        if (bottom >= gps->dimy - 6) {
            const int64_t shift = bottom - gps->dimy + 6;
            native_top -= shift;
            bottom -= shift;
        }
        native_top = std::max<int64_t>(16, native_top);
        if (bottom <= native_top + 1) return count;
        NativeTooltipWidgetFrame frame;
        frame.bounds = {left, static_cast<int>(native_top), static_cast<int>(width),
            static_cast<int>(bottom - native_top + 1)};
        if (!native_tooltip_valid_bounds(*gps, frame.bounds)) return count;
        frame.dimx = gps->dimx;
        frame.dimy = gps->dimy;
        frame.epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
        frame.rows.assign(static_cast<size_t>(frame.bounds.h),
            std::string(static_cast<size_t>(frame.bounds.w), ' '));
        auto &state = native_adventure_hover_state();
        state.previous = g_native_tooltip_write;
        state.frame = std::move(frame);
        if (!native_tooltip_begin_draw(*state.frame)) {
            state.frame.reset();
            state.previous = nullptr;
            return count;
        }
        g_native_tooltip_write = &*state.frame;
    } catch (...) {}
    return count;
}

static bool capture_native_adventure_hover_condition(unsigned char value,
        unsigned char expected) {
    NativeInputCallbackScope callback;
    const auto original = g_native_adventure_hover_hook.condition;
    const bool result = callback.call_native([&] { return original(value, expected); });
    if (!result) {
        try { finish_native_adventure_hover(); } catch (...) {}
    }
    return result;
}

static void capture_native_adventure_hover_truncation(NativeString *source) {
    NativeInputCallbackScope callback;
    const auto original = g_native_adventure_hover_hook.destroy;
    callback.call_native([&] { original(source); });
    // The native (etc) row has now completed its text call. This branch
    // bypasses the loop's final condition and performs no more card writes.
    try { finish_native_adventure_hover(); } catch (...) {}
}

#ifndef _WIN32
static NativeInlineObserverHook g_native_adventure_hover_begin_elf_hook, g_native_adventure_hover_end_elf_hook;
static void native_adventure_hover_begin_elf(const NativeInlineRegisters *r) noexcept {
    NativeInputCallbackScope callback;
    try {
        finish_native_adventure_hover();
        if (!r) return;
        const auto screen = native_current_viewscreen();
        if (!native_history_object_is(screen, "viewscreen_setupadventurest")) return;
        bool owned = false;
        for (const auto member : {"tooltip_phys_att_box.text", "tooltip_ment_att_box.text", "tooltip_skill_box.text"})
            owned = owned || native_history_object_member(screen, "viewscreen_setupadventurest", member, 24) == r->r13;
        NativeBorrowedVector<uintptr_t> rows;
        auto *gps = native_graphics();
        int32_t left = 0, top = 0;
        const int32_t right = static_cast<int32_t>(r->r12), bottom = static_cast<int32_t>(r->r15);
        if (!owned || !gps || !native_history_read_vector(r->r13, rows) || !rows.size() || rows.size() > 4096 ||
                !native_history_copy(r->rbp - 0x3e0, left) || !native_history_copy(r->rbp - 0x3f0, top) ||
                left > right || top >= bottom) return;
        NativeTooltipWidgetFrame frame;
        frame.bounds = {left, top, right - left + 1, bottom - top + 1};
        if (!native_tooltip_valid_bounds(*gps, frame.bounds)) return;
        frame.dimx = gps->dimx; frame.dimy = gps->dimy;
        frame.epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
        frame.rows.assign(frame.bounds.h, std::string(frame.bounds.w, ' '));
        auto &state = native_adventure_hover_state();
        state.previous = g_native_tooltip_write; state.frame = std::move(frame);
        if (!native_tooltip_begin_draw(*state.frame)) { state.frame.reset(); state.previous = nullptr; return; }
        g_native_tooltip_write = &*state.frame;
    } catch (...) {}
}
static void native_adventure_hover_end_elf(const NativeInlineRegisters *) noexcept {
    NativeInputCallbackScope callback;
    try { finish_native_adventure_hover(); } catch (...) {}
}
#endif

static bool native_adventure_hover_hook_active() {
    return g_native_adventure_hover_hook.code.active()
#ifndef _WIN32
        || g_native_adventure_hover_begin_elf_hook.active() || g_native_adventure_hover_end_elf_hook.active()
#endif
        ;
}

static bool uninstall_native_adventure_hover_hook() {
#ifndef _WIN32
    g_native_adventure_hover_begin_elf_hook.uninstall("Native ELF attribute hover begin restore");
    g_native_adventure_hover_end_elf_hook.uninstall("Native ELF attribute hover end restore");
    if (g_native_adventure_hover_begin_elf_hook.active() || g_native_adventure_hover_end_elf_hook.active()) return false;
#endif
    // A remaining relay must keep its native target, including after a
    // partially completed install or a failed restore/release operation.
    if (!g_native_adventure_hover_hook.code.uninstall("Character hover capture restore"))
        return false;
    finish_native_adventure_hover();
    g_native_adventure_hover_hook.count = nullptr;
    g_native_adventure_hover_hook.condition = nullptr;
    g_native_adventure_hover_hook.destroy = nullptr;
    return true;
}

static bool install_native_adventure_hover_hook() {
#ifndef _WIN32
    if (!native_elf_5317_address(0x112dbf8)) return true;
    if (g_native_adventure_hover_begin_elf_hook.install(reinterpret_cast<unsigned char *>(
                native_elf_5317_address(0x112dbf8)), {0x44,0x39,0xbd,0x10,0xfc,0xff,0xff},
            native_adventure_hover_begin_elf, "Native ELF attribute hover begin") &&
            g_native_adventure_hover_end_elf_hook.install(reinterpret_cast<unsigned char *>(
                native_elf_5317_address(0x111acf7)), {0x48,0x8b,0x85,0x60,0xfc,0xff,0xff},
            native_adventure_hover_end_elf, "Native ELF attribute hover end")) return true;
    uninstall_native_adventure_hover_hook();
    return false;
#else
    auto &hook = g_native_adventure_hover_hook;
    if (hook.code.installed) return true;
    if (native_adventure_hover_hook_active() && !uninstall_native_adventure_hover_hook())
        return false;
    struct InstallGuard {
        bool committed = false;
        ~InstallGuard() {
            if (!committed) {
                try { uninstall_native_adventure_hover_hook(); } catch (...) {}
            }
        }
    } guard;
    NativeAdventureHoverProfile profile;
    if (!resolve_native_adventure_hover_profile(profile)) {
        log_line("ERROR", "Cannot resolve the native character hover capture profile");
        return false;
    }
    if (!profile.count) {
        guard.committed = true;
        return true;
    }
    hook.count = profile.count;
    hook.condition = profile.condition;
    hook.destroy = profile.destroy;
    // The call relay has already pushed its return address. Preserve RCX's
    // selected document and pass the live native rectangle in spare ABI args:
    // R12D = left, ESI = right, caller [RSP+0x74] = top.
    const std::vector<NativeCall> calls{
        {profile.site, profile.target,
            reinterpret_cast<const void *>(&capture_native_adventure_hover),
            {0x44,0x89,0xe2,0x41,0x89,0xf0,0x44,0x8b,0x4c,0x24,0x7c}},
        {profile.condition_first, profile.condition_target,
            reinterpret_cast<const void *>(&capture_native_adventure_hover_condition)},
        {profile.condition_next, profile.condition_target,
            reinterpret_cast<const void *>(&capture_native_adventure_hover_condition)},
        {profile.destroy_site, profile.destroy_target,
            reinterpret_cast<const void *>(&capture_native_adventure_hover_truncation)},
    };
    if (!hook.code.install(profile.base, calls, "Character hover tooltip layer")) return false;
    guard.committed = true;
    log_line("INFO", "Enabled native character hover tooltip layer");
    return true;
#endif
}
