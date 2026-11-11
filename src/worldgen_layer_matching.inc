// The native world-generation renderer owns this page and publishes its
// actual addst captions, token positions and panel geometry. Matching reads
// only those writes; it never discovers text by walking the screen grid.
std::vector<Match> Overlay::find_native_worldgen_matches() const {
    std::vector<Match> result;
    if (!gps_ || !gps_->screen || !g_native_worldgen_layer.ready ||
            gps_->dimx <= 0 || gps_->dimy <= 0 || gps_->tile_pixel_x <= 0 ||
            gps_->tile_pixel_y <= 0 || trie_.empty()) return result;
    const int left = std::clamp(g_native_worldgen_panel.x + 1, 0, gps_->dimx);
    const int right = std::clamp(g_native_worldgen_panel.x +
        g_native_worldgen_panel.w - 1, left, gps_->dimx);
    if (left >= right) return result;
    const int tile_w = gps_->tile_pixel_x, tile_h = gps_->tile_pixel_y;
    const int origin_x = (gps_->screen_pixel_x - gps_->dimx * tile_w) / 2;
    const int origin_y = (gps_->screen_pixel_y - gps_->dimy * tile_h) / 2;
    const auto pixels = [&](const SDL_Rect &cells) {
        return SDL_Rect{origin_x + cells.x * tile_w, origin_y + cells.y * tile_h,
            cells.w * tile_w, cells.h * tile_h};
    };
    const int panel_bottom = std::clamp(g_native_worldgen_panel.y +
        g_native_worldgen_panel.h, 0, gps_->dimy);
    const auto inside_panel = [&](const NativeTextCardRow &row) {
        return row.x >= left && row.x < right && row.y >= 0 && row.y < panel_bottom;
    };
    const NativePanelBorders borders(*gps_);
    const auto field_bounds = [&](int x, int y, int length) {
        // Footer/hover writers have their own captured spans. Their text
        // must not borrow the progress panel's rectangle over the map.
        if (x >= left && x < right && y >= 0 && y < panel_bottom)
            return SDL_Rect{left, 0, right - left, panel_bottom};
        const int end = std::min(gps_->dimx, x + length);
        const auto panel = native_panel_interior(borders, *gps_, x, end, y);
        return SDL_Rect{x, y, panel ? panel->x + panel->w - x : end - x, 1};
    };
    const auto field_clip = [&](const NativeTextCardRow &row) {
        return pixels(field_bounds(row.x, row.y, static_cast<int>(row.source.size())));
    };
    enum class Geography { None, Region, Landform, RiverLabel, River, Volcano, SiteName, SiteGloss };
    uintptr_t region_return = 0, landform_return = 0, river_return = 0, site_return = 0;
    std::array<uintptr_t, 5> river_label_returns{};
    std::array<uintptr_t, 3> site_gloss_returns{};
#ifdef _WIN32
    // These addst writers render the hovered region and its containing
    // landmass on rows 1/2. Bind meaning to their native source, not spelling
    // or a panel's position beside the progress/parameter controls.
    const auto base = native_history_profile_base();
    region_return = native_reference_address(base, 0xdfc756);
    landform_return = native_reference_address(base, 0xdfc7c6);
    // The river label is a separate writer. This common name writer follows
    // all five river-size labels and may receive an abbreviated native name.
    river_return = native_reference_address(base, 0xdfe5dd);
    river_label_returns = {native_reference_address(base, 0xdfe3a2),
        native_reference_address(base, 0xdfe3fd), native_reference_address(base, 0xdfe44c),
        native_reference_address(base, 0xdfe4af), native_reference_address(base, 0xdfe4f2)};
    // The site loop draws its native name, then quotes around EnglishName.
    // Its following type/species description remains an independent field.
    site_return = native_reference_address(base, 0xdfde74);
    site_gloss_returns = {native_reference_address(base, 0xdfdece),
        native_reference_address(base, 0xdfdef4), native_reference_address(base, 0xdfdf21)};
#endif
    struct Field {
        NativeTextCardRow row;
        bool editable = false;
        Geography geography = Geography::None;
        std::shared_ptr<const NativeHistoryName> site_name;
        std::shared_ptr<const NativeRiverNameFact> river_name;
        std::shared_ptr<const NativeVolcanoNameFact> volcano_name;
    };
    const auto complete_text = [](const NativeTextCardRow &row) {
        return trim_view(row.complete_source.empty() ? row.source : row.complete_source);
    };
    std::map<int, std::vector<Field>> fields;
    // The paragraph fitter only mutates its owned source spans. Uncaptured
    // rows stay empty, and no context is populated from a full-screen read.
    std::vector<std::string> context(gps_->dimy);
    const auto remember_span = [&](int x, int y, std::string_view source) {
        auto &row = context[y];
        if (row.size() < static_cast<size_t>(x) + source.size())
            row.resize(static_cast<size_t>(x) + source.size(), ' ');
        row.replace(x, source.size(), source);
    };
    const auto source_color = [&](int x, int y) {
        bool top = false;
        const auto *cell = cell_at(x, y, &top);
        return cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : 0xc0c0c0;
    };
    const auto draws = std::array{captured_native_drawn_text_view(),
        captured_native_drawn_text_view(true)};
    const auto mod_list = native_mod_list_layout(*gps_, [&](int x, int y) {
        return visible_char_at(x, y);
    });
    std::vector<Match> mod_fields;
    if (mod_list)
        for (auto &row : context) row.resize(static_cast<size_t>(gps_->dimx), ' ');
    for (const auto &plane : draws) for (const auto &draw : plane) {
        if (draw.y < 0 || draw.y >= gps_->dimy || draw.source.empty() ||
                draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                draw.draw_grid != (draw.top_layer ? gps_->screen_top : gps_->screen)) continue;
        int first = std::max(0, draw.x);
        int end = static_cast<int>(std::min<int64_t>(gps_->dimx,
            int64_t(draw.x) + int64_t(draw.source.size())));
        if (draw.draw_clip) {
            if (draw.y < draw.draw_clip->y || draw.y >= draw.draw_clip->y + draw.draw_clip->h)
                continue;
            first = std::max(first, draw.draw_clip->x);
            end = std::min(end, draw.draw_clip->x + draw.draw_clip->w);
        }
        while (first < end && draw.source[first - draw.x] == ' ') ++first;
        while (end > first && draw.source[end - draw.x - 1] == ' ') --end;
        if (first >= end) continue;
        bool current = true;
        for (int x = first; current && x < end; ++x) {
            bool top = false;
            const auto *cell = cell_at(x, draw.y, &top);
            current = cell && cell[0] == static_cast<unsigned char>(draw.source[x - draw.x]);
            if (current && cell[0] != ' ') {
                const auto origin = native_text_grid_origin(*gps_,
                    static_cast<size_t>(x) * gps_->dimy + draw.y, top);
                current = origin.grid == draw.draw_grid && origin.top_layer == draw.top_layer;
            }
        }
        if (!current) continue;
        NativeTextCardRow row;
        row.x = first; row.y = draw.y;
        row.source = draw.source.substr(first - draw.x, end - first);
        row.complete_source = draw.complete_source;
        for (int x = first; x < end; ++x) row.foregrounds.push_back(source_color(x, draw.y));
        // This page has its own caption matcher. Claim package fields before
        // joining rows or applying literal/numeric rules, just as the common
        // mod-list reader does. Only captured writes populate this context.
        if (mod_list) {
            const Match span{row.x, row.y, static_cast<int>(row.source.size()),
                kUiMessageRule, {}, row.source};
            if (mod_list->owns_name(span) || mod_list->owns_details(span)) {
                remember_span(row.x, row.y, row.source);
                continue;
            }
        }
        const auto complete = complete_text(row);
        const bool volcano_label = !draw.editable_text && complete.starts_with("Volcano:") &&
            (complete.size() == 8 || complete[8] == ' ');
        const auto geography = draw.volcano_name || volcano_label ? Geography::Volcano :
            draw.river_name ? Geography::River :
            draw.native_caller && draw.native_caller == region_return
            ? Geography::Region : draw.native_caller && draw.native_caller == landform_return
            ? Geography::Landform : draw.native_caller && draw.native_caller == river_return
            ? Geography::River : draw.native_caller && std::find(river_label_returns.begin(),
                river_label_returns.end(), draw.native_caller) != river_label_returns.end()
            ? Geography::RiverLabel : draw.native_caller && draw.native_caller == site_return
            ? Geography::SiteName : draw.native_caller && std::find(site_gloss_returns.begin(),
                site_gloss_returns.end(), draw.native_caller) != site_gloss_returns.end()
            ? Geography::SiteGloss : Geography::None;
        Field field{std::move(row), draw.editable_text, geography,
            draw.site_name, draw.river_name, draw.volcano_name};
        auto &row_fields = fields[draw.y];
        if (geography == Geography::Volcano) {
            // A typed caption owns the complete name when another retained
            // write has the same visible bytes but only its shortened text.
            const auto same = std::find_if(row_fields.begin(), row_fields.end(),
                [&](const Field &other) {
                    return other.geography == Geography::Volcano &&
                        other.row.x == field.row.x && other.row.source == field.row.source;
                });
            if (same != row_fields.end()) {
                if (field.volcano_name || !same->volcano_name) *same = std::move(field);
                continue;
            }
        }
        row_fields.push_back(std::move(field));
    }
    if (mod_list) append_mod_list_details(*mod_list, context, mod_fields, true);
    // Native labels, names and counters may be emitted by several addst
    // calls. Join adjacent writes without merging a distant right-side key
    // hint into the title, or merging authored text with a translated label.
    for (auto &[y, rows] : fields) {
        std::stable_sort(rows.begin(), rows.end(), [](const auto &a, const auto &b) {
            return a.row.x != b.row.x ? a.row.x < b.row.x : a.row.source.size() > b.row.source.size();
        });
        std::vector<Field> joined;
        for (auto &field : rows) {
            const bool name_parts = !joined.empty() &&
                field.row.x >= joined.back().row.x + static_cast<int>(joined.back().row.source.size()) &&
                ((joined.back().geography == Geography::RiverLabel && field.geography == Geography::River) ||
                 (joined.back().geography == Geography::SiteGloss && field.geography == Geography::SiteGloss));
            if (joined.empty() || field.editable || joined.back().editable ||
                    (!name_parts && (field.geography != Geography::None ||
                        joined.back().geography != Geography::None)) ||
                    field.row.x > joined.back().row.x +
                        static_cast<int>(joined.back().row.source.size()) + 2) {
                joined.push_back(std::move(field));
                continue;
            }
            auto &row = joined.back().row;
            const int previous_end = row.x + static_cast<int>(row.source.size());
            const int next_end = field.row.x + static_cast<int>(field.row.source.size());
            if (next_end <= previous_end) continue;
            // A shortened span has no byte offset into its complete source.
            // Only disjoint writes can join such fields without losing text.
            if (field.row.x < previous_end &&
                    (complete_text(row) != row.source || complete_text(field.row) != field.row.source)) {
                joined.push_back(std::move(field));
                continue;
            }
            // dfaa08 draws the full in-memory era title at width 37, then
            // dfaa47 appends the year. Preserve both original strings even
            // when the first draw abbreviates words or removes the determiner.
            // Visible bytes below own only suppression and layout geometry.
            std::string complete(complete_text(row));
            if (field.row.x >= previous_end) {
                complete.append(static_cast<size_t>(field.row.x - previous_end), ' ');
                complete += complete_text(field.row);
            } else complete += complete_text(field.row).substr(previous_end - field.row.x);
            if (name_parts) {
                joined.back().geography = field.geography;
                // Quote writers have no site object. Keep the snapshot owned
                // by the English-name writer when the three runs are joined.
                if (field.site_name) joined.back().site_name = field.site_name;
                if (field.river_name) joined.back().river_name = field.river_name;
            }
            for (int x = previous_end; x < field.row.x; ++x) {
                const auto ch = visible_char_at(x, y);
                row.source.push_back(ch ? static_cast<char>(ch) : ' ');
                row.foregrounds.push_back(source_color(x, y));
            }
            const size_t skip = static_cast<size_t>(std::max(0, previous_end - field.row.x));
            row.source += field.row.source.substr(skip);
            row.foregrounds.insert(row.foregrounds.end(), field.row.foregrounds.begin() + skip,
                field.row.foregrounds.end());
            row.complete_source = std::move(complete);
        }
        rows = std::move(joined);
        for (const auto &field : rows) remember_span(field.row.x, y, field.row.source);
    }
    int heading_y = -1;
    for (const auto &[y, rows] : fields) for (const auto &field : rows)
        if (!field.editable && trim_view(field.row.source).starts_with("An abridged chronicle ("))
            heading_y = heading_y < 0 ? y : std::min(heading_y, y);
    const auto native_rows = native_history_chronicle_row_bounds();
    const int prose_top = heading_y < 0 ? gps_->dimy : std::max(heading_y + 1,
        native_rows ? native_rows->first : heading_y + 1);
    int prose_bottom = native_rows ? std::min(panel_bottom, native_rows->second) : panel_bottom;
    const auto settings = native_ui_settings();
    std::set<std::tuple<int, int, int, std::string>> control_drawn;
    std::set<std::pair<int, int>> reserved_fields;
    const auto retain_source = [&](const NativeTextCardRow &row, int rule) {
        Match match{row.x, row.y, static_cast<int>(row.source.size()), rule, {}, row.source};
        match.native_help_source_only = true;
        match.native_help_review_source = row.source;
        match.layout_native_clip = field_clip(row);
        result.push_back(std::move(match));
    };
    for (const auto &[y, rows] : fields) for (const auto &field : rows) {
        const auto &row = field.row;
        if (field.editable) {
            const size_t begin = result.size();
            append_direct_utf8_matches(row.source, y, result);
            for (size_t i = begin; i < result.size(); ++i) {
                result[i].x += row.x;
                result[i].layout_native_clip = field_clip(row);
            }
            reserved_fields.emplace(y, row.x);
            continue;
        }
        if (field.geography != Geography::None) continue;
        const auto button = settings ? native_intro_button_text_rect(*gps_, row.x,
            row.x + static_cast<int>(row.source.size()), y, *settings, true) : std::nullopt;
        if (!button) continue;
        prose_bottom = std::min(prose_bottom, button->y);
        reserved_fields.emplace(y, row.x);
        const auto source = normalize_utterance(row.source);
        auto target = exact_literal_translation(source);
        std::shared_ptr<const dfcn::TranslationResult> translation;
        // History-length buttons use the same numeric rules as ordinary
        // fields. Reserved widgets do not reach the field template matcher,
        // so resolve their complete numeric captions here as well.
        if (!target) for (int index : candidate_template_rules(source)) {
            const auto &rule = rules_[index];
            if (!rule.numeric_template || rule.template_kinds.empty() ||
                    !std::all_of(rule.template_kinds.begin(), rule.template_kinds.end(),
                        [](char kind) { return kind == 'd'; })) continue;
            size_t end = 0;
            std::vector<std::string> captures;
            if (!match_template(rule, source, 0, &end, &captures) ||
                    end != source.size()) continue;
            auto resolved = translate_template_captures_display(rule, captures, source);
            if (!resolved.usable()) continue;
            target = resolved.target;
            translation = std::make_shared<const dfcn::TranslationResult>(std::move(resolved));
            break;
        }
        if (!target) { retain_source(row, kWorldgenControlRule); continue; }
        Match match{row.x, y, static_cast<int>(row.source.size()), kWorldgenControlRule,
            *target, row.source};
        match.translation_result = std::move(translation);
        match.layout_x = button->x;
        match.layout_y = button->y + 1;
        match.layout_length = button->w;
        match.layout_clip_right = button->x + button->w;
        match.layout_native_clip = pixels(*button);
        match.layout_left = false;
        match.native_split_duplicate = !control_drawn.emplace(button->x, button->y,
            button->w, normalize_utterance(row.source)).second;
        result.push_back(std::move(match));
    }

    // Rejection prose is a typed modal owned by the same renderer. Only its
    // finite title and actual action writers can select the paragraph box.
    static constexpr auto warning_titles = std::to_array<std::string_view>({
        "LACK OF PEAKS", "MEDIUM ELEVATION REJECTION", "LOW ELEVATION REJECTION",
        "HIGH ELEVATION REJECTION", "LACK OF EDGE OCEANS", "RAINFALL REJECTION",
        "DRAINAGE REJECTION", "SAVAGERY REJECTION", "VOLCANISM REJECTION",
        "LACK OF VOLCANOS", "SWAMP REJECTION", "DESERT REJECTION", "FOREST REJECTION",
        "MOUNTAIN REJECTION", "OCEAN REJECTION", "GLACIER REJECTION", "TUNDRA REJECTION",
        "GRASSLAND REJECTION", "HILLS REJECTION", "LACK OF RIVERS", "TOO MANY REGIONS",
        "LACK OF MOUNTAIN CAVES", "LACK OF LOW-LYING CAVES", "UNABLE TO PLACE ENOUGH CIVILIZATIONS",
        "NO CIVILIZATIONS AVAILABLE", "UNABLE TO PLACE CONTROLLABLE CIVILIZATION",
        "FARMING CIVILIZATION PLACED WITHOUT CROPS"});
    static constexpr auto warning_actions = std::to_array<std::string_view>({
        "CONTINUE until you give me another warning.",
        "ABORT NOW and I'll look over my parameters.",
        "ALLOW THIS REJECTION TYPE and continue reporting others.",
        "ALLOW ALL REJECTS, even if I end up with a legends-only world!"});
    const Field *warning_title = nullptr;
    int warning_bottom = gps_->dimy;
    std::set<std::string_view> warning_buttons;
    for (const auto &[y, rows] : fields) for (const auto &field : rows) {
        if (field.editable) continue;
        const auto source = trim_view(field.row.source);
        if (std::find(warning_titles.begin(), warning_titles.end(), source) != warning_titles.end())
            warning_title = &field;
        const auto action = std::find(warning_actions.begin(), warning_actions.end(), source);
        if (action == warning_actions.end() || !reserved_fields.contains({y, field.row.x})) continue;
        warning_buttons.insert(*action);
        const auto button = settings ? native_intro_button_text_rect(*gps_, field.row.x,
            field.row.x + static_cast<int>(field.row.source.size()), y, *settings, true) : std::nullopt;
        if (button) warning_bottom = std::min(warning_bottom, button->y);
    }
    if (warning_title && !warning_buttons.empty()) {
        const int warning_left = warning_title->row.x;
        const int warning_right = std::min(gps_->dimx, warning_left + 66);
        const int warning_top = warning_title->row.y + 2;
        std::vector<Match> rows;
        std::string source;
        std::vector<int> colors;
        for (const auto &[y, row_fields] : fields) {
            if (y < warning_top || y >= warning_bottom) continue;
            for (const auto &field : row_fields) {
                const auto &row = field.row;
                if (row.x < warning_left || row.x + static_cast<int>(row.source.size()) > warning_right ||
                        field.editable || reserved_fields.contains({y, row.x})) continue;
                reserved_fields.emplace(y, row.x);
                rows.push_back({row.x, y, static_cast<int>(row.source.size()), kUiMessageRule, {}, row.source});
                if (!source.empty()) { source.push_back(' '); colors.push_back(colors.back()); }
                source += row.source;
                colors.insert(colors.end(), row.foregrounds.begin(), row.foregrounds.end());
            }
        }
        const auto complete_rule = [&](std::string_view text) {
            if (ui_message_trie_.empty()) return -1;
            int node = 0;
            for (unsigned char ch : text) {
                if (native_prose_space(ch)) continue;
                const auto next = ui_message_trie_[node].next.find(ch);
                if (next == ui_message_trie_[node].next.end()) return -1;
                node = next->second;
            }
            const int rule = ui_message_trie_[node].rule;
            return rule >= 0 && static_cast<size_t>(rule) < rules_.size() &&
                rules_[rule].ui_message ? rule : -1;
        };
        std::string complete = source;
        int rule = complete_rule(complete);
        // A writer-address match can recover a complete captured paragraph
        // whose final rows were covered by the first native action button.
        if (rule < 0 && !rows.empty()) for (const auto &capture : captured_native_paragraphs()) {
            if (capture.paragraph_width != 66 || capture.first_line != 0 ||
                    capture.wrapped_lines.size() <= rows.size() ||
                    capture.row_addresses.size() != capture.wrapped_lines.size()) continue;
            const int candidate = complete_rule(capture.source);
            if (candidate < 0) continue;
            bool current = true;
            for (size_t i = 0; current && i < rows.size(); ++i) {
                current = trim_view(capture.wrapped_lines[i]) == rows[i].source;
                if (current) current = std::any_of(draws.begin(), draws.end(), [&](const auto &plane) {
                    return std::any_of(plane.begin(), plane.end(), [&](const auto &draw) {
                        return draw.x == rows[i].x && draw.y == rows[i].y &&
                            draw.address == capture.row_addresses[i] &&
                            draw.source == capture.wrapped_lines[i];
                    });
                });
            }
            if (current) { complete = capture.source; rule = candidate; break; }
        }
        std::vector<int> translated_colors;
        if (complete != source && !colors.empty()) colors.assign(complete.size(), colors.front());
        const auto target = rule >= 0 && warning_buttons.size() == warning_actions.size()
            ? translate_help_paragraph(complete, colors, translated_colors, true, rule) : std::nullopt;
        std::vector<Match> fitted;
        if (!rows.empty()) rows.front().layout_native_clip = pixels({warning_left, warning_top,
            warning_right - warning_left, std::max(0, warning_bottom - warning_top)});
        auto staged = context;
        if (target && append_bounded_paragraph(rows, *target, staged, fitted, -1,
                warning_right, warning_right, translated_colors, false, warning_left) &&
                std::all_of(fitted.begin(), fitted.end(), [&](const Match &row) {
                    return row.target.empty() || (row.layout_y >= warning_top &&
                        row.layout_y < warning_bottom && row.layout_pixel_y == 0);
                })) {
            result.insert(result.end(), std::make_move_iterator(fitted.begin()),
                std::make_move_iterator(fitted.end()));
        } else for (auto &row : rows) {
            row.native_help_source_only = true;
            row.native_help_review_source = complete;
            result.push_back(std::move(row));
        }
    }

    // Only captured UI fields enter literal/numeric matching. English event
    // words in the chronicle are never sent through this catalog matcher.
    const auto match_field = [&](const NativeTextCardRow &row) {
        std::vector<Match> candidates;
        const auto literals = [&](const std::vector<TrieNode> &trie, bool fold_case) {
            if (trie.empty()) return;
            for (size_t start = 0; start < row.source.size(); ++start) {
                int node = 0;
                for (size_t pos = start; pos < row.source.size(); ++pos) {
                    auto ch = static_cast<unsigned char>(row.source[pos]);
                    if (fold_case && ch >= 'A' && ch <= 'Z') ch += 'a' - 'A';
                    const auto next = trie[node].next.find(ch);
                    if (next == trie[node].next.end()) break;
                    node = next->second;
                    const int index = trie[node].rule;
                    if (index < 0) continue;
                    const auto &rule = rules_[index];
                    if (rule.target == rule.source) continue;
                    const size_t end = pos + 1;
                    if (rule.word_follows && !native_text_word_at(row.source, end)) continue;
                    if (rule.word_boundary && !has_word_boundaries(row.source, start, end) &&
                            !is_ascii_tab_caption(row.source, start, end)) continue;
                    candidates.push_back({row.x + static_cast<int>(start), row.y,
                        static_cast<int>(end - start), index, rule.target,
                        row.source.substr(start, end - start)});
                }
            }
        };
        literals(trie_, false); literals(trie_ci_, true);
        for (int index : candidate_template_rules(row.source)) {
            const auto &rule = rules_[index];
            if (!rule.numeric_template || rule.template_kinds.empty() ||
                    !std::all_of(rule.template_kinds.begin(), rule.template_kinds.end(),
                        [](char kind) { return kind == 'd'; })) continue;
            const auto &prefix = rule.template_literals.front();
            std::vector<std::string> captures;
            for (size_t search = 0; search < row.source.size();) {
                const size_t start = prefix.empty() ? row.source.find_first_of("0123456789", search)
                    : find_template_literal(row.source, prefix, search, rule.case_insensitive);
                if (start == std::string::npos) break;
                if (prefix.empty() && start && row.source[start - 1] >= '0' && row.source[start - 1] <= '9') {
                    search = start + 1; continue;
                }
                size_t end = start;
                if (match_template(rule, row.source, start, &end, &captures) &&
                        (!rule.word_boundary || has_word_boundaries(row.source, start, end))) {
                    auto translated = translate_template_captures_display(rule, captures,
                        row.source.substr(start, end - start));
                    if (translated.usable() && translated.changed()) {
                        candidates.push_back({row.x + static_cast<int>(start), row.y,
                            static_cast<int>(end - start), index, translated.target,
                            row.source.substr(start, end - start)});
                        candidates.back().translation_result =
                            std::make_shared<const TranslationResult>(std::move(translated));
                    }
                }
                search = start + 1;
            }
        }
        std::stable_sort(candidates.begin(), candidates.end(), [&](const Match &a, const Match &b) {
            if (a.length != b.length) return a.length > b.length;
            const bool a_partial = a.translation_result && a.translation_result->has_untranslated();
            const bool b_partial = b.translation_result && b.translation_result->has_untranslated();
            if (a.x == b.x && a_partial != b_partial) return !a_partial;
            const int a_priority = rules_[a.rule].numeric_template || rules_[a.rule].string_template ? 2 : 4;
            const int b_priority = rules_[b.rule].numeric_template || rules_[b.rule].string_template ? 2 : 4;
            return a_priority != b_priority ? a_priority > b_priority : a.x < b.x;
        });
        std::vector<bool> occupied(row.source.size(), false);
        for (auto &match : candidates) {
            const int offset = match.x - row.x;
            if (offset < 0 || match.length <= 0 || static_cast<size_t>(offset + match.length) > occupied.size() ||
                    std::any_of(occupied.begin() + offset, occupied.begin() + offset + match.length,
                        [](bool value) { return value; })) continue;
            std::fill_n(occupied.begin() + offset, match.length, true);
            match.layout_native_clip = field_clip(row);
            result.push_back(std::move(match));
        }
    };
    const auto translate_geography = [&](const Field &field, std::string_view source)
            -> std::optional<std::string> {
        const auto kind = field.geography;
        if (kind == Geography::Region) return translate_world_region_heading(source);
        if (kind == Geography::Landform) return translate_world_landform_heading(source);
        if (kind == Geography::SiteName)
            return field.site_name ? translate_site_display(*field.site_name, source) : std::nullopt;
        if (kind == Geography::SiteGloss) {
            // These three writers own the quotes even if clipping hides one.
            if (source.starts_with('"')) source.remove_prefix(1);
            if (source.ends_with('"')) source.remove_suffix(1);
            // The shared site compositor owns WORD/POS, reviewed whole names,
            // phonetic fallback and the suffix from this site's real class.
            return field.site_name ? translate_site_display(*field.site_name,
                "\"" + std::string(trim_view(source)) + "\"") : std::nullopt;
        }
        if (kind == Geography::RiverLabel) return exact_literal_translation(source);
        if (kind == Geography::Volcano) {
            // The typed field retains the unabridged caption even when the
            // native panel only displays a shortened name or a clipped row.
            if (field.volcano_name) source = trim_view(field.volcano_name->complete_source);
            constexpr std::string_view label = "Volcano:";
            const bool labelled = source.starts_with(label) &&
                (source.size() == label.size() || source[label.size()] == ' ');
            if (labelled) source = trim_view(source.substr(label.size()));
            auto name = translate_volcano_text(source,
                field.volcano_name ? &field.volcano_name->name : nullptr);
            return labelled ? "火山：" + name : name;
        }
        if (kind == Geography::River) {
            for (std::string_view prefix : {"Major River:", "Minor River:", "River:", "Stream:", "Brook:"}) {
                if (!source.starts_with(prefix)) continue;
                const auto label = exact_literal_translation(prefix);
                auto identity = field.river_name ? field.river_name->identity : RiverNameIdentity{};
                identity.size = RiverNames::category(prefix);
                const auto name = field.river_name ? translate_river_name(identity,
                    field.river_name->field, field.river_name->complete_source)
                    : translate_river_text(trim_view(source.substr(prefix.size())), identity.size);
                return label && !name.empty() ? std::optional(*label + name) : std::nullopt;
            }
            return field.river_name ? translate_river_name(field.river_name->identity,
                field.river_name->field, field.river_name->complete_source) : translate_river_text(source);
        }
        return std::nullopt;
    };
    NativeTextCard summary;
    summary.interior = {left, 0, right - left,
        heading_y < 0 ? panel_bottom : std::min(panel_bottom, heading_y + 1)};
    for (const auto &[y, rows] : fields) for (const auto &field : rows) {
        const auto &row = field.row;
        if (reserved_fields.contains({y, row.x}) || (inside_panel(row) &&
                heading_y >= 0 && y >= prose_top && y < prose_bottom))
            continue;
        const bool geography = field.geography != Geography::None;
        const auto source = normalize_utterance(complete_text(row));
        const bool summary_row = inside_panel(row) && row.x == left && (heading_y < 0 || y <= heading_y);
        const bool identity = summary_row && (source.starts_with("Creating ") ||
            source.find(", year ") != std::string::npos);
        if (identity || geography) {
            const auto target = geography ? translate_geography(field, source)
                : source.starts_with("Creating ") ? translate_worldgen_creation(source)
                : translate_procedural_fragment(source);
            if (target && !target->empty()) {
                Match match{row.x, y, static_cast<int>(row.source.size()), kWorldgenSummaryRule,
                    *target, row.source};
                match.layout_native_clip = field_clip(row);
                result.push_back(std::move(match));
            } else { retain_source(row, kWorldgenSummaryRule); continue; }
        } else {
            const size_t begin = result.size();
            match_field(row);
            if (result.size() == begin) { retain_source(row, kWorldgenSummaryRule); continue; }
        }
        if (summary_row) summary.rows.push_back(row);
        else {
            const auto bounds = field_bounds(row.x, y, static_cast<int>(row.source.size()));
            const int field_right = bounds.x + bounds.w;
            NativeTextCard field_card{{row.x, y,
                field_right - row.x, 1}, {row}};
            if (field_card.interior.w > 0)
                compose_native_text_rows(field_card, result, -1, kWorldgenSummaryRule);
        }
    }
    compose_native_text_rows(summary, result, -1, kWorldgenSummaryRule);
    result.insert(result.end(), std::make_move_iterator(mod_fields.begin()),
        std::make_move_iterator(mod_fields.end()));
    // Row composition replaces the input matches. Reattach the field's own
    // clip so composed sidebar rows cannot inherit the left chronicle clip.
    for (auto &match : result) if (!match.layout_native_clip)
        match.layout_native_clip = pixels(field_bounds(match.x, match.y, match.length));

    if (heading_y < 0 || prose_top >= prose_bottom) return result;
    const SDL_Rect prose_clip = pixels({left, prose_top, right - left, prose_bottom - prose_top});
    struct Event {
        std::shared_ptr<const NativeHistoryDocument> document;
        std::optional<std::pair<int64_t, int64_t>> offset;
        std::set<size_t> confirmed;
        std::map<int, std::vector<Match>> rows;
        std::vector<Match> source_rows;
        const WorldgenHistoryEventMemory *memory = nullptr;
        int first_line = -1;
        bool conflict = false;
    };
    std::map<uint64_t, Event> events;
    std::map<std::pair<int, int>, uint64_t> token_owners;
    for (const auto &draw : captured_native_history_draws()) {
        if (!draw.document || draw.token_index >= draw.document->tokens.size() ||
                draw.y < prose_top || draw.y >= prose_bottom) continue;
        const auto &token = draw.document->tokens[draw.token_index];
        if (token.source.empty()) continue;
        const int first = std::max({left, draw.x, draw.clip_left});
        const int end = static_cast<int>(std::min<int64_t>(std::min(right, draw.clip_right),
            int64_t(draw.x) + int64_t(token.source.size())));
        if (first >= end) continue;
        auto &event = events[draw.document->sequence];
        event.document = draw.document;
        const std::pair<int64_t, int64_t> offset{int64_t(draw.x) - token.x, int64_t(draw.y) - token.y};
        if (event.offset && *event.offset != offset) event.conflict = true;
        else event.offset = offset;
        bool current = true;
        for (int x = first; current && x < end; ++x)
            current = visible_char_at(x, draw.y) == static_cast<unsigned char>(token.source[x - draw.x]);
        if (!current) { event.conflict = true; continue; }
        if (!event.confirmed.insert(draw.token_index).second) { event.conflict = true; continue; }
        const std::string source = token.source.substr(first - draw.x, end - first);
        event.rows[draw.y].push_back({first, draw.y, end - first, kWorldgenChronicleRule, {}, source});
        remember_span(first, draw.y, source);
        for (int x = first; x < end; ++x) {
            const auto [owner, inserted] = token_owners.emplace(std::pair{draw.y, x}, draw.document->sequence);
            if (!inserted && owner->second != draw.document->sequence) {
                event.conflict = true;
                events[owner->second].conflict = true;
            }
        }
    }
    // Unbound native tokens reserve their original ink; their missing
    // semantic record cannot be filled by literal matching or another event.
    std::set<int> retained_rows;
    for (const auto &draw : captured_native_history_unbound_draws()) {
        if (draw.y < prose_top || draw.y >= prose_bottom || draw.source.empty()) continue;
        const int first = std::max({left, draw.x, draw.clip_left});
        const int end = static_cast<int>(std::min<int64_t>(std::min(right, draw.clip_right),
            int64_t(draw.x) + int64_t(draw.source.size())));
        bool current = first < end;
        for (int x = first; current && x < end; ++x)
            current = visible_char_at(x, draw.y) == static_cast<unsigned char>(draw.source[x - draw.x]);
        if (!current) continue;
        retained_rows.insert(draw.y);
        for (int x = first; x < end; ++x) {
            const auto owner = token_owners.find({draw.y, x});
            if (owner != token_owners.end()) events[owner->second].conflict = true;
        }
    }
    for (const auto &[y, rows] : fields) {
        if (y < prose_top || y >= prose_bottom) continue;
        for (const auto &field : rows) for (size_t i = 0; i < field.row.source.size(); ++i) {
            const int x = field.row.x + static_cast<int>(i);
            if (x >= left && x < right && field.row.source[i] != ' ' && !token_owners.contains({y, x}))
                retained_rows.insert(y);
        }
    }
    std::vector<Event *> ordered;
    for (auto &[sequence, event] : events) if (!event.rows.empty()) ordered.push_back(&event);
    std::sort(ordered.begin(), ordered.end(), [](const Event *a, const Event *b) {
        return a->rows.begin()->first < b->rows.begin()->first;
    });
    for (Event *event : ordered) {
        auto &rows = event->source_rows;
        for (auto &[y, spans] : event->rows) {
            std::sort(spans.begin(), spans.end(), [](const Match &a, const Match &b) { return a.x < b.x; });
            const int first = spans.front().x;
            int end = first;
            for (const auto &span : spans) end = std::max(end, span.x + span.length);
            std::string source(end - first, ' ');
            for (const auto &span : spans) source.replace(span.x - first, span.length, span.source);
            // Only the published caption runs of this event row are checked
            // for uncovered ink. No other screen row is read or interpreted.
            const auto caption_row = fields.find(y);
            if (caption_row != fields.end()) for (const auto &field : caption_row->second) {
                for (size_t i = 0; i < field.row.source.size(); ++i) {
                    const int x = field.row.x + static_cast<int>(i);
                    if (x < left || x >= right || field.row.source[i] == ' ') continue;
                    const auto owner = token_owners.find({y, x});
                    if (owner == token_owners.end() || owner->second != event->document->sequence)
                        event->conflict = true;
                }
            }
            remember_span(first, y, source);
            rows.push_back({first, y, end - first, kWorldgenChronicleRule, {}, std::move(source)});
        }
        int64_t complete_first = INT64_MAX, complete_last = INT64_MIN;
        if (!event->offset) event->conflict = true;
        else for (size_t i = 0; i < event->document->tokens.size(); ++i) {
            const auto &token = event->document->tokens[i];
            if (trim_view(token.source).empty()) continue;
            const int64_t x = int64_t(token.x) + event->offset->first;
            const int64_t y = int64_t(token.y) + event->offset->second;
            complete_first = std::min(complete_first, y);
            complete_last = std::max(complete_last, y);
            if (!event->confirmed.contains(i) && y >= prose_top && y < prose_bottom &&
                    x < right && x + int64_t(token.source.size()) > left) event->conflict = true;
        }
        if (complete_first > rows.front().y || complete_last < rows.back().y ||
                complete_last - complete_first >= 16384) event->conflict = true;
        event->first_line = event->conflict ? -1 : static_cast<int>(rows.front().y - complete_first);
        if (event->first_line > 0) continue;
        event->memory = event->conflict ? nullptr : worldgen_cached_history_event(*event->document);
        if (!event->memory || event->memory->target.empty())
            for (const auto &row : rows) retained_rows.insert(row.y);
    }
    int next_y = prose_top;
    for (Event *event : ordered) {
        auto &rows = event->source_rows;
        if (event->first_line > 0) {
            // A scrolled-away record keeps ownership of its visible tail,
            // while the complete event memory decides which record it is.
            for (auto &row : rows) { row.layout_native_clip = prose_clip; result.push_back(std::move(row)); }
            continue;
        }
        for (int y : retained_rows) if (y < rows.front().y) next_y = std::max(next_y, y + 1);
        rows.front().layout_native_clip = prose_clip;
        std::vector<Match> fitted;
        // Measure the complete cached event in its current viewport. The
        // paragraph-layout cache retains this width/font/color result.
        bool fits = event->memory && !event->memory->target.empty() && append_bounded_paragraph(
            rows, event->memory->target, context, fitted, -1, right, right,
            event->memory->foreground_colors, false, left);
        int display_y = next_y;
        for (const auto &row : fitted) if (!row.target.empty()) {
            const int height = (std::max(tile_h, row.layout_line_height_pixels) + tile_h - 1) / tile_h;
            const auto occupied = retained_rows.lower_bound(display_y);
            if (occupied != retained_rows.end() && *occupied < display_y + height) fits = false;
            display_y += height;
        }
        if (!fits) {
            next_y = std::max(next_y, rows.back().y + 1);
            for (auto &row : rows) {
                retained_rows.insert(row.y);
                row.native_help_source_only = true;
                row.native_help_review_source = event->document->native_source;
                row.layout_native_clip = prose_clip;
                result.push_back(std::move(row));
            }
            continue;
        }
        for (auto &row : fitted) {
            if (!row.target.empty()) {
                row.layout_y = next_y;
                row.layout_pixel_y = 0;
                row.layout_native_clip = prose_clip;
                row.layout_fixed_baseline = true;
                next_y += (std::max(tile_h, row.layout_line_height_pixels) + tile_h - 1) / tile_h;
            }
            result.push_back(std::move(row));
        }
    }
    return result;
}

