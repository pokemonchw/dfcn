// Painter:string clips its argument before screen.paintString sees it. The
// exported CheckPen boundary still owns that Lua call and its complete text.
// Observe the installed Sitemap, NotifyOverlay, AssignAnimal and MoveGoods List renderers
// and actual Label controls. Copy strings before returning to DFHack; no Lua
// state, widget, callback, or table reference leaves this call.
struct NativeDfhackSitemapLuaApi {
    NativeDfhackLuaOutputApi stack;
    const char *(*pushstring)(NativeDfhackLuaState *, const char *) = nullptr;
    int (*rawget)(NativeDfhackLuaState *, int) = nullptr;
    int (*rawgeti)(NativeDfhackLuaState *, int, int64_t) = nullptr;
    size_t (*rawlen)(NativeDfhackLuaState *, int) = nullptr;
    int (*getmetatable)(NativeDfhackLuaState *, int) = nullptr;
    const void *(*topointer)(NativeDfhackLuaState *, int) = nullptr;
    int (*rawequal)(NativeDfhackLuaState *, int, int) = nullptr;
    int (*toboolean)(NativeDfhackLuaState *, int) = nullptr;
    const char *(*getupvalue)(NativeDfhackLuaState *, int, int) = nullptr;
    NativeDfhackLuaCFunction paint_string = nullptr;
    std::string painter_source, list_source, filtered_source, sitemap_source, notify_source, zone_source;
    std::string label_source, cycle_source, overlay_source, asyncexport_source, prioritize_source;
    std::string filterselection_source, planner_source, mechanisms_source, itemselection_source;
    std::string wrapped_source, control_panel_source, movegoods_source, spectate_source;
    std::string autotraining_source, autofarm_source;
};
static NativeDfhackSitemapLuaApi g_native_dfhack_sitemap_lua_api;
static std::atomic_bool g_native_dfhack_sitemap_lua_bound{false};

enum class NativeDfhackChoiceTextOwner : unsigned char {
    Sitemap, Notification, AnimalAssignment, OverlayLabel, TradeGoods, AutotrainingUnit,
    AutotrainingSquad
};

struct NativeDfhackSitemapText {
    const unsigned char *grid = nullptr;
    int dimx = 0, dimy = 0, x = 0, y = 0;
    bool top_layer = false;
    uint64_t page_revision = 0;
    NativeDfhackChoiceTextOwner owner = NativeDfhackChoiceTextOwner::Sitemap;
    std::string notification_name;
    std::string full, visible;
    NativeDfhackOverlayText overlay;
    std::optional<NativeDfhackAutotrainingSquadText> squad;
};
static std::mutex g_native_dfhack_sitemap_text_mutex;
static std::vector<NativeDfhackSitemapText> g_native_dfhack_sitemap_text;
static uint64_t g_native_dfhack_sitemap_text_page_revision = 0;
struct NativeDfhackControlPanelCapture {
    const unsigned char *grid = nullptr;
    int dimx = 0, dimy = 0;
    bool top_layer = false;
    uint64_t page_revision = 0;
    NativeDfhackControlPanelText text;
};
static std::vector<NativeDfhackControlPanelCapture> g_native_dfhack_control_panel_text;

struct NativeDfhackTextFrame {
    std::vector<NativeDfhackSitemapText> sitemap;
    std::vector<NativeDfhackControlPanelCapture> control_panel;
    uint64_t page_revision = 0;
};
static std::shared_ptr<const NativeDfhackTextFrame> &native_dfhack_text_frame_read() {
    return reloadable_thread_state<std::shared_ptr<const NativeDfhackTextFrame>,
        struct NativeDfhackTextFrameReadTag>();
}
static std::shared_ptr<const NativeDfhackTextFrame> use_native_dfhack_text_frame(
        std::shared_ptr<const NativeDfhackTextFrame> frame) {
    auto &current = native_dfhack_text_frame_read();
    auto previous = std::move(current);
    current = std::move(frame);
    return previous;
}
struct NativeDfhackTextReadAccess {
    std::shared_ptr<const NativeDfhackTextFrame> frame = native_dfhack_text_frame_read();
    std::unique_lock<std::mutex> lock{g_native_dfhack_sitemap_text_mutex, std::defer_lock};
    NativeDfhackTextReadAccess() { if (!frame) lock.lock(); }
    const auto &sitemap() const { return frame ? frame->sitemap : g_native_dfhack_sitemap_text; }
    const auto &control_panel() const {
        return frame ? frame->control_panel : g_native_dfhack_control_panel_text;
    }
    uint64_t revision() const {
        return frame ? frame->page_revision : g_native_dfhack_sitemap_text_page_revision;
    }
};
static std::shared_ptr<const NativeDfhackTextFrame> capture_native_dfhack_text_frame(
        const graphicst *source, const graphicst *copy) {
    auto frame = std::make_shared<NativeDfhackTextFrame>();
    if (!source || !copy) return frame;
    NativeDfhackTextReadAccess access;
    frame->page_revision = access.revision();
    const auto current = [&](const auto &capture) {
        return capture.page_revision == frame->page_revision &&
            capture.dimx == source->dimx && capture.dimy == source->dimy && capture.grid &&
            capture.grid == (capture.top_layer ? source->screen_top : source->screen);
    };
    for (const auto &capture : access.sitemap()) {
        if (!current(capture)) continue;
        auto owned = capture;
        owned.grid = owned.top_layer ? copy->screen_top : copy->screen;
        frame->sitemap.push_back(std::move(owned));
    }
    for (const auto &capture : access.control_panel()) {
        if (!current(capture)) continue;
        auto owned = capture;
        owned.grid = owned.top_layer ? copy->screen_top : copy->screen;
        frame->control_panel.push_back(std::move(owned));
    }
    return frame;
}

static void clear_native_dfhack_sitemap_text() {
    std::lock_guard<std::mutex> lock(g_native_dfhack_sitemap_text_mutex);
    g_native_dfhack_sitemap_text.clear();
    g_native_dfhack_control_panel_text.clear();
    g_native_dfhack_sitemap_text_page_revision = 0;
}

// Beginning a private staging frame retires only that buffer's old sources.
// The other buffer still owns the committed layer until this frame publishes.
static void clear_native_dfhack_text_buffer(const graphicst *gps) {
    if (!gps) return;
    std::lock_guard<std::mutex> lock(g_native_dfhack_sitemap_text_mutex);
    const auto retired = [&](const auto &capture) {
        return capture.grid == gps->screen || capture.grid == gps->screen_top;
    };
    std::erase_if(g_native_dfhack_sitemap_text, retired);
    std::erase_if(g_native_dfhack_control_panel_text, retired);
}

// Text bytes alone do not distinguish an authored option from a sentinel or
// a clipped document from another document with the same visible prefix.
// Hash each current buffer's copied semantic sources for the worker's cache.
static bool native_dfhack_text_capture_has_content(const graphicst *gps) noexcept {
    if (!native_dfhack_logo_grid_valid(gps)) return false;
    const auto page_revision = native_dfhack_layer_page_revision();
    NativeDfhackTextReadAccess access;
    if (page_revision != access.revision()) return false;
    const auto current = [&](const auto &capture) {
        return capture.page_revision == page_revision && capture.dimx == gps->dimx &&
            capture.dimy == gps->dimy && capture.grid &&
            capture.grid == (capture.top_layer ? gps->screen_top : gps->screen);
    };
    return std::any_of(access.sitemap().begin(),
            access.sitemap().end(), current) ||
        std::any_of(access.control_panel().begin(),
            access.control_panel().end(), current);
}

static uint64_t native_dfhack_text_capture_key(const graphicst *gps) {
    if (!native_dfhack_logo_grid_valid(gps)) return 0;
    const auto page_revision = native_dfhack_layer_page_revision();
    NativeDfhackTextReadAccess access;
    if (page_revision != access.revision()) return 0;
    uint64_t key = 14695981039346656037ULL;
    const auto scalar = [&](uint64_t value) {
        for (unsigned byte = 0; byte < 8; ++byte) {
            key ^= static_cast<unsigned char>(value);
            key *= 1099511628211ULL;
            value >>= 8;
        }
    };
    const auto string = [&](std::string_view value) {
        scalar(value.size());
        for (const unsigned char byte : value) {
            key ^= byte;
            key *= 1099511628211ULL;
        }
    };
    const auto rect = [&](const SDL_Rect &value) {
        scalar(value.x); scalar(value.y); scalar(value.w); scalar(value.h);
    };
    const auto current = [&](const auto &capture) {
        return capture.page_revision == page_revision && capture.dimx == gps->dimx &&
            capture.dimy == gps->dimy && capture.grid &&
            capture.grid == (capture.top_layer ? gps->screen_top : gps->screen);
    };
    size_t count = 0;
    scalar(1);
    for (const auto &capture : access.sitemap()) {
        if (!current(capture)) continue;
        ++count;
        scalar(capture.x); scalar(capture.y); scalar(capture.top_layer);
        scalar(static_cast<unsigned char>(capture.owner));
        string(capture.notification_name); string(capture.full); string(capture.visible);
        scalar(capture.squad.has_value());
        if (capture.squad) {
            const auto &squad = *capture.squad;
            const auto &name = squad.generated_name;
            scalar(squad.squad_id); string(squad.generated_source);
            string(name.first_name); string(name.nickname);
            scalar(name.language); scalar(name.nickname_mode);
            scalar(name.type); scalar(name.has_name);
            for (const auto &word : name.words) {
                string(word.id); string(word.english_form);
                scalar(word.part_of_speech); scalar(word.has_form);
            }
        }
        const auto &text = capture.overlay;
        scalar(text.x); scalar(text.y); scalar(text.full_x); scalar(text.visible_offset);
        string(text.full); string(text.visible);
        scalar(static_cast<unsigned char>(text.role));
        scalar(text.option_dynamic); scalar(text.option_name); scalar(text.option_idx);
        scalar(text.plant_growth);
        scalar(text.widget_id);
        string(text.overlay_name); string(text.view_id); string(text.caption);
        string(text.material_source); string(text.material_category); scalar(text.material_offset);
        scalar(text.quick_filter_id); scalar(text.quick_filter_label);
        scalar(text.quick_filter_clear); scalar(text.quick_filter_clear_visible);
    }
    scalar(count);
    count = 0;
    scalar(2);
    for (const auto &capture : access.control_panel()) {
        if (!current(capture)) continue;
        ++count;
        scalar(capture.top_layer);
        const auto &text = capture.text;
        scalar(text.x); scalar(text.y); scalar(text.full_x); scalar(text.visible_offset);
        string(text.full); string(text.visible); string(text.document); string(text.extension_prose_key);
        scalar(text.widget_id); scalar(text.parent_id);
        rect(text.bounds); rect(text.clip_bounds); rect(text.parent_bounds);
        scalar(text.first_line); scalar(static_cast<unsigned char>(text.role));
        scalar(text.native_width); scalar(text.total_lines);
        scalar(text.document_offset); scalar(text.line_offset);
    }
    scalar(count);
    return key;
}

