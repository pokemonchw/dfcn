// One caption capture and hook lifecycle for every native executable ABI.
using NativeCaptionResizeFn = void (*)(NativeString *, size_t, char);
using NativeCaptionDefaultResizeFn = void (*)(NativeString *, size_t);
using NativeCaptionDrawFn = void (*)(graphicst *, const NativeString *, NativeJustification, int);
using NativeCaptionSimpleDrawFn = void (*)(graphicst *, const NativeString *);
using NativeCaptionTruncateFn = void (*)(NativeString *, int);
using NativeCaptionBuildFn = void (*)(void *);
using NativeCaptionFlagDrawFn = void (*)(graphicst *, const NativeString *, NativeJustification, int, uint32_t);
using NativeCaptionWidgetRenderFn = void (*)(void *, uint32_t);
using NativeCaptionWidgetArrangeFn = void (*)(void *);
static void capture_native_roster_shorten(NativeString *,int);
static void capture_native_map_track_shorten(NativeString *,int);
static void capture_native_adventure_look_track_shorten(NativeString *,int);

struct NativeCaptionWidgetBinding {
    void **render_slot = nullptr;
    size_t rect = 0, text = 0, original_text = 0, justification = 0;
};
struct NativeMultilineWidgetBinding {
    void **render_slot = nullptr;
    size_t rect = 0, text = 0, minimum_width = 0;
    uintptr_t row_return_address = 0;
    void *expected_render = nullptr;
    void **arrange_slot = nullptr;
    void *expected_arrange = nullptr;
    NativeCaptionWidgetArrangeFn base_arrange = nullptr;
    size_t minimum_height = 0;
};
struct NativeTextboxWidgetBinding {
    uintptr_t table = 0;
    void **render_slot = nullptr;
    void *expected_render = nullptr;
    uintptr_t text_return_address = 0;
};

struct NativeCaptionSite {
    uintptr_t resize, draw;
    NativeFieldKind kind;
};
struct NativeCaptionSignature {
    uintptr_t address;
    std::vector<unsigned char> bytes;
};
struct NativeCaptionInlineResize {
    uintptr_t address;
    std::vector<unsigned char> original, arguments;
    bool zero_pad_one = false;
    std::vector<unsigned char> suffix{};
    bool plain_shrink = false;
};
struct NativeInfoTitleSite {
    uintptr_t return_address = 0;
    NativeInfoTitleKind kind = NativeInfoTitleKind::None;
};
struct NativeCivilizationCaptionSite {
    uintptr_t return_address = 0;
    NativeCivilizationField field = NativeCivilizationField::None;
};
struct NativeLocationPickerSite {
    uintptr_t return_address = 0;
    NativeLocationPickerField field = NativeLocationPickerField::None;
};
struct NativeTravelBuildingSite {
    uintptr_t return_address = 0;
    NativeTravelBuildingField field = NativeTravelBuildingField::None;
};
struct NativeAdventureCraftingSite {
    uintptr_t return_address = 0;
    NativeAdventureCraftingRole role = NativeAdventureCraftingRole::None;
};
struct NativeAdventureLookCaptionSite {
    uintptr_t return_address = 0;
    ptrdiff_t index_slot = 0;
    NativeMapHoverKind expected_kind = NativeMapHoverKind::Unknown;
    NativeMapHoverFragment fragment = NativeMapHoverFragment::Complete;
};
struct NativeInfoTitleBinding {
    std::vector<NativeInfoTitleSite> sites;
    // Offsets from the exact title NativeString to live caller-frame slots.
    // Only the verified building draw uses these object/field bindings.
    ptrdiff_t building_slot = 0, sheet_slot = 0;
    size_t building_name = 0, editing_name = 0;
    ptrdiff_t item_list_right_slot = 0;
    int item_list_right_inset = 0;
    // Places' farm caption has its own caller frame, with the same native
    // building.name field but no information-sheet editing state.
    uintptr_t farm_name_return_address = 0;
    ptrdiff_t farm_building_slot = 0;
};
using NativeAnnouncementRowsFn = size_t (*)(const void *);
using NativeAnnouncementPopupDrawFn = void (*)(uint64_t, uint64_t, uint64_t, uint64_t);
struct NativeAnnouncementPageBinding {
    uintptr_t rows_target = 0;
    std::vector<uintptr_t> rows_calls;
    const int32_t *left = nullptr, *bottom = nullptr;
    size_t width_offset = 0;
};
struct NativeCaptionProfile {
    uintptr_t base = 0, resize_target = 0, draw_target = 0;
    NativeCaptionResizeFn resize = nullptr;
    NativeCaptionDrawFn draw = nullptr;
    std::vector<NativeCaptionSite> sites;
    std::vector<NativeCaptionSignature> signatures;
    std::vector<NativeCaptionInlineResize> inline_resizes;
    // Optional native entry bindings for clipped fields outside the original
    // call-site list. Adapters supply complete, relocatable instructions.
    std::vector<unsigned char> resize_entry_prefix, draw_entry_prefix;
    NativeCaptionTruncateFn truncate = nullptr;
    NativeCaptionFlagDrawFn flag_draw = nullptr;
    std::vector<unsigned char> truncate_entry_prefix, flag_draw_entry_prefix;
    NativeCaptionDrawFn top_draw = nullptr;
    NativeCaptionSimpleDrawFn top_simple_draw = nullptr;
    NativeCaptionFlagDrawFn top_flag_draw = nullptr;
    std::vector<unsigned char> top_draw_entry_prefix, top_flag_draw_entry_prefix;
    std::vector<NativeCaptionDefaultResizeFn> default_resizes;
    std::vector<unsigned char> default_resize_entry_prefix;
    NativeCaptionWidgetBinding truncated_widget;
    NativeMultilineWidgetBinding multiline_widget;
    NativeTextboxWidgetBinding textbox_widget;
    void **tooltip_container_slot = nullptr;
    void *tooltip_container_render = nullptr;
    bool legacy_toolbar_tooltip = false;
    // These callers abbreviate a live name/profession before optionally
    // clipping it and replacing the final three cells with dots.
    uintptr_t roster_shorten_target = 0;
    std::vector<uintptr_t> roster_shorten_calls;
    // A map record owns its string before the row is drawn. Its spoor branch
    // removes vowels in place, then appends direction/ownership components.
    uintptr_t map_track_shorten_call = 0, map_track_shorten_target = 0;
    NativeCaptionTruncateFn map_track_shorten = nullptr;
    uintptr_t adventure_look_track_shorten_call = 0, adventure_look_track_shorten_target = 0;
    NativeCaptionBuildFn map_caption_build = nullptr;
    size_t map_caption_text_offset = 0;
    uintptr_t map_hover_list = 0;
    std::vector<unsigned char> map_caption_build_prefix;
    std::vector<uintptr_t> map_hover_returns;
    std::vector<NativeAdventureLookCaptionSite> adventure_look_caption_sites;
    NativeInfoTitleBinding info_titles;
    std::vector<NativeCivilizationCaptionSite> civilization_fields;
    std::vector<NativeLocationPickerSite> location_picker_fields;
    std::vector<NativeTravelBuildingSite> travel_building_fields;
    std::vector<NativeAdventureCraftingSite> adventure_crafting_fields;
    std::vector<uintptr_t> mission_title_returns;
    NativeAnnouncementPageBinding announcement_page;
    uintptr_t announcement_popup_call = 0, announcement_popup_target = 0;
#ifndef _WIN32
    std::vector<NativeCall> main_calls;
#endif
};
#include "native_caption_profile.inc"

struct NativeCaptionHooks {
    NativeCallHook code;
    NativeCaptionResizeFn resize = nullptr;
    NativeCaptionDrawFn draw = nullptr;
};
static NativeCaptionHooks g_native_caption_hooks;
#ifndef _WIN32
static NativeCallHook g_native_main_caption_calls;
#endif
static NativeImportHook g_native_caption_widget_hook;
static NativeCaptionWidgetBinding g_native_caption_widget_binding;
static NativeImportHook g_native_multiline_widget_hook;
static NativeImportHook g_native_multiline_arrange_hook;
static NativeMultilineWidgetBinding g_native_multiline_widget_binding;
static NativeImportHook g_native_textbox_widget_hook;
static NativeTextboxWidgetBinding g_native_textbox_widget_binding;
static NativeImportHook g_native_tooltip_container_hook;
static NativeImportHook g_native_help_tile_hook;
static NativeImportHook g_native_help_top_tile_hook;
using NativeHelpTileFn = void (*)(graphicst *, long);
using NativeHelpTopTileFn = void (*)(graphicst *, long, char);
static NativeHelpTileFn g_real_native_help_tile = nullptr;
static NativeHelpTopTileFn g_real_native_help_top_tile = nullptr;
static NativeAnnouncementPageBinding g_native_announcement_page_binding;
static NativeAnnouncementRowsFn g_native_announcement_page_rows = nullptr;
static NativeAnnouncementPopupDrawFn g_native_announcement_popup_draw = nullptr;

#ifdef _WIN32
static std::shared_ptr<NativeTooltipPage> capture_native_announcement_popup_background();
static void publish_native_announcement_popup_background(
    std::shared_ptr<NativeTooltipPage> page, int32_t margin);
static void clear_native_announcement_popup_background();

// The native caller forwards exactly four register arguments. Capture the
// page before the renderer clears its rectangle, then publish only after
// that draw has completed. Geometry and source ownership stay in the shared
// page reader; this call wrapper never changes the game's inputs or text.
static void capture_native_announcement_popup_draw(
        uint64_t owner, uint64_t second, uint64_t margin, uint64_t fourth) {
    NativeInputCallbackScope callback;
    std::shared_ptr<NativeTooltipPage> page;
    try { page = capture_native_announcement_popup_background(); } catch (...) {}
    const auto original = g_native_announcement_popup_draw;
    if (original) callback.call_native([&] { original(owner, second, margin, fourth); });
    try {
        publish_native_announcement_popup_background(std::move(page),
            static_cast<int32_t>(margin));
    } catch (...) {
        try { clear_native_announcement_popup_background(); } catch (...) {}
    }
}
#endif

// These two call sites count the report rows immediately before the native
// renderer clears their same-layer floating rectangle. Keep the actual page
// before that first write, including picture/action textures and font flags.
// The consumer still has to prove the current instruction and closed frame.
static size_t capture_native_announcement_page_rows(const void *paragraph) {
    NativeInputCallbackScope callback;
    const auto original = g_native_announcement_page_rows;
    const size_t rows = original ? callback.call_native([&] { return original(paragraph); }) : 0;
    try {
        std::shared_ptr<NativeTooltipPage> page;
        auto *gps = native_graphics();
        const auto &binding = g_native_announcement_page_binding;
        const auto epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
        int dimx = 0, dimy = 0;
        if (paragraph && gps && gps->screen && binding.left && binding.bottom &&
                gps->dimx > 0 && gps->dimx <= 1000 &&
                gps->dimy > 0 && gps->dimy <= 1000 && rows <= static_cast<size_t>(gps->dimy)) {
            int32_t width = 0;
            std::memcpy(&width, static_cast<const unsigned char *>(paragraph) +
                binding.width_offset, sizeof(width));
            const int left = *binding.left, bottom = *binding.bottom;
            const int top = bottom - static_cast<int>(rows) - 3;
            // This is the native loop's exact inclusive geometry. A clipped
            // or malformed rectangle cannot supply saved cells to a later UI.
            if (width >= 0 && width <= gps->dimx - 5 && left >= 0 && top >= 0 &&
                    left <= gps->dimx - width - 5 && bottom < gps->dimy &&
                    left >= gps->clipx[0] && left + width + 4 <= gps->clipx[1] &&
                    top >= gps->clipy[0] && bottom <= gps->clipy[1]) {
                page = std::make_shared<NativeTooltipPage>(*gps);
                page->bounds = {left, top, width + 5, static_cast<int>(rows) + 4};
                std::fill(page->cells.begin(), page->cells.end(), 0);
                for (int x = left; x <= left + width + 4; ++x)
                    std::fill_n(page->cells.begin() + static_cast<size_t>(x) * gps->dimy + top,
                        static_cast<size_t>(rows) + 4, 1);
                dimx = gps->dimx;
                dimy = gps->dimy;
            }
        }
        std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
        g_native_announcement_page = std::move(page);
        g_native_announcement_page_epoch = epoch;
        g_native_announcement_page_dimx = dimx;
        g_native_announcement_page_dimy = dimy;
    } catch (...) {
        try {
            std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
            g_native_announcement_page.reset();
        } catch (...) {}
    }
    return rows;
}

static void capture_native_help_cell(graphicst *gps) {
    try {
        if (!gps || gps->dimx <= 0 || gps->dimx > 1000 || gps->dimy <= 0 || gps->dimy > 1000 ||
                native_private_ui_write_active(gps) || gps == g_native_info_write_graphics ||
                gps == g_native_stocks_write_graphics ||
            !gps->screen ||
            gps->screenx < 0 || gps->screenx >= gps->dimx ||
            gps->screeny < 0 || gps->screeny >= gps->dimy ||
            gps->screenx < gps->clipx[0] || gps->screenx > gps->clipx[1] ||
            gps->screeny < gps->clipy[0] || gps->screeny > gps->clipy[1]) return;
        // Graphical mode needs no help-background capture. Read just this
        // flag instead of copying all of the UI's skin/texture settings.
        const auto classic = native_ui_classic();
        if (!classic || !*classic) return;
        const auto epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
        std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
        if (!g_native_help_page || g_native_help_page_epoch != epoch ||
            g_native_help_page_dimx != gps->dimx || g_native_help_page_dimy != gps->dimy) {
            g_native_help_page = std::make_shared<NativeTooltipPage>(*gps);
            std::fill(g_native_help_page->cells.begin(), g_native_help_page->cells.end(), 0);
            g_native_help_page_epoch = epoch;
            g_native_help_page_dimx = gps->dimx;
            g_native_help_page_dimy = gps->dimy;
        }
        // Save each cell immediately before its first top-layer write.
        // Only recognized help rectangles consume these saved bytes.
        const size_t at = static_cast<size_t>(gps->screenx) * gps->dimy + gps->screeny;
        if (g_native_help_page->cells[at]) return;
        auto *destination = g_native_help_page->screen.data() + at * 8;
        std::memcpy(destination, gps->screen + at * 8, 8);
        if (!g_native_help_page->texture.empty())
            g_native_help_page->texture[at] = gps->screentexpos
                ? gps->screentexpos[at] : 0;
        g_native_help_page->cells[at] = 1;
    } catch (...) {}
}
static void capture_native_help_tile(graphicst *gps, long tile) {
    NativeInputCallbackScope callback;
    capture_native_help_cell(gps);
    const auto original = g_real_native_help_tile;
    if (original) callback.call_native([&] { original(gps, tile); });
}
static void capture_native_help_top_tile(graphicst *gps, long tile, char color) {
    NativeInputCallbackScope callback;
    capture_native_help_cell(gps);
    const auto original = g_real_native_help_top_tile;
    if (original) callback.call_native([&] { original(gps, tile, color); });
}
static thread_local NativeTooltipWidgetFrame *g_native_tooltip_write = nullptr;
#include "native_legacy_tooltip.inc"

// ViewBase::widget::render creates a container named Tooltip. Its children
// draw the background, wrapped body and keys into screen (not screen_top).
// Record that actual write scope; page text left in another logical layer
// must not supply either the tooltip's identity or its paragraph bounds.
static void capture_native_tooltip_container(void *widget, uint32_t tick) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeCaptionWidgetRenderFn>(
        g_native_tooltip_container_hook.original);
    if (native_private_ui_write_active(native_graphics())) {
        if (original) callback.call_native([&] { original(widget, tick); });
        return;
    }
    std::optional<NativeTooltipWidgetFrame> captured;
    auto *gps = native_graphics();
    try {
        const auto *bytes = static_cast<const unsigned char *>(widget);
        std::string_view name;
        if (widget && gps && gps->screen && gps->dimx > 0 && gps->dimx <= 1000 &&
            gps->dimy > 0 && gps->dimy <= 1000 &&
            native_string_view(reinterpret_cast<const NativeString *>(bytes + 0x80), &name, 64) &&
            name == "Tooltip") {
            std::array<int32_t, 4> rect{};
            std::memcpy(rect.data(), bytes + 0x10, sizeof(rect));
            if (rect[0] >= 0 && rect[1] >= 0 && rect[2] < gps->dimx && rect[3] < gps->dimy &&
                rect[2] > rect[0] + 1 && rect[3] > rect[1] + 1) {
                captured.emplace();
                captured->bounds = {rect[0], rect[1], rect[2] - rect[0] + 1, rect[3] - rect[1] + 1};
                captured->dimx = gps->dimx;
                captured->dimy = gps->dimy;
                captured->epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
                captured->page = std::make_shared<NativeTooltipPage>(*gps);
                captured->page->bounds = captured->bounds;
                captured->rows.assign(static_cast<size_t>(captured->bounds.h),
                    std::string(static_cast<size_t>(captured->bounds.w), ' '));
                // At this point the entire page, including its action strips,
                // exists and none of this tooltip's children has overwritten it.
                std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
                for (auto &draw : g_native_drawn_text_rows) {
                    if (draw.picture_frame || draw.y < rect[1] || draw.y > rect[3] ||
                        draw.x < 0 || draw.source.empty() ||
                        draw.source.size() > static_cast<size_t>(gps->dimx - draw.x)) continue;
                    bool current = true;
                    for (size_t i = 0; current && i < draw.source.size(); ++i)
                        current = gps->screen[(static_cast<size_t>(draw.x + i) * gps->dimy + draw.y) * 8]
                            == static_cast<unsigned char>(draw.source[i]);
                    if (current) draw.picture_frame = capture_native_picture_caption_frame(*gps, draw.x, draw.y);
                }
            }
        }
    } catch (...) { captured.reset(); }
    {
        struct WriteScope {
            NativeTooltipWidgetFrame *previous = g_native_tooltip_write;
            explicit WriteScope(NativeTooltipWidgetFrame *frame) {
                if (frame) g_native_tooltip_write = frame;
            }
            ~WriteScope() { g_native_tooltip_write = previous; }
        } scope(captured ? &*captured : nullptr);
        if (original) callback.call_native([&] { original(widget, tick); });
    }
    try {
        if (!captured || !gps || !gps->screen || gps->dimx != captured->dimx ||
            gps->dimy != captured->dimy || captured->epoch !=
                g_embark_item_capture_epoch.load(std::memory_order_acquire)) return;
        const auto &box = captured->bounds;
        captured->document = std::make_shared<NativeTooltipPage>(*gps);
        captured->document->bounds = box;
        // add_lower_tile only changes the background texture. Unwritten
        // character cells here still belong to the page beneath the card;
        // rows therefore come exclusively from this widget's text writes.
        std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
        g_native_tooltip_widget_frame = std::move(captured);
    } catch (...) {}
}
static NativeInfoTitleBinding g_native_info_title_binding;
static std::vector<NativeCivilizationCaptionSite> g_native_civilization_caption_sites;
static std::vector<NativeLocationPickerSite> g_native_location_picker_sites;
static std::vector<NativeTravelBuildingSite> g_native_travel_building_sites;
static std::vector<NativeAdventureCraftingSite> g_native_adventure_crafting_sites;
static std::vector<uintptr_t> g_native_mission_title_returns;
static std::vector<uintptr_t> g_native_map_hover_returns;
static std::vector<NativeAdventureLookCaptionSite> g_native_adventure_look_caption_sites;
static size_t g_native_map_hover_text_offset = 0;
static uintptr_t g_native_map_hover_list = 0;

