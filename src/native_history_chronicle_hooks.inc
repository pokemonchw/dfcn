// Chronicle owns its formatter output, retained word allocations and clear
// lifetime independently of the Legends page's collection/tab instructions.
#ifdef _WIN32
static NativeCallHook g_native_chronicle_sentence_hook;
static NativeEntryHook g_native_chronicle_append_hook;
static NativeEntryHook g_native_chronicle_layout_hook;
static NativeEntryHook g_native_chronicle_clear_hook;
// This lock protects only the identified chronicle's native word storage.
// Readers may already own translation state, so they must never wait here.
static std::recursive_mutex g_native_chronicle_words_mutex;
static uint64_t g_native_chronicle_words_revision = 0;
// Published with the actual draw's observed rows. A shared raster must use
// the richbox's measured layout width, never a private viewport's old bounds.
static std::optional<int> g_native_chronicle_observed_width;
using NativeChronicleWriterKey = std::tuple<uintptr_t, int, int>;
static std::map<NativeChronicleWriterKey, uint64_t> g_native_chronicle_writer_floors;
static std::atomic_bool g_native_chronicle_observation_ready{false};

struct NativeChronicleMutationScope {
    std::unique_lock<std::recursive_mutex> lock{g_native_chronicle_words_mutex};
    NativeChronicleMutationScope() {
        if (++g_native_chronicle_words_revision == 0) ++g_native_chronicle_words_revision;
    }
};

static bool native_history_chronicle_hooks_active() {
    return g_native_chronicle_sentence_hook.active() ||
        g_native_chronicle_append_hook.active() || g_native_chronicle_layout_hook.active() ||
        g_native_chronicle_clear_hook.active();
}

static void native_chronicle_append_entry(NativeHistoryRichBox *box, const NativeString *source) {
    NativeHistoryCallbackScope callback;
    const auto original = reinterpret_cast<NativeHistoryAppendFn>(g_native_chronicle_append_hook.original);
    if (!original) return;
    if (box != g_native_history_box) { original(box, source); return; }
    NativeChronicleMutationScope mutation;
    if (g_native_history_chronicle_lifetime_ready)
        capture_native_history_append(box, source);
    else original(box, source);
}

static void native_chronicle_layout_entry(NativeHistoryRichBox *box, int width) {
    NativeHistoryCallbackScope callback;
    const auto original = reinterpret_cast<NativeHistoryLayoutFn>(g_native_chronicle_layout_hook.original);
    if (!original) return;
    if (box != g_native_history_box) {
        // The shared layout body also receives the selected Legends box.
        // Its actual two arguments and active native render scope replace an
        // optional private CALL boundary; unrelated richboxes remain native.
        bool legends = false;
        if (box && g_native_history_legends_capture_ready && g_native_history_legends_rendering &&
                g_real_native_history_layout == original) {
            try {
                const auto tab = native_history_legends_tab();
                legends = tab.tab && native_history_legends_tab_box(tab.tab) ==
                    reinterpret_cast<uintptr_t>(box);
            }
            catch (...) {}
        }
        // A separately installed CALL observer invokes this same original
        // trampoline directly, so it never enters this entry a second time.
        if (legends) capture_native_history_layout(box, width);
        else original(box, width);
        return;
    }
    NativeChronicleMutationScope mutation;
    if (g_native_history_chronicle_lifetime_ready)
        capture_native_history_layout(box, width);
    else original(box, width);
}

static void native_chronicle_clear_entry(NativeHistoryRichBox *box) {
    NativeHistoryCallbackScope callback;
    const auto original = reinterpret_cast<void (*)(NativeHistoryRichBox *)>(
        g_native_chronicle_clear_hook.original);
    if (!original) return;
    if (box != g_native_history_box) { original(box); return; }
    NativeChronicleMutationScope mutation;
    {
        // Invalidate before native deletion; a later draw may already contain
        // newly allocated words at the same addresses.
        g_native_history_capture_generation.fetch_add(1, std::memory_order_acq_rel);
        try {
            remember_native_history_region(reinterpret_cast<uintptr_t>(box), {});
            invalidate_worldgen_event_cache();
        } catch (...) { g_native_history_chronicle_lifetime_ready = false; }
    }
    original(box);
}

