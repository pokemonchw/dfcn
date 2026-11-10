#pragma once

#include <SDL2/SDL.h>
#include <atomic>
#include <string>
#include "dfhack_command_context.h"

#include "dfhack_interpose.h"
#ifdef _WIN32
#include "dfhack_console_exit.h"
#endif
#include <array>
#include <mutex>
#include <unordered_set>

namespace dfcn::dfhack {

using Report = void (*)(const char *, const std::string &);

// The resident loader owns this switch. DFHack's Core, native synchronization,
// persistence and unload notifications stay alive; its active tools do not.
// No STL objects or ownership cross the MSVC/MinGW boundary.
class Toggle {
    #ifdef _WIN32
    struct Detour {
        unsigned char *target = nullptr;
        void *trampoline = nullptr;
        std::vector<unsigned char> original, replacement;
        bool installed = false;

        template<std::size_t N>
        bool prepare(void *entry, void *callback, const unsigned char (&prefix)[N], bool short_jump = false) {
            if (N < (short_jump ? 12u : 14u) || !readable(entry, N) || std::memcmp(entry, prefix, N)) return false;
            target = static_cast<unsigned char *>(entry);
            original.assign(prefix, prefix + N);
            replacement.assign(N, 0x90);
            if (short_jump) {
                // This supported destructor consumes no incoming RAX. Its
                // 13-byte prefix ends before JE/CALL, which stay in place.
                replacement[0] = 0x48;
                replacement[1] = 0xb8;
                std::memcpy(replacement.data() + 2, &callback, sizeof(callback));
                replacement[10] = 0xff;
                replacement[11] = 0xe0;
            } else {
                jump(replacement.data(), callback);
            }
            trampoline = VirtualAlloc(nullptr, N + 14, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
            if (!trampoline) return false;
            std::memcpy(trampoline, prefix, N);
            jump(static_cast<unsigned char *>(trampoline) + N, target + N);
            DWORD old = 0;
            if (!VirtualProtect(trampoline, N + 14, PAGE_EXECUTE_READ, &old) ||
                !FlushInstructionCache(GetCurrentProcess(), trampoline, N + 14)) return false;
            return true;
        }

        bool write(bool install) {
            if (installed == install) return true;
            const auto &expected = install ? original : replacement;
            const auto &bytes = install ? replacement : original;
            if (!target || !readable(target, expected.size()) ||
                std::memcmp(target, expected.data(), expected.size())) return false;
            DWORD old = 0;
            if (!VirtualProtect(target, bytes.size(), PAGE_EXECUTE_READWRITE, &old)) return false;
            std::memcpy(target, bytes.data(), bytes.size());
            installed = install;
            const bool flushed = FlushInstructionCache(GetCurrentProcess(), target, bytes.size());
            DWORD ignored = 0;
            const bool restored = VirtualProtect(target, bytes.size(), old, &ignored);
            return flushed && restored;
        }

        static void jump(unsigned char *out, void *destination) {
            static constexpr unsigned char indirect[] = {0xff, 0x25, 0, 0, 0, 0};
            std::memcpy(out, indirect, sizeof(indirect));
            std::memcpy(out + sizeof(indirect), &destination, sizeof(destination));
        }
        // Trampolines remain mapped until process exit: a console thread can
        // still be returning through one during the game's normal shutdown.
    };

    #else
    #include "dfhack_detour_elf.h"
    #endif

    using VoidFn = void (*)();
    using EventFn = bool (*)(void *);
    using KeyFn = bool (*)(int);
    using CoreFn = void *(*)(void *);
    using SuspendedFn = bool (*)(void *);
    using UpdateFn = void (*)(void *, void *);
    using CommandFn = int (*)(void *, void *, const void *, void *, bool);
    using StateFn = void (*)(void *, int);
    using ScriptsFn = void (*)(void *, void *, int);

