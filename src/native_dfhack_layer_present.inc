// DFHack owns this target and its logical buffers. Native rendering and native
// translation finish before this layer is composed; no game pixels are read.
#ifdef _WIN32
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
static uint64_t g_native_dfhack_gpu_page_revision = 0;
static uint64_t g_native_dfhack_gpu_revision = 0;
static bool g_native_dfhack_gpu_target_initialized = false;
static bool g_native_dfhack_gpu_frame_ready = false;

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
    void restore() noexcept {
        if (restored) return;
        SDL_SetRenderTarget(renderer, target);
        SDL_RenderSetLogicalSize(renderer, logical_width, logical_height);
        SDL_RenderSetIntegerScale(renderer, integer_scale);
        SDL_RenderSetViewport(renderer, &viewport);
        SDL_RenderSetScale(renderer, scale_x, scale_y);
        SDL_RenderSetClipRect(renderer, clipped ? &clip : nullptr);
        SDL_SetRenderDrawBlendMode(renderer, blend);
        SDL_SetRenderDrawColor(renderer, r, g, b, a);
        restored = true;
    }
    ~NativeDfhackLayerSdlState() noexcept { restore(); }
};

struct NativeDfhackLayerRendererGrid {
    void *renderer;
    graphicst *game_graphics = nullptr;
    graphicst *private_graphics = nullptr;
    NativeDfhackOutputBinding previous_graphics;
    std::array<unsigned char, sizeof(graphicst::texblits)> previous_texblits{};
    std::array<void *, 14> previous{};
    unsigned char previous_viewport_zoom = 0;

    NativeDfhackLayerRendererGrid(void *current, graphicst &gps) noexcept
        : renderer(current), game_graphics(native_graphics()), private_graphics(&gps) {
        // The private SDL target is already bound and PresentScope owns the
        // same mutex as native root rendering. Native tile/map helpers also
        // read the EXE's static graphicst, including its refresh output; bind
        // that output to the committed private arrays only for these passes.
        if (game_graphics) {
            previous_graphics = NativeDfhackOutputBinding::capture(*game_graphics);
            std::memcpy(previous_texblits.data(), &game_graphics->texblits, previous_texblits.size());
            NativeDfhackOutputBinding::capture(gps).apply(*game_graphics);
            std::memcpy(&game_graphics->texblits, &gps.texblits, sizeof(gps.texblits));
        }
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
        auto *fields = static_cast<unsigned char *>(renderer) + sizeof(void *);
        std::memcpy(previous.data(), fields, sizeof(previous));
        // Native viewport tile drawing sets this flag and ends by clearing
        // it. Keep the game's entry value around the private render passes.
        previous_viewport_zoom = *(static_cast<unsigned char *>(renderer) + 0x180);
        std::memcpy(fields, private_grid.data(), sizeof(private_grid));
    }
    ~NativeDfhackLayerRendererGrid() noexcept {
        std::memcpy(static_cast<unsigned char *>(renderer) + sizeof(void *),
            previous.data(), sizeof(previous));
        *(static_cast<unsigned char *>(renderer) + 0x180) = previous_viewport_zoom;
        if (game_graphics) {
            std::memcpy(&private_graphics->texblits, &game_graphics->texblits,
                sizeof(private_graphics->texblits));
            previous_graphics.apply(*game_graphics);
            std::memcpy(&game_graphics->texblits, previous_texblits.data(), previous_texblits.size());
        }
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
        const auto executable = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
        const auto enabler = native_pe_address(executable, 0x02390290);
        if (!enabler || !native_history_copy(enabler + 0x38, result.object) ||
                !result.object || !native_history_copy(
                    reinterpret_cast<uintptr_t>(result.object), result.methods) ||
                !result.methods) return {};
        using RendererGetter = SDL_Renderer *(*)(void *);
        const auto getter = reinterpret_cast<RendererGetter>(result.methods[19]);
        if (getter) result.sdl = getter(result.object);
        return result;
    }
};

