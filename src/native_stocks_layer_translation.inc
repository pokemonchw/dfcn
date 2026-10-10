// Consume this component's actual addst writers. Category, group and concrete
// item roles come from their native callers, including unabridged names whose
// trailing bytes are later covered by the action strip. No screen discovery,
// dictionary sweep over the map, or per-glyph matching is needed here.
std::vector<Match> Overlay::find_native_stocks_matches() const {
    std::vector<Match> result;
    if (!gps_ || !gps_->screen || !g_native_stocks_layer.ready) return result;
    const std::array draws{captured_native_drawn_text_rows(), captured_native_drawn_text_rows(true)};
    std::map<int, std::vector<bool>> occupied;
    const auto settings = native_ui_settings();
    const bool classic = settings && settings->classic;
    // Read these local skins directly. native_item_action_at builds a whole
    // grid candidate index for unknown pages, which this owned list does not
    // need. The emitted row already proves where its action strip can occur.
    const int32_t (*actions[])[3] = {
        native_texture_button_stocks_forbid(*gps_), native_texture_button_stocks_forbid_active(*gps_),
        native_texture_button_stocks_dump(*gps_), native_texture_button_stocks_dump_active(*gps_),
        native_texture_button_stocks_melt(*gps_), native_texture_button_stocks_melt_active(*gps_),
        native_texture_button_stocks_hide(*gps_), native_texture_button_stocks_hide_active(*gps_),
        native_texture_button_stocks_recenter(*gps_), native_texture_button_stocks_view_item(*gps_),
    };
    // item_type::WOOD = 5 in the native enum. It remains authoritative when
    // the selected Logs category has scrolled out of the category column.
    const bool wood_context = g_native_stocks_current_type == 5;
    for (const auto &plane : draws) for (const auto &draw : plane) {
        if (draw.y < 0 || draw.y >= gps_->dimy || draw.x < 0 || draw.x >= gps_->dimx ||
                draw.source.empty() || draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                draw.draw_grid != (draw.top_layer ? gps_->screen_top : gps_->screen)) continue;
        const bool category = draw.native_caller == g_native_stocks_category_caller;
        const bool group = draw.native_caller == g_native_stocks_group_caller;
        const bool item = draw.native_caller == g_native_stocks_item_caller;
        const bool item_caption = group || item;
        int left = draw.x;
        int right = gps_->dimx;
        if (draw.draw_clip) {
            if (draw.y < draw.draw_clip->y || draw.y >= draw.draw_clip->y + draw.draw_clip->h)
                continue;
            left = std::max(left, draw.draw_clip->x);
            right = std::min(right, draw.draw_clip->x + draw.draw_clip->w);
        }
        if (category) right = std::min(right, g_native_stocks_category_right - 8);
        else if (draw.x < g_native_stocks_category_right)
            right = std::min(right, g_native_stocks_category_right);
        else if (item_caption) {
            // Native controls own the right edge even when the text/font row
            // is clipped at either scrolling boundary. Inspect only this
            // emitted caption row and its possible half-font mate.
            int controls = -1;
            for (int y : {draw.y, draw.y - 1, draw.y + 1}) {
                if (y < g_native_stocks_panel.y ||
                        y >= g_native_stocks_panel.y + g_native_stocks_panel.h) continue;
                for (int x = draw.x; x + 1 < right; ++x) {
                    if (std::any_of(std::begin(actions), std::end(actions), [&](const auto *skin) {
                            return native_item_action_skin_at(*gps_, x, y, skin, classic);
                        })) {
                        const int edge = x - 1;
                        controls = controls < 0 ? edge : std::min(controls, edge);
                        break;
                    }
                }
            }
            if (controls >= 0) right = std::min(right, controls);
            else continue;
        }
        if (left >= right) continue;
        const int source_end = static_cast<int>(std::min<int64_t>(right,
            int64_t(draw.x) + draw.source.size()));
        while (left < source_end && draw.source[left - draw.x] == ' ') ++left;
        int end = left;
        while (end < source_end && visible_char_at(end, draw.y) ==
                static_cast<unsigned char>(draw.source[end - draw.x])) ++end;
        while (end > left && draw.source[end - draw.x - 1] == ' ') --end;
        if (end <= left) continue;
        auto &used = occupied.try_emplace(draw.y, gps_->dimx, false).first->second;
        if (std::any_of(used.begin() + left, used.begin() + end, [](bool value) { return value; }))
            continue;
        const std::string visible = draw.source.substr(left - draw.x, end - left);
        const std::string complete = trim(draw.complete_source.empty() ? draw.source : draw.complete_source);
        if (draw.editable_text || draw.squad_alias_target ||
                draw.native_caller == g_native_stocks_filter_caller) {
            // Authored search text is preserved, with direct UTF-8 rendering
            // when needed. A word that equals a category stays authored.
            const size_t first = result.size();
            append_direct_utf8_matches(visible, draw.y, result);
            for (size_t i = first; i < result.size(); ++i) result[i].x += left;
            std::fill(used.begin() + left, used.begin() + end, true);
            continue;
        }
        TranslationResult translated;
        std::optional<std::string> target;
        if (category) {
            target = exact_literal_translation("Stocks category: " + lower(complete));
            if (!target) target = exact_literal_translation(complete);
            if (!target) target = translate_fortress_item_caption(complete);
        } else if (item_caption) {
            translated = translate_fortress_item_caption_display(complete);
            if (translated.usable()) target = translated.target;
            if (const auto wood = translate_wood_item_caption(
                    complete, group, wood_context, wood_context)) {
                target = *wood;
                translated = TranslationResult::translated(complete, *wood, "stocks-wood-caption");
            }
            if (!target) target = native_text_to_utf8(complete);
        } else {
            target = exact_literal_translation(complete);
            if (!target) {
                std::vector<int> colors;
                target = translate_help_paragraph(complete,
                    std::vector<int>(complete.size(), 7), colors, true);
            }
        }
        if (!target || target->empty() || target->find_first_of("\r\n") != std::string::npos) continue;
        Match match{left, draw.y, end - left, item_caption ? kFortressItemCaptionRule : -2,
            std::move(*target), visible};
        if (item_caption) {
            match.translation_result = std::make_shared<const TranslationResult>(std::move(translated));
            match.native_item_caption_source = complete;
            match.native_item_group_caption = group;
        }
        match.layout_foreground_rgb = draw.foreground_rgb;
        match.layout_x = left;
        match.layout_y = draw.y;
        match.layout_length = right - left;
        match.layout_clip_right = right;
        match.layout_left = true;
        result.push_back(std::move(match));
        std::fill(used.begin() + left, used.begin() + end, true);
    }
    return result;
}
