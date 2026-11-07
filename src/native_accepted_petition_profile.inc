// Every accepted-petition addst in the independently extracted PE/ELF regions.
// Type 5 (temple) and type 10 (guildhall), both levels and all location states.
#ifdef _WIN32
    if (!native_pe_feature_span_absent("fortress.accepted_petition_detail", 0x3f7fce, 5)) {
    profile.location_picker_fields.insert(profile.location_picker_fields.end(), {
        {native_pe_address(profile.base, 0x3f7fd3), NativeLocationPickerField::PetitionFixed, NativeCall{0x3f7fce, 0xad9960, nullptr}},
        {native_pe_address(profile.base, 0x3f810f), NativeLocationPickerField::PetitionRequest},
        {native_pe_address(profile.base, 0x3f8175), NativeLocationPickerField::PetitionFor},
        {native_pe_address(profile.base, 0x3f828e), NativeLocationPickerField::PetitionGuild},
        {native_pe_address(profile.base, 0x3f8373), NativeLocationPickerField::PetitionFixed, NativeCall{0x3f836e, 0xad9960, nullptr}},
        {native_pe_address(profile.base, 0x3f85c3), NativeLocationPickerField::PetitionFixed, NativeCall{0x3f85be, 0xad9960, nullptr}},
        {native_pe_address(profile.base, 0x3f85fd), NativeLocationPickerField::PetitionFixed, NativeCall{0x3f85f8, 0xad9960, nullptr}},
        {native_pe_address(profile.base, 0x3f869c), NativeLocationPickerField::PetitionLocation},
        {native_pe_address(profile.base, 0x3f86ff), NativeLocationPickerField::PetitionFixed, NativeCall{0x3f86fa, 0xad9960, nullptr}},
        {native_pe_address(profile.base, 0x3f88e8), NativeLocationPickerField::PetitionDate},
        {native_pe_address(profile.base, 0x3f8a1b), NativeLocationPickerField::PetitionRequest},
        {native_pe_address(profile.base, 0x3f8a81), NativeLocationPickerField::PetitionFor},
        {native_pe_address(profile.base, 0x3f8b6b), NativeLocationPickerField::PetitionFaith},
        {native_pe_address(profile.base, 0x3f8c50), NativeLocationPickerField::PetitionFixed, NativeCall{0x3f8c4b, 0xad9960, nullptr}},
        {native_pe_address(profile.base, 0x3f8cd0), NativeLocationPickerField::PetitionFixed, NativeCall{0x3f8ccb, 0xad9960, nullptr}},
        {native_pe_address(profile.base, 0x3f8d27), NativeLocationPickerField::PetitionFixed, NativeCall{0x3f8d22, 0xad9960, nullptr}},
        {native_pe_address(profile.base, 0x3f8fa3), NativeLocationPickerField::PetitionFixed, NativeCall{0x3f8f9e, 0xad9960, nullptr}},
        {native_pe_address(profile.base, 0x3f8fdd), NativeLocationPickerField::PetitionFixed, NativeCall{0x3f8fd8, 0xad9960, nullptr}},
        {native_pe_address(profile.base, 0x3f908f), NativeLocationPickerField::PetitionLocation},
        {native_pe_address(profile.base, 0x3f90f6), NativeLocationPickerField::PetitionFixed, NativeCall{0x3f90f1, 0xad9960, nullptr}},
        {native_pe_address(profile.base, 0x3f92df), NativeLocationPickerField::PetitionDate},
    });
    profile.signatures.push_back({0x3f7fce, {0xe8,0x8d,0x19,0x6e,0x00}});
    profile.signatures.push_back({0x3f810a, {0xe8,0x51,0x18,0x6e,0x00}});
    profile.signatures.push_back({0x3f8170, {0xe8,0xeb,0x17,0x6e,0x00}});
    profile.signatures.push_back({0x3f8289, {0xe8,0xd2,0x16,0x6e,0x00}});
    profile.signatures.push_back({0x3f836e, {0xe8,0xed,0x15,0x6e,0x00}});
    profile.signatures.push_back({0x3f85be, {0xe8,0x9d,0x13,0x6e,0x00}});
    profile.signatures.push_back({0x3f85f8, {0xe8,0x63,0x13,0x6e,0x00}});
    profile.signatures.push_back({0x3f8697, {0xe8,0xc4,0x12,0x6e,0x00}});
    profile.signatures.push_back({0x3f86fa, {0xe8,0x61,0x12,0x6e,0x00}});
    profile.signatures.push_back({0x3f88e3, {0xe8,0x78,0x10,0x6e,0x00}});
    profile.signatures.push_back({0x3f8a16, {0xe8,0x45,0x0f,0x6e,0x00}});
    profile.signatures.push_back({0x3f8a7c, {0xe8,0xdf,0x0e,0x6e,0x00}});
    profile.signatures.push_back({0x3f8b66, {0xe8,0xf5,0x0d,0x6e,0x00}});
    profile.signatures.push_back({0x3f8c4b, {0xe8,0x10,0x0d,0x6e,0x00}});
    profile.signatures.push_back({0x3f8ccb, {0xe8,0x90,0x0c,0x6e,0x00}});
    profile.signatures.push_back({0x3f8d22, {0xe8,0x39,0x0c,0x6e,0x00}});
    profile.signatures.push_back({0x3f8f9e, {0xe8,0xbd,0x09,0x6e,0x00}});
    profile.signatures.push_back({0x3f8fd8, {0xe8,0x83,0x09,0x6e,0x00}});
    profile.signatures.push_back({0x3f908a, {0xe8,0xd1,0x08,0x6e,0x00}});
    profile.signatures.push_back({0x3f90f1, {0xe8,0x6a,0x08,0x6e,0x00}});
    profile.signatures.push_back({0x3f92da, {0xe8,0x81,0x06,0x6e,0x00}});
    }
