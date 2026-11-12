// Windows 53.16 Groups (0x14017915f..0x1401792ce) paints rectangle[1][row]
// from L+1 through R-1 and rectangle[2][row] at R. It never paints column L.
// addst then writes the name at (L,T+1), type ending at (R,T+1), and role at
// (L,T+2). Thus neither left corners nor the middle right cap can prove this
// widget. The intact top rail/right corners and remaining bottom rail can.
static std::optional<std::array<int32_t, 9>> character_group_classic_skin(
        const graphicst &gps, int left, int right, int top) {
    if (!native_ui_classic().value_or(false) || left < 0 || right >= gps.dimx ||
        right - left < 4 || top < 0 || top + 2 >= gps.dimy) return std::nullopt;
    const auto *rectangle = native_texture_button_rectangle(gps);
    std::array<int32_t, 9> skin{};
    for (int row = 0; row < 3; ++row)
        for (int column = 0; column < 3; ++column)
            skin[row * 3 + column] = rectangle[column][row];
    if (!native_ui_skin_at(gps, right, top, skin[2], true) ||
        !native_ui_skin_at(gps, right, top + 2, skin[8], true)) return std::nullopt;
    for (int x = left + 1; x < right; ++x)
        if (!native_ui_skin_at(gps, x, top, skin[1], true)) return std::nullopt;
    for (int x = left; x <= right; ++x)
        if (!native_ui_skin_at(gps, x, top + 1, skin[4], true, true))
            return std::nullopt;
    for (int x = left; x < right; ++x)
        if (!native_ui_skin_at(gps, x, top + 2, skin[7], true) &&
            !native_ui_skin_at(gps, x, top + 2, skin[4], true, true))
            return std::nullopt;
    return skin;
}

