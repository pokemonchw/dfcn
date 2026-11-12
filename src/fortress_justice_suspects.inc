    // Open-case candidates use a unit_list with a single interrogation
    // checkbox. Its witness text is a separate widget, even when the native
    // fields touch in the grid. Keep all three fields inside their own columns.
    if (const auto settings = native_ui_settings()) {
        int header_y = -1, name_left = -1;
        for (int y = band->tabs_y + 1; y < bottom; ++y) {
            const auto columns = native_sort_columns(*gps_, y, *settings);
            if (columns.size() != 4 || columns.front() < band->panel.x ||
                    columns.back() + 4 > right || columns[2] + 9 > right ||
                    context[y].compare(columns[0] + 5, 4, "Name") != 0 ||
                    context[y].compare(columns[1] + 5, 3, "Cat") != 0 ||
                    context[y].compare(columns[2] + 5, 4, "Prof") != 0) continue;
            header_y = y;
            name_left = columns.front();
            break;
        }
        if (header_y >= 0) {
            int list_right = right;
            for (const auto &bar : native_vertical_scrollbar_spans(*gps_, band->panel))
                list_right = std::min(list_right, bar.x);
            const auto witness_count = [](std::string_view source) {
                source = trim_view(source);
                if (source == "No witnesses") return true;
                const size_t digits = source.find_first_not_of("0123456789");
                return digits > 0 && digits < source.size() &&
                    (source.substr(digits) == " witness" || source.substr(digits) == " witnesses");
            };
            const auto interview_status = [](std::string_view source) {
                return source == "Already interviewed" || source == "Interview Scheduled";
            };
            struct Record { SDL_Rect identity, witness; };
            std::vector<Record> records;
            // The callback at PE 46eb60 creates a Text in a container on the
            // unit row. Follow that live owner, including all child links;
            // the name and witness rectangles leave the actual checkbox gap.
            const uintptr_t base = native_history_profile_base();
            struct Widget {
                uintptr_t address = 0, parent = 0;
                std::array<int32_t, 4> rect{};
            };
            const auto read_widget = [&](uintptr_t address, uintptr_t reference, Widget &widget,
                                         bool empty_width = false) {
                uintptr_t vtable = 0;
                uint8_t flags = 0;
                if (!base || !address || !native_history_copy(address, vtable) ||
                        vtable != native_ui_semantic_address(reference) ||
                        !native_history_copy(address + 0xa0, flags) || (flags & 3) != 3 ||
                        !native_history_copy(address + 8, widget.parent) ||
                        !native_history_copy_bytes(address + 0x10, widget.rect.data(), sizeof(widget.rect)))
                    return false;
                widget.address = address;
                return widget.rect[0] >= 0 && widget.rect[1] >= 0 &&
                    (widget.rect[2] >= widget.rect[0] ||
                     (empty_width && widget.rect[2] == widget.rect[0] - 1)) &&
                    (widget.rect[3] >= widget.rect[1] ||
                     (reference == 0x162eaf8 && widget.rect[3] == widget.rect[1] - 1));
            };
#ifdef _WIN32
            constexpr size_t children_offset = 0x160, options_offset = 0x2c0;
#else
            constexpr size_t children_offset = 0x180, options_offset = 0x2b8;
#endif
            const auto children = [](const Widget &parent, std::vector<uintptr_t> &members) {
                std::array<uintptr_t, 3> range{};
                if (!native_history_copy_bytes(parent.address + children_offset, range.data(), sizeof(range)) ||
                        !range[0] || range[0] > range[1] || range[1] > range[2] ||
                        (range[1] - range[0]) % 16 || (range[2] - range[0]) % 16 ||
                        range[1] - range[0] > 8192 * 16) return false;
                for (uintptr_t at = range[0]; at < range[1]; at += 16) {
                    uintptr_t member = 0;
                    if (!native_history_copy(at, member)) return false;
                    members.push_back(member);
                }
                return !members.empty();
            };
            const auto contains = [&](const Widget &parent, const Widget &child) {
                std::vector<uintptr_t> members;
                return child.parent == parent.address && children(parent, members) &&
                    std::find(members.begin(), members.end(), child.address) != members.end();
            };
            for (const auto &draw : draws) {
                if (!witness_count(draw.source) || draw.address < 0x150 || draw.top_layer ||
                        draw.y <= header_y || draw.y >= bottom ||
                        draw.draw_grid != gps_->screen || draw.draw_dimx != gps_->dimx ||
                        draw.draw_dimy != gps_->dimy) continue;
                Widget text, extra, row, scroll, table, list;
                if (!read_widget(draw.address - 0x150, 0x1618aa0, text) ||
                        // This child-bearing container has no minimum width:
                        // native layout leaves x2 == x1 - 1 while its Text draws.
                        !read_widget(text.parent, 0x15eb4a8, extra, true) || !contains(extra, text) ||
                        !read_widget(extra.parent, 0x15eb4a8, row) || !contains(row, extra) ||
                        !read_widget(row.parent, 0x15eef08, scroll) || !contains(scroll, row) ||
                        !read_widget(scroll.parent, 0x1785bd0, table) || !contains(table, scroll) ||
                        !read_widget(table.parent, 0x17868d0, list) || !contains(list, table)) continue;
                std::array<uintptr_t, 3> options{};
                if (!native_history_copy_bytes(list.address + options_offset, options.data(), sizeof(options)) ||
                        !options[0] || options[0] > options[1] || options[1] > options[2]) continue;
                const auto option_bytes = options[1] - options[0];
                std::array<int32_t, 4> values{};
                // PORTRAIT, NAME_PROF, SHOW_GENDER; SELECTED adds the native
                // interrogation checkbox. Both are the same owned row layout.
                if ((option_bytes != 3 * sizeof(int32_t) && option_bytes != sizeof(values)) ||
                        !native_history_copy_bytes(options[0], values.data(), option_bytes) ||
                        values[0] != 1 || values[1] != 2 || values[2] != 12 ||
                        (option_bytes == sizeof(values) && values[3] != 11)) continue;
                std::string source;
                if (!native_history_copy_string(draw.address, source) || source != draw.source) continue;
                std::vector<uintptr_t> members;
                if (!children(row, members)) continue;
                Widget name, portrait;
                uintptr_t name_unit = 0, portrait_unit = 0;
                for (const uintptr_t member : members) {
                    Widget candidate;
                    if (read_widget(member, 0x162eaf8, candidate)) {
                        name = candidate;
                        native_history_copy(member + 0x150, name_unit);
                    } else if (read_widget(member, 0x162e8e0, candidate)) {
                        portrait = candidate;
                        native_history_copy(member + 0x150, portrait_unit);
                    }
                }
                if (!name_unit || name_unit != portrait_unit || name.parent != row.address ||
                        portrait.parent != row.address || row.rect[1] <= header_y ||
                        row.rect[1] < scroll.rect[1] || row.rect[1] + 2 > scroll.rect[3] ||
                        row.rect[1] + 3 > bottom || name.rect[0] < name_left ||
                        text.rect[0] <= name.rect[2] || text.rect[0] >= list_right ||
                        text.rect[1] < row.rect[1] || text.rect[1] > row.rect[1] + 2) continue;
                const int identity_right = std::min(name.rect[2] + 1, list_right);
                const int witness_right = std::min(text.rect[2] + 1, list_right);
                Record record{{name.rect[0], row.rect[1], identity_right - name.rect[0], 3},
                    {text.rect[0], row.rect[1], witness_right - text.rect[0], 3}};
                if (record.identity.w > 0 && record.witness.w > 0 &&
                        std::none_of(records.begin(), records.end(), [&](const Record &seen) {
                            return seen.identity.y == record.identity.y;
                        })) records.push_back(record);
            }
            for (const auto &record : records) {
                const auto &identity_box = record.identity, &witness_box = record.witness;
                const int middle = identity_box.y + 1;
                const int identity_right = identity_box.x + identity_box.w;
                const int witness_right = witness_box.x + witness_box.w;
                struct Field {
                    NativeTextCardRow row;
                    std::string complete;
                    std::optional<std::string> identity;
                    bool witness = false, status = false, grazer = false;
                };
                std::vector<Field> fields;
                const auto add = [&](int x, int y, const std::string &visible,
                        const std::string &complete, const std::optional<std::string> &identity,
                        int foreground) {
                    if (visible.empty() || x < name_left ||
                            x + static_cast<int>(visible.size()) > list_right ||
                            context[y].compare(x, visible.size(), visible) != 0) return;
                    for (const auto &field : fields)
                        if (field.row.y == y && field.row.x < x + static_cast<int>(visible.size()) &&
                                x < field.row.x + static_cast<int>(field.row.source.size())) return;
                    fields.push_back({{x, y, visible, {foreground}}, complete, identity,
                        (!identity || identity->empty()) && witness_count(complete),
                        (!identity || identity->empty()) && (interview_status(complete) ||
                            (x >= witness_box.x && complete == "Deceased")),
                        (!identity || identity->empty()) && x == identity_box.x + 1 &&
                            complete == "Grazer: requires pasture"});
                };
                for (int y = middle - 1; y <= middle + 1; ++y) {
                    for (const auto &draw : draws) {
                        if (draw.x < identity_box.x || draw.x >= witness_right || draw.source.empty() ||
                                draw.draw_dimx != gps_->dimx || draw.draw_dimy != gps_->dimy ||
                                draw.draw_grid != (draw.top_layer ? gps_->screen_top : gps_->screen)) continue;
                        const int draw_y = half_at(draw.x, y) == (1u << 4) ? y - 1 : y;
                        if (draw.y != draw_y || draw_y < middle - 1) continue;
                        bool top = false;
                        (void)cell_at(draw.x, y, &top);
                        if (top != draw.top_layer) continue;
                        const int field_right = draw.x < identity_right ? identity_right : witness_right;
                        if (draw.x >= identity_right && draw.x < witness_box.x) continue;
                        const auto visible = trim_view(std::string_view(draw.source).substr(
                            0, static_cast<size_t>(field_right - draw.x)));
                        if (visible.empty()) continue;
                        const int first = draw.x + static_cast<int>(visible.data() - draw.source.data());
                        const auto complete = complete_source(first, y, std::string(visible), field_right);
                        constexpr std::string_view no_witnesses = "No witnesses";
                        if ((!draw.unit_identity_target || draw.unit_identity_target->empty()) &&
                                visible.starts_with(no_witnesses) &&
                                complete.starts_with(no_witnesses) && visible.size() > no_witnesses.size()) {
                            add(first, y, std::string(no_witnesses), std::string(no_witnesses), {}, draw.foreground_rgb);
                            const auto person = trim_view(visible.substr(no_witnesses.size()));
                            add(first + static_cast<int>(person.data() - visible.data()), y,
                                std::string(person), std::string(trim_view(
                                    std::string_view(complete).substr(no_witnesses.size()))), {}, draw.foreground_rgb);
                            continue;
                        }
                        add(first, y, std::string(visible), complete,
                            draw.unit_identity_target, draw.foreground_rgb);
                    }
                    // Some widgets share an unspaced physical row. Split the
                    // fixed witness prefix before passing the remaining typed
                    // person field to the identity parser.
                    for (const auto &[left, end] : {
                            std::pair{identity_box.x, identity_right},
                            std::pair{witness_box.x, witness_right}}) {
                        std::string slot = context[y].substr(left, end - left);
                        for (size_t at = 0; at < slot.size(); ++at)
                            if (is_cp437_box_separator(slot, at)) slot[at] = ' ';
                        for (const auto &part : split_text_fields(slot)) {
                            int first = left + part.start;
                            std::string visible = part.text;
                            bool top = false;
                            const auto *cell = cell_at(first, y, &top);
                            const int foreground = cell
                                ? (cell[1] << 16) | (cell[2] << 8) | cell[3] : 0xffffff;
                            constexpr std::string_view no_witnesses = "No witnesses";
                            if (visible.starts_with(no_witnesses) && visible.size() > no_witnesses.size()) {
                                add(first, y, std::string(no_witnesses), std::string(no_witnesses), {}, foreground);
                                first += static_cast<int>(no_witnesses.size());
                                visible.erase(0, no_witnesses.size());
                                while (!visible.empty() && visible.front() == ' ') {
                                    ++first;
                                    visible.erase(0, 1);
                                }
                            }
                            add(first, y, visible, complete_source(first, y, visible, end), {}, foreground);
                        }
                    }
                }
                for (const auto &field : fields) {
                    // The callback's Deceased Text belongs below the witness
                    // count. The unit_name renderer owns the indented grazer
                    // continuation; neither caption is a personal identity.
                    const bool literal_status = field.grazer ||
                        (field.status && field.complete == "Deceased");
                    auto target = literal_status ? exact_literal_translation(field.complete)
                        : field.witness || field.status
                            ? translate_justice_case_text(field.complete) : field.identity;
                    if ((!target || target->empty()) && !field.witness && !field.status && !field.grazer) {
                        // The native Name widget reuses one output string for
                        // every person. A pending publication is not a blank
                        // identity: this owned full caption can use the same
                        // typed grammar without consulting that reused owner.
                        NativeUnitIdentityRenderScope identity_scope;
                        target = translate_unit_identity(field.complete, true);
                    }
                    // A surviving status prefix beside the name can coexist
                    // with the real witness widget. Its ink still needs
                    // suppression, but the widget owns the displayed value.
                    if (field.witness && field.row.x < witness_box.x &&
                            std::any_of(fields.begin(), fields.end(), [&](const Field &other) {
                                return other.witness && other.row.x >= witness_box.x;
                            })) target = std::string{};
                    // Retain the native column for every auxiliary Text,
                    // including statuses with a baseline shared by the name.
                    auto box = field.witness || field.row.x >= witness_box.x
                        ? witness_box : identity_box;
                    if (field.grazer) {
                        box.w -= field.row.x - box.x;
                        box.x = field.row.x;
                    }
                    append(field.row, kFortressJusticeActorRule,
                        target.value_or(native_text_to_utf8(field.complete)), !target, box, field.complete);
                }
            }
        }
    }
