// A formatted artifact reference may carry only its English name, or both
// names on separate lines. Recover the actual WORD/POS from artifact_record.
std::optional<std::string> Overlay::translate_world_artifact_name(std::string_view source) const {
    source = trim_view(source);
    if (source.empty() || source.size() > 4096 || source.ends_with("...")) return std::nullopt;
    const auto pair = split_generated_name_identity(source);
    const bool quoted = !pair && source.size() > 2 && source.front() == '"' && source.back() == '"';
    const auto english = pair ? pair->gloss : quoted ? source.substr(1, source.size() - 2) : source;
    if (!generated_title_shape(english) || english.ends_with("...")) return std::nullopt;
    if (g_native_announcement_log_worker_active) {
        NativeAnnouncementLogReferenceRequest request;
        request.kind = NativeAnnouncementLogReferenceRequest::Kind::Artifact;
        request.source.assign(source);
        return native_announcement_log_worker_name_target(request);
    }
    dfhack_require_world_read();
    const uintptr_t base = native_history_profile_base();
    uintptr_t world_data = 0;
    NativeBorrowedVector<uintptr_t> records, words;
    if (!base || !native_history_copy(native_history_global(0x24ebb58), world_data) || !world_data ||
            !native_history_read_vector(native_history_global(0x23e6180), records) ||
            !native_history_read_vector(native_history_global(0x24ed770), words)) return std::nullopt;

    struct Index {
        uintptr_t world = 0;
        const uintptr_t *records_begin = nullptr, *words_begin = nullptr, *words_end = nullptr;
        std::vector<std::string> keys;
        std::unordered_map<std::string, std::vector<size_t>> by_english;
        size_t refresh = 0;
        uint64_t epoch = 0;
    };
    auto &index = reloadable_thread_state<Index, struct ArtifactNameIndexTag>();
    if (index.world != world_data || index.records_begin != records.begin ||
            index.words_begin != words.begin || index.words_end != words.end ||
            records.size() < index.keys.size()) {
        index = {};
        index.world = world_data;
        index.records_begin = records.begin;
        index.words_begin = words.begin;
        index.words_end = words.end;
    }
    const auto read = [&](size_t i, NativeHistoryName &name) -> uintptr_t {
        const uintptr_t record = native_history_vector_at(records, i);
        const auto address = native_history_object_field(record, "artifact_record", 8);
        return address && capture_native_history_name(base, address, name) ? address : 0;
    };
    const auto key_of = [&](const NativeHistoryName &name) {
        const auto field = reconstruct_site_english_name(name);
        return field ? site_reference_key(*field) : std::string{};
    };
    const auto update = [&](size_t i) {
        NativeHistoryName name;
        std::string key = read(i, name) ? key_of(name) : std::string{};
        if (i == index.keys.size()) index.keys.emplace_back();
        auto &old = index.keys[i];
        if (old == key) return;
        if (!old.empty()) {
            auto previous = index.by_english.find(old);
            std::erase(previous->second, i);
            if (previous->second.empty()) index.by_english.erase(previous);
        }
        if (!key.empty()) index.by_english[key].push_back(i);
        old = std::move(key);
    };
    while (index.keys.size() < records.size()) {
        update(index.keys.size());
        if (g_native_announcement_log_native_capture_deadline &&
                std::chrono::steady_clock::now() >= *g_native_announcement_log_native_capture_deadline)
            throw NativeAnnouncementLogNativeCapturePending{};
    }
    // Names can be edited without replacing the vector. Refresh incrementally
    // and always reread matching records before using their slots.
    if (index.epoch != draw_epoch_ && !index.keys.empty()) {
        index.epoch = draw_epoch_;
        update(index.refresh++ % index.keys.size());
    }
    const auto key = site_reference_key(english);
    const auto hits = index.by_english.find(key);
    if (hits == index.by_english.end()) return std::nullopt;
    const auto native_key = pair ? site_reference_key(pair->native_name) : std::string{};
    std::optional<std::string> result;
    for (size_t i : hits->second) {
        NativeHistoryName name;
        const auto address = read(i, name);
        if (!address || key_of(name) != key) continue;
        if (pair) {
            std::string original;
            if (!capture_native_history_original_name(base, address, original)) return std::nullopt;
            if (site_reference_key(original) != native_key) continue;
        }
        const auto target = localize_name_slots(name);
        if (!target || (result && *result != *target)) return std::nullopt;
        result = target;
    }
    if (pair && result) {
        const auto native = translate_procedural_fragment(std::string(pair->native_name), true);
        if (!native) return std::nullopt;
        return *native + "，“" + *result + "”";
    }
    return quoted && result ? "“" + *result + "”" : result;
}
