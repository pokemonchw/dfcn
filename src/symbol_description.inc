// Catalog display and search use the same typed caption entry. The native
// filter supplies complete sources, not clipped rows or translated guesses.
std::optional<std::string> Overlay::translate_symbol_candidate(
        std::string_view source, SymbolCaptionKind kind, bool instrument_catalog) const {
    TranslationStateScope translation_scope;
    switch (kind) {
    case SymbolCaptionKind::Creature: {
        std::string_view species = source;
        std::string sex;
        if (!species.empty()) {
            const auto marker = static_cast<unsigned char>(species.back());
            if (marker == 0x0b || marker == 0x0c) {
                sex = marker == 0x0b ? "♂" : "♀";
                species.remove_suffix(1);
                species = trim_view(species);
                if (species.ends_with(',')) species.remove_suffix(1);
            }
        }
        auto target = translate_creature_descriptor(trim_view(species));
        if (target && !sex.empty()) *target += "，" + sex;
        return target;
    }
    case SymbolCaptionKind::Shape:
        return translate_symbol_shape(source);
    case SymbolCaptionKind::Item:
        if (auto target = exact_literal_translation(source)) return target;
        return translate_embark_instrument_item(std::string(source), false, instrument_catalog);
    case SymbolCaptionKind::Figure:
    case SymbolCaptionKind::Artifact:
        if (source == "Untitled/unnamed") return exact_literal_translation(source);
        return translate_legends_artifact_identity(source);
    case SymbolCaptionKind::Plant: {
        // Plant and tree elements share the plant RAW's NAME fields, not
        // the homonymous material sense (for example ash / ashes).
        std::vector<size_t> origins;
        if (auto target = RULESETS.translate_with_origins(
                lower(native_text_to_utf8(source)), "::plants::name", origins)) return target;
        return exact_literal_translation(source);
    }
    case SymbolCaptionKind::Action:
        return exact_literal_translation(source);
    }
    return std::nullopt;
}

bool Overlay::translated_symbol_search_matches(std::string_view source,
        std::string_view query, SymbolCaptionKind kind) const {
    TranslationStateScope translation_scope;
    if (!config_.enabled || source.empty()) return false;
    if (translated_search_query(query).literal.empty()) return false;
    const auto target = memoize_search_translation(static_cast<char>(0x40 + static_cast<int>(kind)), source, [&] {
        return translate_symbol_candidate(source, kind);
    }, kind == SymbolCaptionKind::Figure || kind == SymbolCaptionKind::Artifact);
    return search_association_text(source,target.value_or(""),query,SearchCandidateKind::NamedEntity,"names");
}

// Image prose and the Choose X/Y picker refer to the SAME art elements.
// Strip grammatical articles/quantities as a whole, never via a global The
// rule; nouns and personal names retain their existing dictionary paths.
static std::string fill_symbol_roles(std::string_view pattern,
        std::string_view subject, std::string_view object = {}) {
    std::string target;
    for (char ch : pattern) {
        if (ch == 'X') target += subject;
        else if (ch == 'Y') target += object;
        else target += ch;
    }
    return target;
}

// The native image grammar uses bare creature nouns for unnumbered groups
// (the editor labels this "0 for unnumbered plural"). Named figures,
// article-bearing individuals and explicitly counted elements are different
// productions. Definite action subjects also need a plural verb before the
// caller may interpret them as a group.
static std::optional<std::string_view> symbol_group_source(
        std::string_view source, bool definite = false) {
    source = trim_view(source);
    if (definite && (source.starts_with("The ") || source.starts_with("the ")))
        source.remove_prefix(4);
    if (source.empty() || source.front() < 'a' || source.front() > 'z' ||
        source.starts_with("a ") || source.starts_with("an ") ||
        source.starts_with("the ")) return std::nullopt;
    for (size_t at = source.find(' '); at != std::string_view::npos;
         at = source.find(' ', at + 1))
        if (adventure_location_count(std::string(source.substr(0, at))))
            return std::nullopt;
    return source;
}