static bool native_dfhack_layer_target_size(SDL_Renderer *renderer,
        const NativeDfhackLayerSdlState &state, int &width, int &height) noexcept {
    const auto *gps = native_graphics();
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
        }
        if (!target.prepare(renderer_, width, height) ||
                !game_state_->bind(target.texture, width, height)) {
            game_state_->restore();
            return;
        }
        page_revision_ = native_dfhack_layer_page_revision();
        if (!g_native_dfhack_gpu_target_initialized ||
                g_native_dfhack_gpu_page_revision != page_revision_) {
            SDL_SetRenderDrawBlendMode(renderer_, SDL_BLENDMODE_NONE);
            SDL_SetRenderDrawColor(renderer_, 0, 0, 0, 0);
            if (SDL_RenderClear(renderer_) != 0) {
                g_native_dfhack_gpu_target_initialized = false;
                g_native_dfhack_gpu_frame_ready = false;
                game_state_->restore();
                return;
            }
            g_native_dfhack_gpu_page_revision = page_revision_;
            g_native_dfhack_gpu_target_initialized = true;
        }
        // A callback batch and presentation hold the layer mutex. Publish
        // this target after the batch finishes; repeated Presents can then
        // reuse it until a page change, independent of capture epochs.
        g_native_dfhack_gpu_frame_ready = false;
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
            if (g_native_dfhack_gpu_frame_ready) ++g_native_dfhack_gpu_revision;
        }
        if (!entered_) return;
        g_drawing_overlay = previous_drawing_;
    }
    bool valid() const noexcept { return entered_; }

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

static bool install_native_dfhack_gpu_target_hook() {
    auto &hook = g_native_dfhack_gpu_target_entry;
    if (hook.installed) return true;
    native_dfhack_bind_render_callbacks_probe();
    constexpr const char *label = "DFHack private SDL render target";
    if (!hook.original) {
        const auto module = GetModuleHandleW(L"SDL2.dll");
        auto *entry = module ? reinterpret_cast<unsigned char *>(
            GetProcAddress(module, "SDL_SetRenderTarget")) : nullptr;
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
                reinterpret_cast<const void *>(&native_dfhack_gpu_set_target),
                fixups, label)) return false;
    }
    return hook.install(label);
}

static void uninstall_native_dfhack_gpu_target_hook() {
    g_native_dfhack_render_callback_queue.store(0, std::memory_order_release);
    auto &hook = g_native_dfhack_gpu_target_entry;
    constexpr const char *label = "DFHack private SDL render target";
    if (hook.installed &&
            !write_native_code_patches(hook.patches, false, label, &hook.installed)) return;
    if (native_callbacks_idle()) hook.uninstall(label);
}

static bool native_dfhack_gpu_target_hook_active() noexcept {
    return g_native_dfhack_gpu_target_entry.active();
}

static void native_dfhack_compose_gpu_layer(SDL_Renderer *renderer,
        SDL_Texture *bound_target, int width, int height) {
    const auto &gpu = g_native_dfhack_gpu_target;
    if (!g_native_dfhack_gpu_frame_ready || !gpu.texture ||
            gpu.renderer != renderer || width <= 0 || height <= 0 ||
            !bound_target || SDL_GetRenderTarget(renderer) != bound_target ||
            g_native_dfhack_gpu_page_revision != native_dfhack_layer_page_revision()) return;
    const SDL_Rect destination{0, 0, width, height};
    SDL_SetTextureColorMod(gpu.texture, 255, 255, 255);
    SDL_SetTextureAlphaMod(gpu.texture, 255);
    SDL_SetTextureBlendMode(gpu.texture, native_dfhack_layer_composite_blend());
    SDL_RenderCopy(renderer, gpu.texture, nullptr, &destination);
}

