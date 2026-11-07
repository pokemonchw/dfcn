// Included after the widget callbacks and their existing hook state.
// The complete profile owns its wrap CALL through code; the fallback owns
// this separate hook. These paths never install over one another.
static NativeCallHook g_native_independent_multiline_wrap_hook;

static bool native_independent_caption_widgets_active() {
    return g_native_independent_multiline_wrap_hook.active();
}

static bool uninstall_native_independent_multiline_wrap() {
    if (!g_native_independent_multiline_wrap_hook.uninstall("Native widget paragraph wrap restore")) return false;
    return !g_native_independent_multiline_wrap_hook.active();
}

static void native_caption_widget_failure(const char *label, const char *reason) {
    log_line("WARN", std::string(label) + ": " + reason + "; base captions remain active");
}

template<class Binding>
struct NativeCaptionWidgetInstallGuard {
    NativeImportHook &hook;
    Binding &binding;
    Binding previous;
    const char *label;
    bool committed = false;
    ~NativeCaptionWidgetInstallGuard() {
        if (committed) return;
        try {
            if (!hook.uninstall(label) || hook.active()) return;
            hook = {};
            binding = previous;
        } catch (...) {}
    }
};

static bool install_native_truncated_widget_transaction(uintptr_t base) {
    constexpr const char *label = "Native original widget caption capture";
    if (g_native_caption_widget_hook.active()) return true;
    NativeCaptionWidgetBinding binding;
    if (!resolve_native_truncated_widget_binding(base, binding)) {
        native_caption_widget_failure(label, "object or render contract unavailable");
        return false;
    }
    void *original = std::atomic_ref<void *>(*binding.render_slot).load(std::memory_order_acquire);
    if (!original) {
        native_caption_widget_failure(label, "original render slot is empty");
        return false;
    }
    NativeCaptionWidgetInstallGuard guard{g_native_caption_widget_hook,
        g_native_caption_widget_binding, g_native_caption_widget_binding, label};
    g_native_caption_widget_binding = binding;
    g_native_caption_widget_hook = {binding.render_slot, original,
        reinterpret_cast<void *>(&capture_native_truncated_widget_render)};
    if (g_native_caption_widget_hook.install(label)) {
        guard.committed = true;
        return true;
    }
    native_caption_widget_failure(label, "render slot installation failed");
    return false;
}

static bool install_native_textbox_widget_transaction(uintptr_t base) {
    constexpr const char *label = "Native editable textbox properties";
    if (g_native_textbox_widget_hook.active()) return true;
    NativeTextboxWidgetBinding binding;
    if (!resolve_native_textbox_widget_binding(base, binding)) {
        native_caption_widget_failure(label, "editable object or draw contract unavailable");
        return false;
    }
    if (std::atomic_ref<void *>(*binding.render_slot).load(std::memory_order_acquire) != binding.expected_render) {
        native_caption_widget_failure(label, "original render slot differs");
        return false;
    }
    NativeCaptionWidgetInstallGuard guard{g_native_textbox_widget_hook,
        g_native_textbox_widget_binding, g_native_textbox_widget_binding, label};
    g_native_textbox_widget_binding = binding;
    g_native_textbox_widget_hook = {binding.render_slot, binding.expected_render,
        reinterpret_cast<void *>(&capture_native_textbox_widget_render)};
    if (g_native_textbox_widget_hook.install(label)) {
        guard.committed = true;
        return true;
    }
    native_caption_widget_failure(label, "render slot installation failed");
    return false;
}

static bool install_native_multiline_widget_transaction(uintptr_t base) {
    constexpr const char *label = "Native complete multiline widget capture";
    if (g_native_multiline_widget_hook.active()) return true;
    if (g_native_caption_hooks.code.active() || g_native_independent_multiline_wrap_hook.active()) {
        native_caption_widget_failure(label, "a paragraph CALL owner is still active");
        return false;
    }
    NativeMultilineWidgetBinding binding;
    if (!g_native_clipped_caption_hooks.flag_draw_entry.installed ||
            !g_native_clipped_caption_hooks.flag_draw ||
            !resolve_native_multiline_widget_binding(base, binding)) {
        native_caption_widget_failure(label, "paragraph object or flagged draw contract unavailable");
        return false;
    }
    if (std::atomic_ref<void *>(*binding.render_slot).load(std::memory_order_acquire) != binding.expected_render) {
        native_caption_widget_failure(label, "original render slot differs");
        return false;
    }
    const auto wrap = reinterpret_cast<NativeCaptionMultilineWrapFn>(native_pe_address(base, 0x52def0));
    std::vector<NativeCall> calls{{0x14198f1, 0x52def0,
        reinterpret_cast<const void *>(&wrap_native_multiline_announcement)}};
    if (!wrap || !native_reference_calls(calls, 0)) {
        native_caption_widget_failure(label, "paragraph wrap CALL contract unavailable");
        return false;
    }
    // Resolve arrange before touching either slot; a missing height adapter
    // leaves the native arrange running and does not disable render capture.
    const bool arrange = resolve_native_multiline_arrange_binding(base, binding);
    g_native_multiline_widget_binding = binding;
    g_native_multiline_wrap = wrap;
    bool committed = false;
    struct Guard {
        bool &committed;
        ~Guard() {
            if (committed) return;
            try {
                if (!g_native_multiline_widget_hook.uninstall("Native multiline render rollback") ||
                        g_native_multiline_widget_hook.active()) return;
                g_native_multiline_widget_hook = {};
                if (!uninstall_native_independent_multiline_wrap()) return;
                g_native_multiline_widget_binding = {};
                g_native_multiline_wrap = nullptr;
            } catch (...) {}
        }
    } guard{committed};
    if (!g_native_independent_multiline_wrap_hook.install(base, calls, "Native widget paragraph wrap")) return false;
    g_native_multiline_widget_hook = {binding.render_slot, binding.expected_render,
        reinterpret_cast<void *>(&capture_native_multiline_widget_render)};
    if (!g_native_multiline_widget_hook.install(label)) return false;
    committed = true;
    if (arrange) {
        g_native_multiline_arrange_hook = {binding.arrange_slot, binding.expected_arrange,
            reinterpret_cast<void *>(&arrange_native_multiline_widget)};
        if (!g_native_multiline_arrange_hook.install("Native multiline wrapped height")) {
            if (g_native_multiline_arrange_hook.uninstall("Native multiline height rollback") &&
                    !g_native_multiline_arrange_hook.active()) g_native_multiline_arrange_hook = {};
            native_caption_widget_failure(label, "height adapter deferred; paragraph capture remains active");
        }
    } else {
        native_caption_widget_failure(label, "height contract unavailable; native arrangement retained");
    }
    return true;
}

static void install_native_independent_caption_widgets() {
    // Successful complete installation already owns these callbacks and the
    // multiline wrap CALL. Never replace its saved originals with our own.
    if (g_native_caption_hooks.code.installed) return;
    if (!g_native_basic_caption_installed || !g_native_clipped_caption_hooks.draw_entry.installed) return;
    const uintptr_t base = native_history_profile_base();
    const auto attempt = [&](const char *label, auto install) {
        try {
            if (install(base)) log_line("INFO", std::string(label) + " enabled independently of page observers");
        } catch (const std::exception &error) {
            native_caption_widget_failure(label, error.what());
        } catch (...) { native_caption_widget_failure(label, "preparation failed"); }
    };
    attempt("Native truncated widget", install_native_truncated_widget_transaction);
    attempt("Native editable textbox", install_native_textbox_widget_transaction);
    attempt("Native multiline widget", install_native_multiline_widget_transaction);
}