void Overlay::render_native_worldgen_layer(SDL_Renderer *renderer) {
    TranslationStateScope translation;
    auto &layer = g_native_worldgen_layer;
    if (!renderer || !layer.ready || layer.renderer != renderer) return;
    // The target starts transparent. Only native panel artwork, controls
    // and text cover the game's independently rendered world map.
    if (!config_.enabled || !face_ || rules_.empty()) {
        native_ui_paint_grid(layer, renderer, {}, &g_native_worldgen_panel);
        return;
    }
    struct ViewScope {
        Overlay &overlay;
        graphicst *graphics;
        std::vector<Match> matches;
        std::optional<NativeToolbarTooltip> tooltip;
        std::optional<NativeTooltipWidgetFrame> widget;
        GraphicalClearReadback *readback;
        std::vector<NativeBorderRepair> repairs;
        decltype(Overlay::graphical_rects_) graphical_rects;
        decltype(Overlay::native_border_glyphs_) border_glyphs;
        decltype(Overlay::cell_composite_state_) composite;
        decltype(Overlay::cell_composite_epoch_) composite_epochs;
        decltype(Overlay::observed_glyph_chars_) glyphs;
        decltype(Overlay::observed_glyph_epoch_) glyph_epochs;
        decltype(Overlay::suppressed_glyphs_) suppressed;
        ViewScope(Overlay &value, graphicst *foreground)
            : overlay(value), graphics(value.gps_), matches(std::move(value.prepared_matches_)),
              tooltip(std::move(g_native_toolbar_tooltip)), widget(std::move(g_native_tooltip_widget_frame)),
              readback(value.graphical_clear_readback_), repairs(std::move(value.native_border_repairs_)),
              graphical_rects(std::move(value.graphical_rects_)), border_glyphs(std::move(value.native_border_glyphs_)),
              composite(std::move(value.cell_composite_state_)), composite_epochs(std::move(value.cell_composite_epoch_)),
              glyphs(std::move(value.observed_glyph_chars_)), glyph_epochs(std::move(value.observed_glyph_epoch_)),
              suppressed(std::move(value.suppressed_glyphs_)) {
            overlay.gps_ = foreground;
            overlay.graphical_clear_readback_ = nullptr;
        }
        ~ViewScope() {
            overlay.gps_ = graphics; overlay.prepared_matches_ = std::move(matches);
            g_native_toolbar_tooltip = std::move(tooltip); g_native_tooltip_widget_frame = std::move(widget);
            overlay.graphical_clear_readback_ = readback; overlay.native_border_repairs_ = std::move(repairs);
            overlay.graphical_rects_ = std::move(graphical_rects); overlay.native_border_glyphs_ = std::move(border_glyphs);
            overlay.cell_composite_state_ = std::move(composite); overlay.cell_composite_epoch_ = std::move(composite_epochs);
            overlay.observed_glyph_chars_ = std::move(glyphs); overlay.observed_glyph_epoch_ = std::move(glyph_epochs);
            overlay.suppressed_glyphs_ = std::move(suppressed);
        }
    } view(*this, layer.foreground.graphics());
    NativeInfoCapturedTextScope captions(g_native_worldgen_text);
    NativeUiReadScope component(gps_, nullptr);
    NativePanelReadScope panels(gps_);
    CellReadCacheScope cells(*this);
    prepared_matches_ = find_native_worldgen_matches();
    normalize_native_split_text();
    native_ui_paint_grid(layer, renderer, prepared_matches_, &g_native_worldgen_panel);
    for (const auto &match : prepared_matches_) {
        if (match.target.empty() || match.native_help_source_only || match.native_split_duplicate) continue;
        Match text = match;
        text.graphical_clear_width = text.graphical_clear_height = 0;
        text.graphical_auto_foreground = false;
        draw_match(renderer, text);
    }
}
