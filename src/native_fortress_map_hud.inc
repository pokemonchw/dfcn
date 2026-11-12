// The native HUD predicate uses the history adapter's generated fields and
// guarded reads, so its implementation follows that adapter's definitions.
#ifdef _WIN32
static bool native_fortress_map_hud_page() {
    const uintptr_t base = native_history_profile_base();
    const uintptr_t screen = native_current_viewscreen();
    if (!base || !screen || !native_history_object_is(screen, "viewscreen_dwarfmodest"))
        return false;
    uint8_t submenu = 1;
    int16_t mode = -1;
    int32_t game_type = -1, selection = -1;
    // plotinfo.main.mode is the int16 ui_sidebar_mode in df.plotinfo.xml;
    // Default is zero. Both PE editions resolve this reviewed coordinate.
    if (!native_history_copy(native_history_object_member(screen,
                "viewscreen_dwarfmodest", "sideSubmenu", 1), submenu) || submenu ||
            !native_history_copy(native_reference_address(base, 0x239a1f8), mode) || mode ||
            !native_history_copy(native_reference_address(base,
                native_history_layout::gametype_rva), game_type) ||
            game_type == 4 || game_type == 5 ||
            !native_history_copy(native_reference_address(base, 0x18a938c), selection) ||
            selection == 2) return false;
    // The stockpile type panel has no open bit. Its native renderer
    // (0x3e5e54..0x3e5e62) uses stockpile_interfacest::cur_bld instead.
    // Keep that panel on the complete UI path so its two-row category
    // captions are joined before word and generated-name matching.
    uintptr_t stockpile = 0;
    if (!native_history_copy(native_reference_address(base, 0x18a41e0), stockpile) ||
            stockpile) return false;
    // Native 0x3f58bc..0x3f5a23 gates interactive map controls on both pause
    // state and component states. Pausing does not change HUD text ownership:
    // pause_state (0x2131b5e) must not be treated as an open UI component.
    // Require the optional squads and workshop parents to be closed; their
    // contents, and the help foreground, still use their complete readers.
    constexpr uintptr_t closed_states[]{
        0x18a6ff8, 0x18a4330, 0x18a7200, 0x18a6378,
        0x18a1f78, 0x18a21b0, 0x18a3598, 0x18a2710, 0x18a26e0,
        0x18a2590, 0x18a2cf8, 0x18a2f48, 0x18a41a8, 0x18a1a58,
        0x18a72a0, 0x18a2ac8, 0x18a4238
    };
    for (const auto coordinate : closed_states) {
        uint8_t open = 1;
        if (!native_history_copy(native_reference_address(base, coordinate), open) || open)
            return false;
    }
    // A minimized guide leaves the same local map HUD active. Its own ink
    // belongs to the already captured help grid, rather than a main-page
    // document. An expanded guide or a failed private capture still needs
    // the complete page pipeline.
    uint8_t help_open = 1;
    if (!native_history_copy(native_reference_address(base, 0x18a75b8), help_open))
        return false;
    if (help_open) {
        uint32_t flags = 0;
        if (!native_history_copy(native_reference_address(base, 0x18a75bc), flags) ||
                !(flags & 4) || !g_native_help_layer.ready) return false;
    }
    // The native gate calls its popup-queue getter. Borrow the same vector
    // through the existing world layout instead of invoking a game function.
    NativeBorrowedVector<uintptr_t> popups;
    return native_history_read_vector(native_history_global(0x24e3880), popups) &&
        !popups.size();
}
#else
static bool native_fortress_map_hud_page() {
    const auto base = native_history_profile_base();
    const auto screen = native_current_viewscreen();
    if (!native_elf_5317_address(0x2733014) || !screen ||
            !native_history_object_is(screen, "viewscreen_dwarfmodest")) return false;
    uint8_t submenu = 1;
    int16_t mode = -1;
    int32_t game_type = -1, selection = -1;
    if (!native_history_copy(native_history_object_member(screen,
                "viewscreen_dwarfmodest", "sideSubmenu", 1), submenu) || submenu ||
            !native_history_copy(native_history_named_global("plotinfost", "main.mode", 2), mode) || mode ||
            !native_history_copy(native_reference_address(base,
                native_history_layout::gametype_rva), game_type) || game_type == 4 || game_type == 5 ||
            !native_history_copy(native_elf_5317_address(0x2733014), selection) || selection == 2) return false;
    uintptr_t stockpile = 0;
    if (!native_history_copy(native_history_named_global("gamest", "main_interface.stockpile.cur_bld", 8), stockpile) ||
            stockpile) return false;
    constexpr std::string_view closed[]{
        "view_sheets", "info", "squads", "create_squad", "assign_uniform", "create_work_order", "options",
        "job_details", "assign_trade", "trade", "diplomacy", "petitions", "stocks",
        "assign_display_item", "name_creator", "image_creator", "custom_symbol",
        "squad_equipment", "squad_schedule", "squad_selector", "burrow_selector",
        "location_selector", "location_details", "hauling_stop_conditions", "assign_vehicle",
        "stockpile_link", "stockpile_tools", "custom_stockpile", "hotkey"
    };
    for (const auto member : closed) {
        uint8_t open = 1;
        if (!native_history_copy(native_history_named_global("gamest",
                "main_interface." + std::string(member) + ".open", 1), open) || open) return false;
    }
    uint8_t help = 1;
    uint32_t flags = 0;
    if (!native_history_copy(native_elf_5317_address(0x2731720), help)) return false;
    if (help && (!native_history_copy(native_elf_5317_address(0x2731724), flags) ||
            !(flags & 4) || !g_native_help_layer.ready)) return false;
    NativeBorrowedVector<uintptr_t> popups;
    return native_history_read_vector(native_history_global(0x24e3880), popups) && !popups.size();
}
#endif
