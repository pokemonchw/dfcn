// Unit assignment uses the common Name/Cat/Prof sort band, a search field
// and portrait records, without the fortress Labor page's tabs or toggles.
// A caption belongs to a visible portrait only inside that record's bounds.
// Captions surviving below those bounds must not be adopted by a nearby unit.
struct FortressUnitChooser {
    SDL_Rect panel{}, viewport{};
    int header_y = -1, name_x = -1, search_y = -1;
    std::vector<SDL_Rect> native_records;
    int skill_x = -1;
    bool trainer = false;
    bool appointment = false;
};

// Nobles' appointment list predates the Name/Cat/Prof chooser widgets. Its
// The candidate writer and complete portrait strips own the visible rows;
// name/profession and relevant skills are separate fields on the same strip.
static std::optional<FortressUnitChooser> fortress_appointment_chooser(
        const graphicst &gps, const std::vector<std::string> &rows) {
    const NativePanelBorders borders(gps);
    for (int tabs_y = 0; tabs_y < gps.dimy; ++tabs_y) {
        const auto &tabs = rows[tabs_y];
        const auto creatures = tabs.find("Creatures"), tasks = tabs.find("Tasks");
        const auto orders = tabs.find("Work orders");
        const auto nobles = tabs.find("Nobles and administrators");
        if (creatures == std::string::npos || tasks == std::string::npos ||
                orders == std::string::npos || nobles == std::string::npos ||
                !(creatures < tasks && tasks < orders && orders < nobles)) continue;
        const auto panel = native_panel_interior(borders, gps,
            static_cast<int>(creatures),
            static_cast<int>(nobles + std::string_view("Nobles and administrators").size()), tabs_y);
        if (!panel) continue;
        const int right = panel->x + panel->w, bottom = panel->y + panel->h;
        int vacant_y = -1;
        for (int y = tabs_y + 1; y < bottom && vacant_y < 0; ++y)
            for (const auto &field : split_text_fields(rows[y]))
                if (field.start >= panel->x && field.end <= right &&
                        lower(field.text) == "leave vacant") { vacant_y = y; break; }
        bool native_appointment = false;
        // Both a unit name and Leave Vacant use this same native list writer.
        // Leave Vacant is the first scrollable entry, not a fixed page heading.
        const uintptr_t base = native_history_profile_base();
        const uintptr_t name_writer = native_ui_semantic_address(0x426807);
        const uintptr_t skill_writer = native_ui_semantic_address(0x426a12);
        const uintptr_t empty_skill_writer = native_ui_semantic_address(0x426adf);
        const std::array batches{captured_native_drawn_text_view(false),
            captured_native_drawn_text_view(true)};
        for (const auto &batch : batches) {
            native_appointment = std::any_of(batch.begin(), batch.end(),
                [&](const NativeDrawnTextRow &draw) {
                    return draw.native_caller && (draw.native_caller == name_writer ||
                        draw.native_caller == skill_writer || draw.native_caller == empty_skill_writer) &&
                        draw.draw_grid == (draw.top_layer ? gps.screen_top : gps.screen) &&
                        draw.draw_dimx == gps.dimx && draw.draw_dimy == gps.dimy &&
                        !draw.source.empty() && draw.x >= panel->x && draw.x < right &&
                        draw.y > tabs_y && draw.y < bottom &&
                        rows[draw.y][draw.x] == draw.source.front() &&
                        native_ui_top_layer_at(gps,
                            static_cast<size_t>(draw.x) * gps.dimy + draw.y) == draw.top_layer;
                });
            if (native_appointment) break;
        }
        if (!native_appointment && vacant_y < 0) continue;
        const int list_top = native_appointment ? tabs_y + 1 : vacant_y + 1;
        std::vector<SDL_Rect> records;
        for (int middle = list_top + 1; middle + 1 < bottom; ++middle)
            for (int x = panel->x; x < right;) {
                int next = x + 1;
                const auto box = native_picture_caption_rect(gps, x, middle,
                    false, &next, true);
                if (box && box->w > 1 && box->x >= panel->x && box->x + box->w <= right &&
                        box->y >= list_top && box->y + box->h <= bottom &&
                        !(vacant_y >= box->y && vacant_y < box->y + box->h)) {
                    bool portrait = false;
                    for (int picture = panel->x; picture < box->x; ++picture) {
                        const int end = native_picture_box_right(gps, picture, middle);
                        if (end == box->x || end == box->x - 1) { portrait = true; break; }
                    }
                    if (portrait && std::none_of(records.begin(), records.end(),
                            [&](const SDL_Rect &seen) { return seen.y == box->y; }))
                        // Native 0x426802 starts the name at L+7, two cells
                        // inside the caption fill at L+5. Keep that inset in
                        // the chooser's shared box.x+1 identity contract.
                        records.push_back({box->x + 1, box->y, box->w - 1, box->h});
                }
                x = std::max(x + 1, next);
            }
        if (records.empty()) continue;
        std::sort(records.begin(), records.end(), [](const SDL_Rect &a, const SDL_Rect &b) {
            return a.y < b.y;
        });
        int skill_x = right;
        for (const auto &box : records) {
            // Native 0x42626f..0x42628f reserves the right thirty cells,
            // then shares the remaining width between identity and skills.
            // The original rectangle begins five cells before its caption
            // fill; records above inset that fill by one more cell. Derive
            // the column from the skin, including when skills are empty.
            const int native_left = box.x - 6, native_right = box.x + box.w;
            const int column = native_right - 30 -
                std::max((native_right - native_left - 50) / 2, 0);
            if (column > box.x + 1 && column < native_right)
                skill_x = std::min(skill_x, column);
        }
        if (skill_x == right) continue;
        return FortressUnitChooser{*panel,
            {panel->x, list_top, panel->w, bottom - list_top},
            list_top - 1, records.front().x + 1, bottom, std::move(records),
            skill_x, false, true};
    }
    return std::nullopt;
}

