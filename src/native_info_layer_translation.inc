void Overlay::render_native_info_layer(SDL_Renderer *renderer) {
    render_native_fortress_layer(renderer, false);
}

void Overlay::render_native_stocks_layer(SDL_Renderer *renderer) {
    render_native_fortress_layer(renderer, true);
}

void Overlay::render_native_fortress_layer(SDL_Renderer *renderer, bool stocks) {
    TranslationStateScope translation;
    auto &layer = stocks ? g_native_stocks_layer : g_native_info_layer;
    if (!renderer || !layer.ready || layer.renderer != renderer) return;
    if (!config_.enabled || !face_ || rules_.empty()) {
        native_ui_paint_grid(layer, renderer, {});
        return;
    }
    struct ViewScope {
        Overlay &overlay;
        graphicst *graphics;
        std::vector<Match> matches;
        std::optional<NativeToolbarTooltip> tooltip;
        GraphicalClearReadback *readback;
        std::vector<NativeBorderRepair> repairs;
        decltype(Overlay::graphical_rects_) graphical_rects;
        decltype(Overlay::native_border_glyphs_) border_glyphs;
        decltype(Overlay::cell_composite_state_) composite;
        decltype(Overlay::cell_composite_epoch_) composite_epochs;
        decltype(Overlay::observed_glyph_chars_) glyphs;
        decltype(Overlay::observed_glyph_epoch_) glyph_epochs;
        decltype(Overlay::suppressed_glyphs_) suppressed;
        ViewScope(Overlay &value, graphicst *foreground)
            : overlay(value), graphics(value.gps_), matches(std::move(value.prepared_matches_)),
              tooltip(std::move(g_native_toolbar_tooltip)), readback(value.graphical_clear_readback_),
              repairs(std::move(value.native_border_repairs_)),
              graphical_rects(std::move(value.graphical_rects_)),
              border_glyphs(std::move(value.native_border_glyphs_)),
              composite(std::move(value.cell_composite_state_)),
              composite_epochs(std::move(value.cell_composite_epoch_)),
              glyphs(std::move(value.observed_glyph_chars_)),
              glyph_epochs(std::move(value.observed_glyph_epoch_)),
              suppressed(std::move(value.suppressed_glyphs_)) {
            overlay.gps_ = foreground;
            overlay.graphical_clear_readback_ = nullptr;
        }
        ~ViewScope() {
            overlay.gps_ = graphics;
            overlay.prepared_matches_ = std::move(matches);
            g_native_toolbar_tooltip = std::move(tooltip);
            overlay.graphical_clear_readback_ = readback;
            overlay.native_border_repairs_ = std::move(repairs);
            overlay.graphical_rects_ = std::move(graphical_rects);
            overlay.native_border_glyphs_ = std::move(border_glyphs);
            overlay.cell_composite_state_ = std::move(composite);
            overlay.cell_composite_epoch_ = std::move(composite_epochs);
            overlay.observed_glyph_chars_ = std::move(glyphs);
            overlay.observed_glyph_epoch_ = std::move(glyph_epochs);
            overlay.suppressed_glyphs_ = std::move(suppressed);
        }
    } view(*this, layer.foreground.graphics());
    NativeInfoCapturedTextScope captions(stocks ? g_native_stocks_text : g_native_info_text);
    NativeInfoForegroundScope foreground;
    NativeUiReadScope component(gps_, nullptr);
    NativePanelReadScope panels(gps_);
    CellReadCacheScope cells(*this);
    // One matching/layout pass for this submitted component. No glyph-copy
    // callback enters its translation and no translated frame is cached.
    prepared_matches_ = stocks ? find_native_stocks_matches() : find_native_info_matches();
    normalize_native_split_text();

    if (stocks) {
        // The Stocks producer supplies each field and its bounds. Its private
        // layer never enters page discovery, generic prose layout or per-glyph
        // suppression. Only the submitted caption spans need translation.
        for (auto &match : prepared_matches_) {
            if (match.target.empty() || match.native_split_duplicate) continue;
            const int left = match.layout_x >= 0 ? match.layout_x : match.x;
            if (match.layout_clip_right > left)
                layout_fortress_text_rows(renderer, {{&match}}, left, match.layout_clip_right);
        }
        native_ui_paint_grid(layer, renderer, prepared_matches_);
        for (const auto &match : prepared_matches_) {
            if (match.target.empty() || match.native_split_duplicate) continue;
            Match text = match;
            text.graphical_clear_width = text.graphical_clear_height = 0;
            text.graphical_auto_foreground = false;
            draw_match(renderer, text);
        }
        return;
    }

    // Keep independent native fields out of the generic column/prose pass,
    // following the existing management-page layout order.
    const auto independent = [](const Match &match) {
        return match.rule == kToolbarTooltipBodyRule || match.rule == kToolbarTooltipKeyRule ||
            match.rule == kFortressUnitChooserRule || match.rule == kFortressLocationListRule ||
            match.rule == kWorkshopTaskRowRule || match.rule == kWorkshopMaterialFieldRule ||
            is_fortress_task_field(match) || match.rule == kUiMessageRule ||
            match.rule == kHelpDocumentRule;
    };
    std::vector<Match> fields;
    for (const auto &match : prepared_matches_) if (independent(match)) fields.push_back(match);
    std::erase_if(prepared_matches_, independent);
    // Native button/tab geometry is sufficient for the management component.
    // Do not enter the main page's character/settings/prose layout sweeps.
    for (auto &match : prepared_matches_) {
        const int y = match.native_split_text ? match.native_split_top_y : match.y;
        if (match.target.empty() || match.native_split_duplicate || match.layout_font_pixels > 0)
            continue;
        if (const auto button = native_button_text_span(*gps_, match.x, match.x + match.length, y)) {
            match.layout_x = button->first;
            match.layout_length = button->second - button->first;
            match.layout_clip_right = button->second;
        } else if (const auto tab = native_classic_tab_text_span(*gps_, match.x, y);
                tab && tab->first <= match.x && tab->second >= match.x + match.length) {
            match.layout_x = tab->first;
            match.layout_length = tab->second - tab->first;
            match.layout_clip_right = tab->second;
        }
    }
    layout_fortress_sort_captions();
    switch (g_native_info_page) {
    case NativeInfoPage::Creatures: layout_fortress_creatures(renderer); break;
    case NativeInfoPage::Places: layout_fortress_location(renderer); break;
    case NativeInfoPage::Labor:
        layout_fortress_labor(renderer);
        if (g_native_info_labor_page == NativeInfoLaborPage::Kitchen ||
                g_native_info_labor_page == NativeInfoLaborPage::None)
            layout_fortress_kitchen(renderer);
        if (g_native_info_labor_page == NativeInfoLaborPage::StoneUse ||
                g_native_info_labor_page == NativeInfoLaborPage::None)
            layout_fortress_stone(renderer);
        break;
    case NativeInfoPage::Nobles: layout_fortress_nobles(renderer); break;
    case NativeInfoPage::Objects:
        layout_fortress_stocks(renderer);
        layout_fortress_item_captions(renderer);
        break;
    case NativeInfoPage::Justice: layout_fortress_justice(renderer); break;
    default: break;
    }
    layout_multiline_matches();
    prepared_matches_.insert(prepared_matches_.end(),
        std::make_move_iterator(fields.begin()), std::make_move_iterator(fields.end()));
    if (g_native_info_page == NativeInfoPage::Tasks ||
            g_native_info_page == NativeInfoPage::Places ||
            g_native_info_page == NativeInfoPage::WorkOrders) {
        layout_workshop_task_rows(renderer);
        layout_workshop_material_fields(renderer);
        layout_workshop_recipe_card(renderer);
    }
    if (g_native_info_page == NativeInfoPage::Tasks ||
            g_native_info_page == NativeInfoPage::WorkOrders)
        layout_fortress_task_rows(renderer);
    if (!captured_native_unit_chooser_records().empty())
        layout_fortress_unit_chooser(renderer);
    if (g_native_info_page == NativeInfoPage::Places)
        layout_fortress_location_list(renderer);
    if (g_native_info_page == NativeInfoPage::Labor &&
            (g_native_info_labor_page == NativeInfoLaborPage::StandingOrders ||
                g_native_info_labor_page == NativeInfoLaborPage::None))
        layout_fortress_hauling(renderer);
    if (g_native_info_page == NativeInfoPage::WorkOrders)
        layout_work_order_fields(renderer);
    layout_toolbar_tooltip(renderer);
    normalize_native_split_text();

    // Hide only owned source bytes in this grid, then use the same native
    // base/top tile and anchored-artwork painters as the tutorial layer.
    native_ui_paint_grid(layer, renderer, prepared_matches_);
    if (g_native_info_page == NativeInfoPage::WorkOrders)
        draw_work_order_buttons(renderer);
    for (const auto &match : prepared_matches_) {
        if (match.target.empty() || match.native_help_source_only || match.native_split_duplicate) continue;
        Match text = match;
        text.graphical_clear_width = text.graphical_clear_height = 0;
        text.graphical_auto_foreground = false;
        draw_match(renderer, text);
    }
}
