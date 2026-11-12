// Redirect native world-generation UI writes, including settings, warnings,
// editors, controls and chronicle, before the viewscreen's first store. The
// graphical map keeps its native map-port output beneath this UI layer.
static NativeUiLayerTarget g_native_worldgen_target;
static NativeEntryHook g_native_worldgen_draw_hook;
static NativeEntryHook g_native_worldgen_history_clear_hook;
static uintptr_t g_native_worldgen_vtable = 0;
using NativeWorldgenDrawFn = void (*)(void *, uint32_t);
using NativeWorldgenViewportFn = void (*)(const void *, int32_t *, int32_t *);
using NativeWorldgenHistoryClearFn = void (*)(NativeHistoryRichBox *);
static NativeWorldgenViewportFn g_native_worldgen_viewport = nullptr;

// The producer and SDL display can hold different members of the native
// double buffer. Bind only at the raw display/Present boundary, where the
// pinned header and the published viewscreen owner identify the same page.
static void bind_native_worldgen_display_frame(const graphicst *graphics) {
    if (!graphics ||
#ifdef _WIN32
            graphics != native_dfhack_render_read_graphics() ||
#endif
            graphics != g_native_graphics_read_view || !graphics->screen ||
            !native_worldgen_has_frame() || g_drawing_overlay ||
            native_private_ui_write_active(graphics) ||
            NativeDfhackForegroundScope::active || g_native_info_foreground ||
            g_native_character_foreground) return;
    const auto *source = g_native_worldgen_layer.foreground.graphics();
    if (graphics->dimx != source->dimx || graphics->dimy != source->dimy ||
            graphics->screen_pixel_x != source->screen_pixel_x ||
            graphics->screen_pixel_y != source->screen_pixel_y ||
            graphics->tile_pixel_x != source->tile_pixel_x ||
            graphics->tile_pixel_y != source->tile_pixel_y ||
            graphics->screen == source->screen || graphics->screen == source->screen_top ||
            native_current_viewscreen() != g_native_worldgen_owner) return;
    // Dimensions alone never claim another page or a private component.
    // Keep main_view's exact-grid check after proving this native binding.
    g_native_worldgen_background_grid = graphics->screen;
}

static void native_worldgen_clear_shared_ui(graphicst &gps) {
    const size_t count = static_cast<size_t>(gps.dimx) * gps.dimy;
    // The native viewscreen's clear now belongs to its private grid. Retire
    // the previous page's main UI output too: swap_arrays reuses two buffers
    // and update_all would otherwise draw their old glyphs over the map.
    // These are known UI output blocks, not discovered cells. Map-port and
    // viewport objects, private layers and later native widgets stay live.
    if (gps.screen) std::memset(gps.screen, 0, count * 8);
    if (gps.screen_top) std::memset(gps.screen_top, 0, count * 8);
    const auto clear = [count](auto *output) {
        if (output) std::memset(output, 0, count * sizeof(*output));
    };
    clear(gps.screentexpos); clear(gps.screentexpos_lower);
    clear(gps.screentexpos_anchored); clear(gps.screentexpos_anchored_x);
    clear(gps.screentexpos_anchored_y); clear(gps.screentexpos_flag);
    clear(gps.screentexpos_top); clear(gps.screentexpos_top_lower);
    clear(gps.screentexpos_top_anchored); clear(gps.screentexpos_top_anchored_x);
    clear(gps.screentexpos_top_anchored_y); clear(gps.screentexpos_top_flag);
}

static void native_worldgen_history_clear(NativeHistoryRichBox *box) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeWorldgenHistoryClearFn>(
        g_native_worldgen_history_clear_hook.original);
    if (!original) return;
    if (box && box == g_native_history_box) {
        // The native clear deletes words before retaining the vector capacity.
        // Invalidate their typed ownership before any address can be reused.
        // A later producer render is too late: it could erase new events that
        // the simulation already appended after this clear.
        remember_native_history_region(reinterpret_cast<uintptr_t>(box), {});
        g_native_history_capture_generation.fetch_add(1, std::memory_order_acq_rel);
        invalidate_worldgen_event_cache();
    }
    callback.call_native([&] { original(box); });
}

