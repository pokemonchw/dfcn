// Included in translate_history_event after item/subject/story/join helpers.
// Work IDs, reference roles and style decisions come exclusively from the
// native snapshot. Literal strings below index the existing reviewed tables.
const auto written_description_term = [&](std::string_view key) -> std::optional<Pieces> {
    for (int index : legends_description_rules_) {
        const Rule &rule = rules_[static_cast<size_t>(index)];
        if (rule.template_kinds.empty() && rule.source == key)
            return Pieces{piece(rule.target, neutral)};
    }
    return term(key);
};
// Native type labels use one vocabulary entry point in written references
// and page introductions, independently of their English sentence shapes.
const auto history_reference_kind = [&](const std::string &key) -> std::optional<Pieces> {
    const auto scope = announcement_combat_rules_.find("reference-kind");
    if (scope != announcement_combat_rules_.end())
        for (const auto &[captures, rule] : scope->second)
            if (rule.source == key && rule.template_kinds.empty()) return apply_rule(rule, {});
    if (auto result = written_description_term(key)) return result;
    const auto creature = translate_creature_descriptor(key);
    return creature ? std::optional<Pieces>(Pieces{piece(*creature, neutral)}) : std::nullopt;
};
const auto written_reference = [&](const std::string &prefix) -> std::optional<Pieces> {
    const int32_t route = number(prefix + ".route"), id = number(prefix + ".id");
    if (route == 0x72280) return Pieces{};
    if (!number(prefix + ".present")) {
        if (route == 0xeec6b0) return term("an unknown artifact");
        return Pieces{};
    }
    const auto named = [&](NativeHistoryObjectKind kind) {
        return subject(kind, id, false);
    };
    switch (route) {
    case 0xee0380: {
        static constexpr const char *values[] = {"law", "loyalty", "family", "friendship", "power", "truth",
            "cunning", "eloquence", "fairness", "decorum", "tradition", "artwork", "cooperation",
            "independence", "stoicism", "introspection", "self-control", "tranquility", "harmony",
            "merriment", "craftsmanship", "martial prowess", "skill", "hard work", "sacrifice",
            "competition", "perseverance", "leisure time", "commerce", "romance", "nature", "peace", "knowledge"};
        std::optional<Pieces> value = Pieces{};
        if (id >= 0 && id < static_cast<int32_t>(std::size(values)))
            value = scoped_apply("reference-value", values[id], {});
        if (!value) return std::nullopt;
        const int32_t level = number(prefix + ".subid");
        return scoped_apply("work-reference", level < -10 ? "the worthlessness of {s}" :
            level > 10 ? "the value of {s}" : "nuances of {s}", {*value});
    }
    case 0xee0ca0: {
#include "history_knowledge_keys.inc"
        for (const auto &entry : history_knowledge_keys)
            if (entry.category == id && entry.flag == static_cast<uint32_t>(number(prefix + ".subid")))
                return term(entry.key);
        return Pieces{}; // Native unknown category/flag emits no label.
    }
    case 0xef14a0: {
        const auto key = history_event_sphere_key(id);
        if (!key) return Pieces{};
        const auto found = deity_sphere_translations_.find(std::string(*key));
        if (found == deity_sphere_translations_.end()) return std::nullopt;
        return Pieces{piece(found->second, neutral)};
    }
    case 0xee3560: {
        const auto &key = text(prefix + ".label");
        if (key.empty()) return Pieces{};
        const auto name = native_raw_description(key, NativeSourceText::Name);
        return name ? std::optional<Pieces>(Pieces{piece(*name, neutral)}) : std::nullopt;
    }
    case 0xee02b0: {
        std::string language = lower(text(prefix + ".label"));
        std::replace(language.begin(), language.end(), '_', ' ');
        const auto label = term(language);
        return label ? scoped_apply("work-reference", "the {s} language", {*label}) : std::nullopt;
    }
    case 0xedfd50: case 0xedfe50: case 0xedffe0: case 0xee0170: {
        const auto kind = route == 0xedfd50 ? NativeHistoryObjectKind::Poem :
            route == 0xedfe50 ? NativeHistoryObjectKind::Music :
            route == 0xedffe0 ? NativeHistoryObjectKind::Dance : NativeHistoryObjectKind::WrittenContent;
        const auto name = number(prefix + ".named") ? named(kind) : std::optional<Pieces>(Pieces{});
        if (!name || route == 0xee0170) return name;
        return scoped_apply("work-reference", route == 0xedfd50 ? "{s} as a poetic form" :
            route == 0xedfe50 ? "{s} as a musical form" : "{s} as a dance form", {*name});
    }
    case 0xeedd40: return story(id);
    case 0xef2d60: return number(prefix + ".named") ? named(NativeHistoryObjectKind::Region) :
        std::optional<Pieces>(Pieces{});
    case 0xef5280:
        return number(prefix + ".named") ? named(NativeHistoryObjectKind::Entity) :
            scoped_apply("work-reference", "an unnamed group", {});
    case 0xef4350: {
        if (number(prefix + ".named")) return named(NativeHistoryObjectKind::Underground);
        static constexpr const char *keys[] = {"the depths of the world", "the fiery bowels of the earth", "the Underworld"};
        const int32_t type = number(prefix + ".layer_type");
        if (type < 0 || type > 2) return Pieces{};
        if (type == 1) return scoped_apply("work-reference", keys[type], {});
        return term(keys[type]);
    }
    case 0xef1770: case 0xef0690: {
        const auto label = history_reference_kind(text(prefix + ".label"));
        if (!label) return std::nullopt;
        if (!number(prefix + ".named")) return label;
        // Site references use subject's actual contiguous displayed link,
        // so a native-language name in writing remains phonetic and a quoted
        // English name keeps its own place translation. The reference ID
        // supplies ownership; the hidden native spelling is not English input.
        const auto name = named(route == 0xef1770 ? NativeHistoryObjectKind::Site : NativeHistoryObjectKind::Figure);
        return name ? scoped_apply("work-reference", "the {s} {s}", {*label, *name}) : std::nullopt;
    }
    case 0xeed3b0: {
        static constexpr const char *types[] = {"mead hall", "keep", "temple", "tower", "market", "tomb",
            "dungeon", "spire", "tavern", "library", "counting house", "guildhall", "tower", "hospital"};
        const int32_t type = number(prefix + ".building_type");
        std::optional<Pieces> label = Pieces{};
        if (type >= 0 && type < static_cast<int32_t>(std::size(types))) {
            const char *key = types[type];
            if (type == 6) {
                const int32_t sub = number(prefix + ".building_subtype");
                key = sub == 0 ? "dungeon" : sub == 1 ? "sewers" : sub == 2 ? "catacombs" : nullptr;
            }
            if (key) label = scoped_apply("reference-building-type", key, {});
        }
        if (!label) return std::nullopt;
        const auto name = number(prefix + ".name_has_name") ?
            subject(NativeHistoryObjectKind::Building, id, false, number(prefix + ".subid")) :
            std::optional<Pieces>(Pieces{});
        return name ? scoped_apply("work-reference", "the {s} {s}", {*label, *name}) : std::nullopt;
    }
    case 0xef49a0: case 0xef4c10: {
        const auto species = translate_creature_descriptor(text(prefix + ".label"));
        if (!species) return std::nullopt;
        std::optional<Pieces> result = Pieces{piece(*species, neutral)};
        const int32_t flags = number(prefix + ".flags");
        if (route == 0xef4c10) {
            if (flags & 1) return scoped_apply("work-reference", flags & 2 ?
                "a ghostly animated {s} corpse" : "a animated {s} corpse", {*result});
            if (flags & 2) return scoped_apply("work-reference", "a ghostly {s}", {*result});
            return result;
        }
        if (flags & 1) result = scoped_apply("reference-population", "animated {s} corpses", {*result});
        if (!result) return std::nullopt;
        if (flags & 2) result = scoped_apply("reference-population", "ghostly {s}", {*result});
        return result ? scoped_apply("work-reference", "a population of {s}", {*result}) : std::nullopt;
    }
    case 0xef4e10: return item(prefix);
    case 0xeec6b0: {
        const auto label = item(prefix);
        if (!label || !number(prefix + ".named")) return label;
        const auto name = named(NativeHistoryObjectKind::Artifact);
        return name ? scoped_apply("work-reference", "the {s} {s}", {*label, *name}) : std::nullopt;
    }
    default: return std::nullopt;
    }
};

