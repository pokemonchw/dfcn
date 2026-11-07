// DFHack owns this target and its logical buffers. Native rendering and native
// translation finish before this layer is composed; no game pixels are read.
#ifdef _WIN32
static graphicst *native_dfhack_display_inputs_select(graphicst *inputs) noexcept;

static bool native_dfhack_switch_disabled() noexcept {
    using Query = int (*)() noexcept;
    // The resident loader is already mapped before it initializes this core.
    // A standalone core or an older loader keeps its existing display behavior.
    static const auto query = []() -> Query {
        const auto loader = GetModuleHandleW(L"dfhooks_dfcn.dll");
        return loader ? reinterpret_cast<Query>(GetProcAddress(loader,
            "dfcn_is_dfhack_disabled_v1")) : nullptr;
    }();
    return query && query() != 0;
}

static SDL_BlendMode native_dfhack_layer_composite_blend() noexcept {
    // Drawing onto a transparent target already multiplies color by alpha.
    // Composing that target must use the stored color once, without a second
    // alpha multiplication along glyph edges and translucent artwork.
    return SDL_ComposeCustomBlendMode(
        SDL_BLENDFACTOR_ONE, SDL_BLENDFACTOR_ONE_MINUS_SRC_ALPHA,
        SDL_BLENDOPERATION_ADD,
        SDL_BLENDFACTOR_ONE, SDL_BLENDFACTOR_ONE_MINUS_SRC_ALPHA,
        SDL_BLENDOPERATION_ADD);
}

struct NativeDfhackLayerTarget {
    SDL_Renderer *renderer = nullptr;
    SDL_Texture *texture = nullptr;
    int width = 0, height = 0;

    void release() noexcept {
        if (texture) SDL_DestroyTexture(texture);
        texture = nullptr;
        renderer = nullptr;
        width = height = 0;
    }
    bool prepare(SDL_Renderer *current, int w, int h) noexcept {
        if (texture && renderer == current && width == w && height == h) return true;
        release();
        if (!current || w <= 0 || h <= 0) return false;
        auto *made = SDL_CreateTexture(current, SDL_PIXELFORMAT_RGBA8888,
            SDL_TEXTUREACCESS_TARGET, w, h);
        if (!made) return false;
        if (SDL_SetTextureBlendMode(made, native_dfhack_layer_composite_blend()) != 0) {
            SDL_DestroyTexture(made);
            return false;
        }
        renderer = current;
        texture = made;
        width = w;
        height = h;
        return true;
    }
};
static NativeDfhackLayerTarget g_native_dfhack_layer_target;
static NativeDfhackLayerTarget g_native_dfhack_gpu_target;
// Only the SDL consumer mutates the paint copy. The published frame remains
// immutable for the producer handoff and the translation worker.
static std::shared_ptr<const NativeDfhackLayerStorage> g_native_dfhack_paint_source;
static std::shared_ptr<NativeDfhackLayerStorage> g_native_dfhack_paint_storage;
static std::shared_ptr<const NativeDfhackTranslatedFrame> g_native_dfhack_painted_frame;
static uint64_t g_native_dfhack_gpu_page_revision = 0;
static uint64_t g_native_dfhack_gpu_revision = 0;
static bool g_native_dfhack_gpu_target_initialized = false;
static bool g_native_dfhack_gpu_frame_ready = false;
static bool g_native_dfhack_gpu_known_graphical = false;
static bool g_native_dfhack_gpu_translation_enabled = true;
static std::atomic_bool g_native_dfhack_gpu_draw_exports_covered{false};
static std::atomic_uint64_t g_native_dfhack_gpu_draw_coverage_generation{0};
static uint64_t g_native_dfhack_gpu_graphics_generation = 0;
static std::atomic_uint64_t g_native_dfhack_gpu_content_page{0};
static std::atomic_bool g_native_dfhack_gpu_content_ready{false};

static void native_dfhack_publish_gpu_content(bool ready) noexcept {
    if (!ready) {
        g_native_dfhack_gpu_content_ready.store(false, std::memory_order_release);
        return;
    }
    g_native_dfhack_gpu_content_page.store(g_native_dfhack_gpu_page_revision,
        std::memory_order_relaxed);
    g_native_dfhack_gpu_content_ready.store(true, std::memory_order_release);
}

static bool native_dfhack_gpu_translation_content_active() noexcept {
    // A CPU worker needs only conservative content evidence. SDL target
    // pointers and their lifetime remain exclusive to the render thread.
    return g_native_dfhack_gpu_content_ready.load(std::memory_order_acquire) &&
        g_native_dfhack_gpu_content_page.load(std::memory_order_relaxed) ==
            native_dfhack_layer_page_revision();
}

struct NativeDfhackLayerSdlState {
    SDL_Renderer *renderer;
    SDL_Texture *target;
    SDL_Rect viewport{}, clip{};
    float scale_x = 1.0f, scale_y = 1.0f;
    int logical_width = 0, logical_height = 0;
    SDL_bool integer_scale = SDL_FALSE;
    SDL_BlendMode blend = SDL_BLENDMODE_NONE;
    Uint8 r = 0, g = 0, b = 0, a = 255;
    bool clipped = false, restored = false;

    explicit NativeDfhackLayerSdlState(SDL_Renderer *current) noexcept
        : renderer(current), target(SDL_GetRenderTarget(current)) {
        SDL_RenderGetViewport(renderer, &viewport);
        SDL_RenderGetScale(renderer, &scale_x, &scale_y);
        SDL_RenderGetLogicalSize(renderer, &logical_width, &logical_height);
        integer_scale = SDL_RenderGetIntegerScale(renderer);
        clipped = SDL_RenderIsClipEnabled(renderer) == SDL_TRUE;
        SDL_RenderGetClipRect(renderer, &clip);
        SDL_GetRenderDrawBlendMode(renderer, &blend);
        SDL_GetRenderDrawColor(renderer, &r, &g, &b, &a);
    }
    bool bind(SDL_Texture *foreign, int width, int height) noexcept {
        if (SDL_SetRenderTarget(renderer, foreign) != 0) return false;
        restored = false;
        const SDL_Rect full{0, 0, width, height};
        return SDL_RenderSetLogicalSize(renderer, 0, 0) == 0 &&
            SDL_RenderSetIntegerScale(renderer, SDL_FALSE) == 0 &&
            SDL_RenderSetViewport(renderer, &full) == 0 &&
            SDL_RenderSetScale(renderer, 1.0f, 1.0f) == 0 &&
            SDL_RenderSetClipRect(renderer, nullptr) == 0;
    }
    bool bind_composite(int width, int height) noexcept {
        if (width <= 0 || height <= 0) return false;
        restored = false;
        // Rebuild the full logical-screen transform for the entry target.
        // SDL handles window letterboxing and texture target dimensions;
        // a native widget's retained viewport/clip cannot trim this layer.
        return SDL_SetRenderTarget(renderer, target) == 0 &&
            SDL_RenderSetIntegerScale(renderer, integer_scale) == 0 &&
            SDL_RenderSetLogicalSize(renderer, width, height) == 0 &&
            SDL_RenderSetClipRect(renderer, nullptr) == 0;
    }
    void restore() noexcept {
        if (restored) return;
        if (SDL_SetRenderTarget(renderer, target) != 0) return;
        SDL_RenderSetLogicalSize(renderer, logical_width, logical_height);
        SDL_RenderSetIntegerScale(renderer, integer_scale);
        SDL_RenderSetScale(renderer, scale_x, scale_y);
        SDL_RenderSetViewport(renderer, &viewport);
        SDL_RenderSetClipRect(renderer, clipped ? &clip : nullptr);
        SDL_SetRenderDrawBlendMode(renderer, blend);
        SDL_SetRenderDrawColor(renderer, r, g, b, a);
        restored = true;
    }
    ~NativeDfhackLayerSdlState() noexcept { restore(); }
};

