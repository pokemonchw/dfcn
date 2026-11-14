// Native-language and English site names are independent displayed fields.
// Only the complete English field enters whole-name localization; native
// spelling always retains its separate full phonetic rendering.
static std::string site_name_decision_key(std::string_view native_name,
        int16_t name_type, const std::array<NativeHistoryWord, 7> &words) {
    std::string key = std::to_string(name_type);
    const auto append = [&](std::string_view value) {
        key += '\t';
        key += std::to_string(value.size());
        key += ':';
        key += value;
    };
    append(native_name);
    for (const auto &word : words) {
        append(word.id);
        append(std::to_string(word.part_of_speech));
    }
    return key;
}

static std::optional<std::string> reconstruct_site_english_name(
        const NativeHistoryName &name) {
    if (!name.has_name) return std::nullopt;
    const auto capitalized = [](std::string value) {
        if (!value.empty() && value.front() >= 'a' && value.front() <= 'z')
            value.front() -= 'a' - 'A';
        return value;
    };
    const auto append = [](std::string &result, const std::string &group) {
        if (group.empty()) return;
        if (!result.empty()) result += ' ';
        result += group;
    };
    std::string english;
    const bool nickname = !name.nickname.empty();
    if (nickname && (name.nickname_mode == 0 || name.nickname_mode == 2))
        english = "`" + name.nickname + "'";
    else {
        english = name.first_name;
        if (nickname) append(english, "`" + name.nickname + "'");
    }
    if (nickname && name.nickname_mode == 2) return english;
    std::array<std::string, 7> forms;
    for (size_t slot = 0; slot < forms.size(); ++slot) {
        const auto &word = name.words[slot];
        if (word.id.empty() || !word.has_form) continue;
        // These are the actual English resolver's WORD/POS forms, copied
        // with the name. A missing form cannot be filled from native spelling.
        if (word.english_form.empty()) return std::nullopt;
        forms[slot] = word.english_form;
    }
    append(english, capitalized(forms[0] + forms[1]));
    // Reproduce the native English formatter, including its hidden slot 4
    // rule and compound title. This is input text, never a Chinese gloss.
    bool open_title_compound = false;
    if (!name.words[2].id.empty() || !name.words[3].id.empty() ||
            !name.words[5].id.empty()) {
        std::string title;
        append(title, capitalized(forms[2]));
        append(title, capitalized(forms[3]));
        if (!forms[4].empty()) {
            append(title, capitalized(forms[4]));
            title += '-';
            title += capitalized(forms[5]);
            open_title_compound = forms[5].empty();
        } else append(title, capitalized(forms[5]));
        if (!title.empty()) append(english, (english.empty() ? "The " : "the ") + title);
    }
    if (!forms[6].empty()) {
        // The native formatter suppresses the separator after H's hyphen.
        // When N is empty the displayed suffix is H-of Q, not H- of Q.
        const std::string complement = (english.empty() ? "Of " : "of ") + capitalized(forms[6]);
        if (open_title_compound) english += complement;
        else append(english, complement);
    }
    return english.empty() ? std::nullopt : std::optional<std::string>(std::move(english));
}

static std::string site_english_name_decision_key(std::string_view english,
        int16_t name_type, const std::array<NativeHistoryWord, 7> &words) {
    return "english\t" + site_name_decision_key(lower(std::string(english)), name_type, words);
}

