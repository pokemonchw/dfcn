// Called from hooks_sdl_event while the game simulation is paused by the
// native SDL event loop. Keep the display flag and active widget atlas in sync.
static void toggle_native_graphics() {
    auto *graphics = native_graphics_owner();
#ifdef _WIN32
    if (!native_validate_game()) return;
    const auto base = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    auto *settings = reinterpret_cast<NativeUiSettingsAbi *>(native_pe_address(base, 0x023cd770));
    void *enabler = reinterpret_cast<void *>(native_pe_address(base, 0x02390290));
    // Steam 53.16 PE: settings handles USE_GRAPHICS at 0x233cec..0x233ddb.
    // Use its native swaps, redraw and zoom queue wrapper with the MSVC ABI.
    const auto swap_sets = reinterpret_cast<void (*)(NativeUiSettingsAbi *)>(
        native_pe_address(base, 0xc37650));
    const auto redraw = reinterpret_cast<void (*)(graphicst *, short)>(
        native_pe_address(base, 0xae7c00));
    const auto zoom = reinterpret_cast<void (*)(void *, int)>(native_pe_address(base, 0x8e6c10));
    const auto swap_interface = reinterpret_cast<void (*)(void *)>(native_pe_address(base, 0x2514f0));
    void *classic_interface = reinterpret_cast<void *>(native_pe_address(base, 0x026613a8));
    // interface_setst::copy (0x24fd30) copies the 12-by-3 calendar first;
    // initialization at 0xdf3451 retains it in gps.graphical_interface.
    const void *active_calendar = reinterpret_cast<const void *>(native_pe_address(base, 0x0264bad0));
    const void *graphical_calendar = reinterpret_cast<const void *>(native_pe_address(base, 0x02655e90));
    constexpr size_t calendar_bytes = 12 * 3 * sizeof(int32_t);
    auto *reshape = native_graphics_member<bool>(graphics,
        offsetof(graphicst, main_thread_requesting_reshape));
    auto *clean_tiles = native_graphics_member<bool>(graphics,
        offsetof(graphicst, do_clean_tile_cache));
    if (!reshape || !clean_tiles) {
        log_line("ERROR", "Shift+F9: native graphics fields unavailable");
        return;
    }
#else
    auto *settings = static_cast<initst *>(dlsym(RTLD_DEFAULT, "init"));
    void *enabler = dlsym(RTLD_DEFAULT, "enabler");
    const auto swap_sets = reinterpret_cast<void (*)(initst *)>(
        dlsym(RTLD_DEFAULT, "_ZN6initst15swap_basic_setsEv"));
    const auto redraw = reinterpret_cast<void (*)(graphicst *, short)>(
        dlsym(RTLD_DEFAULT, "_ZN9graphicst28set_force_full_display_countEs"));
    const auto zoom = reinterpret_cast<void (*)(void *, int)>(
        dlsym(RTLD_DEFAULT, "_ZN9enablerst12zoom_displayE13zoom_commands"));
    // Settings calls this native interface_setst swap with gps.classic_interface
    // (reference ELF 0x158a42b). swap_basic_sets covers only init's widgets.
    const auto swap_interface = reinterpret_cast<void (*)(interface_setst *)>(
        native_elf_history_address(0x15979f0));
    auto *classic_interface = graphics ? &graphics->classic_interface : nullptr;
    const void *active_calendar = graphics ? graphics->texpos_calendar_month : nullptr;
    const void *graphical_calendar = graphics
        ? graphics->graphical_interface.texpos_calendar_month : nullptr;
    constexpr size_t calendar_bytes = sizeof(graphics->texpos_calendar_month);
#endif
    struct DisplayFlags { unsigned char *array; int32_t slotnum; } flags{};
    native_ui_settings_read_member(settings, 0, flags);
    if (!graphics || !enabler || !swap_sets || !swap_interface || !redraw || !zoom ||
        !flags.array || flags.slotnum <= 0) {
        log_line("ERROR", "Shift+F9: native graphics switching symbols unavailable");
        return;
    }
    flags.array[0] ^= 1; // INIT_DISPLAY_FLAG_USE_GRAPHICS
    swap_sets(settings);
    // graphical_interface retains the original graphic skins. Compare the
    // active calendar with that native snapshot so a session left out of sync
    // by the earlier hotkey is repaired too, instead of preserving its mismatch.
    const bool active_graphics = std::memcmp(active_calendar,
        graphical_calendar, calendar_bytes) == 0;
    const bool want_graphics = (flags.array[0] & 1) != 0;
    if (active_graphics != want_graphics)
        swap_interface(classic_interface);
    // Match the native graphics settings handler: reshape, redraw, zoom_reset.
#ifdef _WIN32
    *reshape = true;
    // PE settings also clears the old mode's tile cache (gps+0x70a).
    *clean_tiles = true;
#else
    graphics->main_thread_requesting_reshape = true;
#endif
    redraw(graphics, 2);
    zoom(enabler, 2);
    log_line("INFO", (flags.array[0] & 1)
        ? "Shift+F9: switched to graphics" : "Shift+F9: switched to classic ASCII");
}
