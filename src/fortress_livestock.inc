// Cat abbreviates Category in the native sort-caption widget, including
// empty Justice, Labor and creature tables. Resolve it once by the current
// control skin, never by animal vocabulary or the selected page's contents.
void Overlay::layout_fortress_sort_captions() {
    if (!gps_) return;
    const auto settings = native_ui_settings();
    if (!settings) return;
    const auto category = exact_literal_translation("Category");
    if (!category) return;
    for (Match &match : prepared_matches_) {
        if (match.source != "Cat" || match.target.empty() || match.native_split_duplicate) continue;
        const int y = match.native_split_text ? match.native_split_top_y : match.y;
        const auto span = native_sort_caption_span(*gps_, match.x,
            match.x + match.length, y, *settings);
        if (!span) continue;
        match.target = *category;
        match.layout_x = span->first;
        match.layout_length = span->second - span->first;
        match.layout_clip_right = span->second;
        match.layout_box_pixel_x = -1;
        match.layout_box_pixel_width = 0;
        match.layout_left = false;
    }
}

// Dead/missing units have no Recenter/Inspect pair. Their joined portrait and
// complete caption frame still own the same three-row record and sort slots.
// Share this proof between source capture and layout so unknown names receive
// the typed identity grammar as well as the ordinary roster alignment.
static std::optional<SDL_Rect> native_fortress_creature_record_caption(
        const graphicst &gps, int name_left, int activity_left, int middle) {
    const auto caption = native_picture_caption_rect(
        gps, name_left, middle, false, nullptr, true);
    if (!caption || caption->x != name_left || caption->y != middle - 1 ||
        caption->h != 3 || caption->x + caption->w <= activity_left ||
        caption->x + caption->w >= gps.dimx) return std::nullopt;
    // Also require the portrait for graphical light/dark rectangle states,
    // where the generic caption reader permits a standalone menu button.
    for (int picture = name_left - 3; picture >= 0; --picture) {
        const int right = native_picture_box_right(gps, picture, middle);
        if (right == name_left || right == name_left - 1) return caption;
    }
    return std::nullopt;
}

static bool native_fortress_creature_action_at(const graphicst &gps, int x, int middle) {
    if (native_caption_action_button_at(gps, x, middle)) return true;
    for (const auto &skin : native_texture_button_pets_livestock(gps))
        if (native_square_button_at(gps, x, middle, skin)) return true;
    return false;
}

struct NativeFortressOwnershipColumn {
    int right;
    int32_t top_skin;
};

// The sort band and unit controls already identify this classic record.
// Its ownership field is a separate strip: the owner's name overwrites the
// upper rail, and pet actions replace its right cap. The intact lower rail
// and complete current action/cap bound the field without borrowing a frame
// from the name column on the other side of Recenter/Inspect.
static std::optional<NativeFortressOwnershipColumn> native_fortress_ownership_column(
        const graphicst &gps, int left, int middle,
        const std::array<std::string, 3> &rows) {
    if (left < 0 || left >= gps.dimx || middle < 1 || middle + 1 >= gps.dimy)
        return std::nullopt;
    const int32_t (*skins[])[3] = {
        native_texture_button_rectangle(gps),
        native_texture_button_rectangle_selected(gps),
        native_texture_button_rectangle_light(gps),
        native_texture_button_rectangle_dark(gps),
    };
    for (const auto *skin : skins) {
        for (int orientation = 0; orientation < 3; ++orientation) {
            const auto tile = [&](int column, int row) {
                if (orientation == 1) return skin[row][column];
                return skin[orientation == 2 && column > 0 ? 3 - column : column][row];
            };
            if ((tile(1, 1) & 0xff) != ' ') continue;
            for (int x = left; x < gps.dimx; ++x) {
                bool cap = true;
                for (int row = 0; row < 3; ++row)
                    cap = cap && native_ui_skin_at(
                        gps, x, middle + row - 1, tile(2, row), true);
                if (cap || native_fortress_creature_action_at(gps, x, middle)) {
                    if (x > left) return NativeFortressOwnershipColumn{x, tile(1, 0)};
                    break;
                }
                const auto caption = [&](int row) {
                    return !is_cp437_box_separator(rows[row], x) &&
                        native_ui_skin_at(gps, x, middle + row - 1,
                            tile(1, 1), true, true, false, false, true);
                };
                if ((!native_ui_skin_at(gps, x, middle - 1, tile(1, 0), true) &&
                        !caption(0)) || !caption(1) ||
                    !native_ui_skin_at(gps, x, middle + 1, tile(1, 2), true)) break;
            }
        }
    }
    return std::nullopt;
}