std::optional<std::string> Overlay::translate_symbol_element(
        std::string_view raw_source) const {
    std::string source = normalize_art_utterance(raw_source);
    for (char &ch : source)
        if (ch == '\x10' || ch == '\x11') ch = '"';
    if (const auto found = symbol_element_cache_.find(source);
        !translation_work_exhausted() && !native_announcement_log_item_field_active() &&
        found != symbol_element_cache_.end())
        return found->second;
    auto complete = [&](const std::optional<std::string> &target) {
        return translation_complete_with_native_nicknames(target, source);
    };
    auto depicted_creature = [&](std::string_view value) -> std::optional<std::string> {
        if (auto target = translate_creature_descriptor(value, true); complete(target)) return target;
        // Deity depictions can select a gender independently of the species.
        // PE 53.16 0x148585..0x14876e writes status, then female/male, then
        // the species. The shared creature grammar already owns statuses;
        // retain their order while resolving this art-only gender wrapper.
        std::string status;
        for (;;) {
            size_t length = 0;
            std::string_view translated;
            for (const auto &[prefix, target] : creature_name_status_prefix) {
                if (value.size() > prefix.size() && value[prefix.size()] == ' ' &&
                    template_literal_at(value, 0, prefix, true)) {
                    length = prefix.size();
                    translated = target;
                    break;
                }
            }
            if (!length) break;
            status += translated;
            value.remove_prefix(length + 1);
        }
        for (std::string_view gender : {"female", "male"}) {
            if (value.size() <= gender.size() || value[gender.size()] != ' ' ||
                !template_literal_at(value, 0, gender, true)) continue;
            const auto species = translate_creature_descriptor(value.substr(gender.size() + 1), true);
            const auto pattern = exact_literal_translation("Art image " + std::string(gender) + ": X");
            if (complete(species) && pattern)
                return status + fill_symbol_roles(*pattern, *species);
        }
        return std::nullopt;
    };
    auto noun = [&](auto &&self, std::string_view value, unsigned depth)
            -> std::optional<std::string> {
        value = trim_view(value);
        if (value.empty() || depth > 16) return std::nullopt;
        // A deity's domains and depicted form belong to one art element.
        // Resolve the shared native-image templates before stripping the
        // unnamed deity's article or splitting its internal commas/"and".
        for (int index : item_description_term_rules_) {
            const Rule &rule = rules_[static_cast<size_t>(index)];
            const bool named = rule.source == "{n}, the deity of {s}, depicted as a {s}";
            if (!named && rule.source != "the deity of {s}, depicted as a {s}") continue;
            size_t end = 0;
            std::vector<std::string> captures;
            if (!match_template(rule, value, 0, &end, &captures) || end != value.size() ||
                captures.size() != (named ? 3u : 2u)) continue;
            std::vector<std::optional<std::string>> resolved(captures.size());
            if (named) resolved[0] = translate_legends_actor(captures[0]);
            const size_t domains = named ? 1 : 0;
            resolved[domains] = translate_deity_spheres(captures[domains]);
            resolved[domains + 1] = depicted_creature(captures[domains + 1]);
            if (!std::all_of(resolved.begin(), resolved.end(), complete)) continue;
            auto target = fill_template(rule, captures, nullptr, nullptr, &resolved);
            if (complete(target)) return target;
        }
        bool article_noun = false;
        for (std::string_view article : {"a ", "an ", "the ", "A ", "An ", "The "}) {
            if (!value.starts_with(article)) continue;
            // Try a generated title intact as well as its article-free form.
            // Lowercase nouns must never enter the proper-name fallback.
            if (article == "The ")
                if (auto title = translate_legends_name(value, false); complete(title))
                    return title;
            article_noun = true;
            value.remove_prefix(article.size());
            break;
        }
        if (value.empty()) return std::nullopt;
        if (value.size() > 2 && value.front() == '"' && value.back() == '"') {
            const auto body = self(self, value.substr(1, value.size() - 2), depth + 1);
            return body ? std::optional<std::string>("“" + *body + "”") : std::nullopt;
        }
        // An unnamed artifact can use the complete quality/wear-wrapped item
        // caption. Unwrap before its internal comma or depicted-subject list
        // is mistaken for an outer element separator, then preserve the marks.
        const auto designation = split_item_designation(value);
        if (!designation.prefix.empty()) {
            const auto body = self(self, designation.item, depth + 1);
            return body ? std::optional<std::string>(
                designation.prefix + *body + designation.suffix) : std::nullopt;
        }
        // The native item formatter emits flags&4's "grown " before the
        // item-type branch (PE 53.16 0xa82d7d), hence before a trap component's
        // comma-bearing adjective. The complete item grammar owns both the
        // living source and the type, including their Chinese word order.
        if (template_literal_at(value, 0, "grown ", true)) {
            return translate_item_caption_grammar(value);
        }
        // Image prose reverses the species/name order used in Legends events:
        // "Ab Blazetongs the human". Parse the whole species, including its
        // generated modifiers, and resolve the name through the shared path.
        // Item captions title-case these connectors. Match their grammar
        // without changing the spelling of the depicted figure's name.
        for (size_t at = find_template_literal(value, " the ", 0, true);
             at != std::string_view::npos;
             at = find_template_literal(value, " the ", at + 5, true)) {
            const auto species = depicted_creature(value.substr(at + 5));
            if (!complete(species)) continue;
            const auto name = translate_legends_name(value.substr(0, at), true);
            const auto pattern = exact_literal_translation("Art image named creature: X Y");
            if (complete(name) && pattern)
                return fill_symbol_roles(*pattern, *species, *name);
        }
        // The item element's native writer (PE 53.16 0x147ec2) uses the
        // same "name the kind" connector for artifacts and written items.
        // Keep its complete item suffix, including material and decoration,
        // ahead of proper-name/list parsing, but after the creature form.
        if (auto target = translate_named_art_item(value); complete(target)) return target;
        // A statue or figurine owns its depicted subjects, including their
        // commas/conjunctions. Its complete typed noun must be resolved before
        // those separators can be interpreted as separate image elements.
        const auto folded_item = lower(std::string(value));
        const bool depicted_item = folded_item.starts_with("statue of ") ||
            folded_item.starts_with("statues of ") ||
            folded_item.starts_with("figurine of ") ||
            folded_item.starts_with("figurines of ") ||
            folded_item.find(" statue of ") != std::string::npos ||
            folded_item.find(" statues of ") != std::string::npos ||
            folded_item.find(" figurine of ") != std::string::npos ||
            folded_item.find(" figurines of ") != std::string::npos;
        if (depicted_item)
            if (auto target = translate_item_description_term(value); complete(target)) return target;
        if (template_literal_at(value, 0, "large, serrated ", true))
            if (auto target = translate_embark_trap_component_name(value); complete(target)) return target;
        if (auto target = translate_symbol_candidate(value, SymbolCaptionKind::Plant);
            complete(target)) return target;
        if (auto target = exact_literal_translation(value);
            item_description_translation_complete(target)) return target;
        if (auto target = translate_symbol_shape(value); complete(target)) return target;
        if (auto target = depicted_creature(value); complete(target)) return target;
        // Art can depict manufactured items as well as creatures. As in item
        // prose, a typed species and the outer item grammar are resolved
        // together so generated names preserve material qualifiers.
        if (auto target = translate_creature_reference(value); complete(target)) return target;
        // Only quantity prefixes may use the inverse of DF's get_number().
        // Keep an explicit count without inventing a species-specific classifier.
        for (size_t at = value.rfind(' '); at != std::string_view::npos;
             at = at == 0 ? std::string_view::npos : value.rfind(' ', at - 1)) {
            const auto count = adventure_location_count(lower(std::string(value.substr(0, at))));
            if (!count) continue;
            const auto item = self(self, value.substr(at + 1), depth + 1);
            if (item) return std::to_string(*count) + " × " + *item;
        }
        // A named book artifact may contain commas or lower-case connectors.
        // Only a complete reviewed book production may bypass noun/list syntax.
        for (int index : legends_book_rules_) {
            const Rule &rule = rules_[static_cast<size_t>(index)];
            size_t end = 0;
            std::vector<std::string> captures;
            if (match_template(rule, value, 0, &end, &captures) && end == value.size())
                if (auto target = translate_legends_book(value); complete(target)) return target;
        }
        // Do not let a token-by-token item/name resolver swallow list syntax.
        // Complete title parsing still allows conjunctions inside artifact names.
        // A role candidate gives a figure's name WITHOUT the prose species
        // suffix. Reuse the person path so its native given name is identical
        // here, in the top description and in the historical-figure picker.
        if (!article_noun)
            if (auto target = translate_legends_name(value, true); complete(target)) return target;
        if (auto target = translate_legends_name(value, false); complete(target)) return target;
        if (find_template_literal(value, " and ", 0, true) != std::string_view::npos ||
            value.find(',') != std::string_view::npos) return std::nullopt;
        // Unnamed item elements use the same complete formatter as named
        // artifacts (PE 53.16 0x1480e6), including quality and decoration.
        if (auto target = translate_item_description_term(value); complete(target)) return target;
        if (auto target = translate_legends_item(value); complete(target)) return target;
        if (auto target = translate_embark_instrument_item(std::string(value), false);
            complete(target)) return target;
        return std::nullopt;
    };
    auto target = noun(noun, source, 0);
    if (!translation_work_exhausted() && !native_announcement_log_item_field_active()) {
        if (symbol_element_cache_.size() >= 512) symbol_element_cache_.clear();
        symbol_element_cache_.emplace(source, target);
    }
    return target;
}

