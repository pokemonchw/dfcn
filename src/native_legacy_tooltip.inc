// DF 53.16 native toolbars: redirect before their inline background clear,
// then collect only the paragraph/key calls belonging to this native card.
// A partial border or an item picture over the card is not its identity.
struct NativeLegacyTooltipHooks : NativeCallHook {
#ifndef _WIN32
    NativeInlineObserverHook workshop_begin, workshop_end;
    bool active() const {
        return NativeCallHook::active() || workshop_begin.active() || workshop_end.active();
    }
    bool uninstall(const char *label) {
        const bool end = workshop_end.uninstall(label);
        const bool begin = workshop_begin.uninstall(label);
        return NativeCallHook::uninstall(label) && begin && end;
    }
#endif
};
static NativeLegacyTooltipHooks g_native_legacy_tooltip_hook;
static uintptr_t g_native_legacy_tooltip_base = 0;
struct NativeLegacyTooltipState {
    std::optional<NativeTooltipWidgetFrame> frame;
    uint64_t epoch = 0;
    size_t remaining_body_rows = 0;
    bool has_keys = false;
};
static NativeLegacyTooltipState &native_legacy_tooltip_state() {
    // Owning TLS registers thread-exit destructors even when shutdown merely
    // resets an empty capture. Those callbacks retain the DLL on Windows and
    // prevent the resident loader from acquiring the core again.
    return reloadable_thread_state<NativeLegacyTooltipState, struct LegacyTooltipTag>();
}

static std::string native_legacy_tooltip_body_source(const void *paragraph, size_t count) {
    constexpr size_t maximum = 262144;
    if (!paragraph || count > 1000 || native_paragraph_row_count(paragraph) != count)
        return {};
    // The selected paragraph remains complete even when native addst skips
    // clipped rows. Preserve its exact row contents and blank-row boundaries.
    std::string source;
    for (size_t index = 0; index < count; ++index) {
        std::string_view row;
        if (!native_string_view(native_paragraph_row(paragraph, index), &row, maximum))
            return {};
        const size_t separator = index ? 1 : 0;
        if (source.size() + separator > maximum ||
                row.size() > maximum - source.size() - separator) return {};
        if (index) source.push_back('\n');
        source.append(row);
    }
    return source;
}

#ifdef _WIN32
// Fortress's compact toolbar skips the floating card's row-count call.
// Its selected paragraph is already resolved here, before clearing the
// fixed [right-24,right] x [0,17] panel. Body rows start at y=0 and keys
// follow the complete row loop even when they extend below that panel.
static bool capture_native_fortress_compact_tooltip_start(const void *paragraph,
        int viewport_right) {
    NativeInputCallbackScope callback;
    const auto base = g_native_legacy_tooltip_base;
    const bool compact = *reinterpret_cast<const unsigned char *>(
        native_pe_address(base, 0x18a93b8)) != 0;
    if (!compact) return compact;
    try {
        auto &state = native_legacy_tooltip_state();
        if (state.frame && state.frame->isolated)
            native_tooltip_end_draw(*state.frame);
        state.frame.reset();
        state.remaining_body_rows = 0;
        state.has_keys = false;
        auto *gps = native_graphics();
        const size_t count = native_paragraph_row_count(paragraph);
        const bool keys = *reinterpret_cast<const int32_t *>(
            native_pe_address(base, 0x18a93a8)) != 0;
        if (!paragraph || !gps || !gps->screen || gps->dimx <= 0 || gps->dimx > 1000 ||
                gps->dimy <= 0 || gps->dimy > 1000 ||
                count > 1000 || (!count && !keys)) return compact;
        // Keep the submitted document size when its card crosses the screen;
        // only the shared output layer clips the drawable cells.
        const int64_t left = int64_t(viewport_right) - 24;
        const int height = std::max(18, static_cast<int>(count) + (keys ? 2 : 0));
        if (left < std::numeric_limits<int>::min()) return compact;
        NativeTooltipWidgetFrame frame;
        frame.bounds = {static_cast<int>(left), 0, 25, height};
        if (!native_tooltip_valid_bounds(*gps, frame.bounds)) return compact;
        frame.dimx = gps->dimx;
        frame.dimy = gps->dimy;
        frame.epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
        frame.rows.assign(height, std::string(25, ' '));
        frame.body_source = native_legacy_tooltip_body_source(paragraph, count);
        state.epoch = frame.epoch;
        state.remaining_body_rows = count;
        state.has_keys = keys;
        if (native_tooltip_begin_draw(frame)) state.frame = std::move(frame);
    } catch (...) {}
    return compact;
}

