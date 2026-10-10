# classic PE:6a70b91c:0270a000; site-type-field; RVA 0x10c6dc0..0x10c70d0
0x010c6dc0: mov    r9,rdx
0x010c6dc3: mov    rdx,rcx
0x010c6dc6: mov    rax,r9
0x010c6dc9: mov    QWORD PTR [r9+0x10],0x0
0x010c6dd1: cmp    QWORD PTR [r9+0x18],0xf
0x010c6dd6: jbe    0x1410c6ddb
0x010c6dd8: mov    rax,QWORD PTR [r9]
0x010c6ddb: mov    BYTE PTR [rax],0x0
0x010c6dde: movsx  rax,WORD PTR [rcx+0x80]
0x010c6de6: cmp    eax,0xa
0x010c6de9: ja     0x1410c70ba
0x010c6def: lea    r8,[rip+0xfffffffffef3920a]        # 0x140000000
0x010c6df6: mov    ecx,DWORD PTR [r8+rax*4+0x10c70d0]
0x010c6dfe: add    rcx,r8
0x010c6e01: jmp    rcx
0x010c6e03: mov    eax,DWORD PTR [rdx+0x348]
0x010c6e09: test   eax,eax
0x010c6e0b: jne    0x1410c6e2a
0x010c6e0d: cmp    DWORD PTR [rdx+0x34c],eax
0x010c6e13: jle    0x1410c6e41
0x010c6e15: lea    rdx,[rip+0x58064c]        # 0x141647468 ; literal="fortress"
0x010c6e1c: mov    r8d,0x8
0x010c6e22: mov    rcx,r9
0x010c6e25: jmp    0x14006f860
0x010c6e2a: jle    0x1410c6e41
0x010c6e2c: lea    rdx,[rip+0x67d38d]        # 0x1417441c0 ; literal="mountain halls"
0x010c6e33: mov    r8d,0xe
0x010c6e39: mov    rcx,r9
0x010c6e3c: jmp    0x14006f860
0x010c6e41: lea    rdx,[rip+0x67d4c0]        # 0x141744308 ; literal="hillocks"
0x010c6e48: mov    r8d,0x8
0x010c6e4e: mov    rcx,r9
0x010c6e51: jmp    0x14006f860
0x010c6e56: cmp    DWORD PTR [rdx+0x2a8],0x0
0x010c6e5d: jle    0x1410c6e6f
0x010c6e5f: mov    rax,QWORD PTR [rdx+0x2a0]
0x010c6e66: test   BYTE PTR [rax],0x8
0x010c6e69: je     0x1410c6e6f
0x010c6e6b: mov    al,0x1
0x010c6e6d: jmp    0x1410c6e71
0x010c6e6f: xor    al,al
0x010c6e71: test   al,al
0x010c6e73: lea    rcx,[rip+0x67d486]        # 0x141744300 ; literal="pits"
0x010c6e7a: movzx  eax,al
0x010c6e7d: lea    rdx,[rip+0x5805e4]        # 0x141647468 ; literal="fortress"
0x010c6e84: cmove  rdx,rcx
0x010c6e88: mov    rcx,r9
0x010c6e8b: lea    r8,[rax*4+0x4]
0x010c6e93: jmp    0x14006f860
0x010c6e98: lea    rdx,[rip+0x580575]        # 0x141647414 ; literal="cave"
0x010c6e9f: mov    r8d,0x4
0x010c6ea5: mov    rcx,r9
0x010c6ea8: jmp    0x14006f860
0x010c6ead: lea    rdx,[rip+0x67d43c]        # 0x1417442f0 ; literal="forest retreat"
0x010c6eb4: mov    r8d,0xe
0x010c6eba: mov    rcx,r9
0x010c6ebd: jmp    0x14006f860
0x010c6ec2: cmp    DWORD PTR [rdx+0x2a8],0x0
0x010c6ec9: jle    0x1410c6edb
0x010c6ecb: mov    rax,QWORD PTR [rdx+0x2a0]
0x010c6ed2: test   BYTE PTR [rax],0x8
0x010c6ed5: je     0x1410c6edb
0x010c6ed7: mov    al,0x1
0x010c6ed9: jmp    0x1410c6edd
0x010c6edb: xor    al,al
0x010c6edd: test   al,al
0x010c6edf: lea    rcx,[rip+0x67d3fe]        # 0x1417442e4 ; literal="hamlet"
0x010c6ee6: movzx  eax,al
0x010c6ee9: lea    rdx,[rip+0x57aa28]        # 0x141641918 ; literal="town"
0x010c6ef0: cmove  rdx,rcx
0x010c6ef4: xor    rax,0x1
0x010c6ef8: mov    rcx,r9
0x010c6efb: lea    r8,[rax*2+0x4]
0x010c6f03: jmp    0x14006f860
0x010c6f08: mov    rax,QWORD PTR [rdx+0x310]
0x010c6f0f: test   rax,rax
0x010c6f12: je     0x1410c6f55
0x010c6f14: movsx  ecx,WORD PTR [rax+0x4]
0x010c6f18: test   ecx,ecx
0x010c6f1a: je     0x1410c6f55
0x010c6f1c: sub    ecx,0x1
0x010c6f1f: je     0x1410c6f55
0x010c6f21: sub    ecx,0x1
0x010c6f24: je     0x1410c6f40
0x010c6f26: cmp    ecx,0x1
0x010c6f29: jne    0x1410c6f55
0x010c6f2b: lea    rdx,[rip+0x560f8a]        # 0x141627ebc ; literal="shrine"
0x010c6f32: mov    r8d,0x6
0x010c6f38: mov    rcx,r9
0x010c6f3b: jmp    0x14006f860
0x010c6f40: lea    rdx,[rip+0x67d391]        # 0x1417442d8 ; literal="labyrinth"
0x010c6f47: mov    r8d,0x9
0x010c6f4d: mov    rcx,r9
0x010c6f50: jmp    0x14006f860
0x010c6f55: lea    rdx,[rip+0x5aa718]        # 0x141671674 ; literal="lair"
0x010c6f5c: mov    r8d,0x4
0x010c6f62: mov    rcx,r9
0x010c6f65: jmp    0x14006f860
0x010c6f6a: mov    rax,QWORD PTR [rdx+0x310]
0x010c6f71: test   rax,rax
0x010c6f74: je     0x1410c6e15
0x010c6f7a: movsx  ecx,WORD PTR [rax]
0x010c6f7d: sub    ecx,0x1
0x010c6f80: je     0x1410c6fcb
0x010c6f82: sub    ecx,0x1
0x010c6f85: je     0x1410c6fb6
0x010c6f87: cmp    ecx,0x1
0x010c6f8a: je     0x1410c6fa1
0x010c6f8c: lea    rdx,[rip+0x67d329]        # 0x1417442bc ; literal="castle"
0x010c6f93: mov    r8d,0x6
0x010c6f99: mov    rcx,r9
0x010c6f9c: jmp    0x14006f860
0x010c6fa1: lea    rdx,[rip+0x54d914]        # 0x1416148bc ; literal="fort"
0x010c6fa8: mov    r8d,0x4
0x010c6fae: mov    rcx,r9
0x010c6fb1: jmp    0x14006f860
0x010c6fb6: lea    rdx,[rip+0x67d30b]        # 0x1417442c8 ; literal="monastery"
0x010c6fbd: mov    r8d,0x9
0x010c6fc3: mov    rcx,r9
0x010c6fc6: jmp    0x14006f860
0x010c6fcb: lea    rdx,[rip+0x646482]        # 0x14170d454 ; literal="tower"
0x010c6fd2: mov    r8d,0x5
0x010c6fd8: mov    rcx,r9
0x010c6fdb: jmp    0x14006f860
0x010c6fe0: mov    rax,QWORD PTR [rdx+0x310]
0x010c6fe7: test   rax,rax
0x010c6fea: je     0x1410c707b
0x010c6ff0: movsx  ecx,WORD PTR [rax+0x2]
0x010c6ff4: test   ecx,ecx
0x010c6ff6: je     0x1410c7066
0x010c6ff8: sub    ecx,0x1
0x010c6ffb: je     0x1410c7051
0x010c6ffd: cmp    ecx,0x1
0x010c7000: jne    0x1410c707b
0x010c7002: mov    eax,DWORD PTR [rdx+0x228]
0x010c7008: cmp    eax,0x64
0x010c700b: jl     0x1410c7022
0x010c700d: lea    rdx,[rip+0x67d294]        # 0x1417442a8 ; literal="mysterious palace"
0x010c7014: mov    r8d,0x11
0x010c701a: mov    rcx,r9
0x010c701d: jmp    0x14006f860
0x010c7022: cmp    eax,0xf
0x010c7025: jl     0x1410c703c
0x010c7027: lea    rdx,[rip+0x67d392]        # 0x1417443c0 ; literal="mysterious dungeon"
0x010c702e: mov    r8d,0x12
0x010c7034: mov    rcx,r9
0x010c7037: jmp    0x14006f860
0x010c703c: lea    rdx,[rip+0x67d36d]        # 0x1417443b0 ; literal="mysterious lair"
0x010c7043: mov    r8d,0xf
0x010c7049: mov    rcx,r9
0x010c704c: jmp    0x14006f860
0x010c7051: lea    rdx,[rip+0x67b238]        # 0x141742290 ; literal="vault"
0x010c7058: mov    r8d,0x5
0x010c705e: mov    rcx,r9
0x010c7061: jmp    0x14006f860
0x010c7066: lea    rdx,[rip+0x563a1b]        # 0x14162aa88 ; literal="tomb"
0x010c706d: mov    r8d,0x4
0x010c7073: mov    rcx,r9
0x010c7076: jmp    0x14006f860
0x010c707b: mov    r8d,0x8
0x010c7081: lea    rdx,[rip+0x67d318]        # 0x1417443a0 ; literal="monument"
0x010c7088: mov    rcx,r9
0x010c708b: jmp    0x14006f860
0x010c7090: lea    rdx,[rip+0x67d2fd]        # 0x141744394 ; literal="camp"
0x010c7097: mov    r8d,0x4
0x010c709d: mov    rcx,r9
0x010c70a0: jmp    0x14006f860
0x010c70a5: lea    rdx,[rip+0x67d2d4]        # 0x141744380 ; literal="important location"
0x010c70ac: mov    r8d,0x12
0x010c70b2: mov    rcx,r9
0x010c70b5: jmp    0x14006f860
0x010c70ba: lea    rdx,[rip+0x5a90a7]        # 0x141670168 ; literal="site"
0x010c70c1: mov    r8d,0x4
0x010c70c7: mov    rcx,r9
0x010c70ca: jmp    0x14006f860
0x010c70cf: nop
