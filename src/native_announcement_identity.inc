// Reveal-presence reports (321) append two calls to the native reference
// formatter. Keep their owned semantic fields with that complete report, so
// drawing a saved report cannot turn generated WORDs into guessed spellings.
struct NativeAnnouncementUnitOption {
    std::string key;
    NativeUnitIdentity identity;
};
struct NativeAnnouncementUnitField {
    size_t offset = 0;
    std::string source, target;
    std::vector<NativeAnnouncementUnitOption> options;
    bool ambiguous = false;
};
struct NativeAnnouncementUnitRecord {
    std::string source;
    int type = 321;
    uintptr_t world = 0;
    std::vector<NativeAnnouncementUnitField> fields;
    uint64_t revision = UINT64_MAX, sequence = 0, fingerprint = 0, catalog = 0;
};
struct NativeAnnouncementUnitAttempt {
    int32_t next_id = -1;
    uintptr_t units_begin = 0, units_end = 0;
    uint64_t revision = 0, parents = 0;
    bool operator==(const NativeAnnouncementUnitAttempt &) const = default;
};
struct NativeAnnouncementUnitStage {
    uintptr_t world = 0;
    uint64_t epoch = 0;
    struct Reference { std::string source; std::optional<NativeUnitIdentity> identity; };
    std::deque<Reference> references;
    std::optional<Reference> pet;
};
static NativeAnnouncementUnitStage &native_announcement_unit_stage() {
    return reloadable_thread_state<NativeAnnouncementUnitStage,
        struct NativeAnnouncementUnitStageTag>();
}
static std::mutex g_native_announcement_unit_mutex;
static uintptr_t g_native_announcement_unit_world = 0;
static int32_t g_native_announcement_unit_next_id = -1;
static uint64_t g_native_announcement_unit_sequence = 0, g_native_announcement_unit_parents_revision = 0;
static std::map<std::string, NativeAnnouncementUnitRecord> g_native_announcement_unit_records;
static std::map<std::string, NativeAnnouncementUnitAttempt> g_native_announcement_unit_attempts;
static std::set<NativeAnnouncementKey> g_native_announcement_unit_parents;
struct NativeAnnouncementLogUnitRecordCache {
    struct Entry {
        std::shared_ptr<const NativeAnnouncementUnitRecord> record;
        uint64_t source_sequence = 0;
        uint64_t source_fingerprint = 0, source_revision = 0, source_catalog = 0;
        std::list<std::string>::iterator use;
        size_t bytes = 0;
    };
    std::mutex mutex;
    std::unordered_map<std::string, Entry> records;
    std::list<std::string> order;
    size_t bytes = 0;
    uint64_t generation = 0;
};
static NativeAnnouncementLogUnitRecordCache g_native_announcement_log_unit_records;
static void clear_native_announcement_log_unit_records() {
    auto &cache = g_native_announcement_log_unit_records;
    std::lock_guard<std::mutex> lock(cache.mutex);
    cache.records.clear(); cache.order.clear(); cache.bytes = 0;
    ++cache.generation;
}
static std::pair<std::string, std::string> &native_announcement_unit_body_state() {
    return reloadable_thread_state<std::pair<std::string, std::string>,
        struct NativeAnnouncementUnitBodyStateTag>();
}
static uint64_t native_announcement_unit_body_context() {
    const auto &state = native_announcement_unit_body_state();
    return state.first.empty() ? 0 : native_identity_source_fingerprint(state.first, state.second);
}

static void clear_native_announcement_unit_identities() {
    std::lock_guard<std::mutex> lock(g_native_announcement_unit_mutex);
    clear_native_announcement_log_unit_records();
    g_native_announcement_unit_records.clear();
    g_native_announcement_unit_attempts.clear();
    g_native_announcement_unit_parents.clear();
    g_native_announcement_unit_world = 0;
    g_native_announcement_unit_next_id = -1;
    ++g_native_announcement_unit_parents_revision;
    g_native_announcement_unit_context.store(0, std::memory_order_release);
    native_announcement_unit_stage().references.clear();
    native_announcement_unit_stage().pet.reset();
    native_announcement_unit_body_state() = {};
}
static bool native_announcement_unit_world_state(uintptr_t &world, int32_t &next) {
    if (!native_history_copy(native_history_global(0x24ebb58), world) || !world ||
            !native_history_copy(native_history_global(0x23d14f0 + 0x1123ec), next)) return false;
    std::lock_guard<std::mutex> lock(g_native_announcement_unit_mutex);
    if (world != g_native_announcement_unit_world || next < g_native_announcement_unit_next_id) {
        clear_native_announcement_log_unit_records();
        g_native_announcement_unit_records.clear();
        g_native_announcement_unit_attempts.clear();
        g_native_announcement_unit_parents.clear();
        ++g_native_announcement_unit_parents_revision;
        g_native_announcement_unit_context.store(0, std::memory_order_release);
    }
    g_native_announcement_unit_world = world;
    g_native_announcement_unit_next_id = next;
    return true;
}
static void remember_native_announcement_unit_reference(std::string_view source,
        const NativeUnitIdentity *identity) {
    if (g_native_announcement_log_translation_report) return;
    uintptr_t world = 0;
    if (!native_history_copy(native_history_global(0x24ebb58), world) || !world) return;
    auto &stage = native_announcement_unit_stage();
    const auto epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
    if (stage.world != world || stage.epoch != epoch) {
        stage.references.clear(); stage.pet.reset();
    }
    stage.world = world;
    stage.epoch = epoch;
    NativeAnnouncementUnitStage::Reference reference;
    reference.source.assign(source);
    if (identity) reference.identity = *identity;
    stage.references.push_back(std::move(reference));
    // Only entry[5] (1331500) stages here. The item's movement/body formatter
    // shares the semantic finisher but must not displace these two captions.
    while (stage.references.size() > 2) stage.references.pop_front();
}
static void remember_native_announcement_pet_name(std::string_view source,
        const NativeUnitIdentity *identity) {
    if (g_native_announcement_log_translation_report) return;
    uintptr_t world = 0;
    if (!native_history_copy(native_history_global(0x24ebb58), world) || !world) return;
    auto &stage = native_announcement_unit_stage();
    const auto epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
    if (stage.world != world || stage.epoch != epoch) stage.references.clear();
    stage.world = world; stage.epoch = epoch;
    NativeAnnouncementUnitStage::Reference pet;
    pet.source.assign(source);
    if (identity) pet.identity = *identity;
    stage.pet = std::move(pet);
}