// The Pets/Livestock trainer picker has a prompt and portrait buttons, but
// no sort band, search field or skills column. Its complete portrait strips
// still own the same name/profession records as the other unit choosers.
static std::optional<FortressUnitChooser> fortress_trainer_chooser(
        const graphicst &gps, const std::vector<std::string> &rows) {
    int tabs_y = -1;
    for (int y = 0; y < gps.dimy; ++y) {
        const auto &row = rows[y];
        const auto resident = std::min(row.find("Residents"), row.find("Citizens"));
        const auto pets = row.find("Pets/Livestock"), other = row.find("Other");
        const auto dead = row.find("Dead/Missing");
        if (resident < pets && pets < other && other < dead &&
                dead != std::string::npos) { tabs_y = y; break; }
    }
    if (tabs_y < 0) return std::nullopt;
    constexpr std::string_view prompt = "Select a trainer for ";
    const NativePanelBorders borders(gps);
    for (int y = tabs_y + 1; y < gps.dimy; ++y) {
        const size_t at = rows[y].find(prompt);
        if (at == std::string::npos || (at > 0 && ascii_word_byte(rows[y][at - 1]))) continue;
        auto panel = native_panel_interior(borders, gps,
            static_cast<int>(at), static_cast<int>(at + prompt.size()), y);
        if (!panel) {
            // This page can reach the viewport edge without a closed bottom
            // border. The actual prompt writer's clip owns the visible page;
            // every candidate still requires its complete portrait strip.
            for (bool top_layer : {false, true}) {
                for (const auto &draw : captured_native_drawn_text_view(top_layer)) {
                    if (draw.x != static_cast<int>(at) || draw.y != y ||
                            !draw.source.starts_with(prompt) || !draw.draw_clip) continue;
                    const auto &clip = *draw.draw_clip;
                    const int left = std::max(clip.x, static_cast<int>(at));
                    const int right = std::min(gps.dimx, clip.x + clip.w);
                    const int top = std::max(0, clip.y);
                    const int bottom = std::min(gps.dimy, clip.y + clip.h);
                    if (left <= static_cast<int>(at) &&
                            right >= static_cast<int>(at + prompt.size()) &&
                            top <= y && bottom > y)
                        panel = SDL_Rect{left, top, right - left, bottom - top};
                    if (panel) break;
                }
                if (panel) break;
            }
        }
        if (!panel) continue;
        const int right = panel->x + panel->w, bottom = panel->y + panel->h;
        std::vector<SDL_Rect> records;
        for (int middle = y + 2; middle + 1 < bottom; ++middle)
            for (int x = panel->x; x < right;) {
                int next = x + 1;
                const auto box = native_picture_caption_rect(gps, x, middle,
                    false, &next, true);
                if (box && box->x >= panel->x && box->x + box->w <= right &&
                        box->y > y && box->y + box->h <= bottom) {
                    bool portrait = false;
                    for (int picture = panel->x; picture < box->x; ++picture) {
                        const int end = native_picture_box_right(gps, picture, middle);
                        if (end == box->x || end == box->x - 1) { portrait = true; break; }
                    }
                    if (portrait && std::none_of(records.begin(), records.end(),
                            [&](const SDL_Rect &seen) {
                                return seen.x == box->x && seen.y == box->y &&
                                    seen.w == box->w && seen.h == box->h;
                            })) records.push_back(*box);
                }
                x = std::max(x + 1, next);
            }
        if (records.empty()) continue;
        std::sort(records.begin(), records.end(), [](const SDL_Rect &a, const SDL_Rect &b) {
            return a.y < b.y;
        });
        const int name_x = std::min_element(records.begin(), records.end(),
            [](const SDL_Rect &a, const SDL_Rect &b) { return a.x < b.x; })->x;
        return FortressUnitChooser{*panel,
            {panel->x, y + 1, panel->w, bottom - y - 1},
            y, name_x, bottom, std::move(records), -1, true};
    }
    return std::nullopt;
}

