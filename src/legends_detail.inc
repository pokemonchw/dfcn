// Legends has colored, independently clickable text, not an ordinary prose
// box. Resolve complete same-color runs before the global word matcher. Keep
// source spans for suppression, independently from translated pixel positions.
template <typename Resolver>
static auto legends_translation_work(Resolver &&resolve) -> decltype(resolve()) {
    TranslationWorkScope work;
    return resolve();
}

static constexpr std::array<std::string_view, 9> kLegendsCategories = {{
    "Historical figures", "Sites", "Artifacts", "Codices, scrolls, etc.", "Regions",
    "Underground regions", "Civilizations and other entities",
    "Structures", "Chronicles by age",
}};

static bool legends_unnamed_region_heading(std::string_view source) {
    // Native underground-region types emit these complete UI identities
    // instead of a native-name/quoted-gloss pair. They are not procedural
    // names or arbitrary `Unnamed ...` labels. Translation stays in the
    // same literal table used by the catalog and its translated search.
    const std::string folded = lower(std::string(trim_view(source)));
    return folded == "unnamed underground area" ||
        folded == "unnamed magma sea area" || folded == "unnamed underworld area";
}

struct LegendsBodyViewport {
    int right = 0;
    std::vector<SDL_Rect> scrollbars;
};

static LegendsBodyViewport legends_detail_body_viewport(const graphicst &gps) {
    LegendsBodyViewport viewport{gps.dimx - 2, {}};
    // The source grid extends behind the scrolling control. Its spare cells
    // are not translated text space. Reuse the live rail/arrow/thumb skins,
    // and reserve their column for the whole body so scrolling or hovering
    // the thumb cannot change paragraph widths or put links on the control.
    const SDL_Rect panel{1, 1, gps.dimx - 2, gps.dimy - 2};
    viewport.scrollbars = native_vertical_scrollbar_spans(gps, panel);
    for (const auto &bar : viewport.scrollbars)
        viewport.right = std::min(viewport.right, bar.x);
    return viewport;
}

static bool legends_narrative_start(std::string_view source) {
    // The biography is a paragraph just like a dated event. Its widget may
    // wrap well before the screen's right edge, so pixel/grid width cannot
    // distinguish a continuation from a new row of the relationship list.
    // Those lists contain names and parentheses, not these prose predicates.
    return source.starts_with("In ") || source.starts_with("This is ") ||
        source.starts_with("The slab reads ") || source.starts_with("was ") ||
        source.starts_with("is ") || source.find(" was ") != std::string_view::npos ||
        source.find(" is ") != std::string_view::npos ||
        source.find(" were ") != std::string_view::npos ||
        source.find(" has ") != std::string_view::npos ||
        source.find(" composed of ") != std::string_view::npos;
}

static std::optional<size_t> legends_feature_item_end(
        std::string_view source, size_t cursor) {
    // The native ceremony/procession list can contain a bare animal caste
    // name. It has no fixed predicate to anchor a TSV clause. Admit that noun
    // only at an item boundary in this one native sentence, never as a
    // general bare-term rule in biographies or other event prose.
    constexpr std::string_view prefix = "The event featured ";
    const size_t sentence = source.rfind(prefix, cursor);
    if (sentence == std::string_view::npos) return std::nullopt;
    const size_t begin = sentence + prefix.size();
    if (cursor < begin || source.find_first_of(".!?", begin) < cursor)
        return std::nullopt;
    if (cursor != begin) {
        const auto preceding = trim_view(source.substr(begin, cursor - begin));
        if (!preceding.ends_with(",") && !preceding.ends_with(" and"))
            return std::nullopt;
    }
    size_t end = std::min(source.find_first_of(",.;!?", cursor),
                         source.find(" and ", cursor));
    if (end == std::string_view::npos) end = source.size();
    return end > cursor ? std::optional<size_t>(end) : std::nullopt;
}

static std::optional<size_t> legends_feature_argument_end(
        std::string_view source, size_t cursor) {
    // These five native programs take one raw noun, not a noun list. Keep
    // the list's next `and` outside that argument, while nested story titles
    // retain their own comma/conjunction grammar and clickable identities.
    for (std::string_view prefix : {"mounted ", "the carrying of ",
            "the scattering of ", "the giving of ", "the sacrifice of "})
        if (source.substr(cursor).starts_with(prefix))
            return legends_feature_item_end(source, cursor);
    return std::nullopt;
}

static bool legends_number_field(std::string_view value) {
    value = trim_view(value);
    if (value.empty()) return false;
    const size_t begin = (value.front() == '-' || value.front() == '+') ? 1 : 0;
    return begin < value.size() && std::all_of(value.begin() + begin, value.end(),
        [](unsigned char ch) { return ch >= '0' && ch <= '9'; });
}

// Every typed field consumes at least one source byte. Find the earliest
// possible fixed fragments before translating any captures: if even these
// fragments cannot fit in order, no choice of typed names can make the rule
// match. This rejects impossible adjunct variants without changing either
// rule priority or the greedy capture order of the actual parser.
static bool legends_template_suffix_literals_fit(const Rule &rule,
        std::string_view source, size_t field, size_t at, size_t end, bool complete) {
    if (at > end || end > source.size() || field > rule.template_kinds.size())
        return false;
    source = source.substr(0, end);
    for (size_t i = field; i < rule.template_kinds.size(); ++i) {
        translation_work_step();
        const auto &literal = rule.template_literals[i + 1];
        if (at >= end) return false;
        size_t stop;
        if (complete && i + 1 == rule.template_kinds.size()) {
            if (literal.size() > end) return false;
            stop = end - literal.size();
            if (stop <= at || !template_literal_at(source, stop, literal,
                    rule.case_insensitive)) return false;
        } else {
            stop = literal.empty() ? at + 1 : find_template_literal(
                source, literal, at + 1, rule.case_insensitive);
            if (stop == std::string_view::npos) return false;
        }
        at = stop + literal.size();
    }
    // A complete numeric tail has a fixed endpoint. Reject a place/name in
    // an event-title year slot before translating its long actor prefix.
    // Earlier fields may use a later delimiter, so inspect only the final
    // whitespace-delimited number, a necessary condition for any such split.
    if (complete && !rule.template_kinds.empty() && rule.template_kinds.back() == 'd' &&
            rule.template_literals[rule.template_kinds.size() - 1].ends_with(" ")) {
        const size_t tail = end - rule.template_literals.back().size();
        const auto prefix = trim_view(source.substr(0, tail));
        const size_t word = prefix.find_last_of(' ');
        if (!legends_number_field(prefix.substr(word == std::string_view::npos ? 0 : word + 1)))
            return false;
    }
    return !complete || at == end;
}

static bool legends_template_literals_fit(const Rule &rule,
        std::string_view source, size_t begin, size_t end, bool complete) {
    if (begin > end || end > source.size() || rule.template_literals.empty())
        return false;
    source = source.substr(begin, end - begin);
    const auto &first = rule.template_literals.front();
    if (!template_literal_at(source, 0, first, rule.case_insensitive)) return false;
    return legends_template_suffix_literals_fit(rule, source, 0, first.size(),
        source.size(), complete);
}

std::optional<std::string> Overlay::translate_legends_unnamed_figure(
        std::string_view source) const {
    const std::string normalized = normalize_utterance(source);
    std::string_view species(normalized);
    constexpr std::string_view prefix = "Unnamed ";
    if (!species.starts_with(prefix)) return std::nullopt;
    species.remove_prefix(prefix.size());
    std::string_view sex;
    for (std::string_view value : {"female", "male"}) {
        if (species.starts_with(value) && species.size() > value.size() &&
                species[value.size()] == ' ') {
            sex = value;
            species.remove_prefix(value.size() + 1);
            break;
        }
    }
    // Only a complete RAW-backed/generated creature may occupy this field.
    // Unnamed areas, authored names, dates and clipped captions are not figures.
    const auto creature = translate_creature_descriptor(species, true);
    const auto unnamed = exact_literal_translation("Legends figure: Unnamed");
    if (!creature || !unnamed) return std::nullopt;
    std::string target = *unnamed + *creature;
    if (sex == "female") target += "（♀）";
    else if (sex == "male") target += "（♂）";
    return target;
}

std::optional<std::string> Overlay::translate_legends_name(
        std::string_view raw, bool person, bool entity_reference) const {
    return legends_translation_work([&]() -> std::optional<std::string> {
    TranslationWorkFrame work_frame("historical name", raw);
    // Normalization is for generated names, never the bytes inside an
    // explicitly authored nickname (including repeated spaces).
    std::string name = person && raw.find('`') != std::string_view::npos
        ? std::string(trim_view(raw)) : normalize_utterance(raw);
    if (name.empty() || name.ends_with("...")) return std::nullopt;
    const std::string memo_key = "legends name:" +
        std::to_string(reinterpret_cast<std::uintptr_t>(this)) + ":" +
        std::to_string(native_identity_translation_context()) + ":" +
        (person ? "person:" : "place:") +
        (entity_reference ? "entity:" : "unbound:") + name;
    return translation_work_memo(memo_key, [&]() -> std::optional<std::string> {
    // A typed actor/title can follow a lower-case article in prose. Preserve
    // its native name-group boundary while normalizing only that article;
    // the complete title-word validation below still rejects ordinary prose.
    if (person && (name.starts_with("the ") || name.starts_with("of ")))
        name.front() = static_cast<char>(name.front() - ('a' - 'A'));
    if (!person && entity_reference)
        if (const auto civilization = translate_civilization_reference(name))
            return civilization;
    // Native unit names enclose a nickname in `...'. It may replace the
    // given name or follow it, while the surname/title/OfX groups remain
    // outside the quotes. Resolve those name fields separately; rejecting
    // the backtick made otherwise complete reports fall through to word
    // overlays, and treating the whole caption as a title swallowed actions.
    if (person) {
        const size_t open = name.find('`');
        if (open != std::string::npos) {
            TranslationWorkFrame nickname_frame("native personal nickname", name);
            const size_t close = name.rfind('\'');
            if ((open > 0 && name[open - 1] != ' ') ||
                close == std::string::npos || close <= open + 1 ||
                (close + 1 < name.size() && name[close + 1] != ' '))
                return std::nullopt;
            // Native nickname editing uses SYMBOLS (0x17), so a backtick
            // inside the authored body is literal data. Several depicted
            // people also contain several backticks: prefer a proved list of
            // complete person fields over swallowing their separator into
            // one person's nickname. Every recursive candidate is shorter.
            if (name.find('`', open + 1) != std::string::npos) {
                const auto divisions = [](std::string_view value) {
                    std::vector<std::pair<size_t, size_t>> result;
                    for (size_t at = 0; at < value.size(); ++at) {
                        translation_work_step();
                        for (const std::string_view separator : {", and ", " and ", ", "}) {
                            if (!template_literal_at(value, at, separator, true)) continue;
                            const auto left = value.substr(0, at);
                            const auto right = value.substr(at + separator.size());
                            if (left.find('`') != std::string_view::npos &&
                                left.find('\'') != std::string_view::npos &&
                                right.find('`') != std::string_view::npos)
                                result.emplace_back(at, separator.size());
                        }
                    }
                    return result;
                };
                std::map<std::string_view, bool> sequence_cache;
                const auto sequence = [&](auto &&self, std::string_view value) -> bool {
                    TranslationWorkFrame work_frame;
                    if (const auto found = sequence_cache.find(value);
                            found != sequence_cache.end()) return found->second;
                    bool found = translate_legends_name(value, true).has_value();
                    for (const auto &[at, width] : divisions(value)) {
                        if (found) break;
                        found = translate_legends_name(value.substr(0, at), true).has_value() &&
                            self(self, value.substr(at + width));
                    }
                    sequence_cache.emplace(value, found);
                    return found;
                };
                for (const auto &[at, width] : divisions(name))
                    if (translate_legends_name(std::string_view(name).substr(0, at), true) &&
                            sequence(sequence, std::string_view(name).substr(at + width)))
                        return std::nullopt;
            }
            const auto before = trim_view(std::string_view(name).substr(0, open));
            const auto after = trim_view(std::string_view(name).substr(close + 1));
            const bool of_only = after.starts_with("of ") || after.starts_with("Of ");
            const auto given = before.empty() ? std::optional<std::string>(std::string{})
                : translate_legends_name(before, true);
            const auto rest = [&]() -> std::optional<std::string> {
                if (after.empty()) return std::string{};
                if (of_only) {
                    const auto owner = after.substr(3);
                    if (!generated_title_shape(owner)) return std::nullopt;
                    const auto title = english_character_names_.title(
                        native_text_to_utf8(after));
                    return title ? *title : native_text_to_utf8(owner) + "之";
                }
                // The nickname can replace the first-name group entirely,
                // leaving an English title as its next field. Its lower-case
                // article is a name-group separator, not ordinary prose.
                if (after.starts_with("the ") || after.starts_with("The ")) {
                    const auto epithet = after.substr(4);
                    if (!generated_title_shape(epithet)) return std::nullopt;
                    const auto title = english_character_names_.title(
                        native_text_to_utf8(epithet));
                    return title ? *title : native_text_to_utf8(epithet);
                }
                return translate_legends_name(after, true);
            }();
            if (!given || !rest) return std::nullopt;
            const auto nickname = std::string_view(name).substr(
                open + 1, close - open - 1);
            // Share the native identity's exact nickname overrides. Unknown
            // authored text retains its spelling even when it coincides with
            // an English term or generated epithet.
            auto nickname_target = exact_literal_translation(
                "Unit nickname: " + native_text_to_utf8(nickname));
            if (!nickname_target)
                nickname_target = exact_literal_translation(
                    "Unit nickname: " + std::string(nickname));
            std::string target = *given + "“" + (nickname_target
                ? *nickname_target : native_text_to_utf8(nickname)) + "”";
            if (of_only) return *rest + target;
            if (!rest->empty()) target += "·" + *rest;
            return target;
        }
        // Prayer, rescue and other actor slots can carry a native personal
        // name followed by an English epithet. Keep those two semantic
        // fields separate: a native given word retains its pronunciation,
        // while the title uses the English character-name renderer. The
        // untyped general-text parser need not first recognize the entire
        // mixed-language string.
        const size_t titled = name.find(" the ");
        if (titled != std::string::npos && titled > 0) {
            const auto epithet = std::string_view(name).substr(titled + 5);
            if (generated_title_shape(epithet)) {
                const auto actor = translate_legends_name(
                    std::string_view(name).substr(0, titled), true);
                const auto title = english_character_names_.title(
                    native_text_to_utf8(epithet));
                if (actor) return *actor + "·" +
                    (title ? *title : native_text_to_utf8(epithet));
            }
        }
        // A surname can be the first visible group when the given name is
        // absent. For either complete first group, an explicit OfX
        // suffix still belongs to the English character-name renderer.
        const size_t owned = name.find(" of ");
        if (owned != std::string::npos && owned > 0) {
            const auto head = std::string_view(name).substr(0, owned);
            const auto owner = std::string_view(name).substr(owned + 4);
            const size_t separator = head.find(' ');
            bool english_head = separator == std::string_view::npos &&
                !native_name_language_masks_.contains(lower_native_name(std::string(head))) &&
                english_character_names_.english_component(native_text_to_utf8(head));
            if (separator != std::string_view::npos) {
                const auto given = head.substr(0, separator);
                const auto surname = trim_view(head.substr(separator + 1));
                english_head = native_name_language_masks_.contains(
                        lower_native_name(std::string(given))) &&
                    english_character_names_.english_component(native_text_to_utf8(surname));
            }
            if (english_head && generated_title_shape(head) && generated_title_shape(owner))
                return translate_english_character_name(name);
        }
    }
    // Unknown places and unnamed building/location types are reviewed nouns,
    // not generated proper names. Resolve them in the scoped shared table.
    if (!person && (name.starts_with("a ") || name.starts_with("an ") ||
            name.starts_with("the ") || name == "unknown lands" ||
            (name.front() >= 'A' && name.front() <= 'Z'))) {
        if (const auto it = legends_terms_.find(name); it != legends_terms_.end())
            return it->second;
        if (const auto it = legends_terms_ci_.find(lower(name)); it != legends_terms_ci_.end())
            return it->second;
    }
    if (name.starts_with("an unknown ") || name == "unknown lands") {
        const auto it = legends_terms_.find(name);
        return it == legends_terms_.end() ? std::nullopt : std::optional<std::string>(it->second);
    }
    // Prose uses `the ...` for the same world/entity title whose heading
    // starts with `The ...`. Normalize only that article inside the typed
    // place/name field, then retain the complete title-shape validation.
    // Ordinary lower-case prose must not enter the proper-name fallback.
    if (!person && name.starts_with("the ")) name.front() = 'T';
    bool first = true;
    bool trailing_connector = false;
    std::istringstream words(name);
    std::string word;
    while (words >> word) {
        const unsigned char initial = static_cast<unsigned char>(word.front());
        const bool capital = (initial >= 'A' && initial <= 'Z') ||
            is_cp437_latin_letter_byte(initial);
        const bool connector = !first && (word == "the" || word == "of" ||
            word == "and" || word == "in" || word == "with" || word == "a" ||
            word == "an" || word == "for" || word == "to" || word == "from");
        if ((!capital && !connector) ||
            !std::all_of(word.begin(), word.end(), [](unsigned char ch) {
                return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ||
                    is_cp437_latin_letter_byte(ch) || ch == '-' || ch == '\'';
            })) return std::nullopt;
        first = false;
        trailing_connector = connector;
    }
    // Lower-case connectors belong BETWEEN title words, never at the end of
    // a complete name. Otherwise a program title swallows the next item's
    // `and a`, and an entity name can swallow its following location's `in`.
    if (trailing_connector) return std::nullopt;
    // A native given word must retain its phonetic identity even when it is
    // also English. A translated one-word compound, however, is the same
    // semantic name with or without its epithet. Do not phoneticize that
    // compound in every event while translating it in the figure heading.
    const bool single_person = person && name.find(' ') == std::string::npos;
    if (single_person && native_name_language_masks_.contains(lower_native_name(name)))
        return translate_procedural_fragment(name, true);
    // Named animals can omit the given-name field and display only a native
    // two-root surname. Require its complete same-language WORD/POS grammar
    // before treating it as an English name gloss; otherwise that literal
    // spelling makes the whole announcement's unit capture fail.
    if (single_person)
        if (auto native = translate_procedural_fragment(name, false, false, {},
                ProceduralFragmentContext::native_name_group)) return native;
    if (single_person && english_character_names_.english_component(
            native_text_to_utf8(name)))
        return translate_english_character_name(name);
    if (person && (name.starts_with("The ") || name.starts_with("Of "))) {
        const auto title = english_character_names_.title(native_text_to_utf8(name));
        if (title) return *title;
        return name.starts_with("Of ")
            ? native_text_to_utf8(std::string_view(name).substr(3)) + "之"
            : native_text_to_utf8(name);
    }
    // This is already a person slot. Resolve its native given/surname groups
    // through the personal-name grammar instead of reentering the complete
    // screen-text grammar on the same input. That grammar still requires
    // recognized native/name components before accepting a person.
    if (person && !single_person)
        if (auto translated = translate_procedural_fragment(name, false, false, {},
                ProceduralFragmentContext::personal_name)) return translated;
    auto quoted = translate_procedural_fragment("\"" + name + "\"", false, person, {},
        entity_reference ? ProceduralFragmentContext::generated_name
            : ProceduralFragmentContext::non_entity_name);
    if (quoted && quoted->starts_with("“") && quoted->ends_with("”"))
        return quoted->substr(3, quoted->size() - 6);
    return std::nullopt;
    });
    });
}

static bool journal_habitat_rule(const Rule &rule) {
    return rule.source == "This creature can be found in {p}." ||
        rule.source == "This creature lives in {p}.";
}

std::optional<std::string> Overlay::translate_journal_habitat_places(
        std::string_view source) const {
    return legends_translation_work([&]() -> std::optional<std::string> {
    TranslationWorkFrame work_frame("historical habitat places", source);
    source = trim_view(source);
    if (source.empty() || source.size() > 2048) return std::nullopt;
    // The native Bestiary emits complete generated names separated by commas
    // and a final " and ". Commas cannot occur inside a generated name; a
    // second capitalized "The" also starts a new name (internal articles are
    // lower case). Other "and" connectors first belong to the intact name.
    std::map<std::string_view, std::optional<std::string>> cache;
    const auto places = [&](auto &&self, std::string_view value,
                            unsigned depth) -> std::optional<std::string> {
        TranslationWorkFrame work_frame;
        value = trim_view(value);
        if (value.empty() || depth >= 32) return std::nullopt;
        if (const auto found = cache.find(value); found != cache.end()) return found->second;
        const auto publish = [&](std::optional<std::string> target) {
            cache.emplace(value, target);
            return target;
        };
        const size_t comma = value.find(", ");
        if (comma != std::string_view::npos) {
            const auto head = self(self, value.substr(0, comma), depth + 1);
            const auto tail = self(self, value.substr(comma + 2), depth + 1);
            return publish(head && tail
                ? std::optional<std::string>(*head + "、" + *tail) : std::nullopt);
        }
        const bool explicit_list = value.find(" and The ") != std::string_view::npos;
        if (!explicit_list)
            if (auto name = translate_legends_name(value, false)) return publish(std::move(name));
        // Try the longest complete leading name first. This keeps an internal
        // "and" in e.g. The Field of Gold and Silver before the next place.
        for (size_t at = value.rfind(" and "); at != std::string_view::npos;
             at = at == 0 ? std::string_view::npos : value.rfind(" and ", at - 1)) {
            translation_work_step();
            const auto tail_source = value.substr(at + 5);
            if (explicit_list && !tail_source.starts_with("The ")) continue;
            const auto head = self(self, value.substr(0, at), depth + 1);
            const auto tail = self(self, tail_source, depth + 1);
            if (head && tail) return publish(*head + "和" + *tail);
        }
        return publish(std::nullopt);
    };
    return places(places, source, 0);
    });
}

