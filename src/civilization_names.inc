// Resolve polity, government and religion references against real entities.
// The cache owns WORD/POS snapshots and source spellings, never Chinese glosses.
struct CivilizationReferenceIdentity {
    int32_t id = -1;
    uintptr_t entity = 0;
    uint64_t refreshed_epoch = 0;
    NativeHistoryName name;
    std::string native, english;
};

struct CivilizationReferenceCache {
    uintptr_t world_data = 0;
    std::array<uintptr_t, 9> vectors{};
    uint64_t epoch = 0;
    size_t refresh_cursor = 0;
    size_t build_cursor = 0, source_index_cursor = 0;
    bool index_complete = false;
    std::vector<CivilizationReferenceIdentity> identities;
    std::unordered_map<int32_t, size_t> identity_indices;
    std::unordered_map<std::string, std::vector<size_t>> sources;
};

static std::string civilization_reference_key(std::string_view source) {
    return lower_native_name(normalize_utterance(source));
}

static bool civilization_reference_same_name(
        const NativeHistoryName &a, const NativeHistoryName &b) {
    if (a.first_name != b.first_name || a.nickname != b.nickname ||
            a.language != b.language || a.nickname_mode != b.nickname_mode ||
            a.type != b.type || a.has_name != b.has_name ||
            a.entity_type != b.entity_type || a.entity_id != b.entity_id ||
            a.parent_word_id != b.parent_word_id || a.parent_word_pos != b.parent_word_pos ||
            a.entity_name_current != b.entity_name_current) return false;
    for (size_t i = 0; i < a.words.size(); ++i)
        if (a.words[i].id != b.words[i].id ||
                a.words[i].part_of_speech != b.words[i].part_of_speech ||
                a.words[i].has_form != b.words[i].has_form ||
                a.words[i].english_form != b.words[i].english_form) return false;
    return true;
}

static bool capture_civilization_reference_identity(uintptr_t base, uintptr_t entity,
        const NativeBorrowedVector<uintptr_t> &translations,
        CivilizationReferenceIdentity &result) {
    int16_t type = -1;
    int32_t id = -1;
    if (!entity || !native_history_copy(native_history_object_field(
            entity, "historical_entity", 0, sizeof(type)), type) || type < 0 || type > 10 ||
            !native_history_copy(native_history_object_field(
                entity, "historical_entity", 4, sizeof(id)), id) || id < 0) return false;
    const uintptr_t name_address = native_history_object_field(entity,
        "historical_entity", 0x20);
    CivilizationReferenceIdentity copy;
    std::array<int32_t, 7> indices{};
    indices.fill(-1);
    if (!name_address || !capture_native_history_name(base, name_address, copy.name,
            &indices) || !copy.name.has_name ||
            !capture_native_history_entity_name_context(base, entity, copy.name,
                true, nullptr, true)) return false;
    copy.id = id;
    copy.entity = entity;
    const bool nickname_only = !copy.name.nickname.empty() &&
        copy.name.nickname_mode == 2;
    // Both native renderers enter the title group only for slots 2, 3 or 5.
    // A first-name-only identity never needs a language translation table.
    const bool has_title = indices[2] >= 0 || indices[3] >= 0 || indices[5] >= 0;
    const bool has_native_words = !nickname_only && (indices[0] >= 0 ||
        indices[1] >= 0 || has_title || indices[6] >= 0);
    std::array<std::string, 7> native;
    NativeBorrowedVector<uintptr_t> translated_words;
    bool native_available = !has_native_words || copy.name.language >= 0;
    if (has_native_words && native_available) {
        const uintptr_t translation = native_history_vector_at(translations,
            static_cast<size_t>(copy.name.language));
        native_available = translation && native_history_read_vector(
            native_history_object_field(translation, "language_translation", 0x50,
                sizeof(translated_words)), translated_words);
    }
    for (size_t i = 0; i < indices.size(); ++i) {
        if (nickname_only) break;
        if (indices[i] < 0) continue;
        const auto &word = copy.name.words[i];
        if (word.part_of_speech < 0 || word.part_of_speech > 8) return false;
        if (has_native_words && native_available) {
            const uintptr_t spelling = native_history_vector_at(translated_words,
                static_cast<size_t>(indices[i]));
            if (!spelling || !native_history_copy_string(spelling, native[i]))
                native_available = false;
        }
    }
    const auto prefix = [&]() {
        if (!copy.name.nickname.empty() && (copy.name.nickname_mode == 0 ||
                copy.name.nickname_mode == 2)) return "`" + copy.name.nickname + "'";
        std::string value = copy.name.first_name;
        if (!copy.name.nickname.empty()) {
            if (!value.empty()) value += ' ';
            value += "`" + copy.name.nickname + "'";
        }
        return value;
    };
    const auto append = [](std::string &name, const std::string &group) {
        if (group.empty()) return;
        if (!name.empty()) name += ' ';
        name += group;
    };
    copy.english = reconstruct_site_english_name(copy.name).value_or(std::string{});
    if (native_available) {
        copy.native = prefix();
        if (!nickname_only) {
            append(copy.native, native[0] + native[1]);
            if (has_title)
                append(copy.native, native[2] + native[3] + native[4] + native[5]);
            append(copy.native, native[6]);
        }
    }
    result = std::move(copy);
    return true;
}