static void native_worldgen_draw(void *screen, uint32_t tick) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeWorldgenDrawFn>(
        g_native_worldgen_draw_hook.original);
    if (!original) return;
    uintptr_t table = 0;
    if (screen) std::memcpy(&table, screen, sizeof(table));
    if (table != g_native_worldgen_vtable) {
        callback.call_native([&] { original(screen, tick); });
        return;
    }
    TranslationStateScope translation;
    auto &layer = g_native_worldgen_layer;
    auto *gps = native_graphics();
    bool isolate = gps && g_native_help_layer.native_renderer &&
        g_native_help_layer.renderer && !native_private_ui_write_active(gps) &&
        !g_native_info_write_graphics && !g_native_stocks_write_graphics &&
        !g_native_display_write_graphics &&
        !g_native_reports_write_graphics && !g_native_pause_write_graphics &&
        !native_notification_write_active(gps) && !g_native_tooltip_output &&
        gps->screen && gps->screen_top && gps->dimx > 0 && gps->dimx <= 1000 &&
        gps->dimy > 0 && gps->dimy <= 1000;
    if (isolate) {
        try {
            layer.foreground.prepare(*gps);
            layer.foreground.clear();
            // Keep the complete UI canvas for native controls outside the
            // progress panel and for classic map glyphs. Its cleared cells
            // do not claim the graphical map's pixels beneath this layer.
            layer.frames = {{0, 0, gps->dimx, gps->dimy}};
            g_native_worldgen_text.clear();
        } catch (...) { isolate = false; }
    }
    if (!isolate) {
        callback.call_native([&] { original(screen, tick); });
        return;
    }
    int32_t left = 0, right = gps->dimx - 1;
    // The original renderer uses this same side-effect-free native getter
    // at df8b54. Its viewport comes from native grid/UI settings, not cells.
    g_native_worldgen_viewport(native_ui_settings_source(), &left, &right);
    left = std::clamp(left, 0, gps->dimx - 1);
    right = std::clamp(right, left, gps->dimx - 1);
    g_native_worldgen_background_graphics = gps;
    g_native_worldgen_background_grid = gps->screen;
    g_native_worldgen_owner = reinterpret_cast<uintptr_t>(screen);
    bool ordinary_progress = true;
    for (const auto *field : {"raw_load", "doing_mods", "doing_simple_params", "doing_params"}) {
        uint8_t active = 0;
        if (!native_history_copy(native_history_object_member(g_native_worldgen_owner,
                "viewscreen_new_regionst", field, sizeof(active)), active) || active != 0) {
            ordinary_progress = false;
            break;
        }
    }
    // df96e0..df9967 draws the ordinary 80x25 panel. Raw loading, mods and
    // parameter branches instead draw the native getter's full-height frame.
    // Missing typed metadata keeps that wider frame rather than clipping UI.
    g_native_worldgen_panel = ordinary_progress ?
        SDL_Rect{left, 0, std::min(80, gps->dimx - left), std::min(25, gps->dimy)} :
        SDL_Rect{left, 0, right - left + 1, gps->dimy};
    uint8_t editing = 0;
    g_native_worldgen_parameter_name_editing = native_history_copy(
        native_history_object_member(g_native_worldgen_owner,
            "viewscreen_new_regionst", "entering_param_name", sizeof(editing)),
        editing) && editing != 0;
    layer.native_renderer = g_native_help_layer.native_renderer;
    layer.renderer = g_native_help_layer.renderer;
    const int16_t previous_redraw = gps->force_full_display_count;
    int16_t requested_redraw = previous_redraw;
    bool requested_title = gps->display_title;
    int32_t requested_background = gps->display_background;
    {
        NativeUiGridBinding output(gps, *layer.foreground.graphics(), layer.native_renderer);
        NativeInfoCapturedTextScope captions(g_native_worldgen_text);
        struct WriteScope {
            const graphicst *previous = g_native_worldgen_write_graphics;
            explicit WriteScope(const graphicst *graphics) {
                g_native_worldgen_write_graphics = graphics;
            }
            ~WriteScope() { g_native_worldgen_write_graphics = previous; }
        } writing(gps);
        begin_native_history_draw_pass();
        callback.call_native([&] { original(screen, tick); });
        layer.foreground.graphics()->top_in_use = gps->top_in_use;
        requested_redraw = gps->force_full_display_count;
        requested_title = gps->display_title;
        requested_background = gps->display_background;
    }
    native_worldgen_clear_shared_ui(*gps);
    // These select the host scene rendered by update_all (8e1cbf/8e1d69),
    // not the private UI grid. Do not restore an old menu background/title
    // or lose a map redraw request when restoring the output arrays.
    gps->force_full_display_count = std::max(previous_redraw, requested_redraw);
    gps->display_title = requested_title;
    gps->display_background = requested_background;
    layer.ready = true;
    ++g_native_worldgen_published_revision;
    NativeUiReadScope::invalidate_reads();
}

