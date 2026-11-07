// One caption capture and hook lifecycle for every native executable ABI.
#include "native_worldgen_edit_inputs.inc"
#include "native_inline_resize_hook.inc"
static void capture_native_character_relation_row(NativeDrawnTextRow &row,
    const graphicst *graphics, const NativeString *source, uintptr_t caller, int width);

using NativeCaptionResizeFn = void (*)(NativeString *, size_t, char);
using NativeCaptionDefaultResizeFn = void (*)(NativeString *, size_t);
using NativeCaptionDrawFn = void (*)(graphicst *, const NativeString *, NativeJustification, int);
using NativeCaptionSimpleDrawFn = void (*)(graphicst *, const NativeString *);
using NativeCaptionTruncateFn = void (*)(NativeString *, int);
using NativeCaptionBuildFn = void (*)(void *);
using NativeCaptionFlagDrawFn = void (*)(graphicst *, const NativeString *, NativeJustification, int, uint32_t);
using NativeCaptionWidgetRenderFn = void (*)(void *, uint32_t);
using NativeCaptionWidgetArrangeFn = void (*)(void *);
#ifdef _WIN32
using NativeCaptionMultilineWrapFn = void (*)(const NativeString *, void *, int);
#endif
static void capture_native_roster_shorten(NativeString *,int);
static void capture_native_clipped_resize(NativeString *,size_t,char);
static void capture_native_map_track_shorten(NativeString *,int);
static void capture_native_adventure_look_track_shorten(NativeString *,int);

struct NativeCaptionWidgetBinding {
    void **render_slot = nullptr;
    native_history_abi::FieldOffset rect, text, original_text, justification;
};
struct NativeMultilineWidgetBinding {
    void **render_slot = nullptr;
    native_history_abi::FieldOffset rect, text, minimum_width;
    uintptr_t row_return_address = 0;
    void *expected_render = nullptr;
    void **arrange_slot = nullptr;
    void *expected_arrange = nullptr;
    NativeCaptionWidgetArrangeFn base_arrange = nullptr;
    native_history_abi::FieldOffset minimum_height;
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
#ifdef _WIN32
    std::optional<address_runtime::InlineResizeBinding> discovered;
#endif
};
struct NativeInfoTitleSite {
    uintptr_t return_address = 0;
    NativeInfoTitleKind kind = NativeInfoTitleKind::None;
    int caption_width = 0;
};
struct NativeCivilizationCaptionSite {
    uintptr_t return_address = 0;
    NativeCivilizationField field = NativeCivilizationField::None;
    NativeCall source_call{};
};
struct NativeLocationPickerSite {
    uintptr_t return_address = 0;
    NativeLocationPickerField field = NativeLocationPickerField::None;
    NativeCall source_call{};
};
struct NativeTravelBuildingSite {
    uintptr_t return_address = 0;
    NativeTravelBuildingField field = NativeTravelBuildingField::None;
    NativeCall source_call{};
};
struct NativeAdventureCraftingSite {
    uintptr_t return_address = 0;
    NativeAdventureCraftingRole role = NativeAdventureCraftingRole::None;
};
struct NativeAdventureBarterSite {
    uintptr_t return_address = 0;
    NativeAdventureBarterField field = NativeAdventureBarterField::None;
    NativeCall source_call{};
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
    native_history_abi::FieldOffset building_name{}, editing_name{};
    ptrdiff_t item_list_right_slot = 0;
    int item_list_right_inset = 0;
    // Places' farm caption has its own caller frame, with the same native
    // building.name field but no information-sheet editing state.
    uintptr_t farm_name_return_address = 0;
    uintptr_t farm_crop_return_address = 0;
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
    std::vector<NativeAdventureBarterSite> adventure_barter_fields;
    std::vector<uintptr_t> mission_title_returns;
    NativeAnnouncementPageBinding announcement_page;
    uintptr_t announcement_popup_call = 0, announcement_popup_target = 0;
#ifndef _WIN32
    std::vector<NativeCall> main_calls;
#endif
};
#include "native_caption_profile.inc"
#include "native_adventure_barter_caption_profile.inc"

struct NativeCaptionHooks {
    NativeCallHook code;
    NativeCaptionResizeFn resize = nullptr;
    NativeCaptionDrawFn draw = nullptr;
};
static NativeCaptionHooks g_native_caption_hooks;
#ifdef _WIN32
static bool g_native_basic_caption_installed = false;
#endif
#ifndef _WIN32
static NativeCallHook g_native_main_caption_calls;
#endif
static NativeImportHook g_native_caption_widget_hook;
static NativeCaptionWidgetBinding g_native_caption_widget_binding;
static NativeImportHook g_native_multiline_widget_hook;
static NativeImportHook g_native_multiline_arrange_hook;
static NativeMultilineWidgetBinding g_native_multiline_widget_binding;
#ifdef _WIN32
static NativeCaptionMultilineWrapFn g_native_multiline_wrap = nullptr;
#endif
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
// Only the actual two hover producers use this state. POD TLS has no owning
// thread-exit destructor that could retain a reloaded core DLL.
static thread_local size_t g_native_announcement_hover_rows = 0;
static thread_local bool g_native_announcement_hover_isolated = false;

static void reset_native_announcement_notification_capture() {
    g_native_announcement_hover_rows = 0;
    g_native_announcement_hover_isolated = false;
    native_notification_restore_output();
}

#ifdef _WIN32
// This four-register call owns every expanded unit/all/selected-alert branch.
// Redirect its fixed rectangle before the first native clear. Restore only
// the output binding on return; never capture or replay the background page.
static void capture_native_announcement_popup_draw(
        uint64_t owner, uint64_t second, uint64_t margin, uint64_t fourth) {
    NativeInputCallbackScope callback;
    bool isolated = false;
    try {
        const int64_t left = int64_t(static_cast<int32_t>(margin)) + 4;
        if (const auto *gps = native_graphics())
            if (const auto bounds = native_notification_visible_bounds(*gps, left, 4, left + 93, 38))
                isolated = native_notification_begin_draw(*bounds);
        if (isolated) {
            g_native_notification_source_kind = NativeFortressAlertSourceKind::Popup;
            g_native_notification_source_owner = owner;
        }
    } catch (...) {}
    struct Restore {
        bool isolated;
        ~Restore() { if (isolated) native_notification_end_draw(); }
    } restore{isolated};
    const auto original = g_native_announcement_popup_draw;
    if (original) callback.call_native([&] { original(owner, second, margin, fourth); });
}

template<bool BodyRow>
static void capture_native_announcement_hover_text(graphicst *gps,
        const NativeString *source, NativeJustification just, int width) {
    NativeInputCallbackScope callback;
    const auto original = g_native_caption_hooks.draw;
    if (original) callback.call_native([&] { native_graphics_call(original, gps, source, just, width); });
    if (!g_native_announcement_hover_isolated) return;
    if constexpr (BodyRow) {
        if (g_native_announcement_hover_rows > 0)
            --g_native_announcement_hover_rows;
    }
    if (g_native_announcement_hover_rows == 0) {
        g_native_announcement_hover_isolated = false;
        native_notification_end_draw();
    }
}
#endif

// These two call sites count the report rows immediately before the native
// renderer clears its floating rectangle. Redirect every border, fill and
// text write to the notification layer without retaining background cells.
static size_t capture_native_announcement_page_rows(const void *paragraph) {
    NativeInputCallbackScope callback;
    reset_native_announcement_notification_capture();
    const auto original = g_native_announcement_page_rows;
    const size_t rows = original ? callback.call_native([&] { return original(paragraph); }) : 0;
    try {
        auto *gps = native_graphics();
        const auto &binding = g_native_announcement_page_binding;
        if (paragraph && gps && gps->screen && binding.left && binding.bottom &&
                gps->dimx > 0 && gps->dimx <= 1000 &&
                gps->dimy > 0 && gps->dimy <= 1000 && rows <= static_cast<size_t>(INT32_MAX)) {
            int32_t width = 0;
            std::memcpy(&width, static_cast<const unsigned char *>(paragraph) +
                binding.width_offset, sizeof(width));
            const int64_t left = *binding.left, bottom = *binding.bottom;
            const int64_t top = bottom - static_cast<int64_t>(rows) - 3;
            // Long notification lists can begin above the screen. Keep the
            // native coordinates and complete row loop, isolating only their
            // visible intersection instead of falling back to the page grid.
            if (width >= 0 && width <= 1000) {
                if (const auto bounds = native_notification_visible_bounds(
                        *gps, left, top, left + width + 4, bottom)) {
                    const auto source_kind = native_fortress_alert_hover_source_kind(
                        reinterpret_cast<uintptr_t>(paragraph));
                    // Read before begin_draw swaps the page's capture bundle.
                    // This version advances only when native actually wraps
                    // this exact hover box, independently of live report IDs.
                    const auto wrap_generation = native_fortress_alert_hover_wrap_generation(
                        reinterpret_cast<uintptr_t>(paragraph));
                    if (source_kind != NativeFortressAlertSourceKind::None &&
                            native_notification_begin_draw(*bounds)) {
                        g_native_notification_source_kind = source_kind;
                        g_native_notification_source_owner = reinterpret_cast<uintptr_t>(paragraph);
                        g_native_notification_source_wrap_generation = wrap_generation;
                        // Offscreen rows still call addst. The original count
                        // keeps the output redirected until the final body row.
                        g_native_announcement_hover_rows = rows;
                        g_native_announcement_hover_isolated = true;
                    }
                }
            }
        }
    } catch (...) {
        reset_native_announcement_notification_capture();
    }
    return rows;
}

