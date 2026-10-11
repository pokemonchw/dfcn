// Native history identity adapter. Host-specific globals are verified against
// the supported 53.16 PE/ELF; borrowed name/WORD/figure layouts are shared.
// Borrowed addresses are used only while the original event formatter runs;
// the public snapshot contains owned strings and WORD identities only.
static bool native_history_copy_bytes(uintptr_t address, void *destination, size_t size) {
    if (!address || size > UINTPTR_MAX - address) return false;
#ifdef _WIN32
    SIZE_T copied = 0;
    return ReadProcessMemory(GetCurrentProcess(), reinterpret_cast<const void *>(address),
        destination, size, &copied) && copied == size;
#else
    iovec local{destination, size}, remote{reinterpret_cast<void *>(address), size};
    return process_vm_readv(getpid(), &local, 1, &remote, 1, 0) == static_cast<ssize_t>(size);
#endif
}

template<typename T>
static bool native_history_copy(uintptr_t address, T &value) {
    return native_history_copy_bytes(address, &value, sizeof(T));
}

// Decode a string header that was already copied with its containing record.
// Inline bytes belong to this snapshot; only external storage needs another
// guarded native read. No game-owned STL object is constructed or retained.
static bool native_history_copy_string_snapshot(uintptr_t address,
        const unsigned char *snapshot, std::string &value) {
    if (!address || !snapshot) return false;
#ifdef _WIN32
    GameString native{};
    std::memcpy(&native, snapshot, sizeof(native));
    if (native.size > native.capacity ||
        native.size > 262144 || (native.capacity <= 15 && native.size > 15)) return false;
    if (native.capacity <= 15) value.assign(native.storage.small, native.size);
    else {
        value.resize(native.size);
        if (native.size && !native_history_copy_bytes(
                reinterpret_cast<uintptr_t>(native.storage.heap), value.data(), native.size)) return false;
    }
#else
    // libstdc++ C++11 string: pointer, length, union(capacity, inline[16]).
    // Never construct or destroy the borrowed game's representation.
    std::array<uintptr_t, 4> native{};
    std::memcpy(native.data(), snapshot, sizeof(native));
    if (native[1] > 262144 ||
        (!native[0] && native[1]) ||
        native[1] > (native[0] == address + 16 ? 15 : native[2])) return false;
    if (native[0] == address + 16)
        value.assign(reinterpret_cast<const char *>(snapshot + 16), native[1]);
    else {
        value.resize(native[1]);
        if (native[1] && !native_history_copy_bytes(native[0], value.data(), native[1])) return false;
    }
#endif
    return value.find('\0') == std::string::npos;
}

static bool native_history_copy_string(uintptr_t address, std::string &value) {
    std::array<unsigned char, 32> snapshot{};
    return native_history_copy_bytes(address, snapshot.data(), snapshot.size()) &&
        native_history_copy_string_snapshot(address, snapshot.data(), value);
}

static bool native_history_read_vector(uintptr_t address,
        NativeBorrowedVector<uintptr_t> &value) {
    return native_history_copy(address, value) && value.valid(1u << 24);
}

static uintptr_t native_history_vector_at(
        const NativeBorrowedVector<uintptr_t> &values, size_t index) {
    uintptr_t result = 0;
    if (index < values.size()) native_history_copy(
        reinterpret_cast<uintptr_t>(values.begin) + index * sizeof(uintptr_t), result);
    return result;
}

static uintptr_t native_history_profile_base() {
    static const uintptr_t base = []() -> uintptr_t {
#ifdef _WIN32
        if (!native_validate_game() || !native_pe_supported()) return 0;
        const auto address = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
        if (!address) return 0;
        // RVA d2cb50 is the game's English WORD/POS resolver. These loads
        // establish the actual runtime word table, independent of RAW order.
        static constexpr unsigned char word_table_loads[] = {
            0x48, 0x8b, 0x05, 0x16, 0x0c, 0x7c, 0x01,
            0x4c, 0x8b, 0x0d, 0x07, 0x0c, 0x7c, 0x01,
        };
        if (!native_pe_match(address, 0xd2cb5b, word_table_loads,
                sizeof(word_table_loads))) return 0;
        return address;
#else
        ModuleBuildId module;
        dl_iterate_phdr(find_main_build_id, &module);
        if (!module.found || !native_validate_game()) return 0;
        const auto origin = elf_runtime::automatic() ? elf_runtime::state().executable_origin : uintptr_t(0x400000);
        return origin <= UINTPTR_MAX - module.base ? module.base + origin : 0;
#endif
    }();
    return base;
}

#ifndef _WIN32
static uintptr_t native_elf_history_address(uintptr_t va) {
    const auto base = native_history_profile_base();
    return base && va >= 0x400000 ? native_reference_address(base, va - 0x400000) : 0;
}
#endif

#include "native_history_memory.inc"

