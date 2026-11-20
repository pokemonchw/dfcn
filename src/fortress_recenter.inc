// PE 53.17 has the same renderer on both editions, offset by 0x70.
// These are the return addresses of its addst calls in the Steam image.
enum class RecenterDraw : uintptr_t {
    Other, Overwrite = 0x1df220, Clear = 0x1df2b2, Name = 0x1df61a,
    Unassigned = 0x1df6ce, Item = 0x1dfa5b, Unit = 0x1dfbfe,
    Zoom = 0x1dfc8a, Coordinates = 0x1dfeb6, Yes = 0x1dfff1,
    No = 0x1e00d7, Hotkey = 0x1e0330, Add = 0x1e052a,
};

static RecenterDraw recenter_draw(uintptr_t caller) {
    static const uintptr_t base = native_pe_5317() ? native_history_profile_base() : 0;
    static const uintptr_t shift = native_pe_classic_5317() ? 0x70 : 0;
    if (!base || caller < base) return RecenterDraw::Other;
    const uintptr_t offset = caller - base + shift;
    if (offset < 0x1df220 || offset > 0x1e052a) return RecenterDraw::Other;
    return static_cast<RecenterDraw>(offset);
}

static uintptr_t recenter_panel_state() {
    static const uintptr_t base = native_pe_5317() ? native_history_profile_base() : 0;
    static const uintptr_t panel = base ? base + (native_pe_classic_5317() ? 0x18c3298 : 0x18c92c8) : 0;
    return panel;
}

