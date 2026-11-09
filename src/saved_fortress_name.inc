// Saved names are input to the existing site formatter, not a second
// translation path. The save's WORD table supplies indices; namest supplies
// the original seven WORD/POS pairs. English is used only to identify the
// complete name whose header is being drawn.
namespace saved_fortress_input {

static constexpr size_t max_saved_bytes = 512 * 1024 * 1024;
static constexpr size_t max_plain_bytes = 1024 * 1024 * 1024;
static constexpr size_t input_block_bytes = 1000000;
static constexpr size_t output_block_bytes = 2000000;

static uint16_t u16(const unsigned char *data) {
    return uint16_t(data[0]) | (uint16_t(data[1]) << 8);
}

static uint32_t u32(const unsigned char *data) {
    return uint32_t(data[0]) | (uint32_t(data[1]) << 8) |
        (uint32_t(data[2]) << 16) | (uint32_t(data[3]) << 24);
}

struct Cursor {
    const std::vector<unsigned char> &bytes;
    size_t position = 0;

    bool skip(size_t amount) {
        if (amount > bytes.size() - position) return false;
        position += amount;
        return true;
    }
    bool number16(int16_t &value) {
        if (bytes.size() - position < 2) return false;
        value = static_cast<int16_t>(u16(bytes.data() + position));
        position += 2;
        return true;
    }
    bool number32(uint32_t &value) {
        if (bytes.size() - position < 4) return false;
        value = u32(bytes.data() + position);
        position += 4;
        return true;
    }
    bool string(std::string_view &value) {
        int16_t size = 0;
        if (!number16(size) || size < 0 ||
                static_cast<size_t>(size) > bytes.size() - position) return false;
        value = std::string_view(reinterpret_cast<const char *>(bytes.data() + position),
            static_cast<size_t>(size));
        position += static_cast<size_t>(size);
        return true;
    }
    bool count(uint32_t &value, size_t minimum_item_size) {
        return number32(value) && value <= 1000000 &&
            value <= (bytes.size() - position) / minimum_item_size;
    }
};

struct Zlib {
    using Uncompress = int (*)(unsigned char *, unsigned long *,
        const unsigned char *, unsigned long);
    void *module = nullptr;
    Uncompress uncompress = nullptr;

