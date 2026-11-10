static bool bind_native_dfhack_sitemap_lua(void *entry_pointer) {
    if (g_native_dfhack_sitemap_lua_bound.load(std::memory_order_acquire)) return true;
    NativeDfhackSitemapLuaApi api;
    if (!native_dfhack_bind_lua_stack_elf(api.stack)) return false;
    const auto symbol = [](const char *name) { return dlsym(RTLD_DEFAULT, name); };
    api.pushstring = reinterpret_cast<decltype(api.pushstring)>(symbol("_Z14lua_pushstringP9lua_StatePKc"));
    api.rawget = reinterpret_cast<decltype(api.rawget)>(symbol("_Z10lua_rawgetP9lua_Statei"));
    api.rawgeti = reinterpret_cast<decltype(api.rawgeti)>(symbol("_Z11lua_rawgetiP9lua_Stateix"));
    api.rawlen = reinterpret_cast<decltype(api.rawlen)>(symbol("_Z10lua_rawlenP9lua_Statei"));
    api.getmetatable = reinterpret_cast<decltype(api.getmetatable)>(symbol("_Z16lua_getmetatableP9lua_Statei"));
    api.topointer = reinterpret_cast<decltype(api.topointer)>(symbol("_Z13lua_topointerP9lua_Statei"));
    api.rawequal = reinterpret_cast<decltype(api.rawequal)>(symbol("_Z12lua_rawequalP9lua_Stateii"));
    api.toboolean = reinterpret_cast<decltype(api.toboolean)>(symbol("_Z13lua_tobooleanP9lua_Statei"));
    api.getupvalue = reinterpret_cast<decltype(api.getupvalue)>(symbol("_Z14lua_getupvalueP9lua_Stateii"));
    if (!api.pushstring || !api.rawget || !api.rawgeti || !api.rawlen || !api.getmetatable ||
            !api.topointer || !api.rawequal || !api.toboolean || !api.getupvalue) return false;
    Dl_info image{};
    if (!dladdr(entry_pointer, &image) || !image.dli_fbase || !image.dli_fname) return false;
    const auto *base = static_cast<const unsigned char *>(image.dli_fbase);
    constexpr std::array<const char *, 3> names{"readMapPortTile", "paintString", "fillRect"};
    constexpr std::array<uintptr_t, 3> functions{0x5f3530,0x5f46e0,0x5f3f80};
    if (!native_dfhack_lua_registration_elf(base, 0xc10aa0, names, functions)) return false;
    constexpr std::array<unsigned char, 8> prefix{0xf3,0x0f,0x1e,0xfa,0x41,0x57,0x31,0xc9};
    NativePatchPages executable;
    if (!collect_native_patch_pages(executable, reinterpret_cast<uintptr_t>(base + 0x5f46e0),
            prefix.size(), native_patch_page_size(), true, "DFHack complete text producer") ||
            std::memcmp(base + 0x5f46e0, prefix.data(), prefix.size())) return false;
    api.paint_string = reinterpret_cast<NativeDfhackLuaCFunction>(const_cast<unsigned char *>(base + 0x5f46e0));
    const auto hack = std::filesystem::absolute(image.dli_fname).parent_path();
    const auto key = [](const std::filesystem::path &path) {
        return native_dfhack_lua_source_key(path.generic_string());
    };
    api.painter_source = key(hack / "lua" / "gui.lua");
    api.list_source = key(hack / "lua" / "gui" / "widgets" / "list.lua");
    api.filtered_source = key(hack / "lua" / "gui" / "widgets" / "filtered_list.lua");
    api.sitemap_source = key(hack / "scripts" / "gui" / "sitemap.lua");
    api.notify_source = key(hack / "scripts" / "gui" / "notify.lua");
    api.zone_source = key(hack / "lua" / "plugins" / "zone.lua");
    api.movegoods_source = key(hack / "scripts" / "internal" / "caravan" / "movegoods.lua");
    api.label_source = key(hack / "lua" / "gui" / "widgets" / "labels" / "label.lua");
    api.wrapped_source = key(hack / "lua" / "gui" / "widgets" / "labels" / "wrapped_label.lua");
    api.control_panel_source = key(hack / "scripts" / "gui" / "control-panel.lua");
    api.cycle_source = key(hack / "lua" / "gui" / "widgets" / "labels" / "cycle_hotkey_label.lua");
    api.overlay_source = key(hack / "lua" / "plugins" / "overlay.lua");
    api.asyncexport_source = key(hack / "scripts" / "internal" / "exportlegends" / "asyncexport.lua");
    api.prioritize_source = key(hack / "scripts" / "prioritize.lua");
    api.filterselection_source = key(hack / "lua" / "plugins" / "buildingplan" / "filterselection.lua");
    api.planner_source = key(hack / "lua" / "plugins" / "buildingplan" / "planneroverlay.lua");
    api.mechanisms_source = key(hack / "lua" / "plugins" / "buildingplan" / "mechanisms.lua");
    api.itemselection_source = key(hack / "lua" / "plugins" / "buildingplan" / "itemselection.lua");
    api.spectate_source = key(hack / "lua" / "plugins" / "spectate.lua");
    api.autotraining_source = key(hack / "scripts" / "gui" / "autotraining.lua");
    api.autofarm_source = key(hack / "scripts" / "gui" / "autofarm.lua");
    g_native_dfhack_sitemap_lua_api = std::move(api);
    g_native_dfhack_sitemap_lua_bound.store(true, std::memory_order_release);
    return true;
}
