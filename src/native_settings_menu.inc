// Shift+F1 owns a small modal component, independently of translated-page
// matching. The game constructs and renders its own nineslice/text widgets;
// the existing native tile painter and Chinese font finish their private grid.
struct NativeSettingsMenuBindings {
    using Construct = void *(*)(void *);
    using Destroy = void (*)(void *);
    using Render = void (*)(void *, uint32_t);
    Construct construct = nullptr;
    Destroy destroy = nullptr;
    uintptr_t nineslice_table = 0, text_table = 0;
    Render nineslice_render = nullptr, text_render = nullptr;
    size_t widget_size = 0x150, nineslice_size = 0x160, text_size = 0x180;
    size_t rect_offset = 0x10, widget_flag_offset = 0xa0;
    size_t skin_offset = 0x150, skin_flag_offset = 0x158;
    size_t text_offset = 0x150, foreground_offset = 0x170, background_offset = 0x172;
    size_t bright_offset = 0x174, justify_offset = 0x175, space_offset = 0x178, text_flag_offset = 0x17c;
    bool layout_ready = true;

    bool ready() const {
        return layout_ready && construct && destroy && nineslice_table && text_table &&
            nineslice_render && text_render;
    }
};

static const NativeSettingsMenuBindings &native_settings_menu_bindings() {
    static const NativeSettingsMenuBindings bindings = [] {
        NativeSettingsMenuBindings value;
#ifdef _WIN32
        const auto base = native_history_profile_base();
        // 53.16 widget's default constructor and non-deleting base destructor.
        // Native allocation owns the base strings, variant and hotkey set.
        value.construct = reinterpret_cast<NativeSettingsMenuBindings::Construct>(
            native_reference_address(base, 0x140ff20));
        value.destroy = reinterpret_cast<NativeSettingsMenuBindings::Destroy>(
            native_reference_address(base, 0x1412c70));
        value.nineslice_table = native_reference_address(base, 0x15eef60);
        value.text_table = native_reference_address(base, 0x1618aa0);
        value.widget_size = native_history_abi::type_size(native_history_abi::semantic_id("widget"), 0x150);
        value.nineslice_size = native_history_abi::type_size(native_history_abi::semantic_id("widget_nineslice"), 0x160);
        value.text_size = native_history_abi::type_size(native_history_abi::semantic_id("widget_text"), 0x180);
        value.layout_ready = value.widget_size && value.widget_size <= value.nineslice_size &&
            value.widget_size <= value.text_size && value.nineslice_size <= (1u << 20) && value.text_size <= (1u << 20);
        for (const auto name : {"widget", "widget_nineslice", "widget_text"}) {
            const auto *type = native_history_abi::type(native_history_abi::semantic_id(name));
            if (type && type->alignment > alignof(std::max_align_t)) value.layout_ready = false;
        }
        const auto resolve = [&](native_history_abi::FieldOffset member, size_t width, size_t extent) {
            if (!member.contains(0, width, width)) { value.layout_ready = false; return size_t{}; }
            const auto offset = member.runtime();
            if (offset > extent || width > extent - offset) value.layout_ready = false;
            return offset;
        };
        value.rect_offset = resolve({0x10, "widget", "rect"}, 16, value.widget_size);
        value.widget_flag_offset = resolve({0xa0, "widget", "flag"}, 1, value.widget_size);
        value.skin_offset = resolve({0x150, "widget_nineslice", "selected_texpos"}, sizeof(void *), value.nineslice_size);
        value.skin_flag_offset = resolve({0x158, "widget_nineslice", "flag"}, 1, value.nineslice_size);
        value.text_offset = resolve({0x150, "widget_text", "str"}, sizeof(NativeString), value.text_size);
        value.foreground_offset = resolve({0x170, "widget_text", "fg"}, 2, value.text_size);
        value.background_offset = resolve({0x172, "widget_text", "bg"}, 2, value.text_size);
        value.bright_offset = resolve({0x174, "widget_text", "bright"}, 1, value.text_size);
        value.justify_offset = resolve({0x175, "widget_text", "just"}, 1, value.text_size);
        value.space_offset = resolve({0x178, "widget_text", "space"}, 4, value.text_size);
        value.text_flag_offset = resolve({0x17c, "widget_text", "flag"}, 4, value.text_size);
#else
        value.construct = reinterpret_cast<NativeSettingsMenuBindings::Construct>(
            dlsym(RTLD_DEFAULT, "_ZN7widgets6widgetC2Ev"));
        value.destroy = reinterpret_cast<NativeSettingsMenuBindings::Destroy>(
            dlsym(RTLD_DEFAULT, "_ZN7widgets6widgetD2Ev"));
        const auto slices = reinterpret_cast<uintptr_t>(
            dlsym(RTLD_DEFAULT, "_ZTVN7widgets9ninesliceE"));
        const auto text = reinterpret_cast<uintptr_t>(
            dlsym(RTLD_DEFAULT, "_ZTVN7widgets4textE"));
        value.nineslice_table = slices ? slices + 2 * sizeof(void *) : 0;
        value.text_table = text ? text + 2 * sizeof(void *) : 0;
#endif
#ifdef _WIN32
        value.nineslice_render = reinterpret_cast<NativeSettingsMenuBindings::Render>(native_object_virtual_method(
            reinterpret_cast<void *const *>(value.nineslice_table), "abstract_interfacest", "render", 3, "void(uint32_t)", 1));
        value.text_render = reinterpret_cast<NativeSettingsMenuBindings::Render>(native_object_virtual_method(
            reinterpret_cast<void *const *>(value.text_table), "abstract_interfacest", "render", 3, "void(uint32_t)", 1));
#else
        if (value.nineslice_table)
            native_history_copy(value.nineslice_table + 3 * sizeof(void *), value.nineslice_render);
        if (value.text_table)
            native_history_copy(value.text_table + 3 * sizeof(void *), value.text_render);
#endif
        return value;
    }();
    return bindings;
}

