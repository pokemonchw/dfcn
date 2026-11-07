// The character sheet draws a complete kinship label at one native call.
// Keep its English string and native draw intact; bind the Chinese title to
// the actual subject, relative and screen cells used by that same row.
static void remember_native_character_relation(int x, int y, std::string_view source,
    std::string_view target, const graphicst *graphics, bool overview_count);
static void clear_native_character_relations();

// Every native family enum has a Chinese caption, including sex-neutral
// creatures and incomplete historical records. The genealogy resolver
// replaces collective terms with the precise title proved by the row's
// actual family path; an unresolved path must never publish English again.
static std::string_view native_character_kinship_fallback(int32_t relation) {
    static constexpr std::string_view captions[] = {
        "母亲", "父亲", "父母", "丈夫", "妻子", "配偶",
        "长子", "次子", "三子", "四子", "五子", "六子", "七子", "八子", "九子", "十子",
        "儿子", "幼子", "独子",
        "长女", "次女", "三女", "四女", "五女", "六女", "七女", "八女", "九女", "十女",
        "女儿", "独女", "幼女",
        "长子女", "次子女", "第三子女", "第四子女", "第五子女", "第六子女",
        "第七子女", "第八子女", "第九子女", "第十子女", "子女", "幼子女", "独生子女",
        "祖母", "祖父", "外祖母", "外祖父", "祖母辈", "祖父辈", "祖辈",
        "哥哥", "姐姐", "兄姊", "弟弟", "妹妹", "弟妹",
        "堂表亲", "姑姨", "叔舅", "侄甥女", "侄甥", "兄弟姐妹", "孙辈",
        "半同胞兄", "半同胞姐", "半同胞兄姊", "半同胞弟", "半同胞妹", "半同胞弟妹", "半同胞"
    };
    return relation >= 0 && static_cast<size_t>(relation) < std::size(captions)
        ? captions[relation] : std::string_view{};
}

using NativeCharacterRelationCopyFn = NativeString *(*)(NativeString *, const NativeString *);
using NativeCharacterCountFormatFn = void (*)(int32_t, NativeString *);
struct NativeCharacterRelationsHook {
    NativeCallHook code;
#ifdef _WIN32
    std::array<NativeCallHook, 3> overview;
#endif
    NativeCaptionDrawFn draw = nullptr;
    NativeCharacterRelationCopyFn copy = nullptr;
    NativeCharacterCountFormatFn count_format = nullptr;
    uintptr_t base = 0;
};
static NativeCharacterRelationsHook g_native_character_relations_hook;

#ifdef _WIN32
struct NativeCharacterRelationIdentity {
    uintptr_t sheet = 0, output = 0, cached = 0;
    size_t index = 0;
};
static thread_local NativeCharacterRelationIdentity g_native_character_relation_identity;

static std::optional<size_t> native_character_relation_name_index(uintptr_t sheet,
        const NativeString *source) {
    NativeBorrowedVector<uintptr_t> names;
    if (!sheet || !source || !native_history_read_vector(
            native_character_sheet_field(sheet, 0x1840, "rel_name"), names) || names.size() > 65536)
        return std::nullopt;
    std::optional<size_t> found;
    for (size_t index = 0; index < names.size(); ++index)
        if (native_history_vector_at(names, index) == reinterpret_cast<uintptr_t>(source)) {
            if (found) return std::nullopt;
            found = index;
        }
    return found;
}

static std::optional<NativeCharacterRelationIdentity> native_character_relation_identity_for(
        const NativeString *output) {
    const auto identity = g_native_character_relation_identity;
    NativeBorrowedVector<uintptr_t> names;
    if (!identity.sheet || identity.sheet != g_native_character_drawing_sheet ||
            identity.output != reinterpret_cast<uintptr_t>(output) ||
            !native_history_read_vector(native_character_sheet_field(identity.sheet, 0x1840, "rel_name"), names) ||
            names.size() > 65536 || identity.index >= names.size() ||
            native_history_vector_at(names, identity.index) != identity.cached) return std::nullopt;
    return identity;
}
#endif