static std::string native_announcement_unit_semantic_key(const NativeUnitIdentity &identity) {
    // Announcements and formatter jobs must agree on the complete owned
    // identity, including caste, profession, status and formatter flags.
    return native_unit_identity_cache_key(identity);
}
static std::string native_announcement_unit_capitalized(std::string_view source) {
    if (source.empty()) return {};
    const auto &hooks = g_native_unit_identity_hooks;
    if (hooks.assign && hooks.capitalize && hooks.destroy) {
        NativeInputCallbackScope callback;
        NativeSearchString output(hooks.destroy);
        callback.call_native([&] { hooks.assign(&output.value, source.data(), source.size()); });
        callback.call_native([&] { hooks.capitalize(&output.value); });
        std::string_view capitalized;
        if (native_string_view(&output.value, &capitalized, 262144))
            return native_announcement_display_source(capitalized);
    }
    std::string result(source);
    // The native supplier normally owns this operation: it skips markup and
    // leading spaces/quotes and has explicit CP437 case branches. Before its
    // pointers are available, retain only the proven leading ASCII fallback.
    if (!result.empty() && result.front() >= 'a' && result.front() <= 'z')
        result.front() = static_cast<char>(result.front() - 'a' + 'A');
    return native_announcement_display_source(result);
}
static std::string native_announcement_unit_prefix(std::string_view first) {
    // Capitalization belongs to the assembled sentence. An empty first_name
    // exposes " has...", whose native first eligible word becomes "Has".
    return native_announcement_unit_capitalized(
        std::string(first) + " has revealed the presence of ") + " ";
}
static std::optional<std::vector<NativeAnnouncementUnitField>>
native_announcement_unit_pair(std::string_view report, std::string_view first,
        const NativeUnitIdentity *first_identity, std::string_view last,
        const NativeUnitIdentity *last_identity) {
    const auto first_source = native_announcement_unit_capitalized(first);
    const auto last_source = native_announcement_display_source(last);
    const auto prefix = native_announcement_unit_prefix(first);
    const std::string suffix = " to " + last_source + ".";
    if ((!first_source.empty() && !first_identity) || (!last_source.empty() && !last_identity) ||
            !report.starts_with(prefix) ||
            !report.ends_with(suffix) || report.size() <= prefix.size() + suffix.size())
        return std::nullopt;
    // Delimiters inside an authored field never choose a boundary: both
    // complete formatter captions must match their anchored native spans.
    std::vector<NativeAnnouncementUnitField> fields;
    if (!first_source.empty()) {
        NativeAnnouncementUnitField a;
        a.source = first_source;
        a.options.push_back({native_announcement_unit_semantic_key(*first_identity), *first_identity});
        fields.push_back(std::move(a));
    }
    if (!last_source.empty()) {
        NativeAnnouncementUnitField b;
        b.offset = report.size() - last_source.size() - 1;
        b.source = last_source;
        b.options.push_back({native_announcement_unit_semantic_key(*last_identity), *last_identity});
        fields.push_back(std::move(b));
    }
    return fields;
}
static constexpr std::string_view kNativeAnnouncementPetSuffix = ". How do you like the sound of that?";
static std::optional<NativeAnnouncementUnitField> native_announcement_pet_field(
        std::string_view report, std::string_view caption, const NativeUnitIdentity &identity) {
    const auto source = native_announcement_display_source(caption);
    const std::string body = source + std::string(kNativeAnnouncementPetSuffix);
    if (source.empty() || !report.ends_with(body)) return std::nullopt;
    const auto prefix = report.substr(0, report.size() - body.size());
    // The speech wrapper appends its entire body after the optional speaker
    // and recipient prefix followed by ': '. Neither colon inside a pet
    // name nor a matching author's spelling proves the body's start.
    if (!prefix.empty() && !prefix.ends_with(": ")) return std::nullopt;
    NativeAnnouncementUnitField field;
    field.offset = prefix.size(); field.source = source;
    field.options.push_back({native_announcement_unit_semantic_key(identity), identity});
    return field;
}
static void native_announcement_unit_render(NativeAnnouncementUnitRecord &record) {
    dfcn::translation_work_step();
    record.catalog = g_overlay.native_identity_translation_catalog_generation();
    record.revision = RULESETS.resource_revision();
    uint64_t fingerprint = native_identity_source_fingerprint(record.source, std::nullopt);
    for (auto &field : record.fields) {
        dfcn::translation_work_step();
        std::optional<std::string> agreed;
        bool ambiguous = field.ambiguous;
        for (const auto &option : field.options) {
            dfcn::translation_work_step();
            const auto &identity = option.identity;
            const bool authored = identity.form == NativeUnitIdentityForm::NameOnly &&
                !identity.name.uses_native_pronunciation() &&
                std::all_of(identity.name.words.begin(), identity.name.words.end(),
                    [](const auto &word) { return word.id.empty(); });
            auto phonetic = identity;
            // EnglishName supplies the pet's visible caption, while its
            // original-language WORD slots supply pronunciation. Rendering
            // this typed name must not split the English caption into roots.
            if (phonetic.form == NativeUnitIdentityForm::NameOnly && phonetic.name.uses_native_pronunciation())
                phonetic.english_name = false;
            auto target = authored ? std::optional<std::string>(native_text_to_utf8(identity.native_name)) :
                g_overlay.translate_native_unit_identity(phonetic);
            if (!target || target->empty()) target = native_text_to_utf8(field.source);
            if (agreed && *agreed != *target) ambiguous = true;
            else if (!agreed) agreed = std::move(target);
        }
        dfcn::translation_work_step();
        field.target = ambiguous || !agreed ? native_text_to_utf8(field.source) : *agreed;
        fingerprint ^= native_identity_source_fingerprint(
            std::to_string(field.offset) + ":" + field.source, field.target);
    }
    dfcn::translation_work_step();
    record.fingerprint = fingerprint;
    if (record.catalog != g_overlay.native_identity_translation_catalog_generation()) {
        record.catalog = 0;
        record.revision = UINT64_MAX;
    }
}
static void queue_native_announcement_unit_record_translation(
        NativeAnnouncementUnitRecord record, uint64_t epoch) {
    const auto catalog = g_overlay.native_identity_translation_catalog_generation();
    const std::string key = "announcement:" + std::to_string(record.world) + ':' + record.source;
    queue_native_identity_translation_job([record = std::move(record), epoch, catalog]() mutable {
        if (epoch != g_embark_item_capture_epoch.load(std::memory_order_acquire) ||
                catalog != g_overlay.native_identity_translation_catalog_generation()) return;
        for (const auto &field : record.fields)
            for (const auto &option : field.options)
                if (!native_unit_identity_snapshot_worker_safe(option.identity)) return;
        {
            std::lock_guard<std::mutex> lock(g_native_announcement_unit_mutex);
            const auto found = g_native_announcement_unit_records.find(record.source);
            if (record.world != g_native_announcement_unit_world ||
                    found == g_native_announcement_unit_records.end() ||
                    found->second.sequence != record.sequence) return;
            if (found->second.revision != UINT64_MAX && found->second.catalog == catalog) return;
        }
        native_announcement_unit_render(record);
        std::lock_guard<std::mutex> lock(g_native_announcement_unit_mutex);
        const auto found = g_native_announcement_unit_records.find(record.source);
        if (epoch != g_embark_item_capture_epoch.load(std::memory_order_acquire) ||
                catalog != g_overlay.native_identity_translation_catalog_generation() ||
                record.world != g_native_announcement_unit_world ||
                found == g_native_announcement_unit_records.end() ||
                found->second.sequence != record.sequence || record.catalog != catalog ||
                record.revision == UINT64_MAX) return;
        // SDL may have already completed this exact record while the worker
        // waited for translation. Never replace that settled result afterwards.
        if (found->second.revision != UINT64_MAX && found->second.catalog == catalog) return;
        g_native_announcement_unit_context.fetch_xor(found->second.fingerprint ^ record.fingerprint,
            std::memory_order_release);
        found->second = std::move(record);
    }, key);
}