std::vector<int> Overlay::matching_legends_rules(std::string_view source) const {
    const std::string folded = lower(std::string(source));
    std::vector<int> result;
    // Expanded event families share a small set of predicate anchors. Scan
    // each anchor once per paragraph, not every expanded rule per capture.
    for (const auto &[anchor, rules] : legends_anchor_rules_)
        if (folded.find(anchor) != std::string::npos)
            result.insert(result.end(), rules.begin(), rules.end());
    std::sort(result.begin(), result.end()); // retain reviewed rule precedence
    return result;
}

std::optional<std::string> Overlay::translate_legends_term(
        std::string_view value, bool description) const {
    return legends_translation_work([&]() -> std::optional<std::string> {
    TranslationWorkFrame work_frame("historical term", value);
    if (value.empty()) return std::nullopt;
    const std::string memo_key = "legends term:" +
        std::to_string(reinterpret_cast<std::uintptr_t>(this)) + ":" +
        std::to_string(native_identity_translation_context()) + ":" +
        (description ? "description:" : "noun:") + std::string(value);
    return translation_work_memo(memo_key, [&]() -> std::optional<std::string> {
    // Offices and dispute types have scoped meanings in the same
    // reviewed TSV namespace as the prose, not a renderer dictionary.
    if (const auto it = legends_terms_.find(std::string(value)); it != legends_terms_.end())
        return it->second;
    if (const auto it = legends_terms_ci_.find(lower(std::string(value))); it != legends_terms_ci_.end())
        return it->second;
    // Reviewed knowledge subjects contain punctuation inside their full
    // names (colons and comma-separated geometric objects, for example).
    // Only those exact entries bypass the generic term's prose guard.
    if (description)
        if (auto target = translate_legends_description_term(value)) return target;
    if (value.find_first_of(".,;:!?()\"") != std::string_view::npos)
        return std::nullopt;
    for (const auto &[sex, marker] : {
            std::pair<std::string_view, std::string_view>{"female ", "（♀）"},
            {"male ", "（♂）"}}) {
        if (value.starts_with(sex)) {
            if (auto species = translate_creature_descriptor(value.substr(sex.size())))
                return *species + std::string(marker);
        }
    }
    // A generic term may be a species/caste, but an arbitrary translated UI
    // noun is not evidence of one. With the permissive creature branch,
    // `mayor of The Sling` became a creature-kind/owner phrase. In an office
    // event that let the greedy {s} steal part of the following entity name
    // at its internal `of`, and resolve it with ordinary modifier vocabulary.
    // Require a real species/typed creature here; offices still use the same
    // scoped terms above or complete literals below. The intact {p} then
    // shares the heading's WORD-aware name grammar, even in uncolored prose.
    if (auto translated = translate_creature_reference(value)) return translated;
    if (auto translated = exact_literal_translation(value)) return translated;
    // Native identity builders lowercase profession captions in running
    // prose. Some existing UI entries (e.g. Diagnostician) deliberately have
    // no case-insensitive flag. Reuse their complete caption inside this
    // typed term slot, before composition rejects the lowercase profession
    // and consequently its entire speaker/recipient and announcement.
    std::string caption(value);
    if (!caption.empty() && caption.front() >= 'a' && caption.front() <= 'z') {
        caption.front() -= 'a' - 'A';
        if (auto translated = exact_literal_translation(caption)) return translated;
    }
    // This slot owns a noun/descriptor, not a new complete screen phrase.
    // Use the same typed vocabularies as its native producers so an unknown
    // term cannot reenter book/topic/form through the general rule root.
    const std::string utf8 = native_text_to_utf8(value);
    const auto complete = [&](std::optional<std::string> target) -> std::optional<std::string> {
        std::vector<uint32_t> codepoints;
        if (!target || *target == utf8 || target->find("[C:") != std::string::npos ||
                target->find_first_of("\r\n") != std::string::npos ||
                !decode_utf8(*target, codepoints)) return std::nullopt;
        return target;
    };
    if (auto anatomy = complete(RULESETS.translate_anatomy(utf8))) return anatomy;
    std::vector<size_t> origins;
    for (const auto scope : {"::health::contaminant", "::health::condition", "::professions",
            "::positions::singular", "::positions::plural"}) {
        if (auto term = complete(RULESETS.translate_with_origins(utf8, scope, origins)))
            return term;
    }
    if (caption != value)
        if (auto profession = complete(RULESETS.translate_with_origins(
                native_text_to_utf8(caption), "::professions", origins)))
            return profession;
    if (auto material = complete(translate_material_name(value))) return material;
    if (auto item = complete(translate_legends_item(value))) return item;
    if (auto color = complete(translate_legends_color(value))) return color;
    if (auto color = complete(RULESETS.translate_color(utf8))) return color;
    // Appearance nouns/modifiers already have their own reviewed namespace.
    // Keep the personal-hair variant reserved for its explicit personal slot.
    for (const auto scope : {"::health::appearance::noun",
            "::health::appearance::common", "::health::appearance::degree"})
        if (auto appearance = complete(RULESETS.translate_with_origins(utf8, scope, origins)))
            return appearance;
    return std::nullopt;
    });
    });
}

std::optional<std::string> Overlay::translate_legends_office(
        std::string_view raw) const {
    const std::string value = normalize_utterance(raw);
    if (value.empty() || value.ends_with("...")) return std::nullopt;
    const std::string folded = lower(value);
    // The native event title uses one complete NAME/NAME_FEMALE/NAME_MALE
    // or RAW squad category field from entity_position. Office senses (master/chief)
    // win over UI literals, while the same position namespaces supply all
    // installed RAW titles, including their spouse and plural forms.
    if (const auto office = legends_terms_.find("Native history office: " + folded);
            office != legends_terms_.end()) return office->second;
    std::vector<size_t> origins;
    for (const auto scope : {"::positions::singular", "::positions::plural"})
        if (auto office = RULESETS.translate_with_origins(
                native_text_to_utf8(folded), scope, origins)) return office;
    // Court/civic and generated religious titles are complete scoped terms
    // in the shared Legends vocabulary. This field owns no appended
    // "of <territory>", species suffix or free compositional prose.
    if (const auto office = legends_terms_.find(value); office != legends_terms_.end())
        return office->second;
    if (const auto office = legends_terms_ci_.find(folded); office != legends_terms_ci_.end())
        return office->second;
    if (auto office = exact_literal_translation(value)) return office;
    std::string caption(value);
    if (caption.front() >= 'a' && caption.front() <= 'z') {
        caption.front() -= 'a' - 'A';
        if (auto office = exact_literal_translation(caption)) return office;
    }
    if (const auto spouse = creature_name_spouse.find(folded);
            spouse != creature_name_spouse.end()) return std::string(spouse->second);
    return std::nullopt;
}

static bool legends_office_capture(const Rule &rule, size_t field) {
    if (field >= rule.template_kinds.size() || rule.template_kinds[field] != 's' ||
            rule.template_literals.size() != rule.template_kinds.size() + 1)
        return false;
    const auto &before = rule.template_literals[field];
    const auto &after = rule.template_literals[field + 1];
    // The adventure journal supplies the same entity-owned office as a
    // history event. Its ordinary prose flag must not turn the owner into a
    // site field, including the plural "one of the" relationship forms.
    if (field == 0 && before.starts_with("This person is ") && after.starts_with(" of "))
        return true;
    if (before.ends_with("position of ") || before.ends_with("'s ascension to "))
        return true;
    if (after.starts_with(" of ") &&
            (before.ends_with("became the ") || before.ends_with("became ") ||
             before.ends_with("ceased to be the ") || before.ends_with("ceased to be ") ||
             before.ends_with("as the ") || before.ends_with("as a ") ||
             before.ends_with("symbol of a ") || before.ends_with("symbol of the ")))
        return true;
    return false;
}

static bool journal_site_entity_capture(const Rule &rule, size_t field) {
    // These native card statements name the site's owning entity. Their
    // source field is distinct from the actual site named in the header.
    return field == 0 &&
        (rule.source == "This site is the capital of {p}." ||
         rule.source == "This site is controlled by {p}." ||
         rule.source == "This site is a fortress of {p}.");
}

std::optional<std::string> Overlay::translate_legends_color(std::string_view value) const {
    // Reuse data/runtime/rulesets/zh-Hans/color.toml's generated color namespace, not the global species,
    // material or proper-name senses of cardinal, bronze, indigo, etc.
    const auto found = preference_terms.find("the color " + lower(normalize_utterance(value)));
    if (found == preference_terms.end()) return std::nullopt;
    return std::string(found->second);
}

std::optional<std::string> Overlay::translate_legends_description_term(
        std::string_view raw) const {
    return legends_translation_work([&]() -> std::optional<std::string> {
    TranslationWorkFrame work_frame("historical description term", raw);
    // Generated DESCRIPTION noun phrases have their own grammar, not a new
    // creature/material dictionary. Commas may join adjectives here ("long,
    // hanging tails"), but sentence punctuation and proper-name fallback are
    // forbidden. These rules never enter the global UI/prose word matcher.
    const std::string source = lower(normalize_utterance(raw));
    if (source.empty() || source.size() > 512 ||
        source.find_first_of(".;:!?()\"") != std::string::npos)
        return std::nullopt;
    if (const auto it = legends_description_cache_.find(source);
        it != legends_description_cache_.end()) return it->second;
    std::map<std::string, std::optional<std::string>> memo;
    auto resolve = [&](auto &&self, const std::string &value, unsigned depth)
            -> std::optional<std::string> {
        TranslationWorkFrame work_frame;
        if (value.empty() || depth >= 24) return std::nullopt;
        if (const auto it = memo.find(value); it != memo.end()) return it->second;
        auto complete = [](const std::optional<std::string> &target) {
            return target && !target->empty() &&
                std::none_of(target->begin(), target->end(), [](unsigned char ch) {
                    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
                });
        };
        for (int index : legends_description_rules_) {
            translation_work_step();
            const Rule &rule = rules_[static_cast<size_t>(index)];
            if (rule.template_kinds.empty() && value == rule.source) {
                memo.emplace(value, rule.target);
                return rule.target;
            }
        }
        // Preserve established complete terms before decomposing a phrase:
        // giant cave spider, goblin-cap and kobold bulb remain single terms.
        // Only an exact term belongs ahead of the description grammar.
        // The creature-name parser can concatenate arbitrary literal words
        // as race/status fields (very + small + humanoid), bypassing the
        // reviewed size phrasing and its grammatical noun connector.
        auto result = exact_literal_translation(value);
        if (complete(result)) { memo.emplace(value, result); return result; }
        for (int index : legends_description_rules_) {
            translation_work_step();
            const Rule &rule = rules_[static_cast<size_t>(index)];
            if (rule.template_kinds.empty()) {
                if (value == rule.source) { result = rule.target; break; }
                continue;
            }
            size_t end = 0;
            std::vector<std::string> captures;
            if (!match_template(rule, value, 0, &end, &captures) || end != value.size()) continue;
            std::vector<std::optional<std::string>> translated;
            for (size_t i = 0; i < captures.size(); ++i) {
                if (captures[i].size() >= value.size()) break;
                std::optional<std::string> target;
                switch (rule.template_kinds[i]) {
                case 's': target = self(self, captures[i], depth + 1); break;
                case 't': target = translate_legends_anatomy(captures[i]); break;
                case 'c':
                    if (const auto count = adventure_location_count(captures[i]))
                        target = std::to_string(*count);
                    break;
                default: break;
                }
                if (!complete(target)) break;
                translated.push_back(std::move(target));
            }
            if (translated.size() != captures.size()) continue;
            result = fill_template(rule, captures, &capture_translations_, nullptr, &translated);
            break;
        }
        // Profiles, generated species, materials and anatomy still use the
        // shared vocabulary, but only after the typed description templates.
        if (!complete(result)) result = translate_legends_term(value, false);
        if (!complete(result)) result.reset();
        memo.emplace(value, result);
        return result;
    };
    auto result = resolve(resolve, source, 0);
    if (!translation_work_exhausted()) {
        if (legends_description_cache_.size() >= 4096) legends_description_cache_.clear();
        legends_description_cache_.emplace(source, result);
    }
    return result;
    });
}

std::optional<std::string> Overlay::translate_legends_anatomy(std::string_view value) const {
    value = trim_view(value);
    // Shared with health/inventory, including the imported unusual BODY names.
    // There must not be a second child-before-owner fallback in event prose.
    return RULESETS.translate_anatomy(cp437_to_utf8(std::string(value)));
}

std::optional<std::string> Overlay::translate_legends_item(
        std::string_view value) const {
    return legends_translation_work([&]() -> std::optional<std::string> {
    TranslationWorkFrame work_frame("historical item", value);
    value = trim_view(value);
    const std::string memo_key = "legends item:" +
        std::to_string(reinterpret_cast<std::uintptr_t>(this)) + ":" +
        std::to_string(native_identity_translation_context()) + ":" +
        std::string(value);
    return translation_work_memo(memo_key, [&]() -> std::optional<std::string> {
    for (std::string_view article : {"a ", "an ", "the "}) {
        if (template_literal_at(value, 0, article, true)) {
            value.remove_prefix(article.size());
            break;
        }
    }
    // World-map artifact captions put native designation marks INSIDE the
    // article. Unwrap before the complete item parser, not only inside the
    // narrower equipment branch: marked stone jewelry needs the same material
    // segmentation as weapons, while retaining both original display marks.
    const auto designation = split_item_designation(value);
    if (!designation.prefix.empty()) {
        const auto item = translate_legends_item(designation.item);
        return item ? std::optional<std::string>(designation.prefix + *item + designation.suffix)
                    : std::nullopt;
    }
    // A stolen animal may carry a CP437 sex marker. Resolve the complete
    // species first; never pass an unknown item through proper-name fallback.
    if (value.size() > 3 && value[value.size() - 3] == ',' &&
        value[value.size() - 2] == ' ' &&
        (value.back() == '\x0b' || value.back() == '\x0c')) {
        if (auto animal = translate_creature_descriptor(value.substr(0, value.size() - 3)))
            return *animal + (value.back() == '\x0b' ? "（♂）" : "（♀）");
        return std::nullopt;
    }
    // The comma in the native trap-component prefix belongs to its noun.
    // Admit only that complete typed component before rejecting prose
    // punctuation, and reuse the existing material/specification ordering.
    if (template_literal_at(value, 0, "large, serrated ", true))
        return translate_embark_trap_component_name(value);
    // Filled pots put a size after the material: `(stoneware, large)`.
    // Resolve the complete container before the general prose comma guard;
    // the container parser still requires every material/size field to match.
    if (value.find_first_of("()") != std::string_view::npos)
        return translate_storage_container_item_name(value);
    if (value.empty() || value.find_first_of(".,;:!?\"") != std::string_view::npos)
        return std::nullopt;
    // Typed coin names retain their native issuer and the shared material/noun
    // compound instead of splitting the material and standalone coin noun.
    if (auto coin = translate_coin_item_name(value)) return coin;
    // A bare material is a noun; only a material inside a finished-item
    // compound uses its attributive form. Both come from one shared table.
    if (const auto *material = magical_material(value)) return material->noun;
    // This shared item path requires every word to be covered by the existing
    // material, creature, food and craft tables. In particular it preserves
    // multiword plants such as goblin-cap and kobold bulb as single terms.
    if (auto written = translate_legends_written_item(value)) return written;
    return translate_captured_embark_item_segments(value);
    });
    });
}

std::optional<std::string> Overlay::translate_legends_nested(
        const Rule &rule, std::string_view value, unsigned depth) const {
    return legends_translation_work([&]() -> std::optional<std::string> {
    TranslationWorkFrame work_frame("historical template", rule.source);
    if (depth >= 12 || value.empty() || value.size() > 2048) return std::nullopt;
    const std::string active_key = "legends nested:" +
        std::to_string(reinterpret_cast<std::uintptr_t>(this)) + ":" +
        std::to_string(native_identity_translation_context()) + ":" +
        std::to_string(reinterpret_cast<std::uintptr_t>(&rule)) + ":" +
        std::string(value);
    const std::string memo_key = active_key + '\0' + std::to_string(depth);
    return translation_work_memo(memo_key, [&]() -> std::optional<std::string> {
    if (rule.legends_event_title && world_age_source_shape(value))
        return translate_world_age(value, depth);
    if (rule.template_kinds.empty())
        return value.size() == rule.source.size() &&
            template_literal_at(value, 0, rule.source, rule.case_insensitive)
            ? std::optional<std::string>(rule.target) : std::nullopt;
    const auto &first = rule.template_literals.front();
    if (!template_literal_at(value, 0, first, rule.case_insensitive)) return std::nullopt;
    if (!rule.legends_match_anchor.empty() &&
        find_template_literal(value, rule.legends_match_anchor, 0,
            rule.case_insensitive) == std::string::npos) return std::nullopt;
    if (!legends_template_literals_fit(rule, value, 0, value.size(), true))
        return std::nullopt;
    std::vector<std::string> captures(rule.template_kinds.size());
    std::vector<std::optional<std::string>> translated(captures.size());
    // The native collection formatter inserts the ordinal after The, leaving
    // the nested title without its article. Keep this grammar shared by the
    // nested-title resolver. Era titles use their separate shared grammar.
    const bool spelled_ordinal = rule.legends_event_title &&
        rule.template_kinds.size() == 1 && rule.template_kinds.front() == 'e' &&
        rule.template_literals.size() == 2 &&
        rule.template_literals.front().starts_with("The ") &&
        rule.template_literals.front().size() > 5 &&
        rule.template_literals.front().back() == ' ' &&
        rule.template_literals.front().find(' ', 4) == rule.template_literals.front().size() - 1 &&
        rule.target_template_literals.size() == 2 &&
        rule.target_template_literals.front().starts_with("第") &&
        rule.target_template_literals.front().ends_with("次");
    const bool numeric_ordinal = rule.legends_event_title &&
        rule.template_kinds.size() == 2 && rule.template_kinds.front() == 'd' &&
        rule.template_kinds.back() == 'e' && rule.template_literals.size() == 3 &&
        rule.template_literals.front() == "The " &&
        (rule.template_literals[1] == "st " || rule.template_literals[1] == "nd " ||
         rule.template_literals[1] == "rd " || rule.template_literals[1] == "th ");
    // A capture's role, not the containing rule's identity, determines its
    // translation. Share that work between all rules trying the same source
    // span, while keeping species, offices and ordinary terms distinct.
    std::vector<std::string> capture_modes;
    capture_modes.reserve(rule.template_kinds.size());
    for (size_t field = 0; field < rule.template_kinds.size(); ++field) {
        std::string mode(1, rule.template_kinds[field]);
        switch (rule.template_kinds[field]) {
        case 'n':
            if (rule.legends_identity && rule.source == "\"{n}\"") mode += ":identity";
            break;
        case 'p':
            if (field > 0 && legends_office_capture(rule, field - 1))
                mode += ":office-owner";
            else if (journal_site_entity_capture(rule, field))
                mode += ":entity-owner";
            else if (rule.legends_event_title || rule.legends_participant_relation ||
                    rule.legends_identity)
                mode += ":reference";
            else mode += journal_habitat_rule(rule) ? ":habitat" : ":place";
            break;
        case 's':
            if (rule.legends_identity && field == 0 &&
                    (rule.source.starts_with("the {s} the {s}") ||
                     rule.source.starts_with("the {s} {s}") ||
                     rule.source.starts_with("a {s}") || rule.source.starts_with("an {s}")))
                mode += ":species";
            else if (rule.legends_identity && field == 1 &&
                    (rule.source.starts_with("the {s} the {s}") ||
                     rule.source.starts_with("the {s} {s}") ||
                     rule.source.starts_with("a {s} {s}") || rule.source.starts_with("an {s} {s}")))
                mode += ":profession";
            else if (legends_office_capture(rule, field))
                mode += ":office";
            else if (rule.legends_participant_relation && field == 0 &&
                    rule.source == "{s} of {p}") mode += ":office-term";
            else mode += ":term";
            break;
        case 'e':
            if (rule.template_literals.back().empty() && (spelled_ordinal || numeric_ordinal))
                mode += ":ordinal";
            break;
        default: break;
        }
        capture_modes.push_back(std::move(mode));
    }
    // Name connectors can also delimit typed fields. Backtrack within this
    // one reviewed grammar until every field AND the entire suffix resolve.
    // Earlier fields can revisit the same suffix through different splits;
    // only failed states are retained, so successful captures keep their
    // original longest-first selection and populate every translated field.
    std::set<std::pair<size_t, size_t>> failed_states;
    std::function<bool(size_t, size_t)> consume = [&](size_t field, size_t at) {
        TranslationWorkFrame work_frame;
        const auto state = std::make_pair(field, at);
        if (failed_states.contains(state)) return false;
        if (field == captures.size()) {
            if (at == value.size()) return true;
            failed_states.insert(state);
            return false;
        }
        const auto &literal = rule.template_literals[field + 1];
        // This parser owns the complete value. Its last capture must leave
        // exactly the final literal, never a shorter unconsumed suffix.
        const bool last = field + 1 == captures.size();
        for (size_t stop = last ? value.size() - literal.size() : value.size();
             stop > at; stop = last ? at : stop - 1) {
            translation_work_step();
            if (stop + literal.size() > value.size() ||
                !template_literal_at(value, stop, literal, rule.case_insensitive)) continue;
            if (literal.empty() && stop < value.size() && value[stop] != ' ' &&
                value[stop] != '.' && value[stop] != ',' && value[stop] != ';') continue;
            if (!legends_template_suffix_literals_fit(rule, value, field + 1,
                    stop + literal.size(), value.size(), true)) continue;
            const auto part = trim_view(value.substr(at, stop - at));
            if (part.empty() || part.size() >= value.size()) continue;
            const auto &mode = capture_modes[field];
            const std::string capture_active_key = "legends capture:" +
                std::to_string(reinterpret_cast<std::uintptr_t>(this)) + ":" +
                std::to_string(native_identity_translation_context()) + ":" +
                mode + ":" + std::string(part);
            const char kind = rule.template_kinds[field];
            std::string capture_key = capture_active_key;
            if (kind == 'a' || kind == 'n' || kind == 'e' || kind == 'b') {
                capture_key += '\0';
                capture_key += std::to_string(depth + 1);
            }
            auto target = translation_work_memo(capture_key, [&]() -> std::optional<std::string> {
            std::optional<std::string> target;
            switch (kind) {
            case 'a': target = translate_legends_participant(part, std::nullopt, depth + 1); break;
            case 'n':
                target = translate_legends_actor(part, depth + 1,
                    mode == "n:identity");
                break;
            case 'p':
                if (mode == "p:reference" || mode == "p:office-owner" ||
                        mode == "p:entity-owner") {
                    // Native +d8 subjects share this reference slot across
                    // sites, entities, buildings, geography and artifacts.
                    // Their participant/identity owner productions consume
                    // the same references when an actor recurses into them.
                    // Office owners and journal site controllers are supplied
                    // as entities, even if a site has the same spelling.
                    const bool entity_owner = mode == "p:office-owner" ||
                        mode == "p:entity-owner";
                    const auto accept_reference = [&](std::optional<std::string> candidate) {
                        if (translation_complete_with_native_nicknames(candidate, part))
                            target = std::move(candidate);
                    };
                    if (entity_owner) {
                        accept_reference(translate_civilization_reference(part));
                        if (!target) accept_reference(translate_legends_name(part, false, false));
                    }
                    // Otherwise an actual site's language/provenance wins.
                    // An unknown capitalized spelling returned unchanged
                    // must not prevent the complete generated-name grammar.
                    if (!target && !entity_owner) accept_reference(translate_site_reference(part));
                    if (!target) {
                        if (const auto term = legends_terms_.find(std::string(part));
                                term != legends_terms_.end()) accept_reference(term->second);
                        else if (const auto term = legends_terms_ci_.find(lower(std::string(part)));
                                term != legends_terms_ci_.end()) accept_reference(term->second);
                    }
                    if (!target) accept_reference(exact_literal_translation(part));
                    if (!target && !entity_owner)
                        accept_reference(translate_legends_name(part, false));
                    // An unresolved bound entity must not be returned again
                    // before the complete source-name grammar can run.
                    if (!target) accept_reference(translate_legends_name(part, false, false));
                    if (!target && !entity_owner) accept_reference(translate_legends_place(part));
                } else {
                    target = mode == "p:habitat"
                        ? translate_journal_habitat_places(part)
                        : translate_legends_place(part);
                }
                break;
            case 's':
                // The native identity can begin with a species followed by
                // a profession. Only the first slot in these unambiguous
                // forms is a species; a lone `the {s}` may be either field.
                // Keep every profession on the established term vocabulary.
                if (mode == "s:species")
                    target = translate_creature_descriptor(part, true);
                else if (mode == "s:profession") {
                    // This native identity slot is a complete occupation or
                    // office, including its territory and role modifiers.
                    // Reuse the strict unit-role grammar so scoped offices
                    // such as warlord cannot fall through to personal names.
                    target = translate_unit_profession(part, false);
                } else if (mode == "s:office") {
                    // Journal office statements share the history office
                    // vocabulary, including titles whose ordinary sense
                    // differs (master, chief). Keep this lookup scoped to
                    // the office slot; generated names use their own parser.
                    target = translate_legends_office(part);
                } else {
                    // This participant production can own an office (a
                    // claimant's title) or another reviewed noun. Prefer a
                    // complete registered office without making every owner
                    // phrase an office or dropping the existing noun grammar.
                    if (mode == "s:office-term")
                        target = translate_legends_office(part);
                    if (!target) target = translate_legends_term(part);
                }
                break;
            case 'e': {
                // Only complete ordinal productions may restore the article;
                // ordinary event/name captures retain their original grammar.
                if (mode == "e:ordinal" &&
                        !template_literal_at(part, 0, "The ", true))
                    target = translate_legends_event("The " + std::string(part), depth + 1);
                if (!target) target = translate_legends_event(part, depth + 1);
                break;
            }
            case 'b': target = translate_legends_book(part, depth + 1); break;
            case 'i': target = translate_legends_item(part); break;
            case 't': target = translate_legends_anatomy(part); break;
            case 'r': target = translate_deity_spheres(part); break;
            case 'q': target = translate_legends_color(part); break;
            case 'c':
                if (const auto count = adventure_location_count(lower(std::string(part))))
                    target = std::to_string(*count);
                break;
            case 'd': {
                size_t start = (part.front() == '-' || part.front() == '+') ? 1 : 0;
                if (start < part.size() && std::all_of(part.begin() + start, part.end(),
                        [](unsigned char ch) { return ch >= '0' && ch <= '9'; }))
                    target = std::string(part);
                break;
            }
            default: break;
            }
            return target;
            }, capture_active_key);
            // Art-image event subjects use this same nested grammar. A
            // successfully parsed actor may retain an authored nickname;
            // validate its original native field instead of rejecting the
            // whole event for the nickname's Latin letters.
            if (!translation_complete_with_native_nicknames(target, part)) continue;
            captures[field] = std::string(part);
            translated[field] = std::move(target);
            if (consume(field + 1, stop + literal.size())) return true;
        }
        failed_states.insert(state);
        return false;
    };
    if (!consume(0, first.size())) return std::nullopt;
    auto target = fill_template(rule, captures, &capture_translations_, nullptr, &translated);
    return translation_complete_with_native_nicknames(target, value)
        ? std::optional<std::string>(std::move(target)) : std::nullopt;
    }, active_key);
    });
}

