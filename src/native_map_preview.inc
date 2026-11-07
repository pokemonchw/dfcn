#include "map_preview_api.h"

// A value-only mod receives the already generated region data. The core owns
// the game widgets, producer-thread snapshot and independent SDL resources.
static void *g_map_preview_module = nullptr;
static const DfcnMapPreviewApi *g_map_preview_api = nullptr;
static fs::path g_map_preview_module_path;
static uint64_t g_map_preview_subscription_poll = 0;
static bool g_map_preview_subscription_polled = false;
static std::string g_map_preview_load_error;
static NativeUiLayerStorage g_map_preview_layer;
static NativeUiLayerTarget g_map_preview_target;
static NativeInfoCapturedText g_map_preview_text;
struct NativeMapPreviewState {
    uintptr_t screen = 0;
    bool has_frame = false, has_image = false, hits_ready = false;
    bool retained_frame = false;
    bool texture_dirty = true;
    DfcnMapPreviewFrame frame{};
    DfcnMapPreviewImage image{};
    SDL_Rect panel{}, map_box{}, pixel_panel{};
    SDL_Texture *texture = nullptr;
    SDL_Renderer *renderer = nullptr;
    std::vector<NativeSettingsMenuCaption> captions;
    double input_scale_x = 1, input_scale_y = 1;
    double input_offset_x = 0, input_offset_y = 0;
    uint32_t consumed_buttons = 0;
};
static NativeMapPreviewState g_map_preview;

#include "native_map_preview_source.inc"

static bool native_map_preview_available() { return g_map_preview_api != nullptr; }
static bool native_map_preview_enabled() {
    return g_map_preview_api && g_map_preview_api->enabled();
}
static void native_map_preview_reset() {
    TranslationStateScope translation;
    g_map_preview_target.release();
    g_map_preview_layer = {};
    g_map_preview_text.clear();
    if (g_map_preview.texture) SDL_DestroyTexture(g_map_preview.texture);
    g_map_preview.texture = nullptr;
    g_map_preview.renderer = nullptr;
    g_map_preview.texture_dirty = true;
    g_map_preview.hits_ready = false;
}
static void native_map_preview_release() {
    TranslationStateScope translation;
    native_map_preview_reset();
    g_map_preview = {};
    g_map_preview_api = nullptr;
    if (g_map_preview_module) SDL_UnloadObject(g_map_preview_module);
    g_map_preview_module = nullptr;
    g_map_preview_module_path.clear();
    g_map_preview_subscription_polled = false;
    g_map_preview_load_error.clear();
}
static void native_map_preview_refresh(bool force) {
    TranslationStateScope translation;
#ifdef _WIN32
    const auto now = SDL_GetTicks64();
    if (!force && g_map_preview_subscription_polled &&
            now - g_map_preview_subscription_poll < 1000) return;
    g_map_preview_subscription_poll = now;
    g_map_preview_subscription_polled = true;
    const auto warn = [](std::string message) {
        if (g_map_preview_load_error != message) log_line("WARN", message);
        g_map_preview_load_error = std::move(message);
    };
    std::vector<fs::path> candidates;
    try {
        // Only Steam's current subscribed/install directories grant access.
        // Never fall back to the core directory or a manually copied mod.
        candidates = extensions::discover_map_preview_modules();
    } catch (const std::exception &error) {
        warn(std::string("Map preview mod discovery: ") + error.what());
    } catch (...) {
        warn("Map preview mod discovery failed");
    }
    if (g_map_preview_api && std::find(candidates.begin(), candidates.end(),
            g_map_preview_module_path) != candidates.end()) return;
    const bool was_available = native_map_preview_available();
    g_map_preview_api = nullptr;
    if (g_map_preview_module) SDL_UnloadObject(g_map_preview_module);
    g_map_preview_module = nullptr;
    g_map_preview_module_path.clear();
    // Invalidate producer output immediately on unsubscribe. Retain the SDL
    // allocations for the renderer's normal lifetime and pair pending clicks.
    g_map_preview_layer.ready = false;
    g_map_preview.hits_ready = false;
    g_map_preview.has_frame = false;
    g_map_preview.has_image = false;
    g_map_preview.texture_dirty = true;
    const auto config = runtime::utf8(runtime::path("map-preview.ini"));
    for (const auto &candidate : candidates) {
        const auto filename = runtime::utf8(candidate);
        void *module = SDL_LoadObject(filename.c_str());
        if (!module) {
            warn("Map preview mod " + filename + ": " + SDL_GetError());
            continue;
        }
        const auto get_api = reinterpret_cast<DfcnGetMapPreviewApi>(
            SDL_LoadFunction(module, "dfcn_map_preview_api"));
        const auto *api = get_api ? get_api(DFCN_MAP_PREVIEW_ABI) : nullptr;
        if (!api || api->abi != DFCN_MAP_PREVIEW_ABI || api->size != sizeof(*api) ||
                !api->initialize || !api->enabled || !api->toggle || !api->render ||
                !api->initialize(config.c_str())) {
            SDL_UnloadObject(module);
            warn("Map preview mod " + filename +
                ": incompatible API or unreadable configuration");
            continue;
        }
        g_map_preview_module = module;
        g_map_preview_api = api;
        g_map_preview_module_path = candidate;
        g_map_preview_load_error.clear();
        break;
    }
    if (was_available != native_map_preview_available()) {
        // Row indices change when the optional switch appears/disappears.
        g_native_settings_menu.hits_ready = false;
        g_native_settings_menu.hovered = -1;
        g_native_settings_menu_layer.ready = false;
    }
#endif
}
static void native_map_preview_load() { native_map_preview_refresh(true); }
static void native_map_preview_toggle() {
    TranslationStateScope translation;
    if (!g_map_preview_api) return;
    if (!g_map_preview_api->toggle()) {
        log_line("ERROR", "Map preview mod: cannot save map-preview.ini; choice unchanged");
        return;
    }
    g_map_preview_layer.ready = false;
    g_map_preview.has_frame = false;
    g_map_preview.hits_ready = false;
}

