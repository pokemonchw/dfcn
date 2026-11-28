; classic PE:6aea11a5:0272d000; poetic-topic; RVA 0xe88cb0..0xe8902c; code ends 0xe88fd8
0x00e88cb0: cmp    edx,0x14
0x00e88cb3: ja     0x140e88fd4
0x00e88cb9: push   rbx
0x00e88cba: sub    rsp,0x130
0x00e88cc1: mov    rax,QWORD PTR [rip+0xa2f378]        # 0x1418b8040
0x00e88cc8: xor    rax,rsp
0x00e88ccb: mov    QWORD PTR [rsp+0x120],rax
0x00e88cd3: mov    rbx,rcx
0x00e88cd6: movsxd rax,edx
0x00e88cd9: lea    rcx,[rip+0xffffffffff177320]        # 0x140000000
0x00e88ce0: mov    edx,DWORD PTR [rcx+rax*4+0xe88fd8]
0x00e88ce7: add    rdx,rcx
0x00e88cea: jmp    rdx
0x00e88cec: mov    r8d,0x8
0x00e88cf2: lea    rdx,[rip+0x8c1ebf]        # 0x14174abb8 ; literal="the past"
0x00e88cf9: jmp    0x140e88fb4
0x00e88cfe: mov    r8d,0xe
0x00e88d04: lea    rdx,[rip+0x8c1e9d]        # 0x14174aba8 ; literal="current events"
0x00e88d0b: jmp    0x140e88fb4
0x00e88d10: mov    r8d,0xa
0x00e88d16: lea    rdx,[rip+0x8c250b]        # 0x14174b228 ; literal="the future"
0x00e88d1d: jmp    0x140e88fb4
0x00e88d22: mov    r8d,0x19
0x00e88d28: lea    rdx,[rip+0x8c24d9]        # 0x14174b208 ; literal="someone recently deceased"
0x00e88d2f: jmp    0x140e88fb4
0x00e88d34: mov    r8d,0x18
0x00e88d3a: lea    rdx,[rip+0x8c250f]        # 0x14174b250 ; literal="someone recently retired"
0x00e88d41: jmp    0x140e88fb4
0x00e88d46: mov    r8d,0x8
0x00e88d4c: lea    rdx,[rip+0x7a37b5]        # 0x14162c508 ; literal="religion"
0x00e88d53: jmp    0x140e88fb4
0x00e88d58: cmp    r8d,0xffffffff
0x00e88d5c: je     0x140e88ea1
0x00e88d62: cmp    r8d,0x15
0x00e88d66: je     0x140e88e8f
0x00e88d6c: cmp    r8d,0x1e
0x00e88d70: je     0x140e88e7d
0x00e88d76: cmp    r8d,0x30
0x00e88d7a: je     0x140e88e6b
0x00e88d80: cmp    r8d,0x4b
0x00e88d84: je     0x140e88e59
0x00e88d8a: cmp    r8d,0x7a
0x00e88d8e: je     0x140e88e47
0x00e88d94: xorps  xmm0,xmm0
0x00e88d97: movups XMMWORD PTR [rsp+0x100],xmm0
0x00e88d9f: xor    eax,eax
0x00e88da1: mov    QWORD PTR [rsp+0x110],rax
0x00e88da9: mov    QWORD PTR [rsp+0x118],0xf
0x00e88db5: mov    BYTE PTR [rsp+0x100],al
0x00e88dbc: lea    rdx,[rsp+0x100]
0x00e88dc4: movzx  ecx,r8w
0x00e88dc8: call   0x14076d480
0x00e88dcd: lea    rdx,[rsp+0x100]
0x00e88dd5: cmp    QWORD PTR [rsp+0x118],0xf
0x00e88dde: cmova  rdx,QWORD PTR [rsp+0x100]
0x00e88de7: mov    r8,QWORD PTR [rsp+0x110]
0x00e88def: mov    rcx,rbx
0x00e88df2: call   0x140070fd0
0x00e88df7: nop
0x00e88df8: mov    rdx,QWORD PTR [rsp+0x118]
0x00e88e00: cmp    rdx,0xf
0x00e88e04: jbe    0x140e88fbc
0x00e88e0a: inc    rdx
0x00e88e0d: mov    rcx,QWORD PTR [rsp+0x100]
0x00e88e15: mov    rax,rcx
0x00e88e18: cmp    rdx,0x1000
0x00e88e1f: jb     0x140e88e3d
0x00e88e21: add    rdx,0x27
0x00e88e25: mov    rcx,QWORD PTR [rcx-0x8]
0x00e88e29: sub    rax,rcx
0x00e88e2c: add    rax,0xfffffffffffffff8
0x00e88e30: cmp    rax,0x1f
0x00e88e34: jbe    0x140e88e3d
0x00e88e36: call   QWORD PTR [rip+0x772c8c]        # 0x1415fbac8
0x00e88e3c: int3
0x00e88e3d: call   0x14154de20
0x00e88e42: jmp    0x140e88fbc
0x00e88e47: mov    r8d,0x12
0x00e88e4d: lea    rdx,[rip+0x8c2384]        # 0x14174b1d8 ; literal="the concept of war"
0x00e88e54: jmp    0x140e88fb4
0x00e88e59: mov    r8d,0x15
0x00e88e5f: lea    rdx,[rip+0x8c238a]        # 0x14174b1f0 ; literal="the concept of nature"
0x00e88e66: jmp    0x140e88fb4
0x00e88e6b: mov    r8d,0x16
0x00e88e71: lea    rdx,[rip+0x8c2330]        # 0x14174b1a8 ; literal="the concept of hunting"
0x00e88e78: jmp    0x140e88fb4
0x00e88e7d: mov    r8d,0x15
0x00e88e83: lea    rdx,[rip+0x8c2336]        # 0x14174b1c0 ; literal="the concept of family"
0x00e88e8a: jmp    0x140e88fb4
0x00e88e8f: mov    r8d,0x14
0x00e88e95: lea    rdx,[rip+0x8c239c]        # 0x14174b238 ; literal="the concept of death"
0x00e88e9c: jmp    0x140e88fb4
0x00e88ea1: lea    rdx,[rip+0x8c2428]        # 0x14174b2d0 ; literal="an abstract concept"
0x00e88ea8: jmp    0x140e88fae
0x00e88ead: cmp    r8d,0xffffffff
0x00e88eb1: je     0x140e88ee4
0x00e88eb3: lea    rcx,[rsp+0x30]
0x00e88eb8: call   0x140073640
0x00e88ebd: xor    eax,eax
0x00e88ebf: mov    WORD PTR [rsp+0x28],ax
0x00e88ec4: mov    WORD PTR [rsp+0x20],0x1
0x00e88ecb: lea    r9,[rsp+0x30]
0x00e88ed0: mov    rdx,rbx
0x00e88ed3: lea    rcx,[rip+0x168d15e]        # 0x142516038
0x00e88eda: call   0x140ba79f0
0x00e88edf: jmp    0x140e88fbc
0x00e88ee4: lea    rdx,[rip+0x8c23cd]        # 0x14174b2b8 ; literal="a historical figure"
0x00e88eeb: jmp    0x140e88fae
0x00e88ef0: mov    r8d,0x10
0x00e88ef6: lea    rdx,[rip+0x8c240b]        # 0x14174b308 ; literal="a specific place"
0x00e88efd: jmp    0x140e88fb4
0x00e88f02: mov    r8d,0x1c
0x00e88f08: lea    rdx,[rip+0x8c23d9]        # 0x14174b2e8 ; literal="a specific wilderness region"
0x00e88f0f: jmp    0x140e88fb4
0x00e88f14: mov    r8d,0x6
0x00e88f1a: lea    rdx,[rip+0x7cf9d7]        # 0x1416588f8 ; literal="nature"
0x00e88f21: jmp    0x140e88fb4
0x00e88f26: mov    r8d,0x7
0x00e88f2c: lea    rdx,[rip+0x8bf205]        # 0x141748138 ; literal="a lover"
0x00e88f33: jmp    0x140e88fb4
0x00e88f35: mov    r8d,0x6
0x00e88f3b: lea    rdx,[rip+0x7cf876]        # 0x1416587b8 ; literal="family"
0x00e88f42: jmp    0x140e88fb4
0x00e88f44: lea    rdx,[rip+0x8c2335]        # 0x14174b280 ; literal="alcoholic beverages"
0x00e88f4b: jmp    0x140e88fae
0x00e88f4d: mov    r8d,0x9
0x00e88f53: lea    rdx,[rip+0x7d19ce]        # 0x14165a928 ; literal="a journey"
0x00e88f5a: jmp    0x140e88fb4
0x00e88f5c: mov    r8d,0x3
0x00e88f62: lea    rdx,[rip+0x7d74cb]        # 0x141660434 ; literal="war"
0x00e88f69: jmp    0x140e88fb4
0x00e88f6b: mov    r8d,0x8
0x00e88f71: lea    rdx,[rip+0x8c22f8]        # 0x14174b270 ; literal="the hunt"
0x00e88f78: jmp    0x140e88fb4
0x00e88f7a: mov    r8d,0x6
0x00e88f80: lea    rdx,[rip+0x8c2325]        # 0x14174b2ac ; literal="mining"
0x00e88f87: jmp    0x140e88fb4
0x00e88f89: mov    r8d,0x5
0x00e88f8f: lea    rdx,[rip+0x77b022]        # 0x141603fb8 ; literal="death"
0x00e88f96: jmp    0x140e88fb4
0x00e88f98: mov    r8d,0xb
0x00e88f9e: lea    rdx,[rip+0x8786a3]        # 0x141701648 ; literal="immortality"
0x00e88fa5: jmp    0x140e88fb4
0x00e88fa7: lea    rdx,[rip+0x8c22ea]        # 0x14174b298 ; literal="someone's character"
0x00e88fae: mov    r8d,0x13
0x00e88fb4: mov    rcx,rbx
0x00e88fb7: call   0x140070fd0
0x00e88fbc: mov    rcx,QWORD PTR [rsp+0x120]
0x00e88fc4: xor    rcx,rsp
0x00e88fc7: call   0x14154de00
0x00e88fcc: add    rsp,0x130
0x00e88fd3: pop    rbx
0x00e88fd4: ret
0x00e88fd5: nop    DWORD PTR [rax]
