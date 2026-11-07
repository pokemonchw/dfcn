// DFHack writes only to its private output buffers. Native parent rendering
// temporarily restores the game's output pointers. Registered links use DFHack's
// own constructor and chain maintenance; no registry field is overwritten.
#ifdef _WIN32
using NativeDfhackRenderMethod = void (*)(void *, uint32_t);
using NativeDfhackRenderLinkCtor = void *(*)(void *, const void *, int, void *, void *, int, const char *);
using NativeDfhackRenderLinkDtor = void (*)(void *);
using NativeDfhackRenderIdentity = const void *(*)(void *);
using NativeDfhackRenderIdentityName = const char *(*)(const void *);
using NativeDfhackRenderIdentityTable = void *(*)(const void *);
using NativeDfhackRenderScreen = void *(*)(bool);
using NativeDfhackRenderScreenPredicate = bool (*)(void *);
using NativeDfhackRenderSuspended = bool (*)(void *);
using NativeDfhackRenderUpdate = void (*)(void *, void *);

struct NativeDfhackRenderApi {
    HMODULE module = nullptr;
    void **core = nullptr;
    NativeDfhackRenderLinkCtor construct = nullptr;
    NativeDfhackRenderLinkDtor destroy = nullptr;
    dfhack::InterposeRegistry registry;
    NativeDfhackRenderIdentity identity = nullptr;
    NativeDfhackRenderIdentityName name = nullptr;
    NativeDfhackRenderIdentityTable table = nullptr;
    NativeDfhackRenderScreen screen = nullptr;
    NativeDfhackRenderScreenPredicate foreign_screen = nullptr;
    NativeDfhackRenderSuspended suspended = nullptr;
};
static NativeDfhackRenderApi g_native_dfhack_render_api;
static std::recursive_mutex g_native_dfhack_render_mutex;
static std::atomic_bool g_native_dfhack_render_enabled{false};
static std::atomic_bool g_native_dfhack_render_retiring{false};
static std::atomic_bool g_native_dfhack_render_entries_live{false};
static std::atomic<size_t> g_native_dfhack_render_objects_live{0};
static std::atomic<size_t> g_native_dfhack_render_custom_live{0};
static std::atomic_bool g_native_dfhack_render_current_foreign{false};
static std::atomic<uint64_t> g_native_dfhack_render_failures{0};
static NativeEntryHook g_native_dfhack_render_update_entry, g_native_dfhack_render_lua_entry,
    g_native_dfhack_render_thread_entry;
static std::vector<NativeImportHook> g_native_dfhack_render_custom_hooks;
static std::atomic<uint64_t> g_native_dfhack_render_registry_revision{1};
static uint64_t g_native_dfhack_render_refreshed_revision = 0;
static void *g_native_dfhack_render_refreshed_screen = nullptr;
static const void *g_native_dfhack_render_refreshed_host = nullptr;
static thread_local bool g_native_dfhack_render_maintaining = false;
static thread_local unsigned g_native_dfhack_render_foreign_depth = 0;

static bool native_dfhack_render_capture_enabled() noexcept {
    return g_native_dfhack_render_enabled.load(std::memory_order_acquire) &&
        !native_dfhack_switch_disabled();
}

struct NativeDfhackRenderForeignContentScope {
    bool entered;
    explicit NativeDfhackRenderForeignContentScope(bool enter) noexcept : entered(enter) {
        if (entered) ++g_native_dfhack_render_foreign_depth;
    }
    ~NativeDfhackRenderForeignContentScope() noexcept {
        if (entered) --g_native_dfhack_render_foreign_depth;
    }
};

static bool native_dfhack_render_suspended() noexcept {
    auto &api = g_native_dfhack_render_api;
    void *core = nullptr;
    return api.core && api.suspended && native_history_copy(
        reinterpret_cast<uintptr_t>(api.core), core) && core && api.suspended(core);
}

static void native_dfhack_render_capture_failed(bool = false) noexcept {
    // A hook failure has no authority over the game's native page.
    g_native_dfhack_render_failures.fetch_add(1, std::memory_order_release);
}

// Enter DFHack with private output pointers. No native page is copied,
// compared or restored cell by cell; the game always retains its own buffers.
struct NativeDfhackRenderFrame {
    NativeDfhackLayerWriteScope layer;
    explicit NativeDfhackRenderFrame(bool enter) noexcept : layer(enter) {}
};
struct NativeDfhackNativeRenderSegment {
    NativeDfhackNativeLayerScope layer;
};
static bool native_dfhack_render_frame_capturing(const graphicst *gps) noexcept {
    return native_dfhack_layer_write_active(gps);
}
static bool native_dfhack_render_capture_ui_write(const graphicst *gps,
        int x, int y, bool succeeded = true) noexcept {
    if (!native_dfhack_layer_write_active(gps)) return false;
    if (succeeded) native_dfhack_layer_note_ui_write(gps, x, y);
    return true;
}
// Context and executable relay have process lifetime. Clearing helper lets
// queued native entries pass through without entering an unloaded core.
struct alignas(8) NativeDfhackRenderLinkContext {
    uintptr_t helper = 0;
    uint32_t active = 0, reserved = 0;
    uintptr_t chain = 0;
    int32_t this_shift = 0;
    uint32_t padding = 0;
    // Native remove() clears chain_mptr. A queued process-lifetime relay
    // therefore needs a separate target that native chain maintenance ignores.
    uintptr_t resident_chain = 0;
    int32_t resident_shift = 0;
    uint32_t resident_padding = 0;
    const void *host = nullptr;
    void *object = nullptr;
    void *relay = nullptr;
    bool bottom = false;
    bool foreign_content = false;
    bool native_only = false;
    NativeDfhackRenderLinkContext *native_bottom = nullptr;
    uintptr_t classified_chain = 0;
    bool classified_native = false;
    uintptr_t refreshed_chain = 0;
    int32_t refreshed_shift = 0;
    void *refreshed_next = nullptr, *refreshed_previous = nullptr;
    unsigned char refreshed_applied = 0;
};
static_assert(offsetof(NativeDfhackRenderLinkContext, active) == 8);
static_assert(offsetof(NativeDfhackRenderLinkContext, chain) == 16);
static_assert(offsetof(NativeDfhackRenderLinkContext, resident_chain) == 32);
static_assert(offsetof(NativeDfhackRenderLinkContext, resident_shift) == 40);
static std::vector<NativeDfhackRenderLinkContext *> g_native_dfhack_render_links;

