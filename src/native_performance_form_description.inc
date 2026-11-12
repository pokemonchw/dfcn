// Rebuild the selected performance preview into isolated native strings. The
// caller first proves that a draw belongs to perform.color_box; these helpers
// never call the renderer or modify its cached rows, selection or game records.
// PE 870260's ID/row-index distinctions and complete productions are retained in
// data/extracted/adventure-performance-menu/*renderer* and *870260.asm.
static uintptr_t native_performance_form_subject(uintptr_t base, uintptr_t perform,
        int32_t type, int32_t id) {
    if (!base || !perform || id < 0) return 0;
    uintptr_t vector = 0;
    const char *indexed = nullptr;
    switch (type) {
    case 13: vector = native_history_global(0x24e7ec8); break;
    case 15: vector = native_history_global(0x24e7ef8); break;
    case 18: vector = native_history_global(0x24e7f28); break;
    case 14: case 16: case 19:
        vector = native_history_global(0x24e7cb8); break;
    case 17: {
        // 871cf3..871dae: the payload selects a role within the relevant
        // musical form. Only an instrument role with a RAW description owns
        // this card; voice roles and absent descriptions produce no prose.
        int32_t relevant = -1, relevant_id = -1;
        if (!native_history_copy(native_history_object_member(perform,
                    "adventure_interface_performst", "relevant_choice", sizeof(relevant)), relevant) ||
                !native_history_copy(native_history_object_member(perform,
                    "adventure_interface_performst", "relevant_id", sizeof(relevant_id)), relevant_id)) return 0;
        int32_t form_id = relevant_id;
        if (relevant == 16) {
            uintptr_t work = 0;
            if (!native_history_find_structure_id(native_history_global(0x24e7cb8), 0,
                    relevant_id, work) || !work ||
                    !native_history_copy(work + 0x6c, form_id)) return 0;
        } else if (relevant != 15) return 0;
        uintptr_t form = 0;
        NativeBorrowedVector<uintptr_t> parts, instruments;
        if (!native_history_find_structure_id(native_history_global(0x24e7ef8), 0,
                    form_id, form) || !form ||
                !native_history_read_vector(form + 0xa0, parts) ||
                parts.size() > 65536 || static_cast<size_t>(id) >= parts.size()) return 0;
        const uintptr_t part = native_history_vector_at(parts, static_cast<size_t>(id));
        int32_t instrument = -1;
        if (!part || !native_history_copy(part, instrument) || instrument < 0 ||
                !native_history_read_vector(native_history_global(0x24ecdf8), instruments) ||
                instruments.size() > 65536 ||
                static_cast<size_t>(instrument) >= instruments.size()) return 0;
        return native_history_vector_at(instruments, static_cast<size_t>(instrument));
    }
    // These payloads are indices into the actual menu's pointer vectors,
    // unlike the native IDs used by the six story/performance branches above.
    case 31: indexed = "poetic_form"; break;
    case 33: indexed = "musical_form"; break;
    case 35: indexed = "dance_form"; break;
    case 39: indexed = "write_wc"; break;
    default: return 0;
    }
    if (indexed) {
        NativeBorrowedVector<uintptr_t> values;
        if (!native_history_read_vector(native_history_object_member(perform,
                "adventure_interface_performst", indexed, sizeof(values)), values) ||
                values.size() > 65536 || static_cast<size_t>(id) >= values.size()) return 0;
        return native_history_vector_at(values, static_cast<size_t>(id));
    }
    uintptr_t subject = 0;
    return vector && native_history_find_structure_id(vector, 0, id, subject) ? subject : 0;
}