static std::optional<std::string> lookup_native_dfhack_choice_text(
        const graphicst *gps, int x, int y, std::string_view visible,
        NativeDfhackChoiceTextOwner owner,
        NativeDfhackAutotrainingSquadText *squad_result = nullptr) {
    if (!native_dfhack_logo_grid_valid(gps) || x < 0 || y < 0 ||
            y >= gps->dimy || visible.empty() ||
            visible.size() > static_cast<size_t>(gps->dimx) ||
            x > gps->dimx - static_cast<int>(visible.size())) return std::nullopt;
    const auto page_revision = native_dfhack_layer_page_revision();
    const size_t tile = static_cast<size_t>(x) * gps->dimy + y;
    const auto origin = native_text_grid_origin(*gps, tile,
        native_ui_top_layer_at(*gps, tile));
    if (!origin.grid) return std::nullopt;
    NativeDfhackTextReadAccess access;
    if (page_revision != access.revision()) return std::nullopt;
    const bool scrollbar_clipped = owner == NativeDfhackChoiceTextOwner::Notification ||
        owner == NativeDfhackChoiceTextOwner::AnimalAssignment ||
        owner == NativeDfhackChoiceTextOwner::TradeGoods ||
        owner == NativeDfhackChoiceTextOwner::AutotrainingUnit ||
        owner == NativeDfhackChoiceTextOwner::AutotrainingSquad;
    for (auto it = access.sitemap().rbegin();
            it != access.sitemap().rend(); ++it) {
        const auto &text = *it;
        if (text.owner != owner || text.page_revision != page_revision ||
                text.dimx != gps->dimx || text.dimy != gps->dimy ||
                text.x != x || text.y != y || text.grid != origin.grid ||
                text.top_layer != origin.top_layer ||
                (!text.visible.starts_with(visible) && !visible.starts_with(text.visible)) ||
                !text.full.starts_with(text.visible) ||
                (scrollbar_clipped && !text.full.starts_with(visible))) continue;
        // Popup snapshots retain each cell's native origin. A still-matching
        // first cell cannot authorize text now overwritten on another layer.
        // List scrollbars are painted after their text and can cover
        // the native draw's last two cells. Its caller has already excluded
        // those columns; require the full current prefix it actually owns.
        const size_t current_length = scrollbar_clipped
            ? std::min(visible.size(), text.visible.size()) : text.visible.size();
        bool current = true;
        for (size_t at = 0; at < current_length; ++at) {
            if (x + static_cast<int>(at) >= gps->dimx) { current = false; break; }
            const size_t part = static_cast<size_t>(x + static_cast<int>(at)) * gps->dimy + y;
            const auto cell_origin = native_text_grid_origin(*gps, part,
                native_ui_top_layer_at(*gps, part));
            if (cell_origin.grid != text.grid || cell_origin.top_layer != text.top_layer ||
                    cell_origin.grid[part * 8] != static_cast<unsigned char>(text.visible[at])) {
                current = false;
                break;
            }
        }
        if (current) {
            if (squad_result) {
                if (!text.squad) continue;
                *squad_result = *text.squad;
            }
            return text.full;
        }
    }
    return std::nullopt;
}

static std::optional<std::string> lookup_native_dfhack_sitemap_text(
        const graphicst *gps, int x, int y, std::string_view visible) {
    return lookup_native_dfhack_choice_text(gps, x, y, visible,
        NativeDfhackChoiceTextOwner::Sitemap);
}

static std::optional<std::string> lookup_native_dfhack_notification_text(
        const graphicst *gps, int x, int y, std::string_view visible) {
    return lookup_native_dfhack_choice_text(gps, x, y, visible,
        NativeDfhackChoiceTextOwner::Notification);
}

static std::vector<NativeDfhackNotificationText> native_dfhack_notification_texts(
        const graphicst *gps) {
    std::vector<NativeDfhackNotificationText> result;
    if (!native_dfhack_logo_grid_valid(gps)) return result;
    const auto page_revision = native_dfhack_layer_page_revision();
    NativeDfhackTextReadAccess access;
    if (page_revision != access.revision()) return result;
    for (const auto &text : access.sitemap()) {
        if (text.owner != NativeDfhackChoiceTextOwner::Notification ||
                text.page_revision != page_revision || text.dimx != gps->dimx || text.dimy != gps->dimy ||
                text.x < 0 || text.y < 0 || text.y >= gps->dimy || text.visible.empty() ||
                text.visible.size() > static_cast<size_t>(gps->dimx) ||
                text.x > gps->dimx - static_cast<int>(text.visible.size()) ||
                !text.full.starts_with(text.visible)) continue;
        // The authored NotifyOverlay callbacks and notification ID already
        // prove the producer. Require every currently visible byte and its
        // native layer; a missing frame rail need not discard this token.
        bool current = true;
        for (size_t at = 0; at < text.visible.size(); ++at) {
            const size_t tile = static_cast<size_t>(text.x + static_cast<int>(at)) *
                gps->dimy + text.y;
            const auto origin = native_text_grid_origin(*gps, tile,
                native_ui_top_layer_at(*gps, tile));
            if (!origin.grid || origin.grid != text.grid ||
                    origin.top_layer != text.top_layer ||
                    origin.grid[tile * 8] != static_cast<unsigned char>(text.visible[at])) {
                current = false;
                break;
            }
        }
        if (current) result.push_back({text.x, text.y, text.full, text.visible});
    }
    return result;
}

static std::vector<NativeDfhackOverlayText> native_dfhack_overlay_texts(
        const graphicst *gps) {
    std::vector<NativeDfhackOverlayText> result;
    if (!native_dfhack_logo_grid_valid(gps)) return result;
    const auto page_revision = native_dfhack_layer_page_revision();
    NativeDfhackTextReadAccess access;
    if (page_revision != access.revision()) return result;
    for (const auto &text : access.sitemap()) {
        if (text.owner != NativeDfhackChoiceTextOwner::OverlayLabel ||
                text.page_revision != page_revision || text.dimx != gps->dimx || text.dimy != gps->dimy ||
                text.x < 0 || text.y < 0 || text.y >= gps->dimy || text.visible.empty() ||
                text.visible.size() > static_cast<size_t>(gps->dimx) ||
                text.x > gps->dimx - static_cast<int>(text.visible.size())) continue;
        bool current = true;
        size_t current_length = 0;
        std::vector<int> foregrounds;
        for (size_t at = 0; at < text.visible.size(); ++at) {
            const size_t tile = static_cast<size_t>(text.x + static_cast<int>(at)) *
                gps->dimy + text.y;
            const auto origin = native_text_grid_origin(*gps, tile,
                native_ui_top_layer_at(*gps, tile));
            if (!origin.grid || origin.grid != text.grid ||
                    origin.top_layer != text.top_layer ||
                    origin.grid[tile * 8] != static_cast<unsigned char>(text.visible[at])) {
                current = false;
                break;
            }
            const auto *cell = origin.grid + tile * 8;
            foregrounds.push_back((cell[1] << 16) | (cell[2] << 8) | cell[3]);
            ++current_length;
        }
        const bool scrollbar_clipped = (text.overlay.role == NativeDfhackOverlayTextRole::Material ||
            text.overlay.role == NativeDfhackOverlayTextRole::Item ||
            text.overlay.role == NativeDfhackOverlayTextRole::Plant) &&
            current_length > 0 && text.visible.size() - current_length <= 2;
        if (current || scrollbar_clipped) {
            auto overlay = text.overlay;
            overlay.visible_foregrounds = std::move(foregrounds);
            // A List scrollbar is painted after its text and can cover the
            // rightmost cells. The still-visible prefix retains the complete
            // choice name; it is not a shorter material vocabulary entry.
            if (!current) overlay.visible.resize(current_length);
            if (overlay.quick_filter_label) {
                // QuickFilter:get_label_text returns the same spelling for
                // an unused slot and a saved label named "empty". Its later
                // clear button is visible only when slot_used returned true.
                // Keep that authored draw as evidence even when a later
                // foreground control covers the clear button's cells.
                const bool used = std::any_of(access.sitemap().begin(),
                    access.sitemap().end(), [&](const auto &other) {
                        return other.owner == NativeDfhackChoiceTextOwner::OverlayLabel &&
                            other.page_revision == page_revision && other.grid &&
                            other.grid == (other.top_layer ? gps->screen_top : gps->screen) &&
                            other.dimx == gps->dimx && other.dimy == gps->dimy &&
                            other.overlay.quick_filter_clear &&
                            other.overlay.quick_filter_id == overlay.quick_filter_id;
                    });
                overlay.option_name = used || !overlay.quick_filter_clear_visible ||
                    overlay.full != "empty";
            }
            result.push_back(std::move(overlay));
        }
    }
    return result;
}

static std::vector<NativeDfhackControlPanelText> native_dfhack_control_panel_texts(
        const graphicst *gps) {
    std::vector<NativeDfhackControlPanelText> result;
    if (!native_dfhack_logo_grid_valid(gps)) return result;
    const auto page_revision = native_dfhack_layer_page_revision();
    NativeDfhackTextReadAccess access;
    if (page_revision != access.revision()) return result;
    const auto runs = [&](const NativeDfhackControlPanelCapture &capture) {
        std::vector<std::pair<size_t, size_t>> visible;
        const auto &text = capture.text;
        if (capture.page_revision != page_revision || capture.dimx != gps->dimx || capture.dimy != gps->dimy ||
                text.x < 0 || text.y < 0 || text.y >= gps->dimy || text.visible.empty() ||
                text.visible.size() > static_cast<size_t>(gps->dimx) ||
                text.x > gps->dimx - static_cast<int>(text.visible.size())) return visible;
        size_t begin = 0;
        bool open = false, nonblank = false;
        for (size_t at = 0; at <= text.visible.size(); ++at) {
            bool current = false;
            if (at < text.visible.size()) {
                const size_t tile = static_cast<size_t>(text.x + static_cast<int>(at)) *
                    gps->dimy + text.y;
                const auto origin = native_text_grid_origin(*gps, tile,
                    native_ui_top_layer_at(*gps, tile));
                current = origin.grid && origin.grid == capture.grid &&
                    origin.top_layer == capture.top_layer &&
                    origin.grid[tile * 8] == static_cast<unsigned char>(text.visible[at]);
            }
            if (current) {
                if (!open) { begin = at; open = true; nonblank = false; }
                nonblank = nonblank || text.visible[at] != ' ';
            } else if (open) {
                if (nonblank) visible.emplace_back(begin, at);
                open = false;
            }
        }
        return visible;
    };
    std::vector<std::vector<std::pair<size_t, size_t>>> current_runs;
    current_runs.reserve(access.control_panel().size());
    for (const auto &capture : access.control_panel())
        current_runs.push_back(runs(capture));
    for (size_t index = 0; index < access.control_panel().size(); ++index) {
        const auto &capture = access.control_panel()[index];
        const auto &text = capture.text;
        if (capture.page_revision != page_revision || capture.dimx != gps->dimx || capture.dimy != gps->dimy ||
                capture.grid != (capture.top_layer ? gps->screen_top : gps->screen))
            continue;
        if (current_runs[index].empty()) {
            if (text.role != NativeDfhackControlPanelTextRole::Wrapped) continue;
            bool alive = false;
            for (size_t other = 0; other < access.control_panel().size(); ++other) {
                const auto &candidate = access.control_panel()[other];
                if (!current_runs[other].empty() && candidate.text.widget_id == text.widget_id &&
                        candidate.text.parent_id == text.parent_id &&
                        candidate.text.document == text.document) { alive = true; break; }
            }
            if (!alive) continue;
            auto preserved = text;
            preserved.visible.clear();
            preserved.visible_foregrounds.clear();
            result.push_back(std::move(preserved));
            continue;
        }
        for (const auto &[begin, end] : current_runs[index]) {
            auto visible = text;
            visible.x += static_cast<int>(begin);
            visible.visible_offset += static_cast<int>(begin);
            visible.visible = text.visible.substr(begin, end - begin);
            visible.visible_foregrounds.clear();
            for (size_t at = begin; at < end; ++at) {
                const size_t tile = static_cast<size_t>(text.x + static_cast<int>(at)) *
                    gps->dimy + text.y;
                const auto *cell = capture.grid + tile * 8;
                visible.visible_foregrounds.push_back(
                    (cell[1] << 16) | (cell[2] << 8) | cell[3]);
            }
            result.push_back(std::move(visible));
        }
    }
    return result;
}

static std::optional<std::string> lookup_native_dfhack_animal_assignment_text(
        const graphicst *gps, int x, int y, std::string_view visible) {
    return lookup_native_dfhack_choice_text(gps, x, y, visible,
        NativeDfhackChoiceTextOwner::AnimalAssignment);
}

static std::optional<std::string> lookup_native_dfhack_trade_goods_text(
        const graphicst *gps, int x, int y, std::string_view visible) {
    return lookup_native_dfhack_choice_text(gps, x, y, visible,
        NativeDfhackChoiceTextOwner::TradeGoods);
}

static std::optional<std::string> lookup_native_dfhack_autotraining_unit_text(
        const graphicst *gps, int x, int y, std::string_view visible) {
    return lookup_native_dfhack_choice_text(gps, x, y, visible,
        NativeDfhackChoiceTextOwner::AutotrainingUnit);
}

static std::optional<NativeDfhackAutotrainingSquadText> lookup_native_dfhack_autotraining_squad_text(
        const graphicst *gps, int x, int y, std::string_view visible) {
    NativeDfhackAutotrainingSquadText result;
    if (!lookup_native_dfhack_choice_text(gps, x, y, visible,
            NativeDfhackChoiceTextOwner::AutotrainingSquad, &result)) return std::nullopt;
    return result;
}