// Runtime-generated instruments are not confined to the installed language
// dictionaries. Read only their actual name fields; translation and name
// admission remain in the shared instrument resolver, never in ABI bindings.
static bool capture_native_instrument_names(
        std::vector<std::pair<std::string, std::string>> &names) {
    names.clear();
    NativeBorrowedVector<uintptr_t> definitions;
    if (!native_history_read_vector(native_history_global(0x24ecdf8), definitions) ||
        definitions.size() > 65536) return false;
    names.reserve(definitions.size());
    for (size_t i = 0; i < definitions.size(); ++i) {
        const uintptr_t definition = native_history_vector_at(definitions, i);
        std::string singular, plural;
        if (!definition ||
            !native_history_copy_string(native_history_object_field(
                definition, "itemdef_instrumentst", 0x68), singular) ||
            !native_history_copy_string(native_history_object_field(
                definition, "itemdef_instrumentst", 0x88), plural)) return false;
        names.emplace_back(std::move(singular), std::move(plural));
    }
    return true;
}

static uintptr_t native_history_find_subject(uintptr_t base,
        NativeHistoryObjectKind kind, int32_t id, bool *lookup_read_complete = nullptr) {
    if (lookup_read_complete) *lookup_read_complete = false;
    if (!base || id < 0) return 0;
    uintptr_t vector = 0;
    size_t id_offset = 0;
    switch (kind) {
    case NativeHistoryObjectKind::Figure:
        // RVA 67dc0: history.figures at +0x60; figure ID at +0xe0.
        vector = native_history_global(0x24f9d18);
        id_offset = 0xe0;
        break;
    case NativeHistoryObjectKind::Entity:
        // RVA b92900 calls ba0a0 on this vector; IDs are at +4.
        vector = native_history_global(0x23d17f8);
        id_offset = 4;
        break;
    case NativeHistoryObjectKind::Site: {
        // RVA b9395e -> 7db20: world_data.sites at +0x178, ID +0x88.
        uintptr_t world_data = 0;
        if (!native_history_copy(native_history_global(0x24ebb58), world_data) || !world_data) return 0;
        vector = native_history_object_field(world_data, "world_data", 0x178);
        id_offset = 0x88;
        break;
    }
    case NativeHistoryObjectKind::World: {
        uintptr_t world_data = 0;
        if (id != 0 || !native_history_copy(native_history_global(0x24ebb58), world_data)) return 0;
        if (lookup_read_complete) *lookup_read_complete = true;
        return world_data;
    }
    case NativeHistoryObjectKind::Artifact:
        // RVA b94400 performs the same sorted-ID search on artifact records.
        vector = native_history_global(0x23e6180);
        break;
    case NativeHistoryObjectKind::Building: return 0; // Site-scoped capture adapter.
    case NativeHistoryObjectKind::Peak:
    case NativeHistoryObjectKind::Construction:
    case NativeHistoryObjectKind::Poem:
    case NativeHistoryObjectKind::Music:
    case NativeHistoryObjectKind::Dance:
    case NativeHistoryObjectKind::WrittenContent:
    case NativeHistoryObjectKind::ArtImage:
    case NativeHistoryObjectKind::MaterialOwner:
    case NativeHistoryObjectKind::Identity:
    case NativeHistoryObjectKind::Occasion:
    case NativeHistoryObjectKind::Collection:
    case NativeHistoryObjectKind::Squad: return 0; // Typed object adapter.
    case NativeHistoryObjectKind::Region:
    case NativeHistoryObjectKind::Underground: {
        // b94a40 -> bc080 and b94940 -> e1560 use these independent
        // world_data vectors and IDs, not positions within the vectors.
        uintptr_t world_data = 0;
        if (!native_history_copy(native_history_global(0x24ebb58), world_data) || !world_data) return 0;
        const bool layer = kind == NativeHistoryObjectKind::Underground;
        vector = native_history_object_field(world_data, "world_data", layer ? 0x250 : 0x238);
        id_offset = layer ? 0x80 : 0x78;
        break;
    }
    }
    NativeBorrowedVector<uintptr_t> values;
    if (!native_history_read_vector(vector, values)) return 0;
    if (kind == NativeHistoryObjectKind::Entity || kind == NativeHistoryObjectKind::Site ||
            kind == NativeHistoryObjectKind::Region || kind == NativeHistoryObjectKind::Underground) {
        // These two native lookups narrow only until at most 64 entries
        // remain, then inspect each remaining ID (ba0a0 / 7db20). Preserve
        // that behavior instead of assuming a fully sorted short vector.
        size_t begin = 0, count = values.size();
        while (count > 64) {
            const size_t half = count / 2;
            const size_t middle = begin + half;
            const uintptr_t candidate = native_history_vector_at(values, middle);
            int32_t candidate_id = -1;
            if (!candidate || !native_history_copy(candidate + id_offset, candidate_id)) return 0;
            if (id >= candidate_id) begin = middle;
            count -= half;
        }
        for (size_t index = begin; index < begin + count; ++index) {
            const uintptr_t candidate = native_history_vector_at(values, index);
            int32_t candidate_id = -1;
            if (!candidate || !native_history_copy(candidate + id_offset, candidate_id)) return 0;
            if (candidate_id == id) {
                if (lookup_read_complete) *lookup_read_complete = true;
                return candidate;
            }
        }
        if (lookup_read_complete) *lookup_read_complete = true;
        return 0;
    }
    size_t begin = 0, end = values.size();
    while (begin < end) {
        const size_t middle = begin + (end - begin) / 2;
        const uintptr_t candidate = native_history_vector_at(values, middle);
        int32_t candidate_id = -1;
        if (!candidate || !native_history_copy(candidate + id_offset, candidate_id)) return 0;
        if (candidate_id == id) {
            if (lookup_read_complete) *lookup_read_complete = true;
            return candidate;
        }
        if (candidate_id < id) begin = middle + 1;
        else end = middle;
    }
    if (lookup_read_complete) *lookup_read_complete = true;
    return 0;
}

