// gui/rename.lua owns a resizable Window, two name previews, a component
// selector and a three-column WORD table. Its source layout establishes the
// meaning/POS roles; keys, the search input and native language words stay
// native. Only this DFHack document enters the generated-name vocabulary.
{
    const auto rename_window = [&]() -> bool {
        if (title != "Rename") return false;
        const int body_right = right - 1;
        const int table_left = left + 31;
        const int native_left = table_left + 18;
        const int grammar_left = native_left + 18;
        constexpr std::string_view components = "Name components:";
        constexpr std::string_view type_label = "Name type:";
        if (top + 12 > footer_y || table_left >= body_right ||
                dfhack_context_rows[top + 8].compare(left, components.size(), components) != 0 ||
                dfhack_context_rows[top + 6].compare(left + 7, type_label.size(), type_label) != 0 ||
                read_row(top + 8).compare(left, components.size(), components) != 0 ||
                read_row(top + 6).compare(left + 7, type_label.size(), type_label) != 0)
            return false;

        dfhack_auxiliary_regions.push_back(*frame);
        gui_literal(at, title_y, title, title_end, "Rename caption", true);
        const auto field = [&](int x, int y, std::string_view source,
                std::string_view target, int field_right, bool centered = false) {
            if (source.empty() || target.empty() || x < left || y < top ||
                    y > footer_y || field_right > body_right || field_right <= x ||
                    x + static_cast<int>(source.size()) > field_right ||
                    read_row(y).compare(x, source.size(), source) != 0 ||
                    (only_y >= 0 && only_y != y)) return;
            Match match{x, y, static_cast<int>(source.size()), kDfhackHotkeysHintRule,
                std::string(target), std::string(source)};
            match.layout_x = x;
            match.layout_length = field_right - x;
            match.layout_left = !centered;
            match.layout_clip_right = field_right;
            match.layout_native_clip = auxiliary_pixels({x, y, field_right - x, 1});
            dfhack_auxiliary_matches.push_back(std::move(match));
        };
        const auto caption = [&](int x, int y, std::string_view source, int field_right) {
            if (const auto target = exact_literal_translation(
                    "DFHack GUI Rename caption: " + std::string(source)))
                field(x, y, source, *target, field_right);
        };
        const auto value = [&](int x, int y, int field_right, std::string_view role) {
            if (x >= field_right || field_right > body_right) return;
            const auto band = std::string_view(dfhack_context_rows[y]).substr(x, field_right - x);
            const auto source = trim_view(band);
            if (source.empty() || source.data() != band.data()) return;
            if (const auto target = exact_literal_translation(
                    "DFHack GUI Rename " + std::string(role) + ": " + std::string(source)))
                field(x, y, source, *target, field_right);
        };
        const auto find_caption = [&](int y, int begin, int end, std::string_view source) {
            if (begin >= end || end > body_right) return;
            const auto band = std::string_view(dfhack_context_rows[y]).substr(begin, end - begin);
            const size_t found = band.find(source);
            if (found == std::string_view::npos ||
                    (found > 0 && band[found - 1] != ' ') ||
                    (found + source.size() < band.size() && band[found + source.size()] != ' '))
                return;
            const int x = begin + static_cast<int>(found);
            caption(x, y, source, x + static_cast<int>(source.size()));
        };

        find_caption(top, left, body_right, "Select new target");
        find_caption(top, left, body_right, "Generate random name");
        constexpr std::string_view language_caption = "Language:";
        const auto language_band = std::string_view(dfhack_context_rows[top + 5])
            .substr(left, body_right - left);
        const size_t language_at = language_band.find(language_caption);
        if (language_at != std::string_view::npos) {
            const int x = left + static_cast<int>(language_at);
            caption(x, top + 5, language_caption, x + static_cast<int>(language_caption.size()));
            value(x + static_cast<int>(language_caption.size()) + 1, top + 5,
                body_right, "language");
        }
        caption(left + 7, top + 6, type_label, left + 7 + static_cast<int>(type_label.size()));
        value(left + 7 + static_cast<int>(type_label.size()) + 1, top + 6,
            body_right, "type");
        caption(left, top + 8, components, left + 29);
        find_caption(top + 8, table_left, std::min(body_right, table_left + 20), "Change sort");
        caption(table_left + 22, top + 8, "Search:", std::min(body_right, table_left + 29));
        // CycleHotkeyLabel appends its sort arrow without a gap. Translate
        // only the proved label and leave that separately drawn arrow intact.
        for (const auto &[x, heading] : {
                std::pair{table_left, std::string_view("English")},
                std::pair{native_left, std::string_view("native")},
                std::pair{grammar_left, std::string_view("part of speech")},
                std::pair{grammar_left, std::string_view("part_of_speech")}}) {
            const int end = x + static_cast<int>(heading.size());
            if (end <= body_right && dfhack_context_rows[top + 10].compare(x, heading.size(), heading) == 0)
                caption(x, top + 10, heading, end);
        }

        const auto grammar_part = [](std::string_view source)
                -> std::optional<ProceduralNamePartOfSpeech> {
            if (source == "Singular Noun" || source == "Plural Noun")
                return ProceduralNamePartOfSpeech::noun;
            if (source == "Adjective") return ProceduralNamePartOfSpeech::adjective;
            if (source == "Prefix") return ProceduralNamePartOfSpeech::prefix;
            // add_word_choice gives the POS token exactly 15 columns, so
            // Present Participle has this source-authored truncated spelling.
            if (source == "Present (1st)" || source == "Present (3rd)" ||
                    source == "Preterite" || source == "Past Participle" ||
                    source == "Present Partici") return ProceduralNamePartOfSpeech::verb;
            return std::nullopt;
        };
        if (grammar_left < body_right) {
            const int grammar_right = std::min(body_right, grammar_left + 15);
            for (int y = top + 12; y <= footer_y; ++y) {
                const auto grammar = trim_view(std::string_view(dfhack_context_rows[y])
                    .substr(grammar_left, grammar_right - grammar_left));
                const auto part = grammar_part(grammar);
                if (!part) continue;
                const auto english = trim_view(std::string_view(dfhack_context_rows[y])
                    .substr(table_left, 16));
                const auto native = trim_view(std::string_view(dfhack_context_rows[y])
                    .substr(native_left, 16));
                if (english.empty() || native.empty()) continue;
                if (const auto meaning = translate_name_editor_meaning(english, native, *part))
                    field(table_left, y, english, *meaning, table_left + 16);
                caption(grammar_left, y, grammar, grammar_right);
            }
        }

        constexpr std::array<std::string_view, 8> slots{{"First Name", "Front Compound",
            "Rear Compound", "First Adjective", "Second Adjective", "Hyphen Compound",
            "The X", "Of X"}};
        for (size_t index = 0; index < slots.size(); ++index) {
            const int y = top + 10 + static_cast<int>(index) * 3;
            if (y >= footer_y - 3) break;
            if (dfhack_context_rows[y].compare(left, slots[index].size(), slots[index]) != 0)
                continue;
            caption(left, y, slots[index], left + 18);
            for (const int button_y : {y, y + 1}) {
                constexpr int action_width = 10;
                const auto button = trim_view(std::string_view(dfhack_context_rows[button_y])
                    .substr(left + 20, action_width));
                if (button == "[Random]" || button == "[Clear]")
                    caption(left + 21, button_y, button.substr(1, button.size() - 2),
                        left + 20 + static_cast<int>(button.size()) - 1);
            }
            // first_name can be user-authored. The other component values
            // come directly from WORD.forms; only a unique reviewed meaning
            // across that component's permitted POS may replace its text.
            if (index == 0) continue;
            const auto english = trim_view(std::string_view(dfhack_context_rows[y + 1])
                .substr(left + 2, 16));
            const auto forms = name_editor_word_forms_.find(lower(std::string(english)));
            if (forms == name_editor_word_forms_.end()) continue;
            const auto allowed = [&](ProceduralNamePartOfSpeech part) {
                if (index == 3 || index == 4) return part == ProceduralNamePartOfSpeech::adjective;
                if (index == 6) return part == ProceduralNamePartOfSpeech::noun;
                if (index == 7) return part == ProceduralNamePartOfSpeech::noun ||
                    part == ProceduralNamePartOfSpeech::verb;
                if (index == 5) return part != ProceduralNamePartOfSpeech::verb;
                if (index == 2) return part != ProceduralNamePartOfSpeech::prefix;
                return true;
            };
            std::optional<std::string> meaning;
            bool ambiguous = false;
            for (const auto &form : forms->second) {
                if (!allowed(form.part_of_speech)) continue;
                if (meaning && *meaning != form.gloss) { ambiguous = true; break; }
                meaning = form.gloss;
            }
            if (meaning && !ambiguous)
                field(left + 2, y + 1, english, *meaning, left + 18);
        }
        for (int row = 0; row < 4; ++row) {
            constexpr std::array<std::string_view, 4> actions{{"Prev component",
                "Next component", "Randomize component", "Clear component"}};
            find_caption(footer_y - 3 + row, left, left + 29, actions[row]);
        }

        // The second preview is explicitly translateName(name, true), an
        // English generated name. Its quoted source supplies the established
        // name grammar without rewriting the native-language preview above.
        const auto preview_band = std::string_view(dfhack_context_rows[top + 3])
            .substr(left, body_right - left);
        const auto preview = trim_view(preview_band);
        if (preview.size() >= 2 && preview.front() == '"' && preview.back() == '"') {
            if (const auto target = translate_procedural_fragment(std::string(preview), false,
                    false, {}, ProceduralFragmentContext::generated_name)) {
                const int x = left + static_cast<int>(preview.data() - preview_band.data());
                const size_t first = dfhack_auxiliary_matches.size();
                field(x, top + 3, preview, *target, x + static_cast<int>(preview.size()), true);
                if (dfhack_auxiliary_matches.size() != first) {
                    auto &match = dfhack_auxiliary_matches.back();
                    match.layout_x = left;
                    match.layout_length = body_right - left;
                    match.layout_native_clip = auxiliary_pixels({left, top + 3, body_right - left, 1});
                    match.layout_clip_right = body_right;
                }
            }
        }
        return true;
    };
    if (rename_window()) continue;
}
