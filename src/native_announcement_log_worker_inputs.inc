// Native-thread publication only. Workers receive immutable values and never
// consult these registries, the native report vector or a world object.
static std::string native_announcement_log_site_identity_context(const SiteReferenceIdentity &identity);
static void native_announcement_log_record_reference_request(
        NativeAnnouncementLogReferenceRequest request) {
    if (auto *requests = g_native_announcement_log_reference_requests) {
        const auto key = request.key();
        if (std::none_of(requests->begin(), requests->end(), [&](const auto &known) {
                return known.key() == key;
            })) requests->push_back(std::move(request));
    }
}
static std::optional<std::string> native_announcement_log_worker_entity_target(
        const NativeAnnouncementLogReferenceRequest &request) {
    const auto *inputs = g_native_announcement_log_worker_inputs;
    if (inputs && inputs->unit_targets_resources == RULESETS.resource_revision() &&
            inputs->unit_targets_catalog == g_overlay.native_identity_translation_catalog_generation()) {
        if (const auto found = inputs->entity_targets.find(request.key());
                found != inputs->entity_targets.end()) return found->second;
    }
    native_announcement_log_record_reference_request(request);
    throw NativeAnnouncementLogNeedsDependency{};
}
static std::shared_ptr<const SiteReferenceIdentity> native_announcement_log_worker_site_identity(
        const NativeAnnouncementLogReferenceRequest &request) {
    const auto *inputs = g_native_announcement_log_worker_inputs;
    if (inputs && inputs->unit_targets_resources == RULESETS.resource_revision() &&
            inputs->unit_targets_catalog == g_overlay.native_identity_translation_catalog_generation()) {
        if (const auto found = inputs->site_identities.find(request.key());
                found != inputs->site_identities.end()) return found->second;
    }
    native_announcement_log_record_reference_request(request);
    throw NativeAnnouncementLogNeedsDependency{};
}
static bool native_announcement_log_worker_running() noexcept {
    return g_native_announcement_log_worker_active;
}
static std::optional<std::string> native_announcement_log_worker_identity_source(
        std::string_view source, uintptr_t owner) {
    const auto *inputs = g_native_announcement_log_worker_inputs;
    if (owner || !inputs || !inputs->identity_sources_complete || !inputs->identity_sources)
        throw NativeAnnouncementLogNeedsDependency{};
    const auto found = inputs->identity_sources->find(std::string(source));
    if (found == inputs->identity_sources->end()) return std::nullopt;
    return found->second ? found->second : std::optional<std::string>(native_text_to_utf8(source));
}
static std::optional<std::string> native_announcement_log_worker_unit_target(
        const NativeUnitIdentity &unit) {
    const auto key = native_unit_identity_cache_key(unit);
    const auto *inputs = g_native_announcement_log_worker_inputs;
    if (inputs && inputs->unit_targets_resources == RULESETS.resource_revision() &&
            inputs->unit_targets_catalog == g_overlay.native_identity_translation_catalog_generation()) {
        const auto found = inputs->unit_targets.find(key);
        if (found != inputs->unit_targets.end()) return found->second;
    }
    NativeAnnouncementLogReferenceRequest request;
    request.kind = NativeAnnouncementLogReferenceRequest::Kind::Unit;
    request.unit = std::make_shared<const NativeUnitIdentity>(unit);
    request.unit_key = key;
    native_announcement_log_record_reference_request(std::move(request));
    throw NativeAnnouncementLogNeedsDependency{};
}
template<class Visitor>
static void native_announcement_log_visit_owned_units(
        const NativeAnnouncementLogDocument &document, Visitor &&visit) {
    if (document.speech_header && document.speech_header->speaker)
        visit(*document.speech_header->speaker);
    if (document.speech) {
        if (document.speech->speaker_caption_identity) visit(*document.speech->speaker_caption_identity);
        if (document.speech->recipient_caption_identity) visit(*document.speech->recipient_caption_identity);
        if (document.speech->speaker_identity) visit(*document.speech->speaker_identity);
        if (document.speech->recipient_identity) visit(*document.speech->recipient_identity);
        // Person token slots select NameOnly and the exact expanded token
        // string, rather than the reference formatter's original mode.
        for (const auto &token : document.speech->tokens) {
            const std::string_view key = token.token;
            if (key.find(":HF_LINK:") != std::string_view::npos || key.ends_with(":FIRST_NAME]"))
                continue;
            const std::optional<NativeUnitIdentity> *person = nullptr;
            if (key.starts_with("[SPEAKER:")) person = &document.speech->speaker_identity;
            else if (key.starts_with("[AUDIENCE:")) person = &document.speech->recipient_identity;
            if (!person || !*person) continue;
            auto identity = **person;
            identity.form = NativeUnitIdentityForm::NameOnly;
            identity.native_name.assign(trim_view(token.source));
            if (identity.name.uses_native_pronunciation()) identity.english_name = false;
            visit(identity);
        }
    }
    if (document.owned_fields)
        for (const auto &fragment : document.owned_fields->fragments)
            for (const auto &identity : fragment.units) {
                visit(identity);
                // The owned pet/name renderer explicitly selects original
                // language WORD pronunciation without changing its source
                // snapshot. Freeze that exact reachable rendering mode too.
                if (identity.form == NativeUnitIdentityForm::NameOnly &&
                        identity.name.uses_native_pronunciation() && identity.english_name) {
                    auto phonetic = identity; phonetic.english_name = false;
                    visit(phonetic);
                }
            }
}
static void native_announcement_log_collect_owned_unit_dependencies(
        const NativeAnnouncementLogDocument &document,
        std::vector<NativeAnnouncementLogReferenceRequest> &requests) {
    const auto *inputs = document.worker_inputs.get();
    const bool current_targets = inputs &&
        inputs->unit_targets_resources == RULESETS.resource_revision() &&
        inputs->unit_targets_catalog == g_overlay.native_identity_translation_catalog_generation();
    std::unordered_set<std::string> missing;
    const auto collect_entity = [&](const NativeHistoryName &name) {
        if (name.entity_id < 0) return;
        NativeAnnouncementLogReferenceRequest request;
        request.kind = NativeAnnouncementLogReferenceRequest::Kind::EntityId;
        request.entity_id = name.entity_id;
        auto key = request.key();
        if ((current_targets && inputs->entity_targets.contains(key)) || !missing.insert(key).second)
            return;
        requests.push_back(std::move(request));
    };
    const auto collect = [&](const NativeUnitIdentity &identity) {
        dfcn::translation_work_step(0);
        if (current_targets && inputs->unit_targets.contains(native_unit_identity_cache_key(identity)))
            return;
        // The captured unit already owns its name, role and reference parts.
        // Only live entity leaves need native publication; sending the whole
        // unit back would run all its CPU grammar on the input/render thread.
        if (identity.form != NativeUnitIdentityForm::Reference) collect_entity(identity.name);
        else for (const auto &part : identity.reference_parts) {
            if (part.kind == NativeUnitReferencePartKind::Title ||
                    part.kind == NativeUnitReferencePartKind::Name) collect_entity(part.name);
            if (part.kind == NativeUnitReferencePartKind::Role && part.entity_present)
                collect_entity(part.entity_name);
        }
    };
    native_announcement_log_visit_owned_units(document, collect);
    // The unit-record composer selects this exact NameOnly pronunciation
    // before resolving owned alternatives. Include those reachable modes in
    // the same batch, without translating unrelated creature/profession text.
    if (inputs && inputs->unit_record &&
            (document.report.type == 321 || document.report.type == 163))
        for (const auto &field : inputs->unit_record->fields)
            for (const auto &option : field.options) {
                auto identity = option.identity;
                if (identity.form == NativeUnitIdentityForm::NameOnly && identity.name.uses_native_pronunciation())
                    identity.english_name = false;
                collect(identity);
            }
}
static std::optional<std::string> native_announcement_log_worker_original_speech(
        std::string_view source) {
    const auto *inputs = g_native_announcement_log_worker_inputs;
    const auto *report = g_native_announcement_log_translation_report;
    if (!inputs || !report || !inputs->original_speech_complete)
        throw NativeAnnouncementLogNeedsDependency{};
    const auto normalized = native_announcement_display_source(source);
    if (normalized == native_announcement_display_source(report->source)) return inputs->original_speech;
    if (normalized == inputs->original_speech_body_source) return inputs->original_speech_body;
    return std::nullopt;
}
static std::shared_ptr<const NativeMissionReturnParty>
native_announcement_log_worker_mission_return(std::string_view complete_source) {
    const auto *inputs = g_native_announcement_log_worker_inputs;
    if (!inputs || !inputs->mission_return_complete)
        throw NativeAnnouncementLogNeedsDependency{};
    if (normalize_utterance(complete_source) != inputs->mission_return_source)
        return {};
    return inputs->mission_return;
}
static std::shared_ptr<const DfhackRawCreatureLabels>
native_announcement_log_worker_raw_creature_labels() {
    const auto *inputs = g_native_announcement_log_worker_inputs;
    if (!inputs || !inputs->raw_creature_labels) {
        NativeAnnouncementLogReferenceRequest request;
        request.kind = NativeAnnouncementLogReferenceRequest::Kind::RawCreatureLabels;
        native_announcement_log_record_reference_request(std::move(request));
        throw NativeAnnouncementLogNeedsDependency{};
    }
    return inputs->raw_creature_labels;
}
static std::shared_ptr<const DfhackRawCreatureLabels>
native_announcement_log_worker_raw_creature_adjectives() {
    const auto *inputs = g_native_announcement_log_worker_inputs;
    if (!inputs || !inputs->raw_creature_adjectives) {
        NativeAnnouncementLogReferenceRequest request;
        request.kind = NativeAnnouncementLogReferenceRequest::Kind::RawCreatureAdjectives;
        native_announcement_log_record_reference_request(std::move(request));
        throw NativeAnnouncementLogNeedsDependency{};
    }
    return inputs->raw_creature_adjectives;
}
static void native_announcement_log_worker_require_instrument_names() {
    const auto *inputs = g_native_announcement_log_worker_inputs;
    if (inputs && inputs->instrument_names) return;
    NativeAnnouncementLogReferenceRequest request;
    request.kind = NativeAnnouncementLogReferenceRequest::Kind::InstrumentNames;
    native_announcement_log_record_reference_request(std::move(request));
    throw NativeAnnouncementLogNeedsDependency{};
}