static void capture_native_help_cell(graphicst *gps) {
    gps = native_graphics_view(gps);
    try {
        if (!gps || gps->dimx <= 0 || gps->dimx > 1000 || gps->dimy <= 0 || gps->dimy > 1000 ||
                native_private_ui_write_active(gps) || gps == g_native_info_write_graphics ||
                gps == g_native_stocks_write_graphics || native_notification_write_active(gps) ||
                gps == g_native_display_write_graphics ||
                gps == g_native_squads_write_graphics ||
                gps == g_native_pause_write_graphics ||
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
    if (original) callback.call_native([&] { native_graphics_call(original, gps, tile); });
}
static void capture_native_help_top_tile(graphicst *gps, long tile, char color) {
    NativeInputCallbackScope callback;
    capture_native_help_cell(gps);
    const auto original = g_real_native_help_top_tile;
    if (original) callback.call_native([&] { native_graphics_call(original, gps, tile, color); });
}
static thread_local NativeTooltipWidgetFrame *g_native_tooltip_write = nullptr;

template<typename Draw>
static bool capture_native_tooltip_caption_draw(graphicst *graphics,
        const NativeString *source, Draw &&draw, bool top_layer = false) {
    auto *frame = g_native_tooltip_write;
    if (!frame || !frame->isolated || !graphics ||
            graphics->dimx != frame->dimx || graphics->dimy != frame->dimy ||
            graphics->screen != g_native_tooltip_layer.foreground.graphics()->screen ||
            graphics->screen_top != g_native_tooltip_layer.foreground.graphics()->screen_top)
        return false;
    const auto *screen = top_layer ? graphics->screen_top : graphics->screen;
    const int dimx = graphics->dimx, dimy = graphics->dimy;
    const int x = graphics->screenx, y = graphics->screeny;
    const std::array<long, 4> clip{graphics->clipx[0], graphics->clipx[1],
        graphics->clipy[0], graphics->clipy[1]};
    // addst copies its const source before applying its own width limit.
    // Keep the submitted view across the draw. The complete logical row is
    // still the same document when its native clip hides part of its text.
    std::string_view submitted;
    try { native_string_view(source, &submitted, 65536); }
    catch (...) { submitted = {}; }
    // Tooltip rendering never enters a parent page's field capture or
    // translation. Only the native draw advances its cursor and writes cells.
    draw();
    try {
        const auto &box = frame->bounds;
        if (!screen || graphics->dimx != dimx || graphics->dimy != dimy ||
                (top_layer ? graphics->screen_top : graphics->screen) != screen ||
                y < box.y || y >= box.y + box.h ||
                frame->rows.size() != static_cast<size_t>(box.h)) return true;
        auto &row = frame->rows[static_cast<size_t>(y - box.y)];
        if (row.size() != static_cast<size_t>(box.w)) return true;
        if (frame->glyph_rows.size() != static_cast<size_t>(box.h))
            frame->glyph_rows.assign(static_cast<size_t>(box.h),
                std::string(static_cast<size_t>(box.w), ' '));
        auto &glyph_row = frame->glyph_rows[static_cast<size_t>(y - box.y)];
        if (glyph_row.size() != static_cast<size_t>(box.w))
            glyph_row.assign(static_cast<size_t>(box.w), ' ');
        const int submitted_first = std::max(x, box.x);
        const int submitted_last = static_cast<int>(std::min<int64_t>(
            int64_t(x) + static_cast<int64_t>(submitted.size()), int64_t(box.x) + box.w));
        const bool visible_row = y >= 0 && y < dimy && y >= clip[2] && y <= clip[3];
        const bool drawn_row = visible_row && graphics->screeny == y && graphics->screenx > x;
        const int first = static_cast<int>(std::max<int64_t>({0, x, clip[0],
            int64_t(box.x)}));
        const int last = drawn_row ? static_cast<int>(std::min<int64_t>({dimx,
            graphics->screenx, int64_t(clip[1]) + 1, int64_t(box.x) + box.w})) : first;
        if (submitted_first >= submitted_last && first >= last) return true;
        // The first real text draw supplies the preferred native color plane.
        // Base and top submissions still contribute their actual bytes to
        // the same small document, including independently colored keys.
        if (top_layer && std::all_of(frame->rows.begin(), frame->rows.end(),
                [](const std::string &line) { return trim_view(line).empty(); }))
            frame->top_layer = true;
        // The producer's complete source owns translation identity. Native
        // addst can stop at its global grid width before reaching gps.dimx,
        // or return without advancing a fully clipped row. Neither native
        // cursor progress nor visible glyph bytes may shorten this document.
        for (int column = submitted_first; column < submitted_last; ++column) {
            row[static_cast<size_t>(column - box.x)] =
                submitted[static_cast<size_t>(int64_t(column) - x)];
        }
        for (int column = first; column < last; ++column) {
            unsigned char ch = screen[(static_cast<size_t>(column) * dimy + y) * 8];
            const size_t offset = static_cast<size_t>(int64_t(column) - x);
            if (offset < submitted.size()) {
                const auto expected = static_cast<unsigned char>(submitted[offset]);
                if (native_tooltip_glyph_at(*graphics, column, y, expected, top_layer))
                    ch = expected;
            }
            // Visible native output separately owns source suppression.
            // Keep actual dots here; absent bytes need an exact font-texture
            // match before any submitted source character can be restored.
            glyph_row[static_cast<size_t>(column - box.x)] = ch ? static_cast<char>(ch) : ' ';
        }
        // Preserve an authored alias only when this exact live string owner
        // already has a native squad.alias binding. No spelling lookup or
        // parent-page field discovery participates in tooltip capture.
        std::string_view complete;
        const bool authored = native_string_view(source, &complete, 65536) &&
            native_squad_alias_source_target(complete,
                reinterpret_cast<uintptr_t>(source)).has_value();
        std::optional<NativeDrawnTextRow> alias;
        if (authored && submitted_first < submitted_last) {
            alias.emplace(NativeDrawnTextRow{submitted_first, y,
                row.substr(static_cast<size_t>(submitted_first - box.x),
                    static_cast<size_t>(submitted_last - submitted_first)),
                reinterpret_cast<uintptr_t>(source), true});
            alias->squad_alias_target = native_text_to_utf8(alias->source);
            alias->top_layer = top_layer;
            alias->draw_grid = screen;
            alias->draw_dimx = dimx;
            alias->draw_dimy = dimy;
            alias->draw_epoch = frame->epoch;
            alias->draw_clip = SDL_Rect{first, y, std::max(0, last - first), drawn_row ? 1 : 0};
        }
        std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
        auto &draws = top_layer ? g_native_drawn_top_text_rows : g_native_drawn_text_rows;
        // Reused coordinates cannot inherit a prior alias when this native
        // draw supplies an ordinary caption with coincident source bytes.
        std::erase_if(draws, [&](const NativeDrawnTextRow &previous) {
            return (previous.x == submitted_first || previous.x == first) && previous.y == y;
        });
        ++g_native_drawn_text_revision;
        if (alias && draws.size() < 4096) {
            alias->sequence = ++g_native_drawn_text_sequence;
            g_native_drawn_text_epoch = frame->epoch;
            draws.push_back(std::move(*alias));
        }
    } catch (...) {}
    return true;
}
#include "native_legacy_tooltip.inc"
#include "native_adventure_background_hooks.inc"

// ViewBase::widget::render creates a container named Tooltip. Its children
// draw the background, wrapped body and keys into screen (not screen_top).
// Redirect that actual write scope to the tooltip layer before its children
// draw, including when their owner already has a private output grid.
static void capture_native_tooltip_container(void *widget, uint32_t tick) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeCaptionWidgetRenderFn>(
        g_native_tooltip_container_hook.original);
    if (g_native_tooltip_write && g_native_tooltip_write->isolated) {
        if (original) callback.call_native([&] { original(widget, tick); });
        return;
    }
    std::optional<NativeTooltipWidgetFrame> captured;
    auto *gps = native_graphics();
    try {
        const auto *bytes = static_cast<const unsigned char *>(widget);
        std::string_view name;
#ifdef _WIN32
        const auto *native_name = static_cast<const NativeString *>(native_object_member_address(
            widget, {0x80, "widget", "name"}, sizeof(NativeString)));
#else
        const auto *native_name = widget ? reinterpret_cast<const NativeString *>(bytes + 0x80) : nullptr;
#endif
        if (widget && gps && gps->screen && gps->dimx > 0 && gps->dimx <= 1000 &&
            gps->dimy > 0 && gps->dimy <= 1000 &&
            native_name && native_string_view(native_name, &name, 64) &&
            name == "Tooltip") {
            std::array<int32_t, 4> rect{};
#ifdef _WIN32
            if (!native_object_read_member(widget, {0x10, "widget", "rect"}, rect))
                throw std::runtime_error("Unresolved tooltip widget rectangle");
#else
            std::memcpy(rect.data(), bytes + 0x10, sizeof(rect));
#endif
            const int64_t width = int64_t(rect[2]) - rect[0] + 1;
            const int64_t height = int64_t(rect[3]) - rect[1] + 1;
            if (width >= 3 && width <= 1004 && height >= 3 && height <= 1004 &&
                    native_tooltip_valid_bounds(*gps,
                        SDL_Rect{rect[0], rect[1], static_cast<int>(width), static_cast<int>(height)})) {
                captured.emplace();
                captured->bounds = {rect[0], rect[1], static_cast<int>(width), static_cast<int>(height)};
                captured->dimx = gps->dimx;
                captured->dimy = gps->dimy;
                captured->epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
                captured->rows.assign(static_cast<size_t>(captured->bounds.h),
                    std::string(static_cast<size_t>(captured->bounds.w), ' '));
                if (!native_tooltip_begin_draw(*captured)) captured.reset();
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
    if (captured) native_tooltip_end_draw(*captured);
}
static NativeInfoTitleBinding g_native_info_title_binding;
#ifdef _WIN32
struct NativeInlineCaptionHook {
    uint32_t reference = 0;
    NativeInlineResizeObserver observer;
};
static std::vector<std::unique_ptr<NativeInlineCaptionHook>> g_native_inline_caption_hooks;
using NativeFarmNameFn = NativeString *(*)(const void *, NativeString *);
static NativeEntryHook g_native_farm_name_hook;
static NativeFarmNameFn g_native_farm_name_original = nullptr;
struct NativeFarmNameOwner {
    const NativeString *output = nullptr;
    uintptr_t building = 0;
    uint64_t epoch = 0;
};
static thread_local NativeFarmNameOwner g_native_farm_name_owner;
static NativeString *capture_native_farm_name(const void *building, NativeString *output) {
    NativeInputCallbackScope callback;
    const auto original = g_native_farm_name_original;
    g_native_farm_name_owner = {};
    if (!original) return output;
    NativeString *result = callback.call_native([&] { return original(building, output); });
    g_native_farm_name_owner = {output, reinterpret_cast<uintptr_t>(building),
        g_embark_item_capture_epoch.load(std::memory_order_acquire)};
    return result;
}
#endif

static const unsigned char *native_info_item_list_right_slot(const NativeString *source) {
#ifdef _WIN32
    const uintptr_t owner = reinterpret_cast<uintptr_t>(source);
    return reinterpret_cast<const unsigned char *>(
        native_pe_frame_relative(owner, 0x15a24d, 0x15a185, 4));
#else
    const auto offset = g_native_info_title_binding.item_list_right_slot;
    return source && offset ? reinterpret_cast<const unsigned char *>(source) + offset : nullptr;
#endif
}
static bool native_farm_name_caller(uintptr_t caller) {
    return g_native_info_title_binding.farm_name_return_address &&
        caller == g_native_info_title_binding.farm_name_return_address;
}
static bool native_farm_crop_caller(uintptr_t caller) {
    return g_native_info_title_binding.farm_crop_return_address &&
        caller == g_native_info_title_binding.farm_crop_return_address;
}
static std::vector<NativeCivilizationCaptionSite> g_native_civilization_caption_sites;
static std::vector<NativeLocationPickerSite> g_native_location_picker_sites;
static std::vector<NativeTravelBuildingSite> g_native_travel_building_sites;
static std::vector<NativeAdventureCraftingSite> g_native_adventure_crafting_sites;
static std::vector<NativeAdventureBarterSite> g_native_adventure_barter_sites;
static std::vector<uintptr_t> g_native_mission_title_returns;
static std::vector<uintptr_t> g_native_map_hover_returns;
static std::vector<NativeAdventureLookCaptionSite> g_native_adventure_look_caption_sites;
static size_t g_native_map_hover_text_offset = 0;
static uintptr_t g_native_map_hover_list = 0;
#include "native_caption_static_roles.inc"

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

static NativeAdventureBarterField native_adventure_barter_field(uintptr_t caller) {
    for (const auto &site : g_native_adventure_barter_sites)
        if (site.return_address == caller) return site.field;
    return NativeAdventureBarterField::None;
}

static std::optional<SDL_Rect> native_location_picker_draw_box(
        const graphicst *graphics, const NativeString *source,
        NativeLocationPickerField field, uintptr_t caller = 0) {
    const bool faith = native_faith_picker_field(field);
    const bool subpage = native_location_picker_subpage_field(field);
    const bool detail = native_location_detail_field(field);
    const bool petition = native_accepted_petition_field(field);
    if (field == NativeLocationPickerField::None ||
            field == NativeLocationPickerField::Prompt ||
            !graphics || !graphics->screen ||
            (!subpage && !detail && !petition && !native_ui_classic().value_or(false)))
        return std::nullopt;
    const int x = graphics->screenx, y = graphics->screeny;
    if (graphics->dimx <= 0 || graphics->dimx > 1000 ||
            graphics->dimy <= 0 || graphics->dimy > 1000 ||
            x < 0 || x >= graphics->dimx || y < 0 || y >= graphics->dimy)
        return std::nullopt;
    NativePanelReadScope panel_scope(graphics);
    if (detail || petition) {
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
        // The accepted-petition renderer reserves 55 cells for each field,
        // including names whose complete source exceeds the dotted caption.
        if (petition) right = std::min(right, x + 55);
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

static int capture_native_uniform_member_right(uintptr_t caller, uintptr_t source, int x) {
#ifdef _WIN32
    const uintptr_t base = native_history_profile_base();
    if (!base || !caller || source < 0x474 ||
            caller != native_reference_address(base, 0x457205) + 5) return -1;
    // Both PE equipment renderers keep the name at rbp+0x3e8, with
    // rbp=rsp+0x100. The row's right anchor is rsp+0x74 and its name X
    // is rbp-0x10. The anchor already includes the scrollbar adjustment.
    // Native resize at 0x4571a7 leaves one cell before the first equipment
    // icon (anchor-0x40); short English names own the same full column.
    int32_t anchor = 0, name_x = -1;
    if (!native_history_copy(source - 0x474, anchor) ||
            !native_history_copy(source - 0x3f8, name_x) || name_x != x ||
            anchor <= 0x41 || anchor > 1000 || anchor - 0x41 <= x) return -1;
    return anchor - 0x41;
#else
    (void)caller; (void)source; (void)x;
    return -1;
#endif
}

static int capture_native_squad_list_right(uintptr_t caller, uintptr_t source, int x) {
#ifdef _WIN32
    const uintptr_t base = native_history_profile_base();
    if (!base || !caller || !source) return -1;
    uintptr_t anchor_offset = 0;
    if (caller == native_reference_address(base, 0x4456b9) + 5)
        anchor_offset = 0x1cc; // squad name at rbp+0x130
    else if (caller == native_reference_address(base, 0x4458af) + 5)
        anchor_offset = 0x1ac; // order at rbp+0x110
    else if (caller == native_reference_address(base, 0x445987) + 5)
        anchor_offset = 0x18c; // routine at rbp+0xf0
    if (!anchor_offset || source < anchor_offset) return -1;
    // Both PE list renderers keep the right anchor at rsp+0x64 and the
    // text X at rsp+0x68, with rbp=rsp+0x100. The anchor already reserves
    // the scrollbar when present. Name/order resize to anchor-X-1 cells;
    // retain that allocation for every translated field in the same row.
    int32_t anchor = 0, text_x = -1;
    if (!native_history_copy(source - anchor_offset, anchor) ||
            !native_history_copy(source - anchor_offset + 4, text_x) ||
            text_x != x || x < 0 || anchor <= x + 1 || anchor > 1000) return -1;
    return anchor - 1;
#else
    (void)caller; (void)source; (void)x;
    return -1;
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
    // The ELF renderer passes its complete name at rsp+0xf0. The live list
    // and visible index are rsp+0x40 and rsp+0x48; resolve the actual virtual
    // owner before the item, contaminant and action grammars see the field.
    if (caller != native_reference_va(0x119a2ef) || source < 0xb0)
        return NativeAdventureInventoryRole::None;
    uintptr_t list = 0, index = 0, option = 0, table = 0, provider = 0;
    int32_t mode = -1;
    NativeBorrowedVector<void *> options;
    if (!native_history_copy(source - 0xb0, list) || !list || list > UINTPTR_MAX - 0x30 ||
            !native_history_copy(source - 0xa8, index) ||
            !native_history_copy(list + 4, mode) || mode < 0 || mode > 10 ||
            !native_history_copy(list + 0x18, options) || !options.valid() ||
            index >= options.size()) return NativeAdventureInventoryRole::None;
    if (!native_history_copy(reinterpret_cast<uintptr_t>(options.begin) +
                index * sizeof(void *), option) || !option ||
            !native_history_copy(option, table) || !table || table > UINTPTR_MAX - 0x18 ||
            !native_history_copy(table + (mode == 8 || mode == 9 ? 0x10 : 8), provider))
        return NativeAdventureInventoryRole::None;
    static const std::array item_providers{
        native_reference_va(0x11614d0), native_reference_va(0x11615e0),
        native_reference_va(0x11616f0), native_reference_va(0x1161800),
        native_reference_va(0x1161910), native_reference_va(0x1161a20),
        native_reference_va(0x1161b30), native_reference_va(0x1161c40),
        native_reference_va(0x1161d50)};
    if (provider && std::find(item_providers.begin(), item_providers.end(), provider) !=
            item_providers.end()) return NativeAdventureInventoryRole::Item;
    if (provider == native_reference_va(0x1162b40))
        return NativeAdventureInventoryRole::Deposit;
    if (mode == 5 || mode == 7 || mode == 8 || mode == 9)
        return NativeAdventureInventoryRole::Action;
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
    const auto read_field = [&](native_history_abi::FieldOffset offset, auto &value) {
        return native_history_copy(offset.address(address, 0, sizeof(value), sizeof(value)), value);
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
    return native_history_copy_string(native_history_layout::textbox_string_offset.address(
        address, 0, sizeof(NativeString), sizeof(NativeString)), text);
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
#include "native_map_hover_abi.inc"
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
    native_map_hover_record(record, context);
    return context;
}

static bool native_info_title_authored(NativeInfoTitleKind kind,
        const NativeString *source, uintptr_t caller) {
    // The coffin's linked-room caption passes the nonempty stored name at
    // room+0xd0 itself, not the title's temporary stack string. Preserve it
    // by provenance before attempting the title-specific frame offsets.
    if (kind == NativeInfoTitleKind::Building) {
        const uintptr_t base = native_history_profile_base();
#ifdef _WIN32
        if (base && caller == native_pe_address(base, 0x195db5)) return true;
#else
        if (base && caller == native_reference_address(base, 0x13e1c9b)) return true;
#endif
    }
    const auto &binding = g_native_info_title_binding;
    const bool farm_name = binding.farm_name_return_address &&
        caller == binding.farm_name_return_address;
    if (!farm_name && kind != NativeInfoTitleKind::Building) return false;
    const ptrdiff_t building_slot = farm_name ? binding.farm_building_slot : binding.building_slot;
    if (!source || !binding.building_name.contains(0, sizeof(NativeString), sizeof(NativeString)) ||
        (!farm_name && !binding.editing_name.contains(0, 1, 1))) return true;
#ifndef _WIN32
    if (!binding.building_name || (!farm_name && !binding.editing_name)) return true;
    if (!building_slot || (!farm_name && !binding.sheet_slot)) return true;
#endif
    const unsigned char *building = nullptr;
#ifdef _WIN32
    if (!farm_name) {
        // The title renderer looks up this sheet's active ID in the native
        // building collection. Its actual entry argument survives nested
        // callbacks without depending on the renderer's local stack slots.
        const native_history_abi::FieldOffset id_field{0x50, "building", "id"};
        int32_t id = -1;
        uintptr_t selected = 0;
        if (!native_history_copy(native_character_sheet_field(
                g_native_character_drawing_sheet, 0xc, "active_id", 4), id) || id < 0 ||
                !id_field.contains(0, sizeof(id), sizeof(id)) ||
                !native_history_find_structure_id(native_history_global(0x23edf10),
                    id_field.runtime(), id, selected) || !selected) return true;
        building = reinterpret_cast<const unsigned char *>(selected);
    } else {
        // This is the real getName receiver associated with the submitted
        // output, not a local variable at a historical frame displacement.
        const auto &owner = g_native_farm_name_owner;
        if (owner.output != source || !owner.building ||
                owner.epoch != g_embark_item_capture_epoch.load(std::memory_order_acquire)) return true;
        building = reinterpret_cast<const unsigned char *>(owner.building);
    }
#else
    {
        // The independent Places renderer retains its separately evidenced
        // building local beside the submitted farm-name string.
        const auto *bytes = reinterpret_cast<const unsigned char *>(source);
        if (!native_info_title_memory_readable(bytes + building_slot, sizeof(building))) return true;
        std::memcpy(&building, bytes + building_slot, sizeof(building));
    }
#endif
    const auto name_address = binding.building_name.address(
        reinterpret_cast<uintptr_t>(building), 0, sizeof(NativeString), sizeof(NativeString));
    if (!native_info_title_memory_readable(reinterpret_cast<const void *>(name_address),
            sizeof(NativeString))) return true;
    if (!farm_name) {
#ifdef _WIN32
        const uintptr_t sheet = g_native_character_drawing_sheet;
        const uintptr_t editing_address = binding.editing_name.address(sheet, 0, 1, 1);
        unsigned char editing = 0;
        if (!native_history_copy(editing_address, editing)) return true;
#else
        const auto *bytes = reinterpret_cast<const unsigned char *>(source);
        const unsigned char *sheet = nullptr;
        if (!native_info_title_memory_readable(bytes + binding.sheet_slot, sizeof(sheet))) return true;
        std::memcpy(&sheet, bytes + binding.sheet_slot, sizeof(sheet));
        if (!native_info_title_memory_readable(sheet, binding.editing_name + 1)) return true;
        unsigned char editing = 0;
        std::memcpy(&editing, sheet + binding.editing_name, sizeof(editing));
#endif
        if (editing) return true;
    }
    std::string_view name;
    if (!native_string_view(reinterpret_cast<const NativeString *>(
            name_address), &name, 4096)) return true;
    return !name.empty();
}

static bool native_multiline_announcement_source(std::string_view source) {
    return native_announcement_sources()->originals.contains(
        native_announcement_display_source(source));
}

static std::string native_multiline_single_wrap_source(std::string_view source) {
    std::string result(source);
    for (char &ch : result)
        if (ch == '\r' || ch == '\n') ch = ' ';
    return result;
}

static int32_t native_multiline_wrap_rows(std::string_view source, size_t width) {
    if (!width || source.size() <= width) return 1;
    size_t cursor = 0;
    int32_t rows = 0;
    while (cursor < source.size()) {
        size_t length = std::min(width, source.size() - cursor);
        if (length == width) {
            const size_t separator = source.substr(cursor, length).find_last_of("- ");
            if (separator != std::string_view::npos) length = separator + 1;
        }
        cursor += length;
        ++rows;
    }
    return std::max<int32_t>(1, rows);
}

#ifdef _WIN32
// ede70 creates a generic container with precisely controls/body/Date.
// Read those actual owners and complete strings; a matching visible fragment
// cannot identify a report or grant ownership of neighbouring widgets.
static bool arrange_native_report_multiline(void *widget,
        NativeInputCallbackScope &callback) {
    const auto &binding = g_native_multiline_widget_binding;
    const uintptr_t base = native_history_profile_base();
    const uintptr_t current = reinterpret_cast<uintptr_t>(widget);
    if (!base) return false;
    struct ReportTables { uintptr_t base, parent, controls, text; };
    static const ReportTables tables{base,
        native_pe_address(base, 0x15eb4a8), native_pe_address(base, 0x15f6fc0),
        native_pe_address(base, 0x15f6ee8)};
    if (base != tables.base) return false;
    const native_history_abi::FieldOffset parent_member{8, "widget", "parent"},
        children_member{0x160, "widget_container", "children"},
        anchor_left_member{0xbc, "widget", "anchor_left"},
        right_member{0xac, "widget", "offset_right"},
        top_member{0xb0, "widget", "offset_top"};
    if (!parent_member.contains(0, 8, 8) || !children_member.contains(0, 24, 24) ||
            !anchor_left_member.contains(0, 4, 4) || !right_member.contains(0, 4, 4) ||
            !top_member.contains(0, 4, 4)) return false;
    // The original arrange has just used this live widget and its parent.
    // Their owning shared_ptr vector keeps all three children alive during
    // this callback. Copy these owned fields directly; report construction
    // repeatedly arranges earlier records and must not issue OS memory-read
    // calls or VirtualQuery for every field of every earlier record.
    const auto read = []<typename T>(uintptr_t address, T &value) {
        std::memcpy(&value, reinterpret_cast<const void *>(address), sizeof(value));
    };
    uintptr_t parent = 0, parent_table = 0;
    read(current + parent_member, parent);
    if (!parent) return false;
    read(parent, parent_table);
    if (parent_table != tables.parent) return false;
    std::array<uintptr_t, 3> vector{};
    read(parent + children_member, vector);
    if (!vector[0] ||
            vector[1] < vector[0] || vector[1] - vector[0] != 3 * 16 ||
            vector[2] < vector[1]) return false;
    uintptr_t controls = 0, body = 0, date = 0, table = 0, owner = 0;
    read(vector[0], controls);
    read(vector[0] + 16, body);
    read(vector[0] + 32, date);
    if (!controls || !body || !date || (current != body && current != date)) return false;
    read(controls, table);
    read(controls + parent_member, owner);
    if (table != tables.controls || owner != parent) return false;
    for (const uintptr_t child : {body, date}) {
        read(child, table);
        read(child + parent_member, owner);
        if (table != tables.text || owner != parent) return false;
    }
    std::string_view body_source, date_source;
    if (!native_string_view(reinterpret_cast<const NativeString *>(body + binding.text),
                &body_source, 262144) || !native_multiline_announcement_source(body_source) ||
            !native_string_view(reinterpret_cast<const NativeString *>(date + binding.text),
                &date_source, 4096) || !date_source.starts_with("Date: ") ||
            !parse_native_calendar_date(date_source.substr(5))) return false;
    std::array<int32_t, 4> parent_rect{}, controls_rect{};
    int32_t controls_width = 0;
    read(parent + binding.rect, parent_rect);
    read(controls + binding.rect, controls_rect);
    read(controls + binding.minimum_width, controls_width);
    const bool enabled = g_overlay.translation_enabled();
    int32_t right_offset = 0;
    if (enabled && controls_width > 0) {
        if (controls_rect[0] <= parent_rect[0] || controls_rect[0] > parent_rect[2] ||
                controls_rect[2] < controls_rect[0]) return false;
        // The native buttons remain visible. Reserve their real sibling
        // rectangle so source margins contain only this report's own text.
        right_offset = controls_rect[0] - 1 - parent_rect[2];
    }
    const auto write = [](uintptr_t address, int32_t value) {
        std::memcpy(reinterpret_cast<void *>(address), &value, sizeof(value));
    };
    // Both preset9 text widgets anchor at left=0. The zero float and the
    // integer offset have separate target fields and cannot share a delta.
    write(body + anchor_left_member, 0);
    write(date + anchor_left_member, 0);
    write(body + right_member, right_offset);
    write(date + right_member, right_offset);
    callback.call_native([&] { binding.base_arrange(reinterpret_cast<void *>(body)); });
    callback.call_native([&] { binding.base_arrange(reinterpret_cast<void *>(date)); });
    if (!enabled) {
        // Both native constructors set these fields unconditionally. Restore
        // their exact values when translation is disabled, without retaining
        // pointers to widgets after their destruction.
        write(date + top_member, 1);
        write(parent + binding.minimum_height, 3);
        callback.call_native([&] { binding.base_arrange(reinterpret_cast<void *>(parent)); });
        callback.call_native([&] { binding.base_arrange(reinterpret_cast<void *>(date)); });
        return true;
    }
    std::array<int32_t, 4> body_rect{}, date_rect{};
    read(body + binding.rect, body_rect);
    read(date + binding.rect, date_rect);
    const int64_t body_width = int64_t(body_rect[2]) - body_rect[0] + 1;
    const int64_t date_width = int64_t(date_rect[2]) - date_rect[0] + 1;
    if (body_width <= 0 || body_width > 262144 || date_width <= 0 ||
            date_width > 262144) return true;
    const std::string normalized = native_multiline_single_wrap_source(body_source);
    const int32_t body_rows = std::max(
        native_multiline_wrap_rows(normalized, static_cast<size_t>(body_width)),
        g_overlay.native_report_layout_rows(body_source, static_cast<int>(body_width)));
    const int32_t date_rows = native_multiline_wrap_rows(
        date_source, static_cast<size_t>(date_width));
    write(body + binding.minimum_height, body_rows);
    write(date + binding.minimum_height, date_rows);
    write(date + top_member, body_rows);
    write(parent + binding.minimum_height, std::max<int32_t>(3, body_rows + date_rows + 1));
    // Generic container::arrange does not aggregate children. Its caller
    // scroll_rows consumes this parent height immediately in the first pass.
    // Only base arrange is safe here; invoking the container would recurse
    // through the hooked body and restore the rough native height estimate.
    callback.call_native([&] { binding.base_arrange(reinterpret_cast<void *>(parent)); });
    callback.call_native([&] { binding.base_arrange(reinterpret_cast<void *>(body)); });
    callback.call_native([&] { binding.base_arrange(reinterpret_cast<void *>(date)); });
    return true;
}
#endif

static void arrange_native_multiline_widget(void *widget) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeCaptionWidgetArrangeFn>(
        g_native_multiline_arrange_hook.original);
    if (!original) return;
    callback.call_native([&] { original(widget); });
    if (g_native_tooltip_write) return;
    try {
        const auto &binding = g_native_multiline_widget_binding;
        if (!widget || !binding.base_arrange || !binding.minimum_height) return;
#ifdef _WIN32
        if (arrange_native_report_multiline(widget, callback)) return;
#endif
        if (!g_overlay.translation_enabled()) return;
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
                &source, 262144)) return;
        std::string normalized;
        if (source.find_first_of("\r\n") != std::string_view::npos) {
#ifdef _WIN32
            // Both PE wrappers append newline prefixes, then wrap the entire
            // original string again from offset zero. The report render call
            // below instead supplies one copied paragraph to that same wrapper.
            if (!native_multiline_announcement_source(source)) return;
            normalized = native_multiline_single_wrap_source(source);
            source = normalized;
#else
            return;
#endif
        }
        if (source.size() <= static_cast<size_t>(width)) return;

        // The native arrange divides bytes by width, but render wraps at
        // the last hyphen/space, retaining that separator in the row. Count
        // that exact no-newline path without touching its shared wrap vector.
        // Only full-width slices are shortened, including a full last slice.
        const int32_t rows = native_multiline_wrap_rows(source, static_cast<size_t>(width));
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
    std::string wrap_source;
    bool single_wrap = false;
    std::vector<std::string> rows;
    std::vector<uintptr_t> addresses;
};
// This trivial TLS pointer borrows only the current render's stack scope.
// NativeImportHook/NativeInputCallbackScope protect the callback lifetime.
static thread_local NativeMultilineCapture *g_native_multiline_capture = nullptr;

#ifdef _WIN32
static void wrap_native_multiline_announcement(const NativeString *source, void *unused, int width) {
    NativeInputCallbackScope callback;
    if (!g_native_multiline_wrap) return;
    std::string normalized;
    NativeString borrowed = native_empty_string();
    try {
        std::string_view text;
        if (!g_native_tooltip_write && g_native_multiline_capture && g_overlay.translation_enabled() &&
                native_string_view(source, &text, 262144) &&
                text.find_first_of("\r\n") != std::string_view::npos &&
                native_multiline_announcement_source(text)) {
            normalized = native_multiline_single_wrap_source(text);
            borrowed.size = normalized.size();
            if (normalized.size() <= 15) {
                std::memcpy(borrowed.storage.small, normalized.c_str(), normalized.size() + 1);
            } else {
                borrowed.storage.heap = normalized.data();
                borrowed.capacity = normalized.size();
            }
            g_native_multiline_capture->single_wrap = true;
            // The native wrapper only reads this string and copies its rows.
            // Its input borrows our buffer; no game-owned string is changed,
            // and no allocation crosses the two C++ runtimes.
            source = &borrowed;
        }
    } catch (...) {}
    callback.call_native([&] { g_native_multiline_wrap(source, unused, width); });
}
#endif

static void capture_native_multiline_row(graphicst *graphics, const NativeString *source) {
    auto *capture = g_native_multiline_capture;
    if (g_native_tooltip_write || !capture || capture->invalid || !graphics) return;
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
            capture->wrap_source = capture->single_wrap
                ? native_multiline_single_wrap_source(complete) : capture->source;
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
        // Match every byte of the actual wrap input in order, including rows
        // drawn outside clipy. Announcement newline normalization owns only
        // that borrowed input; source still retains the complete original.
        // Never join a visible subset and call it the complete paragraph.
        while (capture->source_cursor < capture->wrap_source.size() &&
            (capture->wrap_source[capture->source_cursor] == '\r' ||
             capture->wrap_source[capture->source_cursor] == '\n')) ++capture->source_cursor;
        if (capture->wrap_source.compare(capture->source_cursor, row.size(), row) != 0) {
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
    if (g_native_tooltip_write || native_private_ui_write_active(native_graphics())) {
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
        while (capture.source_cursor < capture.wrap_source.size() &&
            (capture.wrap_source[capture.source_cursor] == '\r' ||
             capture.wrap_source[capture.source_cursor] == '\n')) ++capture.source_cursor;
        if (capture.source_cursor != capture.wrap_source.size()) return;
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

struct NativeMapHoverUnitIdentity {
    NativeMapHoverContext context;
    NativeUnitIdentitySource identity;
};
static std::mutex g_native_map_hover_unit_identity_mutex;
static std::unordered_map<uintptr_t, NativeMapHoverUnitIdentity>
    g_native_map_hover_unit_identities;

static bool native_map_hover_unit_identity_matches(
        const NativeUnitIdentitySource &identity, std::string_view source,
        uint64_t catalog) {
    // Untyped formatter fallbacks have no catalog. Keeping
    // their native spelling here would turn a missed capture into a permanent
    // untranslated result for an otherwise recoverable look record.
    return identity.source == source && identity.catalog == catalog &&
        (identity.ready || !identity.semantic_key.empty());
}

static void remember_native_map_hover_unit_identity(uintptr_t owner,
        const NativeMapHoverContext &context, const NativeUnitIdentitySource &identity) {
    if (!owner || context.kind != NativeMapHoverKind::Unit ||
            identity.catalog != current_native_identity_translation_catalog() ||
            (!identity.ready && identity.semantic_key.empty())) return;
    std::lock_guard<std::mutex> lock(g_native_map_hover_unit_identity_mutex);
    if (g_native_map_hover_unit_identities.size() >= 4096 &&
            !g_native_map_hover_unit_identities.contains(owner))
        g_native_map_hover_unit_identities.erase(g_native_map_hover_unit_identities.begin());
    g_native_map_hover_unit_identities.insert_or_assign(owner,
        NativeMapHoverUnitIdentity{context, identity});
}

static void prepare_native_map_hover_unit_identity(NativeDrawnTextRow &row) {
    if (row.map_hover.kind != NativeMapHoverKind::Unit || !row.address) return;
    row.unit_identity_target.reset();
    row.unit_identity_owner = 0;
    row.unit_identity_english = false;
    row.unit_identity_header = false;
    row.unit_identity_ready = true;
    row.unit_identity_semantic_key.clear();
    row.unit_identity_pending.reset();
    try {
        const auto source = row.complete_source.empty() ? std::string_view(row.source)
            : std::string_view(row.complete_source);
        if (source.empty()) return;
        const uint64_t catalog = current_native_identity_translation_catalog();
        std::optional<NativeUnitIdentitySource> identity;
        {
            std::lock_guard<std::mutex> lock(g_native_map_hover_unit_identity_mutex);
            const auto found = g_native_map_hover_unit_identities.find(row.address);
            if (found != g_native_map_hover_unit_identities.end()) {
                const auto &entry = found->second;
                if (entry.context.kind == row.map_hover.kind &&
                        entry.context.data == row.map_hover.data &&
                        entry.context.fragment == row.map_hover.fragment &&
                        native_map_hover_unit_identity_matches(entry.identity, source, catalog))
                    identity = entry.identity;
                else g_native_map_hover_unit_identities.erase(found);
            }
        }
        if (!identity) {
            auto current = native_unit_identity_source_binding(source, row.address);
            if (current && native_map_hover_unit_identity_matches(*current, source, catalog))
                identity = std::move(current);
        }
        if (!identity)
            identity = recover_native_map_hover_unit_identity(row.map_hover.data[0], source);
        if (!identity || !native_map_hover_unit_identity_matches(*identity, source, catalog)) return;
        if (!identity->ready) {
            // A look record survives ordinary draw epochs. Its copied typed
            // binding can retrieve the completed worker result even after
            // another panel has cleared the transient formatter registry.
            auto prepared = prepare_native_unit_identity_source_binding(source, row.address,
                identity->semantic_key, &*identity);
            if (prepared && native_map_hover_unit_identity_matches(*prepared, source, catalog))
                identity = std::move(prepared);
        }
        if (catalog != current_native_identity_translation_catalog()) return;
        remember_native_map_hover_unit_identity(row.address, row.map_hover, *identity);
        row.unit_identity_target = identity->ready ? identity->target : std::string{};
        row.unit_identity_owner = identity->unit_owner;
        row.unit_identity_english = identity->english_name;
        row.unit_identity_header = identity->character_header;
        row.unit_identity_ready = identity->ready;
        row.unit_identity_semantic_key = identity->semantic_key;
        if (!identity->ready)
            row.unit_identity_pending = std::make_shared<const NativeUnitIdentitySource>(*identity);
    } catch (...) {}
}

static void capture_native_map_caption_build(void *record) {
    // The creator and both native draw loops retain this same record+offset
    // string. Invalidate at EVERY rebuild, including short/non-track records,
    // so allocator reuse cannot attach an old expansion to a new caption.
    try {
        const auto *source = reinterpret_cast<const NativeString *>(
            static_cast<const unsigned char *>(record) +
            g_native_map_track_caption_hooks.text_offset);
        {
            std::lock_guard<std::mutex> lock(g_native_map_track_caption_mutex);
            std::erase_if(g_native_map_track_captions,
                [&](const NativeMapTrackCaption &caption) { return caption.owner == source; });
        }
        {
            std::lock_guard<std::mutex> lock(g_native_map_hover_unit_identity_mutex);
            g_native_map_hover_unit_identities.erase(reinterpret_cast<uintptr_t>(source));
        }
    } catch (...) {}
    if (g_native_map_track_caption_hooks.build)
        g_native_map_track_caption_hooks.build(record);
    try {
        const uintptr_t owner = reinterpret_cast<uintptr_t>(record);
        const size_t offset = g_native_map_track_caption_hooks.text_offset;
        NativeMapHoverContext context;
        if (!owner || !offset || offset > UINTPTR_MAX - owner ||
                !native_map_hover_record(owner, context) ||
                context.kind != NativeMapHoverKind::Unit) return;
        const auto *source = reinterpret_cast<const NativeString *>(owner + offset);
        std::string_view text;
        if (!native_string_view(source, &text, 65536) || text.empty()) return;
        const auto identity = native_unit_identity_source_binding(text, owner + offset);
        if (!identity || !native_map_hover_unit_identity_matches(*identity, text,
                current_native_identity_translation_catalog())) return;
        remember_native_map_hover_unit_identity(owner + offset, context, *identity);
    } catch (...) {}
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
    if (!native_history_copy_string(native_history_layout::squad_alias_offset.address(
            squad, 0, sizeof(NativeString), sizeof(NativeString)), alias)) return;
    std::optional<NativeHistoryName> generated;
    NativeInputCallbackScope callback;
    const auto destroy = hooks.destroy;
    if (!alias.empty()) source = alias;
    else {
        if (!hooks.english_name) return;
        const auto name = native_history_object_member(squad, "squad", "name.first_name", sizeof(NativeString));
        if (!name) return;
        NativeSearchString output(destroy);
        callback.call_native([&] {
            hooks.english_name(reinterpret_cast<const void *>(name),
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
    const native_history_abi::FieldOffset children_offset =
#ifdef _WIN32
        {0x160, "widget_container", "children"};
#else
        0x180;
#endif
    const native_history_abi::FieldOffset options_offset =
#ifdef _WIN32
        {0x2c0, "widget_unit_list", "options"};
#else
        0x2b8;
#endif
    const auto read_member = [](uintptr_t address, native_history_abi::FieldOffset field, auto &value) {
        return native_history_copy(field.address(address, 0, sizeof(value), sizeof(value)), value);
    };
    const auto read_widget = [&](uintptr_t address, uintptr_t reference,
            Widget &result) {
        const uintptr_t expected = table_address(reference);
        uintptr_t vtable = 0;
        uint8_t flags = 0;
        if (!expected || !native_history_copy(address, vtable) || vtable != expected ||
                !read_member(address, {0xa0, "widget", "flag"}, flags) || (flags & 3) != 3 ||
                !read_member(address, {0x08, "widget", "parent"}, result.parent) ||
                !read_member(address, {0x10, "widget", "rect"}, result.rect)) return false;
        result.address = address;
        // unit_name can reserve zero rows (y2 == y1 - 1), while render()
        // draws its squad heading at y1 - 2 and identity at y1 - 1/y1.
        // Its real caption belongs to the surrounding three-row unit record;
        // requiring a nonempty widget rectangle discards every such owner.
        const bool zero_height_name = reference == 0x162eaf8 &&
            result.rect[3] == result.rect[1] - 1;
        return result.rect[0] >= 0 && result.rect[1] >= 0 &&
            result.rect[2] >= result.rect[0] &&
            (result.rect[3] >= result.rect[1] || zero_height_name);
    };
    const auto children = [&](const Widget &parent,
            std::array<uintptr_t, 3> &vector) {
        if (!read_member(parent.address, children_offset, vector)) return false;
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

    // Other unit-list columns may also contain rows of truncated captions.
    std::array<uintptr_t, 3> options{};
    if (!read_member(list.address, options_offset, options)) return;
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
            read_member(member, {0x150, "widget_unit_portrait", "u"}, portrait_unit);
        } else if (read_widget(member, 0x162eaf8, name) && name.parent == row.address) {
            uint8_t profession = 0, gender = 0, one_line = 0;
            int32_t minimum_width = 0;
            if (!read_member(member, {0x159, "widget_unit_name", "show_profession"}, profession) || !profession ||
                    !read_member(member, {0x150, "widget_unit_name", "u"}, name_unit) ||
                    !read_member(member, {0x158, "widget_unit_name", "show_gender"}, gender) ||
                    !read_member(member, {0x15a, "widget_unit_name", "one_line_only"}, one_line) ||
                    !read_member(member, {0xc4, "widget", "min_w"}, minimum_width)) continue;
            name_widget = name;
            show_gender = gender != 0;
            truncate_identity = one_line != 0;
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
            int32_t type = -1;
            if (!native_history_copy(native_history_object_member(member,
                    "widget_textbox", "textbox_type"), type)) continue;
            std::string value;
            const native_history_abi::FieldOffset name_member{0x80, "widget", "name"};
            if (type == 0 && native_history_copy_string(name_member.address(
                    member, 0, sizeof(NativeString), sizeof(NativeString)), value) &&
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
    if (g_native_tooltip_write || native_private_ui_write_active(native_graphics())) return;
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
static NativeClippedPending &native_embark_civilization_clipped_pending() {
    return reloadable_thread_state<NativeClippedPending, struct EmbarkCivilizationClippedCaptionTag>();
}
static NativeClippedPending &native_designation_clipped_pending() {
    return reloadable_thread_state<NativeClippedPending, struct DesignationClippedCaptionTag>();
}
static NativeClippedPending &native_topbar_clipped_pending() {
    return reloadable_thread_state<NativeClippedPending, struct TopbarClippedCaptionTag>();
}
static NativeClippedPending &native_map_hover_clipped_pending() {
    return reloadable_thread_state<NativeClippedPending, struct MapHoverClippedCaptionTag>();
}
static NativeClippedPending &native_petition_clipped_pending() {
    return reloadable_thread_state<NativeClippedPending, struct PetitionDetailClippedCaptionTag>();
}
static NativeClippedPending &native_petitions_clipped_pending() {
    return reloadable_thread_state<NativeClippedPending, struct PetitionsClippedCaptionTag>();
}
static NativeClippedPending &native_squads_clipped_pending() {
    return reloadable_thread_state<NativeClippedPending, struct SquadsClippedCaptionTag>();
}
static NativeClippedPending &native_worldgen_clipped_pending() {
    return reloadable_thread_state<NativeClippedPending, struct WorldgenClippedCaptionTag>();
}
static NativeClippedPending &native_character_clipped_pending() {
    return reloadable_thread_state<NativeClippedPending, struct CharacterClippedCaptionTag>();
}
static NativeClippedPending &native_clipped_pending() {
    if (g_native_map_hover_write_graphics &&
            native_graphics() == g_native_map_hover_write_graphics)
        return native_map_hover_clipped_pending();
    if (g_native_petition_write_graphics &&
            native_graphics() == g_native_petition_write_graphics)
        return native_petition_clipped_pending();
    // Native temporary strings from the sidebar must never consume or
    // replace a pending resize belonging to the background page.
    if (g_native_petitions_write_graphics &&
            native_graphics() == g_native_petitions_write_graphics)
        return native_petitions_clipped_pending();
    if (g_native_embark_civilization_write_graphics &&
            native_graphics() == g_native_embark_civilization_write_graphics)
        return native_embark_civilization_clipped_pending();
    if (g_native_designation_write_graphics &&
            native_graphics() == g_native_designation_write_graphics)
        return native_designation_clipped_pending();
    if (g_native_topbar_write_graphics &&
            native_graphics() == g_native_topbar_write_graphics)
        return native_topbar_clipped_pending();
    if (g_native_squads_write_graphics &&
            native_graphics() == g_native_squads_write_graphics)
        return native_squads_clipped_pending();
    if (g_native_worldgen_write_graphics &&
            native_graphics() == g_native_worldgen_write_graphics)
        return native_worldgen_clipped_pending();
    if (g_native_character_write_graphics &&
            native_graphics() == g_native_character_write_graphics)
        return native_character_clipped_pending();
    return reloadable_thread_state<NativeClippedPending, struct ClippedCaptionTag>();
}

static bool native_caption_separate_output(const graphicst *graphics) noexcept {
    return graphics && (native_notification_write_active(graphics) ||
        graphics == g_native_announcement_log_write_graphics ||
        graphics == g_native_pause_write_graphics);
}

static void capture_native_roster_shorten(NativeString *source, int width) {
    if (g_native_announcement_log_write_graphics &&
            native_graphics() == g_native_announcement_log_write_graphics) {
        if (const auto original = g_native_clipped_caption_hooks.roster_shorten)
            original(source, width);
        return;
    }
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
    if (g_native_tooltip_write || (native_private_ui_write_active(native_graphics()) &&
            native_graphics() != g_native_worldgen_write_graphics &&
            native_graphics() != g_native_topbar_write_graphics &&
            native_graphics() != g_native_map_hover_write_graphics &&
            native_graphics() != g_native_petition_write_graphics &&
            native_graphics() != g_native_petitions_write_graphics &&
            native_graphics() != g_native_designation_write_graphics &&
            native_graphics() != g_native_embark_civilization_write_graphics) ||
            native_caption_separate_output(native_graphics())) return;
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

#ifdef _WIN32
template<bool Plain, bool Pad>
static void observe_native_inline_resize(NativeString *source, size_t width) noexcept {
    try {
        NativeInputCallbackScope callback;
        if (g_native_announcement_log_write_graphics &&
                native_graphics() == g_native_announcement_log_write_graphics) return;
        remember_native_clipped_resize(source, width, 0, Pad, Plain);
    } catch (...) {}
}

static void observe_native_inline_append(NativeString *source, size_t count, char fill) noexcept {
    try {
        NativeInputCallbackScope callback;
        if (g_native_announcement_log_write_graphics &&
                native_graphics() == g_native_announcement_log_write_graphics) return;
        std::string_view complete;
        // These declared caption branches append at most one NUL before
        // their dot stores. The caller's RDX remains an additional count;
        // only our capture width is length+count. Unsupported calls clear a
        // previous same-address capture and always retain native execution.
        const size_t width = fill == 0 && count <= 1 &&
            native_string_view(source, &complete, 4096) && complete.size() <= SIZE_MAX - count
                ? complete.size() + count : 0;
        remember_native_clipped_resize(source, width, fill, true);
    } catch (...) {}
}
#endif

#ifdef _WIN32
static void capitalize_native_character_group_role(std::string &text) {
    // 52d650 changes the first eligible byte, skipping bracket controls and
    // the same leading spaces/quotes. Preserve its CP437 case pairs too.
    int brackets = 0;
    bool first = true;
    for (size_t i = 0; i < text.size(); ++i) {
        const auto ch = static_cast<unsigned char>(text[i]);
        if (ch == '[') { ++brackets; continue; }
        if (ch == ']') { --brackets; continue; }
        if (brackets > 0) continue;
        const bool eligible = first || (i > 0 &&
            (text[i - 1] == ' ' || text[i - 1] == '"' ||
             (text[i - 1] == '\'' && i >= 2 &&
              (text[i - 2] == ' ' || text[i - 2] == ','))));
        if (!eligible) continue;
        if (ch >= 'a' && ch <= 'z') {
            text[i] = static_cast<char>(ch - 'a' + 'A');
            return;
        }
        unsigned char upper = ch;
        switch (ch) {
        case 0x81: upper = 0x9a; break;
        case 0x82: upper = 0x90; break;
        case 0x84: upper = 0x8e; break;
        case 0x86: upper = 0x8f; break;
        case 0x87: upper = 0x80; break;
        case 0x91: upper = 0x92; break;
        case 0x94: upper = 0x99; break;
        case 0xa4: upper = 0xa5; break;
        default: break;
        }
        if (upper != ch) { text[i] = static_cast<char>(upper); return; }
        if (ch != ' ' && ch != '"') return;
        first = false;
    }
}

static bool remember_native_character_group_resize(NativeString *source,
        size_t width, char fill, uintptr_t caller) {
    const auto *graphics = native_graphics();
    if (!g_native_character_write_graphics ||
            graphics != g_native_character_write_graphics) return false;
    const uintptr_t base = native_history_profile_base();
    // Groups shortens only its entity-name and relationship fields here.
    // The following native stores replace the final three bytes iff the
    // retained length exceeds three; smaller lengths stay plain prefixes.
    // These exact return addresses cover both supported PE editions.
    if (!base || (caller != native_reference_address(base, 0x179439) &&
            caller != native_reference_address(base, 0x17aabe))) return false;
    auto &state = native_character_clipped_pending();
    if (state.busy) return true;
    struct CaptureScope {
        bool &busy;
        explicit CaptureScope(bool &value) : busy(value) { busy = true; }
        ~CaptureScope() { busy = false; }
    } scope(state.busy);
    try {
        const auto epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
        if (state.epoch != epoch) { state.fields.clear(); state.epoch = epoch; }
        state.fields.erase(source);
        std::string_view text;
        if (width <= 1024 && fill == 0 &&
                native_string_view(source, &text, 4096) && text.size() > width &&
                text.find_first_of("\r\n") == std::string_view::npos &&
                text.find('\0') == std::string_view::npos) {
            PendingNativeField pending;
            capture_native_field_resize(pending, source, width);
            if (caller == native_reference_address(base, 0x17aabe)) {
                // Role capitalization follows the dot stores at 17ab2d;
                // entity-name capitalization already preceded its resize.
                capitalize_native_character_group_role(pending.visible);
                capitalize_native_character_group_role(pending.complete);
            }
            // The private Character draw consumes this only for the same
            // owner, epoch and exact bytes after the native dot stores.
            if (!pending.complete.empty() && state.fields.size() < 512)
                state.fields.emplace(source, std::move(pending));
        }
    } catch (...) {}
    return true;
}
#endif

static void capture_native_clipped_resize(NativeString *source, size_t width, char fill) {
    if (g_native_announcement_log_write_graphics &&
            native_graphics() == g_native_announcement_log_write_graphics) {
        if (const auto original = g_native_clipped_caption_hooks.resize)
            original(source, width, fill);
        return;
    }
    // The petition list also keeps a plain prefix at widths of 1..3;
    // its inline ellipsis stores run only for a wider retained string.
    bool zone_plain_prefix = width > 0 && width <= 3 &&
        g_native_petitions_write_graphics &&
        native_graphics() == g_native_petitions_write_graphics;
#ifdef _WIN32
    const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    if (remember_native_character_group_resize(source, width, fill, caller)) {
        if (g_native_clipped_caption_hooks.resize)
            g_native_clipped_caption_hooks.resize(source, width, fill);
        return;
    }
    if (width > 0 && width <= 3) {
        const auto base = native_history_profile_base();
        // The Places zone/location column and workshop chooser title only
        // add dots when the retained width exceeds three bytes. Narrower
        // captions are plain prefixes of the same complete native field.
        zone_plain_prefix = zone_plain_prefix || (base &&
            (caller == native_reference_address(base, 0x39c8e9) ||
             caller == native_reference_address(base, 0x39d28e) ||
             caller == native_reference_address(base, 0x39d489) ||
             caller == native_reference_address(base, 0x1853c2)));
    }
#endif
    remember_native_clipped_resize(source, width, fill, false, zone_plain_prefix);
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
    if ((graphics && graphics == g_native_squads_write_graphics) ||
            (native_private_ui_write_active(graphics) &&
                graphics != g_native_map_hover_write_graphics) ||
            native_caption_draw_outside_clip_y(graphics, source)) return {};
    // A known caller or exact current ui_look_list owner proves the source,
    // independently of which native addst variant draws its actual glyphs.
    return native_map_hover_context(caller, source);
}

static void discard_native_clipped_draw_source(const NativeString *source) {
    if (native_caption_separate_output(native_graphics())) return;
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
    // These renderers own complete notification/menu strings. Their native
    // temporary addresses must never consume a background resize record or
    // inherit a map caption. Keep only their own visible caption evidence.
    if (native_caption_separate_output(graphics)) {
        try {
            std::string_view visible;
            if (width == 0 && graphics->screenx >= 0 && graphics->screenx < graphics->dimx &&
                    graphics->screeny >= 0 && graphics->screeny < graphics->dimy &&
                    native_string_view(source, &visible, 4096)) {
                const auto epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
                remember_native_drawn_text_row(graphics->screenx, graphics->screeny, visible,
                    reinterpret_cast<uintptr_t>(source), graphics, top_layer, {},
                    info_title_kind, info_title_authored, info_title_right,
                    civilization_field, mission_title, mission_title_right, capture_clip, epoch,
                    map_hover, location_picker_field, location_picker_box, fortress_labor_caption,
                    travel_building_field, native_caller);
            }
        } catch (...) {}
        return captured;
    }
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
static uint32_t native_caption_half_writer(uint32_t flags) noexcept {
    constexpr uint32_t upper = 1u << 3, lower = 1u << 4;
    const auto half = flags & (upper | lower);
    return half == upper || half == lower ? half : 0;
}

template<typename Draw>
static void capture_native_worldgen_caption(graphicst *graphics,
        const NativeString *source, int width, bool top_layer,
        uintptr_t native_caller, Draw &&draw, uint32_t native_half_writer = 0) {
#ifdef _WIN32
    // The direct private-worldgen entry points bypass the shared limited
    // caption path. Observe these actual word objects before the native
    // cursor advances, retaining the chronicle's existing lifetime proof.
    NativeHistoryChronicleDrawScope::observe(graphics, source);
#endif
    const bool editable_text = NativeEditableTextScope::owns(native_caller) ||
        native_worldgen_caption_editable(native_caller, source);
    std::string complete;
    const unsigned char *grid = nullptr;
    int x = 0, y = 0, dimx = 0, dimy = 0, foreground = -1;
    std::array<long, 4> clip{};
    uint64_t epoch = 0;
    try {
        std::string_view text;
        if (graphics == g_native_worldgen_write_graphics && width >= 0 &&
                graphics->dimx > 0 && graphics->dimx <= 1000 &&
                graphics->dimy > 0 && graphics->dimy <= 1000 &&
                native_string_view(source, &text, 4096) && !text.empty() &&
                text.find_first_of("\r\n") == std::string_view::npos &&
                text.find('\0') == std::string_view::npos) {
            // In particular, dfaa08 receives bb8e10's complete era title
            // from history.eras.back(). Copy it before addst abbreviates its
            // private string to 37 cells; the drawn bytes are not that title.
            complete.assign(text);
            // Worldgen shortens river names before addst. Consume only the
            // same string's exact abbreviation from this producer's epoch.
            auto &pending = native_worldgen_clipped_pending();
            epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
            if (pending.epoch != epoch) {
                pending.fields.clear(); pending.epoch = epoch;
            }
            if (!pending.busy) {
                const auto found = pending.fields.find(source);
                if (found != pending.fields.end()) {
                    auto shortened = std::move(found->second);
                    pending.fields.erase(found);
                    if (shortened.owner == source && shortened.epoch == epoch &&
                            shortened.visible == text && !shortened.complete.empty())
                        complete = std::move(shortened.complete);
                }
            }
            grid = top_layer ? graphics->screen_top : graphics->screen;
            x = graphics->screenx; y = graphics->screeny;
            dimx = graphics->dimx; dimy = graphics->dimy;
            clip = {graphics->clipx[0], graphics->clipx[1],
                graphics->clipy[0], graphics->clipy[1]};
            if (graphics->use_old_16_colors) {
                const int palette = static_cast<int8_t>(graphics->screenf) +
                    (graphics->screenbright ? 8 : 0);
                if (palette >= 0 && palette < 16)
                    foreground = (graphics->uccolor[palette][0] << 16) |
                        (graphics->uccolor[palette][1] << 8) | graphics->uccolor[palette][2];
            } else foreground = (graphics->screen_color_r << 16) |
                (graphics->screen_color_g << 8) | graphics->screen_color_b;
        }
    } catch (...) { complete.clear(); }
    draw();
    if (complete.empty() || !grid) return;
    try {
        if ((top_layer ? graphics->screen_top : graphics->screen) != grid ||
                graphics->dimx != dimx || graphics->dimy != dimy ||
                graphics->screeny != y || graphics->screenx <= x ||
                y < 0 || y >= dimy || y < clip[2] || y > clip[3] ||
                epoch != g_embark_item_capture_epoch.load(std::memory_order_acquire)) return;
        const int first = static_cast<int>(std::max<int64_t>(
            0, std::max<int64_t>(x, clip[0])));
        const int last = static_cast<int>(std::min<int64_t>(dimx,
            std::min<int64_t>(graphics->screenx, int64_t(clip[1]) + 1)));
        if (first >= last) return;
        std::string visible;
        visible.reserve(static_cast<size_t>(last - first));
        // Read only cells written by this exact source, never another panel.
        for (int column = first; column < last; ++column) {
            const unsigned char ch = grid[(static_cast<size_t>(column) * dimy + y) * 8];
            if (!ch) return;
            visible.push_back(static_cast<char>(ch));
        }
        NativeDrawnTextRow row{first, y, std::move(visible),
            reinterpret_cast<uintptr_t>(source), true};
        row.complete_source = std::move(complete);
        row.top_layer = top_layer;
        row.foreground_rgb = foreground;
        row.draw_grid = grid; row.draw_dimx = dimx; row.draw_dimy = dimy;
        row.draw_epoch = epoch;
        row.completed_draw = true;
        row.draw_owner = NativeWorldgenEditScope::current
            ? NativeWorldgenEditScope::current->owner : 0;
        row.worldgen_draw = row.draw_owner != 0;
        row.native_half_writer = native_half_writer;
        row.native_caller = native_caller;
        if (g_native_site_name_fact)
            row.site_name = std::make_shared<NativeHistoryName>(*g_native_site_name_fact);
        if (g_native_river_name_fact) {
            row.river_name = std::make_shared<const NativeRiverNameFact>(*g_native_river_name_fact);
            row.complete_source = g_native_river_name_fact->complete_source;
        }
        row.editable_text = editable_text;
        const int left = static_cast<int>(std::clamp<int64_t>(clip[0], 0, dimx));
        const int top = static_cast<int>(std::clamp<int64_t>(clip[2], 0, dimy));
        const int right = static_cast<int>(std::clamp<int64_t>(clip[1], -1, dimx - 1) + 1);
        const int bottom = static_cast<int>(std::clamp<int64_t>(clip[3], -1, dimy - 1) + 1);
        row.draw_clip = SDL_Rect{left, top, std::max(0, right - left),
            std::max(0, bottom - top)};
        std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
        auto &rows = top_layer ? g_native_drawn_top_text_rows : g_native_drawn_text_rows;
        ++g_native_drawn_text_revision;
        std::erase_if(rows, [&](const NativeDrawnTextRow &previous) {
            return previous.x == first && previous.y == y;
        });
        row.sequence = ++g_native_drawn_text_sequence;
        g_native_drawn_text_epoch = epoch;
        rows.push_back(std::move(row));
    } catch (...) {}
}

static bool native_character_header_activity_source(const NativeString *source,
        uintptr_t caller) {
#ifdef _WIN32
    const uintptr_t base = native_history_profile_base();
    if (!base || !source || !caller) return false;
    if (caller == native_reference_address(base, 0x15d6b6)) return true;
    struct Binding {
        uintptr_t base = 0, parent_return = 0, draw_return = 0;
    };
    static const Binding binding = [base] {
        Binding result{base};
        const uintptr_t call = native_reference_address(base, 0x15d6c9);
        std::array<unsigned char, 5> instruction{};
        if (!call || !native_history_copy(call, instruction) || instruction[0] != 0xe8)
            return result;
        int32_t displacement = 0;
        std::memcpy(&displacement, instruction.data() + 1, sizeof(displacement));
        const int64_t target = static_cast<int64_t>(call + 5) + displacement;
        if (target <= 0 || static_cast<uint64_t>(target) > UINTPTR_MAX - 0xa6)
            return result;
        const uintptr_t wrapper = static_cast<uintptr_t>(target);
        // The Classic address catalog omits this wrapper. Resolve its exact
        // target from the mapped header call, then retain the shared verified
        // frame and source instructions from both native PE disassemblies.
        constexpr std::array<unsigned char, 10> frame{
            0x4c,0x8b,0xdc,0x48,0x81,0xec,0x88,0x00,0x00,0x00};
        constexpr std::array<unsigned char, 5> text{
            0x48,0x8d,0x54,0x24,0x50};
        std::array<unsigned char, 10> actual_frame{};
        std::array<unsigned char, 5> actual_text{};
        unsigned char draw_call = 0;
        if (!native_history_copy(wrapper, actual_frame) || actual_frame != frame ||
                !native_history_copy(wrapper + 0x95, actual_text) || actual_text != text ||
                !native_history_copy(wrapper + 0xa1, draw_call) || draw_call != 0xe8)
            return result;
        result.parent_return = call + 5;
        result.draw_return = wrapper + 0xa6;
        return result;
    }();
    if (binding.base != base || !binding.draw_return || caller != binding.draw_return)
        return false;
    const uintptr_t owner = reinterpret_cast<uintptr_t>(source);
    uintptr_t parent_return = 0;
    // wrapper rsp is entry rsp-0x88 and its NativeString is rsp+0x50.
    // Thus source+0x38 is the wrapper's saved return, while this frame lives.
    // Match the header's actual call before freezing ownership with the text.
    return owner <= UINTPTR_MAX - 0x38 &&
        native_history_copy(owner + 0x38, parent_return) &&
        parent_return == binding.parent_return;
#else
    (void)source; (void)caller;
    return false;
#endif
}

// The component's native producer already establishes ownership. Retain only
// its submitted text and the exact interval written by this addst; no map,
// widget-tree, button-skin or other page discovery belongs in this path.
template<bool Character, bool Notification, typename Draw>
static void capture_native_owned_caption(graphicst *graphics,
        const NativeString *source, int width, bool top_layer,
        uintptr_t native_caller, Draw &&draw) {
    NativeInputCallbackScope callback;
    NativeDrawnTextRow row;
    const unsigned char *grid = nullptr;
    int x = 0, y = 0, dimx = 0, dimy = 0;
    std::array<long, 4> clip{};
    uint64_t epoch = 0;
    try {
        epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
        bool busy = false;
        PendingNativeField shortened;
        if constexpr (!Notification) {
            auto &pending = Character ? native_character_clipped_pending() : native_squads_clipped_pending();
            if (pending.epoch != epoch) {
                pending.fields.clear(); pending.epoch = epoch;
            }
            busy = pending.busy;
            if (!busy) {
                const auto found = pending.fields.find(source);
                if (found != pending.fields.end()) {
                    shortened = std::move(found->second);
                    pending.fields.erase(found);
                }
            }
        }
        std::string_view submitted;
        if (!busy && graphics && graphics == (Notification ? g_native_notification_write_graphics :
                Character ? g_native_character_write_graphics : g_native_squads_write_graphics) &&
                width >= 0 && graphics->dimx > 0 && graphics->dimx <= 1000 &&
                graphics->dimy > 0 && graphics->dimy <= 1000 &&
                native_string_view(source, &submitted, 4096) && !submitted.empty() &&
                submitted.find_first_of("\r\n") == std::string_view::npos &&
                submitted.find('\0') == std::string_view::npos) {
            row.complete_source.assign(submitted);
            if (shortened.owner == source && shortened.epoch == epoch &&
                    shortened.visible == submitted && !shortened.complete.empty())
                row.complete_source = std::move(shortened.complete);
            row.address = reinterpret_cast<uintptr_t>(source);
            row.caption_source = true;
            row.native_caller = native_caller;
            row.top_layer = top_layer;
            if constexpr (!Notification)
                row.editable_text = NativeEditableTextScope::owns(native_caller) ||
                    (g_native_textbox_widget_binding.text_return_address &&
                        native_caller == g_native_textbox_widget_binding.text_return_address);
            if constexpr (Character) {
                row.character_header_activity =
                    native_character_header_activity_source(source, native_caller);
                row.editable_text = row.editable_text || NativeEditableTextScope::active;
                row.info_title_kind = native_info_title_kind(native_caller);
                row.info_title_authored = native_info_title_authored(
                    row.info_title_kind, source, native_caller);
                if (row.info_title_kind != NativeInfoTitleKind::None) {
                    int right = static_cast<int>(std::clamp<int64_t>(
                        int64_t(graphics->clipx[1]) + 1, 0, graphics->dimx));
                    if (width > 0) right = static_cast<int>(std::min<int64_t>(
                        right, int64_t(graphics->screenx) + width));
                    const auto &binding = g_native_info_title_binding;
                    int caption_width = 0;
                    for (const auto &site : binding.sites)
                        if (site.return_address == native_caller) {
                            caption_width = site.caption_width;
                            break;
                        }
                    if (caption_width > 0) {
                        right = std::min(right, static_cast<int>(std::clamp<int64_t>(
                            int64_t(graphics->screenx) + caption_width,
                            graphics->screenx, graphics->dimx)));
                    } else if (row.info_title_kind == NativeInfoTitleKind::ItemList) {
#ifdef _WIN32
                        // The frame member alone does not prove the caller's
                        // historical column inset. A real resize owns its
                        // width only for this exact string value and epoch.
                        if (shortened.owner == source && shortened.epoch == epoch &&
                                shortened.visible == submitted && shortened.width &&
                                shortened.width <= static_cast<size_t>(graphics->dimx))
                            right = static_cast<int>(std::min<int64_t>(right,
                                int64_t(graphics->screenx) + shortened.width));
                        else right = graphics->screenx;
#else
                        int32_t list_right = 0;
                        const auto *slot = native_info_item_list_right_slot(source);
                        if (slot && native_info_title_memory_readable(slot, sizeof(list_right))) {
                            std::memcpy(&list_right, slot, sizeof(list_right));
                            right = std::min(right, static_cast<int>(std::clamp<int64_t>(
                                int64_t(list_right) - binding.item_list_right_inset,
                                graphics->screenx, graphics->dimx)));
                        } else if (shortened.width) {
                            right = static_cast<int>(std::min<int64_t>(right,
                                int64_t(graphics->screenx) + shortened.width));
                        } else right = graphics->screenx;
#endif
                    }
                    row.info_title_right = right;
                }
            }
            if constexpr (!Notification) {
                row.squad_alias_target = native_squad_alias_source_target(
                    row.complete_source, row.address);
                row.squad_generated_name = native_squad_generated_source_name(
                    row.complete_source, row.address);
                if (const auto identity = native_unit_identity_source_binding(
                        row.complete_source, row.address)) {
                    row.unit_identity_target = identity->ready ? identity->target : std::string{};
                    row.unit_identity_owner = identity->unit_owner;
                    row.unit_identity_english = identity->english_name;
                    row.unit_identity_header = identity->character_header;
                    row.unit_identity_ready = identity->ready;
                    row.unit_identity_semantic_key = identity->semantic_key;
                    if (!identity->ready)
                        row.unit_identity_pending = std::make_shared<const NativeUnitIdentitySource>(*identity);
                }
            }
            if constexpr (Character)
                capture_native_character_relation_row(row, graphics, source, native_caller, width);
            x = graphics->screenx; y = graphics->screeny;
            dimx = graphics->dimx; dimy = graphics->dimy;
            if constexpr (!Character && !Notification)
                row.squad_list_right = capture_native_squad_list_right(
                    native_caller, row.address, x);
            clip = {graphics->clipx[0], graphics->clipx[1],
                graphics->clipy[0], graphics->clipy[1]};
            if (y >= 0 && y < dimy && y >= clip[2] && y <= clip[3])
                grid = top_layer ? graphics->screen_top : graphics->screen;
            if (graphics->use_old_16_colors) {
                const int palette = static_cast<int8_t>(graphics->screenf) +
                    (graphics->screenbright ? 8 : 0);
                if (palette >= 0 && palette < 16)
                    row.foreground_rgb = (graphics->uccolor[palette][0] << 16) |
                        (graphics->uccolor[palette][1] << 8) | graphics->uccolor[palette][2];
            } else row.foreground_rgb = (graphics->screen_color_r << 16) |
                (graphics->screen_color_g << 8) | graphics->screen_color_b;
        }
    } catch (...) { grid = nullptr; }
    callback.call_native(std::forward<Draw>(draw));
    if (!grid) return;
    try {
        if ((top_layer ? graphics->screen_top : graphics->screen) != grid ||
                graphics->dimx != dimx || graphics->dimy != dimy ||
                graphics->screeny != y || graphics->screenx <= x ||
                epoch != g_embark_item_capture_epoch.load(std::memory_order_acquire)) return;
        const int first = static_cast<int>(std::max<int64_t>(0, std::max<int64_t>(x, clip[0])));
        const int last = static_cast<int>(std::min<int64_t>(dimx,
            std::min<int64_t>(graphics->screenx, int64_t(clip[1]) + 1)));
        if (first >= last) return;
        row.x = first; row.y = y;
        row.source.reserve(static_cast<size_t>(last - first));
        // Only this call's cursor advance is read, including a native
        // abbreviation. The number of reads is bounded by its text span.
        for (int column = first; column < last; ++column) {
            const auto ch = grid[(static_cast<size_t>(column) * dimy + y) * 8];
            if (!ch) return;
            row.source.push_back(static_cast<char>(ch));
        }
        if constexpr (Notification) {
            // The report wrap owns the complete NativeString, including a
            // suffix clipped by the floating panel. Keep that exact address /
            // source proof after confirming all cells this call wrote.
            if (width == 0 && x >= 0 &&
                    static_cast<size_t>(last - x) <= row.complete_source.size() &&
                    std::string_view(row.complete_source).substr(
                        static_cast<size_t>(first - x), static_cast<size_t>(last - first)) == row.source) {
                row.x = x;
                row.source = row.complete_source;
            }
        }
        if (first != x && row.squad_alias_target)
            row.squad_alias_target = native_text_to_utf8(row.source);
        if constexpr (Character) {
#ifdef _WIN32
            if (row.info_title_kind == NativeInfoTitleKind::ItemList &&
                    row.info_title_right <= x)
                row.info_title_right = last;
#endif
            if (first != x) {
                row.info_title_kind = NativeInfoTitleKind::None;
                row.info_title_right = -1;
                row.character_relation_right = -1;
            } else if (row.source != row.complete_source) {
                remember_clipped_caption(first, y, row.source, row.complete_source);
            }
        }
        row.draw_grid = grid; row.draw_dimx = dimx; row.draw_dimy = dimy;
        row.draw_epoch = epoch;
        const int left = static_cast<int>(std::clamp<int64_t>(clip[0], 0, dimx));
        const int top = static_cast<int>(std::clamp<int64_t>(clip[2], 0, dimy));
        const int right = static_cast<int>(std::clamp<int64_t>(clip[1], -1, dimx - 1) + 1);
        const int bottom = static_cast<int>(std::clamp<int64_t>(clip[3], -1, dimy - 1) + 1);
        row.draw_clip = SDL_Rect{left, top, std::max(0, right - left),
            std::max(0, bottom - top)};
        std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
        ++g_native_drawn_text_revision;
        if (g_native_drawn_text_epoch != epoch) {
            g_native_drawn_text_rows.clear(); g_native_drawn_top_text_rows.clear();
            g_native_overwritten_text_rows.clear();
            for (auto &positions : g_native_drawn_text_positions) positions.clear();
            for (auto &dates : g_native_date_occluded_text_rows) dates.clear();
            g_native_drawn_text_sequence = 0;
            g_native_drawn_text_epoch = epoch;
        }
        auto &rows = top_layer ? g_native_drawn_top_text_rows : g_native_drawn_text_rows;
        auto &positions = g_native_drawn_text_positions[top_layer ? 1 : 0];
        const uint64_t position = (static_cast<uint64_t>(static_cast<uint32_t>(row.x)) << 32) |
            static_cast<uint32_t>(y);
        if (positions.contains(position))
            std::erase_if(rows, [&](const NativeDrawnTextRow &previous) {
                if (previous.x != row.x || previous.y != y) return false;
                if constexpr (Character || Notification) {
                    if (previous.source != row.source && g_native_overwritten_text_rows.size() < 4096)
                        g_native_overwritten_text_rows.push_back(previous);
                }
                return true;
            });
        if (rows.size() >= 4096) return;
        row.sequence = ++g_native_drawn_text_sequence;
        rows.push_back(std::move(row));
        positions.insert(position);
    } catch (...) {}
}

template<typename Draw>
static void capture_native_squads_caption(graphicst *graphics,
        const NativeString *source, int width, bool top_layer,
        uintptr_t native_caller, Draw &&draw) {
    capture_native_owned_caption<false, false>(graphics, source, width, top_layer,
        native_caller, std::forward<Draw>(draw));
}

// The character producer owns its sources and private grid. Caption capture
// must not discover map, task, justice, performance or other page state.
template<typename Draw>
static void capture_native_character_caption(graphicst *graphics,
        const NativeString *source, int width, bool top_layer,
        uintptr_t native_caller, Draw &&draw) {
    capture_native_owned_caption<true, false>(graphics, source, width, top_layer,
        native_caller, std::forward<Draw>(draw));
}

// Notification rows already belong to complete report records or typed unit
// summaries. Their paragraph captures retain unit/category/name ownership;
// this writer needs only its own source, clipping and actual native colors.
template<typename Draw>
static void capture_native_notification_caption(graphicst *graphics,
        const NativeString *source, int width, bool top_layer,
        uintptr_t native_caller, Draw &&draw) {
    capture_native_owned_caption<false, true>(graphics, source, width, top_layer,
        native_caller, std::forward<Draw>(draw));
}

// This producer has already bound the complete announcement document to its
// own arrays. Capture only this call's submitted source and native stores;
// other pages, identity registries and pending resize records are unrelated.
static thread_local bool g_native_announcement_log_caption_active = false;
template<typename Draw>
static void capture_native_announcement_log_caption(graphicst *graphics,
        const NativeString *source, bool top_layer, uintptr_t native_caller, Draw &&draw) {
    NativeInputCallbackScope callback;
    if (g_native_announcement_log_caption_active) {
        callback.call_native(std::forward<Draw>(draw));
        return;
    }
    struct CaptureScope {
        CaptureScope() { g_native_announcement_log_caption_active = true; }
        ~CaptureScope() { g_native_announcement_log_caption_active = false; }
    } capture;
    NativeDrawnTextRow row;
    NativeAnnouncementLogCaptionBackdrop backdrop;
    int backdrop_first = 0, backdrop_last = 0;
    bool backdrop_ready = false;
    const unsigned char *grid = nullptr;
    int x = 0, y = 0, dimx = 0, dimy = 0;
    std::array<long, 4> clip{};
    try {
        std::string_view submitted;
        if (graphics && graphics == g_native_announcement_log_write_graphics &&
                native_announcement_log_foreground_view(graphics) &&
                graphics->dimx > 0 && graphics->dimx <= 1000 &&
                graphics->dimy > 0 && graphics->dimy <= 1000 &&
                native_string_view(source, &submitted, SIZE_MAX) && !submitted.empty()) {
            row.complete_source.assign(submitted);
            row.address = reinterpret_cast<uintptr_t>(source);
            row.caption_source = true;
            row.native_caller = native_caller;
            row.top_layer = top_layer;
            row.draw_epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
            x = graphics->screenx; y = graphics->screeny;
            dimx = graphics->dimx; dimy = graphics->dimy;
            clip = {graphics->clipx[0], graphics->clipx[1],
                graphics->clipy[0], graphics->clipy[1]};
            if (y >= 0 && y < dimy && y >= clip[2] && y <= clip[3])
                grid = top_layer ? graphics->screen_top : graphics->screen;
            if (graphics->use_old_16_colors) {
                const int palette = static_cast<int8_t>(graphics->screenf) +
                    (graphics->screenbright ? 8 : 0);
                if (palette >= 0 && palette < 16)
                    row.foreground_rgb = (graphics->uccolor[palette][0] << 16) |
                        (graphics->uccolor[palette][1] << 8) | graphics->uccolor[palette][2];
            } else row.foreground_rgb = (graphics->screen_color_r << 16) |
                (graphics->screen_color_g << 8) | graphics->screen_color_b;
            if (grid) try {
                // These are only the cells this submitted caption can write.
                // Read the native artwork before the original call replaces
                // any glyph/color/texture descriptor, on both private planes.
                backdrop_first = static_cast<int>(std::max<int64_t>({0, x, clip[0]}));
                const size_t remaining = x < dimx ? static_cast<size_t>(int64_t(dimx) - x) : 0;
                const int64_t expected_end = int64_t(x) + std::min(submitted.size(), remaining);
                backdrop_last = static_cast<int>(std::min<int64_t>({dimx,
                    expected_end, int64_t(clip[1]) + 1}));
                if (backdrop_first < backdrop_last) {
                    const auto &planes = g_native_announcement_log_layer.foreground.planes;
                    for (size_t plane_index = 0; plane_index < planes.size(); ++plane_index) {
                        const auto &plane = planes[plane_index];
                        auto &cells = backdrop.planes[plane_index];
                        cells.resize(static_cast<size_t>(backdrop_last - backdrop_first));
                        for (int column = backdrop_first; column < backdrop_last; ++column) {
                            const size_t at = static_cast<size_t>(column) * dimy + y;
                            auto &cell = cells[static_cast<size_t>(column - backdrop_first)];
                            std::memcpy(cell.screen.data(), plane.screen.data() + at * 8,
                                cell.screen.size());
                            cell.flags = plane.flags[at];
                            for (size_t slot = 0; slot < cell.textures.size(); ++slot)
                                cell.textures[slot] = plane.textures[slot][at];
                        }
                    }
                    backdrop_ready = true;
                }
            } catch (...) {
                // A missing optional backdrop must not discard the ordinary
                // owned caption or interrupt its native draw.
                backdrop_ready = false;
            }
        }
    } catch (...) { grid = nullptr; }
    callback.call_native(std::forward<Draw>(draw));
    if (!grid) return;
    try {
        if ((top_layer ? graphics->screen_top : graphics->screen) != grid ||
                graphics->dimx != dimx || graphics->dimy != dimy ||
                graphics->screeny != y || graphics->screenx <= x) return;
        const int first = static_cast<int>(std::max<int64_t>(0, std::max<int64_t>(x, clip[0])));
        const int last = static_cast<int>(std::min<int64_t>(dimx,
            std::min<int64_t>(graphics->screenx, int64_t(clip[1]) + 1)));
        if (first >= last) return;
        row.x = first; row.y = y;
        row.source.reserve(static_cast<size_t>(last - first));
        // The cursor interval and clip limit every read to bytes written by
        // this invocation. No surrounding panel or background is inspected.
        native_announcement_log_include_span(first, last, y);
        for (int column = first; column < last; ++column)
            row.source.push_back(static_cast<char>(
                grid[(static_cast<size_t>(column) * dimy + y) * 8]));
        row.draw_grid = grid; row.draw_dimx = dimx; row.draw_dimy = dimy;
        const int left = static_cast<int>(std::clamp<int64_t>(clip[0], 0, dimx));
        const int top = static_cast<int>(std::clamp<int64_t>(clip[2], 0, dimy));
        const int right = static_cast<int>(std::clamp<int64_t>(clip[1], -1, dimx - 1) + 1);
        const int bottom = static_cast<int>(std::clamp<int64_t>(clip[3], -1, dimy - 1) + 1);
        row.draw_clip = SDL_Rect{left, top, std::max(0, right - left),
            std::max(0, bottom - top)};
        auto &text = g_native_announcement_log_text;
        row.sequence = ++text.sequence;
        text.epoch = row.draw_epoch;
        text.rows[top_layer ? 1 : 0].push_back(std::move(row));
        if (backdrop_ready && first >= backdrop_first && last <= backdrop_last) {
            // Cursor advancement proves the actual stores. Discard every
            // pre-read cell outside that interval before publishing ownership.
            const auto &captured = text.rows[top_layer ? 1 : 0].back();
            backdrop.x = first; backdrop.y = y;
            backdrop.top_layer = top_layer;
            backdrop.address = captured.address;
            backdrop.sequence = captured.sequence;
            backdrop.source = captured.source;
            const size_t offset = static_cast<size_t>(first - backdrop_first);
            const size_t count = static_cast<size_t>(last - first);
            for (auto &cells : backdrop.planes) {
                if (offset) cells.erase(cells.begin(), cells.begin() + offset);
                cells.resize(count);
            }
            g_native_announcement_log_caption_backdrops.push_back(std::move(backdrop));
        }
    } catch (...) {}
}

#include "native_topbar_caption_capture.inc"

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
        std::optional<std::array<long, 4>> capture_clip = std::nullopt,
        uint32_t native_half_writer = 0) {
#ifdef _WIN32
    if (!native_worldgen_output_active(graphics))
        NativeHistoryChronicleDrawScope::observe(graphics, source);
#endif
    if (graphics && graphics == g_native_notification_write_graphics) {
        capture_native_notification_caption(graphics, source, width, top_layer,
            native_caller, std::forward<Draw>(draw));
        return;
    }
    if (graphics && (graphics == g_native_petition_write_graphics ||
            graphics == g_native_petitions_write_graphics ||
            graphics == g_native_map_hover_write_graphics ||
            graphics == g_native_topbar_write_graphics ||
            graphics == g_native_designation_write_graphics ||
            graphics == g_native_embark_civilization_write_graphics)) {
        capture_native_bounded_panel_caption(graphics, source, width, top_layer,
            native_caller, std::forward<Draw>(draw));
        return;
    }
    if (capture_native_tooltip_caption_draw(graphics, source, draw, top_layer)) return;
    if (graphics && graphics == g_native_announcement_log_write_graphics) {
        capture_native_announcement_log_caption(graphics, source, top_layer,
            native_caller, std::forward<Draw>(draw));
        return;
    }
    if (graphics && graphics == g_native_character_write_graphics) {
        capture_native_character_caption(graphics, source, width, top_layer,
            native_caller, std::forward<Draw>(draw));
        return;
    }
    if (graphics && graphics == g_native_squads_write_graphics) {
        capture_native_squads_caption(graphics, source, width, top_layer,
            native_caller, std::forward<Draw>(draw));
        return;
    }
    if (native_worldgen_output_active(graphics)) {
        capture_native_worldgen_caption(graphics, source, width, top_layer,
            native_caller, std::forward<Draw>(draw), native_half_writer);
        return;
    }
    if (native_private_ui_write_active(graphics)) { draw(); return; }

    // The actual worldgen draw may retain the shared grid when its private
    // renderer is unavailable. Its input ownership is still the current
    // screen invocation, and must survive this normal caption path too.
    std::optional<NativeEditableTextScope> worldgen_input;
    if (NativeWorldgenEditScope::current)
        worldgen_input.emplace(NativeEditableTextScope::owns(native_caller) ||
            native_worldgen_caption_editable(native_caller, source));
    std::shared_ptr<const NativeAdventureHoverDocument> adventure_hover_document;
    try {
        adventure_hover_document = capture_native_adventure_hover_document(
            reinterpret_cast<uintptr_t>(source));
    } catch (...) {}
    const bool completed_capture = adventure_hover_document || NativeWorldgenEditScope::current ||
        native_map_mixed_view(graphics);
    const uintptr_t completed_owner = completed_capture ? native_current_viewscreen() : 0;
    const bool worldgen_draw = NativeWorldgenEditScope::current &&
        NativeWorldgenEditScope::current->owner == completed_owner;
    const auto inventory_role = native_adventure_inventory_role(
        native_caller, reinterpret_cast<uintptr_t>(source));
    const auto barter_field = native_adventure_barter_field(native_caller);
    const auto workshop_choice_field = native_workshop_choice_field(native_caller);
    const std::array<long, 4> draw_clip = capture_clip.value_or(graphics
        ? std::array<long, 4>{graphics->clipx[0], graphics->clipx[1],
                              graphics->clipy[0], graphics->clipy[1]}
        : std::array<long, 4>{});
    if (native_caption_draw_outside_clip_y(graphics, source)) {
        // Scroll lists still invoke addst for clipped rows. Their native
        // cursor advancement must run, but caption ownership and widget
        // memory walks cannot affect any visible cell. Consume any pending
        // resize identity now so a reused string cannot inherit this row's
        // complete source. Multiline document collection occurs before this
        // visibility filter; tooltip capture has its own actual-write path.
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
        const auto &binding = g_native_info_title_binding;
        int caption_width = 0;
        for (const auto &site : binding.sites)
            if (site.return_address == native_caller) {
                caption_width = site.caption_width;
                break;
            }
        if (caption_width > 0) {
            // Explicit caller-owned columns apply to every field kind.
            // Nobles' item, assignment and value label share this renderer
            // but have different widths from the ViewSheets item list.
            right = std::min(right, static_cast<int>(std::clamp<int64_t>(
                int64_t(graphics->screenx) + caption_width,
                graphics->screenx, graphics->dimx)));
        } else if (info_title_kind == NativeInfoTitleKind::ItemList) {
#ifdef _WIN32
            // A live resize value is an independent width contract. Without
            // it, wait for this addst's completed span before publishing a
            // right boundary; a mapped frame slot does not prove an inset.
            const auto &pending = native_clipped_pending().fields;
            const auto found = pending.find(source);
            std::string_view submitted;
            if (found != pending.end() && found->second.owner == source &&
                    found->second.epoch == g_embark_item_capture_epoch.load(std::memory_order_acquire) &&
                    found->second.width && found->second.width <= static_cast<size_t>(graphics->dimx) &&
                    native_string_view(source, &submitted, 4096) && found->second.visible == submitted)
                right = static_cast<int>(std::min<int64_t>(right,
                    int64_t(graphics->screenx) + found->second.width));
            else right = graphics->screenx;
#else
            // ViewSheets clips this string manually without changing clipx.
            // Its stack slot belongs only to the original ItemList caller.
            int32_t list_right = 0;
            const auto *slot = native_info_item_list_right_slot(source);
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
#endif
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
            (completed_capture || width > 0 || graphics->screenx < graphics->clipx[0] ||
             int64_t(graphics->screenx) + static_cast<int64_t>(text.size()) >
                 int64_t(graphics->clipx[1]) + 1 ||
             native_build_material_field(native_caller) != NativeBuildMaterialField::None ||
             workshop_choice_field != NativeWorkshopChoiceField::None ||
             native_adventure_crafting_role(native_caller) != NativeAdventureCraftingRole::None ||
             inventory_role != NativeAdventureInventoryRole::None ||
             barter_field != NativeAdventureBarterField::None)) {
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
            } else if (width == 0 && !completed_capture) {
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
            (graphics->screenx > dimx && !completed_capture && info_title_kind == NativeInfoTitleKind::None &&
                !mission_title && !fortress_labor_caption &&
                travel_building_field == NativeTravelBuildingField::None &&
                workshop_choice_field == NativeWorkshopChoiceField::None &&
                inventory_role == NativeAdventureInventoryRole::None &&
                barter_field == NativeAdventureBarterField::None) ||
            (width > 0 && graphics->screenx - x > width) ||
            epoch != g_embark_item_capture_epoch.load(std::memory_order_acquire) ||
            (completed_capture && (!completed_owner || native_current_viewscreen() != completed_owner))) return;
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
#ifdef _WIN32
        if (info_title_kind == NativeInfoTitleKind::ItemList && info_title_right <= x)
            info_title_right = last;
        if (!location_picker_box && completed_capture && !top_layer && first == x &&
                location_picker_field == NativeLocationPickerField::Name &&
                native_proved_chooser_primary_name_caller(native_caller)) {
            // Use only this completed row's clipped output, never an inferred
            // picture frame or neighboring button's available width.
            location_picker_box = SDL_Rect{first, y, last - first, 1};
        }
#endif
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
        if (completed_capture || width > 0 || first != x || info_title_kind != NativeInfoTitleKind::None ||
                native_build_material_field(native_caller) != NativeBuildMaterialField::None ||
                workshop_choice_field != NativeWorkshopChoiceField::None ||
                civilization_field != NativeCivilizationField::None || mission_title ||
                location_picker_field != NativeLocationPickerField::None || fortress_labor_caption ||
                travel_building_field != NativeTravelBuildingField::None ||
                native_adventure_crafting_role(native_caller) != NativeAdventureCraftingRole::None ||
                inventory_role != NativeAdventureInventoryRole::None ||
                barter_field != NativeAdventureBarterField::None)
            remember_native_drawn_text_row(first, y, visible,
                reinterpret_cast<uintptr_t>(source), graphics, top_layer,
                first == x ? std::string_view(complete) : std::string_view{},
                first == x ? info_title_kind : NativeInfoTitleKind::None,
                info_title_authored, info_title_right, civilization_field,
                first == x && mission_title, mission_title_right, draw_clip, epoch,
                map_hover, location_picker_field, location_picker_box, fortress_labor_caption,
                travel_building_field, native_caller,
                first == x ? squad_alias_target : squad_alias_target
                    ? std::optional<std::string>(native_text_to_utf8(visible)) : std::nullopt,
                std::nullopt, completed_capture, completed_owner, worldgen_draw, native_half_writer,
                adventure_hover_document);
        if (first == x && visible != complete)
            remember_clipped_caption(x, y, visible, complete);
    } catch (...) {}
}

#ifdef _WIN32
static bool prepare_native_journal_search_draw(const NativeString *source,
        std::string_view query) {
    std::string_view display;
    if (!native_string_view(source, &display, 4096) ||
            (display != query &&
             !(display.size() == query.size() + 1 && display.back() == '_' &&
               display.substr(0, query.size()) == query) &&
             !(query.empty() && display == "..."))) return false;
    constexpr size_t visible_bytes = 20;
    if (display.size() <= visible_bytes) return true;
    size_t first = 0;
    while (display.size() - first > visible_bytes) {
        const auto decoded = decode_utf8_at(display, first);
        first += decoded ? decoded->second : 1;
    }
    // ca24a copies the owned query into this disposable native string before
    // adding its cursor. Only that proven copy is shortened for the textbox.
    auto *temporary = const_cast<NativeString *>(source);
    const size_t length = display.size() - first;
    std::memmove(native_string_data(temporary), display.data() + first, length);
    return native_string_set_length(temporary, length);
}
#endif

static bool native_legacy_editable_draw(uintptr_t caller, const NativeString *source) {
#ifdef _WIN32
    const uintptr_t base = native_history_profile_base();
    if (!base) return false;
    if (caller == native_pe_address(base, 0xca2f6)) {
        const uintptr_t screen = native_current_viewscreen();
        if (!screen ||
                !native_history_object_is(screen, "viewscreen_adventure_logst")) return false;
        uint8_t entering = 0;
        std::string text;
        // The journal copies filter_str before adding its cursor. Its owned
        // query remains editable while focused and while displaying results.
        const auto filter = native_history_object_member(screen, "viewscreen_adventure_logst", "filter_str", sizeof(NativeString));
        return filter && reinterpret_cast<uintptr_t>(source) != filter &&
            native_history_copy(native_history_object_member(screen, "viewscreen_adventure_logst", "entering_filter"), entering) && entering <= 1 &&
            native_history_copy_string(filter, text) &&
            prepare_native_journal_search_draw(source, text);
    }
    // The stockpile and zone name boxes draw building.name (+0xd0)
    // directly, with separate calls while unfocused and while editing.
    // These stored input bytes stay authored even when they spell a UI
    // category. Empty names use different generated-caption calls.
    if (caller == native_pe_address(base, 0x3e611c) ||
            caller == native_pe_address(base, 0x3e6195) ||
            caller == native_pe_address(base, 0x3e82a7) ||
            caller == native_pe_address(base, 0x3e895e)) return true;
    uintptr_t owner = 0;
    const char *type = nullptr, *member = nullptr, *entering_member = nullptr;
    bool has_open = true;
    // Each legacy renderer copies this one owned edit string before addst.
    // Its ordinary list/button captions have different callers. Reference
    // coordinates are resolved for both supported PE editions.
    if (caller == native_pe_address(base, 0x3a20c7)) {
        owner = native_reference_address(base, 0x18a2710);
        type = "stocks_interfacest"; member = "item_filter"; entering_member = "entering_item_filter";
    } else if (caller == native_pe_address(base, 0x382106)) {
        // construction_interfacest.item_filter / entering_item_filter.
        owner = native_reference_address(base, 0x18a1788);
        type = "construction_interfacest"; member = "item_filter"; entering_member = "entering_item_filter";
        has_open = false; // Construction has category state, not an open bit.
    } else if (caller == native_pe_address(base, 0x380e14)) {
        // custom_stockpile_interfacest.spec_filter / entering_spec_filter.
        owner = native_reference_address(base, 0x18a4238);
        type = "custom_stockpile_interfacest"; member = "spec_filter"; entering_member = "entering_spec_filter";
    } else if (caller == native_pe_address(base, 0x38d4af)) {
        // create_work_order_interfacest.job_filter / entering_job_filter.
        owner = native_reference_address(base, 0x18a7200);
        type = "create_work_order_interfacest"; member = "job_filter"; entering_member = "entering_job_filter";
    } else return false;
    if (!owner) return false;
    uint8_t open = 0, entering = 0;
    std::string text;
    // entering records keyboard focus, not whether this field is editable.
    // Retain the owned input while unfocused too, without comparing words.
    return (!has_open || (native_history_copy(native_history_object_member(owner, type, "open"), open) && open == 1)) &&
        native_history_copy(native_history_object_member(owner, type, entering_member), entering) &&
        entering <= 1 && native_history_copy_string(
            native_history_object_member(owner, type, member, sizeof(NativeString)), text);
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
    graphics = native_graphics_view(graphics);
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
            callback.call_native([&] { native_graphics_call(original, graphics, source, NativeJustification{}, 0); });
    }, false, NativeInfoTitleKind::None, false, {}, false,
        NativeCivilizationField::None, false, {}, NativeLocationPickerField::None,
        NativeTravelBuildingField::None, caller);
}

#include "native_site_name_draws.inc"
#include "native_river_names.inc"

static void capture_native_clipped_draw(graphicst *graphics, const NativeString *source,
        NativeJustification just, int width) {
    graphics = native_graphics_view(graphics);
    if (graphics && graphics == g_native_notification_write_graphics) {
        const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        capture_native_notification_caption(graphics, source, width, false, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.draw)
                native_graphics_call(original, graphics, source, just, width);
        });
        return;
    }
    if (graphics && (graphics == g_native_petition_write_graphics ||
            graphics == g_native_petitions_write_graphics ||
            graphics == g_native_map_hover_write_graphics ||
            graphics == g_native_topbar_write_graphics ||
            graphics == g_native_designation_write_graphics ||
            graphics == g_native_embark_civilization_write_graphics)) {
        const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        capture_native_bounded_panel_caption(graphics, source, width, false, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.draw)
                native_graphics_call(original, graphics, source, just, width);
        });
        return;
    }
    if (capture_native_tooltip_caption_draw(graphics, source, [&] {
            if (const auto original = g_native_clipped_caption_hooks.draw)
                native_graphics_call(original, graphics, source, just, width);
        })) return;
    if (graphics && graphics == g_native_announcement_log_write_graphics) {
        const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        capture_native_announcement_log_caption(graphics, source, false, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.draw)
                native_graphics_call(original, graphics, source, just, width);
        });
        return;
    }
    if (graphics && graphics == g_native_character_write_graphics) {
        const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        capture_native_character_caption(graphics, source, width, false, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.draw)
                native_graphics_call(original, graphics, source, just, width);
        });
        return;
    }
    if (graphics && graphics == g_native_squads_write_graphics) {
        const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        capture_native_squads_caption(graphics, source, width, false, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.draw)
                native_graphics_call(original, graphics, source, just, width);
        });
        return;
    }
    if (native_worldgen_output_active(graphics)) {
        const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        capture_native_worldgen_caption(graphics, source, width, false, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.draw)
                native_graphics_call(original, graphics, source, just, width);
        });
        return;
    }
    if (native_private_ui_write_active(graphics)) {
        NativeInputCallbackScope callback;
        if (const auto original = g_native_clipped_caption_hooks.draw)
            callback.call_native([&] { native_graphics_call(original, graphics, source, just, width); });
        return;
    }
    const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    // This call inside textbox::render draws only its owned edit string's
    // temporary copy. It remains input even when native code reaches render
    // directly instead of dispatching through the hooked widget vtable.
    const bool textbox_text = g_native_textbox_widget_binding.text_return_address &&
        caller == g_native_textbox_widget_binding.text_return_address;
    NativeEditableTextScope input_scope(
        textbox_text || NativeEditableTextScope::owns(caller) || native_legacy_editable_draw(caller,source) ||
        native_adventure_barter_field(caller) == NativeAdventureBarterField::Editable);
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
            native_graphics_call(g_native_clipped_caption_hooks.draw, graphics, source, just, width);
    }, false, kind, authored, std::move(reclaim_history), history_lock.owns_lock(),
        civilization_field, mission_title, map_hover, location_picker_field, travel_building_field, caller);
}