// Whole physical fields retain their source spans for glyph suppression;
// translated names, types and roles share the current record's text bounds.
std::vector<NativeTextCard> Overlay::capture_character_group_rows() const {
    if (!native_character_translation_active(gps_)) return {};
    if (!gps_ || gps_->dimx <= 0 || gps_->dimy <= 0) return {};
    const auto bounds = native_character_read_bounds(*gps_);
    std::vector<std::string> context(gps_->dimy);
    const auto read_row = [&](int y) -> const std::string & {
        auto &row = context[y];
        if (row.empty()) {
            row.assign(gps_->dimx, ' ');
            for (int x = bounds.x; x < bounds.x + bounds.w; ++x) {
                bool top = false;
                const auto *cell = cell_at(x, y, &top);
                if (cell && cell[0]) row[x] = cell[0];
            }
        }
        return row;
    };
    if (native_character_foreground_view(gps_)) {
        // These are the three addst returns in the complete native Groups
        // arm. Its private producer already owns the pane and each field;
        // neither a closed bottom edge nor a nonempty role is required.
#ifdef _WIN32
        const uintptr_t base = native_history_profile_base();
        const std::array<uintptr_t, 3> callers{
            native_reference_address(base, 0x1794ba),
            native_reference_address(base, 0x17986a),
            native_reference_address(base, 0x17ab4c)};
#else
        const std::array<uintptr_t, 3> callers{native_elf_5317_address(0x140c82c),
            native_elf_5317_address(0x140cbcb), native_elf_5317_address(0x140c8d6)};
#endif
        const std::array draws{captured_native_drawn_text_view(false),
            captured_native_drawn_text_view(true)};
        std::array<std::vector<const NativeDrawnTextRow *>, 3> fields;
        for (const auto &layer : draws)
            for (const auto &draw : layer) {
                if (draw.draw_grid != (draw.top_layer ? gps_->screen_top : gps_->screen) ||
                        draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                        draw.source.empty() || draw.editable_text ||
                        draw.x < bounds.x || draw.x >= bounds.x + bounds.w ||
                        draw.y < bounds.y || draw.y >= bounds.y + bounds.h) continue;
                for (size_t field = 0; field < callers.size(); ++field)
                    if (callers[field] && draw.native_caller == callers[field])
                        fields[field].push_back(&draw);
            }
        for (auto &field : fields)
            std::sort(field.begin(), field.end(), [](const auto *a, const auto *b) {
                return a->y != b->y ? a->y < b->y : a->x < b->x;
            });
        int type_left = bounds.x + bounds.w - 1;
        int content_right = type_left;
        if (!fields[1].empty()) {
            content_right = bounds.x;
            for (const auto *type : fields[1]) {
                type_left = std::min(type_left, type->x);
                content_right = std::max(content_right,
                    type->x + static_cast<int>(type->source.size()));
            }
            content_right = std::min(content_right, bounds.x + bounds.w - 1);
        }
        std::vector<NativeTextCard> cards;
        for (size_t index = 0; index < fields[0].size(); ++index) {
            const auto &name = *fields[0][index];
            const int next_y = index + 1 < fields[0].size()
                ? fields[0][index + 1]->y : bounds.y + bounds.h;
            const NativeDrawnTextRow *type = nullptr, *role = nullptr;
            for (const auto *field : fields[1])
                if (field->y == name.y) { type = field; break; }
            for (const auto *field : fields[2])
                if (field->y > name.y && field->y < next_y) { role = field; break; }
            const int name_right = type ? type_left - 1 : content_right;
            if (name.x >= name_right) continue;
            std::optional<SDL_Rect> box;
            if (type && native_ui_classic().value_or(false)) {
                const int right = type->x + static_cast<int>(type->source.size()) - 1;
                if (character_group_classic_skin(*gps_, name.x, right, name.y - 1))
                    box = SDL_Rect{name.x + 1, name.y - 1, right - name.x - 1, 3};
            }
            const auto capture = [&](const NativeDrawnTextRow &draw, size_t field,
                                     int left, int right) {
                int end = std::min(draw.x + static_cast<int>(draw.source.size()),
                    bounds.x + bounds.w);
                // The later type draw can overwrite the tail of a long name.
                // Retain the formatter's complete name but mask only its
                // surviving physical prefix, leaving the type's ink intact.
                if (field == 0 && type) end = std::min(end, type->x);
                const auto &physical = read_row(draw.y);
                while (end > draw.x && physical[end - 1] == ' ') --end;
                if (end <= draw.x || left >= right ||
                        std::string_view(physical).substr(draw.x, end - draw.x) !=
                            std::string_view(draw.source).substr(0, end - draw.x)) return;
                NativeTextCard card;
                card.interior = {left, draw.y, right - left, 1};
                card.button_box = box;
                card.character_group_name = field == 0;
                card.character_group_type = field == 1;
                card.character_group_role = field == 2;
                card.character_group_civilization = field == 0 && type &&
                    lower(normalize_utterance(type->complete_source.empty()
                        ? type->source : type->complete_source)) == "civilization";
                NativeTextCardRow row;
                row.x = draw.x; row.y = draw.y;
                row.source = physical.substr(draw.x, end - draw.x);
                row.complete_source = draw.complete_source.empty()
                    ? draw.source : draw.complete_source;
                for (int x = draw.x; x < end; ++x) {
                    bool top = false;
                    const auto *cell = cell_at(x, draw.y, &top);
                    row.foregrounds.push_back(cell
                        ? (cell[1] << 16) | (cell[2] << 8) | cell[3]
                        : draw.foreground_rgb);
                }
                card.rows.push_back(std::move(row));
                cards.push_back(std::move(card));
            };
            const int left = box ? box->x : name.x;
            capture(name, 0, left, name_right);
            if (type) capture(*type, 1, type_left, content_right);
            if (role) capture(*role, 2, left, name_right);
        }
        if (!cards.empty()) return cards;
    }
    for (int tabs_y = bounds.y; tabs_y < bounds.y + bounds.h; ++tabs_y) {
        const auto tabs = character_information_tab_fields(read_row(tabs_y));
        if (tabs.empty() || !character_social_tab_selected(tabs_y, "Groups")) continue;
        if (native_ui_classic().value_or(false)) {
            struct Record {
                SDL_Rect box;
                std::array<NativeTextCardRow, 3> fields;
            };
            std::vector<Record> records;
            const auto *rectangle = native_texture_button_rectangle(*gps_);
            const auto color_at = [&](int x, int y) {
                bool top = false;
                const auto *cell = cell_at(x, y, &top);
                return cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : -1;
            };
            const auto text_field = [&](int left, int right, int y) {
                const auto &source = read_row(y);
                while (left < right && source[left] == ' ') ++left;
                while (right > left && source[right - 1] == ' ') --right;
                NativeTextCardRow field;
                field.x = left;
                field.y = y;
                field.source = source.substr(left, right - left);
                for (int x = left; x < right; ++x)
                    field.foregrounds.push_back(color_at(x, y));
                return field;
            };
            // The list's native strip is its own geometry. An off-screen
            // outer side/bottom must not veto these complete visible rows.
            for (int y = tabs_y + 1; y + 2 < bounds.y + bounds.h; ++y) {
                for (int x = std::max(1, bounds.x); x + 3 < bounds.x + bounds.w; ++x) {
                    if (!native_ui_skin_at(*gps_, x, y, rectangle[1][0], true)) continue;
                    const int left = x - 1;
                    int right = x;
                    while (right < bounds.x + bounds.w &&
                        native_ui_skin_at(*gps_, right, y, rectangle[1][0], true)) ++right;
                    x = right;
                    const auto skin = character_group_classic_skin(*gps_, left, right, y);
                    if (!skin) continue;
                    const auto &heading = read_row(y + 1);
                    const auto &detail = read_row(y + 2);
                    if (heading[left] == ' ' || heading[right] == ' ' ||
                        detail[left] == ' ') continue;
                    const int name_color = color_at(left, y + 1);
                    const int type_color = color_at(right, y + 1);
                    if (name_color < 0 || type_color < 0 || name_color == type_color) continue;
                    // Native names do not reserve space for the type. Split
                    // at its actual colored run even when no two-space gap
                    // survives, rather than losing both fields as one label.
                    int type_left = right;
                    while (type_left > left && color_at(type_left - 1, y + 1) == type_color)
                        --type_left;
                    int role_end = left;
                    while (role_end < right && !native_ui_skin_at(
                            *gps_, role_end, y + 2, (*skin)[7], true)) ++role_end;
                    if (type_left <= left || role_end <= left || role_end >= right) continue;
                    Record record{{left + 1, y, right - left - 1, 3}, {
                        text_field(left, type_left, y + 1),
                        text_field(type_left, right + 1, y + 1),
                        text_field(left, role_end, y + 2)}};
                    if (std::any_of(record.fields.begin(), record.fields.end(),
                            [](const auto &field) { return field.source.empty(); })) continue;
                    records.push_back(std::move(record));
                }
            }
            std::vector<NativeTextCard> cards;
            for (const auto &record : records) {
                const int right = record.box.x + record.box.w;
                int type_left = right;
                for (const auto &other : records)
                    if (other.box.x == record.box.x && other.box.w == record.box.w)
                        type_left = std::min(type_left, other.fields[1].x);
                if (type_left <= record.box.x + 1 || type_left >= right) continue;
                for (size_t index = 0; index < record.fields.size(); ++index) {
                    const int left = index == 1 ? type_left : record.box.x;
                    const int end = index == 1 ? right : type_left - 1;
                    NativeTextCard card;
                    card.interior = {left, record.fields[index].y, end - left, 1};
                    card.button_box = record.box;
                    card.character_group_role = index == 2;
                    card.character_group_name = index == 0;
                    card.character_group_type = index == 1;
                    card.character_group_civilization = index == 0 &&
                        lower(normalize_utterance(record.fields[1].source)) == "civilization";
                    card.rows.push_back(record.fields[index]);
                    cards.push_back(std::move(card));
                }
            }
            return cards;
        }
        auto frame = find_graphical_character_panel_frame(*gps_,
            tabs.front().start, tabs.back().end, tabs_y);
        if (!frame) frame = find_ascii_panel_frame(tabs.front().start,
            tabs.back().end, tabs_y, gps_->dimx, gps_->dimy,
            [&](int x, int y) { return static_cast<unsigned char>(read_row(y)[x]); });
        const bool closed_panel = frame.has_value();
        if (!frame) {
            frame = find_character_header_frame(*gps_, tabs.front().start,
                tabs.back().end, tabs_y, [&](int x, int y) {
                    return static_cast<unsigned char>(read_row(y)[x]);
                });
            if (!frame) continue;
            // A clipped lower edge must not disable intact list buttons.
            // Stop at the first missing side, so another pane cannot join.
            const NativePanelBorders borders(*gps_);
            frame->bottom = tabs_y + 1;
            while (frame->bottom < bounds.y + bounds.h &&
                    borders.at(frame->left, frame->bottom, 3) &&
                    borders.at(frame->right, frame->bottom, 5)) ++frame->bottom;
        }

        struct Field { int x, y, length, height; };
        std::vector<Field> fields;
        for (int y = tabs_y + 1; y < frame->bottom; ++y) {
            for (const auto &native : split_text_fields(read_row(y))) {
                if (native.start <= frame->left || native.end > frame->right ||
                    !std::any_of(native.text.begin(), native.text.end(), [](unsigned char ch) {
                        return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ||
                            is_cp437_latin_letter_byte(ch);
                    })) continue;
                Field field{native.start, y, native.end - native.start, 1};
                bool top = false;
                (void)cell_at(field.x, y, &top);
                const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
                const uint32_t half = flags ? flags[static_cast<size_t>(field.x) * gps_->dimy + y]
                    & ((1u << 3) | (1u << 4)) : 0;
                if (half) {
                    field.height = 2;
                    if (half & (1u << 4)) --field.y;
                }
                if (field.y <= tabs_y || field.y + field.height > frame->bottom) continue;
                if (std::none_of(fields.begin(), fields.end(), [&](const Field &seen) {
                        return seen.x == field.x && seen.y == field.y &&
                            seen.length == field.length;
                    })) fields.push_back(field);
            }
        }
        struct Record {
            const Field *name, *type, *role;
            std::optional<SDL_Rect> box;
        };
        std::vector<Record> records;
        int content_left = frame->right, type_left = frame->right;
        int content_right = frame->right - 4;
        for (const auto &name : fields) {
            std::vector<const Field *> heading, detail;
            for (const auto &field : fields) {
                if (field.y == name.y) heading.push_back(&field);
                if (field.y == name.y + name.height) detail.push_back(&field);
            }
            if (heading.size() != 2 || heading.front() != &name ||
                detail.size() != 1 || heading.back()->x <= name.x + name.length ||
                heading.back()->height != name.height) continue;
            auto box = native_button_text_rect(*gps_, name.x,
                heading.back()->x + heading.back()->length, name.y,
                true, nullptr, false, true);
            if (box && (name.height != 1 || detail.front()->height != 1 ||
                    name.y != box->y + 1 || detail.front()->y != box->y + 2 ||
                    box->x - 1 <= frame->left || box->x + box->w >= frame->right ||
                    detail.front()->x < box->x - 1 ||
                    detail.front()->x + detail.front()->length > box->x + box->w))
                box.reset();
            // Without a complete button, retain the graphical two-line
            // contract only inside an independently closed character pane.
            if (!box && (!closed_panel || detail.front()->x != name.x)) continue;
            records.push_back({&name, heading.back(), detail.front(), box});
            content_left = std::min(content_left, box ? std::max(name.x, box->x) : name.x);
            type_left = std::min(type_left, heading.back()->x);
            content_right = std::max(content_right, heading.back()->x + heading.back()->length);
        }
        if (records.empty()) continue;
        content_right = std::min(content_right, frame->right - 1);
        const int name_right = type_left - 1;
        if (content_left >= name_right || type_left >= content_right) continue;

        std::vector<NativeTextCard> cards;
        const auto capture = [&](const Field &field, int left, int right,
                                 const std::optional<SDL_Rect> &box) {
            std::optional<NativeTextCard> card;
            if (box) {
                // The complete typed skin already proves these fields,
                // including text on the left cap and lower edge. Do not
                // reject them again as a generic read-only panel fragment.
                NativeTextCard captured;
                captured.interior = {field.x, field.y, field.length, field.height};
                NativeTextCardRow row;
                row.x = field.x;
                row.y = field.y;
                row.source = read_row(field.y).substr(field.x, field.length);
                for (int x = field.x; x < field.x + field.length; ++x) {
                    bool top = false;
                    const auto *cell = cell_at(x, field.y, &top);
                    if (!cell) return card;
                    row.foregrounds.push_back((cell[1] << 16) | (cell[2] << 8) | cell[3]);
                }
                captured.rows.push_back(std::move(row));
                card = std::move(captured);
            } else {
                card = capture_panel_text_card(
                    {field.x, field.y, field.length, field.height}, true);
            }
            if (!card) return card;
            card->interior.x = left;
            card->interior.w = right - left;
            card->button_box = box;
            return card;
        };
        for (const auto &record : records) {
            const int left = record.box ? std::max(content_left, record.box->x) : content_left;
            const int right = record.box
                ? std::min(content_right, record.box->x + record.box->w) : content_right;
            if (left >= name_right || type_left >= right) continue;
            auto name = capture(*record.name, left, name_right, record.box);
            auto type = capture(*record.type, type_left, right, record.box);
            auto role = capture(*record.role, left, name_right, record.box);
            // All three fields move together, or none of them does.
            if (!name || !type || !role) continue;
            name->character_group_civilization =
                lower(normalize_utterance(type->rows.front().source)) == "civilization";
            name->character_group_name = true;
            type->character_group_type = true;
            role->character_group_role = true;
            cards.push_back(std::move(*name));
            cards.push_back(std::move(*type));
            cards.push_back(std::move(*role));
        }
        return cards;
    }
    return {};
}

