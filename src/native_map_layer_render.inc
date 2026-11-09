#include "native_map_producer.inc"

// Both hosts enter the shared matcher/cache before native UI rasterization.
// Only the native array binding and the map GPU pass differ between ABIs.
static NativeUiLayerGrid g_native_ui_input;
static NativeEntryHook g_native_map_ui_draw_hook;

#ifdef _WIN32
static NativeUiLayerTarget g_native_map_target;
static NativeUiLayerTarget g_native_map_glyph_target;
static NativeEntryHook g_native_map_clear_hook;
static uint64_t g_native_map_target_serial = 0;
static uint64_t g_native_map_target_layout = 0;

static uint64_t native_map_layout_signature(const graphicst &gps) {
    uint64_t hash = 1469598103934665603ULL;
    const auto append = [&](uint64_t value) {
        hash ^= value; hash *= 1099511628211ULL;
    };
    append(g_native_map_classic);
    append(gps.viewport_zoom_factor);
    append(gps.tile_pixel_x); append(gps.tile_pixel_y);
    const auto map = [&](const void *object, size_t fields) {
        append(reinterpret_cast<uintptr_t>(object));
        if (!object) return;
        // Active flag, dimensions, clips and screen origin are scalar map
        // layout. Tile arrays/animated contents never invalidate the target.
        for (size_t field = 0; field < fields; ++field) {
            uint32_t value = 0;
            std::memcpy(&value, static_cast<const unsigned char *>(object) + field * 4, 4);
            append(value);
        }
    };
    map(gps.main_viewport, 9);
    for (const auto *lower : gps.lower_viewport) map(lower, 9);
    map(gps.main_map_port, 13);
    return hash;
}

// Both map and interface passes use display's pinned native output header.
// GPU setup and painting never retain ownership of the update-side buffers.
class NativeMapGpuFrame {
    inline static thread_local NativeMapGpuFrame *active_ = nullptr;
    NativeMapGpuFrame *previous_ = nullptr;
    void *native_renderer_ = nullptr;
    SDL_Renderer *renderer_ = nullptr;
    std::optional<NativeUiLayerSdlState> state_;
    bool previous_drawing_ = false;
    bool entered_ = false, bound_ = false;
    bool source_isolated_ = false;
    int width_ = 0, height_ = 0;
public:
    explicit NativeMapGpuFrame(void *native_renderer) {
        if (active_ || !native_renderer) return;
        native_renderer_ = native_renderer;
        previous_drawing_ = g_drawing_overlay;
        previous_ = active_;
        active_ = this;
        entered_ = true;
        // Native display paints viewport/map-port artwork before update_all.
        // This pass remains artwork when source isolation or a GPU target is
        // unavailable. Its SDL copies must never enter text glyph discovery.
        g_drawing_overlay = true;
        auto *gps = native_graphics();
        bind_native_map_display_frame(gps);
        if (!native_map_background_view(gps) ||
                g_native_map_layer.foreground.dimx != gps->dimx ||
                g_native_map_layer.foreground.dimy != gps->dimy) {
            g_native_map_target_serial = g_native_map_target_layout = 0;
            return;
        }
        source_isolated_ = true;
        std::memcpy(&renderer_, static_cast<unsigned char *>(native_renderer) + 0x108,
            sizeof(renderer_));
        if (!renderer_) {
            g_native_map_target_serial = g_native_map_target_layout = 0;
            return;
        }
        auto &layer = g_native_map_layer;
        layer.native_renderer = native_renderer;
        layer.renderer = renderer_;
        width_ = gps->screen_pixel_x; height_ = gps->screen_pixel_y;
        state_.emplace(renderer_);
        const bool new_target = !g_native_map_target.texture ||
            g_native_map_target.renderer != renderer_ ||
            g_native_map_target.width != width_ || g_native_map_target.height != height_;
        const auto layout = native_map_layout_signature(*gps);
        const bool new_layout = new_target || layout != g_native_map_target_layout ||
            (g_native_map_target_serial != g_native_map_frame_serial &&
                g_native_map_frame_serial != g_native_map_target_serial + 1);
        // Includes allocation failure: native map copies still bypass text
        // capture, and its private ASCII grid is painted before the UI.
        bound_ = g_native_map_target.prepare(renderer_, width_, height_) &&
            state_->bind(g_native_map_target.texture, width_, height_);
        if (bound_ && new_layout) {
            SDL_SetRenderDrawBlendMode(renderer_, SDL_BLENDMODE_NONE);
            SDL_SetRenderDrawColor(renderer_, 0, 0, 0, 0);
            if (SDL_RenderClear(renderer_) != 0) {
                state_->restore(); bound_ = false;
            } else {
                // A newly allocated target has no native map history. Ask
                // the normal renderer for its existing full-redraw branch
                // once; subsequent frames retain native incremental drawing.
                gps->force_full_display_count = std::max<int16_t>(
                    gps->force_full_display_count, 2);
                SDL_SetRenderDrawBlendMode(renderer_, state_->blend);
                SDL_SetRenderDrawColor(renderer_, state_->r, state_->g, state_->b, state_->a);
            }
        } else if (!bound_) {
            state_->restore();
        }
        if (bound_) {
            g_native_map_target_serial = g_native_map_frame_serial;
            g_native_map_target_layout = layout;
        } else {
            // The native dirty history still advances during direct drawing.
            // Its next usable private target must receive a complete redraw.
            g_native_map_target_serial = g_native_map_target_layout = 0;
        }
    }

