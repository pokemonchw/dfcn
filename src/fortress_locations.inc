// Location headers and chooser cards draw their type one row below the name.
static std::string_view fortress_location_label_below(const std::vector<std::string> &rows, int x, int y) {
    if (y + 1 >= static_cast<int>(rows.size())) return {};
    const std::string_view row(rows[y + 1]);
    if (x < 0 || static_cast<size_t>(x) >= row.size()) return {};
    for (std::string_view kind : {"Hospital", "Tavern"}) {
        if (!row.substr(x).starts_with(kind)) continue;
        const size_t end = x + kind.size();
        if (end == row.size() || row[end] == ' ' || is_cp437_box_separator(row, end)) return kind;
    }
    return {};
}

// A location's complete labels must precede UI-message matching: the Dance
// action otherwise consumes the first word of "Dance floor in common area:".
// Keep quantities and coloured status values separate from dictionary labels.
void Overlay::append_fortress_location_matches(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y, bool raw_layer) const {
    if (!gps_ || rows.size() != static_cast<size_t>(gps_->dimy)) return;
    auto context = rows;
    if (raw_layer) {
        for (int y = 0; y < gps_->dimy; ++y)
            for (int x = 0; x < gps_->dimx; ++x) {
                const auto ch = visible_char_at(x, y);
                context[y][x] = ch ? static_cast<char>(ch) : ' ';
            }
    }
    const NativePanelBorders borders(*gps_);
    std::optional<SDL_Rect> panel;
    static constexpr std::string_view fact_labels[] = {
        "Chests in common area:", "Goblets (Desired):",
        "Stored Instruments (Desired):", "Dance floor in common area:",
        "Rented rooms (Total):",
    };
    // These fields come from the native detail renderer, before a generic
    // dictionary can consume the type or one word of a generated office.
    // The rank buffer contains the currency byte and next-tier threshold;
    // the screen's decorative glyphs are not its text grammar.
    const auto drawn_snapshot = captured_native_drawn_text_snapshot();
    const auto top_drawn_snapshot = captured_native_drawn_text_snapshot(true);
    const auto &drawn = *drawn_snapshot;
    const auto &top_drawn = *top_drawn_snapshot;
    const auto detail_draw_end = [&](const NativeDrawnTextRow &draw) {
        if (!draw.location_picker_box) return draw.x;
        int right = std::min(gps_->dimx,
            draw.location_picker_box->x + draw.location_picker_box->w);
        if (draw.draw_clip) right = std::min(right, draw.draw_clip->x + draw.draw_clip->w);
        return std::min(right, draw.x + static_cast<int>(draw.source.size()));
    };
    const auto current_draw = [&](const NativeDrawnTextRow &draw) {
        return native_location_detail_field(draw.location_picker_field) &&
            draw.location_picker_box && !draw.editable_text &&
            draw.draw_grid == (draw.top_layer ? gps_->screen_top : gps_->screen) &&
            draw.draw_dimx == gps_->dimx && draw.draw_dimy == gps_->dimy &&
            draw.x >= 0 && draw.x < gps_->dimx && draw.y >= 0 && draw.y < gps_->dimy &&
            !draw.source.empty() && detail_draw_end(draw) > draw.x &&
            context[draw.y].compare(draw.x, detail_draw_end(draw) - draw.x,
                draw.source, 0, detail_draw_end(draw) - draw.x) == 0;
    };
    const auto detail_identity = [&](const std::string &source) -> std::optional<std::string> {
        if (contains_cjk_utf8(source)) return native_text_to_utf8(source);
        auto target = translate_religion_reference(source);
        if (!target) target = translate_legends_name(source, true);
        if (!target) target = translate_legends_name(source, false);
        if (!target) target = translate_procedural_fragment(source, false, false, {},
            ProceduralFragmentContext::generated_name);
        return target;
    };
    const auto render_template = [&](std::string_view key, const std::string &value)
            -> std::optional<std::string> {
        const auto found = history_semantic_templates_.find(std::string(key));
        if (found == history_semantic_templates_.end()) return std::nullopt;
        bool complete = false;
        auto target = translate_template_captures(rules_[static_cast<size_t>(found->second)],
            {value}, &complete);
        return complete && !target.empty() ? std::optional<std::string>(std::move(target))
            : std::nullopt;
    };
    const auto detail_rank = [&](std::string_view source) -> std::optional<std::string> {
        const auto comma = source.find(", ");
        if (comma == std::string_view::npos) return std::nullopt;
        const auto kind = source.substr(0, comma);
        if (kind != "Shrine" && kind != "Temple" && kind != "Temple Complex" &&
                kind != "Meeting place" && kind != "Guildhall" && kind != "Grand Guildhall")
            return std::nullopt;
        const auto title = exact_literal_translation(kind == "Temple Complex"
            ? "Temple complex" : kind == "Grand Guildhall" ? "Grand guildhall"
            : kind == "Meeting place" ? "Fortress guild detail: Meeting place" : std::string(kind));
        if (!title) return std::nullopt;
        const auto value = source.substr(comma + 2);
        constexpr std::string_view next_at = " (next at ";
        const auto next = value.find(next_at);
        if (next == std::string_view::npos)
            return *title + "，" + native_text_to_utf8(std::string(value));
        if (!value.ends_with(')')) return std::nullopt;
        const auto threshold = value.substr(next + next_at.size(),
            value.size() - next - next_at.size() - 1);
        return *title + "，" + native_text_to_utf8(std::string(value.substr(0, next))) +
            "（下一级需" + native_text_to_utf8(std::string(threshold)) + "）";
    };
    const auto detail_guild_count = [&](std::string_view source) -> std::optional<std::string> {
        if (!source.starts_with(", ")) return std::nullopt;
        source.remove_prefix(2);
        if (source == "no members") return exact_literal_translation("No members");
        if (source == "no workers")
            return exact_literal_translation("Fortress guild detail: No workers");
        for (const std::string_view suffix : {" members", " member", " workers", " worker"}) {
            if (!source.ends_with(suffix)) continue;
            const std::string digits(source.substr(0, source.size() - suffix.size()));
            if (!digits.empty() && std::all_of(digits.begin(), digits.end(),
                    [](unsigned char ch) { return ch >= '0' && ch <= '9'; }))
                return render_template("Fortress guild detail: {d}" + std::string(suffix), digits);
            return std::nullopt;
        }
        return std::nullopt;
    };
    const auto detail_guild_kind = [&](std::string_view source) -> std::optional<std::string> {
        for (const std::string_view suffix : {" grand guildhall", " guildhall", " meeting place"}) {
            if (!source.ends_with(suffix) || source.size() <= suffix.size()) continue;
            const std::string profession(source.substr(0, source.size() - suffix.size()));
            if (suffix == " meeting place") return render_template("{s} meeting place", profession);
            auto name = translate_unit_profession(profession, true);
            if (!name) name = exact_literal_translation(profession);
            if (!name) name = translate_compositional(profession);
            const auto kind = exact_literal_translation(suffix == " grand guildhall"
                ? "Grand guildhall" : "Guildhall");
            if (name && kind) return *name + *kind;
            return std::nullopt;
        }
        return std::nullopt;
    };
    const auto append_detail = [&](const NativeDrawnTextRow &draw, int end, int rule,
                                   const std::string &target, const std::string &complete) {
        const auto &allocation = *draw.location_picker_box;
        int left = allocation.x, right = allocation.x + allocation.w;
        if (draw.draw_clip) {
            left = std::max(left, draw.draw_clip->x);
            right = std::min(right, draw.draw_clip->x + draw.draw_clip->w);
        }
        if (left < 0 || left > draw.x || right <= draw.x || right > gps_->dimx ||
            end <= draw.x || end > gps_->dimx || target.empty()) return;
        const auto source = context[draw.y].substr(draw.x, end - draw.x);
        if (rows[draw.y].compare(draw.x, source.size(), source) == 0) {
            if (only_y < 0 || only_y == draw.y) {
                Match match{draw.x, draw.y, static_cast<int>(source.size()), rule, target, source};
                match.native_picture_caption_box = SDL_Rect{left, draw.y, right - left, 1};
                match.native_picture_caption_source = complete;
                matches.push_back(std::move(match));
            }
            std::fill_n(rows[draw.y].begin() + draw.x, source.size(), ' ');
        } else if (raw_layer) {
            for (int offset = 0; offset < static_cast<int>(source.size());) {
                while (offset < static_cast<int>(source.size()) &&
                    rows[draw.y][draw.x + offset] != source[offset]) ++offset;
                const int start = offset;
                while (offset < static_cast<int>(source.size()) &&
                    rows[draw.y][draw.x + offset] == source[offset]) ++offset;
                if (offset == start) continue;
                if (only_y < 0 || only_y == draw.y)
                    matches.push_back({draw.x + start, draw.y, offset - start, rule, {},
                        source.substr(start, offset - start)});
                std::fill_n(rows[draw.y].begin() + draw.x + start, offset - start, ' ');
            }
        }
    };
    for (const auto *layer : {&drawn, &top_drawn}) {
        for (const auto &draw : *layer) {
            if (!current_draw(draw)) continue;
            const auto kind = draw.location_picker_field;
            const std::string complete = draw.complete_source.empty() ? draw.source : draw.complete_source;
            int end = detail_draw_end(draw);
            int rule = kFortressLocationTextRule;
            std::optional<std::string> target;
            std::string whole = complete;
            switch (kind) {
            case NativeLocationPickerField::DetailName:
                target = translate_fortress_location_reference(complete,
                    fortress_location_label_below(context, draw.x, draw.y));
                if (!target) target = detail_identity(complete);
                break;
            case NativeLocationPickerField::DetailKind:
                target = exact_literal_translation(complete);
                break;
            case NativeLocationPickerField::DetailGuildKind:
                target = detail_guild_kind(complete);
                break;
            case NativeLocationPickerField::DetailGuildName:
                target = complete == "No established guild" ? exact_literal_translation(complete)
                    : contains_cjk_utf8(complete) ? std::optional<std::string>(native_text_to_utf8(complete))
                    : translate_legends_name(complete, false);
                if (!target) target = detail_identity(complete);
                // The renderer writes the name/status and its comma-prefixed
                // count consecutively. Translate them as one allocation so a
                // Chinese name cannot cover a separately positioned suffix.
                for (const auto &count : *layer) {
                    if (count.location_picker_field != NativeLocationPickerField::DetailGuildCount ||
                            count.y != draw.y || count.x != end || !current_draw(count)) continue;
                    const std::string suffix = count.complete_source.empty()
                        ? count.source : count.complete_source;
                    if (const auto quantity = detail_guild_count(suffix); target && quantity) {
                        *target += "，" + *quantity;
                        end = detail_draw_end(count);
                        whole += suffix;
                    }
                    break;
                }
                break;
            case NativeLocationPickerField::DetailDedication: {
                constexpr std::string_view prefix = "Dedicated to ";
                if (complete.starts_with(prefix)) {
                    if (const auto name = detail_identity(complete.substr(prefix.size())))
                        target = "供奉" + *name;
                } else target = complete == "No particular deity"
                    ? exact_literal_translation(complete) : detail_identity(complete);
                break;
            }
            case NativeLocationPickerField::DetailFixed: {
                const std::string text(trim_view(complete));
                target = exact_literal_translation("Fortress temple detail: " + text);
                if (!target) target = exact_literal_translation(text);
                if (std::find(std::begin(fact_labels), std::end(fact_labels), text) !=
                        std::end(fact_labels)) rule = kFortressLocationLabelRule;
                else if (text == "None") rule = kFortressLocationValueRule;
                break;
            }
            case NativeLocationPickerField::DetailRank:
                target = detail_rank(complete);
                break;
            case NativeLocationPickerField::DetailCount:
                for (const auto &word : *layer) {
                    if (word.location_picker_field != NativeLocationPickerField::DetailCountWord ||
                        word.y != draw.y || word.x <= draw.x || !current_draw(word)) continue;
                    const std::string suffix = word.complete_source.empty() ? word.source : word.complete_source;
                    if (suffix != "worshipper" && suffix != "worshippers") continue;
                    if (complete == "No") target = exact_literal_translation("No worshippers");
                    else if (std::all_of(complete.begin(), complete.end(),
                            [](unsigned char ch) { return ch >= '0' && ch <= '9'; }))
                        target = render_template("{d} " + suffix, complete);
                    end = detail_draw_end(word);
                    whole += " " + suffix;
                    break;
                }
                break;
            case NativeLocationPickerField::DetailRequirement:
                for (const std::string_view prefix : {"Priest: ", "High priest: "}) {
                    if (!complete.starts_with(prefix)) continue;
                    for (const std::string_view suffix : {" worshipper needed", " worshippers needed"}) {
                        if (!complete.ends_with(suffix) || complete.size() <= prefix.size() + suffix.size())
                            continue;
                        const auto digits = complete.substr(prefix.size(),
                            complete.size() - prefix.size() - suffix.size());
                        if (std::all_of(digits.begin(), digits.end(),
                                [](unsigned char ch) { return ch >= '0' && ch <= '9'; }))
                            target = render_template("Fortress temple detail: " + std::string(prefix) +
                                "{d}" + std::string(suffix), digits);
                        break;
                    }
                    break;
                }
                break;
            case NativeLocationPickerField::DetailRole:
                target = translate_unit_profession(complete, true);
                break;
            case NativeLocationPickerField::DetailUnit:
                target = translate_unit_identity(complete, true);
                break;
            default:
                break;
            }
            if (target) append_detail(draw, end, rule, *target, whole);
        }
    }
    for (int y = 1; y + 1 < gps_->dimy && !panel; ++y) {
        for (const std::string_view anchor : fact_labels) {
            const auto x = context[y].find(anchor);
            if (x == std::string::npos ||
                !has_word_boundaries(context[y], x, x + anchor.size())) continue;
            const auto frame = native_panel_interior(borders, *gps_,
                static_cast<int>(x), static_cast<int>(x + anchor.size()), y);
            if (!frame) continue;
            // Temples share chests, instruments and dance floors with taverns,
            // but have no goblet or rented-room fields. Two distinct facts in
            // the same closed panel establish either location detail page.
            for (const std::string_view label : fact_labels) {
                if (label == anchor) continue;
                for (int row = frame->y; row < frame->y + frame->h; ++row) {
                    const auto at = context[row].find(label, frame->x);
                    if (at == std::string::npos || at + label.size() >
                            static_cast<size_t>(frame->x + frame->w) ||
                        !has_word_boundaries(context[row], at, at + label.size())) continue;
                    panel = frame;
                    break;
                }
                if (panel) break;
            }
            if (panel) break;
        }
    }
    if (!panel) return;
    const int right = panel->x + panel->w;
    const int bottom = panel->y + panel->h;
    auto append = [&](int x, int y, int length, int rule, const std::string &target) {
        if (target.empty() || length <= 0) return;
        const auto source = context[y].substr(x, length);
        if (rows[y].compare(x, length, source) == 0) {
            if (only_y < 0 || only_y == y)
                matches.push_back({x, y, length, rule, target, source});
            std::fill_n(rows[y].begin() + x, length, ' ');
        } else if (raw_layer) {
            // A coloured caption can span layers. Suppress only matching
            // physical bytes; the composite pass owns the complete overlay.
            for (int offset = 0; offset < length;) {
                while (offset < length && rows[y][x + offset] != source[offset]) ++offset;
                const int start = offset;
                while (offset < length && rows[y][x + offset] == source[offset]) ++offset;
                if (offset == start) continue;
                if (only_y < 0 || only_y == y)
                    matches.push_back({x + start, y, offset - start, rule, {},
                        source.substr(start, offset - start)});
                std::fill_n(rows[y].begin() + x + start, offset - start, ' ');
            }
        }
    };
    int first_fact_y = bottom;
    for (int y = panel->y; y < bottom; ++y) {
        for (const std::string_view label : fact_labels) {
            const auto at = context[y].find(label, panel->x);
            if (at == std::string::npos || at + label.size() > static_cast<size_t>(right) ||
                !has_word_boundaries(context[y], at, at + label.size())) continue;
            const auto target = exact_literal_translation(std::string(label));
            if (!target || target->empty()) continue;
            first_fact_y = std::min(first_fact_y, y);
            append(static_cast<int>(at), y, static_cast<int>(label.size()),
                kFortressLocationLabelRule, *target);
            int start = static_cast<int>(at + label.size());
            while (start < right && context[y][start] == ' ') ++start;
            int end = start;
            std::string value;
            if (start + 4 <= right && context[y].compare(start, 4, "None") == 0 &&
                has_word_boundaries(context[y], start, start + 4)) {
                const auto translated = exact_literal_translation("None");
                if (translated) { value = *translated; end += 4; }
            } else if (start < right && context[y][start] >= '0' && context[y][start] <= '9') {
                // Native quantities include current (desired), and the dance
                // floor can show dimensions. Stop before any other field.
                while (end < right &&
                    std::string_view("0123456789 ()xX,<>/").find(context[y][end]) !=
                        std::string_view::npos) ++end;
                while (end > start && context[y][end - 1] == ' ') --end;
                value = context[y].substr(start, end - start);
            }
            append(start, y, end - start, kFortressLocationValueRule, value);
        }
    }
    static constexpr std::string_view location_kinds[] = {
        "Temple Complex", "Temple complex", "Temple", "Shrine", "Tavern", "Hospital",
    };
    const auto is_location_kind = [](std::string_view text) {
        return std::find(std::begin(location_kinds), std::end(location_kinds), text) !=
            std::end(location_kinds);
    };
    const auto translate_kind = [&](std::string_view source) {
        return exact_literal_translation(source == "Temple Complex"
            ? "Temple complex" : std::string(source));
    };
    const auto translate_identity = [&](const std::string &source)
            -> std::optional<std::string> {
        if (contains_cjk_utf8(source)) return native_text_to_utf8(source);
        // Deities can be English generated titles or native figure names.
        // Keep the complete identity, including its article and epithet.
        auto name = translate_religion_reference(source);
        if (!name) name = translate_legends_name(source, true);
        if (!name) name = translate_legends_name(source, false);
        if (!name) name = translate_procedural_fragment(source, false, false, {},
            ProceduralFragmentContext::generated_name);
        return name;
    };
    const auto clipped_snapshot = captured_clipped_caption_snapshot();
    const auto &clipped = *clipped_snapshot;
    const auto complete_source = [&](const LogicalTextField &field, int y) {
        for (const auto &capture : clipped)
            if (capture.x == field.start && capture.y == y &&
                capture.visible == field.text && !capture.complete.empty())
                return capture.complete;
        return field.text;
    };
    int heading_y = bottom;
    for (int y = panel->y; y < first_fact_y; ++y)
        for (const auto &field : split_text_fields(context[y]))
            if (field.start >= panel->x && field.end <= right &&
                is_location_kind(field.text)) heading_y = std::min(heading_y, y);

    for (int y = panel->y; y < bottom; ++y) {
        for (const auto &field : split_text_fields(context[y])) {
            if (field.start < panel->x || field.end > right) continue;

            // The native rank/value string includes its type, comma, amount,
            // currency glyph and optional next-rank threshold. Own the whole
            // phrase so its Chinese rank and unchanged values stay together.
            bool rank_value = false;
            for (const std::string_view kind : location_kinds) {
                if (context[y].compare(field.start, kind.size(), kind) != 0 ||
                    !has_word_boundaries(context[y], field.start, field.start + kind.size()))
                    continue;
                int value_start = field.start + static_cast<int>(kind.size());
                while (value_start < right && context[y][value_start] == ' ') ++value_start;
                if (value_start >= right || context[y][value_start] != ',') continue;
                ++value_start;
                while (value_start < right && context[y][value_start] == ' ') ++value_start;
                int end = value_start;
                // Estimated location values keep their native '~' prefix.
                // It precedes the digits, but belongs to the complete rank row.
                if (end < right && context[y][end] == '~') ++end;
                const int digits_start = end;
                while (end < right && context[y][end] >= '0' && context[y][end] <= '9') ++end;
                if (end == digits_start) continue;
                if (end < right && context[y][end] != ' ' &&
                    !ascii_word_byte(static_cast<unsigned char>(context[y][end])) &&
                    !is_cp437_box_separator(context[y], end)) ++end;
                const auto target = translate_kind(kind);
                if (!target) continue;
                std::string translated = *target + "，" + native_text_to_utf8(
                    context[y].substr(value_start, end - value_start));
                constexpr std::string_view next_at = " (next at ";
                if (end + static_cast<int>(next_at.size()) < right &&
                    context[y].compare(end, next_at.size(), next_at) == 0) {
                    const int next_start = end + static_cast<int>(next_at.size());
                    int next_end = next_start;
                    while (next_end < right && context[y][next_end] >= '0' &&
                        context[y][next_end] <= '9') ++next_end;
                    if (next_end > next_start) {
                        if (next_end < right && context[y][next_end] != ')' &&
                            context[y][next_end] != ' ' &&
                            !ascii_word_byte(static_cast<unsigned char>(context[y][next_end])) &&
                            !is_cp437_box_separator(context[y], next_end)) ++next_end;
                        if (next_end < right && context[y][next_end] == ')') {
                            translated += "（下一级需" + native_text_to_utf8(
                                context[y].substr(next_start, next_end - next_start)) + "）";
                            end = next_end + 1;
                        }
                    }
                }
                append(field.start, y, end - field.start, kFortressLocationTextRule,
                    translated);
                rank_value = true;
                break;
            }
            if (rank_value) continue;

            constexpr std::string_view dedication = "Dedicated to ";
            if (field.text.starts_with(dedication)) {
                const auto complete = complete_source(field, y);
                const std::string identity(trim_view(
                    std::string_view(complete).substr(dedication.size())));
                if (const auto name = translate_identity(identity))
                    append(field.start, y, field.end - field.start,
                        kFortressLocationTextRule, "供奉" + *name);
                continue;
            }
            for (const std::string_view suffix : {" worshippers", " worshipper"}) {
                if (!field.text.ends_with(suffix)) continue;
                const std::string_view digits(field.text.data(), field.text.size() - suffix.size());
                if (!digits.empty() && std::all_of(digits.begin(), digits.end(),
                        [](unsigned char ch) { return ch >= '0' && ch <= '9'; }))
                    append(field.start, y, field.end - field.start,
                        kFortressLocationTextRule, std::string(digits) + " 名信徒");
                break;
            }

            const bool kind = is_location_kind(field.text);
            const bool heading = kind && y == heading_y;
            const bool caption = kind || field.text == "Tavern Keeper" ||
                field.text == "Tavern keeper" || field.text == "Performer" ||
                field.text == "All visitors welcome" || field.text == "Citizens only" ||
                field.text == "No worshippers" || field.text == "No worshipper" ||
                field.text == "Only organized religions can have recognized priesthoods.";
            if (!caption) continue;
            const auto target = kind ? translate_kind(field.text)
                : field.text == "No worshipper" ? exact_literal_translation("No worshippers")
                : exact_literal_translation(field.text);
            if (target) append(field.start, y, field.end - field.start,
                kFortressLocationTextRule, *target);
            if (!heading) continue;
            // The location name and type share the native header column.
            // Recognize the whole previous name field, retaining its normal
            // procedural-name translation and the two original header rows.
            for (int name_y = std::max(panel->y, y - 2); name_y < y; ++name_y) {
                for (const auto &name : split_text_fields(context[name_y])) {
                    if (name.start != field.start || name.end > right || is_location_kind(name.text))
                        continue;
                    const auto source = complete_source(name, name_y);
                    auto translated = translate_fortress_location_reference(source, field.text);
                    if (!translated) translated = translate_identity(source);
                    if (translated) append(name.start, name_y, name.end - name.start,
                        kFortressLocationTextRule, *translated);
                }
            }
        }
    }
}

