// These three caches belong to the actual setup screen. The ordinary addst
// entry gives their live NativeString argument without borrowing private
// producer registers, stack locals, or a page-specific call address.
static std::shared_ptr<const NativeAdventureHoverDocument>
        capture_native_adventure_hover_document(uintptr_t source) {
#ifndef _WIN32
    (void)source;
    return {};
#else
    if (!source) return {};
    const uintptr_t screen = native_current_viewscreen();
    if (!screen || !native_history_object_is(screen, "viewscreen_setupadventurest")) return {};
    using Field = native_history_abi::FieldOffset;
    static constexpr Field documents[]{
        {0x368, "viewscreen_setupadventurest", "tooltip_phys_att_box.text"},
        {0x388, "viewscreen_setupadventurest", "tooltip_ment_att_box.text"},
        {0x3a8, "viewscreen_setupadventurest", "tooltip_skill_box.text"},
    };
    static constexpr Field selections[]{
        {0x380, "viewscreen_setupadventurest", "tooltip_phys_att_box_index"},
        {0x3a0, "viewscreen_setupadventurest", "tooltip_ment_att_box_index"},
        {0x3c0, "viewscreen_setupadventurest", "tooltip_skill_box_index"},
    };
    const auto member = [&](Field field, size_t size) {
        return reinterpret_cast<uintptr_t>(native_object_member_address(
            reinterpret_cast<const void *>(screen), field, size));
    };
    const uint64_t epoch = g_embark_item_capture_epoch.load(std::memory_order_acquire);
    std::optional<NativeAdventureHoverDocument> found;
    for (size_t kind = 0; kind < std::size(documents); ++kind) {
        NativeBorrowedVector<uintptr_t> rows;
        const uintptr_t vector = member(documents[kind], sizeof(rows));
        const uintptr_t index_address = member(selections[kind], sizeof(int32_t));
        int32_t index = -1;
        if (!vector || !index_address || !native_history_read_vector(vector, rows) ||
                !rows.valid(512) || !rows.size() ||
                !native_history_copy(index_address, index)) continue;
        size_t occurrences = 0;
        for (size_t at = 0; at < rows.size(); ++at)
            occurrences += native_history_vector_at(rows, at) == source;
        if (!occurrences) continue;
        if (occurrences != 1 || found) return {};
        NativeAdventureHoverDocument document;
        document.screen = screen; document.vector = vector;
        document.begin = reinterpret_cast<uintptr_t>(rows.begin);
        document.end = reinterpret_cast<uintptr_t>(rows.end);
        document.capacity = reinterpret_cast<uintptr_t>(rows.capacity);
        document.index_address = index_address; document.index = index;
        document.epoch = epoch;
        size_t total = 0;
        std::unordered_set<uintptr_t> identities;
        for (size_t at = 0; at < rows.size(); ++at) {
            NativeAdventureHoverDocument::Row row;
            row.address = native_history_vector_at(rows, at);
            if (!row.address || !identities.insert(row.address).second ||
                    !native_history_copy_string(row.address, row.source) ||
                    row.source.size() > 4096 ||
                    row.source.find_first_of("\r\n\0", 0, 3) != std::string::npos ||
                    (total += row.source.size()) > 65536) return {};
            document.rows.push_back(std::move(row));
        }
        NativeBorrowedVector<uintptr_t> after;
        int32_t after_index = -1;
        if (!native_history_read_vector(vector, after) ||
                after.begin != rows.begin || after.end != rows.end || after.capacity != rows.capacity ||
                !native_history_copy(index_address, after_index) || after_index != index) return {};
        found = std::move(document);
    }
    if (!found || native_current_viewscreen() != screen ||
            epoch != g_embark_item_capture_epoch.load(std::memory_order_acquire)) return {};
    // Cache identity is the entire copied value. Reusing vector storage or a
    // NativeString address within one generation cannot revive old contents.
    struct Cache { std::array<std::shared_ptr<const NativeAdventureHoverDocument>, 3> documents; };
    auto &cache = reloadable_thread_state<Cache, struct AdventureHoverDocumentCacheTag>();
    for (auto &document : cache.documents)
        if (document && (document->screen != screen || document->epoch != epoch)) document.reset();
    for (const auto &document : cache.documents)
        if (document && *document == *found) return document;
    auto result = std::make_shared<const NativeAdventureHoverDocument>(std::move(*found));
    for (auto &document : cache.documents)
        if (!document || document->vector == result->vector) { document = result; return result; }
    return result;
#endif
}
