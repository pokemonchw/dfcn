// Whole-source lookup only. Whitespace belongs to native word wrapping, not
// translation identity. Never label a few translated words as a translated
// tooltip, and never use empty historical fragment tails to delete prose.
std::string Overlay::translate_toolbar_tooltip(std::string_view source, bool catalog_only) const {
    refresh_native_display_translation_context();
    const auto context = native_identity_translation_context();
    // A card is queried by native suppression and the final overlay. Cache
    // unknown cards too, so their complete-phrase lookup runs only once.
    if (tooltip_translation_cache_valid_ && source == tooltip_translation_cache_source_ &&
        catalog_only == tooltip_translation_cache_catalog_only_ &&
        tooltip_translation_cache_result_.resource_revision == RULESETS.resource_revision())
        return tooltip_translation_cache_target_;
    dfcn::TranslationWorkScope budget;
    dfcn::TranslationResult document_result;
    size_t document_consumed = 0;
    const auto translate = [&]() -> std::string {
        std::string identity;
        std::vector<size_t> origins;
        for (size_t at = 0; at < source.size(); ++at) {
            const auto ch = static_cast<unsigned char>(source[at]);
            if (!std::isspace(ch)) { identity.push_back(ch); origins.push_back(at); }
        }
        const auto found = toolbar_translations_.find(identity);
        if (found != toolbar_translations_.end()) return found->second;
        // Workshop tool/instrument descriptions come from generated RAW, not
        // the fixed tooltip initializer. Resolve their complete document with
        // the same instrument grammar used by item information pages.
        if (const auto instrument = translate_instrument_description(source, true))
            return *instrument;
        const auto translate_template_phrase = [&](std::string_view phrase) -> std::string {
            for (int index : toolbar_template_rules_) {
                const Rule &rule = rules_[static_cast<size_t>(index)];
                std::vector<std::string> captures;
                std::vector<std::pair<size_t, size_t>> ranges;
                if (!match_catalog_template(rule, phrase, 0, captures, ranges)) continue;
                std::vector<std::optional<std::string>> resolved(captures.size());
                bool complete = true;
                for (size_t i = 0; i < captures.size(); ++i) {
                    if (rule.template_kinds[i] == 'd') resolved[i] = captures[i];
                    else if (rule.template_kinds[i] == 's' &&
                             captures[i].find_first_of(".!?") == std::string::npos)
                        resolved[i] = translate_ui_message_capture(captures[i], false);
                    if (!resolved[i] || resolved[i]->empty()) { complete = false; break; }
                }
                if (complete) return fill_template(rule, captures, nullptr, nullptr, &resolved);
            }
            return {};
        };
        if (auto target = translate_template_phrase(source); !target.empty()) return target;
        // A closed hover document may contain several complete catalog
        // sentences. Cover the entire source with reviewed entries; a known
        // opening sentence never authorizes dropping an unknown continuation.
        std::vector<size_t> next(identity.size() + 1, SIZE_MAX);
        std::vector<std::string> targets(identity.size());
        next.back() = identity.size();
        for (size_t at = identity.size(); at-- > 0;) {
            for (const auto &[phrase, target] : toolbar_translations_) {
                const size_t end = at + phrase.size();
                if (end > identity.size() || next[end] == SIZE_MAX ||
                    identity.compare(at, phrase.size(), phrase) != 0) continue;
                if (next[at] == SIZE_MAX || end > next[at]) {
                    next[at] = end;
                    targets[at] = target;
                }
            }
            // Material slots are noun phrases, never another sentence. Match
            // each dynamic sentence as its own complete edge in the same
            // coverage path, retaining the original spaces inside its name.
            if (at != 0 && std::string_view(".!?").find(identity[at - 1]) == std::string_view::npos)
                continue;
            for (size_t end = identity.size(); end > at; --end) {
                if (next[end] == SIZE_MAX || (next[at] != SIZE_MAX && next[at] >= end) ||
                    (end != identity.size() &&
                     std::string_view(".!?").find(identity[end - 1]) == std::string_view::npos)) continue;
                auto target = translate_template_phrase(source.substr(origins[at],
                    origins[end - 1] + 1 - origins[at]));
                if (target.empty()) continue;
                next[at] = end;
                targets[at] = std::move(target);
            }
        }
        if (!identity.empty() && next.front() != SIZE_MAX) {
            std::string target;
            for (size_t at = 0; at < identity.size(); at = next[at]) target += targets[at];
            return target;
        }
        if (!catalog_only) {
            if (auto exact = exact_literal_translation(source); exact && contains_cjk_utf8(*exact))
                return *exact;
        }
        // Complete catalog results retain priority. Only a structurally
        // bound display template may keep a missing material field intact.
        for (int index : toolbar_template_rules_) {
            const Rule &rule = rules_[static_cast<size_t>(index)];
            std::vector<std::string> captures;
            std::vector<std::pair<size_t, size_t>> ranges;
            if (!match_catalog_template(rule, source, 0, captures, ranges,
                    nullptr, false, true)) continue;
            auto partial = translate_template_captures_display(rule, captures, source);
            if (!partial.usable() || !partial.changed()) continue;
            document_result = std::move(partial);
            return document_result.target;
        }
        if (source.find("\n\n") != std::string_view::npos) {
            dfcn::TranslationResult paragraphs;
            for (size_t begin = 0; begin < source.size();) {
                const size_t separator = source.find("\n\n", begin);
                const size_t end = separator == std::string_view::npos ? source.size() : separator;
                if (end > begin) paragraphs.append(translate_toolbar_tooltip_result(
                    source.substr(begin, end - begin), catalog_only), begin);
                if (separator == std::string_view::npos) break;
                paragraphs.append(dfcn::TranslationResult::translated("\n\n", "\n\n", "card-separator"), separator);
                begin = separator + 2;
            }
            if (std::any_of(paragraphs.fragments.begin(), paragraphs.fragments.end(),
                    [](const auto &fragment) { return fragment.status == dfcn::TranslationStatus::Translated &&
                        fragment.kind != "card-separator"; })) {
                document_result = std::move(paragraphs);
                return document_result.target;
            }
        }
        const bool character_fields = source.find("Affected by attributes:") != std::string_view::npos ||
            source.find("Affects skills:") != std::string_view::npos ||
            source.find("Weapon skill.") != std::string_view::npos ||
            source.find("Crafting skill.") != std::string_view::npos ||
            source.find("Performance skill.") != std::string_view::npos;
        if (!character_fields) {
            // A complete reviewed opening sentence is a constructor boundary.
            // Its unknown continuation remains one whole source span; no
            // punctuation inside that continuation is interpreted as a name
            // or another sentence by this fallback.
            size_t prefix = 0;
            const std::string *prefix_target = nullptr;
            for (const auto &[phrase, translated] : toolbar_translations_) {
                if (phrase.empty() || phrase.size() <= prefix || phrase.size() >= identity.size() ||
                        std::string_view(".!?").find(phrase.back()) == std::string_view::npos ||
                        !identity.starts_with(phrase)) continue;
                const size_t end = origins[phrase.size() - 1] + 1;
                if (end >= source.size() || !std::isspace(static_cast<unsigned char>(source[end]))) continue;
                prefix = phrase.size();
                prefix_target = &translated;
            }
            if (prefix_target) {
                const size_t end = origins[prefix - 1] + 1;
                document_result.append(dfcn::TranslationResult::translated(source.substr(0, end),
                    *prefix_target, "tooltip-catalog-sentence"));
                document_result.append(preserve_native_translation(source.substr(end),
                    "tooltip-continuation"), end);
                return document_result.target;
            }
        }
        // Workshop recipe fields already tried their typed grammar. A failed
        // requirement cannot be rescued by a legacy literal or per-line
        // character-card translation; only a complete reviewed description
        // from the catalog or instrument grammar is a valid prose fallback.
        if (catalog_only) return {};

        // Character cards contain a title, wrapped descriptions and independent
        // attribute/skill rows. Blank rows separate paragraphs; only a complete
        // dictionary phrase may join consecutive native rows inside a paragraph.
        // In particular, never stitch the description into the following list.
        if (!character_fields || source.find('\n') == std::string_view::npos) return {};
        std::vector<std::string_view> lines;
        std::vector<size_t> line_origins;
        for (size_t at = 0;;) {
            const size_t end = source.find('\n', at);
            const auto raw = source.substr(at,
                end == std::string_view::npos ? source.size() - at : end - at);
            const auto line = trim_view(raw);
            lines.push_back(line);
            line_origins.push_back(at + static_cast<size_t>(line.data() - raw.data()));
            if (end == std::string_view::npos) break;
            at = end + 1;
        }
        const bool skill_terms = source.find("Affected by attributes:") != std::string_view::npos ||
            source.find("Affects skills:") != std::string_view::npos ||
            source.find("Weapon skill.") != std::string_view::npos ||
            source.find("Crafting skill.") != std::string_view::npos ||
            source.find("Performance skill.") != std::string_view::npos;
        const auto translate_phrase = [&](std::string_view phrase) -> std::optional<std::string> {
            // Some skill names also name creatures or ordinary concepts. Keep
            // their wording in the same skill entry used by demonstrations,
            // ranked lists and TOML composition, not a second hover glossary.
            if (skill_terms) {
                if (auto exact = translate_skill_name(phrase);
                        exact && contains_cjk_utf8(*exact)) return exact;
            }
            if (auto exact = exact_literal_translation(phrase);
                    exact && contains_cjk_utf8(*exact)) return exact;
            // Native list rows can append a separately emitted qualifier. Resolve
            // both parts from the established table, including remapped wording.
            for (const auto suffix : {std::string_view("(minor)"), std::string_view("(etc)")}) {
                if (!phrase.ends_with(suffix)) continue;
                const auto name = trim_view(phrase.substr(0, phrase.size() - suffix.size()));
                const auto term = skill_terms ? translate_skill_name(name)
                                              : exact_literal_translation(name);
                const auto qualifier = exact_literal_translation(suffix);
                if (term && qualifier && contains_cjk_utf8(*term) && contains_cjk_utf8(*qualifier))
                    return *term + *qualifier;
            }
            return std::nullopt;
        };
        bool list_section = false;
        size_t preceding_end = 0;
        for (size_t at = 0; at < lines.size();) {
            const size_t unit_start = at;
            if (lines[at].empty()) { list_section = false; ++at; continue; }
            const bool list_heading = lines[at] == "Affected by attributes:" ||
                lines[at] == "Affects skills:";
            if (list_heading) list_section = true;
            if (!document_result.target.empty()) {
                const auto gap = source.substr(preceding_end, line_origins[at] - preceding_end);
                const bool paragraph_gap = std::count(gap.begin(), gap.end(), '\n') > 1;
                auto separator = dfcn::TranslationResult::translated(gap,
                    paragraph_gap ? "\n\n" : "\n", "card-separator");
                document_result.append(separator, preceding_end);
            }
            std::string phrase, translated;
            size_t consumed = at;
            // The first row is the card title. A native list header proves
            // independent attribute/skill rows; prose wraps stay one unit.
            size_t unit_end = at + 1;
            if (at != 0 && !list_section) {
                while (unit_end < lines.size() && !lines[unit_end].empty() &&
                        lines[unit_end] != "Affected by attributes:" &&
                        lines[unit_end] != "Affects skills:") ++unit_end;
            }
            for (size_t end = at; end < unit_end; ++end) {
                if (!phrase.empty()) phrase += ' ';
                phrase += lines[end];
                if (const auto exact = translate_phrase(phrase)) {
                    translated = *exact;
                    consumed = end + 1;
                }
            }
            // An unknown prose paragraph stays intact. Do not translate a
            // known prefix and reinterpret its wrapped unknown tail as rows.
            const size_t source_begin = line_origins[unit_start];
            const size_t source_end = line_origins[unit_end - 1] + lines[unit_end - 1].size();
            const auto unit = source.substr(source_begin, source_end - source_begin);
            if (consumed == unit_end)
                document_result.append(dfcn::TranslationResult::translated(unit,
                    std::move(translated), list_section ? "skill-entry" : "card-paragraph"), source_begin);
            else {
                std::string wrapped(unit);
                std::replace(wrapped.begin(), wrapped.end(), '\n', ' ');
                auto preserved = preserve_native_translation(wrapped,
                    list_section ? "skill-entry" : "card-paragraph");
                preserved.source.assign(unit);
                document_result.append(preserved, source_begin);
            }
            preceding_end = source_end;
            document_consumed = source_end;
            at = unit_end;
        }
        return document_result.has_untranslated() &&
            std::none_of(document_result.fragments.begin(), document_result.fragments.end(),
                [](const auto &fragment) { return fragment.status == dfcn::TranslationStatus::Translated &&
                    fragment.kind != "card-separator"; }) ? std::string{} : document_result.target;
    };
    try { tooltip_translation_cache_target_ = translate(); }
    catch (const dfcn::TranslationWorkLimit &) {
        if (document_result.usable() && document_consumed > 0) {
            document_result.append(preserve_native_translation(source.substr(document_consumed),
                "card-paragraph", false, dfcn::TranslationStatus::WorkLimited), document_consumed);
            if (std::any_of(document_result.fragments.begin(), document_result.fragments.end(),
                    [](const auto &fragment) { return fragment.status == dfcn::TranslationStatus::Translated &&
                        fragment.kind != "card-separator"; })) tooltip_translation_cache_target_ = document_result.target;
            else tooltip_translation_cache_target_.clear();
        } else {
            document_result = preserve_native_translation(source, "toolbar-card", false,
                dfcn::TranslationStatus::WorkLimited);
            tooltip_translation_cache_target_.clear();
        }
    }
    if (!document_result.usable() && !tooltip_translation_cache_target_.empty())
        document_result = dfcn::TranslationResult::translated(source,
            tooltip_translation_cache_target_, "toolbar-card");
    if (tooltip_translation_cache_target_.empty() && !document_result.usable())
        document_result = preserve_native_translation(source, "toolbar-card");
    document_result.source.assign(source);
    document_result.consumed = source.size();
    document_result.owner = "native-toolbar-tooltip";
    document_result.policy = dfcn::TranslationPolicy::Display;
    document_result.resource_revision = RULESETS.resource_revision();
    tooltip_translation_cache_result_ = std::move(document_result);
    tooltip_translation_cache_source_.assign(source);
    tooltip_translation_cache_catalog_only_ = catalog_only;
    tooltip_translation_cache_valid_ = context == native_identity_translation_context();
    return tooltip_translation_cache_target_;
}

