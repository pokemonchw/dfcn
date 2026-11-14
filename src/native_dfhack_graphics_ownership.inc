// Native reshape and viewport zoom run on the SDL thread, independently of
// DFHack's simulation-thread update. Acquire the private-output lock BEFORE
// either routine reads graphicst's pointers. Viewports stay native, but resize
// also consumes UI arrays and must not retain a private UI binding.
#include "native_dfhack_display_inputs.inc"

static NativeEntryHook g_native_dfhack_graphics_resize_entry;
static NativeEntryHook g_native_dfhack_graphics_zoom_entry;
static NativeEntryHook g_native_dfhack_graphics_release_entry;
static NativeEntryHook g_native_dfhack_graphics_display_entry;

// Display takes only a short header snapshot under the writer lock. Native
// queue completion pins the native arrays until the next render request;
// neither its map pass nor update_all needs the writer lock while painting.
static bool g_native_dfhack_render_read_ready = false;
static graphicst *native_dfhack_render_read_graphics() {
    return g_native_dfhack_render_read_ready ? native_dfhack_display_inputs_snapshot() : nullptr;
}
class NativeDfhackDisplayOwnershipScope {
    inline static thread_local NativeDfhackDisplayOwnershipScope *active_ = nullptr;
    NativeDfhackDisplayOwnershipScope *previous_ = nullptr;
    graphicst *previous_view_ = nullptr, *previous_selector_ = nullptr;
    graphicst *inputs_ = nullptr;
    // Only a reentrant display needs a private header. Keeping this inline
    // consumed about 250 KiB of the Windows render stack on every display.
    std::unique_ptr<std::array<unsigned char, sizeof(graphicst)>> nested_inputs_;
    int16_t initial_force_full_display_ = 0;
    std::optional<NativeDfhackLayerRendererGrid> renderer_grid_;
    bool committed_ = false;
public:
    explicit NativeDfhackDisplayOwnershipScope(void *renderer) : previous_(active_),
            previous_view_(g_native_graphics_read_view) {
        if (!native_dfhack_display_inputs_active()) return;
        if (previous_) nested_inputs_.reset(new (std::nothrow) std::array<unsigned char, sizeof(graphicst)>);
        inputs_ = previous_ ? reinterpret_cast<graphicst *>(nested_inputs_.get()) : native_dfhack_display_inputs_snapshot();
        if (!inputs_) return;
        const auto *preceding = previous_ ? previous_->inputs_ :
            g_native_dfhack_render_read_ready ? inputs_ : nullptr;
        const auto *refresh_buffer = preceding ? preceding->screentexpos_refresh_buffer : nullptr;
        const int32_t refresh = preceding ? preceding->refresh_buffer_val : 0;
        const int32_t dimx = preceding ? preceding->dimx : 0;
        const int32_t dimy = preceding ? preceding->dimy : 0;
        {
            std::unique_lock<std::recursive_mutex> writer(
                g_native_dfhack_layer_mutex, std::try_to_lock);
            if (writer.owns_lock()) {
                NativeDfhackNativeLayerScope native(false);
                auto *owner = native_graphics_owner();
                if (!owner) { inputs_ = nullptr; return; }
                native_dfhack_apply_render_schedule(*owner);
                std::memcpy(inputs_, owner, sizeof(graphicst));
                native_dfhack_publish_display_source(*owner);
            } else if (previous_ && previous_->inputs_) {
                std::memcpy(inputs_, previous_->inputs_, sizeof(graphicst));
            } else if (!native_dfhack_copy_display_source(*inputs_)) {
                inputs_ = nullptr;
                return;
            }
        }
        // Native display stamps its refresh buffer on the SDL thread. A
        // producer publication may precede its delayed scalar feedback; keep
        // the current stamp with the same buffer instead of replaying it.
        if (preceding && inputs_->screentexpos_refresh_buffer == refresh_buffer &&
                inputs_->dimx == dimx && inputs_->dimy == dimy)
            inputs_->refresh_buffer_val = refresh;
        initial_force_full_display_ = inputs_->force_full_display_count;
        previous_selector_ = native_dfhack_display_inputs_select(inputs_);
        g_native_graphics_read_view = inputs_;
        renderer_grid_.emplace(renderer, *inputs_, false);
        if (!previous_) g_native_dfhack_render_read_ready = true;
        active_ = this;
    }
    void resume() {
        if (!inputs_ || committed_) return;
        if (previous_ && previous_->inputs_ &&
                previous_->inputs_->screentexpos_refresh_buffer == inputs_->screentexpos_refresh_buffer)
            previous_->inputs_->refresh_buffer_val = inputs_->refresh_buffer_val;
        // A busy update never makes SDL wait for scheduling feedback. Its
        // next writer transaction drains these scalar requests itself.
        native_dfhack_queue_render_schedule(
            inputs_->refresh_buffer_val, inputs_->force_full_display_count,
            initial_force_full_display_);
        std::unique_lock<std::recursive_mutex> writer(
            g_native_dfhack_layer_mutex, std::try_to_lock);
        if (writer.owns_lock()) {
            NativeDfhackNativeLayerScope native(false);
            if (auto *owner = native_graphics_owner())
                native_dfhack_apply_render_schedule(*owner);
        }
        committed_ = true;
    }
    ~NativeDfhackDisplayOwnershipScope() {
        resume();
        if (!inputs_) return;
        renderer_grid_.reset();
        active_ = previous_;
        native_dfhack_display_inputs_select(previous_selector_);
        g_native_graphics_read_view = previous_view_;
    }
    bool valid() const noexcept { return inputs_ != nullptr; }
};

