// stocks_interfacest::render receives (stocks, tick, screen_left, screen_right)
// on both native ABIs. Its inline frame fill and every child store must run
// after rebinding gps; captions retain their actual component writers.
static NativeEntryHook g_native_stocks_draw_hook;
static NativeUiLayerTarget g_native_stocks_target;
static uintptr_t g_native_stocks_owner = 0;
using NativeStocksDrawFn = void (*)(void *, uint32_t, int32_t, int32_t);

static void native_stocks_draw(void *stocks, uint32_t tick, int32_t screen_left,
        int32_t screen_right) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeStocksDrawFn>(g_native_stocks_draw_hook.original);
    if (!original) return;
    TranslationStateScope translation;
    auto &layer = g_native_stocks_layer;
    auto *gps = native_graphics();
    bool isolate = reinterpret_cast<uintptr_t>(stocks) == g_native_stocks_owner &&
        gps && g_native_help_layer.native_renderer && g_native_help_layer.renderer &&
        !g_native_stocks_write_graphics && !g_native_info_write_graphics &&
        !g_native_help_write_graphics && !native_dfhack_layer_write_active(gps) &&
        gps->screen && gps->screen_top && gps->dimx > 0 && gps->dimx <= 1000 &&
        gps->dimy > 0 && gps->dimy <= 1000;
    const auto *settings = native_ui_settings_source();
    const int left = gps ? static_cast<int>(std::clamp<int64_t>(
        int64_t(screen_left) + 4, 0, gps->dimx)) : 0;
    const int right = gps ? static_cast<int>(std::clamp<int64_t>(
        int64_t(screen_right) - 28, -1, gps->dimx - 1)) : -1;
#ifdef _WIN32
    int grid_y = gps ? gps->dimy : 0;
    // init.display.grid_y is a native 32-bit field at +0x18 in both PE editions.
    if (settings) std::memcpy(&grid_y,
        reinterpret_cast<const unsigned char *>(settings) + 0x18, sizeof(grid_y));
#else
    const int grid_y = settings ? settings->display.grid_y : gps ? gps->dimy : 0;
#endif
    const int bottom = gps ? std::min(gps->dimy - 1, grid_y - 4) : -1;
    isolate = isolate && left <= right && bottom >= 4;
    if (isolate) {
        try {
            if (!layer.ready) {
                layer.foreground.prepare(*gps);
                layer.foreground.clear();
                layer.frames = {{left, 4, right - left + 1, bottom - 3}};
            } else if (layer.foreground.dimx != gps->dimx || layer.foreground.dimy != gps->dimy) {
                isolate = false;
            }
        } catch (...) { isolate = false; }
    }
    if (!isolate) {
        callback.call_native([&] { original(stocks, tick, screen_left, screen_right); });
        return;
    }
    g_native_stocks_background_grid = gps->screen;
    g_native_stocks_background_graphics = gps;
    g_native_stocks_panel = {left, 4, right - left + 1, bottom - 3};
    // These are the native category width/scrollbar branch, independent of
    // translated labels, filtering results or screenshot pixel coordinates.
    std::array<uintptr_t, 2> types{};
    std::memcpy(types.data(), static_cast<unsigned char *>(stocks) + 0x20, sizeof(types));
    const size_t count = types[1] >= types[0] ? (types[1] - types[0]) / sizeof(int16_t) : 0;
    const int split = left + (right - left + 1) / 3;
    std::memcpy(&g_native_stocks_current_type,
        static_cast<unsigned char *>(stocks) + 0x38, sizeof(g_native_stocks_current_type));
    g_native_stocks_category_right = split - (count > static_cast<size_t>(
        std::max(0, (grid_y - 11) / 3)) ? 4 : 2);
    layer.native_renderer = g_native_help_layer.native_renderer;
    layer.renderer = g_native_help_layer.renderer;
    NativeUiGridBinding output(gps, *layer.foreground.graphics());
    NativeInfoCapturedTextScope captions(g_native_stocks_text);
    struct WriteScope {
        const graphicst *previous = g_native_stocks_write_graphics;
        explicit WriteScope(const graphicst *graphics) { g_native_stocks_write_graphics = graphics; }
        ~WriteScope() { g_native_stocks_write_graphics = previous; }
    } writing(gps);
    callback.call_native([&] { original(stocks, tick, screen_left, screen_right); });
    layer.foreground.graphics()->top_in_use = gps->top_in_use;
    layer.ready = true;
    NativeUiReadScope::invalidate_reads();
}

