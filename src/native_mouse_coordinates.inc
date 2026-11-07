#include "mouse_coordinates_api.h"

// The DLL owns coordinate calculation, formatting and its saved preference.
// This adapter supplies the native snapshot and a dedicated UI grid/SDL target.
static void *g_mouse_coordinates_module = nullptr;
static const DfcnMouseCoordinatesApi *g_mouse_coordinates_api = nullptr;
static NativeUiLayerStorage g_mouse_coordinates_layer;
static NativeUiLayerTarget g_mouse_coordinates_target;
struct NativeMouseCoordinatesState {
    uintptr_t fortress = 0;
    DfcnMouseCoordinatesLabel label{"X: -- Y: --", 11, 0, 3, 0};
    int anchor_left = -1, anchor_width = 0;
};
static NativeMouseCoordinatesState g_mouse_coordinates_state;

static bool native_mouse_coordinates_available() { return g_mouse_coordinates_api != nullptr; }
static bool native_mouse_coordinates_enabled() {
    return g_mouse_coordinates_api && g_mouse_coordinates_api->enabled();
}
static void native_mouse_coordinates_reset() {
    TranslationStateScope translation;
    // Renderer recreation keeps this fortress's last label and toolbar anchor.
    g_mouse_coordinates_target.release();
    g_mouse_coordinates_layer = {};
}
static void native_mouse_coordinates_release() {
    TranslationStateScope translation;
    native_mouse_coordinates_reset();
    g_mouse_coordinates_state = {};
    g_mouse_coordinates_api = nullptr;
    if (g_mouse_coordinates_module) SDL_UnloadObject(g_mouse_coordinates_module);
    g_mouse_coordinates_module = nullptr;
}
static void native_mouse_coordinates_load() {
    TranslationStateScope translation;
#ifdef _WIN32
    if (g_mouse_coordinates_module) return;
    std::vector<fs::path> candidates;
    try {
        candidates = extensions::discover().mouse_coordinates_modules;
    } catch (const std::exception &error) {
        log_line("WARN", std::string("Mouse coordinates mod discovery: ") + error.what());
    }
    candidates.push_back(runtime::path("dfcn_mouse_coordinates.dll"));
    // Keep the saved choice with the active core, independent of which package
    // supplied the module, so Workshop updates preserve the existing setting.
    const auto config = runtime::utf8(runtime::path("mouse-coordinates.ini"));
    std::set<fs::path> attempted;
    for (const auto &candidate : candidates) {
        const auto canonical = extensions::detail::canonical_path(candidate);
        if (canonical.empty() || !attempted.insert(canonical).second) continue;
        const auto path = runtime::utf8(canonical);
        void *module = SDL_LoadObject(path.c_str());
        if (!module) {
            log_line("WARN", "Mouse coordinates mod " + path + ": " + SDL_GetError());
            continue;
        }
        const auto get_api = reinterpret_cast<DfcnGetMouseCoordinatesApi>(
            SDL_LoadFunction(module, "dfcn_mouse_coordinates_api"));
        const auto *api = get_api ? get_api(DFCN_MOUSE_COORDINATES_ABI) : nullptr;
        if (!api || api->abi != DFCN_MOUSE_COORDINATES_ABI || api->size != sizeof(*api) ||
                !api->initialize || !api->enabled || !api->toggle || !api->describe ||
                !api->initialize(config.c_str())) {
            SDL_UnloadObject(module);
            log_line("WARN", "Mouse coordinates mod " + path +
                ": incompatible API or unreadable configuration");
            continue;
        }
        g_mouse_coordinates_module = module;
        g_mouse_coordinates_api = api;
        return;
    }
#endif
}
static void native_mouse_coordinates_toggle() {
    TranslationStateScope translation;
    if (!g_mouse_coordinates_api) return;
    if (!g_mouse_coordinates_api->toggle()) {
        log_line("ERROR", "Mouse coordinates mod: cannot save mouse-coordinates.ini; choice unchanged");
        return;
    }
    g_mouse_coordinates_layer.ready = false;
}