    inline static Toggle *instance_ = nullptr;
    inline static thread_local unsigned maintenance_ = 0;
    struct CommandFrame {
        CommandFrame *parent;
        void *out;
        const void *name;
        const void *arguments;
        uint64_t invocation;
        bool local_console;
    };
    // These TLS objects are POD and belong to the resident loader. In
    // particular no destructor in a hot-reloaded core is registered here.
    inline static thread_local CommandFrame *command_frame_ = nullptr;
    // A reused OS/thread id must not revive a former thread's print ticket.
    inline static std::atomic<uint64_t> command_sequence_{0};
    inline static std::atomic<uint64_t> command_thread_sequence_{0};
    inline static thread_local uint64_t command_thread_identity_ = 0;
    inline static thread_local uint64_t command_entry_epoch_ = 0;
    inline static std::atomic_bool command_context_ready_{false};
    Report report_ = nullptr;
#ifdef _WIN32
    HMODULE module_ = nullptr;
    ConsoleExit console_exit_;
    Detour console_shutdown_;
#else
    void *module_ = nullptr;
    Detour core_update_, core_shutdown_, core_event_, core_key_;
#endif
    void **core_slot_ = nullptr;
    CoreFn console_ = nullptr;
    CoreFn plugin_manager_ = nullptr;
    bool **turbo_slot_ = nullptr;
    bool turbo_saved_ = false;
    bool turbo_owned_ = false;
    SuspendedFn suspended_core_ = nullptr;
    InterposeRegistry registry_;
    Detour apply_, remove_, destroy_, update_, command_, plugin_state_, lua_state_, load_scripts_;
    std::atomic<bool> off_{false};
    std::atomic<unsigned> requests_{0};
    bool f11_consumed_ = false;
    bool attempted_ = false;
    bool ready_ = false;
    bool native_stopped_ = false;
    bool defer_world_ = false, defer_map_ = false;
    std::recursive_mutex intent_mutex_;
    std::vector<void *> desired_order_;
    std::unordered_set<void *> desired_;
    void *wrapper_ = nullptr;
    std::array<void *, 6> callbacks_{};

    static bool readable(const void *ptr, std::size_t length) {
#ifdef _WIN32
        MEMORY_BASIC_INFORMATION region{};
        if (!ptr || !VirtualQuery(ptr, &region, sizeof(region)) || region.State != MEM_COMMIT ||
            (region.Protect & (PAGE_GUARD | PAGE_NOACCESS))) return false;
        const auto begin = reinterpret_cast<std::uintptr_t>(region.BaseAddress);
        const auto address = reinterpret_cast<std::uintptr_t>(ptr);
        return address >= begin && address - begin < region.RegionSize &&
            length <= region.RegionSize - (address - begin);
#else
        return elf_memory(ptr, length);
#endif
    }

    template<class T> static T read(const void *ptr, std::size_t offset = 0) {
        T value{};
        if (!ptr) return value;
        const auto *address = static_cast<const unsigned char *>(ptr) + offset;
        if (readable(address, sizeof(T))) std::memcpy(&value, address, sizeof(T));
        return value;
    }

    void report(const char *level, const char *text) const {
        if (report_) report_(level, text);
    }

    #ifdef _WIN32
    static void *symbol(HMODULE module, const char *name) {
        return reinterpret_cast<void *>(GetProcAddress(module, name));
    }

    bool chain_bind() {
        const auto bootstrap = GetModuleHandleW(L"dfhooks.dll");
        const auto adapter = GetModuleHandleW(L"dfhooks_dfhack.dll");
        if (!bootstrap || !adapter) return false;
        void *slot = nullptr;
        // Recover the chain global from three independent dispatch exports.
        for (const auto *name : {"dfhooks_update", "dfhooks_prerender", "dfhooks_sdl_loop"}) {
            auto *entry = static_cast<unsigned char *>(symbol(bootstrap, name));
            if (!readable(entry, 7) || entry[0] != 0x48 || entry[1] != 0x8b || entry[2] != 0x0d)
                return false;
            void *candidate = entry + 7 + read<std::int32_t>(entry, 3);
            if (slot && slot != candidate) return false;
            slot = candidate;
        }
        auto *chain = read<void *>(slot);
        auto *begin = read<void **>(chain);
        auto *end = read<void **>(chain, 8);
        auto *capacity = read<void **>(chain, 16);
        const auto first = reinterpret_cast<std::uintptr_t>(begin);
        const auto last = reinterpret_cast<std::uintptr_t>(end);
        const auto limit = reinterpret_cast<std::uintptr_t>(capacity);
        if (!begin || last < first || limit < last || last - first > 1024 * sizeof(void *) ||
            (last - first) % sizeof(void *) || !readable(begin, last - first)) return false;
        static constexpr std::array<const char *, 6> names = {
            "dfhooks_shutdown", "dfhooks_update", "dfhooks_prerender",
            "dfhooks_sdl_event", "dfhooks_sdl_loop", "dfhooks_ncurses_key"};
        for (auto *item = begin; item != end; ++item) {
            auto *candidate = read<void *>(item);
            if (!readable(candidate, 0x58) || read<HMODULE>(candidate, 8) != adapter) continue;
            for (std::size_t i = 0; i < names.size(); ++i) {
                callbacks_[i] = symbol(adapter, names[i]);
                if (!callbacks_[i] || read<void *>(candidate, 0x28 + 8 * i) != callbacks_[i])
                    return false;
            }
            wrapper_ = candidate;
            return true;
        }
        return false;
    }

