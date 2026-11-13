// Search policy uses the same complete activity grammar as workshop rows
// and the creature roster's job column. Native adapters own caption building,
// string allocation and the precise call sites in the candidate filter.
using NativeWorkshopSearchFindFn = size_t (*)(const char *, size_t, size_t,
                                             const char *, size_t);
using NativeWorkshopSearchFoldFn = void (*)(NativeString *);
using NativeWorkshopSearchDestroyFn = void (*)(NativeString *);
using NativeTaskPickerSearchRefreshFn = void (*)(void *);
struct NativeWorkshopSearchProfile {
    uintptr_t base = 0;
    NativeWorkshopSearchFindFn find = nullptr;
    NativeWorkshopSearchFoldFn fold = nullptr;
    NativeWorkshopSearchDestroyFn destroy = nullptr;
    std::vector<NativeCall> calls;
    const void *results = nullptr;
    NativeTaskPickerSearchRefreshFn task_refresh = nullptr;
    uintptr_t task_owner = 0;
};
static void capture_native_workshop_search_query_fold(NativeString *);
static void capture_native_workshop_search_finish(NativeString *);
static size_t capture_native_workshop_search_find(const char *, size_t,
        const void *, const char *, size_t);
static size_t capture_native_task_picker_search_find(const char *, size_t,
        const NativeString *, const char *, size_t);

static NativeTaskPickerSearchRefreshFn native_task_picker_refresh_from_call(
        uintptr_t base, uintptr_t anchor, size_t offset) {
    const auto address = native_reference_address(base, anchor);
    std::array<unsigned char, 5> call{};
    if (!address || address > UINTPTR_MAX - offset - call.size() ||
            !native_history_copy_bytes(address + offset, call.data(), call.size()) ||
            call[0] != 0xe8) return nullptr;
    int32_t displacement = 0;
    std::memcpy(&displacement, call.data() + 1, sizeof(displacement));
    return reinterpret_cast<NativeTaskPickerSearchRefreshFn>(
        static_cast<intptr_t>(address + offset + call.size()) + displacement);
}

static uintptr_t native_task_picker_owner_from_query(uintptr_t query) {
    // Both bound filters and the Unicode editor use job_filter at owner+50.
    return query >= 0x50 ? query - 0x50 : 0;
}

static uintptr_t native_task_picker_owner_from_input(uintptr_t base, uintptr_t anchor) {
    const auto address = native_reference_address(base, anchor);
    std::array<unsigned char, 7> instruction{};
    if (!address || address > UINTPTR_MAX - instruction.size() ||
            !native_history_copy_bytes(address, instruction.data(), instruction.size()) ||
            instruction[0] != 0x48 || instruction[1] != 0x8d || instruction[2] != 0x15) return 0;
    int32_t displacement = 0;
    std::memcpy(&displacement, instruction.data() + 3, sizeof(displacement));
    return native_task_picker_owner_from_query(
        static_cast<intptr_t>(address + instruction.size()) + displacement);
}
#include "native_workshop_search_profile.inc"

static NativeCallHook g_native_workshop_search_hook;
static NativeWorkshopSearchFindFn g_real_native_workshop_search_find = nullptr;
static NativeWorkshopSearchFoldFn g_real_native_workshop_search_fold = nullptr;
static NativeWorkshopSearchDestroyFn g_real_native_workshop_search_destroy = nullptr;
static const void *g_native_workshop_search_results = nullptr;
static NativeTaskPickerSearchRefreshFn g_native_task_picker_search_refresh = nullptr;
static uintptr_t g_native_task_picker_search_owner = 0;

struct NativeWorkOrderSearchCatalog {
    uintptr_t world = 0;
    uint64_t generation = 0;
    NativeBorrowedVector<uintptr_t> master;
    size_t next = 0;
    size_t published = 0;
    std::chrono::steady_clock::time_point refreshed{};
    bool open = false;
    bool refresh_when_ready = false;
};
static NativeWorkOrderSearchCatalog g_native_work_order_search_catalog;

