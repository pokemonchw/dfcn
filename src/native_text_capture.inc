// Slow native wraps can block a tab change before another SDL frame exists.
// Keep their diagnostics independent of Present, and report only completed
// operations above the threshold while the configured trace is enabled.
class NativeWrapTiming {
public:
    enum class Stage : size_t {
        Other, Native, TranslationLock, CaptureLock, Capture, Aggregate, RequiredRows, Count
    };
    using Clock = std::chrono::steady_clock;
    class Scope {
        NativeWrapTiming *timing_;
        Stage previous_ = Stage::Other;
    public:
        Scope(NativeWrapTiming *timing, Stage stage)
            : timing_(timing->enabled_ ? timing : nullptr) {
            if (timing_) previous_ = timing_->switch_stage(stage);
        }
        ~Scope() { stop(); }
        void stop() {
            if (!timing_) return;
            timing_->switch_stage(previous_);
            timing_ = nullptr;
        }
        Scope(const Scope &) = delete;
        Scope &operator=(const Scope &) = delete;
    };
    NativeWrapTiming(const char *kind, const void *box, const NativeString *source,
            bool personality = false, bool health = false, bool thoughts = false)
        : enabled_(translation_state_trace_enabled.load(std::memory_order_relaxed)),
          kind_(kind), box_(box), personality_(personality), health_(health), thoughts_(thoughts) {
        if (!enabled_) return;
        started_ = phase_started_ = Clock::now();
        std::string_view text;
        if (native_string_view(source, &text, SIZE_MAX)) source_bytes_ = text.size();
    }
    ~NativeWrapTiming() noexcept {
        if (!enabled_) return;
        const auto now = Clock::now();
        const double total = milliseconds(now - started_);
        if (total <= 100.0) return;
        elapsed_[static_cast<size_t>(stage_)] += milliseconds(now - phase_started_);
        try {
            std::ostringstream message;
            message << std::fixed << std::setprecision(2)
                << "Native wrap slow: kind=" << kind_
                << "; total_ms=" << total
                << "; native_ms=" << elapsed_[static_cast<size_t>(Stage::Native)]
                << "; translation_lock_wait_ms=" << elapsed_[static_cast<size_t>(Stage::TranslationLock)]
                << "; capture_lock_wait_ms=" << elapsed_[static_cast<size_t>(Stage::CaptureLock)]
                << "; capture_ms=" << elapsed_[static_cast<size_t>(Stage::Capture)]
                << "; aggregate_ms=" << elapsed_[static_cast<size_t>(Stage::Aggregate)]
                << "; required_rows_ms=" << elapsed_[static_cast<size_t>(Stage::RequiredRows)]
                << "; other_ms=" << elapsed_[static_cast<size_t>(Stage::Other)]
                << "; source_bytes=" << source_bytes_ << "; box=" << box_
                << "; personality=" << personality_ << "; health=" << health_
                << "; thoughts=" << thoughts_
                << "; thread=" << translation_state_thread_id();
            log_line("INFO", message.str());
        } catch (...) {}
    }
    Scope phase(Stage stage) { return Scope(this, stage); }
private:
    bool enabled_;
    const char *kind_;
    const void *box_;
    bool personality_, health_, thoughts_;
    size_t source_bytes_ = 0;
    Clock::time_point started_{}, phase_started_{};
    Stage stage_ = Stage::Other;
    std::array<double, static_cast<size_t>(Stage::Count)> elapsed_{};
    static double milliseconds(Clock::duration duration) {
        return std::chrono::duration<double, std::milli>(duration).count();
    }
    Stage switch_stage(Stage next) {
        const auto now = Clock::now();
        elapsed_[static_cast<size_t>(stage_)] += milliseconds(now - phase_started_);
        const Stage previous = stage_;
        stage_ = next;
        phase_started_ = now;
        return previous;
    }
};

// Capture around the native wrapper, retaining source text and appended row identity.
using NativeParagraphFn = void (*)(void *, const NativeString *, int);
static NativeParagraphFn g_real_native_paragraph = nullptr;
static void capture_appended_native_paragraph(void *box, int width,
        std::string complete, size_t before, bool structured_source = false) {
    if (before > 262144 || complete.empty()) return;
    const size_t after = native_paragraph_row_count(box);
    if (after <= before || after > 262144 || after - before > 16384) return;
    std::vector<std::string> rows;
    std::vector<uintptr_t> row_addresses;
    rows.reserve(after - before);
    row_addresses.reserve(after - before);
    for (size_t i = before; i < after; ++i) {
        std::string_view row;
        const auto *native_row = native_paragraph_row(box, i);
        if (!native_string_view(native_row, &row)) return;
        rows.emplace_back(row);
        row_addresses.push_back(reinterpret_cast<uintptr_t>(native_row));
    }
    remember_native_paragraph(reinterpret_cast<uintptr_t>(box), width,
        std::move(complete), std::move(rows), before, std::move(row_addresses), structured_source);
}
static void dfcn_capture_native_paragraph(void *box, const NativeString *source, int width) {
    NativeWrapTiming timing("paragraph", box, source);
    std::string complete;
    size_t before = SIZE_MAX;
    try {
        auto capture_timing = timing.phase(NativeWrapTiming::Stage::Capture);
        std::string_view text;
        if (width > 0 && native_string_view(source, &text) && is_native_prose_source(text)) {
            before = native_paragraph_row_count(box);
            if (before <= 262144) complete.assign(text);
        }
    } catch (...) { before = SIZE_MAX; }
    {
        auto native_timing = timing.phase(NativeWrapTiming::Stage::Native);
        if (g_real_native_paragraph) {
            remember_native_fortress_alert_hover_wrap(reinterpret_cast<uintptr_t>(box));
            g_real_native_paragraph(box, source, width);
        }
    }
    try {
        auto capture_timing = timing.phase(NativeWrapTiming::Stage::Capture);
        capture_appended_native_paragraph(box, width, std::move(complete), before);
    } catch (...) {}
}

#ifdef _WIN32
// The background religion tooltip submits its first sentence through the
// vector overload, which wraps directly instead of calling add_paragraph's
// single-string overload. Native pieces share one buffer without separators;
// retain that complete source and the exact rows appended by this call.
using NativeParagraphVectorFn = void (*)(void *, const void *, int);
static NativeParagraphVectorFn g_real_native_paragraph_vector = nullptr;
static void dfcn_capture_native_paragraph_vector(void *box, const void *source, int width) {
    NativeWrapTiming timing("paragraph-vector", box, nullptr);
    std::string complete;
    size_t before = SIZE_MAX;
    try {
        auto capture_timing = timing.phase(NativeWrapTiming::Stage::Capture);
        const auto pieces = NativeBorrowedVector<NativeString *>::read(source);
        if (width > 0 && pieces.valid(16384) && pieces.size() > 0) {
            bool intact = true;
            for (size_t i = 0; i < pieces.size(); ++i) {
                std::string_view text;
                if (!native_string_view(pieces.begin[i], &text) ||
                    text.size() > 262144 - complete.size()) {
                    intact = false;
                    break;
                }
                complete.append(text);
            }
            if (intact && is_native_prose_source(complete))
                before = native_paragraph_row_count(box);
        }
    } catch (...) { before = SIZE_MAX; }
    {
        auto native_timing = timing.phase(NativeWrapTiming::Stage::Native);
        if (g_real_native_paragraph_vector) {
            remember_native_fortress_alert_hover_wrap(reinterpret_cast<uintptr_t>(box));
            g_real_native_paragraph_vector(box, source, width);
        }
    }
    try {
        auto capture_timing = timing.phase(NativeWrapTiming::Stage::Capture);
        capture_appended_native_paragraph(box, width, std::move(complete), before);
    } catch (...) {}
}
#endif

