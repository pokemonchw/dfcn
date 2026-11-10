#include "core_api.h"
#include "runtime_paths.h"
#include "dfhack_toggle.h"

#include <cstdio>
#include <ctime>
#include <string>

namespace {

void helper_anchor() {}

bool keep_helper_resident() noexcept {
    // Pin before publishing any callback into DFHack. The reloadable core may
    // release its lookup handle, but these callbacks and their TLS must live
    // until DFHack completes its own native shutdown chain.
    static const bool pinned = [] {
#ifdef _WIN32
        HMODULE module = nullptr;
        return GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
            GET_MODULE_HANDLE_EX_FLAG_PIN,
            reinterpret_cast<LPCWSTR>(&helper_anchor), &module) != FALSE;
#else
        Dl_info owner{};
        if (!dladdr(reinterpret_cast<void *>(&helper_anchor), &owner) || !owner.dli_fname)
            return false;
        // This reference is intentionally retained for the process lifetime.
        return dlopen(owner.dli_fname, RTLD_NOW | RTLD_NODELETE) != nullptr;
#endif
    }();
    return pinned;
}

void report(const char *level, const std::string &message) noexcept {
    try {
        const auto filename = dfcn::runtime::path("dfcn.log");
#ifdef _WIN32
        FILE *out = _wfopen(filename.c_str(), L"a");
#else
        FILE *out = std::fopen(dfcn::runtime::utf8(filename).c_str(), "a");
#endif
        if (!out) return;
        const std::time_t now = std::time(nullptr);
        std::tm tm{};
#ifdef _WIN32
        localtime_s(&tm, &now);
#else
        localtime_r(&now, &tm);
#endif
        char stamp[32]{};
        std::strftime(stamp, sizeof(stamp), "%Y-%m-%d %H:%M:%S", &tm);
        std::fprintf(out, "%s [%s] [dfhack-switch] %s\n", stamp, level, message.c_str());
        std::fclose(out);
    } catch (...) {
        // Native callbacks must not fail because a diagnostic path is absent.
    }
}

dfcn::dfhack::Toggle &resident_switch() {
    // Do not register a DLL CRT destructor. DFHack owns the shutdown order,
    // and it can still return through these objects during process teardown.
    static auto *state = new dfcn::dfhack::Toggle;
    return *state;
}

} // namespace

DFCN_EXPORT int dfcn_dfhack_switch_initialize_v1() noexcept {
    try {
        if (!keep_helper_resident()) {
            report("ERROR", "Cannot retain the DFHack switch helper for native callbacks");
            return 0;
        }
        auto &state = resident_switch();
        state.initialize(report);
        return state.ready() ? 1 : 0;
    } catch (...) {
        report("ERROR", "Could not initialize the DFHack switch helper");
        return 0;
    }
}

DFCN_EXPORT int dfcn_dfhack_switch_toggle_v1() noexcept {
    if (!dfcn_dfhack_switch_initialize_v1()) return 0;
    try {
        return resident_switch().toggle() ? 1 : 0;
    } catch (...) {
        report("ERROR", "Could not request the DFHack switch");
        return 0;
    }
}

DFCN_EXPORT int dfcn_dfhack_switch_event_v1(void *event) noexcept {
    if (!event || !dfcn_dfhack_switch_initialize_v1()) return 0;
    try {
        return resident_switch().event(event) ? 1 : 0;
    } catch (...) {
        report("ERROR", "Could not process a DFHack switch key event");
        return 0;
    }
}

DFCN_EXPORT int dfcn_dfhack_switch_disabled_v1() noexcept {
    try {
        return resident_switch().disabled() ? 1 : 0;
    } catch (...) {
        return 0;
    }
}

DFCN_EXPORT int dfcn_get_dfhack_command_context_v1(void *requested_console,
        DfcnDfhackCommandContextV1 *result) noexcept {
    return dfcn::dfhack::Toggle::query_command_context(requested_console, result);
}

DFCN_EXPORT int dfcn_get_dfhack_command_context_v2(void *requested_console,
        DfcnDfhackCommandContextV2 *result) noexcept {
    return dfcn::dfhack::Toggle::query_command_context_v2(requested_console, result);
}
