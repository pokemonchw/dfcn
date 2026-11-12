// The task renderer draws task+0x60 after 0xcdf30 copies task+0x20 and
// shortens it to 58 bytes. Recover the retained original from this exact
// native writer, without reading arbitrary title-shaped strings as tasks.
static std::optional<NativeAdventureQuestTitle> native_adventure_quest_original_title(
        uintptr_t address, std::string_view displayed, uintptr_t caller) {
    const uintptr_t base = native_history_profile_base();
    if (!base || address < 0x60) return std::nullopt;
#ifdef _WIN32
    if (caller != native_reference_address(base, 0xaf628f) &&
            caller != native_reference_address(base, 0xc39bf)) return std::nullopt;
#else
    // The map Tasks strip and the adventure journal both pass the actual
    // agreement_entryst::p_list_name. Their retained title lives in list_name.
    const auto hud_title = native_elf_5317_address(0x1c5acd3);
    if (caller != (hud_title ? hud_title : native_reference_address(base, 0x1830373)) &&
            caller != native_reference_address(base, 0x17cfed3)) return std::nullopt;
#endif
    std::string current, full;
    if (!native_history_copy_string(address, current) || current != displayed ||
            !native_history_copy_string(address - 0x40, full) ||
            full.size() > 65536 || full.substr(0, 58) != current) return std::nullopt;
    NativeAdventureQuestTitle result;
    result.source = std::move(full);
    result.displayed = std::move(current);
    uintptr_t agreement = 0, details = 0, subject = 0;
    int32_t type = -1;
    if (native_history_copy(address - 0x60, agreement) && agreement &&
            native_history_copy(native_history_object_member(agreement, "agreement", "details", 8), details) && details &&
            native_history_copy(details, subject) && subject &&
            native_history_copy(native_history_object_member(subject, "agreement_details", "type", 4), type) && type >= 0 && type <= 17) {
        result.agreement_subject = type;
        uintptr_t data = 0;
        int32_t end_year = -1;
        if (type == 0 && native_history_copy(native_history_object_member(subject, "agreement_details", "data.JoinParty", 8), data) && data &&
                native_history_copy(native_history_object_member(data, "agreement_details_data_join_party", "reason", 4), result.companion_reason) &&
                native_history_copy(native_history_object_member(data, "agreement_details_data_join_party", "end_year", 4), end_year)) {
            result.companion_details = true;
            result.companion_completed = end_year != -1;
        }
    }
    // df540's order types 5 and 8 append entity + " from " + site from
    // so+0x20/+0x24. Names can themselves contain that separator. Retain the
    // two typed identities instead of guessing their boundary from spelling.
    // The PE and ELF constructors both call the type getter at vtable+0x18;
    // the existing guarded decoder reads its leaf result without executing it.
    uintptr_t squad = 0, order = 0;
    int32_t order_type = -1, entity_id = -1, site_id = -1;
    const uintptr_t entry = address - 0x60;
    if (native_history_copy(native_history_object_member(entry, "agreement_entryst", "sq", 8), squad) && squad &&
            native_history_copy(native_history_object_member(entry, "agreement_entryst", "so", 8), order) && order &&
            native_history_page_getter(order, 0x18, order_type) &&
            (order_type == 5 || order_type == 8) &&
            native_history_copy(order + 0x20, entity_id) &&
            native_history_copy(order + 0x24, site_id)) {
        const auto capture = [&](NativeHistoryObjectKind kind, int32_t id,
                std::optional<NativeHistoryName> &name) {
            bool complete = id < 0;
            const auto object = id < 0 ? 0 : native_history_find_subject(base, kind, id, &complete);
            if (!complete) return false;
            // Missing objects produce the native unknown label; an existing
            // unnamed object's formatter emits an empty field instead.
            if (!object) return true;
            const bool entity = kind == NativeHistoryObjectKind::Entity;
            NativeHistoryName captured;
            if (!capture_native_history_name(base, native_history_object_member(object,
                    entity ? "historical_entity" : "world_site", "name.first_name", 32), captured) ||
                    (entity ? !capture_native_history_entity_name_context(base, object, captured,
                        true, nullptr, true) :
                        !capture_native_history_site_name_context(base, object, captured, true)))
                return false;
            name = std::move(captured);
            return true;
        };
        result.order_entity_id = entity_id;
        result.drive_off_details = capture(NativeHistoryObjectKind::Entity, entity_id, result.order_entity) &&
            capture(NativeHistoryObjectKind::Site, site_id, result.order_site);
    }
    return result;
}

