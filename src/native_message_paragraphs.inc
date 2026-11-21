// Share paragraph layout and source ownership between early native reports
// and the later complete UI message catalog.
static bool is_visitor_overview_paragraph(std::string_view source) {
    return source == "You can learn more about this visitor after they chat with a local." ||
        source == "This visitor is ready to leave." ||
        source.starts_with("This visitor has come ");
}

// Overview cells end in crossing/T separators rather than closed panel
// corners. Their already-proven row cards own the column and each physical
// source span even when no constructor-time paragraph capture is retained.
void Overlay::append_visitor_overview_paragraphs(const std::vector<NativeTextCard> &cards,
        std::vector<std::string> &screen_rows, std::vector<Match> &result,
        std::vector<Match> &untranslated_help_rows, int only_y) const {
    for (const auto &first : cards) {
        if (first.rows.size() != 1) continue;
        const auto &opening = first.rows.front();
        if (!opening.source.starts_with("You can learn more about") &&
                !opening.source.starts_with("This visitor ")) continue;
        std::string source;
        std::vector<int> source_colors;
        std::vector<Match> rows;
        const NativeTextCardRow *previous = nullptr;
        const NativeTextCard *card = &first;
        while (card && card->rows.size() == 1) {
            const auto &row = card->rows.front();
            if (row.x != opening.x || row.y != card->interior.y ||
                    row.foregrounds.size() != row.source.size() ||
                    screen_rows[row.y].compare(row.x, row.source.size(), row.source) != 0)
                break;
            // Native half-font pairs repeat the same bytes on two physical
            // rows. Translate those bytes once while retaining both masks.
            bool duplicate = previous && previous->source == row.source &&
                previous->y + 1 == row.y;
            for (size_t at = 0; duplicate && at < row.source.size(); ++at) {
                if (row.source[at] == ' ') continue;
                bool upper_layer = false, lower_layer = false;
                cell_at(row.x + static_cast<int>(at), previous->y, &upper_layer);
                cell_at(row.x + static_cast<int>(at), row.y, &lower_layer);
                const auto *flags = upper_layer
                    ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
                const size_t tile = static_cast<size_t>(row.x + at) * gps_->dimy;
                duplicate = flags && upper_layer == lower_layer &&
                    (flags[tile + previous->y] & ((1u << 3) | (1u << 4))) == (1u << 3) &&
                    (flags[tile + row.y] & ((1u << 3) | (1u << 4))) == (1u << 4);
            }
            if (!duplicate) {
                if (!source.empty()) {
                    source.push_back(' ');
                    source_colors.push_back(source_colors.back());
                }
                source += row.source;
                source_colors.insert(source_colors.end(),
                    row.foregrounds.begin(), row.foregrounds.end());
            }
            rows.push_back({row.x, row.y, static_cast<int>(row.source.size()),
                kUiMessageRule, {}, row.source});
            previous = &row;
            const int next_y = row.y + 1;
            const auto next = std::find_if(cards.begin(), cards.end(), [&](const NativeTextCard &candidate) {
                return candidate.interior.x == first.interior.x &&
                    candidate.interior.w == first.interior.w && candidate.interior.y == next_y;
            });
            card = next == cards.end() ? nullptr : &*next;
        }
        // A missing row or separator ends this allocation. Only a complete
        // visitor production may claim it; unknown text keeps its native ink.
        if (rows.empty() || !is_visitor_overview_paragraph(normalize_utterance(source))) continue;
        std::vector<int> target_colors;
        const auto target = translate_help_paragraph(source, source_colors, target_colors, true);
        if (!target) continue;
        const int tile_w = gps_->tile_pixel_x, tile_h = gps_->tile_pixel_y;
        const int origin_x = (gps_->screen_pixel_x - gps_->dimx * tile_w) / 2;
        const int origin_y = (gps_->screen_pixel_y - gps_->dimy * tile_h) / 2;
        const int right = first.interior.x + first.interior.w;
        const SDL_Rect clip{origin_x + opening.x * tile_w, origin_y + opening.y * tile_h,
            (right - opening.x) * tile_w, (rows.back().y + 1 - opening.y) * tile_h};
        for (auto &row : rows) row.layout_native_clip = clip;
        const size_t first_match = result.size();
        if (append_ui_message_paragraph(screen_rows, result, untranslated_help_rows, only_y,
                std::move(rows), right, *target, target_colors, std::nullopt,
                source, opening.x, false, 0))
            for (size_t at = first_match; at < result.size(); ++at)
                result[at].native_overview_paragraph = true;
    }
}

std::shared_ptr<const TranslationResult> Overlay::announcement_result_metadata(std::string_view source) const {
    const auto prefix = std::to_string(native_identity_translation_context()) + '\x1f';
    const auto original = announcement_translation_cache_.find(prefix + std::string(source));
    if (original != announcement_translation_cache_.end() && original->second.result.usable())
        return std::make_shared<TranslationResult>(original->second.result);
    std::vector<size_t> source_origins;
    const auto native = native_announcement_kinship_source(source, &source_origins);
    if (!native) return {};
    const auto cached = announcement_translation_cache_.find(prefix + *native);
    if (cached == announcement_translation_cache_.end() || !cached->second.result.usable()) return {};
    auto result = std::make_shared<TranslationResult>(cached->second.result);
    for (auto &origin : result->origins)
        origin = origin < source_origins.size() ? source_origins[origin] : std::string::npos;
    for (auto &fragment : result->fragments) {
        fragment.source_begin = fragment.source_begin < source_origins.size()
            ? source_origins[fragment.source_begin] : source.size();
        fragment.source_end = fragment.source_end && fragment.source_end <= source_origins.size()
            ? std::min(source.size(), source_origins[fragment.source_end - 1] + 1) : source.size();
    }
    result->source = source;
    return result;
}

