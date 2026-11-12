// Included inside Toggle. Native member functions use SysV this in RDI.
// The Linux hook adapter has an inert prerender callback, so gate the actual
// Core update/input boundaries while retaining SDL queue synchronization.
static void *symbol(void *module, const char *name) { return dlsym(module, name); }

static void *elf_console(void *core) {
    return readable(core, 0x1188) ? static_cast<unsigned char *>(core) + 0x1180 : nullptr;
}

static void *elf_plugin_manager(void *core) { return read<void *>(core, 0x12c8); }

static bool elf_event_original(void *event) {
    auto &self = *instance_;
    auto *core = read<void *>(self.core_slot_);
    return core && reinterpret_cast<bool (*)(void *, void *)>(self.core_event_.trampoline)(core, event);
}

static int elf_core_update(void *core) {
    auto &self = *instance_;
    try { self.process_request(); } catch (...) { self.report("ERROR", "DFHack switch failed"); }
    ++maintenance_;
    struct LeaveMaintenance { ~LeaveMaintenance() { --maintenance_; } } leave;
    const int result = reinterpret_cast<int (*)(void *)>(self.core_update_.trampoline)(core);
    if (self.off_.load(std::memory_order_acquire)) self.suspend_turbo();
    try { self.process_request(); } catch (...) { self.report("ERROR", "DFHack switch failed"); }
    return result;
}

static bool elf_core_event(void *core, void *event) {
    auto &self = *instance_;
    if (self.event(event)) return true;
    return !self.off_.load(std::memory_order_acquire) &&
        reinterpret_cast<bool (*)(void *, void *)>(self.core_event_.trampoline)(core, event);
}

static bool elf_core_key(void *core, int key) {
    auto &self = *instance_;
    return !self.off_.load(std::memory_order_acquire) &&
        reinterpret_cast<bool (*)(void *, int)>(self.core_key_.trampoline)(core, key);
}

static int elf_core_shutdown(void *core) {
    auto &self = *instance_;
    {
        std::lock_guard<std::recursive_mutex> lock(self.intent_mutex_);
        self.off_.store(false, std::memory_order_release);
        self.desired_.clear();
        self.desired_order_.clear();
    }
    const int result = reinterpret_cast<int (*)(void *)>(self.core_shutdown_.trampoline)(core);
    self.native_stopped_ = true;
    self.shutdown();
    return result;
}

bool chain_bind() {
    constexpr unsigned char update_prefix[]{0xf3,0x0f,0x1e,0xfa,0x41,0x57};
    constexpr unsigned char shutdown_prefix[]{0xf3,0x0f,0x1e,0xfa,0x55};
    constexpr unsigned char event_prefix[]{0xf3,0x0f,0x1e,0xfa,0x41,0x55};
    constexpr unsigned char key_prefix[]{0xf3,0x0f,0x1e,0xfa,0x41,0x54};
    callbacks_[3] = reinterpret_cast<void *>(&elf_event_original);
    return core_update_.prepare(symbol(module_, "_ZN6DFHack4Core6UpdateEv"),
            reinterpret_cast<void *>(&elf_core_update), update_prefix) &&
        core_shutdown_.prepare(symbol(module_, "_ZN6DFHack4Core8ShutdownEv"),
            reinterpret_cast<void *>(&elf_core_shutdown), shutdown_prefix) &&
        core_event_.prepare(symbol(module_, "_ZN6DFHack4Core13DFH_SDL_EventEP9SDL_Event"),
            reinterpret_cast<void *>(&elf_core_event), event_prefix) &&
        core_key_.prepare(symbol(module_, "_ZN6DFHack4Core15DFH_ncurses_keyEi"),
            reinterpret_cast<void *>(&elf_core_key), key_prefix);
}

bool chain_write(bool install) {
    bool complete = true;
    for (auto *hook : {&core_update_, &core_event_, &core_key_, &core_shutdown_})
        complete = hook->write(install) && complete;
    return complete;
}

