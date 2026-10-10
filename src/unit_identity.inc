// A unit's profession can be drawn after its name or on its own continuation
// row. Keep occupation, office, territory and rated skills in the same parser.
std::optional<std::string> Overlay::translate_unit_profession(
        std::string_view raw, bool typed) const {
    if (const auto identity = native_unit_identity_source_target(raw)) return identity;
    const std::string source = normalize_utterance(raw);
    if (source.empty() || source.ends_with("...")) return std::nullopt;
    return memoize_identity_translation(typed ? 'P' : 'p', source,
            [&]() -> std::optional<std::string> {
    const std::string folded = lower(source);
    if (auto role = exact_literal_translation("Unit profession: " + folded)) return role;
    if (auto role = exact_literal_translation(source)) return role;
    // Generated religious offices share the Legends terms, which are kept
    // out of ordinary UI literal matching. Resolve their complete role here.
    if (auto role = translate_legends_office(source)) return role;

    // The semantic namespaces cover all standard professions and positions,
    // including case-sensitive skill captions used as occupations.
    std::string title = folded;
    bool initial = true;
    for (char &ch : title) {
        if (initial && ch >= 'a' && ch <= 'z') ch -= 'a' - 'A';
        initial = ch == ' ' || ch == '-';
    }
    if (auto role = exact_literal_translation(title)) return role;
    std::vector<size_t> origins;
    for (const auto scope : {"::positions::singular", "::positions::plural"})
        if (auto role = RULESETS.translate_with_origins(
                native_text_to_utf8(folded), scope, origins)) return role;
    if (auto role = RULESETS.translate_with_origins(
            native_text_to_utf8(title), "::professions::^0", origins)) return role;

    // Tame/unowned and agitated prefixes wrap the complete native role, not
    // only a species. Keep the caste prefix glossary authoritative.
    for (const std::string_view prefix : {"stray ", "fierce ", "agitated "}) {
        if (!folded.starts_with(prefix) || source.size() <= prefix.size()) continue;
        const auto status = RULESETS.compose_bound_rule(
            "::creatures::caste::name::prefix", std::string(prefix));
        const auto remainder = std::string_view(source).substr(prefix.size());
        auto role = translate_creature_label(remainder);
        if (!role) role = translate_unit_profession(remainder, typed);
        if (status && role) return *status + *role;
    }

    // Native role selection replaces adult roles with Slave/Prisoner, but
    // appends the status to child/baby caste roles (PE 0x132fd3c/0x132feb3).
    // Resolve the complete role before its status, including species words.
    for (const auto &[suffix, label] : {
            std::pair<std::string_view, std::string_view>{" slave", "Slave"},
            {" prisoner", "Prisoner"}}) {
        if (!folded.ends_with(suffix) || source.size() <= suffix.size()) continue;
        const auto remainder = std::string_view(source).substr(0, source.size() - suffix.size());
        auto role = translate_creature_label(remainder);
        if (!role) role = translate_unit_profession(remainder, typed);
        const auto status = exact_literal_translation(label);
        if (role && status) return *role + "（" + *status + "）";
    }

    // The same formatter appends Corpse after the selected RAW/office role
    // (PE 0x13301cb); preserve that role when resolving the animation suffix.
    constexpr std::string_view corpse = " corpse";
    if (folded.ends_with(corpse) && source.size() > corpse.size()) {
        const auto remainder = std::string_view(source).substr(0, source.size() - corpse.size());
        auto role = translate_creature_label(remainder);
        if (!role) role = translate_unit_profession(remainder, typed);
        const auto status = exact_literal_translation("corpse");
        if (role && status) return *role + "的" + *status;
    }

    // Native role formatters prepend Ghostly/ghostly to the complete role,
    // including an office's territory: Windows RVA 0x13300de, 0x1332f9c,
    // and 0x132f6d4. Their empty-role branches use Ghost/ghost instead.
    // Share the species status wording, but leave the remaining role intact
    // so its office, territory and occupation grammar can resolve together.
    constexpr std::string_view ghostly = "ghostly ";
    if (folded.starts_with(ghostly)) {
        const auto role = translate_unit_profession(source.substr(ghostly.size()), typed);
        const auto status = creature_name_status_prefix.find("ghostly");
        if (role && status != creature_name_status_prefix.end())
            return std::string(status->second) + *role;
    }

    // Native identities append necromancer to the current occupation/office.
    // Keep both meanings, including a custom role resolved in its typed slot,
    // rather than transliterating the combined title as a generated name.
    constexpr std::string_view necromancer = " necromancer";
    if (folded.ends_with(necromancer)) {
        const auto role = translate_unit_profession(
            source.substr(0, source.size() - necromancer.size()), typed);
        const auto status = exact_literal_translation("Necromancer");
        if (role && status) return *role + "／" + *status;
    }

    // Preserve the name's case and accents when an office appends a territory.
    // The title may itself contain "of", e.g. captain of the guard.
    // A territory can also contain "of". An unresolved shorter place such as
    // The Cavern must not make Baron of The Cavern a complete office prefix
    // and preempt the full territory The Cavern of Sundering.
    for (size_t at = folded.rfind(" of "); at != std::string::npos;
         at = at == 0 ? std::string::npos : folded.rfind(" of ", at - 1)) {
        const auto role_source = std::string_view(source).substr(0, at);
        const auto role = translate_unit_profession(role_source);
        if (!translation_complete_with_native_nicknames(role, role_source)) continue;
        const auto place_source = std::string_view(source).substr(at + 4);
        const auto place = translate_legends_place(place_source);
        if (translation_complete_with_native_nicknames(place, place_source))
            return *place + "的" + *role;
    }
    constexpr std::string_view resident = "resident ";
    if (folded.starts_with(resident)) {
        const auto prefix = exact_literal_translation("Unit profession: resident");
        const auto role = translate_unit_profession(source.substr(resident.size()), typed);
        if (prefix && role) return *prefix + *role;
    }
    // Labor records append a list of rated skills to an occupation.
    for (size_t at = 1; at < source.size(); ++at) {
        if (source[at - 1] != ' ' || source[at] == ' ') continue;
        const auto skills = translate_rated_skill_list(std::string_view(source).substr(at));
        if (!skills) continue;
        const auto role = translate_unit_profession(trim_view(
            std::string_view(source).substr(0, at)));
        if (!role) continue;
        std::string target = skills->size() == 1 && *role == skills->front().title
            ? std::string{} : *role;
        for (const auto &skill : *skills) {
            if (!target.empty()) target += "；";
            target += skill.target;
        }
        return target;
    }
    // Other/Dead lists and unit headers include race/caste before the role.
    for (size_t at = source.rfind(' '); at != std::string::npos;
         at = at == 0 ? std::string::npos : source.rfind(' ', at - 1)) {
        const auto species = translate_creature_descriptor(
            std::string_view(source).substr(0, at), true);
        if (!species) continue;
        const auto role = translate_unit_profession(source.substr(at + 1));
        if (role) return *species + *role;
    }
    // A proved role slot may contain an authored occupation. Resolve known
    // terms first, then retain its spelling instead of inventing a name.
    if (typed) {
        if (contains_cjk_utf8(source)) return native_text_to_utf8(source);
        if (auto role = translate_legends_term(folded, false);
                role && !role->empty() &&
                std::none_of(role->begin(), role->end(), [](unsigned char ch) {
                    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
                })) return role;
        return native_text_to_utf8(source);
    }
    return std::nullopt;
    });
}

