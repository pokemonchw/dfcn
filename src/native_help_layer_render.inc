// Every native UI layer shares the frame producer and tile painters. Only
// the help component's own draw/bounds bindings are platform-specific.
static NativeEntryHook g_native_help_frame_hook;
#ifdef _WIN32
static NativeEntryHook g_native_help_producer_hook;
static void *g_native_help_frame_renderer = nullptr;
#endif
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
#ifdef _WIN32
                native_object_read_member(help, {4, "help_interfacest", "flag"}, flags);
                const auto *header = static_cast<const NativeString *>(native_object_member_address(
                    help, {0x10, "help_interfacest", "header"}, sizeof(NativeString)));
#else
                if (help) std::memcpy(&flags, static_cast<unsigned char *>(help) + 4, sizeof(flags));
                const auto *header = help ? reinterpret_cast<const NativeString *>(
                    static_cast<unsigned char *>(help) + 0x10) : nullptr;
#endif
                std::string_view source;
                const int title_left = std::max(x, *left + 1);
                const int title_right = std::min(end_x + 1, *right - 5);
                const int title_y = *top + 1;
                if ((flags & 4) && title_left < title_right && title_y >= y && title_y <= end_y &&
                        header && native_string_view(header, &source, 4096) &&
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
    // The world-creation welcome card is drawn inside its parent's private
    // page. Keep the help component's own paragraph/layout owner there too;
    // this binding restores the parent's arrays and cursor after the card.
    std::optional<NativeUiGridBinding> output;
    if (!native_ui_bind_grid(output, gps, *layer.foreground.graphics())) {
        layer.ready = false;
        callback.call_native([&] { original(help); });
        return;
    }
    struct WriteScope {
        const graphicst *previous = g_native_help_write_graphics;
        explicit WriteScope(const graphicst *graphics) { g_native_help_write_graphics = graphics; }
        ~WriteScope() { g_native_help_write_graphics = previous; }
    } writing(gps);
    callback.call_native([&] { original(help); });
    // This top-plane flag belongs to the component, not the native page.
    native_graphics_read_member(gps, offsetof(graphicst, top_in_use),
        layer.foreground.graphics()->top_in_use);
    layer.ready = true;
}

static void native_help_reset_frame(void *renderer) {
    native_petition_begin_frame();
    native_designation_begin_frame();
    native_map_hover_begin_frame();
    native_embark_civilization_begin_frame();
    native_topbar_begin_frame();
    native_petitions_begin_frame();
    native_map_begin_frame();
    native_tooltip_begin_frame();
    native_notification_begin_frame();
    native_announcement_log_begin_frame();
    auto &layer = g_native_help_layer;
    layer.ready = false;
    native_info_begin_frame();
    native_character_begin_frame();
    native_stocks_begin_frame();
    native_display_begin_frame();
    native_squads_begin_frame();
    native_reports_begin_frame();
    native_pause_begin_frame();
    native_resolution_begin_frame();
    native_worldgen_begin_frame();
    layer.frames.clear();
    layer.collapsed_titles.clear();
    layer.index_panels.clear();
    layer.index_intro.reset();
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
#ifdef _WIN32
    if (!tile || native_object_virtual_method(methods, "renderer", "update_tile", 0,
            "void(int32_t,int32_t)", 2) != tile) return;
#else
    if (!methods || !tile || methods[0] != tile) return;
#endif
    NativeUiRendererContract raster;
    NativeDfhackOutputBinding::AccessPlan output;
    auto *owner = native_graphics_owner();
    if (!raster.resolve(renderer) || !owner || !output.resolve(*owner, false)) {
        static bool reported = false;
        if (!reported) {
            reported = true;
            try { log_line("WARN", "Native private UI requires a complete mapped output and renderer painter contract; preserving native page output"); }
            catch (...) {}
        }
        return;
    }
    layer.native_renderer = renderer;
    layer.renderer = raster.sdl;
}

