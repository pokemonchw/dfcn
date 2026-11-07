// AutoTrain:getSquads() supplies a direct List, not the unit FilteredList.
// Its choice ID establishes the actual squad.name and alias owners before
// any English prefix is eligible for generated-name translation.
static std::optional<NativeDfhackAutotrainingSquadText> native_dfhack_autotraining_squad_text(
        NativeDfhackLuaState *state, const NativeDfhackLuaDebug &frame,
        std::string_view painted_full) {
    const auto &api = g_native_dfhack_sitemap_lua_api;
    const auto &stack = api.stack;
    NativeDfhackOverlayLuaStackRestore restore{state, stack.gettop(state)};
    const char *local_name = stack.getlocal(state, &frame, 1);
    if (!local_name || std::strcmp(local_name, "self") || stack.type(state, -1) != 5)
        return std::nullopt;
    const int list = stack.gettop(state);
    if (!native_dfhack_overlay_class_method(state, list, "onRenderBody", api.list_source, 236) ||
            !native_dfhack_sitemap_raw_field(state, list, "view_id") ||
            native_dfhack_overlay_lua_string(state, -1) != std::optional<std::string>("squad_list"))
        return std::nullopt;
    stack.settop(state, list);
    if (!native_dfhack_sitemap_raw_field(state, list, "parent_view") || stack.type(state, -1) != 5)
        return std::nullopt;
    const int window = stack.gettop(state);
    if (!native_dfhack_overlay_class_method(state, window, "getSquads", api.autotraining_source, 28) ||
            !native_dfhack_sitemap_raw_field(state, window, "frame_title") ||
            native_dfhack_overlay_lua_string(state, -1) != std::optional<std::string>("Training Setup"))
        return std::nullopt;
    stack.settop(state, window);
    if (!native_dfhack_sitemap_raw_field(state, window, "parent_view") || stack.type(state, -1) != 5)
        return std::nullopt;
    const int screen = stack.gettop(state);
    if (!native_dfhack_overlay_class_method(state, screen, "init", api.autotraining_source, 252) ||
            !native_dfhack_sitemap_raw_field(state, screen, "focus_path") ||
            native_dfhack_overlay_lua_string(state, -1) != std::optional<std::string>("autotrain"))
        return std::nullopt;
    stack.settop(state, screen);
    // callback("toggleSquad") is curry(method, self). Its original method
    // must be this file's 45-49 function and its self the actual parent.
    if (!native_dfhack_sitemap_raw_field(state, list, "on_submit") ||
            stack.type(state, -1) != 6 || !stack.tocfunction(state, -1)) return std::nullopt;
    const int curried = stack.gettop(state);
    if (!api.getupvalue(state, curried, 1) || !stack.isinteger(state, -1)) return std::nullopt;
    int valid = 0;
    if (stack.tointegerx(state, -1, &valid) != 2 || !valid) return std::nullopt;
    stack.settop(state, curried);
    NativeDfhackLuaDebug producer{};
    if (!api.getupvalue(state, curried, 2) || stack.type(state, -1) != 6 ||
            !stack.getinfo(state, ">Su", &producer) || producer.isvararg || producer.nparams != 3 ||
            producer.linedefined != 45 || producer.lastlinedefined != 49) return std::nullopt;
    const auto source = native_dfhack_lua_text(producer.source, 32768);
    if (!source || native_dfhack_lua_source_key(*source) != api.autotraining_source)
        return std::nullopt;
    stack.settop(state, curried);
    if (!api.getupvalue(state, curried, 3) || stack.type(state, -1) != 5 ||
            !api.rawequal(state, -1, window) || api.getupvalue(state, curried, 4)) return std::nullopt;
    stack.settop(state, screen);
    if (!native_dfhack_overlay_local(state, frame, "obj") || stack.type(state, -1) != 5)
        return std::nullopt;
    const int choice = stack.gettop(state);
    if (!native_dfhack_sitemap_raw_field(state, choice, "text") ||
            native_dfhack_overlay_lua_string(state, -1) !=
                std::optional<std::string>(std::string(painted_full))) return std::nullopt;
    stack.settop(state, choice);
    if (!native_dfhack_sitemap_raw_field(state, choice, "id") || !stack.isinteger(state, -1))
        return std::nullopt;
    valid = 0;
    const int64_t id = stack.tointegerx(state, -1, &valid);
    if (!valid || id < 0 || id > INT32_MAX) return std::nullopt;

    const uintptr_t base = native_history_profile_base();
    uintptr_t squad = 0;
    NativeDfhackAutotrainingSquadText result;
    std::string alias;
    if (!base || !native_history_find_structure_id(native_history_global(0x24e37c0),
                0, static_cast<int32_t>(id), squad) || !squad ||
            !native_history_copy_string(native_history_layout::squad_alias_offset.address(
                squad, 0, sizeof(NativeString), sizeof(NativeString)), alias) ||
            !capture_native_history_name(base, native_history_object_member(
                squad, "squad", "name.first_name", sizeof(NativeString)), result.generated_name))
        return std::nullopt;
    const auto generated = reconstruct_site_english_name(result.generated_name);
    if (!generated || generated->empty()) return std::nullopt;
    const std::string complete = *generated + (alias.empty() ? std::string{} : " (" + alias + ")");
    // A stale choice, renamed squad or mismatched formatter cannot borrow
    // current name metadata merely because the ID still resolves.
    if (complete != painted_full) return std::nullopt;
    result.squad_id = static_cast<int32_t>(id);
    result.generated_source = *generated;
    return result;
}
