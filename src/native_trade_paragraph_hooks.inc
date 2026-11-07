// The artifact trade reply constructor has an inline 68-column wrapper,
// outside curses_text_boxst::add_paragraph. Observe each producer's local copy
// and cleanup calls: retain the pristine sentence and the actual appended rows.
#ifdef _WIN32
using NativeTradeReplyCopyFn = uintptr_t (*)(NativeString *, const char *, size_t);
using NativeTradeReplyRowsReleaseFn = uintptr_t (*)(void *);
static NativeTradeReplyCopyFn g_native_trade_reply_copy = nullptr;
static NativeTradeReplyRowsReleaseFn g_native_trade_reply_rows_release = nullptr;
static NativeCallHook g_native_trade_reply_calls;

struct NativeTradeReplyPending {
    uintptr_t owner = 0;
    size_t first_line = 0;
    std::string source;
};
struct NativeTradeReplyPendingTag {};
static NativeTradeReplyPending &native_trade_reply_pending() {
    return reloadable_thread_state<NativeTradeReplyPending, NativeTradeReplyPendingTag>();
}

static bool native_trade_reply_rows(uintptr_t owner,
        NativeBorrowedVector<NativeString *> &rows) {
    return native_history_copy(owner, rows) && rows.valid(16384);
}

// big_announce survives its producer, so a page that was already open can
// redraw without invoking add_paragraph again. Read the whole retained vector
// at the first actual reply draw, including rows outside the scroll viewport.
static void capture_native_adventure_barter_retained_reply(
        uintptr_t screen, const NativeString *draw_source) {
    if (!screen || screen > UINTPTR_MAX - 0x35c) return;
    const uintptr_t owner = screen + 0x340;
    NativeBorrowedVector<NativeString *> native_rows;
    int32_t scroll = -1;
    if (!native_trade_reply_rows(owner, native_rows) || native_rows.size() == 0 ||
            !native_history_copy(screen + 0x358, scroll) || scroll < 0 ||
            static_cast<size_t>(scroll) >= native_rows.size()) return;
    NativeString *first_draw_source = nullptr;
    if (!native_history_copy(reinterpret_cast<uintptr_t>(native_rows.begin) +
            static_cast<size_t>(scroll) * sizeof(NativeString *), first_draw_source) ||
            first_draw_source != draw_source) return;
    std::vector<NativeString *> pointers(native_rows.size());
    if (!native_history_copy_bytes(reinterpret_cast<uintptr_t>(native_rows.begin),
            pointers.data(), pointers.size() * sizeof(NativeString *)) ||
            pointers[static_cast<size_t>(scroll)] != draw_source) return;
    std::vector<std::string> rows;
    rows.reserve(pointers.size());
    size_t bytes = 0;
    for (const auto *pointer : pointers) {
        std::string row;
        if (!native_history_copy_string(reinterpret_cast<uintptr_t>(pointer), row) ||
                row.size() > 4096 || row.find_first_of("\r\n") != std::string::npos ||
                row.find('\0') != std::string::npos || row.size() > 262144 - bytes) return;
        bytes += row.size();
        rows.push_back(std::move(row));
    }
    NativeBorrowedVector<NativeString *> current_rows;
    if (!native_trade_reply_rows(owner, current_rows) ||
            current_rows.begin != native_rows.begin || current_rows.end != native_rows.end)
        return;
    std::vector<NativeParagraphCapture> retained;
    std::vector<bool> boundaries(rows.size() + 1, false);
    boundaries.front() = boundaries.back() = true;
    {
        std::lock_guard<std::mutex> lock(g_native_paragraph_mutex);
        auto at = g_native_paragraph_index.lower_bound({owner, 0, 0});
        for (; at != g_native_paragraph_index.end() && std::get<0>(at->first) == owner; ++at) {
            const auto &paragraph = *at->second;
            const size_t first = paragraph.first_line;
            const size_t count = paragraph.wrapped_lines.size();
            if (paragraph.paragraph_width != 68 || !count || first > rows.size() ||
                    count > rows.size() - first || paragraph.row_addresses.size() != count)
                continue;
            bool current = true;
            for (size_t line = 0; line < count; ++line)
                if (paragraph.row_addresses[line] !=
                        reinterpret_cast<uintptr_t>(pointers[first + line]) ||
                        paragraph.wrapped_lines[line] != rows[first + line]) {
                    current = false;
                    break;
                }
            if (!current) continue;
            boundaries[first] = boundaries[first + count] = true;
            retained.push_back(paragraph);
        }
    }
    bool rebuilt_owner = false;
    for (size_t first = 0; first < rows.size();) {
        if (rows[first].empty()) { ++first; continue; }
        size_t last = first + 1;
        while (last < rows.size() && !boundaries[last] && !rows[last].empty()) ++last;
        // Native Show/return calls can append consecutive complete wraps
        // without a blank separator. Existing exact row intervals retain
        // those producer boundaries and their pristine pre-wrap sources.
        const bool captured = std::any_of(retained.begin(), retained.end(), [&](const auto &paragraph) {
            return paragraph.first_line <= first &&
                paragraph.first_line + paragraph.wrapped_lines.size() >= last;
        });
        if (captured) { first = last; continue; }
        std::vector<std::string> paragraph_rows(rows.begin() + first, rows.begin() + last);
        std::vector<uintptr_t> addresses;
        addresses.reserve(last - first);
        for (size_t line = first; line < last; ++line)
            addresses.push_back(reinterpret_cast<uintptr_t>(pointers[line]));
        std::string source;
        // 8e7310 delegates to 8e7440. At 8e7578..7599 the ordinary
        // wrap keeps its break-space in the outgoing row; 8e74c6..74dc
        // skips only following leading spaces. A forced word fragment
        // has no delimiter. Append original bytes, never trim-and-space.
        for (const auto &row : paragraph_rows) source.append(row);
        const bool replaces_owner = first == 0 && is_native_prose_source(source);
        remember_native_paragraph(owner, 68, std::move(source),
            std::move(paragraph_rows), first, std::move(addresses));
        rebuilt_owner = rebuilt_owner || replaces_owner;
        first = last;
    }
    // A missing first interval causes the shared registry to rebuild this
    // owner. Restore every still-current later producer capture verbatim;
    // its authored spacing must not be replaced by reconstructed wrap bytes.
    if (rebuilt_owner)
        for (auto &paragraph : retained)
            remember_native_paragraph(owner, paragraph.paragraph_width,
                std::move(paragraph.source), std::move(paragraph.wrapped_lines),
                paragraph.first_line, std::move(paragraph.row_addresses));
}

