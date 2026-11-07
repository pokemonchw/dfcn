// Knowledge, health, personality and thoughts use the same capture dispatch, native
// function ownership, installation order and teardown on every host.
enum class NativeRichCallKind {
    Wrap, Health, Personality, Thoughts, OverviewThoughts, Draw, PersonalityDraw,
    ThoughtsDraw, OverviewThoughtsDraw
};
struct NativeRichCallSite {
    uintptr_t address, target;
    NativeRichCallKind kind;
    std::vector<unsigned char> argument;
    bool character_owner = false;
};
struct NativeRichSignature {
    uintptr_t address;
    std::vector<unsigned char> bytes;
};
struct NativeRichCallSignature { uintptr_t address, target; };
struct NativeRichProfile {
    uintptr_t base = 0;
    NativeKnowledgeWrapFn wrap = nullptr;
    NativeKnowledgeDrawFn draw = nullptr;
    unsigned char *entry_address = nullptr;
    std::vector<unsigned char> entry_prefix;
    unsigned char *draw_entry_address = nullptr;
    std::vector<unsigned char> draw_entry_prefix;
    void **draw_slot = nullptr;
    std::vector<NativeRichCallSite> calls;
    std::vector<NativeRichSignature> signatures;
    std::vector<NativeRichCallSignature> call_signatures;
};
#include "native_rich_profile.inc"

struct NativeRichHooks {
    NativeEntryHook entry;
    NativeEntryHook draw_entry;
    NativeCallHook calls;
    NativeImportHook draw_import;
    bool installed = false;
};
static NativeRichHooks g_native_rich_hooks;

static bool native_rich_hooks_active() {
    return g_native_rich_hooks.entry.active() || g_native_rich_hooks.draw_entry.active() ||
           g_native_rich_hooks.calls.active() || g_native_rich_hooks.draw_import.active();
}

static bool uninstall_native_rich_hooks() {
    auto &hooks = g_native_rich_hooks;
    hooks.installed = false;
    // Classified callbacks and the generic entry share the original wrap
    // trampoline. Keep it until every dependent call has been restored.
    if (!hooks.draw_import.uninstall("Rich-text draw restore")) return false;
    if (!hooks.calls.uninstall("Rich-text call restore")) return false;
    if (!hooks.draw_entry.uninstall("Rich-text draw entry restore")) return false;
    if (!hooks.entry.uninstall("Rich-text entry restore")) return false;
    hooks.draw_import = {};
    g_real_native_knowledge_wrap = nullptr;
    g_real_native_knowledge_draw = nullptr;
    clear_native_knowledge();
    return true;
}

#ifdef _WIN32
template<auto Capture>
static void capture_native_rich_character_wrap(NativeKnowledgeTextBox *box, const NativeString *source) {
    // Draws own the actual entry receiver; input callbacks can use the
    // independently resolved sheet only when its live source/box pair
    // confirms ownership. Neither path borrows a compiler-private register.
    const auto sheet = g_native_character_drawing_sheet
        ? g_native_character_drawing_sheet : g_native_character_owner;
    if (!g_native_character_drawing_sheet) {
        // An input can be constructing a box that is not yet attached to
        // the sheet. Keep it generic until an actual vector/row owns it;
        // a global address alone does not establish document provenance.
        bool owns = false;
        try {
            std::vector<const NativeString *> sources;
            std::vector<NativeKnowledgeTextBox *> boxes;
            constexpr bool health = Capture == &dfcn_capture_native_health_wrap;
            constexpr bool thoughts = Capture == &dfcn_capture_native_thoughts_wrap ||
                Capture == &dfcn_capture_native_overview_thoughts_wrap;
            owns = native_character_page(reinterpret_cast<const void *>(sheet), health,
                sources, boxes, thoughts, box, source);
        } catch (...) {}
        if (!owns) {
            dfcn_capture_native_knowledge_wrap(box, source);
            return;
        }
    }
    Capture(box, source, reinterpret_cast<const void *>(sheet));
}

template<auto Capture>
static void capture_native_rich_character_draw(graphicst *graphics, const char *text, const char *colors) {
    Capture(graphics, text, colors, reinterpret_cast<const void *>(g_native_character_drawing_sheet));
}
#endif

