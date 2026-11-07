// Overview retains its complete first-person source and wrapped rows in the
// character sheet. Bind the actual addst row loop even when the cached width
// never changes and the native paragraph wrapper is not called again.
static void clear_native_overview_quote_draw() {
    std::lock_guard<std::mutex> lock(g_native_overview_quote_mutex);
    if (!g_native_overview_quote_draw) return;
    g_native_overview_quote_draw.reset();
    g_native_overview_quote_revision.fetch_add(1, std::memory_order_release);
}

struct NativeOverviewQuoteHook {
    NativeCallHook code;
    NativeCaptionDrawFn draw = nullptr;
    uintptr_t base = 0;
};
static NativeOverviewQuoteHook g_native_overview_quote_hook;

static void capture_native_overview_quote_row(graphicst *graphics,
        const NativeString *source, const void *sheet, const void *caller_frame) {
#ifdef _WIN32
    sheet = reinterpret_cast<const void *>(g_native_character_drawing_sheet);
#endif
    graphics = native_graphics_view(graphics);
    NativeInputCallbackScope callback;
    const auto original = g_native_overview_quote_hook.draw;
    std::optional<NativeOverviewQuoteDraw> pending;
    try {
        const auto capture = [&] {
            const uintptr_t object = reinterpret_cast<uintptr_t>(sheet);
            const uintptr_t frame = reinterpret_cast<uintptr_t>(caller_frame);
            if (!object || !frame || !graphics || !graphics->screen ||
                    !g_overlay.translation_enabled() || graphics->dimx <= 0 ||
                    graphics->dimx > 1000 || graphics->dimy <= 0 || graphics->dimy > 1000)
                return;
            int32_t object_type = -1, page = -1;
            const native_history_abi::FieldOffset active_sheet{8, "view_sheets_interfacest", "active_sheet"};
            const native_history_abi::FieldOffset active_tab{0xc0, "view_sheets_interfacest", "active_sub_tab"};
            if (!native_history_copy(active_sheet.address(object, 0, 4, 4), object_type) || object_type != 0 ||
                    !native_history_copy(active_tab.address(object, 0, 4, 4), page) || page != 0) return;

            int32_t left = 0, right = 0, summary_top = 0, pane_bottom = 0;
            int32_t writer_x = 0, next_y = 0, bottom = 0, width = 0, cached_width = 0;
            uintptr_t live_sheet = 0;
#ifdef _WIN32
            const native_history_abi::FieldOffset thought_width{0x1cf8, "view_sheets_interfacest", "current_thought_width"};
            if (!native_history_copy(native_pe_frame_relative(frame, 0x168e8e, 0x168cb0, 4, "view_sheets_interfacest"), left) ||
                    !native_history_copy(native_pe_frame_relative(frame, 0x168e8e, 0x168cb7, 4, "view_sheets_interfacest"), right) ||
                    !native_history_copy(native_pe_frame_relative(frame, 0x168e8e, 0x1689fe, 4, "view_sheets_interfacest"), summary_top) ||
                    !native_history_copy(native_pe_frame_relative(frame, 0x168e8e, 0x168a45, 4, "view_sheets_interfacest"), pane_bottom) ||
                    !native_history_copy(native_pe_frame_relative(frame, 0x168e8e, 0x168e43, 4, "view_sheets_interfacest"), writer_x) ||
                    !native_history_copy(native_pe_frame_relative(frame, 0x168e8e, 0x168e67, 4, "view_sheets_interfacest"), next_y) ||
                    !native_history_copy(native_pe_frame_relative(frame, 0x168e8e, 0x168e31, 4, "view_sheets_interfacest"), bottom) ||
                    !native_history_copy(native_pe_frame_relative(frame, 0x168e8e, 0x168cc5, 4, "view_sheets_interfacest"), width) ||
                    !native_history_copy(thought_width.address(object, 0, 4, 4), cached_width)) return;
            // 168a45 sets B-1; adventure's bottom button subtracts three
            // more rows at 168a62. The live caller slot is the actual limit.
            if (left < 0 || right <= left + 7 || right >= graphics->dimx ||
                    summary_top < 0 || summary_top > graphics->dimy - 29 ||
                    pane_bottom <= summary_top + 28 || pane_bottom >= graphics->dimy ||
                    (bottom != pane_bottom - 1 && bottom != pane_bottom - 4) ||
                    writer_x != left + 1 || graphics->screenx != writer_x ||
                    next_y != graphics->screeny + 1 || width != right - left - 7 ||
                    cached_width != width) return;
            const int top = summary_top + 28;
#else
            int32_t top = 0;
            if (frame < 0x300 ||
                    !native_history_copy(frame - 0x278, left) ||
                    !native_history_copy(frame - 0x280, right) ||
                    !native_history_copy(frame - 0x300, top) ||
                    !native_history_copy(frame - 0x2b0, pane_bottom) ||
                    !native_history_copy(frame - 0x2b8, writer_x) ||
                    !native_history_copy(frame - 0x268, bottom) ||
                    !native_history_copy(frame - 0x288, live_sheet) || live_sheet != object ||
                    !native_history_copy(native_history_object_member(object,
                        "view_sheets_interfacest", "current_thought_width"), cached_width)) return;
            width = right - left - 7;
            if (left < 0 || right <= left + 7 || right >= graphics->dimx ||
                    top < 0 || top >= graphics->dimy || pane_bottom <= top ||
                    pane_bottom >= graphics->dimy ||
                    (bottom != pane_bottom - 1 && bottom != pane_bottom - 4) ||
                    writer_x != left + 1 || graphics->screenx != writer_x ||
                    cached_width != width) return;
#endif
            // Preserve the original row-zero coordinate. A clipped prefix
            // cannot shift every wrapped row while retaining their indices.
            if (graphics->clipx[0] > writer_x || graphics->clipy[0] > top) return;
            right = static_cast<int>(std::min<int64_t>(right,
                std::min<int64_t>(graphics->dimx, int64_t(graphics->clipx[1]) + 1)));
            // Quote stops at y < limit; reading boxes below it are accepted
            // through last_y <= limit. Keep their distinct exclusive edges.
            const int thoughts_bottom = static_cast<int>(std::min<int64_t>(int64_t(bottom) + 1,
                std::min<int64_t>(graphics->dimy, int64_t(graphics->clipy[1]) + 1)));
            bottom = static_cast<int>(std::min<int64_t>(bottom,
                std::min<int64_t>(graphics->dimy, int64_t(graphics->clipy[1]) + 1)));
            if (right <= writer_x || bottom <= top || graphics->screeny < top ||
                    graphics->screeny >= bottom) return;

            NativeBorrowedVector<uintptr_t> rows;
#ifdef _WIN32
            const native_history_abi::FieldOffset thought_rows{0x1ce0, "view_sheets_interfacest", "current_thought.text"};
#endif
            if (!native_history_read_vector(
#ifdef _WIN32
                    thought_rows.address(object, 0, 24, 24),
#else
                    native_history_object_member(object, "view_sheets_interfacest", "current_thought.text"),
#endif
                    rows) ||
                    rows.size() == 0 || rows.size() > 4096) return;
            const size_t visible_rows = std::min(rows.size(),
                static_cast<size_t>(bottom - top));
            // Only the final visible row publishes the complete quote. All
            // earlier addst callbacks still draw normally, without copying
            // the entire source vector merely to discard it afterward.
            if (!visible_rows || int64_t(top) + int64_t(visible_rows) - 1 !=
                    graphics->screeny) return;
            NativeOverviewQuoteDraw captured;
            captured.owner = object;
            captured.grid = graphics->screen;
            captured.dimx = graphics->dimx;
            captured.dimy = graphics->dimy;
            captured.left = writer_x;
            captured.right = right;
            captured.top = top;
            captured.bottom = bottom;
            captured.thoughts_bottom = thoughts_bottom;
#ifdef _WIN32
            const native_history_abi::FieldOffset raw_thought{0x1cc0, "view_sheets_interfacest", "raw_current_thought"};
#endif
            if (!native_history_copy_string(
#ifdef _WIN32
                    raw_thought.address(object, 0, sizeof(NativeString), sizeof(NativeString)),
#else
                    native_history_object_member(object, "view_sheets_interfacest", "raw_current_thought"),
#endif
                    captured.source) ||
                    captured.source.empty()) return;
            captured.wrapped_lines.reserve(rows.size());
            size_t current = SIZE_MAX;
            for (size_t index = 0; index < rows.size(); ++index) {
                const uintptr_t row = native_history_vector_at(rows, index);
                if (!row) return;
                if (row == reinterpret_cast<uintptr_t>(source)) {
                    if (current != SIZE_MAX) return;
                    current = index;
                }
                std::string line;
                if (!native_history_copy_string(row, line) ||
                        line.find_first_of("\r\n") != std::string::npos) return;
                captured.wrapped_lines.push_back(std::move(line));
            }
            if (current == SIZE_MAX || int64_t(top) + int64_t(current) != graphics->screeny)
                return;
            if (current != visible_rows - 1) return;
            pending = std::move(captured);
        };
        capture();
    } catch (...) {
        // Capture owns copies only; a missing record cannot interrupt DF.
    }
    // Keep the actual addst entry and its existing caption capture. This
    // caller originally supplies zero for both justification and width.
    if (original) {
        callback.call_native([&] { native_graphics_call(original, graphics, source, static_cast<NativeJustification>(0), 0); });
        // The source vector was complete before this call, but screen cells
        // were not. Publish only after the final visible row's actual write.
        try {
            if (pending) {
                prepare_native_overview_thoughts_cache(sheet);
                std::lock_guard<std::mutex> lock(g_native_overview_quote_mutex);
                const auto &previous = g_native_overview_quote_draw;
                const bool changed = !previous || previous->owner != pending->owner ||
                    previous->dimx != pending->dimx ||
                    previous->dimy != pending->dimy || previous->left != pending->left ||
                    previous->right != pending->right || previous->top != pending->top ||
                    previous->bottom != pending->bottom ||
                    previous->thoughts_bottom != pending->thoughts_bottom ||
                    previous->source != pending->source ||
                    previous->wrapped_lines != pending->wrapped_lines;
                // Keep the latest writer address as draw metadata, but a
                // normal native buffer rotation is not a new source owner.
                g_native_overview_quote_draw = std::move(pending);
                if (changed) {
                    g_native_overview_quote_revision.fetch_add(1, std::memory_order_release);
                }
            }
        } catch (...) { /* The native row already completed. */ }
    }
}

