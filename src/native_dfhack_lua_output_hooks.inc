// A short Lua::GetOutput boundary proves the producer before Console acquires
// its output lock. No Lua state, native string, or debug frame leaves it.
#include "dfhack_command_context.h"
#include "native_dfhack_item_print_ticket.h"

#ifndef _WIN32
#include "native_dfhack_gate_elf.inc"
#endif

struct NativeDfhackLuaState;
using NativeDfhackLuaCFunction = int (*)(NativeDfhackLuaState *);
// DFHack 53.16-r2/r3 depends/lua/include/lua.h, Lua 5.3.6, LUA_IDSIZE=60.
struct NativeDfhackLuaDebug {
    int event;
    const char *name, *namewhat, *what, *source;
    int currentline, linedefined, lastlinedefined;
    unsigned char nups, nparams;
    char isvararg, istailcall;
    char short_src[60];
    void *i_ci;
};
static_assert(sizeof(NativeDfhackLuaDebug) == 128);
static_assert(offsetof(NativeDfhackLuaDebug, i_ci) == 120);

struct NativeDfhackLuaOutputApi {
    int (*gettop)(NativeDfhackLuaState *) = nullptr;
    void (*settop)(NativeDfhackLuaState *, int) = nullptr;
    int (*checkstack)(NativeDfhackLuaState *, int) = nullptr;
    int (*type)(NativeDfhackLuaState *, int) = nullptr;
    int (*isinteger)(NativeDfhackLuaState *, int) = nullptr;
    int64_t (*tointegerx)(NativeDfhackLuaState *, int, int *) = nullptr;
    const char *(*tolstring)(NativeDfhackLuaState *, int, size_t *) = nullptr;
    NativeDfhackLuaCFunction (*tocfunction)(NativeDfhackLuaState *, int) = nullptr;
    int (*getstack)(NativeDfhackLuaState *, int, NativeDfhackLuaDebug *) = nullptr;
    int (*getinfo)(NativeDfhackLuaState *, const char *, NativeDfhackLuaDebug *) = nullptr;
    const char *(*getlocal)(NativeDfhackLuaState *, const NativeDfhackLuaDebug *, int) = nullptr;
    DfcnQueryDfhackCommandContextV1 query = nullptr;
    DfcnQueryDfhackCommandContextV2 query_v2 = nullptr;
    NativeDfhackLuaCFunction println = nullptr;
    std::string item_source;
    std::string wheelbarrow_source;
    std::string empty_bin_source;
    std::string workorder_source;
    std::string launcher_source;
};
static NativeDfhackLuaOutputApi g_native_dfhack_lua_output_api;
static std::atomic_bool g_native_dfhack_lua_output_bound{false};

// A core-owned map avoids registering a non-trivial thread_local destructor
// in the reloadable DLL. Every entry owns its bytes; out is identity only.
struct NativeDfhackItemPrintPending {
    uintptr_t out_identity = 0;
    uint64_t invocation = 0;
    uint64_t sequence = 0;
    uint64_t entry_epoch = 0;
    uint32_t thread_identity = 0;
    std::string source;
    NativeDfhackItemPrintTicket ticket;
    bool awaiting_newline = false;
    bool launcher_echo = false;
};
static std::mutex g_native_dfhack_item_print_mutex;
static std::atomic<uint64_t> g_native_dfhack_item_print_sequence{0};
static std::unordered_map<std::thread::id, NativeDfhackItemPrintPending>
    g_native_dfhack_item_print_pending;

using NativeDfhackLuaGetOutputFn = void *(*)(NativeDfhackLuaState *);
struct alignas(8) NativeDfhackLuaOutputContext {
    uintptr_t helper = 0;
    uint32_t active = 0;
    uint32_t reserved = 0;
    NativeDfhackLuaGetOutputFn original = nullptr;
};
static_assert(offsetof(NativeDfhackLuaOutputContext, helper) == 0);
static_assert(offsetof(NativeDfhackLuaOutputContext, active) == 8);
static_assert(offsetof(NativeDfhackLuaOutputContext, original) == 16);
static NativeDfhackLuaOutputContext *g_native_dfhack_lua_output_context = nullptr;
static NativeEntryHook g_native_dfhack_lua_output_hook;
static std::mutex g_native_dfhack_lua_output_hook_mutex;

static bool native_dfhack_lua_memory(const void *pointer, size_t size) noexcept {
    if (!pointer || !size) return false;
    const auto first = reinterpret_cast<uintptr_t>(pointer);
    if (size > UINTPTR_MAX - first) return false;
    uintptr_t cursor = first;
    const uintptr_t end = first + size;
    while (cursor < end) {
#ifdef _WIN32
        MEMORY_BASIC_INFORMATION region{};
        if (!VirtualQuery(reinterpret_cast<const void *>(cursor), &region, sizeof(region)) ||
                region.State != MEM_COMMIT || (region.Protect & (PAGE_GUARD | PAGE_NOACCESS)))
            return false;
        const uintptr_t base = reinterpret_cast<uintptr_t>(region.BaseAddress);
        if (base > cursor || region.RegionSize > UINTPTR_MAX - base ||
                base + region.RegionSize <= cursor) return false;
        cursor = std::min(end, base + region.RegionSize);
#else
        const auto page = native_patch_page_size();
        if (!page) return false;
        const size_t span = std::min<size_t>(end - cursor, page - cursor % page);
        NativePatchProtection protection = 0;
        unsigned long error = 0;
        if (!native_patch_page_protection(cursor, span, protection, error) ||
                !native_patch_readable(protection)) return false;
        cursor += span;
#endif
    }
    return true;
}