static void remember_native_announcement_unit_record(NativeAnnouncementUnitRecord record,
        bool defer_translation = false) {
    if (g_native_announcement_log_translation_report) return;
    const auto epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
    // Render outside the registry lock; the common field renderer can use its
    // own dictionary and semantic source caches.
    if (!defer_translation) native_announcement_unit_render(record);
    else {
        record.revision = UINT64_MAX;
        record.catalog = 0;
        record.fingerprint = native_identity_source_fingerprint(record.source, std::nullopt);
        for (auto &field : record.fields) {
            field.target = native_text_to_utf8(field.source);
            record.fingerprint ^= native_identity_source_fingerprint(
                std::to_string(field.offset) + ':' + field.source, field.target);
        }
    }
    std::unique_lock<std::mutex> lock(g_native_announcement_unit_mutex);
    if (!record.world || record.world != g_native_announcement_unit_world) return;
    auto found = g_native_announcement_unit_records.find(record.source);
    if (found != g_native_announcement_unit_records.end()) {
        // Identical full captions from distinct typed identities are still
        // ambiguous. Retain both snapshots instead of publishing a global alias.
        auto merged = found->second;
        bool changed = false;
        if (record.type != merged.type) {
            for (auto &field : merged.fields) field.ambiguous = true;
            for (auto &field : record.fields) field.ambiguous = true;
            changed = true;
        }
        for (auto &field : record.fields) {
            const auto existing = std::find_if(merged.fields.begin(), merged.fields.end(),
                [&](const auto &value) { return value.offset == field.offset && value.source == field.source; });
            if (existing == merged.fields.end()) {
                for (auto &value : merged.fields) value.ambiguous = true;
                field.ambiguous = true;
                merged.fields.push_back(std::move(field)); changed = true;
                continue;
            }
            if (field.ambiguous && !existing->ambiguous) {
                existing->ambiguous = true; changed = true;
            }
            for (auto &option : field.options) {
                if (std::none_of(existing->options.begin(), existing->options.end(),
                        [&](const auto &value) { return value.key == option.key; })) {
                    if (existing->options.size() < 64) existing->options.push_back(std::move(option));
                    else existing->ambiguous = true;
                    changed = true;
                }
            }
        }
        if (!changed) {
            if (defer_translation && found->second.revision == UINT64_MAX) {
                auto pending = found->second;
                lock.unlock();
                queue_native_announcement_unit_record_translation(std::move(pending), epoch);
            }
            return;
        }
        // Mark changed semantic alternatives stale. The worker or the owned
        // SDL replay renders the merged record before a resolved cache hit.
        merged.revision = UINT64_MAX;
        merged.catalog = 0;
        merged.sequence = ++g_native_announcement_unit_sequence;
        merged.fingerprint ^= merged.sequence;
        g_native_announcement_unit_context.fetch_xor(found->second.fingerprint ^ merged.fingerprint,
            std::memory_order_release);
        found->second = std::move(merged);
        if (defer_translation) {
            auto pending = found->second;
            lock.unlock();
            queue_native_announcement_unit_record_translation(std::move(pending), epoch);
        }
        return;
    }
    if (g_native_announcement_unit_records.size() >= 2048) {
        const auto oldest = std::min_element(g_native_announcement_unit_records.begin(),
            g_native_announcement_unit_records.end(), [](const auto &a, const auto &b) {
                return a.second.sequence < b.second.sequence;
            });
        g_native_announcement_unit_context.fetch_xor(oldest->second.fingerprint, std::memory_order_release);
        g_native_announcement_unit_records.erase(oldest);
    }
    record.sequence = ++g_native_announcement_unit_sequence;
    g_native_announcement_unit_context.fetch_xor(record.fingerprint, std::memory_order_release);
    const std::string key = record.source;
    const auto inserted = g_native_announcement_unit_records.emplace(key, std::move(record));
    if (defer_translation) {
        auto pending = inserted.first->second;
        lock.unlock();
        queue_native_announcement_unit_record_translation(std::move(pending), epoch);
    }
}
static std::shared_ptr<const NativeAnnouncementUnitRecord>
remember_native_announcement_unit_submission(int type, std::string_view source) {
    auto &stage = native_announcement_unit_stage();
    auto references = std::move(stage.references);
    auto pet = std::move(stage.pet);
    stage.references.clear();
    stage.pet.reset();
    if (type != 321 && type != 163) return {};
    uintptr_t world = 0;
    int32_t next = -1;
    if (!native_announcement_unit_world_state(world, next) || stage.world != world ||
            stage.epoch != g_embark_item_capture_epoch.load(std::memory_order_acquire)) return {};
    NativeAnnouncementUnitRecord record;
    record.source = native_announcement_display_source(source);
    record.type = type;
    record.world = world;
    if (type == 163) {
        if (!pet || !pet->identity) return {};
        const auto field = native_announcement_pet_field(record.source, pet->source, *pet->identity);
        if (!field) return {};
        record.fields.push_back(*field);
        auto captured = std::make_shared<const NativeAnnouncementUnitRecord>(record);
        remember_native_announcement_unit_record(std::move(record), true);
        return captured;
    }
    if (references.size() != 2) return {};
    const auto pair = native_announcement_unit_pair(record.source,
        references[0].source, references[0].identity ? &*references[0].identity : nullptr,
        references[1].source, references[1].identity ? &*references[1].identity : nullptr);
    if (!pair) return {};
    record.fields = *pair;
    auto captured = std::make_shared<const NativeAnnouncementUnitRecord>(record);
    remember_native_announcement_unit_record(std::move(record), true);
    return captured;
}
static void remember_native_announcement_unit_parent(uintptr_t parent) {
    if (g_native_announcement_log_translation_report) return;
    NativeAnnouncementHistoryRow row;
    uintptr_t world = 0;
    int32_t next = -1;
    if (!native_announcement_history_row(parent, row) || (row.type != 321 && row.type != 163) ||
            !native_announcement_unit_world_state(world, next)) return;
    const auto source = native_announcement_display_source(row.source);
    if (row.type == 163 && !source.ends_with(kNativeAnnouncementPetSuffix)) return;
    std::lock_guard<std::mutex> lock(g_native_announcement_unit_mutex);
    if (g_native_announcement_unit_parents.insert({row.type, source}).second)
        ++g_native_announcement_unit_parents_revision;
}
static bool native_announcement_unit_report_proven(std::string_view source, int type) {
    {
        std::lock_guard<std::mutex> lock(g_native_announcement_unit_mutex);
        if (g_native_announcement_unit_parents.contains({type, std::string(source)})) return true;
    }
    std::lock_guard<std::mutex> lock(g_native_announcement_mutex);
    const auto found = g_native_announcement_group_keys.find({type, std::string(source)});
    if (found != g_native_announcement_group_keys.end() && !found->second.empty()) return true;
    return std::any_of(g_native_announcement_sources.begin(), g_native_announcement_sources.end(),
        [&](const auto &row) { return row.type == type && native_announcement_display_source(row.source) == source; });
}