static void capture_native_clipped_flag_draw(graphicst *graphics, const NativeString *source,
        NativeJustification just, int width, uint32_t flags) {
    graphics = native_graphics_view(graphics);
    if (graphics && graphics == g_native_notification_write_graphics) {
        const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        capture_native_notification_caption(graphics, source, width, false, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.flag_draw)
                native_graphics_call(original, graphics, source, just, width, flags);
        });
        return;
    }
    if (graphics && (graphics == g_native_petition_write_graphics ||
            graphics == g_native_petitions_write_graphics ||
            graphics == g_native_map_hover_write_graphics ||
            graphics == g_native_topbar_write_graphics ||
            graphics == g_native_designation_write_graphics ||
            graphics == g_native_embark_civilization_write_graphics)) {
        const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        capture_native_bounded_panel_caption(graphics, source, width, false, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.flag_draw)
                native_graphics_call(original, graphics, source, just, width, flags);
        });
        return;
    }
    if (capture_native_tooltip_caption_draw(graphics, source, [&] {
            if (const auto original = g_native_clipped_caption_hooks.flag_draw)
                native_graphics_call(original, graphics, source, just, width, flags);
        })) return;
    if (graphics && graphics == g_native_announcement_log_write_graphics) {
        const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        capture_native_announcement_log_caption(graphics, source, false, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.flag_draw)
                native_graphics_call(original, graphics, source, just, width, flags);
        });
        return;
    }
    if (graphics && graphics == g_native_character_write_graphics) {
        const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        if (g_native_multiline_capture && caller == g_native_multiline_widget_binding.row_return_address)
            capture_native_multiline_row(graphics, source);
        capture_native_character_caption(graphics, source, width, false, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.flag_draw)
                native_graphics_call(original, graphics, source, just, width, flags);
        });
        return;
    }
    if (graphics && graphics == g_native_squads_write_graphics) {
        const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        capture_native_squads_caption(graphics, source, width, false, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.flag_draw)
                native_graphics_call(original, graphics, source, just, width, flags);
        });
        return;
    }
    if (native_worldgen_output_active(graphics)) {
        const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        capture_native_worldgen_caption(graphics, source, width, false, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.flag_draw)
                native_graphics_call(original, graphics, source, just, width, flags);
        }, native_caption_half_writer(flags));
        return;
    }
    if (native_private_ui_write_active(graphics)) {
        NativeInputCallbackScope callback;
        if (const auto original = g_native_clipped_caption_hooks.flag_draw)
            callback.call_native([&] { native_graphics_call(original, graphics, source, just, width, flags); });
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
            native_graphics_call(g_native_clipped_caption_hooks.flag_draw, graphics, source, just, width, flags);
    }, false, NativeInfoTitleKind::None, false, {}, false,
        NativeCivilizationField::None, false, map_hover,
        NativeLocationPickerField::None, NativeTravelBuildingField::None, caller,
        std::nullopt, native_caption_half_writer(flags));
}

