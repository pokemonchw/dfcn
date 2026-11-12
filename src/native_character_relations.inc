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
struct NativeCharacterRelationsHook {
    NativeCallHook code;
    NativeCaptionDrawFn draw = nullptr;
    NativeCharacterRelationCopyFn copy = nullptr;
    uintptr_t base = 0;
};
static NativeCharacterRelationsHook g_native_character_relations_hook;

static uintptr_t native_character_sheet_field(uintptr_t sheet, size_t legacy,
        std::string_view member) {
#ifdef _WIN32
    return sheet + legacy;
#else
    return native_history_object_member(sheet, "view_sheets_interfacest", member);
#endif
}

static void remember_native_character_relation_identity(NativeString *output,
        const NativeString *source, const void *sheet, size_t index) {
    try {
        const auto capture = [&] {
            const uintptr_t base = g_native_character_relations_hook.base;
            const uintptr_t object = reinterpret_cast<uintptr_t>(sheet);
            std::string_view text;
            if (!base || !object || object > UINTPTR_MAX - 0x18b8 ||
                    !g_overlay.translation_enabled() ||
                    !native_string_view(output, &text, 65536) || text.empty()) return;
            int32_t object_type = -1, page = -1;
            if (!native_history_copy(object + 8, object_type) || object_type != 0 ||
                    !native_history_copy(object + 0xc0, page) || page != 6) return;
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
        const graphicst *graphics, const NativeString *source, uintptr_t caller) {
    try {
        const auto &hook = g_native_character_relations_hook;
        const uintptr_t owner = reinterpret_cast<uintptr_t>(source);
        if (!hook.base || !hook.code.active() ||
#ifdef _WIN32
                caller != native_reference_address(hook.base, 0x176dc5) ||
                !graphics || !source || row.top_layer || owner < 0x3a00 ||
#else
                caller != native_elf_5317_address(0x13fa3da) ||
                !graphics || !source || row.top_layer || owner > UINTPTR_MAX - 0xf0 ||
#endif
                graphics->dimx <= 0 || graphics->dimx > 1000 ||
                graphics->dimy <= 0 || graphics->dimy > 1000) return;
        uintptr_t sheet = 0;
        size_t index = 0, capacity = 0;
        int column_right = -1;
#ifdef _WIN32
        // The source is the renderer's [rsp+3a00] string. These slots are
        // read from that same frame, not from our callback's current stack.
        const uintptr_t frame = owner - 0x3a00;
        if (frame > UINTPTR_MAX - 0xb268) return;
        int32_t left = -1, right = -1, top = -1, native_index = -1;
        if (!native_history_copy(frame + 0x2c8, left) ||
                !native_history_copy(frame + 0x548, right) ||
                !native_history_copy(frame + 0x16c, top) ||
                !native_history_copy(frame + 0x140, native_index) ||
                !native_history_copy(frame + 0xb260, sheet) ||
                left < 0 || left >= graphics->dimx || right <= left ||
                right >= graphics->dimx || right - left <= 16 ||
                top < 0 || top >= graphics->dimy - 2 || native_index < 0 ||
                graphics->screenx != left + 7 || graphics->screeny != top + 1) return;
        index = static_cast<size_t>(native_index);
        capacity = static_cast<size_t>(right - left - 16);
        column_right = right - 9;
#else
        // The ELF producer keeps this copied name at rbp-f0 and its
        // precise resize allocation at rbp-300. Its parallel-vector index
        // is stored as a two-byte stride at rbp-2b0.
        const uintptr_t frame = owner + 0xf0;
        int32_t left = -1, top = -1, allocated = -1;
        uintptr_t doubled_index = 0;
        if (frame < 0x300 || !native_history_copy(frame - 0x278, left) ||
                !native_history_copy(frame - 0x280, top) ||
                !native_history_copy(frame - 0x300, allocated) ||
                !native_history_copy(frame - 0x288, sheet) ||
                !native_history_copy(frame - 0x2b0, doubled_index) ||
                (doubled_index & 1) || doubled_index / 2 >= 65536 ||
                left < 0 || left >= graphics->dimx - 9 ||
                top < 0 || top >= graphics->dimy - 2 || allocated <= 0 ||
                allocated > graphics->dimx - left - 9 ||
                graphics->screenx != left + 9 || graphics->screeny != top + 1) return;
        index = static_cast<size_t>(doubled_index / 2);
        capacity = static_cast<size_t>(allocated);
        column_right = left + 9 + allocated;
#endif
        if (!sheet || sheet > UINTPTR_MAX - 0x18b8) return;
        int32_t object_type = -1, page = -1;
        NativeBorrowedVector<uintptr_t> names;
        if (!native_history_copy(sheet + 8, object_type) || object_type != 0 ||
                !native_history_copy(sheet + 0xc0, page) || page != 6 ||
                !native_history_read_vector(native_character_sheet_field(
                    sheet, 0x1840, "rel_name"), names) || names.size() > 65536 ||
                index >= names.size()) return;
        const uintptr_t cached = native_history_vector_at(names, index);
        std::string_view complete, submitted;
        if (!cached || !native_string_view(reinterpret_cast<const NativeString *>(cached),
                    &complete, 65536) || !native_string_view(source, &submitted, 4096) ||
                complete.find_first_of("\r\n") != std::string_view::npos ||
                complete.find('\0') != std::string_view::npos) return;
        // Native 176cde compares length with R-L-15, then retains R-L-16
        // bytes and replaces the last three with dots. Prove both the full
        // and shortened forms against this row's cached string.
        std::string expected(complete);
        if (expected.size() > capacity) {
            expected.resize(capacity);
            if (capacity > 3) expected.replace(capacity - 3, 3, "...");
        }
        if (submitted != expected) return;
        row.complete_source.assign(complete);
        // Keep the native action buttons outside the actual name allocation.
        row.character_relation_right = column_right;
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
}

static NativeString *capture_native_character_relation_identity(NativeString *output,
        const NativeString *source, const void *sheet, size_t index) {
    NativeInputCallbackScope callback;
    const auto original = g_native_character_relations_hook.copy;
    NativeString *result = original
        ? callback.call_native([&] { return original(output, source); }) : output;
    remember_native_character_relation_identity(output, source, sheet, index);
    return result;
}

static void capture_native_character_relation(graphicst *graphics, const NativeString *source,
        const void *sheet, size_t index) {
    NativeInputCallbackScope callback;
    const auto original = g_native_character_relations_hook.draw;
    try {
        const auto capture = [&] {
            const uintptr_t base = g_native_character_relations_hook.base;
            const uintptr_t object = reinterpret_cast<uintptr_t>(sheet);
            std::string_view text;
            if (!base || !object || object > UINTPTR_MAX - 0x18b8 ||
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
            if (!native_history_copy(object + 0x8, object_type) || object_type != 0 ||
                !native_history_copy(object + 0xc0, page) || page != 6 ||
                !native_history_copy(object + 0xc, unit_id) || unit_id < 0) return;

            NativeBorrowedVector<int16_t> relations;
            NativeBorrowedVector<uintptr_t> relatives;
            if (!native_history_copy(native_character_sheet_field(object, 0x1870, "relation_f"), relations) || !relations.valid(65536) ||
                !native_history_read_vector(native_character_sheet_field(object, 0x18a0, "rel_hf"), relatives) ||
                relatives.size() != relations.size() || relatives.size() > 65536 ||
                index >= relations.size()) return;
            int16_t relation = -1;
            if (!native_history_copy(reinterpret_cast<uintptr_t>(relations.begin) +
                    index * sizeof(int16_t), relation) || relation < 0 || relation > 71) return;
            const auto fallback = native_character_kinship_fallback(relation);
            remember_native_character_relation(graphics->screenx, graphics->screeny,
                text, fallback, graphics);
            // These native enums already specify their complete relationship.
            if (relation < 49) return;

            // The parallel HF-pointer vector survives even when the relative
            // has no current unit. The builder inserts it beside the relation
            // at 1a3d39/1a3d8c, preserving the exact displayed row ordering.
            const uintptr_t relative = native_history_vector_at(relatives, index);
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
    // Call the actual addst entry, including its existing shared caption
    // hook. The original caller passes both justification and width as zero.
    if (original) callback.call_native([&] { original(graphics, source, static_cast<NativeJustification>(0), 0); });
}

enum class NativeCharacterOverviewCount { Lovers, Children, Pets };

template<NativeCharacterOverviewCount Kind>
static void capture_native_character_overview_count(graphicst *graphics,
        const NativeString *source, int32_t count) {
    NativeInputCallbackScope callback;
    const auto original = g_native_character_relations_hook.draw;
    try {
        const auto capture = [&] {
            std::string_view text;
            if (!graphics || !graphics->screen || !g_overlay.translation_enabled() ||
                    graphics->dimx <= 0 || graphics->dimx > 1000 ||
                    graphics->dimy <= 0 || graphics->dimy > 1000 ||
                    graphics->screenx < 0 || graphics->screenx >= graphics->dimx ||
                    graphics->screeny < 0 || graphics->screeny >= graphics->dimy ||
                    count < 2 || !native_string_view(source, &text, 256) || text.empty()) return;
            // The family branches count historical-figure links of type 3
            // (children) and type 5 (lovers). The pet branch counts units
            // whose pet-owner ID is the current unit. Each relay reads the
            // exact int32 accumulator from the native caller frame. A lone
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
        original(graphics, source, static_cast<NativeJustification>(0), 0);
    });
}

static bool native_character_relations_hook_active() {
    return g_native_character_relations_hook.code.active();
}

static bool uninstall_native_character_relations_hook() {
    if (!native_callbacks_idle()) return false;
    auto &hook = g_native_character_relations_hook;
    if (!hook.code.uninstall("Character relationship capture restore")) return false;
    hook.draw = nullptr;
    hook.copy = nullptr;
    hook.base = 0;
    clear_native_character_relations();
    return true;
}

#ifdef _WIN32
static bool install_native_character_relations_hook() {
    auto &hook = g_native_character_relations_hook;
    if (hook.code.installed) return true;
    if (native_character_relations_hook_active() && !uninstall_native_character_relations_hook())
        return false;
    struct InstallGuard {
        bool committed = false;
        ~InstallGuard() {
            if (!committed) {
                try { uninstall_native_character_relations_hook(); } catch (...) {}
            }
        }
    } guard;
    const uintptr_t base = native_history_profile_base();
    if (!base) return false;
    const NativeCaptionSignature signatures[] = {
        // Overview accumulators and their number-formatter arguments share
        // this caller frame in both PE editions. Type 3 increments children
        // at +da0; type 5 increments lovers at +d9c; matched pet owners
        // increment pets at +da4.
        {0x1602b8, {0x8b,0x84,0x24,0xa0,0x0d,0x00,0x00,0xff,0xc0,
            0x89,0x84,0x24,0xa0,0x0d,0x00,0x00}},
        {0x160330, {0x8b,0x84,0x24,0x9c,0x0d,0x00,0x00,0xff,0xc0,
            0x89,0x84,0x24,0x9c,0x0d,0x00,0x00}},
        {0x1607fa, {0x8b,0x84,0x24,0xa4,0x0d,0x00,0x00,0xff,0xc0,
            0x89,0x84,0x24,0xa4,0x0d,0x00,0x00}},
        {0x1603a6, {0x48,0x8d,0x94,0x24,0x60,0x41,0x00,0x00,
            0x8b,0x8c,0x24,0x9c,0x0d,0x00,0x00}},
        {0x160584, {0x48,0x8d,0x94,0x24,0x40,0x42,0x00,0x00,
            0x8b,0x8c,0x24,0xa0,0x0d,0x00,0x00}},
        {0x160870, {0x48,0x8d,0x94,0x24,0x20,0x42,0x00,0x00,
            0x8b,0x8c,0x24,0xa4,0x0d,0x00,0x00}},
        // The three count rows draw their own stack strings with zero
        // justification/width, leaving R8 available to carry the count.
        {0x1603ce, {0x45,0x33,0xc9,0x45,0x33,0xc0,
            0x48,0x8d,0x94,0x24,0x60,0x41,0x00,0x00,
            0x48,0x8d,0x0d,0x0d,0xa0,0x4e,0x02,0xe8,0x78,0x95,0x97,0x00}},
        {0x1605ac, {0x45,0x33,0xc9,0x45,0x33,0xc0,
            0x48,0x8d,0x94,0x24,0x40,0x42,0x00,0x00,
            0x48,0x8d,0x0d,0x2f,0x9e,0x4e,0x02,0xe8,0x9a,0x93,0x97,0x00}},
        {0x160898, {0x45,0x33,0xc9,0x45,0x33,0xc0,
            0x48,0x8d,0x94,0x24,0x20,0x42,0x00,0x00,
            0x48,0x8d,0x0d,0x43,0x9b,0x4e,0x02,0xe8,0xae,0x90,0x97,0x00}},
        // Identity draw copies this exact row from sheet.names before resize.
        {0x176c6a, {0x48,0x8b,0x84,0x24,0x60,0xb2,0x00,0x00,
            0x48,0x05,0x40,0x18,0x00,0x00}},
        {0x176c80, {0x48,0x63,0x84,0x24,0x40,0x01,0x00,0x00}},
        {0x176c98, {0x48,0x8b,0x00,0x48,0x8b,0xd0,
            0x48,0x8d,0x8c,0x24,0x00,0x3a,0x00,0x00}},
        // The name draw uses this frame's L/T coordinates and R-L-16
        // allocation even when no resize occurs. Its return address owns
        // the complete relation row captured by the shared addst hook.
        {0x176cac, {0x8b,0x84,0x24,0xc8,0x02,0x00,0x00,0x83,0xc0,0x07,
            0x8b,0x8c,0x24,0x6c,0x01,0x00,0x00,0xff,0xc1,0x44,0x8b,0xc0,0x8b,0xd1,
            0x48,0x8d,0x0d,0x25,0x37,0x4d,0x02,0xe8,0x50,0x44,0xf4,0xff}},
        {0x176cde, {0x8b,0x8c,0x24,0xc8,0x02,0x00,0x00,
            0x8b,0x94,0x24,0x48,0x05,0x00,0x00,0x2b,0xd1,0x8b,0xca,0xff,0xc9,
            0x83,0xe9,0x0e,0x48,0x63,0xc9,0x48,0x3b,0xc1}},
        {0x176d01, {0x8b,0x84,0x24,0xc8,0x02,0x00,0x00,
            0x8b,0x8c,0x24,0x48,0x05,0x00,0x00,0x2b,0xc8,0x8b,0xc1,0xff,0xc8,
            0x83,0xe8,0x0f,0x89,0x84,0x24,0x54,0x0b,0x00,0x00}},
        {0x176dab, {0x45,0x33,0xc9,0x45,0x33,0xc0,
            0x48,0x8d,0x94,0x24,0x00,0x3a,0x00,0x00,
            0x48,0x8d,0x0d,0x30,0x36,0x4d,0x02,0xe8,0x9b,0x2b,0x96,0x00}},
        {0x1a39c0, {0x48,0x8d,0x86,0x88,0x18,0x00,0x00,
            0x48,0x89,0x45,0xe0}},
        // The current row uses this sheet pointer and signed 32-bit index.
        {0x176ecb, {0x48,0x8b,0x84,0x24,0x60,0xb2,0x00,0x00,
            0x48,0x05,0x70,0x18,0x00,0x00}},
        {0x176ee1, {0x48,0x63,0x84,0x24,0x40,0x01,0x00,0x00}},
        // Formatter, capitalization and draw keep the same stack string.
        {0x176ef9, {0x45,0x33,0xc9,0x45,0x33,0xc0,
            0x48,0x8d,0x94,0x24,0x00,0x3a,0x00,0x00,0x0f,0xb7,0x08,
            0xe8,0x71,0x36,0x5e,0x00}},
        {0x176f0f, {0x48,0x8d,0x8c,0x24,0x00,0x3a,0x00,0x00,
            0xe8,0x34,0x67,0x3b,0x00}},
        {0x176f1c, {0x45,0x33,0xc9,0x45,0x33,0xc0,
            0x48,0x8d,0x94,0x24,0x00,0x3a,0x00,0x00,
            0x48,0x8d,0x0d,0xbf,0x34,0x4d,0x02,0xe8,0x2a,0x2a,0x96,0x00}},
        // Relationship builder's parallel relation/HF vectors, and the
        // unit-to-HF ID load used by its original subject resolver.
        {0x1a39ad, {0x48,0x8d,0x86,0x70,0x18,0x00,0x00,
            0x48,0x89,0x45,0xd8,0x48,0x8b,0xc8}},
        {0x1a39d3, {0x48,0x8d,0x86,0xa0,0x18,0x00,0x00,
            0x48,0x89,0x45,0xa0,0x48,0x8b,0xc8}},
        {0x13b3090, {0x8b,0x91,0x30,0x0c,0x00,0x00}}
    };
    NativePatchPages readable;
    for (const auto &signature : signatures) {
        if (!collect_native_patch_pages(readable, native_pe_address(base, signature.address), signature.bytes.size(),
                native_patch_page_size(), true, "Character relationship identity") ||
            !native_pe_match(base, signature.address,
                signature.bytes.data(), signature.bytes.size())) {
            log_line("ERROR", "Native character relationship call/ABI identity mismatch");
            return false;
        }
    }
    clear_native_character_relations();
    hook.base = base;
    hook.draw = reinterpret_cast<NativeCaptionDrawFn>(native_pe_address(base, 0xad9960));
    hook.copy = reinterpret_cast<NativeCharacterRelationCopyFn>(native_pe_address(base, 0x6f5d0));
    // The relay is entered by CALL, so its RSP is eight bytes below the
    // caller frame. Preserve RCX/RDX; pass sheet and signed row index in the
    // otherwise-zero R8/R9. MOVSXD matches the original int32 index load.
    std::vector<NativeCall> calls = {
        // Each count relay reads its original int32 accumulator plus the
        // return-address adjustment. The distinct call site supplies the
        // relationship kind; no English caption participates in selection.
        {0x1603e3, 0xad9960,
        reinterpret_cast<const void *>(&capture_native_character_overview_count<NativeCharacterOverviewCount::Lovers>),
        {0x44,0x8b,0x84,0x24,0xa4,0x0d,0x00,0x00}},
        {0x1605c1, 0xad9960,
        reinterpret_cast<const void *>(&capture_native_character_overview_count<NativeCharacterOverviewCount::Children>),
        {0x44,0x8b,0x84,0x24,0xa8,0x0d,0x00,0x00}},
        {0x1608ad, 0xad9960,
        reinterpret_cast<const void *>(&capture_native_character_overview_count<NativeCharacterOverviewCount::Pets>),
        {0x44,0x8b,0x84,0x24,0xac,0x0d,0x00,0x00}},
        {0x176ca6, 0x6f5d0,
        reinterpret_cast<const void *>(&capture_native_character_relation_identity),
        {0x4c,0x8b,0x84,0x24,0x68,0xb2,0x00,0x00,
         0x4c,0x63,0x8c,0x24,0x48,0x01,0x00,0x00}},
        {0x176f31, 0xad9960,
        reinterpret_cast<const void *>(&capture_native_character_relation),
        {0x4c,0x8b,0x84,0x24,0x68,0xb2,0x00,0x00,
         0x4c,0x63,0x8c,0x24,0x48,0x01,0x00,0x00}}};
    if (!native_reference_calls(calls, 0) || !hook.code.install(base, calls, "Native character relationship capture")) return false;
    guard.committed = true;
    log_line("INFO", "Enabled native character relationship identity and title capture");
    return true;
}
#else
#include "native_character_relations_search_profile_elf.inc"
#endif