// Read the game's complete master list independently of the selected shop
// and query. Preparation normally runs at the render boundary; an input
// arriving before preparation completes can fill one missing owned entry.
// Native records retain eligibility, scrolling and category membership.
static void prepare_native_work_order_search_catalog() {
    NativeInputCallbackScope callback;
    TranslationStateScope state;
    if (!g_native_workshop_search_hook.active() || !g_overlay.translation_enabled()) return;
    try {
        auto &catalog = g_native_work_order_search_catalog;
        uintptr_t world = 0;
        native_history_copy(native_history_global(0x24ebb58), world);
        const auto generation = g_overlay.work_order_search_catalog_generation(world);
        if (catalog.world != world || catalog.generation != generation) {
            catalog = {};
            catalog.world = world;
            catalog.generation = generation;
        }
        if (!world) return;
        // Bind the exact owner used by native input, not a gamest-wide offset.
        // The reviewed PE input addresses owner 18a7200; the generated
        // gamest+5d30 coordinate instead addresses 18a7300 in that ABI.
        const auto owner = g_native_task_picker_search_owner;
        const auto master_field = native_history_object_member(owner,
            "create_work_order_interfacest", "jminfo_master", 24);
        NativeBorrowedVector<uintptr_t> master;
        uint8_t open = 0;
        if (!owner || !native_history_copy(owner, open) ||
                !native_history_read_vector(master_field, master) || !master.valid(1048576)) return;
        // Reopening can regenerate native records in the same allocation.
        // Revisit their captions while retaining each unchanged text index.
        if (master.begin != catalog.master.begin || master.end != catalog.master.end ||
                (open == 1 && !catalog.open)) {
            catalog.master = master;
            catalog.next = 0;
            catalog.published = 0;
            catalog.refreshed = {};
            catalog.refresh_when_ready = true;
        }
        catalog.open = open == 1;
        {
            // Share closed grammar subproblems across this batch's material
            // and item variants. Yield between complete candidates so normal
            // input/rendering continues while a new catalog is prepared.
            TranslationWorkScope work;
            const auto deadline = std::chrono::steady_clock::now() + std::chrono::milliseconds(3);
            const size_t end = std::min(master.size(), catalog.next + 256);
            while (catalog.next < end) {
                const uintptr_t row = native_history_vector_at(master, catalog.next);
                if (!row || row > UINTPTR_MAX - 0x50) {
                    ++catalog.next;
                    continue;
                }
                // The native population loop formats master[i]+50, then
                // folds only its +70 copy. Both supported ABIs retain these
                // offsets, as do the bound task-filter callbacks below.
                std::string source;
                if (native_history_copy_string(row + 0x50, source) && !source.empty() &&
                        source.size() <= 65536 && source.find('\0') == std::string::npos) {
                    if (!g_overlay.prepare_work_order_search_entry(source)) break;
                }
                ++catalog.next;
                if (std::chrono::steady_clock::now() >= deadline) break;
            }
        }
        const auto now = std::chrono::steady_clock::now();
        if (catalog.refresh_when_ready && catalog.open && g_native_task_picker_search_refresh &&
                (catalog.next == master.size() || (catalog.next > catalog.published &&
                    now - catalog.refreshed >= std::chrono::milliseconds(50)))) {
            const auto query_field = native_history_object_member(owner,
                "create_work_order_interfacest", "job_filter", 32);
            std::string query;
            if (!native_history_copy_string(query_field, query)) return;
            catalog.refresh_when_ready = catalog.next < master.size();
            catalog.published = catalog.next;
            catalog.refreshed = now;
            // A query entered during preparation gets its complete native
            // result automatically, without another keystroke or UI action.
            if (!query.empty()) callback.call_native([&] {
                g_native_task_picker_search_refresh(reinterpret_cast<void *>(owner));
            });
        }
    } catch (...) {
        // Keep preparation failures outside the game's input/render ABI.
    }
}

