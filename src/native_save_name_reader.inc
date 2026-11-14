// Included inside native_saved_sites. The native regionst reader owns the
// serialization schema. We locate its tagged section and supply a temporary
// regionst, never attach it to world.world_data or invoke the world loader.
struct SaveBlocks {
    struct Block { uint64_t offset; uint32_t packed; };
    struct Cursor { size_t block = 0, offset = 0; };
    Observed &state;
    bool compressed;
    int32_t capacity, packed_capacity;
    std::vector<Block> blocks;
    std::vector<unsigned char> decoded;
    size_t cached = SIZE_MAX;

    explicit SaveBlocks(Observed &input) : state(input),
        compressed(field<uint8_t>(input.stream, 0) != 0),
        capacity(field<int32_t>(input.stream, 0x128)),
        packed_capacity(field<int32_t>(input.stream, 0x140)) {}

    void position(uint64_t offset, bool packed) {
        auto *native = static_cast<unsigned char *>(state.stream);
        seek(native + 8, static_cast<int64_t>(offset), 0);
        native[0] = packed ? 1 : 0;
        const uint64_t empty = 0;
        std::memcpy(native + 0x12c, &empty, sizeof(empty));
        state.position = offset;
        state.block = offset;
        state.failed = false;
    }
    bool directory() {
        if (state.size < 8 || state.size > INT64_MAX || capacity <= 0 || packed_capacity <= 0)
            return false;
        // Only the four-byte framing lengths are read here. Compressed
        // payloads are skipped on the game's already-open istream.
        for (uint64_t offset = 8; offset < state.size;) {
            uint32_t packed = 0;
            if (compressed) {
                if (state.size - offset < 4) return false;
                position(offset, false);
                if (!read(state.stream, &packed, 4) || !packed ||
                        packed > uint32_t(packed_capacity) || packed > state.size - offset - 4)
                    return false;
                blocks.push_back({offset, packed});
                offset += uint64_t(packed) + 4;
            } else {
                packed = static_cast<uint32_t>(std::min<uint64_t>(capacity, state.size - offset));
                blocks.push_back({offset, packed});
                offset += packed;
            }
        }
        static_cast<unsigned char *>(state.stream)[0] = compressed ? 1 : 0;
        return !blocks.empty();
    }
    bool load(size_t index, bool force = false) {
        if (index >= blocks.size()) return false;
        if (!force && index == cached) return true;
        cached = SIZE_MAX;
        position(blocks[index].offset, compressed);
        if (compressed) {
            unsigned char first = 0;
            if (!read(state.stream, &first, 1) || state.failed) return false;
            const int32_t length = field<int32_t>(state.stream, 0x12c);
            const auto *buffer = field<const unsigned char *>(state.stream, 0x120);
            if (!buffer || length <= 0 || length > capacity) return false;
            decoded.assign(buffer, buffer + length);
        } else {
            decoded.resize(blocks[index].packed);
            if (!read(state.stream, decoded.data(), static_cast<int32_t>(decoded.size())) ||
                    state.failed) return false;
        }
        cached = index;
        return true;
    }
    std::optional<Cursor> cursor(const Record &position) const {
        const auto found = std::lower_bound(blocks.begin(), blocks.end(), position.block,
            [](const Block &block, uint64_t offset) { return block.offset < offset; });
        if (compressed) {
            if (found == blocks.end() || found->offset != position.block) return std::nullopt;
            return Cursor{size_t(found - blocks.begin()), position.skip};
        }
        const auto upper = std::upper_bound(blocks.begin(), blocks.end(), position.block,
            [](uint64_t offset, const Block &block) { return offset < block.offset; });
        if (upper == blocks.begin()) return std::nullopt;
        const auto at = std::prev(upper);
        if (position.block - at->offset > at->packed) return std::nullopt;
        return Cursor{size_t(at - blocks.begin()), size_t(position.block - at->offset)};
    }
    bool bytes(Cursor &at, void *output, size_t length) {
        auto *destination = static_cast<unsigned char *>(output);
        while (length) {
            if (!load(at.block) || at.offset > decoded.size()) return false;
            if (at.offset == decoded.size()) { ++at.block; at.offset = 0; continue; }
            const size_t count = std::min(length, decoded.size() - at.offset);
            if (destination) {
                std::memcpy(destination, decoded.data() + at.offset, count);
                destination += count;
            }
            at.offset += count;
            length -= count;
        }
        return true;
    }
    template<class T> bool value(Cursor &at, T &output) { return bytes(at, &output, sizeof(output)); }
    bool string(Cursor &at, std::string *output = nullptr) {
        int16_t length = -1;
        if (!value(at, length) || length < 0 || length > 9999) return false;
        if (output) output->resize(size_t(length));
        return bytes(at, output ? output->data() : nullptr, size_t(length));
    }
    bool tag(Cursor &at, std::string_view expected) {
        std::string text;
        return string(at, &text) && text == expected;
    }
    bool native_cursor(Cursor at) {
        if (!load(at.block, true) || at.offset > decoded.size()) return false;
        if (compressed) {
            const int32_t offset = static_cast<int32_t>(at.offset);
            std::memcpy(static_cast<unsigned char *>(state.stream) + 0x130, &offset, sizeof(offset));
        } else position(blocks[at.block].offset + at.offset, false);
        return true;
    }
};

