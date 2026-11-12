static bool native_dfhack_bind_lua_stack_elf(NativeDfhackLuaOutputApi &api) {
    const auto symbol = [](const char *name) { return dlsym(RTLD_DEFAULT, name); };
    api.gettop = reinterpret_cast<decltype(api.gettop)>(symbol("_Z10lua_gettopP9lua_State"));
    api.settop = reinterpret_cast<decltype(api.settop)>(symbol("_Z10lua_settopP9lua_Statei"));
    api.checkstack = reinterpret_cast<decltype(api.checkstack)>(symbol("_Z14lua_checkstackP9lua_Statei"));
    api.type = reinterpret_cast<decltype(api.type)>(symbol("_Z8lua_typeP9lua_Statei"));
    api.isinteger = reinterpret_cast<decltype(api.isinteger)>(symbol("_Z13lua_isintegerP9lua_Statei"));
    api.tointegerx = reinterpret_cast<decltype(api.tointegerx)>(symbol("_Z14lua_tointegerxP9lua_StateiPi"));
    api.tolstring = reinterpret_cast<decltype(api.tolstring)>(symbol("_Z13lua_tolstringP9lua_StateiPm"));
    api.tocfunction = reinterpret_cast<decltype(api.tocfunction)>(symbol("_Z15lua_tocfunctionP9lua_Statei"));
    api.getstack = reinterpret_cast<decltype(api.getstack)>(symbol("_Z12lua_getstackP9lua_StateiP9lua_Debug"));
    api.getinfo = reinterpret_cast<decltype(api.getinfo)>(symbol("_Z11lua_getinfoP9lua_StatePKcP9lua_Debug"));
    api.getlocal = reinterpret_cast<decltype(api.getlocal)>(symbol("_Z12lua_getlocalP9lua_StatePK9lua_Debugi"));
    return api.gettop && api.settop && api.checkstack && api.type && api.isinteger &&
        api.tointegerx && api.tolstring && api.tocfunction && api.getstack &&
        api.getinfo && api.getlocal;
}

template<size_t Count>
static bool native_dfhack_lua_registration_elf(const unsigned char *base,
        uintptr_t table, const std::array<const char *, Count> &names,
        const std::array<uintptr_t, Count> &functions) {
    if (!base || !native_dfhack_lua_memory(base + table, Count * 16)) return false;
    for (size_t index = 0; index < Count; ++index) {
        const char *name = nullptr;
        const void *function = nullptr;
        std::memcpy(&name, base + table + index * 16, sizeof(name));
        std::memcpy(&function, base + table + index * 16 + 8, sizeof(function));
        const auto text = native_dfhack_lua_text(name, 32);
        if (!text || *text != names[index] || function != base + functions[index]) return false;
    }
    return true;
}

static bool native_dfhack_bind_lua_output(void *entry_pointer) {
    if (g_native_dfhack_lua_output_bound.load(std::memory_order_acquire)) return true;
    NativeDfhackLuaOutputApi api;
    if (!native_dfhack_bind_lua_stack_elf(api)) return false;
    api.query = reinterpret_cast<DfcnQueryDfhackCommandContextV1>(dlsym(RTLD_DEFAULT,
        "dfcn_get_dfhack_command_context_v1"));
    api.query_v2 = reinterpret_cast<DfcnQueryDfhackCommandContextV2>(dlsym(RTLD_DEFAULT,
        "dfcn_get_dfhack_command_context_v2"));
    if (!api.query) return false;
    Dl_info image{};
    if (!dladdr(entry_pointer, &image) || !image.dli_fbase || !image.dli_fname) return false;
    const auto *base = static_cast<const unsigned char *>(image.dli_fbase);
    // Official 53.16-r2 immutable dfhack_funcs registration.
    constexpr std::array<const char *, 5> names{"print", "println", "printerr", "color", "is_interactive"};
    constexpr std::array<uintptr_t, 5> functions{0x5e0e10,0x5e10a0,0x5e0b20,0x5dd2b0,0x5dd330};
    constexpr std::array<uintptr_t, 5> current_functions{0x7e73e0,0x7e7670,0x7e70f0,0x7e3a00,0x7e3a80};
    const bool current = native_dfhack_lua_registration_elf(base, 0x1059b40, names, current_functions);
    if (!current && !native_dfhack_lua_registration_elf(base, 0xc106a0, names, functions)) return false;
    const uintptr_t println = current ? 0x7e7670 : 0x5e10a0;
    constexpr std::array<unsigned char, 11> prefix{0xf3,0x0f,0x1e,0xfa,0x41,0x56,0x41,0x55,0x41,0x54,0x55};
    NativePatchPages executable;
    if (!collect_native_patch_pages(executable, reinterpret_cast<uintptr_t>(base + println),
            prefix.size(), native_patch_page_size(), true, "DFHack Lua println producer") ||
            std::memcmp(base + println, prefix.data(), prefix.size())) return false;
    api.println = reinterpret_cast<NativeDfhackLuaCFunction>(const_cast<unsigned char *>(base + println));
    const auto scripts = std::filesystem::absolute(image.dli_fname).parent_path() / "scripts";
    const auto key = [](const std::filesystem::path &path) {
        return native_dfhack_lua_source_key(path.generic_string());
    };
    api.item_source = key(scripts / "item.lua");
    api.wheelbarrow_source = key(scripts / "fix" / "empty-wheelbarrows.lua");
    api.empty_bin_source = key(scripts / "empty-bin.lua");
    api.workorder_source = key(scripts / "workorder.lua");
    api.launcher_source = key(scripts / "gui" / "launcher.lua");
    g_native_dfhack_lua_output_api = std::move(api);
    g_native_dfhack_lua_output_bound.store(true, std::memory_order_release);
    return true;
}