static std::optional<std::string_view> native_dfhack_lua_text(const char *text,
        size_t maximum) noexcept {
    if (!text) return std::nullopt;
    size_t at = 0;
    while (at < maximum) {
        const uintptr_t cursor = reinterpret_cast<uintptr_t>(text) + at;
        if (cursor < reinterpret_cast<uintptr_t>(text)) return std::nullopt;
#ifdef _WIN32
        MEMORY_BASIC_INFORMATION region{};
        if (!VirtualQuery(reinterpret_cast<const void *>(cursor), &region, sizeof(region)) ||
                region.State != MEM_COMMIT || (region.Protect & (PAGE_GUARD | PAGE_NOACCESS)))
            return std::nullopt;
        const uintptr_t base = reinterpret_cast<uintptr_t>(region.BaseAddress);
        if (base > cursor || region.RegionSize > UINTPTR_MAX - base ||
                base + region.RegionSize <= cursor) return std::nullopt;
        const size_t size = std::min(maximum - at, size_t(base + region.RegionSize - cursor));
#else
        const auto page = native_patch_page_size();
        if (!page) return std::nullopt;
        const size_t size = std::min(maximum - at, page - cursor % page);
        if (!native_dfhack_lua_memory(text + at, size)) return std::nullopt;
#endif
        if (const auto *last = static_cast<const char *>(std::memchr(text + at, 0, size)))
            return std::string_view(text, size_t(last - text));
        at += size;
    }
    return std::nullopt;
}

static std::string native_dfhack_lua_source_key(std::string_view source) {
    if (!source.empty() && source.front() == '@') source.remove_prefix(1);
    std::string result(source);
    for (char &ch : result) {
        if (ch == '\\') ch = '/';
        else if (ch >= 'A' && ch <= 'Z') ch += 'a' - 'A';
    }
    return result;
}

static bool native_dfhack_item_print_shape(std::string_view source,
        NativeDfhackItemPrintTicket &ticket) {
    // item.lua:331 formats a positive description count with "%4d %s".
    // Preserve its exact padding and UTF-8 description, including quality
    // glyphs and names. Neither enum tables nor arbitrary numeric rows enter.
    if (source.empty() || source.size() > 65536 ||
            std::any_of(source.begin(), source.end(), [](unsigned char ch) {
                return ch < ' ' || ch == 0x7f;
            })) return false;
    size_t first = 0;
    while (first < source.size() && source[first] == ' ') ++first;
    if (first > 3 || first == source.size() || source[first] < '1' || source[first] > '9')
        return false;
    size_t end = first;
    while (end < source.size() && source[end] >= '0' && source[end] <= '9') ++end;
    const size_t digits = end - first;
    if (!digits || digits > 19 || first != (digits < 4 ? 4 - digits : 0) ||
            end >= source.size() || source[end] != ' ' || end + 1 >= source.size()) return false;
    ticket.prefix.assign(source.substr(0, end + 1));
    ticket.caption.assign(source.substr(end + 1));
    return true;
}

#include "native_dfhack_item_report_capture.inc"

static bool native_dfhack_same_entry_epoch(uint64_t expected) {
    if (!expected) return true;
    const auto query = g_native_dfhack_lua_output_api.query_v2;
    DfcnDfhackCommandContextV2 command{};
    command.size = sizeof(command);
    command.version = DFCN_DFHACK_COMMAND_CONTEXT_VERSION_V2;
    return query && query(nullptr, &command) && command.entry_epoch == expected;
}

