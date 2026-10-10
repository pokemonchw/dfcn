// Both the list and its history read the same current selection records.
// The confirmation button changes appearance with selection state; its skin
// must not decide whether all the other fields in the modal are translatable.
struct NativeEmbarkSelectionRecord {
    SDL_Rect box, panel;
    int reclaim_y = -1;
    int action_y = -1;
};

// Windows 53.16 draws "Unretire" (PE 0x1410519ea), without the
// exclamation mark used by "Reclaim!". Keep both native spellings here.
static constexpr std::array<std::string_view, 3> kEmbarkReclaimConfirmLabels = {
    "Reclaim!", "Unretire", "Unretire!"
};

static bool embark_same_panel(const SDL_Rect &left, const SDL_Rect &right) {
    return left.x == right.x && left.y == right.y &&
        left.w == right.w && left.h == right.h;
}

static std::pair<int, int> embark_selection_text_span(
        std::string_view row, int left, int right) {
    const auto padding = [&](int x) {
        return row[x] == ' ' || is_cp437_box_separator(row, x);
    };
    while (left < right && padding(left)) ++left;
    while (right > left && padding(right - 1)) --right;
    return {left, right};
}

static std::vector<NativeEmbarkSelectionRecord> native_embark_selection_records(
        const graphicst &gps, const std::vector<std::string> &rows) {
    const auto has = [&](std::string_view text) {
        return std::any_of(rows.begin(), rows.end(), [&](const std::string &row) {
            return row.find(text) != std::string::npos;
        });
    };
    const bool civilizations = has("Choose origin civilization") &&
        (has("Find embark location") || has("Reclaim/unretire"));
    if (!civilizations && std::none_of(kEmbarkReclaimConfirmLabels.begin(),
            kEmbarkReclaimConfirmLabels.end(), has)) return {};
    const auto settings = native_ui_settings();
    if (!settings) return {};
    const NativePanelBorders borders(gps);
    std::vector<NativeEmbarkSelectionRecord> records;
    for (int y = 0; y + 3 <= gps.dimy; ++y) {
        for (int x = 1; x + 4 < gps.dimx; ++x) {
            if (!native_selection_box_at(gps, x, y, settings->classic)) continue;
            const auto panel = native_panel_interior(borders, gps, SDL_Rect{x, y, 4, 3});
            if (!panel || y < panel->y || y + 3 > panel->y + panel->h) continue;
            int action_y = -1;
            for (int row = y + 3; row < panel->y + panel->h && action_y < 0; ++row) {
                // The complete confirmation caption owns this row. A word
                // match for bare Unretire would also accept a later list
                // title ("Unretire <site>") and truncate the history region.
                const auto [first, end] = embark_selection_text_span(
                    rows[row], panel->x, panel->x + panel->w);
                const auto caption = std::string_view(rows[row]).substr(first, end - first);
                if (std::find(kEmbarkReclaimConfirmLabels.begin(),
                        kEmbarkReclaimConfirmLabels.end(), caption) !=
                        kEmbarkReclaimConfirmLabels.end()) action_y = row;
            }
            int reclaim_y = -1;
            if (action_y >= 0) {
                // Claim the complete action/name beside this actual checkbox,
                // not a generic word match or a remembered scrolled row.
                for (int title_y = std::max(panel->y, y - 1);
                        title_y <= y + 1 && title_y + 2 < action_y - 1; ++title_y) {
                    const auto [first, end] = embark_selection_text_span(
                        rows[title_y], panel->x, x);
                    const auto title = std::string_view(rows[title_y]).substr(first, end - first);
                    if ((title.starts_with("Reclaim ") && title.size() > 8) ||
                        (title.starts_with("Unretire ") && title.size() > 9)) {
                        reclaim_y = title_y;
                        break;
                    }
                }
                if (reclaim_y < 0) continue;
            } else if (!civilizations) continue;
            records.push_back({{x, y, 4, 3}, *panel, reclaim_y, action_y});
            x += 3;
        }
    }
    return records;
}