static bool read_saved_word_ids(SaveBlocks &input, SaveBlocks::Cursor &at,
        std::vector<std::string> &words, uint32_t &languages) {
    // These are the first fields of the game's RAW-ID reader (7ae480).
    // Generated RAW text precedes the saved dictionaries; retain only WORD
    // IDs. Their ordinal positions belong to this save, not the loaded world.
    uint32_t count = 0, lines = 0;
    for (size_t group = 0; group < 8; ++group) {
        if (!input.value(at, count) || count > 1000000) return false;
        for (uint32_t entry = 0; entry < count; ++entry) {
            if (!input.value(at, lines) || lines > 1000000) return false;
            for (uint32_t line = 0; line < lines; ++line)
                if (!input.string(at)) return false;
        }
    }
    for (size_t table = 0; table < 11; ++table) {
        if (!input.value(at, count) || count > 1000000) return false;
        if (table == 8) words.resize(count);
        if (table == 10) languages = count;
        for (uint32_t index = 0; index < count; ++index)
            if (!input.string(at, table == 8 ? &words[index] : nullptr)) return false;
    }
    return !words.empty() && languages;
}

static bool region_preamble(SaveBlocks &input, SaveBlocks::Cursor at) {
    // Establish the native section, not a possible name-shaped byte sequence:
    // three independent tags, RNG state, namest and map dimensions must agree.
    if (!input.tag(at, "*START REGION SAVE*") || !input.bytes(at, nullptr, 15)) return false;
    uint8_t used = 0;
    if (!input.value(at, used) || used > 1) return false;
    if (used && (!input.string(at) || !input.string(at) || !input.bytes(at, nullptr, 48)))
        return false;
    int32_t width = 0, height = 0;
    uint8_t map = 0;
    if (!input.tag(at, "*START REGION DIM SAVE*") || !input.value(at, width) ||
            !input.value(at, height) || width <= 0 || height <= 0 ||
            width > INT16_MAX || height > INT16_MAX ||
            !input.tag(at, "*START REGION MAP SAVE*") || !input.value(at, map) || map != 1)
        return false;
    // A region-map cell has at least 50 serialized bytes in this reader.
    // Reject a false/truncated anchor before asking the native allocator for
    // its map. The bound comes from the file's actual compression directory.
    return uint64_t(width) * uint64_t(height) <=
        uint64_t(input.blocks.size()) * uint64_t(input.capacity) / 50;
}