struct NativeDfhackLayerRendererGrid {
    void *renderer;
    graphicst *previous_inputs = nullptr;
    graphicst *previous_read_view = nullptr;
    std::array<void *, 14> previous{};
    std::array<void *, 14> fields{};
    unsigned char *viewport_zoom = nullptr;
    bool bound = false;
    unsigned char previous_viewport_zoom = 0;
    bool restore_viewport_zoom = true;

    NativeDfhackLayerRendererGrid(void *current, graphicst &gps,
            bool preserve_viewport_zoom = true) noexcept
        : renderer(current), previous_inputs(native_dfhack_display_inputs_select(&gps)),
          previous_read_view(g_native_graphics_read_view),
          restore_viewport_zoom(preserve_viewport_zoom) {
        // Native helpers consume this SDL thread's owned paint input. The
        // producer can keep the real graphicst bound to private writes while
        // these helpers read or update their independent rendering state.
        g_native_graphics_read_view = &gps;
        // renderer has the same seven fields in each plane, but its top
        // texture field order differs from graphicst's field order.
        const std::array<void *, 14> private_grid{{
            gps.screen, gps.screentexpos, gps.screentexpos_lower,
            gps.screentexpos_anchored, gps.screentexpos_anchored_x,
            gps.screentexpos_anchored_y, gps.screentexpos_flag,
            gps.screen_top, gps.screentexpos_top, gps.screentexpos_top_lower,
            gps.screentexpos_top_anchored, gps.screentexpos_top_anchored_x,
            gps.screentexpos_top_anchored_y, gps.screentexpos_top_flag
        }};
        if (!native_renderer_output_members(renderer, fields)) return;
        for (size_t index = 0; index < fields.size(); ++index) {
            std::memcpy(&previous[index], fields[index], sizeof(void *));
        }
        // Native viewport tile drawing sets this flag and ends by clearing
        // it. Keep the game's entry value around the private render passes.
        if (restore_viewport_zoom) {
            viewport_zoom = static_cast<unsigned char *>(native_object_member_address(renderer,
                {0x180, "renderer_2d_base", "use_viewport_zoom"}, sizeof(unsigned char)));
            if (!viewport_zoom) return;
            previous_viewport_zoom = *viewport_zoom;
        }
        for (size_t index = 0; index < fields.size(); ++index)
            std::memcpy(fields[index], &private_grid[index], sizeof(void *));
        bound = true;
    }
    bool valid() const noexcept { return bound; }
    ~NativeDfhackLayerRendererGrid() noexcept {
        if (bound) {
            for (size_t index = 0; index < fields.size(); ++index)
                std::memcpy(fields[index], &previous[index], sizeof(void *));
            if (restore_viewport_zoom) *viewport_zoom = previous_viewport_zoom;
        }
        native_dfhack_display_inputs_select(previous_inputs);
        g_native_graphics_read_view = previous_read_view;
    }
};

struct NativeDfhackLayerDrawingScope {
    bool previous = g_drawing_overlay;
    NativeDfhackLayerDrawingScope() noexcept { g_drawing_overlay = true; }
    ~NativeDfhackLayerDrawingScope() noexcept { g_drawing_overlay = previous; }
};

struct NativeDfhackLayerNativeRenderer {
    void *object = nullptr;
    void **methods = nullptr;
    SDL_Renderer *sdl = nullptr;

    static NativeDfhackLayerNativeRenderer current() noexcept {
        NativeDfhackLayerNativeRenderer result;
        if (!native_pe_supported()) return result;
        if (!native_pe_read_field(0x02390290, 0x38, result.object) ||
                !result.object || !native_history_copy(
                    reinterpret_cast<uintptr_t>(result.object), result.methods) ||
                !result.methods) return {};
        using RendererGetter = SDL_Renderer *(*)(void *);
        const auto getter = reinterpret_cast<RendererGetter>(native_object_virtual_method(
            result.methods, "renderer", "get_renderer", 19, "pointer()", 0));
        if (getter) result.sdl = getter(result.object);
        return result;
    }
};

static bool native_dfhack_layer_target_size(SDL_Renderer *renderer,
        const NativeDfhackLayerSdlState &state, int &width, int &height,
        const graphicst *gps = nullptr) noexcept {
    width = state.logical_width > 0 ? state.logical_width : gps ? gps->screen_pixel_x : 0;
    height = state.logical_height > 0 ? state.logical_height : gps ? gps->screen_pixel_y : 0;
    return (width > 0 && height > 0) ||
        (SDL_GetRendererOutputSize(renderer, &width, &height) == 0 && width > 0 && height > 0);
}