static void index_civilization_reference_source(CivilizationReferenceCache &cache, size_t index) {
    const auto &identity = cache.identities[index];
    for (const auto &source : {identity.native, identity.english}) {
        const std::string key = civilization_reference_key(source);
        if (key.empty()) continue;
        auto &candidates = cache.sources[key];
        if (std::find(candidates.begin(), candidates.end(), index) == candidates.end())
            candidates.push_back(index);
    }
}
static void index_civilization_reference_sources(CivilizationReferenceCache &cache) {
    cache.sources.clear();
    for (size_t index = 0; index < cache.identities.size(); ++index)
        index_civilization_reference_source(cache, index);
}

std::optional<std::string> Overlay::translate_civilization_reference(
        std::string_view source, bool polity_role, bool government_field) const {
    return translate_entity_reference(source, polity_role, government_field, -1);
}

std::optional<std::string> Overlay::translate_religion_reference(std::string_view source) const {
    // The background chooser has already read every option's real kind and
    // WORD/POS name. Speculative help/name probes on this page must not build
    // the whole world's entity catalogue or acquire government relationships
    // for a religion which this native sheet already owns.
    const auto *snapshot = g_native_adventure_background_read;
    if (!g_native_announcement_log_worker_active && snapshot &&
            snapshot->choices_read && snapshot->choices) {
        source = trim_view(source);
        if (source.empty() || source.size() > 4096 || source.ends_with("..."))
            return std::nullopt;
        if (source.size() > 2 && source.front() == '"' && source.back() == '"')
            source = source.substr(1, source.size() - 2);
        const std::string key = civilization_reference_key(source);
        std::optional<std::string> translated;
        for (const auto &choice : *snapshot->choices) {
            if (choice.practice != 1 || !choice.name ||
                    choice.name->entity_type != 5 || !choice.name->has_name) continue;
            const auto english = reconstruct_site_english_name(*choice.name);
            const bool matches = english && civilization_reference_key(*english) == key;
            const bool native_matches = !choice.name->native_name.empty() &&
                civilization_reference_key(choice.name->native_name) == key;
            if (!matches && !native_matches) continue;
            const auto target = translate_adventure_religion_name(*choice.name);
            if (!target || (translated && *translated != *target)) return std::nullopt;
            translated = target;
        }
        return translated;
    }
    return translate_entity_reference(source, false, false, 5);
}

