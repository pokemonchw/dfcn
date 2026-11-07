// The display assignment producer identifies each field by its actual native
// writer. Counts stay native; only names and the empty-count label are replaced.
std::vector<Match> Overlay::find_native_display_matches() const {
    std::vector<Match> result;
    if (!gps_ || !gps_->screen || !g_native_display_layer.ready) return result;
    const std::array draws{captured_native_drawn_text_view(), captured_native_drawn_text_view(true)};
    std::map<int, std::vector<bool>> occupied;
    const bool wood_context = g_native_display_current_type == 5;
    for (const auto &plane : draws) for (const auto &draw : plane) {
        if (draw.y < 0 || draw.y >= gps_->dimy || draw.x < 0 || draw.x >= gps_->dimx ||
                draw.source.empty() || draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                draw.draw_grid != (draw.top_layer ? gps_->screen_top : gps_->screen)) continue;
        const bool category = g_native_display_category_caller &&
            draw.native_caller == g_native_display_category_caller;
        const bool group = g_native_display_group_caller &&
            draw.native_caller == g_native_display_group_caller;
        const bool item = (g_native_display_item_caller && draw.native_caller == g_native_display_item_caller) ||
            draw.trade_item_caption.has_value();
        const bool empty_count = g_native_display_empty_count_caller &&
            draw.native_caller == g_native_display_empty_count_caller;
        const bool filter = (g_native_display_filter_caller &&
            draw.native_caller == g_native_display_filter_caller) || draw.editable_text;
        const bool ordinary_ui = !category && !group && !item && !empty_count && !filter;
        int left = draw.x;
        // An unclassified writer still belongs to this actual private page.
        // Its submitted span/clip can carry ordinary UI labels, but supplies
        // no category, item identity, column width or authored-name guess.
        int right = static_cast<int>(std::min<int64_t>(gps_->dimx,
            int64_t(draw.x) + draw.source.size()));
        if (category && g_native_display_category_right > 0)
            right = g_native_display_category_right - 8;
        else if (empty_count && g_native_display_category_right > 0)
            right = g_native_display_category_right;
        else if (!ordinary_ui && !category && !empty_count && g_native_display_content_right > 0)
            right = g_native_display_content_right - (item ? 5 : 0);
        right = std::min(right, gps_->dimx);
        if (draw.draw_clip) {
            if (draw.y < draw.draw_clip->y || draw.y >= draw.draw_clip->y + draw.draw_clip->h)
                continue;
            left = std::max(left, draw.draw_clip->x);
            right = std::min(right, draw.draw_clip->x + draw.draw_clip->w);
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
        if (ordinary_ui) right = end;
        auto &used = occupied.try_emplace(draw.y, gps_->dimx, false).first->second;
        if (std::any_of(used.begin() + left, used.begin() + end, [](bool value) { return value; }))
            continue;
        const std::string visible = draw.source.substr(left - draw.x, end - left);
        const std::string complete = trim(draw.complete_source.empty() ? draw.source : draw.complete_source);
        const auto bound_field = [&](Match &match) {
            match.layout_foreground_rgb = draw.foreground_rgb;
            match.layout_x = match.x;
            match.layout_y = draw.y;
            match.layout_length = right - match.x;
            match.layout_clip_right = right;
            match.layout_left = true;
            match.layout_ellipsize = true;
            if (draw.draw_clip) {
                const int tile_x = gps_->tile_pixel_x, tile_y = gps_->tile_pixel_y;
                const int origin_x = (gps_->screen_pixel_x - gps_->dimx * tile_x) / 2;
                const int origin_y = (gps_->screen_pixel_y - gps_->dimy * tile_y) / 2;
                match.layout_native_clip = SDL_Rect{
                    origin_x + draw.draw_clip->x * tile_x,
                    origin_y + draw.draw_clip->y * tile_y,
                    draw.draw_clip->w * tile_x, draw.draw_clip->h * tile_y};
            }
        };
        if (filter || draw.squad_alias_target) {
            // Search text is authored even when it spells a translated
            // category. Render only UTF-8 runs; leave native ASCII untouched.
            const size_t first = result.size();
            append_direct_utf8_matches(visible, draw.y, result);
            for (size_t i = first; i < result.size(); ++i) {
                result[i].x += left;
                bound_field(result[i]);
            }
            std::fill(used.begin() + left, used.begin() + end, true);
            continue;
        }
        TranslationResult translated;
        std::optional<std::string> target;
        if (category) {
            target = exact_literal_translation("Stocks category: " + lower(complete));
            if (!target) target = exact_literal_translation(complete);
            if (!target) target = translate_fortress_item_caption(complete);
        } else if (group || item) {
            translated = item && draw.trade_item_caption
                ? translate_native_trade_item_caption_display(*draw.trade_item_caption)
                : translate_fortress_item_caption_display(complete);
            if (translated.usable()) target = translated.target;
            if (const auto wood = translate_wood_item_caption(
                    complete, group, wood_context, wood_context)) {
                target = *wood;
                translated = TranslationResult::translated(complete, *wood, "display-wood-caption");
            }
            if (!target) target = native_text_to_utf8(complete);
        } else {
            target = exact_literal_translation(complete);
            if (!target && ordinary_ui) {
                std::vector<int> colors;
                target = translate_help_paragraph(complete,
                    std::vector<int>(complete.size(), 7), colors, true);
            }
        }
        if (!target || target->empty() || target->find_first_of("\r\n") != std::string::npos) continue;
        Match match{left, draw.y, end - left, group || item ? kFortressItemCaptionRule : -2,
            std::move(*target), visible};
        if (group || item) {
            match.translation_result = std::make_shared<const TranslationResult>(std::move(translated));
            match.native_item_caption_source = complete;
            match.native_item_group_caption = group;
        }
        bound_field(match);
        result.push_back(std::move(match));
        std::fill(used.begin() + left, used.begin() + end, true);
    }
    return result;
}
