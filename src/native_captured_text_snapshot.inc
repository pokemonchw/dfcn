// Resolve retained main-page captions against the pinned display buffers once,
// before cache keys, source matching and layout borrow the same registry.
static void bind_native_drawn_text_frame(const graphicst &graphics) {
    if (!graphics.screen || graphics.dimx <= 0 || graphics.dimx > 1000 ||
            graphics.dimy <= 0 || graphics.dimy > 1000) return;
    const uintptr_t journal_base = native_history_profile_base();
#ifdef _WIN32
    const std::array journal_title_callers{
        native_reference_address(journal_base, 0xc3197),
        native_reference_address(journal_base, 0xc31d9),
    };
    const uintptr_t journal_counter_caller = native_reference_address(journal_base, 0xc3263);
#else
    const std::array journal_title_callers{
        native_reference_address(journal_base, 0x17cf93a),
        native_reference_address(journal_base, 0x17cf972),
        native_reference_address(journal_base, 0x17cfd0e),
    };
    const uintptr_t journal_counter_caller = native_reference_address(journal_base, 0x17cfa9b);
#endif
    std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
    bool changed = false;
    const auto bind = [&](NativeDrawnTextRow &row,
            const std::vector<NativeDrawnTextRow> &draws) {
        const auto *grid = row.top_layer ? graphics.screen_top : graphics.screen;
        if (!grid || !row.draw_grid || row.draw_grid == grid ||
                row.draw_dimx != graphics.dimx || row.draw_dimy != graphics.dimy ||
                row.y < 0 || row.y >= graphics.dimy || row.source.empty()) return;
        // A save's independently drawn status can replace the middle of a
        // long header name. Its actual string field, later status draw and
        // every surviving visible byte prove the retained source together.
        // Bound this exception by the original writer's clip; an overlong
        // name must never make the ordinary full-source walk read off-grid.
        const auto saved_name_current = [&]() {
            if (!row.address || row.source.size() > 4096) return false;
            int left = std::max(0, row.x);
            int right = static_cast<int>(std::clamp<int64_t>(
                int64_t(row.x) + static_cast<int64_t>(row.source.size()), 0, graphics.dimx));
            if (row.draw_clip) {
                const auto &clip = *row.draw_clip;
                if (row.y < clip.y || row.y >= int64_t(clip.y) + clip.h) return false;
                left = std::max(left, clip.x);
                right = static_cast<int>(std::clamp<int64_t>(int64_t(clip.x) + clip.w, 0, right));
            }
            if (left >= right) return false;
            return std::any_of(draws.begin(), draws.end(), [&](const auto &state) {
                if (!is_save_list_state(state.source) || state.top_layer != row.top_layer ||
                        !state.draw_grid || (state.draw_grid != row.draw_grid &&
                            state.draw_grid != grid) ||
                        state.draw_dimx != row.draw_dimx || state.draw_dimy != row.draw_dimy ||
                        state.draw_epoch != row.draw_epoch || state.y != row.y ||
                        state.sequence <= row.sequence || state.x <= row.x ||
                        state.x < 0 || state.x >= graphics.dimx ||
                        state.source.size() > static_cast<size_t>(graphics.dimx - state.x))
                    return false;
                const int state_end = state.x + static_cast<int>(state.source.size());
                if (state.x >= right || state_end <= left || (state.draw_clip &&
                        (state.x < state.draw_clip->x || state.y < state.draw_clip->y ||
                         state_end > int64_t(state.draw_clip->x) + state.draw_clip->w ||
                         state.y >= int64_t(state.draw_clip->y) + state.draw_clip->h)))
                    return false;
                const auto complete = row.complete_source.empty()
                    ? std::string_view(row.source) : std::string_view(row.complete_source);
                if (!capture_native_save_name_source(row.address, complete)) return false;
                for (size_t byte = 0; byte < state.source.size(); ++byte) {
                    const size_t tile = (static_cast<size_t>(state.x) + byte) * graphics.dimy + row.y;
                    if (grid[tile * 8] != static_cast<unsigned char>(state.source[byte])) return false;
                }
                bool visible_name = false;
                for (int x = left; x < right; ++x) {
                    if (x >= state.x && x < state_end) continue;
                    const size_t tile = static_cast<size_t>(x) * graphics.dimy + row.y;
                    const auto expected = static_cast<unsigned char>(row.source[
                        static_cast<size_t>(int64_t(x) - row.x)]);
                    const auto ch = grid[tile * 8];
                    if ((ch ? ch : static_cast<unsigned char>(' ')) != expected) return false;
                    if (expected != ' ') visible_name = true;
                }
                return visible_name;
            });
        };
        if (row.x < 0 || row.x >= graphics.dimx ||
                row.source.size() > static_cast<size_t>(graphics.dimx - row.x)) {
            if (saved_name_current()) {
                row.draw_grid = grid;
                changed = true;
            }
            return;
        }
        // Native display rotates its buffers independently of retained addst
        // records. Bind ordinary records only while their ENTIRE source
        // remains at the same coordinates on the same logical plane. Never read
        // the old buffer, infer another owner from its spelling, or change the
        // captured caller, epoch, order, or typed identity/name metadata.
        bool current = true;
        for (size_t byte = 0; byte < row.source.size(); ++byte) {
            const size_t tile = (static_cast<size_t>(row.x) + byte) * graphics.dimy + row.y;
            const auto ch = grid[tile * 8];
            if ((ch ? ch : static_cast<unsigned char>(' ')) !=
                    static_cast<unsigned char>(row.source[byte])) {
                current = false;
                break;
            }
        }
        if (!current) current = saved_name_current();
        if (!current) {
            if (!journal_base || std::find(journal_title_callers.begin(),
                    journal_title_callers.end(), row.native_caller) ==
                        journal_title_callers.end()) return;
            // Events paint their counter after the wrapped title. Its exact
            // producer can overwrite the title's tail on every retained buffer;
            // require that whole counter and every remaining title byte here.
            current = std::any_of(draws.begin(), draws.end(), [&](const auto &counter) {
                if (counter.native_caller != journal_counter_caller ||
                        counter.top_layer != row.top_layer ||
                        !counter.draw_grid || (counter.draw_grid != row.draw_grid &&
                            counter.draw_grid != grid) ||
                        counter.draw_dimx != row.draw_dimx || counter.draw_dimy != row.draw_dimy ||
                        counter.draw_epoch != row.draw_epoch || counter.y != row.y ||
                        counter.sequence <= row.sequence || counter.x <= row.x ||
                        counter.x >= graphics.dimx || counter.source.empty() ||
                        counter.source.size() > static_cast<size_t>(graphics.dimx - counter.x) ||
                        static_cast<size_t>(counter.x - row.x) >= row.source.size()) return false;
                const int counter_end = counter.x + static_cast<int>(counter.source.size());
                if (counter.draw_clip &&
                        (counter.x < counter.draw_clip->x || counter.y < counter.draw_clip->y ||
                         counter_end > int64_t(counter.draw_clip->x) + counter.draw_clip->w ||
                         counter.y >= int64_t(counter.draw_clip->y) + counter.draw_clip->h)) return false;
                for (size_t byte = 0; byte < counter.source.size(); ++byte) {
                    const size_t tile = (static_cast<size_t>(counter.x) + byte) * graphics.dimy + row.y;
                    if (grid[tile * 8] != static_cast<unsigned char>(counter.source[byte])) return false;
                }
                bool visible_title = false;
                for (size_t byte = 0; byte < row.source.size(); ++byte) {
                    const int x = row.x + static_cast<int>(byte);
                    if (x >= counter.x && x < counter_end) continue;
                    const size_t tile = static_cast<size_t>(x) * graphics.dimy + row.y;
                    const auto expected = static_cast<unsigned char>(row.source[byte]);
                    const auto ch = grid[tile * 8];
                    if ((ch ? ch : static_cast<unsigned char>(' ')) != expected) return false;
                    if (expected != ' ' && (!row.draw_clip ||
                            (x >= row.draw_clip->x && row.y >= row.draw_clip->y &&
                             x < int64_t(row.draw_clip->x) + row.draw_clip->w &&
                             row.y < int64_t(row.draw_clip->y) + row.draw_clip->h)))
                        visible_title = true;
                }
                return visible_title;
            });
            if (!current) return;
        }
        row.draw_grid = grid;
        changed = true;
    };
    for (auto &row : g_native_drawn_text_rows) bind(row, g_native_drawn_text_rows);
    for (auto &row : g_native_drawn_top_text_rows) bind(row, g_native_drawn_top_text_rows);
    if (changed) ++g_native_drawn_text_revision;
}