static NativeInfoTitleKind native_info_title_kind(uintptr_t caller) {
    for (const auto &site : g_native_info_title_binding.sites)
        if (site.return_address == caller) return site.kind;
    return NativeInfoTitleKind::None;
}

static NativeCivilizationField native_civilization_caption_field(uintptr_t caller) {
    for (const auto &site : g_native_civilization_caption_sites)
        if (site.return_address == caller) return site.field;
    return NativeCivilizationField::None;
}

static NativeLocationPickerField native_location_picker_field(uintptr_t caller) {
    for (const auto &site : g_native_location_picker_sites) {
        if (site.return_address != caller) continue;
#ifndef _WIN32
        // GCC merges the dedication label's native draw with the faith
        // card. Its actual selector state determines which allocation owns it.
        if (site.field == NativeLocationPickerField::Faith) {
            const uintptr_t selector = native_reference_address(native_history_profile_base(),0x22f8e00);
            uint8_t choosing = 0;
            if (selector && native_history_copy(native_history_object_member(selector,
                    "location_selector_interfacest","choosing_temple_religious_practice"),choosing) && choosing)
                return NativeLocationPickerField::FaithDeity;
        }
#endif
        return site.field;
    }
    return NativeLocationPickerField::None;
}

static NativeTravelBuildingField native_travel_building_field(uintptr_t caller) {
    for (const auto &site : g_native_travel_building_sites)
        if (site.return_address == caller) return site.field;
    return NativeTravelBuildingField::None;
}

static std::optional<SDL_Rect> native_location_picker_draw_box(
        const graphicst *graphics, const NativeString *source,
        NativeLocationPickerField field, uintptr_t caller = 0) {
    const bool faith = native_faith_picker_field(field);
    const bool subpage = native_location_picker_subpage_field(field);
    const bool detail = native_location_detail_field(field);
    if (field == NativeLocationPickerField::None ||
            field == NativeLocationPickerField::Prompt ||
            !graphics || !graphics->screen ||
            (!subpage && !detail && !native_ui_classic().value_or(false)))
        return std::nullopt;
    const int x = graphics->screenx, y = graphics->screeny;
    if (graphics->dimx <= 0 || graphics->dimx > 1000 ||
            graphics->dimy <= 0 || graphics->dimy > 1000 ||
            x < 0 || x >= graphics->dimx || y < 0 || y >= graphics->dimy)
        return std::nullopt;
    NativePanelReadScope panel_scope(graphics);
    if (detail) {
        // Location detail writes every caption directly into its closed
        // panel. Retain the native column and clip before later row draws;
        // the source's English length never determines its Chinese budget.
        int left = static_cast<int>(std::clamp<int64_t>(graphics->clipx[0], 0, graphics->dimx));
        int right = static_cast<int>(std::clamp<int64_t>(
            int64_t(graphics->clipx[1]) + 1, 0, graphics->dimx));
        if (y < graphics->clipy[0] || y > graphics->clipy[1] || x < left || x >= right)
            return std::nullopt;
        const NativePanelBorders borders(*graphics);
        if (const auto panel = native_panel_interior(borders, *graphics, x, x + 1, y)) {
            left = std::max(left, panel->x);
            right = std::min(right, panel->x + panel->w);
        }
        if (field == NativeLocationPickerField::DetailRole) {
            // The shared occupation row begins at list_left+6; its native
            // add-person button begins at list_left+24, for all ten roles
            // and every generated entity_position title.
            right = std::min(right, x + 18);
        } else if (field == NativeLocationPickerField::DetailUnit) {
#ifdef _WIN32
            // Only the proved detail-unit draw has this caller frame.
            // rbp+0x50 owns the name and rbp+0x00 its exclusive column end;
            // 3b8465..3b8488 reserve three cells before native truncation.
            const uintptr_t address = reinterpret_cast<uintptr_t>(source);
            int32_t column_end = 0;
            if (caller == native_pe_address(native_history_profile_base(), 0x3b84e0) &&
                    address >= 0x50 && native_history_copy(address - 0x50, column_end) &&
                    column_end > x + 3 && column_end <= graphics->dimx)
                right = std::min(right, column_end - 3);
#else
            (void)caller;
#endif
        }
        if (x >= left && right > x) return SDL_Rect{x, y, right - x, 1};
        return std::nullopt;
    }
    if ((faith && field != NativeLocationPickerField::FaithChoice &&
            field != NativeLocationPickerField::FaithStatus) ||
            native_guild_picker_card_field(field)) {
        // Guild and faith cards draw text after their complete hover frames.
        // Its 21 interior columns, rather than the outer chooser or screen,
        // own counts, labels and the complete guild/deity identities.
        const NativePanelBorders borders(*graphics);
        if (const auto panel = native_panel_interior(borders, *graphics, x, x + 1, y)) {
            const int right = panel->x + panel->w;
            if (x >= panel->x && right > x) return SDL_Rect{x, y, right - x, 1};
        }
        return std::nullopt;
    }
    if (field == NativeLocationPickerField::Action) {
        std::string_view text;
        if (!native_string_view(source, &text, 4096) || text.empty() ||
                text.size() > static_cast<size_t>(graphics->dimx - x))
            return std::nullopt;
        if (auto box = native_button_text_rect(*graphics, x,
                x + static_cast<int>(text.size()), y,
                false, nullptr, false, false, true)) {
            box->y = y;
            box->h = 1;
            return box;
        }
        return std::nullopt;
    }
    const int middle = field == NativeLocationPickerField::Name ||
        field == NativeLocationPickerField::FaithChoice ||
        field == NativeLocationPickerField::GuildChoice ? y : y - 1;
    if (const auto frame = native_picture_caption_rect(
            *graphics, x, middle, true, nullptr, true)) {
        // The main chooser paints main[181] after both captions. Reserve
        // those four columns there; faith/guild subpages allocate the entire
        // picture strip to its name and status without that later action.
        const int right = frame->x + frame->w - (subpage ? 0 : 4);
        if (right > x) return SDL_Rect{x, y, right - x, 1};
    }
    return std::nullopt;
}

static bool native_mission_title_caller(uintptr_t caller) {
    return std::find(g_native_mission_title_returns.begin(),
        g_native_mission_title_returns.end(), caller) != g_native_mission_title_returns.end();
}

static bool native_info_title_memory_readable(const void *pointer, size_t size) {
#ifdef _WIN32
    uintptr_t cursor = reinterpret_cast<uintptr_t>(pointer);
    if (!cursor || !size || size > UINTPTR_MAX - cursor) return false;
    const uintptr_t end = cursor + size;
    while (cursor < end) {
        MEMORY_BASIC_INFORMATION region{};
        if (!VirtualQuery(reinterpret_cast<const void *>(cursor), &region, sizeof(region)) ||
            region.State != MEM_COMMIT || (region.Protect & (PAGE_GUARD | PAGE_NOACCESS))) return false;
        const auto access = region.Protect & 0xff;
        if (access != PAGE_READONLY && access != PAGE_READWRITE && access != PAGE_WRITECOPY &&
            access != PAGE_EXECUTE_READ && access != PAGE_EXECUTE_READWRITE &&
            access != PAGE_EXECUTE_WRITECOPY) return false;
        const uintptr_t begin = reinterpret_cast<uintptr_t>(region.BaseAddress);
        if (cursor < begin || region.RegionSize > UINTPTR_MAX - begin ||
            cursor >= begin + region.RegionSize) return false;
        cursor = std::min(end, begin + region.RegionSize);
    }
    return true;
#else
    uintptr_t cursor = reinterpret_cast<uintptr_t>(pointer);
    if (!cursor || !size || size > UINTPTR_MAX - cursor) return false;
    const uintptr_t end = cursor + size;
    const size_t page = native_patch_page_size();
    if (!page) return false;
    // Access permissions have page granularity. The existing guarded reader
    // can establish readability without reopening and parsing /proc/self/maps
    // for every field of every caption's widget/parent chain.
    unsigned char probe = 0;
    while (cursor < end) {
        const size_t span = std::min<size_t>(end - cursor, page - cursor % page);
        if (!native_history_copy_bytes(cursor, &probe, sizeof(probe))) return false;
        cursor += span;
    }
    return true;
#endif
}

static NativeAdventureCraftingRole native_adventure_crafting_role(
        uintptr_t caller, uintptr_t source) {
    for (const auto &site : g_native_adventure_crafting_sites) {
        if (site.return_address != caller) continue;
        if (site.role != NativeAdventureCraftingRole::Caption || !source) return site.role;
#ifdef _WIN32
        // The verified renderer keeps state at rsp+0x50 and the caption at
        // rbp-0x10 (rsp+0xf0). Freeze mode while that producer frame is live;
        // its four modes share this draw, but only mode 0 owns RAW captions.
        uintptr_t state = 0;
        int32_t mode = -1;
        if (source >= 0xa0 && native_info_title_memory_readable(
                reinterpret_cast<const void *>(source - 0xa0), sizeof(state))) {
            std::memcpy(&state, reinterpret_cast<const void *>(source - 0xa0), sizeof(state));
            if (state && native_info_title_memory_readable(
                    reinterpret_cast<const void *>(state + 4), sizeof(mode)))
                std::memcpy(&mode, reinterpret_cast<const void *>(state + 4), sizeof(mode));
        }
        return mode == 0 ? NativeAdventureCraftingRole::Caption :
            mode >= 1 && mode <= 3 ? NativeAdventureCraftingRole::Item :
            NativeAdventureCraftingRole::None;
#else
        return site.role;
#endif
    }
    return NativeAdventureCraftingRole::None;
}

static NativeAdventureInventoryRole native_adventure_inventory_role(
        uintptr_t caller, uintptr_t source) {
#ifdef _WIN32
    const uintptr_t base = native_history_profile_base();
    if (!base || caller != native_reference_address(base, 0x883790) || source < 0x40)
        return NativeAdventureInventoryRole::None;
    // Both decompiled PE renderers keep the list at rbp-0xb8 and the
    // current option index at rbp-0x88; this exact name is rbp-0x78.
    // Snapshot only the role, never a borrowed option or stack address.
    uintptr_t list = 0, index = 0, option = 0, table = 0, provider = 0;
    int32_t mode = -1;
    NativeBorrowedVector<void *> options;
    if (!native_history_copy(source - 0x40, list) || !list || list > UINTPTR_MAX - 0x30 ||
            !native_history_copy(source - 0x10, index) ||
            !native_history_copy(list + 4, mode) || mode < 0 || mode > 10 ||
            !native_history_copy(list + 0x18, options) || !options.valid() ||
            index >= options.size()) return NativeAdventureInventoryRole::None;
    if (!native_history_copy(reinterpret_cast<uintptr_t>(options.begin) +
                index * sizeof(void *), option) || !option ||
            !native_history_copy(option, table) || !table || table > UINTPTR_MAX - 0x18 ||
            !native_history_copy(table + (mode == 8 || mode == 9 ? 0x10 : 8), provider))
        return NativeAdventureInventoryRole::None;
    if (provider == native_reference_address(base, 0x894180))
        return NativeAdventureInventoryRole::Item;
    if (provider == native_reference_address(base, 0x8392a0))
        return NativeAdventureInventoryRole::Deposit;
    if (mode == 5 || mode == 7 || mode == 8 || mode == 9)
        return NativeAdventureInventoryRole::Action;
#else
    (void)caller;
    (void)source;
#endif
    return NativeAdventureInventoryRole::None;
}

static bool native_textbox_widget_editable(const void *widget) {
    const auto address = reinterpret_cast<uintptr_t>(widget);
    const auto &binding = g_native_textbox_widget_binding;
    uintptr_t table = 0, parent = 0;
    uint8_t visibility = 0;
    uint32_t flags = 0;
    int32_t maxlen = 0, type = -1;
    std::array<int32_t, 4> rect{};
    const auto read_field = [&](size_t offset, auto &value) {
        return offset <= UINTPTR_MAX - address &&
            native_history_copy(address + offset, value);
    };
    if (!address || !binding.table || !native_history_copy(address, table) ||
        table != binding.table ||
        !read_field(native_history_layout::textbox_parent_offset, parent) ||
        !read_field(native_history_layout::textbox_rect_offset, rect) ||
        !read_field(native_history_layout::textbox_visibility_offset, visibility) ||
        !read_field(native_history_layout::textbox_flags_offset, flags) ||
        !read_field(native_history_layout::textbox_maxlen_offset, maxlen) ||
        !read_field(native_history_layout::textbox_type_offset, type) ||
        (visibility & 3u) != 3u || maxlen < 0 || type < 0 || type > 2 ||
        (flags & ~0x7fu) != 0 || rect[2] < rect[0] || rect[3] < rect[1]) return false;
    // FILTER, NAME and NONE are all editable textbox classes. A textbox
    // need not own keyboard focus or a parent to retain its authored text.
    // Read its owned string safely; render may draw a temporary substring,
    // so protection belongs to this native render scope, never its address.
    std::string text;
    return native_history_layout::textbox_string_offset <= UINTPTR_MAX - address &&
        native_history_copy_string(address + native_history_layout::textbox_string_offset, text);
}

static void capture_native_textbox_widget_render(void *widget, uint32_t tick) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeCaptionWidgetRenderFn>(
        g_native_textbox_widget_hook.original);
    if (!original) return;
    bool editable = false;
    try { editable = native_textbox_widget_editable(widget); } catch (...) {}
    // widget::render runs custom callbacks before textbox draws str. The
    // verified caller alone activates protection for that actual addst;
    // callbacks and separately drawn labels retain ordinary translation.
    NativeEditableTextScope scope(editable,
        g_native_textbox_widget_binding.text_return_address);
    callback.call_native([&] { original(widget, tick); });
}

#include "native_fortress_labor_capture.inc"
#include "native_adventure_look_caption.inc"

static NativeMapHoverContext native_map_hover_context(uintptr_t caller,
        const NativeString *source) {
    if (auto indexed = native_adventure_look_caption_context(caller, source))
        return *indexed;
    NativeMapHoverContext context;
    const bool known_caller = std::find(g_native_map_hover_returns.begin(),
        g_native_map_hover_returns.end(), caller) != g_native_map_hover_returns.end();
    if (known_caller) context.kind = NativeMapHoverKind::Unknown;
    const uintptr_t address = reinterpret_cast<uintptr_t>(source);
    if (!g_native_map_hover_text_offset || address <= g_native_map_hover_text_offset)
        return context;
    const uintptr_t record = address - g_native_map_hover_text_offset;
    if (!known_caller) {
        // Both native ABIs draw ui_look_list's owned display_str directly.
        // Read the current list, including in-place changes during this draw
        // pass; an epoch cache could retain owners from an earlier map tile.
        constexpr size_t maximum = 4096;
        NativeBorrowedVector<uintptr_t> owners;
        if (!native_history_copy(g_native_map_hover_list, owners) ||
                !owners.valid(maximum) || !owners.size()) return context;
        static thread_local std::array<uintptr_t, maximum> records;
        const size_t count = owners.size();
        if (!native_history_copy_bytes(reinterpret_cast<uintptr_t>(owners.begin),
                records.data(), count * sizeof(uintptr_t)) ||
                std::find(records.begin(), records.begin() + count, record) ==
                    records.begin() + count) return context;
        context.kind = NativeMapHoverKind::Unknown;
    }
    // Ownership comes from a verified native caller or this exact record's
    // membership, never from its spelling or a rectangle's border textures.
    // Retain copied enum/payload values rather than borrowed native pointers.
    std::array<int32_t, 7> fields{};
    if (!native_history_copy(record, fields)) return context;
    if (fields.front() < 0 || fields.front() > 15) return context;
    context.kind = static_cast<NativeMapHoverKind>(fields.front());
    std::copy_n(fields.begin() + 1, context.data.size(), context.data.begin());
    return context;
}

static bool native_info_title_authored(NativeInfoTitleKind kind,
        const NativeString *source, uintptr_t caller) {
    const auto &binding = g_native_info_title_binding;
    const bool farm_name = binding.farm_name_return_address &&
        caller == binding.farm_name_return_address;
    if (!farm_name && kind != NativeInfoTitleKind::Building) return false;
    const ptrdiff_t building_slot = farm_name ? binding.farm_building_slot : binding.building_slot;
    if (!source || !building_slot || !binding.building_name ||
        (!farm_name && (!binding.sheet_slot || !binding.editing_name))) return true;
    // Each profiled draw passes its stack-owned string directly. Its frame
    // holds the live building and, for information titles, the sheet; no
    // string comparison can confuse an authored name with a default label.
    const auto *bytes = reinterpret_cast<const unsigned char *>(source);
    const unsigned char *building = nullptr;
    if (!native_info_title_memory_readable(bytes + building_slot, sizeof(building))) return true;
    std::memcpy(&building, bytes + building_slot, sizeof(building));
    if (!native_info_title_memory_readable(building,
            binding.building_name + sizeof(NativeString))) return true;
    if (!farm_name) {
        const unsigned char *sheet = nullptr;
        if (!native_info_title_memory_readable(bytes + binding.sheet_slot, sizeof(sheet))) return true;
        std::memcpy(&sheet, bytes + binding.sheet_slot, sizeof(sheet));
        if (!native_info_title_memory_readable(sheet, binding.editing_name + 1)) return true;
        unsigned char editing = 0;
        std::memcpy(&editing, sheet + binding.editing_name, sizeof(editing));
        if (editing) return true;
    }
    std::string_view name;
    if (!native_string_view(reinterpret_cast<const NativeString *>(
            building + binding.building_name), &name, 4096)) return true;
    return !name.empty();
}