static void native_dfhack_capture_item_print(NativeDfhackLuaState *state,
        void *out) noexcept {
    NativeInputCallbackScope callback;
    const auto thread = std::this_thread::get_id();
    bool observed_silent_report = false;
    struct SilentReportBoundary {
        bool &observed;
        ~SilentReportBoundary() {
            if (!observed) {
                try { native_dfhack_drop_silent_item_report(); } catch (...) {}
            }
        }
    } report_boundary{observed_silent_report};
    try {
        // A direct print must be consumed before the next getter. A complete
        // GUI envelope belongs to its native proxy batch instead: same-proxy
        // bookkeeping getters during onDismiss/SafeCall cannot consume it.
        // A different stream or invocation invalidates that proof as well.
        {
            std::lock_guard<std::mutex> lock(g_native_dfhack_item_print_mutex);
            const auto found = g_native_dfhack_item_print_pending.find(thread);
            if (found != g_native_dfhack_item_print_pending.end()) {
                const auto &pending = found->second;
                bool keep = false;
                if (pending.launcher_echo && state && out && g_overlay.translation_enabled() &&
                        g_native_dfhack_lua_output_bound.load(std::memory_order_acquire)) {
                    const auto query = g_native_dfhack_lua_output_api.query;
                    DfcnDfhackCommandContextV1 command{};
                    command.size = sizeof(command);
                    command.version = DFCN_DFHACK_COMMAND_CONTEXT_VERSION;
                    keep = query && query(nullptr, &command) && command.thread_identity &&
                        command.thread_identity == pending.thread_identity &&
                        command.invocation == pending.invocation &&
                        native_dfhack_same_entry_epoch(pending.entry_epoch) &&
                        pending.out_identity == reinterpret_cast<uintptr_t>(out) &&
                        (!command.invocation || ((command.flags & DFCN_DFHACK_COMMAND_LOCAL_CONSOLE) &&
                            command.out == out));
                }
                if (!keep) g_native_dfhack_item_print_pending.erase(found);
            }
        }
        const auto &api = g_native_dfhack_lua_output_api;
        if (!g_native_dfhack_lua_output_bound.load(std::memory_order_acquire) ||
                !state || !out || !api.query || !g_overlay.translation_enabled()) return;
        // lua_print_fmt leaves its formatter after the actual print arguments.
        // Zero-argument separators, two-argument counts, one-argument
        // captions and the three-argument milk row are distinct.
        const int top = api.gettop(state);
        if (top < 1 || top > 4 || api.type(state, top) != 6 ||
                !api.checkstack(state, 4)) return;
        struct RestoreStack {
            NativeDfhackLuaState *state;
            int top;
            void (*settop)(NativeDfhackLuaState *, int);
            ~RestoreStack() { settop(state, top); }
        } restore{state, top, api.settop};
        NativeDfhackLuaDebug current{}, caller{};
        if (!api.getstack(state, 0, &current) || !api.getinfo(state, "Sf", &current) ||
                api.tocfunction(state, -1) != api.println) return;
        api.settop(state, top);
        // The adjacent Lua frame must be this installation's actual print
        // producer. A command/function name alone is never enough.
        if (!api.getstack(state, 1, &caller) || !api.getinfo(state, "Slu", &caller) ||
                caller.isvararg) return;
        const auto source_file = native_dfhack_lua_text(caller.source, 32768);
        if (!source_file || source_file->empty() || source_file->front() != '@') return;
        const auto source_key = native_dfhack_lua_source_key(*source_file);
        const auto alias_report = native_dfhack_observe_silent_item_report(
            state, out, top, caller, source_key);
        observed_silent_report = true;
        const bool item = top == 2 && source_key == api.item_source && caller.currentline == 331 &&
            caller.linedefined == 241 && caller.lastlinedefined == 335 && caller.nparams == 4;
        const bool wheelbarrow = top == 2 && source_key == api.wheelbarrow_source && caller.currentline == 23 &&
            caller.linedefined == 17 && caller.lastlinedefined == 35 && caller.nparams == 2;
        const bool empty_bin = top == 2 && source_key == api.empty_bin_source && caller.currentline == 26 &&
            caller.linedefined == 15 && caller.lastlinedefined == 34 && caller.nparams == 1;
        const bool milk = top == 4 && source_key == api.workorder_source && caller.currentline == 587 &&
            caller.linedefined == 577 && caller.lastlinedefined == 593 && caller.nparams == 0;
        const bool item_footer = top == 3 && source_key == api.item_source &&
            (caller.currentline == 346 || caller.currentline == 348 || caller.currentline == 350) &&
            caller.linedefined == 340 && caller.lastlinedefined == 364 && caller.nparams == 3;
        const bool item_header = top == 2 && source_key == api.item_source && caller.currentline == 358 &&
            caller.linedefined == 340 && caller.lastlinedefined == 364 && caller.nparams == 3;
        const bool launcher = top == 2 && source_key == api.launcher_source && caller.currentline == 1155 &&
            caller.linedefined == 1126 && caller.lastlinedefined == 1182 && caller.nparams == 3;
        if (!item && !wheelbarrow && !empty_bin && !milk && !item_footer && !item_header && !launcher)
            return;
        DfcnDfhackCommandContextV1 command{};
        command.size = sizeof(command);
        command.version = DFCN_DFHACK_COMMAND_CONTEXT_VERSION;
        if (launcher) {
            // No active command is normal for local GUI input. A real
            // non-local leaf remains a barrier, even if it prints to Console.
            if (!api.query(nullptr, &command) || !command.thread_identity ||
                    (command.invocation && (!(command.flags & DFCN_DFHACK_COMMAND_LOCAL_CONSOLE) ||
                        command.out != out))) return;
        } else if (!api.query(out, &command) || command.out != out || !command.invocation ||
                !(command.flags & DFCN_DFHACK_COMMAND_LOCAL_CONSOLE)) return;
        NativeDfhackItemPrintPending pending;
        std::string formatted_source;
        size_t length = 0;
        const char *bytes = nullptr;
        if (milk) {
            // getRaceName() is the RAW creature_id, not a species caption.
            // Read only native integers and strings; converting a numeric
            // argument with lua_tolstring would mutate the real print stack.
            if (!api.isinteger(state, 1) || api.type(state, 2) != 4 || api.type(state, 3) != 4)
                return;
            int is_integer = 0;
            const int64_t id = api.tointegerx(state, 1, &is_integer);
            if (!is_integer || id < 0 || id > INT32_MAX) return;
            size_t race_size = 0, status_size = 0;
            const char *race_bytes = api.tolstring(state, 2, &race_size);
            const char *status_bytes = api.tolstring(state, 3, &status_size);
            constexpr std::string_view status = "not milked recently";
            if (!race_bytes || !race_size || race_size > 65536 || !status_bytes ||
                    std::string_view(status_bytes, status_size) != status) return;
            const std::string_view race(race_bytes, race_size);
            if (std::any_of(race.begin(), race.end(), [](unsigned char ch) {
                    return ch < ' ' || ch == 0x7f;
                })) return;
            pending.ticket.prefix = std::to_string(id) + "\t" + std::string(race) + "\t";
            pending.ticket.caption = status;
            pending.ticket.literal_scope = "DFHack GUI Workorder milk: ";
            formatted_source = pending.ticket.prefix + pending.ticket.caption;
            bytes = formatted_source.data();
            length = formatted_source.size();
        } else if (item_footer) {
            if (!api.isinteger(state, 1) || api.type(state, 2) != 4) return;
            int is_integer = 0;
            const int64_t count = api.tointegerx(state, 1, &is_integer);
            if (!is_integer || count < 0) return;
            size_t suffix_size = 0;
            const char *suffix_bytes = api.tolstring(state, 2, &suffix_size);
            const std::string_view suffix = caller.currentline == 346
                ? "items matched the filter options"
                : caller.currentline == 348 ? "items would be modified" : "items were modified";
            if (!suffix_bytes || std::string_view(suffix_bytes, suffix_size) != suffix) return;
            pending.ticket.prefix = std::to_string(count) + "\t";
            pending.ticket.caption = suffix;
            pending.ticket.literal_scope = "DFHack GUI Item footer: ";
            formatted_source = pending.ticket.prefix + pending.ticket.caption;
            bytes = formatted_source.data();
            length = formatted_source.size();
        } else {
            if (api.type(state, 1) != 4) return;
            bytes = api.tolstring(state, 1, &length);
        }
        if (!bytes || !length || length > (launcher ? 1048576 : 65536)) return;
        const std::string_view source(bytes, length);
        if (launcher) {
            const char *name = api.getlocal(state, &caller, 3);
            if (!name || std::strcmp(name, "command") || api.type(state, -1) != 4) return;
            size_t command_length = 0;
            const char *command_bytes = api.tolstring(state, -1, &command_length);
            if (!command_bytes || !command_length || command_length > 65536) return;
            pending.ticket.launcher_command.assign(command_bytes, command_length);
            api.settop(state, top);
            name = api.getlocal(state, &caller, 4);
            if (!name || std::strcmp(name, "output") || api.type(state, -1) != 4) return;
            size_t output_length = 0;
            const char *output_bytes = api.tolstring(state, -1, &output_length);
            if (!output_bytes || output_length != length || std::memcmp(output_bytes, bytes, length) ||
                    (!alias_report && !dfhack_item_output_options(pending.ticket.launcher_command, false)))
                return;
            if (alias_report) {
                pending.ticket.report_command = alias_report->parser_command;
                pending.entry_epoch = alias_report->entry_epoch;
            }
            pending.launcher_echo = true;
            // GUI input prints to a color_ostream_proxy. Its destructor later
            // sends the metadata and body together to Console, with adjacent
            // same-color prints sometimes merged into one native fragment.
            pending.ticket.prefix = "Output from command run from gui/launcher:\n> " +
                pending.ticket.launcher_command + "\n\n";
            pending.ticket.caption.assign(source);
            pending.ticket.ending = "\n";
        } else if (item) {
            if (!native_dfhack_item_print_shape(source, pending.ticket)) return;
        } else if (item_header) {
            if (source != "\nTYPE           COUNT\n") return;
            pending.ticket.prefix = "\n";
            pending.ticket.caption = "TYPE           COUNT";
            pending.ticket.ending = "\n";
            pending.ticket.literal_scope = "DFHack GUI Item type counts: ";
        } else if (!milk && !item_footer) {
            // emptyContainedItems() and emptyContainer() print this child
            // directly, without df2console. The actual producer proves the
            // field without a preceding heading, including recursive bins.
            // Other indented output is never claimed.
            if (!source.starts_with("  ") || source.size() <= 2 ||
                    std::any_of(source.begin(), source.end(), [](unsigned char ch) {
                        return (ch < ' ' && ch != 0x0f && ch != 0x10 &&
                            ch != 0x11 && ch != 0x13) || ch == 0x7f;
                    })) return;
            pending.ticket.prefix = "  ";
            pending.ticket.caption = native_text_to_utf8(source.substr(2));
        }
        pending.out_identity = reinterpret_cast<uintptr_t>(out);
        pending.invocation = command.invocation;
        pending.sequence = g_native_dfhack_item_print_sequence.fetch_add(1, std::memory_order_relaxed) + 1;
        pending.thread_identity = command.thread_identity;
        if (launcher && !pending.entry_epoch && api.query_v2) {
            DfcnDfhackCommandContextV2 epoch{};
            epoch.size = sizeof(epoch);
            epoch.version = DFCN_DFHACK_COMMAND_CONTEXT_VERSION_V2;
            if (!api.query_v2(nullptr, &epoch) || epoch.thread_identity != command.thread_identity ||
                    epoch.invocation != command.invocation) return;
            pending.entry_epoch = epoch.entry_epoch;
        }
        if (launcher)
            pending.source = pending.ticket.prefix + pending.ticket.caption + pending.ticket.ending;
        else pending.source.assign(source);
        std::lock_guard<std::mutex> lock(g_native_dfhack_item_print_mutex);
        // Threads that finish before consuming their last ticket must not
        // grow this core-owned cache indefinitely. Dropping a ticket only
        // retains native output; no original print was ever held back.
        constexpr size_t maximum_threads = 512, maximum_cache_bytes = 33554432;
        const auto owned_bytes = [](const NativeDfhackItemPrintPending &value) {
            return value.source.size() + value.ticket.caption.size() + value.ticket.prefix.size() +
                value.ticket.ending.size() + value.ticket.launcher_command.size() +
                value.ticket.literal_scope.size() + value.ticket.report_command.size();
        };
        size_t cache_bytes = owned_bytes(pending);
        for (const auto &[id, value] : g_native_dfhack_item_print_pending)
            cache_bytes += owned_bytes(value);
        while (g_native_dfhack_item_print_pending.size() >= maximum_threads ||
                cache_bytes > maximum_cache_bytes) {
            const auto oldest = std::min_element(g_native_dfhack_item_print_pending.begin(),
                g_native_dfhack_item_print_pending.end(), [](const auto &left, const auto &right) {
                    return left.second.sequence < right.second.sequence;
                });
            if (oldest == g_native_dfhack_item_print_pending.end()) return;
            cache_bytes -= owned_bytes(oldest->second);
            g_native_dfhack_item_print_pending.erase(oldest);
        }
        g_native_dfhack_item_print_pending.insert_or_assign(thread, std::move(pending));
    } catch (...) {
        // Capture is optional and must not change the native getter, print
        // arguments, output stream, input state, or exception behavior.
        try {
            std::lock_guard<std::mutex> lock(g_native_dfhack_item_print_mutex);
            g_native_dfhack_item_print_pending.erase(thread);
        } catch (...) {}
    }
}

