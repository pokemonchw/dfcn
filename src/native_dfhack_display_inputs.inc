// Native SDL helpers consume a selected, complete output header. The game
// producer retains its own graphicst while native and DFHack consumers draw
// their independently owned grids and texture commands.
#ifdef _WIN32
struct NativeDfhackDisplayInputSite {
    unsigned char *address = nullptr;
    size_t field = 0, displacement = 0;
    std::vector<unsigned char> instruction;
    uintptr_t native_target = 0;
    bool native_owned = false;
};

struct NativeDfhackDisplayInputs {
    std::vector<NativeCodePatch> patches;
    std::vector<size_t> fields;
    std::vector<uintptr_t> native_fields;
    void *relay = nullptr, *data = nullptr;
    size_t relay_size = 0, data_size = 0;
    uintptr_t graphics = 0;
    size_t native_texture_base_slot = ~size_t{0};
    graphicst *selected = nullptr;
    bool installed = false;
    bool active() const noexcept { return installed || relay || data; }
    graphicst *snapshot() const noexcept {
        return installed ? static_cast<graphicst *>(data) : nullptr;
    }
    unsigned char *enabled() const noexcept {
        return data ? static_cast<unsigned char *>(data) + sizeof(graphicst) : nullptr;
    }
    static constexpr size_t field_slots_offset =
        (sizeof(graphicst) + 1 + alignof(uintptr_t) - 1) & ~(alignof(uintptr_t) - 1);
    uintptr_t *field_slots() const noexcept {
        return data ? reinterpret_cast<uintptr_t *>(
            static_cast<unsigned char *>(data) + field_slots_offset) : nullptr;
    }
    graphicst *select(graphicst *inputs) noexcept {
        graphicst *previous = selected;
        auto *slots = field_slots();
        if (!slots) return previous;
        for (size_t i = 0; i < fields.size(); ++i) {
            if (i < native_fields.size() && native_fields[i]) { slots[i] = native_fields[i]; continue; }
            // cached_texturest lazily replaces Surface with Texture in place.
            // Keep that renderer-owned cache on the real graphicst: a frame
            // header copy would discard the promotion and leak a new GPU
            // texture on every display. update_all's R12 base is used only
            // for these indexed cached-texture lookups, not frame buffers.
            const bool native_texture = i == native_texture_base_slot ||
                (fields[i] >= offsetof(graphicst, tex) &&
                    fields[i] < offsetof(graphicst, tex) + sizeof(graphicst::tex));
            if (i == native_texture_base_slot) slots[i] = graphics;
            else if (native_texture || !inputs)
                slots[i] = reinterpret_cast<uintptr_t>(native_graphics_member_address(
                    reinterpret_cast<graphicst *>(graphics), fields[i], 1));
            else slots[i] = reinterpret_cast<uintptr_t>(inputs) + fields[i];
        }
        selected = inputs;
        *enabled() = inputs ? 1 : 0;
        return previous;
    }
    bool uninstall() {
        constexpr const char *label = "Native display input snapshot";
        if (!active()) {
            patches.clear(); fields.clear(); native_fields.clear(); graphics = 0;
            native_texture_base_slot = ~size_t{0};
            selected = nullptr; return true;
        }
        // A display callback covers every call into the instruction selectors.
        // Keep patch ownership and both allocations until it has left.
        if (!native_callbacks_idle()) return false;
        select(nullptr);
        if (installed && !write_native_code_patches(patches, false, label, &installed)) return false;
        if (!flush_native_code_patches(patches, label)) return false;
        if (!release_native_relay(relay, relay_size, label)) return false;
        if (!release_native_relay(data, data_size, label)) return false;
        patches.clear();
        fields.clear();
        native_fields.clear();
        graphics = 0;
        native_texture_base_slot = ~size_t{0};
        selected = nullptr;
        return true;
    }
};
static NativeDfhackDisplayInputs g_native_dfhack_display_inputs;