static void remember_native_character_relation_identity(NativeString *output,
        const NativeString *source, const void *sheet, size_t index) {
    try {
        const auto capture = [&] {
            const uintptr_t base = g_native_character_relations_hook.base;
#ifdef _WIN32
            const uintptr_t object = g_native_character_drawing_sheet;
#else
            const uintptr_t object = reinterpret_cast<uintptr_t>(sheet);
#endif
            std::string_view text;
            if (!base || !object ||
                    !g_overlay.translation_enabled() ||
                    !native_string_view(output, &text, 65536) || text.empty()) return;
            int32_t object_type = -1, page = -1;
            if (!native_history_copy(native_character_sheet_field(object, 8, "active_sheet", 4), object_type) || object_type != 0 ||
                    !native_history_copy(native_character_sheet_field(object, 0xc0, "active_sub_tab", 4), page) || page != 6) return;
            NativeBorrowedVector<uintptr_t> names, figures;
            NativeBorrowedVector<int32_t> units;
            if (!native_history_read_vector(native_character_sheet_field(object, 0x1840, "rel_name"), names) || names.size() > 65536 ||
                    !native_history_read_vector(native_character_sheet_field(object, 0x18a0, "rel_hf"), figures) ||
                    !native_history_copy(native_character_sheet_field(object, 0x1888, "rel_unid"), units) || !units.valid(65536) ||
                    figures.size() != names.size() || units.size() != names.size() ||
                    index >= names.size() || native_history_vector_at(names, index) !=
                        reinterpret_cast<uintptr_t>(source)) return;
            int32_t unit_id = -1;
            if (!native_history_copy(reinterpret_cast<uintptr_t>(units.begin) +
                    index * sizeof(int32_t), unit_id)) return;
            uintptr_t unit = 0, name = 0;
            if (unit_id >= 0) {
                if (!native_history_material_find_id(native_history_global(0x23e50b0), 0x130,
                        unit_id, unit) || !unit) return;
            } else {
                const uintptr_t figure = native_history_vector_at(figures, index);
                int32_t figure_id = -1;
                if (!figure || figure > UINTPTR_MAX - 0xe4 ||
                        !native_history_copy(native_history_object_field(figure, "historical_figure", 0xe0), figure_id) || figure_id < 0 ||
                        native_history_find_subject(base, NativeHistoryObjectKind::Figure,
                            figure_id) != figure) return;
                name = native_history_object_field(figure, "historical_figure", 0x38);
            }
            // The page cached these strings at construction, so the original
            // formatter's transient owner/frame is already gone. Its parallel
            // unit IDs/HF pointers still identify every displayed row. Reuse
            // the common memory-backed renderer and bind the copied string
            // before the existing resize/draw hooks see its ellipsis.
            const auto target = translate_native_unit_identity_reference(unit, name, text);
            if (target)
                remember_native_unit_identity(reinterpret_cast<uintptr_t>(output), text,
                    *target, unit);
        };
        capture();
    } catch (...) {
        // The native copy is complete; capture must not change its lifetime.
    }
}

