// Independent registration reads no page object, caller stack or extra
// register. Each role retains its own standard addst CALL and landing;
// typed title consumers still enforce their separate ownership contracts.
#ifdef _WIN32
static bool g_native_static_caption_roles_registered = false;

static bool native_static_caption_role(NativeCivilizationField field) noexcept {
    switch (field) {
    case NativeCivilizationField::TradePrefix:
    case NativeCivilizationField::TradeValue:
    case NativeCivilizationField::FortressPositionLabel:
        return true;
    default: return false;
    }
}

static bool native_static_caption_role(NativeLocationPickerField field) noexcept {
    switch (field) {
    case NativeLocationPickerField::Prompt:
    case NativeLocationPickerField::Action:
    case NativeLocationPickerField::Kind:
    case NativeLocationPickerField::FaithStatus:
    case NativeLocationPickerField::FaithCount:
    case NativeLocationPickerField::GuildStatus:
    case NativeLocationPickerField::GuildLabel:
    case NativeLocationPickerField::GuildMissing:
    case NativeLocationPickerField::DetailKind:
    case NativeLocationPickerField::DetailFixed:
    case NativeLocationPickerField::DetailCount:
    case NativeLocationPickerField::DetailCountWord:
    case NativeLocationPickerField::DetailRequirement:
    case NativeLocationPickerField::PetitionFixed:
        return true;
    default: return false;
    }
}

static bool native_static_caption_role(NativeTravelBuildingField field) noexcept {
    switch (field) {
    case NativeTravelBuildingField::Literal:
        return true;
    default: return false;
    }
}

static bool native_static_caption_role(NativeAdventureBarterField field) noexcept {
    switch (field) {
    case NativeAdventureBarterField::Control:
    case NativeAdventureBarterField::Prompt:
    case NativeAdventureBarterField::ItemHeading:
    case NativeAdventureBarterField::Weight:
    case NativeAdventureBarterField::CurrencyAmount:
    // Protection is independently useful even when the barter page's
    // formatter and reply observers are unavailable. This role is never a
    // literal-translation permission.
    case NativeAdventureBarterField::Editable:
        return true;
    default: return false;
    }
}

template<typename Site> static bool native_fixed_location_profession_role(const Site &) noexcept { return false; }
static bool native_fixed_location_profession_role(const NativeLocationPickerSite &site) noexcept {
    if (site.field != NativeLocationPickerField::DetailRole || site.source_call.target != 0xad9960)
        return false;
    // These source declarations select ten fixed occupation literals. The
    // adjacent generated entity_position title (3b8199) deliberately remains
    // outside this independent capability despite sharing DetailRole.
    switch (site.source_call.va) {
    case 0x3b7efd: // Tavern Keeper
    case 0x3b7feb: // Performer
    case 0x3b8018: // Scholar
    case 0x3b8045: // Scribe
    case 0x3b8072: // Mercenary
    case 0x3b809f: // Monster Slayer
    case 0x3b80cc: // Doctor
    case 0x3b80f9: // Diagnostician
    case 0x3b8126: // Surgeon
    case 0x3b8153: // Bone Doctor
        return true;
    default: return false;
    }
}

static size_t native_registered_caption_role_count(uintptr_t caller) noexcept {
    if (!caller) return 0;
    size_t occurrences = 0;
    const auto count = [&](const auto &sites) {
        occurrences += std::count_if(sites.begin(), sites.end(),
            [&](const auto &site) { return site.return_address == caller; });
    };
    count(g_native_civilization_caption_sites); count(g_native_location_picker_sites);
    count(g_native_travel_building_sites); count(g_native_adventure_barter_sites);
    count(g_native_info_title_binding.sites);
    occurrences += std::count(g_native_mission_title_returns.begin(),
        g_native_mission_title_returns.end(), caller);
    return occurrences;
}

static bool native_fixed_location_profession_caller(uintptr_t caller) noexcept {
    if (native_registered_caption_role_count(caller) != 1) return false;
    // Both full installation and independent registration publish verified
    // native callers. Preserve the canonical role from that registry rather
    // than assigning it from the captured spelling or a target RVA.
    return std::any_of(g_native_location_picker_sites.begin(), g_native_location_picker_sites.end(),
        [&](const auto &site) {
            return site.return_address == caller && native_fixed_location_profession_role(site);
        });
}