static void native_map_preview_prepare() try {
    TranslationStateScope translation;
    auto &layer = g_map_preview_layer;
    auto &state = g_map_preview;
    if (!native_map_preview_enabled() || g_native_settings_menu.open) {
        layer.ready = false;
        state.hits_ready = false;
        return;
    }
    std::unique_lock<std::recursive_mutex> writer(g_native_dfhack_layer_mutex, std::try_to_lock);
    if (!writer.owns_lock()) return;
    auto *owner = native_graphics_owner_view();
    const auto screen = native_current_viewscreen();
    if (screen != state.screen) {
        state.screen = screen;
        state.has_frame = false;
        state.has_image = false;
        state.hits_ready = false;
    }
    const auto &bindings = native_settings_menu_bindings();
    const auto ui = native_ui_settings();
    if (!native_map_preview_selection_page(screen)) {
        layer.ready = false;
        state.hits_ready = false;
        state.has_frame = false;
        state.has_image = false;
        return;
    }
    if (!owner || !owner->screen || !owner->screen_top ||
            owner->dimx < 44 || owner->dimx > 1000 ||
            owner->dimy < 30 || owner->dimy > 1000 ||
            !bindings.ready() || !ui || !g_native_help_layer.native_renderer ||
            !g_native_help_layer.renderer || native_dfhack_layer_write_active(owner)) {
        layer.ready = false;
        state.hits_ready = false;
        return;
    }
    const SDL_Point mouse{owner->mouse_x, owner->mouse_y};
    const bool over_preview = state.has_frame && layer.ready &&
        SDL_PointInRect(&mouse, &state.panel);
    state.retained_frame = over_preview;
    if (!over_preview) {
        DfcnMapPreviewFrame frame{};
        const bool sampled = native_map_preview_snapshot(frame);
        state.retained_frame = !sampled && state.has_frame;
        // A covered pointer or temporarily unavailable region is a sampling
        // state, not a reason to remove an enabled window from this page.
        if (sampled && (!state.has_frame || std::memcmp(&frame, &state.frame, sizeof(frame)))) {
            state.frame = frame;
            state.has_frame = true;
            state.has_image = g_map_preview_api->render(&state.frame, &state.image) &&
                state.image.width > 0 && state.image.width <= 128 &&
                state.image.height > 0 && state.image.height <= 128;
            state.texture_dirty = true;
        }
    }
    if (!state.has_frame) state.has_image = false;
    layer.ready = false;
    layer.foreground.prepare(*owner);
    auto *grid = layer.foreground.graphics();
    native_ui_detach_map_output(*grid);
    layer.foreground.clear();
    grid->clipx[0] = grid->clipy[0] = 0;
    grid->clipx[1] = grid->dimx - 1; grid->clipy[1] = grid->dimy - 1;
    grid->screenf = 7; grid->screenb = 0; grid->screenbright = false;
    grid->use_old_16_colors = true;
    const int width = std::min(40, owner->dimx / 2);
    const int height = std::min(25, owner->dimy - 13);
    state.panel = {1, owner->dimy - height - 4, width, height};
    state.map_box = {state.panel.x + 2, state.panel.y + 6,
        state.panel.w - 4, state.panel.h - 11};
    layer.frames = {state.panel};
    layer.native_renderer = g_native_help_layer.native_renderer;
    layer.renderer = g_native_help_layer.renderer;
    state.captions.clear();
    g_map_preview_text.clear();
    NativeInfoCapturedTextScope captions(g_map_preview_text);
    struct WriterView {
        graphicst *previous_view = g_native_graphics_read_view;
        const graphicst *previous_help = g_native_help_write_graphics;
        explicit WriterView(graphicst *value) {
            g_native_graphics_read_view = value;
            g_native_help_write_graphics = value;
        }
        ~WriterView() {
            g_native_graphics_read_view = previous_view;
            g_native_help_write_graphics = previous_help;
        }
    } view(owner);
    NativeUiGridBinding output(native_graphics_owner(), *grid);
    NativeSettingsMenuWidget skin(bindings), text(bindings);
    const std::array<int32_t, 9> border{
        ui->texpos_border_nw, ui->texpos_border_n, ui->texpos_border_ne,
        ui->texpos_border_w, ui->texpos_border_interior, ui->texpos_border_e,
        ui->texpos_border_sw, ui->texpos_border_s, ui->texpos_border_se};
    skin.nineslice(state.panel, border.data());
    const auto caption = [&](int row, std::string source, std::string target) {
        const SDL_Rect box{state.panel.x + 1, state.panel.y + row, state.panel.w - 2, 1};
        // Keep the fallback English entirely inside this native component.
        if (source.size() > static_cast<size_t>(box.w)) source.resize(box.w);
        text.text(box.x + (box.w - static_cast<int>(source.size())) / 2, box.y, source);
        state.captions.push_back({box, std::move(source), std::move(target)});
    };
    caption(1, "Map preview", "地图预览（地貌概览）");
    const auto &f = state.frame;
    const auto position = std::to_string(f.world_x) + "," + std::to_string(f.world_y) +
        " / " + std::to_string(f.local_x) + "," + std::to_string(f.local_y);
    if (state.has_frame)
        caption(2, position + "  " + std::to_string(f.width) + "x" + std::to_string(f.height),
            "区域/选址 " + position + "  " + std::to_string(f.width) + "×" + std::to_string(f.height));
    else
        caption(2, "Waiting for embark terrain", "等待选址地形数据");
    caption(3, "1 cell = 48 x 48 fort tiles", "每个选址格对应 48×48 地块");
    if (state.has_image) {
        const auto range = std::to_string(state.image.min_elevation) + "~" +
            std::to_string(state.image.max_elevation);
        caption(4, "Elevation " + range, "真实高程 " + range + "  高差 " +
            std::to_string(state.image.max_elevation - state.image.min_elevation));
        if (state.retained_frame)
            caption(5, "Last available selection", "保留上次有效选址预览");
        else if (state.image.valid_cells != f.width * f.height)
            caption(5, "Missing cells: no cached data", "灰格：此处区域数据尚未生成");
    } else {
        caption(4, "No cached region data", state.has_frame
            ? "此处区域数据尚未生成" : "暂未取得有效选址范围");
    }
    caption(height - 4, "Blue: water; green: vegetation", "蓝：水系  绿：林草  黄：沙漠");
    caption(height - 3, "Brightness: elevation", "灰褐：山地  白：冰川  明暗：高程");
    caption(height - 2, "Cell overview; rivers schematic", "选址格概览；河道示意，非逐格地图");
    native_graphics_read_member(native_graphics_owner(), offsetof(graphicst, top_in_use), grid->top_in_use);
    layer.ready = true;
} catch (...) {
    g_map_preview_layer.ready = false;
    g_map_preview.hits_ready = false;
}