// Complete documents, aggregation, scroll padding and draw identity share one
// implementation on every host. Native adapters only expose game-owned rows.
using NativeKnowledgeDrawFn = void (*)(graphicst *, const char *, const char *);
static NativeKnowledgeDrawFn g_real_native_knowledge_draw = nullptr;

static void forget_native_knowledge_document(uintptr_t owner) {
    // Caller holds g_native_knowledge_mutex. Never dereference a saved native
    // pointer: its box can already have been destroyed or reused by DF.
    const auto found = g_native_knowledge_documents.find(owner);
    if (found == g_native_knowledge_documents.end()) return;
    for (uintptr_t address : found->second->row_addresses) {
        const auto row = g_native_knowledge_row_owners.find(address);
        if (row != g_native_knowledge_row_owners.end() && row->second.first == owner)
            g_native_knowledge_row_owners.erase(row);
    }
    g_native_knowledge_documents.erase(found);
    std::erase(g_native_knowledge_document_order, owner);
}

// Caller holds g_native_knowledge_mutex. Captured boxes and their aggregate
// page share this registry, but only the aggregate owns personality draw rows.
static void remember_native_knowledge_document(
        uintptr_t owner, std::shared_ptr<const NativeKnowledgeDocument> document) {
    forget_native_knowledge_document(owner);
    g_native_knowledge_documents[owner] = document;
    g_native_knowledge_document_order.push_back(owner);
    for (size_t line = 0; line < document->row_addresses.size(); ++line)
        g_native_knowledge_row_owners[document->row_addresses[line]] =
            {owner, static_cast<int>(line)};
    // A Needs page can contain dozens of separate boxes, including blanks.
    while (g_native_knowledge_document_order.size() > 512)
        forget_native_knowledge_document(g_native_knowledge_document_order.front());
}

static void extend_native_reading_rows(
        NativeKnowledgeTextBox *box, NativeKnowledgeDocument &document,
        size_t required_rows) {
    // The native adapter allocates using the game's own runtime. DF owns
    // the added blank rows and destroys them with its original text box.
    // Only extend the transient row vector, never original rows or save data.
    if (required_rows <= native_reading_row_count(box) || required_rows > 16384) return;
    document.rows.reserve(required_rows);
    document.row_addresses.reserve(required_rows);
    while (native_reading_row_count(box) < required_rows) {
        auto *row = native_append_reading_row(box);
        if (!row) break;
        document.rows.emplace_back();
        document.row_addresses.push_back(reinterpret_cast<uintptr_t>(row));
    }
}

static std::shared_ptr<NativeKnowledgeDocument> read_native_reading_box(
        NativeKnowledgeTextBox *box, const NativeString *source, bool personality,
        bool health, bool thoughts) {
    std::string_view source_text;
    if (!box || !native_string_view(source, &source_text)) return {};
    if (box->width <= 0 || box->width > 768 || native_reading_row_count(box) > 16384 ||
        source_text.find('\0') != std::string_view::npos ||
        (!personality && !health && !thoughts && (!is_native_prose_source(source_text) || native_reading_row_count(box) == 0))) return {};
    auto document = std::make_shared<NativeKnowledgeDocument>();
    document->source.assign(source_text);
    document->width = box->width;
    document->personality = personality;
    document->health = health;
    document->thoughts = thoughts;
    document->rows.reserve(native_reading_row_count(box));
    document->row_addresses.reserve(native_reading_row_count(box));
    bool have_foreground = false;
    for (size_t index = 0; index < native_reading_row_count(box); ++index) {
        const auto *row = native_reading_row_at(box, index);
        if (!row) return {};
        const size_t length = strnlen(row->text, sizeof(row->text));
        if (length == sizeof(row->text)) return {};
        document->rows.emplace_back(row->text, length);
        document->row_addresses.push_back(reinterpret_cast<uintptr_t>(row));
        if (!have_foreground) {
            for (size_t i = 0; i < length; ++i) {
                if (row->text[i] == ' ') continue;
                document->foreground = static_cast<unsigned char>(row->colors[i]);
                have_foreground = true;
                break;
            }
        }
    }
    return document;
}

static void capture_native_reading_box(
        NativeKnowledgeTextBox *box, const NativeString *source, bool personality,
        bool health, bool thoughts, NativeWrapTiming &timing, bool grow_rows = true) {
    auto capture_timing = timing.phase(NativeWrapTiming::Stage::Capture);
    const uintptr_t owner = reinterpret_cast<uintptr_t>(box);
    forget_native_knowledge_document(owner);
    auto document = read_native_reading_box(box, source, personality, health, thoughts);
    if (!document) return;
    if (grow_rows && !personality && !health && !thoughts) {
        int required_rows = 0;
        {
            auto required_timing = timing.phase(NativeWrapTiming::Stage::RequiredRows);
            required_rows = g_overlay.native_knowledge_required_rows(
                document->source, document->width);
        }
        extend_native_reading_rows(box, *document, static_cast<size_t>(required_rows));
    }
    remember_native_knowledge_document(owner, std::move(document));
}

#ifdef _WIN32
static bool capture_native_owned_character_wrap(NativeKnowledgeTextBox *box,
    const NativeString *source, NativeWrapTiming &timing);
static uintptr_t capture_native_owned_character_row(const char *row);
#endif

static void dfcn_capture_native_knowledge_wrap(
        NativeKnowledgeTextBox *box, const NativeString *source) {
#ifdef _WIN32
    NativeCharacterRichMutationScope mutation;
#endif
    NativeWrapTiming timing("knowledge", box, source);
    {
        auto native_timing = timing.phase(NativeWrapTiming::Stage::Native);
        if (g_real_native_knowledge_wrap) g_real_native_knowledge_wrap(box, source);
    }
    try {
#ifdef _WIN32
        if (capture_native_owned_character_wrap(box, source, timing)) return;
        const auto sheet = g_native_character_drawing_sheet
            ? g_native_character_drawing_sheet : g_native_character_owner;
        // A new character box can be wrapped before joining its source vector.
        // Capture it provisionally; only positive page ownership permits growth.
        const bool grow_rows = !g_native_character_drawing_sheet &&
            !native_character_rich_live(reinterpret_cast<const void *>(sheet));
#else
        constexpr bool grow_rows = true;
#endif
        auto translation_wait = timing.phase(NativeWrapTiming::Stage::TranslationLock);
        dfcn::TranslationStateScope translation_scope;
        translation_wait.stop();
        auto capture_wait = timing.phase(NativeWrapTiming::Stage::CaptureLock);
        std::lock_guard<std::mutex> lock(g_native_knowledge_mutex);
        capture_wait.stop();
        capture_native_reading_box(box, source, false, false, false, timing, grow_rows);
    } catch (...) {
        // The game has already completed its original wrap operation.
    }
}