// Agreement fields from the original addst call sites retained in
// data/extracted/adventure-journal-agreements/{pe,elf}-display-fields.tsv.
// Literal writers also have explicit return sites: other journal tabs can
// draw authored names whose spelling happens to equal an agreement label.
static NativeJournalAgreementField native_journal_agreement_field(uintptr_t caller) {
#ifdef _WIN32
    const auto base = native_history_profile_base();
    if (!base || caller < native_reference_address(base, 0xc3871) ||
            caller >= native_reference_address(base, 0xc70a4))
        return NativeJournalAgreementField::None;
    // Retain reference-image return sites explicitly so the normal PE binding
    // generator maps every field to its corresponding classic instruction.
    const std::pair<uintptr_t, NativeJournalAgreementField> fields[] = {
        {native_reference_address(base, 0xc39bf), NativeJournalAgreementField::Title},
        {native_reference_address(base, 0xc3a5e), NativeJournalAgreementField::Counter},
        {native_reference_address(base, 0xc3ce9), NativeJournalAgreementField::Type},
        {native_reference_address(base, 0xc3e8b), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc3f94), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc45de), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc46e7), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc4980), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc4a89), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc4cfc), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc4e05), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc4fa6), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc501b), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc512c), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc5231), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc53d0), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc54d5), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc55e9), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc565e), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc576f), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc5874), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc598d), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc5a92), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc5bab), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc5cb0), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc65e8), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc66f1), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc6933), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc6a3c), NativeJournalAgreementField::Person},
        {native_reference_address(base, 0xc4071), NativeJournalAgreementField::Artifact},
        {native_reference_address(base, 0xc67b7), NativeJournalAgreementField::Artifact},
        {native_reference_address(base, 0xc4168), NativeJournalAgreementField::Site},
        {native_reference_address(base, 0xc4466), NativeJournalAgreementField::Site},
        {native_reference_address(base, 0xc4c40), NativeJournalAgreementField::Site},
        {native_reference_address(base, 0xc4efd), NativeJournalAgreementField::Site},
        {native_reference_address(base, 0xc530e), NativeJournalAgreementField::Site},
        {native_reference_address(base, 0xc621f), NativeJournalAgreementField::Site},
        {native_reference_address(base, 0xc425f), NativeJournalAgreementField::Group},
        {native_reference_address(base, 0xc43a3), NativeJournalAgreementField::Group},
        {native_reference_address(base, 0xc47c4), NativeJournalAgreementField::Group},
        {native_reference_address(base, 0xc4b66), NativeJournalAgreementField::Group},
        {native_reference_address(base, 0xc6098), NativeJournalAgreementField::Group},
        {native_reference_address(base, 0xc615c), NativeJournalAgreementField::Group},
        {native_reference_address(base, 0xc6b06), NativeJournalAgreementField::Group},
        {native_reference_address(base, 0xc5fd6), NativeJournalAgreementField::Actor},
        {native_reference_address(base, 0xc6305), NativeJournalAgreementField::Actor},
        {native_reference_address(base, 0xc6ca5), NativeJournalAgreementField::Actor},
        {native_reference_address(base, 0xc5ee2), NativeJournalAgreementField::Date},
        {native_reference_address(base, 0xc3e3e), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc3eeb), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc3f4c), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc3ff3), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc40e9), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc41e5), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc4338), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc43fb), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc4591), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc463e), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc469f), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc4742), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc4933), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc49e0), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc4a41), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc4ae6), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc4bbe), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc4caf), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc4d5c), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc4dbd), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc4e62), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc506a), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc50df), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc518c), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc51ed), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc528e), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc5383), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc5430), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc5491), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc5532), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc56ad), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc5722), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc57cf), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc5830), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc58d1), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc5940), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc59ed), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc5a4e), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc5aef), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc5b5e), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc5c0b), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc5c6c), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc5d0d), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc5d94), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc5f4c), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc602d), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc60f1), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc61b4), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc627a), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc6364), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc63d5), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc6422), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc659b), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc6648), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc66a9), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc674c), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc68e6), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc6993), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc69f4), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc6a97), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc6b7c), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc6c1d), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc6d04), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc6d72), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc6dbc), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc6f8e), NativeJournalAgreementField::Literal},
        {native_reference_address(base, 0xc6ff8), NativeJournalAgreementField::Literal},
    };
    for (const auto &[site, kind] : fields)
        if (caller == site) return kind;
    return NativeJournalAgreementField::None;
