// Shared phonetic rendering for raw native given names and the existing
// text-name path. The table and syllable rules are deliberately identical.
static std::string transliterate_native_history_name(std::string_view raw) {
    // This is only a final fallback for mod-added/native proper-name
    // syllables not present in language_words. It deliberately emits no
    // Latin glyphs, so a generated name can never become a Chinese/English
    // hybrid on screen.
    // Screen text uses CP437, including accented vowels in generated
    // native names. Fold those letters to their ASCII pronunciation
    // before applying the compact phonetic table; previously the high
    // bytes were silently discarded and left names untranslated.
    std::vector<uint32_t> raw_codepoints;
    decode_utf8(cp437_to_utf8(raw), raw_codepoints);
    std::string text;
    for (uint32_t cp : raw_codepoints) {
        if (cp >= 'A' && cp <= 'Z') cp += 'a' - 'A';
        if ((cp >= 'a' && cp <= 'z') || (cp >= '0' && cp <= '9')) {
            text.push_back(static_cast<char>(cp));
            continue;
        }
        switch (cp) {
        case 0x00c0: case 0x00c1: case 0x00c2: case 0x00c3: case 0x00c4:
        case 0x00c5: case 0x00e0: case 0x00e1: case 0x00e2: case 0x00e3:
        case 0x00e4: case 0x00e5: text.push_back('a'); break;
        case 0x00c7: case 0x00e7: text.push_back('c'); break;
        case 0x00c8: case 0x00c9: case 0x00ca: case 0x00cb:
        case 0x00e8: case 0x00e9: case 0x00ea: case 0x00eb:
            text.push_back('e'); break;
        case 0x00cc: case 0x00cd: case 0x00ce: case 0x00cf:
        case 0x00ec: case 0x00ed: case 0x00ee: case 0x00ef:
            text.push_back('i'); break;
        case 0x00d1: case 0x00f1: text.push_back('n'); break;
        case 0x00d2: case 0x00d3: case 0x00d4: case 0x00d5: case 0x00d6:
        case 0x00d8: case 0x00f2: case 0x00f3: case 0x00f4: case 0x00f5:
        case 0x00f6: case 0x00f8: text.push_back('o'); break;
        case 0x00d9: case 0x00da: case 0x00db: case 0x00dc:
        case 0x00f9: case 0x00fa: case 0x00fb: case 0x00fc:
            text.push_back('u'); break;
        case 0x00dd: case 0x00fd: case 0x00ff: text.push_back('y'); break;
        case 0x00c6: case 0x00e6: text += "ae"; break;
        case 0x00df: text += "ss"; break;
        case 0x00d0: case 0x00f0: text.push_back('d'); break;
        case 0x00de: case 0x00fe: text += "th"; break;
        default: break;
        }
    }
    // Generated native names are syllabic (Ecamo, Alino, Oram, Num, ...).
    // Rendering one Chinese fragment per Latin *letter* made even short
    // names unreadably long. Split them into onset/vowel/coda syllables
    // and use a deterministic CV table instead. This covers every future
    // generated spelling without maintaining a list of observed names.
    struct CvRow {
        std::string_view onset;
        std::array<std::string_view, 5> values; // a, e, i/y, o, u
    };
    static constexpr std::array<CvRow, 42> cv_rows = {{
        {"",   {"阿", "埃", "伊", "奥", "乌"}},
        {"b",  {"巴", "贝", "比", "博", "布"}},
        {"c",  {"卡", "塞", "西", "科", "库"}},
        {"d",  {"达", "德", "迪", "多", "杜"}},
        {"f",  {"法", "费", "菲", "福", "弗"}},
        {"g",  {"加", "盖", "吉", "戈", "古"}},
        {"h",  {"哈", "赫", "希", "霍", "胡"}},
        {"j",  {"贾", "杰", "吉", "乔", "朱"}},
        {"k",  {"卡", "凯", "基", "科", "库"}},
        {"l",  {"拉", "莱", "利", "洛", "卢"}},
        {"m",  {"玛", "梅", "米", "莫", "穆"}},
        {"n",  {"纳", "内", "尼", "诺", "努"}},
        {"p",  {"帕", "佩", "皮", "波", "普"}},
        {"q",  {"卡", "奎", "基", "科", "库"}},
        {"r",  {"拉", "雷", "里", "罗", "鲁"}},
        {"s",  {"萨", "塞", "西", "索", "苏"}},
        {"t",  {"塔", "泰", "蒂", "托", "图"}},
        {"v",  {"瓦", "维", "维", "沃", "武"}},
        {"w",  {"瓦", "韦", "维", "沃", "乌"}},
        {"x",  {"克萨", "克塞", "克西", "克索", "克苏"}},
        {"y",  {"亚", "耶", "伊", "约", "尤"}},
        {"z",  {"扎", "泽", "齐", "佐", "祖"}},
        {"ch", {"查", "切", "奇", "乔", "楚"}},
        {"sh", {"沙", "谢", "希", "绍", "舒"}},
        {"th", {"萨", "瑟", "西", "索", "苏"}},
        {"ph", {"法", "费", "菲", "福", "弗"}},
        {"wh", {"瓦", "韦", "维", "沃", "乌"}},
        {"qu", {"夸", "奎", "奎", "阔", "库"}},
        {"ck", {"卡", "凯", "基", "科", "库"}},
        {"tr", {"特拉", "特雷", "特里", "特罗", "特鲁"}},
        {"dr", {"德拉", "德雷", "德里", "德罗", "德鲁"}},
        {"gr", {"格拉", "格雷", "格里", "格罗", "格鲁"}},
        {"br", {"布拉", "布雷", "布里", "布罗", "布鲁"}},
        {"cr", {"克拉", "克雷", "克里", "克罗", "克鲁"}},
        {"pr", {"普拉", "普雷", "普里", "普罗", "普鲁"}},
        {"fr", {"弗拉", "弗雷", "弗里", "弗罗", "弗鲁"}},
        {"fl", {"弗拉", "弗莱", "弗利", "弗洛", "弗卢"}},
        {"pl", {"普拉", "普莱", "普利", "普洛", "普卢"}},
        {"bl", {"布拉", "布莱", "布利", "布洛", "布卢"}},
        {"cl", {"克拉", "克莱", "克利", "克洛", "克卢"}},
        {"gl", {"格拉", "格莱", "格利", "格洛", "格卢"}},
        {"st", {"斯塔", "斯泰", "斯蒂", "斯托", "斯图"}},
    }};
    auto vowel = [](char ch) {
        switch (ch) {
        case 'a': return 0;
        case 'e': return 1;
        case 'i': case 'y': return 2;
        case 'o': return 3;
        case 'u': return 4;
        default: return -1;
        }
    };
    auto vowel_at = [&](size_t position) {
        if (position >= text.size()) return false;
        // `y` is a vowel in a coda or by itself, but a consonantal onset
        // before another vowel. Without this distinction a native name
        // such as Mo\x98oecamo (CP437 \x98 = ÿ) collapsed the entire
        // `oyoe` sequence into one syllable and lost most of the name.
        if (text[position] == 'y' && position + 1 < text.size() &&
            std::string_view("aeiou").find(text[position + 1]) !=
                std::string_view::npos) {
            return false;
        }
        return vowel(text[position]) >= 0;
    };
    auto known_onset = [&](std::string_view onset) {
        return std::any_of(cv_rows.begin(), cv_rows.end(), [&](const CvRow &row) {
            return row.onset == onset;
        });
    };
    auto append_coda = [](std::string &out, std::string_view coda) {
        for (char ch : coda) {
            switch (ch) {
            case 'b': case 'p': out += "普"; break;
            case 'c': case 'k': case 'q': case 'x': out += "克"; break;
            case 'd': case 't': out += "特"; break;
            case 'f': case 'v': out += "弗"; break;
            case 'g': out += "格"; break;
            case 'h': out += "赫"; break;
            case 'l': case 'r': out += "尔"; break;
            case 'm': out += "姆"; break;
            case 'n': out += "恩"; break;
            case 's': case 'z': out += "斯"; break;
            case 'w': out += "乌"; break;
            case 'y': out += "伊"; break;
            default: break;
            }
        }
    };
    auto append_syllable = [&](std::string &out, std::string_view onset,
                               std::string_view nucleus, std::string_view coda) {
        int vowel_kind = nucleus.empty() ? 0 : vowel(nucleus.front());
        if (vowel_kind < 0) vowel_kind = 0;
        const CvRow *row = nullptr;
        for (const CvRow &candidate : cv_rows) {
            if (candidate.onset == onset) {
                row = &candidate;
                break;
            }
        }
        // Unknown consonant clusters are decomposed, but only the final
        // consonant becomes the CV onset. This stays compact while still
        // preserving a stable phonetic distinction.
        if (!row) {
            if (onset.size() > 1) append_coda(out, onset.substr(0, onset.size() - 1));
            const std::string_view final = onset.empty()
                                               ? std::string_view{}
                                               : onset.substr(onset.size() - 1);
            for (const CvRow &candidate : cv_rows) {
                if (candidate.onset == final) {
                    row = &candidate;
                    break;
                }
            }
        }
        out += row ? row->values[static_cast<size_t>(vowel_kind)]
                   : cv_rows.front().values[static_cast<size_t>(vowel_kind)];
        append_coda(out, coda);
    };

    std::string result;
    for (size_t cursor = 0; cursor < text.size();) {
        if (text[cursor] >= '0' && text[cursor] <= '9') {
            result.push_back(text[cursor++]);
            continue;
        }
        const size_t onset_start = cursor;
        while (cursor < text.size() && !vowel_at(cursor) &&
               !(text[cursor] >= '0' && text[cursor] <= '9')) {
            ++cursor;
        }
        if (cursor >= text.size() || (text[cursor] >= '0' && text[cursor] <= '9')) {
            append_coda(result, std::string_view(text).substr(onset_start, cursor - onset_start));
            continue;
        }
        const std::string_view onset(text.data() + onset_start, cursor - onset_start);
        const size_t nucleus_start = cursor;
        while (cursor < text.size() && vowel_at(cursor)) ++cursor;
        const std::string_view nucleus(text.data() + nucleus_start, cursor - nucleus_start);

        const size_t consonants_start = cursor;
        while (cursor < text.size() && !vowel_at(cursor) &&
               !(text[cursor] >= '0' && text[cursor] <= '9')) {
            ++cursor;
        }
        size_t next_onset = cursor;
        if (cursor < text.size() && vowel_at(cursor)) {
            const std::string_view consonants(
                text.data() + consonants_start, cursor - consonants_start);
            if (!consonants.empty()) {
                if (known_onset(consonants)) {
                    next_onset = consonants_start;
                } else if (consonants.size() >= 2 &&
                           known_onset(consonants.substr(consonants.size() - 2))) {
                    next_onset = cursor - 2;
                } else {
                    next_onset = cursor - 1;
                }
            }
        }
        const std::string_view coda(text.data() + consonants_start,
                                    next_onset - consonants_start);
        append_syllable(result, onset, nucleus, coda);
        cursor = next_onset;
    }
    return result.empty() ? std::string("异域") : result;
}