#else
    profile.location_picker_fields.insert(profile.location_picker_fields.end(), {
        {native_reference_va(0x169f838), NativeLocationPickerField::PetitionFixed},
        {native_reference_va(0x169f8db), NativeLocationPickerField::PetitionRequest},
        {native_reference_va(0x169f93c), NativeLocationPickerField::PetitionFor},
        {native_reference_va(0x169fa14), NativeLocationPickerField::PetitionGuild},
        {native_reference_va(0x169fabf), NativeLocationPickerField::PetitionFixed},
        {native_reference_va(0x169fbc7), NativeLocationPickerField::PetitionFixed},
        {native_reference_va(0x169fe94), NativeLocationPickerField::PetitionFixed},
        {native_reference_va(0x169fc87), NativeLocationPickerField::PetitionLocation},
        {native_reference_va(0x169fee0), NativeLocationPickerField::PetitionFixed},
        {native_reference_va(0x169fdf1), NativeLocationPickerField::PetitionDate},
        {native_reference_va(0x169fff4), NativeLocationPickerField::PetitionRequest},
        {native_reference_va(0x16a0055), NativeLocationPickerField::PetitionFor},
        {native_reference_va(0x16a0113), NativeLocationPickerField::PetitionFaith},
        {native_reference_va(0x16a01be), NativeLocationPickerField::PetitionFixed},
        {native_reference_va(0x16a0795), NativeLocationPickerField::PetitionFixed},
        {native_reference_va(0x16a0693), NativeLocationPickerField::PetitionFixed},
        {native_reference_va(0x16a0309), NativeLocationPickerField::PetitionFixed},
        {native_reference_va(0x16a059e), NativeLocationPickerField::PetitionFixed},
        {native_reference_va(0x16a03c9), NativeLocationPickerField::PetitionLocation},
        {native_reference_va(0x16a0664), NativeLocationPickerField::PetitionFixed},
        {native_reference_va(0x16a0533), NativeLocationPickerField::PetitionDate},
    });
    // GCC uses the executable's local resize clone before its three dots.
    // Retain the whole faith/profession/request/date in the existing capture.
    // These calls belong to dwarfort, whose image base and relocation map
    // differ from the shared library that exports addst/resize.
    profile.main_calls.insert(profile.main_calls.end(), {
        {0x169f9ea, 0x837700, reinterpret_cast<const void *>(&capture_native_clipped_resize)},
        {0x169fdcb, 0x837700, reinterpret_cast<const void *>(&capture_native_clipped_resize)},
        {0x169ff71, 0x837700, reinterpret_cast<const void *>(&capture_native_clipped_resize)},
        {0x16a00e9, 0x837700, reinterpret_cast<const void *>(&capture_native_clipped_resize)},
        {0x16a050d, 0x837700, reinterpret_cast<const void *>(&capture_native_clipped_resize)},
        {0x16a073c, 0x837700, reinterpret_cast<const void *>(&capture_native_clipped_resize)},
    });
#endif