static std::string site_name_attribute_suffix(std::string_view label,
        int32_t site_type = -1) {
    // These labels come from the native site-type formatter's real branches,
    // not from language_name.type, naming WORDs, owners or population guesses.
    static constexpr std::pair<std::string_view, std::string_view> suffixes[] = {
        {"hamlet", "村"}, {"village", "村"}, {"town", "城"},
        {"castle", "堡"}, {"fort", "堡"}, {"fortress", "堡"},
        {"tower", "塔"}, {"monastery", "修道院"}, {"tomb", "陵墓"},
        {"vault", "秘库"}, {"mysterious palace", "宫殿"},
        {"mysterious dungeon", "地牢"}, {"mysterious lair", "巢穴"},
        {"monument", "纪念地"}, {"camp", "营地"},
        {"pits", "坑寨"}, {"dark pits", "坑寨"},
        {"forest retreat", "林居"}, {"mountain halls", "山厅"},
        {"hillocks", "丘堡"}, {"cave", "洞窟"}, {"shrine", "圣所"},
        {"labyrinth", "迷宫"}, {"lair", "巢穴"},
        {"important location", "地标"}, {"settlement", "聚落"},
        {"ruin", "遗址"}, {"ruins", "遗址"},
    };
    for (const auto &[source, suffix] : suffixes)
        if (source == label) return std::string(suffix);
    // Town alone is a coarse settlement category; only hamlet/town output
    // proves its finer class. Other unknown site types retain a neutral word.
    return site_type == 5 ? "聚落" : "地点";
}

static std::string site_name_attribute_suffix(const NativeHistoryName &name) {
    return name.site_label == "player fortress" ? "堡" :
        site_name_attribute_suffix(name.site_label, name.site_type);
}

bool Overlay::load_site_name_imagery() {
    site_name_imagery_.clear();
    fs::path path = runtime::data_path() / "site-name-imagery.tsv";
    std::ifstream input(path, std::ios::binary);
    if (!input) {
        input.clear();
        path = fs::path("data/runtime/site-name-imagery.tsv");
        input.open(path, std::ios::binary);
    }
    std::error_code error;
    site_name_imagery_mtime_ = fs::last_write_time(path, error);
    if (error) site_name_imagery_mtime_ = {};
    if (!input) return false;
    std::string line;
    while (std::getline(input, line)) {
        if (!line.empty() && line.back() == '\r') line.pop_back();
        if (line.empty() || line.front() == '#') continue;
        std::array<std::string, 6> fields;
        size_t start = 0;
        bool valid = true;
        for (size_t column = 0; column < fields.size(); ++column) {
            const size_t end = line.find('\t', start);
            if ((column + 1 < fields.size()) == (end == std::string::npos)) {
                valid = false;
                break;
            }
            fields[column] = line.substr(start,
                end == std::string::npos ? end : end - start);
            if (end != std::string::npos) start = end + 1;
        }
        if (!valid || fields[0].empty() || fields[2].empty() ||
                (fields[1] != "NOUN" && fields[1] != "ADJ" &&
                 fields[1] != "VERB" && fields[1] != "PREFIX")) continue;
        SiteNameImagery imagery;
        imagery.roles = std::move(fields[2]);
        if (fields[3] != "-") imagery.head = std::move(fields[3]);
        if (fields[4] != "-") imagery.modifier = std::move(fields[4]);
        if (imagery.head.empty() && imagery.modifier.empty()) continue;
        site_name_imagery_.insert_or_assign(fields[0] + '\t' + fields[1], std::move(imagery));
    }
    return !site_name_imagery_.empty();
}

std::optional<std::string> Overlay::localize_site_name(const NativeHistoryName &name,
        std::string_view suffix) const {
    if (!name.has_name || !name.first_name.empty() ||
            !name.nickname.empty()) return std::nullopt;
    NativeHistoryName visible = name;
    if (name.words[2].id.empty() && name.words[3].id.empty() && name.words[5].id.empty())
        visible.words[4] = {};
    // Site/local-government provenance is supplied by the caller, including
    // the embark editor before either object exists. Share the river
    // compositor's WORD/POS choices and compound fallback with the same
    // group order and the caller's type suffix.
    auto result = localize_river_name(visible, RiverNames::InputKind::SiteSlots).display(suffix);
    return result.empty() ? std::nullopt : std::optional<std::string>(std::move(result));
}

