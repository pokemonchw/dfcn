// The exported GUI hook object begins with its original function pointer.
// Exchange only that field; DFHack owns the callback vector that follows it.
// Forward the last member-field argument as its untouched native scalar bits.
using NativeDfhackSetTileFn = bool (*)(const void *, int, int, bool, uintptr_t);
using NativeDfhackReadTileFn = void *(*)(void *, int, int, bool, uintptr_t);
static std::mutex g_native_dfhack_hook_mutex;
static std::atomic<NativeDfhackSetTileFn> g_native_dfhack_original_set_tile{nullptr};
static std::atomic<NativeDfhackSetTileFn *> g_native_dfhack_set_tile_slot{nullptr};
static std::atomic<NativeDfhackReadTileFn> g_native_dfhack_original_get_tile{nullptr};
static std::atomic<NativeDfhackReadTileFn *> g_native_dfhack_get_tile_slot{nullptr};

enum class NativeDfhackDrawApi : size_t {
    Tile, String, Fill, Clear, Border, MapPort, PenArray, ReadTile, ReadMapPort, Count
};
static std::array<NativeEntryHook, static_cast<size_t>(NativeDfhackDrawApi::Count)>
    g_native_dfhack_draw_entries;
static NativeEntryHook &native_dfhack_draw_entry(NativeDfhackDrawApi api) {
    return g_native_dfhack_draw_entries[static_cast<size_t>(api)];
}

// Every DFHack drawing boundary selects its own private output buffers.
// Nested API/base calls share the outer selection without copying any cells.
static bool native_dfhack_capture_hook_active() {
    if (native_dfhack_render_layers_active()) return true;
    if (g_native_dfhack_set_tile_slot.load(std::memory_order_acquire) ||
            g_native_dfhack_get_tile_slot.load(std::memory_order_acquire)) return true;
    return std::any_of(g_native_dfhack_draw_entries.begin(), g_native_dfhack_draw_entries.end(),
        [](const auto &hook) { return hook.active(); });
}

static bool native_dfhack_set_tile_capture(const void *pen, int x, int y,
        bool map, uintptr_t member_field) {
    NativeInputCallbackScope callback;
    const auto original = g_native_dfhack_original_set_tile.load(std::memory_order_acquire);
    if (!original || original == native_dfhack_set_tile_capture) return false;
    if (g_native_process_exiting.load(std::memory_order_acquire))
        return callback.call_native([&] { return original(pen, x, y, map, member_field); });
    NativeDfhackLayerWriteScope layer;
    if (!layer.valid()) {
        if (g_native_process_exiting.load(std::memory_order_acquire))
            return callback.call_native([&] { return original(pen, x, y, map, member_field); });
        return false;
    }
    const bool result = callback.call_native([&] { return original(pen, x, y, map, member_field); });
    if (pen && result && (!map || native_ui_classic().value_or(false))) {
        native_dfhack_layer_note_ui_write(native_dfhack_graphics(), x, y);
        try {
            record_native_dfhack_tile_write(native_dfhack_graphics(), pen, x, y);
        } catch (...) {
            // Optional artwork evidence must not unwind through DFHack.
        }
    }
    return result;
}

// MSVC returns Pen through the caller's hidden destination pointer. Forward
// that scalar ABI unchanged instead of constructing a Pen in our C++ runtime.
static bool native_dfhack_read_native_tile(int x, int y, bool map) noexcept {
    const auto *gps = native_dfhack_graphics();
    return !native_dfhack_layer_write_active(gps) ||
        (map && !native_ui_classic().value_or(false)) ||
        !native_dfhack_layer_ui_written(gps, x, y);
}

// readTile dispatches through get_tile. Once the outer boundary has selected
// its input, the inner hook must keep that selection instead of installing a
// new private writer while the original writer is temporarily paused.
struct NativeDfhackTileReadScope {
    inline static thread_local unsigned depth = 0;
    NativeDfhackTileReadScope() { ++depth; }
    ~NativeDfhackTileReadScope() { --depth; }
};

