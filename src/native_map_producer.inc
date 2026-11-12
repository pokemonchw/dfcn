// The complete native map producer precedes fortress HUD/menu writers. Its
// graphical branch writes the existing viewport arrays; its classic branch
// writes byte glyphs into gps. Only those byte-grid writes need redirection.
static void native_map_begin_frame() {
    ++g_native_map_frame_serial;
    g_native_map_layer.ready = false;
    g_native_map_layer.frames.clear();
    g_native_map_layer.native_renderer = nullptr;
    g_native_map_layer.renderer = nullptr;
    g_native_map_background_grid = nullptr;
    g_native_map_mixed_grid = nullptr;
    g_native_map_write_graphics = nullptr;
    g_native_map_display_source = {};
    NativeUiReadScope::invalidate_reads();
}

static NativeEntryHook g_native_map_producer_hook;
using NativeMapProducerFn = void (*)(void *, int32_t, void *);
static graphicst *native_dfhack_render_read_graphics();

static void capture_native_map_display_source(const graphicst &graphics) noexcept {
    auto &source = g_native_map_display_source;
    source.serial = g_native_map_frame_serial;
    source.dimx = graphics.dimx; source.dimy = graphics.dimy;
    source.screen_pixel_x = graphics.screen_pixel_x;
    source.screen_pixel_y = graphics.screen_pixel_y;
    source.tile_pixel_x = graphics.tile_pixel_x;
    source.tile_pixel_y = graphics.tile_pixel_y;
    source.viewport_zoom_factor = graphics.viewport_zoom_factor;
    source.main_viewport = graphics.main_viewport;
    source.main_map_port = graphics.main_map_port;
    for (size_t index = 0; index < source.lower_viewport.size(); ++index)
        source.lower_viewport[index] = graphics.lower_viewport[index];
}

// Called only at the raw native display boundary, before any private map or
// UI target is selected. Buffer rotation does not replace its map objects.
static void bind_native_map_display_frame(const graphicst *graphics) noexcept {
    if (!graphics || graphics != native_dfhack_render_read_graphics() ||
            graphics != g_native_graphics_read_view || !graphics->screen ||
            !g_native_map_layer.ready || !g_native_map_background_grid ||
            g_native_map_mixed_grid || g_native_map_write_graphics ||
            native_private_ui_write_active(graphics) ||
            NativeDfhackForegroundScope::active || g_native_info_foreground ||
            g_native_character_foreground) return;
    // Private producers can borrow the same map-object pointers. Their byte
    // arrays are never evidence that the raw native display rotated buffers.
    const NativeUiLayerStorage *private_layers[]{
        &g_native_map_layer, &g_native_help_layer, &g_native_resolution_layer,
        &g_native_info_layer, &g_native_character_layer, &g_native_stocks_layer,
        &g_native_display_layer,
        &g_native_tooltip_layer, &g_native_notification_layer,
        &g_native_petition_layer,
        &g_native_announcement_log_layer, &g_native_reports_layer,
        &g_native_squads_layer, &g_native_pause_layer, &g_native_worldgen_layer,
        &g_native_topbar_layer, &g_native_embark_civilization_layer, &g_native_petitions_layer,
        &g_native_map_hover_layer
    };
    for (const auto *layer : private_layers)
        for (const auto &plane : layer->foreground.planes) {
            const auto *grid = plane.screen.data();
            if (grid && (graphics->screen == grid || graphics->screen_top == grid)) return;
        }
    const auto &source = g_native_map_display_source;
    if (!source.serial || source.serial != g_native_map_frame_serial ||
            source.dimx != graphics->dimx || source.dimy != graphics->dimy ||
            source.screen_pixel_x != graphics->screen_pixel_x ||
            source.screen_pixel_y != graphics->screen_pixel_y ||
            source.tile_pixel_x != graphics->tile_pixel_x ||
            source.tile_pixel_y != graphics->tile_pixel_y ||
            source.viewport_zoom_factor != graphics->viewport_zoom_factor ||
            source.main_viewport != graphics->main_viewport ||
            source.main_map_port != graphics->main_map_port) return;
    bool has_map = source.main_viewport || source.main_map_port;
    for (size_t index = 0; index < source.lower_viewport.size(); ++index) {
        if (source.lower_viewport[index] != graphics->lower_viewport[index]) return;
        has_map = has_map || source.lower_viewport[index];
    }
    // Classic frames without map objects retain the existing exact-buffer
    // path; dimensions alone cannot establish their native owner.
    if (has_map) g_native_map_background_grid = graphics->screen;
}


