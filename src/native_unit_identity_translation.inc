// Render one semantic identity for drawing and searching. Classification is
// already settled by native fields and formatter arguments, not its spelling.
std::optional<std::string> Overlay::translate_native_justice_organization_initials(
        const NativeUnitIdentity &person,
        const std::array<int32_t, 7> &native_indices) const {
    TranslationStateScope translation_scope;
    const auto &name = person.name;
    if (!name.has_name) return std::nullopt;
    const auto first_glyph = [](std::string_view text) -> std::optional<std::string> {
        const auto glyph = decode_utf8_at(text, 0);
        if (!glyph) return std::nullopt;
        return std::string(text.substr(0, glyph->second));
    };
    const auto phonetic_word = [&](std::string_view word) -> std::string {
        if (word.empty()) return {};
        if (contains_cjk_utf8(word)) return native_text_to_utf8(word);
        const auto reviewed = native_name_reviewed_transliterations_.find(
            lower_native_name(std::string(word)));
        return reviewed != native_name_reviewed_transliterations_.end() && !reviewed->second.empty()
            ? reviewed->second : transliterate_native_history_name(word);
    };
    std::string result;
    const bool given = !name.first_name.empty();
    if (given) {
        const std::string target = name.language < 0
            ? native_text_to_utf8(name.first_name) : phonetic_word(name.first_name);
        const auto initial = first_glyph(target);
        if (!initial) return std::nullopt;
        result += *initial;
    }
    const bool surname = native_indices[0] != -1 || native_indices[1] != -1;
    if (surname) {
        std::string english;
        for (size_t slot = 0; slot < 2; ++slot) {
            if (native_indices[slot] == -1) continue;
            const auto &word = name.words[slot];
            if (word.id.empty()) return std::nullopt;
            english += word.english_form;
        }
        // The producer appends no surname initial when both valid forms
        // are empty. Keep a known given initial without inventing a group.
        if (english.empty())
            return result.empty() ? std::nullopt : std::optional<std::string>(std::move(result));
        std::optional<std::string> target;
        if (given) {
            // EnglishName concatenates these exact POS forms into its first
            // WORD group. Nicknames and the remaining title slots are absent
            // from the native diagram's two-initial representation.
            target = english_character_names_.compound(english);
        } else {
            // Without literal first_name, this WORD group occupies the full
            // identity's proper-name position and uses its native roots.
            if (!person.native_name_words_valid) return std::nullopt;
            std::string native;
            for (size_t slot = 0; slot < 2; ++slot) {
                if (native_indices[slot] == -1 || name.words[slot].english_form.empty()) continue;
                const auto &word = person.native_name_words[slot];
                if (word.empty()) return std::nullopt;
                const std::string translated = phonetic_word(word);
                if (translated.empty()) return std::nullopt;
                native += translated;
            }
            if (!native.empty()) target = std::move(native);
        }
        if (!target) return std::nullopt;
        const auto initial = first_glyph(*target);
        if (!initial) return std::nullopt;
        result += *initial;
    }
    return result.empty() ? std::nullopt : std::optional<std::string>(std::move(result));
}