// The relation renderer draws every cached name at one call site, including
// short names that never enter its resize path. Preserve that native row's
// allocation before addst writes its glyphs; translation readiness does not
// determine whether the relationship has a name above it.
static void capture_native_character_relation_row(NativeDrawnTextRow &row,
        const graphicst *graphics, const NativeString *source, uintptr_t caller,
        int width) {
#ifdef _WIN32
    try {
        const auto &hook = g_native_character_relations_hook;
        const uintptr_t owner = reinterpret_cast<uintptr_t>(source);
        if (!hook.base || !hook.code.active() ||
                caller != native_reference_address(hook.base, 0x176dc5) ||
                !graphics || !source || row.top_layer || width != 0 ||
                graphics->dimx <= 0 || graphics->dimx > 1000 ||
                graphics->dimy <= 0 || graphics->dimy > 1000) return;
        const auto identity = native_character_relation_identity_for(source);
        if (!identity) return;
        const uintptr_t sheet = identity->sheet;
        const size_t index = identity->index;
        // The complete Frame component proves the native R-L comparison
        // and its path to this exact string argument. Read both live operands
        // through that contract, then verify the actual cursor's allocation.
        int32_t left = -1, right = -1;
        const uintptr_t left_address = native_pe_frame_relative(owner, 0x176db1, 0x176cde, 4);
        const uintptr_t right_address = native_pe_frame_relative(owner, 0x176db1, 0x176ce5, 4);
        if (!native_history_copy(left_address, left) || !native_history_copy(right_address, right) ||
                left < 0 || left >= graphics->dimx || right <= left ||
                right >= graphics->dimx || right - left <= 16 ||
                graphics->screeny < 0 || graphics->screeny >= graphics->dimy ||
                graphics->screenx != left + 7 ||
                !sheet) return;
        int32_t object_type = -1, page = -1;
        NativeBorrowedVector<uintptr_t> names;
        if (!native_history_copy(native_character_sheet_field(sheet, 8, "active_sheet", 4), object_type) || object_type != 0 ||
                !native_history_copy(native_character_sheet_field(sheet, 0xc0, "active_sub_tab", 4), page) || page != 6 ||
                !native_history_read_vector(native_character_sheet_field(
                    sheet, 0x1840, "rel_name"), names) || names.size() > 65536 ||
                static_cast<size_t>(index) >= names.size()) return;
        const uintptr_t cached = native_history_vector_at(names, static_cast<size_t>(index));
        std::string_view complete, submitted;
        if (!cached || !native_string_view(reinterpret_cast<const NativeString *>(cached),
                    &complete, 65536) || !native_string_view(source, &submitted, 4096) ||
                complete.find_first_of("\r\n") != std::string_view::npos ||
                complete.find('\0') != std::string_view::npos) return;
        // Native 176cde compares length with R-L-15, then retains R-L-16
        // bytes and replaces the last three with dots. Prove both the full
        // and shortened forms against this row's cached string.
        const size_t capacity = static_cast<size_t>(right - left - 16);
        std::string expected(complete);
        if (expected.size() > capacity) {
            expected.resize(capacity);
            if (capacity > 3) expected.replace(capacity - 3, 3, "...");
        }
        if (submitted != expected) return;
        row.complete_source.assign(complete);
        // The name starts at L+7, so its exclusive allocated edge is R-9.
        // This keeps the two native action buttons outside the text column.
        row.character_relation_right = graphics->screenx + static_cast<int32_t>(capacity);
        row.caption_source = true;
        if (complete.empty() || row.unit_identity_target) return;
        if (const auto identity = native_unit_identity_source_binding(complete, owner)) {
            row.unit_identity_target = identity->ready ? identity->target : std::string{};
            row.unit_identity_owner = identity->unit_owner;
            row.unit_identity_english = identity->english_name;
            row.unit_identity_header = identity->character_header;
            row.unit_identity_ready = identity->ready;
            row.unit_identity_semantic_key = identity->semantic_key;
            if (!identity->ready)
                row.unit_identity_pending = std::make_shared<const NativeUnitIdentitySource>(*identity);
            return;
        }
        NativeBorrowedVector<uintptr_t> figures;
        NativeBorrowedVector<int32_t> units;
        if (!native_history_read_vector(native_character_sheet_field(sheet, 0x18a0, "rel_hf"), figures) ||
                !native_history_copy(native_character_sheet_field(sheet, 0x1888, "rel_unid"), units) ||
                !units.valid(65536) || figures.size() != names.size() ||
                units.size() != names.size()) return;
        int32_t unit_id = -1;
        if (!native_history_copy(reinterpret_cast<uintptr_t>(units.begin) +
                static_cast<size_t>(index) * sizeof(int32_t), unit_id)) return;
        uintptr_t unit = 0, name = 0;
        if (unit_id >= 0) {
            if (!native_history_material_find_id(native_history_global(0x23e50b0), 0x130,
                    unit_id, unit) || !unit) return;
        } else {
            const uintptr_t figure = native_history_vector_at(figures, static_cast<size_t>(index));
            int32_t figure_id = -1;
            if (!figure || figure > UINTPTR_MAX - 0xe4 ||
                    !native_history_copy(native_history_object_field(figure, "historical_figure", 0xe0),
                        figure_id) || figure_id < 0 ||
                    native_history_find_subject(hook.base, NativeHistoryObjectKind::Figure,
                        figure_id) != figure) return;
            name = native_history_object_field(figure, "historical_figure", 0x38);
        }
        if (const auto target = translate_native_unit_identity_reference(unit, name, complete)) {
            row.unit_identity_target = *target;
            row.unit_identity_owner = unit;
            row.unit_identity_ready = true;
        }
    } catch (...) {
        // The original draw and any already proven geometry remain intact.
    }
#else
    (void)row;
    (void)graphics;
    (void)source;
    (void)caller;
    (void)width;
#endif
}

