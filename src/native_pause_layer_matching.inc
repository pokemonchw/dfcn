// The Escape renderer owns this complete grid and its current caption draws.
// Its authored fields and fixed paragraphs never enter world/history matching.
std::vector<Match> Overlay::find_native_pause_matches() const {
    std::vector<Match> result;
    if (!gps_ || !gps_->screen || gps_->dimx <= 0 || gps_->dimx > 1000 ||
            gps_->dimy <= 0 || gps_->dimy > 1000 || trie_.empty()) return result;
    constexpr int only_y = -1;
    const unsigned char *screen_override = nullptr;
    std::vector<std::string> screen_rows(gps_->dimy, std::string(gps_->dimx, ' '));
    for (int y = 0; y < gps_->dimy; ++y)
        for (int x = 0; x < gps_->dimx; ++x) {
            const auto ch = visible_char_at(x, y);
            if (ch) screen_rows[y][x] = static_cast<char>(ch);
        }
    auto draws = captured_native_drawn_text_rows();
    auto top_draws = captured_native_drawn_text_rows(true);
    draws.insert(draws.end(), std::make_move_iterator(top_draws.begin()),
        std::make_move_iterator(top_draws.end()));
    const auto current_span = [&](const NativeDrawnTextRow &draw)
            -> std::optional<Match> {
        if (draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                draw.x < 0 || draw.x >= gps_->dimx || draw.y < 0 || draw.y >= gps_->dimy)
            return std::nullopt;
        const auto text = trim_view(draw.source);
        if (text.empty()) return std::nullopt;
        const int x = draw.x + static_cast<int>(text.data() - draw.source.data());
        int right = std::min(gps_->dimx, x + static_cast<int>(text.size()));
        if (draw.draw_clip) right = std::min(right, draw.draw_clip->x + draw.draw_clip->w);
        if (right <= x || screen_rows[draw.y].compare(x, right - x,
                text, 0, right - x) != 0) return std::nullopt;
        for (int column = x; column < right; ++column) {
            if (screen_rows[draw.y][column] == ' ') continue;
            bool top = false;
            cell_at(column, draw.y, &top);
            const auto origin = native_text_grid_origin(*gps_,
                static_cast<size_t>(column) * gps_->dimy + draw.y, top);
            if (draw.draw_grid != origin.grid || draw.top_layer != origin.top_layer)
                return std::nullopt;
        }
        return Match{x, draw.y, right - x, kUiMessageRule, {},
            std::string(text.substr(0, right - x))};
    };
#include "native_pause_compact_matches.inc"
    const auto reserve_input = [&](int x, int y, int width) {
        if (x < 0 || y < 0 || y >= gps_->dimy || width <= 0 || width > gps_->dimx - x)
            return;
        const size_t first = result.size();
        append_direct_utf8_matches(screen_rows[y].substr(x, width), y, result);
        for (size_t index = first; index < result.size(); ++index) result[index].x += x;
        std::fill_n(screen_rows[y].begin() + x, width, ' ');
    };
    for (const auto &input : native_text_input_regions(*gps_, screen_rows, nullptr))
        reserve_input(input.x, input.y, input.w);
    const auto base = native_history_profile_base();
#ifdef _WIN32
    // The renderer copies state+0xa8 or state+0x80 and appends its underscore
    // cursor before these exact addst calls. Spelling never identifies input.
    for (const auto &draw : draws) {
        if (!base || (draw.native_caller != native_reference_address(base, 0x1e02aa) &&
                draw.native_caller != native_reference_address(base, 0x1e069b))) continue;
        const auto span = current_span(draw);
        if (!span) continue;
        const auto source = span->source;
        reserve_input(span->x, span->y, span->length);
        bool top = false;
        cell_at(span->x, span->y, &top);
        const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
        const auto half = flags ? flags[static_cast<size_t>(span->x) * gps_->dimy + span->y] &
            ((1u << 3) | (1u << 4)) : 0;
        const int mate = half == (1u << 3) ? span->y + 1 :
            half == (1u << 4) ? span->y - 1 : -1;
        if (mate >= 0 && mate < gps_->dimy && flags &&
                (flags[static_cast<size_t>(span->x) * gps_->dimy + mate] &
                    ((1u << 3) | (1u << 4))) ==
                    (half == (1u << 3) ? (1u << 4) : (1u << 3)) &&
                screen_rows[mate].compare(span->x, span->length, source) == 0)
            reserve_input(span->x, mate, span->length);
    }
#endif

    const auto reserve_native_mate = [&](const Match &span) {
        if (span.x < 0 || span.y < 0 || span.y >= gps_->dimy || span.length <= 0 ||
                span.length > gps_->dimx - span.x ||
                span.source.size() != static_cast<size_t>(span.length)) return;
        bool top = false;
        cell_at(span.x, span.y, &top);
        const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
        const auto half = flags ? flags[static_cast<size_t>(span.x) * gps_->dimy + span.y] &
            ((1u << 3) | (1u << 4)) : 0;
        const int mate = half == (1u << 3) ? span.y + 1 :
            half == (1u << 4) ? span.y - 1 : -1;
        if (mate < 0 || mate >= gps_->dimy || !flags ||
                (flags[static_cast<size_t>(span.x) * gps_->dimy + mate] &
                    ((1u << 3) | (1u << 4))) !=
                    (half == (1u << 3) ? (1u << 4) : (1u << 3)) ||
                screen_rows[mate].compare(span.x, span.length, span.source) != 0) return;
        bool mate_top = false;
        cell_at(span.x, mate, &mate_top);
        if (mate_top != top) return;
        std::fill_n(screen_rows[mate].begin() + span.x, span.length, ' ');
    };

    // Translate status prefixes while all soundtrack TITLE/AUTHOR values
    // and folder identifiers remain authored metadata.
#include "pause_menu_fields.inc"
    for (const auto &match : result)
        if (match.source.starts_with("Save to timeline folder: ") ||
                is_embark_pause_soundtrack(match.source))
            reserve_native_mate(match);
    for (const auto &draw : draws) {
        const auto source = trim_view(draw.source);
        if (!source.starts_with("Save to timeline folder: ") &&
                !is_embark_pause_soundtrack(source)) continue;
        if (const auto span = current_span(draw)) {
            reserve_native_mate(*span);
            std::fill_n(screen_rows[span->y].begin() + span->x, span->length, ' ');
        }
    }

    // The six ended-game branches are stored as one complete native vector,
    // not as the fixed confirmation rows below. Its renderer centers a
    // one-row body and draws every longer body at frame_left + 2, advancing
    // Y once per vector entry. Bind every current draw to that actual string
    // address before translating the complete source; no screen suffix or
    // three-row limit may stand in for the retained document.
    if (g_native_pause_ending_body) {
        const auto &body = *g_native_pause_ending_body;
        struct Ending {
            int32_t mode;
            std::string_view title, source;
        };
        constexpr std::array<Ending, 6> endings{{
            {1, "Abandoned", "Your settlement has been abandoned."},
            {1, "Retired", "Your fortress has settled into the rhythm of day-to-day living, beyond your meticulous concern."},
            {1, "Conquered", "Your strength has been broken."},
            {1, "Withered", "Your settlement has crumbled to its end."},
            {9, "Retired", "You settle in this location..."},
            {10, "Dead", "Your adventure has come to an end."}}};
        std::string joined;
        for (const auto &row : body.rows) {
            if (!joined.empty()) joined.push_back(' ');
            joined.append(trim_view(row));
        }
        const std::string complete = normalize_utterance(joined);
        const auto ending = std::find_if(endings.begin(), endings.end(), [&](const Ending &entry) {
            return body.mode == entry.mode && body.title == entry.title && complete == entry.source;
        });
        const uintptr_t caller = body.rows.size() == 1
#ifdef _WIN32
            ? native_reference_address(base, 0x1e19b6) : native_reference_address(base, 0x1e1a58);
#else
            ? native_elf_5317_address(0x1427a62) : native_elf_5317_address(0x1427c11);
#endif
        std::vector<Match> rows;
        std::vector<Match> mates;
        const NativeDrawnTextRow *previous = nullptr;
        bool intact = ending != endings.end() && caller && !body.rows.empty() &&
            body.rows.size() == body.row_addresses.size();
        for (size_t line = 0; intact && line < body.rows.size(); ++line) {
            const NativeDrawnTextRow *owner = nullptr;
            std::optional<Match> span;
            for (const auto &draw : draws) {
                if (draw.native_caller != caller || draw.address != body.row_addresses[line] ||
                        draw.source != body.rows[line] ||
                        (previous && (draw.x != previous->x || draw.y != previous->y + 1 ||
                            draw.draw_grid != previous->draw_grid || draw.top_layer != previous->top_layer)))
                    continue;
                const auto candidate = current_span(draw);
                if (!candidate || candidate->source.size() != trim_view(draw.source).size()) continue;
                if (!owner || draw.sequence > owner->sequence) { owner = &draw; span = candidate; }
            }
            if (!owner || !span) { intact = false; break; }
            previous = owner;
            rows.push_back(*span);
            // A real half-font companion owns suppression only. It must
            // never append the same English row to the complete sentence or
            // acquire its own word translations. Prove each companion byte
            // and both half flags on the same visible native layer.
            bool top = false;
            cell_at(span->x, span->y, &top);
            const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            constexpr uint32_t halves = (1u << 3) | (1u << 4);
            const uint32_t half = flags
                ? flags[static_cast<size_t>(span->x) * gps_->dimy + span->y] & halves : 0;
            const int mate_y = half == (1u << 3) ? span->y + 1 :
                half == (1u << 4) ? span->y - 1 : -1;
            bool mate = flags && mate_y >= 0 && mate_y < gps_->dimy &&
                screen_rows[mate_y].compare(span->x, span->length, span->source) == 0;
            for (int column = span->x; mate && column < span->x + span->length; ++column) {
                bool current_top = false, mate_top = false;
                const auto *current = cell_at(column, span->y, &current_top);
                const auto *other = cell_at(column, mate_y, &mate_top);
                const size_t tile = static_cast<size_t>(column) * gps_->dimy;
                mate = current && other && current_top == top && mate_top == top &&
                    (flags[tile + span->y] & halves) == half &&
                    (flags[tile + mate_y] & halves) ==
                        (half == (1u << 3) ? (1u << 4) : (1u << 3));
            }
            if (mate) {
                Match duplicate = *span;
                duplicate.y = mate_y;
                duplicate.native_split_duplicate = true;
                mates.push_back(std::move(duplicate));
            }
        }
        if (intact && !rows.empty()) {
            const NativePanelBorders ending_borders(*gps_);
            const auto panel = native_panel_interior(ending_borders, *gps_,
                rows.front().x, rows.front().x + rows.front().length, rows.front().y);
            const int left = panel ? panel->x + 1 : rows.front().x;
            const int right = panel ? std::min(panel->x + panel->w - 1, left + 58)
                : std::min(gps_->dimx, left + 58);
            const auto target = exact_literal_translation(ending->source);
            const size_t begin = result.size();
            if (target && append_bounded_paragraph(rows, *target, screen_rows, result,
                    only_y, right, right, {}, false, left)) {
                // Native one-line bodies are centered; wrapped ones share
                // the paragraph's left inset. Source spans remain unchanged.
                if (body.rows.size() == 1)
                    for (size_t index = begin; index < result.size(); ++index)
                        result[index].layout_left = false;
                for (auto &mate : mates) {
                    std::fill_n(screen_rows[mate.y].begin() + mate.x, mate.length, ' ');
                    result.push_back(std::move(mate));
                }
            } else {
                for (auto &row : rows) {
                    row.native_help_source_only = true;
                    row.native_help_review_source = complete;
                    std::fill_n(screen_rows[row.y].begin() + row.x, row.length, ' ');
                    result.push_back(std::move(row));
                }
                for (auto &mate : mates) {
                    mate.native_help_source_only = true;
                    std::fill_n(screen_rows[mate.y].begin() + mate.x, mate.length, ' ');
                    result.push_back(std::move(mate));
                }
            }
        }
    }


    // Complete native sentence branches from pause-menu-sources.tsv. The
    // renderer emits two or three separate rows; catalog ownership joins
    // those rows before ordinary literals can translate their short prefixes.
    constexpr std::array<std::string_view, 8> paragraphs = {
        "There is a folder with this name already. Would you like to overwrite it?",
        "Saves starting here will be grouped on the title screen, with their own active save.",
        "What would you like to name this manual save? It will never be overwritten, but you can delete it while loading.",
        "Really retire? The world will be saved but you will need to unretire the fort to play here again.",
        "Really retire? The world will be saved but you will need to unretire or recruit this character to play them again.",
        "Really quit? The fort will be saved but you will need to reclaim the fort to play here again.",
        "Really quit? The character will live on through their legend but will not be available to play.",
        "All of your progress since the last save will be lost."};
    const NativePanelBorders borders(*gps_);
    for (const auto complete : paragraphs) {
        const auto wanted = compact_ui_message_literal(complete);
        for (const auto &draw : draws) {
            const auto first = current_span(draw);
            if (!first || first->source.size() != trim_view(draw.source).size()) continue;
            auto compact = compact_ui_message_literal(first->source);
            if (compact.empty() || !wanted.starts_with(compact)) continue;
            std::vector<Match> rows{*first};
            std::string source = first->source;
            while (compact != wanted && rows.size() < 3) {
                std::optional<Match> next;
                for (const auto &continuation : draws) {
                    if (continuation.y <= rows.back().y || continuation.y > rows.back().y + 2)
                        continue;
                    const auto span = current_span(continuation);
                    if (!span || span->x != first->x ||
                            span->source.size() != trim_view(continuation.source).size() ||
                            !wanted.starts_with(compact + compact_ui_message_literal(span->source)))
                        continue;
                    if (!next || span->y < next->y) next = span;
                }
                if (!next) break;
                rows.push_back(*next);
                source += ' ';
                source += next->source;
                compact = compact_ui_message_literal(source);
            }
            if (compact != wanted) continue;
            std::vector<int> colors;
            for (const auto &row : rows) {
                if (!colors.empty()) colors.push_back(colors.back());
                for (int column = row.x; column < row.x + row.length; ++column) {
                    bool top = false;
                    const auto *cell = cell_at(column, row.y, &top);
                    colors.push_back(cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : 0xffffff);
                }
            }
            std::vector<int> target_colors;
            auto translated = translate_help_paragraph_result(source, colors, target_colors, true);
            const auto panel = native_panel_interior(borders, *gps_, first->x,
                first->x + first->length, first->y);
            const int right = panel ? panel->x + panel->w : gps_->dimx;
            const size_t begin = result.size();
            if (translated.usable() && translated.changed() &&
                    append_bounded_paragraph(rows, translated.target, screen_rows, result,
                        only_y, right, right, target_colors)) {
                const auto metadata = std::make_shared<const TranslationResult>(std::move(translated));
                for (size_t index = begin; index < result.size(); ++index)
                    result[index].translation_result = metadata;
            } else for (auto &row : rows) {
                row.native_help_source_only = true;
                row.native_help_review_source = source;
                std::fill_n(screen_rows[row.y].begin() + row.x, row.length, ' ');
                result.push_back(std::move(row));
            }
            break;
        }
    }

    // Saving stages, menu actions and confirmation buttons are ordinary
    // catalog literals. Numeric progress remains native; no noun/name/item
    // composition runs on this component's remaining fields.
    append_native_info_grid_matches(screen_rows, result, only_y, false);
    return result;
}