struct alignas(8) NativeDfhackSitemapContext {
    uintptr_t helper = 0;
    uint32_t active = 0, reserved = 0;
};
static_assert(offsetof(NativeDfhackSitemapContext, helper) == 0);
static_assert(offsetof(NativeDfhackSitemapContext, active) == 8);
static NativeDfhackSitemapContext *g_native_dfhack_sitemap_context = nullptr;
static NativeEntryHook g_native_dfhack_sitemap_hook;
static std::mutex g_native_dfhack_sitemap_hook_mutex;

static bool native_dfhack_sitemap_raw_field(NativeDfhackLuaState *state,
        int table, const char *key) {
    const auto &api = g_native_dfhack_sitemap_lua_api;
    if (api.stack.type(state, table) != 5) return false;
    // Convert a relative index before pushing its raw key. rawget deliberately
    // avoids running a widget's __index function or any script callback.
    const int absolute = table > 0 ? table : api.stack.gettop(state) + table + 1;
    api.pushstring(state, key);
    api.rawget(state, absolute);
    return true;
}

struct NativeDfhackOverlayLuaStackRestore {
    NativeDfhackLuaState *state;
    int top;
    ~NativeDfhackOverlayLuaStackRestore() {
        g_native_dfhack_sitemap_lua_api.stack.settop(state, top);
    }
};

static std::optional<std::string> native_dfhack_overlay_lua_string(
        NativeDfhackLuaState *state, int index, size_t max_bytes = 65536) {
    const auto &stack = g_native_dfhack_sitemap_lua_api.stack;
    if (stack.type(state, index) != 4) return std::nullopt;
    size_t length = 0;
    const char *bytes = stack.tolstring(state, index, &length);
    if (!bytes || length > max_bytes) return std::nullopt;
    return std::string(bytes, length);
}

static bool native_dfhack_overlay_local(NativeDfhackLuaState *state,
        const NativeDfhackLuaDebug &frame, const char *wanted) {
    const auto &stack = g_native_dfhack_sitemap_lua_api.stack;
    const int top = stack.gettop(state);
    for (int slot = 1; slot <= 64; ++slot) {
        const char *name = stack.getlocal(state, &frame, slot);
        if (!name) break;
        if (!std::strcmp(name, wanted)) return true;
        stack.settop(state, top);
    }
    stack.settop(state, top);
    return false;
}

static bool native_dfhack_overlay_class_method(NativeDfhackLuaState *state,
        int object, const char *method, const std::string &source, int line) {
    const auto &api = g_native_dfhack_sitemap_lua_api;
    const auto &stack = api.stack;
    NativeDfhackOverlayLuaStackRestore restore{state, stack.gettop(state)};
    if (stack.type(state, object) != 5 || !api.getmetatable(state, object)) return false;
    int klass = stack.gettop(state);
    for (int depth = 0; depth < 16; ++depth) {
        if (!native_dfhack_sitemap_raw_field(state, klass, method)) return false;
        if (stack.type(state, -1) == 6) {
            NativeDfhackLuaDebug producer{};
            if (stack.getinfo(state, ">Su", &producer)) {
                const auto path = native_dfhack_lua_text(producer.source, 32768);
                if (path && native_dfhack_lua_source_key(*path) == source &&
                        (line <= 0 || producer.linedefined == line)) return true;
            }
        }
        stack.settop(state, klass);
        // class.lua puts the concrete class in an instance's metatable and
        // stores its parent in raw super. Never execute __index here.
        if (!native_dfhack_sitemap_raw_field(state, klass, "super") ||
                stack.type(state, -1) != 5) return false;
        klass = stack.gettop(state);
    }
    return false;
}

static bool native_dfhack_overlay_option_callback(NativeDfhackLuaState *state,
        int token, int widget) {
    const auto &api = g_native_dfhack_sitemap_lua_api;
    const auto &stack = api.stack;
    NativeDfhackOverlayLuaStackRestore restore{state, stack.gettop(state)};
    if (!native_dfhack_sitemap_raw_field(state, token, "text") ||
            stack.type(state, -1) != 6 || !stack.tocfunction(state, -1)) return false;
    const int curried = stack.gettop(state);
    // DFHack curry records the argument count, authored method, and bound
    // self. Require that self to be this very Label, not a text match.
    if (!api.getupvalue(state, curried, 1) || !stack.isinteger(state, -1)) return false;
    int valid = 0;
    if (stack.tointegerx(state, -1, &valid) != 2 || !valid) return false;
    stack.settop(state, curried);
    NativeDfhackLuaDebug producer{};
    if (!api.getupvalue(state, curried, 2) || stack.type(state, -1) != 6 ||
            !stack.getinfo(state, ">Su", &producer) || producer.linedefined != 119 ||
            producer.lastlinedefined != 121 || producer.nparams != 2 || producer.isvararg)
        return false;
    const auto source = native_dfhack_lua_text(producer.source, 32768);
    if (!source || native_dfhack_lua_source_key(*source) != api.cycle_source) return false;
    stack.settop(state, curried);
    if (!api.getupvalue(state, curried, 3) || stack.type(state, -1) != 5 ||
            !api.rawequal(state, -1, widget) || api.getupvalue(state, curried, 4)) return false;
    return true;
}

static std::optional<std::string> native_dfhack_overlay_dynamic_text(
        NativeDfhackLuaState *state, int token, std::string_view overlay_name,
        std::string_view painted_full) {
    const auto &api = g_native_dfhack_sitemap_lua_api;
    const auto &stack = api.stack;
    NativeDfhackOverlayLuaStackRestore restore{state, stack.gettop(state)};
    if (overlay_name != "exportlegends.export" ||
            !native_dfhack_sitemap_raw_field(state, token, "width") ||
            !stack.isinteger(state, -1)) return std::nullopt;
    int valid = 0;
    if (stack.tointegerx(state, -1, &valid) != 27 || !valid) return std::nullopt;
    stack.settop(state, restore.top);
    if (!native_dfhack_sitemap_raw_field(state, token, "text") ||
            stack.type(state, -1) != 6 || stack.tocfunction(state, -1)) return std::nullopt;
    NativeDfhackLuaDebug producer{};
    if (!stack.getinfo(state, ">Su", &producer) || producer.linedefined != 52 ||
            producer.lastlinedefined != 52 || producer.nparams != 0 ||
            producer.isvararg || producer.nups != 1) return std::nullopt;
    const auto source = native_dfhack_lua_text(producer.source, 32768);
    if (!source || native_dfhack_lua_source_key(*source) != api.asyncexport_source)
        return std::nullopt;
    stack.settop(state, restore.top);
    if (!native_dfhack_sitemap_raw_field(state, token, "text")) return std::nullopt;
    const int function = stack.gettop(state);
    const char *upvalue = api.getupvalue(state, function, 1);
    if (!upvalue || std::strcmp(upvalue, "_ENV") || stack.type(state, -1) != 5 ||
            !native_dfhack_sitemap_raw_field(state, -1, "progress_item")) return std::nullopt;
    // This exact authored closure is function() return progress_item end.
    // render_text overwrites its evaluated result at width=27. Read its
    // actual module environment instead of invoking it or guessing between
    // the two relationship descriptors that share that visible prefix.
    auto complete = native_dfhack_overlay_lua_string(state, -1);
    if (!complete || !complete->starts_with(painted_full) ||
            complete->find_first_of("\r\n") != std::string::npos) return std::nullopt;
    return complete;
}

static bool native_dfhack_overlay_builder_name(NativeDfhackLuaState *state,
        int token, int widget, std::string_view overlay_name) {
    const auto &api = g_native_dfhack_sitemap_lua_api;
    const auto &stack = api.stack;
    NativeDfhackOverlayLuaStackRestore restore{state, stack.gettop(state)};
    if (overlay_name != "prioritize.enroute" ||
            !native_dfhack_sitemap_raw_field(state, widget, "parent_view") ||
            stack.type(state, -1) != 5) return false;
    const int parent = stack.gettop(state);
    if (!native_dfhack_sitemap_raw_field(state, parent, "name") ||
            native_dfhack_overlay_lua_string(state, -1) !=
                std::optional<std::string>("prioritize.enroute")) return false;
    stack.settop(state, parent);
    if (!native_dfhack_sitemap_raw_field(state, parent, "builder") ||
            stack.type(state, -1) == 0) return false;
    stack.settop(state, parent);
    if (!native_dfhack_sitemap_raw_field(state, token, "text") ||
            stack.type(state, -1) != 6 || !stack.tocfunction(state, -1)) return false;
    const int curried = stack.gettop(state);
    if (!api.getupvalue(state, curried, 1) || !stack.isinteger(state, -1)) return false;
    int valid = 0;
    if (stack.tointegerx(state, -1, &valid) != 2 || !valid) return false;
    stack.settop(state, curried);
    NativeDfhackLuaDebug producer{};
    if (!api.getupvalue(state, curried, 2) || stack.type(state, -1) != 6 ||
            !stack.getinfo(state, ">Su", &producer) || producer.nparams != 1 ||
            producer.isvararg) return false;
    const auto source = native_dfhack_lua_text(producer.source, 32768);
    if (!source || native_dfhack_lua_source_key(*source) != api.prioritize_source) return false;
    stack.settop(state, curried);
    if (!api.getupvalue(state, curried, 2)) return false;
    const int method = stack.gettop(state);
    if (!api.getupvalue(state, curried, 3) || stack.type(state, -1) != 5 ||
            !api.rawequal(state, -1, parent) || api.getupvalue(state, curried, 4)) return false;
    stack.settop(state, method);
    if (!api.getmetatable(state, parent)) return false;
    int klass = stack.gettop(state);
    for (int depth = 0; depth < 16; ++depth) {
        if (!native_dfhack_sitemap_raw_field(state, klass, "get_builder_name")) return false;
        if (stack.type(state, -1) == 6 && api.rawequal(state, -1, method)) {
            // EnRouteOverlay:render holds the actual worker in builder only
            // while rendering its subviews. Its authored getter returns N/A
            // only without that worker. A readable name with that spelling
            // is therefore still a name, independent of caption matching.
            return true;
        }
        stack.settop(state, klass);
        if (!native_dfhack_sitemap_raw_field(state, klass, "super") ||
                stack.type(state, -1) != 5) return false;
        klass = stack.gettop(state);
    }
    return false;
}

static bool native_dfhack_overlay_bound_callback(NativeDfhackLuaState *state,
        int object, const char *field, int parent, const std::string &source,
        int first_line, int last_line) {
    const auto &api = g_native_dfhack_sitemap_lua_api;
    const auto &stack = api.stack;
    NativeDfhackOverlayLuaStackRestore restore{state, stack.gettop(state)};
    if (!native_dfhack_sitemap_raw_field(state, object, field) ||
            stack.type(state, -1) != 6 || !stack.tocfunction(state, -1)) return false;
    const int curried = stack.gettop(state);
    if (!api.getupvalue(state, curried, 1) || !stack.isinteger(state, -1)) return false;
    int valid = 0;
    if (stack.tointegerx(state, -1, &valid) != 2 || !valid) return false;
    stack.settop(state, curried);
    NativeDfhackLuaDebug producer{};
    if (!api.getupvalue(state, curried, 2) || stack.type(state, -1) != 6 ||
            !stack.getinfo(state, ">Su", &producer) || producer.nparams != 1 ||
            producer.isvararg || producer.linedefined != first_line ||
            producer.lastlinedefined != last_line) return false;
    const auto method_source = native_dfhack_lua_text(producer.source, 32768);
    if (!method_source || native_dfhack_lua_source_key(*method_source) != source) return false;
    stack.settop(state, curried);
    return api.getupvalue(state, curried, 3) && stack.type(state, -1) == 5 &&
        api.rawequal(state, -1, parent) && !api.getupvalue(state, curried, 4);
}

// MechanismOverlay's two HotkeyLabel callbacks return a complete readable
// item description, or one of its three heat-safety unavailability messages.
// Prove the authored callback before treating the text as an item; its key,
// safety caption and selected option are independent Label tokens.
static bool native_dfhack_overlay_mechanism_item(NativeDfhackLuaState *state,
        int token, std::string_view overlay_name) {
    const auto &api = g_native_dfhack_sitemap_lua_api;
    const auto &stack = api.stack;
    NativeDfhackOverlayLuaStackRestore restore{state, stack.gettop(state)};
    if (overlay_name != "buildingplan.mechanisms" ||
            !native_dfhack_sitemap_raw_field(state, token, "text") ||
            stack.type(state, -1) != 6 || stack.tocfunction(state, -1)) return false;
    NativeDfhackLuaDebug producer{};
    if (!stack.getinfo(state, ">Su", &producer) || producer.nparams != 0 || producer.isvararg ||
            !((producer.linedefined == 73 && producer.lastlinedefined == 77) ||
              (producer.linedefined == 85 && producer.lastlinedefined == 89))) return false;
    const auto source = native_dfhack_lua_text(producer.source, 32768);
    return source && native_dfhack_lua_source_key(*source) == api.mechanisms_source;
}