static bool native_character_capture_enabled(const void *sheet) noexcept {
    // Platforms without this component hook retain their existing capture
    // path. On the supported owner, only its memory-open UNIT sheet may
    // build translated documents or adjust its cached native text boxes.
    return !g_native_character_owner ||
        (reinterpret_cast<uintptr_t>(sheet) == g_native_character_owner && native_character_open());
}

static void prepare_native_overview_thoughts_cache(const void *sheet,
        bool overview = true, const char *current_row = nullptr) {
    if (!sheet || !native_character_capture_enabled(sheet)) return;
    const auto [source_offset, box_offset] = native_character_layout.thought_vectors.front();
    const auto *source_address = native_character_field_address(sheet, source_offset,
        sizeof(NativeBorrowedVector<const NativeString *>));
    const auto *box_address = native_character_field_address(sheet, box_offset,
        sizeof(NativeBorrowedVector<NativeKnowledgeTextBox *>));
    const auto *width_address = native_character_field_address(sheet,
        native_character_layout.recent_thought_width, sizeof(int32_t));
    if (!source_address || !box_address || !width_address) return;
    const auto sources = NativeBorrowedVector<const NativeString *>::read(source_address);
    if (!sources.valid(16384) || sources.size() == 0) return;
    {
        std::lock_guard<std::mutex> lock(g_native_knowledge_mutex);
        const auto page = g_native_knowledge_documents.find(
            reinterpret_cast<uintptr_t>(source_address));
        if (overview) {
            if (page != g_native_knowledge_documents.end() && page->second->overview_footer) return;
        } else {
            // Returning to the scrolling Recent thoughts page restores its
            // own padding through the same native width-change branch.
            const auto row = g_native_knowledge_row_owners.find(
                reinterpret_cast<uintptr_t>(current_row));
            if (page == g_native_knowledge_documents.end() || !page->second->overview_footer ||
                    row == g_native_knowledge_row_owners.end() || row->second.first != page->first)
                return;
        }
    }
    // Recent thoughts and Overview reuse the same boxes and cached width.
    // The scrolling page may have extended those boxes with native padding.
    // Let DF rebuild them once at its own width-change branch before the
    // bounded footer's whole-box fit calculation; do not trim live iterators
    // or free allocations belonging to the game's C++ runtime.
    const int32_t invalid_width = -1;
    std::memcpy(const_cast<void *>(width_address), &invalid_width, sizeof(invalid_width));
}

// A draw can reuse already-wrapped native boxes without another wrap callback.
// Reuse our aggregate only while its complete live sources, geometry and the
// current native row identity still belong to this sheet's source vector.
// Caller holds g_native_knowledge_mutex.
static bool native_character_page_binding_current(
        const void *sheet, bool health, const char *current_row) {
    if (!sheet || !current_row) return false;
    const auto &layout = native_character_layout;
    const auto *source_address = native_character_field_address(sheet,
        health ? layout.health_sources : layout.personality_sources,
        sizeof(NativeBorrowedVector<const NativeString *>));
    const auto *box_address = native_character_field_address(sheet,
        health ? layout.health_boxes : layout.personality_boxes,
        sizeof(NativeBorrowedVector<NativeKnowledgeTextBox *>));
    if (!source_address || !box_address) return false;
    const uintptr_t owner = reinterpret_cast<uintptr_t>(source_address);
    const auto row = g_native_knowledge_row_owners.find(reinterpret_cast<uintptr_t>(current_row));
    if (row == g_native_knowledge_row_owners.end() || row->second.first != owner ||
        row->second.second < 0) return false;
    const auto found = g_native_knowledge_documents.find(owner);
    if (found == g_native_knowledge_documents.end()) return false;
    const auto &page = *found->second;
    const size_t line = static_cast<size_t>(row->second.second);
    if (page.personality != !health || page.health != health || page.thoughts ||
        page.overview_footer || line >= page.rows.size() ||
        page.row_addresses.size() != page.rows.size() ||
        page.row_addresses[line] != reinterpret_cast<uintptr_t>(current_row) ||
        page.rows[line] != current_row) return false;
    const auto sources = NativeBorrowedVector<const NativeString *>::read(source_address);
    const auto boxes = NativeBorrowedVector<NativeKnowledgeTextBox *>::read(box_address);
    if (!sources.valid(256) || !boxes.valid(256) || sources.size() == 0 ||
        sources.size() != boxes.size() || sources.size() != page.box_boundaries.size()) return false;
    size_t source_end = 0, row_end = 0;
    bool owns_row = false;
    for (size_t i = 0; i < sources.size(); ++i) {
        std::string_view source;
        const auto *box = boxes.begin[i];
        if (!box || box->width != page.width ||
            !native_string_view(sources.begin[i], &source)) return false;
        const size_t rows = native_reading_row_count(box);
        if (rows > 16384 - row_end) return false;
        const auto &boundary = page.box_boundaries[i];
        const size_t prefix = 9 + (i ? 3 : 0); // aggregate [B] and [C:x:0:x]
        if (boundary.source_end > page.source.size() || boundary.source_end < source_end ||
            boundary.source_end - source_end != prefix + source.size() ||
            std::string_view(page.source).substr(source_end + prefix, source.size()) != source ||
            boundary.native_row_end != row_end + rows) return false;
        if (line >= row_end && line < row_end + rows) {
            const auto *native_row = native_reading_row_at(box, line - row_end);
            owns_row = native_row && native_row->text == current_row;
        }
        source_end = boundary.source_end;
        row_end = boundary.native_row_end;
    }
    return owns_row && source_end == page.source.size() && row_end == page.rows.size();
}

