void Overlay::layout_settings_panels(SDL_Renderer *renderer) {
    if (!gps_) return;
    if (native_settings_announcements_active(*gps_)) return;
    if (prepared_matches_.empty()) return;

    // Settings tabs are mirrored on two adjacent logical rows by the vanilla
    // widget renderer. Bitmap glyphs overlap into one visual label, but drawing
    // a full CJK string for both rows produces two clearly separated copies.
    // Detect the complete tab-bar structure as a group (rather than hiding
    // any arbitrary repeated word), suppress any lower copies, and place one
    // translation on the shared visual centre.  Some redraw paths expose only
    // one of the two rows, so singleton groups must use the same geometry too;
    // otherwise changing page or scrolling makes the tab labels jump.
    static constexpr std::array<std::string_view, 6> settings_tabs = {{
        "Video", "Audio", "Game", "Keybindings", "Announcements", "Difficulty",
    }};
    struct SettingsTabGroup {
        size_t representative = 0;
        size_t tab_index = 0;
        int geometry_x = 0;
        int geometry_length = 0;
    };
    std::vector<SettingsTabGroup> settings_tab_groups;
    // Read tab geometry from the stable base layer, not from whichever
    // mirrored copy happens to survive the current composite.  This is a
    // small fixed-string scan over the first ten rows and is independent of
    // the active page's content/layout recognition.
    auto raw_tab_geometry = [this](const unsigned char *raw, std::string_view tab)
        -> std::optional<std::pair<int, int>> {
        if (!raw) return std::nullopt;
        for (int y = 0; y < std::min(10, gps_->dimy); ++y) {
            for (int x = 0; x + static_cast<int>(tab.size()) <= gps_->dimx; ++x) {
                bool equal = true;
                for (size_t offset = 0; offset < tab.size(); ++offset) {
                    const size_t tile = static_cast<size_t>(x + offset) * gps_->dimy + y;
                    if (raw[tile * 8] !=
                        static_cast<unsigned char>(tab[offset])) {
                        equal = false;
                        break;
                    }
                }
                if (!equal) continue;
                const auto raw_char = [this, raw, y](int column) -> unsigned char {
                    if (column < 0 || column >= gps_->dimx) return 0;
                    const size_t tile = static_cast<size_t>(column) * gps_->dimy + y;
                    return raw[tile * 8];
                };
                const unsigned char before = raw_char(x - 1);
                const unsigned char after = raw_char(x + static_cast<int>(tab.size()));
                if (!ascii_word_byte(before) && !ascii_word_byte(after)) {
                    return std::pair<int, int>{x, y};
                }
            }
        }
        return std::nullopt;
    };
    auto stable_tab_geometry = [this, &raw_tab_geometry](std::string_view tab)
        -> std::optional<std::pair<int, int>> {
        if (const auto base = raw_tab_geometry(gps_->screen, tab)) return base;
        if (gps_->top_in_use) return raw_tab_geometry(gps_->screen_top, tab);
        return std::nullopt;
    };
    for (size_t tab_index = 0; tab_index < settings_tabs.size(); ++tab_index) {
        const std::string_view tab = settings_tabs[tab_index];
        const auto base_geometry = stable_tab_geometry(tab);
        std::vector<size_t> occurrences;
        for (size_t i = 0; i < prepared_matches_.size(); ++i) {
            const Match &match = prepared_matches_[i];
            if (!match.native_split_duplicate && match.source == tab && match.y < 10)
                occurrences.push_back(i);
        }
        if (occurrences.empty() && base_geometry) {
            for (size_t rule_index = rules_.size(); rule_index-- > 0;) {
                const Rule &rule = rules_[rule_index];
                if (rule.source != tab || rule.numeric_template || rule.string_template) {
                    continue;
                }
                Match recovered;
                recovered.x = base_geometry->first;
                recovered.y = base_geometry->second;
                recovered.length = static_cast<int>(tab.size());
                recovered.rule = static_cast<int>(rule_index);
                recovered.source = std::string(tab);
                recovered.target = rule.target;
                recovered.layout_left = rule.left_align;
                prepared_matches_.push_back(std::move(recovered));
                occurrences.push_back(prepared_matches_.size() - 1);
                break;
            }
        }
        std::stable_sort(occurrences.begin(), occurrences.end(), [this](size_t a, size_t b) {
            return prepared_matches_[a].y < prepared_matches_[b].y;
        });
        if (!occurrences.empty()) {
            SettingsTabGroup group;
            group.representative = occurrences.front();
            group.tab_index = tab_index;
            group.geometry_x = prepared_matches_[group.representative].x;
            group.geometry_length = prepared_matches_[group.representative].length;
            if (base_geometry) {
                group.geometry_x = base_geometry->first;
                group.geometry_length = static_cast<int>(tab.size());
            }
            settings_tab_groups.push_back(std::move(group));
        }
    }
    // A tall/scaled settings window can clip the tab strip out of the logical
    // grid while leaving the scrolling page visible. Page layout must not
    // disappear merely because those tab glyphs are off-screen, so accept
    // stable content structures as independent settings-screen anchors.
    bool settings_content_anchor = false;
    bool keybinding_repeat_anchor = false;
    bool keybinding_text_entry_anchor = false;
    bool keybinding_macros_anchor = false;
    int settings_add_count = 0;
    bool game_page_anchor = false;
    bool difficulty_enemies_anchor = false;
    bool difficulty_economy_anchor = false;
    bool difficulty_custom_anchor = false;
    int video_page_anchor_count = 0;
    int audio_page_anchor_count = 0;
    int settings_range_count = 0;
    std::vector<int> settings_toggle_rows;
    for (const Match &match : prepared_matches_) {
        settings_content_anchor = settings_content_anchor ||
            match.source.starts_with("Master Volume:") ||
            match.source == "Display all errorlogs on screen" ||
            match.source == "Scale interface to fit grid height/width";
        if (match.source == "Display all errorlogs on screen") game_page_anchor = true;
        if (match.source == "Enemies:") difficulty_enemies_anchor = true;
        if (match.source == "Economy:") difficulty_economy_anchor = true;
        if (match.source == "Custom settings") difficulty_custom_anchor = true;
        if (is_video_setting_source(match.source)) ++video_page_anchor_count;
        if (match.source.starts_with("Master Volume:") ||
            match.source.starts_with("Music Volume (Fortress):") ||
            match.source.starts_with("Ambience Volume (Fortress):") ||
            match.source.starts_with("Sound Effects Volume (Fortress):") ||
            match.source.starts_with("UI Volume (Fortress):") ||
            match.source.starts_with("UI Volume (Adventure):") ||
            match.source.starts_with("Average Seconds Between Tracks/Interludes")) {
            ++audio_page_anchor_count;
        }
        if (trim(match.source).starts_with("Range: ")) ++settings_range_count;
        if (match.source == "Add") ++settings_add_count;
        if (match.source == "Yes" || match.source == "No") {
            settings_toggle_rows.push_back(match.y);
        }
        if (match.source == "Don't repeat" || match.source == "Delayed repeat" ||
            match.source == "Fast repeat") {
            keybinding_repeat_anchor = true;
        }
        if (match.source == "Text entry") keybinding_text_entry_anchor = true;
        if (match.source == "Macros") keybinding_macros_anchor = true;
    }
    std::sort(settings_toggle_rows.begin(), settings_toggle_rows.end());
    int single_toggle_rows = 0;
    for (size_t begin = 0; begin < settings_toggle_rows.size();) {
        size_t end = begin + 1;
        while (end < settings_toggle_rows.size() &&
               settings_toggle_rows[end] == settings_toggle_rows[begin]) {
            ++end;
        }
        if (end - begin == 1) ++single_toggle_rows;
        begin = end;
    }

    // Popup widgets can cover most of the final composite while the base
    // logical screen still contains the intact settings page. Derive a stable
    // page hint from that base layer so opening the Video resolution menu
    // cannot make the remaining Yes/No and Range rows masquerade as Game.
    // The dedicated matcher already proved the complete current Video page.
    // Its final-frame identity also owns this layout; do not scan and match
    // the same base screen again merely to rediscover the active tab.
    int base_settings_page_hint = settings_video_frame_ ? 0 : -1;
    const bool difficulty_page_anchor = difficulty_enemies_anchor &&
        difficulty_economy_anchor && difficulty_custom_anchor;
    if (!settings_video_frame_ && settings_tab_groups.size() >= 3 && gps_->screen) {
        int base_video = 0;
        int base_audio = 0;
        int base_ranges = 0;
        int base_add = 0;
        int base_yes_no = 0;
        bool base_game = false;
        bool base_repeat = false;
        bool base_text_entry = false;
        bool base_macros = false;
        bool base_difficulty_enemies = false;
        bool base_difficulty_economy = false;
        bool base_difficulty_custom = false;
        for (const Match &match : find_matches(-1, gps_->screen)) {
            if (is_video_setting_source(match.source)) ++base_video;
            if (match.source.starts_with("Master Volume:") ||
                match.source.starts_with("Music Volume (Fortress):") ||
                match.source.starts_with("Ambience Volume (Fortress):") ||
                match.source.starts_with("Sound Effects Volume (Fortress):") ||
                match.source.starts_with("UI Volume (Fortress):") ||
                match.source.starts_with("UI Volume (Adventure):") ||
                match.source.starts_with("Average Seconds Between Tracks/Interludes")) {
                ++base_audio;
            }
            if (trim(match.source).starts_with("Range: ")) ++base_ranges;
            if (match.source == "Display all errorlogs on screen") base_game = true;
            if (match.source == "Enemies:") base_difficulty_enemies = true;
            if (match.source == "Economy:") base_difficulty_economy = true;
            if (match.source == "Custom settings") base_difficulty_custom = true;
            if (match.source == "Add") ++base_add;
            if (match.source == "Yes" || match.source == "No") ++base_yes_no;
            if (match.source == "Don't repeat" || match.source == "Delayed repeat" ||
                match.source == "Fast repeat") {
                base_repeat = true;
            }
            if (match.source == "Text entry") base_text_entry = true;
            if (match.source == "Macros") base_macros = true;
        }
        if (base_difficulty_enemies && base_difficulty_economy &&
            base_difficulty_custom) {
            base_settings_page_hint = 5;
        } else if (base_video >= 3) {
            base_settings_page_hint = 0;
        } else if (base_audio >= 3) {
            base_settings_page_hint = 1;
        } else if ((base_add >= 4 && base_repeat) ||
                   (base_text_entry && base_macros)) {
            base_settings_page_hint = 3;
        } else if (base_game || base_ranges >= 1 || base_yes_no >= 2) {
            base_settings_page_hint = 2;
        }
    }
    settings_content_anchor = settings_content_anchor ||
        difficulty_page_anchor ||
        (settings_add_count >= 4 && keybinding_repeat_anchor) ||
        (keybinding_text_entry_anchor && keybinding_macros_anchor) ||
        single_toggle_rows >= 5;
    const bool cached_game_viewport = settings_tab_geometry_valid_ &&
        settings_active_page_ == 2 &&
        (settings_range_count >= 1 || single_toggle_rows >= 1);
    const bool settings_screen = settings_tab_groups.size() >= 3 ||
        settings_content_anchor ||
        (settings_tab_geometry_valid_ && !settings_tab_groups.empty()) ||
        cached_game_viewport;
    if (settings_screen) {
        const bool settings_dimensions_changed =
            settings_geometry_dimx_ != gps_->dimx ||
            settings_geometry_dimy_ != gps_->dimy ||
            settings_geometry_tile_x_ != gps_->tile_pixel_x ||
            settings_geometry_tile_y_ != gps_->tile_pixel_y;
        if (settings_dimensions_changed) {
            settings_tab_geometry_valid_ = false;
            settings_active_page_ = -1;
            settings_logged_page_ = -2;
            settings_game_control_x_ = -1;
            settings_game_value_x_ = -1;
            settings_keybinding_geometry_valid_ = false;
            settings_keybinding_action_x_ = -1;
            settings_keybinding_key_x_ = -1;
            settings_keybinding_add_x_ = -1;
            settings_logged_control_x_ = -2;
            settings_logged_value_x_ = -2;
            settings_geometry_dimx_ = gps_->dimx;
            settings_geometry_dimy_ = gps_->dimy;
            settings_geometry_tile_x_ = gps_->tile_pixel_x;
            settings_geometry_tile_y_ = gps_->tile_pixel_y;
        }
        int settings_table_left = settings_tab_geometry_valid_
            ? settings_table_left_ : 2;
        const int settings_font_pixels = std::max(
            config_.min_font_pixels,
            static_cast<int>(gps_->tile_pixel_y * config_.font_scale));
        auto median_column = [](std::vector<int> columns, int fallback) {
            if (columns.empty()) return fallback;
            std::sort(columns.begin(), columns.end());
            return columns[columns.size() / 2];
        };
        auto place_left = [this, settings_font_pixels](Match &match, int x, int width) {
            match.layout_x = std::clamp(x, 0, std::max(0, gps_->dimx - 1));
            match.layout_length = std::max(1, std::min(width, gps_->dimx - match.layout_x));
            match.layout_left = true;
            match.layout_prepared = true;
            // Lock the actual visible height, not merely the nominal FreeType
            // point size. Otherwise values such as "100" are several pixels
            // shorter than adjacent Chinese labels despite sharing one size.
        };

        // Identify the active settings page from semantic structures when
        // they are visible, then retain it through scroll intervals that show
        // only one or two otherwise ambiguous rows.  Layout must not toggle
        // off merely because an arbitrary anchor crossed the viewport edge.
        // Difficulty presets retain their own page identity independently of
        // scrolling value rows on other settings pages.
        if (difficulty_page_anchor) {
            settings_active_page_ = 5;
        } else if (base_settings_page_hint >= 0) {
            settings_active_page_ = base_settings_page_hint;
        } else if (video_page_anchor_count >= 3) {
            settings_active_page_ = 0;
        } else if (audio_page_anchor_count >= 3) {
            settings_active_page_ = 1;
        } else if ((settings_add_count >= 4 && keybinding_repeat_anchor) ||
                   (keybinding_text_entry_anchor && keybinding_macros_anchor)) {
            settings_active_page_ = 3;
        } else if (game_page_anchor || single_toggle_rows >= 2 ||
                   settings_range_count >= 1) {
            settings_active_page_ = 2;
        }
        if (settings_active_page_ != settings_logged_page_) {
            static constexpr std::array<std::string_view, 6> page_names = {{
                "Video", "Audio", "Game", "Keybindings", "Announcements", "Difficulty",
            }};
            const std::string name = settings_active_page_ >= 0 &&
                    settings_active_page_ < static_cast<int>(page_names.size())
                ? std::string(page_names[static_cast<size_t>(settings_active_page_)])
                : "Unknown";
            log_line("INFO", "Settings layout page=" + name +
                " tabs=" + std::to_string(settings_tab_groups.size()) +
                " single=" + std::to_string(single_toggle_rows) +
                " ranges=" + std::to_string(settings_range_count));
            settings_logged_page_ = settings_active_page_;
        }
        if (settings_active_page_ == 2 &&
            (static_cast<int>(settings_tab_groups.size()) != settings_logged_tab_count_ ||
             single_toggle_rows != settings_logged_single_rows_ ||
             settings_range_count != settings_logged_range_count_)) {
            log_line("INFO", "Game settings viewport: tabs=" +
                std::to_string(settings_tab_groups.size()) + " single=" +
                std::to_string(single_toggle_rows) + " ranges=" +
                std::to_string(settings_range_count) + " cached=" +
                std::to_string(settings_tab_geometry_valid_ ? 1 : 0));
            settings_logged_tab_count_ = static_cast<int>(settings_tab_groups.size());
            settings_logged_single_rows_ = single_toggle_rows;
            settings_logged_range_count_ = settings_range_count;
        }

        if (settings_tab_groups.size() >= 3) {
            std::vector<SettingsTabGroup> ordered_tab_groups = settings_tab_groups;
            std::stable_sort(ordered_tab_groups.begin(), ordered_tab_groups.end(),
                [](const SettingsTabGroup &a, const SettingsTabGroup &b) {
                    return a.geometry_x < b.geometry_x;
                });
            std::array<int, settings_tabs.size()> computed_left{};
            std::array<int, settings_tabs.size()> computed_right{};
            int computed_table_left = settings_table_left;
            for (size_t position = 0; position < ordered_tab_groups.size(); ++position) {
                const SettingsTabGroup &group = ordered_tab_groups[position];
                // Tabs have different widths because their English captions
                // have different lengths, but the horizontal padding on both
                // sides of every caption is shared.  A midpoint between label
                // *centres* therefore shifts Video whenever the wider
                // Keybindings/Announcements tabs are present.  Recover each
                // graphical boundary from the empty gap between adjacent
                // source spans instead; the outside edges use the same gap as
                // padding.  This remains stable across active tabs and scroll
                // positions without any per-tab coordinates.
                int left = 0;
                if (position == 0) {
                    const SettingsTabGroup &next = ordered_tab_groups[1];
                    const int gap = std::max(
                        2, next.geometry_x -
                           (group.geometry_x + group.geometry_length));
                    left = std::max(0, group.geometry_x - gap / 2);
                    computed_table_left = std::min(
                        gps_->dimx - 1, std::max(1, left + 1));
                } else {
                    const SettingsTabGroup &previous = ordered_tab_groups[position - 1];
                    left = (previous.geometry_x + previous.geometry_length +
                            group.geometry_x) / 2;
                }
                int right = gps_->dimx;
                if (position + 1 == ordered_tab_groups.size()) {
                    const SettingsTabGroup &previous = ordered_tab_groups[position - 1];
                    const int gap = std::max(
                        2, group.geometry_x -
                           (previous.geometry_x + previous.geometry_length));
                    right = std::min(
                        gps_->dimx,
                        group.geometry_x + group.geometry_length + (gap + 1) / 2);
                } else {
                    const SettingsTabGroup &next = ordered_tab_groups[position + 1];
                    right = (group.geometry_x + group.geometry_length +
                             next.geometry_x + 1) / 2;
                }
                computed_left[group.tab_index] = left;
                computed_right[group.tab_index] = right;
            }
            // The first complete tab strip establishes the coordinate system
            // for this logical grid. Selected/unselected widgets can move
            // their English source glyph by a cell, but their graphical tab
            // boxes do not move; never relearn the boxes from that transient
            // text offset after a page switch or scroll.
            if (!settings_tab_geometry_valid_ &&
                settings_tab_groups.size() == settings_tabs.size()) {
                settings_tab_left_ = computed_left;
                settings_tab_right_ = computed_right;
                settings_table_left_ = computed_table_left;
                settings_tab_geometry_valid_ = true;
            }
            settings_table_left = settings_tab_geometry_valid_
                ? settings_table_left_ : computed_table_left;
            for (const SettingsTabGroup &group : ordered_tab_groups) {
                Match &representative = prepared_matches_[group.representative];
                const int left = settings_tab_geometry_valid_
                    ? settings_tab_left_[group.tab_index]
                    : computed_left[group.tab_index];
                const int right = settings_tab_geometry_valid_
                    ? settings_tab_right_[group.tab_index]
                    : computed_right[group.tab_index];
                representative.layout_x = left;
                representative.layout_length = std::max(1, right - left);
                representative.layout_left = false;
                representative.layout_prepared = true;
                // Vertical placement and duplicate ownership come from the
                // native half-font flags. Unflagged/ASCII captions stay on
                // their actual row instead of being guessed into a two-row tab.
                if (!representative.native_split_text) {
                    representative.layout_y = representative.y;
                    representative.layout_pixel_y = 0;
                }
            }
        }

        // Settings pages are tables, not isolated captions. The game emits
        // each English caption at one common column but gives every run only
        // its own English width. Centering a shorter Chinese translation in
        // that run makes the apparent left edge depend on the English length
        // (and is the reason every audio/game/keybinding row used to zig-zag).
        // Recover the columns from repeated semantic anchors and assign full
        // column boxes. This deliberately covers every visible and scrolled
        // row of a page instead of maintaining a list of screenshot strings.

        // Audio: all volume and track-interval captions belong to the same
        // slider-label column, including both Fortress and Adventure values.
        auto audio_caption = [](std::string_view source) {
            return source.starts_with("Master Volume:") ||
                source.starts_with("Music Volume (Fortress):") ||
                source.starts_with("Ambience Volume (Fortress):") ||
                source.starts_with("Sound Effects Volume (Fortress):") ||
                source.starts_with("UI Volume (Fortress):") ||
                source.starts_with("Average Seconds Between Tracks/Interludes (Fortress):") ||
                source.starts_with("Music Volume (Adventure):") ||
                source.starts_with("Ambience Volume (Adventure):") ||
                source.starts_with("Sound Effects Volume (Adventure):") ||
                source.starts_with("UI Volume (Adventure):") ||
                source.starts_with("Average Seconds Between Tracks/Interludes (Adventure):");
        };
        std::vector<size_t> audio_captions;
        int audio_x = INT32_MAX;
        for (size_t i = 0; i < prepared_matches_.size(); ++i) {
            if (!audio_caption(prepared_matches_[i].source)) continue;
            audio_captions.push_back(i);
            audio_x = std::min(audio_x, prepared_matches_[i].x);
        }
        if (audio_captions.size() >= 4) {
            const int audio_width = std::max(1, gps_->dimx - audio_x - 4);
            for (size_t index : audio_captions) {
                place_left(prepared_matches_[index], audio_x, audio_width);
            }
        }

        // The lower half of Game settings contains numeric editors: a caption
        // and Range hint occupy the left cell, while + / input / - occupy the
        // value cell.  After scrolling, only four (or eventually zero)
        // boolean rows may remain; the active-page state must nevertheless
        // keep every caption out of generic per-string centering. Reconstruct
        // the table directly
        // from Range rows and the repeated raw '+' control column.  The left
        // edge comes from the tab strip's graphical padding, making it stable
        // across active tabs, scroll offsets, resolutions and translated text.
        std::vector<size_t> settings_range_matches;
        for (size_t i = 0; i < prepared_matches_.size(); ++i) {
            if (trim(prepared_matches_[i].source).starts_with("Range: ")) {
                settings_range_matches.push_back(i);
            }
        }
        if (settings_active_page_ == 2) {
            std::vector<int> value_columns;
            std::vector<int> editor_boundary_columns;
            std::vector<size_t> single_toggles;
            for (size_t i = 0; i < prepared_matches_.size(); ++i) {
                const Match &match = prepared_matches_[i];
                if (match.source != "Yes" && match.source != "No") continue;
                const int count = static_cast<int>(std::count_if(
                    prepared_matches_.begin(), prepared_matches_.end(),
                    [&match](const Match &other) {
                        return other.y == match.y &&
                            (other.source == "Yes" || other.source == "No");
                    }));
                if (count == 1) {
                    single_toggles.push_back(i);
                    value_columns.push_back(match.x);
                }
            }
            if (gps_->screen) {
                for (size_t range_index : settings_range_matches) {
                    const Match &range = prepared_matches_[range_index];
                    int closest_plus = -1;
                    for (int row = std::max(0, range.y - 2);
                         row <= std::min(gps_->dimy - 1, range.y + 1); ++row) {
                        for (int x = std::max(settings_table_left + 8, range.x);
                             x < gps_->dimx - 2; ++x) {
                            const size_t tile = static_cast<size_t>(x) * gps_->dimy + row;
                            if (gps_->screen[tile * 8] == '+') {
                                if (closest_plus < 0 || x < closest_plus) closest_plus = x;
                            }
                        }
                    }
                    if (closest_plus >= 0) {
                        editor_boundary_columns.push_back(closest_plus);
                    }
                }
            }
            if (!value_columns.empty()) {
                settings_game_value_x_ = median_column(
                    value_columns, settings_game_value_x_ >= 0
                        ? settings_game_value_x_
                        : settings_table_left + gps_->dimx / 3);
            }
            if (!editor_boundary_columns.empty()) {
                settings_game_control_x_ = median_column(
                    editor_boundary_columns, settings_game_control_x_ >= 0
                        ? settings_game_control_x_
                        : settings_game_value_x_);
            }
            if (settings_game_value_x_ < 0 && settings_game_control_x_ >= 0) {
                settings_game_value_x_ = settings_game_control_x_ + 2;
            }
            if (settings_game_control_x_ < 0 && settings_game_value_x_ >= 0) {
                settings_game_control_x_ = settings_game_value_x_;
            }
            if (settings_game_control_x_ != settings_logged_control_x_ ||
                settings_game_value_x_ != settings_logged_value_x_) {
                log_line("INFO", "Game settings columns: table=" +
                    std::to_string(settings_table_left) + " control=" +
                    std::to_string(settings_game_control_x_) + " value=" +
                    std::to_string(settings_game_value_x_) + " visible_ranges=" +
                    std::to_string(settings_range_matches.size()));
                settings_logged_control_x_ = settings_game_control_x_;
                settings_logged_value_x_ = settings_game_value_x_;
            }
            if (settings_game_control_x_ >= 0 && settings_game_value_x_ >= 0) {
                const int value_x = settings_game_value_x_;
                // '+' sits immediately before the numeric input cell, while
                // Yes/No text starts inside the value cell.  Keep these two
                // anchors separate; pooling them would let numerous numeric
                // rows drag boolean values left onto the plus button.
                const int label_control_x = settings_game_control_x_;
                const int label_x = settings_table_left + 1;
                const int label_width = std::max(1, label_control_x - label_x - 3);
                const int range_x = std::max(
                    label_x, std::min(label_control_x - 2, label_x + 4));
                const int range_width = std::max(1, label_control_x - range_x - 3);

                // Boolean rows use the same left/value cells as numeric rows.
                for (size_t toggle_index : single_toggles) {
                    Match &toggle = prepared_matches_[toggle_index];
                    size_t label_index = prepared_matches_.size();
                    for (size_t i = 0; i < prepared_matches_.size(); ++i) {
                        const Match &candidate = prepared_matches_[i];
                        if (candidate.y != toggle.y ||
                            candidate.x >= label_control_x - 2 ||
                            candidate.source == "Yes" || candidate.source == "No" ||
                            candidate.source == "Done") {
                            continue;
                        }
                        if (label_index == prepared_matches_.size() ||
                            candidate.x < prepared_matches_[label_index].x) {
                            label_index = i;
                        }
                    }
                    if (label_index != prepared_matches_.size()) {
                        place_left(prepared_matches_[label_index], label_x, label_width);
                    }
                    place_left(toggle, value_x,
                               std::max(1, gps_->dimx - value_x - 10));
                }

                // Bind each Range line to the closest translated caption in
                // the two logical rows above it.  This is based on row
                // structure rather than option names, so newly added Game
                // settings inherit the layout automatically.
                for (size_t range_index : settings_range_matches) {
                    Match &range = prepared_matches_[range_index];
                    place_left(range, range_x, range_width);
                    size_t caption_index = prepared_matches_.size();
                    int best_distance = INT32_MAX;
                    for (size_t i = 0; i < prepared_matches_.size(); ++i) {
                        const Match &candidate = prepared_matches_[i];
                        if (candidate.y > range.y || candidate.y < range.y - 2 ||
                            candidate.x >= label_control_x - 2 ||
                            trim(candidate.source).starts_with("Range: ") ||
                            candidate.source == "Yes" || candidate.source == "No" ||
                            candidate.source == "Done") {
                            continue;
                        }
                        const int distance = range.y - candidate.y;
                        if (distance < best_distance ||
                            (distance == best_distance &&
                             (caption_index == prepared_matches_.size() ||
                              candidate.x < prepared_matches_[caption_index].x))) {
                            caption_index = i;
                            best_distance = distance;
                        }
                    }
                    if (caption_index != prepared_matches_.size()) {
                        place_left(prepared_matches_[caption_index], label_x, label_width);
                    }
                }

                // One persistent page state and one cached pair of columns
                // govern every visible Game row, so the transition between
                // boolean and numeric sections cannot fall through to generic
                // per-string centering.
                for (Match &match : prepared_matches_) {
                    // Do not use a fixed y cutoff here. The scroll viewport can
                    // place its first partially visible setting on the same
                    // logical rows as the tab strip; that made exactly the
                    // row crossing y=10 jump between table alignment and
                    // generic centering. Tabs are excluded semantically below.
                    if (match.source == "Done") continue;
                    if (std::find(settings_tabs.begin(), settings_tabs.end(),
                                  std::string_view(match.source)) != settings_tabs.end()) {
                        continue;
                    }
                    const std::string source = trim(match.source);
                    if (source == "Yes" || source == "No" ||
                        (match.x >= value_x - 3 && match.x <= value_x + 12)) {
                        place_left(match, value_x,
                                   std::max(1, gps_->dimx - value_x - 10));
                    } else if (source.starts_with("Range: ")) {
                        place_left(match, range_x, range_width);
                    } else if (match.x < label_control_x - 2) {
                        place_left(match, label_x, label_width);
                    }
                }
            }
        }

        // Keybindings: complete action/key candidates are recovered from every
        // primary row before translation. Use their stable cell geometry,
        // not the starts of whichever translated fragments are currently
        // visible; the latter vary with English word length while scrolling.
        std::vector<size_t> add_buttons;
        std::vector<int> add_columns;
        for (size_t i = 0; i < prepared_matches_.size(); ++i) {
            if (prepared_matches_[i].source != "Add") continue;
            add_buttons.push_back(i);
            add_columns.push_back(prepared_matches_[i].x);
        }
        // Observing four or more primary rows is only required to learn the
        // three table columns.  Once learned, the geometry must remain in use
        // while scrolling through secondary binding rows, where DF may show
        // few or no Add buttons at all.
        if (add_buttons.size() >= 4) {
            const int observed_add_x = median_column(add_columns, gps_->dimx * 3 / 5);
            std::vector<int> action_columns;
            std::vector<int> key_centres_twice;
            const int table_floor_x = std::max(1, observed_add_x / 5);
            for (size_t add_index : add_buttons) {
                const Match &button = prepared_matches_[add_index];
                for (const Match &candidate : prepared_matches_) {
                    if (candidate.y != button.y) continue;
                    if (candidate.rule == kSettingsKeybindingActionRule &&
                            candidate.native_keybinding_table) {
                        action_columns.push_back(candidate.x);
                    } else if (candidate.rule == kSettingsKeybindingCodeRule &&
                            candidate.native_keybinding_table) {
                        key_centres_twice.push_back(
                            candidate.x * 2 + candidate.length);
                    }
                }
            }
            if (action_columns.size() >= 3 && key_centres_twice.size() >= 3) {
                if (!settings_keybinding_geometry_valid_) {
                    settings_keybinding_action_x_ =
                        median_column(action_columns, table_floor_x + 2);
                    const int key_centre_twice = median_column(
                        key_centres_twice,
                        settings_keybinding_action_x_ + observed_add_x);
                    // DF centres every key label in the same cell. Recover its
                    // left edge by mirroring the Add-column boundary around
                    // that invariant centre; this is unaffected by `r`,
                    // `Shift+F12`, or any other visible key length.
                    settings_keybinding_key_x_ = std::clamp(
                        key_centre_twice - observed_add_x,
                        settings_keybinding_action_x_ + 8,
                        observed_add_x - 6);
                    settings_keybinding_add_x_ = observed_add_x;
                    settings_keybinding_geometry_valid_ = true;
                }
            }
        }

        if (settings_active_page_ == 3) {
            // Macros has no Add/repeat table. Its shortcut explanations and
            // empty-list status still own separate native rows and one left
            // edge. Reserve them before the generic paragraph coalescer, and
            // use the same measured, complete-row layout as other UI lists.
            // Source y/length and half-font ownership remain unchanged.
            std::vector<std::vector<Match *>> instruction_rows;
            int instruction_left = gps_->dimx, instruction_right = 0;
            int instruction_bottom = -1;
            for (Match &match : prepared_matches_) {
                if (match.target.empty() || match.native_split_duplicate ||
                    !keybinding_instruction_key(match.source)) continue;
                instruction_rows.push_back({&match});
                instruction_left = std::min(instruction_left, match.x);
                instruction_right = std::max(instruction_right, match.x + match.length);
                instruction_bottom = std::max(instruction_bottom, match.y);
            }
            if (!instruction_rows.empty()) {
                for (Match &match : prepared_matches_) {
                    if (match.target.empty() || match.native_split_duplicate ||
                        match.source != "No macros created." ||
                        match.x != instruction_left || match.y <= instruction_bottom) continue;
                    instruction_rows.push_back({&match});
                    instruction_right = std::max(instruction_right, match.x + match.length);
                }
                layout_fortress_text_rows(renderer, instruction_rows,
                    instruction_left, std::min(gps_->dimx, instruction_right), true);
            }

            std::vector<int> visible_action_columns;
            for (const Match &match : prepared_matches_) {
                if (match.rule == kSettingsKeybindingActionRule && match.native_keybinding_table)
                    visible_action_columns.push_back(match.x);
            }
            const int action_column_x = settings_keybinding_geometry_valid_
                ? settings_keybinding_action_x_
                : median_column(visible_action_columns, -1);
            if (action_column_x > settings_table_left + 7) {
                const auto [sidebar_x, sidebar_width] =
                    keybinding_sidebar_span(
                        settings_table_left, action_column_x, gps_->dimx);
                for (Match &match : prepared_matches_) {
                    if (!is_keybinding_sidebar_source(match.source) ||
                        match.x >= action_column_x) {
                        continue;
                    }
                    match.layout_x = sidebar_x;
                    match.layout_length = sidebar_width;
                    match.layout_left = false;
                    match.layout_prepared = true;
                }
            }

            // The category column is graphical: its full button bounds are
            // not represented in the character grid.  Recover the rectangle
            // drawn behind each label and use its exact pixel centre.  This
            // path is independent of whether enough Add/action rows are
            // currently visible to learn the binding-table columns, so the
            // first `General` item cannot fall back to its shorter English
            // source span while the other four happen to look centred.
            const int origin_x =
                (gps_->screen_pixel_x - gps_->tile_pixel_x * gps_->dimx) / 2;
            const int origin_y =
                (gps_->screen_pixel_y - gps_->tile_pixel_y * gps_->dimy) / 2;
            for (Match &match : prepared_matches_) {
                if (!is_keybinding_sidebar_source(match.source) ||
                    match.x >= gps_->dimx / 3) {
                    continue;
                }
                const int center_x = origin_x +
                    (match.x * 2 + match.length) * gps_->tile_pixel_x / 2;
                const int center_y = origin_y +
                    match.y * gps_->tile_pixel_y + gps_->tile_pixel_y / 2;
                const auto button = graphical_button_rect(
                    graphical_rects_, center_x, center_y,
                    std::max(12, match.length + 4) * gps_->tile_pixel_x,
                    gps_->tile_pixel_y, gps_->screen_pixel_x);
                if (button) {
                    match.layout_box_pixel_x = button->x;
                    match.layout_box_pixel_width = button->w;
                }
                match.layout_left = false;
                match.layout_prepared = true;
            }
        }

        const bool keybinding_rows_visible = std::any_of(
            prepared_matches_.begin(), prepared_matches_.end(),
            [](const Match &match) {
                return match.native_keybinding_table &&
                    (match.rule == kSettingsKeybindingCodeRule ||
                     match.rule == kSettingsKeybindingActionRule);
            });

        if (keybinding_rows_visible) {
            std::vector<int> visible_key_centres_twice;
            for (const Match &match : prepared_matches_) {
                if (match.rule == kSettingsKeybindingCodeRule && match.native_keybinding_table) {
                    visible_key_centres_twice.push_back(
                        match.x * 2 + match.length);
                }
            }
            const int key_centre_twice = settings_keybinding_geometry_valid_
                ? settings_keybinding_key_x_ + settings_keybinding_add_x_
                : median_column(visible_key_centres_twice, gps_->dimx);

            // Use one shared key-column box even on the first frame, before
            // enough primary rows exist to recover all table columns. This
            // removes the last per-source-width path that made short codes
            // large and long combinations small while scrolling.
            for (Match &match : prepared_matches_) {
                if (match.rule != kSettingsKeybindingCodeRule || !match.native_keybinding_table)
                    continue;
                place_keybinding_code(
                    match, key_centre_twice, settings_font_pixels,
                    gps_->tile_pixel_y, gps_->dimx);
            }
        }

        if (settings_keybinding_geometry_valid_ && keybinding_rows_visible) {
            const int action_x = settings_keybinding_action_x_;
            const int key_x = settings_keybinding_key_x_;
            const int add_x = settings_keybinding_add_x_;
            std::vector<SDL_Rect> table_scopes;
            for (const Match &match : prepared_matches_) {
                if (!match.native_keybinding_table ||
                        (match.rule != kSettingsKeybindingCodeRule &&
                         match.rule != kSettingsKeybindingActionRule)) continue;
                const auto &box = *match.native_keybinding_table;
                if (std::none_of(table_scopes.begin(), table_scopes.end(), [&](const SDL_Rect &other) {
                        return box.x == other.x && box.y == other.y &&
                            box.w == other.w && box.h == other.h;
                    })) table_scopes.push_back(box);
            }
            for (Match &match : prepared_matches_) {
                // Only fields captured inside the current native list belong
                // to these columns. HUD names/counts and Hotkey hints never
                // borrow its geometry, even if their x coordinates agree.
                if (std::none_of(table_scopes.begin(), table_scopes.end(), [&](const SDL_Rect &box) {
                        return NativeKeybindingScope::contains(box,
                            match.x, match.x + match.length, match.y);
                    })) continue;
                if (match.rule == -5 || match.rule == -7) continue;
                // A complete keyboard field remains a key-column value even
                // when centering a short raw label (notably `Up`) puts its source x just
                // outside the statistically inferred band, or when the
                // first/last visible primary row changes while scrolling.
                if (match.rule == kSettingsKeybindingCodeRule && match.native_keybinding_table) {
                    place_keybinding_code(
                        match, key_x + add_x, settings_font_pixels,
                        gps_->tile_pixel_y, gps_->dimx);
                    continue;
                }
                if (match.rule == kSettingsKeybindingActionRule && match.native_keybinding_table) {
                    place_left(match, action_x,
                               std::max(1, key_x - action_x - 3));
                    continue;
                }
                if (match.x < action_x - 2 || match.x >= add_x - 1) {
                    continue;
                }
                if (match.x < key_x - 2) {
                    int row_origin = match.x;
                    for (const Match &part : prepared_matches_) {
                        if (part.y == match.y && part.x >= action_x - 2 &&
                            part.x < key_x - 2) {
                            row_origin = std::min(row_origin, part.x);
                        }
                    }
                    const int placed_x = action_x + std::max(0, match.x - row_origin);
                    place_left(match, placed_x,
                               std::max(1, key_x - placed_x - 3));
                } else {
                    // Column membership is authoritative even when the
                    // current frame reached this value through a generic
                    // literal match instead of the whole-cell grammar. Keep
                    // the identifier canonical and use the exact same centred
                    // key box as complete binding fields. The former place_left() fallback is
                    // what left lower-case `left`/`right` at the key cell's
                    // leading edge while every neighbouring code was centred.
                    preserve_keybinding_code(match);
                    place_keybinding_code(
                        match, key_x + add_x, settings_font_pixels,
                        gps_->tile_pixel_y, gps_->dimx);
                }
            }
        }

        // Video options form one two-column record. All English setting names
        // start at the same source column, but the generic overlay centered
        // each shorter Chinese string inside the width of that individual
        // English label. Restore the shared left edge for every video label,
        // keep range hints on one indent and align translated values separately.
        std::vector<size_t> video_labels;
        for (size_t i = 0; i < prepared_matches_.size(); ++i) {
            if (is_video_setting_source(prepared_matches_[i].source)) video_labels.push_back(i);
        }
        if (video_labels.size() >= 5) {
            int label_x = INT32_MAX;
            int first_y = INT32_MAX;
            int last_y = INT32_MIN;
            for (size_t index : video_labels) {
                const Match &match = prepared_matches_[index];
                label_x = std::min(label_x, match.x);
                first_y = std::min(first_y, match.y);
                last_y = std::max(last_y, match.y);
            }
            std::vector<size_t> value_matches;
            std::vector<int> value_columns;
            for (size_t i = 0; i < prepared_matches_.size(); ++i) {
                const Match &match = prepared_matches_[i];
                const std::string source = trim(match.source);
                if (match.y >= first_y && match.y <= last_y && match.x > label_x + 20 &&
                    (source == "Yes" || source == "No" || source == "Auto" ||
                     source == "Automatic")) {
                    value_matches.push_back(i);
                    value_columns.push_back(match.x);
                }
            }
            int value_x = gps_->dimx - 40;
            if (!value_columns.empty()) {
                std::sort(value_columns.begin(), value_columns.end());
                value_x = value_columns[value_columns.size() / 2];
            }
            const int label_right = value_x - 3;
            const int label_width = std::max(1, label_right - label_x);
            for (size_t index : video_labels) {
                Match &match = prepared_matches_[index];
                match.layout_x = label_x;
                match.layout_length = label_width;
                match.layout_left = true;
            }
            for (size_t index : value_matches) {
                Match &match = prepared_matches_[index];
                match.layout_x = value_x;
                match.layout_length = std::max(1, gps_->dimx - value_x - 12);
                match.layout_left = true;
            }
            const int range_x = std::min(label_x + 2, gps_->dimx - 1);
            for (Match &match : prepared_matches_) {
                if (match.y >= first_y && match.y <= last_y + 2 &&
                    match.source.starts_with("Range: ")) {
                    match.layout_x = range_x;
                    match.layout_length = std::max(1, label_width - 2);
                    match.layout_left = true;
                }
            }
        }
    }
}