    Zlib() {
#ifdef _WIN32
        const std::string path = runtime::utf8(runtime::game_directory() / "zlib1.dll");
        module = SDL_LoadObject(path.c_str());
#else
        module = SDL_LoadObject("libz.so.1");
#endif
        if (module) uncompress = reinterpret_cast<Uncompress>(
            SDL_LoadFunction(module, "uncompress"));
    }
    ~Zlib() { if (module) SDL_UnloadObject(module); }
};

static bool read_world(const fs::path &path, uintmax_t file_size,
        std::vector<unsigned char> &plain) {
    if (file_size < 8 || file_size > max_saved_bytes) return false;
    std::ifstream input(path, std::ios::binary);
    std::array<unsigned char, 8> header{};
    if (!input.read(reinterpret_cast<char *>(header.data()), header.size())) return false;
    // This layout is the 53.16 serialization, including the counters and
    // generated-raw/string-table order. Other formats need their own reader.
    if (u32(header.data()) != 3602) return false;
    const uint32_t compressed = u32(header.data() + 4);
    if (compressed == 0) {
        plain.resize(static_cast<size_t>(file_size - header.size()));
        return bool(input.read(reinterpret_cast<char *>(plain.data()), plain.size()));
    }
    if (compressed != 1) return false;
    Zlib zlib;
    if (!zlib.uncompress) return false;
    std::vector<unsigned char> packed(output_block_bytes), block(input_block_bytes);
    uintmax_t position = header.size();
    while (position < file_size) {
        std::array<unsigned char, 4> length{};
        if (file_size - position < length.size() ||
                !input.read(reinterpret_cast<char *>(length.data()), length.size())) return false;
        position += length.size();
        const uint32_t size = u32(length.data());
        if (!size || size > packed.size() || size > file_size - position ||
                !input.read(reinterpret_cast<char *>(packed.data()), size)) return false;
        position += size;
        unsigned long amount = static_cast<unsigned long>(block.size());
        if (zlib.uncompress(block.data(), &amount, packed.data(), size) != 0 ||
                !amount || amount > block.size() || amount > max_plain_bytes - plain.size())
            return false;
        plain.insert(plain.end(), block.begin(), block.begin() + amount);
    }
    return !plain.empty();
}

static bool read_dictionary(Cursor &cursor, const NativeSaveNameSource &source,
        std::vector<std::string> &words, uint32_t &languages) {
    // The serialized header stores a flat fort_name, not language_name.
    // It must belong to the exact save card before any body record is read.
    std::string_view text;
    int16_t game_type = -1;
    uint32_t id1 = 0, id2 = 0;
    if (!cursor.skip(41 * 4) || !cursor.number16(game_type) ||
            game_type != source.game_type || !cursor.string(text) ||
            text != source.original || !cursor.string(text) || !cursor.skip(4) ||
            !cursor.number32(id1) || !cursor.number32(id2) ||
            id1 != source.world_id1 || id2 != source.world_id2 ||
            !cursor.string(text) || !cursor.string(text) || !cursor.skip(16) ||
            !cursor.string(text) || !cursor.skip(4)) return false;

    // Eight generated-raw categories precede the saved index dictionaries.
    for (size_t group = 0; group < 8; ++group) {
        uint32_t entries = 0;
        if (!cursor.count(entries, 4)) return false;
        for (uint32_t entry = 0; entry < entries; ++entry) {
            uint32_t lines = 0;
            if (!cursor.count(lines, 2)) return false;
            for (uint32_t line = 0; line < lines; ++line)
                if (!cursor.string(text)) return false;
        }
    }
    // inorganic, plant, body, body-part, creature, item, building, entity,
    // WORD, symbol, language. Index order comes from this save, not raw files.
    for (size_t table = 0; table < 11; ++table) {
        uint32_t entries = 0;
        if (!cursor.count(entries, 2)) return false;
        if (table == 8) words.reserve(entries);
        if (table == 10) languages = entries;
        for (uint32_t entry = 0; entry < entries; ++entry) {
            if (!cursor.string(text)) return false;
            if (table == 8) {
                if (text.empty()) return false;
                words.emplace_back(text);
            }
        }
    }
    return !words.empty() && languages != 0;
}

static bool same_name(const NativeHistoryName &left, const NativeHistoryName &right) {
    if (left.type != right.type || left.language != right.language) return false;
    for (size_t slot = 0; slot < left.words.size(); ++slot)
        if (left.words[slot].id != right.words[slot].id ||
                left.words[slot].part_of_speech != right.words[slot].part_of_speech)
            return false;
    return true;
}

struct CacheEntry {
    fs::path path;
    fs::file_time_type modified{};
    uintmax_t size = 0;
    std::string original;
    uint32_t id1 = 0, id2 = 0;
    int16_t game_type = -1;
    std::optional<NativeHistoryName> name;
};

struct Cache {
    const void *owner = nullptr;
    uint64_t revision = 0;
    std::vector<CacheEntry> entries;
};

} // namespace saved_fortress_input