static void native_help_begin_frame(void *renderer) {
    NativeInputCallbackScope callback;
    TranslationStateScope translation;
    // Only restore unfinished output bindings before native arrays swap.
    // Keep the last completed layer available until the producer takes over.
    native_tooltip_restore_output();
    native_petition_restore_output();
    native_designation_restore_output();
    native_map_hover_restore_output();
    native_embark_civilization_restore_output();
    native_topbar_restore_output();
    native_petitions_restore_output();
    reset_native_announcement_notification_capture();
#ifndef _WIN32
    // The producer owns the native buffers here, before their rotation and
    // the next page render. Restore lost map objects at this boundary only.
    native_map_restore_missing_outputs();
#endif
    const auto original = reinterpret_cast<NativeHelpDrawFn>(g_native_help_frame_hook.original);
    if (original) callback.call_native([&] { original(renderer); });
#ifdef _WIN32
    g_native_help_frame_renderer = renderer;
#else
    native_help_reset_frame(renderer);
    try { native_announcement_log_preheat(4, false); }
    catch (...) {}
    native_map_preview_refresh();
    native_settings_menu_prepare();
    native_mouse_coordinates_prepare();
    native_map_preview_prepare();
#endif
}

#ifdef _WIN32
static void native_help_produce_frame() {
    NativeInputCallbackScope callback;
    TranslationStateScope translation;
    const auto original = reinterpret_cast<void (*)()>(g_native_help_producer_hook.original);
    if (!original) return;
    // swap_arrays and render_things are separate calls on the producer
    // thread. Reset and rebuild the layers under one lock, so Present sees
    // either the previous completed output or this complete frame, including
    // an empty frame when the native component closes.
    native_help_reset_frame(g_native_help_frame_renderer);
    {
        // A hover's native early return can submit fewer body rows than its
        // initial count. Finish its output and release its retained translation
        // scope before this producer returns to the native display handshake.
        struct FinishNotifications {
            ~FinishNotifications() {
                native_petition_end_draw();
                native_designation_end_draw();
                native_map_hover_end_draw();
                native_topbar_end_draw();
                native_petitions_end_draw();
                native_notification_end_draw();
                reset_native_announcement_notification_capture();
            }
        } finish_notifications;
        callback.call_native([&] { original(); });
    }
    try { native_announcement_log_preheat(4, false); }
    catch (...) {}
    // Dependency completion publishes replacements directly into the exact
    // retained paragraphs. Their native draw was already bound at end_draw.
    native_riding_frame();
    native_map_preview_refresh();
    native_settings_menu_prepare();
    native_mouse_coordinates_prepare();
    native_map_preview_prepare();
}
#endif

static void uninstall_native_help_draw_part() {
    if (!native_callbacks_idle()) return;
    g_native_help_draw_hook.uninstall("Native help draw entry restore");
    g_native_help_bounds_hook.uninstall("Native help layout call restore");
    if (!g_native_help_bounds_hook.active()) g_native_help_bounds = nullptr;
    // renderer/native_renderer are shared by every private UI layer. The
    // optional help component must not reset them when its own hook is absent.
    if (!g_native_help_draw_hook.active() && !g_native_help_bounds_hook.active())
        g_native_help_layer.ready = false;
}

static void uninstall_native_ui_frame_part() {
    if (!native_callbacks_idle()) return;
    g_native_help_frame_hook.uninstall("Native UI frame producer restore");
#ifdef _WIN32
    g_native_help_producer_hook.uninstall("Native UI complete frame producer restore");
    if (!g_native_help_frame_hook.active() && !g_native_help_producer_hook.active())
        g_native_help_frame_renderer = nullptr;
#endif
}

