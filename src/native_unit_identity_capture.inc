// Read the unit passed to the native formatter while that call owns it.
// All text below is copied from typed fields; rendered English is never used
// to decide whether a name or profession was supplied by the player.
static bool capture_native_unit_identity_name_words(uintptr_t address,
        const NativeHistoryName &name, std::array<std::string, 7> &out,
        const std::array<int32_t, 7> *captured_indices = nullptr) {
    std::array<std::string, 7> result;
    // a94030 omits WORD slots for language-less names and when the native
    // nickname policy replaces the entire name. Neither case needs a table.
    if (!name.has_name || name.language < 0 ||
            (!name.nickname.empty() && name.nickname_mode == 2)) {
        out = std::move(result);
        return true;
    }
    if (!address || address > UINTPTR_MAX - 92) return false;
    std::array<int32_t, 7> indices;
    if (captured_indices) indices = *captured_indices;
    else if (!native_history_copy(native_history_object_field(address,
            "language_name", 0x40, sizeof(indices)), indices)) return false;
    if (std::all_of(indices.begin(), indices.end(),
            [](int32_t index) { return index == -1; })) {
        out = std::move(result);
        return true;
    }
    NativeBorrowedVector<uintptr_t> translations, words;
    if (!native_history_read_vector(native_history_global(0x24ed7a0), translations))
        return false;
    const uintptr_t language = native_history_vector_at(translations,
        static_cast<size_t>(name.language));
    if (!language || !native_history_read_vector(native_history_object_field(
            language, "language_translation", 0x50, 24), words)) return false;
    for (size_t slot = 0; slot < indices.size(); ++slot) {
        const int32_t index = indices[slot];
        if (index == -1) continue;
        if (index < 0) return false;
        // The language table uses the actual runtime WORD index. Its native
        // spelling is independent of the selected English POS/form.
        const uintptr_t word = native_history_vector_at(words, static_cast<size_t>(index));
        if (!word || !native_history_copy_string(word, result[slot])) return false;
    }
    out = std::move(result);
    return true;
}

static bool native_unit_identity_flag(uintptr_t object, size_t offset,
        size_t bit, bool &value, std::string_view type) {
    object = native_history_object_field(object, type, offset, 16);
    offset = 0;
    value = false;
    uintptr_t data = 0;
    int32_t count = 0;
    if (!object || !native_history_copy(object + offset + 8, count) ||
            count < 0 || count > 4096) return false;
    if (bit / 8 >= static_cast<size_t>(count)) return true;
    uint8_t byte = 0;
    if (!native_history_copy(object + offset, data) || !data ||
            !native_history_copy(data + bit / 8, byte)) return false;
    value = (byte & (1u << (bit % 8))) != 0;
    return true;
}

static bool capture_native_unit_personal_name(uintptr_t base, uintptr_t unit,
        uintptr_t address, NativeHistoryName &name, std::array<int32_t, 7> &indices) {
    if (!capture_native_history_name(base, address, name, &indices)) return false;
    // Only the unit's own first_name inherits its species' naming method.
    // A selected disguise or another named object can belong to a different race.
    if (!name.has_name || name.first_name.empty() || name.language >= 0 ||
            address != native_history_object_member(unit, "unit", "name.first_name")) return true;
    int32_t race = -1;
    NativeBorrowedVector<uintptr_t> creatures;
    if (native_history_copy(native_history_object_member(unit, "unit", "race"), race) &&
            race >= 0 && native_history_read_vector(native_history_global(0x24eca68), creatures)) {
        const uintptr_t creature = native_history_vector_at(creatures, static_cast<size_t>(race));
        // creature_raw_flags::HAS_ANY_UTTERANCES is bit 88.
        if (creature) native_unit_identity_flag(creature, 0x1a8, 88,
            name.utterance_first_name, "creature_raw");
    }
    return true;
}