static void native_dfhack_overlay_quick_filter(NativeDfhackLuaState *state,
        int token, int widget, NativeDfhackOverlayText &result) {
    const auto &api = g_native_dfhack_sitemap_lua_api;
    const auto &stack = api.stack;
    NativeDfhackOverlayLuaStackRestore restore{state, stack.gettop(state)};
    if (result.overlay_name != "buildingplan.planner" ||
            !native_dfhack_sitemap_raw_field(state, widget, "parent_view") ||
            stack.type(state, -1) != 5) return;
    const int parent = stack.gettop(state);
    if (!native_dfhack_overlay_class_method(state, parent, "init", api.planner_source, 530) ||
            !native_dfhack_overlay_class_method(state, parent, "get_label_text", api.planner_source, 605))
        return;
    if (native_dfhack_overlay_bound_callback(state, widget, "visible", parent,
            api.planner_source, 594, 597) && result.full == "[x]") {
        result.quick_filter_id = reinterpret_cast<uintptr_t>(api.topointer(state, parent));
        result.quick_filter_clear = true;
        result.role = NativeDfhackOverlayTextRole::Key;
        return;
    }
    if (!native_dfhack_overlay_bound_callback(state, token, "text", parent,
            api.planner_source, 605, 613)) return;
    result.quick_filter_id = reinterpret_cast<uintptr_t>(api.topointer(state, parent));
    result.quick_filter_label = true;
    result.option_name = true;
    // A clipped clear control cannot prove an unused slot by its absence.
    // Read its allocated native viewport rather than invoking slot_used or
    // the persistence getter again while DFHack is painting.
    stack.settop(state, parent);
    if (!native_dfhack_sitemap_raw_field(state, parent, "subviews") ||
            stack.type(state, -1) != 5) return;
    api.rawgeti(state, -1, 5);
    if (stack.type(state, -1) != 5) return;
    const int clear = stack.gettop(state);
    if (!native_dfhack_overlay_bound_callback(state, clear, "visible", parent,
            api.planner_source, 594, 597) ||
            !native_dfhack_sitemap_raw_field(state, clear, "frame_body") ||
            stack.type(state, -1) != 5) return;
    const int rect = stack.gettop(state);
    const auto integer = [&](const char *field) -> std::optional<int64_t> {
        stack.settop(state, rect);
        if (!native_dfhack_sitemap_raw_field(state, rect, field) ||
                !stack.isinteger(state, -1)) return std::nullopt;
        int valid = 0;
        const auto value = stack.tointegerx(state, -1, &valid);
        return valid && value >= -100000 && value <= 100000
            ? std::optional<int64_t>(value) : std::nullopt;
    };
    const auto x1 = integer("x1"), x2 = integer("x2");
    const auto y1 = integer("y1"), y2 = integer("y2");
    const auto clip_x1 = integer("clip_x1"), clip_x2 = integer("clip_x2");
    const auto clip_y1 = integer("clip_y1"), clip_y2 = integer("clip_y2");
    result.quick_filter_clear_visible = x1 && x2 && y1 && y2 &&
        clip_x1 && clip_x2 && clip_y1 && clip_y2 && *x2 - *x1 + 1 == 3 &&
        *y1 == *y2 && *x1 >= *clip_x1 && *x2 <= *clip_x2 &&
        *y1 >= *clip_y1 && *y2 <= *clip_y2;
}

#include "native_dfhack_spectate_capture.inc"

static bool native_dfhack_codex_heading(NativeDfhackLuaState *state,
        int token, int widget, NativeDfhackOverlayText &result) {
    const auto &api = g_native_dfhack_sitemap_lua_api;
    const auto &stack = api.stack;
    NativeDfhackOverlayLuaStackRestore restore{state, stack.gettop(state)};
    if (result.overlay_name != "gui/codex-legends.legendsreader" ||
            !native_dfhack_sitemap_raw_field(state, token, "text") ||
            stack.type(state, -1) != 6 || stack.tocfunction(state, -1)) return false;
    const int callback = stack.gettop(state);
    // The heading closure owns this overlay's self. Recover its complete
    // field before clipping, without invoking Lua or classifying its spelling.
    const char *upvalue = api.getupvalue(state, callback, 1);
    if (!upvalue || std::strcmp(upvalue, "self") || stack.type(state, -1) != 5)
        return false;
    const int owner = stack.gettop(state);
    if (!native_dfhack_sitemap_raw_field(state, widget, "parent_view") ||
            stack.type(state, -1) != 5 || !api.rawequal(state, -1, owner)) return false;
    stack.settop(state, owner);
    if (!native_dfhack_sitemap_raw_field(state, owner, "heading")) return false;
    const auto heading = native_dfhack_overlay_lua_string(state, -1);
    if (!heading || heading->empty() || !heading->starts_with(result.full)) return false;
    stack.settop(state, owner);
    if (!native_dfhack_sitemap_raw_field(state, owner, "found") ||
            stack.type(state, -1) != 5) return false;
    const int found = stack.gettop(state);
    if (!native_dfhack_sitemap_raw_field(state, found, "wc")) return false;
    const bool written_work = stack.type(state, -1) == 7;
    if (!written_work) {
        if (stack.type(state, -1) != 0) return false;
        stack.settop(state, found);
        if (!native_dfhack_sitemap_raw_field(state, found, "artifact") ||
                stack.type(state, -1) != 7) return false;
    }
    stack.settop(state, callback);
    NativeDfhackLuaDebug producer{};
    if (!stack.getinfo(state, ">Su", &producer) || producer.nparams != 0 ||
            producer.isvararg || producer.nups != 1) return false;
    const auto source = native_dfhack_lua_text(producer.source, 32768);
    if (!source || !native_dfhack_lua_source_key(*source).ends_with("/gui/codex-legends.lua"))
        return false;
    result.full = *heading;
    result.role = written_work ? NativeDfhackOverlayTextRole::WrittenWorkHeading
                               : NativeDfhackOverlayTextRole::ArtifactName;
    return true;
}

static std::optional<NativeDfhackOverlayText> native_dfhack_overlay_label_text(
        NativeDfhackLuaState *state, std::string_view painted_full) {
    const auto &api = g_native_dfhack_sitemap_lua_api;
    const auto &stack = api.stack;
    NativeDfhackOverlayLuaStackRestore restore{state, stack.gettop(state)};
    NativeDfhackLuaDebug render{}, body{};
    if (!stack.getstack(state, 2, &render) || !stack.getinfo(state, "Slu", &render) ||
            render.linedefined != 101 || render.lastlinedefined != 217 || render.nparams != 9 ||
            render.isvararg || !stack.getstack(state, 3, &body) ||
            !stack.getinfo(state, "Slu", &body) || body.linedefined != 346 ||
            body.lastlinedefined != 350 || body.nparams != 2 || body.isvararg) return std::nullopt;
    const auto render_source = native_dfhack_lua_text(render.source, 32768);
    const auto body_source = native_dfhack_lua_text(body.source, 32768);
    if (!render_source || !body_source ||
            native_dfhack_lua_source_key(*render_source) != api.label_source ||
            native_dfhack_lua_source_key(*body_source) != api.label_source) return std::nullopt;
    if (!native_dfhack_overlay_local(state, render, "obj") || stack.type(state, -1) != 5)
        return std::nullopt;
    const int widget = stack.gettop(state);
    if (!native_dfhack_overlay_local(state, body, "self") || stack.type(state, -1) != 5 ||
            !api.rawequal(state, -1, widget)) return std::nullopt;
    stack.settop(state, widget);
    // List invokes render_text on synthetic rows. Requiring the installed
    // Label:onRenderBody caller, its same self, and Label class ancestry
    // excludes those rows even when they happen to contain a catalog label.
    if (!native_dfhack_overlay_class_method(state, widget, "onRenderBody", api.label_source, 346) ||
            !native_dfhack_overlay_local(state, render, "token") || stack.type(state, -1) != 5)
        return std::nullopt;
    const int token = stack.gettop(state);
    NativeDfhackOverlayText result;
    result.full = painted_full;
    result.widget_id = reinterpret_cast<uintptr_t>(api.topointer(state, widget));
    const auto string_field = [&](int object, const char *field) -> std::string {
        const int top = stack.gettop(state);
        std::optional<std::string> value;
        if (native_dfhack_sitemap_raw_field(state, object, field))
            value = native_dfhack_overlay_lua_string(state, -1);
        stack.settop(state, top);
        return value ? std::move(*value) : std::string{};
    };
    result.view_id = string_field(widget, "view_id");
    result.caption = string_field(widget, "label");
    int parent = widget;
    for (int depth = 0; depth < 16; ++depth) {
        if (native_dfhack_overlay_class_method(state, parent, "init", api.overlay_source, 616)) {
            result.overlay_name = string_field(parent, "name");
            break;
        }
        if (!native_dfhack_sitemap_raw_field(state, parent, "parent_view") ||
                stack.type(state, -1) != 5) break;
        parent = stack.gettop(state);
    }
    stack.settop(state, token);
    bool text_draw = render.currentline == 190 || render.currentline == 197 ||
        render.currentline == 203;
    if (text_draw) {
        text_draw = native_dfhack_overlay_local(state, render, "text") &&
            native_dfhack_overlay_lua_string(state, -1) ==
                std::optional<std::string>(std::string(painted_full));
        stack.settop(state, token);
        // On the chained key/sep/text line only the key receives an explicit
        // Painter pen. A caption spelling identical to its shortcut is still
        // a caption only on the final string call.
        if (text_draw) {
            NativeDfhackLuaDebug painter{};
            if (!stack.getstack(state, 1, &painter) ||
                    !native_dfhack_overlay_local(state, painter, "pen") ||
                    stack.type(state, -1) != 0) text_draw = false;
            stack.settop(state, token);
        }
    }
    if (!text_draw) {
        result.role = NativeDfhackOverlayTextRole::Key;
        return result;
    }
    if (native_dfhack_sitemap_raw_field(state, token, "text")) {
        result.option_dynamic = stack.type(state, -1) == 6;
        if (auto complete = native_dfhack_overlay_lua_string(state, -1);
                complete && complete->starts_with(painted_full)) result.full = std::move(*complete);
    }
    stack.settop(state, token);
    if (result.overlay_name == "spectate.tooltip") {
        native_dfhack_spectate_label_text(state, widget, render, token, result);
        return result;
    }
    if (result.option_dynamic) {
        if (native_dfhack_codex_heading(state, token, widget, result)) return result;
        if (auto complete = native_dfhack_overlay_dynamic_text(state, token,
                result.overlay_name, painted_full)) result.full = std::move(*complete);
        result.option_name = native_dfhack_overlay_builder_name(state, token, widget,
            result.overlay_name);
        if (native_dfhack_overlay_mechanism_item(state, token, result.overlay_name)) {
            result.role = NativeDfhackOverlayTextRole::Item;
            return result;
        }
    }
    native_dfhack_overlay_quick_filter(state, token, widget, result);
    if (result.quick_filter_label || result.quick_filter_clear) return result;
    if (!native_dfhack_overlay_option_callback(state, token, widget)) return result;
    result.role = NativeDfhackOverlayTextRole::Option;
    if (!native_dfhack_sitemap_raw_field(state, widget, "option_idx") ||
            !stack.isinteger(state, -1)) return std::nullopt;
    int valid = 0;
    const int64_t option_idx = stack.tointegerx(state, -1, &valid);
    if (!valid || option_idx < 1 || option_idx > 65536) return std::nullopt;
    result.option_idx = static_cast<int>(option_idx);
    stack.settop(state, token);
    if (!native_dfhack_sitemap_raw_field(state, widget, "options") ||
            stack.type(state, -1) != 5) return std::nullopt;
    api.rawgeti(state, -1, option_idx);
    const int option = stack.gettop(state);
    const bool option_table = stack.type(state, option) == 5;
    if (option_table && !native_dfhack_sitemap_raw_field(state, option, "label")) return std::nullopt;
    result.option_dynamic = stack.type(state, -1) == 6;
    if (auto complete = native_dfhack_overlay_lua_string(state, -1);
            complete && complete->starts_with(painted_full)) result.full = std::move(*complete);
    stack.settop(state, option);
    if (option_table && native_dfhack_sitemap_raw_field(state, option, "value")) {
        const bool sort_owner = result.overlay_name == "sort.info" ||
            result.overlay_name == "sort.workanimals_filter";
        const bool named_filter = (result.view_id == "squad" &&
                (result.caption == "Squad:" || result.caption == " Squad:")) ||
            (result.view_id == "burrow" && result.caption == "Burrow:");
        // sort/info.lua:get_squad_options/get_burrow_options compute strings
        // for numeric entity IDs. all/none sentinels use string values.
        // A user alias literally named Any must therefore remain untouched.
        result.option_name = sort_owner && named_filter && stack.isinteger(state, -1);
        if (result.overlay_name == "preserve-rooms.reserved" && result.view_id == "role" &&
                stack.type(state, -1) == 5) {
            api.rawgeti(state, -1, 1);
            const auto code = native_dfhack_overlay_lua_string(state, -1);
            result.option_name = code && !code->empty();
        }
        result.option_dynamic = result.option_dynamic || result.option_name;
    }
    return result;
}