static bool install_native_ui_frame_part() {
    if (g_native_help_frame_hook.installed
#ifdef _WIN32
            && g_native_help_producer_hook.installed
#endif
            ) return true;
    if (g_native_help_frame_hook.active()
#ifdef _WIN32
            || g_native_help_producer_hook.active()
#endif
            ) {
        uninstall_native_ui_frame_part();
        if (g_native_help_frame_hook.active()
#ifdef _WIN32
                || g_native_help_producer_hook.active()
#endif
                ) return false;
    }
    struct InstallGuard {
        bool committed = false;
        ~InstallGuard() {
            if (!committed) { try { uninstall_native_ui_frame_part(); } catch (...) {} }
        }
    } guard;
    constexpr const char *label = "Native shared UI frame producer";
#ifdef _WIN32
    const auto base = native_history_profile_base();
    auto *frame = reinterpret_cast<unsigned char *>(native_reference_address(base, 0x8e4e60));
    // renderer::swap_arrays precedes render_things on both PE editions.
    // This complete mov has no relative operand to relocate in the relay.
    std::vector<unsigned char> frame_prefix{0x48,0x8b,0x91,0x80,0x00,0x00,0x00};
    if (!frame || !native_reference_bytes(0x8e4e60, frame_prefix) ||
            !g_native_help_frame_hook.prepare(frame, frame_prefix,
                reinterpret_cast<const void *>(&native_help_begin_frame), {}, label)) return false;
    auto *producer = reinterpret_cast<unsigned char *>(native_reference_address(base, 0xadb420));
    std::vector<unsigned char> producer_prefix{0x48,0x89,0x5c,0x24,0x08};
    if (!producer || !native_reference_bytes(0xadb420, producer_prefix) ||
            !g_native_help_producer_hook.prepare(producer, producer_prefix,
                reinterpret_cast<const void *>(&native_help_produce_frame), {}, label)) return false;
#else
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
#endif
    if (
#ifdef _WIN32
            !g_native_help_producer_hook.install(label) ||
#endif
            !g_native_help_frame_hook.install(label)) return false;
    guard.committed = true;
    try { log_line("INFO", "Enabled the shared native UI frame producer"); } catch (...) {}
    return true;
}

static bool install_native_help_draw_part() {
    if (g_native_help_draw_hook.installed && g_native_help_bounds_hook.installed) return true;
    if (g_native_help_draw_hook.active() || g_native_help_bounds_hook.active()) {
        uninstall_native_help_draw_part();
        if (g_native_help_draw_hook.active() || g_native_help_bounds_hook.active()) return false;
    }
    struct InstallGuard {
        bool committed = false;
        ~InstallGuard() {
            if (!committed) { try { uninstall_native_help_draw_part(); } catch (...) {} }
        }
    } guard;
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
    std::vector<NativeCall> calls{{0x1021752, 0x100ae50,
        reinterpret_cast<const void *>(&capture_native_help_draw_bounds)}};
    constexpr uintptr_t origin = 0x400000;
#endif
    g_native_help_bounds = reinterpret_cast<NativeHelpBoundsFn>(bounds);
    if (!native_reference_calls(calls, origin) ||
            !g_native_help_bounds_hook.install(base, calls, label) ||
            !g_native_help_draw_hook.install(label)) return false;
    guard.committed = true;
    log_line("INFO", "Redirected native tutorial/help drawing to its private output layer");
    return true;
}