struct NativeHistoryEntityUmbrella {
    uintptr_t entity = 0;
    int32_t id = -1;
    bool relation_known = false;
    bool has_external_parent = false;
};

static NativeHistoryEntityUmbrella native_history_resolve_current_entity_umbrella(
        uintptr_t base, uintptr_t entity) {
    NativeHistoryEntityUmbrella result;
    if (!base || !entity) return result;
    constexpr size_t maximum_depth = 32, maximum_links = 4096;
    std::array<uintptr_t, maximum_depth> visited_entities{};
    std::array<int32_t, maximum_depth> visited_ids{};
    for (size_t depth = 0; depth < maximum_depth; ++depth) {
        int16_t type = -1;
        int32_t id = -1;
        if (!native_history_copy(native_history_object_field(
                entity, "historical_entity", 0, sizeof(type)), type) ||
                type < 0 || type > 10 ||
                !native_history_copy(native_history_object_field(
                    entity, "historical_entity", 4, sizeof(id)), id) || id < 0)
            return result;
        for (size_t prior = 0; prior < depth; ++prior)
            if (visited_entities[prior] == entity || visited_ids[prior] == id)
                return result;
        visited_entities[depth] = entity;
        visited_ids[depth] = id;
        result.entity = entity;
        result.id = id;
        // RVA 93ce30 stops at a Civilization even if its association list
        // contains another parent. Every other real entity kind can be an
        // umbrella when reached through the proved governing role.
        if (type == 0) {
            result.relation_known = true;
            return result;
        }
        NativeBorrowedVector<uintptr_t> links;
        if (!native_history_read_vector(native_history_object_field(
                entity, "historical_entity", 0xb8, sizeof(links)), links) ||
                links.size() > maximum_links) return result;
        std::vector<uintptr_t> link_addresses(links.size());
        if (!link_addresses.empty() && !native_history_copy_bytes(
                reinterpret_cast<uintptr_t>(links.begin), link_addresses.data(),
                link_addresses.size() * sizeof(uintptr_t))) return result;
        bool saw_parent = false;
        uintptr_t parent = 0;
        for (const uintptr_t link : link_addresses) {
            int16_t link_type = -1;
            if (!link || !native_history_copy(native_history_object_field(
                    link, "entity_entity_link", 0, sizeof(link_type)), link_type))
                return result;
            if (link_type != 0) continue; // ID_IS_UMBRELLA_CIV.
            saw_parent = true;
            int32_t target_id = -1;
            if (!native_history_copy(native_history_object_field(
                    link, "entity_entity_link", 4, sizeof(target_id)), target_id))
                return result;
            if (target_id < 0) continue;
            bool lookup_read_complete = false;
            parent = native_history_find_subject(base, NativeHistoryObjectKind::Entity,
                target_id, &lookup_read_complete);
            if (!lookup_read_complete) return result;
            if (parent) break; // The native routine takes the first resolvable parent.
        }
        if (!parent) {
            // Only a completely read list without PARENT proves root-self.
            // A broken PARENT target must not acquire an independent label.
            result.relation_known = !saw_parent;
            return result;
        }
        result.has_external_parent = true;
        entity = parent;
    }
    return result; // A longer chain remains unknown rather than being truncated.
}

static bool capture_native_history_original_name(uintptr_t base, uintptr_t address,
        std::string &result) {
    if (!base || !address) return false;
#ifdef _WIN32
    const uintptr_t formatter = native_reference_address(base, 0xa94030);
    const uintptr_t destroy = native_reference_address(base, 0x6f850);
    if (!formatter || !destroy) return false;
    struct Temporary {
        NativeString value = native_empty_string();
        uintptr_t destroy;
        ~Temporary() { reinterpret_cast<void (*)(NativeString *)>(destroy)(&value); }
    } output{native_empty_string(), destroy};
#else
    const uintptr_t formatter = native_reference_address(base, 0x12bfe90 - 0x400000);
    if (!formatter) return false;
    struct Temporary { NativeString value = native_empty_string(); } output;
#endif
    reinterpret_cast<void (*)(const void *, NativeString *)>(formatter)(
        reinterpret_cast<const void *>(address), &output.value);
    std::string_view rendered;
    if (!native_string_view(&output.value, &rendered, kNativeHistoryStringLimit) ||
            rendered.find('\0') != std::string_view::npos) return false;
    result.assign(rendered);
    return true;
}