static bool native_workshop_search_caption(const void *candidate,
        NativeWorkshopSearchDestroyFn destroy, std::string &source) {
    uintptr_t vtable = 0, caption_method = 0;
    if (!native_history_copy(reinterpret_cast<uintptr_t>(candidate), vtable) ||
        !vtable || !native_history_copy(vtable + sizeof(uintptr_t), caption_method) ||
        !caption_method) return false;
    // The renderer uses the same virtual caption operation before clipping.
    NativeSearchString caption(destroy);
    using CaptionFn = void (*)(const void *, NativeString *);
    reinterpret_cast<CaptionFn>(caption_method)(candidate, &caption.value);
    std::string_view text;
    if (!native_string_view(&caption.value, &text, 65536) || text.empty() ||
        text.find('\0') != std::string_view::npos) return false;
    source.assign(text);
    return true;
}

static void capture_native_workshop_search_query_fold(NativeString *text) {
    fold_native_search_query(text, g_real_native_workshop_search_fold);
}

static void capture_native_workshop_search_finish(NativeString *query_string) {
    NativeInputCallbackScope callback;
    try {
        std::string_view query;
        if (g_overlay.translation_enabled() && g_native_workshop_search_results &&
                native_string_view(query_string, &query, 4096) && !query.empty()) {
            const auto rows = NativeBorrowedVector<const void *>::read(
                g_native_workshop_search_results);
            if (rows.valid() && rows.size() > 1) {
                struct RankedRow { const void *candidate; SearchMatchRank rank; };
                std::vector<RankedRow> ranked;
                ranked.reserve(rows.size());
                for (size_t i = 0; i < rows.size(); ++i) {
                    std::string source;
                    // Leave the native list intact if any caption cannot be
                    // read. No partial sort or newly admitted rows are published.
                    if (!native_workshop_search_caption(rows.begin[i],
                            g_real_native_workshop_search_destroy, source)) break;
                    ranked.push_back({rows.begin[i],
                        g_overlay.translated_workshop_search_rank(source, query)});
                }
                if (ranked.size() == rows.size()) {
                    std::stable_sort(ranked.begin(), ranked.end(),
                        [](const RankedRow &a, const RankedRow &b) { return a.rank < b.rank; });
                    for (size_t i = 0; i < ranked.size(); ++i)
                        rows.begin[i] = ranked[i].candidate;
                }
            }
        }
    } catch (...) {
        // Ranking failures leave the completed native result order intact.
    }
    // This boundary owns the temporary query's original native destructor.
    // The master candidate list is untouched, so clearing or changing the
    // query rebuilds the original order before applying relevance again.
    if (g_real_native_workshop_search_destroy)
        callback.call_native([&] { g_real_native_workshop_search_destroy(query_string); });
}

template<typename ReadCaption>
static size_t match_native_workshop_search(const char *native_text,
        size_t native_length, const char *query_text, size_t query_length,
        ReadCaption read_caption) {
    NativeInputCallbackScope callback;
    // Each relay supplies a caption source in the known zero start argument.
    // Native matching and the caller's npos/non-npos contract stay intact.
    const size_t result = g_real_native_workshop_search_find
        ? callback.call_native([&] {
            return g_real_native_workshop_search_find(native_text, native_length, 0,
                query_text, query_length);
        })
        : SIZE_MAX;
    try {
        if (!g_overlay.translation_enabled() || !query_text ||
            query_length == 0 || query_length > 4096) return result;
        const std::string_view query(query_text, query_length);
        // Native search keys are already lowercased; the display caption
        // retains the spelling required by generated instrument names and
        // scoped task grammar. It is available even for offscreen choices.
        std::string source;
        if (read_caption(source)) {
            if (const auto typed = translated_search_item_decision(source, query))
                return *typed ? 0 : SIZE_MAX;
            if (result != SIZE_MAX) return result;
            if (g_overlay.translated_unit_search_matches(source, query, true)) return 0;
        }
    } catch (...) {
        // Translation/allocation failures must not unwind through the game.
    }
    // The game owns candidate identity, availability and initial ordering.
    // The completed result list is ranked separately after this filter.
    return result;
}