std::optional<std::string> Overlay::translate_entity_reference(
        std::string_view source, bool polity_role, bool government_field,
        int16_t entity_type) const {
    if (g_native_announcement_log_worker_active) {
        NativeAnnouncementLogReferenceRequest request;
        request.kind = NativeAnnouncementLogReferenceRequest::Kind::Entity;
        request.source.assign(source);
        request.polity_role = polity_role;
        request.government_field = government_field;
        request.entity_type = entity_type;
        return native_announcement_log_worker_entity_target(request);
    }
    dfhack_require_world_read();
    source = trim_view(source);
    if (source.empty() || source.size() > 4096 || source.ends_with("..."))
        return std::nullopt;
    const auto pair = split_generated_name_identity(source);
    std::string key, meaning;
    if (pair) {
        key = civilization_reference_key(pair->native_name);
        meaning = civilization_reference_key(pair->gloss);
    } else {
        if (source.size() > 2 && source.front() == '"' && source.back() == '"')
            source = source.substr(1, source.size() - 2);
        key = civilization_reference_key(source);
    }
    const uintptr_t base = native_history_profile_base();
    const uintptr_t world = base ? native_reference_address(base,
        native_history_layout::world_rva) : 0;
    if (!world || key.empty()) return std::nullopt;
    const auto global = [&](size_t coordinate, size_t width) {
        return native_history_bound_field(world, native_history_layout::world_fields,
            std::size(native_history_layout::world_fields), coordinate, width);
    };
    uintptr_t world_data = 0;
    NativeBorrowedVector<uintptr_t> entities, words, translations;
    // These coordinates are existing generated world bindings, shared by PE/ELF.
    if (!native_history_copy(global(0x11a668, sizeof(world_data)), world_data) ||
            !world_data || !native_history_read_vector(global(0x308, sizeof(entities)), entities) ||
            !native_history_read_vector(global(0x11c280, sizeof(words)), words) ||
            !native_history_read_vector(global(0x11c2b0, sizeof(translations)), translations))
        return std::nullopt;
    const std::array<uintptr_t, 9> vectors{
        reinterpret_cast<uintptr_t>(entities.begin), reinterpret_cast<uintptr_t>(entities.end),
        reinterpret_cast<uintptr_t>(entities.capacity), reinterpret_cast<uintptr_t>(words.begin),
        reinterpret_cast<uintptr_t>(words.end), reinterpret_cast<uintptr_t>(words.capacity),
        reinterpret_cast<uintptr_t>(translations.begin), reinterpret_cast<uintptr_t>(translations.end),
        reinterpret_cast<uintptr_t>(translations.capacity)};
    if (!civilization_reference_cache_)
        civilization_reference_cache_ = std::make_shared<CivilizationReferenceCache>();
    auto &cache = *civilization_reference_cache_;
    const bool changed_world = cache.world_data != world_data || cache.vectors != vectors;
    // A new world or vector membership rebuilds the identity catalog. Names
    // edited in place are found by a bounded rotating refresh below.
    if (changed_world) {
        cache = {};
        cache.world_data = world_data;
        cache.vectors = vectors;
    }
    if (!cache.index_complete) {
        // Announcement capture can yield between native entities. Retain
        // both the capture and source-index cursors so the next input slice
        // resumes this world instead of restarting or publishing a false miss.
        bool progressed = false;
        while (cache.build_cursor < entities.size() ||
                cache.source_index_cursor < cache.identities.size()) {
            if (progressed && g_native_announcement_log_native_capture_deadline &&
                    std::chrono::steady_clock::now() >= *g_native_announcement_log_native_capture_deadline)
                throw NativeAnnouncementLogNativeCapturePending{};
            if (cache.source_index_cursor < cache.identities.size()) {
                const auto index = cache.source_index_cursor;
                cache.identity_indices.insert_or_assign(cache.identities[index].id, index);
                index_civilization_reference_source(cache, index);
                ++cache.source_index_cursor;
                progressed = true;
                continue;
            }
            const uintptr_t entity = native_history_vector_at(entities, cache.build_cursor);
            int16_t type = -1;
            if (!entity || !native_history_copy(native_history_object_field(entity,
                    "historical_entity", 0, sizeof(type)), type)) {
                civilization_reference_cache_.reset();
                return std::nullopt;
            }
            // Index every real kind for identity and ambiguity. Explicit
            // native governing roles alone admit the additional name senses.
            if (type >= 0 && type <= 10) {
                CivilizationReferenceIdentity identity;
                if (capture_civilization_reference_identity(base, entity, translations, identity)) {
                    identity.refreshed_epoch = draw_epoch_;
                    cache.identities.push_back(std::move(identity));
                }
            }
            ++cache.build_cursor;
            progressed = true;
        }
        cache.index_complete = true;
        cache.epoch = draw_epoch_;
        cache.refresh_cursor = 0;
    }
    const auto refresh = [&](CivilizationReferenceIdentity &identity) {
        if (identity.refreshed_epoch == draw_epoch_) return false;
        // Failed captures also consume this epoch, so repeated source probes
        // cannot retry the same native address throughout one draw.
        identity.refreshed_epoch = draw_epoch_;
        CivilizationReferenceIdentity fresh;
        if (!capture_civilization_reference_identity(base, identity.entity,
                translations, fresh) || fresh.id != identity.id) {
            const bool spelling_changed = !identity.native.empty() || !identity.english.empty();
            identity.native.clear();
            identity.english.clear();
            identity.name.has_name = false;
            return spelling_changed;
        }
        const bool spelling_changed = identity.native != fresh.native ||
            identity.english != fresh.english;
        fresh.refreshed_epoch = draw_epoch_;
        if (spelling_changed || !civilization_reference_same_name(identity.name, fresh.name))
            identity = std::move(fresh);
        return spelling_changed;
    };
    bool changed = false;
    if (cache.epoch != draw_epoch_) {
        // Visit vector slots rather than only successful captures: newly
        // assigned names and transient failures must also enter the catalog.
        const size_t count = std::min(size_t{8}, entities.size());
        for (size_t i = 0; i < count; ++i) {
            if (cache.refresh_cursor >= entities.size()) cache.refresh_cursor = 0;
            const uintptr_t entity = native_history_vector_at(entities, cache.refresh_cursor++);
            int32_t id = -1;
            if (!entity || !native_history_copy(native_history_object_field(
                    entity, "historical_entity", 4, sizeof(id)), id) || id < 0) continue;
            if (const auto known = cache.identity_indices.find(id);
                    known != cache.identity_indices.end()) {
                auto &identity = cache.identities[known->second];
                identity.entity = entity;
                changed |= refresh(identity);
            } else {
                CivilizationReferenceIdentity identity;
                if (!capture_civilization_reference_identity(base, entity, translations, identity))
                    continue;
                identity.refreshed_epoch = draw_epoch_;
                cache.identity_indices.emplace(identity.id, cache.identities.size());
                cache.identities.push_back(std::move(identity));
                changed = true;
            }
        }
        cache.epoch = draw_epoch_;
        if (changed) index_civilization_reference_sources(cache);
    }
    const auto found = cache.sources.find(key);
    if (found == cache.sources.end()) return std::nullopt;
    const auto candidates = found->second;
    changed = false;
    const CivilizationReferenceIdentity *selected = nullptr;
    bool ambiguous = false;
    for (const size_t index : candidates) {
        auto &identity = cache.identities[index];
        changed |= refresh(identity);
        if (key != civilization_reference_key(identity.native) &&
                key != civilization_reference_key(identity.english)) continue;
        if (!meaning.empty() && (key != civilization_reference_key(identity.native) ||
                meaning != civilization_reference_key(identity.english))) continue;
        if (selected) ambiguous = true;
        selected = &identity;
    }
    if (changed) index_civilization_reference_sources(cache);
    if (ambiguous) return std::nullopt;
    if (!selected) return std::nullopt;
    // Catalog titles are current entity identities, including organizations
    // whose recorded governing residence has since been replaced. Own their
    // complete context before disabling the name's duplicate live capture.
    NativeHistoryName selected_name = selected->name;
    if (entity_type >= 0 && selected_name.entity_type != entity_type) return std::nullopt;
    NativeSiteGovernmentContext government_context;
    bool government_role = government_field || selected_name.entity_type == 1;
    if ((!polity_role || government_role) && selected_name.entity_type >= 1 && selected_name.entity_type <= 10 &&
            (!government_role || selected_name.parent_word_id.empty())) {
        capture_native_site_government_attributes(base, selected->entity,
            government_context, true, !government_field);
        government_role = government_role || government_context.governing_role;
    }
    if (entity_type < 0 && selected_name.entity_type != 0 && selected_name.entity_type != 1 &&
            selected_name.entity_type != 4 && !government_role && !polity_role)
        return std::nullopt;
    if (government_role && selected_name.entity_type != 1 &&
            !capture_native_history_entity_name_context(base, selected->entity,
                selected_name, true, nullptr, true, true)) return std::nullopt;
    const auto translated = translate_history_entity_name(selected_name, selected->id);
    if (!translated || !pair) return translated;
    if (selected->name.entity_type == 1 && (!selected->name.first_name.empty() ||
            !selected->name.nickname.empty())) return translated;
    if (civilization_reference_key(pair->native_name) ==
            civilization_reference_key(pair->gloss)) return translated;
    const auto native = translate_procedural_fragment(std::string(pair->native_name), true);
    if (!native) return std::nullopt;
    if (*native == *translated) return translated;
    return *native + "，“" + *translated + "”";
}

