; classic PE:6aea11a5:0272d000; reference-description:general_ref_feature_layerst; RVA 0xf06f80..0xf07133; code ends 0xf07133
0x00f06f80: mov    QWORD PTR [rsp+0x18],rbx
0x00f06f85: mov    QWORD PTR [rsp+0x20],rsi
0x00f06f8a: push   rdi
0x00f06f8b: sub    rsp,0x50
0x00f06f8f: mov    rax,QWORD PTR [rip+0x9b10aa]        # 0x1418b8040
0x00f06f96: xor    rax,rsp
0x00f06f99: mov    QWORD PTR [rsp+0x40],rax
0x00f06f9e: mov    esi,r8d
0x00f06fa1: mov    rbx,rdx
0x00f06fa4: mov    QWORD PTR [rdx+0x10],0x0
0x00f06fac: mov    rax,rdx
0x00f06faf: cmp    QWORD PTR [rdx+0x18],0xf
0x00f06fb4: jbe    0x140f06fb9
0x00f06fb6: mov    rax,QWORD PTR [rdx]
0x00f06fb9: mov    BYTE PTR [rax],0x0
0x00f06fbc: mov    rdx,QWORD PTR [rip+0x1600f15]        # 0x142507ed8
0x00f06fc3: add    rdx,0x250
0x00f06fca: mov    ecx,DWORD PTR [rcx+0x8]
0x00f06fcd: call   0x1400e2b20
0x00f06fd2: mov    rdi,rax
0x00f06fd5: test   rax,rax
0x00f06fd8: je     0x140f07116
0x00f06fde: and    esi,0x2
0x00f06fe1: je     0x140f0701b
0x00f06fe3: mov    r8d,0xa
0x00f06fe9: lea    rdx,[rip+0x7f83d0]        # 0x1416ff3c0 ; literal="[LPAGE:FL:"
0x00f06ff0: mov    rcx,rbx
0x00f06ff3: call   0x140070fd0
0x00f06ff8: mov    rdx,rbx
0x00f06ffb: mov    ecx,DWORD PTR [rdi+0x80]
0x00f07001: call   0x140542fb0
0x00f07006: mov    r8d,0x1
0x00f0700c: lea    rdx,[rip+0x70d385]        # 0x141614398 ; literal="]"
0x00f07013: mov    rcx,rbx
0x00f07016: call   0x140070fd0
0x00f0701b: cmp    BYTE PTR [rdi+0x7a],0x0
0x00f0701f: je     0x140f070b9
0x00f07025: xorps  xmm0,xmm0
0x00f07028: movups XMMWORD PTR [rsp+0x20],xmm0
0x00f0702d: mov    QWORD PTR [rsp+0x30],0x0
0x00f07036: mov    QWORD PTR [rsp+0x38],0xf
0x00f0703f: mov    BYTE PTR [rsp+0x20],0x0
0x00f07044: lea    rcx,[rdi+0x8]
0x00f07048: xor    r9d,r9d
0x00f0704b: mov    r8b,0x1
0x00f0704e: lea    rdx,[rsp+0x20]
0x00f07053: call   0x140aaafe0
0x00f07058: lea    rdx,[rsp+0x20]
0x00f0705d: cmp    QWORD PTR [rsp+0x38],0xf
0x00f07063: cmova  rdx,QWORD PTR [rsp+0x20]
0x00f07069: mov    r8,QWORD PTR [rsp+0x30]
0x00f0706e: mov    rcx,rbx
0x00f07071: call   0x140070fd0
0x00f07076: nop
0x00f07077: mov    rdx,QWORD PTR [rsp+0x38]
0x00f0707c: cmp    rdx,0xf
0x00f07080: jbe    0x140f070fd
0x00f07082: inc    rdx
0x00f07085: mov    rcx,QWORD PTR [rsp+0x20]
0x00f0708a: mov    rax,rcx
0x00f0708d: cmp    rdx,0x1000
0x00f07094: jb     0x140f070b2
0x00f07096: add    rdx,0x27
0x00f0709a: mov    rcx,QWORD PTR [rcx-0x8]
0x00f0709e: sub    rax,rcx
0x00f070a1: add    rax,0xfffffffffffffff8
0x00f070a5: cmp    rax,0x1f
0x00f070a9: jbe    0x140f070b2
0x00f070ab: call   QWORD PTR [rip+0x6f4a17]        # 0x1415fbac8
0x00f070b1: int3
0x00f070b2: call   0x14154de20
0x00f070b7: jmp    0x140f070fd
0x00f070b9: movsx  ecx,WORD PTR [rdi]
0x00f070bc: test   ecx,ecx
0x00f070be: je     0x140f070e8
0x00f070c0: sub    ecx,0x1
0x00f070c3: je     0x140f070d9
0x00f070c5: cmp    ecx,0x1
0x00f070c8: jne    0x140f070fd
0x00f070ca: mov    r8d,0xe
0x00f070d0: lea    rdx,[rip+0x7f8279]        # 0x1416ff350 ; literal="the Underworld"
0x00f070d7: jmp    0x140f070f5
0x00f070d9: mov    r8d,0x1d
0x00f070df: lea    rdx,[rip+0x8529d2]        # 0x141759ab8 ; literal="the fiery bowels of the earth"
0x00f070e6: jmp    0x140f070f5
0x00f070e8: mov    r8d,0x17
0x00f070ee: lea    rdx,[rip+0x7f828b]        # 0x1416ff380 ; literal="the depths of the world"
0x00f070f5: mov    rcx,rbx
0x00f070f8: call   0x140070fd0
0x00f070fd: test   esi,esi
0x00f070ff: je     0x140f07116
0x00f07101: mov    r8d,0x8
0x00f07107: lea    rdx,[rip+0x70d7aa]        # 0x1416148b8 ; literal="[/LPAGE]"
0x00f0710e: mov    rcx,rbx
0x00f07111: call   0x140070fd0
0x00f07116: mov    rcx,QWORD PTR [rsp+0x40]
0x00f0711b: xor    rcx,rsp
0x00f0711e: call   0x14154de00
0x00f07123: mov    rbx,QWORD PTR [rsp+0x70]
0x00f07128: mov    rsi,QWORD PTR [rsp+0x78]
0x00f0712d: add    rsp,0x50
0x00f07131: pop    rdi
0x00f07132: ret
