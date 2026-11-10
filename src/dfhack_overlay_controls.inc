// All registered overlay providers share Screen::set_tile. Its current-draw
// captures establish DFHack ownership even for unframed, moved, banner and
// color-only controls. The catalogs retain the installed Lua caption/option
// branches and CycleHotkeyLabel's gap/width/below layout, rather than a screen
// coordinate or one plugin. See data/extracted/dfhack-overlay-toggles/.
{
    const auto catalog = g_dfhack_output_snapshot.load(std::memory_order_acquire);
    if (catalog) {
        // Controls belong to the committed DFHack graphics object used by
        // this independent layer's translation pass.
        const auto source_texts = native_dfhack_overlay_texts(gps_);
        const auto *draw_gps = native_dfhack_present_graphics();
        const auto drawn_span = [&](const SDL_Rect &span) {
            return NativeDfhackForegroundScope::active && draw_gps == gps_ &&
                span.x >= 0 && span.y >= 0 && span.w > 0 && span.h > 0 &&
                span.x + span.w <= gps_->dimx && span.y + span.h <= gps_->dimy;
        };
        std::vector<std::pair<int, int>> sourced_controls;
        const auto named_source = [&](int x, int y, int length) {
            return std::any_of(source_texts.begin(), source_texts.end(), [&](const auto &text) {
                return (text.overlay_name == "spectate.tooltip" ||
                        text.option_name || text.role == NativeDfhackOverlayTextRole::Material ||
                        text.role == NativeDfhackOverlayTextRole::Category ||
                        text.role == NativeDfhackOverlayTextRole::Item ||
                        text.role == NativeDfhackOverlayTextRole::Plant ||
                        text.role == NativeDfhackOverlayTextRole::ArtifactName ||
                        text.role == NativeDfhackOverlayTextRole::WrittenWorkHeading) && text.y == y &&
                    x < text.x + static_cast<int>(text.visible.size()) &&
                    x + length > text.x;
            });
        };
        for (const auto &text : source_texts)
            if (text.overlay_name == "spectate.tooltip" ||
                    text.option_name || text.role == NativeDfhackOverlayTextRole::Key ||
                    text.role == NativeDfhackOverlayTextRole::Material ||
                    text.role == NativeDfhackOverlayTextRole::Category ||
                    text.role == NativeDfhackOverlayTextRole::Item ||
                    text.role == NativeDfhackOverlayTextRole::Plant ||
                    text.role == NativeDfhackOverlayTextRole::ArtifactName ||
                    text.role == NativeDfhackOverlayTextRole::WrittenWorkHeading || text.quick_filter_label)
                dfhack_auxiliary_regions.push_back({text.x, text.y, static_cast<int>(text.visible.size()), 1});
        struct OptionText { int length = 0; std::string target; };
        const auto option_text = [&](std::string_view pattern, std::string_view target,
                std::string_view row, bool complete = false,
                int row_x = -1, int row_y = -1) -> std::optional<OptionText> {
            OptionText result;
            result.target = target;
            size_t cursor = 0, source_at = 0, target_at = 0, number = 0;
            while (source_at < pattern.size()) {
                const size_t marker = pattern.find_first_of("{*", source_at);
                const size_t literal_end = marker == std::string_view::npos ? pattern.size() : marker;
                const auto literal = pattern.substr(source_at, literal_end - source_at);
                if (!row.substr(cursor).starts_with(literal)) return std::nullopt;
                cursor += literal.size();
                source_at = literal_end;
                if (source_at == pattern.size()) break;
                const size_t token_end = pattern[source_at] == '*' ? source_at : pattern.find('}', source_at);
                if (token_end == std::string_view::npos) return std::nullopt;
                const auto token = pattern.substr(source_at, token_end - source_at + 1);
                size_t begin = cursor;
                if (token == "{d}") {
                    // Label.render_text advances over a right-justified
                    // numeric token's padding without painting those cells.
                    while (cursor < row.size() && row[cursor] == ' ') ++cursor;
                    begin = cursor;
                    if (cursor < row.size() && row[cursor] == '-') ++cursor;
                    const size_t digits = cursor;
                    while (cursor < row.size() && row[cursor] >= '0' && row[cursor] <= '9') ++cursor;
                    if (cursor == digits) return std::nullopt;
                } else if (token == "*" || token == "{material}" || token == "{job}" ||
                        token == "{book}" || token == "{suspension}") {
                    const size_t next_marker = pattern.find_first_of("{*", token_end + 1);
                    const auto suffix = pattern.substr(token_end + 1,
                        next_marker == std::string_view::npos ? std::string_view::npos :
                        next_marker - token_end - 1);
                    if (!suffix.empty()) {
                        const size_t end = row.find(suffix, cursor);
                        if (end == std::string_view::npos) return std::nullopt;
                        cursor = end;
                    } else if (complete) {
                        cursor = row.size();
                    } else {
                        while (cursor < row.size()) {
                            const unsigned char ch = row[cursor];
                            if (ch < ' ') break;
                            if (ch >= 0xb3 && ch <= 0xda && row_x >= 0 && row_y >= 0) {
                                bool source_top = false;
                                const auto *cell = cell_at(row_x + static_cast<int>(cursor), row_y, &source_top);
                                // Restored frame artwork has no native text
                                // byte. The same CP437 byte in a name does.
                                if (cell && cell[0] == 0) break;
                            }
                            ++cursor;
                        }
                        while (cursor > begin && row[cursor - 1] == ' ') --cursor;
                    }
                    if (cursor == begin) return std::nullopt;
                } else return std::nullopt;
                const auto value = row.substr(begin, cursor - begin);
                std::string replacement = native_text_to_utf8(value);
                if (token == "{material}" || token == "{job}") {
                    const auto kind = token == "{material}" ? "material" : "job";
                    if (const auto translated = translate_dfhack_caption(kind, value))
                        replacement = *translated;
                } else if (token == "{book}") {
                    // An explicitly declared title shares the written-work
                    // grammar used by the book's contents and item sheet.
                    if (const auto translated = translate_legends_book(value))
                        replacement = *translated;
                } else if (token == "{suspension}") {
                    if (const auto translated = exact_literal_translation(
                            "DFHack GUI Overlay suspension reason: " + std::string(value)))
                        replacement = *translated;
                }
                const std::string indexed = token == "{d}" ? "{d" + std::to_string(++number) + "}" : "";
                const bool numbered = !indexed.empty() && result.target.find(indexed) != std::string::npos;
                const auto target_token = numbered ? std::string_view(indexed) : token;
                const size_t slot = result.target.find(target_token, numbered ? 0 : target_at);
                if (slot == std::string::npos) return std::nullopt;
                result.target.replace(slot, target_token.size(), replacement);
                if (!numbered) target_at = slot + replacement.size();
                source_at = token_end + 1;
            }
            if ((complete && cursor != row.size()) ||
                    (cursor < row.size() && !pattern.empty() &&
                    ascii_word_byte(static_cast<unsigned char>(row[cursor])) &&
                    ascii_word_byte(static_cast<unsigned char>(pattern.back())))) return std::nullopt;
            result.length = static_cast<int>(cursor);
            return result;
        };
        const auto key_left = [&](int y, int caption_x, bool overwritten_separator) -> std::optional<int> {
            if (caption_x < 3 || dfhack_context_rows[y][caption_x - 2] != ':' ||
                    (!overwritten_separator && dfhack_context_rows[y][caption_x - 1] != ' '))
                return std::nullopt;
            // render_text gives the whole current key display a green pen,
            // including a backward/forward pair. Recover that exact run so
            // label_below's indent starts at the widget, not the second key.
            int green_left = caption_x - 2;
            while (green_left > 0) {
                bool key_top = false;
                const auto *cell = cell_at(green_left - 1, y, &key_top);
                if (!cell || cell[0] != static_cast<unsigned char>(dfhack_context_rows[y][green_left - 1]) ||
                        (!std::equal(cell + 1, cell + 4, gps_->uccolor[10]) &&
                         !std::equal(cell + 1, cell + 4, gps_->uccolor[2]))) break;
                --green_left;
            }
            if (green_left < caption_x - 2) return green_left;
            for (int begin = std::max(0, caption_x - 64); begin < caption_x - 2; ++begin) {
                const auto source = std::string_view(dfhack_context_rows[y]).substr(
                    begin, caption_x - 2 - begin);
                if (source.empty() || source.front() == ' ') continue;
                std::string key(source);
                std::replace(key.begin(), key.end(), '-', '+');
                if (is_keybinding_code(key)) return begin;
                std::vector<std::pair<size_t, size_t>> keys;
                if (is_keybinding_sequence(key, &keys) && keys.size() <= 2) return begin;
            }
            return std::nullopt;
        };
        const auto existing_field = [&](int x, int y, int length) {
            const auto overlaps = [&](const Match &match) {
                return match.y == y && x < match.x + match.length && x + length > match.x;
            };
            return std::any_of(dfhack_auxiliary_matches.begin(), dfhack_auxiliary_matches.end(),
                overlaps) || std::any_of(dfhack_stocks_hint_matches.begin(),
                dfhack_stocks_hint_matches.end(),
                [&](const Match &match) {
                    return match.length > 0 && !match.target.empty() && overlaps(match);
                });
        };
        const auto emit = [&](int x, int y, int length, const std::string &target, int right,
                bool preserved_name = false, const std::vector<int> &colors = std::vector<int>{}) {
            if (length <= 0 || target.empty() || !contains_cjk_utf8(target) ||
                    (only_y >= 0 && only_y != y) || existing_field(x, y, length) ||
                    (!preserved_name && named_source(x, y, length))) return;
            const auto source = dfhack_context_rows[y].substr(x, length);
            if (read_row(y).compare(x, length, source) != 0) return;
            Match match{x, y, length, kDfhackHotkeysHintRule, target, source};
            match.layout_x = x;
            match.layout_length = right - x;
            match.layout_left = true;
            match.layout_clip_right = right;
            match.layout_prepared = true;
            match.layout_glyph_foreground_rgb = colors;
            dfhack_auxiliary_matches.push_back(std::move(match));
        };
        const int first_y = only_y < 0 ? 0 : std::max(0, only_y - 1);
        const int last_y = only_y < 0 ? gps_->dimy : std::min(gps_->dimy, only_y + 1);
        for (const auto &text : source_texts) {
            if (text.y < first_y || text.y >= last_y || text.option_name) continue;
            if (text.overlay_name == "spectate.tooltip") {
                // Both the direct unit banner and MouseTooltip's Label retain
                // their actual GetUnitInfoText fields. Resolve complete jobs
                // with the activity grammar; never interpret a name or a
                // user-configured stress face as an ordinary control label.
                std::optional<std::string> target;
                if (text.role == NativeDfhackOverlayTextRole::SpectateJob) {
                    target = exact_literal_translation("DFHack GUI Spectate job: " + text.full);
                    if (!target) target = translate_fortress_activity(text.full, true);
                    if (!target) target = translate_dfhack_caption("job", text.full);
                } else if (text.role == NativeDfhackOverlayTextRole::SpectateActivity) {
                    target = exact_literal_translation("DFHack GUI Spectate activity: " + text.full);
                } else if (text.role == NativeDfhackOverlayTextRole::SpectateName) {
                    target = translate_dfhack_readable_unit_name(text.full);
                }
                if (!target && contains_cjk_utf8(text.full)) target = text.full;
                const int length = static_cast<int>(text.visible.size());
                if (target) emit(text.x, text.y, length, *target, text.x + length, true);
            } else if (text.role == NativeDfhackOverlayTextRole::WrittenWorkHeading) {
                if (!catalog->extension_prose.contains("Real Book||body")) continue;
                constexpr std::string_view separator = "  --  ";
                const std::string_view heading = text.full;
                std::optional<std::string> target;
                std::vector<int> colors;
                const auto append_color = [&](std::string_view translated,
                        size_t source_at, size_t source_end) {
                    std::unordered_map<int, size_t> counts;
                    int color = -1;
                    size_t most = 0;
                    for (size_t at = source_at; at < source_end; ++at) {
                        const int x = text.full_x + static_cast<int>(at);
                        if (x < text.x || x >= text.x + static_cast<int>(text.visible.size()) ||
                                std::isspace(static_cast<unsigned char>(text.full[at]))) continue;
                        const size_t visible_at = static_cast<size_t>(x - text.x);
                        if (visible_at >= text.visible_foregrounds.size()) continue;
                        const int rgb = text.visible_foregrounds[visible_at];
                        if (++counts[rgb] > most) { most = counts[rgb]; color = rgb; }
                    }
                    // A clipped author must not discard a visible title's color.
                    for (unsigned char ch : translated)
                        if ((ch & 0xc0) != 0x80) colors.push_back(color);
                };
                // codex-legends combines the work's title and DFHack's
                // readable author name. Require both complete fields before
                // accepting a separator also allowed inside a book title.
                for (size_t at = heading.rfind(separator); at != std::string_view::npos;
                        at = at ? heading.rfind(separator, at - 1) : std::string_view::npos) {
                    const auto title = translate_legends_book(heading.substr(0, at));
                    const auto author = translate_dfhack_readable_unit_name(
                        heading.substr(at + separator.size()));
                    if (title && author) {
                        target = *title + "  ——  " + *author;
                        append_color(*title, 0, at);
                        append_color("  ——  ", at, at + separator.size());
                        append_color(*author, at + separator.size(), heading.size());
                        break;
                    }
                }
                if (!target && heading.find(separator) == std::string_view::npos) {
                    target = translate_legends_book(heading);
                    if (target) append_color(*target, 0, heading.size());
                }
                if (!colors.empty()) {
                    int fallback = text.visible_foregrounds.empty()
                        ? 0xffffff : text.visible_foregrounds.front();
                    for (int &color : colors) {
                        if (color >= 0) fallback = color;
                        else color = fallback;
                    }
                }
                if (target) emit(text.x, text.y, static_cast<int>(text.visible.size()),
                    *target, text.x + static_cast<int>(text.visible.size()), true, colors);
            } else if (text.role == NativeDfhackOverlayTextRole::ArtifactName) {
                if (!catalog->extension_prose.contains("Real Book||body")) continue;
                auto target = exact_literal_translation(
                    "DFHack GUI Real Book artifact: " + text.full);
                if (!target) target = translate_legends_artifact_identity(text.full);
                if (target) emit(text.x, text.y, static_cast<int>(text.visible.size()),
                    *target, text.x + static_cast<int>(text.visible.size()), true);
            } else if (text.role == NativeDfhackOverlayTextRole::Item) {
                // The two mechanism HotkeyLabels and ItemSelection's final
                // list token retain the complete native item designation.
                // Resolve its material, singular/plural noun and quality
                // marks together instead of matching their visible words.
                auto target = exact_literal_translation(
                    "DFHack GUI Buildingplan mechanism: " + text.full);
                if (!target) target = translate_dfhack_caption("item", text.full);
                if (!target) continue;
                const int end = text.x + static_cast<int>(text.visible.size());
                int right = end;
                while (right < gps_->dimx && dfhack_context_rows[text.y][right] == ' ') ++right;
                emit(text.x, text.y, static_cast<int>(text.visible.size()), *target, right, true);
            } else if (text.quick_filter_label && text.full == "empty") {
                if (const auto target = exact_literal_translation("DFHack GUI Buildingplan favorite: empty"))
                    emit(text.x, text.y, static_cast<int>(text.visible.size()), *target,
                        text.x + static_cast<int>(text.visible.size()));
            } else if (text.role == NativeDfhackOverlayTextRole::Category) {
                if (const auto target = exact_literal_translation(
                        "DFHack GUI Buildingplan category: " + text.full))
                    emit(text.x, text.y, static_cast<int>(text.visible.size()), *target,
                        text.x + static_cast<int>(text.visible.size()), true);
            } else if (text.role == NativeDfhackOverlayTextRole::Material) {
                const auto target = translate_material_name(text.material_source);
                if (!target) continue;
                const int x = std::max(text.x, text.full_x + text.material_offset);
                const int end = text.x + static_cast<int>(text.visible.size());
                if (x >= end) continue;
                int right = end;
                while (right < gps_->dimx && dfhack_context_rows[text.y][right] == ' ') ++right;
                emit(x, text.y, end - x, *target, right, true);
            }
        }
        // Complete Label tokens are captured at the actual Lua/native paint
        // boundary. Resolve them before reading visible fragments: viewport
        // clipping cannot hide a state suffix, and a selected numeric squad
        // ID cannot turn an authored name such as Any into a sentinel.
        for (const auto &control : catalog->overlay_controls) {
            for (const auto &text : source_texts) {
                if (text.y < first_y || text.y >= last_y || text.overlay_name == "spectate.tooltip" ||
                        text.role == NativeDfhackOverlayTextRole::Key ||
                        text.role == NativeDfhackOverlayTextRole::Material ||
                        text.role == NativeDfhackOverlayTextRole::Category ||
                        text.role == NativeDfhackOverlayTextRole::Item ||
                        text.role == NativeDfhackOverlayTextRole::Plant ||
                        text.role == NativeDfhackOverlayTextRole::ArtifactName ||
                        text.role == NativeDfhackOverlayTextRole::WrittenWorkHeading || text.quick_filter_label ||
                        (text.option_name && (!control.caption.empty() || control.option != "*"))) continue;
                if (!control.caption.empty() && !control.option.empty() && !control.below &&
                        control.gap >= 0 && control.label_width < 0 &&
                        text.role == NativeDfhackOverlayTextRole::Text) {
                    // Some producers concatenate a caption and native
                    // status into one token (e.g. suspendmanager). Its full
                    // original string survives Painter viewport clipping.
                    const std::string prefix = control.caption +
                        std::string(static_cast<size_t>(control.gap), ' ');
                    if (text.full.starts_with(prefix)) {
                        const auto value = option_text(control.option, control.option_target,
                            std::string_view(text.full).substr(prefix.size()), true);
                        bool keyed = !control.keyed;
                        for (const auto &key : source_texts)
                            if (key.widget_id == text.widget_id && key.y == text.y &&
                                    key.role == NativeDfhackOverlayTextRole::Key) keyed = true;
                        if (value && keyed && std::find(sourced_controls.begin(), sourced_controls.end(),
                                std::pair{text.full_x, text.y}) == sourced_controls.end()) {
                            sourced_controls.emplace_back(text.full_x, text.y);
                            const int length = static_cast<int>(text.visible.size());
                            const int right = text.x + length;
                            dfhack_auxiliary_regions.push_back({text.x, text.y, length, 1});
                            const std::string target = control.caption_target +
                                std::string(static_cast<size_t>(control.gap), ' ') + value->target;
                            emit(text.x, text.y, length, target, right);
                            continue;
                        }
                    }
                }
                const NativeDfhackOverlayText *caption_text = nullptr, *value_text = nullptr;
                std::optional<OptionText> value;
                if (control.caption.empty()) {
                    if (text.role == NativeDfhackOverlayTextRole::Option && !text.caption.empty()) continue;
                    if (text.option_name && control.option != "*") continue;
                    value = option_text(control.option, control.option_target, text.full, true);
                    if (!value) continue;
                    value_text = &text;
                } else {
                    const bool caption_padding = !control.below && control.gap >= 0 &&
                        text.full.starts_with(control.caption) &&
                        std::string_view(text.full).substr(control.caption.size()) ==
                            std::string(static_cast<size_t>(control.gap), ' ');
                    if (text.role != NativeDfhackOverlayTextRole::Text ||
                            (text.full != control.caption && !caption_padding)) continue;
                    caption_text = &text;
                    if (!control.option.empty()) {
                        const int option_y = text.y + static_cast<int>(control.below);
                        int widget_left = text.full_x;
                        for (const auto &key : source_texts)
                            if (key.widget_id == text.widget_id && key.y == text.y &&
                                    key.role == NativeDfhackOverlayTextRole::Key)
                                widget_left = std::min(widget_left, key.full_x);
                        const int option_x = control.below ? widget_left + control.gap :
                            text.full_x + (control.label_width < 0 ? static_cast<int>(control.caption.size()) :
                                control.label_width) + control.gap;
                        for (const auto &candidate : source_texts) {
                            if (candidate.widget_id != text.widget_id || candidate.y != option_y ||
                                    candidate.full_x != option_x ||
                                    candidate.role == NativeDfhackOverlayTextRole::Key ||
                                    (candidate.role == NativeDfhackOverlayTextRole::Option &&
                                     candidate.caption != control.caption) ||
                                    (candidate.option_name && control.option != "*")) continue;
                            value = option_text(control.option, control.option_target, candidate.full, true);
                            if (value) { value_text = &candidate; break; }
                        }
                        if (!value_text) continue;
                    }
                }
                const auto &anchor = caption_text ? *caption_text : *value_text;
                const int caption_x = control.caption.empty() ? anchor.full_x - control.gap : anchor.full_x;
                int left = std::max(0, caption_x);
                if (control.keyed) {
                    bool key_found = false;
                    for (const auto &key : source_texts)
                        if (key.widget_id == anchor.widget_id && key.y == anchor.y &&
                                key.role == NativeDfhackOverlayTextRole::Key) {
                            left = std::min(left, key.x);
                            key_found = true;
                        }
                    if (!key_found) continue;
                }
                if (std::find(sourced_controls.begin(), sourced_controls.end(),
                        std::pair{caption_x, anchor.y}) != sourced_controls.end()) continue;
                sourced_controls.emplace_back(caption_x, anchor.y);
                int end = caption_text ? caption_text->x + static_cast<int>(caption_text->visible.size()) : left;
                if (value_text && value_text->y == anchor.y)
                    end = std::max(end, value_text->x + static_cast<int>(value_text->visible.size()));
                if (end > left) dfhack_auxiliary_regions.push_back({left, anchor.y, end - left, 1});
                if (caption_text) {
                    int right = caption_text->x + static_cast<int>(caption_text->visible.size());
                    if (value_text && value_text->y == caption_text->y) right = std::min(right, value_text->x);
                    emit(caption_text->x, caption_text->y, static_cast<int>(caption_text->visible.size()),
                        control.caption_target, right);
                }
                if (value_text) {
                    const int length = static_cast<int>(value_text->visible.size());
                    dfhack_auxiliary_regions.push_back({value_text->x, value_text->y, length, 1});
                    int right = value_text->x + length;
                    if (value_text->visible_offset == 0 && value_text->full == value_text->visible)
                        while (right < gps_->dimx && dfhack_context_rows[value_text->y][right] == ' ') ++right;
                    // UTF-8 authored names still need the ordinary Unicode
                    // renderer. The whole original field is the target;
                    // catalog sentinels can never enter this branch.
                    emit(value_text->x, value_text->y, length, value->target, right,
                        value_text->option_name && control.option == "*");
                }
            }
        }
        for (const auto &control : catalog->overlay_controls) {
            const auto caption = std::string_view(control.caption).substr(0,
                control.label_width < 0 ? std::string_view::npos : static_cast<size_t>(control.label_width));
            const size_t marker = control.option.find_first_of("{*");
            const auto option_prefix = std::string_view(control.option).substr(0, marker);
            const auto anchor = caption.empty() ? option_prefix : caption;
            const bool numeric_anchor = anchor.empty() && control.option.starts_with("{d}");
            if (anchor.empty() && !numeric_anchor) continue;
            for (int y = first_y; y < last_y; ++y) {
                const auto &row = dfhack_context_rows[y];
                for (size_t at = numeric_anchor ? row.find_first_of("-0123456789") : row.find(anchor);
                        at != std::string::npos;
                        at = numeric_anchor ? row.find_first_of("-0123456789", at + 1) : row.find(anchor, at + 1)) {
                    const int caption_x = static_cast<int>(at) -
                        (caption.empty() ? control.gap : 0);
                    if (caption_x < 0) continue;
                    if (std::find(sourced_controls.begin(), sourced_controls.end(),
                            std::pair{caption_x, y}) != sourced_controls.end()) continue;
                    int left = caption_x;
                    if (control.keyed) {
                        const auto key = key_left(y, caption_x, caption.empty() && control.gap < 0);
                        if (!key) continue;
                        left = *key;
                    }
                    const int option_y = y + static_cast<int>(control.below);
                    const int width = control.label_width < 0 ? static_cast<int>(caption.size()) : control.label_width;
                    const int option_x = control.below ? left + control.gap : caption_x + width + control.gap;
                    if (option_y >= gps_->dimy || option_x < 0 || option_x > gps_->dimx ||
                            (option_x == gps_->dimx && !control.option.empty())) continue;
                    const auto option = option_text(control.option, control.option_target,
                        std::string_view(dfhack_context_rows[option_y]).substr(option_x), false, option_x, option_y);
                    if (!option) continue;
                    const int caption_end = caption_x + static_cast<int>(caption.size());
                    const int option_end = option_x + option->length;
                    if (caption_end > gps_->dimx || option_end > gps_->dimx) continue;
                    if (!caption.empty() && control.option.empty()) {
                        // A caption-only action owns its complete field.
                        // "configure" must not consume the prefix of
                        // "configure autofarm", even across a blank cell.
                        // Another keyed action may share the same row.
                        int after = caption_end;
                        while (after < gps_->dimx && row[after] == ' ') ++after;
                        if (after < gps_->dimx && row[after] != ']' &&
                                !is_cp437_box_drawing_byte(static_cast<unsigned char>(row[after]))) {
                            const size_t separator = row.find(": ", static_cast<size_t>(after));
                            if (separator == std::string::npos || separator <= static_cast<size_t>(after))
                                continue;
                            std::string next_key = row.substr(after, separator - after);
                            std::replace(next_key.begin(), next_key.end(), '-', '+');
                            if (!is_keybinding_code(next_key)) continue;
                        }
                    }
                    const int first_end = control.below ? caption_end : std::max(caption_end, option_end);
                    int painted_option_x = option_x;
                    while (painted_option_x < option_end &&
                            dfhack_context_rows[option_y][painted_option_x] == ' ') ++painted_option_x;
                    // option_gap, label_width and numeric rjustify advance
                    // the Painter without writing tiles. Require ownership
                    // of the text runs, not the unpainted gaps between them.
                    if (first_end <= left ||
                            (caption_end > left && !drawn_span(
                                {left, y, caption_end - left, 1})) ||
                            (option_end > painted_option_x && !drawn_span(
                                {painted_option_x, option_y, option_end - painted_option_x, 1}))) continue;
                    // Preserve named/dynamic fields as whole fields, not ordinary
                    // word translations. Native captures also retain each state
                    // pen, including controls whose two values have one label.
                    dfhack_auxiliary_regions.push_back({left, y, first_end - left, 1});
                    if (control.below && option->length > 0)
                        dfhack_auxiliary_regions.push_back({option_x, option_y, option->length, 1});
                    int option_right = option_end;
                    while (option_right < gps_->dimx && dfhack_context_rows[option_y][option_right] == ' ')
                        ++option_right;
                    if (!caption.empty()) emit(caption_x, y, static_cast<int>(caption.size()),
                        control.caption_target, control.below || option->length == 0 ? caption_end :
                        std::max(caption_end, option_x - std::max(0, control.gap)));
                    if (option->length > 0) emit(option_x, option_y, option->length, option->target, option_right);
                }
            }
        }
    }
}
