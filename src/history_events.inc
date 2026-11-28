// Event semantics select reviewed templates; English output is used only by
// the native capture layer to verify which glyphs belong to this event.
std::optional<std::vector<LegendsTextPiece>> Overlay::translate_history_event(
        const NativeHistoryDocument &document, bool use_translation_cache) const {
    using Pieces = std::vector<LegendsTextPiece>;
    // markup_text_link_type::HEC is 11 (native parser d53279). Type 9
    // belongs to ART_IMAGE; the Legends collection tab's type is separate.
    constexpr int collection_link_type = 11;
    const auto &name_context = document.page ? document.page->data : document.event;
    // Entity WORD snapshots are owned by the document. Their complete naming
    // context remains live, just as it does for catalog titles and headings.
    // Never cache a dated generic suffix over a later complete entity name.
    const auto has_entity_names = [](const auto &self,
            const NativeHistoryEventData &event, size_t depth) -> bool {
        if (depth >= kNativeHistoryTreeDepth) return true;
        for (const auto &subject : event.subjects) {
            if (subject.kind == NativeHistoryObjectKind::Entity && subject.name.has_name)
                return true;
        }
        for (const auto &[id, child] : event.children)
            if (child && self(self, *child, depth + 1)) return true;
        return false;
    };
    const bool refresh_name_context = has_entity_names(has_entity_names, name_context, 0);
    const uint64_t parent_revision = RULESETS.resource_revision();
    if (use_translation_cache && document.sequence && !refresh_name_context) {
        const auto found = history_event_translation_cache_.find(document.sequence);
        if (found != history_event_translation_cache_.end() && found->second.parent_revision == parent_revision) {
            history_event_translation_order_.splice(history_event_translation_order_.end(),
                history_event_translation_order_, found->second.recency);
            return found->second.pieces;
        }
    }
    struct MissingField { std::string name; };
    std::string failure_detail;
    const auto compose = [&]() -> std::optional<Pieces> {
    const auto &event = document.page ? document.page->data : document.event;
    if (event.fields.contains("snapshot.incomplete")) {
        failure_detail = "native-snapshot-incomplete";
        return std::nullopt;
    }
    const bool native_title = event.fields.contains("native_title");
    const auto number = [&](std::string_view key) -> int32_t {
        const auto found = event.fields.find(key);
        if (found == event.fields.end() || found->second.size() != 1)
            throw MissingField{std::string(key)};
        return found->second.front();
    };
    const auto numbers = [&](std::string_view key) -> const std::vector<int32_t> & {
        const auto found = event.fields.find(key);
        if (found == event.fields.end()) throw MissingField{std::string(key)};
        return found->second;
    };
    const auto context_number = [&](std::string_view key) -> int32_t {
        const auto found = event.context.find(key);
        if (found == event.context.end()) throw MissingField{"context." + std::string(key)};
        return found->second;
    };
    const auto text = [&](std::string_view key) -> const std::string & {
        const auto found = event.texts.find(key);
        if (found == event.texts.end()) throw MissingField{"texts." + std::string(key)};
        return found->second;
    };
    (void)text;
    (void)number;
    (void)numbers;
    (void)context_number;
    int neutral = 0xc0c0c0;
    for (const auto &token : document.tokens)
        if (token.link_type < 0 && !trim_view(token.source).empty()) {
            neutral = token.color;
            break;
        }
    std::vector<std::shared_ptr<const dfcn::TranslationResult>> preserved_fields;
    const auto preserve_field = [&](std::string_view source, std::string_view kind) {
        auto result = preserve_native_translation(source, kind);
        result.owner = "native-history:" + std::to_string(document.sequence);
        auto shared = std::make_shared<const dfcn::TranslationResult>(std::move(result));
        preserved_fields.push_back(shared);
        return shared->target;
    };
    const auto piece = [&](std::string text, int color, size_t source_end = 0) {
        LegendsTextPiece result;
        result.target = std::move(text);
        result.foreground_rgb = color;
        result.source_end = source_end;
        for (const auto &field : preserved_fields)
            if (field->target == result.target) { result.translation_result = field; break; }
        return result;
    };
    const auto apply_rule = [&](const Rule &rule, const std::vector<Pieces> &fields)
            -> std::optional<Pieces> {
        if (rule.template_kinds.size() != fields.size()) {
            failure_detail = "template-field-count; key=" + rule.source + "; expected=" +
                std::to_string(rule.template_kinds.size()) + "; actual=" + std::to_string(fields.size());
            return std::nullopt;
        }
        if (fields.empty()) return Pieces{piece(rule.target, neutral)};
        if (rule.target_template_literals.size() != rule.target_capture_order.size() + 1) {
            failure_detail = "template-target-invalid; key=" + rule.source;
            return std::nullopt;
        }
        Pieces result;
        size_t supporting_end = 0;
        for (size_t index = 0; index < rule.target_capture_order.size(); ++index) {
            const size_t field = rule.target_capture_order[index];
            if (field >= fields.size()) {
                failure_detail = "template-capture-out-of-range; key=" + rule.source +
                    "; capture=" + std::to_string(field);
                return std::nullopt;
            }
            for (const auto &part : fields[field])
                supporting_end = std::max(supporting_end, part.source_end);
            if (!rule.target_template_literals[index].empty())
                result.push_back(piece(rule.target_template_literals[index], neutral, supporting_end));
            result.insert(result.end(), fields[field].begin(), fields[field].end());
        }
        if (!rule.target_template_literals.back().empty())
            result.push_back(piece(rule.target_template_literals.back(), neutral, supporting_end));
        return result;
    };
    const auto apply = [&](std::string_view key, const std::vector<Pieces> &fields)
            -> std::optional<Pieces> {
        // An event's title and its action can have the same English words.
        // Masterwork destruction also names its creation as a title.
        const bool title = native_title || event.native_type == 43;
        const auto &preferred = title ? history_event_title_templates_ : history_semantic_templates_;
        const auto &fallback = title ? history_semantic_templates_ : history_event_title_templates_;
        const std::string source(key);
        if (const auto found = preferred.find(source); found != preferred.end())
            return apply_rule(rules_[found->second], fields);
        if (const auto found = fallback.find(source); found != fallback.end())
            return apply_rule(rules_[found->second], fields);
        failure_detail = "template-missing; key=" + source;
        return std::nullopt;
    };
    const auto apply_bound_toml = [&](const std::string &scope, const std::string &pattern,
            const std::vector<std::pair<std::string, Pieces>> &fields = {})
            -> std::optional<Pieces> {
        std::vector<std::pair<std::string, std::string>> bindings;
        std::vector<const LegendsTextPiece *> source_pieces;
        for (const auto &[name, parts] : fields) {
            std::string value;
            for (const auto &part : parts) {
                value += part.target;
                source_pieces.insert(source_pieces.end(), part.target.size(), &part);
            }
            bindings.emplace_back(name, std::move(value));
        }
        std::vector<size_t> origins;
        const auto target = RULESETS.compose_bound_rule(scope, pattern, bindings, &origins);
        if (!target || origins.size() != target->size()) {
            failure_detail = "item-bound-rule-missing; scope=" + scope + "; key=" + pattern;
            return std::nullopt;
        }
        // The common TOML renderer owns word order. Only carry the source
        // pieces' colors/links along its byte map, including material owners.
        Pieces result;
        const LegendsTextPiece *previous = nullptr;
        for (size_t i = 0; i < target->size(); ++i) {
            const size_t origin = origins[i];
            if (origin != std::string::npos && origin >= source_pieces.size()) {
                failure_detail = "item-bound-rule-origin-invalid; scope=" + scope;
                return std::nullopt;
            }
            const auto *part = origin == std::string::npos ? nullptr : source_pieces[origin];
            if (result.empty() || part != previous) {
                result.push_back(part ? *part : piece("", neutral));
                result.back().target.clear();
                previous = part;
            }
            result.back().target.push_back((*target)[i]);
        }
        return result;
    };
    const auto scoped_apply = [&](std::string_view scope, std::string_view key,
                                  const std::vector<Pieces> &fields) -> std::optional<Pieces> {
        const auto found = announcement_combat_rules_.find(std::string(scope));
        if (found == announcement_combat_rules_.end()) {
            failure_detail = "template-scope-missing; scope=" + std::string(scope);
            return std::nullopt;
        }
        for (const auto &[capture_scopes, rule] : found->second)
            if (rule.source == key) return apply_rule(rule, fields);
        failure_detail = "scoped-template-missing; scope=" + std::string(scope) + "; key=" + std::string(key);
        return std::nullopt;
    };
    (void)scoped_apply;
    struct SiteReferenceSource {
        std::string source;
        int color = 0;
        size_t end = 0;
        int32_t subid = -1;
    };
    std::unordered_map<int32_t, std::vector<SiteReferenceSource>> site_reference_sources;
    std::unordered_map<int32_t, size_t> site_reference_source_cursors;
    for (size_t index = 0; index < document.tokens.size();) {
        const auto &first = document.tokens[index];
        if (first.link_type != 1 || first.link_id < 0) { ++index; continue; }
        SiteReferenceSource source;
        source.color = first.color;
        source.subid = first.link_subid;
        size_t end = index;
        while (end < document.tokens.size()) {
            const auto &token = document.tokens[end];
            if (token.link_type != 1 || token.link_id != first.link_id ||
                    token.link_subid != first.link_subid) break;
            // The rich-text parser stores one word per token. Only this
            // uninterrupted native link can supply a complete name: another
            // occurrence of the same Site ID must never be joined to it.
            if (!source.source.empty()) source.source += ' ';
            source.source += token.source;
            ++end;
        }
        source.end = end;
        if (!trim_view(source.source).empty())
            site_reference_sources[first.link_id].push_back(std::move(source));
        index = end;
    }
    const auto figure_species = [&](const NativeHistorySubject &figure)
            -> std::optional<std::string> {
        if (auto known = translate_creature_descriptor(figure.species)) return known;
        const auto curse = event.texts.find("figure.curse_suffix." + std::to_string(figure.id));
        const auto label = curse != event.texts.end() && !curse->second.empty()
            ? std::optional<std::string>(curse->second)
            : native_history_figure_curse_suffix(figure.id, figure.species);
        if (!label) return preserve_field(figure.species, "creature-species");
        const std::string suffix = " " + *label;
        if (!figure.species.ends_with(suffix))
            return preserve_field(figure.species, "creature-species");
        // The native formatter joins a RAW caste and a separately stored
        // interaction title. An unknown title must not invalidate the caste
        // or turn the author's entire historical event back into English.
        auto species = translate_creature_descriptor(std::string_view(
            figure.species).substr(0, figure.species.size() - suffix.size()));
        if (!species) species = preserve_field(std::string_view(figure.species).substr(
            0, figure.species.size() - suffix.size()), "creature-species");
        auto title = translate_creature_descriptor(*label);
        if (!title) title = translate_english_character_name(*label);
        if (!title || title->empty()) title = preserve_field(*label, "creature-interaction-title");
        const auto base = std::string_view(figure.species).substr(0,
            figure.species.size() - suffix.size());
        dfcn::TranslationResult species_result;
        const auto append_component = [&](std::string_view raw, const std::string &target,
                std::string_view kind, size_t offset) {
            for (const auto &field : preserved_fields)
                if (field->source == raw && field->target == target) {
                    species_result.append(*field, offset);
                    return;
                }
            species_result.append(dfcn::TranslationResult::translated(raw, target, kind), offset);
        };
        append_component(base, *species, "creature-species", 0);
        species_result.append(dfcn::TranslationResult::translated(" ", "／", "creature-title-separator"), base.size());
        append_component(*label, *title, "creature-interaction-title", base.size() + 1);
        species_result.owner = "native-history:" + std::to_string(document.sequence);
        preserved_fields.push_back(std::make_shared<const dfcn::TranslationResult>(std::move(species_result)));
        return preserved_fields.back()->target;
    };
    const auto subject = [&](NativeHistoryObjectKind kind, int32_t id, bool include_species = true,
                            int32_t subid = -1, bool prefer_name = true)
            -> std::optional<Pieces> {
        const auto found = std::find_if(event.subjects.begin(), event.subjects.end(),
            [&](const auto &value) { return value.kind == kind && value.id == id && value.subid == subid; });
        if (found == event.subjects.end()) {
            if (id == -1) return apply(native_history_unknown_subject(kind), {});
            failure_detail = "subject-missing; kind=" + std::to_string(static_cast<int>(kind)) +
                "; id=" + std::to_string(id) + "; subid=" + std::to_string(subid);
            return std::nullopt;
        }
        if (kind == NativeHistoryObjectKind::Underground &&
                event.fields.contains("subject.underground." + std::to_string(id) + ".silent")) {
            // Native b94940 deliberately prints no label for these captured
            // layer branches. A missing layer still uses its explicit label.
            return Pieces{};
        }
        std::optional<std::string> name;
        bool preserved_reference = false;
        const SiteReferenceSource *site_source = nullptr;
        const bool unnamed_figure = kind == NativeHistoryObjectKind::Figure &&
            !found->name.has_name && found->label_key.empty() && !found->species.empty();
        if (unnamed_figure) {
            // b92f10 uses the typed creature label itself when the historical
            // figure has no language name. Do not render an empty name or
            // attach the same species a second time.
            name = figure_species(*found);
        } else if (kind == NativeHistoryObjectKind::Artifact && found->native_type == 2) {
            // b94400 delegates an unnamed non-book artifact to c65450. Its
            // typed object description is captured at that exact call site.
            const auto description = event.texts.find("artifact_label." + std::to_string(id));
            if (description == event.texts.end()) return std::nullopt;
            name = translate_item_description_term(description->second);
            if (!name) name = preserve_field(description->second, "artifact-description");
        } else if (kind == NativeHistoryObjectKind::Artifact && found->native_type == 1 &&
                found->name.has_name && !found->name.first_name.empty() &&
                (found->name.nickname.empty() || found->name.nickname_mode == 1)) {
            // Book/scroll titles occupy language_name.first_name, while
            // ordinary artifacts use its WORD slots. Preserve any separate
            // nickname/WORD components through the same native name renderer.
            name = translate_legends_book(found->name.first_name);
            if (!name) name = preserve_field(found->name.first_name, "artifact-title");
            NativeHistoryName remaining = found->name;
            remaining.first_name.clear();
            const bool has_remaining = !remaining.nickname.empty() ||
                std::any_of(remaining.words.begin(), remaining.words.end(),
                    [](const auto &word) { return !word.id.empty() && word.has_form; });
            if (has_remaining) {
                const auto suffix = translate_history_name(remaining);
                if (!suffix) {
                    // The snapshot has no independent display string for
                    // the remaining WORD/nickname components. Preserve the
                    // complete native artifact field rather than guessing
                    // their source position or discarding this whole event.
                    name.reset();
                    if (!found->name.native_name.empty())
                        name = preserve_field(found->name.native_name, "artifact-identity");
                } else if (!suffix->empty()) {
                    const auto previous = std::find_if(preserved_fields.begin(), preserved_fields.end(),
                        [&](const auto &field) { return field->target == *name; });
                    if (previous != preserved_fields.end()) {
                        auto combined = **previous;
                        combined.append(dfcn::TranslationResult::translated("", "·" + *suffix,
                            "artifact-name-suffix"));
                        name = combined.target;
                        preserved_fields.push_back(std::make_shared<const dfcn::TranslationResult>(std::move(combined)));
                    } else *name += "·" + *suffix;
                }
            }
        } else if (kind == NativeHistoryObjectKind::Building && found->native_type == 6 &&
                found->label_key.empty() && (!prefer_name || !found->name.has_name)) {
            // b94387..b943b5 prints no type for an unsupported dungeon
            // subtype. Preserve that intentional empty field in every
            // building reference, while named-mode references can still
            // render a stored language name.
            name.emplace();
        } else if (!found->label_key.empty() && (kind == NativeHistoryObjectKind::Artifact || !prefer_name ||
                (!found->name.has_name && found->raw_title.empty()))) {
            const auto translated = apply(found->label_key, {});
            if (translated) {
                name.emplace();
                for (const auto &part : *translated) *name += part.target;
            }
        } else if (kind == NativeHistoryObjectKind::WrittenContent && found->raw_title.empty()) {
            // An existing written work may have no title. Missing works
            // already use label_key above; a blank title is not a failed name.
            name = translate_legends_term("Untitled");
        } else if (!found->raw_title.empty()) name = translate_legends_book(found->raw_title);
        else if (kind == NativeHistoryObjectKind::Entity && !found->name.has_name) {
            // EntityName emits no name for an existing unnamed entity. This
            // is an intentionally empty field, not an untranslated name:
            // keep composing its relationship, office and dates. Missing
            // entities have label_key and use the reviewed label above;
            // failures to translate an actual name still reject the record.
            name.emplace();
        } else if (kind == NativeHistoryObjectKind::Entity) {
            name = translate_history_entity_name(found->name, id);
        } else if (kind == NativeHistoryObjectKind::Squad) {
            name = translate_generated_squad_name(&found->name);
        }
        else if (kind == NativeHistoryObjectKind::Site) {
            const auto sources = site_reference_sources.find(id);
            if (sources != site_reference_sources.end() && !sources->second.empty()) {
                const size_t occurrence = site_reference_source_cursors[id]++;
                site_source = &sources->second[std::min(occurrence, sources->second.size() - 1)];
                // The native displayed field decides whether this occurrence
                // is phonetic, English, or a complete pair. A source already
                // present in the document cannot silently become the other
                // language's generated official name.
                name = translate_site_display(found->name, site_source->source);
                if (!name) {
                    // The native rich-text parser appends unlinked . , ? !
                    // tokens to the previous linked word. The semantic
                    // sentence template already owns that punctuation.
                    std::string_view source = trim_view(site_source->source);
                    while (!source.empty() &&
                            std::string_view(".,?!").find(source.back()) != std::string_view::npos)
                        source.remove_suffix(1);
                    if (source.size() != trim_view(site_source->source).size())
                        name = translate_site_display(found->name, source);
                }
                if (!name) name = preserve_field(site_source->source, "site-name");
            } else name = translate_site_name(found->name);
        }
        else name = translate_history_name(found->name,
            kind == NativeHistoryObjectKind::Figure || kind == NativeHistoryObjectKind::Identity);
        if (!name) {
            // A failed name parser does not revoke the native object binding.
            // Prefer one uninterrupted displayed link, never join separate
            // mentions of the same ID or guess a name from unlinked prose.
            const int expected_link = kind == NativeHistoryObjectKind::Figure ? 0 :
                kind == NativeHistoryObjectKind::Site ? 1 :
                kind == NativeHistoryObjectKind::Artifact ? 2 :
                kind == NativeHistoryObjectKind::Region ? 4 :
                kind == NativeHistoryObjectKind::Underground ? 5 :
                kind == NativeHistoryObjectKind::Entity ? 6 :
                kind == NativeHistoryObjectKind::Building ? 7 :
                kind == NativeHistoryObjectKind::Collection ? collection_link_type : -2;
            for (size_t at = 0; at < document.tokens.size() && !name; ++at) {
                const auto &first = document.tokens[at];
                if (first.link_id != id || (first.link_type != expected_link &&
                        !(kind == NativeHistoryObjectKind::Artifact && first.link_type == 3)) ||
                        (subid >= 0 && first.link_subid != subid)) continue;
                std::string native;
                for (; at < document.tokens.size(); ++at) {
                    const auto &token = document.tokens[at];
                    if (token.link_type != first.link_type || token.link_id != first.link_id ||
                            token.link_subid != first.link_subid) break;
                    if (!native.empty()) native += ' ';
                    native += token.source;
                }
                if (!native.empty()) {
                    name = preserve_field(native, "native-subject");
                    preserved_reference = true;
                }
            }
            if (!name && !found->raw_title.empty())
                name = preserve_field(found->raw_title, "native-title");
            if (!name && !found->name.native_name.empty())
                name = preserve_field(found->name.native_name, "native-subject");
            if (!name) {
                failure_detail = "subject-name-source-missing; kind=" + std::to_string(static_cast<int>(kind)) +
                    "; id=" + std::to_string(id) + "; subid=" + std::to_string(subid);
                return std::nullopt;
            }
        }
        const int link_type = kind == NativeHistoryObjectKind::Figure ? 0 :
            kind == NativeHistoryObjectKind::Site ? 1 :
            kind == NativeHistoryObjectKind::Artifact ? 2 :
            kind == NativeHistoryObjectKind::Region ? 4 :
            kind == NativeHistoryObjectKind::Underground ? 5 :
            kind == NativeHistoryObjectKind::Building ? 7 :
            kind == NativeHistoryObjectKind::Entity ? 6 :
            kind == NativeHistoryObjectKind::Collection ? collection_link_type : -2;
        int color = neutral;
        size_t last = 0;
        int native_link_type = -1, native_link_id = -1, native_link_subid = -1;
        if (site_source) {
            color = site_source->color;
            last = site_source->end;
            native_link_type = 1;
            native_link_id = id;
            native_link_subid = site_source->subid;
        }
        for (size_t index = 0; !site_source && index < document.tokens.size(); ++index) {
            const auto &token = document.tokens[index];
            if ((token.link_type == link_type ||
                    (kind == NativeHistoryObjectKind::Artifact && token.link_type == 3)) &&
                token.link_id == id &&
                (kind == NativeHistoryObjectKind::Building ? token.link_subid == subid :
                    (subid < 0 || token.link_subid == subid))) {
                color = token.color;
                last = index + 1;
                native_link_type = token.link_type;
                native_link_id = token.link_id;
                native_link_subid = token.link_subid;
            }
        }
        // A participant is identified by its native object reference. Its
        // species is independently typed and never split out of a sentence.
        Pieces result{piece(*name, color, last)};
        if (include_species && !unnamed_figure && !preserved_reference &&
                kind == NativeHistoryObjectKind::Figure && !found->species.empty()) {
            auto species = figure_species(*found);
            if (!species) species = preserve_field(found->species, "creature-species");
            auto actor = apply("the {s} {n}",
                {Pieces{piece(*species, color, last)}, result});
            if (!actor) return std::nullopt;
            for (auto &part : *actor) part.foreground_rgb = color;
            result = std::move(*actor);
        }
        // Only expose a link that DF actually placed in this document. A
        // nested event may name the same person without creating a link.
        if (native_link_type >= 0) for (auto &part : result) {
            part.native_link_type = native_link_type;
            part.native_link_id = native_link_id;
            part.native_link_subid = native_link_subid;
        }
        return result;
    };
    // Participant roles select the surrounding relation, never a new name.
    const auto polity_subject = [&](int32_t id) -> std::optional<Pieces> {
        return subject(NativeHistoryObjectKind::Entity, id);
    };
    const auto government_subject = [&](int32_t id)
            -> std::optional<Pieces> {
        return subject(NativeHistoryObjectKind::Entity, id);
    };
    const auto term = [&](std::string_view key, std::string_view scope = {}) -> std::optional<Pieces> {
        // Native enums establish the meaning before vocabulary lookup. A
        // relation's master/member/home must keep its reviewed role sense,
        // rather than a skill rank, a club member or a UI tab caption.
        if (!scope.empty()) {
            const auto scoped = legends_terms_.find(std::string(scope) + lower(std::string(key)));
            if (scoped != legends_terms_.end()) return Pieces{piece(scoped->second, neutral)};
        }
        const auto exact = legends_terms_.find(std::string(key));
        if (exact != legends_terms_.end()) return Pieces{piece(exact->second, neutral)};
        const auto folded = legends_terms_ci_.find(lower(std::string(key)));
        if (folded != legends_terms_ci_.end()) return Pieces{piece(folded->second, neutral)};
        if (const auto found = history_semantic_templates_.find(std::string(key));
                found != history_semantic_templates_.end())
            if (auto translated = apply_rule(rules_[found->second], {})) return translated;
        // A typed RAW field can use a literal from the shared vocabulary
        // without interpreting an English event sentence or invoking its grammar.
        if (const auto literal = exact_literal_translation(key))
            return Pieces{piece(*literal, neutral)};
        // Some existing literal rows use a caption spelling (Deity, Force,
        // Mercenary). This is still one exact vocabulary lookup, after the
        // typed role's scoped sense, never a substring or sentence match.
        std::string caption(key);
        if (!caption.empty() && caption.front() >= 'a' && caption.front() <= 'z') {
            caption.front() -= 'a' - 'A';
            if (const auto literal = exact_literal_translation(caption))
                return Pieces{piece(*literal, neutral)};
        }
        // wife/husband and the other spouse nouns already live in the
        // generated TSV vocabulary. Reuse that exact namespace; do not
        // invoke sentence grammar or infer a relationship from page prose.
        if (const auto spouse = creature_name_spouse.find(lower(std::string(key)));
                spouse != creature_name_spouse.end())
            return Pieces{piece(std::string(spouse->second), neutral)};
        failure_detail = "term-missing; key=" + std::string(key);
        return std::nullopt;
    };
    (void)term;
    const auto office = [&](std::string_view title) -> std::optional<Pieces> {
        const std::string scoped = "Native history office: " + lower(std::string(title));
        if (history_semantic_templates_.contains(scoped)) return apply(scoped, {});
        if (const auto label = translate_legends_office(title))
            return Pieces{piece(*label, neutral)};
        if (!title.empty()) return Pieces{piece(preserve_field(title, "native-office"), neutral)};
        failure_detail = "office-source-missing";
        return std::nullopt;
    };
    const auto structure = [&](int32_t site_id, int32_t building_id, bool prefer_name = true) {
        return subject(NativeHistoryObjectKind::Building, site_id, false, building_id, prefer_name);
    };
    (void)structure;
    const auto structure_type = [&](int32_t site_id, int32_t building_id) -> int32_t {
        for (const auto &value : event.subjects)
            if (value.kind == NativeHistoryObjectKind::Building &&
                value.id == site_id && value.subid == building_id) return value.native_type;
        throw MissingField{"structure.type"};
    };
    (void)structure_type;
    const auto peak = [&](int32_t x, int32_t y) {
        return subject(NativeHistoryObjectKind::Peak, x, false, y);
    };
    (void)peak;
    const auto construction = [&](int32_t id) {
        return subject(NativeHistoryObjectKind::Construction, id, false);
    };
    (void)construction;
    const auto item = [&](std::string_view role) -> std::optional<Pieces> {
        const std::string key = std::string("item.") + std::string(role);
        const auto tuple = event.fields.find(key);
        if (tuple != event.fields.end() && !tuple->second.empty() &&
                (tuple->second.front() == 49 || tuple->second.front() == 50)) {
            // Native item_type establishes FISH/FISH_RAW before vocabulary
            // lookup. Its race/caste/sex snapshot is independent of the
            // formatted item text; missing fields must not use prose fallback.
            const auto &identity = tuple->second;
            const auto &fish = numbers(key + ".fish");
            if (identity.size() != 6 || fish.size() != 4 ||
                    event.fields.contains(key + ".parts_incomplete")) {
                failure_detail = "item-native-fish-incomplete; key=" + key;
                return std::nullopt;
            }
            const bool raw = identity[0] == 50;
            const std::string context = raw ? "::items::fish_raw" : "::items::fish";
            using Fields = std::vector<std::pair<std::string, std::string>>;
            const auto bind = [&](const std::string &scope, const std::string &pattern,
                                  const Fields &fields = Fields{}) {
                auto value = RULESETS.compose_bound_rule(scope, pattern, fields);
                if (!value) failure_detail = "item-bound-rule-missing; scope=" + scope +
                    "; key=" + pattern;
                return value;
            };
            std::optional<std::string> label;
            if (fish[3]) {
                label = bind(context + "::main", "fish");
            } else {
                const auto caste = translate_creature_descriptor(text(key + ".fish_caste"), true);
                if (!caste) {
                    failure_detail = "item-native-caste-untranslated; key=" + key;
                    return std::nullopt;
                }
                // The native pronoun enum, not a trailing display glyph,
                // selects the same sex production used by the item grammar.
                std::string pattern = "{::creatures::caste::singular}";
                if (fish[2] == 0) pattern += ", F";
                else if (fish[2] == 1) pattern += ", M";
                label = bind(context + "::main", pattern,
                    {{"::creatures::caste::singular", *caste}});
            }
            if (!label) return std::nullopt;
            std::optional<std::string> rotten = std::string{};
            if (fish[0] & 0x100) rotten = bind(context + "::^0", "rotten ");
            if (!rotten) return std::nullopt;
            Fields fields{{"^0", *rotten}, {"main", *label}};
            if (raw) {
                const auto state = bind(context + "::^1", "raw ");
                if (!state) return std::nullopt;
                fields.emplace_back("^1", *state);
            }
            label = bind(context, raw ? "{^0}{^1}{main}" : "{^0}{main}", fields);
            if (!label) return std::nullopt;
            std::optional<std::string> quantity = std::string{};
            if (identity[4] > 1)
                quantity = bind("::items::$number", " [{#digits}]",
                    {{"#digits", std::to_string(identity[4])}});
            if (!quantity) return std::nullopt;
            label = bind("::items::with_number", "{::items::main}{::items::$number}",
                {{"::items::main", *label}, {"::items::$number", *quantity}});
            if (!label) return std::nullopt;
            std::optional<std::string> grown = std::string{};
            if (fish[1] & 4) grown = bind("::items::^0", "grown ");
            if (!grown) return std::nullopt;
            // The shared root now owns one complete designation field.
            // Keep the native grown prefix with its typed item and count;
            // the removed root-level ^0 production cannot bind this label.
            label = bind("::items", "{%item_designation:with_number}",
                {{"%item_designation:with_number", *grown + *label}});
            return label ? std::optional<Pieces>(Pieces{piece(*label, neutral)}) : std::nullopt;
        }
        if (event.fields.contains(key + ".components")) {
            // The native enum and RAW fields already establish the boundaries.
            // Finished objects share inventory's material qualifier, while
            // standalone material nouns keep their separate vocabulary.
            const auto qualifier = translate_typed_item_material_qualifier(
                text(key + ".material_prefix"), text(key + ".material_state"));
            const auto noun = term(text(key + ".type"));
            if (!qualifier || !noun) return std::nullopt;
            std::string label = *qualifier;
            for (const auto &part : *noun) label += part.target;
            if (event.fields.contains(key + ".owner") && number(key + ".owner")) {
                const auto owner = subject(NativeHistoryObjectKind::MaterialOwner,
                    number(key + ".owner_id"), false, number(key + ".owner_subid"));
                if (!owner) return std::nullopt;
                const auto owned = apply("{n}'s {s}", {*owner, Pieces{piece(label, neutral)}});
                if (!owned) return std::nullopt;
                label.clear();
                for (const auto &part : *owned) label += part.target;
            }
            // One item name is one layout piece: no padding between its
            // species, material and noun, and no invented clickable fields.
            return Pieces{piece(std::move(label), neutral)};
        }
        // The isolated native label can include a depicted subject, quality
        // or quantity, not just material/noun tokens. Share the complete item
        // grammar with captions and search; the vocabulary-only fallback
        // cannot resolve "figurine of ..." and must not reorder its subject.
        const auto label = translate_item_description_term(text(key));
        if (!label) failure_detail = "item-label-untranslated; key=" + key;
        return label ? std::optional<Pieces>(Pieces{piece(*label, neutral)}) : std::nullopt;
    };
    (void)item;
    const auto artifact_item = [&](int32_t id) -> std::optional<Pieces> {
        const auto label = translate_item_description_term(text("artifact_item." + std::to_string(id)));
        return label ? std::optional<Pieces>(Pieces{piece(*label, neutral)}) : std::nullopt;
    };
    (void)artifact_item;
    const auto material = [&]() -> std::optional<Pieces> {
        const auto &prefix = text("material.prefix");
        const auto &state = text("material.state");
        const std::string raw = prefix.empty() ? state : prefix + " " + state;
        auto translated = term(raw);
        if (!translated) {
            const auto label = translate_legends_item(raw);
            if (label) translated = Pieces{piece(*label, neutral)};
        }
        if (!translated) return std::nullopt;
        for (const auto &value : event.subjects) {
            if (value.kind != NativeHistoryObjectKind::MaterialOwner) continue;
            const auto owner = subject(value.kind, value.id, false);
            return owner ? apply("{n}'s {s}", {*owner, *translated}) : std::nullopt;
        }
        return translated;
    };
    (void)material;
    const auto join = [](Pieces &destination, const Pieces &parts) {
        destination.insert(destination.end(), parts.begin(), parts.end());
    };
    const auto story = [&](int32_t id) -> std::optional<Pieces> {
        const auto found = event.children.find(id);
        if (found == event.children.end() || !found->second) return std::nullopt;
        NativeHistoryDocument nested;
        nested.event = *found->second;
        nested.event.fields["native_title"] = {1};
        nested.tokens = document.tokens;
        if (event.native_type == 43 &&
                (nested.event.native_type < 37 || nested.event.native_type > 42)) {
            const auto source = nested.event.texts.find("native.subject-title");
            if (source == nested.event.texts.end()) return std::nullopt;
            if (source->second.empty()) return Pieces{};
            // +d0 narration is not a substitute for this child's +d8 title.
            // The six malformed/native-selector title families have dedicated
            // typed productions; every other child uses the complete original
            // title and the same grammar as STORY_EVENT menu captions.
            if (nested.event.fields.contains("native_story_title")) {
                nested.native_source = source->second;
                if (auto title = translate_history_event(nested, use_translation_cache)) return title;
            }
            const auto title = translate_legends_event(source->second, 0, false);
            return title ? std::optional<Pieces>{Pieces{piece(*title, neutral)}} : std::nullopt;
        }
        return translate_history_event(nested, use_translation_cache);
    };
    (void)story;
#include "history_semantics_collections.inc"
    if (event.fields.contains("conversation_collection")) {
        const auto title = collection_title(number("conversation_collection"));
        return title ? apply("Conversation event collection: {s}", {*title}) : std::nullopt;
    }
    if (event.fields.contains("overview_collection")) {
        const auto title = collection_title(number("overview_collection"));
        return title ? apply("Native overview collection memory {s}", {*title}) : std::nullopt;
    }
    const auto clause = [&](const HistoryEventClause &entry, int32_t data)
            -> std::optional<Pieces> {
        if (!*entry.source) return Pieces{};
        if (!entry.field) return apply(entry.source, {});
        if (entry.field == 'e') {
            // This field is a history-event COLLECTION ID, whose native
            // title interface is independent of an event's d8 title call.
            if (!event.fields.contains("collection." + std::to_string(data) + ".type"))
                return apply("during", {}); // Native keeps this word after a missing lookup.
            const auto event_title = collection_title(data);
            return event_title ? apply(entry.source, {*event_title}) : std::nullopt;
        }
        if (entry.field == 'r') {
            // The native sphere helper truncates the data to a WORD and
            // prints "no sphere" for values outside its 130 named entries.
            auto key = history_event_sphere_key(static_cast<uint16_t>(data));
            if (!key) {
                const auto missing = exact_literal_translation("no sphere");
                return missing ? apply(entry.source, {Pieces{piece(*missing, neutral)}}) : std::nullopt;
            }
            const auto found = deity_sphere_translations_.find(std::string(*key));
            return found == deity_sphere_translations_.end() ? std::nullopt :
                apply(entry.source, {Pieces{piece(found->second, neutral)}});
        }
        if (entry.field == 'v') {
            // Native b5ae45 / jump table b5b82c consumes the value enum,
            // constructing "nuances of <value>" before its belief clause.
            // Reuse the scoped value vocabulary, where e.g. truth/cunning
            // retain their established value senses rather than name senses.
            static constexpr const char *values[] = {
                "law", "loyalty", "family", "friendship", "power", "truth",
                "cunning", "eloquence", "fairness", "decorum", "tradition", "artwork",
                "cooperation", "independence", "stoicism", "introspection", "self-control",
                "tranquility", "harmony", "merriment", "craftsmanship", "martial prowess",
                "skill", "hard work", "sacrifice", "competition", "perseverance",
                "leisure time", "commerce", "romance", "nature", "peace", "knowledge",
            };
            // The native default retains an empty value after "nuances of".
            std::optional<Pieces> value = Pieces{};
            if (data >= 0 && data < static_cast<int32_t>(std::size(values)))
                value = scoped_apply("reference-value", values[data], {});
            if (!value) return std::nullopt;
            auto nuances = scoped_apply("work-reference", "nuances of {s}", {*value});
            return nuances ? apply(entry.source, {*nuances}) : std::nullopt;
        }
        if (entry.field == 't') {
            // b5b1c3 consumes a profession/topic ID, not a knowledge flag.
            // The byte table b5b8e4 maps 61..124 onto these twelve labels.
            const char *key = nullptr;
            switch (data) {
            case 61: key = "engineering"; break;
            case 69: key = "medicine"; break;
            case 113: key = "poetry"; break;
            case 114: key = "music"; break;
            case 115: key = "dance"; break;
            case 118: key = "philosophy"; break;
            case 119: key = "mathematics"; break;
            case 120: key = "History"; break;
            case 121: key = "astronomy"; break;
            case 122: key = "natural history"; break;
            case 123: key = "chemistry"; break;
            case 124: key = "geography"; break;
            default: break;
            }
            // Unknown IDs append no topic in the native formatter, but its
            // preceding shared-interest wording still belongs to the event.
            std::optional<Pieces> topic = Pieces{};
            if (key && data >= 113 && data <= 115) {
                // Shared artistic subjects use the existing concept glossary
                // (poetry = 诗歌), not the UI skill label Poetry = 作诗.
                const auto found = deity_sphere_translations_.find(key);
                if (found == deity_sphere_translations_.end()) return std::nullopt;
                topic = Pieces{piece(found->second, neutral)};
            } else if (key) topic = term(key);
            return topic ? apply(entry.source, {*topic}) : std::nullopt;
        }
        NativeHistoryObjectKind kind;
        switch (entry.field) {
        case 'n': kind = NativeHistoryObjectKind::Figure; break;
        case 'p': kind = NativeHistoryObjectKind::Entity; break;
        case 's': kind = NativeHistoryObjectKind::Site; break;
        case 'i': kind = NativeHistoryObjectKind::Artifact; break;
        default: return std::nullopt;
        }
        auto object = subject(kind, data, entry.code != 70);
        return object ? apply(entry.source, {*object}) : std::nullopt;
    };
    const auto append_clause = [&](Pieces &destination, const Pieces &parts) {
        if (parts.empty()) return;
        // Sentence punctuation belongs to Chinese composition, while every
        // word and role continues to come from the reviewed template table.
        if (!parts.front().target.starts_with("，") && !parts.front().target.starts_with("。"))
            destination.push_back(piece("，", neutral));
        join(destination, parts);
    };
    const auto event_clauses = [&]() -> std::optional<std::pair<Pieces, Pieces>> {
        // These fields use the same native dispatcher for artifact creation
        // and secret goals. Keep referenced objects and combined saint-item
        // wording in one shared composition path.
        if (event.reason == 69 && (event.circumstance == 230 || event.circumstance == 231)) {
            auto saint = subject(NativeHistoryObjectKind::Figure, event.reason_data);
            if (!saint) return std::nullopt;
            std::string key = "in order to sanctify {n}";
            if (event.circumstance == 230) key += " as the item was a favorite possession";
            else key += " by preserving a part of the body";
            auto motivation = apply(key, {*saint});
            if (!motivation) return std::nullopt;
            return std::pair<Pieces, Pieces>{std::move(*motivation), Pieces{}};
        }
        auto reason = history_event_reason_clause(event.reason);
        auto circumstance = history_event_circumstance_clause(event.circumstance);
        // The native shared supplier omits unknown selectors independently
        // in both +d0 paragraphs and +d8 titles. Keep the main event and the
        // other clause; a missing selector is not a missing translation.
        if (!reason) reason = HistoryEventClause{event.reason, "", 0};
        if (!circumstance) circumstance = HistoryEventClause{event.circumstance, "", 0};
        if (event.reason == 4 && event.reason_data == -1)
            reason = HistoryEventClause{4, "due to their cosmic similarity", 0};
        auto motivation = clause(*reason, event.reason_data);
        auto context = clause(*circumstance, event.circumstance_data);
        if (!motivation || !context) return std::nullopt;
        return std::pair<Pieces, Pieces>{std::move(*motivation), std::move(*context)};
    };

    const auto history_date = [&](int32_t year, int32_t seconds) -> std::optional<Pieces> {
    std::string date_key;
    if (year < 1) date_key = "In a time before time,";
    else if (seconds == -1) date_key = "In {d},";
    else {
        // b92640 uses signed division and suppresses season precision only
        // for tick -1. Its switch default retains the phase and year even
        // when the tick selects no season noun.
        const int season = seconds / 100800;
        const int within = seconds % 100800;
        static constexpr const char *seasons[] = {"spring", "summer", "autumn", "winter"};
        const std::string_view phase = within <= 33600 ? "early" : within <= 67200 ? "mid" : "late";
        date_key = "In the ";
        date_key += phase;
        if (season >= 0 && season < 4) {
            if (phase != "mid") date_key += " ";
            date_key += seasons[season];
        }
        date_key += " of {d},";
    }
    return apply(date_key, year < 1 ? std::vector<Pieces>{} :
        std::vector<Pieces>{Pieces{piece(std::to_string(year), neutral)}});
    };
    const auto date_phrase = [&](int32_t year, int32_t seconds) -> std::optional<Pieces> {
        auto date = history_date(year, seconds);
        if (!date) return std::nullopt;
        for (auto part = date->rbegin(); part != date->rend(); ++part) {
            if (part->target.empty()) continue;
            if (part->target.ends_with("，")) part->target.resize(part->target.size() - std::string_view("，").size());
            break;
        }
        return date;
    };
#include "history_semantics_intrigue.inc"
#include "history_semantics_diplomacy.inc"
#include "history_semantics_identities.inc"
#include "history_semantics_agreements.inc"
#include "history_semantics_commodities.inc"
#include "history_schedule_semantics.inc"
    enum class NativeSourceText { Description, Item, Instrument, Inscription, Name };
    const auto native_raw_description = [&](const std::string &raw,
            NativeSourceText kind = NativeSourceText::Description) -> std::optional<std::string> {
        // The memory field establishes whether authored source text is a RAW
        // name, description, or saved inscription. Native generated item prose
        // never enters this path: its typed fields use the compositor below.
        const std::string source = kind == NativeSourceText::Inscription
            ? normalize_art_utterance(raw) : normalize_utterance(raw);
        const std::string previous_failure = failure_detail;
        if (kind == NativeSourceText::Inscription) {
            // Translate the saved creation-time inscription, including the
            // native memorial's random choice of achievement/preference. Do
            // not reconstruct it from the figure's current state. Only this
            // complete typed result may preserve an authored native nickname;
            // ordinary literal/name fallbacks below retain their strict gate.
            auto inscription = translate_item_description_source(source, true);
            if (translation_complete_with_native_nicknames(inscription, source)) {
                failure_detail = previous_failure;
                return inscription;
            }
        }
        const auto complete = [](const std::optional<std::string> &value) {
            std::vector<uint32_t> codepoints;
            return value && !value->empty() && decode_utf8(*value, codepoints);
        };
        const auto literal = [&](const std::string &key) -> std::optional<std::string> {
            const auto parts = term(key);
            if (!parts) return std::nullopt;
            std::string result;
            for (const auto &part : *parts) result += part.target;
            return result;
        };
        auto translated = literal(source);
        // Native writers capitalize a stored name at sentence start. Undo
        // only that initial ASCII case for a whole-field vocabulary lookup;
        // proper names and the rest of their original spelling stay intact.
        if (!complete(translated) && !source.empty() && source.front() >= 'A' && source.front() <= 'Z') {
            std::string original_case = source;
            original_case.front() += 'a' - 'A';
            translated = literal(original_case);
        }
        if (!complete(translated) && (kind == NativeSourceText::Name || kind == NativeSourceText::Inscription))
            translated = translate_legends_term(source);
        if (!complete(translated) && kind == NativeSourceText::Item)
            translated = translate_item_description_term(source);
        // Instrument components are TOOL itemdefs as well as INSTRUMENT
        // itemdefs. Their authored descriptions share the instrument grammar.
        if (!complete(translated) && (kind == NativeSourceText::Item || kind == NativeSourceText::Instrument))
            translated = translate_instrument_description(source, true,
                kind == NativeSourceText::Instrument);
        if (!complete(translated) && (kind == NativeSourceText::Item || kind == NativeSourceText::Instrument))
            translated = translate_item_description_source(source, true);
        if (!complete(translated) && kind != NativeSourceText::Name)
            translated = translate_legends_text(source, false, false);
        if (!complete(translated)) {
            static constexpr const char *kinds[] = {"description", "item-description", "instrument-description",
                "saved-inscription", "raw-name"};
            if (source.empty()) return std::nullopt;
            translated = preserve_field(raw, kinds[static_cast<size_t>(kind)]);
        }
        failure_detail = previous_failure;
        return translated;
    };
#include "history_written_content_semantics.inc"
#include "history_item_improvement_semantics.inc"
#include "history_item_extra_semantics.inc"
#include "history_item_base_semantics.inc"
#include "history_item_writing_semantics.inc"
#include "history_item_slab_semantics.inc"
#include "history_page_semantics.inc"
#include "history_story_title_semantics.inc"
    auto date = history_date(event.year, event.seconds);
    if (!date) return std::nullopt;
    Pieces result = std::move(*date);

    if (event.kind == NativeHistoryEventKind::PackedRelationship) {
#include "history_semantics_relationships.inc"
    } else if (event.kind == NativeHistoryEventKind::CreateEntityPosition) {
        auto entity = subject(NativeHistoryObjectKind::Entity, event.entity_id);
        std::optional<Pieces> owner;
        if (event.actor_id >= 0) {
            auto actor = subject(NativeHistoryObjectKind::Figure, event.actor_id);
            if (!actor) return std::nullopt;
            if (event.entity_id >= 0) {
                if (!entity) return std::nullopt;
                owner = apply("{n} of {p}", {*actor, *entity});
            } else owner = std::move(actor);
        } else {
            if (!entity) return std::nullopt;
            owner = event.reason == 2 ? apply("members of {p}", {*entity}) : entity;
        }
        auto title = office(event.position);
        if (!owner || !title) return std::nullopt;
        Pieces position = std::move(*title);
        if (event.site_entity_id >= 0 && event.site_entity_id != event.entity_id) {
            auto target_entity = subject(NativeHistoryObjectKind::Entity, event.site_entity_id);
            if (!target_entity) return std::nullopt;
            auto qualified = apply("{s} within {p}", {position, *target_entity});
            if (!qualified) return std::nullopt;
            position = std::move(*qualified);
        }
        std::string_view predicate;
        switch (event.reason) {
        case -1: predicate = "created the position of {s}"; break;
        case 0: predicate = "created the position of {s} through force of argument"; break;
        case 1: predicate = "compelled the creation of the position of {s} with threats of violence"; break;
        case 2: predicate = "collaborated to create the position of {s}"; break;
        case 3: predicate = "created the position of {s}, pushed by a wave of popular support"; break;
        case 4: predicate = "created the position of {s} as a matter of course"; break;
        default: predicate = "created the position of {s}"; break;
        }
        auto action = apply(predicate, {position});
        if (!action) return std::nullopt;
        join(result, *owner);
        join(result, *action);
    } else if (event.kind == NativeHistoryEventKind::ArtifactCreated) {
        auto artifact = subject(NativeHistoryObjectKind::Artifact, event.artifact_id);
        if (!artifact) return std::nullopt;
        std::optional<Pieces> creator;
        if (event.actor_id >= 0) creator = subject(NativeHistoryObjectKind::Figure, event.actor_id);
        if (event.actor_id >= 0 && !creator) return std::nullopt;
        if (event.entity_id >= 0) {
            auto entity = subject(NativeHistoryObjectKind::Entity, event.entity_id);
            if (!entity) return std::nullopt;
            creator = creator ? apply("{a} and {a}", {*creator, *entity}) : entity;
            if (!creator) return std::nullopt;
        }
        const bool naming = (event.flags & 1) != 0;
        std::vector<Pieces> fields{*artifact};
        std::string key = naming ? "{p} received its name" : "{p} was created";
        if (event.site_id >= 0) {
            auto site = subject(NativeHistoryObjectKind::Site, event.site_id);
            if (!site) return std::nullopt;
            fields.push_back(*site);
            key += " in {p}";
        }
        if (creator) {
            fields.push_back(*creator);
            key += naming ? " from {a}" : " by {n}";
        }
        auto action = apply(key, fields);
        if (!action) return std::nullopt;
        join(result, *action);
        const auto context = event_clauses();
        if (!context) return std::nullopt;
        append_clause(result, context->first);
        append_clause(result, context->second);
    } else if (event.kind == NativeHistoryEventKind::HfGainsSecretGoal) {
        auto actor = subject(NativeHistoryObjectKind::Figure, event.actor_id);
        if (!actor) return std::nullopt;
        // Steam 53.16 RVA b6ffa0 switches on goal_type at +0x2c. Its jump
        // table at b7032c covers 2..14; every other value uses the explicit
        // inscrutable-goal branch at b702c2. Keys retain the reviewed TSV
        // wording rather than interpreting any formatted event sentence.
        std::string_view predicate;
        switch (event.goal) {
        case 2: predicate = "began dreaming of starting a family"; break;
        case 3: predicate = "came to desire to rule the world"; break;
        case 4: predicate = "began dreaming of creating a great work of art"; break;
        case 5: predicate = "began dreaming of crafting a masterwork"; break;
        case 6: predicate = "began dreaming of bringing peace to the world"; break;
        case 7: predicate = "began dreaming of becoming a legendary warrior"; break;
        case 8: predicate = "began dreaming of mastering a skill"; break;
        case 9: predicate = "began dreaming of falling in love"; break;
        case 10: predicate = "began dreaming of seeing the great natural wonders of the world"; break;
        case 11:
            // Native sex selects his/her/its. All reviewed variants share
            // this Chinese action, so its neutral semantic key is sufficient.
            predicate = "became obsessed with their own mortality and sought to extend their life by any means";
            break;
        case 12: predicate = "began dreaming of making a great discovery"; break;
        case 13: predicate = "began dreaming of attaining rank in society"; break;
        case 14: predicate = "came to desire to bathe the world in chaos"; break;
        default: predicate = "became obsessed with an inscrutable goal"; break;
        }
        auto action = apply(predicate, {});
        const auto context = event_clauses();
        if (!action || !context) return std::nullopt;
        join(result, *actor);
        if (event.goal == 11 && event.reason >= 82 && event.reason <= 88) {
            // The existing mortality family places its motivation before
            // the action in Chinese, including all gender variants.
            join(result, context->first);
            append_clause(result, *action);
        } else {
            join(result, *action);
            append_clause(result, context->first);
        }
        append_clause(result, context->second);
    } else {
        if (event.fields.empty()) return std::nullopt;
        bool translated = false;
        switch (event.native_type) {
#include "history_semantics_early.inc"
#include "history_semantics_middle.inc"
#include "history_semantics_late.inc"
#include "history_semantics_late_aux.inc"
#include "history_semantics_justice.inc"
#include "history_semantics_occasions.inc"
        default: break;
        }
        if (!translated) return std::nullopt;
    }
    auto stop = apply(".", {});
    if (!stop) return std::nullopt;
    const auto tail = std::find_if(result.rbegin(), result.rend(),
        [](const auto &part) { return !part.target.empty(); });
    if (tail == result.rend() || (!tail->target.ends_with("。") &&
            !tail->target.ends_with("！") && !tail->target.ends_with("？"))) join(result, *stop);
    return result;
    };
    std::optional<Pieces> result;
    try {
        result = compose();
    } catch (const MissingField &missing) {
        failure_detail = "field-missing; field=" + missing.name;
    }
    if (!result && document.page)
        log_line("INFO", "Native Legends page record needs semantic support: kind=" +
            std::to_string(static_cast<int>(document.page->kind)) +
            (failure_detail.empty() ? "" : "; detail=" + failure_detail));
    else if (!result)
        log_line("INFO", "Native historical event needs semantic support: id=" +
            std::to_string(document.event.id) + "; native_type=" +
            std::to_string(document.event.native_type) + "; kind=" +
            std::to_string(static_cast<int>(document.event.kind)) + "; reason=" +
            std::to_string(document.event.reason) + "; circumstance=" +
            std::to_string(document.event.circumstance) + "; goal=" +
            std::to_string(document.event.goal) +
            (failure_detail.empty() ? "" : "; detail=" + failure_detail));
    if (use_translation_cache && document.sequence && !refresh_name_context) {
        const auto found = history_event_translation_cache_.find(document.sequence);
        if (found != history_event_translation_cache_.end()) {
            found->second.pieces = result;
            found->second.parent_revision = parent_revision;
            history_event_translation_order_.splice(history_event_translation_order_.end(),
                history_event_translation_order_, found->second.recency);
        } else {
            if (history_event_translation_cache_.size() >= 2048) {
                history_event_translation_cache_.erase(history_event_translation_order_.front());
                history_event_translation_order_.pop_front();
            }
            history_event_translation_order_.push_back(document.sequence);
            history_event_translation_cache_.emplace(document.sequence,
                HistoryEventTranslation{result, parent_revision,
                    std::prev(history_event_translation_order_.end())});
        }
    }
    return result;
}