// Own each identity and activity before generic word matching. In particular,
// "Make four pear wood ..." is a truncated native widget, not independent
// translations of an action, material and punctuation. Its original_str is
// captured at render time by the shared native caption hook.
void Overlay::append_fortress_creature_activities(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y) const {
    const auto settings = native_ui_settings();
    if (!settings) return;
    // Suppression can scan only one native layer. Read page/row identity from
    // the same composed grid as Present, then claim only byte-identical spans
    // in the supplied layer. Keep this snapshot immutable while claiming the
    // upper/lower halves so the second half retains the same complete source.
    std::vector<std::string> native_rows(gps_->dimy, std::string(gps_->dimx, ' '));
    for (int y = 0; y < gps_->dimy; ++y)
        for (int x = 0; x < gps_->dimx; ++x) {
            const auto ch = visible_char_at(x, y);
            if (ch) native_rows[y][x] = static_cast<char>(ch);
        }
    int tabs_y = -1;
    for (int y = 0; y < gps_->dimy; ++y) {
        const auto &row = native_rows[y];
        const auto resident = row.find("Residents");
        const auto citizen = row.find("Citizens");
        const auto pet = row.find("Pets/Livestock"), other = row.find("Other");
        const auto dead = row.find("Dead/Missing");
        if (std::min(resident, citizen) < pet && pet < other && other < dead &&
            dead != std::string::npos) { tabs_y = y; break; }
    }
    if (tabs_y < 0) return;
    int header_y = -1;
    std::vector<int> sorts;
    for (int y = tabs_y + 1; y < gps_->dimy; ++y) {
        auto columns = native_sort_columns(*gps_, y, *settings);
        if ((columns.size() != 4 && columns.size() != 5) ||
            columns[2] + 9 > gps_->dimx ||
            native_rows[y].compare(columns[0] + 5, 4, "Name") != 0 ||
            native_rows[y].compare(columns[1] + 5, 3, "Cat") != 0 ||
            native_rows[y].compare(columns[2] + 5, 4, "Prof") != 0) continue;
        header_y = y;
        sorts = std::move(columns);
        break;
    }
    if (header_y < 0) return;
    const int left = sorts[3];
    const int boundary = sorts.size() == 5 ? sorts[4] : gps_->dimx;
    const auto captures = captured_clipped_captions();
    const auto complete_caption = [&](int x, int y, int right,
                                      const std::string &visible,
                                      std::optional<std::string> *unit_target = nullptr) {
        if (right <= x) return visible;
        bool top = false;
        cell_at(x, y, &top);
        const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
        const uint32_t half = flags ? flags[static_cast<size_t>(x) * gps_->dimy + y] &
            ((1u << 3) | (1u << 4)) : 0;
        const int mate = half == (1u << 3) ? y + 1 : half == (1u << 4) ? y - 1 : -1;
        const auto same_draw_row = [&](int draw_y) {
            if (draw_y == y) return true;
            if (draw_y != mate || mate < 0 || mate >= gps_->dimy) return false;
            bool mate_top = false;
            const auto *cell = cell_at(x, mate, &mate_top);
            const uint32_t mate_half = flags && cell && mate_top == top
                ? flags[static_cast<size_t>(x) * gps_->dimy + mate] &
                    ((1u << 3) | (1u << 4)) : 0;
            return mate_half == (half == (1u << 3) ? (1u << 4) : (1u << 3)) &&
                native_rows[mate].compare(x, visible.size(), visible) == 0;
        };
        if (unit_target && is_bare_pike(visible)) {
            for (const auto &draw : captured_native_drawn_text_view(top)) {
                if (draw.x == x && same_draw_row(draw.y) && draw.source == visible &&
                        draw.unit_identity_owner && draw.unit_identity_ready &&
                        draw.unit_identity_target && !draw.unit_identity_target->empty()) {
                    *unit_target = *draw.unit_identity_target;
                    break;
                }
            }
        }
        for (const auto &capture : captures) {
            if (capture.x != x) continue;
            // The widget can draw past this column's next native control.
            // Its capture still contains those covered bytes (including the
            // dots), while the field below owns only [x, right). Compare the
            // SAME bounded span and trailing-space policy before recovering
            // original_str; never infer a title from an arbitrary prefix.
            std::string_view field(capture.visible);
            field = field.substr(0, std::min(field.size(),
                static_cast<size_t>(right - x)));
            while (!field.empty() && field.back() == ' ') field.remove_suffix(1);
            if (field != visible) continue;
            if (same_draw_row(capture.y)) return capture.complete;
        }
        // A caption that fits text_truncated's minimum width keeps str ==
        // original_str and never enters the clipped-caption registry. Later
        // buttons can still cover its final cells. The shared draw hook read
        // that complete NativeString before those controls overwrote it.
        // Recover it with the same column boundary, layer and half-row proof,
        // regardless of the activity's verb, skill, object or visible length.
        Match field{x, y, static_cast<int>(visible.size()), -1, {}, visible};
        if (const auto source = native_drawn_text_for_row(field, right, top)) return *source;
        if (same_draw_row(mate)) {
            field.y = mate;
            if (const auto source = native_drawn_text_for_row(field, right, top)) return *source;
        }
        return visible;
    };
    // Source capture already owns the current record and its complete native
    // text. Keep those bounds with the match: the producer can refresh the
    // logical grid before Present lays out this same captured field.
    const auto bind_field = [&](Match &match, const SDL_Rect &box, int field_left,
                                int field_right) {
        match.native_fortress_creature_field = std::pair{field_left, field_right};
        match.native_picture_caption_box = box;
        match.layout_x = field_left;
        match.layout_y = match.y;
        match.layout_length = field_right - field_left;
        match.layout_clip_right = field_right;
        match.layout_left = true;
        match.layout_prepared = true;
        match.layout_line_height_pixels = gps_->tile_pixel_y;
        bool top = false;
        const auto *cell = cell_at(match.x, match.y, &top);
        if (cell)
            match.layout_foreground_rgb = (cell[1] << 16) | (cell[2] << 8) | cell[3];
    };
    // The native unit widget uses either one name/profession caption or a
    // name followed by a separate profession line. Own those same complete
    // slots before literals can replace just a given name or title word.
    // Current row buttons establish the slot even when its vocabulary is
    // unseen; native captures recover abbreviations without guessing roots.
    const int name_left = sorts[0];
    const auto recenter = native_texture_button_stocks_recenter(*gps_);
    const auto inspect = native_texture_button_stocks_view_item(*gps_);
    std::vector<int> record_middles(gps_->dimy, -1);
    std::vector<int> record_rights(gps_->dimy, boundary);
    for (int middle = header_y + 2; middle + 1 < gps_->dimy; ++middle) {
        if (only_y >= 0 && (only_y < middle - 1 || only_y > middle + 1)) continue;
        int name_right = -1;
        for (int x = name_left; x + 6 <= left; ++x) {
            if (!native_square_button_at(*gps_, x, middle, recenter)) continue;
            for (int gap = 0; gap <= 2; ++gap) {
                if (x + 6 + gap <= left &&
                    native_square_button_at(*gps_, x + 3 + gap, middle, inspect)) {
                    name_right = x;
                    break;
                }
            }
            if (name_right >= 0) break;
        }
        std::optional<SDL_Rect> caption;
        if (name_right <= name_left) {
            caption = native_fortress_creature_record_caption(
                *gps_, name_left, left, middle);
            if (!caption) continue;
            name_right = left;
        }
        // Classic captions use the middle and lower edge of one record.
        // Its unit controls or complete portrait frame own all three rows,
        // even when a continuation has no name on that physical grid row.
        for (int y = middle - 1; y <= middle + 1; ++y) {
            record_middles[y] = middle;
            if (caption) record_rights[y] = std::min(boundary, caption->x + caption->w);
        }
        bool preceding_identity = false;
        std::string identity_source;
        for (int y = middle - 1; y <= middle + 1; ++y) {
            int first = name_left, end = name_right;
            while (first < end && native_rows[y][first] == ' ') ++first;
            for (int x = first; x < end; ++x)
                if (is_cp437_box_separator(native_rows[y], x)) { end = x; break; }
            while (end > first && native_rows[y][end - 1] == ' ') --end;
            if (first == end) continue;
            const std::string visible = native_rows[y].substr(first, end - first);
            std::optional<std::string> unit_target;
            const std::string source = complete_caption(first, y, name_right, visible, &unit_target);
            // Indented animal status captions use complete glossary entries.
            // The typed name fallback preserves unknown text and would consume
            // "Grazer: requires pasture" before ordinary dictionary matching.
            const bool status = first != name_left;
            // Only the second independent line of a proved identity grants
            // the custom-profession grammar; statuses never establish identity.
            const bool profession = !status && preceding_identity && source != identity_source;
            auto target = is_bare_pike(source) ? std::optional(unit_target.value_or(source))
                : status ? exact_literal_translation(source)
                : profession ? translate_unit_profession(source, true)
                : translate_unit_identity(source, true);
            const bool identity = !status && !profession && target.has_value();
            if (identity) {
                preceding_identity = true;
                identity_source = source;
            }
            if (!target || (only_y >= 0 && y != only_y) ||
                rows[y].compare(first, end - first, visible) != 0) continue;
            bool current = true;
            for (int x = first; x < end; ++x) {
                const auto ch = visible_char_at(x, y);
                if ((ch ? ch : ' ') != static_cast<unsigned char>(visible[x - first]) ||
                    (ch && ch < ' ' && ch != 0x0b && ch != 0x0c)) {
                    current = false;
                    break;
                }
            }
            if (!current) continue;
            Match match{first, y, end - first, -2, std::move(*target), visible};
            bind_field(match, {name_left, middle - 1, name_right - name_left, 3},
                status ? first : name_left, name_right);
            matches.push_back(std::move(match));
            std::fill(rows[y].begin() + first, rows[y].begin() + end, ' ');
        }
        if (sorts.size() == 5) {
            const int owner_left = sorts[4];
            int owner_right = -1;
            // The full picture-backed record owns its right cap. A pet
            // action may overwrite that cap; only this record's complete
            // three-row action can replace it as the ownership boundary.
            const auto record = caption ? caption : native_fortress_creature_record_caption(
                *gps_, name_left, left, middle);
            if (record && record->x + record->w > owner_left)
                owner_right = record->x + record->w;
            const int action_limit = owner_right > owner_left ? owner_right : gps_->dimx;
            for (int x = owner_left; x < action_limit && x + 3 <= gps_->dimx; ++x) {
                bool action = false;
                for (const auto &skin : native_texture_button_pets_livestock(*gps_))
                    action = action || native_square_button_at(*gps_, x, middle, skin);
                if (action) { owner_right = x; break; }
            }
            if (owner_right <= owner_left) continue;
            for (int y = middle - 1; y <= middle; ++y) {
                if (only_y >= 0 && y != only_y) continue;
                int first = owner_left, end = owner_right;
                while (first < end && (native_rows[y][first] == ' ' ||
                        (settings->classic && is_cp437_box_separator(native_rows[y], first))))
                    ++first;
                if (settings->classic)
                    for (int x = first; x < end; ++x)
                        if (is_cp437_box_separator(native_rows[y], x)) { end = x; break; }
                while (end > first && native_rows[y][end - 1] == ' ') --end;
                if (first == end) continue;
                const std::string visible = native_rows[y].substr(first, end - first);
                if (rows[y].compare(first, end - first, visible) != 0) continue;
                bool current = true;
                for (int x = first; x < end; ++x) {
                    const auto ch = visible_char_at(x, y);
                    if ((ch ? ch : ' ') != static_cast<unsigned char>(visible[x - first]) ||
                            (ch && ch < ' ' && ch != 0x0b && ch != 0x0c)) {
                        current = false;
                        break;
                    }
                }
                if (!current) continue;
                const std::string source = complete_caption(first, y, owner_right, visible);
                auto target = exact_literal_translation(source);
                if (!target && y == middle - 1)
                    target = translate_unit_identity(source, true);
                if (!target && y == middle) {
                    // Preserve the complete-word glossary fallback used by
                    // ordinary matching (for example, Owned).
                    const auto term = procedural_terms_.find(lower(source));
                    if (term != procedural_terms_.end()) target = term->second;
                }
                if (!target) continue;
                Match match{first, y, end - first, -2, std::move(*target), visible};
                bind_field(match, {owner_left, middle - 1, owner_right - owner_left, 3},
                    owner_left, owner_right);
                matches.push_back(std::move(match));
                std::fill(rows[y].begin() + first, rows[y].begin() + end, ' ');
            }
        }
    }
    for (int y = header_y + 1; y < gps_->dimy; ++y) {
        if (only_y >= 0 && y != only_y) continue;
        // Use the current record, not translated vocabulary or a same-row
        // name requirement. Footer text has no unit controls/portrait frame.
        if (record_middles[y] < 0) continue;
        int right = record_rights[y];
        // Half-font captions can sit above or below a button's middle row.
        // Only the full current 3x3 skin supplies a boundary, never a word's
        // length or a previous row's button positions.
        for (int x = left; x < right; ++x) {
            bool control = false;
            for (int middle = std::max(header_y + 1, y - 1);
                    middle <= std::min(gps_->dimy - 1, y + 1); ++middle)
                control = control || native_fortress_creature_action_at(*gps_, x, middle);
            if (control || (native_rows[y][x] == ' ' &&
                    native_foreground_picture_at(*gps_, x, y))) {
                right = x;
                break;
            }
        }
        // An assigned camera shortcut is drawn in the same record, after
        // the activity/status. It is not part of that caption, even without
        // a fifth sort column or an intervening picture button. Leave its
        // complete field for the shared shortcut translator below.
        right = native_hotkey_column_boundary(native_rows[y], left, right);
        if (right <= left || native_rows[y][left] == ' ') continue;
        int end = right;
        if (settings->classic) {
            // The trainer replaces part of the lower CP437 edge. Its text
            // ends where that edge resumes; rail bytes are never caption
            // bytes and must not prevent exact native-source recovery.
            for (int x = left; x < end; ++x)
                if (is_cp437_box_separator(native_rows[y], x)) { end = x; break; }
        }
        while (end > left && native_rows[y][end - 1] == ' ') --end;
        if (end <= left) continue;
        const std::string visible = native_rows[y].substr(left, end - left);
        if (rows[y].compare(left, end - left, visible) != 0) continue;
        bool current = true;
        for (int x = left; x < end; ++x) {
            const auto ch = visible_char_at(x, y);
            if ((ch ? ch : ' ') != static_cast<unsigned char>(rows[y][x]) ||
                (ch && ch < ' ' && ch != 0x0b && ch != 0x0c &&
                    !is_native_item_designation_byte(ch)) ||
                is_cp437_box_separator(rows[y], x)) {
                current = false;
                break;
            }
        }
        if (!current) continue;
        const std::string source = complete_caption(left, y, right, visible);
        // Never translate only the prefix of a still-unrecovered ellipsis.
        // A literal status which intentionally ends in dots can still use
        // its exact glossary entry; no fragment/prefix inference is involved.
        TranslationResult translation;
        if (source == visible && source.ends_with("...")) {
            const auto exact = exact_literal_translation(source);
            translation = exact ? TranslationResult::translated(source, *exact, "activity")
                : preserved_item_field(source, "activity");
        } else translation = translate_fortress_activity_display(source);
        Match match{left, y, end - left, kFortressTaskActivityRule,
            translation.usable() ? translation.target : native_text_to_utf8(source), visible};
        match.native_hover_untranslated = translation.has_untranslated();
        match.translation_result = std::make_shared<const TranslationResult>(std::move(translation));
        bind_field(match, {left, record_middles[y] - 1, right - left, 3}, left, right);
        matches.push_back(std::move(match));
        std::fill(rows[y].begin() + left, rows[y].begin() + end, ' ');
    }
}

