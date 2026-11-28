// Recursive grammar for original combat records. All English predicates and
// Chinese wording live in the reloadable dictionary. The grammar's field
// scopes distinguish an attack verb, unit, item, anatomy, tissue, and complete
// consequence; no successful branch can leave an untranslated remainder.
// Native construction evidence is beside each rule in
// data/runtime/announcement-combat-grammar.tsv, imported by tools/announcement_grammar.py.
static std::shared_ptr<const std::unordered_map<std::string, std::string>>
native_dfhack_raw_creature_adjectives();

void Overlay::rebuild_announcement_combat_rules() {
    announcement_combat_rules_.clear();
    announcement_combat_syntax_.clear();
    constexpr std::string_view prefix = "Announcement combat ";
    for (const Rule &entry : rules_) {
        if (!entry.source.starts_with(prefix)) continue;
        const size_t open = entry.source.find(" [", prefix.size());
        const size_t close = entry.source.find("]: ", open);
        if (open == std::string::npos || close == std::string::npos) continue;
        const std::string scope = entry.source.substr(prefix.size(), open - prefix.size());
        const std::string fields = entry.source.substr(open + 2, close - open - 2);
        Rule rule = entry;
        rule.source.erase(0, close + 3);
        // Native builders capitalize the first clause after constructing it.
        // Fold only grammar literals; typed names retain their original case.
        rule.case_insensitive = true;
        rule.template_literals.clear();
        rule.template_kinds.clear();
        rule.target_template_literals.clear();
        rule.target_capture_order.clear();
        split_template(rule.source, &rule.template_literals, &rule.template_kinds);
        if (!rule.template_kinds.empty() && !compile_template_target(rule)) continue;
        const size_t count = fields.empty() ? 0 :
            1 + static_cast<size_t>(std::count(fields.begin(), fields.end(), ','));
        if (count != rule.template_kinds.size()) continue;
        announcement_combat_rules_[scope].emplace_back(fields, std::move(rule));
    }
    // Exact and more specific constructions precede recursive alternatives.
    // A shared-damage sentence owns its attack and complete consequence tree.
    // Resolve that structure before extension messages with one open unit
    // field: e.g. an ability named Guts must not claim the final tissue in
    // "... tearing the fat and bruising the guts!" as an activation report.
    // Anatomy must precede item/name fallbacks independently of dictionary order.
    for (auto &[scope, entries] : announcement_combat_rules_) {
        std::stable_sort(entries.begin(), entries.end(), [&](const auto &a, const auto &b) {
            if (a.second.template_kinds.empty() != b.second.template_kinds.empty())
                return a.second.template_kinds.empty();
            if (scope == "sentence") {
                // The melee/projectile producer owns the whole SHOT and
                // its block/parry/deflection result. Resolve those complete
                // productions before generic damage: "strikes at YOU ...
                // by the ITEM" otherwise also fits attack-verb=strikes,
                // unit="at YOU ...", object=ITEM in the by-the attack rule.
                // Native COMBAT_PARRY 15 reaches this exact overlap at
                // reference 64f904..64fa1f / classic 64d324..64d43f.
                const auto shot_tree = [](const auto &entry) {
                    return entry.first == "shot" || entry.first.starts_with("shot,");
                };
                if (shot_tree(a) != shot_tree(b)) return shot_tree(a);
                const auto damage_tree = [](const auto &entry) {
                    return entry.first == "head" || entry.first.starts_with("head,");
                };
                if (damage_tree(a) != damage_tree(b)) return damage_tree(a);
            }
            const auto literal_size = [](const Rule &r) {
                return r.source.size() - r.template_kinds.size() * 3;
            };
            if (literal_size(a.second) != literal_size(b.second))
                return literal_size(a.second) > literal_size(b.second);
            // The merged dictionary sorts synthetic keys by length, placing
            // $combat-item before $body. Stable ties would then parse a RAW
            // right hand as an item and give right its unrelated name sense.
            const auto anatomy = [](const auto &entry) {
                const std::string_view fields = entry.first;
                return fields == "$body" || fields.starts_with("$body,") ||
                    fields.ends_with(",$body") || fields.find(",$body,") != std::string_view::npos;
            };
            return anatomy(a) && !anatomy(b);
        });
        auto &syntax = announcement_combat_syntax_[scope];
        for (size_t index = 0; index < entries.size(); ++index) {
            const auto &[signature, rule] = entries[index];
            std::vector<std::string> fields;
            for (size_t at = 0; at < signature.size();) {
                size_t end = signature.find(',', at);
                if (end == std::string::npos) end = signature.size();
                fields.emplace_back(signature.substr(at, end - at));
                at = end + 1;
            }
            syntax.fields.push_back(std::move(fields));
            std::string_view anchor;
            for (const auto &literal : rule.template_literals)
                if (literal.size() > anchor.size()) anchor = literal;
            syntax.anchors.add(anchor, static_cast<int>(index));
        }
    }
}

static bool announcement_combat_field_edges_fit(
        std::string_view scope, std::string_view value) {
    if (value.empty() || value.front() == ' ') return false;
    if (value.back() != ' ') return true;
    // Null item/tissue branches retain the trailing space of "in the ",
    // "through a hole in the " or a damage-list separator. The complete
    // native composite owns that space; its recursive entry trims it before
    // matching the explicit empty-object productions. Dynamic name/item/body
    // general_ref +0x90 can likewise end in a native prefix or separator
    // when its value/name or final subject is empty. Only these complete
    // composites may own that trailing space; their typed leaves still
    // require their original nonempty field boundaries.
    return scope == "head" || scope == "attack" || scope == "damage" ||
        scope == "damage-list" || scope == "layer" ||
        scope == "owned-object" ||
        scope == "work-reference" || scope == "work-reference-list" ||
        // The slain-foe builder always appends " of " after a held office,
        // even when the entity's language_name is empty. The whole victim
        // field owns that final space; its concrete empty-name grammar is
        // resolved after trimming, without relaxing any person/office leaf.
        scope == "boast-victim";
}

static bool spoken_identity_has_prose_boundary(std::string_view value,
        bool comma_is_boundary = false) {
    // A speaker's nickname is an authored field, including its punctuation.
    // The enclosing person/role must still end before the next utterance;
    // otherwise the permissive authored-unit fallback can swallow a complete
    // reaction after the incident that precedes it.
    const size_t nickname = value.find('`');
    const size_t nickname_end = value.rfind('\'');
    const bool quoted_identity = value.size() >= 2 &&
        value.front() == '"' && value.back() == '"' &&
        std::count(value.begin(), value.end(), '"') == 2;
    if (quoted_identity) return false;
    for (size_t at = 0; at < value.size(); ++at) {
        if (nickname != std::string_view::npos && nickname_end != std::string_view::npos &&
                nickname_end > nickname && at == nickname) {
            at = nickname_end;
            continue;
        }
        if ((comma_is_boundary && value[at] == ',') ||
                std::string_view(".!?:[]\r\n").find(value[at]) != std::string_view::npos)
            return true;
    }
    return false;
}

static bool announcement_combat_person_scope(std::string_view scope) {
    return scope == "unit" || scope == "$unit" ||
        scope == "person" || scope == "$person" ||
        scope == "speech-person" || scope == "$speech-person" ||
        scope == "speech-first-name" || scope == "$speech-first-name" ||
        scope == "memory-person" || scope == "historical-actor" ||
        scope == "$historical-actor";
}

static bool announcement_combat_numeric_tail_fits(const Rule &rule, std::string_view source) {
    if (rule.template_kinds.empty() || rule.template_kinds.back() != 'd' ||
            !rule.template_literals[rule.template_kinds.size() - 1].ends_with(' ')) return true;
    if (rule.template_literals.back().size() > source.size()) return false;
    const auto prefix = trim_view(source.substr(0, source.size() - rule.template_literals.back().size()));
    const size_t word = prefix.find_last_of(' ');
    return legends_number_field(prefix.substr(word == std::string_view::npos ? 0 : word + 1));
}

struct AnnouncementLiteralSource {
    std::string raw, normalized, folded;
    std::vector<size_t> origins;
    std::unordered_map<std::string, std::vector<size_t>> literals;

    const std::vector<size_t> &positions(std::string_view literal) {
        std::string pattern(literal);
        for (char &ch : pattern) ch = static_cast<char>(fold_ascii(static_cast<unsigned char>(ch)));
        const auto found = literals.find(pattern);
        if (found != literals.end()) return found->second;
        std::vector<size_t> result;
        if (literal.empty()) {
            result.reserve(normalized.size() + 1);
            for (size_t at = 0; at <= normalized.size(); ++at) result.push_back(at);
        } else {
            // A delimiter with a long repeated prefix must not restart its
            // comparison at every source byte. KMP finds all overlapping
            // occurrences in O(source + literal + occurrences) once.
            std::vector<size_t> failure(pattern.size());
            for (size_t at = 1, matched = 0; at < pattern.size(); ++at) {
                while (matched && pattern[at] != pattern[matched]) matched = failure[matched - 1];
                if (pattern[at] == pattern[matched]) ++matched;
                failure[at] = matched;
            }
            for (size_t at = 0, matched = 0; at < folded.size(); ++at) {
                if ((at & 255) == 0) translation_work_step();
                while (matched && folded[at] != pattern[matched]) matched = failure[matched - 1];
                if (folded[at] == pattern[matched]) ++matched;
                if (matched == pattern.size()) {
                    result.push_back(at + 1 - matched);
                    matched = failure[matched - 1];
                }
            }
        }
        return literals.emplace(std::move(pattern), std::move(result)).first->second;
    }
};

