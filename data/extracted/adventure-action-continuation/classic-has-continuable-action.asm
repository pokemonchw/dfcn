# classic PE:6a70b91c:0270a000; has-continuable-action; RVA 0x7ec3f0..0x7ec594
0x007ec3f0: mov    QWORD PTR [rsp+0x8],rbx
0x007ec3f5: mov    QWORD PTR [rsp+0x10],rbp
0x007ec3fa: mov    QWORD PTR [rsp+0x18],rsi
0x007ec3ff: mov    QWORD PTR [rsp+0x20],rdi
0x007ec404: push   r14
0x007ec406: sub    rsp,0x20
0x007ec40a: movsx  edx,WORD PTR [rcx+0xc6]
0x007ec411: sub    edx,0xd6
0x007ec417: je     0x1407ec53e
0x007ec41d: cmp    edx,0x1
0x007ec420: je     0x1407ec53e
0x007ec426: mov    r10,QWORD PTR [rip+0x1bf2b7b]        # 0x1423defa8
0x007ec42d: mov    rbx,QWORD PTR [rip+0x1bf2b6c]        # 0x1423defa0
0x007ec434: mov    rax,QWORD PTR [rip+0x1bf2bc5]        # 0x1423df000
0x007ec43b: sub    r10,rbx
0x007ec43e: sar    r10,0x3
0x007ec442: mov    r11d,DWORD PTR [rax+0x3dc]
0x007ec449: test   r10d,r10d
0x007ec44c: je     0x1407ec4a5
0x007ec44e: cmp    r11d,0xffffffff
0x007ec452: je     0x1407ec4a5
0x007ec454: xor    r8d,r8d
0x007ec457: sub    r10d,0x1
0x007ec45b: js     0x1407ec48c
0x007ec45d: nop    DWORD PTR [rax]
0x007ec460: lea    edx,[r8+r10*1]
0x007ec464: sar    edx,1
0x007ec466: movsxd rax,edx
0x007ec469: mov    rcx,QWORD PTR [rbx+rax*8]
0x007ec46d: cmp    DWORD PTR [rcx+0x130],r11d
0x007ec474: je     0x1407ec48e
0x007ec476: lea    eax,[rdx+0x1]
0x007ec479: cmovle r8d,eax
0x007ec47d: lea    eax,[rdx-0x1]
0x007ec480: cmovle eax,r10d
0x007ec484: mov    r10d,eax
0x007ec487: cmp    r8d,eax
0x007ec48a: jle    0x1407ec460
0x007ec48c: xor    ecx,ecx
0x007ec48e: test   rcx,rcx
0x007ec491: je     0x1407ec4a5
0x007ec493: mov    eax,0xd0
0x007ec498: cmp    WORD PTR [rcx+0xc6],ax
0x007ec49f: je     0x1407ec53e
0x007ec4a5: mov    rsi,QWORD PTR [rip+0x1cf1264]        # 0x1424dd710
0x007ec4ac: mov    rbp,QWORD PTR [rip+0x1cf1265]        # 0x1424dd718
0x007ec4b3: cmp    rsi,rbp
0x007ec4b6: je     0x1407ec53a
0x007ec4bc: nop    DWORD PTR [rax+0x0]
0x007ec4c0: mov    rdi,QWORD PTR [rsi]
0x007ec4c3: mov    rbx,QWORD PTR [rdi+0x8]
0x007ec4c7: mov    rdi,QWORD PTR [rdi+0x10]
0x007ec4cb: cmp    rbx,rdi
0x007ec4ce: je     0x1407ec531
0x007ec4d0: mov    rcx,QWORD PTR [rbx]
0x007ec4d3: mov    rax,QWORD PTR [rcx]
0x007ec4d6: call   QWORD PTR [rax]
0x007ec4d8: cmp    ax,0xe
0x007ec4dc: jne    0x1407ec528
0x007ec4de: mov    r14,QWORD PTR [rbx]
0x007ec4e1: test   BYTE PTR [r14+0x14],0x1
0x007ec4e6: jne    0x1407ec528
0x007ec4e8: mov    rax,QWORD PTR [r14]
0x007ec4eb: mov    rcx,r14
0x007ec4ee: call   QWORD PTR [rax+0x20]
0x007ec4f1: test   al,al
0x007ec4f3: jne    0x1407ec528
0x007ec4f5: mov    rax,QWORD PTR [r14+0xe0]
0x007ec4fc: mov    rcx,QWORD PTR [r14+0xe8]
0x007ec503: cmp    rax,rcx
0x007ec506: je     0x1407ec528
0x007ec508: mov    rdx,QWORD PTR [rip+0x1bf2af1]        # 0x1423df000
0x007ec50f: mov    r8d,DWORD PTR [rdx+0x130]
0x007ec516: mov    rdx,QWORD PTR [rax]
0x007ec519: cmp    DWORD PTR [rdx+0x8],r8d
0x007ec51d: je     0x1407ec577
0x007ec51f: add    rax,0x8
0x007ec523: cmp    rax,rcx
0x007ec526: jne    0x1407ec516
0x007ec528: add    rbx,0x8
0x007ec52c: cmp    rbx,rdi
0x007ec52f: jne    0x1407ec4d0
0x007ec531: add    rsi,0x8
0x007ec535: cmp    rsi,rbp
0x007ec538: jne    0x1407ec4c0
0x007ec53a: xor    al,al
0x007ec53c: jmp    0x1407ec579
0x007ec53e: movzx  eax,WORD PTR [rcx+0xc0]
0x007ec545: cmp    WORD PTR [rcx+0xa8],ax
0x007ec54c: jne    0x1407ec577
0x007ec54e: movzx  eax,WORD PTR [rcx+0xc2]
0x007ec555: cmp    WORD PTR [rcx+0xaa],ax
0x007ec55c: jne    0x1407ec577
0x007ec55e: movzx  eax,WORD PTR [rcx+0xc4]
0x007ec565: cmp    WORD PTR [rcx+0xac],ax
0x007ec56c: jne    0x1407ec577
0x007ec56e: call   0x1400739f0
0x007ec573: xor    al,al
0x007ec575: jmp    0x1407ec579
0x007ec577: mov    al,0x1
0x007ec579: mov    rbx,QWORD PTR [rsp+0x30]
0x007ec57e: mov    rbp,QWORD PTR [rsp+0x38]
0x007ec583: mov    rsi,QWORD PTR [rsp+0x40]
0x007ec588: mov    rdi,QWORD PTR [rsp+0x48]
0x007ec58d: add    rsp,0x20
0x007ec591: pop    r14
0x007ec593: ret