class NativeDfhackCharacterTileReadScope {
    std::unique_lock<std::recursive_mutex> translation_;
    std::optional<NativeUiGridBinding> binding_;
public:
    NativeDfhackCharacterTileReadScope(int x, int y, bool map)
        : translation_(translation_state_mutex, std::defer_lock)
    {
        // Screen's UI branch ignores the viewport member-field argument.
        // Keep map reads native, including their existing Classic behavior.
        if (map || !translation_.try_lock()) return;
        // SDL temporarily masks English glyphs while painting this layer.
        // Never wait for its translation lock while holding the writer lock;
        // a busy layer leaves this read on the shared native input instead.
        auto *gps = native_graphics_owner();
        if (!gps || !native_character_open() || !native_character_background_view(gps)) return;
        const auto *source = g_native_character_layer.foreground.graphics();
        if (source->dimx != gps->dimx || source->dimy != gps->dimy ||
                x < 0 || y < 0 || x >= gps->dimx || y >= gps->dimy) return;
        const bool owned = std::any_of(g_native_character_layer.frames.begin(),
            g_native_character_layer.frames.end(), [&](const SDL_Rect &frame) {
                return x >= frame.x && y >= frame.y &&
                    x < frame.x + frame.w && y < frame.y + frame.h;
            });
        if (!owned) return;
        // The native sheet no longer writes its tabs to the shared grid.
        // Expose its original cells so DFHack can find anchors such as the
        // Overview tab. Its own reader still resolves pens and both planes.
        binding_.emplace(gps, *source);
    }
};

static void *native_dfhack_get_tile_capture(void *result, int x, int y,
        bool map, uintptr_t member_field) {
    NativeInputCallbackScope callback;
    const auto original = g_native_dfhack_original_get_tile.load(std::memory_order_acquire);
    if (!original || original == native_dfhack_get_tile_capture) return result;
    if (g_native_process_exiting.load(std::memory_order_acquire) || NativeDfhackTileReadScope::depth)
        return callback.call_native([&] { return original(result, x, y, map, member_field); });
    NativeDfhackTileReadScope reading;
    NativeDfhackLayerWriteScope layer(true, false, false);
    if (native_dfhack_read_native_tile(x, y, map)) {
        NativeDfhackNativeLayerScope native(false);
        NativeDfhackCharacterTileReadScope character(x, y, map);
        return callback.call_native([&] { return original(result, x, y, map, member_field); });
    }
    return callback.call_native([&] { return original(result, x, y, map, member_field); });
}

