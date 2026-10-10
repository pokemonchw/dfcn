// info_interfacest owns the complete fortress management tab container.
// Its native stores and caption ownership stay together in this private layer.
static NativeUiLayerStorage g_native_info_layer;
static const unsigned char *g_native_info_background_grid = nullptr;
static const graphicst *g_native_info_background_graphics = nullptr;
static SDL_Rect g_native_info_panel{};
enum class NativeInfoPage : int32_t {
    None = -1, Creatures, Tasks, Places, Labor, WorkOrders, Nobles, Objects, Justice
};
static NativeInfoPage g_native_info_page = NativeInfoPage::None;
enum class NativeInfoLaborPage : int32_t {
    None = -1, WorkDetails, StandingOrders, Kitchen, StoneUse
};
static NativeInfoLaborPage g_native_info_labor_page = NativeInfoLaborPage::None;

static bool native_info_background_view(const graphicst *graphics) noexcept {
    if (native_stocks_background_view(graphics)) return true;
    return graphics && g_native_info_layer.ready && !g_native_info_foreground &&
        graphics != g_native_info_write_graphics &&
        graphics->screen == g_native_info_background_grid;
}

static bool native_info_background_cell_hidden(const graphicst *graphics,
        int x, int y) noexcept {
    if (native_stocks_background_cell_hidden(graphics, x, y)) return true;
    return graphics && g_native_info_layer.ready &&
        (graphics == g_native_info_background_graphics ||
            graphics->screen == g_native_info_background_grid) &&
        graphics != g_native_info_write_graphics &&
        graphics != g_native_stocks_write_graphics &&
        x >= g_native_info_panel.x && y >= g_native_info_panel.y &&
        x < g_native_info_panel.x + g_native_info_panel.w &&
        y < g_native_info_panel.y + g_native_info_panel.h;
}

static bool native_info_background_copy_hidden(SDL_Renderer *renderer,
        const SDL_Rect *destination) noexcept {
    if (native_stocks_background_copy_hidden(renderer, destination)) return true;
    if (!destination || destination->w <= 0 || destination->h <= 0 ||
            !g_native_info_layer.ready || renderer != g_native_info_layer.renderer) return false;
    // Atlas/offscreen copies have a different coordinate space and owners.
    if (SDL_GetRenderTarget(renderer)) return false;
    const auto *graphics = native_graphics();
    if (!graphics || graphics->screen != g_native_info_background_grid ||
            graphics->tile_pixel_x <= 0 || graphics->tile_pixel_y <= 0) return false;
    const int tile_x = graphics->tile_pixel_x, tile_y = graphics->tile_pixel_y;
    const int origin_x = (graphics->screen_pixel_x - tile_x * graphics->dimx) / 2;
    const int origin_y = (graphics->screen_pixel_y - tile_y * graphics->dimy) / 2;
    const int left = origin_x + g_native_info_panel.x * tile_x;
    const int top = origin_y + g_native_info_panel.y * tile_y;
    return destination->x >= left && destination->y >= top &&
        int64_t(destination->x) + destination->w <= left + g_native_info_panel.w * tile_x &&
        int64_t(destination->y) + destination->h <= top + g_native_info_panel.h * tile_y;
}

struct NativeInfoCapturedText {
    std::array<std::vector<NativeDrawnTextRow>, 2> rows;
    std::vector<NativeDrawnTextRow> overwritten;
    std::array<std::unordered_set<uint64_t>, 2> positions;
    std::array<std::vector<NativeDateOccludedTextRow>, 2> dates;
    std::optional<NativeTooltipWidgetFrame> tooltip_widget;
    std::optional<NativeToolbarTooltip> toolbar_tooltip;
    uint64_t epoch = 0, sequence = 0;
    decltype(g_clipped_captions) clipped;
    uint64_t clipped_epoch = 0;
    decltype(g_native_unit_chooser_records) choosers;
    uint64_t chooser_epoch = 0;
    decltype(g_embark_item_sources_by_position) item_sources;
    decltype(g_embark_item_fields_this_frame) item_fields;
    decltype(g_native_paragraph_captures) paragraphs;
    decltype(g_native_paragraph_index) paragraph_index;
    decltype(g_native_paragraph_row_index) paragraph_rows;
    decltype(g_native_paragraph_prefix_index) paragraph_prefixes;
    decltype(g_native_paragraph_prefix_lengths) paragraph_prefix_lengths{};
    uint64_t paragraph_sequence = 0, paragraph_order = 0;

