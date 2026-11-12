// ELF renderer consumers load gps through its GOT entry. Redirect only
// those proven reads to the SDL-owned header; producer globals stay native.
struct NativeDfhackElfDisplayInputs {
    std::vector<NativeCodePatch> patches;
    void *data = nullptr;
    size_t data_size = 0;
    graphicst *selected = nullptr;
    bool installed = false;
    static constexpr size_t slot_offset = (sizeof(graphicst) + 7) & ~size_t{7};
    graphicst *snapshot() const noexcept { return installed ? static_cast<graphicst *>(data) : nullptr; }
    graphicst **slot() const noexcept {
        return data ? reinterpret_cast<graphicst **>(static_cast<unsigned char *>(data) + slot_offset) : nullptr;
    }
    graphicst *select(graphicst *next) noexcept {
        auto *previous = selected;
        if (!installed || !slot()) return previous;
        auto *owner = native_graphics_owner();
        // SDL lazily promotes cached surfaces to textures inside the header.
        // Publish those promotions before a retained frame changes selection.
        if (owner && previous && previous != owner)
            std::memcpy(&owner->tex, &previous->tex, sizeof(owner->tex));
        if (owner && next && next != owner)
            std::memcpy(&next->tex, &owner->tex, sizeof(owner->tex));
        *slot() = next ? next : owner;
        selected = next;
        return previous;
    }
    bool active() const noexcept { return installed || data; }
    bool uninstall() {
        constexpr const char *label = "Native ELF display input snapshot";
        if (!native_callbacks_idle()) return false;
        select(nullptr);
        if (installed && !write_native_code_patches(patches, false, label, &installed)) return false;
        if (!flush_native_code_patches(patches, label) || !release_native_relay(data, data_size, label)) return false;
        patches.clear(); selected = nullptr;
        return true;
    }
};
static NativeDfhackElfDisplayInputs g_native_dfhack_display_inputs;

static bool install_native_dfhack_display_inputs() {
    constexpr const char *label = "Native ELF display input snapshot";
    auto &hook = g_native_dfhack_display_inputs;
    if (hook.installed) return flush_native_code_patches(hook.patches, label);
    if (!hook.uninstall()) return false;
    const auto &library = elf_runtime::state().library;
    if (library.build != "7f1f71e5c17e2aa97c9f23ffddf63e63d186af45") return false;
    struct Site { uintptr_t address; std::array<unsigned char, 3> operation; };
    static constexpr Site sites[]{
#include "native_dfhack_display_inputs_profile_elf.inc"
    };
    NativeRelayRange range;
    for (const auto &site : sites) range.include(library.bias + site.address);
    hook.data = allocate_native_relay(range, NativeDfhackElfDisplayInputs::slot_offset + sizeof(void *),
        &hook.data_size, label);
    if (!hook.data) return false;
    NativeRelayGuard guard{hook.data, hook.data_size, hook.installed, label};
    unsigned long error = 0;
    if (!native_patch_protect(hook.data, hook.data_size, PROT_READ | PROT_WRITE, error)) return false;
    std::memset(hook.data, 0, hook.data_size);
    *hook.slot() = native_graphics_owner();
    if (!*hook.slot()) return false;
    for (const auto &site : sites) {
        auto *address = reinterpret_cast<unsigned char *>(library.bias + site.address);
        std::vector<unsigned char> original(7);
        if (!native_history_copy_bytes(reinterpret_cast<uintptr_t>(address), original.data(), 7) ||
                !std::equal(site.operation.begin(), site.operation.end(), original.begin())) return false;
        int32_t relative = 0;
        std::memcpy(&relative, original.data() + 3, 4);
        if (reinterpret_cast<uintptr_t>(address + 7 + relative) != library.bias + 0x170cd8) return false;
        const intptr_t distance = reinterpret_cast<intptr_t>(hook.slot()) - reinterpret_cast<intptr_t>(address + 7);
        if (distance < INT32_MIN || distance > INT32_MAX) return false;
        auto replacement = original;
        relative = static_cast<int32_t>(distance);
        std::memcpy(replacement.data() + 3, &relative, 4);
        hook.patches.push_back({address, std::move(original), std::move(replacement)});
    }
    if (!write_native_code_patches(hook.patches, true, label, &hook.installed)) return false;
    guard.committed = true;
    return true;
}
static void uninstall_native_dfhack_display_inputs() { g_native_dfhack_display_inputs.uninstall(); }
static bool native_dfhack_display_inputs_active() noexcept { return g_native_dfhack_display_inputs.active(); }
static graphicst *native_dfhack_display_inputs_snapshot() noexcept { return g_native_dfhack_display_inputs.snapshot(); }
static graphicst *native_dfhack_display_inputs_select(graphicst *inputs) noexcept { return g_native_dfhack_display_inputs.select(inputs); }
static graphicst *native_dfhack_display_inputs_selected() noexcept { return g_native_dfhack_display_inputs.selected; }
static void native_dfhack_display_inputs_enable(bool enabled) noexcept {
    native_dfhack_display_inputs_select(enabled ? native_dfhack_display_inputs_snapshot() : nullptr);
}