static bool uninstall_native_history_chronicle_hooks() {
    if (g_active_native_history_callbacks.load(std::memory_order_acquire)) return false;
    // Stop producing records before removing their allocation lifetime hook.
    if (!g_native_chronicle_sentence_hook.uninstall("Native chronicle sentence restore")) return false;
    if (!g_native_chronicle_append_hook.uninstall("Native chronicle append restore")) return false;
    if (!g_native_chronicle_layout_hook.uninstall("Native chronicle layout restore")) return false;
    g_native_history_chronicle_lifetime_ready = false;
    g_native_history_chronicle_observed_rows.reset();
    g_native_chronicle_observation_ready.store(false, std::memory_order_release);
    if (!g_native_chronicle_clear_hook.uninstall("Native chronicle clear restore")) return false;
    return true;
}

static bool native_chronicle_storage_ready() {
    struct Field { native_history_abi::FieldOffset offset; size_t width; };
    const Field fields[] = {
        {{0x00, "markup_text_boxst", "word"}, 24},
        {{0x18, "markup_text_boxst", "link"}, 24},
        {{0x30, "markup_text_boxst", "current_width"}, 4},
        {{0x34, "markup_text_boxst", "max_y"}, 4},
        {{0x00, "markup_text_wordst", "str"}, 32},
        {{0x20, "markup_text_wordst", "red"}, 1},
        {{0x21, "markup_text_wordst", "green"}, 1},
        {{0x22, "markup_text_wordst", "blue"}, 1},
        {{0x24, "markup_text_wordst", "link_index"}, 4},
        {{0x28, "markup_text_wordst", "px"}, 4},
        {{0x2c, "markup_text_wordst", "py"}, 4},
        {{0x30, "markup_text_wordst", "flags"}, 4},
        {{0x00, "markup_text_linkst", "type"}, 4},
        {{0x04, "markup_text_linkst", "id"}, 4},
        {{0x08, "markup_text_linkst", "subid"}, 4}
    };
    try {
        for (const auto &field : fields) {
            if (!field.offset.contains(0, field.width, field.width)) return false;
            (void)field.offset.runtime();
            const auto *binding = native_history_abi::field(field.offset.type, field.offset.member);
            if (binding && binding->size != field.width) return false;
        }
        return true;
    } catch (...) { return false; }
}