// Captured creature fields retain their source-proved margins even if the
// native producer has cleared or begun refreshing the logical grid. This
// pass fits only those saved fields; it never rediscovers their page or skin.
void Overlay::layout_fortress_creature_fields(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer ||
            gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    std::map<std::array<int, 4>, std::vector<Match *>> records;
    for (Match &match : prepared_matches_) {
        if (!match.native_fortress_creature_field || match.target.empty() ||
                match.native_split_duplicate || !match.native_picture_caption_box ||
                match.layout_x < 0 || match.layout_clip_right <= match.layout_x) continue;
        const auto &box = *match.native_picture_caption_box;
        records[{box.x, box.y, box.w, box.h}].push_back(&match);
    }
    const bool classic = native_ui_classic().value_or(false);
    for (auto &[box, fields] : records) {
        if (classic && std::none_of(fields.begin(), fields.end(),
                [](const Match *field) { return field->native_split_text; })) {
            int first_y = gps_->dimy, last_y = -1;
            for (const Match *field : fields) {
                first_y = std::min(first_y, field->y);
                last_y = std::max(last_y, field->y);
            }
            if (last_y == first_y + 1) {
                for (Match *field : fields) {
                    field->layout_y = box[1] + field->y - first_y;
                    field->layout_pixel_y = gps_->tile_pixel_y / 2;
                    field->layout_fixed_baseline = true;
                }
            }
        }
        for (Match *field : fields) {
            // Other record fitters may share a narrower column. Restore this
            // field's own captured allocation before measuring its text.
            const auto [left, right] = *field->native_fortress_creature_field;
            field->layout_x = left;
            field->layout_clip_right = right;
            layout_fortress_text_rows(renderer, {{field}},
                left, right);
        }
    }
}