bool Overlay::append_ui_message_paragraph(std::vector<std::string> &screen_rows,
        std::vector<Match> &result, std::vector<Match> &untranslated_help_rows,
        int only_y, std::vector<Match> rows, int right, std::string_view target,
        const std::vector<int> &target_colors,
        std::optional<NativeParagraphViewport> viewport,
        std::string_view complete_source, int native_left, bool native_centered,
        int complete_layout_rows, std::optional<SDL_Rect> occluding_frame) const {
    const NativePanelBorders borders(*gps_);
    // Notification lines are centered by the native widget before
    // translation. Their ink starts are not paragraph margins.
    // Recover the common closed frame while retaining each original
    // span for suppression, including centered wrap continuations.
    int centered_left = native_centered ? native_left : -1;
    if (native_left < 0 && !rows.empty()) {
        const auto panel = native_panel_interior(borders, *gps_,
            rows.front().x, rows.front().x + rows.front().length, rows.front().y,
            occluding_frame);
        if (panel && std::all_of(rows.begin(), rows.end(), [&](const Match &row) {
                const int before = row.x - panel->x;
                const int after = panel->x + panel->w - row.x - row.length;
                return row.length > 0 && before > 1 && after > 1 &&
                    std::abs(before - after) <= 2;
            })) {
            centered_left = panel->x;
            right = panel->x + panel->w;
        }
    }
    std::string source(complete_source);
    if (source.empty()) {
        for (const Match &row : rows) {
            if (!source.empty()) source.push_back(' ');
            source += row.source;
        }
    }
    const bool visitor_overview = is_visitor_overview_paragraph(normalize_utterance(source));
    const size_t first_match = result.size();
    std::shared_ptr<const TranslationResult> metadata;
    if (!rows.empty()) metadata = rows.front().translation_result;
    if (!metadata && !complete_source.empty()) metadata = announcement_result_metadata(complete_source);
    std::vector<Match> fitted;
    if (append_bounded_paragraph(rows, target, screen_rows, fitted, only_y,
            right, right, target_colors, false,
            native_left >= 0 ? native_left : centered_left, viewport, {},
            complete_layout_rows)) {
        if (visitor_overview) {
            // Present can recover the complete visitor box after its native
            // glyph copies escaped the early mask. Clear every original wrap
            // row before any reflowed Chinese, including unused English tails.
            // Only surviving source bytes authorize these foreground runs;
            // the existing copy proof skips runs already suppressed this frame.
            for (const Match &row : rows) {
                if (only_y >= 0 && only_y != row.y) continue;
                const auto rgb_at = [&](int x) {
                    bool top = false;
                    const auto *cell = cell_at(x, row.y, &top);
                    const unsigned char expected = static_cast<unsigned char>(
                        row.source[static_cast<size_t>(x - row.x)]);
                    if (!cell || (cell[0] ? cell[0] : ' ') != expected) return -1;
                    return (cell[1] << 16) | (cell[2] << 8) | cell[3];
                };
                for (int begin = row.x; begin < row.x + row.length;) {
                    const int color = rgb_at(begin);
                    if (color < 0) { ++begin; continue; }
                    int end = begin + 1;
                    while (end < row.x + row.length && rgb_at(end) == color) ++end;
                    Match clear{begin, row.y, end - begin, kUiMessageRule, {},
                        row.source.substr(begin - row.x, end - begin)};
                    clear.layout_foreground_rgb = color;
                    clear.graphical_clear_x = begin;
                    clear.graphical_clear_y = row.y;
                    clear.graphical_clear_width = end - begin;
                    clear.graphical_clear_height = 1;
                    result.push_back(std::move(clear));
                    begin = end;
                }
            }
        }
        result.insert(result.end(), std::make_move_iterator(fitted.begin()),
            std::make_move_iterator(fitted.end()));
        for (size_t at = first_match; at < result.size(); ++at)
            result[at].translation_result = metadata;
        if (centered_left >= 0)
            for (size_t at = first_match; at < result.size(); ++at)
                result[at].layout_left = false;
        return true;
    }
    if (!rows.empty()) rows.front().native_help_review_source = std::move(source);
    for (Match &row : rows) {
        row.native_help_source_only = true;
        std::fill_n(screen_rows[row.y].begin() + row.x, row.length, ' ');
        untranslated_help_rows.push_back(std::move(row));
    }
    return false;
}