static std::optional<FortressUnitChooser> fortress_unit_chooser(
        const graphicst &gps, const std::vector<std::string> &rows,
        bool closed_frame_only = false) {
    // Labor owns this same sorter/portrait/worker-toggle combination, plus
    // its separate rated-skill column. The workshop chooser deliberately
    // treats worker-toggle records as identities without skills, so it must
    // never consume the Labor source before that page's own reader runs.
    if (fortress_labor_band(rows)) return std::nullopt;
    if (!closed_frame_only) {
        if (auto appointment = fortress_appointment_chooser(gps, rows)) return appointment;
        if (auto trainer = fortress_trainer_chooser(gps, rows)) return trainer;
    }
    const auto settings = native_ui_settings();
    if (!settings) return std::nullopt;
    if (settings->classic && !closed_frame_only) {
        const auto captures = captured_native_unit_chooser_records();
        const auto same_rect = [](const SDL_Rect &a, const SDL_Rect &b) {
            return a.x == b.x && a.y == b.y && a.w == b.w && a.h == b.h;
        };
        for (const auto &capture : captures) {
            const auto &panel = capture.panel, &viewport = capture.viewport;
            if (panel.x < 0 || panel.y < 0 || panel.w <= 0 || panel.h <= 0 ||
                    panel.x + panel.w > gps.dimx || panel.y + panel.h > gps.dimy ||
                    viewport.x < panel.x || viewport.y < panel.y ||
                    viewport.w <= 0 || viewport.h <= 0 ||
                    viewport.x + viewport.w > panel.x + panel.w ||
                    viewport.y + viewport.h > panel.y + panel.h) continue;
            std::vector<SDL_Rect> records;
            int text_right = panel.x + panel.w;
            int skill_x = text_right;
            for (const auto &row : captures) {
                if (!same_rect(row.panel, panel) || !same_rect(row.viewport, viewport) ||
                        row.box.x < viewport.x || row.box.y < viewport.y ||
                        row.box.w <= 0 || row.box.h != 3 ||
                        row.box.x + row.box.w > panel.x + panel.w ||
                        row.box.y + row.box.h > viewport.y + viewport.h) continue;
                if (std::any_of(records.begin(), records.end(), [&](const SDL_Rect &box) {
                        return same_rect(box, row.box);
                    })) continue;
                records.push_back(row.box);
                text_right = std::min(text_right, row.box.x + row.box.w);
                if (row.skill_x >= row.box.x && row.skill_x < row.box.x + row.box.w)
                    skill_x = std::min(skill_x, row.skill_x);
            }
            if (records.empty() || text_right <= panel.x) continue;
            std::sort(records.begin(), records.end(), [](const SDL_Rect &a, const SDL_Rect &b) {
                return a.y < b.y;
            });
            int search_y = capture.search_y >= viewport.y + viewport.h &&
                    capture.search_y < panel.y + panel.h
                ? capture.search_y : panel.y + panel.h;
            for (int top = panel.y + panel.h - 3;
                    search_y == panel.y + panel.h && top >= viewport.y + viewport.h; --top) {
                bool found = false;
                for (int x = panel.x; x < panel.x + panel.w; ++x) {
                    const auto search = native_widget_textbox_rect_at(gps, x, top, *settings);
                    if (search && search->x + search->w <= panel.x + panel.w) {
                        search_y = search->y;
                        found = true;
                        break;
                    }
                }
                if (found) break;
            }
            // These are the current text widgets' proven unit_list/SKILLS
            // parents, copied while native render still owns the objects.
            // They survive masking of the sort captions and do not depend
            // on classic blank cells retaining graphical metadata.
            // scroll_rows bounds visibility vertically; the native row
            // renderer stretches its caption to unit_list's wider right
            // edge, independently of the row's measured text width.
            return FortressUnitChooser{panel,
                {panel.x, viewport.y, text_right - panel.x, viewport.h},
                -1, records.front().x, search_y, std::move(records),
                skill_x < text_right ? skill_x : -1};
        }
    }
    const NativePanelBorders borders(gps);
    for (int y = 1; y + 3 < gps.dimy; ++y) {
        size_t name = rows[y].find("Name");
        if (name == std::string::npos) continue;
        const size_t cat = rows[y].find("Cat", name + 4);
        const size_t prof = cat == std::string::npos ? cat : rows[y].find("Prof", cat + 3);
        if (cat == std::string::npos || prof == std::string::npos) continue;
        const auto arrows = native_sort_columns(gps, y, *settings);
        if (arrows.size() < 3) continue;
        bool sorted = true;
        for (const auto [x, length] : {std::pair{static_cast<int>(name), 4},
                std::pair{static_cast<int>(cat), 3}, std::pair{static_cast<int>(prof), 4}})
            sorted &= native_sort_caption_span(gps, x, x + length, y, *settings).has_value();
        if (!sorted) continue;
        const SDL_Rect title{static_cast<int>(name), y,
            static_cast<int>(prof + 4 - name), 1};
        // Occluder recognition must prove a closed foreground frame without
        // calling the reader that asks these same occluders for a fallback.
        const auto panel = closed_frame_only
            ? native_panel_interior_with_occluder(borders, gps, title)
            : native_panel_interior(borders, gps, title);
        if (!panel) continue;
        const int right = panel->x + panel->w, bottom = panel->y + panel->h;
        std::optional<SDL_Rect> search;
        for (int top = bottom - 3; top > y + 3 && !search; --top)
            for (int x = panel->x; x < right; ++x) {
                const auto box = native_widget_textbox_rect_at(gps, x, top, *settings);
                if (box && box->x + box->w <= right) { search = box; break; }
            }
        if (!search) continue;
        const auto rails = native_vertical_scrollbar_spans(gps, *panel);
        int first = y + 1, last = search->y, text_right = right;
        if (!rails.empty()) {
            first = gps.dimy;
            last = 0;
            for (const auto &rail : rails) {
                // Scroll caps are inset one row from scroll_rows' bounds.
                first = std::min(first, rail.y - 1);
                last = std::max(last, rail.y + rail.h + 1);
                text_right = std::min(text_right, rail.x);
            }
            first = std::max(first, y + 1);
            last = std::min(last, search->y);
        }
        if (last <= first || text_right <= panel->x) continue;
        return FortressUnitChooser{*panel,
            {panel->x, first, text_right - panel->x, last - first},
            y, static_cast<int>(name), search->y, {}};
    }
    return std::nullopt;
}