static bool install_native_history_chronicle_hooks() {
    if (g_native_chronicle_sentence_hook.installed && g_native_history_chronicle_lifetime_ready)
        return true;
    if (native_history_chronicle_hooks_active() && !uninstall_native_history_chronicle_hooks()) return false;
    const auto base = native_history_profile_base();
    if (!base || !native_history_formatter_method_ready("getSentence") || !native_chronicle_storage_ready()) {
        log_line("WARN", "Native chronicle: formatter or named word/box storage contract unavailable");
        return false;
    }
    auto *box = reinterpret_cast<NativeHistoryRichBox *>(
        native_history_markup_box_from_words(native_reference_address(base, 0x24ec848)));
    auto *append = reinterpret_cast<unsigned char *>(native_reference_address(base, 0xd51eb0));
    auto *layout = reinterpret_cast<unsigned char *>(native_reference_address(base, 0xd51c80));
    auto *clear = reinterpret_cast<unsigned char *>(native_reference_address(base, 0xe37d0));
    if (!box || !append || !layout || !clear) {
        log_line("WARN", "Native chronicle: box or independently identified richbox entry unavailable");
        return false;
    }
    // These independently identified bodies retain the same real parameter
    // ABI. Keep their member/allocation checks, rather than authorizing an
    // arbitrary entry from a caller's SCC or an executable address alone.
    struct Signature { uintptr_t rva; std::vector<unsigned char> bytes; };
    const Signature signatures[] = {
        {0xd51ee8, {0x48,0x83,0x7a,0x10,0x00,0x75,0x76,0xb9,0x38,0x00,0x00,0x00}},
        {0xd51f14, {0x48,0xc7,0x40,0x24,0xff,0xff,0xff,0xff,
            0x66,0xc7,0x40,0x20,0xff,0xff,0xc6,0x40,0x22,0xff,
            0xc7,0x40,0x2c,0xff,0xff,0xff,0xff}},
        {0xd51c80, {0x48,0x89,0x5c,0x24,0x20,0x57,0x8b,0xda,0x48,0x8b,0xf9,
            0x39,0x51,0x30,0x0f,0x84,0x10,0x02,0x00,0x00}},
        {0xe37d0, {0x40,0x56,0x48,0x83,0xec,0x20,0x48,0x89,0x5c,0x24,0x30,0x48,0x8b,0xf1,
            0x48,0x8b,0x19,0x48,0x89,0x7c,0x24,0x40,0x48,0x8b,0x79,0x08}},
        {0xe3862, {0x33,0xc0,0xc7,0x46,0x30,0xff,0xff,0xff,0xff,0x89,0x46,0x34,
            0x48,0x89,0x46,0x38,0x48,0x83,0xc4,0x20,0x5e,0xc3}}
    };
    for (const auto &signature : signatures)
        if (!native_pe_match(base, signature.rva, signature.bytes.data(), signature.bytes.size())) {
            log_line("WARN", "Native chronicle: independent richbox ABI unavailable at " +
                std::to_string(signature.rva));
            return false;
        }
    std::vector<unsigned char> append_prefix{0x48,0x89,0x5c,0x24,0x18};
    std::vector<unsigned char> layout_prefix{0x48,0x89,0x5c,0x24,0x20};
    std::vector<unsigned char> clear_prefix{0x40,0x56,0x48,0x83,0xec,0x20};
    std::vector<NativeCall> calls{
        {0xf55731, 0, native_history_formatter_callback("getSentence", &capture_native_history_sentence,
            &capture_native_history_sentence_context), {}, {0xff,0x90,0xd0,0x00,0x00,0x00}}
    };
    if (!native_reference_calls(calls, 0) || !native_reference_bytes(0xd51eb0, append_prefix) ||
            !native_reference_bytes(0xd51c80, layout_prefix) || !native_reference_bytes(0xe37d0, clear_prefix)) {
        log_line("WARN", "Native chronicle: formatter call or richbox entry prefix unavailable");
        return false;
    }
    const auto rollback = [&] {
        if (uninstall_native_history_chronicle_hooks() && !native_history_chronicle_hooks_active()) {
            g_native_history_box = nullptr;
            g_real_native_history_append = nullptr;
            g_real_native_history_layout = nullptr;
        }
        return false;
    };
    try {
        if (!g_native_chronicle_append_hook.prepare(append, append_prefix,
                reinterpret_cast<const void *>(&native_chronicle_append_entry), {}, "Native chronicle append") ||
            !g_native_chronicle_layout_hook.prepare(layout, layout_prefix,
                reinterpret_cast<const void *>(&native_chronicle_layout_entry), {}, "Native chronicle layout") ||
            !g_native_chronicle_clear_hook.prepare(clear, clear_prefix,
                reinterpret_cast<const void *>(&native_chronicle_clear_entry), {}, "Native chronicle clear"))
            return rollback();
        g_native_history_box = box;
        g_native_history_sentence_slot = native_history_abi::history_method("getSentence", 0xd0).slot;
        g_real_native_history_append = reinterpret_cast<NativeHistoryAppendFn>(g_native_chronicle_append_hook.original);
        g_real_native_history_layout = reinterpret_cast<NativeHistoryLayoutFn>(g_native_chronicle_layout_hook.original);
        if (!g_native_chronicle_clear_hook.install("Native chronicle clear") ||
            !g_native_chronicle_layout_hook.install("Native chronicle layout") ||
            !g_native_chronicle_append_hook.install("Native chronicle append") ||
            !g_native_chronicle_sentence_hook.install(base, calls, "Native chronicle sentence"))
            return rollback();
        g_native_history_chronicle_lifetime_ready = true;
        log_line("INFO", "Enabled native chronicle event source, richbox entries and allocation lifetime");
        return true;
    } catch (...) { return rollback(); }
}