static bool capture_native_announcement_pet_unit_name(uintptr_t unit,
        std::string &caption, NativeUnitIdentity &identity) {
    const auto &hooks = g_native_unit_identity_hooks;
    const auto name = native_history_object_field(unit, "unit", 8);
    if (!unit || !name || !hooks.english_name || !hooks.destroy ||
            !capture_native_history_name(hooks.base, name, identity.name)) return false;
    NativeInputCallbackScope callback;
    NativeSearchString output(hooks.destroy);
    callback.call_native([&] {
        hooks.english_name(reinterpret_cast<const void *>(name), &output.value, true, false);
    });
    std::string_view source;
    if (!native_string_view(&output.value, &source, 262144) || source.empty()) return false;
    caption.assign(source);
    identity.form = NativeUnitIdentityForm::NameOnly;
    identity.english_name = true;
    identity.native_name = caption;
    identity.native_name_words_valid = capture_native_unit_identity_name_words(
        name, identity.name, identity.native_name_words);
    return true;
}

// The log already owns a frozen report. Formatter tickets retain its complete
// typed fields, so replay may refresh those values without searching any live
// units, report groups or historical records for a matching spelling.
static std::string native_announcement_log_unit_record_key(const NativeAnnouncementHistoryRow &report) {
    std::string key;
    const auto scalar = [&](const auto &value) {
        key.append(reinterpret_cast<const char *>(&value), sizeof(value));
    };
    scalar(g_native_announcement_log_translation_world);
    scalar(report.type); scalar(report.id); scalar(report.continued);
    for (const auto identity : report.identity) scalar(identity);
    scalar(report.pool); scalar(report.source.size());
    key.append(report.source);
    return key;
}
static std::shared_ptr<const NativeAnnouncementUnitRecord> prepare_native_announcement_log_unit_record(
        const NativeAnnouncementHistoryRow &report) {
    if ((report.type != 321 && report.type != 163) ||
            !g_native_announcement_log_translation_world) return {};
    if (g_native_announcement_log_worker_active) {
        const auto *inputs = g_native_announcement_log_worker_inputs;
        if (!inputs) throw NativeAnnouncementLogNeedsDependency{};
        const auto &record = inputs->unit_record;
        if (!record) return {};
        if (record->world != g_native_announcement_log_translation_world || record->type != report.type ||
                record->source != native_announcement_display_source(report.source))
            throw NativeAnnouncementLogNeedsDependency{};
        const auto revision = RULESETS.resource_revision();
        const auto catalog = g_overlay.native_identity_translation_catalog_generation();
        if (record->revision == revision && record->catalog == catalog) return record;
        // Render the owned reference parts on this worker. Their exact
        // entity/site helpers request missing leaves; a title or "of" role
        // alone must not route the whole unit back through the native parser.
        struct OwnedRender {
            const NativeAnnouncementUnitRecord *source = nullptr;
            std::shared_ptr<NativeAnnouncementUnitRecord> record;
        };
        static const unsigned char tag = 0;
        std::shared_ptr<OwnedRender> retained;
        if (active_translation_work) {
            auto &slot = active_translation_work->parser_sessions[&tag];
            if (!slot) slot = std::make_shared<OwnedRender>();
            retained = std::static_pointer_cast<OwnedRender>(slot);
        } else retained = std::make_shared<OwnedRender>();
        if (retained->source != record.get() || !retained->record ||
                retained->record->revision != revision || retained->record->catalog != catalog) {
            auto made = std::make_shared<NativeAnnouncementUnitRecord>(*record);
            native_announcement_unit_render(*made);
            translation_work_step(0);
            retained->source = record.get(); retained->record = std::move(made);
        }
        return retained->record;
    }
    const auto source = native_announcement_display_source(report.source);
    const auto revision = RULESETS.resource_revision();
    const auto catalog = g_overlay.native_identity_translation_catalog_generation();
    const auto key = native_announcement_log_unit_record_key(report);
    auto &cache = g_native_announcement_log_unit_records;
    std::shared_ptr<const NativeAnnouncementUnitRecord> retained;
    uint64_t source_sequence = 0, generation = 0;
    uint64_t source_fingerprint = 0, source_revision = 0, source_catalog = 0;
    {
        std::lock_guard<std::mutex> lock(cache.mutex);
        generation = cache.generation;
        const auto found = cache.records.find(key);
        if (found != cache.records.end()) {
            retained = found->second.record;
            source_sequence = found->second.source_sequence;
            source_fingerprint = found->second.source_fingerprint;
            source_revision = found->second.source_revision;
            source_catalog = found->second.source_catalog;
            cache.order.splice(cache.order.end(), cache.order, found->second.use);
        }
    }
    std::shared_ptr<NativeAnnouncementUnitRecord> made;
    {
        std::lock_guard<std::mutex> lock(g_native_announcement_unit_mutex);
        const auto found = g_native_announcement_unit_records.find(source);
        if (found != g_native_announcement_unit_records.end() &&
                found->second.type == report.type &&
                found->second.world == g_native_announcement_log_translation_world &&
                (!retained || source_sequence != found->second.sequence ||
                 source_fingerprint != found->second.fingerprint ||
                 source_revision != found->second.revision || source_catalog != found->second.catalog)) {
            made = std::make_shared<NativeAnnouncementUnitRecord>(found->second);
            source_sequence = found->second.sequence;
            source_fingerprint = found->second.fingerprint;
            source_revision = found->second.revision;
            source_catalog = found->second.catalog;
        }
    }
    if (!made) {
        if (!retained) return {};
        if (retained->revision == revision && retained->catalog == catalog) {
            std::lock_guard<std::mutex> lock(cache.mutex);
            return generation == cache.generation ? retained : nullptr;
        }
        made = std::make_shared<NativeAnnouncementUnitRecord>(*retained);
    }
    // Refresh only the private copy. A log translation must never publish a
    // new global identity fingerprint or invalidate another component's cache.
    if (made->revision != revision || made->catalog != catalog)
        native_announcement_unit_render(*made);
    if (made->revision != revision || made->catalog != catalog ||
            catalog != g_overlay.native_identity_translation_catalog_generation()) return {};
    size_t bytes = sizeof(NativeAnnouncementLogUnitRecordCache::Entry) +
        sizeof(NativeAnnouncementUnitRecord) + 2 * key.size() + made->source.capacity() +
        made->fields.capacity() * sizeof(NativeAnnouncementUnitField);
    for (const auto &field : made->fields) {
        bytes += field.source.capacity() + field.target.capacity() +
            field.options.capacity() * sizeof(NativeAnnouncementUnitOption);
        // The complete option key serializes all owned identity strings and
        // vectors. Account for the key and the corresponding copied fields.
        for (const auto &option : field.options) bytes += option.key.capacity() + option.key.size();
    }
    constexpr size_t maximum_entries = 128, maximum_bytes = 8 * 1024 * 1024;
    std::lock_guard<std::mutex> lock(cache.mutex);
    if (generation != cache.generation) return {};
    if (bytes > maximum_bytes) return made;
    if (const auto found = cache.records.find(key); found != cache.records.end()) {
        cache.bytes -= found->second.bytes;
        cache.order.erase(found->second.use);
        cache.records.erase(found);
    }
    while (!cache.order.empty() && (cache.records.size() >= maximum_entries ||
            cache.bytes > maximum_bytes - bytes)) {
        const auto oldest = cache.records.find(cache.order.front());
        if (oldest != cache.records.end()) {
            cache.bytes -= oldest->second.bytes;
            cache.records.erase(oldest);
        }
        cache.order.pop_front();
    }
    cache.order.push_back(key);
    try {
        NativeAnnouncementLogUnitRecordCache::Entry entry{
            made, source_sequence, source_fingerprint, source_revision, source_catalog,
            std::prev(cache.order.end()), bytes};
        cache.records.emplace(key, std::move(entry));
        cache.bytes += bytes;
    } catch (...) { cache.order.pop_back(); throw; }
    return made;
}

