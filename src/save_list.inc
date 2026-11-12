// The title menu's world/save records are multi-field buttons. English run
// lengths own suppression, not the translated columns or their alignment.
static constexpr std::array<std::string_view, 3> save_list_states = {
    "Active save", "Manual save", "Autosave"
};
static constexpr std::array<std::string_view, 3> save_list_actions = {
    "Files", "File", "Delete"
};

static bool is_save_list_state(std::string_view source) {
    return std::find(save_list_states.begin(), save_list_states.end(), source) !=
        save_list_states.end();
}

static bool is_save_list_action(std::string_view source) {
    return std::find(save_list_actions.begin(), save_list_actions.end(), source) !=
        save_list_actions.end();
}

// World and save-file deletion dialogs are framed documents, not world-list
// records or unrelated labels centered inside their old English ink spans.
// Detach only a complete current frame; the caller restores it after page
// layout. Translation, wrapping, metrics and native skins remain shared.
std::vector<Match> Overlay::layout_save_confirmation(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer || gps_->tile_pixel_x <= 0 ||
        gps_->tile_pixel_y <= 0) return {};
    auto &matches = prepared_matches_;
    const auto is_prompt = [](const Match &match) {
        return !match.native_split_duplicate &&
            (match.source.starts_with("Are you sure you want to delete") ||
             match.source.starts_with("Clicking delete will instantly delete this game!") ||
             match.source.starts_with("Clicking delete will instantly delete!"));
    };
    if (std::none_of(matches.begin(), matches.end(), is_prompt)) return {};
    normalize_native_split_text();
    const auto anchor = std::find_if(matches.begin(), matches.end(), is_prompt);
    if (anchor == matches.end()) return {};
    const bool saved_game = anchor->source.starts_with(
        "Clicking delete will instantly delete this game!");
    const bool file_dialog = anchor->source.starts_with("Clicking delete");
    const std::vector<std::string_view> messages = saved_game
        ? std::vector<std::string_view>{
            "Clicking delete will instantly delete this game!",
            "Don't click it unless you're sure you want to delete it.",
            "(no other folders will be deleted)"}
        : file_dialog
        ? std::vector<std::string_view>{
            "Clicking delete will instantly delete!",
            "Don't click it unless you're sure you want to delete it.",
            "(only this inactive copy will be deleted)"}
        : std::vector<std::string_view>{
            "Are you sure you want to delete this active world?",
            "All active/manual/autosaves there will be deleted!"};
    const NativePanelBorders borders(*gps_);
    const auto panel = native_panel_interior(borders, *gps_, anchor->x,
        anchor->x + anchor->length, anchor->y);
    if (!panel) return {};
    const int right = panel->x + panel->w, bottom = panel->y + panel->h;
    const auto inside = [&](const Match &match) {
        return match.x >= panel->x && match.x + match.length <= right &&
            match.y >= panel->y && match.y < bottom;
    };
    const int tile_w = gps_->tile_pixel_x, tile_h = gps_->tile_pixel_y;
    const int origin_x = (gps_->screen_pixel_x - gps_->dimx * tile_w) / 2;
    const auto source_top = [tile_h](const Match &match) {
        return match.native_split_text
            ? match.native_split_top_y * tile_h + tile_h / 2 : match.y * tile_h;
    };
    struct Button { size_t index; SDL_Rect box; };
    std::vector<Button> buttons;
    for (std::string_view label : {"Delete", "File", "Back"}) {
        if (!file_dialog && label == "File") continue;
        for (size_t i = 0; i < matches.size(); ++i) {
            const Match &match = matches[i];
            if (!inside(match) || match.source != label || match.target.empty() ||
                match.native_split_duplicate) continue;
            const auto box = native_intro_button_text_rect(*gps_, match.x,
                match.x + match.length, match.y);
            if (!box || box->x - 1 < panel->x || box->x + box->w >= right ||
                box->y <= anchor->y || box->y + box->h > bottom) continue;
            buttons.push_back({i, *box});
            break;
        }
    }
    if (buttons.size() != (file_dialog ? 3u : 2u)) return {};
    for (size_t i = 1; i < buttons.size(); ++i)
        if (buttons[i].box.y != buttons[0].box.y ||
            buttons[i - 1].box.x + buttons[i - 1].box.w >= buttons[i].box.x)
            return {};

    const int question_top = source_top(*anchor);
    const int actions_top = buttons.front().box.y * tile_h;
    std::vector<size_t> owned, title, body;
    std::vector<uint8_t> coverage(static_cast<size_t>(panel->w) * panel->h, 0);
    for (size_t i = 0; i < matches.size(); ++i) {
        const Match &match = matches[i];
        const bool overlaps = match.x < right && match.x + match.length > panel->x &&
            match.y >= panel->y && match.y < bottom;
        if (!overlaps) continue;
        // Native save headings can exceed the frame before translation. They
        // still belong to this dialog; retain the full source for suppression
        // and constrain the translated field to the panel below.
        const bool overflowing_title = match.x >= panel->x &&
            source_top(match) < question_top;
        if ((!inside(match) && !overflowing_title) ||
                match.native_help_source_only || match.legends_flow) return {};
        owned.push_back(i);
        for (int x = match.x; x < std::min(right, match.x + match.length); ++x)
            coverage[(match.y - panel->y) * panel->w + x - panel->x] = 1;
        if (match.native_split_duplicate) continue;
        if (std::any_of(buttons.begin(), buttons.end(),
                [i](const Button &button) { return button.index == i; })) continue;
        if (source_top(match) >= actions_top) return {};
        (source_top(match) < question_top ? title : body).push_back(i);
    }
    // In classic mode the proven button skins are CP437 characters. Their
    // borders belong to the native controls, while their middle-row text
    // still requires complete translation coverage.
    for (const Button &button : buttons) {
        const SDL_Rect &box = button.box;
        for (int y = box.y; y < box.y + box.h; ++y)
            for (int x = box.x - 1; x <= box.x + box.w; ++x)
                if (y == box.y || y == box.y + box.h - 1 ||
                    x == box.x - 1 || x == box.x + box.w)
                    coverage[(y - panel->y) * panel->w + x - panel->x] = 1;
    }
    // No unknown/covered title suffix may be left behind when laying it out.
    for (int y = panel->y; y < bottom; ++y)
        for (int x = panel->x; x < right; ++x) {
            const unsigned char ch = visible_char_at(x, y);
            if (ch && ch != ' ' && !coverage[(y - panel->y) * panel->w + x - panel->x])
                return {};
        }
    const auto order = [&](size_t a, size_t b) {
        const int ay = source_top(matches[a]), by = source_top(matches[b]);
        return ay != by ? ay < by : matches[a].x < matches[b].x;
    };
    std::sort(title.begin(), title.end(), order);
    std::sort(body.begin(), body.end(), order);
    if (title.empty() || body.empty()) return {};

    // Prove every COMPLETE message, including any native wrap continuations.
    // Their text and colors come from existing matches, never another glossary.
    std::vector<std::vector<size_t>> paragraphs(messages.size());
    size_t paragraph = 0;
    std::string source;
    for (size_t i : body) {
        if (paragraph == messages.size()) return {};
        source += compact_ui_message_literal(matches[i].source);
        const auto expected = compact_ui_message_literal(messages[paragraph]);
        if (!expected.starts_with(source)) return {};
        paragraphs[paragraph].push_back(i);
        if (source == expected) { ++paragraph; source.clear(); }
    }
    if (paragraph != messages.size() || !source.empty()) return {};
    const auto compose = [&](const std::vector<size_t> &parts, Match &field) {
        field = matches[parts.front()];
        field.target.clear();
        field.layout_glyph_foreground_rgb.clear();
        for (size_t i : parts) {
            const Match &part = matches[i];
            if (part.target.empty()) continue;
            bool top = false;
            const auto *cell = cell_at(part.x, part.y, &top);
            const int foreground = part.layout_foreground_rgb >= 0 ? part.layout_foreground_rgb :
                cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : 0xffffff;
            std::vector<uint32_t> cps;
            if (!decode_utf8(part.target, cps)) return false;
            auto colors = colored_match_foregrounds(part, foreground);
            if (colors.empty()) colors.assign(cps.size(), foreground);
            if (colors.size() != cps.size()) return false;
            if (!field.target.empty() &&
                ascii_word_byte(static_cast<unsigned char>(field.target.back())) &&
                ascii_word_byte(static_cast<unsigned char>(part.target.front()))) {
                field.target.push_back(' ');
                field.layout_glyph_foreground_rgb.push_back(foreground);
            }
            field.target += part.target;
            field.layout_glyph_foreground_rgb.insert(field.layout_glyph_foreground_rgb.end(),
                colors.begin(), colors.end());
        }
        return !field.target.empty();
    };
    // Save-file dialogs can have both a name/mode row and a colored date row.
    // Join fragments on each native baseline without folding the date into
    // the name or centering either row within its old English ink span.
    std::vector<std::vector<size_t>> title_lines;
    for (size_t i : title) {
        if (title_lines.empty() || (file_dialog &&
                source_top(matches[i]) != source_top(matches[title_lines.back().front()])))
            title_lines.emplace_back();
        title_lines.back().push_back(i);
    }
    std::vector<Match> headings(title_lines.size());
    std::vector<Match> prose(messages.size());
    for (size_t i = 0; i < title_lines.size(); ++i)
        if (!compose(title_lines[i], headings[i])) return {};
    for (size_t i = 0; i < paragraphs.size(); ++i)
        if (!compose(paragraphs[i], prose[i])) return {};

    int left = right;
    for (size_t i : body) left = std::min(left, matches[i].x);
    const int text_right = right - (left - panel->x);
    if (text_right <= left || question_top < source_top(headings.back()) + tile_h) return {};
    struct Field { size_t index; Match match; int left, width, top; bool centered; };
    std::vector<Field> fields;
    for (size_t i = 0; i < title_lines.size(); ++i) {
        const size_t first = title_lines[i].front();
        const int top = source_top(matches[first]);
        if (i > 0 && top < fields.back().top + tile_h) return {};
        fields.push_back({first, std::move(headings[i]), origin_x + left * tile_w,
            (text_right - left) * tile_w, top, !file_dialog});
    }
    for (const Button &button : buttons)
        fields.push_back({button.index, matches[button.index],
            origin_x + button.box.x * tile_w, button.box.w * tile_w,
            button.box.y * tile_h + (button.box.h - 1) * tile_h / 2, true});

    const int pixels = unified_font_pixels();
    if (file_dialog) {
        // These warnings are three independent native lines. Keep each
        // sentence's baseline and the title/date's shared left inset;
        // joining them as prose compresses the dialog and shifts its name.
        int previous_top = fields[title_lines.size() - 1].top;
        for (size_t i = 0; i < prose.size(); ++i) {
            const int top = source_top(matches[paragraphs[i].front()]);
            if (top < previous_top + tile_h || top + tile_h > actions_top) return {};
            fields.push_back({paragraphs[i].front(), std::move(prose[i]),
                origin_x + left * tile_w, (text_right - left) * tile_w, top, false});
            previous_top = top;
        }
    } else {
        // Keep the native heading and footer baselines. The space between them
        // belongs to the prose; reserve half a row before the buttons, and a
        // paragraph gap when the current frame has room. No resolution offsets.
        const int slots = (actions_top - tile_h / 2 - question_top) / tile_h;
        if (slots < 2) return {};
        const std::string separator = slots >= 3 ? "\n\n" : "\n";
        const std::string text = prose[0].target + separator + prose[1].target;
        std::vector<int> colors = prose[0].layout_glyph_foreground_rgb;
        colors.insert(colors.end(), separator.size(), colors.back());
        colors.insert(colors.end(), prose[1].layout_glyph_foreground_rgb.begin(),
            prose[1].layout_glyph_foreground_rgb.end());
        std::vector<Match> rows, fitted;
        for (int row = 0; row < slots; ++row)
            rows.push_back({left, question_top / tile_h + row, 0, kUiMessageRule, {}, {}});
        std::vector<std::string> scratch(static_cast<size_t>(gps_->dimy),
            std::string(static_cast<size_t>(gps_->dimx), ' '));
        if (!append_bounded_paragraph(std::move(rows), text, scratch, fitted, -1,
                text_right, text_right, colors, false, left, std::nullopt, {})) return {};
        for (Match &row : fitted) {
            if (row.target.empty()) continue;
            fields.push_back({matches.size(), std::move(row), origin_x + left * tile_w,
                (text_right - left) * tile_w, 0, false});
            Field &field = fields.back();
            field.top = field.match.layout_y * tile_h + question_top % tile_h;
        }
    }
    // The native dialog owns each field and baseline. Font ink may extend
    // beyond one row without invalidating its translation; prose already
    // wraps in the shared paragraph layout at the same UI font size.

    std::vector<Match> result;
    for (size_t i : owned) {
        Match match = matches[i];
        match.target.clear();
        match.layout_glyph_foreground_rgb.clear();
        result.push_back(std::move(match));
    }
    for (Field &field : fields) {
        Match &match = field.match;
        match.layout_x = (field.left - origin_x) / tile_w;
        match.layout_length = (field.width + tile_w - 1) / tile_w;
        match.layout_box_pixel_x = field.left;
        match.layout_box_pixel_width = field.width;
        match.layout_y = field.top / tile_h;
        match.layout_pixel_y = field.top % tile_h;
        match.layout_fixed_baseline = true;
        match.layout_left = !field.centered;
        match.layout_prepared = true;
        match.layout_line_height_pixels = tile_h;
        match.layout_clip_right = text_right;
        match.layout_ellipsize = std::find(title.begin(), title.end(), field.index) !=
            title.end();
        if (field.index == matches.size()) result.push_back(std::move(match));
        else result[static_cast<size_t>(std::find(owned.begin(), owned.end(), field.index) -
            owned.begin())] = std::move(match);
    }
    for (auto i = owned.rbegin(); i != owned.rend(); ++i)
        matches.erase(matches.begin() + *i);
    return result;
}