dfcn::TranslationResult Overlay::translate_toolbar_tooltip_result(
        std::string_view source, bool catalog_only) const {
    translate_toolbar_tooltip(source, catalog_only);
    return tooltip_translation_cache_result_;
}

// Temple selection emits a count followed by one sphere per row. Both the
// captured widget and the closed-frame reader use this complete field grammar
// before generic skills or generated names can claim any part of the card.
bool Overlay::translate_deity_tooltip_fields(NativeToolbarTooltip &card) const {
    std::vector<NativeToolbarTooltip::DeityField> fields(card.rows.size());
    constexpr uint32_t top_half = 1u << 3, bottom_half = 1u << 4;
    const int body_x = card.widget_frame || card.body_x >= 0 ? card.body_x : card.text_x;
    const auto text_half = [&](size_t line) {
        const int y = card.text_y + static_cast<int>(line);
        uint32_t half = UINT32_MAX;
        for (size_t at = 0; at < card.rows[line].size(); ++at) {
            if (card.rows[line][at] == ' ') continue;
            const int x = body_x + static_cast<int>(at);
            if (x < 0 || x >= gps_->dimx || y < 0 || y >= gps_->dimy) return UINT32_MAX;
            bool top = card.widget_top_layer;
            const auto ch = static_cast<unsigned char>(card.rows[line][at]);
            const auto *cell = card.widget_frame ? native_tooltip_source_cell(*gps_, x, y, ch)
                : cell_at(x, y, &top);
            if (!cell || (!card.widget_frame && cell[0] != ch)) return UINT32_MAX;
            if (card.widget_frame)
                top = gps_->screen_top && cell == gps_->screen_top +
                    (static_cast<size_t>(x) * gps_->dimy + y) * 8;
            const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            const uint32_t current = flags ? flags[static_cast<size_t>(x) * gps_->dimy + y]
                & (top_half | bottom_half) : 0;
            if (current == (top_half | bottom_half) ||
                (half != UINT32_MAX && half != current)) return UINT32_MAX;
            half = current;
        }
        return half;
    };
    bool count_seen = false, sphere_seen = false;
    for (size_t line = 0; line < card.rows.size(); ++line) {
        const auto source = trim_view(card.rows[line]);
        if (source.empty()) continue;
        std::optional<std::string> target;
        if (!count_seen) {
            if (source == "No worshippers" || source == "No worshipper")
                target = "没有信徒";
            else for (const std::string_view suffix : {" worshippers", " worshipper"}) {
                if (!source.ends_with(suffix)) continue;
                const auto digits = source.substr(0, source.size() - suffix.size());
                if (!digits.empty() && std::all_of(digits.begin(), digits.end(),
                        [](unsigned char ch) { return ch >= '0' && ch <= '9'; }))
                    target = std::string(digits) + " 名信徒";
                break;
            }
            count_seen = target.has_value();
        } else {
            // The native sphere wrapper adds "the " to ten enum values
            // before title capitalization. Recognize that same semantic key
            // here as in translate_deity_spheres, retaining card ownership.
            std::string sphere = lower(std::string(source));
            if (sphere.starts_with("the ")) sphere.erase(0, 4);
            if (deity_sphere_translations_.contains(sphere)) {
                target = translate_deity_spheres(source);
                sphere_seen = target.has_value();
            }
        }
        if (!target) return false;
        fields[line].target = std::move(*target);
        // Only a complete duplicate pair proves a split-font line. Ordinary
        // addst rows retain unrelated half flags from the covered page.
        if (line + 1 < card.rows.size() && card.rows[line + 1] == card.rows[line] &&
                text_half(line) == top_half && text_half(line + 1) == bottom_half) {
            fields[line].pixel_y = gps_->tile_pixel_y / 2;
            ++line;
        }
    }
    if (!count_seen || !sphere_seen) return false;
    card.deity_fields = std::move(fields);
    return true;
}

