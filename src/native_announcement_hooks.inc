// Observe the complete source at submission, before native wrapping, clipping
// or differently colored drawing can divide it into unrelated dictionary hits.
using NativeAnnouncementFn = void (*)(void *, const NativeString *, const void *);
struct NativeAnnouncementBinding {
    unsigned char *entry = nullptr;
    std::vector<unsigned char> prefix;
    unsigned char *speech_entry = nullptr;
    std::vector<unsigned char> speech_prefix;
    unsigned char *log_entry = nullptr;
    std::vector<unsigned char> log_prefix;
};
#include "native_announcement_profile.inc"
static NativeEntryHook g_native_announcement_entry;
static NativeAnnouncementFn g_real_native_announcement = nullptr;
using NativeSpeechTransformFn = void (*)(NativeString *);
static NativeEntryHook g_native_speech_transform_entry;
static NativeSpeechTransformFn g_real_native_speech_transform = nullptr;
using NativeAnnouncementLogRenderFn = void (*)(uint64_t, uint64_t, uint64_t, uint64_t);
static NativeEntryHook g_native_announcement_log_entry;
static NativeAnnouncementLogRenderFn g_real_native_announcement_log = nullptr;
static std::atomic_uint g_active_native_announcement_callbacks{0};
#include "native_announcement_identity.inc"
#include "native_announcement_kinship.inc"
#include "native_announcement_log_fields.inc"
#include "native_announcement_log_speech.inc"
#include "native_announcement_log_worker_inputs.inc"

