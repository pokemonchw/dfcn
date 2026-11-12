// The native recipe formatter wraps requirement strings inline. Capture its
// complete, case-normalized input and the exact rows it appends; translation
// and matching remain in the shared workshop tooltip compositor.
using NativeWorkshopRecipeStringFn = void (*)(NativeString *);
static void capture_native_workshop_recipe_paragraph(void *,const NativeString *,int);
static void capture_native_workshop_product_paragraph(
    void *, const NativeString *, int, const void *);
struct NativeWorkshopRecipeProfile {
    uintptr_t base = 0;
    uintptr_t begin_site = 0, begin_target = 0;
    uintptr_t end_site = 0, end_target = 0;
    int paragraph_width = 0;
    bool shared_paragraphs = false;
    std::vector<NativeCall> paragraph_calls;
    NativeWorkshopRecipeStringFn normalize = nullptr, destroy = nullptr;
    std::vector<unsigned char> begin_arguments, end_arguments;
};
#include "native_workshop_recipe_profile.inc"

struct NativeWorkshopRecipeHooks {
    NativeCallHook code;
    NativeWorkshopRecipeStringFn normalize = nullptr, destroy = nullptr;
    int paragraph_width = 0;
};
static NativeWorkshopRecipeHooks g_native_workshop_recipe_hooks;

static int native_workshop_recipe_paragraph_width() {
    return g_native_workshop_recipe_hooks.paragraph_width;
}

struct NativeWorkshopRequirementPending {
    const NativeString *source_owner = nullptr;
    const void *paragraph_owner = nullptr;
    size_t first_line = 0;
    std::string source;
    std::optional<NativeJobItemCaption> job_item_caption;
};
struct NativeWorkshopRecipeThreadState {
    std::vector<NativeWorkshopRequirementPending> pending;
};
static NativeWorkshopRecipeThreadState &native_workshop_recipe_thread_state() {
    return reloadable_thread_state<NativeWorkshopRecipeThreadState,
        struct WorkshopRecipeCaptureTag>();
}

static std::mutex g_native_workshop_requirement_mutex;
static std::deque<NativeParagraphCapture> g_native_workshop_requirements;
static uint64_t g_native_workshop_requirement_sequence = 0;

static std::vector<NativeParagraphCapture> captured_native_workshop_requirements() {
    std::lock_guard<std::mutex> lock(g_native_workshop_requirement_mutex);
    return {g_native_workshop_requirements.begin(), g_native_workshop_requirements.end()};
}

static void clear_native_workshop_requirements() {
    std::lock_guard<std::mutex> lock(g_native_workshop_requirement_mutex);
    g_native_workshop_requirements.clear();
    g_native_workshop_requirement_sequence = 0;
    native_workshop_recipe_thread_state().pending.clear();
}

static std::optional<NativeJobItemCaption> capture_native_workshop_job_item(
        const void *job_item, std::string_view source) {
    const uintptr_t object = reinterpret_cast<uintptr_t>(job_item);
    if (!object || object > UINTPTR_MAX - 0xb0) return std::nullopt;
    NativeJobItemCaption caption;
    caption.owner = object;
    caption.source.assign(source);
    // The PE loops retain the exact job_req_elementst in RSI; ELF retains
    // its pointer in the current R13 vector entry. Both copy these same
    // scalar fields and 32-byte strings while formatting the description.
    // This is the object copied at
    // 8c31c1..8c32e2 / 8c3573..8c36a6, not a reconstructed job-type recipe.
    if (!native_history_copy(object, caption.item_type) ||
            !native_history_copy(object + 2, caption.item_subtype) ||
            !native_history_copy(object + 4, caption.material_type) ||
            !native_history_copy(object + 8, caption.material_index) ||
            !native_history_copy(object + 0x10, caption.quantity) ||
            !native_history_copy(object + 0xc, caption.flags[0]) ||
            !native_history_copy(object + 0x18, caption.flags[1]) ||
            !native_history_copy(object + 0x1c, caption.flags[2]) ||
            !native_history_copy(object + 0x20, caption.flags[3]) ||
            !native_history_copy(object + 0x24, caption.flags[4]) ||
            !native_history_copy_string(object + 0x30, caption.reaction_class) ||
            !native_history_copy_string(object + 0x50, caption.reaction_product))
        return std::nullopt;
    if (caption.material_type >= 0) {
        uintptr_t material = 0;
        if (!native_history_material_object(native_history_profile_base(),
                caption.material_type, caption.material_index, material) ||
                !material || material > UINTPTR_MAX - 0x540 ||
                !native_history_copy_string(material, caption.material_id) ||
                !native_history_copy_string(material + 0x520, caption.material_prefix) ||
                !native_history_copy_string(material + 0xb8, caption.material_state))
            return std::nullopt;
    }
    return caption;
}