// Only the game-constructed base is destroyed here. The borrowed text field
// and nineslice texture pointer never transfer allocation ownership to it.
class NativeSettingsMenuWidget {
    std::vector<std::max_align_t> storage_;
    const NativeSettingsMenuBindings &bindings_;
    uintptr_t base_table_ = 0;
    unsigned char *data() noexcept { return reinterpret_cast<unsigned char *>(storage_.data()); }
    size_t size() const noexcept { return storage_.size() * sizeof(std::max_align_t); }
    void clear_extension() noexcept {
        std::memset(data() + bindings_.widget_size, 0, size() - bindings_.widget_size);
    }
public:
    explicit NativeSettingsMenuWidget(const NativeSettingsMenuBindings &bindings)
        : storage_(((std::max)(bindings.nineslice_size, bindings.text_size) + sizeof(std::max_align_t) - 1) /
              sizeof(std::max_align_t)), bindings_(bindings) {
        if (!bindings_.ready()) throw std::runtime_error("Native settings widget layout unavailable");
        std::memset(data(), 0, size());
        bindings_.construct(data());
        std::memcpy(&base_table_, data(), sizeof(base_table_));
        // These drawing-only components have no activation or tooltip owner.
        // They receive modal input through settings_menu_event instead.
        data()[bindings_.widget_flag_offset] = 0;
    }
    ~NativeSettingsMenuWidget() {
        clear_extension();
        std::memcpy(data(), &base_table_, sizeof(base_table_));
        bindings_.destroy(data());
    }
    template<typename Value> void set(size_t offset, const Value &value) {
        if (offset > size() || sizeof(value) > size() - offset)
            throw std::runtime_error("Native settings widget field exceeds object extent");
        std::memcpy(data() + offset, &value, sizeof(value));
    }
    void rect(const SDL_Rect &box) {
        const std::array<int32_t, 4> bounds{
            box.x, box.y, box.x + box.w - 1, box.y + box.h - 1};
        set(bindings_.rect_offset, bounds);
    }
    void nineslice(const SDL_Rect &box, const int32_t *skin) {
        set(0, bindings_.nineslice_table);
        rect(box);
        set(bindings_.skin_offset, skin);
        const uint8_t replace_character = 1;
        set(bindings_.skin_flag_offset, replace_character);
        bindings_.nineslice_render(data(), 0);
    }
    void text(int x, int y, std::string_view source) {
        set(0, bindings_.text_table);
        rect({x, y, static_cast<int>(source.size()), 1});
#ifdef _WIN32
        auto borrowed = native_empty_string();
        if (source.size() <= 15) {
            std::memcpy(borrowed.storage.small, source.data(), source.size());
        } else {
            borrowed.storage.heap = const_cast<char *>(source.data());
            borrowed.capacity = source.size();
        }
        borrowed.size = source.size();
#else
        NativeString borrowed(source);
#endif
        set(bindings_.text_offset, borrowed);
        const int16_t foreground = 7, background = 0;
        const uint8_t bright = 1, left = 0;
        const uint32_t zero = 0;
        set(bindings_.foreground_offset, foreground); set(bindings_.background_offset, background);
        set(bindings_.bright_offset, bright); set(bindings_.justify_offset, left);
        set(bindings_.space_offset, zero); set(bindings_.text_flag_offset, zero);
        bindings_.text_render(data(), 0);
        // The temporary owns any host string storage; the native base does not.
        clear_extension();
    }
};