void Overlay::layout_fortress_location(SDL_Renderer *renderer) {
    if (!gps_ || !renderer || !face_ ||
        gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    const NativePanelBorders borders(*gps_);
    const auto layout_caption = [&](Match &match) {
        // Generic panel layout runs first. These complete location fields
        // retain their native rows and left origins, not a previously packed
        // fragment box or the centre of their English source span.
        match.layout_x = match.x;
        match.layout_y = match.y;
        match.layout_pixel_y = 0;
        match.layout_box_pixel_x = -1;
        match.layout_box_pixel_width = 0;
        match.layout_native_clip.reset();
        match.layout_clip_right = -1;
        match.layout_fixed_baseline = false;
        match.layout_right = false;
        match.layout_left = true;
        if (match.native_picture_caption_box) {
            const auto &box = *match.native_picture_caption_box;
            layout_fortress_text_rows(renderer, {{&match}}, box.x, box.x + box.w, true);
            match.layout_y = box.y;
            match.layout_pixel_y = 0;
            match.layout_fixed_baseline = true;
            return;
        }
        auto region = native_button_text_rect(*gps_, match.x,
            match.x + match.length, match.y);
        if (!region) region = native_panel_interior(borders, *gps_,
            match.x, match.x + match.length, match.y);
        if (region) {
            layout_fortress_text_rows(renderer, {{&match}}, match.x,
                region->x + region->w, true);
        } else {
            // Keep the native origin until the draw recovers its control;
            // a short English title must not become the Chinese text budget.
            match.layout_x = match.x;
            match.layout_left = true;
            match.layout_prepared = true;
            match.layout_line_height_pixels = gps_->tile_pixel_y;
        }
    };
    std::vector<Match *> labels, moving;
    for (Match &match : prepared_matches_) {
        if (match.target.empty() || match.native_split_duplicate) continue;
        if (match.rule == kFortressLocationLabelRule ||
                match.rule == kFortressLocationValueRule) {
            match.layout_y = match.y;
            match.layout_pixel_y = 0;
            match.layout_clip_right = -1;
            match.layout_fixed_baseline = false;
            match.layout_right = false;
        }
        if (match.rule == kFortressLocationLabelRule) labels.push_back(&match);
        if (match.rule == kFortressLocationLabelRule || match.rule == kFortressLocationValueRule)
            moving.push_back(&match);
        if (match.rule == kFortressLocationTextRule) layout_caption(match);
    }
    const auto display_y = [](const Match &match) {
        return match.native_split_text ? match.native_split_top_y : match.y;
    };
    // The left facts share a label/value table; rented rooms is a separate
    // field on the dance-floor row. Group native label starts, allowing the
    // one-cell inset used by the desired-quantity controls.
    std::sort(labels.begin(), labels.end(), [](const Match *a, const Match *b) {
        return a->x < b->x;
    });
    for (size_t begin = 0; begin < labels.size();) {
        size_t end = begin + 1;
        const int left = labels[begin]->x;
        while (end < labels.size() && labels[end]->x <= left + 1) ++end;
        std::vector<std::vector<Match *>> label_rows, value_rows;
        int right = left, label_width = 0;
        const int pixels = unified_font_pixels();
        for (size_t i = begin; i < end; ++i) {
            Match *label = labels[i];
            label_rows.push_back({label});
            right = std::max(right, label->x + label->length);
            const auto *glyph = get_glyph_texture(
                renderer, label->target, gps_->screen_pixel_x);
            if (!glyph || !glyph->texture) return;
            label_width = std::max(label_width,
                (label->x - left) * gps_->tile_pixel_x + glyph->width);
            const auto panel = native_panel_interior(borders, *gps_,
                label->x, label->x + label->length, label->y);
            int field_right = panel ? panel->x + panel->w : gps_->dimx;
            for (const Match *other : labels)
                if (display_y(*other) == display_y(*label) && other->x > label->x)
                    field_right = std::min(field_right, other->x);
            Match *value = nullptr;
            for (Match *field : moving) {
                if (field->rule == kFortressLocationValueRule &&
                    display_y(*field) == display_y(*label) && field->x >= label->x + label->length &&
                    field->x + field->length <= field_right &&
                    (!value || field->x < value->x)) value = field;
            }
            if (value) {
                value_rows.push_back({value});
                right = std::max(right, value->x + value->length);
            }
            // PE 53.16 draws the desired-quantity controls with these three
            // complete main-button skins. Their left edge owns the text
            // budget even when a current/desired count gains more digits.
            if (label->source == "Goblets (Desired):" ||
                label->source == "Stored Instruments (Desired):") {
                for (int x = label->x + label->length; x + 12 <= field_right; ++x) {
                    bool found = false;
                    for (int y = display_y(*label); y <= display_y(*label) + 1; ++y) {
                        if (native_main_button_at(*gps_, x, y, 299) &&
                            native_main_button_at(*gps_, x + 4, y, 300) &&
                            native_main_button_at(*gps_, x + 8, y, 301)) {
                            right = std::max(right, x - 1);
                            found = true;
                            break;
                        }
                    }
                    if (found) break;
                }
            }
        }
        if (end < labels.size()) right = std::min(right, labels[end]->x - 1);
        const int value_left = left + (label_width + 2 * config_.horizontal_padding +
            gps_->tile_pixel_x - 1) / gps_->tile_pixel_x + 1;
        if (!value_rows.empty() && value_left < right) {
            // Quantity controls start inside their frame, one cell after the
            // unframed facts. Share the value column without pulling those
            // captions back onto the left border. Measure each actual inset,
            // then keep the smallest fitted font common to the whole column.
            for (const auto &row : label_rows) {
                layout_fortress_text_rows(renderer, {row}, row.front()->x,
                    value_left - 1, true, false, moving);
            }
            for (const auto &row : label_rows)
                row.front()->layout_prepared = true;
            layout_fortress_text_rows(renderer, value_rows, value_left, right, true, false, moving);
        } else {
            for (const auto &row : label_rows)
                layout_caption(*row.front());
        }
        begin = end;
    }
}