    bool chain_write(bool install) {
        const std::array<void *, 6> replacements = {
            reinterpret_cast<void *>(&shutdown_callback), reinterpret_cast<void *>(&update_callback),
            reinterpret_cast<void *>(&prerender_callback), reinterpret_cast<void *>(&event_callback),
            reinterpret_cast<void *>(&loop_callback), reinterpret_cast<void *>(&key_callback)};
        for (std::size_t i = 0; i < replacements.size(); ++i) {
            auto **field = reinterpret_cast<void **>(static_cast<unsigned char *>(wrapper_) + 0x28 + 8 * i);
            std::atomic_ref<void *> value(*field);
            auto expected = install ? callbacks_[i] : replacements[i];
            if (!value.compare_exchange_strong(expected, install ? replacements[i] : callbacks_[i]) &&
                    expected != (install ? replacements[i] : callbacks_[i])) return false;
        }
        return true;
    }

    bool prepare_hooks() {
        core_slot_ = reinterpret_cast<void **>(symbol(module_, "?active_instance@Core@DFHack@@0PEAV12@EA"));
        console_ = reinterpret_cast<CoreFn>(symbol(module_, "?getConsole@Core@DFHack@@QEAAAEAVConsole@2@XZ"));
        plugin_manager_ = reinterpret_cast<CoreFn>(symbol(module_, "?getPluginManager@Core@DFHack@@QEBAPEAVPluginManager@2@XZ"));
        turbo_slot_ = reinterpret_cast<bool **>(symbol(module_, "?debug_turbospeed@global@df@@3PEA_NEA"));
        suspended_core_ = reinterpret_cast<SuspendedFn>(symbol(module_, "?isSuspended@Core@DFHack@@QEAA_NXZ"));
        if (!readable(core_slot_, sizeof(void *)) || !console_ || !plugin_manager_ || !suspended_core_ ||
            !registry_.bind(module_) || !chain_bind()) return false;
        // Whole, non-relative instruction prefixes shared by 53.16-r2/r3 and 53.17-r1.
        // Reject differing instructions before modifying native callbacks.
        static constexpr unsigned char apply_prefix[] =
            {0x48,0x89,0x5c,0x24,0x08,0x55,0x56,0x57,0x41,0x54,0x41,0x55,0x41,0x56};
        static constexpr unsigned char remove_prefix[] =
            {0x48,0x89,0x5c,0x24,0x20,0x55,0x56,0x57,0x41,0x54,0x41,0x55,0x41,0x56};
        static constexpr unsigned char destroy_prefix[] =
            {0x40,0x53,0x48,0x83,0xec,0x20,0x48,0x8b,0xd9,0x80,0x79,0x30,0x00};
        static constexpr unsigned char update_prefix[] =
            {0x48,0x89,0x5c,0x24,0x08,0x48,0x89,0x74,0x24,0x10,0x57,0x48,0x83,0xec,0x20};
        static constexpr unsigned char command_prefix[] =
            {0x40,0x55,0x53,0x56,0x57,0x41,0x54,0x41,0x55,0x41,0x56,0x41,0x57,0x48,0x8d,0x6c,0x24,0xa8};
        static constexpr char command_symbol[] =
            "?runCommand@Core@DFHack@@QEAA?AW4command_result@2@AEAVcolor_ostream@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@6@_N@Z";
        return apply_.prepare(reinterpret_cast<void *>(registry_.apply_function()),
                   reinterpret_cast<void *>(&apply_callback), apply_prefix) &&
            remove_.prepare(reinterpret_cast<void *>(registry_.remove_function()),
                   reinterpret_cast<void *>(&remove_callback), remove_prefix) &&
            destroy_.prepare(symbol(module_, "??1VMethodInterposeLinkBase@DFHack@@QEAA@XZ"),
                   reinterpret_cast<void *>(&destroy_callback), destroy_prefix, true) &&
            update_.prepare(symbol(module_, "?onUpdate@Core@DFHack@@AEAAXAEAVcolor_ostream@2@@Z"),
                   reinterpret_cast<void *>(&on_update_callback), update_prefix) &&
            command_.prepare(symbol(module_, command_symbol),
                   reinterpret_cast<void *>(&command_callback), command_prefix) && prepare_lifecycle();
    }

