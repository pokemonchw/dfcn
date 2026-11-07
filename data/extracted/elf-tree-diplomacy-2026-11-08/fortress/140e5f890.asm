; Original current disk PE PE:6a70a6d9:02711000
0x140e5f890: rex push rbx
0x140e5f892: sub    rsp,0x30
0x140e5f896: mov    rbx,QWORD PTR [rip+0x183c2e3]        # 0x14269bb80
0x140e5f89d: mov    rdx,QWORD PTR [rip+0x183c2d4]        # 0x14269bb78
0x140e5f8a4: sub    rbx,rdx
0x140e5f8a7: mov    QWORD PTR [rsp+0x48],rbp
0x140e5f8ac: sar    rbx,0x3
0x140e5f8b0: mov    rbp,rcx
0x140e5f8b3: sub    ebx,0x1
0x140e5f8b6: js     0x140e5f950
0x140e5f8bc: mov    QWORD PTR [rsp+0x50],rsi
0x140e5f8c1: mov    QWORD PTR [rsp+0x28],rdi
0x140e5f8c6: movsxd rax,ebx
0x140e5f8c9: mov    QWORD PTR [rsp+0x20],r14
0x140e5f8ce: mov    r14d,0x205
0x140e5f8d4: lea    rdi,[rax*8+0x0]
0x140e5f8dc: mov    rsi,rdi
0x140e5f8df: nop
0x140e5f8e0: mov    rcx,QWORD PTR [rdi+rdx*1]
0x140e5f8e4: cmp    QWORD PTR [rcx+0x8],rbp
0x140e5f8e8: jne    0x140e5f934
0x140e5f8ea: movsx  eax,WORD PTR [rcx]
0x140e5f8ed: cmp    eax,0x1
0x140e5f8f0: je     0x140e5f8fe
0x140e5f8f2: cmp    ax,0x9
0x140e5f8f6: ja     0x140e5f934
0x140e5f8f8: bt     r14d,eax
0x140e5f8fc: jae    0x140e5f934
0x140e5f8fe: mov    edx,0x20
0x140e5f903: call   0x141539680
0x140e5f908: mov    rcx,QWORD PTR [rip+0x183c269]        # 0x14269bb78
0x140e5f90f: mov    r8,QWORD PTR [rip+0x183c26a]        # 0x14269bb80
0x140e5f916: add    rcx,rsi
0x140e5f919: lea    rdx,[rcx+0x8]
0x140e5f91d: sub    r8,rdx
0x140e5f920: call   0x14153ae1a
0x140e5f925: sub    QWORD PTR [rip+0x183c253],0x8        # 0x14269bb80
0x140e5f92d: mov    rdx,QWORD PTR [rip+0x183c244]        # 0x14269bb78
0x140e5f934: sub    rsi,0x8
0x140e5f938: sub    rdi,0x8
0x140e5f93c: sub    ebx,0x1
0x140e5f93f: jns    0x140e5f8e0
0x140e5f941: mov    r14,QWORD PTR [rsp+0x20]
0x140e5f946: mov    rdi,QWORD PTR [rsp+0x28]
0x140e5f94b: mov    rsi,QWORD PTR [rsp+0x50]
0x140e5f950: mov    ecx,0x20
0x140e5f955: call   0x141539690
0x140e5f95a: mov    QWORD PTR [rsp+0x40],rax
0x140e5f95f: mov    rbx,rax
0x140e5f962: mov    QWORD PTR [rsp+0x40],rbx
0x140e5f967: mov    QWORD PTR [rax+0x8],0x0
0x140e5f96f: mov    eax,0xffffffff
0x140e5f974: mov    WORD PTR [rbx+0x10],ax
0x140e5f978: mov    DWORD PTR [rbx+0x14],eax
0x140e5f97b: mov    WORD PTR [rbx],0xa
0x140e5f980: mov    QWORD PTR [rbx+0x8],rbp
0x140e5f984: movzx  ecx,BYTE PTR [rip+0xa77583]        # 0x1418d6f0e
0x140e5f98b: mov    BYTE PTR [rbx+0x2],cl
0x140e5f98e: call   0x140eb68b0
0x140e5f993: mov    rbp,QWORD PTR [rsp+0x48]
0x140e5f998: mov    r8d,eax
0x140e5f99b: mov    ecx,r8d
0x140e5f99e: mov    eax,0x3
0x140e5f9a3: mul    r8d
0x140e5f9a6: mov    eax,0x4651fbd9
0x140e5f9ab: sub    ecx,edx
0x140e5f9ad: shr    ecx,1
0x140e5f9af: add    ecx,edx
0x140e5f9b1: shr    ecx,0x1e
0x140e5f9b4: imul   ecx,ecx,0x7fffffff
0x140e5f9ba: sub    r8d,ecx
0x140e5f9bd: mul    r8d
0x140e5f9c0: shr    edx,0x10
0x140e5f9c3: add    dx,0xa
0x140e5f9c7: mov    WORD PTR [rbx+0x4],dx
0x140e5f9cb: mov    rdx,QWORD PTR [rip+0x183c1ae]        # 0x14269bb80
0x140e5f9d2: cmp    rdx,QWORD PTR [rip+0x183c1af]        # 0x14269bb88
0x140e5f9d9: je     0x140e5f9ec
0x140e5f9db: mov    QWORD PTR [rdx],rbx
0x140e5f9de: add    QWORD PTR [rip+0x183c19a],0x8        # 0x14269bb80
0x140e5f9e6: add    rsp,0x30
0x140e5f9ea: pop    rbx
0x140e5f9eb: ret
0x140e5f9ec: lea    r8,[rsp+0x40]
0x140e5f9f1: call   0x1409e5130
0x140e5f9f6: add    rsp,0x30
0x140e5f9fa: pop    rbx
0x140e5f9fb: ret