// This scope is entered only from DFHack's SDL render-thread callback boundary.
// Redirecting the renderer once also isolates Clear, Fill, Copy and Geometry;
// simulation-thread updates never create or bind an SDL target.
class NativeDfhackLayerGpuScope {
    inline static thread_local NativeDfhackLayerGpuScope *active_ = nullptr;
    NativeDfhackLayerGpuScope *previous_ = nullptr, *owner_ = nullptr;
    std::optional<NativeDfhackLayerSdlState> game_state_, paused_gpu_state_;
    SDL_Renderer *renderer_ = nullptr;
    uint64_t page_revision_ = 0;
    unsigned paused_ = 0;
    bool entered_ = false, previous_drawing_ = false;
    bool translation_enabled_ = true;

public:
    explicit NativeDfhackLayerGpuScope(bool enter = true) noexcept {
        if (!enter) return;
        previous_ = active_;
        previous_drawing_ = g_drawing_overlay;
        if (previous_ && previous_->owner_ && !previous_->owner_->paused_) {
            owner_ = previous_->owner_;
            renderer_ = owner_->renderer_;
            entered_ = true;
            active_ = this;
            g_drawing_overlay = true;
            return;
        }
        const auto native = NativeDfhackLayerNativeRenderer::current();
        if (!native.sdl) return;
        translation_enabled_ = g_overlay.translation_enabled();
        renderer_ = native.sdl;
        game_state_.emplace(renderer_);
        int width = 0, height = 0;
        if (!native_dfhack_layer_target_size(renderer_, *game_state_, width, height)) {
            game_state_->restore();
            return;
        }
        auto &target = g_native_dfhack_gpu_target;
        const bool retained = target.texture && target.renderer == renderer_ &&
            target.width == width && target.height == height;
        if (!retained) {
            g_native_dfhack_gpu_target_initialized = false;
            g_native_dfhack_gpu_frame_ready = false;
            g_native_dfhack_gpu_known_graphical = false;
            native_dfhack_publish_gpu_content(false);
        }
        if (!target.prepare(renderer_, width, height) ||
                !game_state_->bind(target.texture, width, height)) {
            game_state_->restore();
            return;
        }
        page_revision_ = native_dfhack_layer_page_revision();
        if (!g_native_dfhack_gpu_target_initialized ||
                g_native_dfhack_gpu_page_revision != page_revision_ ||
                g_native_dfhack_gpu_translation_enabled != translation_enabled_) {
            SDL_SetRenderDrawBlendMode(renderer_, SDL_BLENDMODE_NONE);
            SDL_SetRenderDrawColor(renderer_, 0, 0, 0, 0);
            if (SDL_RenderClear(renderer_) != 0) {
                g_native_dfhack_gpu_target_initialized = false;
                g_native_dfhack_gpu_frame_ready = false;
                g_native_dfhack_gpu_known_graphical = false;
                native_dfhack_publish_gpu_content(false);
                game_state_->restore();
                return;
            }
            g_native_dfhack_gpu_page_revision = page_revision_;
            g_native_dfhack_gpu_translation_enabled = translation_enabled_;
            g_native_dfhack_gpu_target_initialized = true;
            g_native_dfhack_gpu_known_graphical =
                g_native_dfhack_gpu_draw_exports_covered.load(std::memory_order_acquire);
            g_native_dfhack_gpu_graphics_generation =
                g_native_dfhack_gpu_draw_coverage_generation.load(std::memory_order_acquire);
        }
        if (!g_native_dfhack_gpu_draw_exports_covered.load(std::memory_order_acquire) ||
                g_native_dfhack_gpu_graphics_generation !=
                    g_native_dfhack_gpu_draw_coverage_generation.load(std::memory_order_acquire))
            g_native_dfhack_gpu_known_graphical = false;
        // Publish only after this SDL callback batch finishes. Repeated
        // Presents can reuse the target until a page change; CPU readers
        // receive content evidence rather than the SDL-owned texture.
        g_native_dfhack_gpu_frame_ready = false;
        native_dfhack_publish_gpu_content(false);
        // The transparent clear uses its own draw state; callback drawing
        // starts with the same color and blend mode it had on the game target.
        SDL_SetRenderDrawBlendMode(renderer_, game_state_->blend);
        SDL_SetRenderDrawColor(renderer_, game_state_->r, game_state_->g,
            game_state_->b, game_state_->a);
        owner_ = this;
        entered_ = true;
        active_ = this;
        g_drawing_overlay = true;
    }
    NativeDfhackLayerGpuScope(const NativeDfhackLayerGpuScope &) = delete;
    NativeDfhackLayerGpuScope &operator=(const NativeDfhackLayerGpuScope &) = delete;
    ~NativeDfhackLayerGpuScope() noexcept {
        // The SetRenderTarget export is intercepted too. Leave the foreign
        // boundary before restoring its entry target, so restoration cannot
        // redirect itself back into the private target.
        if (entered_) active_ = previous_;
        if (owner_ == this) {
            // A still-paused scope already has the original target active.
            // Discard its saved GPU state without rebinding it during unwind.
            if (paused_gpu_state_) {
                paused_gpu_state_->restored = true;
                paused_gpu_state_.reset();
            }
            if (game_state_) game_state_->restore();
            g_native_dfhack_gpu_frame_ready = g_native_dfhack_gpu_target_initialized &&
                g_native_dfhack_gpu_page_revision == page_revision_ &&
                page_revision_ == native_dfhack_layer_page_revision();
            native_dfhack_publish_gpu_content(g_native_dfhack_gpu_frame_ready);
            if (g_native_dfhack_gpu_frame_ready) ++g_native_dfhack_gpu_revision;
        }
        if (!entered_) return;
        g_drawing_overlay = previous_drawing_;
    }
    bool valid() const noexcept { return entered_; }

    static bool withhold_unknown_drawing(SDL_Renderer *renderer) noexcept {
        const auto *scope = active_ ? active_->owner_ : nullptr;
        if (!scope || scope->paused_ || renderer != scope->renderer_) return false;
        // Include plugin intermediate targets: their pixels can be copied
        // into the retained target later in this or another callback batch.
        // Do not infer text-free texture content from the caller or texture ID.
        g_native_dfhack_gpu_known_graphical = false;
        // English mode keeps the plugin's original texture/geometry output.
        return scope->translation_enabled_;
    }

    static SDL_Texture *redirect_target(SDL_Renderer *renderer,
            SDL_Texture *target) noexcept {
        const auto *scope = active_ ? active_->owner_ : nullptr;
        if (!scope || scope->paused_ || !scope->game_state_ ||
                renderer != scope->renderer_) return target;
        if (!target || target == scope->game_state_->target)
            return g_native_dfhack_gpu_target.texture;
        // A plugin may render to a texture it owns and later compose it into
        // this boundary. Those private intermediate targets remain usable.
        return target;
    }

    static void suspend() noexcept {
        auto *scope = active_ ? active_->owner_ : nullptr;
        if (!scope || !scope->game_state_ || scope->paused_++) return;
        scope->paused_gpu_state_.emplace(scope->renderer_);
        scope->game_state_->restore();
        g_drawing_overlay = scope->previous_drawing_;
    }
    static void resume() noexcept {
        auto *scope = active_ ? active_->owner_ : nullptr;
        if (!scope || !scope->paused_ || --scope->paused_) return;
        if (scope->paused_gpu_state_) {
            scope->paused_gpu_state_->restore();
            scope->paused_gpu_state_.reset();
            scope->game_state_->restored = false;
        }
        g_drawing_overlay = true;
    }
};

