; reference PE:6aea05a1:02734000; guild-profession; RVA 0x1345520..0x13469c4; code ends 0x13467a8
0x1345520: rex push rbx
0x1345522: push   rdi
0x1345523: push   r14
0x1345525: push   r15
0x1345527: sub    rsp,0x48
0x134552b: movzx  r14d,BYTE PTR [rsp+0xa0]
0x1345534: mov    eax,0x86
0x1345539: movsx  rdi,r9w
0x134553d: mov    r15,rdx
0x1345540: movsx  r9,r8w
0x1345544: mov    rbx,rcx
0x1345547: cmp    r9w,ax
0x134554b: ja     0x14134679a
0x1345551: mov    QWORD PTR [rsp+0x70],rbp
0x1345556: lea    rcx,[rip+0x11c996b]        # 0x14250eec8
0x134555d: movsx  rbp,WORD PTR [rsp+0x98]
0x1345566: movzx  edx,di
0x1345569: mov    QWORD PTR [rsp+0x78],rsi
0x134556e: movzx  r8d,bp
0x1345572: mov    QWORD PTR [rsp+0x80],r12
0x134557a: mov    sil,0x1
0x134557d: mov    r12,QWORD PTR [rsp+0x90]
0x1345585: mov    BYTE PTR [r12],0x0
0x134558a: call   0x140310cf0
0x134558f: test   al,al
0x1345591: je     0x1413455c6
0x1345593: movzx  eax,BYTE PTR [rsp+0xa8]
0x134559b: lea    rcx,[rip+0x11c9926]        # 0x14250eec8
0x13455a2: mov    BYTE PTR [rsp+0x30],al
0x13455a6: movzx  r8d,di
0x13455aa: mov    BYTE PTR [rsp+0x28],r14b
0x13455af: mov    rdx,rbx
0x13455b2: mov    WORD PTR [rsp+0x20],r9w
0x13455b8: movzx  r9d,bp
0x13455bc: call   0x140310dc0
0x13455c1: jmp    0x141346788
0x13455c6: mov    QWORD PTR [rsp+0x40],r13
0x13455cb: movzx  r13d,BYTE PTR [rsp+0xa8]
0x13455d4: cmp    r9d,0x86
0x13455db: ja     0x141346757
0x13455e1: lea    rdx,[rip+0xfffffffffecbaa18]        # 0x140000000
0x13455e8: mov    ecx,DWORD PTR [rdx+r9*4+0x13467a8]
0x13455f0: add    rcx,rdx
0x13455f3: jmp    rcx
0x13455f5: mov    r8d,0x5
0x13455fb: lea    rdx,[rip+0x45d3de]        # 0x1417a29e0 ; cstring='miner'
0x1345602: mov    rcx,rbx
0x1345605: call   0x140070f00
0x134560a: jmp    0x141346757
0x134560f: mov    r8d,0xa
0x1345615: lea    rdx,[rip+0x45d3cc]        # 0x1417a29e8 ; cstring='woodworker'
0x134561c: mov    rcx,rbx
0x134561f: call   0x140070f00
0x1345624: jmp    0x141346757
0x1345629: mov    r8d,0x9
0x134562f: lea    rdx,[rip+0x45d2ea]        # 0x1417a2920 ; cstring='carpenter'
0x1345636: mov    rcx,rbx
0x1345639: call   0x140070f00
0x134563e: jmp    0x141346757
0x1345643: mov    r8d,0x6
0x1345649: lea    rdx,[rip+0x45d2dc]        # 0x1417a292c ; cstring='bowyer'
0x1345650: mov    rcx,rbx
0x1345653: call   0x140070f00
0x1345658: jmp    0x141346757
0x134565d: mov    r8d,0xa
0x1345663: lea    rdx,[rip+0x45d296]        # 0x1417a2900 ; cstring='woodcutter'
0x134566a: mov    rcx,rbx
0x134566d: call   0x140070f00
0x1345672: jmp    0x141346757
0x1345677: mov    r8d,0xb
0x134567d: lea    rdx,[rip+0x45d28c]        # 0x1417a2910 ; cstring='stoneworker'
0x1345684: mov    rcx,rbx
0x1345687: call   0x140070f00
0x134568c: jmp    0x141346757
0x1345691: mov    r8d,0x8
0x1345697: lea    rdx,[rip+0x45d2b2]        # 0x1417a2950 ; cstring='engraver'
0x134569e: mov    rcx,rbx
0x13456a1: call   0x140070f00
0x13456a6: jmp    0x141346757
0x13456ab: mov    r8d,0xb
0x13456b1: lea    rdx,[rip+0x45d2a8]        # 0x1417a2960 ; cstring='stonecutter'
0x13456b8: mov    rcx,rbx
0x13456bb: call   0x140070f00
0x13456c0: jmp    0x141346757
0x13456c5: mov    r8d,0xc
0x13456cb: lea    rdx,[rip+0x45d266]        # 0x1417a2938 ; cstring='stone carver'
0x13456d2: mov    rcx,rbx
0x13456d5: call   0x140070f00
0x13456da: jmp    0x141346757
0x13456df: mov    r8d,0x5
0x13456e5: lea    rdx,[rip+0x45d25c]        # 0x1417a2948 ; cstring='mason'
0x13456ec: mov    rcx,rbx
0x13456ef: call   0x140070f00
0x13456f4: jmp    0x141346757
0x13456f9: mov    r8d,0x6
0x13456ff: lea    rdx,[rip+0x45d392]        # 0x1417a2a98 ; cstring='ranger'
0x1345706: mov    rcx,rbx
0x1345709: call   0x140070f00
0x134570e: jmp    0x141346757
0x1345713: mov    r8d,0x10
0x1345719: lea    rdx,[rip+0x45d380]        # 0x1417a2aa0 ; cstring='animal caretaker'
0x1345720: mov    rcx,rbx
0x1345723: call   0x140070f00
0x1345728: jmp    0x141346757
0x134572d: mov    r8d,0xe
0x1345733: lea    rdx,[rip+0x45d346]        # 0x1417a2a80 ; cstring='animal trainer'
0x134573a: mov    rcx,rbx
0x134573d: call   0x140070f00
0x1345742: jmp    0x141346757
0x1345747: mov    r8d,0x6
0x134574d: lea    rdx,[rip+0x381860]        # 0x1416c6fb4 ; cstring='hunter'
0x1345754: mov    rcx,rbx
0x1345757: call   0x140070f00
0x134575c: jmp    0x141346757
0x1345761: mov    r8d,0x7
0x1345767: lea    rdx,[rip+0x45d322]        # 0x1417a2a90 ; cstring='trapper'
0x134576e: mov    rcx,rbx
0x1345771: call   0x140070f00
0x1345776: jmp    0x141346757
0x134577b: mov    r8d,0x10
0x1345781: lea    rdx,[rip+0x45d358]        # 0x1417a2ae0 ; cstring='animal dissector'
0x1345788: mov    rcx,rbx
0x134578b: call   0x140070f00
0x1345790: jmp    0x141346757
0x1345795: mov    r8d,0xa
0x134579b: lea    rdx,[rip+0x45d356]        # 0x1417a2af8 ; cstring='metalsmith'
0x13457a2: mov    rcx,rbx
0x13457a5: call   0x140070f00
0x13457aa: jmp    0x141346757
0x13457af: mov    r8d,0x10
0x13457b5: lea    rdx,[rip+0x45d2fc]        # 0x1417a2ab8 ; cstring='furnace operator'
0x13457bc: mov    rcx,rbx
0x13457bf: call   0x140070f00
0x13457c4: jmp    0x141346757
0x13457c9: mov    r8d,0xb
0x13457cf: lea    rdx,[rip+0x45d2fa]        # 0x1417a2ad0 ; cstring='weaponsmith'
0x13457d6: mov    rcx,rbx
0x13457d9: call   0x140070f00
0x13457de: jmp    0x141346757
0x13457e3: mov    r8d,0x7
0x13457e9: lea    rdx,[rip+0x45d238]        # 0x1417a2a28 ; cstring='armorer'
0x13457f0: mov    rcx,rbx
0x13457f3: call   0x140070f00
0x13457f8: jmp    0x141346757
0x13457fd: mov    r8d,0xa
0x1345803: lea    rdx,[rip+0x45d226]        # 0x1417a2a30 ; cstring='blacksmith'
0x134580a: mov    rcx,rbx
0x134580d: call   0x140070f00
0x1345812: jmp    0x141346757
0x1345817: mov    r8d,0xc
0x134581d: lea    rdx,[rip+0x45d1ec]        # 0x1417a2a10 ; cstring='metalcrafter'
0x1345824: mov    rcx,rbx
0x1345827: call   0x140070f00
0x134582c: jmp    0x141346757
0x1345831: mov    r8d,0x7
0x1345837: lea    rdx,[rip+0x45d1e2]        # 0x1417a2a20 ; cstring='jeweler'
0x134583e: mov    rcx,rbx
0x1345841: call   0x140070f00
0x1345846: jmp    0x141346757
0x134584b: mov    r8d,0xa
0x1345851: lea    rdx,[rip+0x45d208]        # 0x1417a2a60 ; cstring='gem cutter'
0x1345858: mov    rcx,rbx
0x134585b: call   0x140070f00
0x1345860: jmp    0x141346757
0x1345865: mov    r8d,0xa
0x134586b: lea    rdx,[rip+0x45d1fe]        # 0x1417a2a70 ; cstring='gem setter'
0x1345872: mov    rcx,rbx
0x1345875: call   0x140070f00
0x134587a: jmp    0x141346757
0x134587f: lea    rax,[rip+0x300c52]        # 0x1416464d8 ; cstring='craftsman'
0x1345886: lea    rdx,[rip+0x4094d3]        # 0x14174ed60 ; cstring='craftsmen'
0x134588d: test   r14b,r14b
0x1345890: mov    r8d,0x9
0x1345896: cmove  rdx,rax
0x134589a: jmp    0x14134674c
0x134589f: mov    r8d,0xb
0x13458a5: lea    rdx,[rip+0x45d194]        # 0x1417a2a40 ; cstring='woodcrafter'
0x13458ac: mov    rcx,rbx
0x13458af: call   0x140070f00
0x13458b4: jmp    0x141346757
0x13458b9: mov    r8d,0xa
0x13458bf: lea    rdx,[rip+0x45d18a]        # 0x1417a2a50 ; cstring='papermaker'
0x13458c6: mov    rcx,rbx
0x13458c9: call   0x140070f00
0x13458ce: jmp    0x141346757
0x13458d3: mov    r8d,0xa
0x13458d9: lea    rdx,[rip+0x45ca88]        # 0x1417a2368 ; cstring='bookbinder'
0x13458e0: mov    rcx,rbx
0x13458e3: call   0x140070f00
0x13458e8: jmp    0x141346757
0x13458ed: mov    r8d,0x6
0x13458f3: lea    rdx,[rip+0x45ca7a]        # 0x1417a2374 ; cstring='potter'
0x13458fa: mov    rcx,rbx
0x13458fd: call   0x140070f00
0x1345902: jmp    0x141346757
0x1345907: mov    r8d,0x6
0x134590d: lea    rdx,[rip+0x45ca38]        # 0x1417a234c ; cstring='glazer'
0x1345914: mov    rcx,rbx
0x1345917: call   0x140070f00
0x134591c: jmp    0x141346757
0x1345921: mov    r8d,0xa
0x1345927: lea    rdx,[rip+0x45ca2a]        # 0x1417a2358 ; cstring='wax worker'
0x134592e: mov    rcx,rbx
0x1345931: call   0x140070f00
0x1345936: jmp    0x141346757
0x134593b: mov    r8d,0xc
0x1345941: lea    rdx,[rip+0x45ca50]        # 0x1417a2398 ; cstring='stonecrafter'
0x1345948: mov    rcx,rbx
0x134594b: call   0x140070f00
0x1345950: jmp    0x141346757
0x1345955: mov    r8d,0xd
0x134595b: lea    rdx,[rip+0x45ca46]        # 0x1417a23a8 ; cstring='leatherworker'
0x1345962: mov    rcx,rbx
0x1345965: call   0x140070f00
0x134596a: jmp    0x141346757
0x134596f: mov    r8d,0xb
0x1345975: lea    rdx,[rip+0x45ca04]        # 0x1417a2380 ; cstring='bone carver'
0x134597c: mov    rcx,rbx
0x134597f: call   0x140070f00
0x1345984: jmp    0x141346757
0x1345989: mov    r8d,0x6
0x134598f: lea    rdx,[rip+0x45c9f6]        # 0x1417a238c ; cstring='weaver'
0x1345996: mov    rcx,rbx
0x1345999: call   0x140070f00
0x134599e: jmp    0x141346757
0x13459a3: mov    r8d,0x8
0x13459a9: lea    rdx,[rip+0x45c940]        # 0x1417a22f0 ; cstring='clothier'
0x13459b0: mov    rcx,rbx
0x13459b3: call   0x140070f00
0x13459b8: jmp    0x141346757
0x13459bd: mov    r8d,0xa
0x13459c3: lea    rdx,[rip+0x45c936]        # 0x1417a2300 ; cstring='glassmaker'
0x13459ca: mov    rcx,rbx
0x13459cd: call   0x140070f00
0x13459d2: jmp    0x141346757
0x13459d7: mov    r8d,0x10
0x13459dd: lea    rdx,[rip+0x45c8e4]        # 0x1417a22c8 ; cstring='strand extractor'
0x13459e4: mov    rcx,rbx
0x13459e7: call   0x140071040
0x13459ec: jmp    0x141346757
0x13459f1: mov    r8d,0xe
0x13459f7: lea    rdx,[rip+0x45c8e2]        # 0x1417a22e0 ; cstring='fishery worker'
0x13459fe: mov    rcx,rbx
0x1345a01: call   0x140070f00
0x1345a06: jmp    0x141346757
0x1345a0b: lea    rax,[rip+0x45c92e]        # 0x1417a2340 ; cstring='fisherman'
0x1345a12: lea    rdx,[rip+0x45c917]        # 0x1417a2330 ; cstring='fishermen'
0x1345a19: test   r14b,r14b
0x1345a1c: mov    r8d,0x9
0x1345a22: cmove  rdx,rax
0x1345a26: jmp    0x14134674c
0x1345a2b: mov    r8d,0xe
0x1345a31: lea    rdx,[rip+0x45c8d8]        # 0x1417a2310 ; cstring='fish dissector'
0x1345a38: mov    rcx,rbx
0x1345a3b: call   0x140070f00
0x1345a40: jmp    0x141346757
0x1345a45: mov    r8d,0xc
0x1345a4b: lea    rdx,[rip+0x45c8ce]        # 0x1417a2320 ; cstring='fish cleaner'
0x1345a52: mov    rcx,rbx
0x1345a55: call   0x140070f00
0x1345a5a: jmp    0x141346757
0x1345a5f: mov    r8d,0x6
0x1345a65: lea    rdx,[rip+0x45c9ac]        # 0x1417a2418 ; cstring='farmer'
0x1345a6c: mov    rcx,rbx
0x1345a6f: call   0x140070f00
0x1345a74: jmp    0x141346757
0x1345a79: mov    r8d,0xb
0x1345a7f: lea    rdx,[rip+0x45c99a]        # 0x1417a2420 ; cstring='cheesemaker'
0x1345a86: mov    rcx,rbx
0x1345a89: call   0x140070f00
0x1345a8e: jmp    0x141346757
0x1345a93: mov    r8d,0x6
0x1345a99: lea    rdx,[rip+0x45c968]        # 0x1417a2408 ; cstring='milker'
0x1345aa0: mov    rcx,rbx
0x1345aa3: call   0x140070f00
0x1345aa8: jmp    0x141346757
0x1345aad: mov    r8d,0x6
0x1345ab3: lea    rdx,[rip+0x45c956]        # 0x1417a2410 ; cstring='gelder'
0x1345aba: mov    rcx,rbx
0x1345abd: call   0x140070f00
0x1345ac2: jmp    0x141346757
0x1345ac7: mov    r8d,0x7
0x1345acd: lea    rdx,[rip+0x45c974]        # 0x1417a2448 ; cstring='shearer'
0x1345ad4: mov    rcx,rbx
0x1345ad7: call   0x140070f00
0x1345adc: jmp    0x141346757
0x1345ae1: mov    r8d,0x7
0x1345ae7: lea    rdx,[rip+0x45c962]        # 0x1417a2450 ; cstring='spinner'
0x1345aee: mov    rcx,rbx
0x1345af1: call   0x140070f00
0x1345af6: jmp    0x141346757
0x1345afb: mov    r8d,0x4
0x1345b01: lea    rdx,[rip+0x45c924]        # 0x1417a242c ; cstring='cook'
0x1345b08: mov    rcx,rbx
0x1345b0b: call   0x140070f00
0x1345b10: jmp    0x141346757
0x1345b15: mov    r8d,0x8
0x1345b1b: lea    rdx,[rip+0x45c916]        # 0x1417a2438 ; cstring='thresher'
0x1345b22: mov    rcx,rbx
0x1345b25: call   0x140070f00
0x1345b2a: jmp    0x141346757
0x1345b2f: mov    r8d,0x6
0x1345b35: lea    rdx,[rip+0x45c88c]        # 0x1417a23c8 ; cstring='miller'
0x1345b3c: mov    rcx,rbx
0x1345b3f: call   0x140070f00
0x1345b44: jmp    0x141346757
0x1345b49: mov    r8d,0x7
0x1345b4f: lea    rdx,[rip+0x410972]        # 0x1417564c8 ; cstring='butcher'
0x1345b56: mov    rcx,rbx
0x1345b59: call   0x140070f00
0x1345b5e: jmp    0x141346757
0x1345b63: mov    r8d,0x6
0x1345b69: lea    rdx,[rip+0x45c860]        # 0x1417a23d0 ; cstring='tanner'
0x1345b70: mov    rcx,rbx
0x1345b73: call   0x140070f00
0x1345b78: jmp    0x141346757
0x1345b7d: mov    r8d,0x4
0x1345b83: lea    rdx,[rip+0x45c82e]        # 0x1417a23b8 ; cstring='dyer'
0x1345b8a: mov    rcx,rbx
0x1345b8d: call   0x140070f00
0x1345b92: jmp    0x141346757
0x1345b97: mov    r8d,0x7
0x1345b9d: lea    rdx,[rip+0x45c81c]        # 0x1417a23c0 ; cstring='presser'
0x1345ba4: mov    rcx,rbx
0x1345ba7: call   0x140070f00
0x1345bac: jmp    0x141346757
0x1345bb1: mov    r8d,0x9
0x1345bb7: lea    rdx,[rip+0x45c832]        # 0x1417a23f0 ; cstring='beekeeper'
0x1345bbe: mov    rcx,rbx
0x1345bc1: call   0x140070f00
0x1345bc6: jmp    0x141346757
0x1345bcb: mov    r8d,0x7
0x1345bd1: lea    rdx,[rip+0x45c828]        # 0x1417a2400 ; cstring='planter'
0x1345bd8: mov    rcx,rbx
0x1345bdb: call   0x140070f00
0x1345be0: jmp    0x141346757
0x1345be5: mov    r8d,0x9
0x1345beb: lea    rdx,[rip+0x45c7e6]        # 0x1417a23d8 ; cstring='herbalist'
0x1345bf2: mov    rcx,rbx
0x1345bf5: call   0x140070f00
0x1345bfa: jmp    0x141346757
0x1345bff: mov    r8d,0x6
0x1345c05: lea    rdx,[rip+0x45c7d8]        # 0x1417a23e4 ; cstring='brewer'
0x1345c0c: mov    rcx,rbx
0x1345c0f: call   0x140070f00
0x1345c14: jmp    0x141346757
0x1345c19: mov    r8d,0xa
0x1345c1f: lea    rdx,[rip+0x45c8ba]        # 0x1417a24e0 ; cstring='soap maker'
0x1345c26: mov    rcx,rbx
0x1345c29: call   0x140070f00
0x1345c2e: jmp    0x141346757
0x1345c33: mov    r8d,0xc
0x1345c39: lea    rdx,[rip+0x45c8b0]        # 0x1417a24f0 ; cstring='potash maker'
0x1345c40: mov    rcx,rbx
0x1345c43: call   0x140070f00
0x1345c48: jmp    0x141346757
0x1345c4d: mov    r8d,0x9
0x1345c53: lea    rdx,[rip+0x45c866]        # 0x1417a24c0 ; cstring='lye maker'
0x1345c5a: mov    rcx,rbx
0x1345c5d: call   0x140070f00
0x1345c62: jmp    0x141346757
0x1345c67: mov    r8d,0xb
0x1345c6d: lea    rdx,[rip+0x45c85c]        # 0x1417a24d0 ; cstring='wood burner'
0x1345c74: mov    rcx,rbx
0x1345c77: call   0x140070f00
0x1345c7c: jmp    0x141346757
0x1345c81: mov    r8d,0x8
0x1345c87: lea    rdx,[rip+0x45c892]        # 0x1417a2520 ; cstring='engineer'
0x1345c8e: mov    rcx,rbx
0x1345c91: call   0x140070f00
0x1345c96: jmp    0x141346757
0x1345c9b: mov    r8d,0x8
0x1345ca1: lea    rdx,[rip+0x45c888]        # 0x1417a2530 ; cstring='mechanic'
0x1345ca8: mov    rcx,rbx
0x1345cab: call   0x140070f00
0x1345cb0: jmp    0x141346757
0x1345cb5: mov    r8d,0xe
0x1345cbb: lea    rdx,[rip+0x45c83e]        # 0x1417a2500 ; cstring='siege engineer'
0x1345cc2: mov    rcx,rbx
0x1345cc5: call   0x140070f00
0x1345cca: jmp    0x141346757
0x1345ccf: mov    r8d,0xe
0x1345cd5: lea    rdx,[rip+0x45c834]        # 0x1417a2510 ; cstring='siege operator'
0x1345cdc: mov    rcx,rbx
0x1345cdf: call   0x140070f00
0x1345ce4: jmp    0x141346757
0x1345ce9: mov    r8d,0xd
0x1345cef: lea    rdx,[rip+0x45c77a]        # 0x1417a2470 ; cstring='pump operator'
0x1345cf6: mov    rcx,rbx
0x1345cf9: call   0x140070f00
0x1345cfe: jmp    0x141346757
0x1345d03: mov    r8d,0x5
0x1345d09: lea    rdx,[rip+0x3a53ac]        # 0x1416eb0bc ; cstring='clerk'
0x1345d10: mov    rcx,rbx
0x1345d13: call   0x140070f00
0x1345d18: jmp    0x141346757
0x1345d1d: mov    r8d,0xd
0x1345d23: lea    rdx,[rip+0x33aaee]        # 0x141680818 ; cstring='administrator'
0x1345d2a: mov    rcx,rbx
0x1345d2d: call   0x140070f00
0x1345d32: jmp    0x141346757
0x1345d37: mov    r8d,0x6
0x1345d3d: lea    rdx,[rip+0x45c73c]        # 0x1417a2480 ; cstring='trader'
0x1345d44: mov    rcx,rbx
0x1345d47: call   0x140070f00
0x1345d4c: jmp    0x141346757
0x1345d51: mov    r8d,0x4
0x1345d57: lea    rdx,[rip+0x381236]        # 0x1416c6f94 ; cstring='poet'
0x1345d5e: mov    rcx,rbx
0x1345d61: call   0x140070f00
0x1345d66: jmp    0x141346757
0x1345d6b: mov    r8d,0x4
0x1345d71: lea    rdx,[rip+0x381214]        # 0x1416c6f8c ; cstring='bard'
0x1345d78: mov    rcx,rbx
0x1345d7b: call   0x140070f00
0x1345d80: jmp    0x141346757
0x1345d85: mov    r8d,0x6
0x1345d8b: lea    rdx,[rip+0x38121a]        # 0x1416c6fac ; cstring='dancer'
0x1345d92: mov    rcx,rbx
0x1345d95: call   0x140070f00
0x1345d9a: jmp    0x141346757
0x1345d9f: mov    r8d,0x9
0x1345da5: lea    rdx,[rip+0x317f5c]        # 0x14165dd08 ; cstring='performer'
0x1345dac: mov    rcx,rbx
0x1345daf: call   0x140070f00
0x1345db4: jmp    0x141346757
0x1345db9: mov    r8d,0x6
0x1345dbf: lea    rdx,[rip+0x318512]        # 0x14165e2d8 ; cstring='scribe'
0x1345dc6: mov    rcx,rbx
0x1345dc9: call   0x140070f00
0x1345dce: jmp    0x141346757
0x1345dd3: mov    r8d,0xd
0x1345dd9: lea    rdx,[rip+0x317ef8]        # 0x14165dcd8 ; cstring='tavern keeper'
0x1345de0: mov    rcx,rbx
0x1345de3: call   0x140070f00
0x1345de8: jmp    0x141346757
0x1345ded: mov    r8d,0x6
0x1345df3: lea    rdx,[rip+0x317ebe]        # 0x14165dcb8 ; cstring='doctor'
0x1345dfa: mov    rcx,rbx
0x1345dfd: call   0x140070f00
0x1345e02: jmp    0x141346757
0x1345e07: mov    r8d,0xd
0x1345e0d: lea    rdx,[rip+0x317e94]        # 0x14165dca8 ; cstring='diagnostician'
0x1345e14: mov    rcx,rbx
0x1345e17: call   0x140070f00
0x1345e1c: jmp    0x141346757
0x1345e21: mov    r8d,0xb
0x1345e27: lea    rdx,[rip+0x317e92]        # 0x14165dcc0 ; cstring='bone doctor'
0x1345e2e: mov    rcx,rbx
0x1345e31: call   0x140070f00
0x1345e36: jmp    0x141346757
0x1345e3b: mov    r8d,0x7
0x1345e41: lea    rdx,[rip+0x45c610]        # 0x1417a2458 ; cstring='suturer'
0x1345e48: mov    rcx,rbx
0x1345e4b: call   0x140070f00
0x1345e50: jmp    0x141346757
0x1345e55: mov    r8d,0x7
0x1345e5b: lea    rdx,[rip+0x317e6e]        # 0x14165dcd0 ; cstring='surgeon'
0x1345e62: mov    rcx,rbx
0x1345e65: call   0x140070f00
0x1345e6a: jmp    0x141346757
0x1345e6f: mov    r8d,0x8
0x1345e75: lea    rdx,[rip+0x45c5e4]        # 0x1417a2460 ; cstring='merchant'
0x1345e7c: mov    rcx,rbx
0x1345e7f: call   0x140070f00
0x1345e84: jmp    0x141346757
0x1345e89: mov    r8d,0x5
0x1345e8f: lea    rdx,[rip+0x45c60e]        # 0x1417a24a4 ; cstring='drunk'
0x1345e96: mov    rcx,rbx
0x1345e99: call   0x140070f00
0x1345e9e: jmp    0x141346757
0x1345ea3: lea    rax,[rip+0x45c5de]        # 0x1417a2488 ; cstring='hammerman'
0x1345eaa: lea    rdx,[rip+0x45c5ff]        # 0x1417a24b0 ; cstring='hammermen'
0x1345eb1: test   r14b,r14b
0x1345eb4: mov    r8d,0x9
0x1345eba: cmove  rdx,rax
0x1345ebe: jmp    0x14134674c
0x1345ec3: mov    r8d,0xb
0x1345ec9: lea    rdx,[rip+0x45c5c8]        # 0x1417a2498 ; cstring='Hammer Lord'
0x1345ed0: mov    rcx,rbx
0x1345ed3: call   0x140070f00
0x1345ed8: jmp    0x141346757
0x1345edd: test   r14b,r14b
0x1345ee0: lea    rax,[rip+0x45c6f1]        # 0x1417a25d8 ; cstring='spearman'
0x1345ee7: lea    rdx,[rip+0x45c6da]        # 0x1417a25c8 ; cstring='spearmen'
0x1345eee: mov    r8d,0x8
0x1345ef4: cmove  rdx,rax
0x1345ef8: jmp    0x14134674c
0x1345efd: mov    r8d,0xb
0x1345f03: lea    rdx,[rip+0x45c69e]        # 0x1417a25a8 ; cstring='Spearmaster'
0x1345f0a: mov    rcx,rbx
0x1345f0d: call   0x140070f00
0x1345f12: jmp    0x141346757
0x1345f17: test   r14b,r14b
0x1345f1a: lea    rax,[rip+0x45c6ef]        # 0x1417a2610 ; cstring='crossbowman'
0x1345f21: lea    rdx,[rip+0x45c690]        # 0x1417a25b8 ; cstring='crossbowmen'
0x1345f28: mov    r8d,0xb
0x1345f2e: cmove  rdx,rax
0x1345f32: jmp    0x14134674c
0x1345f37: test   r14b,r14b
0x1345f3a: lea    rax,[rip+0x45c6a7]        # 0x1417a25e8 ; cstring='Elite Crossbowmen'
0x1345f41: lea    rdx,[rip+0x45c6d8]        # 0x1417a2620 ; cstring='Elite Crossbowman'
0x1345f48: mov    r8d,0x11
0x1345f4e: cmove  rdx,rax
0x1345f52: jmp    0x14134674c
0x1345f57: mov    r8d,0x8
0x1345f5d: lea    rdx,[rip+0x45c69c]        # 0x1417a2600 ; cstring='wrestler'
0x1345f64: mov    rcx,rbx
0x1345f67: call   0x140070f00
0x1345f6c: jmp    0x141346757
0x1345f71: mov    r8d,0xe
0x1345f77: lea    rdx,[rip+0x45c5da]        # 0x1417a2558 ; cstring='Elite Wrestler'
0x1345f7e: mov    rcx,rbx
0x1345f81: call   0x140070f00
0x1345f86: jmp    0x141346757
0x1345f8b: lea    rax,[rip+0x45c5aa]        # 0x1417a253c ; cstring='axeman'
0x1345f92: lea    rdx,[rip+0x45c5cf]        # 0x1417a2568 ; cstring='axemen'
0x1345f99: test   r14b,r14b
0x1345f9c: mov    r8d,0x6
0x1345fa2: cmove  rdx,rax
0x1345fa6: jmp    0x14134674c
0x1345fab: mov    r8d,0x8
0x1345fb1: lea    rdx,[rip+0x45c590]        # 0x1417a2548 ; cstring='Axe Lord'
0x1345fb8: mov    rcx,rbx
0x1345fbb: call   0x140070f00
0x1345fc0: jmp    0x141346757
0x1345fc5: lea    rax,[rip+0x45c5cc]        # 0x1417a2598 ; cstring='swordsman'
0x1345fcc: lea    rdx,[rip+0x45c5b5]        # 0x1417a2588 ; cstring='swordsmen'
0x1345fd3: test   r14b,r14b
0x1345fd6: mov    r8d,0x9
0x1345fdc: cmove  rdx,rax
0x1345fe0: jmp    0x14134674c
0x1345fe5: mov    r8d,0xb
0x1345feb: lea    rdx,[rip+0x45c57e]        # 0x1417a2570 ; cstring='Swordmaster'
0x1345ff2: mov    rcx,rbx
0x1345ff5: call   0x140070f00
0x1345ffa: jmp    0x141346757
0x1345fff: lea    rax,[rip+0x45d0a2]        # 0x1417a30a8 ; cstring='maceman'
0x1346006: lea    rdx,[rip+0x45c573]        # 0x1417a2580 ; cstring='macemen'
0x134600d: test   r14b,r14b
0x1346010: mov    r8d,0x7
0x1346016: cmove  rdx,rax
0x134601a: jmp    0x14134674c
0x134601f: mov    r8d,0x9
0x1346025: lea    rdx,[rip+0x45d084]        # 0x1417a30b0 ; cstring='Mace Lord'
0x134602c: mov    rcx,rbx
0x134602f: call   0x140070f00
0x1346034: jmp    0x141346757
0x1346039: lea    rax,[rip+0x45d060]        # 0x1417a30a0 ; cstring='pikeman'
0x1346040: lea    rdx,[rip+0x45d051]        # 0x1417a3098 ; cstring='pikemen'
0x1346047: test   r14b,r14b
0x134604a: mov    r8d,0x7
0x1346050: cmove  rdx,rax
0x1346054: jmp    0x14134674c
0x1346059: mov    r8d,0xa
0x134605f: lea    rdx,[rip+0x45d072]        # 0x1417a30d8 ; cstring='Pikemaster'
0x1346066: mov    rcx,rbx
0x1346069: call   0x140070f00
0x134606e: jmp    0x141346757
0x1346073: lea    rax,[rip+0x45d042]        # 0x1417a30bc ; cstring='bowman'
0x134607a: lea    rdx,[rip+0x45d063]        # 0x1417a30e4 ; cstring='bowmen'
0x1346081: test   r14b,r14b
0x1346084: mov    r8d,0x6
0x134608a: cmove  rdx,rax
0x134608e: jmp    0x14134674c
0x1346093: test   r14b,r14b
0x1346096: lea    rax,[rip+0x45cfa3]        # 0x1417a3040 ; cstring='Elite Bowman'
0x134609d: lea    rdx,[rip+0x45d024]        # 0x1417a30c8 ; cstring='Elite Bowmen'
0x13460a4: mov    r8d,0xc
0x13460aa: cmove  rdx,rax
0x13460ae: jmp    0x14134674c
0x13460b3: mov    r8d,0xa
0x13460b9: lea    rdx,[rip+0x45cf90]        # 0x1417a3050 ; cstring='blowgunner'
0x13460c0: mov    rcx,rbx
0x13460c3: call   0x140070f00
0x13460c8: jmp    0x141346757
0x13460cd: mov    r8d,0x11
0x13460d3: lea    rdx,[rip+0x45cf46]        # 0x1417a3020 ; cstring='Master Blowgunner'
0x13460da: mov    rcx,rbx
0x13460dd: call   0x140070f00
0x13460e2: jmp    0x141346757
0x13460e7: mov    r8d,0x6
0x13460ed: lea    rdx,[rip+0x45cf40]        # 0x1417a3034 ; cstring='lasher'
0x13460f4: mov    rcx,rbx
0x13460f7: call   0x140070f00
0x13460fc: jmp    0x141346757
0x1346101: mov    r8d,0xd
0x1346107: lea    rdx,[rip+0x45cf72]        # 0x1417a3080 ; cstring='Master Lasher'
0x134610e: mov    rcx,rbx
0x1346111: call   0x140070f00
0x1346116: jmp    0x141346757
0x134611b: mov    r8d,0x7
0x1346121: lea    rdx,[rip+0x45cf68]        # 0x1417a3090 ; cstring='recruit'
0x1346128: mov    rcx,rbx
0x134612b: call   0x140070f00
0x1346130: jmp    0x141346757
0x1346135: mov    r8d,0x7
0x134613b: lea    rdx,[rip+0x37b87e]        # 0x1416c19c0 ; cstring='hunting'
0x1346142: mov    rcx,r15
0x1346145: jmp    0x14134674f
0x134614a: mov    r8d,0x3
0x1346150: lea    rdx,[rip+0x31f425]        # 0x14166557c ; cstring='war'
0x1346157: mov    rcx,r15
0x134615a: jmp    0x14134674f
0x134615f: mov    r8d,0xc
0x1346165: lea    rdx,[rip+0x45cef4]        # 0x1417a3060 ; cstring='Master Thief'
0x134616c: mov    rcx,rbx
0x134616f: call   0x140070f00
0x1346174: jmp    0x141346757
0x1346179: mov    r8d,0x5
0x134617f: lea    rdx,[rip+0x380d36]        # 0x1416c6ebc ; cstring='thief'
0x1346186: mov    rcx,rbx
0x1346189: call   0x140070f00
0x134618e: jmp    0x141346757
0x1346193: mov    r8d,0xe
0x1346199: lea    rdx,[rip+0x318140]        # 0x14165e2e0 ; cstring='monster slayer'
0x13461a0: mov    rcx,rbx
0x13461a3: call   0x140070f00
0x13461a8: jmp    0x141346757
0x13461ad: mov    r8d,0x5
0x13461b3: lea    rdx,[rip+0x347722]        # 0x14168d8dc ; cstring='scout'
0x13461ba: mov    rcx,rbx
0x13461bd: call   0x140070f00
0x13461c2: jmp    0x141346757
0x13461c7: mov    r8d,0xc
0x13461cd: lea    rdx,[rip+0x45ce9c]        # 0x1417a3070 ; cstring='beast hunter'
0x13461d4: mov    rcx,rbx
0x13461d7: call   0x140070f00
0x13461dc: jmp    0x141346757
0x13461e1: mov    r8d,0x8
0x13461e7: lea    rdx,[rip+0x3c549a]        # 0x14170b688 ; cstring='snatcher'
0x13461ee: mov    rcx,rbx
0x13461f1: call   0x140070f00
0x13461f6: jmp    0x141346757
0x13461fb: test   r14b,r14b
0x13461fe: lea    rcx,[rip+0x347bcb]        # 0x14168ddd0 ; cstring='mercenaries'
0x1346205: mov    r8d,0xb
0x134620b: lea    rdx,[rip+0x2c1a9e]        # 0x141607cb0 ; cstring='mercenary'
0x1346212: mov    eax,0x9
0x1346217: cmove  rdx,rcx
0x134621b: cmove  eax,r8d
0x134621f: mov    r8d,eax
0x1346222: jmp    0x14134674c
0x1346227: mov    r8d,0x4
0x134622d: lea    rdx,[rip+0x45cf20]        # 0x1417a3154 ; cstring='sage'
0x1346234: mov    rcx,rbx
0x1346237: call   0x140070f00
0x134623c: jmp    0x141346757
0x1346241: mov    r8d,0x7
0x1346247: lea    rdx,[rip+0x317ab2]        # 0x14165dd00 ; cstring='scholar'
0x134624e: mov    rcx,rbx
0x1346251: call   0x140070f00
0x1346256: jmp    0x141346757
0x134625b: mov    r8d,0xb
0x1346261: lea    rdx,[rip+0x45cef8]        # 0x1417a3160 ; cstring='philosopher'
0x1346268: mov    rcx,rbx
0x134626b: call   0x140070f00
0x1346270: jmp    0x141346757
0x1346275: mov    r8d,0xd
0x134627b: lea    rdx,[rip+0x45ceb6]        # 0x1417a3138 ; cstring='mathematician'
0x1346282: mov    rcx,rbx
0x1346285: call   0x140070f00
0x134628a: jmp    0x141346757
0x134628f: mov    r8d,0x9
0x1346295: lea    rdx,[rip+0x45ceac]        # 0x1417a3148 ; cstring='historian'
0x134629c: mov    rcx,rbx
0x134629f: call   0x140070f00
0x13462a4: jmp    0x141346757
0x13462a9: mov    r8d,0xa
0x13462af: lea    rdx,[rip+0x45ced2]        # 0x1417a3188 ; cstring='astronomer'
0x13462b6: mov    rcx,rbx
0x13462b9: call   0x140070f00
0x13462be: jmp    0x141346757
0x13462c3: mov    r8d,0xa
0x13462c9: lea    rdx,[rip+0x45cec8]        # 0x1417a3198 ; cstring='naturalist'
0x13462d0: mov    rcx,rbx
0x13462d3: call   0x140070f00
0x13462d8: jmp    0x141346757
0x13462dd: mov    r8d,0x7
0x13462e3: lea    rdx,[rip+0x45ce86]        # 0x1417a3170 ; cstring='chemist'
0x13462ea: mov    rcx,rbx
0x13462ed: call   0x140070f00
0x13462f2: jmp    0x141346757
0x13462f7: mov    r8d,0xa
0x13462fd: lea    rdx,[rip+0x45ce74]        # 0x1417a3178 ; cstring='geographer'
0x1346304: mov    rcx,rbx
0x1346307: call   0x140070f00
0x134630c: jmp    0x141346757
0x1346311: mov    r8d,0x8
0x1346317: lea    rdx,[rip+0x346532]        # 0x14168c850 ; cstring='criminal'
0x134631e: mov    rcx,rbx
0x1346321: call   0x140070f00
0x1346326: jmp    0x141346757
0x134632b: mov    r8d,0x7
0x1346331: lea    rdx,[rip+0x45cdc8]        # 0x1417a3100 ; cstring='peddler'
0x1346338: mov    rcx,rbx
0x134633b: call   0x140070f00
0x1346340: jmp    0x141346757
0x1346345: mov    r8d,0x7
0x134634b: lea    rdx,[rip+0x45cdb6]        # 0x1417a3108 ; cstring='prophet'
0x1346352: mov    rcx,rbx
0x1346355: call   0x140070f00
0x134635a: jmp    0x141346757
0x134635f: mov    r8d,0x7
0x1346365: lea    rdx,[rip+0x45cd84]        # 0x1417a30f0 ; cstring='pilgrim'
0x134636c: mov    rcx,rbx
0x134636f: call   0x140070f00
0x1346374: jmp    0x141346757
0x1346379: mov    r8d,0x4
0x134637f: lea    rdx,[rip+0x45cd72]        # 0x1417a30f8 ; cstring='monk'
0x1346386: mov    rcx,rbx
0x1346389: call   0x140070f00
0x134638e: jmp    0x141346757
0x1346393: mov    r8d,0x9
0x1346399: lea    rdx,[rip+0x45cd80]        # 0x1417a3120 ; cstring='messenger'
0x13463a0: mov    rcx,rbx
0x13463a3: call   0x140070f00
0x13463a8: jmp    0x141346757
0x13463ad: cmp    bp,0xffff
0x13463b1: jne    0x141346442
0x13463b7: test   di,di
0x13463ba: js     0x141346424
0x13463bc: mov    rcx,QWORD PTR [rip+0x11c8b2d]        # 0x14250eef0
0x13463c3: mov    rdx,QWORD PTR [rip+0x11c8b1e]        # 0x14250eee8
0x13463ca: mov    rax,rcx
0x13463cd: sub    rax,rdx
0x13463d0: sar    rax,0x3
0x13463d4: cmp    rdi,rax
0x13463d7: jae    0x141346424
0x13463d9: lea    r9,[rdi*8+0x0]
0x13463e1: mov    rax,QWORD PTR [r9+rdx*1]
0x13463e5: cmp    QWORD PTR [rax+0xd0],0x0
0x13463ed: jbe    0x141346424
0x13463ef: test   r14b,r14b
0x13463f2: je     0x141346404
0x13463f4: mov    rdx,QWORD PTR [rdx+r9*1]
0x13463f8: add    rdx,0xe0
0x13463ff: jmp    0x1413466c9
0x1346404: sub    rcx,rdx
0x1346407: sar    rcx,0x3
0x134640b: cmp    rdi,rcx
0x134640e: jae    0x141346725
0x1346414: mov    rdx,QWORD PTR [rdx+r9*1]
0x1346418: add    rdx,0xc0
0x134641f: jmp    0x1413466c9
0x1346424: mov    rcx,rbx
0x1346427: test   r14b,r14b
0x134642a: je     0x14134656b
0x1346430: mov    r8d,0x8
0x1346436: lea    rdx,[rip+0x37b74b]        # 0x1416c1b88 ; cstring='children'
0x134643d: jmp    0x14134674f
0x1346442: mov    rcx,QWORD PTR [rip+0x11c8aa7]        # 0x14250eef0
0x1346449: mov    rdx,QWORD PTR [rip+0x11c8a98]        # 0x14250eee8
0x1346450: test   di,di
0x1346453: js     0x141346504
0x1346459: mov    rax,rcx
0x134645c: sub    rax,rdx
0x134645f: sar    rax,0x3
0x1346463: cmp    rdi,rax
0x1346466: jae    0x141346504
0x134646c: test   bp,bp
0x134646f: js     0x14134649d
0x1346471: mov    rax,QWORD PTR [rdx+rdi*8]
0x1346475: mov    r8,QWORD PTR [rax+0x178]
0x134647c: mov    rax,QWORD PTR [rax+0x180]
0x1346483: sub    rax,r8
0x1346486: sar    rax,0x3
0x134648a: cmp    rbp,rax
0x134648d: jae    0x14134649d
0x134648f: mov    rax,QWORD PTR [r8+rbp*8]
0x1346493: cmp    QWORD PTR [rax+0x110],0x0
0x134649b: ja     0x1413464a2
0x134649d: mov    r8,rdi
0x13464a0: jmp    0x141346510
0x13464a2: test   r14b,r14b
0x13464a5: je     0x1413464c2
0x13464a7: mov    rax,QWORD PTR [rdx+rdi*8]
0x13464ab: mov    rax,QWORD PTR [rax+0x178]
0x13464b2: mov    rdx,QWORD PTR [rax+rbp*8]
0x13464b6: add    rdx,0x120
0x13464bd: jmp    0x1413466c9
0x13464c2: sub    rcx,rdx
0x13464c5: sar    rcx,0x3
0x13464c9: cmp    rdi,rcx
0x13464cc: jae    0x141346725
0x13464d2: mov    rax,QWORD PTR [rdx+rdi*8]
0x13464d6: mov    rdx,QWORD PTR [rax+0x178]
0x13464dd: mov    rax,QWORD PTR [rax+0x180]
0x13464e4: sub    rax,rdx
0x13464e7: sar    rax,0x3
0x13464eb: cmp    rbp,rax
0x13464ee: jae    0x141346725
0x13464f4: mov    rdx,QWORD PTR [rdx+rbp*8]
0x13464f8: add    rdx,0x100
0x13464ff: jmp    0x1413466c9
0x1346504: mov    r8,rdi
0x1346507: test   di,di
0x134650a: js     0x141346424
0x1346510: mov    rax,rcx
0x1346513: sub    rax,rdx
0x1346516: sar    rax,0x3
0x134651a: cmp    r8,rax
0x134651d: jae    0x141346424
0x1346523: mov    rax,QWORD PTR [rdx+r8*8]
0x1346527: cmp    QWORD PTR [rax+0xd0],0x0
0x134652f: jbe    0x141346424
0x1346535: test   di,di
0x1346538: js     0x141346725
0x134653e: test   r14b,r14b
0x1346541: je     0x14134654f
0x1346543: lea    rdx,[rax+0xe0]
0x134654a: jmp    0x1413466c9
0x134654f: sub    rcx,rdx
0x1346552: sar    rcx,0x3
0x1346556: cmp    r8,rcx
0x1346559: jae    0x141346725
0x134655f: lea    rdx,[rax+0xc0]
0x1346566: jmp    0x1413466c9
0x134656b: lea    rdx,[rip+0x31be76]        # 0x1416623e8 ; cstring='child'
0x1346572: mov    r8d,0x5
0x1346578: jmp    0x14134674f
0x134657d: cmp    bp,0xffff
0x1346581: jne    0x1413465e6
0x1346583: mov    rdx,rdi
0x1346586: test   di,di
0x1346589: js     0x1413465ba
0x134658b: mov    rcx,QWORD PTR [rip+0x11c895e]        # 0x14250eef0
0x1346592: mov    r8,QWORD PTR [rip+0x11c894f]        # 0x14250eee8
0x1346599: mov    rax,rcx
0x134659c: sub    rax,r8
0x134659f: sar    rax,0x3
0x13465a3: cmp    rdx,rax
0x13465a6: jae    0x1413465ba
0x13465a8: mov    rax,QWORD PTR [r8+rdi*8]
0x13465ac: cmp    QWORD PTR [rax+0x90],0x0
0x13465b4: ja     0x1413466a8
0x13465ba: mov    rcx,rbx
0x13465bd: test   r14b,r14b
0x13465c0: je     0x1413465d4
0x13465c2: mov    r8d,0x6
0x13465c8: lea    rdx,[rip+0x45cb5d]        # 0x1417a312c ; cstring='babies'
0x13465cf: jmp    0x14134674f
0x13465d4: mov    r8d,0x4
0x13465da: lea    rdx,[rip+0x359423]        # 0x14169fa04 ; cstring='baby'
0x13465e1: jmp    0x14134674f
0x13465e6: mov    rcx,QWORD PTR [rip+0x11c8903]        # 0x14250eef0
0x13465ed: mov    r8,QWORD PTR [rip+0x11c88f4]        # 0x14250eee8
0x13465f4: test   di,di
0x13465f7: js     0x141346672
0x13465f9: mov    rax,rcx
0x13465fc: sub    rax,r8
0x13465ff: sar    rax,0x3
0x1346603: cmp    rdi,rax
0x1346606: jae    0x141346672
0x1346608: test   bp,bp
0x134660b: js     0x141346639
0x134660d: mov    rax,QWORD PTR [r8+rdi*8]
0x1346611: mov    rdx,QWORD PTR [rax+0x178]
0x1346618: mov    rax,QWORD PTR [rax+0x180]
0x134661f: sub    rax,rdx
0x1346622: sar    rax,0x3
0x1346626: cmp    rbp,rax
0x1346629: jae    0x141346639
0x134662b: mov    rax,QWORD PTR [rdx+rbp*8]
0x134662f: cmp    QWORD PTR [rax+0xd0],0x0
0x1346637: ja     0x14134663e
0x1346639: mov    rdx,rdi
0x134663c: jmp    0x14134667e
0x134663e: xor    eax,eax
0x1346640: mov    BYTE PTR [rsp+0x28],r13b
0x1346645: test   r14b,r14b
0x1346648: lea    rcx,[rip+0x11c8879]        # 0x14250eec8
0x134664f: movzx  r9d,bp
0x1346653: movzx  r8d,di
0x1346657: setne  al
0x134665a: mov    rdx,rbx
0x134665d: add    eax,0x6
0x1346660: mov    DWORD PTR [rsp+0x20],eax
0x1346664: call   0x140146540
0x1346669: mov    BYTE PTR [r12],sil
0x134666d: jmp    0x141346754
0x1346672: mov    rdx,rdi
0x1346675: test   di,di
0x1346678: js     0x14134672b
0x134667e: mov    rax,rcx
0x1346681: sub    rax,r8
0x1346684: sar    rax,0x3
0x1346688: cmp    rdx,rax
0x134668b: jae    0x14134672b
0x1346691: mov    rax,QWORD PTR [r8+rdx*8]
0x1346695: cmp    QWORD PTR [rax+0x90],0x0
0x134669d: jbe    0x14134672b
0x13466a3: test   di,di
0x13466a6: js     0x141346725
0x13466a8: test   r14b,r14b
0x13466ab: je     0x1413466b6
0x13466ad: lea    rdx,[rax+0xa0]
0x13466b4: jmp    0x1413466c9
0x13466b6: sub    rcx,r8
0x13466b9: sar    rcx,0x3
0x13466bd: cmp    rdx,rcx
0x13466c0: jae    0x141346725
0x13466c2: lea    rdx,[rax+0x80]
0x13466c9: cmp    rbx,rdx
0x13466cc: je     0x1413466e4
0x13466ce: cmp    QWORD PTR [rdx+0x18],0xf
0x13466d3: mov    r8,QWORD PTR [rdx+0x10]
0x13466d7: jbe    0x1413466dc
0x13466d9: mov    rdx,QWORD PTR [rdx]
0x13466dc: mov    rcx,rbx
0x13466df: call   0x140070f00
0x13466e4: cmp    QWORD PTR [rbx+0x10],0x0
0x13466e9: jbe    0x141346725
0x13466eb: test   r13b,r13b
0x13466ee: je     0x141346725
0x13466f0: mov    rcx,QWORD PTR [rbx+0x18]
0x13466f4: mov    rax,rbx
0x13466f7: cmp    rcx,0xf
0x13466fb: jbe    0x141346700
0x13466fd: mov    rax,QWORD PTR [rbx]
0x1346700: cmp    BYTE PTR [rax],0x61
0x1346703: jl     0x141346725
0x1346705: mov    rax,rbx
0x1346708: cmp    rcx,0xf
0x134670c: jbe    0x141346711
0x134670e: mov    rax,QWORD PTR [rbx]
0x1346711: cmp    BYTE PTR [rax],0x7a
0x1346714: jg     0x141346725
0x1346716: mov    rax,rbx
0x1346719: cmp    rcx,0xf
0x134671d: jbe    0x141346722
0x134671f: mov    rax,QWORD PTR [rbx]
0x1346722: add    BYTE PTR [rax],0xe0
0x1346725: mov    BYTE PTR [r12],sil
0x1346729: jmp    0x141346754
0x134672b: test   r14b,r14b
0x134672e: je     0x14134673f
0x1346730: mov    r8d,0x6
0x1346736: lea    rdx,[rip+0x45c9ef]        # 0x1417a312c ; cstring='babies'
0x134673d: jmp    0x14134674c
0x134673f: mov    r8d,0x4
0x1346745: lea    rdx,[rip+0x3592b8]        # 0x14169fa04 ; cstring='baby'
0x134674c: mov    rcx,rbx
0x134674f: call   0x140070f00
0x1346754: xor    sil,sil
0x1346757: test   r14b,r14b
0x134675a: je     0x141346776
0x134675c: test   sil,sil
0x134675f: je     0x141346776
0x1346761: mov    r8d,0x1
0x1346767: lea    rdx,[rip+0x2bdd82]        # 0x1416044f0 ; cstring='s'
0x134676e: mov    rcx,rbx
0x1346771: call   0x140071040
0x1346776: test   r13b,r13b
0x1346779: mov    r13,QWORD PTR [rsp+0x40]
0x134677e: je     0x141346788
0x1346780: mov    rcx,rbx
0x1346783: call   0x1405468a0
0x1346788: mov    rsi,QWORD PTR [rsp+0x78]
0x134678d: mov    rbp,QWORD PTR [rsp+0x70]
0x1346792: mov    r12,QWORD PTR [rsp+0x80]
0x134679a: add    rsp,0x48
0x134679e: pop    r15
0x13467a0: pop    r14
0x13467a2: pop    rdi
0x13467a3: pop    rbx
0x13467a4: ret
0x13467a5: nop    DWORD PTR [rax]
