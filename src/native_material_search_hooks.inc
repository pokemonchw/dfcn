// Task details and work-order conditions have distinct native selectors,
// but share caption matching, input and hook lifetime. Trait captions use
// the same complete job-item grammar as their rendered condition rows.
using NativeMaterialCaptionFn = void (*)(const void *, NativeString *,
    int16_t, int32_t, int32_t, int32_t, int32_t);
struct NativeWorkOrderMaterialSource {
    uintptr_t selector = 0;
    size_t comparisons = 0, types = 0, indices = 0, states = 0;
    const void *material_context = nullptr;
    NativeMaterialCaptionFn caption = nullptr;
    NativeSearchFoldFn capitalize = nullptr;
    NativeSearchDestroyFn destroy = nullptr;
    const char *unrestricted_caption = nullptr;
};
struct NativeWorkOrderItemSource {
    size_t types = 0, subtypes = 0;
    NativeHistoryItemFn caption = nullptr;
};
struct NativeMaterialSearchProfile {
    uintptr_t base = 0;
    NativeSearchFoldFn fold = nullptr;
    std::vector<NativeCall> calls;
    NativeWorkOrderMaterialSource work_order;
    size_t trait_caption = 0;
    NativeWorkOrderItemSource items;
};
static void capture_native_material_search_query_fold(NativeString *);
static void capture_native_material_search_term_fold(NativeString *, const NativeString *);
static size_t capture_native_material_search_find(const char *, size_t,
        const NativeString *, const char *, size_t);
static size_t capture_native_work_order_material_search_find(const char *, size_t,
        const void *, const char *, size_t);
static size_t capture_native_work_order_trait_search_find(const char *, size_t,
        const void *, const char *, size_t);
static size_t capture_native_work_order_item_search_find(const char *, size_t,
        const void *, const char *, size_t);
#include "native_material_search_profile.inc"

static NativeCallHook g_native_material_search_hook;
static NativeSearchFoldFn g_native_material_search_fold = nullptr;
static NativeWorkOrderMaterialSource g_native_work_order_material_source;
static size_t g_native_work_order_trait_caption = 0;
static NativeWorkOrderItemSource g_native_work_order_item_source;
#include "native_material_search_sources.inc"
struct NativeMaterialSearchCaption {
    const NativeString *term = nullptr;
    std::array<char, 65536> source{};
    size_t length = 0;
};
// Trivial TLS only: an owning TLS string would register a destructor and pin
// the reloadable core on runtimes which defer dlclose until thread exit.
static thread_local NativeMaterialSearchCaption g_native_material_search_caption;

static void capture_native_material_search_query_fold(NativeString *text) {
    g_native_material_search_caption.term = nullptr;
    g_native_material_search_caption.length = 0;
    fold_native_search_query(text, g_native_material_search_fold);
}

static void capture_native_material_search_term_fold(NativeString *term,
        const NativeString *query_string) {
    NativeInputCallbackScope callback;
    auto &caption = g_native_material_search_caption;
    caption.term = nullptr;
    caption.length = 0;
    try {
        std::string_view query, source;
        if (g_overlay.translation_enabled() &&
            native_string_view(query_string, &query, 4096) &&
            !query.empty() &&
            native_string_view(term, &source, 65536) &&
            source.find('\0') == std::string_view::npos) {
            std::memcpy(caption.source.data(), source.data(), source.size());
            caption.length = source.size();
            caption.term = term;
        }
    } catch (...) {}
    // This same temporary caption is ALSO the native alphabetical sort key.
    // Never replace it with the query or a Chinese translation to trick find:
    // doing so would change the availability/name ordering of matching rows.
    if (g_native_material_search_fold)
        callback.call_native([&] { g_native_material_search_fold(term); });
}