using NativeDfhackLayerTileMethod = void (*)(void *, int, int);
using NativeDfhackLayerMapMethod = void (*)(void *, void *, int, int);
struct NativeDfhackLayerMapPaint {
    void *view = nullptr;
    NativeDfhackLayerMapMethod draw = nullptr;
    int x = 0, y = 0;
};
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
    std::array<std::vector<size_t>, 2> anchors;
    std::vector<NativeDfhackLayerMapPaint> maps;
    std::array<const int32_t *, 9> font_tables{};
    int tile_width = 0, tile_height = 0, origin_x = 0, origin_y = 0;

    NativeDfhackLayerPaintContext(SDL_Renderer *sdl, void *native,
            graphicst *gps, void **vtable) noexcept
        : renderer(sdl), bound_target(SDL_GetRenderTarget(sdl)),
          native_renderer(native), graphics(gps), methods(vtable) {
        const auto *object = static_cast<const unsigned char *>(native);
        std::memcpy(&tile_width, object + 0x168, sizeof(tile_width));
        std::memcpy(&tile_height, object + 0x16c, sizeof(tile_height));
        std::memcpy(&origin_x, object + 0x170, sizeof(origin_x));
        std::memcpy(&origin_y, object + 0x174, sizeof(origin_y));
        const auto executable = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
        const auto settings = native_pe_address(executable, 0x023cd770);
        // Texture IDs are shared immutable atlas references, not screen data.
        // Include normal/fullscreen/basic fonts and their top/bottom halves.
        constexpr std::array<size_t, 9> offsets{{
            0xd8, 0x4d8, 0x8d8, 0x18d8, 0x1cd8, 0x20d8,
            0x24d8, 0x28d8, 0x2cd8
        }};
        if (settings)
            for (size_t i = 0; i < offsets.size(); ++i)
                font_tables[i] = reinterpret_cast<const int32_t *>(settings + offsets[i]);
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

static void native_dfhack_redraw_background(SDL_Renderer *renderer,
        const SDL_Rect &cells) {
    auto *paint = NativeDfhackLayerPaintContext::active;
    if (!paint || paint->renderer != renderer || !paint->graphics ||
            !paint->bound_target || SDL_GetRenderTarget(renderer) != paint->bound_target ||
            cells.w <= 0 || cells.h <= 0 ||
            paint->tile_width <= 0 || paint->tile_height <= 0) return;
    auto &gps = *paint->graphics;
    const int left = std::clamp(cells.x, 0, gps.dimx);
    const int top = std::clamp(cells.y, 0, gps.dimy);
    const int right = static_cast<int>(std::clamp<int64_t>(
        static_cast<int64_t>(cells.x) + cells.w, 0, gps.dimx));
    const int bottom = static_cast<int>(std::clamp<int64_t>(
        static_cast<int64_t>(cells.y) + cells.h, 0, gps.dimy));
    if (right <= left || bottom <= top) return;
    SDL_Rect pixels{
        paint->origin_x + left * paint->tile_width,
        paint->origin_y + top * paint->tile_height,
        (right - left) * paint->tile_width,
        (bottom - top) * paint->tile_height
    };
    struct FieldDrawState {
        SDL_Renderer *renderer;
        SDL_Rect clip{};
        SDL_BlendMode blend = SDL_BLENDMODE_NONE;
        Uint8 r = 0, g = 0, b = 0, a = 255;
        bool clipped;
        explicit FieldDrawState(SDL_Renderer *sdl) noexcept
            : renderer(sdl), clipped(SDL_RenderIsClipEnabled(sdl) == SDL_TRUE) {
            SDL_RenderGetClipRect(renderer, &clip);
            SDL_GetRenderDrawBlendMode(renderer, &blend);
            SDL_GetRenderDrawColor(renderer, &r, &g, &b, &a);
        }
        ~FieldDrawState() noexcept {
            SDL_RenderSetClipRect(renderer, clipped ? &clip : nullptr);
            SDL_SetRenderDrawBlendMode(renderer, blend);
            SDL_SetRenderDrawColor(renderer, r, g, b, a);
        }
    } state(renderer);
    if (state.clipped) {
        SDL_Rect intersection{};
        if (SDL_IntersectRect(&pixels, &state.clip, &intersection) != SDL_TRUE) return;
        pixels = intersection;
    }
    if (SDL_RenderSetClipRect(renderer, &pixels) != 0) return;
    NativeDfhackLayerDrawingScope drawing;
    SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_NONE);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    if (SDL_RenderFillRect(renderer, &pixels) != 0) return;

    // Blank only character bytes in the private layer. Primary/lower artwork,
    // color bytes and flags keep their actual DFHack values; the native tile
    // generator then supplies that field's background without its Latin ink.
    struct PrivateSpaces {
        using Texture = std::remove_pointer_t<decltype(graphicst::screentexpos)>;
        std::vector<std::pair<unsigned char *, unsigned char>> characters;
        std::vector<std::pair<Texture *, Texture>> glyph_textures;
        ~PrivateSpaces() noexcept {
            for (const auto &[address, original] : characters) *address = original;
            for (const auto &[address, original] : glyph_textures) *address = original;
        }
        void blank(unsigned char *address) {
            if (!address || !*address || *address == ' ') return;
            characters.emplace_back(address, *address);
            *address = ' ';
        }
        void remove_glyph(Texture *address) {
            glyph_textures.emplace_back(address, *address);
            *address = 0;
        }
    } spaces;
    spaces.characters.reserve(static_cast<size_t>(right - left) * (bottom - top) * 2);
    for (size_t plane = 0; plane < 2; ++plane) {
        if (plane && !gps.top_in_use) continue;
        auto *screen = plane ? gps.screen_top : gps.screen;
        auto *primary = plane ? gps.screentexpos_top : gps.screentexpos;
        if (!screen) continue;
        for (int x = left; x < right; ++x)
            for (int y = top; y < bottom; ++y) {
                const size_t at = static_cast<size_t>(x) * gps.dimy + y;
                auto *character = screen + at * 8;
                if (primary && paint->character_texture(primary[at], *character))
                    spaces.remove_glyph(primary + at);
                spaces.blank(character);
            }
    }
    // Only actual private map writes were retained during this layer's draw.
    // The field clip also restores any private map beneath transparent text.
    for (const auto &map : paint->maps)
        map.draw(paint->native_renderer, map.view, map.x, map.y);
    for (size_t pass = 0; pass < 4; ++pass) {
        const bool top_plane = pass >= 2;
        if (top_plane && !gps.top_in_use) continue;
        const auto draw = reinterpret_cast<NativeDfhackLayerTileMethod>(paint->methods[pass]);
        if (!draw) continue;
        if (pass & 1) {
            // An image anchored outside the source field can extend into it.
            // Repaint those private images in native order, clipped here.
            for (const size_t at : paint->anchors[top_plane])
                draw(paint->native_renderer, static_cast<int>(at / gps.dimy),
                    static_cast<int>(at % gps.dimy));
        } else {
            for (int x = left; x < right; ++x)
                for (int y = top; y < bottom; ++y) {
                    const size_t at = static_cast<size_t>(x) * gps.dimy + y;
                    if (native_dfhack_layer_cell_visible(gps, at, top_plane))
                        draw(paint->native_renderer, x, y);
                }
        }
    }
    // The original GPU content was composed before source replacement.
    // Copying that cache again here would restore its untranslated ink in
    // the field that has just been cleared.
}

