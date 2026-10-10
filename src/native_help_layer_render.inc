// Every native UI layer shares the frame producer and tile painters. Only
// the help component's own draw/bounds bindings are platform-specific.
static NativeEntryHook g_native_help_frame_hook;
using NativeHelpDrawFn = void (*)(void *);
// help_interfacest::render is shared by tutorials, information cards and
// minimized guides. Redirect its output BEFORE any native stores execute.
static NativeEntryHook g_native_help_draw_hook;
static NativeCallHook g_native_help_bounds_hook;
using NativeHelpBoundsFn = void (*)(void *, int32_t *, int32_t *, int32_t *, int32_t *);
static NativeHelpBoundsFn g_native_help_bounds = nullptr;

static void capture_native_help_draw_bounds(void *help, int32_t *left, int32_t *right,
        int32_t *top, int32_t *bottom) {
    NativeInputCallbackScope callback;
    if (g_native_help_bounds)
        callback.call_native([&] { g_native_help_bounds(help, left, right, top, bottom); });
    if (g_native_help_write_graphics && left && right && top && bottom) {
        try {
            const auto *gps = g_native_help_write_graphics;
            const int x = std::max(0, *left), y = std::max(0, *top);
            const int end_x = std::min(gps->dimx - 1, *right);
            const int end_y = std::min(gps->dimy - 1, *bottom);
            if (end_x >= x && end_y >= y) {
                g_native_help_layer.frames.push_back({x, y, end_x - x + 1, end_y - y + 1});
                // The collapsed renderer centers the complete string, even
                // when its last glyphs overlap the reveal/close textures.
                // Keep the native title before that clipping loses its suffix.
                uint32_t flags = 0;
                if (help) std::memcpy(&flags, static_cast<unsigned char *>(help) + 4, sizeof(flags));
                std::string_view source;
                const int title_left = std::max(x, *left + 1);
                const int title_right = std::min(end_x + 1, *right - 5);
                const int title_y = *top + 1;
                if ((flags & 4) && title_left < title_right && title_y >= y && title_y <= end_y &&
                        native_string_view(reinterpret_cast<const NativeString *>(
                            static_cast<unsigned char *>(help) + 0x10), &source, 4096) &&
                        !source.empty() && source.find_first_of("\r\n") == std::string_view::npos) {
                    const int source_x = (*left + *right) / 2 - static_cast<int>(source.size()) / 2;
                    g_native_help_layer.collapsed_titles.push_back({
                        {title_left, title_y, title_right - title_left, 1}, source_x, std::string(source)});
                }
            }
        } catch (...) {}
    }
}

static void native_help_draw(void *help) {
    NativeInputCallbackScope callback;
    TranslationStateScope translation;
    const auto original = reinterpret_cast<NativeHelpDrawFn>(g_native_help_draw_hook.original);
    if (!original) return;
    auto &layer = g_native_help_layer;
    auto *gps = native_graphics();
    bool isolate = help && gps && layer.native_renderer && layer.renderer &&
        !g_native_help_write_graphics && !native_dfhack_layer_write_active(gps) &&
        gps->screen && gps->screen_top && gps->dimx > 0 && gps->dimx <= 1000 &&
        gps->dimy > 0 && gps->dimy <= 1000;
    if (isolate) {
        try {
            if (!layer.ready) {
                layer.foreground.prepare(*gps);
                layer.foreground.clear();
            } else if (layer.foreground.dimx != gps->dimx || layer.foreground.dimy != gps->dimy) {
                isolate = false;
            }
        } catch (...) { isolate = false; }
    }
    if (!isolate) { callback.call_native([&] { original(help); }); return; }
    NativeUiGridBinding output(gps, *layer.foreground.graphics());
    struct WriteScope {
        const graphicst *previous = g_native_help_write_graphics;
        explicit WriteScope(const graphicst *graphics) { g_native_help_write_graphics = graphics; }
        ~WriteScope() { g_native_help_write_graphics = previous; }
    } writing(gps);
    callback.call_native([&] { original(help); });
    // This top-plane flag belongs to the component, not the native page.
    layer.foreground.graphics()->top_in_use = gps->top_in_use;
    layer.ready = true;
}

