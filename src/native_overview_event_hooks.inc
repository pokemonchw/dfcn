// Overview memories and conversation circumstance 233 name a history-event
// collection. Retain its typed identity and roles while each original
// formatter owns the inputs; its English title cannot identify all eighteen
// families by itself.
// Steam 53.16 AMD64 call 1a6f1f -> 66fe50:
// RCX/RDX are unit pointers, R8 is the output string, R9D is the circumstance.
// The caller copies emotion +10/+14 as DWORD stack arguments five and six.
// 66fe8c loads argument five into EDI; 673093 uses EDI as the collection ID.
using NativeOverviewEventFn = void (*)(void *, void *, NativeString *,
    int32_t, int32_t, int32_t);
// Conversation constructors 6b1c90/6b3219/6b4309/6b53f9/6b64ea call e2c460:
// RCX is the unit, RDX the output, R8D the circumstance, R9D its data.
// DWORD [caller rsp+20] is subdata and BYTE [caller rsp+28] is preposition.
// The formatter's [rbp+e0]/[rbp+e8] are those fifth/sixth entry arguments.
using NativeConversationEventFn = void (*)(void *, NativeString *,
    int32_t, int32_t, int32_t, bool);

static NativeCallHook g_native_overview_event_hooks;
#ifndef _WIN32
static NativeEntryHook g_native_conversation_event_entry;
#endif
static NativeOverviewEventFn g_native_overview_event_original = nullptr;
static NativeConversationEventFn g_native_conversation_event_original = nullptr;

static bool remember_native_overview_event_source(std::string source,
        int32_t collection_id, std::shared_ptr<const NativeHistoryDocument> document) {
    std::lock_guard<std::mutex> lock(g_native_overview_event_mutex);
    for (auto &entry : g_native_overview_event_sources) {
        if (entry.source.empty()) break;
        if (entry.source != source) continue;
        // Two collections may display the same title while carrying different
        // participants or object roles. Never select one merely by its text.
        const bool changed = (!entry.ambiguous && entry.collection_id != collection_id) ||
            (!entry.ambiguous && bool(entry.document) != bool(document));
        if (entry.collection_id != collection_id) entry.ambiguous = true;
        if (entry.ambiguous) entry.document.reset();
        else entry.document = std::move(document);
        if (changed) ++g_native_overview_event_revision;
        return changed;
    }
    g_native_overview_event_sources[g_native_overview_event_next] = {
        std::move(source), collection_id, false, std::move(document)};
    g_native_overview_event_next = (g_native_overview_event_next + 1) %
        g_native_overview_event_sources.size();
    ++g_native_overview_event_revision;
    return true;
}

static uint64_t native_overview_event_source_revision() {
    std::lock_guard<std::mutex> lock(g_native_overview_event_mutex);
    return g_native_overview_event_revision;
}

static std::shared_ptr<const NativeHistoryDocument> native_overview_event_source(
        std::string_view normalized_sentence) {
    try {
        const bool overview = normalized_sentence.starts_with("It was ") &&
            normalized_sentence.ends_with('.');
        if (!overview && !normalized_sentence.starts_with("during ")) return {};
        std::lock_guard<std::mutex> lock(g_native_overview_event_mutex);
        for (const auto &entry : g_native_overview_event_sources) {
            if (entry.source.empty()) break;
            if (entry.source == normalized_sentence)
                return entry.ambiguous ? nullptr : entry.document;
        }
    } catch (...) {
        // An optional owned snapshot must never unwind into the native UI.
    }
    return {};
}

static void capture_native_overview_event(void *unit, void *other,
        NativeString *output, int32_t circumstance, int32_t data, int32_t subdata) {
    NativeInputCallbackScope callback;
    callback.call_native([&] {
        g_native_overview_event_original(unit, other, output, circumstance, data, subdata);
    });
    // Every other circumstance, including the native no-sentence cases, keeps
    // the exact original call and follows its existing sentence vocabulary.
    if (circumstance != 233 || data < 0) return;
    try {
        std::string_view native;
        if (!native_string_view(output, &native, 262144)) return;
        std::string source = normalize_utterance(native);
        // The failed/empty title is "It was." and belongs to the glossary.
        if (!source.starts_with("It was ") || !source.ends_with('.')) return;
        std::shared_ptr<const NativeHistoryDocument> captured;
        try {
            auto document = std::make_shared<NativeHistoryDocument>();
            auto &event = document->event;
            event.fields["overview_collection"] = {data};
            if (capture_native_history_collection_title(data, event) &&
                    populate_native_history_subjects(event) &&
                    capture_native_history_subject_item_labels(event) &&
                    native_history_tree_within_limits(event, true)) {
                document->native_source = source;
                captured = std::move(document);
            }
        } catch (...) {
            // Even a declined snapshot must invalidate a prior text collision
            // with another ID rather than silently reusing that other record.
        }
        remember_native_overview_event_source(std::move(source), data, std::move(captured));
    } catch (...) {
        // Capture never changes the game's string or its original result.
    }
}

// Both the formatter and an already constructed chooser own the same typed
// collection ID. The latter may predate hook installation, so retain its
// complete native event suffix without asking the game to rebuild the menu.
static bool remember_native_conversation_collection_source(std::string source,
        int32_t data) {
    if (data < 0 || !source.starts_with("during ")) return false;
    try {
        std::shared_ptr<const NativeHistoryDocument> captured;
        try {
            auto document = std::make_shared<NativeHistoryDocument>();
            auto &event = document->event;
            event.fields["conversation_collection"] = {data};
            if (capture_native_history_collection_title(data, event) &&
                    populate_native_history_subjects(event) &&
                    capture_native_history_subject_item_labels(event) &&
                    native_history_tree_within_limits(event, true)) {
                document->native_source = source;
                captured = std::move(document);
            }
        } catch (...) {
            // A declined snapshot still invalidates collisions with another
            // collection ID under the same original displayed event text.
        }
        return remember_native_overview_event_source(
            std::move(source), data, std::move(captured));
    } catch (...) {
        // An optional owned snapshot never alters a game-owned choice.
    }
    return false;
}