#ifdef _WIN32
static uintptr_t native_mouse_coordinates_fortress() {
    const auto base = native_history_profile_base();
    if (!base) return 0;
    int32_t mode = -1, game_type = -1;
    if (!native_history_copy(native_reference_address(base,
                native_history_layout::gamemode_rva), mode) || mode != 0 ||
            !native_history_copy(native_reference_address(base,
                native_history_layout::gametype_rva), game_type) ||
            game_type == 4 || game_type == 5) return 0;
    // Native dialogs and the world map are children of the loaded fortress.
    // Visibility follows that session, not the identity of its frontmost page.
    auto screen = native_current_viewscreen();
    std::array<uintptr_t, 64> visited{};
    for (size_t depth = 0; screen && depth < visited.size(); ++depth) {
        if (std::find(visited.begin(), visited.begin() + depth, screen) != visited.begin() + depth)
            return 0;
        visited[depth] = screen;
        if (native_history_object_is(screen, "viewscreen_dwarfmodest")) return screen;
        uintptr_t parent = 0;
        if (!native_object_read_member(reinterpret_cast<const void *>(screen),
                {0x10, "viewscreen", "parent"}, parent)) return 0;
        screen = parent;
    }
    return 0;
}

static bool native_mouse_coordinates_occupied(const graphicst &gps, int x, int y) {
    if (x < 0 || y < 0 || x >= gps.dimx || y >= gps.dimy) return true;
    const size_t at = static_cast<size_t>(x) * gps.dimy + y;
    const auto occupied = [at](const unsigned char *screen, const auto *texture,
            const auto *lower, const auto *anchored, const uint32_t *flags) {
        if ((texture && texture[at]) || (lower && lower[at]) ||
                (anchored && anchored[at]) || (flags && flags[at])) return true;
        if (!screen) return false;
        const auto *cell = screen + at * 8;
        return cell[0] != 0 && (cell[0] != ' ' || cell[4] || cell[5] || cell[6]);
    };
    if (occupied(gps.screen, gps.screentexpos, gps.screentexpos_lower,
            gps.screentexpos_anchored, gps.screentexpos_flag) ||
            (gps.top_in_use && occupied(gps.screen_top, gps.screentexpos_top,
                gps.screentexpos_top_lower, gps.screentexpos_top_anchored,
                gps.screentexpos_top_flag))) return true;
    const SDL_Point point{x, y};
    // These UI components no longer occupy the native main grid.
    for (const auto *layer : {&g_native_topbar_layer, &g_native_help_layer,
            &g_native_map_hover_layer, &g_native_tooltip_layer,
            &g_native_notification_layer, &g_native_designation_layer,
            &g_native_info_layer, &g_native_character_layer, &g_native_stocks_layer,
            &g_native_display_layer,
            &g_native_squads_layer, &g_native_reports_layer, &g_native_petition_layer,
            &g_native_petitions_layer, &g_native_announcement_log_layer,
            &g_native_pause_layer, &g_native_resolution_layer})
        if (layer->ready)
            for (const auto &frame : layer->frames)
                if (SDL_PointInRect(&point, &frame)) return true;
    return false;
}