// Only a completed hook-owned output can identify a tooltip. Page readers
// never search borders, catalogue prefixes or Hotkey labels across the screen.
void Overlay::capture_toolbar_tooltip() const {
    if (!gps_ || NativeTooltipPageScope::active) return;
    const auto widget = captured_native_tooltip_widget(*gps_);
    if (!widget || !widget->isolated) return;
    const auto &box = widget->bounds;
    if (!native_tooltip_valid_bounds(*gps_, box) || box.w < 3 || box.h < 3 ||
            widget->rows.size() != static_cast<size_t>(box.h) ||
            std::any_of(widget->rows.begin(), widget->rows.end(), [&](const auto &row) {
                return row.size() != static_cast<size_t>(box.w);
            })) return;
    NativeToolbarTooltip card;
    card.left = box.x;
    card.top = box.y;
    card.right = card.text_right = box.x + box.w - 1;
    card.bottom = box.y + box.h - 1;
    card.native_frame = card.whole_frame = card.widget_frame = true;
    card.widget_top_layer = widget->top_layer;
    card.occlusions = widget->occlusions;
    int body_begin = box.y + box.h, body_end = box.y;
    int body_left = box.x + box.w, text_left = body_left;
    // These rows contain addst submissions only. A graphical frame does not
    // reserve a character row/column: the native compact branch draws its
    // first body line at bounds.y, whereas the padded branch uses y + 1.
    for (int y = box.y; y < box.y + box.h; ++y) {
        const auto &row = widget->rows[static_cast<size_t>(y - box.y)];
        const size_t first = row.find_first_not_of(' ');
        if (first == std::string::npos) continue;
        const int left = box.x + static_cast<int>(first);
        const int end = box.x + static_cast<int>(row.find_last_not_of(' ')) + 1;
        text_left = std::min(text_left, left);
        card.text_right = std::max(card.text_right, end);
        const auto line = trim_view(std::string_view(row).substr(first));
        if (!widget->workshop_recipe && line.starts_with("Hotkey:")) {
            if (card.key_rows.empty()) card.keys_y = y;
            card.key_rows.push_back(y);
        } else if (card.key_rows.empty()) {
            body_begin = std::min(body_begin, y);
            body_end = y + 1;
            body_left = std::min(body_left, left);
        }
    }
    card.text_x = text_left;
    card.body_x = body_left < box.x + box.w ? body_left : text_left;
    card.text_y = body_begin < body_end ? body_begin : card.keys_y;
    for (int y = body_begin; y < body_end; ++y) {
        std::string line = widget->rows[y - box.y].substr(
            static_cast<size_t>(card.body_x - box.x),
            static_cast<size_t>(card.text_right - card.body_x));
        const size_t end = line.find_last_not_of(' ');
        line.resize(end == std::string::npos ? 0 : end + 1);
        if (!card.rows.empty()) card.source += '\n';
        card.source += line;
        card.rows.push_back(std::move(line));
    }
    if (!widget->body_source.empty()) card.source = widget->body_source;
    // Geometry capture retains the whole source, including clipped rows.
    // Only the tooltip's Present pass resolves its text and visible output.
    if (!trim_view(card.source).empty() || !card.key_rows.empty())
        g_native_toolbar_tooltip = std::move(card);
}