    template<typename Clear>
    static bool clear_native_target(void *renderer, Clear &&clear) {
        auto *frame = active_;
        if (!frame || !frame->bound_ || frame->native_renderer_ != renderer ||
                !frame->state_) return false;
        // renderer::display's full-redraw clear belongs to the game target.
        // Keeping its opaque black background in the retained map texture
        // would let later map composition repaint the screen's outer margins.
        frame->state_->restore();
        if (SDL_GetRenderTarget(frame->renderer_) != frame->state_->target) {
            frame->bound_ = false;
            g_native_map_target_serial = g_native_map_target_layout = 0;
            return false;
        }
        clear();
        // Capture the native clear's resulting state, rather than restoring
        // the state from before display began. Its map pass follows next.
        frame->state_.emplace(frame->renderer_);
        frame->bound_ = frame->state_->bind(g_native_map_target.texture,
            frame->width_, frame->height_);
        if (frame->bound_) {
            SDL_SetRenderDrawBlendMode(frame->renderer_, SDL_BLENDMODE_NONE);
            SDL_SetRenderDrawColor(frame->renderer_, 0, 0, 0, 0);
            frame->bound_ = SDL_RenderClear(frame->renderer_) == 0;
            SDL_SetRenderDrawBlendMode(frame->renderer_, frame->state_->blend);
            SDL_SetRenderDrawColor(frame->renderer_, frame->state_->r,
                frame->state_->g, frame->state_->b, frame->state_->a);
        }
        if (!frame->bound_) {
            frame->state_->restore();
            g_native_map_target_serial = g_native_map_target_layout = 0;
        }
        // The original clear ran exactly once. Ordinary incremental displays
        // never enter here and retain their existing map pixels unchanged.
        return true;
    }

    void finish() {
        if (!entered_) return;
        if (bound_) {
            if (state_->bind_composite(width_, height_)) {
                const SDL_Rect destination{0, 0, width_, height_};
                SDL_RenderCopy(renderer_, g_native_map_target.texture, nullptr, &destination);
            }
            state_->restore();
        }
        if (source_isolated_ && renderer_ && g_native_map_classic) {
            // ASCII is a complete fresh grid each producer frame. Give it a
            // separate cleared target so a disappearing glyph cannot survive
            // in the retained graphical viewport/map-port texture.
            native_ui_present_layer(g_native_map_layer, g_native_map_glyph_target,
                renderer_, [](SDL_Renderer *renderer) {
                    native_ui_paint_grid(g_native_map_layer, renderer, {});
                });
        }
        g_drawing_overlay = previous_drawing_;
        active_ = previous_;
        entered_ = false;
    }
    static void before_ui(void *renderer) {
        if (active_ && active_->native_renderer_ == renderer) active_->finish();
    }
    bool entered() const noexcept { return entered_; }
    ~NativeMapGpuFrame() { finish(); }
    NativeMapGpuFrame(const NativeMapGpuFrame &) = delete;
    NativeMapGpuFrame &operator=(const NativeMapGpuFrame &) = delete;
};

static void native_map_clear(void *renderer) {
    NativeInputCallbackScope callback;
    TranslationStateScope translation;
    const auto original = reinterpret_cast<void (*)(void *)>(g_native_map_clear_hook.original);
    if (!original) return;
    const auto clear = [&] { callback.call_native([&] { original(renderer); }); };
    if (!NativeMapGpuFrame::clear_native_target(renderer, clear)) clear();
}
#endif