static void native_help_begin_frame(void *renderer) {
    NativeInputCallbackScope callback;
    TranslationStateScope translation;
    const auto original = reinterpret_cast<NativeHelpDrawFn>(g_native_help_frame_hook.original);
    if (original) callback.call_native([&] { original(renderer); });
    // swap_arrays precedes render_things in the game's native frame producer.
    // Reset here even when the help renderer will not be called this frame.
    auto &layer = g_native_help_layer;
    layer.ready = false;
    native_info_begin_frame();
    native_stocks_begin_frame();
    layer.frames.clear();
    layer.collapsed_titles.clear();
    layer.native_renderer = nullptr;
    layer.renderer = nullptr;
    void **methods = nullptr;
    if (renderer) std::memcpy(&methods, renderer, sizeof(methods));
#ifdef _WIN32
    static const auto tile = reinterpret_cast<void *>(
        native_reference_address(native_history_profile_base(), 0x8ddc20));
#else
    static const auto tile = dlsym(RTLD_DEFAULT, "_ZN16renderer_2d_base11update_tileEii");
#endif
    if (!methods || !tile || methods[0] != tile) return;
    SDL_Renderer *sdl = nullptr;
    std::memcpy(&sdl, static_cast<unsigned char *>(renderer) + 0x108, sizeof(sdl));
    if (!sdl) return;
    layer.native_renderer = renderer;
    layer.renderer = sdl;
}

static bool install_native_help_layer_hook() {
    if (g_native_help_draw_hook.installed && g_native_help_frame_hook.installed &&
            g_native_help_bounds_hook.installed) return true;
    constexpr const char *label = "Native help component draw entry";
    const auto base = native_history_profile_base();
#ifdef _WIN32
    auto *draw = reinterpret_cast<unsigned char *>(native_reference_address(base, 0x1e8b20));
    const auto bounds = native_reference_address(base, 0x1f74f0);
    // One complete stack store; the relay needs no relative fixup.
    std::vector<unsigned char> prefix{0x48,0x89,0x5c,0x24,0x10};
    if (!draw || !bounds || !native_reference_bytes(0x1e8b20, prefix) ||
            !g_native_help_draw_hook.prepare(draw, prefix,
                reinterpret_cast<const void *>(&native_help_draw), {}, label)) return false;
    auto *frame = reinterpret_cast<unsigned char *>(native_reference_address(base, 0x8e4e60));
    // renderer::swap_arrays precedes render_things on both PE editions.
    // This complete mov has no relative operand to relocate in the relay.
    std::vector<unsigned char> frame_prefix{0x48,0x8b,0x91,0x80,0x00,0x00,0x00};
    if (!frame || !native_reference_bytes(0x8e4e60, frame_prefix) ||
            !g_native_help_frame_hook.prepare(frame, frame_prefix,
                reinterpret_cast<const void *>(&native_help_begin_frame), {}, label)) return false;
    std::vector<NativeCall> calls{{0x1e8bb5, 0x1f74f0,
        reinterpret_cast<const void *>(&capture_native_help_draw_bounds)}};
    constexpr uintptr_t origin = 0;
#else
    auto *draw = reinterpret_cast<unsigned char *>(native_reference_address(base, 0x1021710));
    const auto bounds = native_reference_address(base, 0x100ae50);
    std::vector<unsigned char> prefix{0xf3,0x0f,0x1e,0xfa,0x41,0x57,0x41,0x56};
    if (!draw || !bounds || !native_reference_bytes(0x1421710, prefix) ||
            !g_native_help_draw_hook.prepare(draw, prefix,
                reinterpret_cast<const void *>(&native_help_draw), {}, label)) return false;
    auto *frame = static_cast<unsigned char *>(dlsym(RTLD_DEFAULT, "_ZN8renderer11swap_arraysEv"));
    const std::vector<unsigned char> frame_prefix{
        0xf3,0x0f,0x1e,0xfa,0x48,0x8b,0x15,0x0d,0xcf,0x0b,0x00};
    if (!frame) return false;
    int32_t relative = 0;
    std::memcpy(&relative, frame_prefix.data() + 7, sizeof(relative));
    const std::vector<NativeRelativeFixup> fixups{{7, 11,
        reinterpret_cast<uintptr_t>(frame + 11) + relative}};
    if (!g_native_help_frame_hook.prepare(frame, frame_prefix,
            reinterpret_cast<const void *>(&native_help_begin_frame), fixups, label)) return false;
    std::vector<NativeCall> calls{{0x1021752, 0x100ae50,
        reinterpret_cast<const void *>(&capture_native_help_draw_bounds)}};
    constexpr uintptr_t origin = 0x400000;
#endif
    g_native_help_bounds = reinterpret_cast<NativeHelpBoundsFn>(bounds);
    if (!native_reference_calls(calls, origin) ||
            !g_native_help_bounds_hook.install(base, calls, label) ||
            !g_native_help_frame_hook.install(label) ||
            !g_native_help_draw_hook.install(label)) return false;
    log_line("INFO", "Redirected native tutorial/help drawing to its private output layer");
    return true;
}

