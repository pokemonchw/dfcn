// The trait filter advances its comparison and record iterators together.
// Read display_string from the actual candidate, including offscreen rows;
// compare_master remains the native folded sort/search key, never rewritten.
static bool native_work_order_trait_caption(const void *candidate_slot,
        std::string &source) {
    uintptr_t candidate = 0;
    std::string_view text;
    if (!g_native_work_order_trait_caption ||
        !native_history_copy(reinterpret_cast<uintptr_t>(candidate_slot), candidate) ||
        !candidate || candidate > UINTPTR_MAX - g_native_work_order_trait_caption ||
        !native_string_view(reinterpret_cast<const NativeString *>(
            candidate + g_native_work_order_trait_caption), &text, 65536) ||
        text.empty() || text.find('\0') != std::string_view::npos) return false;
    source.assign(text);
    return true;
}

// All three condition selectors retain the complete native candidate order.
// Resolve a comparison slot's ordinal, never a visible-row or filtered index.
static bool native_work_order_candidate_index(const void *candidate_slot,
        size_t &index, size_t &count) {
    const auto &layout = g_native_work_order_material_source;
    NativeBorrowedVector<uintptr_t> comparisons;
    if (!layout.selector ||
        !native_history_read_vector(layout.selector + layout.comparisons,
            comparisons)) return false;
    const uintptr_t slot = reinterpret_cast<uintptr_t>(candidate_slot);
    const uintptr_t begin = reinterpret_cast<uintptr_t>(comparisons.begin);
    const uintptr_t end = reinterpret_cast<uintptr_t>(comparisons.end);
    if (slot < begin || slot >= end || (slot - begin) % sizeof(uintptr_t)) return false;
    index = (slot - begin) / sizeof(uintptr_t);
    count = comparisons.size();
    return true;
}

static bool native_work_order_item_caption(const void *candidate_slot,
        std::string &source, SearchDescriptor *descriptor = nullptr) {
    refresh_native_search_world();
    const auto &selector = g_native_work_order_material_source;
    const auto &layout = g_native_work_order_item_source;
    size_t index = 0, count = 0;
    NativeBorrowedVector<int16_t> types, subtypes;
    if (!layout.caption || !selector.capitalize ||
        !native_work_order_candidate_index(candidate_slot, index, count) ||
        !native_history_copy(selector.selector + layout.types, types) ||
        !native_history_copy(selector.selector + layout.subtypes, subtypes) ||
        !types.valid(1u << 24) || !subtypes.valid(1u << 24) ||
        types.size() != count || subtypes.size() != count) return false;
    int16_t type = -1, subtype = -1;
    if (!native_history_copy(reinterpret_cast<uintptr_t>(types.begin) + index * sizeof(type), type) ||
        !native_history_copy(reinterpret_cast<uintptr_t>(subtypes.begin) + index * sizeof(subtype), subtype))
        return false;
    // Identical producer arguments to the displayed Type row. The folded
    // comparison key is never substituted for this complete original caption.
    NativeSearchString caption(selector.destroy);
    layout.caption(&caption.value, type, subtype, -1, -1, -1,
        0, false, nullptr, -1, -1, true, 0, 0);
    selector.capitalize(&caption.value);
    std::string_view text;
    if (!native_string_view(&caption.value, &text, 65536) || text.empty() ||
        text.find('\0') != std::string_view::npos) return false;
    source.assign(text);
    if (descriptor) {
        descriptor->kind = SearchCandidateKind::ItemDefinition;
        descriptor->domain = "stockpile.type";
        descriptor->candidate_id.owner = selector.selector;
        descriptor->candidate_id.record = reinterpret_cast<uintptr_t>(candidate_slot);
        descriptor->native_ordinal = index;
        const auto world = search_world_snapshot_storage();
        if (world) static_cast<SearchObjectFacts &>(*descriptor) = search_native_tuple(type,subtype,-1,-1,*world,*search_concept_catalog());
    }
    return true;
}

// Read the complete caption from the SAME sorted material tuple as the
// renderer. compare_master contains folded search/sort keys, not display
// spelling. Nothing is retained by native pointer across queries or reloads.
static bool native_work_order_material_caption(const void *candidate_slot,
        std::string &source, SearchDescriptor *descriptor = nullptr) {
    const auto &layout = g_native_work_order_material_source;
    size_t index = 0, count = 0;
    if (!layout.caption || !layout.capitalize ||
        !native_work_order_candidate_index(candidate_slot, index, count)) return false;

    NativeBorrowedVector<int16_t> types, states;
    NativeBorrowedVector<int32_t> indices;
    if (!native_history_copy(layout.selector + layout.types, types) ||
        !native_history_copy(layout.selector + layout.indices, indices) ||
        !native_history_copy(layout.selector + layout.states, states) ||
        !types.valid(1u << 24) || !indices.valid(1u << 24) || !states.valid(1u << 24) ||
        types.size() != count || indices.size() != count || states.size() != count) return false;
    int16_t type = -1, state = -1;
    int32_t material_index = -1;
    if (!native_history_copy(reinterpret_cast<uintptr_t>(types.begin) + index * sizeof(type), type) ||
        !native_history_copy(reinterpret_cast<uintptr_t>(indices.begin) + index * sizeof(material_index), material_index) ||
        !native_history_copy(reinterpret_cast<uintptr_t>(states.begin) + index * sizeof(state), state)) return false;
    // The native first row is the unrestricted constraint, not a material
    // whose ID should be passed to the material-name producer.
    if (index == 0 && type == -1 && material_index == -1 && state == -1) {
        if (!layout.unrestricted_caption) return false;
        source = layout.unrestricted_caption;
        return true;
    }
    NativeSearchString caption(layout.destroy);
    layout.caption(layout.material_context, &caption.value, type, material_index,
        0, 0, state);
    layout.capitalize(&caption.value);
    std::string_view text;
    if (!native_string_view(&caption.value, &text, 65536) || text.empty() ||
        text.find('\0') != std::string_view::npos) return false;
    source.assign(text);
    if (descriptor) {
        descriptor->kind = SearchCandidateKind::MaterialChoice;
        descriptor->domain = "materials";
        descriptor->candidate_id.owner = layout.selector;
        descriptor->candidate_id.record = reinterpret_cast<uintptr_t>(candidate_slot);
        descriptor->native_ordinal = index;
        const auto world = search_world_snapshot_storage();
        if (world) static_cast<SearchObjectFacts &>(*descriptor) = search_native_tuple(-1,-1,type,material_index,*world,*search_concept_catalog());
    }
    return true;
}
