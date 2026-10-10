# reference PE:6a70a6d9:02711000; site-type-field; RVA 0x10cbe50..0x10cc160
0x010cbe50: mov    r9,rdx
0x010cbe53: mov    rdx,rcx
0x010cbe56: mov    rax,r9
0x010cbe59: mov    QWORD PTR [r9+0x10],0x0
0x010cbe61: cmp    QWORD PTR [r9+0x18],0xf
0x010cbe66: jbe    0x1410cbe6b
0x010cbe68: mov    rax,QWORD PTR [r9]
0x010cbe6b: mov    BYTE PTR [rax],0x0
0x010cbe6e: movsx  rax,WORD PTR [rcx+0x80]
0x010cbe76: cmp    eax,0xa
0x010cbe79: ja     0x1410cc14a
0x010cbe7f: lea    r8,[rip+0xfffffffffef3417a]        # 0x140000000
0x010cbe86: mov    ecx,DWORD PTR [r8+rax*4+0x10cc160]
0x010cbe8e: add    rcx,r8
0x010cbe91: jmp    rcx
0x010cbe93: mov    eax,DWORD PTR [rdx+0x348]
0x010cbe99: test   eax,eax
0x010cbe9b: jne    0x1410cbeba
0x010cbe9d: cmp    DWORD PTR [rdx+0x34c],eax
0x010cbea3: jle    0x1410cbed1
0x010cbea5: lea    rdx,[rip+0x580554]        # 0x14164c400 ; literal="fortress"
0x010cbeac: mov    r8d,0x8
0x010cbeb2: mov    rcx,r9
0x010cbeb5: jmp    0x14006f8d0
0x010cbeba: jle    0x1410cbed1
0x010cbebc: lea    rdx,[rip+0x67d9d5]        # 0x141749898 ; literal="mountain halls"
0x010cbec3: mov    r8d,0xe
0x010cbec9: mov    rcx,r9
0x010cbecc: jmp    0x14006f8d0
0x010cbed1: lea    rdx,[rip+0x67d9d0]        # 0x1417498a8 ; literal="hillocks"
0x010cbed8: mov    r8d,0x8
0x010cbede: mov    rcx,r9
0x010cbee1: jmp    0x14006f8d0
0x010cbee6: cmp    DWORD PTR [rdx+0x2a8],0x0
0x010cbeed: jle    0x1410cbeff
0x010cbeef: mov    rax,QWORD PTR [rdx+0x2a0]
0x010cbef6: test   BYTE PTR [rax],0x8
0x010cbef9: je     0x1410cbeff
0x010cbefb: mov    al,0x1
0x010cbefd: jmp    0x1410cbf01
0x010cbeff: xor    al,al
0x010cbf01: test   al,al
0x010cbf03: lea    rcx,[rip+0x67d9aa]        # 0x1417498b4 ; literal="pits"
0x010cbf0a: movzx  eax,al
0x010cbf0d: lea    rdx,[rip+0x5804ec]        # 0x14164c400 ; literal="fortress"
0x010cbf14: cmove  rdx,rcx
0x010cbf18: mov    rcx,r9
0x010cbf1b: lea    r8,[rax*4+0x4]
0x010cbf23: jmp    0x14006f8d0
0x010cbf28: lea    rdx,[rip+0x58047d]        # 0x14164c3ac ; literal="cave"
0x010cbf2f: mov    r8d,0x4
0x010cbf35: mov    rcx,r9
0x010cbf38: jmp    0x14006f8d0
0x010cbf3d: lea    rdx,[rip+0x67d97c]        # 0x1417498c0 ; literal="forest retreat"
0x010cbf44: mov    r8d,0xe
0x010cbf4a: mov    rcx,r9
0x010cbf4d: jmp    0x14006f8d0
0x010cbf52: cmp    DWORD PTR [rdx+0x2a8],0x0
0x010cbf59: jle    0x1410cbf6b
0x010cbf5b: mov    rax,QWORD PTR [rdx+0x2a0]
0x010cbf62: test   BYTE PTR [rax],0x8
0x010cbf65: je     0x1410cbf6b
0x010cbf67: mov    al,0x1
0x010cbf69: jmp    0x1410cbf6d
0x010cbf6b: xor    al,al
0x010cbf6d: test   al,al
0x010cbf6f: lea    rcx,[rip+0x67d95a]        # 0x1417498d0 ; literal="hamlet"
0x010cbf76: movzx  eax,al
0x010cbf79: lea    rdx,[rip+0x57ac84]        # 0x141646c04 ; literal="town"
0x010cbf80: cmove  rdx,rcx
0x010cbf84: xor    rax,0x1
0x010cbf88: mov    rcx,r9
0x010cbf8b: lea    r8,[rax*2+0x4]
0x010cbf93: jmp    0x14006f8d0
0x010cbf98: mov    rax,QWORD PTR [rdx+0x310]
0x010cbf9f: test   rax,rax
0x010cbfa2: je     0x1410cbfe5
0x010cbfa4: movsx  ecx,WORD PTR [rax+0x4]
0x010cbfa8: test   ecx,ecx
0x010cbfaa: je     0x1410cbfe5
0x010cbfac: sub    ecx,0x1
0x010cbfaf: je     0x1410cbfe5
0x010cbfb1: sub    ecx,0x1
0x010cbfb4: je     0x1410cbfd0
0x010cbfb6: cmp    ecx,0x1
0x010cbfb9: jne    0x1410cbfe5
0x010cbfbb: lea    rdx,[rip+0x56072a]        # 0x14162c6ec ; literal="shrine"
0x010cbfc2: mov    r8d,0x6
0x010cbfc8: mov    rcx,r9
0x010cbfcb: jmp    0x14006f8d0
0x010cbfd0: lea    rdx,[rip+0x67d901]        # 0x1417498d8 ; literal="labyrinth"
0x010cbfd7: mov    r8d,0x9
0x010cbfdd: mov    rcx,r9
0x010cbfe0: jmp    0x14006f8d0
0x010cbfe5: lea    rdx,[rip+0x5aa1f4]        # 0x1416761e0 ; literal="lair"
0x010cbfec: mov    r8d,0x4
0x010cbff2: mov    rcx,r9
0x010cbff5: jmp    0x14006f8d0
0x010cbffa: mov    rax,QWORD PTR [rdx+0x310]
0x010cc001: test   rax,rax
0x010cc004: je     0x1410cbea5
0x010cc00a: movsx  ecx,WORD PTR [rax]
0x010cc00d: sub    ecx,0x1
0x010cc010: je     0x1410cc05b
0x010cc012: sub    ecx,0x1
0x010cc015: je     0x1410cc046
0x010cc017: cmp    ecx,0x1
0x010cc01a: je     0x1410cc031
0x010cc01c: lea    rdx,[rip+0x67da19]        # 0x141749a3c ; literal="castle"
0x010cc023: mov    r8d,0x6
0x010cc029: mov    rcx,r9
0x010cc02c: jmp    0x14006f8d0
0x010cc031: lea    rdx,[rip+0x54d918]        # 0x141619950 ; literal="fort"
0x010cc038: mov    r8d,0x4
0x010cc03e: mov    rcx,r9
0x010cc041: jmp    0x14006f8d0
0x010cc046: lea    rdx,[rip+0x67d9e3]        # 0x141749a30 ; literal="monastery"
0x010cc04d: mov    r8d,0x9
0x010cc053: mov    rcx,r9
0x010cc056: jmp    0x14006f8d0
0x010cc05b: lea    rdx,[rip+0x646132]        # 0x141712194 ; literal="tower"
0x010cc062: mov    r8d,0x5
0x010cc068: mov    rcx,r9
0x010cc06b: jmp    0x14006f8d0
0x010cc070: mov    rax,QWORD PTR [rdx+0x310]
0x010cc077: test   rax,rax
0x010cc07a: je     0x1410cc10b
0x010cc080: movsx  ecx,WORD PTR [rax+0x2]
0x010cc084: test   ecx,ecx
0x010cc086: je     0x1410cc0f6
0x010cc088: sub    ecx,0x1
0x010cc08b: je     0x1410cc0e1
0x010cc08d: cmp    ecx,0x1
0x010cc090: jne    0x1410cc10b
0x010cc092: mov    eax,DWORD PTR [rdx+0x228]
0x010cc098: cmp    eax,0x64
0x010cc09b: jl     0x1410cc0b2
0x010cc09d: lea    rdx,[rip+0x67d9a4]        # 0x141749a48 ; literal="mysterious palace"
0x010cc0a4: mov    r8d,0x11
0x010cc0aa: mov    rcx,r9
0x010cc0ad: jmp    0x14006f8d0
0x010cc0b2: cmp    eax,0xf
0x010cc0b5: jl     0x1410cc0cc
0x010cc0b7: lea    rdx,[rip+0x67d9a2]        # 0x141749a60 ; literal="mysterious dungeon"
0x010cc0be: mov    r8d,0x12
0x010cc0c4: mov    rcx,r9
0x010cc0c7: jmp    0x14006f8d0
0x010cc0cc: lea    rdx,[rip+0x67d9a5]        # 0x141749a78 ; literal="mysterious lair"
0x010cc0d3: mov    r8d,0xf
0x010cc0d9: mov    rcx,r9
0x010cc0dc: jmp    0x14006f8d0
0x010cc0e1: lea    rdx,[rip+0x67b850]        # 0x141747938 ; literal="vault"
0x010cc0e8: mov    r8d,0x5
0x010cc0ee: mov    rcx,r9
0x010cc0f1: jmp    0x14006f8d0
0x010cc0f6: lea    rdx,[rip+0x56394f]        # 0x14162fa4c ; literal="tomb"
0x010cc0fd: mov    r8d,0x4
0x010cc103: mov    rcx,r9
0x010cc106: jmp    0x14006f8d0
0x010cc10b: mov    r8d,0x8
0x010cc111: lea    rdx,[rip+0x67d970]        # 0x141749a88 ; literal="monument"
0x010cc118: mov    rcx,r9
0x010cc11b: jmp    0x14006f8d0
0x010cc120: lea    rdx,[rip+0x67d96d]        # 0x141749a94 ; literal="camp"
0x010cc127: mov    r8d,0x4
0x010cc12d: mov    rcx,r9
0x010cc130: jmp    0x14006f8d0
0x010cc135: lea    rdx,[rip+0x67d964]        # 0x141749aa0 ; literal="important location"
0x010cc13c: mov    r8d,0x12
0x010cc142: mov    rcx,r9
0x010cc145: jmp    0x14006f8d0
0x010cc14a: lea    rdx,[rip+0x5a9717]        # 0x141675868 ; literal="site"
0x010cc151: mov    r8d,0x4
0x010cc157: mov    rcx,r9
0x010cc15a: jmp    0x14006f8d0
0x010cc15f: nop