// Finalize an already owned snapshot without recapturing any native inputs.
// Dependency publication uses this after adding only its newly resolved leaves.
static void native_announcement_log_finish_worker_inputs(NativeAnnouncementLogWorkerInputs &inputs) {
    auto &key = inputs.context;
    key.clear();
    const auto value = [&](const auto &input) {
        key.append(reinterpret_cast<const char *>(&input), sizeof(input));
    };
    const auto text = [&](std::string_view input) {
        value(input.size()); key.append(input);
    };
    value(inputs.semantic_generation); value(inputs.identity_sources_fingerprint);
    value(bool(inputs.instrument_names));
    value(inputs.instrument_names_fingerprint);
    value(inputs.kinship_complete);
    if (inputs.kinship_record) {
        text(inputs.kinship_record->source); value(inputs.kinship_record->speaker);
        for (const auto &field : inputs.kinship_record->fields) {
            value(field.offset); value(field.length); text(field.target);
        }
    }
    if (inputs.unit_record) {
        value(inputs.unit_record->revision); value(inputs.unit_record->catalog);
        for (const auto &field : inputs.unit_record->fields) {
            value(field.offset); text(field.source); text(field.target); value(field.ambiguous);
            for (const auto &option : field.options) text(option.key);
        }
    }
    value(inputs.unit_targets_resources); value(inputs.unit_targets_catalog);
    value(inputs.unit_targets.size());
    for (const auto &[identity, target] : inputs.unit_targets) {
        text(identity); value(target.has_value());
        if (target) text(*target);
    }
    value(inputs.entity_targets.size());
    for (const auto &[request, target] : inputs.entity_targets) {
        text(request); value(target.has_value());
        if (target) text(*target);
    }
    value(inputs.site_identities.size());
    for (const auto &[request, identity] : inputs.site_identities) {
        text(request); value(bool(identity));
        if (identity) text(native_announcement_log_site_identity_context(*identity));
    }
    const bool original = inputs.original_speech.has_value();
    value(original); if (original) text(*inputs.original_speech);
    text(inputs.original_speech_body_source);
    value(inputs.original_speech_body.has_value());
    if (inputs.original_speech_body) text(*inputs.original_speech_body);
    value(inputs.mission_return_complete); text(inputs.mission_return_source);
    const bool party = bool(inputs.mission_return);
    value(party);
    if (party) {
        const auto &mission = *inputs.mission_return;
        value(mission.kind); text(mission.prefix); value(mission.units.size());
        for (const auto &unit : mission.units) text(unit);
        value(mission.generated_name.has_value());
        if (mission.generated_name) {
            const auto &name = *mission.generated_name;
            text(name.first_name); text(name.nickname); value(name.language);
            value(name.nickname_mode); value(name.type); value(name.has_name);
            value(name.entity_type); value(name.entity_id); value(name.entity_name_current);
            text(name.parent_word_id); value(name.parent_word_pos);
            value(name.site_id); value(name.site_type); value(name.site_subtype);
            text(name.site_label); text(name.native_name);
            for (const auto &word : name.words) {
                value(word.id); value(word.part_of_speech); value(word.has_form);
                text(word.english_form);
            }
        }
        text(mission.history_prefix); value(mission.history_ambiguous);
        // Both publications remain owned by this input. Pointer identity is
        // therefore stable for their entire lifetime and cannot alias a later
        // immutable publication while an old worker still retains it.
        value(reinterpret_cast<uintptr_t>(mission.history.get()));
    }
    value(inputs.raw_creatures_complete);
    value(reinterpret_cast<uintptr_t>(inputs.raw_creature_labels.get()));
    value(reinterpret_cast<uintptr_t>(inputs.raw_creature_adjectives.get()));
}