std::optional<std::string> Overlay::translate_site_government_name(
        const NativeHistoryName &name,
        const NativeSiteGovernmentContext *government_context) const {
    if (!name.has_name) return std::nullopt;
    NativeHistoryName resolved = name;
    // Historical snapshots can carry WORD/POS without the English surface.
    // Recover only that exact form, preserving the game's absent-form flags.
    for (auto &word : resolved.words) {
        if (word.id.empty() || !word.has_form || !word.english_form.empty() ||
                word.part_of_speech < 0 || word.part_of_speech > 8) continue;
        const auto found = history_english_name_forms_.find(word.id);
        if (found != history_english_name_forms_.end())
            word.english_form = found->second[static_cast<size_t>(word.part_of_speech)];
    }
    const auto english = reconstruct_site_english_name(resolved);
    return english ? translate_english_site_name(*english, &resolved,
        site_government_name_suffix(name, government_context)) : std::nullopt;
}

bool Overlay::load_site_name_decisions() {
    site_name_decisions_.clear();
    fs::path path = runtime::data_path() / "site-name-decisions.tsv";
    std::ifstream input(path, std::ios::binary);
    if (!input) {
        input.clear();
        path = fs::path("data/runtime/site-name-decisions.tsv");
        input.open(path, std::ios::binary);
    }
    std::error_code error;
    site_name_decisions_mtime_ = fs::last_write_time(path, error);
    if (error) site_name_decisions_mtime_ = {};
    if (!input) return false;
    std::string line;
    while (std::getline(input, line)) {
        if (!line.empty() && line.back() == '\r') line.pop_back();
        if (line.empty() || line.front() == '#') continue;
        std::array<std::string, 22> fields;
        size_t start = 0;
        bool valid = true;
        for (size_t column = 0; column < fields.size(); ++column) {
            const size_t end = line.find('\t', start);
            if (column + 1 < fields.size() && end == std::string::npos) {
                valid = false;
                break;
            }
            if (column + 1 == fields.size() && end != std::string::npos) {
                valid = false;
                break;
            }
            fields[column] = line.substr(start,
                end == std::string::npos ? end : end - start);
            if (end != std::string::npos) start = end + 1;
        }
        if (!valid || fields[0].empty() || fields[16].empty() ||
                fields[17].empty() || fields[19].empty()) continue;
        const int name_type = parse_int(fields[1], -1);
        if (name_type < 0 || name_type > INT16_MAX) continue;
        std::array<NativeHistoryWord, 7> words;
        for (size_t slot = 0; slot < words.size(); ++slot) {
            auto &word = words[slot];
            word.id = fields[2 + slot * 2] == "-"
                ? std::string{} : fields[2 + slot * 2];
            const int pos = parse_int(fields[3 + slot * 2], -2);
            if (pos < -1 || pos > 8 || (!word.id.empty() && pos < 0)) {
                valid = false;
                break;
            }
            word.part_of_speech = static_cast<int16_t>(pos);
        }
        if (!valid) continue;
        SiteNameDecision decision;
        decision.core = std::move(fields[16]);
        decision.full_transliteration = fields[17] == "-" ? "" : std::move(fields[17]);
        decision.old_translation = fields[18] == "-" ? "" : std::move(fields[18]);
        decision.policy = std::move(fields[19]);
        decision.rewrite_notes = fields[20] == "-" ? "" : std::move(fields[20]);
        decision.embedded_attribute = fields[21] == "-" ? "" : std::move(fields[21]);
        // Only a semantic whole-name decision belongs to the English side.
        // The old phonetic decisions describe native pronunciation and may
        // not replace the distinct English field with those native syllables.
        if (decision.policy == "whole-name-localization") {
            NativeHistoryName source;
            source.has_name = true;
            source.words = words;
            for (auto &word : source.words) {
                if (word.id.empty()) continue;
                const auto found = history_english_name_forms_.find(word.id);
                if (found != history_english_name_forms_.end() &&
                        word.part_of_speech >= 0 && word.part_of_speech <= 8)
                    word.english_form = found->second[static_cast<size_t>(word.part_of_speech)];
                word.has_form = !word.english_form.empty();
            }
            if (const auto english = reconstruct_site_english_name(source))
                site_name_decisions_.insert_or_assign(site_english_name_decision_key(
                    *english, static_cast<int16_t>(name_type), words), decision);
        }
        site_name_decisions_.insert_or_assign(site_name_decision_key(
            fields[0], static_cast<int16_t>(name_type), words), std::move(decision));
    }
    return !site_name_decisions_.empty();
}