static void arrange_native_multiline_widget(void *widget) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeCaptionWidgetArrangeFn>(
        g_native_multiline_arrange_hook.original);
    if (!original) return;
    callback.call_native([&] { original(widget); });
    try {
        const auto &binding = g_native_multiline_widget_binding;
        if (!widget || !binding.base_arrange || !binding.minimum_height ||
            !g_overlay.translation_enabled()) return;
        auto *bytes = static_cast<unsigned char *>(widget);
        std::array<int32_t, 4> rect{};
        int32_t minimum_width = 0, minimum_height = 0;
        std::memcpy(rect.data(), bytes + binding.rect, sizeof(rect));
        std::memcpy(&minimum_width, bytes + binding.minimum_width, sizeof(minimum_width));
        std::memcpy(&minimum_height, bytes + binding.minimum_height, sizeof(minimum_height));
        const int64_t width = std::max<int64_t>(
            int64_t(rect[2]) - rect[0] + 1, minimum_width);
        std::string_view source;
        if (width <= 0 || width > 262144 ||
            !native_string_view(reinterpret_cast<const NativeString *>(bytes + binding.text),
                &source, 262144) || source.size() <= static_cast<size_t>(width) ||
            source.find_first_of("\r\n") != std::string_view::npos) return;

        // The native arrange divides bytes by width, but render wraps at
        // the last hyphen/space, retaining that separator in the row. Count
        // that exact no-newline path without touching its shared wrap vector.
        // Only full-width slices are shortened, including a full last slice.
        size_t cursor = 0;
        int32_t rows = 0;
        while (cursor < source.size()) {
            size_t length = std::min(static_cast<size_t>(width), source.size() - cursor);
            if (length == static_cast<size_t>(width)) {
                const size_t separator = source.substr(cursor, length).find_last_of("- ");
                if (separator != std::string_view::npos) length = separator + 1;
            }
            cursor += length;
            ++rows;
        }
        // Read min_h after the original arrange, so shorter/new text resets
        // its old height normally. Parent rows containers immediately use
        // max(rect.height, min_h) to place the following Date/record widget.
        if (rows <= minimum_height) return;
        std::memcpy(bytes + binding.minimum_height, &rows, sizeof(rows));
        // Calling multiline::arrange again would restore its rough count.
        // The base arrange alone reapplies anchors with the corrected height.
        callback.call_native([&] { binding.base_arrange(widget); });
    } catch (...) {}
}

struct NativeMultilineCapture {
    void *widget = nullptr;
    bool initialized = false, invalid = false;
    int x = 0, y = 0, width = 0;
    size_t source_cursor = 0;
    std::string source;
    std::vector<std::string> rows;
    std::vector<uintptr_t> addresses;
};
// This trivial TLS pointer borrows only the current render's stack scope.
// NativeImportHook/NativeInputCallbackScope protect the callback lifetime.
static thread_local NativeMultilineCapture *g_native_multiline_capture = nullptr;

static void capture_native_multiline_row(graphicst *graphics, const NativeString *source) {
    auto *capture = g_native_multiline_capture;
    if (!capture || capture->invalid || !graphics) return;
    try {
        if (!capture->initialized) {
            capture->initialized = true;
            if (!capture->widget) { capture->invalid = true; return; }
            const auto *bytes = static_cast<const unsigned char *>(capture->widget);
            const auto &binding = g_native_multiline_widget_binding;
            std::array<int32_t, 4> rect{};
            int32_t minimum_width = 0;
            std::memcpy(rect.data(), bytes + binding.rect, sizeof(rect));
            std::memcpy(&minimum_width, bytes + binding.minimum_width, sizeof(minimum_width));
            const int64_t width = std::max<int64_t>(
                int64_t(rect[2]) - rect[0] + 1, minimum_width);
            std::string_view complete;
            // Read after widget::render's callbacks, at the first actual row,
            // so a callback that changed str/rect cannot leave stale metadata.
            if (width <= 0 || width > 262144 ||
                !native_string_view(reinterpret_cast<const NativeString *>(bytes + binding.text),
                    &complete, 262144) || !is_native_prose_source(complete)) {
                capture->invalid = true;
                return;
            }
            capture->x = rect[0];
            capture->y = rect[1];
            capture->width = static_cast<int>(width);
            capture->source.assign(complete);
            if (g_native_tooltip_write && rect[0] > g_native_tooltip_write->bounds.x &&
                rect[1] > g_native_tooltip_write->bounds.y &&
                rect[0] < g_native_tooltip_write->bounds.x + g_native_tooltip_write->bounds.w &&
                rect[1] < g_native_tooltip_write->bounds.y + g_native_tooltip_write->bounds.h)
                g_native_tooltip_write->body_source.assign(complete);
        }
        std::string_view row;
        if (graphics->screenx != capture->x ||
            int64_t(graphics->screeny) != int64_t(capture->y) +
                static_cast<int64_t>(capture->rows.size()) ||
            capture->rows.size() >= 16384 ||
            !native_string_view(source, &row, 262144)) {
            capture->invalid = true;
            return;
        }
        // The native wrapper retains word-break spaces in its row strings;
        // explicit newlines alone are removed. Prove every original byte in
        // order, including rows drawn outside clipy. Never join a visible
        // subset and call it the complete paragraph.
        while (capture->source_cursor < capture->source.size() &&
            (capture->source[capture->source_cursor] == '\r' ||
             capture->source[capture->source_cursor] == '\n')) ++capture->source_cursor;
        if (capture->source.compare(capture->source_cursor, row.size(), row) != 0) {
            capture->invalid = true;
            return;
        }
        capture->source_cursor += row.size();
        capture->rows.emplace_back(row);
        capture->addresses.push_back(reinterpret_cast<uintptr_t>(source));
    } catch (...) { capture->invalid = true; }
}

static void capture_native_multiline_widget_render(void *widget, uint32_t tick) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeCaptionWidgetRenderFn>(
        g_native_multiline_widget_hook.original);
    if (native_private_ui_write_active(native_graphics())) {
        if (original) callback.call_native([&] { original(widget, tick); });
        return;
    }
    NativeMultilineCapture capture;
    capture.widget = widget;
    {
        struct Scope {
            NativeMultilineCapture *previous;
            explicit Scope(NativeMultilineCapture &capture)
                : previous(g_native_multiline_capture) { g_native_multiline_capture = &capture; }
            ~Scope() { g_native_multiline_capture = previous; }
        } scope(capture);
        if (original) callback.call_native([&] { original(widget, tick); });
    }
    try {
        if (!capture.initialized || capture.invalid || capture.rows.empty()) return;
        while (capture.source_cursor < capture.source.size() &&
            (capture.source[capture.source_cursor] == '\r' ||
             capture.source[capture.source_cursor] == '\n')) ++capture.source_cursor;
        if (capture.source_cursor != capture.source.size()) return;
        // The shared native wrap vector is reused by the next widget. Only
        // copied bytes and opaque row addresses survive this render; later
        // consumers still require current draw source/position identity.
        remember_native_paragraph(reinterpret_cast<uintptr_t>(widget), capture.width,
            std::move(capture.source), std::move(capture.rows), 0,
            std::move(capture.addresses));
    } catch (...) {}
}

struct NativeMapTrackCaptionHooks {
    NativeEntryHook build_entry;
    NativeCaptionBuildFn build = nullptr;
    NativeCaptionTruncateFn shorten = nullptr;
    NativeCaptionTruncateFn look_shorten = nullptr;
    size_t text_offset = 0;
};
static NativeMapTrackCaptionHooks g_native_map_track_caption_hooks;
struct NativeMapTrackCaption {
    const NativeString *owner;
    std::string shortened, complete;
};
static std::mutex g_native_map_track_caption_mutex;
static std::vector<NativeMapTrackCaption> g_native_map_track_captions;

static void capture_native_map_caption_build(void *record) {
    // The creator and both native draw loops retain this same record+offset
    // string. Invalidate at EVERY rebuild, including short/non-track records,
    // so allocator reuse cannot attach an old expansion to a new caption.
    try {
        const auto *source = reinterpret_cast<const NativeString *>(
            static_cast<const unsigned char *>(record) +
            g_native_map_track_caption_hooks.text_offset);
        std::lock_guard<std::mutex> lock(g_native_map_track_caption_mutex);
        std::erase_if(g_native_map_track_captions,
            [&](const NativeMapTrackCaption &caption) { return caption.owner == source; });
    } catch (...) {}
    if (g_native_map_track_caption_hooks.build)
        g_native_map_track_caption_hooks.build(record);
}

static void capture_native_map_track_shorten_with(NativeString *source, int width,
        NativeCaptionTruncateFn shorten) {
    std::string complete;
    try {
        // LOOK uses a reusable stack string rather than a persistent record.
        // Invalidate even when this new caption needs no shortening, so an
        // old species at the same stack address cannot supply its expansion.
        {
            std::lock_guard<std::mutex> lock(g_native_map_track_caption_mutex);
            std::erase_if(g_native_map_track_captions,
                [&](const NativeMapTrackCaption &caption) { return caption.owner == source; });
        }
        std::string_view text;
        if (width == 50 && native_string_view(source, &text, 4096) &&
            text.size() > 50 && text.starts_with("Track/Spoor: ") &&
            text.find_first_of("\r\n") == std::string_view::npos &&
            text.find('\0') == std::string_view::npos) complete.assign(text);
    } catch (...) {}
    // Capture the native result itself: neither ellipsis assumptions nor an
    // inverse vowel-removal guess can establish the original species/item.
    if (shorten) shorten(source, width);
    try {
        std::string_view shortened;
        if (complete.empty() || !native_string_view(source, &shortened, 4096) ||
            shortened.empty() || shortened.size() > 50 ||
            shortened.size() >= complete.size() ||
            shortened.find_first_of("\r\n") != std::string_view::npos ||
            shortened.find('\0') != std::string_view::npos) return;
        std::lock_guard<std::mutex> lock(g_native_map_track_caption_mutex);
        std::erase_if(g_native_map_track_captions,
            [&](const NativeMapTrackCaption &caption) { return caption.owner == source; });
        if (g_native_map_track_captions.size() >= 512)
            g_native_map_track_captions.erase(g_native_map_track_captions.begin());
        g_native_map_track_captions.push_back(
            {source, std::string(shortened), std::move(complete)});
    } catch (...) {}
}

static void capture_native_map_track_shorten(NativeString *source, int width) {
    capture_native_map_track_shorten_with(source, width,
        g_native_map_track_caption_hooks.shorten);
}

static void capture_native_adventure_look_track_shorten(NativeString *source, int width) {
    // 0x52dee0 first checks length and then tail-calls 0x52d910. Keep that
    // actual wrapper as the native operation, including its short-text path.
    capture_native_map_track_shorten_with(source, width,
        g_native_map_track_caption_hooks.look_shorten);
}

static std::optional<std::string> native_complete_map_track_caption(
        const NativeString *owner, std::string_view visible) {
    std::lock_guard<std::mutex> lock(g_native_map_track_caption_mutex);
    for (const auto &caption : g_native_map_track_captions) {
        if (caption.owner != owner || !visible.starts_with(caption.shortened)) continue;
        const auto suffix = visible.substr(caption.shortened.size());
        auto remainder = suffix;
        constexpr std::string_view ownership = "/yours or companion's";
        if (!remainder.empty() && remainder != ownership) {
            const size_t next = remainder.find('/', 1);
            const auto direction = remainder.substr(0, next);
            constexpr std::array<std::string_view, 8> compass = {
                "/N", "/S", "/E", "/W", "/NE", "/NW", "/SE", "/SW"};
            if (std::find(compass.begin(), compass.end(), direction) == compass.end())
                return std::nullopt;
            remainder = next == std::string_view::npos ? std::string_view{}
                : remainder.substr(next);
        }
        if (!remainder.empty() && remainder != ownership) return std::nullopt;
        return caption.complete + std::string(suffix);
    }
    return std::nullopt;
}

static void capture_native_unit_chooser_squad(uintptr_t unit,
        const std::array<int32_t, 4> &name_rect, int name_width,
        bool show_gender, bool truncate_identity,
        NativeUnitChooserRecord &record) {
    const auto &hooks = g_native_unit_identity_hooks;
    int32_t squad_id = -1, position = -1;
    if (!unit || !hooks.base || !native_history_copy(native_history_object_field(unit, "unit", 0x1f0), squad_id) ||
            !native_history_copy(native_history_object_field(unit, "unit", 0x1f4), position) || squad_id < 0 ||
            position < 0 || position > 65535) return;
    NativeBorrowedVector<uintptr_t> squads;
    if (!native_history_read_vector(native_history_global(0x24e37c0), squads) ||
            squads.size() > 65536) return;
    uintptr_t squad = 0;
    for (size_t index = 0; index < squads.size(); ++index) {
        const auto candidate = native_history_vector_at(squads, index);
        int32_t id = -1;
        if (!candidate || !native_history_copy(candidate, id)) return;
        if (id == squad_id) { squad = candidate; break; }
    }
    if (!squad) return;
    std::string alias, source;
    if (!native_history_copy_string(squad + native_history_layout::squad_alias_offset,
            alias)) return;
    std::optional<NativeHistoryName> generated;
    NativeInputCallbackScope callback;
    const auto destroy = hooks.destroy;
    if (!alias.empty()) source = alias;
    else {
        if (!hooks.english_name) return;
        NativeSearchString output(destroy);
        callback.call_native([&] {
            hooks.english_name(reinterpret_cast<const void *>(squad + 8),
                &output.value, true, false);
        });
        std::string_view value;
        if (!native_string_view(&output.value, &value, 65536) || value.empty()) return;
        source.assign(value);
        NativeHistoryName snapshot;
        if (capture_native_history_name(hooks.base, squad + 8, snapshot))
            generated = std::move(snapshot);
    }
    // The chooser's native callback 3a9380 owns a separate caption above
    // Name: alias/name + ", Pos " + the unit's zero-based squad position.
    // The Name widget renders the actual person one grid row below it.
    record.squad_name_source = std::move(source);
    record.squad_caption_complete_source = record.squad_name_source + ", Pos " +
        std::to_string(position);
    record.squad_caption_source = record.squad_caption_complete_source;
    if (!alias.empty()) record.squad_alias = std::move(alias);
    record.generated_squad_name = std::move(generated);
    record.squad_position = position;
    record.squad_caption_x = name_rect[0];
    record.squad_caption_y = name_rect[1] - 2;
    record.unit_identity_x = name_rect[0];
    record.unit_identity_y = name_rect[1] - 1;
#ifdef _WIN32
    const auto abbreviate = reinterpret_cast<void (*)(NativeString *, int32_t)>(
        native_pe_address(hooks.base, 0x52d910));
    const auto assign = reinterpret_cast<NativeString *(*)(NativeString *, const char *, size_t)>(
        native_pe_address(hooks.base, 0x6f8d0));
#else
    const auto abbreviate = reinterpret_cast<void (*)(NativeString *, int32_t)>(
        dlsym(RTLD_DEFAULT, "_Z17abbreviate_stringRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi"));
    const auto assign = hooks.assign;
#endif
    if (!abbreviate || !assign || name_width < 3) return;
    if (record.squad_caption_source.size() > static_cast<size_t>(name_width)) {
        NativeSearchString header(destroy);
        callback.call_native([&] {
            assign(&header.value, record.squad_caption_complete_source.data(),
                record.squad_caption_complete_source.size());
            abbreviate(&header.value, name_width);
        });
        std::string_view value;
        if (!native_string_view(&header.value, &value, 65536)) return;
        record.squad_caption_source.assign(value);
    }
    if (!hooks.entries[4].installed || !hooks.entries[4].original) return;
    NativeSearchString output(destroy);
    NativeUnitIdentityCall call;
    call.unit = unit;
    call.publish = false;
    {
        NativeUnitIdentityActiveScope scope(call);
        const auto original = reinterpret_cast<NativeUnitIdentityFormatFn>(
            hooks.entries[4].original);
        callback.call_native([&] {
            original(reinterpret_cast<void *>(unit), &output.value, show_gender);
        });
    }
    std::string_view value;
    if (!native_string_view(&output.value, &value, 65536) || value.empty()) return;
    record.unit_identity_complete_source.assign(value);
    record.unit_identity_source = record.unit_identity_complete_source;
    record.unit_identity_target = finish_native_unit_identity_call<4>(
        call, &output.value, show_gender);
    if (value.size() <= static_cast<size_t>(name_width)) return;
    const auto visible_caption = [&](NativeSearchString &caption) -> std::optional<std::string> {
        std::string_view text;
        if (!native_string_view(&caption.value, &text, 65536)) return std::nullopt;
        if (text.size() > static_cast<size_t>(name_width)) {
            callback.call_native([&] { abbreviate(&caption.value, name_width); });
            if (!native_string_view(&caption.value, &text, 65536)) return std::nullopt;
        }
        std::string result(text);
        if (result.size() > static_cast<size_t>(name_width)) {
            result.resize(name_width);
            result.replace(result.size() - 3, 3, "...");
        }
        return result;
    };
    if (truncate_identity) {
        if (const auto visible = visible_caption(output)) record.unit_identity_source = *visible;
        return;
    }
    if (!hooks.entries[2].installed || !hooks.entries[2].original ||
            !hooks.entries[3].installed || !hooks.entries[3].original) return;
    NativeSearchString name(destroy), role(destroy);
    NativeUnitIdentityCall display_call;
    display_call.unit = unit;
    display_call.publish = false;
    {
        NativeUnitIdentityActiveScope scope(display_call);
        callback.call_native([&] {
            reinterpret_cast<NativeUnitIdentityNameOnlyFn>(hooks.entries[2].original)(
                reinterpret_cast<void *>(unit), &name.value);
            reinterpret_cast<NativeUnitIdentityFormatFn>(hooks.entries[3].original)(
                reinterpret_cast<void *>(unit), &role.value, show_gender);
        });
    }
    std::string_view full_name, full_role;
    if (native_string_view(&name.value, &full_name, 65536) &&
            native_string_view(&role.value, &full_role, 65536))
        record.unit_identity_split_source = std::string(full_name) +
            (!full_name.empty() && !full_role.empty() ? " " : "") + std::string(full_role);
    const auto visible_name = visible_caption(name), visible_role = visible_caption(role);
    if (visible_name && visible_role)
        record.unit_identity_source = *visible_name +
            (!visible_name->empty() && !visible_role->empty() ? " " : "") + *visible_role;
}

