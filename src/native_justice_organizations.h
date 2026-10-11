#pragma once

#include <SDL2/SDL.h>
#include <cstdint>
#include <optional>
#include <string>

namespace dfcn {

enum class NativeJusticeOrganizationField : uint8_t {
    None, Title, NodeRole, NodeName, NodeTail, SelectedLabel, SelectedName, Members
};

// Owned evidence from the native organization renderer. A node's displayed
// initials are distinct from the complete name held by its actual actor.
struct NativeJusticeOrganizationCaption {
    NativeJusticeOrganizationField field = NativeJusticeOrganizationField::None;
    std::optional<SDL_Rect> node_box;
    std::string person_source;
    std::optional<std::string> person_target;
    std::optional<std::string> initials_target;
};

} // namespace dfcn