std::optional<std::string> Overlay::translate_world_site_entity_fact(
        std::string_view source, const NativeWorldSiteEntityFact *fact) const {
    // These complete fields name live entities. Resolve their owned WORD/POS
    // and parent context before generic prose or a source-only row cache can
    // retain a translation made before the entity catalog knew the name.
    for (const std::string_view prefix : {"Site government:", "Civilization:"}) {
        if (!source.starts_with(prefix)) continue;
        const auto value = trim_view(source.substr(prefix.size()));
        if (value.empty()) return std::nullopt;
        if (fact) {
            const bool government = prefix == "Site government:";
            if (government != (fact->kind == NativeWorldSiteEntityFactKind::SiteGovernment) ||
                    fact->name.entity_id < 0 || fact->name.entity_type < 0)
                return std::nullopt;
            const auto name = translate_history_entity_name(fact->name, fact->name.entity_id);
            const auto label = exact_literal_translation(prefix);
            if (name && label) return *label + *name;
            return std::nullopt;
        }
        if (value.ends_with("...")) return std::nullopt;
        const auto name = translate_civilization_reference(value,
            prefix == "Civilization:", prefix == "Site government:");
        const auto label = exact_literal_translation(prefix);
        if (name && label) return *label + *name;
        return std::nullopt;
    }
    return std::nullopt;
}

