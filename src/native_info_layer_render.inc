// The info object inherits tabs but its visible panel is drawn by a direct
// four-argument native call. Its inherited widget rect is never arranged.
// Redirect this entry, including the frame, tab strip and selected page.
static NativeEntryHook g_native_info_draw_hook;
static uintptr_t g_native_info_vtable = 0;
static NativeUiLayerTarget g_native_info_target;
using NativeInfoDrawFn = void (*)(void *, uint32_t, int32_t, int32_t);

static NativeInfoPage native_info_current_page(uintptr_t widget) {
    using native_history_abi::FieldOffset;
    using native_history_abi::enum_value;
#ifdef _WIN32
    const FieldOffset mode{0x1bc, "info_interfacest", "current_mode"};
#else
    const FieldOffset mode{0x1d8, "info_interfacest", "current_mode"};
#endif
    int32_t value = -1;
    if (!native_history_copy(mode.address(widget, 0, sizeof(value), sizeof(value)), value))
        return NativeInfoPage::None;
    const std::array modes{
        enum_value("info_interface_mode_type", "NONE", -1),
        enum_value("info_interface_mode_type", "CREATURES", 0),
        enum_value("info_interface_mode_type", "JOBS", 1),
        enum_value("info_interface_mode_type", "BUILDINGS", 2),
        enum_value("info_interface_mode_type", "LABOR", 3),
        enum_value("info_interface_mode_type", "WORK_ORDERS", 4),
        enum_value("info_interface_mode_type", "ADMINISTRATORS", 5),
        enum_value("info_interface_mode_type", "ARTIFACTS", 6),
        enum_value("info_interface_mode_type", "JUSTICE", 7)};
    std::optional<NativeInfoPage> result;
    for (size_t i = 0; i < modes.size(); ++i) if (modes[i] && *modes[i] == value) {
        if (result) return NativeInfoPage::None;
        result = static_cast<NativeInfoPage>(static_cast<int32_t>(i) - 1);
    }
    return result.value_or(NativeInfoPage::None);
}

static NativeInfoLaborPage native_info_current_labor_page(uintptr_t widget) {
    using native_history_abi::FieldOffset;
    using native_history_abi::enum_value;
#ifdef _WIN32
    const FieldOffset labor{0x458, "info_interfacest", "labor"};
#else
    const FieldOffset labor{0x498, "info_interfacest", "labor"};
#endif
    const uintptr_t owner = labor.address(widget, 0, 1, 1);
    if (!owner) return NativeInfoLaborPage::None;
    const std::array children{
#ifdef _WIN32
        FieldOffset{0x178, "labor_interfacest", "work_details"},
        FieldOffset{0x188, "labor_interfacest", "standing_orders"},
        FieldOffset{0x198, "labor_interfacest", "kitchen"},
        FieldOffset{0x1a8, "labor_interfacest", "stone_use"}};
#else
        FieldOffset{0x198, "labor_interfacest", "work_details"},
        FieldOffset{0x1a8, "labor_interfacest", "standing_orders"},
        FieldOffset{0x1b8, "labor_interfacest", "kitchen"},
        FieldOffset{0x1c8, "labor_interfacest", "stone_use"}};
#endif
    const FieldOffset visibility{0xa0, "widget", "flag"};
    const auto active = enum_value("widget_flag", "VISIBILITY_ACTIVE", 1);
    const auto visible = enum_value("widget_flag", "VISIBILITY_VISIBLE", 2);
    if (!active || !visible || *active <= 0 || *active > UINT8_MAX ||
            *visible <= 0 || *visible > UINT8_MAX ||
            (*active & (*active - 1)) || (*visible & (*visible - 1)) || (*active & *visible))
        return NativeInfoLaborPage::None;
    const auto visibility_mask = static_cast<uint8_t>(*active | *visible);
    NativeInfoLaborPage result = NativeInfoLaborPage::None;
    for (size_t i = 0; i < children.size(); ++i) {
        uintptr_t child = 0;
        if (!native_history_copy(children[i].address(owner, 0, sizeof(child), sizeof(child)), child))
            return NativeInfoLaborPage::None;
        if (!child) continue;
        uint8_t flags = 0;
        if (!native_history_copy(visibility.address(child, 0, sizeof(flags), sizeof(flags)), flags))
            return NativeInfoLaborPage::None;
        if ((flags & visibility_mask) != visibility_mask) continue;
        if (result != NativeInfoLaborPage::None) return NativeInfoLaborPage::None;
        result = static_cast<NativeInfoLaborPage>(i);
    }
    return result;
}