static constexpr size_t kNativeSettingsMenuOptionCount = 9;
static constexpr int kNativeSettingsMenuHeight =
    4 + 3 * static_cast<int>(kNativeSettingsMenuOptionCount);

struct NativeSettingsMenuCaption {
    SDL_Rect box{};
    std::string source, target;
};

struct NativeSettingsMenuState {
    bool open = false, f1_consumed = false, hits_ready = false;
    bool riding = false;
    bool export_pending = false, export_result = false, export_success = false;
    std::string export_message, export_filename;
    std::vector<NativeSettingsMenuCaption> captions;
    uint32_t consumed_buttons = 0;
    std::array<bool, SDL_NUM_SCANCODES> consumed_keys{};
    int hovered = -1;
    SDL_Rect panel{};
    std::array<SDL_Rect, kNativeSettingsMenuOptionCount> rows{}, pixel_rows{};
    double input_scale_x = 1, input_scale_y = 1;
    double input_offset_x = 0, input_offset_y = 0;
    size_t row_count() const {
        if (riding) return std::min<size_t>(native_riding_menu_snapshot().count,kNativeSettingsMenuOptionCount);
        return export_result ? 1 : 6 + (native_mouse_coordinates_available() ? 1 : 0) +
            (native_map_preview_available() ? 1 : 0) + (native_riding_available() ? 1 : 0);
    }
    int row_action(size_t row) const {
        if (export_result || row >= row_count()) return -1;
        if (row < 6) return static_cast<int>(row);
        size_t next = 6;
        if (native_mouse_coordinates_available() && row == next++) return 6;
        if (native_map_preview_available() && row == next++) return 7;
        return 8;
    }
};
static NativeSettingsMenuState g_native_settings_menu;
static NativeUiLayerStorage g_native_settings_menu_layer;
static NativeInfoCapturedText g_native_settings_menu_text;
static constexpr std::array<std::string_view, kNativeSettingsMenuOptionCount + 1> kNativeSettingsMenuSources{
    "Chinese translation", "Toggle Chinese / English", "Toggle simplified / traditional",
    "Toggle language transliteration", "Toggle DFHack (installed only)", "Reload Chinese translation",
    "Export whole map (all known levels)", "Toggle mouse coordinates", "Toggle map preview", "Fortress riding"};
static constexpr std::array<std::string_view, kNativeSettingsMenuOptionCount + 1> kNativeSettingsMenuLabels{
    "汉化设置", "切换中英文", "切换繁简体", "切换四族语言音译",
    "开关 DFHack（需已安装 DFHack）", "重载汉化", "导出整张地图（全部已知层）",
    "开关鼠标坐标显示", "开关地图预览", "要塞骑乘：管理坐骑"};

static void native_settings_menu_close() {
    auto &menu = g_native_settings_menu;
    menu.open = false;
    menu.riding = false;
    menu.hovered = -1;
    menu.hits_ready = false;
    menu.export_pending = false;
    menu.export_result = false;
    g_native_settings_menu_layer.ready = false;
}

static void native_settings_menu_release() {
    TranslationStateScope translation;
    native_settings_menu_close();
    g_native_settings_menu_layer = {};
    g_native_settings_menu_text.clear();
}