template<typename Site> static bool native_proved_chooser_name_role(const Site &) noexcept { return false; }
static bool native_proved_chooser_name_role(const NativeLocationPickerSite &site) noexcept {
    // Name roles are not part of the static-label allowlist. Each admitted
    // chooser role retains its separately published complete source contract.
    uint32_t primary = 0, draw = 0; std::string_view feature;
    uint32_t form = pe_runtime::inline_resize_detail::guard_form;
    if (site.field == NativeLocationPickerField::Name) {
        // This suffix certificate also owns the positive main-name path:
        // formatter, both resize arms, actual draw, cleanup and footer.
        primary = 0x3bbb50; draw = 0x3bbbcb; feature = "location_chooser.detail_rows";
        form = 0;
    } else if (site.field == NativeLocationPickerField::GuildChoice) {
        primary = 0x3b9811; draw = 0x3b985e; feature = "location_chooser.guild_status";
    } else if (site.field == NativeLocationPickerField::FaithChoice) {
        primary = 0x3ba6d1; draw = 0x3ba71b; feature = "location_chooser.faith_status";
    } else return false;
    const auto &state = pe_runtime::state();
    if (!pe_runtime::usable(state) || site.source_call.va != draw || site.source_call.target != 0xad9960 ||
            !std::binary_search(state.absent_features.begin(), state.absent_features.end(), native_history_abi::semantic_id(feature))) return false;
    return std::any_of(state.inline_resizes.begin(), state.inline_resizes.end(), [&](const auto &binding) {
        return binding.reference == primary &&
            (binding.flags & pe_runtime::inline_resize_detail::operation_forms) == form;
    });
}

static bool native_proved_chooser_primary_name_caller(uintptr_t caller) noexcept {
    if (native_registered_caption_role_count(caller) != 1) return false;
    return std::any_of(g_native_location_picker_sites.begin(), g_native_location_picker_sites.end(),
        [&](const auto &site) {
            return site.return_address == caller && site.field == NativeLocationPickerField::Name &&
                native_proved_chooser_name_role(site);
        });
}

static void bind_native_independent_title_roles(NativeCaptionProfile &profile) {
    struct Title {
        NativeCall call;
        NativeInfoTitleKind kind;
    };
    // Each original addst receives one typed title. These consumers need no
    // extra register or historical frame displacement. Keep Nobles' separate
    // column productions outside this single-span capability.
    const Title titles[]{
        {NativeCall{0x154a23, 0xad9960, nullptr}, NativeInfoTitleKind::Item},
        {NativeCall{0x15a25c, 0xad9960, nullptr}, NativeInfoTitleKind::ItemList},
        {NativeCall{0x180575, 0xad9960, nullptr}, NativeInfoTitleKind::Building},
        {NativeCall{0x195db0, 0xad9960, nullptr}, NativeInfoTitleKind::Building},
        {NativeCall{0x158a74, 0xad9960, nullptr}, NativeInfoTitleKind::Engraving},
        {NativeCall{0x158aef, 0xad9960, nullptr}, NativeInfoTitleKind::Terrain},
        {NativeCall{0x158f6d, 0xad9960, nullptr}, NativeInfoTitleKind::PlannedEngraving},
        {NativeCall{0x18b333, 0xad9960, nullptr}, NativeInfoTitleKind::Item},
        {NativeCall{0x18b3bb, 0xad9960, nullptr}, NativeInfoTitleKind::DisplayStatus},
        {NativeCall{0x18b412, 0xad9960, nullptr}, NativeInfoTitleKind::DisplayStatus},
        {NativeCall{0x88472a, 0xad9960, nullptr}, NativeInfoTitleKind::Item},
    };
    for (const auto &title : titles) {
        const auto landing = title.call.va + 5;
        if (native_caption_widget_call_return(profile.base, title.call, landing))
            profile.info_titles.sites.push_back({native_pe_address(profile.base, landing), title.kind});
    }
    // Building permission still comes from the actual drawing sheet's
    // active ID and these named fields. Missing ownership/layout preserves
    // the native title; a tomb's direct stored-name caller is always authored.
    profile.info_titles.building_name = {0xd0, "building", "name"};
    profile.info_titles.editing_name = {0x1d59, "view_sheets_interfacest", "building_entering_nickname"};
    profile.info_titles.item_list_right_inset = 8;
    const NativeCall missions[]{
        {0x1c66d5, 0xad9960, nullptr},
        {0x1c8f3f, 0xad9960, nullptr},
    };
    for (const auto &call : missions) {
        const auto landing = call.va + 5;
        if (native_caption_widget_call_return(profile.base, call, landing))
            profile.mission_title_returns.push_back(native_pe_address(profile.base, landing));
    }
}

