// Native reshape and viewport zoom run on the SDL thread, independently of
// DFHack's simulation-thread update. Acquire the private-output lock BEFORE
// either routine reads graphicst's pointers. Locking viewport::resize itself
// would be too late: its caller may already have retained a private viewport.
#ifdef _WIN32
static NativeEntryHook g_native_dfhack_graphics_resize_entry;
static NativeEntryHook g_native_dfhack_graphics_zoom_entry;
static NativeEntryHook g_native_dfhack_graphics_release_entry;

struct NativeDfhackGraphicsOwnershipScope {
    TranslationStateScope translation;
    std::unique_lock<std::recursive_mutex> lock{g_native_dfhack_layer_mutex};
    NativeDfhackNativeLayerScope native;

    ~NativeDfhackGraphicsOwnershipScope() {
        // A native resize may change viewport dimensions without changing
        // the UI grid dimensions. Retire both old frame bindings, including
        // when there is no private writer on this thread to refresh them.
        g_native_dfhack_layer_staging_pending = false;
        g_native_dfhack_layer_commit_pending = false;
        g_native_dfhack_layer_page_revision.fetch_add(1, std::memory_order_release);
        // native's destructor refreshes and rebinds any paused private writer
        // before the layer/translation locks are released.
    }
};

static void native_dfhack_graphics_resize(void *renderer, int32_t dimx,
        int32_t dimy, int32_t pixel_x, int32_t pixel_y,
        int32_t tile_x, int32_t tile_y) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<void (*)(void *, int32_t, int32_t,
        int32_t, int32_t, int32_t, int32_t)>(
        g_native_dfhack_graphics_resize_entry.original);
    if (!original) return;
    NativeDfhackGraphicsOwnershipScope ownership;
    callback.call_native([&] {
        original(renderer, dimx, dimy, pixel_x, pixel_y, tile_x, tile_y);
    });
}

static void native_dfhack_graphics_zoom(void *graphics, int32_t factor) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<void (*)(void *, int32_t)>(
        g_native_dfhack_graphics_zoom_entry.original);
    if (!original) return;
    NativeDfhackGraphicsOwnershipScope ownership;
    callback.call_native([&] { original(graphics, factor); });
}

static void native_dfhack_graphics_release(void *renderer) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<void (*)(void *)>(
        g_native_dfhack_graphics_release_entry.original);
    if (!original) return;
    NativeDfhackGraphicsOwnershipScope ownership;
    callback.call_native([&] { original(renderer); });
}

static bool install_native_dfhack_graphics_ownership() {
    constexpr const char *label = "Native graphics buffer ownership";
    const auto base = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    if (!base || !native_pe_supported()) return false;
    // 0x8e4870 releases/reallocates the renderer grids and publishes their
    // pointers into graphicst, then invokes the viewport resize at 0xad9460.
    // 0xad9460 also runs separately for native zoom/reset commands. The
    // 2026-10-11 dump caught it freeing staging.output.lower[7]'s private
    // screentexpos array through the game's heap allocator.
    const std::array<std::pair<NativeEntryHook *, uintptr_t>, 3> entries{{
        {&g_native_dfhack_graphics_resize_entry, native_pe_address(base, 0x8e4870)},
        {&g_native_dfhack_graphics_zoom_entry, native_pe_address(base, 0xad9460)},
        {&g_native_dfhack_graphics_release_entry, native_pe_address(base, 0x8e4690)},
    }};
    const std::array<const void *, 3> wrappers{{
        reinterpret_cast<const void *>(&native_dfhack_graphics_resize),
        reinterpret_cast<const void *>(&native_dfhack_graphics_zoom),
        reinterpret_cast<const void *>(&native_dfhack_graphics_release),
    }};
    const std::array<std::vector<unsigned char>, 3> prefixes{{
        {0x48,0x89,0x5c,0x24,0x08},
        {0x48,0x89,0x5c,0x24,0x08},
        {0x40,0x53,0x48,0x83,0xec,0x20},
    }};
    for (size_t i = 0; i < entries.size(); ++i) {
        auto &[entry, address] = entries[i];
        if (!address || (!entry->original && !entry->prepare(
                reinterpret_cast<unsigned char *>(address), prefixes[i], wrappers[i], {}, label)) ||
                !entry->install(label)) return false;
    }
    g_native_dfhack_graphics_ownership_ready.store(true, std::memory_order_release);
    return true;
}

static bool native_dfhack_graphics_ownership_active() {
    return g_native_dfhack_graphics_resize_entry.active() ||
        g_native_dfhack_graphics_zoom_entry.active() ||
        g_native_dfhack_graphics_release_entry.active();
}

static void uninstall_native_dfhack_graphics_ownership() {
    g_native_dfhack_graphics_ownership_ready.store(false, std::memory_order_release);
    // Leave ownership protection mapped until all private drawing callbacks
    // have restored the real graphicst, including deferred DFHack retirement.
    if (native_dfhack_capture_hook_active() || native_dfhack_render_layers_active() ||
            !native_callbacks_idle()) return;
    constexpr const char *label = "Native graphics buffer ownership";
    for (auto *entry : {&g_native_dfhack_graphics_zoom_entry,
            &g_native_dfhack_graphics_resize_entry, &g_native_dfhack_graphics_release_entry}) {
        if (entry->installed && !write_native_code_patches(
                entry->patches, false, label, &entry->installed)) continue;
        if (native_callbacks_idle()) entry->uninstall(label);
    }
}
#else
static bool install_native_dfhack_graphics_ownership() { return true; }
static bool native_dfhack_graphics_ownership_active() { return false; }
static void uninstall_native_dfhack_graphics_ownership() {}
#endif