static bool install_native_help_layer_hook() {
    if (!install_native_ui_frame_part()) return false;
    const auto warn = [](const char *message) noexcept {
        try { report_native_patch_error("WARN", "Native help component", message); } catch (...) {}
    };
    bool help = false;
    try { help = install_native_help_draw_part(); }
    catch (const std::exception &error) {
        warn(error.what());
    } catch (...) {
        warn("installation raised an unknown exception");
    }
    if (!help) {
        // The optional subtransaction already attempted rollback, including
        // allocation failures. Retain original pointers if a patch could not
        // detach, and never tear down the proved shared frame producer here.
        try { uninstall_native_help_draw_part(); } catch (...) {}
        warn("help-specific drawing is unavailable; the shared UI frame producer remains enabled");
    }
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
        restored = false;
        const SDL_Rect full{0, 0, width, height};
        return SDL_SetRenderTarget(renderer, texture) == 0 &&
            SDL_RenderSetLogicalSize(renderer, 0, 0) == 0 &&
            SDL_RenderSetIntegerScale(renderer, SDL_FALSE) == 0 &&
            SDL_RenderSetViewport(renderer, &full) == 0 &&
            SDL_RenderSetScale(renderer, 1, 1) == 0 &&
            SDL_RenderSetClipRect(renderer, nullptr) == 0;
    }
    bool bind_composite(int width, int height) {
        if (width <= 0 || height <= 0) return false;
        restored = false;
        // The complete layer owns logical-screen coordinates. Recompute the
        // viewport/scale for the entry window or texture target, preserving
        // logical letterboxing but discarding a native widget's local clip.
        return SDL_SetRenderTarget(renderer, target) == 0 &&
            SDL_RenderSetIntegerScale(renderer, integer_scale) == 0 &&
            SDL_RenderSetLogicalSize(renderer, width, height) == 0 &&
            SDL_RenderSetClipRect(renderer, nullptr) == 0;
    }
    void restore() {
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
    ~NativeUiLayerSdlState() { restore(); }
};

#include "native_ui_frame_cache.inc"

