// Both abstract stock groups and concrete items carry the same native BAR
// material tuple. Read its RAW identity and solid noun once for both paths.
static bool populate_native_builtin_bar_material(NativeTradeItemCaption &caption) {
    if (caption.type != 0 || caption.subtype != -1 || caption.material < 1 ||
            caption.material > 18 || caption.material == 7 ||
            caption.material_index != -1) return false;
    uintptr_t material = 0;
    std::string id, prefix, state;
    if (!native_history_material_object(native_history_profile_base(),
            static_cast<int16_t>(caption.material), caption.material_index, material) ||
            !material || material > UINTPTR_MAX - 0x540 ||
            !native_history_copy_string(native_history_object_field(
                material, "material", 0, sizeof(NativeString)), id) ||
            !native_history_copy_string(native_history_object_field(
                material, "material", 0x520, sizeof(NativeString)), prefix) ||
            !native_history_copy_string(native_history_object_field(
                material, "material", 0xb8, sizeof(NativeString)), state)) return false;
    caption.material_id = std::move(id);
    caption.material_prefix = std::move(prefix);
    caption.material_state = std::move(state);
    return true;
}

// The trade formatter receives the actual item, before any display clipping.
// Copy its identity and RAW fields while that pointer belongs to this call.
static bool populate_native_trade_item_fields(uintptr_t object,
        NativeTradeItemCaption &caption) {
    caption.owner = object;
    caption.semantic_name = false;
    caption.typed_identity = false;
    caption.material_id.clear();
    if (!object || !native_history_item_scalar(object, 0, caption.type, 2) ||
            caption.type < 0 || caption.type > 92 ||
            !native_history_item_scalar(object, 8, caption.subtype, 2) ||
            !native_history_item_scalar(object, 0x10, caption.material, 2) ||
            !native_history_item_scalar(object, 0x18, caption.material_index) ||
            !native_history_item_scalar(object, 0x478, caption.count) ||
            !native_history_item_scalar(object, 0x508, caption.quality, 2) ||
            !native_history_item_scalar(object, 0x1d8, caption.wear, 2) ||
            !native_history_copy(native_history_object_field(object, {}, 0x1c, 4), caption.id) ||
            !native_history_copy(native_history_object_field(object, {}, 0x10, 4), caption.flags) ||
            !native_history_copy(native_history_object_field(object, {}, 0x14, 4), caption.flags2))
        return false;
    caption.typed_identity = true;

    // Built-in BAR commodities use the material's solid noun, rather than
    // the adjective used by furniture and equipment below. Keep the native
    // ID so a plant material with the same displayed name cannot select it.
    if (caption.type == 0 && caption.subtype == -1 && caption.material >= 1 &&
            caption.material <= 18 && caption.material != 7 &&
            caption.material_index == -1) {
        populate_native_builtin_bar_material(caption);
        return true;
    }

    // These itemdef prefixes are identical in the supported native PE images.
    // The item subtype getter supplies the independent RAW ID. A definition
    // pointer is accepted only with the same ID, never from the visible name.
    const char *item_class = nullptr;
    const char *definition_class = nullptr;
    size_t adjective_offset = 0;
    switch (caption.type) {
    case 13: item_class = "item_instrumentst"; break;
    case 14: item_class = "item_toyst"; break;
    case 24: item_class = "item_weaponst"; adjective_offset = 0xa8; break;
    case 25: item_class = "item_armorst"; adjective_offset = 0xe8; break;
    case 26: item_class = "item_shoesst"; adjective_offset = 0xa8; break;
    case 27: item_class = "item_shieldst"; adjective_offset = 0xa8; break;
    case 28: item_class = "item_helmst"; adjective_offset = 0xa8; break;
    case 29: item_class = "item_glovesst"; adjective_offset = 0xa8; break;
    case 39: item_class = "item_ammost"; adjective_offset = 0xa8; break;
    case 60: item_class = "item_pantsst"; adjective_offset = 0xe8; break;
    case 65: item_class = "item_siegeammost"; break;
    case 68: item_class = "item_trapcompst"; adjective_offset = 0xa8; break;
    case 86: item_class = "item_toolst"; adjective_offset = 0xd8; break;
    default: break;
    }
    const auto flag_fields = [](uintptr_t pointer, uintptr_t count_address,
            size_t bit, bool &value) {
        value = false;
        uintptr_t flags = 0;
        int32_t count = 0;
        if (!pointer || !count_address || !native_history_copy(count_address, count) ||
                count < 0 || count > 4096) return false;
        if (bit / 8 >= static_cast<size_t>(count)) return true;
        uint8_t byte = 0;
        if (!native_history_copy(pointer, flags) || !flags ||
                !native_history_copy(flags + bit / 8, byte)) return false;
        value = (byte & (1u << (bit % 8))) != 0;
        return true;
    };
    const auto material_flag = [&](uintptr_t material, bool &value) {
        return flag_fields(native_history_object_field(material, "material", 0x290, 8),
            native_history_object_field(material, "material", 0x298, 4), 47, value);
    };
    if (item_class) {
        switch (caption.type) {
        case 13: definition_class = "itemdef_instrumentst"; break;
        case 14: definition_class = "itemdef_toyst"; break;
        case 24: definition_class = "itemdef_weaponst"; break;
        case 25: definition_class = "itemdef_armorst"; break;
        case 26: definition_class = "itemdef_shoesst"; break;
        case 27: definition_class = "itemdef_shieldst"; break;
        case 28: definition_class = "itemdef_helmst"; break;
        case 29: definition_class = "itemdef_glovesst"; break;
        case 39: definition_class = "itemdef_ammost"; break;
        case 60: definition_class = "itemdef_pantsst"; break;
        case 65: definition_class = "itemdef_siegeammost"; break;
        case 68: definition_class = "itemdef_trapcompst"; break;
        case 86: definition_class = "itemdef_toolst"; break;
        }
        const auto field = [&](uintptr_t definition, size_t coordinate, size_t width = 1) {
            return native_history_object_field(definition, definition_class, coordinate, width);
        };
        uintptr_t definition = 0;
        int16_t subtype = -1;
        if (!native_history_object_is(object, item_class) ||
                !native_history_copy(native_history_object_field(object, item_class, 0xe8, 8), definition) ||
                !definition || definition > UINTPTR_MAX - 0x108 ||
                !native_history_copy(field(definition, 0x28, 2), subtype) ||
                subtype != caption.subtype ||
                !native_history_copy_string(field(definition, caption.count == 1 ? 0x68 : 0x88, sizeof(NativeString)), caption.raw_name) ||
                (adjective_offset && !native_history_copy_string(
                    field(definition, adjective_offset, sizeof(NativeString)), caption.raw_adjective))) return true;
        if (caption.type == 29 &&
                (!flag_fields(native_history_object_field(object, item_class, 0xf0, 8),
                    native_history_object_field(object, item_class, 0xf8, 4), 0, caption.right) ||
                 !flag_fields(native_history_object_field(object, item_class, 0xf0, 8),
                    native_history_object_field(object, item_class, 0xf8, 4), 1, caption.left))) return true;
        // a82d18 -> 1360ec0 compares adult body sizes, not race identities.
        // Elven and dwarven clothing can share a size despite different races.
        if (caption.type == 25 || caption.type == 26 || caption.type == 28 ||
                caption.type == 29 || caption.type == 60) {
            int32_t maker_race = -1;
            int16_t player_race = -1;
            int32_t game_type = -1;
            if (!native_history_item_scalar(object, 0x590, maker_race, 2) ||
                    !native_history_copy(native_history_global(0x189c298), game_type)) return true;
            if (game_type == 0) {
                if (!native_history_copy(native_history_global(0x239367c), player_race)) return true;
            } else if (game_type == 1) {
                uintptr_t player = 0;
                NativeBorrowedVector<uintptr_t> units;
                if (!native_history_read_vector(native_history_global(0x23e50c8), units) ||
                        !native_history_copy(native_history_global(0x23e5110), player) ||
                        (units.size() && player && !native_history_copy(
                            native_history_object_field(player, "unit", 0xa4, 2), player_race))) return true;
            }
            NativeBorrowedVector<uintptr_t> creatures;
            if (!native_history_read_vector(native_history_global(0x24eca68), creatures)) return true;
            const auto adult_size = [&](int32_t race, int32_t &size) {
                size = 7000; // 1360edd's explicit unknown-race default.
                if (race < 0 || static_cast<size_t>(race) >= creatures.size()) return true;
                const uintptr_t creature = native_history_vector_at(creatures, static_cast<size_t>(race));
                return creature && native_history_copy(native_history_object_field(
                    creature, "creature_raw", 0x144, 4), size);
            };
            int32_t maker_size = 0, player_size = 0;
            if (!adult_size(maker_race, maker_size) || !adult_size(player_race, player_size)) return true;
            if (static_cast<int64_t>(player_size) <= static_cast<int64_t>(maker_size) * 6 / 7)
                caption.size_adjective = "large ";
            else if (static_cast<int64_t>(player_size) >= static_cast<int64_t>(maker_size) * 8 / 7)
                caption.size_adjective = "small ";
            size_t property_offset = 0;
            switch (caption.type) {
            case 25: property_offset = 0x118; break;
            case 26: case 28: case 29: property_offset = 0xe8; break;
            case 60: property_offset = 0x128; break;
            }
            bool chain = false;
            if (!flag_fields(field(definition, property_offset, 8),
                    field(definition, property_offset + 8, 4), 7, chain)) return true;
            if (chain) {
                uintptr_t material = 0;
                bool metal = false;
                if (!native_history_material_object(native_history_profile_base(),
                        static_cast<int16_t>(caption.material), caption.material_index, material) ||
                        (material && !material_flag(material, metal)) ||
                        metal) return true;
            }
        }
    } else {
        // These stable type nouns are native item categories. Captured
        // material fields select the mug/cup/goblet distinction below.
        const char *noun = nullptr;
        switch (caption.type) {
        case 6: noun = "door"; break;
        case 7: noun = "floodgate"; break;
        case 8: noun = "bed"; break;
        case 12: {
            bool metal = false;
            uintptr_t material = 0;
            if (!native_history_material_object(native_history_profile_base(),
                    static_cast<int16_t>(caption.material), caption.material_index, material) ||
                    (caption.material == 0 && (!material ||
                     !material_flag(material, metal)))) return true;
            noun = caption.material >= 419 && caption.material <= 618 ? "cup" :
                caption.material == 0 && !metal ? "mug" : "goblet";
            break;
        }
        case 15: noun = "window"; break;
        case 17: noun = "barrel"; break;
        case 18: noun = "bucket"; break;
        case 20: noun = "table"; break;
        case 21: noun = "coffin"; break;
        case 31: noun = "bag"; break;
        case 32: noun = "bin"; break;
        case 33: noun = "armor stand"; break;
        case 34: noun = "weapon rack"; break;
        case 35: noun = "cabinet"; break;
        case 37: noun = "amulet"; break;
        case 38: noun = "scepter"; break;
        case 40: noun = "crown"; break;
        case 41: noun = "ring"; break;
        case 42: noun = "earring"; break;
        case 43: noun = "bracelet"; break;
        case 45: noun = "anvil"; break;
        case 61: noun = "backpack"; break;
        case 62: noun = "quiver"; break;
        case 63: noun = "catapult part"; break;
        case 64: noun = "ballista part"; break;
        case 66: noun = "ballista arrow head"; break;
        case 67: noun = "mechanism"; break;
        case 77: noun = "pipe section"; break;
        case 78: noun = "hatch cover"; break;
        case 79: noun = "grate"; break;
        case 80: noun = "quern"; break;
        case 81: noun = "millstone"; break;
        case 82: noun = "splint"; break;
        case 83: noun = "crutch"; break;
        case 84: noun = "traction bench"; break;
        case 85: noun = "orthopedic cast"; break;
        default: return true;
        }
        caption.raw_name = noun;
        if (caption.count != 1) caption.raw_name += "s";
    }
    if (caption.raw_name.empty()) return true;
    NativeHistoryName owner;
    bool possessive = false;
    if (caption.material >= 0 && !capture_native_history_material_parts(
            native_history_profile_base(), static_cast<int16_t>(caption.material),
            caption.material_index, 0, false, caption.material_prefix,
            caption.material_state, owner, possessive, true)) return true;
    if (possessive || (caption.flags & (0x40000u | 0x08000000u))) return true;
    // A nonempty improvement or container record can add material, artwork,
    // named contents or other modifiers. The complete native source retains
    // them; a shorter type/material reconstruction must not replace it.
    NativeBorrowedVector<uintptr_t> improvements;
    const uintptr_t improvement_field = native_history_object_field(object, {}, 0xd0, 24);
    if (!improvement_field || !native_history_read_vector(improvement_field, improvements) ||
            improvements.size() != 0 || (caption.flags & 0x40u)) return true;
    caption.semantic_name = true;
    return true;
}