static size_t capture_native_workshop_search_find(const char *native_text,
        size_t native_length, const void *candidate,
        const char *query_text, size_t query_length) {
    return match_native_workshop_search(native_text, native_length, query_text,
        query_length, [&](std::string &source) {
            return native_workshop_search_caption(candidate,
                g_real_native_workshop_search_destroy, source);
        });
}

static size_t capture_native_task_picker_search_find(const char *native_text,
        size_t native_length, const NativeString *caption,
        const char *query_text, size_t query_length) {
    NativeInputCallbackScope callback;
    if ((!native_text && native_length) || (!query_text && query_length)) return SIZE_MAX;
    const size_t native_result = std::string_view(native_text ? native_text : "", native_length).find(
        std::string_view(query_text ? query_text : "", query_length));
    TranslationStateScope state;
    try {
        if (!g_overlay.translation_enabled() || !query_length || query_length > 4096)
            return native_result;
        // The complete live caption is authoritative even if native records
        // were rebuilt at the same addresses. A text lookup reuses its owned
        // index and cannot retain a stale pointer-to-caption binding.
        std::string_view source;
        if (!native_string_view(caption, &source, 65536) || source.empty() ||
                source.find('\0') != std::string_view::npos) return native_result;
        auto entry = g_overlay.find_work_order_search_entry(source);
        if (!entry) {
            try { entry = g_overlay.prepare_work_order_search_entry(source); }
            catch (...) {} // The complete matcher below remains available.
        }
        const std::string_view query(query_text, query_length);
        if (entry) return entry->matches(translated_search_query(query),
            native_result != SIZE_MAX) ? 0 : SIZE_MAX;
        // Preparation is an optimization, never a switch disabling the
        // original complete bilingual/pinyin/fuzzy/typed/semantic matcher.
        if (const auto typed = translated_search_item_decision(source, query))
            return *typed ? 0 : SIZE_MAX;
        if (native_result != SIZE_MAX) return native_result;
        return g_overlay.translated_unit_search_matches(source, query, true) ? 0 : SIZE_MAX;
    } catch (...) {
        return native_result;
    }
}

static bool native_workshop_search_hook_active() {
    return g_native_workshop_search_hook.active();
}

static void uninstall_native_workshop_search_hook() {
    if (!native_callbacks_idle()) return;
    if (g_native_workshop_search_hook.uninstall("Native workshop translated search")) {
        g_real_native_workshop_search_find = nullptr;
        g_real_native_workshop_search_fold = nullptr;
        g_real_native_workshop_search_destroy = nullptr;
        g_native_workshop_search_results = nullptr;
        g_native_task_picker_search_refresh = nullptr;
        g_native_task_picker_search_owner = 0;
        g_native_work_order_search_catalog = {};
    }
}

static bool install_native_workshop_search_hook() {
    if (g_native_workshop_search_hook.installed) return true;
    if (native_workshop_search_hook_active()) {
        uninstall_native_workshop_search_hook();
        if (native_workshop_search_hook_active()) return false;
    }
    NativeWorkshopSearchProfile profile;
    if (!resolve_native_workshop_search_profile(profile)) return false;
    if (profile.calls.empty() || !profile.find || !profile.fold) return false;
    g_real_native_workshop_search_find = profile.find;
    g_real_native_workshop_search_fold = profile.fold;
    g_real_native_workshop_search_destroy = profile.destroy;
    g_native_workshop_search_results = profile.results;
    g_native_task_picker_search_refresh = profile.task_refresh;
    g_native_task_picker_search_owner = profile.task_owner;
    if (!g_native_workshop_search_hook.install(profile.base, profile.calls,
                                               "Native workshop translated search")) {
        uninstall_native_workshop_search_hook();
        return false;
    }
    log_line("INFO", "Enabled translated search over complete workshop and task-picker captions");
    return true;
}