std::optional<std::string> Overlay::translate_unit_identity(
        std::string_view raw, bool typed) const {
    if (const auto identity = native_unit_identity_source_target(raw)) return identity;
    // Sex markers are printable CP437 bytes, not whitespace to normalize.
    const std::string source(trim_view(raw));
    if (source.empty() || source.ends_with("...")) return std::nullopt;
    return memoize_identity_translation(typed ? 'I' : 'i', source,
            [&]() -> std::optional<std::string> {
    // Animal captions own their comma-delimited sex glyph and state. Resolve
    // that complete label before treating a comma as a profession separator.
    if (auto creature = translate_creature_label(source, nullptr, typed)) return creature;
    // The Other roster also contains live vermin item captions and their
    // counts. Resolve this specific item grammar before the authored-name
    // fallback preserves the entire caption; search shares this same entry.
    if (config_.compositional_rules) {
        std::vector<size_t> origins;
        if (auto creature = RULESETS.translate_with_origins(native_text_to_utf8(source),
                "::items::vermin::with_number", origins)) return creature;
    }
    const auto personal_name = [&](std::string_view value)
            -> std::optional<std::string> {
        if (typed && contains_cjk_utf8(value) && value.find('`') == std::string_view::npos)
            return native_text_to_utf8(value);
        if (value.find('`') != std::string_view::npos)
            return translate_legends_name(value, true);
        const std::string person(value);
        if (typed && native_name_language_masks_.contains(lower_native_name(person)))
            return translate_procedural_fragment(person, true);
        auto name = translate_procedural_fragment(person, false, false, {},
            ProceduralFragmentContext::personal_name);
        // A native given name may carry a generated epithet. Its native
        // identity, rather than title case alone, licenses that name grammar.
        const size_t titled = person.find(" the ");
        if (!name && titled != std::string::npos && titled > 0) {
            const std::string actor = person.substr(0, titled);
            if (native_name_language_masks_.contains(lower_native_name(actor)) ||
                    translate_procedural_fragment(actor, false, false, {},
                        ProceduralFragmentContext::personal_name))
                name = translate_legends_name(person, true);
        }
        // A unit slot proves ownership, not that a player's English spelling
        // is a generated name. Unknown authored text uses the same path in
        // either language and retains punctuation, digits and word spacing.
        if (!name && typed) name = native_text_to_utf8(value);
        return name;
    };
    const size_t comma = source.find(',');
    if (comma == std::string::npos) return personal_name(source);
    const auto person = trim_view(std::string_view(source).substr(0, comma));
    auto suffix = trim_view(std::string_view(source).substr(comma + 1));
    if (person.empty() || suffix.empty()) return std::nullopt;
    // Outside a native unit slot, a lone ordinary English noun before a
    // comma is not evidence of a person. Known native words, nicknames and
    // species retain their explicit identity; full names use their grammar.
    if (!typed && person.find(' ') == std::string_view::npos &&
        person.find('`') == std::string_view::npos && !contains_cjk_utf8(person) &&
        !native_name_language_masks_.contains(lower_native_name(std::string(person))) &&
        !translate_creature_label(person)) return std::nullopt;
    const std::string sex = take_unit_sex_suffix(suffix);
    auto role = translate_creature_label(suffix);
    if (!role) role = translate_unit_profession(suffix, typed);
    if (!role) return std::nullopt;
    auto name = translate_creature_label(person);
    if (!name && contains_cjk_utf8(person) && person.find('`') == std::string_view::npos)
        name = native_text_to_utf8(person);
    if (!name) name = personal_name(person);
    if (!name && !typed) name = translate_legends_name(person, true);
    return name ? std::optional<std::string>(*name + "，" + *role + sex) : std::nullopt;
    });
}