std::optional<std::string> Overlay::translate_legends_event(
        std::string_view value, unsigned depth, bool named_fallback) const {
    return legends_translation_work([&]() -> std::optional<std::string> {
    TranslationWorkFrame work_frame("historical event", value);
    value = trim_view(value);
    if (depth >= 12) return std::nullopt;
    // Do not let an unresolved native era fall through to an ordinary
    // person/name template: Dragon can be both a species and a name word.
    if (world_age_source_shape(value)) return translate_world_age(value, depth);
    const std::string key = std::string(named_fallback ? "E:" : "E:typed:") +
        std::to_string(depth) + ":" + std::string(value);
    if (const auto it = legends_nested_cache_.find(key); it != legends_nested_cache_.end())
        return it->second;
    const auto cycle_revision = active_translation_work->cycle_revision;
    // A complete reviewed title wins over a generic title production. For
    // example, Age of Myth is an era, not Age of {a} with a person named Myth.
    std::optional<std::string> result;
    const auto candidates = legends_event_anchors_.candidates(value);
    // A literal title keeps its noun sense even when ordinary event prose
    // registers the same spelling as an action (e.g. an added chain).
    for (int index : candidates) {
        const Rule &rule = rules_[static_cast<size_t>(index)];
        if (rule.template_kinds.empty() && value.size() == rule.source.size() &&
                template_literal_at(value, 0, rule.source, rule.case_insensitive)) {
            result = rule.target;
            break;
        }
    }
    if (!result) {
        if (const auto term = legends_terms_.find(std::string(value)); term != legends_terms_.end())
            result = term->second;
        else if (const auto term = legends_terms_ci_.find(lower(std::string(value)));
                term != legends_terms_ci_.end()) result = term->second;
    }
    // 1452aaa calls the event's +d8 title before 1452b4d appends the
    // containing collection's +30 title. Establish that complete outer
    // production first so a collection's own date stays with the collection.
    // Both halves still have to resolve through the reviewed event grammar.
    if (!result && value.find(" during ") != std::string_view::npos)
        for (int index : candidates) {
            const Rule &rule = rules_[static_cast<size_t>(index)];
            if (rule.source != "{e} during {e}") continue;
            if (auto title = translate_legends_nested(rule, value, depth))
                { result = std::move(title); break; }
        }
    // Event 87 has a known artifact/HF/entity/site production. Resolve its
    // complete native title before a generic reference tries to absorb the
    // location or date as part of the artifact's name.
    if (!result && value.starts_with("the destruction of ")) {
        auto title = translate_announcement_combat(value, "artwork-artifact-destruction-title");
        if (translation_complete_with_native_nicknames(title, value)) result = std::move(title);
    }
    // All +d8 event title families append shared b92640's date after the
    // title. Resolve that complete field BEFORE expanded generic location
    // productions can repeatedly try it as an organization/person suffix.
    // Reuse In ... , for all fourteen native outputs: before-time, year,
    // and early/mid/late spring/summer/autumn/winter, without another glossary.
    for (size_t at = result ? std::string_view::npos : value.rfind(" in ");
         at != std::string_view::npos;
         at = at == 0 ? std::string_view::npos : value.rfind(" in ", at - 1)) {
        const std::string date = "In " + std::string(value.substr(at + 4)) + ",";
        for (int index : matching_legends_rules(date)) {
            const Rule &rule = rules_[static_cast<size_t>(index)];
            std::optional<std::string> translated_date;
            if (rule.template_kinds.empty()) {
                if (rule.source.starts_with("In ") && rule.source.ends_with(",") &&
                        date.size() == rule.source.size() &&
                        template_literal_at(date, 0, rule.source, rule.case_insensitive))
                    translated_date = rule.target;
            } else if (rule.template_kinds.size() == 1 && rule.template_kinds.front() == 'd' &&
                    rule.template_literals.size() == 2 &&
                    rule.template_literals.front().starts_with("In ") &&
                    rule.template_literals.back() == ",") {
                size_t end = 0;
                std::vector<std::string> captures;
                if (match_template(rule, date, 0, &end, &captures) && end == date.size())
                    translated_date = fill_template(rule, captures, &capture_translations_);
            }
            if (!item_description_translation_complete(translated_date)) continue;
            const auto event = translate_legends_event(value.substr(0, at), depth + 1,
                named_fallback);
            if (event) result = *translated_date + *event;
            break;
        }
        if (result) break;
    }
    if (!result) result = translate_announcement_combat(value, "historical-event-title");
    for (int index : candidates) {
        if (result) break;
        const Rule &rule = rules_[static_cast<size_t>(index)];
        const auto &first = rule.template_kinds.empty() ? rule.source : rule.template_literals.front();
        if (!template_literal_at(value, 0, first, rule.case_insensitive)) continue;
        if (!rule.legends_match_anchor.empty() && find_template_literal(value,
                rule.legends_match_anchor, 0, rule.case_insensitive) == std::string_view::npos) continue;
        if (auto title = translate_legends_nested(rule, value, depth))
            { result = std::move(title); break; }
    }
    // War/battle collections (PE 53.16 RVA 0xbc56b0) emit the native
    // name followed by a quoted English gloss when the two differ. Keep
    // the complete identity boundary: the ordinary name parser correctly
    // rejects commas and must not consume this as a fragment of prose.
    if (!result && split_generated_name_identity(value))
        result = translate_procedural_fragment(std::string(value));
    if (!result && named_fallback) result = translate_legends_name(value, false);
    if (!translation_work_exhausted() &&
            cycle_revision == active_translation_work->cycle_revision) {
        if (legends_nested_cache_.size() >= 8192) legends_nested_cache_.clear();
        legends_nested_cache_.insert_or_assign(key, result);
    }
    return result;
    });
}

std::optional<std::string> Overlay::translate_legends_actor(
        std::string_view value, unsigned depth, bool identity_context) const {
    return legends_translation_work([&]() -> std::optional<std::string> {
    TranslationWorkFrame work_frame("historical actor", value);
    value = trim_view(value);
    if (depth >= 12 || value.empty()) return std::nullopt;
    const std::string active_key = "legends actor:" +
        std::to_string(reinterpret_cast<std::uintptr_t>(this)) + ":" +
        std::to_string(native_identity_translation_context()) + ":" +
        (identity_context ? "identity:" : "name:") +
        std::string(value);
    const std::string memo_key = active_key + '\0' + std::to_string(depth);
    return translation_work_memo(memo_key, [&]() -> std::optional<std::string> {
    for (std::string_view pronoun : {"He", "She", "It", "They", "he", "she", "it", "they"})
        if (value == pronoun) return translate_legends_term(value);
    // A claimed identity is one person field, even though its printed name
    // can include a species, profession and organization. Enter its scoped
    // grammar through an explicit unit caption, native quotes or an unnamed
    // a/an form. In
    // particular, a normal generated name's internal `of` must retain the
    // existing name grammar instead of becoming an ownership production.
    const bool quoted_identity = value.size() >= 2 &&
        value.front() == '"' && value.back() == '"';
    const bool unnamed_identity = value.starts_with("a ") || value.starts_with("an ");
    if (identity_context || quoted_identity || unnamed_identity) {
        for (int index : legends_identity_rules_) {
            const Rule &rule = rules_[static_cast<size_t>(index)];
            if (!identity_context &&
                    !(quoted_identity && rule.source == "\"{n}\"") &&
                    !(unnamed_identity && (rule.source.starts_with("a ") ||
                                           rule.source.starts_with("an ")))) continue;
            // Nested captures are strictly shorter than their owning value,
            // and their actor calls carry this same recursion bound forward.
            if (auto identity = translate_legends_nested(rule, value, depth)) return identity;
        }
    }
    // The native biography builder uses this literal subject when a figure
    // has no name. It is prose, not a generated personal name. Resolve its
    // wording from the scoped dictionary, including inside existing {n} rules.
    if (value == "This nameless being" || value == "Nameless" ||
        value == "an unidentified creature") return translate_legends_term(value);
    if (value.starts_with("an unknown ")) return translate_legends_term(value);
    // Unnamed killers are creature descriptions, not generated people. This
    // covers every species/caste through the same vocabulary as named actors.
    for (std::string_view article : {"a ", "an ", "A ", "An "})
        if (value.starts_with(article))
            return translate_creature_descriptor(value.substr(article.size()));
    // Both the species grammar and generated-name grammar reject prose
    // punctuation. A native `...' nickname, however, is authored text and
    // can contain those bytes. Ignore only its delimited body here; the
    // person parser below still has to resolve the complete name on both
    // sides. Dates/actions outside that field must remain rejected.
    const size_t nickname_open = value.find('`');
    const size_t nickname_close = value.rfind('\'');
    const bool nickname = nickname_open != std::string_view::npos &&
        nickname_close != std::string_view::npos && nickname_close > nickname_open &&
        value.find('`', nickname_open + 1) == std::string_view::npos;
    const auto prose_punctuation = [&](std::string_view part) {
        return part.find_first_of(".,;:!?()\"") != std::string_view::npos;
    };
    if (nickname ? prose_punctuation(value.substr(0, nickname_open)) ||
            prose_punctuation(value.substr(nickname_close + 1)) : prose_punctuation(value))
        return std::nullopt;
    // After a full stop DF capitalizes the species article, not the species
    // itself ("The elf ..."). It still denotes the same typed person link.
    // The article belongs to a caste only when that caste is proved below.
    // A deity can have no first/surname group and start with its full English
    // title, e.g. The Scholar of Poems. Preserve that title for the name
    // fallback instead of discarding the native formatter's group boundary.
    auto species_value = value;
    if (species_value.starts_with("the ") || species_value.starts_with("The "))
        species_value.remove_prefix(4);
    // A creature descriptor can contain several words. Try the longest
    // complete species/caste before the proper name, not the first word.
    for (size_t at = species_value.rfind(' '); at != std::string_view::npos;
         at = at == 0 ? std::string_view::npos : species_value.rfind(' ', at - 1)) {
        // An arbitrary UI/name translation does not establish a caste.
        // Keep the native given name out of the species prefix, including
        // holders in the world-map artifact list. Generated multiword castes
        // still use the RAW-backed species and shared creature grammar.
        const auto species = translate_creature_descriptor(species_value.substr(0, at), true);
        if (!species) continue;
        const auto raw_name = trim_view(species_value.substr(at + 1));
        // A RAW-backed species establishes this person field. Utterance
        // names can be one proper given name without any T_WORD roots.
        const bool single_given = raw_name.size() >= 2 && raw_name.size() <= 192 &&
            raw_name.find_first_of(" \t\r\n") == std::string_view::npos &&
            !raw_name.ends_with("...") && generated_title_shape(raw_name);
        auto name = translate_legends_name(raw_name, true);
        if (single_given && !translation_complete_with_native_nicknames(name, raw_name))
            name = translate_english_character_name(raw_name, raw_name);
        if (name) return *species + "·" + *name;
    }
    return translate_legends_name(value, true);
    }, active_key);
    });
}

std::optional<std::string> Overlay::translate_legends_participant(
        std::string_view value, std::optional<bool> person, unsigned depth) const {
    return legends_translation_work([&]() -> std::optional<std::string> {
    TranslationWorkFrame work_frame("historical participant", value);
    value = trim_view(value);
    if (depth >= 12) return std::nullopt;
    for (std::string_view pronoun : {"He", "She", "It", "They", "he", "she", "it", "they"})
        if (value == pronoun) return translate_legends_term(value);
    if (person) return *person ? translate_legends_actor(value, depth)
                              : translate_legends_name(value, false);
    const std::string key = "A:" + std::to_string(depth) + ":" + std::string(value);
    if (const auto it = legends_nested_cache_.find(key); it != legends_nested_cache_.end())
        return it->second;
    const auto cycle_revision = active_translation_work->cycle_revision;
    auto resolve = [&]() -> std::optional<std::string> {
    // Uncolored event summaries can contain several participants just like
    // linked paragraphs. Reuse their reviewed ownership/list grammar.
    for (int index : legends_participant_rules_)
        if (auto participant = translate_legends_nested(rules_[static_cast<size_t>(index)], value, depth))
            return participant;
    // Gray fields have no link color. An article plus a complete known
    // species is still an unnamed actor; an entity title keeps its semantics.
    if (value.starts_with("a ") || value.starts_with("an ") ||
        value.starts_with("A ") || value.starts_with("An ") ||
        value.starts_with("the ")) return translate_legends_actor(value, depth);
    if (value.starts_with("The ")) {
        if (value.size() > 4 && value[4] >= 'a' && value[4] <= 'z')
            if (auto actor = translate_legends_actor(value.substr(4), depth))
                return actor;
        return translate_legends_name(value, false);
    }
    return translate_legends_actor(value, depth);
    };
    auto result = resolve();
    if (!translation_work_exhausted() &&
            cycle_revision == active_translation_work->cycle_revision) {
        if (legends_nested_cache_.size() >= 8192) legends_nested_cache_.clear();
        legends_nested_cache_.insert_or_assign(key, result);
    }
    return result;
    });
}