// The live personality vector retains the complete prose even when a draw
// batch is absent or incomplete. Recover it only against this character's
// private output, preserving the native row identities and their exact byte
// positions. English words reconstructed from display fields are not input
// to this recovery path.
static std::shared_ptr<const NativeKnowledgeDocument>
captured_native_character_personality_document(const graphicst *graphics,
        const SDL_Rect &requested_pane, std::vector<NativeKnowledgeDraw> *visible_draws) {
    if (visible_draws) visible_draws->clear();
    try {
    // This is the producer's current outer character-panel rectangle, set
    // alongside its private grid before native rendering. Empty padding
    // rows cannot extend the recovered viewport through its lower border.
    const auto &panel = g_native_character_panel;
    if (panel.w <= 2 || panel.h <= 2) return {};
    const SDL_Rect interior{panel.x + 1, panel.y + 1, panel.w - 2, panel.h - 2};
    SDL_Rect pane{};
    if (!SDL_IntersectRect(&requested_pane, &interior, &pane)) return {};
    if (!graphics || !graphics->screen || !native_character_foreground_view(graphics) ||
            !g_native_character_owner || !native_character_open() ||
            pane.x < 0 || pane.y < 0 || pane.w <= 0 || pane.h <= 0 ||
            pane.x > graphics->dimx - pane.w || pane.y > graphics->dimy - pane.h)
        return {};
    const void *sheet = reinterpret_cast<const void *>(g_native_character_owner);
    std::vector<const NativeString *> sources;
    std::vector<NativeKnowledgeTextBox *> boxes;
    if (!native_character_page(sheet, false, sources, boxes) || boxes.empty()) return {};
    auto page = std::make_shared<NativeKnowledgeDocument>();
    page->personality = true;
    page->width = boxes.front() ? boxes.front()->width : 0;
    if (page->width <= 0 || page->width > pane.w) return {};
    std::vector<std::shared_ptr<const NativeKnowledgeDocument>> parts;
    parts.reserve(boxes.size());
    for (size_t index = 0; index < boxes.size(); ++index) {
        auto part = read_native_reading_box(boxes[index], sources[index], true, false, false);
        if (!part || part->width != page->width ||
                part->rows.size() > 16384 - page->rows.size() ||
                part->source.size() + 12 > 262144 - page->source.size()) return {};
        if (!index) page->foreground = part->foreground;
        if (index) page->source += "[B]";
        page->source += "[C:" + std::to_string(part->foreground & 7) +
            ":0:" + std::to_string((part->foreground & 64) ? 1 : 0) + "]";
        page->source += part->source;
        page->rows.insert(page->rows.end(), part->rows.begin(), part->rows.end());
        page->row_addresses.insert(page->row_addresses.end(),
            part->row_addresses.begin(), part->row_addresses.end());
        page->box_boundaries.push_back({page->source.size(), page->rows.size()});
        parts.push_back(std::move(part));
    }
    if (page->rows.empty()) return {};

    const int right = pane.x + pane.w, bottom = pane.y + pane.h;
    const auto row_ink_matches = [&](size_t line, int left, int y) {
        const auto &source = page->rows[line];
        // Native wrapping checks the word before inserting its separating
        // space, so a row can exceed width by one. An initial long word is
        // appended whole. Their visible ink still belongs to this row up
        // to the actual panel clip, independently of the layout width.
        const size_t visible = std::min(source.size(), static_cast<size_t>(right - left));
        for (size_t at = 0; at < visible; ++at) {
            if (source[at] == ' ') continue;
            const size_t tile = static_cast<size_t>(left + static_cast<int>(at)) *
                graphics->dimy + y;
            if (graphics->screen[tile * 8] != static_cast<unsigned char>(source[at]))
                return false;
        }
        return true;
    };
    struct Alignment { int left, origin, first, end; };
    std::optional<Alignment> alignment;
    std::array<std::vector<std::pair<int, int>>, 256> ink_positions;
    for (int y = pane.y; y < bottom; ++y)
        for (int x = pane.x; x < right; ++x) {
            const auto ch = graphics->screen[(static_cast<size_t>(x) * graphics->dimy + y) * 8];
            if (ch && ch != ' ') ink_positions[ch].emplace_back(x, y);
        }
    // A native line can start above this viewport after scrolling. Its
    // position relative to the other rows stays exact; no token matching,
    // whitespace insertion or name spelling selects that position.
    for (size_t line = 0; line < page->rows.size(); ++line) {
        const auto &source = page->rows[line];
        size_t anchor = std::string::npos;
        // Every accepted left position exposes the box's nominal width;
        // choose an anchor there even when a long native token continues
        // farther right and is only partly visible at the panel boundary.
        const size_t anchored = std::min(source.size(), static_cast<size_t>(page->width));
        for (size_t at = 0; at < anchored; ++at) {
            const auto ch = static_cast<unsigned char>(source[at]);
            if (ch != ' ' && (anchor == std::string::npos ||
                    ink_positions[ch].size() <
                        ink_positions[static_cast<unsigned char>(source[anchor])].size()))
                anchor = at;
        }
        if (anchor == std::string::npos) continue;
        // Index the private grid once, then use the least common native
        // byte in each row to locate candidates before comparing any row.
        // Even a one-byte legitimate source can participate; uniqueness
        // and complete live-row agreement establish its provenance.
        for (const auto &[anchor_x, y] :
                ink_positions[static_cast<unsigned char>(source[anchor])]) {
            const int left = anchor_x - static_cast<int>(anchor);
            if (left < pane.x || left > right - page->width) continue;
            const int origin = y - static_cast<int>(line);
            const int first = std::max(0, pane.y - origin);
            const int end = std::min(static_cast<int>(page->rows.size()), bottom - origin);
            if (alignment && alignment->left == left && alignment->origin == origin)
                continue;
            if (!row_ink_matches(line, left, y)) continue;
            bool intact = true;
            for (int visible = first; visible < end; ++visible) {
                if (!row_ink_matches(static_cast<size_t>(visible), left, origin + visible)) {
                    intact = false;
                    break;
                }
            }
            if (!intact) continue;
            // More than one complete native alignment is ambiguous,
            // including repeated single-line paragraphs near an edge.
            if (alignment) return {};
            alignment = Alignment{left, origin, first, end};
        }
    }
    if (!alignment) return {};

    // Keep the snapshot tied to the same live source strings, boxes and row
    // allocations through publication. A page rebuild cannot donate an old
    // complete source to new output merely by reusing its enclosing sheet.
    std::vector<const NativeString *> live_sources;
    std::vector<NativeKnowledgeTextBox *> live_boxes;
    if (!native_character_open() ||
            !native_character_page(sheet, false, live_sources, live_boxes) ||
            live_sources != sources || live_boxes != boxes) return {};
    for (size_t index = 0; index < boxes.size(); ++index) {
        std::string_view source;
        const auto &part = *parts[index];
        if (!native_string_view(sources[index], &source) || source != part.source ||
                boxes[index]->width != page->width ||
                native_reading_row_count(boxes[index]) != part.rows.size()) return {};
        for (size_t line = 0; line < part.rows.size(); ++line) {
            const auto *row = native_reading_row_at(boxes[index], line);
            if (!row || reinterpret_cast<uintptr_t>(row) != part.row_addresses[line] ||
                    std::string_view(row->text, strnlen(row->text, sizeof(row->text))) !=
                        part.rows[line]) return {};
        }
    }
    if (visible_draws) {
        visible_draws->reserve(static_cast<size_t>(alignment->end - alignment->first));
        const std::array<long, 4> clip{{pane.x, right - 1, pane.y, bottom - 1}};
        for (int line = alignment->first; line < alignment->end; ++line)
            visible_draws->push_back({page, line, alignment->left, alignment->origin + line,
                reinterpret_cast<uintptr_t>(graphics->screen), graphics->dimx,
                graphics->dimy, clip});
    }
    return page;
    } catch (...) {
        if (visible_draws) visible_draws->clear();
        return {};
    }
}