void Overlay::append_save_list_captions(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y) const {
    if (!gps_) return;
    const auto settings = native_ui_settings();
    if (!settings) return;
    const auto claim = [&](int x, int y, std::string_view source, std::string target) {
        if (target.empty()) return;
        if (only_y < 0 || only_y == y)
            matches.push_back({x, y, static_cast<int>(source.size()),
                kSaveListCaptionRule, std::move(target), std::string(source)});
        std::fill_n(rows[y].begin() + x, source.size(), ' ');
    };
    // The native title renderer passes savegame_header.fort_name directly
    // to addst. Its field address identifies this saved name independently
    // of folder text, list order and equal names in another world.
    for (const bool top_layer : {false, true}) {
        const auto draws = captured_native_drawn_text_view(top_layer);
        for (const auto &draw : draws) {
            if (!draw.address || draw.source.empty() || draw.y < 0 ||
                    draw.y >= gps_->dimy || draw.draw_dimx != gps_->dimx ||
                    draw.draw_dimy != gps_->dimy ||
                    draw.draw_grid != (top_layer ? gps_->screen_top : gps_->screen)) continue;
            int left = std::max(0, draw.x);
            int right = static_cast<int>(std::min<int64_t>(gps_->dimx,
                static_cast<int64_t>(draw.x) + static_cast<int64_t>(draw.source.size())));
            if (draw.draw_clip) {
                const auto &clip = *draw.draw_clip;
                if (draw.y < clip.y || draw.y >= clip.y + clip.h) continue;
                left = std::max(left, clip.x);
                right = std::min(right, clip.x + clip.w);
            }
            if (left >= right) continue;
            const auto visible = std::string_view(draw.source).substr(
                static_cast<size_t>(left - draw.x), static_cast<size_t>(right - left));
            const auto complete = draw.complete_source.empty()
                ? std::string_view(draw.source) : std::string_view(draw.complete_source);
            const auto saved = capture_native_save_name_source(draw.address, complete);
            if (!saved) continue;
            // The title renderer does not clip long names to the card. It
            // paints the right-aligned state later, over the name's middle.
            // Recover only this address-proven name and that independent
            // draw; matching a state spelling inside a name is insufficient.
            const auto recover_card_name = [&]() {
                if (saved->authored || left != draw.x ||
                        !std::string_view(saved->original).starts_with(draw.source)) return false;
                for (const auto &state : draws) {
                    if (!is_save_list_state(state.source) || state.y != draw.y ||
                            state.x <= left || state.x >= gps_->dimx ||
                            state.draw_grid != draw.draw_grid ||
                            state.draw_dimx != draw.draw_dimx || state.draw_dimy != draw.draw_dimy ||
                            state.draw_epoch != draw.draw_epoch || state.sequence <= draw.sequence ||
                            state.source.size() > static_cast<size_t>(gps_->dimx - state.x)) continue;
                    const int state_end = state.x + static_cast<int>(state.source.size());
                    if (state.draw_clip && (state.x < state.draw_clip->x ||
                            state.y < state.draw_clip->y ||
                            state_end > int64_t(state.draw_clip->x) + state.draw_clip->w ||
                            state.y >= int64_t(state.draw_clip->y) + state.draw_clip->h)) continue;
                    if (std::string_view(rows[state.y]).substr(state.x, state.source.size()) !=
                            state.source) continue;
                    const auto box = native_button_text_rect(*gps_, state.x, state_end, state.y, true);
                    if (!box || left < box->x || left >= box->x + box->w) continue;
                    const auto state_target = exact_literal_translation(state.source);
                    auto target = translate_saved_name(*saved);
                    if (!state_target || state_target->empty() || !target || target->empty()) continue;
                    std::string source = draw.source;
                    // fort_name is followed by the mode without relocating
                    // the native cursor. Include its visible suffix in the
                    // same source ownership even when it is outside the card.
                    std::string_view mode;
                    switch (saved->game_type) {
                    case 0: case 8: mode = "Fortress"; break;
                    case 1: mode = "Adventurer"; break;
                    case 3: mode = "Reclaim Fortress"; break;
                    case 10: mode = "Fortress Testing"; break;
                    }
                    if (source == saved->original && !mode.empty()) {
                        const auto translated = legends_terms_.find("Save list mode: " + std::string(mode));
                        if (translated == legends_terms_.end() || translated->second.empty()) continue;
                        source += ", " + std::string(mode);
                        *target += "，" + translated->second;
                    }
                    int source_end = static_cast<int>(std::min<int64_t>(gps_->dimx,
                        int64_t(left) + static_cast<int64_t>(source.size())));
                    if (draw.draw_clip) source_end = std::min(source_end,
                        draw.draw_clip->x + draw.draw_clip->w);
                    bool intact = true;
                    for (int x = left; x < source_end; ++x) {
                        if (x >= state.x && x < state_end) continue;
                        bool layer = false;
                        const auto *cell = cell_at(x, draw.y, &layer);
                        const auto expected = static_cast<unsigned char>(source[x - left]);
                        if (!cell || layer != top_layer ||
                                (cell[0] ? cell[0] : ' ') != expected ||
                                static_cast<unsigned char>(rows[draw.y][x]) != expected) {
                            intact = false;
                            break;
                        }
                    }
                    const int first_end = std::min(source_end, state.x);
                    if (!intact || first_end <= left) continue;
                    const auto expose = [&](int first, int last, std::string text, bool tail) {
                        if (first >= last) return;
                        const std::string ink = source.substr(first - left, last - first);
                        std::fill_n(rows[draw.y].begin() + first, last - first, ' ');
                        if (only_y >= 0 && only_y != draw.y) return;
                        Match span{first, draw.y, last - first, kSaveListCaptionRule,
                            std::move(text), ink};
                        span.layout_foreground_rgb = draw.foreground_rgb;
                        span.native_save_card = *box;
                        // The suffix clears only surviving native ink. It
                        // must never become another translated field/column.
                        span.native_split_duplicate = tail;
                        matches.push_back(std::move(span));
                    };
                    expose(left, first_end, std::move(*target), false);
                    expose(std::max(left, state_end), source_end, {}, true);
                    claim(state.x, state.y, state.source, *state_target);
                    if (only_y < 0 || only_y == state.y)
                        matches.back().layout_foreground_rgb = state.foreground_rgb;
                    return true;
                }
                return false;
            };
            if (recover_card_name()) continue;
            if (std::string_view(rows[draw.y]).substr(left, visible.size()) != visible) continue;
            if (auto target = translate_saved_name(*saved)) {
                std::string source(visible);
                // The title renderer draws fort_name, ", ", then its native
                // game mode consecutively, without relocating the cursor.
                // Own that whole title so the separator cannot survive as
                // unclaimed ink or prevent the card's shared field layout.
                const std::string_view mode = [&]() -> std::string_view {
                    switch (saved->game_type) {
                    case 0: case 8: return "Fortress";
                    case 1: return "Adventurer";
                    case 3: return "Reclaim Fortress";
                    case 10: return "Fortress Testing";
                    default: return {};
                    }
                }();
                if (!saved->authored && !mode.empty() && left == draw.x &&
                        visible == saved->original) {
                    const std::string suffix = ", " + std::string(mode);
                    const int64_t end = static_cast<int64_t>(right) +
                        static_cast<int64_t>(suffix.size());
                    const auto translated_mode = legends_terms_.find(
                        "Save list mode: " + std::string(mode));
                    if (end <= gps_->dimx &&
                            (!draw.draw_clip || end <=
                                static_cast<int64_t>(draw.draw_clip->x) + draw.draw_clip->w) &&
                            translated_mode != legends_terms_.end() &&
                            !translated_mode->second.empty() &&
                            std::string_view(rows[draw.y]).substr(right, suffix.size()) == suffix) {
                        source += suffix;
                        *target += "，" + translated_mode->second;
                    }
                }
                claim(left, draw.y, source, std::move(*target));
                if ((only_y < 0 || only_y == draw.y) && !matches.empty())
                    matches.back().layout_foreground_rgb = draw.foreground_rgb;
            }
        }
    }
    constexpr std::string_view folder_prefix = "Folder: ";
    constexpr std::string_view timeline_prefix = "Timeline: ";
    constexpr std::string_view portable_caption = "Portable";
    // This literal includes its trailing space in the dictionary key. The
    // value supplies the complete translated label, including punctuation.
    const auto folder_label = capture_translations_.find(std::string(folder_prefix));
    const auto timeline_label = capture_translations_.find(std::string(timeline_prefix));
    const auto portable_label = legends_terms_.find("Save list status: Portable");
    const auto translate_timeline = [&](std::string_view source) -> std::optional<std::string> {
        if (!source.starts_with(timeline_prefix) || source.size() <= timeline_prefix.size() ||
            timeline_label == capture_translations_.end() || timeline_label->second.empty())
            return std::nullopt;
        // Timeline names are author-supplied identifiers, just like folder
        // names. Claim the complete field before ordinary word/name rules,
        // retaining internal spaces, digits, punctuation and the native color.
        return timeline_label->second + native_text_to_utf8(source.substr(timeline_prefix.size()));
    };
    const auto translate_date = [&](std::string_view source) -> std::optional<std::string> {
        if (source.empty() || source.front() < '0' || source.front() > '9')
            return std::nullopt;
        for (int index : candidate_template_rules(source)) {
            const Rule &rule = rules_[static_cast<size_t>(index)];
            // Reuse generated day/month/season/year rules. Only a complete
            // calendar date can introduce an opaque, author-supplied name.
            if (rule.template_kinds.size() != 2 || rule.template_kinds[0] != 'd' ||
                rule.template_kinds[1] != 'd' || rule.template_literals.size() != 3 ||
                !rule.template_literals.front().empty() ||
                !rule.template_literals.back().empty()) continue;
            const std::string &middle = rule.template_literals[1];
            if (!(middle.starts_with("st ") || middle.starts_with("nd ") ||
                  middle.starts_with("rd ") || middle.starts_with("th ")) ||
                middle.find(", ") == middle.rfind(", ")) continue;
            size_t end = 0;
            std::vector<std::string> captures;
            if (!match_template(rule, source, 0, &end, &captures)) continue;
            const auto tail = source.substr(end);
            if (!tail.empty() && !tail.starts_with(", ")) continue;
            std::string target = translate_template_captures(rule, captures);
            if (target.empty()) continue;
            if (!tail.empty()) target += "，" + native_text_to_utf8(tail.substr(2));
            return target;
        }
        return std::nullopt;
    };
    const auto card_text = [&](std::string_view row, int y, const SDL_Rect &box,
            const std::array<int32_t, 9> &skin, int right) {
        auto source = row.substr(box.x, right - box.x);
        const auto padding_at = [&](int x) {
            return row[x] == ' ' ||
                (settings->classic && (y == box.y || y == box.y + box.h - 1) &&
                 is_cp437_box_separator(row, x) &&
                 native_ui_skin_at(*gps_, x, y, skin[y == box.y ? 1 : 7], true));
        };
        while (!source.empty() && padding_at(static_cast<int>(source.data() - row.data())))
            source.remove_prefix(1);
        while (!source.empty() &&
                padding_at(static_cast<int>(source.data() - row.data() + source.size() - 1)))
            source.remove_suffix(1);
        return source;
    };
    // Use the composed grid only to establish the current card's boundary.
    // Immediate suppression can scan one layer while Folder lives on the
    // other. Actual source claims below always come from the caller's rows.
    struct CaptionCard {
        SDL_Rect box;
        std::array<int32_t, 9> skin;
        int folder_x, folder_y;
    };
    std::vector<CaptionCard> cards;
    for (int y = 0; y < gps_->dimy; ++y) {
        std::string context(static_cast<size_t>(gps_->dimx), ' ');
        for (int x = 0; x < gps_->dimx; ++x) {
            const unsigned char ch = visible_char_at(x, y);
            if (ch) context[x] = static_cast<char>(ch);
        }
        for (size_t at = context.find(folder_prefix); at != std::string::npos;
                at = context.find(folder_prefix, at + folder_prefix.size())) {
            std::array<int32_t, 9> skin{};
            const auto box = native_button_text_rect(*gps_, static_cast<int>(at),
                static_cast<int>(at + folder_prefix.size()), y, true, &skin);
            if (!box) continue;
            const auto left_source = card_text(context, y, *box, skin, static_cast<int>(at));
            int portable_x = -1;
            if (left_source.ends_with(portable_caption)) {
                const size_t status_at = left_source.size() - portable_caption.size();
                const auto date_source = trim_view(left_source.substr(0, status_at));
                const int left_x = static_cast<int>(left_source.data() - context.data());
                const int status_x = left_x + static_cast<int>(status_at);
                bool date_top = false, status_top = false;
                const auto *date_cell = cell_at(left_x, y, &date_top);
                const auto *status_cell = cell_at(status_x, y, &status_top);
                const bool separate_color = date_cell && status_cell &&
                    !std::equal(date_cell + 1, date_cell + 4, status_cell + 1);
                // Portable is the world-card status before Folder, not a
                // generated name or part of the date's optional identifier.
                // Native padding normally separates it; distinct field
                // colors still prove the boundary with a one-cell gap.
                if (status_at == 0 ||
                    (left_source[status_at - 1] == ' ' && translate_date(date_source) &&
                     ((status_at >= 2 && left_source[status_at - 2] == ' ') || separate_color)))
                    portable_x = status_x;
            }
            // A long date/name or timeline can run into the right-aligned
            // Folder label. The closed card and complete left field prove
            // the split even when the native drawing left no word boundary.
            if (!has_word_boundaries(context, at, at + folder_prefix.size() - 1) &&
                portable_x < 0 && !translate_date(left_source) && !translate_timeline(left_source))
                continue;
            // Folder is the last field on this native card row. Its value is
            // an opaque filesystem identifier, not words to translate or a
            // save state. Own the entire span, including spaces and digits,
            // before generic matching can split e.g. a renamed autosave.
            // Read the boundary from the composed grid, but claim only bytes
            // still intact in this caller's layer; never swallow another
            // parser's field or borrow hidden text during suppression.
            std::string_view source = std::string_view(context).substr(
                at, static_cast<size_t>(box->x + box->w) - at);
            while (!source.empty()) {
                const int x = static_cast<int>(at + source.size() - 1);
                if (source.back() != ' ' &&
                    !(settings->classic && (y == box->y || y == box->y + box->h - 1) &&
                      is_cp437_box_separator(context, x) &&
                      native_ui_skin_at(*gps_, x, y, skin[y == box->y ? 1 : 7], true))) break;
                source.remove_suffix(1);
            }
            if (source.size() > folder_prefix.size() &&
                folder_label != capture_translations_.end() && !folder_label->second.empty() &&
                std::string_view(rows[y]).substr(at, source.size()) == source) {
                claim(static_cast<int>(at), y, source, folder_label->second +
                    native_text_to_utf8(source.substr(folder_prefix.size())));
            }
            // Claim each native half before deduplicating the card itself.
            // The other half must not fall back to proper-name translation.
            if (portable_x >= 0 && portable_label != legends_terms_.end() &&
                std::string_view(rows[y]).substr(portable_x,
                    portable_caption.size()) == portable_caption)
                claim(portable_x, y, portable_caption, portable_label->second);
            const auto existing = std::find_if(cards.begin(), cards.end(), [&](const CaptionCard &entry) {
                    const SDL_Rect &other = entry.box;
                    return other.x == box->x && other.y == box->y &&
                        other.w == box->w && other.h == box->h;
                });
            if (existing != cards.end()) {
                if (existing->folder_y < 0) {
                    existing->folder_x = static_cast<int>(at);
                    existing->folder_y = y;
                }
                continue;
            }
            cards.push_back({*box, skin, static_cast<int>(at), y});
        }
        // Timeline-bearing world cards can omit Folder entirely. Its own
        // complete field and closed native skin establish the same record;
        // waiting for Folder leaves the authored value in the native font
        // and prevents the whole card from sharing the list's alignment.
        for (size_t at = context.find(timeline_prefix); at != std::string::npos;
                at = context.find(timeline_prefix, at + timeline_prefix.size())) {
            std::array<int32_t, 9> skin{};
            const auto box = native_button_text_rect(*gps_, static_cast<int>(at),
                static_cast<int>(at + timeline_prefix.size()), y, true, &skin);
            if (!box) continue;
            const int right = box->x + box->w;
            const size_t folder_at = context.find(folder_prefix, at + timeline_prefix.size());
            const int text_right = folder_at != std::string::npos && folder_at < static_cast<size_t>(right)
                ? static_cast<int>(folder_at) : right;
            const auto source = card_text(context, y, *box, skin, text_right);
            if (source.data() != context.data() + at) continue;
            const auto target = translate_timeline(source);
            if (!target || std::string_view(rows[y]).substr(at, source.size()) != source) continue;
            claim(static_cast<int>(at), y, source, *target);
            if (std::none_of(cards.begin(), cards.end(), [&](const CaptionCard &entry) {
                    const SDL_Rect &other = entry.box;
                    return other.x == box->x && other.y == box->y &&
                        other.w == box->w && other.h == box->h;
                }))
                cards.push_back({*box, skin, -1, -1});
        }
    }
    for (const CaptionCard &entry : cards) {
        const SDL_Rect &card = entry.box;
        bool save_record = std::any_of(matches.begin(), matches.end(), [&](const Match &match) {
            return is_save_list_state(match.source) && match.x >= card.x &&
                match.x + match.length <= card.x + card.w &&
                match.y >= card.y && match.y < card.y + card.h;
        });
        for (int y = card.y; y < card.y + card.h; ++y) {
            const int right = y == entry.folder_y ? entry.folder_x : card.x + card.w;
            const auto source = card_text(rows[y], y, card, entry.skin, right);
            if (const auto target = translate_timeline(source)) {
                // This complete left field shares the existing card's row,
                // insets and font fit with its World, count and Folder fields.
                // Leaving its value as native text would reject the whole
                // record's layout and center World in its old English span.
                claim(static_cast<int>(source.data() - rows[y].data()), y, source, *target);
                continue;
            }
            if (const auto target = translate_date(source)) {
                claim(static_cast<int>(source.data() - rows[y].data()), y, source, *target);
                continue;
            }
            for (std::string_view state : save_list_states) {
                if (!source.ends_with(state)) continue;
                const size_t at = source.size() - state.size();
                if (at > 0 && source[at - 1] != ' ') continue;
                // The state is a final, independent field, outside the quoted
                // name. This also works when native padding is only one cell.
                const int x = static_cast<int>(source.data() - rows[y].data() + at);
                if (const auto target = exact_literal_translation(state))
                    claim(x, y, state, *target);
                save_record = true;
                break;
            }
        }
        if (!save_record) continue;
        for (int y = card.y; y < card.y + card.h; ++y) {
            for (std::string_view action : save_list_actions) {
                for (size_t at = rows[y].find(action); at != std::string::npos;
                        at = rows[y].find(action, at + action.size())) {
                    if (!has_word_boundaries(rows[y], at, at + action.size())) continue;
                    const auto box = native_button_text_rect(*gps_, static_cast<int>(at),
                        static_cast<int>(at + action.size()), y);
                    if (!box || box->y != card.y || box->h != card.h ||
                        box->x + box->w >= card.x ||
                        trim_view(std::string_view(rows[y]).substr(box->x, box->w)) != action)
                        continue;
                    if (const auto target = exact_literal_translation(action))
                        claim(static_cast<int>(at), y, action, *target);
                }
            }
        }
    }
}