static bool native_dfhack_paint_tile_capture(const void *pen, int x, int y,
        bool map, uintptr_t member_field) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeDfhackSetTileFn>(
        native_dfhack_draw_entry(NativeDfhackDrawApi::Tile).original);
    if (!original) return false;
    if (g_native_process_exiting.load(std::memory_order_acquire))
        return callback.call_native([&] { return original(pen, x, y, map, member_field); });
    NativeDfhackLayerWriteScope layer;
    if (!layer.valid()) {
        if (g_native_process_exiting.load(std::memory_order_acquire))
            return callback.call_native([&] { return original(pen, x, y, map, member_field); });
        return false;
    }
    return callback.call_native([&] { return original(pen, x, y, map, member_field); });
}
using NativeDfhackPaintStringFn = bool (*)(const void *, int, int, const NativeString *, bool);
static bool native_dfhack_paint_string_capture(const void *pen, int x, int y,
        const NativeString *text, bool map) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeDfhackPaintStringFn>(
        native_dfhack_draw_entry(NativeDfhackDrawApi::String).original);
    if (!original) return false;
    if (g_native_process_exiting.load(std::memory_order_acquire))
        return callback.call_native([&] { return original(pen, x, y, text, map); });
    NativeDfhackLayerWriteScope layer;
    if (!layer.valid()) {
        if (g_native_process_exiting.load(std::memory_order_acquire))
            return callback.call_native([&] { return original(pen, x, y, text, map); });
        return false;
    }
    return callback.call_native([&] { return original(pen, x, y, text, map); });
}
using NativeDfhackFillRectFn = bool (*)(const void *, int, int, int, int, bool);
static bool native_dfhack_fill_rect_capture(const void *pen, int x1, int y1,
        int x2, int y2, bool map) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeDfhackFillRectFn>(
        native_dfhack_draw_entry(NativeDfhackDrawApi::Fill).original);
    if (!original) return false;
    if (g_native_process_exiting.load(std::memory_order_acquire))
        return callback.call_native([&] { return original(pen, x1, y1, x2, y2, map); });
    NativeDfhackLayerWriteScope layer;
    if (!layer.valid()) {
        if (g_native_process_exiting.load(std::memory_order_acquire))
            return callback.call_native([&] { return original(pen, x1, y1, x2, y2, map); });
        return false;
    }
    return callback.call_native([&] { return original(pen, x1, y1, x2, y2, map); });
}
static bool native_dfhack_clear_capture() {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<bool (*)()>(
        native_dfhack_draw_entry(NativeDfhackDrawApi::Clear).original);
    if (!original) return false;
    if (g_native_process_exiting.load(std::memory_order_acquire))
        return callback.call_native([&] { return original(); });
    NativeDfhackLayerWriteScope layer;
    if (!layer.valid()) {
        if (g_native_process_exiting.load(std::memory_order_acquire))
            return callback.call_native([&] { return original(); });
        return false;
    }
    return callback.call_native([&] { return original(); });
}
static bool native_dfhack_draw_border_capture(const NativeString *title) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<bool (*)(const NativeString *)>(
        native_dfhack_draw_entry(NativeDfhackDrawApi::Border).original);
    if (!original) return false;
    if (g_native_process_exiting.load(std::memory_order_acquire))
        return callback.call_native([&] { return original(title); });
    NativeDfhackLayerWriteScope layer;
    if (!layer.valid()) {
        if (g_native_process_exiting.load(std::memory_order_acquire))
            return callback.call_native([&] { return original(title); });
        return false;
    }
    return callback.call_native([&] { return original(title); });
}
using NativeDfhackMapPortFn = bool (*)(const void *, int, int, uintptr_t);
static bool native_dfhack_map_port_capture(const void *pen, int x, int y,
        uintptr_t member_field) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeDfhackMapPortFn>(
        native_dfhack_draw_entry(NativeDfhackDrawApi::MapPort).original);
    if (!original) return false;
    if (g_native_process_exiting.load(std::memory_order_acquire))
        return callback.call_native([&] { return original(pen, x, y, member_field); });
    NativeDfhackLayerWriteScope layer;
    if (!layer.valid()) {
        if (g_native_process_exiting.load(std::memory_order_acquire))
            return callback.call_native([&] { return original(pen, x, y, member_field); });
        return false;
    }
    const bool result = callback.call_native([&] { return original(pen, x, y, member_field); });
    if (pen && result && native_ui_classic().value_or(false)) {
        native_dfhack_layer_note_ui_write(native_dfhack_graphics(), x, y);
        try {
            record_native_dfhack_tile_write(native_dfhack_graphics(), pen, x, y);
        } catch (...) {
            // Optional artwork evidence must not unwind through DFHack.
        }
    }
    return result;
}
using NativeDfhackPenArrayDrawFn = void (*)(void *, unsigned, unsigned, unsigned,
    unsigned, unsigned, unsigned);
