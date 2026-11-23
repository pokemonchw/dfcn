// Workshop previews contain whole recipe fields followed by optional RAW
// description paragraphs. Recover the native field boundary before translating
// it; neither the English wrap width nor a short translated prefix defines it.
static bool workshop_recipe_rows_fit_together(std::string_view previous, std::string_view next) {
    // The producer only wraps when a 30th byte arrives. If even the next
    // whole word fits with room to spare, it started a new item instead.
    const size_t word = next.substr(0, next.find(' ')).size();
    return !previous.empty() && word && previous.size() + 1 + word < 29;
}

void Overlay::append_workshop_recipe_card(const NativeTextCard &card,
        std::vector<std::string> &rows, std::vector<Match> &matches, int only_y) const {
    if (card.rows.empty()) return;
    const int right = card.interior.x + card.interior.w;
    const auto identity = [](std::string_view text) {
        std::string result;
        for (unsigned char ch : text) {
            if (ch == ' ' || ch == '\t' || ch == '\r' || ch == '\n') continue;
            result += static_cast<char>(ch >= 'A' && ch <= 'Z' ? ch - 'A' + 'a' : ch);
        }
        return result;
    };
    const auto heading = [](std::string_view text) {
        return text == "Produces:" || text == "Requires:";
    };
    const auto counted = [](std::string_view text) {
        return !text.empty() && text.front() >= '0' && text.front() <= '9';
    };
    constexpr uint32_t upper = 1u << 3, lower_half = 1u << 4;
    const auto half = [&](const NativeTextCardRow &row, uint32_t expected) {
        for (size_t i = 0; i < row.source.size(); ++i) {
            if (row.source[i] == ' ') continue;
            bool top = false;
            const auto *cell = cell_at(row.x + static_cast<int>(i), row.y, &top);
            const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            const size_t tile = static_cast<size_t>(row.x + static_cast<int>(i)) * gps_->dimy + row.y;
            if (!cell || !flags || cell[0] != static_cast<unsigned char>(row.source[i]) ||
                (flags[tile] & (upper | lower_half)) != expected) return false;
        }
        return true;
    };
    struct Line { size_t first, last; };
    std::vector<Line> logical;
    for (size_t i = 0; i < card.rows.size(); ++i) {
        const size_t first = i;
        const auto &row = card.rows[i];
        if (i + 1 < card.rows.size() && card.rows[i + 1].x == row.x &&
            card.rows[i + 1].y == row.y + 1 && card.rows[i + 1].source == row.source &&
            half(row, upper) && half(card.rows[i + 1], lower_half)) ++i;
        logical.push_back({first, i});
    }
    auto captures = captured_native_workshop_requirements();
    const auto paragraphs = captured_native_paragraphs();
    captures.insert(captures.end(), paragraphs.begin(), paragraphs.end());
    const int native_width = native_workshop_recipe_paragraph_width();
    const auto match_capture = [&](const NativeParagraphCapture &capture, size_t begin) {
        if (capture.wrapped_lines.empty() || capture.paragraph_width > card.interior.w ||
            (native_width > 0 && capture.paragraph_width != native_width)) return SIZE_MAX;
        size_t next = begin;
        std::string reconstructed;
        for (const auto &wrapped : capture.wrapped_lines) {
            if (trim_view(wrapped).empty()) continue;
            if (next >= logical.size()) return SIZE_MAX;
            const auto &row = card.rows[logical[next].first];
            if (heading(row.source) || identity(row.source) != identity(wrapped) ||
                (next > begin && row.y != card.rows[logical[next - 1].last].y + 1)) return SIZE_MAX;
            reconstructed += row.source;
            ++next;
        }
        return next > begin && identity(reconstructed) == identity(capture.source) ? next : SIZE_MAX;
    };
    // A generated type can be absent from every native language dictionary.
    // Learn its name only from a fully parsed description actually displayed
    // in this card, before translating its product and requirement fields.
    for (const auto &capture : captures) {
        if (capture.source.find("instrument") == std::string::npos) continue;
        for (size_t begin = 0; begin < logical.size(); ++begin) {
            if (match_capture(capture, begin) == SIZE_MAX) continue;
            (void)translate_instrument_description(capture.source, true);
            break;
        }
    }
    const auto translate = [&](std::string_view source) -> TranslationResult {
        // Recipe constraints must pass through the typed noun grammar before
        // the tooltip catalog's legacy literal fallback. Historical complete
        // phrases can omit a capability or keep a redundant body-part noun.
        if (auto recipe = translate_workshop_recipe_source(source))
            return TranslationResult::translated(source, *recipe, "recipe");
        auto prose = translate_toolbar_tooltip_result(source, true);
        if (prose.strict_target()) return prose;
        auto recipe = translate_workshop_recipe_source_display(source);
        if (recipe.usable() && recipe.changed()) return recipe;
        return prose.usable() && prose.changed() ? prose : recipe;
    };
    bool recipe_section = false;
    for (size_t begin = 0; begin < logical.size();) {
        const auto &first = card.rows[logical[begin].first];
        if (begin && first.y != card.rows[logical[begin - 1].last].y + 1) recipe_section = false;
        size_t end = begin + 1;
        std::string source = first.source;
        TranslationResult translation;
        bool native_boundary = false;
        if (heading(source)) {
            recipe_section = true;
            const auto exact = exact_literal_translation(source);
            translation = exact ? TranslationResult::translated(source, *exact, "recipe-heading")
                : preserved_item_field(source, "recipe-heading");
        } else {
            // A capture is accepted only when every native wrap row is still
            // visible in this closed card, including the end of the field.
            // A previous hover with a common first line supplies no evidence.
            for (auto capture = captures.rbegin(); capture != captures.rend(); ++capture) {
                const size_t next = match_capture(*capture, begin);
                if (next == SIZE_MAX || (native_boundary && next <= end)) continue;
                end = next;
                source = capture->source;
                translation = translate(source);
                native_boundary = true;
            }
            if (!native_boundary) {
                // Already-open cards can predate capture (e.g. after core
                // reload). Reconstruct complete adjacent fields using the
                // shared grammar only at a field boundary: a new count,
                // heading or blank row. A translatable prefix alone does
                // not prove that an unknown continuation is another field.
                std::string candidate;
                size_t next = begin;
                for (; next < logical.size(); ++next) {
                    const auto &row = card.rows[logical[next].first];
                    if (heading(row.source)) break;
                    if (next > begin) {
                        const auto &previous = card.rows[logical[next - 1].last];
                        if (row.y != previous.y + 1 || (recipe_section && (counted(row.source) ||
                                workshop_recipe_rows_fit_together(previous.source, row.source)))) break;
                    }
                    if (!candidate.empty()) candidate += ' ';
                    candidate += row.source;
                }
                source = std::move(candidate);
                end = next;
                translation = translate(source);
            }
        }
        std::vector<Match> spans;
        for (size_t line = begin; line < end; ++line) {
            const auto &row = card.rows[logical[line].first];
            Match span{row.x, row.y, static_cast<int>(row.source.size()),
                kWorkshopRecipeRowRule, {}, row.source};
            span.layout_foreground_rgb = row.foregrounds.front();
            spans.push_back(std::move(span));
        }
        const size_t output_begin = matches.size();
        const int left = card.interior.x + (heading(first.source) ? 0 : 1);
        const bool rendered = translation.usable() && translation.changed() &&
            !translation.target.empty() && append_bounded_paragraph(
                spans, translation.target, rows, matches, only_y, right, right, {}, false, left);
        if (!rendered) {
            // Keep the whole original field together if a new mod introduces
            // unknown prose. Its complete source enters the review queue;
            // generic word substitution must not make a mixed-language card.
            for (auto &span : spans) {
                span.target = native_text_to_utf8(span.source);
                span.native_hover_untranslated = translation.has_untranslated();
                if (translation.has_untranslated()) span.native_help_review_source = source;
                span.layout_x = left;
                span.layout_length = right - left;
                span.layout_clip_right = right;
                span.layout_left = true;
                if (only_y < 0 || only_y == span.y) matches.push_back(std::move(span));
            }
        }
        if (translation.usable()) attach_item_display_result(matches, output_begin, translation);
        for (size_t index = output_begin; index < matches.size(); ++index) {
            auto &match = matches[index];
            // Expanded Chinese rows keep their measured pixel baselines.
            // Their native source anchor is only for suppression and color.
            if (rendered) continue;
            const auto line = std::find_if(logical.begin() + begin, logical.begin() + end,
                [&](const Line &entry) { return card.rows[entry.first].y == match.y; });
            if (line == logical.begin() + end) continue;
            match.layout_y = match.y;
            match.layout_fixed_baseline = true;
            if (line->first != line->last) {
                match.layout_pixel_y = gps_->tile_pixel_y / 2;
                match.native_split_text = true;
                match.native_split_top_y = match.y;
            }
        }
        for (size_t line = begin; line < end; ++line) {
            for (size_t physical = logical[line].first; physical <= logical[line].last; ++physical) {
                const auto &row = card.rows[physical];
                std::fill_n(rows[row.y].begin() + row.x, row.source.size(), ' ');
                if (physical == logical[line].first) continue;
                Match duplicate{row.x, row.y, static_cast<int>(row.source.size()),
                    kWorkshopRecipeRowRule, {}, row.source};
                duplicate.native_split_duplicate = true;
                if (only_y < 0 || only_y == row.y) matches.push_back(std::move(duplicate));
            }
        }
        begin = end;
    }
}

