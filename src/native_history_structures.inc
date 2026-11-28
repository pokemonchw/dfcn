// Site-scoped abstract buildings. The supported PE's b94090 formatter uses
// world_data.sites (+178), site.buildings (+2b0), and composite AB links.
static bool native_history_find_structure_id(uintptr_t vector, size_t id_offset,
        int32_t id, uintptr_t &result) {
    result = 0;
    if (id < 0) return true;
    NativeBorrowedVector<uintptr_t> values;
    if (!native_history_read_vector(vector, values)) return false;
    // Both 7db20 (site) and 6ff00 (building) narrow to 64 entries, then scan.
    size_t begin = 0, count = values.size();
    const auto inspect = [&](size_t index, uintptr_t &candidate, int32_t &candidate_id) {
        candidate = native_history_vector_at(values, index);
        return candidate && id_offset <= UINTPTR_MAX - candidate &&
            native_history_copy(candidate + id_offset, candidate_id);
    };
    while (count > 64) {
        const size_t half = count / 2, middle = begin + half;
        uintptr_t candidate = 0;
        int32_t candidate_id = -1;
        if (!inspect(middle, candidate, candidate_id)) return false;
        if (id >= candidate_id) begin = middle;
        count -= half;
    }
    for (size_t index = begin; index < begin + count; ++index) {
        uintptr_t candidate = 0;
        int32_t candidate_id = -1;
        if (!inspect(index, candidate, candidate_id)) return false;
        if (candidate_id == id) { result = candidate; break; }
    }
    return true;
}

static bool capture_native_structure_name(uintptr_t base, uintptr_t building,
        const NativeHistoryStructureProfile &profile, NativeHistoryName &name) {
    if (!capture_native_history_name(base, native_history_object_field(
            building, {}, profile.name_offset), name)) return false;
    name.tavern_name = profile.type == 8;
    return true;
}

static bool capture_native_history_structure(uintptr_t base, int32_t site_id,
        int32_t building_id, NativeHistorySubject &result, bool *found = nullptr) {
    if (found) *found = false;
    if (!base) return false;
    NativeHistorySubject copy;
    copy.kind = NativeHistoryObjectKind::Building;
    copy.id = site_id;
    copy.subid = building_id;
    copy.label_key = "an unknown building";
    uintptr_t world_data = 0, site = 0, building = 0;
    if (!native_history_copy(native_history_global(0x24ebb58), world_data)) return false;
    if (world_data && (!native_history_find_structure_id(native_history_object_field(world_data, "world_data", 0x178),
            0x88, site_id, site) || (site && !native_history_find_structure_id(
                site + 0x2b0, 8, building_id, building)))) return false;
    if (!building) { result = std::move(copy); return true; }
    if (found) *found = true;

    // Native class identity and field placement come from the shared schema.
    const auto *layout = native_history_dynamic_layout(building);
    if (!layout) return false;
    if (std::string_view(layout->name) == "abstract_building") {
        // PE vtable 15e7be0: getType (66e60) returns -1 and getName
        // (66e90) returns null. b94090 consequently uses its unknown-type
        // branch in both named and type-only modes.
        result = std::move(copy);
        return true;
    }
    const NativeHistoryStructureProfile *profile = nullptr;
    for (const auto &candidate : kNativeHistoryStructureProfiles)
        if (std::string_view(layout->name) == candidate.name) { profile = &candidate; break; }
    if (!profile || !capture_native_structure_name(base, building, *profile, copy.name)) return false;
    copy.label_key = profile->label;
    copy.native_type = profile->type;
    if (profile->type == 6) {
        int16_t subtype = -1;
        if (!native_history_copy(native_history_object_field(building, {}, 0x130), subtype)) return false;
        copy.label_key = subtype >= 0 && subtype < 3
            ? std::string(kNativeHistoryDungeonSubtypeLabels[subtype]) : std::string{};
    }
    result = std::move(copy);
    return true;
}

static bool native_history_structure_reference(NativeHistoryEventData &result,
        int32_t site_id, int32_t building_id) {
    for (const auto &subject : result.subjects)
        if (subject.kind == NativeHistoryObjectKind::Building &&
            subject.id == site_id && subject.subid == building_id) return true;
    NativeHistorySubject subject;
    if (!capture_native_history_structure(native_history_profile_base(), site_id,
            building_id, subject)) return false;
    result.subjects.push_back(std::move(subject));
    return true;
}