static void capture_native_announcement_log(uint64_t owner, uint64_t second,
        uint64_t third, uint64_t fourth) {
    struct Scope {
        Scope() { g_active_native_announcement_callbacks.fetch_add(1, std::memory_order_acq_rel); }
        ~Scope() { g_active_native_announcement_callbacks.fetch_sub(1, std::memory_order_acq_rel); }
    } scope;
    NativeInputCallbackScope callback;
    const auto original = g_real_native_announcement_log;
    if (!original) return;
    TranslationStateScope translation;
    auto *gps = native_graphics();
    auto &layer = g_native_announcement_log_layer;
    // A nested native renderer is already using this document's private
    // output. Its caller owns the frame and must retain that ownership.
    if (native_announcement_log_foreground_view(gps)) {
        callback.call_native([&] { original(owner, second, third, fourth); });
        return;
    }
    const auto native_fallback = [&] {
        native_announcement_log_begin_frame();
        g_native_announcement_log_source_context_valid = false;
        callback.call_native([&] { original(owner, second, third, fourth); });
    };
    if (!gps || !owner || !g_native_help_layer.native_renderer || !g_native_help_layer.renderer ||
            !gps->screen || !gps->screen_top ||
            gps->dimx <= 0 || gps->dimx > 1000 || gps->dimy <= 0 || gps->dimy > 1000) {
        log_line("WARN", "Announcement graphics unavailable; retaining the native page draw");
        native_fallback();
        return;
    }
    size_t first_visible = 0, end_visible = 0;
    std::optional<SDL_Rect> panel;
    try {
        NativeBorrowedVector<uintptr_t> rows;
        const auto *settings = native_ui_settings_source();
        int32_t grid_y = 0, scroll = 0;
#ifdef _WIN32
        native_ui_settings_read_member(settings, 0x18, grid_y);
#else
        if (settings) grid_y = settings->display.grid_y;
#endif
        if (grid_y > 0 && grid_y <= 1000 && native_history_read_vector(owner + 8, rows) &&
                native_history_copy(owner + 0x24, scroll)) {
            // These are the producer's actual fill and row-loop bounds. They
            // define owned stores directly, without discovering them in a grid.
            const int64_t center = (int64_t(static_cast<int32_t>(third)) +
                static_cast<int32_t>(fourth)) / 2;
            const int64_t bottom = int64_t(grid_y) - 5;
            const int64_t height = std::min<int64_t>(39, int64_t(rows.size()) + 6);
            const int64_t top = bottom - 19 > height ? bottom - height + 1 : 20;
            panel = native_notification_visible_bounds(*gps,
                center - 50, top, center + 50, bottom);
            const int64_t capacity = std::max<int64_t>(0, bottom - (top + 4));
            first_visible = static_cast<size_t>(std::max<int64_t>(0,
                std::min<int64_t>(scroll, int64_t(rows.size()) - capacity)));
            end_visible = static_cast<size_t>(std::min<int64_t>(rows.size(),
                int64_t(first_visible) + capacity));
        }
    } catch (...) {}
    if (!panel) {
        log_line("WARN", "Announcement panel ownership unavailable; retaining the native page draw");
        native_fallback();
        return;
    }
    try {
        native_announcement_log_begin_frame();
        const bool resized = layer.foreground.dimx != gps->dimx ||
            layer.foreground.dimy != gps->dimy;
        layer.foreground.prepare(*gps);
        native_ui_detach_map_output(*layer.foreground.graphics());
        // Only allocation/stride changes initialize the entire new storage.
        // Ordinary frames clear just the preceding producer-owned stores.
        if (resized) layer.foreground.clear();
        else for (const auto &frame : layer.frames) layer.foreground.clear(frame);
        layer.frames.clear();
        layer.frames.push_back(*panel);
        g_native_announcement_log_panel = *panel;
    } catch (...) {
        log_line("WARN", "Announcement private allocation failed; retaining the native page draw");
        native_fallback();
        return;
    }
    layer.native_renderer = g_native_help_layer.native_renderer;
    layer.renderer = g_native_help_layer.renderer;
    bool native_draw_started = false;
    try {
        // Redirect before the first native background/border store. The grid
        // starts empty, so no live HUD glyph or texture enters this document.
        NativeUiGridBinding output(gps, *layer.foreground.graphics());
        struct WriteScope {
            const graphicst *previous = g_native_announcement_log_write_graphics;
            explicit WriteScope(const graphicst *graphics) {
                g_native_announcement_log_write_graphics = graphics;
            }
            ~WriteScope() { g_native_announcement_log_write_graphics = previous; }
        } writing(gps);
        // Preserve all four register arguments; the complete native body
        // consumes no incoming stack arguments on either supported host ABI.
        callback.call_native([&] {
            native_draw_started = true;
            original(owner, second, third, fourth);
        });
        native_graphics_read_member(gps, offsetof(graphicst, top_in_use),
            layer.foreground.graphics()->top_in_use);
        // A retained layer can be presented after the capture epoch advances.
        // Freeze its complete parents now, alongside their actual drawn rows.
        try { g_native_announcement_log_records = native_announcement_log_paragraphs(
            owner, first_visible, end_visible); }
        catch (...) { g_native_announcement_log_records.clear(); }
    } catch (...) {
        if (!native_draw_started) {
            log_line("WARN", "Announcement output binding failed; retaining the native page draw");
            native_fallback();
        } else {
            native_announcement_log_begin_frame();
            g_native_announcement_log_source_context_valid = false;
            log_line("ERROR", "Announcement native draw failed inside its private layer");
        }
        return;
    }
    // Submit the current viewport before publishing its first frame. Parsing
    // stays on independent workers so wheel/slider movement never waits for it.
    try { native_announcement_log_prepare_visible(); } catch (...) {}
    g_native_announcement_log_source_context_valid = false;
    try {
#ifdef _WIN32
        // Freeze the native atlas/display selections once with this producer
        // submission. Repeated Present must not resnapshot nine font tables.
        g_native_announcement_log_fonts.emplace(true, true);
        g_native_announcement_log_resources_valid =
            g_native_announcement_log_fonts->append_native_context(
                g_native_announcement_log_resources);
        if (layer.native_renderer) {
            std::array<int32_t, 4> raster{};
            uint8_t zoom = 0;
            int32_t factor = 0;
            if (native_renderer_raster(layer.native_renderer, raster) &&
                    native_object_read_member(layer.native_renderer,
                        {0x180, "renderer_2d_base", "use_viewport_zoom"}, zoom) &&
                    native_object_read_member(layer.native_renderer,
                        {0x184, "renderer_2d_base", "viewport_zoom_factor"}, factor)) {
                auto &resources = g_native_announcement_log_resources;
                resources.append(reinterpret_cast<const char *>(raster.data()), sizeof(raster));
                resources.append(reinterpret_cast<const char *>(&zoom), sizeof(zoom));
                resources.append(reinterpret_cast<const char *>(&factor), sizeof(factor));
            } else g_native_announcement_log_resources_valid = false;
        }
#else
        g_native_announcement_log_resources_valid = true;
#endif
        g_native_announcement_log_source_context = native_announcement_log_source_key();
        g_native_announcement_log_source_context_valid = g_native_announcement_log_resources_valid;
    } catch (...) { g_native_announcement_log_source_context.clear(); }
    ++g_native_announcement_log_submission;
    layer.ready = true;
    NativeUiReadScope::invalidate_reads();
}

