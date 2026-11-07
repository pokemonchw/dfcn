// Shared semantic source tables. Installation authorizes each static label
// independently; dynamic names retain their complete page contracts.
static void populate_native_caption_semantic_profile(NativeCaptionProfile &profile) {
    // Civilization detail draws prefix, entity and value separately, with
    // addchar supplying the colon. These verified addst return addresses
    // identify the fields without accepting unrelated text under the panel.
    // Keep unverified executable profiles empty for the geometric fallback.
    profile.civilization_fields = {
        {native_pe_address(profile.base, 0x1c4d01), NativeCivilizationField::TradePrefix, NativeCall{0x1c4cfc, 0xad9960, nullptr}}, // Exports to
        {native_pe_address(profile.base, 0x1c4d37), NativeCivilizationField::TradeEntity},
        {native_pe_address(profile.base, 0x1c4da1), NativeCivilizationField::TradeValue, NativeCall{0x1c4d9c, 0xad9960, nullptr}},  // Petty Annoyance
        {native_pe_address(profile.base, 0x1c4e12), NativeCivilizationField::TradePrefix, NativeCall{0x1c4e0d, 0xad9960, nullptr}}, // Exports to
        {native_pe_address(profile.base, 0x1c4e48), NativeCivilizationField::TradeEntity},
        {native_pe_address(profile.base, 0x1c4eb2), NativeCivilizationField::TradeValue, NativeCall{0x1c4ead, 0xad9960, nullptr}},  // Terror
        {native_pe_address(profile.base, 0x1c4f26), NativeCivilizationField::TradePrefix, NativeCall{0x1c4f21, 0xad9960, nullptr}}, // Imports from
        {native_pe_address(profile.base, 0x1c4f5c), NativeCivilizationField::TradeEntity},
        {native_pe_address(profile.base, 0x1c4fc3), NativeCivilizationField::TradeValue, NativeCall{0x1c4fbe, 0xad9960, nullptr}},  // None
        {native_pe_address(profile.base, 0x1c4ffb), NativeCivilizationField::TradePrefix, NativeCall{0x1c4ff6, 0xad9960, nullptr}}, // Imports from
        {native_pe_address(profile.base, 0x1c5031), NativeCivilizationField::TradeEntity},
        {native_pe_address(profile.base, 0x1c5099), NativeCivilizationField::TradeValue, NativeCall{0x1c5094, 0xad9960, nullptr}},  // Amount
        {native_pe_address(profile.base, 0x1c50fc), NativeCivilizationField::TradePrefix, NativeCall{0x1c50f7, 0xad9960, nullptr}}, // Offerings from
        {native_pe_address(profile.base, 0x1c5132), NativeCivilizationField::TradeEntity},
        {native_pe_address(profile.base, 0x1c51d4), NativeCivilizationField::TradeValue, NativeCall{0x1c51cf, 0xad9960, nullptr}},  // Death
        {native_pe_address(profile.base, 0x1c522f), NativeCivilizationField::TradeValue, NativeCall{0x1c522a, 0xad9960, nullptr}},  // Vengeance
        {native_pe_address(profile.base, 0x1c5289), NativeCivilizationField::TradeValue, NativeCall{0x1c5284, 0xad9960, nullptr}},  // None
        {native_pe_address(profile.base, 0x1c52cd), NativeCivilizationField::TradeValue, NativeCall{0x1c52c8, 0xad9960, nullptr}},  // Amount
        {native_pe_address(profile.base, 0x1c5f6f), NativeCivilizationField::OfficialName},
        {native_pe_address(profile.base, 0x1c6025), NativeCivilizationField::OfficialPosition},
        // The fortress HUD draws the complete native rank below its site
        // names. Retain this producer meaning before the restricted HUD
        // matcher considers the ordinary counter/date captions.
        {native_pe_address(profile.base, 0x3f3202), NativeCivilizationField::FortressRank}};
    // The location chooser draws over the map before a later native pass can
    // replace that grid. Retain these fields at their verified addst callers,
    // while their allocated button/picture strip is still available.
    profile.location_picker_fields = {
        {native_pe_address(profile.base, 0x3bb2fc), NativeLocationPickerField::Prompt, NativeCall{0x3bb2f7, 0xad9960, nullptr}},
        {native_pe_address(profile.base, 0x3bb6bc), NativeLocationPickerField::Action, NativeCall{0x3bb6b7, 0xad9960, nullptr}}, // inn/tavern
        {native_pe_address(profile.base, 0x3bb66a), NativeLocationPickerField::Action, NativeCall{0x3bb665, 0xad9960, nullptr}}, // temple
        {native_pe_address(profile.base, 0x3bb5d8), NativeLocationPickerField::Action, NativeCall{0x3bb5d3, 0xad9960, nullptr}}, // library
        {native_pe_address(profile.base, 0x3bb585), NativeLocationPickerField::Action, NativeCall{0x3bb580, 0xad9960, nullptr}}, // guildhall
        {native_pe_address(profile.base, 0x3bb716), NativeLocationPickerField::Action, NativeCall{0x3bb711, 0xad9960, nullptr}}, // hospital
        {native_pe_address(profile.base, 0x3bbbd0), NativeLocationPickerField::Name, NativeCall{0x3bbbcb, 0xad9960, nullptr}},
        // The guild subpage draws each profession plus " hall" as one
        // caption, followed by an optional requested/existing tier row.
        {native_pe_address(profile.base, 0x3b9863), NativeLocationPickerField::GuildChoice, NativeCall{0x3b985e, 0xad9960, nullptr}},
        {native_pe_address(profile.base, 0x3b9aff), NativeLocationPickerField::GuildStatus, NativeCall{0x3b9afa, 0xad9960, nullptr}}, // Want
        {native_pe_address(profile.base, 0x3b9c47), NativeLocationPickerField::GuildStatus, NativeCall{0x3b9c42, 0xad9960, nullptr}}, // Have
        // The adjacent guild card has complete count/label/entity fields.
        // Their original cursor and closed card own every translated row.
        {native_pe_address(profile.base, 0x3b9fc9), NativeLocationPickerField::GuildWorkers},
        {native_pe_address(profile.base, 0x3ba012), NativeLocationPickerField::GuildWorkers}, // None
        {native_pe_address(profile.base, 0x3ba082), NativeLocationPickerField::GuildLabel, NativeCall{0x3ba07d, 0xad9960, nullptr}},
        {native_pe_address(profile.base, 0x3ba16e), NativeLocationPickerField::GuildName},
        {native_pe_address(profile.base, 0x3ba1db), NativeLocationPickerField::GuildMembers},
        {native_pe_address(profile.base, 0x3ba21d), NativeLocationPickerField::GuildMembers}, // None
        {native_pe_address(profile.base, 0x3ba285), NativeLocationPickerField::GuildMissing, NativeCall{0x3ba280, 0xad9960, nullptr}},
        // The temple dedication subpage owns identities, all Want/Have
        // grades and the complete faith card through these separate draws.
        {native_pe_address(profile.base, 0x3ba720), NativeLocationPickerField::FaithChoice, NativeCall{0x3ba71b, 0xad9960, nullptr}},
        {native_pe_address(profile.base, 0x3ba96d), NativeLocationPickerField::FaithStatus, NativeCall{0x3ba968, 0xad9960, nullptr}}, // Want
        {native_pe_address(profile.base, 0x3baac1), NativeLocationPickerField::FaithStatus, NativeCall{0x3baabc, 0xad9960, nullptr}}, // Have
        {native_pe_address(profile.base, 0x3bae3a), NativeLocationPickerField::FaithCount, NativeCall{0x3bae35, 0xad9960, nullptr}},
        {native_pe_address(profile.base, 0x3bae67), NativeLocationPickerField::FaithCount, NativeCall{0x3bae62, 0xad9960, nullptr}},
        {native_pe_address(profile.base, 0x3baec0), NativeLocationPickerField::FaithWorship},
        {native_pe_address(profile.base, 0x3baf80), NativeLocationPickerField::FaithDeity},
        {native_pe_address(profile.base, 0x3bb052), NativeLocationPickerField::FaithSphere}};
    std::erase_if(profile.location_picker_fields, [](const auto &site) {
        return site.source_call.va && native_pe_chooser_span_absent(static_cast<uint32_t>(site.source_call.va), 5);
    });
    if (!native_pe_feature_span_absent("location_chooser.detail_rows", 0x3bbec9, 1)) {
        profile.location_picker_fields.push_back({native_pe_address(profile.base, 0x3bbec9), NativeLocationPickerField::Faith});
        profile.location_picker_fields.push_back({native_pe_address(profile.base, 0x3bc051), NativeLocationPickerField::Guild});
        profile.location_picker_fields.push_back({native_pe_address(profile.base, 0x3bc0cc), NativeLocationPickerField::Kind, NativeCall{0x3bc0c7, 0xad9960, nullptr}});
        profile.location_picker_fields.push_back({native_pe_address(profile.base, 0x3bc153), NativeLocationPickerField::Kind, NativeCall{0x3bc14e, 0xad9960, nullptr}});
        profile.location_picker_fields.push_back({native_pe_address(profile.base, 0x3bc1c9), NativeLocationPickerField::Kind, NativeCall{0x3bc1c4, 0xad9960, nullptr}});
    }
#include "native_travel_structures_profile.inc"
    // The decompiled location-detail renderer owns complete sources at
    // these addst calls. In particular its rank/value/threshold is ONE
    // buffer, while the worshipper count and noun are separate draws.
    // Use executable callers for every branch instead of guessing a title
    // or a rank from words left in the screen grid.
    struct NativeLocationDetailCall {
        uintptr_t call;
        std::array<unsigned char, 5> bytes;
        NativeLocationPickerField field;
    };
    static constexpr NativeLocationDetailCall detail_sites[] = {
        {0x3b1887, {0xe8,0xd4,0x80,0x72,0x00}, NativeLocationPickerField::DetailName},
        // Guild detail draws its profession/type first, then a generated
        // entity name and a separate complete member-count clause. The
        // unestablished branch uses the same row with worker counts.
        {0x3b1af2, {0xe8,0x69,0x7e,0x72,0x00}, NativeLocationPickerField::DetailGuildKind},
        {0x3b1b68, {0xe8,0xf3,0x7d,0x72,0x00}, NativeLocationPickerField::DetailGuildName},
        {0x3b1bc3, {0xe8,0x98,0x7d,0x72,0x00}, NativeLocationPickerField::DetailGuildCount}, // members
        {0x3b1be9, {0xe8,0x72,0x7d,0x72,0x00}, NativeLocationPickerField::DetailGuildCount}, // no members
        {0x3b1c2e, {0xe8,0x2d,0x7d,0x72,0x00}, NativeLocationPickerField::DetailGuildName}, // no established guild
        {0x3b1c96, {0xe8,0xc5,0x7c,0x72,0x00}, NativeLocationPickerField::DetailGuildCount}, // workers
        {0x3b1cbc, {0xe8,0x9f,0x7c,0x72,0x00}, NativeLocationPickerField::DetailGuildCount}, // no workers
        {0x3b1df3, {0xe8,0x68,0x7b,0x72,0x00}, NativeLocationPickerField::DetailKind}, // Shrine
        {0x3b1e2d, {0xe8,0x2e,0x7b,0x72,0x00}, NativeLocationPickerField::DetailKind}, // Temple
        {0x3b1e67, {0xe8,0xf4,0x7a,0x72,0x00}, NativeLocationPickerField::DetailKind}, // Temple complex
        // Organized-religion name, Dedicated to deity, or No particular deity.
        {0x3b1fca, {0xe8,0x91,0x79,0x72,0x00}, NativeLocationPickerField::DetailDedication},
        {0x3b26ee, {0xe8,0x6d,0x72,0x72,0x00}, NativeLocationPickerField::DetailFixed}, // members, if established
        {0x3b2720, {0xe8,0x3b,0x72,0x72,0x00}, NativeLocationPickerField::DetailFixed}, // members
        {0x3b276b, {0xe8,0xf0,0x71,0x72,0x00}, NativeLocationPickerField::DetailFixed}, // all visitors
        {0x3b27af, {0xe8,0xac,0x71,0x72,0x00}, NativeLocationPickerField::DetailFixed}, // residents
        {0x3b27e3, {0xe8,0x78,0x71,0x72,0x00}, NativeLocationPickerField::DetailFixed}, // citizens
        {0x3b4cf7, {0xe8,0x64,0x4c,0x72,0x00}, NativeLocationPickerField::DetailRank}, // guild rank/value/threshold
        {0x3b4e84, {0xe8,0xd7,0x4a,0x72,0x00}, NativeLocationPickerField::DetailFixed}, // guildhall agreement
        {0x3b4ecd, {0xe8,0x8e,0x4a,0x72,0x00}, NativeLocationPickerField::DetailFixed}, // grand guildhall agreement
        {0x3b6aab, {0xe8,0xb0,0x2e,0x72,0x00}, NativeLocationPickerField::DetailRank},
        {0x3b6b56, {0xe8,0x05,0x2e,0x72,0x00}, NativeLocationPickerField::DetailCount}, // number or No
        {0x3b6bb4, {0xe8,0xa7,0x2d,0x72,0x00}, NativeLocationPickerField::DetailCountWord}, // worshippers
        {0x3b6bda, {0xe8,0x81,0x2d,0x72,0x00}, NativeLocationPickerField::DetailCountWord}, // worshipper
        {0x3b702a, {0xe8,0x31,0x29,0x72,0x00}, NativeLocationPickerField::DetailRequirement},
        {0x3b7121, {0xe8,0x3a,0x28,0x72,0x00}, NativeLocationPickerField::DetailFixed}, // Recognize priesthood
        {0x3b7260, {0xe8,0xfb,0x26,0x72,0x00}, NativeLocationPickerField::DetailFixed}, // Recognize high priest
        {0x3b72c0, {0xe8,0x9b,0x26,0x72,0x00}, NativeLocationPickerField::DetailFixed}, // temple required
        {0x3b732e, {0xe8,0x2d,0x26,0x72,0x00}, NativeLocationPickerField::DetailFixed}, // temple complex required
        {0x3b73c6, {0xe8,0x95,0x25,0x72,0x00}, NativeLocationPickerField::DetailFixed}, // temple agreement
        {0x3b7413, {0xe8,0x48,0x25,0x72,0x00}, NativeLocationPickerField::DetailFixed}, // complex agreement
        {0x3b7470, {0xe8,0xeb,0x24,0x72,0x00}, NativeLocationPickerField::DetailFixed}, // organized religion required
        {0x3b762b, {0xe8,0x30,0x23,0x72,0x00}, NativeLocationPickerField::DetailFixed}, // chests label
        {0x3b77f9, {0xe8,0x62,0x21,0x72,0x00}, NativeLocationPickerField::DetailFixed}, // instruments label
        {0x3b7b2a, {0xe8,0x31,0x1e,0x72,0x00}, NativeLocationPickerField::DetailFixed}, // dance-floor label
        {0x3b7be9, {0xe8,0x72,0x1d,0x72,0x00}, NativeLocationPickerField::DetailFixed}, // no dance floor
        // All ten fixed occupation branches and the entity_position title
        // share the same list row and add-person button allocation.
        {0x3b7efd, {0xe8,0x5e,0x1a,0x72,0x00}, NativeLocationPickerField::DetailRole}, // Tavern Keeper
        {0x3b7feb, {0xe8,0x70,0x19,0x72,0x00}, NativeLocationPickerField::DetailRole}, // Performer
        {0x3b8018, {0xe8,0x43,0x19,0x72,0x00}, NativeLocationPickerField::DetailRole}, // Scholar
        {0x3b8045, {0xe8,0x16,0x19,0x72,0x00}, NativeLocationPickerField::DetailRole}, // Scribe
        {0x3b8072, {0xe8,0xe9,0x18,0x72,0x00}, NativeLocationPickerField::DetailRole}, // Mercenary
        {0x3b809f, {0xe8,0xbc,0x18,0x72,0x00}, NativeLocationPickerField::DetailRole}, // Monster Slayer
        {0x3b80cc, {0xe8,0x8f,0x18,0x72,0x00}, NativeLocationPickerField::DetailRole}, // Doctor
        {0x3b80f9, {0xe8,0x62,0x18,0x72,0x00}, NativeLocationPickerField::DetailRole}, // Diagnostician
        {0x3b8126, {0xe8,0x35,0x18,0x72,0x00}, NativeLocationPickerField::DetailRole}, // Surgeon
        {0x3b8153, {0xe8,0x08,0x18,0x72,0x00}, NativeLocationPickerField::DetailRole}, // Bone Doctor
        {0x3b8199, {0xe8,0xc2,0x17,0x72,0x00}, NativeLocationPickerField::DetailRole}, // complete generated priest title
        {0x3b84db, {0xe8,0x80,0x14,0x72,0x00}, NativeLocationPickerField::DetailUnit},
    };
    for (const auto &site : detail_sites) {
        profile.location_picker_fields.push_back({native_pe_address(profile.base, site.call + 5), site.field,
            NativeCall{site.call, 0xad9960, nullptr}});
        profile.signatures.push_back({site.call,
            std::vector<unsigned char>(site.bytes.begin(), site.bytes.end())});
    }
#include "native_accepted_petition_profile.inc"
}