static bool native_dfhack_render_link_changed(const NativeDfhackRenderLinkContext &link) noexcept {
    if (!link.object) return false;
    void *next = nullptr, *previous = nullptr;
    unsigned char applied = 0;
    const auto *object = static_cast<const unsigned char *>(link.object);
    std::memcpy(&applied, object + 0x30, sizeof(applied));
    std::memcpy(&next, object + 0x40, sizeof(next));
    std::memcpy(&previous, object + 0x48, sizeof(previous));
    return link.chain != link.refreshed_chain || link.this_shift != link.refreshed_shift ||
        next != link.refreshed_next || previous != link.refreshed_previous ||
        applied != link.refreshed_applied;
}

static void native_dfhack_render_remember_link(NativeDfhackRenderLinkContext &link) noexcept {
    if (!link.object) return;
    link.refreshed_chain = link.chain;
    link.refreshed_shift = link.this_shift;
    const auto *object = static_cast<const unsigned char *>(link.object);
    std::memcpy(&link.refreshed_applied, object + 0x30, sizeof(link.refreshed_applied));
    std::memcpy(&link.refreshed_next, object + 0x40, sizeof(link.refreshed_next));
    std::memcpy(&link.refreshed_previous, object + 0x48, sizeof(link.refreshed_previous));
}

static bool native_dfhack_render_game_method(uintptr_t address) noexcept {
    HMODULE module = nullptr;
    return address && GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
        GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
        reinterpret_cast<LPCWSTR>(address), &module) && module == GetModuleHandleW(nullptr);
}

static size_t native_dfhack_render_slot() noexcept {
    return native_object_virtual_slot("abstract_interfacest", "render", 3, "void(uint32_t)", 1);
}

static void native_dfhack_render_custom_callback(void *screen, uint32_t tick) {
    NativeInputCallbackScope callback;
    NativeDfhackRenderMethod method = nullptr;
    void **table = nullptr;
    const size_t slot = native_dfhack_render_slot();
    if (slot == SIZE_MAX || !screen || !native_history_copy(reinterpret_cast<uintptr_t>(screen), table) || !table) return;
    {
        std::lock_guard<std::recursive_mutex> lock(g_native_dfhack_render_mutex);
        const auto known = std::find_if(g_native_dfhack_render_custom_hooks.begin(),
            g_native_dfhack_render_custom_hooks.end(), [&](const auto &hook) {
                return hook.slot == table + slot;
            });
        if (known != g_native_dfhack_render_custom_hooks.end())
            method = reinterpret_cast<NativeDfhackRenderMethod>(known->original);
    }
    if (!method) return;
    const bool enabled = native_dfhack_render_capture_enabled();
    NativeDfhackFrameTransactionScope transaction(enabled, screen);
    NativeDfhackRenderForeignContentScope content(enabled);
    NativeDfhackRenderFrame foreign(enabled);
    callback.call_native([&] { method(screen, tick); });
}

static bool native_dfhack_render_ensure_custom(void *screen) {
    auto &api = g_native_dfhack_render_api;
    if (!screen || !api.foreign_screen(screen) || api.identity(screen)) return true;
    void **table = nullptr;
    void *method = nullptr;
    const size_t slot = native_dfhack_render_slot();
    if (slot == SIZE_MAX || !native_history_copy(reinterpret_cast<uintptr_t>(screen), table) || !table ||
            !native_history_copy(reinterpret_cast<uintptr_t>(table + slot), method) || !method) return false;
    // The exported Lua method already has a complete entry hook. C++ custom
    // viewscreens need their full override, not the resize-only base method.
    if (method == reinterpret_cast<void *>(GetProcAddress(api.module,
            "?render@dfhack_lua_viewscreen@DFHack@@UEAAXI@Z"))) return true;
    const auto known = std::find_if(g_native_dfhack_render_custom_hooks.begin(),
        g_native_dfhack_render_custom_hooks.end(), [&](const auto &hook) { return hook.slot == table + slot; });
    if (known != g_native_dfhack_render_custom_hooks.end()) {
        if (known->installed) return true;
        if (!known->install("DFHack custom viewscreen private layer")) return false;
        g_native_dfhack_render_custom_live.fetch_add(1, std::memory_order_release);
        return true;
    }
    g_native_dfhack_render_custom_hooks.push_back({table + slot, method,
        reinterpret_cast<void *>(&native_dfhack_render_custom_callback)});
    if (!g_native_dfhack_render_custom_hooks.back().install("DFHack custom viewscreen private layer")) return false;
    g_native_dfhack_render_custom_live.fetch_add(1, std::memory_order_release);
    return true;
}