static void native_dfhack_graphics_display(void *renderer) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<void (*)(void *)>(
        g_native_dfhack_graphics_display_entry.original);
    if (!original) return;
    if (g_native_process_exiting.load(std::memory_order_acquire)) {
        callback.call_native([&] { original(renderer); });
        return;
    }
    // Pin the input header only after the producer's translation transaction
    // has finished. Waiting after that copy could pair its previous screen
    // pointers with newly published map/text-layer ownership below.
    // Header pinning and scheduling feedback only try the writer lock; a busy
    // producer therefore cannot create a T -> M blocking lock inversion.
    TranslationStateScope translation;
    NativeDfhackDisplayOwnershipScope ownership(renderer);
    if (!ownership.valid()) return;
    {
        struct OverlayReadScope {
            graphicst *previous = g_overlay.bind_render_graphics(native_graphics());
            ~OverlayReadScope() { g_overlay.bind_render_graphics(previous); }
        } overlay_read;
        NativeWorldgenDisplayScope page;
        bind_native_worldgen_display_frame(native_graphics());
        NativeMapGpuFrame map(renderer);
        NativeFortressMapHudDisplayScope fortress_hud;
        callback.call_native([&] { original(renderer); });
    }
    ownership.resume();
}
struct NativeDfhackGraphicsOwnershipScope {
    std::unique_lock<std::recursive_mutex> lock{g_native_dfhack_layer_mutex};
    graphicst *previous_read = std::exchange(g_native_graphics_read_view, nullptr);
    graphicst *previous_selector = native_dfhack_display_inputs_select(nullptr);
    NativeDfhackNativeLayerScope native;

    ~NativeDfhackGraphicsOwnershipScope() {
        // A native resize may change viewport dimensions without changing
        // the UI grid dimensions. Retire both old frame bindings, including
        // when there is no private writer on this thread to refresh them.
        g_native_dfhack_layer_staging_pending = false;
        g_native_dfhack_layer_commit_pending = false;
        g_native_dfhack_layer_page_revision.fetch_add(1, std::memory_order_release);
        g_native_dfhack_render_read_ready = false;
        native_dfhack_invalidate_display_source();
        // The preceding view may contain pointers released by this native
        // resize. Leave the SDL reader unbound until display pins new arrays.
        (void)previous_read;
        (void)previous_selector;
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
    if (g_native_process_exiting.load(std::memory_order_acquire)) {
        callback.call_native([&] {
            original(renderer, dimx, dimy, pixel_x, pixel_y, tile_x, tile_y);
        });
        return;
    }
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
    if (g_native_process_exiting.load(std::memory_order_acquire)) {
        callback.call_native([&] { original(graphics, factor); });
        return;
    }
    NativeDfhackGraphicsOwnershipScope ownership;
    callback.call_native([&] { original(graphics, factor); });
}

static void native_dfhack_graphics_release(void *renderer) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<void (*)(void *)>(
        g_native_dfhack_graphics_release_entry.original);
    if (!original) return;
    if (g_native_process_exiting.load(std::memory_order_acquire)) {
        callback.call_native([&] { original(renderer); });
        return;
    }
    NativeDfhackGraphicsOwnershipScope ownership;
    callback.call_native([&] { original(renderer); });
}