// One display preparation shares these owned sources between its semantic
// key and discovery. The next native frame always starts with fresh reads.
struct NativeAdventureBackgroundReadState {
    bool belief_read = false, choices_read = false, home_read = false;
    bool context_read = false;
    std::optional<NativeAdventureBeliefCache> belief;
    std::optional<std::vector<NativeAdventureBeliefChoice>> choices;
    std::optional<NativeAdventureHomeCache> home;
    std::optional<std::string> context;
};
static thread_local NativeAdventureBackgroundReadState *g_native_adventure_background_read = nullptr;

class NativeAdventureBackgroundReadScope {
    NativeAdventureBackgroundReadState state_;
    NativeAdventureBackgroundReadState *previous_;
public:
    NativeAdventureBackgroundReadScope()
        : previous_(g_native_adventure_background_read) {
        if (!previous_) g_native_adventure_background_read = &state_;
    }
    ~NativeAdventureBackgroundReadScope() {
        g_native_adventure_background_read = previous_;
    }
};

static std::optional<NativeAdventureBeliefCache> frame_native_adventure_belief_cache() {
    auto *state = g_native_adventure_background_read;
    if (!state) return native_adventure_belief_cache();
    if (!state->belief_read) {
        state->belief = native_adventure_belief_cache();
        state->belief_read = true;
    }
    return state->belief;
}