std::optional<std::string> Overlay::translate_native_unit_identity(
        const NativeUnitIdentity &unit) const {
    TranslationStateScope translation_scope;
    NativeUnitIdentityRenderScope rendering;
    const auto field_text = [&](std::string_view source) {
        if (auto target = translate_creature_descriptor(source, true)) return *target;
        if (auto target = exact_literal_translation(source)) return *target;
        return native_text_to_utf8(source);
    };
    const auto entity_name = [&](const NativeHistoryName &name) -> std::optional<std::string> {
        if (name.entity_type >= 0 && name.entity_id >= 0)
            return translate_history_entity_name(name, name.entity_id);
        // Match the old NameOnly wrapper's authored-field policy while keeping
        // entity qualifiers outside the character-name translator.
        if (name.language < 0 && name.nickname.empty() &&
                std::all_of(name.words.begin(), name.words.end(),
                    [](const auto &word) { return word.id.empty(); }))
            return native_text_to_utf8(name.first_name);
        return translate_history_name(name);
    };
    if (unit.form == NativeUnitIdentityForm::Reference) {
        std::string result;
        const auto reference_role = [&](auto &&self, std::string_view raw) -> std::string {
            const std::string_view source = trim_view(raw);
            const std::string folded = lower(std::string(source));
            // The native 103/104 (child/baby) branches keep their caste role
            // and append these statuses; adult roles are replaced outright.
            for (const auto &[suffix, target] : {
                    std::pair<std::string_view, std::string_view>{" slave", "奴隶"},
                    {" prisoner", "囚犯"}}) {
                if (folded.ends_with(suffix) && source.size() > suffix.size())
                    return self(self, source.substr(0, source.size() - suffix.size())) +
                        "（" + std::string(target) + "）";
            }
            if (auto target = translate_creature_label(source)) return *target;
            if (auto target = translate_unit_profession(source, false)) return *target;
            return field_text(source);
        };
        for (const auto &part : unit.reference_parts) {
            std::string value;
            switch (part.kind) {
            case NativeUnitReferencePartKind::Literal: {
                const std::string source = lower(trim(part.source));
                if (source.empty() || source == "the" || source == "a" || source == "an") break;
                if (source == "the force" || source == "force") value = "自然之灵";
                else if (source == "the deity" || source == "deity") value = "神祇";
                else if (source == "ghost" || source == "ghostly") value = "幽灵";
                else if (source == "one") value = "者";
                else if (source == "you") value = "你";
                else if (source == "stray") value = "无主的";
                else if (source == "fierce") value = "凶猛的";
                else if (source == "agitated") value = "躁动的";
                else if (source == "corpse") value = result.empty() ? "尸体" : "的尸体";
                else value = field_text(trim_view(part.source));
                break;
            }
            case NativeUnitReferencePartKind::Authored:
                // Animated names and modes 4/5's direct first-name field are
                // explicit literal strings, with no generated-name inference.
                value = native_text_to_utf8(part.source);
                break;
            case NativeUnitReferencePartKind::GivenName:
                // The known companion branch deliberately renders only the
                // selected identity's first_name. Never add surname WORDs or
                // a nickname which DF did not reveal on this branch.
                if (part.name.language < 0 || contains_cjk_utf8(part.source))
                    value = native_text_to_utf8(part.source);
                else {
                    const auto reviewed = native_name_reviewed_transliterations_.find(
                        lower_native_name(part.name.first_name));
                    value = reviewed != native_name_reviewed_transliterations_.end()
                        ? reviewed->second : transliterate_native_history_name(part.name.first_name);
                    if (value.empty()) value = native_text_to_utf8(part.source);
                }
                break;
            case NativeUnitReferencePartKind::Species:
                if (auto target = translate_creature_descriptor(part.source, true)) value = *target;
                else value = field_text(part.source);
                break;
            case NativeUnitReferencePartKind::Curse:
                if (auto target = translate_creature_descriptor(part.source, false)) value = *target;
                else value = field_text(trim_view(part.source));
                break;
            case NativeUnitReferencePartKind::Appearance: {
                // 717d30's distinguishing body/voice/RAW feature comes from
                // unit+13e8. The complete existing hover grammar owns colors,
                // body size and `<modifier>-<body part>` compounds.
                std::vector<size_t> origins;
                const auto target = RULESETS.translate_with_origins(
                    native_text_to_utf8(lower(trim(part.source))),
                    "::map_hover::unit::appearance", origins);
                value = (target ? *target : field_text(trim_view(part.source))) + "的";
                break;
            }
            case NativeUnitReferencePartKind::Role:
                if (!unit.custom_profession.empty()) {
                    const auto custom = exact_literal_translation(
                        "Unit custom profession: " + unit.custom_profession);
                    value = custom ? *custom : native_text_to_utf8(part.source);
                } else if (part.entity_present) {
                    const std::string suffix = " of " + part.entity_source;
                    const size_t at = part.source.rfind(suffix);
                    const std::string role = part.source.substr(0, at) +
                        part.source.substr(at + suffix.size());
                    // Office territories are entity names, not a character's
                    // English surname. Retain their existing name grammar.
                    const auto target = entity_name(part.entity_name);
                    const std::string territory = target && !target->empty() ? *target :
                        part.entity_source.empty() ? "无名势力" : native_text_to_utf8(part.entity_source);
                    value = territory +
                        "的" + reference_role(reference_role, role);
                } else value = reference_role(reference_role, part.source);
                break;
            case NativeUnitReferencePartKind::Title: {
                // The native reference formatter uses this part for an
                // entity qualifier captured separately from the unit name.
                const auto target = entity_name(part.name);
                value = "（" + (target && !target->empty() ? *target :
                    part.source.empty() ? "无名势力" : native_text_to_utf8(part.source)) + "）";
                break;
            }
            case NativeUnitReferencePartKind::Name: {
                NativeUnitIdentity identity;
                identity.form = NativeUnitIdentityForm::NameOnly;
                identity.name = part.name;
                identity.native_name = part.source;
                identity.native_name_words = part.native_name_words;
                identity.native_name_words_valid = part.native_name_words_valid;
                identity.english_name = part.english_name;
                const auto name = translate_native_unit_identity(identity);
                value = name && !name->empty() ? *name : native_text_to_utf8(part.source);
                if (!result.empty()) result += ' ';
                break;
            }
            }
            result += value;
        }
        return result.empty() ? std::nullopt : std::optional<std::string>(std::move(result));
    }
    const auto role = [&]() -> std::string {
        // An animated unit's explicit name replaces the entire role in DF.
        if (!unit.animated_name.empty()) return native_text_to_utf8(unit.animated_name);
        if (unit.native_role_authored) return native_text_to_utf8(unit.native_role);
        if (!unit.use_custom || unit.custom_profession.empty()) {
            // This is the game's actual RAW/occupation formatter result. Its
            // source type is known even if it happens to equal a custom name.
            const auto occupation = [&](std::string_view source) -> std::optional<std::string> {
                if (source.empty()) return std::string{};
                if (auto target = translate_creature_label(source)) return target;
                return translate_unit_profession(source, false);
            };
            if (unit.curse_named) {
                const auto curse_text = [&](std::string_view value) {
                    if (auto target = translate_creature_descriptor(value, false)) return *target;
                    return field_text(value);
                };
                const std::string source = normalize_utterance(unit.native_role);
                std::string_view base(source);
                std::string suffix;
                // Corpse follows the actual curse name/prefix in the native
                // role formatter; keep it outside the typed field boundary.
                constexpr std::string_view corpse = " corpse";
                if (unit.undead && lower(std::string(base)).ends_with(corpse)) {
                    if (const auto status = exact_literal_translation("corpse")) {
                        suffix = "的" + *status;
                        base.remove_suffix(corpse.size());
                    }
                }
                const std::string name = normalize_utterance(unit.curse_name);
                const std::string prefix = normalize_utterance(unit.curse_name_prefix);
                if (!name.empty()) {
                    if (base == name || base.ends_with(" " + name)) {
                        const auto core = occupation(trim_view(
                            base.substr(0, base.size() - name.size())));
                        if (core) return *core + (core->empty() ? "" : "／") +
                            curse_text(name) + suffix;
                    }
                } else if (!prefix.empty()) {
                    size_t at = 0;
                    const std::string folded = lower(std::string(base));
                    for (const std::string_view status : {"stray ", "fierce ", "agitated "})
                        if (folded.starts_with(status)) { at = status.size(); break; }
                    if (base.substr(at).starts_with(prefix) &&
                            (base.size() == at + prefix.size() ||
                             base[at + prefix.size()] == ' ')) {
                        const auto outer = at == 0 ? std::optional<std::string>(std::string{}) :
                            RULESETS.compose_bound_rule("::creatures::caste::name::prefix",
                                folded.substr(0, at));
                        const auto core = occupation(trim_view(base.substr(at + prefix.size())));
                        if (outer && core) return *outer + curse_text(prefix) + *core + suffix;
                    }
                }
            }
            if (auto target = translate_creature_label(unit.native_role)) return *target;
            if (auto target = translate_unit_profession(unit.native_role, false)) return *target;
            return native_text_to_utf8(unit.native_role);
        }
        std::string value;
        switch (unit.prefix) {
        case NativeUnitNamePrefix::Stray: value = "无主的"; break;
        case NativeUnitNamePrefix::Fierce: value = "凶猛的"; break;
        case NativeUnitNamePrefix::Agitated: value = "躁动的"; break;
        case NativeUnitNamePrefix::None: break;
        }
        if (unit.ghostly) value += creature_name_status_prefix.at("ghostly");
        if (unit.curse_named && unit.curse_name.empty() && !unit.curse_name_prefix.empty())
            value += field_text(unit.curse_name_prefix);
        // Only an explicit whole-field override can translate an authored
        // profession. Do not infer its meaning from ordinary role, species,
        // or procedural-name rules; all other custom wording stays literal.
        const auto custom = exact_literal_translation(
            "Unit custom profession: " + unit.custom_profession);
        value += custom ? *custom : native_text_to_utf8(unit.custom_profession);
        if (unit.curse_named && !unit.curse_name.empty()) value += field_text(unit.curse_name);
        if (unit.undead) value += "的尸体";
        return value;
    };
    const auto phonetic_word = [&](std::string_view word) -> std::string {
        if (word.empty()) return {};
        if (contains_cjk_utf8(word)) return native_text_to_utf8(word);
        const auto reviewed = native_name_reviewed_transliterations_.find(
            lower_native_name(std::string(word)));
        return reviewed != native_name_reviewed_transliterations_.end() && !reviewed->second.empty()
            ? reviewed->second : transliterate_native_history_name(word);
    };
    const auto phonetic_name = [&]() -> std::optional<std::string> {
        if (!unit.name.has_name || !unit.native_name_words_valid) return std::nullopt;
        // The game selected these precise WORD roots and their language.
        // Keep the established per-root pronunciation without splitting the
        // displayed name or substituting the WORDs' English meanings.
        std::string result;
        const bool nickname = !unit.name.nickname.empty();
        const auto nickname_target = nickname
            ? exact_literal_translation("Unit nickname: " + unit.name.nickname) : std::nullopt;
        const std::string nickname_text = nickname_target
            ? *nickname_target : native_text_to_utf8(unit.name.nickname);
        if (nickname && (unit.name.nickname_mode == 0 || unit.name.nickname_mode == 2))
            result = "“" + nickname_text + "”";
        else {
            result = phonetic_word(unit.name.first_name);
            if (nickname) result += "“" + nickname_text + "”";
        }
        if (nickname && unit.name.nickname_mode == 2) return result;
        const auto append_group = [&](size_t first, size_t last) {
            std::string group;
            for (size_t slot = first; slot <= last; ++slot)
                group += phonetic_word(unit.native_name_words[slot]);
            if (group.empty()) return;
            if (!result.empty()) result += "·";
            result += group;
        };
        append_group(0, 1);
        if (!unit.name.words[2].id.empty() || !unit.name.words[3].id.empty() ||
                !unit.name.words[5].id.empty()) append_group(2, 5);
        append_group(6, 6);
        return result.empty() ? std::nullopt : std::optional<std::string>(std::move(result));
    };
    const auto name = [&]() -> std::string {
        if (unit.native_name.empty()) return {};
        std::optional<std::string> value;
        // A first WORD group can occupy the visible given-name position
        // even when the native literal first_name is empty. Use its captured
        // native roots for pronunciation, rather than its English meanings.
        if (unit.english_name) {
            std::string given = unit.name.first_name;
            std::string given_target;
            if (given.empty() && unit.name.has_name && unit.native_name_words_valid &&
                    unit.name.nickname.empty()) {
                for (size_t slot = 0; slot < 2; ++slot) {
                    const auto &word = unit.native_name_words[slot];
                    if (word.empty()) continue;
                    const std::string target = phonetic_word(word);
                    if (target.empty()) {
                        given.clear();
                        given_target.clear();
                        break;
                    }
                    given += word;
                    given_target += target;
                }
            }
            value = translate_english_character_name(unit.native_name, given, given_target);
        }
        // A language-less name without WORD slots is literal authored data.
        else if (unit.name.language < 0 && unit.name.nickname.empty() &&
                std::all_of(unit.name.words.begin(), unit.name.words.end(),
                    [](const auto &word) { return word.id.empty(); }))
            value = native_text_to_utf8(unit.name.first_name);
        else if (unit.name.language < 0)
            value = translate_english_character_name(unit.native_name);
        else value = phonetic_name();
        std::string result = value && !value->empty() ? *value : native_text_to_utf8(unit.native_name);
        if (unit.name_quoted) result = "“" + result + "”";
        return result;
    };

    std::string result;
    if (unit.form != NativeUnitIdentityForm::Role) result = name();
    if (unit.form == NativeUnitIdentityForm::NameOnly) return result;
    if (unit.form == NativeUnitIdentityForm::Name && !result.empty()) return result;
    const std::string occupation = role();
    if (!result.empty() && !occupation.empty()) result += "，";
    result += occupation;
    if (unit.show_gender && unit.two_genders && (unit.sex == 0 || unit.sex == 1)) {
        // Keep the user's authored spelling and the native gelding marks.
        result += unit.use_custom && !unit.custom_profession.empty() ? "," : "，";
        if (unit.gelded) result += 'x';
        result += unit.sex == 0 ? "♀" : "♂";
        if (unit.gelded) result += 'x';
    }
    if (unit.include_status && unit.tame) {
        static constexpr std::array<std::string_view, 8> levels = {{
            "半野生", "已训练", "-已训练-", "+已训练+", "*已训练*",
            "≡已训练≡", "☼已训练☼", "驯服"
        }};
        const auto level = unit.training_level >= 0 && unit.training_level < 8
            ? static_cast<size_t>(unit.training_level) : 0;
        result += "(";
        result += levels[level];
        result += ")";
    }
    return result;
}