static bool install_native_dfhack_graphics_ownership() {
    constexpr const char *label = "Native graphics buffer ownership";
#ifdef _WIN32
    const auto base = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    if (!base || !native_pe_supported()) return false;
    if (!install_native_dfhack_display_inputs()) return false;
    // 0x8e4870 releases/reallocates the renderer grids and publishes their
    // pointers into graphicst, then invokes the viewport resize at 0xad9460.
    // 0xad9460 also runs separately for native zoom/reset commands. The
    // 2026-10-11 dump caught it freeing staging.output.lower[7]'s private
    // screentexpos array through the game's heap allocator.
    const std::array<std::pair<NativeEntryHook *, uintptr_t>, 4> entries{{
        {&g_native_dfhack_graphics_resize_entry, native_pe_address(base, 0x8e4870)},
        {&g_native_dfhack_graphics_zoom_entry, native_pe_address(base, 0xad9460)},
        {&g_native_dfhack_graphics_release_entry, native_pe_address(base, 0x8e4690)},
        // renderer::display begins after the producer-complete wait and
        // covers clear, viewport/map-port painting and update_all.
        {&g_native_dfhack_graphics_display_entry, native_pe_address(base, 0x8e3a10)},
    }};
    const std::array<const void *, 4> wrappers{{
        reinterpret_cast<const void *>(&native_dfhack_graphics_resize),
        reinterpret_cast<const void *>(&native_dfhack_graphics_zoom),
        reinterpret_cast<const void *>(&native_dfhack_graphics_release),
        reinterpret_cast<const void *>(&native_dfhack_graphics_display),
    }};
    const std::array<std::vector<unsigned char>, 4> prefixes{{
        {0x48,0x89,0x5c,0x24,0x08},
        {0x48,0x89,0x5c,0x24,0x08},
        {0x40,0x53,0x48,0x83,0xec,0x20},
        {0x41,0x55,0x48,0x83,0xec,0x40},
    }};
    for (size_t i = 0; i < entries.size(); ++i) {
        auto &[entry, address] = entries[i];
        if (!address || (!entry->original && !entry->prepare(
                reinterpret_cast<unsigned char *>(address), prefixes[i], wrappers[i], {}, label)) ||
                !entry->install(label)) return false;
    }
#else
    if (!native_elf_5317_address(0x13d14b0) || !install_native_dfhack_display_inputs()) return false;
    const char *names[]{"_ZN8renderer12gps_allocateEiiiiii", "_ZN9graphicst17reshape_viewportsEi",
        "_ZN16renderer_2d_baseD2Ev", "_ZN8renderer7displayEv"};
    NativeEntryHook *entries[]{&g_native_dfhack_graphics_resize_entry, &g_native_dfhack_graphics_zoom_entry,
        &g_native_dfhack_graphics_release_entry, &g_native_dfhack_graphics_display_entry};
    const void *wrappers[]{reinterpret_cast<const void *>(&native_dfhack_graphics_resize),
        reinterpret_cast<const void *>(&native_dfhack_graphics_zoom),
        reinterpret_cast<const void *>(&native_dfhack_graphics_release),
        reinterpret_cast<const void *>(&native_dfhack_graphics_display)};
    for (size_t i = 0; i < 4; ++i) {
        if (entries[i]->installed) continue;
        auto *address = static_cast<unsigned char *>(dlsym(RTLD_DEFAULT, names[i]));
        std::vector<unsigned char> prefix{0xf3,0x0f,0x1e,0xfa,0x41,0x57};
        std::vector<NativeRelativeFixup> fixups;
        if (i == 1) prefix.back() = 0x55;
        if (i == 2) {
            prefix = {0xf3,0x0f,0x1e,0xfa,0x48,0x8b,0x05,0,0,0,0};
            int32_t relative = 0;
            if (!address || !native_history_copy(reinterpret_cast<uintptr_t>(address + 7), relative)) return false;
            std::memcpy(prefix.data() + 7, &relative, 4);
            fixups.push_back({7,11,reinterpret_cast<uintptr_t>(address + 11 + relative)});
        }
        if (!address || (!entries[i]->original && !entries[i]->prepare(address, prefix, wrappers[i], fixups, label)) ||
                !entries[i]->install(label)) return false;
    }
#endif
    g_native_dfhack_graphics_ownership_ready.store(true, std::memory_order_release);
    return true;
}

static bool native_dfhack_graphics_ownership_active() {
    return g_native_dfhack_graphics_resize_entry.active() ||
        g_native_dfhack_graphics_zoom_entry.active() ||
        g_native_dfhack_graphics_release_entry.active() ||
        g_native_dfhack_graphics_display_entry.active() ||
        native_dfhack_display_inputs_active();
}

static void uninstall_native_dfhack_graphics_ownership() {
    g_native_dfhack_graphics_ownership_ready.store(false, std::memory_order_release);
    // Leave ownership protection mapped until all private drawing callbacks
    // have restored the real graphicst, including deferred DFHack retirement.
    if (native_dfhack_capture_hook_active() || native_dfhack_render_layers_active() ||
            !native_callbacks_idle()) return;
    constexpr const char *label = "Native graphics buffer ownership";
    for (auto *entry : {&g_native_dfhack_graphics_zoom_entry,
            &g_native_dfhack_graphics_resize_entry, &g_native_dfhack_graphics_release_entry,
            &g_native_dfhack_graphics_display_entry}) {
        if (entry->installed && !write_native_code_patches(
                entry->patches, false, label, &entry->installed)) continue;
        if (native_callbacks_idle()) entry->uninstall(label);
    }
    if (!g_native_dfhack_graphics_display_entry.active())
        uninstall_native_dfhack_display_inputs();
}