static void native_info_draw(void *widget, uint32_t tick, int32_t screen_left,
        int32_t screen_right) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeInfoDrawFn>(g_native_info_draw_hook.original);
    if (!original) return;
    uintptr_t table = 0;
    if (widget) std::memcpy(&table, widget, sizeof(table));
    if (table != g_native_info_vtable) {
        callback.call_native([&] { original(widget, tick, screen_left, screen_right); });
        return;
    }
    TranslationStateScope translation;
    auto &layer = g_native_info_layer;
    auto *gps = native_graphics();
    bool isolate = gps && g_native_help_layer.native_renderer && g_native_help_layer.renderer &&
        !g_native_info_write_graphics && !g_native_help_write_graphics &&
        !g_native_display_write_graphics &&
        !g_native_squads_write_graphics &&
        !native_dfhack_layer_write_active(gps) && gps->screen && gps->screen_top &&
        gps->dimx > 0 && gps->dimx <= 1000 && gps->dimy > 0 && gps->dimy <= 1000;
    if (isolate) {
        try {
            if (!layer.ready) {
                layer.foreground.prepare(*gps);
                layer.foreground.clear();
                // Child tooltips and anchored portraits may extend beyond
                // the root rect. Paint all writes in this otherwise empty grid.
                layer.frames = {{0, 0, gps->dimx, gps->dimy}};
            } else if (layer.foreground.dimx != gps->dimx || layer.foreground.dimy != gps->dimy) {
                isolate = false;
            }
        } catch (...) { isolate = false; }
    }
    if (!isolate) {
        if (!g_native_info_write_graphics) native_info_begin_frame();
        callback.call_native([&] { original(widget, tick, screen_left, screen_right); }); return;
    }
    // The native fill loop uses [screen_left + 4, screen_right - 28] and
    // [4, init.display.grid_y - 4], independently of widget::rect. Preserve
    // this ownership before rebinding gps so the main sweep skips the panel.
    const auto *settings = native_ui_settings_source();
    const int left = static_cast<int>(std::clamp<int64_t>(int64_t(screen_left) + 4, 0, gps->dimx));
    const int top = 4;
    const int right = static_cast<int>(std::clamp<int64_t>(int64_t(screen_right) - 28, -1, gps->dimx - 1));
#ifdef _WIN32
    int grid_y = gps->dimy;
    native_ui_settings_read_member(settings, 0x18, grid_y);
#else
    const int grid_y = settings ? settings->display.grid_y : gps->dimy;