static NativeString *capture_native_character_relation_identity(NativeString *output,
        const NativeString *source
#ifndef _WIN32
        , const void *sheet, size_t index
#endif
        ) {
    NativeInputCallbackScope callback;
    const auto original = g_native_character_relations_hook.copy;
#ifdef _WIN32
    g_native_character_relation_identity = {};
#endif
    NativeString *result = original
        ? callback.call_native([&] { return original(output, source); }) : output;
#ifdef _WIN32
    try {
        const auto row = native_character_relation_name_index(g_native_character_drawing_sheet, source);
        if (row) {
            g_native_character_relation_identity = {g_native_character_drawing_sheet,
                reinterpret_cast<uintptr_t>(output), reinterpret_cast<uintptr_t>(source), *row};
            remember_native_character_relation_identity(output, source,
                reinterpret_cast<const void *>(g_native_character_drawing_sheet), *row);
        }
    } catch (...) { g_native_character_relation_identity = {}; }
#else
    remember_native_character_relation_identity(output, source, sheet, index);
#endif
    return result;
}

static void capture_native_character_relation(graphicst *graphics, const NativeString *source,
#ifdef _WIN32
        NativeJustification justification, int width) {
#else
        const void *sheet, size_t index) {
    const auto justification = static_cast<NativeJustification>(0);
    const int width = 0;
#endif
    auto *const native_graphics = graphics;
    graphics = native_graphics_view(graphics);
    NativeInputCallbackScope callback;
    const auto original = g_native_character_relations_hook.draw;
    try {
        const auto capture = [&] {
            const uintptr_t base = g_native_character_relations_hook.base;
#ifdef _WIN32
            if (justification != static_cast<NativeJustification>(0) || width != 0) return;
            const auto identity = native_character_relation_identity_for(source);
            if (!identity) return;
            const uintptr_t object = identity->sheet;
            const size_t row_index = identity->index;
#else
            const uintptr_t object = reinterpret_cast<uintptr_t>(sheet);
            const size_t row_index = index;
#endif
            std::string_view text;
            if (!base || !object ||
                !graphics || !graphics->screen || !g_overlay.translation_enabled() ||
                graphics->dimx <= 0 || graphics->dimx > 1000 ||
                graphics->dimy <= 0 || graphics->dimy > 1000 ||
                graphics->screenx < 0 || graphics->screenx >= graphics->dimx ||
                graphics->screeny < 0 || graphics->screeny >= graphics->dimy ||
                !native_string_view(source, &text, 256) || text.empty() ||
                text.find_first_of("\r\n") != std::string_view::npos ||
                text.find('\0') != std::string_view::npos) return;
            remember_native_character_relation(graphics->screenx, graphics->screeny,
                text, {}, graphics);

            int32_t object_type = -1, page = -1, unit_id = -1;
            // 1a1cb0 dispatches object+8 == 0 to its unit lookup; its second
            // switch dispatches object+c0 == 6 to the relationship builder.
            if (!native_history_copy(native_character_sheet_field(object, 8, "active_sheet", 4), object_type) || object_type != 0 ||
                !native_history_copy(native_character_sheet_field(object, 0xc0, "active_sub_tab", 4), page) || page != 6 ||
                !native_history_copy(native_character_sheet_field(object, 0xc, "active_id", 4), unit_id) || unit_id < 0) return;

            NativeBorrowedVector<int16_t> relations;
            NativeBorrowedVector<uintptr_t> relatives;
            if (!native_history_copy(native_character_sheet_field(object, 0x1870, "relation_f"), relations) || !relations.valid(65536) ||
                !native_history_read_vector(native_character_sheet_field(object, 0x18a0, "rel_hf"), relatives) ||
                relatives.size() != relations.size() || relatives.size() > 65536 ||
                row_index >= relations.size()) return;
            int16_t relation = -1;
            if (!native_history_copy(reinterpret_cast<uintptr_t>(relations.begin) +
                    row_index * sizeof(int16_t), relation) || relation < 0 || relation > 71) return;
            const auto fallback = native_character_kinship_fallback(relation);
            remember_native_character_relation(graphics->screenx, graphics->screeny,
                text, fallback, graphics);
            // These native enums already specify their complete relationship.
            if (relation < 49) return;

            // The parallel HF-pointer vector survives even when the relative
            // has no current unit. The builder inserts it beside the relation
            // at 1a3d39/1a3d8c, preserving the exact displayed row ordering.
            const uintptr_t relative = native_history_vector_at(relatives, row_index);
            uintptr_t unit = 0;
            int32_t subject_id = -1, relative_id = -1;
            if (!relative || relative > UINTPTR_MAX - 0xe4 ||
                !native_history_copy(native_history_object_field(relative, "historical_figure", 0xe0), relative_id) || relative_id < 0 ||
                native_history_find_subject(base, NativeHistoryObjectKind::Figure, relative_id) != relative ||
                !native_history_material_find_id(native_history_global(0x23e50b0), 0x130, unit_id, unit) ||
                !unit || unit > UINTPTR_MAX - 0xc34 ||
                !native_history_copy(native_history_object_field(unit, "unit", 0xc30), subject_id) || subject_id < 0) return;
            const uintptr_t subject = native_history_find_subject(
                base, NativeHistoryObjectKind::Figure, subject_id);
            if (!subject) return;
            const auto target = native_character_kinship_term(subject, relative, relation);
            if (!target || target->empty()) return;
            remember_native_character_relation(graphics->screenx, graphics->screeny,
                text, *target, graphics);
        };
        capture();
    } catch (...) {
        // A missing record or allocation must never interrupt the native row.
    }
    // Capture eligibility never changes the game's actual draw arguments.
    if (original) callback.call_native([&] {
        native_graphics_call(original, graphics ? graphics : native_graphics, source, justification, width);
    });
}