void Overlay::capture_entity_government_name_context(const NativeHistoryName &name,
        NativeSiteGovernmentContext &context) const {
    context = {};
    if (name.entity_type < 1 || name.entity_type > 10) return;
    const uintptr_t base = native_history_profile_base();
    const uintptr_t entity = native_history_find_subject(base,
        NativeHistoryObjectKind::Entity, name.entity_id);
    capture_native_site_government_attributes(base, entity, context,
        name.entity_name_current, true);
}

std::string Overlay::site_government_name_suffix(const NativeHistoryName &name,
        const NativeSiteGovernmentContext *context) const {
    if (name.entity_type < 0 || name.entity_type > 10) return {};
    NativeHistoryName current;
    const NativeHistoryName *parent_context = &name;
    NativeSiteGovernmentContext current_context;
    uintptr_t base = 0, entity = 0;
    bool entity_resolved = false;
    const auto resolve_entity = [&]() {
        if (entity_resolved) return;
        entity_resolved = true;
        base = native_history_profile_base();
        entity = native_history_find_subject(base,
            NativeHistoryObjectKind::Entity, name.entity_id);
    };
    const auto fallback = [&]() {
        if (context) return independent_site_government_suffix(name, context);
        resolve_entity();
        // Historical references may use a recorded site shape as part of the
        // entity's neutral name, without importing current parent or offices.
        capture_native_site_government_attributes(base, entity, current_context,
            name.entity_name_current, true);
        return independent_site_government_suffix(name, &current_context);
    };
    if (name.entity_name_current) {
        resolve_entity();
        if (!capture_native_history_entity_name_context(base, entity, current,
                true, nullptr, true, true) ||
                current.entity_type < 0 || current.entity_type > 10) return fallback();
        parent_context = &current;
    }
    if (parent_context->parent_word_id.empty() ||
            (parent_context->parent_word_pos != 0 && parent_context->parent_word_pos != 1))
        return fallback();
    // The parent's rendered title can depend on its actual noun form:
    // NATION names a single country or the collective title "诸国".
    const std::string key = parent_context->parent_word_id + "\t";
    const auto specific = site_government_parent_suffixes_.find(key +
        (parent_context->parent_word_pos == 1 ? "plural" : "singular"));
    if (specific != site_government_parent_suffixes_.end()) return specific->second;
    const auto shared = site_government_parent_suffixes_.find(key + "*");
    return shared == site_government_parent_suffixes_.end() ? "属领" : shared->second;
}