static void remember_native_workshop_recipe_field(const void *paragraph,
        int width, std::string source, size_t first_line,
        std::optional<NativeJobItemCaption> job_item_caption) {
    if (!paragraph || width != 29 || first_line > 4096 || source.empty()) return;
    const size_t count = native_paragraph_row_count(paragraph);
    if (count <= first_line || count > 4096) return;
    NativeParagraphCapture captured;
    captured.owner = reinterpret_cast<uintptr_t>(paragraph);
    captured.paragraph_width = width;
    captured.source = std::move(source);
    captured.first_line = first_line;
    captured.job_item_caption = std::move(job_item_caption);
    captured.wrapped_lines.reserve(count - first_line);
    captured.row_addresses.reserve(count - first_line);
    for (size_t index = first_line; index < count; ++index) {
        std::string_view line;
        const auto *row = native_paragraph_row(paragraph, index);
        if (!native_string_view(row, &line, 65536) ||
                line.find('\0') != std::string_view::npos) return;
        captured.wrapped_lines.emplace_back(line);
        captured.row_addresses.push_back(reinterpret_cast<uintptr_t>(row));
    }
    std::lock_guard<std::mutex> lock(g_native_workshop_requirement_mutex);
    std::erase_if(g_native_workshop_requirements,
        [&](const NativeParagraphCapture &previous) {
            return previous.owner == captured.owner && previous.first_line >= first_line;
        });
    captured.sequence = ++g_native_workshop_requirement_sequence;
    g_native_workshop_requirements.push_back(std::move(captured));
    // Cached previews retain owned identity and the exact native wrap. The
    // consumer still requires matching owner, row boundaries and source.
    while (g_native_workshop_requirements.size() > 512)
        g_native_workshop_requirements.pop_front();
}

static void capture_native_workshop_requirement_begin(NativeString *source,
        const void *paragraph, const void *job_item) {
    // Keep the native operation and its string ownership entirely intact.
    g_native_workshop_recipe_hooks.normalize(source);
    try {
        auto &pending = native_workshop_recipe_thread_state().pending;
        // Stack locals may be reused on the next recipe. A failed capture
        // must not leave an older record that its matching end could consume.
        std::erase_if(pending, [&](const NativeWorkshopRequirementPending &entry) {
            return entry.source_owner == source && entry.paragraph_owner == paragraph;
        });
        const size_t first_line = native_paragraph_row_count(paragraph);
        if (!paragraph || first_line > 4096) return;
        {
            std::lock_guard<std::mutex> lock(g_native_workshop_requirement_mutex);
            std::erase_if(g_native_workshop_requirements,
                [&](const NativeParagraphCapture &capture) {
                    return capture.owner == reinterpret_cast<uintptr_t>(paragraph) &&
                        capture.first_line >= first_line;
                });
        }
        std::string_view text;
        if (pending.size() >= 32 || !native_string_view(source, &text, 65536) ||
            text.empty() || text.find('\0') != std::string_view::npos) return;
        std::optional<NativeJobItemCaption> caption;
        caption = capture_native_workshop_job_item(job_item, text);
        pending.push_back({source, paragraph, first_line, std::string(text),
            std::move(caption)});
    } catch (...) {
        // Native rendering must continue even if the owned copy cannot be made.
    }
}

static void capture_native_workshop_requirement_end(NativeString *last_line,
        const void *paragraph, const NativeString *source_owner) {
    g_native_workshop_recipe_hooks.destroy(last_line);
    try {
        auto &pending = native_workshop_recipe_thread_state().pending;
        // The adapter passes both the original source local and destination
        // box, so nested captures cannot consume one another's records.
        const auto found = std::find_if(pending.rbegin(), pending.rend(),
            [&](const NativeWorkshopRequirementPending &entry) {
                return entry.source_owner == source_owner &&
                    entry.paragraph_owner == paragraph;
            });
        if (found == pending.rend()) return;
        auto captured = std::move(*found);
        pending.erase(std::next(found).base());
        remember_native_workshop_recipe_field(paragraph,
            g_native_workshop_recipe_hooks.paragraph_width, std::move(captured.source),
            captured.first_line, std::move(captured.job_item_caption));
    } catch (...) {}
}

static bool native_workshop_recipe_hooks_active() {
    return g_native_workshop_recipe_hooks.code.active();
}