static std::optional<NativeDfhackItemPrintTicket> native_dfhack_take_item_print_ticket(
        void *console, std::string_view source) {
    NativeInputCallbackScope callback;
    if (!g_native_dfhack_lua_output_bound.load(std::memory_order_acquire)) return std::nullopt;
    auto &api = g_native_dfhack_lua_output_api;
    DfcnDfhackCommandContextV1 command{};
    command.size = sizeof(command);
    command.version = DFCN_DFHACK_COMMAND_CONTEXT_VERSION;
    const bool local = api.query && api.query(console, &command);
    DfcnDfhackCommandContextV1 leaf{};
    leaf.size = sizeof(leaf);
    leaf.version = DFCN_DFHACK_COMMAND_CONTEXT_VERSION;
    const bool leaf_known = api.query && api.query(nullptr, &leaf);
    std::lock_guard<std::mutex> lock(g_native_dfhack_item_print_mutex);
    const auto found = g_native_dfhack_item_print_pending.find(std::this_thread::get_id());
    if (found == g_native_dfhack_item_print_pending.end()) return std::nullopt;
    auto &pending = found->second;
    const bool owns_context = pending.launcher_echo
        ? leaf_known && leaf.thread_identity && leaf.thread_identity == pending.thread_identity &&
            leaf.invocation == pending.invocation && native_dfhack_same_entry_epoch(pending.entry_epoch) &&
            (!leaf.invocation ||
                ((leaf.flags & DFCN_DFHACK_COMMAND_LOCAL_CONSOLE) && leaf.out == console))
        : local && command.out == console && command.invocation == pending.invocation &&
            command.thread_identity == pending.thread_identity;
    if (pending.launcher_echo) {
        if (!owns_context) g_native_dfhack_item_print_pending.erase(found);
        // This proof belongs to the complete native proxy batch. The first
        // metadata fragment is not the report, and out_identity is a proxy
        // identity, never the eventual Console target or a borrowed pointer.
        return std::nullopt;
    }
    if (!owns_context || pending.out_identity != reinterpret_cast<uintptr_t>(console)) {
        g_native_dfhack_item_print_pending.erase(found);
        return std::nullopt;
    }
    if (pending.awaiting_newline) {
        g_native_dfhack_item_print_pending.erase(found);
        // ostream str and endl can arrive as separate add_text fragments.
        // This second ticket has no caption: forward the newline immediately
        // through the original sink and exclude it from generic translation.
        if (source == "\n") return NativeDfhackItemPrintTicket{{}, {}, "\n"};
        return std::nullopt;
    }
    const bool with_newline = source.size() == pending.source.size() + 1 &&
        source.back() == '\n' && source.substr(0, source.size() - 1) == pending.source;
    if (source != pending.source && !with_newline) {
        g_native_dfhack_item_print_pending.erase(found);
        return std::nullopt;
    }
    auto ticket = std::move(pending.ticket);
    if (with_newline) {
        ticket.ending.push_back('\n');
        g_native_dfhack_item_print_pending.erase(found);
    } else {
        pending.awaiting_newline = true;
        pending.source.clear();
    }
    return ticket;
}