// Workshop worker lists have tools/work toggles instead of a SKILLS text
// column. Read their actual sort controls, filter and portrait frame; skill
// text captures cannot establish whether this foreground list exists.
static std::vector<SDL_Rect> native_unit_chooser_overlay_frames(const graphicst &gps) {
    if (!gps.screen || gps.dimx <= 0 || gps.dimx > 1000 ||
            gps.dimy <= 0 || gps.dimy > 1000) return {};
    std::vector<std::string> rows(gps.dimy, std::string(gps.dimx, ' '));
    for (int x = 0; x < gps.dimx; ++x)
        for (int y = 0; y < gps.dimy; ++y) {
            const size_t at = static_cast<size_t>(x) * gps.dimy + y;
            const auto *screen = native_ui_top_layer_at(gps, at) ? gps.screen_top : gps.screen;
            if (screen && screen[at * 8]) rows[y][x] = static_cast<char>(screen[at * 8]);
        }
    const auto chooser = fortress_unit_chooser(gps, rows, true);
    if (!chooser) return {};
    // A sorter and a text field alone can belong to an ordinary table. The
    // chooser also requires a complete visible three-row portrait control.
    const auto &viewport = chooser->viewport;
    for (int y = viewport.y + 1; y + 1 < viewport.y + viewport.h; ++y)
        for (int x = chooser->panel.x; x < chooser->name_x; ++x) {
            const int right = native_picture_box_right(gps, x, y);
            if (right <= x || right > chooser->name_x) continue;
            const auto &panel = chooser->panel;
            return {{panel.x - 1, panel.y - 1, panel.w + 2, panel.h + 2}};
        }
    return {};
}

