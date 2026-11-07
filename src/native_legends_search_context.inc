#ifdef _WIN32
// The native formatter arguments retain row identity across its temporary
// strings. Catalog membership supplies IDs without private loop ordinals.
struct NativeLegendsSearchRecord {
    uintptr_t object = 0;
    int32_t id = -1, site_id = -1;
};
struct NativeLegendsSearchContext {
    uintptr_t screen = 0, name = 0;
    const NativeString *query = nullptr, *name_text = nullptr, *gloss_text = nullptr,
        *species_text = nullptr;
    std::optional<LegendsSearchKind> catalog_kind;
    bool catalog_ready = false;
    std::unordered_map<uintptr_t, NativeLegendsSearchRecord> names;
    NativeLegendsSearchRecord current;
};
static NativeLegendsSearchContext &native_legends_search_context() {
    return reloadable_thread_state<NativeLegendsSearchContext, struct LegendsSearchContextTag>();
}

static uintptr_t native_legends_search_lookup(LegendsSearchKind kind, int32_t id) {
    static constexpr native_history_abi::FieldOffset identifiers[] = {
        {0xe0, "historical_figure", "id"}, {0x88, "world_site", "id"},
        {0, "artifact_record", "id"}, {0, "artifact_record", "id"},
        {0x78, "world_region", "index"}, {4, "historical_entity", "id"}, {},
        {0x80, "world_underground_region", "index"}, {0xe0, "entity_population", "id"},
    };
    const auto index = static_cast<size_t>(kind);
    if (id < 0 || index >= std::size(identifiers) || kind == LegendsSearchKind::Building ||
            !identifiers[index].contains(0, 4, 4)) return 0;
    uintptr_t vector = 0, object = 0;
    switch (kind) {
    case LegendsSearchKind::Figure: vector = native_history_global(0x24f9d18); break;
    case LegendsSearchKind::Entity: vector = native_history_global(0x23d17f8); break;
    case LegendsSearchKind::Artifact:
    case LegendsSearchKind::WrittenContent: vector = native_history_global(0x23e6180); break;
    case LegendsSearchKind::Population: vector = native_history_global(0x23d14f0); break;
    case LegendsSearchKind::Site:
    case LegendsSearchKind::Region:
    case LegendsSearchKind::Underground: {
        uintptr_t world = 0;
        if (!native_history_copy(native_history_global(0x24ebb58), world) || !world) return 0;
        const native_history_abi::FieldOffset sites{0x178, "world_data", "sites"};
        const native_history_abi::FieldOffset regions{0x238, "world_data", "regions"};
        const native_history_abi::FieldOffset layers{0x250, "world_data", "underground_regions"};
        const auto &field = kind == LegendsSearchKind::Site ? sites :
            kind == LegendsSearchKind::Region ? regions : layers;
        vector = field.address(world, 0, 24, 24);
        break;
    }
    default: return 0;
    }
    return native_history_find_structure_id(vector, identifiers[index].runtime(), id, object) ? object : 0;
}

static uintptr_t native_legends_search_object_name(LegendsSearchKind kind, uintptr_t object) {
    static constexpr native_history_abi::FieldOffset fields[] = {
        {0x38, "historical_figure", "name"},
        {0, "world_site", "name"},
        {8, "artifact_record", "name"},
        {8, "artifact_record", "name"},
        {0, "world_region", "name"},
        {0x20, "historical_entity", "name"},
        {},
        {8, "world_underground_region", "name"},
        {0, "entity_population", "name"},
    };
    const auto index = static_cast<size_t>(kind);
    if (!object || index >= std::size(fields)) return 0;
    if (kind != LegendsSearchKind::Building)
        return fields[index].address(object, 0, 1, 120);
    uintptr_t table = 0;
    if (!native_history_copy(object, table) || !table) return 0;
    const auto getter = native_object_virtual_method(reinterpret_cast<void *const *>(table),
        "abstract_building", "getName", 2, "pointer<language_name>()", 0);
    return getter ? reinterpret_cast<uintptr_t (*)(const void *)>(getter)(
        reinterpret_cast<const void *>(object)) : 0;
}