#else
    const auto base = native_history_profile_base();
    if (!base || caller < native_reference_address(base, 0x17cda80) ||
            caller >= native_reference_address(base, 0x17d92b0))
        return NativeJournalAgreementField::None;
    static constexpr std::pair<uintptr_t, NativeJournalAgreementField> fields[] = {
        {0x17cfed3, NativeJournalAgreementField::Title},
        {0x17cffdd, NativeJournalAgreementField::Counter},
        {0x17d2614, NativeJournalAgreementField::Type},
        {0x17d0263, NativeJournalAgreementField::Actor},
        {0x17d276b, NativeJournalAgreementField::Group},
        {0x17d2974, NativeJournalAgreementField::Actor},
        {0x17d34e8, NativeJournalAgreementField::Group},
        {0x17d35e0, NativeJournalAgreementField::Site},
        {0x17d3e8b, NativeJournalAgreementField::Person},
        {0x17d3f8f, NativeJournalAgreementField::Person},
        {0x17d4089, NativeJournalAgreementField::Group},
        {0x17d44a3, NativeJournalAgreementField::Person},
        {0x17d45b6, NativeJournalAgreementField::Person},
        {0x17d469f, NativeJournalAgreementField::Artifact},
        {0x17d484f, NativeJournalAgreementField::Person},
        {0x17d4962, NativeJournalAgreementField::Person},
        {0x17d4a4b, NativeJournalAgreementField::Group},
        {0x17d4bee, NativeJournalAgreementField::Person},
        {0x17d4cf2, NativeJournalAgreementField::Person},
        {0x17d4ded, NativeJournalAgreementField::Artifact},
        {0x17d4efa, NativeJournalAgreementField::Site},
        {0x17d500e, NativeJournalAgreementField::Group},
        {0x17d52ba, NativeJournalAgreementField::Actor},
        {0x17d53a5, NativeJournalAgreementField::Group},
        {0x17d549d, NativeJournalAgreementField::Site},
        {0x17d664c, NativeJournalAgreementField::Person},
        {0x17d72a5, NativeJournalAgreementField::Person},
        {0x17d73a9, NativeJournalAgreementField::Person},
        {0x17d7640, NativeJournalAgreementField::Date},
        {0x17d77aa, NativeJournalAgreementField::Person},
        {0x17d78ae, NativeJournalAgreementField::Person},
        {0x17d7a10, NativeJournalAgreementField::Person},
        {0x17d7b27, NativeJournalAgreementField::Person},
        {0x17d7bae, NativeJournalAgreementField::Person},
        {0x17d7cbe, NativeJournalAgreementField::Person},
        {0x17d7e19, NativeJournalAgreementField::Person},
        {0x17d7f29, NativeJournalAgreementField::Person},
        {0x17d8030, NativeJournalAgreementField::Group},
        {0x17d8133, NativeJournalAgreementField::Site},
        {0x17d8223, NativeJournalAgreementField::Person},
        {0x17d8333, NativeJournalAgreementField::Person},
        {0x17d843a, NativeJournalAgreementField::Site},
        {0x17d8524, NativeJournalAgreementField::Person},
        {0x17d8628, NativeJournalAgreementField::Person},
        {0x17d877d, NativeJournalAgreementField::Person},
        {0x17d888d, NativeJournalAgreementField::Person},
        {0x17d89ab, NativeJournalAgreementField::Site},
        {0x17d8aa0, NativeJournalAgreementField::Person},
        {0x17d8b73, NativeJournalAgreementField::Person},
        {0x17d00c1, NativeJournalAgreementField::Literal},
        {0x17d02f0, NativeJournalAgreementField::Literal},
        {0x17d26da, NativeJournalAgreementField::Literal},
        {0x17d27d2, NativeJournalAgreementField::Literal},
        {0x17d2a01, NativeJournalAgreementField::Literal},
        {0x17d2d53, NativeJournalAgreementField::Literal},
        {0x17d2e21, NativeJournalAgreementField::Literal},
        {0x17d31aa, NativeJournalAgreementField::Literal},
        {0x17d344d, NativeJournalAgreementField::Literal},
        {0x17d354f, NativeJournalAgreementField::Literal},
        {0x17d383b, NativeJournalAgreementField::Literal},
        {0x17d3891, NativeJournalAgreementField::Literal},
        {0x17d3c4c, NativeJournalAgreementField::Literal},
        {0x17d3ef1, NativeJournalAgreementField::Literal},
        {0x17d3ff4, NativeJournalAgreementField::Literal},
        {0x17d40e5, NativeJournalAgreementField::Literal},
        {0x17d4121, NativeJournalAgreementField::Literal},
        {0x17d450a, NativeJournalAgreementField::Literal},
        {0x17d4620, NativeJournalAgreementField::Literal},
        {0x17d48b6, NativeJournalAgreementField::Literal},
        {0x17d49cc, NativeJournalAgreementField::Literal},
        {0x17d4c54, NativeJournalAgreementField::Literal},
        {0x17d4d57, NativeJournalAgreementField::Literal},
        {0x17d4e64, NativeJournalAgreementField::Literal},
        {0x17d4f78, NativeJournalAgreementField::Literal},
        {0x17d50a4, NativeJournalAgreementField::Literal},
        {0x17d5118, NativeJournalAgreementField::Literal},
        {0x17d530a, NativeJournalAgreementField::Literal},
        {0x17d540c, NativeJournalAgreementField::Literal},
        {0x17d5527, NativeJournalAgreementField::Literal},
        {0x17d55b1, NativeJournalAgreementField::Literal},
        {0x17d689a, NativeJournalAgreementField::Literal},
        {0x17d68cf, NativeJournalAgreementField::Literal},
        {0x17d690f, NativeJournalAgreementField::Literal},
        {0x17d6957, NativeJournalAgreementField::Literal},
        {0x17d6ad1, NativeJournalAgreementField::Literal},
        {0x17d6b06, NativeJournalAgreementField::Literal},
        {0x17d6b3a, NativeJournalAgreementField::Literal},
        {0x17d6b8e, NativeJournalAgreementField::Literal},
        {0x17d730b, NativeJournalAgreementField::Literal},
        {0x17d740e, NativeJournalAgreementField::Literal},
        {0x17d748e, NativeJournalAgreementField::Literal},
        {0x17d76f5, NativeJournalAgreementField::Literal},
        {0x17d7729, NativeJournalAgreementField::Literal},
        {0x17d7810, NativeJournalAgreementField::Literal},
        {0x17d7913, NativeJournalAgreementField::Literal},
        {0x17d7a54, NativeJournalAgreementField::Literal},
        {0x17d7a92, NativeJournalAgreementField::Literal},
        {0x17d7ac7, NativeJournalAgreementField::Literal},
        {0x17d7c1a, NativeJournalAgreementField::Literal},
        {0x17d7d29, NativeJournalAgreementField::Literal},
        {0x17d7d5d, NativeJournalAgreementField::Literal},
        {0x17d7d92, NativeJournalAgreementField::Literal},
        {0x17d7e85, NativeJournalAgreementField::Literal},
        {0x17d7f94, NativeJournalAgreementField::Literal},
        {0x17d8097, NativeJournalAgreementField::Literal},
        {0x17d8167, NativeJournalAgreementField::Literal},
        {0x17d819c, NativeJournalAgreementField::Literal},
        {0x17d828f, NativeJournalAgreementField::Literal},
        {0x17d839e, NativeJournalAgreementField::Literal},
        {0x17d846e, NativeJournalAgreementField::Literal},
        {0x17d84a3, NativeJournalAgreementField::Literal},
        {0x17d858a, NativeJournalAgreementField::Literal},
        {0x17d868d, NativeJournalAgreementField::Literal},
        {0x17d86c1, NativeJournalAgreementField::Literal},
        {0x17d86f6, NativeJournalAgreementField::Literal},
        {0x17d87e9, NativeJournalAgreementField::Literal},
        {0x17d88f8, NativeJournalAgreementField::Literal},
        {0x17d89df, NativeJournalAgreementField::Literal},
        {0x17d8ad5, NativeJournalAgreementField::Literal},
        {0x17d8b13, NativeJournalAgreementField::Literal},
    };
    for (const auto &[site, kind] : fields)
        if (caller == native_reference_address(base, site)) return kind;
    return NativeJournalAgreementField::None;
#endif
}