// The preview, role picker and deletion list share the same element grammar.
static bool symbol_empty_element_list(std::string_view value) {
    value = trim_view(value);
    while (!value.empty()) {
        if (value.front() == ',') value.remove_prefix(1);
        else if (template_literal_at(value, 0, "and", true) &&
                (value.size() == 3 || value[3] == ' ')) value.remove_prefix(3);
        else return false;
        value = trim_view(value);
    }
    return true;
}

std::optional<std::string> Overlay::translate_symbol_elements(
        std::string_view raw_source) const {
    std::string source = normalize_art_utterance(raw_source);
    // DF surrounds unnamed artifact item descriptions with CP437 arrows.
    // Treat these as quotation delimiters, not part of the material/item.
    for (char &ch : source)
        if (ch == '\x10' || ch == '\x11') ch = '"';
    std::unordered_map<std::string, std::optional<std::string>> element_cache;
    auto elements = [&](auto &&self, std::string_view value, unsigned depth)
            -> std::optional<std::string> {
        value = trim_view(value);
        if (depth > 32) return std::nullopt;
        if (value.empty()) return std::string{};
        const std::string key(value);
        if (const auto found = element_cache.find(key); found != element_cache.end())
            return found->second;
        auto target = translate_symbol_element(value);
        if (target) {
            if (const auto group = symbol_group_source(value)) {
                const auto species = translate_creature_descriptor(*group, true);
                const auto pattern = exact_literal_translation("Art image group: X");
                if (species && pattern) target = fill_symbol_roles(*pattern, *species);
            }
        }
        // The base element virtual returns an empty label, but the native
        // image writer still emits separators by vector index. Only those
        // empty slots disappear; an unknown noun cannot become an empty slot.
        if (!target && symbol_empty_element_list(value)) target = std::string{};
        bool quoted = false;
        const bool native_nickname = value.find('`') != std::string_view::npos;
        for (size_t at = 0; !target && at < value.size(); ++at) {
            // Native nicknames may contain their own quotes/conjunctions.
            // Complete element parsing proves both sides before accepting a
            // separator, so their authored punctuation need not be guessed.
            if (!native_nickname && value[at] == '"') quoted = !quoted;
            if (quoted) continue;
            size_t separator = 0;
            bool conjunction = false;
            if (template_literal_at(value, at, ", and ", true)) { separator = 6; conjunction = true; }
            else if (template_literal_at(value, at, " and ", true)) { separator = 5; conjunction = true; }
            else if (value.substr(at).starts_with(", ")) separator = 2;
            else if (at == 0 && template_literal_at(value, 0, "and ", true))
                { separator = 4; conjunction = true; }
            else if (template_literal_at(value, at, " and", true) && at + 4 == value.size())
                { separator = 4; conjunction = true; }
            else if (value[at] == ',' && at + 1 == value.size()) separator = 1;
            if (!separator) continue;
            const auto left_source = trim_view(value.substr(0, at));
            const auto right_source = trim_view(value.substr(at + separator));
            // The two roles can depict separate groups of the same species.
            // Match their English identities, never merely equal Chinese
            // translations, which could also describe distinct named beings.
            if (conjunction && left_source == right_source) {
                if (const auto group = symbol_group_source(left_source)) {
                    const auto species = translate_creature_descriptor(*group, true);
                    const auto pattern = exact_literal_translation("Art image two groups: X");
                    if (species && pattern) {
                        target = fill_symbol_roles(*pattern, *species);
                        break;
                    }
                }
            }
            const auto left = self(self, left_source, depth + 1);
            if (!left) continue;
            const auto right = self(self, right_source, depth + 1);
            if (right) target = left->empty() ? *right : right->empty() ? *left :
                *left + (conjunction ? "和" : "、") + *right;
        }
        element_cache.emplace(key, target);
        return target;
    };
    return elements(elements, source, 0);
}