// Strict recognition and display binding use one immutable normalization and
// one delimiter index for the same complete source. These are structural
// facts, independent of the root scope or personal-name translation policy.
static std::shared_ptr<AnnouncementLiteralSource> announcement_literal_source(
        uintptr_t owner, uint64_t revision, std::string_view raw_source) {
    struct Session {
        std::unordered_map<std::string, std::shared_ptr<AnnouncementLiteralSource>> sources;
    };
    static const unsigned char session_tag = 0;
    auto &retained = active_translation_work->parser_sessions[&session_tag];
    if (!retained) retained = std::make_shared<Session>();
    const auto session = std::static_pointer_cast<Session>(retained);
    std::string key;
    key.append(reinterpret_cast<const char *>(&owner), sizeof(owner));
    key.append(reinterpret_cast<const char *>(&revision), sizeof(revision));
    key.append(raw_source);
    if (const auto found = session->sources.find(key); found != session->sources.end()) return found->second;
    auto source = std::make_shared<AnnouncementLiteralSource>();
    source->raw.assign(raw_source);
    source->normalized = normalize_utterance(source->raw, &source->origins);
    source->folded = source->normalized;
    for (char &ch : source->folded) ch = static_cast<char>(fold_ascii(static_cast<unsigned char>(ch)));
    session->sources.emplace(std::move(key), source);
    return source;
}

