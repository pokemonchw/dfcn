// Report composition consumes retained fields and complete native constructors.
// Common native constructors bind their fixed outer literals before resolving
// typed fields; they never enumerate sentence/word boundaries or search world
// objects for text that resembles one of the report's names.
std::optional<std::string> Overlay::compose_native_announcement_log_record(
        const NativeAnnouncementLogDocument &document, std::string_view source,
        int foreground, std::vector<int> &target_colors) const {
    target_colors.clear();
    if (source.empty() || source != native_announcement_display_source(document.report.source))
        return std::nullopt;
    if (auto speech = compose_native_announcement_log_speech(document, source,
            foreground, target_colors)) return speech;

    const auto append_colors = [](std::vector<int> &colors, std::string_view text, int rgb) {
        for (const unsigned char ch : text)
            if ((ch & 0xc0) != 0x80) colors.push_back(rgb);
    };
    // This is the same bound-template operation used by historical events:
    // fields already have identities and boundaries; the reviewed target owns
    // their order. No source template matcher or capture resolver runs here.
    const auto apply_rule = [&](const Rule &rule, const std::vector<std::string> &fields)
            -> std::optional<std::string> {
        if (rule.template_kinds.size() != fields.size() ||
                (!fields.empty() && rule.target_template_literals.size() !=
                    rule.target_capture_order.size() + 1)) return std::nullopt;
        std::string target;
        std::vector<int> colors;
        size_t cp = 0, capture = 0;
        for (size_t byte = 0; byte < rule.target.size();) {
            if (!rule.help_target_palettes.empty() && cp >= rule.help_target_palettes.size())
                return std::nullopt;
            const int palette = rule.help_target_palettes.empty() ? -1 : rule.help_target_palettes[cp];
            const int rgb = palette >= 0 && palette < 16 && gps_
                ? (gps_->uccolor[palette][0] << 16) | (gps_->uccolor[palette][1] << 8) |
                    gps_->uccolor[palette][2] : foreground;
            if (!fields.empty() && rule.target[byte] == '{') {
                const size_t close = rule.target.find('}', byte);
                if (close == std::string::npos || capture >= rule.target_capture_order.size())
                    return std::nullopt;
                const size_t field = rule.target_capture_order[capture++];
                if (field >= fields.size()) return std::nullopt;
                target += fields[field];
                append_colors(colors, fields[field], rgb);
                cp += close + 1 - byte;
                byte = close + 1;
            } else {
                const size_t begin = byte++;
                while (byte < rule.target.size() &&
                        (static_cast<unsigned char>(rule.target[byte]) & 0xc0) == 0x80) ++byte;
                target.append(rule.target, begin, byte - begin);
                colors.push_back(rgb);
                ++cp;
            }
        }
        if (target.empty() || capture != rule.target_capture_order.size()) return std::nullopt;
        target_colors = std::move(colors);
        return target;
    };
    const auto ui_rule = [&](std::string_view pattern) -> const Rule * {
        const auto found = ui_message_template_sources_.find(pattern);
        if (found == ui_message_template_sources_.end() || found->second < 0 ||
                static_cast<size_t>(found->second) >= rules_.size()) return nullptr;
        return &rules_[static_cast<size_t>(found->second)];
    };
    const auto scoped_rule = [&](std::string_view scope, std::string_view pattern) -> const Rule * {
        const auto found = announcement_combat_rules_.find(std::string(scope));
        if (found == announcement_combat_rules_.end()) return nullptr;
        for (const auto &[fields, rule] : found->second)
            if (rule.source == pattern) return &rule;
        return nullptr;
    };

    // Fixed complete messages need no inferred semantics or dynamic capture.
    // Reuse the loaded UI catalogue's exact trie and its palette, rather than
    // invoking the paragraph translator even for a one-line literal report.
    if (!ui_message_trie_.empty()) {
        int node = 0;
        for (const unsigned char ch : source) {
            if (native_prose_space(ch)) continue;
            const auto found = ui_message_trie_[static_cast<size_t>(node)].next.find(ch);
            if (found == ui_message_trie_[static_cast<size_t>(node)].next.end()) {
                node = -1;
                break;
            }
            node = found->second;
        }
        if (node >= 0) {
            const int index = ui_message_trie_[static_cast<size_t>(node)].rule;
            if (index >= 0 && static_cast<size_t>(index) < rules_.size() &&
                    rules_[static_cast<size_t>(index)].template_kinds.empty())
                if (auto target = apply_rule(rules_[static_cast<size_t>(index)], {})) return target;
        }
    }

    if (document.report.type == 301) {
        // GUEST_ARRIVAL owns the complete returning party and appended
        // history report. Resolve that constructor before unrelated rumor
        // productions can read "has returned. ..." as "has {book}" and
        // suspend this worker on speculative book/site dependencies.
        auto target = translate_announcement_combat(source, "fortress-arrival");
        if (target) append_colors(target_colors, *target, foreground);
        return target;
    }

    if (document.report.type == 278) {
        // SOMEBODY_GROWS_UP binds the entire post-growth unit label, including
        // an authored nickname. Preserve that native owner before any generic
        // announcement/rumor constructor can reinterpret "has" as possession.
        auto target = translate_announcement_combat(source, "fortress-announcement");
        if (target) append_colors(target_colors, *target, foreground);
        return target;
    }

    if (document.report.type == 351 && source.starts_with("\"Greetings. I am ")) {
        // 7f079c submits this complete deity pronouncement. Its optional
        // sphere and material/followers clauses are four reviewed productions,
        // not independent sentences for the generic paragraph dispatcher.
        for (const std::string_view pattern : {
                "\"Greetings. I am {p}, and I have chosen you. Seek out {p} in {e} and fulfill your destiny.\"",
                "\"Greetings. I am {p}, and I have chosen you. The remnants of creation, {s}, belong with my followers, {e}. Seek out {p} in {e} and fulfill your destiny.\"",
                "\"Greetings. I am {p}, and I have chosen you as my instrument of {r}. Seek out {p} in {e} and fulfill your destiny.\"",
                "\"Greetings. I am {p}, and I have chosen you as my instrument of {r}. The remnants of creation, {s}, belong with my followers, {e}. Seek out {p} in {e} and fulfill your destiny.\""}) {
            translation_work_step();
            const auto *rule = ui_rule(pattern);
            if (!rule || rule->template_literals.size() != rule->template_kinds.size() + 1)
                continue;
            const auto prefix = catalog_literal_end(source, 0,
                rule->template_literals.front(), rule->case_insensitive);
            if (!prefix) continue;
            std::vector<std::string_view> captures;
            size_t cursor = *prefix;
            bool complete = true;
            const auto splits_word = [&](size_t at) {
                return at > 0 && at < source.size() &&
                    ascii_word_byte(static_cast<unsigned char>(source[at - 1])) &&
                    ascii_word_byte(static_cast<unsigned char>(source[at]));
            };
            for (size_t i = 0; i < rule->template_kinds.size(); ++i) {
                const auto &before = rule->template_literals[i];
                if (!before.empty() && native_prose_space(
                        static_cast<unsigned char>(before.back())) && splits_word(cursor)) {
                    complete = false;
                    break;
                }
                const auto &literal = rule->template_literals[i + 1];
                size_t boundary = std::string_view::npos, next = 0;
                for (size_t at = cursor; at < source.size(); ++at) {
                    translation_work_step();
                    if (!literal.empty() && native_prose_space(
                            static_cast<unsigned char>(literal.front())) && splits_word(at)) continue;
                    const auto end = catalog_literal_end(source, at, literal, rule->case_insensitive);
                    if (!end || (i + 1 == rule->template_kinds.size() &&
                            !trim_view(source.substr(*end)).empty())) continue;
                    // Whitespace normalization can expose adjacent starts
                    // for the same delimiter; they own the same field end.
                    if (boundary != std::string_view::npos && *end != next) {
                        complete = false;
                        break;
                    }
                    if (boundary == std::string_view::npos) boundary = at;
                    next = *end;
                }
                if (!complete || boundary == std::string_view::npos) {
                    complete = false;
                    break;
                }
                const auto field = trim_view(source.substr(cursor, boundary - cursor));
                if (field.empty() && !adventure_divine_building_capture(*rule, i)) {
                    complete = false;
                    break;
                }
                captures.push_back(field);
                cursor = next;
            }
            if (!complete || !trim_view(source.substr(cursor)).empty()) continue;
            // No semantic leaf is touched until all boundaries belong to
            // exactly one complete production. Ambiguous generated names
            // retain the existing catalogue's typed boundary search.
            std::vector<std::string> fields;
            fields.reserve(captures.size());
            for (size_t i = 0; i < captures.size(); ++i) {
                auto field = translate_adventure_divine_capture(*rule, i, captures[i]);
                if (!field || (field->empty() && !adventure_divine_building_capture(*rule, i))) {
                    complete = false;
                    break;
                }
                fields.push_back(std::move(*field));
            }
            if (complete) return apply_rule(*rule, fields);
        }
    }

    if (document.report.type == 104) {
        std::vector<std::string> fields;
        if (const auto *rule = native_announcement_cancellation_fields(document, source, fields))
            return apply_rule(*rule, fields);
    }

    // A captured history formatter ticket proves its actual history-event ID
    // and typed fields independently of the report ID. Only a ticket owning
    // this entire report may use the same event switch as the Legends list.
    if (document.history_event && !document.history_event->native_source.empty() &&
            native_announcement_display_source(document.history_event->native_source) == source) {
        if (const auto pieces = translate_history_event(*document.history_event, false)) {
            std::string target;
            for (const auto &piece : *pieces) target += piece.target;
            if (!target.empty()) {
                append_colors(target_colors, target, foreground);
                return target;
            }
        }
    }

    // These reports already identify a complete native constructor. Binding
    // its fixed literals first avoids running the paragraph recognizer over
    // every possible actor/item/anatomy split. Translation still comes from
    // the reviewed rules and the same complete, scoped field translators.
    const auto compose_bound = [&](std::string_view scope, std::string_view pattern,
            const std::vector<std::string> &fields) -> std::optional<std::string> {
        const auto *rule = scoped_rule(scope, pattern);
        return rule ? apply_rule(*rule, fields) : std::nullopt;
    };
    const auto unique_literal = [](std::string_view text, std::string_view literal,
            size_t begin = 0) {
        const size_t at = find_template_literal(text, literal, begin, true);
        return at != std::string_view::npos &&
            find_template_literal(text, literal, at + 1, true) == std::string_view::npos
            ? at : std::string_view::npos;
    };
    const auto direct_head = [&](std::string_view text) -> std::optional<std::string> {
        // The force constructors have one complete anatomical field.
        for (const auto pattern : {"The force bends the {s}", "The force twists the {s}",
                "The force pulls the {s}"}) {
            const auto *rule = scoped_rule("head", pattern);
            if (!rule || rule->template_literals.size() != 2 ||
                    !template_literal_at(text, 0, rule->template_literals.front(), true)) continue;
            const auto body = text.substr(rule->template_literals.front().size());
            if (body.empty()) return std::nullopt;
            const auto target = translate_announcement_combat(body, "$body");
            return target ? apply_rule(*rule, {*target}) : std::nullopt;
        }

        // Shared damage appends direction, then optional equipment. Peel
        // only unique complete suffixes; punctuation/name ambiguity keeps
        // the compatibility parser instead of guessing a field boundary.
        std::string_view equipment;
        const size_t equipment_at = find_template_literal(text, " with ", 0, true);
        if (equipment_at != std::string_view::npos) {
            const size_t at = unique_literal(text, " with ");
            if (at == std::string_view::npos) return std::nullopt;
            equipment = text.substr(at + 6);
            if (equipment.empty()) return std::nullopt;
            text = text.substr(0, at);
        }
        std::string_view direction;
        for (const auto suffix : {std::string_view(" from behind"), std::string_view(" from the side")})
            if (text.size() > suffix.size() &&
                    template_literal_at(text, text.size() - suffix.size(), suffix, true)) {
                direction = suffix;
                text.remove_suffix(suffix.size());
                break;
            }
        size_t relation_at = std::string_view::npos;
        std::string_view relation;
        for (const auto marker : {std::string_view(" in the "), std::string_view(" by the ")}) {
            if (find_template_literal(text, marker, 0, true) == std::string_view::npos) continue;
            const size_t at = unique_literal(text, marker);
            if (at == std::string_view::npos) return std::nullopt;
            if (relation_at != std::string_view::npos) return std::nullopt;
            relation_at = at; relation = marker;
        }
        if (relation_at == std::string_view::npos) return std::nullopt;
        const auto object_source = text.substr(relation_at + relation.size());
        if (object_source.empty()) return std::nullopt;
        const auto prefix = text.substr(0, relation_at);
        const auto verbs = announcement_combat_rules_.find("attack-verb");
        if (verbs == announcement_combat_rules_.end()) return std::nullopt;
        const Rule *verb = nullptr;
        size_t verb_at = std::string_view::npos;
        for (const auto &[signature, candidate] : verbs->second) {
            translation_work_step();
            if (!candidate.template_kinds.empty()) continue;
            const std::string token = " " + candidate.source + " ";
            const size_t at = unique_literal(prefix, token);
            if (at == std::string_view::npos) continue;
            if (verb_at != std::string_view::npos && at != verb_at) return std::nullopt;
            if (!verb || candidate.source.size() > verb->source.size()) {
                verb = &candidate; verb_at = at;
            }
        }
        if (!verb || verb_at == 0) return std::nullopt;
        auto actor_source = prefix.substr(0, verb_at);
        const auto victim_source = prefix.substr(verb_at + verb->source.size() + 2);
        if (victim_source.empty()) return std::nullopt;
        bool silently = false;
        constexpr std::string_view silent_suffix = " silently";
        if (actor_source.size() > silent_suffix.size() &&
                template_literal_at(actor_source, actor_source.size() - silent_suffix.size(), silent_suffix, true)) {
            actor_source.remove_suffix(silent_suffix.size()); silently = true;
        }
        auto actor = translate_announcement_combat(actor_source, "actor");
        auto victim = translate_announcement_combat(victim_source, "native-announcement-unit");
        auto object = translate_announcement_combat(object_source, "object");
        if (!actor || !victim || !object) return std::nullopt;
        std::optional<std::string> verb_target = verb->target;
        if (silently) verb_target = compose_bound("attack-verb", "silently {s}", {*verb_target});
        if (!verb_target) return std::nullopt;
        auto attack = compose_bound("attack", relation == " in the "
            ? "{s} {s} in the {s}" : "{s} {s} by the {s}", {*verb_target, *victim, *object});
        if (!attack) return std::nullopt;
        if (!direction.empty()) attack = compose_bound("attack", direction == " from behind"
            ? "{s} from behind" : "{s} from the side", {*attack});
        if (!attack) return std::nullopt;
        if (!equipment.empty()) {
            const auto weapon = translate_announcement_combat(equipment, "equipment");
            if (!weapon) return std::nullopt;
            attack = compose_bound("attack", "{s} with {s}", {*attack, *weapon});
        }
        return attack ? compose_bound("head", "{s} {s}", {*actor, *attack}) : std::nullopt;
    };
    const auto direct_constructor = [&](std::string_view scope,
            const auto &accept) -> std::optional<std::string> {
        const auto found = announcement_combat_rules_.find(std::string(scope));
        const auto syntax = announcement_combat_syntax_.find(std::string(scope));
        if (found == announcement_combat_rules_.end() || syntax == announcement_combat_syntax_.end())
            return std::nullopt;
        std::unordered_map<std::string, std::optional<std::string>> heads;
        const auto damage_prefix = [&](std::string_view text) {
            // Only a finite damage predicate can follow the attack head.
            // This rejects separators inside actor/body/item names without
            // first running their expensive semantic parsers.
            for (const auto damage_scope : {"damage-verb", "damage", "damage-list"}) {
                const auto entries = announcement_combat_rules_.find(damage_scope);
                if (entries == announcement_combat_rules_.end()) continue;
                for (const auto &[fields, rule] : entries->second) {
                    translation_work_step();
                    if (std::string_view(damage_scope) == "damage-verb") {
                        if (rule.template_kinds.empty() && text.size() > rule.source.size() &&
                                text[rule.source.size()] == ' ' &&
                                template_literal_at(text, 0, rule.source, true)) return true;
                    } else {
                        const auto literal = rule.template_kinds.empty() ? std::string_view(rule.source)
                            : std::string_view(rule.template_literals.front());
                        if (!literal.empty() && template_literal_at(text, 0, literal, true)) return true;
                    }
                }
            }
            return false;
        };
        for (const int index : syntax->second.anchors.candidates(source)) {
            translation_work_step();
            const auto &[signature, rule] = found->second[static_cast<size_t>(index)];
            if (!accept(signature, rule) || rule.template_kinds.empty()) continue;
            const auto &scopes = syntax->second.fields[static_cast<size_t>(index)];
            const auto &literals = rule.template_literals;
            if (scopes.size() != rule.template_kinds.size() || literals.size() != scopes.size() + 1 ||
                    !template_literal_at(source, 0, literals.front(), true) ||
                    literals.back().size() > source.size() ||
                    !template_literal_at(source, source.size() - literals.back().size(), literals.back(), true)) continue;
            if (signature == "head,damage-list" && scopes.size() == 2 &&
                    (literals[1] == ", " || literals[1] == " and ")) {
                // A damage list repeats the same comma/and delimiters that
                // separate it from the head. Enumerate only those fixed
                // delimiter locations, never words within an actor/attack.
                // Publish only one complete semantic binding. A second valid
                // binding goes through the original parser's full policy.
                std::optional<std::vector<std::string>> selected;
                const size_t first = literals.front().size();
                const size_t last = source.size() - literals.back().size();
                for (size_t at = find_template_literal(source, literals[1], first, true);
                        at != std::string_view::npos && at < last;
                        at = find_template_literal(source, literals[1], at + 1, true)) {
                    translation_work_step();
                    const size_t tail_at = at + literals[1].size();
                    if (at <= first || tail_at >= last) continue;
                    const auto tail = source.substr(tail_at, last - tail_at);
                    if (!damage_prefix(tail)) continue;
                    const auto head = source.substr(first, at - first);
                    if (!announcement_combat_field_edges_fit("head", head) ||
                            !announcement_combat_field_edges_fit("damage-list", tail)) continue;
                    auto cached = heads.find(std::string(head));
                    if (cached == heads.end())
                        cached = heads.emplace(std::string(head), direct_head(head)).first;
                    if (!cached->second) continue;
                    const auto damage = translate_announcement_combat(tail, "damage-list");
                    if (!damage || damage->empty()) continue;
                    if (selected) return std::nullopt;
                    selected = std::vector<std::string>{*cached->second, *damage};
                }
                if (selected) return apply_rule(rule, *selected);
                continue;
            }
            std::vector<std::string_view> fields;
            size_t at = literals.front().size();
            for (size_t field = 0; field < scopes.size(); ++field) {
                size_t end = source.size() - literals.back().size();
                if (field + 1 < scopes.size()) {
                    const auto &separator = literals[field + 1];
                    // Blank separators recreate the combinatorial actor /
                    // attack problem; only direct_head owns that constructor.
                    if (trim_view(separator).empty()) break;
                    end = unique_literal(source, separator, at);
                }
                if (end == std::string_view::npos || end <= at || end > source.size() ||
                        !announcement_combat_field_edges_fit(scopes[field], source.substr(at, end - at))) break;
                fields.push_back(source.substr(at, end - at));
                at = end + literals[field + 1].size();
            }
            if (fields.size() != scopes.size() || at != source.size()) continue;
            std::vector<std::string> targets;
            for (size_t field = 0; field < fields.size(); ++field) {
                // A bound unit field keeps the complete constructor's name
                // policy. A standalone unit probe deliberately has a more
                // restrictive policy and would repeat this work on fallback.
                const std::string_view field_scope = scopes[field] == "unit" || scopes[field] == "$unit"
                    ? (scope == "adventure-announcement" ? "native-adventure-announcement-unit"
                        : "native-announcement-unit") : std::string_view(scopes[field]);
                auto target = scopes[field] == "head" ? direct_head(fields[field])
                    : translate_announcement_combat(fields[field], field_scope);
                if (!target || target->empty()) break;
                targets.push_back(std::move(*target));
            }
            if (targets.size() == fields.size()) return apply_rule(rule, targets);
        }
        return std::nullopt;
    };
    if (document.report.type >= 6 && document.report.type <= 48) {
        if (auto target = direct_constructor("sentence", [&](std::string_view signature, const Rule &) {
                if (document.report.type == 38)
                    return signature == "head" || signature.starts_with("head,");
                // A whole injury list is a small typed field, not a retry of
                // the complete combat-sentence catalogue.
                return signature != "$message" && signature != "head" && !signature.starts_with("head,");
            })) return target;
    } else if (document.report.type == 135 || document.report.type == 232 ||
            (document.report.type >= 105 && document.report.type <= 107)) {
        if (auto target = direct_constructor("adventure-announcement", [&](std::string_view, const Rule &rule) {
                if (document.report.type == 135) return rule.source == "You butcher {s}.";
                if (document.report.type >= 105 && document.report.type <= 107)
                    return rule.source == "{s} has been struck down.";
                return rule.source.find("pick") != std::string::npos ||
                    rule.source.find("pull off") != std::string::npos ||
                    rule.source.find("pulls off") != std::string::npos;
            })) return target;
    } else if (document.report.type >= 0 && document.report.type != 104 &&
            document.report.type != 233 && document.report.type != 234 &&
            document.report.type != 258 &&
            !native_original_speech_source(source)) {
        // The popup admits the complete announcement queue, not a short list
        // of player actions. Every reviewed constructor with a fixed opening
        // can bind its typed fields here, including Your/The preconditions,
        // containers, ammunition, environment and other native action branches.
        // Open actor/sentence productions retain the full grammar's ambiguity
        // handling; repeated separators still fall back to that same grammar.
        if (auto target = direct_constructor("adventure-announcement",
                [](std::string_view, const Rule &rule) {
                    return !rule.template_literals.empty() &&
                        !trim_view(rule.template_literals.front()).empty();
                })) return target;
    }
    // Intermediate bound rules may have populated their palettes before an
    // unresolved typed leaf. Only a complete report publishes target colors.
    target_colors.clear();

    const auto &owned = document.owned_fields;
    if (!owned || owned->world != document.world || owned->type != document.report.type ||
            owned->report_id != document.report.id || owned->normalized_source != source)
        return std::nullopt;
    for (const auto &field : owned->fragments)
        if (field.ambiguous || field.length != field.source.size() || field.offset > source.size() ||
                field.length > source.size() - field.offset ||
                source.substr(field.offset, field.length) != field.source) return std::nullopt;

    const auto unit_field = [&](const NativeAnnouncementLogFragment &field)
            -> std::optional<std::string> {
        if (field.ambiguous) return std::nullopt;
        if (field.units.empty()) {
            if (owned->resource_revision == RULESETS.resource_revision() &&
                    owned->catalog_generation == native_identity_translation_catalog_generation())
                return field.target;
            return std::nullopt;
        }
        // Render the frozen typed identity with the current resources. The
        // producer's cached target may belong to an earlier dictionary load.
        std::optional<std::string> agreed;
        for (auto identity : field.units) {
            const bool authored = identity.form == NativeUnitIdentityForm::NameOnly &&
                identity.name.language < 0 && std::all_of(identity.name.words.begin(), identity.name.words.end(),
                    [](const auto &word) { return word.id.empty(); });
            if (identity.form == NativeUnitIdentityForm::NameOnly && identity.name.language >= 0)
                identity.english_name = false;
            auto target = authored ? std::optional<std::string>(native_text_to_utf8(identity.native_name))
                : translate_native_unit_identity(identity);
            if (!target || target->empty() || (agreed && *agreed != *target)) return std::nullopt;
            agreed = std::move(target);
        }
        return agreed;
    };

    switch (document.report.type) {
    case 321: { // RUMOR_SPREAD: two native unit references around one artifact.
        const NativeAnnouncementLogFragment *actor = nullptr, *recipient = nullptr;
        for (const auto &field : owned->fragments) {
            if (field.kind != NativeAnnouncementLogFragmentKind::UnitReference) return std::nullopt;
            if (field.offset == 0 && !actor) actor = &field;
            else if (field.offset + field.length + 1 == source.size() && source.back() == '.' && !recipient)
                recipient = &field;
            else return std::nullopt;
        }
        const std::string prefix = actor ? actor->source + " has revealed the presence of "
            : "Has revealed the presence of ";
        const std::string suffix = recipient ? " to " + recipient->source + "." : " to .";
        if (!source.starts_with(prefix) || !source.ends_with(suffix) ||
                source.size() <= prefix.size() + suffix.size()) return std::nullopt;
        const auto artifact = source.substr(prefix.size(), source.size() - prefix.size() - suffix.size());
        std::optional<std::string> artifact_target;
        auto item = trim_view(artifact);
        const bool described_item = item.starts_with("the ");
        if (described_item) {
            item.remove_prefix(4);
            artifact_target = translate_item_caption_grammar(item);
            if (!artifact_target) artifact_target = translate_item_description_term(item);
        }
        if (!artifact_target && trim_view(artifact).ends_with(" (copy)"))
            artifact_target = translate_item_description_term(artifact);
        if (!artifact_target && !described_item) artifact_target = translate_corpsepiece_item_name(artifact);
        if (!artifact_target && !described_item) artifact_target = translate_legends_artifact_identity(artifact);
        if (!artifact_target && !described_item) artifact_target = translate_legends_book(artifact);
        if (!artifact_target) artifact_target = translate_item_description_term(artifact);
        if (!artifact_target || artifact_target->empty()) return std::nullopt;
        std::vector<std::string> fields;
        if (actor) {
            auto target = unit_field(*actor);
            if (!target || target->empty()) return std::nullopt;
            fields.push_back(std::move(*target));
        }
        fields.push_back(std::move(*artifact_target));
        if (recipient) {
            auto target = unit_field(*recipient);
            if (!target || target->empty()) return std::nullopt;
            fields.push_back(std::move(*target));
        }
        const std::string_view pattern = actor
            ? (recipient ? "{n} has revealed the presence of {b} to {n}."
                         : "{n} has revealed the presence of {b} to .")
            : (recipient ? "Has revealed the presence of {b} to {n}."
                         : "Has revealed the presence of {b} to .");
        const auto *rule = ui_rule(pattern);
        return rule ? apply_rule(*rule, fields) : std::nullopt;
    }
    case 163: { // ADVENTURER_PET name_creator branch of REGULAR_CONVERSATION.
        if (owned->fragments.size() != 1) return std::nullopt;
        const auto &name = owned->fragments.front();
        constexpr std::string_view suffix = ". How do you like the sound of that?";
        if (name.kind != NativeAnnouncementLogFragmentKind::Name ||
                source.substr(name.offset + name.length) != suffix) return std::nullopt;
        // The current ticket owns the pet name, not an arbitrary speaker's
        // caption. An absent header or the native player pronoun is complete;
        // other speaker/recipient productions retain the compatibility path.
        const auto header = source.substr(0, name.offset);
        if (!header.empty() && header != "You: ") return std::nullopt;
        auto target_name = unit_field(name);
        if (!target_name || target_name->empty()) return std::nullopt;
        const auto *rule = scoped_rule("sentence", "{s}. How do you like the sound of that?");
        if (!rule) return std::nullopt;
        auto target = apply_rule(*rule, {*target_name});
        if (!target || header.empty()) return target;
        const auto *player_rule = scoped_rule("unit", "you");
        if (!player_rule || !player_rule->template_kinds.empty()) {
            target_colors.clear();
            return std::nullopt;
        }
        const std::string heading = player_rule->target + "：";
        std::vector<int> colors;
        append_colors(colors, heading, foreground);
        colors.insert(colors.end(), target_colors.begin(), target_colors.end());
        target_colors = std::move(colors);
        return heading + *target;
    }
    default: return std::nullopt;
    }
}