// All creature pages share the same native three-row records. Discover the
// name, activity/training and stress/ownership slots from their sort controls,
// picture-backed row and unit buttons, not from animal names or status words.
void Overlay::layout_fortress_creature_table(SDL_Renderer *renderer,
        const Match &name_header, const Match &category_header,
        const Match &profession_header,
        const std::optional<SDL_Rect> &assignment_rows) {
    const auto settings = native_ui_settings();
    if (!settings) return;
    const int header_y = name_header.native_split_text
        ? name_header.native_split_top_y : name_header.y;
    const auto sorts = native_sort_columns(*gps_, header_y, *settings);
    if ((sorts.size() != 4 && sorts.size() != 5) ||
        name_header.x != sorts[0] + 5 || category_header.x != sorts[1] + 5 ||
        profession_header.x != sorts[2] + 5) return;
    const int name_left = sorts[0], activity_left = sorts[3];
    if (profession_header.x + profession_header.length >= activity_left) return;
    if (assignment_rows && (name_left < assignment_rows->x ||
            sorts.back() + 4 > assignment_rows->x + assignment_rows->w)) return;

    struct Column {
        int left, right;
        std::vector<std::vector<Match *>> rows;
    };
    std::array<Column, 4> columns{{
        {name_left, activity_left, {}},
        {name_left + 1, activity_left, {}}, // Grazer continuation indent.
        {activity_left, gps_->dimx, {}},
        {sorts.size() == 5 ? sorts[4] : gps_->dimx, gps_->dimx, {}},
    }};
    const auto recenter = native_texture_button_stocks_recenter(*gps_);
    const auto inspect = native_texture_button_stocks_view_item(*gps_);
    const int first_middle = assignment_rows ? assignment_rows->y + 1 : header_y + 2;
    const int bottom = assignment_rows ? assignment_rows->y + assignment_rows->h : gps_->dimy;
    for (int middle = first_middle; middle + 1 < bottom; ++middle) {
        int controls = -1;
        for (int x = name_left; x + (assignment_rows ? 3 : 6) <= activity_left; ++x) {
            if (!native_square_button_at(*gps_, x, middle, recenter)) continue;
            // Assignment pickers omit Inspect and put the two-by-two stress
            // icon under the fourth sort control. It is not an activity slot
            // or a second unit button. Recenter alone ends the proved name.
            if (assignment_rows) { controls = x; break; }
            for (int gap = 0; gap <= 2; ++gap)
                if (x + 6 + gap <= activity_left &&
                    native_square_button_at(*gps_, x + 3 + gap, middle, inspect)) {
                    controls = x;
                    break;
                }
            if (controls >= 0) break;
        }
        std::optional<SDL_Rect> caption;
        if (controls <= name_left && !assignment_rows) {
            caption = native_fortress_creature_record_caption(
                *gps_, name_left, activity_left, middle);
            if (caption) controls = activity_left;
        }
        if (controls <= name_left) continue;
        if (assignment_rows) {
            // A picker row must own its portrait as well as its action. The
            // enclosing assignment panel cannot lend a nearby map control.
            bool portrait = false;
            for (int x = assignment_rows->x; x < name_left; ++x) {
                const int end = native_picture_box_right(*gps_, x, middle);
                if (end == name_left || end == name_left - 1) { portrait = true; break; }
            }
            if (!portrait) continue;
            if (!settings->classic) {
                const auto caption = native_picture_caption_rect(
                    *gps_, name_left, middle, false, nullptr, true, nullptr, true);
                if (!caption || caption->x != name_left ||
                    caption->x + caption->w != controls) continue;
            }
        }
        std::array<std::string, 3> native_rows;
        bool has_name = false;
        for (int row = 0; row < 3; ++row) {
            auto &native = native_rows[row];
            native.assign(static_cast<size_t>(gps_->dimx), ' ');
            for (int x = name_left; x < gps_->dimx; ++x) {
                const auto ch = visible_char_at(x, middle + row - 1);
                if (ch) native[x] = static_cast<char>(ch);
            }
            const auto first = native.find_first_not_of(' ', name_left);
            has_name = has_name || (first != std::string::npos &&
                first < static_cast<size_t>(name_header.x));
        }
        if (!has_name) continue;
        if (settings->classic && !assignment_rows && sorts.size() == 5) {
            const int left = sorts[4];
            if (const auto field = native_fortress_ownership_column(
                    *gps_, left, middle, native_rows)) {
                std::array<std::vector<Match *>, 2> ownership_rows;
                bool complete = true;
                for (int row = 0; row < 2 && complete; ++row) {
                    const auto &native = native_rows[row];
                    int first = left, end = field->right;
                    while (first < end && (native[first] == ' ' ||
                            is_cp437_box_separator(native, first))) ++first;
                    for (int x = first; x < end; ++x)
                        if (is_cp437_box_separator(native, x)) { end = x; break; }
                    while (end > first && native[end - 1] == ' ') --end;
                    if (first == end) continue;
                    auto &parts = ownership_rows[row];
                    for (Match &part : prepared_matches_) {
                        if (part.y != middle + row - 1 || part.x >= end ||
                            part.x + part.length <= first) continue;
                        if (part.target.empty() || part.native_split_duplicate ||
                            part.legends_flow || part.x < first || part.x + part.length > end) {
                            complete = false;
                            break;
                        }
                        parts.push_back(&part);
                    }
                    std::sort(parts.begin(), parts.end(),
                        [](const Match *a, const Match *b) { return a->x < b->x; });
                    int cursor = first;
                    for (const Match *part : parts) {
                        while (cursor < part->x && native[cursor] == ' ') ++cursor;
                        if (cursor != part->x) { complete = false; break; }
                        cursor += part->length;
                    }
                    complete = complete && !parts.empty() && cursor == end;
                }
                if (complete && !ownership_rows[1].empty()) {
                    const bool two_lines = !ownership_rows[0].empty();
                    for (int row = 0; row < 2; ++row) {
                        if (ownership_rows[row].empty()) continue;
                        for (Match *part : ownership_rows[row]) {
                            part->native_picture_caption_box = SDL_Rect{
                                left, middle - 1, field->right - left, 3};
                            part->layout_y = middle + row - 1;
                            part->layout_pixel_y = two_lines ? gps_->tile_pixel_y / 2 : 0;
                            part->layout_fixed_baseline = true;
                        }
                        layout_fortress_text_rows(renderer, {ownership_rows[row]}, left, field->right);
                    }
                    if (two_lines) {
                        NativeBorderRepair repair;
                        repair.cells = {left, middle - 1, field->right - left, 1};
                        repair.cell[0] = static_cast<unsigned char>(field->top_skin & 0xff);
                        const int foreground = ((field->top_skin >> 8) & 7) +
                            ((field->top_skin & 0x4000) ? 8 : 0);
                        const int background = (field->top_skin >> 11) & 7;
                        std::copy_n(gps_->uccolor[foreground], 3, repair.cell.begin() + 1);
                        std::copy_n(gps_->uccolor[background], 3, repair.cell.begin() + 4);
                        native_border_repairs_.push_back(repair);
                    }
                }
            }
        }
        // Classic records join the portrait directly to rectangle fill,
        // then overwrite its right end with the complete unit controls.
        // There is no independent rectangle cap for the generic reader.
        // A second name/title row can also overwrite the lower horizontal
        // edge. Bind that exception to this sort band and proved record.
        const auto classic_bottom_skin = [&](int left, int right)
                -> std::optional<int32_t> {
            if (!settings->classic || right <= left || right > gps_->dimx)
                return std::nullopt;
            const int32_t (*skins[])[3] = {
                native_texture_button_rectangle(*gps_),
                native_texture_button_rectangle_selected(*gps_),
                native_texture_button_rectangle_light(*gps_),
                native_texture_button_rectangle_dark(*gps_),
            };
            for (const auto *skin : skins) {
                for (int orientation = 0; orientation < 3; ++orientation) {
                    const auto fill = [&](int row) {
                        return orientation == 1 ? skin[row][1]
                            : skin[orientation == 2 ? 2 : 1][row];
                    };
                    if ((fill(1) & 0xff) != ' ') continue;
                    bool complete = true;
                    for (int x = left; x < right && complete; ++x)
                        complete = native_ui_skin_at(*gps_, x, middle - 1, fill(0), true) &&
                            native_ui_skin_at(*gps_, x, middle, fill(1), true, true,
                                false, false, !is_cp437_box_separator(native_rows[1], x)) &&
                            (native_ui_skin_at(*gps_, x, middle + 1, fill(2), true) ||
                             native_ui_skin_at(*gps_, x, middle + 1, fill(1), true, true,
                                 false, false, !is_cp437_box_separator(native_rows[2], x)));
                    if (complete) return fill(2);
                }
            }
            return std::nullopt;
        };
        const auto name_bottom_skin = classic_bottom_skin(name_left, controls);
        if (settings->classic && !name_bottom_skin) continue;
        // The picture-backed record supplies the last column's actual edge.
        // Map labels outside this row and footer buttons are not table fields.
        const auto record = caption
            ? std::optional<std::pair<int, int>>{{caption->x, caption->x + caption->w}}
            : native_button_text_span(*gps_, name_left, name_left + 1, middle);
        std::array<std::vector<Match *>, 3> name_rows;
        for (size_t column = 0; column < columns.size(); ++column) {
            if (assignment_rows && column != 0) continue;
            if (column == 1) continue; // Classified from the complete name-slot row below.
            // Classic ownership was fitted independently above, including
            // the names written through its upper border.
            if (settings->classic && column == 3) continue;
            const int left = columns[column].left;
            int right = controls;
            if (column >= 2) {
                // Without the row's complete skin, name/control geometry is
                // still proved, but the final text slot has no known boundary.
                if (!record || record->first != name_left) continue;
                right = record->second;
                if (column == 2 && sorts.size() == 5)
                    right = std::min(right, sorts[4]);
                // Training, slaughter, adoption and task buttons can occupy
                // the rest of a slot. Use current foreground pictures across
                // the entire record, not the length of its English caption.
                for (int x = left; x < right; ++x) {
                    bool picture = native_fortress_creature_action_at(*gps_, x, middle);
                    for (int row = 0; row < 3; ++row)
                        picture = picture || (native_rows[row][x] == ' ' &&
                            native_foreground_picture_at(*gps_, x, middle + row - 1));
                    if (picture) { right = x; break; }
                }
                // Use the same semantic edge as activity source ownership.
                // Packing the independently translated shortcut into this
                // column would move it beside the status and erase its gap.
                for (const auto &native : native_rows)
                    right = native_hotkey_column_boundary(native, left, right);
            }
            if (right <= left) continue;
            columns[column].right = std::min(columns[column].right, right);
            if (column == 0) columns[1].right = std::min(columns[1].right, right);
            for (int row = 0; row < 3; ++row) {
                const auto &native = native_rows[row];
                int first = left, end = right;
                while (first < end && (native[first] == ' ' ||
                        (settings->classic && is_cp437_box_separator(native, first)))) ++first;
                if (settings->classic) {
                    // A continuation owns only its text opening, never the
                    // remaining CP437 bottom edge. The skin above already
                    // proves the name slot; no frame byte enters a caption.
                    for (int x = first; x < end; ++x)
                        if (is_cp437_box_separator(native, x)) { end = x; break; }
                }
                while (end > first && native[end - 1] == ' ') --end;
                if (first == end) continue;
                const int y = middle + row - 1;
                std::vector<Match *> parts;
                bool complete = true;
                for (Match &part : prepared_matches_) {
                    if (part.y != y || part.x >= end ||
                        part.x + part.length <= first) continue;
                    // Keep the original source ownership, colors and native
                    // half-font baseline. Never revive a suppression-only half
                    // or move a partial translation away from raw punctuation,
                    // sex glyphs, custom names or untranslated words.
                    if (part.target.empty() || part.native_split_duplicate ||
                        part.legends_flow || part.x < first ||
                        part.x + part.length > end) {
                        complete = false;
                        break;
                    }
                    parts.push_back(&part);
                }
                std::sort(parts.begin(), parts.end(),
                    [](const Match *a, const Match *b) { return a->x < b->x; });
                int cursor = first;
                for (const Match *part : parts) {
                    while (cursor < part->x && native[cursor] == ' ') ++cursor;
                    if (cursor != part->x) { complete = false; break; }
                    cursor += part->length;
                }
                if (!complete || parts.empty() || cursor != end) continue;
                const auto source = std::string_view(native).substr(first, end - first);
                const size_t target_column = column == 0 &&
                    source == "Grazer: requires pasture" ? 1 : column;
                if (settings->classic && column == 0) name_rows[row] = parts;
                columns[target_column].rows.push_back(std::move(parts));
            }
        }
        if (name_bottom_skin && !name_rows[1].empty() && !name_rows[2].empty()) {
            // Center the two full-font lines in their native three-row
            // record. Suppression still owns the original source cells;
            // only the display baseline and proven caption width move.
            for (int row : {1, 2})
                for (Match *part : name_rows[row]) {
                    part->native_picture_caption_box = SDL_Rect{
                        name_left, middle - 1, controls - name_left, 3};
                    part->layout_y = middle + row - 2;
                    part->layout_pixel_y = gps_->tile_pixel_y / 2;
                    part->layout_fixed_baseline = true;
                }
            NativeBorderRepair repair;
            repair.cells = {name_left, middle + 1, controls - name_left, 1};
            repair.cell[0] = static_cast<unsigned char>(*name_bottom_skin & 0xff);
            const int foreground = ((*name_bottom_skin >> 8) & 7) +
                ((*name_bottom_skin & 0x4000) ? 8 : 0);
            const int background = (*name_bottom_skin >> 11) & 7;
            std::copy_n(gps_->uccolor[foreground], 3, repair.cell.begin() + 1);
            std::copy_n(gps_->uccolor[background], 3, repair.cell.begin() + 4);
            native_border_repairs_.push_back(repair);
        }
        if (settings->classic && !assignment_rows) {
            // The trainer is the activity slot's second full-font line,
            // independently of whether the animal itself has a second name
            // line. Generic closed-rectangle discovery cannot own this slot:
            // its left cap is covered by Inspect and its bottom by Trainer.
            // Reuse the proved record/control pair and the same live strip
            // skin as the name slot, without relaxing other widget readers.
            std::array<std::vector<Match *>, 2> activity_rows;
            int right = gps_->dimx;
            for (Match &part : prepared_matches_) {
                if (part.rule != kFortressTaskActivityRule || part.target.empty() ||
                    part.native_split_duplicate || part.x != activity_left ||
                    part.y < middle || part.y > middle + 1 ||
                    part.layout_x != activity_left || part.layout_clip_right <= activity_left)
                    continue;
                right = std::min(right, part.layout_clip_right);
                activity_rows[part.y - middle].push_back(&part);
            }
            if (activity_rows[0].size() != 1 || activity_rows[1].size() != 1) continue;
            const auto bottom_skin = classic_bottom_skin(activity_left, right);
            if (!bottom_skin) continue;
            for (int row = 0; row < 2; ++row)
                for (Match *part : activity_rows[row]) {
                    part->native_picture_caption_box = SDL_Rect{
                        activity_left, middle - 1, right - activity_left, 3};
                    part->layout_y = middle + row - 1;
                    part->layout_pixel_y = gps_->tile_pixel_y / 2;
                    part->layout_fixed_baseline = true;
                    layout_fortress_text_rows(renderer, {{part}}, activity_left, right);
                }
            NativeBorderRepair repair;
            repair.cells = {activity_left, middle + 1, right - activity_left, 1};
            repair.cell[0] = static_cast<unsigned char>(*bottom_skin & 0xff);
            const int foreground = ((*bottom_skin >> 8) & 7) +
                ((*bottom_skin & 0x4000) ? 8 : 0);
            const int background = (*bottom_skin >> 11) & 7;
            std::copy_n(gps_->uccolor[foreground], 3, repair.cell.begin() + 1);
            std::copy_n(gps_->uccolor[background], 3, repair.cell.begin() + 4);
            native_border_repairs_.push_back(repair);
        }
    }
    // Every record, including sexless small wild animals and owned pets,
    // shares its column origin and UI font. Owner/trainer names on the row
    // above a status are ordinary fields in the same native record. No list
    // of species, training ranks, ownership states or footer visibility is
    // needed, and scrolling cannot change a column to English-span centering.
    for (const auto &column : columns)
        if (!column.rows.empty())
            layout_fortress_text_rows(renderer, column.rows, column.left, column.right);
}