static std::optional<NativeDfhackOverlayText> native_dfhack_typed_list_text(
        NativeDfhackLuaState *state, std::string_view painted_full) {
    const auto &api = g_native_dfhack_sitemap_lua_api;
    const auto &stack = api.stack;
    NativeDfhackOverlayLuaStackRestore restore{state, stack.gettop(state)};
    NativeDfhackLuaDebug render{}, body{};
    if (!stack.getstack(state, 2, &render) || !stack.getinfo(state, "Slu", &render))
        return std::nullopt;
    const auto render_source = native_dfhack_lua_text(render.source, 32768);
    if (!render_source) return std::nullopt;
    const bool key_draw = native_dfhack_lua_source_key(*render_source) == api.list_source &&
        render.linedefined == 236 && render.lastlinedefined == 293 &&
        render.currentline == 284 && render.nparams == 2 && !render.isvararg;
    if (key_draw) body = render;
    else {
        if (native_dfhack_lua_source_key(*render_source) != api.label_source ||
                render.linedefined != 101 || render.lastlinedefined != 217 ||
                render.nparams != 9 || render.isvararg ||
                !stack.getstack(state, 3, &body) || !stack.getinfo(state, "Slu", &body))
            return std::nullopt;
        const auto body_source = native_dfhack_lua_text(body.source, 32768);
        if (!body_source || native_dfhack_lua_source_key(*body_source) != api.list_source ||
                body.linedefined != 236 || body.lastlinedefined != 293 ||
                body.currentline != 277 || body.nparams != 2 || body.isvararg)
            return std::nullopt;
    }
    if (!native_dfhack_overlay_local(state, body, "self") || stack.type(state, -1) != 5)
        return std::nullopt;
    const int widget = stack.gettop(state);
    if (!native_dfhack_overlay_class_method(state, widget, "onRenderBody", api.list_source, 236) ||
            !native_dfhack_overlay_local(state, body, "obj") || stack.type(state, -1) != 5)
        return std::nullopt;
    const int row = stack.gettop(state);
    if (!key_draw) {
        if (!native_dfhack_overlay_local(state, render, "obj") || stack.type(state, -1) != 5 ||
                !api.rawequal(state, -1, row)) return std::nullopt;
        stack.settop(state, row);
        if ((render.currentline != 190 && render.currentline != 197 && render.currentline != 203) ||
                !native_dfhack_overlay_local(state, render, "text") ||
                native_dfhack_overlay_lua_string(state, -1) !=
                    std::optional<std::string>(std::string(painted_full))) return std::nullopt;
    }
    stack.settop(state, row);
    const auto string_field = [&](int object, const char *field) -> std::string {
        const int top = stack.gettop(state);
        std::optional<std::string> value;
        if (native_dfhack_sitemap_raw_field(state, object, field))
            value = native_dfhack_overlay_lua_string(state, -1);
        stack.settop(state, top);
        return value ? std::move(*value) : std::string{};
    };
    bool material_list = false, category_list = false, material_page = false, filter_screen = false;
    bool item_list = false, item_page = false, item_screen = false;
    const bool autofarm_list = string_field(widget, "view_id") == "list";
    bool autofarm_window = false;
    int parent = widget;
    for (int depth = 0; depth < 16; ++depth) {
        const auto view_id = string_field(parent, "view_id");
        if (view_id == "flist") {
            const int top = stack.gettop(state);
            item_list = native_dfhack_sitemap_raw_field(state, parent, "list") &&
                stack.type(state, -1) == 5 && api.rawequal(state, -1, widget);
            stack.settop(state, top);
        }
        item_page = item_page ||
            native_dfhack_overlay_class_method(state, parent, "init", api.itemselection_source, 83);
        autofarm_window = autofarm_window ||
            (native_dfhack_overlay_class_method(state, parent, "init", api.autofarm_source, 60) &&
             native_dfhack_overlay_class_method(state, parent, "refresh", api.autofarm_source, 244));
        item_screen = item_screen ||
            (string_field(parent, "focus_path") ==
                "dwarfmode/Building/Placement/dfhack/lua/buildingplan/itemselection" &&
             native_dfhack_overlay_class_method(state, parent, "init", api.itemselection_source, 431));
        if (parent == widget && view_id == "materials_categories") category_list = true;
        if (view_id == "materials_mats") {
            const int top = stack.gettop(state);
            material_list = native_dfhack_sitemap_raw_field(state, parent, "list") &&
                stack.type(state, -1) == 5 && api.rawequal(state, -1, widget);
            stack.settop(state, top);
        }
        material_page = material_page ||
            (native_dfhack_overlay_class_method(state, parent, "init", api.filterselection_source, 56) &&
             native_dfhack_overlay_class_method(state, parent, "refresh", api.filterselection_source, 291));
        filter_screen = filter_screen ||
            (string_field(parent, "focus_path") ==
                "dwarfmode/Building/Placement/dfhack/lua/buildingplan/filterselection" &&
             native_dfhack_overlay_class_method(state, parent, "init", api.filterselection_source, 598));
        if (!native_dfhack_sitemap_raw_field(state, parent, "parent_view") ||
                stack.type(state, -1) != 5) break;
        parent = stack.gettop(state);
    }
    if (autofarm_list && autofarm_window) {
        if (key_draw) return std::nullopt;
        stack.settop(state, row);
        if (!native_dfhack_sitemap_raw_field(state, row, "data") || stack.type(state, -1) != 5)
            return std::nullopt;
        const int data = stack.gettop(state);
        const std::string name = string_field(data, "name");
        const bool growth = !string_field(data, "growth").empty();
        if (name.empty() || !native_dfhack_sitemap_raw_field(state, data, "idx") ||
                !stack.isinteger(state, -1)) return std::nullopt;
        int valid = 0;
        if (stack.tointegerx(state, -1, &valid) < 0 || !valid) return std::nullopt;
        stack.settop(state, row);
        if (!native_dfhack_overlay_local(state, render, "token") || stack.type(state, -1) != 5)
            return std::nullopt;
        const std::string full = growth ? "  " + name : name;
        // make_row_text owns three independent columns. Only its first
        // token contains the plant/growth name; width may already have
        // shortened render_text's local text before Painter sees it.
        if (string_field(stack.gettop(state), "text") != full ||
                !full.starts_with(painted_full)) return std::nullopt;
        NativeDfhackOverlayText result;
        result.full = full;
        result.widget_id = reinterpret_cast<uintptr_t>(api.topointer(state, widget));
        result.overlay_name = "autofarm.settings";
        result.view_id = "list";
        result.role = NativeDfhackOverlayTextRole::Plant;
        result.plant_growth = growth;
        return result;
    }
    if (item_list && item_page && item_screen) {
        NativeDfhackOverlayText result;
        result.full.assign(painted_full);
        result.widget_id = reinterpret_cast<uintptr_t>(api.topointer(state, widget));
        result.overlay_name = "buildingplan.itemselection";
        result.view_id = "flist";
        result.role = NativeDfhackOverlayTextRole::Key;
        if (key_draw) return result;
        stack.settop(state, row);
        if (!native_dfhack_sitemap_raw_field(state, row, "data") || stack.type(state, -1) != 5)
            return std::nullopt;
        const std::string description = string_field(stack.gettop(state), "desc");
        stack.settop(state, row);
        if (!native_dfhack_overlay_local(state, render, "token") || stack.type(state, -1) != 5)
            return std::nullopt;
        // get_choices preserves numbers/value in separate fixed-width
        // tokens. Only its final static data.desc token is item prose.
        if (!description.empty() && string_field(stack.gettop(state), "text") == description &&
                description.starts_with(painted_full)) {
            result.full = description;
            result.role = NativeDfhackOverlayTextRole::Item;
        }
        return result;
    }
    if (!material_page || !filter_screen || (material_list == category_list)) return std::nullopt;
    NativeDfhackOverlayText result;
    result.full.assign(painted_full);
    result.widget_id = reinterpret_cast<uintptr_t>(api.topointer(state, widget));
    result.overlay_name = "buildingplan.filterselection";
    result.view_id = material_list ? "materials_mats" : "materials_categories";
    result.material_category = string_field(row, "cat");
    if (result.material_category.empty()) return std::nullopt;
    if (key_draw) {
        // List paints the parentheses and current key as separate Painter
        // calls. All three are keys, including an S/E that is also a compass
        // direction elsewhere in the ordinary translation dictionary.
        if (string_field(row, "key").empty()) return std::nullopt;
        stack.settop(state, row);
        if (!native_dfhack_overlay_local(state, body, "keystr")) return std::nullopt;
        const auto key = native_dfhack_overlay_lua_string(state, -1);
        if (!key || (painted_full != "(" && painted_full != ")" && painted_full != *key))
            return std::nullopt;
        result.role = NativeDfhackOverlayTextRole::Key;
        return result;
    }
    if (string_field(row, "text") != painted_full) return std::nullopt;
    if (category_list) {
        result.role = NativeDfhackOverlayTextRole::Category;
        return result;
    }
    result.material_source = string_field(row, "name");
    if (result.material_source.empty() || !painted_full.ends_with(result.material_source))
        return std::nullopt;
    const size_t offset = painted_full.size() - result.material_source.size();
    if (offset < 4 || painted_full.substr(offset - 3, 3) != " - ") return std::nullopt;
    const auto count = painted_full.substr(0, offset - 3);
    size_t digit = count.find_first_not_of(' ');
    if (digit == std::string_view::npos) return std::nullopt;
    if (count[digit] == '-') ++digit;
    if (digit == count.size() || !std::all_of(count.begin() + digit, count.end(),
            [](unsigned char ch) { return ch >= '0' && ch <= '9'; })) return std::nullopt;
    result.material_offset = static_cast<int>(offset);
    result.role = NativeDfhackOverlayTextRole::Material;
    return result;
}

