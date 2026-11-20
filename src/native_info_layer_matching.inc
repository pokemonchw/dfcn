// The management component has a native owner. Do not rediscover the game
// page, map, embark, legends or character documents from this private grid.
// All source ownership below belongs to this frame's component captures.
std::vector<Match> Overlay::find_native_info_matches() const {
    std::vector<Match> result;
    if (!gps_ || !gps_->screen || trie_.empty()) return result;
    constexpr int only_y = -1;
    const unsigned char *screen_override = nullptr;
    const std::optional<NativeTextCard> map_hover;
    const auto read_row = [&](int y) {
        std::string row(gps_->dimx, ' ');
        if (y < 0 || y >= gps_->dimy) return row;
        for (int x = 0; x < gps_->dimx; ++x) {
            const auto ch = visible_char_at(x, y);
            if (ch) row[x] = static_cast<char>(ch);
        }
        return row;
    };
    std::vector<std::string> screen_rows;
    screen_rows.reserve(gps_->dimy);
    for (int y = 0; y < gps_->dimy; ++y) screen_rows.push_back(read_row(y));
    std::vector<Match> untranslated_help_rows;

    // Resident/pet activity popups belong to this private management grid.
    // Claim their retained markup words before activity columns and generic
    // fragments; the main-page matcher never sees this component's text.
    if (g_native_info_page == NativeInfoPage::Creatures)
        append_activity_detail_matches(screen_rows, result, untranslated_help_rows,
            only_y, screen_override);

    // The workquota producer owns the complete workshop assignment/limit
    // column, including an editor whose native bytes remain untouched.
    append_work_order_shop_fields(screen_rows, result, only_y);
    append_work_order_condition_fields(screen_rows, result, only_y);

    // Editable text, authored squad aliases and formatter-owned identities
    // reserve their exact spans before dictionary/template matching.
    for (const auto &region : native_text_input_regions(*gps_, screen_rows, nullptr)) {
        const size_t first = result.size();
        append_direct_utf8_matches(screen_rows[region.y].substr(region.x, region.w),
            region.y, result);
        for (size_t i = first; i < result.size(); ++i) result[i].x += region.x;
        std::fill_n(screen_rows[region.y].begin() + region.x, region.w, ' ');
    }
    append_fortress_squad_alias_rows(screen_rows, result, only_y, nullptr);
    if (g_native_info_page == NativeInfoPage::Places) {
        append_fortress_workshop_activities(screen_rows, result, only_y, false);
        append_fortress_farm_rows(screen_rows, result, only_y, false);
        append_fortress_place_names(screen_rows, result, only_y, false);
    }
    const auto clipped_template_snapshot = captured_clipped_caption_snapshot();
    const auto &clipped_template_captions = *clipped_template_snapshot;
    append_native_map_hover_phrases(screen_rows, result, only_y,
        NativeMapHoverKind::Terrain);
    if (g_native_info_page == NativeInfoPage::Objects) {
        append_fortress_written_content_rows(screen_rows, result, only_y, nullptr);
        append_fortress_object_rows(screen_rows, result, only_y, nullptr);
    }
    append_fortress_noble_symbol_rows(screen_rows, result, only_y);
    append_native_info_panel_titles(screen_rows, result, only_y);
    if (g_native_info_page == NativeInfoPage::Nobles ||
            !captured_native_unit_chooser_records().empty())
        append_fortress_unit_chooser_rows(screen_rows, result, only_y, false);
    std::vector<WorkshopTaskCard> workshop_choices;
    std::vector<NativeTextCard> task_detail, materials;
    const auto page = g_native_info_page;
    if (page == NativeInfoPage::Tasks || page == NativeInfoPage::Places ||
            page == NativeInfoPage::WorkOrders) {
        workshop_choices = capture_workshop_task_rows(screen_rows);
        for (const auto &card : workshop_choices)
            append_workshop_task_translations(card, screen_rows, result, only_y);
        task_detail = capture_workshop_material_fields(screen_rows, true);
        append_workshop_material_translations(task_detail, screen_rows, result, only_y);
        materials = capture_workshop_material_fields(screen_rows);
        append_workshop_material_translations(materials, screen_rows, result, only_y);
        if (const auto recipe = capture_workshop_recipe_card(screen_rows))
            append_workshop_recipe_card(*recipe, screen_rows, result, only_y);
    }
    switch (page) {
    case NativeInfoPage::Creatures:
        append_fortress_creature_activities(screen_rows, result, only_y);
        break;
    case NativeInfoPage::Tasks:
    case NativeInfoPage::WorkOrders:
        append_fortress_task_rows(screen_rows, result, only_y);
        break;
    case NativeInfoPage::Places:
        append_fortress_location_list_matches(screen_rows, result, only_y, false);
        append_fortress_location_matches(screen_rows, result, only_y, false);
        break;
    case NativeInfoPage::Labor:
        switch (g_native_info_labor_page) {
        case NativeInfoLaborPage::WorkDetails:
            append_fortress_labor_rows(screen_rows, result, only_y);
            break;
        case NativeInfoLaborPage::StandingOrders:
            append_fortress_labor_rows(screen_rows, result, only_y);
            append_fortress_hauling_rows(screen_rows, result, only_y, false);
            break;
        case NativeInfoLaborPage::Kitchen:
            append_fortress_kitchen_rows(screen_rows, result, only_y);
            break;
        case NativeInfoLaborPage::StoneUse:
            append_fortress_stone_rows(screen_rows, result, only_y);
            break;
        default:
            append_fortress_labor_rows(screen_rows, result, only_y);
            append_fortress_kitchen_rows(screen_rows, result, only_y);
            append_fortress_stone_rows(screen_rows, result, only_y);
            append_fortress_hauling_rows(screen_rows, result, only_y, false);
            break;
        }
        break;
    case NativeInfoPage::Nobles:
        append_fortress_noble_rows(screen_rows, result, only_y);
        break;
    case NativeInfoPage::Objects:
        append_fortress_item_captions(screen_rows, result, only_y);
        break;
    case NativeInfoPage::Justice:
        append_fortress_justice_tabs(screen_rows, result, only_y);
        append_fortress_justice_rows(screen_rows, result, only_y);
        break;
    default: break;
    }

    // Whole UI messages use their own whitespace-aware catalog, including
    // native wrapped paragraphs. The ordinary literal tries deliberately
    // omit these rules; allowing noun matches first leaves mixed-language
    // empty-list and Intelligence instructions. Run the shared reader only
    // on this component's private grid and its scoped text captures.
    const auto append_setup_paragraph = [&](std::vector<Match> rows,
            std::string_view target, int clip_right = -1, int box_right = -1,
            const std::vector<int> &foregrounds = std::vector<int>{}) {
        return append_bounded_paragraph(std::move(rows), target, screen_rows, result,
            only_y, clip_right, box_right, foregrounds, false, -1, std::nullopt, {});
    };
#include "ui_messages.inc"
#include "native_unit_identity_rows.inc"

    append_limited_skill_matches(screen_rows, result, only_y, clipped_template_captions);

    // Recovery uses this component's complete native caption, never a
    // same-position caption captured by the world or another private layer.
    for (const auto &caption : clipped_template_captions) {
        if (caption.x < 0 || caption.y < 0 || caption.y >= gps_->dimy ||
                caption.visible.empty() || caption.x >= gps_->dimx ||
                caption.visible.size() > static_cast<size_t>(gps_->dimx - caption.x)) continue;
        auto target = exact_literal_translation(caption.complete);
        if (!target) target = translate_unit_identity(caption.complete);
        if (!target) target = translate_unit_profession(caption.complete);
        if (!target) target = translate_rated_skill_phrase(caption.complete);
        if (!target) continue;
        const auto claim = [&](int y) {
            if (y < 0 || y >= gps_->dimy ||
                    screen_rows[y].compare(caption.x, caption.visible.size(), caption.visible) != 0)
                return;
            result.push_back({caption.x, y, static_cast<int>(caption.visible.size()), -2,
                *target, caption.visible});
            std::fill_n(screen_rows[y].begin() + caption.x, caption.visible.size(), ' ');
        };
        claim(caption.y);
        bool top = false;
        cell_at(caption.x, caption.y, &top);
        const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
        if (!flags) continue;
        const auto half = flags[static_cast<size_t>(caption.x) * gps_->dimy + caption.y] &
            ((1u << 3) | (1u << 4));
        const int mate = half == (1u << 3) ? caption.y + 1 :
            half == (1u << 4) ? caption.y - 1 : -1;
        if (mate >= 0 && mate < gps_->dimy &&
                (flags[static_cast<size_t>(caption.x) * gps_->dimy + mate] &
                    ((1u << 3) | (1u << 4))) ==
                (half == (1u << 3) ? (1u << 4) : (1u << 3))) claim(mate);
    }

    append_native_info_grid_matches(screen_rows, result, only_y, true);
    for (const auto &card : workshop_choices)
        compose_native_text_rows(card, result, only_y, kWorkshopTaskRowRule, false, true);
    for (const auto &card : task_detail)
        compose_native_text_rows(card, result, only_y, kWorkshopMaterialFieldRule, false, true);
    for (const auto &card : materials)
        compose_native_text_rows(card, result, only_y, kWorkshopMaterialFieldRule, false, true);
    return result;
}

