// A completed submission keeps its owned source and matches together. SDL
// can retain that whole submission while the worker prepares newer content.

struct NativeDfhackTranslationGraphicsScope {
    graphicst *&overlay_graphics;
    graphicst *previous_overlay, *previous_present;
    NativeDfhackTranslationGraphicsScope(graphicst *&overlay, graphicst *layer)
        : overlay_graphics(overlay), previous_overlay(overlay),
          previous_present(g_native_dfhack_present_graphics) {
        overlay_graphics = layer;
        g_native_dfhack_present_graphics = layer;
    }
    ~NativeDfhackTranslationGraphicsScope() {
        g_native_dfhack_present_graphics = previous_present;
        overlay_graphics = previous_overlay;
    }
};

static bool native_dfhack_translation_layout_compatible(
        const NativeDfhackLayerStorage &source, const NativeDfhackLayerStorage &latest) noexcept {
    if (!source.ready || !latest.ready || !source.graphics || !latest.graphics ||
            source.page_revision != latest.page_revision) return false;
    const auto &a = *source.graphics;
    const auto &b = *latest.graphics;
    if (a.dimx != b.dimx || a.dimy != b.dimy ||
            a.screen_pixel_x != b.screen_pixel_x || a.screen_pixel_y != b.screen_pixel_y ||
            a.tile_pixel_x != b.tile_pixel_x || a.tile_pixel_y != b.tile_pixel_y ||
            a.top_in_use != b.top_in_use ||
            std::memcmp(a.uccolor, b.uccolor, sizeof(a.uccolor))) return false;
    return true;
}

void Overlay::start_dfhack_translation_worker() {
    std::lock_guard<std::mutex> lock(dfhack_translation_mutex_);
    if (dfhack_translation_running_ || dfhack_translation_worker_.joinable()) return;
    dfhack_translation_stop_ = false;
    dfhack_translation_pending_.store(false, std::memory_order_release);
    dfhack_translation_requested_frame_.store({}, std::memory_order_release);
    dfhack_translation_consumed_frame_.store({}, std::memory_order_release);
    dfhack_translation_consumed_catalog_revision_.store(0, std::memory_order_release);
    dfhack_translation_consumed_identity_context_.store(0, std::memory_order_release);
    dfhack_translation_consumed_catalog_.store(0, std::memory_order_release);
    dfhack_translation_completed_frame_.store({}, std::memory_order_release);
    dfhack_translation_world_frame_.store({}, std::memory_order_release);
    dfhack_extension_prose_pending_.store(false, std::memory_order_release);
    dfhack_translation_cache_.clear();
    dfhack_translation_blocked_keys_.clear();
    try {
        dfhack_translation_cache_.reserve(8);
        dfhack_translation_blocked_keys_.reserve(8);
        dfhack_translation_worker_ = std::thread([this] { dfhack_translation_worker_loop(); });
        dfhack_translation_running_.store(true, std::memory_order_release);
    } catch (const std::exception &error) {
        dfhack_translation_stop_ = true;
        log_line("ERROR", std::string("Cannot start DFHack translation worker: ") + error.what());
    } catch (...) {
        dfhack_translation_stop_ = true;
        log_line("ERROR", "Cannot start DFHack translation worker: unknown exception");
    }
}

void Overlay::request_dfhack_translation_stop() {
    {
        std::lock_guard<std::mutex> lock(dfhack_translation_mutex_);
        dfhack_translation_running_.store(false, std::memory_order_release);
        dfhack_translation_stop_ = true;
        dfhack_translation_pending_.store(true, std::memory_order_release);
    }
    dfhack_translation_pending_.notify_all();
}

void Overlay::stop_dfhack_translation_worker() {
    request_dfhack_translation_stop();
    // Call before acquiring T: a worker already waiting for it must exit.
    if (dfhack_translation_worker_.joinable()) dfhack_translation_worker_.join();
    std::lock_guard<std::mutex> lock(dfhack_translation_mutex_);
    dfhack_translation_requested_frame_.store({}, std::memory_order_release);
    dfhack_translation_consumed_frame_.store({}, std::memory_order_release);
    dfhack_translation_completed_frame_.store({}, std::memory_order_release);
    dfhack_translation_world_frame_.store({}, std::memory_order_release);
    dfhack_translation_pending_.store(false, std::memory_order_release);
    dfhack_translation_cache_.clear();
    dfhack_translation_blocked_keys_.clear();
}