std::string Overlay::transliterate_site_spelling(std::string_view original) const {
    if (original.empty() || contains_cjk_utf8(original)) return native_text_to_utf8(original);
    if (config_.native_language_original) {
        const auto display = native_text_to_utf8(original);
        return preserve_native_language_original(display, display);
    }
    // A native first_name or an absent WORD table does not prove authorship:
    // utterance names also use that storage. Pronounce the complete saved
    // spelling without recovering invented WORD meanings or a naming culture.
    // Preserve unsupported scripts/symbols rather than silently losing them
    // in the shared Latin/CP437 phonetic renderer.
    const auto letter = [](unsigned char ch) {
        return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ||
            is_cp437_latin_letter_byte(ch);
    };
    if (!std::any_of(original.begin(), original.end(), letter) ||
            !std::all_of(original.begin(), original.end(),
                [&](unsigned char ch) {
                    return letter(ch) || (ch >= '0' && ch <= '9') ||
                        ch == ' ' || ch == '-' || ch == '\'';
                }))
        return native_text_to_utf8(original);
    const std::string phonetic = transliterate_native_history_name(original);
    return phonetic.empty() ? native_text_to_utf8(original) : phonetic;
}

std::string Overlay::site_name_full_transliteration(const NativeHistoryName &name) const {
    if (name.site_id < 0 || !name.has_name || name.native_name.empty()) return {};
    if (config_.native_language_original)
        return transliterate_site_spelling(name.native_name);
    if (!name.nickname.empty() || contains_cjk_utf8(name.native_name))
        return native_text_to_utf8(name.native_name);
    const auto reviewed = site_name_decisions_.find(site_name_decision_key(
        native_text_to_utf8(name.native_name), name.type, name.words));
    if (name.first_name.empty() && reviewed != site_name_decisions_.end() &&
            !reviewed->second.full_transliteration.empty())
        return reviewed->second.full_transliteration;
    return transliterate_site_spelling(name.native_name);
}

// Annotate a serialized name with existing RAW forms, then compare both
// displayed fields. WORD indices and POS have already been read from the
// save; spelling never chooses or moves any of the seven slots.
bool Overlay::match_saved_site_name(NativeHistoryName &name,
        std::string_view language, std::string_view complete) const {
    const auto pair = split_generated_name_identity(complete);
    if (!pair || !name.has_name || name.type != 4 ||
            !name.first_name.empty() || !name.nickname.empty()) return false;
    for (auto &word : name.words) {
        if (word.id.empty()) continue;
        const auto found = history_english_name_forms_.find(word.id);
        if (found == history_english_name_forms_.end() ||
                word.part_of_speech < 0 || word.part_of_speech > 8) return false;
        word.english_form = found->second[size_t(word.part_of_speech)];
        word.has_form = !word.english_form.empty();
    }
    const auto english = reconstruct_site_english_name(name);
    if (!english || lower_native_name(*english) !=
            lower_native_name(std::string(pair->gloss))) return false;
    const uint8_t mask = language == "DWARF" ? 1 : language == "ELF" ? 2 :
        language == "GOBLIN" ? 4 : language == "HUMAN" ? 8 : 0;
    if (!mask) return false;
    std::array<std::string, 7> native;
    for (const auto &[spelling, meanings] : native_name_word_languages_)
        for (size_t slot = 0; slot < name.words.size(); ++slot) {
            if (name.words[slot].id.empty()) continue;
            for (const auto &[word, languages] : meanings)
                if ((languages & mask) && word == name.words[slot].id) {
                    if (!native[slot].empty() && native[slot] != spelling) return false;
                    native[slot] = spelling;
                }
        }
    for (size_t slot = 0; slot < native.size(); ++slot) {
        if (!name.words[slot].id.empty() && native[slot].empty()) return false;
    }
    std::string spelling;
    for (const auto &group : {native[0] + native[1],
            native[2] + native[3] + native[4] + native[5], native[6]}) {
        if (group.empty()) continue;
        if (!spelling.empty()) spelling += ' ';
        spelling += group;
    }
    if (lower_native_name(std::string(trim_view(spelling))) !=
            lower_native_name(std::string(pair->native_name))) return false;
    name.native_name = std::string(pair->native_name);
    return true;
}