std::optional<std::string> Overlay::translate_legends_book(
        std::string_view value, unsigned depth) const {
    return legends_translation_work([&]() -> std::optional<std::string> {
    TranslationWorkFrame work_frame("historical book", value);
    const std::string normalized = normalize_utterance(value);
    value = normalized;
    if (value.empty() || value.ends_with("...") || depth >= 8) return std::nullopt;
    const std::string active_key = "legends book:" +
        std::to_string(reinterpret_cast<std::uintptr_t>(this)) + ":" +
        std::to_string(native_identity_translation_context()) + ":" +
        std::string(value);
    const std::string memo_key = active_key + '\0' + std::to_string(depth);
    return translation_work_memo(memo_key, [&]() -> std::optional<std::string> {
    // ANY_AGE contains a historical era title, including recurring ordinals
    // and generated creature/figure names. Keep it on the shared era grammar
    // before a generic book wrapper or personal-name fallback splits it.
    if (const auto age = translate_world_age(value, depth)) return age;
    std::string subject = lower(std::string(value));
    // Native BOOK_INSTRUCTION: [NAME] In [ANY_AGE]. Try complete era suffixes
    // from the right because NAME can contain its own In/And/Of fragments.
    // Only the NAME slot recurses through the ordinary book subject grammar.
    for (size_t at = subject.rfind(" in "); at != std::string::npos;
            at = at == 0 ? std::string::npos : subject.rfind(" in ", at - 1)) {
        if (at == 0 || at + 4 >= value.size()) continue;
        const auto era_source = value.substr(at + 4);
        if (!world_age_source_shape(era_source)) continue;
        const auto age = translate_world_age(era_source, depth + 1);
        if (!age) return std::nullopt;
        if (const auto title = translate_legends_book(
                trim_view(value.substr(0, at)), depth + 1))
            return *age + "的" + *title;
        return std::nullopt;
    }
    // A complete era may contain In inside its generated name, so try its
    // native identity before the wrapper above. A book ending in Golden Age
    // also has this broad shape; reject unresolved eras only after wrappers.
    if (world_age_source_shape(value)) return std::nullopt;
    // The Age is the native empty-history fallback, without a named era's
    // shape. Its reviewed book template continues through the normal path.
    // Instructional titles have printed subject aliases in addition to the
    // short research topics. Resolve a whole subject before the generic
    // conjunction/colon wrappers can split it into unrelated name words.
    if (const auto found = legends_terms_ci_.find("book title phrase: " + subject);
            found != legends_terms_ci_.end()) return found->second;
    if (const auto found = legends_terms_ci_.find("book title subject: " + subject);
            found != legends_terms_ci_.end()) return found->second;
    if (subject.starts_with("the ")) subject.erase(0, 4);
    if (const auto found = legends_terms_ci_.find("book title subject: " + subject);
            found != legends_terms_ci_.end()) return found->second;
    if (const auto topic = RULESETS.compose_bound_rule("::activities::topic", subject))
        return topic;
    if (const auto found = legends_terms_ci_.find(lower(std::string(value)));
            found != legends_terms_ci_.end()) return found->second;
    // Resolve complete native book productions before testing their whole
    // text as an office, material or item. Newly exposed rows on scrolling
    // have no complete-title cache entry yet; only the production's actual
    // subject should enter those noun namespaces.
    // A subject can contain the wrapper's own conjunction or colon. The
    // nested matcher retains all valid boundaries and complete suffixes.
    for (int index : legends_book_rules_)
        if (auto title = translate_legends_nested(
                rules_[static_cast<size_t>(index)], value, depth)) return title;
    // Historical-figure subject references can supply a caste descriptor
    // instead of a personal name; sphere references supply one exact sphere.
    // Both native branches retain their existing semantic dictionaries.
    const bool noun_subject = !item_term_contains_sentence_punctuation(value);
    if (noun_subject)
        if (const auto creature = translate_creature_reference(value)) return creature;
    if (const auto sphere = deity_sphere_translations_.find(subject);
            sphere != deity_sphere_translations_.end()) return sphere->second;
    auto article_free = value;
    if (template_literal_at(article_free, 0, "the ", true))
        article_free.remove_prefix(4);
    // Historical-figure references can replace a name with the selected
    // gender-specific office title from entity RAWs. Resolve that complete
    // singular office through its existing semantic namespace.
    const std::string noun_source = lower(std::string(article_free));
    if (const auto office = legends_terms_.find("Native history office: " + noun_source);
            office != legends_terms_.end()) return office->second;
    if (noun_subject) {
        std::vector<size_t> office_origins;
        if (const auto office = RULESETS.translate_with_origins(
                native_text_to_utf8(noun_source), "::positions::singular", office_origins))
            return office;
        // Noun references still use their existing namespaces after complete
        // book productions. Unrelated punctuated prose cannot expand them.
        if (const auto material = translate_material_name(article_free)) return material;
        if (const auto item = translate_legends_item(value)) return item;
    }
    // BOOK_ART NOUN selects a complete singular/plural WORD form, without
    // compound-name flags. Its noun sense must not inherit a homonymous
    // adjective or verb, and a multiword form must remain one source field.
    if (const auto found = legends_terms_ci_.find("book title noun: " + noun_source);
            found != legends_terms_ci_.end()) return found->second;
    if (const auto forms = name_editor_word_forms_.find(noun_source);
            forms != name_editor_word_forms_.end()) {
        std::optional<std::string> noun;
        bool ambiguous = false;
        for (const auto &meaning : forms->second) {
            if (meaning.part_of_speech != ProceduralNamePartOfSpeech::noun) continue;
            if (noun && *noun != meaning.gloss) { ambiguous = true; break; }
            noun = meaning.gloss;
        }
        if (noun && !ambiguous) return noun;
    }
    if (const auto place = translate_book_site_subject(value)) return place;
    if (const auto person = translate_procedural_fragment(std::string(value), false,
            false, {}, ProceduralFragmentContext::personal_name)) return person;
    // BOOK_ART has both [ADJ] [NO_ART_NAME] and [NAME] [ADJ]. The same
    // reviewed RAW adjective must precede its subject in Chinese in either
    // production. Select its grammatical role, rather than transliterating
    // a suffix or treating it as the noun at the end of a generated name.
    const auto adjective = [&](std::string_view raw) -> std::optional<std::string> {
        const std::string folded = lower(std::string(raw));
        if (const auto found = legends_terms_ci_.find("book title adjective: " + folded);
                found != legends_terms_ci_.end()) {
            std::string modifier = found->second;
            if (!modifier.ends_with("的")) modifier += "的";
            return modifier;
        }
        const auto forms = name_editor_word_forms_.find(folded);
        if (forms == name_editor_word_forms_.end()) return std::nullopt;
        std::optional<std::string> gloss;
        for (const auto &meaning : forms->second) {
            if (meaning.part_of_speech != ProceduralNamePartOfSpeech::adjective) continue;
            if (gloss && *gloss != meaning.gloss) return std::nullopt;
            gloss = meaning.gloss;
        }
        if (gloss && !gloss->ends_with("的")) *gloss += "的";
        return gloss;
    };
    auto base = value;
    if (template_literal_at(base, 0, "the ", true)) base.remove_prefix(4);
    for (size_t at = base.find(' '); at != std::string_view::npos;
            at = base.find(' ', at + 1)) {
        if (const auto modifier = adjective(base.substr(0, at)))
            if (const auto title = translate_legends_book(base.substr(at + 1), depth + 1))
                return *modifier + *title;
    }
    for (size_t at = value.rfind(' '); at != std::string_view::npos;
            at = at == 0 ? std::string_view::npos : value.rfind(' ', at - 1)) {
        if (const auto modifier = adjective(value.substr(at + 1)))
            if (const auto title = translate_legends_book(value.substr(0, at), depth + 1))
                return *modifier + *title;
    }
    return translate_procedural_fragment(std::string(value), false, false, {},
        ProceduralFragmentContext::book_title);
    }, active_key);
    });
}

std::optional<std::string> Overlay::translate_legends_text(
        std::string_view raw, bool link, bool person) const {
    return legends_translation_work([&]() -> std::optional<std::string> {
    TranslationWorkFrame work_frame;
    const std::string source = normalize_utterance(raw);
    if (!link)
        if (const auto fact = translate_world_site_entity_fact(source)) return fact;
    const std::string key = std::string(link ? (person ? "P:" : "L:") : "T:") + source;
    if (const auto found = legends_translation_cache_.find(key);
        found != legends_translation_cache_.end()) return found->second;
    const auto cycle_revision = active_translation_work->cycle_revision;
    const auto matching_rules = matching_legends_rules(source);
    auto resolve = [&]() -> std::optional<std::string> {
        if (!link)
            if (auto event = translate_announcement_combat(source, "historical-event-paragraph"))
                return event;
        // Item descriptions share the same complete grammar in Legends and
        // symbol pickers, before generic clauses can separate their materials,
        // decoration lists, inscriptions and image relationships.
        if (!link)
            if (auto item = translate_item_description_source(source)) return item;
        // Exact colors do not necessarily coincide with grammar boundaries:
        // a run can contain several sentences, or just a verb between links.
        // h rules are a separate TSV namespace and never replace global `was`,
        // `in`, or English syllables inside generated proper names.
        std::string output;
        size_t cursor = 0;
        while (cursor < source.size()) {
            if (source[cursor] == ' ') { ++cursor; continue; }
            size_t best_end = cursor;
            std::optional<std::string> best;
            const auto feature_argument_end = legends_feature_argument_end(source, cursor);
            for (int index : matching_rules) {
                const Rule &rule = rules_[static_cast<size_t>(index)];
                if (!rule.legends_match_anchor.empty() &&
                    find_template_literal(source, rule.legends_match_anchor, cursor,
                                          rule.case_insensitive) == std::string::npos) continue;
                size_t end = cursor;
                std::vector<std::string> captures;
                if (rule.numeric_template || rule.string_template) {
                    std::string_view match_source = source;
                    if (feature_argument_end && std::any_of(rule.template_kinds.begin(),
                            rule.template_kinds.end(), [](char kind) {
                                return kind == 's' || kind == 'i';
                            }))
                        match_source = match_source.substr(0, *feature_argument_end);
                    if (!match_template(rule, match_source, cursor, &end, &captures)) continue;
                } else {
                    if (!template_literal_at(source, cursor, rule.source,
                                             rule.case_insensitive)) continue;
                    end += rule.source.size();
                }
                if (end <= best_end || !has_word_boundaries(source, cursor, end)) continue;
                if (rule.source == "{n} the {s}," || rule.source == "{n} the {s}") {
                    // A figure-list link can include both an English epithet
                    // and a species suffix. The flat matcher finds the first
                    // ` the `, which belongs to the epithet, not the species.
                    // Keep its row/comma boundary, but resolve the fields with
                    // the shared typed backtracking used by nested Legends
                    // names. This retains the complete epithet, multiword
                    // species and reviewed TSV wording as one clickable run;
                    // dates after the comma remain a separate field.
                    if (auto target = translate_legends_nested(rule,
                            std::string_view(source).substr(cursor, end - cursor), 0)) {
                        best = std::move(target);
                        best_end = end;
                    }
                    continue;
                }
                std::vector<std::optional<std::string>> translated(captures.size());
                bool intact = true;
                for (size_t i = 0; i < captures.size(); ++i) {
                    switch (rule.template_kinds[i]) {
                    case 'a': translated[i] = translate_legends_participant(captures[i],
                        link ? std::optional<bool>(person) : std::nullopt); break;
                    case 'n': translated[i] = translate_legends_actor(captures[i]); break;
                    case 'p':
                        if (journal_habitat_rule(rule)) {
                            translated[i] = translate_journal_habitat_places(captures[i]);
                            break;
                        }
                        if (i + 1 == captures.size() &&
                            rule.source.ends_with(" of {p}")) {
                            // An unlinked owner may share gray with the
                            // following location connector. It is not part of
                            // the entity's title even though `in` is allowed
                            // inside other generated-name grammars.
                            size_t stop = captures[i].find(" in ");
                            if (stop == std::string::npos && captures[i].ends_with(" in"))
                                stop = captures[i].size() - 3;
                            if (stop != std::string::npos) {
                                end -= captures[i].size() - stop;
                                captures[i].resize(stop);
                            }
                        }
                        translated[i] = translate_legends_place(captures[i]);
                        // A final name capture can share gray with the next
                        // connective or punctuation. Stop at the longest
                        // complete name, then let the scoped grammar handle
                        // the remaining `in`, period, etc. on its next step.
                        if (!translated[i] && i + 1 == captures.size() &&
                            rule.template_literals.back().empty()) {
                            const std::string value = captures[i];
                            for (size_t stop = value.size(); stop-- > 1;) {
                                if (value[stop] != ' ' && value[stop] != '.' &&
                                    value[stop] != ',' && value[stop] != ';') continue;
                                const auto name = translate_legends_place(
                                    std::string_view(value).substr(0, stop));
                                if (!name) continue;
                                end -= value.size() - stop;
                                captures[i].resize(stop);
                                translated[i] = name;
                                break;
                            }
                        }
                        break;
                    case 's': translated[i] = translate_legends_term(captures[i]); break;
                    case 'q': translated[i] = translate_legends_color(captures[i]); break;
                    case 't': translated[i] = translate_legends_anatomy(captures[i]); break;
                    case 'i': translated[i] = translate_legends_item(captures[i]); break;
                    case 'e': translated[i] = translate_legends_event(captures[i]); break;
                    case 'b': translated[i] = translate_legends_book(captures[i]); break;
                    case 'r': translated[i] = translate_deity_spheres(captures[i]); break;
                    case 'd': translated[i] = captures[i]; break;
                    case 'c':
                        if (const auto number = adventure_location_count(lower(captures[i])))
                            translated[i] = std::to_string(*number);
                        break;
                    default: break;
                    }
                    if (!translated[i]) { intact = false; break; }
                }
                if (!intact || end <= best_end ||
                    !has_word_boundaries(source, cursor, end)) continue;
                best = captures.empty() ? rule.target :
                    fill_template(rule, captures, &capture_translations_, nullptr, &translated);
                best_end = end;
            }
            if (!best && !link) {
                if (const auto end = legends_feature_item_end(source, cursor)) {
                    auto term = translate_legends_term(
                        std::string_view(source).substr(cursor, *end - cursor));
                    if (term && !term->empty() && std::none_of(term->begin(), term->end(),
                            [](unsigned char ch) { return (ch >= 'A' && ch <= 'Z') ||
                                (ch >= 'a' && ch <= 'z'); })) {
                        best = std::move(term);
                        best_end = *end;
                    }
                }
            }
            if (best) {
                output += *best;
                cursor = best_end;
                continue;
            }
            // Use the reviewed birth/death templates rather than maintaining
            // a second wording in the Legends renderer.
            for (int index : template_rules_) {
                const Rule &rule = rules_[static_cast<size_t>(index)];
                if (rule.source != "b. {d}" && rule.source != "d. {d}" &&
                    rule.source != "b. {d} d. {d}") continue;
                size_t end = cursor;
                std::vector<std::string> captures;
                if (!match_template(rule, source, cursor, &end, &captures) ||
                    end <= best_end || !has_word_boundaries(source, cursor, end)) continue;
                best = translate_template_captures(rule, captures);
                best_end = end;
            }
            if (best) { output += *best; cursor = best_end; continue; }
            if (auto literal = exact_literal_translation(
                    std::string_view(source).substr(cursor))) {
                output += *literal;
                cursor = source.size();
                continue;
            }
            // Ordinary species descriptions already live in data/runtime/translations.tsv
            // and the shared composition rules. A biography can embed them
            // between its identity and sphere sentences; translate complete
            // sentences/paragraphs, never isolated English fragments.
            if (!link) {
                for (size_t end = source.size(); end > cursor; --end) {
                    if (source[end - 1] != '.' && source[end - 1] != '!' &&
                        source[end - 1] != '?') continue;
                    const auto sentence = std::string_view(source).substr(cursor, end - cursor);
                    auto target = exact_literal_translation(sentence);
                    if (!target) target = translate_compositional(std::string(sentence));
                    if (!target || target->empty() || std::any_of(target->begin(), target->end(),
                            [](unsigned char ch) { return (ch >= 'A' && ch <= 'Z') ||
                                (ch >= 'a' && ch <= 'z'); })) continue;
                    output += *target;
                    best_end = end;
                    break;
                }
                if (best_end > cursor) { cursor = best_end; continue; }
            }
            // Only a colored link may fall back to untyped proper-name parsing.
            // Non-clickable relationship rows instead use explicit h templates
            // such as `{p} (enemy)`, regardless of their gray foreground. An
            // unknown English sentence remains reportable, never phoneticized.
            // Related-section captions are colored like links but are UI
            // labels, not generated identities. Missing labels stay readable
            // and reportable instead of becoming phonetic proper names.
            if (link && !source.starts_with("Related ")) {
                size_t end = source.size();
                // Relationship/status annotations may share a link's color.
                // Keep the whole proper name, then resolve the annotation
                // with scoped rules instead of tokenizing its name words.
                const size_t annotation = source.find_first_of(",(", cursor);
                if (annotation != std::string::npos) end = annotation;
                while (end > cursor && source[end - 1] == ' ') --end;
                if (end > cursor && source[end - 1] == '.' &&
                    !std::string_view(source).substr(cursor, end - cursor).ends_with("...")) --end;
                const auto value = std::string_view(source).substr(cursor, end - cursor);
                const auto name = person ? translate_legends_actor(value) : translate_legends_book(value);
                if (name) { output += *name; cursor = end; continue; }
            }
            return std::nullopt;
        }
        return output.empty() ? std::nullopt : std::optional<std::string>(std::move(output));
    };
    auto result = resolve();
    if (!translation_work_exhausted() &&
            cycle_revision == active_translation_work->cycle_revision) {
        if (legends_translation_cache_.size() >= 4096) legends_translation_cache_.clear();
        legends_translation_cache_.emplace(key, result);
    }
    return result;
    });
}

static bool legends_export_control_present(std::string_view source) {
    // Legends remains browsable while the same export control changes
    // its caption from Export XML to Exporting!.
    return source.find("Export XML") != std::string_view::npos ||
        source.find("Exporting!") != std::string_view::npos;
}