// The floating toolbar counts its selected paragraph immediately before
// clearing [left,left+27] x [bottom-rows-1-(keys?2:0),bottom]. The argument
// already resolves custom RAW descriptions; capture that actual document.
static size_t capture_native_legacy_tooltip_rows(const void *paragraph) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeAnnouncementRowsFn>(
        native_pe_address(g_native_legacy_tooltip_base, 0x6ee50));
    const size_t count = callback.call_native([&] { return original(paragraph); });
    try {
        auto &state = native_legacy_tooltip_state();
        if (state.frame && state.frame->isolated)
            native_tooltip_end_draw(*state.frame);
        state.frame.reset();
        state.remaining_body_rows = 0;
        state.has_keys = false;
        auto *gps = native_graphics();
        const auto base = g_native_legacy_tooltip_base;
        const bool keys = *reinterpret_cast<const int32_t *>(native_pe_address(base, 0x18a93a8)) != 0;
        const int left = *reinterpret_cast<const int32_t *>(native_pe_address(base, 0x18a93bc));
        const int bottom = *reinterpret_cast<const int32_t *>(native_pe_address(base, 0x18a93c0));
        if (paragraph && gps && gps->screen && gps->dimx > 0 && gps->dimx <= 1000 &&
                gps->dimy > 0 && gps->dimy <= 1000 &&
                count <= 1000 && (count > 0 || keys)) {
            const int height = static_cast<int>(count) + (keys ? 4 : 2);
            const int64_t top = int64_t(bottom) - height + 1;
            if (height >= 3 && top >= std::numeric_limits<int>::min()) {
                NativeTooltipWidgetFrame frame;
                frame.bounds = {left, static_cast<int>(top), 28, height};
                if (!native_tooltip_valid_bounds(*gps, frame.bounds)) return count;
                frame.dimx = gps->dimx;
                frame.dimy = gps->dimy;
                frame.epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
                frame.rows.assign(height, std::string(28, ' '));
                frame.body_source = native_legacy_tooltip_body_source(paragraph, count);
                state.epoch = frame.epoch;
                state.remaining_body_rows = count;
                state.has_keys = keys;
                if (native_tooltip_begin_draw(frame)) state.frame = std::move(frame);
            }
        }
    } catch (...) {}
    return count;
}

