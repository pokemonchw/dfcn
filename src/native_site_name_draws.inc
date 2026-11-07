// Exact native site-name draws keep the world_site identity alongside the
// displayed buffer. Equal spellings never borrow another site's type/name.
static void capture_native_site_name_draw_with(graphicst *graphics,
        const NativeString *source, uintptr_t site, int name_right,
        NativeJustification just, uintptr_t caller) {
    graphics = native_graphics_view(graphics);
    NativeInputCallbackScope callback;
    NativeHistoryName name;
    bool owned = false;
    std::optional<std::array<long, 4>> name_clip;
    try {
        const uintptr_t base = native_history_profile_base();
        const uintptr_t address = site
            ? native_history_object_field(site, "world_site", 0) : 0;
        if (base && address &&
                capture_native_history_name(base, address, name) &&
                capture_native_history_site_name_context(base, site, name))
            owned = true;
#ifdef _WIN32
        const bool catalog_name = caller == native_pe_address(base, 0xd417e6);
#else
        const bool catalog_name = caller == native_reference_address(base, 0x18eee77);
#endif
        if (owned && graphics && catalog_name &&
                name_right > graphics->screenx && name_right <= graphics->dimx) {
            // Both catalogs start the independent type column at window-right-20.
            // This logical name-column bound belongs only to capture. Native
            // drawing keeps its original clip and width-zero argument.
            name_clip = std::array<long, 4>{graphics->clipx[0],
                std::min<long>(graphics->clipx[1], name_right - 1),
                graphics->clipy[0], graphics->clipy[1]};
        }
    } catch (...) {}
    // The exact producer holds this object even when its name/quoted-English
    // or map type/name string has already been clipped to dots.
    NativeSiteNameFactScope scope(owned ? &name : nullptr);
    capture_native_limited_caption_draw(graphics, source, just, 0, [&] {
        if (const auto original = g_native_clipped_caption_hooks.draw)
            callback.call_native([&] { native_graphics_call(original, graphics, source, just, 0); });
    }, false, NativeInfoTitleKind::None, false, {}, false,
        NativeCivilizationField::None, false, {},
        NativeLocationPickerField::None, NativeTravelBuildingField::None, caller, name_clip);
}

static void capture_native_site_name_draw(graphicst *graphics,
        const NativeString *source, uintptr_t site, int name_right) {
    const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    capture_native_site_name_draw_with(graphics, source, site, name_right,
        NativeJustification{}, caller);
}

#ifdef _WIN32
static void capture_native_worldgen_site_name_draw(graphicst *graphics,
        const NativeString *source, uintptr_t site, NativeJustification just) {
    const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    capture_native_site_name_draw_with(graphics, source, site, 0, just, caller);
}
#endif

#ifdef _WIN32
static std::vector<NativeCall> native_site_name_draw_calls() {
    // Legends Site rows: 7db20 resolves the actual site into RDI at d4164b;
    // d417e1 draws only [rbp+128]'s name/quoted-gloss field. The separate
    // d41920 type column retains its original native classification.
    std::vector<NativeCall> site_calls{
        {0xd417e1, 0xad9960,
            reinterpret_cast<const void *>(&capture_native_site_name_draw),
            {0x49, 0x89, 0xf8,
             0x44, 0x8b, 0x4c, 0x24, 0x48,
             0x41, 0x83, 0xe9, 0x14}}, // r8=rdi; r9d=caller[rsp+40]-20.
        // The world-map renderer's hovered site and compact action header
        // obtain this site's name/type directly from screen.site at +1d8.
        // Their independent government/population/type fields are unaffected.
        {0x1c2300, 0xad9960,
            reinterpret_cast<const void *>(&capture_native_site_name_draw),
            {0x4d, 0x8b, 0x85, 0xd8, 0x01, 0x00, 0x00}}, // mov r8,[r13+1d8]
        {0x1c7856, 0xad9960,
            reinterpret_cast<const void *>(&capture_native_site_name_draw),
            {0x4d, 0x8b, 0x87, 0xd8, 0x01, 0x00, 0x00}}, // mov r8,[r15+1d8]
        // World generation's site loop holds the actual world_site in RBX
        // for both native and English names. Preserve each original draw's
        // justification (including the English half-font flag) in R9D.
        {0xdfde6f, 0xad9960,
            reinterpret_cast<const void *>(&capture_native_worldgen_site_name_draw),
            {0x45, 0x89, 0xc1, 0x49, 0x89, 0xd8}}, // r9d=r8d; r8=rbx.
        {0xdfdeef, 0xad9960,
            reinterpret_cast<const void *>(&capture_native_worldgen_site_name_draw),
            {0x45, 0x89, 0xc1, 0x49, 0x89, 0xd8}},
    };
    return site_calls;
}

static std::array<uintptr_t, 5> native_site_name_draw_returns() {
    // Literal return consumers are also collected by the normal seed build.
    return {native_pe_rva(0xd417e6), native_pe_rva(0x1c2305), native_pe_rva(0x1c785b),
        native_pe_rva(0xdfde74), native_pe_rva(0xdfdef4)};
}

