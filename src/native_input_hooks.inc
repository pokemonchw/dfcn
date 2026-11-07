// Native locators supply entry/import metadata. UTF-8 editing, translated
// search, IME positioning and teardown use the same callbacks and state.
using NativeTextInputFn = char (*)(NativeString *, int, unsigned int, void *, const char *);
static NativeTextInputFn g_real_native_text_input = nullptr;
static NativeEntryHook g_native_text_input_entry;
static std::vector<NativeImportHook> g_native_text_input_imports;
static std::vector<NativeImportHook> g_native_start_input_imports;
static bool g_native_input_ready = false;

#ifdef _WIN32
static const void *g_native_ui_text_input_return = nullptr;
using NativeDfhackCurrentScreenFn = void *(*)(bool);
using NativeDfhackScreenPredicateFn = bool (*)(void *);
static HMODULE g_native_dfhack_input_module = nullptr;
static NativeDfhackCurrentScreenFn g_native_dfhack_input_screen = nullptr;
static NativeDfhackScreenPredicateFn g_native_dfhack_is_input_screen = nullptr;

static bool native_dfhack_has_input_focus(NativeInputCallbackScope &callback) {
    const auto module = GetModuleHandleW(L"dfhack.dll");
    if (!module) return false;
    constexpr size_t focus_slot = 0x68;
    if (module != g_native_dfhack_input_module) {
        g_native_dfhack_input_module = module;
        g_native_dfhack_input_screen = nullptr;
        g_native_dfhack_is_input_screen = nullptr;
        // Prove the virtual slot against both exported DFHack screen classes.
        // Lua screens can be defocused; the base class always owns its input.
        for (const auto &[table_name, method_name] : {
                std::pair{"??_7dfhack_viewscreen@DFHack@@6B@",
                    "?isFocused@dfhack_viewscreen@DFHack@@UEAA_NXZ"},
                std::pair{"??_7dfhack_lua_viewscreen@DFHack@@6B@",
                    "?isFocused@dfhack_lua_viewscreen@DFHack@@UEAA_NXZ"}}) {
            const auto table = reinterpret_cast<uintptr_t>(GetProcAddress(module, table_name));
            const auto method = reinterpret_cast<uintptr_t>(GetProcAddress(module, method_name));
            uintptr_t slot = 0;
            if (!table || !method || !native_history_copy(table + focus_slot, slot) ||
                    slot != method) return false;
        }
        g_native_dfhack_input_screen = reinterpret_cast<NativeDfhackCurrentScreenFn>(
            GetProcAddress(module, "?getCurViewscreen@Gui@DFHack@@YAPEAUviewscreen@df@@_N@Z"));
        g_native_dfhack_is_input_screen = reinterpret_cast<NativeDfhackScreenPredicateFn>(
            GetProcAddress(module, "?is_instance@dfhack_viewscreen@DFHack@@SA_NPEAUviewscreen@df@@@Z"));
    }
    if (!g_native_dfhack_input_screen || !g_native_dfhack_is_input_screen) return false;
    void *screen = callback.call_native([] { return g_native_dfhack_input_screen(false); });
    if (!screen || !callback.call_native([&] { return g_native_dfhack_is_input_screen(screen); }))
        return false;
    uintptr_t table = 0, method = 0;
    NativePatchProtection protection = 0;
    unsigned long error = 0;
    if (!native_history_copy(reinterpret_cast<uintptr_t>(screen), table) ||
            !table || !native_history_copy(table + focus_slot, method) || !method ||
            !native_patch_page_protection(method, 1, protection, error) ||
            !native_patch_executable(protection)) return false;
    return callback.call_native([&] {
        return reinterpret_cast<NativeDfhackScreenPredicateFn>(method)(screen);
    });
}
#endif

struct NativeInputProfile {
    unsigned char *entry = nullptr;
    std::vector<unsigned char> prefix;
    NativeTextInputFn original = nullptr;
    std::vector<void **> text_slots, start_slots;
    NativeArenaContext arena;
#ifdef _WIN32
    const void *ui_text_input_return = nullptr;
#endif
};
#include "native_input_profile.inc"