static void native_dfhack_pen_array_capture(void *array, unsigned x, unsigned y,
        unsigned width, unsigned height, unsigned bufx, unsigned bufy) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeDfhackPenArrayDrawFn>(
        native_dfhack_draw_entry(NativeDfhackDrawApi::PenArray).original);
    if (!original) return;
    if (g_native_process_exiting.load(std::memory_order_acquire)) {
        callback.call_native([&] { original(array, x, y, width, height, bufx, bufy); });
        return;
    }
    NativeDfhackLayerWriteScope layer;
    if (!layer.valid()) {
        if (g_native_process_exiting.load(std::memory_order_acquire))
            callback.call_native([&] { original(array, x, y, width, height, bufx, bufy); });
        return;
    }
    callback.call_native([&] { original(array, x, y, width, height, bufx, bufy); });
}
static void *native_dfhack_read_tile_capture(void *result, int x, int y,
        bool map, uintptr_t member_field) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeDfhackReadTileFn>(
        native_dfhack_draw_entry(NativeDfhackDrawApi::ReadTile).original);
    if (!original) return result;
    if (g_native_process_exiting.load(std::memory_order_acquire) || NativeDfhackTileReadScope::depth)
        return callback.call_native([&] { return original(result, x, y, map, member_field); });
    NativeDfhackTileReadScope reading;
    NativeDfhackLayerWriteScope layer(true, false, false);
    if (native_dfhack_read_native_tile(x, y, map)) {
        NativeDfhackNativeLayerScope native(false);
        NativeDfhackCharacterTileReadScope character(x, y, map);
        return callback.call_native([&] { return original(result, x, y, map, member_field); });
    }
    return callback.call_native([&] { return original(result, x, y, map, member_field); });
}
using NativeDfhackReadMapPortFn = void *(*)(void *, int, int, uintptr_t);
static void *native_dfhack_read_map_port_capture(void *result, int x, int y, uintptr_t member_field) {
    NativeInputCallbackScope callback;
    const auto original = reinterpret_cast<NativeDfhackReadMapPortFn>(
        native_dfhack_draw_entry(NativeDfhackDrawApi::ReadMapPort).original);
    if (!original) return result;
    if (g_native_process_exiting.load(std::memory_order_acquire))
        return callback.call_native([&] { return original(result, x, y, member_field); });
    NativeDfhackLayerWriteScope layer(true, false, false);
    NativeDfhackNativeLayerScope native(false);
    return callback.call_native([&] { return original(result, x, y, member_field); });
}
#ifdef _WIN32
static bool prepare_native_dfhack_draw_entries(HMODULE module) {
    struct Profile {
        NativeDfhackDrawApi api;
        const char *symbol;
        const void *wrapper;
        std::vector<unsigned char> prefix;
        size_t displacement_offset = 0, instruction_end = 0;
    };
    // Complete instructions shared by the 53.16-r2/r3 exports. Only
    // paintTile and clear relocate a RIP-relative global operand; its
    // displacement belongs to the loaded image, not the reference build.
    const Profile profiles[] = {
        {NativeDfhackDrawApi::Tile,
            "?paintTile@Screen@DFHack@@YA_NAEBUPen@12@HH_NPEQgraphic_viewportst@df@@PEAH@Z",
            reinterpret_cast<const void *>(&native_dfhack_paint_tile_capture),
            {0x48,0x83,0xec,0x38,0x48,0x83,0x3d,0xb4,0x61,0x87,0x00,0x00}, 7, 12},
        {NativeDfhackDrawApi::String,
            "?paintString@Screen@DFHack@@YA_NAEBUPen@12@HHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z",
            reinterpret_cast<const void *>(&native_dfhack_paint_string_capture),
            {0x4c,0x8b,0xdc,0x53,0x55}},
        {NativeDfhackDrawApi::Fill,
            "?fillRect@Screen@DFHack@@YA_NAEBUPen@12@HHHH_N@Z",
            reinterpret_cast<const void *>(&native_dfhack_fill_rect_capture),
            {0x48,0x89,0x6c,0x24,0x18}},
        {NativeDfhackDrawApi::Clear,
            "?clear@Screen@DFHack@@YA_NXZ",
            reinterpret_cast<const void *>(&native_dfhack_clear_capture),
            {0x48,0x83,0xec,0x58,0x48,0x8b,0x05,0x65,0xac,0x87,0x00}, 7, 11},
        {NativeDfhackDrawApi::Border,
            "?drawBorder@Screen@DFHack@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z",
            reinterpret_cast<const void *>(&native_dfhack_draw_border_capture),
            {0x48,0x89,0x5c,0x24,0x10}},
        {NativeDfhackDrawApi::MapPort,
            "?paintMapPortTile@Screen@DFHack@@YA_NAEBUPen@12@HHPEQgraphic_map_portst@df@@PEAH@Z",
            reinterpret_cast<const void *>(&native_dfhack_map_port_capture),
            {0x48,0x89,0x5c,0x24,0x08}},
        {NativeDfhackDrawApi::PenArray,
            "?draw@PenArray@Screen@DFHack@@QEAAXIIIIII@Z",
            reinterpret_cast<const void *>(&native_dfhack_pen_array_capture),
            {0x4c,0x8b,0xdc,0x56,0x41,0x55}},
        {NativeDfhackDrawApi::ReadTile,
            "?readTile@Screen@DFHack@@YA?AUPen@12@HH_NPEQgraphic_viewportst@df@@PEAH@Z",
            reinterpret_cast<const void *>(&native_dfhack_read_tile_capture),
            {0x40,0x53,0x48,0x83,0xec,0x30}},
        {NativeDfhackDrawApi::ReadMapPort,
            "?readMapPortTile@Screen@DFHack@@YA?AUPen@12@HHPEQgraphic_map_portst@df@@PEAH@Z",
            reinterpret_cast<const void *>(&native_dfhack_read_map_port_capture),
            {0x40,0x53,0x48,0x81,0xec,0x80,0x00,0x00,0x00}},
    };
    constexpr const char *label = "DFHack private drawing layer";
    for (const auto &profile : profiles) {
        auto &hook = native_dfhack_draw_entry(profile.api);
        if (hook.installed) continue;
        if (!hook.original) {
            auto *entry = reinterpret_cast<unsigned char *>(GetProcAddress(module, profile.symbol));
            auto prefix = profile.prefix;
            std::vector<NativeRelativeFixup> fixups;
            if (profile.instruction_end) {
                if (!native_dfhack_read_entry_prefix(entry, prefix,
                        {profile.displacement_offset}, label)) return false;
                const auto *target = native_dfhack_relative_target(
                    entry, profile.displacement_offset, profile.instruction_end);
                if (target != reinterpret_cast<const unsigned char *>(GetProcAddress(module,
                        "?gps@global@df@@3PEAUgraphic@2@EA"))) return false;
                fixups.push_back({profile.displacement_offset, profile.instruction_end,
                    reinterpret_cast<uintptr_t>(target)});
            }
            if (!entry || !hook.prepare(entry, prefix, profile.wrapper, fixups, label)) return false;
        }
    }
    for (auto &hook : g_native_dfhack_draw_entries)
        if (!hook.install(label)) return false;
    return true;
}
#else
static bool prepare_native_dfhack_draw_entries(void *module) {
    struct Profile { NativeDfhackDrawApi api; const char *symbol; const void *wrapper; };
    const Profile profiles[]{
        {NativeDfhackDrawApi::Tile, "_ZN6DFHack6Screen9paintTileERKNS0_3PenEiibMN2df18graphic_viewportstEPi", reinterpret_cast<const void *>(&native_dfhack_paint_tile_capture)},
        {NativeDfhackDrawApi::String, "_ZN6DFHack6Screen11paintStringERKNS0_3PenEiiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb", reinterpret_cast<const void *>(&native_dfhack_paint_string_capture)},
        {NativeDfhackDrawApi::Fill, "_ZN6DFHack6Screen8fillRectERKNS0_3PenEiiiib", reinterpret_cast<const void *>(&native_dfhack_fill_rect_capture)},
        {NativeDfhackDrawApi::Clear, "_ZN6DFHack6Screen5clearEv", reinterpret_cast<const void *>(&native_dfhack_clear_capture)},
        {NativeDfhackDrawApi::Border, "_ZN6DFHack6Screen10drawBorderERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE", reinterpret_cast<const void *>(&native_dfhack_draw_border_capture)},
        {NativeDfhackDrawApi::MapPort, "_ZN6DFHack6Screen16paintMapPortTileERKNS0_3PenEiiMN2df18graphic_map_portstEPi", reinterpret_cast<const void *>(&native_dfhack_map_port_capture)},
        {NativeDfhackDrawApi::PenArray, "_ZN6DFHack6Screen8PenArray4drawEjjjjjj", reinterpret_cast<const void *>(&native_dfhack_pen_array_capture)},
        {NativeDfhackDrawApi::ReadTile, "_ZN6DFHack6Screen8readTileEiibMN2df18graphic_viewportstEPi", reinterpret_cast<const void *>(&native_dfhack_read_tile_capture)},
        {NativeDfhackDrawApi::ReadMapPort, "_ZN6DFHack6Screen15readMapPortTileEiiMN2df18graphic_map_portstEPi", reinterpret_cast<const void *>(&native_dfhack_read_map_port_capture)}
    };
    for (const auto &profile : profiles)
        if (!native_dfhack_elf_entry(native_dfhack_draw_entry(profile.api), module, profile.symbol,
                profile.wrapper, "DFHack ELF private drawing layer")) return false;
    return true;
}
#endif