static void native_dfhack_gpu_suspend() noexcept { NativeDfhackLayerGpuScope::suspend(); }
static void native_dfhack_gpu_resume() noexcept { NativeDfhackLayerGpuScope::resume(); }

static NativeEntryHook g_native_dfhack_gpu_target_entry;
enum NativeDfhackGpuDrawExport : size_t {
    NativeDfhackGpuCopy, NativeDfhackGpuCopyEx,
    NativeDfhackGpuCopyF, NativeDfhackGpuCopyExF,
    NativeDfhackGpuGeometry, NativeDfhackGpuGeometryRaw,
    NativeDfhackGpuDrawExportCount
};
static std::array<NativeEntryHook, NativeDfhackGpuDrawExportCount>
    g_native_dfhack_gpu_draw_entries;
static constexpr std::array<const char *, NativeDfhackGpuDrawExportCount>
    g_native_dfhack_gpu_draw_export_names{{
        "SDL_RenderCopy", "SDL_RenderCopyEx", "SDL_RenderCopyF", "SDL_RenderCopyExF",
        "SDL_RenderGeometry", "SDL_RenderGeometryRaw"
    }};
using NativeDfhackLayerSetTarget = int (SDLCALL *)(SDL_Renderer *, SDL_Texture *);
static std::atomic<uintptr_t> g_native_dfhack_render_callback_queue{0};

static void native_dfhack_bind_render_callbacks_probe() noexcept {
    g_native_dfhack_render_callback_queue.store(0, std::memory_order_release);
    const auto module = GetModuleHandleW(L"dfhack.dll");
    if (!module) return;
    const auto run = reinterpret_cast<uintptr_t>(GetProcAddress(module,
        "?runRenderThreadCallbacks@DFHack@@YAXXZ"));
    const auto enqueue = reinterpret_cast<uintptr_t>(GetProcAddress(module,
        "?runOnRenderThread@DFHack@@YAXV?$function@$$A6AXXZ@std@@@Z"));
    if (!run || !enqueue) return;
    const auto operand = [](uintptr_t instruction, unsigned char operation) noexcept {
        std::array<unsigned char, 7> bytes{};
        if (!native_history_copy(instruction, bytes) || bytes[0] != 0x48 ||
                bytes[1] != operation || bytes[2] != 0x05) return uintptr_t{0};
        int32_t relative = 0;
        std::memcpy(&relative, bytes.data() + 3, sizeof(relative));
        return static_cast<uintptr_t>(static_cast<intptr_t>(instruction + 7) + relative);
    };
    // 53.16-r2 swaps the queue's three pointer fields with local_queue here.
    // The enqueue function independently names its end and capacity fields.
    // Resolve only these known instructions; no STL object is reconstructed.
    const auto first = operand(run + 0x5d, 0x8b);
    const auto last = operand(run + 0x6b, 0x8b);
    const auto capacity = operand(run + 0x87, 0x8b);
    if (!first || first % alignof(uintptr_t) || last != first + 8 ||
            capacity != first + 16 || operand(enqueue + 0x49, 0x8b) != last ||
            operand(enqueue + 0x50, 0x3b) != capacity) return;
    MEMORY_BASIC_INFORMATION region{};
    if (!VirtualQuery(reinterpret_cast<const void *>(first), &region, sizeof(region)) ||
            region.State != MEM_COMMIT || region.Type != MEM_IMAGE ||
            region.AllocationBase != module ||
            (region.Protect & (PAGE_NOACCESS | PAGE_GUARD))) return;
    const auto region_first = reinterpret_cast<uintptr_t>(region.BaseAddress);
    if (first < region_first || first - region_first > region.RegionSize ||
            region.RegionSize - (first - region_first) < sizeof(uintptr_t) * 3) return;
    g_native_dfhack_render_callback_queue.store(first, std::memory_order_release);
}

static bool native_dfhack_render_callbacks_pending() noexcept {
    const auto address = g_native_dfhack_render_callback_queue.load(std::memory_order_acquire);
    std::array<uintptr_t, 3> queue{};
    if (!address || !native_history_copy(address, queue)) return true;
    const auto [first, last, capacity] = queue;
    if (first > last || last > capacity || (!first && (last || capacity)) ||
            (first && first % alignof(uintptr_t)) ||
            (last - first) % 0x40 || (capacity - first) % 0x40) return true;
    // The copy is a guarded read of the header, never callback storage.
    // An enqueue after observing empty is consumed by the next guarded frame.
    return first != last;
}

static int SDLCALL native_dfhack_gpu_set_target(SDL_Renderer *renderer,
        SDL_Texture *target) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeDfhackLayerSetTarget>(
        g_native_dfhack_gpu_target_entry.original);
    if (!original) return -1;
    target = NativeDfhackLayerGpuScope::redirect_target(renderer, target);
    return callback.call_native([&] { return original(renderer, target); });
}

template<size_t Index, typename Function, typename... Arguments>
static int native_dfhack_gpu_draw_call(SDL_Renderer *renderer, Arguments... arguments) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<Function>(
        g_native_dfhack_gpu_draw_entries[Index].original);
    if (!original) return -1;
    // A callback-owned texture has no separated text/artwork source yet.
    // Withhold the copy before SDL submits its glyphs, rather than rendering
    // untranslated ink into an invisible target and discarding it afterward.
    if (NativeDfhackLayerGpuScope::withhold_unknown_drawing(renderer)) return 0;
    return callback.call_native([&] { return original(renderer, arguments...); });
}

static int SDLCALL native_dfhack_gpu_copy(SDL_Renderer *renderer, SDL_Texture *texture,
        const SDL_Rect *source, const SDL_Rect *destination) {
    return native_dfhack_gpu_draw_call<NativeDfhackGpuCopy, decltype(&SDL_RenderCopy)>(
        renderer, texture, source, destination);
}

static int SDLCALL native_dfhack_gpu_copy_ex(SDL_Renderer *renderer, SDL_Texture *texture,
        const SDL_Rect *source, const SDL_Rect *destination, double angle,
        const SDL_Point *center, SDL_RendererFlip flip) {
    return native_dfhack_gpu_draw_call<NativeDfhackGpuCopyEx, decltype(&SDL_RenderCopyEx)>(
        renderer, texture, source, destination, angle, center, flip);
}

static int SDLCALL native_dfhack_gpu_copy_f(SDL_Renderer *renderer, SDL_Texture *texture,
        const SDL_Rect *source, const SDL_FRect *destination) {
    return native_dfhack_gpu_draw_call<NativeDfhackGpuCopyF, decltype(&SDL_RenderCopyF)>(
        renderer, texture, source, destination);
}

