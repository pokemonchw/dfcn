// The title screen calls ReadSaveHeader with an open file_compressorst.
// Extend that call, before the header is published to the list. All bytes
// below go through the game's ReadBytes, including its existing inflate
// implementation. There is no worker, second file handle or render-time IO.
#ifdef _WIN32
namespace native_saved_sites {
using Open = bool (*)(void *, const NativeString *, bool);
using Header = bool (*)(void *, void *, int32_t);
using Copy = void (*)(void *, const void *);
using Read = bool (*)(void *, void *, int32_t);
using Seek = void *(*)(void *, int64_t, int32_t);
static Open open = nullptr;
static Header header = nullptr;
static Copy copy = nullptr;
static Read read = nullptr;
static Seek seek = nullptr;
static NativeCallHook hook;

struct Pending {
    void *stream = nullptr;
    std::string file_key;
    uintmax_t file_size = 0;
    NativeSaveNameSource source;
};
static thread_local Pending pending;
struct Cached {
    std::string key;
    NativeSaveNameSource source;
};
static std::vector<Cached> cache;

template<class T> static T field(const unsigned char *bytes, size_t offset) {
    T result{};
    std::memcpy(&result, bytes + offset, sizeof(result));
    return result;
}

struct Reader {
    void *stream;
    size_t remaining = 32 * 1024 * 1024;
    bool bytes(void *output, size_t size) {
        if (size > remaining || size > INT32_MAX) return false;
        remaining -= size;
        return read(stream, output, static_cast<int32_t>(size));
    }
    template<class T> bool value(T &output) { return bytes(&output, sizeof(output)); }
    bool string(std::string *output = nullptr) {
        int16_t length = -1;
        if (!value(length) || length < 0) return false;
        if (output) {
            output->resize(size_t(length));
            return !length || bytes(output->data(), size_t(length));
        }
        std::array<char, 4096> ignored;
        for (size_t left = size_t(length); left;) {
            const size_t count = std::min(left, ignored.size());
            if (!bytes(ignored.data(), count)) return false;
            left -= count;
        }
        return true;
    }
};

static std::shared_ptr<const NativeHistoryName> read_site(void *stream,
        const NativeSaveNameSource &source, uintmax_t file_size) {
    auto *native = static_cast<unsigned char *>(stream);
    // This adapter is for the reviewed 3602 compressed serialization only.
    // Other formats retain English; never feed a different layout to it.
    if (!native[0] || file_size < 12 || file_size > INT64_MAX) return {};
    Reader input{stream};
    // Generated RAW records precede the saved ID dictionaries. Read just
    // this prefix, retaining WORD and language IDs (not current-world IDs).
    uint32_t count = 0, lines = 0;
    for (size_t group = 0; group < 8; ++group) {
        if (!input.value(count) || count > 1000000) return {};
        for (uint32_t entry = 0; entry < count; ++entry) {
            if (!input.value(lines) || lines > 1000000) return {};
            for (uint32_t line = 0; line < lines; ++line)
                if (!input.string()) return {};
        }
    }
    std::vector<std::string> words, languages;
    for (size_t table = 0; table < 11; ++table) {
        if (!input.value(count) || count > 1000000) return {};
        auto *saved = table == 8 ? &words : table == 10 ? &languages : nullptr;
        if (saved) saved->resize(count);
        for (uint32_t index = 0; index < count; ++index)
            if (!input.string(saved ? &(*saved)[index] : nullptr)) return {};
    }
    if (words.empty() || languages.empty()) return {};

    const auto position = [&](uint64_t offset, bool compressed) {
        // MSVC basic_istream::seekg on the game's own fstream. Discard only
        // file_compressorst's decoded-block cursor, not any game object.
        seek(native + 8, static_cast<int64_t>(offset), 0);
        native[0] = compressed ? 1 : 0;
        const uint64_t empty = 0;
        std::memcpy(native + 0x12c, &empty, sizeof(empty));
    };
    // Each independently compressed block carries its packed byte count.
    // Index those four-byte counts by seeking over payloads, without
    // decompressing units, items, map data or historical events.
    std::vector<uint64_t> blocks;
    for (uint64_t offset = 8; offset < file_size;) {
        if (file_size - offset < 4 || blocks.size() >= 1048576) return {};
        position(offset, false);
        uint32_t packed = 0;
        if (!read(stream, &packed, 4) || !packed || packed > 80000 ||
                packed > file_size - offset - 4) return {};
        blocks.push_back(offset);
        offset += uint64_t(packed) + 4;
    }

    // world_site records are in the late world-data section. Search blocks
    // from that end, stopping as soon as the complete native/English pair
    // identifies a saved PlayerFortress record. Keep only one block plus
    // the next block's prefix for a record crossing the block boundary.
    // A bounded miss is missing source information, never guessed slots.
    constexpr size_t record_size = 71;
    size_t budget = 64 * 1024 * 1024;
    std::vector<unsigned char> next, block;
    for (auto at = blocks.rbegin(); at != blocks.rend(); ++at) {
        position(*at, true);
        unsigned char first = 0;
        if (!read(stream, &first, 1)) return {};
        const auto length = field<int32_t>(native, 0x12c);
        const auto buffer = field<const unsigned char *>(native, 0x120);
        if (!buffer || length <= 0 || length > 20000 || size_t(length) > budget) return {};
        budget -= size_t(length);
        block.assign(buffer, buffer + length);
        block.insert(block.end(), next.begin(), next.end());
        std::shared_ptr<const NativeHistoryName> found;
        for (size_t offset = 0; offset < size_t(length) &&
                offset + record_size <= block.size(); ++offset) {
            const auto *p = block.data() + offset;
            // namest.used, empty first/nickname, Site, PlayerFortress.
            // The following site fields are read in this order by the
            // native world_site deserializer (Steam 53.17 RVA 10994c0).
            if (p[0] != 1 || field<uint32_t>(p, 1) ||
                    field<int16_t>(p, 51) != 4 || field<int16_t>(p, 61) != 0 ||
                    field<int32_t>(p, 53) < -1 || field<int32_t>(p, 57) < -1 ||
                    field<int16_t>(p, 63) < 0 || field<int16_t>(p, 65) < 0 ||
                    field<int32_t>(p, 67) < 0) continue;
            NativeHistoryName name;
            name.has_name = true;
            name.type = 4;
            name.site_type = 0;
            name.site_id = field<int32_t>(p, 67);
            name.language = field<int32_t>(p, 47);
            if (name.language < 0 || size_t(name.language) >= languages.size()) continue;
            bool valid = true, used = false;
            for (size_t slot = 0; slot < name.words.size(); ++slot) {
                const auto index = field<int32_t>(p, 5 + slot * 4);
                auto &word = name.words[slot];
                word.part_of_speech = field<int16_t>(p, 33 + slot * 2);
                if (index == -1) continue;
                if (index < 0 || size_t(index) >= words.size() ||
                        word.part_of_speech < 0 || word.part_of_speech > 8) {
                    valid = false;
                    break;
                }
                word.id = words[size_t(index)];
                used = true;
            }
            if (!valid || !used || !g_overlay.match_saved_site_name(name,
                    languages[size_t(name.language)], source.original)) continue;
            if (found) return {}; // Two candidate owners in the same block.
            found = std::make_shared<NativeHistoryName>(std::move(name));
        }
        if (found) return found;
        next.assign(block.begin(), block.begin() + std::min(record_size - 1, block.size()));
    }
    return {};
}

static bool capture_open(void *stream, const NativeString *path, bool reading) {
    NativeInputCallbackScope callback;
    const bool result = callback.call_native([&] { return open(stream, path, reading); });
    pending = {};
    try {
        std::string_view spelling;
        if (!result || !reading || !native_string_view(path, &spelling, 32768)) return result;
        const fs::path file{std::string(spelling)};
        std::error_code error;
        const auto size = fs::file_size(file, error);
        if (error) return result;
        const auto modified = fs::last_write_time(file, error);
        if (error) return result;
        pending.stream = stream;
        pending.file_size = size;
        pending.file_key = std::string(spelling) + '\t' + std::to_string(size) + '\t' +
            std::to_string(modified.time_since_epoch().count());
    } catch (...) { pending = {}; }
    return result;
}

static bool capture_header(void *output, void *stream, int32_t version) {
    NativeInputCallbackScope callback;
    const bool result = callback.call_native([&] { return header(output, stream, version); });
    try {
        if (!result || stream != pending.stream || version != 3602) return result;
        const auto *bytes = static_cast<const unsigned char *>(output);
        auto &source = pending.source;
        source.game_type = field<int16_t>(bytes, 0xa4);
        source.world_id1 = field<uint32_t>(bytes, 0xf0);
        source.world_id2 = field<uint32_t>(bytes, 0xf4);
        if (source.game_type != 0 && source.game_type != 3 &&
                source.game_type != 8 && source.game_type != 10) return result;
        if (!native_history_copy_string(reinterpret_cast<uintptr_t>(output) + 0xa8,
                source.original)) return result;
        for (const auto &entry : cache)
            if (entry.key == pending.file_key && entry.source.original == source.original &&
                    entry.source.world_id1 == source.world_id1 &&
                    entry.source.world_id2 == source.world_id2) {
                source.identity = entry.source.identity;
                return result;
            }
        source.identity = read_site(stream, source, pending.file_size);
        if (cache.size() >= 256) cache.erase(cache.begin());
        cache.push_back({pending.file_key, source});
    } catch (...) { pending.source.identity.reset(); }
    return result;
}

static void capture_copy(void *output, const void *input) {
    NativeInputCallbackScope callback;
    callback.call_native([&] { copy(output, input); });
    try {
        std::lock_guard lock(g_native_save_name_mutex);
        if (g_native_save_header_names.size() >= 131072) g_native_save_header_names.clear();
        g_native_save_header_names.insert_or_assign(reinterpret_cast<uintptr_t>(output), pending.source);
    } catch (...) {}
}
} // namespace native_saved_sites
#endif