static bool install_native_stocks_layer_hook() {
    if (g_native_stocks_draw_hook.installed) return true;
    constexpr const char *label = "Native Stocks component draw entry";
    const auto base = native_history_profile_base();
#ifdef _WIN32
    auto *draw = reinterpret_cast<unsigned char *>(native_reference_address(base, 0x3a1690));
    const auto owner = native_reference_address(base, 0x18a2710);
    std::vector<unsigned char> prefix{
        0x40,0x55,0x53,0x56,0x57,0x41,0x54,0x41,0x55,0x41,0x56,0x41,0x57};
    // Complete call signatures also admit these bindings to the normal PE
    // address seed, including the corresponding Classic instruction bytes.
    std::vector<NativeCaptionSignature> captions{
        {0x3a1ac6, {0xe8,0x95,0x7e,0x73,0x00}},
        {0x3a2c30, {0xe8,0x2b,0x6d,0x73,0x00}},
        {0x3a267a, {0xe8,0xe1,0x72,0x73,0x00}},
        {0x3a20c2, {0xe8,0x99,0x78,0x73,0x00}},
    };
    if (!native_reference_bytes(0x3a1690, prefix)) return false;
    std::array<uintptr_t, 4> callers{};
    for (size_t i = 0; i < captions.size(); ++i) {
        auto &caption = captions[i];
        const auto address = native_reference_address(base, caption.address);
        if (!address || !native_reference_bytes(caption.address, caption.bytes) ||
                std::memcmp(reinterpret_cast<const void *>(address),
                    caption.bytes.data(), caption.bytes.size()) != 0) return false;
        callers[i] = address + caption.bytes.size();
    }
#else
    auto *draw = reinterpret_cast<unsigned char *>(native_reference_address(base, 0x979fb0));
    const auto owner = native_reference_address(base, 0x22f7408);
    std::vector<unsigned char> prefix{0xf3,0x0f,0x1e,0xfa,0x55,0x48,0x89,0xe5};
    std::vector<NativeCall> captions{
        {0x97afc9, 0x25170, nullptr},
        {0x97bf34, 0x25170, nullptr},
        {0x97c879, 0x25170, nullptr},
        {0x97a6cb, 0x25170, nullptr},
    };
    if (!native_reference_bytes(0xd79fb0, prefix) ||
            !native_reference_calls(captions, 0x400000)) return false;
    const std::array<uintptr_t, 4> callers{
        base + captions[0].va + 5, base + captions[1].va + 5,
        base + captions[2].va + 5, base + captions[3].va + 5};
#endif
    if (!owner || !draw || !g_native_stocks_draw_hook.prepare(draw, prefix,
            reinterpret_cast<const void *>(&native_stocks_draw), {}, label)) return false;
    g_native_stocks_owner = owner;
    g_native_stocks_category_caller = callers[0];
    g_native_stocks_item_caller = callers[1];
    g_native_stocks_group_caller = callers[2];
    g_native_stocks_filter_caller = callers[3];
    if (!g_native_stocks_draw_hook.install(label)) return false;
    log_line("INFO", "Redirected the entire Stocks window to its private output layer");
    return true;
}

static void native_stocks_present_layer(SDL_Renderer *renderer,
        void (*draw_stocks)(SDL_Renderer *)) {
    native_ui_present_layer(g_native_stocks_layer, g_native_stocks_target, renderer, draw_stocks);
}

static void uninstall_native_stocks_layer_hook() {
    g_native_stocks_draw_hook.uninstall("Native Stocks draw entry restore");
    if (!g_native_stocks_draw_hook.active()) {
        g_native_stocks_owner = 0;
        g_native_stocks_category_caller = g_native_stocks_group_caller = g_native_stocks_item_caller = 0;
        g_native_stocks_filter_caller = 0;
        g_native_stocks_target.release();
        native_stocks_begin_frame();
        g_native_stocks_layer = {};
        g_native_stocks_text = {};
    }
}
static bool native_stocks_layer_hook_active() { return g_native_stocks_draw_hook.active(); }