void Overlay::append_legends_detail_matches(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y,
        const unsigned char *screen_override) const {
    if (!gps_ || !face_) return;
    // Page identity can live on the other logical layer. Use composition only
    // as context; claims below still own exact bytes from the supplied layer.
    auto context = rows;
    if (screen_override) {
        for (int y = 0; y < gps_->dimy; ++y) {
            for (int x = 0; x < gps_->dimx; ++x) {
                bool top = false;
                const auto *cell = cell_at(x, y, &top);
                context[static_cast<size_t>(y)][static_cast<size_t>(x)] =
                    cell && cell[0] ? static_cast<char>(cell[0]) : ' ';
            }
        }
    }
    auto content = [](std::string row) {
        for (size_t x = 0; x < row.size(); ++x)
            if (is_cp437_box_separator(row, x)) row[x] = ' ';
        return normalize_utterance(row);
    };
    int export_y = -1;
    for (int y = 0; y < static_cast<int>(rows.size()); ++y) {
        const auto &row = context[static_cast<size_t>(y)];
        if (legends_export_control_present(row)) { export_y = y; break; }
    }
    if (export_y < 0) return;
    const bool native_history_page = native_history_legends_page();
    const auto native_caption = native_history_page ? native_history_legends_caption() : std::nullopt;
    const std::string native_title = native_caption ? normalize_utterance(native_caption->source) : "";
    // Graphical captions occupy two flagged rows. Claim BOTH before the
    // generic name/figure matchers: otherwise the upper copy of a complete
    // identity becomes a page heading and is centred across the whole screen.
    std::vector<int> tab_rows;
    for (int y = export_y + 1;
         y < std::min(static_cast<int>(rows.size()), export_y + 5); ++y) {
        const auto &row = context[static_cast<size_t>(y)];
        if (row.find("Legends") == std::string::npos) continue;
        tab_rows.push_back(y);
    }
    if (native_history_page && !native_title.empty()) {
        // The native render loop fixes tab artwork/captions at rows 4/5:
        // PE d3f986 and d3fbc7, with flags 8/16 at d3fc6c. Classic text
        // occupies only row 5. The pinned title has a separate producer and
        // must not become a tab merely because its text matches the caption.
        // This same header anchor survives removal of the Legends root tab.
        tab_rows.clear();
        const size_t quote = native_title.rfind('"');
        const std::string title_caption = quote == std::string::npos
            ? native_title : native_title.substr(0, quote + 1);
        const auto native_tab_caption = [&](std::string_view raw) {
            const std::string source = normalize_utterance(std::string(raw));
            if (source == "Legends" || source == native_title || source == title_caption) return true;
            const bool clipped = source.ends_with("...");
            const auto prefix = std::string_view(source).substr(0,
                source.size() - (clipped ? 3 : 0));
            if (clipped && !prefix.empty() && native_title.starts_with(prefix)) return true;
            return std::any_of(kLegendsCategories.begin(), kLegendsCategories.end(),
                [&](std::string_view category) {
                    return source == category || (clipped && !prefix.empty() &&
                        category.starts_with(prefix));
                });
        };
        for (int y : {4, 5}) {
            if (y >= static_cast<int>(rows.size())) continue;
            const auto &row = context[static_cast<size_t>(y)];
            bool caption_row = false;
            for (size_t opening = row.find('/'); opening != std::string::npos;
                    opening = row.find('/', opening + 1)) {
                const auto span = ascii_tab_caption_span(row, opening);
                if (span && native_tab_caption(std::string_view(row).substr(
                        span->first, span->second - span->first))) caption_row = true;
            }
            const auto cell_and_half = [&](int x) {
                bool top = false;
                const auto *cell = cell_at(x, y, &top);
                const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
                const uint32_t half = flags
                    ? flags[static_cast<size_t>(x) * gps_->dimy + y] & ((1u << 3) | (1u << 4))
                    : 0;
                return std::pair{cell, half};
            };
            for (int x = 0; !caption_row && x < static_cast<int>(row.size());) {
                if (row[x] == ' ' || is_cp437_box_separator(row, x)) { ++x; continue; }
                const auto [first, half] = cell_and_half(x);
                if (!first) { ++x; continue; }
                const bool split = half == (1u << 3) || half == (1u << 4);
                const int start = x;
                for (++x; x < static_cast<int>(row.size()); ++x) {
                    const auto [cell, next_half] = cell_and_half(x);
                    if (!cell || (split && next_half != half) || is_cp437_box_separator(row, x) ||
                            (row[x] != ' ' && !std::equal(first + 1, first + 4, cell + 1))) break;
                    if (!split && row[x] == ' ' && x + 1 < static_cast<int>(row.size()) &&
                            row[x + 1] == ' ') break;
                }
                caption_row = native_tab_caption(std::string_view(row).substr(start, x - start));
            }
            if (caption_row) tab_rows.push_back(y);
        }
    }
    if (tab_rows.empty()) return;
    const int tabs_y = tab_rows.back();
    const auto viewport = legends_detail_body_viewport(*gps_);
    const int text_right = viewport.right;
    // Classic scrollbars are CP437 glyphs in the same grid as the prose.
    // Reserve the live control before any text matcher, without creating
    // suppression matches: clipping Chinese alone still erases native rails,
    // arrows and thumbs when they are mistaken for source text. Mask context
    // too so these controls cannot become headings or extra list fields.
    for (const auto &bar : viewport.scrollbars)
        for (int y = bar.y; y < bar.y + bar.h; ++y) {
            std::fill_n(rows[y].begin() + bar.x, bar.w, ' ');
            std::fill_n(context[y].begin() + bar.x, bar.w, ' ');
        }
    const auto translate_heading = [&](std::string_view source) {
        if (native_caption && native_caption->site_name) {
            const auto &site = *native_caption->site_name;
            if (source == native_title)
                if (auto target = translate_site_display(site, source)) return target;
            if (const auto record = split_legends_figure_record(source);
                    record && record->sex.empty() && world_site_type_shape(record->species)) {
                const std::string pair = std::string(record->native_name) + ", \"" +
                    std::string(record->gloss) + "\"";
                const auto english = reconstruct_site_english_name(site);
                const auto same = [](std::string_view left, std::string_view right) {
                    return lower(native_text_to_utf8(trim_view(left))) ==
                        lower(native_text_to_utf8(trim_view(right)));
                };
                // The pinned title may include the site-type field while
                // its tab omits it. Carry WORD/POS only for that exact title
                // or a name pair that agrees with the captured site identity.
                if (source == native_title || pair == native_title ||
                        (english && same(record->native_name, site.native_name) &&
                         same(record->gloss, *english))) {
                    if (auto target = translate_site_display(site, pair)) {
                        auto type = translate_world_site_type(record->species);
                        if (!type) type = exact_literal_translation(record->species);
                        return std::optional<std::string>(*target + "，" +
                            type.value_or(native_text_to_utf8(record->species)));
                    }
                }
            }
        }
        if (native_caption && native_caption->region_title && source == native_title)
            if (auto target = translate_world_region_heading(source)) return target;
        return native_caption && native_caption->event_title && source == native_title
            ? translate_legends_event(source) : translate_legends_detail_heading(source);
    };

    int heading_y = -1;
    int heading_end_y = -1;
    int records = 0;
    std::string heading;
    bool catalog_page = false;
    if (!native_history_page) {
        for (int y = tabs_y + 1;
                y < std::min(tabs_y + 6, static_cast<int>(context.size())); ++y) {
            const auto label = content(context[static_cast<size_t>(y)]);
            if (std::find(kLegendsCategories.begin(), kLegendsCategories.end(), label) !=
                    kLegendsCategories.end()) {
                catalog_page = true;
                break;
            }
        }
    }
    auto detail_identity = [&](std::string_view candidate) {
        // A one-row catalog can also show an unnamed region, and a matching
        // detail tab may remain open but inactive. The selected native page
        // must be a detail body before its fixed label can be a heading.
        return (!native_title.empty() && candidate == native_title) ||
            (native_history_page && legends_unnamed_region_heading(candidate)) ||
            (candidate.starts_with("Unnamed ") &&
                translate_legends_unnamed_figure(candidate).has_value()) ||
            split_legends_figure_record(candidate).has_value() ||
            split_generated_name_identity(candidate).has_value() ||
            resolve_legends_written_heading(candidate).has_value();
    };
    // A single complete identity is pinned below the tabs on every detail
    // page. List rows have date/type columns or multiple identities. Require
    // this identity AND narrative or matching-tab evidence before claiming
    // the body; a fixed nameless-region label alone is still a catalog row.
    // An active catalog heading establishes list ownership even when only
    // one undated figure remains and other detail tabs are still open.
    for (int y = tabs_y + 1; !catalog_page && y < static_cast<int>(rows.size()); ++y) {
        const std::string candidate = content(context[static_cast<size_t>(y)]);
        // A native detail has one pinned title above its richbox. Do not
        // parse every event as a possible identity, or let a quoted name in
        // an event disqualify a page whose native owner is already known.
        if (native_history_page && heading_y >= 0 && candidate != heading) break;
        if (detail_identity(candidate)) {
            if (heading_y < 0) {
                heading_y = heading_end_y = y; heading = candidate; ++records;
            } else if (candidate == heading && y == heading_end_y + 1) {
                heading_end_y = y;
            } else ++records;
        } else if (native_history_page && !candidate.empty()) break;
    }
    const auto identity = records == 1 ? split_legends_figure_record(heading) : std::nullopt;
    const auto written_heading = records == 1
        ? resolve_legends_written_heading(heading) : std::nullopt;
    const auto heading_native = written_heading ? written_heading->source_title :
        identity ? identity->native_name :
        std::string_view(heading).substr(0, heading.find(", \""));
    const size_t heading_quote = heading.rfind('"');
    const std::string caption = written_heading
        ? std::string(written_heading->source_title)
        : heading_quote == std::string::npos ? heading : heading.substr(0, heading_quote + 1);
    if (records == 1) {
        if (!legends_tab_titles_.contains(caption)) {
            if (auto title = written_heading ? std::optional<std::string>(written_heading->title)
                                            : translate_heading(heading)) {
                // Remember complete captions, not guessed expansions of clipped
                // words. A later inactive tab can then reuse its visited heading.
                const size_t closing = title->find("”，");
                if (closing != std::string::npos) title->resize(closing + 3);
                if (legends_tab_titles_.size() >= 512) legends_tab_titles_.clear();
                legends_tab_titles_.insert_or_assign(caption, *title);
            }
        }
    }
    bool identity_tab_visible = false;
    for (int tab_y : tab_rows) {
        auto &tabs = rows[static_cast<size_t>(tab_y)];
        auto cell_and_half = [&](int x) {
            bool top = screen_override && screen_override == gps_->screen_top;
            const auto *cell = screen_override
                ? screen_override + (static_cast<size_t>(x) * gps_->dimy + tab_y) * 8
                : cell_at(x, tab_y, &top);
            const auto *flags = top ? gps_->screentexpos_top_flag : gps_->screentexpos_flag;
            // TOP_OF_TEXT / BOTTOM_OF_TEXT have the same ABI on both platforms.
            const uint32_t half = flags
                ? flags[static_cast<size_t>(x) * gps_->dimy + tab_y] & ((1u << 3) | (1u << 4))
                : 0;
            return std::pair{cell, half};
        };
        // Classic Legends tabs centre their labels in underscore padding.
        // Use complete widget spans before color-run scanning: the padding
        // shares the caption color, and adjacent tabs need not have a gap.
        // Read structure from the composed row, then claim only matching
        // source bytes on this layer below. Borders/close controls stay native.
        std::vector<std::pair<int, int>> caption_spans;
        const auto &tab_context = context[static_cast<size_t>(tab_y)];
        const size_t legends_start = tab_context.find("Legends");
        const size_t ascii_opening = tab_context.find("/_");
        const bool ascii_tabs = (legends_start != std::string::npos &&
            is_ascii_tab_caption(tab_context, legends_start, legends_start + 7)) ||
            (native_history_page && ascii_opening != std::string::npos &&
                ascii_tab_caption_span(tab_context, ascii_opening).has_value());
        for (size_t opening = ascii_tabs ? tab_context.find("/_") : std::string::npos;
                opening != std::string::npos;) {
            const auto span = ascii_tab_caption_span(tab_context, opening);
            if (span) caption_spans.emplace_back(
                static_cast<int>(span->first), static_cast<int>(span->second));
            opening = tab_context.find("/_", span ? span->second + 1 : opening + 2);
        }
        for (int x = 0; !ascii_tabs && x < static_cast<int>(tabs.size());) {
            if (tabs[x] == ' ' || is_cp437_box_separator(tabs, x)) { ++x; continue; }
            const int start = x;
            const auto [first, half] = cell_and_half(start);
            const bool split = half == (1u << 3) || half == (1u << 4);
            // Flagged runs delimit actual captions, even when a long name
            // reaches the close button without two spaces in between. The
            // unflagged fallback retains text field/color boundaries.
            for (++x; x < static_cast<int>(tabs.size()); ++x) {
                const auto [cell, next_half] = cell_and_half(x);
                if (is_cp437_box_separator(tabs, x) || (split && next_half != half)) break;
                if (!split && tabs[x] == ' ' && x + 1 < static_cast<int>(tabs.size()) &&
                    tabs[x + 1] == ' ') break;
                if (tabs[x] != ' ' && first && cell &&
                    !std::equal(first + 1, first + 4, cell + 1)) break;
            }
            int end = x;
            while (end > start && tabs[end - 1] == ' ') --end;
            if (end > start) caption_spans.emplace_back(start, end);
        }
        for (const auto &[start, end] : caption_spans) {
            const std::string source = tabs.substr(start, end - start);
            if (source.empty() || source == "X" ||
                context[static_cast<size_t>(tab_y)].compare(start, end - start, source) != 0)
                continue;
            // An intact fixed caption identifies its detail page too, even
            // when there is no event (or only a clipped continuation) below
            // the pinned heading. Category lists still lack this title tab.
            if (records == 1 && source == caption) identity_tab_visible = true;
            auto target = exact_literal_translation(source);
            if (const auto known = legends_tab_titles_.find(source); known != legends_tab_titles_.end())
                target = known->second;
            bool category_tab = false;
            if (!target) {
                // DF clips category captions before drawing them, just as it
                // clips identities. Recover only an unambiguous category and
                // read its existing UI translation before trying name parsing.
                const bool clipped = source.ends_with("...");
                const auto prefix = std::string_view(source).substr(0,
                    source.size() - (clipped ? 3 : 0));
                size_t candidates = 0;
                std::string_view category;
                for (const auto caption : kLegendsCategories) {
                    if (source != caption && !(clipped && !prefix.empty() &&
                            caption.starts_with(prefix))) continue;
                    category = caption;
                    ++candidates;
                }
                // Missing translations or ambiguous category prefixes still
                // belong to UI captions; neither may fall back to phonetics.
                category_tab = candidates != 0;
                if (candidates == 1) target = exact_literal_translation(category);
            }
            const size_t comma = source.find(", \"");
            if (!target && !category_tab && source.ends_with("...")) {
                const auto prefix = std::string_view(source).substr(0, source.size() - 3);
                // The native identity itself can exceed the tab width: the
                // comma/quoted gloss need not be visible at all. Prefer the
                // current full heading, then an unambiguous visited caption.
                if (records == 1 && !prefix.empty() && heading.starts_with(prefix)) {
                    identity_tab_visible = true;
                    target = written_heading ? std::optional<std::string>(written_heading->title)
                                             : translate_heading(heading);
                } else {
                    size_t candidates = 0;
                    for (const auto &[caption, translated] : legends_tab_titles_) {
                        if (prefix.empty() || !caption.starts_with(prefix)) continue;
                        target = translated;
                        ++candidates;
                    }
                    if (candidates != 1) target.reset();
                }
                if (!target) {
                    std::string complete;
                    if (comma != std::string::npos) complete = trim(source.substr(0, comma));
                    else if (const size_t space = prefix.rfind(' '); space != std::string_view::npos)
                        complete = trim(std::string(prefix.substr(0, space)));
                    // Without a full identity, use only complete words, never
                    // invent the end of the clipped native surname/epithet.
                    if (!complete.empty()) {
                        target = complete.starts_with("The ")
                            ? translate_legends_name(complete, false)
                            : translate_procedural_fragment(complete, true);
                        if (target) *target += "……";
                    }
                }
            } else if (!target && !category_tab && comma != std::string::npos) {
                const std::string native = trim(source.substr(0, comma));
                if (records == 1 && heading_native == native) {
                    identity_tab_visible = true;
                    target = translate_heading(heading);
                } else {
                    target = translate_heading(source);
                }
            } else if (!target && !category_tab && !source.ends_with("...")) {
                if (written_heading && source == written_heading->source_title) {
                    identity_tab_visible = true;
                    target = written_heading->title;
                } else target = translate_heading(source);
            }
            if (target) {
                // A tab needs the identity, not the heading's sex/species.
                const size_t closing = target->find("”，");
                if (closing != std::string::npos) target->resize(closing + 3);
            }
            // Unresolved captions still own their complete source. Do not
            // leave one half available for partial word or figure matching.
            Match tab{start, tab_y, end - start, kLegendsDetailTabRule,
                target.value_or(cp437_to_utf8(source)), source};
            tab.layout_x = start;
            tab.layout_y = tab_y;
            tab.layout_length = end - start;
            tab.layout_clip_right = end;
            tab.layout_font_pixels = std::max(config_.min_font_pixels,
                static_cast<int>(gps_->tile_pixel_y * config_.font_scale));
            tab.layout_lock_font_pixels = true;
            tab.layout_line_height_pixels = gps_->tile_pixel_y;
            std::fill(tabs.begin() + start, tabs.begin() + end, ' ');
            if (only_y < 0 || only_y == tab_y) matches.push_back(std::move(tab));
        }
    }
    if (!native_history_page) {
        // Only the catalog's own body heading establishes Region names.
        // An inactive Regions tab may remain beside an unrelated detail.
        int regions_y = -1;
        for (int y = tabs_y + 1;
                y < std::min(tabs_y + 6, static_cast<int>(context.size())); ++y) {
            if (content(context[static_cast<size_t>(y)]) == "Regions") {
                regions_y = y;
                break;
            }
        }
        if (regions_y >= 0) {
            const auto clipped = captured_clipped_captions();
            for (int y = regions_y + 1; y < static_cast<int>(rows.size()); ++y) {
                auto &row = rows[static_cast<size_t>(y)];
                for (const auto &field : split_text_fields(row)) {
                    const int length = field.end - field.start;
                    if (context[static_cast<size_t>(y)].compare(
                            field.start, length, field.text) != 0) continue;
                    std::string complete = field.text;
                    for (const auto &capture : clipped)
                        if (capture.x == field.start && capture.y == y &&
                                capture.visible == field.text) {
                            complete = capture.complete;
                            break;
                        }
                    auto target = translate_world_region_heading(complete);
                    if (!target) continue;
                    Match match{field.start, y, length, kLegendsListNameRule,
                        std::move(*target), field.text};
                    match.layout_x = field.start;
                    match.layout_y = y;
                    match.layout_length = length;
                    match.layout_left = true;
                    match.layout_font_pixels = std::max(config_.min_font_pixels,
                        static_cast<int>(gps_->tile_pixel_y * config_.font_scale));
                    std::fill_n(row.begin() + field.start, length, ' ');
                    if (only_y < 0 || only_y == y) matches.push_back(std::move(match));
                }
            }
        }
    }
    if (!native_history_page &&
            append_legends_typed_list_matches(rows, context, matches, only_y, tabs_y)) return;
    if (!native_history_page && (legends_prose_rules_.empty() || heading_y < 0 || records != 1)) return;
    bool detail = native_history_page;
    const int body_top = heading_end_y >= 0 ? heading_end_y + 1 : tabs_y + 1;
    for (int y = body_top; !detail && y < static_cast<int>(rows.size()); ++y) {
        const auto row = content(context[static_cast<size_t>(y)]);
        detail |= row.find(" was ") != std::string::npos ||
            row.find(" is ") != std::string::npos || row.starts_with("In ") ||
            row.find(" Kills") != std::string::npos || row.find(" Kill") != std::string::npos;
    }
    // A clipped identity in the tab is itself sufficient on a scrolled page.
    detail |= identity_tab_visible ||
        context[static_cast<size_t>(tabs_y)].find(", \"") != std::string::npos;
    if (!detail) return;

    // Claim the complete heading before the generic generated-name and prose
    // passes. In particular an entity's `The ... of ...` is not a paragraph.
    const auto heading_target = heading_y >= 0 ? translate_heading(heading) : std::nullopt;
    for (int y = heading_y; y >= 0 && y <= heading_end_y; ++y) {
        auto &row = rows[static_cast<size_t>(y)];
        int start = 0, end = static_cast<int>(row.size());
        while (start < end && (row[start] == ' ' || is_cp437_box_separator(row, start))) ++start;
        while (end > start && (row[end - 1] == ' ' || is_cp437_box_separator(row, end - 1))) --end;
        if (content(row) != heading || start == end) continue;
        const std::string source = row.substr(start, end - start);
        if (context[static_cast<size_t>(y)].compare(start, end - start, source) != 0) continue;
        Match match{start, y, end - start, kLegendsDetailHeadingRule,
            heading_target.value_or(cp437_to_utf8(heading)), source};
        match.layout_x = 2;
        match.layout_y = y;
        match.layout_length = gps_->dimx - 4;
        match.layout_clip_right = gps_->dimx - 2;
        match.layout_font_pixels = std::max(config_.min_font_pixels,
            static_cast<int>(gps_->tile_pixel_y * config_.font_scale));
        match.layout_lock_font_pixels = true;
        match.layout_line_height_pixels = gps_->tile_pixel_y;
        std::fill(row.begin() + start, row.begin() + end, ' ');
        if (only_y < 0 || only_y == y) matches.push_back(std::move(match));
    }

    struct Run {
        std::vector<Match> slots;
        std::string source;
        std::string target;
        int color = 0;
        std::vector<std::string> lines;
    };
    std::vector<Run> runs;
    const int right = text_right;
    auto color_at = [&](int x, int y) {
        bool top = false;
        const auto *cell = screen_override
            ? screen_override + (static_cast<size_t>(x) * gps_->dimy + y) * 8
            : cell_at(x, y, &top);
        return cell ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : 0;
    };
    int left = right;
    for (int y = body_top; y < static_cast<int>(rows.size()) - 1; ++y) {
        const auto &row = rows[static_cast<size_t>(y)];
        for (int x = 1; x < right; ++x) {
            const unsigned char ch = static_cast<unsigned char>(row[static_cast<size_t>(x)]);
            if (ch != ' ' && !is_cp437_box_separator(row, x)) { left = std::min(left, x); break; }
        }
    }
    const bool unconfirmed_history_body = native_history_page &&
        (!native_history_legends_ownership_confirmed() || !native_history_legends_draw_observed());
    const auto history = native_history_page
        ? capture_history_viewport(context, left, text_right, body_top,
            static_cast<int>(rows.size()) - 1, screen_override)
        : NativeHistoryViewport{};
    for (int y = body_top; y < static_cast<int>(rows.size()) - 1; ++y) {
        const auto &row = rows[static_cast<size_t>(y)];
        for (int x = std::max(1, left); x < right;) {
            if (row[x] == ' ' || is_cp437_box_separator(row, x)) { ++x; continue; }
            const int start = x, color = color_at(x, y);
            int ink_end = x + 1;
            ++x;
            for (; x < right; ++x) {
                if (is_cp437_box_separator(row, x)) break;
                if (row[x] == ' ') continue;
                if (color_at(x, y) != color) break;
                ink_end = x + 1;
            }
            Match slot{start, y, ink_end - start, kLegendsDetailTextRule, {},
                row.substr(start, ink_end - start)};
            // Once the native source regions are confirmed, only actual
            // event rows belong to the event renderer. Without that proof,
            // preserve this richbox body instead of guessing a prose prefix.
            slot.native_history_event_row = unconfirmed_history_body ||
                history.rows.contains(y) || history.gaps.contains(y);
            // The complete memory event also owns a vertically clipped
            // slice. The final pass lays out that event before selecting
            // its translated window, so every visible source run is claimed.
            slot.layout_x = start;
            slot.layout_y = y;
            // Source ownership and translated layout stop at the same live
            // control boundary. Complete event tokens remain in the native
            // snapshot, not in the scrollbar glyphs covering their suffix.
            slot.layout_length = std::max(1, x - start);
            slot.layout_clip_right = text_right;
            slot.layout_left = true;
            slot.layout_foreground_rgb = color;
            const std::string source = normalize_utterance(slot.source);
            if (context[static_cast<size_t>(y)].compare(
                    start, ink_end - start, slot.source) != 0) continue;
            bool join = false;
            if (!slot.native_history_event_row && !runs.empty() && start == left &&
                    !runs.back().slots.back().native_history_event_row) {
                const auto &previous = runs.back();
                const Match &tail = previous.slots.back();
                const size_t first_word = source.find(' ');
                const int first_length = static_cast<int>(
                    first_word == std::string::npos ? source.size() : first_word);
                const bool narrative = legends_narrative_start(previous.source);
                const bool edge_wrap = tail.x + tail.length + first_length + 1 >= right - 1 &&
                    !previous.source.empty() &&
                    std::string_view(".,:;!?").find(previous.source.back()) == std::string_view::npos;
                join = previous.color == color && tail.y + 1 == y &&
                    (narrative || edge_wrap) && !source.starts_with("In ") &&
                    !source.starts_with("Related ");
            }
            if (join) {
                runs.back().source += " " + source;
                runs.back().slots.push_back(std::move(slot));
            } else {
                Run run;
                run.slots.push_back(std::move(slot));
                run.source = source;
                run.color = color;
                runs.push_back(std::move(run));
            }
        }
    }
    for (Run &run : runs) {
        if (run.slots.front().native_history_event_row) {
            // The actual event snapshot owns this source. Translation is
            // performed once from its type/fields in the final layout pass.
            // Missing semantics retain the intact native record.
            run.target = cp437_to_utf8(run.source);
            continue;
        }
        const int red = (run.color >> 16) & 255;
        const int green = (run.color >> 8) & 255;
        const int blue = run.color & 255;
        const bool colored = std::max({red, green, blue}) - std::min({red, green, blue}) > 32;
        if (auto target = translate_legends_text(run.source, colored,
                blue > red && blue > green)) run.target = *target;
        // Keep unrecognized prose intact and reportable. Do not let the
        // global word matcher turn one missing clause into scattered pieces.
        else run.target = cp437_to_utf8(run.source);
    }

    // With mouse-coordinate mapping available, fit complete paragraphs in
    // the final pass. Otherwise retain native link anchors and fit each run
    // only within its own native rows.
    const int pixels = unified_font_pixels();
    if (g_legends_mouse_hook_active) {
        // Claim all native rows BEFORE fitting any translated color run.
        // Otherwise an expanded wrapped link shrinks the entire page (or is
        // skipped), and the later complete-paragraph pass lacks source spans.
        // Keep per-slot text as a readable native-position fallback; the
        // final pass translates and measures the complete paragraph once.
        for (Run &run : runs) {
            for (Match &slot : run.slots) {
                slot.target = run.slots.size() == 1 ? run.target : cp437_to_utf8(slot.source);
                slot.layout_font_pixels = pixels;
                slot.layout_lock_font_pixels = true;
                slot.layout_line_height_pixels = gps_->tile_pixel_y;
                std::fill_n(rows[static_cast<size_t>(slot.y)].begin() + slot.x, slot.length, ' ');
                if (only_y < 0 || only_y == slot.y) matches.push_back(std::move(slot));
            }
        }
        return;
    }
    {
        if (!set_font_pixel_size(pixels)) return;
        struct Metric { int advance = 0, left = 0, right = 0; FT_UInt index = 0; };
        std::unordered_map<uint32_t, Metric> metrics;
        auto metric = [&](uint32_t cp) -> const Metric & {
            auto [it, inserted] = metrics.try_emplace(cp);
            if (inserted) {
                auto &m = it->second;
                m.index = FT_Get_Char_Index(face_, cp);
                if (native_load_font_glyph(face_, m.index, config_.font_bold) == 0) {
                    m.advance = static_cast<int>(face_->glyph->advance.x >> 6);
                    if (FT_Render_Glyph(face_->glyph, FT_RENDER_MODE_NORMAL) == 0) {
                        m.left = face_->glyph->bitmap_left;
                        m.right = m.left + static_cast<int>(face_->glyph->bitmap.width);
                    }
                }
            }
            return it->second;
        };
        for (Run &run : runs) {
            run.lines.clear();
            if (run.target.empty()) continue;
            std::vector<uint32_t> cps;
            if (!decode_utf8(run.target, cps)) continue;
            size_t at = 0;
            for (const Match &slot : run.slots) {
                const int width = slot.layout_length * gps_->tile_pixel_x -
                    2 * config_.horizontal_padding - 2;
                int pen = 0, ink_left = 0, ink_right = 0;
                FT_UInt previous = 0;
                std::string line;
                for (; at < cps.size(); ++at) {
                    const Metric &m = metric(cps[at]);
                    int kern = 0;
                    if (config_.font_pixel_grid == 0 && FT_HAS_KERNING(face_) && previous && m.index) {
                        FT_Vector delta{};
                        FT_Get_Kerning(face_, previous, m.index, FT_KERNING_DEFAULT, &delta);
                        kern = static_cast<int>(delta.x >> 6);
                    }
                    const int next_left = std::min(ink_left, pen + kern + m.left);
                    const int next_right = std::max(ink_right, pen + kern + m.right);
                    const int advance = pen + kern + m.advance;
                    if (std::max(advance, next_right) - next_left > width) break;
                    ink_left = next_left; ink_right = next_right; pen = advance;
                    previous = m.index;
                    append_utf8_codepoint(line, cps[at]);
                }
                run.lines.push_back(std::move(line));
            }
        }
    }
    for (Run &run : runs) {
        if (run.slots.front().native_help_source_only) {
            for (Match &slot : run.slots) {
                std::fill_n(rows[static_cast<size_t>(slot.y)].begin() + slot.x, slot.length, ' ');
                if (only_y < 0 || only_y == slot.y) matches.push_back(std::move(slot));
            }
            continue;
        }
        if (run.target.empty()) continue;
        // A target must fit in full before any of its native source is hidden.
        std::string laid_out;
        for (const auto &line : run.lines) laid_out += line;
        if (laid_out != run.target) {
            // Reserve the whole run even without mouse remapping. An
            // oversized translation must not fall through to word matching.
            run.slots.front().native_help_review_source = run.source;
            for (Match &slot : run.slots) {
                slot.native_help_source_only = true;
                std::fill_n(rows[static_cast<size_t>(slot.y)].begin() + slot.x, slot.length, ' ');
                if (only_y < 0 || only_y == slot.y) matches.push_back(std::move(slot));
            }
            continue;
        }
        for (size_t i = 0; i < run.slots.size(); ++i) {
            Match &slot = run.slots[i];
            slot.target = run.lines[i];
            slot.layout_font_pixels = pixels;
            slot.layout_lock_font_pixels = true;
            slot.layout_line_height_pixels = gps_->tile_pixel_y;
            std::fill_n(rows[static_cast<size_t>(slot.y)].begin() + slot.x, slot.length, ' ');
            if (only_y < 0 || only_y == slot.y) matches.push_back(std::move(slot));
        }
    }
}