static bool resolve_native_site_name_draw_call(NativeCall &call, uintptr_t resume) {
    if (!call.va || !call.target || call.va > UINTPTR_MAX - 5) return false;
    const auto displacement = int64_t(call.target) - int64_t(call.va) - 5;
    if (displacement < INT32_MIN || displacement > INT32_MAX) return false;
    std::vector<unsigned char> expected{0xe8, 0, 0, 0, 0};
    const int32_t relative = static_cast<int32_t>(displacement);
    std::memcpy(expected.data() + 1, &relative, sizeof(relative));
    if (!native_pe_bytes(call.va, expected)) return false;
    const auto site = native_reference_va(call.va);
    if (!site || site > UINTPTR_MAX - 5 || resume != site + 5) return false;
    std::vector<NativeCall> one{call};
    if (!native_reference_calls(one, 0)) return false;
    call = std::move(one.front());
    return true;
}

static bool append_native_site_name_draw_calls(std::vector<NativeCall> &calls) {
    // Each writer owns a complete site-name fact by itself. A missing catalog
    // or world-map observer cannot disable the world's other name writers.
    auto sites = native_site_name_draw_calls();
    const auto returns = native_site_name_draw_returns();
    if (sites.size() != returns.size()) return false;
    for (size_t index = 0; index < sites.size(); ++index)
        if (resolve_native_site_name_draw_call(sites[index], returns[index])) calls.push_back(std::move(sites[index]));
    return true;
}

static std::array<NativeCallHook, 5> g_native_independent_site_name_hooks;

static bool native_independent_site_name_hooks_active() {
    return std::any_of(g_native_independent_site_name_hooks.begin(),
        g_native_independent_site_name_hooks.end(), [](const auto &hook) { return hook.active(); });
}

static bool uninstall_native_independent_site_name_hooks() {
    for (auto it = g_native_independent_site_name_hooks.rbegin();
            it != g_native_independent_site_name_hooks.rend(); ++it) {
        if (!it->uninstall("Native site-name observer restore") || it->active()) return false;
    }
    return true;
}

static bool install_native_independent_site_name_hooks() {
    // The complete profile already owns its admitted CALLs. Fallback observers
    // run only after the basic addst trampoline is installed, and are removed
    // before that trampoline or its original pointer can be released.
    if (g_native_caption_hooks.code.active()) return true;
    if (!g_native_clipped_caption_hooks.draw_entry.installed || !g_native_clipped_caption_hooks.draw) return false;
    const auto base = native_history_profile_base();
    if (!base) return false;
    auto calls = native_site_name_draw_calls();
    const auto returns = native_site_name_draw_returns();
    if (calls.size() != g_native_independent_site_name_hooks.size()) return false;
    size_t enabled = 0, deferred = 0;
    for (size_t index = 0; index < calls.size(); ++index) {
        auto &hook = g_native_independent_site_name_hooks[index];
        if (hook.installed) { ++enabled; continue; }
        bool installed = false;
        try {
            if (resolve_native_site_name_draw_call(calls[index], returns[index]))
                installed = hook.install(base, {calls[index]}, "Native site-name observer");
        } catch (const std::exception &error) {
            log_line("WARN", std::string("Native site-name observer: ") + error.what());
        } catch (...) { log_line("WARN", "Native site-name observer preparation failed"); }
        if (installed) { ++enabled; continue; }
        bool restored = false;
        try { restored = hook.uninstall("Native site-name observer rollback"); } catch (...) {}
        if (!restored || hook.active()) {
            log_line("ERROR", "Native site-name observer restoration incomplete; retaining draw trampoline");
            return false;
        }
        ++deferred;
    }
    log_line("INFO", "Native site-name observers: " + std::to_string(enabled) +
        " enabled, " + std::to_string(deferred) + " deferred independently");
    return true;
}
#else
static bool append_native_site_name_draw_calls(std::vector<NativeCall> &calls) {
    // The world view retains its site at +1f8. Legends keeps the resolved
    // site in R13, and adventure's travel card retains it at caller[RSP].
    const std::vector<NativeCall> site_calls{
        {0x142f671,0x425170,reinterpret_cast<const void *>(&capture_native_site_name_draw),
            {0x48,0x8b,0x85,0x90,0xfc,0xff,0xff,0x48,0x8b,0x90,0xf8,0x01,0x00,0x00}},
        {0x1ceee72,0x425170,reinterpret_cast<const void *>(&capture_native_site_name_draw),
            {0x4c,0x89,0xea,0x8b,0x4c,0x24,0x18,0x83,0xe9,0x14}},
        {0x1259c09,0x425170,reinterpret_cast<const void *>(&capture_native_site_name_draw),
            {0x48,0x8b,0x54,0x24,0x08}},
        {0x1259c63,0x425170,reinterpret_cast<const void *>(&capture_native_site_name_draw),
            {0x48,0x8b,0x54,0x24,0x08}},
        {0x12614ae,0x425170,reinterpret_cast<const void *>(&capture_native_site_name_draw),
            {0x48,0x8b,0x54,0x24,0x08}},
    };
    calls.insert(calls.end(),site_calls.begin(),site_calls.end());
    return true;
}
#endif