void Overlay::append_character_group_field(const NativeTextCard &card,
        std::vector<Match> &matches, int only_y) const {
    if (!native_character_translation_active(gps_)) return;
    if (!card.character_group_name && !card.character_group_type) return;
    const auto captions = captured_clipped_captions();
    for (const auto &row : card.rows) {
        if (only_y >= 0 && row.y != only_y) continue;
        std::string source = row.complete_source.empty() ? row.source : row.complete_source;
        for (const auto &caption : captions)
            if (caption.x == row.x && caption.y == row.y && caption.visible == row.source) {
                source = caption.complete;
                break;
            }
        source = normalize_utterance(source);
        std::optional<std::string> target;
        if (card.character_group_type) {
            // The typed column is a complete UI label, independent of any
            // generic name/prose classification applied to its spelling.
            target = exact_literal_translation("Character group type: " + source);
            if (!target && lower(source).ends_with(" guild")) {
                // Kind 10 appends " guild" to the native plural RAW or
                // profession helper result. It is not a generated name.
                const auto profession = translate_unit_profession(
                    std::string_view(source).substr(0, source.size() - 6));
                const auto guild = exact_literal_translation("Guild");
                if (profession && guild) target = *profession + *guild;
            }
            if (!target) target = exact_literal_translation(source);
        } else {
            // Prefer the actual language_name owner captured at this row's
            // formatter. Equal English names can belong to different entities
            // with different WORD/POS roots; a world-wide spelling lookup
            // cannot resolve that ambiguity.
            for (bool top : {false, true})
                for (const auto &draw : captured_native_drawn_text_view(top))
                    if (draw.x == row.x && draw.y == row.y &&
                            draw.unit_identity_target &&
                            (draw.source.starts_with(row.source) ||
                             (!draw.complete_source.empty() &&
                              normalize_utterance(draw.complete_source) == source))) {
                        target = *draw.unit_identity_target;
                        break;
                    }
            if (!target) target = translate_civilization_reference(source, true);
            // Only the native Civilization label admits political surface
            // vocabulary when the live identity cannot be recovered.
            if (!target && card.character_group_civilization)
                target = translate_procedural_fragment(source,
                    false, false, {}, ProceduralFragmentContext::civilization_name);
            // Unsupported or pending entity fields remain one owned name.
            // A generic medical Band literal must never replace its head
            // while the rest of the organization stays in English.
            if (!target) target = native_text_to_utf8(source);
        }
        if (!target) continue;
        std::erase_if(matches, [&](const Match &match) {
            return match.y == row.y && match.x < row.x + static_cast<int>(row.source.size()) &&
                row.x < match.x + match.length;
        });
        matches.push_back({row.x, row.y, static_cast<int>(row.source.size()),
            kCharacterGroupRowRule, *target, row.source});
    }
}