static char dfcn_native_text_input(NativeString *target, int maximum,
        unsigned int flags, void *keys, const char *input) {
    NativeInputCallbackScope callback;
#ifdef _WIN32
    // The UI tick edits the game's global textbox before feeding the top
    // screen, and clears last_text_input when that editor handles a key.
    // A covered native textbox must not consume DFHack's committed text.
    // Scope this to the tick's pre-feed call: explicit parent editing and
    // defocused DFHack screens retain their original input path.
    if (__builtin_return_address(0) == g_native_ui_text_input_return) {
        try { if (native_dfhack_has_input_focus(callback)) return 0; } catch (...) {}
    }
#endif
    try { position_native_ime(target); } catch (...) {}
    try { capture_name_editor_search_input(target, maximum, flags); } catch (...) {}
    return capture_native_text_input(target, maximum, flags, keys, input,
        g_real_native_text_input, callback);
}

static bool native_input_hooks_active() {
    return g_native_text_input_entry.active() || native_ime_hooks_active() ||
        std::any_of(g_native_text_input_imports.begin(), g_native_text_input_imports.end(),
            [](const auto &hook) { return hook.active(); }) ||
        std::any_of(g_native_start_input_imports.begin(), g_native_start_input_imports.end(),
            [](const auto &hook) { return hook.active(); });
}

static void uninstall_native_input_hooks() {
    g_native_input_ready = false;
    uninstall_native_ime_hooks();
    for (auto it = g_native_start_input_imports.rbegin(); it != g_native_start_input_imports.rend(); ++it)
        it->uninstall("SDL text-input binding");
    for (auto it = g_native_text_input_imports.rbegin(); it != g_native_text_input_imports.rend(); ++it)
        it->uninstall("Native text-input binding");
    // Keep the original entry trampoline while any native callback can still
    // be using it. The common shutdown retains the core and retries later.
    if (native_callbacks_idle()) {
        g_native_text_input_entry.uninstall("Native text-input entry");
        clear_native_arena_context();
    }
}

static bool install_native_input_hooks() {
    if (g_native_input_ready) return true;
    if (native_input_hooks_active()) {
        uninstall_native_input_hooks();
        if (native_input_hooks_active()) return false;
    }
    NativeInputProfile profile;
    if (!prepare_native_input_profile(profile)) {
        log_line("ERROR", "Cannot validate native Unicode input bindings");
        return false;
    }
    g_native_text_input_imports.clear();
    g_native_start_input_imports.clear();
    for (void **slot : profile.text_slots)
        g_native_text_input_imports.push_back({slot, nullptr, reinterpret_cast<void *>(&dfcn_native_text_input)});
    for (void **slot : profile.start_slots)
        g_native_start_input_imports.push_back({slot, nullptr, reinterpret_cast<void *>(&dfcn_start_text_input)});
    if (profile.entry) {
        if (!g_native_text_input_entry.prepare(profile.entry, profile.prefix,
                reinterpret_cast<const void *>(&dfcn_native_text_input), {}, "Native text-input entry")) return false;
        profile.original = reinterpret_cast<NativeTextInputFn>(g_native_text_input_entry.original);
    }
    if (!profile.original || (!profile.entry && profile.text_slots.empty())) return false;
    g_real_native_text_input = profile.original;
#ifdef _WIN32
    g_native_ui_text_input_return = profile.ui_text_input_return;
#endif
    g_real_start_text_input = &SDL_StartTextInput;
    auto failed = [] {
        uninstall_native_input_hooks();
        return false;
    };
    if (profile.entry && !g_native_text_input_entry.install("Native text-input entry")) return failed();
    for (auto &hook : g_native_text_input_imports)
        if (!hook.install("Native text-input binding")) return failed();
    for (auto &hook : g_native_start_input_imports)
        if (!hook.install("SDL text-input binding")) return failed();
    if (!install_native_ime_hooks()) return failed();
    bind_native_arena_context(profile.arena.picker, profile.arena.raws, profile.arena.filter);
    g_native_input_ready = true;
    log_line("INFO", "Enabled shared Unicode editing and IME positioning");
    if (g_native_arena.picker)
        log_line("INFO", "Enabled optional translated Arena creature search");
    else
        log_line("WARN", "Arena creature-search bindings are incomplete; native Arena search remains active");
    return true;
}

static void native_cleanup() {
    // Called only after every feature detached and callbacks reached zero.
    g_real_native_text_input = nullptr;
#ifdef _WIN32
    g_native_ui_text_input_return = nullptr;
    g_native_dfhack_input_module = nullptr;
    g_native_dfhack_input_screen = nullptr;
    g_native_dfhack_is_input_screen = nullptr;
#endif
    g_native_text_input_imports.clear();
    g_native_start_input_imports.clear();
    clear_native_arena_context();
    clear_name_editor_search();
    cleanup_native_ime_state();
}
