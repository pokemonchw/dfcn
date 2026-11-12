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
    const auto current_building = [&](uintptr_t candidate) {
        if (!candidate || candidate > UINTPTR_MAX - 0x1c0 || !buildings) return false;
        int32_t id = -1;
        uintptr_t actual = 0;
        return native_history_copy(candidate + 0x50, id) && id >= 0 &&
            native_history_find_structure_id(buildings, 0x50, id, actual) &&
            actual == candidate;
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
        if (!native_history_copy(building + 0x114, site_id) || site_id < 0 ||
                !native_history_copy(building + 0x118, location_id) || location_id < 0)
            return std::nullopt;
        const uintptr_t site = native_history_find_subject(base, NativeHistoryObjectKind::Site, site_id);
        uintptr_t actual_location = 0;
        if (!site || site > UINTPTR_MAX - 0x2c8 ||
                !native_history_find_structure_id(site + 0x2b0, 8, location_id, actual_location) ||
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
        if (source >= 0xd0 && current_building(source - 0xd0)) return caption;
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
        if (native_history_copy_string(building + 0xd0, name) && name.empty())
            caption.authored = false;
        return caption;
    }

    caption.authored = false;
    // 39c809 first takes the assigned abstract location for every zone type.
    // 7db20 verifies site_id, but 67e80 resolves location_id in the current
    // fortress site's buildings, exactly as the native renderer does.
    int32_t site_id = -1, location_id = -1;
    if (!native_history_copy(building + 0x114, site_id) ||
            !native_history_copy(building + 0x118, location_id)) return std::nullopt;
    if (site_id >= 0 && location_id >= 0) {
        caption.kind = Kind::Location;
        uintptr_t site = 0, location = 0;
        if (native_history_find_subject(base, NativeHistoryObjectKind::Site, site_id) &&
                native_history_copy(native_reference_address(base, 0x239a1f0), site) &&
                site && site <= UINTPTR_MAX - 0x2c8 &&
                native_history_find_structure_id(site + 0x2b0, 8, location_id, location) &&
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
    if (!native_history_copy(building + 0x1a0, unit_id)) return std::nullopt;
    if (unit_id >= 0) {
        caption.kind = Kind::Unit;
        uintptr_t unit = 0;
        if (!native_history_find_structure_id(native_reference_address(base, 0x23e50b0),
                0x130, unit_id, unit) || unit) return caption;

        // 30ff50 scans this vector backwards: its key is +d8 unit_id,
        // whereas the vector's ordering and b92f10's key use +e0 HF id.
        NativeBorrowedVector<uintptr_t> figures;
        const uintptr_t history = native_reference_address(base, 0x24f9cb8);
        if (!history || !native_history_read_vector(history + 0x60, figures)) return caption;
        for (size_t index = figures.size(); index > 0; --index) {
            const uintptr_t figure = native_history_vector_at(figures, index - 1);
            int32_t owner_id = -1;
            if (!figure || figure > UINTPTR_MAX - 0xe4 ||
                    !native_history_copy(figure + 0xd8, owner_id) || owner_id != unit_id)
                continue;
            NativeUnitIdentity identity;
            const uintptr_t name = figure + 0x38;
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
    if (!native_history_read_vector(building + 0x1a8, assignments)) return std::nullopt;
    if (assignments.size() >= 2) {
        caption.kind = Kind::SquadCount;
        return caption;
    }
    if (assignments.size() != 1) return std::nullopt;
    const uintptr_t assignment = native_history_vector_at(assignments, 0);
    int32_t squad_id = -1;
    uintptr_t squad = 0;
    if (!assignment || !native_history_copy(assignment, squad_id) || squad_id < 0 ||
            !native_history_find_structure_id(native_reference_address(base, 0x24e37c0),
                0, squad_id, squad) || !squad) return std::nullopt;
    caption.kind = Kind::Squad;
    NativeHistoryName name;
    if (squad <= UINTPTR_MAX - 8 && capture_native_history_name(base, squad + 8, name))
        caption.squad_name = std::make_shared<const NativeHistoryName>(std::move(name));
    // This native branch never reads squad.alias. A nonempty alias elsewhere
    // must not replace the generated name that this particular draw chose.
    return caption;
#else
    using Kind = NativeFortressZoneCaption::Kind;
    if (!source || !caller) return std::nullopt;
    const auto at = [&](uintptr_t address) { return caller == native_elf_5317_address(address); };
    const bool detail_name = at(0x16b69a5), detail_description = at(0x16b6bf4);
    const bool type = at(0xda1454), authored_type = at(0xda2142);
    const bool related = at(0xda1585);
    const bool location_name = at(0xda09dd), location_description = at(0xda1b0e);
    const bool assigned = at(0xda2073) || at(0xda2d5c);
    const bool counts = at(0xda0e7c), imprisoned = at(0xda16b9);
    if (!type && !authored_type && !related && !location_name && !location_description &&
            !assigned && !counts && !imprisoned && !detail_name && !detail_description) return std::nullopt;
    const uintptr_t base = native_history_profile_base();
    const auto building_is_live = [&](uintptr_t building) {
        uintptr_t actual = 0;
        int32_t id = -1;
        return building && native_history_copy(building + 0x50, id) && id >= 0 &&
            native_history_find_structure_id(native_history_global(0x23edf10), 0x50, id, actual) && actual == building;
    };
    NativeFortressZoneCaption caption;
    if (detail_name || detail_description) {
        // The selected-zone renderer keeps the building at rbp-1a8 and
        // submits its location field from rbp-a0 before native shortening.
        uintptr_t building = 0, location = 0;
        int32_t site_id = -1, location_id = -1;
        if (source < 0x108 || !native_history_copy(source - 0x108, building) ||
                !building_is_live(building) ||
                !native_history_copy(building + 0x114, site_id) || site_id < 0 ||
                !native_history_copy(building + 0x118, location_id) || location_id < 0) return std::nullopt;
        const auto site = native_history_find_subject(base, NativeHistoryObjectKind::Site, site_id);
        if (!site || !native_history_find_structure_id(native_history_object_member(site,
                "world_site", "buildings", 24), 8, location_id, location) || !location) return std::nullopt;
        const auto *layout = native_history_dynamic_layout(location);
        if (!layout) return std::nullopt;
        for (const auto &profile : kNativeHistoryStructureProfiles) {
            if (std::string_view(layout->name) != profile.name) continue;
            if (detail_description && profile.type != 11) return std::nullopt;
            caption.kind = detail_name ? Kind::LocationName : Kind::LocationDescription;
            caption.detail = true;
            if (detail_name) {
                NativeHistoryName name;
                if (capture_native_history_name(base, native_history_object_field(location, {},
                        profile.name_offset), name) && name.has_name)
                    caption.location_name = std::make_shared<const NativeHistoryName>(std::move(name));
            }
            return caption;
        }
        return std::nullopt;
    }

    if (authored_type) {
        return source >= 0xd0 && building_is_live(source - 0xd0)
            ? std::optional<NativeFortressZoneCaption>(caption) : std::nullopt;
    }
    if (source > UINTPTR_MAX - 0x80) return std::nullopt;
    const uintptr_t frame = source + 0x80; // native row string at rbp-80
    if (frame < 0x1e8) return std::nullopt;
    if (assigned || counts || imprisoned) {
        std::string complete;
        if (!native_history_copy_string(source, complete)) return std::nullopt;
        caption.authored = false;
        caption.kind = assigned ? Kind::Assigned : imprisoned ? Kind::Imprisoned :
            complete.ends_with("% occupied") ? Kind::Occupancy :
            complete.find("patient") != std::string::npos ? Kind::Patients : Kind::Present;
        int32_t width = -1;
        if (native_history_copy(frame - 0x1e8, width) && width >= 0 && width <= 1000)
            caption.line_offset = (width < 40 ? 1 : 0) + (counts ? 1 : 0);
        return caption;
    }
    if (location_name || location_description) {
        caption.authored = false;
        caption.kind = location_name ? Kind::LocationName : Kind::LocationDescription;
        uintptr_t location = 0;
        if (native_history_copy(frame - 0x178, location) && location_name) {
            const auto *layout = native_history_dynamic_layout(location);
            if (layout) for (const auto &profile : kNativeHistoryStructureProfiles) {
                if (std::string_view(layout->name) != profile.name) continue;
                NativeHistoryName name;
                if (capture_native_history_name(base, native_history_object_field(location, {}, profile.name_offset), name) && name.has_name)
                    caption.location_name = std::make_shared<const NativeHistoryName>(std::move(name));
                break;
            }
        }
        return caption;
    }
    uintptr_t building = 0;
    if (!native_history_copy(frame - 0x1b0, building) || !building_is_live(building)) return std::nullopt;
    if (type) {
        std::string authored;
        if (native_history_copy_string(building + 0xd0, authored)) caption.authored = !authored.empty();
        return caption;
    }
    caption.authored = false;
    int32_t site_id = -1, location_id = -1, unit_id = -1;
    if (!native_history_copy(building + 0x114, site_id) || !native_history_copy(building + 0x118, location_id))
        return std::nullopt;
    if (site_id >= 0 && location_id >= 0) {
        caption.kind = Kind::Location;
        const auto site = native_history_find_subject(base, NativeHistoryObjectKind::Site, site_id);
        uintptr_t location = 0;
        if (site && native_history_find_structure_id(native_history_object_member(site, "world_site", "buildings", 24),
                8, location_id, location) && location) {
            const auto *layout = native_history_dynamic_layout(location);
            if (layout) for (const auto &profile : kNativeHistoryStructureProfiles) {
                if (std::string_view(layout->name) != profile.name) continue;
                NativeHistoryName name;
                if (capture_native_history_name(base, native_history_object_field(location, {}, profile.name_offset), name) && name.has_name)
                    caption.location_name = std::make_shared<const NativeHistoryName>(std::move(name));
                break;
            }
        }
        return caption;
    }
    if (!native_history_copy(building + 0x1a0, unit_id)) return std::nullopt;
    if (unit_id >= 0) {
        caption.kind = Kind::Unit;
        uintptr_t unit = 0;
        const auto id_field = native_history_object_field(1, "unit", 0x130, 4);
        if (!id_field || !native_history_find_structure_id(native_history_global(0x23e50b0),
                id_field - 1, unit_id, unit) || unit) return caption;
        NativeBorrowedVector<uintptr_t> figures;
        if (!native_history_read_vector(native_history_global(0x24f9d18), figures)) return caption;
        for (size_t index = figures.size(); index > 0; --index) {
            const auto figure = native_history_vector_at(figures, index - 1);
            int32_t owner_id = -1;
            if (!figure || !native_history_copy(native_history_object_member(figure,
                    "historical_figure", "unit_id", 4), owner_id) || owner_id != unit_id) continue;
            NativeUnitIdentity identity;
            const auto name = native_history_object_field(figure, "historical_figure", 0x38);
            if (capture_native_history_name(base, name, identity.name) && identity.name.has_name &&
                    native_history_copy_string(source, identity.native_name)) {
                identity.native_name_words_valid = capture_native_unit_identity_name_words(
                    name, identity.name, identity.native_name_words);
                identity.id = unit_id; identity.form = NativeUnitIdentityForm::NameOnly;
                identity.english_name = true;
                caption.unit_identity = std::make_shared<const NativeUnitIdentity>(std::move(identity));
            }
            break;
        }
        return caption;
    }
    NativeBorrowedVector<uintptr_t> assignments;
    if (unit_id != -1 || !native_history_read_vector(building + 0x1a8, assignments) || !assignments.valid(65536))
        return std::nullopt;
    if (assignments.size() >= 2) { caption.kind = Kind::SquadCount; return caption; }
    if (assignments.size() != 1) return std::nullopt;
    int32_t squad_id = -1;
    uintptr_t squad = 0;
    if (!native_history_copy(native_history_vector_at(assignments, 0), squad_id) || squad_id < 0 ||
            !native_history_find_structure_id(native_history_global(0x24e37c0), 0, squad_id, squad) || !squad)
        return std::nullopt;
    caption.kind = Kind::Squad;
    NativeHistoryName name;
    if (capture_native_history_name(base, squad + 8, name))
        caption.squad_name = std::make_shared<const NativeHistoryName>(std::move(name));
    return caption;
#endif
}