std::optional<std::string> Overlay::translate_dfhack_readable_unit_name(
        std::string_view raw) const {
    if (const auto identity = native_unit_identity_source_target(raw)) return identity;
    // Units::formatReadableName appends an English last-name gloss, then the
    // optional profession/caste. A nickname may contain quotes; only a
    // complete, recognized surname field licenses this split.
    for (size_t open = raw.rfind(" \""); open != std::string_view::npos;
            open = open ? raw.rfind(" \"", open - 1) : std::string_view::npos) {
        const size_t close = raw.find('"', open + 2);
        if (close == std::string_view::npos) continue;
        const auto native = trim_view(raw.substr(0, open));
        const auto gloss = trim_view(raw.substr(open + 2, close - open - 2));
        auto suffix = trim_view(raw.substr(close + 1));
        if (native.empty() || gloss.empty() ||
                (!suffix.empty() && suffix.front() != ',')) continue;
        // A later quote in a custom profession must not swallow the real
        // gloss into the native-name field. Only native nickname delimiters
        // can own quotes before the surname boundary.
        const auto nickname_open = native.find('`');
        const auto nickname_close = native.rfind('\'');
        std::string outside_nickname(native);
        if (nickname_open != std::string_view::npos &&
                nickname_close != std::string_view::npos && nickname_close > nickname_open)
            outside_nickname.erase(nickname_open, nickname_close - nickname_open + 1);
        if (outside_nickname.find('"') != std::string::npos) continue;
        const auto meaning = translate_english_character_name(gloss);
        if (!meaning) continue;
        const auto person = translate_unit_identity(native, true);
        if (!person) return std::nullopt;
        std::string name = *person + "，“" + *meaning + "”";
        if (suffix.empty()) return name;
        suffix = trim_view(suffix.substr(1));
        if (suffix.empty()) return std::nullopt;
        auto profession = translate_creature_label(suffix);
        if (!profession)
            profession = translate_unit_profession(normalize_utterance(suffix), true);
        return profession ? std::optional<std::string>(name + "，" + *profession)
                          : std::nullopt;
    }
    return raw.find('"') == std::string_view::npos
        ? translate_unit_identity(raw, true) : std::nullopt;
}
