// Called only by the settings menu on the native SDL event thread. The
// resident loader owns the switch, so a reloaded core must also work with
// the loader's existing event export rather than require a new hint consumer.
static bool request_native_dfhack_toggle() {
    using ToggleFn = int (*)() noexcept;
    using EventFn = bool (*)(void *);

    // An earlier core may have left this request pending in a loader that
    // did not understand it. Do not let a newer loader toggle a second time.
    constexpr const char *legacy_hint = "DFCN_SETTINGS_MENU_TOGGLE_DFHACK";
    if (SDL_GetHintBoolean(legacy_hint, SDL_FALSE) == SDL_TRUE &&
            SDL_SetHintWithPriority(legacy_hint, "0", SDL_HINT_OVERRIDE) != SDL_TRUE)
        return false;

#ifdef _WIN32
    if (dfhack::switch_client::toggle()) return true;
    const auto resident = GetModuleHandleW(L"dfhooks_dfcn.dll");
    if (!resident) return false;
    const auto toggle = reinterpret_cast<ToggleFn>(GetProcAddress(resident,
        "dfcn_toggle_dfhack_v1"));
    if (toggle) return toggle() != 0;
    const auto event = reinterpret_cast<EventFn>(GetProcAddress(resident,
        "dfhooks_sdl_event"));
    if (!event) return false;
#else
    // The core exports dfhooks_sdl_event too. Locate the resident image from
    // its unique optional interface before looking up that shared name.
    void *anchor = dlsym(RTLD_DEFAULT, "dfcn_toggle_dfhack_v1");
    if (!anchor) anchor = dlsym(RTLD_DEFAULT, "dfcn_get_dfhack_command_context_v1");
    if (!anchor) anchor = dlsym(RTLD_DEFAULT, "dfcn_is_dfhack_disabled_v1");
    Dl_info owner{};
    if (!anchor || !dladdr(anchor, &owner) || !owner.dli_fname || !owner.dli_fbase)
        return false;
    void *resident = dlopen(owner.dli_fname, RTLD_NOW | RTLD_NOLOAD);
    if (!resident) return false;
    const auto toggle = reinterpret_cast<ToggleFn>(dlsym(resident,
        "dfcn_toggle_dfhack_v1"));
    if (toggle) {
        const bool accepted = toggle() != 0;
        dlclose(resident);
        return accepted;
    }
    const auto event = reinterpret_cast<EventFn>(dlsym(resident,
        "dfhooks_sdl_event"));
    Dl_info event_owner{};
    const bool resident_event = event && dladdr(reinterpret_cast<void *>(event), &event_owner) &&
        event_owner.dli_fbase == owner.dli_fbase;
    // The loader already owns this image for the process lifetime; release
    // only the temporary lookup reference before invoking its native entry.
    dlclose(resident);
    if (!resident_event) return false;
#endif

    // This is a direct internal call, never a queued or system keyboard
    // event. Reuse the resident's supported Shift+F11 request path and clear
    // its key latch on both sides so one click always requests one action.
    SDL_Event shortcut{};
    shortcut.type = SDL_KEYUP;
    shortcut.key.state = SDL_RELEASED;
    shortcut.key.keysym.scancode = SDL_SCANCODE_F11;
    shortcut.key.keysym.sym = SDLK_F11;
    event(&shortcut);
    shortcut.type = SDL_KEYDOWN;
    shortcut.key.state = SDL_PRESSED;
    shortcut.key.keysym.mod = KMOD_SHIFT;
    const bool accepted = event(&shortcut);
    shortcut.type = SDL_KEYUP;
    shortcut.key.state = SDL_RELEASED;
    shortcut.key.keysym.mod = KMOD_NONE;
    event(&shortcut);
    return accepted;
}