// Both layers can use UI literals/templates, but only the selected management
// page admits unit/profession/material fragments. Background HUD text must
// never invoke the generic world/item/name pipeline on covered panel cells.
void Overlay::append_native_info_grid_matches(const std::vector<std::string> &screen_rows,
        std::vector<Match> &result, int only_y, bool fragments) const {
    const auto clipped_template_snapshot = captured_clipped_caption_snapshot();
    const auto &clipped_template_captions = *clipped_template_snapshot;
    const int first_y = only_y < 0 ? 0 : only_y;
    const int end_y = only_y < 0 ? gps_->dimy : only_y + 1;
    for (int y = first_y; y < end_y; ++y) {
        const auto &row = screen_rows[y];
        if (row.find_first_not_of(' ') == std::string::npos) continue;
        std::vector<Match> candidates;
        append_direct_utf8_matches(row, y, candidates);
        const auto literals = [&](const std::vector<TrieNode> &trie, bool fold_case) {
            if (trie.empty()) return;
            for (int start = 0; start < gps_->dimx; ++start) {
                int node = 0;
                for (int pos = start; pos < gps_->dimx; ++pos) {
                    auto ch = static_cast<unsigned char>(row[pos]);
                    if (fold_case && ch >= 'A' && ch <= 'Z') ch += 'a' - 'A';
                    const auto next = trie[node].next.find(ch);
                    if (next == trie[node].next.end()) break;
                    node = next->second;
                    const int index = trie[node].rule;
                    if (index < 0) continue;
                    const auto &rule = rules_[index];
                    size_t end = pos + 1;
                    if (rule.word_follows && !native_text_word_at(row, end)) continue;
                    if (rule.word_boundary && !has_word_boundaries(row, start, end) &&
                            !is_ascii_tab_caption(row, start, end)) continue;
                    std::string target = rule.target;
                    if (is_work_order_availability_rule(rule) && end < row.size() && row[end] == ' ') {
                        const size_t quantity_end = work_order_quantity_end(row, end + 1);
                        if (quantity_end > end + 1) {
                            target.append(row, end + 1, quantity_end - end - 1);
                            end = quantity_end;
                        }
                    }
                    candidates.push_back({start, y, static_cast<int>(end) - start, index,
                        std::move(target), row.substr(start, end - start)});
                }
            }
        };
        literals(trie_, false);
        literals(trie_ci_, true);
        for (int index : candidate_template_rules(row)) {
            const auto &rule = rules_[index];
            const auto &prefix = rule.template_literals.front();
            std::vector<std::string> captures;
            for (size_t search = 0; search < row.size();) {
                const size_t start = prefix.empty()
                    ? row.find_first_not_of(' ', search)
                    : find_template_literal(row, prefix, search, rule.case_insensitive);
                if (start == std::string::npos) break;
                size_t end = start;
                if (match_template(rule, row, start, &end, &captures) &&
                        (!rule.word_boundary || has_word_boundaries(row, start, end))) {
                    if (rule.source == "Amount of {s}" && captures.size() == 1)
                        for (const auto &caption : clipped_template_captions)
                            if (caption.y == y && caption.x == static_cast<int>(start + prefix.size()) &&
                                    trim_view(caption.visible) == captures.front()) {
                                captures.front() = caption.complete; break;
                            }
                    auto translated = translate_template_captures_display(rule, captures,
                        row.substr(start, end - start));
                    if (translated.usable() && translated.changed()) {
                        candidates.push_back({static_cast<int>(start), y, static_cast<int>(end - start),
                            index, translated.target, row.substr(start, end - start)});
                        candidates.back().translation_result =
                            std::make_shared<TranslationResult>(std::move(translated));
                    }
                }
                search = start + 1;
            }
        }
        if (fragments) for (const auto &field : split_text_fields(row)) {
            if (std::any_of(candidates.begin(), candidates.end(), [&](const Match &match) {
                    return match.x == field.start && match.length == field.end - field.start;
                })) continue;
            auto target = translate_rated_skill_phrase(field.text);
            int rule = kRatedSkillRule;
            if (!target) { target = translate_unit_profession(field.text); rule = -2; }
            if (!target) { target = translate_creature_reference(field.text); rule = kCreatureNameRule; }
            if (!target && config_.compositional_rules) {
                target = translate_compositional(field.text); rule = -1;
            }
            if (target && *target != field.text)
                candidates.push_back({field.start, y, field.end - field.start, rule,
                    std::move(*target), field.text});
        }
        std::stable_sort(candidates.begin(), candidates.end(), [](const Match &a, const Match &b) {
            if (a.length != b.length) return a.length > b.length;
            const bool a_partial = a.translation_result && a.translation_result->has_untranslated();
            const bool b_partial = b.translation_result && b.translation_result->has_untranslated();
            if (a.x == b.x && a_partial != b_partial) return !a_partial;
            return a.x < b.x;
        });
        std::vector<bool> occupied(gps_->dimx, false);
        for (auto &match : candidates) {
            if (match.x < 0 || match.length <= 0 || match.length > gps_->dimx - match.x) continue;
            if (std::any_of(occupied.begin() + match.x,
                    occupied.begin() + match.x + match.length, [](bool used) { return used; })) continue;
            std::fill_n(occupied.begin() + match.x, match.length, true);
            result.push_back(std::move(match));
        }
    }
}