static void native_mouse_coordinates_update_label(const graphicst *gps, uintptr_t fortress) {
    // A covered map, an out-of-map pointer or a child page retains the last
    // valid label. None of these sampling conditions disables the HUD itself.
    const auto classic = native_ui_classic();
    if (!classic || !g_native_map_layer.ready || g_native_settings_menu.open ||
            native_current_viewscreen() != fortress ||
            gps->precise_mouse_x < 0 || gps->precise_mouse_y < 0 ||
            native_mouse_coordinates_occupied(*gps, gps->mouse_x, gps->mouse_y)) return;
    uintptr_t child = 0;
    if (!native_history_copy(fortress + 8, child) || child) return;
    const auto base = native_history_profile_base();
    DfcnMouseCoordinatesFrame frame{};
    if (!native_history_copy(native_reference_address(base, 0x2374728), frame.camera_x) ||
            !native_history_copy(native_reference_address(base, 0x237472c), frame.camera_y) ||
            !native_history_copy(native_history_global(0x24e80dc), frame.map_width) ||
            !native_history_copy(native_history_global(0x24e80e0), frame.map_height)) return;
    if (*classic) {
        // Native 3e50b9..3e50f1 uses the mouse's character-cell offsets and
        // the UI grid dimensions in ASCII mode. The game already accounts
        // for the font's separate width/height, scaling and window offsets.
        frame.mouse_x = gps->mouse_x;
        frame.mouse_y = gps->mouse_y;
        frame.tile_width = frame.tile_height = 1;
        frame.viewport_width = gps->dimx;
        frame.viewport_height = gps->dimy;
    } else {
        // Native 3e507e..3e50a5 divides precise pixels by the graphical map
        // tile size; 3e50f3..3e5120 bounds them against main_viewport.
        if (!gps->main_viewport || gps->viewport_zoom_factor < 4 ||
                gps->viewport_zoom_factor > 4096) return;
        frame.mouse_x = gps->precise_mouse_x;
        frame.mouse_y = gps->precise_mouse_y;
        frame.tile_width = frame.tile_height = gps->viewport_zoom_factor / 4;
        const auto viewport = reinterpret_cast<uintptr_t>(gps->main_viewport);
        if (!native_history_copy(viewport + 4, frame.viewport_width) ||
                !native_history_copy(viewport + 8, frame.viewport_height)) return;
    }
    DfcnMouseCoordinatesLabel label{};
    if (!g_mouse_coordinates_api->describe(&frame, &label) || !label.length ||
            label.length >= sizeof(label.text)) return;
    g_mouse_coordinates_state.label = label;
}

static void native_mouse_coordinates_update_anchor(const graphicst *gps) {
    // Learn the ordinary toolbar's location while it is visible. Menus and
    // active tools keep this anchor instead of making visibility depend on
    // a free footer span in each new page.
    if (!native_fortress_map_hud_page() || g_native_settings_menu.open ||
            g_native_pause_layer.ready || g_native_resolution_layer.ready ||
            !g_native_designation_layer.ready) return;
    const auto base = native_history_profile_base();
    int32_t designation = -1, bottom_mode = -1;
    if (!native_history_copy(native_reference_address(base, 0x18a9384), designation) ||
            designation != -1 ||
            !native_history_copy(native_reference_address(base, 0x18a938c), bottom_mode) ||
            bottom_mode != -1) return;
    // The first toolbar icons are captured into the designation layer, so
    // start at their submitted footer spans even when the main grid is empty
    // at screen center, then follow the remaining native icons to the right edge.
    const auto toolbar_column = [&](int x) {
        for (int y = gps->dimy - 3; y < gps->dimy; ++y)
            if (native_mouse_coordinates_occupied(*gps, x, y)) return true;
        return false;
    };
    int toolbar_right = 0;
    for (const auto &span : g_native_designation_layer.frames)
        if (span.w > 0 && span.x >= 0 && span.x < gps->dimx &&
                span.y >= gps->dimy - 3 && span.y < gps->dimy)
            toolbar_right = std::max(toolbar_right, std::min(gps->dimx, span.x + span.w));
    if (!toolbar_right) return;
    while (toolbar_right < gps->dimx && toolbar_column(toolbar_right)) ++toolbar_right;
    if (toolbar_right + 1 < gps->dimx) {
        g_mouse_coordinates_state.anchor_left = toolbar_right + 1;
        g_mouse_coordinates_state.anchor_width = gps->dimx;
    }
}
#endif