static NativeDfhackSetTileFn *native_dfhack_find_set_tile_slot(bool &available) {
    available = false;
#ifdef _WIN32
    const auto module = GetModuleHandleW(L"dfhack.dll");
    if (!module) return nullptr;
    available = true;
    static constexpr char symbol[] =
        "?set_tile@Hooks@Screen@DFHack@@3V?$Hook@$$A6A_NAEBUPen@Screen@DFHack@@HH_NPEQgraphic_viewportst@df@@PEAH@Z@GuiHooks@3@A";
    return reinterpret_cast<NativeDfhackSetTileFn *>(GetProcAddress(module, symbol));
#else
    // Itanium ABI: namespace DFHack::Screen::Hooks, variable set_tile.
    void *slot = dlsym(RTLD_DEFAULT, "_ZN6DFHack6Screen5Hooks8set_tileE");
    available = slot != nullptr;
    return static_cast<NativeDfhackSetTileFn *>(slot);
#endif
}

static NativeDfhackReadTileFn *native_dfhack_find_get_tile_slot() {
#ifdef _WIN32
    const auto module = GetModuleHandleW(L"dfhack.dll");
    if (!module) return nullptr;
    return reinterpret_cast<NativeDfhackReadTileFn *>(GetProcAddress(module,
        "?get_tile@Hooks@Screen@DFHack@@3V?$Hook@$$A6A?AUPen@Screen@DFHack@@HH_NPEQgraphic_viewportst@df@@PEAH@Z@GuiHooks@3@A"));
#else
    return static_cast<NativeDfhackReadTileFn *>(dlsym(RTLD_DEFAULT,
        "_ZN6DFHack6Screen5Hooks8get_tileE"));
#endif
}

