// Read-only access to the native world-map artifact paragraph cache. The
// caller must prove the current hover frame and match its visible text before
// using any of these owned lines; a cached paragraph alone does not own UI.
static std::optional<std::vector<std::string>> native_world_artifact_description_lines() {
    const uintptr_t base = native_history_profile_base();
    if (!base) return std::nullopt;
    const auto current_screen = [&]() -> uintptr_t {
        const uintptr_t view = native_reference_address(base, native_history_layout::gview_rva);
        if (!view || view > UINTPTR_MAX - 8) return 0;
        uintptr_t screen = view + 8;
        std::array<uintptr_t, 64> visited{};
        for (size_t depth = 0; depth < visited.size(); ++depth) {
            if (!screen || screen > UINTPTR_MAX - 8 ||
                    std::find(visited.begin(), visited.begin() + depth, screen) !=
                        visited.begin() + depth) return 0;
            visited[depth] = screen;
            uintptr_t child = 0;
            if (!native_history_copy(screen + 8, child)) return 0;
            if (child) { screen = child; continue; }
            return native_history_object_is(screen, "viewscreen_worldst") ? screen : 0;
        }
        return 0;
    };
    const uintptr_t screen = current_screen();
    if (!screen) return std::nullopt;
    const uintptr_t artifact_field = native_history_object_member(screen,
        "viewscreen_worldst", "last_hover_artifact", sizeof(uintptr_t));
    const uintptr_t lines_field = native_history_object_member(screen,
        "viewscreen_worldst", "artifact_description.text", sizeof(NativeBorrowedVector<uintptr_t>));
    uintptr_t artifact = 0, item = 0;
    NativeBorrowedVector<uintptr_t> native_lines;
    // PE 0x1d9c30 inlines wrapping; ELF 0x140a4d1 calls add_paragraph at
    // width 53. Both retain the complete vector after rendering only its
    // first eight rows. The live cache also covers paragraphs constructed
    // before hook installation or evicted from the shared capture registry.
    // No-hover clears last_hover_artifact but retains the old text vector.
    if (!native_history_copy(artifact_field, artifact) || !artifact) return std::nullopt;
    const uintptr_t item_field = native_history_object_member(artifact,
        "artifact_record", "item", sizeof(uintptr_t));
    if (!native_history_copy(item_field, item) || !item ||
            !native_history_copy(lines_field, native_lines) ||
            !native_lines.valid(4096) || !native_lines.size()) return std::nullopt;
    std::vector<uintptr_t> pointers(native_lines.size());
    if (!native_history_copy_bytes(reinterpret_cast<uintptr_t>(native_lines.begin),
            pointers.data(), pointers.size() * sizeof(uintptr_t))) return std::nullopt;
    std::vector<std::string> lines;
    lines.reserve(pointers.size());
    size_t bytes = 0;
    for (const uintptr_t address : pointers) {
        std::string line;
        // The generated field layout and guarded string reader select the
        // actual host ABI; never read an ELF string as an MSVC GameString.
        if (!native_history_copy_string(address, line) || line.size() > 53 ||
                line.size() > 65536 - bytes) return std::nullopt;
        if (std::any_of(line.begin(), line.end(), [](char ch) {
                return ch == '\0' || ch == '\r' || ch == '\n';
            })) return std::nullopt;
        bytes += line.size();
        lines.push_back(std::move(line));
    }
    uintptr_t current_artifact = 0, current_item = 0;
    NativeBorrowedVector<uintptr_t> current_lines;
    // No state survives this call. Reject selection changes, replaced
    // vectors and detached world screens instead of accepting a stale cache.
    if (!bytes || current_screen() != screen ||
            !native_history_copy(artifact_field, current_artifact) ||
            current_artifact != artifact ||
            !native_history_copy(item_field, current_item) || current_item != item ||
            !native_history_copy(lines_field, current_lines) ||
            current_lines.begin != native_lines.begin || current_lines.end != native_lines.end ||
            current_lines.capacity != native_lines.capacity) return std::nullopt;
    return lines;
}