static bool native_dfhack_display_input_reference_profile(uintptr_t base,
        std::vector<NativeDfhackDisplayInputSite> &sites) {
    const uintptr_t graphics = native_pe_address(base, 0x264a3f0);
    if (!graphics) return false;
    const auto append = [&](uintptr_t address, size_t field, size_t displacement,
            const std::vector<unsigned char> &instruction) {
        if (!address || instruction.size() < 6 || instruction.size() > 10 ||
                displacement < 2 || displacement + sizeof(int32_t) > instruction.size() ||
                field >= sizeof(graphicst) ||
                (instruction[displacement - 1] & 0xc7) != 0x05) return false;
        int32_t relative = 0;
        std::memcpy(&relative, instruction.data() + displacement, sizeof(relative));
        // native_pe_bytes supplies the edition-specific RIP displacement.
        const auto target = reinterpret_cast<uintptr_t>(native_graphics_member_address(
            reinterpret_cast<graphicst *>(graphics), field, 1));
        if (!target || address + instruction.size() + relative != target) return false;
        sites.push_back({reinterpret_cast<unsigned char *>(address), field,
            displacement, instruction});
        return true;
    };
    // renderer_2d::update_map_port_tile: native UI refresh/anchor ownership.
    std::vector<unsigned char> prefix_8df3bc{0x8b,0x0d,0x42,0xb7,0xd6,0x01};
    if (!native_pe_bytes(0x8df3bc, prefix_8df3bc) ||
            !append(native_pe_address(base, 0x8df3bc), offsetof(graphicst, dimy), 2, prefix_8df3bc)) return false;
    std::vector<unsigned char> prefix_8df3e9{0x44,0x3b,0x0d,0x10,0xb7,0xd6,0x01};
    if (!native_pe_bytes(0x8df3e9, prefix_8df3e9) ||
            !append(native_pe_address(base, 0x8df3e9), offsetof(graphicst, dimx), 3, prefix_8df3e9)) return false;
    std::vector<unsigned char> prefix_8df40e{0x48,0x8b,0x0d,0x53,0xb2,0xd6,0x01};
    if (!native_pe_bytes(0x8df40e, prefix_8df40e) ||
            !append(native_pe_address(base, 0x8df40e), offsetof(graphicst, screentexpos_refresh_buffer), 3, prefix_8df40e)) return false;
    std::vector<unsigned char> prefix_8df41b{0x8b,0x05,0x4f,0xb2,0xd6,0x01};
    if (!native_pe_bytes(0x8df41b, prefix_8df41b) ||
            !append(native_pe_address(base, 0x8df41b), offsetof(graphicst, refresh_buffer_val), 2, prefix_8df41b)) return false;
    std::vector<unsigned char> prefix_8df427{0x8b,0x0d,0xd7,0xb6,0xd6,0x01};
    if (!native_pe_bytes(0x8df427, prefix_8df427) ||
            !append(native_pe_address(base, 0x8df427), offsetof(graphicst, dimy), 2, prefix_8df427)) return false;
    std::vector<unsigned char> prefix_8df436{0x48,0x8b,0x05,0xb3,0xb1,0xd6,0x01};
    if (!native_pe_bytes(0x8df436, prefix_8df436) ||
            !append(native_pe_address(base, 0x8df436), offsetof(graphicst, screentexpos_anchored), 3, prefix_8df436)) return false;
    std::vector<unsigned char> prefix_8df443{0x48,0x8b,0x05,0xbe,0xb1,0xd6,0x01};
    if (!native_pe_bytes(0x8df443, prefix_8df443) ||
            !append(native_pe_address(base, 0x8df443), offsetof(graphicst, screentexpos_flag), 3, prefix_8df443)) return false;
    std::vector<unsigned char> prefix_8df46a{0x3b,0x05,0x90,0xb6,0xd6,0x01};
    if (!native_pe_bytes(0x8df46a, prefix_8df46a) ||
            !append(native_pe_address(base, 0x8df46a), offsetof(graphicst, dimx), 2, prefix_8df46a)) return false;
    std::vector<unsigned char> prefix_8df481{0x48,0x8b,0x0d,0xe0,0xb1,0xd6,0x01};
    if (!native_pe_bytes(0x8df481, prefix_8df481) ||
            !append(native_pe_address(base, 0x8df481), offsetof(graphicst, screentexpos_refresh_buffer), 3, prefix_8df481)) return false;
    std::vector<unsigned char> prefix_8df491{0x8b,0x05,0xd9,0xb1,0xd6,0x01};
    if (!native_pe_bytes(0x8df491, prefix_8df491) ||
            !append(native_pe_address(base, 0x8df491), offsetof(graphicst, refresh_buffer_val), 2, prefix_8df491)) return false;
    std::vector<unsigned char> prefix_8df49a{0x8b,0x0d,0x64,0xb6,0xd6,0x01};
    if (!native_pe_bytes(0x8df49a, prefix_8df49a) ||
            !append(native_pe_address(base, 0x8df49a), offsetof(graphicst, dimy), 2, prefix_8df49a)) return false;
    std::vector<unsigned char> prefix_8df4ac{0x48,0x8b,0x05,0x7d,0xb1,0xd6,0x01};
    if (!native_pe_bytes(0x8df4ac, prefix_8df4ac) ||
            !append(native_pe_address(base, 0x8df4ac), offsetof(graphicst, screentexpos_top_anchored), 3, prefix_8df4ac)) return false;
    std::vector<unsigned char> prefix_8df4b9{0x48,0x8b,0x05,0x90,0xb1,0xd6,0x01};
    if (!native_pe_bytes(0x8df4b9, prefix_8df4b9) ||
            !append(native_pe_address(base, 0x8df4b9), offsetof(graphicst, screentexpos_top_flag), 3, prefix_8df4b9)) return false;
    std::vector<unsigned char> prefix_8df4e0{0x3b,0x05,0x1a,0xb6,0xd6,0x01};
    if (!native_pe_bytes(0x8df4e0, prefix_8df4e0) ||
            !append(native_pe_address(base, 0x8df4e0), offsetof(graphicst, dimx), 2, prefix_8df4e0)) return false;
    std::vector<unsigned char> prefix_8df4f7{0x48,0x8b,0x0d,0x6a,0xb1,0xd6,0x01};
    if (!native_pe_bytes(0x8df4f7, prefix_8df4f7) ||
            !append(native_pe_address(base, 0x8df4f7), offsetof(graphicst, screentexpos_refresh_buffer), 3, prefix_8df4f7)) return false;
    std::vector<unsigned char> prefix_8df507{0x8b,0x05,0x63,0xb1,0xd6,0x01};
    if (!native_pe_bytes(0x8df507, prefix_8df507) ||
            !append(native_pe_address(base, 0x8df507), offsetof(graphicst, refresh_buffer_val), 2, prefix_8df507)) return false;
    std::vector<unsigned char> prefix_8df510{0x8b,0x0d,0xee,0xb5,0xd6,0x01};
    if (!native_pe_bytes(0x8df510, prefix_8df510) ||
            !append(native_pe_address(base, 0x8df510), offsetof(graphicst, dimy), 2, prefix_8df510)) return false;
    // renderer_2d::update_viewport_tile refresh/anchor ownership.
    std::vector<unsigned char> prefix_8e1aa1{0x8b,0x0d,0x5d,0x90,0xd6,0x01};
    if (!native_pe_bytes(0x8e1aa1, prefix_8e1aa1) ||
            !append(native_pe_address(base, 0x8e1aa1), offsetof(graphicst, dimy), 2, prefix_8e1aa1)) return false;
    std::vector<unsigned char> prefix_8e1ac9{0x44,0x3b,0x0d,0x30,0x90,0xd6,0x01};
    if (!native_pe_bytes(0x8e1ac9, prefix_8e1ac9) ||
            !append(native_pe_address(base, 0x8e1ac9), offsetof(graphicst, dimx), 3, prefix_8e1ac9)) return false;
    std::vector<unsigned char> prefix_8e1aee{0x48,0x8b,0x0d,0x73,0x8b,0xd6,0x01};
    if (!native_pe_bytes(0x8e1aee, prefix_8e1aee) ||
            !append(native_pe_address(base, 0x8e1aee), offsetof(graphicst, screentexpos_refresh_buffer), 3, prefix_8e1aee)) return false;
    std::vector<unsigned char> prefix_8e1afb{0x8b,0x05,0x6f,0x8b,0xd6,0x01};
    if (!native_pe_bytes(0x8e1afb, prefix_8e1afb) ||
            !append(native_pe_address(base, 0x8e1afb), offsetof(graphicst, refresh_buffer_val), 2, prefix_8e1afb)) return false;
    std::vector<unsigned char> prefix_8e1b07{0x8b,0x0d,0xf7,0x8f,0xd6,0x01};
    if (!native_pe_bytes(0x8e1b07, prefix_8e1b07) ||
            !append(native_pe_address(base, 0x8e1b07), offsetof(graphicst, dimy), 2, prefix_8e1b07)) return false;
    std::vector<unsigned char> prefix_8e1b16{0x48,0x8b,0x05,0xd3,0x8a,0xd6,0x01};
    if (!native_pe_bytes(0x8e1b16, prefix_8e1b16) ||
            !append(native_pe_address(base, 0x8e1b16), offsetof(graphicst, screentexpos_anchored), 3, prefix_8e1b16)) return false;
    std::vector<unsigned char> prefix_8e1b23{0x48,0x8b,0x05,0xde,0x8a,0xd6,0x01};
    if (!native_pe_bytes(0x8e1b23, prefix_8e1b23) ||
            !append(native_pe_address(base, 0x8e1b23), offsetof(graphicst, screentexpos_flag), 3, prefix_8e1b23)) return false;
    std::vector<unsigned char> prefix_8e1b4a{0x3b,0x05,0xb0,0x8f,0xd6,0x01};
    if (!native_pe_bytes(0x8e1b4a, prefix_8e1b4a) ||
            !append(native_pe_address(base, 0x8e1b4a), offsetof(graphicst, dimx), 2, prefix_8e1b4a)) return false;
    std::vector<unsigned char> prefix_8e1b61{0x48,0x8b,0x0d,0x00,0x8b,0xd6,0x01};
    if (!native_pe_bytes(0x8e1b61, prefix_8e1b61) ||
            !append(native_pe_address(base, 0x8e1b61), offsetof(graphicst, screentexpos_refresh_buffer), 3, prefix_8e1b61)) return false;
    std::vector<unsigned char> prefix_8e1b71{0x8b,0x05,0xf9,0x8a,0xd6,0x01};
    if (!native_pe_bytes(0x8e1b71, prefix_8e1b71) ||
            !append(native_pe_address(base, 0x8e1b71), offsetof(graphicst, refresh_buffer_val), 2, prefix_8e1b71)) return false;
    std::vector<unsigned char> prefix_8e1b7a{0x8b,0x0d,0x84,0x8f,0xd6,0x01};
    if (!native_pe_bytes(0x8e1b7a, prefix_8e1b7a) ||
            !append(native_pe_address(base, 0x8e1b7a), offsetof(graphicst, dimy), 2, prefix_8e1b7a)) return false;
    std::vector<unsigned char> prefix_8e1b8c{0x48,0x8b,0x05,0x9d,0x8a,0xd6,0x01};
    if (!native_pe_bytes(0x8e1b8c, prefix_8e1b8c) ||
            !append(native_pe_address(base, 0x8e1b8c), offsetof(graphicst, screentexpos_top_anchored), 3, prefix_8e1b8c)) return false;
    std::vector<unsigned char> prefix_8e1b99{0x48,0x8b,0x05,0xb0,0x8a,0xd6,0x01};
    if (!native_pe_bytes(0x8e1b99, prefix_8e1b99) ||
            !append(native_pe_address(base, 0x8e1b99), offsetof(graphicst, screentexpos_top_flag), 3, prefix_8e1b99)) return false;
    std::vector<unsigned char> prefix_8e1bc0{0x3b,0x05,0x3a,0x8f,0xd6,0x01};
    if (!native_pe_bytes(0x8e1bc0, prefix_8e1bc0) ||
            !append(native_pe_address(base, 0x8e1bc0), offsetof(graphicst, dimx), 2, prefix_8e1bc0)) return false;
    std::vector<unsigned char> prefix_8e1bd7{0x48,0x8b,0x0d,0x8a,0x8a,0xd6,0x01};
    if (!native_pe_bytes(0x8e1bd7, prefix_8e1bd7) ||
            !append(native_pe_address(base, 0x8e1bd7), offsetof(graphicst, screentexpos_refresh_buffer), 3, prefix_8e1bd7)) return false;
    std::vector<unsigned char> prefix_8e1be7{0x8b,0x05,0x83,0x8a,0xd6,0x01};
    if (!native_pe_bytes(0x8e1be7, prefix_8e1be7) ||
            !append(native_pe_address(base, 0x8e1be7), offsetof(graphicst, refresh_buffer_val), 2, prefix_8e1be7)) return false;
    std::vector<unsigned char> prefix_8e1bf0{0x8b,0x0d,0x0e,0x8f,0xd6,0x01};
    if (!native_pe_bytes(0x8e1bf0, prefix_8e1bf0) ||
            !append(native_pe_address(base, 0x8e1bf0), offsetof(graphicst, dimy), 2, prefix_8e1bf0)) return false;
    // renderer::display refresh epoch, viewport selection and retained loops.
    // Redraw requests are merged with the live owner when update_all resumes.
    std::vector<unsigned char> prefix_8e3a16{0x8b,0x05,0x54,0x6c,0xd6,0x01};
    if (!native_pe_bytes(0x8e3a16, prefix_8e3a16) ||
            !append(native_pe_address(base, 0x8e3a16), offsetof(graphicst, refresh_buffer_val), 2, prefix_8e3a16)) return false;
    std::vector<unsigned char> prefix_8e3a21{0x89,0x05,0x49,0x6c,0xd6,0x01};
    if (!native_pe_bytes(0x8e3a21, prefix_8e3a21) ||
            !append(native_pe_address(base, 0x8e3a21), offsetof(graphicst, refresh_buffer_val), 2, prefix_8e3a21)) return false;
    std::vector<unsigned char> prefix_8e3a2e{0x48,0x8b,0x0d,0x33,0x6c,0xd6,0x01};
    if (!native_pe_bytes(0x8e3a2e, prefix_8e3a2e) ||
            !append(native_pe_address(base, 0x8e3a2e), offsetof(graphicst, screentexpos_refresh_buffer), 3, prefix_8e3a2e)) return false;
    std::vector<unsigned char> prefix_8e3a35{0xc7,0x05,0x31,0x6c,0xd6,0x01,0x00,0x00,0x00,0x00};
    if (!native_pe_bytes(0x8e3a35, prefix_8e3a35) ||
            !append(native_pe_address(base, 0x8e3a35), offsetof(graphicst, refresh_buffer_val), 2, prefix_8e3a35)) return false;
    std::vector<unsigned char> prefix_8e3a44{0x4c,0x63,0x05,0xb9,0x70,0xd6,0x01};
    if (!native_pe_bytes(0x8e3a44, prefix_8e3a44) ||
            !append(native_pe_address(base, 0x8e3a44), offsetof(graphicst, dimy), 3, prefix_8e3a44)) return false;
    std::vector<unsigned char> prefix_8e3a4d{0x48,0x63,0x05,0xac,0x70,0xd6,0x01};
    if (!native_pe_bytes(0x8e3a4d, prefix_8e3a4d) ||
            !append(native_pe_address(base, 0x8e3a4d), offsetof(graphicst, dimx), 3, prefix_8e3a4d)) return false;
    std::vector<unsigned char> prefix_8e3a6f{0x66,0x89,0x05,0x82,0x70,0xd6,0x01};
    if (!native_pe_bytes(0x8e3a6f, prefix_8e3a6f) ||
            !append(native_pe_address(base, 0x8e3a6f), offsetof(graphicst, force_full_display_count), 3, prefix_8e3a6f)) return false;
    std::vector<unsigned char> prefix_8e3a78{0x66,0x83,0x3d,0x78,0x70,0xd6,0x01,0x00};
    if (!native_pe_bytes(0x8e3a78, prefix_8e3a78) ||
            !append(native_pe_address(base, 0x8e3a78), offsetof(graphicst, force_full_display_count), 3, prefix_8e3a78)) return false;
    std::vector<unsigned char> prefix_8e3a90{0x48,0x8b,0x15,0xb1,0x69,0xd6,0x01};
    if (!native_pe_bytes(0x8e3a90, prefix_8e3a90) ||
            !append(native_pe_address(base, 0x8e3a90), offsetof(graphicst, lower_viewport) + 7 * sizeof(void *), 3, prefix_8e3a90)) return false;
    std::vector<unsigned char> prefix_8e3aab{0x48,0x8b,0x15,0x8e,0x69,0xd6,0x01};
    if (!native_pe_bytes(0x8e3aab, prefix_8e3aab) ||
            !append(native_pe_address(base, 0x8e3aab), offsetof(graphicst, lower_viewport) + 6 * sizeof(void *), 3, prefix_8e3aab)) return false;
    std::vector<unsigned char> prefix_8e3ac6{0x48,0x8b,0x15,0x6b,0x69,0xd6,0x01};
    if (!native_pe_bytes(0x8e3ac6, prefix_8e3ac6) ||
            !append(native_pe_address(base, 0x8e3ac6), offsetof(graphicst, lower_viewport) + 5 * sizeof(void *), 3, prefix_8e3ac6)) return false;
    std::vector<unsigned char> prefix_8e3ae1{0x48,0x8b,0x15,0x48,0x69,0xd6,0x01};
    if (!native_pe_bytes(0x8e3ae1, prefix_8e3ae1) ||
            !append(native_pe_address(base, 0x8e3ae1), offsetof(graphicst, lower_viewport) + 4 * sizeof(void *), 3, prefix_8e3ae1)) return false;
    std::vector<unsigned char> prefix_8e3afc{0x48,0x8b,0x15,0x25,0x69,0xd6,0x01};
    if (!native_pe_bytes(0x8e3afc, prefix_8e3afc) ||
            !append(native_pe_address(base, 0x8e3afc), offsetof(graphicst, lower_viewport) + 3 * sizeof(void *), 3, prefix_8e3afc)) return false;
    std::vector<unsigned char> prefix_8e3b17{0x48,0x8b,0x15,0x02,0x69,0xd6,0x01};
    if (!native_pe_bytes(0x8e3b17, prefix_8e3b17) ||
            !append(native_pe_address(base, 0x8e3b17), offsetof(graphicst, lower_viewport) + 2 * sizeof(void *), 3, prefix_8e3b17)) return false;
    std::vector<unsigned char> prefix_8e3b32{0x48,0x8b,0x15,0xdf,0x68,0xd6,0x01};
    if (!native_pe_bytes(0x8e3b32, prefix_8e3b32) ||
            !append(native_pe_address(base, 0x8e3b32), offsetof(graphicst, lower_viewport) + 1 * sizeof(void *), 3, prefix_8e3b32)) return false;
    std::vector<unsigned char> prefix_8e3b4d{0x48,0x8b,0x15,0xbc,0x68,0xd6,0x01};
    if (!native_pe_bytes(0x8e3b4d, prefix_8e3b4d) ||
            !append(native_pe_address(base, 0x8e3b4d), offsetof(graphicst, lower_viewport), 3, prefix_8e3b4d)) return false;
    std::vector<unsigned char> prefix_8e3b68{0x48,0x8b,0x15,0x99,0x68,0xd6,0x01};
    if (!native_pe_bytes(0x8e3b68, prefix_8e3b68) ||
            !append(native_pe_address(base, 0x8e3b68), offsetof(graphicst, main_viewport), 3, prefix_8e3b68)) return false;
    std::vector<unsigned char> prefix_8e3b83{0x48,0x8b,0x15,0xde,0x68,0xd6,0x01};
    if (!native_pe_bytes(0x8e3b83, prefix_8e3b83) ||
            !append(native_pe_address(base, 0x8e3b83), offsetof(graphicst, main_map_port), 3, prefix_8e3b83)) return false;
    std::vector<unsigned char> prefix_8e3bb7{0x4c,0x8b,0x15,0x4a,0x68,0xd6,0x01};
    if (!native_pe_bytes(0x8e3bb7, prefix_8e3bb7) ||
            !append(native_pe_address(base, 0x8e3bb7), offsetof(graphicst, main_viewport), 3, prefix_8e3bb7)) return false;
    std::vector<unsigned char> prefix_8e3c09{0x4c,0x8d,0x0d,0x00,0x68,0xd6,0x01};
    if (!native_pe_bytes(0x8e3c09, prefix_8e3c09) ||
            !append(native_pe_address(base, 0x8e3c09), offsetof(graphicst, lower_viewport), 3, prefix_8e3c09)) return false;
    std::vector<unsigned char> prefix_8e4122{0x48,0x8b,0x15,0x1f,0x63,0xd6,0x01};
    if (!native_pe_bytes(0x8e4122, prefix_8e4122) ||
            !append(native_pe_address(base, 0x8e4122), offsetof(graphicst, lower_viewport) + 7 * sizeof(void *), 3, prefix_8e4122)) return false;
    std::vector<unsigned char> prefix_8e413e{0x4c,0x8b,0x15,0xc3,0x62,0xd6,0x01};
    if (!native_pe_bytes(0x8e413e, prefix_8e413e) ||
            !append(native_pe_address(base, 0x8e413e), offsetof(graphicst, main_viewport), 3, prefix_8e413e)) return false;
    std::vector<unsigned char> prefix_8e4145{0x48,0x8b,0x15,0xf4,0x62,0xd6,0x01};
    if (!native_pe_bytes(0x8e4145, prefix_8e4145) ||
            !append(native_pe_address(base, 0x8e4145), offsetof(graphicst, lower_viewport) + 6 * sizeof(void *), 3, prefix_8e4145)) return false;
    std::vector<unsigned char> prefix_8e4161{0x4c,0x8b,0x15,0xa0,0x62,0xd6,0x01};
    if (!native_pe_bytes(0x8e4161, prefix_8e4161) ||
            !append(native_pe_address(base, 0x8e4161), offsetof(graphicst, main_viewport), 3, prefix_8e4161)) return false;
    std::vector<unsigned char> prefix_8e4168{0x48,0x8b,0x15,0xc9,0x62,0xd6,0x01};
    if (!native_pe_bytes(0x8e4168, prefix_8e4168) ||
            !append(native_pe_address(base, 0x8e4168), offsetof(graphicst, lower_viewport) + 5 * sizeof(void *), 3, prefix_8e4168)) return false;
    std::vector<unsigned char> prefix_8e4184{0x4c,0x8b,0x15,0x7d,0x62,0xd6,0x01};
    if (!native_pe_bytes(0x8e4184, prefix_8e4184) ||
            !append(native_pe_address(base, 0x8e4184), offsetof(graphicst, main_viewport), 3, prefix_8e4184)) return false;
    std::vector<unsigned char> prefix_8e418b{0x48,0x8b,0x15,0x9e,0x62,0xd6,0x01};
    if (!native_pe_bytes(0x8e418b, prefix_8e418b) ||
            !append(native_pe_address(base, 0x8e418b), offsetof(graphicst, lower_viewport) + 4 * sizeof(void *), 3, prefix_8e418b)) return false;
    std::vector<unsigned char> prefix_8e41a7{0x4c,0x8b,0x15,0x5a,0x62,0xd6,0x01};
    if (!native_pe_bytes(0x8e41a7, prefix_8e41a7) ||
            !append(native_pe_address(base, 0x8e41a7), offsetof(graphicst, main_viewport), 3, prefix_8e41a7)) return false;
    std::vector<unsigned char> prefix_8e41ae{0x48,0x8b,0x15,0x73,0x62,0xd6,0x01};
    if (!native_pe_bytes(0x8e41ae, prefix_8e41ae) ||
            !append(native_pe_address(base, 0x8e41ae), offsetof(graphicst, lower_viewport) + 3 * sizeof(void *), 3, prefix_8e41ae)) return false;
    std::vector<unsigned char> prefix_8e41ca{0x4c,0x8b,0x15,0x37,0x62,0xd6,0x01};
    if (!native_pe_bytes(0x8e41ca, prefix_8e41ca) ||
            !append(native_pe_address(base, 0x8e41ca), offsetof(graphicst, main_viewport), 3, prefix_8e41ca)) return false;
    std::vector<unsigned char> prefix_8e41d1{0x48,0x8b,0x15,0x48,0x62,0xd6,0x01};
    if (!native_pe_bytes(0x8e41d1, prefix_8e41d1) ||
            !append(native_pe_address(base, 0x8e41d1), offsetof(graphicst, lower_viewport) + 2 * sizeof(void *), 3, prefix_8e41d1)) return false;
    std::vector<unsigned char> prefix_8e41ed{0x4c,0x8b,0x15,0x14,0x62,0xd6,0x01};
    if (!native_pe_bytes(0x8e41ed, prefix_8e41ed) ||
            !append(native_pe_address(base, 0x8e41ed), offsetof(graphicst, main_viewport), 3, prefix_8e41ed)) return false;
    std::vector<unsigned char> prefix_8e41f4{0x48,0x8b,0x15,0x1d,0x62,0xd6,0x01};
    if (!native_pe_bytes(0x8e41f4, prefix_8e41f4) ||
            !append(native_pe_address(base, 0x8e41f4), offsetof(graphicst, lower_viewport) + 1 * sizeof(void *), 3, prefix_8e41f4)) return false;
    std::vector<unsigned char> prefix_8e4210{0x4c,0x8b,0x15,0xf1,0x61,0xd6,0x01};
    if (!native_pe_bytes(0x8e4210, prefix_8e4210) ||
            !append(native_pe_address(base, 0x8e4210), offsetof(graphicst, main_viewport), 3, prefix_8e4210)) return false;
    std::vector<unsigned char> prefix_8e4217{0x48,0x8b,0x15,0xf2,0x61,0xd6,0x01};
    if (!native_pe_bytes(0x8e4217, prefix_8e4217) ||
            !append(native_pe_address(base, 0x8e4217), offsetof(graphicst, lower_viewport), 3, prefix_8e4217)) return false;
    std::vector<unsigned char> prefix_8e4233{0x4c,0x8b,0x15,0xce,0x61,0xd6,0x01};
    if (!native_pe_bytes(0x8e4233, prefix_8e4233) ||
            !append(native_pe_address(base, 0x8e4233), offsetof(graphicst, main_viewport), 3, prefix_8e4233)) return false;
    std::vector<unsigned char> prefix_8e424d{0x4c,0x8b,0x15,0xb4,0x61,0xd6,0x01};
    if (!native_pe_bytes(0x8e424d, prefix_8e424d) ||
            !append(native_pe_address(base, 0x8e424d), offsetof(graphicst, main_viewport), 3, prefix_8e424d)) return false;
    std::vector<unsigned char> prefix_8e4254{0x4c,0x8d,0x0d,0xb5,0x61,0xd6,0x01};
    if (!native_pe_bytes(0x8e4254, prefix_8e4254) ||
            !append(native_pe_address(base, 0x8e4254), offsetof(graphicst, lower_viewport), 3, prefix_8e4254)) return false;
    std::vector<unsigned char> prefix_8e427c{0x4c,0x8b,0x15,0xe5,0x61,0xd6,0x01};
    if (!native_pe_bytes(0x8e427c, prefix_8e427c) ||
            !append(native_pe_address(base, 0x8e427c), offsetof(graphicst, main_map_port), 3, prefix_8e427c)) return false;
    std::vector<unsigned char> prefix_8e4626{0x4c,0x8b,0x15,0x3b,0x5e,0xd6,0x01};
    if (!native_pe_bytes(0x8e4626, prefix_8e4626) ||
            !append(native_pe_address(base, 0x8e4626), offsetof(graphicst, main_map_port), 3, prefix_8e4626)) return false;
#include "native_dfhack_display_input_ui_profile.inc"
    return !sites.empty();
}