static bool install_native_dfhack_capture_hook() {
    std::lock_guard<std::mutex> lock(g_native_dfhack_hook_mutex);
    bool available = false;
    auto *slot = native_dfhack_find_set_tile_slot(available);
    // DFHack is optional and can appear after this core starts. Render-time
    // retries discover its exported object without starting or reloading it.
    if (!available) return true;
#ifdef _WIN32
    if (!prepare_native_dfhack_draw_entries(GetModuleHandleW(L"dfhack.dll"))) return false;
#else
    if (!prepare_native_dfhack_draw_entries(native_dfhack_elf_module())) return false;
#endif
    if (!g_native_dfhack_get_tile_slot.load(std::memory_order_acquire)) {
        auto *read_slot = native_dfhack_find_get_tile_slot();
        if (!read_slot || reinterpret_cast<uintptr_t>(read_slot) %
                std::atomic_ref<NativeDfhackReadTileFn>::required_alignment != 0) {
            log_line("ERROR", "Cannot bind DFHack private layer: get_tile export is unavailable");
            return false;
        }
        std::atomic_ref<NativeDfhackReadTileFn> read_field(*read_slot);
        auto read_original = read_field.load(std::memory_order_acquire);
        if (!read_original || read_original == native_dfhack_get_tile_capture) return false;
        g_native_dfhack_original_get_tile.store(read_original, std::memory_order_release);
        if (!read_field.compare_exchange_strong(read_original, native_dfhack_get_tile_capture,
                std::memory_order_acq_rel, std::memory_order_acquire)) return false;
        g_native_dfhack_get_tile_slot.store(read_slot, std::memory_order_release);
    }
    if (g_native_dfhack_set_tile_slot.load(std::memory_order_acquire)) return true;
    if (!slot || reinterpret_cast<uintptr_t>(slot) %
            std::atomic_ref<NativeDfhackSetTileFn>::required_alignment != 0) {
        log_line("ERROR", "Cannot bind DFHack artwork capture: set_tile export is unavailable");
        return false;
    }
    std::atomic_ref<NativeDfhackSetTileFn> field(*slot);
    auto original = field.load(std::memory_order_acquire);
    if (!original || original == native_dfhack_set_tile_capture) {
        log_line("ERROR", "Cannot bind DFHack artwork capture: set_tile base ownership is invalid");
        return false;
    }
    // Publish the forwarding target before making the wrapper callable.
    g_native_dfhack_original_set_tile.store(original, std::memory_order_release);
    if (!field.compare_exchange_strong(original, native_dfhack_set_tile_capture,
            std::memory_order_acq_rel, std::memory_order_acquire)) {
        log_line("ERROR", "Cannot bind DFHack artwork capture: set_tile base changed during installation");
        return false;
    }
    g_native_dfhack_set_tile_slot.store(slot, std::memory_order_release);
    return true;
}