static void native_dfhack_render_link_callback(void *screen, uint32_t tick,
        NativeDfhackRenderLinkContext *context) {
    NativeInputCallbackScope callback;
    const auto method = reinterpret_cast<NativeDfhackRenderMethod>(context ? context->chain : 0);
    if (!method) return;
    void *chain_this = reinterpret_cast<void *>(reinterpret_cast<uintptr_t>(screen) +
        static_cast<intptr_t>(context->this_shift));
    if (!native_dfhack_render_capture_enabled()) {
        callback.call_native([&] { method(chain_this, tick); });
        return;
    }
    NativeDfhackRenderForeignContentScope content(context->foreign_content);
    // Only the outer viewscreen render publishes a complete private frame.
    // Native-only screens also publish an empty frame when foreign UI closes.
    NativeDfhackFrameTransactionScope transaction(!context->bottom, screen);
    if (context->classified_chain != reinterpret_cast<uintptr_t>(method)) {
        context->classified_chain = reinterpret_cast<uintptr_t>(method);
        context->classified_native = native_dfhack_render_game_method(context->classified_chain);
    }
    const bool native_method = context->classified_native;
    const auto owned = g_native_dfhack_render_api.foreign_screen;
    const bool owned_screen = owned && owned(screen);
    if (context->bottom && native_method) {
        // Only the game's method receives native output pointers. Inherited
        // plugin/sentinel chains stay private until their own game boundary.
        NativeDfhackNativeRenderSegment native;
        callback.call_native([&] { method(chain_this, tick); });
    } else if (!context->bottom && context->native_only &&
            !native_dfhack_render_link_changed(*context) &&
            (!context->native_bottom || !native_dfhack_render_link_changed(*context->native_bottom)) &&
            !context->foreign_content && !owned_screen) {
        // Our top/bottom sentinels also exist on unmodified game viewscreens.
        // Passing through their known native-only chain requires no private
        // layer switch at either side of the game render.
        callback.call_native([&] { method(chain_this, tick); });
    } else {
        NativeDfhackRenderFrame foreign(true);
        callback.call_native([&] { method(chain_this, tick); });
    }
}

static bool native_dfhack_prepare_render_link_relay(NativeDfhackRenderLinkContext *context) {
    constexpr const char *label = "DFHack render-layer native relay";
    using AddFunctionTable = BOOLEAN (WINAPI *)(PRUNTIME_FUNCTION, DWORD, DWORD64);
    const auto kernel = GetModuleHandleW(L"kernel32.dll");
    const auto register_table = kernel ? reinterpret_cast<AddFunctionTable>(
        GetProcAddress(kernel, "RtlAddFunctionTable")) : nullptr;
    if (!register_table) return false;
    std::vector<unsigned char> code;
    code.reserve(128);
    NativeRelayRange range;
    range.include(reinterpret_cast<uintptr_t>(g_native_dfhack_render_api.module));
    size_t allocation = 0;
    auto *memory = static_cast<unsigned char *>(allocate_native_relay(range, 0x228, &allocation, label));
    if (!memory) return false;
    bool registered = false;
    const auto emit = [&](std::initializer_list<unsigned char> bytes) { code.insert(code.end(), bytes); };
    const auto load_context = [&] {
        emit({0x49,0xba});
        const auto pointer = reinterpret_cast<uintptr_t>(context);
        const auto *bytes = reinterpret_cast<const unsigned char *>(&pointer);
        code.insert(code.end(), bytes, bytes + sizeof(pointer));
    };
    emit({0xf3,0x0f,0x1e,0xfa,0x48,0x83,0xec,0x48});
    emit({0x48,0x89,0x4c,0x24,0x20,0x48,0x89,0x54,0x24,0x28});
    load_context();
    emit({0xf0,0x41,0xff,0x42,0x08,0x49,0x8b,0x02,0x48,0x85,0xc0,0x74,0x00});
    const size_t no_helper = code.size() - 1;
    emit({0x4d,0x8b,0xc2,0xff,0xd0,0xeb,0x00});
    const size_t finished = code.size() - 1;
    code[no_helper] = static_cast<unsigned char>(code.size() - no_helper - 1);
    // movsxd rax,[r10+resident_shift]; add rcx,rax;
    // mov rax,[r10+resident_chain]; call rax
    emit({0x49,0x63,0x42,0x28,0x48,0x03,0xc8,0x49,0x8b,0x42,0x20,0xff,0xd0});
    code[finished] = static_cast<unsigned char>(code.size() - finished - 1);
    load_context();
    emit({0xf0,0x41,0xff,0x4a,0x08,0x48,0x83,0xc4,0x48,0xc3});
    std::copy(code.begin(), code.end(), memory);
    auto *table = reinterpret_cast<PRUNTIME_FUNCTION>(memory + 0x200);
    *table = RUNTIME_FUNCTION{};
    table->EndAddress = static_cast<DWORD>(code.size());
    table->UnwindData = 0x220;
    constexpr std::array<unsigned char, 8> unwind{1,8,1,0,8,0x82,0,0};
    std::copy(unwind.begin(), unwind.end(), memory + 0x220);
    registered = seal_native_relay(memory, allocation, label) &&
        register_table(table, 1, reinterpret_cast<DWORD64>(memory));
    if (!registered) { void *relay = memory; release_native_relay(relay, allocation, label); return false; }
    context->relay = memory;
    return true;
}

