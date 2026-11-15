// Bootstrap a missing save-name index without constructing game objects.
// The owned file has its own bounded block reader; it never touches the
// title menu's compressor, live world, or process memory on the worker.
namespace native_saved_sites {
class SavedSiteInput {
    using Uncompress = int (*)(unsigned char *, unsigned long *,
        const unsigned char *, unsigned long);
    std::ifstream file_;
    Uncompress uncompress_ = nullptr;
    struct InflaterLibrary {
        HMODULE handle = nullptr;
        ~InflaterLibrary() { if (handle) FreeLibrary(handle); }
    } inflater_;
    uint64_t next_ = 8, decoded_ = 0;
    std::array<unsigned char, 80000> packed_{};
public:
    uint64_t size = 0, block = 8;
    uint32_t version = 0;
    bool compressed = false;
    std::array<unsigned char, 20000> bytes{};
    size_t length = 0, cursor = 0;

    explicit SavedSiteInput(const fs::path &path) : file_(path, std::ios::binary | std::ios::ate) {
        const auto end = file_ ? file_.tellg() : std::streampos(-1);
        if (end < 8) throw std::runtime_error("Missing saved site source");
        size = static_cast<uint64_t>(end);
        file_.seekg(0);
        uint32_t flags = 0;
        file_.read(reinterpret_cast<char *>(&version), 4);
        file_.read(reinterpret_cast<char *>(&flags), 4);
        // Reviewed 53.17 serialization. Other versions keep their native
        // observation/index path instead of guessing a different layout.
        if (!file_ || version != 0xe12 || flags > 1)
            throw std::runtime_error("Unsupported saved site serialization");
        compressed = flags != 0;
        if (compressed) {
            std::array<wchar_t, 32768> executable{};
            const auto count = GetModuleFileNameW(nullptr, executable.data(),
                static_cast<DWORD>(executable.size()));
            if (!count || count >= executable.size()) throw std::runtime_error("Game directory unavailable");
            const auto library = fs::path(executable.data()).parent_path() / L"zlib1.dll";
            inflater_.handle = LoadLibraryExW(library.c_str(), nullptr,
                LOAD_LIBRARY_SEARCH_DLL_LOAD_DIR | LOAD_LIBRARY_SEARCH_DEFAULT_DIRS);
            uncompress_ = inflater_.handle ? reinterpret_cast<Uncompress>(
                GetProcAddress(inflater_.handle, "uncompress")) : nullptr;
            if (!uncompress_) throw std::runtime_error("Save inflater unavailable");
        }
    }
    void position(uint64_t offset) {
        if (offset < 8 || offset >= size) throw std::runtime_error("Invalid saved site position");
        next_ = offset;
        length = cursor = 0;
        file_.clear();
    }
    bool refill() {
        if (next_ == size) return false;
        if (next_ > size || decoded_ >= uint64_t(4) * 1024 * 1024 * 1024)
            throw std::runtime_error("Saved site source exceeds bounds");
        block = next_;
        file_.seekg(static_cast<std::streamoff>(block));
        if (compressed) {
            uint32_t count = 0;
            if (size - block < 4 || !file_.read(reinterpret_cast<char *>(&count), 4) ||
                    !count || count > packed_.size() || count > size - block - 4 ||
                    !file_.read(reinterpret_cast<char *>(packed_.data()), count))
                throw std::runtime_error("Invalid saved site block");
            unsigned long unpacked = static_cast<unsigned long>(bytes.size());
            if (uncompress_(bytes.data(), &unpacked, packed_.data(), count) != 0 ||
                    !unpacked || unpacked > bytes.size())
                throw std::runtime_error("Invalid saved site deflate stream");
            length = unpacked;
            next_ += uint64_t(count) + 4;
        } else {
            length = static_cast<size_t>(std::min<uint64_t>(bytes.size(), size - block));
            if (!file_.read(reinterpret_cast<char *>(bytes.data()), length))
                throw std::runtime_error("Truncated saved site source");
            next_ += length;
        }
        decoded_ += length;
        cursor = 0;
        return true;
    }
    void take(void *output, size_t count) {
        auto *destination = static_cast<unsigned char *>(output);
        while (count) {
            if (cursor == length && !refill()) throw std::runtime_error("Truncated saved name metadata");
            const auto amount = std::min(count, length - cursor);
            if (destination) { std::memcpy(destination, bytes.data() + cursor, amount); destination += amount; }
            cursor += amount;
            count -= amount;
        }
    }
    template<class T> T number() { T value{}; take(&value, sizeof(value)); return value; }
    uint32_t count() {
        const auto value = number<uint32_t>();
        if (value > 1048576) throw std::runtime_error("Invalid saved name count");
        return value;
    }
    std::string string() {
        const auto count = number<uint16_t>();
        std::string result(count, '\0');
        take(result.data(), count);
        return result;
    }
    bool matches(const Record &record) {
        if (record.compressed != compressed || record.skip > bytes.size() ||
                (!compressed && record.skip)) return false;
        position(record.block);
        if (!refill() || record.skip >= length) return false;
        cursor = record.skip;
        std::array<unsigned char, 71> actual{};
        take(actual.data(), actual.size());
        return actual == record.bytes;
    }
};

// Exactly the fields serialized by ReadSavegameHeader / ReadSharedWorldHeader
// (Steam 53.17 game+7D06E0 / +7E1C20). The key matches capture_header_key;
// the complete remaining header is consumed before entering the raw tables.
static std::string saved_header_key(SavedSiteInput &input, uint32_t key_version) {
    std::array<unsigned char, 0xa6> counters{};
    input.take(counters.data(), counters.size());
    const auto fortress = input.string(), world = input.string();
    const auto year = input.number<int32_t>();
    const auto id1 = input.number<uint32_t>(), id2 = input.number<uint32_t>();
    input.string(); input.string();
    input.take(nullptr, 16);
    input.string(); input.take(nullptr, 4);
    std::ostringstream key(std::ios::binary | std::ios::out);
    write_value(key, key_version);
    key.write(reinterpret_cast<const char *>(counters.data()), counters.size());
    write_string(key, fortress); write_string(key, world);
    write_value(key, year); write_value(key, id1); write_value(key, id2);
    return key.str();
}

struct SavedWordTables {
    std::vector<std::string> words, languages;
};
static SavedWordTables saved_word_tables(SavedSiteInput &input, NativeSavedNameVocabulary &vocabulary) {
    // ReadRawNames at game+7AE480: eight vectors of generated raw files,
    // followed by the ordered ID vectors. WORD is vector 8, language is 10.
    // Serialized indices refer to THIS order, never the installation's order.
    for (unsigned group = 0; group < 8; ++group) {
        const auto files = input.count();
        for (uint32_t file = 0; file < files; ++file) {
            const auto lines = input.count();
            std::string language;
            for (uint32_t line = 0; line < lines; ++line) {
                const auto value = input.string();
                if (group != 7) continue;
                if (value.starts_with("[TRANSLATION:") && value.ends_with(']'))
                    language = value.substr(13, value.size() - 14);
                else if (!language.empty() && value.starts_with("[T_WORD:") && value.ends_with(']')) {
                    const auto colon = value.rfind(':');
                    if (colon > 8 && colon + 1 < value.size() - 1)
                        vocabulary.original[language][value.substr(8, colon - 8)] =
                            value.substr(colon + 1, value.size() - colon - 2);
                }
            }
        }
    }
    SavedWordTables tables;
    for (unsigned group = 0; group <= 10; ++group) {
        const auto count = input.count();
        for (uint32_t index = 0; index < count; ++index) {
            auto value = input.string();
            if (group == 8) tables.words.push_back(std::move(value));
            else if (group == 10) tables.languages.push_back(std::move(value));
        }
    }
    if (tables.words.empty() || tables.languages.empty())
        throw std::runtime_error("Missing saved WORD identities");
    return tables;
}

static bool decode_saved_site(Record &record, const SavedWordTables &tables,
        const NativeSavedNameVocabulary &vocabulary, const NativeSaveNameSource &source) {
    const auto *bytes = record.bytes.data();
    // ReadSite at game+10994C0 starts with the generated name, followed by
    // civ, owner, site type, coordinates, and site ID. Check the entire prefix.
    if (field<uint32_t>(bytes, 1) || bytes[0] != 1 || field<int16_t>(bytes, 51) != 4 ||
            field<int16_t>(bytes, 61) != 0 || field<int32_t>(bytes, 53) < -1 ||
            field<int32_t>(bytes, 57) < -1) return false;
    const auto id = field<int32_t>(bytes, 67), language = field<int32_t>(bytes, 47);
    const auto x = field<int16_t>(bytes, 63), y = field<int16_t>(bytes, 65);
    if (id < 0 || id >= 131072 || x < 0 || x > 2048 || y < 0 || y > 2048 ||
            language < 0 || size_t(language) >= tables.languages.size()) return false;
    const auto native = vocabulary.original.find(tables.languages[size_t(language)]);
    if (native == vocabulary.original.end()) return false;
    const auto pair = split_generated_name_identity(source.original);
    if (!pair) return false;
    NativeHistoryName name;
    name.has_name = true; name.type = 4; name.language = language;
    name.site_id = id; name.site_type = 0; name.site_label = "player fortress";
    std::array<std::string, 7> spellings;
    for (size_t slot = 0; slot < name.words.size(); ++slot) {
        const auto index = field<int32_t>(bytes, 5 + slot * 4);
        auto &word = name.words[slot];
        word.part_of_speech = field<int16_t>(bytes, 33 + slot * 2);
        if (index == -1) continue;
        if (index < 0 || size_t(index) >= tables.words.size() ||
                word.part_of_speech < 0 || word.part_of_speech > 8) return false;
        word.id = tables.words[size_t(index)];
        const auto forms = vocabulary.english.find(word.id);
        const auto spelling = native->second.find(word.id);
        if (forms == vocabulary.english.end() || spelling == native->second.end()) return false;
        word.english_form = forms->second[size_t(word.part_of_speech)];
        word.has_form = !word.english_form.empty();
        spellings[slot] = spelling->second;
    }
    if (name.words[2].id.empty() && name.words[3].id.empty() && name.words[5].id.empty()) spellings[4].clear();
    for (const auto [begin, end] : {std::pair<size_t, size_t>{0, 2}, {2, 6}, {6, 7}}) {
        std::string group;
        for (size_t slot = begin; slot < end; ++slot) group += spellings[slot];
        if (group.empty()) continue;
        capitalize_native_history_original_name(group);
        if (!name.native_name.empty()) name.native_name += ' ';
        name.native_name += group;
    }
    const auto same = [](std::string_view a, std::string_view b) {
        return lower_native_name(native_text_to_utf8(a)) == lower_native_name(native_text_to_utf8(b));
    };
    const auto english = reconstruct_site_english_name(name);
    if (!english || !same(*english, pair->gloss) || !same(name.native_name, pair->native_name)) return false;
    record.name = std::move(name);
    return true;
}

static std::shared_ptr<const NativeHistoryName> recover_saved_site(const fs::path &path,
        const std::string &expected_key, const NativeSaveNameSource &source,
        NativeSavedNameVocabulary vocabulary) {
    SavedSiteInput input(path / L"world.sav");
    const auto key = saved_header_key(input, 0);
    if (key != expected_key) return {}; // The header can outlive a replaced file.
    auto indexed_key = key;
    std::memcpy(indexed_key.data(), &input.version, sizeof(input.version));
    try {
        auto record = read_index(index_path(indexed_key, input.size));
        if (input.matches(record)) return std::make_shared<NativeHistoryName>(std::move(record.name));
    } catch (...) {}
    input.position(8);
    if (saved_header_key(input, 0) != expected_key) return {};
    const auto tables = saved_word_tables(input, vocabulary);
    std::optional<Record> found;
    // Examine complete serialized prefixes, carrying 70 bytes across block
    // boundaries. Byte resemblance alone never admits a name: every WORD/POS
    // must bind and BOTH independent saved names must reconstruct exactly.
    std::array<unsigned char, 20070> window{};
    size_t carry = 0, previous_skip = 0;
    uint64_t previous_block = 0;
    do {
        const auto begin = input.cursor;
        const auto count = input.length - begin;
        std::memcpy(window.data() + carry, input.bytes.data() + begin, count);
        const auto total = carry + count;
        for (size_t at = 0; at + 71 <= total; ++at) {
            if (window[at] != 1 || field<uint32_t>(window.data(), at + 1) ||
                    field<int16_t>(window.data(), at + 51) != 4 ||
                    field<int16_t>(window.data(), at + 61) != 0) continue;
            Record record;
            record.compressed = input.compressed;
            record.block = at < carry ? previous_block : input.block;
            record.skip = static_cast<uint32_t>(at < carry ? previous_skip + at : begin + at - carry);
            if (!record.compressed) { record.block += record.skip; record.skip = 0; }
            std::memcpy(record.bytes.data(), window.data() + at, record.bytes.size());
            if (!decode_saved_site(record, tables, vocabulary, source)) continue;
            if (found && found->bytes != record.bytes) return {}; // Ambiguous identity is not a choice.
            if (!found) found = std::move(record);
        }
        carry = std::min<size_t>(70, total);
        std::memmove(window.data(), window.data() + total - carry, carry);
        // Non-final compressed blocks contain 20000 bytes. Reject an unusual
        // short intermediate block instead of losing the carry's provenance.
        previous_block = input.block;
        previous_skip = input.length >= carry ? input.length - carry : 0;
        input.cursor = input.length;
        const bool next = input.refill();
        if (!next) break;
        if (count < carry) return {};
    } while (true);
    if (!found) return {};
    Observed state;
    state.header_key = std::move(indexed_key); state.size = input.size;
    publish(state, *found);
    return std::make_shared<NativeHistoryName>(std::move(found->name));
}

static std::mutex recovered_mutex;
static std::unordered_map<std::string, std::shared_ptr<const NativeHistoryName>> recovered;
static void recover_header_name(uintptr_t header_address, NativeSaveNameSource &source) {
    if (source.game_type != 0 && source.game_type != 3 && source.game_type != 8 && source.game_type != 10) return;
    if (!split_generated_name_identity(source.original)) return;
    // The native save card owns an MSVC filesystem::path (wstring). Copy it;
    // do not reconstruct a directory from the display label or configuration.
    std::array<unsigned char, 32> value{};
    const auto address = native_history_object_field(header_address, "savegame_headerst", 0x190, 32);
    if (!native_history_copy_bytes(address, value.data(), value.size())) return;
    const auto count = field<uint64_t>(value.data(), 16), capacity = field<uint64_t>(value.data(), 24);
    if (!count || count > 32767 || count > capacity) return;
    std::wstring directory(size_t(count), L'\0');
    if (capacity < 8) std::memcpy(directory.data(), value.data(), count * sizeof(wchar_t));
    else if (!native_history_copy_bytes(field<uintptr_t>(value.data(), 0),
            directory.data(), count * sizeof(wchar_t))) return;
    if (directory.find(L'\0') != std::wstring::npos) return;
    NativeSaveNameSource captured;
    const auto key = capture_header_key(reinterpret_cast<const void *>(header_address), 0, captured);
    if (key.empty() || captured.original != source.original || captured.world_id1 != source.world_id1 ||
            captured.world_id2 != source.world_id2) return;
    std::string request = key;
    request.append(reinterpret_cast<const char *>(directory.data()), directory.size() * sizeof(wchar_t));
    uint64_t timestamp = 0;
    if (!native_history_copy(native_history_object_field(header_address,
            "savegame_headerst", 0x1b8, sizeof(timestamp)), timestamp)) return;
    const auto catalog = g_overlay.native_identity_translation_catalog_generation();
    request.append(reinterpret_cast<const char *>(&timestamp), sizeof(timestamp));
    request.append(reinterpret_cast<const char *>(&catalog), sizeof(catalog));
    {
        std::lock_guard lock(recovered_mutex);
        const auto cached = recovered.find(request);
        if (cached != recovered.end()) { source.identity = cached->second; return; }
    }
    auto vocabulary = g_overlay.saved_name_vocabulary();
    if (vocabulary.english.empty() || vocabulary.original.empty()) return;
    {
        std::lock_guard lock(recovered_mutex);
        if (recovered.size() >= 131072) return;
        if (!recovered.emplace(request, nullptr).second) return;
    }
    if (!queue_native_identity_translation_job(
            [request, key, source, path = fs::path(directory), vocabulary = std::move(vocabulary)]() mutable {
                std::shared_ptr<const NativeHistoryName> name;
                try { name = recover_saved_site(path, key, source, std::move(vocabulary)); } catch (...) {}
                std::lock_guard lock(recovered_mutex);
                const bool ready = bool(name);
                recovered.insert_or_assign(request, std::move(name));
                if (ready) g_native_save_name_revision.fetch_add(1, std::memory_order_release);
            }, "save-name:" + request)) {
        std::lock_guard lock(recovered_mutex);
        recovered.erase(request);
    }
}
} // namespace native_saved_sites
