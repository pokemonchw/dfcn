#ifdef _WIN32
// Observe an identified complete native string shrink, then execute its
// original instructions. Saving volatile state avoids imposing the reference
// compiler's register liveness on a different native build.
struct NativeInlineResizeObserver {
    std::vector<NativeCodePatch> patches;
    void *relay = nullptr;
    size_t relay_size = 0;
    bool installed = false;
    bool active() const { return installed || relay; }
    struct Site {
        address_runtime::InlineResizeBinding binding;
        std::vector<unsigned char> original;
        const void *observer = nullptr;
        uintptr_t call_target = 0;
        const void *call_original = nullptr;
    };
    bool install(uintptr_t base, const std::vector<Site> &sites, const char *label) {
        if (installed) return flush_native_code_patches(patches, label);
        if (!flush_native_code_patches(patches, label) || !release_native_relay(relay, relay_size, label)) return false;
        patches.clear();
        if (sites.empty()) return true;
        constexpr size_t stride = 512;
        if (sites.size() > SIZE_MAX / stride) return false;
        NativeRelayRange range;
        NativePatchPages pages;
        for (const auto &site : sites) {
            const auto &binding = site.binding;
            const bool call = binding.flags & pe_runtime::inline_resize_detail::call_form;
            const bool guarded = binding.flags & pe_runtime::inline_resize_detail::guard_form;
            const auto branch = pe_runtime::inline_resize_detail::resize_guard(site.original.data(), site.original.size());
            const auto op = pe_runtime::inline_resize_detail::operation(site.original.data(), site.original.size());
            if (!site.observer || !pe_runtime::inline_resize_detail::valid_forms(binding.flags) ||
                    (call ? (binding.length != 5 || site.original.size() != 5 || site.original[0] != 0xe8 ||
                    binding.frame_register != 1 || binding.width_register != 2 || binding.object_displacement ||
                    !site.call_target || !site.call_original) : guarded ?
                    (!branch.length || branch.length != binding.length || branch.width != binding.width_register ||
                     (binding.frame_register != 4 && binding.frame_register != 5) || site.call_target || site.call_original) :
                    (!op || op.length != binding.length || site.original.size() != op.length ||
                     op.frame != binding.frame_register || op.width != binding.width_register || op.object != binding.object_displacement ||
                     bool(op.constant_width) != bool(binding.flags & pe_runtime::inline_resize_detail::constant_end_form) ||
                     site.call_target || site.call_original)) ||
                    binding.native_instruction > UINTPTR_MAX - base ||
                    !collect_native_patch_pages(pages, base + binding.native_instruction, binding.length,
                        native_patch_page_size(), true, label) ||
                    std::memcmp(reinterpret_cast<const void *>(base + binding.native_instruction),
                        site.original.data(), binding.length)) return false;
            if (call) {
                int32_t displacement = 0;
                std::memcpy(&displacement, site.original.data() + 1, sizeof(displacement));
                if (int64_t(base + binding.native_instruction) + 5 + displacement != int64_t(site.call_target))
                    return false;
            }
            range.include(base + binding.native_instruction);
        }
        relay = allocate_native_relay(range, sites.size() * stride, &relay_size, label);
        if (!relay) return false;
        NativeRelayGuard guard{relay, relay_size, installed, label};
        for (size_t index = 0; index < sites.size(); ++index) {
            const auto &site = sites[index];
            const auto &binding = site.binding;
            std::vector<unsigned char> code;
            const auto bytes = [&](std::initializer_list<unsigned char> value) { code.insert(code.end(), value); };
            const auto number = [&](auto value) {
                const auto *first = reinterpret_cast<const unsigned char *>(&value);
                code.insert(code.end(), first, first + sizeof(value));
            };
            // S is the post-push stack: R11,R10,R9,R8,RDX,RCX,RAX,flags.
            bytes({0x9c,0x50,0x51,0x52,0x41,0x50,0x41,0x51,0x41,0x52,0x41,0x53});
            bytes({0x49,0x89,0xe3,0x48,0x83,0xe4,0xf0,0x48,0x81,0xec}); number(uint32_t(0x90));
            bytes({0x4c,0x89,0x9c,0x24}); number(uint32_t(0x80));
            for (unsigned reg = 0; reg < 6; ++reg) {
                bytes({0xf3,0x0f,0x7f,static_cast<unsigned char>(0x84 | (reg << 3)),0x24});
                number(uint32_t(0x20 + reg * 16));
            }
            constexpr std::array<int, 16> saved{48,40,32,-1,-1,-1,-1,-1,24,16,8,0,-1,-1,-1,-1};
            if (binding.width_register >= saved.size()) return false;
            if (saved[binding.width_register] >= 0)
                bytes({0x49,0x8b,0x53,static_cast<unsigned char>(saved[binding.width_register])});
            else bytes({static_cast<unsigned char>(0x48 | (binding.width_register >= 8 ? 4 : 0)),
                0x89,static_cast<unsigned char>(0xc2 | ((binding.width_register & 7) << 3))});
            if (binding.flags & pe_runtime::inline_resize_detail::call_form) {
                // Actual native this argument at the original CALL boundary.
                bytes({0x49,0x8b,0x4b,0x28});
                // Preserve the actual third fill argument for append-count
                // observers. Two-argument resize observers ignore R8.
                bytes({0x4d,0x8b,0x43,0x18});
            } else if (binding.frame_register == 5) {
                bytes({0x48,0x8d,0x8d}); number(binding.object_displacement);
            } else {
                const int64_t displacement = int64_t(binding.object_displacement) + 64;
                if (displacement < INT32_MIN || displacement > INT32_MAX) return false;
                bytes({0x49,0x8d,0x8b}); number(static_cast<int32_t>(displacement));
            }
            bytes({0x48,0xb8}); number(reinterpret_cast<uintptr_t>(site.observer)); bytes({0xff,0xd0});
            for (unsigned reg = 0; reg < 6; ++reg) {
                bytes({0xf3,0x0f,0x6f,static_cast<unsigned char>(0x84 | (reg << 3)),0x24});
                number(uint32_t(0x20 + reg * 16));
            }
            bytes({0x4c,0x8b,0x9c,0x24}); number(uint32_t(0x80));
            bytes({0x4c,0x89,0xdc,0x41,0x5b,0x41,0x5a,0x41,0x59,0x41,0x58,0x5a,0x59,0x58,0x9d});
            if (binding.flags & pe_runtime::inline_resize_detail::call_form) {
                // The original site still CALLs this relay, retaining its
                // real return address and the native caller's unwind scope.
                // Tail-enter the actual callee after restoring every argument;
                // allocating append paths must never unwind through a return
                // address inside this generated observation relay.
                const auto jump = code.size(); code.resize(jump + 14);
                emit_native_absolute_jump(code.data() + jump, site.call_original);
            } else if (binding.flags & pe_runtime::inline_resize_detail::guard_form) {
                // Observe the already computed total width once, then replay
                // the original comparison and both exact native destinations.
                // The helper preserves flags/registers; the relocated Jcc
                // preserves CMP's flags on both the shrink and growth arms.
                const auto branch = pe_runtime::inline_resize_detail::resize_guard(site.original.data(), site.original.size());
                if (!branch.length) return false;
                const auto target = int64_t(base + binding.native_instruction) + branch.length + branch.displacement;
                if (target <= 0 || uint64_t(target) > UINTPTR_MAX) return false;
                code.insert(code.end(), site.original.begin(), site.original.begin() + branch.compare);
                bytes({0x76, 14}); // JBE skips the JA destination's absolute jump.
                const auto jump = code.size(); code.resize(jump + 14);
                emit_native_absolute_jump(code.data() + jump, reinterpret_cast<const void *>(static_cast<uintptr_t>(target)));
            } else code.insert(code.end(), site.original.begin(), site.original.end());
            if (!(binding.flags & pe_runtime::inline_resize_detail::call_form)) {
                const auto continuation = base + binding.native_instruction + binding.length;
                const auto jump = code.size(); code.resize(jump + 14);
                emit_native_absolute_jump(code.data() + jump, reinterpret_cast<const void *>(continuation));
            }
            if (code.size() > stride) return false;
            auto *stub = static_cast<unsigned char *>(relay) + index * stride;
            std::memcpy(stub, code.data(), code.size());
            auto *address = reinterpret_cast<unsigned char *>(base + binding.native_instruction);
            NativeCodePatch patch{address, site.original, std::vector<unsigned char>(binding.length, 0x90)};
            const intptr_t distance = reinterpret_cast<intptr_t>(stub) - reinterpret_cast<intptr_t>(address + 5);
            if (distance < INT32_MIN || distance > INT32_MAX) return false;
            patch.replacement[0] = binding.flags & pe_runtime::inline_resize_detail::call_form ? 0xe8 : 0xe9;
            const int32_t relative = static_cast<int32_t>(distance);
            std::memcpy(patch.replacement.data() + 1, &relative, 4);
            patches.push_back(std::move(patch));
        }
        if (!seal_native_relay(relay, relay_size, label) ||
                !write_native_code_patches(patches, true, label, &installed)) return false;
        guard.committed = true;
        return true;
    }
    bool uninstall(const char *label) {
        if (installed && !write_native_code_patches(patches, false, label, &installed)) return false;
        if (!flush_native_code_patches(patches, label) || !release_native_relay(relay, relay_size, label)) return false;
        patches.clear(); return true;
    }
};
#endif