static bool capture_native_history_name(uintptr_t base, uintptr_t address,
        NativeHistoryName &result, std::array<int32_t, 7> *native_indices = nullptr,
        bool include_hidden_words = false) {
    // The fields are contiguous in both supported name layouts. Read them
    // once instead of issuing separate process-memory calls for seven WORD
    // indices, seven POS values and each scalar/string header. Generated
    // bindings retain the reviewed PE offsets and compiler-owned ELF offsets.
    constexpr auto &fields = native_history_layout::f_language_name_fields;
    constexpr size_t snapshot_size = [] {
        size_t result = 0;
        for (const auto &field : native_history_layout::f_language_name_fields)
            result = std::max(result, field.native + field.size);
        return result;
    }();
    std::array<unsigned char, snapshot_size> snapshot{};
    if (!native_history_copy_bytes(address, snapshot.data(), snapshot.size())) return false;
    uint8_t has_name = 0;
    NativeHistoryName copy;
    std::memcpy(&has_name, snapshot.data() + fields[6].native, sizeof(has_name));
    if (has_name > 1) return false;
    copy.has_name = has_name != 0;
    if (!copy.has_name) { result = std::move(copy); return true; }
    if (!native_history_copy_string_snapshot(address + fields[0].native,
            snapshot.data() + fields[0].native, copy.first_name) ||
        !native_history_copy_string_snapshot(address + fields[1].native,
            snapshot.data() + fields[1].native, copy.nickname)) return false;
    std::memcpy(&copy.language, snapshot.data() + fields[4].native, sizeof(copy.language));
    std::memcpy(&copy.type, snapshot.data() + fields[5].native, sizeof(copy.type));
    std::array<int32_t, 7> indices;
    std::array<int16_t, 7> parts_of_speech;
    std::memcpy(indices.data(), snapshot.data() + fields[2].native, sizeof(indices));
    std::memcpy(parts_of_speech.data(), snapshot.data() + fields[3].native, sizeof(parts_of_speech));
    if (native_indices) *native_indices = indices;
    if (!copy.nickname.empty()) {
        int32_t game_mode = -1;
        const uintptr_t mode_address = native_reference_address(base, native_history_layout::gametype_rva);
        const uintptr_t policy_address = native_reference_address(base, native_history_layout::d_init_rva) + 0x10;
        if (!native_history_copy(mode_address, game_mode)) return false;
        // RVA a94729: unsupported modes use the initialized policy 0.
        copy.nickname_mode = 0;
        if (game_mode >= 0 && game_mode <= 10 &&
            !native_history_copy(policy_address + size_t(game_mode) * 4,
                copy.nickname_mode)) return false;
        if (copy.nickname_mode < 0 || copy.nickname_mode > 2) return false;
        if (copy.nickname_mode == 2 && !include_hidden_words) {
            result = std::move(copy);
            return true;
        }
    }
    NativeBorrowedVector<uintptr_t> words;
    const uintptr_t words_address = native_history_global(0x24ed770);
    if (!native_history_read_vector(words_address, words)) return false;
    for (size_t slot = 0; slot < copy.words.size(); ++slot) {
        const int32_t index = indices[slot];
        auto &word = copy.words[slot];
        word.part_of_speech = parts_of_speech[slot];
        if (index == -1) continue;
        if (index < 0 || word.part_of_speech < 0 || word.part_of_speech > 8) return false;
        const uintptr_t raw = native_history_vector_at(words, static_cast<size_t>(index));
        // language_word.word at +0 is its stable WORD_ID. The nine English
        // forms at +0x20 are deliberately not parsed to recover that ID.
        if (!raw || !native_history_copy_string(raw, word.id) || word.id.empty()) return false;
        std::string form;
        if (!native_history_copy_string(raw + 0x20 + size_t(word.part_of_speech) * 0x20,
                form)) return false;
        word.has_form = !form.empty();
        word.english_form = std::move(form);
    }
    result = std::move(copy);
    return true;
}

static bool native_history_site_type(uintptr_t site, NativeHistoryEventData &out,
    const std::string &prefix);