    bool prepare_lifecycle() {
        auto *core_event = static_cast<unsigned char *>(symbol(module_,
            "?onStateChange@Core@DFHack@@AEAAXAEAVcolor_ostream@2@W4state_change_event@2@@Z"));
        auto *scripts = symbol(module_,
            "?handleLoadAndUnloadScripts@Core@DFHack@@AEAAXAEAVcolor_ostream@2@W4state_change_event@2@@Z");
        if (!readable(core_event, 0x119c)) return false;
        auto *calls = core_event + 0x1183;
        static constexpr unsigned char before[] = {0x41,0x8b,0xd5,0x49,0x8b,0xcc,0xe8};
        static constexpr unsigned char between[] = {0x45,0x8b,0xc5,0x49,0x8b,0xd4,0x48,0x8b,0xcf,0xe8};
        if (std::memcmp(calls, before, sizeof(before)) ||
            std::memcmp(calls + 11, between, sizeof(between))) return false;
        auto *lua = calls + 11 + read<std::int32_t>(calls, 7);
        if (calls + 25 + read<std::int32_t>(calls, 21) != scripts) return false;
        static constexpr unsigned char lua_prefix[] =
            {0x48,0x89,0x5c,0x24,0x08,0x48,0x89,0x6c,0x24,0x10,0x48,0x89,0x74,0x24,0x18};
        static constexpr unsigned char scripts_prefix[] =
            {0x48,0x89,0x5c,0x24,0x18,0x55,0x56,0x57,0x41,0x54,0x41,0x55,0x41,0x56};
        static constexpr unsigned char plugin_prefix[] =
            {0x40,0x53,0x41,0x54,0x41,0x55,0x41,0x57,0x48,0x83,0xec,0x38,0x45,0x8b,0xe0};
        return lua_state_.prepare(lua, reinterpret_cast<void *>(&state_callback), lua_prefix) &&
            load_scripts_.prepare(scripts, reinterpret_cast<void *>(&scripts_callback), scripts_prefix) &&
            plugin_state_.prepare(symbol(module_,
                "?OnStateChange@PluginManager@DFHack@@AEAAXAEAVcolor_ostream@2@W4state_change_event@2@@Z"),
                reinterpret_cast<void *>(&plugin_state_callback), plugin_prefix);
    }

    #else
    #include "dfhack_toggle_profile_elf.h"
    #endif

    bool disable(void *console) {
        if (!registry_.dismiss_screens()) return false;
        // Keep plugin modes/configuration intact. Generic plugin_enable(false)
        // is destructive: fastdwarf, for example, rewrites speed/teleport modes.
        std::vector<void *> hooks;
        if (!registry_.snapshot(hooks)) return false;
        std::lock_guard<std::recursive_mutex> lock(intent_mutex_);
        desired_order_ = std::move(hooks);
        desired_.clear();
        desired_.insert(desired_order_.begin(), desired_order_.end());
        for (auto *link : desired_order_)
            reinterpret_cast<InterposeRegistry::RemoveFn>(remove_.trampoline)(link);
        for (auto *link : desired_order_) {
            if (registry_.applied(link)) {
                enable(console);
                return false;
            }
        }
        suspend_turbo();
        off_.store(true, std::memory_order_release);
        report("INFO", "Shift+F11: DFHack disabled (resident core retained for recovery)");
        return true;
    }

    void suspend_turbo() {
#ifdef _WIN32
        const auto fastdwarf = GetModuleHandleW(L"fastdwarf.plug.dll");
#else
        const auto fastdwarf = elf_loaded_module("fastdwarf.plug.so");
#endif
        const auto *enabled = fastdwarf ? static_cast<const bool *>(symbol(fastdwarf, "plugin_is_enabled")) : nullptr;
        auto *turbo = read<bool *>(turbo_slot_);
#ifndef _WIN32
        if (fastdwarf) dlclose(fastdwarf);
#endif
        if (!readable(enabled, sizeof(bool)) || !*enabled || !readable(turbo, sizeof(bool))) return;
        if (*turbo) {
            turbo_saved_ = true;
            turbo_owned_ = true;
            *turbo = false;
        }
    }