// Delete mode emits independent, punctuated action sentences, without the
// preview's "It is an image of" introduction. Resolve both through ONE path.
std::optional<std::string> Overlay::translate_symbol_action(
        std::string_view raw_source) const {
    std::string source = normalize_art_utterance(raw_source);
    for (char &ch : source)
        if (ch == '\x10' || ch == '\x11') ch = '"';
    if (const auto found = symbol_action_cache_.find(source);
        !translation_work_exhausted() && !native_announcement_log_item_field_active() &&
        found != symbol_action_cache_.end())
        return found->second;
    auto remember = [&](std::optional<std::string> target) {
        if (!translation_work_exhausted() && !native_announcement_log_item_field_active()) {
            if (symbol_action_cache_.size() >= 512) symbol_action_cache_.clear();
            symbol_action_cache_.emplace(source, target);
        }
        return target;
    };
    std::string_view sentence = source;
    if (sentence.ends_with('.')) sentence.remove_suffix(1);
    sentence = trim_view(sentence);
    // Candidate labels are the authoritative translation of every action.
    // Substitute the actual X/Y subjects, rather than maintaining a second
    // predicate glossary. Native plural subjects use are/look instead.
    for (int index : symbol_action_rules_) {
        const Rule &rule = rules_[static_cast<size_t>(index)];
        const bool object = rule.source.ends_with(" Y");
        std::string predicate = rule.source.substr(1,
            rule.source.size() - 1 - (object ? 1 : 0));
        for (int plural = 0; plural < 2; ++plural) {
            if (plural) {
                if (predicate.starts_with(" is ")) predicate.replace(0, 4, " are ");
                else if (predicate.starts_with(" looks ")) predicate.replace(0, 7, " look ");
                else continue;
                // PE 53.16 0x1468fa also agrees the reflexive with the
                // element count. Reuse the singular action's translation.
                if (rule.source == "X is prostrating itself before Y")
                    predicate.replace(predicate.find("itself"), 6, "themselves");
            }
            for (size_t at = sentence.find(predicate); at != std::string_view::npos;
                 at = sentence.find(predicate, at + 1)) {
                if (!object && at + predicate.size() != sentence.size()) continue;
                const auto subject_source = sentence.substr(0, at);
                const auto other_source = object
                    ? sentence.substr(at + predicate.size()) : std::string_view{};
                auto subject = translate_symbol_elements(subject_source);
                if (!subject) continue;
                auto other = object
                    ? translate_symbol_elements(other_source)
                    : std::optional<std::string>(std::string{});
                if (!other) continue;
                if (plural) {
                    if (const auto group = symbol_group_source(subject_source, true)) {
                        const auto species = translate_creature_descriptor(*group, true);
                        const auto pattern = exact_literal_translation("Art image group: X");
                        if (species && pattern) {
                            subject = fill_symbol_roles(*pattern, *species);
                            const auto other_group = symbol_group_source(other_source, true);
                            if (other_group && *group == *other_group) {
                                // "The humans are refusing the humans" has
                                // two distinct image roles; it is not a claim
                                // about the whole species refusing itself.
                                const auto another = exact_literal_translation("Art image other group: X");
                                if (another) other = fill_symbol_roles(*another, *species);
                            }
                        }
                    }
                }
                return remember(fill_symbol_roles(rule.target, *subject, *other) + "。");
            }
        }
    }
    // The native action switch retains its already written subject for an
    // unassigned/default action and appends the normal sentence terminator.
    // Require that terminator and a complete typed element; candidate labels
    // and arbitrary unpunctuated text do not enter this art-only production.
    if (source.ends_with('.')) {
        const auto subject = translate_symbol_elements(sentence);
        if (translation_complete_with_native_nicknames(subject, sentence))
            return remember(*subject + "。");
    }
    return remember(std::nullopt);
}