static std::optional<NativeDfhackItemPrintTicket> native_dfhack_take_launcher_echo_ticket(
        void *console, std::string_view source) {
    NativeInputCallbackScope callback;
    if (!g_native_dfhack_lua_output_bound.load(std::memory_order_acquire)) return std::nullopt;
    const auto query = g_native_dfhack_lua_output_api.query;
    DfcnDfhackCommandContextV1 command{};
    command.size = sizeof(command);
    command.version = DFCN_DFHACK_COMMAND_CONTEXT_VERSION;
    const bool known = query && query(nullptr, &command);
    std::lock_guard<std::mutex> lock(g_native_dfhack_item_print_mutex);
    const auto found = g_native_dfhack_item_print_pending.find(std::this_thread::get_id());
    if (found == g_native_dfhack_item_print_pending.end() || !found->second.launcher_echo)
        return std::nullopt;
    auto pending = std::move(found->second);
    g_native_dfhack_item_print_pending.erase(found);
    if (!known || !command.thread_identity || command.thread_identity != pending.thread_identity ||
            command.invocation != pending.invocation || (command.invocation &&
                (!(command.flags & DFCN_DFHACK_COMMAND_LOCAL_CONSOLE) || command.out != console)) ||
            !native_dfhack_same_entry_epoch(pending.entry_epoch) ||
            source != pending.source) return std::nullopt;
    // Only Console's own observed end_batch calls this. Exact complete bytes
    // bind the copied producer record to its real sink without dereferencing
    // an expired proxy or guessing its vtable/target ABI.
    return std::move(pending.ticket);
}

static bool native_dfhack_console_nonlocal_command() {
    if (!g_native_dfhack_lua_output_bound.load(std::memory_order_acquire)) return false;
    const auto query = g_native_dfhack_lua_output_api.query;
    DfcnDfhackCommandContextV1 command{};
    command.size = sizeof(command);
    command.version = DFCN_DFHACK_COMMAND_CONTEXT_VERSION;
    // The current leaf is authoritative even when a plugin explicitly sends
    // its RPC/silent output to Core.getConsole(). Never search an outer local
    // invocation or infer locality from the selected sink's vtable alone.
    return query && query(nullptr, &command) && command.invocation &&
        !(command.flags & DFCN_DFHACK_COMMAND_LOCAL_CONSOLE);
}

#ifdef _WIN32
template<size_t Count>
static bool native_dfhack_lua_registration_pe(const unsigned char *base,
        uintptr_t table, const std::array<const char *, Count> &names,
        const std::array<uintptr_t, Count> &functions) {
    if (!base || !native_dfhack_lua_memory(base + table, Count * 16)) return false;
    for (size_t index = 0; index < Count; ++index) {
        const char *name = nullptr;
        const void *function = nullptr;
        std::memcpy(&name, base + table + index * 16, sizeof(name));
        std::memcpy(&function, base + table + index * 16 + 8, sizeof(function));
        const auto text = native_dfhack_lua_text(name, 32);
        if (!text || *text != names[index] || function != base + functions[index]) return false;
    }
    return true;
}

