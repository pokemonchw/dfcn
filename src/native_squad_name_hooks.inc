// DF selects alias versus generated language_name inline at each squad field.
// Retain verified aliases, disband confirmation's generated names and the
// branch-owned fields of traveller returns; native strings remain unchanged.
#ifdef _WIN32
using NativeSquadAliasCopyFn = NativeString *(*)(NativeString *, const NativeString *);
using NativeSquadAliasAssignFn = NativeString *(*)(NativeString *, const char *, size_t);
using NativeSquadAliasDestroyFn = void (*)(NativeString *);
using NativeSquadNameAbbreviateFn = void (*)(NativeString *);
using NativeSquadReturnAppendFn = NativeString *(*)(NativeString *, const NativeString *);
struct NativeSquadNameHooks {
    NativeCallHook calls;
    NativeEntryHook copy_source, assign_source, destroy_source;
    NativeSquadAliasCopyFn copy = nullptr;
    NativeSquadAliasAssignFn assign = nullptr;
    NativeSquadAliasDestroyFn destroy = nullptr, destroy_direct = nullptr;
    NativeSquadNameAbbreviateFn abbreviate = nullptr;
    NativeSquadReturnAppendFn return_append = nullptr;
    NativeUnitIdentityEnglishNameFn return_name = nullptr;
    uintptr_t base = 0;
};
static NativeSquadNameHooks g_native_squad_name_hooks;

static bool native_squad_alias_field(const NativeString *source, std::string &alias) {
    const uintptr_t owner = reinterpret_cast<uintptr_t>(source);
    if (!native_history_layout::squad_alias_offset.contains(0, sizeof(NativeString), sizeof(NativeString))) return false;
    const size_t offset = native_history_layout::squad_alias_offset;
    if (!owner || owner < offset) return false;
    NativeBorrowedVector<uintptr_t> squads;
    if (!native_history_read_vector(native_history_global(0x24e37c0), squads) ||
            squads.size() > 65536) return false;
    const uintptr_t subject = owner - offset;
    for (size_t i = 0; i < squads.size(); ++i) {
        if (native_history_vector_at(squads, i) != subject) continue;
        return native_history_copy_string(owner, alias) && !alias.empty();
    }
    return false;
}

static bool native_squad_alias_copy_source(const NativeString *source, std::string &alias) {
    std::string_view actual;
    if (source && native_string_view(source, &actual, 65536) &&
            native_squad_alias_source_target(actual, reinterpret_cast<uintptr_t>(source))) {
        alias.assign(actual);
        return true;
    }
    return native_squad_alias_field(source, alias);
}

static bool native_squad_alias_owned_buffer(uintptr_t owner, const char *data,
        size_t length, std::string &value) {
    GameString snapshot{};
    if (!owner || !data || !length || length > 65536 ||
            !native_history_copy(owner, snapshot) || snapshot.size != length ||
            snapshot.size > snapshot.capacity) return false;
    const uintptr_t buffer = snapshot.capacity <= 15
        ? owner : reinterpret_cast<uintptr_t>(snapshot.storage.heap);
    if (buffer != reinterpret_cast<uintptr_t>(data)) return false;
    // Registry owners can outlive an inlined native destructor. Read both the
    // header and its current bytes through the guarded native-copy boundary.
    return native_history_copy_string_snapshot(owner,
        reinterpret_cast<const unsigned char *>(&snapshot), value);
}

static bool native_squad_alias_buffer_source(const char *data, size_t length, std::string &alias) {
    if (!data || !length || length > 65536) return false;
    // Copies of an alias keep their own string lifetime. Propagate only from
    // the currently owned buffer, never from another string with equal text.
    {
        std::lock_guard<std::mutex> lock(g_native_squad_alias_mutex);
        if (g_native_squad_alias_epoch == g_embark_item_capture_epoch.load(std::memory_order_acquire)) {
            for (const auto &[owner, binding] : g_native_squad_alias_owners) {
                std::string actual;
                if (native_squad_alias_owned_buffer(owner, data, length, actual) &&
                        actual == binding.source) {
                    alias = std::move(actual);
                    return true;
                }
            }
        }
    }
    NativeBorrowedVector<uintptr_t> squads;
    if (!native_history_layout::squad_alias_offset.contains(0, sizeof(NativeString), sizeof(NativeString)) ||
            !native_history_read_vector(native_history_global(0x24e37c0), squads) || squads.size() > 65536)
        return false;
    const size_t offset = native_history_layout::squad_alias_offset;
    for (size_t i = 0; i < squads.size(); ++i) {
        const uintptr_t squad = native_history_vector_at(squads, i);
        if (!squad || squad > UINTPTR_MAX - offset) continue;
        std::string actual;
        if (native_squad_alias_owned_buffer(squad + offset, data, length, actual)) {
            alias = std::move(actual);
            return true;
        }
    }
    return false;
}

