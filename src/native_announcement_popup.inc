// Read the current announcement_handlerst popup and its actual markup words.
// World fields use the generated host layout; markup words share the native
// string and curses rich-text ABI.
static std::optional<NativeAnnouncementPopup> native_announcement_popup() {
    const uintptr_t base = native_history_profile_base();
    if (!base) return std::nullopt;
    NativeBorrowedVector<uintptr_t> queue;
    NativeHistoryRichBox box{};
    NativeAnnouncementPopup popup;
    const auto owner = native_history_global(0x24e3880);
    const auto markup = native_history_markup_box_from_words(native_history_global(0x24e3898));
    if (!native_history_read_vector(owner, queue) || !queue.size() ||
            !native_history_copy_string(native_history_vector_at(queue, 0), popup.source) ||
            popup.source.empty() || !native_history_markup_box(markup, box) ||
            !box.words.valid(16384) || !box.words.size() ||
            box.current_width <= 0 || box.current_width > 1000 ||
            box.max_y < 0 || box.max_y >= 1000) return std::nullopt;
    popup.width = box.current_width;
    popup.max_y = box.max_y;
    // e9f9c reads init.display.grid_y, independently of graphicst's grid.
    // This display field belongs to initst and uses its member mapping.
#ifdef _WIN32
    if (!native_ui_settings_read_member(native_ui_settings_source(), 0x18, popup.grid_height))
        return std::nullopt;
#else
    const auto *settings_source = native_ui_settings_source();
    if (!settings_source || !native_history_copy(reinterpret_cast<uintptr_t>(
            &settings_source->display.grid_y), popup.grid_height)) return std::nullopt;
#endif
    if (popup.grid_height <= 0 || popup.grid_height > 1000) return std::nullopt;
    int32_t portrait_id = -1;
    // Resolve world.status.mega_portrait_hfid independently: a changed
    // markup header extent must not shift this neighbouring member by guess.
    if (!native_history_copy(native_history_global(0x24e38d8), portrait_id))
        return std::nullopt;
    const auto settings = native_ui_settings();
    popup.portrait = settings && !settings->classic && portrait_id != -1;
    for (size_t at = 0; at < box.words.size(); ++at) {
        NativeHistoryMarkupWord fields;
        NativeHistoryToken word;
        if (!native_history_markup_word(native_history_markup_element(box.words, at), fields))
            return std::nullopt;
        word.identity = fields.text;
        word.source = std::move(fields.source);
        word.color = (int(fields.red) << 16) | (int(fields.green) << 8) | int(fields.blue);
        word.x = fields.x;
        word.y = fields.y;
        // d51c80 leaves markup controls at their constructor's negative
        // coordinates. The popup still calls addst for them, but their
        // empty text contributes no visible ink or source suppression span.
        if (word.source.empty()) continue;
        if (word.x < 0 || word.x > 262144 || word.y < 0 || word.y > box.max_y)
            return std::nullopt;
        popup.words.push_back(std::move(word));
    }
    return popup;
}