// Snapshot pointer ownership lazily inside the actual viewscreen invocation:
// native layout can run after the entry but before its first word is drawn.
// A mutation retires that snapshot, never relabels its old pointers with the
// new revision. Ordinary labels cannot acquire ownership by matching prose.
class NativeHistoryChronicleDrawScope {
public:
    inline static thread_local NativeHistoryChronicleDrawScope *current = nullptr;
    explicit NativeHistoryChronicleDrawScope() : previous_(current) {
        current = this;
        if (!previous_) g_native_chronicle_observation_ready.store(false, std::memory_order_release);
    }
    ~NativeHistoryChronicleDrawScope() {
        if (!previous_) {
            g_native_history_chronicle_observed_rows.reset();
            try {
                std::unique_lock<std::recursive_mutex> lock(g_native_chronicle_words_mutex, std::try_to_lock);
                if (lock.owns_lock()) {
                    g_native_chronicle_observed_width.reset();
                    g_native_chronicle_writer_floors.clear();
                }
                if (lock.owns_lock() && snapshot_ready_ && g_native_history_chronicle_lifetime_ready &&
                        generation_ == g_native_history_capture_generation.load(std::memory_order_acquire) &&
                        revision_ == g_native_chronicle_words_revision && top_ < bottom_) {
                    g_native_history_chronicle_observed_rows = std::pair<int, int>{top_, bottom_};
                    if (width_ > 0) g_native_chronicle_observed_width = width_;
                    g_native_chronicle_writer_floors = std::move(writer_floors_);
                    g_native_chronicle_observation_ready.store(true, std::memory_order_release);
                }
            } catch (...) {}
        }
        current = previous_;
    }
    NativeHistoryChronicleDrawScope(const NativeHistoryChronicleDrawScope &) = delete;
    static void observe(graphicst *graphics, const NativeString *source) noexcept {
        if (!current) return;
        try {
            std::unique_lock<std::recursive_mutex> lock(g_native_chronicle_words_mutex, std::try_to_lock);
            if (!lock.owns_lock() || !g_native_history_chronicle_lifetime_ready || !g_native_history_box) return;
            const auto generation = g_native_history_capture_generation.load(std::memory_order_acquire);
            const auto revision = g_native_chronicle_words_revision;
            if (!current->snapshot_attempted_ || current->generation_ != generation || current->revision_ != revision)
                if (!current->snapshot_locked(generation, revision)) return;
            if (!current->snapshot_ready_) return;
            if (!current->words_.contains(reinterpret_cast<uintptr_t>(source))) return;
            graphics = native_graphics_view(graphics);
            std::string_view text;
            if (graphics && native_string_view(source, &text, 262144) && !text.empty() &&
                    graphics->screeny >= 0 && graphics->screeny < graphics->dimy &&
                    graphics->screeny >= graphics->clipy[0] && graphics->screeny <= graphics->clipy[1] &&
                    graphics->screenx <= graphics->clipx[1] &&
                    int64_t(graphics->screenx) + int64_t(text.size()) > graphics->clipx[0]) {
                current->top_ = std::min(current->top_, graphics->screeny);
                current->bottom_ = std::max(current->bottom_, graphics->screeny + 1);
                // This is before the actual addst. Pair it only with a newer
                // completed caption, never an equal old write at a reused
                // word address. Do not hold the caption lock while observing
                // the history registry or invoking native drawing.
                uint64_t floor = 0;
                {
                    std::lock_guard<std::mutex> captions(g_native_drawn_text_mutex);
                    floor = g_native_drawn_text_sequence;
                }
                const NativeChronicleWriterKey key{reinterpret_cast<uintptr_t>(source),
                    graphics->screenx, graphics->screeny};
                if (current->writer_floors_.size() < kNativeHistoryCaptureTokens ||
                        current->writer_floors_.contains(key)) current->writer_floors_[key] = floor;
            }
            observe_native_history_draw(graphics, source);
        } catch (...) {}
    }
private:
    // Caller owns the storage lock. Both header and element copy belong to
    // the same native mutation epoch; only then can source pointer identity
    // authorize reading a word. No negative result survives another draw.
    bool snapshot_locked(uint64_t generation, uint64_t revision) {
        snapshot_attempted_ = true;
        snapshot_ready_ = false;
        generation_ = generation;
        revision_ = revision;
        words_.clear();
        writer_floors_.clear();
        width_ = 0;
        if (top_ < bottom_) begin_native_history_draw_pass();
        top_ = INT_MAX;
        bottom_ = 0;
        NativeBorrowedVector<NativeHistoryRichWord *> words{};
        if (!native_history_markup_read(reinterpret_cast<uintptr_t>(g_native_history_box),
                {0, "markup_text_boxst", "word"}, words) || !words.valid(kNativeHistoryCaptureTokens)) return false;
        std::vector<uintptr_t> addresses(words.size());
        if (!addresses.empty() && !native_history_copy_bytes(reinterpret_cast<uintptr_t>(words.begin),
                addresses.data(), addresses.size() * sizeof(uintptr_t))) return false;
        words_.reserve(addresses.size());
        for (const auto address : addresses) {
            const auto text = native_history_markup_text(address);
            if (!text || !words_.insert(text).second) { words_.clear(); return false; }
        }
        int32_t width = 0;
        if (native_history_markup_read(reinterpret_cast<uintptr_t>(g_native_history_box),
                {0x30, "markup_text_boxst", "current_width"}, width) && width > 0 && width <= 1000)
            width_ = width;
        if (generation != g_native_history_capture_generation.load(std::memory_order_acquire) ||
                revision != g_native_chronicle_words_revision) { words_.clear(); return false; }
        snapshot_ready_ = true;
        return true;
    }
    NativeHistoryChronicleDrawScope *previous_;
    std::unordered_set<uintptr_t> words_;
    std::map<NativeChronicleWriterKey, uint64_t> writer_floors_;
    uint64_t generation_ = 0, revision_ = 0;
    int top_ = INT_MAX, bottom_ = 0;
    int width_ = 0;
    bool snapshot_ready_ = false, snapshot_attempted_ = false;
};
#else
static bool native_history_chronicle_hooks_active() { return false; }
static bool uninstall_native_history_chronicle_hooks() { return true; }
#endif