static void capture_native_character_document(
        NativeKnowledgeTextBox *box, const NativeString *source, const void *sheet,
        bool health, bool thoughts, NativeWrapTiming &timing,
        const char *current_row = nullptr, bool grow_rows = true, bool refresh_owned_page = false) {
    if (!native_character_capture_enabled(sheet)) return;
    try {
        auto translation_wait = timing.phase(NativeWrapTiming::Stage::TranslationLock);
        dfcn::TranslationStateScope translation_scope;
        translation_wait.stop();
        auto capture_wait = timing.phase(NativeWrapTiming::Stage::CaptureLock);
        std::lock_guard<std::mutex> lock(g_native_knowledge_mutex);
        capture_wait.stop();
        auto aggregate_timing = timing.phase(NativeWrapTiming::Stage::Aggregate);
        const bool personality = !health && !thoughts;
        if (!refresh_owned_page && current_row && !thoughts &&
            native_character_page_binding_current(sheet, health, current_row)) return;
        if (!refresh_owned_page && current_row && sheet && thoughts) {
            const auto row = g_native_knowledge_row_owners.find(
                reinterpret_cast<uintptr_t>(current_row));
            if (row != g_native_knowledge_row_owners.end()) {
                for (const auto &[source_offset, box_offset] : native_character_layout.thought_vectors) {
                    const auto *source_address = native_character_field_address(sheet, source_offset,
                        sizeof(NativeBorrowedVector<const NativeString *>));
                    if (!source_address || !native_character_field_address(sheet, box_offset,
                            sizeof(NativeBorrowedVector<NativeKnowledgeTextBox *>))) continue;
                    const uintptr_t owner = reinterpret_cast<uintptr_t>(source_address);
                    if (row->second.first != owner) continue;
                    const auto found = g_native_knowledge_documents.find(owner);
                    if (found != g_native_knowledge_documents.end() && found->second->thoughts &&
                        found->second->overview_footer == !grow_rows &&
                        row->second.second >= 0 &&
                        static_cast<size_t>(row->second.second) < found->second->rows.size() &&
                        found->second->rows[static_cast<size_t>(row->second.second)] == current_row)
                        return;
                }
            }
        }
        // Preserve component capture while a character page is being built;
        // its vectors may not yet contain every box. Unclassified call sites
        // must prove ownership before invalidating a different page's owner.
        if ((!box && !current_row) || !native_character_description_active(sheet, health)) return;
        if (!thoughts && !native_character_page_fields_available(sheet, health, false)) return;
        if (!thoughts && !current_row)
            capture_native_reading_box(box, source, personality, health, false, timing);
        std::vector<const NativeString *> sources;
        std::vector<NativeKnowledgeTextBox *> boxes;
        uintptr_t owner = 0;
        if (!native_character_page(sheet, health, sources, boxes, thoughts,
                thoughts ? box : nullptr, thoughts ? source : nullptr, &owner, current_row)) {
            if (thoughts && !current_row && native_character_page_fields_available(sheet, false, true))
                capture_native_reading_box(box, source, false, false, false, timing, grow_rows);
            return;
        }
        // Invalidate only this page's aggregate. Using the enclosing sheet
        // erased the other tab's row bindings, so returning to an already
        // wrapped Memories/Recent thoughts page lost its full scroll range.
        forget_native_knowledge_document(owner);
        // Native rewrap traverses the existing source/box vectors in order.
        // Capture Thoughts/Memories once the last box is ready, or recover
        // the already-built page at its actual draw. A long memory history
        // must not require thousands of components to survive the shared LRU.
        if (thoughts && !current_row && box != boxes.back()) return;
        if (boxes.empty() || !boxes.front()) return;
        const size_t count = sources.size();
        auto page = std::make_shared<NativeKnowledgeDocument>();
        page->personality = personality;
        page->health = health;
        page->thoughts = thoughts;
        page->overview_footer = thoughts && !grow_rows;
        page->width = boxes.front()->width;
        NativeKnowledgeTextBox *last_box = nullptr;
        std::shared_ptr<const NativeKnowledgeDocument> last_document;
        std::vector<std::shared_ptr<const NativeKnowledgeDocument>> parts;
        parts.reserve(count);
        size_t total_rows = 0;
        size_t total_source_bytes = 0;
        for (size_t i = 0; i < count; ++i) {
            const NativeString *part_source = sources[i];
            NativeKnowledgeTextBox *part_box = boxes[i];
            std::string_view part_text;
            if (!native_string_view(part_source, &part_text)) return;
            if (!part_source || !part_box) return;
            std::shared_ptr<const NativeKnowledgeDocument> part_document;
            if (thoughts || current_row) {
                part_document = read_native_reading_box(
                    part_box, part_source, personality, health, thoughts);
            } else {
                const auto found = g_native_knowledge_documents.find(
                    reinterpret_cast<uintptr_t>(part_box));
                if (found != g_native_knowledge_documents.end()) part_document = found->second;
            }
            // Rebuild only after all live sources, widths and row identities
            // agree. Reused allocations from a previous unit/subtab cannot
            // supply missing paragraphs while the native rebuild is underway.
            if (!part_document) return;
            const auto &part = *part_document;
            if (part.personality != personality || part.health != health || part.thoughts != thoughts ||
                part.source != part_text ||
                part.width != page->width || part_box->width != page->width ||
                part.rows.size() != native_reading_row_count(part_box)) return;
            for (size_t row = 0; row < part.row_addresses.size(); ++row) {
                if (part.row_addresses[row] !=
                    reinterpret_cast<uintptr_t>(native_reading_row_at(part_box, row))) return;
            }
            total_rows += part.rows.size();
            total_source_bytes += part.source.size() + 9 + (i ? 3 : 0);
            if (total_source_bytes > 262144 || total_rows > 16384) return;
            parts.push_back(std::move(part_document));
        }
        // Native wrapping arrives one box at a time. Until every component
        // above is current, do not repeatedly copy the already captured
        // prefix of a long thoughts/personality page only to discard it.
        page->source.reserve(total_source_bytes);
        page->rows.reserve(total_rows);
        page->row_addresses.reserve(total_rows);
        page->box_boundaries.reserve(count);
        for (size_t i = 0; i < count; ++i) {
            const auto &part = *parts[i];
            if (i == 0) page->foreground = part.foreground;
            if (!page->source.empty()) page->source += "[B]";
            page->source += "[C:" + std::to_string(part.foreground & 7) +
                ":0:" + std::to_string((part.foreground & 64) ? 1 : 0) + "]";
            page->source += part.source;
            page->rows.insert(page->rows.end(), part.rows.begin(), part.rows.end());
            page->row_addresses.insert(page->row_addresses.end(),
                part.row_addresses.begin(), part.row_addresses.end());
            page->box_boundaries.push_back({page->source.size(), page->rows.size()});
            last_box = boxes[i];
            last_document = parts[i];
        }
        int required_rows = 0;
        if (!current_row && grow_rows) {
            auto required_timing = timing.phase(NativeWrapTiming::Stage::RequiredRows);
            required_rows = g_overlay.native_knowledge_required_rows(
                page->source, page->width, personality, health, thoughts);
        }
        if (required_rows > static_cast<int>(page->rows.size()) && required_rows <= 16384) {
            // Grow just the final box by the whole document's measured deficit.
            // This occurs BEFORE the native renderer counts scrollbar rows;
            // per-box fitting would reintroduce gaps and viewport-dependent
            // sizes, and lose short needs when the larger font wraps them.
            auto extended = std::make_shared<NativeKnowledgeDocument>(*last_document);
            const size_t before = extended->rows.size();
            extend_native_reading_rows(last_box, *extended,
                before + static_cast<size_t>(required_rows) - page->rows.size());
            page->rows.insert(page->rows.end(), extended->rows.begin() +
                static_cast<std::ptrdiff_t>(before), extended->rows.end());
            page->row_addresses.insert(page->row_addresses.end(),
                extended->row_addresses.begin() + static_cast<std::ptrdiff_t>(before),
                extended->row_addresses.end());
            page->box_boundaries.back().native_row_end = page->rows.size();
            if (!thoughts) remember_native_knowledge_document(
                reinterpret_cast<uintptr_t>(last_box), std::move(extended));
        }
        // Override all constituent row owners atomically with the aggregate.
        // The existing knowledge draw/scroll/occlusion path now serves both.
        remember_native_knowledge_document(owner, std::move(page));
    } catch (...) {}
}