bool Overlay::layout_save_list(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer || gps_->tile_pixel_x <= 0 ||
        gps_->tile_pixel_y <= 0) return false;
    const auto settings = native_ui_settings();
    if (!settings) return false;
    auto &matches = prepared_matches_;
    const int tile_w = gps_->tile_pixel_x, tile_h = gps_->tile_pixel_y;
    const int origin_x = (gps_->screen_pixel_x - gps_->dimx * tile_w) / 2;
    const int origin_y = (gps_->screen_pixel_y - gps_->dimy * tile_h) / 2;
    const auto row_key = [](const Match &match) {
        return match.native_split_text ? 2 * match.native_split_top_y + 1 : 2 * match.y;
    };
    struct Field {
        std::vector<size_t> parts;
        std::string text;
        std::vector<int> colors;
        int left, right, row, y, offset = 0, width = 0;
        bool centered = false, right_aligned = false, fixed_baseline = false;
        int line_height = 0;
        std::optional<SDL_Rect> native_clip{};
    };
    std::vector<Field> fields;
    int header_y = -1;
    for (std::string_view label : {"World name", "Folder", "Last played"}) {
        bool found = false;
        for (size_t i = 0; i < matches.size(); ++i) {
            const Match &match = matches[i];
            if (match.source != label || match.target.empty() || match.native_split_duplicate)
                continue;
            const int y = match.native_split_text ? match.native_split_top_y : match.y;
            if (header_y >= 0 && header_y != y) continue;
            const auto span = native_sort_caption_span(*gps_, match.x,
                match.x + match.length, y, *settings);
            if (!span) continue;
            fields.push_back({{i}, {}, {}, origin_x + span->first * tile_w,
                origin_x + span->second * tile_w, row_key(match), match.y,
                0, 0, true});
            fields.back().native_clip = SDL_Rect{origin_x + span->first * tile_w,
                origin_y + y * tile_h, (span->second - span->first) * tile_w,
                (match.native_split_text ? 2 : 1) * tile_h};
            header_y = y;
            found = true;
            break;
        }
        // The world list has this sort group; its save-details page does not.
        // A partial group must not become a header on an unrelated page.
        if (!found) {
            fields.clear();
            header_y = -1;
            break;
        }
    }

    struct Card {
        SDL_Rect box;
        std::vector<size_t> fields;
        std::optional<NativeBorderRepair> border;
    };
    std::vector<Card> cards;
    for (size_t anchor = 0; anchor < matches.size(); ++anchor) {
        const Match &identity = matches[anchor];
        // Compact world cards contain only World and the save count. Folder
        // belongs to expanded records, not to the identity of every card.
        // Both shapes must enter this same field/measurement pipeline.
        if ((!identity.source.starts_with("Folder: ") &&
                !(header_y >= 0 && identity.source.starts_with("World: "))) ||
            identity.target.empty() || identity.native_split_duplicate ||
            identity.y <= header_y) continue;
        std::array<int32_t, 9> skin{};
        const auto box = native_button_text_rect(*gps_, identity.x,
            identity.x + identity.length, identity.y, true, &skin);
        if (!box || std::any_of(cards.begin(), cards.end(), [&](const Card &card) {
                return card.box.x == box->x && card.box.y == box->y &&
                    card.box.w == box->w && card.box.h == box->h;
            })) continue;
        const int right = box->x + box->w;
        std::vector<uint8_t> covered(static_cast<size_t>(box->w) * box->h, 0);
        std::map<int, std::vector<size_t>> rows;
        bool complete = true;
        size_t folder = matches.size(), summary = matches.size(), world = matches.size();
        size_t portable = matches.size(), timeline = matches.size();
        bool save_record = false;
        for (size_t i = 0; i < matches.size(); ++i) {
            const Match &part = matches[i];
            if (part.native_save_card && part.native_split_duplicate) {
                const SDL_Rect &owner = *part.native_save_card;
                if (owner.x != box->x || owner.y != box->y ||
                        owner.w != box->w || owner.h != box->h) continue;
                // A recovered name's tail can cross the card boundary.
                // Cover its in-card ink, retaining the full span solely for
                // suppression; it is not part of the right-hand status.
                if (part.y >= box->y && part.y < box->y + box->h)
                    for (int x = std::max(box->x, part.x);
                            x < std::min(right, part.x + part.length); ++x)
                        covered[(part.y - box->y) * box->w + x - box->x] = 1;
                continue;
            }
            if (part.y < box->y || part.y >= box->y + box->h ||
                part.x >= right || part.x + part.length <= box->x) continue;
            if (part.x < box->x || part.x + part.length > right ||
                part.legends_flow || part.native_help_source_only ||
                (part.target.empty() && !part.native_split_duplicate)) {
                complete = false;
                break;
            }
            for (int x = part.x; x < part.x + part.length; ++x)
                covered[(part.y - box->y) * box->w + x - box->x] = 1;
            if (part.native_split_duplicate) continue;
            rows[row_key(part)].push_back(i);
            if (part.source.starts_with("Folder: ")) {
                if (folder != matches.size()) complete = false;
                folder = i;
            } else if (part.source.starts_with("World: ")) {
                if (world != matches.size()) complete = false;
                world = i;
            } else if (part.rule == kSaveListCaptionRule && part.source.starts_with("Timeline: ")) {
                if (timeline != matches.size()) complete = false;
                timeline = i;
            } else if (part.source == "Portable") {
                if (portable != matches.size()) complete = false;
                portable = i;
            } else if (is_save_list_state(part.source) || part.source.ends_with(" save") ||
                    part.source.ends_with(" saves") || part.source.ends_with(" fort") ||
                    part.source.ends_with(" forts") || part.source.ends_with(" adventurer") ||
                    part.source.ends_with(" adventurers")) {
                // Both pages put a summary at the right: a world save count
                // or fortress/adventurer counts, or the individual save's state.
                if (summary != matches.size()) complete = false;
                summary = i;
                save_record = is_save_list_state(part.source);
            }
        }
        // Never move a partly translated record over native text, a popup,
        // or a separate field for which this card has no layout ownership.
        for (int y = box->y; complete && y < box->y + box->h; ++y)
            for (int x = box->x; x < right; ++x) {
                const unsigned char ch = visible_char_at(x, y);
                // Classic edge glyphs are skin, not untranslated content.
                // They stay outside all text/suppression spans, including
                // the surviving pieces between the lower-row captions.
                if (settings->classic && (y == box->y || y == box->y + box->h - 1) &&
                    native_ui_skin_at(*gps_, x, y, skin[y == box->y ? 1 : 7], true)) continue;
                if (ch && ch != ' ' && !covered[(y - box->y) * box->w + x - box->x]) {
                    complete = false;
                    break;
                }
            }
        if (!complete || rows.empty() || rows.size() > 3 ||
            (folder != matches.size() &&
                row_key(matches[folder]) != rows.rbegin()->first)) continue;
        // Portable is a separate status immediately before Folder, not part
        // of the date or a generated name. It shares the right-hand field's
        // measured width while retaining its own native foreground color.
        if (portable != matches.size() &&
            (folder == matches.size() ||
             row_key(matches[portable]) != row_key(matches[folder]) ||
             matches[portable].x + matches[portable].length > matches[folder].x)) continue;
        if (save_record) {
            // A closed save card and its separate Files/Delete action identify
            // the details page without relying on the selected world's title.
            if (folder == matches.size() || rows.size() < 2 || world != matches.size() ||
                row_key(matches[summary]) != rows.begin()->first ||
                !std::any_of(matches.begin(), matches.end(), [&](const Match &action) {
                    if (!is_save_list_action(action.source) || action.native_split_duplicate)
                        return false;
                    const auto action_box = native_button_text_rect(*gps_, action.x,
                        action.x + action.length, action.y);
                    return action_box && action_box->y == box->y && action_box->h == box->h &&
                        action_box->x + action_box->w < box->x;
                })) continue;
        } else if (header_y < 0 || world == matches.size() ||
                (rows.size() > 1 && folder == matches.size() &&
                    (timeline == matches.size() || summary == matches.size())) ||
                row_key(matches[world]) != rows.begin()->first ||
                (timeline != matches.size() &&
                    row_key(matches[timeline]) <= row_key(matches[world])) ||
                (summary != matches.size() &&
                    (row_key(matches[summary]) != row_key(matches[world]) ||
                     matches[summary].x < matches[world].x + matches[world].length))) {
            continue;
        }

        std::vector<Field> card_fields;
        const int left_pixel = origin_x + box->x * tile_w;
        const int right_pixel = origin_x + right * tile_w;
        int content_left = right, content_right = box->x;
        for (auto &[row, parts] : rows) {
            std::sort(parts.begin(), parts.end(), [&](size_t a, size_t b) {
                return matches[a].x < matches[b].x;
            });
            std::vector<size_t> left_parts, right_parts;
            bool at_right = false;
            int end = -1;
            for (size_t i : parts) {
                if (i == folder || i == summary || i == portable) {
                    if ((at_right && !(i == folder && !right_parts.empty() &&
                            right_parts.front() == portable)) ||
                        (end >= 0 && matches[i].x < end)) complete = false;
                    at_right = true;
                    end = -1;
                }
                // Only the recognized status and Folder may cross a native
                // field gap; unknown columns still cannot join a name/date.
                if (end >= 0 && (matches[i].x < end || matches[i].x > end + 1)) complete = false;
                (at_right ? right_parts : left_parts).push_back(i);
                end = matches[i].x + matches[i].length;
            }
            if (save_record && left_parts.empty()) complete = false;
            if (!left_parts.empty())
                content_left = std::min(content_left, matches[left_parts.front()].x);
            if (!right_parts.empty()) {
                const Match &last = matches[right_parts.back()];
                content_right = std::max(content_right, last.x + last.length);
            }
            // Native World/count and Folder lines have separate baselines.
            // Keep their full- or half-font row anchors; the three-row skin
            // is not a request to redistribute the captions across its height.
            const int y = row / 2;
            const int offset = (row % 2) * tile_h / 2;
            const int divider = !left_parts.empty() && !right_parts.empty()
                ? origin_x + matches[right_parts.front()].x * tile_w : -1;
            if (!left_parts.empty())
                card_fields.push_back({std::move(left_parts), {}, {}, left_pixel,
                    divider >= 0 ? divider : right_pixel, row, y, offset, 0, false, false, true});
            if (!right_parts.empty())
                card_fields.push_back({std::move(right_parts), {}, {},
                    divider >= 0 ? divider : left_pixel,
                    right_pixel, row, y, offset, 0, false, true, true});
        }
        if (!complete || content_left >= right) continue;
        // Preserve native content insets, not just the skin's inner caps.
        // Mirror the native left content inset at the right side of the
        // closed card; a changing folder/name suffix is not a field edge.
        content_right = right - (content_left - box->x);
        if (content_right <= content_left) continue;
        Card card{*box, {}, std::nullopt};
        if (settings->classic) {
            // Native full-font second rows replaced the CP437 lower edge.
            // Repair only the proven card, using this frame's native glyph
            // and palette, not a hand-drawn line or a replacement hitbox.
            NativeBorderRepair repair;
            repair.cells = {box->x, box->y + box->h - 1, box->w, 1};
            repair.cell[0] = static_cast<unsigned char>(skin[7] & 0xff);
            const int foreground = ((skin[7] >> 8) & 7) + ((skin[7] & 0x4000) ? 8 : 0);
            const int background = (skin[7] >> 11) & 7;
            std::copy_n(gps_->uccolor[foreground], 3, repair.cell.begin() + 1);
            std::copy_n(gps_->uccolor[background], 3, repair.cell.begin() + 4);
            card.border = repair;
        }
        for (Field &field : card_fields) {
            field.left = std::max(field.left, origin_x + content_left * tile_w);
            field.right = std::min(field.right, origin_x + content_right * tile_w);
            if (field.right <= field.left) { complete = false; break; }
        }
        if (!complete) continue;
        for (Field &field : card_fields) {
            card.fields.push_back(fields.size());
            fields.push_back(std::move(field));
        }
        cards.push_back(std::move(card));
    }
    if (fields.empty()) return false;

    // Files and Delete actions have their own buttons and click targets.
    for (size_t i = 0; i < matches.size(); ++i) {
        const Match &match = matches[i];
        if (!is_save_list_action(match.source) ||
            match.target.empty() || match.native_split_duplicate) continue;
        const auto box = native_button_text_rect(*gps_, match.x, match.x + match.length, match.y);
        if (!box || !std::any_of(cards.begin(), cards.end(), [&](const Card &card) {
                return box->y == card.box.y && box->h == card.box.h &&
                    box->x + box->w < card.box.x;
            })) continue;
        fields.push_back({{i}, {}, {}, origin_x + box->x * tile_w,
            origin_x + (box->x + box->w) * tile_w, row_key(match),
            box->y, (box->h - 1) * tile_h / 2, 0, true, false, true});
        fields.back().line_height = box->h * tile_h;
        fields.back().native_clip = SDL_Rect{origin_x + box->x * tile_w,
            origin_y + box->y * tile_h, box->w * tile_w, box->h * tile_h};
    }

    // Keep existing translations and colors. Each complete field is drawn as
    // one glyph run so colored date fragments cannot acquire different sizes.
    for (Field &field : fields) {
        int source_end = -1;
        for (size_t i : field.parts) {
            Match part = matches[i];
            // Only the mode suffix inside a recognized save card has this
            // meaning. Site types and personal titles elsewhere retain their
            // existing terms; every save mode uses the same scoped vocabulary.
            const size_t comma = part.source.rfind(',');
            if (field.fixed_baseline && comma != std::string::npos) {
                const auto source_mode = trim_view(std::string_view(part.source).substr(comma + 1));
                const auto mode = legends_terms_.find("Save list mode: " + std::string(source_mode));
                const auto literal = mode != legends_terms_.end()
                    ? exact_literal_translation(source_mode) : std::nullopt;
                if (literal && !literal->empty() && part.target.ends_with(*literal)) {
                    part.target.replace(part.target.size() - literal->size(), literal->size(), mode->second);
                    if (!part.layout_glyph_foreground_rgb.empty()) {
                        std::vector<uint32_t> cps;
                        if (!decode_utf8(part.target, cps)) return false;
                        part.layout_glyph_foreground_rgb.resize(cps.size(),
                            part.layout_glyph_foreground_rgb.back());
                    }
                }
            }
            bool top = false;
            const auto *cell = cell_at(part.x, part.y, &top);
            const int foreground = part.layout_foreground_rgb >= 0 ? part.layout_foreground_rgb :
                cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : 0xffffff;
            if (source_end >= 0 && field.right_aligned &&
                part.source.starts_with("Folder: ")) {
                // Keep the status visibly separate from the folder label,
                // independent of their shorter translated source lengths.
                field.text += "  ";
                field.colors.insert(field.colors.end(), 2, foreground);
            } else if (source_end >= 0 && part.x > source_end && !field.text.empty() &&
                ascii_word_byte(static_cast<unsigned char>(field.text.back())) &&
                ascii_word_byte(static_cast<unsigned char>(part.target.front()))) {
                field.text.push_back(' ');
                field.colors.push_back(foreground);
            }
            field.text += part.target;
            source_end = part.x + part.length;
            if (!part.layout_glyph_foreground_rgb.empty()) {
                field.colors.insert(field.colors.end(), part.layout_glyph_foreground_rgb.begin(),
                    part.layout_glyph_foreground_rgb.end());
            } else {
                for (const ColoredText &color : colored_match_text(part, foreground)) {
                    std::vector<uint32_t> cps;
                    if (!decode_utf8(color.text, cps)) return false;
                    field.colors.insert(field.colors.end(), cps.size(),
                        (color.r << 16) | (color.g << 8) | color.b);
                }
            }
        }
    }
    // A field keeps its native card or button allocation at the shared font
    // size. Text cannot enlarge a card or push a later record down the list.
    const int pixels = unified_font_pixels();
    for (Field &field : fields) {
        if (field.fixed_baseline && field.centered) {
            const int height = std::max(tile_h, field.line_height);
            field.line_height = tile_h;
            field.offset = (height - field.line_height) / 2;
        } else {
            field.line_height = tile_h;
        }
    }
    for (const Card &card : cards) {
        for (size_t i : card.fields) {
            Field &field = fields[i];
            // The native Folder caption can share the classic lower-edge
            // tile. Its allocation is the complete card, not an invented
            // equal-height slot that moves or clips either original line.
            field.native_clip = SDL_Rect{field.left,
                origin_y + card.box.y * tile_h,
                field.right - field.left, card.box.h * tile_h};
        }
    }
    for (Field &field : fields) {
        Match &match = matches[field.parts.front()];
        match.target = std::move(field.text);
        match.layout_glyph_foreground_rgb = std::move(field.colors);
        match.layout_x = (field.left - origin_x) / tile_w;
        match.layout_length = (field.right - field.left + tile_w - 1) / tile_w;
        match.layout_box_pixel_x = field.left;
        match.layout_box_pixel_width = field.right - field.left;
        match.layout_y = field.y;
        match.layout_pixel_y = field.offset;
        if (field.fixed_baseline) match.layout_fixed_baseline = true;
        match.layout_left = !field.centered;
        match.layout_right = field.right_aligned;
        match.layout_ellipsize = true;
        match.layout_native_clip = field.native_clip;
        match.layout_prepared = true;
        match.layout_line_height_pixels = field.line_height;
        for (size_t j = 1; j < field.parts.size(); ++j) {
            matches[field.parts[j]].target.clear();
            matches[field.parts[j]].layout_glyph_foreground_rgb.clear();
        }
        // All native source spans, duplicate identities and hitboxes survive.
    }
    for (const Card &card : cards)
        if (card.border) native_border_repairs_.push_back(*card.border);
    static bool logged = false;
    if (!logged) {
        logged = true;
        log_line("INFO", "Save list layout: native_records=" + std::to_string(cards.size()) +
            "; fields=" + std::to_string(fields.size()) +
            "; shared_font_pixels=" + std::to_string(pixels));
    }
    return true;
}
