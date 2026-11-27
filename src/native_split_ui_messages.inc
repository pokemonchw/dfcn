// Building detail sheets can reach the viewport bottom or step outward at
// their scroll gutter. Fixed building records use this fallback;
// ordinary panels continue to require a closed frame.
static std::optional<SDL_Rect> native_building_record_panel(
        const NativePanelBorders &borders, const graphicst &gps,
        const SDL_Rect &source) {
    if (const auto panel = native_panel_interior(borders, gps, source)) return panel;
    if (source.x <= 0 || source.y <= 0 || source.w <= 0 || source.h <= 0 ||
            source.x + source.w > gps.dimx || source.y + source.h > gps.dimy)
        return std::nullopt;
    int left = source.x - 1;
    while (left >= 0 && !borders.at(left, source.y, 3)) --left;
    if (left < 0) return std::nullopt;
    int top = source.y - 1;
    while (top >= 0 && borders.at(left, top, 3)) --top;
    if (top < 0 || !borders.at(left, top, 0)) return std::nullopt;
    int right = left + 1;
    while (right < gps.dimx && borders.at(right, top, 1)) ++right;
    if (right >= gps.dimx || !borders.at(right, top, 2) ||
            source.x + source.w > right) return std::nullopt;
    int bottom = source.y + 1;
    while (bottom < gps.dimy && borders.at(left, bottom, 3)) ++bottom;
    if (bottom < source.y + source.h) return std::nullopt;
    return SDL_Rect{left + 1, top + 1, right - left - 1, bottom - top - 1};
}