static void capture_native_top_caption_draw(graphicst *graphics, const NativeString *source,
        NativeJustification just, int width) {
    graphics = native_graphics_view(graphics);
    if (graphics && graphics == g_native_notification_write_graphics) {
        const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        capture_native_notification_caption(graphics, source, width, true, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.top_draw)
                native_graphics_call(original, graphics, source, just, width);
        });
        return;
    }
    if (graphics && (graphics == g_native_petition_write_graphics ||
            graphics == g_native_petitions_write_graphics ||
            graphics == g_native_map_hover_write_graphics ||
            graphics == g_native_topbar_write_graphics ||
            graphics == g_native_designation_write_graphics ||
            graphics == g_native_embark_civilization_write_graphics)) {
        const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        capture_native_bounded_panel_caption(graphics, source, width, true, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.top_draw)
                native_graphics_call(original, graphics, source, just, width);
        });
        return;
    }
    if (capture_native_tooltip_caption_draw(graphics, source, [&] {
            if (const auto original = g_native_clipped_caption_hooks.top_draw)
                native_graphics_call(original, graphics, source, just, width);
        }, true)) return;
    const uintptr_t caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    if (graphics && graphics == g_native_announcement_log_write_graphics) {
        capture_native_announcement_log_caption(graphics, source, true, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.top_draw)
                native_graphics_call(original, graphics, source, just, width);
        });
        return;
    }
    if (graphics && graphics == g_native_character_write_graphics) {
        capture_native_character_caption(graphics, source, width, true, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.top_draw)
                native_graphics_call(original, graphics, source, just, width);
        });
        return;
    }
    if (graphics && graphics == g_native_squads_write_graphics) {
        capture_native_squads_caption(graphics, source, width, true, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.top_draw)
                native_graphics_call(original, graphics, source, just, width);
        });
        return;
    }
    if (native_worldgen_output_active(graphics)) {
        capture_native_worldgen_caption(graphics, source, width, true, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.top_draw)
                native_graphics_call(original, graphics, source, just, width);
        });
        return;
    }
    const auto map_hover = native_map_hover_context_for_draw(graphics, source, caller);
    capture_native_limited_caption_draw(graphics, source, just, width, [&] {
        if (g_native_clipped_caption_hooks.top_draw)
            native_graphics_call(g_native_clipped_caption_hooks.top_draw, graphics, source, just, width);
    }, true, NativeInfoTitleKind::None, false, {}, false,
        NativeCivilizationField::None, false, map_hover,
        NativeLocationPickerField::None, NativeTravelBuildingField::None, caller);
}

