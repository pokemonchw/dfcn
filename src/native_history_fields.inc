// Subtype fields are read only while the original formatter owns the event.
// Every name below is a native field identity, not a parsed English capture.
static bool capture_native_history_context(const void *context,
        NativeHistoryEventData &result) {
    if (!context) return true;
    const uintptr_t address = reinterpret_cast<uintptr_t>(context);
    // Resolve these fixed-width values by their declared member identities.
    // Evidence pointers and
    // the explicitly uninitialized family_relationship field are excluded.
    struct Field { const char *key; size_t offset; size_t width; };
    static constexpr Field schema[] = {
        {"flags", 0x00, 4}, {"artifact_id", 0x18, 4}, {"entity_id", 0x1c, 4},
        {"histfig_id", 0x20, 4}, {"speaker_id", 0x24, 4}, {"site_id", 0x28, 4},
        {"region_id", 0x2c, 4}, {"layer_id", 0x30, 4}, {"entity_population_id", 0x34, 4},
        {"abstract_building_id", 0x38, 4}, {"sphere", 0x3c, 2},
        {"architectural_element", 0x3e, 2}, {"architectural_justification", 0x40, 2},
        {"number", 0x44, 4}, {"prof", 0x48, 2}, {"race", 0x4a, 2},
        {"racegloss_material", 0x4c, 2}, {"racegloss_mat_index", 0x50, 4},
        {"gender", 0x54, 1}, {"caste", 0x56, 2}, {"undead_flags", 0x58, 2},
        {"histfig_state", 0x5a, 2}, {"squad_id", 0x5c, 4}, {"formation_id", 0x60, 4},
        {"activity_id", 0x64, 4}, {"breed_id", 0x68, 4}, {"battlefield_id", 0x6c, 4},
        {"interaction_instance_id", 0x70, 4}, {"written_content_id", 0x74, 4},
        {"identity_id", 0x78, 4}, {"incident_id", 0x7c, 4}, {"crime_id", 0x80, 4},
        {"region_weather_id", 0x84, 4}, {"creation_zone_id", 0x88, 4}, {"vehicle_id", 0x8c, 4},
        {"army_id", 0x90, 4}, {"army_controller_id", 0x94, 4}, {"army_tracking_info_id", 0x98, 4},
        {"cultural_identity_id", 0x9c, 4}, {"agreement_id", 0xa0, 4}, {"poetic_form_id", 0xa4, 4},
        {"musical_form_id", 0xa8, 4}, {"dance_form_id", 0xac, 4}, {"scale_id", 0xb0, 4},
        {"rhythm_id", 0xb4, 4}, {"occupation_id", 0xb8, 4}, {"belief_system_id", 0xbc, 4},
        {"image_set_id", 0xc0, 4}, {"divination_set_id", 0xc4, 4},
    };
    decltype(result.context) fields;
    for (const auto &entry : schema) {
        const auto field = native_history_object_member(address, "history_event_context", entry.key, entry.width);
        if (!field) return false;
        int32_t value = -1;
        if (entry.width == 4) {
            if (!native_history_copy(field, value)) return false;
        } else if (entry.width == 2) {
            int16_t short_value = -1;
            if (!native_history_copy(field, short_value)) return false;
            value = short_value;
        } else {
            int8_t byte = -1;
            if (!native_history_copy(field, byte)) return false;
            value = byte;
        }
        fields.emplace(entry.key, value);
    }
    result.context = std::move(fields);
    return true;
}

static bool capture_native_history_extra_fields(const void *event,
        NativeHistoryEventData &result) {
    const uintptr_t address = reinterpret_cast<uintptr_t>(event);
    decltype(result.fields) fields;
    decltype(result.references) references;
    size_t remaining = 16384;
    const auto reference = [&](char kind, int32_t id) {
        if (!kind || id < 0) return;
        NativeHistoryObjectKind object;
        switch (kind) {
        case 'n': object = NativeHistoryObjectKind::Figure; break;
        case 'p': object = NativeHistoryObjectKind::Entity; break;
        case 's': object = NativeHistoryObjectKind::Site; break;
        case 'i': object = NativeHistoryObjectKind::Artifact; break;
        case 'r': object = NativeHistoryObjectKind::Region; break;
        case 'u': object = NativeHistoryObjectKind::Underground; break;
        default: return;
        }
        references.emplace_back(object, id);
    };
    const auto field = [&](std::string key, size_t offset, char kind = 0,
                           size_t width = 4) {
        if (!remaining || offset > UINTPTR_MAX - address) return false;
        int32_t value = -1;
        if (width == 4) {
            if (!native_history_copy(native_history_event_field(event, result.native_type, offset, 4), value)) return false;
        } else if (width == 2) {
            int16_t short_value = -1;
            if (!native_history_copy(native_history_event_field(event, result.native_type, offset, 2), short_value)) return false;
            value = short_value;
        } else if (width == 1) {
            uint8_t byte = 0;
            if (!native_history_copy(native_history_event_field(event, result.native_type, offset, 1), byte)) return false;
            value = byte;
        } else return false;
        if (!fields.emplace(std::move(key), std::vector<int32_t>{value}).second) return false;
        --remaining;
        reference(kind, value);
        return true;
    };
    const auto list = [&](std::string key, size_t offset, char kind = 0) {
        if (offset > UINTPTR_MAX - address) return false;
        NativeBorrowedVector<int32_t> values;
        if (!native_history_copy(native_history_event_field(event, result.native_type, offset, sizeof(values)), values) || !values.valid(remaining)) return false;
        std::vector<int32_t> copy(values.size());
        if (!copy.empty() && !native_history_copy_bytes(
                reinterpret_cast<uintptr_t>(values.begin), copy.data(), copy.size() * sizeof(int32_t)))
            return false;
        remaining -= copy.size();
        for (int32_t value : copy) reference(kind, value);
        return fields.emplace(std::move(key), std::move(copy)).second;
    };
    (void)field;
    (void)list;
    bool captured = false;
    switch (result.native_type) {
#include "native_history_fields_early.inc"
#include "native_history_fields_middle.inc"
#include "native_history_fields_late.inc"
#include "native_history_fields_late_aux.inc"
#include "native_history_fields_justice.inc"
#include "native_history_fields_occasions.inc"
    default: break;
    }
    if (!captured) return false;
    result.fields = std::move(fields);
    result.references = std::move(references);
    const auto scalar = [&](std::string_view key, int32_t &destination) {
        const auto found = result.fields.find(key);
        if (found != result.fields.end() && found->second.size() == 1)
            destination = found->second.front();
    };
    scalar("reason", result.reason);
    scalar("reason_data", result.reason_data);
    scalar("circumstance", result.circumstance);
    scalar("circumstance_data", result.circumstance_data);
    // The real b8b20b/b8b566 item calls fill item.item while formatting this
    // event. A field snapshot must not replay the native item formatter.
    return true;
}
