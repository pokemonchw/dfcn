// Field identities in the installed Steam 53.17 ELF. PE coordinates below
// name shared semantic roles; they never serve as ELF executable addresses.
static uintptr_t native_ui_semantic_address(uintptr_t reference) {
#ifdef _WIN32
    return native_reference_address(native_history_profile_base(), reference);
#else
    const auto base = native_history_profile_base();
    switch (reference) {
    case 0x1618aa0: {
        const auto table = reinterpret_cast<uintptr_t>(dlsym(RTLD_DEFAULT, "_ZTVN7widgets4textE"));
        return table ? table + 16 : 0;
    }
    case 0x15eb4a8: return native_reference_address(base, 0x204c990);
    case 0x15eef08: return native_reference_address(base, 0x204ccb0);
    case 0x1785bd0: {
        const auto table = reinterpret_cast<uintptr_t>(dlsym(RTLD_DEFAULT, "_ZTVN7widgets5tableE"));
        return table ? table + 16 : 0;
    }
    case 0x17868d0: return native_reference_address(base, 0x2087888);
    case 0x162e8e0: return native_reference_address(base, 0x20876d0);
    case 0x162eaf8: return native_reference_address(base, 0x20877d8);
    default: break;
    }
    uintptr_t current = 0;
    switch (reference) {
    case 0xdfc756: current = 0x1e17bca; break;
    case 0xdfc7c6: current = 0x1e17ca4; break;
    case 0xdfe5dd: current = 0x1e173f6; break;
    case 0xdfe3a2: current = 0x1e186cc; break;
    case 0xdfe3fd: current = 0x1e186f1; break;
    case 0xdfe44c: current = 0x1e1867e; break;
    case 0xdfe4af: current = 0x1e17364; break;
    case 0xdfe4f2: current = 0x1e187db; break;
    case 0xdfde74: current = 0x1e188dc; break;
    case 0xdfdece: current = 0x1e1893f; break;
    case 0xdfdef4: current = 0x1e18971; break;
    case 0xdfdf21: current = 0x1e18994; break;
    case 0xdfe7cf: current = 0x1e182ab; break;
    case 0xdfee0a: current = 0x1e178d7; break;
    case 0xdfee46: current = 0x1e18dd8; break;
    case 0xdfeed4: current = 0x1e1794e; break;
    case 0xdfef0b: current = 0x1e1847b; break;
    case 0xdfefa6: current = 0x1e191a2; break;
    case 0xdfefe5: current = 0x1e190ee; break;
    case 0xdff024: current = 0x1e19148; break;
    case 0xdff060: current = 0x1e18f93; break;
    case 0xdff09c: current = 0x1e179fa; break;
    case 0xdff121: current = 0x1e17a78; break;
    case 0xdff160: current = 0x1e18453; break;
    case 0xdff1db: current = 0x1e18418; break;
    case 0xdff4c3: current = 0x1e1839c; break;
    case 0xdff32f: current = 0x1e18589; break;
    case 0xdff3f5: current = 0x1e184e2; break;
    case 0x104eac5: current = 0x1f781d2; break;
    case 0x104eb8d: current = 0x1f7827e; break;
    case 0x104aed4: current = 0x1f7acf3; break;
    case 0x104af98: current = 0x1f7ad9e; break;
    case 0x3d72a7: current = 0x168a0b1; break;
    case 0x3f3a6b: current = 0x169189e; break;
    case 0x3f3b63: current = 0x168e3ed; break;
    case 0x3f3c5b: current = 0x168e54f; break;
    case 0x3f3d52: current = 0x168e49e; break;
    case 0x3f3e49: current = 0x168e33c; break;
    case 0x3f3f41: current = 0x168e23e; break;
    case 0x3f4039: current = 0x168dc46; break;
    case 0x1d0957: current = 0x143bfc5; break;
    case 0x1d0a6c: current = 0x143e9da; break;
    case 0x3f9bb7: current = 0x1690d14; break;
    case 0x3f9cf0: current = 0x1690de9; break;
    case 0x3f9ef3: current = 0x1690f89; break;
    case 0x3fa04d: current = 0x16a609b; break;
    case 0x3fa13e: current = 0x16a6135; break;
    case 0x3fa341: current = 0x16a62d5; break;
    case 0x179439: current = 0x140c9f7; break;
    case 0x17aabe: current = 0x140cdc5; break;
    case 0x477471: current = 0x174d443; break;
    case 0x4776fa: current = 0x174d83c; break;
    case 0x1fc995: current = 0x153a22d; break;
    case 0x1fc9d8: current = 0x153a2d6; break;
    case 0x1fcd29: current = 0x153969c; break;
    case 0x1fcde4: current = 0x153984a; break;
    case 0x426807: current = 0x16f1afe; break;
    case 0x426a12: current = 0x16f1d0b; break;
    case 0x426adf: current = 0x16f1d7d; break;
    case 0x868d0e: current = 0x117bae8; break;
    case 0x8692d8: current = 0x117ff72; break;
    case 0x86933e: current = 0x117def1; break;
    case 0x869c95: current = 0x1181e71; break;
    case 0x869cfd: current = 0x117cea3; break;
    case 0x86b437: current = 0x1183cde; break;
    case 0x86b70f: current = 0x117c5fb; break;
    case 0x86b766: current = 0x117c697; break;
    case 0x86b9ed: current = 0x117d218; break;
    case 0x86ba97: current = 0x117d3e7; break;
    case 0x86be23: current = 0x117d583; break;
    case 0x86becd: current = 0x117d761; break;
    case 0x8812b0: current = 0x115a415; break;
    case 0x881323: current = 0x115a488; break;
    case 0x8813ea: current = 0x115b7cf; break;
    case 0x88148f: current = 0x115b873; break;
    case 0x881531: current = 0x115b911; break;
    case 0xaf628f: current = 0x1c5acd3; break;
    case 0xaf645f: current = 0x1c62837; break;
    case 0xaf64db: current = 0x1c628d3; break;
    case 0xaf6533: current = 0x1c62939; break;
    case 0xaf65b5: current = 0x1c629b9; break;
    case 0xaf6dc2: current = 0x1c5ad91; break;
    case 0xaf6e4a: current = 0x1c5af26; break;
    case 0xaf6eab: current = 0x1c5bbbe; break;
    case 0xaf7822: current = 0x1c6438e; break;
    case 0xaf7872: current = 0x1c6117b; break;
    case 0xaf78ca: current = 0x1c61202; break;
    case 0xaf7922: current = 0x1c61279; break;
    case 0xaf79a4: current = 0x1c612f8; break;
    case 0xaf8338: current = 0x1c61ef1; break;
    case 0xaf8383: current = 0x1c61f40; break;
    case 0xaf83db: current = 0x1c61fa9; break;
    case 0xaf845d: current = 0x1c62034; break;
    case 0xaf9591: current = 0x1c5b56b; break;
    case 0xaf9600: current = 0x1c5afd9; break;
    case 0xaf9654: current = 0x1c5bb3b; break;
    case 0xafab97: current = 0x1c5f3a8; break;
    case 0xafef6f: current = 0x1c5dc26; break;
    case 0xafefa2: current = 0x1c619c8; break;
    case 0xaff1ac: current = 0x1c55c5a; break;
    case 0xaff205: current = 0x1c5db2b; break;
    case 0xaff37b: current = 0x1c5dadf; break;
    case 0xaff3c9: current = 0x1c5e86c; break;
    case 0xaff417: current = 0x1c5d74a; break;
    case 0xaff465: current = 0x1c5e815; break;
    case 0xaff4b3: current = 0x1c5e342; break;
    case 0xaff501: current = 0x1c5e908; break;
    case 0xaff54f: current = 0x1c5e3f1; break;
    case 0xaff59d: current = 0x1c5d709; break;
    case 0xaff5eb: current = 0x1c5e4d8; break;
    case 0xaff639: current = 0x1c5dd6e; break;
    case 0xaff687: current = 0x1c5da9e; break;
    case 0xaff6d5: current = 0x1c5e490; break;
    case 0xaff723: current = 0x1c5b99b; break;
    case 0xaff771: current = 0x1c5e949; break;
    case 0xaff7bf: current = 0x1c5e8b1; break;
    case 0xaff80d: current = 0x1c5e387; break;
    case 0xaff85b: current = 0x1c5e723; break;
    case 0xaff92d: current = 0x1c5e43f; break;
    case 0xaff97b: current = 0x1c5e6de; break;
    case 0xaff9c9: current = 0x1c5e229; break;
    case 0xaffa8e: current = 0x1c5e5fa; break;
    case 0xaffaf3: current = 0x1c5e65e; break;
    case 0xaffb4e: current = 0x1c5defb; break;
    case 0xaffb9c: current = 0x1c5e03a; break;
    case 0xb0008c: current = 0x1c55d3a; break;
    case 0xb000cd: current = 0x1c55d8b; break;
    case 0xb00156: current = 0x1c55e58; break;
    case 0xb00221: current = 0x1c55f50; break;
    case 0x2643bb8: current = 0x29aa488; break;
    case 0x2643bc0: current = 0x29aa490; break;
    case 0x2643c00: current = 0x29aa4d0; break;
    default: return 0;
    }
    return native_elf_5317_address(current);
#endif
}
#ifndef _WIN32
static bool native_conversation_portrait_caller(uintptr_t caller, size_t kind) {
    if (kind == 0) {
        static const std::array callers{
            native_elf_5317_address(0x117bae8),
            native_elf_5317_address(0x117bb97),
            native_elf_5317_address(0x117de78),
            native_elf_5317_address(0x117ff72),
        };
        return caller && std::find(callers.begin(), callers.end(), caller) != callers.end();
    }
    else if (kind == 1) {
        static const std::array callers{
            native_elf_5317_address(0x117def1),
            native_elf_5317_address(0x117df8b),
            native_elf_5317_address(0x117dfe3),
            native_elf_5317_address(0x117e02b),
            native_elf_5317_address(0x117e083),
            native_elf_5317_address(0x117e0cb),
            native_elf_5317_address(0x117e526),
            native_elf_5317_address(0x117e57e),
            native_elf_5317_address(0x117e5c6),
            native_elf_5317_address(0x117e639),
            native_elf_5317_address(0x117e681),
            native_elf_5317_address(0x117f667),
            native_elf_5317_address(0x117f6ed),
            native_elf_5317_address(0x117f776),
            native_elf_5317_address(0x117f966),
            native_elf_5317_address(0x117f9ae),
            native_elf_5317_address(0x117f9de),
            native_elf_5317_address(0x117fa26),
            native_elf_5317_address(0x117fc48),
            native_elf_5317_address(0x117fc81),
            native_elf_5317_address(0x117fcc9),
            native_elf_5317_address(0x117fcfe),
            native_elf_5317_address(0x117fd46),
            native_elf_5317_address(0x117fd7f),
            native_elf_5317_address(0x117fdc7),
            native_elf_5317_address(0x117fe9c),
            native_elf_5317_address(0x117fee4),
            native_elf_5317_address(0x117ff14),
            native_elf_5317_address(0x117ffab),
            native_elf_5317_address(0x117fff3),
            native_elf_5317_address(0x11800fd),
            native_elf_5317_address(0x1180228),
            native_elf_5317_address(0x1180270),
            native_elf_5317_address(0x11808d2),
            native_elf_5317_address(0x1181e71),
        };
        return caller && std::find(callers.begin(), callers.end(), caller) != callers.end();
    }
    else if (kind == 2) {
        static const std::array callers{
            native_elf_5317_address(0x117cea3),
            native_elf_5317_address(0x117c5fb),
            native_elf_5317_address(0x117daac),
            native_elf_5317_address(0x117db1c),
            native_elf_5317_address(0x117dfe3),
            native_elf_5317_address(0x117e083),
            native_elf_5317_address(0x117e196),
            native_elf_5317_address(0x117e286),
            native_elf_5317_address(0x117e57e),
            native_elf_5317_address(0x117e639),
            native_elf_5317_address(0x117e6a7),
            native_elf_5317_address(0x117e6ee),
            native_elf_5317_address(0x117ea5e),
            native_elf_5317_address(0x117f667),
            native_elf_5317_address(0x117f6bd),
            native_elf_5317_address(0x117f6ed),
            native_elf_5317_address(0x117f746),
            native_elf_5317_address(0x117f776),
            native_elf_5317_address(0x117f7df),
            native_elf_5317_address(0x117f966),
            native_elf_5317_address(0x117f9de),
            native_elf_5317_address(0x117fb65),
            native_elf_5317_address(0x117fc81),
            native_elf_5317_address(0x117fcfe),
            native_elf_5317_address(0x117fd7f),
            native_elf_5317_address(0x117fdea),
            native_elf_5317_address(0x117fe9c),
            native_elf_5317_address(0x117ff14),
            native_elf_5317_address(0x117ffab),
            native_elf_5317_address(0x1180228),
            native_elf_5317_address(0x11802f9),
            native_elf_5317_address(0x118036d),
            native_elf_5317_address(0x1180409),
            native_elf_5317_address(0x1180474),
            native_elf_5317_address(0x11804bb),
            native_elf_5317_address(0x1180502),
            native_elf_5317_address(0x1180549),
            native_elf_5317_address(0x1180590),
            native_elf_5317_address(0x11805d7),
            native_elf_5317_address(0x118061e),
            native_elf_5317_address(0x1180665),
            native_elf_5317_address(0x11806ac),
            native_elf_5317_address(0x1180748),
            native_elf_5317_address(0x118079e),
            native_elf_5317_address(0x11807e5),
            native_elf_5317_address(0x1180881),
            native_elf_5317_address(0x11808f5),
            native_elf_5317_address(0x1180991),
            native_elf_5317_address(0x11809d8),
            native_elf_5317_address(0x1180a74),
            native_elf_5317_address(0x1180adf),
            native_elf_5317_address(0x1180b26),
            native_elf_5317_address(0x1180b6d),
            native_elf_5317_address(0x1180c09),
            native_elf_5317_address(0x1180c5a),
            native_elf_5317_address(0x1180ca1),
            native_elf_5317_address(0x1180d3d),
            native_elf_5317_address(0x1180db1),
            native_elf_5317_address(0x1180dfd),
            native_elf_5317_address(0x1180e44),
            native_elf_5317_address(0x1180e8b),
            native_elf_5317_address(0x1180ed2),
            native_elf_5317_address(0x1180f19),
            native_elf_5317_address(0x1180f8d),
            native_elf_5317_address(0x1181029),
            native_elf_5317_address(0x118107e),
            native_elf_5317_address(0x11810c5),
            native_elf_5317_address(0x1181161),
            native_elf_5317_address(0x11811be),
            native_elf_5317_address(0x1181205),
            native_elf_5317_address(0x118124c),
            native_elf_5317_address(0x11812e8),
            native_elf_5317_address(0x1181339),
            native_elf_5317_address(0x1181380),
            native_elf_5317_address(0x118141c),
            native_elf_5317_address(0x1181490),
            native_elf_5317_address(0x118152c),
            native_elf_5317_address(0x1181587),
            native_elf_5317_address(0x1181623),
            native_elf_5317_address(0x1181674),
            native_elf_5317_address(0x11816bb),
            native_elf_5317_address(0x1181702),
            native_elf_5317_address(0x1181749),
            native_elf_5317_address(0x1181790),
            native_elf_5317_address(0x11817d7),
            native_elf_5317_address(0x118181e),
            native_elf_5317_address(0x1181865),
            native_elf_5317_address(0x11818ac),
            native_elf_5317_address(0x11818f3),
            native_elf_5317_address(0x118198f),
            native_elf_5317_address(0x1181a03),
            native_elf_5317_address(0x1181a9f),
            native_elf_5317_address(0x1181af0),
            native_elf_5317_address(0x1181b37),
            native_elf_5317_address(0x1181bd3),
            native_elf_5317_address(0x1181c3e),
            native_elf_5317_address(0x1181cec),
            native_elf_5317_address(0x1181d3d),
            native_elf_5317_address(0x1181d84),
            native_elf_5317_address(0x1181e20),
            native_elf_5317_address(0x1181e94),
            native_elf_5317_address(0x1181f30),
            native_elf_5317_address(0x1181f81),
            native_elf_5317_address(0x1181fc8),
            native_elf_5317_address(0x118200f),
            native_elf_5317_address(0x1182056),
            native_elf_5317_address(0x11820f2),
            native_elf_5317_address(0x1182166),
            native_elf_5317_address(0x1182202),
            native_elf_5317_address(0x1182253),
            native_elf_5317_address(0x118229a),
            native_elf_5317_address(0x1182336),
            native_elf_5317_address(0x11823ae),
            native_elf_5317_address(0x11823f5),
            native_elf_5317_address(0x118243c),
            native_elf_5317_address(0x11824d8),
            native_elf_5317_address(0x1182574),
            native_elf_5317_address(0x1182610),
            native_elf_5317_address(0x11826ac),
            native_elf_5317_address(0x1182724),
            native_elf_5317_address(0x118276b),
            native_elf_5317_address(0x11827b2),
            native_elf_5317_address(0x11827f9),
            native_elf_5317_address(0x1182840),
            native_elf_5317_address(0x1182887),
            native_elf_5317_address(0x11828ce),
            native_elf_5317_address(0x1182915),
            native_elf_5317_address(0x118295c),
            native_elf_5317_address(0x11829a3),
            native_elf_5317_address(0x1182a3f),
            native_elf_5317_address(0x1182adb),
            native_elf_5317_address(0x1182b77),
            native_elf_5317_address(0x1182c13),
            native_elf_5317_address(0x1182caf),
            native_elf_5317_address(0x1182d4b),
            native_elf_5317_address(0x1182de7),
            native_elf_5317_address(0x1182f2b),
            native_elf_5317_address(0x1182f81),
            native_elf_5317_address(0x1182fc8),
            native_elf_5317_address(0x118300f),
            native_elf_5317_address(0x1183056),
            native_elf_5317_address(0x118309d),
            native_elf_5317_address(0x1183127),
            native_elf_5317_address(0x118316e),
            native_elf_5317_address(0x11831b5),
            native_elf_5317_address(0x11831fc),
            native_elf_5317_address(0x1183243),
            native_elf_5317_address(0x118328a),
            native_elf_5317_address(0x11832d1),
            native_elf_5317_address(0x1183318),
            native_elf_5317_address(0x118335f),
            native_elf_5317_address(0x11833a6),
            native_elf_5317_address(0x11833ed),
            native_elf_5317_address(0x1183583),
            native_elf_5317_address(0x1183813),
            native_elf_5317_address(0x1183aa3),
            native_elf_5317_address(0x1183cde),
        };
        return caller && std::find(callers.begin(), callers.end(), caller) != callers.end();
    }
    return false;
}
static bool native_conversation_tone_odds(uintptr_t caller) {
    static const std::array callers{
        native_elf_5317_address(0x117d891),
        native_elf_5317_address(0x117da65),
        native_elf_5317_address(0x117e452),
        native_elf_5317_address(0x117e4ac),
        native_elf_5317_address(0x117f546),
        native_elf_5317_address(0x117f609),
        native_elf_5317_address(0x117f872),
        native_elf_5317_address(0x117f89f),
        native_elf_5317_address(0x117fe35),
        native_elf_5317_address(0x117fe62),
        native_elf_5317_address(0x118034a),
        native_elf_5317_address(0x1180d8e),
        native_elf_5317_address(0x1180f6a),
        native_elf_5317_address(0x118146d),
        native_elf_5317_address(0x11819e0),
        native_elf_5317_address(0x1182143),
    };
    return caller && std::find(callers.begin(), callers.end(), caller) != callers.end();
}
#endif