std::optional<SDL_Rect> Overlay::native_toolbar_tooltip_frame() const {
    if (!gps_ || !g_native_toolbar_tooltip || !g_native_toolbar_tooltip->widget_frame)
        return std::nullopt;
    const auto &card = *g_native_toolbar_tooltip;
    return SDL_Rect{card.left, card.top,
        card.right - card.left + 1, card.bottom - card.top + 1};
}

void Overlay::append_toolbar_tooltip_matches(const NativeTooltipWidgetFrame &frame,
        std::vector<Match> &matches, bool preserve_body) const {
    if (!frame.isolated || !gps_ || frame.grid_identity != gps_->screen) return;
    g_native_tooltip_widget_frame = frame;
    g_native_toolbar_tooltip.reset();
    capture_toolbar_tooltip();
    if (!g_native_toolbar_tooltip) return;
    auto &card = *g_native_toolbar_tooltip;
    if (!preserve_body && !frame.workshop_recipe) translate_deity_tooltip_fields(card);
    const bool deity_card = card.deity_fields.size() == card.rows.size() &&
        !card.deity_fields.empty();
    const auto translated = preserve_body || deity_card || trim_view(card.source).empty()
        ? dfcn::TranslationResult{} : frame.workshop_recipe
            ? translate_workshop_tooltip_document(frame) : translate_toolbar_tooltip_result(card.source);
    const std::string target = preserve_body || deity_card || trim_view(card.source).empty()
        ? std::string{} : frame.workshop_recipe ? translated.target : tooltip_translation_cache_target_;
    const auto result = deity_card ? std::shared_ptr<const dfcn::TranslationResult>{} :
        std::make_shared<const dfcn::TranslationResult>(translated);
    const auto source_cell = [&](int x, int y, unsigned char expected) {
        return native_tooltip_source_cell(*gps_, x, y, expected);
    };
    bool owner = true;
    if (!target.empty() || deity_card)
        for (size_t line = 0; line < card.rows.size(); ++line) {
            const auto &source = card.rows[line];
            if (trim_view(source).empty()) continue;
            const int y = card.text_y + static_cast<int>(line);
            Match match{card.body_x, y, static_cast<int>(source.size()),
                kToolbarTooltipBodyRule, deity_card ? card.deity_fields[line].target :
                    owner ? target : std::string{}, source};
            owner = false;
            match.translation_result = result;
            match.layout_x = card.text_x;
            match.layout_length = card.text_right - card.text_x;
            match.layout_left = true;
            for (size_t at = 0; at < source.size(); ++at) {
                if (source[at] == ' ') continue;
                if (const auto *cell = source_cell(card.body_x + static_cast<int>(at),
                        y, static_cast<unsigned char>(source[at]))) {
                    match.layout_foreground_rgb = (cell[1] << 16) | (cell[2] << 8) | cell[3];
                    break;
                }
            }
            if (deity_card) {
                match.layout_y = y;
                match.layout_pixel_y = card.deity_fields[line].pixel_y;
                match.layout_fixed_baseline = true;
            }
            matches.push_back(std::move(match));
        }

    // Key parsing is local to the actual card rows; native colors remain
    // attached to each submitted label/key, including mixed output planes.
    const auto prefix = capture_translations_.find("Hotkey: ");
    if (prefix == capture_translations_.end()) return;
    for (const int y : card.key_rows) {
        const auto &row = frame.rows[static_cast<size_t>(y - frame.bounds.y)];
        for (size_t at = row.find("Hotkey:");
                at != std::string::npos && at + 7 < static_cast<size_t>(frame.bounds.w);) {
            const size_t next = row.find("Hotkey:", at + 7);
            const auto field = native_hotkey_source(row, at);
            if (!field || at + field->size() > static_cast<size_t>(frame.bounds.w)) {
                at = next;
                continue;
            }
            const auto key = trim_view(std::string_view(*field).substr(7));
            if (!is_keybinding_code(key)) { at = next; continue; }
            Match match{frame.bounds.x + static_cast<int>(at), y, static_cast<int>(field->size()),
                kToolbarTooltipKeyRule, prefix->second + display_keybinding_code(key), *field};
            const auto color = [&](size_t x) {
                const auto *cell = source_cell(frame.bounds.x + static_cast<int>(x), y,
                    static_cast<unsigned char>(row[x]));
                return cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : 0xffffff;
            };
            size_t key_at = at + 7;
            while (key_at < at + field->size() && row[key_at] == ' ') ++key_at;
            std::vector<uint32_t> label_cps, all_cps;
            decode_utf8(prefix->second, label_cps);
            decode_utf8(match.target, all_cps);
            match.layout_glyph_foreground_rgb.assign(all_cps.size(), color(key_at));
            std::fill_n(match.layout_glyph_foreground_rgb.begin(),
                std::min(label_cps.size(), all_cps.size()), color(at));
            matches.push_back(std::move(match));
            at = next;
        }
    }
}

