// DFHack's deleteHandle drains every SDL_Surface reference, but its native
// while (surface->refcount) loop reads the surface after the final FreeSurface.
// The reported Windows crash returns to deleteHandle+0x31f in that loop.
// Keep DFHack's handle/texpos cleanup and count releases before freeing memory.
// Source: DFHack/dfhack, library/modules/Textures.cpp, Textures::deleteHandle.
#ifdef _WIN32
using NativeDfhackFreeSurface = void (*)(SDL_Surface *);
static NativeCallHook g_native_dfhack_texture_hook;
static std::atomic<NativeDfhackFreeSurface> g_native_dfhack_texture_free{nullptr};
static std::atomic_uint g_native_dfhack_texture_callbacks{0};
static std::mutex g_native_dfhack_texture_mutex;
static HMODULE g_native_dfhack_texture_unsupported = nullptr;

static void native_dfhack_release_surface_references(SDL_Surface *surface) {
    NativeInputCallbackScope callback;
    struct ActiveCall {
        ActiveCall() { g_native_dfhack_texture_callbacks.fetch_add(1, std::memory_order_acq_rel); }
        ~ActiveCall() { g_native_dfhack_texture_callbacks.fetch_sub(1, std::memory_order_acq_rel); }
    } active;
    const auto release = g_native_dfhack_texture_free.load(std::memory_order_acquire);
    if (!surface || !release) return;
    // deleteHandle has already removed the texture from the game's raws and
    // both texpos registries. Preserve its release-all policy, including SDL's
    // per-release bookkeeping, without reading through the pointer again.
    const int references = surface->refcount;
    callback.call_native([&] {
        for (int remaining = references; remaining > 0; --remaining) release(surface);
    });
}
#endif

static bool install_native_dfhack_texture_hook() {
#ifdef _WIN32
    std::lock_guard<std::mutex> lock(g_native_dfhack_texture_mutex);
    constexpr const char *label = "DFHack texture release lifetime";
    if (g_native_dfhack_texture_hook.installed)
        return flush_native_code_patches(g_native_dfhack_texture_hook.patches, label);
    const auto module = GetModuleHandleW(L"dfhack.dll");
    if (!module) return true;
    if (module == g_native_dfhack_texture_unsupported) return false;
    const auto entry = reinterpret_cast<uintptr_t>(GetProcAddress(module,
        "?deleteHandle@Textures@DFHack@@YAX_K@Z"));
    const auto release = reinterpret_cast<uintptr_t>(GetProcAddress(module,
        "?DFSDL_FreeSurface@DFSDL@DFHack@@YAXPEAUSDL_Surface@@@Z"));
    // Match the complete native loop, including the back edge and its actual
    // exported free target. Unknown/fixed implementations remain untouched.
    constexpr size_t offset = 0x312;
    std::vector<unsigned char> loop{
        0x39,0x5f,0x58,0x74,0x0d,       // cmp [rdi+58],ebx; je end
        0x48,0x8b,0xcf,                 // mov rcx,rdi
        0xe8,0,0,0,0,                  // call DFSDL_FreeSurface
        0x39,0x5f,0x58,0x75,0xf3};     // cmp [rdi+58],ebx; jne loop
    if (!native_dfhack_messagebox_owned_address(module, entry, offset + loop.size(), true) ||
            !native_dfhack_messagebox_owned_address(module, release, 1, true)) {
        g_native_dfhack_texture_unsupported = module;
        report_native_patch_error("WARN", label, "texture release exports are unavailable");
        return false;
    }
    const auto *block = reinterpret_cast<const unsigned char *>(entry + offset);
    if (!native_dfhack_read_entry_prefix(block, loop, {9}, label) ||
            reinterpret_cast<uintptr_t>(native_dfhack_relative_target(block, 9, 13)) != release) {
        g_native_dfhack_texture_unsupported = module;
        report_native_patch_error("WARN", label, "texture release loop is not the supported native implementation");
        return false;
    }
    // Retain the zero-reference guard. Replace the entire loop body, including
    // its post-free read/back edge, with one ABI call. The native call already
    // owns shadow space; RDI is nonvolatile and no volatile result/flags live
    // past this void call. The relay supplies its original surface argument.
    NativeCall call{entry + offset + 5, release,
        reinterpret_cast<const void *>(&native_dfhack_release_surface_references),
        {0x48,0x8b,0xcf}, std::vector<unsigned char>(loop.begin() + 5, loop.end())};
    g_native_dfhack_texture_free.store(
        reinterpret_cast<NativeDfhackFreeSurface>(release), std::memory_order_release);
    return g_native_dfhack_texture_hook.install(0, {call}, label);
#else
    return true;
#endif
}

static bool native_dfhack_texture_hook_active() {
#ifdef _WIN32
    return g_native_dfhack_texture_hook.active() ||
        g_native_dfhack_texture_callbacks.load(std::memory_order_acquire) != 0;
#else
    return false;
#endif
}

static void uninstall_native_dfhack_texture_hook() {
#ifdef _WIN32
    std::lock_guard<std::mutex> lock(g_native_dfhack_texture_mutex);
    if (!native_callbacks_idle() ||
            g_native_dfhack_texture_callbacks.load(std::memory_order_acquire)) return;
    (void)g_native_dfhack_texture_hook.uninstall("DFHack texture release lifetime");
#endif
}