static std::string native_announcement_log_unit_dependency(
        const NativeAnnouncementHistoryRow &report) {
    if (g_native_announcement_log_worker_active) {
        if (!g_native_announcement_log_worker_inputs) throw NativeAnnouncementLogNeedsDependency{};
        return g_native_announcement_log_worker_inputs->context;
    }
    if ((report.type != 321 && report.type != 163) ||
            !g_native_announcement_log_translation_world) return {};
    // Source/frame cache queries must never enter unit grammar. Inspect only
    // this exact report's already-published raw ticket and private fields;
    // the translator owns preparation, recovery and any deferred rendering.
    const auto source = native_announcement_display_source(report.source);
    const auto key = native_announcement_log_unit_record_key(report);
    const auto revision = RULESETS.resource_revision();
    const auto catalog = g_overlay.native_identity_translation_catalog_generation();
    std::string dependency;
    const auto scalar = [&](const auto &value) {
        dependency.append(reinterpret_cast<const char *>(&value), sizeof(value));
    };
    const auto text = [&](std::string_view value) {
        scalar(value.size());
        dependency.append(value);
    };
    const auto fields = [&](const NativeAnnouncementUnitRecord &record) {
        scalar(record.type); scalar(record.world); text(record.source);
        const bool ready = record.revision == revision && record.catalog == catalog;
        scalar(ready);
        // Pending merged fingerprints include a global publication sequence.
        // Their actual fields/options below fully describe their content.
        if (ready) scalar(record.fingerprint);
        scalar(record.fields.size());
        for (const auto &field : record.fields) {
            scalar(field.offset);
            text(field.source); text(field.target);
            scalar(field.ambiguous); scalar(field.options.size());
            for (const auto &option : field.options) text(option.key);
        }
    };
    auto &cache = g_native_announcement_log_unit_records;
    // Match the registry->private-cache order used by clearing, and keep the
    // two already-owned publications in one small read-only snapshot.
    std::lock_guard<std::mutex> source_lock(g_native_announcement_unit_mutex);
    std::lock_guard<std::mutex> retained_lock(cache.mutex);
    const auto raw = g_native_announcement_unit_records.find(source);
    const bool have_raw = raw != g_native_announcement_unit_records.end() &&
        raw->second.type == report.type && raw->second.world == g_native_announcement_log_translation_world;
    scalar(have_raw);
    if (have_raw) fields(raw->second);
    const auto held = cache.records.find(key);
    const bool have_private = held != cache.records.end() && held->second.record &&
        held->second.record->type == report.type &&
        held->second.record->world == g_native_announcement_log_translation_world &&
        held->second.record->source == source && held->second.record->revision == revision &&
        held->second.record->catalog == catalog;
    scalar(have_private);
    if (have_private) fields(*held->second.record);
    return dependency;
}

