void Overlay::render_native_tooltip_layer(SDL_Renderer *renderer) {
    TranslationStateScope translation;
    auto &layer = g_native_tooltip_layer;
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
    NativeInfoCapturedTextScope captions(g_native_tooltip_text);
    NativeUiReadScope component(gps_, nullptr);
    NativePanelReadScope panels(gps_);
    CellReadCacheScope cells(*this);

    struct TooltipText {
        size_t frame = 0;
        std::optional<NativeToolbarTooltip> card;
        std::vector<Match> matches;
    };
    std::vector<TooltipText> text;
    std::vector<Match> source_matches;
    for (size_t index = 0; index < g_native_tooltip_frames.size(); ++index) {
        const auto &frame = g_native_tooltip_frames[index];
        const auto &box = frame.bounds;
        if (box.x < 0 || box.y < 0 || box.w <= 0 || box.h <= 0 ||
                box.x > gps_->dimx - box.w || box.y > gps_->dimy - box.h ||
                frame.rows.size() != static_cast<size_t>(box.h)) continue;
        std::vector<std::string> rows(gps_->dimy, std::string(gps_->dimx, ' '));
        for (int y = 0; y < box.h; ++y) {
            const auto &row = frame.rows[static_cast<size_t>(y)];
            const size_t length = std::min(row.size(), static_cast<size_t>(box.w));
            rows[box.y + y].replace(static_cast<size_t>(box.x),
                length, row, 0, length);
        }
        // This producer's document is the sole source. The tooltip matcher
        // cannot rediscover the page behind it or enter full-screen matching.
        g_native_tooltip_widget_frame = frame;
        g_native_toolbar_tooltip.reset();
        prepared_matches_.clear();
        if (!capture_toolbar_tooltip_document(frame)) continue;
        append_toolbar_tooltip_matches(rows, prepared_matches_, -1, false);
        layout_toolbar_tooltip(renderer);
        for (bool top_layer : {false, true})
            for (const auto &draw : captured_native_drawn_text_rows(top_layer)) {
                if (!draw.unit_identity_target || draw.unit_identity_ready ||
                        draw.squad_alias_target || draw.editable_text || draw.source.empty() ||
                        draw.draw_grid != (top_layer ? gps_->screen_top : gps_->screen) ||
                        draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                        draw.x < box.x || draw.x >= box.x + box.w ||
                        draw.y < box.y || draw.y >= box.y + box.h ||
                        draw.source.size() > static_cast<size_t>(box.x + box.w - draw.x)) continue;
                const auto *screen = top_layer ? gps_->screen_top : gps_->screen;
                if (!screen) continue;
                bool same_source = true;
                for (size_t offset = 0; same_source && offset < draw.source.size(); ++offset)
                    same_source = screen[(static_cast<size_t>(draw.x) + offset) *
                        gps_->dimy * 8 + static_cast<size_t>(draw.y) * 8] ==
                        static_cast<unsigned char>(draw.source[offset]);
                if (!same_source) continue;
                const int right = draw.x + static_cast<int>(draw.source.size());
                std::erase_if(prepared_matches_, [&](const Match &match) {
                    return match.y == draw.y && match.x < right &&
                        draw.x < match.x + match.length;
                });
                // A formatter-owned tooltip identity waits without submitting
                // its native glyphs. Unknown tooltip text is unaffected.
                prepared_matches_.push_back({draw.x, draw.y,
                    static_cast<int>(draw.source.size()), kCreatureNameRule, {}, draw.source});
            }
        for (auto &match : prepared_matches_) {
            match.graphical_clear_width = match.graphical_clear_height = 0;
            match.graphical_auto_foreground = false;
            source_matches.push_back(match);
        }
        text.push_back({index, std::move(g_native_toolbar_tooltip),
            std::move(prepared_matches_)});
    }

    // All source masking happens inside the private arrays before any native
    // background, border or anchored artwork is painted. No readback is needed.
    prepared_matches_ = std::move(source_matches);
    native_ui_paint_grid(layer, renderer, prepared_matches_);
    for (auto &document : text) {
        g_native_toolbar_tooltip = std::move(document.card);
        g_native_tooltip_widget_frame = g_native_tooltip_frames[document.frame];
        std::vector<SDL_Rect> higher_frames;
        for (size_t index = document.frame + 1; index < g_native_tooltip_frames.size(); ++index)
            higher_frames.push_back(g_native_tooltip_frames[index].bounds);
        const auto occluders = std::make_shared<const std::vector<SDL_Rect>>(
            std::move(higher_frames));
        for (const auto &match : document.matches) {
            if (match.target.empty() || match.native_help_source_only ||
                    match.native_split_duplicate) continue;
            if (occluders->empty()) draw_match(renderer, match);
            else {
                Match clipped = match;
                clipped.native_help_background_frames = occluders;
                draw_help_clipped_match(renderer, clipped, *occluders, nullptr, nullptr);
            }
        }
    }
}
