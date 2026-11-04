void Overlay::render_native_pause_layer(SDL_Renderer *renderer) {
    TranslationStateScope translation;
    auto &layer = g_native_pause_layer;
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
        std::optional<NativeTooltipWidgetFrame> widget;
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
              tooltip(std::move(g_native_toolbar_tooltip)),
              widget(std::move(g_native_tooltip_widget_frame)),
              readback(value.graphical_clear_readback_),
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
            g_native_tooltip_widget_frame = std::move(widget);
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
    NativeInfoCapturedTextScope captions(g_native_pause_text);
    NativeUiReadScope component(gps_, nullptr);
    NativePanelReadScope panels(gps_);
    CellReadCacheScope cells(*this);
    prepared_matches_ = find_native_pause_matches();
    normalize_native_split_text();

    // Fixed confirmation prose already has one measured paragraph layout.
    // Normal Escape and timeline choices retain the existing shared button,
    // title and soundtrack layout on their intact private source grid.
    std::vector<Match> paragraphs;
    const auto complete_paragraph = [](const Match &match) { return match.rule == kUiMessageRule; };
    for (const auto &match : prepared_matches_)
        if (complete_paragraph(match)) paragraphs.push_back(match);
    std::erase_if(prepared_matches_, complete_paragraph);
    // Mode-5 fields already carry the rectangles from their native owner.
    // Do not route them through caption-based recognition or embark replay.
    const bool menu = native_pause_compact_view(gps_) || layout_pause_menu(renderer);
    if (!menu) for (auto &match : prepared_matches_) {
        if (match.target.empty() || match.native_help_source_only ||
                match.native_split_duplicate || match.layout_prepared) continue;
        const int y = match.native_split_text ? match.native_split_top_y : match.y;
        if (const auto button = native_button_text_span(*gps_, match.x, match.x + match.length, y)) {
            match.layout_x = button->first;
            match.layout_length = button->second - button->first;
            match.layout_clip_right = button->second;
        }
    }
    if (!menu) layout_multiline_matches();
    prepared_matches_.insert(prepared_matches_.end(),
        std::make_move_iterator(paragraphs.begin()), std::make_move_iterator(paragraphs.end()));

    // Native backgrounds, frames and controls are painted from this private
    // grid with only owned English spans masked, followed by translated ink.
    native_ui_paint_grid(layer, renderer, prepared_matches_);
    for (const auto &match : prepared_matches_) {
        if (match.target.empty() || match.native_help_source_only || match.native_split_duplicate)
            continue;
        Match text = match;
        text.graphical_clear_width = text.graphical_clear_height = 0;
        text.graphical_auto_foreground = false;
        draw_match(renderer, text);
    }
}