static bool native_dfhack_display_input_profile(uintptr_t base,
        std::vector<NativeDfhackDisplayInputSite> &sites) {
    const auto &state = pe_runtime::state();
    const auto reject = [&](const char *reason, const address_runtime::DisplaySite *site = nullptr) {
        std::ostringstream message;
        message << "Native display input snapshot: " << reason;
        if (site) message << "; instruction=0x" << std::hex << site->address
            << " field=0x" << site->field << " target=0x" << site->target
            << " role=0x" << site->flags << " displacement=" << std::dec << site->displacement
            << " length=" << site->instruction.size();
        log_line("ERROR", message.str());
        return false;
    };
    if (!pe_runtime::usable(state)) return reject("address catalog is not usable");
    // A packaged image identity supplies discovery evidence, not a different
    // renderer path. Every image consumes the same complete selector set.
    if (!state.missing_display_scopes.empty() || state.display_sites.empty()) {
        std::ostringstream message;
        message << "Native display input snapshot: incomplete display scope evidence; sites="
            << state.display_sites.size() << " missing=" << state.missing_display_scopes.size();
        if (!state.missing_display_scopes.empty())
            message << " first_reference=0x" << std::hex << state.missing_display_scopes.front();
        log_line("ERROR", message.str());
        return false;
    }
    for (const auto &site : state.display_sites) {
        const bool native_owned = (site.flags & 1) != 0;
        // graphicst is the core's projected subset, not the full native
        // object. Address-only renderer resources remain on their proved
        // native targets and can lie beyond that subset; select() never
        // indexes the snapshot for these sites.
        if (!native_owned && site.field >= sizeof(graphicst))
            return reject("snapshot field is outside the canonical projection", &site);
        if (!site.address || (site.flags & ~1u) || site.instruction.size() < 6 ||
                site.displacement < 2 || site.displacement + 4 > site.instruction.size() ||
                uint64_t(site.address) + site.instruction.size() > state.size || !site.target || site.target >= state.size)
            return reject("invalid sealed selector contract", &site);
        auto *address = reinterpret_cast<unsigned char *>(base + site.address);
        if (std::memcmp(address, site.instruction.data(), site.instruction.size()))
            return reject("native instruction differs from sealed evidence", &site);
        int32_t relative; std::memcpy(&relative, site.instruction.data() + site.displacement, 4);
        if (int64_t(site.address) + site.instruction.size() + relative != site.target)
            return reject("RIP operand differs from its proved target", &site);
        sites.push_back({address, site.field, site.displacement, site.instruction,
            base + site.target, native_owned});
    }
    return true;
}