static bool native_dfhack_bind_lua_output(HMODULE module) {
    // Published once per core. Console consumers cannot race a later retry
    // rewriting function pointers or the owned source path.
    if (g_native_dfhack_lua_output_bound.load(std::memory_order_acquire)) return true;
    const auto lua = GetModuleHandleW(L"lua53.dll");
    const auto loader = dfhack::switch_client::command_owner();
    if (!lua || !loader) return false;
    NativeDfhackLuaOutputApi api;
    api.gettop = reinterpret_cast<decltype(api.gettop)>(GetProcAddress(lua,
        "?lua_gettop@@YAHPEAUlua_State@@@Z"));
    api.settop = reinterpret_cast<decltype(api.settop)>(GetProcAddress(lua,
        "?lua_settop@@YAXPEAUlua_State@@H@Z"));
    api.checkstack = reinterpret_cast<decltype(api.checkstack)>(GetProcAddress(lua,
        "?lua_checkstack@@YAHPEAUlua_State@@H@Z"));
    api.type = reinterpret_cast<decltype(api.type)>(GetProcAddress(lua,
        "?lua_type@@YAHPEAUlua_State@@H@Z"));
    api.isinteger = reinterpret_cast<decltype(api.isinteger)>(GetProcAddress(lua,
        "?lua_isinteger@@YAHPEAUlua_State@@H@Z"));
    api.tointegerx = reinterpret_cast<decltype(api.tointegerx)>(GetProcAddress(lua,
        "?lua_tointegerx@@YA_JPEAUlua_State@@HPEAH@Z"));
    api.tolstring = reinterpret_cast<decltype(api.tolstring)>(GetProcAddress(lua,
        "?lua_tolstring@@YAPEBDPEAUlua_State@@HPEA_K@Z"));
    api.tocfunction = reinterpret_cast<decltype(api.tocfunction)>(GetProcAddress(lua,
        "?lua_tocfunction@@YAP6AHPEAUlua_State@@@Z0H@Z"));
    api.getstack = reinterpret_cast<decltype(api.getstack)>(GetProcAddress(lua,
        "?lua_getstack@@YAHPEAUlua_State@@HPEAUlua_Debug@@@Z"));
    api.getinfo = reinterpret_cast<decltype(api.getinfo)>(GetProcAddress(lua,
        "?lua_getinfo@@YAHPEAUlua_State@@PEBDPEAUlua_Debug@@@Z"));
    api.getlocal = reinterpret_cast<decltype(api.getlocal)>(GetProcAddress(lua,
        "?lua_getlocal@@YAPEBDPEAUlua_State@@PEBUlua_Debug@@H@Z"));
    api.query = &dfhack::switch_client::query_command_context;
    api.query_v2 = &dfhack::switch_client::query_command_context_v2;
    if (!api.gettop || !api.settop || !api.checkstack || !api.type || !api.tolstring ||
            !api.isinteger || !api.tointegerx || !api.tocfunction || !api.getstack ||
            !api.getinfo || !api.getlocal || !api.query) return false;

    // The installed immutable luaL_Reg table, not a mutable Lua table,
    // identifies the exact native println. These adjacent registration pairs
    // were read from the specified DLL and match LuaTools.cpp's dfhack_funcs.
    const auto *base = reinterpret_cast<const unsigned char *>(module);
    constexpr std::array<const char *, 5> names{"print", "println", "printerr", "color", "is_interactive"};
    struct Registration {
        uintptr_t table;
        std::array<uintptr_t, names.size()> functions;
    };
    constexpr Registration registrations[]{
        {0xa5f820, {0x3a91f0, 0x3a9300, 0x3a9430, 0x3a94d0, 0x3a9590}}, // 53.16-r2
        {0xa60890, {0x3a9200, 0x3a9310, 0x3a9440, 0x3a94e0, 0x3a95a0}}, // 53.16-r3
        {0xb94000, {0x3c18b0, 0x3c19c0, 0x3c1af0, 0x3c1b90, 0x3c1c50}}, // 53.17-r1
    };
    const unsigned char *println = nullptr;
    for (const auto &registration : registrations) {
        if (!native_dfhack_lua_registration_pe(base, registration.table, names,
                registration.functions)) continue;
        println = base + registration.functions[1];
        break;
    }
    if (!println) return false;
    std::vector<unsigned char> println_prefix{
        0x48, 0x89, 0x5c, 0x24, 0x10, 0x57, 0x48, 0x83,
        0xec, 0x70, 0x48, 0x8b, 0x05, 0xaf, 0xf1, 0xdb,
        0x00, 0x48, 0x33, 0xc4, 0x48, 0x89, 0x44, 0x24,
        0x60, 0x48, 0x8b, 0xd9, 0x48, 0x8b, 0xd1, 0x48};
    if (!native_dfhack_read_entry_prefix(println, println_prefix, {13},
            "DFHack Lua println producer")) return false;
    if (native_dfhack_relative_target(println, 13, 17) !=
            native_dfhack_pe_directory_pointer(module, IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG,
                offsetof(IMAGE_LOAD_CONFIG_DIRECTORY64, SecurityCookie))) return false;
    api.println = reinterpret_cast<NativeDfhackLuaCFunction>(const_cast<unsigned char *>(println));
    std::array<wchar_t, 32768> filename{};
    const DWORD length = GetModuleFileNameW(module, filename.data(), static_cast<DWORD>(filename.size()));
    if (!length || length >= filename.size()) return false;
    const auto scripts = std::filesystem::path(std::wstring(filename.data(), length)).parent_path() /
        L"scripts";
    const auto path = scripts / L"item.lua";
    const auto utf8 = path.u8string();
    api.item_source = native_dfhack_lua_source_key(
        std::string_view(reinterpret_cast<const char *>(utf8.data()), utf8.size()));
    const auto wheelbarrow_utf8 = (scripts / L"fix" / L"empty-wheelbarrows.lua").u8string();
    api.wheelbarrow_source = native_dfhack_lua_source_key(std::string_view(
        reinterpret_cast<const char *>(wheelbarrow_utf8.data()), wheelbarrow_utf8.size()));
    const auto empty_bin_utf8 = (scripts / L"empty-bin.lua").u8string();
    api.empty_bin_source = native_dfhack_lua_source_key(std::string_view(
        reinterpret_cast<const char *>(empty_bin_utf8.data()), empty_bin_utf8.size()));
    const auto workorder_utf8 = (scripts / L"workorder.lua").u8string();
    api.workorder_source = native_dfhack_lua_source_key(std::string_view(
        reinterpret_cast<const char *>(workorder_utf8.data()), workorder_utf8.size()));
    const auto launcher_utf8 = (scripts / L"gui" / L"launcher.lua").u8string();
    api.launcher_source = native_dfhack_lua_source_key(std::string_view(
        reinterpret_cast<const char *>(launcher_utf8.data()), launcher_utf8.size()));
    g_native_dfhack_lua_output_api = std::move(api);
    g_native_dfhack_lua_output_bound.store(true, std::memory_order_release);
    return true;
}

#else
#include "native_dfhack_lua_output_profile_elf.inc"
#endif

static uint32_t native_dfhack_lua_output_callbacks() {
    auto *context = g_native_dfhack_lua_output_context;
    return context ? std::atomic_ref<uint32_t>(context->active)
        .load(std::memory_order_seq_cst) : 0;
}

static bool native_dfhack_lua_output_hook_active() {
    auto *context = g_native_dfhack_lua_output_context;
    return g_native_dfhack_lua_output_hook.installed ||
        native_code_patches_pending(g_native_dfhack_lua_output_hook.patches) ||
        native_dfhack_lua_output_callbacks() || (context &&
        std::atomic_ref<uintptr_t>(context->helper).load(std::memory_order_seq_cst));
}