// Adventure has its own inline toolbar painter. It shares the paragraph
// catalogue with Fortress, but never calls that painter's row-count helper.
// Replace its compact-mode comparison before either background branch;
// the returned byte preserves the native JE through the relay's TEST AL,AL.
static bool capture_native_adventure_toolbar_start(const void *paragraph,
        int viewport_right) {
    NativeInputCallbackScope callback;
    const auto base = g_native_legacy_tooltip_base;
    const bool compact = *reinterpret_cast<const unsigned char *>(
        native_pe_address(base, 0x18a93b8)) != 0;
    try {
        auto &state = native_legacy_tooltip_state();
        if (state.frame && state.frame->isolated)
            native_tooltip_end_draw(*state.frame);
        state.frame.reset();
        state.remaining_body_rows = 0;
        state.has_keys = false;
        auto *gps = native_graphics();
        const size_t count = native_paragraph_row_count(paragraph);
        const bool keys = *reinterpret_cast<const int32_t *>(
            native_pe_address(base, 0x18a93a8)) != 0;
        if (!paragraph || !gps || !gps->screen || gps->dimx <= 0 || gps->dimx > 1000 ||
                gps->dimy <= 0 || gps->dimy > 1000 ||
                count > 1000 || (!count && !keys)) return compact;
        const int rows = static_cast<int>(count);
        const int64_t left = compact ? int64_t(viewport_right) - 30 :
            *reinterpret_cast<const int32_t *>(native_pe_address(base, 0x18a93bc));
        const int bottom = *reinterpret_cast<const int32_t *>(native_pe_address(base, 0x18a93c0));
        // Compact cards draw from row 0, with text from row 1. Include any
        // submitted key rows below their capped border, without clipping a
        // native text store that would otherwise remain on-screen.
        const int height = compact ?
            std::max(std::min(rows + 1, 17) + 1, rows + (keys ? 3 : 1)) :
            rows + (keys ? 4 : 2);
        const int64_t top = compact ? 0 : int64_t(bottom) - height + 1;
        if (height < 3 || left < std::numeric_limits<int>::min() ||
                top < std::numeric_limits<int>::min()) return compact;
        NativeTooltipWidgetFrame frame;
        frame.bounds = {static_cast<int>(left), static_cast<int>(top), 28, height};
        if (!native_tooltip_valid_bounds(*gps, frame.bounds)) return compact;
        frame.dimx = gps->dimx;
        frame.dimy = gps->dimy;
        frame.epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
        frame.rows.assign(height, std::string(28, ' '));
        frame.body_source = native_legacy_tooltip_body_source(paragraph, count);
        state.epoch = frame.epoch;
        state.remaining_body_rows = count;
        state.has_keys = keys;
        if (native_tooltip_begin_draw(frame)) state.frame = std::move(frame);
    } catch (...) {}
    return compact;
}
#else
// The native branch has already selected the actual paragraph, including RAW
// workshop descriptions. Enter before its first inline background store;
// capturing only the corner left this producer on the shared word-matching grid.
static int32_t capture_native_legacy_tooltip_start(const void *paragraph) {
    NativeInputCallbackScope callback;
    const auto base = g_native_legacy_tooltip_base;
    const int32_t left = *reinterpret_cast<const int32_t *>(base + native_reference_va(0x26fe364));
    try {
        auto &state = native_legacy_tooltip_state();
        if (state.frame && state.frame->isolated)
            native_tooltip_end_draw(*state.frame);
        state.frame.reset();
        state.remaining_body_rows = 0;
        state.has_keys = false;
        auto *gps = native_graphics();
        const size_t count = native_paragraph_row_count(paragraph);
        const bool keys = *reinterpret_cast<const int64_t *>(base + native_reference_va(0x26fe350)) != 0;
        const int bottom = *reinterpret_cast<const int32_t *>(base + native_reference_va(0x26fe368));
        if (paragraph && gps && gps->screen && gps->dimx > 0 && gps->dimx <= 1000 &&
                gps->dimy > 0 && gps->dimy <= 1000 &&
                count <= 1000 && (count > 0 || keys)) {
            const int height = static_cast<int>(count) + (keys ? 4 : 2);
            const int64_t top = int64_t(bottom) - height + 1;
            if (height < 3 || top < std::numeric_limits<int>::min()) return left;
            NativeTooltipWidgetFrame frame;
            frame.bounds = {left, static_cast<int>(top), 28, height};
            if (!native_tooltip_valid_bounds(*gps, frame.bounds)) return left;
            frame.dimx = gps->dimx;
            frame.dimy = gps->dimy;
            frame.epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
            frame.rows.assign(height, std::string(28, ' '));
            frame.body_source = native_legacy_tooltip_body_source(paragraph, count);
            state.epoch = frame.epoch;
            state.remaining_body_rows = count;
            state.has_keys = keys;
            if (native_tooltip_begin_draw(frame)) state.frame = std::move(frame);
        }
    } catch (...) {}
    return left;
}
#endif

template<typename Draw>
static void capture_native_legacy_tooltip_text(graphicst *gps, Draw &&draw) {
    auto *previous = g_native_tooltip_write;
    NativeTooltipWidgetFrame *frame = nullptr;
    try {
        auto &pending = native_legacy_tooltip_state().frame;
        if (pending && pending->isolated && g_native_tooltip_output && gps &&
            pending->dimx == gps->dimx && pending->dimy == gps->dimy &&
            pending->grid_identity == gps->screen)
            frame = &*pending;
    } catch (...) {}
    if (frame) g_native_tooltip_write = frame;
    struct Restore {
        NativeTooltipWidgetFrame *previous;
        ~Restore() { g_native_tooltip_write = previous; }
    } restore{previous};
    draw();
}