static std::optional<SaveBlocks::Cursor> find_region_section(
        SaveBlocks &input, SaveBlocks::Cursor after_ids) {
    const std::string marker = std::string("\x13\0", 2) + "*START REGION SAVE*";
    std::vector<unsigned char> next;
    // The region section follows the fortress's units/items. Search from the
    // end, stopping at the real section header. There is no fixed tail budget
    // and no scan for namest/WORD patterns; unrelated blocks are discarded.
    for (size_t index = input.blocks.size(); index-- > after_ids.block;) {
        if (!input.load(index)) return std::nullopt;
        auto block = input.decoded;
        const size_t own = block.size();
        block.insert(block.end(), next.begin(), next.end());
        const size_t first = index == after_ids.block ? after_ids.offset : 0;
        if (first <= own) {
            auto from = block.begin() + first;
            while (from < block.begin() + own) {
                const auto found = std::search(from, block.end(), marker.begin(), marker.end());
                if (found == block.end() || found >= block.begin() + own) break;
                const SaveBlocks::Cursor at{index, size_t(found - block.begin())};
                if (region_preamble(input, at)) return at;
                from = std::next(found);
            }
        }
        // Keep enough of the following block for a tag crossing a boundary.
        next.assign(block.begin(), block.begin() + std::min(marker.size() - 1, block.size()));
    }
    return std::nullopt;
}

static std::optional<Record> read_unindexed_site(Observed &state, const Record &after_header) {
    const auto pair = split_generated_name_identity(state.source.original);
    if (!pair) return std::nullopt;
    SaveBlocks input(state);
    if (!input.directory()) return std::nullopt;
    auto after_ids = input.cursor(after_header);
    if (!after_ids) return std::nullopt;
    std::vector<std::string> words;
    uint32_t languages = 0;
    if (!read_saved_word_ids(input, *after_ids, words, languages)) return std::nullopt;
    const auto region = find_region_section(input, *after_ids);
    if (!region || !input.native_cursor(*region)) return std::nullopt;

    // Native 53.17 regionst size, constructor and destructor, as used by the
    // game's own region reader. All allocations stay in this temporary owner.
    // true selects the world.sav metadata variant (no separate local midmap).
    struct TemporaryRegion {
        std::vector<uint64_t> storage = std::vector<uint64_t>((0x180c98 + 7) / 8);
        TemporaryRegion() { construct_region(storage.data()); }
        ~TemporaryRegion() { destroy_region(storage.data()); }
    } temporary;
    struct ReleaseSitePointers {
        Observed &state;
        ~ReleaseSitePointers() {
            for (auto &[id, record] : state.sites) record.site = 0;
        }
    } release_sites{state};
    state.sites.clear();
    read_region(temporary.storage.data(), state.stream, state.version, true);
    // The existing native world_site call hook above has captured exact
    // record boundaries and owners while the native reader walked its table.
    std::optional<Record> found;
    for (auto &[id, record] : state.sites) {
        record.site = 0; // No pointer into the temporary region escapes.
        auto &name = record.name;
        name.has_name = true;
        name.type = 4;
        name.site_id = id;
        name.site_type = 0;
        name.site_label = "player fortress";
        name.language = field<int32_t>(record.bytes.data(), 47);
        if (name.language < 0 || uint32_t(name.language) >= languages) continue;
        bool valid = true;
        for (size_t slot = 0; slot < name.words.size(); ++slot) {
            const int32_t word_id = field<int32_t>(record.bytes.data(), 5 + slot * 4);
            auto &word = name.words[slot];
            word.part_of_speech = field<int16_t>(record.bytes.data(), 33 + slot * 2);
            if (word_id == -1) continue;
            if (word_id < 0 || size_t(word_id) >= words.size()) { valid = false; break; }
            word.id = words[size_t(word_id)];
        }
        if (!valid || !g_overlay.capture_name_word_forms(name)) continue;
        const auto english = reconstruct_site_english_name(name);
        if (!english || lower_native_name(*english) != lower_native_name(std::string(pair->gloss)))
            continue;
        // Matching text selects an actual site from this file's complete
        // table. It never assigns words to slots. Ambiguous owners fail closed.
        if (found) { state.failed = true; continue; }
        name.native_name = std::string(pair->native_name);
        found = record;
    }
    return state.failed ? std::nullopt : found;
}