// Called on the native producer thread after render_things. Present never
// redirects the real gps while DFHack or the native producer can be writing.
static void native_settings_menu_prepare() try {
    TranslationStateScope translation;
    auto &menu = g_native_settings_menu;
    if (!menu.open) return;
    // The SDL input callback only queues this action. The native producer
    // owns the world here, before UI detachment.
    if (menu.export_pending) {
        menu.export_pending = false;
        menu.export_filename.clear();
        menu.export_success = native_blueprint_export(menu.export_message, menu.export_filename);
        menu.export_result = true;
        menu.hovered = -1;
        menu.hits_ready = false;
    }
    // Windows DFHack writers can hold M without T. Never wait for M while T
    // is held: retain the previous complete component if another writer owns it.
    std::unique_lock<std::recursive_mutex> writer(g_native_dfhack_layer_mutex, std::try_to_lock);
    if (!writer.owns_lock()) return;
    auto *owner = native_graphics_owner_view();
    const auto &bindings = native_settings_menu_bindings();
    const auto ui = native_ui_settings();
    // Share adjacent button borders on short grids as optional mods add rows.
    const int row_stride = owner && owner->dimy < kNativeSettingsMenuHeight ? 2 : 3;
    const int height = menu.export_result ? 13
        : 7 + row_stride * (static_cast<int>(menu.row_count()) - 1);
    if (!owner || !owner->screen || !owner->screen_top ||
            owner->dimx < 36 || owner->dimx > 1000 ||
            owner->dimy < height || owner->dimy > 1000 ||
            !bindings.ready() || !ui || !g_native_help_layer.native_renderer ||
            !g_native_help_layer.renderer || native_dfhack_layer_write_active(owner)) return;

    auto &layer = g_native_settings_menu_layer;
    layer.ready = false;
    layer.foreground.prepare(*owner);
    native_ui_detach_map_output(*layer.foreground.graphics());
    layer.foreground.clear();
    auto *grid = layer.foreground.graphics();
    grid->clipx[0] = grid->clipy[0] = 0;
    grid->clipx[1] = grid->dimx - 1; grid->clipy[1] = grid->dimy - 1;
    grid->screenf = 7; grid->screenb = 0; grid->screenbright = false;
    grid->use_old_16_colors = true;
    const int width = std::min(menu.riding ? 76 : 44, owner->dimx - 2);
    menu.panel = {(owner->dimx - width) / 2, (owner->dimy - height) / 2, width, height};
    for (size_t i = 0; i < menu.row_count(); ++i)
        menu.rows[i] = {menu.panel.x + 2,
            menu.panel.y + (menu.export_result ? 9 : 3 + static_cast<int>(i) * row_stride),
            menu.panel.w - 4, 3};
    layer.frames = {menu.panel};
    layer.native_renderer = g_native_help_layer.native_renderer;
    layer.renderer = g_native_help_layer.renderer;
    g_native_settings_menu_text.clear();
    NativeInfoCapturedTextScope captions(g_native_settings_menu_text);
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
    skin.nineslice(menu.panel, border.data());
    menu.captions.clear();
    const auto caption = [&](SDL_Rect box, std::string_view source, std::string_view target) {
        text.text(box.x + (box.w - static_cast<int>(source.size())) / 2, box.y, source);
        menu.captions.push_back({box, std::string(source), std::string(target)});
    };
    caption({menu.panel.x + 1, menu.panel.y + 1, menu.panel.w - 2, 1},
        menu.riding ? native_riding_menu_snapshot().english :
            menu.export_result ? "Terrain blueprint export" : kNativeSettingsMenuSources[0],
        menu.riding ? native_riding_menu_snapshot().chinese :
            menu.export_result ? "地形蓝图导出" : kNativeSettingsMenuLabels[0]);
    if (menu.export_result) {
        caption({menu.panel.x + 2, menu.panel.y + 3, menu.panel.w - 4, 1},
            menu.export_success ? "Blueprint exported" : "Blueprint export failed", menu.export_message);
        if (menu.export_success) {
            caption({menu.panel.x + 2, menu.panel.y + 5, menu.panel.w - 4, 1},
                "dfcn/blueprints/", "导出目录：dfcn/blueprints/");
            caption({menu.panel.x + 2, menu.panel.y + 7, menu.panel.w - 4, 1},
                menu.export_filename, menu.export_filename);
        } else {
            caption({menu.panel.x + 2, menu.panel.y + 6, menu.panel.w - 4, 1},
                "No blueprint was saved", "没有保存蓝图文件");
        }
    }
    for (size_t i = 0; i < menu.row_count(); ++i) {
        const auto &row = menu.rows[i];
        const auto &button = menu.hovered == static_cast<int>(i)
            ? ui->texpos_selected_intro_button : ui->texpos_unselected_intro_button;
        skin.nineslice(row, button.data());
        if (menu.riding) {
            const auto &entry = native_riding_menu_snapshot().rows[i];
            caption({row.x + 1,row.y + 1,row.w - 2,1},entry.english,entry.chinese);
            continue;
        }
        const int action = menu.row_action(i);
        const bool coordinates = action == 6;
        const bool preview = action == 7;
        caption({row.x + 1, row.y + 1, row.w - 2, 1},
            coordinates ? (native_mouse_coordinates_enabled()
                ? "Mouse coordinates: ON" : "Mouse coordinates: OFF") :
            preview ? (native_map_preview_enabled()
                ? "Map preview: ON" : "Map preview: OFF") :
            menu.export_result ? "Close" : kNativeSettingsMenuSources[action + 1],
            coordinates ? (native_mouse_coordinates_enabled()
                ? "鼠标坐标显示：开" : "鼠标坐标显示：关") :
            preview ? (native_map_preview_enabled()
                ? "地图预览：开" : "地图预览：关") :
            menu.export_result ? "关闭" : kNativeSettingsMenuLabels[action + 1]);
    }
    native_graphics_read_member(native_graphics_owner(), offsetof(graphicst, top_in_use), grid->top_in_use);
    layer.ready = true;
} catch (...) {
    TranslationStateScope translation;
    native_settings_menu_close();
    log_line("ERROR", "Could not construct the native translation settings menu");
}