struct NativeAnnouncementLogAliasPublication {
    uintptr_t world = 0;
    uint64_t generation = 0, revision = UINT64_MAX, fingerprint = 0;
    std::shared_ptr<const std::unordered_map<std::string, std::optional<std::string>>> sources;
    uint64_t instrument_fingerprint = 0;
    std::shared_ptr<const std::unordered_map<std::string, std::string>> instruments;
    std::shared_ptr<const std::vector<std::pair<std::string, std::string>>> instrument_source;
    std::shared_ptr<const std::vector<std::pair<std::string, std::string>>> instrument_pending_names;
    std::shared_ptr<std::unordered_map<std::string, std::string>> instrument_pending;
    size_t instrument_cursor = 0;
    uint64_t instrument_pending_fingerprint = 0;
    bool instrument_matches_previous = false;
};
static NativeAnnouncementLogAliasPublication g_native_announcement_log_alias_publication;
static std::chrono::steady_clock::time_point g_native_announcement_log_capture_resume{};
static std::shared_ptr<const std::unordered_map<std::string, std::string>>
native_announcement_log_capture_instrument_inputs(bool allow_build) {
    auto &aliases = g_native_announcement_log_alias_publication;
    // The native table owns a world/vector signature and keeps the same
    // immutable pointer when its normal epoch refresh finds unchanged names.
    // Announcement draws therefore do not normalize/hash it again per frame.
    auto names = capture_native_instrument_name_snapshot(false, allow_build);
    if (names && aliases.instruments && aliases.instrument_source == names) return aliases.instruments;
    if (!allow_build) return {};
    {
        if (!aliases.instrument_pending || aliases.instrument_pending_names != names) {
            // A supported table paused inside its native capture throws the
            // pending signal and retains its cursor. A failed/unsupported
            // read instead withdraws name-admission evidence, as before; it
            // must not hold unrelated announcements in an endless retry.
            if (!names) names =
                std::make_shared<const std::vector<std::pair<std::string, std::string>>>();
            aliases.instrument_pending_names = std::move(names);
            aliases.instrument_pending = std::make_shared<std::unordered_map<std::string, std::string>>();
            aliases.instrument_cursor = 0;
            aliases.instrument_pending_fingerprint = 0;
            aliases.instrument_matches_previous = bool(aliases.instruments);
        }
        bool progressed = false;
        const auto insert = [&](std::string source, const std::string &target) {
            const auto [entry, added] = aliases.instrument_pending->emplace(std::move(source), target);
            if (!added) return;
            aliases.instrument_pending_fingerprint ^=
                native_identity_source_fingerprint(entry->first, entry->second);
            if (aliases.instrument_matches_previous) {
                const auto previous = aliases.instruments->find(entry->first);
                aliases.instrument_matches_previous = previous != aliases.instruments->end() &&
                    previous->second == entry->second;
            }
        };
        while (aliases.instrument_cursor < aliases.instrument_pending_names->size()) {
            if (progressed && g_native_announcement_log_native_capture_deadline &&
                    std::chrono::steady_clock::now() >= *g_native_announcement_log_native_capture_deadline)
                throw NativeAnnouncementLogNativeCapturePending{};
            const auto &[singular, plural] = (*aliases.instrument_pending_names)[aliases.instrument_cursor];
            const auto name = lower_native_name(singular);
            if (!name.empty()) {
                insert(name, name);
                if (!plural.empty()) insert(lower_native_name(plural), name);
            }
            ++aliases.instrument_cursor; progressed = true;
        }
        if (!aliases.instrument_matches_previous ||
                aliases.instruments->size() != aliases.instrument_pending->size())
            aliases.instruments = std::move(aliases.instrument_pending);
        aliases.instrument_fingerprint = aliases.instrument_pending_fingerprint;
        aliases.instrument_source = aliases.instrument_pending_names;
        aliases.instrument_pending.reset();
        aliases.instrument_pending_names.reset();
    }
    return aliases.instruments;
}
static std::shared_ptr<const NativeAnnouncementLogWorkerInputs>
native_announcement_log_freeze_worker_inputs(const NativeAnnouncementLogDocument &document) {
    if (g_native_announcement_log_worker_active) throw NativeAnnouncementLogNeedsDependency{};
    auto inputs = std::make_shared<NativeAnnouncementLogWorkerInputs>();
    inputs->semantic_generation = native_announcement_log_semantic_generation_value();
    auto &aliases = g_native_announcement_log_alias_publication;
    if (aliases.world != document.world || aliases.generation != inputs->semantic_generation) {
        aliases = {};
        aliases.world = document.world; aliases.generation = inputs->semantic_generation;
    }
    // Publish the report's cheap, already-owned inputs immediately. Cold RAW
    // tables are optional capabilities: only a parser that actually reads one
    // requests its exact native leaf. An unrelated sentence need not wait for
    // two whole creature tables and every generated instrument before starting.
    const auto *previous = document.worker_inputs.get();
    inputs->raw_creature_labels = previous && previous->raw_creature_labels
        ? previous->raw_creature_labels : native_dfhack_raw_creature_labels_capture(false);
    inputs->raw_creature_adjectives = previous && previous->raw_creature_adjectives
        ? previous->raw_creature_adjectives : native_dfhack_raw_creature_adjectives_capture(false);
    inputs->raw_creatures_complete = inputs->raw_creature_labels && inputs->raw_creature_adjectives;
    if (previous && previous->instrument_names) {
        inputs->instrument_names = previous->instrument_names;
        inputs->instrument_names_fingerprint = previous->instrument_names_fingerprint;
    } else if (auto instruments = native_announcement_log_capture_instrument_inputs(false)) {
        inputs->instrument_names = std::move(instruments);
        inputs->instrument_names_fingerprint = aliases.instrument_fingerprint;
    }
    {
        std::lock_guard<std::mutex> lock(g_native_unit_identity_mutex);
        // Only the source dictionary affects a detached parser. New native
        // owners or pending formatter tickets do not change these strings
        // and must not copy the whole registry during every scroll frame.
        const auto revision = g_native_unit_identity_sources_revision.load(std::memory_order_acquire);
        if (!aliases.sources || aliases.world != document.world ||
                aliases.generation != inputs->semantic_generation || aliases.revision != revision) {
            // Native draw epochs can republish exactly the same aliases.
            // Compare before allocating, and reuse the registry's maintained
            // content fingerprint instead of hashing a second full copy.
            if (!aliases.sources || *aliases.sources != g_native_unit_identity_sources)
                aliases.sources = std::make_shared<const std::unordered_map<std::string,
                    std::optional<std::string>>>(g_native_unit_identity_sources);
            aliases.world = document.world; aliases.generation = inputs->semantic_generation;
            aliases.revision = revision;
            aliases.fingerprint = g_native_unit_identity_context.load(std::memory_order_relaxed);
        }
        inputs->identity_sources = aliases.sources;
        inputs->identity_sources_fingerprint = aliases.fingerprint;
    }
    inputs->identity_sources_complete = true;
    inputs->unit_targets_resources = RULESETS.resource_revision();
    inputs->unit_targets_catalog = g_overlay.native_identity_translation_catalog_generation();
    if (document.worker_inputs &&
            document.worker_inputs->unit_targets_resources == inputs->unit_targets_resources &&
            document.worker_inputs->unit_targets_catalog == inputs->unit_targets_catalog) {
        inputs->entity_targets = document.worker_inputs->entity_targets;
        inputs->site_identities = document.worker_inputs->site_identities;
        // Actual worker requests can select additional exact formatter modes
        // beyond the eager speech/fragment enumeration. They remain owned by
        // this immutable report and must survive its next input publication.
        inputs->unit_targets = document.worker_inputs->unit_targets;
    }
    const auto &owned = document.owned_fields;
    if (owned && owned->world == document.world && owned->type == document.report.type &&
            owned->report_id == document.report.id && !owned->fragments.empty()) {
        auto record = std::make_shared<NativeAnnouncementUnitRecord>();
        record->world = document.world; record->type = document.report.type;
        record->source = owned->normalized_source;
        record->revision = owned->resource_revision; record->catalog = owned->catalog_generation;
        for (const auto &fragment : owned->fragments) {
            NativeAnnouncementUnitField field;
            field.offset = fragment.offset; field.source = fragment.source;
            field.ambiguous = fragment.ambiguous;
            if (fragment.target) field.target = *fragment.target;
            else record->revision = UINT64_MAX;
            for (const auto &identity : fragment.units)
                field.options.push_back({native_unit_identity_cache_key(identity), identity});
            record->fields.push_back(std::move(field));
        }
        inputs->unit_record = std::move(record);
    }
    if (inputs->unit_record && document.worker_inputs && document.worker_inputs->unit_record) {
        const auto &old = *document.worker_inputs->unit_record;
        const auto &raw = *inputs->unit_record;
        bool same = old.world == raw.world && old.type == raw.type && old.source == raw.source &&
            old.fields.size() == raw.fields.size() && old.revision == RULESETS.resource_revision() &&
            old.catalog == g_overlay.native_identity_translation_catalog_generation();
        for (size_t at = 0; same && at < raw.fields.size(); ++at) {
            const auto &a = old.fields[at]; const auto &b = raw.fields[at];
            same = a.offset == b.offset && a.source == b.source && a.ambiguous == b.ambiguous &&
                a.options.size() == b.options.size();
            for (size_t option = 0; same && option < a.options.size(); ++option)
                same = a.options[option].key == b.options[option].key;
        }
        if (same) inputs->unit_record = document.worker_inputs->unit_record;
    }
    const auto normalized = native_announcement_display_source(document.report.source);
    inputs->kinship_complete = !native_announcement_has_recoverable_family_field(normalized);
    {
        NativeAnnouncementLogTranslationScope owner(document.report, document.world);
        const auto key = native_announcement_log_kinship_owner_key(document.report) + normalized;
        std::lock_guard<std::mutex> lock(g_native_announcement_kinship_mutex);
        if (const auto found = g_native_announcement_log_kinship.find(key);
                found != g_native_announcement_log_kinship.end()) {
            inputs->kinship_record = found->second.record;
            inputs->kinship_complete = true;
        }
    }
    inputs->original_speech = native_original_speech_source(document.report.source);
    if (document.speech) inputs->original_speech_body_source =
        native_announcement_display_source(document.speech->rendered_body);
    else if (document.speech_header && document.speech_header->body_offset <= document.report.source.size())
        inputs->original_speech_body_source = native_announcement_display_source(
            std::string_view(document.report.source).substr(document.speech_header->body_offset));
    if (!inputs->original_speech_body_source.empty())
        inputs->original_speech_body = native_original_speech_source(inputs->original_speech_body_source);
    inputs->original_speech_complete = true;
    inputs->mission_return_source = normalize_utterance(document.report.source);
    inputs->mission_return = capture_native_announcement_log_mission_return(document.report.source);
    inputs->mission_return_complete = true;
    native_announcement_log_finish_worker_inputs(*inputs);
    if (document.worker_inputs && document.worker_inputs->context == inputs->context)
        return document.worker_inputs;
    return inputs;
}