bool prepare_hooks() {
    core_slot_ = reinterpret_cast<void **>(symbol(module_, "_ZN6DFHack4Core15active_instanceE"));
    console_ = &elf_console;
    plugin_manager_ = &elf_plugin_manager;
    turbo_slot_ = reinterpret_cast<bool **>(symbol(module_, "_ZN2df6global16debug_turbospeedE"));
    suspended_core_ = reinterpret_cast<SuspendedFn>(symbol(module_, "_ZN6DFHack4Core11isSuspendedEv"));
    auto *native_update = static_cast<unsigned char *>(symbol(module_, "_ZN6DFHack4Core6UpdateEv"));
    auto *native_on_update = static_cast<unsigned char *>(symbol(module_, "_ZN6DFHack4Core8onUpdateERNS_13color_ostreamE"));
    // These instructions prove the inline getConsole/getPluginManager fields
    // independently of compiler-dependent Core/Console class declarations.
    constexpr unsigned char console_field[]{0x4c,0x8d,0xaf,0x80,0x11,0,0};
    constexpr unsigned char plugin_field[]{0x48,0x8b,0xbb,0xc8,0x12,0,0};
    if (!readable(core_slot_, sizeof(void *)) || !suspended_core_ ||
            !elf_memory(native_update, 0x65, true) || !elf_memory(native_on_update, 0x6d, true) ||
            std::memcmp(native_update + 0x5e, console_field, sizeof(console_field)) ||
            std::memcmp(native_on_update + 0x66, plugin_field, sizeof(plugin_field)) ||
            !registry_.bind(module_) || !chain_bind()) return false;
    constexpr unsigned char apply_prefix[]{0xf3,0x0f,0x1e,0xfa,0x41,0x57};
    constexpr unsigned char remove_prefix[]{0xf3,0x0f,0x1e,0xfa,0x41,0x57};
    constexpr unsigned char destroy_prefix[]{0xf3,0x0f,0x1e,0xfa,0x55};
    constexpr unsigned char update_prefix[]{0xf3,0x0f,0x1e,0xfa,0x41,0x55};
    constexpr unsigned char command_prefix[]{0xf3,0x0f,0x1e,0xfa,0x41,0x57};
    return apply_.prepare(reinterpret_cast<void *>(registry_.apply_function()),
            reinterpret_cast<void *>(&apply_callback), apply_prefix) &&
        remove_.prepare(reinterpret_cast<void *>(registry_.remove_function()),
            reinterpret_cast<void *>(&remove_callback), remove_prefix) &&
        destroy_.prepare(symbol(module_, "_ZN6DFHack24VMethodInterposeLinkBaseD1Ev"),
            reinterpret_cast<void *>(&destroy_callback), destroy_prefix) &&
        update_.prepare(native_on_update, reinterpret_cast<void *>(&on_update_callback), update_prefix) &&
        command_.prepare(symbol(module_, "_ZN6DFHack4Core10runCommandERNS_13color_ostreamERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERSt6vectorIS8_SaIS8_EEb"),
            reinterpret_cast<void *>(&command_callback), command_prefix) && prepare_lifecycle();
}

bool prepare_lifecycle() {
    auto *native_event = static_cast<unsigned char *>(symbol(module_,
        "_ZN6DFHack4Core13onStateChangeERNS_13color_ostreamENS_18state_change_eventE"));
    Dl_info image{};
    if (!native_event || !dladdr(native_event, &image) || !image.dli_fbase) return false;
    constexpr unsigned char call_prefix[]{0x44,0x89,0xe6,0x48,0x89,0xdf,0xe8};
    if (!elf_memory(native_event + 0xe7, 11, true) ||
            std::memcmp(native_event + 0xe7, call_prefix, sizeof(call_prefix))) return false;
    auto *lua = native_event + 0xe7 + 11 + read<int32_t>(native_event + 0xe7, 7);
    if (lua != static_cast<unsigned char *>(image.dli_fbase) + 0x5e0140 &&
            lua != static_cast<unsigned char *>(image.dli_fbase) + 0x7e6990) return false;
    constexpr unsigned char lua_prefix[]{0xf3,0x0f,0x1e,0xfa,0x41,0x57};
    constexpr unsigned char scripts_prefix[]{0xf3,0x0f,0x1e,0xfa,0x41,0x57};
    constexpr unsigned char plugin_prefix[]{0xf3,0x0f,0x1e,0xfa,0x41,0x57};
    return lua_state_.prepare(lua, reinterpret_cast<void *>(&state_callback), lua_prefix) &&
        load_scripts_.prepare(symbol(module_, "_ZN6DFHack4Core26handleLoadAndUnloadScriptsERNS_13color_ostreamENS_18state_change_eventE"),
            reinterpret_cast<void *>(&scripts_callback), scripts_prefix) &&
        plugin_state_.prepare(symbol(module_, "_ZN6DFHack13PluginManager13OnStateChangeERNS_13color_ostreamENS_18state_change_eventE"),
            reinterpret_cast<void *>(&plugin_state_callback), plugin_prefix);
}