static bool capture_native_history_site_name_context(uintptr_t base, uintptr_t site,
        NativeHistoryName &name, bool identity_validated = false) {
    int32_t id = -1;
    if (!base || !site || !native_history_copy(native_history_object_field(
            site, "world_site", 0x88, sizeof(id)), id) || id < 0 ||
            (!identity_validated &&
                native_history_find_subject(base, NativeHistoryObjectKind::Site, id) != site))
        return false;

    // Written references, Legends introductions and name localization share
    // the original site's formatter decision, including city/depth flags and
    // every lair/castle/monument subtype. No name type or spelling selects it.
    NativeHistoryEventData classified;
    if (!native_history_site_type(site, classified, "site")) return false;
    const auto type = classified.fields.find("site.site_type");
    const auto subtype = classified.fields.find("site.site_subtype");
    const auto label = classified.texts.find("site.label");
    if (type == classified.fields.end() || type->second.size() != 1 ||
            subtype == classified.fields.end() || subtype->second.size() != 1 ||
            label == classified.texts.end()) return false;

    std::string original;
    if (name.has_name) {
        // Use the same OriginalName routine as native page/list producers.
        // Its complete language-specific output is the fallback identity;
        // English WORD forms cannot supply the site's native pronunciation.
        const uintptr_t name_address = native_history_object_field(site, "world_site", 0);
        if (!capture_native_history_original_name(base, name_address, original)) return false;
    }
    name.site_id = id;
    name.site_type = type->second.front();
    name.site_subtype = subtype->second.front();
    name.site_label = label->second;
    name.native_name = std::move(original);
    return true;
}

static int32_t native_history_event_entity_parent(
    const NativeHistoryEventData &event, int32_t entity_id);

struct NativeHistoryEntityParentWord {
    std::string id;
    int16_t part_of_speech = -1;
};

static bool native_history_parent_polity_type(int16_t type) {
    // The proved upstream governing role, rather than an organization type
    // or its spelling, admits every real native entity kind as the umbrella.
    return type >= 0 && type <= 10;
}

static NativeHistoryEntityParentWord capture_native_history_entity_parent_word(
        uintptr_t base, int32_t parent_id, uintptr_t validated_parent = 0) {
    struct Stamp {
        uintptr_t parent = 0;
        int32_t index = -1;
        int16_t entity_type = -1, name_type = -1, pos = -1;
        uint8_t has_name = 0;
        bool operator==(const Stamp &) const = default;
    };
    struct Entry {
        Stamp stamp;
        NativeHistoryEntityParentWord head;
        uintptr_t entities_begin = 0, entities_end = 0;
    };
    uintptr_t world_data = 0;
    NativeBorrowedVector<uintptr_t> entities, definitions;
    if (!native_history_copy(native_history_global(0x24ebb58), world_data) || !world_data ||
            !native_history_read_vector(native_history_global(0x23d17f8), entities) ||
            !native_history_read_vector(native_history_global(0x24ed770), definitions)) return {};
    const std::array<uintptr_t, 3> world{world_data,
        entities.size() ? native_history_vector_at(entities, 0) : 0,
        reinterpret_cast<uintptr_t>(definitions.begin)};
    static std::mutex mutex;
    static std::array<uintptr_t, 3> cached_world{};
    static std::unordered_map<int32_t, Entry> words;
    std::lock_guard<std::mutex> lock(mutex);
    if (cached_world != world) {
        words.clear();
        cached_world = world;
    }
    Stamp stamp;
    stamp.parent = validated_parent;
    if (!stamp.parent) {
        const auto found = words.find(parent_id);
        int32_t cached_id = -1;
        if (found != words.end() && found->second.stamp.parent &&
                found->second.entities_begin == reinterpret_cast<uintptr_t>(entities.begin) &&
                found->second.entities_end == reinterpret_cast<uintptr_t>(entities.end) &&
                native_history_copy(native_history_object_field(found->second.stamp.parent,
                    "historical_entity", 4, sizeof(cached_id)), cached_id) && cached_id == parent_id)
            stamp.parent = found->second.stamp.parent;
        else stamp.parent = native_history_find_subject(base, NativeHistoryObjectKind::Entity, parent_id);
    }
    if (stamp.parent && !native_history_copy(native_history_object_field(
            stamp.parent, "historical_entity", 0, sizeof(stamp.entity_type)),
            stamp.entity_type)) return {};
    if (stamp.parent && native_history_parent_polity_type(stamp.entity_type)) {
        const uintptr_t address = native_history_object_field(stamp.parent, "historical_entity", 0x20);
        constexpr auto &fields = native_history_layout::f_language_name_fields;
        constexpr size_t head_index = fields[2].native + 5 * sizeof(int32_t);
        constexpr size_t head_pos = fields[3].native + 5 * sizeof(int16_t);
        constexpr size_t snapshot_end = fields[6].native + sizeof(uint8_t);
        std::array<unsigned char, snapshot_end - head_index> snapshot{};
        // Copy only the head slot and the following scalar name fields.
        // Their offsets come from the same bindings as full name capture.
        if (!address || address > UINTPTR_MAX - head_index ||
                !native_history_copy_bytes(address + head_index,
                    snapshot.data(), snapshot.size())) return {};
        std::memcpy(&stamp.has_name, snapshot.data() + fields[6].native - head_index,
            sizeof(stamp.has_name));
        std::memcpy(&stamp.name_type, snapshot.data() + fields[5].native - head_index,
            sizeof(stamp.name_type));
        std::memcpy(&stamp.index, snapshot.data(), sizeof(stamp.index));
        std::memcpy(&stamp.pos, snapshot.data() + head_pos - head_index, sizeof(stamp.pos));
    }
    if (const auto found = words.find(parent_id);
            found != words.end() && found->second.stamp == stamp) {
        found->second.entities_begin = reinterpret_cast<uintptr_t>(entities.begin);
        found->second.entities_end = reinterpret_cast<uintptr_t>(entities.end);
        return found->second.head;
    }
    const auto read = [&]() -> NativeHistoryEntityParentWord {
        // The proved upstream role selects the polity sense. Its actual
        // language_name type can be Squad=3 even for a governing entity.
        if (!stamp.parent || !native_history_parent_polity_type(stamp.entity_type) ||
                stamp.has_name != 1 || stamp.index < 0 ||
                (stamp.pos != 0 && stamp.pos != 1)) return {};
        const uintptr_t raw = native_history_vector_at(definitions, static_cast<size_t>(stamp.index));
        NativeHistoryEntityParentWord head;
        std::string form;
        if (!raw || !native_history_copy_string(native_history_object_field(
                raw, "language_word", 0, 32), head.id) || head.id.empty() ||
                !native_history_copy_string(native_history_object_field(
                    raw, "language_word", 0x20 + size_t(stamp.pos) * 0x20, 32), form) ||
                form.empty()) return {};
        head.part_of_speech = stamp.pos;
        return head;
    };
    auto head = read();
    // Both positive and negative heads follow the actual world/object/name
    // stamp. Resolving a current name never initializes the history index.
    if (!words.contains(parent_id) && words.size() >= 512) words.erase(words.begin());
    words.insert_or_assign(parent_id, Entry{stamp, head,
        reinterpret_cast<uintptr_t>(entities.begin), reinterpret_cast<uintptr_t>(entities.end)});
    return head;
}

