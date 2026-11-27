// The target list precedes the keyword chooser. Each visible shortcut has
// its own option, including while scrolling past two identical abbreviations.
for (const auto *draws : {&portrait_draws, &portrait_top_draws}) {
    for (const auto &draw : *draws) {
        const auto &caption = draw.talk_target;
        if (!caption || draw.x < 0 || draw.x >= gps_->dimx ||
                draw.y < 0 || draw.y >= gps_->dimy || (only_y >= 0 && only_y != draw.y) ||
                draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                draw.draw_grid != (draw.top_layer ? gps_->screen_top : gps_->screen) ||
                (screen_override && screen_override != draw.draw_grid) || draw.source.empty() ||
                draw.source.size() > static_cast<size_t>(gps_->dimx - draw.x)) continue;
        const int end = draw.x + static_cast<int>(draw.source.size());
        int right = std::min(gps_->dimx, draw.x + caption->width);
        if (draw.draw_clip) {
            const auto &clip = *draw.draw_clip;
            if (draw.x < clip.x || draw.y < clip.y || draw.y >= clip.y + clip.h) continue;
            right = std::min(right, clip.x + clip.w);
        }
        if (occluding_frame && draw.y >= occluding_frame->y &&
                draw.y < occluding_frame->y + occluding_frame->h &&
                draw.x < occluding_frame->x + occluding_frame->w)
            right = std::min(right, occluding_frame->x);
        if (end > right) continue;
        // Grid bytes establish overlay ownership only. All translation inputs
        // below were copied from the native option and its individual names.
        bool visible = true;
        for (int x = draw.x; x < end; ++x) {
            bool top = false;
            const auto *cell = cell_at(x, draw.y, &top);
            if (!cell || top != draw.top_layer ||
                    (cell[0] ? cell[0] : ' ') != static_cast<unsigned char>(draw.source[x - draw.x])) {
                visible = false;
                break;
            }
        }
        if (!visible) continue;

        const std::string_view original = caption->source;
        constexpr std::string_view start = "Start new conversation with ";
        constexpr std::string_view resume = "Continue conversation with ";
        std::optional<std::string> target;
        if (original.starts_with(start) || original.starts_with(resume)) {
            std::vector<std::string> names;
            for (const auto &person : caption->participants) {
                if (person.source.empty()) continue;
                std::optional<std::string> name;
                if (person.unit && person.unit->ready) name = person.unit->target;
                else if (person.unit) {
                    const auto binding = g_native_graphics_read_view && !DfhackTranslationThreadScope::active
                        ? prepare_native_unit_identity_source_binding(person.source,
                            person.string_owner, person.unit->semantic_key, &*person.unit)
                        : native_unit_identity_source_binding(person.source,
                            person.string_owner, person.unit->semantic_key);
                    if (binding && binding->ready) name = binding->target;
                }
                if (person.figure_name) name = translate_history_name(*person.figure_name, true);
                if (!name || name->empty()) name = translate_adventure_target_text(person.source, 'n');
                names.push_back(name && !name->empty() ? *name : native_text_to_utf8(person.source));
            }
            if (names.empty() && original == "Start new conversation with the Void")
                names.emplace_back("虚空");
            std::string people;
            for (size_t i = 0; i < names.size(); ++i) {
                if (i) people += i + 1 == names.size() ? "和" : "、";
                people += names[i];
            }
            // The game can omit every unresolved participant, leaving just
            // the head or a trailing separator. Only emitted names belong here.
            if (original.starts_with(start))
                target = people.empty() ? "开始新的交谈" : "与" + people + "开始新的交谈";
            else target = people.empty() ? "继续交谈" : "继续与" + people + "交谈";
        } else target = exact_literal_translation(original);
        if (!target || target->empty()) continue;

        const auto overlaps = [&](const Match &prior) {
            return prior.y == draw.y && prior.x < end && draw.x < prior.x + prior.length;
        };
        std::erase_if(result, overlaps);
        std::erase_if(untranslated_help_rows, overlaps);
        Match row{draw.x, draw.y, end - draw.x, kUiMessageRule, *target, draw.source};
        row.native_adventure_choice_row = true;
        row.layout_foreground_rgb = draw.foreground_rgb;
        row.layout_x = draw.x;
        row.layout_length = right - draw.x;
        row.layout_clip_right = right;
        row.layout_left = original != "Cancel";
        row.layout_ellipsize = true;
        result.push_back(std::move(row));
        std::fill_n(screen_rows[draw.y].begin() + draw.x, draw.source.size(), ' ');
        std::fill_n(context[draw.y].begin() + draw.x, draw.source.size(), ' ');
    }
}
