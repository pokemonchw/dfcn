#pragma once
#include "native_display_discovery.h"

// Exact image-owned object identity. A type, a register number, or an
// unproved displacement is never an interchangeable global value.
namespace dfcn::pe_runtime::global_value_detail {
struct Operand {
    unsigned destination = 16;
    uint32_t root = 0; // Canonical named global root, not target RVA.
    bool shape() const { return destination < 16; }
};
inline Operand form(const display_decode::hde64s &op) {
    if (!op.rex_w || op.p_66 || op.p_67 || op.p_rep || op.p_lock || op.p_seg) return {};
    const unsigned reg = op.modrm_reg + (op.rex_r ? 8 : 0), rm = op.modrm_rm + (op.rex_b ? 8 : 0);
    unsigned destination = 16;
    if ((op.opcode == 0x89 || op.opcode == 0x8b) && op.modrm_mod == 3) {
        destination = op.opcode == 0x89 ? rm : reg;
    } else if (op.opcode == 0x8d && op.modrm_mod == 0 && op.modrm_rm == 5 && !(op.flags & F_SIB))
        destination = reg;
    if (destination != 1 && destination != 2 && destination != 8 && destination != 9) return {};
    return {destination, 0};
}
class Evidence {
public:
    virtual ~Evidence() = default;
    virtual Operand operand(bool target, uint32_t owner, uint32_t instruction,
        const display_decode::hde64s &op) = 0;
};
} // namespace dfcn::pe_runtime::global_value_detail
