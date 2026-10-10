// The legacy Adventure LOOK renderer reads ui_look_list's native enum and
// payload, then formats a stack-owned string instead of display_str(+0x28).
// Its verified addst caller and source-relative loop-index slot retain that
// same typed ownership without interpreting the caption's English words.
static std::optional<NativeMapHoverContext> native_adventure_look_caption_context(
        uintptr_t caller, const NativeString *source) {
    for (const auto &site : g_native_adventure_look_caption_sites) {
        if (site.return_address != caller) continue;
        NativeMapHoverContext context;
        context.kind = NativeMapHoverKind::Unknown;
        context.fragment = site.fragment;
        const uintptr_t address = reinterpret_cast<uintptr_t>(source);
        if (!address || !site.index_slot || !g_native_map_hover_list) return context;
        const uintptr_t distance = site.index_slot < 0
            ? static_cast<uintptr_t>(-site.index_slot)
            : static_cast<uintptr_t>(site.index_slot);
        if ((site.index_slot < 0 && address < distance) ||
                (site.index_slot > 0 && distance > UINTPTR_MAX - address)) return context;
        const uintptr_t slot = site.index_slot < 0 ? address - distance : address + distance;
        int64_t index = -1;
        constexpr size_t maximum = 4096;
        NativeBorrowedVector<uintptr_t> owners;
        uintptr_t record = 0;
        std::array<int32_t, 7> fields{};
        if (!native_history_copy(slot, index) || index < 0 ||
                !native_history_copy(g_native_map_hover_list, owners) ||
                !owners.valid(maximum) || static_cast<uint64_t>(index) >= owners.size() ||
                !native_history_copy(reinterpret_cast<uintptr_t>(owners.begin) +
                    static_cast<size_t>(index) * sizeof(uintptr_t), record) ||
                !record || !native_history_copy(record, fields) ||
                fields.front() < 0 || fields.front() > 12) return context;
        const auto kind = static_cast<NativeMapHoverKind>(fields.front());
        if (site.expected_kind != NativeMapHoverKind::Unknown &&
                kind != site.expected_kind) return context;
        context.kind = kind;
        std::copy_n(fields.begin() + 1, context.data.size(), context.data.begin());
        return context;
    }
    return std::nullopt;
}