static bool install_native_worldgen_layer_hook() {
    if (g_native_worldgen_draw_hook.installed &&
            g_native_worldgen_history_clear_hook.installed) return true;
    constexpr const char *label = "Native world generation complete draw entry";
    const auto base = native_history_profile_base();
#ifdef _WIN32
    const auto table = native_reference_address(base, 0x1721480);
    auto *draw = reinterpret_cast<unsigned char *>(
        native_reference_address(base, 0xdf8a80));
    const auto viewport = native_reference_address(base, 0x41f640);
    auto *clear = reinterpret_cast<unsigned char *>(
        native_reference_address(base, 0xe37d0));
    // Hook the native renderer's body, preserving DFHack's render interpose
    // chain. Its live vtable slot can legitimately name a wrapper, as in the
    // Legends renderer, and must not be required to still name this body.
    // MOV [RSP+0x10],RBX is position independent on both pinned PEs.
    std::vector<unsigned char> prefix{0x48,0x89,0x5c,0x24,0x10};
    std::vector<unsigned char> viewport_prefix{0x48,0x8b,0xca,0x49,0x8b,0xd0};
    // PUSH RSI; SUB RSP,0x20 are complete position-independent instructions.
    // The same richbox ABI is already bound by native_history_profile.
    std::vector<unsigned char> clear_prefix{0x40,0x56,0x48,0x83,0xec,0x20};
    if (!native_reference_bytes(0xdf8a80, prefix) ||
            !native_reference_bytes(0x41f640, viewport_prefix) ||
            !native_reference_bytes(0xe37d0, clear_prefix)) return false;
#else
    if (!native_elf_5317_address(0x1e0bcd0)) return true;
    const auto table = native_reference_address(base, 0x2085088);
    auto *draw = reinterpret_cast<unsigned char *>(native_elf_5317_address(0x1e0bcd0));
    const auto viewport = native_elf_5317_address(0x16674a0);
    auto *clear = reinterpret_cast<unsigned char *>(native_elf_5317_address(0x8292b0));
    std::vector<unsigned char> prefix{0xf3,0x0f,0x1e,0xfa,0x41,0x57};
    std::vector<unsigned char> clear_prefix{0xf3,0x0f,0x1e,0xfa,0x41,0x55};
#endif
    if (!table || !draw || !viewport || !clear || !g_native_history_box ||
            !g_native_worldgen_draw_hook.prepare(draw, prefix,
                reinterpret_cast<const void *>(&native_worldgen_draw), {}, label) ||
            !g_native_worldgen_history_clear_hook.prepare(clear, clear_prefix,
                reinterpret_cast<const void *>(&native_worldgen_history_clear), {},
                "Native world generation chronicle clear entry"))
        return false;
    g_native_worldgen_vtable = table;
    g_native_worldgen_viewport = reinterpret_cast<NativeWorldgenViewportFn>(viewport);
#ifdef _WIN32
    g_native_worldgen_edit_returns = {native_reference_address(base, 0xe0317a),
        native_reference_address(base, 0xe037d9), native_reference_address(base, 0xe03fdb)};
#else
    g_native_worldgen_edit_returns = {native_elf_5317_address(0x1e10466),
        native_elf_5317_address(0x1e119d8), native_elf_5317_address(0x1e16595)};
#endif
    if (std::any_of(g_native_worldgen_edit_returns.begin(),
            g_native_worldgen_edit_returns.end(), [](uintptr_t address) { return !address; }))
        return false;
    if (!g_native_worldgen_history_clear_hook.install(
            "Native world generation chronicle clear entry")) return false;
    if (g_native_worldgen_draw_hook.install(label)) return true;
    g_native_worldgen_history_clear_hook.uninstall(
        "Native world generation chronicle clear restore");
    return false;
}

static void uninstall_native_worldgen_layer_hook() {
    g_native_worldgen_draw_hook.uninstall("Native world generation draw entry restore");
    g_native_worldgen_history_clear_hook.uninstall(
        "Native world generation chronicle clear restore");
    if (!g_native_worldgen_draw_hook.active() &&
            !g_native_worldgen_history_clear_hook.active()) {
        g_native_worldgen_vtable = 0;
        g_native_worldgen_viewport = nullptr;
        g_native_worldgen_edit_returns = {};
        g_native_worldgen_target.release();
        native_worldgen_begin_frame();
        g_native_worldgen_layer = {};
        g_native_worldgen_text = {};
        g_native_worldgen_published_revision = g_native_worldgen_consumed_revision = 0;
    }
}
static bool native_worldgen_layer_hook_active() {
    return g_native_worldgen_draw_hook.active() ||
        g_native_worldgen_history_clear_hook.active();
}

static void native_worldgen_present_layer(SDL_Renderer *renderer,
        void (*draw_worldgen)(SDL_Renderer *)) {
    native_ui_present_layer(g_native_worldgen_layer, g_native_worldgen_target,
        renderer, draw_worldgen);
}