static void capture_native_workshop_recipe_paragraph(void *paragraph,
        const NativeString *source, int width) {
    NativeInputCallbackScope callback;
    std::string complete;
    size_t first = SIZE_MAX;
    try {
        std::string_view value;
        if (width == 29 && native_string_view(source,&value,65536) &&
                !value.empty() && value.find('\0') == std::string_view::npos) {
            complete.assign(value);
            first = native_paragraph_row_count(paragraph);
        }
    } catch (...) {}
    callback.call_native([&] { if (g_real_native_paragraph) g_real_native_paragraph(paragraph,source,width); });
    try { capture_appended_native_paragraph(paragraph,width,std::move(complete),first,true); } catch (...) {}
}

static void capture_native_workshop_product_paragraph(void *paragraph,
        const NativeString *source, int width, const void *job_item) {
    NativeInputCallbackScope callback;
    std::string complete;
    size_t first = SIZE_MAX;
    std::optional<NativeJobItemCaption> caption;
    try {
        if (paragraph && width == 29) {
            first = native_paragraph_row_count(paragraph);
            if (first <= 4096) {
                std::lock_guard<std::mutex> lock(g_native_workshop_requirement_mutex);
                std::erase_if(g_native_workshop_requirements,
                    [&](const NativeParagraphCapture &previous) {
                        return previous.owner == reinterpret_cast<uintptr_t>(paragraph) &&
                            previous.first_line >= first;
                    });
            }
        }
        std::string_view value;
        if (first <= 4096 && native_string_view(source, &value, 65536) &&
                !value.empty() && value.find('\0') == std::string_view::npos) {
            complete.assign(value);
            caption = capture_native_workshop_job_item(job_item, value);
        }
    } catch (...) {}
    callback.call_native([&] {
        if (g_real_native_paragraph) g_real_native_paragraph(paragraph, source, width);
    });
    try {
        remember_native_workshop_recipe_field(paragraph, width,
            std::move(complete), first, std::move(caption));
    } catch (...) {}
}

static bool uninstall_native_workshop_recipe_hooks() {
    auto &hook = g_native_workshop_recipe_hooks;
    if (!hook.code.uninstall("Workshop requirement capture restore")) return false;
    hook.normalize = nullptr;
    hook.destroy = nullptr;
    hook.paragraph_width = 0;
    clear_native_workshop_requirements();
    return true;
}

static bool install_native_workshop_recipe_hooks() {
    auto &hook = g_native_workshop_recipe_hooks;
    if (hook.code.installed) return true;
    if (native_workshop_recipe_hooks_active() &&
        !uninstall_native_workshop_recipe_hooks()) return false;
    struct InstallGuard {
        bool committed = false;
        ~InstallGuard() {
            if (!committed) {
                try { uninstall_native_workshop_recipe_hooks(); } catch (...) {}
            }
        }
    } guard;
    NativeWorkshopRecipeProfile profile;
    if (!resolve_native_workshop_recipe_profile(profile)) {
        log_line("ERROR", "Cannot resolve native workshop requirement capture profile");
        return false;
    }
    if (profile.shared_paragraphs) {
        if (!g_real_native_paragraph || profile.paragraph_width <= 0) return false;
        hook.paragraph_width = profile.paragraph_width;
        for (auto &call : profile.paragraph_calls)
            if (!call.wrapper) call.wrapper = reinterpret_cast<const void *>(&capture_native_workshop_recipe_paragraph);
        if (!profile.paragraph_calls.empty() &&
                !hook.code.install(profile.base,profile.paragraph_calls,"Workshop recipe paragraph source")) return false;
        guard.committed = true;
        return true;
    }
    if (!profile.normalize && !profile.destroy) {
        log_line("INFO", "Native workshop requirement capture is unavailable on this host; "
            "using shared complete-text tooltip recovery");
        guard.committed = true;
        return true;
    }
    if (!profile.normalize || !profile.destroy || profile.paragraph_width <= 0) return false;
    if (!profile.paragraph_calls.empty() && !g_real_native_paragraph) return false;
    hook.normalize = profile.normalize;
    hook.destroy = profile.destroy;
    hook.paragraph_width = profile.paragraph_width;
    auto calls = profile.paragraph_calls;
    calls.insert(calls.end(), {
            {profile.begin_site, profile.begin_target,
                reinterpret_cast<const void *>(&capture_native_workshop_requirement_begin),
                profile.begin_arguments},
            {profile.end_site, profile.end_target,
                reinterpret_cast<const void *>(&capture_native_workshop_requirement_end),
                profile.end_arguments},
        });
    if (!hook.code.install(profile.base, calls, "Workshop recipe field capture")) return false;
    guard.committed = true;
    log_line("INFO", "Enabled complete native workshop requirement and wrapped-row capture");
    return true;
}