static void capture_native_adventure_barter_reply_draw(graphicst *graphics,
        const NativeString *source, void *screen, int width) {
    graphics = native_graphics_view(graphics);
    NativeInputCallbackScope callback;
    const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    try {
        capture_native_adventure_barter_retained_reply(
            reinterpret_cast<uintptr_t>(screen), source);
    } catch (...) {}
    // Both PE addst bodies (ad9960/ad69a0) consume RCX/RDX/R9D only.
    // R8 is unused on entry, then overwritten before addchar. The relay can
    // carry R13 here without changing any native argument or stack slot.
    // Use the existing addst trampoline and explicitly retain its real call
    // identity; calling the hooked entry here would bind our return address.
    capture_native_limited_caption_draw(graphics, source, NativeJustification{}, width, [&] {
        if (const auto original = g_native_clipped_caption_hooks.draw)
            callback.call_native([&] { native_graphics_call(original, graphics, source, NativeJustification{}, width); });
    }, false, NativeInfoTitleKind::None, false, {}, false,
        NativeCivilizationField::None, false, {}, NativeLocationPickerField::None,
        NativeTravelBuildingField::None, caller);
}

template<size_t OwnerOffset>
static uintptr_t capture_native_trade_reply_copy(NativeString *destination,
        const char *source, size_t size, void *screen) {
    NativeInputCallbackScope callback;
    try {
        auto &pending = native_trade_reply_pending();
        pending = {};
        const uintptr_t address = reinterpret_cast<uintptr_t>(screen);
        if (address && address <= UINTPTR_MAX - OwnerOffset && size && size <= 262144) {
            const uintptr_t owner = address + OwnerOffset;
            NativeBorrowedVector<NativeString *> rows;
            std::string text(size, '\0');
            if (native_trade_reply_rows(owner, rows) && native_history_copy_bytes(
                    reinterpret_cast<uintptr_t>(source), text.data(), size) &&
                    is_native_prose_source(text))
                pending = {owner, rows.size(), std::move(text)};
        }
    } catch (...) {}
    return callback.call_native([&] {
        return g_native_trade_reply_copy(destination, source, size);
    });
}

template<size_t OwnerOffset>
static uintptr_t capture_native_trade_reply_rows_release(void *temporary_rows, void *screen) {
    NativeInputCallbackScope callback;
    const uintptr_t result = callback.call_native([&] {
        return g_native_trade_reply_rows_release(temporary_rows);
    });
    try {
        auto pending = std::move(native_trade_reply_pending());
        native_trade_reply_pending() = {};
        const uintptr_t address = reinterpret_cast<uintptr_t>(screen);
        if (!address || address > UINTPTR_MAX - OwnerOffset ||
                pending.owner != address + OwnerOffset || pending.source.empty()) return result;
        NativeBorrowedVector<NativeString *> native_rows;
        if (!native_trade_reply_rows(pending.owner, native_rows) ||
                native_rows.size() <= pending.first_line) return result;
        const size_t count = native_rows.size() - pending.first_line;
        std::vector<NativeString *> pointers(count);
        if (!native_history_copy_bytes(reinterpret_cast<uintptr_t>(native_rows.begin) +
                pending.first_line * sizeof(NativeString *), pointers.data(),
                count * sizeof(NativeString *))) return result;
        std::vector<std::string> rows;
        std::vector<uintptr_t> addresses;
        rows.reserve(count);
        addresses.reserve(count);
        for (const auto *pointer : pointers) {
            std::string row;
            if (!native_history_copy_string(reinterpret_cast<uintptr_t>(pointer), row) ||
                    trim_view(row).empty()) return result;
            rows.push_back(std::move(row));
            addresses.push_back(reinterpret_cast<uintptr_t>(pointer));
        }
        // The constructor appends its separator BEFORE the source-copy call.
        // Each artifact therefore retains a separate complete source and row
        // interval, even when the screen's scroll vector contains many replies.
        remember_native_paragraph(pending.owner, 68, std::move(pending.source),
            std::move(rows), pending.first_line, std::move(addresses));
    } catch (...) {}
    return result;
}