static const NativeLegendsSearchRecord *native_legends_search_record(LegendsSearchKind kind) {
    auto &context = native_legends_search_context();
    if (!context.screen || !context.name || context.screen != native_history_legends_screen()) return nullptr;
    if (!context.catalog_kind || *context.catalog_kind != kind) {
        context.catalog_kind = kind;
        context.catalog_ready = false;
        context.names.clear();
        static constexpr native_history_abi::FieldOffset catalogs[] = {
            {0x1b0, "viewscreen_legendsst", "histfigs"},
            {0x1c8, "viewscreen_legendsst", "sites"},
            {0x1e0, "viewscreen_legendsst", "artifacts"},
            {0x1f8, "viewscreen_legendsst", "codices"},
            {0x210, "viewscreen_legendsst", "regions"},
            {0x240, "viewscreen_legendsst", "entities"},
            {0x258, "viewscreen_legendsst", "structure_sites"},
            {0x228, "viewscreen_legendsst", "layers"},
            {0x288, "viewscreen_legendsst", "entity_population"},
        };
        const auto index = static_cast<size_t>(kind);
        NativeBorrowedVector<int32_t> ids, building_ids;
        if (index >= std::size(catalogs) || !native_history_copy(catalogs[index].address(
                context.screen, 0, sizeof(ids), sizeof(ids)), ids) || !ids.valid(1u << 24)) return nullptr;
        const native_history_abi::FieldOffset structures{0x270, "viewscreen_legendsst", "structures_indices"};
        const native_history_abi::FieldOffset site_buildings{0x2b0, "world_site", "buildings"};
        const native_history_abi::FieldOffset building_id{8, "abstract_building", "id"};
        if (kind == LegendsSearchKind::Building && (!native_history_copy(structures.address(
                context.screen, 0, sizeof(building_ids), sizeof(building_ids)), building_ids) ||
                !building_ids.valid(1u << 24) || building_ids.size() != ids.size() ||
                !building_id.contains(0, 4, 4))) return nullptr;
        for (size_t ordinal = 0; ordinal < ids.size(); ++ordinal) {
            NativeLegendsSearchRecord record;
            if (!native_history_copy(reinterpret_cast<uintptr_t>(ids.begin) + ordinal * 4, record.id)) return nullptr;
            if (record.id < 0) continue;
            if (kind == LegendsSearchKind::Building) {
                record.site_id = record.id;
                const auto site = native_legends_search_lookup(LegendsSearchKind::Site, record.site_id);
                if (!native_history_copy(reinterpret_cast<uintptr_t>(building_ids.begin) + ordinal * 4, record.id)) return nullptr;
                if (site && !native_history_find_structure_id(site_buildings.address(site, 0, 24, 24),
                        building_id.runtime(), record.id, record.object)) return nullptr;
            } else record.object = native_legends_search_lookup(kind, record.id);
            if (!record.object) continue;
            const auto name = native_legends_search_object_name(kind, record.object);
            if (!name) return nullptr;
            const auto [position, added] = context.names.emplace(name, record);
            if (!added && (position->second.object != record.object ||
                    position->second.id != record.id || position->second.site_id != record.site_id))
                return nullptr;
        }
        context.catalog_ready = true;
    }
    if (!context.catalog_ready) return nullptr;
    const auto found = context.names.find(context.name);
    if (found == context.names.end()) return nullptr;
    context.current = found->second;
    return &context.current;
}

static bool native_legends_search_current(const char *text, size_t length,
        const char *query, size_t query_length, bool descriptor = false) {
    const auto &context = native_legends_search_context();
    std::string_view submitted_query, submitted_name;
    if (!context.screen || !context.name || !context.query ||
            context.screen != native_history_legends_screen() ||
            !native_string_view(context.query, &submitted_query, 4096) ||
            submitted_query.data() != query || submitted_query.size() != query_length) return false;
    return descriptor || (context.name_text && native_string_view(context.name_text, &submitted_name, 16384) &&
        submitted_name.data() == text && submitted_name.size() == length);
}

static uintptr_t native_legends_search_figure_descriptor() {
    const auto *record = native_legends_search_record(LegendsSearchKind::Figure);
    const native_history_abi::FieldOffset info{0x130, "historical_figure", "info"};
    const native_history_abi::FieldOffset curse{0x48, "historical_figure_info", "curse"};
    uintptr_t information = 0, descriptor = 0;
    return record && native_history_copy(info.address(record->object, 0, 8, 8), information) &&
        native_history_copy(curse.address(information, 0, 8, 8), descriptor) ? descriptor : 0;
}
#endif