bool Overlay::settings_menu_event(const SDL_Event &event) {
    TranslationStateScope translation;
    auto &menu = g_native_settings_menu;
    if (event.type == SDL_WINDOWEVENT && event.window.event == SDL_WINDOWEVENT_FOCUS_LOST) {
        native_settings_menu_close();
        menu.f1_consumed = false;
        menu.consumed_buttons = 0;
        menu.consumed_keys.fill(false);
        return false;
    }
    if (event.type == SDL_KEYUP) {
        if (event.key.keysym.sym == SDLK_F1 && menu.f1_consumed) {
            menu.f1_consumed = false;
            return true;
        }
        const auto scan = event.key.keysym.scancode;
        if (scan >= 0 && scan < SDL_NUM_SCANCODES && menu.consumed_keys[scan]) {
            menu.consumed_keys[scan] = false;
            return true;
        }
        // Releases whose presses predate the menu still clear game key state.
        return false;
    }
    if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_F1) {
        if (menu.f1_consumed) return true;
        const auto mods = static_cast<SDL_Keymod>(event.key.keysym.mod);
        if ((mods & KMOD_SHIFT) && !(mods & (KMOD_CTRL | KMOD_ALT | KMOD_GUI))) {
            menu.f1_consumed = true;
            if (!event.key.repeat) {
                if (menu.open) native_settings_menu_close();
                else {
                    menu.open = true; menu.hovered = -1; menu.hits_ready = false;
                    g_native_settings_menu_layer.ready = false;
                }
            }
            return true;
        }
    }
    if (event.type == SDL_MOUSEBUTTONUP && event.button.button > 0 && event.button.button <= 32) {
        const uint32_t bit = uint32_t{1} << (event.button.button - 1);
        if (menu.consumed_buttons & bit) {
            menu.consumed_buttons &= ~bit;
            return true;
        }
        return false;
    }
    if (!menu.open) return false;
    const auto hovered = [&](int x, int y) {
        if (!menu.hits_ready) return -1;
        const SDL_Point point{
            static_cast<int>(std::floor(x * menu.input_scale_x + menu.input_offset_x)),
            static_cast<int>(std::floor(y * menu.input_scale_y + menu.input_offset_y))};
        for (size_t i = 0; i < menu.row_count(); ++i)
            if (SDL_PointInRect(&point, &menu.pixel_rows[i])) return static_cast<int>(i);
        return -1;
    };
    if (event.type == SDL_MOUSEMOTION) {
        menu.hovered = hovered(event.motion.x, event.motion.y);
        return true;
    }
    if (event.type == SDL_MOUSEBUTTONDOWN) {
        if (event.button.button > 0 && event.button.button <= 32)
            menu.consumed_buttons |= uint32_t{1} << (event.button.button - 1);
        if (event.button.button == SDL_BUTTON_RIGHT) native_settings_menu_close();
        else if (event.button.button == SDL_BUTTON_LEFT) {
            const int row = hovered(event.button.x, event.button.y);
            if (menu.riding) {
                if (row >= 0) native_riding_select(static_cast<size_t>(row));
                return true;
            }
            const int action = row >= 0 ? menu.row_action(static_cast<size_t>(row)) : -1;
            if (!menu.export_result && action == 5) {
                menu.export_pending = true;
                menu.hits_ready = false;
                return true;
            }
            const bool result = menu.export_result;
            // Close before an action can invalidate a font or reload resources.
            // Keep the matching mouse release consumed after this modal ends.
            native_settings_menu_close();
            if (!result && action >= 0) run_settings_menu_action(action);
        }
        return true;
    }
    if (event.type == SDL_KEYDOWN) {
        const auto scan = event.key.keysym.scancode;
        if (scan >= 0 && scan < SDL_NUM_SCANCODES) menu.consumed_keys[scan] = true;
        if (event.key.keysym.sym == SDLK_ESCAPE && !event.key.repeat)
            native_settings_menu_close();
        return true;
    }
    if (event.type == SDL_MOUSEWHEEL || event.type == SDL_TEXTINPUT || event.type == SDL_TEXTEDITING)
        return true;
    if (event.type == SDL_WINDOWEVENT &&
            (event.window.event == SDL_WINDOWEVENT_SIZE_CHANGED ||
             event.window.event == SDL_WINDOWEVENT_RESIZED)) menu.hits_ready = false;
    return false;
}

