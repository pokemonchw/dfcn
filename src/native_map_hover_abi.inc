// Normalize native look records before the shared matcher interprets them.
// Record layout, enum ordinals and liquid flag bits have separate evidence.
static bool native_map_hover_record(uintptr_t record, NativeMapHoverContext &context) {
    int32_t native_kind = -1;
    const native_history_abi::FieldOffset kind_member{0, "lookinfost", "type"};
    if (!native_history_copy(kind_member.address(record, 0, 4, 4), native_kind)) return false;
    static constexpr std::array<std::string_view, 16> kinds{{
        "Item", "Floor", "Unit", "Building", "Vermin", "Flow", "Campfire", "Spatter",
        "BuildingItem", "Fire", "Water", "Magma", "Spoor", "Sound", "MemoryMap", "ExtraSense"
    }};
    int32_t canonical_kind = -1;
    for (size_t index = 0; index < kinds.size(); ++index) {
        const auto value = native_history_abi::enum_value("look_info_type", kinds[index], static_cast<int32_t>(index));
        if (!value || *value != native_kind) continue;
        if (canonical_kind != -1) return false;
        canonical_kind = static_cast<int32_t>(index);
    }
    if (canonical_kind < 0) return false;
    NativeMapHoverContext result;
    result.kind = static_cast<NativeMapHoverKind>(canonical_kind);
    result.fragment = context.fragment;
    const auto copy = [&](native_history_abi::FieldOffset field, size_t offset, size_t width) {
        return offset <= sizeof(result.data) && width <= sizeof(result.data) - offset &&
            native_history_copy_bytes(field.address(record, 0, width, width),
                reinterpret_cast<unsigned char *>(result.data.data()) + offset, width);
    };
    bool copied = false;
    switch (result.kind) {
    case NativeMapHoverKind::Item:
        copied = copy({4, "lookinfost", "data.item.item_id"}, 0, 4); break;
    case NativeMapHoverKind::Terrain:
        copied = copy({4, "lookinfost", "data.floor.empty"}, 0, 4); break;
    case NativeMapHoverKind::Unit:
        copied = copy({4, "lookinfost", "data.unit.unit_id"}, 0, 4); break;
    case NativeMapHoverKind::Building:
        copied = copy({4, "lookinfost", "data.building.bld_id"}, 0, 4); break;
    case NativeMapHoverKind::Vermin:
        // The caption matcher uses the item identity, colony flag and count;
        // race/caste names already come from the complete native caption.
        copied = copy({8, "lookinfost", "data.vermin.item_id"}, 4, 4) &&
            copy({0xc, "lookinfost", "data.vermin.flag"}, 8, 4) &&
            copy({0x10, "lookinfost", "data.vermin.number"}, 12, 4); break;
    case NativeMapHoverKind::Flow:
        copied = copy({4, "lookinfost", "data.flow.type"}, 0, 2) &&
            copy({6, "lookinfost", "data.flow.subtype"}, 2, 2) &&
            copy({8, "lookinfost", "data.flow.sstype"}, 4, 4) &&
            copy({0xc, "lookinfost", "data.flow.guide_id"}, 8, 4) &&
            copy({0x10, "lookinfost", "data.flow.flag"}, 12, 4); break;
    case NativeMapHoverKind::Campfire:
        copied = copy({4, "lookinfost", "data.campfire.empty"}, 0, 4); break;
    case NativeMapHoverKind::Spatter:
        // Item/deposit selection is the only payload-dependent production.
        copied = copy({4, "lookinfost", "data.spatter.i_type"}, 0, 4); break;
    case NativeMapHoverKind::BuildingItem:
        copied = copy({4, "lookinfost", "data.building_item_adv.item_id"}, 0, 4); break;
    case NativeMapHoverKind::Fire:
        copied = copy({4, "lookinfost", "data.fire.empty"}, 0, 4); break;
    case NativeMapHoverKind::Water:
        copied = copy({4, "lookinfost", "data.liquid_water.flag"}, 0, 4) &&
            copy({8, "lookinfost", "data.liquid_water.amount"}, 4, 2); break;
    case NativeMapHoverKind::Magma:
        copied = copy({4, "lookinfost", "data.liquid_magma.flag"}, 0, 4) &&
            copy({8, "lookinfost", "data.liquid_magma.amount"}, 4, 2); break;
    case NativeMapHoverKind::Spoor:
        copied = copy({4, "lookinfost", "data.spoor.flag"}, 0, 2) &&
            copy({6, "lookinfost", "data.spoor.type"}, 2, 1) &&
            copy({8, "lookinfost", "data.spoor.id1"}, 4, 4) &&
            copy({0xc, "lookinfost", "data.spoor.id2"}, 8, 4) &&
            copy({0x10, "lookinfost", "data.spoor.id3"}, 12, 4); break;
    case NativeMapHoverKind::Sound:
        copied = copy({4, "lookinfost", "data.sound.type"}, 0, 4) &&
            copy({8, "lookinfost", "data.sound.size"}, 4, 2) &&
            copy({0xc, "lookinfost", "data.sound.timer"}, 8, 4); break;
    case NativeMapHoverKind::MemoryMap:
        copied = copy({4, "lookinfost", "data.memory_map.type"}, 0, 4); break;
    case NativeMapHoverKind::ExtraSense:
        copied = copy({4, "lookinfost", "data.extra_sense.sense_tile"}, 0, 1) &&
            copy({6, "lookinfost", "data.extra_sense.sense_f"}, 2, 2) &&
            copy({8, "lookinfost", "data.extra_sense.sense_b"}, 4, 2) &&
            copy({0xa, "lookinfost", "data.extra_sense.sense_br"}, 6, 2); break;
    default: return false;
    }
    if (!copied) return false;
    if (result.kind == NativeMapHoverKind::Flow) {
        static constexpr std::array<std::string_view, 14> flows{{
            "Miasma", "Steam", "Mist", "MaterialDust", "MagmaMist", "Smoke", "Dragonfire",
            "Fire", "Web", "MaterialGas", "MaterialVapor", "OceanWave", "SeaFoam", "ItemCloud"
        }};
        int16_t native_flow = 0;
        std::memcpy(&native_flow, result.data.data(), sizeof(native_flow));
        std::optional<int16_t> canonical_flow;
        for (size_t index = 0; index < flows.size(); ++index) {
            const int16_t reference = static_cast<int16_t>(index);
            const auto value = native_history_abi::enum_value("flow_type", flows[index], reference);
            if (!value || *value != native_flow) continue;
            if (canonical_flow) return false;
            canonical_flow = reference;
        }
        if (!canonical_flow) return false;
        std::memcpy(result.data.data(), &*canonical_flow, sizeof(*canonical_flow));
    } else if (result.kind == NativeMapHoverKind::Water) {
        const auto stagnant = native_history_abi::enum_value("lookinfo_liquid_water_flag", "stagnant", 1);
        const auto salt = native_history_abi::enum_value("lookinfo_liquid_water_flag", "salt", 2);
        if (!stagnant || !salt) return false;
        const uint32_t flags = static_cast<uint32_t>(result.data[0]);
        result.data[0] = (flags & static_cast<uint32_t>(*stagnant) ? 1 : 0) |
            (flags & static_cast<uint32_t>(*salt) ? 2 : 0);
    } else if (result.kind == NativeMapHoverKind::Magma) {
        const auto subterranean = native_history_abi::enum_value("lookinfo_liquid_magma_flag", "subterranean", 1);
        if (!subterranean) return false;
        result.data[0] = static_cast<uint32_t>(result.data[0]) & static_cast<uint32_t>(*subterranean) ? 1 : 0;
    }
    context = result;
    return true;
}
