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
    const int body_x = card.body_x >= 0 ? card.body_x : card.text_x;
    const auto text_half = [&](size_t line) {
        const int y = card.text_y + static_cast<int>(line);
        uint32_t half = UINT32_MAX;
        for (size_t at = 0; at < card.rows[line].size(); ++at) {
            if (card.rows[line][at] == ' ') continue;
            const int x = body_x + static_cast<int>(at);
            if (x < 0 || x >= gps_->dimx || y < 0 || y >= gps_->dimy) return UINT32_MAX;
            bool top = card.widget_top_layer;
            const auto *grid = top ? gps_->screen_top : gps_->screen;
            const auto *cell = card.widget_frame ? (grid ? grid +
                (static_cast<size_t>(x) * gps_->dimy + y) * 8 : nullptr) : cell_at(x, y, &top);
            if (!cell || cell[0] != static_cast<unsigned char>(card.rows[line][at])) return UINT32_MAX;
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

std::optional<NativeToolbarTooltip> Overlay::find_toolbar_tooltip(
        const std::vector<std::string> &rows) const {
    if (!gps_ || gps_->dimx <= 0 || gps_->dimy <= 0 ||
        rows.size() < static_cast<size_t>(gps_->dimy) ||
        std::any_of(rows.begin(), rows.begin() + gps_->dimy, [&](const std::string &row) {
            return row.size() < static_cast<size_t>(gps_->dimx);
        })) return std::nullopt;
    const NativePanelBorders borders(*gps_);
    const auto border = [&](int x, int y, int part) {
        if (y < 0 || y >= static_cast<int>(rows.size()) ||
            x < 0 || x >= static_cast<int>(rows[y].size())) return false;
        // Snapshot recovery passes its own source grid; retain those ASCII
        // borders while sharing the current graphical skin recognition.
        return borders.at(x, y, part, std::string_view(rows[y]));
    };
    constexpr uint32_t top_half = 1u << 3, bottom_half = 1u << 4;
    const auto text_half = [&](int x, int y, int width) {
        if (y < 0 || y >= gps_->dimy) return UINT32_MAX;
        uint32_t half = UINT32_MAX;
        for (int column = x; column < x + width; ++column) {
            if (rows[y][column] == ' ') continue;
            bool top = false;
            const auto *cell = cell_at(column, y, &top);
            if (!cell || cell[0] != static_cast<unsigned char>(rows[y][column])) return UINT32_MAX;
            const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            const uint32_t current = flags
                ? flags[static_cast<size_t>(column) * gps_->dimy + y] & (top_half | bottom_half) : 0;
            if (current == (top_half | bottom_half) ||
                (half != UINT32_MAX && half != current)) return UINT32_MAX;
            half = current;
        }
        return half;
    };

    // The character editor uses the same native border skin as toolbar
    // cards, but the description is only one part of its hover document.
    // Recognize a complete closed frame from a unique interior caption before
    // catalog matching can capture just a sentence in the middle of the box.
    static constexpr std::array<std::string_view, 6> character_markers = {{
        "Affected by attributes:", "Affects skills:", "Affects no skills.",
        "Weapon skill.", "Crafting skill.", "Performance skill.",
    }};
    std::optional<NativeToolbarTooltip> character_card;
    for (int y = 1; y + 1 < gps_->dimy; ++y) {
        for (const auto marker : character_markers) {
            for (size_t at = rows[y].find(marker); at != std::string::npos;
                    at = rows[y].find(marker, at + marker.size())) {
                const auto interior = native_panel_interior(borders, *gps_,
                    static_cast<int>(at), static_cast<int>(at + marker.size()), y);
                if (!interior || trim_view(std::string_view(rows[y]).substr(
                        interior->x, interior->w)) != marker) continue;
                NativeToolbarTooltip card;
                card.left = interior->x - 1;
                card.top = interior->y - 1;
                card.right = card.text_right = interior->x + interior->w;
                card.bottom = interior->y + interior->h;
                card.text_y = interior->y;
                card.text_x = card.right;
                bool complete = true;
                for (int row = interior->y; row < card.bottom && complete; ++row) {
                    for (int x = interior->x; x < card.right; ++x) {
                        const auto ch = static_cast<unsigned char>(rows[row][x]);
                        if (ch < ' ' || ch >= 0x7f) { complete = false; break; }
                        if (ch != ' ') card.text_x = std::min(card.text_x, x);
                    }
                }
                if (!complete || card.text_x >= card.text_right) continue;
                card.body_x = card.text_x;
                card.native_frame = card.whole_frame = true;
                for (int row = interior->y; row < card.bottom; ++row) {
                    std::string line = rows[row].substr(card.body_x,
                        card.text_right - card.body_x);
                    const size_t last = line.find_last_not_of(' ');
                    line.resize(last == std::string::npos ? 0 : last + 1);
                    if (!card.rows.empty()) card.source += '\n';
                    card.source += line;
                    card.rows.push_back(std::move(line));
                }
                // A nested hover frame owns its own document, not the larger
                // underlying panel in which another marker might be visible.
                if (!character_card || (card.right - card.left) * (card.bottom - card.top) <
                        (character_card->right - character_card->left) *
                        (character_card->bottom - character_card->top))
                    character_card = std::move(card);
            }
        }
    }
    if (character_card) return character_card;

    // RAW-defined workshops use a legacy paragraph writer: its first row is
    // indented, while continuation rows and the shortcut start further left.
    // Recover the complete document inside its CURRENT closed frame before
    // trying the uniform-left-edge catalog matcher below. A source prefix or
    // translated screen-row fragment must never claim the whole description.
    for (int key_y = 1; key_y + 1 < gps_->dimy; ++key_y) {
        for (size_t key_x = rows[key_y].find("Hotkey:"); key_x != std::string::npos;
                key_x = rows[key_y].find("Hotkey:", key_x + 7)) {
            const auto field = native_hotkey_source(rows[key_y], key_x);
            if (!field) continue;
            const auto interior = native_panel_interior(borders, *gps_,
                static_cast<int>(key_x), static_cast<int>(key_x + field->size()), key_y);
            if (!interior) continue;
            NativeToolbarTooltip card;
            card.left = interior->x - 1;
            card.top = interior->y - 1;
            card.right = card.text_right = interior->x + interior->w;
            card.bottom = interior->y + interior->h;
            card.text_y = interior->y;
            card.body_x = card.text_right;
            card.text_x = static_cast<int>(key_x);
            card.native_frame = true;
            bool complete = true;
            int body_end = interior->y;
            for (int y = interior->y; y < card.bottom && complete; ++y) {
                const auto line = std::string_view(rows[y]).substr(interior->x, interior->w);
                if (std::any_of(line.begin(), line.end(), [](unsigned char ch) {
                        return ch < ' ' || ch >= 0x7f;
                    })) { complete = false; break; }
                const size_t first = line.find_first_not_of(' ');
                if (first == std::string_view::npos) continue;
                int x = interior->x + static_cast<int>(first);
                if (line.substr(first).starts_with("Hotkey:")) {
                    // Every nonblank field below the body must be a complete
                    // runtime binding, including adjacent keys and modifiers.
                    if (card.keys_y < 0) card.keys_y = y;
                    card.key_rows.push_back(y);
                    card.text_x = std::min(card.text_x, x);
                    while (x < card.text_right) {
                        const auto key = native_hotkey_source(rows[y], x);
                        if (!key || x + static_cast<int>(key->size()) > card.text_right) {
                            complete = false;
                            break;
                        }
                        x += static_cast<int>(key->size());
                        while (x < card.text_right && rows[y][x] == ' ') ++x;
                    }
                } else {
                    if (card.keys_y >= 0) { complete = false; break; }
                    if (body_end == interior->y) card.text_y = y;
                    body_end = y + 1;
                    card.body_x = std::min(card.body_x, x);
                }
            }
            if (!complete || card.keys_y != key_y || card.body_x >= card.text_right)
                continue;
            card.text_x = std::min(card.text_x, card.body_x);
            std::string identity;
            for (int y = card.text_y; y < body_end; ++y) {
                std::string line = rows[y].substr(card.body_x, card.text_right - card.body_x);
                const size_t last = line.find_last_not_of(' ');
                line.resize(last == std::string::npos ? 0 : last + 1);
                for (unsigned char ch : line)
                    if (!std::isspace(ch)) identity.push_back(ch);
                if (!card.rows.empty()) card.source += '\n';
                card.source += line;
                card.rows.push_back(std::move(line));
            }
            // Only a reviewed WHOLE tooltip authorizes source suppression.
            // Native row spans (including the indent) remain independent of
            // the shared Chinese margin and the number of translated lines.
            // Geometry still owns occlusion when translation is unavailable.
            // append_toolbar_tooltip_matches keeps unknown source visible.
            if (toolbar_translations_.contains(identity)) {
                card.whole_frame = true;
                return card;
            }
        }
    }

    // No-key hover cards (including dynamic weather) own their entire closed
    // frame. Read all sentences before choosing a translation, so a catalog
    // prefix cannot claim just the beginning of a longer native description.
    for (int top = 0; top + 2 < gps_->dimy; ++top) {
        for (int left = 0; left + 2 < gps_->dimx; ++left) {
            if (!border(left, top, 0)) continue;
            const auto interior = native_panel_interior(borders, *gps_,
                left + 1, left + 2, top + 1);
            if (!interior || interior->x != left + 1 || interior->y != top + 1) continue;
            NativeToolbarTooltip card;
            card.left = left;
            card.top = top;
            card.right = card.text_right = interior->x + interior->w;
            card.bottom = interior->y + interior->h;
            card.text_y = interior->y;
            card.body_x = card.text_x = card.right;
            bool intact = true;
            for (int y = interior->y; y < card.bottom && intact; ++y) {
                for (int x = interior->x; x < card.right; ++x) {
                    const auto ch = static_cast<unsigned char>(rows[y][x]);
                    if (ch < ' ' || (ch >= 0x7f && !is_cp437_latin_letter_byte(ch))) {
                        intact = false;
                        break;
                    }
                    if (ch != ' ') card.text_x = std::min(card.text_x, x);
                }
                if (std::string_view(rows[y]).substr(interior->x, interior->w).find("Hotkey:") !=
                        std::string_view::npos) intact = false;
            }
            if (!intact || card.text_x >= card.text_right) continue;
            card.body_x = card.text_x;
            for (int y = interior->y; y < card.bottom; ++y) {
                std::string line = rows[y].substr(card.body_x, card.text_right - card.body_x);
                const size_t last = line.find_last_not_of(' ');
                line.resize(last == std::string::npos ? 0 : last + 1);
                card.rows.push_back(std::move(line));
            }
            for (size_t line = 0; line < card.rows.size(); ++line) {
                const auto &source = card.rows[line];
                if (!source.empty()) {
                    const int y = card.text_y + static_cast<int>(line);
                    // Half-font flags describe rendering, not source identity.
                    // A complete ordinary tooltip can retain mixed or unpaired
                    // flags from the underlying UI. Only a verified duplicate
                    // pair consumes two physical rows as one logical line.
                    if (line + 1 < card.rows.size() && card.rows[line + 1] == source &&
                        text_half(card.body_x, y, static_cast<int>(source.size())) == top_half &&
                        text_half(card.body_x, y + 1, static_cast<int>(source.size())) == bottom_half) {
                        ++line; // Both physical spans remain in rows for suppression.
                    }
                }
                if (!card.source.empty()) card.source += '\n';
                card.source += source;
            }
            if (!intact || card.source.empty()) continue;
            if (translate_deity_tooltip_fields(card)) {
                card.native_frame = card.whole_frame = true;
                return card;
            }
            std::string identity;
            for (unsigned char ch : card.source)
                if (!std::isspace(ch)) identity.push_back(ch);
            bool catalog_source = false;
            for (const auto &[source, target] : toolbar_translations_) {
                (void)target;
                if (identity == source || (identity.starts_with(source) &&
                    source.find_last_of(".!?") == source.size() - 1)) {
                    catalog_source = true;
                    break;
                }
            }
            if (!catalog_source) {
                // A material sentence can precede another complete sentence.
                // Identify its full prefix here just as the coverage path does.
                for (size_t end = 1; end <= card.source.size() && !catalog_source; ++end) {
                    if (end != card.source.size() &&
                        std::string_view(".!?").find(card.source[end - 1]) == std::string_view::npos)
                        continue;
                    for (int index : toolbar_template_rules_) {
                        std::vector<std::string> captures;
                        std::vector<std::pair<size_t, size_t>> ranges;
                        if (match_catalog_template(rules_[static_cast<size_t>(index)],
                                std::string_view(card.source).substr(0, end), 0, captures, ranges)) {
                            catalog_source = true;
                            break;
                        }
                    }
                }
            }
            if (!catalog_source && card.source.find("instrument") != std::string::npos)
                catalog_source = translate_instrument_description(card.source, true).has_value();
            if (!catalog_source) {
                // Announcement flyouts are foreground owners too, but their
                // report rows belong to the announcement parser. Only native
                // help artwork or an actual Tooltip widget can reserve an
                // unknown whole card as untranslated tooltip prose.
                auto frames = native_help_overlay_frames(*gps_);
                if (const auto widget = captured_native_tooltip_widget(*gps_))
                    frames.push_back(widget->bounds);
                const bool hover_frame = std::any_of(frames.begin(), frames.end(),
                    [&](const SDL_Rect &frame) {
                        return frame.x == card.left && frame.y == card.top &&
                            frame.w == card.right - card.left + 1 &&
                            frame.h == card.bottom - card.top + 1;
                    });
                if (!hover_frame) continue;
            }
            card.native_frame = card.whole_frame = true;
            return card;
        }
    }

    // Recover EVERY reviewed description from the currently drawn source.
    // The catalog comes from all native initializer calls, including short
    // captions and no-hotkey buttons. Neither a startup capture cache nor an
    // eleven-sentence allowlist controls which buttons can be translated.
    const auto match_source = [&](const std::string &source, int x, int y)
            -> std::optional<NativeToolbarTooltip> {
        NativeToolbarTooltip card;
        card.body_x = card.text_x = x;
        card.text_y = y;
        card.left = std::max(0, x - 1);
        card.top = std::max(0, y - 1);
        card.source = source;
        int column = x, last = x, widest = 0;
        size_t at = 0;
        const auto finish_row = [&]() {
            if (last <= x) return false;
            const bool duplicate = y + 1 < gps_->dimy &&
                rows[y + 1].compare(x, last - x, rows[y], x, last - x) == 0 &&
                text_half(x, y, last - x) == top_half &&
                text_half(x, y + 1, last - x) == bottom_half;
            card.rows.push_back(rows[y].substr(x, last - x));
            if (duplicate) card.rows.push_back(rows[++y].substr(x, last - x));
            widest = std::max(widest, last - x);
            return true;
        };
        while (at < source.size()) {
            while (at < source.size() && source[at] == ' ') ++at;
            if (at == source.size()) break;
            if (y >= gps_->dimy) return std::nullopt;
            const int gap_start = column;
            while (column < gps_->dimx && rows[y][column] == ' ') ++column;
            const bool end = column >= gps_->dimx ||
                static_cast<unsigned char>(rows[y][column]) < ' ' ||
                static_cast<unsigned char>(rows[y][column]) >= 0x7f;
            // Two spaces can also be the game's sentence separator. Keep
            // them when the next complete word really belongs to this source;
            // otherwise they are padding before an unrelated native column.
            const auto next_word = std::string_view(source).substr(at,
                source.find(' ', at) == std::string::npos ? source.size() - at :
                    source.find(' ', at) - at);
            const bool wrap = end || (column - gap_start >= 2 &&
                rows[y].compare(column, next_word.size(), next_word) != 0);
            if (wrap) {
                if (!finish_row()) return std::nullopt;
                ++y;
                column = last = x;
                if (y >= gps_->dimy || rows[y][x] <= ' ' ||
                    static_cast<unsigned char>(rows[y][x]) >= 0x7f)
                    return std::nullopt;
                continue;
            }
            if (rows[y][column] != source[at]) return std::nullopt;
            ++at;
            last = ++column;
        }
        if (!finish_row()) return std::nullopt;
        // A complete sentence must not end in the middle of another word.
        if (column < gps_->dimx && rows[y][column] > ' ' &&
            static_cast<unsigned char>(rows[y][column]) < 0x7f) return std::nullopt;
        card.text_right = std::min(gps_->dimx - 1, x + std::max(24, widest));
        card.right = card.text_right;
        card.bottom = std::min(gps_->dimy - 1, y + 1);

        // Where available the live native frame supplies the actual wrap
        // width / height. Missing sprites never invalidate a complete source.
        for (int left = x - 1; left >= std::max(0, x - 4); --left) {
            if (!border(left, card.text_y, 3)) continue;
            int right = x + widest;
            while (right < gps_->dimx && !border(right, card.text_y, 5)) ++right;
            if (right >= gps_->dimx) continue;
            int bottom = y + 1;
            while (bottom < gps_->dimy && border(left, bottom, 3) &&
                   border(right, bottom, 5)) ++bottom;
            if (bottom >= gps_->dimy || !border(left, bottom, 6) ||
                !border(right, bottom, 8)) continue;
            card.left = left;
            card.right = card.text_right = right;
            card.bottom = bottom;
            card.native_frame = true;
            break;
        }

        // Shortcut fields are runtime values, not catalog text. Walk the
        // entire blank gap and every key row, preserving remapped bindings.
        // The old three-row search missed shorter prose in tall hover cards.
        for (int key_y = y + 1; key_y < gps_->dimy; ++key_y) {
            bool text = false, key_row = false;
            for (int key_x = std::max(0, x - 2); key_x <= std::min(gps_->dimx - 1, x + 2); ++key_x) {
                const auto field = native_hotkey_source(rows[key_y], key_x);
                if (!field) continue;
                if (card.keys_y < 0) card.keys_y = key_y;
                card.key_rows.push_back(key_y);
                card.text_x = std::min(card.text_x, key_x);
                size_t field_end = key_x + field->size();
                // Some buttons display two bindings on the same row. They
                // must both own their full source span even when the native
                // frame textures are unavailable in this renderer pass.
                for (;;) {
                    size_t next = field_end;
                    while (next < rows[key_y].size() && rows[key_y][next] == ' ') ++next;
                    const auto adjacent = native_hotkey_source(rows[key_y], next);
                    if (!adjacent) break;
                    field_end = next + adjacent->size();
                }
                card.text_right = std::max(card.text_right,
                    std::min(gps_->dimx - 1, static_cast<int>(field_end)));
                card.right = card.text_right;
                card.bottom = std::max(card.bottom, std::min(gps_->dimy - 1, key_y + 1));
                key_row = true;
                break;
            }
            for (int i = x; i < card.text_right; ++i)
                text |= rows[key_y][i] != ' ' || border(i, key_y, 7);
            if (text && !key_row) break;
            // A complete frame ends the card even if its cells contain spaces.
            if (key_y == card.bottom && border(card.left, key_y, 6)) break;
        }
        return card;
    };

    std::optional<NativeToolbarTooltip> best;
    for (int y = 0; y < gps_->dimy; ++y) {
        for (int x = 0; x < gps_->dimx; ++x) {
            if (rows[y][x] <= ' ' || static_cast<unsigned char>(rows[y][x]) >= 0x7f ||
                (x > 0 && rows[y][x - 1] != ' ' &&
                !is_cp437_box_separator(rows[y], x - 1))) continue;
            // Start from source bytes even when a stale half flag remains.
            // match_source folds only verified full-row duplicate pairs.
            int word_end = x;
            while (word_end < gps_->dimx && rows[y][word_end] > ' ' &&
                   static_cast<unsigned char>(rows[y][word_end]) < 0x7f) ++word_end;
            const auto candidates = toolbar_source_rules_.find(rows[y].substr(x, word_end - x));
            if (candidates == toolbar_source_rules_.end()) continue;
            for (int rule : candidates->second) {
                auto card = match_source(rules_[rule].source, x, y);
                if (!card) continue;
                // The short 'Set ... orders.' caption is also the prefix of
                // its explanatory version. Always take the complete longer
                // description when it is present, never erase just its head.
                const auto confidence = [](const NativeToolbarTooltip &candidate) {
                    return (candidate.keys_y >= 0 ? 2 : 0) + (candidate.native_frame ? 1 : 0);
                };
                if (!best || confidence(*card) > confidence(*best) ||
                    (confidence(*card) == confidence(*best) &&
                     card->source.size() > best->source.size())) best = std::move(card);
            }
        }
    }
    return best;
}

// A native producer submits its document before drawing. The private output
// pass uses this directly, without rediscovering a clipped card on the page.
bool Overlay::capture_toolbar_tooltip_document(const NativeTooltipWidgetFrame &frame) const {
    const auto &box = frame.bounds;
    if (box.w < 3 || box.h < 3 || frame.rows.size() != static_cast<size_t>(box.h)) return false;
    NativeToolbarTooltip card;
    card.left = box.x;
    card.top = box.y;
    card.right = card.text_right = box.x + box.w - 1;
    card.bottom = box.y + box.h - 1;
    card.text_x = box.x + 1;
    card.body_x = box.x + frame.paragraph_indent;
    card.text_y = box.y + 1;
    card.native_frame = card.whole_frame = card.widget_frame = true;
    card.widget_top_layer = frame.top_layer;
    card.occlusions = frame.occlusions;
    int body_end = card.text_y;
    if (frame.paragraph_rows >= 0) {
        // Row count, indent and shortcut position come from the hooked
        // paragraph renderer, independently of visibility or border pixels.
        body_end += frame.paragraph_rows;
        if (body_end > card.bottom || card.body_x >= card.text_right) return false;
        if (frame.shortcut_row > 0 && frame.shortcut_row < box.h - 1) {
            card.keys_y = box.y + frame.shortcut_row;
            card.key_rows.push_back(card.keys_y);
        }
    } else {
        for (int y = card.text_y; y < card.bottom; ++y) {
            const auto line = trim_view(std::string_view(frame.rows[y - box.y]).substr(1, box.w - 2));
            if (line.starts_with("Hotkey:")) {
                if (card.keys_y < 0) card.keys_y = y;
                card.key_rows.push_back(y);
            } else if (!line.empty() && card.keys_y < 0) body_end = y + 1;
        }
    }
    const int indent = card.body_x - box.x;
    for (int y = card.text_y; y < body_end; ++y) {
        std::string line = frame.rows[y - box.y].substr(indent, box.w - indent - 1);
        const size_t end = line.find_last_not_of(' ');
        line.resize(end == std::string::npos ? 0 : end + 1);
        if (!card.rows.empty()) card.source += '\n';
        card.source += line;
        card.rows.push_back(std::move(line));
    }
    if (!frame.body_source.empty()) card.source = frame.body_source;
    if (card.source.empty()) return false;
    translate_deity_tooltip_fields(card);
    g_native_toolbar_tooltip = std::move(card);
    return true;
}

// Shared-page fallback retains its current visibility/occlusion validation.
void Overlay::capture_toolbar_tooltip(
        const std::vector<std::string> &rows, bool raw_layer) const {
    if (!gps_ || NativeTooltipPageScope::active) return;
    if (!g_native_toolbar_tooltip || !g_native_toolbar_tooltip->widget_frame) {
        if (const auto widget = captured_native_tooltip_widget(*gps_))
            if (capture_toolbar_tooltip_document(*widget)) return;
        if (g_native_toolbar_tooltip) return;
        auto context = rows;
        if (raw_layer) {
            for (int y = 0; y < gps_->dimy; ++y)
                for (int x = 0; x < gps_->dimx; ++x) {
                    bool top = false;
                    const auto *cell = cell_at(x, y, &top);
                    context[y][x] = cell && cell[0] ? cell[0] : ' ';
                }
        }
        g_native_toolbar_tooltip = find_toolbar_tooltip(context);
    }
}

std::optional<SDL_Rect> Overlay::native_toolbar_tooltip_frame() const {
    if (!gps_ || !g_native_toolbar_tooltip || !g_native_toolbar_tooltip->native_frame)
        return std::nullopt;
    const auto &card = *g_native_toolbar_tooltip;
    if (card.widget_frame) return SDL_Rect{card.left, card.top,
        card.right - card.left + 1, card.bottom - card.top + 1};
    // Catalog matches may infer geometry. Only a currently closed foreground
    // frame, including all four corners, can excuse a hidden background edge.
    const NativePanelBorders borders(*gps_);
    const auto interior = native_panel_interior(borders, *gps_,
        card.text_x, card.text_x + 1, card.text_y);
    if (!interior || interior->x != card.left + 1 ||
        interior->y != card.top + 1 || interior->x + interior->w != card.right ||
        interior->y + interior->h != card.bottom) return std::nullopt;
    return SDL_Rect{card.left, card.top,
        card.right - card.left + 1, card.bottom - card.top + 1};
}

void Overlay::append_toolbar_tooltip_matches(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y, bool raw_layer) const {
    capture_toolbar_tooltip(rows, raw_layer);
    if (!g_native_toolbar_tooltip) return;
    const auto &card = *g_native_toolbar_tooltip;
    const int body_x = card.body_x >= 0 ? card.body_x : card.text_x;
    if (card.left < 0 || card.top < 0 || card.right >= gps_->dimx ||
        card.bottom >= gps_->dimy || card.text_x >= card.text_right) return;

    // Raw-layer recognition can precede the completed native draw. At Present the
    // complete rows must still be visible; a covering popup or new screen
    // cannot revive this card from a partial match. Raw suppression owns only
    // matching runs in its own layer and must also work during partial draws.
    // A whole character card additionally needs every row, including all
    // padding, to belong to the same raw layer. Coincident letters in the
    // underlying skill list must never be consumed as tooltip fragments.
    if (!raw_layer || card.whole_frame) {
        for (size_t line = 0; line < card.rows.size(); ++line) {
            const std::string &source = card.rows[line];
            const int y = card.text_y + static_cast<int>(line);
            const int length = std::min(static_cast<int>(source.size()),
                gps_->dimx - body_x);
            if (y >= card.bottom || y >= gps_->dimy ||
                rows[y].compare(body_x, length, source, 0, length) != 0) return;
            if (card.whole_frame) {
                for (int x = card.left + 1; x < body_x; ++x)
                    if (rows[y][x] != ' ') return;
                for (int x = body_x + length; x < card.text_right; ++x)
                    if (rows[y][x] != ' ') return;
            }
        }
    }
    const bool deity_card = card.deity_fields.size() == card.rows.size() &&
        !card.deity_fields.empty();
    const auto translated_card = deity_card ? dfcn::TranslationResult{} :
        translate_toolbar_tooltip_result(card.source);
    const std::string target = deity_card ? std::string{} : translate_toolbar_tooltip(card.source);
    const auto card_result = deity_card ? std::shared_ptr<const dfcn::TranslationResult>{} :
        std::make_shared<const dfcn::TranslationResult>(translated_card);
    if (target.empty() && !deity_card) {
        if (card.whole_frame) {
            // The complete original card was validated above. Hide it only
            // from subsequent word matching, without creating suppression or
            // clear matches: an untranslated card keeps all native glyphs.
            // A raw background that did not match the whole card returned
            // earlier and remains available for ordinary list translation.
            for (size_t at = 0; at < card.rows.size(); ++at) {
                const int y = card.text_y + static_cast<int>(at);
                if (y >= card.bottom || trim_view(card.rows[at]).empty()) continue;
                Match preserved{body_x, y, static_cast<int>(card.rows[at].size()),
                    kToolbarTooltipBodyRule, {}, card.rows[at]};
                preserved.native_help_source_only = true;
                preserved.translation_result = card_result;
                if (at == 0) preserved.native_help_review_source = card.source;
                if (only_y < 0 || only_y == y) matches.push_back(std::move(preserved));
            }
            for (int y = card.top + 1; y < card.bottom; ++y)
                std::fill(rows[y].begin() + card.left + 1,
                    rows[y].begin() + card.right, ' ');
        }
        return;
    }
    bool owner = true;
    for (size_t line = 0; line < card.rows.size(); ++line) {
        const std::string &source = card.rows[line];
        const int y = card.text_y + static_cast<int>(line);
        if (y < 0 || y >= card.bottom || y >= gps_->dimy) break;
        const int length = std::min(static_cast<int>(source.size()),
            gps_->dimx - body_x);
        int cursor = 0;
        while (cursor < length) {
            while (cursor < length && rows[y][body_x + cursor] != source[cursor]) ++cursor;
            const int begin = cursor;
            while (cursor < length && rows[y][body_x + cursor] == source[cursor]) ++cursor;
            if (begin == cursor) continue;
            Match match{body_x + begin, y, cursor - begin,
                kToolbarTooltipBodyRule, raw_layer ? std::string{}
                    : deity_card ? card.deity_fields[line].target
                    : owner ? target : std::string{},
                source.substr(begin, cursor - begin)};
            match.translation_result = card_result;
            owner = false;
            match.layout_x = card.text_x;
            match.layout_length = card.text_right - card.text_x;
            match.layout_left = true;
            if (deity_card) {
                match.layout_y = y;
                match.layout_pixel_y = card.deity_fields[line].pixel_y;
                match.layout_fixed_baseline = true;
                const size_t first = source.find_first_not_of(' ');
                bool top = card.widget_top_layer;
                const auto *grid = top ? gps_->screen_top : gps_->screen;
                const auto *cell = first == std::string::npos ? nullptr : card.widget_frame
                    ? (grid ? grid + (static_cast<size_t>(body_x + first) * gps_->dimy + y) * 8 : nullptr)
                    : cell_at(body_x + static_cast<int>(first), y, &top);
                if (cell) match.layout_foreground_rgb =
                    (cell[1] << 16) | (cell[2] << 8) | cell[3];
            }
            if (!raw_layer && card.whole_frame) {
                bool suppressed = true;
                for (int offset = 0; suppressed && offset < match.length; ++offset) {
                    const unsigned char ch = match.source[static_cast<size_t>(offset)];
                    if (ch <= ' ') continue;
                    const size_t tile = static_cast<size_t>(match.x + offset) * gps_->dimy + y;
                    bool top = false;
                    const auto *cell = cell_at(match.x + offset, y, &top);
                    const auto &mask = top ? immediate_suppress_top_ : immediate_suppress_base_;
                    const auto &epochs = top ? immediate_top_row_epoch_ : immediate_base_row_epoch_;
                    const bool hover = adventure_hover_suppress_epoch_ == composite_read_epoch_ &&
                        tile < adventure_hover_suppress_.size() && adventure_hover_suppress_[tile] == ch;
                    const bool immediate = static_cast<size_t>(y) < epochs.size() &&
                        epochs[y] == composite_read_epoch_ && tile < mask.size() && mask[tile] == ch;
                    suppressed = cell && cell[0] == ch && (hover || immediate);
                }
                // Only an exceptional partial draw without a complete native
                // mask needs pixel recovery; the normal hover path has none.
                if (!suppressed) {
                    match.graphical_clear_x = match.x;
                    match.graphical_clear_y = y;
                    match.graphical_clear_width = match.length;
                    match.graphical_clear_height = 1;
                }
            }
            std::fill_n(rows[y].begin() + match.x, match.length, ' ');
            if (only_y < 0 || only_y == y) matches.push_back(std::move(match));
        }
    }

    // Keys are independent native columns with independent colors. Reserve
    // the complete label/key field, then rasterize it as one rich-text line
    // so the green key and grey caption cannot acquire different baselines.
    const auto prefix = capture_translations_.find("Hotkey: ");
    if (prefix == capture_translations_.end() || card.keys_y < 0) return;
    const std::vector<int> key_rows = card.key_rows.empty()
        ? std::vector<int>{card.keys_y} : card.key_rows;
    for (const int y : key_rows) {
        if (y >= gps_->dimy || y >= card.bottom) continue;
        for (size_t at = rows[y].find("Hotkey:", card.text_x);
             at != std::string::npos && at < static_cast<size_t>(card.right);) {
            const size_t next = rows[y].find("Hotkey:", at + 7);
            const auto field = native_hotkey_source(rows[y], at);
            if (!field) { at = next; continue; }
            const std::string &source = *field;
            const size_t end = at + source.size();
            const auto key = trim_view(std::string_view(source).substr(7));
            if (!is_keybinding_code(key)) { at = next; continue; }
            Match match{static_cast<int>(at), y, static_cast<int>(end - at),
                kToolbarTooltipKeyRule, prefix->second + display_keybinding_code(key), source};
            const auto color = [&](int x) {
                bool top = false;
                const unsigned char *cell = card.widget_frame
                    ? (card.widget_top_layer ? gps_->screen_top : gps_->screen) +
                        (static_cast<size_t>(x) * gps_->dimy + y) * 8
                    : cell_at(x, y, &top);
                return cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : 0xffffff;
            };
            size_t key_at = at + 7;
            while (key_at < end && rows[y][key_at] == ' ') ++key_at;
            std::vector<uint32_t> label_cps, all_cps;
            decode_utf8(prefix->second, label_cps);
            decode_utf8(match.target, all_cps);
            match.layout_glyph_foreground_rgb.assign(all_cps.size(), color(key_at));
            std::fill_n(match.layout_glyph_foreground_rgb.begin(), label_cps.size(), color(at));
            std::fill_n(rows[y].begin() + at, end - at, ' ');
            if (only_y < 0 || only_y == y) matches.push_back(std::move(match));
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
            if (match.rule != kToolbarTooltipBodyRule) continue;
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
            match.layout_font_pixels = unified_font_pixels();
            match.layout_lock_font_pixels = true;
            match.layout_visual_height_pixels = 0;
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
    const bool native_gap = card.keys_y >= 0 &&
        card.text_y + static_cast<int>(card.rows.size()) < card.keys_y;
    const int bottom = card.keys_y >= 0 ? card.keys_y - (native_gap ? 1 : 0) : card.bottom;
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
            if (!set_font_pixel_size(pixels)) return;
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
        match.layout_font_pixels = pixels;
        match.layout_lock_font_pixels = true;
        match.layout_visual_height_pixels = 0;
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
    const auto widget = card.widget_frame ? captured_native_tooltip_widget(*gps_) : std::nullopt;
    const auto *cell = widget && widget->document
        ? widget->document->screen.data() + (static_cast<size_t>(ink_x) * gps_->dimy + output.y) * 8
        : card.widget_frame
        ? (card.widget_top_layer ? gps_->screen_top : gps_->screen) +
            (static_cast<size_t>(ink_x) * gps_->dimy + output.y) * 8
        : cell_at(ink_x, output.y, &top);
    if (cell) {
        output.layout_foreground_rgb = (cell[1] << 16) | (cell[2] << 8) | cell[3];
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