#ifdef _WIN32
static bool capture_native_owned_character_wrap(NativeKnowledgeTextBox *box,
        const NativeString *source, NativeWrapTiming &timing) {
    const auto sheet = g_native_character_drawing_sheet
        ? g_native_character_drawing_sheet : g_native_character_owner;
    const auto owner = native_character_rich_owner(reinterpret_cast<const void *>(sheet), box, source);
    if (!owner) return false;
    const bool health = owner->group == NativeCharacterRichGroup::Health;
    const bool thoughts = owner->group == NativeCharacterRichGroup::Recent ||
        owner->group == NativeCharacterRichGroup::Memories;
    capture_native_character_document(box, source, owner->sheet, health, thoughts,
        timing, nullptr, !owner->overview);
    return true;
}

static uintptr_t capture_native_owned_character_row(const char *row) {
    // Only the real render receiver supplies a draw owner. A previous Present
    // or a global sheet address cannot classify a row from another native view.
    if (!row || !g_native_character_drawing_sheet || !g_native_character_draw_scope_id) return 0;
    try {
        const auto owner = native_character_rich_owner(
            reinterpret_cast<const void *>(g_native_character_drawing_sheet), nullptr, nullptr, row);
        if (!owner) return 0;
        const bool health = owner->group == NativeCharacterRichGroup::Health;
        const bool thoughts = owner->group == NativeCharacterRichGroup::Recent ||
            owner->group == NativeCharacterRichGroup::Memories;
        struct PreparedPages {
            uint64_t generation = 0;
            std::array<std::weak_ptr<const NativeKnowledgeDocument>, 4> documents;
        };
        auto &prepared = reloadable_thread_state<PreparedPages, struct NativeCharacterRichPreparedTag>();
        const auto generation = native_character_rich_index().generation;
        if (prepared.generation != generation) {
            prepared.documents = {};
            prepared.generation = generation;
        }
        const auto group = static_cast<size_t>(owner->group);
        const auto current = [&](const std::shared_ptr<const NativeKnowledgeDocument> &page) {
            if (!page || page->personality != (!health && !thoughts) || page->health != health ||
                    page->thoughts != thoughts || page->overview_footer != owner->overview ||
                    page->width != owner->box->width || owner->index >= page->box_boundaries.size()) return false;
            const auto binding = g_native_knowledge_row_owners.find(reinterpret_cast<uintptr_t>(row));
            if (binding == g_native_knowledge_row_owners.end() || binding->second.first != owner->page ||
                    binding->second.second < 0) return false;
            const auto line = static_cast<size_t>(binding->second.second);
            if (line >= page->rows.size() || line >= page->row_addresses.size() ||
                    page->row_addresses[line] != reinterpret_cast<uintptr_t>(row) || page->rows[line] != row)
                return false;
            const size_t start = owner->index ? page->box_boundaries[owner->index - 1].source_end : 0;
            const size_t end = page->box_boundaries[owner->index].source_end;
            const size_t prefix = 9 + (owner->index ? 3 : 0);
            std::string_view source;
            return native_string_view(owner->source, &source) && end >= start && end <= page->source.size() &&
                end - start == prefix + source.size() &&
                std::string_view(page->source).substr(start + prefix, source.size()) == source;
        };
        {
            std::lock_guard<std::mutex> lock(g_native_knowledge_mutex);
            const auto found = g_native_knowledge_documents.find(owner->page);
            if (found != g_native_knowledge_documents.end() &&
                    prepared.documents[group].lock() == found->second && current(found->second)) return owner->page;
        }
        NativeWrapTiming timing("character-owned-draw", nullptr, nullptr, !health && !thoughts, health, thoughts);
        // current_row forbids append/trim even for a scrolling page. Rebuild
        // from all live native components once per render/rewrap generation.
        capture_native_character_document(nullptr, nullptr, owner->sheet, health, thoughts,
            timing, row, !owner->overview, true);
        {
            std::lock_guard<std::mutex> lock(g_native_knowledge_mutex);
            const auto found = g_native_knowledge_documents.find(owner->page);
            if (found != g_native_knowledge_documents.end() && current(found->second)) {
                prepared.documents[group] = found->second;
                return owner->page;
            }
        }
    } catch (...) {}
    return 0;
}
#endif

static void capture_native_character_wrap(
        NativeKnowledgeTextBox *box, const NativeString *source, const void *sheet,
        bool health, bool thoughts = false, bool grow_rows = true);

static void dfcn_capture_native_personality_wrap(
        NativeKnowledgeTextBox *box, const NativeString *source, const void *sheet) {
    capture_native_character_wrap(box, source, sheet, false);
}

static void dfcn_capture_native_health_wrap(
        NativeKnowledgeTextBox *box, const NativeString *source, const void *sheet) {
    capture_native_character_wrap(box, source, sheet, true);
}

static void dfcn_capture_native_thoughts_wrap(
        NativeKnowledgeTextBox *box, const NativeString *source, const void *sheet) {
    capture_native_character_wrap(box, source, sheet, false, true);
}

