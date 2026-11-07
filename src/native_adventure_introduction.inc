// Releases use either MessageBoxA or MessageBoxW for this native error. Bind
// the actual import by name; string pooling and literal encoding are not
// executable-address contracts. Other dialogs retain their original handler.
#ifdef _WIN32
static NativeImportHook g_native_adventure_message_a, g_native_adventure_message_w;
using NativeAdventureMessageA = int (WINAPI *)(HWND, LPCSTR, LPCSTR, UINT);
using NativeAdventureMessageW = int (WINAPI *)(HWND, LPCWSTR, LPCWSTR, UINT);

static int WINAPI native_adventure_message_a(HWND window, LPCSTR text, LPCSTR caption, UINT flags) {
    if (text && caption && std::strcmp(text, "Could not locate adventure start square") == 0 &&
            std::strcmp(caption, "FATAL ERROR") == 0)
        return MessageBoxW(window, L"无法找到冒险起始方格", L"致命错误", flags);
    return reinterpret_cast<NativeAdventureMessageA>(g_native_adventure_message_a.original)(
        window, text, caption, flags);
}

static int WINAPI native_adventure_message_w(HWND window, LPCWSTR text, LPCWSTR caption, UINT flags) {
    if (text && caption && lstrcmpW(text, L"Could not locate adventure start square") == 0 &&
            lstrcmpW(caption, L"FATAL ERROR") == 0)
        return MessageBoxW(window, L"无法找到冒险起始方格", L"致命错误", flags);
    return reinterpret_cast<NativeAdventureMessageW>(g_native_adventure_message_w.original)(
        window, text, caption, flags);
}

static bool native_adventure_introduction_hooks_active() {
    return g_native_adventure_message_a.active() || g_native_adventure_message_w.active();
}

static void uninstall_native_adventure_introduction_hooks() {
    constexpr const char *label = "Native adventure introduction error text";
    g_native_adventure_message_w.uninstall(label);
    g_native_adventure_message_a.uninstall(label);
}

static bool install_native_adventure_introduction_hooks() {
    constexpr const char *label = "Native adventure introduction error text";
    if (!native_validate_game()) return false;
    const auto module = GetModuleHandleW(nullptr);
    auto prepare = [&](NativeImportHook &hook, const char *symbol, void *replacement) {
        if (hook.installed) return true;
        hook.slot = find_iat_slot(module, "USER32.dll", symbol);
        if (!hook.slot) return true; // The target release does not use this import.
        hook.replacement = replacement;
        return hook.install(label);
    };
    if (!prepare(g_native_adventure_message_a, "MessageBoxA", reinterpret_cast<void *>(&native_adventure_message_a)) ||
            !prepare(g_native_adventure_message_w, "MessageBoxW", reinterpret_cast<void *>(&native_adventure_message_w))) {
        uninstall_native_adventure_introduction_hooks();
        return false;
    }
    return true;
}
#else
static bool native_adventure_introduction_hooks_active() { return false; }
static bool install_native_adventure_introduction_hooks() { return true; }
static void uninstall_native_adventure_introduction_hooks() {}
#endif
