#pragma once

#include "runtime_paths.h"
#include <SDL2/SDL.h>

#include <algorithm>
#include <array>
#include <charconv>
#include <cctype>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <map>
#include <mutex>
#include <optional>
#include <set>
#include <string>
#include <string_view>
#include <tuple>
#include <utility>
#include <vector>

#ifndef TOML_EXCEPTIONS
#define TOML_EXCEPTIONS 0
#endif
#include <toml++/toml.hpp>

#if !defined(_WIN32)
#include <dlfcn.h>
#endif

namespace dfcn::extensions {

namespace fs = std::filesystem;

// SDL owns this process-local choice, so it survives a core image reload
// without changing the resident loader ABI or writing a configuration file.
inline constexpr const char* enabled_hint = "DFCN_TRANSLATION_EXTENSIONS_ENABLED";

inline bool enabled() {
    return SDL_GetHintBoolean(enabled_hint, SDL_TRUE) == SDL_TRUE;
}

inline bool set_enabled(bool value) {
    return SDL_SetHintWithPriority(enabled_hint, value ? "1" : "0",
                                  SDL_HINT_OVERRIDE) == SDL_TRUE;
}

struct Package {
    std::string id, name, language, mod_id;
    int64_t version = 0;
    fs::path root, manifest, translations, rulesets;
    bool operator==(const Package&) const = default;
};

struct ResourceStamp {
    fs::path path;
    fs::file_time_type modified{};
    uintmax_t size = 0;
    uint64_t fingerprint = 0;
    bool exists = false, readable = false, directory = false;
    bool operator==(const ResourceStamp&) const = default;
};

struct Snapshot {
    std::vector<Package> packages;
    std::vector<ResourceStamp> resources;
    std::vector<std::string> diagnostics;
    // The semantic-search model is an optional, independent data mod. It is
    // discovered from the same installed mod roots as translation extensions.
    fs::path semantic_model;
    // Optional native modules use the same subscription-aware installation
    // roots. Workshop candidates precede local packages and the core fallback.
    std::vector<fs::path> mouse_coordinates_modules;
    // Map preview is supplied only by a currently subscribed Workshop mod.
    // Local copies and cached subscription metadata cannot enable it.
    std::vector<fs::path> map_preview_modules;
    // Riding is also supplied only by a currently subscribed, installed item.
    std::vector<fs::path> riding_modules;
    // An available empty Steam list is authoritative, including after the
    // final extension is unsubscribed while its download remains on disk.
    bool steam_subscriptions_available = false;
    std::vector<uint64_t> subscribed_items;
};

namespace detail {

inline fs::path canonical_path(const fs::path& path) {
    std::error_code error;
    auto result = fs::weakly_canonical(path, error);
    return error ? fs::path{} : result;
}

inline bool within(const fs::path& root, const fs::path& path) {
    const auto base = canonical_path(root);
    const auto resolved = canonical_path(path);
    if (base.empty() || resolved.empty()) return false;
    auto left = base.begin(), right = resolved.begin();
    for (; left != base.end(); ++left, ++right)
        if (right == resolved.end() || *left != *right) return false;
    return right != resolved.end();
}

inline ResourceStamp stamp(const fs::path& path) {
    ResourceStamp result;
    result.path = path.lexically_normal();
    std::error_code error;
    const auto status = fs::status(path, error);
    if (error || !fs::exists(status)) return result;
    result.exists = true;
    result.directory = fs::is_directory(status);
    result.modified = fs::last_write_time(path, error);
    if (error) result.modified = {};
    if (result.directory) {
        result.readable = true;
        return result;
    }
    if (!fs::is_regular_file(status)) return result;
    result.size = fs::file_size(path, error);
    if (error) result.size = 0;
    std::ifstream input(path, std::ios::binary);
    if (!input) return result;
    uint64_t hash = 14695981039346656037ULL;
    std::array<char, 16384> buffer;
    while (input.read(buffer.data(), buffer.size()) || input.gcount()) {
        for (std::streamsize i = 0; i < input.gcount(); ++i) {
            hash ^= static_cast<unsigned char>(buffer[static_cast<size_t>(i)]);
            hash *= 1099511628211ULL;
        }
    }
    result.readable = !input.bad();
    if (result.readable) result.fingerprint = hash;
    return result;
}

inline std::optional<std::string> text(const fs::path& path) {
    std::error_code error;
    const auto size = fs::file_size(path, error);
    if (error || size > 4 * 1024 * 1024) return std::nullopt;
    std::ifstream input(path, std::ios::binary);
    if (!input) return std::nullopt;
    std::string content(static_cast<size_t>(size), '\0');
    if (size && !input.read(content.data(), static_cast<std::streamsize>(size)))
        return std::nullopt;
    return content;
}

inline std::optional<std::string> info_value(std::string_view info,
                                            std::string_view key) {
    const std::string prefix = "[" + std::string(key) + ":";
    const auto at = info.find(prefix);
    if (at == std::string_view::npos) return std::nullopt;
    const auto end = info.find(']', at + prefix.size());
    if (end == std::string_view::npos) return std::nullopt;
    return std::string(info.substr(at + prefix.size(), end - at - prefix.size()));
}

inline bool identifier(std::string_view id) {
    return !id.empty() && std::all_of(id.begin(), id.end(), [](unsigned char ch) {
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
               (ch >= '0' && ch <= '9') || ch == '_' || ch == '-' || ch == '.';
    });
}

template<typename Number>
inline std::optional<Number> number(std::string_view source) {
    Number result{};
    const auto parsed = std::from_chars(source.data(), source.data() + source.size(), result);
    if (parsed.ec != std::errc{} || parsed.ptr != source.data() + source.size())
        return std::nullopt;
    return result;
}

inline fs::path game_directory() {
#if defined(_WIN32)
    std::vector<wchar_t> filename(32768);
    const auto length = GetModuleFileNameW(nullptr, filename.data(),
                                         static_cast<DWORD>(filename.size()));
    if (length && length < filename.size())
        return fs::path(std::wstring(filename.data(), length)).parent_path();
#else
    std::error_code link_error;
    const auto executable = fs::read_symlink("/proc/self/exe", link_error);
    if (!link_error && !executable.empty()) return executable.parent_path();
#endif
    std::error_code error;
    return fs::current_path(error);
}

// Steam's KeyValues files are metadata only. This parser reads quoted keys,
// values and nested objects without running package code or loading a DLL.
struct KeyValues {
    std::string value;
    std::vector<std::pair<std::string, KeyValues>> children;
    const KeyValues* find(std::string_view name) const {
        for (const auto& [key, child] : children)
            if (key == name) return &child;
        return nullptr;
    }
};

inline std::optional<KeyValues> key_values(std::string_view source) {
    size_t at = 0;
    const auto token = [&]() -> std::optional<std::string> {
        while (at < source.size()) {
            if (std::isspace(static_cast<unsigned char>(source[at]))) { ++at; continue; }
            if (source.substr(at, 2) == "//") {
                at = source.find('\n', at + 2);
                if (at == std::string_view::npos) at = source.size();
                continue;
            }
            break;
        }
        if (at == source.size()) return std::nullopt;
        const char first = source[at++];
        if (first == '{' || first == '}') return std::string(1, first);
        if (first != '"') return std::nullopt;
        std::string result;
        while (at < source.size()) {
            const char ch = source[at++];
            if (ch == '"') return result;
            if (ch == '\\' && at < source.size()) result.push_back(source[at++]);
            else result.push_back(ch);
        }
        return std::nullopt;
    };
    const auto parse = [&](auto&& self, KeyValues& node, unsigned depth) -> bool {
        if (depth > 32) return false;
        while (auto key = token()) {
            if (*key == "}") return depth != 0;
            if (*key == "{") return false;
            const auto value = token();
            if (!value || *value == "}") return false;
            KeyValues child;
            if (*value == "{") {
                if (!self(self, child, depth + 1)) return false;
            } else child.value = *value;
            node.children.emplace_back(std::move(*key), std::move(child));
        }
        return depth == 0;
    };
    KeyValues result;
    if (!parse(parse, result, 0)) return std::nullopt;
    return result;
}

inline void add_library(std::set<fs::path>& libraries, const fs::path& location) {
    auto current = canonical_path(location);
    while (!current.empty()) {
        if (current.filename() == "steamapps") { libraries.insert(current); return; }
        const auto parent = current.parent_path();
        if (parent == current) return;
        current = parent;
    }
}

struct SteamSubscriptions {
    bool available = false;
    // Unlike available, current is never retained when the live API fails.
    // Subscription-only modules must not use a previously cached membership.
    bool current = false;
    std::set<uint64_t> ids;
    std::map<uint64_t, fs::path> directories;
};

inline SteamSubscriptions subscriptions() {
    // Reuse only the game's already initialized Steam API. Remember the last
    // authoritative list if the interface temporarily disappears; a cached
    // workshop directory must not restore a previously unsubscribed item.
    static std::mutex mutex;
    static SteamSubscriptions last;
    std::lock_guard<std::mutex> lock(mutex);
#if defined(_WIN32)
    const auto module = GetModuleHandleW(L"steam_api64.dll");
    if (!module) return last;
    const auto symbol = [&](const char* name) { return GetProcAddress(module, name); };
#else
    const auto symbol = [](const char* name) { return dlsym(RTLD_DEFAULT, name); };
#endif
    const auto user = reinterpret_cast<int32_t (*)()>(symbol("SteamAPI_GetHSteamUser"));
    if (!user || !user()) return last;
    using Factory = void* (*)();
    const auto factory21 = reinterpret_cast<Factory>(symbol("SteamAPI_SteamUGC_v021"));
    const auto factory20 = reinterpret_cast<Factory>(symbol("SteamAPI_SteamUGC_v020"));
    const auto factory16 = reinterpret_cast<Factory>(symbol("SteamAPI_SteamUGC_v016"));
    void* ugc = factory21 ? factory21() : nullptr;
    if (!ugc && factory20) ugc = factory20();
    const bool modern = ugc != nullptr;
    if (!ugc && factory16) ugc = factory16();
    if (!ugc) return last;
    const auto count_symbol = symbol("SteamAPI_ISteamUGC_GetNumSubscribedItems");
    const auto items_symbol = symbol("SteamAPI_ISteamUGC_GetSubscribedItems");
    using InstallInfo = bool (*)(void*, uint64_t, uint64_t*, char*, uint32_t, uint32_t*);
    const auto install = reinterpret_cast<InstallInfo>(symbol("SteamAPI_ISteamUGC_GetItemInstallInfo"));
    if (!count_symbol || !items_symbol || !install) return last;
    const auto count = modern
        ? reinterpret_cast<uint32_t (*)(void*, bool)>(count_symbol)(ugc, false)
        : reinterpret_cast<uint32_t (*)(void*)>(count_symbol)(ugc);
    if (count > 100000) return last;
    std::vector<uint64_t> items(count);
    const auto copied = count == 0 ? 0 : modern
        ? reinterpret_cast<uint32_t (*)(void*, uint64_t*, uint32_t, bool)>(items_symbol)(
            ugc, items.data(), count, false)
        : reinterpret_cast<uint32_t (*)(void*, uint64_t*, uint32_t)>(items_symbol)(
            ugc, items.data(), count);
    if (copied > count || (count && !copied)) return last;
    SteamSubscriptions result;
    result.available = true;
    result.current = true;
    for (size_t i = 0; i < copied; ++i) {
        result.ids.insert(items[i]);
        uint64_t size = 0;
        uint32_t updated = 0;
        std::array<char, 32768> folder{};
        if (install(ugc, items[i], &size, folder.data(), folder.size(), &updated) &&
                folder.front() && folder.back() == '\0')
            result.directories.emplace(items[i], fs::u8path(folder.data()));
    }
    last = result;
    last.current = false;
    return result;
}

inline fs::path resource_path(const fs::path& root, std::string_view value) {
    if (value.empty() || value.find('\0') != std::string_view::npos) return {};
    const auto relative = fs::u8path(value.begin(), value.end());
    if (relative.has_root_path()) return {};
    for (const auto& component : relative)
        if (component == "..") return {};
    const auto resolved = canonical_path(root / relative);
    return within(root, resolved) ? resolved : fs::path{};
}

inline std::vector<fs::path> native_module_candidates(const SteamSubscriptions& steam,
        std::string_view package_id, std::string_view library,
        Snapshot* snapshot = nullptr, const fs::path& local_package = {}) {
    std::vector<fs::path> modules;
    const auto watch = [&](const fs::path& path) {
        if (snapshot) snapshot->resources.push_back(stamp(path));
    };
    const auto diagnose = [&](const fs::path& manifest, std::string_view reason) {
        if (snapshot) snapshot->diagnostics.push_back(runtime::utf8(manifest) +
            ": " + std::string(reason));
    };
    std::vector<std::pair<int64_t, fs::path>> candidates;
    std::set<fs::path> visited;
    const auto add_package = [&](const fs::path& directory, std::optional<uint64_t> item) {
        const auto root = canonical_path(directory);
        if (root.empty() || !visited.insert(root).second) return;
        const auto manifest = root / (std::string(package_id) + ".toml");
        watch(root);
        watch(manifest);
        std::error_code error;
        if (!within(root, manifest) || !fs::is_regular_file(manifest, error) || error)
            return;
        const auto info_path = root / "info.txt";
        watch(info_path);
        if (!within(root, info_path)) return;
        const auto info = text(info_path);
        const auto info_id = info ? info_value(*info, "ID") : std::nullopt;
        const auto declared_version = info ? info_value(*info, "NUMERIC_VERSION") : std::nullopt;
        const auto version = declared_version ? number<int64_t>(*declared_version) : std::nullopt;
        const auto declared_item = info ? info_value(*info, "STEAM_FILE_ID") : std::nullopt;
        const auto linked_item = declared_item ? number<uint64_t>(*declared_item) : std::nullopt;
        if (!info_id || *info_id != package_id || !version || *version < 0 ||
                (declared_item && (!linked_item || (*linked_item && item && *linked_item != *item)))) {
            diagnose(manifest, "invalid native mod identity, version or Workshop item");
            return;
        }
        const auto data = text(manifest);
        if (!data) {
            diagnose(manifest, "cannot read native mod manifest");
            return;
        }
        const auto parsed = toml::parse(*data, runtime::utf8(manifest));
        if (!parsed) {
            diagnose(manifest, parsed.error().description());
            return;
        }
        const auto schema = parsed["schema"].value<int64_t>();
        const auto id = parsed["id"].value<std::string>();
        const auto module = parsed["module"].value<std::string>();
        if (!schema || *schema != 1 || !id || *id != package_id ||
                !module || *module != library) {
            diagnose(manifest, "invalid native mod manifest");
            return;
        }
        const auto module_path = resource_path(root, *module);
        if (module_path.empty()) {
            diagnose(manifest, "native module path is outside its package");
            return;
        }
        watch(module_path);
        error.clear();
        if (!fs::is_regular_file(module_path, error) || error) {
            diagnose(manifest, "missing native module");
            return;
        }
        candidates.emplace_back(*version, module_path);
    };
    if (steam.available && steam.current) {
        for (const auto& [item, directory] : steam.directories)
            if (item && steam.ids.contains(item)) add_package(directory, item);
    }
    // Local installation is explicit. Never infer it from Steam caches or
    // the game's installed_mods copies, which can survive unsubscription.
    if (candidates.empty() && !local_package.empty()) add_package(local_package, std::nullopt);
    std::sort(candidates.begin(), candidates.end(), [](const auto& left, const auto& right) {
        if (left.first != right.first) return left.first > right.first;
        return left.second < right.second;
    });
    for (const auto& candidate : candidates) modules.push_back(candidate.second);
    return modules;
}

inline std::vector<fs::path> map_preview_modules(const SteamSubscriptions& steam,
                                                Snapshot* snapshot = nullptr) {
    return native_module_candidates(steam, "dfcn-map-preview",
        "dfcn/dfcn_map_preview.dll", snapshot);
}

inline std::vector<fs::path> riding_modules(const SteamSubscriptions& steam,
                                          Snapshot* snapshot = nullptr) {
    return native_module_candidates(steam, "dfcn-riding",
        "dfcn/dfcn_riding.dll", snapshot);
}

} // namespace detail

inline std::vector<fs::path> discover_plant_survey_modules() {
    return detail::native_module_candidates(detail::subscriptions(), "dfcn-plant-survey",
        "dfcn/dfcn_plant_survey.dll", nullptr,
        runtime::game_directory() / "dfcn-local-mods" / "dfcn-plant-survey");
}

// This path only reads the small mod manifests; it does not fingerprint DLLs
// or translation resources. The render producer can poll it for subscriptions
// and completed downloads without repeatedly rebuilding the full snapshot.
inline std::vector<fs::path> discover_map_preview_modules(
        const detail::SteamSubscriptions& steam) {
    return detail::map_preview_modules(steam);
}

inline std::vector<fs::path> discover_map_preview_modules() {
    return discover_map_preview_modules(detail::subscriptions());
}

inline std::vector<fs::path> discover_riding_modules() {
    return detail::riding_modules(detail::subscriptions());
}

inline Snapshot discover(std::string_view language = "zh-Hans") {
    Snapshot snapshot;
    const auto watch = [&](const fs::path& path) { snapshot.resources.push_back(detail::stamp(path)); };
    const auto steam = detail::subscriptions();
    snapshot.steam_subscriptions_available = steam.available;
    snapshot.subscribed_items.assign(steam.ids.begin(), steam.ids.end());
    snapshot.map_preview_modules = detail::map_preview_modules(steam, &snapshot);
    snapshot.riding_modules = detail::riding_modules(steam, &snapshot);
    const auto game = detail::game_directory();
    std::set<fs::path> libraries;
    detail::add_library(libraries, game);
    detail::add_library(libraries, runtime::directory());
    // The executable and core may live in different Steam libraries. Each
    // known library can also enumerate the client's other configured roots.
    const auto initial_libraries = libraries;
    for (const auto& apps : initial_libraries) {
        for (const auto& path : {apps / "libraryfolders.vdf",
                apps.parent_path() / "config/libraryfolders.vdf"}) {
            watch(path);
            const auto data = detail::text(path);
            if (!data) continue;
            const auto parsed = detail::key_values(*data);
            const auto* folders = parsed ? parsed->find("libraryfolders") : nullptr;
            if (!folders) continue;
            for (const auto& [key, folder] : folders->children) {
                if (!detail::number<uint32_t>(key)) continue;
                const auto* configured = folder.find("path");
                const auto value = configured ? configured->value : folder.value;
                if (value.empty()) continue;
                auto root = detail::canonical_path(fs::u8path(value) / "steamapps");
                if (!root.empty()) libraries.insert(std::move(root));
            }
        }
    }
    struct Candidate { fs::path root; int priority = 0; uint64_t workshop_id = 0; };
    std::vector<Candidate> candidates;
    const auto scan = [&](const fs::path& directory, int priority,
                          const std::optional<std::set<uint64_t>>& allowed) {
        watch(directory);
        std::error_code error;
        fs::directory_iterator it(directory, fs::directory_options::skip_permission_denied, error), end;
        for (; !error && it != end; it.increment(error)) {
            std::error_code status_error;
            if (!it->is_directory(status_error)) continue;
            uint64_t item = 0;
            if (priority == 2) {
                const auto id = detail::number<uint64_t>(runtime::utf8(it->path().filename()));
                if (!id || (allowed && !allowed->contains(*id))) continue;
                item = *id;
            }
            candidates.push_back({it->path(), priority, item});
        }
    };
    scan(game / "data/installed_mods", 0, std::nullopt);
    scan(game / "mods", 1, std::nullopt);
    for (const auto& apps : libraries) {
        const auto acf = apps / "workshop/appworkshop_975370.acf";
        watch(acf);
        std::optional<std::set<uint64_t>> allowed;
        if (steam.available) allowed = steam.ids;
        else if (const auto data = detail::text(acf)) {
            const auto parsed = detail::key_values(*data);
            const auto* app = parsed ? parsed->find("AppWorkshop") : nullptr;
            const auto* installed = app ? app->find("WorkshopItemsInstalled") : nullptr;
            if (installed) {
                allowed.emplace();
                for (const auto& [key, item] : installed->children)
                    if (const auto id = detail::number<uint64_t>(key)) allowed->insert(*id);
            }
        }
        scan(apps / "workshop/content/975370", 2, allowed);
    }
    for (const auto& [id, path] : steam.directories) candidates.push_back({path, 2, id});
    std::sort(candidates.begin(), candidates.end(), [](const auto& left, const auto& right) {
        if (left.priority != right.priority) return left.priority < right.priority;
        return left.root < right.root;
    });
    std::set<fs::path> visited;
    std::map<std::string, std::pair<Package, int>> selected;
    std::optional<std::tuple<int64_t, int, fs::path>> selected_semantic_model;
    std::vector<std::tuple<int, int64_t, fs::path>> mouse_coordinates_modules;
    for (const auto& entry : candidates) {
        const auto root = detail::canonical_path(entry.root);
        if (root.empty() || visited.contains(root)) continue;
        const auto manifest = root / "dfcn-extension.toml";
        const auto semantic_manifest = root / "dfcn-semantic-search.toml";
        const auto mouse_manifest = root / "dfcn-mouse-coordinates.toml";
        std::error_code error;
        const bool has_extension = fs::is_regular_file(manifest, error) &&
            detail::within(root, manifest);
        error.clear();
        const bool has_semantic_model = fs::is_regular_file(semantic_manifest, error) &&
            detail::within(root, semantic_manifest);
        error.clear();
        const bool has_mouse_module = fs::is_regular_file(mouse_manifest, error) &&
            detail::within(root, mouse_manifest);
        if (!has_extension && !has_semantic_model && !has_mouse_module) continue;
        if (has_extension) watch(manifest);
        if (has_semantic_model) watch(semantic_manifest);
        if (has_mouse_module) watch(mouse_manifest);
        const auto info_path = root / "info.txt";
        if (!detail::within(root, info_path)) continue;
        watch(info_path);
        const auto info = detail::text(info_path);
        const auto info_id = info ? detail::info_value(*info, "ID") : std::nullopt;
        if (!info_id || !detail::identifier(*info_id)) {
            const auto& declared_manifest = has_extension ? manifest :
                has_semantic_model ? semantic_manifest : mouse_manifest;
            snapshot.diagnostics.push_back(runtime::utf8(declared_manifest) +
                ": missing valid info.txt mod ID");
            continue;
        }
        // game/mods is an explicit local installation. Only subscription
        // caches follow Steam membership; a manually installed ZIP remains
        // usable even when its info.txt carries a published workshop ID.
        if (steam.available && entry.priority != 1) {
            const auto linked = detail::info_value(*info, "STEAM_FILE_ID");
            const auto item = linked ? detail::number<uint64_t>(*linked) : std::nullopt;
            if ((entry.workshop_id && !steam.ids.contains(entry.workshop_id)) ||
                    (item && *item && !steam.ids.contains(*item))) continue;
        }
        visited.insert(root);

        int64_t mod_version = 0;
        if (const auto version = detail::info_value(*info, "NUMERIC_VERSION"))
            mod_version = detail::number<int64_t>(*version).value_or(-1);
        if (has_mouse_module && mod_version >= 0) {
            const auto data = detail::text(mouse_manifest);
            if (!data) {
                snapshot.diagnostics.push_back(runtime::utf8(mouse_manifest) +
                    ": cannot read mouse-coordinates manifest");
            } else if (const auto parsed = toml::parse(*data, runtime::utf8(mouse_manifest)); !parsed) {
                snapshot.diagnostics.push_back(runtime::utf8(mouse_manifest) + ": " +
                    std::string(parsed.error().description()));
            } else {
                const auto schema = parsed["schema"].value<int64_t>();
                const auto id = parsed["id"].value<std::string>();
                const auto module = parsed["module"].value<std::string>();
                const auto module_path = module
                    ? detail::resource_path(root, *module) : fs::path{};
                std::error_code module_error;
                if (schema && *schema == 1 && id && *id == "dfcn-mouse-coordinates" &&
                        *info_id == "dfcn-mouse-coordinates" && !module_path.empty() &&
                        module_path.filename() == "dfcn_mouse_coordinates.dll" &&
                        fs::is_regular_file(module_path, module_error) && !module_error) {
                    watch(module_path);
                    mouse_coordinates_modules.emplace_back(entry.priority, mod_version, module_path);
                } else {
                    snapshot.diagnostics.push_back(runtime::utf8(mouse_manifest) +
                        ": missing valid mouse-coordinates module");
                }
            }
        }
        if (has_semantic_model && mod_version >= 0) {
            const auto data = detail::text(semantic_manifest);
            if (!data) {
                snapshot.diagnostics.push_back(runtime::utf8(semantic_manifest) +
                    ": cannot read semantic-search manifest");
            } else if (const auto parsed = toml::parse(*data, runtime::utf8(semantic_manifest)); !parsed) {
                snapshot.diagnostics.push_back(runtime::utf8(semantic_manifest) + ": " +
                    std::string(parsed.error().description()));
            } else {
                const auto& parsed_manifest = parsed;
                const auto schema = parsed_manifest["schema"].value<int64_t>();
                const auto id = parsed_manifest["id"].value<std::string>();
                const auto model = parsed_manifest["model"].value<std::string>();
                const auto model_path = model
                    ? detail::resource_path(root, *model) : fs::path{};
                bool valid = schema && *schema == 1 && id && *id == "dfcn-semantic-search" &&
                    !model_path.empty();
                if (valid) {
                    std::error_code model_error;
                    valid = fs::is_directory(model_path, model_error) && !model_error;
                    for (const auto name : {"model.safetensors", "tokenizer.json", "config.json"}) {
                        const auto file = model_path / name;
                        model_error.clear();
                        if (!detail::within(root, file) ||
                                !fs::is_regular_file(file, model_error) || model_error) {
                            valid = false;
                            break;
                        }
                    }
                }
                if (valid) {
                    const auto candidate = std::make_tuple(mod_version, entry.priority, root);
                    const bool better = !selected_semantic_model ||
                        std::get<0>(candidate) > std::get<0>(*selected_semantic_model) ||
                        (std::get<0>(candidate) == std::get<0>(*selected_semantic_model) &&
                         (std::get<1>(candidate) < std::get<1>(*selected_semantic_model) ||
                          (std::get<1>(candidate) == std::get<1>(*selected_semantic_model) &&
                           std::get<2>(candidate) < std::get<2>(*selected_semantic_model))));
                    if (better) {
                        selected_semantic_model = candidate;
                        snapshot.semantic_model = model_path;
                    }
                } else {
                    snapshot.diagnostics.push_back(runtime::utf8(semantic_manifest) +
                        ": missing valid semantic-search model files");
                }
            }
        }

        if (!enabled() || !has_extension) continue;
        const auto data = detail::text(manifest);
        if (!data) continue;
        const auto parsed = toml::parse(*data, runtime::utf8(manifest));
        if (!parsed) {
            snapshot.diagnostics.push_back(runtime::utf8(manifest) + ": " +
                std::string(parsed.error().description()));
            continue;
        }
        const auto schema = parsed["schema"].value<int64_t>();
        const auto id = parsed["id"].value<std::string>();
        const auto declared_language = parsed["language"].value<std::string>();
        if (!schema || *schema != 1 || !id || !detail::identifier(*id) ||
                !declared_language || *declared_language != language) continue;
        Package package;
        package.id = *id;
        package.mod_id = *info_id;
        package.language = *declared_language;
        package.name = parsed["name"].value_or(package.id);
        package.root = root;
        package.manifest = manifest;
        package.version = mod_version;
        bool valid = package.version >= 0;
        const auto resolve = [&](std::string_view field, bool directory, fs::path& result) {
            const auto value = parsed[field].value<std::string>();
            if (!value) return;
            result = detail::resource_path(root, *value);
            if (result.empty()) { valid = false; return; }
            watch(result);
            std::error_code resource_error;
            if (directory ? !fs::is_directory(result, resource_error)
                          : !fs::is_regular_file(result, resource_error)) valid = false;
            if (!directory) return;
            fs::recursive_directory_iterator it(result,
                fs::directory_options::skip_permission_denied, resource_error), end;
            for (; !resource_error && it != end; it.increment(resource_error)) {
                std::error_code status_error;
                if (it->is_symlink(status_error) && it->is_directory(status_error))
                    it.disable_recursion_pending();
                if (!detail::within(root, it->path())) { valid = false; continue; }
                if (it->is_regular_file(status_error) && it->path().extension() == ".toml")
                    watch(it->path());
            }
            if (resource_error) valid = false;
        };
        resolve("translations", false, package.translations);
        resolve("rulesets", true, package.rulesets);
        if (!valid || (package.translations.empty() && package.rulesets.empty())) {
            snapshot.diagnostics.push_back(runtime::utf8(manifest) + ": missing resources or resource path outside package");
            continue;
        }
        const auto existing = selected.find(package.id);
        if (existing == selected.end() || package.version > existing->second.first.version ||
                (package.version == existing->second.first.version &&
                 (entry.priority < existing->second.second ||
                  (entry.priority == existing->second.second && root < existing->second.first.root))))
        {
            const auto selected_id = package.id;
            selected.insert_or_assign(selected_id, std::make_pair(std::move(package), entry.priority));
        }
    }
    // IDs provide the shared, deterministic precedence for TSV and TOML.
    // Later IDs override matching semantic entries from earlier packages.
    for (auto& [id, selected_package] : selected)
        snapshot.packages.push_back(std::move(selected_package.first));
    std::sort(mouse_coordinates_modules.begin(), mouse_coordinates_modules.end(),
        [](const auto& left, const auto& right) {
            const bool left_workshop = std::get<0>(left) == 2;
            const bool right_workshop = std::get<0>(right) == 2;
            if (left_workshop != right_workshop) return left_workshop;
            if (std::get<1>(left) != std::get<1>(right))
                return std::get<1>(left) > std::get<1>(right);
            if (std::get<0>(left) != std::get<0>(right))
                return std::get<0>(left) < std::get<0>(right);
            return std::get<2>(left) < std::get<2>(right);
        });
    for (const auto& candidate : mouse_coordinates_modules)
        snapshot.mouse_coordinates_modules.push_back(std::get<2>(candidate));
    std::sort(snapshot.resources.begin(), snapshot.resources.end(), [](const auto& left, const auto& right) {
        return left.path < right.path;
    });
    snapshot.resources.erase(std::unique(snapshot.resources.begin(), snapshot.resources.end(),
        [](const auto& left, const auto& right) { return left.path == right.path; }), snapshot.resources.end());
    return snapshot;
}

inline bool same_resources(const Snapshot& left, const Snapshot& right) {
    return left.packages == right.packages && left.resources == right.resources &&
        left.semantic_model == right.semantic_model &&
        left.mouse_coordinates_modules == right.mouse_coordinates_modules &&
        left.map_preview_modules == right.map_preview_modules &&
        left.riding_modules == right.riding_modules &&
        left.steam_subscriptions_available == right.steam_subscriptions_available &&
        left.subscribed_items == right.subscribed_items;
}

inline bool resources_changed(const Snapshot& previous,
                              std::string_view language = "zh-Hans") {
    return !same_resources(previous, discover(language));
}

} // namespace dfcn::extensions