static void capture_native_legacy_tooltip_row(graphicst *gps, const NativeString *source,
        NativeJustification just, int width) {
    NativeInputCallbackScope callback;
    const auto caller = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
#ifdef _WIN32
    const bool body_row = caller == native_pe_address(g_native_legacy_tooltip_base, 0x3fb318) + 5 ||
        caller == native_pe_address(g_native_legacy_tooltip_base, 0x7f5cde) + 5 ||
        caller == native_pe_address(g_native_legacy_tooltip_base, 0x8182e0) + 5 ||
        caller == native_pe_address(g_native_legacy_tooltip_base, 0x185d67) + 5;
#else
    const bool body_row = caller == g_native_legacy_tooltip_base + native_reference_va(0x16919e9) + 5 ||
        caller == native_elf_5317_address(0x13dad00);
#endif
    const auto original = reinterpret_cast<NativeCaptionDrawFn>(g_native_legacy_tooltip_base +
#ifdef _WIN32
        native_pe_rva(0xad9960));
#else
        native_reference_va(0x425170));
#endif
    capture_native_legacy_tooltip_text(gps, [&] {
        const auto draw = [&] {
            callback.call_native([&] { original(gps, source, just, width); });
        };
        // This call site is the actual toolbar text writer. Publish its
        // submitted row directly rather than relying on another caption
        // entry adapter to rediscover the active tooltip write scope.
        if (!capture_native_tooltip_caption_draw(gps, source, draw)) draw();
    });
    try {
        auto &state = native_legacy_tooltip_state();
        if (body_row && state.frame && state.frame->isolated && state.remaining_body_rows > 0 &&
                --state.remaining_body_rows == 0 && !state.has_keys) {
            // The native loop's remaining work only advances its iterator
            // and selects the no-key continuation; no card stores follow.
            native_tooltip_end_draw(*state.frame);
            state.frame.reset();
        }
    } catch (...) {}
}

static void capture_native_legacy_tooltip_key(void *view, long token, NativeJustification just) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<void (*)(void *, long, NativeJustification)>(
        g_native_legacy_tooltip_base +
#ifdef _WIN32
        native_pe_rva(0xc394b0));
#else
        native_reference_va(0x424620));
#endif
    capture_native_legacy_tooltip_text(native_graphics(), [&] {
        callback.call_native([&] { original(view, token, just); });
    });
    try {
        auto &state = native_legacy_tooltip_state();
        if (state.frame && state.frame->isolated) {
            // This call follows the Hotkey label and completes the card.
            native_tooltip_end_draw(*state.frame);
            state.frame.reset();
        }
    } catch (...) {}
}

#include "native_workshop_tooltip.inc"

