// announcements_interfacest is a widget_stack. Hook its complete render,
// including the current tab tree or the report detail pushed onto that stack.
// Other widget_stack instances retain their ordinary output grid.
static NativeUiLayerTarget g_native_reports_target;
static NativeEntryHook g_native_reports_draw_hook;
static uintptr_t g_native_reports_owner = 0;
static uintptr_t g_native_reports_vtable = 0;
using NativeReportsDrawFn = void (*)(void *, uint32_t);
static NativeEntryHook g_native_reports_tabs_hook;

static void native_reports_tabs_draw(void *tabs, uint32_t tick) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeReportsDrawFn>(g_native_reports_tabs_hook.original);
    if (!original) return;
    callback.call_native([&] { original(tabs, tick); });
    if (!tabs || !g_native_reports_write_graphics ||
            !native_ui_classic().value_or(false)) return;
    // Steam 53.17 tabs::render (RVA 0x1430f30), identified by RTTI:
    // +180 labels (32-byte strings), +198 row index pairs (inclusive).
    // It starts at rect.x1/rect.y1, draws at x+2/y+1, advances by
    // label.size()+4, and subtracts two from y for each following row.
    // Capture that producer's allocations, without interpreting screen text.
    try {
        const auto owner = reinterpret_cast<uintptr_t>(tabs);
        std::array<int32_t, 4> rect{};
        std::array<uintptr_t, 3> labels{}, rows{};
        if (!native_history_copy(owner + 0x10, rect) ||
                !native_history_copy(owner + 0x180, labels) ||
                !native_history_copy(owner + 0x198, rows) ||
                labels[1] < labels[0] || rows[1] < rows[0] ||
                (labels[1] - labels[0]) % 32 || (rows[1] - rows[0]) % 16 ||
                labels[1] - labels[0] > 32000 || rows[1] - rows[0] > 16000) return;
        const auto count = (labels[1] - labels[0]) / 32;
        int y = rect[1] + 1;
        for (uintptr_t at = rows[0]; at < rows[1]; at += 16, y -= 2) {
            std::array<uint64_t, 2> range{};
            if (!native_history_copy(at, range) || range[0] > range[1] || range[1] >= count) return;
            int x = rect[0] + 2;
            for (uint64_t index = range[0]; index <= range[1]; ++index) {
                std::string_view source;
                if (!native_string_view(reinterpret_cast<const NativeString *>(
                        labels[0] + index * 32), &source, 4096)) return;
                g_native_reports_tabs.push_back({x, y, std::string(source)});
                x += static_cast<int>(source.size()) + 4;
            }
        }
    } catch (...) {}
}

static void native_reports_draw(void *reports, uint32_t tick) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeReportsDrawFn>(g_native_reports_draw_hook.original);
    if (!original) return;
    uintptr_t table = 0;
    if (reports) std::memcpy(&table, reports, sizeof(table));
    if (reinterpret_cast<uintptr_t>(reports) != g_native_reports_owner ||
            table != g_native_reports_vtable) {
        callback.call_native([&] { original(reports, tick); });
        return;
    }
    TranslationStateScope translation;
    auto &layer = g_native_reports_layer;
    auto *gps = native_graphics();
    bool isolate = gps && g_native_help_layer.native_renderer && g_native_help_layer.renderer &&
        !g_native_reports_write_graphics && !g_native_info_write_graphics &&
        !g_native_stocks_write_graphics && !native_notification_write_active(gps) &&
        !g_native_display_write_graphics &&
        !g_native_squads_write_graphics &&
        !native_private_ui_write_active(gps) && gps->screen && gps->screen_top &&
        gps->dimx > 0 && gps->dimx <= 1000 && gps->dimy > 0 && gps->dimy <= 1000;
    // Open (Steam 0xeee80) sets offsets top/left=4, right=-28, bottom=-4;
    // the constructor's preset 13 anchors both axes from 0 to 1. The root's
    // nineslice fills that same rect, leaving the HUD and right map outside.
    // The main fortress producer invokes arrange (slot 4) immediately before
    // render (slot 3). Use this opaque panel rect for every report subpage.
    std::array<int32_t, 4> rect{};
    std::memcpy(rect.data(), static_cast<unsigned char *>(reports) + 0x10, sizeof(rect));
    const int left = gps ? std::max(0, rect[0]) : 0;
    const int top = gps ? std::max(0, rect[1]) : 0;
    const int right = gps ? std::min(gps->dimx - 1, rect[2]) : -1;
    const int bottom = gps ? std::min(gps->dimy - 1, rect[3]) : -1;
    isolate = isolate && left <= right && top <= bottom;
    if (isolate) {
        try {
            if (!layer.ready) {
                layer.foreground.prepare(*gps);
                layer.foreground.clear();
                // Native children can write beyond their own rect; retain all
                // actual stores in the otherwise empty component output grid.
                layer.frames = {{0, 0, gps->dimx, gps->dimy}};
            } else if (layer.foreground.dimx != gps->dimx || layer.foreground.dimy != gps->dimy) {
                isolate = false;
            }
        } catch (...) { isolate = false; }
    }
    if (!isolate) {
        callback.call_native([&] { original(reports, tick); });
        return;
    }
    g_native_reports_background_grid = gps->screen;
    g_native_reports_background_graphics = gps;
    g_native_reports_panel = {left, top, right - left + 1, bottom - top + 1};
    layer.native_renderer = g_native_help_layer.native_renderer;
    layer.renderer = g_native_help_layer.renderer;
    NativeUiGridBinding output(gps, *layer.foreground.graphics());
    NativeInfoCapturedTextScope captions(g_native_reports_text);
    struct WriteScope {
        const graphicst *previous = g_native_reports_write_graphics;
        explicit WriteScope(const graphicst *graphics) { g_native_reports_write_graphics = graphics; }
        ~WriteScope() { g_native_reports_write_graphics = previous; }
    } writing(gps);
    callback.call_native([&] { original(reports, tick); });
    layer.foreground.graphics()->top_in_use = gps->top_in_use;
    layer.ready = true;
    NativeUiReadScope::invalidate_reads();
}