static void native_map_clear_empty_ui_cells(graphicst &gps) {
    const size_t count = static_cast<size_t>(gps.dimx) * gps.dimy;
    const auto clear = [&](unsigned char *screen, const NativeDfhackLayerTexture *texture,
            const NativeDfhackLayerTexture *lower, const NativeDfhackLayerTexture *anchored,
            const uint32_t *flags) {
        if (!screen) return;
        for (size_t at = 0; at < count; ++at) {
            uint64_t cell = 0;
            std::memcpy(&cell, screen + at * 8, sizeof(cell));
            // clear_screen writes a space onto an otherwise zero cell.
            // Its black glyph background would cover the composed map.
            // Preserve every colored cell and any existing UI artwork.
            if (cell == static_cast<uint64_t>(' ') &&
                    (!texture || !texture[at]) && (!lower || !lower[at]) &&
                    (!anchored || !anchored[at]) && (!flags || !flags[at]))
                screen[at * 8] = 0;
        }
    };
    clear(gps.screen, gps.screentexpos, gps.screentexpos_lower,
        gps.screentexpos_anchored, gps.screentexpos_flag);
    if (gps.top_in_use)
        clear(gps.screen_top, gps.screentexpos_top, gps.screentexpos_top_lower,
            gps.screentexpos_top_anchored, gps.screentexpos_top_flag);
}

static void native_map_producer(void *map, int32_t tick, void *context) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeMapProducerFn>(
        g_native_map_producer_hook.original);
    if (!original) return;
    TranslationStateScope translation;
    auto *gps = native_graphics();
    auto &layer = g_native_map_layer;
    bool isolate = gps && gps->screen &&
        !g_native_map_write_graphics && !native_dfhack_layer_write_active(gps) &&
        gps->dimx > 0 && gps->dimx <= 1000 && gps->dimy > 0 && gps->dimy <= 1000;
    if (isolate) {
        try {
            layer.foreground.prepare(*gps);
            layer.foreground.clear();
            layer.frames = {{0, 0, gps->dimx, gps->dimy}};
        } catch (...) { isolate = false; }
    }
    if (!isolate) {
        g_native_map_mixed_grid = gps ? gps->screen : nullptr;
        // A later direct producer can run without another begin_frame.
        // Retire the preceding private source proof before native drawing
        // advances its map arrays/history. A nested private call belongs to
        // the outer producer, which publishes its complete output on return.
        if (!g_native_map_write_graphics) {
            layer.ready = false;
            layer.native_renderer = nullptr;
            layer.renderer = nullptr;
            g_native_map_background_grid = nullptr;
            g_native_map_display_source = {};
        }
        NativeUiReadScope::invalidate_reads();
        callback.call_native([&] { original(map, tick, context); });
        return;
    }
    const auto *background = gps->screen;
    native_map_clear_empty_ui_cells(*gps);
    // Neither branch owns prose. Keep any native glyph/caption callbacks
    // produced for map symbols out of the independent HUD text registries.
    NativeInfoCapturedText map_text;
    {
        // prepare() borrows the source viewport/map-port objects unchanged.
        // Their native output remains independent of the HUD character grid.
        NativeUiGridBinding output(gps, *layer.foreground.graphics());
        NativeInfoCapturedTextScope captions(map_text);
        struct WriteScope {
            const graphicst *previous = g_native_map_write_graphics;
            explicit WriteScope(const graphicst *graphics) { g_native_map_write_graphics = graphics; }
            ~WriteScope() { g_native_map_write_graphics = previous; }
        } writing(gps);
        callback.call_native([&] { original(map, tick, context); });
        layer.foreground.graphics()->top_in_use = gps->top_in_use;
    }
    g_native_map_background_grid = background;
    g_native_map_mixed_grid = nullptr;
    g_native_map_classic = native_ui_classic().value_or(false);
    capture_native_map_display_source(*gps);
    layer.native_renderer = g_native_help_layer.native_renderer;
    layer.renderer = g_native_help_layer.renderer;
    layer.ready = true;
    NativeUiReadScope::invalidate_reads();
}

static bool install_native_map_producer_hook() {
    if (g_native_map_producer_hook.installed) return true;
    constexpr const char *label = "Native map producer private output";
#ifdef _WIN32
    const auto base = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    if (!base || !native_pe_supported()) return false;
    // Reference RVA e9afe0 (classic e95f50) calls both the terrain pass and
    // its map-symbol tail: e9b0c0/e85600 in graphics, e8fa60/e8d2a0 in ASCII.
    // Fortress's caller at 3d6aea resumes HUD generation immediately after it.
    auto *entry = reinterpret_cast<unsigned char *>(native_pe_address(base, 0xe9afe0));
    std::vector<unsigned char> prefix{0x40,0x53,0x48,0x83,0xec,0x20};
    if (!entry || !native_pe_bytes(0xe9afe0, prefix) ||
            !g_native_map_producer_hook.prepare(entry, prefix,
            reinterpret_cast<const void *>(&native_map_producer), {}, label) ||
            !g_native_map_producer_hook.install(label)) return false;
#else
    if (!native_elf_5317_address(0x1eda650)) return true;
    auto *entry = reinterpret_cast<unsigned char *>(native_elf_5317_address(0x1eda650));
    // CET followed by the complete main_viewport null guard. Preserve its
    // RIP-relative operand while the trampoline retains the native early exit.
    const std::vector<unsigned char> prefix{0xf3,0x0f,0x1e,0xfa,0x48,0x83,0x3d,0x1c,0x6c,0x5e,0,0};
    if (!entry || !g_native_map_producer_hook.prepare(entry, prefix,
            reinterpret_cast<const void *>(&native_map_producer),
            {{7,12,native_elf_5317_address(0x24c1278)}}, label) ||
            !g_native_map_producer_hook.install(label)) return false;
#endif
    log_line("INFO", "Redirected native map glyph generation to its independent output layer");
    return true;
}

