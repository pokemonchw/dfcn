# steam PE:6a70a6d9:02711000; coin-title; RVA 0xca0d00..0xca0d55
0x00ca0d00: mov    QWORD PTR [rsp+0x8],rbx
0x00ca0d05: mov    QWORD PTR [rsp+0x10],rsi
0x00ca0d0a: push   rdi
0x00ca0d0b: sub    rsp,0x20
0x00ca0d0f: movsx  rax,WORD PTR [rcx+0xe8]
0x00ca0d17: movzx  esi,r8b
0x00ca0d1b: mov    rbx,rdx
0x00ca0d1e: mov    rdi,rcx
0x00ca0d21: cmp    ax,0xffff
0x00ca0d25: je     0x140ca0d37
0x00ca0d27: mov    rcx,QWORD PTR [rip+0x1730a62]        # 0x1423d1790
0x00ca0d2e: mov    rcx,QWORD PTR [rcx+rax*8]
0x00ca0d32: call   0x1405be970
0x00ca0d37: movzx  r8d,sil
0x00ca0d3b: mov    rdx,rbx
0x00ca0d3e: mov    rcx,rdi
0x00ca0d41: mov    rbx,QWORD PTR [rsp+0x30]
0x00ca0d46: mov    rsi,QWORD PTR [rsp+0x38]
0x00ca0d4b: add    rsp,0x20
0x00ca0d4f: pop    rdi
0x00ca0d50: jmp    0x140ca5bb0
