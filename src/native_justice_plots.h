#pragma once

#include <cstdint>
#include <optional>
#include <string>
#include <string_view>

namespace dfcn {

enum class NativeJusticePlotField : uint8_t {
    Title, OrganizationLabel, OrganizationName, Counter
};

struct NativeJusticePlotCaption {
    NativeJusticePlotField field = NativeJusticePlotField::Title;
    std::string complete_source;
    std::optional<std::string> person_target;
    std::optional<bool> sabotage_person;
};

static std::optional<NativeJusticePlotCaption> native_justice_plot_caption(
    uintptr_t caller, uintptr_t address, std::string_view displayed);

} // namespace dfcn
