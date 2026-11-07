#pragma once

// Native dependencies and ABI discovery feed the shared renderer and lifecycle.
#include <SDL2/SDL.h>
#include "native_process_guard.h"
#include <algorithm>
#include <array>
#include <ctime>
#include <cstring>
#include <filesystem>
#include <memory>
#include <optional>
#include <string>
#include <utility>
#include <vector>

#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <SDL2/SDL_syswm.h>
#include <windows.h>
#include <imm.h>
#include <font_rasterizer.h>
#include <graphics_abi.h>
#include "native_pe_binding.h"
#else
#include <ft2build.h>
#include FT_FREETYPE_H
#include FT_SYNTHESIS_H
#include <fontconfig/fontconfig.h>
#include <dlfcn.h>
#include <elf.h>
#include <link.h>
#include <sys/mman.h>
#include <sys/uio.h>
#include <unistd.h>
#include "native_elf_resolver.h"
#include "svector.h"
#include "bimap.h"
#include "graphics.h"
#include "init.h"
#endif

namespace dfcn {
inline void native_localtime(std::tm &result, const std::time_t &time) {
#ifdef _WIN32
    localtime_s(&result, &time);
#else
    localtime_r(&time, &result);
#endif
}

// Consumer threads read their pinned header while the update thread binds the
// executable's graphicst to private writer buffers.
inline thread_local graphicst *g_native_graphics_read_view = nullptr;
#ifdef _WIN32
inline thread_local std::unique_ptr<graphicst> g_native_graphics_owner_read_view;
#endif
inline graphicst *native_graphics_owner() {
#ifdef _WIN32
    constexpr uintptr_t gps_rva = 0x0264a3f0;
    // The main executable base is fixed for this core's lifetime. Keep the
    // address lookup out of per-cell readers; settings themselves stay live.
    static const auto executable = GetModuleHandleW(nullptr);
    return executable ? reinterpret_cast<graphicst *>(
        native_pe_address(reinterpret_cast<uintptr_t>(executable), gps_rva)) : nullptr;
#else
    // gps is a process-lifetime object; keep symbol lookup out of native
    // caption and DFHack tile callbacks while reading its live buffers.
    static auto *graphics = reinterpret_cast<graphicst *>(dlsym(RTLD_DEFAULT, "gps"));
    return graphics;
#endif
}

// Only this pointer may be passed as `this` to the game's graphicst methods.
// Core-owned read headers always use the reference layout below.
inline void *native_graphics_raw_owner() { return native_graphics_owner(); }

inline const graphicst *native_graphics_identity(const graphicst *graphics) noexcept {
#ifdef _WIN32
    if (graphics && graphics == g_native_graphics_owner_read_view.get()) return native_graphics_owner();
#endif
    return graphics;
}
inline graphicst *native_graphics_identity(graphicst *graphics) noexcept {
    return const_cast<graphicst *>(native_graphics_identity(static_cast<const graphicst *>(graphics)));
}

inline bool native_graphics_layout_changed() noexcept {
#ifdef _WIN32
    const auto &state = pe_runtime::state();
    // Failure or partial coverage must never select the reference struct as
    // an unknown executable's raw layout. Exact baseline identities alone
    // can use that layout directly.
    if (!pe_runtime::usable(state)) return true;
    // Scanned builds always use the canonical header, including those where
    // the present fields happen to retain their offsets. Absent enum tokens
    // still need zero slots instead of bytes from the next native member.
    if (state.edition > 2) return true;
    if (state.graphics_fields.empty()) return state.edition > 2;
    const auto root = pe_runtime::resolve(state.ranges, 0x0264a3f0);
    for (const auto &field : state.graphics_fields)
        if (uint64_t(root) + field.begin - 0x0264a3f0 != field.native) return true;
#endif
    return false;
}

// A native field must be backed by the resolver's actual member evidence.
// Consecutive spans can form one field only when their native bytes are also
// consecutive. Reordered texture enum arrays deliberately fail that rule.
inline const void *native_graphics_member_address(const graphicst *graphics,
        size_t reference, size_t length) noexcept {
    if (!graphics || !length || reference > sizeof(graphicst) ||
            length > sizeof(graphicst) - reference) return nullptr;
#ifdef _WIN32
    if (!native_pe_usable() || !native_graphics_owner()) return nullptr;
    if (graphics == native_graphics_owner()) {
        const auto &state = pe_runtime::state();
        if (!pe_runtime::usable(state)) return nullptr;
        if (state.graphics_fields.empty()) {
            if (state.edition > 2) return nullptr;
        } else {
            constexpr uint32_t reference_root = 0x0264a3f0;
            uint32_t coordinate = reference_root + static_cast<uint32_t>(reference);
            const auto stop = coordinate + static_cast<uint32_t>(length);
            const auto &fields = state.graphics_fields;
            auto field = std::upper_bound(fields.begin(), fields.end(), coordinate,
                [](uint32_t value, const auto &span) { return value < span.begin; });
            if (field == fields.begin()) return nullptr;
            --field;
            uint32_t first = 0;
            size_t consumed = 0;
            while (coordinate < stop) {
                if (field == fields.end() || coordinate < field->begin || coordinate >= field->end)
                    return nullptr;
                const uint64_t native = uint64_t(field->native) + coordinate - field->begin;
                const auto count = std::min(stop, field->end) - coordinate;
                if (!native || native + count > state.size ||
                        (consumed && uint64_t(first) + consumed != native)) return nullptr;
                if (!consumed) first = static_cast<uint32_t>(native);
                consumed += count;
                coordinate += count;
                ++field;
            }
            const auto executable = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
            return executable ? reinterpret_cast<const void *>(executable + first) : nullptr;
        }
    }
#endif
    return reinterpret_cast<const unsigned char *>(graphics) + reference;
}

inline void *native_graphics_member_address(graphicst *graphics,
        size_t reference, size_t length) noexcept {
    return const_cast<void *>(native_graphics_member_address(
        static_cast<const graphicst *>(graphics), reference, length));
}

template <typename Value>
inline const Value *native_graphics_member(const graphicst *graphics, size_t reference) noexcept {
    return static_cast<const Value *>(native_graphics_member_address(graphics, reference, sizeof(Value)));
}
template <typename Value>
inline Value *native_graphics_member(graphicst *graphics, size_t reference) noexcept {
    return static_cast<Value *>(native_graphics_member_address(graphics, reference, sizeof(Value)));
}
template <typename Value>
inline bool native_graphics_read_member(const graphicst *graphics,
        size_t reference, Value &value) noexcept {
    const auto *source = native_graphics_member_address(
        native_graphics_identity(graphics), reference, sizeof(Value));
    if (!source) return false;
    std::memcpy(&value, source, sizeof(Value));
    return true;
}
template <typename Value>
inline bool native_graphics_write_member(graphicst *graphics,
        size_t reference, const Value &value) noexcept {
    auto *owner = native_graphics_identity(graphics);
    auto *destination = native_graphics_member_address(owner, reference, sizeof(Value));
    if (!destination) return false;
    std::memcpy(destination, &value, sizeof(Value));
    if (graphics != owner)
        std::memcpy(reinterpret_cast<unsigned char *>(graphics) + reference, &value, sizeof(Value));
    return true;
}

inline bool native_graphics_snapshot(void *destination, const graphicst *source) noexcept {
    if (!destination || !source) return false;
#ifdef _WIN32
    if (!native_pe_usable() || !native_graphics_owner()) return false;
    if (source == native_graphics_owner()) {
        const auto &state = pe_runtime::state();
        if (!pe_runtime::usable(state)) return false;
        const auto &fields = state.graphics_fields;
        if (fields.empty()) {
            if (state.edition > 2) return false;
        } else {
            constexpr uint32_t reference_root = 0x0264a3f0;
            constexpr uint32_t reference_end = reference_root + sizeof(graphicst);
            if (destination == source) return false;
            uint32_t preceding = reference_root;
            for (const auto &field : fields) {
                if (field.begin < preceding || field.end <= field.begin ||
                        field.end > reference_end || !field.native ||
                        uint64_t(field.native) + field.end - field.begin > state.size) return false;
                preceding = field.end;
            }
            const auto executable = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
            if (!executable) return false;
            auto *bytes = static_cast<unsigned char *>(destination);
            // Unmapped members and positively absent tokens have no borrowed
            // bytes. Each writer still requires its own member binding;
            // these zero slots do not constitute an absence declaration.
            std::memset(bytes, 0, sizeof(graphicst));
            for (const auto &field : fields)
                std::memcpy(bytes + field.begin - reference_root,
                    reinterpret_cast<const void *>(executable + field.native), field.end - field.begin);
            return true;
        }
    }
#endif
    if (destination != source) std::memcpy(destination, source, sizeof(graphicst));
    return true;
}

inline graphicst *native_graphics_owner_view() {
    auto *owner = native_graphics_owner();
    if (!owner || !native_graphics_layout_changed()) return owner;
#ifdef _WIN32
    // A read header is large; keep it off the game's render stack. Nested
    // render transactions pin their own snapshots through the existing TLS
    // read-view slot rather than lending this fallback to a native writer.
    auto &view = g_native_graphics_owner_read_view;
    if (!view) view = std::make_unique<graphicst>();
    return native_graphics_snapshot(view.get(), owner) ? view.get() : nullptr;
#else
    return owner;
#endif
}

inline graphicst *native_graphics() {
    auto *view = g_native_graphics_read_view;
    if (!view || native_graphics_identity(view) == native_graphics_owner())
        return native_graphics_owner_view();
    return view;
}

inline graphicst *native_graphics_view(graphicst *graphics) {
    return graphics == native_graphics_owner() ? native_graphics_owner_view() : graphics;
}

// Hooks inspect the canonical header, but the game's member functions must
// retain their actual object. Refresh the borrowed read view after the native
// call so cursor advancement and buffer rotations are visible to capture.
template <typename Function, typename... Arguments>
inline void native_graphics_call(Function function, graphicst *graphics, Arguments &&...arguments) {
    auto *owner = native_graphics_identity(graphics);
    function(owner, std::forward<Arguments>(arguments)...);
    if (graphics && graphics != owner) native_graphics_snapshot(graphics, owner);
}

struct NativeUiSettings {
    bool classic = false;
    std::array<std::array<int32_t, 2>, 23> scrollbar_skins{};
    std::array<int32_t, 9> texpos_neutral_intro_button{};
    std::array<int32_t, 9> texpos_confirm_intro_button{};
    std::array<int32_t, 9> texpos_cancel_intro_button{};
    std::array<int32_t, 9> texpos_selected_intro_button{};
    std::array<int32_t, 9> texpos_unselected_intro_button{};
    int32_t texpos_sort_ascending_active[4]{};
    int32_t texpos_sort_ascending_inactive[4]{};
    int32_t texpos_sort_descending_active[4]{};
    int32_t texpos_sort_descending_inactive[4]{};
    int32_t texpos_sort_text_active[3]{};
    int32_t texpos_sort_text_inactive[3]{};
    int32_t texpos_button_filter[6][3]{};
    int32_t texpos_button_filter_name[4][3]{};
    int32_t texpos_border_nw{}, texpos_border_n{}, texpos_border_ne{};
    int32_t texpos_border_w{}, texpos_border_interior{}, texpos_border_e{};
    int32_t texpos_border_sw{}, texpos_border_s{}, texpos_border_se{};
};

#ifdef _WIN32
// 53.16 initst: MSVC strings are 32 bytes, flagarrayst is 16 bytes, and
// long/texture ids are 32 bits. Only the fields used by the shared UI are
// exposed. Native code reads the border at 0x1dde5c and selects these sort
// arrays at 0x14128e6, 0x14128ed, 0x14128f6 and 0x14128fd.
struct NativeUiSettingsAbi {
    // init.h stores thirteen 9-cell button arrays from neutral through down,
    // then 21 native longs before border_nw. Expose the complete intro/menu
    // caption family; selection changes the skin, never the layout contract.
    std::uint8_t settings_storage[0x330c];
    int32_t texpos_neutral_intro_button[9];
    int32_t texpos_confirm_intro_button[9];
    int32_t texpos_cancel_intro_button[9];
    int32_t texpos_selected_intro_button[9];
    int32_t texpos_unselected_intro_button[9];
    std::uint8_t intro_storage[0x3534 - 0x33c0];
    int32_t texpos_border_nw, texpos_border_n, texpos_border_ne;
    int32_t texpos_border_w, texpos_border_interior, texpos_border_e;
    int32_t texpos_border_sw, texpos_border_s, texpos_border_se;
    std::uint8_t border_storage[0x3644 - 0x3558];
    int32_t texpos_scrollbar[2][3];
    int32_t texpos_scrollbar_up_hover[2], texpos_scrollbar_up_pressed[2];
    int32_t texpos_scrollbar_down_hover[2], texpos_scrollbar_down_pressed[2];
    int32_t texpos_scrollbar_small_scroller[2][2];
    int32_t texpos_scrollbar_small_scroller_hover[2][2];
    int32_t texpos_scrollbar_top_scroller[2], texpos_scrollbar_top_scroller_hover[2];
    int32_t texpos_scrollbar_bottom_scroller[2], texpos_scrollbar_bottom_scroller_hover[2];
    int32_t texpos_scrollbar_blank_scroller[2], texpos_scrollbar_blank_scroller_hover[2];
    int32_t texpos_scrollbar_center_scroller[2], texpos_scrollbar_center_scroller_hover[2];
    int32_t texpos_scrollbar_offcenter_scroller[2][2];
    int32_t texpos_scrollbar_offcenter_scroller_hover[2][2];
    std::uint8_t filter_storage[0x3774 - 0x36fc];
    // widgets::textbox::render uses init's atlas (Steam 53.16
    // 0x141419396..0x1414194d1), independently of graphicst's filter skin.
    int32_t texpos_button_filter[6][3];
    int32_t texpos_button_filter_name[4][3];
    std::uint8_t widget_storage[0x390c - 0x37ec];
    int32_t texpos_sort_ascending_active[4];
    int32_t texpos_sort_ascending_inactive[4];
    int32_t texpos_sort_descending_active[4];
    int32_t texpos_sort_descending_inactive[4];
    int32_t texpos_sort_text_active[3];
    int32_t texpos_sort_text_inactive[3];
};
static_assert(offsetof(NativeUiSettingsAbi, texpos_neutral_intro_button) == 0x330c);
static_assert(offsetof(NativeUiSettingsAbi, texpos_confirm_intro_button) == 0x3330);
static_assert(offsetof(NativeUiSettingsAbi, texpos_unselected_intro_button) == 0x339c);
static_assert(offsetof(NativeUiSettingsAbi, texpos_border_nw) == 0x3534);
static_assert(offsetof(NativeUiSettingsAbi, texpos_border_se) == 0x3554);
static_assert(offsetof(NativeUiSettingsAbi, texpos_scrollbar) == 0x3644);
static_assert(offsetof(NativeUiSettingsAbi, texpos_scrollbar_offcenter_scroller_hover) == 0x36ec);
static_assert(offsetof(NativeUiSettingsAbi, texpos_sort_ascending_active) == 0x390c);
static_assert(offsetof(NativeUiSettingsAbi, texpos_sort_descending_inactive) == 0x393c);

// A reference offset identifies a member, not a displacement to add to an
// unknown executable's object. Keep init/enabler native method receivers raw
// and resolve the core's individual reads through their proved member spans.
inline const void *native_pe_field_address(uint32_t object, size_t offset, size_t length) noexcept {
    const auto &state = pe_runtime::state();
    if (!pe_runtime::usable(state) || !length || offset > UINT32_MAX || length > UINT32_MAX ||
            uint64_t(object) + offset + length > UINT32_MAX) return nullptr;
    const auto executable = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    const auto owner = native_pe_rva(object);
    if (!executable || !owner) return nullptr;
    if (state.edition == 1 || state.edition == 2) {
        return uint64_t(owner) + offset + length <= state.size
            ? reinterpret_cast<const void *>(executable + owner + offset) : nullptr;
    }
    const uint32_t begin = object + static_cast<uint32_t>(offset);
    const uint32_t end = begin + static_cast<uint32_t>(length);
    uint32_t at = begin, first = 0;
    size_t consumed = 0;
    while (at < end) {
        const address_runtime::FieldBinding *match = nullptr;
        for (const auto &field : state.fields) {
            if (field.object != object || field.sources < 2 || at < uint64_t(object) + field.offset ||
                    at >= uint64_t(object) + field.offset + field.width) continue;
            if (match) return nullptr;
            match = &field;
        }
        if (!match) return nullptr;
        const auto inside = at - object - match->offset;
        const auto count = (std::min)(end - at, match->width - inside);
        const uint64_t native = uint64_t(owner) + match->native_offset + inside;
        if (!native || native + count > state.size || (consumed && uint64_t(first) + consumed != native))
            return nullptr;
        if (!consumed) first = static_cast<uint32_t>(native);
        consumed += count; at += count;
    }
    return reinterpret_cast<const void *>(executable + first);
}

template <typename Value>
inline bool native_pe_read_field(uint32_t object, size_t offset, Value &value) noexcept {
    const auto *source = native_pe_field_address(object, offset, sizeof(Value));
    if (!source) return false;
    std::memcpy(&value, source, sizeof(Value));
    return true;
}

inline const void *native_object_member_address(const void *object,
        native_history_abi::FieldOffset member, size_t width) noexcept {
    if (!native_pe_supported()) return nullptr;
    return reinterpret_cast<const void *>(member.address(
        reinterpret_cast<uintptr_t>(object), 0, width, width));
}
inline void *native_object_member_address(void *object,
        native_history_abi::FieldOffset member, size_t width) noexcept {
    return const_cast<void *>(native_object_member_address(static_cast<const void *>(object), member, width));
}
template <typename Value>
inline bool native_object_read_member(const void *object,
        native_history_abi::FieldOffset member, Value &value) noexcept {
    const auto *source = native_object_member_address(object, member, sizeof(Value));
    if (!source) return false;
    std::memcpy(&value, source, sizeof(Value));
    return true;
}

inline bool native_map_geometry(const void *object, bool map_port,
        std::array<uint32_t, 13> &geometry) noexcept {
    static constexpr std::array<native_history_abi::FieldOffset, 11> port{{
        {0x00, "graphic_map_portst", "flag"},
        {0x04, "graphic_map_portst", "dim_x"}, {0x08, "graphic_map_portst", "dim_y"},
        {0x0c, "graphic_map_portst", "clipx"}, {0x14, "graphic_map_portst", "clipy"},
        {0x1c, "graphic_map_portst", "screen_x"}, {0x20, "graphic_map_portst", "screen_y"},
        {0x24, "graphic_map_portst", "top_left_corner_x"},
        {0x28, "graphic_map_portst", "top_left_corner_y"},
        {0x2c, "graphic_map_portst", "pixel_perc_x"},
        {0x30, "graphic_map_portst", "pixel_perc_y"}
    }};
    static constexpr std::array<native_history_abi::FieldOffset, 7> viewport{{
        {0x00, "graphic_viewportst", "flag"},
        {0x04, "graphic_viewportst", "dim_x"}, {0x08, "graphic_viewportst", "dim_y"},
        {0x0c, "graphic_viewportst", "clipx"}, {0x14, "graphic_viewportst", "clipy"},
        {0x1c, "graphic_viewportst", "screen_x"}, {0x20, "graphic_viewportst", "screen_y"}
    }};
    geometry.fill(0);
    const auto *members = map_port ? port.data() : viewport.data();
    const size_t count = map_port ? port.size() : viewport.size();
    for (size_t index = 0, destination = 0; index < count; ++index) {
        const size_t words = index == 3 || index == 4 ? 2 : 1;
        const auto *source = native_object_member_address(object, members[index], words * sizeof(uint32_t));
        if (!source) return false;
        std::memcpy(geometry.data() + destination, source, words * sizeof(uint32_t));
        destination += words;
    }
    return true;
}

inline bool native_renderer_geometry(const void *renderer, std::array<int32_t, 8> &geometry) noexcept {
    static constexpr std::array<native_history_abi::FieldOffset, 8> fields{{
        {0x158, "renderer_2d_base", "dispx"}, {0x15c, "renderer_2d_base", "dispy"},
        {0x160, "renderer_2d_base", "dimx"}, {0x164, "renderer_2d_base", "dimy"},
        {0x168, "renderer_2d_base", "dispx_z"}, {0x16c, "renderer_2d_base", "dispy_z"},
        {0x170, "renderer_2d_base", "origin_x"}, {0x174, "renderer_2d_base", "origin_y"}
    }};
    for (size_t index = 0; index < fields.size(); ++index)
        if (!native_object_read_member(renderer, fields[index], geometry[index])) return false;
    return true;
}

inline bool native_renderer_raster(const void *renderer, std::array<int32_t, 4> &raster) noexcept {
    static constexpr std::array<native_history_abi::FieldOffset, 4> fields{{
        {0x168, "renderer_2d_base", "dispx_z"}, {0x16c, "renderer_2d_base", "dispy_z"},
        {0x170, "renderer_2d_base", "origin_x"}, {0x174, "renderer_2d_base", "origin_y"}
    }};
    for (size_t index = 0; index < fields.size(); ++index)
        if (!native_object_read_member(renderer, fields[index], raster[index])) return false;
    return true;
}

inline bool native_renderer_output_members(void *renderer, std::array<void *, 14> &fields) noexcept {
    static constexpr std::array<native_history_abi::FieldOffset, 14> members{{
        {0x08, "renderer", "screen"}, {0x10, "renderer", "screentexpos"},
        {0x18, "renderer", "screentexpos_lower"}, {0x20, "renderer", "screentexpos_anchored"},
        {0x28, "renderer", "screentexpos_anchored_x"}, {0x30, "renderer", "screentexpos_anchored_y"},
        {0x38, "renderer", "screentexpos_flag"}, {0x40, "renderer", "screen_top"},
        {0x48, "renderer", "screentexpos_top"}, {0x50, "renderer", "screentexpos_top_lower"},
        {0x58, "renderer", "screentexpos_top_anchored"}, {0x60, "renderer", "screentexpos_top_anchored_x"},
        {0x68, "renderer", "screentexpos_top_anchored_y"}, {0x70, "renderer", "screentexpos_top_flag"}
    }};
    for (size_t index = 0; index < fields.size(); ++index) {
        fields[index] = native_object_member_address(renderer, members[index], sizeof(void *));
        if (!fields[index]) return false;
    }
    return true;
}

inline size_t native_object_virtual_slot(std::string_view type,
        std::string_view method, uint32_t reference_slot, std::string_view signature,
        uint32_t argument_count) noexcept {
    if (!native_pe_supported()) return SIZE_MAX;
    if (const auto *binding = native_history_abi::method(
            native_history_abi::semantic_id(type), native_history_abi::semantic_id(method))) {
        if (binding->parameter_shape != native_history_abi::semantic_id(signature) ||
                binding->argument_count != argument_count || binding->slot % sizeof(void *)) return SIZE_MAX;
        return binding->slot / sizeof(void *);
    }
    return native_history_abi::snapshot().reference_identity ? reference_slot : SIZE_MAX;
}
inline void *native_object_virtual_method(void *const *table, std::string_view type,
        std::string_view method, uint32_t reference_slot, std::string_view signature,
        uint32_t argument_count) noexcept {
    if (!table) return nullptr;
    const size_t slot = native_object_virtual_slot(type, method, reference_slot, signature, argument_count);
    return slot != SIZE_MAX ? table[slot] : nullptr;
}
#endif

inline const auto *native_ui_settings_source() {
#ifdef _WIN32
    // Reference coordinates come from the 53.16 Steam symbol table; the PE
    // adapter selects the corresponding Classic global before any field read.
    constexpr uintptr_t init_rva = 0x023cd770;
    // The main image stays fixed for the process lifetime. Widget scans call
    // this per cell; resolve its base once while reading live settings below.
    static const auto executable = GetModuleHandleW(nullptr);
    const auto *settings = executable ? reinterpret_cast<const NativeUiSettingsAbi *>(
        native_pe_address(reinterpret_cast<uintptr_t>(executable), init_rva)) : nullptr;
#else
    // The game library and its init object stay loaded for the process
    // lifetime. Cache only the address; callers still read live settings.
    static const auto *settings = static_cast<const initst *>(dlsym(RTLD_DEFAULT, "init"));
#endif
    return settings;
}

inline const void *native_ui_settings_member_address(const void *settings, size_t offset, size_t length) noexcept {
    if (!settings || !length) return nullptr;
#ifdef _WIN32
    if (!native_pe_usable() || !native_ui_settings_source()) return nullptr;
    if (settings == native_ui_settings_source()) return native_pe_field_address(0x023cd770, offset, length);
#endif
    return static_cast<const unsigned char *>(settings) + offset;
}

template <typename Value>
inline bool native_ui_settings_read_member(const void *settings, size_t offset, Value &value) noexcept {
    const auto *source = native_ui_settings_member_address(settings, offset, sizeof(Value));
    if (!source) return false;
    std::memcpy(&value, source, sizeof(Value));
    return true;
}

#ifdef _WIN32
inline const NativeUiSettingsAbi *native_ui_settings_view() noexcept {
    const auto *source = native_ui_settings_source();
    const auto &state = pe_runtime::state();
    if (!source || !pe_runtime::usable(state)) return nullptr;
    if (state.edition == 1 || state.edition == 2) return source;
    static thread_local NativeUiSettingsAbi view{};
    std::memset(&view, 0, sizeof(view));
    bool copied = false;
    for (const auto &field : state.fields) {
        if (field.object != 0x023cd770 || field.offset >= sizeof(view) ||
                field.width > sizeof(view) - field.offset) continue;
        const auto *member = native_pe_field_address(field.object, field.offset, field.width);
        if (!member) return nullptr;
        std::memcpy(reinterpret_cast<unsigned char *>(&view) + field.offset, member, field.width);
        copied = true;
    }
    return copied ? &view : nullptr;
}
#endif

inline std::optional<bool> native_ui_classic(const void *settings) {
    if (!settings) return std::nullopt;
    // init.display.flag is the first field in the reference layouts. Its
    // flagarray view is a pointer followed by a 32-bit byte count; bit zero
    // is USE_GRAPHICS. Decode data here, not a host-specific UI policy.
    struct DisplayFlags { const unsigned char *array; int32_t slotnum; } flags{};
    static_assert(sizeof(DisplayFlags) == 16);
    if (!native_ui_settings_read_member(settings, 0, flags)) return std::nullopt;
    if (!flags.array || flags.slotnum <= 0) return std::nullopt;
    return (flags.array[0] & 1) == 0;
}

inline std::optional<bool> native_ui_classic() {
    return native_ui_classic(native_ui_settings_source());
}

inline std::optional<NativeUiSettings> native_ui_settings() {
#ifdef _WIN32
    const auto *settings = native_ui_settings_view();
#else
    const auto *settings = native_ui_settings_source();
#endif
    if (!settings) return std::nullopt;
    const auto classic = native_ui_classic(settings);
    if (!classic) return std::nullopt;
    NativeUiSettings result;
    result.classic = *classic;
    size_t scrollbar_at = 0;
    const auto add_scrollbar = [&](int32_t left, int32_t right) {
        result.scrollbar_skins[scrollbar_at++] = {left, right};
    };
    for (int row = 0; row < 3; ++row)
        add_scrollbar(settings->texpos_scrollbar[0][row], settings->texpos_scrollbar[1][row]);
    const int32_t *const strips[] = {
        settings->texpos_scrollbar_up_hover, settings->texpos_scrollbar_up_pressed,
        settings->texpos_scrollbar_down_hover, settings->texpos_scrollbar_down_pressed,
        settings->texpos_scrollbar_top_scroller, settings->texpos_scrollbar_top_scroller_hover,
        settings->texpos_scrollbar_bottom_scroller, settings->texpos_scrollbar_bottom_scroller_hover,
        settings->texpos_scrollbar_blank_scroller, settings->texpos_scrollbar_blank_scroller_hover,
        settings->texpos_scrollbar_center_scroller, settings->texpos_scrollbar_center_scroller_hover,
    };
    for (const auto *strip : strips) add_scrollbar(strip[0], strip[1]);
    const int32_t (*const thumbs[])[2] = {
        settings->texpos_scrollbar_small_scroller, settings->texpos_scrollbar_small_scroller_hover,
        settings->texpos_scrollbar_offcenter_scroller, settings->texpos_scrollbar_offcenter_scroller_hover,
    };
    for (const auto *thumb : thumbs)
        for (int row = 0; row < 2; ++row) add_scrollbar(thumb[0][row], thumb[1][row]);
    std::copy_n(settings->texpos_neutral_intro_button, 9,
        result.texpos_neutral_intro_button.begin());
    std::copy_n(settings->texpos_confirm_intro_button, 9,
        result.texpos_confirm_intro_button.begin());
    std::copy_n(settings->texpos_cancel_intro_button, 9,
        result.texpos_cancel_intro_button.begin());
    std::copy_n(settings->texpos_selected_intro_button, 9,
        result.texpos_selected_intro_button.begin());
    std::copy_n(settings->texpos_unselected_intro_button, 9,
        result.texpos_unselected_intro_button.begin());
    std::copy_n(settings->texpos_sort_ascending_active, 4, result.texpos_sort_ascending_active);
    std::copy_n(settings->texpos_sort_ascending_inactive, 4, result.texpos_sort_ascending_inactive);
    std::copy_n(settings->texpos_sort_descending_active, 4, result.texpos_sort_descending_active);
    std::copy_n(settings->texpos_sort_descending_inactive, 4, result.texpos_sort_descending_inactive);
    std::copy_n(settings->texpos_sort_text_active, 3, result.texpos_sort_text_active);
    std::copy_n(settings->texpos_sort_text_inactive, 3, result.texpos_sort_text_inactive);
    for (int column = 0; column < 6; ++column)
        std::copy_n(settings->texpos_button_filter[column], 3, result.texpos_button_filter[column]);
    for (int column = 0; column < 4; ++column)
        std::copy_n(settings->texpos_button_filter_name[column], 3, result.texpos_button_filter_name[column]);
    result.texpos_border_nw = settings->texpos_border_nw;
    result.texpos_border_n = settings->texpos_border_n;
    result.texpos_border_ne = settings->texpos_border_ne;
    result.texpos_border_w = settings->texpos_border_w;
    result.texpos_border_interior = settings->texpos_border_interior;
    result.texpos_border_e = settings->texpos_border_e;
    result.texpos_border_sw = settings->texpos_border_sw;
    result.texpos_border_s = settings->texpos_border_s;
    result.texpos_border_se = settings->texpos_border_se;
    return result;
}

inline void native_find_font(std::string &path, int &index, bool bold = false,
        bool traditional = false) {
#ifdef _WIN32
    (void)bold;
    if (path.empty()) {
        wchar_t directory[32768]{};
        const auto length = GetWindowsDirectoryW(directory, 32768);
        if (!length || length >= 32768) return;
        const auto fonts = std::filesystem::path(directory) / "Fonts";
        const auto system_candidates = traditional
            ? std::array<const char *, 4>{"NotoSansTC-VF.ttf", "msjh.ttc", "mingliu.ttc", "simsun.ttc"}
            : std::array<const char *, 4>{"NotoSansSC-VF.ttf", "Deng.ttf", "simhei.ttf", "simsun.ttc"};
        for (const char *candidate : system_candidates) {
            std::error_code ec;
            if (std::filesystem::is_regular_file(fonts / candidate, ec)) {
                path = (fonts / candidate).string();
                index = 0;
                break;
            }
        }
    }
#else
    if (path.empty() && FcInit()) {
        FcPattern *pattern = FcPatternCreate();
        // Prefer the requested Simplified-Chinese weight. At DF's small UI
        // sizes it keeps the primary strokes solid instead of looking washed
        // out after grayscale antialiasing; Fontconfig still supplies a
        // generic CJK fallback when these families are not installed.
        FcPatternAddString(pattern, FC_FAMILY,
                           reinterpret_cast<const FcChar8 *>(traditional ? "Source Han Sans TC" : "Source Han Sans SC"));
        FcPatternAddString(pattern, FC_FAMILY,
                           reinterpret_cast<const FcChar8 *>(traditional ? "Noto Sans CJK TC" : "Noto Sans CJK SC"));
        FcPatternAddString(pattern, FC_FAMILY, reinterpret_cast<const FcChar8 *>("sans-serif"));
        FcPatternAddString(pattern, FC_LANG, reinterpret_cast<const FcChar8 *>(traditional ? "zh-tw" : "zh-cn"));
        FcPatternAddInteger(pattern, FC_WEIGHT, bold ? FC_WEIGHT_BOLD : FC_WEIGHT_MEDIUM);
        FcConfigSubstitute(nullptr, pattern, FcMatchPattern);
        FcDefaultSubstitute(pattern);
        FcResult result = FcResultNoMatch;
        FcPattern *match = FcFontMatch(nullptr, pattern, &result);
        if (match) {
            FcChar8 *file = nullptr;
            int face_index = 0;
            if (FcPatternGetString(match, FC_FILE, 0, &file) == FcResultMatch) {
                path = reinterpret_cast<const char *>(file);
            }
            if (FcPatternGetInteger(match, FC_INDEX, 0, &face_index) == FcResultMatch) {
                index = face_index;
            }
            FcPatternDestroy(match);
        }
        FcPatternDestroy(pattern);
    }
#endif
}

inline FT_Error native_load_font_glyph(FT_Face face, FT_UInt index, bool bold,
        bool monochrome = false) {
    const FT_Error error = FT_Load_Glyph(face, index,
        monochrome ? FT_LOAD_TARGET_MONO : FT_LOAD_DEFAULT);
#ifdef _WIN32
    // GDI applies the selected weight to both advances and bitmap bounds.
    (void)bold;
#else
    // Explicit font files may only contain a regular face. Apply synthesis
    // before reading advances or rendering, and never thicken a bold face twice.
    if (!error && bold && !(face->style_flags & FT_STYLE_FLAG_BOLD))
        FT_GlyphSlot_Embolden(face->glyph);
#endif
    return error;
}

#ifdef _WIN32
static std::string utf16_to_utf8(const wchar_t *text, size_t length) {
    if (!text || length == 0 || length > static_cast<size_t>(INT32_MAX)) {
        return {};
    }
    const int needed = WideCharToMultiByte(
        CP_UTF8, 0, text, static_cast<int>(length),
        nullptr, 0, nullptr, nullptr);
    if (needed <= 0) return {};
    std::string converted(static_cast<size_t>(needed), '\0');
    if (WideCharToMultiByte(
            CP_UTF8, 0, text, static_cast<int>(length),
            converted.data(), needed, nullptr, nullptr) != needed) {
        return {};
    }
    return converted;
}
#endif

} // namespace dfcn
