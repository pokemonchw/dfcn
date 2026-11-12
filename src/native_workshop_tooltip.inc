// The building-sheet chooser owns a fixed 31-column preview, including
// categories, ordinary jobs and RAW reactions, before its first grid store.
static void begin_native_workshop_tooltip(const void *paragraph, size_t count,
        int32_t right, int32_t top, int32_t available_left) {
    try {
        auto &state = native_legacy_tooltip_state();
        if (state.frame && state.frame->isolated) native_tooltip_end_draw(*state.frame);
        state.frame.reset();
        state.remaining_body_rows = 0;
        state.has_keys = false;
        auto *gps = native_graphics();
        if (!paragraph || !gps || !gps->screen || !count || count > 1000 ||
                int64_t(right) - available_left + 1 < 31 ||
                right < std::numeric_limits<int>::min() + 30) return;
        NativeTooltipWidgetFrame frame;
        frame.bounds = {right - 30, top, 31, static_cast<int>(count) + 2};
        if (!native_tooltip_valid_bounds(*gps, frame.bounds)) return;
        frame.dimx = gps->dimx;
        frame.dimy = gps->dimy;
        frame.epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
        frame.rows.assign(static_cast<size_t>(frame.bounds.h), std::string(31, ' '));
        frame.body_source = native_legacy_tooltip_body_source(paragraph, count);
        if (frame.body_source.empty()) return;
        frame.workshop_recipe = true;
        // Snapshot field boundaries before begin_draw swaps out the parent
        // component's paragraph captures. Cached native previews do not run
        // their source formatter again on every frame.
        frame.workshop_fields = captured_native_workshop_requirements();
        const uintptr_t owner = reinterpret_cast<uintptr_t>(paragraph);
        {
            std::lock_guard<std::mutex> lock(g_native_paragraph_mutex);
            auto entry = g_native_paragraph_index.lower_bound({owner, 0, 0});
            for (; entry != g_native_paragraph_index.end() &&
                    std::get<0>(entry->first) == owner; ++entry)
                frame.workshop_fields.push_back(*entry->second);
        }
        std::erase_if(frame.workshop_fields, [&](const NativeParagraphCapture &field) {
            if (field.owner != owner ||
                    field.paragraph_width != 29 || field.wrapped_lines.empty() ||
                    field.first_line >= count ||
                    field.wrapped_lines.size() > count - field.first_line) return true;
            for (size_t line = 0; line < field.wrapped_lines.size(); ++line) {
                std::string_view source;
                if (!native_string_view(native_paragraph_row(paragraph,
                        field.first_line + line), &source, 65536) ||
                        source != field.wrapped_lines[line]) return true;
            }
            return false;
        });
        state.epoch = frame.epoch;
        state.remaining_body_rows = count;
        if (native_tooltip_begin_draw(frame)) state.frame = std::move(frame);
    } catch (...) {}
}

#ifdef _WIN32
static size_t capture_native_workshop_tooltip_rows(const void *paragraph,
        uintptr_t native_stack) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeAnnouncementRowsFn>(
        native_pe_address(g_native_legacy_tooltip_base, 0x6ee50));
    const size_t count = callback.call_native([&] { return original(paragraph); });
    int32_t right = 0, top = 0, available_left = 0;
    if (native_stack <= UINTPTR_MAX - 0x1108 &&
            native_history_copy(native_stack + 0x1100, right) &&
            native_history_copy(native_stack + 0x1104, top) &&
            native_history_copy(native_stack + 0xdf0, available_left))
        begin_native_workshop_tooltip(paragraph, count, right, top, available_left);
    return count;
}
#else
static void observe_native_workshop_tooltip_begin(const NativeInlineRegisters *registers) noexcept {
    NativeInputCallbackScope callback;
    try {
        int32_t sheet_left = 0, top = 0, viewport_left = 0;
        if (!registers || registers->rbp < 0x328 ||
                !native_history_copy(registers->rbp - 0x278, sheet_left) ||
                !native_history_copy(registers->rbp - 0x298, top) ||
                !native_history_copy(registers->rbp - 0x328, viewport_left) ||
                sheet_left < 32 || sheet_left > 1000 || viewport_left < 0 || viewport_left > 1000)
            return;
        const auto paragraph = reinterpret_cast<const void *>(native_elf_5317_address(0x272b0e0));
        begin_native_workshop_tooltip(paragraph, native_paragraph_row_count(paragraph),
            sheet_left - 2, top, viewport_left + 4);
    } catch (...) {}
}
static void observe_native_workshop_tooltip_end(const NativeInlineRegisters *) noexcept {
    NativeInputCallbackScope callback;
    try {
        auto &state = native_legacy_tooltip_state();
        if (!state.frame || !state.frame->workshop_recipe) return;
        if (state.frame->isolated) native_tooltip_end_draw(*state.frame);
        state.frame.reset();
        state.remaining_body_rows = 0;
    } catch (...) {}
}
#endif