static std::optional<NativeDfhackChoiceTextOwner> native_dfhack_filtered_list_owner(NativeDfhackLuaState *state,
        const NativeDfhackLuaDebug &frame, std::string_view painted_full) {
    const auto &api = g_native_dfhack_sitemap_lua_api;
    const auto &stack = api.stack;
    const int top = stack.gettop(state);
    struct RestoreStack {
        NativeDfhackLuaState *state;
        int top;
        void (*settop)(NativeDfhackLuaState *, int);
        ~RestoreStack() { settop(state, top); }
    } restore{state, top, stack.settop};
    const char *name = stack.getlocal(state, &frame, 1);
    if (!name || std::strcmp(name, "self") || stack.type(state, -1) != 5) return std::nullopt;
    const int list = stack.gettop(state);
    if (!native_dfhack_sitemap_raw_field(state, list, "on_submit") ||
            stack.type(state, -1) != 6) return std::nullopt;
    NativeDfhackLuaDebug wrapper{};
    if (!stack.getinfo(state, ">Su", &wrapper) || wrapper.isvararg || wrapper.nparams != 0)
        return std::nullopt;
    const auto wrapper_source = native_dfhack_lua_text(wrapper.source, 32768);
    if (!wrapper_source || native_dfhack_lua_source_key(*wrapper_source) != api.filtered_source)
        return std::nullopt;
    // FilteredList stores the original submit callback in the wrapper's info
    // upvalue, not in the FilteredList instance. Read that real closure field
    // without invoking the callback or modifying either table.
    if (!native_dfhack_sitemap_raw_field(state, list, "on_submit")) return std::nullopt;
    const int function = stack.gettop(state);
    int info = 0;
    for (int upvalue = 1; upvalue <= 8; ++upvalue) {
        const char *upvalue_name = api.getupvalue(state, function, upvalue);
        if (!upvalue_name) break;
        if (!std::strcmp(upvalue_name, "info") && stack.type(state, -1) == 5) {
            info = stack.gettop(state);
            break;
        }
        stack.settop(state, function);
    }
    if (!info || !native_dfhack_sitemap_raw_field(state, info, "on_submit") ||
            stack.type(state, -1) != 6) return std::nullopt;
    NativeDfhackChoiceTextOwner owner = NativeDfhackChoiceTextOwner::Sitemap;
    std::string_view window_title = "Sitemap", focus_path = "sitemap";
    int bound_window = 0;
    NativeDfhackLuaDebug producer{};
    if (!stack.tocfunction(state, -1)) {
        if (!stack.getinfo(state, ">Su", &producer) || producer.isvararg || producer.nparams != 2)
            return std::nullopt;
        const auto source = native_dfhack_lua_text(producer.source, 32768);
        if (!source || native_dfhack_lua_source_key(*source) != api.sitemap_source)
            return std::nullopt;
    } else {
        // These submit callbacks are dfhack.curry(toggle_item, self), not a
        // direct Lua closure. Its native curry captures count, function, self
        // as the first three upvalues. Inspect the original authored method
        // and retain the bound window to compare with the real parent chain.
        const int curried = stack.gettop(state);
        if (!api.getupvalue(state, curried, 1) || !stack.isinteger(state, -1))
            return std::nullopt;
        int valid = 0;
        if (stack.tointegerx(state, -1, &valid) != 2 || !valid) return std::nullopt;
        stack.settop(state, curried);
        if (!api.getupvalue(state, curried, 2) || stack.type(state, -1) != 6 ||
                !stack.getinfo(state, ">Su", &producer) || producer.isvararg ||
                producer.nparams != 3) return std::nullopt;
        const auto source = native_dfhack_lua_text(producer.source, 32768);
        if (!source) return std::nullopt;
        const auto key = native_dfhack_lua_source_key(*source);
        if (key == api.zone_source && producer.linedefined == 835 &&
                producer.lastlinedefined == 837) {
            owner = NativeDfhackChoiceTextOwner::AnimalAssignment;
            window_title = "Animal and prisoner assignment";
            focus_path = "zone/assign";
        } else if (key == api.movegoods_source && producer.linedefined == 727 &&
                producer.lastlinedefined == 729) {
            owner = NativeDfhackChoiceTextOwner::TradeGoods;
            window_title = "Move goods to/from depot";
            focus_path = "caravan/movegoods";
        } else if (key == api.autotraining_source && producer.linedefined == 83 &&
                producer.lastlinedefined == 87) {
            owner = NativeDfhackChoiceTextOwner::AutotrainingUnit;
            window_title = "Training Setup";
            focus_path = "autotrain";
        } else return std::nullopt;
        stack.settop(state, curried);
        if (!api.getupvalue(state, curried, 3) || stack.type(state, -1) != 5)
            return std::nullopt;
        bound_window = stack.gettop(state);
        if (api.getupvalue(state, curried, 4)) return std::nullopt;
    }
    if (owner == NativeDfhackChoiceTextOwner::TradeGoods) {
        // make_choice_text draws four independent tokens. Only the actual
        // row's data.desc is an item name; distance, value and quantity never
        // acquire an item-caption source merely by sharing its List.
        if (!native_dfhack_overlay_local(state, frame, "obj") ||
                stack.type(state, -1) != 5 ||
                !native_dfhack_sitemap_raw_field(state, -1, "data") ||
                stack.type(state, -1) != 5 ||
                !native_dfhack_sitemap_raw_field(state, -1, "desc") ||
                native_dfhack_overlay_lua_string(state, -1) !=
                    std::optional<std::string>(std::string(painted_full))) return std::nullopt;
    }
    // The inner List's on_submit is a generic FilteredList wrapper. Require
    // its producer plus owning window/root; a copied callback cannot claim
    // text in an unrelated List. Animal callbacks must bind that same window.
    stack.settop(state, bound_window ? bound_window : list);
    if (!native_dfhack_sitemap_raw_field(state, list, "parent_view") ||
            stack.type(state, -1) != 5) return std::nullopt;
    const int filtered = stack.gettop(state);
    if (owner == NativeDfhackChoiceTextOwner::AutotrainingUnit) {
        // Only getUnits() supplies this list. Squad aliases and the separate
        // noble-position list never acquire a readable-unit text source.
        if (!native_dfhack_sitemap_raw_field(state, filtered, "view_id") ||
                native_dfhack_overlay_lua_string(state, -1) !=
                    std::optional<std::string>("unit_list") ||
                !native_dfhack_overlay_local(state, frame, "obj") ||
                stack.type(state, -1) != 5 ||
                !native_dfhack_sitemap_raw_field(state, -1, "text") ||
                native_dfhack_overlay_lua_string(state, -1) !=
                    std::optional<std::string>(std::string(painted_full))) return std::nullopt;
        stack.settop(state, filtered);
    }
    bool window = false, screen = false;
    int parent = filtered;
    for (int depth = 0; depth < 8; ++depth) {
        if (!native_dfhack_sitemap_raw_field(state, parent, "frame_title")) return std::nullopt;
        if (stack.type(state, -1) == 4) {
            size_t length = 0;
            const char *value = stack.tolstring(state, -1, &length);
            window = window || (value && std::string_view(value, length) == window_title &&
                (!bound_window || api.rawequal(state, parent, bound_window)));
        }
        stack.settop(state, parent);
        if (!native_dfhack_sitemap_raw_field(state, parent, "focus_path")) return std::nullopt;
        if (stack.type(state, -1) == 4) {
            size_t length = 0;
            const char *value = stack.tolstring(state, -1, &length);
            screen = value && std::string_view(value, length) == focus_path;
        }
        stack.settop(state, parent);
        if (window && screen) return owner;
        if (!native_dfhack_sitemap_raw_field(state, parent, "parent_view") ||
                stack.type(state, -1) != 5) break;
        parent = stack.gettop(state);
    }
    return std::nullopt;
}

#include "native_dfhack_autotraining_squad_capture.inc"

static bool native_dfhack_notification_list_owner(NativeDfhackLuaState *state,
        const NativeDfhackLuaDebug &frame, std::string &notification_name) {
    const auto &api = g_native_dfhack_sitemap_lua_api;
    const auto &stack = api.stack;
    const int top = stack.gettop(state);
    struct RestoreStack {
        NativeDfhackLuaState *state;
        int top;
        void (*settop)(NativeDfhackLuaState *, int);
        ~RestoreStack() { settop(state, top); }
    } restore{state, top, stack.settop};
    const char *name = stack.getlocal(state, &frame, 1);
    if (!name || std::strcmp(name, "self") || stack.type(state, -1) != 5) return false;
    const int list = stack.gettop(state);
    // Both closures must bind the actual enclosing NotifyOverlay instance.
    // Source line numbers change when upstream adds comments or branches;
    // callback identity, source, and the real parent chain prove ownership.
    if (!native_dfhack_sitemap_raw_field(state, list, "parent_view") ||
            stack.type(state, -1) != 5 ||
            !native_dfhack_sitemap_raw_field(state, -1, "parent_view") ||
            stack.type(state, -1) != 5) return false;
    const int overlay = stack.gettop(state);
    if (!native_dfhack_overlay_class_method(state, overlay, "overlay_onupdate",
            api.notify_source, 0)) return false;
    const auto submit = [&](const char *field) {
        stack.settop(state, overlay);
        if (!native_dfhack_sitemap_raw_field(state, list, field) ||
                stack.type(state, -1) != 6) return false;
        const int callback = stack.gettop(state);
        bool bound = false;
        for (int index = 1; index <= 16; ++index) {
            const char *upvalue = api.getupvalue(state, callback, index);
            if (!upvalue) break;
            if (!std::strcmp(upvalue, "self"))
                bound = stack.type(state, -1) == 5 && api.rawequal(state, -1, overlay);
            stack.settop(state, callback);
        }
        if (!bound) return false;
        NativeDfhackLuaDebug producer{};
        if (!stack.getinfo(state, ">Su", &producer) || producer.isvararg ||
                producer.nparams != 2) return false;
        const auto source = native_dfhack_lua_text(producer.source, 32768);
        return source && native_dfhack_lua_source_key(*source) == api.notify_source;
    };
    if (!submit("on_submit") || !submit("on_submit2")) return false;
    stack.settop(state, top);
    // Use the actual row being passed to Label.render_text, not a selected
    // index or a name inferred from its spelling. Local slots are discovered
    // by the installed renderer's authored name, without executing Lua.
    bool found = false;
    for (int local = 2; local <= 32; ++local) {
        name = stack.getlocal(state, &frame, local);
        if (!name) break;
        if (!std::strcmp(name, "obj")) { found = true; break; }
        stack.settop(state, top);
    }
    if (!found || stack.type(state, -1) != 5 ||
            !native_dfhack_sitemap_raw_field(state, -1, "data") ||
            stack.type(state, -1) != 5 ||
            !native_dfhack_sitemap_raw_field(state, -1, "name") ||
            stack.type(state, -1) != 4) return false;
    size_t length = 0;
    const char *bytes = stack.tolstring(state, -1, &length);
    if (!bytes || !length || length > 64) return false;
    const std::string_view id(bytes, length);
    constexpr std::array<std::string_view, 20> notifications{
        "missing_nemesis", "stuck_squad", "auto_train", "traders_ready",
        "mandates_expiring", "petitions_agreed", "moody_status", "warn_starving",
        "agitated_count", "invader_count", "hostile_count", "warn_nuisance",
        "warn_stranded", "wildlife", "wildlife_adv", "injured", "labor_starvation",
        "suffocation_adv", "bleeding_adv", "save-reminder",
    };
    if (std::find(notifications.begin(), notifications.end(), id) == notifications.end())
        return false;
    notification_name.assign(id);
    return true;
}

#include "native_dfhack_control_panel_capture.inc"

