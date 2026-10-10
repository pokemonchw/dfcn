// The fortress world map and adventure travel map have region/site records,
// separate from the map hover HUD and embark ecology card. Wilderness records
// have only region names and an optional travel status; ocean records can be a single
// heading, without any population/government/accessibility fields.
// The live frame owns every row; no screenshot coordinates or saved names.
static bool world_site_typed_heading(std::string_view source) {
    const std::string folded = lower(std::string(source));
    const size_t begin = folded.starts_with("the ") ? 4 : 0;
    const size_t of = folded.find(" of ", begin);
    return of != std::string::npos && of > begin &&
        world_site_type_shape(source.substr(begin, of - begin)) &&
        generated_title_shape(source.substr(of + 4));
}

// A name-only structure list has no dictionary caption to establish its
// identity. Bind each row to the actual structures producer's addst call,
// including retained frames and clipped names, before reading its frame.
static std::optional<NativeDrawnTextRow> world_site_owned_draw_for_row(
        const graphicst &gps, const NativeTextCardRow &row, int clip_right,
        bool entity_fact = false, bool site_name = false) {
    if (row.x < 0 || row.x >= gps.dimx || row.y < 0 || row.y >= gps.dimy ||
            row.source.empty() || row.source.size() > static_cast<size_t>(gps.dimx - row.x) ||
            clip_right <= row.x) return std::nullopt;
    const size_t first = static_cast<size_t>(row.x) * gps.dimy + row.y;
    const bool read_top_layer = native_ui_top_layer_at(gps, first);
    const auto origin = native_text_grid_origin(gps, first, read_top_layer);
    if (!origin.grid) return std::nullopt;
    std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
    const auto &draws = origin.top_layer ? g_native_drawn_top_text_rows : g_native_drawn_text_rows;
    for (auto it = draws.rbegin(); it != draws.rend(); ++it) {
        const auto &draw = *it;
        if ((site_name ? !draw.site_name : entity_fact ? !draw.world_site_entity_fact :
                draw.travel_building_field == NativeTravelBuildingField::None) ||
                draw.x > row.x || draw.x < 0 || draw.top_layer != origin.top_layer ||
                draw.draw_grid != origin.grid || draw.draw_dimx != gps.dimx ||
                draw.draw_dimy != gps.dimy || std::abs(draw.y - row.y) > 1) continue;
        const size_t offset = static_cast<size_t>(row.x - draw.x);
        if (offset > draw.source.size() || std::any_of(draw.source.begin(),
                draw.source.begin() + offset, [](unsigned char ch) { return ch != ' '; })) continue;
        const int right = std::max(clip_right, row.x + static_cast<int>(row.source.size()));
        const auto visible = trim_view(std::string_view(draw.source).substr(
            offset, static_cast<size_t>(right - row.x)));
        if (visible != row.source) continue;
        bool current = true;
        constexpr uint32_t halves = (1u << 3) | (1u << 4);
        const auto *flags = read_top_layer ? gps.screentexpos_top_flag : gps.screentexpos_flag;
        for (size_t byte = 0; byte < row.source.size(); ++byte) {
            const size_t at = (static_cast<size_t>(row.x) + byte) * gps.dimy + row.y;
            const bool read_top = native_ui_top_layer_at(gps, at);
            const auto byte_origin = native_text_grid_origin(gps, at, read_top);
            const unsigned char ch = origin.grid[at * 8];
            if (read_top != read_top_layer || byte_origin.grid != origin.grid ||
                    byte_origin.top_layer != origin.top_layer ||
                    (ch ? ch : ' ') != static_cast<unsigned char>(row.source[byte])) {
                current = false;
                break;
            }
            // Native half-font captions repeat the same string on two rows.
            // Only a complementary, current pair may borrow that one draw.
            if (draw.y != row.y && row.source[byte] != ' ') {
                if (!flags || draw.y < 0 || draw.y >= gps.dimy) { current = false; break; }
                const size_t mate = (static_cast<size_t>(row.x) + byte) * gps.dimy + draw.y;
                const uint32_t expected = row.y > draw.y ? (1u << 4) : (1u << 3);
                const uint32_t partner = row.y > draw.y ? (1u << 3) : (1u << 4);
                const bool mate_top = native_ui_top_layer_at(gps, mate);
                const auto mate_origin = native_text_grid_origin(gps, mate, mate_top);
                if ((flags[at] & halves) != expected || (flags[mate] & halves) != partner ||
                        mate_top != read_top_layer || mate_origin.grid != origin.grid ||
                        origin.grid[mate * 8] != ch) { current = false; break; }
            }
        }
        if (current) {
            auto captured = draw;
            captured.x = row.x;
            captured.y = row.y;
            captured.source.erase(0, offset);
            if (offset <= captured.complete_source.size()) captured.complete_source.erase(0, offset);
            return captured;
        }
    }
    return std::nullopt;
}

static bool world_civilization_relationship(std::string_view source) {
    return source == "Your site government" || source == "Peace" ||
        source == "War" || source == "Alliance" || source == "No contact" ||
        source == "Offering tribute" || source == "Accepting tribute" ||
        source == "Skirmishing";
}

static constexpr std::array<std::string_view, 6> world_diplomacy_actions = {{
    "Make peace", "Demander unconditional surrender", "Declare war",
    "Seek alliance", "Make contact", "Improve trade",
}};

// Both site actions and diplomatic proposals use the same caption/reason
// widget. Its complete skin bounds the text, including a disabled reason
// drawn over the bottom edge in classic mode.
std::optional<NativeTextCard> Overlay::capture_world_action_card(
        const SDL_Rect &rect, std::string_view label) const {
    const auto settings = native_ui_settings();
    std::optional<NativeTextCard> text;
    if (!settings || !settings->classic) {
        text = capture_panel_text_card(rect, true);
    } else {
        std::array<int32_t, 9> skin{};
        bool found = false;
        for (int row = rect.y; row < rect.y + rect.h; ++row) {
            for (int x = rect.x; x + static_cast<int>(label.size()) <= rect.x + rect.w; ++x) {
                bool caption = true;
                for (size_t i = 0; i < label.size(); ++i) {
                    bool top = false;
                    const auto *cell = cell_at(x + static_cast<int>(i), row, &top);
                    if (!cell || cell[0] != static_cast<unsigned char>(label[i])) {
                        caption = false;
                        break;
                    }
                }
                if (!caption) continue;
                const auto box = native_button_text_rect(*gps_, x,
                    x + static_cast<int>(label.size()), row, true, &skin);
                if (box && box->x == rect.x && box->y == rect.y &&
                        box->w == rect.w && box->h == rect.h) { found = true; break; }
            }
            if (found) break;
        }
        if (!found) return std::nullopt;
        text.emplace();
        text->interior = rect;
        for (int row = rect.y + 1; row < rect.y + rect.h; ++row) {
            int first = rect.x + rect.w, last = rect.x;
            for (int x = rect.x; x < rect.x + rect.w; ++x) {
                bool top = false;
                const auto *cell = cell_at(x, row, &top);
                if (!cell || !cell[0] || cell[0] == ' ' || native_ui_skin_at(*gps_, x,
                        row, skin[(row - rect.y) * 3 + 1], true)) continue;
                first = std::min(first, x);
                last = x + 1;
            }
            if (first >= last) continue;
            NativeTextCardRow line;
            line.x = first;
            line.y = row;
            for (int x = first; x < last; ++x) {
                // Never include surviving lower-edge skin in a source span.
                if (row == rect.y + rect.h - 1 &&
                    native_ui_skin_at(*gps_, x, row, skin[7], true)) return std::nullopt;
                bool top = false;
                const auto *cell = cell_at(x, row, &top);
                line.source += cell && cell[0] ? static_cast<char>(cell[0]) : ' ';
                line.foregrounds.push_back(cell ?
                    (cell[1] << 16) | (cell[2] << 8) | cell[3] : 0xffffff);
            }
            text->rows.push_back(std::move(line));
        }
    }
    if (!text || text->rows.empty() ||
        normalize_utterance(text->rows.front().source) != label) return std::nullopt;
    if (settings && settings->classic && text->rows.size() > 1) {
        // Native black disabled-caption ink is invisible on the classic skin.
        auto &caption = text->rows.front();
        const int black = (gps_->uccolor[0][0] << 16) |
            (gps_->uccolor[0][1] << 8) | gps_->uccolor[0][2];
        const int gray = (gps_->uccolor[8][0] << 16) |
            (gps_->uccolor[8][1] << 8) | gps_->uccolor[8][2];
        if (std::all_of(caption.foregrounds.begin(), caption.foregrounds.end(),
                [&](int color) { return color == black; }))
            std::fill(caption.foregrounds.begin(), caption.foregrounds.end(), gray);
    }
    text->button_box = rect;
    return text;
}

// These are native two-line buttons, not a read-only card containing all
// pixels of the list. Read only their proven caption spans; classic titles
// replace the left side and relationship rows replace part of the bottom.
// The shared skin reader still verifies the upper edge, right side and all
// surviving lower-edge cells. The containing world-map frame scopes them.
std::vector<NativeTextCard> Overlay::capture_world_civilization_records(
        const SDL_Rect &panel) const {
    std::vector<NativeTextCard> records;
    const auto captures = captured_clipped_captions();
    const auto settings = native_ui_settings();
    const bool classic = settings && settings->classic;
    const int right = panel.x + panel.w, bottom = panel.y + panel.h;
    if (panel.x < 0 || panel.y < 0 || right > gps_->dimx || bottom > gps_->dimy)
        return records;
    const auto fields_at = [&](int y, int left, int end) {
        std::string text(end - left, ' ');
        for (int x = left; x < end; ++x) {
            bool top = false;
            const auto *cell = cell_at(x, y, &top);
            if (cell && cell[0]) text[x - left] = cell[0];
        }
        auto fields = split_text_fields(text);
        for (auto &field : fields) { field.start += left; field.end += left; }
        return fields;
    };
    for (int y = panel.y; y + 1 < bottom; ++y) {
        for (const auto &identity : fields_at(y, panel.x, right)) {
            if (identity.text.find(", \"") == std::string::npos) continue;
            std::string complete = identity.text;
            for (const auto &capture : captures)
                if (capture.x == identity.start && capture.y == y &&
                        capture.visible == identity.text) {
                    complete = capture.complete;
                    break;
                }
            if (!split_legends_figure_record(complete) &&
                    !split_generated_name_identity(complete)) continue;
            std::array<int32_t, 9> skin{};
            const auto box = native_button_text_rect(*gps_, identity.start,
                identity.end, y, true, &skin, false, true);
            if (!box || box->x - 1 < panel.x || box->x + box->w >= right ||
                    box->y < panel.y || box->y + box->h > bottom ||
                    y != box->y + 1) continue;
            const auto status = fields_at(y + 1, box->x - 1, box->x + box->w);
            if (status.size() != 1 || status.front().start != identity.start ||
                    !world_civilization_relationship(normalize_utterance(status.front().text)))
                continue;
            // The permissive shared caption reader locates the widget;
            // these typed spans delimit the ONLY overwritten skin cells.
            // A blank hole in the remaining bottom edge or extra text after
            // the identity must not count as part of this complete record.
            bool complete_skin = true;
            for (int x = box->x; x < box->x + box->w; ++x) {
                if (x < identity.start || x >= identity.end) {
                    bool top = false;
                    const auto *cell = cell_at(x, y, &top);
                    // Blank foreground is immaterial: init/graphicst skins
                    // can have identical edges and different blank ink.
                    if ((cell && cell[0] && cell[0] != ' ') ||
                            !native_ui_skin_at(*gps_, x, y, skin[4], classic, true))
                        complete_skin = false;
                }
                if ((x < status.front().start || x >= status.front().end) &&
                        !native_ui_skin_at(*gps_, x, y + 1, skin[7], classic))
                    complete_skin = false;
            }
            if (!complete_skin) continue;
            NativeTextCard card;
            card.interior = *box;
            const auto append = [&](const LogicalTextField &field, int row,
                                    std::string full) {
                NativeTextCardRow text;
                text.x = field.start;
                text.y = row;
                text.source = field.text;
                text.complete_source = std::move(full);
                for (int x = field.start; x < field.end; ++x) {
                    bool top = false;
                    const auto *cell = cell_at(x, row, &top);
                    text.foregrounds.push_back(cell ?
                        (cell[1] << 16) | (cell[2] << 8) | cell[3] : 0xffffff);
                }
                card.rows.push_back(std::move(text));
            };
            append(identity, y, std::move(complete));
            append(status.front(), y + 1, {});
            records.push_back(std::move(card));
        }
    }
    return records;
}

