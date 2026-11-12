void Overlay::render_native_notification_layer(SDL_Renderer *renderer) {
    render_native_announcement_layer(renderer, false);
}

void Overlay::render_native_reports_layer(SDL_Renderer *renderer) {
    render_native_announcement_layer(renderer, true);
}

void Overlay::render_native_announcement_log_layer(SDL_Renderer *renderer) {
    render_native_announcement_layer(renderer, false, true);
}

std::string Overlay::native_announcement_log_style_key() const {
    // Resource/configuration scalars only; no other screen or component is
    // queried to decide whether this document needs translation or painting.
    std::string key;
    key.reserve(160 + config_.language.size());
    const auto value = [&](const auto &input) {
        key.append(reinterpret_cast<const char *>(&input), sizeof(input));
    };
    value(g_native_ui_render_generation);
    const auto resources = RULESETS.resource_revision();
    const auto catalog = native_identity_translation_catalog_generation();
    value(resources); value(catalog);
    value(config_.enabled); value(config_.native_language_original);
    value(config_.font_pixels); value(config_.font_pixel_grid);
    value(config_.min_font_pixels); value(config_.font_scale);
    value(config_.font_bold); value(config_.horizontal_padding);
    const auto font = reinterpret_cast<uintptr_t>(face_);
    value(font);
    key.append(config_.language);
    return key;
}

bool Overlay::native_announcement_log_viewport_complete() {
    if (!config_.enabled) {
        g_native_announcement_log_translation_viewport_ready = true;
        return true;
    }
    native_announcement_log_translation_begin_viewport();
    struct VisibleBatch {
        ~VisibleBatch() { native_announcement_log_translation_end_viewport(); }
    } batch;
    const auto previous_graphics = gps_;
    struct GraphicsRestore {
        graphicst *&slot;
        graphicst *previous;
        ~GraphicsRestore() { slot = previous; }
    } restore{gps_, previous_graphics};
    gps_ = g_native_announcement_log_layer.foreground.graphics();
    NativeUiReadScope component(gps_, nullptr);
    CellReadCacheScope cells(*this);
    auto matches = find_native_announcement_log_matches();
    announcement_log_prepared_matches_ = std::move(matches);
    announcement_log_prepared_submission_ = g_native_announcement_log_submission;
    return g_native_announcement_log_translation_viewport_ready;
}

void Overlay::render_native_announcement_layer(SDL_Renderer *renderer, bool reports, bool log) {
    TranslationStateScope translation;
    auto &layer = log ? g_native_announcement_log_layer :
        reports ? g_native_reports_layer : g_native_notification_layer;
    const SDL_Rect *opaque_frame = log ? &g_native_announcement_log_panel : nullptr;
    if (!renderer || !layer.ready || layer.renderer != renderer) return;
    if (!config_.enabled || !face_ || rules_.empty()) {
        native_ui_paint_grid(layer, renderer, {}, opaque_frame);
        return;
    }
    struct ViewScope {
        Overlay &overlay;
        graphicst *graphics;
        std::vector<Match> matches;
        std::optional<NativeToolbarTooltip> tooltip;
        std::optional<NativeTooltipWidgetFrame> widget;
        bool standalone;
        GraphicalClearReadback *readback;
        std::vector<NativeBorderRepair> repairs;
        decltype(Overlay::graphical_rects_) graphical_rects;
        decltype(Overlay::native_border_glyphs_) border_glyphs;
        decltype(Overlay::cell_composite_state_) composite;
        decltype(Overlay::cell_composite_epoch_) composite_epochs;
        decltype(Overlay::observed_glyph_chars_) glyphs;
        decltype(Overlay::observed_glyph_epoch_) glyph_epochs;
        decltype(Overlay::suppressed_glyphs_) suppressed;
        ViewScope(Overlay &value, graphicst *foreground, bool independent)
            : overlay(value), graphics(value.gps_), matches(std::move(value.prepared_matches_)),
              standalone(independent),
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
            if (!standalone) {
                tooltip = std::move(g_native_toolbar_tooltip);
                widget = std::move(g_native_tooltip_widget_frame);
            }
        }
        ~ViewScope() {
            overlay.gps_ = graphics;
            overlay.prepared_matches_ = std::move(matches);
            if (!standalone) {
                g_native_toolbar_tooltip = std::move(tooltip);
                g_native_tooltip_widget_frame = std::move(widget);
            }
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
    } view(*this, layer.foreground.graphics(), log);
    std::optional<NativeInfoCapturedTextScope> captions;
    if (!log) captions.emplace(reports ? g_native_reports_text : g_native_notification_text);
    // Each submitted announcement grid is a complete foreground document.
    // Its own draw addresses and wrap records retain the existing complete
    // report ownership; an active read scope keeps page recovery out of it.
    NativeUiReadScope component(gps_, nullptr);
    std::optional<NativePanelReadScope> panels;
    if (!log) panels.emplace(gps_);
    // Notification grids bypass the generic matcher's RAW refresh. Capture
    // GENERATED species/caste identities here on the render thread, before
    // the complete report translator takes any context-dependent cache key.
    if (!log) refresh_native_generated_creature_names();
    CellReadCacheScope cells(*this);
    if (log && announcement_log_prepared_submission_ == g_native_announcement_log_submission)
        prepared_matches_ = std::move(announcement_log_prepared_matches_);
    else prepared_matches_ = log ? find_native_announcement_log_matches() :
        reports ? find_matches() : find_native_notification_matches();
    if (log) announcement_log_prepared_submission_ = 0;
    const auto owned = [&](const Match &match) {
        return std::any_of(layer.frames.begin(), layer.frames.end(), [&](const SDL_Rect &box) {
            return match.x >= box.x && match.y >= box.y &&
                match.x + std::max(1, match.length) <= box.x + box.w &&
                match.y < box.y + box.h;
        });
    };
    std::erase_if(prepared_matches_, [&](const Match &match) { return !owned(match); });
    if (!log) {
        normalize_native_split_text();

        // Complete report paragraphs already own their measured viewport and
        // native row spans. Keep that layout while fitting ordinary instructions
        // and controls with the same prose pass used on the native page.
        std::vector<Match> paragraphs;
        const auto complete_report = [](const Match &match) {
            return match.rule == kUiMessageRule || match.native_announcement_popup;
        };
        for (const auto &match : prepared_matches_)
            if (complete_report(match)) paragraphs.push_back(match);
        std::erase_if(prepared_matches_, complete_report);
        if (reports) for (auto &match : prepared_matches_) {
            const int y = match.native_split_text ? match.native_split_top_y : match.y;
            if (match.target.empty() || match.native_split_duplicate || match.layout_prepared)
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
        if (!layout_embark_introduction(renderer)) layout_multiline_matches();
        prepared_matches_.insert(prepared_matches_.end(),
            std::make_move_iterator(paragraphs.begin()), std::make_move_iterator(paragraphs.end()));
        std::erase_if(prepared_matches_, [&](const Match &match) { return !owned(match); });
    }

    // Mask English only while the native painters read this private grid.
    // Backgrounds, borders and artwork are painted before translated ink.
    native_ui_paint_grid(layer, renderer, prepared_matches_, opaque_frame);
    for (const auto &match : prepared_matches_) {
        if (match.target.empty() || match.native_help_source_only || match.native_split_duplicate)
            continue;
        Match text = match;
        text.graphical_clear_width = text.graphical_clear_height = 0;
        text.graphical_auto_foreground = false;
        draw_match(renderer, text);
    }
}