    void restore_turbo() {
        auto *turbo = read<bool *>(turbo_slot_);
        if (turbo_owned_ && readable(turbo, sizeof(bool))) *turbo = turbo_saved_;
        turbo_saved_ = turbo_owned_ = false;
    }

    bool enable(void *console) {
        std::lock_guard<std::recursive_mutex> lock(intent_mutex_);
        off_.store(false, std::memory_order_release);
        bool complete = true;
        for (auto it = desired_order_.rbegin(); it != desired_order_.rend(); ++it) {
            if (desired_.contains(*it) &&
                !reinterpret_cast<InterposeRegistry::ApplyFn>(apply_.trampoline)(*it, true)) complete = false;
        }
        desired_.clear();
        desired_order_.clear();
        restore_turbo();
        replay_lifecycle(console);
        report(complete ? "INFO" : "ERROR", complete ?
            "Shift+F11: DFHack enabled" : "Shift+F11: DFHack enabled, but a native hook could not be restored");
        return complete;
    }

    void replay_lifecycle(void *console) {
        auto *core = read<void *>(core_slot_);
        const bool world = defer_world_, map = defer_map_;
        defer_world_ = defer_map_ = false;
        for (const auto event : {0, 2}) {
            if (!(event == 0 ? world : map)) continue;
            reinterpret_cast<ScriptsFn>(plugin_state_.trampoline)(plugin_manager_(core), console, event);
            reinterpret_cast<StateFn>(lua_state_.trampoline)(console, event);
            reinterpret_cast<ScriptsFn>(load_scripts_.trampoline)(core, console, event);
        }
    }

    void process_request() {
        auto *core = read<void *>(core_slot_);
        if (!core || !suspended_core_(core)) return;
        if (!(requests_.exchange(0, std::memory_order_acq_rel) & 1)) return;
        auto *console = console_(core);
        try {
            if (!console || !(off_.load(std::memory_order_acquire) ? enable(console) : disable(console)))
                report("ERROR", "Shift+F11: DFHack switch could not complete");
        } catch (...) {
            // Restore any native hooks already removed by a failed transition.
            if (console) enable(console);
            throw;
        }
    }

    static bool apply_callback(void *link, bool active) {
        auto &self = *instance_;
        std::lock_guard<std::recursive_mutex> lock(self.intent_mutex_);
        if (self.off_.load(std::memory_order_acquire)) {
            if (active) {
                // The newest equal-priority link belongs above older links;
                // reverse restoration must apply this one last.
                if (self.desired_.insert(link).second) self.desired_order_.insert(self.desired_order_.begin(), link);
                return true;
            }
            self.desired_.erase(link);
            std::erase(self.desired_order_, link);
        }
        return reinterpret_cast<InterposeRegistry::ApplyFn>(self.apply_.trampoline)(link, active);
    }

    static void remove_callback(void *link) {
        auto &self = *instance_;
        std::lock_guard<std::recursive_mutex> lock(self.intent_mutex_);
        self.desired_.erase(link);
        std::erase(self.desired_order_, link);
        reinterpret_cast<InterposeRegistry::RemoveFn>(self.remove_.trampoline)(link);
    }

    static void destroy_callback(void *link) {
        auto &self = *instance_;
        std::lock_guard<std::recursive_mutex> lock(self.intent_mutex_);
        // An inactive native link's destructor skips remove(), so observe
        // destruction explicitly to avoid retaining a stale recovery pointer.
        self.desired_.erase(link);
        std::erase(self.desired_order_, link);
        reinterpret_cast<InterposeRegistry::RemoveFn>(self.destroy_.trampoline)(link);
    }

    static void on_update_callback(void *core, void *console) {
        auto &self = *instance_;
        // This native boundary owns Core's suspension context on both hosts.
        // Process requests here even while plugin/Lua updates are disabled.
        try { self.process_request(); } catch (...) { self.report("ERROR", "DFHack switch failed"); }
        if (!self.off_.load(std::memory_order_acquire))
            reinterpret_cast<UpdateFn>(self.update_.trampoline)(core, console);
    }

