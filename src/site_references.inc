// Resolve scoped place fields against real world_site identities. Chinese
// names and search aliases are produced from the owned native snapshot on
// demand, so changing a naming decision never retains an old display result.
struct SiteReferenceIdentity {
    int32_t id = -1;
    uintptr_t site = 0;
    uint64_t refreshed_epoch = 0;
    NativeHistoryName name;
    std::string native, english;
};
static std::string native_announcement_log_site_identity_context(const SiteReferenceIdentity &identity) {
    std::string key;
    const auto value = [&](const auto &input) {
        key.append(reinterpret_cast<const char *>(&input), sizeof(input));
    };
    const auto text = [&](std::string_view input) { value(input.size()); key.append(input); };
    value(identity.id); text(identity.native); text(identity.english);
    const auto &name = identity.name;
    text(name.first_name); text(name.nickname); value(name.language);
    value(name.nickname_mode); value(name.type); value(name.has_name);
    value(name.entity_type); value(name.entity_id); value(name.entity_name_current);
    text(name.parent_word_id); value(name.parent_word_pos);
    value(name.site_id); value(name.site_type); value(name.site_subtype);
    text(name.site_label); text(name.native_name);
    for (const auto &word : name.words) {
        text(word.id); value(word.part_of_speech); value(word.has_form); text(word.english_form);
    }
    return key;
}

struct SiteReferenceCache {
    uintptr_t world_data = 0;
    std::array<uintptr_t, 9> vectors{};
    uint64_t epoch = 0;
    size_t refresh_cursor = 0;
    size_t build_cursor = 0, source_index_cursor = 0;
    bool index_complete = false;
    std::vector<SiteReferenceIdentity> identities;
    std::unordered_map<int32_t, size_t> identity_indices;
    std::unordered_map<std::string, std::vector<size_t>> sources;
};

static std::string site_reference_key(std::string_view source) {
    const std::string utf8 = native_text_to_utf8(normalize_utterance(source));
    std::vector<uint32_t> codepoints;
    if (!decode_utf8(utf8, codepoints)) return {};
    std::string result;
    for (uint32_t cp : codepoints) {
        if (cp >= 'A' && cp <= 'Z') cp += 'a' - 'A';
        else if ((cp >= 0x00c0 && cp <= 0x00d6) ||
                (cp >= 0x00d8 && cp <= 0x00de)) cp += 0x20;
        append_utf8_codepoint(result, cp);
    }
    return result;
}

static bool capture_site_reference_identity(uintptr_t base, uintptr_t site,
        SiteReferenceIdentity &result) {
    SiteReferenceIdentity copy;
    const uintptr_t address = native_history_object_field(site, "world_site", 0);
    if (!address || !capture_native_history_name(base, address, copy.name) ||
            !copy.name.has_name ||
            !capture_native_history_site_name_context(base, site, copy.name, true))
        return false;
    copy.id = copy.name.site_id;
    copy.site = site;
    copy.native = copy.name.native_name;
    copy.english = reconstruct_site_english_name(copy.name).value_or(std::string{});
    result = std::move(copy);
    return true;
}

bool Overlay::capture_current_fortress_site_name(NativeHistoryName &name,
        std::string &english) const {
    const uintptr_t base = native_history_profile_base();
    uintptr_t site = 0;
#ifdef _WIN32
    // The two HUD producers (3f3033/3f30ab) read main.fortress_site,
    // not the independently retained plotinfo.site_id. Use their owner.
    if (!base || !native_history_copy(native_reference_address(base,
            0x239a1f0), site) || !site) return false;
#else
    const uintptr_t plotinfo = base ? native_reference_address(base,
        native_history_layout::plotinfo_rva) : 0;
    int32_t id = -1;
    if (!plotinfo || !native_history_copy(native_history_object_field(
            plotinfo, "plotinfost", 0x2444, sizeof(id)), id) || id < 0)
        return false;
    site = native_history_find_subject(base, NativeHistoryObjectKind::Site, id);
#endif
    SiteReferenceIdentity identity;
    if (!site || !capture_site_reference_identity(base, site, identity))
        return false;
#ifndef _WIN32
    if (identity.id != id) return false;
#endif
    name = std::move(identity.name);
    name.site_label = "player fortress";
    english = std::move(identity.english);
    return true;
}

