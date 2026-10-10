# classic PE:6a70b91c:0270a000; in-conflict; RVA 0x641820..0x641987
0x00641820: mov    QWORD PTR [rsp+0x20],rbx
0x00641825: mov    QWORD PTR [rsp+0x8],rcx
0x0064182a: push   rbp
0x0064182b: push   rsi
0x0064182c: push   rdi
0x0064182d: push   r12
0x0064182f: push   r13
0x00641831: push   r14
0x00641833: push   r15
0x00641835: sub    rsp,0x40
0x00641839: mov    r15,QWORD PTR [rip+0x1e9bed0]        # 0x1424dd710
0x00641840: mov    r12,QWORD PTR [rip+0x1e9bed1]        # 0x1424dd718
0x00641847: cmp    r15,r12
0x0064184a: je     0x140641969
0x00641850: mov    r14,QWORD PTR [r15]
0x00641853: cmp    WORD PTR [r14+0x4],0x2
0x00641859: jne    0x14064195c
0x0064185f: mov    rsi,QWORD PTR [r14+0x8]
0x00641863: mov    r14,QWORD PTR [r14+0x10]
0x00641867: cmp    rsi,r14
0x0064186a: je     0x14064195c
0x00641870: mov    rdi,QWORD PTR [rsi]
0x00641873: mov    rcx,rdi
0x00641876: mov    rax,QWORD PTR [rdi]
0x00641879: call   QWORD PTR [rax]
0x0064187b: cmp    ax,0x8
0x0064187f: jne    0x14064194f
0x00641885: test   BYTE PTR [rdi+0x14],0x1
0x00641889: jne    0x14064194f
0x0064188f: mov    rbx,QWORD PTR [rdi+0x48]
0x00641893: mov    rdi,QWORD PTR [rdi+0x50]
0x00641897: cmp    rbx,rdi
0x0064189a: je     0x14064194f
0x006418a0: mov    DWORD PTR [rsp+0x88],0xffffffff
0x006418ab: mov    DWORD PTR [rsp+0x8c],0x0
0x006418b6: mov    rbp,QWORD PTR [rsp+0x88]
0x006418be: xchg   ax,ax
0x006418c0: mov    r8,QWORD PTR [rsp+0x80]
0x006418c8: lea    rcx,[rsp+0x20]
0x006418cd: mov    r13,QWORD PTR [rbx]
0x006418d0: mov    r8d,DWORD PTR [r8+0xc30]
0x006418d7: lea    rdx,[r13+0x8]
0x006418db: call   0x1400bab70
0x006418e0: cmp    BYTE PTR [rsp+0x28],0x0
0x006418e5: mov    rax,rbp
0x006418e8: cmovne rax,QWORD PTR [rsp+0x20]
0x006418ee: cmp    eax,0xffffffff
0x006418f1: jne    0x140641983
0x006418f7: mov    rax,QWORD PTR [rsp+0x80]
0x006418ff: lea    rdx,[r13+0x20]
0x00641903: lea    rcx,[rsp+0x30]
0x00641908: mov    r8d,DWORD PTR [rax+0x130]
0x0064190f: call   0x1400bab70
0x00641914: cmp    BYTE PTR [rsp+0x38],0x0
0x00641919: mov    DWORD PTR [rsp+0x90],0xffffffff
0x00641924: mov    DWORD PTR [rsp+0x94],0x0
0x0064192f: mov    rax,QWORD PTR [rsp+0x90]
0x00641937: cmovne rax,QWORD PTR [rsp+0x30]
0x0064193d: cmp    eax,0xffffffff
0x00641940: jne    0x140641983
0x00641942: add    rbx,0x8
0x00641946: cmp    rbx,rdi
0x00641949: jne    0x1406418c0
0x0064194f: add    rsi,0x8
0x00641953: cmp    rsi,r14
0x00641956: jne    0x140641870
0x0064195c: add    r15,0x8
0x00641960: cmp    r15,r12
0x00641963: jne    0x140641850
0x00641969: xor    al,al
0x0064196b: mov    rbx,QWORD PTR [rsp+0x98]
0x00641973: add    rsp,0x40
0x00641977: pop    r15
0x00641979: pop    r14
0x0064197b: pop    r13
0x0064197d: pop    r12
0x0064197f: pop    rdi
0x00641980: pop    rsi
0x00641981: pop    rbp
0x00641982: ret
0x00641983: mov    al,0x1
0x00641985: jmp    0x14064196b