static bool native_dfhack_display_input_displacement(unsigned char *destination,
        size_t length, size_t offset, uintptr_t target) {
    const intptr_t relative = static_cast<intptr_t>(target) -
        reinterpret_cast<intptr_t>(destination + length);
    if (relative < INT32_MIN || relative > INT32_MAX) return false;
    const int32_t displacement = static_cast<int32_t>(relative);
    std::memcpy(destination + offset, &displacement, sizeof(displacement));
    return true;
}

static bool install_native_dfhack_display_inputs() {
    constexpr const char *label = "Native display input snapshot";
    auto &hook = g_native_dfhack_display_inputs;
    if (hook.installed) return flush_native_code_patches(hook.patches, label);
    if (!hook.uninstall()) {
        report_native_patch_error("ERROR", label, "previous selector ownership could not be released"); return false;
    }
    if (!native_pe_supported()) {
        report_native_patch_error("ERROR", label, "address catalog is not usable"); return false;
    }
    const auto base = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    std::vector<NativeDfhackDisplayInputSite> sites;
    if (!base) {
        report_native_patch_error("ERROR", label, "native executable base is unavailable"); return false;
    }
    if (!native_dfhack_display_input_profile(base, sites)) return false;
    NativeRelayRange range;
    for (const auto &site : sites) range.include(reinterpret_cast<uintptr_t>(site.address));
    const uintptr_t graphics = native_pe_address(base, 0x264a3f0);
    range.include(graphics);
    range.include(graphics + sizeof(graphicst));
    constexpr size_t stride = 64;
    hook.relay = allocate_native_relay(range, sites.size() * stride, &hook.relay_size, label);
    if (!hook.relay) return false;
    NativeRelayGuard relay_guard{hook.relay, hook.relay_size, hook.installed, label};
    // The selected addresses, enabled flag and snapshot reach every stub.
    NativeRelayRange data_range = range;
    data_range.include(reinterpret_cast<uintptr_t>(hook.relay));
    data_range.include(reinterpret_cast<uintptr_t>(hook.relay) + sites.size() * stride);
    hook.data = allocate_native_relay(data_range,
        NativeDfhackDisplayInputs::field_slots_offset + sites.size() * sizeof(uintptr_t),
        &hook.data_size, label);
    if (!hook.data) return false;
    NativeRelayGuard data_guard{hook.data, hook.data_size, hook.installed, label};
    unsigned long error = 0;
    if (!native_patch_protect(hook.data, hook.data_size, PAGE_READWRITE, error)) {
        report_native_patch_error("ERROR", label, "snapshot data protection failed", error);
        return false;
    }
    std::memset(hook.data, 0, hook.data_size);
    hook.graphics = graphics;
    hook.native_texture_base_slot = ~size_t{0};
    hook.fields.reserve(sites.size());
    hook.native_fields.reserve(sites.size());
    const uintptr_t native_texture_base = native_pe_address(base, 0x8e1cc6);
    for (const auto &site : sites) {
        // This LEA supplies R12 solely for tex[index] in update_all. Other
        // field-zero operands select viewport data and must stay per-frame.
        if (reinterpret_cast<uintptr_t>(site.address) == native_texture_base)
            hook.native_texture_base_slot = hook.fields.size();
        hook.fields.push_back(site.field);
        hook.native_fields.push_back(site.native_owned ? site.native_target : 0);
    }
    hook.select(nullptr);
    auto *relay = static_cast<unsigned char *>(hook.relay);
    for (size_t i = 0; i < sites.size(); ++i) {
        const auto &site = sites[i];
        const auto reject = [&](const char *reason) {
            std::ostringstream message;
            message << label << ": " << reason << "; instruction=0x" << std::hex
                << reinterpret_cast<uintptr_t>(site.address) - base << " field=0x" << site.field
                << " native_target=0x" << site.native_target << " native_owned=" << site.native_owned;
            log_line("ERROR", message.str());
            return false;
        };
        auto *stub = relay + i * stride;
        const size_t length = site.instruction.size();
        size_t legacy_size = 0;
        while (legacy_size < site.instruction.size() &&
                (site.instruction[legacy_size] == 0x66 ||
                 site.instruction[legacy_size] == 0xf2 ||
                 site.instruction[legacy_size] == 0xf3)) ++legacy_size;
        size_t opcode_at = legacy_size;
        unsigned char original_rex = 0;
        if (opcode_at < site.instruction.size() &&
                (site.instruction[opcode_at] & 0xf0) == 0x40)
            original_rex = site.instruction[opcode_at++];
        const unsigned char opcode = site.instruction[opcode_at];
        const size_t opcode_size = opcode == 0x0f ? 2 : 1;
        if (opcode_at + opcode_size + 1 != site.displacement)
            return reject("selector prefix/displacement encoding is unsupported");
        const unsigned char original_modrm = site.instruction[site.displacement - 1];
        const unsigned reg = ((original_modrm >> 3) & 7) | ((original_rex & 4) ? 8 : 0);
        NativeCodePatch patch{site.address, site.instruction,
            std::vector<unsigned char>(length, 0x90)};
        const uintptr_t selected = reinterpret_cast<uintptr_t>(hook.field_slots() + i);
        if (opcode == 0x8d && !legacy_size) {
            // LEA's result is the selected field's address. A same-size MOV
            // reads it directly from the frame-selected slot, without a stub.
            patch.replacement = site.instruction;
            patch.replacement[opcode_at] = 0x8b;
            const intptr_t relative = static_cast<intptr_t>(selected) -
                reinterpret_cast<intptr_t>(site.address + length);
            if (relative < INT32_MIN || relative > INT32_MAX) return reject("selected field slot is outside RIP reach");
            const int32_t displacement = static_cast<int32_t>(relative);
            std::memcpy(patch.replacement.data() + site.displacement,
                &displacement, sizeof(displacement));
        } else if ((opcode == 0x8b || opcode == 0x63) && !legacy_size) {
            // Hot map loops reuse the original destination register to hold
            // the selected address, then perform the original-width load.
            // Both MOVs and both JMPs preserve flags and every other register.
            const unsigned low = reg & 7;
            const unsigned char pointer_load[]{static_cast<unsigned char>(0x48 | (reg >= 8 ? 4 : 0)),
                0x8b, static_cast<unsigned char>((low << 3) | 5),0,0,0,0};
            std::memcpy(stub, pointer_load, sizeof(pointer_load));
            if (!native_dfhack_display_input_displacement(stub, sizeof(pointer_load), 3, selected))
                return reject("load selector cannot reach its field slot");
            size_t at = sizeof(pointer_load);
            const unsigned char dereference_rex = static_cast<unsigned char>(
                0x40 | (original_rex & 8) | (reg >= 8 ? 5 : 0));
            if (dereference_rex != 0x40) stub[at++] = dereference_rex;
            stub[at++] = opcode;
            // RBP/R13 require a zero displacement; RSP/R12 require a SIB.
            stub[at++] = static_cast<unsigned char>((low == 5 ? 0x40 : 0) | (low << 3) | low);
            if (low == 4) stub[at++] = 0x24;
            if (low == 5) stub[at++] = 0;
            if (!native_relative_branch(stub + at, 0xe9, site.address + length))
                return reject("load selector cannot reach its continuation");
        } else {
            // Arithmetic, conditional loads, byte comparisons and stores use
            // a saved scratch register. MOV, PUSH, POP and JMP leave flags
            // intact, so only the original operation affects their result.
            // Its selected field is writable when the operation is a store.
            const unsigned scratch = reg == 11 ? 10 : 11;
            size_t at = 0;
            stub[at++] = 0x41;
            stub[at++] = static_cast<unsigned char>(0x50 | (scratch & 7));
            const unsigned char pointer_load[]{0x4c,0x8b,
                static_cast<unsigned char>(((scratch & 7) << 3) | 5),0,0,0,0};
            std::memcpy(stub + at, pointer_load, sizeof(pointer_load));
            if (!native_dfhack_display_input_displacement(stub + at,
                    sizeof(pointer_load), 3, selected)) return reject("operation selector cannot reach its field slot");
            at += sizeof(pointer_load);
            for (size_t prefix = 0; prefix < legacy_size; ++prefix)
                stub[at++] = site.instruction[prefix];
            stub[at++] = static_cast<unsigned char>((original_rex ? original_rex : 0x40) | 1);
            for (size_t part = 0; part < opcode_size; ++part)
                stub[at++] = site.instruction[opcode_at + part];
            stub[at++] = static_cast<unsigned char>((original_modrm & 0x38) | (scratch & 7));
            for (size_t tail = site.displacement + sizeof(int32_t); tail < length; ++tail)
                stub[at++] = site.instruction[tail];
            stub[at++] = 0x41;
            stub[at++] = static_cast<unsigned char>(0x58 | (scratch & 7));
            if (!native_relative_branch(stub + at, 0xe9, site.address + length))
                return reject("operation selector cannot reach its continuation");
        }
        if (opcode != 0x8d || legacy_size) {
            const intptr_t relative = reinterpret_cast<intptr_t>(stub) -
                reinterpret_cast<intptr_t>(site.address + 5);
            if (relative < INT32_MIN || relative > INT32_MAX) return reject("native instruction cannot reach its selector");
            patch.replacement[0] = 0xe9;
            const int32_t displacement = static_cast<int32_t>(relative);
            std::memcpy(patch.replacement.data() + 1, &displacement, sizeof(displacement));
        }
        hook.patches.push_back(std::move(patch));
    }
    if (!seal_native_relay(hook.relay, hook.relay_size, label) ||
            !write_native_code_patches(hook.patches, true, label, &hook.installed)) return false;
    relay_guard.committed = true;
    data_guard.committed = true;
    return true;
}