std::vector<Match> Overlay::find_native_info_background_matches(int only_y,
        const unsigned char *screen_override) const {
    std::vector<Match> result;
    std::vector<std::string> rows(gps_->dimy, std::string(gps_->dimx, ' '));
    const bool character_background = native_character_background_view(gps_);
    std::vector<std::pair<int, int>> character_spans;
    if (character_background) character_spans.reserve(g_native_character_layer.frames.size());
    for (int y = 0; y < gps_->dimy; ++y) {
        character_spans.clear();
        if (character_background) {
            for (const auto &frame : g_native_character_layer.frames) {
                if (y < frame.y || int64_t(y) >= int64_t(frame.y) + frame.h) continue;
                const int left = static_cast<int>(std::clamp<int64_t>(frame.x, 0, gps_->dimx));
                const int right = static_cast<int>(std::clamp<int64_t>(
                    int64_t(frame.x) + frame.w, left, gps_->dimx));
                if (left < right) character_spans.emplace_back(left, right);
            }
            std::sort(character_spans.begin(), character_spans.end());
        }
        const auto read_span = [&](int left, int right) {
            for (int x = left; x < right; ++x) {
                if (native_info_background_cell_hidden(gps_, x, y)) continue;
                const auto ch = screen_override
                    ? screen_override[(static_cast<size_t>(x) * gps_->dimy + y) * 8]
                    : visible_char_at(x, y);
                if (ch) rows[y][x] = static_cast<char>(ch);
            }
        };
        // Character output has its own producer and texture. Skip each owned
        // span at once; its blank background rows need no per-cell visit.
        int left = 0;
        for (const auto &[hidden_left, hidden_right] : character_spans) {
            read_span(left, hidden_left);
            left = std::max(left, hidden_right);
        }
        read_span(left, gps_->dimx);
    }
    NativePanelReadScope panels(gps_);
    // The map remains behind management components. A real terrain draw
    // keeps its own field grammar in this reduced background reader too.
    append_fortress_hospital_card_names(rows, result, only_y);
    append_native_map_hover_phrases(rows, result, only_y, NativeMapHoverKind::Terrain);
    append_fortress_site_name(rows, result, only_y, screen_override != nullptr);
    append_fortress_elevation_rows(rows, result, only_y, screen_override != nullptr);
    append_native_info_grid_matches(rows, result, only_y, false);
    return result;
}