static void capture_native_dfhack_sitemap_text(NativeDfhackLuaState *state) noexcept {
    NativeInputCallbackScope callback;
    try {
        if (!state || !g_overlay.translation_enabled() ||
                !g_native_dfhack_sitemap_lua_bound.load(std::memory_order_acquire)) return;
        const auto &api = g_native_dfhack_sitemap_lua_api;
        const auto &stack = api.stack;
        const int top = stack.gettop(state);
        if (top != 5 || stack.type(state, 4) != 4 || api.toboolean(state, 5) ||
                !stack.isinteger(state, 2) || !stack.isinteger(state, 3) ||
                !stack.checkstack(state, 96)) return;
        struct RestoreStack {
            NativeDfhackLuaState *state;
            int top;
            void (*settop)(NativeDfhackLuaState *, int);
            ~RestoreStack() { settop(state, top); }
        } restore{state, top, stack.settop};
        NativeDfhackLuaDebug current{}, painter{}, list{};
        if (!stack.getstack(state, 0, &current) || !stack.getinfo(state, "Sf", &current) ||
                stack.tocfunction(state, -1) != api.paint_string) return;
        stack.settop(state, top);
        if (!stack.getstack(state, 1, &painter) || !stack.getinfo(state, "Slu", &painter) ||
                painter.nparams != 3 || !painter.isvararg) return;
        const bool profiled_painter = painter.linedefined == 570 &&
            painter.lastlinedefined == 590 && painter.currentline >= 581 && painter.currentline <= 586;
        const auto painter_source = native_dfhack_lua_text(painter.source, 32768);
        if (!painter_source || native_dfhack_lua_source_key(*painter_source) != api.painter_source)
            return;
        const char *name = stack.getlocal(state, &painter, 2);
        if (!name || std::strcmp(name, "text") || stack.type(state, -1) != 4) return;
        size_t full_length = 0, visible_length = 0;
        const char *full = stack.tolstring(state, -1, &full_length);
        const char *visible = stack.tolstring(state, 4, &visible_length);
        if (!full || !visible || !full_length || full_length > 65536 || !visible_length ||
                visible_length > 1000 || std::memchr(full, '\n', full_length) ||
                std::memchr(full, '\r', full_length)) return;
        stack.settop(state, top);
        if (!native_dfhack_overlay_local(state, painter, "dx") ||
                !stack.isinteger(state, -1)) return;
        int valid_dx = 0;
        const int64_t dx = stack.tointegerx(state, -1, &valid_dx);
        if (!valid_dx || dx < 0 || dx > static_cast<int64_t>(full_length) ||
                visible_length > full_length - static_cast<size_t>(dx) ||
                std::memcmp(full + dx, visible, visible_length)) return;
        stack.settop(state, top);
        auto control_panel = profiled_painter ? native_dfhack_control_panel_label_text(state,
            std::string_view(full, full_length), static_cast<int>(dx)) :
            std::optional<NativeDfhackControlPanelText>{};
        auto overlay = (control_panel || !profiled_painter) ? std::optional<NativeDfhackOverlayText>{} :
            native_dfhack_spectate_banner_text(state, std::string_view(full, full_length));
        if (profiled_painter && !control_panel && !overlay)
            overlay = native_dfhack_overlay_label_text(state, std::string_view(full, full_length));
        if (profiled_painter && !control_panel && !overlay)
            overlay = native_dfhack_typed_list_text(state, std::string_view(full, full_length));
        bool owned = control_panel.has_value() || overlay.has_value();
        NativeDfhackChoiceTextOwner owner = NativeDfhackChoiceTextOwner::Sitemap;
        if (owned) owner = NativeDfhackChoiceTextOwner::OverlayLabel;
        std::string notification_name;
        std::optional<NativeDfhackAutotrainingSquadText> squad;
        // List rows still require their original authored submit provenance.
        // Actual Labels use their own onRenderBody/render_text source above;
        // helper windows need no inferred caption or copied callback owner.
        for (int level = 2; !owned && level <= 8; ++level) {
            if (!stack.getstack(state, level, &list) || !stack.getinfo(state, "Slu", &list)) break;
            const auto list_source = native_dfhack_lua_text(list.source, 32768);
            if (!list_source || native_dfhack_lua_source_key(*list_source) != api.list_source ||
                    list.nparams != 2 || list.isvararg) continue;
            const bool profiled_list = profiled_painter && list.linedefined == 236 &&
                list.lastlinedefined == 293 && list.currentline == 277;
            if (const auto filtered_owner = profiled_list ? native_dfhack_filtered_list_owner(
                    state, list, std::string_view(full, full_length)) :
                    std::optional<NativeDfhackChoiceTextOwner>{}) {
                owned = true;
                owner = *filtered_owner;
            }
            stack.settop(state, top);
            if (!owned && profiled_list) {
                squad = native_dfhack_autotraining_squad_text(state, list,
                    std::string_view(full, full_length));
                if (squad) {
                    owned = true;
                    owner = NativeDfhackChoiceTextOwner::AutotrainingSquad;
                }
                stack.settop(state, top);
            }
            if (!owned) {
                owned = native_dfhack_notification_list_owner(state, list, notification_name);
                if (owned) owner = NativeDfhackChoiceTextOwner::Notification;
                stack.settop(state, top);
            }
            break;
        }
        if (!owned || (!overlay && !control_panel && dx != 0)) return;
        int valid_x = 0, valid_y = 0;
        const int64_t x = stack.tointegerx(state, 2, &valid_x);
        const int64_t y = stack.tointegerx(state, 3, &valid_y);
        NativeDfhackLayerWriteScope layer;
        if (!layer.valid()) return;
        const auto *gps = native_dfhack_graphics();
        if (!valid_x || !valid_y || !native_dfhack_logo_grid_valid(gps) || x < 0 || y < 0 ||
                y >= gps->dimy || x + static_cast<int64_t>(visible_length) > gps->dimx) return;
        const size_t tile = static_cast<size_t>(x) * gps->dimy + static_cast<size_t>(y);
        const auto origin = native_text_grid_origin(*gps, tile, gps->top_in_use);
        if (!origin.grid) return;
        NativeDfhackSitemapText text;
        text.grid = origin.grid;
        text.dimx = gps->dimx; text.dimy = gps->dimy;
        text.x = static_cast<int>(x); text.y = static_cast<int>(y);
        text.top_layer = origin.top_layer;
        text.page_revision = native_dfhack_layer_page_revision();
        text.owner = owner;
        text.notification_name = std::move(notification_name);
        text.full.assign(full, full_length);
        text.visible.assign(visible, visible_length);
        text.squad = std::move(squad);
        if (overlay) {
            overlay->x = text.x;
            overlay->y = text.y;
            overlay->full_x = text.x - static_cast<int>(dx);
            overlay->visible_offset = static_cast<int>(dx);
            overlay->visible = text.visible;
            text.overlay = std::move(*overlay);
        }
        std::lock_guard<std::mutex> lock(g_native_dfhack_sitemap_text_mutex);
        if (text.page_revision != g_native_dfhack_sitemap_text_page_revision) {
            g_native_dfhack_sitemap_text.clear();
            g_native_dfhack_control_panel_text.clear();
            g_native_dfhack_sitemap_text_page_revision = text.page_revision;
        }
        if (control_panel) {
            control_panel->x = text.x;
            control_panel->y = text.y;
            control_panel->full_x = text.x - static_cast<int>(dx);
            control_panel->visible_offset = static_cast<int>(dx);
            control_panel->visible = text.visible;
            std::erase_if(g_native_dfhack_control_panel_text, [&](const auto &previous) {
                return previous.grid == text.grid &&
                    previous.text.widget_id == control_panel->widget_id &&
                    previous.text.parent_id == control_panel->parent_id &&
                    previous.text.x == text.x && previous.text.y == text.y &&
                    previous.top_layer == text.top_layer;
            });
            if (g_native_dfhack_control_panel_text.size() < 8192)
                g_native_dfhack_control_panel_text.push_back({text.grid, text.dimx, text.dimy,
                    text.top_layer, text.page_revision, std::move(*control_panel)});
            return;
        }
        std::erase_if(g_native_dfhack_sitemap_text, [&](const auto &previous) {
            return previous.grid == text.grid && previous.x == text.x && previous.y == text.y &&
                previous.top_layer == text.top_layer;
        });
        if (g_native_dfhack_sitemap_text.size() < 8192)
            g_native_dfhack_sitemap_text.push_back(std::move(text));
    } catch (...) {
        // An optional full-text capture must not alter CheckPen's native call.
    }
}

#ifdef _WIN32
static bool bind_native_dfhack_sitemap_lua(HMODULE module) {
    if (g_native_dfhack_sitemap_lua_bound.load(std::memory_order_acquire)) return true;
    const auto lua = GetModuleHandleW(L"lua53.dll");
    if (!lua) return false;
    NativeDfhackSitemapLuaApi api;
    auto &stack = api.stack;
    stack.gettop = reinterpret_cast<decltype(stack.gettop)>(GetProcAddress(lua,
        "?lua_gettop@@YAHPEAUlua_State@@@Z"));
    stack.settop = reinterpret_cast<decltype(stack.settop)>(GetProcAddress(lua,
        "?lua_settop@@YAXPEAUlua_State@@H@Z"));
    stack.checkstack = reinterpret_cast<decltype(stack.checkstack)>(GetProcAddress(lua,
        "?lua_checkstack@@YAHPEAUlua_State@@H@Z"));
    stack.type = reinterpret_cast<decltype(stack.type)>(GetProcAddress(lua,
        "?lua_type@@YAHPEAUlua_State@@H@Z"));
    stack.isinteger = reinterpret_cast<decltype(stack.isinteger)>(GetProcAddress(lua,
        "?lua_isinteger@@YAHPEAUlua_State@@H@Z"));
    stack.tointegerx = reinterpret_cast<decltype(stack.tointegerx)>(GetProcAddress(lua,
        "?lua_tointegerx@@YA_JPEAUlua_State@@HPEAH@Z"));
    stack.tolstring = reinterpret_cast<decltype(stack.tolstring)>(GetProcAddress(lua,
        "?lua_tolstring@@YAPEBDPEAUlua_State@@HPEA_K@Z"));
    stack.tocfunction = reinterpret_cast<decltype(stack.tocfunction)>(GetProcAddress(lua,
        "?lua_tocfunction@@YAP6AHPEAUlua_State@@@Z0H@Z"));
    stack.getstack = reinterpret_cast<decltype(stack.getstack)>(GetProcAddress(lua,
        "?lua_getstack@@YAHPEAUlua_State@@HPEAUlua_Debug@@@Z"));
    stack.getinfo = reinterpret_cast<decltype(stack.getinfo)>(GetProcAddress(lua,
        "?lua_getinfo@@YAHPEAUlua_State@@PEBDPEAUlua_Debug@@@Z"));
    stack.getlocal = reinterpret_cast<decltype(stack.getlocal)>(GetProcAddress(lua,
        "?lua_getlocal@@YAPEBDPEAUlua_State@@PEBUlua_Debug@@H@Z"));
    api.pushstring = reinterpret_cast<decltype(api.pushstring)>(GetProcAddress(lua,
        "?lua_pushstring@@YAPEBDPEAUlua_State@@PEBD@Z"));
    api.rawget = reinterpret_cast<decltype(api.rawget)>(GetProcAddress(lua,
        "?lua_rawget@@YAHPEAUlua_State@@H@Z"));
    api.rawgeti = reinterpret_cast<decltype(api.rawgeti)>(GetProcAddress(lua,
        "?lua_rawgeti@@YAHPEAUlua_State@@H_J@Z"));
    api.rawlen = reinterpret_cast<decltype(api.rawlen)>(GetProcAddress(lua,
        "?lua_rawlen@@YA_KPEAUlua_State@@H@Z"));
    api.getmetatable = reinterpret_cast<decltype(api.getmetatable)>(GetProcAddress(lua,
        "?lua_getmetatable@@YAHPEAUlua_State@@H@Z"));
    api.topointer = reinterpret_cast<decltype(api.topointer)>(GetProcAddress(lua,
        "?lua_topointer@@YAPEBXPEAUlua_State@@H@Z"));
    api.rawequal = reinterpret_cast<decltype(api.rawequal)>(GetProcAddress(lua,
        "?lua_rawequal@@YAHPEAUlua_State@@HH@Z"));
    api.toboolean = reinterpret_cast<decltype(api.toboolean)>(GetProcAddress(lua,
        "?lua_toboolean@@YAHPEAUlua_State@@H@Z"));
    api.getupvalue = reinterpret_cast<decltype(api.getupvalue)>(GetProcAddress(lua,
        "?lua_getupvalue@@YAPEBDPEAUlua_State@@HH@Z"));
    if (!stack.gettop || !stack.settop || !stack.checkstack || !stack.type ||
            !stack.isinteger || !stack.tointegerx || !stack.tolstring || !stack.tocfunction ||
            !stack.getstack || !stack.getinfo || !stack.getlocal || !api.pushstring ||
            !api.rawget || !api.rawgeti || !api.rawlen || !api.getmetatable || !api.topointer ||
            !api.rawequal || !api.toboolean || !api.getupvalue) return false;
    // Bind the native C function through its immutable LuaApi.cpp
    // registration, not the script-replaceable dfhack.screen Lua table.
    const auto *base = reinterpret_cast<const unsigned char *>(module);
    constexpr std::array<const char *, 3> names{"readMapPortTile", "paintString", "fillRect"};
    struct Registration {
        uintptr_t table;
        std::array<uintptr_t, names.size()> functions;
    };
    constexpr Registration registrations[]{
        {0xa61a50, {0x4078b0, 0x407960, 0x407ad0}}, // 53.16-r2
        {0xa62ad0, {0x407b90, 0x407c40, 0x407db0}}, // 53.16-r3
        {0xb96a90, {0x426be0, 0x426c90, 0x426e00}}, // 53.17-r1
    };
    const unsigned char *paint = nullptr;
    for (const auto &registration : registrations) {
        if (!native_dfhack_lua_registration_pe(base, registration.table, names,
                registration.functions)) continue;
        paint = base + registration.functions[1];
        break;
    }
    if (!paint) return false;
    std::vector<unsigned char> paint_prefix{
        0x48,0x89,0x5c,0x24,0x10,0x48,0x89,0x6c,
        0x24,0x18,0x56,0x57,0x41,0x56,0x48,0x83,
        0xec,0x70,0x48,0x8b,0x05,0x47,0x0b,0xd6,
        0x00,0x48,0x33,0xc4,0x48,0x89,0x44,0x24};
    if (!native_dfhack_read_entry_prefix(paint, paint_prefix, {21},
            "DFHack Sitemap text producer")) return false;
    if (native_dfhack_relative_target(paint, 21, 25) !=
            native_dfhack_pe_directory_pointer(module, IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG,
                offsetof(IMAGE_LOAD_CONFIG_DIRECTORY64, SecurityCookie))) return false;
    api.paint_string = reinterpret_cast<NativeDfhackLuaCFunction>(
        const_cast<unsigned char *>(paint));
    std::array<wchar_t, 32768> filename{};
    const DWORD length = GetModuleFileNameW(module, filename.data(), static_cast<DWORD>(filename.size()));
    if (!length || length >= filename.size()) return false;
    const auto hack = std::filesystem::path(std::wstring(filename.data(), length)).parent_path();
    const auto key = [&](const std::filesystem::path &path) {
        const auto utf8 = path.u8string();
        return native_dfhack_lua_source_key(std::string_view(
            reinterpret_cast<const char *>(utf8.data()), utf8.size()));
    };
    api.painter_source = key(hack / L"lua" / L"gui.lua");
    api.list_source = key(hack / L"lua" / L"gui" / L"widgets" / L"list.lua");
    api.filtered_source = key(hack / L"lua" / L"gui" / L"widgets" / L"filtered_list.lua");
    api.sitemap_source = key(hack / L"scripts" / L"gui" / L"sitemap.lua");
    api.notify_source = key(hack / L"scripts" / L"gui" / L"notify.lua");
    api.zone_source = key(hack / L"lua" / L"plugins" / L"zone.lua");
    api.movegoods_source = key(hack / L"scripts" / L"internal" / L"caravan" / L"movegoods.lua");
    api.label_source = key(hack / L"lua" / L"gui" / L"widgets" / L"labels" / L"label.lua");
    api.wrapped_source = key(hack / L"lua" / L"gui" / L"widgets" / L"labels" / L"wrapped_label.lua");
    api.control_panel_source = key(hack / L"scripts" / L"gui" / L"control-panel.lua");
    api.cycle_source = key(hack / L"lua" / L"gui" / L"widgets" / L"labels" / L"cycle_hotkey_label.lua");
    api.overlay_source = key(hack / L"lua" / L"plugins" / L"overlay.lua");
    api.asyncexport_source = key(hack / L"scripts" / L"internal" / L"exportlegends" / L"asyncexport.lua");
    api.prioritize_source = key(hack / L"scripts" / L"prioritize.lua");
    api.filterselection_source = key(hack / L"lua" / L"plugins" / L"buildingplan" / L"filterselection.lua");
    api.planner_source = key(hack / L"lua" / L"plugins" / L"buildingplan" / L"planneroverlay.lua");
    api.mechanisms_source = key(hack / L"lua" / L"plugins" / L"buildingplan" / L"mechanisms.lua");
    api.itemselection_source = key(hack / L"lua" / L"plugins" / L"buildingplan" / L"itemselection.lua");
    api.spectate_source = key(hack / L"lua" / L"plugins" / L"spectate.lua");
    api.autotraining_source = key(hack / L"scripts" / L"gui" / L"autotraining.lua");
    api.autofarm_source = key(hack / L"scripts" / L"gui" / L"autofarm.lua");
    g_native_dfhack_sitemap_lua_api = std::move(api);
    g_native_dfhack_sitemap_lua_bound.store(true, std::memory_order_release);
    return true;
}

