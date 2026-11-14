// Observe native world-site serialization, not byte patterns or English words.
// The list reuses its own file_compressorst to read the indexed record. Index
// creation only accompanies a world load/save already requested by the game.
#ifdef _WIN32
namespace native_saved_sites {
using Open = bool (*)(void *, const NativeString *, bool);
using Header = bool (*)(void *, void *, int32_t);
using WriteHeader = bool (*)(void *, void *);
using Copy = void (*)(void *, const void *);
using Read = bool (*)(void *, void *, int32_t);
using ReadSite = void (*)(void *, void *, int32_t);
using WriteSite = void (*)(void *, void *);
using Close = void (*)(void *);
using CloseOutput = void *(*)(void *);
using Fixup = void (*)(void *, int32_t, bool);
using RawRead = void *(*)(void *, void *, int64_t);
using RawWrite = void *(*)(void *, const void *, int64_t);
using Seek = void *(*)(void *, int64_t, int32_t);
using Fileno = int (*)(void *);
using OsHandle = intptr_t (*)(int);
static Open open = nullptr;
static Header header = nullptr;
static WriteHeader write_header = nullptr;
static Copy copy = nullptr;
static Read read = nullptr;
static ReadSite read_site = nullptr;
static WriteSite write_site = nullptr;
static Close close = nullptr;
static CloseOutput close_output = nullptr;
static Fixup fixup = nullptr;
static Seek seek = nullptr;
static Fileno game_fileno = nullptr;
static OsHandle game_os_handle = nullptr;
static NativeCallHook hook;
static NativeImportHook raw_read_hook, raw_write_hook;

template<class T> static T field(const void *bytes, size_t offset) {
    T result{};
    std::memcpy(&result, static_cast<const unsigned char *>(bytes) + offset, sizeof(result));
    return result;
}
template<class T> static void write_value(std::ostream &output, const T &value) {
    output.write(reinterpret_cast<const char *>(&value), sizeof(value));
}
static void write_string(std::ostream &output, const std::string &value) {
    pe_runtime::write_number(output, static_cast<uint32_t>(value.size()));
    output.write(value.data(), static_cast<std::streamsize>(value.size()));
}

// FILE belongs to the game's UCRT. Never pass it to the core's MinGW CRT.
// Query the already-open handle; no configured directory or narrow path is used.
static uint64_t file_size(void *stream) {
    void *file = field<void *>(stream, 0xa0);
    if (!file) return 0;
    const int descriptor = game_fileno(file);
    if (descriptor < 0) return 0;
    const intptr_t handle = game_os_handle(descriptor);
    LARGE_INTEGER size{};
    return handle != -1 && GetFileSizeEx(reinterpret_cast<HANDLE>(handle), &size) &&
        size.QuadPart > 0 ? static_cast<uint64_t>(size.QuadPart) : 0;
}
struct Record {
    uint64_t block = 0;
    uint32_t skip = 0;
    bool compressed = false;
    // Generated namest plus the site's civ, owner, type, coordinates and ID.
    // The native reader/writer establishes the record boundary and owner.
    std::array<unsigned char, 71> bytes{};
    uintptr_t site = 0; // Only retained until the native load's fixup finishes.
    NativeHistoryName name;
};
struct Observed {
    void *stream = nullptr;
    bool reading = false;
    int32_t version = 0;
    uint64_t position = 0, block = 0, size = 0;
    std::string header_key;
    NativeSaveNameSource source;
    std::unordered_map<int32_t, Record> sites;
};
static std::mutex streams_mutex;
static std::unordered_map<void *, std::shared_ptr<Observed>> streams;
static std::shared_ptr<Observed> loaded;
static std::shared_ptr<Observed> observed(void *stream) {
    std::lock_guard lock(streams_mutex);
    const auto found = streams.find(stream);
    return found == streams.end() ? nullptr : found->second;
}
struct Pending {
    void *stream = nullptr;
    const void *header = nullptr;
    uint64_t size = 0;
    NativeSaveNameSource source;
};
static thread_local Pending pending;

static std::string capture_header_key(const void *output, int32_t version,
        NativeSaveNameSource &source) {
    source = {};
    source.game_type = field<int16_t>(output, 0xa4);
    source.world_id1 = field<uint32_t>(output, 0xf0);
    source.world_id2 = field<uint32_t>(output, 0xf4);
    if (source.game_type != 0 && source.game_type != 3 &&
            source.game_type != 8 && source.game_type != 10) return {};
    std::string world;
    if (!native_history_copy_string(reinterpret_cast<uintptr_t>(output) + 0xa8,
            source.original) || !native_history_copy_string(
                reinterpret_cast<uintptr_t>(output) + 0xc8, world)) return {};
    std::ostringstream key(std::ios::binary | std::ios::out);
    write_value(key, version);
    // Serialized counters, mode, names, year and world ID identify the snapshot.
    // Exclude native string pointers, padding and manual save titles.
    key.write(static_cast<const char *>(output), 0xa6);
    write_string(key, source.original);
    write_string(key, world);
    write_value(key, field<int32_t>(output, 0xe8));
    write_value(key, source.world_id1);
    write_value(key, source.world_id2);
    return key.str();
}
static fs::path index_path(std::string key, uint64_t size) {
    key.append(reinterpret_cast<const char *>(&size), sizeof(size));
    const auto digest = pe_runtime::sha256(
        reinterpret_cast<const unsigned char *>(key.data()), key.size());
    return runtime::path("save-name-index") / (pe_runtime::hex_digest(digest) + ".bin");
}
static bool capture_record(uintptr_t site, Record &record) {
    std::string first, nickname;
    if (!native_history_copy_string(site, first) || !first.empty() ||
            !native_history_copy_string(site + 0x20, nickname) || !nickname.empty() ||
            field<uint8_t>(reinterpret_cast<void *>(site), 0x72) != 1 ||
            field<int16_t>(reinterpret_cast<void *>(site), 0x70) != 4 ||
            field<int16_t>(reinterpret_cast<void *>(site), 0x80) != 0) return false;
    auto &bytes = record.bytes;
    bytes[0] = 1; // Two empty int16-length strings follow.
    std::memcpy(bytes.data() + 5, reinterpret_cast<void *>(site + 0x40), 42);
    std::memcpy(bytes.data() + 47, reinterpret_cast<void *>(site + 0x6c), 6);
    std::memcpy(bytes.data() + 53, reinterpret_cast<void *>(site + 0x78), 14);
    std::memcpy(bytes.data() + 67, reinterpret_cast<void *>(site + 0x88), 4);
    record.site = site;
    return field<int32_t>(bytes.data(), 67) >= 0;
}
static std::optional<Record> record_position(const Observed &state) {
    Record record;
    record.compressed = field<uint8_t>(state.stream, 0) != 0;
    record.block = state.position;
    if (record.compressed) {
        const int32_t capacity = field<int32_t>(state.stream, 0x128);
        const int32_t length = field<int32_t>(state.stream, 0x12c);
        const int32_t cursor = state.reading ? field<int32_t>(state.stream, 0x130) : length;
        if (capacity != 20000 || length < 0 || length > capacity ||
                cursor < 0 || cursor > length) return std::nullopt;
        if (!state.reading || cursor < length) {
            record.block = state.reading ? state.block : state.position;
            record.skip = static_cast<uint32_t>(cursor);
        }
    }
    return record.block >= 8 ? std::optional<Record>(std::move(record)) : std::nullopt;
}
static bool identify_fortress(Record &record, const NativeSaveNameSource &source) {
    const uintptr_t base = native_history_profile_base();
    const uintptr_t plotinfo = base ? native_reference_address(base,
        native_history_layout::plotinfo_rva) : 0;
    int32_t site_id = -1;
    if (!plotinfo || !native_history_copy(native_history_object_field(plotinfo,
            "plotinfost", 0x2444, sizeof(site_id)), site_id) || site_id < 0 ||
            site_id != field<int32_t>(record.bytes.data(), 67) ||
            native_history_find_subject(base, NativeHistoryObjectKind::Site, site_id) != record.site)
        return false;
    NativeHistoryName name;
    if (!capture_native_history_name(base, record.site, name, nullptr, true) ||
            !capture_native_history_original_name(base, record.site, name.native_name) ||
            !name.has_name || name.type != 4 || !name.first_name.empty() ||
            !name.nickname.empty()) return false;
    const auto pair = split_generated_name_identity(source.original);
    const auto english = reconstruct_site_english_name(name);
    if (!pair || !english || lower_native_name(*english) !=
            lower_native_name(std::string(pair->gloss)) ||
            lower_native_name(name.native_name) !=
            lower_native_name(std::string(pair->native_name))) return false;
    name.site_id = site_id;
    name.site_type = 0;
    name.site_label = "player fortress";
    record.name = std::move(name);
    return true;
}
static void publish(const Observed &state, const Record &record) {
    if (state.header_key.empty() || state.size < 8 || !record.name.has_name) return;
    const auto path = index_path(state.header_key, state.size);
    std::ostringstream output(std::ios::binary | std::ios::out);
    output.write("DFCNSS01", 8);
    pe_runtime::write_number(output, 1);
    write_value(output, record.block);
    write_value(output, record.skip);
    pe_runtime::write_number(output, record.compressed ? 1 : 0);
    output.write(reinterpret_cast<const char *>(record.bytes.data()), record.bytes.size());
    write_value(output, record.name.language);
    write_string(output, record.name.native_name);
    for (const auto &word : record.name.words) {
        write_string(output, word.id);
        write_value(output, word.part_of_speech);
        pe_runtime::write_number(output, word.has_form ? 1 : 0);
        write_string(output, word.english_form);
    }
    const auto payload = output.str();
    if (!output || payload.size() > 128 * 1024 - 32) return;
    const auto digest = pe_runtime::sha256(
        reinterpret_cast<const unsigned char *>(payload.data()), payload.size());
    std::error_code error;
    fs::create_directories(path.parent_path(), error);
    if (error) return;
    // Publish only a completed small index; never modify the world's files.
    const auto candidate = fs::path(path.wstring() + L"." +
        std::to_wstring(GetCurrentProcessId()) + L".publish");
    {
        std::ofstream file(candidate, std::ios::binary | std::ios::trunc);
        file.write(payload.data(), static_cast<std::streamsize>(payload.size()));
        file.write(reinterpret_cast<const char *>(digest.data()), digest.size());
        file.close();
        if (!file) { fs::remove(candidate, error); return; }
    }
    if (!MoveFileExW(candidate.c_str(), path.c_str(), MOVEFILE_REPLACE_EXISTING))
        fs::remove(candidate, error);
}
static Record read_index(const fs::path &path) {
    std::ifstream file(path, std::ios::binary | std::ios::ate);
    const auto length = file ? file.tellg() : std::streampos(-1);
    if (length < 0 || length > 128 * 1024) throw std::runtime_error("Missing save name index");
    std::vector<unsigned char> bytes(static_cast<size_t>(length));
    file.seekg(0);
    if (!file.read(reinterpret_cast<char *>(bytes.data()), length))
        throw std::runtime_error("Truncated save name index");
    pe_runtime::Reader input(std::move(bytes), true);
    input.magic("DFCNSS01");
    Record record;
    input.read(&record.block, sizeof(record.block));
    input.read(&record.skip, sizeof(record.skip));
    record.compressed = input.count(1) != 0;
    input.read(record.bytes.data(), record.bytes.size());
    auto &name = record.name;
    input.read(&name.language, sizeof(name.language));
    name.native_name = input.string();
    name.has_name = true;
    name.type = 4;
    name.site_id = field<int32_t>(record.bytes.data(), 67);
    name.site_type = 0;
    name.site_label = "player fortress";
    for (auto &word : name.words) {
        word.id = input.string();
        input.read(&word.part_of_speech, sizeof(word.part_of_speech));
        word.has_form = input.count(1) != 0;
        word.english_form = input.string();
    }
    input.finish();
    return record;
}
static bool read_indexed_record(void *stream, uint64_t size, const Record &record) {
    auto *native = static_cast<unsigned char *>(stream);
    const bool compressed = native[0] != 0;
    if (compressed != record.compressed || record.block < 8 || record.block >= size ||
            size > INT64_MAX || record.skip > 20000 || (!compressed && record.skip)) return false;
    const auto position = [&](uint64_t offset, bool packed) {
        seek(native + 8, static_cast<int64_t>(offset), 0);
        native[0] = packed ? 1 : 0;
        const uint64_t empty = 0;
        std::memcpy(native + 0x12c, &empty, sizeof(empty));
    };
    // The header is complete; the native list only closes the stream afterward.
    // Guard each indexed block's size before entering its inflater.
    std::array<unsigned char, 71> actual{};
    if (!compressed) {
        if (size - record.block < actual.size()) return false;
        position(record.block, false);
        return read(stream, actual.data(), static_cast<int32_t>(actual.size())) && actual == record.bytes;
    }
    uint64_t offset = record.block;
    size_t copied = 0, skip = record.skip;
    while (copied < actual.size()) {
        if (offset > size || size - offset < 4) return false;
        position(offset, false);
        uint32_t packed = 0;
        const bool valid = read(stream, &packed, 4) && packed && packed <= 80000 &&
            packed <= size - offset - 4;
        native[0] = 1;
        if (!valid) return false;
        position(offset, true);
        unsigned char first = 0;
        if (!read(stream, &first, 1)) return false;
        const int32_t length = field<int32_t>(stream, 0x12c);
        const auto *buffer = field<const unsigned char *>(stream, 0x120);
        if (!buffer || length <= 0 || length > 20000 || skip > size_t(length)) return false;
        const size_t count = std::min(actual.size() - copied, size_t(length) - skip);
        std::memcpy(actual.data() + copied, buffer + skip, count);
        copied += count;
        skip = 0;
        offset += uint64_t(packed) + 4;
    }
    return actual == record.bytes;
}
static void *observe_read(void *input, void *output, int64_t count) {
    NativeInputCallbackScope callback;
    auto state = observed(static_cast<unsigned char *>(input) - 8);
    const auto original = reinterpret_cast<RawRead>(raw_read_hook.original);
    void *result = callback.call_native([&] { return original(input, output, count); });
    if (state && state->reading && count > 0) {
        if (!state->position && count == 4) state->version = field<int32_t>(output, 0);
        // Some inlined refills keep the packed length on the stack. The
        // payload destination is the compressor's buffer in every variant.
        if (field<uint8_t>(state->stream, 0) && state->position >= 4 &&
                output == field<void *>(state->stream, 0x138))
            state->block = state->position - 4;
        state->position += static_cast<uint64_t>(count);
    }
    return result;
}
static void *observe_write(void *output, const void *input, int64_t count) {
    NativeInputCallbackScope callback;
    auto state = observed(static_cast<unsigned char *>(output) - 0x18);
    const auto original = reinterpret_cast<RawWrite>(raw_write_hook.original);
    void *result = callback.call_native([&] { return original(output, input, count); });
    if (state && !state->reading && count > 0) {
        if (!state->position && count == 4) state->version = field<int32_t>(input, 0);
        state->position += static_cast<uint64_t>(count);
    }
    return result;
}
static bool capture_world_open(void *stream, const NativeString *path, bool reading) {
    NativeInputCallbackScope callback;
    const bool result = callback.call_native([&] { return open(stream, path, reading); });
    try {
        std::lock_guard lock(streams_mutex);
        streams.erase(stream);
        if (reading) loaded.reset();
        if (result) {
            auto state = std::make_shared<Observed>();
            state->stream = stream;
            state->reading = reading;
            state->size = reading ? file_size(stream) : 0;
            if (streams.size() >= 8) streams.clear();
            streams.emplace(stream, std::move(state));
        }
    } catch (...) {}
    return result;
}
static bool capture_world_header(void *output, void *stream, int32_t version) {
    NativeInputCallbackScope callback;
    const bool result = callback.call_native([&] { return header(output, stream, version); });
    try {
        if (auto state = observed(stream); state && result)
            state->header_key = capture_header_key(output, version, state->source);
    } catch (...) {}
    return result;
}
static bool capture_write_header(void *input, void *stream) {
    NativeInputCallbackScope callback;
    const bool result = callback.call_native([&] { return write_header(input, stream); });
    try {
        if (auto state = observed(stream); state && result)
            state->header_key = capture_header_key(input, state->version, state->source);
    } catch (...) {}
    return result;
}
static void capture_read_site(void *site, void *stream, int32_t version) {
    NativeInputCallbackScope callback;
    auto state = observed(stream);
    auto record = state ? record_position(*state) : std::nullopt;
    callback.call_native([&] { read_site(site, stream, version); });
    try {
        if (state && record && state->sites.size() < 131072 &&
                capture_record(reinterpret_cast<uintptr_t>(site), *record))
            state->sites.insert_or_assign(field<int32_t>(record->bytes.data(), 67), std::move(*record));
    } catch (...) {}
}
static void capture_write_site(void *site, void *stream) {
    NativeInputCallbackScope callback;
    try {
        if (auto state = observed(stream); state && !state->header_key.empty()) {
            auto record = record_position(*state);
            if (record && capture_record(reinterpret_cast<uintptr_t>(site), *record) &&
                    identify_fortress(*record, state->source))
                state->sites.insert_or_assign(record->name.site_id, std::move(*record));
        }
    } catch (...) {}
    callback.call_native([&] { write_site(site, stream); });
}
static void capture_world_close(void *stream) {
    NativeInputCallbackScope callback;
    callback.call_native([&] { close(stream); });
    std::lock_guard lock(streams_mutex);
    const auto found = streams.find(stream);
    if (found != streams.end()) {
        loaded = std::move(found->second);
        streams.erase(found);
    }
}
static void capture_world_abort(void *stream) {
    NativeInputCallbackScope callback;
    callback.call_native([&] { close(stream); });
    std::lock_guard lock(streams_mutex);
    streams.erase(stream);
}
static void capture_fixup(void *objects, int32_t version, bool loading) {
    NativeInputCallbackScope callback;
    callback.call_native([&] { fixup(objects, version, loading); });
    try {
        std::shared_ptr<Observed> state;
        { std::lock_guard lock(streams_mutex); state = std::move(loaded); }
        if (state && loading && version == state->version)
            for (auto &[id, record] : state->sites)
                if (identify_fortress(record, state->source)) {
                    publish(*state, record);
                    break;
                }
    } catch (...) {}
}
static void *capture_output_close(void *filebuf) {
    NativeInputCallbackScope callback;
    void *stream = static_cast<unsigned char *>(filebuf) - 0x20;
    auto state = observed(stream);
    void *result = callback.call_native([&] { return close_output(filebuf); });
    try {
        { std::lock_guard lock(streams_mutex); streams.erase(stream); }
        if (state && result && !state->reading) {
            state->size = state->position;
            for (const auto &[id, record] : state->sites) publish(*state, record);
        }
    } catch (...) {}
    return result;
}
static bool capture_list_open(void *stream, const NativeString *path, bool reading) {
    NativeInputCallbackScope callback;
    const bool result = callback.call_native([&] { return open(stream, path, reading); });
    pending = {};
    if (result && reading) {
        pending.stream = stream;
        pending.size = file_size(stream);
    }
    return result;
}
static bool capture_list_header(void *output, void *stream, int32_t version) {
    NativeInputCallbackScope callback;
    const bool result = callback.call_native([&] { return header(output, stream, version); });
    try {
        if (!result || stream != pending.stream || !pending.size) return result;
        pending.header = output;
        const auto key = capture_header_key(output, version, pending.source);
        if (key.empty()) return result;
        auto record = read_index(index_path(key, pending.size));
        if (read_indexed_record(stream, pending.size, record))
            pending.source.identity = std::make_shared<NativeHistoryName>(std::move(record.name));
    } catch (...) { pending.source.identity.reset(); }
    return result;
}
static void capture_copy(void *output, const void *input) {
    NativeInputCallbackScope callback;
    callback.call_native([&] { copy(output, input); });
    try {
        std::lock_guard lock(g_native_save_name_mutex);
        const uintptr_t address = reinterpret_cast<uintptr_t>(output);
        if (g_native_save_header_names.size() >= 131072) g_native_save_header_names.clear();
        g_native_save_header_names.erase(address);
        if (input == pending.header && pending.source.identity)
            g_native_save_header_names.insert_or_assign(address, pending.source);
    } catch (...) {}
}
} // namespace native_saved_sites
#endif

