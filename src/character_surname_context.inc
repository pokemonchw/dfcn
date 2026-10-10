// Member definitions of EnglishCharacterNames. Surnames and entity names
// share classified imagery and scoring while retaining their own grammar.
struct SurnameClass {
    std::string parent;
    std::vector<std::string> ancestry, traits;
};
struct SurnameImagery {
    std::vector<std::string> required_traits, single, double_words;
    std::string_view single_use, double_use, single_interpretation, double_interpretation;
    unsigned forms = 0;
    int preference = 0;
};
struct SurnameConstruction {
    std::string relation, context_relation, left_role, right_role, direction, ending;
    std::uint32_t left_kinds = 0, right_kinds = 0;
    std::vector<std::string> left_traits, right_traits, forms;
    int naturalness = 0, preference = 0;
};
using SurnameImageryIndex = std::unordered_map<std::string,
    std::unordered_map<std::string, std::vector<std::size_t>>>;
std::unordered_map<std::string, SurnameClass> surname_classes_;
SurnameImageryIndex surname_imagery_;
std::vector<SurnameImagery> surname_imagery_rows_;
std::unordered_map<std::string, std::vector<SurnameConstruction>> surname_constructions_;
std::unordered_set<std::string, LexicalFormHash, std::equal_to<>> surname_lexical_words_;