static bool native_overview_quote_hooks_active() {
    return g_native_overview_quote_hook.code.active();
}

static bool uninstall_native_overview_quote_hooks() {
    if (!native_callbacks_idle()) return false;
    auto &hook = g_native_overview_quote_hook;
    if (!hook.code.uninstall("Native overview quote capture restore")) return false;
    hook.draw = nullptr;
    hook.base = 0;
    clear_native_overview_quote_draw();
    return true;
}

#ifdef _WIN32
static bool install_native_overview_quote_hooks() {
    auto &hook = g_native_overview_quote_hook;
    if (hook.code.installed) return true;
    if (native_overview_quote_hooks_active() && !uninstall_native_overview_quote_hooks())
        return false;
    const uintptr_t base = native_history_profile_base();
    if (!base) return false;
    // Named sheet fields and individually evidenced native frame operands
    // replace the old fixed prologue/member/stack-layout signatures.
    struct InstallGuard {
        bool committed = false;
        ~InstallGuard() { if (!committed) uninstall_native_overview_quote_hooks(); }
    } guard;
    clear_native_overview_quote_draw();
    hook.base = base;
    hook.draw = reinterpret_cast<NativeCaptionDrawFn>(native_pe_address(base, 0xad9960));
    // The real draw entry owns the sheet. Only the actual caller RSP is
    // relayed; no historical local is used to manufacture an object pointer.
    std::vector<NativeCall> calls{{0x168e8e, 0xad9960,
        reinterpret_cast<const void *>(&capture_native_overview_quote_row),
        {0x4c,0x8d,0x4c,0x24,0x08}}};
    if (!native_reference_calls(calls, 0) ||
            !hook.code.install(base, calls, "Native overview quote capture")) return false;
    guard.committed = true;
    return true;
}
#else
#include "native_overview_quote_search_profile_elf.inc"
#endif