void Overlay::append_fortress_unit_chooser_rows(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y, bool raw_layer) const {
    const auto rated_skills = [&](std::string_view source) {
        return FortressRosterTranslationScope::skills(source,
            [&] { return translate_rated_skill_list(source); });
    };
    const auto typed_identity = [&](const std::string &source) {
        return FortressRosterTranslationScope::text(
            FortressRosterTranslationScope::TextKind::TypedIdentity, source,
            [&] { return translate_unit_identity(source, true); });
    };
    if (!gps_ || rows.size() != static_cast<size_t>(gps_->dimy)) return;
    auto context = rows;
    if (raw_layer)
        for (int y = 0; y < gps_->dimy; ++y)
            for (int x = 0; x < gps_->dimx; ++x) {
                const auto ch = visible_char_at(x, y);
                context[y][x] = ch ? static_cast<char>(ch) : ' ';
            }
    auto chooser = fortress_unit_chooser(*gps_, context);
    if (!chooser && !raw_layer) {
        // The UI-message reader can already have claimed a chooser prompt or
        // tab. Recover page identity from the visible grid; each field below
        // still has to own its surviving bytes in the supplied work buffer.
        auto native_context = context;
        for (int y = 0; y < gps_->dimy; ++y)
            for (int x = 0; x < gps_->dimx; ++x) {
                const auto ch = visible_char_at(x, y);
                native_context[y][x] = ch ? static_cast<char>(ch) : ' ';
            }
        chooser = fortress_trainer_chooser(*gps_, native_context);
        if (!chooser) chooser = fortress_appointment_chooser(*gps_, native_context);
        if (chooser) context = std::move(native_context);
    }
    if (!chooser) return;
    if (chooser->trainer) {
        struct Choice { int x, y; std::string source, target; };
        std::vector<Choice> choices;
        int choice_left = gps_->dimx;
        for (int y = chooser->header_y + 1; y < chooser->native_records.front().y; ++y)
            for (const auto &field : split_text_fields(context[y])) {
                if ((field.text != "Any trainer" && field.text != "Any unassigned trainer" &&
                     field.text != "None") || field.start < chooser->panel.x ||
                        field.end > chooser->panel.x + chooser->panel.w) continue;
                const auto target = exact_literal_translation(field.text);
                if (!target) continue;
                choices.push_back({field.start, y, field.text, *target});
                choice_left = std::min(choice_left, field.start);
            }
        for (const auto &choice : choices) {
            if (only_y >= 0 && choice.y != only_y) continue;
            const int length = static_cast<int>(choice.source.size());
            const auto append = [&](int offset, int count, bool owner) {
                Match match{choice.x + offset, choice.y, count, kFortressUnitChooserRule,
                    owner ? choice.target : std::string{}, choice.source.substr(offset, count)};
                match.layout_x = choice_left;
                match.layout_length = chooser->panel.x + chooser->panel.w - choice_left;
                match.layout_clip_right = chooser->panel.x + chooser->panel.w;
                match.layout_left = true;
                match.layout_prepared = true;
                matches.push_back(std::move(match));
                std::fill_n(rows[choice.y].begin() + choice.x + offset, count, ' ');
            };
            if (rows[choice.y].compare(choice.x, length, choice.source) == 0) {
                append(0, length, true);
            } else if (raw_layer) {
                for (int offset = 0; offset < length;) {
                    while (offset < length && rows[choice.y][choice.x + offset] != choice.source[offset]) ++offset;
                    const int first = offset;
                    while (offset < length && rows[choice.y][choice.x + offset] == choice.source[offset]) ++offset;
                    if (offset > first) append(first, offset - first, false);
                }
            }
        }
    }
    struct Field {
        int x, y;
        std::string source, complete, target;
        bool skill = false, duplicate = false;
    };
    struct Record { SDL_Rect box; std::vector<Field> fields; };
    std::vector<Record> records;
    const int viewport_bottom = chooser->viewport.y + chooser->viewport.h;
    for (const auto &box : chooser->native_records) records.push_back({box, {}});
    bool worker_controls = false;
    if (records.empty()) {
        // Workshop workers have a portrait and a work-policy toggle instead
        // of a SKILLS column. These current controls own the same three-row
        // identity, even when their artwork overwrites the caption's skin.
        const int viewport_right = chooser->viewport.x + chooser->viewport.w;
        for (int middle = chooser->viewport.y + 1; middle + 1 < viewport_bottom; ++middle) {
            int left = -1;
            for (int x = chooser->panel.x; x < chooser->name_x; ++x) {
                const int right = native_picture_box_right(*gps_, x, middle);
                if (right > x && right <= chooser->name_x) { left = right; break; }
            }
            if (left < 0) continue;
            int right = -1;
            // WORKER_ONLY_DO_ASSIGNED_JOBS / WORKER_DO_ANY_AVAILABLE_JOB.
            for (int x = left; x + 4 <= viewport_right; ++x)
                if (native_main_button_at(*gps_, x, middle, 357) ||
                        native_main_button_at(*gps_, x, middle, 358)) {
                    right = x;
                    break;
                }
            if (right <= left) continue;
            // The profession's tool can stand before the policy toggle.
            // Lower row shading is not foreground artwork or a text boundary.
            for (int y = middle - 1; y <= middle + 1; ++y)
                for (int x = left; x < right; ++x)
                    if (native_foreground_picture_at(*gps_, x, y)) {
                        right = x;
                        break;
                    }
            if (right > left + 1) records.push_back({{left, middle - 1, right - left, 3}, {}});
        }
        worker_controls = !records.empty();
    }
    const bool discover_picture_records = records.empty();
    for (int y = chooser->viewport.y; discover_picture_records && y < viewport_bottom; ++y) {
        const auto box = native_picture_caption_rect(*gps_, chooser->name_x, y,
            false, nullptr, true);
        if (!box || box->y < chooser->viewport.y ||
                box->y + box->h > viewport_bottom ||
                box->x < chooser->panel.x ||
                box->x + box->w > chooser->viewport.x + chooser->viewport.w) continue;
        if (records.empty() || records.back().box.y != box->y) records.push_back({*box, {}});
    }
    if (records.empty()) return;
    auto draws = captured_native_drawn_text_rows();
    const auto top_draws = captured_native_drawn_text_rows(true);
    draws.insert(draws.end(), top_draws.begin(), top_draws.end());
    const auto clipped = captured_clipped_captions();
    const auto native_records = captured_native_unit_chooser_records();
    const auto half_at = [&](int x, int y) {
        bool top = false;
        (void)cell_at(x, y, &top);
        const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
        return flags ? flags[static_cast<size_t>(x) * gps_->dimy + y] &
            ((1u << 3) | (1u << 4)) : 0u;
    };
    int skill_left = chooser->appointment ? chooser->skill_x : gps_->dimx;
    for (size_t index = 0; index < records.size(); ++index) {
        auto &record = records[index];
        const int right = record.box.x + record.box.w;
        const int bottom = record.box.y + record.box.h;
        const auto add_field = [&](int x, int y, const std::string &visible,
                std::string complete, const std::optional<std::string> &identity) {
            if (trim_view(visible).empty() || x < record.box.x || x + static_cast<int>(visible.size()) > right ||
                    context[y].compare(x, visible.size(), visible) != 0) return;
            const std::string_view slot(context[y].data() + x, visible.size());
            for (size_t offset = 0; offset < slot.size(); ++offset)
                if (is_cp437_box_separator(slot, offset) ||
                        (static_cast<unsigned char>(slot[offset]) < ' ' &&
                         slot[offset] != '\x0b' && slot[offset] != '\x0c')) return;
            for (const auto &capture : clipped)
                if (capture.x == x && capture.y == y && capture.visible == visible &&
                        !capture.complete.empty()) { complete = capture.complete; break; }
            // Squad assignment has the same work-policy toggle as workshop
            // workers, but also draws a separate military-skill column. Its
            // live SKILLS widget and complete rated captions retain that
            // ownership regardless of the record's other controls.
            const bool native_skill = !identity && chooser->skill_x >= 0 &&
                x >= chooser->skill_x;
            // A rated-looking authored name at the identity cursor remains
            // a name; grammar only recovers a separate column to its right.
            const bool skill_candidate = !chooser->trainer && !identity && (native_skill ||
                (chooser->skill_x < 0 && x > record.box.x + 1));
            const auto skills = !skill_candidate ? std::nullopt
                : rated_skills(normalize_utterance(complete));
            const bool skill = native_skill || (skills && skills->size() == 1);
            const bool empty_skills = skill_candidate && complete == "No relevant skills";
            std::string source = visible;
            // The widget's saved clip can be narrower than its surviving
            // native text. Own the full skill only when every source byte
            // is still visible at this origin inside the same record.
            if ((skill || empty_skills) && complete.starts_with(visible) &&
                    x + static_cast<int>(complete.size()) <= right &&
                    context[y].compare(x, complete.size(), complete) == 0)
                source = complete;
            for (const auto &field : record.fields)
                if (field.y == y && field.x < x + static_cast<int>(source.size()) &&
                        x < field.x + static_cast<int>(field.source.size())) return;
            std::string target = skill ? (skills && skills->size() == 1
                ? skills->front().target : native_text_to_utf8(complete)) : identity.value_or("");
            if (empty_skills) target = exact_literal_translation(complete).value_or(complete);
            record.fields.push_back({x, y, std::move(source), std::move(complete), std::move(target),
                skill || empty_skills});
            if (skill || empty_skills) skill_left = std::min(skill_left,
                native_skill ? chooser->skill_x : x);
        };
        for (const auto &draw : draws) {
            if (draw.y < record.box.y || draw.y >= bottom || draw.x >= right ||
                    draw.source.empty()) continue;
            int first = std::max(record.box.x, draw.x);
            int last = std::min(right, draw.x + static_cast<int>(draw.source.size()));
            if (draw.draw_clip) {
                const auto &clip = *draw.draw_clip;
                if (draw.y < clip.y || draw.y >= clip.y + clip.h) continue;
                first = std::max(first, clip.x);
                last = std::min(last, clip.x + clip.w);
            }
            if (first >= last) continue;
            std::string visible = draw.source.substr(first - draw.x, last - first);
            // Later native columns may replace a caption's suffix. Retain
            // the formatter-owned full identity behind its surviving prefix.
            size_t length = 0;
            while (length < visible.size() && context[draw.y][first + length] == visible[length]) ++length;
            visible.resize(length);
            bool visible_layer = true;
            for (int x = first; x < first + static_cast<int>(length); ++x)
                if (native_ui_top_layer_at(*gps_, static_cast<size_t>(x) * gps_->dimy + draw.y)
                        != draw.top_layer) { visible_layer = false; break; }
            if (!visible_layer) continue;
            add_field(first, draw.y, visible,
                draw.complete_source.empty() ? draw.source : draw.complete_source,
                draw.unit_identity_target);
        }
        for (int y = record.box.y; y < bottom; ++y) {
            std::string slot = context[y].substr(record.box.x, record.box.w);
            // Border cells are outside the text fields, including an edge
            // partly overwritten by a native name or skill continuation.
            for (size_t offset = 0; offset < slot.size(); ++offset)
                if (is_cp437_box_separator(slot, offset)) slot[offset] = ' ';
            for (const auto &field : split_text_fields(slot))
                add_field(record.box.x + field.start, y, field.text, field.text, {});
        }
        std::sort(record.fields.begin(), record.fields.end(), [](const Field &a, const Field &b) {
            return a.y != b.y ? a.y < b.y : a.x < b.x;
        });
        for (auto &field : record.fields)
            field.duplicate = half_at(field.x, field.y) == (1u << 4) &&
                std::any_of(record.fields.begin(), record.fields.end(), [&](const Field &other) {
                    return other.x == field.x && other.y + 1 == field.y &&
                        other.source == field.source && half_at(other.x, other.y) == (1u << 3);
                });
    }
    // Skills and worker controls are separate columns with a common identity
    // budget. Short English names must not change the left edge or font size.
    if (skill_left == gps_->dimx && !worker_controls && !chooser->trainer) return;
    int identity_right = skill_left - 1;
    if (chooser->trainer) identity_right = gps_->dimx;
    if (worker_controls && skill_left == gps_->dimx) {
        identity_right = gps_->dimx;
        for (const auto &record : records)
            identity_right = std::min(identity_right, record.box.x + record.box.w);
    }
    const auto suppress_outside_record = [&](int x, int y, const std::string &source,
            const std::string &complete) {
        if (x < skill_left || y < chooser->viewport.y || y >= chooser->search_y ||
                x + static_cast<int>(source.size()) > chooser->viewport.x + chooser->viewport.w ||
                source.empty() || context[y].compare(x, source.size(), source) != 0) return;
        for (const auto &record : records)
            if (y >= record.box.y && y < record.box.y + record.box.h) return;
        const auto skills = rated_skills(normalize_utterance(complete));
        if ((!skills || skills->size() != 1) && complete != "No relevant skills") return;
        const int length = static_cast<int>(source.size());
        const auto append = [&](int offset, int count) {
            if (only_y >= 0 && y != only_y) return;
            matches.push_back(Match{x + offset, y, count, kFortressUnitChooserRule,
                {}, source.substr(offset, count)});
        };
        if (rows[y].compare(x, length, source) == 0) {
            append(0, length);
            std::fill_n(rows[y].begin() + x, length, ' ');
        } else if (raw_layer) {
            for (int offset = 0; offset < length;) {
                while (offset < length && rows[y][x + offset] != source[offset]) ++offset;
                const int first = offset;
                while (offset < length && rows[y][x + offset] == source[offset]) ++offset;
                if (offset == first) continue;
                append(first, offset - first);
                std::fill_n(rows[y].begin() + x + first, offset - first, ' ');
            }
        }
    };
    for (const auto &draw : draws) {
        if (draw.unit_identity_target || draw.y < chooser->viewport.y ||
                draw.y >= chooser->search_y || draw.source.empty()) continue;
        int first = std::max(skill_left, draw.x);
        int last = std::min(chooser->viewport.x + chooser->viewport.w,
            draw.x + static_cast<int>(draw.source.size()));
        if (draw.draw_clip) {
            const auto &clip = *draw.draw_clip;
            if (draw.y < clip.y || draw.y >= clip.y + clip.h) continue;
            first = std::max(first, clip.x);
            last = std::min(last, clip.x + clip.w);
        }
        if (first >= last) continue;
        std::string source = draw.source.substr(first - draw.x, last - first);
        size_t length = 0;
        while (length < source.size() && context[draw.y][first + length] == source[length]) ++length;
        source.resize(length);
        bool visible_layer = true;
        for (int x = first; x < first + static_cast<int>(length); ++x)
            if (native_ui_top_layer_at(*gps_, static_cast<size_t>(x) * gps_->dimy + draw.y)
                    != draw.top_layer) { visible_layer = false; break; }
        if (!visible_layer) continue;
        suppress_outside_record(first, draw.y, source,
            draw.complete_source.empty() ? draw.source : draw.complete_source);
    }
    for (int y = chooser->viewport.y; skill_left < chooser->viewport.x + chooser->viewport.w &&
            y < chooser->search_y; ++y) {
        std::string slot = context[y].substr(skill_left,
            chooser->viewport.x + chooser->viewport.w - skill_left);
        for (size_t offset = 0; offset < slot.size(); ++offset)
            if (is_cp437_box_separator(slot, offset)) slot[offset] = ' ';
        for (const auto &field : split_text_fields(slot))
            suppress_outside_record(skill_left + field.start, y, field.text, field.text);
    }
    for (auto &record : records) {
        std::string identity_source;
        std::vector<const Field *> identities;
        for (const auto &field : record.fields) {
            if (field.skill || field.duplicate || field.x >= skill_left) continue;
            if (std::any_of(identities.begin(), identities.end(), [&](const Field *other) {
                    return other->complete == field.complete;
                })) continue;
            identities.push_back(&field);
            if (!identity_source.empty()) identity_source += ' ';
            identity_source += normalize_utterance(field.complete);
        }
        std::optional<std::string> squad_name;
        std::optional<std::string> identity;
        const auto owns_native_caption = [&](int x, int y,
                std::initializer_list<std::string_view> sources) {
            return std::any_of(record.fields.begin(), record.fields.end(),
                [&](const Field &field) {
                    if (field.skill || field.x >= skill_left || field.x != x ||
                            field.y != y || field.source.empty()) return false;
                    return std::any_of(sources.begin(), sources.end(),
                        [&](std::string_view source) {
                            return !source.empty() && source.starts_with(field.source);
                        });
                });
        };
        for (const auto &native : native_records) {
            // The native row spans the unit list, while graphical portrait
            // records stop before their tool/policy controls. Those records
            // share the same origin and height, but not the same width.
            // Bind the contained text area through its exact captions below.
            if (native.box.x != record.box.x || native.box.y != record.box.y ||
                    native.box.w < record.box.w || native.box.h != record.box.h ||
                    native.squad_position < 0 || native.squad_name_source.empty() ||
                    native.unit_identity_source.empty()) continue;
            // Name and profession can be shortened independently. Captured
            // fields may mix complete text with visible abbreviations, so
            // joining their complete metadata need not reproduce either
            // native identity string. Bind the actual surviving bytes at
            // both native cursors; the row's unit already owns the full
            // semantic target, including any profession continuation.
            if (!owns_native_caption(native.squad_caption_x, native.squad_caption_y,
                    {native.squad_caption_source, native.squad_caption_complete_source}) ||
                    !owns_native_caption(native.unit_identity_x, native.unit_identity_y,
                        {native.unit_identity_source, native.unit_identity_complete_source,
                         native.unit_identity_split_source})) continue;
            // The native squad callback and the NAME widget own separate
            // fields. A squad heading must never enter the person parser.
            // Only the captured squad object establishes alias versus name.
            if (native.squad_alias) squad_name = native_text_to_utf8(*native.squad_alias);
            if (!squad_name && native.generated_squad_name)
                squad_name = translate_history_name(*native.generated_squad_name);
            if (!squad_name) squad_name = native_text_to_utf8(native.squad_name_source);
            auto slot = exact_literal_translation("Squad assignment: Member position");
            constexpr std::string_view placeholder = "{position}";
            if (slot) {
                const size_t at = slot->find(placeholder);
                if (at != std::string::npos)
                    slot->replace(at, placeholder.size(), std::to_string(native.squad_position + 1));
                else slot.reset();
            }
            identity = slot.value_or("Pos " + std::to_string(native.squad_position) + " ") +
                native.unit_identity_target.value_or(native_text_to_utf8(native.unit_identity_complete_source));
            break;
        }
        if (!identity && !identities.empty() && !identities.front()->target.empty()) {
            if (identities.size() == 1) identity = identities.front()->target;
            else {
                std::string profession;
                for (size_t index = 1; index < identities.size(); ++index) {
                    if (!profession.empty()) profession += ' ';
                    profession += normalize_utterance(identities[index]->complete);
                }
                std::string_view role_source(profession);
                const std::string sex = take_unit_sex_suffix(role_source);
                const auto role = FortressRosterTranslationScope::text(
                    FortressRosterTranslationScope::TextKind::TypedProfession,
                    std::string(role_source),
                    [&] { return translate_unit_profession(role_source, true); });
                if (role) identity = identities.front()->target + "，" + *role + sex;
            }
        }
        if (!identity && identities.size() > 1 &&
                identities.front()->complete.find(',') == std::string::npos) {
            // Native narrow rows draw profession on a separate line. Supply
            // its separator to the common identity parser before joining it.
            std::string separated = identity_source;
            separated.insert(normalize_utterance(identities.front()->complete).size(), ",");
            identity = typed_identity(separated);
        }
        if (!identity) identity = typed_identity(identity_source);
        if (!identity || identity->empty())
            identity = FortressRosterTranslationScope::text(
                FortressRosterTranslationScope::TextKind::ProceduralIdentity, identity_source,
                [&] { return translate_procedural_fragment(identity_source); });
        if (!identity || identity->empty()) identity = native_text_to_utf8(identity_source);
        bool first_identity = true;
        std::optional<Match> squad_member;
        for (const auto &field : record.fields) {
            if (!field.skill && field.x >= skill_left) continue;
            const int length = static_cast<int>(field.source.size());
            const auto append = [&](int offset, int count, const std::string &target) {
                if (only_y >= 0 && field.y != only_y) return;
                Match match{field.x + offset, field.y, count, kFortressUnitChooserRule,
                    target, field.source.substr(offset, count)};
                match.native_picture_caption_box = record.box;
                match.layout_x = field.skill
                    ? (chooser->appointment ? field.x : skill_left) : record.box.x + 1;
                match.layout_y = record.box.y + 1;
                match.layout_clip_right = field.skill ? record.box.x + record.box.w
                    : std::min(record.box.x + record.box.w, identity_right);
                if (field.skill && chooser->appointment)
                    for (const auto &other : record.fields)
                        if (other.skill && other.y == field.y && other.x > field.x)
                            match.layout_clip_right = std::min(match.layout_clip_right, other.x);
                match.layout_length = match.layout_clip_right - match.layout_x;
                match.layout_fixed_baseline = true;
                match.layout_left = true;
                match.layout_prepared = true;
                bool top = false;
                const auto *cell = cell_at(field.x, field.y, &top);
                if (cell) match.layout_foreground_rgb = (cell[1] << 16) | (cell[2] << 8) | cell[3];
                if (squad_name && !field.skill && !target.empty()) {
                    squad_member = match;
                    squad_member->target = *identity;
                    squad_member->source.clear();
                    squad_member->length = 0;
                    squad_member->y = record.box.y + 1;
                }
                matches.push_back(std::move(match));
            };
            if (rows[field.y].compare(field.x, length, field.source) == 0) {
                std::string target;
                if (!field.duplicate) {
                    if (field.skill) target = field.target;
                    else if (first_identity) {
                        target = squad_name ? *squad_name : *identity;
                        first_identity = false;
                    }
                }
                append(0, length, target);
                std::fill_n(rows[field.y].begin() + field.x, length, ' ');
            } else if (raw_layer) {
                for (int offset = 0; offset < length;) {
                    while (offset < length && rows[field.y][field.x + offset] != field.source[offset]) ++offset;
                    const int first = offset;
                    while (offset < length && rows[field.y][field.x + offset] == field.source[offset]) ++offset;
                    if (offset == first) continue;
                    append(first, offset - first, {});
                    std::fill_n(rows[field.y].begin() + field.x + first, offset - first, ' ');
                }
            }
        }
        if (squad_member) matches.push_back(std::move(*squad_member));
    }
}

