#ifdef _WIN32
// The four native geography writers retain the actual world_mountain_peak
// through their final addst call. The relay passes that object in the unused
// justification argument; neither the English spelling nor MountainPeak's
// shared language_name type establishes that the object is a volcano.
static void capture_native_volcano_name_draw(graphicst *graphics,
        const NativeString *source, uintptr_t peak, int width) {
    const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    NativeInputCallbackScope callback;
    NativeVolcanoNameFact fact;
    bool owned = false;
    try {
        const uintptr_t base = native_history_profile_base();
        std::string_view full;
        uintptr_t flag_bytes = 0;
        int32_t flag_count = 0;
        uint8_t flags = 0;
        // peak.flags is a flagarrayst: pointer at +0x80, byte count at +0x88.
        // Its first allocated byte carries mountain_peak_flags::is_volcano.
        if (base && peak && peak <= UINTPTR_MAX - 0x88 &&
                native_history_copy(peak + 0x80, flag_bytes) && flag_bytes &&
                native_history_copy(peak + 0x88, flag_count) && flag_count > 0 &&
                native_history_copy(flag_bytes, flags) && (flags & 1) &&
                native_string_view(source, &full, 4096) && full.starts_with("Volcano: ") &&
                capture_native_history_name(base, peak, fact.name, nullptr, true) &&
                fact.name.has_name) {
            fact.complete_source = std::string(full);
            owned = true;
        }
    } catch (...) {}
    // The row owns its copied WORD/POS slots and full source before the
    // producer releases its temporary string or reuses the peak register.
    NativeVolcanoNameFactScope scope(owned ? &fact : nullptr);
    capture_native_limited_caption_draw(graphics, source, NativeJustification{}, width, [&] {
        if (const auto original = g_native_clipped_caption_hooks.draw)
            callback.call_native([&] { original(graphics, source, NativeJustification{}, width); });
    }, false, NativeInfoTitleKind::None, false, {}, false,
        NativeCivilizationField::None, false, {},
        NativeLocationPickerField::None, NativeTravelBuildingField::None, caller);
}

static bool append_native_volcano_name_calls(std::vector<NativeCall> &calls) {
    // World generation, embark, detailed adventure and coarse adventure.
    // Every original caller supplies just=0, while R9 retains its own width.
    // Reference coordinates use the ordinary edition-aware PE binding path.
    std::vector<NativeCall> volcano_calls{
        {0xdfe6d6, 0xad9960, reinterpret_cast<const void *>(&capture_native_volcano_name_draw),
            {0x4d, 0x89, 0xf8}}, // mov r8,r15
        {0x80fcd3, 0xad9960, reinterpret_cast<const void *>(&capture_native_volcano_name_draw),
            {0x49, 0x89, 0xd8}}, // mov r8,rbx
        {0x104a1a2, 0xad9960, reinterpret_cast<const void *>(&capture_native_volcano_name_draw),
            {0x4d, 0x89, 0xe0}}, // mov r8,r12
        {0x104de6b, 0xad9960, reinterpret_cast<const void *>(&capture_native_volcano_name_draw),
            {0x49, 0x89, 0xd8}}, // mov r8,rbx
    };
    if (!native_reference_calls(volcano_calls, 0)) return false;
    calls.insert(calls.end(), volcano_calls.begin(), volcano_calls.end());
    return true;
}
#endif
