#include "core_api.h"
#include "core_module.h"
#include "runtime_paths.h"
#include "dfhack_toggle.h"
#include "classic_audio_guard.h"
#include <SDL2/SDL.h>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <cstdio>
#include <ctime>
#include <memory>
#include <mutex>
#include <string>
#include <thread>
#include <vector>

namespace {

static void log(const char *level, const std::string &message) {
    const auto filename = dfcn::runtime::path("dfcn.log");
#if defined(_WIN32)
    FILE *out = _wfopen(filename.c_str(), L"a");
#else
    FILE *out = std::fopen(dfcn::runtime::utf8(filename).c_str(), "a");
#endif
    if (!out) return;
    const std::time_t now = std::time(nullptr);
    std::tm tm{};
    dfcn::module::local_time(tm, now);
    char stamp[32]{};
    std::strftime(stamp, sizeof(stamp), "%Y-%m-%d %H:%M:%S", &tm);
    std::fprintf(out, "%s [%s] [loader] %s\n", stamp, level, message.c_str());
    std::fclose(out);
}

struct CoreImage {
    std::unique_ptr<dfcn::module::CoreModule> module;
    const DfcnCoreApi *api = nullptr;
    bool detached = true;
    bool ready = false;

    ~CoreImage() {
        // Even exceptional cleanup must keep any live callback mapped.
        if (module && !detached) module->keep_resident();
    }
};

// Explicit lifetime: a failed hook removal keeps exactly this active image
// resident until its callbacks can be safely detached.
CoreImage *core = nullptr;
bool initialized = false;
bool f5_consumed = false;
bool f10_consumed = false;
dfcn::dfhack::Toggle dfhack_toggle;
dfcn::audio::ClassicBankGuard classic_audio_guard;
std::uint64_t generation = 0;
// Keep source data across failed initialization / partial hook-removal retries.
// Cleared as soon as a new core takes ownership; never stores executable code.
std::vector<unsigned char> pending_captures;
enum class CoreLoadResult { Loaded, Deferred, Failed };
enum class CoreStopResult { Stopped, Deferred, Failed };

// Only the SDL event thread touches core state. The resident worker merely
// wakes that thread while DFHack retires its links on the simulation thread.
std::atomic_bool reload_requested{false};
std::atomic_bool reload_wakeup_queued{false};
std::atomic<Uint32> reload_retry_delay{100};
Uint32 reload_event_type = 0;
std::mutex reload_wakeup_mutex;
std::condition_variable_any reload_wakeup_cv;
std::jthread reload_wakeup_worker;
bool reload_enable = true;

static void loader_anchor() {}

static bool bind_api(CoreImage &image) {
    if (!image.module) return false;
    const auto get_api = reinterpret_cast<DfcnGetCoreApi>(image.module->symbol("dfcn_get_core_api"));
    image.api = get_api ? get_api(DFCN_CORE_ABI) : nullptr;
    const auto *api = image.api;
    if (!api || api->abi != DFCN_CORE_ABI || api->size != sizeof(DfcnCoreApi) ||
        !api->build || !api->initialize || !api->shutdown || !api->enabled ||
        !api->set_enabled || !api->reload_dictionary || !api->event ||
        !api->save_state || !api->restore_state) {
        log("ERROR", "Core ABI is incompatible with the resident loader");
        return false;
    }
    return true;
}

static bool capture_state(void *context, const void *data, std::size_t size) {
    auto &bytes = *static_cast<std::vector<unsigned char> *>(context);
    const auto *begin = static_cast<const unsigned char *>(data);
    bytes.assign(begin, begin + size);
    return true;
}

static CoreStopResult stop_core() {
    if (!core) return CoreStopResult::Stopped;
    core->ready = false;
    if (!core->detached && !core->api->shutdown()) {
        return CoreStopResult::Deferred;
    }
    core->detached = true;
    if (!core->module->close()) return CoreStopResult::Failed;
    delete core;
    core = nullptr;
    return CoreStopResult::Stopped;
}

static CoreLoadResult load_core(bool enable) {
    // Validate the new library and transfer only data before dismantling the
    // current hooks. Neither a partial build nor an ABI mismatch disables
    // the resident keyboard handler; the next Shift+F5 can always retry.
    auto prepared = dfcn::module::PreparedCore::prepare(
        dfcn::module::library_path(reinterpret_cast<void *>(&loader_anchor)), log);
    if (!prepared) return CoreLoadResult::Failed;
    auto next = std::make_unique<CoreImage>();
    if (prepared->has_image()) {
        next->module = prepared->acquire();
        if (!bind_api(*next)) return CoreLoadResult::Failed;
    }
    if (core && (core->ready || pending_captures.empty())) {
        std::vector<unsigned char> captures;
        if (!core->api->save_state(capture_state, &captures)) {
            log("ERROR", "Reload cancelled: native page text could not be transferred");
            return CoreLoadResult::Failed;
        }
        pending_captures = std::move(captures);
    }
    if (!next->module) {
        // An exclusive image needs the current module reference released first.
        const auto stopped = stop_core();
        if (stopped != CoreStopResult::Stopped)
            return stopped == CoreStopResult::Deferred ? CoreLoadResult::Deferred : CoreLoadResult::Failed;
        next->module = prepared->acquire();
        if (!bind_api(*next)) return CoreLoadResult::Failed;
    }
    if (!pending_captures.empty() &&
        !next->api->restore_state(pending_captures.data(), pending_captures.size())) {
        log("ERROR", "Reload cancelled: native page text could not be restored");
        return CoreLoadResult::Failed;
    }
    const auto stopped = stop_core();
    if (stopped != CoreStopResult::Stopped)
        return stopped == CoreStopResult::Deferred ? CoreLoadResult::Deferred : CoreLoadResult::Failed;
    core = next.release();
    core->detached = false;
    if (!core->api->initialize()) {
        log("ERROR", "New core initialization failed; Shift+F5 will retry the deployed library");
        core->api->set_enabled(false);
        stop_core();
        return CoreLoadResult::Failed;
    }
    core->ready = true;
    if (enable) core->api->set_enabled(true);
    std::vector<unsigned char>().swap(pending_captures);
    ++generation;
    if (core->module->reactivated()) {
        log("WARN", "Detached core reactivated with refreshed configuration and data; "
            "the runtime still retains this code image, so any deployed code changes remain pending");
    } else {
        log("INFO", "Core " + std::string(enable ? "hot-reloaded" : "loaded") +
            "; generation=" + std::to_string(generation) + "; build=" + core->api->build);
    }
    return CoreLoadResult::Loaded;
}

static void reload_wakeup_loop(std::stop_token stop) {
    std::unique_lock lock(reload_wakeup_mutex);
    while (!stop.stop_requested()) {
        if (reload_wakeup_cv.wait_for(lock, stop,
                std::chrono::milliseconds(reload_retry_delay.load(std::memory_order_relaxed)),
                [] { return !reload_requested.load(std::memory_order_acquire); })) return;
        if (stop.stop_requested()) return;
        lock.unlock();
        if (reload_requested.load(std::memory_order_acquire) &&
                !reload_wakeup_queued.exchange(true, std::memory_order_acq_rel)) {
            SDL_Event wake{};
            wake.type = reload_event_type;
            wake.user.data1 = &reload_requested;
            if (SDL_PushEvent(&wake) <= 0)
                reload_wakeup_queued.store(false, std::memory_order_release);
        }
        lock.lock();
    }
}

static void cancel_reload_request() {
    reload_requested.store(false, std::memory_order_release);
    reload_wakeup_worker.request_stop();
    reload_wakeup_cv.notify_all();
    if (reload_wakeup_worker.joinable()) reload_wakeup_worker.join();
    reload_wakeup_queued.store(false, std::memory_order_release);
}

static void finish_reload_request(CoreLoadResult result, bool enable) {
    if (result != CoreLoadResult::Deferred) {
        cancel_reload_request();
        return;
    }
    reload_enable = enable;
    if (reload_requested.load(std::memory_order_acquire)) {
        const auto delay = reload_retry_delay.load(std::memory_order_relaxed);
        reload_retry_delay.store(delay < 500 ? delay * 2 : 1000, std::memory_order_relaxed);
        return;
    }
    if (!reload_event_type) {
        const Uint32 registered = SDL_RegisterEvents(1);
        if (registered == static_cast<Uint32>(-1)) {
            log("ERROR", "Cannot schedule deferred core reload: " + std::string(SDL_GetError()));
            return;
        }
        reload_event_type = registered;
    }
    reload_retry_delay.store(100, std::memory_order_relaxed);
    reload_requested.store(true, std::memory_order_release);
    try {
        reload_wakeup_worker = std::jthread(reload_wakeup_loop);
    } catch (const std::exception &error) {
        cancel_reload_request();
        log("ERROR", "Cannot schedule deferred core reload: " + std::string(error.what()));
        return;
    }
    log("INFO", "Core reload pending native hook retirement; completion is scheduled on the SDL event thread");
}

static void retry_core_load() {
    // Do not reopen the deployed DLL or resnapshot live text on each wakeup.
    // Releasing PreparedCore after deferral also leaves deployment unlocked.
    const auto stopped = stop_core();
    if (stopped == CoreStopResult::Deferred) {
        finish_reload_request(CoreLoadResult::Deferred, reload_enable);
    } else {
        finish_reload_request(stopped == CoreStopResult::Stopped
            ? load_core(reload_enable) : CoreLoadResult::Failed, reload_enable);
    }
}

} // namespace