static std::string_view native_dfhack_render_name(const void *host) noexcept {
    const auto getter = g_native_dfhack_render_api.name;
    const char *name = getter && host ? getter(host) : nullptr;
    if (!name) return {};
    for (size_t size = 0; size < 128; ++size) {
        char ch = 0;
        if (!native_history_copy(reinterpret_cast<uintptr_t>(name + size), ch)) return {};
        if (!ch) return {name, size};
    }
    return {};
}

static bool native_dfhack_render_ensure_host(const void *host, bool foreign_content) {
    auto &api = g_native_dfhack_render_api;
    const size_t slot = native_dfhack_render_slot();
    if (slot == SIZE_MAX || !host || !api.table(host)) return false;
    for (bool bottom : {true, false}) {
        auto it = std::find_if(g_native_dfhack_render_links.begin(), g_native_dfhack_render_links.end(),
            [&](const auto *link) { return link->host == host && link->bottom == bottom && link->object; });
        if (it != g_native_dfhack_render_links.end()) {
            auto *link = *it;
            link->foreign_content = foreign_content;
            if (!api.registry.applied(link->object) && !api.registry.apply_function()(link->object, true)) return false;
            if (!api.registry.applied(link->object)) return false;
            std::atomic_ref<uintptr_t>(link->helper).store(
                reinterpret_cast<uintptr_t>(&native_dfhack_render_link_callback), std::memory_order_seq_cst);
            continue;
        }
        g_native_dfhack_render_links.reserve(g_native_dfhack_render_links.size() + 1);
        auto *link = static_cast<NativeDfhackRenderLinkContext *>(HeapAlloc(
            GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(NativeDfhackRenderLinkContext)));
        if (!link) return false;
        link->host = host;
        link->bottom = bottom;
        link->foreign_content = foreign_content;
        if (!native_dfhack_prepare_render_link_relay(link)) { HeapFree(GetProcessHeap(), 0, link); return false; }
        link->object = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, 0x70);
        if (!link->object) return false;
        api.construct(link->object, host, static_cast<int>(slot), link->relay, &link->chain,
            bottom ? INT_MIN : INT_MAX, bottom ? "dfcn native render segment" : "dfcn DFHack render layer");
        g_native_dfhack_render_links.push_back(link);
        g_native_dfhack_render_objects_live.fetch_add(1, std::memory_order_release);
        std::atomic_ref<uintptr_t>(link->helper).store(
            reinterpret_cast<uintptr_t>(&native_dfhack_render_link_callback), std::memory_order_seq_cst);
        if (!api.registry.apply_function()(link->object, true) || !api.registry.applied(link->object)) return false;
    }
    return true;
}

static bool native_dfhack_render_place_bottom(NativeDfhackRenderLinkContext &bottom) {
    if (!bottom.object || !bottom.bottom) return true;
    const size_t slot = native_dfhack_render_slot();
    if (slot == SIZE_MAX) return false;
    auto &registry = g_native_dfhack_render_api.registry;
    void *previous = nullptr;
    const void *previous_host = nullptr;
    if (!native_history_copy(reinterpret_cast<uintptr_t>(bottom.object) + 0x48, previous)) return false;
    if (!previous) return true;
    if (!native_history_copy(reinterpret_cast<uintptr_t>(previous), previous_host)) return false;
    if (previous_host != bottom.host) return true;

    // Native apply inserts an equal-priority link outside existing equals.
    // Collect the complete local INT_MIN group in its current inner-to-outer
    // order, before any removals invalidate the native neighbour fields.
    void *first = bottom.object;
    std::vector<void *> visited{first};
    for (;;) {
        void *inner = nullptr;
        const void *host = nullptr;
        int32_t priority = 0;
        if (!native_history_copy(reinterpret_cast<uintptr_t>(first) + 0x48, inner)) return false;
        if (!inner) break;
        if (!native_history_copy(reinterpret_cast<uintptr_t>(inner), host)) return false;
        if (host != bottom.host) break;
        if (!native_history_copy(reinterpret_cast<uintptr_t>(inner) + 0x20, priority) ||
                priority != INT_MIN || visited.size() >= 4096 ||
                std::find(visited.begin(), visited.end(), inner) != visited.end()) return false;
        visited.push_back(inner);
        first = inner;
    }
    std::vector<void *> plugins;
    visited.clear();
    bool found_bottom = false;
    for (auto *link = first; link;) {
        const void *host = nullptr;
        int32_t priority = 0, index = -1;
        if (!native_history_copy(reinterpret_cast<uintptr_t>(link), host)) return false;
        if (host != bottom.host) break;
        if (!native_history_copy(reinterpret_cast<uintptr_t>(link) + 0x20, priority)) return false;
        if (priority != INT_MIN) break;
        if (!native_history_copy(reinterpret_cast<uintptr_t>(link) + 8, index) || index != static_cast<int32_t>(slot) ||
                !registry.applied(link) || visited.size() >= 4096 ||
                std::find(visited.begin(), visited.end(), link) != visited.end()) return false;
        visited.push_back(link);
        if (link == bottom.object) found_bottom = true;
        else plugins.push_back(link);
        void *outer = nullptr;
        if (!native_history_copy(reinterpret_cast<uintptr_t>(link) + 0x40, outer)) return false;
        link = outer;
    }
    if (!found_bottom || plugins.empty()) return false;

    // All selected plugins were applied before this operation. Leave the
    // bottom applied first, then reapply every plugin in its old relative
    // order. The formal APIs retain priorities, this-adjustments and inherited
    // bookkeeping, while the loader ends with each user's enabled intent true.
    bool success = true;
    for (auto it = plugins.rbegin(); it != plugins.rend(); ++it) {
        registry.remove_function()(*it);
        if (registry.applied(*it)) { success = false; break; }
    }
    for (auto *plugin : plugins)
        if (!registry.apply_function()(plugin, true) || !registry.applied(plugin)) success = false;
    return success;
}