void Overlay::layout_toolbar_tooltip(SDL_Renderer *renderer) {
    if (!g_native_toolbar_tooltip || !renderer || !face_ ||
        gps_->tile_pixel_x <= 0 || gps_->tile_pixel_y <= 0) return;
    const auto &card = *g_native_toolbar_tooltip;
    if (!card.deity_fields.empty()) {
        const int left = card.left + 1;
        const int tile_w = gps_->tile_pixel_x, tile_h = gps_->tile_pixel_y;
        const int origin_x = (gps_->screen_pixel_x - gps_->dimx * tile_w) / 2;
        const int origin_y = (gps_->screen_pixel_y - gps_->dimy * tile_h) / 2;
        for (Match &match : prepared_matches_) {
            if (match.rule != kToolbarTooltipBodyRule || match.native_adventure_hover_paint) continue;
            match.layout_x = left;
            match.layout_length = card.text_right - left;
            match.layout_y = match.y;
            match.layout_box_pixel_x = -1;
            match.layout_box_pixel_width = 0;
            match.layout_left = true;
            match.layout_right = false;
            match.layout_clip_right = card.text_right;
            match.layout_native_clip = SDL_Rect{origin_x + left * tile_w,
                origin_y + (card.top + 1) * tile_h,
                (card.text_right - left) * tile_w, (card.bottom - card.top - 1) * tile_h};
            match.layout_fixed_baseline = true;
            match.layout_prepared = true;
            match.layout_line_height_pixels = native_text_row_height(gps_);
            match.native_split_text = match.native_split_duplicate = false;
            match.native_split_top_y = -1;
        }
        return;
    }
    std::vector<size_t> body, keys;
    std::string target;
    for (size_t i = 0; i < prepared_matches_.size(); ++i) {
        const Match &match = prepared_matches_[i];
        if (match.native_adventure_hover_paint) continue;
        if (match.rule == kToolbarTooltipBodyRule) {
            body.push_back(i);
            target += match.target;
        } else if (match.rule == kToolbarTooltipKeyRule) keys.push_back(i);
    }
    if (body.empty() || target.empty()) return;
    std::sort(keys.begin(), keys.end(), [&](size_t a, size_t b) {
        if (prepared_matches_[a].y != prepared_matches_[b].y)
            return prepared_matches_[a].y < prepared_matches_[b].y;
        return prepared_matches_[a].x < prepared_matches_[b].x;
    });
    const int tile_h = gps_->tile_pixel_y, tile_w = gps_->tile_pixel_x;
    const int padding = config_.horizontal_padding;
    // The game owns the component's position, background and border. Translate
    // within its text area; source cell colors do not describe the native skin.
    const int width = (card.text_right - card.text_x) * tile_w - 2 * padding;
    const bool native_gap = !card.key_rows.empty() &&
        card.text_y + static_cast<int>(card.rows.size()) < card.keys_y;
    const int bottom = !card.key_rows.empty() ? card.keys_y - (native_gap ? 1 : 0) : card.bottom;
    const int available_rows = bottom - card.text_y;
    if (width <= 0 || available_rows <= 0) return;
    const int nominal_pixels = unified_font_pixels();
    std::string cache_key;
    const auto key_number = [&](auto number) {
        cache_key += std::to_string(number);
        cache_key += ';';
    };
    const auto key_text = [&](const std::string &text) {
        key_number(text.size());
        cache_key += text;
        cache_key += ';';
    };
    key_text(target);
    key_number(reinterpret_cast<uintptr_t>(face_));
    key_text(active_font_path_);
    key_number(active_font_index_);
    key_number(width);
    key_number(tile_h);
    key_number(available_rows);
    key_number(nominal_pixels);
    key_number(gps_->screen_pixel_x);
    key_number(gps_->screen_pixel_y);
    // Only relative key-row groups affect the shared layout. A moving card
    // keeps this layout while its current source spans and output positions
    // are still rebuilt below from the live native frame.
    int key_group = -1, previous_key_y = -1;
    for (size_t index : keys) {
        const Match &key = prepared_matches_[index];
        if (key_group < 0 || key.y != previous_key_y) ++key_group;
        previous_key_y = key.y;
        key_number(key_group);
        key_text(key.target);
    }
    std::vector<std::string> lines;
    std::vector<int> key_widths;
    const int pixels = nominal_pixels;
    if (cache_key == tooltip_layout_cache_key_ && tooltip_layout_cache_pixels_ > 0) {
        lines = tooltip_layout_cache_lines_;
        key_widths = tooltip_layout_cache_key_widths_;
    } else {
        std::vector<uint32_t> cps;
        if (!decode_utf8(target, cps)) return;
        std::vector<std::vector<uint32_t>> key_cps(keys.size());
        for (size_t i = 0; i < keys.size(); ++i)
            if (!decode_utf8(prepared_matches_[keys[i]].target, key_cps[i])) return;
        const auto nonstarter = [](uint32_t cp) {
            const std::u32string_view punctuation = U"。，、！？；：）］｝》」』】…,.!?;:)]}%";
            return punctuation.find(static_cast<char32_t>(cp)) != std::u32string_view::npos;
        };
        const auto opener = [](uint32_t cp) {
            const std::u32string_view punctuation = U"（［｛《「『【([{“‘";
            return punctuation.find(static_cast<char32_t>(cp)) != std::u32string_view::npos;
        };
        const auto word = [](uint32_t cp) {
            return cp < 128 && ascii_word_byte(static_cast<unsigned char>(cp));
        };
        // Keep the shared UI size and wrap at the native component's margin.
        {
            lines.clear();
            key_widths.clear();
            if (!sync_font_pixel_size()) return;
            // Wrapping needs measurements, not a texture for every growing
            // prefix. Use the same hinted bitmap bounds and advances as
            // rasterize(), loading each distinct glyph once at this size.
            // Only the completed output lines enter the shared texture cache.
            struct GlyphMetrics {
                FT_UInt index = 0;
                int advance = 0;
                int left = 0, right = 0;
                bool ink = false;
            };
            struct LineMetrics {
                int pen = 0;
                int left = INT32_MAX, right = INT32_MIN;
                FT_UInt previous = 0;
                bool has_ink() const { return left != INT32_MAX; }
                int width() const {
                    return has_ink()
                        ? std::max(std::max(pen, 1), right) - std::min(0, left) + 2 : 0;
                }
            };
            std::unordered_map<uint32_t, GlyphMetrics> glyphs;
            const bool kerning = config_.font_pixel_grid == 0 && FT_HAS_KERNING(face_);
            const auto append_metrics = [&](LineMetrics &line, uint32_t cp) {
                auto found = glyphs.find(cp);
                if (found == glyphs.end()) {
                    GlyphMetrics glyph;
                    glyph.index = FT_Get_Char_Index(face_, cp);
                    if (native_load_font_glyph(face_, glyph.index, config_.font_bold) != 0) return false;
                    glyph.advance = static_cast<int>(face_->glyph->advance.x >> 6);
                    if (FT_Render_Glyph(face_->glyph, FT_RENDER_MODE_NORMAL) != 0) return false;
                    const FT_Bitmap &bitmap = face_->glyph->bitmap;
                    if (bitmap.width > 0 && bitmap.rows > 0) {
                        glyph.ink = true;
                        glyph.left = face_->glyph->bitmap_left;
                        glyph.right = glyph.left + static_cast<int>(bitmap.width);
                    }
                    found = glyphs.emplace(cp, glyph).first;
                }
                const GlyphMetrics &glyph = found->second;
                if (kerning && line.previous && glyph.index) {
                    FT_Vector delta{};
                    FT_Get_Kerning(face_, line.previous, glyph.index, FT_KERNING_DEFAULT, &delta);
                    line.pen += static_cast<int>(delta.x >> 6);
                }
                if (glyph.ink) {
                    line.left = std::min(line.left, line.pen + glyph.left);
                    line.right = std::max(line.right, line.pen + glyph.right);
                }
                line.pen += glyph.advance;
                line.previous = glyph.index;
                return true;
            };
            bool fits = true;
            for (size_t begin = 0; begin < cps.size();) {
                while (begin < cps.size() && cps[begin] == ' ') ++begin;
                if (begin == cps.size()) break;
                std::string line;
                size_t end = begin, last_break = begin;
                LineMetrics candidate;
                for (; end < cps.size(); ++end) {
                    if (cps[end] == '\n') break;
                    if (!append_metrics(candidate, cps[end]) || !candidate.has_ink()) {
                        fits = false;
                        break;
                    }
                    // Only horizontal overflow creates a wrapping opportunity.
                    // A comma's descender can make the combined ink one pixel
                    // taller without using up the line's width. Treating that
                    // as a break leaves a tiny first line and moves the preceding
                    // Han character too, because punctuation cannot start a row.
                    if (candidate.width() > width) {
                        if (end == begin) ++end;
                        break;
                    }
                    if (end + 1 == cps.size() || (!nonstarter(cps[end + 1]) &&
                        !opener(cps[end]) && !(word(cps[end]) && word(cps[end + 1]))))
                        last_break = end + 1;
                }
                if (!fits) break;
                if (end == begin && cps[begin] != '\n') { fits = false; break; }
                if (end < cps.size() && cps[end] != '\n' && last_break > begin) end = last_break;
                line.clear();
                for (size_t i = begin; i < end; ++i) append_utf8_codepoint(line, cps[i]);
                line = trim(std::move(line));
                lines.push_back(std::move(line));
                begin = end < cps.size() && cps[end] == '\n' ? end + 1 : end;
            }
            if (!fits) return;
            for (size_t i = 0; i < keys.size(); ++i) {
                LineMetrics measured;
                for (uint32_t cp : key_cps[i])
                    if (!append_metrics(measured, cp)) { fits = false; break; }
                if (!fits || !measured.has_ink()) {
                    fits = false;
                    break;
                }
                key_widths.push_back(measured.width());
            }
            if (!fits) return;
        }
        tooltip_layout_cache_key_ = std::move(cache_key);
        tooltip_layout_cache_lines_ = lines;
        tooltip_layout_cache_key_widths_ = key_widths;
        tooltip_layout_cache_pixels_ = pixels;
    }
    const int line_height = native_text_row_height(gps_);
    const int origin_x = (gps_->screen_pixel_x - gps_->dimx * tile_w) / 2;
    const int origin_y = (gps_->screen_pixel_y - gps_->dimy * tile_h) / 2;
    const int box_width = width + 2 * padding;
    const int box_x = origin_x + card.text_x * tile_w;
    const auto apply_font = [&](Match &match) {
        match.native_split_text = match.native_split_duplicate = false;
        match.native_split_top_y = -1;
        match.layout_y = card.text_y;
        match.layout_pixel_y = 0;
        match.layout_x = card.text_x;
        match.layout_length = (box_width + tile_w - 1) / tile_w;
        match.layout_box_pixel_x = box_x;
        match.layout_box_pixel_width = box_width;
        match.layout_clip_right = -1;
        match.layout_native_clip = SDL_Rect{box_x, origin_y + card.text_y * tile_h,
            box_width, available_rows * tile_h};
        match.layout_left = true;
        match.layout_prepared = true;
        match.layout_line_height_pixels = line_height;
    };
    // Source spans only own native glyph suppression. Output rows can use any of the
    // widget's available lines, including rows with deliberately empty TSV
    // targets; they never inherit the English line's length or center.
    Match output = prepared_matches_[body.front()];
    output.graphical_clear_width = output.graphical_clear_height = 0;
    bool top = false;
    const size_t ink = output.source.find_first_not_of(' ');
    const int ink_x = output.x + (ink == std::string::npos ? 0 : static_cast<int>(ink));
    const auto *cell = card.widget_frame ? native_tooltip_source_cell(*gps_, ink_x, output.y,
        ink == std::string::npos ? 0 : static_cast<unsigned char>(output.source[ink]))
        : cell_at(ink_x, output.y, &top);
    if (cell && output.layout_foreground_rgb < 0) {
        output.layout_foreground_rgb = (cell[1] << 16) | (cell[2] << 8) | cell[3];
    }
    if (output.layout_foreground_rgb < 0)
        for (size_t index : body)
            if (prepared_matches_[index].layout_foreground_rgb >= 0) {
                output.layout_foreground_rgb = prepared_matches_[index].layout_foreground_rgb;
                break;
            }
    for (size_t index : body) {
        prepared_matches_[index].target.clear();
        apply_font(prepared_matches_[index]);
    }
    for (size_t i = 0; i < lines.size(); ++i) {
        Match line = output;
        line.length = 0;
        line.source.clear();
        line.target = std::move(lines[i]);
        apply_font(line);
        line.layout_pixel_y += static_cast<int>(i) * line_height;
        prepared_matches_.push_back(std::move(line));
    }
    int offset = 0, key_y = -1;
    for (size_t i = 0; i < keys.size(); ++i) {
        Match &key = prepared_matches_[keys[i]];
        if (key_y != key.y) { offset = 0; key_y = key.y; }
        apply_font(key);
        key.layout_y = key.y;
        key.layout_native_clip = SDL_Rect{box_x, origin_y + key.y * tile_h,
            box_width, std::max(0, card.bottom - key.y) * tile_h};
        key.layout_box_pixel_x = box_x + offset;
        key.layout_box_pixel_width = std::max(1,
            std::min(key_widths[i] + 2 * padding, box_width - offset));
        offset += key_widths[i] + pixels;
    }
}