    static int command_callback(void *core, void *console, const void *name, void *arguments, bool autocomplete) {
        // Advance before every early return too: a new attempt must invalidate
        // a previous producer record even when the switch suppresses execution.
        const auto invocation = command_sequence_.fetch_add(1, std::memory_order_relaxed) + 1;
        command_entry_epoch_ = invocation;
        auto &self = *instance_;
        if (self.off_.load(std::memory_order_acquire) && !maintenance_) return 1; // CR_FAILURE
        // Record every command, including non-local and nested ones. A
        // remote/silent child is a barrier; querying never walks to an outer
        // Console frame. Aliases naturally expose their innermost invocation.
        CommandFrame frame{command_frame_, console, name, arguments, invocation,
            self.console_ && self.console_(core) == console};
        struct RestoreFrame {
            CommandFrame *parent;
            ~RestoreFrame() { command_frame_ = parent; }
        } restore{frame.parent};
        command_frame_ = &frame;
        return reinterpret_cast<CommandFn>(self.command_.trampoline)(core, console, name, arguments, autocomplete);
    }

    static void state_callback(void *console, int event) {
        auto &self = *instance_;
        if (self.off_.load(std::memory_order_acquire)) {
            if (event == 0) self.defer_world_ = true;
            if (event == 2) self.defer_map_ = true;
            if (event == 1) self.defer_world_ = self.defer_map_ = false;
            if (event == 3) self.defer_map_ = false;
            if (event == 1 || event == 3) self.turbo_saved_ = self.turbo_owned_ = false;
            if (event != 1 && event != 3 && event != 6) return;
        }
        reinterpret_cast<StateFn>(self.lua_state_.trampoline)(console, event);
    }

    static void plugin_state_callback(void *manager, void *console, int event) {
        auto &self = *instance_;
        if (self.off_.load(std::memory_order_acquire) && event != 1 && event != 3 && event != 6) return;
        reinterpret_cast<ScriptsFn>(self.plugin_state_.trampoline)(manager, console, event);
    }

    static void scripts_callback(void *core, void *console, int event) {
        auto &self = *instance_;
        if (self.off_.load(std::memory_order_acquire) && (event == 0 || event == 2)) return;
        reinterpret_cast<ScriptsFn>(self.load_scripts_.trampoline)(core, console, event);
    }

    static void update_callback() {
        auto &self = *instance_;
        try { self.process_request(); } catch (...) { self.report("ERROR", "DFHack switch failed"); }
        // Update must run even while off: it owns the CoreSuspender handshake,
        // save persistence and unload cleanup. onUpdate is gated separately.
        ++maintenance_;
        try {
            reinterpret_cast<VoidFn>(self.callbacks_[1])();
        } catch (...) {
            --maintenance_;
            throw;
        }
        --maintenance_;
        if (self.off_.load(std::memory_order_acquire)) self.suspend_turbo();
        try { self.process_request(); } catch (...) { self.report("ERROR", "DFHack switch failed"); }
    }

    static void prerender_callback() {
        auto &self = *instance_;
        if (!self.off_.load(std::memory_order_acquire)) reinterpret_cast<VoidFn>(self.callbacks_[2])();
    }

    static bool event_callback(void *event) {
        auto &self = *instance_;
        if (self.event(event)) return true;
        return !self.off_.load(std::memory_order_acquire) && reinterpret_cast<EventFn>(self.callbacks_[3])(event);
    }

    static void loop_callback() {
        // Queued texture/SDL work can be waiting for the render thread.
        // Draining this native queue is synchronization, not a plugin update.
        reinterpret_cast<VoidFn>(instance_->callbacks_[4])();
    }

    static bool key_callback(int key) {
        auto &self = *instance_;
        return !self.off_.load(std::memory_order_acquire) && reinterpret_cast<KeyFn>(self.callbacks_[5])(key);
    }

