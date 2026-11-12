// The tone/tact modal is part of the native conversation renderer, but its
// prompt has no question mark and its options have no Keywords field. Own
// the actual addst fields instead of sending them through dialogue grammar.
// Both PE editions, all option/odds branches and the rating/title suppliers
// are retained in data/extracted/adventure-conversation-tone.
if (const auto tone_base = native_history_profile_base()) {
    const auto cancel_writer = native_ui_semantic_address(0x86b70f);
    const auto prompt_writer = native_ui_semantic_address(0x86b766);
    const auto intimidate_writer = native_ui_semantic_address(0x86b9ed);
    const auto intimidator_writer = native_ui_semantic_address(0x86ba97);
    const auto persuade_writer = native_ui_semantic_address(0x86be23);
    const auto persuader_writer = native_ui_semantic_address(0x86becd);
#ifdef _WIN32
    const auto intimidate_odds_first = native_ui_semantic_address(0x86bbf2);
    const auto intimidate_odds_last = native_ui_semantic_address(0x86bdcf);
    const auto persuade_odds_first = native_ui_semantic_address(0x86c028);
    const auto persuade_odds_last = native_ui_semantic_address(0x86c205);
#endif
    for (const auto *draws : {&portrait_draws, &portrait_top_draws}) {
        for (const auto &draw : *draws) {
            const auto caller = draw.native_caller;
            if (!caller) continue;
            const bool prompt = caller == prompt_writer;
            const bool cancel = caller == cancel_writer && draw.source == "Cancel";
            const bool action = caller == intimidate_writer || caller == persuade_writer;
            const bool skill = caller == intimidator_writer || caller == persuader_writer;
#ifdef _WIN32
            const bool odds =
                (intimidate_odds_first && intimidate_odds_last &&
                    caller >= intimidate_odds_first && caller <= intimidate_odds_last) ||
                (persuade_odds_first && persuade_odds_last &&
                    caller >= persuade_odds_first && caller <= persuade_odds_last);
#else
            const bool odds = native_conversation_tone_odds(caller);
#endif
            if ((!prompt && !cancel && !action && !skill && !odds) ||
                    draw.source.empty() || draw.x < 0 || draw.x >= gps_->dimx ||
                    draw.y < 0 || draw.y >= gps_->dimy ||
                    (only_y >= 0 && draw.y != only_y) ||
                    draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                    draw.draw_grid != (draw.top_layer ? gps_->screen_top : gps_->screen) ||
                    (screen_override && screen_override != draw.draw_grid) ||
                    draw.source.size() > static_cast<size_t>(gps_->dimx - draw.x)) continue;

            // The width-20 skill writer removes vowels when necessary. Its
            // captured original is authoritative even when it does not start
            // with the abbreviated visible text. Unshortened ratings have
            // only source, so they must take this same complete-field path.
            const auto complete = trim_view(draw.complete_source.empty()
                ? std::string_view(draw.source) : std::string_view(draw.complete_source));
            std::optional<std::string> target;
            if (skill) target = translate_rated_skill_phrase(complete);
            else if (prompt)
                target = exact_literal_translation("Conversation prompt: " + std::string(complete));
            else if (cancel) target = exact_literal_translation(complete);
            else target = exact_literal_translation("Conversation tone: " + std::string(complete));
            if (!target) continue;

            // Derive the modal allocation from this renderer's cursor offsets.
            // Header = center-28, action = center-20; the skill starts directly
            // after the action string, including its trailing space. Preserve each field,
            // the colored shortcut at center-22 and the original odds row.
            int center = draw.x + 20;
            if (prompt) center = draw.x + 28;
            else if (cancel) center = draw.x - 21;
            else if (skill) center = draw.x + 20 - static_cast<int>(
                (caller == intimidator_writer ? std::string_view("Intimidate: ") :
                    std::string_view("Persuade: ")).size());
            SDL_Rect bounds{center - 29, 0, 59, gps_->dimy - 5};
            int right = skill ? draw.x + 20 :
                action ? draw.x + static_cast<int>(draw.source.size()) :
                prompt ? center + 18 : cancel ? draw.x + 6 : center + 29;
            right = std::min({right, bounds.x + bounds.w, gps_->dimx});
            if (draw.draw_clip) {
                const auto &clip = *draw.draw_clip;
                if (draw.x < clip.x || draw.y < clip.y || draw.y >= clip.y + clip.h) continue;
                right = std::min(right, clip.x + clip.w);
                // A one-row addst clip limits cells, not font ascenders.
                // A taller native clip still constrains the modal viewport.
                if (clip.h > 1) {
                    bounds.y = std::max(bounds.y, clip.y);
                    bounds.h = std::min(gps_->dimy - 5, clip.y + clip.h) - bounds.y;
                }
            }
            if (right <= draw.x || bounds.h <= 0) continue;
            const int length = std::min(static_cast<int>(draw.source.size()), right - draw.x);
            bool intact = true;
            for (int offset = 0; offset < length; ++offset) {
                bool top = false;
                const auto *visible = cell_at(draw.x + offset, draw.y, &top);
                const auto *cell = draw.draw_grid +
                    (static_cast<size_t>(draw.x + offset) * gps_->dimy + draw.y) * 8;
                if (!visible || top != draw.top_layer ||
                        (cell[0] ? cell[0] : ' ') !=
                            static_cast<unsigned char>(draw.source[offset])) {
                    intact = false;
                    break;
                }
            }
            if (!intact) continue;
            Match row{draw.x, draw.y, length, kConversationToneRule, {},
                draw.source.substr(0, static_cast<size_t>(length))};
            row.layout_foreground_rgb = draw.foreground_rgb;
            const int tw = gps_->tile_pixel_x, th = gps_->tile_pixel_y;
            row.layout_native_clip = SDL_Rect{
                (gps_->screen_pixel_x - gps_->dimx * tw) / 2 + draw.x * tw,
                (gps_->screen_pixel_y - gps_->dimy * th) / 2 + bounds.y * th,
                (right - draw.x) * tw, bounds.h * th};
            const auto overlaps = [&](const Match &prior) {
                return prior.y == row.y && prior.x < row.x + row.length &&
                    row.x < prior.x + prior.length;
            };
            const size_t begin = result.size();
            if (!append_setup_paragraph({row}, *target, right, right)) continue;
            // Earlier readers can already have claimed a bare skill title.
            // Replace that interpretation only after the full field is placed.
            std::erase_if(untranslated_help_rows, overlaps);
            for (size_t at = begin; at-- > 0;)
                if (overlaps(result[at])) result.erase(result.begin() + at);
            std::fill_n(context[row.y].begin() + row.x, row.length, ' ');
        }
    }
}
