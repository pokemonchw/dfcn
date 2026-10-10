# steam PE:6a70a6d9:02711000; coin-material-noun; RVA 0xca5bb0..0xca5d62
0x00ca5bb0: mov    QWORD PTR [rsp+0x20],rbx
0x00ca5bb5: mov    QWORD PTR [rsp+0x10],rdx
0x00ca5bba: push   rbp
0x00ca5bbb: push   rsi
0x00ca5bbc: push   rdi
0x00ca5bbd: push   r12
0x00ca5bbf: push   r13
0x00ca5bc1: push   r14
0x00ca5bc3: push   r15
0x00ca5bc5: sub    rsp,0x70
0x00ca5bc9: mov    rbx,QWORD PTR [rcx+0x38]
0x00ca5bcd: movzx  r14d,r8b
0x00ca5bd1: mov    rdi,QWORD PTR [rcx+0x40]
0x00ca5bd5: mov    rsi,rcx
0x00ca5bd8: cmp    rbx,rdi
0x00ca5bdb: jae    0x140ca5bff
0x00ca5bdd: mov    rcx,QWORD PTR [rbx]
0x00ca5be0: mov    rax,QWORD PTR [rcx]
0x00ca5be3: call   QWORD PTR [rax+0x10]
0x00ca5be6: cmp    eax,0x1
0x00ca5be9: je     0x140ca5bf1
0x00ca5beb: add    rbx,0x8
0x00ca5bef: jmp    0x140ca5bd8
0x00ca5bf1: mov    rcx,QWORD PTR [rbx]
0x00ca5bf4: mov    rax,QWORD PTR [rcx]
0x00ca5bf7: call   QWORD PTR [rax+0x40]
0x00ca5bfa: mov    rbp,rax
0x00ca5bfd: jmp    0x140ca5c01
0x00ca5bff: xor    ebp,ebp
0x00ca5c01: mov    edi,DWORD PTR [rsi+0x14]
0x00ca5c04: mov    rcx,rsi
0x00ca5c07: mov    ebx,DWORD PTR [rsi+0x1c]
0x00ca5c0a: mov    rax,QWORD PTR [rsi]
0x00ca5c0d: cmp    r14b,0x1
0x00ca5c11: jne    0x140ca5c64
0x00ca5c13: call   QWORD PTR [rax+0x590]
0x00ca5c19: mov    rdx,QWORD PTR [rsi]
0x00ca5c1c: mov    rcx,rsi
0x00ca5c1f: mov    WORD PTR [rsp+0xc0],ax
0x00ca5c27: mov    eax,DWORD PTR [rsi+0x10]
0x00ca5c2a: mov    DWORD PTR [rsp+0xb0],eax
0x00ca5c31: call   QWORD PTR [rdx+0x18]
0x00ca5c34: mov    rdx,QWORD PTR [rsi]
0x00ca5c37: mov    rcx,rsi
0x00ca5c3a: mov    r12d,eax
0x00ca5c3d: call   QWORD PTR [rdx+0x10]
0x00ca5c40: mov    rdx,QWORD PTR [rsi]
0x00ca5c43: mov    rcx,rsi
0x00ca5c46: movzx  r15d,ax
0x00ca5c4a: call   QWORD PTR [rdx+0x8]
0x00ca5c4d: mov    rdx,QWORD PTR [rsi]
0x00ca5c50: mov    rcx,rsi
0x00ca5c53: movzx  r14d,ax
0x00ca5c57: call   QWORD PTR [rdx]
0x00ca5c59: mov    r13d,0x1
0x00ca5c5f: jmp    0x140ca5cf2
0x00ca5c64: mov    rdx,QWORD PTR [rax+0x590]
0x00ca5c6b: call   rdx
0x00ca5c6d: mov    WORD PTR [rsp+0xc0],ax
0x00ca5c75: mov    rcx,rsi
0x00ca5c78: mov    eax,DWORD PTR [rsi+0x10]
0x00ca5c7b: mov    DWORD PTR [rsp+0xb0],eax
0x00ca5c82: mov    rax,QWORD PTR [rsi]
0x00ca5c85: cmp    r14b,0x2
0x00ca5c89: jne    0x140ca5cbb
0x00ca5c8b: call   QWORD PTR [rax+0x18]
0x00ca5c8e: mov    r12d,eax
0x00ca5c91: mov    rcx,rsi
0x00ca5c94: mov    rax,QWORD PTR [rsi]
0x00ca5c97: call   QWORD PTR [rax+0x10]
0x00ca5c9a: movzx  r15d,ax
0x00ca5c9e: mov    rcx,rsi
0x00ca5ca1: mov    rax,QWORD PTR [rsi]
0x00ca5ca4: call   QWORD PTR [rax+0x8]
0x00ca5ca7: movzx  r14d,ax
0x00ca5cab: mov    rcx,rsi
0x00ca5cae: mov    rax,QWORD PTR [rsi]
0x00ca5cb1: call   QWORD PTR [rax]
0x00ca5cb3: mov    r13d,0xffffffff
0x00ca5cb9: jmp    0x140ca5cf2
0x00ca5cbb: call   QWORD PTR [rax+0x478]
0x00ca5cc1: mov    rdx,QWORD PTR [rsi]
0x00ca5cc4: mov    rcx,rsi
0x00ca5cc7: mov    r13d,eax
0x00ca5cca: call   QWORD PTR [rdx+0x18]
0x00ca5ccd: mov    rdx,QWORD PTR [rsi]
0x00ca5cd0: mov    rcx,rsi
0x00ca5cd3: mov    r12d,eax
0x00ca5cd6: call   QWORD PTR [rdx+0x10]
0x00ca5cd9: mov    rdx,QWORD PTR [rsi]
0x00ca5cdc: mov    rcx,rsi
0x00ca5cdf: movzx  r15d,ax
0x00ca5ce3: call   QWORD PTR [rdx+0x8]
0x00ca5ce6: mov    rdx,QWORD PTR [rsi]
0x00ca5ce9: mov    rcx,rsi
0x00ca5cec: movzx  r14d,ax
0x00ca5cf0: call   QWORD PTR [rdx]
0x00ca5cf2: mov    rcx,QWORD PTR [rsp+0xb8]
0x00ca5cfa: movzx  edx,ax
0x00ca5cfd: movsx  eax,WORD PTR [rsp+0xc0]
0x00ca5d05: movzx  r9d,r15w
0x00ca5d09: mov    DWORD PTR [rsp+0x68],edi
0x00ca5d0d: movzx  r8d,r14w
0x00ca5d11: mov    DWORD PTR [rsp+0x60],0x0
0x00ca5d19: mov    BYTE PTR [rsp+0x58],0x0
0x00ca5d1e: mov    DWORD PTR [rsp+0x50],ebx
0x00ca5d22: mov    DWORD PTR [rsp+0x48],eax
0x00ca5d26: mov    eax,DWORD PTR [rsp+0xb0]
0x00ca5d2d: mov    QWORD PTR [rsp+0x40],rbp
0x00ca5d32: mov    BYTE PTR [rsp+0x38],0x1
0x00ca5d37: mov    DWORD PTR [rsp+0x30],eax
0x00ca5d3b: mov    DWORD PTR [rsp+0x28],r13d
0x00ca5d40: mov    DWORD PTR [rsp+0x20],r12d
0x00ca5d45: call   0x140a82c10
0x00ca5d4a: mov    rbx,QWORD PTR [rsp+0xc8]
0x00ca5d52: add    rsp,0x70
0x00ca5d56: pop    r15
0x00ca5d58: pop    r14
0x00ca5d5a: pop    r13
0x00ca5d5c: pop    r12
0x00ca5d5e: pop    rdi
0x00ca5d5f: pop    rsi
0x00ca5d60: pop    rbp
0x00ca5d61: ret