static void native_map_ui_draw(void *renderer) {
    NativeInputCallbackScope callback;
    TranslationStateScope translation;
#ifdef _WIN32
    NativeMapGpuFrame::before_ui(renderer);
#endif
    const auto original = reinterpret_cast<void (*)(void *)>(g_native_map_ui_draw_hook.original);
    if (!original) return;
    if (g_native_process_exiting.load(std::memory_order_acquire) || g_native_ui_input_masked) {
        callback.call_native([&] { original(renderer); });
        return;
    }
    auto *source = native_graphics();
    SDL_Renderer *sdl_renderer = nullptr;
    if (renderer)
        std::memcpy(&sdl_renderer, static_cast<unsigned char *>(renderer) + 0x108,
            sizeof(sdl_renderer));
    bool prepared = false;
    try { prepared = g_overlay.prepare_native_ui_input(g_native_ui_input, sdl_renderer); }
    catch (...) { /* Preserve native output when an input copy cannot be prepared. */ }
    if (!prepared || !source) {
        callback.call_native([&] { original(renderer); });
        return;
    }
    // Supply the masked copy to every native glyph/texture input, including
    // update_all's inlined top/anchor painters. Keep the original page for
    // overlay readers; the game's producer arrays are never modified here.
    auto *input = g_native_ui_input.graphics();
    {
#ifdef _WIN32
        NativeDfhackLayerRendererGrid grid(renderer, *input);
#else
        // ELF painters read the real gps as well as renderer's array slots.
        // Pin the unmasked header for callbacks, then borrow only the output
        // bindings under Linux's existing translation lock. Native texture
        // caches and command queues retain their real owner throughout.
        NativeUiTextReadView source_read(g_overlay, source, true, false);
        auto *owner = native_graphics_owner();
        NativeUiGridBinding grid(owner, *input, renderer);
#endif
        struct InputScope {
            bool previous = g_native_ui_input_masked;
            InputScope() { g_native_ui_input_masked = true; }
            ~InputScope() { g_native_ui_input_masked = previous; }
        } masked;
        callback.call_native([&] { original(renderer); });
#ifndef _WIN32
        // Output binding restoration must not discard native scheduling
        // updates made during this raster pass.
        input->refresh_buffer_val = owner->refresh_buffer_val;
        input->force_full_display_count = owner->force_full_display_count;
        input->last_display_background = owner->last_display_background;
#endif
    }
    source->refresh_buffer_val = input->refresh_buffer_val;
    source->force_full_display_count = input->force_full_display_count;
    source->last_display_background = input->last_display_background;
}

static bool install_native_map_layer_hook() {
    if (!install_native_map_producer_hook()) return false;
#ifdef _WIN32
    const auto base = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    const auto install = [&](NativeEntryHook &hook, uintptr_t coordinate,
            std::vector<unsigned char> prefix, const void *callback, const char *label) {
        if (hook.installed) return true;
        auto *entry = reinterpret_cast<unsigned char *>(native_pe_address(base, coordinate));
        if (!entry) {
            log_line("ERROR", std::string(label) + ": native function address is unavailable");
            return false;
        }
        if (!native_pe_bytes(coordinate, prefix)) {
            log_line("ERROR", std::string(label) + ": native entry signature cannot be resolved");
            return false;
        }
        return hook.prepare(entry, prefix, callback, {}, label) && hook.install(label);
    };
    return install(g_native_map_clear_hook, 0x8e1c40,
            {0x40,0x53,0x48,0x83,0xec,0x30},
            reinterpret_cast<const void *>(&native_map_clear), "Native map clear ownership") &&
        install(g_native_map_ui_draw_hook, 0x8e1c80,
            {0x48,0x89,0x5c,0x24,0x10},
            reinterpret_cast<const void *>(&native_map_ui_draw), "Native map/interface raster boundary");
#else
    if (g_native_map_ui_draw_hook.installed) return true;
    constexpr const char *label = "Native map/interface raster boundary";
    auto *entry = static_cast<unsigned char *>(dlsym(RTLD_DEFAULT,
        "_ZN16renderer_2d_base10update_allEv"));
    // Complete ELF prologue instructions, with no relative operands. Hook
    // the function entry so direct and virtual update_all calls share it.
    const std::vector<unsigned char> prefix{0xf3,0x0f,0x1e,0xfa,0x41,0x57,0x41,0x56};
    return entry && g_native_map_ui_draw_hook.prepare(entry, prefix,
        reinterpret_cast<const void *>(&native_map_ui_draw), {}, label) &&
        g_native_map_ui_draw_hook.install(label);
#endif
}

static void uninstall_native_map_layer_hook() {
    uninstall_native_map_producer_hook();
    g_native_map_ui_draw_hook.uninstall("Native map/interface raster restore");
#ifdef _WIN32
    g_native_map_clear_hook.uninstall("Native map clear ownership restore");
    if (!g_native_map_ui_draw_hook.active() && !g_native_map_clear_hook.active() &&
            !native_map_producer_hook_active()) {
        g_native_map_target.release();
        g_native_map_glyph_target.release();
        g_native_map_target_serial = g_native_map_target_layout = 0;
        g_native_ui_input = {};
        g_native_map_layer = {};
        native_map_begin_frame();
    }
#else
    if (!g_native_map_ui_draw_hook.active()) g_native_ui_input = {};
#endif
}
static bool native_map_layer_hook_active() {
    return native_map_producer_hook_active() || g_native_map_ui_draw_hook.active()
#ifdef _WIN32
        || g_native_map_clear_hook.active()
#endif
        ;
}
