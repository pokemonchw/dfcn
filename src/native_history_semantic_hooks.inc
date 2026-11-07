// These calls enrich a currently active typed event. Each complete producer
// family has its own transaction; a Legends tab is not their lifetime owner.
#ifdef _WIN32
static std::array<NativeCallHook, 4> g_native_history_semantic_hooks;

static bool native_history_semantic_callback(const void *wrapper) {
    if (wrapper == reinterpret_cast<const void *>(&capture_native_history_nested_title) ||
            wrapper == reinterpret_cast<const void *>(&capture_native_history_nested_title_context) ||
            wrapper == reinterpret_cast<const void *>(&capture_native_history_artifact_item) ||
            wrapper == reinterpret_cast<const void *>(&capture_native_history_building_label)) return true;
    for (size_t i = 0; i < std::size(native_history_item_roles); ++i)
        if (wrapper == native_history_item_callback(i)) return true;
    return false;
}

static bool native_history_semantic_hooks_active() {
    return std::any_of(g_native_history_semantic_hooks.begin(), g_native_history_semantic_hooks.end(),
        [](const auto &hook) { return hook.active(); });
}

static bool uninstall_native_history_semantic_hooks() {
    for (auto &hook : g_native_history_semantic_hooks)
        if (!hook.uninstall("Native history semantic source restore")) return false;
    g_real_native_history_item = nullptr;
    g_real_native_history_artifact_item = nullptr;
    g_real_native_history_building_label = nullptr;
    return true;
}

static bool install_native_history_semantic_hooks() {
    const auto base = native_history_profile_base();
    if (!base || native_history_event_identity_base() != base) return true;
    for (size_t family = 0; family < g_native_history_semantic_hooks.size(); ++family) {
        auto &hook = g_native_history_semantic_hooks[family];
        std::vector<NativeCall> calls;
        bool ready = true;
        try {
            if (family == 0) {
                if (!native_history_formatter_method_ready("getPhrase"))
                    throw std::runtime_error("Native nested history formatter ABI unavailable");
                const auto wrapper = native_history_formatter_callback("getPhrase",
                    &capture_native_history_nested_title, &capture_native_history_nested_title_context);
                calls = {
                    {0xd3c11f, 0, wrapper, {}, {0xff,0x90,0xd8,0x00,0x00,0x00}},
                    {0xb639cf, 0, wrapper, {}, {0x41,0xff,0x92,0xd8,0x00,0x00,0x00}},
                    {0xb63a22, 0, wrapper, {}, {0x41,0xff,0x92,0xd8,0x00,0x00,0x00}},
                    {0xb8bd39, 0, wrapper, {0x48,0x8b,0xce}, {0x48,0x8b,0xce,0xff,0xd0}},
                    {0xb8c438, 0, wrapper, {0x49,0x8b,0xce}, {0x49,0x8b,0xce,0xff,0xd0}}
                };
            } else if (family == 1) {
                static constexpr uintptr_t sites[] = {
                    0xb627d0,0xb62a03,0xb633c8,0xb70b61,0xb70c05,0xb84131,0xb8b20b,0xb8cf66,
                    0xb63f09,0xb64113,0xb64af2,0xd3ca8b,0xd3cb83,0xb73a06,0xb73aa6,0xb8469d,
                    0xb8b566,0xb8db97,0xbc7624
                };
                for (size_t i = 0; i < std::size(sites); ++i)
                    calls.push_back({sites[i], 0xa82c10, native_history_item_callback(i)});
                g_real_native_history_item = reinterpret_cast<NativeHistoryItemFn>(native_reference_address(base, 0xa82c10));
                ready = g_real_native_history_item;
            } else if (family == 2) {
                for (uintptr_t call : {uintptr_t(0xb8a415), uintptr_t(0xb8a5d4), uintptr_t(0xb94583)})
                    calls.push_back({call, 0xc65450, reinterpret_cast<const void *>(&capture_native_history_artifact_item)});
                g_real_native_history_artifact_item = reinterpret_cast<NativeHistoryArtifactItemFn>(native_reference_address(base, 0xc65450));
                ready = g_real_native_history_artifact_item;
            } else {
                for (uintptr_t call : {uintptr_t(0xb6253f), uintptr_t(0xb63c9f)})
                    calls.push_back({call, 0x54d320, reinterpret_cast<const void *>(&capture_native_history_building_label)});
                g_real_native_history_building_label = reinterpret_cast<NativeHistoryBuildingLabelFn>(native_reference_address(base, 0x54d320));
                ready = g_real_native_history_building_label;
            }
            ready = ready && native_reference_calls(calls, 0) &&
                hook.install(base, calls, "Native history semantic source");
        } catch (...) { ready = false; }
        if (ready) continue;
        if (!hook.uninstall("Native history semantic source restore") || hook.active()) return false;
        if (family == 1) g_real_native_history_item = nullptr;
        if (family == 2) g_real_native_history_artifact_item = nullptr;
        if (family == 3) g_real_native_history_building_label = nullptr;
        log_line("WARN", "Native history semantic source family unavailable: " + std::to_string(family));
    }
    return true;
}
#else
static bool native_history_semantic_hooks_active() { return false; }
static bool uninstall_native_history_semantic_hooks() { return true; }
#endif
