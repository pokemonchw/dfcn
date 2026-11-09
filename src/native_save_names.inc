// Save cards contain native fortress/adventurer names and authored save
// titles. A current string field's address proves which one was drawn;
// matching a spelling elsewhere in the list does not establish ownership.
static bool capture_native_save_path(uintptr_t address, fs::path &path) {
    if (!address) return false;
#ifdef _WIN32
    // MSVC filesystem::path owns a UTF-16 basic_string, independently of
    // the CP437/UTF-8 strings used for game captions.
    std::array<unsigned char, 32> storage{};
    if (!native_history_copy_bytes(address, storage.data(), storage.size())) return false;
    size_t size = 0, capacity = 0;
    std::memcpy(&size, storage.data() + 16, sizeof(size));
    std::memcpy(&capacity, storage.data() + 24, sizeof(capacity));
    if (!size || size > 32767 || capacity < size) return false;
    uintptr_t data = address;
    if (capacity >= 8) std::memcpy(&data, storage.data(), sizeof(data));
    std::wstring text(size, L'\0');
    if (!data || !native_history_copy_bytes(data, text.data(), size * sizeof(wchar_t)) ||
            text.find(L'\0') != std::wstring::npos) return false;
    path = fs::path(text);
#else
    std::string text;
    if (!native_history_copy_string(address, text) || text.empty() ||
            text.find('\0') != std::string::npos) return false;
    path = fs::path(text);
#endif
    return true;
}

static std::optional<NativeSaveNameSource> capture_native_save_name_source(
        uintptr_t source, std::string_view complete) {
    if (!source || complete.empty() || complete.size() > 4096) return std::nullopt;
    const uintptr_t screen = native_current_viewscreen();
    if (!screen || !native_history_object_is(screen, "viewscreen_titlest"))
        return std::nullopt;
    NativeBorrowedVector<uintptr_t> headers;
    if (!native_history_read_vector(native_history_object_field(screen,
            "viewscreen_titlest", 0x848, sizeof(headers)), headers) ||
            headers.size() > 131072) return std::nullopt;
    for (size_t index = 0; index < headers.size(); ++index) {
        const uintptr_t header = native_history_vector_at(headers, index);
        if (!header) continue;
        const auto field = [&](size_t coordinate, size_t width) {
            return native_history_object_field(header, "savegame_headerst", coordinate, width);
        };
        const uintptr_t fort_name = field(0xa8, 32);
        const uintptr_t manual_name = field(0x138, 32);
        if (source != fort_name && source != manual_name) continue;
        NativeSaveNameSource result;
        if (!native_history_copy_string(source, result.original) ||
                result.original != complete) return std::nullopt;
        result.authored = source == manual_name;
        if (!native_history_copy(field(0xa4, sizeof(result.game_type)), result.game_type) ||
                !native_history_copy(field(0xf0, sizeof(result.world_id1)), result.world_id1) ||
                !native_history_copy(field(0xf4, sizeof(result.world_id2)), result.world_id2))
            return std::nullopt;
        // The title reader stores the directory here; it appends world.sav
        // only to its temporary file path when reading this header.
        capture_native_save_path(field(0x190, 32), result.full_path);
        return result;
    }
    return std::nullopt;
}

// A retained loaded world may supply the full site identity only for its own
// save. Equal fortress spellings in another world's header prove no relation.
static bool native_save_world_is_current(const NativeSaveNameSource &source) {
    if (!source.world_id1 && !source.world_id2) return false;
    const uintptr_t base = native_history_profile_base();
    const uintptr_t world = base ? native_reference_address(base,
        native_history_layout::world_rva) : 0;
    if (!world) return false;
    const auto field = [&](size_t coordinate, size_t width) {
        return native_history_bound_field(world, native_history_layout::world_fields,
            std::size(native_history_layout::world_fields), coordinate, width);
    };
    uintptr_t world_data = 0;
    uint32_t id1 = 0, id2 = 0;
    return native_history_copy(field(0x11a668, sizeof(world_data)), world_data) &&
        world_data && native_history_copy(field(0x26d488, sizeof(id1)), id1) &&
        native_history_copy(field(0x26d48c, sizeof(id2)), id2) &&
        id1 == source.world_id1 && id2 == source.world_id2;
}