// The pinned PE entry specializes top_addst to an unbounded string draw:
// only graphics/source are live incoming arguments. ELF retains just/width.
static void capture_native_top_simple_caption_draw(graphicst *graphics, const NativeString *source) {
    graphics = native_graphics_view(graphics);
    if (graphics && graphics == g_native_notification_write_graphics) {
        const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        capture_native_notification_caption(graphics, source, 0, true, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.top_simple_draw)
                native_graphics_call(original, graphics, source);
        });
        return;
    }
    if (graphics && (graphics == g_native_petition_write_graphics ||
            graphics == g_native_petitions_write_graphics ||
            graphics == g_native_map_hover_write_graphics ||
            graphics == g_native_topbar_write_graphics ||
            graphics == g_native_designation_write_graphics ||
            graphics == g_native_embark_civilization_write_graphics)) {
        const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        capture_native_bounded_panel_caption(graphics, source, 0, true, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.top_simple_draw)
                native_graphics_call(original, graphics, source);
        });
        return;
    }
    if (capture_native_tooltip_caption_draw(graphics, source, [&] {
            if (const auto original = g_native_clipped_caption_hooks.top_simple_draw)
                native_graphics_call(original, graphics, source);
        }, true)) return;
    const uintptr_t caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    if (graphics && graphics == g_native_announcement_log_write_graphics) {
        capture_native_announcement_log_caption(graphics, source, true, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.top_simple_draw)
                native_graphics_call(original, graphics, source);
        });
        return;
    }
    if (graphics && graphics == g_native_character_write_graphics) {
        capture_native_character_caption(graphics, source, 0, true, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.top_simple_draw)
                native_graphics_call(original, graphics, source);
        });
        return;
    }
    if (graphics && graphics == g_native_squads_write_graphics) {
        capture_native_squads_caption(graphics, source, 0, true, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.top_simple_draw)
                native_graphics_call(original, graphics, source);
        });
        return;
    }
    if (native_worldgen_output_active(graphics)) {
        capture_native_worldgen_caption(graphics, source, 0, true, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.top_simple_draw)
                native_graphics_call(original, graphics, source);
        });
        return;
    }
    const auto map_hover = native_map_hover_context_for_draw(graphics, source, caller);
    capture_native_limited_caption_draw(graphics, source, NativeJustification{}, 0, [&] {
        if (g_native_clipped_caption_hooks.top_simple_draw)
            native_graphics_call(g_native_clipped_caption_hooks.top_simple_draw, graphics, source);
    }, true, NativeInfoTitleKind::None, false, {}, false,
        NativeCivilizationField::None, false, map_hover,
        NativeLocationPickerField::None, NativeTravelBuildingField::None, caller);
}

