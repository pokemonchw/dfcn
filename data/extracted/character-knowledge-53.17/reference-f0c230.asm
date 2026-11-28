; reference PE:6aea05a1:02734000; reference-description:general_ref_feature_layerst; RVA 0xf0c230..0xf0c3e3; code ends 0xf0c3e3
0x00f0c230: mov    QWORD PTR [rsp+0x18],rbx
0x00f0c235: mov    QWORD PTR [rsp+0x20],rsi
0x00f0c23a: push   rdi
0x00f0c23b: sub    rsp,0x50
0x00f0c23f: mov    rax,QWORD PTR [rip+0x9b1dfa]        # 0x1418be040
0x00f0c246: xor    rax,rsp
0x00f0c249: mov    QWORD PTR [rsp+0x40],rax
0x00f0c24e: mov    esi,r8d
0x00f0c251: mov    rbx,rdx
0x00f0c254: mov    QWORD PTR [rdx+0x10],0x0
0x00f0c25c: mov    rax,rdx
0x00f0c25f: cmp    QWORD PTR [rdx+0x18],0xf
0x00f0c264: jbe    0x140f0c269
0x00f0c266: mov    rax,QWORD PTR [rdx]
0x00f0c269: mov    BYTE PTR [rax],0x0
0x00f0c26c: mov    rdx,QWORD PTR [rip+0x1601d65]        # 0x14250dfd8
0x00f0c273: add    rdx,0x250
0x00f0c27a: mov    ecx,DWORD PTR [rcx+0x8]
0x00f0c27d: call   0x1400e2b90
0x00f0c282: mov    rdi,rax
0x00f0c285: test   rax,rax
0x00f0c288: je     0x140f0c3c6
0x00f0c28e: and    esi,0x2
0x00f0c291: je     0x140f0c2cb
0x00f0c293: mov    r8d,0xa
0x00f0c299: lea    rdx,[rip+0x7f8340]        # 0x1417045e0 ; literal="[LPAGE:FL:"
0x00f0c2a0: mov    rcx,rbx
0x00f0c2a3: call   0x140071040
0x00f0c2a8: mov    rdx,rbx
0x00f0c2ab: mov    ecx,DWORD PTR [rdi+0x80]
0x00f0c2b1: call   0x140545610
0x00f0c2b6: mov    r8d,0x1
0x00f0c2bc: lea    rdx,[rip+0x70d145]        # 0x141619408 ; literal="]"
0x00f0c2c3: mov    rcx,rbx
0x00f0c2c6: call   0x140071040
0x00f0c2cb: cmp    BYTE PTR [rdi+0x7a],0x0
0x00f0c2cf: je     0x140f0c369
0x00f0c2d5: xorps  xmm0,xmm0
0x00f0c2d8: movups XMMWORD PTR [rsp+0x20],xmm0
0x00f0c2dd: mov    QWORD PTR [rsp+0x30],0x0
0x00f0c2e6: mov    QWORD PTR [rsp+0x38],0xf
0x00f0c2ef: mov    BYTE PTR [rsp+0x20],0x0
0x00f0c2f4: lea    rcx,[rdi+0x8]
0x00f0c2f8: xor    r9d,r9d
0x00f0c2fb: mov    r8b,0x1
0x00f0c2fe: lea    rdx,[rsp+0x20]
0x00f0c303: call   0x140aae180
0x00f0c308: lea    rdx,[rsp+0x20]
0x00f0c30d: cmp    QWORD PTR [rsp+0x38],0xf
0x00f0c313: cmova  rdx,QWORD PTR [rsp+0x20]
0x00f0c319: mov    r8,QWORD PTR [rsp+0x30]
0x00f0c31e: mov    rcx,rbx
0x00f0c321: call   0x140071040
0x00f0c326: nop
0x00f0c327: mov    rdx,QWORD PTR [rsp+0x38]
0x00f0c32c: cmp    rdx,0xf
0x00f0c330: jbe    0x140f0c3ad
0x00f0c332: inc    rdx
0x00f0c335: mov    rcx,QWORD PTR [rsp+0x20]
0x00f0c33a: mov    rax,rcx
0x00f0c33d: cmp    rdx,0x1000
0x00f0c344: jb     0x140f0c362
0x00f0c346: add    rdx,0x27
0x00f0c34a: mov    rcx,QWORD PTR [rcx-0x8]
0x00f0c34e: sub    rax,rcx
0x00f0c351: add    rax,0xfffffffffffffff8
0x00f0c355: cmp    rax,0x1f
0x00f0c359: jbe    0x140f0c362
0x00f0c35b: call   QWORD PTR [rip+0x6f47df]        # 0x141600b40
0x00f0c361: int3
0x00f0c362: call   0x1415530d0
0x00f0c367: jmp    0x140f0c3ad
0x00f0c369: movsx  ecx,WORD PTR [rdi]
0x00f0c36c: test   ecx,ecx
0x00f0c36e: je     0x140f0c398
0x00f0c370: sub    ecx,0x1
0x00f0c373: je     0x140f0c389
0x00f0c375: cmp    ecx,0x1
0x00f0c378: jne    0x140f0c3ad
0x00f0c37a: mov    r8d,0xe
0x00f0c380: lea    rdx,[rip+0x7f81e9]        # 0x141704570 ; literal="the Underworld"
0x00f0c387: jmp    0x140f0c3a5
0x00f0c389: mov    r8d,0x1d
0x00f0c38f: lea    rdx,[rip+0x853aa2]        # 0x14175fe38 ; literal="the fiery bowels of the earth"
0x00f0c396: jmp    0x140f0c3a5
0x00f0c398: mov    r8d,0x17
0x00f0c39e: lea    rdx,[rip+0x7f81fb]        # 0x1417045a0 ; literal="the depths of the world"
0x00f0c3a5: mov    rcx,rbx
0x00f0c3a8: call   0x140071040
0x00f0c3ad: test   esi,esi
0x00f0c3af: je     0x140f0c3c6
0x00f0c3b1: mov    r8d,0x8
0x00f0c3b7: lea    rdx,[rip+0x70d55a]        # 0x141619918 ; literal="[/LPAGE]"
0x00f0c3be: mov    rcx,rbx
0x00f0c3c1: call   0x140071040
0x00f0c3c6: mov    rcx,QWORD PTR [rsp+0x40]
0x00f0c3cb: xor    rcx,rsp
0x00f0c3ce: call   0x1415530b0
0x00f0c3d3: mov    rbx,QWORD PTR [rsp+0x70]
0x00f0c3d8: mov    rsi,QWORD PTR [rsp+0x78]
0x00f0c3dd: add    rsp,0x50
0x00f0c3e1: pop    rdi
0x00f0c3e2: ret