// The private drawing layer must stop presenting retained DFHack frames when
// the resident switch removes its render hooks. Keep this outside the core ABI.
DFCN_EXPORT int dfcn_is_dfhack_disabled_v1() noexcept {
    return dfhack_toggle.disabled() ? 1 : 0;
}

// Explicit menu action on the SDL event thread. No key event or core ABI
// ownership crosses this boundary; the native suspension callback applies it.
DFCN_EXPORT int dfcn_toggle_dfhack_v1() noexcept {
    if (!initialized) return 0;
    try {
        dfhack_toggle.initialize(log);
        if (dfhack_toggle.toggle()) return 1;
        log("WARN", "DFHack switch is unavailable: DFHack is absent or its native interface is not ready");
    } catch (...) {
        log("ERROR", "Could not request the DFHack switch");
    }
    return 0;
}

// Optional read-only command context lives independently of DfcnCoreApi.
// It touches only the resident loader's calling-thread POD frame, never the
// current core image, native strings, render state or game synchronization.
DFCN_EXPORT int dfcn_get_dfhack_command_context_v1(void *requested_console,
        DfcnDfhackCommandContextV1 *result) noexcept {
    return dfcn::dfhack::Toggle::query_command_context(requested_console, result);
}

DFCN_EXPORT int dfcn_get_dfhack_command_context_v2(void *requested_console,
        DfcnDfhackCommandContextV2 *result) noexcept {
    return dfcn::dfhack::Toggle::query_command_context_v2(requested_console, result);
}