// Keep the registry implementation beside its allocation-lifetime hooks.
// The shared raster matcher sees only the forward-declared snapshot API.
static bool native_shared_chronicle_registry_current(uint64_t generation, uint64_t revision) {
    return generation == g_native_history_capture_generation.load(std::memory_order_acquire) &&
        revision == native_history_registry_revision();
}

static NativeSharedChronicleSnapshot native_shared_chronicle_snapshot(bool worldgen,
        const std::array<NativeDrawnTextView, 2> &captions) {
    NativeSharedChronicleSnapshot result;
#ifdef _WIN32
    if (!worldgen || !g_native_history_chronicle_lifetime_ready || !g_native_history_box) return result;
    result.box = reinterpret_cast<uintptr_t>(g_native_history_box);
    const auto reserve_registered_words = [&] {
        for (const auto &plane : captions) for (const auto &caption : plane) {
            const auto token = g_native_history_token_owners.find(caption.address);
            const auto region = g_native_history_region_owners.find(caption.address);
            if ((token != g_native_history_token_owners.end() && token->second.document &&
                    token->second.document->owner == result.box) ||
                    (region != g_native_history_region_owners.end() && region->second.region &&
                     region->second.region->owner == result.box)) result.words.insert(caption.address);
        }
    };
    std::unique_lock<std::recursive_mutex> storage(g_native_chronicle_words_mutex, std::try_to_lock);
    if (!storage.owns_lock() || !g_native_chronicle_observation_ready.load(std::memory_order_acquire)) {
        std::lock_guard<std::mutex> lock(g_native_history_mutex);
        reserve_registered_words();
        return result;
    }
    result.generation = g_native_history_capture_generation.load(std::memory_order_acquire);
    result.revision = native_history_registry_revision();
    result.rows = native_history_chronicle_row_bounds();
    result.width = g_native_chronicle_observed_width;
    result.writer_floors = g_native_chronicle_writer_floors;
    for (const auto &[key, floor] : result.writer_floors) result.words.insert(std::get<0>(key));
    result.draws = captured_native_history_draws();
    result.unbound = captured_native_history_unbound_draws();
    std::erase_if(result.draws, [&](const auto &draw) { return !draw.document || draw.document->owner != result.box; });
    std::erase_if(result.unbound, [&](const auto &draw) { return draw.owner != result.box; });
    // Reserve both supported and unsupported words by actual object identity.
    // This never dereferences a saved native pointer or classifies its spelling.
    for (const auto &draw : result.draws) if (draw.token_index < draw.document->tokens.size())
        result.words.insert(draw.document->tokens[draw.token_index].identity);
    for (const auto &draw : result.unbound) result.words.insert(draw.identity);
    {
        std::lock_guard<std::mutex> lock(g_native_history_mutex);
        reserve_registered_words();
        result.stable = result.revision == g_native_history_registry_revision;
    }
    result.stable &= result.generation == g_native_history_capture_generation.load(std::memory_order_acquire) &&
        result.box == reinterpret_cast<uintptr_t>(g_native_history_box) && g_native_history_chronicle_lifetime_ready &&
        g_native_chronicle_observation_ready.load(std::memory_order_acquire);
#else
    (void)worldgen; (void)captions;
#endif
    return result;
}