static NativeString *capture_native_squad_alias_copy(NativeString *output,
        const NativeString *source) {
    NativeInputCallbackScope callback;
    std::string alias;
    bool authored = false;
    try {
        if (g_overlay.translation_enabled()) authored = native_squad_alias_copy_source(source, alias);
        forget_native_squad_alias(reinterpret_cast<uintptr_t>(output));
    } catch (...) {}
    NativeString *result = nullptr;
    callback.call_native([&] { result = g_native_squad_name_hooks.copy(output, source); });
    try {
        std::string_view copied;
        if (authored && native_string_view(output, &copied, 65536) && copied == alias)
            remember_native_squad_alias(reinterpret_cast<uintptr_t>(output), alias);
    } catch (...) {
        // Capturing a name must never unwind into the native render function.
    }
    return result;
}

static NativeString *capture_native_squad_alias_assign(NativeString *output,
        const char *data, size_t length) {
    NativeInputCallbackScope callback;
    std::string alias;
    try {
        if (g_overlay.translation_enabled()) native_squad_alias_buffer_source(data, length, alias);
        forget_native_squad_alias(reinterpret_cast<uintptr_t>(output));
    } catch (...) {}
    NativeString *result = nullptr;
    callback.call_native([&] { result = g_native_squad_name_hooks.assign(output, data, length); });
    try {
        std::string_view copied;
        if (!alias.empty() && native_string_view(output, &copied, 65536) && copied == alias)
            remember_native_squad_alias(reinterpret_cast<uintptr_t>(output), alias);
    } catch (...) {}
    return result;
}

static void capture_native_squad_generated_abbreviate(NativeString *source) {
    NativeInputCallbackScope callback;
    std::shared_ptr<const NativeHistoryName> name;
    try {
        std::string_view before;
        if (g_overlay.translation_enabled() && native_string_view(source, &before, 65536))
            name = native_squad_generated_source_name(before, reinterpret_cast<uintptr_t>(source));
        forget_native_squad_alias(reinterpret_cast<uintptr_t>(source));
    } catch (...) {}
    callback.call_native([&] { g_native_squad_name_hooks.abbreviate(source); });
    try {
        std::string_view after;
        // Nobles removes the article before its ordinary resize/ellipsis
        // path. Carry the captured language_name through that actual change
        // so the draw can resolve it from its current, complete native text.
        if (name && native_string_view(source, &after, 65536))
            remember_native_squad_generated(reinterpret_cast<uintptr_t>(source), after, *name);
    } catch (...) {}
}

static void capture_native_squad_return_generated(const void *name,
        NativeString *output, bool first, bool second) {
    NativeInputCallbackScope callback;
    try { forget_native_mission_return_owner(reinterpret_cast<uintptr_t>(output)); }
    catch (...) {}
    callback.call_native([&] {
        g_native_squad_name_hooks.return_name(name, output, first, second);
    });
    try {
        std::string_view source;
        NativeHistoryName snapshot;
        if (g_overlay.translation_enabled() && native_string_view(output, &source, SIZE_MAX) &&
                capture_native_history_name(g_native_squad_name_hooks.base,
                    reinterpret_cast<uintptr_t>(name), snapshot))
            remember_native_mission_return_generated(reinterpret_cast<uintptr_t>(output),
                source, std::move(snapshot));
    } catch (...) {}
}

static void capture_native_squad_confirmation_generated(const void *name,
        NativeString *output, bool first, bool second) {
    NativeInputCallbackScope callback;
    try { forget_native_squad_alias(reinterpret_cast<uintptr_t>(output)); }
    catch (...) {}
    callback.call_native([&] {
        g_native_squad_name_hooks.return_name(name, output, first, second);
    });
    try {
        std::string_view source;
        NativeHistoryName snapshot;
        if (g_overlay.translation_enabled() && native_string_view(output, &source, 65536) &&
                capture_native_history_name(g_native_squad_name_hooks.base,
                    reinterpret_cast<uintptr_t>(name), snapshot))
            remember_native_squad_generated(reinterpret_cast<uintptr_t>(output),
                source, std::move(snapshot));
    } catch (...) {}
}