std::optional<std::string> Overlay::translate_saved_name(
        const NativeSaveNameSource &source) const {
    if (source.original.empty()) return std::nullopt;
    if (source.authored) return native_text_to_utf8(source.original);
    // The header's game type distinguishes an adventurer's personal name
    // from a fortress name even when no world has been loaded.
    switch (source.game_type) {
    case 1: {
        if (const auto person = translate_legends_name(source.original, true))
            return person;
        // first_name may be authored UTF-8, independently of WORD0..6.
        // Preserve that given name while translating the generated
        // surname/title/OfX groups in their own naming language.
        // Keep nicknames on the complete personal-name path above.
        const std::string_view name(source.original);
        const size_t space = name.find(' ');
        if (space != std::string_view::npos && name.find('`') == std::string_view::npos) {
            const auto given = name.substr(0, space);
            const auto rest = trim_view(name.substr(space + 1));
            const bool authored_given = contains_cjk_utf8(given);
            if (authored_given || generated_title_shape(given))
                if (const auto groups = translate_procedural_fragment(std::string(rest),
                        false, false, {}, ProceduralFragmentContext::native_name_group)) {
                    if (config_.native_language_original)
                        return native_language_word_display(name);
                    return (authored_given ? native_text_to_utf8(given)
                        : native_language_word_display(given)) + "·" + *groups;
                }
        }
        // Own unknown/authored text as a whole instead of translating just
        // an incidental known word inside the saved personal name.
        return native_text_to_utf8(source.original);
    }
    case 0: case 3: case 8: case 10: break;
    default: return std::nullopt;
    }
    // The list reader has completed any native block reads before rendering.
    if (const auto pair = split_generated_name_identity(source.original)) {
        std::optional<NativeHistoryName> identity;
        if (source.identity) identity = *source.identity;
        NativeHistoryName fortress;
        std::string fortress_english;
        const auto same = [](std::string_view left, std::string_view right) {
            return lower_native_name(native_text_to_utf8(trim_view(left))) ==
                lower_native_name(native_text_to_utf8(trim_view(right)));
        };
        // Only the header's own world can supply a live place identity.
        // A missing serialized source can still use the matching live world.
        if (!identity && native_save_world_is_current(source)) {
            if (capture_current_fortress_site_name(fortress, fortress_english) &&
                    same(pair->native_name, fortress.native_name) &&
                    same(pair->gloss, fortress_english))
                identity = std::move(fortress);
            else identity = resolve_site_reference_name(source.original);
        }
        const auto english = translate_english_site_name(
            pair->gloss, identity ? &*identity : nullptr, "堡");
        const auto native = identity && identity->site_id >= 0
            ? site_name_full_transliteration(*identity)
            : transliterate_site_spelling(pair->native_name);
        return native + "，“" + english.value_or(
            native_text_to_utf8(pair->gloss) + "堡") + "”";
    }
    // A header without an English name retains only its original spelling.
    // It supplies neither WORD/POS nor a site subtype, so do not infer a
    // meaning or a site suffix from the save's dwarf-mode enum.
    return transliterate_site_spelling(source.original);
}