template<typename ReadCaption>
static size_t match_native_material_search(const char *text, size_t length,
        const char *query_text, size_t query_length, ReadCaption read_caption,
        bool condition = false) {
    NativeInputCallbackScope callback;
    const size_t result = native_search_byte_find(text, length, 0, query_text, query_length);
    try {
        if (!g_overlay.translation_enabled() || !query_text ||
            query_length == 0 || query_length > 4096) return result;
        const std::string_view query(query_text, query_length);
        if(!condition)refresh_native_search_world(false,true,true);
        SearchNativeHitScope native_hit(result!=SIZE_MAX);
        std::string source;
        SearchDescriptor descriptor;
        descriptor.kind = condition ? SearchCandidateKind::PropertyChoice : SearchCandidateKind::MaterialChoice;
        descriptor.domain = condition ? "properties" : "materials";
        if (read_caption(source, descriptor)) {
            SearchDescriptorScope scope(descriptor);
            return (condition
                ? g_overlay.translated_work_order_condition_search_matches(source, query)
                : g_overlay.translated_material_search_matches(source, query)) ? 0 : SIZE_MAX;
        }
    } catch (...) {
        // No translation/allocation exception may unwind through native code.
    }
    return result;
}

static size_t capture_native_material_search_find(const char *text, size_t length,
        const NativeString *term, const char *query_text, size_t query_length) {
    auto &caption = g_native_material_search_caption;
    const bool complete = caption.term == term;
    caption.term = nullptr; // Borrowed native storage does not survive the comparison.
    return match_native_material_search(text, length, query_text, query_length,
        [&](std::string &source, SearchDescriptor &) {
            if (!complete) return false;
            source.assign(caption.source.data(), caption.length);
            return true;
        });
}

static size_t capture_native_work_order_material_search_find(const char *text,
        size_t length, const void *candidate_slot,
        const char *query_text, size_t query_length) {
    return match_native_material_search(text, length, query_text, query_length,
        [&](std::string &source, SearchDescriptor &descriptor) {
            return native_work_order_material_caption(candidate_slot, source, &descriptor);
        });
}

static size_t capture_native_work_order_trait_search_find(const char *text,
        size_t length, const void *candidate_slot,
        const char *query_text, size_t query_length) {
    return match_native_material_search(text, length, query_text, query_length,
        [&](std::string &source, SearchDescriptor &) {
            return native_work_order_trait_caption(candidate_slot, source);
        }, true);
}

static size_t capture_native_work_order_item_search_find(const char *text,
        size_t length, const void *candidate_slot,
        const char *query_text, size_t query_length) {
    return match_native_material_search(text, length, query_text, query_length,
        [&](std::string &source, SearchDescriptor &descriptor) {
            return native_work_order_item_caption(candidate_slot, source, &descriptor);
        }, true);
}

static bool native_material_search_hook_active() {
    return g_native_material_search_hook.active();
}

static void uninstall_native_material_search_hook() {
    if (!native_callbacks_idle()) return;
    if (g_native_material_search_hook.uninstall("Native material translated search")) {
        g_native_material_search_fold = nullptr;
        g_native_material_search_caption.term = nullptr;
        g_native_material_search_caption.length = 0;
        g_native_work_order_material_source = {};
        g_native_work_order_trait_caption = 0;
        g_native_work_order_item_source = {};
    }
}

static bool install_native_material_search_hook() {
    if (g_native_material_search_hook.installed) return true;
    if (native_material_search_hook_active()) {
        uninstall_native_material_search_hook();
        if (native_material_search_hook_active()) return false;
    }
    NativeMaterialSearchProfile profile;
    if (!resolve_native_material_search_profile(profile) || !profile.fold ||
        !profile.work_order.selector || !profile.work_order.caption ||
        !profile.work_order.capitalize || !profile.work_order.material_context ||
        !profile.work_order.unrestricted_caption || !profile.trait_caption ||
        !profile.items.types || !profile.items.subtypes || !profile.items.caption) return false;
    g_native_material_search_fold = profile.fold;
    g_native_work_order_material_source = profile.work_order;
    g_native_work_order_trait_caption = profile.trait_caption;
    g_native_work_order_item_source = profile.items;
    if (!g_native_material_search_hook.install(profile.base, profile.calls,
            "Native material translated search")) {
        uninstall_native_material_search_hook();
        return false;
    }
    log_line("INFO", "Enabled translated search over complete task materials and work-order condition items/materials/traits; native sorting preserved");
    return true;
}