static void prepare_native_announcement_unit_identities(std::string_view raw_source) {
    if (native_announcement_log_item_field_active()) native_announcement_log_item_field_needs_world();
    try {
        if (g_native_announcement_log_translation_report) {
            prepare_native_announcement_log_unit_record(*g_native_announcement_log_translation_report);
            return;
        }
        // This only filters potential producers. No field boundary or name
        // classification is inferred from the literal phrase.
        auto source = native_announcement_display_source(raw_source);
        const auto &body = native_announcement_unit_body_state();
        if (!body.first.empty() && source == body.second) source = body.first;
        const bool possible_reveal = source.find(" has revealed the presence of ") != std::string::npos ||
            source.starts_with("Has revealed the presence of ");
        const bool possible_pet = source.ends_with(kNativeAnnouncementPetSuffix);
        if (!possible_reveal && !possible_pet) return;
        uintptr_t world = 0;
        int32_t next = -1;
        if (!native_announcement_unit_world_state(world, next)) return;
        std::optional<NativeAnnouncementUnitRecord> saved;
        // Read the catalog outside the small publication mutex. Obtaining a
        // ruleset revision may wait for T and must never stall a producer here.
        const auto revision = RULESETS.resource_revision();
        const auto catalog = g_overlay.native_identity_translation_catalog_generation();
        {
            std::lock_guard<std::mutex> lock(g_native_announcement_unit_mutex);
            const auto found = g_native_announcement_unit_records.find(source);
            if (found != g_native_announcement_unit_records.end()) {
                if (found->second.revision == revision && found->second.catalog == catalog) return;
                saved = found->second;
            }
        }
        if (saved) {
            native_announcement_unit_render(*saved);
            std::lock_guard<std::mutex> lock(g_native_announcement_unit_mutex);
            const auto found = g_native_announcement_unit_records.find(source);
            if (world == g_native_announcement_unit_world && found != g_native_announcement_unit_records.end() &&
                    found->second.sequence == saved->sequence && saved->revision != UINT64_MAX &&
                    saved->catalog == g_overlay.native_identity_translation_catalog_generation() &&
                    !(found->second.revision == saved->revision && found->second.catalog == saved->catalog)) {
                g_native_announcement_unit_context.fetch_xor(found->second.fingerprint ^ saved->fingerprint,
                    std::memory_order_release);
                found->second = std::move(*saved);
            }
            return;
        }
        NativeBorrowedVector<uintptr_t> units;
        if (!native_history_read_vector(native_history_global(0x23e50b0), units)) return;
        NativeAnnouncementUnitAttempt attempt{next, reinterpret_cast<uintptr_t>(units.begin),
            reinterpret_cast<uintptr_t>(units.end), RULESETS.resource_revision(), 0};
        {
            std::lock_guard<std::mutex> lock(g_native_announcement_unit_mutex);
            attempt.parents = g_native_announcement_unit_parents_revision;
            const auto found = g_native_announcement_unit_attempts.find(source);
            if (found != g_native_announcement_unit_attempts.end() && found->second == attempt) return;
            if (g_native_announcement_unit_attempts.size() >= 2048) g_native_announcement_unit_attempts.clear();
            g_native_announcement_unit_attempts[source] = attempt;
        }
        const bool reveal = possible_reveal && native_announcement_unit_report_proven(source, 321);
        const bool pet = possible_pet && native_announcement_unit_report_proven(source, 163);
        if (!reveal && !pet) return;
        using Reference = NativeAnnouncementUnitStage::Reference;
        std::vector<Reference> first, last;
        std::set<std::string> first_keys, last_keys;
        bool first_overflow = false, last_overflow = false;
        const auto candidate = [&](std::vector<Reference> &values, std::set<std::string> &keys,
                bool &overflow, const std::string &caption, const NativeUnitIdentity &identity) {
            const auto key = native_announcement_unit_semantic_key(identity);
            if (keys.contains(key)) return;
            if (values.size() >= 64) { overflow = true; return; }
            keys.insert(key); values.push_back({caption, identity});
        };
        for (size_t at = 0; at < units.size(); ++at) {
            const auto unit = native_history_vector_at(units, at);
            std::string caption;
            NativeUnitIdentity identity;
            if (pet && capture_native_announcement_pet_unit_name(unit, caption, identity)) {
                if (const auto field = native_announcement_pet_field(source, caption, identity)) {
                    NativeAnnouncementUnitRecord candidate;
                    candidate.source = source; candidate.type = 163; candidate.world = world;
                    candidate.fields.push_back(*field);
                    remember_native_announcement_unit_record(std::move(candidate));
                }
            }
            if (!reveal) continue;
            if (!capture_native_announcement_unit_reference(unit, caption, identity)) continue;
            const auto prefix = native_announcement_unit_prefix(caption);
            const auto suffix = " to " + native_announcement_display_source(caption) + ".";
            if (source.starts_with(prefix)) candidate(first, first_keys, first_overflow, caption, identity);
            if (source.ends_with(suffix)) candidate(last, last_keys, last_overflow, caption, identity);
        }
        for (const auto &a : first) for (const auto &b : last) {
            const auto pair = native_announcement_unit_pair(source, a.source,
                a.identity ? &*a.identity : nullptr, b.source, b.identity ? &*b.identity : nullptr);
            if (!pair) continue;
            NativeAnnouncementUnitRecord candidate;
            candidate.source = source;
            candidate.world = world;
            candidate.fields = *pair;
            if (first_overflow || last_overflow)
                for (auto &field : candidate.fields) field.ambiguous = true;
            remember_native_announcement_unit_record(std::move(candidate));
        }
        // Merged alternatives must be rendered before the caller obtains its
        // translation context or an announcement/UI result from a cache.
        if (pet || (!first.empty() && !last.empty())) prepare_native_announcement_unit_identities(source);
    } catch (...) {}
}
static std::optional<std::string> native_announcement_unit_identity_target(
        std::string_view report_source, std::string_view field_source, bool *bound) {
    if (native_announcement_log_item_field_active()) native_announcement_log_item_field_needs_world();
    if (bound) *bound = false;
    auto report = native_announcement_display_source(report_source);
    const auto &body = native_announcement_unit_body_state();
    const bool in_body = !body.first.empty() && report == body.second;
    if (!body.first.empty() && report == body.second) report = body.first;
    const auto *log_report = g_native_announcement_log_translation_report;
    const auto field = native_announcement_display_source(field_source);
    const auto resolve = [&](const NativeAnnouncementUnitRecord &record) -> std::optional<std::string> {
        std::optional<std::string> agreed;
        for (const auto &value : record.fields) {
            if (value.source != field) continue;
            // A pet caption belongs only to the spoken body. An identically
            // spelled speaker/author field in its header keeps its identity.
            if (record.type == 163 && !in_body && value.offset != 0) continue;
            // Only this exact owned field proves a native person. A missing
            // ticket leaves the existing typed source grammar available.
            if (bound) *bound = true;
            if (agreed && *agreed != value.target) return native_text_to_utf8(field_source);
            agreed = value.target;
        }
        return agreed;
    };
    if (log_report) {
        const auto retained = prepare_native_announcement_log_unit_record(*log_report);
        if (retained) return resolve(*retained);
        return std::nullopt;
    }
    prepare_native_announcement_unit_identities(report);
    std::lock_guard<std::mutex> lock(g_native_announcement_unit_mutex);
    const auto found = g_native_announcement_unit_records.find(report);
    return found == g_native_announcement_unit_records.end() ? std::nullopt : resolve(found->second);
}

