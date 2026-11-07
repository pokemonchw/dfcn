// Places/Zones draws its type, related identity and occupancy separately.
// Preserve those native roles while the renderer's current building is live.
static std::optional<NativeFortressZoneCaption> capture_native_fortress_zone_caption(
        uintptr_t caller, uintptr_t source) {
#ifdef _WIN32
    const uintptr_t base = native_history_profile_base();
    if (!base || !caller || !source) return std::nullopt;
    using Kind = NativeFortressZoneCaption::Kind;
    const auto variable_row_caption = [&](Kind kind, int following_line = 0) {
        NativeFortressZoneCaption caption{kind, false};
        // These callers use r13/rsp+0x54. The renderer selects row_top+1
        // at width >= 40, otherwise row_top+2. With source at rbp+0xb0,
        // its original column width at rbp-0x6c is source-0x11c.
        // Available/Present add one more row to that selected baseline.
        int32_t width = -1;
        if (source >= 0x11c && native_history_copy(source - 0x11c, width) &&
                width >= 0 && width <= 1000)
            caption.line_offset = (width < 40 ? 1 : 0) + following_line;
        return caption;
    };
    if (caller == native_reference_address(base, 0x39d10a) ||
            caller == native_reference_address(base, 0x39d857))
        return variable_row_caption(Kind::Assigned);
    if (caller == native_reference_address(base, 0x39ce56) ||
            caller == native_reference_address(base, 0x39d1f9))
        return variable_row_caption(Kind::Present, 1);
    if (caller == native_reference_address(base, 0x39cd4f))
        return variable_row_caption(Kind::Imprisoned);
    if (caller == native_reference_address(base, 0x39db64)) {
        // Patient counts and stockpile occupancy join the same addst call.
        // Keep the complete field's native role before its bytes are claimed.
        std::string complete;
        const bool occupancy = native_history_copy_string(source, complete) &&
            complete.ends_with("% occupied");
        return variable_row_caption(occupancy ? Kind::Occupancy : Kind::Patients);
    }
    if (caller == native_reference_address(base, 0x39db94))
        return NativeFortressZoneCaption{Kind::Fixed, false};
    const bool type = caller == native_reference_address(base, 0x39c809);
    const bool related = caller == native_reference_address(base, 0x39cb3d);
    const bool location_name_draw = caller == native_reference_address(base, 0x39d2e9);
    const bool location_description_draw = caller == native_reference_address(base, 0x39d4e0);
    const bool current_location = location_name_draw || location_description_draw;
    const bool detail_location_name = caller == native_reference_address(base, 0x3e9692);
    const bool detail_location_description = caller == native_reference_address(base, 0x3e99e0);
    const bool detail_location = detail_location_name || detail_location_description;
    if (!type && !related && !current_location && !detail_location) return std::nullopt;

    const uintptr_t buildings = native_reference_address(base, 0x23edf10);
    const native_history_abi::FieldOffset building_id{0x50, "building", "id"};
    const native_history_abi::FieldOffset building_name{0xd0, "building", "name"};
    const native_history_abi::FieldOffset building_site{0x114, "building", "site_id"};
    const native_history_abi::FieldOffset building_location{0x118, "building", "location_id"};
    const native_history_abi::FieldOffset site_buildings{0x2b0, "world_site", "buildings"};
    const native_history_abi::FieldOffset location_id_field{8, "abstract_building", "id"};
    const auto current_building = [&](uintptr_t candidate) {
        if (!candidate || !buildings || !building_id.contains(0, 4, 4)) return false;
        int32_t id = -1;
        uintptr_t actual = 0;
        return native_history_copy(building_id.address(candidate, 0, 4, 4), id) && id >= 0 &&
            native_history_find_structure_id(buildings, building_id.runtime(), id, actual) &&
            actual == candidate;
    };
    const auto find_location = [&](uintptr_t site, int32_t id, uintptr_t &location) {
        return location_id_field.contains(0, 4, 4) &&
            native_history_find_structure_id(site_buildings.address(site, 0, 24, 24),
                location_id_field.runtime(), id, location);
    };

    NativeFortressZoneCaption caption;
    if (detail_location) {
        // The selected-zone card keeps its original zone at rbp-0x78 and
        // its resolved location at rbp-0x70. Both complete fields use the
        // same string at rbp+0x1a10 before the shared resize hook shortens it.
        uintptr_t building = 0, location = 0;
        if (source < 0x1a88 || !native_history_copy(source - 0x1a88, building) ||
                !current_building(building) ||
                !native_history_copy(source - 0x1a80, location) || !location)
            return std::nullopt;
        int32_t site_id = -1, location_id = -1;
        if (!native_history_copy(building_site.address(building, 0, 4, 4), site_id) || site_id < 0 ||
                !native_history_copy(building_location.address(building, 0, 4, 4), location_id) || location_id < 0)
            return std::nullopt;
        const uintptr_t site = native_history_find_subject(base, NativeHistoryObjectKind::Site, site_id);
        uintptr_t actual_location = 0;
        if (!find_location(site, location_id, actual_location) ||
                actual_location != location) return std::nullopt;
        const auto *layout = native_history_dynamic_layout(location);
        if (!layout) return std::nullopt;
        for (const auto &profile : kNativeHistoryStructureProfiles) {
            if (std::string_view(layout->name) != profile.name) continue;
            // Only the guildhall branch emits this profession/tier field.
            if (detail_location_description && profile.type != 11) return std::nullopt;
            caption.kind = detail_location_name ? Kind::LocationName : Kind::LocationDescription;
            caption.authored = false;
            caption.detail = true;
            if (detail_location_name) {
                NativeHistoryName name;
                if (capture_native_history_name(base, native_history_object_field(
                        location, {}, profile.name_offset), name) && name.has_name)
                    caption.location_name = std::make_shared<const NativeHistoryName>(
                        std::move(name));
            }
            return caption;
        }
        return std::nullopt;
    }
    if (current_location) {
        caption.kind = location_name_draw ? Kind::LocationName : Kind::LocationDescription;
        caption.authored = false;
        // These separate native callers own the name and type/tier fields,
        // even when their object snapshot is unavailable. Their later block
        // uses current_site and does not require building.site_id (+0x114).
        if (location_description_draw) return caption;
        uintptr_t building = 0, location = 0;
        // 39d215 freezes the location chosen by 6ff00 at rsp+0x68.
        // source is rbp+0xb0 == rsp+0x1b0, so this exact draw still owns
        // source-0x148; source-0x170 retains its original zone at rsp+0x40.
        if (source < 0x170 || !native_history_copy(source - 0x170, building) ||
                !current_building(building) ||
                !native_history_copy(source - 0x148, location) || !location) return caption;
        const auto *layout = native_history_dynamic_layout(location);
        if (layout) {
            for (const auto &profile : kNativeHistoryStructureProfiles) {
                if (std::string_view(layout->name) != profile.name) continue;
                NativeHistoryName name;
                if (capture_native_history_name(base, native_history_object_field(
                        location, {}, profile.name_offset), name) && name.has_name)
                    caption.location_name = std::make_shared<const NativeHistoryName>(
                        std::move(name));
                break;
            }
        }
        return caption;
    }
    if (type) {
        // 39c70c checks building.name.size; its nonempty branch passes the
        // owned string at building+0xd0 directly, without a stack copy.
        // Confirm membership before treating source-0xd0 as that owner.
        if (building_name.contains(0, sizeof(NativeString), sizeof(NativeString)) &&
                source >= building_name.runtime() && current_building(source - building_name.runtime())) return caption;
    }

    // The default type and every related-identity branch pass rbp+0xb0.
    // rbp=rsp+0x100 and rsp+0x40 retains this record's original building,
    // even when the renderer subsequently reuses rdi for a count/owner.
    uintptr_t building = 0;
    if (source < 0x170 || !native_history_copy(source - 0x170, building) ||
            !current_building(building)) return type
        ? std::optional<NativeFortressZoneCaption>(caption) : std::nullopt;
    if (type) {
        std::string name;
        if (native_history_copy_string(building_name.address(building, 0,
                sizeof(NativeString), sizeof(NativeString)), name) && name.empty())
            caption.authored = false;
        return caption;
    }

    caption.authored = false;
    // 39c809 first takes the assigned abstract location for every zone type.
    // 7db20 verifies site_id, but 67e80 resolves location_id in the current
    // fortress site's buildings, exactly as the native renderer does.
    int32_t site_id = -1, location_id = -1;
    if (!native_history_copy(building_site.address(building, 0, 4, 4), site_id) ||
            !native_history_copy(building_location.address(building, 0, 4, 4), location_id)) return std::nullopt;
    if (site_id >= 0 && location_id >= 0) {
        caption.kind = Kind::Location;
        uintptr_t site = 0, location = 0;
        if (native_history_find_subject(base, NativeHistoryObjectKind::Site, site_id) &&
                native_history_copy(native_reference_address(base, 0x239a1f0), site) &&
                find_location(site, location_id, location) &&
                location) {
            const auto *layout = native_history_dynamic_layout(location);
            if (layout) {
                for (const auto &profile : kNativeHistoryStructureProfiles) {
                    if (std::string_view(layout->name) != profile.name) continue;
                    NativeHistoryName name;
                    if (capture_native_history_name(base, native_history_object_field(
                            location, {}, profile.name_offset), name))
                        caption.location_name = std::make_shared<const NativeHistoryName>(
                            std::move(name));
                    break;
                }
            }
        }
        return caption;
    }

    // 39c940 selects the room's owner by unit ID. The live unit path calls
    // the already hooked 1330c30 formatter, whose target is bound to source.
    // A missing live unit falls back to history::figures by HF.unit_id.
    int32_t unit_id = -1;
    const native_history_abi::FieldOffset assigned_unit{0x1a0, "building_civzonest", "assigned_unit_id"};
    if (!native_history_copy(assigned_unit.address(building, 0, 4, 4), unit_id)) return std::nullopt;
    if (unit_id >= 0) {
        caption.kind = Kind::Unit;
        uintptr_t unit = 0;
        const native_history_abi::FieldOffset unit_id_field{0x130, "unit", "id"};
        if (!unit_id_field.contains(0, 4, 4) ||
                !native_history_find_structure_id(native_reference_address(base, 0x23e50b0),
                    unit_id_field.runtime(), unit_id, unit) || unit) return caption;

        // 30ff50 scans this vector backwards: its key is +d8 unit_id,
        // whereas the vector's ordering and b92f10's key use +e0 HF id.
        NativeBorrowedVector<uintptr_t> figures;
        const native_history_abi::FieldOffset figure_unit{0xd8, "historical_figure", "unit_id"};
        const native_history_abi::FieldOffset figure_name{0x38, "historical_figure", "name"};
        if (!native_history_read_vector(native_history_global(0x24f9d18), figures)) return caption;
        for (size_t index = figures.size(); index > 0; --index) {
            const uintptr_t figure = native_history_vector_at(figures, index - 1);
            int32_t owner_id = -1;
            if (!native_history_copy(figure_unit.address(figure, 0, 4, 4), owner_id) || owner_id != unit_id)
                continue;
            NativeUnitIdentity identity;
            const uintptr_t name = figure_name.address(figure, 0, 1, 120);
            // Places passes a fresh, empty context and 1/1 to b92f10.
            // That path uses this HF.name through EnglishName (b93504),
            // without a disguised identity, pronoun, or creature suffix.
            if (capture_native_history_name(base, name, identity.name) &&
                    identity.name.has_name &&
                    native_history_copy_string(source, identity.native_name)) {
                identity.native_name_words_valid = capture_native_unit_identity_name_words(
                    name, identity.name, identity.native_name_words);
                identity.id = unit_id;
                identity.form = NativeUnitIdentityForm::NameOnly;
                identity.english_name = true;
                caption.unit_identity = std::make_shared<const NativeUnitIdentity>(
                    std::move(identity));
            }
            break;
        }
        return caption;
    }
    if (unit_id != -1) return std::nullopt;

    // Only an unowned room reaches the assigned squad records. 39ca97
    // renders the count for two or more; 39cb07 renders squad.name at +8
    // for exactly one, capitalizes it, and appends " assigned".
    NativeBorrowedVector<uintptr_t> assignments;
    const native_history_abi::FieldOffset squad_rooms{0x1a8, "building_civzonest", "squad_room_info"};
    if (!native_history_read_vector(squad_rooms.address(building, 0, 24, 24), assignments)) return std::nullopt;
    if (assignments.size() >= 2) {
        caption.kind = Kind::SquadCount;
        return caption;
    }
    if (assignments.size() != 1) return std::nullopt;
    const uintptr_t assignment = native_history_vector_at(assignments, 0);
    int32_t squad_id = -1;
    uintptr_t squad = 0;
    const native_history_abi::FieldOffset assignment_squad{0, "building_squad_infost", "squad_id"};
    const native_history_abi::FieldOffset squad_id_field{0, "squad", "id"};
    const native_history_abi::FieldOffset squad_name{8, "squad", "name"};
    if (!native_history_copy(assignment_squad.address(assignment, 0, 4, 4), squad_id) || squad_id < 0 ||
            !squad_id_field.contains(0, 4, 4) ||
            !native_history_find_structure_id(native_reference_address(base, 0x24e37c0),
                squad_id_field.runtime(), squad_id, squad) || !squad) return std::nullopt;
    caption.kind = Kind::Squad;
    NativeHistoryName name;
    if (capture_native_history_name(base, squad_name.address(squad, 0, 1, 120), name))
        caption.squad_name = std::make_shared<const NativeHistoryName>(std::move(name));
    // This native branch never reads squad.alias. A nonempty alias elsewhere
    // must not replace the generated name that this particular draw chose.
    return caption;
#else
    (void)caller;
    (void)source;
    return std::nullopt;
#endif
}