std::string Overlay::transliterate_english_name(std::string_view english,
        const NativeHistoryName *identity) const {
    if (contains_cjk_utf8(english)) return native_text_to_utf8(english);
    const auto captured = identity ? reconstruct_site_english_name(*identity) : std::nullopt;
    if (!identity || !captured || !identity->first_name.empty() ||
            !identity->nickname.empty() || lower(*captured) != lower(std::string(english)))
        return english_name_transliterator_.name(english);

    // Saved WORD/POS data annotates the exact English input. It selects a
    // homograph or supplies an unknown compound's existing roots, allowing
    // phonetic rendering without guessing spelling boundaries.
    using Reading = EnglishNameTransliterator::TokenReading;
    std::vector<Reading> readings;
    const auto word = [&](size_t slot) -> const NativeHistoryWord * {
        const auto &source = identity->words[slot];
        return source.id.empty() || !source.has_form ? nullptr : &source;
    };
    const auto single_token = [](std::string_view text) {
        const auto letter = [](char c) {
            return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
        };
        return std::any_of(text.begin(), text.end(), letter) &&
            std::all_of(text.begin(), text.end(), [&](char c) { return letter(c) || c == '\''; });
    };
    const auto add_word = [&](std::vector<Reading> &to, size_t slot) {
        const auto *source = word(slot);
        if (!source) return true;
        // Multiword or punctuated RAW forms cannot be assigned one token's
        // POS conservatively. Retain the original text without these hints.
        if (!single_token(source->english_form)) return false;
        to.push_back({source->english_form, source->part_of_speech, {}});
        return true;
    };
    const auto *front = word(0), *rear = word(1);
    if (front && rear) {
        if (!single_token(front->english_form) || !single_token(rear->english_form))
            return english_name_transliterator_.name(english);
        readings.push_back({front->english_form + rear->english_form, -1,
            {{front->english_form, front->part_of_speech},
             {rear->english_form, rear->part_of_speech}}});
    } else if (!add_word(readings, 0) || !add_word(readings, 1))
        return english_name_transliterator_.name(english);
    if (!identity->words[2].id.empty() || !identity->words[3].id.empty() ||
            !identity->words[5].id.empty()) {
        std::vector<Reading> title;
        for (size_t slot = 2; slot <= 5; ++slot)
            if (!add_word(title, slot)) return english_name_transliterator_.name(english);
        if (!title.empty()) {
            readings.push_back({"the", -1, {}});
            readings.insert(readings.end(), title.begin(), title.end());
        }
    }
    if (word(6)) {
        readings.push_back({"of", -1, {}});
        if (!add_word(readings, 6)) return english_name_transliterator_.name(english);
    }
    return english_name_transliterator_.name(english, readings);
}

std::optional<std::string> Overlay::translate_english_site_name(
        std::string_view english, const NativeHistoryName *identity,
        std::string_view suffix) const {
    english = trim_view(english);
    if (english.empty()) return std::nullopt;
    if (english.size() >= 2 && english.front() == '"' && english.back() == '"')
        english = trim_view(english.substr(1, english.size() - 2));
    if (english.empty()) return std::nullopt;
    if (contains_cjk_utf8(english)) return native_text_to_utf8(english) + std::string(suffix);
    // Exact field identity supplies the original WORD/POS boundaries. The
    // settlement editor also owns those slots before a world_site exists.
    if (identity) {
        const auto captured = reconstruct_site_english_name(*identity);
        if (captured && lower(native_text_to_utf8(*captured)) ==
                lower(native_text_to_utf8(english))) {
            if (auto localized = localize_site_name(*identity, suffix)) return localized;
        }
    }
    // The surface string cannot distinguish modifier slots from title slots
    // or recover the original WORD/POS. Only a supplied identity may enter
    // the site translator; dictionary POS must not choose another layout.
    return native_text_to_utf8(english) + std::string(suffix);
}

std::string Overlay::site_name_core(const NativeHistoryName &name) const {
    if (name.site_id < 0 || !name.has_name) return {};
    const auto english = reconstruct_site_english_name(name);
    if (!english) return {};
    return translate_english_site_name(*english, &name).value_or(std::string{});
}

std::optional<std::string> Overlay::translate_site_name(const NativeHistoryName &name) const {
    // True site provenance is mandatory. Site/Monument/Dungeon name templates
    // also appear on independent organizations, structures and geography.
    if (name.site_id < 0 || !name.has_name) return std::nullopt;
    const auto english = reconstruct_site_english_name(name);
    return english ? translate_english_site_name(*english, &name, site_name_attribute_suffix(name))
        : std::nullopt;
}