static void dfcn_capture_native_overview_thoughts_wrap(
        NativeKnowledgeTextBox *box, const NativeString *source, const void *sheet) {
    // Overview decides whether a complete box fits below the quote before
    // drawing it. This bounded footer has no scrollbar; scroll-padding growth
    // can make the native renderer skip an otherwise visible whole box.
    capture_native_character_wrap(box, source, sheet, false, true, false);
}

static void dfcn_capture_native_knowledge_draw(
        graphicst *graphics, const char *text, const char *colors) {
    graphics = native_graphics_view(graphics);
#ifdef _WIN32
    const auto character_page = graphics && text ? capture_native_owned_character_row(text) : 0;
#endif
    // The story preview retains its colored rows across core replacement.
    // Recover their selected event before the shared writer publishes them.
    if (graphics && text) prepare_native_performance_story_document(text);
    // The native draw advances the cursor. Preserve its input position, but
    // publish row ownership only after the corresponding grid write exists.
    // Otherwise the renderer can consume a new scroll capture against the
    // preceding logical row and temporarily overlay the wrong translation.
    const int draw_x = graphics ? graphics->screenx : -1;
    const int draw_y = graphics ? graphics->screeny : -1;
    const uintptr_t draw_screen = graphics ? reinterpret_cast<uintptr_t>(graphics->screen) : 0;
    const int draw_dimx = graphics ? graphics->dimx : 0;
    const int draw_dimy = graphics ? graphics->dimy : 0;
    const uint64_t draw_epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
    const std::array<long, 4> draw_clip = graphics
        ? std::array<long, 4>{{graphics->clipx[0], graphics->clipx[1],
                              graphics->clipy[0], graphics->clipy[1]}}
        : std::array<long, 4>{};
    std::unique_lock<std::mutex> lock(g_native_knowledge_mutex, std::defer_lock);
#ifdef _WIN32
    // The pinned Windows draw only calls its non-calling grid writer. Pair
    // that write with publication so a consumer cannot observe the new row
    // before its owner exists. Still perform the native call if locking fails.
    try { lock.lock(); } catch (...) {}
#endif
    if (g_real_native_knowledge_draw) native_graphics_call(g_real_native_knowledge_draw, graphics, text, colors);
    try {
#ifndef _WIN32
        lock.lock();
#endif
        if (lock.owns_lock() && graphics && text) {
            const auto row = g_native_knowledge_row_owners.find(
                reinterpret_cast<uintptr_t>(text));
            if (row != g_native_knowledge_row_owners.end()) {
                const auto document = g_native_knowledge_documents.find(row->second.first);
                if (document != g_native_knowledge_documents.end() &&
#ifdef _WIN32
                    // A reused row allocation cannot carry a previous unit's
                    // character aggregate into the current render. Generic
                    // prose remains available when page ownership is unknown.
                    (!g_native_character_drawing_sheet ||
                        (!document->second->personality && !document->second->health && !document->second->thoughts) ||
                        character_page == row->second.first) &&
#endif
                    row->second.second >= 0 &&
                    static_cast<size_t>(row->second.second) < document->second->rows.size() &&
                    document->second->rows[static_cast<size_t>(row->second.second)] == text) {
                    NativeKnowledgeDraw draw{document->second, row->second.second,
                        draw_x, draw_y, draw_screen, draw_dimx, draw_dimy, draw_clip};
                    // SDL Present is independent of the native row loop. Keep
                    // its preceding batch while a new loop is still arriving,
                    // so the consumer can select the batch matching its grid.
                    // Ordinary UI draws and SDL epochs cannot split this loop.
                    if (!g_native_knowledge_draws.empty()) {
                        const auto &previous = g_native_knowledge_draws.back();
                        if (draw.document != previous.document || draw.screen != previous.screen ||
                            draw.dimx != previous.dimx || draw.dimy != previous.dimy ||
                            draw.x != previous.x ||
                            draw.y != previous.y + 1 || draw.line != previous.line + 1) {
                            g_native_knowledge_previous_draws = std::move(g_native_knowledge_draws);
                            g_native_knowledge_previous_draw_epoch = g_native_knowledge_draw_epoch;
                            g_native_knowledge_draws.clear();
                        }
                    }
                    g_native_knowledge_draw_epoch =
                        g_embark_item_capture_epoch.load(std::memory_order_acquire);
                    g_native_knowledge_draws.push_back(std::move(draw));
                }
            }
        }
        if (lock.owns_lock()) lock.unlock();
        if (graphics && text) {
            // Retain ordinary wrapped UI prose as map text evidence after
            // document ownership is published. Its copying and picture
            // capture must not delay that publication or hold its mutex.
            // Read only through the terminator the original draw also uses.
            size_t length = 0;
            while (length < 4096 && text[length]) ++length;
            if (length < 4096 && draw_x >= 0 && draw_y >= 0 &&
                draw_x < graphics->dimx && draw_y < graphics->dimy &&
                draw_screen == reinterpret_cast<uintptr_t>(graphics->screen) &&
                draw_dimx == graphics->dimx && draw_dimy == graphics->dimy &&
                draw_epoch == g_embark_item_capture_epoch.load(std::memory_order_acquire))
                remember_native_drawn_text_row(draw_x, draw_y,
                    std::string_view(text, length), reinterpret_cast<uintptr_t>(text), graphics,
                    false, {}, NativeInfoTitleKind::None, false, -1,
                    NativeCivilizationField::None, false, -1, draw_clip, draw_epoch);
        }
    } catch (...) {}
}

static void capture_native_character_wrap(
        NativeKnowledgeTextBox *box, const NativeString *source, const void *sheet,
        bool health, bool thoughts, bool grow_rows) {
#ifdef _WIN32
    NativeCharacterRichMutationScope mutation;
#endif
    NativeWrapTiming timing(thoughts ? "thoughts" : health ? "health" : "personality",
        box, source, !health && !thoughts, health, thoughts);
    {
        auto native_timing = timing.phase(NativeWrapTiming::Stage::Native);
        if (g_real_native_knowledge_wrap) g_real_native_knowledge_wrap(box, source);
    }
    capture_native_character_document(box, source, sheet, health, thoughts, timing,
        nullptr, grow_rows);
}


static void dfcn_capture_native_thoughts_draw(graphicst *graphics,
        const char *text, const char *colors, const void *sheet) {
    graphics = native_graphics_view(graphics);
    if (!native_character_capture_enabled(sheet)) {
        if (g_real_native_knowledge_draw) native_graphics_call(g_real_native_knowledge_draw, graphics, text, colors);
        return;
    }
    // The native renderer can reuse every box without calling wrap after a
    // core reload. Bind its complete source page before publishing this draw.
    // Recovery only reads rows: the native loop already holds vector iterators,
    // so any required scroll padding must wait for the normal wrap callback.
    if (graphics && text && sheet) {
        prepare_native_overview_thoughts_cache(sheet, false, text);
        NativeWrapTiming timing("thoughts-draw", nullptr, nullptr, false, false, true);
        capture_native_character_document(nullptr, nullptr, sheet, false, true, timing, text);
    }
    dfcn_capture_native_knowledge_draw(graphics, text, colors);
}