static void capture_native_mission_return_history(void *event, NativeString *output,
        void *context, bool translated, bool glyphs_only) {
    NativeInputCallbackScope callback;
    NativeHistoryCallbackScope history_callback;
    try { forget_native_mission_return_owner(reinterpret_cast<uintptr_t>(output)); }
    catch (...) {}
    // Squad hooks use their independently proved formatter contract even
    // when optional Chronicle or Legends hooks could not be installed.
    if (!g_overlay.translation_enabled() || !native_history_formatter_ready()) {
        callback.call_native([&] { native_history_call_formatter(event, output, context, translated, glyphs_only); });
        return;
    }
    struct PendingScope {
        NativeHistoryPending *slot = nullptr;
        NativeHistoryPending previous;
        ~PendingScope() { if (slot) *slot = std::move(previous); }
    } pending_scope;
    try {
        pending_scope.slot = &pending_native_history();
        pending_scope.previous = std::move(*pending_scope.slot);
        *pending_scope.slot = {};
    } catch (...) {}
    callback.call_native([&] {
        capture_native_history_sentence_range(event, output, context, translated, glyphs_only, 0);
    });
    try {
        if (!pending_scope.slot) return;
        auto captured = std::move(*pending_scope.slot);
        *pending_scope.slot = {};
        std::string_view source;
        if (captured.source != output || !captured.event ||
                captured.generation != g_native_history_capture_generation.load(std::memory_order_acquire) ||
                !native_string_view(output, &source, kNativeHistorySourceLimit) ||
                captured.native_source != source || source.empty() ||
                !native_history_tree_within_limits(*captured.event)) return;
        auto document = std::make_shared<NativeHistoryDocument>();
        document->owner = reinterpret_cast<uintptr_t>(output);
        document->event = std::move(*captured.event);
        document->native_source = std::move(captured.native_source);
        // This is an owned announcement field, not a richbox draw record.
        // It needs no fabricated tokens or shared history sequence number.
        remember_native_mission_return_history_string(reinterpret_cast<uintptr_t>(output),
            std::move(document));
    } catch (...) {}
}

static void capture_native_mission_return_history_context(void *event, NativeString *output, void *context) {
    capture_native_mission_return_history(event, output, context, true, false);
}

static NativeString *capture_native_mission_return_history_append(NativeString *output,
        const NativeString *source) {
    NativeInputCallbackScope callback;
    std::shared_ptr<const NativeHistoryDocument> document;
    std::string prefix;
    try {
        std::string_view incoming, before;
        if (g_overlay.translation_enabled() && native_string_view(source, &incoming, SIZE_MAX) &&
                native_string_view(output, &before, SIZE_MAX)) {
            document = take_native_mission_return_history_string(
                reinterpret_cast<uintptr_t>(source), incoming);
            prefix.assign(before);
        }
    } catch (...) { document.reset(); }
    NativeString *result = nullptr;
    callback.call_native([&] {
        result = g_native_squad_name_hooks.return_append(output, source);
    });
    try {
        std::string_view complete;
        if (document && native_string_view(output, &complete, SIZE_MAX) &&
                complete.starts_with(prefix) &&
                complete.substr(prefix.size()) == document->native_source)
            remember_native_mission_return_history_append(reinterpret_cast<uintptr_t>(output),
                prefix, std::move(document));
    } catch (...) {}
    return result;
}

