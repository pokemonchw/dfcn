// PE Events and People cache every 58-column paragraph while unselected
// cards draw only three rows. Keep the actual cached row/string addresses,
// including complete paragraphs whose construction no longer repeats.
static bool native_journal_event_rows(uintptr_t owner,
        std::vector<std::string> &rows, std::vector<uintptr_t> &addresses) {
    NativeBorrowedVector<uintptr_t> native_rows;
    if (!native_history_read_vector(owner, native_rows) ||
            native_rows.size() == 0 || native_rows.size() > 4096) return false;
    addresses.resize(native_rows.size());
    if (!native_history_copy_bytes(reinterpret_cast<uintptr_t>(native_rows.begin),
            addresses.data(), addresses.size() * sizeof(uintptr_t))) return false;
    rows.reserve(addresses.size());
    size_t bytes = 0;
    for (const auto address : addresses) {
        std::string row;
        if (!address || !native_history_copy_string(address, row) ||
                row.find_first_of("\r\n") != std::string::npos ||
                row.find('\0') != std::string::npos || row.size() > 262144 - bytes)
            return false;
        bytes += row.size();
        rows.push_back(std::move(row));
    }
    NativeBorrowedVector<uintptr_t> current;
    return native_history_read_vector(owner, current) &&
        current.begin == native_rows.begin && current.end == native_rows.end;
}

static bool native_journal_event_interval_captured(uintptr_t owner, int width,
        const std::vector<std::string> &rows, const std::vector<uintptr_t> &addresses,
        size_t first, size_t last, std::string_view complete_source = {}) {
    std::lock_guard<std::mutex> lock(g_native_paragraph_mutex);
    const auto [begin, end] = g_native_paragraph_index.equal_range({owner, width, first});
    for (auto at = begin; at != end; ++at) {
        const auto &capture = *at->second;
        if (capture.wrapped_lines.size() == last - first &&
                capture.row_addresses.size() == last - first &&
                (complete_source.empty() || capture.source == complete_source) &&
                std::equal(capture.wrapped_lines.begin(), capture.wrapped_lines.end(),
                    rows.begin() + first) &&
                std::equal(capture.row_addresses.begin(), capture.row_addresses.end(),
                    addresses.begin() + first)) return true;
    }
    return false;
}

#ifdef _WIN32
using NativeJournalEventBuildFn = void (*)(void *);
static NativeJournalEventBuildFn g_native_journal_event_build = nullptr;
static NativeCallHook g_native_journal_event_calls;

static void retain_native_journal_card_paragraphs(uintptr_t owner) {
    std::vector<std::string> rows;
    std::vector<uintptr_t> addresses;
    if (!native_journal_event_rows(owner, rows, addresses)) return;
    for (size_t first = 0; first < rows.size();) {
        if (rows[first].empty()) { ++first; continue; }
        size_t last = first + 1;
        while (last < rows.size() && !rows[last].empty()) ++last;
        if (!native_journal_event_interval_captured(owner, 58, rows, addresses, first, last)) {
            std::string source;
            // 8e7440 keeps the break-space in its outgoing row and only
            // skips subsequent leading spaces. Concatenate those real bytes;
            // inserting spaces would corrupt a forced split inside a name.
            for (size_t line = first; line < last; ++line) source += rows[line];
            remember_native_paragraph(owner, 58, std::move(source),
                std::vector<std::string>(rows.begin() + first, rows.begin() + last), first,
                std::vector<uintptr_t>(addresses.begin() + first, addresses.begin() + last));
        }
        first = last;
    }
}

static void retain_native_journal_event(void *summary) {
    const uintptr_t object = reinterpret_cast<uintptr_t>(summary);
    if (!object || object > UINTPTR_MAX - 0xf0 || !g_overlay.translation_enabled()) return;
    int32_t mode = -1;
    if (!native_history_copy(object, mode) || (mode != 0 && mode != 1)) return;

    // +a0 is shortened to 50 bytes after wrapping. +68 remains the complete
    // native title, and +c0 retains ALL its wraps, even though DF draws two.
    std::vector<std::string> title_rows;
    std::vector<uintptr_t> title_addresses;
    std::string title;
    if (native_history_copy_string(object + 0x68, title)) {
        if (!native_journal_event_rows(object + 0xc0, title_rows, title_addresses) ||
                title_rows.size() < 2) {
            // c31d4 draws +a0 whenever the vector contains fewer than two
            // rows, including a single cached wrap with a different address.
            // Bind that real std::string address to the same complete title.
            title_rows.clear();
            title_addresses.clear();
            std::string displayed;
            if (native_history_copy_string(object + 0xa0, displayed) && !displayed.empty()) {
                title_rows = {std::move(displayed)};
                title_addresses = {object + 0xa0};
            }
        }
        if (!title_rows.empty() && !native_journal_event_interval_captured(object + 0xc0, 50,
                title_rows, title_addresses, 0, title_rows.size(), title))
            remember_native_paragraph(object + 0xc0, 50, std::move(title),
                std::move(title_rows), 0, std::move(title_addresses), true);
    }
    retain_native_journal_card_paragraphs(object + 0xd8);
}

