# steam PE:6a70a6d9:02711000; reagent-candidates; RVA 0x27f390..0x27f588
0x0027f390: mov    QWORD PTR [rsp+0x20],rbx
0x0027f395: push   rbp
0x0027f396: mov    rbp,rsp
0x0027f399: sub    rsp,0x40
0x0027f39d: mov    eax,DWORD PTR [rcx+0x4]
0x0027f3a0: mov    rbx,rcx
0x0027f3a3: cmp    eax,0x4
0x0027f3a6: jne    0x14027f40c
0x0027f3a8: mov    rax,QWORD PTR [rcx+0xd8]
0x0027f3af: sub    rax,QWORD PTR [rcx+0xd0]
0x0027f3b6: sar    rax,0x3
0x0027f3ba: test   rax,rax
0x0027f3bd: je     0x14027f407
0x0027f3bf: call   0x140280360
0x0027f3c4: cmp    DWORD PTR [rbx+0x4],0x5
0x0027f3c8: jne    0x14027f57d
0x0027f3ce: test   BYTE PTR [rbx+0xec],0x1
0x0027f3d5: jne    0x14027f3df
0x0027f3d7: mov    rcx,rbx
0x0027f3da: call   0x1402804b0
0x0027f3df: mov    BYTE PTR [rbx],0x0
0x0027f3e2: cmp    WORD PTR [rip+0x23cb70e],0x2        # 0x14264aaf8
0x0027f3ea: jge    0x14027f57d
0x0027f3f0: mov    eax,0x2
0x0027f3f5: mov    WORD PTR [rip+0x23cb6fc],ax        # 0x14264aaf8
0x0027f3fc: mov    rbx,QWORD PTR [rsp+0x68]
0x0027f401: add    rsp,0x40
0x0027f405: pop    rbp
0x0027f406: ret
0x0027f407: mov    BYTE PTR [rcx],0x0
0x0027f40a: jmp    0x14027f3e2
0x0027f40c: cmp    eax,0x5
0x0027f40f: jne    0x14027f41c
0x0027f411: test   BYTE PTR [rcx+0xec],0x1
0x0027f418: jne    0x14027f3df
0x0027f41a: jmp    0x14027f3da
0x0027f41c: movzx  r11d,BYTE PTR [rip+0x21111b1]        # 0x1423905d5
0x0027f424: mov    r8d,0x14
0x0027f42a: mov    r10d,DWORD PTR [rip+0x214e357]        # 0x1423cd788
0x0027f431: test   r11b,r11b
0x0027f434: mov    QWORD PTR [rsp+0x58],rdi
0x0027f439: mov    edi,0xffffffff
0x0027f43e: cmovne edi,DWORD PTR [rip+0x23cb16f]        # 0x14264a5b4
0x0027f445: add    r10d,0xfffffffb
0x0027f449: mov    QWORD PTR [rsp+0x60],r14
0x0027f44e: call   0x14027ffb0
0x0027f453: mov    r9d,0x27 ; inline_fragment="'"
0x0027f459: mov    r14d,eax
0x0027f45c: lea    ecx,[rax+0x2]
0x0027f45f: lea    edx,[rcx+rcx*2]
0x0027f462: cmp    edx,r9d
0x0027f465: lea    ecx,[r10-0x13]
0x0027f469: cmovl  r9d,edx
0x0027f46d: cmp    ecx,r9d
0x0027f470: jle    0x14027f47b
0x0027f472: mov    r8d,r10d
0x0027f475: sub    r8d,r9d
0x0027f478: inc    r8d
0x0027f47b: cmp    BYTE PTR [rbx+0x20],0x0
0x0027f47f: je     0x14027f573
0x0027f485: test   r11b,r11b
0x0027f488: je     0x14027f56f
0x0027f48e: cmp    BYTE PTR [rip+0x2111139],0x0        # 0x1423905ce
0x0027f495: je     0x14027f56f
0x0027f49b: lea    ecx,[r8+0x4]
0x0027f49f: mov    QWORD PTR [rsp+0x50],rsi
0x0027f4a4: sub    r10d,ecx
0x0027f4a7: mov    eax,0x55555556 ; inline_fragment="VUUU"
0x0027f4ac: imul   r10d
0x0027f4af: xor    esi,esi
0x0027f4b1: mov    eax,edx
0x0027f4b3: mov    QWORD PTR [rbp-0x8],rsi
0x0027f4b7: shr    eax,0x1f
0x0027f4ba: add    edx,eax
0x0027f4bc: mov    DWORD PTR [rbp-0x1c],esi
0x0027f4bf: mov    eax,DWORD PTR [rbx+0x24]
0x0027f4c2: mov    DWORD PTR [rbp-0x20],eax
0x0027f4c5: lea    eax,[r14-0x1]
0x0027f4c9: mov    DWORD PTR [rbp-0x18],eax
0x0027f4cc: lea    eax,[rcx+0x1]
0x0027f4cf: lea    ecx,[rcx+rdx*2]
0x0027f4d2: mov    DWORD PTR [rbp-0x10],eax
0x0027f4d5: add    ecx,0xfffffffe
0x0027f4d8: mov    DWORD PTR [rbp-0x14],edx
0x0027f4db: add    ecx,edx
0x0027f4dd: mov    DWORD PTR [rbp-0xc],ecx
0x0027f4e0: lea    rcx,[rbp-0x20]
0x0027f4e4: call   0x1400bb3b0
0x0027f4e9: mov    eax,DWORD PTR [rbp-0x10]
0x0027f4ec: cmp    edi,eax
0x0027f4ee: jg     0x14027f4f5
0x0027f4f0: mov    eax,DWORD PTR [rbp-0x1c]
0x0027f4f3: jmp    0x14027f556
0x0027f4f5: mov    r10d,DWORD PTR [rbp-0xc]
0x0027f4f9: cmp    edi,r10d
0x0027f4fc: jl     0x14027f515
0x0027f4fe: mov    eax,DWORD PTR [rbp-0x18]
0x0027f501: sub    eax,DWORD PTR [rbp-0x14]
0x0027f504: mov    ecx,DWORD PTR [rbp-0x1c]
0x0027f507: inc    eax
0x0027f509: mov    DWORD PTR [rbp-0x20],eax
0x0027f50c: cmp    eax,ecx
0x0027f50e: jge    0x14027f559
0x0027f510: mov    DWORD PTR [rbp-0x20],ecx
0x0027f513: jmp    0x14027f559
0x0027f515: cmp    r10d,eax
0x0027f518: jle    0x14027f559
0x0027f51a: mov    r9d,DWORD PTR [rbp-0x1c]
0x0027f51e: mov    r8d,DWORD PTR [rbp-0x18]
0x0027f522: sub    r8d,DWORD PTR [rbp-0x14]
0x0027f526: mov    ecx,r8d
0x0027f529: sub    ecx,r9d
0x0027f52c: add    ecx,0x1
0x0027f52f: cmovns esi,ecx
0x0027f532: sub    edi,eax
0x0027f534: sub    r10d,eax
0x0027f537: imul   esi,edi
0x0027f53a: inc    r10d
0x0027f53d: lea    ecx,[r8+0x1]
0x0027f541: mov    eax,esi
0x0027f543: cdq
0x0027f544: idiv   r10d
0x0027f547: add    eax,r9d
0x0027f54a: cmp    eax,ecx
0x0027f54c: cmovg  eax,ecx
0x0027f54f: cmp    eax,r9d
0x0027f552: cmovl  eax,r9d
0x0027f556: mov    DWORD PTR [rbp-0x20],eax
0x0027f559: lea    rcx,[rbp-0x20]
0x0027f55d: call   0x1400bb3b0
0x0027f562: mov    eax,DWORD PTR [rbp-0x20]
0x0027f565: mov    rsi,QWORD PTR [rsp+0x50]
0x0027f56a: mov    DWORD PTR [rbx+0x24],eax
0x0027f56d: jmp    0x14027f573
0x0027f56f: mov    BYTE PTR [rbx+0x20],0x0
0x0027f573: mov    rdi,QWORD PTR [rsp+0x58]
0x0027f578: mov    r14,QWORD PTR [rsp+0x60]
0x0027f57d: mov    rbx,QWORD PTR [rsp+0x68]
0x0027f582: add    rsp,0x40
0x0027f586: pop    rbp
0x0027f587: ret