#ifdef _WIN32
static bool native_dfhack_prepare_inlined_print_output(NativeEntryHook &hook,
        const unsigned char *getter, const char *label) {
    auto *println = reinterpret_cast<unsigned char *>(g_native_dfhack_lua_output_api.println);
    if (!println) return false;
    auto *entry = println + 0x2a;
    // A build that emits a direct call already passes through the export hook.
    constexpr unsigned char direct_prefix[]{0x48,0x8b,0xcb,0xe8};
    constexpr unsigned char result_move[]{0x48,0x8b,0xf8};
    if (native_dfhack_lua_memory(entry, 11) &&
            !std::memcmp(entry, direct_prefix, sizeof(direct_prefix)) &&
            !std::memcmp(entry + 8, result_move, sizeof(result_move)) &&
            native_dfhack_relative_target(entry, 4, 8) == getter) return true;
    // r3 println inlines GetOutput after lua_print_fmt. The exported getter's
    // hook alone never observes this producer. Reconstruct the exact native
    // operation: GetOutput(RBX) -> RDI, with no change to println's Lua frame,
    // stack allocation, formatted string or native ostream writes.
    std::vector<unsigned char> profile{
        0x4c,0x8d,0x05,0,0,0,0, 0xba,0xd8,0xb9,0xf0,0xff, 0x48,0x8b,0xcb,
        0xff,0x15,0,0,0,0, 0xba,0xff,0xff,0xff,0xff, 0x48,0x8b,0xcb,
        0xff,0x15,0,0,0,0, 0x48,0x8b,0xf8, 0xba,0xfe,0xff,0xff,0xff,
        0x48,0x8b,0xcb, 0xff,0x15,0,0,0,0};
    if (!native_dfhack_read_entry_prefix(entry, profile, {3,17,31,48}, label)) return false;
    // The registry token AND all three IAT slots must be the same ones used
    // by the independently matched exported getter, not arbitrary rel32s.
    for (const auto [inlined, exported] :
            {std::pair<size_t,size_t>{3,13}, {17,27}, {31,41}, {48,58}}) {
        if (native_dfhack_relative_target(entry, inlined, inlined + 4) !=
                native_dfhack_relative_target(getter, exported, exported + 4)) return false;
    }
    NativeCodePatch patch{entry, std::move(profile), std::vector<unsigned char>(52, 0x90)};
    constexpr unsigned char call_prefix[]{0x48,0x8b,0xcb,0xe8}; // mov rcx,rbx; call gate
    std::copy(std::begin(call_prefix), std::end(call_prefix), patch.replacement.begin());
    const intptr_t distance = reinterpret_cast<intptr_t>(hook.relay) -
        reinterpret_cast<intptr_t>(entry + 8);
    if (distance < INT32_MIN || distance > INT32_MAX) return false;
    const auto relative = static_cast<int32_t>(distance);
    std::memcpy(patch.replacement.data() + 4, &relative, sizeof(relative));
    std::copy(std::begin(result_move), std::end(result_move), patch.replacement.begin() + 8);
    hook.patches.push_back(std::move(patch));
    return true;
}

static bool prepare_native_dfhack_lua_output_hook(HMODULE module) {
    constexpr const char *label = "DFHack local Lua item-description print capture";
    auto &hook = g_native_dfhack_lua_output_hook;
    if (hook.relay) return hook.original && g_native_dfhack_lua_output_context;
    if (!native_dfhack_bind_lua_output(module)) {
        report_native_patch_error("ERROR", label, "native Lua/println/loader context binding differs");
        return false;
    }
    auto *entry = reinterpret_cast<unsigned char *>(GetProcAddress(module,
        "?GetOutput@Lua@DFHack@@YAPEAVcolor_ostream@2@PEAUlua_State@@@Z"));
    std::vector<unsigned char> profile{
        0x48, 0x89, 0x5c, 0x24, 0x08, 0x57, 0x48, 0x83,
        0xec, 0x20, 0x4c, 0x8d, 0x05, 0x6f, 0xf7, 0xda,
        0x00, 0xba, 0xd8, 0xb9, 0xf0, 0xff, 0x48, 0x8b,
        0xf9, 0xff, 0x15, 0x89, 0x31, 0x66, 0x00,
        0xba,0xff,0xff,0xff,0xff, 0x48,0x8b,0xcf, 0xff,0x15,0,0,0,0,
        0xba,0xfe,0xff,0xff,0xff, 0x48,0x8b,0xcf, 0x48,0x8b,0xd8,
        0xff,0x15,0,0,0,0, 0x48,0x8b,0xc3, 0x48,0x8b,0x5c,0x24,0x30,
        0x48,0x83,0xc4,0x20,0x5f,0xc3};
    if (!native_dfhack_read_entry_prefix(entry, profile, {13,27,41,58}, label)) {
        report_native_patch_error("ERROR", label, "GetOutput entry signature differs");
        return false;
    }
    using AddFunctionTableFn = BOOLEAN (WINAPI *)(PRUNTIME_FUNCTION, DWORD, DWORD64);
    const auto kernel = GetModuleHandleW(L"kernel32.dll");
    const auto add_function_table = kernel ? reinterpret_cast<AddFunctionTableFn>(
        GetProcAddress(kernel, "RtlAddFunctionTable")) : nullptr;
    if (!add_function_table) return false;
    auto *context = static_cast<NativeDfhackLuaOutputContext *>(HeapAlloc(
        GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(NativeDfhackLuaOutputContext)));
    if (!context) return false;
    NativeRelayRange range;
    range.include(reinterpret_cast<uintptr_t>(entry));
    range.include(reinterpret_cast<uintptr_t>(entry + 5));
    range.include(reinterpret_cast<uintptr_t>(g_native_dfhack_lua_output_api.println) + 0x32);
    hook.relay = allocate_native_relay(range, 0x228, &hook.relay_size, label);
    if (!hook.relay) { HeapFree(GetProcessHeap(), 0, context); return false; }
    bool registered = false;
    struct UnpublishedLuaRelay {
        NativeEntryHook &hook;
        NativeDfhackLuaOutputContext *context;
        bool &registered;
        const char *label;
        ~UnpublishedLuaRelay() {
            if (registered) return;
            release_native_relay(hook.relay, hook.relay_size, label);
            hook.original = nullptr;
            hook.patches.clear();
            HeapFree(GetProcessHeap(), 0, context);
        }
    } guard{hook, context, registered, label};
    auto *memory = static_cast<unsigned char *>(hook.relay);
    constexpr size_t trampoline_offset = 0x100, table_offset = 0x200, unwind_offset = 0x220;
    std::vector<unsigned char> stub;
    const auto emit = [&](std::initializer_list<unsigned char> bytes) { stub.insert(stub.end(), bytes); };
    const auto load_context = [&] {
        emit({0x49, 0xba});
        const auto address = reinterpret_cast<uintptr_t>(context);
        const auto *bytes = reinterpret_cast<const unsigned char *>(&address);
        stub.insert(stub.end(), bytes, bytes + sizeof(address));
    };
    emit({0xf3, 0x0f, 0x1e, 0xfa}); // endbr64
    emit({0x48, 0x83, 0xec, 0x48}); // shadow space and aligned spill storage
    emit({0x48, 0x89, 0x4c, 0x24, 0x20}); // saved lua_State*, identity only
    load_context();
    emit({0xf0, 0x41, 0xff, 0x42, 0x08}); // gate before any core pointer load
    emit({0x49, 0x8b, 0x42, 0x10}); // original getter is in persistent relay
    emit({0xff, 0xd0});
    emit({0x48, 0x89, 0x44, 0x24, 0x28}); // preserve native out return value
    load_context();
    emit({0x49, 0x8b, 0x02, 0x48, 0x85, 0xc0});
    emit({0x74, 0x0c}); // skip saved arguments and helper call if detached
    emit({0x48, 0x8b, 0x4c, 0x24, 0x20});
    emit({0x48, 0x8b, 0x54, 0x24, 0x28});
    emit({0xff, 0xd0}); // short post-getter capture, balanced CET call/return
    load_context();
    emit({0xf0, 0x41, 0xff, 0x4a, 0x08});
    emit({0x48, 0x8b, 0x44, 0x24, 0x28});
    emit({0x48, 0x83, 0xc4, 0x48, 0xc3});
    std::copy(stub.begin(), stub.end(), memory);
    auto *trampoline = memory + trampoline_offset;
    constexpr std::array<unsigned char, 4> endbr{0xf3, 0x0f, 0x1e, 0xfa};
    std::copy(endbr.begin(), endbr.end(), trampoline);
    std::copy(profile.begin(), profile.begin() + 5, trampoline + endbr.size());
    // Only the first complete store is relocated. In particular GetOutput's
    // RIP-relative lea at offset 10 stays at its original address; blindly
    // copying the first 17 bytes would move DFHACK_OSTREAM_TOKEN incorrectly.
    if (!native_relative_branch(trampoline + endbr.size() + 5, 0xe9, entry + 5)) return false;
    context->original = reinterpret_cast<NativeDfhackLuaGetOutputFn>(trampoline);
    auto *table = reinterpret_cast<PRUNTIME_FUNCTION>(memory + table_offset);
    *table = RUNTIME_FUNCTION{};
    table->EndAddress = static_cast<DWORD>(stub.size());
    table->UnwindData = unwind_offset;
    constexpr std::array<unsigned char, 8> unwind{1, 8, 1, 0, 8, 0x82, 0, 0};
    std::copy(unwind.begin(), unwind.end(), memory + unwind_offset);
    NativeCodePatch patch{entry, std::vector<unsigned char>(profile.begin(), profile.begin() + 5),
        std::vector<unsigned char>(5, 0x90)};
    const intptr_t distance = reinterpret_cast<intptr_t>(memory) - reinterpret_cast<intptr_t>(entry + 5);
    if (distance < INT32_MIN || distance > INT32_MAX) return false;
    patch.replacement[0] = 0xe9;
    const auto relative = static_cast<int32_t>(distance);
    std::memcpy(patch.replacement.data() + 1, &relative, sizeof(relative));
    hook.patches.push_back(std::move(patch));
    if (!native_dfhack_prepare_inlined_print_output(hook, entry, label)) return false;
    hook.original = trampoline;
    if (!seal_native_relay(hook.relay, hook.relay_size, label) ||
            !add_function_table(table, 1, reinterpret_cast<DWORD64>(memory))) return false;
    registered = true;
    g_native_dfhack_lua_output_context = context;
    // This registered page/context remains until process exit. Clearing its
    // helper makes late native entry/return paths independent of this core.
    return true;
}