static bool recover_native_performance_form_source(uintptr_t base, uintptr_t subject,
        int32_t type, NativeString *source) {
    if (!base || !subject || !source) return false;
    std::string_view prefix;
    if (!native_string_view(source, &prefix, kNativeHistorySourceLimit) ||
            prefix != "[C:6:0:1]") return false;
    using FormFn = void (*)(void *, NativeString *);
    using ContentFn = void (*)(void *, NativeString *, int32_t);
    using CountedFn = NativeString *(*)(NativeString *, const char *, size_t);
    using NameFn = void (*)(void *, NativeString *, bool, int32_t);
    using OriginalNameFn = void (*)(void *, NativeString *);
    using FigureNameObjectFn = void *(*)(void *);
    const auto append = reinterpret_cast<CountedFn>(
        native_history_page_address(NativeHistoryPageSymbol::CountedAppend));
    const auto name = reinterpret_cast<NameFn>(
        native_history_page_address(NativeHistoryPageSymbol::Name));
    if (!append || !name) return false;
    const auto add = [&](std::string_view text) {
        if (!text.empty()) append(source, text.data(), text.size());
    };
    if (type == 17) {
        std::string description;
        if (!native_history_copy_string(subject + 0x278, description) || description.empty()) return false;
        add(description);
        return true;
    }
    // Literal addresses are intentional: the normal PE binding generator
    // resolves each complete helper entry independently for Steam/classic.
#ifdef _WIN32
    const auto poetic = reinterpret_cast<FormFn>(native_pe_address(base, 0xe76400));
    const auto musical = reinterpret_cast<FormFn>(native_pe_address(base, 0xdd5ce0));
    const auto dance = reinterpret_cast<FormFn>(native_pe_address(base, 0x4ea820));
    const auto content = reinterpret_cast<ContentFn>(native_pe_address(base, 0xcc5d50));
#else
    // 53.17 perform renderer 1186d80's actual form and work producers.
    const auto poetic = reinterpret_cast<FormFn>(native_elf_5317_address(0x1e8fdd0));
    const auto musical = reinterpret_cast<FormFn>(native_elf_5317_address(0x1dea170));
    const auto dance = reinterpret_cast<FormFn>(native_elf_5317_address(0x18daf20));
    const auto content = reinterpret_cast<ContentFn>(native_elf_5317_address(0xe77b80));
#endif
    const auto form_producer = [&](int32_t kind) -> FormFn {
        return kind == 0 ? poetic : kind == 1 ? musical : kind == 2 ? dance : nullptr;
    };
    const auto form_vector = [&](int32_t kind) -> uintptr_t {
        return kind == 0 ? native_history_global(0x24e7ec8) :
            kind == 1 ? native_history_global(0x24e7ef8) :
            kind == 2 ? native_history_global(0x24e7f28) : 0;
    };
    const auto append_form_name = [&](uintptr_t form) {
        NativeHistoryPageString label;
        name(reinterpret_cast<void *>(form + 8), &label.value, true, 0);
        std::string_view text;
        if (!native_string_view(&label.value, &text, kNativeHistoryStringLimit)) return false;
        add(text);
        return true;
    };
    const auto append_form = [&](uintptr_t form, int32_t kind) {
        const auto producer = form_producer(kind);
        if (!producer) return false;
        producer(reinterpret_cast<void *>(form), source);
        return true;
    };
    switch (type) {
    case 13: case 31: return append_form(subject, 0);
    case 15: case 33: return append_form(subject, 1);
    case 18: case 35: return append_form(subject, 2);
    case 14: case 16: case 19: case 39: break;
    default: return false;
    }
    if (!content) return false;
    std::string title;
    int32_t form_id = -1;
    if (!native_history_copy_string(subject + 8, title) ||
            !native_history_copy(subject + 0x6c, form_id)) return false;

    if (type != 39) {
        // 871883..871981 / 871bb3..871cc5 / 87204a..872154.
        // A missing form changes only its name and the final appended form
        // document. The native work's full content is present in both branches.
        const int32_t kind = type == 14 ? 0 : type == 16 ? 1 : 2;
        uintptr_t form = 0;
        if (!native_history_find_structure_id(form_vector(kind), 0, form_id, form)) return false;
        add(title);
        add(" is an example of ");
        if (form) {
            if (!form_producer(kind) || !append_form_name(form)) return false;
        } else add(kind == 0 ? "poetry" : kind == 1 ? "musical composition" : "choreography");
        add(".  ");
        content(reinterpret_cast<void *>(subject), source, 0);
        if (form) {
            add("[B]");
            return append_form(form, kind);
        }
        return true;
    }

    // 8723a4..872905: all 26 genre destinations, titled a/an and untitled
    // prefixes, the independently optional author and the complete content.
    static constexpr const char *genres[] = {
        "manual", "guide", "chronicle", "short story", "novel", "biography",
        "autobiography", "poem", "play", "letter", "essay", "dialog",
        "musical composition", "choreography", "comparative biography",
        "biographical dictionary", "genealogy", "encyclopedia", "cultural history",
        "cultural comparison", "alternate history", "treatise on technological evolution",
        "dictionary", "star chart", "star catalogue", "atlas"};
    int32_t genre = -1, author_id = -1;
    if (!native_history_copy(subject + 0x68, genre) ||
            !native_history_copy(subject + 0xa0, author_id)) return false;
    if (!title.empty()) {
        add(title);
        add(" is ");
        // These five entries select the native article table's second branch;
        // out-of-range genres retain its default article and no genre noun.
        add(genre == 6 || genre == 10 || genre == 17 || genre == 20 || genre == 25 ? "an" : "a");
    } else add("This is an untitled");
    add(" ");
    if (genre >= 0 && genre < static_cast<int32_t>(std::size(genres))) add(genres[genre]);
    if (author_id != -1) {
        uintptr_t author = 0;
        if (!native_history_find_structure_id(native_history_global(0x24f9d18),
                0xe0, author_id, author)) return false;
        if (author) {
            const auto figure_name = reinterpret_cast<FigureNameObjectFn>(
#ifdef _WIN32
                native_pe_address(base, 0xc0f660));
#else
                native_elf_5317_address(0x9b0370));
#endif
            const auto original_name = reinterpret_cast<OriginalNameFn>(
                native_history_page_address(NativeHistoryPageSymbol::OriginalName));
            if (!figure_name || !original_name) return false;
            add(", authored by ");
            NativeHistoryPageString label;
            const uintptr_t identity = reinterpret_cast<uintptr_t>(
                figure_name(reinterpret_cast<void *>(author)));
            uint8_t named = 0;
            if (identity && !native_history_copy(identity + 0x72, named)) return false;
            if (identity && named) original_name(reinterpret_cast<void *>(identity), &label.value);
            std::string_view author_name;
            if (!native_string_view(&label.value, &author_name, kNativeHistoryStringLimit)) return false;
            // Native keeps the authored-by clause when the resolved figure's
            // current name object is absent/unnamed; it appends an empty name.
            add(author_name);
        }
    }
    add(".  ");
    const int32_t kind = genre == 7 ? 0 : genre == 12 ? 1 : genre == 13 ? 2 : -1;
    uintptr_t form = 0;
    if (kind >= 0 && !native_history_find_structure_id(
            form_vector(kind), 0, form_id, form)) return false;
    if (form) {
        if (!form_producer(kind)) return false;
        add("It is an example of ");
        if (!append_form_name(form)) return false;
        add(".  ");
    }
    content(reinterpret_cast<void *>(subject), source, 0);
    if (form) {
        add("[B]");
        return append_form(form, kind);
    }
    return true;
}