static void uninstall_native_dfhack_display_inputs() {
    g_native_dfhack_display_inputs.uninstall();
}
static bool native_dfhack_display_inputs_active() noexcept {
    return g_native_dfhack_display_inputs.active();
}
static graphicst *native_dfhack_display_inputs_snapshot() noexcept {
    return g_native_dfhack_display_inputs.snapshot();
}
static void native_dfhack_display_inputs_enable(bool enabled) noexcept {
    auto &hook = g_native_dfhack_display_inputs;
    if (hook.installed) hook.select(enabled ? hook.snapshot() : nullptr);
}
static graphicst *native_dfhack_display_inputs_select(graphicst *inputs) noexcept {
    auto &hook = g_native_dfhack_display_inputs;
    return hook.installed ? hook.select(inputs) : nullptr;
}
static graphicst *native_dfhack_display_inputs_selected() noexcept {
    return g_native_dfhack_display_inputs.installed ?
        g_native_dfhack_display_inputs.selected : nullptr;
}
#else
static bool install_native_dfhack_display_inputs() { return true; }
static void uninstall_native_dfhack_display_inputs() {}
static bool native_dfhack_display_inputs_active() noexcept { return false; }
static graphicst *native_dfhack_display_inputs_snapshot() noexcept { return nullptr; }
static void native_dfhack_display_inputs_enable(bool) noexcept {}
static graphicst *native_dfhack_display_inputs_select(graphicst *) noexcept { return nullptr; }
static graphicst *native_dfhack_display_inputs_selected() noexcept { return nullptr; }
#endif