struct SurnameDataRow {
    const std::vector<std::string> &values;
    const std::unordered_map<std::string, std::size_t> &columns;
    std::string_view operator()(const char *name) const {
        const auto found = columns.find(name);
        return found == columns.end() ? std::string_view{} : trim(values[found->second]);
    }
};
bool read_surname_table(const std::filesystem::path &path,
    std::initializer_list<const char *> required,
    const std::function<bool(const SurnameDataRow &)> &consume) {
    std::ifstream in(path, std::ios::binary);
    const std::string filename = path.filename().string();
    if (!in) { error_ = "Cannot open " + filename; return false; }
    std::unordered_map<std::string, std::size_t> columns;
    std::string line;
    std::size_t number = 0, width = 0;
    while (std::getline(in, line)) {
        ++number;
        if (!line.empty() && line.back() == '\r') line.pop_back();
        if (number == 1 && line.starts_with("\xef\xbb\xbf")) line.erase(0, 3);
        if (trim(line).empty() || trim(line).front() == '#') continue;
        auto row = fields(line);
        if (columns.empty()) {
            width = row.size();
            for (std::size_t i = 0; i < row.size(); ++i) {
                if (key(row[i]).empty() || !columns.emplace(key(row[i]), i).second) {
                    error_ = "Invalid " + filename + " header";
                    return false;
                }
            }
            for (const auto *column : required) {
                if (!columns.contains(column)) {
                    error_ = "Missing " + filename + " column: " + column;
                    return false;
                }
            }
            continue;
        }
        if (row.size() < width || !consume({row, columns})) {
            error_ = "Invalid " + filename + " row " + std::to_string(number);
            return false;
        }
    }
    if (columns.empty() || in.bad()) { error_ = "Unreadable " + filename; return false; }
    return true;
}
static bool surname_integer(std::string_view value, int &out) {
    if (value.empty()) return false;
    out = 0;
    for (char c : value) {
        if (c < '0' || c > '9' || out > 100) return false;
        out = out * 10 + c - '0';
    }
    return out <= 100;
}
static bool surname_contains(const std::vector<std::string> &values, std::string_view value) {
    return std::binary_search(values.begin(), values.end(), std::string(value));
}
static unsigned surname_form_bit(std::string_view form) {
    if (form == "11") return 1u << 0;
    if (form == "12") return 1u << 1;
    if (form == "21") return 1u << 2;
    if (form == "22") return 1u << 3;
    if (form == "11z") return 1u << 4;
    if (form == "12z") return 1u << 5;
    if (form == "21z") return 1u << 6;
    return 0;
}
static std::string_view surname_imagery_tag(std::string_view value) {
    // Returned views always refer to static string literals, never to a TSV
    // row or the temporary normalized string supplied by the loader.
    for (std::string_view tag : {"natural", "bound", "restricted", "complete",
            "stem", "nominal", "direct", "property"})
        if (value == tag) return tag;
    return {};
}
static bool surname_traits_match(const std::vector<std::string> &required,
    const std::vector<std::string> &actual) {
    return std::includes(actual.begin(), actual.end(), required.begin(), required.end());
}
bool read_surname_context(const std::filesystem::path &directory,
    std::unordered_map<std::string, SurnameEntry> &surnames) {
    std::unordered_map<std::string, SurnameClass> classes;
    std::unordered_set<std::string> traits;
    SurnameImageryIndex imagery;
    std::vector<SurnameImagery> imagery_rows;
    std::unordered_map<std::string, std::vector<SurnameConstruction>> constructions;
    std::unordered_set<std::string, LexicalFormHash, std::equal_to<>> lexical_words;
    if (!read_surname_table(directory / "character-surname-classes.tsv",
        {"record_type", "class", "parent", "traits", "description"},
        [&](const SurnameDataRow &row) {
            const std::string name(key(row("class")));
            if (name.empty()) return false;
            if (row("record_type") == "trait") return traits.insert(name).second;
            if (row("record_type") != "class") return false;
            return classes.emplace(name, SurnameClass{key(row("parent")), {},
                labels(row("traits"))}).second;
        })) return false;
    for (auto &[name, entry] : classes) {
        std::unordered_set<std::string> seen;
        std::string ancestor = name;
        while (!ancestor.empty()) {
            const auto found = classes.find(ancestor);
            if (found == classes.end() || !seen.insert(ancestor).second) {
                error_ = "Invalid surname class ancestry: " + name;
                return false;
            }
            entry.ancestry.push_back(ancestor);
            if (ancestor != name)
                entry.traits.insert(entry.traits.end(), found->second.traits.begin(), found->second.traits.end());
            ancestor = found->second.parent;
        }
        std::sort(entry.traits.begin(), entry.traits.end());
        entry.traits.erase(std::unique(entry.traits.begin(), entry.traits.end()), entry.traits.end());
    }
    for (auto &[sense, entry] : surnames) {
        const auto type = classes.find(entry.semantic_class);
        if (type == classes.end() || entry.full_meaning.empty() ||
            !surnames.contains(entry.imagery_sense)) {
            error_ = "Missing surname classification or imagery source: " + sense;
            return false;
        }
        // Existing ordinary meanings provide word evidence, not additional
        // surname candidates. Coined context forms cannot certify themselves.
        for (const auto *word : {&entry.full_meaning, &entry.identity})
            if (!word->empty()) lexical_words.insert(*word);
        entry.traits.insert(entry.traits.end(), type->second.traits.begin(), type->second.traits.end());
        std::sort(entry.traits.begin(), entry.traits.end());
        entry.traits.erase(std::unique(entry.traits.begin(), entry.traits.end()), entry.traits.end());
        for (const auto &trait : entry.traits) {
            if (!traits.contains(trait)) { error_ = "Unknown surname trait: " + trait; return false; }
        }
        for (const auto *targets : {&entry.allowed_objects, &entry.allowed_subjects})
            for (const auto &target : *targets)
                if (!classes.contains(target)) { error_ = "Unknown surname argument class: " + target; return false; }
    }
    const auto known_traits = [&](const std::vector<std::string> &values) {
        return std::all_of(values.begin(), values.end(), [&](const auto &value) { return traits.contains(value); });
    };
    if (!read_surname_table(directory / "character-surname-context-imagery.tsv",
        {"english", "kind", "category", "state", "sense", "relation", "self_role",
         "partner_class", "partner_traits", "single", "double", "single_use", "double_use",
         "single_interpretation", "double_interpretation", "semantic_bridge", "construction", "preference", "notes"},
        [&](const SurnameDataRow &row) {
            const std::string sense = sense_key(key(row("english")), kinds(labels(row("kind"))),
                labels(row("category")), key(row("state")), row("sense"));
            if (!surnames.contains(sense) || row("relation").empty() || row("self_role").empty()) return false;
            SurnameImagery branch;
            branch.required_traits = labels(row("partner_traits"));
            branch.single = fields(row("single"), '|');
            branch.double_words = fields(row("double"), '|');
            branch.single_use = surname_imagery_tag(key(row("single_use")));
            branch.double_use = surname_imagery_tag(key(row("double_use")));
            branch.single_interpretation = surname_imagery_tag(key(row("single_interpretation")));
            branch.double_interpretation = surname_imagery_tag(key(row("double_interpretation")));
            for (const auto &form : labels(row("construction")))
                branch.forms |= surname_form_bit(form);
            if (!known_traits(branch.required_traits) ||
                !surname_integer(row("preference"), branch.preference)) return false;
            const auto valid_use = [](std::string_view use) {
                return use == "natural" || use == "bound" || use == "restricted" ||
                    use == "complete" || use == "stem" || use == "nominal";
            };
            if (!valid_use(branch.single_use) || !valid_use(branch.double_use)) return false;
            if (row("single").empty() || row("double").empty() || !branch.forms) return false;
            for (const auto &word : branch.single) if (glyph_count(word) != 1) return false;
            for (const auto &word : branch.double_words) if (glyph_count(word) != 2) return false;
            for (auto interpretation : {branch.single_interpretation, branch.double_interpretation})
                if (interpretation != "direct" && interpretation != "property") return false;
            const auto partners = labels(row("partner_class"));
            if (partners.empty()) return false;
            const std::string index = sense + '\t' + key(row("relation")) + '\t' + key(row("self_role"));
            const std::size_t branch_index = imagery_rows.size();
            imagery_rows.push_back(std::move(branch));
            for (const auto &partner : partners) {
                if (!classes.contains(partner)) return false;
                imagery[index][partner].push_back(branch_index);
            }
            return true;
        })) return false;
    if (!read_surname_table(directory / "character-surname-constructions.tsv",
        {"relation", "context_relation", "left_class", "right_class", "left_kind", "right_kind", "left_role", "right_role",
         "left_traits", "right_traits", "direction", "forms", "ending", "naturalness", "preference", "notes"},
        [&](const SurnameDataRow &row) {
            SurnameConstruction rule;
            rule.relation = key(row("relation"));
            rule.context_relation = key(row("context_relation"));
            rule.left_role = key(row("left_role"));
            rule.right_role = key(row("right_role"));
            rule.left_kinds = kinds(labels(row("left_kind")));
            rule.right_kinds = kinds(labels(row("right_kind")));
            rule.left_traits = labels(row("left_traits"));
            rule.right_traits = labels(row("right_traits"));
            rule.forms = labels(row("forms"));
            rule.direction = key(row("direction"));
            rule.ending = row("ending");
            if (!rule.left_kinds || !rule.right_kinds || rule.forms.empty() ||
                !known_traits(rule.left_traits) || !known_traits(rule.right_traits) ||
                (rule.direction != "source" && rule.direction != "either") ||
                (!rule.ending.empty() && (rule.ending != "者" || rule.relation != "agent")) ||
                !surname_integer(row("naturalness"), rule.naturalness) ||
                !surname_integer(row("preference"), rule.preference)) return false;
            const auto left_classes = labels(row("left_class")), right_classes = labels(row("right_class"));
            if (left_classes.empty() || right_classes.empty()) return false;
            for (const auto &a : left_classes) for (const auto &b : right_classes) {
                if (!classes.contains(a) || !classes.contains(b)) return false;
                constructions[a + '\t' + b].push_back(rule);
            }
            return true;
        })) return false;
    for (const auto &[sense, entry] : surnames) {
        // Every sense has short naming forms. Inherited records retain a full
        // sense key rather than guessing English suffixes.
        const std::string prefix = entry.imagery_sense + '\t';
        bool present = false;
        for (const auto *relation : {"property", "material", "surface", "emblem", "verb_object",
                "subject_verb", "agent", "genitive", "coordinate", "prefix", "class_image"}) {
            for (const auto *role : {"modifier", "head", "action", "subject", "patient", "stem", "image"})
                if (imagery.contains(prefix + relation + '\t' + role)) present = true;
        }
        if (!present) { error_ = "Missing surname context: " + sense; return false; }
    }
    surname_classes_ = std::move(classes);
    surname_imagery_ = std::move(imagery);
    surname_imagery_rows_ = std::move(imagery_rows);
    surname_constructions_ = std::move(constructions);
    surname_lexical_words_ = std::move(lexical_words);
    return true;
}

