// Included inside find_matches before complete UI messages and word rules.
// Movement gaits and visibility grades have meanings local to this modal.
// The glossary owns their wording; native headings and the closed frame own
// the fields, including immediate glyph suppression on either screen layer.
    {
        std::vector<std::string> context = screen_rows;
        // Shortcut protection has already removed keys from the work buffer.
        // Read the same native menu for glyph suppression and final drawing;
        // otherwise the raw pass hides a gait that the composed pass misses.
        for (int y = 0; y < gps_->dimy; ++y) {
            for (int x = 0; x < gps_->dimx; ++x) {
                const unsigned char ch = visible_char_at(x, y);
                context[y][x] = ch ? static_cast<char>(ch) : ' ';
            }
        }
        const auto find_caption = [&](int y, int left, int right,
                                      std::string_view literal)
                -> std::optional<LogicalTextField> {
            const auto &row = context[y];
            for (int x = left; x < right; ++x) {
                if (row[x] != literal.front() ||
                    (x > left && ascii_word_byte(row[x - 1]))) continue;
                const auto end = catalog_literal_end(row, x, literal, false);
                if (!end || *end > static_cast<size_t>(right) ||
                    (*end < static_cast<size_t>(right) && ascii_word_byte(row[*end])))
                    continue;
                return LogicalTextField{x, static_cast<int>(*end),
                    row.substr(x, *end - x)};
            }
            return std::nullopt;
        };
        const NativePanelBorders borders(*gps_);
        for (int title_y = 0; title_y < gps_->dimy; ++title_y) {
            const auto title = find_caption(title_y, 0, gps_->dimx, "How will");
            if (!title) continue;
            const auto ending = find_caption(title_y, title->end, gps_->dimx, "move?");
            if (!ending) continue;
            const auto panel = native_panel_interior(borders, *gps_,
                title->start, ending->end, title_y);
            if (!panel) continue;
            const int right = panel->x + panel->w;
            const int bottom = panel->y + panel->h;
            // Gaits belong to the movement heading and its closed modal.
            // Optional stealth/swimming sections bound only their own fields.
            int headings_y = bottom;
            std::optional<LogicalTextField> factors;
            for (int y = title_y + 1; y < bottom; ++y) {
                const auto score = find_caption(y, panel->x, right,
                    "Visual Stealth (w/o Skill)");
                if (!score) continue;
                factors = find_caption(y, score->end, right, "Visual Stealth Factors");
                if (factors) {
                    headings_y = y;
                    break;
                }
            }

            const auto append_field = [&](int y, int first, int end, int field_right,
                                          bool gait = false,
                                          std::string_view semantic_key = {}) {
                if (first >= end || first < panel->x || end > field_right ||
                    field_right > right) return;
                const std::string source = context[y].substr(first, end - first);
                // Context may use the composed grid; source ownership must
                // still agree byte-for-byte with this exact visible layer.
                if (screen_rows[y].compare(first, source.size(), source) != 0) return;
                for (int x = first; x < end; ++x) {
                    if (is_cp437_box_separator(context[y], x)) return;
                    if (screen_override) {
                        bool top = false;
                        cell_at(x, y, &top);
                        if (screen_override != (top ? gps_->screen_top : gps_->screen)) return;
                    }
                }
                std::string complete = source;
                if (gait) {
                    for (const auto &caption : clipped_template_captions) {
                        if (caption.x == first && caption.y == y &&
                                caption.visible == source) {
                            complete = caption.complete;
                            break;
                        }
                    }
                }
                auto target = exact_literal_translation("Adventure movement: " +
                    (semantic_key.empty() ? normalize_utterance(complete)
                                          : std::string(semantic_key)));
                if (!target && !gait && semantic_key.empty())
                    target = exact_literal_translation(complete);
                // A RAW gait is an authored label, even if it has the same
                // spelling as a personal name. Retain an unknown complete
                // field instead of sending its words through name inference.
                if (!target && gait) target = native_text_to_utf8(complete);
                if (!target || target->empty()) return;
                append_setup_paragraph({Match{first, y, end - first,
                    kUiMessageRule, {}, source}}, *target, field_right, field_right);
            };

            // 874a68..874ae2 (classic -2780) builds and draws ONE title:
            // How will + you / the complete 132e430 unit reference + move?.
            // The typed template reuses that formatter's identity binding.
            const std::string title_source = context[title_y].substr(
                title->start, ending->end - title->start);
            bool title_intact = screen_rows[title_y].compare(
                title->start, title_source.size(), title_source) == 0;
            std::vector<int> title_colors;
            for (int x = title->start; x < ending->end; ++x) {
                bool top = false;
                const auto *cell = cell_at(x, title_y, &top);
                if (screen_override && screen_override !=
                        (top ? gps_->screen_top : gps_->screen)) title_intact = false;
                title_colors.push_back(cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3]
                                            : 0xffffff);
            }
            if (title_intact) {
                std::vector<int> translated_colors;
                if (const auto target = translate_help_paragraph(
                        title_source, title_colors, translated_colors, true))
                    append_setup_paragraph({Match{title->start, title_y,
                        ending->end - title->start, kUiMessageRule, {}, title_source}},
                        *target, ending->end, ending->end, translated_colors);
            }

            // Creature definitions supply the gait labels. Read the complete
            // field between its shortcut and Speed, without assuming that a
            // shortcut always selects a walking gait. Neither the shortcut
            // nor its numeric speed is part of the translated source span.
            for (int y = title_y + 1; y < headings_y; ++y) {
                const auto &row = context[y];
                // c394b0 obtains the configured binding's complete name
                // and draws it in color 2. Bind that native field instead
                // of assuming a-f, one character, or an ASCII spelling.
                const auto shortcut_end = [&](int x, int edge) -> std::optional<int> {
                    bool layer = false;
                    const auto *first_cell = cell_at(x, y, &layer);
                    if (!first_cell || static_cast<unsigned char>(row[x]) <= ' ' ||
                            (!std::equal(first_cell + 1, first_cell + 4, gps_->uccolor[2]) &&
                             !std::equal(first_cell + 1, first_cell + 4, gps_->uccolor[10])))
                        return std::nullopt;
                    int end = x;
                    for (; end < edge; ++end) {
                        bool top = false;
                        const auto *cell = cell_at(end, y, &top);
                        if (!cell || top != layer || !cell[0] ||
                                !std::equal(cell + 1, cell + 4, first_cell + 1)) break;
                    }
                    while (end > x && row[end - 1] == ' ') --end;
                    if (end <= x || end >= edge || row[end] != ' ')
                        return std::nullopt;
                    return end;
                };
                int gait_right = right;
                int key_x = panel->x;
                while (key_x < right && row[key_x] == ' ') ++key_x;
                // Classic row buttons retain a real character for the left
                // cap. Locate the shortcut inside the complete native skin,
                // rather than treating the panel's first non-space as a key.
                // Unframed rows keep their original panel-wide bounds.
                for (int x = key_x; x + 2 < right; ++x) {
                    const auto key_end = shortcut_end(x, right);
                    if (!key_end) continue;
                    const auto button = native_button_text_rect(*gps_, x, *key_end, y);
                    if (!button || button->x < panel->x ||
                        button->x + button->w > right || button->y <= title_y ||
                        button->y + button->h > headings_y ||
                        !std::all_of(row.begin() + button->x, row.begin() + x,
                            [](char ch) { return ch == ' '; })) continue;
                    key_x = x;
                    gait_right = button->x + button->w;
                    break;
                }
                const auto key_end = shortcut_end(key_x, gait_right);
                if (!key_end) continue;
                int first = *key_end;
                while (first < gait_right && row[first] == ' ') ++first;
                auto speed = find_caption(y, first, gait_right, "Speed:");
                bool climbing_speed = false;
                int climbing_number = -1;
                // When unit+4cc is not the native non-climbing sentinel,
                // 874f9b emits Climb plus a numeric speed instead of Speed:.
                // A gait itself can contain Climb, so require its separate
                // numeric field rather than taking the first word match.
                if (!speed) {
                    for (int scan = first; scan < gait_right;) {
                        const auto climb = find_caption(y, scan, gait_right, "Climb");
                        if (!climb) break;
                        scan = climb->end;
                        int number = climb->end;
                        while (number < gait_right && row[number] == ' ') ++number;
                        if (climb->start > first && number > climb->end &&
                                number < gait_right && row[number] >= '0' &&
                                row[number] <= '9') {
                            speed = climb;
                            climbing_speed = true;
                            climbing_number = number;
                            break;
                        }
                    }
                }
                if (!speed || speed->end >= gait_right || speed->start <= first ||
                    row[speed->start - 1] != ' ') continue;
                int end = speed->start;
                while (end > first && row[end - 1] == ' ') --end;
                append_field(y, first, end, speed->start, true);
                if (climbing_speed)
                    append_field(y, speed->start, speed->end, climbing_number,
                        false, "Climb speed");
            }

            if (!factors) continue;
            int swimming_y = -1;
            for (int y = headings_y + 1; y < bottom; ++y) {
                if (find_caption(y, panel->x, right, "Swimming Preference")) {
                    swimming_y = y;
                    break;
                }
            }
            if (swimming_y < 0) continue;

            // The two headings divide the grade and factor columns. Only a
            // complete column field can use a scoped alias, so a word inside
            // the explanatory sentence cannot acquire a grade's meaning.
            for (int y = headings_y + 1; y < swimming_y; ++y) {
                for (const auto &[left, field_right] :
                        {std::pair{panel->x, factors->start},
                         std::pair{factors->start, right}}) {
                    const std::string_view band(context[y].data() + left,
                        static_cast<size_t>(field_right - left));
                    const std::string_view field = trim_view(band);
                    if (field.empty()) continue;
                    const int first = left + static_cast<int>(field.data() - band.data());
                    append_field(y, first, first + static_cast<int>(field.size()), field_right);
                }
            }
            // Double-height native headings may occupy the adjacent row;
            // the same modal has already supplied all of its owned fields.
            title_y = swimming_y;
        }
    }