static void dfcn_capture_native_personality_draw(graphicst *graphics,
        const char *text, const char *colors, const void *sheet) {
    graphics = native_graphics_view(graphics);
    if (!native_character_capture_enabled(sheet)) {
        if (g_real_native_knowledge_draw) native_graphics_call(g_real_native_knowledge_draw, graphics, text, colors);
        return;
    }
    // The native Traits/Values/Preferences/Needs renderer retains the complete
    // source vector even when its cached width skips wrapping. Bind that live
    // page before the generic row writer publishes this draw. The draw loop
    // already owns native vector iterators, so recovery must never grow rows.
    if (graphics && text && sheet) {
        NativeWrapTiming timing("personality-draw", nullptr, nullptr, true, false, false);
        capture_native_character_document(nullptr, nullptr, sheet, false, false,
            timing, text, false);
    }
    dfcn_capture_native_knowledge_draw(graphics, text, colors);
}

static void dfcn_capture_native_overview_thoughts_draw(graphicst *graphics,
        const char *text, const char *colors, const void *sheet) {
    graphics = native_graphics_view(graphics);
    if (!native_character_capture_enabled(sheet)) {
        if (g_real_native_knowledge_draw) native_graphics_call(g_real_native_knowledge_draw, graphics, text, colors);
        return;
    }
    if (graphics && text && sheet) {
        prepare_native_overview_thoughts_cache(sheet);
        NativeWrapTiming timing("overview-thoughts-draw", nullptr, nullptr, false, false, true);
        capture_native_character_document(nullptr, nullptr, sheet, false, true, timing, text, false);
    }
    dfcn_capture_native_knowledge_draw(graphics, text, colors);
}

// The complete pre-ellipsis value is paired with the same live string and frame.
struct PendingNativeField {
    const NativeString *owner = nullptr;
    uint64_t epoch = 0;
    size_t width = 0;
    std::string visible, complete;
};
static PendingNativeField &pending_native_origin() {
    return reloadable_thread_state<PendingNativeField, struct OriginTag>();
}
static PendingNativeField &pending_native_book() {
    return reloadable_thread_state<PendingNativeField, struct LegendsBookTag>();
}
static PendingNativeField &pending_native_embark() {
    return reloadable_thread_state<PendingNativeField, struct EmbarkFieldTag>();
}
static void capture_native_field_resize(PendingNativeField &pending,
        const NativeString *source, size_t width, bool origin = false,
        bool dots_at_three = false, bool zero_pad_one = false, bool plain_shrink = false) {
    pending = {};
    try {
        std::string_view text;
        if (!native_string_view(source, &text, 4096)) return;
        const bool padded = zero_pad_one && width >= 4 && text.size() + 1 == width;
        if (text.size() < width && !padded) return;
        if (origin && (!text.starts_with("From ") || text.ends_with("...") ||
                       text.find(", ") == std::string_view::npos)) return;
        pending.owner = source;
        pending.epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
        pending.width = width;
        pending.complete.assign(text);
        pending.visible.assign(text.substr(0, width));
        // Only the explicitly bound one-byte growth case reaches here. The
        // following three dots completely replace its trailing zero byte.
        if (padded) pending.visible.push_back('\0');
        if (!plain_shrink && (width > 3 || (dots_at_three && width == 3)))
            pending.visible.replace(width - 3, 3, "...");
    } catch (...) { pending = {}; }
}
enum class NativeFieldKind { EmbarkItem, Origin, BookTitle, BookType };
static void capture_native_field_draw(PendingNativeField &storage, graphicst *graphics,
        const NativeString *source, NativeFieldKind kind) {
    auto pending = std::move(storage);
    storage = {};
    try {
        std::string_view visible;
        if (!graphics || !native_string_view(source, &visible, 4096) || visible.empty()) return;
        const auto epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
        // At exactly three cells native paths can retain the three-character
        // prefix or replace it entirely with dots. Pair either rendering with
        // the same live source and epoch, using one rule on every host.
        const bool matched_visible = pending.visible == visible ||
            (pending.width == 3 && (visible == "..." ||
             visible == std::string_view(pending.complete).substr(0, 3)));
        const bool clipped = pending.owner == source && pending.epoch == epoch &&
                             matched_visible && !pending.complete.empty();
        std::string complete(clipped ? std::string_view(pending.complete) : visible);
        const int x = graphics->screenx, y = graphics->screeny;
        if (kind == NativeFieldKind::EmbarkItem) {
            if (x >= 0 && y >= 0 && x < g_embark_capture_screen_dimx.load() &&
                y < g_embark_capture_screen_dimy.load()) {
                remember_embark_item_field(x, y, visible, complete);
                remember_embark_item_source(x, y, visible, complete);
            } else if (clipped) {
                // An unavailable cursor is resolved against exact visible grid
                // text using the same rule on every native ABI.
                remember_embark_item_field(-1, -1, visible, complete);
            }
        } else if (kind == NativeFieldKind::Origin) {
            if (!complete.starts_with("From ") || complete.ends_with("...") ||
                complete.find(", ") == std::string::npos) return;
            NativeOriginCaption capture{x, y, std::string(visible), std::move(complete)};
            std::lock_guard<std::mutex> lock(g_origin_caption_mutex);
            if (g_origin_caption_epoch != epoch) {
                g_origin_captions.clear(); g_origin_caption_epoch = epoch;
            }
            std::erase_if(g_origin_captions, [&](const auto &previous) {
                return previous.x == x && previous.y == y;
            });
            if (g_origin_captions.size() < 512) g_origin_captions.push_back(std::move(capture));
        } else {
            const bool item_type = kind == NativeFieldKind::BookType;
            NativeLegendsBookField capture{x, y, item_type, std::string(visible), std::move(complete)};
            std::lock_guard<std::mutex> lock(g_legends_book_mutex);
            if (g_legends_book_epoch != epoch) {
                g_legends_book_fields.clear(); g_legends_book_epoch = epoch;
            }
            std::erase_if(g_legends_book_fields, [&](const auto &previous) {
                return previous.x == x && previous.y == y && previous.item_type == item_type;
            });
            if (g_legends_book_fields.size() < 1024)
                g_legends_book_fields.push_back(std::move(capture));
        }
    } catch (...) {}
}

static void reset_native_book_capture() {
    pending_native_book() = {};
    std::lock_guard<std::mutex> lock(g_legends_book_mutex);
    g_legends_book_fields.clear();
    g_legends_book_epoch = 0;
}
static void reset_native_origin_capture() {
    pending_native_origin() = {};
    std::lock_guard<std::mutex> lock(g_origin_caption_mutex);
    g_origin_captions.clear();
    g_origin_caption_epoch = 0;
}