static void native_mouse_coordinates_prepare() try {
    TranslationStateScope translation;
    auto &layer = g_mouse_coordinates_layer;
#ifdef _WIN32
    const auto fortress = native_mouse_coordinates_fortress();
    auto &state = g_mouse_coordinates_state;
    if (!fortress || state.fortress != fortress) {
        state = {};
        state.fortress = fortress;
        layer.ready = false;
    }
    if (!fortress || !native_mouse_coordinates_enabled()) {
        layer.ready = false;
        return;
    }
    std::unique_lock<std::recursive_mutex> writer(g_native_dfhack_layer_mutex, std::try_to_lock);
    if (!writer.owns_lock()) return;
    const auto *gps = native_graphics_owner_view();
    if (!gps || !gps->screen || gps->dimx < 1 || gps->dimx > 1000 ||
            gps->dimy < 1 || gps->dimy > 1000 ||
            !g_native_help_layer.native_renderer || !g_native_help_layer.renderer ||
            native_dfhack_layer_write_active(gps)) return;
    native_mouse_coordinates_update_label(gps, fortress);
    native_mouse_coordinates_update_anchor(gps);
    const auto &label = state.label;
    const int width = std::min(gps->dimx, static_cast<int>(label.length));
    // Keep the last toolbar anchor through page changes. Before the first
    // toolbar frame, use the lower-right corner; resizing clamps it on-screen.
    const int preferred_left = state.anchor_left >= 0 && state.anchor_width > 0
        ? state.anchor_left * gps->dimx / state.anchor_width : gps->dimx - width - 1;
    const int left = std::clamp(preferred_left, 0, gps->dimx - width);
    const int row = gps->dimy - 1;

    layer.foreground.prepare(*gps);
    auto *grid = layer.foreground.graphics();
    native_ui_detach_map_output(*grid);
    const SDL_Rect bounds{left, row, width, 1};
    layer.foreground.clear(bounds);
    grid->top_in_use = false;
    grid->use_old_16_colors = true;
    grid->clipx[0] = grid->clipy[0] = 0;
    grid->clipx[1] = grid->dimx - 1; grid->clipy[1] = grid->dimy - 1;
    for (int i = 0; i < width; ++i) {
        auto *cell = grid->screen + (static_cast<size_t>(left + i) * grid->dimy + row) * 8;
        cell[0] = static_cast<unsigned char>(label.text[i]);
        const int foreground = (label.foreground & 7) + (label.bright ? 8 : 0);
        for (int channel = 0; channel < 3; ++channel) {
            cell[1 + channel] = grid->uccolor[foreground][channel];
            cell[4 + channel] = grid->uccolor[label.background & 15][channel];
        }
    }
    layer.frames = {bounds};
    layer.native_renderer = g_native_help_layer.native_renderer;
    layer.renderer = g_native_help_layer.renderer;
    layer.ready = true;
#endif
} catch (...) {
    g_mouse_coordinates_layer.ready = false;
}

static void native_mouse_coordinates_present(SDL_Renderer *renderer) {
    TranslationStateScope translation;
    auto &layer = g_mouse_coordinates_layer;
    if (!renderer || !layer.ready || layer.renderer != renderer ||
            !native_mouse_coordinates_enabled()) return;
    std::unique_lock<std::recursive_mutex> writer(g_native_dfhack_layer_mutex, std::try_to_lock);
    if (!writer.owns_lock()) return;
    const auto *grid = layer.foreground.graphics();
    const auto *current = native_graphics();
    if (!current || current->dimx != grid->dimx || current->dimy != grid->dimy ||
            current->screen_pixel_x != grid->screen_pixel_x ||
            current->screen_pixel_y != grid->screen_pixel_y) return;
    NativeUiLayerSdlState state(renderer);
    auto &target = g_mouse_coordinates_target;
    const int width = grid->screen_pixel_x, height = grid->screen_pixel_y;
    // Never fall back to painting on the map/FPS surface if target allocation
    // fails: this mod's text and backdrop always belong to its own texture.
    if (!target.prepare(renderer, width, height) || !state.bind(target.texture, width, height)) return;
    struct DrawingScope {
        bool previous = g_drawing_overlay;
        DrawingScope() { g_drawing_overlay = true; }
        ~DrawingScope() { g_drawing_overlay = previous; }
    } drawing;
    SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_NONE);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    if (SDL_RenderClear(renderer) != 0) return;
    native_ui_paint_grid(layer, renderer, {});
    if (!state.bind_composite(width, height)) return;
    const SDL_Rect destination{0, 0, width, height};
    SDL_RenderCopy(renderer, target.texture, nullptr, &destination);
}