template<bool Unit, bool Second = false>
static NativeString *capture_native_mission_return_append(NativeString *output,
        const NativeString *source) {
    NativeInputCallbackScope callback;
    std::optional<NativeMissionReturnParty> party;
    std::string member;
    try {
        std::string_view incoming, before;
        const uintptr_t owner = reinterpret_cast<uintptr_t>(output);
        if constexpr (!Second) forget_native_mission_return_owner(owner);
        if (g_overlay.translation_enabled() &&
                native_string_view(source, &incoming, SIZE_MAX) &&
                native_string_view(output, &before, SIZE_MAX)) {
            // These exact append sites own UnitLabel/EnglishName even when
            // the formatter returned no bytes. Retain the empty member so
            // the second-unit separator and the return suffix stay typed.
            member.assign(incoming);
            if constexpr (Second) {
                party = native_mission_return_owned_party(owner);
                if (!party || party->kind != NativeMissionReturnKind::Units ||
                        party->units.size() != 1 || before != party->prefix + " and ")
                    party.reset();
            } else if (before.empty()) {
                if constexpr (Unit) {
                    party.emplace();
                    party->kind = NativeMissionReturnKind::Units;
                } else {
                    party = take_native_mission_return_generated(
                        reinterpret_cast<uintptr_t>(source), incoming);
                    if (!party) {
                        std::string alias;
                        if (native_squad_alias_field(source, alias) && alias == incoming) {
                            party.emplace();
                            party->kind = NativeMissionReturnKind::Alias;
                        }
                    }
                }
            }
        }
    } catch (...) { party.reset(); }
    NativeString *result = nullptr;
    callback.call_native([&] {
        result = g_native_squad_name_hooks.return_append(output, source);
    });
    try {
        std::string_view appended;
        if (party && native_string_view(output, &appended, SIZE_MAX)) {
            const std::string expected = Second ? party->prefix + " and " + member : member;
            if (appended == expected) {
                party->prefix.assign(appended);
                if constexpr (Unit) party->units.push_back(std::move(member));
                remember_native_mission_return_party(reinterpret_cast<uintptr_t>(output),
                    std::move(*party));
            } else forget_native_mission_return_owner(reinterpret_cast<uintptr_t>(output));
        } else if constexpr (Second) {
            forget_native_mission_return_owner(reinterpret_cast<uintptr_t>(output));
        }
    } catch (...) {}
    return result;
}

template<bool Direct = false>
static void capture_native_squad_alias_destroy(NativeString *source) {
    NativeInputCallbackScope callback;
    try {
        forget_native_squad_alias(reinterpret_cast<uintptr_t>(source));
        forget_native_mission_return_owner(reinterpret_cast<uintptr_t>(source));
    } catch (...) {}
    callback.call_native([&] {
        const auto original = Direct ? g_native_squad_name_hooks.destroy_direct
                                     : g_native_squad_name_hooks.destroy;
        original(source);
    });
}

static bool native_squad_name_hooks_active() {
    const auto &hooks = g_native_squad_name_hooks;
    return hooks.calls.active() || hooks.copy_source.active() || hooks.assign_source.active() || hooks.destroy_source.active();
}

static void uninstall_native_squad_name_hooks() {
    if (!native_callbacks_idle()) return;
    auto &hooks = g_native_squad_name_hooks;
    if (!hooks.calls.uninstall("Native authored squad name restore")) return;
    if (!hooks.copy_source.uninstall("Native squad alias copy source restore") ||
            !hooks.assign_source.uninstall("Native squad alias assignment source restore") ||
            !hooks.destroy_source.uninstall("Native squad alias lifetime restore")) return;
    hooks.copy = nullptr;
    hooks.assign = nullptr;
    hooks.destroy = nullptr;
    hooks.destroy_direct = nullptr;
    hooks.abbreviate = nullptr;
    hooks.return_append = nullptr;
    hooks.return_name = nullptr;
    hooks.base = 0;
    clear_native_squad_aliases();
    clear_native_mission_returns();
}

