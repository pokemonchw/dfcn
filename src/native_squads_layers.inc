// The fortress squad component owns its complete sidebar and child pages.
// Keep native stores and captured text together, outside the background grid.
static NativeUiLayerStorage g_native_squads_layer;
static NativeInfoCapturedText g_native_squads_text;
static std::vector<Match> g_native_squads_matches;
static std::vector<Match> g_native_squads_footer_rows;
static std::string g_native_squads_footer_target;
struct NativeSquadsParagraph {
    std::vector<Match> rows;
    std::string target;
};
static std::vector<NativeSquadsParagraph> g_native_squads_paragraphs;
static std::array<uintptr_t, 4> g_native_squads_footer_callers{};
// Producer-owned member text columns stop at the selection control. These
// bounds are submitted by its native cursor calls, never found in a grid.
static std::vector<SDL_Rect> g_native_squads_member_columns;
static uintptr_t g_native_squads_owner = 0;
static uintptr_t g_native_squads_heading_caller = 0;
static uintptr_t g_native_squads_member_name_caller = 0;
static uintptr_t g_native_squads_member_order_caller = 0;
enum class NativeSquadsEquipmentField { None, Type, Material, Color, Item };
// Complete fields submitted by the equipment chooser, in enum order.
// Their native constructors are retained in fortress-weapon-picker/.
static std::array<uintptr_t, 4> g_native_squads_equipment_callers{};
static const unsigned char *g_native_squads_background_grid = nullptr;
static const unsigned char *g_native_squads_background_top_grid = nullptr;
static SDL_Rect g_native_squads_panel{};

static bool native_squads_background_cell_hidden(const graphicst *graphics,
        int x, int y) noexcept {
    return graphics && g_native_squads_layer.ready &&
        graphics->screen == g_native_squads_background_grid &&
        graphics->screen_top == g_native_squads_background_top_grid &&
        graphics != g_native_squads_write_graphics &&
        graphics != g_native_info_write_graphics &&
        graphics != g_native_stocks_write_graphics &&
        graphics != g_native_display_write_graphics &&
        graphics != g_native_reports_write_graphics &&
        !native_private_ui_write_active(graphics) &&
        !native_notification_write_active(graphics) &&
        graphics != g_native_pause_write_graphics &&
        x >= g_native_squads_panel.x && y >= g_native_squads_panel.y &&
        x < g_native_squads_panel.x + g_native_squads_panel.w &&
        y < g_native_squads_panel.y + g_native_squads_panel.h;
}

static void native_squads_begin_frame() {
    g_native_squads_layer.ready = false;
    g_native_squads_layer.frames.clear();
    g_native_squads_layer.collapsed_titles.clear();
    g_native_squads_layer.native_renderer = nullptr;
    g_native_squads_layer.renderer = nullptr;
    g_native_squads_text.clear();
    g_native_squads_matches.clear();
    g_native_squads_footer_rows.clear();
    g_native_squads_footer_target.clear();
    g_native_squads_paragraphs.clear();
    g_native_squads_member_columns.clear();
    g_native_squads_background_grid = nullptr;
    g_native_squads_background_top_grid = nullptr;
    g_native_squads_panel = {};
    NativeUiReadScope::invalidate_reads();
}