#else
#include "native_dfhack_sitemap_profile_elf.inc"
#endif

static uint32_t native_dfhack_sitemap_callbacks() {
    auto *context = g_native_dfhack_sitemap_context;
    return context ? std::atomic_ref<uint32_t>(context->active).load(std::memory_order_seq_cst) : 0;
}

static bool native_dfhack_sitemap_hook_active() {
    auto *context = g_native_dfhack_sitemap_context;
    return g_native_dfhack_sitemap_hook.installed ||
        native_code_patches_pending(g_native_dfhack_sitemap_hook.patches) ||
        native_dfhack_sitemap_callbacks() || (context &&
        std::atomic_ref<uintptr_t>(context->helper).load(std::memory_order_seq_cst));
}

#ifdef _WIN32
static bool prepare_native_dfhack_sitemap_hook(HMODULE module) {
    constexpr const char *label = "DFHack Sitemap complete choice text capture";
    auto &hook = g_native_dfhack_sitemap_hook;
    if (hook.relay) return hook.original && g_native_dfhack_sitemap_context;
    if (!bind_native_dfhack_sitemap_lua(module)) {
        report_native_patch_error("ERROR", label, "native Lua/screen paintString binding differs");
        return false;
    }
    auto *entry = reinterpret_cast<unsigned char *>(GetProcAddress(module,
        "?CheckPen@Lua@DFHack@@YAXPEAUlua_State@@PEAUPen@Screen@2@H_N2@Z"));
    constexpr std::array<unsigned char, 32> profile{
        0x48,0x89,0x5c,0x24,0x08,0x48,0x89,0x74,
        0x24,0x10,0x48,0x89,0x7c,0x24,0x18,0x4c,
        0x89,0x74,0x24,0x20,0x55,0x48,0x8b,0xec,
        0x48,0x83,0xec,0x40,0x48,0x8b,0xf2,0x45};
    NativePatchPages pages;
    if (!entry || !collect_native_patch_pages(pages, reinterpret_cast<uintptr_t>(entry),
            profile.size(), native_patch_page_size(), true, label) ||
            std::memcmp(entry, profile.data(), profile.size())) {
        report_native_patch_error("ERROR", label, "CheckPen entry signature differs");
        return false;
    }
    using AddFunctionTableFn = BOOLEAN (WINAPI *)(PRUNTIME_FUNCTION, DWORD, DWORD64);
    const auto kernel = GetModuleHandleW(L"kernel32.dll");
    const auto add_function_table = kernel ? reinterpret_cast<AddFunctionTableFn>(
        GetProcAddress(kernel, "RtlAddFunctionTable")) : nullptr;
    if (!add_function_table) return false;
    auto *context = static_cast<NativeDfhackSitemapContext *>(
        HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(NativeDfhackSitemapContext)));
    if (!context) return false;
    NativeRelayRange range;
    range.include(reinterpret_cast<uintptr_t>(entry));
    range.include(reinterpret_cast<uintptr_t>(entry + 5));
    hook.relay = allocate_native_relay(range, 0x228, &hook.relay_size, label);
    if (!hook.relay) { HeapFree(GetProcessHeap(), 0, context); return false; }
    bool registered = false;
    struct UnpublishedRelay {
        NativeEntryHook &hook;
        NativeDfhackSitemapContext *context;
        bool &registered;
        const char *label;
        ~UnpublishedRelay() {
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
    const auto emit = [&](std::initializer_list<unsigned char> bytes) {
        stub.insert(stub.end(), bytes);
    };
    const auto load_context = [&] {
        emit({0x49, 0xba});
        const uintptr_t address = reinterpret_cast<uintptr_t>(context);
        const auto *bytes = reinterpret_cast<const unsigned char *>(&address);
        stub.insert(stub.end(), bytes, bytes + sizeof(address));
    };
    emit({0xf3,0x0f,0x1e,0xfa});
    emit({0x48,0x83,0xec,0x48});
    emit({0x48,0x89,0x4c,0x24,0x20});
    emit({0x48,0x89,0x54,0x24,0x28});
    emit({0x4c,0x89,0x44,0x24,0x30});
    emit({0x4c,0x89,0x4c,0x24,0x38});
    load_context();
    emit({0xf0,0x41,0xff,0x42,0x08}); // gate before loading any core pointer
    emit({0x49,0x8b,0x02,0x48,0x85,0xc0});
    emit({0x74,0x07}); // skip saved Lua-state load and helper call when detached
    emit({0x48,0x8b,0x4c,0x24,0x20,0xff,0xd0});
    load_context();
    emit({0xf0,0x41,0xff,0x4a,0x08});
    emit({0x48,0x8b,0x4c,0x24,0x20});
    emit({0x48,0x8b,0x54,0x24,0x28});
    emit({0x4c,0x8b,0x44,0x24,0x30});
    emit({0x4c,0x8b,0x4c,0x24,0x38});
    emit({0x48,0x83,0xc4,0x48});
    const size_t tail_jump = stub.size();
    stub.resize(stub.size() + 14);
    // Restore native argument registers and tail-jump with the original
    // stack arguments/return address. No core code surrounds CheckPen itself.
    emit_native_absolute_jump(stub.data() + tail_jump, memory + trampoline_offset);
    std::copy(stub.begin(), stub.end(), memory);
    auto *trampoline = memory + trampoline_offset;
    constexpr std::array<unsigned char, 4> endbr{0xf3,0x0f,0x1e,0xfa};
    std::copy(endbr.begin(), endbr.end(), trampoline);
    std::copy(profile.begin(), profile.begin() + 5, trampoline + endbr.size());
    if (!native_relative_branch(trampoline + endbr.size() + 5, 0xe9, entry + 5)) return false;
    auto *table = reinterpret_cast<PRUNTIME_FUNCTION>(memory + table_offset);
    *table = RUNTIME_FUNCTION{};
    table->EndAddress = static_cast<DWORD>(stub.size());
    table->UnwindData = unwind_offset;
    constexpr std::array<unsigned char, 8> unwind{1,8,1,0,8,0x82,0,0};
    std::copy(unwind.begin(), unwind.end(), memory + unwind_offset);
    NativeCodePatch patch{entry, std::vector<unsigned char>(profile.begin(), profile.begin() + 5),
        std::vector<unsigned char>(5, 0x90)};
    const intptr_t distance = reinterpret_cast<intptr_t>(memory) - reinterpret_cast<intptr_t>(entry + 5);
    if (distance < INT32_MIN || distance > INT32_MAX) return false;
    patch.replacement[0] = 0xe9;
    const auto relative = static_cast<int32_t>(distance);
    std::memcpy(patch.replacement.data() + 1, &relative, sizeof(relative));
    hook.patches.push_back(std::move(patch));
    hook.original = trampoline;
    if (!seal_native_relay(hook.relay, hook.relay_size, label) ||
            !add_function_table(table, 1, reinterpret_cast<DWORD64>(memory))) return false;
    registered = true;
    g_native_dfhack_sitemap_context = context;
    // Registered relay/context remain mapped until process exit; detach only
    // clears the helper and restores the original CheckPen entry bytes.
    return true;
}

#else
static bool prepare_native_dfhack_sitemap_hook(void *entry_pointer) {
    auto &hook = g_native_dfhack_sitemap_hook;
    if (hook.relay) return hook.original && g_native_dfhack_sitemap_context;
    if (!bind_native_dfhack_sitemap_lua(entry_pointer)) return false;
    auto context = std::make_unique<NativeDfhackSitemapContext>();
    if (!prepare_native_dfhack_elf_gate(hook,
            static_cast<unsigned char *>(entry_pointer), context.get(),
            {0xf3,0x0f,0x1e,0xfa,0x41,0x56}, NativeDfhackElfGate::Observe,
            "DFHack complete choice text capture")) return false;
    g_native_dfhack_sitemap_context = context.release();
    return true;
}
#endif

static bool install_native_dfhack_sitemap_hook() {
    std::lock_guard<std::mutex> lock(g_native_dfhack_sitemap_hook_mutex);
#ifdef _WIN32
    const auto module = GetModuleHandleW(L"dfhack.dll");
#else
    void *module = dlsym(RTLD_DEFAULT, "_ZN6DFHack3Lua8CheckPenEP9lua_StatePNS_6Screen3PenEibb");
#endif
    if (!module) return true;
    constexpr const char *label = "DFHack Sitemap complete choice text capture";
    if (!prepare_native_dfhack_sitemap_hook(module) ||
            !g_native_dfhack_sitemap_hook.install(label)) return false;
    std::atomic_ref<uintptr_t>(g_native_dfhack_sitemap_context->helper).store(
        reinterpret_cast<uintptr_t>(&capture_native_dfhack_sitemap_text), std::memory_order_seq_cst);
    return true;
}

static void uninstall_native_dfhack_sitemap_hook() {
    std::lock_guard<std::mutex> lock(g_native_dfhack_sitemap_hook_mutex);
    auto *context = g_native_dfhack_sitemap_context;
    if (!context) { clear_native_dfhack_sitemap_text(); return; }
    std::atomic_ref<uintptr_t>(context->helper).store(0, std::memory_order_seq_cst);
    auto &hook = g_native_dfhack_sitemap_hook;
    constexpr const char *label = "DFHack Sitemap complete choice text capture";
    if (hook.installed && !write_native_code_patches(hook.patches, false, label, &hook.installed)) return;
    if (!flush_native_code_patches(hook.patches, label)) return;
    if (!native_dfhack_sitemap_callbacks()) clear_native_dfhack_sitemap_text();
}