// Embark's civilization and reclaim selectors share the same native
// four-column selection box. Civilizations have a title and species;
// reclaim records have an action/native name, English gloss and site state.
// Own those fields before word matching, inside their current native frame.
void Overlay::append_embark_civilization_rows(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y) const {
    // Recover the same logical scene during both raw-layer suppression and
    // final composition. Physical masks still validate each original byte.
    std::vector<std::string> context(gps_->dimy, std::string(gps_->dimx, ' '));
    for (int y = 0; y < gps_->dimy; ++y)
        for (int x = 0; x < gps_->dimx; ++x) {
            bool top = false;
            const auto *cell = cell_at(x, y, &top);
            context[y][x] = cell && cell[0] ? cell[0] : ' ';
        }
    const auto records = native_embark_selection_records(*gps_, context);
    if (records.empty()) return;
    const auto captures = captured_clipped_captions();
    const std::array draws{captured_native_drawn_text_rows(false),
        captured_native_drawn_text_rows(true)};
    const auto text_span = [&](int y, int left, int right) {
        return embark_selection_text_span(context[y], left, right);
    };

    const auto complete_source = [&](int x, int y, const std::string &visible,
                                     int source_right, int covered_right, bool top_layer)
            -> std::optional<std::string> {
        const auto same_visible = [&](std::string_view drawn) {
            if (drawn == visible) return true;
            // Both selectors draw their fields BEFORE the checkbox. In PE
            // 53.16, civilization addst at 0x1051d44/0x1051e68 follows the
            // captured resize at 0x1051ce5/0x1051e0a. Its four-column box
            // starts at r14-3 and covers the dots, just as reclaim's does.
            // Bind the surviving prefix to that actual control boundary,
            // including undotted names whose last letters lie under it.
            // Fields without a covering box require the whole drawn string.
            return covered_right > source_right &&
                drawn.size() > static_cast<size_t>(source_right - x) &&
                drawn.size() <= static_cast<size_t>(covered_right - x) &&
                trim_view(drawn.substr(0, source_right - x)) == visible;
        };
        // Retained frames keep the complete memory source with its actual
        // draw after the per-frame clipped-caption registry has advanced.
        for (const auto &draw : draws[top_layer ? 1 : 0])
            if (draw.x == x && draw.y == y && same_visible(draw.source) &&
                (!draw.complete_source.empty() || draw.source != visible))
                return draw.complete_source.empty() ? draw.source : draw.complete_source;
        for (const auto &capture : captures)
            if (capture.x == x && capture.y == y && same_visible(capture.visible))
                return capture.complete;
        // An unshortened field still uses its original memory draw. Prefer
        // the pre-resize/widget capture above whenever one exists.
        for (const auto &draw : draws[top_layer ? 1 : 0])
            if (draw.x == x && draw.y == y && draw.source == visible &&
                    !draw.source.ends_with("...")) return draw.source;
        return std::nullopt;
    };
    const auto reclaim_site_name = [&](const NativeEmbarkSelectionRecord &record,
                                       int left) -> std::optional<NativeHistoryName> {
        const auto field = [&](int y) -> std::optional<std::string> {
            const auto [first, end] = text_span(y, left, record.box.x);
            if (first == end) return std::nullopt;
            bool top = false;
            cell_at(first, y, &top);
            return complete_source(first, y, context[y].substr(first, end - first),
                record.box.x, record.box.x + record.box.w, top);
        };
        const auto title = field(record.reclaim_y);
        const auto gloss = field(record.reclaim_y + 1);
        if (!title || !gloss) return std::nullopt;
        for (const std::string_view action : {"Reclaim", "Unretire"}) {
            if (!title->starts_with(std::string(action) + " ")) continue;
            const auto native = trim_view(std::string_view(*title).substr(action.size() + 1));
            auto english = trim_view(*gloss);
            if (english.size() >= 2 && english.front() == '"' && english.back() == '"')
                english = trim_view(english.substr(1, english.size() - 2));
            if (native.empty() || english.empty()) return std::nullopt;
            // Both complete fields belong to this checkbox. Their pair selects
            // one real site without borrowing a same-spelling site's type.
            return resolve_site_reference_name(std::string(native) + ", \"" +
                std::string(english) + "\"");
        }
        return std::nullopt;
    };
    const auto append = [&](int y, int left, int source_right, int right, int rule,
                            bool reclaim_action = false, bool site_gloss = false,
                            int covered_right = -1, bool memory_source_only = false,
                            const NativeHistoryName *site_name = nullptr) {
        // The native source can extend into our extra text padding. Keep its
        // entire suppression span even when the translated column is inset.
        const auto [first, end] = text_span(y, left, source_right);
        if (first == end) return;
        bool source_top = false;
        cell_at(first, y, &source_top);
        for (int x = first; x < end; ++x) {
            // Raw-layer suppression and final layout must own the SAME live
            // field. Do not import covered map text or a graphical control.
            bool top = false;
            const auto *cell = cell_at(x, y, &top);
            const auto ch = cell && cell[0] ? cell[0] : ' ';
            if (top != source_top ||
                ch != static_cast<unsigned char>(context[y][x]) || ch < ' ' ||
                is_cp437_box_separator(context[y], x) ||
                native_foreground_picture_at(*gps_, x, y)) return;
        }
        const std::string visible = context[y].substr(first, end - first);
        const auto original = complete_source(first, y, visible,
            source_right, covered_right, source_top);
        const std::string &source = original ? *original : visible;
        std::optional<std::string> target;
        // List names must come from the captured live NativeString, including
        // its pre-resize value. A missing capture leaves this field in English
        // instead of sending a cut-off suffix to the phonetic name fallback.
        if (reclaim_action) {
            if (original)
                for (std::string_view action : {"Reclaim", "Unretire"}) {
                    if (!source.starts_with(std::string(action) + " ")) continue;
                    const auto label = exact_literal_translation(
                        "Embark site action: " + std::string(action));
                    const std::string native = trim(source.substr(action.size() + 1));
                    const std::string name = site_name
                        ? site_name_full_transliteration(*site_name)
                        : transliterate_site_spelling(native);
                    if (label && !name.empty()) target = *label + name;
                    break;
                }
        } else if (site_gloss) {
            // This producer explicitly displays the EnglishName field. Use
            // the same whole-name grammar and fallback as history references,
            // before general dictionary or procedural word matching.
            if (original) {
                target = translate_english_site_name(source, site_name);
                if (target && site_name)
                    *target += site_name_attribute_suffix(site_name->site_label,
                        site_name->site_type);
            }
        } else if (!memory_source_only || original) {
            const bool civilization_name = rule == kEmbarkCivilizationNameRule && !site_gloss;
            if (civilization_name || rule == kEmbarkCivilizationDetailRule)
                target = translate_civilization_reference(source);
            if (!target) target = exact_literal_translation(source);
            if (!target) target = translate_procedural_fragment(source, false, false, {},
                civilization_name ? ProceduralFragmentContext::civilization_name
                                  : ProceduralFragmentContext::general_text);
            if (!target && config_.compositional_rules) target = translate_compositional(source);
        }
        if (target && (target->empty() || target->find("[C:") != std::string::npos ||
                      target->find_first_of("\r\n") != std::string::npos)) target.reset();
        Match match{first, y, end - first, rule,
            target ? *target : cp437_to_utf8(source), visible};
        match.native_hover_untranslated = !target;
        match.layout_x = left;
        match.layout_y = y;
        match.layout_length = right - left;
        match.layout_clip_right = right;
        match.layout_left = true;
        if (only_y < 0 || only_y == y) matches.push_back(std::move(match));
        std::fill(rows[y].begin() + first, rows[y].begin() + end, ' ');
    };

    // Process each actual panel independently. The map, footer, scrollbar
    // and selected-entity details must not enlarge the list's text budget.
    for (size_t i = 0; i < records.size(); ++i) {
        const SDL_Rect panel = records[i].panel;
        const auto same_panel = [&](const NativeEmbarkSelectionRecord &record) {
            return embark_same_panel(record.panel, panel);
        };
        if (std::any_of(records.begin(), records.begin() + i, same_panel)) continue;
        int left = panel.x + panel.w, right = left, list_bottom = panel.y;
        for (const NativeEmbarkSelectionRecord &record : records) {
            if (!same_panel(record)) continue;
            right = std::min(right, record.box.x - 1);
            list_bottom = std::max(list_bottom, record.box.y + record.box.h);
            const int begin = record.reclaim_y >= 0 ? record.reclaim_y : record.box.y + 1;
            const int end = record.reclaim_y >= 0 ? begin + 3 : record.box.y + 3;
            for (int y = begin; y < end; ++y) {
                const auto [first, last] = text_span(y, panel.x, record.box.x);
                if (first < last) left = std::min(left, first);
            }
        }
        if (left >= right) continue;
        for (const NativeEmbarkSelectionRecord &record : records) {
            if (!same_panel(record)) continue;
            if (record.reclaim_y >= 0) {
                const auto site_name = reclaim_site_name(record, left);
                append(record.reclaim_y, left, record.box.x, right,
                    kEmbarkCivilizationNameRule, true, false, record.box.x + record.box.w,
                    true, site_name ? &*site_name : nullptr);
                append(record.reclaim_y + 1, left, record.box.x, right,
                    kEmbarkCivilizationNameRule, false, true, record.box.x + record.box.w,
                    true, site_name ? &*site_name : nullptr);
                append(record.reclaim_y + 2, left, record.box.x, right,
                    kEmbarkCivilizationTypeRule);
            } else {
                append(record.box.y + 1, left, record.box.x, right,
                    kEmbarkCivilizationNameRule, false, false, record.box.x + record.box.w, true);
                append(record.box.y + 2, left, record.box.x, right,
                    kEmbarkCivilizationTypeRule, false, false, record.box.x + record.box.w, true);
            }
            // The selected checkmark is artwork, never an English fragment.
            // Exclude its metadata from generic matching without clearing or
            // suppressing ANY of its twelve native graphical tiles.
            for (int y = record.box.y; y < record.box.y + 3; ++y)
                std::fill_n(rows[y].begin() + record.box.x, 4, ' ');
        }

        // Reclaim history has its own paragraph owner below this list.
        if (records[i].reclaim_y >= 0) continue;

        // The detail record starts below the scrolling list. Its counters
        // establish the text inset, not arbitrary nearby translated names.
        int detail_left = -1, population_y = -1;
        for (int y = list_bottom; y + 1 < panel.y + panel.h; ++y) {
            const auto at = context[y].find("Population: ", panel.x);
            if (at == std::string::npos || at >= static_cast<size_t>(panel.x + panel.w) ||
                context[y + 1].compare(at, 17, "Number of sites: ") != 0) continue;
            detail_left = static_cast<int>(at);
            population_y = y;
            break;
        }
        if (detail_left < 0) continue;
        int detail_top = population_y;
        for (int y = population_y - 1; y >= list_bottom; --y) {
            const auto text = trim_view(std::string_view(context[y]).substr(
                detail_left, panel.x + panel.w - detail_left));
            if (!text.empty()) { detail_top = y; break; }
        }
        for (int y = detail_top; y < panel.y + panel.h; ++y)
            append(y, detail_left, panel.x + panel.w, panel.x + panel.w - 1,
                kEmbarkCivilizationDetailRule);
    }
}

bool Overlay::layout_embark_civilizations(SDL_Renderer *renderer) {
    if (!gps_ || !face_ || !renderer || gps_->tile_pixel_x <= 0 ||
        gps_->tile_pixel_y <= 0) return false;
    std::map<std::array<int, 3>, std::vector<std::vector<Match *>>> columns;
    for (Match &match : prepared_matches_) {
        const bool detail = match.rule == kEmbarkCivilizationDetailRule;
        if (!detail && match.rule != kEmbarkCivilizationNameRule &&
            match.rule != kEmbarkCivilizationTypeRule) continue;
        if (match.target.empty() || match.native_split_duplicate) continue;
        columns[{match.layout_x, match.layout_x + match.layout_length, detail}]
            .push_back({&match});
    }
    if (columns.empty()) return false;
    for (auto &[column, rows] : columns)
        layout_fortress_text_rows(renderer, rows, column[0], column[1], true);
    static bool logged = false;
    if (!logged) {
        logged = true;
        log_line("INFO", "Embark selection layout: native selection boxes, shared name/type column, separate details");
    }
    return true;
}