// The current viewscreen owns these cached rows even when no constructor or
// draw call repeats. Resolve the actual game object before the overlay parses
// its grid; journal identity must not depend on a translated tab or border.
static bool refresh_native_journal_event_sources(const graphicst *graphics) {
    if (!graphics || graphics->dimy <= 0 || graphics->dimy > 1000) return false;
    const uintptr_t base = native_history_profile_base();
    const uintptr_t screen = native_current_viewscreen();
    uintptr_t vtable = 0;
    int16_t mode = -1;
    if (!base || !screen || screen > UINTPTR_MAX - 0x5a8 ||
            !native_history_copy(screen, vtable) ||
            vtable != native_reference_address(base, 0x15eb450) ||
            !native_history_copy(screen + 0x256, mode) || (mode != 0 && mode != 2)) return false;
    const bool event_view = mode == 0;
    NativeBorrowedVector<uintptr_t> cards;
    int32_t scroll = 0, selected = -1;
    if (!native_history_read_vector(screen + (event_view ? 0x578 : 0x590), cards) ||
            cards.size() > 65536 ||
            !native_history_copy(screen + (event_view ? 0x2ac : 0x2b4), scroll) ||
            !native_history_copy(screen + 0x250, selected)) return event_view;
    // c2f79..c3040 / c88ed select the same bounded Events / People slice.
    const size_t count = static_cast<size_t>(std::max(0, (graphics->dimy - 6) / 5));
    const size_t first = static_cast<size_t>(std::clamp<int64_t>(scroll, 0,
        cards.size() > count ? cards.size() - count : 0));
    const size_t last = std::min(cards.size(), first + count);
    const auto retain_card = [&](size_t index) {
        const uintptr_t card = native_history_vector_at(cards, index);
        if (!card) return;
        if (event_view) retain_native_journal_event(reinterpret_cast<void *>(card));
        // d1f4d returns as soon as People+68 contains cached rows. The
        // original blank separators delimit every complete native paragraph.
        else if (card <= UINTPTR_MAX - 0x80 && g_overlay.translation_enabled())
            retain_native_journal_card_paragraphs(card + 0x68);
    };
    for (size_t index = first; index < last; ++index) {
        retain_card(index);
    }
    if (selected >= 0 && static_cast<size_t>(selected) < cards.size() &&
            (static_cast<size_t>(selected) < first || static_cast<size_t>(selected) >= last)) {
        retain_card(static_cast<size_t>(selected));
    }
    return event_view;
}

static void capture_native_journal_event_build(void *summary) {
    NativeInputCallbackScope callback;
    callback.call_native([&] { g_native_journal_event_build(summary); });
    try { retain_native_journal_event(summary); } catch (...) {}
}

static bool native_journal_event_hooks_active() {
    return g_native_journal_event_calls.active();
}
static void uninstall_native_journal_event_hooks() {
    if (!native_callbacks_idle() ||
            !g_native_journal_event_calls.uninstall("Native journal event source")) return;
    g_native_journal_event_build = nullptr;
}
static bool install_native_journal_event_hooks() {
    if (g_native_journal_event_calls.installed) return true;
    if (native_journal_event_hooks_active()) {
        uninstall_native_journal_event_hooks();
        if (native_journal_event_hooks_active()) return false;
    }
    const uintptr_t base = native_history_profile_base();
    if (!base) return false;
    // Steam c3072 -> d4f50; Classic c3002 -> d4ee0. This call runs for
    // every displayed card, even when the constructor keeps its cached rows.
    std::vector<NativeCall> calls{{0xc3072, 0xd4f50,
        reinterpret_cast<const void *>(&capture_native_journal_event_build)}};
    if (!native_reference_calls(calls, 0)) return false;
    g_native_journal_event_build = reinterpret_cast<NativeJournalEventBuildFn>(
        native_reference_address(base, 0xd4f50));
    if (!g_native_journal_event_calls.install(base, calls, "Native journal event source")) {
        uninstall_native_journal_event_hooks();
        return false;
    }
    return true;
}
#else
// ELF submits every complete event paragraph through add_paragraph.
static bool refresh_native_journal_event_sources(const graphicst *) { return false; }
static bool native_journal_event_hooks_active() { return false; }
static void uninstall_native_journal_event_hooks() {}
static bool install_native_journal_event_hooks() { return g_real_native_paragraph != nullptr; }
#endif
