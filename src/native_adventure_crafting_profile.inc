// Both configured PE renderers were reconstructed independently in
// data/extracted/adventure-crafting. Their fourteen addst calls own every
// caption/description/requirement/item and finite message in modes 0..3.
profile.adventure_crafting_fields = {
    {native_pe_address(profile.base, 0x27bfe7), NativeAdventureCraftingRole::Message},
    {native_pe_address(profile.base, 0x27c2e4), NativeAdventureCraftingRole::ReagentPrompt},
    {native_pe_address(profile.base, 0x27c357), NativeAdventureCraftingRole::Message},
    {native_pe_address(profile.base, 0x27c3bf), NativeAdventureCraftingRole::Message},
    {native_pe_address(profile.base, 0x27c433), NativeAdventureCraftingRole::Message},
    {native_pe_address(profile.base, 0x27c54c), NativeAdventureCraftingRole::Message},
    {native_pe_address(profile.base, 0x27c5fc), NativeAdventureCraftingRole::Message},
    {native_pe_address(profile.base, 0x27c655), NativeAdventureCraftingRole::Message},
    {native_pe_address(profile.base, 0x27cb6a), NativeAdventureCraftingRole::Caption},
    {native_pe_address(profile.base, 0x27cc21), NativeAdventureCraftingRole::Message},
    {native_pe_address(profile.base, 0x27cccb), NativeAdventureCraftingRole::Message},
    {native_pe_address(profile.base, 0x27cd7f), NativeAdventureCraftingRole::Message},
    {native_pe_address(profile.base, 0x27ceda), NativeAdventureCraftingRole::Description},
    {native_pe_address(profile.base, 0x27d1a7), NativeAdventureCraftingRole::Needs}};

// Replace only the inline length/terminator stores with the identical native
// resize operation. Each block is straight-line, has no interior entry, and
// is followed by fresh draw arguments or a compare that resets flags. The
// caller has aligned stack/shadow space; all nonvolatile registers survive.
// Caption's width-1 growth branch writes dots, so retain its unpadded source.
profile.inline_resizes.push_back({0x27caa7,
    {0x48,0x89,0x5d,0x00,0x48,0x8d,0x45,0xf0,0x48,0x83,0x7d,0x08,0x0f,
     0x48,0x0f,0x47,0x45,0xf0,0xc6,0x04,0x18,0x00},
    {0x48,0x8d,0x4d,0xf0,0x48,0x89,0xda,0x45,0x31,0xc0}});
profile.inline_resizes.push_back({0x27cb13,
    {0xe8,0x98,0x47,0xe6,0xff}, {0x48,0x03,0x51,0x10}, true});
profile.inline_resizes.push_back({0x27cea1,
    {0x48,0x89,0x55,0x20,0x48,0x8d,0x45,0x10,0x49,0x83,0xff,0x0f,
     0x48,0x0f,0x47,0x45,0x10,0xc6,0x04,0x10,0x00},
    {0x48,0x8d,0x4d,0x10,0x45,0x31,0xc0}, false, {}, true});
profile.inline_resizes.push_back({0x27d16d,
    {0x48,0x89,0x55,0xe0,0x48,0x8d,0x45,0xd0,0x48,0x83,0x7d,0xe8,0x0f,
     0x48,0x0f,0x47,0x45,0xd0,0xc6,0x04,0x10,0x00},
    {0x48,0x8d,0x4d,0xd0,0x45,0x31,0xc0}, false, {}, true});