    static void shutdown_callback() {
        auto &self = *instance_;
        const auto original = reinterpret_cast<VoidFn>(self.callbacks_[0]);
        // Keep the code gates mapped and unchanged until DFHack has joined
        // its console/hotkey threads and blocked RPC access itself.
        {
            std::lock_guard<std::recursive_mutex> lock(self.intent_mutex_);
            self.off_.store(false, std::memory_order_release);
            self.desired_.clear();
            self.desired_order_.clear();
        }
        original();
#ifdef _WIN32
        self.console_exit_.detach();
#endif
        self.native_stopped_ = true;
        self.shutdown();
    }

#ifdef _WIN32
    static bool console_shutdown_callback(void *console) {
        auto &self = *instance_;
        // Core has set its shutdown flag. Older consoles need input cancelled;
        // r3 must reach native shutdown first so its exit event wakes the reader.
        auto *core = read<void *>(self.core_slot_);
        if (core && self.console_ && self.console_(core) == console &&
                read<unsigned char>(core, 0x1548)) self.console_exit_.begin_shutdown();
        return reinterpret_cast<bool (*)(void *)>(self.console_shutdown_.trampoline)(console);
    }
#endif

public:
    bool ready() const noexcept { return ready_; }

    bool disabled() const noexcept {
        return off_.load(std::memory_order_acquire);
    }

    static int query_command_context(void *requested_console,
            DfcnDfhackCommandContextV1 *result) noexcept {
        const auto *frame = command_frame_;
        if (!command_context_ready_.load(std::memory_order_acquire) ||
                !result || result->size != sizeof(*result) ||
                result->version != DFCN_DFHACK_COMMAND_CONTEXT_VERSION) return 0;
        if (requested_console && (!frame || !frame->invocation ||
                !frame->local_console || frame->out != requested_console)) return 0;
        if (!command_thread_identity_)
            command_thread_identity_ = command_thread_sequence_.fetch_add(1, std::memory_order_relaxed) + 1;
        // The wire field is 32 bits. Decline rather than reuse an identity
        // if a process ever exhausts that space.
        if (!command_thread_identity_ || command_thread_identity_ > UINT32_MAX) return 0;
        *result = {sizeof(*result), DFCN_DFHACK_COMMAND_CONTEXT_VERSION,
            frame && frame->local_console ? DFCN_DFHACK_COMMAND_LOCAL_CONSOLE : 0,
            static_cast<uint32_t>(command_thread_identity_), frame ? frame->invocation : 0,
            frame ? frame->out : nullptr, frame ? frame->name : nullptr,
            frame ? frame->arguments : nullptr};
        return 1;
    }

    static int query_command_context_v2(void *requested_console,
            DfcnDfhackCommandContextV2 *result) noexcept {
        if (!result || result->size != sizeof(*result) ||
                result->version != DFCN_DFHACK_COMMAND_CONTEXT_VERSION_V2) return 0;
        DfcnDfhackCommandContextV1 leaf{};
        leaf.size = sizeof(leaf);
        leaf.version = DFCN_DFHACK_COMMAND_CONTEXT_VERSION;
        // Reuse precisely V1's readiness, leaf selection and resident thread
        // identity rules. No frame/native object is retained after this call.
        if (!query_command_context(requested_console, &leaf)) return 0;
        *result = {sizeof(*result), DFCN_DFHACK_COMMAND_CONTEXT_VERSION_V2,
            leaf.flags, leaf.thread_identity, leaf.invocation, leaf.out,
            leaf.name, leaf.arguments, command_entry_epoch_};
        return 1;
    }