static bool capture_native_history_entity_name_context(uintptr_t base, uintptr_t entity,
        NativeHistoryName &name, bool current = true,
        const NativeHistoryEventData *historical_event = nullptr,
        bool identity_validated = false, bool government_role = false) {
    name.entity_type = -1;
    name.entity_id = -1;
    name.entity_name_current = false;
    name.parent_word_id.clear();
    name.parent_word_pos = -1;
    int16_t type = -1;
    int32_t id = -1;
    if (!entity || !native_history_copy(native_history_object_field(
            entity, "historical_entity", 0, sizeof(type)), type) || type < 0 ||
            !native_history_copy(native_history_object_field(
                entity, "historical_entity", 4, sizeof(id)), id) || id < 0 ||
            (!identity_validated &&
                native_history_find_subject(base, NativeHistoryObjectKind::Entity, id) != entity))
        return false;
    name.entity_type = type;
    name.entity_id = id;
    name.entity_name_current = current;
    // The Site government field can name any organization selected by the
    // native site's governing relationship, independent of its real kind.
    // Keep its real type while capturing the field's parent role.
    if (type != 1 && !(government_role && type >= 0 && type <= 10)) return true;

    int32_t parent_id = -1;
    uintptr_t parent_address = 0;
    if (!current && historical_event)
        parent_id = native_history_event_entity_parent(*historical_event, id);
    if (current) {
        const auto umbrella = native_history_resolve_current_entity_umbrella(base, entity);
        if (!umbrella.relation_known || !umbrella.has_external_parent) return true;
        parent_id = umbrella.id;
        parent_address = umbrella.entity;
    }
    if (parent_id < 0) return true;
    const auto head = capture_native_history_entity_parent_word(base, parent_id, parent_address);
    if (head.id.empty()) return true;
    name.parent_word_id = head.id;
    name.parent_word_pos = head.part_of_speech;
    return true;
}

// The identity implementation follows this shared adapter in event.inc.
static bool capture_native_history_event_identity(const void *event, int32_t &native_type);
#include "native_history_entity_parent.inc"

static int32_t native_history_event_entity_parent(
        const NativeHistoryEventData &event, int32_t entity_id) {
    if (entity_id < 0) return -1;
    const auto number = [&](std::string_view key) {
        const auto found = event.fields.find(key);
        return found != event.fields.end() && found->second.size() == 1
            ? found->second.front() : int32_t{-1};
    };
    int32_t parent = -1;
    bool conflicting = false, paired = false;
    const auto pair = [&](std::string_view local_key, std::string_view parent_key) {
        const int32_t local = number(local_key), candidate = number(parent_key);
        if (local != entity_id) return;
        // Some attack records repeat the local government in the umbrella
        // field. That supplies no external parent; it must not discard the
        // affiliation already established by dated records for this entity.
        if (candidate < 0 || candidate == local) {
            // A takeover can use one ID for both its old and new government.
            // Without two agreeing external parents those roles stay unknown.
            if ((event.native_type == 48 || event.native_type == 50) &&
                    number("site_civ") == entity_id &&
                    number("new_site_civ") == entity_id) {
                paired = true;
                conflicting = true;
            }
            return;
        }
        paired = true;
        if (parent >= 0 && parent != candidate) conflicting = true;
        parent = candidate;
    };
    switch (event.native_type) {
    case 2: // created_site
    case 23: // reclaim_site
    case 25: // site_died
    case 26: // site_retired
    case 30: // created_building
    case 31: // replaced_building
    case 58: // created_world_construction
    case 122: // entity_breach_feature_layer
        pair("site_civ", "civ");
        break;
    case 0: // war_attacked_site
    case 1: // war_destroyed_site
    case 24: // hf_destroyed_site
    case 47: // war_plundered_site
    case 49: // war_site_tribute_forced
    case 80: // hf_attacked_site
    case 101: // sneak_into_site
    case 110: // site_surrendered
        pair("site_civ", "defender_civ");
        break;
    case 48: // war_site_new_leader
    case 50: // war_site_taken_over
        pair("site_civ", "defender_civ");
        pair("new_site_civ", "attacker_civ");
        break;
    case 104: // hf_freed
        pair("site_civ", "holding_civ");
        break;
    default:
        // Shared field spellings alone do not establish a historical parent.
        break;
    }
    if (paired) return conflicting ? -1 : parent;
    return native_history_historical_entity_parent(event, entity_id);
}

