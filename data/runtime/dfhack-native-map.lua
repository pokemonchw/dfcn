-- Share the game's complete local-map viewports at the final overlay boundary.
-- UI buffers remain under DFCN's text isolation. No tile planes are copied or
-- replayed: writes to any viewport layer go straight to the native renderer.
local overlay = require('plugins.overlay')
local previous = dfhack.internal.dfcn_native_map_bridge
local original = overlay.render_viewscreen_widgets
if previous and original == previous.wrapper then
    original = previous.original
end

local function render_with_native_map(...)
    local gps = df.global.gps
    local world = df.global.world
    if not gps or not world or not dfhack.isMapLoaded() then
        return original(...)
    end
    -- world.viewport is the map producer's binding. gps can already have been
    -- rebound by an outer render interpose, so it is not a source of truth.
    local viewport = world.viewport
    local main = viewport.main_viewport
    if not main then return original(...) end

    local saved = {[0] = gps.main_viewport}
    local native = {[0] = main}
    local changed = saved[0] ~= native[0]
    for i = 0, 7 do
        saved[i + 1] = gps.lower_viewport[i]
        native[i + 1] = viewport.lower_viewport[i]
        changed = changed or saved[i + 1] ~= native[i + 1]
    end
    if not changed then return original(...) end

    -- Keep iteration over gps.viewport consistent with its main/lower aliases.
    -- Borrow existing entries only; never resize or substitute vector storage
    -- owned by DF or an enclosing plugin. Unrelated viewports stay untouched.
    local entries = {}
    for i = 0, #gps.viewport - 1 do
        local value = gps.viewport[i]
        for j = 0, 8 do
            if saved[j] and value == saved[j] and value ~= native[j] then
                entries[#entries + 1] = {index = i, saved = value, native = native[j]}
                break
            end
        end
    end

    local function restore()
        -- Restore aliases, not cell contents. Preserve deliberate binding
        -- changes made by a plugin and always unwind after a Lua error.
        if gps.main_viewport == native[0] then gps.main_viewport = saved[0] end
        for i = 0, 7 do
            if gps.lower_viewport[i] == native[i + 1] then
                gps.lower_viewport[i] = saved[i + 1]
            end
        end
        for _, entry in ipairs(entries) do
            if entry.index < #gps.viewport and gps.viewport[entry.index] == entry.native then
                gps.viewport[entry.index] = entry.saved
            end
        end
    end

    return dfhack.with_finalize(restore, function(...)
        gps.main_viewport = native[0]
        for i = 0, 7 do gps.lower_viewport[i] = native[i + 1] end
        for _, entry in ipairs(entries) do gps.viewport[entry.index] = entry.native end
        return original(...)
    end, ...)
end

-- Module rescans keep this exported function; repeat installation replaces our
-- own wrapper instead of stacking it. No mod names or tile IDs are special.
overlay.render_viewscreen_widgets = render_with_native_map
dfhack.internal.dfcn_native_map_bridge = {original = original, wrapper = render_with_native_map}

if (...) == '--install' then
    -- Use DFHack's actual config path, including redirected user-data installs.
    -- Keep this interpreted compatibility module independent of game DLL loads.
    local root = dfhack.getConfigPath():gsub('\\', '/')
    local directory = root .. '/dfcn'
    local init_directory = root .. '/init'
    dfhack.filesystem.mkdir(directory)
    dfhack.filesystem.mkdir(init_directory)
    local source = debug.getinfo(1, 'S').source:sub(2)
    local input = assert(io.open(source, 'rb'))
    local content = input:read('*a')
    input:close()
    local destination = directory .. '/native-map.lua'
    local function publish(path, payload)
        local current = io.open(path, 'rb')
        if current then
            local installed = current:read('*a')
            current:close()
            if installed == payload then return end
        end
        local output = assert(io.open(path, 'wb'))
        assert(output:write(payload))
        assert(output:close())
    end
    publish(destination, content)
    publish(init_directory .. '/dfhack-dfcn-native-map.init',
        '# DFCN: share native map viewports with all DFHack overlays.\n' ..
        'lua -f "' .. destination .. '"\n')
    print('DFCN native map compatibility installed: ' .. destination)
end