static bool install_native_complete_squad_name_hooks() {
    auto &hooks = g_native_squad_name_hooks;
    if (hooks.calls.installed) return true;
    if (native_squad_name_hooks_active()) {
        uninstall_native_squad_name_hooks();
        if (native_squad_name_hooks_active()) return false;
    }
    const uintptr_t base = native_history_profile_base();
    if (!base) return false;
    hooks.copy = reinterpret_cast<NativeSquadAliasCopyFn>(native_pe_address(base, 0x6f5a0));
    hooks.assign = reinterpret_cast<NativeSquadAliasAssignFn>(native_pe_address(base, 0x6f8d0));
    hooks.destroy = reinterpret_cast<NativeSquadAliasDestroyFn>(native_pe_address(base, 0x67e30));
    hooks.destroy_direct = reinterpret_cast<NativeSquadAliasDestroyFn>(native_pe_address(base, 0x6f850));
    hooks.abbreviate = reinterpret_cast<NativeSquadNameAbbreviateFn>(native_pe_address(base, 0xede350));
    hooks.return_append = reinterpret_cast<NativeSquadReturnAppendFn>(native_pe_address(base, 0xb9d10));
    hooks.return_name = reinterpret_cast<NativeUnitIdentityEnglishNameFn>(native_pe_address(base, 0xa946e0));
    hooks.base = base;
    if (!hooks.copy || !hooks.assign || !hooks.destroy || !hooks.destroy_direct || !hooks.abbreviate ||
            !hooks.return_append || !hooks.return_name) return false;
    // PE 53.16: alias sources are squad.alias (+0x80), selected only when
    // nonempty. Confirmation's bound alternatives format squad.name (+0x8).
    // Keep literal NativeCall sites so the normal build collects coordinates
    // for both Windows editions without a separate address inventory.
    std::vector<NativeCall> calls{
        // Travellers: actual language_name versus squad.alias branches share
        // one append. Unit parties reach separate native append call sites.
        {0x10db66, 0xa946e0,
            reinterpret_cast<const void *>(&capture_native_squad_return_generated)},
        {0x10dd0d, 0xa946e0,
            reinterpret_cast<const void *>(&capture_native_squad_return_generated)},
        {0x10db79, 0xb9d10,
            reinterpret_cast<const void *>(&capture_native_mission_return_append<false>)},
        {0x10dd20, 0xb9d10,
            reinterpret_cast<const void *>(&capture_native_mission_return_append<false>)},
        {0x10de9b, 0xb9d10,
            reinterpret_cast<const void *>(&capture_native_mission_return_append<true>)},
        {0x10df21, 0xb9d10,
            reinterpret_cast<const void *>(&capture_native_mission_return_append<true, true>)},
        {0x10dca1, 0x67e30,
            reinterpret_cast<const void *>(&capture_native_squad_alias_destroy<>)},
        {0x10de48, 0x67e30,
            reinterpret_cast<const void *>(&capture_native_squad_alias_destroy<>)},
        {0x10e06b, 0x67e30,
            reinterpret_cast<const void *>(&capture_native_squad_alias_destroy<>)},
        {0x10e078, 0x67e30,
            reinterpret_cast<const void *>(&capture_native_squad_alias_destroy<>)},
        {0x16712b, 0x6f5a0, // Character Overview, rsp+41e0.
            reinterpret_cast<const void *>(&capture_native_squad_alias_copy)},
        {0x17b877, 0x6f5a0, // Character Military -> Squad, rsp+3980.
            reinterpret_cast<const void *>(&capture_native_squad_alias_copy)},
        {0x3e9e17, 0x6f5a0, // Zone sidebar's single assigned squad, rbp+1c30.
            reinterpret_cast<const void *>(&capture_native_squad_alias_copy)},
        {0x427065, 0x6f8d0, // Nobles' squad subtitle, actual alias bytes, rbp+140.
            reinterpret_cast<const void *>(&capture_native_squad_alias_assign)},
        {0x42707d, 0xa946e0, // Nobles' subtitle, actual squad.name branch.
            reinterpret_cast<const void *>(&capture_native_squad_confirmation_generated)},
        {0x4270a6, 0xede350, // Generated subtitle's article removal before clipping.
            reinterpret_cast<const void *>(&capture_native_squad_generated_abbreviate)},
        {0x44198f, 0x6f5a0, // Squad selectors, rbp+d0.
            reinterpret_cast<const void *>(&capture_native_squad_alias_copy)},
        {0x4419a7, 0xa946e0, // Disband confirmation, actual squad.name branch.
            reinterpret_cast<const void *>(&capture_native_squad_confirmation_generated)},
        {0x441b4e, 0x6f5a0,
            reinterpret_cast<const void *>(&capture_native_squad_alias_copy)},
        {0x441b66, 0xa946e0, // Compact disband list, actual squad.name branch.
            reinterpret_cast<const void *>(&capture_native_squad_confirmation_generated)},
        {0x4423aa, 0x6f5a0, // Selected squad detail, rbp+130.
            reinterpret_cast<const void *>(&capture_native_squad_alias_copy)},
        {0x443f2f, 0x6f5a0, // Member sidebar's squad heading, rbp+d0.
            reinterpret_cast<const void *>(&capture_native_squad_alias_copy)},
        {0x4455db, 0x6f5a0, // Main three-line squad record, rbp+130.
            reinterpret_cast<const void *>(&capture_native_squad_alias_copy)},
        {0x44ab51, 0x6f5a0, // Monthly squad schedule heading, rbp+48.
            reinterpret_cast<const void *>(&capture_native_squad_alias_copy)},
        {0x451daf, 0x6f5a0, // Equipment manager's squad heading, rbp+4c8.
            reinterpret_cast<const void *>(&capture_native_squad_alias_copy)},
        // The draw registry freezes the target before these native string
        // lifetimes end. Clearing prevents a later same-address/same-text
        // label from inheriting the preceding squad's authored classification.
        {0x167154, 0x67e30,
            reinterpret_cast<const void *>(&capture_native_squad_alias_destroy<>)},
        {0x17bc55, 0x67e30,
            reinterpret_cast<const void *>(&capture_native_squad_alias_destroy<>)},
        {0x17bc68, 0x67e30,
            reinterpret_cast<const void *>(&capture_native_squad_alias_destroy<>)},
        {0x3e9eb7, 0x67e30,
            reinterpret_cast<const void *>(&capture_native_squad_alias_destroy<>)},
        {0x427126, 0x6f850,
            reinterpret_cast<const void *>(&capture_native_squad_alias_destroy<true>)},
        {0x441a87, 0x67e30,
            reinterpret_cast<const void *>(&capture_native_squad_alias_destroy<>)},
        {0x441c45, 0x67e30,
            reinterpret_cast<const void *>(&capture_native_squad_alias_destroy<>)},
        {0x443c47, 0x67e30,
            reinterpret_cast<const void *>(&capture_native_squad_alias_destroy<>)},
        {0x444a51, 0x67e30,
            reinterpret_cast<const void *>(&capture_native_squad_alias_destroy<>)},
        {0x4459b6, 0x67e30,
            reinterpret_cast<const void *>(&capture_native_squad_alias_destroy<>)},
        {0x451de9, 0x67e30,
            reinterpret_cast<const void *>(&capture_native_squad_alias_destroy<>)},
        // Schedule calls the destructor body directly; 67e30 is its thunk.
        {0x44bec1, 0x6f850,
            reinterpret_cast<const void *>(&capture_native_squad_alias_destroy<true>)},
    };
    if (native_pe_return_suffix_feature("mission_return_history_suffix",
            {0x10db8c, 0x10dd33, 0x10df34, 0x10df56},
            {0x10dc3f, 0x10dde6, 0x10e009},
            {native_pe_rva(0x6f560), native_pe_rva(0x7dbe0), native_pe_rva(0x67e30)})) {
        calls.insert(calls.begin(), {
        // The virtual CALL R10 is only three bytes. Own its preceding MOV
        // as one six-byte operation and replay that argument in the relay.
        {0x10dbef, 0, native_history_formatter_callback("getSentence", &capture_native_mission_return_history, &capture_native_mission_return_history_context),
            {0x48,0x8b,0xcf}, {0x48,0x8b,0xcf,0x41,0xff,0xd2}},
        {0x10dd96, 0, native_history_formatter_callback("getSentence", &capture_native_mission_return_history, &capture_native_mission_return_history_context),
            {0x48,0x8b,0xcf}, {0x48,0x8b,0xcf,0x41,0xff,0xd2}},
        {0x10dfb9, 0, native_history_formatter_callback("getSentence", &capture_native_mission_return_history, &capture_native_mission_return_history_context),
            {0x48,0x8b,0xcf}, {0x48,0x8b,0xcf,0x41,0xff,0xd2}},
        {0x10dc26, 0xb9d10,
            reinterpret_cast<const void *>(&capture_native_mission_return_history_append)},
        {0x10ddcd, 0xb9d10,
            reinterpret_cast<const void *>(&capture_native_mission_return_history_append)},
        {0x10dff0, 0xb9d10,
            reinterpret_cast<const void *>(&capture_native_mission_return_history_append)},
        {0x10dc33, 0x67e30,
            reinterpret_cast<const void *>(&capture_native_squad_alias_destroy<>)},
        {0x10ddda, 0x67e30,
            reinterpret_cast<const void *>(&capture_native_squad_alias_destroy<>)},
        {0x10dffd, 0x67e30,
            reinterpret_cast<const void *>(&capture_native_squad_alias_destroy<>)},
        });
    }
    struct InstallGuard {
        bool committed = false;
        ~InstallGuard() { if (!committed) uninstall_native_squad_name_hooks(); }
    } guard;
    if (!native_reference_calls(calls, 0) ||
            !hooks.calls.install(base, calls, "Native authored squad name")) return false;
    guard.committed = true;
    return true;
}

