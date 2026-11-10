#pragma once

#ifdef _WIN32
#include "dfhack_command_context.h"
#include "runtime_paths.h"
#include <SDL2/SDL.h>
#include <atomic>

namespace dfcn::dfhack::switch_client {

struct Api {
    HMODULE module = nullptr;
    int (*initialize)() noexcept = nullptr;
    int (*toggle)() noexcept = nullptr;
    int (*event)(void *) noexcept = nullptr;
    int (*disabled)() noexcept = nullptr;
    DfcnQueryDfhackCommandContextV1 query = nullptr;
    DfcnQueryDfhackCommandContextV2 query_v2 = nullptr;
};

// Only the SDL thread binds the helper. Render and command observers read an
// immutable API after publication; no callback points back into this core.
inline Api helper_api;
inline std::atomic<const Api *> active_api{nullptr};

inline bool resident_ready() noexcept {
    const auto resident = GetModuleHandleW(L"dfhooks_dfcn.dll");
    const auto query = resident ? reinterpret_cast<DfcnQueryDfhackCommandContextV1>(
        GetProcAddress(resident, "dfcn_get_dfhack_command_context_v1")) : nullptr;
    DfcnDfhackCommandContextV1 context{};
    context.size = sizeof(context);
    context.version = DFCN_DFHACK_COMMAND_CONTEXT_VERSION;
    return query && query(nullptr, &context) != 0;
}

inline bool initialize() noexcept {
    if (active_api.load(std::memory_order_acquire)) return true;
    if (!GetModuleHandleW(L"dfhack.dll")) return false;
    auto helper = GetModuleHandleW(L"dfcn_dfhack_switch.dll");
    // A working resident switch keeps ownership. A rejected initialization
    // must not leave the reloadable core without a recovery path.
    if (!helper && resident_ready()) return true;
    bool acquired = false;
    try {
        if (!helper) {
            helper = LoadLibraryExW(runtime::path("dfcn_dfhack_switch.dll").c_str(), nullptr,
                LOAD_LIBRARY_SEARCH_DLL_LOAD_DIR | LOAD_LIBRARY_SEARCH_DEFAULT_DIRS);
            acquired = helper != nullptr;
        }
        if (!helper) return false;
        Api api;
        api.module = helper;
        api.initialize = reinterpret_cast<decltype(api.initialize)>(GetProcAddress(helper,
            "dfcn_dfhack_switch_initialize_v1"));
        api.toggle = reinterpret_cast<decltype(api.toggle)>(GetProcAddress(helper,
            "dfcn_dfhack_switch_toggle_v1"));
        api.event = reinterpret_cast<decltype(api.event)>(GetProcAddress(helper,
            "dfcn_dfhack_switch_event_v1"));
        api.disabled = reinterpret_cast<decltype(api.disabled)>(GetProcAddress(helper,
            "dfcn_dfhack_switch_disabled_v1"));
        api.query = reinterpret_cast<decltype(api.query)>(GetProcAddress(helper,
            "dfcn_get_dfhack_command_context_v1"));
        api.query_v2 = reinterpret_cast<decltype(api.query_v2)>(GetProcAddress(helper,
            "dfcn_get_dfhack_command_context_v2"));
        const bool ready = api.initialize && api.toggle && api.event && api.disabled &&
            api.query && api.query_v2 && api.initialize();
        if (ready) {
            // initialize pins the helper before installing any native hook.
            helper_api = api;
            active_api.store(&helper_api, std::memory_order_release);
        }
        if (acquired) FreeLibrary(helper);
        return ready;
    } catch (...) {
        if (acquired) FreeLibrary(helper);
        return false;
    }
}

inline bool toggle() noexcept {
    initialize();
    const auto *api = active_api.load(std::memory_order_acquire);
    return api && api->toggle() != 0;
}

inline bool event(void *raw) noexcept {
    if (!raw) return false;
    const auto &event = *static_cast<const SDL_Event *>(raw);
    if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_F11 && !event.key.repeat) {
        const auto mods = static_cast<SDL_Keymod>(event.key.keysym.mod);
        if ((mods & KMOD_SHIFT) && !(mods & (KMOD_CTRL | KMOD_ALT | KMOD_GUI))) initialize();
    }
    const auto *api = active_api.load(std::memory_order_acquire);
    return api && api->event(raw) != 0;
}

inline HMODULE command_owner() noexcept {
    const auto *api = active_api.load(std::memory_order_acquire);
    return api ? api->module : GetModuleHandleW(L"dfhooks_dfcn.dll");
}

// Observers can bind before a deferred helper becomes ready. Keep their
// cached function pointers stable while selecting the current owner here.
inline int query_command_context(void *console, DfcnDfhackCommandContextV1 *result) noexcept {
    if (const auto *api = active_api.load(std::memory_order_acquire))
        return api->query(console, result);
    static const auto query = [] {
        const auto resident = GetModuleHandleW(L"dfhooks_dfcn.dll");
        return resident ? reinterpret_cast<DfcnQueryDfhackCommandContextV1>(
            GetProcAddress(resident, "dfcn_get_dfhack_command_context_v1")) : nullptr;
    }();
    return query ? query(console, result) : 0;
}

inline int query_command_context_v2(void *console, DfcnDfhackCommandContextV2 *result) noexcept {
    if (const auto *api = active_api.load(std::memory_order_acquire))
        return api->query_v2(console, result);
    static const auto query = [] {
        const auto resident = GetModuleHandleW(L"dfhooks_dfcn.dll");
        return resident ? reinterpret_cast<DfcnQueryDfhackCommandContextV2>(
            GetProcAddress(resident, "dfcn_get_dfhack_command_context_v2")) : nullptr;
    }();
    return query ? query(console, result) : 0;
}

} // namespace dfcn::dfhack::switch_client
#endif