// A text_truncated widget keeps original_str after arrange() has overwritten
// str. Read both from the LIVE widget on every render, including pages built
// before a hot reload. A resize-only capture cannot recover these cached rows.
// The vtable and field coordinates are native bindings; ownership, lifetime
// and the complete-caption registry are identical on every host.
static void capture_native_unit_chooser_record(void *widget) {
    const uint64_t epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
    struct Widget {
        uintptr_t address = 0, parent = 0;
        std::array<int32_t, 4> rect{};
    };
    const auto base = native_history_profile_base();
    if (!base) return;
    const auto table_address = [&](uintptr_t reference) -> uintptr_t {
#ifdef _WIN32
        return native_pe_address(base, reference);
#else
        switch (reference) {
        case 0x162dc10: return elf_runtime::state().executable.bias + native_reference_va(0x244c458);
        case 0x15f6df0: return elf_runtime::state().executable.bias + native_reference_va(0x244c328);
        case 0x15eb4a8: return elf_runtime::state().executable.bias + native_reference_va(0x244c990);
        case 0x15eef08: return elf_runtime::state().executable.bias + native_reference_va(0x244ccb0);
        case 0x1785bd0: return reinterpret_cast<uintptr_t>(
            dlsym(RTLD_DEFAULT, "_ZTVN7widgets5tableE")) + 16;
        case 0x17868d0: return elf_runtime::state().executable.bias + native_reference_va(0x2487888);
        case 0x162e8e0: return elf_runtime::state().executable.bias + native_reference_va(0x24876d0);
        case 0x162eaf8: return elf_runtime::state().executable.bias + native_reference_va(0x24877d8);
        case 0x1710d18: return elf_runtime::state().executable.bias + native_reference_va(0x244c190);
        default: return 0;
        }
#endif
    };
    const size_t children_offset =
#ifdef _WIN32
        0x160;
#else
        0x180;
#endif
    const size_t options_offset =
#ifdef _WIN32
        0x2c0;
#else
        0x2b8;
#endif
    const auto read_widget = [&](uintptr_t address, uintptr_t reference,
            Widget &result) {
        const auto *bytes = reinterpret_cast<const unsigned char *>(address);
        const uintptr_t expected = table_address(reference);
        if (!expected || !native_info_title_memory_readable(bytes, 0xa1)) return false;
        uintptr_t vtable = 0;
        std::memcpy(&vtable, bytes, sizeof(vtable));
        if (vtable != expected || (bytes[0xa0] & 3) != 3) return false;
        result.address = address;
        std::memcpy(&result.parent, bytes + 0x08, sizeof(result.parent));
        std::memcpy(result.rect.data(), bytes + 0x10, sizeof(result.rect));
        return result.rect[0] >= 0 && result.rect[1] >= 0 &&
            result.rect[2] >= result.rect[0] && result.rect[3] >= result.rect[1];
    };
    const auto children = [&](const Widget &parent,
            std::array<uintptr_t, 3> &vector) {
        const auto *bytes = reinterpret_cast<const unsigned char *>(parent.address);
        if (!native_info_title_memory_readable(bytes, children_offset + 24)) return false;
        std::memcpy(vector.data(), bytes + children_offset, sizeof(vector));
        if (!vector[0] || vector[0] > vector[1] || vector[1] > vector[2] ||
                (vector[1] - vector[0]) % 16 || (vector[2] - vector[0]) % 16 ||
                vector[1] - vector[0] > 8192 * 16) return false;
        return vector[1] > vector[0] && native_info_title_memory_readable(
            reinterpret_cast<const void *>(vector[0]), vector[1] - vector[0]);
    };
    const auto contains = [&](const Widget &parent, const Widget &child) {
        if (child.parent != parent.address) return false;
        std::array<uintptr_t, 3> vector{};
        if (!children(parent, vector)) return false;
        for (uintptr_t at = vector[0]; at < vector[1]; at += 16) {
            uintptr_t member = 0;
            std::memcpy(&member, reinterpret_cast<const void *>(at), sizeof(member));
            if (member == child.address) return true;
        }
        return false;
    };
    Widget text, skills, row, scroll, table, list;
    if (!read_widget(reinterpret_cast<uintptr_t>(widget), 0x162dc10, text) ||
            !read_widget(text.parent, 0x15f6df0, skills) || !contains(skills, text) ||
            !read_widget(skills.parent, 0x15eb4a8, row) || !contains(row, skills) ||
            !read_widget(row.parent, 0x15eef08, scroll) || !contains(scroll, row) ||
            !read_widget(scroll.parent, 0x1785bd0, table) || !contains(table, scroll) ||
            !read_widget(table.parent, 0x17868d0, list) || !contains(list, table)) return;

    // unit_list::build_single_unit reads the four-byte options at +0x2c0.
    // Other unit-list columns may also contain rows of truncated captions.
    const auto *list_bytes = reinterpret_cast<const unsigned char *>(list.address);
    if (!native_info_title_memory_readable(list_bytes, options_offset + 24)) return;
    std::array<uintptr_t, 3> options{};
    std::memcpy(options.data(), list_bytes + options_offset, sizeof(options));
    if (!options[0] || options[0] > options[1] || options[1] > options[2] ||
            (options[1] - options[0]) % 4 || (options[2] - options[0]) % 4 ||
            options[1] - options[0] > 64 * 4 || options[1] == options[0] ||
            !native_info_title_memory_readable(reinterpret_cast<const void *>(options[0]),
                options[1] - options[0])) return;
    bool has_skills = false;
    for (uintptr_t at = options[0]; at < options[1]; at += 4) {
        int32_t option = 0;
        std::memcpy(&option, reinterpret_cast<const void *>(at), sizeof(option));
        has_skills |= option == 10;
    }
    if (!has_skills) return;

    std::array<uintptr_t, 3> members{};
    if (!children(row, members)) return;
    uintptr_t portrait_unit = 0;
    uintptr_t name_unit = 0;
    std::optional<Widget> name_widget;
    bool show_gender = false;
    bool truncate_identity = false;
    int name_width = 0;
    for (uintptr_t at = members[0]; at < members[1]; at += 16) {
        uintptr_t member = 0;
        std::memcpy(&member, reinterpret_cast<const void *>(at), sizeof(member));
        Widget portrait, name;
        if (read_widget(member, 0x162e8e0, portrait) && portrait.parent == row.address) {
            const auto *bytes = reinterpret_cast<const unsigned char *>(member);
            if (native_info_title_memory_readable(bytes, 0x158))
                std::memcpy(&portrait_unit, bytes + 0x150, sizeof(portrait_unit));
        } else if (read_widget(member, 0x162eaf8, name) && name.parent == row.address) {
            const auto *bytes = reinterpret_cast<const unsigned char *>(member);
            if (!native_info_title_memory_readable(bytes, 0x15b) || !bytes[0x159]) continue;
            std::memcpy(&name_unit, bytes + 0x150, sizeof(name_unit));
            name_widget = name;
            show_gender = bytes[0x158] != 0;
            truncate_identity = bytes[0x15a] != 0;
            int32_t minimum_width = 0;
            std::memcpy(&minimum_width, bytes + 0xc4, sizeof(minimum_width));
            name_width = std::max(name.rect[2] - name.rect[0] + 1, minimum_width);
        }
    }
    if (!portrait_unit) return;
    const auto *graphics = native_graphics();
    if (!graphics || !native_info_title_memory_readable(graphics, sizeof(*graphics)) ||
            graphics->dimx <= 0 || graphics->dimx > 1000 ||
            graphics->dimy <= 0 || graphics->dimy > 1000) return;
    const auto in_grid = [&](const Widget &part) {
        return part.rect[2] < graphics->dimx && part.rect[3] < graphics->dimy;
    };
    if (!in_grid(list) || !in_grid(scroll) || !in_grid(row) ||
            row.rect[0] < scroll.rect[0] || row.rect[1] < scroll.rect[1] ||
            row.rect[1] + 2 > scroll.rect[3]) return;
    // Native row render 0x142af10 repeats rectangle[1] at L+5..R-1,
    // caps at R=max(unit_list.x2,row.x2)-1, and always paints three rows.
    // The row's arranged width can be narrower than its rendered caption.
    const int left = row.rect[0] + 5;
    const int right = std::max(list.rect[2], row.rect[2]) - 1;
    if (right <= left || text.rect[0] < left || text.rect[0] >= right) return;
    NativeUnitChooserRecord record;
    record.box = {left, row.rect[1], right - left, 3};
    record.viewport = {scroll.rect[0], scroll.rect[1],
        scroll.rect[2] - scroll.rect[0] + 1, scroll.rect[3] - scroll.rect[1] + 1};
    record.panel = {list.rect[0], list.rect[1],
        list.rect[2] - list.rect[0] + 1, list.rect[3] - list.rect[1] + 1};
    record.skill_x = text.rect[0];
    // Both direct children retain the same native unit; this establishes the
    // source of a squad heading without inferring aliases from their spelling.
    if (name_widget && name_unit == portrait_unit && in_grid(*name_widget))
        capture_native_unit_chooser_squad(portrait_unit, name_widget->rect,
            name_width, show_gender, truncate_identity, record);
    // unit_list's constructor creates a direct textbox child named
    // "Filter box" (0x1424994), then anchors its three rows at the bottom.
    std::array<uintptr_t, 3> list_members{};
    if (children(list, list_members)) {
        for (uintptr_t at = list_members[0]; at < list_members[1]; at += 16) {
            uintptr_t member = 0;
            std::memcpy(&member, reinterpret_cast<const void *>(at), sizeof(member));
            Widget filter;
            if (!read_widget(member, 0x1710d18, filter) || filter.parent != list.address ||
                    !in_grid(filter) || filter.rect[1] < scroll.rect[3] + 1) continue;
            const auto *bytes = reinterpret_cast<const unsigned char *>(member);
            int32_t type = -1;
            if (!native_history_copy(native_history_object_member(member,
                    "widget_textbox", "textbox_type"), type)) continue;
            std::string value;
            if (type == 0 && native_history_copy_string(member + 0x80, value) &&
                    value == "Filter box") {
                record.search_y = filter.rect[1];
                break;
            }
        }
    }
    remember_native_unit_chooser_record(record, epoch);
}

static void capture_native_truncated_widget_render(void *widget, uint32_t tick) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeCaptionWidgetRenderFn>(
        g_native_caption_widget_hook.original);
    if (original) callback.call_native([&] { original(widget, tick); });
    if (native_private_ui_write_active(native_graphics())) return;
    try {
        // Short skills still prove their live record. Capture before the
        // complete-caption path excludes visible == original_str.
        capture_native_unit_chooser_record(widget);
        if (!widget) return;
        const auto *bytes = static_cast<const unsigned char *>(widget);
        const auto &binding = g_native_caption_widget_binding;
        std::array<int32_t, 4> rect{};
        std::memcpy(rect.data(), bytes + binding.rect, sizeof(rect));
        // The common caption registry records a left-origin native draw.
        if (bytes[binding.justification] != 0) return;
        std::string_view visible, complete;
        if (!native_string_view(reinterpret_cast<const NativeString *>(bytes + binding.text),
                &visible, 4096) ||
            !native_string_view(reinterpret_cast<const NativeString *>(bytes + binding.original_text),
                &complete, 4096) || visible.empty() || visible == complete ||
            visible.find('\0') != std::string_view::npos ||
            complete.find('\0') != std::string_view::npos ||
            complete.find_first_of("\r\n") != std::string_view::npos) return;
        const auto *graphics = native_graphics();
        if (!graphics || rect[0] < 0 || rect[1] < 0 || rect[1] >= graphics->dimy ||
            rect[0] >= graphics->dimx || rect[2] < rect[0]) return;
        // arrange() truncates to max(rect width, min_width), not to the rect
        // alone (PE 0x1419740..0x141975f). Roster activities set min_width=35,
        // so a narrow column can still hold a longer str containing dots.
        // The native draw then clips that str a second time. Its shared draw
        // hook already captured the exact displayed bytes -> str relation;
        // extend that same relation to original_str before replacing it.
        // Rejecting str.size() > rect width lost the original book title and
        // left Read/Copy activities on an unrecoverable truncated subtitle.
        std::string drawn(visible);
        for (const auto &caption : captured_clipped_captions()) {
            if (caption.x == rect[0] && caption.y == rect[1] &&
                caption.complete == visible) {
                drawn = caption.visible;
                break;
            }
        }
        if (drawn.empty() || drawn.size() >
                static_cast<size_t>(graphics->dimx - rect[0])) return;
        // Consumers still require the exact current visible bytes and native
        // control boundaries; no object pointer survives this callback.
        remember_clipped_caption(rect[0], rect[1], drawn, complete);
    } catch (...) {}
}

struct NativeClippedCaptionHooks {
    NativeEntryHook resize_entry, draw_entry;
    NativeEntryHook truncate_entry, flag_draw_entry;
    NativeEntryHook top_draw_entry, top_flag_draw_entry;
    struct DefaultResize {
        NativeEntryHook entry;
        NativeCaptionDefaultResizeFn original = nullptr;
    };
    // The native compiler emits separate clones for different UI callers.
    // Each trampoline must return to its OWN clone; capture policy is shared.
    std::array<DefaultResize, 2> default_resizes;
    NativeCaptionResizeFn resize = nullptr;
    NativeCaptionDrawFn draw = nullptr;
    NativeCaptionTruncateFn truncate = nullptr;
    NativeCaptionTruncateFn roster_shorten = nullptr;
    NativeCaptionFlagDrawFn flag_draw = nullptr;
    NativeCaptionDrawFn top_draw = nullptr;
    NativeCaptionSimpleDrawFn top_simple_draw = nullptr;
    NativeCaptionFlagDrawFn top_flag_draw = nullptr;
};
static NativeClippedCaptionHooks g_native_clipped_caption_hooks;
struct NativeClippedPending {
    uint64_t epoch = 0;
    bool busy = false;
    std::unordered_map<const NativeString *, PendingNativeField> fields;
};
static NativeClippedPending &native_clipped_pending() {
    return reloadable_thread_state<NativeClippedPending, struct ClippedCaptionTag>();
}

static void capture_native_roster_shorten(NativeString *source, int width) {
    auto &state = native_clipped_pending();
    const auto shorten = g_native_clipped_caption_hooks.roster_shorten;
    if (state.busy) {
        if (shorten) shorten(source, width);
        return;
    }
    struct CaptureScope {
        bool &busy;
        explicit CaptureScope(bool &value) : busy(value) { busy = true; }
        ~CaptureScope() { busy = false; }
    } scope(state.busy);
    PendingNativeField pending;
    try {
        const auto epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
        if (state.epoch != epoch) { state.fields.clear(); state.epoch = epoch; }
        state.fields.erase(source);
        std::string_view text;
        if (width >= 4 && width <= 1024 &&
            native_string_view(source, &text, 4096) && text.size() > size_t(width) &&
            text.find_first_of("\r\n") == std::string_view::npos &&
            text.find('\0') == std::string_view::npos) {
            pending.owner = source;
            pending.epoch = epoch;
            pending.width = static_cast<size_t>(width);
            pending.complete.assign(text);
        }
    } catch (...) { pending = {}; }
    // Keep nested string resize hooks from replacing the original source
    // with an intermediate abbreviation. DF retains its native operation.
    if (shorten) shorten(source, width);
    try {
        std::string_view shortened;
        if (pending.complete.empty() ||
            pending.epoch != g_embark_item_capture_epoch.load(std::memory_order_acquire) ||
            !native_string_view(source, &shortened, 4096) || shortened.empty() ||
            shortened.find_first_of("\r\n") != std::string_view::npos ||
            shortened.find('\0') != std::string_view::npos) return;
        pending.visible.assign(shortened);
        // Each bound caller performs this exact final clipping operation
        // inline. Preserve DF's actual vowel removal, including captions
        // that fit afterwards and therefore never receive an ellipsis.
        if (pending.visible.size() > pending.width) {
            pending.visible.resize(pending.width);
            pending.visible.replace(pending.width - 3, 3, "...");
        }
        if (pending.visible != pending.complete && state.fields.size() < 512)
            state.fields.emplace(source, std::move(pending));
        // The shared draw consumes this only for the same live string,
        // epoch and exact final bytes. The roster rebuilds it each render.
    } catch (...) {}
}

static void remember_native_clipped_resize(NativeString *source, size_t width, char fill,
        bool zero_pad_one = false, bool plain_shrink = false) {
    if (native_private_ui_write_active(native_graphics())) return;
    auto &state = native_clipped_pending();
    if (!state.busy) {
        state.busy = true;
        try {
            const auto epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
            if (state.epoch != epoch) { state.fields.clear(); state.epoch = epoch; }
            // Some native callers write dots even when resize keeps the same
            // length. Exact draw matching rejects ordinary no-op resizes.
            // Invalid or reused owners cancel their identity immediately.
            PendingNativeField previous;
            const auto found = state.fields.find(source);
            if (found != state.fields.end()) {
                previous = std::move(found->second);
                state.fields.erase(found);
            }
            std::string_view text;
            if (width >= (plain_shrink ? 1u : 4u) && width <= 1024 && fill == 0 &&
                native_string_view(source, &text, 4096) &&
                (text.size() >= width || (zero_pad_one && text.size() + 1 == width)) &&
                text.find_first_of("\r\n") == std::string::npos) {
                const bool chained = previous.owner == source && previous.epoch == epoch &&
                    previous.visible == text && !previous.complete.empty();
                PendingNativeField pending;
                if (!text.ends_with("...") || chained)
                    capture_native_field_resize(pending, source, width, false, false, zero_pad_one,
                        plain_shrink);
                // Preserve the first complete source only for an exact
                // intermediate value belonging to the same owner and epoch.
                if (!pending.complete.empty() && chained)
                    pending.complete = std::move(previous.complete);
                if (!pending.complete.empty() && state.fields.size() < 512)
                    state.fields.emplace(source, std::move(pending));
            }
        } catch (...) {}
        state.busy = false;
    }
}