static int SDLCALL native_dfhack_gpu_copy_ex_f(SDL_Renderer *renderer, SDL_Texture *texture,
        const SDL_Rect *source, const SDL_FRect *destination, double angle,
        const SDL_FPoint *center, SDL_RendererFlip flip) {
    return native_dfhack_gpu_draw_call<NativeDfhackGpuCopyExF, decltype(&SDL_RenderCopyExF)>(
        renderer, texture, source, destination, angle, center, flip);
}

static int SDLCALL native_dfhack_gpu_geometry(SDL_Renderer *renderer, SDL_Texture *texture,
        const SDL_Vertex *vertices, int vertex_count, const int *indices, int index_count) {
    return native_dfhack_gpu_draw_call<NativeDfhackGpuGeometry, decltype(&SDL_RenderGeometry)>(
        renderer, texture, vertices, vertex_count, indices, index_count);
}

static int SDLCALL native_dfhack_gpu_geometry_raw(SDL_Renderer *renderer, SDL_Texture *texture,
        const float *xy, int xy_stride, const SDL_Color *color, int color_stride,
        const float *uv, int uv_stride, int vertex_count,
        const void *indices, int index_count, int index_size) {
    return native_dfhack_gpu_draw_call<NativeDfhackGpuGeometryRaw, decltype(&SDL_RenderGeometryRaw)>(
        renderer, texture, xy, xy_stride, color, color_stride, uv, uv_stride,
        vertex_count, indices, index_count, index_size);
}

static bool native_dfhack_install_sdl_export(NativeEntryHook &hook,
        const char *name, const void *wrapper, const char *label) {
    if (!hook.original) {
        const auto module = GetModuleHandleW(L"SDL2.dll");
        auto *entry = module ? reinterpret_cast<unsigned char *>(
            GetProcAddress(module, name)) : nullptr;
        if (!entry) return false;
        constexpr std::array<unsigned char, 16> expected{{
            0x48,0xff,0x25,0xf1,0x65,0x13,0x00,
            0x66,0x0f,0x1f,0x84,0x00,0x00,0x00,0x00,0x00
        }};
        std::array<unsigned char, expected.size()> actual{};
        if (!native_history_copy(reinterpret_cast<uintptr_t>(entry), actual) ||
                !std::equal(actual.begin(), actual.begin() + 3, expected.begin()) ||
                !std::equal(actual.begin() + 7, actual.end(), expected.begin() + 7)) {
            report_native_patch_error("ERROR", label, "SDL export signature mismatch");
            return false;
        }
        int32_t relative = 0;
        std::memcpy(&relative, actual.data() + 3, sizeof(relative));
        const std::vector<NativeRelativeFixup> fixups{{3, 7,
            reinterpret_cast<uintptr_t>(entry + 7 + relative)}};
        // Preserve the indirect jump through SDL's live dynapi slot. SDL can
        // initialize or replace that table after our export hook is installed.
        if (!hook.prepare(entry, std::vector<unsigned char>(actual.begin(), actual.end()),
                wrapper, fixups, label)) return false;
    }
    return hook.install(label);
}

static bool install_native_dfhack_gpu_target_hook() {
    if (g_native_dfhack_gpu_target_entry.installed &&
            g_native_dfhack_gpu_draw_exports_covered.load(std::memory_order_acquire)) return true;
    native_dfhack_bind_render_callbacks_probe();
    constexpr const char *label = "DFHack private SDL render target";
    if (!native_dfhack_install_sdl_export(g_native_dfhack_gpu_target_entry,
            "SDL_SetRenderTarget", reinterpret_cast<const void *>(&native_dfhack_gpu_set_target),
            label)) {
        g_native_dfhack_gpu_draw_coverage_generation.fetch_add(1, std::memory_order_acq_rel);
        g_native_dfhack_gpu_draw_exports_covered.store(false, std::memory_order_release);
        return false;
    }
    const std::array<const void *, NativeDfhackGpuDrawExportCount> wrappers{{
        reinterpret_cast<const void *>(&native_dfhack_gpu_copy),
        reinterpret_cast<const void *>(&native_dfhack_gpu_copy_ex),
        reinterpret_cast<const void *>(&native_dfhack_gpu_copy_f),
        reinterpret_cast<const void *>(&native_dfhack_gpu_copy_ex_f),
        reinterpret_cast<const void *>(&native_dfhack_gpu_geometry),
        reinterpret_cast<const void *>(&native_dfhack_gpu_geometry_raw)
    }};
    bool covered = true;
    for (size_t index = 0; index < wrappers.size(); ++index)
        if (!native_dfhack_install_sdl_export(g_native_dfhack_gpu_draw_entries[index],
                g_native_dfhack_gpu_draw_export_names[index], wrappers[index],
                g_native_dfhack_gpu_draw_export_names[index])) covered = false;
    // Target isolation remains usable if a drawing export cannot be hooked.
    // That lifetime never claims the retained pixels are known graphics.
    if (covered != g_native_dfhack_gpu_draw_exports_covered.load(std::memory_order_acquire))
        g_native_dfhack_gpu_draw_coverage_generation.fetch_add(1, std::memory_order_acq_rel);
    g_native_dfhack_gpu_draw_exports_covered.store(covered, std::memory_order_release);
    return true;
}

static void uninstall_native_dfhack_gpu_target_hook() {
    g_native_dfhack_gpu_draw_coverage_generation.fetch_add(1, std::memory_order_acq_rel);
    g_native_dfhack_gpu_draw_exports_covered.store(false, std::memory_order_release);
    g_native_dfhack_render_callback_queue.store(0, std::memory_order_release);
    for (size_t index = 0; index < g_native_dfhack_gpu_draw_entries.size(); ++index) {
        auto &draw = g_native_dfhack_gpu_draw_entries[index];
        const auto label = g_native_dfhack_gpu_draw_export_names[index];
        if (draw.installed &&
                !write_native_code_patches(draw.patches, false, label, &draw.installed)) continue;
        if (native_callbacks_idle()) draw.uninstall(label);
    }
    auto &hook = g_native_dfhack_gpu_target_entry;
    constexpr const char *label = "DFHack private SDL render target";
    if (hook.installed &&
            !write_native_code_patches(hook.patches, false, label, &hook.installed)) return;
    if (native_callbacks_idle()) hook.uninstall(label);
}

static bool native_dfhack_gpu_target_hook_active() noexcept {
    return g_native_dfhack_gpu_target_entry.active() ||
        std::any_of(g_native_dfhack_gpu_draw_entries.begin(), g_native_dfhack_gpu_draw_entries.end(),
            [](const NativeEntryHook &hook) { return hook.active(); });
}