// Fixed native records draw their sentence fragments or person separately without
// add_paragraph, either on consecutive rows or side by side. Claim the complete
// record before generic item prose or formatter-owned identity rows consume it.
void Overlay::append_native_split_ui_messages(std::vector<std::string> &screen_rows,
        std::vector<Match> &result, int only_y,
        const unsigned char *screen_override) const {
    const auto &prefixes = ui_message_split_prefixes_;
    for (bool top_layer : {false, true}) {
        const auto *layer = top_layer ? gps_->screen_top : gps_->screen;
        if (!layer || (screen_override && screen_override != layer)) continue;
        const auto draws_snapshot = captured_native_drawn_text_snapshot(top_layer);
        const auto &draws = *draws_snapshot;
        std::map<std::pair<int, int>, const NativeDrawnTextRow *> positions;
        for (const auto &draw : draws) positions[{draw.x, draw.y}] = &draw;
        const auto current_draw = [&](const NativeDrawnTextRow &draw)
                -> std::optional<Match> {
            if (!draw.address || draw.x < 0 || draw.x >= gps_->dimx ||
                draw.y < 0 || draw.y >= gps_->dimy || draw.source.empty() ||
                draw.source.size() > static_cast<size_t>(gps_->dimx - draw.x) ||
                screen_rows[draw.y].compare(draw.x, draw.source.size(), draw.source) != 0)
                return std::nullopt;
            for (size_t offset = 0; offset < draw.source.size(); ++offset) {
                const int x = draw.x + static_cast<int>(offset);
                const unsigned char expected = static_cast<unsigned char>(draw.source[offset]);
                const size_t at = static_cast<size_t>(x) * gps_->dimy + draw.y;
                bool top = false;
                const auto *cell = cell_at(x, draw.y, &top);
                const unsigned char visible = cell && cell[0] ? cell[0] : ' ';
                const unsigned char drawn = layer[at * 8] ? layer[at * 8] : ' ';
                // Black spaces in screen_top are transparent. They can belong
                // to this draw only when the visible base is equally empty;
                // every non-space glyph must still own the exact drawn layer.
                const bool same_layer = top == top_layer || (expected == ' ' &&
                    native_item_row_layer_at(*gps_, x, draw.y, top_layer));
                if (!same_layer || drawn != expected || visible != expected ||
                    is_cp437_box_separator(screen_rows[draw.y], x)) return std::nullopt;
            }
            const auto text = trim_view(draw.source);
            if (text.empty()) return std::nullopt;
            return Match{draw.x + static_cast<int>(text.data() - draw.source.data()),
                draw.y, static_cast<int>(text.size()), kUiMessageRule, {}, std::string(text)};
        };
        const auto foregrounds = [&](const Match &row) {
            std::vector<int> colors;
            colors.reserve(static_cast<size_t>(row.length));
            for (int x = row.x; x < row.x + row.length; ++x) {
                const auto *cell = layer + (static_cast<size_t>(x) * gps_->dimy + row.y) * 8;
                colors.push_back((cell[1] << 16) | (cell[2] << 8) | cell[3]);
            }
            return colors;
        };
        // Furniture sheets issue three separate addst calls for a missing
        // room. Cages and chains use identical text at different call sites.
        const uintptr_t base = native_history_profile_base();
        using DrawSites = std::array<uintptr_t, 3>;
        using Lines = std::array<std::string_view, 3>;
        constexpr Lines burial{"You must designate a tomb", "before this coffin will",
            "be used for burial."};
        constexpr Lines imprisonment{"You must designate a dungeon", "before this restraint will",
            "be used for imprisonment."};
        struct Notice { DrawSites callers; const Lines &lines; };
        const Notice notices[] = {
#ifdef _WIN32
            {{native_pe_address(base, 0x194c4e), native_pe_address(base, 0x194ccd),
                native_pe_address(base, 0x194d4c)}, burial},
            {{native_pe_address(base, 0x18ef1f), native_pe_address(base, 0x18ef9e),
                native_pe_address(base, 0x18f01d)}, imprisonment},
            {{native_pe_address(base, 0x190c38), native_pe_address(base, 0x190cb7),
                native_pe_address(base, 0x190d36)}, imprisonment},
#else
            {{native_reference_address(base, 0x13e1654), native_reference_address(base, 0x13e16d9),
                native_reference_address(base, 0x13e1742)}, burial},
            {{native_reference_address(base, 0x13deb5d), native_reference_address(base, 0x13debe2),
                native_reference_address(base, 0x13dec4b)}, imprisonment},
            {{native_reference_address(base, 0x13e2675), native_reference_address(base, 0x13e26fa),
                native_reference_address(base, 0x13e2763)}, imprisonment},
#endif
        };
        for (const auto &first : draws) {
            if (!first.native_caller) continue;
            const auto notice = std::find_if(std::begin(notices), std::end(notices),
                [&](const Notice &n) { return first.native_caller == n.callers.front(); });
            if (notice == std::end(notices) || first.source != notice->lines.front()) continue;
            std::vector<Match> rows;
            std::string source;
            std::vector<int> source_colors;
            int source_right = first.x;
            for (size_t i = 0; i < notice->lines.size(); ++i) {
                const auto at = positions.find({first.x, first.y + static_cast<int>(i)});
                if (at == positions.end() || !notice->callers[i] ||
                        at->second->native_caller != notice->callers[i] ||
                        at->second->source != notice->lines[i]) break;
                const auto row = current_draw(*at->second);
                if (!row) break;
                if (!source.empty()) {
                    source.push_back(' ');
                    source_colors.push_back(source_colors.back());
                }
                source += row->source;
                const auto colors = foregrounds(*row);
                source_colors.insert(source_colors.end(), colors.begin(), colors.end());
                source_right = std::max(source_right, row->x + row->length);
                rows.push_back(*row);
            }
            if (rows.size() != notice->lines.size()) continue;
            std::vector<int> target_colors;
            const auto target = translate_help_paragraph(source, source_colors, target_colors, true);
            if (!target || target->empty()) continue;
            int right = source_right;
            const NativePanelBorders borders(*gps_);
            if (const auto panel = native_building_record_panel(borders, *gps_,
                    SDL_Rect{first.x, first.y, source_right - first.x, 3})) {
                right = std::max(source_right, panel->x + panel->w - (first.x - panel->x));
                for (const Match &row : rows) {
                    for (int x = row.x + row.length; x < right; ++x) {
                        const auto ch = visible_char_at(x, row.y);
                        if ((ch && ch != ' ') || native_foreground_picture_at(*gps_, x, row.y)) {
                            right = std::max(source_right, x);
                            break;
                        }
                    }
                }
            }
            append_bounded_paragraph(std::move(rows), *target, screen_rows, result,
                only_y, right, right, target_colors, false, first.x);
        }
        // The link modal's building names come from building::getName, not
        // from free-form UI capture slots. Its source installation sentence
        // uses two adjacent addst calls; own them together before individual
        // material/building words can acquire separate English-width layouts.
        // Both PE editions and the ELF retain these exact producer boundaries.
        const uintptr_t link_base = native_history_profile_base();
#ifdef _WIN32
        const uintptr_t link_prompt = native_pe_address(link_base, 0x14f4d4);
        const uintptr_t link_candidate = native_pe_address(link_base, 0x1506bd);
        const uintptr_t link_source_item = native_pe_address(link_base, 0x150bf5);
        const uintptr_t link_source_prefix = native_pe_address(link_base, 0x150c60);
        const uintptr_t link_source_name = native_pe_address(link_base, 0x150c89);
        const uintptr_t link_target_item = native_pe_address(link_base, 0x1511c1);
        const uintptr_t link_target_install = native_pe_address(link_base, 0x15122c);
#else
        const uintptr_t link_prompt = native_reference_address(link_base, 0x13c8a25);
        const uintptr_t link_candidate = native_reference_address(link_base, 0x13ce851);
        const uintptr_t link_source_item = native_reference_address(link_base, 0x13c94a8);
        const uintptr_t link_source_prefix = native_reference_address(link_base, 0x13c952b);
        const uintptr_t link_source_name = native_reference_address(link_base, 0x13c955e);
        const uintptr_t link_target_item = native_reference_address(link_base, 0x13c92ea);
        const uintptr_t link_target_install = native_reference_address(link_base, 0x13c937a);
#endif
        const auto link_template = [&](std::string_view key, std::string_view caption)
                -> std::optional<std::string> {
            auto target = exact_literal_translation(key);
            if (!target) return std::nullopt;
            const size_t slot = target->find("{s}");
            if (slot == std::string::npos || target->find("{s}", slot + 3) != std::string::npos)
                return std::nullopt;
            target->replace(slot, 3, caption);
            return target;
        };
        const auto link_building = [&](std::string_view source) {
            // An unknown name remains this producer's complete building
            // caption. It must never become a generated personal name.
            if (auto target = translate_info_panel_title(NativeInfoTitleKind::Building, source))
                return *target;
            return native_text_to_utf8(source);
        };
        for (const auto &draw : draws) {
            if (!link_base || !draw.native_caller) continue;
            const bool item = draw.native_caller == link_source_item ||
                draw.native_caller == link_target_item;
            if (!item && draw.native_caller != link_prompt &&
                    draw.native_caller != link_candidate &&
                    draw.native_caller != link_source_prefix &&
                    draw.native_caller != link_target_install) continue;
            auto row = current_draw(draw);
            if (!row) continue;
            const std::string_view source = draw.complete_source.empty()
                ? std::string_view(draw.source) : std::string_view(draw.complete_source);
            std::optional<std::string> target;
            std::optional<TranslationResult> item_translation;
            if (item) {
                item_translation = translate_fortress_item_caption_display(source);
                if (item_translation->usable()) target = item_translation->target;
            } else if (draw.native_caller == link_source_prefix) {
                if (source != "will be installed at ") continue;
                const auto name = positions.find({draw.x + static_cast<int>(draw.source.size()), draw.y});
                if (name == positions.end() || name->second->native_caller != link_source_name)
                    continue;
                const auto caption = current_draw(*name->second);
                if (!caption) continue;
                const auto &complete = name->second->complete_source;
                target = link_template("Building link installation: {s}", link_building(
                    complete.empty() ? std::string_view(name->second->source) : std::string_view(complete)));
                row->length = caption->x + caption->length - row->x;
                row->source = screen_rows[row->y].substr(row->x, row->length);
            } else if (draw.native_caller == link_target_install) {
                if (source != "will be installed at target") continue;
                target = exact_literal_translation("will be installed at target");
            } else {
                std::string_view prefix, suffix, key;
                if (draw.native_caller == link_prompt) {
                    prefix = "Click a building to link to ";
                    suffix = ".";
                    key = "Building link prompt: {s}";
                } else if (source.starts_with("Cannot link to ")) {
                    prefix = "Cannot link to ";
                    key = "Building link rejected: {s}";
                } else {
                    prefix = "Link to ";
                    key = "Building link candidate: {s}";
                }
                if (!source.starts_with(prefix) || !source.ends_with(suffix) ||
                        source.size() <= prefix.size() + suffix.size()) continue;
                target = link_template(key, link_building(source.substr(prefix.size(),
                    source.size() - prefix.size() - suffix.size())));
            }
            if (!target || target->empty()) continue;
            const int source_right = row->x + row->length;
            int right = source_right;
            const NativePanelBorders borders(*gps_);
            if (const auto panel = native_building_record_panel(borders, *gps_,
                    SDL_Rect{row->x, row->y, row->length, 1}))
                right = std::max(right, panel->x + panel->w - (row->x - panel->x));
            std::vector<uint32_t> codepoints;
            if (!decode_utf8(*target, codepoints)) continue;
            std::vector<int> colors(codepoints.size(), foregrounds(*row).front());
            const size_t first_match = result.size();
            if (append_bounded_paragraph({*row}, *target, screen_rows, result, only_y,
                    right, right, colors, false, row->x) && item_translation)
                attach_item_display_result(result, first_match, *item_translation);
        }
        const auto append_workshop_record = [&](std::vector<Match> rows,
                const NativeDrawnTextRow &person, int index, int left) {
            const Rule &rule = rules_[static_cast<size_t>(index)];
            std::string source;
            std::vector<int> source_colors;
            int source_right = left;
            for (const Match &row : rows) {
                if (!source.empty()) {
                    source.push_back(' ');
                    source_colors.push_back(source_colors.back());
                }
                source += row.source;
                const auto colors = foregrounds(row);
                source_colors.insert(source_colors.end(), colors.begin(), colors.end());
                source_right = std::max(source_right, row.x + row.length);
            }
            std::vector<int> target_colors;
            std::optional<std::string> target;
            if (person.unit_identity_target && !person.unit_identity_target->empty()) {
                const std::vector<std::string> captures{std::string(trim_view(person.source))};
                const std::vector<std::optional<std::string>> resolved{person.unit_identity_target};
                target = fill_template(rule, captures, nullptr, nullptr, &resolved);
                const auto color_text = [&](std::string_view text, int color) {
                    std::vector<uint32_t> codepoints;
                    if (decode_utf8(std::string(text), codepoints))
                        target_colors.insert(target_colors.end(), codepoints.size(), color);
                };
                const auto *cell = layer +
                    (static_cast<size_t>(person.x) * gps_->dimy + person.y) * 8;
                const int person_color = (cell[1] << 16) | (cell[2] << 8) | cell[3];
                color_text(rule.target_template_literals.front(), source_colors.front());
                color_text(*person.unit_identity_target, person_color);
                color_text(rule.target_template_literals.back(), source_colors.back());
            } else {
                target = translate_help_paragraph(source, source_colors, target_colors, true, index);
            }
            if (!target || target->empty()) return false;
            const NativePanelBorders borders(*gps_);
            const SDL_Rect source_box{left, rows.front().y,
                source_right - left, rows.back().y - rows.front().y + 1};
            const auto panel = native_building_record_panel(borders, *gps_, source_box);
            int right = source_right;
            if (panel)
                right = std::max(source_right, panel->x + panel->w - (left - panel->x));
            return append_bounded_paragraph(std::move(rows), *target,
                screen_rows, result, only_y, right, right, target_colors, false, left);
        };
        // The complete decompiled mood producer has five working branches
        // and four waiting branches. Its addst calls split names, quotes,
        // material hints and punctuation, with metal sketches and corpse
        // brooding using an extra row. Own each complete production before
        // generic words or identities can claim one of those fragments.
        const auto append_workshop_mood = [&](const NativeDrawnTextRow &first) {
            const auto at = [&](int x, int y) -> const NativeDrawnTextRow * {
                const auto found = positions.find({x, y});
                return found == positions.end() ? nullptr : found->second;
            };
            struct MoodStatus {
                std::string_view source;
                uintptr_t writer = 0;
            };
            std::array<MoodStatus, 5> working{{
                {"works furiously!"}, {"works secretly..."}, {"keeps muttering"},
                {"works, darkly brooding..."}, {"works with menacing fury!"}}};
            std::array<MoodStatus, 4> waiting{{
                {"screams"}, {"sketches"}, {"mutters"}, {"broods"}}};
            uintptr_t working_person = 0, waiting_person = 0;
#ifdef _WIN32
            const uintptr_t base = native_history_profile_base();
            if (!base) return false;
            // Return addresses of the original addst calls; the native PE
            // profile maps these same producers for Steam and Classic.
            working_person = native_pe_address(base, 0x181f40);
            waiting_person = native_pe_address(base, 0x182631);
            working[0].writer = native_pe_address(base, 0x181ff3);
            working[1].writer = native_pe_address(base, 0x182171);
            working[2].writer = native_pe_address(base, 0x182061);
            working[3].writer = native_pe_address(base, 0x1821df);
            working[4].writer = native_pe_address(base, 0x18224a);
            waiting[0].writer = native_pe_address(base, 0x1829a1);
            waiting[1].writer = native_pe_address(base, 0x183118);
            waiting[2].writer = native_pe_address(base, 0x182b48);
            waiting[3].writer = native_pe_address(base, 0x1826ed);
#endif
            const auto owned_by = [](const NativeDrawnTextRow &draw, uintptr_t writer) {
#ifdef _WIN32
                return writer && draw.native_caller == writer;
#else
                return !writer || draw.native_caller == writer;
#endif
            };
            const NativeDrawnTextRow *person = at(first.x, first.y + 5);
            const NativeDrawnTextRow *status = person ? at(person->x +
                static_cast<int>(person->source.size()) + 1, person->y) : nullptr;
            bool is_working = false;
            const MoodStatus *branch = nullptr;
            if (person && status && owned_by(*person, waiting_person))
                for (const auto &candidate : waiting)
                    if (trim_view(status->source) == candidate.source &&
                            owned_by(*status, candidate.writer)) branch = &candidate;
            if (!branch) {
                person = at(first.x + 2, first.y + 5);
                status = at(first.x, first.y + 6);
                if (person && status && owned_by(*person, working_person))
                    for (const auto &candidate : working)
                        if (trim_view(status->source) == candidate.source &&
                                owned_by(*status, candidate.writer)) branch = &candidate;
                is_working = true;
            }
            if (!branch) return false;

            std::vector<Match> rows;
            const auto append_draw = [&](const NativeDrawnTextRow *draw) {
                if (!draw) return false;
                auto part = current_draw(*draw);
                if (!part) return false;
                if (!rows.empty() && rows.back().y == part->y) {
                    auto &row = rows.back();
                    const int end = row.x + row.length;
                    if (part->x < end || !trim_view(std::string_view(screen_rows[row.y])
                            .substr(end, part->x - end)).empty()) return false;
                    row.length = part->x + part->length - row.x;
                    row.source = screen_rows[row.y].substr(row.x, row.length);
                } else {
                    if (!rows.empty() && part->y != rows.back().y + 1) return false;
                    rows.push_back(std::move(*part));
                }
                return true;
            };
            const auto append_literal = [&](int x, int y, std::string_view source) {
                const auto *draw = at(x, y);
                return draw && draw->source == source && append_draw(draw);
            };
            if (!append_draw(person) || !append_draw(status)) return false;
            if (!is_working && screen_rows[person->y][person->x + person->source.size()] != ' ')
                return false;
            int rule_index = -1;
            for (int probe_index : ui_message_anchors_.candidates(
                    compact_ui_message_literal(status->source))) {
                const auto &probe = ui_message_template_probes_[probe_index];
                if (rules_[static_cast<size_t>(probe.index)].source ==
                        "{n} " + std::string(branch->source)) {
                    rule_index = probe.index;
                    break;
                }
            }
            if (rule_index < 0) return false;
            auto unit = person->unit_identity_target;
            if (!unit || unit->empty()) unit = translate_ui_message_capture(person->source, true);
            if (!unit || unit->empty()) return false;
            const std::vector<std::string> captures{person->source};
            const std::vector<std::optional<std::string>> resolved{unit};
            const std::string speaker = fill_template(rules_[static_cast<size_t>(rule_index)],
                captures, nullptr, nullptr, &resolved);
            if (speaker.empty()) return false;
            std::string target = speaker;
            std::optional<TranslationResult> requirement_translation;
            std::vector<std::pair<std::string, int>> body;
            const auto translated_template = [&](std::string_view key, std::string_view value)
                    -> std::optional<std::string> {
                auto text = exact_literal_translation(key);
                if (!text) return std::nullopt;
                const size_t placeholder = text->find("{s}");
                if (placeholder == std::string::npos ||
                        text->find("{s}", placeholder + 3) != std::string::npos)
                    return std::nullopt;
                text->replace(placeholder, 3, value);
                return text;
            };
            const auto append_body = [&](const std::optional<std::string> &text,
                    const NativeDrawnTextRow &color_draw) {
                if (!text || text->empty()) return false;
                const auto part = current_draw(color_draw);
                if (!part) return false;
                body.emplace_back(*text, foregrounds(*part).front());
                target += '\n' + *text;
                return true;
            };
            const int body_y = first.y + (is_working ? 7 : 6);
            if (is_working) {
                if (branch->source == "keeps muttering") {
                    const auto *artifact = at(first.x, body_y);
                    if (!append_draw(artifact) || !append_literal(first.x +
                            static_cast<int>(artifact->source.size()), body_y, "...")) return false;
                    const auto creation = translate_legends_artifact_identity(artifact->source);
                    if (!creation || !append_body(translated_template(
                            "Workshop mood working artifact: {s}...", *creation), *artifact)) return false;
                }
            } else if (branch->source == "screams" || branch->source == "broods") {
                const auto *quote = at(first.x, body_y);
                if (!quote) return false;
                if (branch->source == "broods" && quote->source == "\"Leave me.  I need... ") {
                    constexpr std::string_view continuation = "things...  certain things";
                    if (!append_draw(quote) || !append_literal(first.x, body_y + 1, continuation) ||
                            !append_literal(first.x + static_cast<int>(continuation.size()),
                                body_y + 1, ".\"")) return false;
                    if (!append_body(exact_literal_translation(
                            "Workshop mood brood: \"Leave me.  I need... things...  certain things.\""),
                            *quote)) return false;
                } else {
                    const bool screams = branch->source == "screams";
                    const std::string_view prefix = screams ? "\"I must have " : "\"Yes.  I need ";
                    const std::string_view suffix = screams ? "!\"" : ".\"";
                    if (quote->source != prefix || !append_draw(quote)) return false;
                    const auto *item = at(first.x + static_cast<int>(prefix.size()), body_y);
                    if (!append_draw(item) || !append_literal(item->x +
                            static_cast<int>(item->source.size()), body_y, suffix)) return false;
                    // Both branches call the native job-item formatter,
                    // also used for recipe and work-order requirements.
                    const auto requirement = translate_workshop_recipe_source_display(item->source);
                    if (!requirement.usable() || !append_body(translated_template(screams
                            ? "Workshop mood demand: \"I must have {s}!\""
                            : "Workshop mood brood: \"Yes.  I need {s}.\"", requirement.target), *item))
                        return false;
                    requirement_translation = requirement;
                }
            } else if (branch->source == "mutters") {
                const auto *artifact = at(first.x + 1, body_y);
                if (!append_literal(first.x, body_y, "\"") || !append_draw(artifact) ||
                        !append_literal(artifact->x + static_cast<int>(artifact->source.size()),
                            body_y, " needs")) return false;
                const auto creation = translate_legends_artifact_identity(artifact->source);
                if (!creation || !append_body(translated_template(
                        "Workshop mood requirement: \"{s}\" needs", *creation), *artifact)) return false;
                const auto *material = at(first.x, body_y + 1);
                if (!material || !append_draw(material)) return false;
                std::string hint = material->source;
                // The default switch branch draws only the closing quote.
                if (hint != "...\"") {
                    if (!append_literal(first.x + static_cast<int>(hint.size()),
                            body_y + 1, "...\"")) return false;
                    hint += "...\"";
                }
                if (!append_body(exact_literal_translation("Workshop mood material: " + hint),
                        *material)) return false;
            } else if (branch->source == "sketches") {
                constexpr std::string_view prefix = "pictures of ";
                if (!append_literal(first.x, body_y, prefix)) return false;
                const auto *hint = at(first.x + static_cast<int>(prefix.size()), body_y);
                if (!hint || !append_draw(hint)) return false;
                std::string source(prefix);
                source += hint->source;
                if (hint->source == "shining bars") {
                    constexpr std::string_view continuation = "of metal";
                    if (!append_literal(first.x, body_y + 1, continuation) ||
                            !append_literal(first.x + static_cast<int>(continuation.size()),
                                body_y + 1, ".")) return false;
                    source += " of metal.";
                } else if (hint->source != ".") {
                    if (!append_literal(hint->x + static_cast<int>(hint->source.size()),
                            body_y, ".")) return false;
                    source += '.';
                }
                if (!append_body(exact_literal_translation("Workshop mood sketch: " + source),
                        *hint)) return false;
            }
            int right = first.x;
            for (const auto &row : rows) right = std::max(right, row.x + row.length);
            const NativePanelBorders borders(*gps_);
            const SDL_Rect source_box{first.x, rows.front().y,
                right - first.x, rows.back().y - rows.front().y + 1};
            if (const auto panel = native_building_record_panel(borders, *gps_, source_box))
                right = std::max(right, panel->x + panel->w - (first.x - panel->x));
            std::vector<int> target_colors;
            const auto color_text = [&](std::string_view text, int color) {
                std::vector<uint32_t> codepoints;
                if (decode_utf8(std::string(text), codepoints))
                    target_colors.insert(target_colors.end(), codepoints.size(), color);
            };
            const auto &speaker_rule = rules_[static_cast<size_t>(rule_index)];
            const int person_color = foregrounds(*current_draw(*person)).front();
            const int status_color = foregrounds(*current_draw(*status)).front();
            if (speaker_rule.target_template_literals.size() == 2 &&
                    speaker_rule.target_capture_order.size() == 1 &&
                    speaker_rule.target_capture_order.front() == 0) {
                color_text(speaker_rule.target_template_literals.front(), status_color);
                color_text(*unit, person_color);
                color_text(speaker_rule.target_template_literals.back(), status_color);
            } else {
                color_text(speaker, person_color);
            }
            for (const auto &[text, color] : body) color_text('\n' + text, color);
            std::string complete_source;
            for (const auto &row : rows) {
                if (!complete_source.empty()) complete_source.push_back('\n');
                complete_source += row.source;
            }
            auto translation = TranslationResult::translated(complete_source, target, "workshop-mood");
            translation.policy = TranslationPolicy::Display;
            translation.resource_revision = RULESETS.resource_revision();
            if (requirement_translation && requirement_translation->has_untranslated()) {
                const auto source_at = complete_source.find(requirement_translation->source);
                const auto target_at = target.find(requirement_translation->target);
                if (source_at != std::string::npos && target_at != std::string::npos) {
                    for (auto fragment : requirement_translation->fragments) {
                        fragment.source_begin += source_at;
                        fragment.source_end += source_at;
                        fragment.target_begin += target_at;
                        fragment.target_end += target_at;
                        translation.fragments.push_back(std::move(fragment));
                    }
                    translation.status = requirement_translation->status == TranslationStatus::WorkLimited
                        ? TranslationStatus::WorkLimited : TranslationStatus::Partial;
                } else {
                    // The producer proves the whole record even when native
                    // wrapping prevents an exact inner byte mapping.
                    translation.fragments.push_back({0, complete_source.size(), 0, target.size(),
                        requirement_translation->status, "recipe"});
                    translation.status = requirement_translation->status == TranslationStatus::WorkLimited
                        ? TranslationStatus::WorkLimited : TranslationStatus::Partial;
                }
            }
            const size_t output_begin = result.size();
            if (!append_bounded_paragraph(std::move(rows), target,
                    screen_rows, result, only_y, right, right, target_colors, false, first.x)) return false;
            attach_item_display_result(result, output_begin, translation);
            return true;
        };
        // The workshop's mood branch uses fixed addst rows, not a wrapped
        // paragraph: introduction at y/y+2, full unit identity at y+3,
        // then its working name at x+2/y+5 and status at x/y+6, or its
        // waiting name and verb together at x/y+5 with the demand below.
        // These offsets belong to the native writer (53.16 PE 0x181ce4;
        // classic 0x181c74), independently of the translated name's width.
        // Own both complete records before the ordinary identity reader can
        // centre either name on its own English span.
        for (const auto &first : draws) {
            if (trim_view(first.source) != "This building has") continue;
            const auto heading = current_draw(first);
            const auto bridge_at = positions.find({first.x, first.y + 2});
            const auto person_at = positions.find({first.x, first.y + 3});
            if (!heading || bridge_at == positions.end() || person_at == positions.end() ||
                    trim_view(bridge_at->second->source) != "been claimed by") continue;
            const auto bridge = current_draw(*bridge_at->second);
            const auto &person = *person_at->second;
            const auto identity = current_draw(person);
            if (!bridge || !identity) continue;
            const auto period_at = positions.find({person.x + static_cast<int>(person.source.size()),
                person.y});
            if (period_at == positions.end() || trim_view(period_at->second->source) != ".") continue;
            const auto period = current_draw(*period_at->second);
            if (!period) continue;
            const auto rules = prefixes.find(heading->source + ' ' + bridge->source);
            if (rules == prefixes.end()) continue;
            Match body = *identity;
            body.length = period->x + period->length - body.x;
            body.source = screen_rows[body.y].substr(body.x, body.length);
            for (int index : rules->second)
                if (append_workshop_record({*heading, *bridge, body}, person, index, heading->x)) break;

            append_workshop_mood(first);
        }
        for (const auto &first : draws) {
            const auto rules = prefixes.find(std::string(trim_view(first.source)));
            if (rules == prefixes.end()) continue;
            const auto heading = current_draw(first);
            if (!heading) continue;
            // Combat confirmations draw the fixed prefix, the formatter-bound
            // target and the question mark consecutively on one row. Preserve
            // that person before the independent identity pass blanks its bytes.
            auto next = positions.find({first.x + static_cast<int>(first.source.size()), first.y});
            const bool inline_person = next != positions.end();
            if (!inline_person) next = positions.find({first.x, first.y + 1});
            if (next == positions.end()) continue;
            const auto &person = *next->second;
            const auto identity = current_draw(person);
            if (!identity || (!inline_person && identity->x != heading->x)) continue;
            for (int index : rules->second) {
                const Rule &rule = rules_[static_cast<size_t>(index)];
                const auto &suffix = rule.template_literals.back();
                Match body = *identity;
                // Coffin records and combat confirmations append punctuation
                // in another addst draw. Its terminal must be adjacent.
                if (!body.source.ends_with(suffix)) {
                    const auto tail = positions.find({person.x +
                        static_cast<int>(person.source.size()), person.y});
                    if (tail == positions.end() || trim_view(tail->second->source) != suffix)
                        continue;
                    const auto punctuation = current_draw(*tail->second);
                    if (!punctuation) continue;
                    body.length = punctuation->x + punctuation->length - body.x;
                    body.source = screen_rows[body.y].substr(body.x, body.length);
                }
                const int end = body.x + body.length;
                if (end < gps_->dimx && screen_rows[body.y][end] != ' ' &&
                    !is_cp437_box_separator(screen_rows[body.y], end)) continue;
                const std::string source = heading->source + ' ' + body.source;
                auto source_colors = foregrounds(*heading);
                source_colors.push_back(source_colors.back());
                const auto body_colors = foregrounds(body);
                source_colors.insert(source_colors.end(), body_colors.begin(), body_colors.end());
                std::optional<std::string> target;
                std::vector<int> target_colors;
                const auto capture = trim_view(std::string_view(body.source).substr(
                    0, body.source.size() - suffix.size()));
                // The formatter knows THIS NativeString's person/profession.
                // Do not reparse that field through a same-spelled global name.
                if (person.unit_identity_target && !person.unit_identity_target->empty() &&
                    capture == trim_view(person.source) &&
                    rule.target_template_literals.size() == 2 &&
                    rule.target_capture_order.size() == 1 && rule.target_capture_order.front() == 0) {
                    const std::vector<std::string> captures{std::string(capture)};
                    const std::vector<std::optional<std::string>> resolved{person.unit_identity_target};
                    target = fill_template(rule, captures, nullptr, nullptr, &resolved);
                    const auto color_text = [&](std::string_view text, int color) {
                        std::vector<uint32_t> codepoints;
                        if (decode_utf8(std::string(text), codepoints))
                            target_colors.insert(target_colors.end(), codepoints.size(), color);
                    };
                    color_text(rule.target_template_literals.front(), source_colors.front());
                    color_text(*person.unit_identity_target, body_colors.front());
                    color_text(rule.target_template_literals.back(), body_colors.back());
                } else {
                    target = translate_help_paragraph(source, source_colors, target_colors, true, index);
                }
                if (!target) continue;
                const int source_right = std::max(heading->x + heading->length, end);
                int right = source_right;
                const NativePanelBorders borders(*gps_);
                const SDL_Rect source_box{heading->x, heading->y,
                    source_right - heading->x, body.y - heading->y + 1};
                const auto panel = heading->source == "This is the resting place of"
                    ? native_building_record_panel(borders, *gps_, source_box)
                    : native_panel_interior(borders, *gps_, source_box);
                if (panel) {
                    // These fixed draws have no native paragraph width. Their
                    // English ink is not the width of the record: using it
                    // makes Chinese wrapping change with the person's name.
                    // Keep the panel's matching left/right inset, and stop
                    // before any independent field or foreground artwork.
                    right = std::max(source_right, panel->x + panel->w -
                        (heading->x - panel->x));
                    for (const Match *row : std::array<const Match *, 2>{&*heading, &body}) {
                        // The inline person's bytes belong to this sentence,
                        // so only its terminal can bound an independent field.
                        if (inline_person && row == &*heading) continue;
                        for (int x = row->x + row->length; x < right; ++x) {
                            const auto ch = visible_char_at(x, row->y);
                            if ((ch && ch != ' ') ||
                                    native_foreground_picture_at(*gps_, x, row->y)) {
                                right = std::max(source_right, x);
                                break;
                            }
                        }
                    }
                }
                std::vector<Match> rows;
                if (inline_person) {
                    // One physical line owns all three draws. Passing separate
                    // same-y fields as paragraph rows would invent extra lines.
                    Match row = *heading;
                    row.length = end - row.x;
                    row.source = screen_rows[row.y].substr(row.x, row.length);
                    rows.push_back(std::move(row));
                } else {
                    rows = {*heading, std::move(body)};
                }
                append_bounded_paragraph(std::move(rows), *target,
                    screen_rows, result, only_y, right, right, target_colors, false, heading->x);
                break;
            }
        }
    }
}