// The symbol editor describes an entire art image above the category buttons.
// Own that paragraph before literal matching: its articles, element list and
// personal names are grammar, not independent labels in the candidate list.
std::optional<std::string> Overlay::translate_symbol_description_source(
        std::string_view raw_source) const {
    std::string source = normalize_art_utterance(raw_source);
    for (char &ch : source)
        if (ch == '\x10' || ch == '\x11') ch = '"';
    if (const auto found = symbol_description_cache_.find(source);
        !translation_work_exhausted() && !native_announcement_log_item_field_active() &&
        found != symbol_description_cache_.end())
        return found->second;
    auto remember = [&](std::optional<std::string> target) {
        if (!translation_work_exhausted() && !native_announcement_log_item_field_active()) {
            if (symbol_description_cache_.size() >= 256) symbol_description_cache_.clear();
            symbol_description_cache_.emplace(source, target);
        }
        return target;
    };
    constexpr std::string_view introduction = "It is an image of ";
    if (!source.starts_with(introduction) || symbol_image_template_rule_ < 0)
        return remember(std::nullopt);

    std::string target;
    size_t begin = 0;
    bool quoted = false;
    const bool native_nickname = source.find('`') != std::string::npos;
    for (size_t at = 0; at < source.size(); ++at) {
        if (!native_nickname && source[at] == '"') quoted = !quoted;
        if (quoted || source[at] != '.' ||
            (at + 1 < source.size() && source[at + 1] != ' ')) continue;
        const std::string_view sentence = trim_view(std::string_view(source).substr(begin, at - begin));
        std::optional<std::string> translated;
        if (target.empty()) {
            if (!sentence.starts_with(introduction)) return remember(std::nullopt);
            const auto image = translate_symbol_elements(sentence.substr(introduction.size()));
            if (image) {
                const Rule &rule = rules_[static_cast<size_t>(symbol_image_template_rule_)];
                const std::vector<std::string> captures{std::string(sentence.substr(introduction.size()))};
                const std::vector<std::optional<std::string>> elements{image};
                translated = fill_template(rule, captures, &capture_translations_, nullptr, &elements);
            }
        } else {
            translated = translate_symbol_action(
                std::string_view(source).substr(begin, at - begin + 1));
        }
        // A period inside a native nickname or a written item's title is only
        // a possible boundary. Commit it when the entire image/action resolves.
        if (!translation_complete_with_native_nicknames(translated, sentence)) continue;
        target += *translated;
        begin = at + 1;
    }
    // A clipped final sentence is not a complete description. Do not suppress
    // unseen text or silently declare a translated prefix to be the paragraph.
    if (target.empty() || !trim_view(std::string_view(source).substr(begin)).empty())
        return remember(std::nullopt);
    return remember(std::move(target));
}
