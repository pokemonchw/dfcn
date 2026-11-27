// The target picker calls option->getName once per visible row. Copy its
// output before the length comparison, resize and three in-place dot writes.
// Both option constructors call a name formatter once per emitted participant.
struct NativeTalkTargetBuild {
    NativeTalkTargetCaption caption;
    bool failed = false;
};
static thread_local NativeTalkTargetBuild *g_talk_target_build = nullptr;
struct NativeTalkTargetPending {
    uintptr_t owner = 0;
    uint64_t epoch = 0;
    std::shared_ptr<const NativeTalkTargetCaption> caption;
};
static NativeTalkTargetPending &native_talk_target_pending() {
    return reloadable_thread_state<NativeTalkTargetPending, struct TalkTargetPendingTag>();
}
static uintptr_t g_talk_target_renderer = 0;
static NativeUnitIdentityNameOnlyFn g_talk_unit_name = nullptr;
static NativeUnitIdentityEnglishNameFn g_talk_figure_name = nullptr;

static void capture_talk_participant(const NativeString *output, const void *name) noexcept {
    auto *build = g_talk_target_build;
    if (!build) return;
    try {
        std::string_view text;
        if (!native_string_view(output, &text)) { build->failed = true; return; }
        NativeTalkParticipant person;
        person.source.assign(text);
        person.string_owner = reinterpret_cast<uintptr_t>(output);
        if (name) {
            NativeHistoryName snapshot;
            if (capture_native_history_name(native_history_profile_base(),
                    reinterpret_cast<uintptr_t>(name), snapshot) && snapshot.has_name)
                person.figure_name = std::move(snapshot);
        } else {
            person.unit = native_unit_identity_source_binding(text, person.string_owner);
        }
        build->caption.participants.push_back(std::move(person));
    } catch (...) { build->failed = true; }
}

static void capture_talk_unit(void *unit, NativeString *output) {
    NativeInputCallbackScope callback;
    callback.call_native([&] { g_talk_unit_name(unit, output); });
    capture_talk_participant(output, nullptr);
}

static void capture_talk_figure(const void *name, NativeString *output, bool english, bool flag) {
    NativeInputCallbackScope callback;
    callback.call_native([&] { g_talk_figure_name(name, output, english, flag); });
    capture_talk_participant(output, name);
}

using NativeTalkOptionNameFn = void (*)(void *, NativeString *);
static void capture_talk_option(void *option, NativeString *output, int row_span,
        NativeTalkOptionNameFn format) {
    NativeInputCallbackScope callback;
    NativeTalkTargetBuild build;
    {
        struct Restore {
            NativeTalkTargetBuild *previous;
            ~Restore() { g_talk_target_build = previous; }
        } restore{std::exchange(g_talk_target_build, &build)};
        callback.call_native([&] { format(option, output); });
    }
    try {
        auto &pending = native_talk_target_pending();
        pending = {};
        std::string_view full;
        if (build.failed || row_span <= 13 || !native_string_view(output, &full) || full.empty())
            return;
        build.caption.width = row_span - 13;
        build.caption.source.assign(full);
        pending = {reinterpret_cast<uintptr_t>(output),
            g_embark_item_capture_epoch.load(std::memory_order_acquire),
            std::make_shared<const NativeTalkTargetCaption>(std::move(build.caption))};
    } catch (...) {}
}

static std::shared_ptr<const NativeTalkTargetCaption> native_talk_target_caption(
        uintptr_t caller, uintptr_t owner) {
    if (!g_talk_target_renderer || !owner || caller < g_talk_target_renderer) return {};
    const uintptr_t offset = caller - g_talk_target_renderer;
    if (offset == 0x667) {
        const auto &pending = native_talk_target_pending();
        if (pending.owner == owner &&
                pending.epoch == g_embark_item_capture_epoch.load(std::memory_order_acquire))
            return pending.caption;
    } else if (offset == 0x294 || offset == 0x2f3) {
        // Cancel and the instruction each receive an unshortened native string.
        std::string_view text;
        if (native_string_view(reinterpret_cast<const NativeString *>(owner), &text, 128)) {
            auto caption = std::make_shared<NativeTalkTargetCaption>();
            caption->source.assign(text);
            caption->width = static_cast<int>(text.size());
            return caption;
        }
    }
    return {};
}

static void append_native_talk_target_calls(uintptr_t base, std::vector<NativeCall> &calls) {
    struct Owners { uintptr_t renderer, existing, start; };
    // Same relative call layout on the four reviewed images. The two 53.17
    // constructors and the picker branch are in adventure-talk-targets.
    constexpr Owners owners[]{
        {0x867e10, 0x6b7080, 0x6b75a0}, {0x865690, 0x6b4aa0, 0x6b4fc0},
        {0x881540, 0x6d0670, 0x6d0b90}, {0x87eba0, 0x6cde70, 0x6ce390}
    };
    const unsigned edition = native_pe_edition();
    if (!edition || edition > std::size(owners) || (edition > 2 && !native_pe_5317())) return;
    const auto &owner = owners[edition - 1];
    const auto unit = native_pe_rva(0x1331500), figure = native_pe_rva(0xa946e0);
    g_talk_unit_name = reinterpret_cast<NativeUnitIdentityNameOnlyFn>(base + unit);
    g_talk_figure_name = reinterpret_cast<NativeUnitIdentityEnglishNameFn>(base + figure);
    g_talk_target_renderer = base + owner.renderer;
    // At this virtual call RCX is the selected option and RAX its vtable.
    // Pass the same output, row extent and actual virtual function to the
    // wrapper. The original call already provides shadow space and clobbers
    // volatile registers. No jump targets the interior of these instructions.
    calls.push_back({owner.renderer + 0x5a9, 0, reinterpret_cast<const void *>(&capture_talk_option),
        {0x48,0x8d,0x55,0xb8, 0x45,0x8b,0xc7, 0x44,0x2b,0xc6, 0x4c,0x8b,0x48,0x08},
        {0x48,0x8d,0x55,0xb8, 0xff,0x50,0x08}});
    for (auto site : {owner.existing + 0x12f, owner.start + 0xcc})
        calls.push_back({site, unit, reinterpret_cast<const void *>(&capture_talk_unit)});
    for (auto site : {owner.existing + 0x1ff, owner.start + 0x214})
        calls.push_back({site, figure, reinterpret_cast<const void *>(&capture_talk_figure)});
}