static bool native_dfhack_graphical_gpu_ready(SDL_Renderer *renderer) noexcept {
    const auto &gpu = g_native_dfhack_gpu_target;
    const bool translation_enabled = g_overlay.translation_enabled();
    // A language switch retires the previous mode's pixels immediately. The
    // next callback clears the target before drawing in the new mode.
    return g_native_dfhack_gpu_translation_enabled == translation_enabled &&
        (!translation_enabled ||
            (g_native_dfhack_gpu_draw_exports_covered.load(std::memory_order_acquire) &&
            g_native_dfhack_gpu_known_graphical &&
            g_native_dfhack_gpu_graphics_generation ==
                g_native_dfhack_gpu_draw_coverage_generation.load(std::memory_order_acquire))) &&
        g_native_dfhack_gpu_frame_ready &&
        gpu.texture && gpu.renderer == renderer &&
        g_native_dfhack_gpu_page_revision == native_dfhack_layer_page_revision();
}

static bool native_dfhack_compose_graphical_gpu(SDL_Renderer *renderer,
        int width, int height) {
    const auto &gpu = g_native_dfhack_gpu_target;
    if (!native_dfhack_graphical_gpu_ready(renderer) ||
            width <= 0 || height <= 0 || gpu.width != width || gpu.height != height) return true;
    // Chinese mode admits only known graphics; English mode also retains
    // the plugin's original text textures and geometry.
    const SDL_Rect destination{0, 0, width, height};
    return SDL_SetTextureColorMod(gpu.texture, 255, 255, 255) == 0 &&
        SDL_SetTextureAlphaMod(gpu.texture, 255) == 0 &&
        SDL_SetTextureBlendMode(gpu.texture, native_dfhack_layer_composite_blend()) == 0 &&
        SDL_RenderCopy(renderer, gpu.texture, nullptr, &destination) == 0;
}

using NativeDfhackLayerTileMethod = void (*)(void *, int, int);
using NativeDfhackLayerMapMethod = void (*)(void *, void *, int, int);
struct NativeDfhackLayerPaintContext {
    inline static thread_local NativeDfhackLayerPaintContext *active = nullptr;
    NativeDfhackLayerPaintContext *previous = active;
    SDL_Renderer *renderer;
    // SDL can bind a native backing texture for the public RGBA target.
    // Capture its actual identity after binding, for this render pass only.
    SDL_Texture *bound_target;
    void *native_renderer;
    graphicst *graphics;
    void **methods;
    std::array<const int32_t *, 9> font_tables{};
    int tile_width = 0, tile_height = 0, origin_x = 0, origin_y = 0;

    NativeDfhackLayerPaintContext(SDL_Renderer *sdl, void *native,
            graphicst *gps, void **vtable) noexcept
        : renderer(sdl), bound_target(SDL_GetRenderTarget(sdl)),
          native_renderer(native), graphics(gps), methods(vtable) {
        std::array<int32_t, 4> raster{};
        if (native_renderer_raster(native, raster)) {
            tile_width = raster[0]; tile_height = raster[1];
            origin_x = raster[2]; origin_y = raster[3];
        }
        // Texture IDs are shared immutable atlas references, not screen data.
        // Include normal/fullscreen/basic fonts and their top/bottom halves.
        constexpr std::array<size_t, 9> offsets{{
            0xd8, 0x4d8, 0x8d8, 0x18d8, 0x1cd8, 0x20d8,
            0x24d8, 0x28d8, 0x2cd8
        }};
        for (size_t i = 0; i < offsets.size(); ++i)
            font_tables[i] = static_cast<const int32_t *>(
                native_pe_field_address(0x023cd770, offsets[i], 256 * sizeof(int32_t)));
        active = this;
    }
    bool character_texture(int32_t texture, unsigned char character) const noexcept {
        if (texture <= 0) return false;
        for (const auto *table : font_tables) {
            if (!table) continue;
            if (character && character != ' ') {
                if (table[character] == texture) return true;
                continue;
            }
            // Graphical paintTile can leave only the bitmap-font texture,
            // having cleared the source character byte. Recognize that
            // texture from the shared font atlases before repainting it as
            // background; unrelated private artwork remains untouched.
            for (size_t glyph = 1; glyph < 256; ++glyph)
                if (glyph != ' ' && table[glyph] == texture) return true;
        }
        return false;
    }
    ~NativeDfhackLayerPaintContext() noexcept { active = previous; }
};

static bool native_dfhack_layer_cell_visible(const graphicst &gps, size_t at,
        bool top) noexcept {
    const auto *screen = top ? gps.screen_top : gps.screen;
    const auto *primary = top ? gps.screentexpos_top : gps.screentexpos;
    const auto *lower = top ? gps.screentexpos_top_lower : gps.screentexpos_lower;
    const auto *anchored = top ? gps.screentexpos_top_anchored : gps.screentexpos_anchored;
    const auto *flags = top ? gps.screentexpos_top_flag : gps.screentexpos_flag;
    return (screen && screen[at * 8]) || (primary && primary[at]) ||
        (lower && lower[at]) || (anchored && anchored[at]) || (flags && flags[at]);
}

static std::vector<SDL_Rect> native_dfhack_translation_source_cells(
        const graphicst &gps, const std::vector<Match> &matches) {
    std::vector<SDL_Rect> fields;
    const auto append = [&](int x, int y, int width, int height) {
        const int left = std::clamp(x, 0, gps.dimx);
        const int top = std::clamp(y, 0, gps.dimy);
        const int right = static_cast<int>(std::clamp<int64_t>(
            int64_t(x) + width, 0, gps.dimx));
        const int bottom = static_cast<int>(std::clamp<int64_t>(
            int64_t(y) + height, 0, gps.dimy));
        if (right <= left || bottom <= top) return;
        const SDL_Rect field{left, top, right - left, bottom - top};
        if (std::none_of(fields.begin(), fields.end(), [&](const SDL_Rect &other) {
                return other.x == field.x && other.y == field.y &&
                    other.w == field.w && other.h == field.h;
            })) fields.push_back(field);
    };
    for (const auto &match : matches) {
        if (match.native_help_source_only || match.native_split_duplicate) continue;
        const bool clear = match.graphical_clear_width > 0 && match.graphical_clear_height > 0;
        if (match.target.empty() && !clear) continue;
        if (clear) append(match.graphical_clear_x, match.graphical_clear_y,
            match.graphical_clear_width, match.graphical_clear_height);
        if (!match.target.empty() && match.length > 0) {
            const int top = match.native_split_text ? match.native_split_top_y : match.y;
            append(match.x, top, match.length, match.native_split_text ? 2 : 1);
        }
    }
    return fields;
}