void Overlay::layout_fortress_unit_chooser(SDL_Renderer *renderer) {
    if (!gps_ || !renderer || !face_ || gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    std::map<std::array<int, 4>, std::vector<Match *>> records;
    for (auto &match : prepared_matches_) {
        if (match.rule == kFortressUnitChooserRule && !match.native_picture_caption_box &&
                !match.target.empty() && !match.native_split_duplicate) {
            // Trainer policy choices are text actions above the portrait
            // list. Keep their common native left edge after generic layout.
            match.layout_box_pixel_x = -1;
            match.layout_box_pixel_width = 0;
            match.layout_left = true;
            match.layout_right = false;
            match.layout_ellipsize = true;
            match.layout_prepared = true;
            match.layout_line_height_pixels = gps_->tile_pixel_y;
        }
        if (match.rule == kFortressUnitChooserRule && match.native_picture_caption_box) {
            const auto &box = *match.native_picture_caption_box;
            records[{box.x, box.y, box.w, box.h}].push_back(&match);
        }
    }
    const int tile_w = gps_->tile_pixel_x, tile_h = gps_->tile_pixel_y;
    const int origin_x = (gps_->screen_pixel_x - gps_->dimx * tile_w) / 2;
    const int origin_y = (gps_->screen_pixel_y - gps_->dimy * tile_h) / 2;
    std::vector<Match> professions;
    for (auto &[key, fields] : records) {
        const SDL_Rect box{key[0], key[1], key[2], key[3]};
        std::sort(fields.begin(), fields.end(), [](const Match *a, const Match *b) {
            return a->y != b->y ? a->y < b->y : a->x < b->x;
        });
        std::vector<Match *> identity_lines;
        for (auto *field : fields)
            if (!field->target.empty() && !field->native_split_duplicate &&
                    field->layout_x == box.x + 1) identity_lines.push_back(field);
        std::stable_sort(identity_lines.begin(), identity_lines.end(),
            [](const Match *a, const Match *b) { return !a->source.empty() && b->source.empty(); });
        for (auto *field : fields) {
            if (field->target.empty() || field->native_split_duplicate) continue;
            const bool skill = field->layout_x != box.x + 1;
            const int left = field->layout_x, right = field->layout_clip_right;
            if (left >= right) continue;
            field->layout_box_pixel_x = -1;
            field->layout_box_pixel_width = 0;
            const bool skill_half = skill && field->native_split_text;
            field->layout_y = skill ? (skill_half ? field->native_split_top_y : field->y)
                : box.y + 1;
            field->layout_pixel_y = skill_half ? tile_h / 2 : 0;
            field->layout_fixed_baseline = !skill_half;
            field->layout_right = false;
            field->layout_ellipsize = true;
            field->layout_left = true;
            field->layout_prepared = true;
            field->layout_line_height_pixels = tile_h;
            field->layout_native_clip = SDL_Rect{origin_x + left * tile_w,
                origin_y + box.y * tile_h, (right - left) * tile_w, box.h * tile_h};
            if (!skill && identity_lines.size() == 2) {
                // Keep the proven squad name intact on its own baseline,
                // including authored commas, digits and Chinese spelling.
                field->layout_y = box.y + (field == identity_lines.front() ? 0 : 1);
                field->layout_pixel_y = tile_h / 2;
                continue;
            }
            if (!skill) {
                const auto fitted = ellipsize_text(field->target,
                    (right - left) * tile_w - 2 * config_.horizontal_padding);
                const size_t comma = field->target.find("，");
                if (fitted && fitted->shortened && comma != std::string::npos &&
                        comma > 0 && comma + 3 < field->target.size()) {
                    // Use the existing row's two interior baselines when a
                    // long name would otherwise hide its profession suffix.
                    Match profession = *field;
                    profession.source.clear();
                    profession.length = 0;
                    profession.target = field->target.substr(comma + 3);
                    profession.layout_y = box.y + 1;
                    profession.layout_pixel_y = tile_h / 2;
                    professions.push_back(std::move(profession));
                    field->target.resize(comma);
                    field->layout_y = box.y;
                    field->layout_pixel_y = tile_h / 2;
                }
            }
        }
    }
    prepared_matches_.insert(prepared_matches_.end(),
        std::make_move_iterator(professions.begin()), std::make_move_iterator(professions.end()));
}