std::optional<std::string> Overlay::translate_announcement_combat(
        std::string_view raw_source, std::string_view initial_scope) const {
    TranslationWorkScope budget;
    // A complete native constructor has already proved this unit boundary.
    // Keep the same unit policy as a field inside its sentence; the ordinary
    // standalone unit entry deliberately has a narrower fallback policy.
    const bool native_spoken_unit_field = initial_scope == "native-adventure-announcement-unit" &&
        g_native_announcement_log_translation_document;
    const bool native_unit_field = native_spoken_unit_field ||
        (initial_scope == "native-announcement-unit" && g_native_announcement_log_translation_document);
    struct ScopeSpan {
        size_t scope, begin, length;
        bool operator==(const ScopeSpan &) const = default;
    };
    struct ScopeSpanHash {
        size_t operator()(const ScopeSpan &span) const {
            size_t hash = span.scope;
            for (const size_t value : {span.begin, span.length})
                hash ^= value + 0x9e3779b9 + (hash << 6) + (hash >> 2);
            return hash;
        }
    };
    struct SyntaxPath {
        const Rule *rule;
        size_t begin, end, field;
        bool operator==(const SyntaxPath &) const = default;
    };
    struct SyntaxPathHash {
        size_t operator()(const SyntaxPath &path) const {
            size_t hash = std::hash<const Rule *>{}(path.rule);
            for (const size_t value : {path.begin, path.end, path.field})
                hash ^= value + 0x9e3779b9 + (hash << 6) + (hash >> 2);
            return hash;
        }
    };
    struct SemanticPath {
        const Rule *rule;
        size_t begin, end, field;
        bool operator==(const SemanticPath &) const = default;
    };
    struct SemanticPathHash {
        size_t operator()(const SemanticPath &path) const {
            size_t hash = std::hash<const Rule *>{}(path.rule);
            for (const auto value : {path.begin, path.end, path.field})
                hash ^= value + 0x9e3779b9 + (hash << 6) + (hash >> 2);
            return hash;
        }
    };
    struct SemanticMatch {
        bool matched = false;
        size_t end = 0;
        std::optional<std::string> translation;
        std::shared_ptr<const SemanticMatch> next;
    };
    struct SemanticChart {
        std::unordered_map<ScopeSpan, std::optional<std::string>, ScopeSpanHash> values;
        std::unordered_map<SemanticPath, SemanticMatch, SemanticPathHash> matches;
    };
    struct SyntaxChart {
        // Syntax paths borrow only this immutable normalization. Retaining a
        // caller's temporary string_view would leave later root scopes stale.
        std::shared_ptr<AnnouncementLiteralSource> text;
        std::unordered_map<std::string, size_t> scope_ids;
        std::unordered_map<ScopeSpan, std::vector<int>, ScopeSpanHash> candidates;
        std::unordered_map<ScopeSpan, bool, ScopeSpanHash> scopes;
        std::unordered_map<ScopeSpan, std::optional<std::string>, ScopeSpanHash> anatomy;
        std::unordered_set<ScopeSpan, ScopeSpanHash> active;
        std::unordered_map<SyntaxPath, bool, SyntaxPathHash> paths;
        std::unordered_map<std::string, std::shared_ptr<SemanticChart>> semantics;
    };
    struct ParserSession {
        std::unordered_map<std::string, std::shared_ptr<SyntaxChart>> charts;
    };
    const auto resources = RULESETS.resource_revision();
    const auto context = native_identity_translation_context();
    const auto owner = reinterpret_cast<uintptr_t>(this);
    std::string domain;
    const auto value = [&](std::string &key, const auto &input) {
        key.append(reinterpret_cast<const char *>(&input), sizeof(input));
    };
    value(domain, owner); value(domain, resources);
    std::string chart_key = domain;
    value(chart_key, raw_source.size()); chart_key.append(raw_source);
    std::string active_key = "announcement-combat\x1f";
    active_key.append(domain);
    value(active_key, initial_scope.size()); active_key.append(initial_scope);
    value(active_key, raw_source.size()); active_key.append(raw_source);
    std::string memo_key = active_key;
    value(memo_key, context);
    const auto parse = [&]() -> std::optional<std::string> {
    TranslationWorkFrame work_frame("announcement grammar", raw_source);
    if (announcement_combat_rules_.empty()) return std::nullopt;
    const bool spoken_scope = initial_scope == "spoken-sentence" ||
        initial_scope == "spoken-greeting" || initial_scope == "adventure-announcement" ||
        native_spoken_unit_field;
    // Match native prose in a canonical view, but give typed leaves their
    // original bytes. Memorial death clauses can contain doubled spaces while
    // an authored nickname in the same inscription owns its exact whitespace.
    // The mapping also preserves nicknames inside READ_ITEM inscriptions and
    // historical collection titles reached through the shared grammar. Squad
    // aliases need the same original-byte ownership even without backticks.
    static const unsigned char session_tag = 0;
    auto &retained_session = active_translation_work->parser_sessions[&session_tag];
    if (!retained_session) retained_session = std::make_shared<ParserSession>();
    const auto session = std::static_pointer_cast<ParserSession>(retained_session);
    auto &retained_chart = session->charts[chart_key];
    if (!retained_chart) {
        auto made = std::make_shared<SyntaxChart>();
        made->text = announcement_literal_source(owner, resources, raw_source);
        retained_chart = std::move(made);
    }
    const auto chart = retained_chart;
    const auto &source = chart->text->normalized;
    const auto &origins = chart->text->origins;
    if (source.empty()) return std::nullopt;
    // Shared historical/item fields can enter this grammar through another
    // parser. Track the semantic span across calls as well as within resolve,
    // without imposing a nesting or list-size limit on actual source records.
    // A nontrivial TLS destructor retains the core until the game thread
    // exits. Keep the set module-owned so ordinary hot reload can release it.
    auto &active_calls = reloadable_thread_state<
        std::unordered_set<std::string>, struct CombatActiveCallsTag>();
    const std::string call_key = std::string(initial_scope) + '\x1f' + std::string(raw_source);
    if (!active_calls.insert(call_key).second) {
        ++active_translation_work->cycle_revision;
        return std::nullopt;
    }
    struct ActiveCall {
        std::unordered_set<std::string> &calls;
        const std::string &key;
        ~ActiveCall() { calls.erase(key); }
    } call{active_calls, call_key};
    using Result = std::optional<std::string>;
    std::string semantic_domain;
    // Only these modes change field semantics. The selected root rule does
    // not: greeting/sentence/adventure retries reuse the same scope/span
    // results whenever their actual personal-field policy is identical.
    const unsigned char semantic_mode = spoken_scope ? 1 :
        (initial_scope == "unit" || initial_scope == "$unit" ? 2 : 0);
    value(semantic_domain, semantic_mode);
    value(semantic_domain, context);
    auto &retained_semantics = chart->semantics[semantic_domain];
    if (!retained_semantics) retained_semantics = std::make_shared<SemanticChart>();
    const auto semantics = retained_semantics;
    auto &memo = semantics->values;
    std::unordered_set<ScopeSpan, ScopeSpanHash> active;
    // Recognize the complete grammar before translating open fields. External
    // resolvers remain conservative wildcards except the closed anatomy
    // grammar; table-owned scopes propagate their literals and finite
    // vocabulary through aliases without changing production order.
    auto &syntax_candidates = chart->candidates;
    auto &syntax_scopes = chart->scopes;
    auto &active_syntax = chart->active;
    auto &syntax_paths = chart->paths;
    const auto span_key = [&](std::string_view scope, std::string_view input) {
        const auto found = chart->scope_ids.try_emplace(std::string(scope), chart->scope_ids.size());
        return ScopeSpan{found.first->second, static_cast<size_t>(input.data() - source.data()), input.size()};
    };
    // Index each literal once in the owned complete source. Every grammar
    // state then visits actual delimiter positions, not every intervening
    // byte followed by another complete suffix scan. Empty literals retain
    // every legal byte boundary, preserving adjacent-capture coverage.
    const auto literal_positions = [&](std::string_view literal) -> const std::vector<size_t> & {
        return chart->text->positions(literal);
    };
    const auto candidates = [&](std::string_view scope, std::string_view input)
            -> const std::vector<int> & {
        const auto key = span_key(scope, input);
        if (const auto found = syntax_candidates.find(key); found != syntax_candidates.end())
            return found->second;
        translation_work_step();
        std::vector<int> made;
        if (const auto grammar = announcement_combat_syntax_.find(std::string(scope));
                grammar != announcement_combat_syntax_.end())
            made = grammar->second.anchors.candidates(input);
        return syntax_candidates.emplace(key, std::move(made)).first->second;
    };
    const auto anatomy = [&](std::string_view input) -> Result {
        const auto key = span_key("$body", input);
        if (const auto found = chart->anatomy.find(key); found != chart->anatomy.end())
            return found->second;
        const size_t begin = static_cast<size_t>(input.data() - source.data());
        const size_t end = begin + input.size();
        const std::string_view original = std::string_view(chart->text->raw).substr(
            origins[begin], origins[end - 1] + 1 - origins[begin]);
        const auto cycle_revision = active_translation_work->cycle_revision;
        // This is the same closed BODY grammar used by semantic resolution,
        // including complete RAW names, ordinals and parent chains. Reject
        // an impossible boundary before parsing a speculative unit or item.
        auto result = RULESETS.translate_anatomy(cp437_to_utf8(std::string(original)), false);
        if (result && result->empty()) result.reset();
        if (!translation_work_exhausted() &&
                cycle_revision == active_translation_work->cycle_revision)
            chart->anatomy.emplace(key, result);
        return result;
    };
    std::function<bool(std::string_view, std::string_view)> scope_fits;
    std::function<bool(const Rule &, const std::vector<std::string> &,
        std::string_view, size_t, size_t)> suffix_fits;
    suffix_fits = [&](const Rule &rule, const std::vector<std::string> &fields,
            std::string_view input, size_t field, size_t at) {
        if (field == fields.size()) return at == input.size();
        const size_t input_begin = static_cast<size_t>(input.data() - source.data());
        // Consumed prefixes cannot affect this suffix. Canonical absolute
        // endpoints let different enclosing spans share its one DP proof.
        const SyntaxPath path{&rule, input_begin + at, input_begin + input.size(), field};
        if (const auto found = syntax_paths.find(path); found != syntax_paths.end())
            return found->second;
        translation_work_step();
        const auto &following = rule.template_literals[field + 1];
        bool fits = false;
        if (at < input.size() && following.size() < input.size() - at) {
            const size_t last = input.size() - following.size();
            const auto &positions = literal_positions(following);
            auto next = std::lower_bound(positions.begin(), positions.end(), input_begin +
                (field + 1 == fields.size() ? last : at + 1));
            const auto stop = std::upper_bound(next, positions.end(), input_begin + last);
            for (; next != stop; ++next) {
                translation_work_step();
                const size_t end = *next - input_begin;
                const auto value = input.substr(at, end - at);
                if (!announcement_combat_field_edges_fit(fields[field], value)) continue;
                // Prove the suffix before entering an open name/item field.
                if (suffix_fits(rule, fields, input, field + 1, end + following.size()) &&
                        scope_fits(fields[field], value)) {
                    fits = true;
                    break;
                }
            }
        }
        syntax_paths.emplace(path, fits);
        return fits;
    };
    scope_fits = [&](std::string_view scope, std::string_view input) {
        input = trim_view(input);
        if (input.empty()) return false;
        if (scope == "$body") return anatomy(input).has_value();
        // This scope also has a native work-reference fallback outside its
        // table. Its lexical admission must include that external production.
        if (scope.starts_with('$') || scope == "work-reference-list") return true;
        const auto key = span_key(scope, input);
        if (const auto found = syntax_scopes.find(key); found != syntax_scopes.end())
            return found->second;
        // Cyclic aliases are unknown here, not a proved syntax rejection.
        // The semantic resolver's active-span guard still rejects real cycles.
        if (!active_syntax.insert(key).second) return true;
        struct ActiveSyntax {
            std::unordered_set<ScopeSpan, ScopeSpanHash> &active;
            const ScopeSpan &key;
            ~ActiveSyntax() { active.erase(key); }
        } active_scope{active_syntax, key};
        translation_work_step();
        bool fits = false;
        const auto grammar = announcement_combat_rules_.find(std::string(scope));
        const auto syntax = announcement_combat_syntax_.find(std::string(scope));
        if (grammar != announcement_combat_rules_.end() &&
                syntax != announcement_combat_syntax_.end()) {
            const auto &choices = candidates(scope, input);
            for (const int index : choices) {
                translation_work_step();
                const auto &rule = grammar->second[static_cast<size_t>(index)].second;
                if (rule.template_kinds.empty()) {
                    fits = input.size() == rule.source.size() &&
                        template_literal_at(input, 0, rule.source, true);
                } else if (template_literal_at(input, 0, rule.template_literals.front(), true) &&
                        announcement_combat_numeric_tail_fits(rule, input)) {
                    fits = suffix_fits(rule, syntax->second.fields[static_cast<size_t>(index)],
                        input, 0, rule.template_literals.front().size());
                }
                if (fits) break;
            }
        }
        syntax_scopes.emplace(key, fits);
        return fits;
    };
    std::function<Result(std::string_view, std::string_view)> resolve;
    resolve = [&](std::string_view scope, std::string_view input) -> Result {
        input = trim_view(input);
        if (input.empty()) return std::nullopt;
        const size_t begin = static_cast<size_t>(input.data() - source.data());
        const size_t end = begin + input.size();
        const std::string_view original = std::string_view(chart->text->raw).substr(
            origins[begin], origins[end - 1] + 1 - origins[begin]);
        const auto key = span_key(scope, input);
        if (auto found = memo.find(key); found != memo.end()) return found->second;
        std::string leaf_key;
        if (scope.starts_with('$')) {
            leaf_key = "announcement-typed-field\x1f";
            leaf_key.append(domain);
            value(leaf_key, context);
            // Unit/person policies differ between speech, ordinary clauses
            // and a standalone label. Other external fields have no root-
            // scope policy and must not repeat their noun/name grammar for
            // every root that asks about this same proved source field.
            const unsigned char leaf_mode = scope == "$unit" || scope == "$person"
                ? semantic_mode : 0;
            value(leaf_key, leaf_mode);
            value(leaf_key, scope.size()); leaf_key.append(scope);
            value(leaf_key, original.size()); leaf_key.append(original);
            const bool report_binding = scope == "$unit" || scope == "$person" ||
                scope == "$speech-person" || scope == "$speech-first-name";
            // A return report's history body is bound to its complete parent
            // just like the party; identical prose alone cannot reuse that
            // parent's native history snapshot (or a previous binding miss).
            if (scope == "$announcement" || scope == "$mission-return-party" ||
                    scope == "$history-report" ||
                    (report_binding && !g_native_announcement_log_translation_report)) {
                value(leaf_key, raw_source.size()); leaf_key.append(raw_source);
            }
            if ((scope == "$item" || scope == "$announcement-item" || scope == "$combat-item") &&
                    g_native_announcement_log_translation_document &&
                    g_native_announcement_log_translation_document->owned_fields &&
                    !g_native_announcement_log_translation_document->owned_fields->fragments.empty()) {
                // Equal item text at two native offsets can contain distinct
                // owned fields. Do not bypass that binding in the work memo.
                value(leaf_key, raw_source.size()); leaf_key.append(raw_source);
                value(leaf_key, origins[begin]);
            }
            if (const auto found = active_translation_work->memo.find(leaf_key);
                    found != active_translation_work->memo.end()) return found->second;
        }
        TranslationWorkFrame field_work("announcement grammar field", input);
        // Aliases may preserve span length while changing semantic scope. A
        // visited (scope, span) prevents cycles without truncating long reports.
        if (!active.insert(key).second) {
            ++active_translation_work->cycle_revision;
            return std::nullopt;
        }
        const auto cycle_revision = active_translation_work->cycle_revision;
        bool native_empty_return_party = false;
        const auto finish = [&](Result result) -> Result {
            active.erase(key);
            if (result && result->empty() && !native_empty_return_party) result.reset();
            if (!translation_work_exhausted() &&
                    cycle_revision == active_translation_work->cycle_revision) {
                memo.emplace(key, result);
                if (!leaf_key.empty() && context == native_identity_translation_context())
                    active_translation_work->memo.emplace(leaf_key, result);
            }
            return result;
        };
        if (scope.starts_with("$")) input = original;
        if (scope == "actor" && g_native_announcement_log_translation_document &&
                !native_announcement_log_item_field_active()) {
            const auto &document = *g_native_announcement_log_translation_document;
            const auto &owned = document.owned_fields;
            // The actor alternatives also admit a flying item. A formatter-
            // captured unit already proves which alternative owns this exact
            // span; do not first parse "the <unit caption>" as an item. A
            // captured report fragment must match its original offset, so
            // equal text elsewhere cannot borrow that fragment's identity.
            if (owned && owned->world == document.world &&
                    owned->report_id == document.report.id &&
                    owned->type == document.report.type &&
                    owned->normalized_source == raw_source &&
                    owned->resource_revision == resources &&
                    owned->catalog_generation == native_identity_translation_catalog_generation()) {
                for (const auto &field : owned->fragments) {
                    if (field.kind == NativeAnnouncementLogFragmentKind::UnitReference &&
                            !field.ambiguous && field.offset == origins[begin] &&
                            field.length == original.size() && field.source == original &&
                            field.target && !field.target->empty())
                        return finish(field.target);
                }
            }
            const auto *inputs = g_native_announcement_log_worker_inputs;
            if (inputs && inputs->identity_sources_complete && inputs->identity_sources) {
                const auto identity = inputs->identity_sources->find(std::string(original));
                // This snapshot contains captions observed from native unit
                // formatters, not guesses based on capitalization/spelling.
                // An ambiguous spelling has no target and keeps both original
                // actor alternatives available in their existing order.
                if (identity != inputs->identity_sources->end() && identity->second &&
                        !identity->second->empty()) return finish(identity->second);
            }
        }
        if (scope == "$memorial-actor") {
            auto result = translate_legends_actor(input);
            return finish(translation_complete_with_native_nicknames(result, input)
                ? std::move(result) : std::nullopt);
        }
        if (scope == "$memorial-artifact") {
            auto result = translate_legends_artifact_identity(input);
            return finish(translation_complete_with_native_nicknames(result, input)
                ? std::move(result) : std::nullopt);
        }
        if (scope == "$memorial-item") {
            auto result = translate_item_description_term(input);
            return finish(translation_complete_with_native_nicknames(result, input)
                ? std::move(result) : std::nullopt);
        }
        if (scope == "$memorial-preference") {
            auto result = translate_character_preference_term(input);
            return finish(translation_complete_with_native_nicknames(result, input)
                ? std::move(result) : std::nullopt);
        }
        if (scope == "$memorial-material") {
            auto result = translate_material_name(input);
            if (!translation_complete_with_native_nicknames(result, input))
                result = translate_character_preference_term(input);
            return finish(translation_complete_with_native_nicknames(result, input)
                ? std::move(result) : std::nullopt);
        }
        if (scope == "$art-form" || scope == "$memorial-form" || scope == "$work-title") {
            auto result = translate_creative_title(input);
            return finish(translation_complete_with_native_nicknames(result, input)
                ? std::move(result) : std::nullopt);
        }
        if (scope == "$unit") {
            bool bound = false;
            auto result = native_announcement_unit_identity_target(raw_source, input, &bound);
            // A frozen typed report can retain an unbound field verbatim.
            // That display fallback does not prove a person: continue through
            // the complete name grammar, rather than swallowing a reaction.
            if (!bound) result.reset();
            if (!result) result = native_unit_identity_source_target(input);
            // b6ca30/132e430 can copy the complete animated corpse/body-part
            // label into a proved unit field. Resolve its owner and native
            // body suffix together before treating it as a bare person name.
            if (!result) result = translate_native_animation_label(input);
            if (!result && spoken_identity_has_prose_boundary(input))
                return finish(std::nullopt);
            if (!result) result = translate_ui_message_capture(input, true);
            // The complete native production establishes this unit slot in
            // combat and adventure records too. b6ca30 may return an authored
            // name alone; it need not exist in the generated-name lexicon.
            // Resolve known identities first, then preserve the owned name
            // through the same typed path used by fortress announcements.
            // Speech first resolves the whole native body, then partitions
            // appended complete sentences. An unbound authored-name fallback
            // here would preserve an arbitrary body prefix or a later reaction
            // as if it were a unit. Native identity bindings above still own
            // real authored captions; unbound personal names use the speech
            // producer's complete EnglishName/FIRST_NAME grammar instead.
            if (!result && spoken_scope)
                result = translate_announcement_combat(input, "$speech-person");
            // A textual capture alone does not establish an authored name.
            // The broad damage head can otherwise steal a complete shot:
            // "strikes [at you but the shot is deflected] by the [item]".
            // Native-bound identities above retain authored bytes; this last
            // unbound alternative must resolve a real name/identity grammar.
            // A display production may preserve an unknown noun only after
            // its complete native clause boundaries have been established.
            if (!result && !spoken_scope && initial_scope != "unit" && initial_scope != "$unit" &&
                    !spoken_identity_has_prose_boundary(input, true))
                result = translate_unit_identity(input, false);
            return finish(std::move(result));
        }
        if (scope == "$historical-actor") {
            // b92f10 supplies the complete historical-figure caption to
            // agreement and negotiation reports. Its caste, claimed identity,
            // curse/status and name belong to one actor field, rather than a
            // live unit's profession caption or a bare generated name.
            if (const auto identity = native_unit_identity_source_target(input))
                return finish(identity);
            if (spoken_identity_has_prose_boundary(input))
                return finish(std::nullopt);
            auto result = translate_legends_actor(input, 0, true);
            if (translation_complete_with_native_nicknames(result, input))
                return finish(std::move(result));
            // Authored CJK/foreign names remain supported by the existing
            // RAW-backed caste/name parser. It admits a complete typed actor
            // without the unrestricted authored-unit fallback.
            return finish(translate_ui_message_capture(input, true));
        }
        if (scope == "$squad") {
            // The return builder selects squad.alias or squad.name before
            // appending this field. Use the existing source-aware squad path;
            // without that ownership evidence its exact spelling stays opaque.
            return finish(translate_fortress_squad_name(input));
        }
        if (scope == "$mission-return-party") {
            const auto party = native_mission_return_party(raw_source);
            if (!party) {
                // The native singular suffix exists only in the one-unit
                // branch; squad.alias always receives "have returned".
                // This finite producer shape proves a unit without making
                // any assumption about the personal spelling itself.
                if (std::string_view(source).substr(end).starts_with(" has returned.")) {
                    auto translated = translate_ui_message_capture(input, true);
                    if (!translated) translated = translate_unit_identity(input, true);
                    return finish(std::move(translated));
                }
                // Without producer provenance, "and others" can belong to
                // an authored alias. Let the plain "have returned" rule own
                // that whole opaque subject instead of translating its tail.
                if (std::string_view(source).substr(end).starts_with(" and others have returned."))
                    return finish(std::nullopt);
                return finish(native_text_to_utf8(input));
            }
            // With no first UnitLabel/squad EnglishName, the native plural
            // branch still appends " and others have returned.". Its visible
            // nonempty subject is the suffix's "and others", not an alias.
            // Only this captured empty source can give those words a role;
            // an authored squad named "and others" retains its exact bytes.
            const bool empty_first = party->prefix.empty() &&
                (party->kind == NativeMissionReturnKind::Generated ||
                 (party->kind == NativeMissionReturnKind::Units &&
                  party->units.size() == 1 && party->units.front().empty()));
            if (empty_first && normalize_utterance(input) == "and others" && begin == 0 &&
                    std::string_view(source).substr(end).starts_with(" have returned."))
                return finish(std::string("其他人"));
            // Reject a competing literal split inside an authored name or a
            // unit's nickname. Only the captured party's full span may own it.
            if (normalize_utterance(party->prefix) != normalize_utterance(input))
                return finish(std::nullopt);
            if (party->kind == NativeMissionReturnKind::Alias)
                return finish(native_text_to_utf8(party->prefix));
            if (party->kind == NativeMissionReturnKind::Generated && party->generated_name) {
                return finish(translate_generated_squad_name(&*party->generated_name, party->prefix));
            }
            if (party->kind == NativeMissionReturnKind::Units) {
                std::string target;
                for (const auto &member : party->units) {
                    // The exact formatter call establishes a live unit field;
                    // a squad alias never enters this authored-unit fallback.
                    // Empty members contribute no invented name or dangling
                    // conjunction. The remaining native fields stay intact.
                    if (member.empty()) continue;
                    auto translated = translate_ui_message_capture(member, true);
                    if (!translated) translated = translate_unit_identity(member, true);
                    if (!translated) return finish(std::nullopt);
                    if (!target.empty()) target += "和";
                    target += *translated;
                }
                // Two empty native fields still leave the nonempty " and "
                // separator. This bound leaf may translate to no subject so
                // the enclosing complete return clause supplies the message.
                // No ordinary unit/name scope admits an empty translation.
                native_empty_return_party = target.empty() && !party->units.empty() &&
                    std::all_of(party->units.begin(), party->units.end(),
                        [](const std::string &member) { return member.empty(); });
                return finish(std::move(target));
            }
            return finish(native_text_to_utf8(input));
        }
        if (scope == "$job") {
            // Subject-bearing jobs retain native nicknames/authored names
            // through the typed unit field of their complete production.
            if (auto result = translate_announcement_combat(input, "fortress-job"))
                return finish(std::move(result));
            auto result = translate_fortress_activity(normalize_utterance(input), true);
            if (!result || result->empty() || result->find("[C:") != std::string::npos ||
                    std::any_of(result->begin(), result->end(), [](unsigned char ch) {
                        return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ||
                            ch == '\r' || ch == '\n';
                    })) result.reset();
            return finish(std::move(result));
        }
        if (scope == "$requirement") return finish(translate_workshop_recipe_source(input));
        if (scope == "$journal-office") {
            // d1ef0 takes a whole gendered position title or assignment's
            // plural title. Keep its office sense and shared RAW vocabulary.
            return finish(translate_legends_office(input));
        }
        if (scope == "$journal-owner") {
            // The People producer names an entity, or a deity when 9bdfb0
            // supplies the religious suffix. A bound entity keeps its own
            // name senses; a divine figure keeps its personal name grammar.
            auto result = translate_civilization_reference(input);
            if (!translation_complete_with_native_nicknames(result, input))
                result = translate_legends_name(input, true);
            if (!translation_complete_with_native_nicknames(result, input))
                result = translate_legends_name(input, false, true);
            return finish(translation_complete_with_native_nicknames(result, input)
                ? std::move(result) : std::nullopt);
        }
        if (scope == "$office") {
            // Intrigue and negotiation insert position.name directly from
            // the native position record. Resolve that complete typed title
            // through the shared office/profession vocabulary, never names.
            auto result = translate_unit_profession(input, false);
            if (!result) result = translate_legends_term(input, false);
            if (result && (result->find("[C:") != std::string::npos ||
                std::any_of(result->begin(), result->end(), [](unsigned char ch) {
                    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
                }))) result.reset();
            return finish(std::move(result));
        }
        if (scope == "$travel-actor") {
            // The travel-location builder passes the complete contextual HF
            // caption from b92f10, with species, curse/status and the English
            // name enabled. Its RAW-backed prefix proves the personal slot;
            // a site name or an ordinary prose fragment cannot enter it.
            auto result = translate_legends_actor(input, 0, true);
            if (!translation_complete_with_native_nicknames(result, input))
                result = translate_announcement_combat(input, "travel-empty-caste-actor");
            return finish(translation_complete_with_native_nicknames(result, input)
                ? std::move(result) : std::nullopt);
        }
        if (scope == "$travel-person") {
            // The empty-caste HF branch still owns a complete generated
            // English name. Keep its given-name transliteration and title
            // grammar, rejecting an unsupported English remainder.
            auto result = translate_legends_name(input, true);
            if (!translation_complete_with_native_nicknames(result, input))
                result = translate_english_character_name(input,
                    input.substr(0, input.find(' ')));
            return finish(translation_complete_with_native_nicknames(result, input)
                ? std::move(result) : std::nullopt);
        }
        if (scope == "$travel-site") {
            // b93930 supplies a whole site field, including unknown-site and
            // unnamed location labels. Do not reinterpret its generated name
            // as an organization simply because the spellings coincide.
            auto result = translate_legends_place(input, true);
            if (!translation_complete_with_native_nicknames(result, input))
                result = exact_literal_translation(input);
            return finish(translation_complete_with_native_nicknames(result, input)
                ? std::move(result) : std::nullopt);
        }
        if (scope == "$journal-artifact-place") {
            // d09e0 appends the complete English location supplier, including
            // unnamed region/underground fallbacks. Its first site branch
            // actually calls b94a40 too; preserve that native geographic
            // field instead of inferring a site from the stored ID alone.
            auto result = translate_world_artifact_location(input);
            return finish(translation_complete_with_native_nicknames(result, input)
                ? std::move(result) : std::nullopt);
        }
        if (scope == "$journal-artifact-building") {
            // b94090 selects either a complete generated English building
            // name or one of its finite unnamed/type labels. Resolve those
            // labels before entering the generated-name grammar.
            auto result = translate_legends_term(input);
            if (!translation_complete_with_native_nicknames(result, input))
                result = translate_legends_name(input, false, false);
            return finish(translation_complete_with_native_nicknames(result, input)
                ? std::move(result) : std::nullopt);
        }
        if (scope == "$resident-assigned-name") {
            // 135c28c..135c2e6 reuses the resident role's NativeString. A
            // null getter or has_name=false leaves that complete role in the
            // final field; a94030 overwrites it only for an actual name.
            constexpr std::string_view resident = " have given a resident ";
            constexpr std::string_view assigned = " the name ";
            const size_t role_at = source.find(resident);
            const size_t name_at = source.rfind(assigned);
            if (role_at != std::string::npos && name_at != std::string::npos &&
                    name_at > role_at + resident.size() &&
                    normalize_utterance(input) == std::string_view(source).substr(
                        role_at + resident.size(), name_at - role_at - resident.size())) {
                if (auto role = translate_announcement_combat(input, "$attack-creature-role"))
                    return finish(std::move(role));
            }
            return finish(translate_legends_name(input, true));
        }
        if (scope == "$attack-creature-role") {
            // 132e0c0 and 132f980 supply RAW caste/species, profession and
            // creature-status fields, without a personal or authored name.
            // Resolve the complete role before the generic UI noun parser.
            auto result = translate_creature_descriptor(input, true);
            if (!result) result = translate_unit_profession(input, false);
            if (!result) result = translate_legends_term(input, false);
            return finish(translation_complete_with_native_nicknames(result, input)
                ? std::move(result) : std::nullopt);
        }
        if (scope == "$combat-item") {
            // Shot block/parry/deflection calls pass c65450 count=1.
            // The virtual +0x5f0
            // article precedes every quality/wear/ownership wrapper, while
            // +0x5e8 supplies the complete noun inside them. Inventory owns
            // that same full caption grammar, including article and marks;
            // a bare ::items lookup does not own the leading article.
            const auto parse_item = [&]() -> Result {
                auto result = translate_inventory_item_name(input, -1, -1);
                if (!translation_complete_with_native_nicknames(result, input))
                    result = translate_announcement_combat(input, "$announcement-item");
                return translation_complete_with_native_nicknames(result, input)
                    ? std::move(result) : std::nullopt;
            };
            // Repeated attacks own the same complete weapon caption even
            // though their report IDs differ. Close the inventory-first
            // path itself, so it shares the same dependency and native-field
            // witness as ordinary announcement items before doing any work.
            std::string configuration = config_.language;
            configuration.push_back(config_.enabled ? '\1' : '\0');
            configuration.push_back(config_.native_language_original ? '\1' : '\0');
            configuration.push_back(config_.compositional_rules ? '\1' : '\0');
            auto closed = native_announcement_log_closed_item_field(this, raw_source,
                    origins[begin], input, scope, configuration,
                    native_identity_translation_catalog_generation(),
                    [&](const NativeUnitIdentity &identity) { return translate_native_unit_identity(identity); },
                    parse_item);
            if (closed.state != NativeAnnouncementLogItemFieldState::CompatibilityRequired)
                return finish(std::move(closed.target));
            return finish(parse_item());
        }
        if (scope == "$buildingplan-item") {
            if (input == "item") return finish("物品");
            return finish(exact_literal_translation("DFHack GUI Buildingplan item: " + std::string(input)));
        }
        if (scope == "$read-item") {
            // READ_ITEM owns this whole e68020/c65450 field. Native title
            // productions precede ordinary item parsing here, including
            // punctuation, copy annotations and designation/count wrappers.
            auto result = translate_written_item_caption(input, false, true);
            if (translation_complete_with_native_nicknames(result, input))
                return finish(std::move(result));
            result = translate_item_caption_grammar(input);
            if (translation_complete_with_native_nicknames(result, input))
                return finish(std::move(result));
            // Read also admits slabs and written tools. Keep every complete
            // physical caption on the shared item path before allowing the
            // BOOK_ART/BOOK_INSTRUCTION bare [NAME] title alternative.
            result = translate_announcement_combat(input, "$announcement-item");
            if (translation_complete_with_native_nicknames(result, input))
                return finish(std::move(result));
            result = translate_written_item_caption(input, true, true);
            return finish(translation_complete_with_native_nicknames(result, input)
                ? std::move(result) : std::nullopt);
        }
        if (scope == "$read-description") {
            // cc7020/cc6a10 submit their entire carrier and work body.
            // A displayed wrap row is never a separate work description.
            const auto normalized = normalize_utterance(input);
            if (!is_written_work_description(normalized)) return finish(std::nullopt);
            return finish(translate_written_work_paragraph(input));
        }
        if (scope == "$announcement-terrain") {
            // The interruption input's failed-grab message appends the same
            // complete e7d330 terrain field as its Hold/Hang-from captions.
            // Its material and construction grammar belongs to a tile.
            return finish(RULESETS.translate_tile_description(native_text_to_utf8(input)));
        }
        if (scope == "$announcement-building") {
            // 1168910 obtains a discovered building's entire caption from
            // virtual +0x188. Reuse that exact hover-caption grammar, keeping
            // its materials, mechanism states and contained items together.
            std::vector<size_t> building_origins;
            return finish(RULESETS.translate_with_origins(native_text_to_utf8(input),
                "::map_hover::building", building_origins));
        }
        if (scope == "$item" || scope == "$announcement-item") {
            const auto parse_item = [&]() -> Result {
            // A complete equipment/material production has its own proven
            // item kind. Keep it ahead of broad title conjunctions such as
            // "{b} and {b}" and preserve authored item-name fields.
            if (auto caption = translate_item_caption_grammar(input))
                return caption;
            // c65450(item, ..., false, 1) / e68020 supply the definite
            // article inside ordinary action item fields. Resolve the noun
            // as equipment before book-title/name alternatives see its words.
            // Keep the full original span for native item-field ownership.
            for (std::string_view article : {"the ", "The ", "a ", "A ", "an ", "An "})
                if (input.starts_with(article))
                    if (auto caption = translate_item_caption_grammar(input.substr(article.size())))
                        return caption;
            // ELF e68020 emits a complete written title for item kinds
            // 0x56/0x59, optionally followed by " (copy)". Its punctuation
            // belongs to this item field, before the announcement's period.
            // Resolve the proven title productions before ordinary noun
            // parsing can spend the record's work budget on title words.
            auto result = translate_written_item_caption(input, false, true);
            if (translation_complete_with_native_nicknames(result, input))
                return result;
            // Shared damage's c65450 and announcements' e68020 both supply
            // complete live item captions. A figurine/statue owns its depicted
            // subject as well as material and designation marks; the narrower
            // historical item segmenter does not own that subject grammar.
            // Use the complete noun/caption grammar for every item position:
            // projectile, target, instrument, deflection and lodged equipment.
            result = translate_item_description_term(input);
            if (!translation_complete_with_native_nicknames(result, input))
                result = translate_legends_item(input);
            // Combat callers pass r8d=0. At c654b9..c654e2 an artifact
            // name therefore bypasses material/type and tail-calls a94030.
            // Reuse inventory's native item-name grammar: its same-language
            // root validation owns the whole name, with no generic guessing.
            if (!translation_complete_with_native_nicknames(result, input))
                result = translate_procedural_fragment(std::string(input),
                    false, false, {}, ProceduralFragmentContext::native_item_name);
            return translation_complete_with_native_nicknames(result, input)
                ? std::move(result) : std::nullopt;
            };
            std::string configuration = config_.language;
            configuration.push_back(config_.enabled ? '\1' : '\0');
            configuration.push_back(config_.native_language_original ? '\1' : '\0');
            configuration.push_back(config_.compositional_rules ? '\1' : '\0');
            auto closed = native_announcement_log_closed_item_field(this, raw_source,
                    origins[begin], input,
                    scope, configuration, native_identity_translation_catalog_generation(),
                    [&](const NativeUnitIdentity &identity) { return translate_native_unit_identity(identity); },
                    parse_item);
            if (closed.state != NativeAnnouncementLogItemFieldState::CompatibilityRequired)
                return finish(std::move(closed.target));
            return finish(parse_item());
        }
        if (scope == "$body") {
            // 13345d0 returns a complete BODY name. 6c6d30 appends each
            // connecting parent's name after a comma, including parents
            // called skull/skin. None of those commas introduces the health
            // panel's separate tissue suffix; keep the full owner chain.
            return finish(anatomy(std::string_view(source).substr(begin, end - begin)));
        }
        if (scope == "$announcement-substance") {
            // 11c6cb0/11c8150 append a whole material state name, including
            // deposited contaminants and independent stagnant/salt flags.
            // Container contents can instead come from the item describer.
            auto result = translate_adventure_environment_material(input);
            if (!translation_complete_with_native_nicknames(result, input))
                result = translate_announcement_combat(input, "$announcement-item");
            return finish(translation_complete_with_native_nicknames(result, input)
                ? std::move(result) : std::nullopt);
        }
        if (scope == "$creature") return finish(translate_creature_reference(input));
        if (scope == "$growth-result") {
            // c20abf calls b71ba0 with the post-growth unit, retaining its
            // caste/status/name/decimal ID or adult occupation as one field.
            auto result = translate_creature_label(input, nullptr, true);
            if (!result) result = translate_unit_profession(input, false);
            return finish(std::move(result));
        }
        if (scope == "$conflict-caste") {
            // The conflict constructor passes the RAW caste and plural flag
            // directly to a0d5f0/12ae800, without a unit or item designation.
            auto result = translate_creature_descriptor(input, true);
            return finish(translation_complete_with_native_nicknames(result, input)
                ? std::move(result) : std::nullopt);
        }
        if (scope == "$conflict-place") {
            // Site, subregion and underground suppliers are distinct from
            // the organization field. Their EnglishName output cannot borrow
            // a civilization's identity simply because its spelling matches.
            auto result = translate_legends_place(input, true);
            if (!translation_complete_with_native_nicknames(result, input))
                result = translate_legends_name(input, false, false);
            return finish(translation_complete_with_native_nicknames(result, input)
                ? std::move(result) : std::nullopt);
        }
        if (scope == "$embark-race-adjective") {
            // 8b288f/8b2a67 copy creature_raw.name[2], then capitalize it.
            // Reuse the owned RAW adjective -> singular-name publication so
            // this field also resolves species whose adjective differs from
            // their name. Only the explicit embark grammar admits this leaf.
            if (const auto adjectives = native_dfhack_raw_creature_adjectives()) {
                const auto found = adjectives->find(lower(native_text_to_utf8(input)));
                if (found != adjectives->end())
                    if (auto species = translate_creature_reference(found->second))
                        return finish(std::move(species));
            }
            return finish(translate_creature_descriptor(input, true));
        }
        if (scope == "$term") return finish(translate_ui_message_capture(input, false));
        if (scope == "$person") {
            bool bound = false;
            auto result = native_announcement_unit_identity_target(raw_source, input, &bound);
            if (!bound) result.reset();
            if (!result) result = native_unit_identity_source_target(input);
            if (!result && spoken_identity_has_prose_boundary(input))
                return finish(std::nullopt);
            if (!result) result = translate_legends_name(input, true);
            if (!result && spoken_scope)
                result = translate_announcement_combat(input, "$speech-person");
            return finish(std::move(result));
        }
        if (scope == "$speech-person" || scope == "$speech-first-name") {
            // The decompiled SPEAKER/AUDIENCE/HF parameter producers own
            // these personal fields. FIRST_NAME can come from UTTERANCES,
            // without a native WORD mask; TRANS_NAME can pair that same
            // given name with a complete English surname/title. Keep this
            // proof scoped to speech rather than widening ordinary names.
            bool bound = false;
            auto result = native_announcement_unit_identity_target(raw_source, input, &bound);
            if (!bound) result.reset();
            if (!result) result = native_unit_identity_source_target(input);
            if (result) return finish(std::move(result));
            if (spoken_identity_has_prose_boundary(input))
                return finish(std::nullopt);
            // Report captures own native CP437 bytes, while paragraph callers
            // can supply the same field as UTF-8. Invert only a complete UTF-8
            // representation before handing it to the native name renderer;
            // authored CJK stays UTF-8. Testing individual UTF-8 bytes as CP437
            // letters rejected accented given names and left entire greetings
            // untranslated, or sent them through the legacy generic template.
            const auto native = utf8_to_cp437(input, true);
            const std::string_view name = native ? std::string_view(*native) : input;
            const auto given = name.substr(0, name.find(' '));
            bool valid_given = !given.empty();
            for (size_t at = 0; valid_given && at < given.size();) {
                const auto decoded = decode_utf8_at(given, at);
                if (decoded && is_cjk_display_codepoint(decoded->first)) {
                    at += decoded->second;
                    continue;
                }
                const unsigned char ch = static_cast<unsigned char>(given[at++]);
                valid_given = (ch >= 'A' && ch <= 'Z') ||
                    (ch >= 'a' && ch <= 'z') || is_cp437_latin_letter_byte(ch) ||
                    ch == '-' || ch == '\'';
            }
            // TRANS_NAME is the complete English name, including generated
            // surname/title groups. Render those groups before a permissive
            // personal-name path can keep a CJK given name plus English tail.
            if (scope == "$speech-person" && valid_given && given.size() < name.size()) {
                result = translate_english_character_name(name, given);
                if (translation_complete_with_native_nicknames(result, name))
                    return finish(std::move(result));
            }
            result = translate_legends_name(name, true);
            if (translation_complete_with_native_nicknames(result, name))
                return finish(std::move(result));
            // FIRST_NAME is copied directly from the native string, so an
            // authored Chinese name needs neither Latin letters nor WORD
            // roots. Do not let this name span cross a prose sentence: the
            // greeting may append several independently complete messages.
            if (scope == "$speech-first-name" && contains_cjk_utf8(name)) {
                if (name.find_first_of(".!?,;:\"`[]()\r\n") != std::string_view::npos)
                    return finish(std::nullopt);
                return finish(native_text_to_utf8(name));
            }
            if (!valid_given ||
                    (scope == "$speech-first-name" && given.size() != name.size()))
                return finish(std::nullopt);
            result = translate_english_character_name(name, given);
            return finish(translation_complete_with_native_nicknames(result, name)
                ? std::move(result) : std::nullopt);
        }
        if (scope == "$memory-entity") {
            // The incident-memory name/refusal tail calls b92900, whose
            // field is an entity/deity language_name. Resolve its complete
            // civilization identity before the shared generated-name path;
            // its participant's personal-name spelling cannot choose a type.
            return finish(translate_legends_name(input, false, true));
        }
        if (scope == "$name") return finish(translate_legends_name(input, false));
        if (scope == "$visitor-place-name") {
            // A mental-picture element can name a site or the world. The
            // general name renderer may preserve authored CJK verbatim; a
            // successful result there does not prove that a mixed-language
            // greeting prefix is one name. Only a complete name translation
            // may finish this branch, leaving personal references to their
            // dedicated alternative and compound speech to its partitioner.
            // Keep authored CJK place names, including their Latin/digit
            // components, when the field contains no prose delimiters. A
            // greeting prefix necessarily includes its complete sentences.
            if (contains_cjk_utf8(input) &&
                    input.find_first_of(".!?,;:\"`[]()\r\n") == std::string_view::npos)
                return finish(native_text_to_utf8(input));
            auto result = translate_legends_name(input, false);
            return finish(translation_complete_with_native_nicknames(result, input)
                ? std::move(result) : std::nullopt);
        }
        if (scope == "$native-site-name") return finish(translate_legends_place(input, false));
        if (scope == "$announcement-site-type") return finish(translate_world_site_type(input));
        if (scope == "$event") return finish(translate_legends_event(input, 0));
        if (scope == "$number") return finish(translate_announcement_number(input));
        if (scope == "$kinship") return finish(native_announcement_kinship_target(input));
        if (scope == "$date") return finish(translate_announcement_date(input));
        if (scope == "$sphere") return finish(translate_deity_spheres(input));
        if (scope == "$distance") return finish(exact_literal_translation(
            "Announcement distance: " + lower(std::string(input))));
        if (scope == "$digits") {
            const size_t start = input.front() == '-' ? 1 : 0;
            return finish(start < input.size() && std::all_of(
                    input.begin() + start, input.end(), [](unsigned char ch) {
                        return ch >= '0' && ch <= '9';
                    }) ? Result(std::string(input)) : std::nullopt);
        }
        if (scope == "$reference") {
            // Native work subjects use general_ref's complete display field:
            // reviewed knowledge, a work title, historical event, place or
            // figure. These shared parsers validate the whole field; ordinary
            // lowercase prose never enters an unrestricted name fallback.
            // Native event references can contain entire biographies, dates
            // and motives. Prove their event production before trying the
            // same span as an item or BOOK_ART subject. This entry must not
            // let an untyped name fallback claim a non-event reference.
            auto result = translate_legends_event(input, 0, false);
            if (!result) result = translate_legends_term(input);
            if (!result) result = translate_legends_artifact_identity(input);
            if (!result) result = translate_legends_participant(input, std::nullopt, 0);
            return finish(std::move(result));
        }
        if (scope == "$history-report") {
            // Actual d0 -> body-string append -> type301 submission proves
            // both this entire field and its complete parent record. Reuse
            // all native event semantics, including empty participant lists,
            // rather than reconstructing event IDs or branches from prose.
            if (const auto document = native_mission_return_history(raw_source, input)) {
                if (const auto pieces = translate_history_event(*document)) {
                    std::string target;
                    for (const auto &part : *pieces) target += part.target;
                    if (!target.empty()) return finish(std::move(target));
                }
            }
            // Travellers append history_event::getSentence (+d0), flags=0,
            // translated=true and glyphs_only=false, without a type filter.
            // Its 133 native event families share the existing complete
            // Legends prose catalogue and its typed participant/item/date
            // fields. This resolver must consume the whole authored report;
            // no English sentence or clipped-history fallback is admitted.
            return finish(translate_legends_text(input, false, false));
        }
        if (scope == "$description") return finish(translate_legends_text(input, false, false));
        if (scope == "$inscription") {
            // The native READ_ITEM quoted branches contain the slab's entire
            // writing field, not its title. Only complete reviewed item prose
            // may resolve here; the item panel's partial display is not valid.
            auto result = translate_item_description_source(input, true);
            return finish(translation_complete_with_native_nicknames(result, input)
                ? std::move(result) : std::nullopt);
        }
        if (scope == "$book") {
            auto result = translate_legends_artifact_identity(input);
            if (!result) result = translate_legends_book(input);
            return finish(std::move(result));
        }
        if (scope == "$message") {
            const std::vector<int> source_colors(input.size(), 0xffffff);
            std::vector<int> target_colors;
            return finish(translate_help_paragraph(input, source_colors, target_colors, true));
        }
        if (scope == "$announcement") {
            const std::vector<int> source_colors(input.size(), 0xffffff);
            std::vector<int> target_colors;
            NativeAnnouncementUnitBodyScope semantic_body(raw_source, input);
            dfcn::TranslationResult result;
            translate_complete_announcement(input, source_colors, target_colors, false, -1, &result);
            return finish(result.strict_target());
        }
        if (scope == "work-reference") {
            // general_ref's event display field owns its whole native title,
            // including the place/date. Resolve it before table alternatives
            // such as the {item} {book} can split "the authoring of ..." or
            // "the new obsession of ..." into speculative item/book fields.
            // The $reference alias is sorted after those alternatives; doing
            // this only inside that leaf is too late. No name fallback may
            // establish an event here, and the complete title must translate.
            const auto event = translate_legends_event(original, 0, false);
            if (translation_complete_with_native_nicknames(event, original))
                return finish(event);
        }
        if (scope == "work-reference-list") {
            // `and` and commas can belong to one known knowledge subject or
            // generated title. Resolve that intact reference before trying
            // the native multiple-subject separator productions.
            if (auto result = resolve("work-reference", input)) return finish(std::move(result));
        }
        const auto entries = announcement_combat_rules_.find(std::string(scope));
        if (entries == announcement_combat_rules_.end()) return finish(std::nullopt);
        if (!scope_fits(scope, input)) return finish(std::nullopt);
        const auto &syntax = announcement_combat_syntax_.at(std::string(scope));
        for (int index : candidates(scope, input)) {
            const auto &rule = entries->second[static_cast<size_t>(index)].second;
            translation_work_step();
            if (rule.template_kinds.empty()) {
                if (input.size() == rule.source.size() &&
                    template_literal_at(input, 0, rule.source, true)) return finish(rule.target);
                continue;
            }
            const auto &literals = rule.template_literals;
            // Every fixed fragment must fit in order, with a nonempty typed
            // field between fragments. Reject impossible rules before any
            // name/item parser runs, preserving the actual capture order.
            if (!template_literal_at(input, 0, literals.front(), true) ||
                    !announcement_combat_numeric_tail_fits(rule, input))
                continue;
            const auto &scopes = syntax.fields[static_cast<size_t>(index)];
            if (!suffix_fits(rule, scopes, input, 0, literals.front().size())) continue;
            const size_t input_begin = static_cast<size_t>(input.data() - source.data());
            std::function<SemanticMatch(size_t, size_t)> match = [&](size_t field, size_t at) {
                const SemanticPath path{&rule, input_begin + at, input_begin + input.size(), field};
                if (const auto found = semantics->matches.find(path); found != semantics->matches.end())
                    return found->second;
                TranslationWorkFrame match_work;
                const auto cycle_revision = active_translation_work->cycle_revision;
                const auto complete = [&](SemanticMatch result) {
                    if (!translation_work_exhausted() &&
                            cycle_revision == active_translation_work->cycle_revision) {
                        semantics->matches.emplace(path, result);
                    }
                    return result;
                };
                if (field == scopes.size()) return complete(SemanticMatch{at == input.size()});
                const std::string &following = literals[field + 1];
                // An interior literal can be longer than the entire input.
                // Check the remaining span before subtracting; otherwise an
                // unsigned underflow turns this scan into a SIZE_MAX loop.
                if (at >= input.size() || following.size() >= input.size() - at) {
                    return complete(SemanticMatch{});
                }
                const size_t final_end = input.size() - following.size();
                // A final field owns the entire remaining span. Interior
                // fields backtrack only over native literal boundaries.
                // Prefer the complete attack verb: "snatches at" must own
                // "at" before a typed CJK name can preserve it as name text.
                const size_t first_end = field + 1 == scopes.size() ? final_end : at + 1;
                const auto &positions = literal_positions(following);
                const auto first = std::lower_bound(positions.begin(), positions.end(), input_begin + first_end);
                const auto stop = std::upper_bound(first, positions.end(), input_begin + final_end);
                const size_t count = static_cast<size_t>(stop - first);
                for (size_t choice = 0; choice < count; ++choice) {
                    const size_t end = (scopes[field] == "attack-verb"
                        ? *(stop - 1 - static_cast<ptrdiff_t>(choice)) : first[choice]) - input_begin;
                    translation_work_step();
                    if (end > at) {
                        const auto value = input.substr(at, end - at);
                        if (announcement_combat_field_edges_fit(scopes[field], value) &&
                                suffix_fits(rule, scopes, input, field + 1, end + following.size()) &&
                                scope_fits(scopes[field], value)) {
                            // Prove a list element before descending into its
                            // recursive tail. In work-description, $description
                            // is a syntax wildcard: suffix-first resolution
                            // otherwise recurses at every space in unrelated
                            // prose before rejecting even its first word.
                            const bool recursive_tail = field + 2 == scopes.size() &&
                                scopes.back() == scope;
                            Result result;
                            if (recursive_tail) {
                                result = resolve(scopes[field], value);
                                if (!result) continue;
                            }
                            // Other productions still prove the remainder
                            // before opening speculative item/name fields.
                            auto suffix = match(field + 1, end + following.size());
                            if (!suffix.matched) continue;
                            if (!recursive_tail) result = resolve(scopes[field], value);
                            if (result) return complete(SemanticMatch{
                                true, input_begin + end, std::move(result),
                                std::make_shared<const SemanticMatch>(std::move(suffix))});
                        }
                    }
                }
                return complete(SemanticMatch{});
            };
            auto witness = match(0, literals.front().size());
            if (witness.matched) {
                std::vector<std::string> captures(scopes.size());
                std::vector<Result> translated(scopes.size());
                size_t at = literals.front().size();
                for (size_t field = 0; field < scopes.size(); ++field) {
                    const size_t end = witness.end - input_begin;
                    captures[field] = std::string(input.substr(at, end - at));
                    translated[field] = witness.translation;
                    at = end + literals[field + 1].size();
                    if (witness.next) witness = *witness.next;
                }
                return finish(fill_template(rule, captures, &capture_translations_, nullptr, &translated));
            }
        }
        return finish(std::nullopt);
    };
    // Mixed combat, dialogue and catalog sentences are combined by the
    // shared complete-announcement parser. This scope always owns its span.
    return resolve(native_unit_field ? std::string_view("unit") : initial_scope, source);
    };
    try {
        return translation_work_memo(memo_key, [&] {
            auto result = parse();
            translation_work_step();
            return result;
        }, active_key);
    } catch (const TranslationWorkLimit &) {
        if (!budget.owns_budget()) throw;
        return std::nullopt;
    }
}

