// Resolve native render imports and glyph return addresses. Hook ownership,
// installation order and shutdown are shared in native_hooks.inc.
static bool native_prepare_render_bindings() {
    g_native_glyph_interception_ready = false;
    void **copy_slot = nullptr, **present_slot = nullptr, **mouse_slot = nullptr;
#ifdef _WIN32
    const HMODULE executable = GetModuleHandleW(nullptr);
    if (!executable || !native_pe_supported()) {
        log_line("ERROR", "Native render bindings: executable or usable address catalog is unavailable");
        return false;
    }
    copy_slot = find_iat_slot(executable, "SDL2.dll", "SDL_RenderCopy");
    present_slot = find_iat_slot(executable, "SDL2.dll", "SDL_RenderPresent");
    mouse_slot = find_iat_slot(executable, "SDL2.dll", "SDL_GetMouseState");
    if (!copy_slot || !present_slot) {
        std::string message = "Native render bindings: missing SDL2 imports:";
        if (!copy_slot) message += " SDL_RenderCopy";
        if (!present_slot) message += " SDL_RenderPresent";
        log_line("ERROR", message);
        return false;
    }
    g_real_copy = reinterpret_cast<RenderCopyFn>(*copy_slot);
    g_real_present = reinterpret_cast<PresentFn>(*present_slot);
    g_real_get_mouse_state = mouse_slot ? reinterpret_cast<GetMouseStateFn>(*mouse_slot) : nullptr;
    const uintptr_t base = reinterpret_cast<uintptr_t>(executable);
    g_base_glyph_return = native_pe_address(base, 0x008ddfb1);
    g_top_glyph_return = native_pe_address(base, 0x008de151);
    // update_all dispatches through the same base/top vtable entries, so it
    // reuses these two call sites instead of emitting an inline third call.
    g_full_top_glyph_return = 0;
    const bool base_glyph = validate_indirect_call(g_base_glyph_return, copy_slot);
    const bool top_glyph = validate_indirect_call(g_top_glyph_return, copy_slot);
    if (!base_glyph || !top_glyph) {
        std::ostringstream message;
        message << "Native glyph SDL_RenderCopy call identity mismatch; base_return=0x" << std::hex
            << (g_base_glyph_return ? g_base_glyph_return - base : 0) << " top_return=0x"
            << (g_top_glyph_return ? g_top_glyph_return - base : 0) << " expected_iat=0x"
            << reinterpret_cast<uintptr_t>(copy_slot) - base;
        message << "; retaining independently bound pre-masked UI and private layers";
        log_line("WARN", message.str());
    }
    if (!base_glyph) g_base_glyph_return = 0;
    if (!top_glyph) g_top_glyph_return = 0;
    g_native_glyph_interception_ready = base_glyph && top_glyph;
#else
    void *sdl = dlopen("libSDL2-2.0.so.0", RTLD_NOW | RTLD_NOLOAD);
    if (!sdl) sdl = dlopen("libSDL2-2.0.so.0", RTLD_NOW | RTLD_LOCAL);
    if (!sdl) {
        log_line("ERROR", std::string("Cannot resolve native SDL: ") + dlerror());
        return false;
    }
    g_real_copy = reinterpret_cast<RenderCopyFn>(dlsym(sdl, "SDL_RenderCopy"));
    g_real_present = reinterpret_cast<PresentFn>(dlsym(sdl, "SDL_RenderPresent"));
    g_real_get_mouse_state = reinterpret_cast<GetMouseStateFn>(dlsym(sdl, "SDL_GetMouseState"));
    dlclose(sdl);
    PatchSearch copy{"SDL_RenderCopy"}, present{"SDL_RenderPresent"}, mouse{"SDL_GetMouseState"};
    dl_iterate_phdr(find_present_slot, &copy);
    dl_iterate_phdr(find_present_slot, &present);
    dl_iterate_phdr(find_present_slot, &mouse);
    copy_slot = copy.slot;
    present_slot = present.slot;
    mouse_slot = mouse.slot;
    const auto base = reinterpret_cast<uintptr_t>(dlsym(RTLD_DEFAULT, "_ZN16renderer_2d_base11update_tileEii"));
    const auto top = reinterpret_cast<uintptr_t>(dlsym(RTLD_DEFAULT, "_ZN16renderer_2d_base15update_top_tileEii"));
    const auto full = reinterpret_cast<uintptr_t>(dlsym(RTLD_DEFAULT, "_ZN16renderer_2d_base10update_allEv"));
    if (!base || !top || !full) return false;
    g_base_glyph_return = elf_runtime::symbol_return("_ZN16renderer_2d_base11update_tileEii", 0x178);
    g_top_glyph_return = elf_runtime::symbol_return("_ZN16renderer_2d_base15update_top_tileEii", 0x14e);
    g_full_top_glyph_return = elf_runtime::symbol_return("_ZN16renderer_2d_base10update_allEv", 0x508);
    if (!g_base_glyph_return || !g_top_glyph_return || !g_full_top_glyph_return) return false;
    for (const uintptr_t site : {g_base_glyph_return, g_top_glyph_return, g_full_top_glyph_return}) {
        if (*reinterpret_cast<const unsigned char *>(site - 5) != 0xe8) {
            log_line("ERROR", "Native glyph SDL_RenderCopy call identity mismatch");
            return false;
        }
    }
    g_native_glyph_interception_ready = true;
#endif
    if (!copy_slot || !present_slot || !g_real_copy || !g_real_present) {
        log_line("ERROR", "Cannot resolve required SDL render bindings");
        return false;
    }
    // Mouse remapping is an independent interaction capability. Missing its
    // import must not disable already identified text and render contracts.
    if (!mouse_slot || !g_real_get_mouse_state) mouse_slot = nullptr;
    g_render_hooks = {{
        {copy_slot, nullptr, reinterpret_cast<void *>(&dfcn_render_copy)},
        {present_slot, nullptr, reinterpret_cast<void *>(&dfcn_render_present)},
        {mouse_slot, nullptr, reinterpret_cast<void *>(&dfcn_get_mouse_state)},
    }};
    return true;
}