std::optional<std::string> Overlay::translate_site_display(
        const NativeHistoryName &name, std::string_view source) const {
    if (name.site_id < 0 || !name.has_name) return std::nullopt;
    source = trim_view(source);
    if (source.empty()) return std::nullopt;
    const auto same = [](std::string_view left, std::string_view right) {
        return lower(native_text_to_utf8(trim_view(left))) ==
            lower(native_text_to_utf8(trim_view(right)));
    };
    if (const auto pair = split_generated_name_identity(source)) {
        const std::string native = same(pair->native_name, name.native_name)
            ? site_name_full_transliteration(name)
            : transliterate_site_spelling(pair->native_name);
        auto english = translate_english_site_name(pair->gloss, &name, site_name_attribute_suffix(name));
        if (native.empty() || !english) return std::nullopt;
        return native + "，“" + *english + "”";
    }
    // Field identity establishes the language. A native spelling must never
    // acquire the English field's semantics or a Chinese site-type suffix.
    if (same(source, name.native_name)) {
        const std::string native = site_name_full_transliteration(name);
        return native.empty() ? std::nullopt : std::optional<std::string>(native);
    }
    const auto english = reconstruct_site_english_name(name);
    const bool quoted = source.size() >= 2 && source.front() == '"' && source.back() == '"';
    const auto text = quoted ? trim_view(source.substr(1, source.size() - 2)) : source;
    if (english && same(text, *english)) {
        auto localized = translate_english_site_name(text, &name, site_name_attribute_suffix(name));
        if (!localized) return std::nullopt;
        return quoted ? "“" + *localized + "”" : *localized;
    }
    if (contains_cjk_utf8(source)) return native_text_to_utf8(source);
    return std::nullopt;
}

std::vector<std::string> Overlay::site_name_search_aliases(const NativeHistoryName &name) const {
    std::vector<std::string> aliases;
    if (name.site_id < 0 || !name.has_name) return aliases;
    const auto append = [&](std::string value) {
        if (!value.empty() && std::find(aliases.begin(), aliases.end(), value) == aliases.end())
            aliases.push_back(std::move(value));
    };
    const std::string original = native_text_to_utf8(name.native_name);
    append(original);
    if (!original.empty())
        append(original + site_name_attribute_suffix(name));
    const std::string phonetic = site_name_full_transliteration(name);
    append(phonetic);
    if (!phonetic.empty()) append(phonetic + site_name_attribute_suffix(name));
    append(site_name_core(name));
    if (const auto full = translate_site_name(name)) append(*full);
    if (const auto english = reconstruct_site_english_name(name)) {
        append(native_text_to_utf8(*english));
        append(original + ", \"" + native_text_to_utf8(*english) + "\"");
        if (const auto localized = translate_site_name(name)) {
            append(phonetic + "，“" + *localized + "”");
            append(phonetic + ", \"" + *localized + "\"");
        }
    }
    const auto reviewed = site_name_decisions_.find(site_name_decision_key(
        native_text_to_utf8(name.native_name), name.type, name.words));
    if (reviewed != site_name_decisions_.end()) {
        append(reviewed->second.core);
        append(reviewed->second.old_translation);
        if (!reviewed->second.old_translation.empty()) {
            append(phonetic + "，“" + reviewed->second.old_translation + "”");
            append(phonetic + ", \"" + reviewed->second.old_translation + "\"");
        }
    }
    // Preserve the previous mechanical renderer solely as a search alias.
    // Reset the site provenance so the shared history renderer cannot call
    // back into the site-name path or interpret it as today's official name.
    NativeHistoryName old = name;
    old.site_id = -1;
    old.site_type = -1;
    old.site_subtype = -1;
    old.site_label.clear();
    old.native_name.clear();
    if (const auto gloss = translate_history_name(old)) {
        append(*gloss);
        if (!phonetic.empty() && !gloss->empty()) {
            append(phonetic + "，“" + *gloss + "”");
            append(phonetic + ", \"" + *gloss + "\"");
        }
    }
    return aliases;
}