// Native announcements and filesystem errors claim their complete original
// paragraphs before names and item captions can consume individual fields.
// Other native catalog paragraphs retain their later specialized precedence.
void Overlay::append_native_message_paragraphs(std::vector<std::string> &screen_rows,
        std::vector<Match> &result, std::vector<Match> &untranslated_help_rows,
        int only_y, const unsigned char *screen_override, bool announcements_only) const {
    if (ui_message_trie_.size() <= 1 && ui_message_template_rules_.empty()) return;
    if (!announcements_only) {
        std::scoped_lock lock(g_native_paragraph_mutex, g_native_drawn_text_mutex);
        const std::vector<NativeDrawnTextRow> no_occluded_draws;
        if (native_paragraph_candidates(screen_rows, g_native_drawn_text_rows,
                no_occluded_draws).empty()) return;
    }
    std::optional<NativePanelBorders> source_borders;
    const auto announcement_first_row_matches = [&](std::string_view source, int left, int y) {
        size_t cursor = 0;
        int x = left;
        while (cursor < source.size() && x < gps_->dimx) {
            if (source[cursor] == ' ') {
                if (screen_rows[y][x] != ' ') break;
                // Padding can end a wrapped line or separate widgets.
                // Leave either case to the complete frame matcher.
                if (x + 1 < gps_->dimx && screen_rows[y][x + 1] == ' ') return true;
                ++x;
            } else {
                if (screen_rows[y][x] != source[cursor]) break;
                ++x;
            }
            ++cursor;
        }
        if (cursor == source.size() || x == gps_->dimx) return true;
        // Only a mismatch needs any border work. A texture-only right
        // edge may retain a matching glyph earlier in this prefix, so
        // reject only when no possible edge could have ended the row.
        // A single-cell encoding context keeps ambiguous CP437 edges
        // for the definitive full-frame/wrap proof below.
        if (!source_borders) source_borders.emplace(*gps_);
        for (int column = left; column <= x; ++column)
            if (source_borders->at(column, y, 5, std::nullopt,
                    std::pair{column, column + 1})) return true;
        return false;
    };
    const bool notification_background = announcements_only &&
        g_native_notification_layer.ready && native_map_background_view(gps_);
    if (notification_background) {
        // The map beneath an isolated alert needs evidence of its own message before it
        // refreshes report history on behalf of the independent foreground.
        bool captured_candidate = false;
        {
            std::scoped_lock lock(g_native_paragraph_mutex, g_native_drawn_text_mutex);
            const std::vector<NativeDrawnTextRow> no_occluded_draws;
            captured_candidate = !native_paragraph_candidates(screen_rows,
                g_native_drawn_text_rows, no_occluded_draws).empty();
            if (!captured_candidate && announcements_only &&
                    (!screen_override || screen_override != gps_->screen_top)) {
                const std::vector<NativeDateOccludedTextRow> no_dates;
                captured_candidate = !native_paragraph_candidates(screen_rows,
                    g_native_date_occluded_text_rows[0], no_dates).empty();
            }
        }
        if (!captured_candidate) {
            // The isolated alert list supplies no main-grid paragraphs.
            // Preserve screen-only recovery for a real non-isolated message:
            // use the existing owned history/recent-source indices to prove
            // that a possible opening is present before refreshing history.
            // An absent/incomplete snapshot or a changed world keeps the
            // ordinary path, including pages built before capture began.
            uintptr_t world = 0;
            bool source_candidate = true;
            if (native_announcement_current_world(world)) {
                std::lock_guard<std::mutex> lock(g_native_announcement_mutex);
                apply_native_announcement_recent_changes_locked();
                if (g_native_announcement_snapshot &&
                        !g_native_announcement_history_full_refresh &&
                        world == g_native_announcement_history_world) {
                    source_candidate = std::any_of(screen_rows.begin(), screen_rows.end(),
                        [&](const auto &row) {
                            return std::any_of(native_announcement_instructions.begin(),
                                native_announcement_instructions.end(), [&](const auto instruction) {
                                    return row.find(instruction) != std::string::npos;
                                });
                        });
                    const auto visible_opening = [&](const auto &anchors, auto source_at) {
                        for (int y = 0; y < gps_->dimy; ++y) {
                            const auto &row = screen_rows[y];
                            for (size_t left = 0; left < row.size(); ++left) {
                                const auto first = anchors[0].next.find(
                                    static_cast<unsigned char>(row[left]));
                                if (first == anchors[0].next.end()) continue;
                                size_t node = first->second, at = left;
                                while (true) {
                                    for (const size_t index : anchors[node].records)
                                        if (announcement_first_row_matches(source_at(index),
                                                static_cast<int>(left), y)) return true;
                                    if (++at == row.size()) break;
                                    const auto next = anchors[node].next.find(
                                        static_cast<unsigned char>(row[at]));
                                    if (next == anchors[node].next.end()) break;
                                    node = next->second;
                                }
                            }
                        }
                        return false;
                    };
                    if (!source_candidate)
                        source_candidate = visible_opening(g_native_announcement_snapshot->anchors,
                            [&](size_t index) -> std::string_view {
                                return g_native_announcement_snapshot->records[index].source;
                            });
                    if (!source_candidate && !g_native_announcement_recent_changes.empty()) {
                        // An active snapshot reader can defer publication.
                        // Its coalesced delta stays bounded by the old/live
                        // recent caches, independently of submission count.
                        std::vector<NativeAnnouncementSnapshot::AnchorNode> pending(1);
                        for (size_t index = 0; index < g_native_announcement_recent_changes.size(); ++index) {
                            const auto &change = g_native_announcement_recent_changes[index];
                            if (!change.add || change.source.empty() ||
                                    g_native_announcement_snapshot->originals.contains(change.source)) continue;
                            const auto opening = std::string_view(change.source).substr(
                                0, change.source.find(' '));
                            size_t node = 0;
                            for (const unsigned char ch : opening) {
                                const auto [next, inserted] = pending[node].next.emplace(ch, pending.size());
                                node = next->second;
                                if (inserted) pending.emplace_back();
                            }
                            pending[node].records.push_back(index);
                        }
                        source_candidate = visible_opening(pending,
                            [&](size_t index) -> std::string_view {
                                return g_native_announcement_recent_changes[index].source;
                            });
                    }
                }
            }
            if (!source_candidate) return;
        }
    }
    if (!source_borders) source_borders.emplace(*gps_);
    const auto &borders = *source_borders;
    const auto visible_layer = [&](int x, int y) {
        if (!screen_override) return true;
        bool top = false;
        cell_at(x, y, &top);
        return screen_override == (top ? gps_->screen_top : gps_->screen);
    };
    const auto message_foreground = [&](int x, int y) {
        bool top = false;
        const auto *cell = screen_override
            ? screen_override + (static_cast<size_t>(x) * gps_->dimy + y) * 8
            : cell_at(x, y, &top);
        return cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : 0xffffff;
    };
    const auto message_foregrounds = [&](int x, int y, int length) {
        std::vector<int> colors;
        colors.reserve(static_cast<size_t>(std::max(0, length)));
        for (int i = 0; i < length; ++i) {
            colors.push_back(message_foreground(x + i, y));
        }
        return colors;
    };
    const auto &message_templates = ui_message_template_probes_;
    const auto append_message = [&](std::vector<Match> rows, int right,
                                    std::string_view target,
                                    const std::vector<int> &target_colors,
                                    std::optional<NativeParagraphViewport> viewport = std::nullopt,
                                    std::string_view complete_source = {},
                                    int native_left = -1, bool native_centered = false,
                                    int complete_layout_rows = 0) {
        return append_ui_message_paragraph(screen_rows, result, untranslated_help_rows,
            only_y, std::move(rows), right, target, target_colors, viewport,
            complete_source, native_left, native_centered, complete_layout_rows);
    };
    // The announcement submitter owns message identity independently of
    // the dictionary. Translate its complete record before a short known
    // word or sentence can claim only part of it. A missing production is
    // collected as a whole original message, never erased or phoneticized.
    const auto announcements = native_announcement_sources();
    // Native wrap rows carry both their complete source and their live
    // draw identity. A scrolled report may expose only a continuation;
    // identical suffix text alone must never select a different record.
    // Unaddressed paragraphs still require their entire native wrap.
    struct MessageDraw {
        int x, y;
        std::string source;
        uintptr_t address;
        uintptr_t multiline_owner;
    };
    std::vector<MessageDraw> native_draws;
    std::vector<MessageDraw> date_occluded_draws;
    {
        std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
        native_draws.reserve(g_native_drawn_text_rows.size());
        // Paragraph identity uses these fields only. Picture frame and
        // unit-caption metadata can contain large vectors unrelated to prose.
        for (const auto &draw : g_native_drawn_text_rows)
            if (draw.address) native_draws.push_back({draw.x, draw.y, draw.source, draw.address, draw.multiline_owner});
        // These are overwritten base-layer draws, not current screen rows.
        // Only the strict Date recovery below may use their old identity.
        if (announcements_only && (!screen_override || screen_override != gps_->screen_top)) {
            date_occluded_draws.reserve(g_native_date_occluded_text_rows[0].size());
            for (const auto &draw : g_native_date_occluded_text_rows[0])
                date_occluded_draws.push_back({draw.x, draw.y, draw.source, draw.address, draw.multiline_owner});
        }
    }
    std::unordered_multimap<uintptr_t, const MessageDraw *> draws_by_address;
    std::unordered_multimap<uintptr_t, const MessageDraw *> date_occluded_by_address;
    std::map<std::pair<int, int>, const MessageDraw *> draws_by_position;
    for (const auto &draw : native_draws) {
        if (!draw.address) continue;
        draws_by_address.emplace(draw.address, &draw);
        draws_by_position.emplace(std::pair{draw.x, draw.y}, &draw);
    }
    for (const auto &draw : date_occluded_draws)
        date_occluded_by_address.emplace(draw.address, &draw);
    const auto native_message_rows = [&](const NativeParagraphCapture &capture,
            int x, int y, size_t begin, size_t end, bool addressed,
            bool announcement) -> std::optional<std::vector<Match>> {
        if (begin >= end || end > capture.wrapped_lines.size() || x < 0 ||
            capture.paragraph_width <= 0 || x > gps_->dimx - capture.paragraph_width ||
            int64_t(y) + int64_t(begin) < 0 ||
            int64_t(y) + int64_t(end) > gps_->dimy ||
            (addressed && capture.row_addresses.size() != capture.wrapped_lines.size()))
            return std::nullopt;
        const bool file_error = is_native_save_file_error(capture.source);
        std::vector<Match> rows;
        for (size_t line = begin; line < end; ++line) {
            const auto &native_source = capture.wrapped_lines[line];
            const auto source = trim_view(native_source);
            const int indent = source.empty() ? 0 :
                static_cast<int>(source.data() - native_source.data());
            const int row_x = x + indent, row_y = y + static_cast<int>(line);
            const int right = x + capture.paragraph_width;
            const auto &visible = screen_rows[row_y];
            if ((!announcement && source.empty()) || row_x > right ||
                source.size() > static_cast<size_t>(right - row_x) ||
                visible.compare(row_x, source.size(), source) != 0 ||
                (x > 0 && ascii_word_byte(visible[x - 1]))) return std::nullopt;
            const auto draw = draws_by_position.find({x, row_y});
            if (draw != draws_by_position.end() && draw->second->multiline_owner &&
                    draw->second->multiline_owner != capture.owner) return std::nullopt;
            if (addressed && !source.empty()) {
                if (draw == draws_by_position.end() ||
                    draw->second->address != capture.row_addresses[line] ||
                    draw->second->source != native_source) return std::nullopt;
            }
            for (int at = x; at < right; ++at) {
                const bool source_cell = at >= row_x &&
                    at < row_x + static_cast<int>(source.size());
                if (source_cell && visible[at] != ' ') {
                    // FormatMessageA bytes can equal CP437 frame glyphs.
                    // Exact retained wrap bytes and layer ownership still
                    // prove this error; those bytes are not panel edges.
                    if (!visible_layer(at, row_y) ||
                            (!file_error && is_cp437_box_separator(visible, at)))
                        return std::nullopt;
                } else if (!source_cell && visible[at] != ' ') return std::nullopt;
            }
            rows.push_back({row_x, row_y, static_cast<int>(source.size()),
                kUiMessageRule, {}, std::string(source)});
        }
        return rows;
    };
    struct DateOccludedMessage {
        std::vector<Match> rows;
        std::vector<Match> fragments;
    };
    const auto date_occluded_message = [&](const NativeParagraphCapture &capture,
            int x, int y) -> std::optional<DateOccludedMessage> {
        // The native byte-count height estimate can put Date over any
        // continuation, even with more native wrap rows below it. Recover
        // only a live, address-proven paragraph;
        // its visible fragments must never be joined into a different source.
        const size_t count = capture.wrapped_lines.size();
        if (count < 2 || count > static_cast<size_t>(gps_->dimy) ||
            capture.row_addresses.size() != count || x < 0 || y < 0 ||
            capture.paragraph_width <= 0 ||
            x > gps_->dimx - capture.paragraph_width ||
            int64_t(y) + static_cast<int64_t>(count) > gps_->dimy)
            return std::nullopt;
        const int right = x + capture.paragraph_width;
        const auto recover_line = [&](size_t line) -> std::optional<DateOccludedMessage> {
            const int row_y = y + static_cast<int>(line);
            const auto &visible = screen_rows[row_y];
            // Prove the date before copying or matching the rest of the report.
            const auto date_at = visible.find("Date:", static_cast<size_t>(x));
            if (date_at == std::string::npos || date_at + 5 > static_cast<size_t>(right))
                return std::nullopt;
            const int date_x = static_cast<int>(date_at);
            const auto date = parse_native_calendar_date(
                std::string_view(visible).substr(date_at + 5, right - date_x - 5));
            if (!date) return std::nullopt;
            const int date_end = date_x + 5 + static_cast<int>(date->end);
            const auto &native_source = capture.wrapped_lines[line];
            const auto source = trim_view(native_source);
            const int row_x = x + (source.empty() ? 0 :
                static_cast<int>(source.data() - native_source.data()));
            if (source.empty() || row_x > right ||
                source.size() > static_cast<size_t>(right - row_x)) return std::nullopt;
            const int source_end = row_x + static_cast<int>(source.size());
            if (date_end <= row_x || date_end >= source_end ||
                visible.compare(row_x, source.size(), source) == 0) return std::nullopt;
            const auto same_draw = [&](const MessageDraw &draw) {
                return (!draw.multiline_owner || draw.multiline_owner == capture.owner) &&
                    draw.x == x && draw.y == row_y &&
                    draw.address == capture.row_addresses[line] && draw.source == native_source;
            };
            const auto current_draw = draws_by_position.find({x, row_y});
            int date_left = date_x;
            if (current_draw != draws_by_position.end() && date_x > x) {
                const auto &date_source = current_draw->second->source;
                const size_t indent = static_cast<size_t>(date_x - x);
                // A Date draw can itself begin with padding. Only its captured
                // bytes prove that those spaces, too, overwrote the old report.
                if (date_source.size() >= indent + 5 &&
                    date_source.find_first_not_of(' ') == indent &&
                    date_source.compare(indent, 5, "Date:") == 0 &&
                    visible.compare(x, indent + 5, date_source, 0, indent + 5) == 0)
                    date_left = x;
            }
            bool addressed = current_draw != draws_by_position.end() && same_draw(*current_draw->second);
            if (!addressed) {
                const auto [first, last] = date_occluded_by_address.equal_range(capture.row_addresses[line]);
                for (auto at = first; at != last; ++at)
                    if (same_draw(*at->second)) { addressed = true; break; }
            }
            if (!addressed) return std::nullopt;
            auto rows = native_message_rows(capture, x, y, 0, line, true, true);
            if (!rows || rows->front().source.empty()) return std::nullopt;
            std::vector<Match> following;
            if (line + 1 < count) {
                auto tail = native_message_rows(capture, x, y, line + 1, count, true, true);
                if (!tail) return std::nullopt;
                following = std::move(*tail);
            }
            // Only the parsed date may hide source bytes. Everything outside it,
            // including the surviving report suffix and the paragraph margins,
            // must still have exactly the original bytes on this same layer.
            for (int at = x; at < right; ++at) {
                if (at >= date_left && at < date_end) {
                    if (visible[at] != ' ' && (!visible_layer(at, row_y) ||
                            is_cp437_box_separator(visible, at))) return std::nullopt;
                    continue;
                }
                const char expected = at >= row_x && at < source_end
                    ? source[static_cast<size_t>(at - row_x)] : ' ';
                if (visible[at] != expected || (expected != ' ' &&
                        (!visible_layer(at, row_y) || is_cp437_box_separator(visible, at))))
                    return std::nullopt;
            }
            int tail_x = date_end;
            while (tail_x < source_end && visible[tail_x] == ' ') ++tail_x;
            if (tail_x == source_end) return std::nullopt;
            std::vector<Match> fragments;
            int prefix_end = date_left;
            while (prefix_end > row_x && visible[prefix_end - 1] == ' ') --prefix_end;
            if (prefix_end > row_x)
                fragments.push_back({row_x, row_y, prefix_end - row_x, kUiMessageRule, {},
                    visible.substr(row_x, prefix_end - row_x)});
            fragments.push_back({tail_x, row_y, source_end - tail_x, kUiMessageRule, {},
                visible.substr(tail_x, source_end - tail_x)});
            for (auto &row : following) fragments.push_back(std::move(row));
            return DateOccludedMessage{std::move(*rows), std::move(fragments)};
        };
        for (size_t line = 1; line < count; ++line)
            if (auto recovered = recover_line(line)) return recovered;
        return std::nullopt;
    };
    struct NativeMessageSpan {
        int x, y;
        size_t begin, end;
        bool addressed;
        bool date_occluded = false;
    };
    struct NativeMessage {
        NativeParagraphCapture capture;
        std::vector<NativeMessageSpan> spans;
        std::vector<int> rules;
    };
    using AnchorPosition = std::pair<int, int>;
    std::unordered_map<uint32_t, std::vector<AnchorPosition>> anchor_prefix_positions;
    std::array<std::vector<AnchorPosition>, 256> anchor_short_positions;
    bool anchor_positions_ready = false;
    const auto anchor_prefix = [](std::string_view text) {
        uint32_t key = 0;
        for (size_t index = 0; index < 4; ++index)
            key |= static_cast<uint32_t>(static_cast<unsigned char>(text[index])) << (index * 8);
        return key;
    };
    const auto anchor_positions = [&](std::string_view anchor)
            -> const std::vector<AnchorPosition> * {
        if (!anchor_positions_ready) {
            // All capture candidates are gathered before screen_rows is
            // consumed. Index this unchanged grid once, instead of searching
            // every screen row separately for every retained paragraph.
            for (int y = 0; y < gps_->dimy; ++y) {
                const std::string_view row = screen_rows[y];
                for (size_t x = 0; x < row.size(); ++x) {
                    const auto ch = static_cast<unsigned char>(row[x]);
                    // trim_view removes only ASCII spaces, so no anchor can
                    // start here. Keep every other position, even mid-word.
                    if (ch == ' ') continue;
                    const AnchorPosition position{static_cast<int>(x), y};
                    anchor_short_positions[ch].push_back(position);
                    if (row.size() - x >= 4)
                        anchor_prefix_positions[anchor_prefix(row.substr(x, 4))].push_back(position);
                }
            }
            anchor_positions_ready = true;
        }
        if (anchor.size() < 4)
            return &anchor_short_positions[static_cast<unsigned char>(anchor.front())];
        const auto found = anchor_prefix_positions.find(anchor_prefix(anchor));
        return found == anchor_prefix_positions.end() ? nullptr : &found->second;
    };
    std::vector<NativeMessage> native_messages;
    {
        std::lock_guard<std::mutex> lock(g_native_paragraph_mutex);
        // These indices only exclude captures with no possible live identity
        // or complete-wrap opening. Keep all rule and row proofs below,
        // including unaddressed recovery and partially visible reports.
        NativeParagraphCandidates addressed_captures;
        const auto candidates = native_paragraph_candidates(
            screen_rows, native_draws, date_occluded_draws, &addressed_captures);
        for (const auto *capture : candidates) {
            if (capture->wrapped_lines.empty() || capture->paragraph_width <= 0 ||
                capture->paragraph_width > gps_->dimx) continue;
            const bool announcement = capture->display_source
                ? announcements->originals.contains(*capture->display_source)
                : announcements->originals.contains(native_announcement_display_source(capture->source));
            const bool file_error = is_native_save_file_error(capture->source);
            if ((announcement || file_error) != announcements_only) continue;
            // A native row address can prove a catalog paragraph's visible
            // continuation as well as an announcement's. The full captured
            // source still selects its rule; screen suffixes never do so.
            std::vector<NativeMessageSpan> spans;
            // Prefix-only candidates have no current or Date-occluded row
            // identity. Prove their complete visible wrap below without
            // scanning every retained address of an unrelated old document.
            if (addressed_captures.contains(capture) &&
                    capture->row_addresses.size() == capture->wrapped_lines.size()) {
                if (announcement && capture->wrapped_lines.size() >= 2) {
                    const auto [first, last] = draws_by_address.equal_range(capture->row_addresses.front());
                    for (auto at = first; at != last; ++at) {
                        const auto &draw = *at->second;
                        if (date_occluded_message(*capture, draw.x, draw.y))
                            spans.push_back({draw.x, draw.y, 0,
                                capture->wrapped_lines.size(), true, true});
                    }
                }
                // All visible rows must refer to the SAME native paragraph,
                // with a consistent origin and no missing interior line.
                // Native addresses are compared, never dereferenced here.
                std::map<std::pair<int, int>, std::pair<size_t, size_t>> slices;
                for (size_t line = 0; line < capture->row_addresses.size(); ++line) {
                    if (trim_view(capture->wrapped_lines[line]).empty()) continue;
                    const auto [first, last] = draws_by_address.equal_range(capture->row_addresses[line]);
                    for (auto at = first; at != last; ++at) {
                        const auto &draw = *at->second;
                        const int origin_y = draw.y - static_cast<int>(line);
                        if (!native_message_rows(*capture, draw.x, origin_y,
                                line, line + 1, true, announcement)) continue;
                        const auto [slice, inserted] = slices.try_emplace(
                            std::pair{draw.x, origin_y}, std::pair{line, line + 1});
                        if (!inserted) {
                            slice->second.first = std::min(slice->second.first, line);
                            slice->second.second = std::max(slice->second.second, line + 1);
                        }
                    }
                }
                for (const auto &[origin, slice] : slices)
                    if (native_message_rows(*capture, origin.first, origin.second,
                            slice.first, slice.second, true, announcement))
                        spans.push_back({origin.first, origin.second, slice.first, slice.second, true});
            }
            if (spans.empty() && capture->wrapped_lines.size() <= static_cast<size_t>(gps_->dimy)) {
                size_t anchor_line = 0;
                while (anchor_line < capture->wrapped_lines.size() &&
                    trim_view(capture->wrapped_lines[anchor_line]).empty()) ++anchor_line;
                if (anchor_line == capture->wrapped_lines.size()) continue;
                const auto &native_anchor = capture->wrapped_lines[anchor_line];
                const auto anchor = trim_view(native_anchor);
                const int indent = static_cast<int>(anchor.data() - native_anchor.data());
                if (const auto *positions = anchor_positions(anchor))
                    for (const auto &[at, anchor_y] : *positions) {
                        const int y = anchor_y - static_cast<int>(anchor_line);
                        if (y < 0 || y + static_cast<int>(capture->wrapped_lines.size()) > gps_->dimy ||
                                screen_rows[anchor_y].compare(at, anchor.size(), anchor) != 0) continue;
                        const int x = at - indent;
                        // Prefixes select candidates only. Retain the complete
                        // anchor, native wrap and ownership proof, in the same
                        // y/x order as the previous overlapping find loop.
                        if (native_message_rows(*capture, x, y, 0,
                                capture->wrapped_lines.size(), false, announcement))
                            spans.push_back({x, y, 0, capture->wrapped_lines.size(), false});
                    }
            }
            if (spans.empty()) continue;
            // A short indexed prefix can select many retained paragraphs
            // that are absent from this frame. Resolve catalog candidates
            // only after the same live-row/address proof establishes ink.
            std::vector<int> rule_indices;
            bool template_candidates = false;
            if (announcement) rule_indices.push_back(-1);
            else if (file_error) rule_indices.push_back(-2);
            else {
                int node = 0;
                for (unsigned char ch : capture->source) {
                    if (native_prose_space(ch)) continue;
                    const auto next = ui_message_trie_[node].next.find(ch);
                    if (next == ui_message_trie_[node].next.end()) { node = -1; break; }
                    node = next->second;
                }
                if (node >= 0 && ui_message_trie_[node].rule >= 0)
                    rule_indices.push_back(ui_message_trie_[node].rule);
                else {
                    template_candidates = true;
                    const auto compact = compact_ui_message_literal(capture->source);
                    for (int index : ui_message_anchors_.candidates(compact)) {
                        const auto &probe = message_templates[index];
                        if (!compact.starts_with(probe.prefix) || !compact.ends_with(probe.suffix) ||
                            compact.find(probe.anchor) == std::string::npos) continue;
                        rule_indices.push_back(probe.index);
                    }
                }
            }
            if (rule_indices.empty()) continue;
            if (template_candidates) {
                std::erase_if(rule_indices, [&](int index) {
                    const Rule &rule = rules_[static_cast<size_t>(index)];
                    std::vector<std::string> captures;
                    std::vector<std::pair<size_t, size_t>> ranges;
                    return !match_catalog_template(rule, capture->source, 0, captures, ranges);
                });
            }
            if (!rule_indices.empty()) native_messages.push_back({
                *capture, std::move(spans), std::move(rule_indices)});
        }
    }
    std::stable_sort(native_messages.begin(), native_messages.end(),
        [](const NativeMessage &left, const NativeMessage &right) {
            const bool left_addressed = left.spans.front().addressed;
            const bool right_addressed = right.spans.front().addressed;
            if (left_addressed != right_addressed) return left_addressed;
            // The newest capture owns a reused native row address. For
            // text-only recovery, prefer the complete longer paragraph
            // over a shorter retained message with the same sentence.
            if (!left_addressed && left.capture.source.size() != right.capture.source.size())
                return left.capture.source.size() > right.capture.source.size();
            return left.capture.sequence > right.capture.sequence;
        });
    for (const auto &message : native_messages) {
        const auto &capture = message.capture;
        const bool announcement = message.rules.front() == -1;
        const bool file_error = message.rules.front() == -2;
        for (const auto &span : message.spans) {
            if (span.date_occluded) {
                auto recovered = date_occluded_message(capture, span.x, span.y);
                if (!recovered) continue;
                const auto source = native_announcement_display_source(capture.source);
                const auto &first = recovered->rows.front();
                std::vector<int> colors(source.size(), message_foreground(first.x, first.y));
                std::vector<int> target_colors;
                const auto target = translate_complete_announcement(source, colors, target_colors);
                // The date row is not layout space or a scroll viewport.
                // Fit the ENTIRE translation above it. If that fails, leave
                // every source glyph untouched for the existing fallbacks.
                if (!target || !append_bounded_paragraph(std::move(recovered->rows),
                        *target, screen_rows, result, only_y,
                        span.x + capture.paragraph_width, span.x + capture.paragraph_width,
                        target_colors, false, span.x)) continue;
                for (Match &fragment : recovered->fragments) {
                    std::fill_n(screen_rows[fragment.y].begin() + fragment.x, fragment.length, ' ');
                    fragment.layout_x = fragment.x;
                    fragment.layout_y = fragment.y;
                    fragment.layout_length = fragment.length;
                    fragment.layout_left = true;
                    if (only_y < 0 || fragment.y == only_y) result.push_back(std::move(fragment));
                }
                continue;
            }
            // An earlier complete record may already own these glyphs.
            auto paragraph = native_message_rows(capture, span.x, span.y,
                span.begin, span.end, span.addressed, announcement);
            if (!paragraph) continue;
            if (file_error) {
                // This notification's confirmation is a real native button,
                // not a generated name. Use its drawn caption and skin even
                // when a foreground sidebar obscures the modal's right edge.
                const int body_bottom = span.y + static_cast<int>(capture.wrapped_lines.size());
                const int right = span.x + capture.paragraph_width;
                int button_y = gps_->dimy;
                for (const auto &draw : native_draws) {
                    const auto text = trim_view(draw.source);
                    if ((text != "OK" && text != "Ok") || draw.y < body_bottom ||
                            draw.y > button_y || draw.y >= gps_->dimy) continue;
                    const int x = draw.x + static_cast<int>(text.data() - draw.source.data());
                    if (x < span.x || x + static_cast<int>(text.size()) > right ||
                            screen_rows[draw.y].compare(x, text.size(), text) != 0 ||
                            !visible_layer(x, draw.y)) continue;
                    const auto button = native_button_text_rect(*gps_, x,
                        x + static_cast<int>(text.size()), draw.y);
                    if (!button || button->x < span.x || button->x + button->w > right)
                        continue;
                    button_y = draw.y;
                }
                if (button_y < gps_->dimy) {
                    for (const auto &draw : native_draws) {
                        const auto text = trim_view(draw.source);
                        if (draw.y != button_y || (text != "OK" && text != "Ok")) continue;
                        const int x = draw.x + static_cast<int>(text.data() - draw.source.data());
                        if (x < span.x || x + static_cast<int>(text.size()) > right ||
                                screen_rows[draw.y].compare(x, text.size(), text) != 0 ||
                                !visible_layer(x, draw.y)) continue;
                        const auto button = native_button_text_rect(*gps_, x,
                            x + static_cast<int>(text.size()), draw.y);
                        if (!button || button->x < span.x || button->x + button->w > right)
                            continue;
                        Match caption{x, draw.y, static_cast<int>(text.size()),
                            kUiMessageRule, "确定", std::string(text)};
                        caption.layout_x = button->x;
                        caption.layout_length = button->w;
                        caption.layout_foreground_rgb = message_foreground(x, draw.y);
                        if (only_y < 0 || only_y == draw.y) result.push_back(std::move(caption));
                        std::fill_n(screen_rows[draw.y].begin() + x, text.size(), ' ');
                    }
                }
            }
            std::string message_source;
            std::vector<int> source_colors;
            if (file_error) {
                // Native wrapping can split a long filesystem component.
                // The original constructor owns every path byte and space;
                // never reconstruct this field from its physical rows.
                message_source = capture.source;
                source_colors.assign(message_source.size(),
                    message_foreground(paragraph->front().x, paragraph->front().y));
            } else if (announcement) {
                // Native widgets can draw markup such as [B] literally, and
                // can split a long word across rows. Those raw rows prove
                // ownership only; the complete normalized record is always
                // the semantic source, whether fully visible or scrolled.
                const auto first = std::find_if(paragraph->begin(), paragraph->end(),
                    [](const Match &row) { return !row.source.empty(); });
                if (first == paragraph->end()) continue;
                message_source = capture.display_source ? *capture.display_source
                    : native_announcement_display_source(capture.source);
                source_colors.assign(message_source.size(), message_foreground(first->x, first->y));
            } else if (span.addressed) {
                // Native trade replies wrap into separately allocated strings
                // and may expose only the middle of the row vector. Keep the
                // pristine constructor source, including long words which the
                // game's wrapper breaks by inserting a temporary space.
                const auto first = std::find_if(paragraph->begin(), paragraph->end(),
                    [](const Match &row) { return !row.source.empty(); });
                if (first == paragraph->end()) continue;
                message_source = capture.source;
                int inherited = message_foreground(first->x, first->y);
                source_colors.assign(message_source.size(), inherited);
                size_t source_at = 0;
                bool same_source = true;
                for (size_t line = 0; line < capture.wrapped_lines.size() && same_source; ++line) {
                    const auto &native = capture.wrapped_lines[line];
                    for (size_t column = 0; column < native.size(); ++column) {
                        if (native_prose_space(static_cast<unsigned char>(native[column]))) continue;
                        while (source_at < message_source.size() && native_prose_space(
                                static_cast<unsigned char>(message_source[source_at])))
                            source_colors[source_at++] = inherited;
                        if (source_at == message_source.size() ||
                                message_source[source_at] != native[column]) {
                            same_source = false;
                            break;
                        }
                        if (line >= span.begin && line < span.end)
                            inherited = message_foreground(span.x + static_cast<int>(column),
                                span.y + static_cast<int>(line));
                        source_colors[source_at++] = inherited;
                    }
                }
                while (source_at < message_source.size() && native_prose_space(
                        static_cast<unsigned char>(message_source[source_at])))
                    source_colors[source_at++] = inherited;
                if (!same_source || source_at != message_source.size()) continue;
            } else {
                for (const Match &row : *paragraph) {
                    if (row.source.empty()) continue;
                    if (!message_source.empty()) {
                        message_source.push_back(' ');
                        source_colors.push_back(source_colors.back());
                    }
                    message_source += row.source;
                    const auto colors = message_foregrounds(row.x, row.y, row.length);
                    source_colors.insert(source_colors.end(), colors.begin(), colors.end());
                }
            }
            if (message_source.empty()) continue;
            std::optional<NativeParagraphViewport> viewport;
            if (span.addressed && (span.begin != 0 || span.end != capture.wrapped_lines.size())) {
                // Select the visible window only after translating the whole
                // address-proven paragraph. Adjacent records keep their own
                // source, row addresses and scrolling range.
                viewport = NativeParagraphViewport{static_cast<int>(span.begin),
                    static_cast<int>(capture.wrapped_lines.size())};
            }
            bool submitted = false;
            for (int pass = 0; pass < 2 && !submitted; ++pass) {
            for (int rule_index : message.rules) {
                std::vector<int> target_colors;
                TranslationResult translated;
                std::optional<std::string> target;
                if (file_error) target = translate_native_save_file_error(message_source);
                else if (announcement) target = translate_complete_announcement(message_source, source_colors, target_colors);
                else if (pass == 0)
                    target = translate_help_paragraph(message_source, source_colors, target_colors, true, rule_index);
                else {
                    translated = translate_help_paragraph_result(message_source, source_colors, target_colors, true, rule_index);
                    if (translated.usable() && translated.changed()) target = translated.target;
                }
                if (!target && !announcement) continue;
                if (translated.usable()) {
                    auto metadata = std::make_shared<TranslationResult>(std::move(translated));
                    for (auto &row : *paragraph) row.translation_result = metadata;
                }
                append_message(std::move(*paragraph), span.x + capture.paragraph_width,
                    target ? std::string_view(*target) : std::string_view{}, target_colors,
                    viewport, message_source, announcement || file_error || span.addressed ? span.x : -1, false,
                    announcement || file_error || span.addressed ? static_cast<int>(capture.wrapped_lines.size()) : 0);
                submitted = true;
                break;
            }
            }
            if (!submitted && span.addressed)
                // A known constructor with an unresolved typed name remains
                // one intact native message, rather than word translations
                // around an untranslated continuation.
                append_message(std::move(*paragraph), span.x + capture.paragraph_width,
                    {}, {}, viewport, message_source, span.x, false,
                    static_cast<int>(capture.wrapped_lines.size()));
        }
    }
    if (!announcements_only) return;
    // A live paragraph's identity wins over screen-only source matching.
    // Otherwise an older, shorter report that equals a sentence inside a
    // scrolled record could consume that sentence before its real owner.
    // Full-source recovery remains available after reload when the native
    // box was built before capture began, but never takes an owned span.
    // Read the visible grid once through the persistent first-word index.
    // Looking for every historical opening word in every screen row made a
    // static report page slower as the world's invisible history grew.
    std::unordered_map<size_t, std::vector<std::pair<int, int>>> announcement_anchors;
    for (int y = 0; y < gps_->dimy; ++y) {
        const auto &row = screen_rows[y];
        for (size_t left = 0; left < row.size(); ++left) {
            const auto first = announcements->anchors[0].next.find(
                static_cast<unsigned char>(row[left]));
            if (first == announcements->anchors[0].next.end()) continue;
            size_t node = first->second, at = left;
            while (true) {
                if (!announcements->anchors[node].records.empty())
                    announcement_anchors[node].emplace_back(static_cast<int>(left), y);
                if (++at == row.size()) break;
                const auto next = announcements->anchors[node].next.find(
                    static_cast<unsigned char>(row[at]));
                if (next == announcements->anchors[node].next.end()) break;
                node = next->second;
            }
        }
    }
    std::vector<std::pair<size_t, size_t>> announcement_candidates;
    for (const auto &[node, positions] : announcement_anchors)
        for (size_t index : announcements->anchors[node].records)
            announcement_candidates.emplace_back(index, node);
    // Stable storage lets the history index grow without reordering every
    // record. Preserve longest-source and original history/recent precedence
    // explicitly for the candidates whose first words are actually visible.
    std::sort(announcement_candidates.begin(), announcement_candidates.end(),
        [&](const auto &left, const auto &right) {
            const auto &a = announcements->records[left.first];
            const auto &b = announcements->records[right.first];
            if (a.original_length != b.original_length) return a.original_length > b.original_length;
            if (a.order != b.order) return a.order < b.order;
            return left < right;
        });
    for (const auto &[index, node] : announcement_candidates) {
        const auto &source = announcements->records[index].source;
        const auto first_space = source.find(' ');
        const auto anchor = std::string_view(source).substr(0, first_space);
        for (const auto &[left, y] : announcement_anchors.at(node)) {
            // Earlier complete records can have consumed a cached
            // candidate. Recheck its current bytes and left boundary.
            if (screen_rows[y].compare(left, anchor.size(), anchor) != 0) continue;
            if (left > 0 && screen_rows[y][left - 1] != ' ' &&
                !is_cp437_box_separator(screen_rows[y], left - 1)) continue;
            if (!announcement_first_row_matches(source, left, y)) continue;
            const auto panel = native_panel_interior(borders, *gps_, left, left + 1, y);
            // A classic report scrollbar can interrupt the surrounding
            // frame. The complete native record still proves a single row's
            // identity; a closed panel is needed only to recover wrapping
            // and additional layout space, not to admit that intact record.
            const int right = panel ? panel->x + panel->w : gps_->dimx;
            const int bottom = panel ? panel->y + panel->h : y + 1;
            // A report owns its complete source, irrespective of the
            // native wrap width or per-word color. Match that source
            // against physical rows; never translate a short known
            // prefix and leave its continuation to the word matcher.
            std::vector<Match> rows;
            std::vector<int> colors;
            size_t cursor = 0;
            int row_y = y, row_left = left, x = left, ink_end = left;
            bool intact = true;
            const auto next_row = [&]() {
                if (!panel || ink_end <= row_left || row_y + 1 >= bottom) return false;
                const auto &next = screen_rows[row_y + 1];
                int next_left = panel->x;
                while (next_left < right && next[next_left] == ' ') ++next_left;
                if (next_left == right) return false;
                if (next_left != row_left) {
                    // Native centered wraps move their ink origin on
                    // every line. Require symmetric padding on both
                    // rows; the full submitted source must still match.
                    int next_end = right;
                    while (next_end > next_left && next[next_end - 1] == ' ') --next_end;
                    if (std::abs((row_left - panel->x) - (right - ink_end)) > 2 ||
                        std::abs((next_left - panel->x) - (right - next_end)) > 2)
                        return false;
                }
                rows.push_back({row_left, row_y, ink_end - row_left, kUiMessageRule,
                    {}, screen_rows[row_y].substr(row_left, ink_end - row_left)});
                ++row_y;
                x = ink_end = row_left = next_left;
                return true;
            };
            while (cursor < source.size()) {
                if (source[cursor] == ' ') {
                    const int space_x = x;
                    while (x < right && screen_rows[row_y][x] == ' ') ++x;
                    if (x == space_x && x < right) { intact = false; break; }
                    colors.push_back(colors.empty() ? 0xffffff : colors.back());
                    ++cursor;
                    if (x >= right && !next_row()) { intact = false; break; }
                } else {
                    if (x >= right && !next_row()) { intact = false; break; }
                    if (screen_rows[row_y][x] != source[cursor] ||
                        !visible_layer(x, row_y) ||
                        is_cp437_box_separator(screen_rows[row_y], x)) {
                        intact = false;
                        break;
                    }
                    colors.push_back(message_foreground(x, row_y));
                    ++cursor;
                    ink_end = ++x;
                }
            }
            if (!intact || cursor != source.size() ||
                (x < right && (screen_rows[row_y][x] != ' ' ||
                 (x + 1 < right && screen_rows[row_y][x + 1] != ' ')))) continue;
            rows.push_back({row_left, row_y, ink_end - row_left, kUiMessageRule,
                {}, screen_rows[row_y].substr(row_left, ink_end - row_left)});
            std::vector<int> target_colors;
            const auto target = translate_complete_announcement(source, colors, target_colors);
            // Without a frame, keep the translation inside the exact source
            // span; the neighbouring date and action controls own their space.
            append_message(std::move(rows), panel ? right : ink_end,
                target ? std::string_view(*target) : std::string_view{}, target_colors,
                std::nullopt, source);
        }
    }

    // The fortress report list owns complete unit/status records before
    // individual identity fields can consume the beginning of a record.
    // Complete native announcement paragraphs keep their prior ownership.
    // Its native word wrapper can spread one record across several rows, but
    // all records share the instruction's left margin. A failed unit
    // translation must never become an independently centered generated
    // name (including a phoneticized "is sparring.").
    {
        const auto summary_end = [](std::string_view source) {
            const std::string normalized = normalize_utterance(source);
            return normalized.ends_with(" is sparring.") || normalized.ends_with(" is fighting!") ||
                normalized.ends_with(" is hunting.");
        };
        for (int header_y = 0; header_y < gps_->dimy; ++header_y) {
            std::string header = screen_rows[header_y];
            if (screen_override) {
                for (int x = 0; x < gps_->dimx; ++x) {
                    const auto ch = visible_char_at(x, header_y);
                    header[x] = ch ? static_cast<char>(ch) : ' ';
                }
            }
            size_t at = std::string::npos;
            std::string_view instruction;
            for (const auto candidate : native_announcement_instructions) {
                at = header.find(candidate);
                if (at != std::string::npos) { instruction = candidate; break; }
            }
            if (instruction.empty()) continue;
            const int left = static_cast<int>(at);
            const auto panel = native_panel_interior(borders, *gps_, left,
                left + static_cast<int>(instruction.size()), header_y);
            if (!panel) continue;
            const int right = panel->x + panel->w;
            const int bottom = panel->y + panel->h;
            // Require report-summary statuses as well as the interaction
            // instruction, including a status split by the native wrap.
            bool summary_list = false;
            std::string summary_probe;
            for (int y = header_y + 1; y < bottom && !summary_list; ++y) {
                const auto text = trim_view(std::string_view(screen_rows[y]).substr(
                    panel->x, panel->w));
                if (text.empty()) { summary_probe.clear(); continue; }
                if (!summary_probe.empty()) summary_probe.push_back(' ');
                summary_probe += text;
                summary_list = summary_end(summary_probe);
            }
            if (!summary_list) continue;
            std::vector<Match> rows;
            std::string source;
            std::vector<int> source_colors;
            const auto submit = [&](bool complete) {
                if (rows.empty()) return;
                std::vector<int> target_colors;
                auto translated = complete
                    ? translate_help_paragraph_result(source, source_colors, target_colors, true)
                    : TranslationResult{};
                const auto target = translated.usable() && translated.changed()
                    ? std::optional<std::string>(translated.target) : std::nullopt;
                if (translated.usable()) {
                    auto metadata = std::make_shared<TranslationResult>(std::move(translated));
                    for (auto &row : rows) row.translation_result = metadata;
                }
                const int layout_rows = static_cast<int>(rows.size());
                append_message(std::move(rows), right,
                    target ? std::string_view(*target) : std::string_view{},
                    target_colors, std::nullopt, source, left, false, layout_rows);
                rows.clear();
                source.clear();
                source_colors.clear();
            };
            for (int y = header_y + 1; y < bottom; ++y) {
                const std::string_view band(screen_rows[y].data() + panel->x, panel->w);
                const auto text = trim_view(band);
                if (text.empty()) { submit(false); continue; }
                const int x = panel->x + static_cast<int>(text.data() - band.data());
                bool intact = x >= left;
                for (size_t offset = 0; intact && offset < text.size(); ++offset) {
                    const int column = x + static_cast<int>(offset);
                    if (text[offset] != ' ' && (!visible_layer(column, y) ||
                            is_cp437_box_separator(screen_rows[y], column))) intact = false;
                }
                if (!intact) { submit(false); continue; }
                const auto colors = message_foregrounds(x, y, static_cast<int>(text.size()));
                if (!source.empty()) {
                    source.push_back(' ');
                    source_colors.push_back(source_colors.back());
                }
                source += text;
                source_colors.insert(source_colors.end(), colors.begin(), colors.end());
                rows.push_back({x, y, static_cast<int>(text.size()), kUiMessageRule,
                    {}, std::string(text)});
                if (summary_end(source)) submit(true);
            }
            submit(false);
        }
    }
}