struct NativeUiLayerTarget {
    SDL_Renderer *renderer = nullptr;
    SDL_Texture *texture = nullptr;
    int width = 0, height = 0;
    NativeUiLayerFrameCache frame_cache;
    void release() {
        frame_cache.clear();
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

#include "native_announcement_log_space_cache.inc"
#include "native_announcement_log_native_raster.inc"

// Overlay callbacks retain their existing void API. Completion is explicit
// at the raster boundary, so an early return cannot certify a cached frame.
class NativeUiPaintCompletion {
    inline static thread_local NativeUiPaintCompletion *active_ = nullptr;
    NativeUiPaintCompletion *previous_ = nullptr;
    const NativeUiLayerStorage *layer_ = nullptr;
    size_t attempts_ = 0;
    bool failed_ = false;
public:
    explicit NativeUiPaintCompletion(const NativeUiLayerStorage &layer) noexcept
        : previous_(active_), layer_(&layer) { active_ = this; }
    ~NativeUiPaintCompletion() { active_ = previous_; }
    bool complete() const noexcept { return attempts_ && !failed_; }
    struct Attempt {
        NativeUiPaintCompletion *owner = nullptr;
        bool complete = false;
        explicit Attempt(const NativeUiLayerStorage &layer) noexcept {
            for (auto *scope = active_; scope; scope = scope->previous_)
                if (scope->layer_ == &layer) { owner = scope; break; }
        }
        ~Attempt() {
            if (owner) { ++owner->attempts_; owner->failed_ = owner->failed_ || !complete; }
        }
    };
};

static void native_ui_paint_grid(NativeUiLayerStorage &layer, SDL_Renderer *renderer,
        const std::vector<Match> &matches, const SDL_Rect *opaque_frame) {
    NativeUiPaintCompletion::Attempt completed(layer);
    if (!layer.ready || layer.renderer != renderer || !layer.native_renderer) return;
    NativeUiRendererContract raster;
    if (!raster.resolve(layer.native_renderer, renderer)) return;
    auto *gps = layer.foreground.graphics();
    // Validate every frame before masking or painting any cell. All four
    // painter functions and all output fields are already resolved above.
    for (const auto &frame : layer.frames)
        if (frame.x < 0 || frame.y < 0 || frame.w < 0 || frame.h < 0 ||
                int64_t(frame.x) + frame.w > gps->dimx ||
                int64_t(frame.y) + frame.h > gps->dimy) return;
    const bool log_layer = opaque_frame && &layer == &g_native_announcement_log_layer;
    std::optional<NativeBitmapFontTextures> local_fonts;
    if (!log_layer || !g_native_announcement_log_fonts)
        local_fonts.emplace(!matches.empty() || log_layer, log_layer);
    const auto &fonts = log_layer && g_native_announcement_log_fonts
        ? *g_native_announcement_log_fonts : *local_fonts;
    struct CaptionInk {
        const NativeDrawnTextRow *writer;
        const NativeAnnouncementLogCaptionBackdrop *backdrop;
    };
    struct CaptionRow {
        int left = 0, right = 0;
        std::vector<const CaptionInk *> cells;
    };
    std::vector<CaptionInk> caption_ink;
    std::vector<CaptionRow> caption_rows;
    if (log_layer) {
        size_t count = 0;
        for (const auto &plane : g_native_announcement_log_text.rows) count += plane.size();
        caption_ink.reserve(count);
        caption_rows.resize(gps->dimy);
        std::unordered_multimap<uint64_t, const NativeAnnouncementLogCaptionBackdrop *> backdrops;
        backdrops.reserve(g_native_announcement_log_caption_backdrops.size());
        for (const auto &before : g_native_announcement_log_caption_backdrops)
            backdrops.emplace(before.sequence, &before);
        for (const auto &plane : g_native_announcement_log_text.rows)
            for (const auto &draw : plane) {
                if (draw.y < 0 || draw.y >= gps->dimy) continue;
                const NativeAnnouncementLogCaptionBackdrop *backdrop = nullptr;
                const auto [first, last] = backdrops.equal_range(draw.sequence);
                for (auto at = first; at != last; ++at) {
                    const auto &before = *at->second;
                    if (before.address == draw.address &&
                            before.top_layer == draw.top_layer && before.x == draw.x &&
                            before.y == draw.y && before.source == draw.source &&
                            (!backdrop || &before < backdrop)) {
                        // Equal sequence keys still use the first exact
                        // captured backdrop, as the original ordered scan.
                        backdrop = &before;
                    }
                }
                caption_ink.push_back({&draw, backdrop});
                auto &row = caption_rows[draw.y];
                const int left = std::clamp(draw.x, 0, gps->dimx);
                const int right = static_cast<int>(std::clamp<int64_t>(
                    int64_t(draw.x) + int64_t(draw.source.size()), left, gps->dimx));
                if (left >= right) continue;
                if (row.left == row.right) { row.left = left; row.right = right; }
                else { row.left = std::min(row.left, left); row.right = std::max(row.right, right); }
            }
        // Allocate only the captured caption intervals. Resolve overlap once
        // in capture order, instead of searching every writer for every cell
        // again while source masks are applied below.
        for (auto &row : caption_rows) row.cells.resize(static_cast<size_t>(row.right - row.left));
        for (const auto &ink : caption_ink) {
            const auto &draw = *ink.writer;
            auto &row = caption_rows[draw.y];
            const int left = std::clamp(draw.x, row.left, row.right);
            const int right = static_cast<int>(std::clamp<int64_t>(
                int64_t(draw.x) + int64_t(draw.source.size()), left, row.right));
            for (int x = left; x < right; ++x) {
                auto &latest = row.cells[static_cast<size_t>(x - row.left)];
                if (!latest || latest->writer->sequence < draw.sequence) latest = &ink;
            }
        }
    }
    struct SourceMask {
        using Texture = std::remove_pointer_t<decltype(graphicst::screentexpos)>;
        using Cell = NativeAnnouncementLogCaptionBackdrop::Cell;
        struct SavedCell {
            NativeUiLayerGrid::Plane *plane;
            size_t at;
            Cell value;
        };
        std::vector<std::pair<unsigned char *, unsigned char>> saved;
        std::vector<std::pair<Texture *, Texture>> saved_textures;
        std::vector<SavedCell> saved_cells;
        ~SourceMask() {
            for (const auto &[slot, value] : saved) *slot = value;
            for (const auto &[slot, value] : saved_textures) *slot = value;
            for (auto at = saved_cells.rbegin(); at != saved_cells.rend(); ++at)
                write(*at->plane, at->at, at->value);
        }
        static void write(NativeUiLayerGrid::Plane &plane, size_t at, const Cell &value) {
            std::memcpy(plane.screen.data() + at * 8, value.screen.data(), value.screen.size());
            plane.flags[at] = value.flags;
            for (size_t slot = 0; slot < value.textures.size(); ++slot)
                plane.textures[slot][at] = value.textures[slot];
        }
        void remember(NativeUiLayerGrid::Plane &plane, size_t at) {
            SavedCell original{&plane, at, {}};
            std::memcpy(original.value.screen.data(), plane.screen.data() + at * 8,
                original.value.screen.size());
            original.value.flags = plane.flags[at];
            for (size_t slot = 0; slot < original.value.textures.size(); ++slot)
                original.value.textures[slot] = plane.textures[slot][at];
            saved_cells.push_back(std::move(original));
        }
        void hide(unsigned char *slot, unsigned char expected) {
            if (!slot || !expected || expected == ' ' || *slot != expected) return;
            saved.emplace_back(slot, *slot); *slot = ' ';
        }
        void hide_texture(Texture *slot) {
            saved_textures.emplace_back(slot, *slot); *slot = 0;
        }
    } mask;
    if (log_layer) {
        size_t cells = 0;
        for (const auto &match : matches)
            if (!match.native_help_source_only)
                cells += static_cast<size_t>(std::clamp(native_match_source_length(match), 0, gps->dimx));
        mask.saved_cells.reserve(cells * (gps->top_in_use ? 2 : 1));
    }
    for (const auto &match : matches) {
        if (match.native_help_source_only) continue;
        const int source_length = native_match_source_length(match);
        const auto source = native_match_source(match);
        const int begin = std::max(0, match.x);
        const int end = std::min(gps->dimx, match.x + source_length);
        const int top = match.native_split_text ? match.native_split_top_y : match.y;
        const int bottom = top + (match.native_split_text ? 2 : 1);
        for (int y = std::max(0, top); y < std::min(gps->dimy, bottom); ++y)
            for (int x = begin; x < end; ++x) {
                const int i = x - match.x;
                const size_t cell = static_cast<size_t>(x) * gps->dimy + y;
                const size_t at = cell * 8;
                const auto expected = static_cast<unsigned char>(source[i]);
                const NativeAnnouncementLogCaptionBackdrop *backdrop = nullptr;
                if (log_layer) {
                    const auto &row = caption_rows[y];
                    const CaptionInk *latest = x >= row.left &&
                        static_cast<size_t>(x - row.left) < row.cells.size()
                            ? row.cells[static_cast<size_t>(x - row.left)] : nullptr;
                    // A missing optional backdrop on the latest writer must
                    // never expose an earlier writer's skin at this position.
                    if (latest && latest->backdrop &&
                            static_cast<unsigned char>(latest->writer->source[x - latest->writer->x]) == expected) {
                        const auto *before = latest->backdrop;
                        const size_t plane = before->top_layer ? 1 : 0;
                        if (before->planes[plane].size() == before->source.size()) backdrop = before;
                    }
                }
                for (size_t index = 0; index < layer.foreground.planes.size(); ++index) {
                    if (index && !gps->top_in_use) continue;
                    if (backdrop && index != (backdrop->top_layer ? 1u : 0u)) continue;
                    auto &plane = layer.foreground.planes[index];
                    const auto character = plane.screen[at];
                    if (character != expected && character != 0 && character != ' ') continue;
                    if (log_layer) {
                        mask.remember(plane, cell);
                        if (backdrop) {
                            // Restore the exact native skin before English
                            // overwrote it, including its own color/primary
                            // picture. English length and RGB no longer make
                            // the retained background change while scrolling.
                            SourceMask::write(plane, cell,
                                backdrop->planes[index][static_cast<size_t>(x - backdrop->x)]);
                        } else {
                            // Optional backdrop allocation can fail. Keep the
                            // previous exact-font masking fallback drawable.
                            for (size_t slot : {size_t{0}, size_t{1}, size_t{2}})
                                if (fonts.contains(plane.textures[slot][cell], expected))
                                    plane.textures[slot][cell] = 0;
                            if (expected && expected != ' ' && character == expected)
                                plane.screen[at] = ' ';
                        }
                        continue;
                    }
                    // Font glyphs can occupy any drawable texture slot.
                    // Exact atlas membership keeps non-font artwork intact.
                    for (size_t slot : {size_t{0}, size_t{1}, size_t{2}}) {
                        auto *texture = plane.textures[slot].data() + cell;
                        if (fonts.contains(*texture, expected)) mask.hide_texture(texture);
                    }
                    mask.hide(plane.screen.data() + at, expected);
                }
            }
    }
    const auto paint_tiles = [&] {
    std::optional<NativeUiGridBinding> grid;
    if (!native_ui_bind_grid(grid, native_graphics(), *gps, layer.native_renderer)) return false;
    std::vector<SDL_Point> anchored_cells;
    std::vector<int> space_until;
    bool cache_spaces = opaque_frame && &layer == &g_native_announcement_log_layer &&
        g_native_announcement_log_space_cache.prepare(renderer, layer.native_renderer, *gps);
    if (cache_spaces) {
        try { space_until.resize(gps->dimy); }
        catch (...) { cache_spaces = false; }
    }
    for (size_t plane = 0; plane < layer.foreground.planes.size(); ++plane) {
        if (plane && !gps->top_in_use) continue;
        anchored_cells.clear();
        const auto draw = raster.tiles[plane];
        const auto &source = layer.foreground.planes[plane];
        for (const auto &frame : layer.frames) {
            if (cache_spaces)
                std::fill_n(space_until.begin() + frame.y, frame.h, frame.x);
            for (int x = frame.x; x < frame.x + frame.w; ++x)
                for (int y = frame.y; y < frame.y + frame.h; ++y) {
                    if (cache_spaces && x < space_until[y]) continue;
                    const size_t at = static_cast<size_t>(x) * gps->dimy + y;
                    // Anchored pictures must stay after every ordinary tile
                    // in this plane. Collect only their occupied coordinates
                    // during that first pass instead of scanning the entire
                    // component again merely to rediscover its sparse icons.
                    if (source.textures[2][at]) anchored_cells.push_back({x, y});
                    const bool content =
                        source.screen[at * 8] || source.textures[0][at] || source.textures[1][at] || source.flags[at];
                    if (!content) continue;
                    if (opaque_frame &&
                            (x < opaque_frame->x || x >= opaque_frame->x + opaque_frame->w ||
                             y < opaque_frame->y || y >= opaque_frame->y + opaque_frame->h)) {
                        uint64_t cell = 0;
                        std::memcpy(&cell, source.screen.data() + at * 8, sizeof(cell));
                        // Native clear_screen leaves a zero-color space in
                        // both planes. It owns no artwork outside this panel;
                        // painting its black background would hide the map.
                        if (cell == static_cast<uint64_t>(' ') && !source.flags[at] &&
                                std::all_of(source.textures.begin(), source.textures.end(),
                                    [at](const auto &texture) { return !texture[at]; })) continue;
                    }
                    if (cache_spaces) {
                        const int end = g_native_announcement_log_space_cache.paint(renderer,
                            layer.native_renderer, *gps, source, *opaque_frame, x, y,
                            frame.x + frame.w, draw, plane != 0);
                        if (end > x) { space_until[y] = end; continue; }
                    }
                    draw(layer.native_renderer, x, y);
                }
        }
        const auto draw_anchored = raster.anchors[plane];
        for (const auto &cell : anchored_cells)
            draw_anchored(layer.native_renderer, cell.x, cell.y);
    }
    return true;
    };
    bool cached_complete = false;
    if (log_layer && g_native_announcement_log_native_raster.paint(
            layer, renderer, fonts, paint_tiles, cached_complete)) {
        completed.complete = cached_complete;
        return;
    }
    completed.complete = paint_tiles();
}

static void native_ui_present_layer(NativeUiLayerStorage &layer, NativeUiLayerTarget &target,
        SDL_Renderer *renderer, void (*draw_layer)(SDL_Renderer *)) {
    TranslationStateScope translation;
    if (!renderer || !draw_layer || !layer.ready || layer.renderer != renderer) return;
    // Discovery and layout share the same owned caption snapshot. A private
    // text-scope swap advances its revision, so another layer cannot borrow it.
    NativeCapturedTextReadScope captured_text_reads;
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
    const auto draw_complete = [&] {
        NativeUiPaintCompletion completion(layer);
        try { draw_layer(renderer); }
        catch (...) { return false; }
        return completion.complete();
    };
    if (!target.prepare(renderer, width, height)) {
        if (state.bind_composite(width, height)) draw_complete();
        return;
    }
    std::optional<std::string> context;
    try { context = native_ui_layer_cache_context(layer); }
    catch (...) { /* Rendering remains available without a retained source. */ }
    const bool owned_frames = &layer == &g_native_notification_layer ||
        &layer == &g_native_petition_layer ||
        &layer == &g_native_petitions_layer ||
        &layer == &g_native_designation_layer ||
        &layer == &g_native_map_hover_layer ||
        &layer == &g_native_topbar_layer;
    if (context && target.frame_cache.matches(layer, renderer, width, height,
            draw_layer, *context, owned_frames)) {
        // Only this private UI is retained. Composite it on the current native
        // map/background every time, preserving animation beneath the panel.
        if (!state.bind_composite(width, height)) return;
        const SDL_Rect destination{0, 0, width, height};
        if (SDL_RenderCopy(renderer, target.texture, nullptr, &destination) != 0)
            target.frame_cache.invalidate();
        return;
    }
    target.frame_cache.invalidate();
    bool captured = false;
    if (context) {
        try {
            target.frame_cache.capture(layer, renderer, width, height,
                draw_layer, *context, owned_frames);
            captured = true;
        } catch (...) { /* An allocation failure must not prevent native painting. */ }
    }
    if (!state.bind(target.texture, width, height)) {
        if (state.bind_composite(width, height)) draw_complete();
        return;
    }
    // Native production owns the source arrays. Repaint their private target
    // only after source content, layout or translation context changes.
    if (SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_NONE) != 0 ||
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0) != 0 || SDL_RenderClear(renderer) != 0) {
        if (state.bind_composite(width, height)) draw_complete();
        return;
    }
    if (!draw_complete()) return;
    if (!state.bind_composite(width, height)) return;
    const SDL_Rect destination{0, 0, width, height};
    if (SDL_RenderCopy(renderer, target.texture, nullptr, &destination) != 0) return;
    if (captured) {
        try {
            const auto completed_context = native_ui_layer_cache_context(layer);
            if (completed_context && *completed_context == *context)
                target.frame_cache.publish();
        } catch (...) { /* Leave the source invalid until a stable draw succeeds. */ }
    }
}

static void native_help_paint_grid(SDL_Renderer *renderer, const std::vector<Match> &matches) {
    native_ui_paint_grid(g_native_help_layer, renderer, matches);
}

static void native_help_present_layers(SDL_Renderer *renderer,
        void (*draw_help)(SDL_Renderer *)) {
    native_ui_present_layer(g_native_help_layer, g_native_help_target, renderer, draw_help);
}

static void uninstall_native_help_layer_hook() {
    uninstall_native_help_draw_part();
    uninstall_native_ui_frame_part();
    if (!g_native_help_frame_hook.active() && !g_native_help_draw_hook.active() &&
            !g_native_help_bounds_hook.active()
#ifdef _WIN32
            && !g_native_help_producer_hook.active()
#endif
            ) {
        g_native_help_bounds = nullptr;
        g_native_help_target.release();
        g_native_help_layer = {};
#ifdef _WIN32
        g_native_help_frame_renderer = nullptr;
#endif
    }
}
static bool native_help_layer_hook_active() {
    return g_native_help_frame_hook.active() || g_native_help_draw_hook.active() ||
        g_native_help_bounds_hook.active()
#ifdef _WIN32
        || g_native_help_producer_hook.active()
#endif
        ;
}
