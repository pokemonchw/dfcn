; reference PE:6aea05a1:02734000; reference-description:general_ref_entity_popst; RVA 0xf0c880..0xf0c9a0; code ends 0xf0c9a0
0x00f0c880: mov    QWORD PTR [rsp+0x8],rbx
0x00f0c885: mov    QWORD PTR [rsp+0x10],rsi
0x00f0c88a: push   rdi
0x00f0c88b: sub    rsp,0x30
0x00f0c88f: mov    QWORD PTR [rdx+0x10],0x0
0x00f0c897: mov    esi,r8d
0x00f0c89a: cmp    QWORD PTR [rdx+0x18],0xf
0x00f0c89f: mov    rbx,rdx
0x00f0c8a2: mov    rdi,rcx
0x00f0c8a5: mov    rax,rdx
0x00f0c8a8: jbe    0x140f0c8ad
0x00f0c8aa: mov    rax,QWORD PTR [rdx]
0x00f0c8ad: mov    BYTE PTR [rax],0x0
0x00f0c8b0: and    esi,0x2
0x00f0c8b3: je     0x140f0c8f0
0x00f0c8b5: cmp    DWORD PTR [rcx+0x8],0xffffffff
0x00f0c8b9: je     0x140f0c8f0
0x00f0c8bb: mov    r8d,0xc
0x00f0c8c1: lea    rdx,[rip+0x7f7c58]        # 0x141704520 ; literal="[LPAGE:EPOP:"
0x00f0c8c8: mov    rcx,rbx
0x00f0c8cb: call   0x140071040
0x00f0c8d0: mov    ecx,DWORD PTR [rdi+0x8]
0x00f0c8d3: mov    rdx,rbx
0x00f0c8d6: call   0x140545610
0x00f0c8db: mov    r8d,0x1
0x00f0c8e1: lea    rdx,[rip+0x70cb20]        # 0x141619408 ; literal="]"
0x00f0c8e8: mov    rcx,rbx
0x00f0c8eb: call   0x140071040
0x00f0c8f0: mov    r8d,0x10
0x00f0c8f6: lea    rdx,[rip+0x8535c3]        # 0x14175fec0 ; literal="a population of "
0x00f0c8fd: mov    rcx,rbx
0x00f0c900: call   0x140070f00
0x00f0c905: test   BYTE PTR [rdi+0x14],0x2
0x00f0c909: je     0x140f0c920
0x00f0c90b: mov    r8d,0x8
0x00f0c911: lea    rdx,[rip+0x70d018]        # 0x141619930 ; literal="ghostly "
0x00f0c918: mov    rcx,rbx
0x00f0c91b: call   0x140071040
0x00f0c920: test   BYTE PTR [rdi+0x14],0x1
0x00f0c924: je     0x140f0c93b
0x00f0c926: mov    r8d,0x9
0x00f0c92c: lea    rdx,[rip+0x7f20f5]        # 0x1416fea28 ; literal="animated "
0x00f0c933: mov    rcx,rbx
0x00f0c936: call   0x140071040
0x00f0c93b: mov    r8d,DWORD PTR [rdi+0xc]
0x00f0c93f: xor    r9d,r9d
0x00f0c942: mov    BYTE PTR [rsp+0x28],0x0
0x00f0c947: mov    rdx,rbx
0x00f0c94a: mov    WORD PTR [rsp+0x20],0xffff
0x00f0c951: call   0x140bacb90
0x00f0c956: test   BYTE PTR [rdi+0x14],0x1
0x00f0c95a: je     0x140f0c971
0x00f0c95c: mov    r8d,0x8
0x00f0c962: lea    rdx,[rip+0x853627]        # 0x14175ff90 ; literal=" corpses"
0x00f0c969: mov    rcx,rbx
0x00f0c96c: call   0x140071040
0x00f0c971: test   esi,esi
0x00f0c973: je     0x140f0c990
0x00f0c975: cmp    DWORD PTR [rdi+0x8],0xffffffff
0x00f0c979: je     0x140f0c990
0x00f0c97b: mov    r8d,0x8
0x00f0c981: lea    rdx,[rip+0x70cf90]        # 0x141619918 ; literal="[/LPAGE]"
0x00f0c988: mov    rcx,rbx
0x00f0c98b: call   0x140071040
0x00f0c990: mov    rbx,QWORD PTR [rsp+0x40]
0x00f0c995: mov    rsi,QWORD PTR [rsp+0x48]
0x00f0c99a: add    rsp,0x30
0x00f0c99e: pop    rdi
0x00f0c99f: ret