struct NativeAnnouncementLogPreheatDirectory {
    struct Entry {
        uintptr_t parent = 0;
        NativeAnnouncementLogParentVersion version;
        std::shared_ptr<const NativeAnnouncementLogDocument> document;
    };
    uintptr_t world = 0;
    uint64_t generation = 0, resources = 0, catalog = 0;
    int32_t next_id = -1, newest = -1, older = -1;
    int32_t visible_first = -1, visible_last = -1, nearby_before = -1, nearby_after = -1;
    size_t nearby_before_left = 0, nearby_after_left = 0;
    bool nearby_older_first = true;
    std::chrono::steady_clock::time_point next_pump{};
    bool started = false;
    std::map<int32_t, Entry> records;
};
static NativeAnnouncementLogPreheatDirectory g_native_announcement_log_preheat_directory;
static void clear_native_announcement_log_preheat() {
    g_native_announcement_log_preheat_directory = {};
    g_native_announcement_log_alias_publication = {};
    g_native_announcement_log_capture_resume = {};
}
static bool native_announcement_log_preheat_domain(uintptr_t &world,
        NativeBorrowedVector<uintptr_t> &reports) {
    if (g_native_announcement_log_worker_active) return false;
    int32_t next = -1;
    if (!native_history_copy(native_history_global(0x24ebb58), world)) return false;
    if (!world) {
        clear_native_announcement_log_preheat();
        native_announcement_log_translation_reset(0, native_announcement_log_semantic_generation_value());
        return false;
    }
    if (!native_history_read_vector(native_history_global(0x24e3850), reports) ||
            !native_history_copy(native_history_global(0x23d14f0 + 0x1123ec), next)) return false;
    auto &directory = g_native_announcement_log_preheat_directory;
    auto generation = native_announcement_log_semantic_generation_value();
    if (directory.world == world && directory.generation == generation &&
            directory.next_id >= 0 && next < directory.next_id) {
        ++g_native_announcement_log_semantic_generation;
        generation = native_announcement_log_semantic_generation_value();
        clear_native_announcement_log_documents();
    }
    const auto resources = RULESETS.resource_revision();
    const auto catalog = g_overlay.native_identity_translation_catalog_generation();
    if (directory.world != world || directory.generation != generation ||
            directory.resources != resources || directory.catalog != catalog) {
        clear_native_announcement_log_preheat();
        directory.world = world; directory.generation = generation;
        directory.resources = resources; directory.catalog = catalog;
    }
    directory.next_id = next;
    native_announcement_log_translation_reset(world, generation);
    return true;
}
static std::optional<int> native_announcement_log_preheat_foreground(
        const NativeAnnouncementLogDocument &document) {
    const auto *gps = native_graphics();
    const int palette = document.native_fields.color + (document.native_fields.bright ? 8 : 0);
    if (!gps || palette < 0 || palette >= 16) return std::nullopt;
    return (gps->uccolor[palette][0] << 16) | (gps->uccolor[palette][1] << 8) |
        gps->uccolor[palette][2];
}
static bool native_announcement_log_same_content_version(
        const NativeAnnouncementLogParentVersion &a,
        const NativeAnnouncementLogParentVersion &b) {
    auto presentation = a;
    presentation.repeats = b.repeats;
    return presentation == b;
}
static std::shared_ptr<const NativeAnnouncementLogDocument>
native_announcement_log_reuse_content_version(NativeAnnouncementLogPreheatDirectory::Entry &entry,
        uintptr_t parent, const NativeAnnouncementLogParentVersion &version) {
    if (entry.parent != parent || !entry.document ||
            !native_announcement_log_same_content_version(entry.version, version)) return {};
    if (entry.version != version) {
        // Repeat counts change native wrapping, not this report's prose or
        // frozen resolver inputs. Share its semantic job with every display.
        auto document = std::make_shared<NativeAnnouncementLogDocument>(*entry.document);
        document->report.repeats = version.repeats;
        entry.document = std::move(document);
        entry.version = version;
    }
    return entry.document;
}
static std::shared_ptr<const NativeAnnouncementLogDocument> native_announcement_log_preheated_document(
        uintptr_t parent, uintptr_t world, const NativeAnnouncementLogParentVersion &version) {
    auto &directory = g_native_announcement_log_preheat_directory;
    if (directory.world != world || directory.generation != native_announcement_log_semantic_generation_value())
        return {};
    const auto found = directory.records.find(version.id);
    if (found == directory.records.end()) return {};
    return native_announcement_log_reuse_content_version(found->second, parent, version);
}
static void native_announcement_log_retain_worker_document(
        const NativeAnnouncementLogParentVersion &version,
        const std::shared_ptr<const NativeAnnouncementLogDocument> &document) {
    auto &directory = g_native_announcement_log_preheat_directory;
    if (!document || version.id < 0 || directory.world != document->world ||
            directory.generation != document->semantic_generation) return;
    // A visible cold report and the history cursor must share one input
    // publication. Re-freezing it later against unrelated aliases would
    // cancel its in-flight worker merely because it was scrolled into view.
    directory.records.insert_or_assign(version.id,
        NativeAnnouncementLogPreheatDirectory::Entry{document->parent, version, document});
}
static std::shared_ptr<const NativeAnnouncementLogTranslationResult>
native_notification_translate_report(
        std::shared_ptr<const NativeAnnouncementLogDocument> document, int foreground) {
    if (g_native_announcement_log_worker_active || !g_overlay.translation_enabled()) return {};
    // Native producers publish immutable inputs and never run the paragraph
    // parser while holding the UI translation domain. A ready result is cheap
    // to reuse; a cold record is owned entirely by an independent worker.
    return native_announcement_log_translation_request(std::move(document), foreground, true);
}
static void native_announcement_log_prepare_visible() {
    if (g_native_announcement_log_worker_active || !g_overlay.translation_enabled()) return;
    const auto *gps = g_native_announcement_log_layer.foreground.graphics();
    if (!gps || !gps->screen || !gps->screen_top || gps->dimx <= 0 || gps->dimy <= 0) return;
    const auto &panel = g_native_announcement_log_panel;
    const int left = static_cast<int>(std::clamp<int64_t>(panel.x, 0, gps->dimx)) + 1;
    const int right = static_cast<int>(std::clamp<int64_t>(
        int64_t(panel.x) + panel.w, left - 1, gps->dimx)) - 3;
    const int top = static_cast<int>(std::clamp<int64_t>(panel.y, 0, gps->dimy));
    const int bottom = static_cast<int>(std::clamp<int64_t>(
        int64_t(panel.y) + panel.h, top, gps->dimy));
    if (left >= right || bottom - top <= 2) return;
    native_announcement_log_translation_begin_viewport();
    struct VisibleBatch {
        ~VisibleBatch() { native_announcement_log_translation_end_viewport(); }
    } batch;
    std::unordered_multimap<uintptr_t, const NativeDrawnTextRow *> by_address;
    for (const auto &plane : g_native_announcement_log_text.rows)
        for (const auto &draw : plane)
            if (draw.address) by_address.emplace(draw.address, &draw);
    for (const auto &record : g_native_announcement_log_records) {
        if (!record.document) continue;
        std::vector<int> foregrounds;
        for (const auto &row : record.rows) {
            const auto [first, last] = by_address.equal_range(row.address);
            for (auto at = first; at != last; ++at) {
                const auto &draw = *at->second;
                const auto &submitted = draw.complete_source.empty() ? draw.source : draw.complete_source;
                const auto *grid = draw.top_layer ? gps->screen_top : gps->screen;
                if (submitted != row.source || draw.source.empty() ||
                        (draw.top_layer && !gps->top_in_use) || draw.draw_grid != grid ||
                        draw.draw_dimx != gps->dimx || draw.draw_dimy != gps->dimy ||
                        draw.y <= top || draw.y >= bottom - 1 || draw.x < 0 || draw.x >= gps->dimx)
                    continue;
                int first_column = std::max(left, draw.x);
                int last_column = static_cast<int>(std::min<int64_t>(right,
                    int64_t(draw.x) + int64_t(draw.source.size())));
                if (draw.draw_clip) {
                    const auto &clip = *draw.draw_clip;
                    if (draw.y < clip.y || int64_t(draw.y) >= int64_t(clip.y) + clip.h) continue;
                    first_column = std::max(first_column, clip.x);
                    last_column = static_cast<int>(std::min<int64_t>(last_column,
                        int64_t(clip.x) + clip.w));
                }
                while (last_column > first_column &&
                        draw.source[static_cast<size_t>(last_column - draw.x - 1)] == ' ') --last_column;
                if (first_column >= last_column) continue;
                bool intact = true;
                for (int column = first_column; column < last_column; ++column) {
                    const auto *cell = grid + (static_cast<size_t>(column) * gps->dimy + draw.y) * 8;
                    const auto expected = static_cast<unsigned char>(draw.source[column - draw.x]);
                    if ((cell[0] ? cell[0] : static_cast<unsigned char>(' ')) != expected) {
                        intact = false; break;
                    }
                }
                if (!intact) continue;
                const auto *cell = grid + (static_cast<size_t>(first_column) * gps->dimy + draw.y) * 8;
                foregrounds.push_back((cell[1] << 16) | (cell[2] << 8) | cell[3]);
            }
        }
        std::sort(foregrounds.begin(), foregrounds.end());
        foregrounds.erase(std::unique(foregrounds.begin(), foregrounds.end()), foregrounds.end());
        // Publish the whole current viewport before workers select jobs. A
        // scroll updates priority without parsing or waiting for any worker.
        for (const int foreground : foregrounds)
            native_notification_translate_report(record.document, foreground);
    }
}
static void native_notification_bind_report_documents(
        std::vector<NativeAnnouncementParagraph> &paragraphs) {
    if (g_native_announcement_log_worker_active) return;
    for (auto &paragraph : paragraphs) {
        paragraph.report_document.reset();
        paragraph.report_translations.clear();
    }
    struct VisibleRow { uintptr_t address; std::string source; int foreground; };
    std::vector<VisibleRow> visible_rows;
    const auto &layer = g_native_notification_layer;
    const auto *gps = const_cast<NativeUiLayerStorage &>(layer).foreground.graphics();
    if (!gps || gps->dimx <= 0 || gps->dimy <= 0 || layer.frames.empty()) {
        paragraphs.clear(); return;
    }
    {
        std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
        const auto capture = [&](const std::vector<NativeDrawnTextRow> &draws) {
            for (const auto &draw : draws) {
                const auto *grid = draw.top_layer ? gps->screen_top : gps->screen;
                if (!draw.address || draw.source.empty() || !grid || draw.draw_grid != grid ||
                        draw.draw_dimx != gps->dimx || draw.draw_dimy != gps->dimy ||
                        draw.x < 0 || draw.x >= gps->dimx || draw.y < 0 || draw.y >= gps->dimy)
                    continue;
                bool visible = false;
                for (const auto &frame : layer.frames) {
                    if (draw.y < frame.y || int64_t(draw.y) >= int64_t(frame.y) + frame.h) continue;
                    int64_t left = std::max<int64_t>(draw.x, frame.x);
                    int64_t right = std::min<int64_t>({gps->dimx,
                        int64_t(frame.x) + frame.w,
                        int64_t(draw.x) + int64_t(std::min(draw.source.size(), size_t(gps->dimx)))});
                    if (draw.draw_clip) {
                        const auto &clip = *draw.draw_clip;
                        if (draw.y < clip.y || int64_t(draw.y) >= int64_t(clip.y) + clip.h) continue;
                        left = std::max<int64_t>(left, clip.x);
                        right = std::min<int64_t>(right, int64_t(clip.x) + clip.w);
                    }
                    bool ink = false, intact = true;
                    for (int64_t x = left; x < right; ++x) {
                        const auto ch = static_cast<unsigned char>(draw.source[size_t(x - draw.x)]);
                        if (ch == ' ') continue;
                        const size_t tile = size_t(x) * gps->dimy + draw.y;
                        const bool top = gps->screen_top && native_ui_top_layer_at(*gps, tile);
                        if (top != draw.top_layer || grid[tile * 8] != ch) { intact = false; break; }
                        ink = true;
                    }
                    if (ink && intact) { visible = true; break; }
                }
                if (visible) {
                    const size_t tile = size_t(draw.x) * gps->dimy + draw.y;
                    const bool top = gps->screen_top && native_ui_top_layer_at(*gps, tile);
                    const auto *screen = top ? gps->screen_top : gps->screen;
                    if (!screen) continue;
                    const auto *cell = screen + tile * 8;
                    visible_rows.push_back({draw.address, draw.source,
                        (cell[1] << 16) | (cell[2] << 8) | cell[3]});
                }
            }
        };
        // end_draw still owns the installed capture scope. Producer-tail
        // adoption runs after that scope has returned these same draws.
        if (g_native_notification_captions) {
            capture(g_native_drawn_text_rows);
            capture(g_native_drawn_top_text_rows);
        } else for (const auto &draws : g_native_notification_text.rows) capture(draws);
    }
    if (visible_rows.empty()) { paragraphs.clear(); return; }
    std::unordered_multimap<uintptr_t, const VisibleRow *> by_address;
    for (const auto &row : visible_rows) by_address.emplace(row.address, &row);
    std::vector<size_t> visible_paragraphs;
    for (size_t index = 0; index < paragraphs.size(); ++index) {
        const auto &paragraph = paragraphs[index];
        const bool visible = std::any_of(paragraph.rows.begin(), paragraph.rows.end(),
            [&](const auto &row) {
                const auto [first, last] = by_address.equal_range(row.address);
                return std::any_of(first, last,
                    [&](const auto &entry) { return entry.second->source == row.source; });
            });
        if (visible) visible_paragraphs.push_back(index);
    }
    // This is the current submission's copy, never the retained native hover
    // source cache. Keep complete rows for every partially visible paragraph.
    size_t kept = 0;
    for (const size_t index : visible_paragraphs) {
        if (kept != index) paragraphs[kept] = std::move(paragraphs[index]);
        ++kept;
    }
    paragraphs.resize(kept);
    if (std::none_of(paragraphs.begin(), paragraphs.end(),
            [](const auto &paragraph) { return paragraph.parent != 0; })) return;
    uintptr_t world = 0;
    NativeBorrowedVector<uintptr_t> reports;
    if (!native_announcement_log_preheat_domain(world, reports)) return;
    auto &directory = g_native_announcement_log_preheat_directory;
    for (auto &paragraph : paragraphs) {
        if (!paragraph.parent) continue;
        NativeAnnouncementLogParentVersion version;
        if (!native_announcement_log_read_version(paragraph.parent, version, true) ||
                version.id < 0) continue;
        std::shared_ptr<const NativeAnnouncementLogDocument> document;
        if (auto found = directory.records.find(version.id); found != directory.records.end())
            document = native_announcement_log_reuse_content_version(
                found->second, paragraph.parent, version);
        if (!document) {
            // Only this visible parent is frozen. Retain the publication until
            // its own native fields change; unrelated aliases on later frames
            // must not create competing service versions of the same report.
            document = native_announcement_log_freeze_document(paragraph.parent, world, version, false);
            if (!document || document->report.source != paragraph.source) continue;
            directory.records.insert_or_assign(version.id,
                NativeAnnouncementLogPreheatDirectory::Entry{paragraph.parent, version, document});
        }
        if (document->parent != paragraph.parent || document->world != world ||
                document->report.source != paragraph.source) continue;
        // The retained wrap owns its displayed repeat suffix. A completed
        // dependency may replace the directory document without rebuilding it.
        paragraph.report_document = document;
        std::vector<int> foregrounds;
        for (const auto &row : paragraph.rows) {
            const auto [first, last] = by_address.equal_range(row.address);
            for (auto at = first; at != last; ++at)
                if (at->second->source == row.source)
                    foregrounds.push_back(at->second->foreground);
        }
        std::sort(foregrounds.begin(), foregrounds.end());
        foregrounds.erase(std::unique(foregrounds.begin(), foregrounds.end()), foregrounds.end());
        // Reuse ready colors and enqueue cold ones without blocking the native
        // producer. SDL observes completed immutable results on later presents.
        for (const int foreground : foregrounds)
            if (auto translated = native_notification_translate_report(document, foreground))
                paragraph.report_translations.emplace_back(foreground, std::move(translated));
    }
}
static bool native_announcement_log_preheat_record(uintptr_t parent, uintptr_t world, bool urgent) {
    NativeAnnouncementLogParentVersion version;
    if (!native_announcement_log_read_version(parent, version, true) || version.id < 0) return false;
    auto &directory = g_native_announcement_log_preheat_directory;
    auto found = directory.records.find(version.id);
    auto document = found != directory.records.end()
        ? native_announcement_log_reuse_content_version(found->second, parent, version) : nullptr;
    bool captured = false;
    if (document && !document->worker_inputs) {
        auto ready = std::make_shared<NativeAnnouncementLogDocument>(*document);
        ready->worker_inputs = native_announcement_log_freeze_worker_inputs(*ready);
        native_announcement_log_freeze_key(*ready);
        document = std::move(ready);
        captured = true;
    } else if (!document) {
        // This pump already owns a native capture allowance. Basic inputs no
        // longer build global vocabularies, so preheat an actual CPU job here
        // instead of accumulating input-less records in the dependency queue.
        document = native_announcement_log_freeze_document(parent, world, version, true);
        captured = true;
    }
    if (!document || document->report.source.empty()) return false;
    if (captured) directory.records.insert_or_assign(version.id,
        NativeAnnouncementLogPreheatDirectory::Entry{parent, version, document});
    // An owned input is not proof its service job completed: request again
    // cheaply so a previously deferred palette/capacity can still progress.
    if (const auto foreground = native_announcement_log_preheat_foreground(*document))
        native_announcement_log_translation_request(std::move(document), *foreground, urgent);
    return captured;
}
static void native_announcement_log_preheat_submission(int type, std::string_view source) {
    if (type < 0 || source.empty() || g_native_announcement_log_worker_active) return;
    TranslationStateScope translation;
    uintptr_t world = 0;
    NativeBorrowedVector<uintptr_t> reports;
    if (!native_announcement_log_preheat_domain(world, reports)) return;
    uintptr_t previous = 0;
    for (size_t which = 0; which < 2; ++which) {
        NativeAnnouncementHistoryRow report;
        uintptr_t parent = 0;
        if (!native_announcement_log_event_tail(which, parent, report) || !parent || parent == previous ||
                report.type != type || report.source != source) continue;
        previous = parent;
        NativeAnnouncementLogParentVersion version;
        if (!native_announcement_log_read_version(parent, version, true) || version.id < 0) continue;
        auto &directory = g_native_announcement_log_preheat_directory;
        std::shared_ptr<const NativeAnnouncementLogDocument> document;
        if (auto found = directory.records.find(version.id); found != directory.records.end())
            document = native_announcement_log_reuse_content_version(found->second, parent, version);
        if (!document) {
            document = native_announcement_log_freeze_document(parent, world, version, true);
            if (!document || document->report.source != source) continue;
            directory.records.insert_or_assign(version.id,
                NativeAnnouncementLogPreheatDirectory::Entry{parent, version, document});
        }
        if (const auto foreground = native_announcement_log_preheat_foreground(*document))
            native_announcement_log_translation_request(std::move(document), *foreground, false);
    }
}
enum class NativeAnnouncementDependencyScope { Background, Log, Notifications };
static void native_notification_publish_report_document(
        const std::shared_ptr<const NativeAnnouncementLogDocument> &previous,
        const std::shared_ptr<const NativeAnnouncementLogDocument> &document,
        bool preserve_translations = false) {
    if (!previous || !document || previous->world != document->world ||
            previous->parent != document->parent || previous->report.id != document->report.id ||
            previous->report.source != document->report.source) return;
    bool published = false;
    for (auto &paragraph : g_native_notification_paragraphs) {
        const auto &current = paragraph.report_document;
        if (!current || current->world != previous->world || current->parent != previous->parent ||
                current->record_key != previous->record_key) continue;
        // Keep the retained wrap's rows and repeat suffix. Only its
        // resolver publication changed, so no native draw scan is needed.
        paragraph.report_document = document;
        if (!preserve_translations) paragraph.report_translations.clear();
        published = true;
    }
    if (published) ++g_native_notification_submission_generation;
}
static void native_announcement_log_preheat_dependencies(uintptr_t world,
        NativeAnnouncementDependencyScope scope = NativeAnnouncementDependencyScope::Background,
        std::chrono::steady_clock::time_point deadline =
            std::chrono::steady_clock::now() + std::chrono::microseconds(1500)) {
    std::vector<NativeAnnouncementLogDependency> dependencies;
    size_t attempted = 0;
    std::vector<bool> continuing_capture;
    // Return claims on failed reads, unchanged inputs, a time-slice boundary
    // and exception unwinding alike; none of those is a completed result.
    struct ReleaseDependencies {
        const std::vector<NativeAnnouncementLogDependency> &values;
        const size_t &attempted;
        const std::vector<bool> &continuing;
        ~ReleaseDependencies() {
            for (size_t index = 0; index < values.size(); ++index)
                native_announcement_log_translation_release_dependency(values[index].document,
                    index < attempted && !(index < continuing.size() && continuing[index]));
        }
    } release{dependencies, attempted, continuing_capture};
    const size_t maximum = native_announcement_log_translation_worker_count();
    dependencies.reserve(maximum);
    if (scope == NativeAnnouncementDependencyScope::Log) {
        dependencies.reserve(std::min(maximum, g_native_announcement_log_records.size()));
        for (const bool basic : {true, false})
            for (const auto &record : g_native_announcement_log_records) {
                if (dependencies.size() >= maximum) break;
                if (!record.document || record.document->world != world ||
                        basic != !record.document->worker_inputs) continue;
                auto dependency = native_announcement_log_translation_visible_dependency(record.document);
                if (!dependency) continue;
                dependencies.push_back(std::move(*dependency));
            }
    } else {
        // The producer has already frozen this notification's visible parents.
        // Collect their pending leaves before publishing any replacement, so
        // one publication can advance the whole visible batch. Retained
        // notifications can resume these same leaves from Present as well.
        if (g_native_notification_layer.ready) {
            dependencies.reserve(maximum);
            for (const bool basic : {true, false})
                for (const auto &paragraph : g_native_notification_paragraphs) {
                    if (dependencies.size() >= maximum) break;
                    const auto &document = paragraph.report_document;
                    if (!document || document->world != world || basic != !document->worker_inputs) continue;
                    auto dependency = native_announcement_log_translation_visible_dependency(document);
                    if (dependency) dependencies.push_back(std::move(*dependency));
                }
        }
        if (scope == NativeAnnouncementDependencyScope::Background && dependencies.size() < maximum) {
            auto background = native_announcement_log_translation_dependencies(maximum - dependencies.size());
            dependencies.insert(dependencies.end(), std::make_move_iterator(background.begin()),
                std::make_move_iterator(background.end()));
        }
    }
    const auto dependency_order = [](const NativeAnnouncementLogDependency &dependency) {
        if (dependency.document && !dependency.document->worker_inputs) return 0;
        const bool vocabulary = std::any_of(dependency.references.begin(), dependency.references.end(),
            [](const auto &request) {
                using Kind = NativeAnnouncementLogReferenceRequest::Kind;
                return request.kind == Kind::RawCreatureLabels || request.kind == Kind::RawCreatureAdjectives ||
                    request.kind == Kind::InstrumentNames;
            });
        return vocabulary ? 2 : 1;
    };
    std::stable_sort(dependencies.begin(), dependencies.end(), [&](const auto &a, const auto &b) {
        return dependency_order(a) < dependency_order(b);
    });
    continuing_capture.resize(dependencies.size(), false);
    struct CaptureSlice {
        const std::chrono::steady_clock::time_point *previous =
            g_native_announcement_log_native_capture_deadline;
        explicit CaptureSlice(const std::chrono::steady_clock::time_point &end) {
            g_native_announcement_log_native_capture_deadline = &end;
        }
        ~CaptureSlice() { g_native_announcement_log_native_capture_deadline = previous; }
    };
    const auto continue_capture = [&] {
        continuing_capture[attempted - 1] = true;
        // Multiple producer/Present entry points can ask for the same native
        // leaf back-to-back. Yield until the next pump instead of spending a
        // fresh 1.5 ms slice in each entry point of one displayed frame.
        g_native_announcement_log_capture_resume =
            std::chrono::steady_clock::now() + std::chrono::milliseconds(4);
    };
    struct PublishVisibleInputs {
        bool changed = false;
        ~PublishVisibleInputs() {
            if (!changed) return;
            // A dependency batch changes this retained draw once. Serializing
            // every visible source/backdrop after each individual report made
            // the native slice grow with both page size and dependency count.
            g_native_announcement_log_source_context_valid = false;
            try {
                g_native_announcement_log_source_context = native_announcement_log_source_key();
                g_native_announcement_log_source_context_valid = g_native_announcement_log_resources_valid;
            } catch (...) { g_native_announcement_log_source_context.clear(); }
            ++g_native_announcement_log_submission;
        }
    } publication;
    for (const auto &dependency : dependencies) {
        const auto now = std::chrono::steady_clock::now();
        if (now >= deadline || (now < g_native_announcement_log_capture_resume &&
                dependency.document && dependency.document->worker_inputs)) break;
        ++attempted;
        CaptureSlice capture_slice(deadline);
        try {
        const auto &requested = dependency.document;
        if (!requested || requested->world != world) continue;
        NativeAnnouncementLogParentVersion version;
        if (!native_announcement_log_read_version(requested->parent, version, true) ||
                version.id != requested->report.id) continue;
        auto &directory = g_native_announcement_log_preheat_directory;
        auto current = directory.records.find(version.id);
        std::shared_ptr<const NativeAnnouncementLogDocument> confirmed;
        if (current != directory.records.end()) confirmed = native_announcement_log_reuse_content_version(
            current->second, requested->parent, version);
        if (!confirmed) confirmed = native_announcement_log_freeze_document(requested->parent, world, version, false);
        if (!confirmed) continue;
        const auto &a = confirmed->report; const auto &b = requested->report;
        if (a.type != b.type || a.id != b.id ||
                a.continued != b.continued || a.identity != b.identity || a.pool != b.pool ||
                a.source != b.source || confirmed->native_fields != requested->native_fields) {
            directory.records.insert_or_assign(version.id,
                NativeAnnouncementLogPreheatDirectory::Entry{requested->parent, version, confirmed});
            native_notification_publish_report_document(requested, confirmed);
            if (const auto foreground = native_announcement_log_preheat_foreground(*confirmed))
                native_announcement_log_translation_request(std::move(confirmed), *foreground, true);
            continue;
        }
        // A visible document can arrive before the incremental history cursor
        // reaches it. Its queued dependency owns the current service version;
        // adopt it only after the exact native record above has been proved.
        directory.records.insert_or_assign(version.id,
            NativeAnnouncementLogPreheatDirectory::Entry{requested->parent, version, requested});
        // Recover only this frozen report's typed inputs. This is not the
        // paragraph translator, a history search or a traversal of other UI.
        NativeAnnouncementLogTranslationScope owner(requested->report, world);
        NativeAnnouncementLogDocumentScope record(*requested);
        const auto source = native_announcement_display_source(requested->report.source);
        if ((!requested->worker_inputs || !requested->worker_inputs->kinship_complete) &&
                native_announcement_has_recoverable_family_field(source))
            (void)native_announcement_log_kinship_record(source);
        auto made = std::make_shared<NativeAnnouncementLogDocument>(*requested);
        made->report.repeats = version.repeats;
        // Explicit leaf requests already carry a complete frozen report.
        // Do not recapture every global vocabulary or unrelated alias merely
        // to append a government/site target to that immutable publication.
        if (!made->worker_inputs || dependency.references.empty())
            made->worker_inputs = native_announcement_log_freeze_worker_inputs(*made);
        if (made->worker_inputs && !dependency.references.empty()) {
            auto inputs = std::make_shared<NativeAnnouncementLogWorkerInputs>(*made->worker_inputs);
            size_t resolved = 0;
            try {
            for (const auto &request : dependency.references) {
                if (resolved && std::chrono::steady_clock::now() >= deadline) break;
                const auto key = request.key();
                if (request.kind == NativeAnnouncementLogReferenceRequest::Kind::Entity ||
                        request.kind == NativeAnnouncementLogReferenceRequest::Kind::EntityId) {
                    if (inputs->entity_targets.contains(key)) continue;
                    auto target = g_overlay.native_announcement_log_capture_entity_reference(request);
                    dfcn::translation_work_step(0);
                    inputs->entity_targets.emplace(key, std::move(target));
                } else if (request.kind == NativeAnnouncementLogReferenceRequest::Kind::Site) {
                    if (inputs->site_identities.contains(key)) continue;
                    auto identity = g_overlay.native_announcement_log_capture_site_reference(
                        request.source, request.english_field);
                    dfcn::translation_work_step(0);
                    inputs->site_identities.emplace(key, std::move(identity));
                } else if (request.kind == NativeAnnouncementLogReferenceRequest::Kind::Unit) {
                    if (!request.unit || request.unit_key != native_unit_identity_cache_key(*request.unit) ||
                            inputs->unit_targets.contains(request.unit_key)) continue;
                    auto target = g_overlay.translate_native_unit_identity(*request.unit);
                    dfcn::translation_work_step(0);
                    inputs->unit_targets.emplace(request.unit_key, std::move(target));
                } else if (request.kind == NativeAnnouncementLogReferenceRequest::Kind::RawCreatureLabels) {
                    if (inputs->raw_creature_labels) continue;
                    inputs->raw_creature_labels = native_dfhack_raw_creature_labels();
                    inputs->raw_creatures_complete = inputs->raw_creature_labels && inputs->raw_creature_adjectives;
                } else if (request.kind == NativeAnnouncementLogReferenceRequest::Kind::RawCreatureAdjectives) {
                    if (inputs->raw_creature_adjectives) continue;
                    inputs->raw_creature_adjectives = native_dfhack_raw_creature_adjectives();
                    inputs->raw_creatures_complete = inputs->raw_creature_labels && inputs->raw_creature_adjectives;
                } else if (request.kind == NativeAnnouncementLogReferenceRequest::Kind::InstrumentNames) {
                    if (inputs->instrument_names) continue;
                    inputs->instrument_names = native_announcement_log_capture_instrument_inputs(true);
                    inputs->instrument_names_fingerprint =
                        g_native_announcement_log_alias_publication.instrument_fingerprint;
                }
                ++resolved;
            }
            } catch (const NativeAnnouncementLogNativeCapturePending &) {
                // The cold index made progress but has not yet proved a
                // result/miss. Retain earlier complete leaves and resume the
                // same native cursor next frame without failure backoff.
                continue_capture();
            }
            // Only the leaves actually requested by a worker need native
            // resolution. Eagerly translating every possible identity mode
            // would serialize a whole page behind the input/render thread.
            native_announcement_log_finish_worker_inputs(*inputs);
            made->worker_inputs = std::move(inputs);
        }
        // All whole-field composition remains on the worker. It now renders
        // unit_record options through the exact targets above, without a
        // second native-thread rendering of the same identities.
        if (requested->worker_inputs && made->worker_inputs &&
                requested->worker_inputs->context == made->worker_inputs->context) continue;
        native_announcement_log_freeze_key(*made);
        directory.records.insert_or_assign(version.id,
            NativeAnnouncementLogPreheatDirectory::Entry{requested->parent, version, made});
        native_notification_publish_report_document(requested, made, true);
        bool published = false;
        for (auto &visible : g_native_announcement_log_records) {
            const auto &current_document = visible.document;
            if (!current_document || current_document->world != made->world ||
                    current_document->parent != made->parent || current_document->report.id != made->report.id ||
                    current_document->report.type != made->report.type ||
                    current_document->report.identity != made->report.identity ||
                    current_document->report.pool != made->report.pool ||
                    current_document->report.repeats != made->report.repeats ||
                    current_document->report.continued != made->report.continued ||
                    current_document->report.source != made->report.source ||
                    current_document->native_fields != made->native_fields) continue;
            try {
                auto updated = std::make_shared<NativeAnnouncementLogDocument>(*current_document);
                updated->worker_inputs = made->worker_inputs;
                updated->record_key = made->record_key;
                visible.document = std::move(updated);
                published = true;
            } catch (const std::bad_alloc &) {
                // Other already updated records still require a new source
                // publication even if this individual copy cannot be made.
            }
        }
        if (published) {
            // Publish dependency readiness into this exact retained native
            // draw. Waiting for another native frame would keep requesting
            // its old input version from every repeated Present.
            publication.changed = true;
        }
        // The visible allocation can retain this same native parent. Force
        // its next cheap lookup to adopt the new immutable publication.
        auto &visible = native_announcement_log_document_cache();
        if (const auto found = visible.documents.find(requested->parent); found != visible.documents.end()) {
            visible.bytes -= found->second.record->bytes;
            visible.order.erase(found->second.use);
            visible.documents.erase(found);
        }
        if (visible.large_document && visible.large_document->document->parent == requested->parent)
            visible.large_document.reset();
        if (const auto foreground = native_announcement_log_preheat_foreground(*made))
            native_announcement_log_translation_request(std::move(made), *foreground,
                published || scope != NativeAnnouncementDependencyScope::Background);
        } catch (const NativeAnnouncementLogNativeCapturePending &) {
            // Global vocabularies retain their partially captured owned
            // values. Publish no incomplete input/miss, and retry the same
            // service claim without its ordinary dependency failure backoff.
            continue_capture();
        }
    }
}
static void native_announcement_log_prepare_dependencies() {
    if (g_native_announcement_log_worker_active) return;
    TranslationStateScope translation;
    uintptr_t world = 0;
    if (!native_announcement_current_world(world) || !world) return;
    native_announcement_log_preheat_dependencies(world, NativeAnnouncementDependencyScope::Log);
}
static void native_notification_prepare_dependencies() {
    if (g_native_announcement_log_worker_active || !g_native_notification_layer.ready) return;
    TranslationStateScope translation;
    uintptr_t world = 0;
    if (!native_announcement_current_world(world) || !world) return;
    native_announcement_log_preheat_dependencies(world, NativeAnnouncementDependencyScope::Notifications);
}
static void native_announcement_log_preheat(size_t budget, bool urgent_new) {
    if (!budget || g_native_announcement_log_worker_active) return;
    TranslationStateScope translation;
    uintptr_t world = 0;
    NativeBorrowedVector<uintptr_t> reports;
    if (!native_announcement_log_preheat_domain(world, reports) || !reports.size()) return;
    auto &directory = g_native_announcement_log_preheat_directory;
    const auto now = std::chrono::steady_clock::now();
    if (now < directory.next_pump) return;
    // Producer and retained Present can run back-to-back. Share the pump
    // cadence, and yield between owned captures instead of filling a frame
    // with speculative native work while the user drags the scrollbar.
    directory.next_pump = now + std::chrono::milliseconds(4);
    const auto deadline = now + std::chrono::microseconds(1500);
    native_announcement_log_preheat_dependencies(world,
        NativeAnnouncementDependencyScope::Background, deadline);
    // Resume dependency work even at capacity. Only speculative production
    // waits; unchanged newest/older cursors resume the complete history later.
    const size_t pending_limit = native_announcement_log_translation_worker_count() * 3;
    budget = std::min(budget, native_announcement_log_preheat_capacity(pending_limit));
    if (!budget || std::chrono::steady_clock::now() >= deadline) return;
    const auto at = [&](size_t index, uintptr_t &parent, int32_t &id) {
        parent = native_history_vector_at(reports, index);
        return parent && native_history_copy(parent + native_history_layout::f_report_fields[15].native, id);
    };
    uintptr_t first_parent = 0, last_parent = 0;
    int32_t first_id = -1, last_id = -1;
    if (!at(0, first_parent, first_id) || !at(reports.size() - 1, last_parent, last_id)) return;
    while (!directory.records.empty() && directory.records.begin()->first < first_id) {
        if (std::chrono::steady_clock::now() >= deadline) return;
        native_announcement_log_translation_forget(directory.records.begin()->second.document);
        directory.records.erase(directory.records.begin());
    }
    if (!directory.started) {
        directory.started = true; directory.newest = last_id; directory.older = last_id;
    }
    const auto upper = [&](int32_t id) {
        size_t left = 0, right = reports.size();
        while (left < right) {
            const size_t middle = left + (right - left) / 2;
            uintptr_t parent = 0; int32_t other = -1;
            if (!at(middle, parent, other)) return reports.size();
            if (other <= id) left = middle + 1;
            else right = middle;
        }
        return left;
    };
    const auto available = [&] {
        return budget && std::chrono::steady_clock::now() < deadline &&
            native_announcement_log_preheat_capacity(pending_limit);
    };
    for (size_t index = upper(directory.newest); available() && index < reports.size(); ++index, --budget) {
        uintptr_t parent = 0; int32_t id = -1;
        if (!at(index, parent, id)) break;
        native_announcement_log_preheat_record(parent, world, urgent_new);
        directory.newest = id;
    }
    // Read ahead around the actual viewed records, in scroll direction first.
    // The historical cursor alone starts at the newest report and can leave
    // a distant scrollbar destination cold for the entire backlog duration.
    int32_t visible_first = INT32_MAX, visible_last = -1;
    if (g_native_announcement_log_layer.ready)
        for (const auto &record : g_native_announcement_log_records) {
            if (!record.document || record.document->world != world || record.document->report.id < 0)
                continue;
            visible_first = std::min(visible_first, record.document->report.id);
            visible_last = std::max(visible_last, record.document->report.id);
        }
    if (visible_last >= 0 && (directory.visible_first != visible_first ||
            directory.visible_last != visible_last)) {
        const bool adjacent = directory.visible_first >= 0 &&
            int64_t(visible_first) <= int64_t(directory.visible_last) + 1 &&
            int64_t(visible_last) + 1 >= directory.visible_first;
        directory.nearby_older_first = directory.visible_first < 0 ||
            visible_first <= directory.visible_first;
        directory.visible_first = visible_first; directory.visible_last = visible_last;
        if (adjacent) {
            // A one-row scroll exposes an extension of the same window. The
            // previous visible records already own jobs/results, so preserve
            // progress through its overlapping neighbours instead of reading
            // and requesting the nearest 128 completed records again.
            directory.nearby_before = std::min(directory.nearby_before, visible_first - 1);
            directory.nearby_after = std::max(directory.nearby_after, visible_last);
            const int64_t first = std::max<int64_t>(0, int64_t(visible_first) - 128);
            const int64_t last = std::min<int64_t>(INT32_MAX, int64_t(visible_last) + 128);
            directory.nearby_before_left = static_cast<size_t>(std::clamp<int64_t>(
                int64_t(directory.nearby_before) - first + 1, 0, 128));
            directory.nearby_after_left = static_cast<size_t>(std::clamp<int64_t>(
                last - directory.nearby_after, 0, 128));
        } else {
            directory.nearby_before = visible_first - 1; directory.nearby_after = visible_last;
            directory.nearby_before_left = directory.nearby_after_left = 128;
        }
    }
    size_t before = visible_last >= 0 ? upper(directory.nearby_before) : 0;
    size_t after = visible_last >= 0 ? upper(directory.nearby_after) : reports.size();
    while (visible_last >= 0 && available() &&
            ((directory.nearby_before_left && before) ||
             (directory.nearby_after_left && after < reports.size()))) {
        const bool can_before = directory.nearby_before_left && before;
        const bool can_after = directory.nearby_after_left && after < reports.size();
        const bool older = can_before && (!can_after || directory.nearby_older_first);
        uintptr_t parent = 0; int32_t id = -1;
        if (!at(older ? --before : after++, parent, id)) break;
        const bool captured = native_announcement_log_preheat_record(parent, world, false);
        if (older) { directory.nearby_before = id - 1; --directory.nearby_before_left; }
        else { directory.nearby_after = id; --directory.nearby_after_left; }
        directory.nearby_older_first = !older;
        // Scrolling one row must not spend the whole capture allowance on
        // the same already-prepared neighbours on every producer frame.
        if (captured) --budget;
    }
    size_t older_end = directory.older < first_id ? 0 : upper(directory.older);
    while (available() && older_end) {
        uintptr_t parent = 0; int32_t id = -1;
        if (!at(--older_end, parent, id)) break;
        native_announcement_log_preheat_record(parent, world, false);
        directory.older = id - 1; --budget;
    }
}