static void native_dfhack_suppress_source_glyphs(NativeDfhackLayerPaintContext &paint,
        const std::vector<SDL_Rect> &fields) noexcept {
    auto &gps = *paint.graphics;
    for (const auto &field : fields)
        for (size_t plane = 0; plane < 2; ++plane) {
            if (plane && !gps.top_in_use) continue;
            auto *screen = plane ? gps.screen_top : gps.screen;
            const std::array<NativeDfhackLayerTexture *, 3> textures{{
                plane ? gps.screentexpos_top : gps.screentexpos,
                plane ? gps.screentexpos_top_lower : gps.screentexpos_lower,
                plane ? gps.screentexpos_top_anchored : gps.screentexpos_anchored
            }};
            for (int x = field.x; x < field.x + field.w; ++x)
                for (int y = field.y; y < field.y + field.h; ++y) {
                    const size_t at = static_cast<size_t>(x) * gps.dimy + y;
                    const unsigned char character = screen ? screen[at * 8] : 0;
                    for (auto *texture : textures)
                        if (texture && paint.character_texture(texture[at], character))
                            texture[at] = 0;
                    // Colors, flags and unrelated artwork remain native.
                    // Empty transparent cells must remain empty as well.
                    if (screen && character && character != ' ') screen[at * 8] = ' ';
                }
        }
}

static bool native_dfhack_layer_has_content(SDL_Renderer *renderer,
        const NativeDfhackLayerPresentScope &layer) noexcept {
    const auto &gpu = g_native_dfhack_gpu_target;
    if (g_native_dfhack_gpu_frame_ready && gpu.texture && gpu.renderer == renderer &&
            g_native_dfhack_gpu_page_revision == native_dfhack_layer_page_revision())
        return true;
    const auto *storage = layer.storage();
    if (!storage) return false;
    if (storage->translation_content_ready) return storage->translation_has_content;
    for (const auto &map : layer.maps())
        if (map && map->any_content()) return true;
    // This scope pins one immutable submission. Inspect only that frame's
    // arrays before allocating, binding or clearing an SDL target.
    const auto nonzero = [](const auto &values) noexcept {
        return std::any_of(values.begin(), values.end(), [](auto value) { return value != 0; });
    };
    if (nonzero(storage->written)) return true;
    for (const auto &plane : storage->planes) {
        if (nonzero(plane.screen) || nonzero(plane.flags)) return true;
        for (const auto &textures : plane.textures)
            if (nonzero(textures)) return true;
    }
    return false;
}

