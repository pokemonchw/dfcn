; classic PE:6aea11a5:0272d000; reference-description:general_ref_entity_popst; RVA 0xf075d0..0xf076f0; code ends 0xf076f0
0x00f075d0: mov    QWORD PTR [rsp+0x8],rbx
0x00f075d5: mov    QWORD PTR [rsp+0x10],rsi
0x00f075da: push   rdi
0x00f075db: sub    rsp,0x30
0x00f075df: mov    QWORD PTR [rdx+0x10],0x0
0x00f075e7: mov    esi,r8d
0x00f075ea: cmp    QWORD PTR [rdx+0x18],0xf
0x00f075ef: mov    rbx,rdx
0x00f075f2: mov    rdi,rcx
0x00f075f5: mov    rax,rdx
0x00f075f8: jbe    0x140f075fd
0x00f075fa: mov    rax,QWORD PTR [rdx]
0x00f075fd: mov    BYTE PTR [rax],0x0
0x00f07600: and    esi,0x2
0x00f07603: je     0x140f07640
0x00f07605: cmp    DWORD PTR [rcx+0x8],0xffffffff
0x00f07609: je     0x140f07640
0x00f0760b: mov    r8d,0xc
0x00f07611: lea    rdx,[rip+0x7f7ce8]        # 0x1416ff300 ; literal="[LPAGE:EPOP:"
0x00f07618: mov    rcx,rbx
0x00f0761b: call   0x140070fd0
0x00f07620: mov    ecx,DWORD PTR [rdi+0x8]
0x00f07623: mov    rdx,rbx
0x00f07626: call   0x140542fb0
0x00f0762b: mov    r8d,0x1
0x00f07631: lea    rdx,[rip+0x70cd60]        # 0x141614398 ; literal="]"
0x00f07638: mov    rcx,rbx
0x00f0763b: call   0x140070fd0
0x00f07640: mov    r8d,0x10
0x00f07646: lea    rdx,[rip+0x8524f3]        # 0x141759b40 ; literal="a population of "
0x00f0764d: mov    rcx,rbx
0x00f07650: call   0x140070e90
0x00f07655: test   BYTE PTR [rdi+0x14],0x2
0x00f07659: je     0x140f07670
0x00f0765b: mov    r8d,0x8
0x00f07661: lea    rdx,[rip+0x70d1e8]        # 0x141614850 ; literal="ghostly "
0x00f07668: mov    rcx,rbx
0x00f0766b: call   0x140070fd0
0x00f07670: test   BYTE PTR [rdi+0x14],0x1
0x00f07674: je     0x140f0768b
0x00f07676: mov    r8d,0x9
0x00f0767c: lea    rdx,[rip+0x7f218d]        # 0x1416f9810 ; literal="animated "
0x00f07683: mov    rcx,rbx
0x00f07686: call   0x140070fd0
0x00f0768b: mov    r8d,DWORD PTR [rdi+0xc]
0x00f0768f: xor    r9d,r9d
0x00f07692: mov    BYTE PTR [rsp+0x28],0x0
0x00f07697: mov    rdx,rbx
0x00f0769a: mov    WORD PTR [rsp+0x20],0xffff
0x00f076a1: call   0x140ba99b0
0x00f076a6: test   BYTE PTR [rdi+0x14],0x1
0x00f076aa: je     0x140f076c1
0x00f076ac: mov    r8d,0x8
0x00f076b2: lea    rdx,[rip+0x85249f]        # 0x141759b58 ; literal=" corpses"
0x00f076b9: mov    rcx,rbx
0x00f076bc: call   0x140070fd0
0x00f076c1: test   esi,esi
0x00f076c3: je     0x140f076e0
0x00f076c5: cmp    DWORD PTR [rdi+0x8],0xffffffff
0x00f076c9: je     0x140f076e0
0x00f076cb: mov    r8d,0x8
0x00f076d1: lea    rdx,[rip+0x70d1e0]        # 0x1416148b8 ; literal="[/LPAGE]"
0x00f076d8: mov    rcx,rbx
0x00f076db: call   0x140070fd0
0x00f076e0: mov    rbx,QWORD PTR [rsp+0x40]
0x00f076e5: mov    rsi,QWORD PTR [rsp+0x48]
0x00f076ea: add    rsp,0x30
0x00f076ee: pop    rdi
0x00f076ef: ret