static std::string render_civilization_name_head(
        std::string_view word_id, std::string_view term, bool plural) {
    // NATION is the one reviewed collective whose English plural changes
    // the Chinese political name. Other CIV heads keep their chosen title.
    if (word_id == "NATION" && plural) return "诸国";
    return std::string(term);
}

std::optional<std::string> Overlay::translate_history_name(
        const NativeHistoryName &name, bool character, bool polity_role,
        bool government_role, const NativeSiteGovernmentContext *government_context) const {
    if (!name.has_name) return std::nullopt;
    if (!character && name.site_id >= 0) return translate_site_name(name);
    // All real entity names share their own complete naming identity. The
    // owned context marks the inner rendering call and avoids recapturing it.
    if (!character && name.entity_id >= 0 && name.entity_type >= 0 && !government_context)
        return translate_history_entity_name(name, name.entity_id);
    NativeSiteGovernmentContext identity_government_context;
    if (!character && (!polity_role || name.entity_type == 1 || government_role) &&
            !government_context &&
            name.entity_type >= 1 && name.entity_type <= 10 &&
            (name.entity_name_current || name.entity_type == 1 || government_role) &&
            (name.entity_type != 1 || name.parent_word_id.empty())) {
        capture_entity_government_name_context(name, identity_government_context);
        government_context = &identity_government_context;
        government_role = government_role || identity_government_context.governing_role;
    }
    // A sentence's civilization/government role does not change an entity's
    // own HEAD vocabulary. Intrinsic type and owned naming context select it.
    const bool site_government = !character &&
        (name.entity_type == 1 || (government_role &&
            name.entity_type >= 1 && name.entity_type <= 10));
    // Generated local governments share the settlement WORD-slot grammar.
    // Keep the entity's owned context so its parent polity supplies the
    // local-government suffix, while literal name fields retain their rules.
    if (site_government && name.first_name.empty() && name.nickname.empty())
        return translate_site_government_name(name, government_context);
    const bool polity = !character && !site_government && (name.entity_type == 0 ||
        (name.entity_type < 0 && name.type == 2));
    if (character) {
        // Reproduce the game's English display, keeping the native proper
        // name separate from the surname and epithet imagery.
        std::array<std::string, 7> forms;
        for (size_t slot = 0; slot < name.words.size(); ++slot) {
            const auto &word = name.words[slot];
            if (word.id.empty() || !word.has_form) continue;
            if (word.part_of_speech < 0 || word.part_of_speech > 8) return std::nullopt;
            forms[slot] = word.english_form;
            if (forms[slot].empty()) {
                const auto found = history_english_name_forms_.find(word.id);
                if (found != history_english_name_forms_.end())
                    forms[slot] = found->second[static_cast<size_t>(word.part_of_speech)];
            }
        }
        const auto capitalized = [](std::string value) {
            if (!value.empty() && value.front() >= 'a' && value.front() <= 'z')
                value.front() -= 'a' - 'A';
            return value;
        };
        std::string english;
        const bool nickname = !name.nickname.empty();
        const bool has_title = !name.words[2].id.empty() ||
            !name.words[3].id.empty() || !name.words[5].id.empty();
        const auto typed_name = [&]() -> std::optional<std::string> {
            // PE a946e0 supplies seven independent WORD/POS slots; b92f10
            // adds race, ghost/zombie and curse labels outside that name.
            // A missing literary compound must not reject the complete
            // identity (and hence all of those independently known labels).
            std::string result;
            if ((!nickname || name.nickname_mode == 1) && !name.first_name.empty()) {
                const auto numbered = translate_numbered_creature_name(name.first_name);
                result = numbered ? *numbered : name.language < 0
                    ? native_text_to_utf8(name.first_name)
                    : transliterate_native_language_word(name.first_name);
            }
            if (nickname) {
                auto translated = exact_literal_translation("Unit nickname: " + name.nickname);
                if (!translated) translated = exact_literal_translation(
                    "Unit nickname: " + native_text_to_utf8(name.nickname));
                result += "“" + (translated ? *translated : native_text_to_utf8(name.nickname)) + "”";
            }
            if (nickname && name.nickname_mode == 2) return result;
            std::array<std::string, 7> meanings;
            std::array<EnglishCharacterNames::NativeSenses, 7> senses;
            for (size_t slot = 0; slot < name.words.size(); ++slot) {
                const auto &word = name.words[slot];
                if (word.id.empty() || !word.has_form || (slot == 4 && !has_title)) continue;
                const auto pos = word.part_of_speech;
                const char *part = pos < 2 ? "NOUN" : pos == 2 ? "ADJ" :
                    pos == 3 ? "PREFIX" : "VERB";
                const auto found = procedural_word_senses_.find(word.id + "\t" + part);
                if (found != procedural_word_senses_.end()) meanings[slot] = found->second;
                senses[slot] = english_character_names_.resolve_native_senses(
                    word.id, pos, forms[slot], meanings[slot]);
                if (pos == 2) {
                    const auto adjective = english_character_names_.translate_adjective(
                        senses[slot], meanings[slot]);
                    if (!adjective.text.empty()) meanings[slot] = adjective.text;
                }
                if (meanings[slot].empty()) {
                    // Mod-added WORDs keep their own field. Only an unknown
                    // generated root needs phonetics; known neighbours retain
                    // their WORD/POS meanings and authored nicknames stay exact.
                    meanings[slot] = english_name_transliterator_.word(
                        forms[slot].empty() ? word.id : forms[slot], pos);
                    if (meanings[slot].empty()) meanings[slot] = transliterate_native_history_name(
                        forms[slot].empty() ? word.id : forms[slot]);
                }
            }
            const auto compound = [&](size_t first, size_t second) {
                if (meanings[first].empty()) return meanings[second];
                if (meanings[second].empty()) return meanings[first];
                const auto composed = english_character_names_.surname_compose_typed(
                    senses[first], senses[second]);
                if (composed.classified()) return composed.text;
                // This is a typed generated compound, not an inferred prose
                // phrase. Preserve both complete root meanings when no short
                // surname construction is licensed, without dropping either.
                const auto roles = [](int16_t pos) -> uint8_t {
                    return pos < 2 ? kNameFrontNoun | kNameRearNoun :
                        pos == 2 ? kNameFrontAdjective | kNameRearAdjective :
                        pos == 3 ? kNameFrontPrefix : kNameVerb;
                };
                return render_procedural_compound(meanings[first], meanings[second],
                    roles(name.words[first].part_of_speech), roles(name.words[second].part_of_speech));
            };
            std::string surname = compound(0, 1);
            if (name.first_name.empty() && !nickname && !surname.empty() &&
                    !name.native_name.empty()) {
                // For a name without literal first_name the first native WORD
                // group occupies the given-name position, as in the normal
                // renderer above. Keep that pronunciation through a failure in
                // a later epithet/OfX group too.
                const auto first = std::string_view(name.native_name).substr(
                    0, name.native_name.find(' '));
                surname = transliterate_native_language_word(first);
            }
            std::string title;
            if (has_title) {
                std::string source;
                for (size_t slot = 2; slot <= 5; ++slot) {
                    if (forms[slot].empty()) continue;
                    if (!source.empty() && slot != 5) source += ' ';
                    if (slot == 5 && !source.empty()) source += forms[4].empty() ? " " : "-";
                    source += forms[slot];
                }
                const auto translated = english_character_names_.title(source);
                title = translated ? *translated : meanings[2] + meanings[3] + compound(4, 5);
            }
            if (!meanings[6].empty()) {
                if (!title.empty()) title = meanings[6] + "之" + title;
                else if (!surname.empty()) surname = meanings[6] + "之" + surname;
                else result = meanings[6] + "之" + result;
            }
            for (const auto *group : {&surname, &title}) {
                if (group->empty()) continue;
                if (!result.empty()) result += "·";
                result += *group;
            }
            // A present language_name with no displayed fields intentionally
            // contributes an empty name; its separately typed race may remain.
            return result;
        };
        const auto finish = [&](std::optional<std::string> translated) {
            return translation_complete_with_native_nicknames(translated, english)
                ? translated : typed_name();
        };
        if (nickname && (name.nickname_mode == 0 || name.nickname_mode == 2))
            english = "`" + name.nickname + "'";
        else {
            english = name.first_name;
            if (nickname) {
                if (!english.empty()) english += ' ';
                english += "`" + name.nickname + "'";
            }
        }
        if (nickname && name.nickname_mode == 2)
            return finish(translate_english_character_name(english, name.first_name));
        const auto append = [&](const std::string &group) {
            if (group.empty()) return;
            if (!english.empty()) english += ' ';
            english += group;
        };
        append(capitalized(forms[0] + forms[1]));
        // a949d5 starts the title only for slots 2, 3 or 5. A lone slot 4
        // stays invisible, including when a name was edited or inherited.
        if (has_title) {
            std::string title;
            const auto append_title = [&](const std::string &form) {
                if (form.empty()) return;
                if (!title.empty()) title += ' ';
                title += capitalized(form);
            };
            append_title(forms[2]);
            append_title(forms[3]);
            if (!forms[4].empty()) {
                append_title(forms[4]);
                title += '-';
                title += capitalized(forms[5]);
            } else append_title(forms[5]);
            if (!title.empty()) append((english.empty() ? "The " : "the ") + title);
        }
        if (!forms[6].empty())
            append((english.empty() ? "Of " : "of ") + capitalized(forms[6]));
        if (!name.first_name.empty())
            return finish(translate_english_character_name(english, name.first_name));
        // Some generated actors have no literal first_name. Their first
        // visible name group comes from WORD slots instead. Its English
        // gloss is still a proper name here, not a surname to be recomposed.
        if (!nickname && (!forms[0].empty() || !forms[1].empty()) &&
                !name.native_name.empty()) {
            const auto native = translate_procedural_fragment(name.native_name, true,
                false, {}, ProceduralFragmentContext::general_text, false);
            const auto given = std::string_view(name.native_name).substr(
                0, name.native_name.find(' '));
            const std::string target = native ? native->substr(
                0, native->find("·")) : std::string{};
            return finish(translate_english_character_name(english, given, target));
        }
        return finish(translate_english_character_name(english));
    }
    auto given_name = [&](const std::string &value) {
        // First-name/utterance fields keep the established proper-name
        // phonetics, including site governments. WORD slots supply imagery.
        return transliterate_native_language_word(value);
    };
    // Nicknames are authored text, rather than WORD slots. Only an explicit
    // whole-field override changes their spelling; preserve all other text
    // and the native display policy.
    std::string result;
    const bool nickname = !name.nickname.empty();
    const auto nickname_target = nickname && !site_government
        ? exact_literal_translation("Unit nickname: " + name.nickname) : std::nullopt;
    const std::string nickname_text = nickname_target
        ? *nickname_target : native_text_to_utf8(name.nickname);
    if (nickname && (name.nickname_mode == 0 || name.nickname_mode == 2)) {
        result = "“" + nickname_text + "”";
    } else {
        if (!name.first_name.empty()) result = given_name(name.first_name);
        if (nickname) result += "“" + nickname_text + "”";
    }
    // Reviewed entity terms own their complete imagery and collective title.
    // Generic name computation is only a fallback for names without a scoped
    // entry; it must never replace a known HEAD or its ADJ/OF modifiers.
    std::array<std::string, 7> entity_terms;
    bool reviewed_entity_name = false;
    // A local government's own HEAD is a name stem. Only its proved parent
    // or independent governing context supplies the separate local suffix.
    const std::string entity_suffix = site_government
        ? site_government_name_suffix(name, government_context)
        : std::string{};
    const auto finish_entity_name = [&](std::string value) -> std::optional<std::string> {
        if (value.empty()) return std::nullopt;
        if (site_government) {
            if (!name.parent_word_id.empty() && (!name.first_name.empty() || nickname))
                value += "（" + entity_suffix + "）";
            else value += entity_suffix;
        }
        return value;
    };
    if (nickname && name.nickname_mode == 2)
        return finish_entity_name(std::move(result));

    if (polity || site_government) {
        for (size_t slot = 0; slot < name.words.size(); ++slot) {
            const auto &word = name.words[slot];
            if (word.id.empty() || !word.has_form) continue;
            const char *part = nullptr;
            switch (word.part_of_speech) {
            case 0: case 1: part = "NOUN"; break;
            case 2: part = "ADJ"; break;
            case 3: part = "PREFIX"; break;
            case 4: case 5: case 6: case 7: case 8: part = "VERB"; break;
            default: return std::nullopt;
            }
            if (polity && slot == 5 &&
                    (word.part_of_speech == 0 || word.part_of_speech == 1)) {
                const auto head = civilization_name_terms_.find(word.id);
                if (head != civilization_name_terms_.end() && !head->second.empty())
                    entity_terms[slot] = render_civilization_name_head(
                        word.id, head->second, word.part_of_speech == 1);
            }
            if (entity_terms[slot].empty()) {
                const auto term = site_government
                    ? site_government_name_term(word.id, part, slot)
                    : civilization_name_modifier(word.id, part, slot, name.words[5].id);
                if (term) entity_terms[slot] = *term;
            }
            reviewed_entity_name = reviewed_entity_name || !entity_terms[slot].empty();
        }
    }
    if ((polity || site_government) && !reviewed_entity_name) {
        // The entity's real English forms and POS enter the same natural
        // two-image computation as place names. Authored name fields above
        // remain separate from these generated slots.
        std::array<std::string, 7> forms;
        for (size_t slot = 0; slot < name.words.size(); ++slot) {
            const auto &word = name.words[slot];
            if (word.id.empty() || !word.has_form) continue;
            if (word.part_of_speech < 0 || word.part_of_speech > 8)
                return std::nullopt;
            forms[slot] = word.english_form;
            if (forms[slot].empty()) {
                const auto found = history_english_name_forms_.find(word.id);
                if (found == history_english_name_forms_.end()) return std::nullopt;
                forms[slot] = found->second[static_cast<size_t>(word.part_of_speech)];
                if (forms[slot].empty()) return std::nullopt;
            }
        }
        // The real formatter does not display a lone slot 4.
        const bool has_title = !name.words[2].id.empty() ||
            !name.words[3].id.empty() || !name.words[5].id.empty();
        if (!has_title) forms[4].clear();
        std::array<EnglishCharacterNames::EntityWord, 7> words;
        for (size_t slot = 0; slot < words.size(); ++slot)
            words[slot] = {forms[slot], name.words[slot].part_of_speech};
        std::string core;
        if (const auto natural = english_character_names_.entity_name(words)) {
            core = *natural;
        } else {
            // A failed grammatical or phonetic candidate sends the complete
            // generated English name through its English word pronunciations.
            // Native utterances and authored nicknames were handled above.
            NativeHistoryName generated = name;
            generated.first_name.clear();
            generated.nickname.clear();
            for (size_t slot = 0; slot < forms.size(); ++slot) {
                generated.words[slot].english_form = forms[slot];
                generated.words[slot].has_form = !forms[slot].empty();
            }
            if (const auto english = reconstruct_site_english_name(generated))
                core = transliterate_english_name(*english, &generated);
        }
        if (!core.empty()) {
            if (!result.empty()) result += "·";
            result += core;
        }
        return finish_entity_name(std::move(result));
    }

    std::array<std::string, 7> glosses;
    std::array<uint8_t, 7> roles{};
    for (size_t slot = 0; slot < name.words.size(); ++slot) {
        const auto &word = name.words[slot];
        if (word.id.empty() || !word.has_form) continue;
        const char *part = nullptr;
        switch (word.part_of_speech) {
        case 0: case 1:
            part = "NOUN";
            roles[slot] = kNameFrontNoun | kNameRearNoun;
            break;
        case 2:
            part = "ADJ";
            roles[slot] = kNameFrontAdjective | kNameRearAdjective;
            break;
        case 3:
            part = "PREFIX";
            roles[slot] = kNameFrontPrefix;
            break;
        case 4: case 5: case 6: case 7: case 8:
            part = "VERB";
            roles[slot] = kNameVerb;
            break;
        default: return std::nullopt;
        }
        if (!entity_terms[slot].empty()) {
            glosses[slot] = entity_terms[slot];
            continue;
        }
        const auto found = procedural_word_senses_.find(word.id + "\t" + part);
        // Ordinary names keep the existing WORD/POS support boundary. Entity
        // names resolve a missing slot alone, retaining every reviewed term.
        if (found == procedural_word_senses_.end() || found->second.empty()) {
            if (!polity && !site_government) return std::nullopt;
            std::string form = word.english_form;
            if (form.empty()) {
                const auto english = history_english_name_forms_.find(word.id);
                if (english == history_english_name_forms_.end()) return std::nullopt;
                form = english->second[static_cast<size_t>(word.part_of_speech)];
            }
            if (form.empty()) return std::nullopt;
            std::array<EnglishCharacterNames::EntityWord, 7> fallback;
            fallback[0] = {form, word.part_of_speech};
            if (const auto natural = english_character_names_.entity_name(fallback))
                glosses[slot] = *natural;
            else glosses[slot] = contains_cjk_utf8(form)
                ? native_text_to_utf8(form)
                : english_name_transliterator_.word(form, word.part_of_speech);
        } else glosses[slot] = found->second;
        // Region=6 and MountainPeak=19 are language_name_type values. Apply
        // each geographic NAME_* head's sense only to its region/peak kind.
        // Never reinterpret slot 4 modifiers or slot 6 ownership,
        // nor the same WORD in a figure, artifact, site or building name.
        if ((name.type == 6 || name.type == 19) && slot == 5 &&
                (word.part_of_speech == 0 || word.part_of_speech == 1)) {
            const auto form = std::find_if(std::begin(region_name_forms),
                std::end(region_name_forms), [&](const auto &entry) {
                    return entry.id == word.id && (name.type == 6 || entry.mountain);
                });
            if (form != std::end(region_name_forms))
                if (const auto gloss = region_name_gloss(
                        word.part_of_speech == 1 ? form->plural : form->singular))
                    glosses[slot] = *gloss;
        }
    }

    std::string compound = render_procedural_compound(
        glosses[0], glosses[1], roles[0], roles[1]);
    if (polity || site_government) {
        // Preserve the natural front-name computation without letting it
        // absorb the reviewed political HEAD or any title/ownership slot.
        std::array<std::string, 2> forms;
        bool complete = true;
        for (size_t slot = 0; slot < forms.size(); ++slot) {
            const auto &word = name.words[slot];
            if (word.id.empty() || !word.has_form) continue;
            forms[slot] = word.english_form;
            if (forms[slot].empty()) {
                const auto english = history_english_name_forms_.find(word.id);
                if (english != history_english_name_forms_.end())
                    forms[slot] = english->second[static_cast<size_t>(word.part_of_speech)];
            }
            complete = complete && !forms[slot].empty();
        }
        if (complete && !forms[0].empty() && !forms[1].empty()) {
            if (const auto natural = english_character_names_.entity_compound(
                    forms[0], forms[1], name.words[0].part_of_speech,
                    name.words[1].part_of_speech)) compound = *natural;
        } else if (complete && (!forms[0].empty() || !forms[1].empty())) {
            std::array<EnglishCharacterNames::EntityWord, 7> front;
            for (size_t slot = 0; slot < forms.size(); ++slot)
                front[slot] = {forms[slot], name.words[slot].part_of_speech};
            if (const auto natural = english_character_names_.entity_name(front))
                compound = *natural;
        }
    }
    std::string title;
    // RVA a949d5 checks exactly slots 2, 3 and 5 before entering the title
    // section. RVA a94b71 reads slot 4, a94c79 appends its hyphen, and
    // a94cf6 reads the slot 5 head. Keep this relation in the shared Chinese
    // title grammar when the native POS fields identify noun+noun.
    if (!name.words[2].id.empty() || !name.words[3].id.empty() ||
        !name.words[5].id.empty()) {
        const bool noun_compound = !glosses[4].empty() && !glosses[5].empty() &&
            (roles[4] & kNameFrontNoun) && (roles[5] & kNameRearNoun);
        const bool adjective_prefix =
            (glosses[2].empty() || (roles[2] & kNameFrontAdjective)) &&
            (glosses[3].empty() || (roles[3] & kNameFrontAdjective));
        if (noun_compound && adjective_prefix) {
            title = render_procedural_hyphenated_title(
                glosses[2] + glosses[3], glosses[4], glosses[5]);
        } else {
            for (size_t slot = 2; slot <= 5; ++slot) title += glosses[slot];
        }
    }
    if (!glosses[6].empty()) {
        const char *link = site_government || polity ? "" : "之";
        if (!title.empty()) title = glosses[6] + link + title;
        else if (!compound.empty()) compound = glosses[6] + link + compound;
        // Without WORD0..5, OfX qualifies the literal first-name/nickname
        // group. The real slots prove that head; do not append a dangling
        // ownership phrase after it or infer a surname from its spelling.
        else if (!result.empty()) result = glosses[6] + link + result;
        else title = glosses[6] + link;
    }
    auto append = [&](const std::string &part) {
        if (part.empty()) return;
        if (!result.empty()) result += "·";
        result += part;
    };
    append(compound);
    append(title);
    return finish_entity_name(std::move(result));
}
