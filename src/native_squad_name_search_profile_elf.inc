// Linux _M_assign copies a live string into an already constructed string.
// Observe its typed source and every reassignment of a captured destination.
// The registry is frame scoped and never classifies a name by its spelling.
struct NativeSquadNameElfHooks {
    NativeEntryHook copy;
    std::mutex fields_mutex;
    uint64_t fields_epoch = UINT64_MAX;
    std::vector<uintptr_t> alias_fields, name_fields;
};
static NativeSquadNameElfHooks g_native_squad_name_elf_hooks;

static bool native_squad_alias_field(const NativeString *source, std::string &alias) {
    const uintptr_t address = reinterpret_cast<uintptr_t>(source);
    if (!address) return false;
    auto &hooks = g_native_squad_name_elf_hooks;
    const auto epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
    std::lock_guard<std::mutex> lock(hooks.fields_mutex);
    if (hooks.fields_epoch != epoch) {
        hooks.alias_fields.clear(); hooks.name_fields.clear();
        NativeBorrowedVector<uintptr_t> squads;
        if (!native_history_read_vector(native_history_global(0x24e37c0), squads) ||
                squads.size() > 65536) return false;
        for (size_t i = 0; i < squads.size(); ++i) {
            const uintptr_t squad = native_history_vector_at(squads, i);
            if (squad && squad <= UINTPTR_MAX - native_history_layout::squad_alias_offset)
                { hooks.alias_fields.push_back(squad + native_history_layout::squad_alias_offset);
                  hooks.name_fields.push_back(squad + 8); }
        }
        std::sort(hooks.alias_fields.begin(), hooks.alias_fields.end());
        std::sort(hooks.name_fields.begin(), hooks.name_fields.end());
        hooks.fields_epoch = epoch;
    }
    return std::binary_search(hooks.alias_fields.begin(), hooks.alias_fields.end(), address) &&
        native_history_copy_string(address, alias) && !alias.empty();
}

static bool native_squad_generated_field(uintptr_t name) {
    // Refresh both typed indexes through the same native squad vector. The
    // name's owner, rather than its spelling, establishes generated origin.
    std::string unused;
    native_squad_alias_field(reinterpret_cast<const NativeString *>(name), unused);
    auto &hooks = g_native_squad_name_elf_hooks;
    std::lock_guard<std::mutex> lock(hooks.fields_mutex);
    return std::binary_search(hooks.name_fields.begin(), hooks.name_fields.end(), name);
}

static void capture_native_squad_alias_assign(NativeString *output, const NativeString *source) {
    NativeInputCallbackScope callback;
    std::string alias;
    bool authored = false;
    std::shared_ptr<const NativeHistoryName> generated;
    try {
        std::string_view before;
        if (native_string_view(source, &before, 65536))
            generated = native_squad_generated_source_name(before, reinterpret_cast<uintptr_t>(source));
        forget_native_squad_alias(reinterpret_cast<uintptr_t>(output));
        if (g_overlay.translation_enabled()) authored = native_squad_alias_field(source, alias);
    } catch (...) {}
    const auto original = reinterpret_cast<void (*)(NativeString *, const NativeString *)>(
        g_native_squad_name_elf_hooks.copy.original);
    callback.call_native([&] { original(output, source); });
    try {
        std::string_view copied;
        if (authored && native_string_view(output, &copied, 65536) && copied == alias)
            remember_native_squad_alias(reinterpret_cast<uintptr_t>(output), alias);
        else if (generated && native_string_view(output, &copied, 65536))
            remember_native_squad_generated(reinterpret_cast<uintptr_t>(output), copied, *generated);
    } catch (...) {}
}

static bool native_squad_name_hooks_active() { return g_native_squad_name_elf_hooks.copy.active(); }

static void uninstall_native_squad_name_hooks() {
    if (!native_callbacks_idle()) return;
    auto &hooks = g_native_squad_name_elf_hooks;
    if (!hooks.copy.uninstall("Native authored squad name")) return;
    std::lock_guard<std::mutex> lock(hooks.fields_mutex);
    hooks.alias_fields.clear(); hooks.name_fields.clear();
    hooks.fields_epoch = UINT64_MAX;
    clear_native_squad_aliases();
}

static bool install_native_squad_name_hooks() {
    auto &hooks = g_native_squad_name_elf_hooks;
    if (hooks.copy.installed) return true;
    if (native_squad_name_hooks_active()) {
        uninstall_native_squad_name_hooks();
        if (native_squad_name_hooks_active()) return false;
    }
    const uintptr_t base = native_history_profile_base();
    const std::vector<NativeSearchSignature> signatures{
        {0x29f890, {0xf3,0x0f,0x1e,0xfa,0x48,0x39,0xf7,0x0f,0x84,0xc3,0x00,0x00,0x00}}
    };
    std::string failure;
    if (!native_search_signatures_match(base, signatures, failure)) {
        report_native_patch_error("ERROR", "Native authored squad name", failure.c_str());
        return false;
    }
    auto prefix = std::vector<unsigned char>{0xf3,0x0f,0x1e,0xfa,0x48,0x39,0xf7};
    if (!native_reference_bytes(0x69f890, prefix) ||
        !hooks.copy.prepare(reinterpret_cast<unsigned char *>(native_reference_address(base,0x29f890)),
            prefix, reinterpret_cast<const void *>(&capture_native_squad_alias_assign), {},
            "Native authored squad name")) return false;
    if (!hooks.copy.install("Native authored squad name")) {
        uninstall_native_squad_name_hooks();
        return false;
    }
    return true;
}