static bool native_dfhack_render_refresh(bool reorder) noexcept {
    // The resident switch defers apply(true) while DFHack is disabled: success
    // records enabled intent but intentionally leaves the native link inactive.
    // No render chain needs capture until that switch restores its hooks.
    if (native_dfhack_switch_disabled()) return true;
    if (!native_dfhack_render_suspended() || g_native_dfhack_render_maintaining) return false;
    struct Maintenance {
        Maintenance() { g_native_dfhack_render_maintaining = true; }
        ~Maintenance() { g_native_dfhack_render_maintaining = false; }
    } maintenance;
    try {
        std::lock_guard<std::recursive_mutex> lock(g_native_dfhack_render_mutex);
        auto &api = g_native_dfhack_render_api;
        const size_t slot = native_dfhack_render_slot();
        if (slot == SIZE_MAX) return false;
        auto *screen = api.screen(false);
        const auto *current_host = screen ? api.identity(screen) : nullptr;
        const auto revision = g_native_dfhack_render_registry_revision.load(std::memory_order_acquire);
        // The resident loader already detours apply/remove. Watch only our
        // native-maintained sentinel links instead of patching those entries
        // a second time or rebuilding the registry on every simulation tick.
        const bool changed_links = std::any_of(g_native_dfhack_render_links.begin(),
            g_native_dfhack_render_links.end(), [](const auto *link) {
                return native_dfhack_render_link_changed(*link);
            });
        if (revision == g_native_dfhack_render_refreshed_revision &&
                screen == g_native_dfhack_render_refreshed_screen &&
                current_host == g_native_dfhack_render_refreshed_host && !changed_links) return true;
        const bool changed_registry = revision != g_native_dfhack_render_refreshed_revision || changed_links;
        std::vector<void *> links;
        std::vector<const void *> hosts, foreign_hosts;
        if (!api.registry.snapshot(links)) return false;
        for (auto *link : links) {
            const void *host = nullptr;
            int32_t index = -1;
            if (!native_history_copy(reinterpret_cast<uintptr_t>(link), host) ||
                    !native_history_copy(reinterpret_cast<uintptr_t>(link) + 8, index)) return false;
            if (index != static_cast<int32_t>(slot)) continue;
            const auto name = native_dfhack_render_name(host);
            if (name.starts_with("viewscreen") || name.starts_with("dfhack_")) {
                hosts.push_back(host);
                const bool own = std::any_of(g_native_dfhack_render_links.begin(), g_native_dfhack_render_links.end(),
                    [&](const auto *known) { return known->object == link; });
                if (!own) foreign_hosts.push_back(host);
            }
        }
        g_native_dfhack_render_current_foreign.store(
            (screen && api.foreign_screen(screen)) ||
            std::find(foreign_hosts.begin(), foreign_hosts.end(), current_host) != foreign_hosts.end(),
            std::memory_order_release);
        std::vector<void *> seen;
        auto *parent_screen = screen;
        while (parent_screen) {
            if (seen.size() >= 256 || std::find(seen.begin(), seen.end(), parent_screen) != seen.end()) return false;
            seen.push_back(parent_screen);
            if (const auto *host = api.identity(parent_screen)) hosts.push_back(host);
            // DFHack custom classes are not generated DF virtual identities.
            // Their exported Lua render has its own transaction; still register
            // every native parent, since renderParent dispatches that vtable.
            else if (!api.foreign_screen(parent_screen) || !native_dfhack_render_ensure_custom(parent_screen)) return false;
            void *parent = nullptr;
            if (!native_object_read_member(parent_screen, {0x10, "viewscreen", "parent"}, parent)) return false;
            parent_screen = parent;
        }
        std::sort(hosts.begin(), hosts.end(), std::less<const void *>{});
        hosts.erase(std::unique(hosts.begin(), hosts.end()), hosts.end());
        for (const auto *host : hosts)
            if (!native_dfhack_render_ensure_host(host,
                    std::find(foreign_hosts.begin(), foreign_hosts.end(), host) != foreign_hosts.end())) return false;
        for (auto *link : g_native_dfhack_render_links)
            if (link->object && link->bottom && !native_dfhack_render_place_bottom(*link)) return false;
        // Reapply the top sentinel after plugin updates so later equal-highest
        // priorities remain inside its capture boundary. The native constructor
        // and apply/remove APIs keep inherited chains and loader intent valid.
        if (reorder || changed_registry) {
            for (auto *link : g_native_dfhack_render_links) {
                if (!link->object || link->bottom) continue;
                // A stable sentinel already encloses every plugin. Removing
                // and reapplying it on each simulation tick rewrites inherited
                // vtables and every neighbour in the native interpose chain.
                void *higher = nullptr;
                std::memcpy(&higher, static_cast<unsigned char *>(link->object) + 0x40, sizeof(higher));
                if (!higher) continue;
                api.registry.remove_function()(link->object);
                if (!api.registry.apply_function()(link->object, true)) return false;
            }
        }
        for (auto *link : g_native_dfhack_render_links) {
            if (!link->object || link->bottom) continue;
            const auto bottom = std::find_if(g_native_dfhack_render_links.begin(),
                g_native_dfhack_render_links.end(), [&](const auto *candidate) {
                    return candidate->object && candidate->bottom && candidate->host == link->host;
                });
            link->native_bottom = bottom != g_native_dfhack_render_links.end() ? *bottom : nullptr;
            link->native_only = native_dfhack_render_game_method(link->chain) ||
                (bottom != g_native_dfhack_render_links.end() &&
                 link->chain == reinterpret_cast<uintptr_t>((*bottom)->relay) &&
                 native_dfhack_render_game_method((*bottom)->chain));
        }
        for (auto *link : g_native_dfhack_render_links) native_dfhack_render_remember_link(*link);
        g_native_dfhack_render_refreshed_revision = revision;
        g_native_dfhack_render_refreshed_screen = screen;
        g_native_dfhack_render_refreshed_host = current_host;
        return true;
    } catch (...) { return false; }
}

