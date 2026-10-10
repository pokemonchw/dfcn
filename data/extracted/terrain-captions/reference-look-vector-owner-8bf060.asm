; reference; PE:6a70a6d9:02711000; look vector 0x269bc20; owner 0x8bf060..0x8bf0f9
0x008bf060: sub    rsp,0x28
0x008bf064: mov    r8,QWORD PTR [rip+0x1ddcbbd]        # 0x14269bc28
0x008bf06b: mov    rdx,QWORD PTR [rip+0x1ddcbae]        # 0x14269bc20
0x008bf072: mov    rax,r8
0x008bf075: sub    rax,rdx
0x008bf078: mov    QWORD PTR [rsp+0x38],rsi
0x008bf07d: sar    rax,0x3
0x008bf081: xor    esi,esi
0x008bf083: test   rax,rax
0x008bf086: je     0x1408bf0e3
0x008bf088: mov    QWORD PTR [rsp+0x30],rbx
0x008bf08d: mov    QWORD PTR [rsp+0x20],rdi
0x008bf092: mov    edi,esi
0x008bf094: mov    rbx,QWORD PTR [rdi+rdx*1]
0x008bf098: test   rbx,rbx
0x008bf09b: je     0x1408bf0c1
0x008bf09d: lea    rcx,[rbx+0x28]
0x008bf0a1: call   0x14006f850
0x008bf0a6: mov    edx,0x50
0x008bf0ab: mov    rcx,rbx
0x008bf0ae: call   0x141539680
0x008bf0b3: mov    r8,QWORD PTR [rip+0x1ddcb6e]        # 0x14269bc28
0x008bf0ba: mov    rdx,QWORD PTR [rip+0x1ddcb5f]        # 0x14269bc20
0x008bf0c1: inc    esi
0x008bf0c3: mov    rcx,r8
0x008bf0c6: sub    rcx,rdx
0x008bf0c9: movsxd rax,esi
0x008bf0cc: sar    rcx,0x3
0x008bf0d0: add    rdi,0x8
0x008bf0d4: cmp    rax,rcx
0x008bf0d7: jb     0x1408bf094
0x008bf0d9: mov    rdi,QWORD PTR [rsp+0x20]
0x008bf0de: mov    rbx,QWORD PTR [rsp+0x30]
0x008bf0e3: mov    rsi,QWORD PTR [rsp+0x38]
0x008bf0e8: cmp    rdx,r8
0x008bf0eb: je     0x1408bf0f4
0x008bf0ed: mov    QWORD PTR [rip+0x1ddcb34],rdx        # 0x14269bc28
0x008bf0f4: add    rsp,0x28
0x008bf0f8: ret