static void capture_native_conversation_event(void *unit, NativeString *output,
        int32_t circumstance, int32_t data, int32_t subdata, bool add_preposition) {
    NativeInputCallbackScope callback;
    callback.call_native([&] {
        g_native_conversation_event_original(unit, output,
            circumstance, data, subdata, add_preposition);
    });
    if (circumstance != 233 || data < 0) return;
    try {
        std::string_view native;
        if (!native_string_view(output, &native, 262144)) return;
        if (remember_native_conversation_collection_source(normalize_utterance(native), data))
            g_overlay.clear_conversation_choices();
    } catch (...) {
        // The original native formatter has already completed unchanged.
    }
}

static bool native_overview_event_hooks_active() {
    return g_native_overview_event_hooks.active()
#ifndef _WIN32
        || g_native_conversation_event_entry.active()
#endif
        ;
}

static void uninstall_native_overview_event_hooks() {
    if (!native_callbacks_idle()) return;
    if (!g_native_overview_event_hooks.uninstall("Native overview event source restore")) return;
#ifndef _WIN32
    if (!g_native_conversation_event_entry.uninstall("Native conversation event source restore")) return;
#endif
    g_native_overview_event_original = nullptr;
    g_native_conversation_event_original = nullptr;
    std::lock_guard<std::mutex> lock(g_native_overview_event_mutex);
    for (auto &entry : g_native_overview_event_sources) entry = {};
    g_native_overview_event_next = 0;
    ++g_native_overview_event_revision;
}

#ifdef _WIN32
static bool install_native_overview_event_hooks() {
    if (g_native_overview_event_hooks.installed) return true;
    if (native_overview_event_hooks_active()) {
        uninstall_native_overview_event_hooks();
        if (native_overview_event_hooks_active()) return false;
    }
    const uintptr_t base = native_history_profile_base();
    if (!base) return false;
    g_native_overview_event_original =
        reinterpret_cast<NativeOverviewEventFn>(native_pe_address(base, 0x66fe50));
    g_native_conversation_event_original =
        reinterpret_cast<NativeConversationEventFn>(native_pe_address(base, 0xe2c460));
    struct InstallGuard {
        bool committed = false;
        ~InstallGuard() { if (!committed) uninstall_native_overview_event_hooks(); }
    } guard;
    std::vector<NativeCall> calls{
        {0x1a6f1f, 0x66fe50, reinterpret_cast<const void *>(&capture_native_overview_event)},
        {0x6b1c90, 0xe2c460, reinterpret_cast<const void *>(&capture_native_conversation_event)},
        {0x6b3219, 0xe2c460, reinterpret_cast<const void *>(&capture_native_conversation_event)},
        {0x6b4309, 0xe2c460, reinterpret_cast<const void *>(&capture_native_conversation_event)},
        {0x6b53f9, 0xe2c460, reinterpret_cast<const void *>(&capture_native_conversation_event)},
        {0x6b64ea, 0xe2c460, reinterpret_cast<const void *>(&capture_native_conversation_event)},
    };
    if (!native_reference_calls(calls, 0) ||
            !g_native_overview_event_hooks.install(base, calls, "Native overview event source"))
        return false;
    guard.committed = true;
    return true;
}
#else
static bool install_native_overview_event_hooks() {
    if (g_native_overview_event_hooks.installed) return true;
    if (native_overview_event_hooks_active()) {
        uninstall_native_overview_event_hooks();
        if (native_overview_event_hooks_active()) return false;
    }
    const uintptr_t base = native_history_profile_base();
    if (!base) return false;
    g_native_overview_event_original = reinterpret_cast<NativeOverviewEventFn>(
        elf_runtime::state().executable.bias + native_reference_va(0x101b7f0));
    auto *conversation = reinterpret_cast<unsigned char *>(
        elf_runtime::state().executable.bias + native_reference_va(0x1e30100));
    std::array<unsigned char, 6> prefix{};
    if (!conversation || !native_history_copy_bytes(reinterpret_cast<uintptr_t>(conversation), prefix.data(), prefix.size()) ||
            std::memcmp(prefix.data(), "\xf3\x0f\x1e\xfa", 4)) return false;
    const size_t prefix_size = prefix[4] >= 0x50 && prefix[4] <= 0x57 ? 5 :
        prefix[4] == 0x41 && prefix[5] >= 0x50 && prefix[5] <= 0x57 ? 6 : 0;
    if (!prefix_size || !g_native_conversation_event_entry.prepare(conversation,
            {prefix.begin(), prefix.begin() + prefix_size},
            reinterpret_cast<const void *>(&capture_native_conversation_event), {},
            "Native conversation event source")) return false;
    g_native_conversation_event_original = reinterpret_cast<NativeConversationEventFn>(
        g_native_conversation_event_entry.original);
    std::vector<NativeCall> calls{
        {0x13a8681,0x101b7f0,reinterpret_cast<const void *>(&capture_native_overview_event)},
    };
    if (!native_reference_calls(calls,0) ||
            !g_native_overview_event_hooks.install(elf_runtime::state().executable.bias,calls,"Native overview event source") ||
            !g_native_conversation_event_entry.install("Native conversation event source")) {
        uninstall_native_overview_event_hooks();
        return false;
    }
    return true;
}
#endif