enum class NativeCharacterOverviewCount { Lovers, Children, Pets };

#ifdef _WIN32
struct NativeCharacterOverviewIdentity {
    uintptr_t sheet = 0, output = 0;
    int32_t count = -1;
};
static thread_local std::array<NativeCharacterOverviewIdentity, 3> g_native_character_overview_identity;

template<NativeCharacterOverviewCount Kind>
static void capture_native_character_overview_number(int32_t count, NativeString *output) {
    NativeInputCallbackScope callback;
    constexpr auto index = static_cast<size_t>(Kind);
    g_native_character_overview_identity[index] = {};
    const auto original = g_native_character_relations_hook.count_format;
    if (!original) return;
    callback.call_native([&] { original(count, output); });
    if (g_native_character_drawing_sheet && output && count >= 2)
        g_native_character_overview_identity[index] = {
            g_native_character_drawing_sheet, reinterpret_cast<uintptr_t>(output), count};
}
#endif

template<NativeCharacterOverviewCount Kind>
static void capture_native_character_overview_count(graphicst *graphics,
#ifdef _WIN32
        const NativeString *source, NativeJustification justification, int width) {
#else
        const NativeString *source, int32_t count) {
    const auto justification = static_cast<NativeJustification>(0);
    const int width = 0;
#endif
    auto *const native_graphics = graphics;
    graphics = native_graphics_view(graphics);
    NativeInputCallbackScope callback;
    const auto original = g_native_character_relations_hook.draw;
#ifdef _WIN32
    constexpr auto index = static_cast<size_t>(Kind);
    const auto identity = g_native_character_overview_identity[index];
    g_native_character_overview_identity[index] = {};
    const int32_t count = identity.sheet && identity.sheet == g_native_character_drawing_sheet &&
        identity.output == reinterpret_cast<uintptr_t>(source) ? identity.count : -1;
#endif
    try {
        const auto capture = [&] {
#ifdef _WIN32
            if (justification != static_cast<NativeJustification>(0) || width != 0) return;
#endif
            std::string_view text;
            if (!graphics || !graphics->screen || !g_overlay.translation_enabled() ||
                    graphics->dimx <= 0 || graphics->dimx > 1000 ||
                    graphics->dimy <= 0 || graphics->dimy > 1000 ||
                    graphics->screenx < 0 || graphics->screenx >= graphics->dimx ||
                    graphics->screeny < 0 || graphics->screeny >= graphics->dimy ||
                    count < 2 || !native_string_view(source, &text, 256) || text.empty()) return;
            // The family branches count historical-figure links of type 3
            // (children) and type 5 (lovers). The pet branch counts units
            // whose pet-owner ID is the current unit. The number formatter
            // supplies its actual count and destination string. A lone
            // relative/pet uses its identity branch; zero draws no row.
            // The source supplies only the native draw span, never the kind
            // or number. See data/extracted/character-overview-family.
            constexpr std::string_view suffix =
                Kind == NativeCharacterOverviewCount::Children ? " 个孩子" :
                Kind == NativeCharacterOverviewCount::Pets ? " 只宠物" : " 位爱人";
            const std::string target = std::to_string(count) +
                std::string(suffix);
            remember_native_character_relation(graphics->screenx, graphics->screeny,
                text, target, graphics, true);
        };
        capture();
    } catch (...) {
        // Preserve the original draw even if the overlay cannot allocate.
    }
    if (original) callback.call_native([&] {
        native_graphics_call(original, graphics ? graphics : native_graphics, source, justification, width);
    });
}