static void index_site_reference_source(SiteReferenceCache &cache, size_t index) {
    for (const auto &source : {cache.identities[index].native,
            cache.identities[index].english}) {
        const std::string key = site_reference_key(source);
        if (key.empty()) continue;
        auto &candidates = cache.sources[key];
        if (std::find(candidates.begin(), candidates.end(), index) == candidates.end())
            candidates.push_back(index);
    }
}
static void index_site_reference_sources(SiteReferenceCache &cache) {
    cache.sources.clear();
    for (size_t index = 0; index < cache.identities.size(); ++index)
        index_site_reference_source(cache, index);
}

static SiteReferenceCache &site_reference_owned_cache() {
    return reloadable_thread_state<SiteReferenceCache, struct SiteReferenceCacheTag>();
}

template<typename Aliases>
static std::optional<SiteReferenceIdentity> resolve_site_reference_identity(
        std::string_view source, uint64_t epoch, Aliases &&aliases,
        bool english_field = false) {
    if (g_native_announcement_log_worker_active) {
        NativeAnnouncementLogReferenceRequest request;
        request.kind = NativeAnnouncementLogReferenceRequest::Kind::Site;
        request.source.assign(source); request.english_field = english_field;
        const auto identity = native_announcement_log_worker_site_identity(request);
        return identity ? std::optional<SiteReferenceIdentity>(*identity) : std::nullopt;
    }
    dfhack_require_world_read();
    source = trim_view(source);
    if (source.empty() || source.size() > 4096 || source.ends_with("..."))
        return std::nullopt;
    const auto pair = split_generated_name_identity(source);
    std::string key, meaning;
    if (pair) {
        key = site_reference_key(pair->native_name);
        meaning = site_reference_key(pair->gloss);
    } else {
        if (source.size() > 2 && source.front() == '"' && source.back() == '"')
            source = source.substr(1, source.size() - 2);
        key = site_reference_key(source);
    }
    const uintptr_t base = native_history_profile_base();
    const uintptr_t world = base ? native_reference_address(base,
        native_history_layout::world_rva) : 0;
    auto &cache = site_reference_owned_cache();
    if (!world || key.empty()) {
        cache = {};
        return std::nullopt;
    }
    const auto global = [&](size_t coordinate, size_t width) {
        return native_history_bound_field(world, native_history_layout::world_fields,
            std::size(native_history_layout::world_fields), coordinate, width);
    };
    uintptr_t world_data = 0;
    NativeBorrowedVector<uintptr_t> sites, words, translations;
    if (!native_history_copy(global(0x11a668, sizeof(world_data)), world_data) ||
            !world_data || !native_history_read_vector(native_history_object_field(
                world_data, "world_data", 0x178, sizeof(sites)), sites) ||
            !native_history_read_vector(global(0x11c280, sizeof(words)), words) ||
            !native_history_read_vector(global(0x11c2b0, sizeof(translations)), translations)) {
        cache = {};
        return std::nullopt;
    }
    const std::array<uintptr_t, 9> vectors{
        reinterpret_cast<uintptr_t>(sites.begin), reinterpret_cast<uintptr_t>(sites.end),
        reinterpret_cast<uintptr_t>(sites.capacity), reinterpret_cast<uintptr_t>(words.begin),
        reinterpret_cast<uintptr_t>(words.end), reinterpret_cast<uintptr_t>(words.capacity),
        reinterpret_cast<uintptr_t>(translations.begin), reinterpret_cast<uintptr_t>(translations.end),
        reinterpret_cast<uintptr_t>(translations.capacity)};
    if (cache.world_data != world_data || cache.vectors != vectors) {
        cache = {};
        cache.world_data = world_data;
        cache.vectors = vectors;
    }
    if (!cache.index_complete) {
        // Build from the retained position across short announcement input
        // slices. A partial world catalog cannot prove absence or uniqueness;
        // ordinary callers without a deadline finish it before using it too.
        bool progressed = false;
        while (cache.build_cursor < sites.size() ||
                cache.source_index_cursor < cache.identities.size()) {
            if (progressed && g_native_announcement_log_native_capture_deadline &&
                    std::chrono::steady_clock::now() >= *g_native_announcement_log_native_capture_deadline)
                throw NativeAnnouncementLogNativeCapturePending{};
            if (cache.source_index_cursor < cache.identities.size()) {
                const auto index = cache.source_index_cursor;
                cache.identity_indices.insert_or_assign(cache.identities[index].id, index);
                index_site_reference_source(cache, index);
                ++cache.source_index_cursor;
                progressed = true;
                continue;
            }
            const uintptr_t site = native_history_vector_at(sites, cache.build_cursor);
            SiteReferenceIdentity identity;
            if (capture_site_reference_identity(base, site, identity)) {
                identity.refreshed_epoch = epoch;
                cache.identities.push_back(std::move(identity));
            }
            ++cache.build_cursor;
            progressed = true;
        }
        cache.index_complete = true;
        cache.epoch = epoch;
    }
    const auto refresh = [&](SiteReferenceIdentity &identity) {
        if (identity.refreshed_epoch == epoch) return false;
        identity.refreshed_epoch = epoch;
        SiteReferenceIdentity fresh;
        if (!capture_site_reference_identity(base, identity.site, fresh) ||
                fresh.id != identity.id) {
            const bool changed = !identity.native.empty() || !identity.english.empty();
            identity.native.clear();
            identity.english.clear();
            identity.name.has_name = false;
            return changed;
        }
        const bool changed = identity.native != fresh.native || identity.english != fresh.english;
        fresh.refreshed_epoch = epoch;
        identity = std::move(fresh);
        return changed;
    };
    bool changed = false;
    if (cache.epoch != epoch) {
        const size_t count = std::min(size_t{8}, sites.size());
        for (size_t index = 0; index < count; ++index) {
            if (cache.refresh_cursor >= sites.size()) cache.refresh_cursor = 0;
            const uintptr_t site = native_history_vector_at(sites, cache.refresh_cursor++);
            int32_t id = -1;
            if (!site || !native_history_copy(native_history_object_field(
                    site, "world_site", 0x88, sizeof(id)), id) || id < 0) continue;
            if (const auto known = cache.identity_indices.find(id);
                    known != cache.identity_indices.end()) {
                auto &identity = cache.identities[known->second];
                identity.site = site;
                changed |= refresh(identity);
            } else {
                SiteReferenceIdentity identity;
                if (!capture_site_reference_identity(base, site, identity)) continue;
                identity.refreshed_epoch = epoch;
                cache.identity_indices.emplace(identity.id, cache.identities.size());
                cache.identities.push_back(std::move(identity));
                changed = true;
            }
        }
        cache.epoch = epoch;
        if (changed) index_site_reference_sources(cache);
    }
    const auto matches = [&](const SiteReferenceIdentity &identity) {
        if (!identity.name.has_name) return false;
        if (english_field)
            return !pair && !identity.english.empty() &&
                key == site_reference_key(identity.english);
        if (pair) return key == site_reference_key(identity.native) &&
            meaning == site_reference_key(identity.english);
        if (key == site_reference_key(identity.native) ||
                key == site_reference_key(identity.english)) return true;
        if (!contains_cjk_utf8(source)) return false;
        for (const auto &alias : aliases(identity.name))
            if (key == site_reference_key(alias)) return true;
        return false;
    };
    std::vector<size_t> candidates;
    if (const auto found = cache.sources.find(key); found != cache.sources.end())
        candidates = found->second;
    else if (!pair && contains_cjk_utf8(source)) {
        // Old Chinese names and complete phonetic forms are accepted only
        // inside an explicit place scope. Recompute them from current rules.
        for (size_t index = 0; index < cache.identities.size(); ++index)
            if (matches(cache.identities[index])) candidates.push_back(index);
    }
    std::optional<SiteReferenceIdentity> selected;
    changed = false;
    bool ambiguous = false;
    for (const size_t index : candidates) {
        auto &identity = cache.identities[index];
        changed |= refresh(identity);
        if (!matches(identity)) continue;
        // Two real IDs remain two places even when their spelling or final
        // Chinese name agrees. A source without an ID cannot choose either.
        if (selected) ambiguous = true;
        selected = identity;
    }
    if (changed) index_site_reference_sources(cache);
    return ambiguous ? std::nullopt : selected;
}