static bool install_native_legacy_tooltip(uintptr_t base) {
    g_native_legacy_tooltip_base = base;
    std::vector<NativeCall> calls{
#ifdef _WIN32
        // The relay is entered by CALL: rsp+8 is the native caller's stack.
        // RDX is unused by the original row-count helper, and every live
        // value at this site resides in stack locals/nonvolatile registers.
        {0x185913, 0x6ee50, reinterpret_cast<const void *>(&capture_native_workshop_tooltip_rows),
            {0x48,0x8d,0x54,0x24,0x08}},
        {0x185d67, 0xad9960, reinterpret_cast<const void *>(&capture_native_legacy_tooltip_row)},
        // R13 is the selected paragraph; [RBP-0x58] is the viewport's
        // right limit. The next compact instructions redefine EAX, while
        // floating mode calls the row-count helper before using it. Both
        // continuations redefine volatile arguments before their next call;
        // the enclosing function already supplies aligned ABI call space.
        // TEST AL,AL preserves the native JE after this compact comparison.
        {0x3fb0a0, 0, reinterpret_cast<const void *>(&capture_native_fortress_compact_tooltip_start),
            {0x4c,0x89,0xe9,0x8b,0x55,0xa8},
            {0x80,0x3d,0x11,0xe3,0x4a,0x01,0x00}, {0x84,0xc0}},
        {0x3fb149, 0x6ee50, reinterpret_cast<const void *>(&capture_native_legacy_tooltip_rows)},
        {0x3fb318, 0xad9960, reinterpret_cast<const void *>(&capture_native_legacy_tooltip_row)},
        {0x3fb3c6, 0xad9960, reinterpret_cast<const void *>(&capture_native_legacy_tooltip_row)},
        {0x3fb401, 0xc394b0, reinterpret_cast<const void *>(&capture_native_legacy_tooltip_key)},
        // R13 is the actual selected paragraph, ESI the current viewport's
        // right limit. Neither branch has cleared its background yet. All
        // live native state is nonvolatile or already saved to stack locals;
        // later stores redefine volatile arguments before using them.
        {0x7f5a81, 0, reinterpret_cast<const void *>(&capture_native_adventure_toolbar_start),
            {0x4c,0x89,0xe9,0x89,0xf2},
            {0x44,0x38,0x35,0x30,0x39,0x0b,0x01}, {0x84,0xc0}},
        {0x7f5cde, 0xad9960, reinterpret_cast<const void *>(&capture_native_legacy_tooltip_row)},
        {0x7f5d56, 0xad9960, reinterpret_cast<const void *>(&capture_native_legacy_tooltip_row)},
        {0x7f5d75, 0xc394b0, reinterpret_cast<const void *>(&capture_native_legacy_tooltip_key)},
        // Adventure's graphical toolbar is a third painter. Its count call
        // precedes all background stores and uses the same floating bounds
        // as Fortress; sharing source strings does not share either writer.
        {0x818150, 0x6ee50, reinterpret_cast<const void *>(&capture_native_legacy_tooltip_rows)},
        {0x8182e0, 0xad9960, reinterpret_cast<const void *>(&capture_native_legacy_tooltip_row)},
        {0x818354, 0xad9960, reinterpret_cast<const void *>(&capture_native_legacy_tooltip_row)},
        {0x81838b, 0xc394b0, reinterpret_cast<const void *>(&capture_native_legacy_tooltip_key)}
#else
        // Replace the 19-byte left-coordinate load and local setup. RDI
        // receives the selected paragraph; EAX returns the unchanged left.
        // The suffix restores RCX and the native stack local. Later native
        // instructions redefine all other volatile registers/flags before use;
        // no branch enters this block, and the enclosing function aligns calls.
        {0x1690cce, 0, reinterpret_cast<const void *>(&capture_native_legacy_tooltip_start),
            {0x48,0x8b,0xbd,0x00,0xfe,0xff,0xff},
            {0x8b,0x05,0x90,0xd6,0x06,0x01,
             0x48,0x8b,0x8d,0x00,0xfe,0xff,0xff,
             0x89,0x85,0x10,0xfe,0xff,0xff},
            {0x48,0x8b,0x8d,0x00,0xfe,0xff,0xff,
             0x89,0x85,0x10,0xfe,0xff,0xff}},
        {0x16919e9, 0x425170, reinterpret_cast<const void *>(&capture_native_legacy_tooltip_row)},
        {0x1687e4a, 0x425170, reinterpret_cast<const void *>(&capture_native_legacy_tooltip_row)},
        {0x1687e83, 0x424620, reinterpret_cast<const void *>(&capture_native_legacy_tooltip_key)}
#endif
    };
    if (!native_reference_calls(calls, 0)) return false;
#ifndef _WIN32
    if (const auto body = native_elf_5317_address(0x13dacfb))
        calls.push_back({body - base, native_elf_5317_address(0x4264e0) - base,
            reinterpret_cast<const void *>(&capture_native_legacy_tooltip_row)});
#endif
    auto &hooks = g_native_legacy_tooltip_hook;
    if (!hooks.install(base, calls, "Native legacy toolbar tooltip capture")) return false;
#ifndef _WIN32
    if (const auto begin = native_elf_5317_address(0x13da9a3)) {
        if (!hooks.workshop_begin.install(reinterpret_cast<unsigned char *>(begin),
                {0x48,0x89,0xda,0x8b,0x8d,0x68,0xfd,0xff,0xff},
                &observe_native_workshop_tooltip_begin, "Native ELF workshop preview begin") ||
                !hooks.workshop_end.install(reinterpret_cast<unsigned char *>(
                    native_elf_5317_address(0x13db6b6)),
                    {0x48,0x8b,0xbd,0xd0,0xfe,0xff,0xff},
                    &observe_native_workshop_tooltip_end, "Native ELF workshop preview end")) return false;
    }
#endif
    return true;
}