    void initialize(Report report_function) {
        report_ = report_function;
        if (ready_ || attempted_) return;
#ifdef _WIN32
        module_ = GetModuleHandleW(L"dfhack.dll");
#else
        module_ = elf_loaded_module("libdfhack.so");
#endif
        if (!module_) return; // Optional installation, never load DFHack ourselves.
#ifdef _WIN32
        // The bootstrap can initialize this module before it has appended
        // DFHack's adapter to the callback chain. That is not an ABI failure;
        // leave the switch retryable when a later menu/shortcut requests it.
        if (!chain_bind()) return;
#endif
        attempted_ = true;
        instance_ = this;
        if (!prepare_hooks()) {
            report("ERROR", "Shift+F11 unavailable: installed DFHack native interfaces do not match the supported ABI");
            return;
        }
#ifdef _WIN32
        if (!console_exit_.initialize(module_, report_)) return;
        if (console_exit_.needs_shutdown_hook()) {
            // Only the older console needs our pre-shutdown cancellation.
            // Newer native wakeups must run before joining the reader; their
            // shutdown entry need not share the old detour's instructions.
            static constexpr unsigned char console_shutdown_prefix[] =
                {0x48,0x89,0x5c,0x24,0x08,0x57,0x48,0x83,0xec,0x20,0x48,0x8b,0x79,0x20};
            if (!console_shutdown_.prepare(symbol(module_, "?shutdown@Console@DFHack@@QEAA_NXZ"),
                    reinterpret_cast<void *>(&console_shutdown_callback), console_shutdown_prefix) ||
                    !console_shutdown_.write(true)) {
                console_shutdown_.write(false);
                console_exit_.detach();
                report("ERROR", "DFHack console shutdown hook installation failed");
                return;
            }
        }
#endif
        for (auto *hook : {&apply_, &remove_, &destroy_, &update_, &command_, &plugin_state_, &lua_state_, &load_scripts_}) {
            if (!hook->write(true)) {
                for (auto *installed : {&load_scripts_, &lua_state_, &plugin_state_, &command_, &update_, &destroy_, &remove_, &apply_})
                    installed->write(false);
#ifdef _WIN32
                console_shutdown_.write(false);
                console_exit_.detach();
#endif
                report("ERROR", "Shift+F11 unavailable: DFHack hook installation failed");
                return;
            }
        }
        if (!chain_write(true)) {
            chain_write(false);
            for (auto *hook : {&load_scripts_, &lua_state_, &plugin_state_, &command_, &update_, &destroy_, &remove_, &apply_})
                hook->write(false);
#ifdef _WIN32
            console_shutdown_.write(false);
            console_exit_.detach();
#endif
            report("ERROR", "Shift+F11 unavailable: DFHack native callback installation failed");
            return;
        }
        ready_ = true;
        command_context_ready_.store(true, std::memory_order_release);
        report("INFO", "Shift+F11 DFHack switch installed");
    }

    bool toggle() {
        if (!ready_) return false;
        requests_.fetch_add(1, std::memory_order_acq_rel);
        // Both the shortcut and settings menu run on the SDL event thread.
        // A Shift held while opening the menu may be released while off;
        // reset native modifier state before those releases can be hidden.
        SDL_Event reset{};
        reset.type = SDL_WINDOWEVENT;
        reset.window.event = SDL_WINDOWEVENT_FOCUS_GAINED;
        reinterpret_cast<EventFn>(callbacks_[3])(&reset);
        return true;
    }

    bool event(void *raw) {
        if (!ready_ || !raw) return false;
        const auto &event = *static_cast<const SDL_Event *>(raw);
        if (event.type == SDL_WINDOWEVENT && event.window.event == SDL_WINDOWEVENT_FOCUS_LOST)
            f11_consumed_ = false;
        if (event.type == SDL_KEYUP && event.key.keysym.sym == SDLK_F11 && f11_consumed_) {
            f11_consumed_ = false;
            return true;
        }
        if (event.type != SDL_KEYDOWN || event.key.keysym.sym != SDLK_F11) return false;
        // Another dfhooks callback can consume the release. A new physical
        // press must recover the latch, while held-key repeats stay consumed.
        if (!event.key.repeat) f11_consumed_ = false;
        if (f11_consumed_) return true;
        const auto mods = static_cast<SDL_Keymod>(event.key.keysym.mod);
        if (!(mods & KMOD_SHIFT) || (mods & (KMOD_CTRL | KMOD_ALT | KMOD_GUI))) return false;
        f11_consumed_ = true;
        if (!event.key.repeat) toggle();
        return true;
    }

    void shutdown() {
        if (!ready_ || !native_stopped_) return;
        command_context_ready_.store(false, std::memory_order_release);
        // DFHack's normal shutdown follows immediately. Do not re-enable
        // tools or replay deferred startup scripts while exiting the game.
        off_.store(false, std::memory_order_release);
        desired_.clear();
        desired_order_.clear();
        turbo_saved_ = turbo_owned_ = false;
        for (auto *hook : {&load_scripts_, &lua_state_, &plugin_state_, &command_, &update_, &destroy_, &remove_, &apply_})
            if (!hook->write(false)) report("ERROR", "DFHack hook could not detach during shutdown");
#ifdef _WIN32
        if (!console_shutdown_.write(false)) report("ERROR", "DFHack console shutdown hook could not detach");
#endif
        chain_write(false);
        ready_ = false;
        requests_.store(0, std::memory_order_release);
        f11_consumed_ = false;
    }
};

} // namespace dfcn::dfhack
