#pragma once

// Native dependencies and ABI discovery feed the shared renderer and lifecycle.
#include <SDL2/SDL.h>
#include "native_process_guard.h"
#include <algorithm>
#include <array>
#include <ctime>
#include <cstring>
#include <filesystem>
#include <optional>
#include <string>
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

inline graphicst *native_graphics() {
    return g_native_graphics_read_view ? g_native_graphics_read_view : native_graphics_owner();
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

inline std::optional<bool> native_ui_classic(const void *settings) {
    if (!settings) return std::nullopt;
    // init.display.flag is the first field in both native layouts. Its
    // flagarray view is a pointer followed by a 32-bit byte count; bit zero
    // is USE_GRAPHICS. Decode data here, not a host-specific UI policy.
    struct DisplayFlags { const unsigned char *array; int32_t slotnum; } flags{};
    static_assert(sizeof(DisplayFlags) == 16);
    std::memcpy(&flags, settings, sizeof(flags));
    if (!flags.array || flags.slotnum <= 0) return std::nullopt;
    return (flags.array[0] & 1) == 0;
}

inline std::optional<bool> native_ui_classic() {
    return native_ui_classic(native_ui_settings_source());
}

inline std::optional<NativeUiSettings> native_ui_settings() {
    const auto *settings = native_ui_settings_source();
    if (!settings) return std::nullopt;
    const auto classic = native_ui_classic(settings);
    if (!classic) return std::nullopt;
#ifdef _WIN32
    // Only this local atlas view follows the relocated tail. The display
    // flags above and native method callers keep the actual init root.
    constexpr size_t atlas_begin = offsetof(NativeUiSettingsAbi, texpos_neutral_intro_button);
    settings = reinterpret_cast<const NativeUiSettingsAbi *>(
        reinterpret_cast<const unsigned char *>(settings) +
        native_pe_init_field_offset(atlas_begin) - atlas_begin);
#endif
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