static void native_dfhack_render_retire_links() noexcept {
    if (!native_dfhack_render_suspended()) return;
    try {
        std::lock_guard<std::recursive_mutex> lock(g_native_dfhack_render_mutex);
        auto &api = g_native_dfhack_render_api;
        for (auto &hook : g_native_dfhack_render_custom_hooks) {
            if (!hook.installed) continue;
            void *current = nullptr;
            // A C++ plugin can unload its class table after dismissing every
            // screen. Its absent slot no longer references this core.
            if (!native_history_copy(reinterpret_cast<uintptr_t>(hook.slot), current)) {
                hook.installed = false;
                g_native_dfhack_render_custom_live.fetch_sub(1, std::memory_order_release);
            } else if (hook.uninstall("DFHack custom viewscreen private layer")) {
                g_native_dfhack_render_custom_live.fetch_sub(1, std::memory_order_release);
            }
        }
        for (auto it = g_native_dfhack_render_links.rbegin(); it != g_native_dfhack_render_links.rend(); ++it) {
            auto *link = *it;
            if (!link->object) continue;
            // Do not overwrite a previously saved resident target after native
            // remove() has already cleared the formal chain_mptr.
            if (link->chain) {
                link->resident_shift = link->this_shift;
                std::atomic_ref<uintptr_t>(link->resident_chain).store(link->chain, std::memory_order_seq_cst);
            }
            std::atomic_ref<uintptr_t>(link->helper).store(0, std::memory_order_seq_cst);
            if (std::atomic_ref<uint32_t>(link->active).load(std::memory_order_seq_cst)) continue;
            api.registry.remove_function()(link->object);
            if (api.registry.applied(link->object) || std::atomic_ref<uint32_t>(link->active).load(std::memory_order_seq_cst)) continue;
            api.destroy(link->object);
            HeapFree(GetProcessHeap(), 0, link->object);
            link->object = nullptr;
            g_native_dfhack_render_objects_live.fetch_sub(1, std::memory_order_release);
        }
    } catch (...) {}
}

static void native_dfhack_render_update_callback(void *core, void *console) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeDfhackRenderUpdate>(g_native_dfhack_render_update_entry.original);
    if (!original) return;
    if (g_native_process_exiting.load(std::memory_order_acquire)) {
        callback.call_native([&] { original(core, console); });
        return;
    }
    const bool desired_enabled = g_native_dfhack_render_enabled.load(std::memory_order_acquire);
    if (!desired_enabled) native_dfhack_render_retire_links();
    const bool enabled = native_dfhack_render_capture_enabled();
    const bool guarded = enabled && native_dfhack_render_refresh(false);
    if (enabled && !guarded) native_dfhack_render_capture_failed(true);
    {
        // The resident switch can restore plugins inside this doUpdate and
        // immediately run their onUpdate callbacks. Keep private output ready
        // across that transition even when registry capture starts disabled.
        NativeDfhackRenderForeignContentScope content(desired_enabled);
        NativeDfhackLayerUpdateScope foreign(desired_enabled);
        callback.call_native([&] { original(core, console); });
    }
    if (native_dfhack_render_capture_enabled()) {
        if (!native_dfhack_render_refresh(true)) native_dfhack_render_capture_failed(true);
    } else if (native_dfhack_switch_disabled()) {
        // doUpdate still owns the resident switch's lifecycle/reenable callback.
        // Keep deferred links intact and rediscover their restored chains once
        // DFHack is enabled again, including changes made while it was off.
        g_native_dfhack_render_refreshed_revision = 0;
        g_native_dfhack_render_current_foreign.store(false, std::memory_order_release);
    }
}

static void native_dfhack_render_lua_callback(void *screen, uint32_t tick) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeDfhackRenderMethod>(g_native_dfhack_render_lua_entry.original);
    if (!original) return;
    if (g_native_process_exiting.load(std::memory_order_acquire)) {
        callback.call_native([&] { original(screen, tick); });
        return;
    }
    const bool enabled = native_dfhack_render_capture_enabled();
    const bool guarded = enabled && native_dfhack_render_refresh(false);
    if (enabled && !guarded) native_dfhack_render_capture_failed();
    NativeDfhackFrameTransactionScope transaction(enabled, screen);
    NativeDfhackRenderForeignContentScope content(enabled);
    NativeDfhackRenderFrame foreign(enabled);
    callback.call_native([&] { original(screen, tick); });
}