static bool capture_native_history_species(uintptr_t base, uintptr_t figure,
        std::string &result, std::string *curse_suffix = nullptr) {
    if (curse_suffix) curse_suffix->clear();
    // RVA b93391..b93472: HF race/caste -> creature/caste singular raw name.
    int16_t race = -1, caste = -1;
    if (!native_history_copy(figure + 2, race) ||
        !native_history_copy(figure + 4, caste)) return false;
    if (race < 0) { result.clear(); return true; }
    NativeBorrowedVector<uintptr_t> creatures;
    const uintptr_t creatures_address = native_history_global(0x24eca68);
    if (!native_history_read_vector(creatures_address, creatures)) return false;
    const uintptr_t creature = native_history_vector_at(creatures, static_cast<size_t>(race));
    if (!creature) return false;
    std::string species;
    if (caste >= 0) {
        NativeBorrowedVector<uintptr_t> castes;
        if (!native_history_read_vector(creature + 0x178, castes)) return false;
        const uintptr_t raw = native_history_vector_at(castes, static_cast<size_t>(caste));
        if (raw && !native_history_copy_string(raw + 0x20, species)) return false;
    }
    if (species.empty() && !native_history_copy_string(creature + 0x20, species)) return false;

    // Preserve the same typed creature modifiers as the native HF formatter
    // (b931be / b9332a / b93488), including a stored curse display name.
    uintptr_t info = 0, curse = 0;
    std::string undead_name;
    uint8_t named_curse = 0;
    if (!native_history_copy(figure + 0x130, info)) return false;
    if (info && !native_history_copy(info + 0x48, curse)) return false;
    if (curse && (!native_history_copy_string(curse + 0x150, undead_name) ||
        !native_history_copy(curse + 0x88, named_curse))) return false;
    std::string prefix;
    if (!undead_name.empty()) prefix = "zombie ";
    int32_t flag_count = 0;
    uint8_t first = 0;
    if (!native_history_copy(figure + 0xd0, flag_count)) return false;
    if (flag_count > 0) {
        uintptr_t flags = 0;
        if (!native_history_copy(figure + 0xc8, flags) || !flags ||
            !native_history_copy(flags, first)) return false;
    }
    // RVA b93166 suppresses the race label for these figure flags; explicit
    // zombie/curse identity restores it at b931d3. Preserve that decision.
    uint8_t has_name = 0;
    if (!native_history_copy(figure + 0xaa, has_name)) return false;
    // b932ed jumps directly to the nameless race branch at b93741. The
    // deity/force suppression only controls a named figure's extra label.
    if (has_name && (first & 0x0c) && undead_name.empty() && !named_curse) { result.clear(); return true; }
    if ((first & 0x80) && !named_curse) prefix += "ghostly ";
    if (named_curse) {
        std::string suffix;
        if (!native_history_copy_string(curse + 0x90, suffix)) return false;
        if (curse_suffix) *curse_suffix = suffix;
        if (!suffix.empty()) species += " " + suffix;
    }
    result = prefix + species;
    return true;
}

static std::optional<std::string> native_history_figure_curse_suffix(
        int32_t id, std::string_view species) {
    // Retained snapshots from an earlier core may predate the separate title
    // field. Recover its boundary only if the native typed identity still
    // reproduces that snapshot exactly; a later form must not rewrite history.
    const uintptr_t base = native_history_profile_base();
    const uintptr_t figure = native_history_find_subject(base, NativeHistoryObjectKind::Figure, id);
    std::string current, suffix;
    if (!figure || !capture_native_history_species(base, figure, current, &suffix) ||
            current != species || suffix.empty()) return std::nullopt;
    return suffix;
}

// Defined by the item adapter after these shared native name primitives.
static bool capture_native_history_artifact_subject(uintptr_t base, uintptr_t artifact,
        NativeHistorySubject &subject);