#endif
    const int bottom = std::min(gps->dimy - 1, grid_y - 4);
    if (left > right || top > bottom) {
        native_info_begin_frame();
        callback.call_native([&] { original(widget, tick, screen_left, screen_right); }); return;
    }
    // Read optional page contracts before binding. A missing page field
    // suppresses only page-specific matching; native drawing still runs.
    NativeInfoPage page = NativeInfoPage::None;
    NativeInfoLaborPage labor_page = NativeInfoLaborPage::None;
    try {
        page = native_info_current_page(reinterpret_cast<uintptr_t>(widget));
        if (page == NativeInfoPage::Labor)
            labor_page = native_info_current_labor_page(reinterpret_cast<uintptr_t>(widget));
    } catch (...) {
        page = NativeInfoPage::None;
        labor_page = NativeInfoLaborPage::None;
    }
    struct Publication {
        bool completed = false;
        ~Publication() { if (!completed) native_info_begin_frame(); }
    } publication;
    const auto *background = gps->screen;
    std::optional<NativeUiGridBinding> output;
    if (!native_ui_bind_grid(output, gps, *layer.foreground.graphics())) {
        native_info_begin_frame();
        publication.completed = true; // No private output was claimed.
        callback.call_native([&] { original(widget, tick, screen_left, screen_right); });
        return;
    }
    layer.ready = false;
    g_native_info_background_grid = background;
    g_native_info_background_graphics = gps;
    g_native_info_panel = {left, top, right - left + 1, bottom - top + 1};
    g_native_info_page = page;
    g_native_info_labor_page = labor_page;
    layer.native_renderer = g_native_help_layer.native_renderer;
    layer.renderer = g_native_help_layer.renderer;
    NativeInfoCapturedTextScope captions;
    struct WriteScope {
        const graphicst *previous = g_native_info_write_graphics;
        explicit WriteScope(const graphicst *graphics) { g_native_info_write_graphics = graphics; }
        ~WriteScope() { g_native_info_write_graphics = previous; }
    } writing(gps);
    callback.call_native([&] { original(widget, tick, screen_left, screen_right); });
    native_graphics_read_member(gps, offsetof(graphicst, top_in_use),
        layer.foreground.graphics()->top_in_use);
    layer.ready = true;
    publication.completed = true;
    NativeUiReadScope::invalidate_reads();
}

static bool install_native_info_layer_hook() {
    if (g_native_info_draw_hook.installed) return true;
    constexpr const char *label = "Native fortress management component draw entry";
    const auto base = native_history_profile_base();
#ifdef _WIN32
    const auto table = native_reference_address(base, 0x16cfe60);
    auto *draw = reinterpret_cast<unsigned char *>(native_reference_address(base, 0x396010));
    // Complete position-independent pushes preserve the four incoming
    // register arguments in both PE editions; the relay needs no fixups.
    std::vector<unsigned char> prefix{0x40,0x55,0x53,0x56,0x57,0x41,0x54,
        0x41,0x55,0x41,0x56,0x41,0x57};
    if (!native_reference_bytes(0x396010, prefix)) return false;
#else
    const auto table = native_reference_address(base, 0x207ff08);
    auto *draw = reinterpret_cast<unsigned char *>(native_reference_address(base, 0x9a0cf0));
    std::vector<unsigned char> prefix{0xf3,0x0f,0x1e,0xfa,0x41,0x57,0x41,0x56};
    if (!native_reference_bytes(0xda0cf0, prefix)) return false;
#endif
    if (!table || !draw || !g_native_info_draw_hook.prepare(draw, prefix,
            reinterpret_cast<const void *>(&native_info_draw), {}, label)) return false;
    g_native_info_vtable = table;
    if (!g_native_info_draw_hook.install(label)) return false;
    log_line("INFO", "Redirected the entire fortress management panel to its private output layer");
    return true;
}

static void native_info_present_layer(SDL_Renderer *renderer,
        void (*draw_info)(SDL_Renderer *)) {
    native_ui_present_layer(g_native_info_layer, g_native_info_target, renderer, draw_info);
}

static void uninstall_native_info_layer_hook() {
    g_native_info_draw_hook.uninstall("Native fortress management draw entry restore");
    if (!g_native_info_draw_hook.active()) {
        g_native_info_vtable = 0;
        g_native_info_target.release();
        g_native_info_layer = {};
        g_native_info_text = {};
        g_native_info_background_grid = nullptr;
        g_native_info_background_graphics = nullptr;
        g_native_info_panel = {};
        g_native_info_page = NativeInfoPage::None;
        g_native_info_labor_page = NativeInfoLaborPage::None;
    }
}
static bool native_info_layer_hook_active() { return g_native_info_draw_hook.active(); }
