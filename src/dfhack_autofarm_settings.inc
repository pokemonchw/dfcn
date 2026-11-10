// gui/autofarm.lua owns a resizable crop/growth table and three threshold
// prompts. Its row builder keeps names, stock, thresholds and annotations in
// separate tokens; complete captured names survive the table's width limit.
{
    constexpr std::string_view autofarm_scope = "DFHack GUI Autofarm settings: ";
    const auto autofarm_windows = native_dfhack_window_geometry(dfhack_context_rows);
    const auto autofarm_texts = native_dfhack_overlay_texts(gps_);
    const auto autofarm_target = [&](std::string_view source) {
        return exact_literal_translation(std::string(autofarm_scope) + std::string(source));
    };
    const auto autofarm_color = [&](int x, int y) {
        bool top = false;
        const auto *cell = cell_at(x, y, &top);
        return cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : 0xffffff;
    };
    const auto autofarm_emit = [&](int x, int y, std::string_view source,
            const std::string &target, int right, const std::vector<int> &colors = std::vector<int>{}) {
        if (source.empty() || !contains_cjk_utf8(target) || x < 0 || y < 0 ||
                y >= gps_->dimy || right <= x || right > gps_->dimx ||
                source.size() > static_cast<size_t>(right - x) ||
                read_row(y).compare(x, source.size(), source) != 0) return;
        const int length = static_cast<int>(source.size());
        dfhack_auxiliary_regions.push_back({x, y, length, 1});
        if ((only_y >= 0 && only_y != y) ||
                std::any_of(dfhack_auxiliary_matches.begin(), dfhack_auxiliary_matches.end(),
                    [&](const Match &match) {
                        return !match.target.empty() && match.y == y &&
                            x < match.x + match.length && x + length > match.x;
                    })) return;
        Match match{x, y, length, kDfhackHotkeysHintRule, target, std::string(source)};
        match.layout_x = x;
        match.layout_length = right - x;
        match.layout_clip_right = right;
        match.layout_left = true;
        match.layout_prepared = true;
        match.layout_glyph_foreground_rgb = colors;
        dfhack_auxiliary_matches.push_back(std::move(match));
    };
    const auto autofarm_literal = [&](int x, int y, std::string_view source, int right) {
        if (const auto target = autofarm_target(source))
            autofarm_emit(x, y, source, *target, right);
    };
    const auto autofarm_number = [&](std::string_view source, std::string_view prefix,
            std::string_view suffix, std::string_view pattern) -> std::optional<std::string> {
        if (!source.starts_with(prefix) || !source.ends_with(suffix) ||
                source.size() <= prefix.size() + suffix.size()) return std::nullopt;
        const auto number = source.substr(prefix.size(), source.size() - prefix.size() - suffix.size());
        if (!std::all_of(number.begin(), number.end(), [](unsigned char ch) {
                return ch >= '0' && ch <= '9'; })) return std::nullopt;
        auto target = autofarm_target(pattern);
        if (!target) return std::nullopt;
        const size_t at = target->find("{d1}");
        if (at == std::string::npos) return std::nullopt;
        target->replace(at, 4, number);
        return target;
    };
    const auto autofarm_keyed = [&](int x, int y, int right) -> std::optional<int> {
        if (x < 0 || y < 0 || y >= gps_->dimy || right <= x || right > gps_->dimx)
            return std::nullopt;
        const auto band = std::string_view(dfhack_context_rows[y]).substr(x, right - x);
        const size_t separator = band.find(": ");
        if (separator == std::string_view::npos || separator == 0) return std::nullopt;
        std::string key(band.substr(0, separator));
        std::replace(key.begin(), key.end(), '-', '+');
        return is_keybinding_code(key) ? std::optional(x + static_cast<int>(separator) + 2)
                                      : std::nullopt;
    };
    const auto autofarm_action = [&](int x, int y, int right, std::string_view caption) {
        if (const auto at = autofarm_keyed(x, y, right))
            if (trim_view(std::string_view(dfhack_context_rows[y]).substr(*at, right - *at)) == caption)
                autofarm_literal(*at, y, caption, right);
    };
    const auto autofarm_toggle = [&](int x, int y, int right, std::string_view caption,
            bool enabled_words) -> bool {
        const auto at = autofarm_keyed(x, y, right);
        if (!at || *at + static_cast<int>(caption.size()) + 1 >= right ||
                dfhack_context_rows[y].compare(*at, caption.size(), caption) != 0 ||
                dfhack_context_rows[y][*at + caption.size()] != ' ') return false;
        const int value_x = *at + static_cast<int>(caption.size()) + 1;
        const auto value_band = std::string_view(dfhack_context_rows[y]).substr(value_x, right - value_x);
        const auto value = trim_view(value_band);
        const std::array<std::string_view, 2> options = enabled_words
            ? std::array<std::string_view, 2>{"Enabled", "Disabled"}
            : std::array<std::string_view, 2>{"On", "Off"};
        std::string_view complete;
        for (const auto option : options) {
            const auto visible = option.substr(0, std::min(option.size(), value_band.size()));
            if (value == visible) { complete = option; break; }
        }
        if (complete.empty()) return false;
        autofarm_literal(*at, y, caption, value_x - 1);
        if (const auto target = autofarm_target(complete))
            autofarm_emit(value_x, y, value, *target, right);
        return true;
    };
    const auto autofarm_sort = [&](int x, int y, int right) {
        if (x < 0 || y < 0 || y >= gps_->dimy || right <= x || right > gps_->dimx) return;
        const auto source = trim_view(std::string_view(dfhack_context_rows[y]).substr(x, right - x));
        for (const auto &text : autofarm_texts) {
            if (text.full_x != x || text.y != y || text.x != x ||
                    text.role != NativeDfhackOverlayTextRole::Option || text.full.empty()) continue;
            const unsigned char direction = static_cast<unsigned char>(text.full.back());
            const bool arrow = direction == 30 || direction == 31;
            const auto caption = std::string_view(text.full).substr(0, text.full.size() - static_cast<size_t>(arrow));
            if (caption != "Name" && caption != "Stock" && caption != "Threshold") continue;
            const auto target = autofarm_target(caption);
            if (!target) continue;
            // Threshold's nine-cell header clips its tenth-cell direction
            // glyph. The captured option still supplies the actual state.
            if (arrow && text.visible.size() < text.full.size()) {
                autofarm_emit(x, y, text.visible, *target + (direction == 30 ? "↑" : "↓"), right);
                return;
            }
        }
        const bool arrow = !source.empty() &&
            (static_cast<unsigned char>(source.back()) == 30 ||
             static_cast<unsigned char>(source.back()) == 31);
        const auto caption = source.substr(0, source.size() - static_cast<size_t>(arrow));
        if (caption == "Name" || caption == "Stock" || caption == "Threshold")
            autofarm_literal(x, y, caption, x + static_cast<int>(caption.size()));
        // The original direction glyph remains in its own native cell.
    };
    const auto autofarm_name = [&](std::string_view name, bool growth) -> std::optional<std::string> {
        if (!growth) return translate_plant_name(name);
        TranslationStateScope translation_scope;
        std::vector<size_t> origins;
        return RULESETS.translate_with_origins(native_text_to_utf8(name), "::plants::growth", origins);
    };
    for (const auto &window : autofarm_windows) {
        const auto &frame = window.frame;
        const auto title = std::string_view(dfhack_context_rows[frame.y]).substr(
            window.title_x, window.title_length);
        if (title != "Autofarm" || frame.w < 62 || frame.h < 25) continue;
        // This Window overrides frame_inset with {t=1}: its body has no
        // additional horizontal inset. The footer and table add l=1 each.
        const int edge = frame.x + frame.w - 1, bottom = frame.y + frame.h - 1;
        const int left = frame.x + 2, right = edge - 1, top = frame.y + 2;
        const int header_y = top + 3, footer_y = bottom - 5;
        const int table_bottom = bottom - 7, row_width = right - left;
        const auto &header = dfhack_context_rows[header_y];
        if (header.compare(left, 4, "Name") != 0 ||
                header.compare(right - 20, 5, "Stock") != 0 ||
                header.compare(right - 12, 9, "Threshold") != 0 ||
                dfhack_context_rows[bottom].compare(edge - 7, 6, "DFHack") != 0)
            continue;
        dfhack_auxiliary_regions.push_back(frame);
        autofarm_literal(window.title_x, frame.y, title, window.title_x + window.title_length);
        if (const auto sort_x = autofarm_keyed(left, top, std::min(left + 31, right))) {
            constexpr std::string_view caption = "Sort by:";
            if (dfhack_context_rows[top].compare(*sort_x, caption.size(), caption) == 0 &&
                    *sort_x + static_cast<int>(caption.size()) + 1 < right) {
                autofarm_literal(*sort_x, top, caption, *sort_x + static_cast<int>(caption.size()));
                autofarm_sort(*sort_x + static_cast<int>(caption.size()) + 1, top,
                    std::min(left + 31, right));
            }
        }
        autofarm_toggle(edge - 33, top, edge, "Show below threshold:", false);
        autofarm_sort(left, header_y, left + 5);
        autofarm_sort(right - 20, header_y, right - 14);
        autofarm_sort(right - 12, header_y, right - 3);
        constexpr std::string_view disabled = "Please enable autofarm to change settings";
        autofarm_literal(left, header_y + 3, disabled, right);
        // Numeric columns are not names. Translate their two authored
        // annotation suffixes while leaving stock and threshold digits intact.
        for (int y = header_y + 2; y < table_bottom; ++y) {
            const auto band = std::string_view(dfhack_context_rows[y]).substr(right - 14, 11);
            const auto field = trim_view(band);
            for (const std::string_view marker : {"(def)", "(pool)"}) {
                if (!field.ends_with(marker)) continue;
                const auto number = trim_view(field.substr(0, field.size() - marker.size()));
                if (number.empty() || !std::all_of(number.begin(), number.end(), [](unsigned char ch) {
                        return ch >= '0' && ch <= '9'; })) continue;
                const int x = right - 14 + static_cast<int>(field.data() - band.data()) +
                    static_cast<int>(field.size() - marker.size());
                autofarm_literal(x, y, marker, x + static_cast<int>(marker.size()));
            }
        }
        for (const auto &text : autofarm_texts) {
            if (text.overlay_name != "autofarm.settings" || text.view_id != "list" ||
                    text.role != NativeDfhackOverlayTextRole::Plant ||
                    text.y < header_y + 2 || text.y >= table_bottom || text.full_x != left ||
                    text.x < left || text.x + static_cast<int>(text.visible.size()) > left + row_width - 24)
                continue;
            const std::string_view complete = text.full;
            const size_t indent = text.plant_growth ? 2 : 0;
            if (complete.size() <= indent || (indent && !complete.starts_with("  "))) continue;
            const auto target = autofarm_name(complete.substr(indent), text.plant_growth);
            if (!target) continue;
            autofarm_emit(text.x, text.y, text.visible, std::string(indent, ' ') + *target,
                left + row_width - 24);
        }
        const auto excluded = trim_view(std::string_view(dfhack_context_rows[footer_y]).substr(left, right - left));
        if (const auto target = autofarm_number(excluded, "", " farm(s) excluded from autofarm management",
                "{d} farm(s) excluded from autofarm management"))
            autofarm_emit(left, footer_y, excluded, *target, right);
        constexpr std::string_view instructions =
            "Double click on a row or hit Enter to set the threshold.";
        if (const auto target = autofarm_target(instructions)) {
            std::vector<int> colors;
            const size_t key_at = target->find("Enter");
            for (size_t at = 0; at < target->size(); ++at)
                if ((static_cast<unsigned char>((*target)[at]) & 0xc0) != 0x80)
                    colors.push_back(autofarm_color(left + (key_at != std::string::npos &&
                        at >= key_at && at < key_at + 5 ? 28 : 0), footer_y + 1));
            autofarm_emit(left, footer_y + 1, instructions, *target, right, colors);
        }
        autofarm_toggle(left, footer_y + 3, std::min(left + 27, right), "Autofarm is", true);
        autofarm_action(left + 29, footer_y + 3, right, "Set all");
        constexpr std::string_view reset = "Reset selected to default";
        const auto &reset_row = dfhack_context_rows[footer_y + 2];
        const size_t reset_at = reset_row.find(reset, left);
        if (reset_at != std::string::npos && reset_at + reset.size() == static_cast<size_t>(right)) {
            const size_t separator = reset_row.rfind(": ", reset_at);
            if (separator != std::string::npos && separator + 2 == reset_at) {
                size_t key_at = separator;
                while (key_at > static_cast<size_t>(left) && reset_row[key_at - 1] != ' ') --key_at;
                autofarm_action(static_cast<int>(key_at), footer_y + 2, right, reset);
            }
        }
        if (const auto at = autofarm_keyed(left, footer_y + 4, right)) {
            const auto source = trim_view(std::string_view(dfhack_context_rows[footer_y + 4]).substr(*at, right - *at));
            if (const auto target = autofarm_number(source, "Set default threshold (currently ", ")",
                    "Set default threshold (currently {d})"))
                autofarm_emit(*at, footer_y + 4, source, *target, right);
        }
        const size_t pause = dfhack_context_rows[bottom].find("PAUSE FORCED", frame.x + 1);
        if (pause != std::string::npos && pause + 12 < static_cast<size_t>(edge - 7))
            gui_literal(static_cast<int>(pause), bottom, "PAUSE FORCED",
                static_cast<int>(pause + 12), "Frame status");
    }
    // Legacy InputBox and the invalid-number MessageBox keep entered text
    // separate from the authored prompt. Their titles and complete message
    // grammar establish the role even when a modal covers the parent table.
    for (const auto &window : autofarm_windows) {
        const auto &frame = window.frame;
        const auto title = std::string_view(dfhack_context_rows[frame.y]).substr(
            window.title_x, window.title_length);
        const bool threshold = title == "Set threshold";
        const bool all = title == "Set all thresholds";
        const bool defaults = title == "Set default threshold";
        const bool invalid = title == "Invalid Number";
        if ((!threshold && !all && !defaults && !invalid) || frame.h < 5 || frame.w < 23) continue;
        const int left = frame.x + 2, top = frame.y + 2;
        const int right = frame.x + frame.w - (invalid ? 2 : 1);
        const int bottom = frame.y + frame.h - 1;
        if (right <= left || top >= bottom) continue;
        const auto first_band = std::string_view(dfhack_context_rows[top]).substr(left, right - left);
        const auto first = trim_view(first_band);
        const int first_x = left + static_cast<int>(first.data() - first_band.data());
        std::string source(first);
        int x = first_x;
        std::string visible(first);
        for (const auto &text : autofarm_texts) {
            if (text.role != NativeDfhackOverlayTextRole::Text || text.y != top ||
                    text.x < left || text.x >= right || text.visible.empty()) continue;
            if ((threshold && text.full.starts_with("Enter desired threshold for ")) ||
                    (invalid && text.full.starts_with("This is not a number: "))) {
                source = text.full;
                visible = text.visible;
                x = text.x;
                break;
            }
        }
        std::optional<std::string> target;
        if (threshold) {
            constexpr std::string_view prefix = "Enter desired threshold for ";
            if (!source.starts_with(prefix) || !source.ends_with(':') || source.size() <= prefix.size() + 1)
                continue;
            const auto name = std::string_view(source).substr(prefix.size(), source.size() - prefix.size() - 1);
            auto translated = autofarm_name(name, false);
            if (!translated) translated = autofarm_name(name, true);
            target = autofarm_target("Enter desired threshold for {s}:");
            if (target) {
                const size_t at = target->find("{s1}");
                if (at == std::string::npos) target.reset();
                else target->replace(at, 4, translated ? *translated : native_text_to_utf8(name));
            }
        } else if (all && source == "Enter desired threshold for all crop types") {
            target = autofarm_target(source);
        } else if (defaults && source == "Enter desired default threshold for crops") {
            target = autofarm_target(source);
        } else if (invalid && source == "Negative numbers make no sense!") {
            target = autofarm_target(source);
        } else if (invalid && source.starts_with("This is not a number: ")) {
            target = autofarm_target("This is not a number: {s}");
            if (target) {
                const size_t at = target->find("{s1}");
                if (at == std::string::npos) target.reset();
                else target->replace(at, 4, native_text_to_utf8(std::string_view(source).substr(22)));
            }
        }
        if (!target) continue;
        dfhack_auxiliary_regions.push_back(frame);
        autofarm_literal(window.title_x, frame.y, title, window.title_x + window.title_length);
        autofarm_emit(x, top, visible, *target, right);
        // No EditField bytes, cursor or user-entered invalid text are sent
        // through the plant dictionary. A MessageBox's Ok action is separate.
        if (invalid) autofarm_action(left, bottom - 2, right, "Ok");
    }
}