static bool capture_native_unit_identity(uintptr_t unit, NativeUnitIdentity &out) {
    uintptr_t creature = 0;
    const auto read_creature = [&]() {
        if (creature) return true;
        NativeBorrowedVector<uintptr_t> creatures;
        if (!unit || !native_history_copy(native_history_object_member(unit, "unit", "race", 4), out.race) ||
                out.race < 0 || !native_history_read_vector(native_history_global(0x24eca68), creatures))
            return false;
        creature = native_history_vector_at(creatures, static_cast<size_t>(out.race));
        return creature != 0;
    };
    // The name widget's formatter receives the unit pointer. Only record this
    // homonym for a species/ordinary role field, never for a personal name.
    if (is_bare_pike(out.native_role) || std::any_of(out.reference_parts.begin(),
            out.reference_parts.end(), [](const NativeUnitReferencePart &part) {
                return (part.kind == NativeUnitReferencePartKind::Species ||
                    part.kind == NativeUnitReferencePartKind::Role) && is_bare_pike(part.source);
            })) {
        if (read_creature()) native_history_copy_string(native_history_object_member(
            creature, "creature_raw", "creature_id", sizeof(NativeString)), out.creature_id);
    }
    // Reference parts already contain the game's final RAW/office, species,
    // curse and visibility decisions. Only the explicit authored role field
    // needs classification; do not reapply the ordinary formatter modifiers.
    if (out.form == NativeUnitIdentityForm::Reference) {
        uintptr_t animation = 0;
        if (!unit || unit > UINTPTR_MAX - 0xd88 ||
                !native_history_copy(native_history_object_field(unit, "unit", 0xd80), animation) ||
                (animation && !native_history_copy_string(animation + 0x20, out.animated_name)))
            return false;
        out.undead = animation != 0;
        return !out.use_custom || native_history_copy_string(
            native_history_object_field(unit, "unit", 0x80), out.custom_profession);
    }
    // Name-only formatters already captured DF's selected language_name.
    // Their renderer returns before reading any unit role/status fields.
    if (out.form == NativeUnitIdentityForm::NameOnly ||
            (out.form == NativeUnitIdentityForm::Name && !out.native_name.empty()))
        return true;
    const uintptr_t base = native_history_profile_base();
    if (!base || !unit || unit > UINTPTR_MAX - 0xd88) return false;
    auto &result = out;
    uintptr_t animation = 0;
    // The formatter supplied the complete ordinary RAW/occupation role.
    // Its enum, RAW profession and caste labels are never consumed again by
    // translate_native_unit_identity. Only an authored custom role needs its
    // separate unit modifiers; animation can replace either role entirely.
    if (!native_history_copy(native_history_object_field(unit, "unit", 0xd80), animation) ||
            (animation && !native_history_copy_string(animation + 0x20,
                result.animated_name)) ||
            (result.use_custom && !native_history_copy_string(native_history_object_field(unit, "unit", 0x80),
                result.custom_profession))) return false;
    result.undead = animation != 0;
    int32_t game_type = -1;
    if (!native_history_copy(native_reference_address(base,
            native_history_layout::gametype_rva), game_type)) return false;
    // After an explicit animation label, the arena-mode branch returns the
    // literal first_name before selecting a profession or curse modifier.
    result.native_role_authored = result.animated_name.empty() &&
        (game_type == 4 || game_type == 5);
    const bool custom_role = !result.native_role_authored &&
        result.animated_name.empty() && result.use_custom &&
        !result.custom_profession.empty();
    // Ordinary roles also carry these exact typed fields after RAW/office
    // selection. Their append boundaries must not be guessed from a title
    // that happens to contain words such as vampire or mummy.
    uint8_t curse_named = 0;
    if (!result.native_role_authored && result.animated_name.empty() &&
            (!native_history_copy(native_history_object_field(unit, "unit", 0x838), curse_named) || curse_named > 1))
        return false;
    result.curse_named = curse_named != 0;
    if (result.curse_named &&
            (!native_history_copy_string(native_history_object_field(unit, "unit", 0x840), result.curse_name) ||
             !native_history_copy_string(native_history_object_field(unit, "unit", 0x880), result.curse_name_prefix)))
        return false;
    if (custom_role || result.include_status) {
        uint32_t flags1 = 0;
        if (!native_history_copy(native_history_object_field(unit, "unit", 0x110), flags1)) return false;
        result.tame = (flags1 & 0x04000000u) != 0;
        if (result.include_status && result.tame &&
                !native_history_copy(native_history_object_field(unit, "unit", 0x138), result.training_level)) return false;
    }
    bool gender_suffix = false;
    if (result.show_gender) {
        if (!native_history_copy(native_history_object_field(unit, "unit", 0x12e), result.sex)) return false;
        if (result.sex == 0 || result.sex == 1) {
            if (!read_creature() || !native_unit_identity_flag(
                    creature, 0x1a8, 66, result.two_genders, "creature_raw")) return false;
            gender_suffix = result.two_genders;
        }
    }
    if (custom_role || gender_suffix) {
        uint32_t flags3 = 0;
        if (!native_history_copy(native_history_object_field(unit, "unit", 0x118), flags3)) return false;
        result.gelded = (flags3 & 0x10000000u) != 0;
        if (custom_role) {
            result.ghostly = (flags3 & 0x00001000u) != 0 && !curse_named;
        }
    }
    if (!custom_role) return true;
    if (result.tame) {
        int32_t pet_owner = -1;
        if (!native_history_copy(native_history_object_field(unit, "unit", 0x3bc), pet_owner)) return false;
        if (pet_owner == -1) {
            int16_t caste_index = -1;
            NativeBorrowedVector<uintptr_t> castes;
            if (!read_creature() || !native_history_copy(native_history_object_field(unit, "unit", 0x12c), caste_index) ||
                    caste_index < 0 || !native_history_read_vector(native_history_object_field(creature, "creature_raw", 0x178, 24), castes))
                return false;
            const uintptr_t caste = native_history_vector_at(castes, static_cast<size_t>(caste_index));
            bool pet = false, exotic_pet = false;
            // 0x1376500: PET and PET_EXOTIC are caste flags 54 and 55.
            if (!caste || !native_unit_identity_flag(caste, 0x6a8, 54, pet, "caste_raw") ||
                    !native_unit_identity_flag(caste, 0x6a8, 55, exotic_pet, "caste_raw")) return false;
            result.pet = pet || exotic_pet;
        }
    }
    if (result.pet) {
        bool fierce = false;
        int32_t civilization = -1;
        if (!native_history_copy(native_history_object_field(unit, "unit", 0x140), civilization)) return false;
        if (civilization >= 0) {
            const uintptr_t entity = native_history_find_subject(base,
                NativeHistoryObjectKind::Entity, civilization);
            uintptr_t definition = 0;
            if (entity && (!native_history_copy(entity + 8, definition) ||
                    (definition && !native_unit_identity_flag(definition,
                        0x3a0, 60, fierce, "entity_raw")))) return false;
        }
        result.prefix = fierce ? NativeUnitNamePrefix::Fierce : NativeUnitNamePrefix::Stray;
    } else {
        uint32_t flags4 = 0;
        if (!native_history_copy(native_history_object_field(unit, "unit", 0x11c), flags4)) return false;
        if ((flags4 & 0x00001000u) != 0) result.prefix = NativeUnitNamePrefix::Agitated;
    }
    return true;
}