void Overlay::render_settings_menu(SDL_Renderer *renderer) {
    TranslationStateScope translation;
    auto &menu = g_native_settings_menu;
    auto &layer = g_native_settings_menu_layer;
    if (!menu.open || !renderer || !layer.ready || layer.renderer != renderer) return;
    std::unique_lock<std::recursive_mutex> writer(g_native_dfhack_layer_mutex, std::try_to_lock);
    if (!writer.owns_lock()) return;
    auto *grid = layer.foreground.graphics();
    if (!grid || grid->tile_pixel_x <= 0 || grid->tile_pixel_y <= 0) return;
    const int origin_x = (grid->screen_pixel_x - grid->dimx * grid->tile_pixel_x) / 2;
    const int origin_y = (grid->screen_pixel_y - grid->dimy * grid->tile_pixel_y) / 2;
    for (size_t i = 0; i < menu.row_count(); ++i) {
        const auto &row = menu.rows[i];
        menu.pixel_rows[i] = {origin_x + row.x * grid->tile_pixel_x,
            origin_y + row.y * grid->tile_pixel_y,
            row.w * grid->tile_pixel_x, row.h * grid->tile_pixel_y};
    }
    NativeUiLayerSdlState sdl(renderer);
    // SDL already scales queued mouse events to the game's current logical
    // size. First recover that event space's window endpoints, then map them
    // to this component's complete-screen logical size. This also handles an
    // unscaled game renderer and high-DPI window/output differences.
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
    menu.input_scale_x = (input_x1 - input_x0) / event_width;
    menu.input_scale_y = (input_y1 - input_y0) / event_height;
    menu.input_offset_x = input_x0; menu.input_offset_y = input_y0;
    menu.hits_ready = true;
    struct DrawingScope {
        bool previous = g_drawing_overlay;
        DrawingScope() { g_drawing_overlay = true; }
        ~DrawingScope() { g_drawing_overlay = previous; }
    } drawing;
    struct ViewScope {
        Overlay &overlay;
        graphicst *previous_graphics;
        GraphicalClearReadback *previous_readback;
        explicit ViewScope(Overlay &value, graphicst *graphics)
            : overlay(value), previous_graphics(value.gps_),
              previous_readback(value.graphical_clear_readback_) {
            value.gps_ = graphics;
            value.graphical_clear_readback_ = nullptr;
        }
        ~ViewScope() {
            overlay.gps_ = previous_graphics;
            overlay.graphical_clear_readback_ = previous_readback;
        }
    } view(*this, grid);
    NativeUiReadScope component(grid, nullptr);
    CellReadCacheScope cells(*this);
    std::vector<Match> labels;
    if (face_) for (const auto &caption : menu.captions) {
        const auto box = caption.box;
        const auto &source = caption.source;
        const int source_x = box.x + (box.w - static_cast<int>(source.size())) / 2;
        Match match{source_x, box.y, static_cast<int>(source.size()), -2,
            caption.target, source};
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
}