// Block clicks on the read-only panel so inspecting it cannot select an
// embark underneath. Mouse-up remains paired even if the panel disappears.
static bool native_map_preview_event(const SDL_Event &event) {
    TranslationStateScope translation;
    auto &state = g_map_preview;
    if (event.type == SDL_WINDOWEVENT) {
        if (event.window.event == SDL_WINDOWEVENT_FOCUS_LOST)
            state.consumed_buttons = 0;
        state.hits_ready = false;
        return false;
    }
    if (event.type == SDL_MOUSEBUTTONUP && event.button.button > 0 && event.button.button <= 32) {
        const uint32_t bit = uint32_t{1} << (event.button.button - 1);
        if (state.consumed_buttons & bit) {
            state.consumed_buttons &= ~bit;
            return true;
        }
    }
    if (!state.hits_ready || !g_map_preview_layer.ready || !native_map_preview_enabled() ||
            g_native_settings_menu.open) return false;
    int x = 0, y = 0;
    if (event.type == SDL_MOUSEMOTION) { x = event.motion.x; y = event.motion.y; }
    else if (event.type == SDL_MOUSEBUTTONDOWN) { x = event.button.x; y = event.button.y; }
    else return false;
    const SDL_Point point{
        static_cast<int>(std::floor(x * state.input_scale_x + state.input_offset_x)),
        static_cast<int>(std::floor(y * state.input_scale_y + state.input_offset_y))};
    if (!SDL_PointInRect(&point, &state.pixel_panel)) return false;
    if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button > 0 && event.button.button <= 32)
        state.consumed_buttons |= uint32_t{1} << (event.button.button - 1);
    return event.type == SDL_MOUSEBUTTONDOWN;
}