DFCN_EXPORT void dfhooks_init() {
    if (initialized) return;
    if (!dfcn::module::acquire_guard(log)) return;
    initialized = true;
    classic_audio_guard.initialize(log);
    try {
        log("INFO", "Resident hot-reload loader initialized");
        dfhack_toggle.initialize(log);
        finish_reload_request(load_core(false), false);
    } catch (...) {
        log("ERROR", "Core load failed; Shift+F5 remains available to retry");
    }
}

DFCN_EXPORT void dfhooks_shutdown() {
    if (!initialized) return;
    initialized = false;
    classic_audio_guard.shutdown();
    cancel_reload_request();
    f5_consumed = false;
    f10_consumed = false;
    try {
        dfhack_toggle.shutdown();
        stop_core();
    } catch (...) {
        log("ERROR", "Core shutdown failed; retaining its active mapping");
    }
    if (!core) dfcn::module::release_guard();
}

// These callbacks are intentionally inert.
// In particular hooks_update can run on DF's simulation thread. Do not read
// or dispatch core pointers here without adding a quiescence protocol.
DFCN_EXPORT void dfhooks_update() {}
DFCN_EXPORT void dfhooks_prerender() {}
DFCN_EXPORT bool dfhooks_ncurses_key(int) { return false; }
DFCN_EXPORT void dfhooks_sdl_loop() {}

