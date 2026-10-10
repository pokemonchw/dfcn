# classic PE:6a70b91c:0270a000; entity-field; RVA 0xb8f940..0xb8fab8
0x00b8f940: mov    QWORD PTR [rsp+0x8],rbx
0x00b8f945: mov    QWORD PTR [rsp+0x20],rsi
0x00b8f94a: push   rdi
0x00b8f94b: sub    rsp,0x50
0x00b8f94f: mov    rax,QWORD PTR [rip+0xd066ea]        # 0x141896040
0x00b8f956: xor    rax,rsp
0x00b8f959: mov    QWORD PTR [rsp+0x40],rax
0x00b8f95e: mov    esi,r9d
0x00b8f961: mov    rbx,rdx
0x00b8f964: mov    rax,QWORD PTR [rip+0x183bd85]        # 0x1423cb6f0
0x00b8f96b: sub    rax,QWORD PTR [rip+0x183bd76]        # 0x1423cb6e8
0x00b8f972: test   rax,0xfffffffffffffff8
0x00b8f978: je     0x140b8f994
0x00b8f97a: cmp    r8d,0xffffffff
0x00b8f97e: je     0x140b8f994
0x00b8f980: lea    rdx,[rip+0x183bd61]        # 0x1423cb6e8
0x00b8f987: mov    ecx,r8d
0x00b8f98a: call   0x1400ba030
0x00b8f98f: mov    rdi,rax
0x00b8f992: jmp    0x140b8f996
0x00b8f994: xor    edi,edi
0x00b8f996: test   rdi,rdi
0x00b8f999: je     0x140b8fa86
0x00b8f99f: and    esi,0x2
0x00b8f9a2: je     0x140b8f9d9
0x00b8f9a4: mov    r8d,0xb
0x00b8f9aa: lea    rdx,[rip+0xac9947]        # 0x1416592f8 ; literal="[LPAGE:ENT:"
0x00b8f9b1: mov    rcx,rbx
0x00b8f9b4: call   0x14006f9a0
0x00b8f9b9: mov    rdx,rbx
0x00b8f9bc: mov    ecx,DWORD PTR [rdi+0x4]
0x00b8f9bf: call   0x140529cf0
0x00b8f9c4: mov    r8d,0x1
0x00b8f9ca: lea    rdx,[rip+0xa68c93]        # 0x1415f8664 ; literal="]"
0x00b8f9d1: mov    rcx,rbx
0x00b8f9d4: call   0x14006f9a0
0x00b8f9d9: xorps  xmm0,xmm0
0x00b8f9dc: movups XMMWORD PTR [rsp+0x20],xmm0
0x00b8f9e1: mov    QWORD PTR [rsp+0x30],0x0
0x00b8f9ea: mov    QWORD PTR [rsp+0x38],0xf
0x00b8f9f3: mov    BYTE PTR [rsp+0x20],0x0
0x00b8f9f8: lea    rcx,[rdi+0x20]
0x00b8f9fc: xor    r9d,r9d
0x00b8f9ff: mov    r8b,0x1
0x00b8fa02: lea    rdx,[rsp+0x20]
0x00b8fa07: call   0x140a91760
0x00b8fa0c: lea    rdx,[rsp+0x20]
0x00b8fa11: cmp    QWORD PTR [rsp+0x38],0xf
0x00b8fa17: cmova  rdx,QWORD PTR [rsp+0x20]
0x00b8fa1d: mov    r8,QWORD PTR [rsp+0x30]
0x00b8fa22: mov    rcx,rbx
0x00b8fa25: call   0x14006f9a0
0x00b8fa2a: test   esi,esi
0x00b8fa2c: je     0x140b8fa44
0x00b8fa2e: mov    r8d,0x8
0x00b8fa34: lea    rdx,[rip+0xa69115]        # 0x1415f8b50 ; literal="[/LPAGE]"
0x00b8fa3b: mov    rcx,rbx
0x00b8fa3e: call   0x14006f9a0
0x00b8fa43: nop
0x00b8fa44: mov    rdx,QWORD PTR [rsp+0x38]
0x00b8fa49: cmp    rdx,0xf
0x00b8fa4d: jbe    0x140b8fa9b
0x00b8fa4f: inc    rdx
0x00b8fa52: mov    rcx,QWORD PTR [rsp+0x20]
0x00b8fa57: mov    rax,rcx
0x00b8fa5a: cmp    rdx,0x1000
0x00b8fa61: jb     0x140b8fa7f
0x00b8fa63: add    rdx,0x27
0x00b8fa67: mov    rcx,QWORD PTR [rcx-0x8]
0x00b8fa6b: sub    rax,rcx
0x00b8fa6e: add    rax,0xfffffffffffffff8
0x00b8fa72: cmp    rax,0x1f
0x00b8fa76: jbe    0x140b8fa7f
0x00b8fa78: call   QWORD PTR [rip+0xa51022]        # 0x1415e0aa0
0x00b8fa7e: int3
0x00b8fa7f: call   0x1415345f0
0x00b8fa84: jmp    0x140b8fa9b
0x00b8fa86: mov    r8d,0x17
0x00b8fa8c: lea    rdx,[rip+0xb4ac8d]        # 0x1416da720 ; literal="an unknown civilization"
0x00b8fa93: mov    rcx,rbx
0x00b8fa96: call   0x14006f9a0
0x00b8fa9b: mov    rcx,QWORD PTR [rsp+0x40]
0x00b8faa0: xor    rcx,rsp
0x00b8faa3: call   0x1415345d0
0x00b8faa8: mov    rbx,QWORD PTR [rsp+0x60]
0x00b8faad: mov    rsi,QWORD PTR [rsp+0x78]
0x00b8fab2: add    rsp,0x50
0x00b8fab6: pop    rdi
0x00b8fab7: ret