static void register_native_static_caption_roles() noexcept {
    if (g_native_static_caption_roles_registered) return;
    try {
        NativeCaptionProfile profile;
        profile.base = native_history_profile_base();
        if (!profile.base) return;
        populate_native_caption_semantic_profile(profile);
        // This resolver also lists unproved names and profiles. Preserve
        // only the selected static, protected and independently typed roles.
        bind_native_adventure_barter_captions(profile);
        bind_native_independent_title_roles(profile);
        const auto occurrences = [&](uintptr_t address) {
            size_t count = 0;
            const auto add = [&](const auto &sites) {
                count += std::count_if(sites.begin(), sites.end(),
                    [&](const auto &site) { return site.return_address == address; });
            };
            add(profile.civilization_fields); add(profile.location_picker_fields);
            add(profile.travel_building_fields); add(profile.adventure_barter_fields);
            add(profile.info_titles.sites);
            count += std::count(profile.mission_title_returns.begin(),
                profile.mission_title_returns.end(), address);
            return count;
        };
        // Decide against the unfiltered tables, so an aliased name/editor
        // caller vetoes a static role even when that other role is deferred.
        std::vector<uintptr_t> ambiguous;
        const auto collisions = [&](const auto &sites) {
            for (const auto &site : sites)
                if (site.return_address && occurrences(site.return_address) != 1)
                    ambiguous.push_back(site.return_address);
        };
        collisions(profile.civilization_fields); collisions(profile.location_picker_fields);
        collisions(profile.travel_building_fields); collisions(profile.adventure_barter_fields);
        collisions(profile.info_titles.sites);
        for (const auto address : profile.mission_title_returns)
            if (address && occurrences(address) != 1) ambiguous.push_back(address);
        const auto retain = [&](auto &sites) {
            std::erase_if(sites, [&](const auto &site) {
                const auto &call = site.source_call;
                return !site.return_address || (!native_static_caption_role(site.field) &&
                    !native_proved_chooser_name_role(site) && !native_fixed_location_profession_role(site)) ||
                    !call.va || call.va > UINTPTR_MAX - 5 ||
                    std::find(ambiguous.begin(), ambiguous.end(), site.return_address) != ambiguous.end() ||
                    !native_caption_widget_call_return(profile.base, call, call.va + 5) ||
                    site.return_address != native_pe_address(profile.base, call.va + 5);
            });
        };
        retain(profile.civilization_fields); retain(profile.location_picker_fields);
        retain(profile.travel_building_fields); retain(profile.adventure_barter_fields);
        std::erase_if(profile.info_titles.sites, [&](const auto &site) {
            return std::find(ambiguous.begin(), ambiguous.end(), site.return_address) != ambiguous.end();
        });
        std::erase_if(profile.mission_title_returns, [&](const auto address) {
            return std::find(ambiguous.begin(), ambiguous.end(), address) != ambiguous.end();
        });
        const size_t count = profile.civilization_fields.size() + profile.location_picker_fields.size() +
            profile.travel_building_fields.size() + profile.adventure_barter_fields.size() +
            profile.info_titles.sites.size() + profile.mission_title_returns.size();
        // Other dynamic names and profiles still require their original
        // contracts. Typed titles retain their own authored/editing checks;
        // no independent role permits a general name or word fallback.
        g_native_civilization_caption_sites.swap(profile.civilization_fields);
        g_native_location_picker_sites.swap(profile.location_picker_fields);
        g_native_travel_building_sites.swap(profile.travel_building_fields);
        g_native_adventure_barter_sites.swap(profile.adventure_barter_fields);
        g_native_info_title_binding = std::move(profile.info_titles);
        g_native_mission_title_returns.swap(profile.mission_title_returns);
        g_native_static_caption_roles_registered = true;
        log_line("INFO", "Native static caption roles: " + std::to_string(count) +
            " independently bound draw callers");
    } catch (...) {
        // The base draw hooks and their native originals remain usable.
    }
}
#endif