DFCN_EXPORT bool dfhooks_sdl_event(void *raw_event) {
    if (!initialized || !raw_event) return false;
    const auto &event = *static_cast<const SDL_Event *>(raw_event);
    if (reload_event_type && event.type == reload_event_type && event.user.data1 == &reload_requested) {
        reload_wakeup_queued.store(false, std::memory_order_release);
        if (reload_requested.load(std::memory_order_acquire)) {
            try {
                retry_core_load();
            } catch (...) {
                cancel_reload_request();
                log("ERROR", "Deferred core reload failed; Shift+F5 can retry loading the deployed core");
            }
        }
        return true;
    }
    if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_F11 && !event.key.repeat) {
        const auto mods = static_cast<SDL_Keymod>(event.key.keysym.mod);
        if ((mods & KMOD_SHIFT) && !(mods & (KMOD_CTRL | KMOD_ALT | KMOD_GUI)))
            dfhack_toggle.initialize(log);
    }
    if (dfhack_toggle.event(raw_event)) return true;
    if (event.type == SDL_WINDOWEVENT && event.window.event == SDL_WINDOWEVENT_FOCUS_LOST) {
        f5_consumed = false;
        f10_consumed = false;
    }
    if (event.type == SDL_KEYUP && event.key.keysym.sym == SDLK_F5 && f5_consumed) {
        f5_consumed = false;
        return true;
    }
    if (event.type == SDL_KEYUP && event.key.keysym.sym == SDLK_F10 && f10_consumed) {
        f10_consumed = false;
        return true;
    }
    if (event.type == SDL_KEYDOWN &&
        (event.key.keysym.sym == SDLK_F5 || event.key.keysym.sym == SDLK_F10)) {
        const bool reload_core = event.key.keysym.sym == SDLK_F5;
        bool &consumed = reload_core ? f5_consumed : f10_consumed;
        // A release can be consumed by an earlier dfhooks callback. A fresh
        // physical press must recover the latch without repeating held keys.
        if (!event.key.repeat) consumed = false;
        if (consumed) return true;
        const auto mods = static_cast<SDL_Keymod>(event.key.keysym.mod);
        if ((mods & KMOD_SHIFT) && !(mods & (KMOD_ALT | KMOD_GUI)) &&
            (!reload_core || !(mods & KMOD_CTRL))) {
            consumed = true;
            if (!event.key.repeat) {
                try {
                    if (mods & KMOD_CTRL) {
                        if (core && core->ready) core->api->reload_dictionary();
                    } else if (core && core->ready && core->api->enabled()) {
                        core->api->set_enabled(false);
                    } else if (reload_core) {
                        // enablerst::eventLoop_SDL pauses the simulation BEFORE
                        // hooks_sdl_event and is itself the SDL render thread.
                        // No core render/capture callback is on either stack.
                        // Never unload from sdl_loop (simulation resumed).
                        if (reload_requested.load(std::memory_order_acquire)) retry_core_load();
                        else finish_reload_request(load_core(true), true);
                    } else if (core && core->ready) {
                        // Shift+F10 only resumes the current core and its data.
                        core->api->set_enabled(true);
                    } else {
                        log("ERROR", "Cannot enable translation without a ready core; Shift+F5 reloads the deployed library");
                    }
                } catch (...) {
                    cancel_reload_request();
                    log("ERROR", "Hotkey operation failed; Shift+F5 can retry loading the deployed core");
                }
            }
            return true;
        }
    }
    bool consumed = false;
    try {
        consumed = core && core->ready ? core->api->event(raw_event) : false;
    } catch (...) {
        log("ERROR", "Core event handler threw an exception");
        return false;
    }
    // A menu action runs inside the core callback. Consume its data-only
    // request only after that callback has returned, so unloading can never
    // retire an image while its event handler is still on this thread's stack.
    constexpr const char *menu_dfhack_hint = "DFCN_SETTINGS_MENU_TOGGLE_DFHACK";
    if (SDL_GetHintBoolean(menu_dfhack_hint, SDL_FALSE) == SDL_TRUE) {
        if (SDL_SetHintWithPriority(menu_dfhack_hint, "0", SDL_HINT_OVERRIDE) != SDL_TRUE) {
            log("ERROR", "Cannot consume settings menu DFHack toggle request");
            return true;
        }
        dfcn_toggle_dfhack_v1();
        consumed = true;
    }
    constexpr const char *menu_reload_hint = "DFCN_SETTINGS_MENU_RELOAD_CORE";
    if (SDL_GetHintBoolean(menu_reload_hint, SDL_FALSE) != SDL_TRUE) return consumed;
    if (SDL_SetHintWithPriority(menu_reload_hint, "0", SDL_HINT_OVERRIDE) != SDL_TRUE) {
        log("ERROR", "Cannot consume settings menu core reload request");
        return true;
    }
    try {
        if (reload_requested.load(std::memory_order_acquire)) {
            reload_enable = true;
            retry_core_load();
        } else {
            finish_reload_request(load_core(true), true);
        }
    } catch (...) {
        cancel_reload_request();
        log("ERROR", "Settings menu core reload failed; Shift+F5 can retry loading the deployed core");
    }
    return true;
}