static void capture_native_clipped_resize(NativeString *source, size_t width, char fill) {
    remember_native_clipped_resize(source, width, fill);
    if (g_native_clipped_caption_hooks.resize)
        g_native_clipped_caption_hooks.resize(source, width, fill);
}

static void capture_native_plain_clipped_resize(NativeString *source, size_t width, char fill) {
    // CATEGORY_DESCRIPTION and Needs have plain byte truncation: their
    // producer never overwrites the last three characters with dots.
    remember_native_clipped_resize(source, width, fill, false, true);
    if (g_native_clipped_caption_hooks.resize)
        g_native_clipped_caption_hooks.resize(source, width, fill);
}


static void capture_native_clipped_dot_padding_resize(NativeString *source, size_t width, char fill) {
    // A verified caller can grow by one zero byte before overwriting that byte
    // and the final two source characters with dots. Ordinary resize entries
    // keep rejecting growth; this binding still requires the exact final draw.
    remember_native_clipped_resize(source, width, fill, true);
    if (g_native_clipped_caption_hooks.resize)
        g_native_clipped_caption_hooks.resize(source, width, fill);
}

static void capture_native_clipped_truncate(NativeString *source, int width) {
    // The native truncate helper can inline string::resize; capture at the
    // helper entry too instead of relying on a resize call that may not exist.
    if (width >= 0) remember_native_clipped_resize(source, static_cast<size_t>(width), 0);
    if (g_native_clipped_caption_hooks.truncate)
        g_native_clipped_caption_hooks.truncate(source, width);
}

template<size_t Slot>
static void capture_native_clipped_default_resize(NativeString *source, size_t width) {
    // Native compiler clones can specialize the fill argument to zero and
    // shorten strings without calling either generic resize or truncate.
    remember_native_clipped_resize(source, width, 0);
    if (const auto original = g_native_clipped_caption_hooks.default_resizes[Slot].original)
        original(source, width);
}

static bool native_caption_draw_outside_clip_y(const graphicst *graphics,
        const NativeString *source) {
    if (!graphics || graphics->dimx <= 0 || graphics->dimx > 1000 ||
            graphics->dimy <= 0 || graphics->dimy > 1000 ||
            (graphics->screeny >= graphics->clipy[0] &&
             graphics->screeny <= graphics->clipy[1])) return false;
    std::string_view text;
    // A single-line draw cannot contribute glyphs to another visible row.
    // Keep multiline sources on the full path rather than assuming how a
    // native addst variant handles line breaks.
    return native_string_view(source, &text, 4096) &&
        text.find_first_of("\r\n") == std::string_view::npos;
}

static NativeMapHoverContext native_map_hover_context_for_draw(
        const graphicst *graphics, const NativeString *source, uintptr_t caller) {
    if (native_private_ui_write_active(graphics) ||
            native_caption_draw_outside_clip_y(graphics, source)) return {};
    // A known caller or exact current ui_look_list owner proves the source,
    // independently of which native addst variant draws its actual glyphs.
    return native_map_hover_context(caller, source);
}

static void discard_native_clipped_draw_source(const NativeString *source) {
    auto &state = native_clipped_pending();
    if (state.busy) return;
    const auto epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
    if (state.epoch != epoch) {
        state.fields.clear();
        state.epoch = epoch;
    } else {
        state.fields.erase(source);
    }
}

static PendingNativeField remember_native_clipped_draw(graphicst *graphics, const NativeString *source,
        NativeJustification, int width, bool top_layer = false,
        NativeInfoTitleKind info_title_kind = NativeInfoTitleKind::None,
        bool info_title_authored = false, int info_title_right = -1,
        NativeCivilizationField civilization_field = NativeCivilizationField::None,
        bool mission_title = false, int mission_title_right = -1,
        NativeMapHoverContext map_hover = {},
        NativeLocationPickerField location_picker_field = NativeLocationPickerField::None,
        std::optional<SDL_Rect> location_picker_box = std::nullopt,
        std::optional<NativeFortressLaborCaption> fortress_labor_caption = std::nullopt,
        NativeTravelBuildingField travel_building_field = NativeTravelBuildingField::None,
        uintptr_t native_caller = 0,
        std::optional<std::array<long, 4>> capture_clip = std::nullopt) {
    PendingNativeField captured;
    auto &state = native_clipped_pending();
    // Both supported addst implementations draw at the current cursor and
    // ignore justification (PE 0xad9960, ELF libg_src_lib 0xa5170/0xa4ea0;
    // also g_src/graphics.cpp). In particular justify_cont is a real draw,
    // used by the overview's Squad label before its separately colored value.
    // Do not lose that overwrite evidence through a platform-specific filter.
    if (!state.busy) {
        state.busy = true;
        try {
            const auto epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
            if (state.epoch != epoch) { state.fields.clear(); state.epoch = epoch; }
            PendingNativeField pending;
            const auto found = state.fields.find(source);
            if (found != state.fields.end()) {
                pending = std::move(found->second);
                state.fields.erase(found);
            }
            std::string_view visible;
            if (graphics && width >= 0 &&
                graphics->screenx >= 0 && graphics->screenx < graphics->dimx &&
                graphics->screeny >= 0 && graphics->screeny < graphics->dimy &&
                native_string_view(source, &visible, 4096)) {
                std::string complete;
                if (const auto map_caption = native_complete_map_track_caption(source, visible))
                    complete = *map_caption;
                if (pending.owner == source && pending.epoch == epoch &&
                    visible == pending.visible)
                    complete = std::move(pending.complete);
                if (!complete.empty()) {
                    captured.owner = source;
                    captured.epoch = epoch;
                    captured.visible.assign(visible);
                    captured.complete = complete;
                }
                // Publish the visible draw and its proven source together:
                // cached frames retain both until another native draw replaces
                // this position, even after the per-frame epoch advances.
                // Positive-width draws publish their actual glyphs after
                // the native routine returns, carrying this complete source.
                if (width == 0) {
                    remember_native_drawn_text_row(graphics->screenx, graphics->screeny, visible,
                        reinterpret_cast<uintptr_t>(source), graphics,
                        top_layer, complete, info_title_kind, info_title_authored, info_title_right,
                        civilization_field, mission_title, mission_title_right, capture_clip, epoch,
                        map_hover, location_picker_field, location_picker_box, fortress_labor_caption,
                        travel_building_field, native_caller);
                    if (!complete.empty())
                        remember_clipped_caption(graphics->screenx, graphics->screeny,
                            visible, complete);
                }
            }
        } catch (...) {}
        state.busy = false;
    }
    return captured;
}

// addst's positive-width path may abbreviate a private copy. Even width zero
// can be shortened by the widget's clipx (e.g. a long Video setting beside its
// numeric editor). Pair the source with the glyphs the ORIGINAL draw wrote;
// an undrawn suffix must not invalidate ownership of the entire visible label.
template<typename Draw>
static void capture_native_limited_caption_draw(graphicst *graphics, const NativeString *source,
        NativeJustification just, int width, Draw &&draw, bool top_layer = false,
        NativeInfoTitleKind info_title_kind = NativeInfoTitleKind::None,
        bool info_title_authored = false,
        std::shared_ptr<const NativeEmbarkReclaimHistoryParagraph> reclaim_history = {},
        bool reclaim_history_draw = false,
        NativeCivilizationField civilization_field = NativeCivilizationField::None,
        bool mission_title = false,
        NativeMapHoverContext map_hover = {},
        NativeLocationPickerField location_picker_field = NativeLocationPickerField::None,
        NativeTravelBuildingField travel_building_field = NativeTravelBuildingField::None,
        uintptr_t native_caller = 0,
        std::optional<std::array<long, 4>> capture_clip = std::nullopt) {
    if (native_private_ui_write_active(graphics)) { draw(); return; }
    const auto inventory_role = native_adventure_inventory_role(
        native_caller, reinterpret_cast<uintptr_t>(source));
    const std::array<long, 4> draw_clip = capture_clip.value_or(graphics
        ? std::array<long, 4>{graphics->clipx[0], graphics->clipx[1],
                              graphics->clipy[0], graphics->clipy[1]}
        : std::array<long, 4>{});
    auto *tooltip_write = g_native_tooltip_write;
    const int tooltip_x = graphics ? graphics->screenx : -1;
    const int tooltip_y = graphics ? graphics->screeny : -1;
    if (tooltip_write && graphics && !top_layer) {
        const auto &box = tooltip_write->bounds;
        std::string_view text;
        if (graphics->dimx == tooltip_write->dimx && graphics->dimy == tooltip_write->dimy &&
            tooltip_y > box.y && tooltip_y < box.y + box.h - 1 &&
            native_string_view(source, &text, 4096) &&
            text.find_first_of("\r\n") == std::string_view::npos) {
            // Keep the intended wrapped line before clipx/clipy or a later
            // image can remove any of its bytes. Visibility is a separate mask.
            for (size_t offset = 0; offset < text.size(); ++offset) {
                const int64_t x = int64_t(tooltip_x) + static_cast<int64_t>(offset);
                if (x > box.x && x < int64_t(box.x) + box.w - 1)
                    tooltip_write->rows[tooltip_y - box.y][static_cast<size_t>(x - box.x)] = text[offset];
            }
        }
    }
    if (native_caption_draw_outside_clip_y(graphics, source)) {
        // Scroll lists still invoke addst for clipped rows. Their native
        // cursor advancement must run, but caption ownership and widget
        // memory walks cannot affect any visible cell. Consume any pending
        // resize identity now so a reused string cannot inherit this row's
        // complete source. Tooltip intent and multiline document collection
        // occur before this visibility filter.
        discard_native_clipped_draw_source(source);
        draw();
        return;
    }
    int info_title_right = -1, mission_title_right = -1;
    if ((info_title_kind != NativeInfoTitleKind::None || mission_title) &&
            graphics && graphics->dimx > 0) {
        int right = static_cast<int>(std::clamp<int64_t>(
            int64_t(graphics->clipx[1]) + 1, 0, graphics->dimx));
        if (width > 0) right = static_cast<int>(std::min<int64_t>(
            right, int64_t(graphics->screenx) + width));
        if (info_title_kind == NativeInfoTitleKind::ItemList) {
            // This caller clips the string manually without changing clipx.
            // Keep its actual title column, not the enclosing screen width.
            const auto &binding = g_native_info_title_binding;
            int32_t list_right = 0;
            const auto *slot = source && binding.item_list_right_slot
                ? reinterpret_cast<const unsigned char *>(source) + binding.item_list_right_slot
                : nullptr;
            if (slot &&
                    native_info_title_memory_readable(slot, sizeof(list_right))) {
                std::memcpy(&list_right, slot, sizeof(list_right));
                right = std::min(right, static_cast<int>(std::clamp<int64_t>(
                    int64_t(list_right) - binding.item_list_right_inset,
                    graphics->screenx, graphics->dimx)));
            } else {
                const auto &pending = native_clipped_pending().fields;
                const auto found = pending.find(source);
                if (found != pending.end() && found->second.width)
                    right = std::min<int64_t>(right,int64_t(graphics->screenx)+found->second.width);
                else right = graphics->screenx;
            }
        }
        if (info_title_kind != NativeInfoTitleKind::None) info_title_right = right;
        if (mission_title) mission_title_right = right;
    }
    std::optional<SDL_Rect> location_picker_box;
    std::optional<NativeFortressLaborCaption> fortress_labor_caption;
    try {
        if (!top_layer) {
            location_picker_box = native_location_picker_draw_box(
                graphics, source, location_picker_field, native_caller);
            fortress_labor_caption = capture_native_fortress_labor_caption(
                reinterpret_cast<uintptr_t>(source));
        }
    } catch (...) {}
    const auto captured_source = remember_native_clipped_draw(graphics, source, just, width, top_layer,
        info_title_kind, info_title_authored, info_title_right, civilization_field,
        mission_title, mission_title_right, map_hover,
        location_picker_field, location_picker_box, fortress_labor_caption, travel_building_field,
        native_caller, capture_clip);
    std::string complete;
    std::optional<std::string> squad_alias_target;
    int x = -1, y = -1, dimx = 0, dimy = 0;
    const unsigned char *screen = nullptr;
    uint64_t epoch = 0;
    try {
        std::string_view text;
        if (!native_clipped_pending().busy && graphics &&
            (top_layer ? graphics->screen_top : graphics->screen) &&
            width >= 0 &&
            graphics->dimx > 0 && graphics->dimx <= 1000 &&
            graphics->dimy > 0 && graphics->dimy <= 1000 &&
            graphics->screenx >= 0 && graphics->screenx < graphics->dimx &&
            graphics->screeny >= 0 && graphics->screeny < graphics->dimy &&
            native_string_view(source, &text, 4096) && !text.empty() &&
            text.find_first_of("\r\n") == std::string_view::npos &&
            text.find('\0') == std::string_view::npos &&
            (width > 0 || graphics->screenx < graphics->clipx[0] ||
             int64_t(graphics->screenx) + static_cast<int64_t>(text.size()) >
                 int64_t(graphics->clipx[1]) + 1 ||
             native_adventure_crafting_role(native_caller) != NativeAdventureCraftingRole::None ||
             inventory_role != NativeAdventureInventoryRole::None)) {
            complete.assign(text);
            x = graphics->screenx;
            y = graphics->screeny;
            dimx = graphics->dimx;
            dimy = graphics->dimy;
            screen = top_layer ? graphics->screen_top : graphics->screen;
            epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
            if (captured_source.owner == source && captured_source.epoch == epoch &&
                    captured_source.visible == text && !captured_source.complete.empty()) {
                complete = captured_source.complete;
            } else if (width == 0) {
                // A resize capture may already know the original text before
                // this second, widget-level clip. Preserve that identity.
                for (const auto &caption : captured_clipped_captions()) {
                    if (caption.x == x && caption.y == y && caption.visible == text) {
                        complete = caption.complete;
                        break;
                    }
                }
            }
        }
    } catch (...) { complete.clear(); }
    // Freeze the memory-proven alias binding before drawing or clipping can
    // change its visible bytes. A left-clipped suffix is still authored text.
    try {
        if (!complete.empty())
            squad_alias_target = native_squad_alias_source_target(
                complete, reinterpret_cast<uintptr_t>(source));
    } catch (...) {}
    draw();
    if (complete.empty()) return;
    try {
        if ((top_layer ? graphics->screen_top : graphics->screen) != screen ||
            graphics->dimx != dimx || graphics->dimy != dimy ||
            graphics->screeny != y || graphics->screenx <= x ||
            (graphics->screenx > dimx && info_title_kind == NativeInfoTitleKind::None &&
                !mission_title && !fortress_labor_caption &&
                travel_building_field == NativeTravelBuildingField::None &&
                inventory_role == NativeAdventureInventoryRole::None) ||
            (width > 0 && graphics->screenx - x > width) ||
            epoch != g_embark_item_capture_epoch.load(std::memory_order_acquire)) return;
        // addchar advances the cursor even outside clipx/clipy. Its verified
        // base entry writes screen, irrespective of top_in_use (PE 0xbb190).
        // The separately bound top_addst entry instead writes screen_top.
        if (y < graphics->clipy[0] || y > graphics->clipy[1]) return;
        const int first = static_cast<int>(std::clamp<int64_t>(
            graphics->clipx[0], x, std::min(graphics->screenx, dimx)));
        const int last = static_cast<int>(std::clamp<int64_t>(
            int64_t(graphics->clipx[1]) + 1, first, std::min(graphics->screenx, dimx)));
        if (first >= last) return;
        std::string visible;
        visible.reserve(static_cast<size_t>(last - first));
        for (int column = first; column < last; ++column) {
            const unsigned char ch = screen[(static_cast<size_t>(column) * dimy + y) * 8];
            if (!ch) return;
            visible += static_cast<char>(ch);
        }
        if (reclaim_history_draw) {
            // The caller holds the history mutex across the native grid write
            // and this publication. SDL cannot see the new row with an old
            // event binding, or lose the old batch to a caption epoch change.
            auto &batch = g_native_embark_reclaim_history_draws;
            if (batch.grid == screen && batch.dimx == dimx && batch.dimy == dimy &&
                    batch.rows.size() < 12) {
                NativeDrawnTextRow row{first, y, visible, reinterpret_cast<uintptr_t>(source)};
                row.reclaim_history = std::move(reclaim_history);
                batch.rows.push_back(std::move(row));
            }
        }
        // Width zero already retained its complete draw above. Keep it for
        // paragraph recovery; the clipped-caption registry independently
        // proves the visible prefix to the map text filter.
        if (width > 0 || first != x || info_title_kind != NativeInfoTitleKind::None ||
                civilization_field != NativeCivilizationField::None || mission_title ||
                location_picker_field != NativeLocationPickerField::None || fortress_labor_caption ||
                travel_building_field != NativeTravelBuildingField::None ||
                native_adventure_crafting_role(native_caller) != NativeAdventureCraftingRole::None ||
                inventory_role != NativeAdventureInventoryRole::None)
            remember_native_drawn_text_row(first, y, visible,
                reinterpret_cast<uintptr_t>(source), graphics, top_layer,
                first == x ? std::string_view(complete) : std::string_view{},
                first == x ? info_title_kind : NativeInfoTitleKind::None,
                info_title_authored, info_title_right, civilization_field,
                first == x && mission_title, mission_title_right, draw_clip, epoch,
                map_hover, location_picker_field, location_picker_box, fortress_labor_caption,
                travel_building_field, native_caller,
                first == x ? squad_alias_target : squad_alias_target
                    ? std::optional<std::string>(native_text_to_utf8(visible)) : std::nullopt);
        if (first == x && visible != complete)
            remember_clipped_caption(x, y, visible, complete);
    } catch (...) {}
}