static bool native_save_name_hook_active() {
#ifdef _WIN32
    using namespace native_saved_sites;
    return hook.active() || raw_read_hook.active() || raw_write_hook.active();
#else
    return false;
#endif
}
static void uninstall_native_save_name_hook() {
#ifdef _WIN32
    using namespace native_saved_sites;
    if (!native_callbacks_idle()) return;
    if (!hook.uninstall("Native save-list name slots") ||
            !raw_read_hook.uninstall("Native save read position") ||
            !raw_write_hook.uninstall("Native save write position")) return;
    { std::lock_guard lock(streams_mutex); streams.clear(); loaded.reset(); }
#endif
    std::lock_guard lock(g_native_save_name_mutex);
    g_native_save_header_names.clear();
}
static bool install_native_save_name_hook() {
#ifdef _WIN32
    using namespace native_saved_sites;
    if (hook.installed && raw_read_hook.installed && raw_write_hook.installed) return true;
    // Exact reviewed image identities; these are not generic relocated RVAs.
    if (!native_pe_5317()) return true;
    const uintptr_t base = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    const bool classic = native_pe_classic_5317();
    const auto runtime = GetModuleHandleW(L"msvcp140.dll");
    const auto crt = GetModuleHandleW(L"ucrtbase.dll");
    seek = runtime ? reinterpret_cast<Seek>(GetProcAddress(runtime,
        "?seekg@?$basic_istream@DU?$char_traits@D@std@@@std@@QEAAAEAV12@_JH@Z")) : nullptr;
    game_fileno = crt ? reinterpret_cast<Fileno>(GetProcAddress(crt, "_fileno")) : nullptr;
    game_os_handle = crt ? reinterpret_cast<OsHandle>(GetProcAddress(crt, "_get_osfhandle")) : nullptr;
    if (!base || !seek || !game_fileno || !game_os_handle) return false;
    const uintptr_t open_rva = classic ? 0xa65c70 : 0xa68660;
    const uintptr_t header_rva = classic ? 0x7cdee0 : 0x7d06e0;
    const uintptr_t write_header_rva = classic ? 0x7ce510 : 0x7d0d10;
    const uintptr_t copy_rva = classic ? 0x266480 : 0x268ac0;
    const uintptr_t read_site_rva = classic ? 0x1094210 : 0x10994c0;
    const uintptr_t write_site_rva = classic ? 0x10932b0 : 0x1098560;
    const uintptr_t close_rva = classic ? 0xa65c10 : 0xa68600;
    const uintptr_t close_output_rva = classic ? 0x14c0f0 : 0x14c160;
    const uintptr_t fixup_rva = classic ? 0x1454180 : 0x1459430;
    open = reinterpret_cast<Open>(base + open_rva);
    header = reinterpret_cast<Header>(base + header_rva);
    write_header = reinterpret_cast<WriteHeader>(base + write_header_rva);
    copy = reinterpret_cast<Copy>(base + copy_rva);
    read = reinterpret_cast<Read>(base + (classic ? 0xa659c0 : 0xa683b0));
    read_site = reinterpret_cast<ReadSite>(base + read_site_rva);
    write_site = reinterpret_cast<WriteSite>(base + write_site_rva);
    close = reinterpret_cast<Close>(base + close_rva);
    close_output = reinterpret_cast<CloseOutput>(base + close_output_rva);
    fixup = reinterpret_cast<Fixup>(base + fixup_rva);
    raw_read_hook.slot = reinterpret_cast<void **>(base + (classic ? 0x15fb568 : 0x16005a8));
    raw_read_hook.replacement = reinterpret_cast<void *>(&observe_read);
    raw_write_hook.slot = reinterpret_cast<void **>(base + (classic ? 0x15fb560 : 0x16005a0));
    raw_write_hook.replacement = reinterpret_cast<void *>(&observe_write);
    // Observe raw imports, including inlined compressor refills. Patching
    // only ReadBytes would miss those block boundaries.
    if (!raw_read_hook.install("Native save read position") ||
            !raw_write_hook.install("Native save write position")) return false;
    return hook.install(base, {
        {classic ? 0x265cdfu : 0x26831fu, open_rva, reinterpret_cast<const void *>(&capture_list_open)},
        {classic ? 0x265dbdu : 0x2683fdu, header_rva, reinterpret_cast<const void *>(&capture_list_header)},
        {classic ? 0x265df4u : 0x268434u, copy_rva, reinterpret_cast<const void *>(&capture_copy)},
        {classic ? 0x7d3616u : 0x7d5fb6u, open_rva, reinterpret_cast<const void *>(&capture_world_open)},
        {classic ? 0x7cbd60u : 0x7ce560u, open_rva, reinterpret_cast<const void *>(&capture_world_open)},
        {classic ? 0x7d3705u : 0x7d60a5u, header_rva, reinterpret_cast<const void *>(&capture_world_header)},
        {classic ? 0x7cbde7u : 0x7ce5e7u, write_header_rva, reinterpret_cast<const void *>(&capture_write_header)},
        {classic ? 0xf1812bu : 0xf1d3dbu, read_site_rva, reinterpret_cast<const void *>(&capture_read_site)},
        {classic ? 0xf16497u : 0xf1b747u, write_site_rva, reinterpret_cast<const void *>(&capture_write_site)},
        {classic ? 0x7d43e5u : 0x7d6d85u, close_rva, reinterpret_cast<const void *>(&capture_world_close)},
        {classic ? 0x7d36f1u : 0x7d6091u, close_rva, reinterpret_cast<const void *>(&capture_world_abort)},
        {classic ? 0x7d4456u : 0x7d6df6u, fixup_rva, reinterpret_cast<const void *>(&capture_fixup)},
        {classic ? 0x7cdabau : 0x7d02bau, close_output_rva, reinterpret_cast<const void *>(&capture_output_close)},
    }, "Native save-list name slots");
#else
    return true;
#endif
}