static bool native_trade_paragraph_hooks_active() {
    return g_native_trade_reply_calls.active();
}
static void uninstall_native_trade_paragraph_hooks() {
    if (!native_callbacks_idle() ||
            !g_native_trade_reply_calls.uninstall("Native trade reply source")) return;
    g_native_trade_reply_copy = nullptr;
    g_native_trade_reply_rows_release = nullptr;
}
static bool install_native_trade_paragraph_hooks() {
    if (g_native_trade_reply_calls.installed) return true;
    if (native_trade_paragraph_hooks_active()) {
        uninstall_native_trade_paragraph_hooks();
        if (native_trade_paragraph_hooks_active()) return false;
    }
    const uintptr_t base = native_history_profile_base();
    if (!base) return false;
    g_native_trade_reply_copy = reinterpret_cast<NativeTradeReplyCopyFn>(
        native_pe_address(base, 0x6f8d0));
    g_native_trade_reply_rows_release = reinterpret_cast<NativeTradeReplyRowsReleaseFn>(
        native_pe_address(base, 0x66b70));
    struct InstallGuard {
        bool committed = false;
        ~InstallGuard() { if (!committed) uninstall_native_trade_paragraph_hooks(); }
    } guard;
    // Reference helper 36a9c0..36b0a8, classic 368580..368c68:
    // 36ad21 copies the untouched [rbp-1] message; R12 still owns the screen.
    // 36af9a restores R12 before 36b007 releases the wrapper's temporary vector.
    // Pass that preserved register as an extra callback argument; the original
    // functions retain all their own arguments and exact native return values.
    std::vector<NativeCall> calls{
        // The retained reply loop owns the real barter object in R13.
        // R9D remains its original width (zero), and no fifth argument is
        // written into the caller's live stack locals.
        {0x27009b, 0xad9960, reinterpret_cast<const void *>(&capture_native_adventure_barter_reply_draw),
            {0x4d, 0x89, 0xe8}}, // mov r8,r13
        {0x36ad21, 0x6f8d0, reinterpret_cast<const void *>(&capture_native_trade_reply_copy<0x3c0>),
            {0x4d, 0x89, 0xe1}}, // mov r9,r12
        {0x36b007, 0x66b70, reinterpret_cast<const void *>(&capture_native_trade_reply_rows_release<0x3c0>),
            {0x4c, 0x89, 0xe2}}, // mov rdx,r12
        // Adventure personal/family/entity returns retain their complete
        // reaction plus acknowledgements before the inline 68-column split.
        // R14 owns big_announce (+0x340) at both calls, after RDI is reused.
        {0x278241, 0x6f8d0, reinterpret_cast<const void *>(&capture_native_trade_reply_copy<0>),
            {0x4d, 0x89, 0xf1}}, // mov r9,r14: actual row vector
        {0x278528, 0x66b70, reinterpret_cast<const void *>(&capture_native_trade_reply_rows_release<0>),
            {0x4c, 0x89, 0xf2}}, // mov rdx,r14
        // Copied written works use a second pristine source and the same
        // native row ABI. Its vector is preserved in R13 through cleanup.
        {0x2790be, 0x6f8d0, reinterpret_cast<const void *>(&capture_native_trade_reply_copy<0>),
            {0x4d, 0x89, 0xe9}}, // mov r9,r13
        {0x2792a4, 0x66b70, reinterpret_cast<const void *>(&capture_native_trade_reply_rows_release<0>),
            {0x4c, 0x89, 0xea}}, // mov rdx,r13
    };
    if (!native_reference_calls(calls, 0) ||
            !g_native_trade_reply_calls.install(base, calls, "Native trade reply source")) return false;
    guard.committed = true;
    return true;
}
#else
static bool native_trade_paragraph_hooks_active() { return false; }
static void uninstall_native_trade_paragraph_hooks() {}
static bool install_native_trade_paragraph_hooks() {
    // ELF artifact/ordinary reply producer d7d0d0 submits its pristine
    // sentence at d7d2ce through add_paragraph (423910), width 68, to
    // trade_interfacest.big_announce (+3f0). The shared paragraph hook binds
    // its complete source and real row interval on this native path.
    return g_real_native_paragraph != nullptr;
}
#endif
