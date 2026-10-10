// Included after dfhack_launcher_help.inc inside find_matches. These readers
// share its GUI-field/document catalog and visible-slice recovery. DFHack's
// graphical frames are read from the captured pens, not native DF skins.
std::vector<SDL_Rect> dfhack_auxiliary_regions;
std::vector<Match> dfhack_auxiliary_matches;
{
    // gui.paint_frame writes the brand seven columns before the bottom-right
    // corner, including on titleless three-row notification panels. Reserve
    // that native signature without requiring a full document-sized frame.
    const auto signature_horizontal = [](unsigned char ch) {
        return ch == 0xc4 || ch == 0xcd || ch == 0xc2 ||
            ch == 0xcb || ch == 0xc1 || ch == 0xca;
    };
    const auto signature_vertical = [](unsigned char ch) {
        return ch == 0xb3 || ch == 0xba || ch == 0xc3 ||
            ch == 0xcc || ch == 0xb4 || ch == 0xb9;
    };
    for (int y = 1; y < gps_->dimy; ++y) {
        const auto &row = dfhack_context_rows[y];
        for (size_t at = row.find("DFHack"); at != std::string::npos;
                at = row.find("DFHack", at + 6)) {
            if (at == 0 || at + 7 >= row.size()) continue;
            const auto corner = static_cast<unsigned char>(row[at + 7]);
            if (!signature_horizontal(static_cast<unsigned char>(row[at - 1])) ||
                    !signature_horizontal(static_cast<unsigned char>(row[at + 6])) ||
                    (corner != 0xd9 && corner != 0xbc) ||
                    !signature_vertical(static_cast<unsigned char>(
                        dfhack_context_rows[y - 1][at + 7]))) continue;
            dfhack_auxiliary_regions.push_back({static_cast<int>(at), y, 6, 1});
        }
    }
    const auto auxiliary_pixels = [&](const SDL_Rect &box) {
        const int tw = gps_->tile_pixel_x, th = gps_->tile_pixel_y;
        return SDL_Rect{(gps_->screen_pixel_x - gps_->dimx * tw) / 2 + box.x * tw,
            (gps_->screen_pixel_y - gps_->dimy * th) / 2 + box.y * th,
            box.w * tw, box.h * th};
    };
    const auto auxiliary_literal = [&](int x, int y, std::string_view source, int right,
            bool centered = false, std::string_view scope = "DFHack help: ") {
        if (x < 0 || y < 0 || y >= gps_->dimy || right > gps_->dimx ||
            x + static_cast<int>(source.size()) > right) return;
        const auto raw = read_row(y);
        if (raw.compare(x, source.size(), source) != 0) return;
        const auto target = exact_literal_translation(std::string(scope) + std::string(source));
        if (!target) return;
        dfhack_auxiliary_regions.push_back({x, y, static_cast<int>(source.size()), 1});
        if (only_y >= 0 && only_y != y) return;
        Match match{x, y, static_cast<int>(source.size()), kDfhackHotkeysHintRule,
            *target, std::string(source)};
        match.layout_x = x;
        match.layout_length = right - x;
        match.layout_left = !centered;
        match.layout_clip_right = right;
        dfhack_auxiliary_matches.push_back(std::move(match));
    };
    const auto gui_literal = [&](int x, int y, std::string_view source, int right,
            std::string_view role, bool centered = false) {
        auxiliary_literal(x, y, source, right, centered,
            "DFHack GUI " + std::string(role) + ": ");
    };
    constexpr std::string_view legends_race_scope = "DFHack GUI Legends race filter: ";
    const auto legends_race_catalog = g_dfhack_output_snapshot.load(std::memory_order_acquire);
    const auto legends_race_target = [&](std::string_view source)
            -> std::optional<std::string> {
        if (source == "All" || source == "No matches")
            return exact_literal_translation(std::string(legends_race_scope) + std::string(source));
        if (!legends_race_catalog || !legends_race_catalog->raw_creature_labels ||
                source.empty()) return std::nullopt;
        // racefilter.lua displays lower(creature_id), not the readable NAME.
        // Resolve an actual RAW ID before entering the existing creature grammar.
        const auto &labels = *legends_race_catalog->raw_creature_labels;
        std::string id(source);
        for (char &ch : id)
            if (ch >= 'a' && ch <= 'z') ch = static_cast<char>(ch - 'a' + 'A');
        const auto found = labels.find(id);
        if (found != labels.end() && lower(found->first) == source)
            return translate_dfhack_caption_utf8(*legends_race_catalog, "creature", found->second);
        // Mods can author mixed/lower-case IDs. Require their complete actual
        // lower(ID), and leave ambiguous IDs or unavailable names untouched.
        const std::string *name = nullptr;
        for (const auto &[raw_id, raw_name] : labels) {
            if (lower(raw_id) != source) continue;
            if (name && *name != raw_name) return std::nullopt;
            name = &raw_name;
        }
        return name ? translate_dfhack_caption_utf8(*legends_race_catalog, "creature", *name)
                    : std::nullopt;
    };
    const auto legends_race_line = [&](int x, int y, std::string_view source,
            std::string_view target, int right) {
        if (source.empty() || !contains_cjk_utf8(target) || x < 0 || y < 0 ||
                y >= gps_->dimy || right > gps_->dimx || right <= x ||
                x + static_cast<int>(source.size()) > right ||
                read_row(y).compare(x, source.size(), source) != 0) return;
        std::vector<Match> rows{{x, y, static_cast<int>(source.size()),
            kDfhackHotkeysHintRule, {}, std::string(source)}};
        rows.front().layout_native_clip = auxiliary_pixels({x, y, right - x, 1});
        append_bounded_paragraph(std::move(rows), target, screen_rows,
            dfhack_auxiliary_matches, only_y, right, right, {}, false, x);
    };
    // The legends overlay uses a 54-column BannerPanel, with its actual RAW
    // ID value in the independent yellow Label at l=24. The key stays native.
    for (int y = 0; y < gps_->dimy; ++y) {
        const auto &row = dfhack_context_rows[y];
        constexpr std::string_view caption = "Filter by race:";
        for (size_t label = row.find(caption); label != std::string::npos;
                label = row.find(caption, label + caption.size())) {
            const size_t open = row.rfind('[', label);
            if (open == std::string::npos || open + 54 > row.size()) continue;
            const size_t close = open + 53, value_at = open + 24;
            if (row[close] != ']' || label < open + 4 ||
                    label + caption.size() >= value_at ||
                    row.compare(label - 2, 2, ": ") != 0) continue;
            std::string key(trim_view(std::string_view(row).substr(
                open + 1, label - open - 3)));
            std::replace(key.begin(), key.end(), '-', '+');
            if (!is_keybinding_code(key) ||
                    !trim_view(std::string_view(row).substr(label + caption.size(),
                        value_at - label - caption.size())).empty()) continue;
            const auto band = std::string_view(row).substr(value_at, close - value_at);
            const auto value = trim_view(band);
            if (value.empty() || !band.starts_with(value) ||
                    read_row(y).compare(open, close - open + 1,
                        std::string_view(row).substr(open, close - open + 1)) != 0) continue;
            const auto red_bracket = [&](size_t x, unsigned char glyph) {
                bool top = false;
                const auto *cell = cell_at(static_cast<int>(x), y, &top);
                return cell && cell[0] == glyph &&
                    (std::equal(cell + 1, cell + 4, gps_->uccolor[4]) ||
                     std::equal(cell + 1, cell + 4, gps_->uccolor[12])) &&
                    (!screen_override || screen_override == (top ? gps_->screen_top : gps_->screen));
            };
            bool yellow = red_bracket(open, '[') && red_bracket(close, ']');
            for (size_t x = value_at; yellow && x < value_at + value.size(); ++x) {
                bool top = false;
                const auto *cell = cell_at(static_cast<int>(x), y, &top);
                yellow = cell && std::equal(cell + 1, cell + 4, gps_->uccolor[14]) &&
                    (!screen_override || screen_override == (top ? gps_->screen_top : gps_->screen));
            }
            if (!yellow) continue;
            dfhack_auxiliary_regions.push_back({static_cast<int>(open), y, 54, 1});
            auxiliary_literal(static_cast<int>(label), y, caption,
                static_cast<int>(value_at), false, "");
            if (const auto target = legends_race_target(value))
                legends_race_line(static_cast<int>(value_at), y, value, *target,
                    static_cast<int>(close));
        }
    }
    const auto auxiliary_body = [&](const SDL_Rect &box, int native_width, bool advfort,
            bool command_output = false) {
        if (box.x < 0 || box.y < 0 || box.w <= 0 || box.h <= 0 ||
            box.x + box.w > gps_->dimx || box.y + box.h > gps_->dimy) return;
        dfhack_auxiliary_regions.push_back(box);
        std::vector<Match> paragraph;
        const auto body_translation = [&](const std::vector<Match> &rows,
                NativeParagraphViewport *viewport) -> std::optional<std::string> {
            if (command_output) {
                if (const auto catalog = g_dfhack_output_snapshot.load(std::memory_order_acquire))
                    if (auto target = translate_dfhack_lever_output_rows(*catalog, rows,
                            box.x, native_width)) {
                        if (viewport) *viewport = {};
                        return target;
                    }
                return translate_dfhack_output_rows(rows, native_width, viewport);
            }
            return translate_dfhack_help_rows(rows, native_width, viewport);
        };
        const auto flush = [&]() {
            if (paragraph.empty()) return;
            NativeParagraphViewport viewport;
            auto target = body_translation(paragraph, &viewport);
            // advfort's introduction contains a live SELECT key token. Match
            // its complete prose around that token and retain the actual key.
            if (!target && advfort) {
                std::string source;
                for (const auto &row : paragraph) {
                    if (!source.empty()) source += ' ';
                    source += row.source;
                }
                const std::string prefix = "This tool allow you to perform jobs as a dwarf would in dwarf mode. When cursor is available you can press ";
                const std::string suffix = " to enqueue a job from pointer location. If job is 'Build' and there is no planed construction at cursor this tool show possible building choices.";
                if (source.starts_with(prefix) && source.ends_with(suffix) &&
                    source.size() > prefix.size() + suffix.size()) {
                    const std::string key = source.substr(prefix.size(),
                        source.size() - prefix.size() - suffix.size());
                    target = exact_literal_translation("DFHack help: " + prefix + "{k}" + suffix);
                    if (target) {
                        const auto at = target->find("{k}");
                        if (at == std::string::npos) target.reset();
                        else target->replace(at, 3, key);
                    }
                }
            }
            const auto append = [&](std::vector<Match> rows, std::string_view translation,
                    const NativeParagraphViewport &slice) {
                if (!contains_cjk_utf8(translation)) return;
                int clip_bottom = rows.back().y + 1;
                if (slice.total_lines <= static_cast<int>(rows.size())) {
                    while (clip_bottom < box.y + box.h) {
                        const auto raw = read_row(clip_bottom);
                        if (!trim_view(std::string_view(raw).substr(box.x, box.w)).empty()) break;
                        ++clip_bottom;
                    }
                }
                const SDL_Rect clip{box.x, rows.front().y, box.w,
                    clip_bottom - rows.front().y};
                rows.front().layout_native_clip = auxiliary_pixels(clip);
                append_bounded_paragraph(std::move(rows), translation, screen_rows,
                    dfhack_auxiliary_matches, only_y, box.x + box.w, box.x + box.w,
                    {}, false, box.x,
                    slice.first_line >= 0 ? std::optional<NativeParagraphViewport>(slice)
                                         : std::nullopt);
            };
            if (target) append(paragraph, *target, viewport);
            else {
                // Labels can put several semantic fields next to each other
                // without blank rows. Recover the longest complete catalog
                // block at each position; a visible scrolling tail is still
                // matched against the complete native wrap, never guessed.
                for (size_t start = 0; start < paragraph.size();) {
                    bool claimed = false;
                    for (size_t count = paragraph.size() - start; count > 0; --count) {
                        std::vector<Match> rows(paragraph.begin() + start,
                            paragraph.begin() + start + count);
                        NativeParagraphViewport slice;
                        const auto translation = body_translation(rows, &slice);
                        if (!translation) continue;
                        append(std::move(rows), *translation, slice);
                        start += count;
                        claimed = true;
                        break;
                    }
                    if (!claimed) ++start;
                }
            }
            paragraph.clear();
        };
        for (int y = box.y; y < box.y + box.h; ++y) {
            const auto raw = read_row(y);
            const auto field = std::string_view(raw).substr(box.x, box.w);
            const auto text = trim_view(field);
            const bool underline = !text.empty() &&
                std::all_of(text.begin(), text.end(), [](char ch) { return ch == '=' || ch == '-'; });
            if (text.empty() || underline) { flush(); continue; }
            const int x = box.x + static_cast<int>(text.data() - field.data());
            // Each keybinding is an independent Label token. The key remains
            // native; only its complete descriptive field enters the catalog.
            if (advfort) {
                const auto separator = text.find(':');
                if (separator != std::string_view::npos) {
                    auto key = std::string(trim_view(text.substr(0, separator)));
                    std::replace(key.begin(), key.end(), '-', '+');
                    if (is_keybinding_code(key) || key == "CAREFULL MOVE") {
                        flush();
                        const auto action = trim_view(text.substr(separator + 1));
                        if (!action.empty()) auxiliary_literal(
                            x + static_cast<int>(action.data() - text.data()), y,
                            action, box.x + box.w);
                        if (key == "CAREFULL MOVE")
                            auxiliary_literal(x, y, text.substr(0, separator), box.x + box.w);
                        continue;
                    }
                }
            }
            paragraph.push_back({x, y, static_cast<int>(text.size()),
                kDfhackHotkeysHintRule, {}, std::string(text)});
        }
        flush();
    };
    // Common GUI components have a separate role-scoped catalogue. A help
    // document may contain executable examples; those entries must never
    // select a translation for an EditField, saved name or command output.
    struct GuiPrompt {
        std::vector<Match> rows;
        std::string target;
    };
    const auto gui_prompt = [&](std::string_view role, int left, int top,
            int right, int last) -> std::optional<GuiPrompt> {
        std::optional<GuiPrompt> selected;
        std::vector<Match> rows;
        std::string source;
        for (int row_y = top; row_y <= last; ++row_y) {
            const auto band = std::string_view(dfhack_context_rows[row_y]).substr(
                left, right - left);
            const auto text = trim_view(band);
            if (text.empty()) break;
            const int x = left + static_cast<int>(text.data() - band.data());
            rows.push_back({x, row_y, static_cast<int>(text.size()),
                kDfhackHotkeysHintRule, {}, std::string(text)});
            if (!source.empty()) source += ' ';
            source += text;
            const auto target = exact_literal_translation(
                "DFHack GUI " + std::string(role) + ": " + source);
            if (target && contains_cjk_utf8(*target)) selected = GuiPrompt{rows, *target};
        }
        return selected;
    };
    const auto append_gui_prompt = [&](const GuiPrompt &prompt, int left, int right) {
        auto rows = prompt.rows;
        for (const auto &row : rows)
            if (read_row(row.y).compare(row.x, row.length, row.source) != 0) return;
        // The prompt owns its original rows only. The following value is a
        // separate native field even when there is no blank line between them.
        rows.front().layout_native_clip = auxiliary_pixels(
            {left, rows.front().y, right - left, static_cast<int>(rows.size())});
        append_bounded_paragraph(std::move(rows), prompt.target, screen_rows,
            dfhack_auxiliary_matches, only_y, right, right, {}, false, left);
    };
    append_dfhack_notification_banners(dfhack_context_rows,
        dfhack_auxiliary_regions, dfhack_auxiliary_matches, only_y, read_row);
#include "dfhack_mod_manager.inc"
    for (const auto &window : native_dfhack_window_geometry(dfhack_context_rows)) {
        const auto *frame = &window.frame;
#include "dfhack_civ_alert.inc"
        if (dfhack_mod_manager_window(window)) continue;
        // Toolbar overlays use a titleless six-row Panel: two prose rows,
        // a blank separator and an independent Hotkey Label. Resolve the
        // whole hint before the larger dialog reader's height gate.
        if (window.title_length == 0 && frame->h == 6) {
            const int left = frame->x + 2, right = frame->x + frame->w - 2;
            const int bottom = frame->y + frame->h - 1;
            const auto hotkey_band = std::string_view(dfhack_context_rows[bottom - 1])
                .substr(left, right - left);
            const auto hotkey = native_hotkey_source(hotkey_band, 0);
            const bool gap = trim_view(std::string_view(dfhack_context_rows[bottom - 2])
                .substr(left, right - left)).empty();
            if (gap && hotkey && trim_view(hotkey_band.substr(hotkey->size())).empty()) {
                const auto hint = gui_prompt("Toolbar hint", left, frame->y + 1,
                    right, bottom - 3);
                if (hint && hint->rows.size() == 2 && hint->rows.back().y == bottom - 3) {
                    // Preserve the separately colored native shortcut field.
                    for (const auto &row : hint->rows)
                        dfhack_auxiliary_regions.push_back({row.x, row.y, row.length, 1});
                    append_gui_prompt(*hint, left, right);
                }
            }
        }
        // Legacy InputBox is 23 columns wide. Keep the foreground
        // component's existing size and role-scoped prompt/control proof.
        if (frame->w < 23 || frame->h < 7) continue;
        const int title_y = frame->y;
        const int at = window.title_x, title_end = at + window.title_length;
        const auto title = std::string_view(dfhack_context_rows[title_y]).substr(
            at, window.title_length);
        const int right = frame->x + frame->w - 1;
        const int bottom = frame->y + frame->h - 1;
        const int left = frame->x + 2, top = frame->y + 2;
#include "dfhack_item_type_selector.inc"
        const int footer_y = bottom - 2;
        const auto footer_band = std::string_view(dfhack_context_rows[footer_y]).substr(
            left, right - 1 - left);
        const auto footer = trim_view(footer_band);
        const auto separator = footer.find(": ");
        std::string_view action;
        int action_x = -1;
        if (separator != std::string_view::npos) {
            auto key = std::string(footer.substr(0, separator));
            std::replace(key.begin(), key.end(), '-', '+');
            if (is_keybinding_code(key)) {
                action = trim_view(footer.substr(separator + 2));
                action_x = left + static_cast<int>(action.data() - footer_band.data());
            }
        }
        const auto input = gui_prompt("Input prompt", left, top, right, bottom - 4);
        const auto confirmation = gui_prompt(
            "Confirmation prompt", left, top, right - 1, footer_y - 2);
        const bool input_gap = trim_view(std::string_view(
            dfhack_context_rows[bottom - 3]).substr(left, right - left)).empty();
        const bool confirm_action = action_x >= 0 && exact_literal_translation(
            "DFHack GUI Confirmation action: " + std::string(action)).has_value();
        const bool viewer = action_x >= 0 && exact_literal_translation(
            "DFHack GUI Viewer action: " + std::string(action)).has_value();
#include "dfhack_journal.inc"
#include "dfhack_confirm_dialogs.inc"
#include "dfhack_save_reminder.inc"
#include "dfhack_input_monitor.inc"
#include "dfhack_warn_stranded.inc"
#include "dfhack_uniform_unstick.inc"
#include "dfhack_unretire_anyone.inc"
#include "dfhack_legends_race_filter.inc"
#include "dfhack_tile_browser.inc"
#include "dfhack_suspendmanager.inc"
#include "dfhack_rename.inc"
        if (input && input_gap) {
            dfhack_auxiliary_regions.push_back(*frame);
            gui_literal(at, title_y, title, title_end, "Title", true);
            append_gui_prompt(*input, left, right);
            // The final body row is the EditField, including its cursor.
        } else if (confirmation && confirm_action) {
            dfhack_auxiliary_regions.push_back(*frame);
            gui_literal(at, title_y, title, title_end, "Title", true);
            append_gui_prompt(*confirmation, left, right - 1);
            gui_literal(action_x, footer_y, action, right - 1, "Confirmation action");
        } else if (viewer) {
            dfhack_auxiliary_regions.push_back(*frame);
            gui_literal(action_x, footer_y, action, right - 1, "Viewer action");
            auto status = gui_prompt("Viewer status", left, top, right - 4, footer_y - 2);
            if (!status)
                status = gui_prompt("Viewer status", left, top, right - 1, footer_y - 2);
            if (status) {
                gui_literal(at, title_y, title, title_end, "Title", true);
                append_gui_prompt(*status, left, right - 1);
            } else {
                // Minimal launcher mode and command viewers use the same
                // output catalog as the launcher's scrollback, rather than
                // reserving every result as opaque user data.
                if (title == "DFHack Launcher")
                    auxiliary_literal(at, title_y, title, title_end, true);
                else gui_literal(at, title_y, title, title_end, "Title", true);
                auxiliary_body({left, top, right - 1 - left, footer_y - 1 - top},
                    right - 1 - left, false, true);
            }
            // Unmapped identifiers and values retain their native glyphs.
        }
    }
    // A GUI title must belong to the dedicated catalog, its frame must be
    // connected, and its bottom must carry DFHack's native signature. This
    // also covers independent help dialogs added by other DFHack scripts.
    for (int y = 0; y < gps_->dimy; ++y) {
        for (const auto &field : split_text_fields(dfhack_context_rows[y])) {
            const std::string_view title = field.text;
            const std::string folded = lower(std::string(title));
            const bool quickcmd = title == "Quick Command";
            if (!quickcmd && title != "DFHack Quickstart Guide" &&
                    folded.find("help") == std::string::npos)
                continue;
            if (!exact_literal_translation(
                    (quickcmd ? "DFHack GUI Title: " : "DFHack help: ") +
                    std::string(title))) continue;
            const int at = field.start;
            const auto frame = native_dfhack_frame(dfhack_context_rows, y,
                at, static_cast<int>(title.size()));
            if (!frame) continue;
            const bool quickstart = title == "DFHack Quickstart Guide";
            const bool advfort = title == "Help!?!";
            const int right = frame->x + frame->w - 1;
            const int bottom = frame->y + frame->h - 1;
            if (dfhack_context_rows[bottom].compare(right - 7, 6, "DFHack") != 0) continue;
            if (quickcmd) {
                // gui/quickcmd.lua keeps executable commands and user labels
                // in the list. Own the whole window so only its fixed UI
                // fields translate, including during raw-layer suppression.
                dfhack_auxiliary_regions.push_back(*frame);
                gui_literal(at, y, title,
                    at + static_cast<int>(title.size()), "Title", true);
                const int body_left = frame->x + 2;
                const int body_top = frame->y + 2;
                const int body_right = right - 1;
                const int footer_bottom = bottom - 2;
                const int second_column = body_left + 19;
                gui_literal(body_left, body_top,
                    "Command list is empty.", body_right, "Caption");
                gui_literal(body_left, body_top + 1,
                    "Hit \"A\" to add one!", body_right, "Caption");
                // HOTKEYWIDTH=7 and OUTWIDTH=4 are independent header fields.
                gui_literal(body_left, body_top, "Hotkey", body_left + 7, "Caption");
                gui_literal(body_left + 7, body_top, "Out", body_left + 11, "Caption");
                gui_literal(body_left + 11, body_top, "Name/Command", body_right, "Caption");
                // Each HotkeyLabel paints its key and ': ' before the action.
                // Limit the left column to the next key, preserving both keys.
                gui_literal(body_left + 3, footer_bottom - 2,
                    "Add command", std::min(second_column, body_right), "Caption");
                gui_literal(second_column + 3, footer_bottom - 2,
                    "Delete command", body_right, "Caption");
                gui_literal(body_left + 3, footer_bottom - 1,
                    "Edit command", std::min(second_column, body_right), "Caption");
                gui_literal(second_column + 3, footer_bottom - 1,
                    "Edit name", body_right, "Caption");
                gui_literal(body_left + 3, footer_bottom,
                    "Capture output", body_right, "Caption");
                continue;
            }
            if (quickstart) {
                // Window's frame_inset and framed Panel gap each consume
                // one cell. Its b=0 controls therefore sit two rows above
                // the border, not on the intervening padding row.
                const int footer_y = bottom - 2;
                const auto &footer = dfhack_context_rows[footer_y];
                const auto page = footer.find("Page ", frame->x + 1);
                if (page == std::string::npos || page >= static_cast<size_t>(right) ||
                    footer.find(" of ", page + 5) == std::string::npos) continue;
                const auto number_end = footer.find(" of ", page + 5);
                size_t counter_end = number_end + 4;
                while (counter_end < static_cast<size_t>(right) &&
                    footer[counter_end] >= '0' && footer[counter_end] <= '9') ++counter_end;
                const auto digits = [](std::string_view value) {
                    return !value.empty() && std::all_of(value.begin(), value.end(),
                        [](char ch) { return ch >= '0' && ch <= '9'; });
                };
                const auto current = std::string_view(footer).substr(page + 5, number_end - page - 5);
                const auto total = std::string_view(footer).substr(number_end + 4,
                    counter_end - number_end - 4);
                auto counter = exact_literal_translation("DFHack help: Page {d} of {d}");
                if (counter && digits(current) && digits(total)) {
                    bool complete = true;
                    for (const auto value : {current, total}) {
                        const auto placeholder = counter->find("{d}");
                        if (placeholder == std::string::npos) { complete = false; break; }
                        counter->replace(placeholder, 3, value);
                    }
                    const auto raw = read_row(footer_y);
                    if (complete && raw.compare(page, counter_end - page,
                            footer, page, counter_end - page) == 0) {
                        dfhack_auxiliary_regions.push_back({static_cast<int>(page), footer_y,
                            static_cast<int>(counter_end - page), 1});
                        if (only_y < 0 || only_y == footer_y) {
                            Match match{static_cast<int>(page), footer_y,
                                static_cast<int>(counter_end - page), kDfhackHotkeysHintRule,
                                *counter, footer.substr(page, counter_end - page)};
                            match.layout_x = static_cast<int>(page);
                            match.layout_length = static_cast<int>(counter_end - page);
                            match.layout_left = true;
                            match.layout_clip_right = static_cast<int>(counter_end);
                            dfhack_auxiliary_matches.push_back(std::move(match));
                        }
                    }
                }
                const auto back = footer.find("Back", frame->x + 1);
                if (back != std::string::npos && back < static_cast<size_t>(right))
                    auxiliary_literal(static_cast<int>(back), footer_y, "Back", right);
                const auto next = footer.find("Next", page + 5);
                if (next != std::string::npos && next < static_cast<size_t>(right))
                    auxiliary_literal(static_cast<int>(next), footer_y, "Next", right);
            }
            // The frame signature is branding, never a generated person name.
            // Reserving its native bytes leaves DFHack's own glyphs untouched.
            dfhack_auxiliary_regions.push_back({right - 7, bottom, 6, 1});
            dfhack_auxiliary_regions.push_back(
                {at, y, static_cast<int>(title.size()), 1});
            auxiliary_literal(at, y, title, right);
            // Quickstart's Pages leaves two rows for navigation. WrappedLabel
            // also keeps three columns beside its text for the scrollbar.
            const SDL_Rect body = quickstart
                ? SDL_Rect{frame->x + 2, frame->y + 2, frame->w - 7, frame->h - 6}
                : SDL_Rect{frame->x + 1, frame->y + 1,
                    frame->w - (advfort ? 3 : 5), frame->h - (advfort ? 4 : 2)};
            auxiliary_body(body, quickstart || advfort ? body.w : frame->w - 5, advfort);
        }
    }
    // The tag filter is a 46-column panel inside the launcher. Its controls
    // occupy the bottom row, with two exact dividers around a six-row
    // WrappedLabel. This proof works even though subviews overwrite its side
    // borders. Reserve the description alone, retaining executable tag names.
    for (const auto &launcher : dfhack_launcher_frames) {
        const int left = launcher.x + launcher.w - 75;
        const int right = left + 46;
        if (left < launcher.x + 1 || right > gps_->dimx) continue;
        for (int footer_y = launcher.y + 11;
                footer_y < launcher.y + launcher.h - 1; ++footer_y) {
            const auto &footer = dfhack_context_rows[footer_y];
            const auto cycle = footer.find("Cycle filter", left);
            const auto all = footer.find("Cycle all", left);
            if (cycle == std::string::npos || all == std::string::npos ||
                cycle + 12 > static_cast<size_t>(right) ||
                all + 9 > static_cast<size_t>(right)) continue;
            const auto divider = [&](int row) {
                int bars = 0;
                for (int x = left; x < right; ++x) {
                    const auto ch = static_cast<unsigned char>(dfhack_context_rows[row][x]);
                    bars += ch == 196 || ch == 205 || ch == 197;
                }
                return bars >= 42;
            };
            if (!divider(footer_y - 9) || !divider(footer_y - 2)) continue;
            auxiliary_body({left, footer_y - 8, 43, 6}, 43, false);
            auxiliary_literal(static_cast<int>(cycle), footer_y, "Cycle filter", right);
            auxiliary_literal(static_cast<int>(all), footer_y, "Cycle all", right);
        }
    }
    // gui/cp437-table.lua owns a character palette and an EditField, not
    // dictionary prose. Its complete labels distinguish the window; retain
    // the palette, entered bytes, hotkeys and DFHack signature natively.
    for (int title_y = 0; title_y < gps_->dimy; ++title_y) {
        constexpr std::string_view title = "CP437 table";
        constexpr std::string_view prompt = "Click characters or type";
        constexpr std::string_view send = "Send text to parent";
        constexpr std::string_view backspace = "Click here to Backspace";
        constexpr std::string_view cancel = "Cancel";
        const size_t at = dfhack_context_rows[title_y].find(title);
        if (at == std::string::npos) continue;
        const auto frame = native_dfhack_frame(dfhack_context_rows, title_y,
            static_cast<int>(at), static_cast<int>(title.size()), 26, 26);
        if (!frame) continue;
        const int edge = frame->x + frame->w - 1;
        const int bottom = frame->y + frame->h - 1;
        const int left = frame->x + 2, right = edge - 1;
        const int prompt_y = bottom - 4, footer_y = bottom - 2;
        if (dfhack_context_rows[bottom].compare(edge - 7, 6, "DFHack") != 0 ||
                dfhack_context_rows[prompt_y].compare(left, prompt.size(), prompt) != 0)
            continue;
        const auto &footer = dfhack_context_rows[footer_y];
        const size_t send_at = footer.find(send, left);
        if (send_at == std::string::npos) continue;
        const size_t backspace_at = footer.find(backspace, send_at + send.size());
        if (backspace_at == std::string::npos) continue;
        const size_t cancel_at = footer.find(cancel, backspace_at + backspace.size());
        if (cancel_at == std::string::npos ||
                cancel_at + cancel.size() > static_cast<size_t>(right)) continue;
        dfhack_auxiliary_regions.push_back(*frame);
        gui_literal(static_cast<int>(at), title_y, title,
            static_cast<int>(at + title.size()), "Title", true);
        gui_literal(left, prompt_y, prompt, right, "Caption");
        for (const auto &[x, source] : {
                std::pair{send_at, send}, std::pair{backspace_at, backspace},
                std::pair{cancel_at, cancel}})
            gui_literal(static_cast<int>(x), footer_y, source,
                static_cast<int>(x + source.size()), "Caption");
    }
#include "dfhack_workshop_workers.inc"
#include "dfhack_squad_assignment.inc"
#include "dfhack_elevation_preferences.inc"
#include "dfhack_control_panel.inc"
#include "dfhack_finder_output.inc"
#include "dfhack_embark_output.inc"
#include "dfhack_autotraining_output.inc"
#include "dfhack_autobutcher_output.inc"
#include "dfhack_unit_info_output.inc"
#include "dfhack_unit_overlays_output.inc"
#include "dfhack_trackstop.inc"
#include "dfhack_design.inc"
#include "dfhack_sitemap.inc"
#include "dfhack_autodump.inc"
#include "dfhack_notification_settings.inc"
#include "dfhack_mass_remove.inc"
#include "dfhack_quickfort.inc"
#include "dfhack_teleport.inc"
#include "dfhack_trade_goods.inc"
#include "dfhack_animal_assignment.inc"
#include "dfhack_preserve_rooms.inc"
#include "dfhack_buildingplan.inc"
#include "dfhack_overlay_controls.inc"
    // Ownership prevents generic rules from translating isolated help words
    // or key names. Unmapped source remains native until its complete entry
    // is supplied; no incomplete sentence is drawn or silently discarded.
    for (const auto &owned : dfhack_auxiliary_regions)
        for (int y = owned.y; y < owned.y + owned.h; ++y)
            std::fill_n(screen_rows[y].begin() + owned.x, owned.w, ' ');
}