    void swap_current() {
        std::scoped_lock lock(g_native_drawn_text_mutex, g_clipped_caption_mutex,
            g_native_unit_chooser_record_mutex, g_embark_item_source_mutex,
            g_native_paragraph_mutex);
        rows[0].swap(g_native_drawn_text_rows);
        rows[1].swap(g_native_drawn_top_text_rows);
        overwritten.swap(g_native_overwritten_text_rows);
        positions.swap(g_native_drawn_text_positions);
        dates.swap(g_native_date_occluded_text_rows);
        tooltip_widget.swap(g_native_tooltip_widget_frame);
        toolbar_tooltip.swap(g_native_toolbar_tooltip);
        std::swap(epoch, g_native_drawn_text_epoch);
        std::swap(sequence, g_native_drawn_text_sequence);
        clipped.swap(g_clipped_captions);
        std::swap(clipped_epoch, g_clipped_caption_epoch);
        choosers.swap(g_native_unit_chooser_records);
        std::swap(chooser_epoch, g_native_unit_chooser_record_epoch);
        item_sources.swap(g_embark_item_sources_by_position);
        item_fields.swap(g_embark_item_fields_this_frame);
        // Swap lists and their iterator/pointer indices together.
        paragraphs.swap(g_native_paragraph_captures);
        paragraph_index.swap(g_native_paragraph_index);
        paragraph_rows.swap(g_native_paragraph_row_index);
        paragraph_prefixes.swap(g_native_paragraph_prefix_index);
        paragraph_prefix_lengths.swap(g_native_paragraph_prefix_lengths);
        std::swap(paragraph_sequence, g_native_paragraph_sequence);
        std::swap(paragraph_order, g_native_paragraph_registry_order);
    }
    void clear() {
        for (auto &plane : rows) plane.clear();
        overwritten.clear();
        for (auto &plane : positions) plane.clear();
        for (auto &plane : dates) plane.clear();
        tooltip_widget.reset(); toolbar_tooltip.reset();
        epoch = sequence = 0;
        clipped.clear(); clipped_epoch = 0;
        choosers.clear(); chooser_epoch = 0;
        item_sources.clear(); item_fields.clear();
        paragraph_index.clear(); paragraph_rows.clear(); paragraph_prefixes.clear();
        paragraph_prefix_lengths.fill(0);
        paragraphs.clear(); paragraph_sequence = paragraph_order = 0;
    }
};
static NativeInfoCapturedText g_native_info_text;

// The existing caption readers see the component's actual writers both at
// native draw time and during translation. Background readers never see them.
struct NativeInfoCapturedTextScope {
    NativeInfoCapturedText &text;
    explicit NativeInfoCapturedTextScope(NativeInfoCapturedText &value = g_native_info_text)
        : text(value) { text.swap_current(); }
    ~NativeInfoCapturedTextScope() { text.swap_current(); }
    NativeInfoCapturedTextScope(const NativeInfoCapturedTextScope &) = delete;
    NativeInfoCapturedTextScope &operator=(const NativeInfoCapturedTextScope &) = delete;
};

struct NativeInfoForegroundScope {
    bool previous = g_native_info_foreground;
    NativeInfoForegroundScope() {
        g_native_info_foreground = true;
        NativeUiReadScope::invalidate_reads();
    }
    ~NativeInfoForegroundScope() {
        g_native_info_foreground = previous;
        NativeUiReadScope::invalidate_reads();
    }
};

static void native_info_begin_frame() {
    g_native_info_layer.ready = false;
    g_native_info_layer.frames.clear();
    g_native_info_layer.native_renderer = nullptr;
    g_native_info_layer.renderer = nullptr;
    g_native_info_text.clear();
    g_native_info_background_grid = nullptr;
    g_native_info_background_graphics = nullptr;
    g_native_info_panel = {};
    g_native_info_page = NativeInfoPage::None;
    g_native_info_labor_page = NativeInfoLaborPage::None;
    NativeUiReadScope::invalidate_reads();
}