const SurnameEntry *surname_entry(const Part &part) const {
    const auto found = surnames_.find(part.surname_sense);
    return found == surnames_.end() ? nullptr : &found->second;
}
struct SurnameContextWord {
    std::string_view text, use, interpretation;
    const SurnameImagery *branch = nullptr;
};
std::vector<SurnameContextWord> surname_words(const Part &self, const Part &partner,
    std::string_view relation, std::string_view role) const {
    std::vector<SurnameContextWord> out;
    const auto *entry = surname_entry(self), *other = surname_entry(partner);
    if (!entry || !other) return out;
    const auto index = surname_imagery_.find(entry->imagery_sense + '\t' +
        std::string(relation) + '\t' + std::string(role));
    if (index == surname_imagery_.end()) return out;
    const auto type = surname_classes_.find(other->semantic_class);
    if (type == surname_classes_.end()) return out;
    for (const auto &ancestor : type->second.ancestry) {
        const auto found = index->second.find(ancestor);
        if (found == index->second.end()) continue;
        std::size_t specificity = 0;
        bool matched = false;
        for (const auto branch_index : found->second) {
            const auto &branch = surname_imagery_rows_[branch_index];
            if (!surname_traits_match(branch.required_traits, other->traits)) continue;
            if (!matched || branch.required_traits.size() > specificity) {
                matched = true;
                specificity = branch.required_traits.size();
                out.clear();
            } else if (branch.required_traits.size() < specificity) continue;
            for (const auto &word : branch.single)
                out.push_back({word, branch.single_use, branch.single_interpretation, &branch});
            for (const auto &word : branch.double_words)
                out.push_back({word, branch.double_use, branch.double_interpretation, &branch});
        }
        if (matched) return out;
    }
    return out;
}
bool surname_argument(const Part &predicate, const Part &argument, bool subject) const {
    const auto *verb = surname_entry(predicate), *noun = surname_entry(argument);
    if (!verb || !noun) return false;
    const auto valency = labels(verb->valency);
    if (!surname_contains(valency, subject ? "intransitive" : "transitive")) return false;
    const auto &allowed = subject ? verb->allowed_subjects : verb->allowed_objects;
    for (const auto &type : surname_classes_.at(noun->semantic_class).ancestry)
        if (surname_contains(allowed, type)) return true;
    return false;
}
static MandarinNameProsody::Relation surname_relation(std::string_view relation) {
    using Relation = MandarinNameProsody::Relation;
    if (relation == "property" || relation == "prefix") return Relation::Attribute;
    if (relation == "verb_object") return Relation::VerbObject;
    if (relation == "subject_verb") return Relation::SubjectVerb;
    if (relation == "coordinate") return Relation::Coordinate;
    return Relation::Nominal;
}
struct SurnamePattern {
    std::string_view form, link;
    unsigned first_width, second_width, form_bit;
};
static bool surname_complete_word(const SurnameContextWord &word, const SurnameEntry &entry) {
    return word.text == entry.full_meaning || word.text == entry.identity;
}
static bool surname_role_word(const SurnameContextWord &word, const SurnameEntry &entry,
    std::string_view role) {
    if (word.text == entry.core) return true;
    if (role == "modifier") return word.text == entry.modifier;
    if (role == "head" || role == "patient" || role == "subject") return word.text == entry.head;
    if (role == "action") return word.text == entry.action;
    if (role == "stem") return word.text == entry.agent || word.text == entry.identity;
    return false;
}
int surname_word_naturalness(const SurnameContextWord &word, const SurnameEntry &entry,
    std::string_view role) const {
    // A complete one-character word receives the same evidence as a complete
    // two-character word. Permission to use a morpheme is weaker evidence.
    const bool complete_word = surname_complete_word(word, entry);
    int score = complete_word ? 6 : surname_role_word(word, entry, role) ? 3 :
        surname_lexical_words_.contains(word.text) ? 2 : 0;
    if (word.use == "natural" || word.use == "complete" || word.use == "nominal") score += 2;
    if (word.use == "restricted") score -= 4;
    if (word.interpretation == "property" && !complete_word) --score;
    return score;
}
int surname_compound_naturalness(const SurnameContextWord &first,
    const SurnameContextWord &second, const SurnameEntry &left, const SurnameEntry &right,
    const SurnameConstruction &rule, const SurnamePattern &pattern, std::string_view text) const {
    int score = surname_word_naturalness(first, left, rule.left_role) +
        surname_word_naturalness(second, right, rule.right_role);
    // An established whole word can license dependent morphemes. A match to
    // some other ordinary sense is only naturalness evidence, not proof of
    // preservation of these two source senses.
    if (surname_lexical_words_.contains(text)) return score + 6;
    const auto dependent = [&](const SurnameContextWord &word, const SurnameEntry &entry) {
        return (word.use == "bound" || word.use == "restricted" || word.use == "stem") &&
            !surname_complete_word(word, entry) && !surname_lexical_words_.contains(word.text);
    };
    const unsigned fragments = dependent(first, left) + dependent(second, right);
    // Agent morphology and finite predicates have explicit syntactic
    // licensing. Other adjacent fragments must also make their relationship
    // intelligible; two compressed images do not become a word by being short.
    if (pattern.link.empty() && rule.ending.empty() && rule.relation != "verb_object" &&
        rule.relation != "subject_verb" && rule.relation != "prefix") {
        score -= static_cast<int>(fragments) * 3;
        if (fragments == 2) score -= 2;
    }
    return score;
}
Part surname_context_combine(const Part &left, const Part &right, bool entity = false) const {
    // Both source orders visit the same complete set of surface patterns.
    // AB/BA, A之B/B之A, AA之B/BB之A and AABB/BBAA compete together.
    // 2 denotes an independently authored two-character form for that root.
    static constexpr std::array<SurnamePattern, 7> patterns{{
        {"11", {}, 1, 1, 1u << 0}, {"12", {}, 1, 2, 1u << 1},
        {"21", {}, 2, 1, 1u << 2}, {"22", {}, 2, 2, 1u << 3},
        {"11z", "之", 1, 1, 1u << 4}, {"12z", "之", 1, 2, 1u << 5},
        {"21z", "之", 2, 1, 1u << 6}
    }};
    Part best = original(left.english + right.english);
    int best_preference = 0;
    unsigned best_width = 0;
    const auto *a_entry = surname_entry(left), *b_entry = surname_entry(right);
    const auto complete_meanings = [&]() {
        Part out = original(left.english + right.english);
        // A place without a licensed construction keeps the caller's whole
        // English-name phonetic fallback, never two dictionary meanings.
        if (entity) return out;
        // Unavailable context forms do not grant access to compact/balanced
        // forms. Keep both complete meanings directly adjacent in source order.
        out.text = out.short_text = out.full_text =
            (a_entry ? a_entry->full_meaning : left.full_text) +
            (b_entry ? b_entry->full_meaning : right.full_text);
        out.known = out.complete = left.complete && right.complete;
        out.roots = left.roots + right.roots;
        out.english = left.english + right.english;
        out.root_left = left.english;
        out.root_right = right.english;
        out.order = left.order + '\n' + right.order;
        out.score = -100000000;
        return out;
    };
    // A composed entity keeps its head's sense for phrase-level argument
    // licensing, but cannot re-enter root forms and lose earlier constituents.
    if (!a_entry || !b_entry || (entity && (left.roots > 1 || right.roots > 1)))
        return complete_meanings();
    const bool actor = !entity &&
        (surname_actor_licensed(left) || surname_actor_licensed(right));
    const auto compose = [&](const Part &a, const Part &b, bool reversed) {
        const auto *ae = surname_entry(a), *be = surname_entry(b);
        for (const auto &a_class : surname_classes_.at(ae->semantic_class).ancestry)
            for (const auto &b_class : surname_classes_.at(be->semantic_class).ancestry) {
                const auto rules = surname_constructions_.find(a_class + '\t' + b_class);
                if (rules == surname_constructions_.end()) continue;
                for (const auto &rule : rules->second) {
                    if ((reversed && rule.direction != "either") ||
                        !has(a, rule.left_kinds) || !has(b, rule.right_kinds) ||
                        !surname_traits_match(rule.left_traits, ae->traits) ||
                        !surname_traits_match(rule.right_traits, be->traits)) continue;
                    // Entity compounds keep their existing grammatical
                    // scope. Personal actor morphology cannot supply a place.
                    if (entity && (!rule.ending.empty() || rule.relation == "agent")) continue;
                    // Explicit identities keep A/B/者 in source order. Ordinary
                    // predicates and properties cannot enter the identity path.
                    if (actor != (rule.relation == "agent")) continue;
                    if (rule.relation == "agent" && (reversed || rule.ending != "者" ||
                        (has(a, Agent) && ae->identity.empty()) ||
                        (has(b, Agent) && be->identity.empty()))) continue;
                    if (rule.relation == "verb_object" && !surname_argument(a, b, false)) continue;
                    if (rule.relation == "subject_verb" && !surname_argument(b, a, true)) continue;
                    if (rule.relation == "property" && (has(a, State) || has(b, State))) {
                        const auto *state = has(a, State) ? ae : be;
                        const auto *head = has(a, State) ? be : ae;
                        const auto &allowed = surname_contains(labels(state->valency), "transitive") ?
                            state->allowed_objects : state->allowed_subjects;
                        const auto &ancestry = surname_classes_.at(head->semantic_class).ancestry;
                        if (std::none_of(ancestry.begin(), ancestry.end(), [&](const auto &type) {
                            return surname_contains(allowed, type);
                        })) continue;
                    }
                    const auto first = surname_words(a, b, rule.context_relation, rule.left_role);
                    const auto second = surname_words(b, a, rule.context_relation, rule.right_role);
                    for (const auto &pattern : patterns) {
                        if (!surname_contains(rule.forms, pattern.form)) continue;
                        // Preserve entity compound shapes, but choose between
                        // them using the same classified forms and bounded
                        // naturalness score instead of a fixed 1+1 priority.
                        if (entity && (!pattern.link.empty() ||
                            pattern.first_width != pattern.second_width)) continue;
                        for (const auto &x : first) for (const auto &y : second) {
                            // Registered bound forms and property images can
                            // coordinate in a surname. Only a genuinely
                            // restricted use blocks this construction.
                            if (rule.relation == "coordinate" &&
                                (x.use == "restricted" || y.use == "restricted")) continue;
                            // An activity's name or aspect is available to
                            // nominal naming patterns, never as a finite verb.
                            if ((rule.relation == "verb_object" && x.use == "nominal") ||
                                (rule.relation == "subject_verb" && y.use == "nominal")) continue;
                            const unsigned x_width = glyph_count(x.text), y_width = glyph_count(y.text);
                            if (x_width != pattern.first_width || y_width != pattern.second_width) continue;
                            if (entity && (x.text.find("者") != std::string_view::npos ||
                                y.text.find("者") != std::string_view::npos ||
                                x.text.find("之") != std::string_view::npos ||
                                y.text.find("之") != std::string_view::npos ||
                                x.text.ends_with("的") || y.text.ends_with("的"))) continue;
                            if (!(x.branch->forms & pattern.form_bit) ||
                                !(y.branch->forms & pattern.form_bit)) continue;
                            if (!pattern.link.empty() && (!rule.ending.empty() ||
                                x.use == "restricted" || y.use == "restricted")) continue;
                            if (!rule.ending.empty() && (x_width != 1 || y_width != 1)) continue;
                            if ((x.text.find("者") != std::string_view::npos && ae->full_meaning.find("者") == std::string::npos) ||
                                (y.text.find("者") != std::string_view::npos && be->full_meaning.find("者") == std::string::npos)) continue;
                            const int preservation = (x.interpretation == "direct" ? 2 : 1) +
                                (y.interpretation == "direct" ? 2 : 1);
                            const int preference = rule.preference + x.branch->preference + y.branch->preference;
                            const auto relation = surname_relation(rule.relation);
                            int pronunciation = MandarinNameProsody::rank(surname_readings_,
                                {x.text, y.text, pattern.link, rule.ending, relation, false, false},
                                ae->full_meaning, be->full_meaning);
                            if (entity && pronunciation < -3) continue;
                            // The shared prosody model has a small lexical prior
                            // for nominal 2+2 coinages. Surnames compare every
                            // registered width without that fixed length bonus.
                            if (pattern.link.empty() && x_width == 2 && y_width == 2 &&
                                (relation == MandarinNameProsody::Relation::Nominal ||
                                 relation == MandarinNameProsody::Relation::Attribute))
                                pronunciation -= 3;
                            const std::string text = std::string(x.text) + std::string(pattern.link) +
                                std::string(y.text) + rule.ending;
                            const int lexical = surname_compound_naturalness(x, y, *ae, *be,
                                rule, pattern, text);
                            // All licensed orders and widths use the same
                            // bounded scale. Word completeness and actual
                            // pronunciation can outweigh a relation's prior;
                            // neither 1+1 nor 2+2 receives a length reward.
                            const int score = rule.naturalness * 4 + preservation * 6 +
                                lexical * 4 + std::clamp(pronunciation, -48, 12) * 2;
                            const unsigned width = glyph_count(text);
                            if (best.known && (score < best.score ||
                                (score == best.score && (preference < best_preference ||
                                 (preference == best_preference && (width > best_width ||
                                  (width == best_width && text >= best.text))))))) continue;
                            best = b;
                            best.text = best.short_text = best.full_text = text;
                            best.known = best.complete = left.complete && right.complete;
                            best.roots = left.roots + right.roots;
                            best.english = left.english + right.english;
                            best.root_left = left.english;
                            best.root_right = right.english;
                            best.order = left.order + '\n' + right.order;
                            best.score = score;
                            best_preference = preference;
                            best_width = width;
                            if (entity) {
                                // Preserve the chosen head for the next title
                                // join while keeping every constituent in the
                                // composed surface; it is no longer one root.
                                best.source_sense = best.surname_source_full = best.surname_core =
                                    best.surname_modifier = best.surname_head = best.surname_agent = best.text;
                                best.surname_compact = glyph_count(best.text) == 1 ? best.text : "";
                                best.surname_balanced = glyph_count(best.text) == 2 ? best.text : "";
                                best.surname_source_action = best.action = has(best, Action) ? best.text : "";
                                best.surname_er_identity.clear();
                            }
                            if (!entity) best.surname_sense.clear();
                        }
                    }
                }
            }
    };
    compose(left, right, false);
    if (!actor) compose(right, left, true);
    if (best.known) return best;
    // This low-scoring fallback retains both known meanings when no
    // registered one-/two-character construction was licensed. Complete
    // meanings never participate in the classified candidate competition.
    return complete_meanings();
}