static void capture_native_speech_transform(NativeString *source) {
    struct Scope {
        Scope() { g_active_native_announcement_callbacks.fetch_add(1, std::memory_order_acq_rel); }
        ~Scope() { g_active_native_announcement_callbacks.fetch_sub(1, std::memory_order_acq_rel); }
    } scope;
    std::string original;
    try {
        std::string_view text;
        if (native_string_view(source, &text, SIZE_MAX)) original.assign(text);
    } catch (...) {}
    if (g_real_native_speech_transform) g_real_native_speech_transform(source);
    try {
        std::string_view rendered;
        if (!original.empty() && native_string_view(source, &rendered, SIZE_MAX)) {
            remember_native_speech_source(original, rendered);
            remember_native_announcement_log_speech_transform(original, rendered);
        }
    } catch (...) {}
}

static void capture_native_announcement(void *manager, const NativeString *source,
        const void *parameters) {
    struct Scope {
        Scope() { g_active_native_announcement_callbacks.fetch_add(1, std::memory_order_acq_rel); }
        ~Scope() { g_active_native_announcement_callbacks.fetch_sub(1, std::memory_order_acq_rel); }
    } scope;
    int16_t submitted_type = -1;
    std::string submitted_source;
    std::shared_ptr<const NativeAnnouncementUnitRecord> submitted_fields;
    try {
        std::string_view text;
        // This argument is the game's live submitted string, with its native
        // size/capacity validated by the ABI adapter. Long reading records
        // must not disappear from capture at an arbitrary prose byte limit.
        if (parameters && native_string_view(source, &text, SIZE_MAX)) {
            int16_t type = -1;
            std::memcpy(&type, parameters, sizeof(type));
            if (type >= 0 && type < 356) {
                submitted_source.assign(text);
                submitted_type = type;
                // Freeze the exact party and optional historical body after
                // the verified traveller constructor has appended both.
                if (type == 301)
                    remember_native_mission_return_submission(
                        reinterpret_cast<uintptr_t>(source), text);
                submitted_fields = remember_native_announcement_unit_submission(type, text);
                remember_native_announcement(type, text);
            }
        }
    } catch (...) {}
    NativeAnnouncementLogEventSubmission event_ticket;
    NativeAnnouncementLogFieldSubmission field_ticket;
    NativeAnnouncementLogSpeechSubmission speech_ticket;
    try {
        if (submitted_type >= 0)
            event_ticket = begin_native_announcement_log_event_submission(submitted_type, source);
    } catch (...) {}
    try {
        field_ticket = begin_native_announcement_log_field_submission(
            std::move(submitted_fields), submitted_source);
    } catch (...) {}
    try {
        speech_ticket = begin_native_announcement_log_speech_submission(submitted_type, source);
    } catch (...) {}
    if (g_real_native_announcement) g_real_native_announcement(manager, source, parameters);
    try { finish_native_announcement_log_event_submission(event_ticket); }
    catch (...) {}
    try { finish_native_announcement_log_field_submission(field_ticket); }
    catch (...) {}
    try { finish_native_announcement_log_speech_submission(speech_ticket); }
    catch (...) {}
    // The native submitter may coalesce a repeat without allocating a new
    // report. Queue its owned complete key AFTER the native update, including
    // when a draw already observed the pre-submit recent-source snapshot.
    try { finish_native_announcement_submission(submitted_type, submitted_source); }
    catch (...) {
        std::lock_guard<std::mutex> lock(g_native_announcement_mutex);
        g_native_announcement_history_full_refresh = true;
    }
    // Every formatter/event ticket is now bound to the actual native report
    // ID, including a coalesced repeat. Preheat its translation asynchronously
    // before any notification discovers it through wrapped visible rows.
    try { native_announcement_log_preheat_submission(submitted_type, submitted_source); }
    catch (...) {}
}

