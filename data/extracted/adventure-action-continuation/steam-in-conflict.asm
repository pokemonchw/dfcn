# steam PE:6a70a6d9:02711000; in-conflict; RVA 0x643e00..0x643f67
0x00643e00: mov    QWORD PTR [rsp+0x20],rbx
0x00643e05: mov    QWORD PTR [rsp+0x8],rcx
0x00643e0a: push   rbp
0x00643e0b: push   rsi
0x00643e0c: push   rdi
0x00643e0d: push   r12
0x00643e0f: push   r13
0x00643e11: push   r14
0x00643e13: push   r15
0x00643e15: sub    rsp,0x40
0x00643e19: mov    r15,QWORD PTR [rip+0x1e9fa00]        # 0x1424e3820
0x00643e20: mov    r12,QWORD PTR [rip+0x1e9fa01]        # 0x1424e3828
0x00643e27: cmp    r15,r12
0x00643e2a: je     0x140643f49
0x00643e30: mov    r14,QWORD PTR [r15]
0x00643e33: cmp    WORD PTR [r14+0x4],0x2
0x00643e39: jne    0x140643f3c
0x00643e3f: mov    rsi,QWORD PTR [r14+0x8]
0x00643e43: mov    r14,QWORD PTR [r14+0x10]
0x00643e47: cmp    rsi,r14
0x00643e4a: je     0x140643f3c
0x00643e50: mov    rdi,QWORD PTR [rsi]
0x00643e53: mov    rcx,rdi
0x00643e56: mov    rax,QWORD PTR [rdi]
0x00643e59: call   QWORD PTR [rax]
0x00643e5b: cmp    ax,0x8
0x00643e5f: jne    0x140643f2f
0x00643e65: test   BYTE PTR [rdi+0x14],0x1
0x00643e69: jne    0x140643f2f
0x00643e6f: mov    rbx,QWORD PTR [rdi+0x48]
0x00643e73: mov    rdi,QWORD PTR [rdi+0x50]
0x00643e77: cmp    rbx,rdi
0x00643e7a: je     0x140643f2f
0x00643e80: mov    DWORD PTR [rsp+0x88],0xffffffff
0x00643e8b: mov    DWORD PTR [rsp+0x8c],0x0
0x00643e96: mov    rbp,QWORD PTR [rsp+0x88]
0x00643e9e: xchg   ax,ax
0x00643ea0: mov    r8,QWORD PTR [rsp+0x80]
0x00643ea8: lea    rcx,[rsp+0x20]
0x00643ead: mov    r13,QWORD PTR [rbx]
0x00643eb0: mov    r8d,DWORD PTR [r8+0xc30]
0x00643eb7: lea    rdx,[r13+0x8]
0x00643ebb: call   0x1400babe0
0x00643ec0: cmp    BYTE PTR [rsp+0x28],0x0
0x00643ec5: mov    rax,rbp
0x00643ec8: cmovne rax,QWORD PTR [rsp+0x20]
0x00643ece: cmp    eax,0xffffffff
0x00643ed1: jne    0x140643f63
0x00643ed7: mov    rax,QWORD PTR [rsp+0x80]
0x00643edf: lea    rdx,[r13+0x20]
0x00643ee3: lea    rcx,[rsp+0x30]
0x00643ee8: mov    r8d,DWORD PTR [rax+0x130]
0x00643eef: call   0x1400babe0
0x00643ef4: cmp    BYTE PTR [rsp+0x38],0x0
0x00643ef9: mov    DWORD PTR [rsp+0x90],0xffffffff
0x00643f04: mov    DWORD PTR [rsp+0x94],0x0
0x00643f0f: mov    rax,QWORD PTR [rsp+0x90]
0x00643f17: cmovne rax,QWORD PTR [rsp+0x30]
0x00643f1d: cmp    eax,0xffffffff
0x00643f20: jne    0x140643f63
0x00643f22: add    rbx,0x8
0x00643f26: cmp    rbx,rdi
0x00643f29: jne    0x140643ea0
0x00643f2f: add    rsi,0x8
0x00643f33: cmp    rsi,r14
0x00643f36: jne    0x140643e50
0x00643f3c: add    r15,0x8
0x00643f40: cmp    r15,r12
0x00643f43: jne    0x140643e30
0x00643f49: xor    al,al
0x00643f4b: mov    rbx,QWORD PTR [rsp+0x98]
0x00643f53: add    rsp,0x40
0x00643f57: pop    r15
0x00643f59: pop    r14
0x00643f5b: pop    r13
0x00643f5d: pop    r12
0x00643f5f: pop    rdi
0x00643f60: pop    rsi
0x00643f61: pop    rbp
0x00643f62: ret
0x00643f63: mov    al,0x1
0x00643f65: jmp    0x140643f4b