static void uninstall_native_dfhack_capture_hook() {
    std::lock_guard<std::mutex> lock(g_native_dfhack_hook_mutex);
    if (auto *read_slot = g_native_dfhack_get_tile_slot.load(std::memory_order_acquire)) {
        const auto original = g_native_dfhack_original_get_tile.load(std::memory_order_acquire);
        auto expected = static_cast<NativeDfhackReadTileFn>(native_dfhack_get_tile_capture);
        if (!original || !std::atomic_ref<NativeDfhackReadTileFn>(*read_slot).compare_exchange_strong(
                expected, original, std::memory_order_acq_rel, std::memory_order_acquire)) {
            log_line("ERROR", "Cannot detach DFHack private layer: get_tile base ownership changed");
            return;
        }
        g_native_dfhack_get_tile_slot.store(nullptr, std::memory_order_release);
    }
    auto *slot = g_native_dfhack_set_tile_slot.load(std::memory_order_acquire);
    if (slot) {
        const auto original = g_native_dfhack_original_set_tile.load(std::memory_order_acquire);
        auto expected = static_cast<NativeDfhackSetTileFn>(native_dfhack_set_tile_capture);
        if (!original || !std::atomic_ref<NativeDfhackSetTileFn>(*slot).compare_exchange_strong(
                expected, original, std::memory_order_acq_rel, std::memory_order_acquire)) {
            // A chained wrapper requires keeping the core resident.
            log_line("ERROR", "Cannot detach DFHack artwork capture: set_tile base ownership changed");
            return;
        }
        g_native_dfhack_set_tile_slot.store(nullptr, std::memory_order_release);
    }
    // Restore entries first, retaining trampolines while a callback can still
    // be inside native drawing or its private pointer scope destructor.
    constexpr const char *label = "DFHack private drawing layer";
    for (auto it = g_native_dfhack_draw_entries.rbegin(); it != g_native_dfhack_draw_entries.rend(); ++it) {
        if (it->installed && !write_native_code_patches(it->patches, false, label, &it->installed)) continue;
        if (native_callbacks_idle()) it->uninstall(label);
    }
    if (!native_dfhack_capture_hook_active() && native_callbacks_idle()) {
        clear_native_dfhack_layers();
    }
}
