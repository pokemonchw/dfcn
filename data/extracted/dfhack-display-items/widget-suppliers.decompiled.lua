-- Bytecode decompilation of the installed DFHack scripts, for source extraction.
-- DFHack contributors; see third_party/dfhack-help.LICENSE.
-- internal/caravan/common.lua, shared text and appraisal suppliers
local dialogs = require("gui.dialogs")
local predicates = reqscript("internal/caravan/predicates")
local utils = require("utils")
local widgets = require("gui.widgets")
CH_UP = string.char(30)
CH_DN = string.char(31)
CH_MONEY = string.char(15)
CH_EXCEPTIONAL = string.char(240)
SOME_PEN = dfhack.pen.parse({
  ch = ":",
  fg = COLOR_YELLOW
})
ALL_PEN = dfhack.pen.parse({
  ch = string.char(251),
  fg = COLOR_LIGHTGREEN
})

function add_words(words, str)
  for word in dfhack.toSearchNormalized(str):gmatch("[%w]+") do
    table.insert(words, word)
  end
end

function make_search_key(str)
  local words = {}
  add_words(words, str)
  return table.concat(words, " ")
end

function make_container_search_key(item, desc)
  local words = {}
  add_words(words, desc)
  for _, contained_item in ipairs(dfhack.items.getContainedItems(item)) do
    add_words(words, dfhack.items.getReadableDescription(contained_item))
  end
  return table.concat(words, " ")
end

function get_broker_skill()
  local broker = dfhack.units.getUnitByNobleRole("broker")
  local interface_trade = df.global.game.main_interface.trade
  if interface_trade.open == true and interface_trade.choosing_merchant == false and interface_trade.fortress_trader ~= nil then
    broker = interface_trade.fortress_trader
  end
  if not broker then
    return 0
  end
  for _, skill in ipairs(broker.status.current_soul.skills) do
    if skill.id == df.job_skill.APPRAISAL then
      return skill.rating
    end
  end
  return 0
end

function get_threshold(broker_skill)
  if broker_skill <= df.skill_rating.Dabbling then
    return 0
  end
  if broker_skill <= df.skill_rating.Novice then
    return 10
  end
  if broker_skill <= df.skill_rating.Adequate then
    return 25
  end
  if broker_skill <= df.skill_rating.Competent then
    return 50
  end
  if broker_skill <= df.skill_rating.Skilled then
    return 100
  end
  if broker_skill <= df.skill_rating.Proficient then
    return 200
  end
  if broker_skill <= df.skill_rating.Talented then
    return 500
  end
  if broker_skill <= df.skill_rating.Adept then
    return 1000
  end
  if broker_skill <= df.skill_rating.Expert then
    return 1500
  end
  if broker_skill <= df.skill_rating.Professional then
    return 2000
  end
  if broker_skill <= df.skill_rating.Accomplished then
    return 2500
  end
  if broker_skill <= df.skill_rating.Great then
    return 3000
  end
  if broker_skill <= df.skill_rating.Master then
    return 4000
  end
  if broker_skill <= df.skill_rating.HighMaster then
    return 5000
  end
  if broker_skill <= df.skill_rating.GrandMaster then
    return 10000
  end
  return math.maxinteger
end

local function estimate(value, round_base, granularity)
  local rounded = (value + round_base) // granularity * granularity
  local clamped = math.max(rounded, granularity)
  return dfhack.formatInt(clamped)
end

function obfuscate_value(value, threshold)
  threshold = threshold or get_threshold(get_broker_skill())
  if value < threshold then
    return dfhack.formatInt(value)
  end
  threshold = threshold + 50
  if value <= threshold then
    return ("~%s"):format(estimate(value, 5, 10))
  end
  if value <= threshold * 3 then
    return ("~%s"):format(estimate(value, 50, 100))
  end
  if value <= threshold * 30 then
    return ("~%s"):format(estimate(value, 500, 1000))
  end
  return ("%s?"):format(estimate(threshold * 30, 999, 1000))
end

function get_perceived_value(item, caravan_state)
  local value = dfhack.items.getValue(item, caravan_state)
  for _, contained_item in ipairs(dfhack.items.getContainedItems(item)) do
    value = value + dfhack.items.getValue(contained_item, caravan_state)
    for _, contained_contained_item in ipairs(dfhack.items.getContainedItems(contained_item)) do
      value = value + dfhack.items.getValue(contained_contained_item, caravan_state)
    end
  end
  return value
end


-- gui/widgets/filtered_list.lua, including the no-match branch
local utils = require("utils")
local Widget = require("gui.widgets.widget")
local EditField = require("gui.widgets.edit_field")
local List = require("gui.widgets.list")
local getval = utils.getval