void Overlay::append_character_group_role(const NativeTextCard &card,
        std::vector<Match> &matches, int only_y) const {
    if (!native_character_translation_active(gps_)) return;
    if (!card.character_group_role) return;
    for (const auto &row : card.rows) {
        if (only_y >= 0 && row.y != only_y) continue;
        const std::string source = normalize_utterance(row.complete_source.empty()
            ? row.source : row.complete_source);
        const std::string folded = lower(source);
        constexpr std::string_view prefix = "former ";
        // The native reputation arm takes priority over the relationship
        // arm. Resolve its complete label, including native spelling errors,
        // before any occupation or generated-office grammar.
        auto target = exact_literal_translation("Character group role: " + source);
        if (!target) {
            const bool former = folded.starts_with(prefix);
            const std::string title = former ? source.substr(prefix.size()) : source;
            // Current/former gendered offices, spouse offices and RAW
            // position.squad[0] titles share the complete role vocabulary.
            // The latter is a soldier category, never an authored squad.alias.
            // Master here denotes an office, rather than a skill or relation.
            auto office = translate_legends_office(title);
            if (!office) office = translate_unit_profession(title);
            if (office && !office->empty()) {
                target = former ? RULESETS.compose_bound_rule("::positions::former",
                    "Former {::positions::singular}", {{"::positions::singular", *office}})
                    : office;
            }
        }
        if (!target) target = native_text_to_utf8(source);
        // Replace the complete role before row composition can join a bare
        // English prefix to independently translated office words. The card
        // still owns the same source span, colors, column and baseline.
        std::erase_if(matches, [&](const Match &match) {
            return match.y == row.y && match.x < row.x + static_cast<int>(row.source.size()) &&
                row.x < match.x + match.length;
        });
        matches.push_back({row.x, row.y, static_cast<int>(row.source.size()),
            kCharacterGroupRowRule, *target, row.source});
    }
}