static bool populate_native_history_subjects(NativeHistoryEventData &event, bool = false) {
    const uintptr_t base = native_history_profile_base();
    if (!base) return false;
    bool complete = true;
    // Native entity references always read historical_entity.name. Keep its
    // complete current identity separate from the event's dated relations.
    auto append = [&](NativeHistoryObjectKind kind, int32_t id) {
        if (id < 0) return;
        if (std::any_of(event.subjects.begin(), event.subjects.end(),
                [&](const NativeHistorySubject &subject) {
                    return subject.kind == kind && subject.id == id;
                })) return;
        const uintptr_t object = native_history_find_subject(base, kind, id);
        if (!object) {
            NativeHistorySubject missing;
            missing.kind = kind;
            missing.id = id;
            missing.label_key = native_history_unknown_subject(kind);
            event.subjects.push_back(std::move(missing));
            return;
        }
        size_t name_offset = 0;
        switch (kind) {
        case NativeHistoryObjectKind::Figure: name_offset = 0x38; break;
        case NativeHistoryObjectKind::Entity: name_offset = 0x20; break;
        case NativeHistoryObjectKind::Site: break;
        case NativeHistoryObjectKind::Artifact: name_offset = 8; break;
        case NativeHistoryObjectKind::Region: break;
        case NativeHistoryObjectKind::World: break;
        case NativeHistoryObjectKind::Underground: name_offset = 8; break;
        case NativeHistoryObjectKind::Building: complete = false; return;
        default: complete = false; return;
        }
        NativeHistorySubject subject;
        std::string curse_suffix;
        subject.kind = kind;
        subject.id = id;
        if (kind == NativeHistoryObjectKind::Underground) {
            // The native layer formatter only names these unnamed layer
            // types. Its has_name branch emits no name; do not invent one.
            uint8_t has_name = 0;
            int16_t type = -1;
            if (!native_history_copy(object + 0x7a, has_name) || has_name ||
                    !native_history_copy(object, type) || type < 0 || type > 2) {
                complete = false;
                return;
            }
            static constexpr const char *labels[] = {
                "the depths of the world", "the magma sea", "the Underworld"};
            subject.label_key = labels[type];
            event.subjects.push_back(std::move(subject));
            return;
        }
        if (!capture_native_history_name(base, object + name_offset, subject.name) ||
            (kind == NativeHistoryObjectKind::Figure && subject.name.has_name &&
                subject.name.first_name.empty() &&
                !capture_native_history_original_name(base, object + name_offset,
                    subject.name.native_name)) ||
            (kind == NativeHistoryObjectKind::Site &&
                !capture_native_history_site_name_context(base, object, subject.name, true)) ||
            (kind == NativeHistoryObjectKind::Entity &&
                !capture_native_history_entity_name_context(base, object, subject.name,
                    true, nullptr, true)) ||
            (kind == NativeHistoryObjectKind::Figure &&
                !capture_native_history_species(base, object, subject.species, &curse_suffix)) ||
            (kind == NativeHistoryObjectKind::Artifact &&
                !capture_native_history_artifact_subject(base, object, subject)
            )) {
            complete = false;
            return;
        }
        if (kind == NativeHistoryObjectKind::Entity)
            subject.native_type = subject.name.entity_type;
        else if (kind == NativeHistoryObjectKind::Site)
            subject.native_type = subject.name.site_type;
        if (!curse_suffix.empty())
            event.texts["figure.curse_suffix." + std::to_string(id)] = std::move(curse_suffix);
        event.subjects.push_back(std::move(subject));
    };
    append(NativeHistoryObjectKind::Figure, event.actor_id);
    append(NativeHistoryObjectKind::Artifact, event.artifact_id);
    append(NativeHistoryObjectKind::Entity, event.entity_id);
    append(NativeHistoryObjectKind::Site, event.site_id);
    append(NativeHistoryObjectKind::Entity, event.site_entity_id);
    for (const auto &[kind, id] : event.references) append(kind, id);
    const auto append_clause_subject = [&](const std::optional<HistoryEventClause> &clause,
            int32_t id) {
        if (!clause) return;
        // Capture and composition consume the same enum-to-field table;
        // adding a clause cannot silently leave its participant unrecorded.
        switch (clause->field) {
        case 'n': append(NativeHistoryObjectKind::Figure, id); break;
        case 'p': append(NativeHistoryObjectKind::Entity, id); break;
        case 's': append(NativeHistoryObjectKind::Site, id); break;
        case 'i': append(NativeHistoryObjectKind::Artifact, id); break;
        default: break;
        }
    };
    if (event.kind == NativeHistoryEventKind::ArtifactCreated ||
            event.kind == NativeHistoryEventKind::HfGainsSecretGoal ||
            event.fields.contains("reason") || event.fields.contains("circumstance")) {
        append_clause_subject(history_event_reason_clause(event.reason), event.reason_data);
        append_clause_subject(history_event_circumstance_clause(event.circumstance),
            event.circumstance_data);
    }
    return complete;
}