std::shared_ptr<const SiteReferenceIdentity> Overlay::native_announcement_log_capture_site_reference(
        std::string_view source, bool english_field) const {
    auto identity = resolve_site_reference_identity(source, draw_epoch_,
        [&](const NativeHistoryName &name) { return site_name_search_aliases(name); }, english_field);
    if (!identity) return {};
    // The worker owns all name/WORD fields; the live cache's refresh pointer
    // and its draw epoch have no meaning in that immutable publication.
    identity->site = 0; identity->refreshed_epoch = 0;
    return std::make_shared<const SiteReferenceIdentity>(std::move(*identity));
}

std::optional<NativeHistoryName> Overlay::resolve_site_reference_name(std::string_view source) const {
    const auto identity = resolve_site_reference_identity(source, draw_epoch_,
        [&](const NativeHistoryName &name) { return site_name_search_aliases(name); });
    return identity ? std::optional(identity->name) : std::nullopt;
}

std::optional<std::string> Overlay::translate_site_reference(
        std::string_view source, bool english_field) const {
    const auto identity = resolve_site_reference_identity(source, draw_epoch_,
        [&](const NativeHistoryName &name) { return site_name_search_aliases(name); },
        english_field);
    if (!identity) return std::nullopt;
    if (!english_field) return translate_site_display(identity->name, source);
    // An EnglishName producer establishes field provenance even when its
    // spelling equals the site's native name. Require the complete English
    // field of a unique real site before applying WORD/POS and its suffix.
    if (identity->english.empty() ||
            site_reference_key(source) != site_reference_key(identity->english))
        return std::nullopt;
    return translate_english_site_name(identity->english, &identity->name,
        site_name_attribute_suffix(identity->name));
}