static bool native_character_relations_hook_active() {
    const auto &hook = g_native_character_relations_hook;
    if (hook.code.active()) return true;
#ifdef _WIN32
    for (const auto &pair : hook.overview) if (pair.active()) return true;
#endif
    return false;
}

static void native_character_relations_release_inactive_state() {
    auto &hook = g_native_character_relations_hook;
    if (!hook.code.active()) {
        hook.copy = nullptr;
#ifdef _WIN32
        g_native_character_relation_identity = {};
#endif
    }
#ifdef _WIN32
    bool counts_active = false;
    for (size_t index = 0; index < hook.overview.size(); ++index) {
        if (hook.overview[index].active()) counts_active = true;
        else g_native_character_overview_identity[index] = {};
    }
    if (!counts_active) hook.count_format = nullptr;
#else
    if (!hook.code.active()) hook.count_format = nullptr;
#endif
    // A failed restore retains the originals used by any remaining callback.
    // Only the final transaction's successful removal retires shared state.
    if (!native_character_relations_hook_active()) {
        hook.draw = nullptr;
        hook.base = 0;
        clear_native_character_relations();
    }
}

static bool uninstall_native_character_relations_hook() {
    if (!native_callbacks_idle()) return false;
    auto &hook = g_native_character_relations_hook;
    bool restored = true;
    const auto restore = [&](NativeCallHook &code, const char *label) {
        if (!code.active()) return;
        try { if (!code.uninstall(label)) restored = false; }
        catch (...) { restored = false; }
    };
    restore(hook.code, "Character relationship capture restore");
#ifdef _WIN32
    for (auto &pair : hook.overview)
        restore(pair, "Character overview count pair restore");
#endif
    native_character_relations_release_inactive_state();
    return restored && !native_character_relations_hook_active();
}

#ifdef _WIN32
static bool install_native_character_relation_pair(NativeCallHook &code,
        uintptr_t base, std::vector<NativeCall> &calls, const char *label,
        bool dependencies, bool &restore_failed) {
    if (code.installed) return true;
    const auto restore = [&] {
        if (!code.active()) return true;
        try { return code.uninstall(label); } catch (...) { return false; }
    };
    if (!restore()) { restore_failed = true; return false; }
    bool installed = false;
    try {
        // NativeCallHook validates both E8/callee identities before publishing
        // either patch. A formatter without its matching draw is never kept.
        installed = dependencies && native_reference_calls(calls, 0) &&
            code.install(base, calls, label);
    } catch (...) {}
    if (installed) return true;
    if (!restore() || code.active()) restore_failed = true;
    report_native_patch_error("WARN", label,
        "complete call pair unavailable; independent character captures remain enabled");
    return false;
}

