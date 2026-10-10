# classic PE:6a70b91c:0270a000; coin-title; RVA 0xc9dd40..0xc9dd95
0x00c9dd40: mov    QWORD PTR [rsp+0x8],rbx
0x00c9dd45: mov    QWORD PTR [rsp+0x10],rsi
0x00c9dd4a: push   rdi
0x00c9dd4b: sub    rsp,0x20
0x00c9dd4f: movsx  rax,WORD PTR [rcx+0xe8]
0x00c9dd57: movzx  esi,r8b
0x00c9dd5b: mov    rbx,rdx
0x00c9dd5e: mov    rdi,rcx
0x00c9dd61: cmp    ax,0xffff
0x00c9dd65: je     0x140c9dd77
0x00c9dd67: mov    rcx,QWORD PTR [rip+0x172d912]        # 0x1423cb680
0x00c9dd6e: mov    rcx,QWORD PTR [rcx+rax*8]
0x00c9dd72: call   0x1405bc390
0x00c9dd77: movzx  r8d,sil
0x00c9dd7b: mov    rdx,rbx
0x00c9dd7e: mov    rcx,rdi
0x00c9dd81: mov    rbx,QWORD PTR [rsp+0x30]
0x00c9dd86: mov    rsi,QWORD PTR [rsp+0x38]
0x00c9dd8b: add    rsp,0x20
0x00c9dd8f: pop    rdi
0x00c9dd90: jmp    0x140ca2bf0