static void capture_native_top_flag_caption_draw(graphicst *graphics, const NativeString *source,
        NativeJustification just, int width, uint32_t flags) {
    graphics = native_graphics_view(graphics);
    if (graphics && graphics == g_native_notification_write_graphics) {
        const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        capture_native_notification_caption(graphics, source, width, true, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.top_flag_draw)
                native_graphics_call(original, graphics, source, just, width, flags);
        });
        return;
    }
    if (graphics && (graphics == g_native_petition_write_graphics ||
            graphics == g_native_petitions_write_graphics ||
            graphics == g_native_map_hover_write_graphics ||
            graphics == g_native_topbar_write_graphics ||
            graphics == g_native_designation_write_graphics ||
            graphics == g_native_embark_civilization_write_graphics)) {
        const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        capture_native_bounded_panel_caption(graphics, source, width, true, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.top_flag_draw)
                native_graphics_call(original, graphics, source, just, width, flags);
        });
        return;
    }
    if (capture_native_tooltip_caption_draw(graphics, source, [&] {
            if (const auto original = g_native_clipped_caption_hooks.top_flag_draw)
                native_graphics_call(original, graphics, source, just, width, flags);
        }, true)) return;
    const uintptr_t caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    if (graphics && graphics == g_native_announcement_log_write_graphics) {
        capture_native_announcement_log_caption(graphics, source, true, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.top_flag_draw)
                native_graphics_call(original, graphics, source, just, width, flags);
        });
        return;
    }
    if (graphics && graphics == g_native_character_write_graphics) {
        capture_native_character_caption(graphics, source, width, true, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.top_flag_draw)
                native_graphics_call(original, graphics, source, just, width, flags);
        });
        return;
    }
    if (graphics && graphics == g_native_squads_write_graphics) {
        capture_native_squads_caption(graphics, source, width, true, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.top_flag_draw)
                native_graphics_call(original, graphics, source, just, width, flags);
        });
        return;
    }
    if (native_worldgen_output_active(graphics)) {
        capture_native_worldgen_caption(graphics, source, width, true, caller, [&] {
            if (const auto original = g_native_clipped_caption_hooks.top_flag_draw)
                native_graphics_call(original, graphics, source, just, width, flags);
        }, native_caption_half_writer(flags));
        return;
    }
    const auto map_hover = native_map_hover_context_for_draw(graphics, source, caller);
    capture_native_limited_caption_draw(graphics, source, just, width, [&] {
        if (g_native_clipped_caption_hooks.top_flag_draw)
            native_graphics_call(g_native_clipped_caption_hooks.top_flag_draw, graphics, source, just, width, flags);
    }, true, NativeInfoTitleKind::None, false, {}, false,
        NativeCivilizationField::None, false, map_hover,
        NativeLocationPickerField::None, NativeTravelBuildingField::None, caller,
        std::nullopt, native_caption_half_writer(flags));
}