void Overlay::layout_character_group_rows(SDL_Renderer *renderer) {
    if (!native_character_translation_active(gps_)) return;
    if (!renderer || !face_ || !gps_ || gps_->tile_pixel_x <= 0 ||
        gps_->tile_pixel_y <= 0) return;
    std::vector<Match *> fields;
    for (auto &match : prepared_matches_)
        if (match.rule == kCharacterGroupRowRule && !match.target.empty() &&
            !match.native_split_duplicate) fields.push_back(&match);
    if (fields.empty()) return;

    // These columns were captured from the current card. Keep that ownership
    // independent of the English run and of the translated glyph width.
    const int pixels = unified_font_pixels();
    const int tile_w = gps_->tile_pixel_x;
    const int tile_h = gps_->tile_pixel_y;
    const int origin_x = (gps_->screen_pixel_x - gps_->dimx * tile_w) / 2;
    const int origin_y = (gps_->screen_pixel_y - gps_->dimy * tile_h) / 2;
    for (auto *field : fields) {
        const int left = field->layout_x >= 0 ? field->layout_x : field->x;
        if (field->layout_length <= 0) continue;
        const int width = field->layout_length * tile_w;
        field->layout_box_pixel_x = origin_x + left * tile_w;
        field->layout_box_pixel_width = width;
        field->layout_clip_right = left + field->layout_length;
        field->layout_prepared = true;
        field->layout_line_height_pixels = tile_h;
        field->layout_left = true;
        field->layout_ellipsize = true;
        const int top = field->native_split_text ? field->native_split_top_y
            : (field->layout_y >= 0 ? field->layout_y : field->y);
        field->layout_native_clip = SDL_Rect{field->layout_box_pixel_x,
            origin_y + top * tile_h + field->layout_pixel_y, width,
            (field->native_split_text ? 2 : 1) * tile_h};
        if (field->native_picture_caption_box) {
            const auto &box = *field->native_picture_caption_box;
            field->layout_native_clip = SDL_Rect{field->layout_box_pixel_x,
                origin_y + box.y * tile_h, width, box.h * tile_h};
        }
    }

    if (!native_ui_classic().value_or(false)) return;
    for (const auto *name : fields) {
        if (!name->native_picture_caption_box) continue;
        const auto &box = *name->native_picture_caption_box;
        if (name->y != box.y + 1) continue;
        const auto current = character_group_classic_skin(*gps_,
            box.x - 1, box.x + box.w, box.y);
        if (!current) continue;
        const auto &skin = *current;
        // Only the first heading field owns the repair, not its type column.
        if (std::any_of(fields.begin(), fields.end(), [&](const Match *other) {
                return other->y == name->y && other->x < name->x &&
                    other->native_picture_caption_box &&
                    other->native_picture_caption_box->x == box.x &&
                    other->native_picture_caption_box->y == box.y;
            })) continue;
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
        // Close the native open-left strip and restore the right cap that
        // the type overwrote. Text is inset and retains its source masks.
        repair({box.x - 1, box.y, 1, 1}, 0);
        repair({box.x - 1, box.y + 1, 1, 1}, 3);
        repair({box.x - 1, box.y + 2, 1, 1}, 6);
        repair({box.x + box.w, box.y + 1, 1, 1}, 5);
        repair({box.x, box.y + 2, box.w, 1}, 7);
    }
}