// Cache complete submissions, never a match list to apply to another input.
// Call with dfhack_translation_mutex_ held.
void Overlay::remember_dfhack_layer_frame(std::shared_ptr<const NativeDfhackTranslatedFrame> frame) {
    if (!frame || !frame->key) return;
    const auto previous = std::find_if(dfhack_translation_cache_.begin(),
        dfhack_translation_cache_.end(), [&](const auto &entry) { return entry->key == frame->key; });
    if (previous != dfhack_translation_cache_.end()) dfhack_translation_cache_.erase(previous);
    if (dfhack_translation_cache_.size() >= 8)
        dfhack_translation_cache_.erase(dfhack_translation_cache_.begin());
    dfhack_translation_cache_.push_back(std::move(frame));
}
void Overlay::block_dfhack_layer_frame(uint64_t key) {
    if (!key || std::find(dfhack_translation_blocked_keys_.begin(),
            dfhack_translation_blocked_keys_.end(), key) != dfhack_translation_blocked_keys_.end()) return;
    if (dfhack_translation_blocked_keys_.size() >= 8)
        dfhack_translation_blocked_keys_.erase(dfhack_translation_blocked_keys_.begin());
    dfhack_translation_blocked_keys_.push_back(key);
}

void Overlay::queue_dfhack_layer_frame(
        std::shared_ptr<const NativeDfhackLayerStorage> source) noexcept {
    if (!source || !source->ready || !source->graphics || !translation_enabled() ||
            !dfhack_translation_running_.load(std::memory_order_acquire)) return;
    try {
        const auto catalog = g_dfhack_output_snapshot.load(std::memory_order_acquire);
        const auto revision = dfhack_translation_catalog_revision_.load(std::memory_order_acquire);
        const auto context = native_identity_translation_context();
        const auto catalog_identity = reinterpret_cast<uintptr_t>(catalog.get());
        dfhack_translation_requested_frame_.store(source, std::memory_order_release);
        if (dfhack_translation_consumed_frame_.load(std::memory_order_acquire) == source &&
                dfhack_translation_consumed_catalog_revision_.load(std::memory_order_acquire) == revision &&
                dfhack_translation_consumed_identity_context_.load(std::memory_order_acquire) == context &&
                dfhack_translation_consumed_catalog_.load(std::memory_order_acquire) == catalog_identity &&
                !dfhack_extension_prose_pending_.load(std::memory_order_acquire)) return;
        // Producers do not wait for the result-cache mutex or the translator.
        dfhack_translation_pending_.store(true, std::memory_order_release);
        dfhack_translation_pending_.notify_one();
    } catch (...) {}
}
void Overlay::queue_dfhack_layer_translation() {
    queue_dfhack_layer_frame(native_dfhack_published_frame());
}