void Overlay::append_recenter_rows(std::vector<std::string> &rows,
        std::vector<Match> &matches, int only_y, const unsigned char *screen_override) const {
    uint8_t open = 0;
    if (!recenter_panel_state() || !native_history_copy(recenter_panel_state(), open) || !open)
        return;
    const auto base = native_history_profile_base();
    const auto key_writer = base + (native_pe_classic_5317() ? 0xc4e05f : 0xc5123f);
    for (bool top : {false, true}) {
        const auto draws = captured_native_drawn_text_view(top);
        for (const auto &draw : draws) {
            const auto field = recenter_draw(draw.native_caller);
            if (field == RecenterDraw::Other || draw.y < 0 || draw.y >= gps_->dimy ||
                    (only_y >= 0 && only_y != draw.y) || draw.x < 0 || draw.x >= gps_->dimx ||
                    draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy) continue;
            const auto following = [&](uintptr_t caller) -> const NativeDrawnTextRow * {
                for (const auto &part : draws)
                    if (part.native_caller == caller && part.y == draw.y &&
                            part.x == draw.x + static_cast<int>(draw.source.size()) &&
                            part.draw_grid == draw.draw_grid && part.draw_epoch == draw.draw_epoch &&
                            part.sequence > draw.sequence) return &part;
                return nullptr;
            };
            const auto emit = [&](int x, std::string_view source, const std::string &target,
                    int width, bool authored = false, int foreground = -1) {
                if (x < 0 || x >= gps_->dimx || source.empty()) return;
                const int clip_right = draw.draw_clip ? std::min(gps_->dimx,
                    draw.draw_clip->x + draw.draw_clip->w) : gps_->dimx;
                const int right = std::min(clip_right, x + width);
                if (right <= x) return;
                int length = std::min<int>(right - x, source.size());
                if (rows[draw.y].compare(x, length, source.substr(0, length)) != 0) return;
                const auto owns_cell = [&](int col) {
                    if (source[col - x] == ' ') return true;
                    const size_t tile = static_cast<size_t>(col) * gps_->dimy + draw.y;
                    const bool layer = screen_override ? screen_override == gps_->screen_top :
                        native_ui_top_layer_at(*gps_, tile);
                    const auto origin = native_text_grid_origin(*gps_, tile, layer);
                    return origin.grid == draw.draw_grid && origin.top_layer == top;
                };
                for (int col = x; col < x + length; ++col)
                    if (!owns_cell(col)) return;
                // The game can draw a saved name beyond the input box. Reserve
                // every surviving byte so its tail cannot be translated separately.
                while (length < static_cast<int>(source.size()) && x + length < clip_right &&
                        rows[draw.y][x + length] == source[length] && owns_cell(x + length)) ++length;
                std::fill_n(rows[draw.y].begin() + x, length, ' ');
                Match match{x, draw.y, length, kUiMessageRule, target, std::string(source.substr(0, length))};
                // Empty target reserves the original ink through the later
                // picture-caption and editor passes without replacing it.
                if (authored && source == target && std::all_of(source.begin(), source.end(),
                        [](unsigned char c) { return c < 0x80; })) match.target.clear();
                match.language_converted = authored;
                match.layout_x = x;
                match.layout_y = draw.y;
                match.layout_length = right - x;
                match.layout_clip_right = right;
                match.layout_left = true;
                match.layout_prepared = true;
                match.layout_ellipsize = true;
                match.layout_foreground_rgb = foreground < 0 ? draw.foreground_rgb : foreground;
                match.layout_line_height_pixels = gps_->tile_pixel_y;
                matches.push_back(std::move(match));
            };
            switch (field) {
            case RecenterDraw::Name:
                if (draw.recenter_name == RecenterName::Wagon)
                    emit(draw.x, draw.source, "货车抵达地点", 26);
                else if (draw.recenter_name == RecenterName::Unnamed)
                    emit(draw.x, draw.source, "未命名的重新居中位置", 26);
                else
                    emit(draw.x, draw.source, native_text_to_utf8(draw.source), 26, true);
                break;
            case RecenterDraw::Zoom: {
                // The cursor advances between these two draws. Keep all three
                // native numbers, including below-zero elevations, in one label.
                const auto part = following(draw.native_caller +
                    (uintptr_t(RecenterDraw::Coordinates) - uintptr_t(RecenterDraw::Zoom)));
                if (!part || !part->source.starts_with("elevation ")) break;
                const auto separator = part->source.find(", position ", 10);
                if (separator == std::string::npos) break;
                const auto z = part->source.substr(10, separator - 10);
                const auto xy = part->source.substr(separator + 11);
                emit(draw.x, draw.source + part->source, "定位到海拔 " + z + "，坐标 " + xy, 46);
                break;
            }
            case RecenterDraw::Item:
            case RecenterDraw::Unit: {
                const bool item = field == RecenterDraw::Item;
                const auto &follow = draw.recenter_follow;
                std::string name = follow ? follow->name : draw.source;
                const std::string_view suffix = item ? " (hidden)" : " (not possible)";
                const bool marked = follow ? follow->marked : name.ends_with(suffix);
                if (!follow && marked) name.resize(name.size() - suffix.size());
                std::string target;
                if (!follow && name == (item ? "Unknown item" : "Unknown creature"))
                    target = item ? "未知物品" : "未知生物";
                else if (item)
                    target = follow && follow->item ? translate_native_trade_item_caption_display(
                        *follow->item).target : translate_fortress_item_caption_display(name).target;
                else if (follow && follow->unit) {
                    const auto &identity = *follow->unit;
                    const auto bound = prepare_native_unit_identity_source_binding(name, draw.address,
                        identity.semantic_key, &identity);
                    if (bound && bound->ready) target = bound->target;
                }
                if (!item && target.empty()) target = translate_unit_identity(name, true).value_or("");
                if (target.empty()) target = native_text_to_utf8(name);
                if (marked) target = (item ? "已隐藏：" : "无法跟随：") + target;
                emit(draw.x, draw.source, target, 44);
                break;
            }
            case RecenterDraw::Hotkey:
                emit(draw.x, draw.source, "快捷键：", 8);
                if (const auto key = following(key_writer))
                    emit(key->x, key->source, display_keybinding_code(key->source), 36, true,
                        key->foreground_rgb);
                break;
            case RecenterDraw::Overwrite: emit(draw.x, draw.source, "确认覆盖？", 20); break;
            case RecenterDraw::Clear: emit(draw.x, draw.source, "确认清除？", 20); break;
            case RecenterDraw::Yes: emit(draw.x, draw.source, "是", 4); break;
            case RecenterDraw::No: emit(draw.x, draw.source, "否", 4); break;
            case RecenterDraw::Unassigned: emit(draw.x, draw.source, "尚未指定", 44); break;
            case RecenterDraw::Add: emit(draw.x, draw.source, "添加新的重新居中位置", 26); break;
            default: break;
            }
        }
    }
}