static bool install_native_reports_layer_hook() {
    if (g_native_reports_draw_hook.installed) return true;
    constexpr const char *label = "Native fortress Reports component draw entry";

#ifdef _WIN32
    const auto base = native_history_profile_base();
    // symbols.xml binds the complete widgets::widget_stack vtable. Its render
    // slot resolves Steam RVA 0x1415450 or Classic RVA 0x14103c0 through the
    // current executable's mapped table, with no cross-edition code address.
    const auto table = native_reference_address(base, 0x15f6f68);
    const auto owner = native_reference_address(base, 0x18a2938);
    uintptr_t draw_address = 0;
    if (!table || !owner || !native_history_copy(table + 3 * sizeof(void *), draw_address) ||
            !draw_address) return false;
    auto *draw = reinterpret_cast<unsigned char *>(draw_address);
    const auto tabs_table = native_reference_address(base, 0x15eefd0);
    uintptr_t tabs_draw = 0;
    if (!tabs_table || !native_history_copy(tabs_table + 3 * sizeof(void *), tabs_draw) ||
            !tabs_draw) return false;
    const std::vector<unsigned char> tabs_prefix{0x4c,0x8b,0xdc,0x55,0x53,0x49,0x8d,0x6b,0xb8};
    if (!g_native_reports_tabs_hook.prepare(reinterpret_cast<unsigned char *>(tabs_draw),
            tabs_prefix, reinterpret_cast<const void *>(&native_reports_tabs_draw), {},
            "Native Reports tab allocations") ||
            !g_native_reports_tabs_hook.install("Native Reports tab allocations")) return false;
    // Both PE editions begin with complete position-independent instructions:
    // PUSH RBX; SUB RSP,0x20. RCX is widget_stack*, EDX is the render tick;
    // the body consumes no incoming stack arguments.
    const std::vector<unsigned char> prefix{0x40,0x53,0x48,0x83,0xec,0x20};
    if (!g_native_reports_draw_hook.prepare(draw, prefix,
            reinterpret_cast<const void *>(&native_reports_draw), {}, label)) return false;
#else
    if (!native_elf_5317_address(0x272c328)) return true;
    const auto table_symbol = reinterpret_cast<uintptr_t>(dlsym(RTLD_DEFAULT, "_ZTVN7widgets12widget_stackE"));
    const auto table = table_symbol ? table_symbol + 2 * sizeof(void *) : 0;
    const auto owner = native_elf_5317_address(0x272c328);
    auto *draw = reinterpret_cast<unsigned char *>(dlsym(RTLD_DEFAULT, "_ZN7widgets12widget_stack6renderEj"));
    const std::vector<unsigned char> prefix{0xf3,0x0f,0x1e,0xfa,0x48,0x8b,0x87,0x88,0x01,0,0};
    if (!table || !owner || !draw || !g_native_reports_draw_hook.prepare(draw, prefix,
            reinterpret_cast<const void *>(&native_reports_draw), {}, label)) return false;
#endif
    g_native_reports_owner = owner;
    g_native_reports_vtable = table;
    if (!g_native_reports_draw_hook.install(label)) return false;
    log_line("INFO", "Redirected the entire Reports window and its subpages to a private output layer");
    return true;
}

static void uninstall_native_reports_layer_hook() {
    g_native_reports_tabs_hook.uninstall("Native Reports tab allocations restore");
    g_native_reports_draw_hook.uninstall("Native fortress Reports draw entry restore");
    if (!g_native_reports_draw_hook.active()) {
        g_native_reports_owner = g_native_reports_vtable = 0;
        g_native_reports_target.release();
        native_reports_begin_frame();
        g_native_reports_layer = {};
        g_native_reports_text = {};
    }
}
static bool native_reports_layer_hook_active() { return g_native_reports_draw_hook.active(); }

static void native_reports_present_layer(SDL_Renderer *renderer,
        void (*draw_reports)(SDL_Renderer *)) {
    native_ui_present_layer(g_native_reports_layer, g_native_reports_target, renderer, draw_reports);
}