// Translate a complete visible sentence before laying out its colored links.
// Captures retain native coordinates; target occurrence numbers change only
// reading order. This is also used for complete non-clickable gray sentences.
std::shared_ptr<LegendsTextFlow> Overlay::translate_legends_flow(
        const std::vector<int> &rows, int left, int right,
        const unsigned char *screen_override, bool clipped_start) const {
    struct Atom { int x = 0, y = 0, color = 0; };
    using Pieces = std::vector<LegendsTextPiece>;
    std::string source;
    std::vector<Atom> atoms;
    auto flow = std::make_shared<LegendsTextFlow>();
    std::optional<Atom> neutral;
    auto colored = [](int color) {
        const int r = (color >> 16) & 255, g = (color >> 8) & 255, b = color & 255;
        return std::max({r, g, b}) - std::min({r, g, b}) > 32;
    };
    bool space = false;
    Atom space_atom;
    for (int y : rows) {
        std::string row(static_cast<size_t>(gps_->dimx), ' ');
        std::vector<int> colors(row.size());
        for (int x = 0; x < gps_->dimx; ++x) {
            bool top = false;
            const auto *cell = screen_override
                ? screen_override + (static_cast<size_t>(x) * gps_->dimy + y) * 8
                : cell_at(x, y, &top);
            if (!cell) continue;
            row[x] = cell[0] ? static_cast<char>(cell[0]) : ' ';
            colors[x] = (cell[1] << 16) | (cell[2] << 8) | cell[3];
        }
        flow->source_rows.emplace_back(y, row);
        for (int x = left; x < right; ++x) {
            const char ch = row[x];
            if (is_cp437_box_separator(row, x)) continue;
            const Atom atom{x, y, colors[x]};
            if (ch == ' ') { space = true; space_atom = atom; continue; }
            if (space && !source.empty()) { source += ' '; atoms.push_back(space_atom); }
            space = false;
            source += ch;
            atoms.push_back(atom);
            if (!neutral && !colored(atom.color)) neutral = atom;
        }
        space = true; // native wrapping happens between words
    }
    // A section caption has no sentence to reorder. Keep the normal scoped
    // label translation and its original heading color, not neutral prose.
    if (source.empty() || source.starts_with("Related ")) return {};
    auto continuation_key = [&](size_t begin) {
        std::string key = source.substr(begin);
        key += '\0';
        // Spaces belong to native wrapping, not a link's identity. Require
        // every visible non-space byte and color, but never its old screen y.
        for (size_t at = begin; at < atoms.size(); ++at) {
            if (source[at] == ' ') continue;
            const int color = atoms[at].color;
            key.append(reinterpret_cast<const char *>(&color), sizeof(color));
        }
        return key;
    };
    if (clipped_start) {
        const auto found = legends_continuation_cache_.find(continuation_key(0));
        if (found != legends_continuation_cache_.end() && found->second) {
            flow->pieces = *found->second;
            // Only non-clickable worldgen prose requests clipped_start.
            // Its fitter uses the current source rows and per-glyph colors,
            // not native click anchors or boxes from a preceding frame.
            for (auto &piece : flow->pieces) {
                piece.native_x = atoms.front().x;
                piece.native_y = atoms.front().y;
            }
            return flow;
        }
    }
    auto remember_continuations = [&](const std::shared_ptr<LegendsTextFlow> &result) {
        if (!result || !result->fully_translated ||
            (!clipped_start && !source.starts_with("In ")) ||
            std::any_of(result->pieces.begin(), result->pieces.end(),
                [](const LegendsTextPiece &piece) { return piece.source_end == 0; })) return;
        int previous_y = atoms.front().y;
        for (size_t begin = 0; begin < source.size(); ++begin) {
            if (source[begin] == ' ' || atoms[begin].y == previous_y) continue;
            previous_y = atoms[begin].y;
            Pieces tail;
            for (const auto &piece : result->pieces) {
                if (piece.source_end <= begin) continue;
                auto kept = piece;
                kept.source_end -= begin;
                kept.native_x = kept.native_y = 0;
                if (!tail.empty() && tail.back().foreground_rgb == kept.foreground_rgb &&
                    tail.back().source_end == kept.source_end)
                    tail.back().target += kept.target;
                else tail.push_back(std::move(kept));
            }
            if (tail.empty()) continue;
            auto key = continuation_key(begin);
            const auto existing = legends_continuation_cache_.find(key);
            if (existing != legends_continuation_cache_.end()) {
                if (existing->second && !std::equal(existing->second->begin(),
                        existing->second->end(), tail.begin(), tail.end(),
                        [](const LegendsTextPiece &a, const LegendsTextPiece &b) {
                            return a.target == b.target && a.foreground_rgb == b.foreground_rgb &&
                                a.source_end == b.source_end;
                        }))
                    existing->second.reset(); // never guess between different contexts
                continue;
            }
            while (legends_continuation_order_.size() >= 4096) {
                legends_continuation_cache_.erase(legends_continuation_order_.front());
                legends_continuation_order_.pop_front();
            }
            legends_continuation_order_.push_back(key);
            legends_continuation_cache_.emplace(std::move(key), std::move(tail));
        }
    };
    // Cache complete native paragraphs, including coordinates and link colors.
    // Reuse the grammatical parse between frames; layout is still recomputed
    // from the current font/renderer and clicks retain native-row validation.
    std::string cache_key;
    auto key_integer = [&](int value) {
        cache_key.append(reinterpret_cast<const char *>(&value), sizeof(value));
    };
    key_integer(left); key_integer(right); key_integer(clipped_start);
    for (const auto &[y, row] : flow->source_rows) {
        key_integer(y);
        cache_key += row;
        cache_key += '\0';
    }
    for (const auto &atom : atoms) {
        key_integer(atom.x); key_integer(atom.y); key_integer(atom.color);
    }
    if (const auto it = legends_flow_cache_.find(cache_key); it != legends_flow_cache_.end()) {
        if (it->second) it->second->laid_out = false;
        remember_continuations(it->second);
        return it->second;
    }
    // A paragraph moving with worldgen's log or appearing on another layer
    // must not repeat an exhausted parse. Only source, colors and whether its
    // beginning was clipped affect that result; screen coordinates do not.
    std::string work_limit_key(1, clipped_start ? '\1' : '\0');
    work_limit_key += continuation_key(0);
    if (legends_work_limit_cache_.contains(work_limit_key)) return {};
    auto publish = [&](std::shared_ptr<LegendsTextFlow> result) {
        remember_continuations(result);
        if (legends_flow_cache_.size() >= 512) legends_flow_cache_.clear();
        legends_flow_cache_.emplace(std::move(cache_key), result);
        return result;
    };
    auto parse = [&]() -> std::shared_ptr<LegendsTextFlow> {
    TranslationWorkFrame paragraph_work("historical paragraph", source);
    if (!neutral) {
        // A name-only row can still have safe trailing space inside the body.
        for (const auto &[y, row] : flow->source_rows) {
            int last = right - 1;
            while (last >= left && (row[last] == ' ' || is_cp437_box_separator(row, last))) --last;
            if (last + 2 < right - 1 && row[last + 2] == ' ') {
                neutral = Atom{last + 2, y, 0xaaaaaa};
                break;
            }
        }
    }
    if (!neutral) return publish({});
    auto supported_piece = [](std::string target, const Atom &anchor, size_t end) {
        LegendsTextPiece piece{std::move(target), anchor.color, anchor.x, anchor.y};
        piece.source_end = end;
        return piece;
    };
    using CaptureKey = std::tuple<char, size_t, size_t>;
    std::map<CaptureKey, std::optional<Pieces>> cache;
    std::optional<std::vector<int>> matching_event_rules;
    const auto event_rules_for_source = [&]() -> const std::vector<int> & {
        if (!matching_event_rules) {
            // A captured event is a substring of this paragraph, so its
            // required literal must also occur in the complete source.
            // Filter the event namespace once, preserving its own order
            // even for rules that do not belong to the prose-rule index.
            // Build lazily: paragraphs without event captures need no scan.
            std::vector<int> candidates;
            for (int index : legends_event_anchors_.candidates(source)) {
                translation_work_step();
                const Rule &rule = rules_[static_cast<size_t>(index)];
                const auto &anchor = rule.template_kinds.empty()
                    ? rule.source : rule.legends_match_anchor;
                if (anchor.empty() || find_template_literal(source, anchor, 0,
                        rule.case_insensitive) != std::string::npos)
                    candidates.push_back(index);
            }
            matching_event_rules.emplace(std::move(candidates));
        }
        return *matching_event_rules;
    };
    struct CaptureShape {
        size_t begin, end;
        Atom anchor;
        bool found_link;
        int links;
    };
    // Suffix lookahead must not recurse from a boundary that this field
    // cannot own. Keep these cheap checks shared with the actual capture;
    // no dictionary/name/item translation runs until the suffix is viable.
    const auto capture_shape = [&](char kind, size_t begin, size_t end)
            -> std::optional<CaptureShape> {
        while (begin < end && source[begin] == ' ') ++begin;
        while (end > begin && source[end - 1] == ' ') --end;
        if (begin == end) return std::nullopt;
        Atom anchor = atoms[begin];
        bool in_link = false, found_link = false;
        int links = 0, link_color = -1;
        for (size_t at = begin; at < end; ++at) {
            if (source[at] == ' ') continue;
            const Atom &atom = atoms[at];
            if (colored(atom.color)) {
                if (!in_link || atom.color != link_color) ++links;
                if (!found_link) { anchor = atom; found_link = true; }
                link_color = atom.color;
                in_link = true;
            } else in_link = false;
        }
        // Do not split ONE native clickable identity into two captures at
        // an internal "of"/"and". Possessive punctuation can legitimately
        // share a person's color but is emitted as neutral Chinese prose.
        if (found_link && (kind == 'a' || kind == 'n' || kind == 'p' || kind == 'b')) {
            auto word = [](unsigned char ch) {
                return ascii_word_byte(ch) || is_cp437_latin_letter_byte(ch);
            };
            size_t before = begin, after = end;
            while (before > 0 && source[before - 1] == ' ') --before;
            while (after < source.size() && source[after] == ' ') ++after;
            if (before > 0 && colored(atoms[begin].color) &&
                atoms[before - 1].color == atoms[begin].color &&
                word(source[before - 1]) && word(source[begin])) return std::nullopt;
            if (after < source.size() && colored(atoms[end - 1].color) &&
                atoms[after].color == atoms[end - 1].color &&
                word(source[end - 1]) && word(source[after])) return std::nullopt;
        }
        if (kind != 'a' && kind != 'e' && links > 1) return std::nullopt;
        if (found_link && (kind == 'n' || kind == 'p')) {
            const int r = (anchor.color >> 16) & 255;
            const int g = (anchor.color >> 8) & 255, b = anchor.color & 255;
            if ((kind == 'n') != (b >= r && b > g)) return std::nullopt;
        }
        if (kind == 't' && found_link) return std::nullopt;
        if (kind == 'd' && !legends_number_field(
                std::string_view(source).substr(begin, end - begin))) return std::nullopt;
        return CaptureShape{begin, end, anchor, found_link, links};
    };
    std::function<std::optional<Pieces>(char, size_t, size_t)> capture;
    capture = [&](char kind, size_t begin, size_t end) -> std::optional<Pieces> {
        TranslationWorkFrame work_frame;
        while (begin < end && source[begin] == ' ') ++begin;
        while (end > begin && source[end - 1] == ' ') --end;
        if (begin == end) return std::nullopt;
        const CaptureKey key{kind, begin, end};
        if (const auto it = cache.find(key); it != cache.end()) return it->second;
        cache.emplace(key, std::nullopt); // guard recursive participant grammars
        const auto shape = capture_shape(kind, begin, end);
        if (!shape) return std::nullopt;
        auto resolve = [&]() -> std::optional<Pieces> {
            const Atom anchor = shape->anchor;
            const bool found_link = shape->found_link;
            const int links = shape->links;
            // A whole event title can itself be ONE clickable identity. Its
            // embedded person/place words then share the event's link color,
            // so translate it as one piece instead of splitting that link.
            if (kind == 'e' && links == 1 &&
                std::all_of(atoms.begin() + begin, atoms.begin() + end,
                    [&](const Atom &atom) {
                        const size_t at = static_cast<size_t>(&atom - atoms.data());
                        return source[at] == ' ' || atom.color == anchor.color;
                    })) {
                if (auto title = translate_legends_event(
                        std::string_view(source).substr(begin, end - begin)))
                    return Pieces{supported_piece(*title, anchor, end)};
            }
            if (kind == 'a' || kind == 'e') {
                const auto &nested_rules = kind == 'a'
                    ? legends_participant_rules_ : event_rules_for_source();
                for (int index : nested_rules) {
                    translation_work_step();
                    const Rule &rule = rules_[static_cast<size_t>(index)];
                    if (rule.template_kinds.empty()) {
                        if (end - begin == rule.source.size() &&
                            template_literal_at(source, begin, rule.source, rule.case_insensitive))
                            return Pieces{supported_piece(rule.target, anchor, end)};
                        continue;
                    }
                    const auto &first = rule.template_literals.front();
                    // Internal connectors in a single link are name grammar,
                    // not ownership/list separators between independent links.
                    if (kind == 'a' && links == 1 && first.empty()) continue;
                    if (!template_literal_at(source, begin, first, rule.case_insensitive)) continue;
                    if (!rule.legends_match_anchor.empty() &&
                        find_template_literal(std::string_view(source).substr(begin, end - begin),
                            rule.legends_match_anchor, 0, rule.case_insensitive) == std::string::npos) continue;
                    if (!legends_template_literals_fit(rule, source, begin, end, true))
                        continue;
                    std::vector<Pieces> fields(rule.template_kinds.size());
                    std::vector<size_t> field_ends(fields.size());
                    // A failed suffix depends only on its field and source
                    // offset, not on the earlier captures that reached it.
                    // Cache failures only so successful paths still populate
                    // every capture in the original greedy order.
                    std::set<std::pair<size_t, size_t>> failed_states;
                    std::function<bool(size_t, size_t)> consume = [&](size_t field, size_t at) {
                        TranslationWorkFrame work_frame;
                        const auto state = std::make_pair(field, at);
                        if (failed_states.contains(state)) return false;
                        if (field == fields.size()) {
                            if (at == end) return true;
                            failed_states.insert(state);
                            return false;
                        }
                        const auto &literal = rule.template_literals[field + 1];
                        // Nested captures own their complete source range;
                        // only this endpoint can complete the last field.
                        const bool last = field + 1 == fields.size();
                        for (size_t stop = last ? end - literal.size() : end;
                             stop > at; stop = last ? at : stop - 1) {
                            translation_work_step();
                            if (stop + literal.size() > end ||
                                !template_literal_at(source, stop, literal, rule.case_insensitive)) continue;
                            if (at == begin && stop == end) continue;
                            if (!legends_template_suffix_literals_fit(rule, source, field + 1,
                                    stop + literal.size(), end, true)) continue;
                            auto part = capture(rule.template_kinds[field], at, stop);
                            if (!part) continue;
                            fields[field] = std::move(*part);
                            field_ends[field] = stop;
                            if (consume(field + 1, stop + literal.size())) return true;
                        }
                        failed_states.insert(state);
                        return false;
                    };
                    if (!consume(0, begin + first.size())) continue;
                    Pieces result;
                    auto literal = [&](const std::string &text, size_t source_end) {
                        if (!text.empty()) result.push_back(supported_piece(text, *neutral, source_end));
                    };
                    for (size_t field = 0; field < rule.target_capture_order.size(); ++field) {
                        const size_t index = rule.target_capture_order[field];
                        literal(rule.target_template_literals[field], field_ends[index]);
                        const auto &part = fields[index];
                        result.insert(result.end(), part.begin(), part.end());
                    }
                    literal(rule.target_template_literals.back(), end);
                    return result;
                }
            }
            // Participants AND nested event summaries retain every original
            // link through their pieces, including stories inside ceremonies.
            if (links > 1) return std::nullopt;
            const auto value = std::string_view(source).substr(begin, end - begin);
            std::optional<std::string> target;
            switch (kind) {
            case 'a': {
                const int r = (anchor.color >> 16) & 255;
                const int g = (anchor.color >> 8) & 255, b = anchor.color & 255;
                target = translate_legends_participant(value, found_link
                    ? std::optional<bool>(b >= r && b > g) : std::nullopt);
                break;
            }
            case 'n': target = translate_legends_actor(value); break;
            case 'p': target = translate_legends_place(value); break;
            case 's': target = translate_legends_term(value); break;
            case 'q': target = translate_legends_color(value); break;
            case 't': target = translate_legends_anatomy(value); break;
            case 'i': target = translate_legends_item(value); break;
            case 'e':
                target = translate_civilization_reference(value);
                if (!target) target = translate_legends_name(value, false);
                break;
            case 'b': target = translate_legends_book(value); break;
            case 'r': target = translate_deity_spheres(value); break;
            case 'c':
                if (const auto number = adventure_location_count(lower(std::string(value))))
                    target = std::to_string(*number);
                break;
            case 'd': target = std::string(value); break;
            default: break;
            }
            if (!target || target->empty() || std::any_of(target->begin(), target->end(),
                    [](unsigned char ch) { return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'); }))
                return std::nullopt;
            return Pieces{supported_piece(*target, anchor, end)};
        };
        auto result = resolve();
        cache[key] = result;
        return result;
    };
    auto append = [](std::vector<LegendsTextPiece> &pieces, LegendsTextPiece piece) {
        if (piece.target.empty()) return;
        if (!pieces.empty() && pieces.back().foreground_rgb == piece.foreground_rgb &&
            pieces.back().native_x == piece.native_x && pieces.back().native_y == piece.native_y &&
            pieces.back().source_end == piece.source_end)
            pieces.back().target += piece.target;
        else pieces.push_back(std::move(piece));
    };
    auto matching_rules = matching_legends_rules(source);
    std::map<size_t, std::optional<Pieces>> sentences;
    std::function<std::optional<Pieces>(size_t)> resolve = [&](size_t cursor)
            -> std::optional<Pieces> {
        TranslationWorkFrame work_frame;
        while (cursor < source.size() && source[cursor] == ' ') ++cursor;
        if (cursor == source.size()) return Pieces{};
        if (const auto it = sentences.find(cursor); it != sentences.end()) return it->second;
        struct Candidate { size_t end; Pieces pieces; };
        std::vector<Candidate> candidates;
        std::vector<size_t> compositional_ends;
        const auto feature_argument_end = legends_feature_argument_end(source, cursor);
        // Reuse complete, existing raw-description translations. Every byte
        // must be neutral: flattening a sentence containing a colored name
        // would silently discard its clickable identity.
        for (size_t end = cursor; end < source.size(); ++end) {
            if (source[end] != ' ' && colored(atoms[end].color)) break;
            if (source[end] != '.' && source[end] != '!' && source[end] != '?') continue;
            const auto sentence = std::string_view(source).substr(cursor, end - cursor + 1);
            auto target = exact_literal_translation(sentence);
            if (!target) {
                // Dated site history is often entirely neutral-colored.
                // Its verbs and names must reach the typed event grammar
                // before generic item/body-description rules spend the shared
                // draw budget interpreting every possible sentence suffix.
                compositional_ends.push_back(end + 1);
                continue;
            }
            if (!target || target->empty() || std::any_of(target->begin(), target->end(),
                    [](unsigned char ch) { return (ch >= 'A' && ch <= 'Z') ||
                        (ch >= 'a' && ch <= 'z'); })) continue;
            Pieces pieces{supported_piece(*target, *neutral, end + 1)};
            // A complete candidate already has the maximum possible end.
            // Exact neutral literals precede typed rules, including ties;
            // generic compositional descriptions remain a fallback below.
            if (end + 1 == source.size()) {
                sentences[cursor] = std::move(pieces);
                return sentences[cursor];
            }
            candidates.push_back({end + 1, std::move(pieces)});
        }
        for (int index : matching_rules) {
            translation_work_step();
            const Rule &rule = rules_[static_cast<size_t>(index)];
            if (rule.legends_continuation && cursor != 0) continue;
            if (!rule.legends_match_anchor.empty() &&
                find_template_literal(source, rule.legends_match_anchor, cursor,
                                      rule.case_insensitive) == std::string::npos) continue;
            std::vector<Pieces> captures(rule.template_kinds.size());
            std::vector<size_t> capture_ends(captures.size());
            size_t end = cursor;
            if (rule.template_kinds.empty()) {
                if (!template_literal_at(source, cursor, rule.source, rule.case_insensitive)) continue;
                end += rule.source.size();
            } else {
                const auto &first = rule.template_literals.front();
                if (!template_literal_at(source, cursor, first, rule.case_insensitive)) continue;
                if (!legends_template_literals_fit(rule, source, cursor, source.size(), false))
                    continue;
                // Typed backtracking resolves `of` inside generated titles by
                // their actual link boundaries, rather than splitting at the
                // first English connector and assigning the wrong owner.
                // Earlier fields can reach the same impossible suffix through
                // different splits. Remember that failure for this rule while
                // keeping successful capture selection in its original order.
                std::set<std::pair<size_t, size_t>> failed_states;
                // A literal delimiter alone does not prove that the later
                // fields can own their spans. Establish the whole suffix,
                // including its paragraph continuation, before resolving an
                // earlier name or participant. Shape checks use the same
                // native links and numeric fields as capture(); this is only
                // necessary-condition pruning, never a translated candidate.
                std::map<std::pair<size_t, size_t>, bool> possible_suffixes;
                std::function<bool(size_t, size_t)> suffix_possible = [&](size_t i, size_t at) {
                    TranslationWorkFrame work_frame;
                    const auto state = std::make_pair(i, at);
                    if (const auto found = possible_suffixes.find(state);
                            found != possible_suffixes.end()) return found->second;
                    const auto publish = [&](bool possible) {
                        possible_suffixes.emplace(state, possible);
                        return possible;
                    };
                    if (i == captures.size())
                        return publish(at > cursor &&
                            has_word_boundaries(source, cursor, at) && resolve(at).has_value());
                    const auto &literal = rule.template_literals[i + 1];
                    std::vector<size_t> stops;
                    if (literal.empty()) {
                        for (size_t stop = at + 1; stop <= source.size(); ++stop)
                            if (stop == source.size() || source[stop] == ' ' ||
                                source[stop] == '.' || source[stop] == ',' || source[stop] == ';')
                                stops.push_back(stop);
                    } else {
                        for (size_t stop = at + 1; stop + literal.size() <= source.size(); ++stop)
                            if (template_literal_at(source, stop, literal, rule.case_insensitive))
                                stops.push_back(stop);
                    }
                    for (auto it = stops.rbegin(); it != stops.rend(); ++it) {
                        translation_work_step();
                        if (feature_argument_end && *it > *feature_argument_end &&
                            (rule.template_kinds[i] == 's' || rule.template_kinds[i] == 'i'))
                            continue;
                        if (!legends_template_suffix_literals_fit(rule, source, i + 1,
                                *it + literal.size(), source.size(), false) ||
                            !capture_shape(rule.template_kinds[i], at, *it)) continue;
                        if (suffix_possible(i + 1, *it + literal.size())) return publish(true);
                    }
                    return publish(false);
                };
                std::function<bool(size_t, size_t)> consume = [&](size_t i, size_t at) {
                    TranslationWorkFrame work_frame;
                    const auto state = std::make_pair(i, at);
                    if (failed_states.contains(state)) return false;
                    if (i == captures.size()) {
                        // A typed field being valid is not enough: its end
                        // must leave a translatable paragraph suffix. If a
                        // greedy title/participant absorbs the next clause,
                        // retry shorter captures INSIDE this same rule, not
                        // only other rules after committing that boundary.
                        // Every recursive suffix strictly advances, and the
                        // shared sentence cache memoizes success and failure.
                        if (at <= cursor || !has_word_boundaries(source, cursor, at) ||
                            !resolve(at)) {
                            failed_states.insert(state);
                            return false;
                        }
                        end = at;
                        return true;
                    }
                    const auto &literal = rule.template_literals[i + 1];
                    std::vector<size_t> stops;
                    if (literal.empty()) {
                        for (size_t stop = at + 1; stop <= source.size(); ++stop)
                            if (stop == source.size() || source[stop] == ' ' ||
                                source[stop] == '.' || source[stop] == ',' || source[stop] == ';')
                                stops.push_back(stop);
                    } else {
                        for (size_t stop = at + 1; stop + literal.size() <= source.size(); ++stop)
                            if (template_literal_at(source, stop, literal, rule.case_insensitive))
                                stops.push_back(stop);
                    }
                    for (auto it = stops.rbegin(); it != stops.rend(); ++it) {
                        translation_work_step();
                        if (feature_argument_end && *it > *feature_argument_end &&
                            (rule.template_kinds[i] == 's' || rule.template_kinds[i] == 'i'))
                            continue;
                        // An earlier field must not consume a later required
                        // predicate just because both contain the same `of`
                        // or `in` delimiter. Reject that split before parsing
                        // the potentially long participant/name capture.
                        if (!legends_template_suffix_literals_fit(rule, source, i + 1,
                                *it + literal.size(), source.size(), false)) continue;
                        if (i + 1 == captures.size() &&
                            !capture_shape(rule.template_kinds[i], at, *it)) continue;
                        if (!suffix_possible(i + 1, *it + literal.size())) continue;
                        const auto part = capture(rule.template_kinds[i], at, *it);
                        if (!part) continue;
                        captures[i] = *part;
                        capture_ends[i] = *it;
                        if (consume(i + 1, *it + literal.size())) return true;
                    }
                    failed_states.insert(state);
                    return false;
                };
                if (!consume(0, cursor + first.size())) continue;
            }
            if (end <= cursor || !has_word_boundaries(source, cursor, end)) continue;
            std::vector<LegendsTextPiece> pieces;
            auto literal = [&](const std::string &text, size_t source_end) {
                append(pieces, supported_piece(text, *neutral, source_end));
            };
            if (captures.empty()) literal(rule.target, end);
            else {
                for (size_t i = 0; i < rule.target_capture_order.size(); ++i) {
                    const size_t index = rule.target_capture_order[i];
                    literal(rule.target_template_literals[i], capture_ends[index]);
                    for (const auto &part : captures[index])
                        append(pieces, part);
                }
                literal(rule.target_template_literals.back(), end);
            }
            // No later rule can beat an end at the paragraph boundary, and
            // an earlier candidate with the same end would have returned
            // already. Shorter clauses still use the full suffix selection.
            if (end == source.size()) {
                sentences[cursor] = std::move(pieces);
                return sentences[cursor];
            }
            candidates.push_back({end, std::move(pieces)});
        }
        if (const auto end = legends_feature_item_end(source, cursor)) {
            // Raw feature nouns have no link. Named figures, works and event
            // summaries continue through their typed clauses above so each
            // independent clickable span survives the translated layout.
            const bool unlinked = std::none_of(atoms.begin() + cursor, atoms.begin() + *end,
                [&](const Atom &atom) { return colored(atom.color); });
            if (unlinked)
                if (auto term = capture('s', cursor, *end))
                    candidates.push_back({*end, std::move(*term)});
        }
        // A locally longest clause can consume a connective needed by the
        // next clause. Select a COMPLETE parse of the paragraph, with memoized
        // suffixes, rather than abandoning a known event after that choice.
        std::stable_sort(candidates.begin(), candidates.end(),
            [](const Candidate &a, const Candidate &b) { return a.end > b.end; });
        for (auto &candidate : candidates) {
            auto rest = resolve(candidate.end);
            if (!rest) continue;
            for (auto &piece : *rest) append(candidate.pieces, std::move(piece));
            sentences[cursor] = std::move(candidate.pieces);
            return sentences[cursor];
        }
        // Raw descriptions still use the shared composition rules when no
        // complete typed/literal parse exists. Check the advancing suffix
        // first, then try complete neutral sentences longest-first; never
        // replace a supported historical event with an item interpretation.
        for (auto it = compositional_ends.rbegin(); it != compositional_ends.rend(); ++it) {
            auto rest = resolve(*it);
            if (!rest) continue;
            auto target = translate_compositional(source.substr(cursor, *it - cursor));
            if (!target || target->empty() || std::any_of(target->begin(), target->end(),
                    [](unsigned char ch) { return (ch >= 'A' && ch <= 'Z') ||
                        (ch >= 'a' && ch <= 'z'); })) continue;
            Pieces pieces{supported_piece(*target, *neutral, *it)};
            for (auto &piece : *rest) append(pieces, std::move(piece));
            sentences[cursor] = std::move(pieces);
            return sentences[cursor];
        }
        sentences[cursor] = std::nullopt;
        return std::nullopt;
    };
    auto translated = resolve(0);
    if (!translated && clipped_start) {
        // Only a proven viewport-clipped prefix can use these noun/location
        // productions. Resolve the rest with ordinary complete-event grammar,
        // and prefer a complete prose parse before relaxing the missing start.
        matching_rules.insert(matching_rules.end(), legends_continuation_rules_.begin(),
                              legends_continuation_rules_.end());
        sentences.erase(0);
        translated = resolve(0);
    }
    if (!translated && legends_narrative_start(source)) {
        // An unknown sentence still needs the SAME font and wrapping as the
        // rest of a narrative. Keep unknown color runs intact/reportable,
        // translate only complete known runs, and retain every native link.
        // Relationship columns and section headings keep their usual layout.
        Pieces fallback;
        flow->fully_translated = false;
        for (size_t begin = 0; begin < source.size();) {
            if (source[begin] == ' ') { ++begin; continue; }
            size_t end = begin + 1;
            while (end < source.size() &&
                    (source[end] == ' ' || atoms[end].color == atoms[begin].color)) ++end;
            const auto raw = trim_view(std::string_view(source).substr(begin, end - begin));
            const Atom &anchor = atoms[begin];
            const int r = (anchor.color >> 16) & 255, g = (anchor.color >> 8) & 255;
            const int b = anchor.color & 255;
            auto target = translate_legends_text(raw, colored(anchor.color), b > r && b > g);
            std::string text = target.value_or(cp437_to_utf8(raw));
            // Preserve separators around untranslated English, rather than
            // concatenating it with an adjacent translated name/connector.
            if (!target) {
                if (begin > 0 && source[begin - 1] == ' ') text.insert(0, " ");
                if (end < source.size() && source[end - 1] == ' ') text += ' ';
            }
            fallback.push_back({std::move(text), anchor.color, anchor.x, anchor.y});
            begin = end;
        }
        translated = std::move(fallback);
    }
    if (!translated) return publish({});
    flow->pieces = std::move(*translated);
    return publish(flow->pieces.empty() ? nullptr : flow);
    };
    TranslationWorkScope work;
    try {
        return parse();
    } catch (const TranslationWorkLimit &limit) {
        // Never return a partly reordered event, or memoize an interrupted
        // child as an ordinary grammar failure. Cache only this complete
        // visible record; unchanged frames must not repeat the expensive
        // parse. Dictionary reload clears this cache for corrected rules.
        if (!work.owns_budget()) throw;
        if (legends_work_limit_cache_.insert(work_limit_key).second) {
            while (legends_work_limit_order_.size() >= 4096) {
                legends_work_limit_cache_.erase(legends_work_limit_order_.front());
                legends_work_limit_order_.pop_front();
            }
            legends_work_limit_order_.push_back(std::move(work_limit_key));
            log_line("WARN", "Historical paragraph translation work limit; keeping native text: " + source);
            log_line("WARN", "Historical translation limit detail: reason=" +
                std::string(limit.reason) + "; stage=" + limit.stage +
                "; steps=" + std::to_string(limit.steps) +
                "; depth=" + std::to_string(limit.depth) + "; input=" + limit.input);
        }
        return publish({});
    }
}

void Overlay::layout_legends_details(SDL_Renderer *renderer) {
    legends_hit_rows_.clear();
    legends_renderer_ = nullptr;
    if (!gps_) return;
    const int tile_w = gps_->tile_pixel_x, tile_h = gps_->tile_pixel_y;
    if (tile_w <= 0 || tile_h <= 0) return;
    // Tabs retain their complete targets even when no detail body is present.
    // The common renderer fits each tab to its native layout boundary.
    const auto detail = std::find_if(prepared_matches_.begin(), prepared_matches_.end(),
        [](const Match &match) {
            return match.rule == kLegendsDetailTextRule && !match.native_split_duplicate;
        });
    if (detail == prepared_matches_.end()) return;
    // Reading size follows the UI scale, never the set of visible events.
    // A long or newly clipped record cannot resize every unchanged paragraph.
    const int pixels = unified_font_pixels();
    const int origin_x = (gps_->screen_pixel_x - tile_w * gps_->dimx) / 2;
    const int origin_y = (gps_->screen_pixel_y - tile_h * gps_->dimy) / 2;
    const int text_right = legends_detail_body_viewport(*gps_).right;
    // Only visible text owns source ink. History capture retains complete
    // memory tokens while validating their exposed portion inside this same
    // scrollbar-free boundary; controls never enter prose or flow coverage.
    // Set the clip on flow owners too; draw_match inherits it for every
    // reflowed fragment, not only the ordinary/fallback rows.
    for (Match &match : prepared_matches_)
        if (match.rule == kLegendsDetailTextRule)
            match.layout_clip_right = text_right;
    auto native_row = [&](int y) {
        std::string row(static_cast<size_t>(gps_->dimx), ' ');
        for (int x = 0; x < gps_->dimx; ++x) {
            bool top = false;
            const auto *cell = cell_at(x, y, &top);
            if (cell && cell[0]) row[static_cast<size_t>(x)] = static_cast<char>(cell[0]);
        }
        return row;
    };
    if (g_legends_mouse_hook_active) {
        std::map<int, std::vector<Match *>> body;
        int left = gps_->dimx - 2;
        for (Match &match : prepared_matches_) {
            if (match.rule != kLegendsDetailTextRule || match.native_split_duplicate) continue;
            match.legends_flow.reset();
            match.legends_flow_owner = false;
            body[match.y].push_back(&match);
            left = std::min(left, match.x);
        }
        if (left >= text_right) return;
        std::vector<std::string> history_context;
        history_context.reserve(gps_->dimy);
        for (int y = 0; y < gps_->dimy; ++y) history_context.push_back(native_row(y));
        const bool native_history_page = native_history_legends_page();
        const bool unconfirmed_history_body = native_history_page &&
            (!native_history_legends_ownership_confirmed() || !native_history_legends_draw_observed());
        const auto history = native_history_page
            ? capture_history_viewport(history_context, left, text_right,
                body.begin()->first, body.rbegin()->first + 1)
            : NativeHistoryViewport{};
        // A complete native paragraph can contain blank separator rows.
        // They have no glyph Match but still occupy its scroll window. Give
        // only memory-owned blank rows a local layout slot so measuring and
        // clipping use the actual contiguous native height. The real first
        // row remains the flow's drawing owner; blank slots suppress no ink.
        std::deque<Match> history_blank_slots;
        for (const auto &[y, document] : history.rows) {
            (void)document;
            if (body.contains(y) || !std::all_of(history_context[y].begin() + left,
                    history_context[y].begin() + text_right,
                    [](char ch) { return ch == ' '; })) continue;
            auto &slot = history_blank_slots.emplace_back();
            slot.x = left;
            slot.y = y;
            slot.length = text_right - left;
            slot.rule = kLegendsDetailTextRule;
            slot.source = history_context[y].substr(left, slot.length);
            slot.layout_x = left;
            slot.layout_y = y;
            slot.layout_length = slot.length;
            body[y].push_back(&slot);
        }
        std::vector<std::shared_ptr<LegendsTextFlow>> flows;
        std::set<const LegendsTextFlow *> history_flows;
        std::map<uint64_t, std::vector<int>> event_rows;
        std::set<int> native_rows;
        std::set<int> unbound_history_rows;
        size_t clipped_events = 0, uncovered_events = 0, untranslated_events = 0;
        for (auto &[y, row] : body) {
            const auto event = history.rows.find(y);
            // An identified native Legends body remains native while its new
            // tab has not drawn yet. A retained previous-tab draw can yield
            // zero viewport records; that never authorizes English grammar.
            const bool native_event = unconfirmed_history_body ||
                event != history.rows.end() || history.gaps.contains(y);
            if (!native_event) {
                // A cached match may have been protected during the preceding
                // tab transition. Current native draws now distinguish its
                // ordinary prefix from the stable event-owned rows.
                for (Match *match : row) match->native_history_event_row = false;
                continue;
            }
            native_rows.insert(y);
            if (unconfirmed_history_body || event == history.rows.end() || history.gaps.contains(y))
                unbound_history_rows.insert(y);
            for (Match *match : row) {
                match->native_history_event_row = true;
                match->target = cp437_to_utf8(match->source);
            }
            if (!unconfirmed_history_body && event != history.rows.end())
                event_rows[event->second->sequence].push_back(y);
        }
        for (const auto &[sequence, rows] : event_rows) {
            const auto &viewport = history.viewports.at(sequence);
            // Clipping changes the window of a complete memory event; it
            // does not remove that record from semantic translation.
            if (viewport.first_line != 0 || viewport.total_lines != static_cast<int>(rows.size()))
                ++clipped_events;
            bool covered = true;
            for (int y : rows)
                for (int x = left; x < text_right; ++x) {
                    if (history_context[y][x] == ' ' || is_cp437_box_separator(history_context[y], x))
                        continue;
                    covered &= std::any_of(body[y].begin(), body[y].end(), [x](const Match *match) {
                        return x >= match->x && x < match->x + match->length;
                    });
                }
            if (!covered) { ++uncovered_events; continue; }
            auto flow = translate_history_flow(*history.rows.at(rows.front()), rows,
                history_context, left, text_right, viewport);
            if (!flow) { ++untranslated_events; continue; }
            const auto &document = *history.rows.at(rows.front());
            std::string complete_source;
            for (const auto &token : document.tokens) {
                if (!complete_source.empty()) complete_source += ' ';
                complete_source += token.source;
            }
            dfcn::TranslationResult event_result;
            for (const auto &piece : flow->pieces) {
                if (piece.translation_result) {
                    auto field = *piece.translation_result;
                    const size_t at = complete_source.find(field.source);
                    if (at == std::string::npos) {
                        // The typed RAW field can differ from the native
                        // formatter's spelling; collect its complete parent
                        // context without guessing a substring position.
                        field.source = complete_source;
                        for (auto &fragment : field.fragments) {
                            fragment.source_begin = 0;
                            fragment.source_end = complete_source.size();
                        }
                        event_result.append(field);
                    } else event_result.append(field, at);
                } else event_result.append(dfcn::TranslationResult::translated("", piece.target,
                    "history-production"));
            }
            event_result.source = std::move(complete_source);
            event_result.consumed = event_result.source.size();
            event_result.owner = "native-history:" + std::to_string(sequence);
            event_result.resource_revision = RULESETS.resource_revision();
            const auto event_metadata = std::make_shared<const dfcn::TranslationResult>(std::move(event_result));
            for (int y : rows)
                for (Match *match : body[y]) {
                    match->legends_flow = flow;
                    match->native_help_source_only = false;
                    match->translation_result = event_metadata;
                }
            for (int y : rows) native_rows.erase(y);
            body[rows.front()].front()->legends_flow_owner = true;
            history_flows.insert(flow.get());
            flows.push_back(std::move(flow));
        }
        std::vector<std::vector<int>> paragraphs;
        int previous_y = -2, previous_end = 0;
        bool previous_open = false;
        bool narrative = false;
        for (auto &[y, row] : body) {
            std::sort(row.begin(), row.end(), [](const Match *a, const Match *b) {
                return a->x < b->x;
            });
            if (row.front()->native_history_event_row) {
                previous_y = -2;
                narrative = false;
                continue;
            }
            const auto text = normalize_utterance(row.front()->source);
            const size_t space = text.find(' ');
            const int first_word = static_cast<int>(space == std::string::npos ? text.size() : space);
            const bool starts_event = text.starts_with("In ");
            const bool starts_section = text.starts_with("Related ");
            std::string row_source;
            for (const Match *match : row) {
                if (!row_source.empty()) row_source += ' ';
                row_source += normalize_utterance(match->source);
            }
            // Legends separates dated events with a blank row (or the next
            // date), not with the physical right edge of gps.screen. Its text
            // widget reserves additional right-hand space, so a short final
            // word can wrap before the old screen-width heuristic allows it.
            // A ceremony also appends another sentence to the SAME event;
            // punctuation at a native row break must not split that record.
            // Biographies have the same wrapping behavior, even when a line
            // ends between two sentences. Require narrative syntax rather
            // than treating adjacent relationship/name rows as paragraphs.
            const bool wrap = !paragraphs.empty() && previous_y + 1 == y &&
                row.front()->x == left && !starts_event && !starts_section &&
                (narrative || (previous_open &&
                    previous_end + first_word + 1 >= text_right - 1));
            if (!wrap) {
                paragraphs.emplace_back();
                narrative = legends_narrative_start(row_source);
            }
            paragraphs.back().push_back(y);
            previous_y = y;
            previous_end = row.back()->x + row.back()->length;
            const auto tail = normalize_utterance(row.back()->source);
            previous_open = !tail.empty() && std::string_view(".;!?").find(tail.back()) == std::string_view::npos;
        }
        for (const auto &paragraph : paragraphs) {
            bool covered = true;
            for (int y : paragraph) {
                const auto raw = native_row(y);
                for (int x = left; x < text_right; ++x) {
                    if (raw[x] == ' ' || is_cp437_box_separator(raw, x)) continue;
                    covered &= std::any_of(body[y].begin(), body[y].end(), [x](const Match *match) {
                        return x >= match->x && x < match->x + match->length;
                    });
                }
            }
            if (!covered) continue;
            auto flow = translate_legends_flow(paragraph, left, text_right);
            if (!flow) continue;
            for (int y : paragraph)
                for (Match *match : body[y]) match->legends_flow = flow;
            body[paragraph.front()].front()->legends_flow_owner = true;
            flows.push_back(std::move(flow));
        }
        const int width = (text_right - left) * tile_w;
        const int padding = config_.horizontal_padding;
        const int gap = std::max(1, tile_w / 6);
        std::unordered_map<const Match *, int> widths;
        auto column_kind = [](const std::vector<Match *> &row) {
            if (row.size() != 2 || row[0]->legends_flow || row[1]->legends_flow ||
                    row[0]->native_history_event_row || row[1]->native_history_event_row) return 0;
            const auto first = normalize_utterance(row[0]->source);
            const auto last = normalize_utterance(row[1]->source);
            if (last.starts_with("b. ") || last.starts_with("d. ")) return 1;
            if (first.ends_with(" in")) return 2;
            return 0;
        };
        std::array<int, 3> columns{};
        auto place_flow = [&](LegendsTextFlow &flow) {
            flow.display_pieces.clear();
            if (flow.source_rows.empty()) return false;
            // Complete paragraphs wrap within their native text viewport.
            // The physical screen tail also contains the scrolling control
            // and frame; it cannot supply extra width to colored text runs.
            const int flow_width = width;
            size_t row = 0;
            int used = 0;
            for (const auto &piece : flow.pieces) {
                std::vector<uint32_t> cps;
                if (!decode_utf8(piece.target, cps)) return false;
                std::vector<size_t> offsets{0};
                std::string text;
                for (uint32_t cp : cps) {
                    append_utf8_codepoint(text, cp);
                    offsets.push_back(text.size());
                }
                size_t begin = 0;
                while (begin < cps.size()) {
                    // Explicit source/etymology lines own complete flow rows.
                    // A multiline glyph texture cannot supply their scroll
                    // positions when treated as one display fragment.
                    if (cps[begin] == '\r') { ++begin; continue; }
                    if (cps[begin] == '\n') {
                        ++row;
                        used = 0;
                        ++begin;
                        continue;
                    }
                    const int available = flow_width - used - 2 * padding;
                    auto measure = [&](size_t end) {
                        return get_glyph_texture(renderer,
                            text.substr(offsets[begin], offsets[end] - offsets[begin]),
                            std::max(1, available), tile_h, pixels, 0, true);
                    };
                    auto fits = [&](const GlyphTexture *glyph) {
                        // Font size remains fixed; horizontal space determines
                        // wrapping and the draw box retains the full glyph ink.
                        return glyph && glyph->texture && glyph->width <= available;
                    };
                    size_t end = begin;
                    while (end < cps.size() && cps[end] != '\n' && cps[end] != '\r') ++end;
                    const auto *glyph = measure(end);
                    if (!fits(glyph)) {
                        // Fit by UTF-8 code point, not bytes or whole grammar
                        // captures. A long gray inscription must wrap rather
                        // than force every colored name down to a tiny font.
                        size_t low = begin, high = end;
                        while (low < high) {
                            const size_t middle = low + (high - low + 1) / 2;
                            if (fits(measure(middle))) low = middle;
                            else high = middle - 1;
                        }
                        end = low;
                        if (end == begin) {
                            if (used == 0) end = begin + 1;
                            else { ++row; used = 0; continue; }
                        }
                        // Avoid breaking a remaining English word if its
                        // start is on this row. Chinese can wrap per glyph;
                        // keep closing punctuation with the preceding text.
                        auto english = [](uint32_t cp) {
                            return (cp >= 'A' && cp <= 'Z') || (cp >= 'a' && cp <= 'z');
                        };
                        if (end < cps.size() && english(cps[end - 1]) && english(cps[end])) {
                            size_t word = end;
                            while (word > begin && english(cps[word - 1])) --word;
                            if (word > begin) end = word;
                        }
                        while (end > begin + 1 && end < cps.size() &&
                            (cps[end] == 0x3002 || cps[end] == 0xff0c ||
                             cps[end] == 0xff1b || cps[end] == 0xff1a ||
                             cps[end] == 0xff01 || cps[end] == 0xff1f ||
                             cps[end] == 0x201d || cps[end] == 0xff09 || cps[end] == 0x300b))
                            --end;
                        if (end == begin) {
                            if (used == 0) end = begin + 1;
                            else { ++row; used = 0; continue; }
                        }
                        glyph = measure(end);
                        if (!glyph || !glyph->texture) return false;
                    }
                    LegendsTextPiece fragment = piece;
                    fragment.target = text.substr(offsets[begin], offsets[end] - offsets[begin]);
                    fragment.box_pixel_x = origin_x + left * tile_w + used;
                    fragment.box_pixel_width = glyph->width + 2 * padding;
                    // Keep complete-layout row numbers until the native
                    // scroll range has selected the visible Chinese window.
                    fragment.display_y = static_cast<int>(row);
                    // The draw entry removes the box's two outer margins.
                    // Those margins are not spaces between grammar fields:
                    // dates, colored names and punctuation are one sentence.
                    // Advance by the measured ink run, retaining only the
                    // paragraph's outer padding on each side.
                    used += glyph->width;
                    flow.display_pieces.push_back(std::move(fragment));
                    begin = end;
                    if (begin < cps.size() && cps[begin] != '\n' && cps[begin] != '\r') {
                        ++row;
                        used = 0;
                    }
                }
            }
            const size_t target_lines = flow.display_pieces.empty() ? 0 :
                static_cast<size_t>(flow.display_pieces.back().display_y + 1);
            size_t first = 0;
            size_t visible_lines = target_lines;
            if (flow.native_total_lines > 0) {
                const auto window = native_paragraph_window_start(
                    {flow.native_first_line, flow.native_total_lines},
                    flow.source_rows.size(), target_lines);
                if (window) {
                    first = *window;
                    visible_lines = flow.source_rows.size();
                } else if (flow.native_first_line >= 0 &&
                        int64_t(flow.native_first_line) +
                            int64_t(flow.source_rows.size()) <= flow.native_total_lines) {
                    // A native range with too few positions needs a taller
                    // translated window. Proportional interval endpoints keep
                    // every complete target row reachable without font changes.
                    const uint64_t total = static_cast<uint64_t>(flow.native_total_lines);
                    const uint64_t start = static_cast<uint64_t>(flow.native_first_line);
                    first = static_cast<size_t>(start * target_lines / total);
                    const size_t last = static_cast<size_t>(
                        ((start + flow.source_rows.size()) * target_lines + total - 1) / total);
                    visible_lines = last - first;
                }
            }
            std::erase_if(flow.display_pieces, [&](const auto &piece) {
                return static_cast<size_t>(piece.display_y) < first ||
                    static_cast<size_t>(piece.display_y) - first >= visible_lines;
            });
            for (auto &piece : flow.display_pieces)
                piece.display_y = flow.source_rows.front().first +
                    static_cast<int>(static_cast<size_t>(piece.display_y) - first);
            flow.font_pixels = pixels;
            return true;
        };
        std::set<int> failed_rows;
        std::set<const LegendsTextFlow *> failed_flows;
        {
            for (const auto &[y, row] : body) {
                if (native_rows.contains(y)) continue;
                int used = 0;
                for (const Match *match : row) {
                    if (match->legends_flow) continue;
                    int measured = 0;
                    if (!match->target.empty()) {
                        const auto *glyph = get_glyph_texture(renderer, match->target,
                            std::max(1, width), tile_h, pixels, 0, true);
                        if (!glyph || !glyph->texture) failed_rows.insert(y);
                        else {
                            measured = glyph->width + 2 * padding;
                        }
                    }
                    widths.emplace(match, measured);
                    used += measured + (match != row.back() ? gap : 0);
                }
            }
            for (const auto &[y, row] : body) {
                // A row that cannot fit on its own must not widen a shared
                // column and make otherwise readable rows fail with it.
                if (native_rows.contains(y) || failed_rows.contains(y)) continue;
                const int kind = column_kind(row);
                if (kind) columns[kind] = std::max(columns[kind], widths[row[0]] + gap);
            }
            for (const auto &[y, row] : body) {
                if (native_rows.contains(y) || failed_rows.contains(y)) continue;
                int used = 0;
                const int kind = column_kind(row);
                for (size_t i = 0; i < row.size(); ++i) {
                    if (row[i]->legends_flow) continue;
                    if (i == 1 && kind) used = std::max(used, columns[kind]);
                    used += widths[row[i]] + (i + 1 < row.size() ? gap : 0);
                }
            }
            for (const auto &flow : flows) {
                // Measure once at the shared size. The native paragraph
                // still owns its complete row budget and scroll window.
                if (!place_flow(*flow)) failed_flows.insert(flow.get());
            }
        }
        const bool fits = failed_rows.empty() && failed_flows.empty();
        const size_t preserved_native_rows = native_rows.size();
        if (!fits) {
            native_rows.insert(failed_rows.begin(), failed_rows.end());
            for (const auto &flow : flows) {
                if (!failed_flows.contains(flow.get())) continue;
                for (const auto &[y, source] : flow->source_rows) {
                    (void)source;
                    native_rows.insert(y);
                }
            }
            // Each complete paragraph succeeds or falls back independently.
            // A failed paragraph keeps its original run positions and native
            // hitboxes; fitted paragraphs retain their shared Chinese layout.
            std::erase_if(flows, [&](const auto &flow) {
                return failed_flows.contains(flow.get());
            });
            columns.fill(0);
            for (const auto &[y, row] : body) {
                if (native_rows.contains(y)) continue;
                const int kind = column_kind(row);
                if (kind) columns[kind] = std::max(columns[kind], widths[row[0]] + gap);
            }
        }
        // Every unbound, clipped or failed native record keeps its original
        // run rectangles. Previously only a font-fit failure took this path;
        // semantic failures were repacked as English runs at Chinese widths.
        for (int y : native_rows) {
            auto &row = body.at(y);
            for (Match *match : row) {
                match->legends_flow.reset();
                match->legends_flow_owner = false;
                match->target = cp437_to_utf8(match->source);
                match->layout_box_pixel_x = origin_x + match->x * tile_w;
                match->layout_box_pixel_width = match->length * tile_w;
                match->layout_font_pixels = pixels;
                // Suppression already ran for these spans. Restore each
                // complete original run inside its own native rectangle.
                match->layout_lock_font_pixels = false;
                match->layout_clip_right = text_right;
            }
        }
        const bool history_observed = history.record_count != 0 && !history.rows.empty();
        if (native_history_page) {
            const bool ready = native_history_legends_ready();
            const bool ownership = native_history_legends_ownership_confirmed();
            const size_t translated_records = std::count_if(flows.begin(), flows.end(),
                [&](const auto &flow) { return history_flows.contains(flow.get()); });
            const bool complete = ready && ownership && !unconfirmed_history_body && history_observed &&
                translated_records == history.record_count && history.gaps.empty() &&
                unbound_history_rows.empty() && !uncovered_events &&
                !untranslated_events && failed_flows.empty() && failed_rows.empty();
            const std::string status = "ready=" + std::to_string(ready) +
                "; ownership=" + std::to_string(ownership) +
                "; draws=" + std::to_string(history.draw_count) +
                "; records=" + std::to_string(history.record_count) +
                "; rows=" + std::to_string(history.rows.size()) +
                "; gaps=" + std::to_string(history.gaps.size()) +
                "; translated=" + std::to_string(translated_records) +
                "; clipped=" + std::to_string(clipped_events) +
                "; uncovered=" + std::to_string(uncovered_events) +
                "; semantic_failures=" + std::to_string(untranslated_events) +
                "; layout_failures=" + std::to_string(failed_flows.size()) +
                "; unbound_rows=" + std::to_string(unbound_history_rows.size()) +
                "; observed=" + std::to_string(history_observed) +
                "; complete=" + std::to_string(complete);
            if (legends_native_capture_status_ != status) {
                legends_native_capture_status_ = status;
                log_line("INFO", "Native Legends event layout: " + status);
            }
        }
        static std::string previous_fit_failure;
        if (!fits) {
            const std::string status = "rows=" +
                std::to_string(native_rows.size() - preserved_native_rows) +
                "; paragraphs=" + std::to_string(failed_flows.size()) +
                "; translated=" + std::to_string(flows.size()) +
                "; pixels=" + std::to_string(pixels);
            if (previous_fit_failure != status) {
                previous_fit_failure = status;
                log_line("INFO", "Legends text fit kept native paragraphs: " + status);
            }
        } else if (!previous_fit_failure.empty() && (!native_history_page || history_observed)) {
            previous_fit_failure.clear();
            log_line("INFO", "Legends visible paragraph fit failures resolved");
        }
        // Extra translated rows extend the display region and move later
        // records down. Native source rows remain unchanged for ownership
        // and mouse routing; only their displayed rectangles are relocated.
        std::map<int, int> extra_rows_after;
        for (const auto &flow : flows) {
            int end = flow->source_rows.front().first;
            for (const auto &piece : flow->display_pieces)
                end = std::max(end, piece.display_y + 1);
            const int extra = std::max(0, end - flow->source_rows.back().first - 1);
            extra_rows_after[flow->source_rows.back().first] = std::max(
                extra_rows_after[flow->source_rows.back().first], extra);
        }
        const auto display_row = [&](int y) {
            int shifted = y;
            for (const auto &[last, extra] : extra_rows_after) {
                if (last >= y) break;
                shifted += extra;
            }
            return shifted;
        };
        for (const auto &flow : flows) {
            const int offset = display_row(flow->source_rows.front().first) -
                flow->source_rows.front().first;
            for (auto &piece : flow->display_pieces) piece.display_y += offset;
        }
        std::map<int, size_t> hit_rows;
        for (auto &[y, row] : body) {
            const int shown_y = display_row(y);
            for (Match *match : row) match->layout_y = shown_y;
            // No remapping on a fallback row: its visible and native link
            // positions are still the same, including its empty row space.
            if (native_rows.contains(y)) continue;
            LegendsHitRow hit_row;
            hit_row.y = y;
            hit_row.source = native_row(y);
            hit_row.visible = {origin_x + left * tile_w,
                origin_y + shown_y * tile_h, width, tile_h};
            // Keep empty translated space inside the native scrolling body,
            // never on the outer frame or the scrollbar's arrow/track.
            int inactive_x = -1;
            for (const Match *match : row) {
                const int color = match->layout_foreground_rgb;
                const int r = (color >> 16) & 255, g = (color >> 8) & 255, b = color & 255;
                if (std::max({r, g, b}) - std::min({r, g, b}) <= 32) { inactive_x = match->x; break; }
            }
            if (inactive_x < 0) {
                const Match &tail = *row.back();
                for (int x = tail.x + tail.length + 1; x < text_right; ++x) {
                    if (hit_row.source[x] == ' ') { inactive_x = x; break; }
                }
            }
            if (inactive_x >= 0)
                hit_row.inactive_native = {origin_x + inactive_x * tile_w + tile_w / 2,
                                          origin_y + y * tile_h + tile_h / 2};
            int used = 0;
            const int kind = column_kind(row);
            for (size_t i = 0; i < row.size(); ++i) {
                Match &match = *row[i];
                if (match.legends_flow) continue;
                if (i == 1 && kind) used = std::max(used, columns[kind]);
                const int measured = widths[&match];
                match.layout_box_pixel_x = hit_row.visible.x + used;
                match.layout_box_pixel_width = measured;
                match.layout_font_pixels = pixels;
                match.layout_lock_font_pixels = true;
                match.layout_clip_right = text_right;
                if (measured > 0) {
                    hit_row.spans.push_back({
                        {match.layout_box_pixel_x, hit_row.visible.y, measured, tile_h},
                        {origin_x + match.x * tile_w + tile_w / 2, origin_y + y * tile_h + tile_h / 2}});
                    used += measured + gap;
                }
            }
            hit_row.visible.w = std::max(hit_row.visible.w, used);
            hit_rows[shown_y] = legends_hit_rows_.size();
            legends_hit_rows_.push_back(std::move(hit_row));
        }
        for (const auto &flow : flows) {
            for (const auto &[y, source] : flow->source_rows) {
                (void)source;
                const auto found = hit_rows.find(display_row(y));
                if (found != hit_rows.end())
                    legends_hit_rows_[found->second].dependencies = flow->source_rows;
            }
            for (const auto &piece : flow->display_pieces) {
                if (piece.native_x < 0 || piece.native_y < 0) continue;
                auto found = hit_rows.find(piece.display_y);
                if (found == hit_rows.end()) {
                    LegendsHitRow extended;
                    extended.y = flow->source_rows.front().first;
                    extended.source = native_row(extended.y);
                    extended.visible = {origin_x + left * tile_w,
                        origin_y + piece.display_y * tile_h, width, tile_h};
                    extended.dependencies = flow->source_rows;
                    found = hit_rows.emplace(piece.display_y, legends_hit_rows_.size()).first;
                    legends_hit_rows_.push_back(std::move(extended));
                }
                auto &row = legends_hit_rows_[found->second];
                row.visible.w = std::max(row.visible.w,
                    piece.box_pixel_x + piece.box_pixel_width - row.visible.x);
                row.spans.push_back({
                    {piece.box_pixel_x + padding, origin_y + piece.display_y * tile_h,
                     std::max(1, piece.box_pixel_width - 2 * padding), tile_h},
                    {origin_x + piece.native_x * tile_w + tile_w / 2,
                     origin_y + piece.native_y * tile_h + tile_h / 2}});
            }
            flow->laid_out = true;
        }
        legends_grid_x_ = gps_->dimx; legends_grid_y_ = gps_->dimy;
        legends_tile_x_ = tile_w; legends_tile_y_ = tile_h;
        legends_identity_y_ = -1;
        for (const Match &match : prepared_matches_) {
            if (match.rule == kLegendsDetailHeadingRule && match.y < detail->y) {
                legends_identity_y_ = match.y;
                legends_identity_source_ = native_row(match.y);
                break;
            }
        }
        if (legends_identity_y_ >= 0) legends_renderer_ = renderer;
    }
    for (Match &match : prepared_matches_) {
        if (match.rule == kLegendsDetailTabRule) continue;
        if (match.rule == kLegendsDetailHeadingRule && match.y < detail->y &&
            !match.native_split_duplicate) {
            match.layout_x = 2;
            if (!match.native_split_text) match.layout_y = match.y;
            match.layout_length = gps_->dimx - 4;
            match.layout_clip_right = gps_->dimx - 2;
            match.layout_left = false;
            // A long event must not shrink the pinned title or navigation.
            match.layout_font_pixels = std::max(config_.min_font_pixels,
                static_cast<int>(tile_h * config_.font_scale));
            match.layout_lock_font_pixels = true;
            match.layout_line_height_pixels = tile_h;
        }
    }
}

void Overlay::remap_legends_mouse(int *x, int *y) const {
    if (!x || !y || !config_.enabled || !legends_renderer_ || !gps_ ||
        !g_legends_mouse_hook_active || legends_identity_y_ < 0 ||
        gps_->dimx != legends_grid_x_ || gps_->dimy != legends_grid_y_ ||
        gps_->tile_pixel_x != legends_tile_x_ || gps_->tile_pixel_y != legends_tile_y_)
        return;
    auto row_current = [&](int y, const std::string &source) {
        for (int x = 0; x < gps_->dimx; ++x) {
            bool top = false;
            const auto *cell = cell_at(x, y, &top);
            const char ch = cell && cell[0] ? static_cast<char>(cell[0]) : ' ';
            if (ch != source[static_cast<size_t>(x)]) return false;
        }
        return true;
    };
    // Never use yesterday's links after scrolling, changing tabs or opening
    // a different figure. These are source-byte checks, not translated text.
    if (!row_current(legends_identity_y_, legends_identity_source_)) return;
    float logical_x = 0, logical_y = 0;
    SDL_RenderWindowToLogical(legends_renderer_, *x, *y, &logical_x, &logical_y);
    const SDL_Point point{static_cast<int>(logical_x), static_cast<int>(logical_y)};
    for (const auto &row : legends_hit_rows_) {
        if (!SDL_PointInRect(&point, &row.visible)) continue;
        if (!row_current(row.y, row.source)) return;
        for (const auto &[source_y, source] : row.dependencies)
            if (!row_current(source_y, source)) return;
        // Former English link locations are now blank. Use an inert point
        // inside this row so wheel input retains native scroll-area membership.
        // A completely filled link row can borrow another current body row's
        // inert point; do not use a stale anchor after scrolling/tab changes.
        SDL_Point native{(gps_->screen_pixel_x - gps_->dimx * gps_->tile_pixel_x) / 2 +
                         gps_->tile_pixel_x / 2, point.y};
        if (row.inactive_native.x >= 0) native = row.inactive_native;
        else {
            for (const auto &other : legends_hit_rows_) {
                if (other.inactive_native.x >= 0 && row_current(other.y, other.source)) {
                    native = other.inactive_native;
                    break;
                }
            }
        }
        for (const auto &span : row.spans) {
            if (SDL_PointInRect(&point, &span.visible)) {
                if (span.source_y >= 0 && !row_current(span.source_y, span.source)) return;
                native = span.native;
                break;
            }
        }
        SDL_RenderLogicalToWindow(legends_renderer_, static_cast<float>(native.x),
            static_cast<float>(native.y), x, y);
        return;
    }
}