template<NativeFieldKind Kind>
static PendingNativeField &native_caption_pending() {
    if constexpr (Kind == NativeFieldKind::EmbarkItem) return pending_native_embark();
    else if constexpr (Kind == NativeFieldKind::Origin) return pending_native_origin();
    else return pending_native_book();
}

template<NativeFieldKind Kind>
static void capture_native_caption_resize(NativeString *text, size_t width, char fill) {
    if (g_native_tooltip_write) {
        if (const auto original = g_native_caption_hooks.resize) original(text, width, fill);
        return;
    }
    if ((g_native_announcement_log_write_graphics &&
            native_graphics() == g_native_announcement_log_write_graphics) ||
            (g_native_notification_write_graphics &&
             native_graphics() == g_native_notification_write_graphics)) {
        if (const auto original = g_native_caption_hooks.resize)
            original(text, width, fill);
        return;
    }
    if ((g_native_petition_write_graphics &&
            native_graphics() == g_native_petition_write_graphics) ||
            (g_native_petitions_write_graphics &&
            native_graphics() == g_native_petitions_write_graphics) ||
            (g_native_embark_civilization_write_graphics &&
            native_graphics() == g_native_embark_civilization_write_graphics) ||
            (g_native_topbar_write_graphics &&
            native_graphics() == g_native_topbar_write_graphics) ||
            (g_native_map_hover_write_graphics &&
             native_graphics() == g_native_map_hover_write_graphics) ||
            (g_native_designation_write_graphics &&
             native_graphics() == g_native_designation_write_graphics) ||
            (g_native_squads_write_graphics &&
            native_graphics() == g_native_squads_write_graphics) ||
            (g_native_character_write_graphics &&
             native_graphics() == g_native_character_write_graphics)) {
        remember_native_clipped_resize(text, width, fill);
        if (g_native_caption_hooks.resize) g_native_caption_hooks.resize(text, width, fill);
        return;
    }
    if (!native_private_ui_write_active(native_graphics()))
        capture_native_field_resize(native_caption_pending<Kind>(), text, width,
            Kind == NativeFieldKind::Origin, Kind == NativeFieldKind::EmbarkItem);
    if (g_native_caption_hooks.resize) g_native_caption_hooks.resize(text, width, fill);
}