std::shared_ptr<const NativeDfhackTranslatedFrame> Overlay::completed_dfhack_layer_frame(
        std::shared_ptr<const NativeDfhackLayerStorage> latest) noexcept {
    if (!latest || !latest->ready || !latest->graphics ||
            latest->page_revision != native_dfhack_layer_page_revision()) return {};
    if (!translation_enabled()) {
        // DFHack still draws into private output in English mode. Publish
        // its original source with no suppressed glyphs or translated text;
        // displaying it must not depend on the translation worker.
        try {
            static const auto empty_matches = std::make_shared<const std::vector<Match>>();
            auto original = std::make_shared<NativeDfhackTranslatedFrame>();
            original->source = std::move(latest);
            original->matches = empty_matches;
            return original;
        } catch (...) { return {}; }
    }
    if (!dfhack_translation_running_.load(std::memory_order_acquire)) return {};
    queue_dfhack_layer_frame(latest);
    // Sitemap's civilization/location names and a few other typed fields
    // need live-world references. Finish those owned submissions at the SDL
    // translation boundary, before an older compatible frame can hide them.
    if (auto pending = dfhack_translation_world_frame_.exchange({}, std::memory_order_acq_rel)) {
        const auto current = [&] {
            return pending->source && pending->source->ready && pending->source->graphics &&
                pending->source->page_revision == native_dfhack_layer_page_revision() &&
                pending->catalog_revision == dfhack_translation_catalog_revision_.load(std::memory_order_acquire) &&
                pending->identity_context == native_identity_translation_context() &&
                pending->catalog == g_dfhack_output_snapshot.load(std::memory_order_acquire) &&
                native_dfhack_translation_layout_compatible(*pending->source, *latest);
        };
        try {
            TranslationStateScope translation;
            if (current()) {
                NativeDfhackLayerFrameReadScope frame_scope(pending->source);
                NativeDfhackTranslationGraphicsScope graphics(gps_, pending->source->graphics.get());
                NativeDfhackForegroundScope foreground;
                NativePanelReadScope panels(gps_);
                CellReadCacheScope cells(*this);
                auto completed = std::make_shared<NativeDfhackTranslatedFrame>(*pending);
                completed->matches = std::make_shared<const std::vector<Match>>(find_dfhack_matches(-1));
                if (current()) {
                    std::lock_guard<std::mutex> lock(dfhack_translation_mutex_);
                    if (!dfhack_translation_stop_) {
                        if (!dfhack_extension_prose_pending_.load(std::memory_order_acquire))
                            remember_dfhack_layer_frame(completed);
                        dfhack_translation_completed_frame_.store(std::move(completed), std::memory_order_release);
                    }
                } else queue_dfhack_layer_translation();
            } else queue_dfhack_layer_translation();
        } catch (const std::exception &error) {
            log_line("ERROR", std::string("DFHack world-field translation failed: ") + error.what());
            std::lock_guard<std::mutex> lock(dfhack_translation_mutex_);
            block_dfhack_layer_frame(pending->key);
        } catch (...) {
            log_line("ERROR", "DFHack world-field translation failed: unknown exception");
            std::lock_guard<std::mutex> lock(dfhack_translation_mutex_);
            block_dfhack_layer_frame(pending->key);
        }
    }
    const auto compatible = [&](const auto &frame) {
        return frame && frame->source && frame->matches &&
            native_dfhack_translation_layout_compatible(*frame->source, *latest);
    };
    // Catalog/context changes request another job. The previous complete
    // source remains safe to show while that replacement is being prepared.
    auto completed = dfhack_translation_completed_frame_.load(std::memory_order_acquire);
    if (compatible(completed)) return completed;
    try {
        std::unique_lock<std::mutex> lock(dfhack_translation_mutex_, std::try_to_lock);
        if (!lock.owns_lock()) return {};
        for (auto it = dfhack_translation_cache_.rbegin(); it != dfhack_translation_cache_.rend(); ++it)
            if (compatible(*it)) return *it;
    } catch (...) {}
    return {};
}

