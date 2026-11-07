// The performance chooser's enum owns each caption's semantic kind. Borrow
// the original list_name before print_name is shortened for the native view.
static bool capture_native_history_subject_title_fields(const void *event,
    const void *context, NativeHistoryEventData &title);

static std::optional<NativePerformanceChoice> capture_native_performance_choice(
        uintptr_t caption_address) {
    const uintptr_t base = native_history_profile_base();
    if (!base || !caption_address) return std::nullopt;
    // 53.16 PE: b0340e passes this global to 870260. Its draw at 8709c4
    // passes entry+8 directly; the search filter borrows entry+0x28.
#ifdef _WIN32
    const uintptr_t perform = native_reference_address(base, 0x18a85b0);
#else
    // ELF 123afe6 edits perform.filter_str (+0x40), and 123affa passes
    // the same owner to its filter. game+0x72c0 is perform, not adventurest.
    const uintptr_t perform = native_reference_address(base, 0x22fd520);
#endif
    uint8_t open = 0;
    NativeBorrowedVector<uintptr_t> choices;
    if (!perform || !native_history_copy(perform, open) || open != 1 ||
            !native_history_read_vector(native_history_object_member(perform,
                "adventure_interface_performst", "choice", 24), choices) ||
            choices.size() == 0 || choices.size() > 65536) return std::nullopt;
    std::vector<uintptr_t> entries(choices.size());
    if (!native_history_copy_bytes(reinterpret_cast<uintptr_t>(choices.begin),
            entries.data(), entries.size() * sizeof(uintptr_t))) return std::nullopt;
    const auto found = std::find_if(entries.begin(), entries.end(), [&](uintptr_t entry) {
        return entry && entry <= UINTPTR_MAX - 0x78 &&
            (caption_address == entry + 8 || caption_address == entry + 0x28);
    });
    if (found == entries.end()) return std::nullopt;
    const uintptr_t entry = *found;
    NativePerformanceChoice result;
    if (!native_history_copy(entry, result.type) ||
            !native_history_copy(entry + 0x68, result.id) ||
            !native_history_copy_string(entry + 0x28, result.source) ||
            result.type < 0 || result.type > 39 || result.source.empty())
        return std::nullopt;
    if (result.type == 12) {
        // The actual menu event ID establishes title fields and selectors,
        // without splitting their generated names at prose connectors.
        try {
            uintptr_t address = 0;
            int32_t native_type = -1;
            if (result.id >= 0 &&
                    native_history_find_structure_id(native_history_global(0x24f9cb8),
                        0x20, result.id, address) && address &&
                    capture_native_history_event_identity(reinterpret_cast<void *>(address), native_type)) {
                std::vector<std::max_align_t> context;
                if (!initialize_native_history_context(context)) return result;
                // The performance constructor supplies a neutral context,
                // unlike Legends' English-gloss flag in the same ABI.
                const uint32_t context_flags = 0;
                const auto flags = native_history_object_member(reinterpret_cast<uintptr_t>(context.data()),
                    "history_event_context", "flags", sizeof(context_flags));
                if (!flags) return result;
                std::memcpy(reinterpret_cast<void *>(flags), &context_flags, sizeof(context_flags));
                auto snapshot = snapshot_native_history_event_header(
                    reinterpret_cast<void *>(address), context.data());
                if (snapshot && !capture_native_history_subject_title_fields(
                        reinterpret_cast<void *>(address), context.data(), *snapshot))
                    snapshot.reset();
                if (snapshot && snapshot->id == result.id &&
                        !snapshot->fields.contains("snapshot.incomplete")) {
                    if (populate_native_history_subjects(*snapshot) &&
                            capture_native_history_subject_item_labels(*snapshot) &&
                            native_history_tree_within_limits(*snapshot)) {
                        auto document = std::make_shared<NativeHistoryDocument>();
                        document->owner = entry;
                        document->event = std::move(*snapshot);
                        document->native_source = result.source;
                        result.story_event = std::move(document);
                    }
                }
            }
        } catch (...) {
            // Optional typed capture never changes the native caption. The
            // existing complete-title parser remains available on failure.
        }
        return result;
    }
    // STORY_SITE, STORY_HF, STORY_ENTITY and STORY_SUBREGION use separate
    // native enum values despite sharing the same display placeholder.
    if (result.type != 9 || result.source != "Unknown") return result;
    uintptr_t identity = 0;
    if (!native_history_copy(entry + 0x70, identity)) return std::nullopt;
    // A known assumed identity never authorizes revealing the real figure's
    // name or species. Retain only the chooser's visible subject category.
    if (identity) return result;
    const uintptr_t figure = native_history_find_subject(
        base, NativeHistoryObjectKind::Figure, result.id);
    uint8_t has_name = 0;
    if (!figure || !native_history_copy(native_history_object_field(
            figure, "historical_figure", 0xaa), has_name)) return std::nullopt;
    if (has_name) return result;
    result.unnamed = true;
    int16_t race = -1, caste = -1;
    if (native_history_copy(native_history_object_field(
                figure, "historical_figure", 2, sizeof(race)), race) &&
            native_history_copy(native_history_object_field(
                figure, "historical_figure", 4, sizeof(caste)), caste))
        capture_native_history_creature_label(base, race, caste, false, result.species, false);
    return result;
}