static bool native_save_name_hook_active() {
#ifdef _WIN32
    return native_saved_sites::hook.active();
#else
    return false;
#endif
}
static void uninstall_native_save_name_hook() {
#ifdef _WIN32
    if (!native_callbacks_idle()) return;
    if (!native_saved_sites::hook.uninstall("Native save-list name slots")) return;
    native_saved_sites::cache.clear();
#endif
    std::lock_guard lock(g_native_save_name_mutex);
    g_native_save_header_names.clear();
}
static bool install_native_save_name_hook() {
#ifdef _WIN32
    using namespace native_saved_sites;
    if (hook.installed) return true;
    // These RVAs belong only to the exact reviewed 53.17 image digests.
    // Do not treat a generic relocated image as either of these builds.
    if (!native_pe_5317()) return true;
    const uintptr_t base = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    const bool classic = native_pe_classic_5317();
    const uintptr_t open_call = classic ? 0x265cdf : 0x26831f;
    const uintptr_t header_call = classic ? 0x265dbd : 0x2683fd;
    const uintptr_t copy_call = classic ? 0x265df4 : 0x268434;
    const uintptr_t open_rva = classic ? 0xa65c70 : 0xa68660;
    const uintptr_t header_rva = classic ? 0x7cdee0 : 0x7d06e0;
    const uintptr_t copy_rva = classic ? 0x266480 : 0x268ac0;
    const uintptr_t read_rva = classic ? 0xa659c0 : 0xa683b0;
    const auto runtime = GetModuleHandleW(L"msvcp140.dll");
    seek = runtime ? reinterpret_cast<Seek>(GetProcAddress(runtime,
        "?seekg@?$basic_istream@DU?$char_traits@D@std@@@std@@QEAAAEAV12@_JH@Z")) : nullptr;
    if (!base || !seek) return false;
    open = reinterpret_cast<Open>(base + open_rva);
    header = reinterpret_cast<Header>(base + header_rva);
    copy = reinterpret_cast<Copy>(base + copy_rva);
    read = reinterpret_cast<Read>(base + read_rva);
    return hook.install(base, {
        {open_call, open_rva, reinterpret_cast<const void *>(&capture_open)},
        {header_call, header_rva, reinterpret_cast<const void *>(&capture_header)},
        {copy_call, copy_rva, reinterpret_cast<const void *>(&capture_copy)},
    }, "Native save-list name slots");
#else
    return true;
#endif
}