static void native_dfhack_present_layer(SDL_Renderer *renderer,
        bool (*translate)(SDL_Renderer *, const NativeDfhackTranslatedFrame &)) {
    if (!renderer || !native_pe_supported()) return;
    if (!g_native_dfhack_graphics_ownership_ready.load(std::memory_order_acquire)) return;
    const bool disabled = native_dfhack_switch_disabled();
    static bool hidden = false;
    if (disabled != hidden) {
        if (NativeDfhackLayerWriteScope::in_progress()) return;
        clear_native_dfhack_layers();
        g_native_dfhack_paint_storage.reset();
        g_native_dfhack_paint_source.reset();
        g_native_dfhack_painted_frame.reset();
        g_native_dfhack_gpu_frame_ready = false;
        g_native_dfhack_gpu_known_graphical = false;
        native_dfhack_publish_gpu_content(false);
        g_native_dfhack_gpu_target_initialized = false;
        hidden = disabled;
    }
    if (disabled) return;
    const auto latest = native_dfhack_published_frame();
    auto completed = g_overlay.completed_dfhack_layer_frame(latest);
    if (!completed && g_native_dfhack_painted_frame &&
            g_native_dfhack_painted_frame->key && latest &&
            g_overlay.translation_enabled() &&
            latest->page_revision == native_dfhack_layer_page_revision() &&
            native_dfhack_translation_layout_compatible(
                *g_native_dfhack_painted_frame->source, *latest)) {
        // A busy result cache must not withdraw a complete compatible target.
        completed = g_native_dfhack_painted_frame;
    }
    if (!completed || !completed->source || !completed->matches) {
        // Unknown GPU-only textures may contain plugin-owned text. They do
        // not bypass completion or expose a raw target while matching waits.
        g_native_dfhack_painted_frame.reset();
        g_native_dfhack_paint_storage.reset();
        g_native_dfhack_paint_source.reset();
        if (native_dfhack_graphical_gpu_ready(renderer) &&
                NativeDfhackLayerNativeRenderer::current().sdl == renderer) {
            NativeDfhackLayerSdlState state(renderer);
            int width = 0, height = 0;
            const auto *layout = latest &&
                latest->page_revision == native_dfhack_layer_page_revision()
                    ? latest->graphics.get() : nullptr;
            if (native_dfhack_layer_target_size(renderer, state, width, height, layout) &&
                    state.bind_composite(width, height)) {
                NativeDfhackLayerDrawingScope drawing;
                native_dfhack_compose_graphical_gpu(renderer, width, height);
            }
        }
        return;
    }
    NativeDfhackLayerPresentScope layer(completed->source);
    if (!layer.valid()) return;
    auto *gps = layer.graphics();
    if (!gps || gps->dimx <= 0 || gps->dimy <= 0) return;
    if (!native_dfhack_layer_has_content(renderer, layer)) return;

    const auto native = NativeDfhackLayerNativeRenderer::current();
    if (native.sdl != renderer) return;
    NativeUiRendererContract raster;
    if (!raster.resolve(native.object, renderer)) return;
    NativeDfhackLayerSdlState state(renderer);
    int width = 0, height = 0;
    if (!native_dfhack_layer_target_size(renderer, state, width, height, gps)) return;
    auto &target = g_native_dfhack_layer_target;
    const bool same_completed = g_native_dfhack_painted_frame &&
        g_native_dfhack_painted_frame->source == completed->source &&
        g_native_dfhack_painted_frame->matches == completed->matches &&
        g_native_dfhack_painted_frame->key == completed->key;
    const bool retained = same_completed && target.texture && target.renderer == renderer &&
        target.width == width && target.height == height;
    NativeDfhackLayerDrawingScope drawing;
    if (retained) {
        // A pending source keeps this complete target and translated ink.
        // Never overlay the new raw GPU cache.
        if (!state.bind_composite(width, height) ||
                !native_dfhack_compose_graphical_gpu(renderer, width, height) ||
                completed->source->page_revision != native_dfhack_layer_page_revision()) {
            g_native_dfhack_painted_frame.reset();
            return;
        }
        const SDL_Rect destination{0, 0, width, height};
        if (SDL_RenderCopy(renderer, target.texture, nullptr, &destination) != 0)
            g_native_dfhack_painted_frame.reset();
        return;
    }

    if (!same_completed || g_native_dfhack_paint_source != completed->source ||
            !g_native_dfhack_paint_storage) {
        try {
            auto paint = completed->source->snapshot();
            if (!paint || !paint->graphics) return;
            g_native_dfhack_paint_storage = std::move(paint);
            g_native_dfhack_paint_source = completed->source;
        } catch (...) { return; }
    }
    auto &paint_storage = *g_native_dfhack_paint_storage;
    auto *paint_graphics = paint_storage.graphics.get();
    if (!paint_graphics || paint_graphics->dimx != gps->dimx ||
            paint_graphics->dimy != gps->dimy) return;
    if (!translate && std::any_of(completed->matches->begin(), completed->matches->end(),
            [](const auto &match) { return !match.target.empty(); })) return;
    auto *native_renderer = native.object;
    auto **methods = native.methods;
    // A missing painter cannot produce a complete private target. Resolve
    // every applicable method before clearing pixels or masking source ink;
    // viewport/map-port contracts belong only to sources that use them.
    std::array<NativeDfhackLayerMapMethod, 2> map_draws{};
    for (const auto &map : paint_storage.maps) {
        if (!map || !map->any_content()) continue;
        if (!map->view() || map->dimx() <= 0 || map->dimy() <= 0) return;
        const bool port = map->map_port();
        auto &draw = map_draws[port ? 1 : 0];
        if (!draw) draw = reinterpret_cast<NativeDfhackLayerMapMethod>(native_object_virtual_method(
            methods, "renderer", port ? "update_map_port_tile" : "update_viewport_tile",
            port ? 5 : 4, port ? "void(pointer<graphic_map_portst>,int32_t,int32_t)"
                : "void(pointer<graphic_viewportst>,int32_t,int32_t)", 3));
        if (!draw) return;
    }
    if (!paint_graphics->screentexpos_anchored ||
            (paint_graphics->top_in_use && !paint_graphics->screentexpos_top_anchored)) return;
    if (!target.prepare(renderer, width, height) ||
            !state.bind(target.texture, width, height)) return;
    g_native_dfhack_painted_frame.reset();
    if (SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_NONE) != 0 ||
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0) != 0 ||
            SDL_RenderClear(renderer) != 0) return;

    try {
        NativeDfhackLayerRendererGrid grid(native_renderer, *paint_graphics,
            map_draws[0] || map_draws[1]);
        if (!grid.valid()) return;
        NativeDfhackLayerPaintContext paint(renderer, native_renderer, paint_graphics, methods);
        const auto fields = native_dfhack_translation_source_cells(*gps, *completed->matches);
        if (!fields.empty() && (paint.tile_width <= 0 || paint.tile_height <= 0)) return;
        // Every source glyph is removed before the first native tile/map
        // call. Matching and authored fields still use the immutable source.
        native_dfhack_suppress_source_glyphs(paint, fields);
        for (const auto &map : paint_storage.maps) {
            if (!map || !map->any_content()) continue;
            const bool map_port = map->map_port();
            const auto draw = map_draws[map_port ? 1 : 0];
            for (int x = 0; x < map->dimx(); ++x)
                for (int y = 0; y < map->dimy(); ++y) {
                    const size_t at = map_port
                        ? static_cast<size_t>(y) * map->dimx() + x
                        : static_cast<size_t>(x) * map->dimy() + y;
                    if (map->has_content(at)) draw(native_renderer, map->view(), x, y);
                }
        }
        for (size_t pass = 0; pass < 4; ++pass) {
            const bool top = pass >= 2;
            if (top && !paint_graphics->top_in_use) continue;
            const bool anchor = pass & 1;
            const auto draw = anchor ? raster.anchors[top ? 1 : 0] : raster.tiles[top ? 1 : 0];
            const auto *anchors = top ? paint_graphics->screentexpos_top_anchored : paint_graphics->screentexpos_anchored;
            for (int x = 0; x < paint_graphics->dimx; ++x)
                for (int y = 0; y < paint_graphics->dimy; ++y) {
                    const size_t at = static_cast<size_t>(x) * paint_graphics->dimy + y;
                    if (anchor ? anchors[at] != 0 : native_dfhack_layer_cell_visible(*paint_graphics, at, top))
                        draw(native_renderer, x, y);
                }
        }
        if (translate && !translate(renderer, *completed)) return;
    } catch (...) { return; }
    if (!state.bind_composite(width, height)) return;
    // Independently confirmed graphics remain live outside this source's
    // completed target. Unknown textures cannot enter either composition.
    if (!native_dfhack_compose_graphical_gpu(renderer, width, height)) return;
    if (completed->source->page_revision != native_dfhack_layer_page_revision()) return;
    const SDL_Rect destination{0, 0, width, height};
    if (SDL_RenderCopy(renderer, target.texture, nullptr, &destination) != 0) return;
    g_native_dfhack_painted_frame = completed;
}

static void release_native_dfhack_layer_target() noexcept {
    g_native_dfhack_painted_frame.reset();
    g_native_dfhack_paint_storage.reset();
    g_native_dfhack_paint_source.reset();
    g_native_dfhack_layer_target.release();
    g_native_dfhack_gpu_target.release();
    g_native_dfhack_gpu_target_initialized = false;
    g_native_dfhack_gpu_frame_ready = false;
    g_native_dfhack_gpu_known_graphical = false;
    g_native_dfhack_gpu_graphics_generation = 0;
    native_dfhack_publish_gpu_content(false);
    g_native_dfhack_gpu_page_revision = 0;
    g_native_dfhack_gpu_revision = 0;
}
#else
class NativeDfhackLayerGpuScope {
public:
    explicit NativeDfhackLayerGpuScope(bool = true) noexcept {}
    bool valid() const noexcept { return false; }
};
static void native_dfhack_gpu_suspend() noexcept {}
static void native_dfhack_gpu_resume() noexcept {}
static bool native_dfhack_gpu_translation_content_active() noexcept { return false; }
static bool install_native_dfhack_gpu_target_hook() { return true; }
static void uninstall_native_dfhack_gpu_target_hook() {}
static bool native_dfhack_gpu_target_hook_active() noexcept { return false; }
static bool native_dfhack_render_callbacks_pending() noexcept { return true; }
static void native_dfhack_present_layer(SDL_Renderer *,
    bool (*)(SDL_Renderer *, const NativeDfhackTranslatedFrame &)) {}
static void release_native_dfhack_layer_target() noexcept {}
#endif