uint64_t Overlay::history_parent_context_revision() const {
    if (history_parent_context_epoch_ != draw_epoch_) {
        history_parent_context_revision_ = native_history_entity_parent_revision(draw_epoch_);
        history_parent_context_epoch_ = draw_epoch_;
    }
    return history_parent_context_revision_;
}

std::optional<std::string> Overlay::translate_history_entity_name(
        const NativeHistoryName &name, int32_t id) const {
    if (g_native_announcement_log_worker_active) {
        NativeAnnouncementLogReferenceRequest request;
        request.kind = NativeAnnouncementLogReferenceRequest::Kind::EntityId;
        request.entity_id = id;
        return native_announcement_log_worker_entity_target(request);
    }
    // A retained per-draw result still depends on live entity naming state.
    // Closed announcement item proofs cannot inherit it before a world read.
    if (native_announcement_log_item_field_active()) native_announcement_log_item_field_needs_world();
    // Every native entity reference reads historical_entity.name, including
    // dated events. DF does not supply a different old language_name here.
    // Use the same complete naming identity as the catalog and page heading;
    // event dates and participant roles belong to the sentence's relations.
    // Memoize only within this draw. A renamed entity or changed nomenclature
    // is read again on the next draw, never frozen by ID across frames.
    if (history_entity_name_epoch_ != draw_epoch_) {
        history_entity_name_epoch_ = draw_epoch_;
        history_entity_names_.clear();
    }
    if (const auto found = history_entity_names_.find(id); found != history_entity_names_.end())
        return found->second;
    const uintptr_t base = native_history_profile_base();
    const uintptr_t entity = native_history_find_subject(base,
        NativeHistoryObjectKind::Entity, id);
    NativeHistoryName identity = name;
    const uintptr_t name_address = entity ? native_history_object_field(entity,
        "historical_entity", 0x20) : 0;
    if (!name_address || !capture_native_history_name(base, name_address, identity) ||
            !capture_native_history_entity_name_context(base, entity, identity,
            true, nullptr, true)) return std::nullopt;
    NativeSiteGovernmentContext naming_context;
    if (identity.entity_type >= 1 && identity.entity_type <= 10)
        capture_native_site_government_attributes(base, entity, naming_context,
            true, identity.entity_type == 1);
    const bool government_name = identity.entity_type == 1 ||
        naming_context.governing_role;
    if (government_name && identity.entity_type != 1 &&
            !capture_native_history_entity_name_context(base, entity, identity,
                true, nullptr, true, true)) return std::nullopt;
    if (government_name && identity.parent_word_id.empty() &&
            naming_context.former_governance && naming_context.parent_known &&
            !naming_context.has_external_parent) {
        const int32_t parent = native_history_entity_naming_parent(id);
        if (parent >= 0) {
            const auto head = capture_native_history_entity_parent_word(base, parent);
            identity.parent_word_id = head.id;
            identity.parent_word_pos = head.part_of_speech;
        }
    }
    // The owned name and context already include the current parent and the
    // entity's civilian, bandit, religious or military naming category. An
    // inactive government can retain its uniquely recorded parent category.
    // Do not recapture it as an event-time shape or choose HEAD from a role.
    identity.entity_name_current = false;
    const auto translated = translate_history_name(identity, false, false, government_name,
        &naming_context);
    if (translated) history_entity_names_.emplace(id, *translated);
    return translated;
}