static bool native_legacy_editable_draw(uintptr_t caller, const NativeString *source) {
#ifdef _WIN32
    const uintptr_t base = native_history_profile_base();
    if (!base) return false;
    // The stockpile and zone name boxes draw building.name (+0xd0)
    // directly, with separate calls while unfocused and while editing.
    // These stored input bytes stay authored even when they spell a UI
    // category. Empty names use different generated-caption calls.
    if (caller == native_pe_address(base, 0x3e611c) ||
            caller == native_pe_address(base, 0x3e6195) ||
            caller == native_pe_address(base, 0x3e82a7) ||
            caller == native_pe_address(base, 0x3e895e)) return true;
    uintptr_t owner = 0;
    size_t string_offset = 0, entering_offset = 0;
    bool has_open = true;
    // Each legacy renderer copies this one owned edit string before addst.
    // Its ordinary list/button captions have different callers. Reference
    // coordinates are resolved for both supported PE editions.
    if (caller == native_pe_address(base, 0x3a20c7)) {
        owner = native_reference_address(base, 0x18a2710);
        string_offset = native_history_layout::stocks_filter_offset;
        entering_offset = native_history_layout::stocks_entering_filter_offset;
    } else if (caller == native_pe_address(base, 0x382106)) {
        // construction_interfacest.item_filter / entering_item_filter.
        owner = native_reference_address(base, 0x18a1788);
        string_offset = 0x68;
        entering_offset = 0x88;
        has_open = false; // Construction has category state, not an open bit.
    } else if (caller == native_pe_address(base, 0x380e14)) {
        // custom_stockpile_interfacest.spec_filter / entering_spec_filter.
        owner = native_reference_address(base, 0x18a4238);
        string_offset = 0x18;
        entering_offset = 0x38;
    } else if (caller == native_pe_address(base, 0x38d4af)) {
        // create_work_order_interfacest.job_filter / entering_job_filter.
        owner = native_reference_address(base, 0x18a7200);
        string_offset = 0x50;
        entering_offset = 0x70;
    } else return false;
    if (!owner) return false;
    uint8_t open = 0, entering = 0;
    std::string text;
    const auto field = [&](size_t offset) -> uintptr_t {
        return offset <= UINTPTR_MAX - owner ? owner + offset : 0;
    };
    // entering records keyboard focus, not whether this field is editable.
    // Retain the owned input while unfocused too, without comparing words.
    return (!has_open || (native_history_copy(owner, open) && open == 1)) &&
        native_history_copy(field(entering_offset), entering) &&
        entering <= 1 && native_history_copy_string(
            field(string_offset), text);
#else
    (void)caller;
    const uintptr_t base = native_history_profile_base();
    if (!base || !source) return false;
    struct Field { uintptr_t owner; const char *type, *member; bool open; };
    const Field fields[]{
        {native_reference_address(base,0x22f7408),"stocks_interfacest","item_filter",true},
        {native_reference_address(base,0x22f8fe0),"custom_stockpile_interfacest","spec_filter",true},
        {native_reference_address(base,0x22f6420),"construction_interfacest","item_filter",false},
        {native_reference_address(base,0x22fc048),"create_work_order_interfacest","job_filter",true},
    };
    // ELF's normal copies are rendered by textbox widgets, whose actual
    // editable scope already protects them. Direct legacy draws retain the
    // owned field itself; recognize its address rather than its spelling.
    for (const auto &field : fields) {
        if (!field.owner || reinterpret_cast<uintptr_t>(source) !=
                native_history_object_member(field.owner,field.type,field.member,sizeof(NativeString))) continue;
        uint8_t open = 0;
        if (field.open && (!native_history_copy(field.owner,open) || open != 1)) continue;
        std::string value;
        if (native_history_copy_string(reinterpret_cast<uintptr_t>(source),value)) return true;
    }
    return false;
#endif
}

static bool native_site_government_link(uintptr_t link, bool &qualifies,
        uint32_t &flags) {
    qualifies = false;
    int32_t location = -1, native_time = 0;
    if (!link || !native_history_copy(native_history_object_field(link,
            "entity_site_link", 0x1c, sizeof(flags)), flags) ||
            !native_history_copy(native_history_object_field(link,
                "entity_site_link", 0x10, sizeof(location)), location) ||
            !native_history_copy(native_history_object_field(link,
                "entity_site_link", 0x14, sizeof(native_time)), native_time)) return false;
    // Match 9b4e70's native predicate. The +14 scalar is deliberately not
    // interpreted as an end date or replaced with a guessed ownership field.
    qualifies = (flags & 1u) != 0 && location == 0 && native_time == -1;
    return true;
}

static bool native_site_government_matches(uintptr_t site, int32_t entity_id,
        bool &matches) {
    matches = false;
    NativeBorrowedVector<uintptr_t> links;
    if (!native_history_read_vector(native_history_object_field(site,
            "world_site", 0x428, sizeof(links)), links) || links.size() > 4096) return false;
    for (size_t i = 0; i < links.size(); ++i) {
        const uintptr_t link = native_history_vector_at(links, i);
        bool qualifies = false;
        uint32_t flags = 0;
        if (!native_site_government_link(link, qualifies, flags)) return false;
        if (!qualifies) continue;
        int32_t id = -1;
        if (!native_history_copy(native_history_object_field(link,
                "entity_site_link", 4, sizeof(id)), id)) return false;
        // Only the first qualifying relation selects the native government.
        matches = id == entity_id;
        return true;
    }
    return true;
}

static bool native_site_government_headquarters(uintptr_t link, bool &headquarters) {
    headquarters = false;
    NativeBorrowedVector<uintptr_t> profiles;
    if (!native_history_read_vector(native_history_object_field(link,
            "entity_site_link", 0x30, sizeof(profiles)), profiles) || profiles.size() > 4096)
        return false;
    for (size_t i = 0; i < profiles.size(); ++i) {
        const uintptr_t profile = native_history_vector_at(profiles, i);
        uint32_t purposes = 0;
        if (!profile || !native_history_copy(native_history_object_field(profile,
                "entity_site_ab_profilest", 4, sizeof(purposes)), purposes)) return false;
        headquarters = headquarters || (purposes & (1u << 2)) != 0;
    }
    return true;
}

static bool native_site_government_position_roles(uintptr_t entity,
        bool &bandit_leader, bool &abbot_leader) {
    bandit_leader = false;
    abbot_leader = false;
    NativeBorrowedVector<uintptr_t> positions, assignments;
    if (!native_history_read_vector(native_history_object_field(entity,
            "historical_entity", 0x10c0, sizeof(positions)), positions) ||
            !native_history_read_vector(native_history_object_field(entity,
                "historical_entity", 0x1110, sizeof(assignments)), assignments) ||
            positions.size() > 4096 || assignments.size() > 4096) return false;
    for (size_t i = 0; i < positions.size(); ++i) {
        const uintptr_t position = native_history_vector_at(positions, i);
        const uintptr_t flags = native_history_object_field(position,
            "entity_position", 0x28, 16);
        bool active = false, replaced = false, leader = false;
        if (!position || !flags || !native_history_page_flag(flags, 0, 8, 27, active))
            return false;
        if (!active) continue;
        if (!native_history_page_flag(flags, 0, 8, 19, replaced)) return false;
        if (replaced) continue;
        std::string code;
        if (!native_history_copy_string(native_history_object_field(position,
                "entity_position", 0, sizeof(NativeString)), code) ||
                !native_history_page_flag(flags, 0, 8, 13, leader)) return false;
        const bool bandit = code == "CUSTOM_BANDIT_LEADER";
        bool abbot = false;
        if (leader) {
            std::string title;
            if (!native_history_copy_string(native_history_object_field(position,
                    "entity_position", 0x98, sizeof(NativeString)), title)) return false;
            abbot = title == "abbot" || title == "abbess";
        }
        if (!bandit && !abbot) continue;
        int32_t position_id = -1;
        if (!native_history_copy(native_history_object_field(position,
                "entity_position", 0x20, sizeof(position_id)), position_id) || position_id < 0)
            return false;
        for (size_t j = 0; j < assignments.size(); ++j) {
            const uintptr_t assignment = native_history_vector_at(assignments, j);
            int32_t assigned_position = -1, holder = -1;
            if (!assignment || !native_history_copy(native_history_object_field(assignment,
                    "entity_position_assignment", 0xc, sizeof(assigned_position)), assigned_position))
                return false;
            if (assigned_position != position_id) continue;
            if (!native_history_copy(native_history_object_field(assignment,
                    "entity_position_assignment", 4, sizeof(holder)), holder)) return false;
            if (holder < 0) continue;
            bool assigned = false;
            const uintptr_t assignment_flags = native_history_object_field(assignment,
                "entity_position_assignment", 0x18, 16);
            if (!assignment_flags || !native_history_page_flag(assignment_flags, 0, 8, 0, assigned))
                return false;
            if (assigned) {
                bandit_leader = bandit_leader || bandit;
                abbot_leader = abbot_leader || abbot;
                break;
            }
        }
    }
    return true;
}

static void capture_native_site_government_attributes(uintptr_t base, uintptr_t entity,
        NativeSiteGovernmentContext &context, bool capture_site = true,
        bool include_former_governance = false) {
    context = {};
    if (!base || !entity) return;
    int16_t entity_type = -1;
    int32_t entity_id = -1;
    uint32_t entity_flags = 0;
    uintptr_t culture = 0;
    if (!native_history_copy(native_history_object_field(entity,
            "historical_entity", 0, sizeof(entity_type)), entity_type) || entity_type < 0 ||
            entity_type > 10 || !native_history_copy(native_history_object_field(entity,
                "historical_entity", 4, sizeof(entity_id)), entity_id) || entity_id < 0 ||
            !native_history_copy(native_history_object_field(entity,
                "historical_entity", 0x9c, sizeof(entity_flags)), entity_flags) ||
            !native_history_copy(native_history_object_field(entity,
                "historical_entity", 8, sizeof(culture)), culture) ||
            !native_history_copy(native_history_object_field(entity,
                "historical_entity", 0x98, sizeof(context.race)), context.race)) return;
    context.non_racial = (entity_flags & (1u << 10)) != 0;
    context.religious_governance = entity_type == 5;
    if (culture) {
        const uintptr_t flags = native_history_object_field(culture, "entity_raw", 0x3a0, 16);
        if (!native_history_copy_string(native_history_object_field(culture,
                "entity_raw", 0, sizeof(NativeString)), context.culture_raw_id) ||
                !flags || !native_history_page_flag(flags, 0, 8, 45, context.skulking)) return;
    }
    if (context.race >= 0) {
        NativeBorrowedVector<uintptr_t> creatures;
        if (!native_history_read_vector(native_history_global(0x24eca68), creatures)) return;
        const uintptr_t creature = native_history_vector_at(creatures,
            static_cast<size_t>(context.race));
        if (!creature || !native_history_copy_string(native_history_object_field(
                creature, "creature_raw", 0, sizeof(NativeString)), context.race_raw_id)) return;
    }
    if (!capture_site) {
        if (!include_former_governance) return;
        // Accumulated own RESIDENCE records can supply a stable category for
        // this entity's name. They do not prove its governing role, parent,
        // office or location at the event's date. Keep all current-role and
        // parent-relation flags unset, and never consult the current governor.
        struct NameSiteShape {
            int32_t id = -1;
            int16_t type = -1, subtype = -1;
            std::string kind;
        };
        std::vector<NameSiteShape> shapes;
        NativeBorrowedVector<uintptr_t> links;
        if (!native_history_read_vector(native_history_object_field(entity,
                "historical_entity", 0xd0, sizeof(links)), links) || links.size() > 4096) return;
        for (size_t i = 0; i < links.size(); ++i) {
            const uintptr_t link = native_history_vector_at(links, i);
            uint32_t flags = 0, former_flags = 0;
            int32_t location = -1, linked_entity = -1, site_id = -1;
            if (!link || !native_history_copy(native_history_object_field(link,
                    "entity_site_link", 0x1c, sizeof(flags)), flags) ||
                    !native_history_copy(native_history_object_field(link,
                        "entity_site_link", 0x20, sizeof(former_flags)), former_flags) ||
                    !native_history_copy(native_history_object_field(link,
                        "entity_site_link", 0x10, sizeof(location)), location)) return;
            if (!((flags | former_flags) & 1u) || location != 0) continue;
            if (!native_history_copy(native_history_object_field(link,
                    "entity_site_link", 4, sizeof(linked_entity)), linked_entity) ||
                    linked_entity != entity_id ||
                    !native_history_copy(native_history_object_field(link,
                        "entity_site_link", 0, sizeof(site_id)), site_id) || site_id < 0) return;
            if (std::any_of(shapes.begin(), shapes.end(),
                    [&](const auto &shape) { return shape.id == site_id; })) continue;
            const uintptr_t site = native_history_find_subject(base,
                NativeHistoryObjectKind::Site, site_id);
            int32_t actual_site_id = -1;
            NativeHistoryEventData site_data;
            if (!site || !native_history_copy(native_history_object_field(site,
                    "world_site", 0x88, sizeof(actual_site_id)), actual_site_id) ||
                    actual_site_id != site_id || !native_history_site_type(site, site_data, "site"))
                return;
            const auto label = site_data.texts.find("site.label");
            const auto type = site_data.fields.find("site.site_type");
            const auto subtype = site_data.fields.find("site.site_subtype");
            if (label == site_data.texts.end() || type == site_data.fields.end() ||
                    type->second.size() != 1 || subtype == site_data.fields.end() ||
                    subtype->second.size() != 1) return;
            shapes.push_back(NameSiteShape{site_id,
                static_cast<int16_t>(type->second.front()),
                static_cast<int16_t>(subtype->second.front()), label->second});
        }
        if (shapes.empty()) return;
        context.name_site_shape_known = true;
        if (shapes.size() == 1) context.site_id = shapes.front().id;
        if (std::all_of(shapes.begin(), shapes.end(),
                [&](const auto &shape) { return shape.kind == shapes.front().kind; })) {
            context.site_kind = shapes.front().kind;
            if (std::all_of(shapes.begin(), shapes.end(),
                    [&](const auto &shape) { return shape.type == shapes.front().type; }))
                context.site_type = shapes.front().type;
            if (std::all_of(shapes.begin(), shapes.end(),
                    [&](const auto &shape) { return shape.subtype == shapes.front().subtype; }))
                context.site_subtype = shapes.front().subtype;
        }
        return;
    }
    context.is_current = true;
    const auto umbrella = native_history_resolve_current_entity_umbrella(base, entity);
    context.has_external_parent = umbrella.has_external_parent;
    if (!umbrella.relation_known) return;
    bool bandit_leader = false, abbot_leader = false;
    if (!native_site_government_position_roles(entity, bandit_leader, abbot_leader)) return;
    struct Location {
        int32_t id = -1;
        int16_t type = -1, subtype = -1;
        std::string kind;
        bool capital = false, headquarters = false;
    };
    std::vector<Location> governed;
    NativeBorrowedVector<uintptr_t> links;
    if (!native_history_read_vector(native_history_object_field(entity,
            "historical_entity", 0xd0, sizeof(links)), links) || links.size() > 4096) return;
    const auto append_location = [&](uintptr_t site, int32_t site_id,
            bool capital, bool headquarters) -> bool {
        auto existing = std::find_if(governed.begin(), governed.end(),
            [&](const auto &value) { return value.id == site_id; });
        if (existing != governed.end()) {
            existing->capital = existing->capital || capital;
            existing->headquarters = existing->headquarters || headquarters;
            return true;
        }
        NativeHistoryEventData site_data;
        if (!native_history_site_type(site, site_data, "site")) return false;
        const auto label = site_data.texts.find("site.label");
        const auto type = site_data.fields.find("site.site_type");
        const auto subtype = site_data.fields.find("site.site_subtype");
        if (label == site_data.texts.end() || type == site_data.fields.end() ||
                type->second.size() != 1 || subtype == site_data.fields.end() ||
                subtype->second.size() != 1) return false;
        Location location;
        location.id = site_id;
        location.kind = label->second;
        location.type = static_cast<int16_t>(type->second.front());
        location.subtype = static_cast<int16_t>(subtype->second.front());
        location.capital = capital;
        location.headquarters = headquarters;
        governed.push_back(std::move(location));
        return true;
    };
    bool bandit_site = false;
    for (size_t i = 0; i < links.size(); ++i) {
        const uintptr_t link = native_history_vector_at(links, i);
        bool qualifies = false;
        uint32_t flags = 0;
        if (!native_site_government_link(link, qualifies, flags)) return;
        if (!qualifies) continue;
        int32_t site_id = -1;
        if (!native_history_copy(native_history_object_field(link,
                "entity_site_link", 0, sizeof(site_id)), site_id) || site_id < 0) return;
        const uintptr_t site = native_history_find_subject(base, NativeHistoryObjectKind::Site, site_id);
        bool matches = false;
        if (!site || !native_site_government_matches(site, entity_id, matches)) return;
        if (!matches) continue;
        bool headquarters = false;
        if (!native_site_government_headquarters(link, headquarters)) return;
        if (!append_location(site, site_id, (flags & (1u << 1)) != 0, headquarters)) return;
        bandit_site = bandit_site || (flags & ((1u << 6) | (1u << 7))) != 0;
    }
    const bool monastery = std::any_of(governed.begin(), governed.end(),
        [](const auto &location) { return location.kind == "monastery"; });
    bool former_governance = false;
    if (include_former_governance && governed.empty()) {
        for (size_t i = 0; i < links.size(); ++i) {
            const uintptr_t link = native_history_vector_at(links, i);
            uint32_t former_flags = 0;
            int32_t location = -1, site_id = -1, linked_entity = -1;
            if (!link || !native_history_copy(native_history_object_field(link,
                    "entity_site_link", 0x20, sizeof(former_flags)), former_flags) ||
                    !native_history_copy(native_history_object_field(link,
                        "entity_site_link", 0x10, sizeof(location)), location)) return;
            if (!(former_flags & 1u) || location != 0) continue;
            if (!native_history_copy(native_history_object_field(link,
                    "entity_site_link", 4, sizeof(linked_entity)), linked_entity) ||
                    linked_entity != entity_id ||
                    !native_history_copy(native_history_object_field(link,
                        "entity_site_link", 0, sizeof(site_id)), site_id) || site_id < 0) return;
            const uintptr_t site = native_history_find_subject(base,
                NativeHistoryObjectKind::Site, site_id);
            int32_t actual_site_id = -1;
            if (!site || !native_history_copy(native_history_object_field(site,
                    "world_site", 0x88, sizeof(actual_site_id)), actual_site_id) ||
                    actual_site_id != site_id || !append_location(site, site_id, false, false)) return;
        }
        former_governance = !governed.empty();
    }
    // Current roles require agreement with the site's native governing link.
    // An explicitly requested former RESIDENCE can instead anchor this
    // entity's name; it supplies neither a present capital/HQ nor evidence
    // that an active abbot currently governs a monastery.
    context.governing_role = !governed.empty();
    context.former_governance = former_governance;
    context.parent_known = umbrella.relation_known;
    context.bandit_governance = bandit_site || bandit_leader;
    context.religious_governance = context.religious_governance || (abbot_leader && monastery);
    const Location *anchor = nullptr;
    const auto unique_anchor = [&](bool capital) -> const Location * {
        const Location *found = nullptr;
        for (const auto &location : governed) {
            if (!(capital ? location.capital : location.headquarters)) continue;
            if (found) return nullptr;
            found = &location;
        }
        return found;
    };
    anchor = unique_anchor(true);
    if (!anchor) anchor = unique_anchor(false);
    if (!anchor && governed.size() == 1) anchor = &governed.front();
    if (anchor) {
        context.site_id = anchor->id;
        context.site_type = anchor->type;
        context.site_subtype = anchor->subtype;
        context.site_kind = anchor->kind;
    } else if (!governed.empty() && std::all_of(governed.begin(), governed.end(),
            [&](const auto &location) { return location.kind == governed.front().kind; })) {
        context.site_kind = governed.front().kind;
        if (std::all_of(governed.begin(), governed.end(),
                [&](const auto &location) { return location.type == governed.front().type; }))
            context.site_type = governed.front().type;
        if (std::all_of(governed.begin(), governed.end(),
                [&](const auto &location) { return location.subtype == governed.front().subtype; }))
            context.site_subtype = governed.front().subtype;
    }
}