std::optional<NativeTextCard> Overlay::capture_world_site_card(
        std::vector<NativeTextCard> &action_cards) const {
    action_cards.clear();
    if (gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return std::nullopt;
    std::vector<std::string> context(gps_->dimy, std::string(gps_->dimx, ' '));
    for (int y = 0; y < gps_->dimy; ++y)
        for (int x = 0; x < gps_->dimx; ++x) {
            bool top = false;
            const auto *cell = cell_at(x, y, &top);
            context[y][x] = cell && cell[0] ? cell[0] : ' ';
        }
    // The logical grid is current before the first glyph copy; graphical
    // visibility still describes the preceding Present at that point. Do
    // not use that old composite to decide whether to suppress this card.
    // The same population/government labels also occur in Legends. Require
    // this screen's navigation, not a vocabulary-only match on another page.
    int navigation = 0;
    for (std::string_view label : {"Center on fort", "Missions", "News and rumors"})
        if (std::any_of(context.begin(), context.end(), [&](const std::string &row) {
                const size_t at = row.find(label);
                return at != std::string::npos && has_word_boundaries(row, at, at + label.size());
            })) ++navigation;
    const NativePanelBorders borders(*gps_);
    const auto captures = captured_clipped_captions();
    const auto align_card = [&](NativeTextCard card) {
        const int right = card.interior.x + card.interior.w;
        for (auto &row : card.rows) {
            for (const auto &capture : captures)
                if (capture.x == row.x && capture.y == row.y &&
                    capture.visible == row.source) {
                    row.complete_source = capture.complete;
                    break;
                }
            // Travel-map headings can be drawn beyond the frame/screen edge
            // without resizing the native string. Recover that actual draw,
            // requiring its position and entire surviving prefix to agree.
            // The complete source supplies meaning; the frame still bounds
            // Chinese layout, independently of the English caption length.
            bool uniform = true;
            for (size_t index = 0; index < row.source.size(); ++index)
                if (row.source[index] != ' ' &&
                    row.foregrounds[index] != row.foregrounds.front()) uniform = false;
            const auto drawn = uniform ? native_drawn_text_for_row(
                Match{row.x, row.y, static_cast<int>(row.source.size()),
                    kWorldSitePhraseRule, {}, row.source}, right) : std::nullopt;
            if (row.complete_source.empty() && drawn && drawn->size() > row.source.size())
                row.complete_source = *drawn;
            // A native letter can occupy the graphical right-edge cell.
            // Suppress only that verified letter, never the frame texture or
            // text in a neighbouring widget, and retain the interior width.
            if (drawn && right < gps_->dimx &&
                row.x + static_cast<int>(row.source.size()) == right &&
                drawn->size() > row.source.size()) {
                bool top = false;
                const auto *cell = cell_at(right, row.y, &top);
                const unsigned char expected = (*drawn)[row.source.size()];
                const int color = cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : -1;
                if (cell && cell[0] == expected && expected != ' ' &&
                    color == row.foregrounds.front()) {
                    row.source += static_cast<char>(expected);
                    row.foregrounds.push_back(color);
                }
            }
        }
        // Use one native text margin for every record, even a lone heading.
        // The source spans still own suppression; their English lengths do
        // not determine the translated alignment or available font width.
        int left = right;
        for (const auto &row : card.rows) left = std::min(left, row.x);
        card.interior.x = left;
        card.interior.w = right - left;
        return card;
    };
    // Travel mode replaces the ordinary gait/time footer and fortress-map
    // navigation with an edge-to-edge W/E bearing strip and a native site
    // identity in the lower HUD. Its read-only location frame must therefore
    // enter the shared site-card path without borrowing either other HUD.
    const bool bearing_strip = !context.empty() && !context.front().empty() &&
        context.front().front() == 'W' && context.front().back() == 'E';
    int travel_footer = -1;
    if (bearing_strip) {
        for (int y = std::max(0, gps_->dimy - 4); y < gps_->dimy; ++y) {
            for (const auto &field : split_text_fields(context[y])) {
                std::string complete = field.text;
                for (const auto &capture : captures)
                    if (capture.x == field.start && capture.y == y &&
                        capture.visible == field.text) {
                        complete = capture.complete;
                        break;
                    }
                const auto identity = split_legends_figure_record(complete);
                if (identity && identity->sex.empty() && world_site_type_shape(identity->species)) {
                    travel_footer = y;
                    break;
                }
            }
            if (travel_footer >= 0) break;
        }
    }
    // The local structures producer draws fixed categories, named buildings,
    // religion/deity shrines, or one empty-state caption in the same frame.
    // Its actual draw owns every row, so an all-name list needs neither a
    // particular category nor the unrelated location-footer identity.
    if (native_gameplay_map_screen()) {
        std::vector<std::pair<int, int>> anchors;
        {
            std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
            for (const auto *batch : {&g_native_drawn_text_rows, &g_native_drawn_top_text_rows})
                for (const auto &draw : *batch)
                    if (draw.travel_building_field != NativeTravelBuildingField::None &&
                            draw.x >= 0 && draw.x < gps_->dimx &&
                            draw.y >= 1 && draw.y < gps_->dimy - 1)
                        anchors.emplace_back(draw.x, draw.y);
        }
        for (const auto &[x, y] : anchors) {
            const auto panel = native_panel_interior(borders, *gps_,
                x, x + 1, y);
            if (!panel) continue;
            auto card = capture_panel_text_card(*panel, true);
            if (!card) continue;
            bool owned = true;
            for (auto &row : card->rows) {
                const auto source = world_site_owned_draw_for_row(*gps_, row,
                    panel->x + panel->w);
                if (!source) { owned = false; break; }
                row.complete_source = source->complete_source.empty()
                    ? source->source : source->complete_source;
            }
            if (!owned) continue;
            card->travel_buildings = true;
            return align_card(std::move(*card));
        }
        // Profiles without a producer binding keep the existing complete
        // category fallback. A generated-name shape alone never establishes
        // ownership of a different gameplay list or popup.
        for (int y = 1; y < gps_->dimy - 1; ++y) {
            for (const auto &field : split_text_fields(context[y])) {
                if (!exact_literal_translation("Travel building: " + field.text)) continue;
                const auto panel = native_panel_interior(borders, *gps_,
                    field.start, field.end, y);
                if (!panel) continue;
                // Classic rectangle skins can also match the button reader.
                // The complete category rows below establish this list;
                // nested frames and icon controls remain rejected.
                auto card = capture_panel_text_card(*panel, true);
                if (!card) continue;
                const size_t categories = std::count_if(card->rows.begin(), card->rows.end(),
                    [&](const auto &row) {
                        return exact_literal_translation("Travel building: " +
                            normalize_utterance(row.source)).has_value();
                    });
                if (categories < 2 && categories != card->rows.size()) continue;
                card->travel_buildings = true;
                return align_card(std::move(*card));
            }
        }
    }
    if (travel_footer >= 0) {
        for (int y = 1; y < travel_footer; ++y) {
            for (const auto &field : split_text_fields(context[y])) {
                if (!world_site_typed_heading(field.text)) continue;
                const auto panel = native_panel_interior(borders, *gps_,
                    field.start, field.start + 1, y);
                if (!panel || panel->y + panel->h > travel_footer) continue;
                auto card = capture_panel_text_card(*panel);
                if (!card || card->rows.front().x != field.start ||
                    card->rows.front().y != y) continue;
                return align_card(std::move(*card));
            }
        }
    }
    // Mission details cover the map navigation too. The diplomatic proposal
    // column and its separate Remove control identify this frame. Each
    // proposal owns only its caption/reason widget; the mission title and
    // messenger summary above it remain independent complete text fields.
    for (int y = 0; y < gps_->dimy; ++y) {
        constexpr std::string_view anchor = "Make peace";
        const size_t at = context[y].find(anchor);
        if (at == std::string::npos ||
            !has_word_boundaries(context[y], at, at + anchor.size())) continue;
        const auto first = native_button_text_rect(*gps_, static_cast<int>(at),
            static_cast<int>(at + anchor.size()), y, true);
        if (!first) continue;
        const auto panel = native_panel_interior(borders, *gps_,
            SDL_Rect{first->x - 1, first->y, first->w + 2, first->h});
        if (!panel) continue;
        const auto button = [&](std::string_view label) -> std::optional<SDL_Rect> {
            for (int row = panel->y; row < panel->y + panel->h; ++row) {
                const std::string_view text(context[row].data() + panel->x, panel->w);
                const size_t offset = text.find(label);
                if (offset == std::string_view::npos ||
                    !has_word_boundaries(text, offset, offset + label.size())) continue;
                const int x = panel->x + static_cast<int>(offset);
                const auto box = native_button_text_rect(*gps_, x,
                    x + static_cast<int>(label.size()), row, true);
                if (box && box->x - 1 >= panel->x &&
                        box->x + box->w < panel->x + panel->w &&
                        box->y >= panel->y && box->y + box->h <= panel->y + panel->h)
                    return box;
            }
            return std::nullopt;
        };
        const auto remove = button("Remove");
        if (!remove || remove->y + remove->h > first->y) continue;
        std::vector<NativeTextCard> actions;
        int previous_bottom = first->y;
        int controls = 0;
        bool ordered_column = true;
        for (std::string_view label : world_diplomacy_actions) {
            const auto box = button(label);
            if (!box) continue;
            if (box->x != first->x || box->w != first->w || box->y < previous_bottom) {
                ordered_column = false;
                break;
            }
            ++controls;
            previous_bottom = box->y + box->h;
            if (auto text = capture_world_action_card(*box, label))
                actions.push_back(align_card(std::move(*text)));
        }
        if (!ordered_column || controls < 2 || actions.empty()) continue;
        int left = first->x + first->w;
        for (const auto &action : actions) left = std::min(left, action.interior.x);
        for (auto &action : actions) {
            action.interior.w += action.interior.x - left;
            action.interior.x = left;
        }
        action_cards = std::move(actions);
        // A mission header is not a landform/site card. Its existing typed
        // title parser and the complete summary rules own those other rows.
        return std::nullopt;
    }
    // A modal can cover ALL world-map navigation. Its own closed frame,
    // ordered action column and separate Cancel button identify it instead;
    // never require or borrow controls from the hidden map underneath.
    // The header and each action are separate bounded text cards. Capturing
    // the entire modal as facts would merge Cancel into the location row.
    {
        constexpr std::string_view worker_action = "Request workers";
        for (int y = 0; y < gps_->dimy; ++y) {
            const size_t at = context[y].find(worker_action);
            if (at == std::string::npos ||
                !has_word_boundaries(context[y], at, at + worker_action.size())) continue;
            const auto workers = native_button_text_rect(*gps_,
                static_cast<int>(at), static_cast<int>(at + worker_action.size()), y, true);
            if (!workers) continue;
            // Contain the whole button, including its caps. In classic mode
            // the button's own CP437 frame is also a candidate panel.
            const auto panel = native_panel_interior(borders, *gps_,
                SDL_Rect{workers->x - 1, workers->y, workers->w + 2, workers->h});
            if (!panel || workers->x < panel->x ||
                workers->x + workers->w > panel->x + panel->w ||
                workers->y < panel->y || workers->y + workers->h > panel->y + panel->h) continue;
            const auto button = [&](std::string_view label) -> std::optional<SDL_Rect> {
                for (int row = panel->y; row < panel->y + panel->h; ++row) {
                    const std::string_view text(context[row].data() + panel->x, panel->w);
                    const size_t offset = text.find(label);
                    if (offset == std::string_view::npos ||
                        !has_word_boundaries(text, offset, offset + label.size())) continue;
                    const int x = panel->x + static_cast<int>(offset);
                    const auto rect = native_button_text_rect(*gps_, x,
                        x + static_cast<int>(label.size()), row, true);
                    if (rect && rect->x >= panel->x &&
                        rect->x + rect->w <= panel->x + panel->w &&
                        rect->y >= panel->y && rect->y + rect->h <= panel->y + panel->h)
                        return rect;
                }
                return std::nullopt;
            };
            const auto attack = button("Attack");
            const auto diplomacy = button("Diplomacy");
            const auto cancel = button("Cancel");
            if (!attack || !diplomacy || !cancel ||
                attack->x != workers->x || diplomacy->x != workers->x ||
                attack->w != workers->w || diplomacy->w != workers->w ||
                attack->y + attack->h > workers->y ||
                workers->y + workers->h > diplomacy->y ||
                cancel->y + cancel->h > attack->y) continue;
            const int bottom = attack->y;
            // Button text rectangles exclude their left cap. Keep that cap
            // outside the header too, even when it has no text on this row.
            const int right = cancel->x - 1;
            if (right <= panel->x || bottom <= panel->y || cancel->y >= bottom) continue;
            auto card = capture_panel_text_card(
                SDL_Rect{panel->x, panel->y, right - panel->x, bottom - panel->y});
            if (!card) continue;
            std::string heading = card->rows.front().source;
            for (const auto &capture : captured_clipped_captions())
                if (capture.x == card->rows.front().x && capture.y == card->rows.front().y &&
                    capture.visible == heading) {
                    heading = capture.complete;
                    break;
                }
            const size_t comma = heading.rfind(", ");
            if (comma == std::string::npos || comma == 0 || comma + 2 >= heading.size() ||
                heading.find(", \"") != std::string::npos) continue;

            std::vector<NativeTextCard> actions;
            const std::array<std::pair<SDL_Rect, std::string_view>, 3> controls = {{
                {*attack, "Attack"}, {*workers, worker_action}, {*diplomacy, "Diplomacy"},
            }};
            for (const auto &[rect, label] : controls) {
                auto text = capture_world_action_card(rect, label);
                // An obscured control does not reject its sibling actions.
                if (!text) continue;
                actions.push_back(align_card(std::move(*text)));
            }
            // The source inset, not English caption length, owns alignment.
            // All three actions share one left edge and the same measured
            // font/width; the native skins, rows and hitboxes do not move.
            int action_left = workers->x + workers->w;
            for (const auto &action : actions)
                action_left = std::min(action_left, action.interior.x);
            for (auto &action : actions) {
                action.interior.w += action.interior.x - action_left;
                action.interior.x = action_left;
            }
            action_cards = std::move(actions);
            return align_card(std::move(*card));
        }
    }
    for (int y = 0; y < gps_->dimy; ++y) {
        // Either facts OR the location/mission status can locate the frame.
        // Requiring a site-only fact left wilderness headings to generic
        // English-span centering while the accessibility row aligned left.
        // Travel variants share the native formatter (Linux 0x143cd89..
        // 0x143cf3c); the plural count may be written in words, not digits.
        for (std::string_view label : {"Population:", "No civilized population",
                "Site government:", "Artifacts (Rumored)",
                "Inaccessible from your location", "Your location", "A short trip",
                "A half day's travel", "Nearly a day's travel", "A day's travel",
                "More than a day's travel", " days' travel",
                "Cannot raid your civilization", "No workers available",
                "Click to request workers", "Inaccessible mission location",
                "Cannot order mission without leader", "Click to recover (creates new mission)"}) {
            const size_t at = context[y].find(label);
            if (at == std::string::npos || !has_word_boundaries(context[y], at, at + label.size()))
                continue;
            // Classic artifact prose can overwrite the right hover edge.
            // Its live typed document proves those exact covered cells; the
            // general closed-frame reader must stay strict for other cards.
            if (label == "Inaccessible mission location" ||
                    label == "Cannot order mission without leader" ||
                    label == "Click to recover (creates new mission)") {
                if (auto artifact = capture_world_artifact_description_card(
                        static_cast<int>(at), static_cast<int>(at + label.size()), y))
                    return align_card(std::move(*artifact));
            }
            const auto panel = native_panel_interior(borders, *gps_, static_cast<int>(at),
                static_cast<int>(at + label.size()), y);
            if (!panel) continue;
            auto card = capture_panel_text_card(*panel);
            if (!card) continue;
            // Compact/modal records can cover the navigation. Their own
            // mission/accessibility status is an equally specific world-map
            // anchor, but must be INSIDE this same closed, non-interactive
            // frame. Generic population/travel labels still need navigation.
            const bool map_status = std::any_of(card->rows.begin(), card->rows.end(),
                [](const auto &row) {
                    const auto source = normalize_utterance(row.source);
                    return source == "Inaccessible from your location" ||
                        source == "Cannot raid your civilization" ||
                        source == "No workers available" ||
                        source == "Click to request workers" ||
                        source == "Inaccessible mission location";
                });
            if (navigation < 2 && !map_status) continue;
            return align_card(std::move(*card));
        }
    }
    // The Civilizations page has name/gloss/species + relationship records,
    // not population/travel facts. The player's government can be outside
    // the scrolled viewport, so do not make that single status the only
    // anchor. Require world-map navigation, a complete closed text frame,
    // and a structurally complete identity plus relationship inside it. This recognizes native
    // accented names as well as English glosses without borrowing Legends'
    // Export XML context or assuming any particular world/name/row count.
    if (navigation >= 2) {
        const auto captures = captured_clipped_captions();
        for (int y = 0; y < gps_->dimy; ++y) {
            auto anchor = context[y].find(", \"");
            if (anchor == std::string::npos) anchor = context[y].find("Your site government");
            if (anchor == std::string::npos) continue;
            const auto button = native_button_text_rect(*gps_,
                static_cast<int>(anchor), static_cast<int>(anchor + 3), y, true);
            if (!button) continue;
            // Include both button caps so its own one-row frame cannot be
            // mistaken for the parent civilization-list panel.
            const auto panel = native_panel_interior(borders, *gps_,
                SDL_Rect{button->x - 1, button->y, button->w + 2, button->h});
            if (!panel) continue;
            NativeTextCard card;
            card.interior = *panel;
            for (auto &record : capture_world_civilization_records(*panel))
                card.rows.insert(card.rows.end(),
                    std::make_move_iterator(record.rows.begin()),
                    std::make_move_iterator(record.rows.end()));
            if (!card.rows.empty()) return align_card(std::move(card));
        }
    }
    // Water can have ONLY a generated region heading. No fact/travel label
    // exists to anchor it, so the loop above cannot identify that record.
    // Require current world-map navigation plus the same closed, read-only
    // frame, with the candidate at its first text row. This is deliberately
    // independent of the landform word, translation coverage and row count;
    // adding an Ocean literal would leave other heading-only records broken.
    if (navigation >= 2) {
        for (int y = 0; y < gps_->dimy; ++y) {
            for (size_t at = context[y].find("The "); at != std::string::npos;
                    at = context[y].find("The ", at + 4)) {
                if (!has_word_boundaries(context[y], at, at + 3)) continue;
                const auto panel = native_panel_interior(borders, *gps_,
                    static_cast<int>(at), static_cast<int>(at + 4), y);
                if (!panel) continue;
                auto card = capture_panel_text_card(*panel);
                if (!card || card->rows.front().x != static_cast<int>(at) ||
                    card->rows.front().y != y) continue;
                const auto heading = normalize_utterance(card->rows.front().source);
                if (!heading.starts_with("The ") || !generated_title_shape(heading)) continue;
                return align_card(std::move(*card));
            }
        }
    }
    return std::nullopt;
}

void Overlay::append_world_site_phrases(const NativeTextCard &card,
        std::vector<std::string> &rows, std::vector<Match> &matches, int only_y,
        bool action_control, bool reclaim_history) const {
    if (card.travel_buildings) {
        const auto shrine_figure = [&](const std::string &value) -> std::optional<std::string> {
            if (auto actor = translate_legends_actor(value)) return actor;
            // The shrine's nameless-figure branch can append a generated
            // creature name after a/an + status + species/caste. The shared
            // actor grammar owns a bare article/species; resolve this extra
            // native name only inside this producer's complete figure slot.
            for (const std::string_view article : {"a ", "an ", "A ", "An "}) {
                if (!value.starts_with(article)) continue;
                const auto body = std::string_view(value).substr(article.size());
                for (size_t at = body.rfind(' '); at != std::string_view::npos;
                        at = at == 0 ? std::string_view::npos : body.rfind(' ', at - 1)) {
                    const auto creature = translate_creature_descriptor(body.substr(0, at), true);
                    if (!creature) continue;
                    const auto name = translate_legends_name(body.substr(at + 1), true);
                    if (name) return *creature + "·" + *name;
                }
                break;
            }
            return std::nullopt;
        };
        const auto shrine = [&](const std::string &source) -> std::optional<std::string> {
            std::string key;
            std::string value;
            bool figure = false;
            if (source.starts_with("Shrine to ")) {
                key = "Travel building: Shrine to {n}";
                value = source.substr(10);
                figure = true;
            } else if (source.starts_with("Shrine of ")) {
                key = "Travel building: Shrine of {p}";
                value = source.substr(10);
            } else if (source.ends_with(" shrine")) {
                key = "Travel building: {p} shrine";
                value = source.substr(0, source.size() - 7);
            } else return std::nullopt;
            if (value.empty()) return std::nullopt;
            // The native shrine owns a historical figure or a religious
            // entity. Its religion field is a generated organization name,
            // not a sphere noun or a freely composable English sentence.
            auto target = figure ? shrine_figure(value)
                : translate_legends_name(value, false);
            if (!target) return std::nullopt;
            const auto grammar = history_semantic_templates_.find(key);
            if (grammar == history_semantic_templates_.end()) return std::nullopt;
            const Rule &rule = rules_[static_cast<size_t>(grammar->second)];
            if (rule.template_kinds.size() != 1) return std::nullopt;
            const std::vector<std::string> captures{value};
            const std::vector<std::optional<std::string>> translated{std::move(target)};
            return fill_template(rule, captures, &capture_translations_, nullptr, &translated);
        };
        for (const auto &row : card.rows) {
            const std::string source = row.complete_source.empty()
                ? row.source : row.complete_source;
            const std::string complete = normalize_utterance(source);
            const auto owner = world_site_owned_draw_for_row(*gps_, row,
                card.interior.x + card.interior.w);
            std::optional<std::string> target;
            if (owner && owner->travel_building_field == NativeTravelBuildingField::Name)
                target = translate_legends_name(complete, false);
            else if (owner && owner->travel_building_field == NativeTravelBuildingField::Shrine)
                target = shrine(complete);
            else target = exact_literal_translation("Travel building: " + complete);
            Match match{row.x, row.y, static_cast<int>(row.source.size()),
                kWorldSitePhraseRule, target ? *target : cp437_to_utf8(source), row.source};
            match.native_hover_untranslated = !target;
            if (!target) match.native_help_review_source = source;
            match.layout_foreground_rgb = row.foregrounds.front();
            std::fill_n(rows[row.y].begin() + row.x, row.source.size(), ' ');
            if (only_y < 0 || only_y == row.y) matches.push_back(std::move(match));
        }
        return;
    }
    bool artifacts = false;
    const auto travel_status_rows = action_control ? std::unordered_set<int>{}
        : append_adventure_travel_status_paragraphs(card, rows, matches, only_y);
    const auto captures = captured_clipped_captions();
    const auto reclaim_draws = reclaim_history ? captured_embark_reclaim_history_rows(*gps_)
        : std::array<std::vector<NativeDrawnTextRow>, 2>{};
    // The artifact popup shares this frame and mission footer, but its body
    // is ONE item document, not independently translatable location facts.
    const size_t description_end = action_control ? 0
        : append_world_artifact_description(card, rows, matches, only_y);
    bool facts = action_control || description_end != 0;
    for (size_t index = description_end; index < card.rows.size(); ++index) {
        const auto &row = card.rows[index];
        if (travel_status_rows.contains(row.y)) continue;
        if (!action_control && (reclaim_history || normalize_utterance(row.source).starts_with("In "))) {
            // The site-news builder wraps dated events before drawing them.
            // Gather the whole live paragraph before any independent row,
            // term or name rule can consume one of its fragments. Native
            // blank rows bound reclaim records exactly as the native builder
            // separates them. Other site cards also recognize the next date;
            // a period alone never ends a multi-sentence event.
            size_t end = index + 1;
            while (end < card.rows.size() &&
                    card.rows[end].y == card.rows[end - 1].y + 1 &&
                    (reclaim_history || !normalize_utterance(card.rows[end].source).starts_with("In "))) ++end;
            std::vector<Match> paragraph;
            std::vector<int> paragraph_rows;
            std::string source;
            for (size_t at = index; at < end; ++at) {
                const auto &part = card.rows[at];
                paragraph.push_back({part.x, part.y, static_cast<int>(part.source.size()),
                    kWorldSiteHistoryRule, {}, part.source});
                paragraph_rows.push_back(part.y);
                if (!source.empty()) source += ' ';
                source += part.source;
            }
            const int right = card.interior.x + card.interior.w;
            // Both this card and the parser read the active logical cells,
            // including during a raw-layer suppression pass. The mask writer
            // still checks each owned source byte on that particular layer.
            std::optional<std::vector<LegendsTextPiece>> translated;
            std::string review_source = source;
            if (reclaim_history) {
                // Consume the event copied with these actual native draws.
                // Input may already have selected another site; consulting
                // that live selection would turn this intact frame English.
                if (auto document = native_embark_reclaim_history_source(
                        paragraph, normalize_utterance(source), reclaim_draws)) {
                    review_source = document->native_source;
                    translated = translate_history_event(*document);
                }
            } else {
                // This producer formats world-map rumors, not history_event
                // objects. Its native type branches and date prefixes have
                // their own complete-message grammar. Resolve the whole
                // paragraph before the general Legends prose path can
                // reinterpret a place, office or fleeing party as a name.
                if (auto rumor = translate_announcement_combat(
                        source, "site-rumor")) {
                    translated = std::vector<LegendsTextPiece>{{std::move(*rumor),
                        row.foregrounds.front(), row.x, row.y}};
                } else {
                    const auto flow = translate_legends_flow(
                        paragraph_rows, card.interior.x, right, nullptr);
                    if (flow && flow->fully_translated) translated = flow->pieces;
                }
            }
            std::string target;
            std::vector<int> colors;
            if (translated) {
                for (const auto &piece : *translated) {
                    std::vector<uint32_t> cps;
                    if (!decode_utf8(piece.target, cps)) { target.clear(); break; }
                    target += piece.target;
                    colors.insert(colors.end(), cps.size(), reclaim_history
                        ? row.foregrounds.front() : piece.foreground_rgb);
                }
            }
            if (target.empty() || !append_bounded_paragraph(paragraph, target,
                    rows, matches, only_y, right, right, colors)) {
                // Keep an unknown / non-fitting event intact, not a mixture
                // of translated words and English continuations. One review
                // entry owns the complete paragraph at every wrapping width.
                for (size_t at = index; at < end; ++at) {
                    const auto &part = card.rows[at];
                    Match fallback{part.x, part.y, static_cast<int>(part.source.size()),
                        kWorldSiteHistoryRule, cp437_to_utf8(part.source), part.source};
                    fallback.native_hover_untranslated = true;
                    if (at == index) fallback.native_help_review_source = review_source;
                    fallback.layout_x = card.interior.x;
                    fallback.layout_y = part.y;
                    fallback.layout_length = card.interior.w;
                    fallback.layout_clip_right = right;
                    fallback.layout_left = true;
                    fallback.layout_foreground_rgb = part.foregrounds.front();
                    fallback.layout_glyph_foreground_rgb = part.foregrounds;
                    std::fill_n(rows[part.y].begin() + part.x, part.source.size(), ' ');
                    if (only_y < 0 || only_y == part.y) matches.push_back(std::move(fallback));
                }
            }
            facts = true;
            index = end - 1;
            continue;
        }
        // Native truncation applies to the complete type/name or label/name
        // field. Recover its current captured string, not a guessed suffix.
        std::string complete = row.complete_source.empty() ? row.source : row.complete_source;
        for (const auto &capture : captures)
            if (capture.x == row.x && capture.y == row.y && capture.visible == row.source) {
                complete = capture.complete;
                break;
            }
        const std::string source = normalize_utterance(complete);
        // Own the whole native-language name, quoted English meaning and
        // optional species BEFORE prose/item/word matching. Clipping can
        // remove the closing quote or species, so recover the complete draw
        // above before parsing. An unrecovered identity stays intact rather
        // than becoming a mixture of English connectors and item nouns.
        const bool identity = !action_control && !artifacts && source.find(", \"") != std::string::npos;
        const bool compact_site_heading = !action_control && index == 0 && !artifacts && !identity &&
            source.find(", ") != std::string::npos;
        const bool site_heading = !action_control && !artifacts &&
            (world_site_typed_heading(source) || (source.starts_with("The ") &&
                (source.find(" Of ") != std::string::npos ||
                    (facts && source.find(" of ") != std::string::npos))));
        facts = facts || identity || site_heading || compact_site_heading || source.starts_with("Population:") ||
            source == "No civilized population" || source == "Your location" ||
            source == "Inaccessible from your location" || source == "A short trip" ||
            source.ends_with(" day's travel") || source.ends_with(" days' travel") ||
            source.starts_with("Site government:") || source.starts_with("Civilization:");
        if (!action_control && (source == "Artifacts (Rumored)" || source == "Artifacts")) artifacts = true;
        std::vector<int> target_colors;
        // The pinned mission hint comes from the existing complete-message
        // catalog, before item/name heuristics can reinterpret its prose.
        const std::vector<int> foregrounds = complete == row.source ? row.foregrounds
            : std::vector<int>(complete.size(), row.foregrounds.front());
        const auto entity_draw = !action_control && !artifacts &&
                (source.starts_with("Site government:") || source.starts_with("Civilization:"))
            ? world_site_owned_draw_for_row(*gps_, row,
                card.interior.x + card.interior.w, true) : std::nullopt;
        std::optional<std::string> target = !action_control && !artifacts
            ? translate_world_site_entity_fact(source, entity_draw
                ? &*entity_draw->world_site_entity_fact : nullptr) : std::nullopt;
        if (!action_control && artifacts &&
                source != "Artifacts (Rumored)" && source != "Artifacts") {
            // Rumored treasures include written works. Resolve the complete
            // title before prose/name ownership can claim its `of` clause or
            // reject its punctuation, using the same grammar as the item list.
            if (split_generated_name_identity(source) || split_repeated_title_identity(source))
                target = translate_legends_artifact_identity(source);
            if (!target) target = translate_legends_book(source);
            if (!target) target = translate_legends_item(source);
        }
        if (!target && !action_control && !artifacts) {
            const auto site_draw = world_site_owned_draw_for_row(*gps_, row,
                card.interior.x + card.interior.w, false, true);
            if (site_draw) {
                std::string_view name_source = source;
                if (site_heading || compact_site_heading) {
                    const size_t type_begin = compact_site_heading ? source.rfind(", ") + 2
                        : source.starts_with("The ") ? 4 : 0;
                    const size_t type_end = compact_site_heading ? source.size()
                        : lower(source).find(" of ", type_begin);
                    if (type_end != std::string::npos && type_end > type_begin)
                        name_source = compact_site_heading
                            ? std::string_view(source).substr(0, type_begin - 2)
                            : std::string_view(source).substr(type_end + 4);
                }
                target = translate_site_display(*site_draw->site_name, name_source);
            }
        }
        // The first heading names the selected landform; subsequent headings
        // name its biome/region or site. Keep its LAND sense scoped to this
        // field, before exact world-name translations can override it. This
        // uses the live card order, never a saved name or screenshot position.
        if (!target && index == 0 && !facts && !artifacts)
            target = translate_world_landform_heading(source);
        // Before facts/site identities, the remaining headings are natural
        // regions (including a mountain region below its containing land).
        if (!target && !action_control && !facts && !artifacts)
            target = translate_world_region_heading(source);
        // Native headings use `The <type> Of <site name>` or `<name>, <type>`.
        // Resolve the
        // article and connector in the scoped TSV grammar BEFORE ordinary
        // prose/item/name parsing can reinterpret the complete title as an
        // ownership phrase. Only the name capture reaches the name parser;
        // the type reuses the existing complete-term vocabulary.
        if (action_control) {
            // An action/restriction is never a place, artifact or person.
            // Reviewed button-only terms use their own TSV namespace;
            // existing captions and full mission messages keep their terms.
            const auto status = legends_terms_ci_.find("world site action: " + lower(source));
            if (status != legends_terms_ci_.end()) target = status->second;
            if (!target) target = exact_literal_translation(source);
            if (!target)
                target = translate_help_paragraph(complete, foregrounds, target_colors, true);
            // No generic Legends/name fallback here. An unknown reason is
            // retained as one original row and reported for translation.
        } else if (!target && identity) {
            // Relationship records can name a civilization or its site
            // government and carry a species after the quoted gloss. Resolve
            // the complete pair against its typed entity before the
            // figure-shaped wrapper can send it through personal names.
            if (index + 1 < card.rows.size() && world_civilization_relationship(
                    normalize_utterance(card.rows[index + 1].source))) {
                const auto record = split_legends_figure_record(source);
                if (record && record->sex.empty()) {
                    const std::string reference = std::string(record->native_name) +
                        ", \"" + std::string(record->gloss) + "\"";
                    if (const auto name = translate_civilization_reference(reference)) {
                        const auto species = translate_creature_descriptor(record->species);
                        target = *name + "，" + species.value_or(cp437_to_utf8(record->species));
                    }
                } else target = translate_civilization_reference(source);
            }
            if (!target) {
                if (const auto record = split_legends_figure_record(source);
                        record && record->sex.empty() && world_site_type_shape(record->species))
                    target = translate_legends_place(std::string(record->native_name) +
                        ", \"" + std::string(record->gloss) + "\"");
                else if (split_generated_name_identity(source))
                    target = translate_site_reference(source);
            }
            if (!target && (split_legends_figure_record(source) ||
                    split_generated_name_identity(source)))
                target = translate_procedural_fragment(source);
        } else if (!target && (site_heading || compact_site_heading)) {
            const size_t type_begin = compact_site_heading ? source.rfind(", ") + 2
                : source.starts_with("The ") ? 4 : 0;
            const size_t type_end = compact_site_heading ? source.size()
                : lower(source).find(" of ", type_begin);
            if (type_end != std::string::npos && type_end > type_begin) {
                const auto name = compact_site_heading
                    ? std::string_view(source).substr(0, type_begin - 2)
                    : std::string_view(source).substr(type_end + 4);
                target = translate_site_reference(name);
                if (!target) target = native_text_to_utf8(name);
            }
            if (!target) target = native_text_to_utf8(source);
        } else if (!target) {
            target = translate_help_paragraph(complete, foregrounds, target_colors, true);
            if (!target) {
                target_colors.clear();
                target = exact_literal_translation(source);
            }
            if (!target) target = translate_legends_text(source, false, false);
        }
        // An unresolved heading stays intact for review, rather than falling
        // back to the generic `of`/proper-name grammar and restoring the bug.
        if (!target && artifacts && !identity) {
            // Unnamed generated treasures are item/material nouns, e.g.
            // `the primordial moonstone`, not English proper-name roots.
            // Strip articles only through the shared typed item grammar;
            // never add a global translation/deletion rule for `the`.
            if (source.starts_with("the ") || source.starts_with("a ") || source.starts_with("an "))
                target = translate_legends_item(source);
            if (!target) target = translate_legends_name(source, false);
        }
        // Only the world/region headings above the site record are untyped
        // generated names. Fact rows must never fall back to personal-name
        // transliteration when a UI phrase has no dictionary entry.
        if (!target && !facts) target = translate_legends_name(source, false);
        if (target && (target->empty() || target->find("[C:") != std::string::npos ||
            target->find_first_of("\r\n") != std::string::npos)) target.reset();
        Match match{row.x, row.y, static_cast<int>(row.source.size()),
            kWorldSitePhraseRule, target ? std::move(*target) : cp437_to_utf8(complete), row.source};
        match.native_hover_untranslated = !target;
        if (!target) match.native_help_review_source = complete;
        match.layout_foreground_rgb = row.foregrounds.front();
        match.layout_glyph_foreground_rgb = std::move(target_colors);
        // Own unknown rows too. Generic word/name matching must not turn a
        // missed status into phonetic gibberish or leave its native English
        // behind a translated row. Keep the complete source for review.
        std::fill_n(rows[row.y].begin() + row.x, row.source.size(), ' ');
        if (only_y < 0 || only_y == row.y) matches.push_back(std::move(match));
    }
}

// The mission overview is a read-only roster, separate from the checkbox
// selector and the site-description card. Its native names share a left
// margin; centering each translation in its English span staggers the list.
// Capture the whole closed frame before matching, then compose its existing
// translations with one margin and font while retaining native row spacing.
std::optional<NativeTextCard> Overlay::capture_world_mission_summary_card() const {
    if (!gps_ || gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0)
        return std::nullopt;
    constexpr std::string_view footer = "Click for assignments and details";
    const NativePanelBorders borders(*gps_);
    for (int y = 0; y < gps_->dimy; ++y) {
        std::string text(gps_->dimx, ' ');
        for (int x = 0; x < gps_->dimx; ++x) {
            bool top = false;
            const auto *cell = cell_at(x, y, &top);
            if (cell && cell[0]) text[x] = cell[0];
        }
        const size_t at = text.find(footer);
        if (at == std::string::npos ||
            !has_word_boundaries(text, at, at + footer.size())) continue;
        const auto panel = native_panel_interior(borders, *gps_,
            static_cast<int>(at), static_cast<int>(at + footer.size()), y);
        if (!panel) continue;
        auto card = capture_panel_text_card(*panel);
        if (!card || card->rows.front().y >= y ||
            normalize_utterance(card->rows.back().source) != footer) continue;
        const auto heading = normalize_utterance(card->rows.front().source);
        const bool summary = heading == "No commanders" || heading == "No messengers" ||
            (heading.ends_with(" traveling") && heading.find(" here, ") != std::string::npos &&
                (heading.find("commander") != std::string::npos ||
                    heading.find("messenger") != std::string::npos));
        if (!summary) continue;
        const int right = panel->x + panel->w;
        int left = right;
        for (const auto &row : card->rows) left = std::min(left, row.x);
        card->interior.x = left;
        card->interior.w = right - left;
        return card;
    }
    return std::nullopt;
}

// The member selector overlays selected/unselected button_main skins
// 450/451 on a rectangle's last four columns. In graphical mode add_tile
// retains the underlying rectangle in screentexpos_lower; the name replaces
// the left cap's middle glyph in classic mode.
// PE 53.16: 0x1cc9f7 draws the name at the left cap, 0x1ccaf3 starts the
// status 25 columns later, and 0x1cd136 draws the four-column checkbox.
static std::optional<SDL_Rect> world_mission_member_text_rect(
        const graphicst &gps, int name_x, int status_end, int y) {
    const auto settings = native_ui_settings();
    const bool classic = settings && settings->classic;
    const auto &rectangle = native_texture_button_rectangle(gps);
    const auto &buttons = native_texture_button_main(gps);
    if (name_x < 0 || status_end <= name_x || status_end > gps.dimx)
        return std::nullopt;
    // Locate the complete foreground checkbox BEFORE reading rectangle
    // fill. A fill walk sees the retained lower layer beneath the checkbox
    // and stops three columns too late (PE add_tile at 0xadb100).
    for (int middle : {y, y + 1, y - 1}) {
        if (middle < 1 || middle + 1 >= gps.dimy) continue;
        for (int checkbox = status_end; checkbox + 4 <= gps.dimx; ++checkbox) {
            if (!native_main_button_skin_at(gps, checkbox, middle, buttons[450], classic) &&
                !native_main_button_skin_at(gps, checkbox, middle, buttons[451], classic))
                continue;
            bool complete = true;
            for (int row = 0; row < 3 && complete; ++row) {
                const int screen_y = middle - 1 + row;
                const bool name_on_cap = classic && row == 1 &&
                    native_ui_skin_at(gps, name_x, screen_y, rectangle[1][1], true, true);
                if (!native_ui_skin_at(gps, name_x, screen_y, rectangle[0][row], classic) &&
                    !name_on_cap) {
                    complete = false;
                    break;
                }
                for (int x = name_x + 1; x < checkbox; ++x)
                    if (!native_ui_skin_at(gps, x, screen_y, rectangle[1][row],
                            classic, row == 1)) {
                        complete = false;
                        break;
                    }
            }
            if (complete) return SDL_Rect{name_x, middle - 1, checkbox - name_x, 3};
        }
    }
    return std::nullopt;
}

// Claim the two complete fields before generic name matching can center a
// short Chinese identity inside its longer English source span. Each column
// keeps the native left origin and is bounded by the next column/control.
void Overlay::append_world_mission_members(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y) const {
    const auto captures = captured_clipped_captions();
    for (int y = 0; y < gps_->dimy; ++y) {
        if (only_y >= 0 && only_y != y) continue;
        for (std::string_view status : {"On this mission", "No specific orders"}) {
            const size_t at = rows[y].find(status);
            if (at == std::string::npos || at < 25 ||
                !has_word_boundaries(rows[y], at, at + status.size())) continue;
            const int status_x = static_cast<int>(at), name_x = status_x - 25;
            const auto box = world_mission_member_text_rect(*gps_, name_x,
                status_x + static_cast<int>(status.size()), y);
            if (!box || rows[y][name_x] == ' ' || rows[y][status_x - 1] != ' ') continue;
            std::string name = rows[y].substr(name_x, 24);
            while (!name.empty() && name.back() == ' ') name.pop_back();
            if (name.empty()) continue;
            std::string complete = name;
            for (const auto &capture : captures)
                if (capture.x == name_x && capture.y == y && capture.visible == name) {
                    complete = capture.complete;
                    break;
                }
            auto translated_name = contains_cjk_utf8(complete)
                ? std::optional<std::string>(native_text_to_utf8(complete))
                : translate_legends_name(complete, true);
            const auto translated_status = exact_literal_translation(status);
            const auto append = [&](int x, const std::string &source,
                                    const std::string &full,
                                    const std::optional<std::string> &target, int right) {
                Match field{x, y, static_cast<int>(source.size()), kWorldSiteRowRule,
                    target ? *target : native_text_to_utf8(full), source};
                field.native_hover_untranslated = !target;
                if (!target) field.native_help_review_source = full;
                field.layout_x = x;
                field.layout_y = y;
                field.layout_length = right - x;
                field.layout_clip_right = right;
                field.layout_left = true;
                // The proven composite owns the available blank cells too;
                // classic frame bytes cannot shorten either text column.
                field.native_picture_caption_box = *box;
                bool top = false;
                if (const auto *cell = cell_at(x, y, &top))
                    field.layout_foreground_rgb = (cell[1] << 16) | (cell[2] << 8) | cell[3];
                std::fill_n(rows[y].begin() + x, source.size(), ' ');
                matches.push_back(std::move(field));
            };
            append(name_x, name, complete, translated_name, status_x - 1);
            append(status_x, std::string(status), std::string(status), translated_status,
                box->x + box->w);
        }
    }
}

// Mission headers and squad-order rows share a typed action and target.
// Keep their action vocabulary together so neither typed field can treat
// Raid as a native given name and phoneticize it.
static std::optional<std::string> world_mission_title_source(std::string_view raw) {
    const std::string source(trim_view(raw));
    const std::string folded = lower(source);
    // Choosing a diplomatic proposal replaces the generic Diplomacy action
    // in this same header; each proposal still carries the destination.
    // Report producer PE 9df91a..9dfb0f also uses FigureName for rescue and
    // ArtifactName for recovery. Those targets need not have site-title shape.
    static constexpr std::array<std::string_view, 17> prefixes = {{
        "Raid ", "Pillage ", "Raze ", "Take over ", "Seize ",
        "Demand tribute from ", "Request workers from ", "Explore ", "Diplomacy at ",
        "Demand surrender at ", "Make peace at ", "Declare war at ",
        "Seek alliance at ", "Make contact at ", "Improve trade at ",
        "Rescue ", "Recover ",
    }};
    for (const std::string_view prefix : prefixes) {
        if (!folded.starts_with(lower(std::string(prefix)))) continue;
        const std::string_view destination = std::string_view(source).substr(prefix.size());
        // Every caller owns a native mission/order field. SiteName also
        // emits "an unknown site", and custom names need not have the
        // generated-title shape used by the untyped screen-name scanner.
        if (trim_view(destination).empty()) return std::nullopt;
        // Squad formatters spell Take Over and Demand Tribute from with
        // different capitals. Canonicalize only the action to the shared TSV
        // template; the destination retains its original spelling.
        return std::string(prefix) + std::string(destination);
    }
    return std::nullopt;
}

std::optional<std::string> Overlay::translate_world_mission_title(
        std::string_view source) const {
    TranslationWorkFrame work_frame;
    const auto title = world_mission_title_source(source);
    if (!title) return std::nullopt;
    const std::string scoped = "World mission: " + *title;
    // The native goal determines the target type before its formatter runs:
    // SiteName, FigureName, or ArtifactName (which can fall back to an item
    // description or Untitled). Consume the ENTIRE target, including book
    // punctuation/custom spaces, instead of letting a prose matcher stop at
    // a shorter name. Keep the shared TSV wording for all action variants.
    for (int index : matching_legends_rules(scoped)) {
        const Rule &rule = rules_[static_cast<size_t>(index)];
        if (!rule.source.starts_with("World mission: ") ||
                rule.template_kinds.size() != 1 || rule.template_literals.size() != 2 ||
                !rule.template_literals.back().empty() ||
                !scoped.starts_with(rule.template_literals.front())) continue;
        const std::string destination(trim_view(std::string_view(scoped).substr(
            rule.template_literals.front().size())));
        if (destination.empty()) continue;
        std::optional<std::string> target;
        if (title->starts_with("Recover ")) {
            target = translate_legends_artifact_identity(destination);
            if (!target) target = translate_legends_book(destination);
            if (!target) target = translate_legends_item(destination);
            if (!target) target = translate_item_description_term(destination);
        } else if (title->starts_with("Rescue ")) {
            target = translate_legends_actor(destination);
        } else {
            target = translate_legends_place(destination);
            if (!target) target = translate_legends_term(destination, false);
        }
        // An authored/modded target may have no dictionary entry. Preserve
        // that target while still translating its known action; the whole
        // owned row must never return to the personal-name phonetic fallback.
        if (!target) target = native_text_to_utf8(destination);
        const std::vector<std::string> captures{destination};
        const std::vector<std::optional<std::string>> translated{std::move(target)};
        return fill_template(rule, captures, &capture_translations_, nullptr, &translated);
    }
    return std::nullopt;
}

// Native list/header addst sites own all mission goals before generic name
// matching. The list uses an icon-only red X; the detail header uses Remove.
// The closed-frame fallback supports profiles without these source bindings.
void Overlay::append_world_mission_titles(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y) const {
    if (!gps_ || gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    const NativePanelBorders borders(*gps_);
    const auto captures = captured_clipped_captions();
    const std::array batches{captured_native_drawn_text_rows(false),
        captured_native_drawn_text_rows(true)};
    for (const auto &batch : batches) for (const auto &draw : batch) {
        if (!draw.mission_title || draw.x < 0 || draw.x >= gps_->dimx ||
                draw.y < 0 || draw.y >= gps_->dimy || draw.source.empty()) continue;
        std::string complete = draw.complete_source.empty() ? draw.source : draw.complete_source;
        if (draw.complete_source.empty())
            for (const auto &capture : captures)
                if (capture.x == draw.x && capture.y == draw.y &&
                        capture.visible == draw.source) {
                    complete = capture.complete;
                    break;
                }
        const auto target = translate_world_mission_title(complete);
        // Half-font text writes the same bytes to its two physical rows.
        // Require the current paired flags and source for either row, so
        // raw-layer suppression and the composite own the same full field.
        bool first_top = false;
        const auto *first_cell = cell_at(draw.x, draw.y, &first_top);
        if (!first_cell) continue;
        constexpr uint32_t halves = (1u << 3) | (1u << 4);
        const auto *first_flags = first_top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
        const uint32_t half = first_flags
            ? first_flags[static_cast<size_t>(draw.x) * gps_->dimy + draw.y] & halves : 0;
        const int mate = half == (1u << 3) ? draw.y + 1 : half == (1u << 4) ? draw.y - 1 : -1;
        for (const int y : {draw.y, mate}) {
            if (y < 0 || y >= gps_->dimy || (only_y >= 0 && only_y != y)) continue;
            bool top = false;
            const auto *cell = cell_at(draw.x, y, &top);
            if (!cell || top != first_top) continue;
            if (y != draw.y) {
                const uint32_t other = first_flags
                    ? first_flags[static_cast<size_t>(draw.x) * gps_->dimy + y] & halves : 0;
                if (other != (half == (1u << 3) ? (1u << 4) : (1u << 3))) continue;
            }
            int right = draw.mission_title_right > draw.x
                ? std::min(draw.mission_title_right, gps_->dimx) : gps_->dimx;
            const int visible_end = std::min(right, draw.x + static_cast<int>(draw.source.size()));
            if (const auto panel = native_panel_interior(borders, *gps_, draw.x, visible_end, y))
                right = std::min(right, panel->x + panel->w);
            // A mission already traveling can omit its delete icon. Its
            // full rectangle still owns the text column in that state.
            if (const auto box = native_button_text_rect(*gps_, draw.x,
                    visible_end, y, false, nullptr, false, true))
                right = std::min(right, box->x + box->w);
            // PE 1c695d draws texpos_building_jobs_remove beside every list
            // record, at the same three-row baseline. Prove all nine cells;
            // no screenshot coordinate or number of records is involved.
            for (int x = draw.x + 1; x + 3 <= right; ++x) {
                bool remove = false;
                for (const int middle : {y, y - 1, y + 1})
                    if (native_square_button_at(*gps_, x, middle,
                            native_texture_building_jobs_remove(*gps_))) {
                        remove = true;
                        break;
                    }
                if (remove) { right = x; break; }
            }
            // The detail title's separately drawn Remove button supplies
            // the same right bound when this is the other bound call site.
            for (const int control_y : {y, y - 1, y + 1}) {
                if (control_y < 0 || control_y >= gps_->dimy) continue;
                for (const auto &control : split_text_fields(rows[control_y])) {
                    if (control.text != "Remove" || control.start <= draw.x || control.start >= right)
                        continue;
                    if (const auto box = native_button_text_rect(*gps_,
                            control.start, control.end, control_y);
                            box && box->x > draw.x && box->y <= y && box->y + box->h > y)
                        right = std::min(right, box->x - 1);
                }
            }
            const int length = std::min(right - draw.x, static_cast<int>(draw.source.size()));
            if (length <= 0 || rows[y].compare(draw.x, length, draw.source, 0, length) != 0)
                continue;
            const std::string visible = draw.source.substr(0, length);
            Match title{draw.x, y, length, kWorldSiteRowRule,
                target ? *target : native_text_to_utf8(complete), visible};
            title.native_hover_untranslated = !target;
            if (!target) title.native_help_review_source = complete;
            title.layout_x = draw.x;
            title.layout_y = y;
            title.layout_length = right - draw.x;
            title.layout_clip_right = right;
            title.layout_left = true;
            title.layout_foreground_rgb = (cell[1] << 16) | (cell[2] << 8) | cell[3];
            std::fill_n(rows[y].begin() + draw.x, length, ' ');
            matches.push_back(std::move(title));
        }
    }
    for (int y = 0; y < gps_->dimy; ++y) {
        if (only_y >= 0 && y != only_y) continue;
        for (const auto &field : split_text_fields(rows[y])) {
            std::string complete = field.text;
            for (const auto &capture : captures)
                if (capture.x == field.start && capture.y == y &&
                        capture.visible == field.text) {
                    complete = capture.complete;
                    break;
                }
            if (!world_mission_title_source(complete)) continue;
            const auto panel = native_panel_interior(borders, *gps_,
                field.start, field.end, y);
            if (!panel) continue;
            std::optional<SDL_Rect> remove;
            // The button label can be on the next half-font row. Its full
            // native rectangle, rather than that label's baseline, proves
            // that it belongs beside this title and bounds the text width.
            for (int row = y; row < panel->y + panel->h && !remove; ++row) {
                for (const auto &control : split_text_fields(rows[row])) {
                    if (control.text != "Remove" || control.start < field.end ||
                            control.end > panel->x + panel->w) continue;
                    const auto box = native_button_text_rect(*gps_,
                        control.start, control.end, row);
                    if (box && box->x - 1 >= field.end &&
                            box->x + box->w <= panel->x + panel->w &&
                            box->y >= panel->y && box->y <= y &&
                            box->y + box->h > y &&
                            box->y + box->h <= panel->y + panel->h) {
                        remove = box;
                        break;
                    }
                }
            }
            if (!remove) continue;
            auto target = translate_world_mission_title(complete);
            Match title{field.start, y, field.end - field.start, kWorldSiteRowRule,
                target ? std::move(*target) : cp437_to_utf8(complete), field.text};
            title.native_hover_untranslated = !target;
            if (!target) title.native_help_review_source = complete;
            title.layout_x = field.start;
            title.layout_y = y;
            title.layout_length = remove->x - 1 - field.start;
            title.layout_clip_right = remove->x - 1;
            title.layout_left = true;
            bool top = false;
            if (const auto *cell = cell_at(field.start, y, &top))
                title.layout_foreground_rgb = (cell[1] << 16) | (cell[2] << 8) | cell[3];
            std::fill_n(rows[y].begin() + field.start, field.end - field.start, ' ');
            matches.push_back(std::move(title));
        }
    }
}

// Reports contain mission/departure titles or a spoils/tribute party and date.
// Recover the native caption before parsing either field: the scrollbar can
// cover part of a name, season or year, and the detail heading uses ellipses.
void Overlay::append_world_mission_reports(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y) const {
    constexpr std::array<std::string_view, 3> prefixes = {
        "Mission Report:", "Spoils Report:", "Tribute Report:"};
    if (!gps_ || std::none_of(rows.begin(), rows.end(), [&](const auto &row) {
            return std::any_of(prefixes.begin(), prefixes.end(), [&](const auto prefix) {
                return row.find(prefix) != std::string::npos;
            });
        })) return;
    std::vector<std::string> context(gps_->dimy, std::string(gps_->dimx, ' '));
    for (int y = 0; y < gps_->dimy; ++y)
        for (int x = 0; x < gps_->dimx; ++x) {
            bool top = false;
            const auto *cell = cell_at(x, y, &top);
            if (cell && cell[0]) context[y][x] = cell[0];
        }
    const NativePanelBorders borders(*gps_);
    const auto captures = captured_clipped_captions();
    const std::array<std::vector<NativeDrawnTextRow>, 2> draws = {
        captured_native_drawn_text_rows(), captured_native_drawn_text_rows(true)};
    for (int y = 0; y < gps_->dimy; ++y) {
        if (only_y >= 0 && only_y != y) continue;
        size_t at = std::string::npos;
        std::string_view prefix;
        for (const auto candidate : prefixes) {
            const size_t found = context[y].find(candidate);
            if (found < at && has_word_boundaries(context[y], found, found + candidate.size())) {
                at = found;
                prefix = candidate;
            }
        }
        if (at == std::string::npos) continue;
        const int x = static_cast<int>(at);
        const auto panel = native_panel_interior(borders, *gps_,
            x, x + static_cast<int>(prefix.size()), y);
        if (!panel) continue;
        const int panel_right = panel->x + panel->w;
        const auto scrollbars = native_vertical_scrollbar_spans(*gps_, *panel);
        int right = panel_right;
        for (const auto &bar : scrollbars)
            if (y >= bar.y && y < bar.y + bar.h) right = std::min(right, bar.x);
        if (right <= x + static_cast<int>(prefix.size())) continue;
        const std::string source(trim_view(std::string_view(context[y]).substr(x, right - x)));
        bool top = false;
        const auto *first = cell_at(x, y, &top);
        const int color = first ? (first[1] << 16) | (first[2] << 8) | first[3] : -1;
        const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
        constexpr uint32_t halves = (1u << 3) | (1u << 4);
        const uint32_t half = flags ? flags[static_cast<size_t>(x) * gps_->dimy + y] & halves : 0;
        const int mate = half == (1u << 3) ? y + 1 : half == (1u << 4) ? y - 1 : -1;
        const auto same_draw_row = [&](int draw_y) {
            if (draw_y == y) return true;
            if (draw_y != mate || mate < 0 || mate >= gps_->dimy) return false;
            bool mate_top = false;
            const auto *cell = cell_at(x, mate, &mate_top);
            const uint32_t mate_half = flags && cell && mate_top == top ?
                flags[static_cast<size_t>(x) * gps_->dimy + mate] & halves : 0;
            return mate_half == (half == (1u << 3) ? (1u << 4) : (1u << 3)) &&
                context[mate].compare(x, source.size(), source) == 0;
        };
        const auto agrees = [&](std::string_view visible) {
            return trim_view(visible.substr(0, static_cast<size_t>(right - x))) == source;
        };
        std::string complete = source, drawn_source = source;
        for (const auto &capture : captures)
            if (capture.x == x && same_draw_row(capture.y) && agrees(capture.visible)) {
                complete = capture.complete;
                drawn_source = capture.visible;
                break;
            }
        // Draws retain complete_source across cached frames too. Their source
        // is the actually drawn (possibly resized) string, which alone can
        // prove ownership of surviving letters beyond the scrollbar.
        for (const auto &draw : draws[top ? 1 : 0])
            if (draw.x == x && same_draw_row(draw.y) && agrees(draw.source)) {
                drawn_source = draw.source;
                if (!draw.complete_source.empty()) complete = draw.complete_source;
                else if (complete == source) complete = draw.source;
                break;
            }
        const auto heading = translate_legends_text(prefix, false, false);
        std::optional<std::string> target;
        if (prefix == prefixes.front()) {
            const std::string normalized = normalize_utterance(complete);
            const size_t departure = normalized.rfind(" (Set out ");
            if (heading && normalized.starts_with(prefix) && departure != std::string::npos &&
                    departure >= prefix.size() && normalized.ends_with(')')) {
                const auto action = trim_view(std::string_view(normalized).substr(
                    prefix.size(), departure - prefix.size()));
                // The native default goal emits no action before the date.
                const auto mission = action.empty() ? std::optional<std::string>("")
                    : translate_world_mission_title(action);
                const auto date = translate_legends_text("World mission departure: " +
                    normalized.substr(departure + 1), false, false);
                if (mission && date) target = *heading + *mission + *date;
            }
        } else if (heading && std::string_view(complete).starts_with(prefix)) {
            // PE 10f9b4/a0973e append the current season and year after the
            // party, separated by the final comma. Spoils without a squad
            // starts directly with that date. Parse from the right so name
            // punctuation and authored spacing remain part of the name.
            const auto body = trim_view(std::string_view(complete).substr(prefix.size()));
            const size_t comma = body.rfind(", ");
            auto party = comma == std::string_view::npos ? std::string_view{}
                : body.substr(0, comma);
            const auto raw_date = comma == std::string_view::npos ? body
                : body.substr(comma + 2);
            bool dated = false;
            for (const std::string_view season : {"Spring ", "Summer ", "Autumn ", "Winter "}) {
                if (!raw_date.starts_with(season)) continue;
                const auto year = raw_date.substr(season.size());
                dated = !year.empty() && std::all_of(year.begin(), year.end(), [](char ch) {
                    return ch >= '0' && ch <= '9';
                });
                break;
            }
            if (dated) {
                const auto date = translate_legends_text("World report date: " +
                    std::string(raw_date), false, false);
                constexpr std::string_view others = " and others";
                const bool multiple = prefix == prefixes[1] && party.ends_with(others);
                if (multiple) party.remove_suffix(others.size());
                const auto suffix = multiple
                    ? exact_literal_translation("World report participants: and others")
                    : std::optional<std::string>("");
                // A retained report title carries no live squad alias owner.
                // Keep its name bytes instead of guessing authorship from
                // spelling or allowing the prose/name fallback to rewrite it.
                if (date && suffix) target = *heading + native_text_to_utf8(party) + *suffix + *date;
            }
        }
        Match report{x, y, static_cast<int>(source.size()), kWorldSiteRowRule,
            target ? *target : native_text_to_utf8(complete), source};
        report.native_hover_untranslated = !target;
        if (!target) report.native_help_review_source = complete;
        report.layout_x = x;
        report.layout_y = y;
        report.layout_length = right - x;
        report.layout_clip_right = right;
        report.layout_left = true;
        report.layout_foreground_rgb = color;
        std::fill_n(rows[y].begin() + x, source.size(), ' ');
        matches.push_back(std::move(report));

        // Some native rows extend past the scroll control. Suppress only
        // matching exposed bytes from that same draw, without touching the
        // scrollbar, frame or any neighbouring widget. These spans never draw
        // a second copy of the translated report.
        const int end = std::min(panel_right, x + static_cast<int>(drawn_source.size()));
        int run = -1;
        for (int column = right; column <= end; ++column) {
            bool owned = column < end;
            if (owned) {
                for (const auto &bar : scrollbars)
                    if (y >= bar.y && y < bar.y + bar.h &&
                        column >= bar.x && column < bar.x + bar.w) owned = false;
                bool cell_top = false;
                const auto *cell = cell_at(column, y, &cell_top);
                const unsigned char expected = drawn_source[column - x];
                owned = owned && cell && cell_top == top && expected >= ' ' &&
                    expected < 0x7f && cell[0] == expected &&
                    ((cell[1] << 16) | (cell[2] << 8) | cell[3]) == color;
            }
            if (owned && run < 0) run = column;
            if (!owned && run >= 0) {
                const std::string tail = context[y].substr(run, column - run);
                Match hidden{run, y, column - run, kWorldSiteRowRule, {}, tail};
                hidden.native_split_duplicate = true;
                std::fill_n(rows[y].begin() + run, tail.size(), ' ');
                matches.push_back(std::move(hidden));
                run = -1;
            }
        }
    }
}

static size_t world_civilization_trade_label_end(std::string_view source) {
    for (const std::string_view prefix : {"Imports from ", "Exports to ", "Offerings from "}) {
        if (!source.starts_with(prefix)) continue;
        const size_t colon = source.find(':', prefix.size());
        if (colon != std::string_view::npos && colon > prefix.size()) return colon + 1;
    }
    return 0;
}

// Native addst call sites identify these fields before any generic card or
// border recognition. Require their actual current bytes and common row/
// column origins; the source binding never authorizes unrelated grid cells.
std::optional<NativeTextCard> Overlay::capture_native_world_civilization_details() const {
    const std::array batches{captured_native_drawn_text_rows(false),
        captured_native_drawn_text_rows(true)};
    const auto visible = [&](const NativeDrawnTextRow &draw, int right) {
        if (draw.x < 0 || draw.y < 0 || draw.y >= gps_->dimy || draw.x >= right ||
                right > gps_->dimx || draw.source.empty()) return false;
        const size_t count = std::min(draw.source.size(), static_cast<size_t>(right - draw.x));
        for (size_t i = 0; i < count; ++i) {
            bool top = false;
            const auto *cell = cell_at(draw.x + static_cast<int>(i), draw.y, &top);
            const unsigned char ch = cell && cell[0] ? cell[0] : ' ';
            if (!cell || ch != static_cast<unsigned char>(draw.source[i]) ||
                    (ch != ' ' && top != draw.top_layer)) return false;
        }
        return true;
    };
    const auto read = [&](int x, int y, int right) {
        NativeTextCardRow row;
        row.x = x;
        row.y = y;
        for (int column = x; column < right; ++column) {
            bool top = false;
            const auto *cell = cell_at(column, y, &top);
            row.source += cell && cell[0] ? static_cast<char>(cell[0]) : ' ';
            row.foregrounds.push_back(cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : 0xffffff);
        }
        return row;
    };
    for (const auto &draws : batches) {
        struct Heading {
            const NativeDrawnTextRow *prefix;
            int value_x;
            NativeTextCardRow row;
        };
        std::vector<Heading> headings;
        for (const auto &prefix : draws) {
            if (prefix.civilization_field != NativeCivilizationField::TradePrefix ||
                    (prefix.source != "Imports from " && prefix.source != "Exports to " &&
                     prefix.source != "Offerings from ") || !visible(prefix, gps_->dimx)) continue;
            const int entity_x = prefix.x + static_cast<int>(prefix.source.size());
            const auto entity = std::find_if(draws.begin(), draws.end(), [&](const auto &draw) {
                return draw.civilization_field == NativeCivilizationField::TradeEntity &&
                    draw.x == entity_x && draw.y == prefix.y && visible(draw, gps_->dimx);
            });
            if (entity == draws.end()) continue;
            const int colon = entity->x + static_cast<int>(entity->source.size());
            if (colon >= gps_->dimx) continue;
            bool top = false;
            const auto *cell = cell_at(colon, prefix.y, &top);
            if (!cell || cell[0] != ':' || top != prefix.top_layer) continue;
            const auto value = std::find_if(draws.begin(), draws.end(), [&](const auto &draw) {
                return draw.civilization_field == NativeCivilizationField::TradeValue &&
                    draw.y == prefix.y && draw.x > colon && visible(draw, gps_->dimx);
            });
            if (value == draws.end() || value->source.size() > static_cast<size_t>(gps_->dimx - value->x))
                continue;
            int right = value->x + static_cast<int>(value->source.size());
            // Numeric totals append the currency glyph with addchar, just
            // as the heading appends its colon outside the addst captures.
            const auto *currency = right < gps_->dimx ? cell_at(right, prefix.y, &top) : nullptr;
            if (currency && top == value->top_layer && currency[0] == 0x0f) ++right;
            auto row = read(prefix.x, prefix.y, right);
            const size_t gap = static_cast<size_t>(colon + 1 - prefix.x);
            if (std::any_of(row.source.begin() + gap,
                    row.source.begin() + (value->x - prefix.x), [](char ch) { return ch != ' '; })) continue;
            headings.push_back({&prefix, value->x, std::move(row)});
        }
        NativeTextCard card;
        int left = gps_->dimx, right = 0;
        int officials_after = -1;
        for (const auto &trade : headings) {
            if (trade.prefix->source == "Offerings from ") continue;
            const auto offerings = std::find_if(headings.begin(), headings.end(), [&](const auto &heading) {
                return heading.prefix->source == "Offerings from " &&
                    heading.prefix->x == trade.prefix->x && heading.value_x == trade.value_x &&
                    heading.prefix->y > trade.prefix->y;
            });
            if (offerings == headings.end()) continue;
            card.rows = {trade.row, offerings->row};
            left = trade.row.x;
            officials_after = offerings->row.y;
            right = std::max(trade.row.x + static_cast<int>(trade.row.source.size()),
                offerings->row.x + static_cast<int>(offerings->row.source.size()));
            break;
        }
        // Selecting the player's own civilization jumps from PE 1c4aaf
        // straight to the official loop at 1c5e77. It never draws trade
        // headings. The typed name/position draws identify this table on
        // their own, including names overwritten by the next column.
        for (const auto &name : draws) {
            if (name.civilization_field != NativeCivilizationField::OfficialName ||
                    name.y <= officials_after) continue;
            const auto position = std::find_if(draws.begin(), draws.end(), [&](const auto &draw) {
                return draw.civilization_field == NativeCivilizationField::OfficialPosition &&
                    draw.y == name.y && draw.x > name.x && visible(draw, gps_->dimx);
            });
            if (position == draws.end() || !visible(name, position->x) ||
                    position->source.size() > static_cast<size_t>(gps_->dimx - position->x)) continue;
            const std::pair columns{name.x, position->x};
            if (card.civilization_official_columns && *card.civilization_official_columns != columns)
                continue;
            card.civilization_official_columns = columns;
            card.rows.push_back(read(name.x, name.y,
                position->x + static_cast<int>(position->source.size())));
            card.rows.back().civilization_official = true;
            left = std::min(left, name.x);
            // Native PE 1c5f6f advances one name-column width, and
            // 1c5fbf..1c5fcb bounds the office to that same 25 cells.
            // Use the actual two draw origins, not screenshot positions.
            right = std::max(right, std::min(gps_->dimx, position->x + position->x - name.x));
        }
        if (card.rows.empty()) continue;
        std::sort(card.rows.begin(), card.rows.end(), [](const auto &a, const auto &b) { return a.y < b.y; });
        card.interior = {left, card.rows.front().y, right - left,
            card.rows.back().y - card.rows.front().y + 1};
        // Keep the existing agreement-commodity layout when its generic
        // frame is readable. Its absence must not discard the directly
        // bound trade/official fields above.
        const NativePanelBorders borders(*gps_);
        const auto &anchor = card.rows.front();
        if (const auto panel = native_panel_interior(borders, *gps_, anchor.x,
                anchor.x + static_cast<int>(anchor.source.size()), anchor.y)) {
            if (const auto body = capture_panel_text_card(*panel)) {
                for (const auto &row : body->rows)
                    if (std::none_of(card.rows.begin(), card.rows.end(),
                            [&](const auto &known) { return known.y == row.y; }))
                        card.rows.push_back(row);
                std::sort(card.rows.begin(), card.rows.end(),
                    [](const auto &a, const auto &b) { return a.y < b.y; });
            }
        }
        return card;
    }
    return std::nullopt;
}

// The detail popup owns its text independently of the scrollable list.
// It can remain visible when navigation or list records do not enter the
// generic site-card path. The current world viewscreen and both native
// trade headings identify this closed, read-only frame without borrowing
// the neighbouring button's translation or its rectangle.
std::optional<NativeTextCard> Overlay::capture_world_civilization_details(
        const NativeTextCard *civilizations) const {
    if (auto native = capture_native_world_civilization_details()) return native;
    const bool list_context = civilizations && std::any_of(
        civilizations->rows.begin(), civilizations->rows.end(),
        [](const auto &row) { return row.source.find(", \"") != std::string::npos; });
    if (!native_world_map_screen() && !list_context) return std::nullopt;
    const NativePanelBorders borders(*gps_);
    std::set<std::tuple<int, int, int, int>> visited;
    for (int y = 0; y < gps_->dimy; ++y) {
        std::string context(gps_->dimx, ' ');
        for (int x = 0; x < gps_->dimx; ++x) {
            bool top = false;
            const auto *cell = cell_at(x, y, &top);
            if (cell && cell[0]) context[x] = cell[0];
        }
        for (const auto &field : split_text_fields(context)) {
            const size_t end = world_civilization_trade_label_end(field.text);
            if (!end) continue;
            const auto panel = native_panel_interior(borders, *gps_,
                field.start, field.start + static_cast<int>(end), y);
            if (!panel || !visited.emplace(panel->x, panel->y, panel->w, panel->h).second)
                continue;
            auto card = capture_panel_text_card(*panel);
            if (!card) continue;
            bool trade = false, offerings = false;
            for (const auto &row : card->rows) {
                const size_t label_end = world_civilization_trade_label_end(row.source);
                if (row.x != field.start || !label_end || label_end >= row.source.size() ||
                        row.source[label_end] != ' ' ||
                        row.source.find_first_not_of(' ', label_end) == std::string::npos) continue;
                if (row.source.starts_with("Offerings from ")) offerings = true;
                else trade = true;
            }
            if (trade && offerings) return card;
        }
    }
    return std::nullopt;
}

// Totals and diplomatic assessments share the same two-column summary.
// Claim the entire value (including multiword assessments) before ordinary
// word rules can translate and centre its pieces at unrelated positions.
void Overlay::append_world_civilization_trade_summary(const NativeTextCard &details,
        std::vector<std::string> &rows, std::vector<Match> &matches, int only_y) const {
    struct SummaryRow {
        const NativeTextCardRow *row;
        size_t label_end, value_at;
    };
    std::vector<SummaryRow> summary;
    const auto &panel = details.interior;
    int left = panel.x + panel.w, middle = left;
    for (const auto &row : details.rows) {
        const size_t end = world_civilization_trade_label_end(row.source);
        if (!end || end >= row.source.size() || row.source[end] != ' ') continue;
        const size_t value = row.source.find_first_not_of(' ', end);
        if (value == std::string::npos) continue;
        summary.push_back({&row, end, value});
        left = std::min(left, row.x);
        middle = std::min(middle, row.x + static_cast<int>(value));
    }
    if (summary.empty() || middle <= left) return;
    // Use the live value column, not the width of a translated label
    // or a saved name. Leave the frame's existing right-hand inset.
    const int right = panel.x + panel.w - (left - panel.x);
    if (right <= middle) return;
    for (const auto &record : summary) {
        const auto &row = *record.row;
        const auto append = [&](size_t begin, size_t end, int column_left,
                                int column_right, bool value) {
            const std::string source = row.source.substr(begin, end - begin);
            const std::vector<int> colors(row.foregrounds.begin() + begin,
                row.foregrounds.begin() + end);
            std::vector<int> translated_colors;
            std::optional<std::string> target;
            if (value) {
                target = exact_literal_translation(
                    "World civilization trade status: " + normalize_utterance(source));
                // Numeric trade totals are native values, not prose.
                // Other unknown values remain complete, never partly
                // translated by unrelated word senses.
                if (!target && std::none_of(source.begin(), source.end(),
                        [](unsigned char ch) { return (ch >= 'a' && ch <= 'z') ||
                            (ch >= 'A' && ch <= 'Z'); })) target = native_text_to_utf8(source);
            } else {
                target = translate_help_paragraph(source, colors, translated_colors, true);
            }
            Match match{row.x + static_cast<int>(begin), row.y,
                static_cast<int>(source.size()), kWorldSiteRowRule,
                target ? *target : native_text_to_utf8(source), source};
            match.native_hover_untranslated = !target;
            if (!target) match.native_help_review_source = source;
            match.layout_x = column_left;
            match.layout_y = row.y;
            match.layout_length = column_right - column_left;
            match.layout_clip_right = column_right;
            match.layout_left = true;
            match.layout_ellipsize = true;
            match.layout_font_pixels = unified_font_pixels();
            match.layout_lock_font_pixels = true;
            match.layout_line_height_pixels = gps_->tile_pixel_y;
            match.layout_foreground_rgb = colors.front();
            match.layout_glyph_foreground_rgb = std::move(translated_colors);
            std::erase_if(matches, [&](const Match &other) {
                return other.y == match.y && other.x < match.x + match.length &&
                    match.x < other.x + other.length;
            });
            std::fill_n(rows[row.y].begin() + match.x, match.length, ' ');
            if (only_y < 0 || only_y == row.y) matches.push_back(std::move(match));
        };
        append(0, record.label_end, left, middle - 1, false);
        append(record.value_at, row.source.size(), middle, right, true);
    }
}

// Trade agreements occupy the read-only sibling of the civilization list.
// Each commodity is one left-aligned field beside a native percentage, not
// an English-width centring box. Retain ordinary item translation and join
// its runs only after matching; never include the price in the name field.
std::vector<NativeTextCard> Overlay::capture_world_civilization_trade_rows(
        const NativeTextCard &details) const {
    const auto heading = [](std::string_view source) {
        source = trim_view(source);
        for (const std::string_view prefix : {"Trade Agreement (Exports to ",
                "Requests (Imports from "})
            if (source.starts_with(prefix) && source.ends_with(')') &&
                    source.size() > prefix.size() + 1) return true;
        return false;
    };
    const auto &panel = details.interior;
    const int right = panel.x + panel.w;
    std::vector<NativeTextCard> columns;
    NativeTextCard commodities;
    const auto flush = [&]() {
        if (!commodities.rows.empty()) columns.push_back(std::move(commodities));
        commodities = {};
        commodities.interior = {right, panel.y, 0, panel.h};
    };
    flush();
    bool agreement = false;
    for (const auto &row : details.rows) {
        if (heading(row.source)) {
            flush();
            agreement = true;
            continue;
        }
        if (!agreement) continue;
        // The year has its own native indent. Give its existing
        // numeric template that complete row instead of centring
        // the shorter Chinese date inside the English sentence.
        constexpr std::string_view year_prefix = "Agreed in year ";
        const std::string_view source(row.source);
        if (source.starts_with(year_prefix) && source.size() > year_prefix.size() &&
                std::all_of(source.begin() + year_prefix.size(), source.end(),
                    [](char ch) { return ch >= '0' && ch <= '9'; })) {
            NativeTextCard date;
            date.interior = {row.x, row.y, right - row.x, 1};
            date.rows.push_back(row);
            columns.push_back(std::move(date));
            continue;
        }
        // Read the final percentage from its actual native column.
        // A space before its digits separates even a long item name;
        // office/name rows below the agreements never qualify.
        size_t price = source.size();
        if (!source.empty() && source.back() == '%') {
            price = source.size() - 1;
            while (price > 0 && source[price - 1] >= '0' && source[price - 1] <= '9')
                --price;
        }
        if (price == 0 || price + 1 >= source.size() || source[price - 1] != ' ') {
            flush();
            agreement = false;
            continue;
        }
        const auto item = trim_view(source.substr(0, price));
        if (item.empty()) continue;
        const int item_x = row.x + static_cast<int>(item.data() - source.data());
        const int price_x = row.x + static_cast<int>(price);
        const int column_right = commodities.rows.empty() ? price_x - 1
            : std::min(commodities.interior.x + commodities.interior.w, price_x - 1);
        commodities.interior.x = std::min(commodities.interior.x, item_x);
        commodities.interior.w = column_right - commodities.interior.x;
        const size_t offset = static_cast<size_t>(item_x - row.x);
        commodities.rows.push_back({item_x, row.y, std::string(item),
            std::vector<int>(row.foregrounds.begin() + offset,
                row.foregrounds.begin() + offset + item.size())});
    }
    flush();
    return columns;
}

// The selected civilization has a SECOND, read-only frame beside the entity
// list. Its final section is a two-column holder/office table, not prose and
// not the appointment controls on the Nobles page. Native Linux 53.16 draws
// names at 0x1434030 and offices at 0x14340ab; the latter clips the COMPLETE
// office/territory/profession string to 25 cells via the shared resize hook.
void Overlay::append_world_civilization_officials(const NativeTextCard &details,
        std::vector<std::string> &rows, std::vector<Match> &matches, int only_y) const {
    // The independent detail capture proves this trade/official frame.
    // Neither another card nor translation coverage establishes ownership.
    const auto captures = captured_clipped_captions();
    const std::array draws{captured_native_drawn_text_rows(false),
        captured_native_drawn_text_rows(true)};
    const auto complete_source = [&](int x, int y, std::string_view visible, int right) {
        bool top = false;
        cell_at(x, y, &top);
        const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
        constexpr uint32_t halves = (1u << 3) | (1u << 4);
        const uint32_t half = flags ? flags[static_cast<size_t>(x) * gps_->dimy + y] & halves : 0;
        const int mate = half == (1u << 3) ? y + 1 : half == (1u << 4) ? y - 1 : -1;
        const auto same_draw_row = [&](int draw_y) {
            if (draw_y == y) return true;
            if (draw_y != mate || mate < 0 || mate >= gps_->dimy) return false;
            bool mate_top = false;
            const auto *cell = cell_at(x, mate, &mate_top);
            const uint32_t mate_half = flags && cell && mate_top == top
                ? flags[static_cast<size_t>(x) * gps_->dimy + mate] & halves : 0;
            if (mate_half != (half == (1u << 3) ? (1u << 4) : (1u << 3))) return false;
            for (size_t at = 0; at < visible.size(); ++at) {
                bool other_top = false;
                const auto *other = cell_at(x + static_cast<int>(at), mate, &other_top);
                if (!other || other_top != top ||
                    (other[0] ? other[0] : ' ') != static_cast<unsigned char>(visible[at]))
                    return false;
            }
            return true;
        };
        // The following office draw can overwrite the end of a long name.
        // Match only the physical column; retain the formatter's full source
        // for translation without consuming any cells in the other column.
        const auto agrees = [&](std::string_view drawn) {
            return trim_view(drawn.substr(0, static_cast<size_t>(right - x))) == visible;
        };
        std::string complete(visible);
        for (const auto &capture : captures)
            if (capture.x == x && same_draw_row(capture.y) && agrees(capture.visible)) {
                complete = capture.complete;
                break;
            }
        // Draw records retain pre-shortening text across cached frames after
        // the clipping registry's epoch has expired.
        for (const auto &draw : draws[top ? 1 : 0])
            if (draw.x == x && same_draw_row(draw.y) && agrees(draw.source)) {
                if (!draw.complete_source.empty()) complete = draw.complete_source;
                else if (complete == visible) complete = draw.source;
                break;
            }
        return complete;
    };
    const auto translated = [](const std::optional<std::string> &text) {
        return text && !text->empty() && std::none_of(text->begin(), text->end(),
            [](unsigned char ch) { return (ch >= 'A' && ch <= 'Z') ||
                (ch >= 'a' && ch <= 'z'); });
    };
    const auto office_part = [&](std::string_view raw) -> std::optional<std::string> {
        const std::string source = normalize_utterance(raw);
        // Do not guess the missing territory from an ellipsis. The current
        // native capture, not a saved world's name, supplies that suffix.
        if (source.empty() || source.ends_with("...")) return std::nullopt;
        // The lower-case Legends namespace owns office senses, before
        // capitalized UI labels such as General = 常规. Case-sensitive
        // occupations, species prefixes and office territories then use the
        // shared role parser. An office's own "of" (captain of the guard)
        // must resolve before considering an appended territory.
        auto target = translate_legends_term(lower(source));
        if (!translated(target)) target = translate_unit_profession(source);
        return translated(target) ? target : std::nullopt;
    };
    const auto office_result = [&](std::string_view source) -> dfcn::TranslationResult {
        dfcn::TranslationResult result;
        result.kind = "world-office";
        result.owner = "native-world-official-table";
        for (size_t begin = 0; begin < source.size();) {
            // Native 53.16's office formatter appends ONE '/' byte at
            // 0x1dcd852..0x1dcd861, then the profession: Queen/Carpenter.
            // Spaces belong to our display, not to the source grammar.
            // office_part trims each operand, also accepting spaced forms.
            const size_t slash = source.find('/', begin);
            const size_t end = slash == std::string_view::npos ? source.size() : slash;
            const auto part = office_part(source.substr(begin, end - begin));
            const auto raw = source.substr(begin, end - begin);
            if (trim_view(raw).empty() || trim_view(raw).ends_with("..."))
                return dfcn::TranslationResult{};
            if (translated(part)) result.append(dfcn::TranslationResult::translated(raw,
                *part, "office-component"), begin);
            else result.append(preserve_native_translation(raw, "office-component"), begin);
            if (slash == std::string_view::npos) {
                if (result.has_untranslated() && std::count(source.begin(), source.end(), '/') > 1)
                    return preserve_native_translation(source, "world-office");
                result.source.assign(source);
                result.consumed = source.size();
                result.resource_revision = RULESETS.resource_revision();
                return result;
            }
            result.append(dfcn::TranslationResult::translated("/", " / ", "office-separator"), slash);
            begin = slash + 1;
        }
        return dfcn::TranslationResult{};
    };
    const auto office = [&](std::string_view source) -> std::optional<std::string> {
        const auto result = office_result(source);
        // A bare field still needs vocabulary evidence to anchor a table.
        // Native columns and an explicit office/profession slash already
        // prove ownership independently of this translation coverage.
        if (result.usable() && std::any_of(result.fragments.begin(), result.fragments.end(),
                [](const auto &fragment) { return fragment.status == dfcn::TranslationStatus::Translated &&
                    fragment.kind == "office-component"; })) return result.target;
        return std::nullopt;
    };
    const auto &panel = details.interior;
    const int right = panel.x + panel.w;
    for (const auto &line : details.rows) {
        const int y = line.y;
        auto fields = split_text_fields(line.source);
        for (auto &field : fields) { field.start += line.x; field.end += line.x; }
        if (details.civilization_official_columns) {
            const auto [left, middle] = *details.civilization_official_columns;
            if (line.x != left || middle <= left ||
                    !line.civilization_official ||
                    line.source.size() <= static_cast<size_t>(middle - left)) continue;
            const auto name = trim_view(std::string_view(line.source).substr(0, middle - left));
            const auto position = trim_view(std::string_view(line.source).substr(middle - left));
            if (name.empty() || position.empty()) continue;
            fields = {{left, left + static_cast<int>(name.size()), std::string(name)},
                {middle, middle + static_cast<int>(position.size()), std::string(position)}};
        }
        for (size_t i = 1; i < fields.size(); ++i) {
            const auto &holder = fields[i - 1], &position = fields[i];
            // Within this proven detail frame, the holder column and native
            // office/profession pair anchor the table. Bare positions retain
            // the stricter personal-name and reviewed-office proof.
            const std::string name = complete_source(
                holder.start, y, holder.text, position.start);
            const auto person = translate_unit_identity(name);
            const std::string position_source = complete_source(
                position.start, y, position.text, right);
            const size_t slash = position_source.find('/');
            const bool compound_office = slash != std::string::npos &&
                !trim_view(std::string_view(position_source).substr(0, slash)).empty() &&
                !trim_view(std::string_view(position_source).substr(slash + 1)).empty();
            // A native office/profession pair identifies the typed field even
            // when a modded term is unknown. Translation coverage must not
            // send the entire table back to fragmented English-span layout.
            if (!details.civilization_official_columns && !compound_office &&
                    (!translation_complete_with_native_nicknames(person, name) ||
                    !office(position_source))) continue;
            const int left = holder.start, middle = position.start;
            const auto append = [&](const NativeTextCardRow &row, const LogicalTextField &field,
                                    int column_left, int column_right, bool is_office) {
                const int x = row.x + field.start;
                const std::string source = complete_source(x, row.y, field.text, column_right);
                auto result = is_office ? office_result(source) : dfcn::TranslationResult{};
                auto target = is_office ? (result.usable() ? std::optional<std::string>(result.target) : std::nullopt)
                    : translate_legends_name(source, true);
                if (!is_office && !translation_complete_with_native_nicknames(target, source)) target.reset();
                if (!is_office && target) result = dfcn::TranslationResult::translated(source,
                    *target, "official-holder");
                if (!result.usable()) result = preserve_native_translation(source,
                    is_office ? "world-office" : "official-holder");
                result.owner = "native-world-official-table";
                Match match{x, row.y, field.end - field.start, kWorldSiteRowRule,
                    target ? *target : cp437_to_utf8(source), field.text};
                match.translation_result = std::make_shared<const dfcn::TranslationResult>(std::move(result));
                match.native_hover_untranslated = !target;
                if (!target) match.native_help_review_source = source;
                match.layout_x = column_left;
                match.layout_y = row.y;
                match.layout_length = column_right - column_left;
                match.layout_clip_right = column_right;
                match.layout_left = true;
                match.layout_foreground_rgb = row.foregrounds[field.start];
                match.layout_font_pixels = std::clamp(
                    static_cast<int>(gps_->tile_pixel_y * config_.font_scale), 1, gps_->tile_pixel_y);
                match.layout_lock_font_pixels = true;
                match.layout_line_height_pixels = gps_->tile_pixel_y;
                std::erase_if(matches, [&](const Match &other) {
                    return other.y == match.y && other.x < match.x + match.length &&
                        match.x < other.x + other.length;
                });
                std::fill_n(rows[row.y].begin() + x, field.text.size(), ' ');
                if (only_y < 0 || only_y == row.y) matches.push_back(std::move(match));
            };
            // The table is one contiguous section of this shared frame.
            // Agreement prose above it can cross the same column boundary;
            // splitting the whole card would claim that sentence as a name
            // and an office before the complete UI message matcher sees it.
            const auto table_row = [&](const NativeTextCardRow &row) {
                if (details.civilization_official_columns && !row.civilization_official) return false;
                if (row.x != left || row.x + static_cast<int>(row.source.size()) <= middle)
                    return false;
                const int boundary = middle - row.x;
                return row.source[boundary] != ' ' &&
                    !trim_view(std::string_view(row.source).substr(0, boundary)).empty() &&
                    !trim_view(std::string_view(row.source).substr(boundary)).empty();
            };
            const auto anchor = std::find_if(details.rows.begin(), details.rows.end(),
                [&](const NativeTextCardRow &row) { return row.y == y && table_row(row); });
            if (anchor == details.rows.end()) continue;
            size_t first_record = static_cast<size_t>(anchor - details.rows.begin());
            size_t after_record = first_record + 1;
            while (first_record > 0 &&
                    (details.civilization_official_columns ||
                     details.rows[first_record - 1].y + 1 == details.rows[first_record].y) &&
                    table_row(details.rows[first_record - 1])) --first_record;
            while (after_record < details.rows.size() &&
                    (details.civilization_official_columns ||
                     details.rows[after_record - 1].y + 1 == details.rows[after_record].y) &&
                    table_row(details.rows[after_record])) ++after_record;
            // Geometry still owns every record inside the section, including
            // unknown names, names touching the office column and nicknames
            // with multiple spaces. Half-font rows keep their physical y.
            int records = 0;
            for (size_t record = first_record; record < after_record; ++record) {
                const auto &row = details.rows[record];
                const int boundary = middle - row.x;
                const auto name_field = trim_view(std::string_view(row.source).substr(0, boundary));
                const auto office_field = trim_view(std::string_view(row.source).substr(boundary));
                append(row, {0, static_cast<int>(name_field.size()), std::string(name_field)},
                    left, middle, false);
                append(row, {boundary, boundary + static_cast<int>(office_field.size()),
                    std::string(office_field)}, middle, right, true);
                ++records;
            }
            static bool logged = false;
            if (records > 0 && !logged) {
                log_line("INFO", "World map civilization official table captured: records=" +
                    std::to_string(records) + "; columns=" + std::to_string(left) + "," +
                    std::to_string(middle) + "," + std::to_string(right));
                logged = true;
            }
            return;
        }
    }
}

void Overlay::layout_world_site_card(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer || gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    const auto settings = native_ui_settings();
    for (Match &caption : prepared_matches_) {
        if (caption.rule != kWorldSiteRowRule || caption.native_split_duplicate ||
            caption.target.empty() || !caption.native_picture_caption_box ||
            (caption.source != "Attack" && caption.source != "Request workers" &&
                caption.source != "Diplomacy" &&
                std::find(world_diplomacy_actions.begin(), world_diplomacy_actions.end(),
                    caption.source) == world_diplomacy_actions.end())) continue;
        const auto &box = *caption.native_picture_caption_box;
        std::vector<Match *> lines;
        for (Match &line : prepared_matches_) {
            const auto &other = line.native_picture_caption_box;
            if (line.rule == kWorldSiteRowRule && !line.native_split_duplicate &&
                !line.target.empty() && other && other->x == box.x && other->y == box.y &&
                other->w == box.w && other->h == box.h) lines.push_back(&line);
        }
        if (lines.empty() || lines.size() > static_cast<size_t>(box.h)) continue;
        std::sort(lines.begin(), lines.end(), [](const Match *a, const Match *b) {
            return a->y < b->y;
        });
        // Half-font duplicates have now been normalized. Centre the actual
        // caption/reason rows together, retaining their separate colors.
        for (size_t row = 0; row < lines.size(); ++row) {
            lines[row]->layout_y = box.y + static_cast<int>(row);
            lines[row]->layout_pixel_y =
                (box.h - static_cast<int>(lines.size())) * gps_->tile_pixel_y / 2;
            lines[row]->layout_fixed_baseline = true;
        }
        if (!settings || !settings->classic) continue;
        std::array<int32_t, 9> skin{};
        const auto current = native_button_text_rect(*gps_, caption.x,
            caption.x + caption.length, caption.y, true, &skin);
        if (!current || current->x != box.x || current->y != box.y ||
            current->w != box.w || current->h != box.h) continue;
        // Restore only the overwritten lower-edge runs, including native
        // padding around the reason. Surviving edge cells supply the same
        // frame's glyph and palette through the shared border renderer.
        const int bottom = box.y + box.h - 1;
        for (int x = box.x; x < box.x + box.w;) {
            if (native_ui_skin_at(*gps_, x, bottom, skin[7], true)) { ++x; continue; }
            const int first = x++;
            while (x < box.x + box.w &&
                !native_ui_skin_at(*gps_, x, bottom, skin[7], true)) ++x;
            NativeBorderRepair repair;
            repair.cells = {first, bottom, x - first, 1};
            repair.cell[0] = static_cast<unsigned char>(skin[7] & 0xff);
            const int foreground = ((skin[7] >> 8) & 7) + ((skin[7] & 0x4000) ? 8 : 0);
            const int background = (skin[7] >> 11) & 7;
            std::copy_n(gps_->uccolor[foreground], 3, repair.cell.begin() + 1);
            std::copy_n(gps_->uccolor[background], 3, repair.cell.begin() + 4);
            native_border_repairs_.push_back(repair);
        }
    }
    for (Match &identity : prepared_matches_) {
        if (identity.rule != kWorldSiteRowRule || identity.native_split_duplicate ||
                identity.target.empty() || identity.source.find(", \"") == std::string::npos)
            continue;
        std::array<int32_t, 9> skin{};
        const auto box = native_button_text_rect(*gps_, identity.x,
            identity.x + identity.length, identity.y, true, &skin, false, true);
        if (!box || identity.y != box->y + 1) continue;
        const auto status = std::find_if(prepared_matches_.begin(), prepared_matches_.end(),
            [&](const Match &match) {
                return match.rule == kWorldSiteRowRule && !match.native_split_duplicate &&
                    match.x == identity.x && match.y == identity.y + 1 &&
                    !match.target.empty() && world_civilization_relationship(
                        normalize_utterance(match.source));
            });
        if (status == prepared_matches_.end()) continue;
        // Keep the source spans for suppression while both complete rows
        // share the proven button width, left inset and vertical centering.
        // This bounds marker also prevents the common row fitter treating
        // the old relationship row's surviving bottom edge as another field.
        int row = 0;
        for (Match *part : {&identity, &*status}) {
            part->native_picture_caption_box = *box;
            part->layout_x = std::max(box->x, identity.x);
            part->layout_length = box->x + box->w - part->layout_x;
            part->layout_clip_right = box->x + box->w;
            part->layout_y = box->y + row++;
            part->layout_pixel_y = (box->h - 2) * gps_->tile_pixel_y / 2;
            part->layout_fixed_baseline = true;
            part->layout_left = true;
        }
        if (settings && settings->classic) {
            const auto repair = [&](SDL_Rect cells, int part) {
                NativeBorderRepair border;
                border.cells = cells;
                border.cell[0] = static_cast<unsigned char>(skin[part] & 0xff);
                const int foreground = ((skin[part] >> 8) & 7) +
                    ((skin[part] & 0x4000) ? 8 : 0);
                const int background = (skin[part] >> 11) & 7;
                std::copy_n(gps_->uccolor[foreground], 3, border.cell.begin() + 1);
                std::copy_n(gps_->uccolor[background], 3, border.cell.begin() + 4);
                native_border_repairs_.push_back(border);
            };
            if (identity.x == box->x - 1) {
                repair({box->x - 1, identity.y, 1, 1}, 3);
                repair({box->x - 1, status->y, 1, 1}, 6);
            }
            const int end = std::min(box->x + box->w, status->x + status->length);
            if (end > box->x) repair({box->x, status->y, end - box->x, 1}, 7);
        }
    }
    std::map<std::pair<int, int>, std::vector<std::vector<Match *>>> columns;
    for (Match &match : prepared_matches_) {
        // Trade summary fields already use the shared font and a bounded
        // column. The ordinary row fitter may expand its width for long
        // text, so leave these explicitly ellipsized fields in their boxes.
        // Successful history paragraphs already have measured line breaks
        // and one locked font. Only their untranslated fallbacks join the
        // ordinary card-row fitter; never resize individual Chinese lines.
        if ((match.rule != kWorldSiteRowRule &&
                !(match.rule == kWorldSiteHistoryRule && match.native_hover_untranslated)) ||
                match.target.empty() || match.native_split_duplicate || match.layout_ellipsize)
            continue;
        const int left = match.layout_x, right = left + match.layout_length;
        columns[{left, right}].push_back({&match});
    }
    if (columns.empty()) return;
    // One measured font for the fact rows, including unknown fallback.
    // Preserve complete names and the native section/footer rows, without
    // moving the map controls or changing any source suppression spans.
    // Adjacent frames and the holder/office columns have independent bounds.
    // Never fit all of them against the last match's civilization-list width.
    for (const auto &[bounds, rows] : columns)
        layout_fortress_text_rows(renderer, rows, bounds.first, bounds.second, true);
    static bool logged = false;
    if (!logged) {
        log_line("INFO", "World map region/site/civilization cards: complete identities and offices, self-contained site-action modals, centered action/status blocks without name fallback, layer-checked source suppression, bounded columns and dated-event paragraphs");
        logged = true;
    }
}