local function map_opttab(tab, idx)
  if tab then
    return tab[idx]
  else
    return idx
  end
end

FilteredList = defclass(FilteredList, Widget)
FilteredList.ATTRS({
  edit_below = false,
  edit_key = DEFAULT_NIL,
  edit_ignore_keys = DEFAULT_NIL,
  edit_on_char = DEFAULT_NIL,
  edit_on_change = DEFAULT_NIL
})

function FilteredList:init(info)
  local on_change = self:callback("onFilterChange")
  if self.edit_on_change then
    function on_change(text)
      self.edit_on_change(text)
      
      self:onFilterChange(text)
    end
  end
  self.edit = EditField({
    text_pen = info.edit_pen or info.cursor_pen,
    frame = {
      l = info.icon_width,
      t = 0,
      h = 1
    },
    on_change = on_change,
    on_char = self.edit_on_char,
    key = self.edit_key,
    ignore_keys = self.edit_ignore_keys
  })
  self.list = List({
    frame = {t = 2},
    text_pen = info.text_pen,
    cursor_pen = info.cursor_pen,
    inactive_pen = info.inactive_pen,
    icon_pen = info.icon_pen,
    row_height = info.row_height,
    scroll_keys = info.scroll_keys,
    icon_width = info.icon_width
  })
  if self.edit_below then
    self.edit.frame = {
      l = info.icon_width,
      b = 0,
      h = 1
    }
    self.list.frame = {t = 0, b = 2}
  end
  if info.on_select then
    function self.list.on_select()
      return info.on_select(self:getSelected())
    end
  end
  if info.on_submit then
    function self.list.on_submit()
      return info.on_submit(self:getSelected())
    end
  end
  if info.on_submit2 then
    function self.list.on_submit2()
      return info.on_submit2(self:getSelected())
    end
  end
  if info.on_double_click then
    function self.list.on_double_click()
      return info.on_double_click(self:getSelected())
    end
  end
  if info.on_double_click2 then
    function self.list.on_double_click2()
      return info.on_double_click2(self:getSelected())
    end
  end
  self.not_found = Label({
    visible = true,
    text = info.not_found_label or "No matches",
    text_pen = COLOR_LIGHTRED,
    frame = {
      l = info.icon_width,
      t = self.list.frame.t
    }
  })
  self:addviews({
    self.edit,
    self.list,
    self.not_found
  })
  if info.choices then
    self:setChoices(info.choices, info.selected)
  else
    self.choices = {}
  end
end

function FilteredList:getChoices()
  return self.choices
end

function FilteredList:getVisibleChoices()
  return self.list.choices
end

function FilteredList:setChoices(choices, pos)
  choices = choices or {}
  self.edit:setText("")
  self.list:setChoices(choices, pos)
  self.choices = self.list.choices
  self.not_found.visible = #choices == 0
end

function FilteredList:submit()
  return self.list:submit()
end

function FilteredList:submit2()
  return self.list:submit2()
end

function FilteredList:canSubmit()
  return not self.not_found.visible
end

function FilteredList:getSelected()
  local i, v = self.list:getSelected()
  if i then
    return map_opttab(self.choice_index, i), v
  end
end

function FilteredList:getContentWidth()
  return self.list:getContentWidth()
end

function FilteredList:getContentHeight()
  return self.list:getContentHeight() + 2
end

function FilteredList:getFilter()
  return self.edit.text, self.list.choices
end

function FilteredList:setFilter(filter, pos)
  local choices = self.choices
  local cidx
  filter = filter or ""
  if filter ~= self.edit.text then
    self.edit:setText(filter)
  end
  if filter ~= "" then
    local tokens = filter:split()
    local ipos = pos
    choices = {}
    cidx = {}
    pos = nil
    for i, v in ipairs(self.choices) do
      local search_key = getval(v.search_key)
      if not search_key then
        if type(v.text) ~= "table" then
          search_key = v.text
        else
          local texts = {}
          for _, token in ipairs(v.text) do
            table.insert(texts, type(token) == "string" and token or getval(token.text) or "")
          end
          search_key = table.concat(texts, " ")
        end
      end
      if utils.search_text(search_key, tokens) then
        table.insert(choices, v)
        cidx[#choices] = i
        if ipos == i then
          pos = #choices
        end
      end
    end
  end
  self.choice_index = cidx
  self.list:setChoices(choices, pos)
  self.not_found.visible = #choices == 0
end

function FilteredList:onFilterChange(text)
  self:setFilter(text)
end

return FilteredList