static void native_dfhack_render_thread_callback() {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<void (*)()>(g_native_dfhack_render_thread_entry.original);
    if (!original) return;
    if (g_native_process_exiting.load(std::memory_order_acquire)) {
        callback.call_native([&] { original(); });
        return;
    }
    const bool enabled = native_dfhack_render_capture_enabled();
    // Leave newly enqueued callbacks for the next render loop rather than
    // consuming them outside the private target after an empty observation.
    if (enabled && !native_dfhack_render_callbacks_pending()) return;
    NativeDfhackRenderForeignContentScope content(enabled);
    NativeDfhackLayerGpuScope gpu(enabled);
    if (enabled && !gpu.valid()) {
        native_dfhack_render_capture_failed();
        // The native queue also completes synchronization/lifecycle work.
        // Losing our optional target must not strand its pending callbacks.
        callback.call_native([&] { original(); });
        return;
    }
    // SDL callback batches own their GPU destination, not the simulation's
    // graphicst binding. Screen APIs acquire private CPU output ownership for
    // each write; GPU calls cannot retain that ownership across the batch.
    callback.call_native([&] { original(); });
    if (enabled) native_dfhack_commit_callback_writes();
}

static bool install_native_dfhack_render_layers() {
    std::lock_guard<std::recursive_mutex> lock(g_native_dfhack_render_mutex);
    // A deferred shutdown retains the native doUpdate entry so it can retire
    // interpose links in DFHack's own suspension context. Present retries must
    // not turn private capture back on before that retirement finishes.
    if (g_native_dfhack_render_retiring.load(std::memory_order_acquire)) return true;
    const auto module = GetModuleHandleW(L"dfhack.dll");
    bool success = false;
    struct PublishEntries {
        bool &success;
        HMODULE module;
        ~PublishEntries() {
            g_native_dfhack_render_entries_live.store(g_native_dfhack_render_update_entry.active() ||
                g_native_dfhack_render_lua_entry.active() ||
                g_native_dfhack_render_thread_entry.active() ||
                native_dfhack_gpu_target_hook_active(), std::memory_order_release);
            if (module && !success) native_dfhack_render_capture_failed(true);
        }
    } publish{success, module};
    if (!module) return true;
    if (!install_native_dfhack_gpu_target_hook()) return false;
    auto &api = g_native_dfhack_render_api;
    if (api.module == module && g_native_dfhack_render_enabled.load(std::memory_order_acquire) &&
            g_native_dfhack_render_update_entry.installed && g_native_dfhack_render_lua_entry.installed &&
            g_native_dfhack_render_thread_entry.installed) {
        success = true;
        return true;
    }
    constexpr const char *label = "DFHack private rendering layer";
    if (!api.module) {
        api.module = module;
        api.core = reinterpret_cast<void **>(GetProcAddress(module, "?active_instance@Core@DFHack@@0PEAV12@EA"));
        api.construct = reinterpret_cast<NativeDfhackRenderLinkCtor>(GetProcAddress(module,
            "??0VMethodInterposeLinkBase@DFHack@@QEAA@PEBVvirtual_identity@1@HPEAX1HPEBD@Z"));
        api.destroy = reinterpret_cast<NativeDfhackRenderLinkDtor>(GetProcAddress(module,
            "??1VMethodInterposeLinkBase@DFHack@@QEAA@XZ"));
        api.identity = reinterpret_cast<NativeDfhackRenderIdentity>(GetProcAddress(module,
            "?get@virtual_identity@DFHack@@SAPEBV12@PEAX@Z"));
        api.name = reinterpret_cast<NativeDfhackRenderIdentityName>(GetProcAddress(module,
            "?getName@compound_identity@DFHack@@QEBAPEBDXZ"));
        api.table = reinterpret_cast<NativeDfhackRenderIdentityTable>(GetProcAddress(module,
            "?vtable_ptr@virtual_identity@DFHack@@IEBAPEAXXZ"));
        api.screen = reinterpret_cast<NativeDfhackRenderScreen>(GetProcAddress(module,
            "?getCurViewscreen@Gui@DFHack@@YAPEAUviewscreen@df@@_N@Z"));
        api.foreign_screen = reinterpret_cast<NativeDfhackRenderScreenPredicate>(GetProcAddress(module,
            "?is_instance@dfhack_viewscreen@DFHack@@SA_NPEAUviewscreen@df@@@Z"));
        api.suspended = reinterpret_cast<NativeDfhackRenderSuspended>(GetProcAddress(module,
            "?isSuspended@Core@DFHack@@QEAA_NXZ"));
        if (!api.core || !api.construct || !api.destroy || !api.identity || !api.name ||
                !api.table || !api.screen || !api.foreign_screen || !api.suspended || !api.registry.bind(module)) {
            api.module = nullptr;
            report_native_patch_error("ERROR", label, "native render registry exports are unavailable");
            return false;
        }
    }
    if (!g_native_dfhack_render_update_entry.original && !g_native_dfhack_render_update_entry.prepare(
            reinterpret_cast<unsigned char *>(GetProcAddress(module,
                "?doUpdate@Core@DFHack@@AEAAXAEAVcolor_ostream@2@@Z")),
            {0x40,0x55,0x57,0x41,0x56}, reinterpret_cast<const void *>(&native_dfhack_render_update_callback), {}, label)) return false;
    if (!g_native_dfhack_render_lua_entry.original && !g_native_dfhack_render_lua_entry.prepare(
            reinterpret_cast<unsigned char *>(GetProcAddress(module,
                "?render@dfhack_lua_viewscreen@DFHack@@UEAAXI@Z")),
            {0x48,0x89,0x5c,0x24,0x18}, reinterpret_cast<const void *>(&native_dfhack_render_lua_callback), {}, label)) return false;
    if (!g_native_dfhack_render_thread_entry.original) {
        auto *entry = reinterpret_cast<unsigned char *>(GetProcAddress(module,
            "?runRenderThreadCallbacks@DFHack@@YAXXZ"));
        std::vector<unsigned char> prefix{
            0x48,0x83,0xec,0x28,0x8b,0x0d,0x5e,0x25,0x97,0x00};
        if (!native_dfhack_read_entry_prefix(entry, prefix, {6}, label)) return false;
        const auto *target = native_dfhack_relative_target(entry, 6, 10);
        if (target != native_dfhack_pe_directory_pointer(module, IMAGE_DIRECTORY_ENTRY_TLS,
                offsetof(IMAGE_TLS_DIRECTORY64, AddressOfIndex))) return false;
        const std::vector<NativeRelativeFixup> fixups{{6, 10,
            reinterpret_cast<uintptr_t>(target)}};
        if (!g_native_dfhack_render_thread_entry.prepare(entry, prefix,
                reinterpret_cast<const void *>(&native_dfhack_render_thread_callback), fixups, label)) return false;
    }
    if (!g_native_dfhack_render_update_entry.install(label) || !g_native_dfhack_render_lua_entry.install(label) ||
            !g_native_dfhack_render_thread_entry.install(label)) return false;
    g_native_dfhack_render_registry_revision.fetch_add(1, std::memory_order_release);
    g_native_dfhack_render_enabled.store(true, std::memory_order_release);
    success = true;
    return true;
}

