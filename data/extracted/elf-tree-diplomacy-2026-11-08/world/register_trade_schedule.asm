14091e570: mov    QWORD PTR [rsp+0x10],rbx
14091e575: push   rdi
14091e576: sub    rsp,0x20
14091e57a: mov    edi,DWORD PTR [rip+0x1a750f0]        # 0x142393670
14091e580: lea    rdx,[rcx+0x1028]
14091e587: mov    rbx,rcx
14091e58a: mov    ecx,edi
14091e58c: call   0x1400b9dc0
14091e591: test   rax,rax
14091e594: je     0x14091e5b2
14091e596: movzx  eax,WORD PTR [rax+0x4]
14091e59a: cmp    ax,0x1
14091e59e: je     0x14091e68c
14091e5a4: sub    ax,0x4
14091e5a8: cmp    ax,0x1
14091e5ac: jbe    0x14091e68c
14091e5b2: lea    r8,[rsp+0x30]
14091e5b7: mov    edx,edi
14091e5b9: mov    rcx,rbx
14091e5bc: call   0x14091e6a0
14091e5c1: cmp    eax,0xffffffe2
14091e5c4: jl     0x14091e68c
14091e5ca: mov    edx,DWORD PTR [rip+0x1a750a8]        # 0x142393678
14091e5d0: lea    r8,[rsp+0x30]
14091e5d5: mov    rcx,rbx
14091e5d8: call   0x14091e6a0
14091e5dd: cmp    eax,0xffffffe2
14091e5e0: jl     0x14091e68c
14091e5e6: mov    ecx,0x20
14091e5eb: call   0x141539690
14091e5f0: mov    QWORD PTR [rsp+0x30],rax
14091e5f5: mov    rdi,rax
14091e5f8: xor    ecx,ecx
14091e5fa: mov    QWORD PTR [rsp+0x30],rdi
14091e5ff: mov    QWORD PTR [rax+0x8],rcx
14091e603: mov    eax,0xffffffff
14091e608: mov    WORD PTR [rdi+0x10],ax
14091e60c: mov    DWORD PTR [rdi+0x14],eax
14091e60f: mov    WORD PTR [rdi],cx
14091e612: movzx  ecx,BYTE PTR [rip+0xfb88f5]        # 0x1418d6f0e
14091e619: mov    BYTE PTR [rdi+0x2],cl
14091e61c: call   0x140eb68b0
14091e621: mov    r8d,eax
14091e624: mov    eax,0x3
14091e629: mul    r8d
14091e62c: mov    ecx,r8d
14091e62f: mov    eax,0x7d1ffd5d
14091e634: sub    ecx,edx
14091e636: shr    ecx,1
14091e638: add    ecx,edx
14091e63a: shr    ecx,0x1e
14091e63d: imul   ecx,ecx,0x7fffffff
14091e643: sub    r8d,ecx
14091e646: mul    r8d
14091e649: mov    eax,0x3e8
14091e64e: shr    edx,0x14
14091e651: add    dx,ax
14091e654: mov    WORD PTR [rdi+0x4],dx
14091e658: mov    QWORD PTR [rdi+0x8],rbx
14091e65c: mov    rdx,QWORD PTR [rip+0x1d7d51d]        # 0x14269bb80
14091e663: cmp    rdx,QWORD PTR [rip+0x1d7d51e]        # 0x14269bb88
14091e66a: je     0x14091e682
14091e66c: mov    QWORD PTR [rdx],rdi
14091e66f: add    QWORD PTR [rip+0x1d7d509],0x8        # 0x14269bb80
14091e677: mov    rbx,QWORD PTR [rsp+0x38]
14091e67c: add    rsp,0x20
14091e680: pop    rdi
14091e681: ret
14091e682: lea    r8,[rsp+0x30]
14091e687: call   0x1409e5130
14091e68c: mov    rbx,QWORD PTR [rsp+0x38]
14091e691: add    rsp,0x20
14091e695: pop    rdi
14091e696: ret