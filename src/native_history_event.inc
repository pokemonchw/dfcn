// Included inside dfcn after native_history_data.h and native_history_names.inc.
// These are owned field snapshots from the event currently being formatted.
// No event search, English parsing, native allocation or virtual call is needed.
#include "native_history_event_identity.inc"
#include "native_history_positions.inc"
#include "native_history_structures.inc"
#include "native_history_properties.inc"
#include "native_history_geography.inc"
#include "native_history_professions.inc"
#include "native_history_creature_labels.inc"
#include "native_history_identities.inc"
#include "native_history_items.inc"
#include "native_history_materials.inc"
#include "native_history_collections.inc"
#include "native_history_interactions.inc"
#include "native_history_forms.inc"
#include "native_history_art_images.inc"
#include "native_history_intrigue.inc"
#include "native_history_diplomacy.inc"
#include "native_history_agreements.inc"
#include "native_history_commodities.inc"
#include "native_history_occasions.inc"
#include "native_history_fields.inc"
static std::optional<NativeHistoryEventData> snapshot_native_history_event_header(
        const void *event, const void *context) {
    // The common header belongs to the verified native event ABI, just like
    // the subtype fields below. Both supported producers read id at +0x20;
    // ELF does reuse the header's tail padding for the following subtype.
    NativeHistoryEventData identity;
    if (!capture_native_history_event_identity(event, identity.native_type) ||
        !native_history_copy(native_history_event_field(event, identity.native_type, 0x08, sizeof(identity.year)), identity.year) ||
        !native_history_copy(native_history_event_field(event, identity.native_type, 0x0c, sizeof(identity.seconds)), identity.seconds) ||
        !native_history_copy(native_history_event_field(event, identity.native_type, 0x20, sizeof(identity.id)), identity.id) || identity.id < 0 ||
        !capture_native_history_context(context, identity)) return std::nullopt;
    return identity;
}

static std::optional<NativeHistoryEventData> snapshot_native_history_event(
        const void *event, const void *context) {
    auto snapshot = snapshot_native_history_event_header(event, context);
    if (!snapshot) return std::nullopt;
    auto &result = *snapshot;
    const auto read = [&](size_t coordinate, auto &value) {
        return native_history_copy(native_history_event_field(event, result.native_type,
            coordinate, sizeof(value)), value);
    };
    bool captured = false;
    switch (result.native_type) {
    case 18:
        result.kind = NativeHistoryEventKind::ArtifactCreated;
        captured = read(0x28, result.artifact_id) && read(0x2c, result.creator_unit_id) &&
            read(0x30, result.actor_id) && read(0x34, result.entity_id) &&
            read(0x38, result.site_id) && read(0x3c, result.flags) &&
            read(0x40, result.circumstance) && read(0x44, result.circumstance_data) &&
            read(0x48, result.reason) && read(0x4c, result.reason_data);
        break;
    case 64: {
        result.kind = NativeHistoryEventKind::CreateEntityPosition;
        int16_t reason = -1;
        captured = read(0x28, result.actor_id) && read(0x2c, result.entity_id) &&
            read(0x30, result.site_entity_id) && read(0x34, result.position_id) && read(0x38, reason);
        result.reason = reason;
        captured = captured && native_history_position_name(native_history_profile_base(),
            result.site_entity_id, result.position_id, 0, result.position);
        break;
    }
    case 73:
        result.kind = NativeHistoryEventKind::HfGainsSecretGoal;
        captured = read(0x28, result.actor_id) && read(0x2c, result.goal) &&
            read(0x30, result.circumstance) && read(0x34, result.circumstance_data) &&
            read(0x38, result.reason) && read(0x3c, result.reason_data);
        break;
    default:
        captured = capture_native_history_extra_fields(event, result);
        break;
    }
    if (!captured) result.fields["snapshot.incomplete"] = {1};
    capture_native_history_clause_collections(result);
    return snapshot;
}