void Overlay::dfhack_translation_worker_loop() {
    for (;;) {
        uint64_t key = 0;
        std::shared_ptr<const NativeDfhackLayerStorage> source;
        std::shared_ptr<NativeDfhackTranslatedFrame> completed;
        dfhack_translation_pending_.wait(false, std::memory_order_acquire);
        {
            std::unique_lock<std::mutex> lock(dfhack_translation_mutex_);
            if (dfhack_translation_stop_) break;
            dfhack_translation_pending_.exchange(false, std::memory_order_acq_rel);
            source = dfhack_translation_requested_frame_.load(std::memory_order_acquire);
            dfhack_translation_consumed_frame_.store(source, std::memory_order_release);
        }
        try {
            TranslationWorkCancellationScope cancellation(&dfhack_translation_stop_);
            NativeDfhackLayerFrameReadScope frame_scope(source);
            const auto *input = frame_scope.storage();
            if (!source || !input || !input->ready || !input->graphics ||
                    input->page_revision != native_dfhack_layer_page_revision()) continue;
            TranslationStateScope translation_scope;
            {
                std::lock_guard<std::mutex> lock(dfhack_translation_mutex_);
                if (dfhack_translation_stop_) break;
            }
            auto *graphics = input->graphics.get();
            if (!graphics->screen || !config_.enabled || !face_ || rules_.empty() ||
                    graphics->dimx <= 0 || graphics->dimx > 1000 ||
                    graphics->dimy <= 0 || graphics->dimy > 1000) continue;
            NativeDfhackTranslationGraphicsScope layer_graphics(gps_, graphics);
            NativeDfhackForegroundScope foreground;
            NativePanelReadScope layer_reads(gps_);
            CellReadCacheScope layer_cells(*this);
            const auto catalog = g_dfhack_output_snapshot.load(std::memory_order_acquire);
            const auto revision = dfhack_translation_catalog_revision_.load(std::memory_order_acquire);
            const auto context = native_identity_translation_context();
            dfhack_translation_consumed_catalog_revision_.store(revision, std::memory_order_release);
            dfhack_translation_consumed_identity_context_.store(context, std::memory_order_release);
            dfhack_translation_consumed_catalog_.store(reinterpret_cast<uintptr_t>(catalog.get()),
                std::memory_order_release);
            key = dfhack_layer_translation_key();
            if (!key) continue;
            // The completed UI source also includes drawing commands.
            // Do not reuse a text-only key's old complete graphical source.
            for (const auto byte : input->command_bytes) {
                key ^= byte;
                key *= 1099511628211ULL;
            }
            if (!key) key = 1;
            const auto inputs_current = [&] {
                return revision == dfhack_translation_catalog_revision_.load(std::memory_order_acquire) &&
                    context == native_identity_translation_context() &&
                    catalog == g_dfhack_output_snapshot.load(std::memory_order_acquire) &&
                    input->page_revision == native_dfhack_layer_page_revision();
            };
            if (!inputs_current()) {
                dfhack_translation_consumed_identity_context_.store(~context, std::memory_order_release);
                queue_dfhack_layer_translation();
                continue;
            }
            {
                std::lock_guard<std::mutex> lock(dfhack_translation_mutex_);
                if (std::find(dfhack_translation_blocked_keys_.begin(),
                        dfhack_translation_blocked_keys_.end(), key) != dfhack_translation_blocked_keys_.end())
                    continue;
                const auto cached = std::find_if(dfhack_translation_cache_.begin(),
                    dfhack_translation_cache_.end(), [key](const auto &entry) { return entry->key == key; });
                if (cached != dfhack_translation_cache_.end() &&
                        !dfhack_extension_prose_pending_.load(std::memory_order_acquire)) {
                    auto completed = *cached;
                    remember_dfhack_layer_frame(completed);
                    dfhack_translation_completed_frame_.store(std::move(completed), std::memory_order_release);
                    continue;
                }
            }
            completed = std::make_shared<NativeDfhackTranslatedFrame>();
            completed->source = source;
            completed->key = key;
            completed->catalog_revision = revision;
            completed->identity_context = context;
            completed->catalog = catalog;
            DfhackTranslationThreadScope worker_scope;
            completed->matches = std::make_shared<const std::vector<Match>>(
                input->translation_content_ready && !input->translation_has_content
                    ? std::vector<Match>{} : find_dfhack_matches(-1));
            if (!inputs_current()) {
                dfhack_translation_consumed_identity_context_.store(~context, std::memory_order_release);
                queue_dfhack_layer_translation();
                continue;
            }
            {
                std::lock_guard<std::mutex> lock(dfhack_translation_mutex_);
                if (dfhack_translation_stop_) break;
                if (!dfhack_extension_prose_pending_.load(std::memory_order_acquire))
                    remember_dfhack_layer_frame(completed);
                dfhack_translation_completed_frame_.store(std::move(completed), std::memory_order_release);
            }
        } catch (const TranslationWorkCancelled &) {
            // Stop is requested before join and does not need the renderer's
            // translation lock. Unwind an active parse instead of finishing a
            // retired book while shutdown waits for this worker.
            if (dfhack_translation_stop_.load(std::memory_order_acquire)) break;
        } catch (const DfhackTranslationNeedsWorld &) {
            std::lock_guard<std::mutex> lock(dfhack_translation_mutex_);
            // World-dependent names are deferred work, not failed keys. The
            // SDL consumer binds this exact source and completes its matches.
            if (!dfhack_translation_stop_ && completed)
                dfhack_translation_world_frame_.store(std::move(completed), std::memory_order_release);
        } catch (const std::exception &error) {
            log_line("ERROR", std::string("DFHack layer translation failed: ") + error.what());
            std::lock_guard<std::mutex> lock(dfhack_translation_mutex_);
            if (!dfhack_translation_stop_) block_dfhack_layer_frame(key);
        } catch (...) {
            log_line("ERROR", "DFHack layer translation failed: unknown exception");
            std::lock_guard<std::mutex> lock(dfhack_translation_mutex_);
            if (!dfhack_translation_stop_) block_dfhack_layer_frame(key);
        }
    }
}