static std::optional<std::vector<NativeAdventureBeliefChoice>> frame_native_adventure_belief_choices() {
    auto *state = g_native_adventure_background_read;
    if (!state) return native_adventure_belief_choices();
    if (!state->choices_read) {
        state->choices = native_adventure_belief_choices();
        state->choices_read = true;
    }
    return state->choices;
}

static std::optional<NativeAdventureHomeCache> frame_native_adventure_home_cache() {
    auto *state = g_native_adventure_background_read;
    if (!state) return native_adventure_home_cache();
    if (!state->home_read) {
        state->home = native_adventure_home_cache();
        state->home_read = true;
    }
    return state->home;
}

static uint64_t captured_native_drawn_text_epoch() {
    // Present advances the next writer's generation even while display keeps
    // the last native page. Readers belong to the last actual caption batch.
    std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
    return g_native_drawn_text_epoch;
}

// Share owned captures only during one discovery/layout pass. Native producers
// can replace a layer without advancing its epoch, so mutations have their own
// revision and every reader validates both before reusing a snapshot.
struct NativeDrawnTextReadKey {
    uint64_t revision = 0, capture_epoch = 0;
    uint64_t identity_revision = 0, identity_context = 0, identity_catalog = 0;
    const graphicst *graphics_read_view = nullptr;
    bool translation_thread = false;
    bool operator==(const NativeDrawnTextReadKey &) const = default;
};

struct NativeClippedCaptionReadKey {
    uint64_t revision = 0, capture_epoch = 0;
    bool operator==(const NativeClippedCaptionReadKey &) const = default;
};

struct NativeCapturedTextReadScope {
    inline static thread_local NativeCapturedTextReadScope *active = nullptr;
    NativeCapturedTextReadScope *previous = active;
    struct Draws {
        std::optional<NativeDrawnTextReadKey> key;
        std::shared_ptr<const std::vector<NativeDrawnTextRow>> rows;
    };
    std::array<Draws, 2> draws;
    std::optional<NativeClippedCaptionReadKey> clipped_key;
    std::shared_ptr<const std::vector<NativeClippedCaption>> clipped;

    NativeCapturedTextReadScope() { if (!active) active = this; }
    ~NativeCapturedTextReadScope() { active = previous; }
    NativeCapturedTextReadScope(const NativeCapturedTextReadScope &) = delete;
    NativeCapturedTextReadScope &operator=(const NativeCapturedTextReadScope &) = delete;
};

static NativeDrawnTextReadKey native_drawn_text_read_key() {
    // Identity resolution takes the translation/identity locks. Read these
    // outside the capture mutex, matching the native producer's lock order.
    NativeDrawnTextReadKey key;
    key.capture_epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
    key.identity_revision = g_native_unit_identity_revision.load(std::memory_order_acquire);
    key.identity_context = native_identity_translation_context();
    key.identity_catalog = current_native_identity_translation_catalog();
    key.graphics_read_view = g_native_graphics_read_view;
    key.translation_thread = DfhackTranslationThreadScope::active;
    return key;
}