template<NativeWorldSiteEntityFactKind Kind>
static void capture_native_world_site_entity_fact(graphicst *graphics,
        const NativeString *source, uintptr_t entity, int) {
    NativeInputCallbackScope callback;
    const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    NativeWorldSiteEntityFact fact;
    fact.kind = Kind;
    bool owned = false;
    try {
        std::string_view text;
        const uintptr_t base = native_history_profile_base();
        constexpr std::string_view prefix = Kind == NativeWorldSiteEntityFactKind::SiteGovernment
            ? "Site government:" : "Civilization:";
        const uintptr_t name = entity ? native_history_object_field(
            entity, "historical_entity", 0x20) : 0;
        // The relay passes the exact entity held by this native producer.
        // The drawn string is a separate, possibly clipped label/name buffer.
        if (base && name && native_string_view(source, &text, 4096) &&
                text.starts_with(prefix) && capture_native_history_name(base, name, fact.name) &&
                capture_native_history_entity_name_context(base, entity, fact.name,
                    Kind == NativeWorldSiteEntityFactKind::SiteGovernment, nullptr, false,
                    Kind == NativeWorldSiteEntityFactKind::SiteGovernment) &&
                fact.name.entity_type >= 0 && fact.name.entity_type <= 10) {
            if constexpr (Kind == NativeWorldSiteEntityFactKind::SiteGovernment) {
                if (fact.name.parent_word_id.empty())
                    capture_native_site_government_attributes(base, entity, fact.government_context);
                // The exact native Site government producer already selected
                // this entity with 9b4e70, independently of a stable site kind.
                fact.government_context.governing_role = true;
            }
            fact.name.entity_name_current = false;
            owned = true;
        }
    } catch (...) {}
    // Publish an owned snapshot with this exact draw. A retained frame never
    // borrows the producer's entity or its temporary NativeString.
    NativeWorldSiteEntityFactScope scope(owned ? &fact : nullptr);
    capture_native_limited_caption_draw(graphics, source, NativeJustification{}, 0, [&] {
        // This is the addst entry's original trampoline, so this draw enters
        // the caption capture once while retaining the native just/width=0.
        if (const auto original = g_native_clipped_caption_hooks.draw)
            callback.call_native([&] { original(graphics, source, NativeJustification{}, 0); });
    }, false, NativeInfoTitleKind::None, false, {}, false,
        NativeCivilizationField::None, false, {}, NativeLocationPickerField::None,
        NativeTravelBuildingField::None, caller);
}

#include "native_site_name_draws.inc"

static void capture_native_clipped_draw(graphicst *graphics, const NativeString *source,
        NativeJustification just, int width) {
    if (native_private_ui_write_active(graphics)) {
        NativeInputCallbackScope callback;
        if (const auto original = g_native_clipped_caption_hooks.draw)
            callback.call_native([&] { original(graphics, source, just, width); });
        return;
    }
    const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    // This call inside textbox::render draws only its owned edit string's
    // temporary copy. It remains input even when native code reaches render
    // directly instead of dispatching through the hooked widget vtable.
    const bool textbox_text = g_native_textbox_widget_binding.text_return_address &&
        caller == g_native_textbox_widget_binding.text_return_address;
    NativeEditableTextScope input_scope(
        textbox_text || NativeEditableTextScope::owns(caller) || native_legacy_editable_draw(caller,source));
    const auto kind = native_info_title_kind(caller);
    const bool authored = native_info_title_authored(kind, source, caller);
    const auto civilization_field = native_civilization_caption_field(caller);
    const auto location_picker_field = native_location_picker_field(caller);
    const auto travel_building_field = native_travel_building_field(caller);
    const bool mission_title = native_mission_title_caller(caller);
    const auto map_hover = native_map_hover_context_for_draw(graphics, source, caller);
    std::shared_ptr<const NativeEmbarkReclaimHistoryParagraph> reclaim_history;
    std::unique_lock<std::mutex> history_lock(g_native_embark_reclaim_history_mutex,
        std::defer_lock);
    // Choose-start's retained history row loop owns these original strings.
    // This existing entry hook already owns the call; no new patch is needed.
    if (graphics && width == 34 && graphics->screeny >= 24 && graphics->screeny < 36 &&
            caller ==
#ifdef _WIN32
                native_pe_address(native_history_profile_base(), 0x1051865)
#else
                native_reference_address(native_history_profile_base(), 0x1b458c2)
#endif
            ) {
        try {
            reclaim_history = capture_native_embark_reclaim_history_draw(
                graphics, source, width, caller);
        } catch (...) {}
        try {
            history_lock.lock();
            auto &batch = g_native_embark_reclaim_history_draws;
            if (graphics->screeny == 24 || batch.grid != graphics->screen ||
                    batch.dimx != graphics->dimx || batch.dimy != graphics->dimy) {
                g_native_embark_reclaim_history_previous_draws = std::move(batch);
                batch = {graphics->screen, graphics->dimx, graphics->dimy, {}};
                batch.rows.reserve(12);
            }
        } catch (...) {
            if (history_lock.owns_lock()) history_lock.unlock();
        }
    }
    capture_native_limited_caption_draw(graphics, source, just, width, [&] {
        if (g_native_clipped_caption_hooks.draw)
            g_native_clipped_caption_hooks.draw(graphics, source, just, width);
    }, false, kind, authored, std::move(reclaim_history), history_lock.owns_lock(),
        civilization_field, mission_title, map_hover, location_picker_field, travel_building_field, caller);
}

static void capture_native_clipped_flag_draw(graphicst *graphics, const NativeString *source,
        NativeJustification just, int width, uint32_t flags) {
    if (native_private_ui_write_active(graphics)) {
        NativeInputCallbackScope callback;
        if (const auto original = g_native_clipped_caption_hooks.flag_draw)
            callback.call_native([&] { original(graphics, source, just, width, flags); });
        return;
    }
    // Collect before the ordinary caption path rejects off-screen/clip rows.
    // widget::render can invoke custom renderers first. Only the verified
    // multiline row-loop call belongs to this complete source's wrap output.
    const uintptr_t caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    if (g_native_multiline_capture && caller == g_native_multiline_widget_binding.row_return_address)
        capture_native_multiline_row(graphics, source);
    const auto map_hover = native_map_hover_context_for_draw(graphics, source, caller);
    capture_native_limited_caption_draw(graphics, source, just, width, [&] {
        if (g_native_clipped_caption_hooks.flag_draw)
            g_native_clipped_caption_hooks.flag_draw(graphics, source, just, width, flags);
    }, false, NativeInfoTitleKind::None, false, {}, false,
        NativeCivilizationField::None, false, map_hover,
        NativeLocationPickerField::None, NativeTravelBuildingField::None, caller);
}

static void capture_native_top_caption_draw(graphicst *graphics, const NativeString *source,
        NativeJustification just, int width) {
    const uintptr_t caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    const auto map_hover = native_map_hover_context_for_draw(graphics, source, caller);
    capture_native_limited_caption_draw(graphics, source, just, width, [&] {
        if (g_native_clipped_caption_hooks.top_draw)
            g_native_clipped_caption_hooks.top_draw(graphics, source, just, width);
    }, true, NativeInfoTitleKind::None, false, {}, false,
        NativeCivilizationField::None, false, map_hover,
        NativeLocationPickerField::None, NativeTravelBuildingField::None, caller);
}

// The pinned PE entry specializes top_addst to an unbounded string draw:
// only graphics/source are live incoming arguments. ELF retains just/width.
static void capture_native_top_simple_caption_draw(graphicst *graphics, const NativeString *source) {
    const uintptr_t caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    const auto map_hover = native_map_hover_context_for_draw(graphics, source, caller);
    capture_native_limited_caption_draw(graphics, source, NativeJustification{}, 0, [&] {
        if (g_native_clipped_caption_hooks.top_simple_draw)
            g_native_clipped_caption_hooks.top_simple_draw(graphics, source);
    }, true, NativeInfoTitleKind::None, false, {}, false,
        NativeCivilizationField::None, false, map_hover,
        NativeLocationPickerField::None, NativeTravelBuildingField::None, caller);
}

static void capture_native_top_flag_caption_draw(graphicst *graphics, const NativeString *source,
        NativeJustification just, int width, uint32_t flags) {
    const uintptr_t caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    const auto map_hover = native_map_hover_context_for_draw(graphics, source, caller);
    capture_native_limited_caption_draw(graphics, source, just, width, [&] {
        if (g_native_clipped_caption_hooks.top_flag_draw)
            g_native_clipped_caption_hooks.top_flag_draw(graphics, source, just, width, flags);
    }, true, NativeInfoTitleKind::None, false, {}, false,
        NativeCivilizationField::None, false, map_hover,
        NativeLocationPickerField::None, NativeTravelBuildingField::None, caller);
}

template<NativeFieldKind Kind>
static PendingNativeField &native_caption_pending() {
    if constexpr (Kind == NativeFieldKind::EmbarkItem) return pending_native_embark();
    else if constexpr (Kind == NativeFieldKind::Origin) return pending_native_origin();
    else return pending_native_book();
}

template<NativeFieldKind Kind>
static void capture_native_caption_resize(NativeString *text, size_t width, char fill) {
    if (!native_private_ui_write_active(native_graphics()))
        capture_native_field_resize(native_caption_pending<Kind>(), text, width,
            Kind == NativeFieldKind::Origin, Kind == NativeFieldKind::EmbarkItem);
    if (g_native_caption_hooks.resize) g_native_caption_hooks.resize(text, width, fill);
}

template<NativeFieldKind Kind>
static void capture_native_caption_draw(graphicst *graphics, const NativeString *text,
        NativeJustification just, int width) {
    if (!native_private_ui_write_active(graphics))
        capture_native_field_draw(native_caption_pending<Kind>(), graphics, text, Kind);
    if (g_native_caption_hooks.draw) g_native_caption_hooks.draw(graphics, text, just, width);
}

static void reset_native_caption_capture() {
    g_native_map_hover_returns.clear();
    g_native_adventure_look_caption_sites.clear();
    g_native_map_hover_text_offset = 0;
    g_native_map_hover_list = 0;
    {
        std::lock_guard<std::mutex> lock(g_native_map_track_caption_mutex);
        g_native_map_track_captions.clear();
    }
    native_clipped_pending() = {};
    clear_clipped_captions();
    clear_native_unit_chooser_records();
    clear_native_drawn_text_rows();
    clear_native_squad_aliases();
    pending_native_embark() = {};
    clear_embark_item_sources();
    reset_native_origin_capture();
    reset_native_book_capture();
}

template<NativeFieldKind Kind>
static void append_native_caption_calls(std::vector<NativeCall> &calls,
        const NativeCaptionProfile &profile, const NativeCaptionSite &site) {
    calls.push_back({site.resize, profile.resize_target,
        reinterpret_cast<const void *>(&capture_native_caption_resize<Kind>)});
    calls.push_back({site.draw, profile.draw_target,
        reinterpret_cast<const void *>(&capture_native_caption_draw<Kind>)});
}

static bool native_caption_hooks_active() {
#ifndef _WIN32
    if (g_native_main_caption_calls.active()) return true;
#endif
    return g_native_help_top_tile_hook.active() || g_native_help_tile_hook.active() ||
        g_native_legacy_tooltip_hook.active() || g_native_tooltip_container_hook.active() ||
        g_native_multiline_arrange_hook.active() || g_native_multiline_widget_hook.active() ||
        g_native_textbox_widget_hook.active() ||
        g_native_caption_widget_hook.active() || g_native_caption_hooks.code.active() ||
        g_native_map_track_caption_hooks.build_entry.active() ||
        g_native_clipped_caption_hooks.resize_entry.active() ||
        g_native_clipped_caption_hooks.draw_entry.active() ||
        g_native_clipped_caption_hooks.truncate_entry.active() ||
        g_native_clipped_caption_hooks.flag_draw_entry.active() ||
        g_native_clipped_caption_hooks.top_draw_entry.active() ||
        g_native_clipped_caption_hooks.top_flag_draw_entry.active() ||
        std::any_of(g_native_clipped_caption_hooks.default_resizes.begin(),
            g_native_clipped_caption_hooks.default_resizes.end(),
            [](const auto &binding) { return binding.entry.active(); });
}

static bool uninstall_native_caption_hooks();