template<NativeFieldKind Kind>
static void capture_native_caption_draw(graphicst *graphics, const NativeString *text,
        NativeJustification just, int width) {
    graphics = native_graphics_view(graphics);
    if (graphics && graphics == g_native_notification_write_graphics) {
        const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        capture_native_notification_caption(graphics, text, width, false, caller, [&] {
            // Call the entry trampoline: profile.draw points at the hooked
            // entry and would capture this same notification a second time.
            const auto original = g_native_clipped_caption_hooks.draw
                ? g_native_clipped_caption_hooks.draw : g_native_caption_hooks.draw;
            if (original)
                native_graphics_call(original, graphics, text, just, width);
        });
        return;
    }
    if (graphics && (graphics == g_native_petition_write_graphics ||
            graphics == g_native_petitions_write_graphics ||
            graphics == g_native_map_hover_write_graphics ||
            graphics == g_native_topbar_write_graphics ||
            graphics == g_native_designation_write_graphics ||
            graphics == g_native_embark_civilization_write_graphics)) {
        const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        capture_native_bounded_panel_caption(graphics, text, width, false, caller, [&] {
            // The private look-list/top-bar capture already owns this call. Avoid
            // reentering the shared addst entry with our helper as its caller.
            const auto original = (graphics == g_native_map_hover_write_graphics ||
                graphics == g_native_topbar_write_graphics) &&
                g_native_clipped_caption_hooks.draw
                ? g_native_clipped_caption_hooks.draw : g_native_caption_hooks.draw;
            if (original)
                native_graphics_call(original, graphics, text, just, width);
        });
        return;
    }
    if (capture_native_tooltip_caption_draw(graphics, text, [&] {
            if (const auto original = g_native_caption_hooks.draw)
                native_graphics_call(original, graphics, text, just, width);
        })) return;
    if (graphics && graphics == g_native_announcement_log_write_graphics) {
        const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        capture_native_announcement_log_caption(graphics, text, false, caller, [&] {
            if (const auto original = g_native_caption_hooks.draw)
                native_graphics_call(original, graphics, text, just, width);
        });
        return;
    }
    if (graphics && graphics == g_native_character_write_graphics) {
        const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        capture_native_character_caption(graphics, text, width, false, caller, [&] {
            if (const auto original = g_native_caption_hooks.draw)
                native_graphics_call(original, graphics, text, just, width);
        });
        return;
    }
    if (graphics && graphics == g_native_squads_write_graphics) {
        const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
        capture_native_squads_caption(graphics, text, width, false, caller, [&] {
            if (const auto original = g_native_caption_hooks.draw)
                native_graphics_call(original, graphics, text, just, width);
        });
        return;
    }
    if (!native_private_ui_write_active(graphics))
        capture_native_field_draw(native_caption_pending<Kind>(), graphics, text, Kind);
    if (g_native_caption_hooks.draw) native_graphics_call(g_native_caption_hooks.draw, graphics, text, just, width);
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
    {
        std::lock_guard<std::mutex> lock(g_native_map_hover_unit_identity_mutex);
        g_native_map_hover_unit_identities.clear();
    }
    native_clipped_pending() = {};
    native_designation_clipped_pending() = {};
    native_topbar_clipped_pending() = {};
    native_map_hover_clipped_pending() = {};
    native_petition_clipped_pending() = {};
    native_petitions_clipped_pending() = {};
    native_embark_civilization_clipped_pending() = {};
    native_squads_clipped_pending() = {};
    native_worldgen_clipped_pending() = {};
    native_character_clipped_pending() = {};
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

#ifdef _WIN32
#include "native_caption_widget_transactions.inc"
#endif

static bool native_caption_hooks_active() {
#ifdef _WIN32
    if (g_native_farm_name_hook.active() || native_independent_caption_widgets_active() ||
            native_independent_site_name_hooks_active()) return true;
#endif
#ifndef _WIN32
    if (g_native_main_caption_calls.active()) return true;
#endif
    return g_native_help_top_tile_hook.active() || g_native_help_tile_hook.active() ||
        g_native_legacy_tooltip_hook.active() || g_native_tooltip_container_hook.active() ||
        native_adventure_background_tooltip_active() ||
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
static bool native_inline_caption_hooks_active();
static bool uninstall_native_inline_caption_hooks();

static bool install_native_complete_caption_hooks() {
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
    if (!resolve_native_caption_profile(profile) || !bind_native_adventure_barter_captions(profile) ||
        !profile.resize || !profile.draw ||
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
#ifdef _WIN32
    // The profile retains the complete ordinary function/ABI gate. The
    // trampoline steals only its first, whole CMP instruction; its original
    // flags then reach the native conditional branch unchanged.
    const auto farm_name = native_reference_address(profile.base, 0x54f330);
    std::vector<unsigned char> farm_prefix{0x48,0x83,0xb9,0xe0,0x00,0x00,0x00,0x00};
    if (!farm_name || !native_reference_bytes(0x54f330, farm_prefix) ||
            !g_native_farm_name_hook.prepare(reinterpret_cast<unsigned char *>(farm_name), farm_prefix,
                reinterpret_cast<const void *>(&capture_native_farm_name), {}, "Native farm title owner")) return false;
    g_native_farm_name_original = reinterpret_cast<NativeFarmNameFn>(g_native_farm_name_hook.original);
    if (!g_native_farm_name_hook.install("Native farm title owner")) return false;
#endif
    std::vector<NativeCall> calls;
    calls.reserve(profile.sites.size() * 2 + profile.inline_resizes.size() +
        profile.roster_shorten_calls.size() + profile.announcement_page.rows_calls.size() + 10);
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
    for (const auto &site : profile.inline_resizes) {
#ifdef _WIN32
        if (site.discovered) continue;
#endif
        calls.push_back({site.address, 0,
            site.plain_shrink ? reinterpret_cast<const void *>(&capture_native_plain_clipped_resize)
                : site.zero_pad_one ? reinterpret_cast<const void *>(&capture_native_clipped_dot_padding_resize)
                              : reinterpret_cast<const void *>(&capture_native_clipped_resize),
            site.arguments, site.original, site.suffix});
    }
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
    // The report constructor preserves newlines in its complete string.
    // Bind only text_multiline::render's wrap call; other native wrappers
    // keep their own input policy. Both configured PE editions were extracted.
    g_native_multiline_wrap = reinterpret_cast<NativeCaptionMultilineWrapFn>(
        native_pe_address(profile.base, 0x52def0));
    std::vector<NativeCall> multiline_wrap_calls{{0x14198f1, 0x52def0,
        reinterpret_cast<const void *>(&wrap_native_multiline_announcement)}};
    if (!g_native_multiline_wrap || !native_reference_calls(multiline_wrap_calls, 0)) return false;
    calls.insert(calls.end(), multiline_wrap_calls.begin(), multiline_wrap_calls.end());
    if (profile.announcement_popup_call)
        calls.push_back({profile.announcement_popup_call, profile.announcement_popup_target,
            reinterpret_cast<const void *>(&capture_native_announcement_popup_draw)});
    // The header/body calls complete each inline hover producer. Keeping their
    // own count closes the output grid before the main renderer continues.
    std::vector<NativeCall> announcement_hover_calls{
        {0x3fab53, 0xad9960,
            reinterpret_cast<const void *>(&capture_native_announcement_hover_text<false>)},
        {0x3fac29, 0xad9960,
            reinterpret_cast<const void *>(&capture_native_announcement_hover_text<true>)},
        {0x3fae43, 0xad9960,
            reinterpret_cast<const void *>(&capture_native_announcement_hover_text<false>)},
        {0x3faf19, 0xad9960,
            reinterpret_cast<const void *>(&capture_native_announcement_hover_text<true>)},
    };
    if (!native_reference_calls(announcement_hover_calls, 0)) return false;
    calls.insert(calls.end(), announcement_hover_calls.begin(), announcement_hover_calls.end());
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
    if (!append_native_river_name_calls(calls)) return false;
#else
    if (!append_native_site_name_draw_calls(profile.main_calls)) return false;
    if (!append_native_river_name_calls(profile.main_calls)) return false;
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
    g_native_adventure_barter_sites = std::move(profile.adventure_barter_fields);
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
    if (!install_native_adventure_background_tooltip(profile.base)) return false;
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

#ifdef _WIN32
static bool install_native_basic_caption_hooks() {
    // A failed full transaction may have left a live relay when restoration
    // was denied. Never replace its saved originals or install over it.
    if (native_caption_hooks_active()) return false;
    NativeCaptionProfile profile;
    if (!resolve_native_basic_caption_profile(profile)) {
        log_line("WARN", "Native base caption entries are not yet resolved");
        return false;
    }
    struct InstallGuard {
        bool committed = false;
        ~InstallGuard() {
            if (!committed) { try { uninstall_native_caption_hooks(); } catch (...) {} }
        }
    } guard;
    reset_native_caption_capture();
    auto &hooks = g_native_clipped_caption_hooks;
    if (!hooks.draw_entry.prepare(reinterpret_cast<unsigned char *>(profile.draw),
            profile.draw_entry_prefix, reinterpret_cast<const void *>(&capture_native_clipped_draw),
            {}, "Native base caption draw")) return false;
    hooks.draw = reinterpret_cast<NativeCaptionDrawFn>(hooks.draw_entry.original);
    if (!hooks.draw) return false;
    g_native_caption_hooks.draw = hooks.draw;
    g_native_textbox_widget_binding.text_return_address = profile.textbox_widget.text_return_address;
    // Capture copied look kinds/payloads from the same completed shared draw.
    // Unmapped callers must prove exact current vector membership instead;
    // source classification does not depend on the private panel installer.
    g_native_map_hover_returns = std::move(profile.map_hover_returns);
    g_native_map_hover_text_offset = profile.map_caption_text_offset;
    g_native_map_hover_list = profile.map_hover_list;
    if (!hooks.draw_entry.install("Native base caption draw")) return false;
    // Resize, flagged and top rows are independent native entries. Failure
    // to bind one restores that entry alone and leaves base drawing active.
    const auto optional_entry = [&](NativeEntryHook &hook, auto target,
            const std::vector<unsigned char> &prefix, const void *replacement,
            auto &original, const char *label) {
        if (!target || prefix.empty()) return true;
        bool installed = false;
        try {
            if (hook.prepare(reinterpret_cast<unsigned char *>(target), prefix, replacement, {}, label)) {
                original = reinterpret_cast<std::remove_reference_t<decltype(original)>>(hook.original);
                installed = original && hook.install(label);
            }
        } catch (const std::exception &error) {
            log_line("WARN", std::string(label) + ": " + error.what());
        } catch (...) { log_line("WARN", std::string(label) + ": native entry preparation failed"); }
        if (installed) return true;
        bool restored = false;
        try { restored = hook.uninstall(label); }
        catch (const std::exception &error) {
            log_line("ERROR", std::string(label) + " restore: " + error.what());
        } catch (...) { log_line("ERROR", std::string(label) + ": native entry restoration failed"); }
        // A live callback must retain its trampoline even if installation
        // failed. Only a completed restore permits clearing the original.
        if (!restored || hook.active()) return false;
        original = nullptr;
        log_line("WARN", std::string(label) + " deferred; base captions remain active");
        return true;
    };
    const bool resize_ready = optional_entry(hooks.resize_entry, profile.resize, profile.resize_entry_prefix,
        reinterpret_cast<const void *>(&capture_native_clipped_resize), hooks.resize,
        "Native base caption resize");
    g_native_caption_hooks.resize = hooks.resize;
    if (!resize_ready || !optional_entry(hooks.flag_draw_entry, profile.flag_draw, profile.flag_draw_entry_prefix,
            reinterpret_cast<const void *>(&capture_native_clipped_flag_draw), hooks.flag_draw,
            "Native flagged caption draw")) return false;
    if (profile.top_simple_draw) {
        if (!optional_entry(hooks.top_draw_entry, profile.top_simple_draw, profile.top_draw_entry_prefix,
            reinterpret_cast<const void *>(&capture_native_top_simple_caption_draw), hooks.top_simple_draw,
            "Native top caption draw")) return false;
    } else if (!optional_entry(hooks.top_draw_entry, profile.top_draw, profile.top_draw_entry_prefix,
            reinterpret_cast<const void *>(&capture_native_top_caption_draw), hooks.top_draw,
            "Native top caption draw")) return false;
    if (!optional_entry(hooks.top_flag_draw_entry, profile.top_flag_draw, profile.top_flag_draw_entry_prefix,
            reinterpret_cast<const void *>(&capture_native_top_flag_caption_draw), hooks.top_flag_draw,
            "Native flagged top caption draw")) return false;
    g_native_basic_caption_installed = true;
    guard.committed = true;
    register_native_static_caption_roles();
    log_line("INFO", "Native base captions enabled; unresolved page observers retain native behavior");
    return true;
}
#endif

static bool install_native_caption_hooks() {
#ifdef _WIN32
    if (g_native_basic_caption_installed && g_native_clipped_caption_hooks.draw_entry.installed &&
            g_native_clipped_caption_hooks.draw) {
        register_native_static_caption_roles();
        install_native_independent_caption_widgets();
        if (!install_native_independent_site_name_hooks()) return false;
        return true;
    }
    try {
        if (install_native_complete_caption_hooks()) return true;
    } catch (const std::exception &error) {
        log_line("WARN", std::string("Complete caption extensions deferred: ") + error.what());
    } catch (...) { log_line("WARN", "Complete caption extensions deferred during installation"); }
    if (native_caption_hooks_active() && !uninstall_native_caption_hooks()) return false;
    if (native_caption_hooks_active()) return false;
    if (!install_native_basic_caption_hooks()) return false;
    install_native_independent_caption_widgets();
    if (!install_native_independent_site_name_hooks()) return false;
    return true;
#else
    return install_native_complete_caption_hooks();
#endif
}

static bool native_inline_caption_hooks_active() {
#ifdef _WIN32
    return std::any_of(g_native_inline_caption_hooks.begin(), g_native_inline_caption_hooks.end(),
        [](const auto &entry) { return entry->observer.active(); });
#else
    return false;
#endif
}

static bool uninstall_native_inline_caption_hooks() {
#ifdef _WIN32
    bool restored = true;
    for (auto it = g_native_inline_caption_hooks.rbegin(); it != g_native_inline_caption_hooks.rend(); ++it) {
        auto &entry = **it;
        try {
            if (!entry.observer.uninstall("Native inline caption observation restore")) restored = false;
        } catch (const std::exception &error) {
            log_line("ERROR", std::string("Native inline caption restore failed: ") + error.what());
            restored = false;
        } catch (...) {
            log_line("ERROR", "Native inline caption restore failed");
            restored = false;
        }
        if (entry.observer.active()) restored = false;
    }
    // Never destroy a live observer. Resize observations additionally depend
    // on the base trampoline; caption teardown checks this collection first.
    std::erase_if(g_native_inline_caption_hooks, [](const auto &entry) { return !entry->observer.active(); });
    return restored && !native_inline_caption_hooks_active();
#else
    return true;
#endif
}

static bool install_native_inline_caption_hooks() {
#ifdef _WIN32
    if (native_inline_caption_hooks_active()) {
        if (std::all_of(g_native_inline_caption_hooks.begin(), g_native_inline_caption_hooks.end(),
                [](const auto &entry) { return entry->observer.installed; })) return true;
        if (!uninstall_native_inline_caption_hooks()) return false;
    }
    auto &base_hooks = g_native_clipped_caption_hooks;
    if (!base_hooks.draw_entry.installed || !base_hooks.draw_entry.original || !base_hooks.draw) {
        log_line("WARN", "Native inline captions deferred: shared draw entry is unavailable");
        return false;
    }
    const uintptr_t base = native_history_profile_base();
    if (!base || reinterpret_cast<const void *>(base_hooks.draw) != base_hooks.draw_entry.original) return false;
    const auto resize = base_hooks.resize_entry.patches.size() == 1
        ? reinterpret_cast<uintptr_t>(base_hooks.resize_entry.patches.front().address) : 0;
    const bool resize_ready = base_hooks.resize_entry.installed && base_hooks.resize_entry.original &&
        base_hooks.resize && resize && resize == native_pe_address(base, 0xe1230) &&
        reinterpret_cast<const void *>(base_hooks.resize) == base_hooks.resize_entry.original;
    const auto append = resolve_native_caption_append_target(base);
    auto declarations = native_inline_caption_reference_sites();
    size_t enabled = 0, deferred = 0, absent = 0;
    for (auto &site : declarations) {
        const bool append_count = native_inline_caption_append_contract(site);
        if (!append_count && !native_inline_caption_observer_contract(site)) continue;
        const auto reference = static_cast<uint32_t>(site.address);
        if (native_pe_chooser_span_absent(reference,
                static_cast<uint32_t>(site.original.size()))) { ++absent; continue; }
        std::ostringstream label_stream;
        label_stream << "Native inline caption 0x" << std::hex << reference;
        const auto label = label_stream.str();
        NativeInlineCaptionHook *entry = nullptr;
        bool installed = false;
        try {
            if (append_count ? resolve_native_inline_caption_append_site(base, append, site)
                             : resize_ready && resolve_native_inline_caption_site(base, resize, site)) {
                const auto &binding = *site.discovered;
                const bool overlap = std::any_of(g_native_inline_caption_hooks.begin(), g_native_inline_caption_hooks.end(),
                    [&](const auto &other) {
                        return std::any_of(other->observer.patches.begin(), other->observer.patches.end(),
                            [&](const auto &patch) {
                                const auto begin = reinterpret_cast<uintptr_t>(patch.address);
                                return begin < base + binding.native_instruction + binding.length &&
                                    base + binding.native_instruction < begin + patch.original.size();
                            });
                    });
                if (!overlap) {
                    auto owned = std::make_unique<NativeInlineCaptionHook>();
                    owned->reference = reference;
                    g_native_inline_caption_hooks.push_back(std::move(owned));
                    entry = g_native_inline_caption_hooks.back().get();
                    const void *observer = append_count ? reinterpret_cast<const void *>(&observe_native_inline_append)
                        : site.plain_shrink
                        ? site.zero_pad_one ? reinterpret_cast<const void *>(&observe_native_inline_resize<true, true>)
                                            : reinterpret_cast<const void *>(&observe_native_inline_resize<true, false>)
                        : site.zero_pad_one ? reinterpret_cast<const void *>(&observe_native_inline_resize<false, true>)
                                            : reinterpret_cast<const void *>(&observe_native_inline_resize<false, false>);
                    const bool call = binding.flags & pe_runtime::inline_resize_detail::call_form;
                    installed = entry->observer.install(base, {{binding, site.original, observer,
                        call ? append_count ? append : resize : 0,
                        call ? append_count ? reinterpret_cast<const void *>(append)
                                            : base_hooks.resize_entry.original : nullptr}}, label.c_str());
                }
            }
        } catch (const std::exception &error) {
            log_line("WARN", label + ": " + error.what());
        } catch (...) { log_line("WARN", label + ": observation preparation failed"); }
        if (installed) { ++enabled; continue; }
        if (entry) {
            bool restored = false;
            try { restored = entry->observer.uninstall(label.c_str()); } catch (...) {}
            if (!restored || entry->observer.active()) {
                log_line("ERROR", label + ": restoration incomplete; retaining native trampoline dependencies");
                return false;
            }
            std::erase_if(g_native_inline_caption_hooks,
                [&](const auto &owned) { return owned.get() == entry; });
        }
        ++deferred;
        log_line("WARN", label + " deferred; this operation retains native behavior");
    }
    log_line("INFO", "Native inline captions: " + std::to_string(enabled) + " enabled, " +
        std::to_string(deferred) + " deferred, " + std::to_string(absent) + " absent by native feature contract");
    return enabled != 0;
#else
    // ELF retains its existing complete-profile NativeCallHook contracts.
    return true;
#endif
}

static bool uninstall_native_caption_hooks() {
#ifdef _WIN32
    // Site callbacks forward to draw_entry.original. Keep the original and
    // its capture state alive until every independent CALL is restored.
    if (!uninstall_native_independent_site_name_hooks() || native_independent_site_name_hooks_active()) return false;
    // Inline CALL observers execute resize_entry.original directly. A failed
    // observer restoration must keep that trampoline and its capture state.
    if (!uninstall_native_inline_caption_hooks() || native_inline_caption_hooks_active()) return false;
    g_native_basic_caption_installed = false;
#endif
    reset_native_announcement_notification_capture();
#ifdef _WIN32
    if (!g_native_farm_name_hook.uninstall("Native farm title owner restore")) return false;
    g_native_farm_name_original = nullptr;
    g_native_farm_name_owner = {};
#endif
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
    if (!uninstall_native_adventure_background_tooltip()) return false;
    if (!g_native_legacy_tooltip_hook.uninstall("Native legacy tooltip restore")) return false;
    native_legacy_tooltip_state() = {};
    if (!g_native_tooltip_container_hook.uninstall("Native tooltip document restore")) return false;
    g_native_tooltip_container_hook = {};
    native_tooltip_release_layer();
    if (!g_native_multiline_arrange_hook.uninstall("Native multiline wrapped height restore")) return false;
    g_native_multiline_arrange_hook = {};
    if (!g_native_multiline_widget_hook.uninstall("Native complete multiline widget restore")) return false;
    g_native_multiline_widget_hook = {};
#ifdef _WIN32
    // A surviving wrap relay still calls this original. Preserve the whole
    // multiline binding until its independent CALL has also been restored.
    if (!uninstall_native_independent_multiline_wrap()) return false;
#endif
    g_native_multiline_widget_binding = {};
    if (!g_native_textbox_widget_hook.uninstall("Native editable textbox properties restore")) return false;
    g_native_textbox_widget_hook = {};
    g_native_textbox_widget_binding = {};
    if (!g_native_caption_widget_hook.uninstall("Native original widget caption restore")) return false;
    g_native_caption_widget_hook = {};
    g_native_caption_widget_binding = {};
    if (!g_native_caption_hooks.code.uninstall("Complete native caption restore")) return false;
#ifdef _WIN32
    g_native_multiline_wrap = nullptr;
#endif
    g_native_announcement_popup_draw = nullptr;
    g_native_announcement_page_rows = nullptr;
    g_native_announcement_page_binding = {};
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
#ifdef _WIN32
    g_native_static_caption_roles_registered = false;
#endif
    g_native_location_picker_sites.clear();
    g_native_travel_building_sites.clear();
    g_native_adventure_crafting_sites.clear();
    g_native_adventure_barter_sites.clear();
    g_native_mission_title_returns.clear();
    g_native_caption_hooks.resize = nullptr;
    g_native_caption_hooks.draw = nullptr;
    reset_native_caption_capture();
    return true;
}