static bool install_native_character_relations_hook() {
    auto &hook = g_native_character_relations_hook;
    const uintptr_t base = native_history_profile_base();
    const auto draw = reinterpret_cast<NativeCaptionDrawFn>(native_pe_address(base, 0xad9960));
    const auto copy = reinterpret_cast<NativeCharacterRelationCopyFn>(native_pe_address(base, 0x6f5d0));
    const auto count_format = reinterpret_cast<NativeCharacterCountFormatFn>(native_pe_address(base, 0x52c130));
    if (!base || !draw || (native_character_relations_hook_active() &&
            (hook.base != base || hook.draw != draw || (hook.copy && hook.copy != copy) ||
             (hook.count_format && hook.count_format != count_format)))) return false;
    // NativeCallHook retains each proved E8/callee contract below. The
    // callbacks additionally validate their actual draw parameters, the
    // formatter/copy destination and the entry-owned sheet. Row allocation
    // has its own complete Frame contract; no old private stack encoding is
    // an installation prerequisite for the independent count/title capture.
    if (!native_character_relations_hook_active()) clear_native_character_relations();
    hook.base = base;
    hook.draw = draw;
    hook.copy = copy;
    hook.count_format = count_format;
    std::vector<NativeCall> relations = {
        {0x176ca6, 0x6f5d0,
        reinterpret_cast<const void *>(&capture_native_character_relation_identity)},
        {0x176f31, 0xad9960,
        reinterpret_cast<const void *>(&capture_native_character_relation)}};
    std::vector<NativeCall> lovers = {
        // ECX is the integer, RDX the native string. These calls discard the
        // formatter result and then append their original English suffix.
        {0x1603b5, 0x52c130,
        reinterpret_cast<const void *>(&capture_native_character_overview_number<NativeCharacterOverviewCount::Lovers>)},
        {0x1603e3, 0xad9960,
        reinterpret_cast<const void *>(&capture_native_character_overview_count<NativeCharacterOverviewCount::Lovers>)}};
    std::vector<NativeCall> children = {
        {0x160593, 0x52c130,
        reinterpret_cast<const void *>(&capture_native_character_overview_number<NativeCharacterOverviewCount::Children>)},
        {0x1605c1, 0xad9960,
        reinterpret_cast<const void *>(&capture_native_character_overview_count<NativeCharacterOverviewCount::Children>)}};
    std::vector<NativeCall> pets = {
        {0x16087f, 0x52c130,
        reinterpret_cast<const void *>(&capture_native_character_overview_number<NativeCharacterOverviewCount::Pets>)},
        {0x1608ad, 0xad9960,
        reinterpret_cast<const void *>(&capture_native_character_overview_count<NativeCharacterOverviewCount::Pets>)}};
    bool restore_failed = false;
    const bool relation_ready = install_native_character_relation_pair(hook.code, base, relations,
        "Native character relationship identity and title capture", copy != nullptr, restore_failed);
    const bool lovers_ready = install_native_character_relation_pair(hook.overview[0], base, lovers,
        "Native character overview lovers count", count_format != nullptr, restore_failed);
    const bool children_ready = install_native_character_relation_pair(hook.overview[1], base, children,
        "Native character overview children count", count_format != nullptr, restore_failed);
    const bool pets_ready = install_native_character_relation_pair(hook.overview[2], base, pets,
        "Native character overview pets count", count_format != nullptr, restore_failed);
    native_character_relations_release_inactive_state();
    if (relation_ready) log_line("INFO", "Enabled native character relationship identity and title capture");
    if (lovers_ready || children_ready || pets_ready)
        log_line("INFO", "Enabled independently bound character overview count pairs");
    return !restore_failed && (relation_ready || lovers_ready || children_ready || pets_ready);
}
#else
#include "native_character_relations_search_profile_elf.inc"
#endif