static bool native_dfhack_render_layers_active() {
    // Layer storage queries this while holding its own mutex. This predicate
    // reads only published atomics and cannot invert the render/storage locks.
    return g_native_dfhack_render_entries_live.load(std::memory_order_acquire) ||
        g_native_dfhack_render_objects_live.load(std::memory_order_acquire) != 0 ||
        g_native_dfhack_render_custom_live.load(std::memory_order_acquire) != 0 ||
        native_dfhack_gpu_target_hook_active();
}

static void reset_native_dfhack_render_lifecycle() {
    std::lock_guard<std::recursive_mutex> lock(g_native_dfhack_render_mutex);
    // A failed shutdown still owns callbacks in this image. Only a completely
    // detached lifetime may re-enable installation when this DLL is reused.
    if (native_dfhack_render_layers_active()) return;
    g_native_dfhack_render_enabled.store(false, std::memory_order_release);
    g_native_dfhack_render_current_foreign.store(false, std::memory_order_release);
    g_native_dfhack_render_refreshed_revision = 0;
    g_native_dfhack_render_refreshed_screen = nullptr;
    g_native_dfhack_render_refreshed_host = nullptr;
    g_native_dfhack_render_registry_revision.fetch_add(1, std::memory_order_release);
    g_native_dfhack_render_retiring.store(false, std::memory_order_release);
}

static void uninstall_native_dfhack_render_layers() {
    g_native_dfhack_render_retiring.store(true, std::memory_order_release);
    g_native_dfhack_render_enabled.store(false, std::memory_order_release);
    try {
        std::lock_guard<std::recursive_mutex> lock(g_native_dfhack_render_mutex);
        struct PublishEntries {
            ~PublishEntries() {
                g_native_dfhack_render_entries_live.store(g_native_dfhack_render_update_entry.active() ||
                    g_native_dfhack_render_lua_entry.active() ||
                    g_native_dfhack_render_thread_entry.active() ||
                    native_dfhack_gpu_target_hook_active(), std::memory_order_release);
            }
        } publish;
        // Registry mutation belongs to DFHack's suspension context. Its
        // doUpdate callback can finish retirement after this SDL call returns.
        // Once those objects are gone, the paused SDL event boundary may
        // detach entry hooks without acquiring DFHack's activity lock.
        if (native_dfhack_render_suspended()) native_dfhack_render_retire_links();
        if (std::any_of(g_native_dfhack_render_links.begin(), g_native_dfhack_render_links.end(),
                [](const auto *link) { return link->object != nullptr; }) ||
                g_native_dfhack_render_custom_live.load(std::memory_order_acquire) != 0 ||
                !native_callbacks_idle()) return;
        constexpr const char *label = "DFHack private rendering layer";
        for (auto *hook : {&g_native_dfhack_render_thread_entry, &g_native_dfhack_render_lua_entry,
                &g_native_dfhack_render_update_entry}) {
            if (hook->installed && !write_native_code_patches(hook->patches, false, label, &hook->installed)) continue;
            if (native_callbacks_idle()) hook->uninstall(label);
        }
        uninstall_native_dfhack_gpu_target_hook();
    } catch (...) {}
}

static bool native_dfhack_render_native_scan_blocked(const graphicst *) noexcept { return false; }
#else
static bool install_native_dfhack_render_layers() { return true; }
static void reset_native_dfhack_render_lifecycle() {}
static void uninstall_native_dfhack_render_layers() {}
static bool native_dfhack_render_layers_active() { return false; }
static bool native_dfhack_render_native_scan_blocked(const graphicst *) noexcept { return false; }
static bool native_dfhack_render_frame_capturing(const graphicst *) noexcept { return false; }
static bool native_dfhack_render_capture_ui_write(const graphicst *, int, int, bool = true) noexcept { return false; }
#endif