static void uninstall_native_map_producer_hook() {
    g_native_map_producer_hook.uninstall("Native map producer restore");
    if (!g_native_map_producer_hook.active()) native_map_begin_frame();
}
static bool native_map_producer_hook_active() { return g_native_map_producer_hook.active(); }
#ifndef _WIN32
static void native_map_restore_missing_outputs() {
    if (g_native_process_exiting.load(std::memory_order_acquire)) return;
    auto *gps = native_graphics_owner();
    if (!gps || native_private_ui_write_active(gps) ||
            gps->screen_pixel_x <= 0 || gps->screen_pixel_y <= 0 ||
            gps->viewport_zoom_factor < 4) return;
    const bool missing_port = !gps->main_map_port && gps->map_port.empty();
    const bool missing_viewports = !gps->main_viewport && gps->viewport.empty() &&
        std::all_of(std::begin(gps->lower_viewport), std::end(gps->lower_viewport),
            [](const auto *viewport) { return viewport == nullptr; });
    if ((!missing_port && !missing_viewports) ||
            (!native_history_worldgen_page() && !native_gameplay_map_screen())) return;

    // beginroutine creates these objects once for the process. An earlier
    // UI binding could replace both their aliases and owning vectors with
    // the detached UI header's zeros. Preserving pointers on later frames
    // cannot recover that state, and reshape_viewports only resizes objects
    // which already exist. Recreate the same native allocation set instead.
    using ShapePort = void (*)(graphic_map_portst *, int32_t, int32_t);
    using ShapeViewport = void (*)(graphic_viewportst *, int32_t, int32_t, int32_t);
    static const auto shape_port = reinterpret_cast<ShapePort>(dlsym(RTLD_DEFAULT,
        "_ZN18graphic_map_portst38shape_map_port_according_by_pixel_sizeEii"));
    static const auto shape_viewport = reinterpret_cast<ShapeViewport>(dlsym(RTLD_DEFAULT,
        "_ZN18graphic_viewportst38shape_viewport_according_by_pixel_sizeEiii"));
    if ((missing_port && !shape_port) || (missing_viewports && !shape_viewport)) return;
    try {
        std::unique_ptr<graphic_map_portst> port;
        std::array<std::unique_ptr<graphic_viewportst>, LOWER_VIEWPORT_MAX + 1> viewports;
        if (missing_port) {
            port = std::make_unique<graphic_map_portst>();
            shape_port(port.get(), gps->screen_pixel_x, gps->screen_pixel_y);
        }
        if (missing_viewports) {
            for (auto &viewport : viewports) {
                viewport = std::make_unique<graphic_viewportst>();
                shape_viewport(viewport.get(), gps->screen_pixel_x,
                    gps->screen_pixel_y, gps->viewport_zoom_factor);
            }
        }
        // Finish allocations before publishing any object. The game's own
        // vectors own their lifetime, buffer swaps and subsequent resizes.
        if (port) gps->map_port.reserve(1);
        if (missing_viewports) gps->viewport.reserve(viewports.size());
        if (port) {
            gps->map_port.push_back(port.get());
            gps->main_map_port = port.release();
        }
        if (missing_viewports) {
            for (auto &viewport : viewports) gps->viewport.push_back(viewport.get());
            gps->main_viewport = viewports[0].release();
            for (size_t i = 0; i < LOWER_VIEWPORT_MAX; ++i)
                gps->lower_viewport[i] = viewports[i + 1].release();
        }
        // Native allocation leaves every port inactive. The game normally
        // selects these flags on viewscreen transitions, not on every draw;
        // reapply the current page's own policy without changing pages.
        if (auto *screen = reinterpret_cast<viewscreenst *>(native_current_viewscreen()))
            screen->set_port_flags();
        gps->force_full_display_count = std::max<int16_t>(gps->force_full_display_count, 2);
        log_line("INFO", "Restored missing native map output objects before frame production");
    } catch (const std::exception &error) {
        log_line("ERROR", std::string("Cannot restore native map output objects: ") + error.what());
    }
}

#endif