// Display composition admits original fields only AFTER a native production
// has one unambiguous complete set of literal/capture boundaries. The strict
// recursive parser above remains the semantic interface used by other grammars.
dfcn::TranslationResult Overlay::translate_announcement_combat_result(
        std::string_view raw_source, std::string_view initial_scope) const {
    dfcn::TranslationResult no_match;
    no_match.source.assign(raw_source);
    no_match.kind = initial_scope;
    no_match.owner = "native-announcement-production";
    no_match.resource_revision = RULESETS.resource_revision();
    if (raw_source.empty()) return no_match;
    dfcn::TranslationWorkScope budget;
    const auto finish = [&](dfcn::TranslationResult result) {
        if (budget.exhausted()) {
            if (!budget.owns_budget()) dfcn::translation_work_step();
            result = preserve_native_translation(raw_source, initial_scope, false,
                dfcn::TranslationStatus::WorkLimited);
            result.owner = no_match.owner;
            result.resource_revision = no_match.resource_revision;
        }
        return result;
    };
    std::optional<dfcn::TranslationWorkFrame> display_work;
    try { display_work.emplace("announcement display production", raw_source); }
    catch (const dfcn::TranslationWorkLimit &) {
        if (!budget.owns_budget()) throw;
        return finish(preserve_native_translation(raw_source, initial_scope, false,
            dfcn::TranslationStatus::WorkLimited));
    }
    try {
        if (const auto complete = translate_announcement_combat(raw_source, initial_scope)) {
            auto result = dfcn::TranslationResult::translated(raw_source, *complete, initial_scope);
            result.owner = no_match.owner;
            result.resource_revision = no_match.resource_revision;
            return finish(std::move(result));
        }
    } catch (const dfcn::TranslationWorkLimit &) {
        if (!budget.owns_budget()) throw;
        auto result = preserve_native_translation(raw_source, initial_scope, false,
            dfcn::TranslationStatus::WorkLimited);
        result.owner = no_match.owner;
        return finish(std::move(result));
    }
    const auto entries = announcement_combat_rules_.find(std::string(initial_scope));
    if (entries == announcement_combat_rules_.end()) return finish(no_match);
    struct BindingStateKey {
        const Rule *rule;
        size_t field, at;
        bool operator==(const BindingStateKey &) const = default;
    };
    struct BindingStateHash {
        size_t operator()(const BindingStateKey &key) const {
            size_t hash = std::hash<const Rule *>{}(key.rule);
            hash ^= key.field + 0x9e3779b9 + (hash << 6) + (hash >> 2);
            hash ^= key.at + 0x9e3779b9 + (hash << 6) + (hash >> 2);
            return hash;
        }
    };
    struct BindingState {
        unsigned char count = 0;
        size_t first_end = SIZE_MAX;
    };
    struct Candidate {
        const Rule *rule = nullptr;
        std::vector<std::string> scopes;
        std::vector<std::pair<size_t, size_t>> ranges;
        size_t literal_bytes = 0;
        bool damage_tree = false;
    };
    struct BindingChart {
        std::shared_ptr<AnnouncementLiteralSource> text;
        std::vector<int> rules;
        std::unordered_map<BindingStateKey, BindingState, BindingStateHash> states;
        std::optional<Candidate> selected;
        bool ambiguous = false, selection_complete = false;
    };
    struct BindingSession {
        std::unordered_map<std::string, std::shared_ptr<BindingChart>> charts;
    };
    static const unsigned char binding_session_tag = 0;
    auto &retained_session = active_translation_work->parser_sessions[&binding_session_tag];
    if (!retained_session) retained_session = std::make_shared<BindingSession>();
    const auto session = std::static_pointer_cast<BindingSession>(retained_session);
    std::string chart_key;
    const auto chart_value = [&](const auto &value) {
        chart_key.append(reinterpret_cast<const char *>(&value), sizeof(value));
    };
    const auto owner = reinterpret_cast<uintptr_t>(this);
    chart_value(owner); chart_value(no_match.resource_revision);
    chart_value(initial_scope.size()); chart_key.append(initial_scope);
    chart_value(raw_source.size()); chart_key.append(raw_source);
    auto &retained_chart = session->charts[chart_key];
    if (!retained_chart) {
        auto made = std::make_shared<BindingChart>();
        made->text = announcement_literal_source(owner, no_match.resource_revision, raw_source);
        const auto syntax = announcement_combat_syntax_.find(std::string(initial_scope));
        if (syntax != announcement_combat_syntax_.end())
            made->rules = syntax->second.anchors.candidates(made->text->normalized);
        else for (size_t index = 0; index < entries->second.size(); ++index)
            made->rules.push_back(static_cast<int>(index));
        retained_chart = std::move(made);
    }
    const auto chart = retained_chart;
    const auto &source = chart->text->normalized;
    const auto &normalized_origins = chart->text->origins;
    if (source.empty() || source.size() != normalized_origins.size()) return finish(no_match);
    auto &selected = chart->selected;
    auto &ambiguous = chart->ambiguous;
    try {
        for (const int rule_at : chart->rules) {
            if (chart->selection_complete) break;
            const auto &[signature, rule] = entries->second[static_cast<size_t>(rule_at)];
            translation_work_step();
            if (rule.template_kinds.empty() || rule.target_capture_order.size() != rule.template_kinds.size() ||
                    rule.target_template_literals.size() != rule.target_capture_order.size() + 1 ||
                    !template_literal_at(source, 0, rule.template_literals.front(), true) ||
                    !announcement_combat_numeric_tail_fits(rule, source)) {
                continue;
            }
            Candidate candidate;
            candidate.rule = &rule;
            candidate.damage_tree = initial_scope == "sentence" &&
                (signature == "head" || signature.starts_with("head,"));
            for (size_t at = 0; at < signature.size();) {
                const size_t comma = signature.find(',', at);
                const size_t end = comma == std::string::npos ? signature.size() : comma;
                candidate.scopes.emplace_back(signature.data() + at, end - at);
                at = end + 1;
            }
            if (candidate.scopes.size() != rule.template_kinds.size()) continue;
            bool predicate_literal = false;
            for (const auto &literal : rule.template_literals) {
                candidate.literal_bytes += literal.size();
                const auto body = trim_view(literal);
                if (body != "and" && body != ", and" && std::any_of(body.begin(), body.end(),
                        [](unsigned char ch) { return (ch >= 'A' && ch <= 'Z') ||
                            (ch >= 'a' && ch <= 'z'); })) predicate_literal = true;
            }
            // Text lists and bare punctuation supply candidate separators,
            // not native member identities. Missing members cannot prove a
            // list or a whitespace-only actor/object decomposition.
            if (!predicate_literal || initial_scope.ends_with("-list") ||
                    (selected && ((!candidate.damage_tree && selected->damage_tree) ||
                        (candidate.damage_tree == selected->damage_tree &&
                            candidate.literal_bytes < selected->literal_bytes)))) {
                continue;
            }
            const auto bind = [&](const auto &self, size_t field, size_t at) -> BindingState {
                const BindingStateKey key{&rule, field, at};
                if (const auto cached = chart->states.find(key); cached != chart->states.end())
                    return cached->second;
                translation_work_step();
                BindingState result;
                if (field == candidate.scopes.size()) result.count = at == source.size() ? 1 : 0;
                else {
                    const auto &following = rule.template_literals[field + 1];
                    if (at < source.size() && following.size() < source.size() - at) {
                        const size_t final = source.size() - following.size();
                        const auto &positions = chart->text->positions(following);
                        auto next = std::lower_bound(positions.begin(), positions.end(),
                            field + 1 == candidate.scopes.size() ? final : at + 1);
                        const auto stop = std::upper_bound(next, positions.end(), final);
                        for (; next != stop && result.count < 2; ++next) {
                            translation_work_step();
                            const size_t end = *next;
                            if (!announcement_combat_field_edges_fit(candidate.scopes[field],
                                    std::string_view(source).substr(at, end - at))) continue;
                            const auto suffix = self(self, field + 1, end + following.size());
                            if (suffix.count) {
                                if (!result.count) result.first_end = end;
                                result.count = static_cast<unsigned char>(
                                    std::min(2, static_cast<int>(result.count) + suffix.count));
                            }
                        }
                    }
                }
                // A suffix state is proved once. Saturating the ambiguity
                // count keeps binding polynomial without enumerating capture
                // combinations or rescanning the remaining fixed literals.
                chart->states.emplace(key, result);
                return result;
            };
            const auto bindings = bind(bind, 0, rule.template_literals.front().size()).count;
            if (!bindings) continue;
            size_t at = rule.template_literals.front().size();
            for (size_t field = 0; field < candidate.scopes.size(); ++field) {
                const auto &state = chart->states.at(BindingStateKey{&rule, field, at});
                candidate.ranges.emplace_back(at, state.first_end);
                at = state.first_end + rule.template_literals[field + 1].size();
            }
            if (!selected || (candidate.damage_tree && !selected->damage_tree) ||
                    (candidate.damage_tree == selected->damage_tree &&
                        candidate.literal_bytes > selected->literal_bytes)) {
                selected = std::move(candidate);
                ambiguous = bindings != 1;
            } else ambiguous = true;
        }
        chart->selection_complete = true;
    } catch (const dfcn::TranslationWorkLimit &) {
        if (!budget.owns_budget()) throw;
        return finish(preserve_native_translation(raw_source, initial_scope, false,
            dfcn::TranslationStatus::WorkLimited));
    }
    if (!selected || ambiguous) return finish(no_match);
    const auto &candidate = *selected;
    std::vector<dfcn::TranslationResult> fields;
    std::vector<size_t> field_offsets;
    bool work_limited = false;
    try {
    for (size_t field = 0; field < candidate.scopes.size(); ++field) {
        const auto [begin, end] = candidate.ranges[field];
        const size_t first = normalized_origins[begin];
        const size_t last = normalized_origins[end - 1] + 1;
        const auto native = raw_source.substr(first, last - first);
        const auto scope = candidate.scopes[field];
        const bool personal = announcement_combat_person_scope(scope);
        bool bound = false;
        std::optional<std::string> translated;
        if (!work_limited) {
            try {
                // The complete report owns formatter-captured authored
                // names. Keep that source binding when a display candidate
                // resolves its unit field through an independent leaf call.
                if (personal) {
                    translated = native_announcement_unit_identity_target(raw_source, native, &bound);
                    if (!bound) translated.reset();
                    if (!translated) {
                        translated = native_unit_identity_source_target(native);
                        bound = translated.has_value();
                    }
                }
                if (!translated) translated = translate_announcement_combat(native, scope);
            }
            catch (const dfcn::TranslationWorkLimit &) {
                if (!budget.owns_budget()) throw;
                work_limited = true;
            }
        }
        // These fields participate in production identity and syntax. A
        // missing numeral/date/relationship is not an unknown noun/name.
        if (!translated && (scope == "$digits" || scope == "$number" ||
                scope == "$date" || scope == "$kinship")) return finish(no_match);
        // A typed report's raw fallback does not own a person boundary.
        // In particular memory-person must not preserve both a historical
        // name and the next complete event/reaction as one opaque name.
        // Genuine formatter bindings still own authored punctuation; the
        // boundary helper likewise leaves nicknames and quoted names intact.
        if (personal && !bound && spoken_identity_has_prose_boundary(native,
                scope == "unit" || scope == "$unit")) return finish(no_match);
        auto result = translated ? dfcn::TranslationResult::translated(native, *translated, scope) :
            dfcn::TranslationResult{};
        if (!result.usable() && !work_limited && !scope.starts_with('$') && native.size() < raw_source.size())
            result = translate_announcement_combat_result(native, scope);
        // These children are native syntax, not open names/materials. A
        // failed child must not survive as an opaque English clause inside
        // an otherwise translated combat sentence. In particular SHOT owns
        // both "strikes at" fields and SHOT_RESULT owns its finite adverb
        // and parry/deflection verb, independently of an unknown item noun.
        if (!result.usable() && (scope == "shot" || scope == "shot-result" ||
                scope == "defense-adverb" || scope == "assault" || scope == "evasion" ||
                scope == "attack" || scope == "attack-verb" || scope == "head" ||
                scope == "damage" || scope == "damage-verb" || scope == "damage-list" ||
                scope == "body-result" || scope == "injury-list")) return finish(no_match);
        if (!result.usable()) result = preserve_native_translation(native, scope, false, work_limited ?
            dfcn::TranslationStatus::WorkLimited : dfcn::TranslationStatus::Untranslated);
        fields.push_back(std::move(result));
        field_offsets.push_back(first);
    }
    } catch (const dfcn::TranslationWorkLimit &) {
        if (!budget.owns_budget()) throw;
        return finish(preserve_native_translation(raw_source, initial_scope, false,
            dfcn::TranslationStatus::WorkLimited));
    }
    dfcn::TranslationResult result;
    const Rule &rule = *candidate.rule;
    for (size_t at = 0; at < rule.target_capture_order.size(); ++at) {
        if (!rule.target_template_literals[at].empty())
            result.append(dfcn::TranslationResult::translated("", rule.target_template_literals[at],
                "announcement-literal"));
        const size_t field = rule.target_capture_order[at];
        if (field >= fields.size()) return finish(no_match);
        result.append(fields[field], field_offsets[field]);
    }
    if (!rule.target_template_literals.back().empty())
        result.append(dfcn::TranslationResult::translated("", rule.target_template_literals.back(),
            "announcement-literal"));
    result.source.assign(raw_source);
    result.consumed = raw_source.size();
    result.kind = initial_scope;
    result.owner = no_match.owner;
    result.policy = dfcn::TranslationPolicy::Display;
    result.resource_revision = no_match.resource_revision;
    return finish(std::move(result));
}