static bool install_native_caption_hooks() {
    if (g_native_caption_hooks.code.installed) return true;
    if (native_caption_hooks_active() && !uninstall_native_caption_hooks()) return false;
    struct InstallGuard {
        bool committed = false;
        ~InstallGuard() {
            if (!committed) {
                try { uninstall_native_caption_hooks(); } catch (...) {}
            }
        }
    } guard;
    NativeCaptionProfile profile;
    if (!resolve_native_caption_profile(profile) || !profile.resize || !profile.draw ||
        !profile.truncated_widget.render_slot || !profile.textbox_widget.render_slot) {
        log_line("ERROR", "Cannot resolve the native complete-caption profile");
        return false;
    }
    for (const auto &signature : profile.signatures) {
        if (std::memcmp(reinterpret_cast<const void *>(profile.base + signature.address),
                        signature.bytes.data(), signature.bytes.size()) != 0) {
            log_line("ERROR", "Native complete-caption function signature mismatch");
            return false;
        }
    }
    std::vector<NativeCall> calls;
    calls.reserve(profile.sites.size() * 2 + profile.inline_resizes.size() +
        profile.roster_shorten_calls.size() + profile.announcement_page.rows_calls.size() + 6);
    for (const auto &site : profile.sites) {
        switch (site.kind) {
        case NativeFieldKind::EmbarkItem:
            append_native_caption_calls<NativeFieldKind::EmbarkItem>(calls, profile, site); break;
        case NativeFieldKind::Origin:
            append_native_caption_calls<NativeFieldKind::Origin>(calls, profile, site); break;
        case NativeFieldKind::BookTitle:
            append_native_caption_calls<NativeFieldKind::BookTitle>(calls, profile, site); break;
        case NativeFieldKind::BookType:
            append_native_caption_calls<NativeFieldKind::BookType>(calls, profile, site); break;
        }
    }
    for (const auto &site : profile.inline_resizes)
        calls.push_back({site.address, 0,
            site.plain_shrink ? reinterpret_cast<const void *>(&capture_native_plain_clipped_resize)
                : site.zero_pad_one ? reinterpret_cast<const void *>(&capture_native_clipped_dot_padding_resize)
                              : reinterpret_cast<const void *>(&capture_native_clipped_resize),
            site.arguments, site.original, site.suffix});
    if (profile.map_track_shorten_call)
        calls.push_back({profile.map_track_shorten_call, profile.map_track_shorten_target,
            reinterpret_cast<const void *>(&capture_native_map_track_shorten)});
    if (profile.adventure_look_track_shorten_call)
        calls.push_back({profile.adventure_look_track_shorten_call,
            profile.adventure_look_track_shorten_target,
            reinterpret_cast<const void *>(&capture_native_adventure_look_track_shorten)});
    for (const auto site : profile.roster_shorten_calls)
        calls.push_back({site, profile.roster_shorten_target,
            reinterpret_cast<const void *>(&capture_native_roster_shorten)});
    for (const auto site : profile.announcement_page.rows_calls)
        calls.push_back({site, profile.announcement_page.rows_target,
            reinterpret_cast<const void *>(&capture_native_announcement_page_rows)});
#ifdef _WIN32
    if (profile.announcement_popup_call)
        calls.push_back({profile.announcement_popup_call, profile.announcement_popup_target,
            reinterpret_cast<const void *>(&capture_native_announcement_popup_draw)});
    // All four callers set just=0 and width=0 before addst. Their nonvolatile
    // registers still hold the entity used by the preceding name formatter.
    // Replace R8 with that entity; the wrapper restores both constant args.
    // Literal NativeCalls let the normal build bind both supported PE images.
    std::vector<NativeCall> entity_fact_calls{
        {0x1cf3fd, 0xad9960,
            reinterpret_cast<const void *>(&capture_native_world_site_entity_fact<
                NativeWorldSiteEntityFactKind::SiteGovernment>),
            {0x4d, 0x89, 0xf8}}, // mov r8,r15: selected site's government
        {0x1cf55d, 0xad9960,
            reinterpret_cast<const void *>(&capture_native_world_site_entity_fact<
                NativeWorldSiteEntityFactKind::Civilization>),
            {0x49, 0x89, 0xf8}}, // mov r8,rdi: selected site's civilization
        {0x1c2b8e, 0xad9960,
            reinterpret_cast<const void *>(&capture_native_world_site_entity_fact<
                NativeWorldSiteEntityFactKind::SiteGovernment>),
            {0x49, 0x89, 0xf8}}, // mov r8,rdi: hovered site's government
        {0x1c2ce1, 0xad9960,
            reinterpret_cast<const void *>(&capture_native_world_site_entity_fact<
                NativeWorldSiteEntityFactKind::Civilization>),
            {0x49, 0x89, 0xd8}}, // mov r8,rbx: hovered site's civilization
    };
    if (!native_reference_calls(entity_fact_calls, 0)) return false;
    calls.insert(calls.end(), entity_fact_calls.begin(), entity_fact_calls.end());
#endif
#ifdef _WIN32
    if (!append_native_site_name_draw_calls(calls)) return false;
#else
    if (!append_native_site_name_draw_calls(profile.main_calls)) return false;
    std::vector<NativeCall> entity_fact_calls{
        {0x143c4a2,0x425170,reinterpret_cast<const void *>(&capture_native_world_site_entity_fact<
            NativeWorldSiteEntityFactKind::SiteGovernment>),{0x48,0x89,0xda}},
        {0x143c5bc,0x425170,reinterpret_cast<const void *>(&capture_native_world_site_entity_fact<
            NativeWorldSiteEntityFactKind::Civilization>),{0x48,0x8b,0x95,0xa0,0xfc,0xff,0xff}},
        {0x143b724,0x425170,reinterpret_cast<const void *>(&capture_native_world_site_entity_fact<
            NativeWorldSiteEntityFactKind::SiteGovernment>),{0x4c,0x89,0xea}},
        {0x143b837,0x425170,reinterpret_cast<const void *>(&capture_native_world_site_entity_fact<
            NativeWorldSiteEntityFactKind::Civilization>),{0x4c,0x89,0xf2}},
    };
    profile.main_calls.insert(profile.main_calls.end(),entity_fact_calls.begin(),entity_fact_calls.end());
#endif
    reset_native_caption_capture();
    g_native_caption_hooks.resize = profile.resize;
    g_native_caption_hooks.draw = profile.draw;
    // Inline operations already call the shared resize wrapper while entry
    // trampolines are being prepared. Keep the real native operation bound
    // throughout installation; removal restores these callers first.
    g_native_clipped_caption_hooks.resize = profile.resize;
    g_native_clipped_caption_hooks.draw = profile.draw;
    g_native_clipped_caption_hooks.roster_shorten = profile.roster_shorten_target
        ? reinterpret_cast<NativeCaptionTruncateFn>(profile.base + profile.roster_shorten_target)
        : nullptr;
#ifndef _WIN32
    g_native_clipped_caption_hooks.roster_shorten = profile.truncate;
#endif
    g_native_map_track_caption_hooks.shorten = profile.map_track_shorten ? profile.map_track_shorten : profile.map_track_shorten_target
        ? reinterpret_cast<NativeCaptionTruncateFn>(profile.base + profile.map_track_shorten_target)
        : nullptr;
    g_native_map_track_caption_hooks.look_shorten = profile.adventure_look_track_shorten_target
        ? reinterpret_cast<NativeCaptionTruncateFn>(profile.base + profile.adventure_look_track_shorten_target)
        : nullptr;
    g_native_map_track_caption_hooks.text_offset = profile.map_caption_text_offset;
    g_native_info_title_binding = std::move(profile.info_titles);
    g_native_civilization_caption_sites = std::move(profile.civilization_fields);
    g_native_location_picker_sites = std::move(profile.location_picker_fields);
    g_native_travel_building_sites = std::move(profile.travel_building_fields);
    g_native_adventure_crafting_sites = std::move(profile.adventure_crafting_fields);
    g_native_mission_title_returns = std::move(profile.mission_title_returns);
    g_native_map_hover_returns = std::move(profile.map_hover_returns);
    g_native_adventure_look_caption_sites = std::move(profile.adventure_look_caption_sites);
    g_native_map_hover_text_offset = profile.map_caption_text_offset;
    g_native_map_hover_list = profile.map_hover_list;
    g_native_announcement_page_binding = std::move(profile.announcement_page);
    g_native_announcement_page_rows = g_native_announcement_page_binding.rows_target
        ? reinterpret_cast<NativeAnnouncementRowsFn>(profile.base +
            g_native_announcement_page_binding.rows_target) : nullptr;
    g_native_announcement_popup_draw = profile.announcement_popup_target
        ? reinterpret_cast<NativeAnnouncementPopupDrawFn>(
            profile.base + profile.announcement_popup_target) : nullptr;
    if (!g_native_caption_hooks.code.install(profile.base, calls, "Complete native caption capture"))
        return false;
#ifndef _WIN32
    if (!native_reference_calls(profile.main_calls,0) ||
            !g_native_main_caption_calls.install(elf_runtime::state().executable.bias,
                profile.main_calls,"Native page and roster caption capture")) return false;
#endif
    if (profile.map_caption_build) {
        auto &map_hooks = g_native_map_track_caption_hooks;
        if (!map_hooks.build_entry.prepare(reinterpret_cast<unsigned char *>(profile.map_caption_build),
                profile.map_caption_build_prefix,
                reinterpret_cast<const void *>(&capture_native_map_caption_build),
                {}, "Native map caption source lifecycle")) return false;
        map_hooks.build = reinterpret_cast<NativeCaptionBuildFn>(map_hooks.build_entry.original);
        if (!map_hooks.build_entry.install("Native map caption source lifecycle")) return false;
    }
    if (!profile.resize_entry_prefix.empty() && !profile.draw_entry_prefix.empty()) {
        auto &hooks = g_native_clipped_caption_hooks;
        if (!hooks.resize_entry.prepare(reinterpret_cast<unsigned char *>(profile.resize),
                profile.resize_entry_prefix, reinterpret_cast<const void *>(&capture_native_clipped_resize),
                {}, "Native clipped caption resize") ||
            !hooks.draw_entry.prepare(reinterpret_cast<unsigned char *>(profile.draw),
                profile.draw_entry_prefix, reinterpret_cast<const void *>(&capture_native_clipped_draw),
                {}, "Native clipped caption draw")) return false;
        hooks.resize = reinterpret_cast<NativeCaptionResizeFn>(hooks.resize_entry.original);
        hooks.draw = reinterpret_cast<NativeCaptionDrawFn>(hooks.draw_entry.original);
        if (!hooks.resize_entry.install("Native clipped caption resize") ||
            !hooks.draw_entry.install("Native clipped caption draw")) return false;
    }
    auto &hooks = g_native_clipped_caption_hooks;
    if (profile.truncate) {
        if (!hooks.truncate_entry.prepare(reinterpret_cast<unsigned char *>(profile.truncate),
                profile.truncate_entry_prefix, reinterpret_cast<const void *>(&capture_native_clipped_truncate),
                {}, "Native caption truncate helper")) return false;
        hooks.truncate = reinterpret_cast<NativeCaptionTruncateFn>(hooks.truncate_entry.original);
        if (!hooks.truncate_entry.install("Native caption truncate helper")) return false;
    }
    if (profile.flag_draw) {
        if (!hooks.flag_draw_entry.prepare(reinterpret_cast<unsigned char *>(profile.flag_draw),
                profile.flag_draw_entry_prefix, reinterpret_cast<const void *>(&capture_native_clipped_flag_draw),
                {}, "Native flagged caption draw")) return false;
        hooks.flag_draw = reinterpret_cast<NativeCaptionFlagDrawFn>(hooks.flag_draw_entry.original);
        if (!hooks.flag_draw_entry.install("Native flagged caption draw")) return false;
    }
    if (profile.top_draw || profile.top_simple_draw) {
        auto *entry = profile.top_simple_draw
            ? reinterpret_cast<unsigned char *>(profile.top_simple_draw)
            : reinterpret_cast<unsigned char *>(profile.top_draw);
        const void *replacement = profile.top_simple_draw
            ? reinterpret_cast<const void *>(&capture_native_top_simple_caption_draw)
            : reinterpret_cast<const void *>(&capture_native_top_caption_draw);
        if (!hooks.top_draw_entry.prepare(entry, profile.top_draw_entry_prefix,
                replacement, {}, "Native top caption draw")) return false;
        if (profile.top_simple_draw)
            hooks.top_simple_draw = reinterpret_cast<NativeCaptionSimpleDrawFn>(hooks.top_draw_entry.original);
        else hooks.top_draw = reinterpret_cast<NativeCaptionDrawFn>(hooks.top_draw_entry.original);
        if (!hooks.top_draw_entry.install("Native top caption draw")) return false;
    }
    if (profile.top_flag_draw) {
        if (!hooks.top_flag_draw_entry.prepare(reinterpret_cast<unsigned char *>(profile.top_flag_draw),
                profile.top_flag_draw_entry_prefix,
                reinterpret_cast<const void *>(&capture_native_top_flag_caption_draw),
                {}, "Native flagged top caption draw")) return false;
        hooks.top_flag_draw = reinterpret_cast<NativeCaptionFlagDrawFn>(hooks.top_flag_draw_entry.original);
        if (!hooks.top_flag_draw_entry.install("Native flagged top caption draw")) return false;
    }
    const NativeCaptionDefaultResizeFn capture_default_resizes[] = {
        &capture_native_clipped_default_resize<0>, &capture_native_clipped_default_resize<1>};
    if (profile.default_resizes.size() > hooks.default_resizes.size()) return false;
    for (size_t i = 0; i < profile.default_resizes.size(); ++i) {
        auto &binding = hooks.default_resizes[i];
        if (!binding.entry.prepare(reinterpret_cast<unsigned char *>(profile.default_resizes[i]),
                profile.default_resize_entry_prefix,
                reinterpret_cast<const void *>(capture_default_resizes[i]),
                {}, "Native default-fill caption resize")) return false;
        binding.original = reinterpret_cast<NativeCaptionDefaultResizeFn>(binding.entry.original);
        if (!binding.entry.install("Native default-fill caption resize")) return false;
    }
    g_native_caption_widget_binding = profile.truncated_widget;
    g_native_caption_widget_hook = {profile.truncated_widget.render_slot, nullptr,
        reinterpret_cast<void *>(&capture_native_truncated_widget_render)};
    if (!g_native_caption_widget_hook.install("Native original widget caption capture")) return false;
    {
        const auto &binding = profile.textbox_widget;
        if (!binding.table || !binding.expected_render ||
            std::atomic_ref<void *>(*binding.render_slot).load(
                std::memory_order_acquire) != binding.expected_render) {
            log_line("ERROR", "Native editable textbox original render mismatch");
            return false;
        }
        g_native_textbox_widget_binding = binding;
        g_native_textbox_widget_hook = {binding.render_slot, binding.expected_render,
            reinterpret_cast<void *>(&capture_native_textbox_widget_render)};
        if (!g_native_textbox_widget_hook.install("Native editable textbox properties")) return false;
    }
    if (profile.multiline_widget.render_slot) {
        // The announcement binding resolves this same profile after caption
        // hooks are installed. Validate mutable slot ownership only here,
        // immediately before replacing it, never in shared ABI discovery.
        const auto &binding = profile.multiline_widget;
        if (!binding.expected_render || std::atomic_ref<void *>(*binding.render_slot).load(
                std::memory_order_acquire) != binding.expected_render) {
            log_line("ERROR", "Native complete multiline widget original render mismatch");
            return false;
        }
        g_native_multiline_widget_binding = profile.multiline_widget;
        g_native_multiline_widget_hook = {binding.render_slot, binding.expected_render,
            reinterpret_cast<void *>(&capture_native_multiline_widget_render)};
        if (!g_native_multiline_widget_hook.install("Native complete multiline widget capture")) return false;
        if (binding.arrange_slot) {
            if (!binding.expected_arrange || !binding.base_arrange || !binding.minimum_height)
                return false;
            g_native_multiline_arrange_hook = {binding.arrange_slot, binding.expected_arrange,
                reinterpret_cast<void *>(&arrange_native_multiline_widget)};
            if (!g_native_multiline_arrange_hook.install("Native multiline wrapped height")) return false;
        }
    }
    if (profile.tooltip_container_slot) {
        g_native_tooltip_container_hook = {profile.tooltip_container_slot, profile.tooltip_container_render,
            reinterpret_cast<void *>(&capture_native_tooltip_container)};
        if (!g_native_tooltip_container_hook.install("Native tooltip document capture")) return false;
    }
    if (profile.legacy_toolbar_tooltip && !install_native_legacy_tooltip(profile.base)) return false;
#ifndef _WIN32
    {
        constexpr const char *symbol = "_ZN9graphicst18add_top_lower_tileEl";
        PatchSearch search{symbol};
        dl_iterate_phdr(find_main_import_slot, &search);
        g_real_native_help_tile = reinterpret_cast<NativeHelpTileFn>(dlsym(RTLD_DEFAULT, symbol));
        if (!search.slot || !g_real_native_help_tile) return false;
        // Classic may never have called these graphical tile imports. Keep
        // the live slot (possibly a lazy PLT resolver) for ownership/restore,
        // but forward directly to the resolved function so the resolver cannot
        // overwrite our installed hook on the first captured tile.
        g_native_help_tile_hook = {search.slot, nullptr,
            reinterpret_cast<void *>(&capture_native_help_tile)};
        if (!g_native_help_tile_hook.install("Native classic help background capture")) return false;
        constexpr const char *top_symbol = "_ZN9graphicst12add_top_tileElc";
        PatchSearch top_search{top_symbol};
        dl_iterate_phdr(find_main_import_slot, &top_search);
        g_real_native_help_top_tile = reinterpret_cast<NativeHelpTopTileFn>(dlsym(RTLD_DEFAULT, top_symbol));
        if (!top_search.slot || !g_real_native_help_top_tile) return false;
        g_native_help_top_tile_hook = {top_search.slot, nullptr,
            reinterpret_cast<void *>(&capture_native_help_top_tile)};
        if (!g_native_help_top_tile_hook.install("Native classic help artwork capture")) return false;
    }
#endif
    guard.committed = true;
    return true;
}

static bool uninstall_native_caption_hooks() {
#ifndef _WIN32
    if (!g_native_main_caption_calls.uninstall("Native page and roster caption restore")) return false;
#endif
    if (!g_native_help_top_tile_hook.uninstall("Native classic help artwork restore")) return false;
    g_native_help_top_tile_hook = {};
    g_real_native_help_top_tile = nullptr;
    if (!g_native_help_tile_hook.uninstall("Native classic help background restore")) return false;
    g_native_help_tile_hook = {};
    g_real_native_help_tile = nullptr;
    g_native_help_page.reset();
    // Live relays retain the native targets until restoration and release both
    // succeed, including failures during a partially completed installation.
    if (!g_native_legacy_tooltip_hook.uninstall("Native legacy tooltip restore")) return false;
    native_legacy_tooltip_state() = {};
    if (!g_native_tooltip_container_hook.uninstall("Native tooltip document restore")) return false;
    g_native_tooltip_container_hook = {};
    if (!g_native_multiline_arrange_hook.uninstall("Native multiline wrapped height restore")) return false;
    g_native_multiline_arrange_hook = {};
    if (!g_native_multiline_widget_hook.uninstall("Native complete multiline widget restore")) return false;
    g_native_multiline_widget_hook = {};
    g_native_multiline_widget_binding = {};
    if (!g_native_textbox_widget_hook.uninstall("Native editable textbox properties restore")) return false;
    g_native_textbox_widget_hook = {};
    g_native_textbox_widget_binding = {};
    if (!g_native_caption_widget_hook.uninstall("Native original widget caption restore")) return false;
    g_native_caption_widget_hook = {};
    g_native_caption_widget_binding = {};
    if (!g_native_caption_hooks.code.uninstall("Complete native caption restore")) return false;
    g_native_announcement_popup_draw = nullptr;
#ifdef _WIN32
    clear_native_announcement_popup_background();
#endif
    g_native_announcement_page_rows = nullptr;
    g_native_announcement_page_binding = {};
    {
        std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
        g_native_announcement_page.reset();
        g_native_announcement_page_epoch = 0;
        g_native_announcement_page_dimx = g_native_announcement_page_dimy = 0;
    }
    g_native_clipped_caption_hooks.roster_shorten = nullptr;
    if (!g_native_map_track_caption_hooks.build_entry.uninstall(
            "Native map caption source lifecycle restore")) return false;
    g_native_map_track_caption_hooks.build = nullptr;
    g_native_map_track_caption_hooks.shorten = nullptr;
    g_native_map_track_caption_hooks.look_shorten = nullptr;
    g_native_map_track_caption_hooks.text_offset = 0;
    auto &hooks = g_native_clipped_caption_hooks;
    for (auto &binding : hooks.default_resizes) {
        if (!binding.entry.uninstall("Native default-fill caption resize restore")) return false;
        binding.original = nullptr;
    }
    if (!hooks.top_flag_draw_entry.uninstall("Native flagged top caption draw restore") ||
        !hooks.top_draw_entry.uninstall("Native top caption draw restore") ||
        !hooks.flag_draw_entry.uninstall("Native flagged caption draw restore") ||
        !hooks.truncate_entry.uninstall("Native caption truncate helper restore") ||
        !hooks.draw_entry.uninstall("Native clipped caption draw restore") ||
        !hooks.resize_entry.uninstall("Native clipped caption resize restore")) return false;
    hooks.flag_draw = nullptr;
    hooks.top_draw = nullptr;
    hooks.top_simple_draw = nullptr;
    hooks.top_flag_draw = nullptr;
    hooks.truncate = nullptr;
    hooks.resize = nullptr;
    hooks.draw = nullptr;
    g_native_info_title_binding = {};
    g_native_civilization_caption_sites.clear();
    g_native_location_picker_sites.clear();
    g_native_travel_building_sites.clear();
    g_native_adventure_crafting_sites.clear();
    g_native_mission_title_returns.clear();
    g_native_caption_hooks.resize = nullptr;
    g_native_caption_hooks.draw = nullptr;
    reset_native_caption_capture();
    return true;
}
