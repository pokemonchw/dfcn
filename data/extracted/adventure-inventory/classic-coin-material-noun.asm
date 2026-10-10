# classic PE:6a70b91c:0270a000; coin-material-noun; RVA 0xca2bf0..0xca2da2
0x00ca2bf0: mov    QWORD PTR [rsp+0x20],rbx
0x00ca2bf5: mov    QWORD PTR [rsp+0x10],rdx
0x00ca2bfa: push   rbp
0x00ca2bfb: push   rsi
0x00ca2bfc: push   rdi
0x00ca2bfd: push   r12
0x00ca2bff: push   r13
0x00ca2c01: push   r14
0x00ca2c03: push   r15
0x00ca2c05: sub    rsp,0x70
0x00ca2c09: mov    rbx,QWORD PTR [rcx+0x38]
0x00ca2c0d: movzx  r14d,r8b
0x00ca2c11: mov    rdi,QWORD PTR [rcx+0x40]
0x00ca2c15: mov    rsi,rcx
0x00ca2c18: cmp    rbx,rdi
0x00ca2c1b: jae    0x140ca2c3f
0x00ca2c1d: mov    rcx,QWORD PTR [rbx]
0x00ca2c20: mov    rax,QWORD PTR [rcx]
0x00ca2c23: call   QWORD PTR [rax+0x10]
0x00ca2c26: cmp    eax,0x1
0x00ca2c29: je     0x140ca2c31
0x00ca2c2b: add    rbx,0x8
0x00ca2c2f: jmp    0x140ca2c18
0x00ca2c31: mov    rcx,QWORD PTR [rbx]
0x00ca2c34: mov    rax,QWORD PTR [rcx]
0x00ca2c37: call   QWORD PTR [rax+0x40]
0x00ca2c3a: mov    rbp,rax
0x00ca2c3d: jmp    0x140ca2c41
0x00ca2c3f: xor    ebp,ebp
0x00ca2c41: mov    edi,DWORD PTR [rsi+0x14]
0x00ca2c44: mov    rcx,rsi
0x00ca2c47: mov    ebx,DWORD PTR [rsi+0x1c]
0x00ca2c4a: mov    rax,QWORD PTR [rsi]
0x00ca2c4d: cmp    r14b,0x1
0x00ca2c51: jne    0x140ca2ca4
0x00ca2c53: call   QWORD PTR [rax+0x590]
0x00ca2c59: mov    rdx,QWORD PTR [rsi]
0x00ca2c5c: mov    rcx,rsi
0x00ca2c5f: mov    WORD PTR [rsp+0xc0],ax
0x00ca2c67: mov    eax,DWORD PTR [rsi+0x10]
0x00ca2c6a: mov    DWORD PTR [rsp+0xb0],eax
0x00ca2c71: call   QWORD PTR [rdx+0x18]
0x00ca2c74: mov    rdx,QWORD PTR [rsi]
0x00ca2c77: mov    rcx,rsi
0x00ca2c7a: mov    r12d,eax
0x00ca2c7d: call   QWORD PTR [rdx+0x10]
0x00ca2c80: mov    rdx,QWORD PTR [rsi]
0x00ca2c83: mov    rcx,rsi
0x00ca2c86: movzx  r15d,ax
0x00ca2c8a: call   QWORD PTR [rdx+0x8]
0x00ca2c8d: mov    rdx,QWORD PTR [rsi]
0x00ca2c90: mov    rcx,rsi
0x00ca2c93: movzx  r14d,ax
0x00ca2c97: call   QWORD PTR [rdx]
0x00ca2c99: mov    r13d,0x1
0x00ca2c9f: jmp    0x140ca2d32
0x00ca2ca4: mov    rdx,QWORD PTR [rax+0x590]
0x00ca2cab: call   rdx
0x00ca2cad: mov    WORD PTR [rsp+0xc0],ax
0x00ca2cb5: mov    rcx,rsi
0x00ca2cb8: mov    eax,DWORD PTR [rsi+0x10]
0x00ca2cbb: mov    DWORD PTR [rsp+0xb0],eax
0x00ca2cc2: mov    rax,QWORD PTR [rsi]
0x00ca2cc5: cmp    r14b,0x2
0x00ca2cc9: jne    0x140ca2cfb
0x00ca2ccb: call   QWORD PTR [rax+0x18]
0x00ca2cce: mov    r12d,eax
0x00ca2cd1: mov    rcx,rsi
0x00ca2cd4: mov    rax,QWORD PTR [rsi]
0x00ca2cd7: call   QWORD PTR [rax+0x10]
0x00ca2cda: movzx  r15d,ax
0x00ca2cde: mov    rcx,rsi
0x00ca2ce1: mov    rax,QWORD PTR [rsi]
0x00ca2ce4: call   QWORD PTR [rax+0x8]
0x00ca2ce7: movzx  r14d,ax
0x00ca2ceb: mov    rcx,rsi
0x00ca2cee: mov    rax,QWORD PTR [rsi]
0x00ca2cf1: call   QWORD PTR [rax]
0x00ca2cf3: mov    r13d,0xffffffff
0x00ca2cf9: jmp    0x140ca2d32
0x00ca2cfb: call   QWORD PTR [rax+0x478]
0x00ca2d01: mov    rdx,QWORD PTR [rsi]
0x00ca2d04: mov    rcx,rsi
0x00ca2d07: mov    r13d,eax
0x00ca2d0a: call   QWORD PTR [rdx+0x18]
0x00ca2d0d: mov    rdx,QWORD PTR [rsi]
0x00ca2d10: mov    rcx,rsi
0x00ca2d13: mov    r12d,eax
0x00ca2d16: call   QWORD PTR [rdx+0x10]
0x00ca2d19: mov    rdx,QWORD PTR [rsi]
0x00ca2d1c: mov    rcx,rsi
0x00ca2d1f: movzx  r15d,ax
0x00ca2d23: call   QWORD PTR [rdx+0x8]
0x00ca2d26: mov    rdx,QWORD PTR [rsi]
0x00ca2d29: mov    rcx,rsi
0x00ca2d2c: movzx  r14d,ax
0x00ca2d30: call   QWORD PTR [rdx]
0x00ca2d32: mov    rcx,QWORD PTR [rsp+0xb8]
0x00ca2d3a: movzx  edx,ax
0x00ca2d3d: movsx  eax,WORD PTR [rsp+0xc0]
0x00ca2d45: movzx  r9d,r15w
0x00ca2d49: mov    DWORD PTR [rsp+0x68],edi
0x00ca2d4d: movzx  r8d,r14w
0x00ca2d51: mov    DWORD PTR [rsp+0x60],0x0
0x00ca2d59: mov    BYTE PTR [rsp+0x58],0x0
0x00ca2d5e: mov    DWORD PTR [rsp+0x50],ebx
0x00ca2d62: mov    DWORD PTR [rsp+0x48],eax
0x00ca2d66: mov    eax,DWORD PTR [rsp+0xb0]
0x00ca2d6d: mov    QWORD PTR [rsp+0x40],rbp
0x00ca2d72: mov    BYTE PTR [rsp+0x38],0x1
0x00ca2d77: mov    DWORD PTR [rsp+0x30],eax
0x00ca2d7b: mov    DWORD PTR [rsp+0x28],r13d
0x00ca2d80: mov    DWORD PTR [rsp+0x20],r12d
0x00ca2d85: call   0x140a7fc90
0x00ca2d8a: mov    rbx,QWORD PTR [rsp+0xc8]
0x00ca2d92: add    rsp,0x70
0x00ca2d96: pop    r15
0x00ca2d98: pop    r14
0x00ca2d9a: pop    r13
0x00ca2d9c: pop    r12
0x00ca2d9e: pop    rdi
0x00ca2d9f: pop    rsi
0x00ca2da0: pop    rbp
0x00ca2da1: ret