// A page's changed caller or an optional traveller-history suffix must not
// remove protection from unrelated authored squad fields. The shared native
// string operations expose their actual sources even when a caller cannot
// yet be located. Observe them as one lifetime-complete transaction.
static bool install_native_squad_alias_sources() {
    auto &hooks = g_native_squad_name_hooks;
    if (native_squad_name_hooks_active()) return false;
    const auto base = native_history_profile_base();
    const auto copy = native_pe_address(base, 0x6f5a0);
    const auto assign = native_pe_address(base, 0x6f8d0);
    const auto destroy = native_pe_address(base, 0x6f850);
    std::vector<unsigned char> copy_prefix{0x40,0x53,0x48,0x83,0xec,0x20};
    std::vector<unsigned char> assign_prefix{0x48,0x89,0x5c,0x24,0x10};
    std::vector<unsigned char> destroy_prefix{0x40,0x53,0x48,0x83,0xec,0x20};
    if (!base || !copy || !assign || !destroy ||
            !native_history_layout::squad_alias_offset.contains(0, sizeof(NativeString), sizeof(NativeString)) ||
            !native_history_global(0x24e37c0) ||
            !native_pe_bytes(0x6f5a0, copy_prefix) || !native_pe_bytes(0x6f8d0, assign_prefix) ||
            !native_pe_bytes(0x6f850, destroy_prefix)) return false;
    struct InstallGuard {
        bool committed = false;
        ~InstallGuard() { if (!committed) { try { uninstall_native_squad_name_hooks(); } catch (...) {} } }
    } guard;
    if (!hooks.copy_source.prepare(reinterpret_cast<unsigned char *>(copy), copy_prefix,
            reinterpret_cast<const void *>(&capture_native_squad_alias_copy), {}, "Native squad alias copy source") ||
            !hooks.assign_source.prepare(reinterpret_cast<unsigned char *>(assign), assign_prefix,
            reinterpret_cast<const void *>(&capture_native_squad_alias_assign), {}, "Native squad alias assignment source") ||
            !hooks.destroy_source.prepare(reinterpret_cast<unsigned char *>(destroy), destroy_prefix,
            reinterpret_cast<const void *>(&capture_native_squad_alias_destroy<true>), {}, "Native squad alias lifetime")) return false;
    hooks.copy = reinterpret_cast<NativeSquadAliasCopyFn>(hooks.copy_source.original);
    hooks.assign = reinterpret_cast<NativeSquadAliasAssignFn>(hooks.assign_source.original);
    hooks.destroy_direct = reinterpret_cast<NativeSquadAliasDestroyFn>(hooks.destroy_source.original);
    hooks.base = base;
    if (!hooks.copy || !hooks.assign || !hooks.destroy_direct ||
            !hooks.copy_source.install("Native squad alias copy source") ||
            !hooks.assign_source.install("Native squad alias assignment source") ||
            !hooks.destroy_source.install("Native squad alias lifetime")) return false;
    guard.committed = true;
    log_line("INFO", "Native squad aliases protected by their actual copy/assignment sources");
    return true;
}

static bool install_native_squad_name_hooks() {
    const auto &hooks = g_native_squad_name_hooks;
    if (hooks.copy_source.installed && hooks.assign_source.installed && hooks.destroy_source.installed) return true;
    try {
        if (install_native_complete_squad_name_hooks()) return true;
    } catch (const std::exception &error) {
        log_line("WARN", std::string("Native squad extensions deferred: ") + error.what());
    } catch (...) { log_line("WARN", "Native squad extensions deferred during installation"); }
    if (native_squad_name_hooks_active()) uninstall_native_squad_name_hooks();
    if (native_squad_name_hooks_active()) return false;
    return install_native_squad_alias_sources();
}
#else
#include "native_squad_name_search_profile_elf.inc"
#endif