static bool native_announcement_hook_active() {
    return g_native_announcement_entry.active() || g_native_speech_transform_entry.active() ||
        g_native_announcement_log_entry.active() ||
        native_announcement_kinship_hook_active() ||
        native_announcement_log_speech_hook_active() ||
        g_active_native_announcement_callbacks.load(std::memory_order_acquire) != 0;
}
static void uninstall_native_announcement_hook() {
    if (g_active_native_announcement_callbacks.load(std::memory_order_acquire) != 0) return;
    const bool speech = g_native_speech_transform_entry.uninstall("Native speech source capture");
    const bool announcement = g_native_announcement_entry.uninstall("Native announcement capture");
    const bool log = g_native_announcement_log_entry.uninstall("Native announcement log ownership");
    const bool kinship = uninstall_native_announcement_kinship_hook();
    const bool spoken = uninstall_native_announcement_log_speech_hook();
    if (speech) g_real_native_speech_transform = nullptr;
    if (announcement) g_real_native_announcement = nullptr;
    if (log) {
        g_real_native_announcement_log = nullptr;
        native_announcement_log_release_layer();
    }
    if (speech && announcement && log && kinship && spoken) {
        clear_native_announcement_sources();
        clear_native_announcement_unit_identities();
    }
}
static bool install_native_optional_announcement_fields() {
    // Family and spoken-token producers contribute independent semantic
    // records. Missing records already retain their native text; neither
    // producer owns the submission entry or the complete log page.
    const auto optional = [](const char *label, auto install, auto uninstall, auto active) {
        bool installed = false;
        try { installed = install(); }
        catch (const std::exception &error) {
            log_line("WARN", std::string(label) + ": " + error.what());
        } catch (...) { log_line("WARN", std::string(label) + ": binding preparation failed"); }
        if (installed) return true;
        // A failed code restoration is still a real error. Keep its saved
        // originals alive until the owning teardown can restore the patch.
        if (!uninstall() || active()) return false;
        log_line("WARN", std::string(label) +
            " deferred; announcement submission and page capture remain enabled");
        return true;
    };
    return optional("Native announcement kinship fields", install_native_announcement_kinship_hook,
            uninstall_native_announcement_kinship_hook, native_announcement_kinship_hook_active) &&
        optional("Native announcement speech fields", install_native_announcement_log_speech_hook,
            uninstall_native_announcement_log_speech_hook, native_announcement_log_speech_hook_active);
}

static bool install_native_announcement_hook() {
    if (g_native_announcement_entry.installed && g_native_speech_transform_entry.installed
            && g_native_announcement_log_entry.installed)
        return install_native_optional_announcement_fields();
    if (native_announcement_hook_active()) {
        uninstall_native_announcement_hook();
        if (native_announcement_hook_active()) return false;
    }
    NativeAnnouncementBinding binding;
    if (!resolve_native_announcement_binding(binding)) return false;
    if (!binding.entry || !binding.speech_entry) return false;
    if (!binding.log_entry) return false;
    if (!g_native_announcement_entry.prepare(binding.entry, binding.prefix,
            reinterpret_cast<const void *>(&capture_native_announcement), {},
            "Native announcement capture")) return false;
    g_real_native_announcement = reinterpret_cast<NativeAnnouncementFn>(
        g_native_announcement_entry.original);
    if (!g_native_announcement_entry.install("Native announcement capture")) {
        uninstall_native_announcement_hook();
        return false;
    }
    if (!g_native_speech_transform_entry.prepare(binding.speech_entry, binding.speech_prefix,
            reinterpret_cast<const void *>(&capture_native_speech_transform), {},
            "Native speech source capture")) {
        uninstall_native_announcement_hook();
        return false;
    }
    g_real_native_speech_transform = reinterpret_cast<NativeSpeechTransformFn>(
        g_native_speech_transform_entry.original);
    if (!g_native_speech_transform_entry.install("Native speech source capture")) {
        uninstall_native_announcement_hook();
        return false;
    }
    if (binding.log_entry) {
        if (!g_native_announcement_log_entry.prepare(binding.log_entry, binding.log_prefix,
                reinterpret_cast<const void *>(&capture_native_announcement_log), {},
                "Native announcement log ownership")) {
            uninstall_native_announcement_hook();
            return false;
        }
        g_real_native_announcement_log = reinterpret_cast<NativeAnnouncementLogRenderFn>(
            g_native_announcement_log_entry.original);
        if (!g_native_announcement_log_entry.install("Native announcement log ownership")) {
            uninstall_native_announcement_hook();
            return false;
        }
    }
    if (!install_native_optional_announcement_fields()) {
        uninstall_native_announcement_hook();
        return false;
    }
    log_line("INFO", "Enabled native announcement submission, speech source and log page capture");
    return true;
}