static bool native_dfhack_layer_has_content(SDL_Renderer *renderer,
        const NativeDfhackLayerPresentScope &layer) noexcept {
    const auto &gpu = g_native_dfhack_gpu_target;
    if (g_native_dfhack_gpu_frame_ready && gpu.texture && gpu.renderer == renderer &&
            g_native_dfhack_gpu_page_revision == native_dfhack_layer_page_revision())
        return true;
    for (const auto &map : layer.maps())
        if (map && map->any_content()) return true;
    // PresentScope holds the private storage lock. Inspect each of its own
    // output arrays once before allocating, binding or clearing an SDL target.
    const auto nonzero = [](const auto &values) noexcept {
        return std::any_of(values.begin(), values.end(), [](auto value) { return value != 0; });
    };
    const auto &storage = g_native_dfhack_layer_storage;
    if (nonzero(storage.written)) return true;
    for (const auto &plane : storage.planes) {
        if (nonzero(plane.screen) || nonzero(plane.flags)) return true;
        for (const auto &textures : plane.textures)
            if (nonzero(textures)) return true;
    }
    return false;
}

static void native_dfhack_present_layer(SDL_Renderer *renderer,
        void (*translate)(SDL_Renderer *)) {
    if (!renderer || !native_pe_supported()) return;
    const bool disabled = native_dfhack_switch_disabled();
    static bool hidden = false;
    if (disabled != hidden) {
        // Discard both sides of the transition on the SDL thread, after any
        // private writer has restored its borrowed graphicst pointers. Queued
        // callbacks may still produce private output while tools are disabled.
        if (NativeDfhackLayerWriteScope::in_progress()) return;
        clear_native_dfhack_layers();
        g_native_dfhack_gpu_frame_ready = false;
        g_native_dfhack_gpu_target_initialized = false;
        hidden = disabled;
    }
    if (disabled) return;
    NativeDfhackLayerPresentScope layer;
    if (!layer.valid()) return;
    auto *gps = layer.graphics();
    if (!gps || gps->dimx <= 0 || gps->dimy <= 0) return;
    if (!native_dfhack_layer_has_content(renderer, layer)) return;

    const auto native = NativeDfhackLayerNativeRenderer::current();
    if (native.sdl != renderer) return;
    auto *native_renderer = native.object;
    auto **methods = native.methods;

    NativeDfhackLayerSdlState state(renderer);
    int width = 0, height = 0;
    if (!native_dfhack_layer_target_size(renderer, state, width, height)) return;
    auto &target = g_native_dfhack_layer_target;
    if (!target.prepare(renderer, width, height) ||
            !state.bind(target.texture, width, height)) return;
    NativeDfhackLayerDrawingScope drawing;
    SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_NONE);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    if (SDL_RenderClear(renderer) != 0) return;

    {
        NativeDfhackLayerRendererGrid grid(native_renderer, *gps);
        NativeDfhackLayerPaintContext paint(renderer, native_renderer, gps, methods);
        // Private map graphics precede private interface cells. Each map keeps
        // the native dimensions and origin, while its arrays contain only
        // DFHack's writes; empty cells leave this target transparent.
        for (const auto &map : layer.maps()) {
            if (!map || !map->any_content() || !map->view() ||
                    map->dimx() <= 0 || map->dimy() <= 0) continue;
            const bool map_port = map->map_port();
            const auto draw = reinterpret_cast<NativeDfhackLayerMapMethod>(methods[map_port ? 5 : 4]);
            if (!draw) continue;
            for (int x = 0; x < map->dimx(); ++x)
                for (int y = 0; y < map->dimy(); ++y) {
                    const size_t at = map_port
                        ? static_cast<size_t>(y) * map->dimx() + x
                        : static_cast<size_t>(x) * map->dimy() + y;
                    if (map->has_content(at)) {
                        paint.maps.push_back({map->view(), draw, x, y});
                        draw(native_renderer, map->view(), x, y);
                    }
                }
        }
        // Match native update_all's separate passes. Anchored graphics can
        // extend beyond their cell and must follow all ordinary cells.
        for (size_t pass = 0; pass < 4; ++pass) {
            const bool top = pass >= 2;
            if (top && !gps->top_in_use) continue;
            const bool anchor = pass & 1;
            const auto draw = reinterpret_cast<NativeDfhackLayerTileMethod>(methods[pass]);
            const auto *anchors = top ? gps->screentexpos_top_anchored : gps->screentexpos_anchored;
            if (!draw || (anchor && !anchors)) continue;
            for (int x = 0; x < gps->dimx; ++x)
                for (int y = 0; y < gps->dimy; ++y) {
                    const size_t at = static_cast<size_t>(x) * gps->dimy + y;
                    if (anchor ? anchors[at] != 0 : native_dfhack_layer_cell_visible(*gps, at, top)) {
                        if (anchor) paint.anchors[top].push_back(at);
                        draw(native_renderer, x, y);
                    }
                }
        }
        native_dfhack_compose_gpu_layer(renderer, paint.bound_target, width, height);
        if (translate) translate(renderer);
    }
    state.restore();
    // This is the ordinary final composition of the private target. It never
    // copies game pixels into DFHack's layer or feeds it to native scanners.
    const SDL_Rect destination{0, 0, width, height};
    SDL_RenderCopy(renderer, target.texture, nullptr, &destination);
}

static void release_native_dfhack_layer_target() noexcept {
    g_native_dfhack_layer_target.release();
    g_native_dfhack_gpu_target.release();
    g_native_dfhack_gpu_target_initialized = false;
    g_native_dfhack_gpu_frame_ready = false;
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
static bool install_native_dfhack_gpu_target_hook() { return true; }
static void uninstall_native_dfhack_gpu_target_hook() {}
static bool native_dfhack_gpu_target_hook_active() noexcept { return false; }
static bool native_dfhack_render_callbacks_pending() noexcept { return true; }
static void native_dfhack_redraw_background(SDL_Renderer *, const SDL_Rect &) {}
static void native_dfhack_present_layer(SDL_Renderer *, void (*)(SDL_Renderer *)) {}
static void release_native_dfhack_layer_target() noexcept {}
#endif