std::optional<NativeHistoryName> Overlay::read_saved_fortress_name(
        const NativeSaveNameSource &source) const {
    using namespace saved_fortress_input;
    if (source.authored || source.full_path.empty() ||
            (!source.world_id1 && !source.world_id2)) return std::nullopt;
    switch (source.game_type) {
    case 0: case 3: case 8: case 10: break;
    default: return std::nullopt;
    }
    const auto pair = split_generated_name_identity(source.original);
    if (!pair) return std::nullopt;
    const fs::path path = source.full_path / "world.sav";
    std::error_code error;
    const auto modified = fs::last_write_time(path, error);
    if (error) return std::nullopt;
    const auto size = fs::file_size(path, error);
    if (error) return std::nullopt;
    auto &cache = reloadable_thread_state<Cache, struct SavedFortressInputTag>();
    if (cache.owner != this || cache.revision != river_names_revision_) {
        cache = {};
        cache.owner = this;
        cache.revision = river_names_revision_;
    }
    const auto found = std::find_if(cache.entries.begin(), cache.entries.end(),
        [&](const CacheEntry &entry) { return entry.path == path; });
    if (found != cache.entries.end() && found->modified == modified && found->size == size &&
            found->original == source.original && found->id1 == source.world_id1 &&
            found->id2 == source.world_id2 && found->game_type == source.game_type)
        return found->name;

    const auto read = [&]() -> std::optional<NativeHistoryName> {
        std::vector<unsigned char> plain;
        if (!read_world(path, size, plain)) return std::nullopt;
        Cursor cursor{plain};
        std::vector<std::string> dictionary;
        uint32_t languages = 0;
        if (!read_dictionary(cursor, source, dictionary, languages)) return std::nullopt;
        const std::string expected = lower(native_text_to_utf8(trim_view(pair->gloss)));
        std::optional<NativeHistoryName> result;
        // A generated namest is flag=1, two empty int16-length strings,
        // 7*i32 WORD, 7*i16 POS, i32 language, i16 name type. The existing
        // site renderer declines names with authored first/nickname fields.
        // Locate only this recorded layout; never synthesize WORDs or POS
        // from the header's English spelling or a nearby site's fields.
        constexpr size_t record_size = 53;
        size_t offset = cursor.position;
        while (offset <= plain.size() && plain.size() - offset >= record_size) {
            const auto *record = static_cast<const unsigned char *>(std::memchr(
                plain.data() + offset, 1, plain.size() - offset - record_size + 1));
            if (!record) break;
            offset = static_cast<size_t>(record - plain.data()) + 1;
            if (u32(record + 1) != 0 || u16(record + 51) != 4) continue;
            const uint32_t language = u32(record + 47);
            if (language >= languages) continue;
            NativeHistoryName candidate;
            candidate.has_name = true;
            candidate.type = 4;
            candidate.language = static_cast<int32_t>(language);
            bool valid = true, has_word = false;
            for (size_t slot = 0; slot < candidate.words.size(); ++slot) {
                const uint32_t index = u32(record + 5 + slot * 4);
                auto &word = candidate.words[slot];
                word.part_of_speech = static_cast<int16_t>(u16(record + 33 + slot * 2));
                if (index == UINT32_MAX) continue;
                if (index >= dictionary.size() || word.part_of_speech < 0 ||
                        word.part_of_speech > 8) { valid = false; break; }
                word.id = dictionary[index];
                const auto forms = history_english_name_forms_.find(word.id);
                if (forms == history_english_name_forms_.end()) { valid = false; break; }
                word.english_form = forms->second[static_cast<size_t>(word.part_of_speech)];
                word.has_form = !word.english_form.empty();
                has_word = true;
            }
            if (!valid || !has_word) continue;
            const auto english = reconstruct_site_english_name(candidate);
            if (!english || lower(native_text_to_utf8(*english)) != expected) continue;
            // Repeated stored copies may agree. Any distinct WORD/POS name
            // with this full gloss makes the input ambiguous; keep English.
            if (result && !same_name(*result, candidate)) return std::nullopt;
            result = std::move(candidate);
        }
        return result;
    };
    std::optional<NativeHistoryName> result;
    try { result = read(); }
    catch (const std::exception &) { result.reset(); }
    // Do not retain a name from a file replaced or written during this read.
    const auto final_modified = fs::last_write_time(path, error);
    if (error || final_modified != modified) return std::nullopt;
    const auto final_size = fs::file_size(path, error);
    if (error || final_size != size) return std::nullopt;
    CacheEntry entry{path, modified, size, source.original, source.world_id1,
        source.world_id2, source.game_type, result};
    if (found != cache.entries.end()) *found = std::move(entry);
    else {
        if (cache.entries.size() >= 64) cache.entries.erase(cache.entries.begin());
        cache.entries.push_back(std::move(entry));
    }
    return result;
}