NativeAnnouncementUnitBodyScope::NativeAnnouncementUnitBodyScope(
        std::string_view report, std::string_view body) {
    if (native_announcement_log_item_field_active()) native_announcement_log_item_field_needs_world();
    auto &state = native_announcement_unit_body_state();
    previous = state;
    auto full = native_announcement_display_source(report);
    const auto text = native_announcement_display_source(body);
    if (!state.first.empty() && full == state.second) full = state.first;
    if (text.empty() || !full.ends_with(text)) return;
    const auto prefix = std::string_view(full).substr(0, full.size() - text.size());
    if (!prefix.empty() && !prefix.ends_with(": ")) return;
    if (g_native_announcement_log_translation_report) {
        const auto retained = prepare_native_announcement_log_unit_record(
            *g_native_announcement_log_translation_report);
        if (!retained || retained->source != full || retained->type != 163 ||
                !text.ends_with(kNativeAnnouncementPetSuffix)) return;
        const size_t begin = full.size() - text.size();
        if (std::none_of(retained->fields.begin(), retained->fields.end(), [&](const auto &field) {
                return field.offset == begin && text == field.source + std::string(kNativeAnnouncementPetSuffix);
            })) return;
        state = {std::move(full), text};
        return;
    }
    prepare_native_announcement_unit_identities(full);
    std::lock_guard<std::mutex> lock(g_native_announcement_unit_mutex);
    const auto found = g_native_announcement_unit_records.find(full);
    if (found == g_native_announcement_unit_records.end() || found->second.type != 163 ||
            !text.ends_with(kNativeAnnouncementPetSuffix)) return;
    const size_t begin = full.size() - text.size();
    if (std::none_of(found->second.fields.begin(), found->second.fields.end(), [&](const auto &field) {
            return field.offset == begin && text == field.source + std::string(kNativeAnnouncementPetSuffix);
        })) return;
    state = {std::move(full), text};
}
NativeAnnouncementUnitBodyScope::~NativeAnnouncementUnitBodyScope() {
    native_announcement_unit_body_state() = std::move(previous);
}