// Furniture details have independent picture captions and a two-line unit
// record. Each field keeps its native column; English string lengths must
// not separately centre the title, person, status and room name.
void Overlay::layout_resting_place_details(SDL_Renderer *renderer) {
    if (!gps_ || !renderer || !face_ || gps_->tile_pixel_x <= 0 ||
            gps_->tile_pixel_y <= 0) return;
    const NativePanelBorders borders(*gps_);
    for (const Match &introduction : prepared_matches_) {
        if (introduction.rule != kUiMessageRule ||
                introduction.source != "This is the resting place of") continue;
        const auto panel = native_building_record_panel(borders, *gps_,
            SDL_Rect{introduction.x, introduction.y, introduction.length, 2});
        if (!panel) continue;
        const int panel_right = panel->x + panel->w;
        const int right = panel_right - (introduction.x - panel->x);
        const auto current = [&](const Match &match) {
            if (match.x < panel->x || match.x + match.length > panel_right ||
                    match.y < panel->y || match.y >= panel->y + panel->h ||
                    match.length <= 0 ||
                    match.source.size() != static_cast<size_t>(match.length)) return false;
            const bool fold = match.rule >= 0 &&
                static_cast<size_t>(match.rule) < rules_.size() &&
                rules_[static_cast<size_t>(match.rule)].case_insensitive;
            std::string native;
            for (int x = match.x; x < match.x + match.length; ++x) {
                const auto ch = visible_char_at(x, match.y);
                native.push_back(ch ? ch : ' ');
            }
            return template_literal_at(native, 0, match.source, fold);
        };
        if (!current(introduction)) continue;
        Match *membership = nullptr;
        for (Match &match : prepared_matches_) {
            if (match.rule == kUiMessageRule && match.x == introduction.x &&
                    match.y > introduction.y + 1 &&
                    (match.source == "This furniture is a part of" ||
                     match.source == "This furniture is a part of multiple rooms.") &&
                    current(match) && (!membership || match.y < membership->y))
                membership = &match;
        }
        if (!membership) continue;

        for (Match &identity : prepared_matches_) {
            if (identity.rule != kCreatureNameRule || identity.target.empty() ||
                    identity.native_split_duplicate || identity.y <= introduction.y + 1 ||
                    identity.y >= membership->y || !current(identity)) continue;
            auto name = fortress_text_row(identity.x, identity.y);
            if (name.empty()) continue;
            std::vector<std::vector<Match *>> rows{std::move(name)};
            for (Match &status : prepared_matches_) {
                if (status.x == identity.x && status.y == identity.y + 1 &&
                        lower(trim(status.source)) == "deceased" && current(status)) {
                    auto row = fortress_text_row(status.x, status.y);
                    if (!row.empty()) rows.push_back(std::move(row));
                    break;
                }
            }
            layout_fortress_text_rows(renderer, rows, identity.x, right, true);
        }

        // Prove the icon before claiming a caption. Both an unnamed room
        // and a player's custom room name use this same complete field.
        const auto picture_caption = [&](int first_y, int last_y) {
            for (int y = first_y; y < last_y; ++y) {
                for (int picture = panel->x; picture <= introduction.x; ++picture) {
                    const int picture_right = native_picture_box_right(*gps_, picture, y);
                    if (picture_right <= picture || picture_right >= right) continue;
                    auto box = native_picture_caption_rect(*gps_, picture_right, y);
                    if (!box) box = native_picture_caption_rect(*gps_, picture_right + 1, y);
                    const int end = box ? std::min(right, box->x + box->w) : right;
                    int left = box ? box->x : picture_right;
                    while (left < end && (!visible_char_at(left, y) ||
                                         visible_char_at(left, y) == ' ')) ++left;
                    auto row = fortress_text_row(left, y);
                    if (row.empty() || row.back()->x + row.back()->length > end ||
                            !std::all_of(row.begin(), row.end(),
                                [&](const Match *part) { return current(*part); })) continue;
                    layout_fortress_text_rows(renderer, {row}, left, end, true);
                    return;
                }
            }
        };
        picture_caption(panel->y + 1, introduction.y);
        picture_caption(membership->y + 1, panel->y + panel->h - 1);
    }
}