static const void *native_rich_callback(NativeRichCallKind kind, bool character_owner = false) {
#ifdef _WIN32
    if (character_owner) {
        switch (kind) {
        case NativeRichCallKind::Health:
            return reinterpret_cast<const void *>(&capture_native_rich_character_wrap<dfcn_capture_native_health_wrap>);
        case NativeRichCallKind::Personality:
            return reinterpret_cast<const void *>(&capture_native_rich_character_wrap<dfcn_capture_native_personality_wrap>);
        case NativeRichCallKind::Thoughts:
            return reinterpret_cast<const void *>(&capture_native_rich_character_wrap<dfcn_capture_native_thoughts_wrap>);
        case NativeRichCallKind::OverviewThoughts:
            return reinterpret_cast<const void *>(&capture_native_rich_character_wrap<dfcn_capture_native_overview_thoughts_wrap>);
        case NativeRichCallKind::PersonalityDraw:
            return reinterpret_cast<const void *>(&capture_native_rich_character_draw<dfcn_capture_native_personality_draw>);
        case NativeRichCallKind::ThoughtsDraw:
            return reinterpret_cast<const void *>(&capture_native_rich_character_draw<dfcn_capture_native_thoughts_draw>);
        case NativeRichCallKind::OverviewThoughtsDraw:
            return reinterpret_cast<const void *>(&capture_native_rich_character_draw<dfcn_capture_native_overview_thoughts_draw>);
        default: return nullptr;
        }
    }
#else
    (void)character_owner;
#endif
    switch (kind) {
    case NativeRichCallKind::Wrap:
        return reinterpret_cast<const void *>(&dfcn_capture_native_knowledge_wrap);
    case NativeRichCallKind::Health:
        return reinterpret_cast<const void *>(&dfcn_capture_native_health_wrap);
    case NativeRichCallKind::Personality:
        return reinterpret_cast<const void *>(&dfcn_capture_native_personality_wrap);
    case NativeRichCallKind::Thoughts:
        return reinterpret_cast<const void *>(&dfcn_capture_native_thoughts_wrap);
    case NativeRichCallKind::OverviewThoughts:
        return reinterpret_cast<const void *>(&dfcn_capture_native_overview_thoughts_wrap);
    case NativeRichCallKind::Draw:
        return reinterpret_cast<const void *>(&dfcn_capture_native_knowledge_draw);
    case NativeRichCallKind::PersonalityDraw:
        return reinterpret_cast<const void *>(&dfcn_capture_native_personality_draw);
    case NativeRichCallKind::ThoughtsDraw:
        return reinterpret_cast<const void *>(&dfcn_capture_native_thoughts_draw);
    case NativeRichCallKind::OverviewThoughtsDraw:
        return reinterpret_cast<const void *>(&dfcn_capture_native_overview_thoughts_draw);
    }
    return nullptr;
}

static bool validate_native_rich_profile(const NativeRichProfile &profile) {
    NativePatchPages pages;
    const size_t page_size = native_patch_page_size();
    for (const auto &signature : profile.signatures) {
        if (signature.address > UINTPTR_MAX - profile.base ||
            !collect_native_patch_pages(pages, profile.base + signature.address,
                signature.bytes.size(), page_size, true, "Rich-text identity") ||
            std::memcmp(reinterpret_cast<const void *>(profile.base + signature.address),
                        signature.bytes.data(), signature.bytes.size()) != 0) return false;
    }
    for (const auto &signature : profile.call_signatures) {
        if (signature.address > UINTPTR_MAX - profile.base || signature.target > UINTPTR_MAX - profile.base ||
            !collect_native_patch_pages(pages, profile.base + signature.address, 5,
                page_size, true, "Rich-text call identity")) return false;
        const auto *call = reinterpret_cast<const unsigned char *>(profile.base + signature.address);
        int32_t displacement = 0;
        std::memcpy(&displacement, call + 1, sizeof(displacement));
        if (call[0] != 0xe8 || reinterpret_cast<uintptr_t>(call + 5 + displacement) !=
                profile.base + signature.target) return false;
    }
    return true;
}

static bool install_native_rich_hooks() {
    auto &hooks = g_native_rich_hooks;
    if (hooks.installed) return true;
    if (native_rich_hooks_active() && !uninstall_native_rich_hooks()) return false;
    struct InstallGuard {
        bool committed = false;
        ~InstallGuard() {
            if (!committed) {
                try { uninstall_native_rich_hooks(); } catch (...) {}
            }
        }
    } guard;
    NativeRichProfile profile;
    if (!resolve_native_rich_profile(profile) || !profile.wrap || !profile.draw ||
        (profile.draw_entry_address && profile.draw_slot) ||
        !validate_native_rich_profile(profile)) {
        log_line("ERROR", "Native rich-text ABI/identity validation failed");
        return false;
    }
    std::vector<NativeCall> calls;
    calls.reserve(profile.calls.size());
    for (const auto &site : profile.calls)
        calls.push_back({site.address,site.target,native_rich_callback(site.kind, site.character_owner),site.argument});

    if (profile.entry_address && !hooks.entry.prepare(profile.entry_address, profile.entry_prefix,
            native_rich_callback(NativeRichCallKind::Wrap), {}, "Rich-text entry")) return false;
    if (profile.draw_entry_address && !hooks.draw_entry.prepare(profile.draw_entry_address,
            profile.draw_entry_prefix, native_rich_callback(NativeRichCallKind::Draw), {},
            "Rich-text draw entry")) return false;
    // Empty rows for scroll padding use this same original function, so they
    // remain game-allocated and never recursively enter capture callbacks.
    g_real_native_knowledge_wrap = profile.entry_address
        ? reinterpret_cast<NativeKnowledgeWrapFn>(hooks.entry.original) : profile.wrap;
    g_real_native_knowledge_draw = profile.draw_entry_address
        ? reinterpret_cast<NativeKnowledgeDrawFn>(hooks.draw_entry.original) : profile.draw;
    hooks.draw_import.slot = profile.draw_slot;
    hooks.draw_import.replacement = reinterpret_cast<void *>(&dfcn_capture_native_knowledge_draw);
    // The loader restores complete documents and row ownership BEFORE core
    // initialization. Installing fresh hooks must retain that state so an
    // already-open page does not fall back to independent word overlays.
    // Teardown clears the registry; live draw callbacks revalidate restored
    // row identities and source text before using any saved document.
    if (profile.entry_address && !hooks.entry.install("Rich-text entry")) return false;
    if (profile.draw_entry_address && !hooks.draw_entry.install("Rich-text draw entry")) return false;
    if (!calls.empty() && !hooks.calls.install(profile.base, calls, "Rich-text calls")) return false;
    if (profile.draw_slot && !hooks.draw_import.install("Rich-text draw import")) return false;
    hooks.installed = true;
    guard.committed = true;
    log_line("INFO", "Enabled shared knowledge/personality/health/thoughts capture and scroll padding");
    return true;
}