const auto written_content = [&](const std::string &prefix, int carrier) -> std::optional<Pieces> {
    // carrier 0 = cc6a10 writing; 1 = cc7020 pages; 2 = body only.
    if (!number(prefix + ".present")) return carrier == 1 ?
        apply("The written portion consists of nothing.", {}) :
        apply("There used to be writing on the item.", {});
    const int32_t type = number(prefix + ".type"), quality = number(prefix + ".quality");
    static constexpr const char *forms[] = {"manual", "guide", "chronicle", "short story", "novel",
        "biography", "autobiography", "poem", "play", "letter", "essay", "dialog", "musical composition",
        "choreography", "comparative biography", "biographical dictionary", "genealogy", "encyclopedia",
        "cultural history", "cultural comparison", "alternate history", "treatise on technological evolution",
        "dictionary", "star chart", "star catalogue", "atlas"};
    std::optional<Pieces> form = Pieces{};
    if (type >= 0 && type < static_cast<int32_t>(std::size(forms))) form = written_description_term(forms[type]);
    if (!form) return std::nullopt;
    Pieces result;
    if (carrier != 2) {
        const bool titled = !text(prefix + ".title").empty();
        const bool authored = number(prefix + ".author_present") != 0;
        std::vector<Pieces> fields;
        std::string key;
        if (carrier == 1) {
            fields.push_back(Pieces{piece(std::to_string(number(prefix + ".pages")), neutral)});
            key = titled ? "The written portion consists of a {d} page {s}" :
                "The written portion consists of a {d} page untitled {s}";
        } else key = titled ? "Written on the item is a {s}" : "Written on the item is an untitled {s}";
        fields.push_back(*form);
        if (titled) {
            const auto title = translate_creative_title(text(prefix + ".title"));
            if (!title) return std::nullopt;
            fields.push_back(Pieces{piece(*title, neutral)}); key += " entitled {b}";
        }
        if (authored) {
            const auto &raw = text(prefix + ".author_name");
            std::optional<std::string> author;
            const auto author_subject = event.fields.find(prefix + ".author_name_subject");
            if (author_subject != event.fields.end() && author_subject->second.size() == 1) {
                const int32_t index = author_subject->second.front();
                if (index >= 0 && static_cast<size_t>(index) < event.subjects.size()) {
                    const auto &selected = event.subjects[static_cast<size_t>(index)];
                    if (selected.kind == NativeHistoryObjectKind::Identity && selected.id == -1 &&
                            selected.subid == -2 - index && selected.name.has_name)
                        author = translate_history_name(selected.name, true);
                }
            }
            // Historical captures may contain only the original spelling.
            // Prefer the complete selected identity whenever it is available.
            if (!author && !raw.empty()) {
                author = translate_procedural_fragment(raw, true, false, {}, ProceduralFragmentContext::generated_name);
                if (!author) {
                    std::istringstream words(raw); std::string word, value;
                    while (words >> word) {
                        const std::string part = native_language_word_display(word);
                        if (part.empty()) return std::nullopt;
                        if (!value.empty()) value += "·";
                        value += part;
                    }
                    author = std::move(value);
                }
            }
            if (!author && raw.empty()) author = std::string{};
            if (!author) return std::nullopt;
            auto part = piece(*author, neutral);
            for (size_t i = 0; i < document.tokens.size(); ++i) {
                const auto &token = document.tokens[i];
                if (token.link_type == 0 && token.link_id == number(prefix + ".author")) {
                    part.foreground_rgb = token.color; part.source_end = i + 1;
                    part.native_link_type = 0; part.native_link_id = token.link_id;
                    part.native_link_subid = token.link_subid;
                }
            }
            fields.push_back(Pieces{std::move(part)}); key += ", authored by {n}";
        }
        key += ".";
        const auto header = apply(key, fields);
        if (!header) return std::nullopt;
        join(result, *header);
    }
    const auto append = [&](std::optional<Pieces> value) {
        if (!value) return false;
        join(result, *value); return true;
    };
    const auto &purposes = numbers(prefix + ".purposes");
    std::vector<size_t> topics, chapters;
    for (size_t i = 0; i < purposes.size(); ++i) {
        if (purposes[i] == 0) topics.push_back(i);
        else if (purposes[i] == 5) chapters.push_back(i);
    }
    const auto reference = [&](size_t index) { return written_reference(prefix + ".ref." + std::to_string(index)); };
    if (topics.empty()) {
        if (!append(apply("The work has no particular subject.", {}))) return std::nullopt;
    } else {
        const auto first = reference(topics.front());
        if (!first) return std::nullopt;
        if (topics.size() == 1 && (type == 20 || type == 16)) {
            if (!append(scoped_apply("work-sentence", type == 20 ?
                "It asks the question, \"What if {s} had unfolded differently?\"" :
                "It concerns the lineage of {s}.", {*first}))) return std::nullopt;
        } else {
            Pieces joined = *first;
            for (size_t i = 1; i < topics.size(); ++i) {
                const auto next = reference(topics[i]);
                if (!next) return std::nullopt;
                const auto more = scoped_apply("work-reference-list", i + 1 == topics.size() ?
                    "{s} and {s}" : "{s}, {s}", {joined, *next});
                if (!more) return std::nullopt;
                joined = *more;
            }
            if (!append(scoped_apply("work-sentence", "It concerns {s}.", {joined}))) return std::nullopt;
        }
    }
    for (size_t i = 0; i < purposes.size(); ++i) {
        const char *key = purposes[i] == 6 ? "The writing conveys a moral lesson regarding {s}." :
            purposes[i] == 9 ? "The overall text emphasizes {s}." :
            purposes[i] == 7 ? "For lyrics, the composer has selected {s}." :
            purposes[i] == 8 ? "For musical accompaniment, the choreographer has selected {s}." : nullptr;
        if (!key) continue;
        const auto ref = reference(i);
        if (!ref || !append(scoped_apply("work-sentence", key, {*ref}))) return std::nullopt;
    }
    // cc5520..cc5d05 / jump table cc5d08: all 18 styles, three native
    // strengths each; eight styles switch their complete predicate at q20.
    static constexpr const char *styles[18][6] = {
        {"rapidly shifts between topics", "moves quickly from subject to subject", "takes frequent interesting tangents",
         "hopelessly meanders", "meanders somewhat", "gets off track from time to time"},
        {"bubbles over with cheerfulness", "is quite cheerful", "is fairly cheerful"},
        {"overflows with sadness", "is depressing", "has a touch of melancholy"},
        {"is thoroughly organized", "is clearly organized", "is organized", "is thoroughly mechanical", "is very rigid", "is a bit stiff"},
        {"is completely serious", "has a very serious tone", "is reasonably serious"},
        {"artfully flashes through seemingly disjoint topics", "breaks sharply between topics with regularity", "has some particularly crisp changes in topic",
         "is utterly disjointed", "skips around a lot", "occasionally changes topic abruptly"},
        {"uses only artful words and phrases selected with care", "is throughout ornate and refined", "has rare but particularly exquisite turns of phrase",
         "is excessively ornate", "is quite florid", "is somewhat showy"},
        {"drives forward relentlessly", "is full of force", "is forceful"},
        {"is a comedy treasure trove", "is quite humorous", "has a touch of humor", "is littered with terrible jokes inartfully told", "has poorly-executed humor", "tries and fails to be funny at times"},
        {"is artfully suffused with what would otherwise be childish and immature material", "contains a deft use throughout of what might be considered immature material", "manages an artful inclusion here and there of childish material",
         "is absolutely puerile", "is very childish", "is a bit immature"},
        {"indulges the author's every whim", "artfully indulges the author's fancies", "contains some asides related to the author's preferences",
         "is stunningly self-indulgent", "is quite self-indulgent", "is somewhat self-indulgent"},
        {"could only have been produced by a merciful spirit", "is quite touching", "shows a hint of tenderness"},
        {"is clear evidence of a compassionate being", "is very compassionate", "gives a feeling of compassion here and there"},
        {"is as vicious as can be", "is quite cruel", "has a hint of viciousness to it"},
        {"is a monument to concision", "is very concise", "is fairly crisp"},
        {"is a pit of bitter scorn", "is quite mocking in tone", "contains the occasional biting remark"},
        {"is a reservoir of amusingly clever quips", "is refreshingly witty", "has its moments of cleverness"},
        {"is an awe-inspiring wild rant", "careens forward as a rant", "tumbles out almost as a rant at times",
         "is a completely unhinged rant", "is a rant more or less", "descends to a rant in places"}
    };
    const auto &selected = numbers(prefix + ".styles"), &strengths = numbers(prefix + ".strengths");
    const auto style = [&](size_t index) -> std::optional<Pieces> {
        const int32_t id = selected[index], strength = strengths[index];
        if (id < 0 || id >= 18 || strength < 0 || strength > 2) return Pieces{};
        return written_description_term(styles[id][strength + (quality < 20 && styles[id][3] ? 3 : 0)]);
    };
    if (!selected.empty()) {
        if (strengths.size() < std::min<size_t>(2, selected.size())) return std::nullopt;
        const auto first = style(0);
        if (!first) return std::nullopt;
        if (selected.size() == 1) {
            if (!append(apply("The writing {s}.", {*first}))) return std::nullopt;
        } else {
            static constexpr uint8_t mood[] = {0,1,2,0,1,0,0,1,0,0,0,1,1,2,1,2,1,0};
            const auto negative = [&](int32_t id) { return id >= 0 && id < 18 &&
                (mood[id] == 2 || (mood[id] == 0 && quality < 20)); };
            const auto second = style(1);
            if (!second || !append(apply(negative(selected[0]) == negative(selected[1]) ?
                "The writing {s} and it {s}." : "The writing {s} yet it {s}.", {*first, *second}))) return std::nullopt;
        }
    }
    // cc69e0/cc69f4: five complete quality families, six q bands each.
    static constexpr uint8_t quality_family[] = {0,0,1,0,0,0,0,2,0,0,0,0,3,4,0,0,1,0,0,0,0,0,1,1,1,1};
    static constexpr const char *quality_keys[5][6] = {
        {"Overall, the prose is amateurish at best.", "Overall, the prose is not awful, but not very good either.", "Overall, the prose is passable.", "Overall, the prose is great.", "Overall, the prose is splendid.", "Overall, the prose is masterful."},
        {"Overall, this is a terrible compilation of information.", "Overall, the information is not compiled very well.", "Overall, this is a good source of information.", "Overall, this is a great source of information.", "Overall, the splendid source of information.", "Overall, the information is compiled masterfully."},
        {"Overall, the poetry is very, very bad.", "Overall, the poetry is not awful, but not very good either.", "Overall, the poetry is passable.", "Overall, the poetry is great.", "Overall, the poetry is inspired.", "Overall, the poetry is masterful."},
        {"Overall, the composition is atrocious.", "Overall, the composition is not awful, but not very good either.", "Overall, the composition is passable.", "Overall, the composition is great.", "Overall, the composition is inspired.", "Overall, the composition is masterful."},
        {"Overall, the choreography is just terrible.", "Overall, the choreography is not awful, but not very good either.", "Overall, the choreography is passable.", "Overall, the choreography is great.", "Overall, the choreography is inspired.", "Overall, the choreography is masterful."}
    };
    const int family = type >= 0 && type < 26 ? quality_family[type] : 0;
    const int band = quality < 10 ? 0 : quality < 20 ? 1 : quality < 30 ? 2 : quality < 40 ? 3 : quality < 50 ? 4 : 5;
    if (!append(apply(quality_keys[family][band], {}))) return std::nullopt;
    if (!chapters.empty()) {
        if (chapters.size() == 1) {
            if (!append(apply("The work has a single chapter.", {}))) return std::nullopt;
        } else if (!append(apply("The work has {d} chapters.",
            {Pieces{piece(std::to_string(chapters.size()), neutral)}}))) return std::nullopt;
        for (size_t i = 0; i < chapters.size(); ++i) {
            const auto ref = reference(chapters[i]);
            if (!ref) return std::nullopt;
            if (chapters.size() == 1) {
                if (!append(scoped_apply("work-sentence", "It covers {s}.", {*ref}))) return std::nullopt;
            } else if (!append(scoped_apply("work-sentence", "The {s} chapter covers {s}.",
                {Pieces{piece(std::to_string(i + 1), neutral)}, *ref}))) return std::nullopt;
        }
    }
    return result;
};
(void)written_content;
