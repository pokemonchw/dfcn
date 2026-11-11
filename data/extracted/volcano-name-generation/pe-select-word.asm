0x140d4dbd0: mov    QWORD PTR [rsp+0x8],rbx
0x140d4dbd5: mov    QWORD PTR [rsp+0x10],rbp
0x140d4dbda: mov    QWORD PTR [rsp+0x18],rsi
0x140d4dbdf: push   rdi
0x140d4dbe0: push   r14
0x140d4dbe2: push   r15
0x140d4dbe4: sub    rsp,0x20
0x140d4dbe8: movsxd rdi,r9d
0x140d4dbeb: mov    r15,r8
0x140d4dbee: mov    rbp,rdx
0x140d4dbf1: mov    r14,rcx
0x140d4dbf4: lea    rax,[rdi+rdi*2]
0x140d4dbf8: mov    rbx,QWORD PTR [rcx+rax*8+0x8]
0x140d4dbfd: lea    rsi,[rcx+rax*8]
0x140d4dc01: sub    rbx,QWORD PTR [rsi]
0x140d4dc04: sar    rbx,0x2
0x140d4dc08: test   rbx,rbx
0x140d4dc0b: je     0x140d4dc7a
0x140d4dc0d: cmp    ebx,0x1
0x140d4dc10: ja     0x140d4dc16
0x140d4dc12: xor    eax,eax
0x140d4dc14: jmp    0x140d4dc4e
0x140d4dc16: call   0x140ece790
0x140d4dc1b: mov    r8d,eax
0x140d4dc1e: mov    eax,0x3
0x140d4dc23: mul    r8d
0x140d4dc26: mov    ecx,r8d
0x140d4dc29: mov    eax,0x7fffffff
0x140d4dc2e: sub    ecx,edx
0x140d4dc30: shr    ecx,1
0x140d4dc32: add    ecx,edx
0x140d4dc34: xor    edx,edx
0x140d4dc36: div    ebx
0x140d4dc38: shr    ecx,0x1e
0x140d4dc3b: xor    edx,edx
0x140d4dc3d: imul   ecx,ecx,0x7fffffff
0x140d4dc43: sub    r8d,ecx
0x140d4dc46: lea    ecx,[rax+0x1]
0x140d4dc49: mov    eax,r8d
0x140d4dc4c: div    ecx
0x140d4dc4e: cdqe
0x140d4dc50: lea    rdx,[rax*4+0x0]
0x140d4dc58: mov    rax,QWORD PTR [rsi]
0x140d4dc5b: mov    ecx,DWORD PTR [rdx+rax*1]
0x140d4dc5e: lea    rax,[rdi+rdi*2]
0x140d4dc62: mov    DWORD PTR [rbp+0x0],ecx
0x140d4dc65: mov    rcx,QWORD PTR [r14+rax*8+0x90]
0x140d4dc6d: movzx  eax,WORD PTR [rdx+rcx*1]
0x140d4dc71: mov    WORD PTR [r15],ax
0x140d4dc75: jmp    0x140d4dd1a
0x140d4dc7a: mov    rbx,QWORD PTR [rip+0x17c1f77]        # 0x14250fbf8
0x140d4dc81: sub    rbx,QWORD PTR [rip+0x17c1f68]        # 0x14250fbf0
0x140d4dc88: sar    rbx,0x3
0x140d4dc8c: cmp    ebx,0x1
0x140d4dc8f: ja     0x140d4dc95
0x140d4dc91: xor    eax,eax
0x140d4dc93: jmp    0x140d4dccd
0x140d4dc95: call   0x140ece790
0x140d4dc9a: mov    r8d,eax
0x140d4dc9d: mov    eax,0x3
0x140d4dca2: mul    r8d
0x140d4dca5: mov    ecx,r8d
0x140d4dca8: mov    eax,0x7fffffff
0x140d4dcad: sub    ecx,edx
0x140d4dcaf: shr    ecx,1
0x140d4dcb1: add    ecx,edx
0x140d4dcb3: xor    edx,edx
0x140d4dcb5: div    ebx
0x140d4dcb7: shr    ecx,0x1e
0x140d4dcba: xor    edx,edx
0x140d4dcbc: imul   ecx,ecx,0x7fffffff
0x140d4dcc2: sub    r8d,ecx
0x140d4dcc5: lea    ecx,[rax+0x1]
0x140d4dcc8: mov    eax,r8d
0x140d4dccb: div    ecx
0x140d4dccd: mov    DWORD PTR [rbp+0x0],eax
0x140d4dcd0: call   0x140ece790
0x140d4dcd5: mov    r8d,eax
0x140d4dcd8: mov    eax,0x3
0x140d4dcdd: mul    r8d
0x140d4dce0: mov    ecx,r8d
0x140d4dce3: mov    eax,0x1ffffff1
0x140d4dce8: sub    ecx,edx
0x140d4dcea: shr    ecx,1
0x140d4dcec: add    ecx,edx
0x140d4dcee: shr    ecx,0x1e
0x140d4dcf1: imul   ecx,ecx,0x7fffffff
0x140d4dcf7: sub    r8d,ecx
0x140d4dcfa: lea    rcx,[rip+0x9e41bf]        # 0x141731ec0 ; 'Impoverished Word Selector'
0x140d4dd01: mul    r8d
0x140d4dd04: sub    r8d,edx
0x140d4dd07: shr    r8d,1
0x140d4dd0a: add    r8d,edx
0x140d4dd0d: shr    r8d,0x1b
0x140d4dd11: mov    WORD PTR [r15],r8w
0x140d4dd15: call   0x140545360
0x140d4dd1a: mov    rbx,QWORD PTR [rsp+0x40]
0x140d4dd1f: mov    rbp,QWORD PTR [rsp+0x48]
0x140d4dd24: mov    rsi,QWORD PTR [rsp+0x50]
0x140d4dd29: add    rsp,0x20
0x140d4dd2d: pop    r15
0x140d4dd2f: pop    r14
0x140d4dd31: pop    rdi
0x140d4dd32: ret