int Overlay::fortress_creature_tabs_y() const {
    const auto display_y = [](const Match &match) {
        return match.native_split_text ? match.native_split_top_y : match.y;
    };
    for (const Match &tab : prepared_matches_) {
        if (tab.source != "Pets/Livestock" || tab.target.empty() || tab.native_split_duplicate)
            continue;
        const int y = display_y(tab);
        bool residents = false, other = false, dead = false;
        for (const Match &match : prepared_matches_) {
            if (match.target.empty() || match.native_split_duplicate || display_y(match) != y)
                continue;
            residents = residents || match.source == "Residents" || match.source == "Citizens";
            other = other || match.source == "Other";
            dead = dead || match.source == "Dead/Missing";
        }
        if (residents && other && dead) return y;
    }
    return -1;
}

// Overall training replaces the unit table with species picture buttons.
// It has no sort headers; each button contains a species and one knowledge
// level. The 53.16 row renderer at 0x141419a40 joins the picture's right cap
// directly to rectangle fill, with ordinary text on the middle row. Both
// columns remain independent even when Domesticated follows a short name.
void Overlay::layout_fortress_training_knowledge(SDL_Renderer *renderer, int tabs_y) {
    static constexpr std::array<std::string_view, 5> levels = {{
        "Domesticated", "A few facts", "General familiarity", "Knowledgeable", "Expert"
    }};
    struct Row {
        int left, right;
        std::vector<Match *> name, level;
        std::string level_source;
    };
    std::vector<Row> rows;
    for (int y = tabs_y + 1; y + 1 < gps_->dimy; ++y) {
        for (int picture = 0; picture + 2 < gps_->dimx; ++picture) {
            const int picture_right = native_picture_box_right(*gps_, picture, y);
            if (picture_right < 0) continue;
            const auto caption = native_button_text_span(
                *gps_, picture_right, picture_right + 1, y);
            if (!caption || caption->first != picture_right) continue;
            const int left = caption->first, right = caption->second;
            // A native text widget may write its final letter over the
            // parent's right cap. Recover that owned source byte while
            // keeping the translated columns inside the button interior.
            const int source_right = right < gps_->dimx &&
                ascii_word_byte(visible_char_at(right, y)) ? right + 1 : right;
            std::string source(static_cast<size_t>(source_right - left), ' ');
            for (int x = left; x < source_right; ++x) {
                const unsigned char ch = visible_char_at(x, y);
                if (ch) source[static_cast<size_t>(x - left)] = static_cast<char>(ch);
            }
            int first = 0, end = static_cast<int>(source.size());
            while (first < end && source[first] == ' ') ++first;
            while (end > first && source[end - 1] == ' ') --end;
            const std::string_view text(source.data() + first, static_cast<size_t>(end - first));
            const auto level = std::find_if(levels.begin(), levels.end(), [&](std::string_view value) {
                return text.size() > value.size() && text.ends_with(value);
            });
            if (level == levels.end()) continue;
            const int level_left = left + end - static_cast<int>(level->size());
            int name_right = level_left;
            while (name_right > left + first && source[name_right - left - 1] == ' ')
                --name_right;
            if (name_right <= left + first) continue;
            // Accept only complete current fields. Unknown species, covered
            // glyphs and discarded half-font copies keep their native layout.
            const auto parts_in = [&](int begin, int finish) {
                std::vector<Match *> parts;
                for (Match &match : prepared_matches_) {
                    if (match.y != y || match.x >= finish || match.x + match.length <= begin)
                        continue;
                    if (match.target.empty() || match.native_split_duplicate || match.legends_flow ||
                        match.x < begin || match.x + match.length > finish) return std::vector<Match *>{};
                    parts.push_back(&match);
                }
                std::sort(parts.begin(), parts.end(), [](const Match *a, const Match *b) {
                    return a->x < b->x;
                });
                int cursor = begin;
                for (const Match *part : parts) {
                    while (cursor < part->x && source[cursor - left] == ' ') ++cursor;
                    if (cursor != part->x) return std::vector<Match *>{};
                    cursor += part->length;
                }
                if (cursor != finish) parts.clear();
                return parts;
            };
            auto names = parts_in(left + first, name_right);
            auto status = parts_in(level_left, left + end);
            if (names.empty() || status.empty()) continue;
            rows.push_back({left, right, std::move(names), std::move(status), std::string(*level)});
            picture = right - 1;
        }
    }
    // The live button edges define each list, including a single visible row.
    // Reserve the widest translated level at the right; every species starts
    // next to its icon and every level shares one left edge, at one UI size.
    const int pixels = std::clamp(static_cast<int>(gps_->tile_pixel_y * config_.font_scale),
        1, gps_->tile_pixel_y);
    for (size_t index = 0; index < rows.size(); ++index) {
        const Row &anchor = rows[index];
        if (std::any_of(rows.begin(), rows.begin() + index, [&](const Row &row) {
                return row.left == anchor.left && row.right == anchor.right;
            })) continue;
        int level_width = 0;
        // Measure all levels, not only the current viewport, so scrolling to
        // an all-domesticated section cannot shift the status column.
        for (const auto level : levels) {
            const auto target = exact_literal_translation(level == "Expert"
                ? "Animal training knowledge: Expert" : std::string(level));
            if (!target) return;
            const auto *glyph = get_glyph_texture(renderer, *target,
                (anchor.right - anchor.left) * gps_->tile_pixel_x);
            if (!glyph || !glyph->texture) return;
            level_width = std::max(level_width, glyph->width);
        }
        const int level_cells = (level_width + 2 * config_.horizontal_padding +
            gps_->tile_pixel_x - 1) / gps_->tile_pixel_x;
        const int level_left = anchor.right - level_cells;
        if (level_left - 1 <= anchor.left) continue;
        std::vector<std::vector<Match *>> names, status;
        std::vector<Match *> moving;
        for (Row &row : rows) {
            if (row.left != anchor.left || row.right != anchor.right) continue;
            if (row.level_source == "Expert") {
                const auto target = exact_literal_translation("Animal training knowledge: Expert");
                if (!target || row.level.size() != 1) continue;
                row.level.front()->target = *target;
            }
            names.push_back(row.name);
            status.push_back(row.level);
            moving.insert(moving.end(), row.name.begin(), row.name.end());
            moving.insert(moving.end(), row.level.begin(), row.level.end());
        }
        layout_fortress_text_rows(renderer, names, anchor.left, level_left - 1, false, false, moving);
        layout_fortress_text_rows(renderer, status, level_left, anchor.right, false, false, moving);
    }
}