#else
static bool prepare_native_dfhack_lua_output_hook(void *entry_pointer) {
    auto &hook = g_native_dfhack_lua_output_hook;
    if (hook.relay) return hook.original && g_native_dfhack_lua_output_context;
    if (!native_dfhack_bind_lua_output(entry_pointer)) return false;
    auto context = std::make_unique<NativeDfhackLuaOutputContext>();
    if (!prepare_native_dfhack_elf_gate(hook,
            static_cast<unsigned char *>(entry_pointer), context.get(),
            {0xf3,0x0f,0x1e,0xfa,0x41,0x54}, NativeDfhackElfGate::GetOutput,
            "DFHack local Lua item-description print capture")) return false;
    context->original = reinterpret_cast<NativeDfhackLuaGetOutputFn>(hook.original);
    g_native_dfhack_lua_output_context = context.release();
    return true;
}
#endif

static bool install_native_dfhack_lua_output_hook() {
    std::lock_guard<std::mutex> lock(g_native_dfhack_lua_output_hook_mutex);
#ifdef _WIN32
    const auto module = GetModuleHandleW(L"dfhack.dll");
    if (!module) return true;
    const auto loader = dfhack::switch_client::command_owner();
    if (!loader || !GetProcAddress(loader, "dfcn_get_dfhack_command_context_v1")) return true;
#else
    void *module = dlsym(RTLD_DEFAULT, "_ZN6DFHack3Lua9GetOutputEP9lua_State");
    if (!module || !dlsym(RTLD_DEFAULT, "dfcn_get_dfhack_command_context_v1")) return true;
#endif
    constexpr const char *label = "DFHack local Lua item-description print capture";
    if (!prepare_native_dfhack_lua_output_hook(module) ||
            !g_native_dfhack_lua_output_hook.install(label)) return false;
    std::atomic_ref<uintptr_t>(g_native_dfhack_lua_output_context->helper).store(
        reinterpret_cast<uintptr_t>(&native_dfhack_capture_item_print), std::memory_order_seq_cst);
    return true;
}

static void uninstall_native_dfhack_lua_output_hook() {
    std::lock_guard<std::mutex> lock(g_native_dfhack_lua_output_hook_mutex);
    auto *context = g_native_dfhack_lua_output_context;
    if (!context) return;
    std::atomic_ref<uintptr_t>(context->helper).store(0, std::memory_order_seq_cst);
    auto &hook = g_native_dfhack_lua_output_hook;
    constexpr const char *label = "DFHack local Lua item-description print capture";
    if (hook.installed && !write_native_code_patches(hook.patches, false, label, &hook.installed)) return;
    if (!flush_native_code_patches(hook.patches, label)) return;
    if (!native_dfhack_lua_output_callbacks()) {
        native_dfhack_clear_silent_item_reports();
        std::lock_guard<std::mutex> tickets(g_native_dfhack_item_print_mutex);
        g_native_dfhack_item_print_pending.clear();
    }
}
