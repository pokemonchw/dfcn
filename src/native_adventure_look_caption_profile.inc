// Both configured Windows 53.16 LOOK renderers have the same caller frame:
// the current ui_look_list index is saved at rbp-0x70 at every iteration.
// Steam 0x7f40a3/0x7f53b7 and Classic 0x7f1923/0x7f2c37 write that slot.
// Source rbp-0x30, rbp-0x10, rbp-0x58 and rbp+0x10 therefore select
// offsets -0x40, -0x60, -0x18 and -0x80 respectively. native_pe_address
// resolves each independently extracted Classic call from its Steam RVA.
// The primary call is shared by terrain/item/unit/building/vermin/flow and
// building-item branches; the native record decides its actual domain.
profile.adventure_look_caption_sites = {
    {native_pe_address(profile.base, 0x7f41a3), -0x40},
    {native_pe_address(profile.base, 0x7f4ed7), -0x60, NativeMapHoverKind::Spoor},
    {native_pe_address(profile.base, 0x7f53a3), -0x60, NativeMapHoverKind::Spatter},
    {native_pe_address(profile.base, 0x7f4900), -0x18, NativeMapHoverKind::Fire},
    {native_pe_address(profile.base, 0x7f498f), -0x18, NativeMapHoverKind::Campfire},
    {native_pe_address(profile.base, 0x7f4f7c), -0x80, NativeMapHoverKind::Water,
        NativeMapHoverFragment::LiquidPrefix},
    {native_pe_address(profile.base, 0x7f4faa), -0x80, NativeMapHoverKind::Water,
        NativeMapHoverFragment::LiquidPrefix},
    {native_pe_address(profile.base, 0x7f4fd1), -0x80, NativeMapHoverKind::Water,
        NativeMapHoverFragment::LiquidPrefix},
    {native_pe_address(profile.base, 0x7f4ff4), -0x80, NativeMapHoverKind::Water,
        NativeMapHoverFragment::LiquidPrefix},
    {native_pe_address(profile.base, 0x7f5033), -0x18, NativeMapHoverKind::Water,
        NativeMapHoverFragment::LiquidAmount},
    {native_pe_address(profile.base, 0x7f5057), -0x80, NativeMapHoverKind::Water,
        NativeMapHoverFragment::LiquidSuffix},
    {native_pe_address(profile.base, 0x7f5119), -0x80, NativeMapHoverKind::Magma,
        NativeMapHoverFragment::LiquidPrefix},
    {native_pe_address(profile.base, 0x7f513c), -0x80, NativeMapHoverKind::Magma,
        NativeMapHoverFragment::LiquidPrefix},
    {native_pe_address(profile.base, 0x7f517b), -0x18, NativeMapHoverKind::Magma,
        NativeMapHoverFragment::LiquidAmount},
    {native_pe_address(profile.base, 0x7f519f), -0x80, NativeMapHoverKind::Magma,
        NativeMapHoverFragment::LiquidSuffix}};