static std::shared_ptr<const std::vector<NativeDrawnTextRow>>
        captured_native_drawn_text_snapshot(bool top_layer = false) {
    auto *scope = NativeCapturedTextReadScope::active;
    auto before = native_drawn_text_read_key();
    auto rows = std::shared_ptr<std::vector<NativeDrawnTextRow>>{};
    {
        std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
        before.revision = g_native_drawn_text_revision;
        if (scope) {
            const auto &cached = scope->draws[top_layer ? 1 : 0];
            if (cached.rows && cached.key && *cached.key == before) return cached.rows;
        }
        rows = std::make_shared<std::vector<NativeDrawnTextRow>>(
            top_layer ? g_native_drawn_top_text_rows : g_native_drawn_text_rows);
    }
    for (auto &row : *rows) refresh_native_unit_identity_draw(row);
    std::shared_ptr<const std::vector<NativeDrawnTextRow>> result = std::move(rows);
    if (scope) {
        auto after = native_drawn_text_read_key();
        {
            std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
            after.revision = g_native_drawn_text_revision;
        }
        auto &cached = scope->draws[top_layer ? 1 : 0];
        // Resolving a deferred title can itself publish a newer identity.
        // Earlier rows were refreshed against the previous registry: return
        // this owned result, but require a fresh read on the next request.
        cached.key = before == after ? std::optional{after} : std::nullopt;
        cached.rows = result;
    }
    return result;
}

static std::shared_ptr<const std::vector<NativeClippedCaption>>
        captured_clipped_caption_snapshot() {
    auto *scope = NativeCapturedTextReadScope::active;
    std::lock_guard<std::mutex> lock(g_clipped_caption_mutex);
    const NativeClippedCaptionReadKey key{g_clipped_caption_revision,
        g_embark_item_capture_epoch.load(std::memory_order_acquire)};
    if (scope && scope->clipped && scope->clipped_key && *scope->clipped_key == key)
        return scope->clipped;
    auto result = g_clipped_caption_epoch == key.capture_epoch
        ? std::make_shared<const std::vector<NativeClippedCaption>>(g_clipped_captions)
        : std::make_shared<const std::vector<NativeClippedCaption>>();
    if (scope) {
        scope->clipped_key = key;
        scope->clipped = result;
    }
    return result;
}

// Read-only consumers keep the snapshot alive without copying every captured
// string and typed caption again. In particular, a range-for over a temporary
// view owns its rows for the full loop, including nested capture refreshes.
class NativeDrawnTextView {
    using Rows = std::vector<NativeDrawnTextRow>;
    std::shared_ptr<const Rows> rows_;
    const Rows &rows() const noexcept {
        if (rows_) return *rows_;
        static const Rows empty;
        return empty;
    }
public:
    NativeDrawnTextView() = default;
    explicit NativeDrawnTextView(std::shared_ptr<const Rows> rows) noexcept
        : rows_(std::move(rows)) {}
    Rows::const_iterator begin() const noexcept { return rows().begin(); }
    Rows::const_iterator end() const noexcept { return rows().end(); }
    Rows::const_iterator cbegin() const noexcept { return rows().cbegin(); }
    Rows::const_iterator cend() const noexcept { return rows().cend(); }
    Rows::const_reverse_iterator rbegin() const noexcept { return rows().rbegin(); }
    Rows::const_reverse_iterator rend() const noexcept { return rows().rend(); }
    size_t size() const noexcept { return rows().size(); }
    bool empty() const noexcept { return rows().empty(); }
    const NativeDrawnTextRow &operator[](size_t index) const noexcept { return rows()[index]; }
    const NativeDrawnTextRow &front() const noexcept { return rows().front(); }
    const NativeDrawnTextRow &back() const noexcept { return rows().back(); }
    operator const Rows &() const noexcept { return rows(); }
};

static NativeDrawnTextView captured_native_drawn_text_view(bool top_layer = false) {
    return NativeDrawnTextView(captured_native_drawn_text_snapshot(top_layer));
}

// Some consumers merge/filter their local vectors. Keep that interface and
// obtain their writable copy from the same refreshed, owned frame snapshot.
static std::vector<NativeDrawnTextRow> captured_native_drawn_text_rows(bool top_layer = false) {
    if (!NativeCapturedTextReadScope::active) {
        std::vector<NativeDrawnTextRow> rows;
        {
            std::lock_guard<std::mutex> lock(g_native_drawn_text_mutex);
            rows = top_layer ? g_native_drawn_top_text_rows : g_native_drawn_text_rows;
        }
        for (auto &row : rows) refresh_native_unit_identity_draw(row);
        return rows;
    }
    return *captured_native_drawn_text_snapshot(top_layer);
}

static std::vector<NativeClippedCaption> captured_clipped_captions() {
    if (!NativeCapturedTextReadScope::active) {
        std::lock_guard<std::mutex> lock(g_clipped_caption_mutex);
        if (g_clipped_caption_epoch != g_embark_item_capture_epoch.load(std::memory_order_acquire))
            return {};
        return g_clipped_captions;
    }
    return *captured_clipped_caption_snapshot();
}