// The roster and room-assignment picker share name records, but only the
// roster has creature tabs. A closed picker with its own Remove assignment
// button owns the no-tabs variant; its fourth sort column is stress.
void Overlay::layout_fortress_creatures(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer ||
        gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    const auto display_y = [](const Match &match) {
        return match.native_split_text ? match.native_split_top_y : match.y;
    };
    const auto visible = [](const Match &match) {
        return !match.target.empty() && !match.native_split_duplicate;
    };
    const int tabs_y = fortress_creature_tabs_y();
    for (const Match &name : prepared_matches_) {
        if (!visible(name) || name.source != "Name") continue;
        const Match *category = nullptr, *profession = nullptr;
        for (const Match &header : prepared_matches_) {
            if (!visible(header) || display_y(header) != display_y(name) ||
                header.x <= name.x + name.length) continue;
            if (header.source == "Cat") category = &header;
            if (header.source == "Prof") profession = &header;
        }
        if (category && profession && category->x + category->length < profession->x) {
            const auto settings = native_ui_settings();
            const int header_y = display_y(name);
            const auto sorts = settings
                ? native_sort_columns(*gps_, header_y, *settings) : std::vector<int>{};
            if (sorts.size() >= 3 && name.x == sorts[0] + 5 &&
                    category->x == sorts[1] + 5 && profession->x == sorts[2] + 5) {
                const int left = sorts[0];
                // Animal assignment rows end in a selection box rather than
                // Recenter/Inspect or a worker-policy button. A long native
                // identity can use the lower row and cross the stress icon,
                // so its caption skin and English span cannot own placement.
                // The current portrait and complete selection control still
                // prove the same three-row record and its name origin.
                for (int middle = header_y + 2; middle + 1 < gps_->dimy; ++middle) {
                    bool portrait = false;
                    for (int x = std::max(0, left - 6); x < left; ++x) {
                        const int right = native_picture_box_right(*gps_, x, middle);
                        if (right == left || right == left - 1) { portrait = true; break; }
                    }
                    if (!portrait) continue;
                    int selection = -1;
                    for (int x = left; x + 4 <= gps_->dimx; ++x)
                        if (native_selection_box_at(*gps_, x, middle - 1, settings->classic)) {
                            selection = x;
                            break;
                        }
                    if (selection <= left) continue;
                    int right = selection;
                    for (int x = left; x < right; ++x)
                        for (int row = middle - 1; row <= middle + 1; ++row)
                            if (native_foreground_picture_at(*gps_, x, row)) {
                                right = x;
                                break;
                            }
                    if (right <= left) continue;
                    std::vector<Match *> identities;
                    for (Match &part : prepared_matches_) {
                        if ((part.rule != kCreatureNameRule && !part.native_fortress_creature_field) ||
                                part.target.empty() || part.native_split_duplicate ||
                                part.legends_flow || part.x != left || part.y < middle - 1 ||
                                part.y > middle + 1 || part.length <= 0 ||
                                part.length > selection - left ||
                                part.source.size() != static_cast<size_t>(part.length)) continue;
                        bool current = true;
                        for (int offset = 0; offset < part.length; ++offset) {
                            const auto ch = visible_char_at(left + offset, part.y);
                            if ((ch ? ch : ' ') != static_cast<unsigned char>(part.source[offset])) {
                                current = false;
                                break;
                            }
                        }
                        if (current) identities.push_back(&part);
                    }
                    std::sort(identities.begin(), identities.end(),
                        [](const Match *a, const Match *b) { return a->y < b->y; });
                    for (size_t i = 0; i < identities.size(); ++i) {
                        Match &part = *identities[i];
                        part.native_fortress_creature_field = std::pair{left, right};
                        part.native_picture_caption_box = SDL_Rect{
                            left, middle - 1, selection - left, 3};
                        part.layout_y = identities.size() == 2 ? middle - 1 + static_cast<int>(i) : middle;
                        part.layout_pixel_y = identities.size() == 2 ? gps_->tile_pixel_y / 2 : 0;
                        part.layout_fixed_baseline = true;
                        part.layout_reflowed_control = true;
                        part.layout_right = false;
                        part.layout_ellipsize = true;
                        layout_fortress_text_rows(renderer, {{&part}}, left, right);
                    }
                }
            }
            const NativePanelBorders borders(*gps_);
            const auto panel = native_panel_interior(borders, *gps_, name.x,
                profession->x + profession->length, display_y(name));
            if (panel) {
                for (const Match &remove : prepared_matches_) {
                    const int y = display_y(remove);
                    if (!visible(remove) || remove.source != "Remove assignment" ||
                        y <= display_y(name) || y >= panel->y + panel->h ||
                        remove.x < panel->x || remove.x + remove.length > panel->x + panel->w)
                        continue;
                    const auto button = native_button_text_rect(
                        *gps_, remove.x, remove.x + remove.length, y);
                    if (!button || button->h != 3 || button->x < panel->x ||
                        button->x + button->w > panel->x + panel->w ||
                        button->y <= display_y(name) ||
                        button->y + button->h >= panel->y + panel->h) continue;
                    const int top = button->y + button->h;
                    layout_fortress_creature_table(renderer, name, *category, *profession,
                        SDL_Rect{panel->x, top, panel->w, panel->y + panel->h - top});
                    return;
                }
            }
            if (tabs_y < 0 || display_y(name) <= tabs_y) continue;
            layout_fortress_creature_table(renderer, name, *category, *profession);
            return;
        }
    }
    if (tabs_y >= 0) layout_fortress_training_knowledge(renderer, tabs_y);
}