struct NativeUiLayerSdlState {
    SDL_Renderer *renderer;
    SDL_Texture *target;
    SDL_Rect viewport{}, clip{};
    float scale_x = 1, scale_y = 1;
    int logical_width = 0, logical_height = 0;
    SDL_bool integer_scale;
    SDL_BlendMode blend;
    Uint8 r = 0, g = 0, b = 0, a = 255;
    bool clipped, restored = false;
    explicit NativeUiLayerSdlState(SDL_Renderer *value)
        : renderer(value), target(SDL_GetRenderTarget(value)),
          integer_scale(SDL_RenderGetIntegerScale(value)), clipped(SDL_RenderIsClipEnabled(value)) {
        SDL_RenderGetViewport(renderer, &viewport);
        SDL_RenderGetClipRect(renderer, &clip);
        SDL_RenderGetScale(renderer, &scale_x, &scale_y);
        SDL_RenderGetLogicalSize(renderer, &logical_width, &logical_height);
        SDL_GetRenderDrawBlendMode(renderer, &blend);
        SDL_GetRenderDrawColor(renderer, &r, &g, &b, &a);
    }
    bool bind(SDL_Texture *texture, int width, int height) {
        const SDL_Rect full{0, 0, width, height};
        return SDL_SetRenderTarget(renderer, texture) == 0 &&
            SDL_RenderSetLogicalSize(renderer, 0, 0) == 0 &&
            SDL_RenderSetIntegerScale(renderer, SDL_FALSE) == 0 &&
            SDL_RenderSetViewport(renderer, &full) == 0 &&
            SDL_RenderSetScale(renderer, 1, 1) == 0 &&
            SDL_RenderSetClipRect(renderer, nullptr) == 0;
    }
    void restore() {
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
    ~NativeUiLayerSdlState() { restore(); }
};

struct NativeUiLayerTarget {
    SDL_Renderer *renderer = nullptr;
    SDL_Texture *texture = nullptr;
    int width = 0, height = 0;
    void release() {
        if (texture) SDL_DestroyTexture(texture);
        texture = nullptr; renderer = nullptr; width = height = 0;
    }
    bool prepare(SDL_Renderer *value, int w, int h) {
        if (texture && renderer == value && width == w && height == h) return true;
        release();
        if (!value || w <= 0 || h <= 0) return false;
        texture = SDL_CreateTexture(value, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET, w, h);
        if (!texture) return false;
        const auto blend = SDL_ComposeCustomBlendMode(SDL_BLENDFACTOR_ONE,
            SDL_BLENDFACTOR_ONE_MINUS_SRC_ALPHA, SDL_BLENDOPERATION_ADD,
            SDL_BLENDFACTOR_ONE, SDL_BLENDFACTOR_ONE_MINUS_SRC_ALPHA, SDL_BLENDOPERATION_ADD);
        if (SDL_SetTextureBlendMode(texture, blend) != 0) { release(); return false; }
        renderer = value; width = w; height = h;
        return true;
    }
};
static NativeUiLayerTarget g_native_help_target;

static void native_ui_paint_grid(NativeUiLayerStorage &layer, SDL_Renderer *renderer,
        const std::vector<Match> &matches) {
    if (!layer.ready || layer.renderer != renderer || !layer.native_renderer) return;
    auto *gps = layer.foreground.graphics();
    struct SourceMask {
        std::vector<std::pair<unsigned char *, unsigned char>> saved;
        ~SourceMask() { for (const auto &[slot, value] : saved) *slot = value; }
        void hide(unsigned char *slot, unsigned char expected) {
            if (!slot || !expected || expected == ' ' || *slot != expected) return;
            saved.emplace_back(slot, *slot); *slot = ' ';
        }
    } mask;
    for (const auto &match : matches) {
        if (match.native_help_source_only || match.length <= 0 ||
                match.source.size() != static_cast<size_t>(match.length)) continue;
        const int top = match.native_split_text ? match.native_split_top_y : match.y;
        const int bottom = top + (match.native_split_text ? 2 : 1);
        for (int y = std::max(0, top); y < std::min(gps->dimy, bottom); ++y)
            for (int i = 0; i < match.length; ++i) {
                const int x = match.x + i;
                if (x < 0 || x >= gps->dimx) continue;
                const size_t at = (static_cast<size_t>(x) * gps->dimy + y) * 8;
                for (auto &plane : layer.foreground.planes)
                    mask.hide(plane.screen.data() + at, static_cast<unsigned char>(match.source[i]));
            }
    }
    NativeUiGridBinding grid(native_graphics(), *gps, layer.native_renderer);
    void **methods = nullptr;
    std::memcpy(&methods, layer.native_renderer, sizeof(methods));
    using TileFn = void (*)(void *, int, int);
    for (size_t pass = 0; pass < 4; ++pass) {
        const size_t plane = pass / 2;
        if (plane && !gps->top_in_use) continue;
        const auto draw = reinterpret_cast<TileFn>(methods[pass]);
        const auto &source = layer.foreground.planes[plane];
        for (const auto &frame : layer.frames)
            for (int x = frame.x; x < frame.x + frame.w; ++x)
                for (int y = frame.y; y < frame.y + frame.h; ++y) {
                    const size_t at = static_cast<size_t>(x) * gps->dimy + y;
                    const bool content = pass & 1 ? source.textures[2][at] != 0 :
                        source.screen[at * 8] || source.textures[0][at] || source.textures[1][at] || source.flags[at];
                    if (content) draw(layer.native_renderer, x, y);
                }
    }
}

static void native_ui_present_layer(NativeUiLayerStorage &layer, NativeUiLayerTarget &target,
        SDL_Renderer *renderer, void (*draw_layer)(SDL_Renderer *)) {
    TranslationStateScope translation;
    if (!renderer || !draw_layer || !layer.ready || layer.renderer != renderer) return;
    int width = 0, height = 0;
    SDL_RenderGetLogicalSize(renderer, &width, &height);
    if (width <= 0 || height <= 0) {
        const auto *gps = layer.foreground.graphics();
        width = gps->screen_pixel_x; height = gps->screen_pixel_y;
    }
    NativeUiLayerSdlState state(renderer);
    struct DrawingScope {
        bool previous = g_drawing_overlay;
        DrawingScope() { g_drawing_overlay = true; }
        ~DrawingScope() { g_drawing_overlay = previous; }
    } drawing;
    if (!target.prepare(renderer, width, height) || !state.bind(target.texture, width, height)) {
        state.restore();
        draw_layer(renderer);
        return;
    }
    // This is a render destination, refreshed for every submitted native
    // frame. The native component has already drawn into its own UI arrays.
    SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_NONE);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    if (SDL_RenderClear(renderer) != 0) return;
    draw_layer(renderer);
    state.restore();
    const SDL_Rect destination{0, 0, width, height};
    SDL_RenderCopy(renderer, target.texture, nullptr, &destination);
}

static void native_help_paint_grid(SDL_Renderer *renderer, const std::vector<Match> &matches) {
    native_ui_paint_grid(g_native_help_layer, renderer, matches);
}

static void native_help_present_layers(SDL_Renderer *renderer,
        void (*draw_help)(SDL_Renderer *)) {
    native_ui_present_layer(g_native_help_layer, g_native_help_target, renderer, draw_help);
}

static void uninstall_native_help_layer_hook() {
    g_native_help_draw_hook.uninstall("Native help draw entry restore");
    g_native_help_bounds_hook.uninstall("Native help layout call restore");
    g_native_help_frame_hook.uninstall("Native UI frame producer restore");
    if (!g_native_help_frame_hook.active() && !g_native_help_draw_hook.active() &&
            !g_native_help_bounds_hook.active()) {
        g_native_help_bounds = nullptr;
        g_native_help_target.release();
        g_native_help_layer = {};
    }
}
static bool native_help_layer_hook_active() {
    return g_native_help_frame_hook.active() || g_native_help_draw_hook.active() ||
        g_native_help_bounds_hook.active();
}