// The tooltip widget owns every logical row, including rows outside the
// screen. Resolve its complete fields before the shared tooltip compositor
// wraps the translated document into the widget's rectangle.
dfcn::TranslationResult Overlay::translate_workshop_tooltip_document(
        const NativeTooltipWidgetFrame &frame) const {
    const std::string_view body = frame.body_source;
    if (body.empty()) return {};
    struct Line { size_t begin, end; std::string_view text; };
    std::vector<Line> lines;
    for (size_t begin = 0;;) {
        const size_t newline = body.find('\n', begin);
        const size_t end = newline == std::string_view::npos ? body.size() : newline;
        lines.push_back({begin, end, trim_view(body.substr(begin, end - begin))});
        if (newline == std::string_view::npos) break;
        begin = newline + 1;
    }
    const auto heading = [](std::string_view source) {
        return source == "Produces:" || source == "Requires:";
    };
    const auto counted = [](std::string_view source) {
        return !source.empty() && source.front() >= '0' && source.front() <= '9';
    };
    // A category or description-only widget needs no recipe segmentation.
    // In particular, a wrapped number inside instrument prose is not an
    // independently emitted quantity field.
    if (frame.workshop_fields.empty() && std::none_of(lines.begin(), lines.end(),
            [&](const Line &line) { return heading(line.text); })) {
        auto prose = translate_toolbar_tooltip_result(body, true);
        if (prose.strict_target()) {
            prose.kind = "workshop-tooltip";
            prose.owner = "native-workshop-tooltip";
            return prose;
        }
    }
    const auto whitespace = [](unsigned char ch) {
        return ch == ' ' || ch == '\t' || ch == '\r' || ch == '\n';
    };
    const auto identity = [&](std::string_view source) {
        std::string key;
        for (unsigned char ch : source)
            if (!whitespace(ch)) key += static_cast<char>(ch);
        return key;
    };
    std::vector<const NativeParagraphCapture *> bound(lines.size(), nullptr);
    for (const auto &capture : frame.workshop_fields) {
        const size_t begin = capture.first_line, count = capture.wrapped_lines.size();
        if (capture.source.empty() || !count || begin >= lines.size() ||
                count > lines.size() - begin) continue;
        bool matches = true;
        std::string wrapped;
        for (size_t at = 0; at < count; ++at) {
            const auto &line = lines[begin + at];
            if (line.text != trim_view(capture.wrapped_lines[at])) {
                matches = false;
                break;
            }
            wrapped += line.text;
        }
        // A matching first row is insufficient: the owner, row index and
        // entire native wrap must all describe this same complete field.
        if (!matches || identity(wrapped) != identity(capture.source)) continue;
        const auto *previous = bound[begin];
        if (!previous || count > previous->wrapped_lines.size() ||
                (count == previous->wrapped_lines.size() &&
                    ((capture.job_item_caption && !previous->job_item_caption) ||
                     (bool(capture.job_item_caption) == bool(previous->job_item_caption) &&
                        capture.sequence > previous->sequence))))
            bound[begin] = &capture;
    }
    struct Field {
        size_t begin, end;
        std::string source;
        const NativeJobItemCaption *item;
        bool recipe_section;
    };
    std::vector<Field> fields;
    bool recipe_section = false;
    for (size_t begin = 0; begin < lines.size();) {
        if (lines[begin].text.empty()) {
            // The producer separates each DESCRIPTION from items with a blank row.
            recipe_section = false;
            ++begin;
            continue;
        }
        size_t end = begin + 1;
        std::string source;
        const NativeJobItemCaption *item = nullptr;
        if (heading(lines[begin].text)) {
            recipe_section = true;
            source = lines[begin].text;
        } else if (const auto *capture = bound[begin]) {
            source = capture->source;
            end = begin + capture->wrapped_lines.size();
            if (capture->job_item_caption) item = &*capture->job_item_caption;
        } else {
            // Cached native widgets can precede paragraph capture. Counts,
            // section headings, empty rows and bound fields delimit fallback
            // units; a translatable opening alone never ends a field.
            end = begin;
            while (end < lines.size() && !lines[end].text.empty()) {
                if (end > begin && (heading(lines[end].text) || bound[end] ||
                        (recipe_section && (counted(lines[end].text) ||
                            workshop_recipe_rows_fit_together(lines[end - 1].text, lines[end].text))))) break;
                if (!source.empty()) source += ' ';
                source += lines[end].text;
                ++end;
            }
        }
        fields.push_back({lines[begin].begin, lines[end - 1].end, std::move(source), item, recipe_section});
        begin = end;
    }
    const auto translate = [&](const Field &field) -> TranslationResult {
        const std::string_view source = field.source;
        if (heading(source)) {
            const auto target = exact_literal_translation(source);
            return target ? TranslationResult::translated(source, *target, "recipe-heading")
                : preserved_item_field(source, "recipe-heading");
        }
        if (field.item) {
            auto translated = translate_native_job_item_material(*field.item);
            if (translated.usable()) return translated;
        }
        if (const auto target = translate_workshop_recipe_source(source))
            return TranslationResult::translated(source, *target, "recipe");
        auto prose = translate_toolbar_tooltip_result(source, true);
        if (prose.strict_target()) return prose;
        // The native formatter omits the count for a single item.
        if (field.item || field.recipe_section) {
            auto recipe = translate_workshop_recipe_source_display(source);
            if (recipe.usable()) return recipe;
        }
        return preserved_item_field(source, "workshop-description");
    };
    const auto wrapped_result = [&](TranslationResult result, const Field &field) {
        const auto native = body.substr(field.begin, field.end - field.begin);
        if (!result.usable()) result = preserved_item_field(field.source, "workshop-field");
        // Translation fragments describe the unwrapped native source. Map
        // them back to the widget's exact rows so retained terms and their
        // source offsets remain correct after native wrapping adds spaces.
        std::vector<size_t> origins(result.source.size());
        size_t next = 0;
        for (size_t at = 0; at < result.source.size(); ++at) {
            if (!whitespace(static_cast<unsigned char>(result.source[at]))) {
                while (next < native.size() && whitespace(static_cast<unsigned char>(native[next]))) ++next;
                if (next >= native.size() || native[next] != result.source[at])
                    return preserved_item_field(native, "workshop-field");
                origins[at] = next++;
            } else origins[at] = next;
        }
        const auto boundary = [&](size_t at, bool end) {
            if (!at) return size_t{0};
            if (at >= origins.size()) return native.size();
            return end ? std::min(native.size(), origins[at - 1] + 1) : origins[at];
        };
        for (auto &origin : result.origins)
            if (origin != std::string::npos)
                origin = origin < origins.size() ? origins[origin] : std::string::npos;
        for (auto &fragment : result.fragments) {
            fragment.source_begin = boundary(fragment.source_begin, false);
            fragment.source_end = boundary(fragment.source_end, true);
        }
        result.source.assign(native);
        result.consumed = native.size();
        return result;
    };
    TranslationResult document;
    size_t consumed = 0;
    dfcn::TranslationWorkScope work;
    try {
        // A generated instrument name can first become known in a trailing
        // DESCRIPTION, after products and reagents that already use it.
        for (const auto &field : fields)
            (void)translate_instrument_description(field.source, true);
        for (const auto &field : fields) {
            if (field.begin > consumed) {
                const auto gap = body.substr(consumed, field.begin - consumed);
                const auto breaks = std::count(gap.begin(), gap.end(), '\n');
                document.append(TranslationResult::translated(gap,
                    std::string(static_cast<size_t>(breaks), '\n'), "card-separator"), consumed);
                consumed = field.begin;
            }
            document.append(wrapped_result(translate(field), field), field.begin);
            consumed = field.end;
        }
    } catch (const dfcn::TranslationWorkLimit &) {
        document.append(preserved_item_field(body.substr(consumed), "workshop-field",
            TranslationStatus::WorkLimited), consumed);
        consumed = body.size();
    }
    if (consumed < body.size()) {
        const auto gap = body.substr(consumed);
        document.append(TranslationResult::translated(gap,
            std::string(static_cast<size_t>(std::count(gap.begin(), gap.end(), '\n')), '\n'),
            "card-separator"), consumed);
    }
    document.source.assign(body);
    document.consumed = body.size();
    document.kind = "workshop-tooltip";
    document.owner = "native-workshop-tooltip";
    document.policy = TranslationPolicy::Display;
    document.resource_revision = RULESETS.resource_revision();
    return document;
}