std::optional<std::string> Overlay::translate_book_site_subject(std::string_view source) const {
    // The native general_ref_sitest title-subject formatter uses EnglishName.
    return translate_site_reference(source, true);
}

std::optional<std::string> Overlay::translate_legends_place(
        std::string_view source, bool english_field) const {
    source = trim_view(source);
    if (source.empty() || source.size() > 4096 || source.ends_with("...") ||
            source.find_first_of("\r\n") != std::string_view::npos) return std::nullopt;
    if (auto site = translate_site_reference(source, english_field)) return site;
    // Paired native/English text proves each part's language even without
    // a unique loaded site. Translate both parts without borrowing a site
    // subtype from an ambiguous or unrelated native identity.
    if (const auto pair = split_generated_name_identity(source)) {
        const auto english = translate_english_site_name(pair->gloss);
        return transliterate_site_spelling(pair->native_name) + "，“" +
            english.value_or(native_text_to_utf8(pair->gloss)) + "”";
    }
    // Some native producers explicitly select EnglishName. That provenance
    // permits English translation even when no unique loaded site supplies
    // its ID or class; it never permits guessing a suffix or a native meaning.
    if (english_field) {
        if (const auto label = exact_literal_translation(source)) return label;
        return translate_english_site_name(source);
    }
    // A standalone place field can also refer to geography. Its spelling
    // alone cannot establish whether it is a native-language or English name.
    if (!contains_cjk_utf8(source) && !generated_title_shape(source))
        return std::nullopt;
    return native_text_to_utf8(source);
}

std::optional<std::string> Overlay::translate_world_artifact_location(
        std::string_view source) const {
    source = trim_view(source);
    if (source.empty() || source.size() > 4096 || source.ends_with("...") ||
            source.find_first_of("\r\n") != std::string_view::npos) return std::nullopt;
    // These are complete native fallback/type labels, rather than generated
    // names. Keep their existing scoped wording before any name compositor.
    for (const std::string_view label : {"an unknown site", "an unknown region",
            "an unknown underground region", "the depths of the world",
            "the magma sea", "the Underworld"})
        if (source == label) return translate_legends_term(source);
    // The native Last in producer selects EnglishName for both sites and
    // surface regions. A unique real site owns its WORD/POS and site suffix;
    // otherwise the geographic head keeps its region sense (e.g. fingers).
    // Do not transfer that provenance to arbitrary Legends place fields.
    if (auto site = translate_site_reference(source, true)) return site;
    if (auto region = translate_world_region_heading(source)) return region;
    return translate_legends_place(source, true);
}

std::vector<std::string> Overlay::site_reference_search_aliases(std::string_view source) const {
    const auto identity = resolve_site_reference_identity(source, draw_epoch_,
        [&](const NativeHistoryName &name) { return site_name_search_aliases(name); });
    auto aliases = identity ? site_name_search_aliases(identity->name)
        : std::vector<std::string>{};
    const auto append = [&](std::string value) {
        if (!value.empty() && std::find(aliases.begin(), aliases.end(), value) == aliases.end())
            aliases.push_back(std::move(value));
    };
    if (identity) {
        append(native_text_to_utf8(identity->native));
        append(native_text_to_utf8(identity->english));
        if (const auto display = translate_site_display(identity->name, source))
            append(*display);
        if (!identity->native.empty() && !identity->english.empty()) {
            const std::string pair = identity->native + ", \"" + identity->english + "\"";
            append(native_text_to_utf8(pair));
            if (const auto display = translate_site_display(identity->name, pair))
                append(*display);
        }
    } else if (const auto pair = split_generated_name_identity(source)) {
        append(native_text_to_utf8(pair->native_name));
        append(native_text_to_utf8(pair->gloss));
        append(transliterate_site_spelling(pair->native_name));
        if (const auto english = translate_english_site_name(pair->gloss)) append(*english);
        if (const auto display = translate_legends_place(source)) append(*display);
    }
    return aliases;
}