void Overlay::render_map_preview(SDL_Renderer *renderer) {
    TranslationStateScope translation;
    auto &state = g_map_preview;
    auto &layer = g_map_preview_layer;
    if (!renderer || !layer.ready || layer.renderer != renderer ||
            !native_map_preview_enabled() || g_native_settings_menu.open) return;
    std::unique_lock<std::recursive_mutex> writer(g_native_dfhack_layer_mutex, std::try_to_lock);
    if (!writer.owns_lock()) return;
    auto *grid = layer.foreground.graphics();
    const auto *current = native_graphics();
    if (!current || current->dimx != grid->dimx || current->dimy != grid->dimy ||
            current->screen_pixel_x != grid->screen_pixel_x ||
            current->screen_pixel_y != grid->screen_pixel_y ||
            grid->tile_pixel_x <= 0 || grid->tile_pixel_y <= 0) {
        state.hits_ready = false;
        return;
    }
    const int origin_x = (grid->screen_pixel_x - grid->dimx * grid->tile_pixel_x) / 2;
    const int origin_y = (grid->screen_pixel_y - grid->dimy * grid->tile_pixel_y) / 2;
    const auto pixels = [&](SDL_Rect box) {
        return SDL_Rect{origin_x + box.x * grid->tile_pixel_x,
            origin_y + box.y * grid->tile_pixel_y,
            box.w * grid->tile_pixel_x, box.h * grid->tile_pixel_y};
    };
    state.pixel_panel = pixels(state.panel);
    NativeUiLayerSdlState sdl(renderer);
    int window_x0 = 0, window_y0 = 0, window_x1 = 4096, window_y1 = 4096;
    const bool logical_events = sdl.logical_width > 0 && sdl.logical_height > 0;
    const int event_width = logical_events ? sdl.logical_width : 4096;
    const int event_height = logical_events ? sdl.logical_height : 4096;
    if (logical_events) {
        SDL_RenderLogicalToWindow(renderer, 0, 0, &window_x0, &window_y0);
        SDL_RenderLogicalToWindow(renderer, static_cast<float>(event_width),
            static_cast<float>(event_height), &window_x1, &window_y1);
    }
    if (!sdl.bind_composite(grid->screen_pixel_x, grid->screen_pixel_y)) return;
    float input_x0 = 0, input_y0 = 0, input_x1 = 0, input_y1 = 0;
    SDL_RenderWindowToLogical(renderer, window_x0, window_y0, &input_x0, &input_y0);
    SDL_RenderWindowToLogical(renderer, window_x1, window_y1, &input_x1, &input_y1);
    state.input_scale_x = (input_x1 - input_x0) / event_width;
    state.input_scale_y = (input_y1 - input_y0) / event_height;
    state.input_offset_x = input_x0; state.input_offset_y = input_y0;
    state.hits_ready = true;
    const int width = grid->screen_pixel_x, height = grid->screen_pixel_y;
    if (!g_map_preview_target.prepare(renderer, width, height) ||
            !sdl.bind(g_map_preview_target.texture, width, height)) return;
    struct DrawingScope {
        bool previous = g_drawing_overlay;
        DrawingScope() { g_drawing_overlay = true; }
        ~DrawingScope() { g_drawing_overlay = previous; }
    } drawing;
    SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_NONE);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    if (SDL_RenderClear(renderer) != 0) return;
    struct ViewScope {
        Overlay &overlay;
        graphicst *previous_graphics;
        GraphicalClearReadback *previous_readback;
        ViewScope(Overlay &value, graphicst *graphics) : overlay(value),
            previous_graphics(value.gps_), previous_readback(value.graphical_clear_readback_) {
            value.gps_ = graphics; value.graphical_clear_readback_ = nullptr;
        }
        ~ViewScope() {
            overlay.gps_ = previous_graphics;
            overlay.graphical_clear_readback_ = previous_readback;
        }
    } view(*this, grid);
    NativeUiReadScope component(grid, nullptr);
    CellReadCacheScope cells(*this);
    std::vector<Match> labels;
    if (face_) for (const auto &caption : state.captions) {
        const auto box = caption.box;
        const auto &source = caption.source;
        const int source_x = box.x + (box.w - static_cast<int>(source.size())) / 2;
        Match match{source_x, box.y, static_cast<int>(source.size()), -2, caption.target, source};
        match.layout_x = box.x; match.layout_y = box.y; match.layout_length = box.w;
        match.layout_box_pixel_x = origin_x + box.x * grid->tile_pixel_x;
        match.layout_box_pixel_width = box.w * grid->tile_pixel_x;
        match.layout_clip_right = box.x + box.w;
        match.layout_native_clip = SDL_Rect{match.layout_box_pixel_x,
            origin_y + box.y * grid->tile_pixel_y, match.layout_box_pixel_width, grid->tile_pixel_y};
        match.layout_fixed_baseline = true;
        match.layout_prepared = true;
        match.layout_foreground_rgb = 0xffffff;
        match.graphical_auto_foreground = false;
        labels.push_back(std::move(match));
    }
    native_ui_paint_grid(layer, renderer, labels);
    for (const auto &label : labels) draw_match(renderer, label);
    auto box = pixels(state.map_box);
    SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_NONE);
    SDL_SetRenderDrawColor(renderer, 48, 48, 48, 255);
    SDL_RenderFillRect(renderer, &box);
    if (state.has_image) {
        if (state.renderer != renderer) {
            if (state.texture) SDL_DestroyTexture(state.texture);
            state.texture = nullptr;
            state.renderer = renderer;
            state.texture_dirty = true;
        }
        if (state.texture_dirty) {
            if (state.texture) SDL_DestroyTexture(state.texture);
            state.texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA32,
                SDL_TEXTUREACCESS_STATIC, state.image.width, state.image.height);
            if (state.texture) {
                SDL_SetTextureBlendMode(state.texture, SDL_BLENDMODE_BLEND);
                SDL_SetTextureScaleMode(state.texture, SDL_ScaleModeNearest);
                state.texture_dirty = SDL_UpdateTexture(state.texture, nullptr,
                    state.image.pixels, state.image.width * sizeof(DfcnMapPreviewPixel)) != 0;
            }
        }
        if (state.texture && !state.texture_dirty) {
            const double scale = std::min(double(box.w) / state.image.width,
                double(box.h) / state.image.height);
            const int map_w = std::max(1, static_cast<int>(state.image.width * scale));
            const int map_h = std::max(1, static_cast<int>(state.image.height * scale));
            const SDL_Rect destination{box.x + (box.w - map_w) / 2,
                box.y + (box.h - map_h) / 2, map_w, map_h};
            SDL_RenderCopy(renderer, state.texture, nullptr, &destination);
        }
    }
    if (!sdl.bind_composite(width, height)) return;
    const SDL_Rect destination{0, 0, width, height};
    SDL_RenderCopy(renderer, g_map_preview_target.texture, nullptr, &destination);
}
