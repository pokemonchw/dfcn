# reference PE:6a70a6d9:02711000; append-character; RVA 0xb9b80..0xb9cc4
0x000b9b80: mov    QWORD PTR [rsp+0x20],rbx
0x000b9b85: push   rbp
0x000b9b86: push   rsi
0x000b9b87: push   r15
0x000b9b89: sub    rsp,0x20
0x000b9b8d: mov    rsi,QWORD PTR [rcx+0x10]
0x000b9b91: movzx  r15d,dl
0x000b9b95: mov    rbp,QWORD PTR [rcx+0x18]
0x000b9b99: mov    rbx,rcx
0x000b9b9c: cmp    rsi,rbp
0x000b9b9f: jae    0x1400b9bc9
0x000b9ba1: lea    rax,[rsi+0x1]
0x000b9ba5: mov    QWORD PTR [rcx+0x10],rax
0x000b9ba9: cmp    rbp,0xf
0x000b9bad: jbe    0x1400b9bb2
0x000b9baf: mov    rbx,QWORD PTR [rcx]
0x000b9bb2: mov    BYTE PTR [rbx+rsi*1],r15b
0x000b9bb6: mov    BYTE PTR [rbx+rsi*1+0x1],0x0
0x000b9bbb: mov    rbx,QWORD PTR [rsp+0x58]
0x000b9bc0: add    rsp,0x20
0x000b9bc4: pop    r15
0x000b9bc6: pop    rsi
0x000b9bc7: pop    rbp
0x000b9bc8: ret
0x000b9bc9: mov    QWORD PTR [rsp+0x40],rdi
0x000b9bce: movabs rdi,0x7fffffffffffffff
0x000b9bd8: mov    rax,rdi
0x000b9bdb: sub    rax,rsi
0x000b9bde: cmp    rax,0x1
0x000b9be2: jb     0x1400b9cbe
0x000b9be8: mov    QWORD PTR [rsp+0x48],r12
0x000b9bed: lea    r12,[rsi+0x1]
0x000b9bf1: mov    rcx,r12
0x000b9bf4: mov    QWORD PTR [rsp+0x50],r14
0x000b9bf9: or     rcx,0xf
0x000b9bfd: cmp    rcx,rdi
0x000b9c00: ja     0x1400b9c21
0x000b9c02: mov    rdx,rbp
0x000b9c05: mov    rax,rdi
0x000b9c08: shr    rdx,1
0x000b9c0b: sub    rax,rdx
0x000b9c0e: cmp    rbp,rax
0x000b9c11: ja     0x1400b9c21
0x000b9c13: lea    rax,[rdx+rbp*1]
0x000b9c17: mov    rdi,rcx
0x000b9c1a: cmp    rcx,rax
0x000b9c1d: cmovb  rdi,rax
0x000b9c21: lea    rcx,[rdi+0x1]
0x000b9c25: call   0x1400707d0
0x000b9c2a: mov    QWORD PTR [rbx+0x10],r12
0x000b9c2e: mov    r14,rax
0x000b9c31: mov    r12,QWORD PTR [rsp+0x48]
0x000b9c36: mov    r8,rsi
0x000b9c39: mov    QWORD PTR [rbx+0x18],rdi
0x000b9c3d: mov    rcx,rax
0x000b9c40: cmp    rbp,0xf
0x000b9c44: jbe    0x1400b9c91
0x000b9c46: mov    rdi,QWORD PTR [rbx]
0x000b9c49: mov    rdx,rdi
0x000b9c4c: call   0x14153aa78
0x000b9c51: lea    rdx,[rbp+0x1]
0x000b9c55: mov    BYTE PTR [rsi+r14*1],r15b
0x000b9c59: mov    BYTE PTR [rsi+r14*1+0x1],0x0
0x000b9c5f: cmp    rdx,0x1000
0x000b9c66: jb     0x1400b9c80
0x000b9c68: mov    rcx,QWORD PTR [rdi-0x8]
0x000b9c6c: add    rdx,0x27
0x000b9c70: sub    rdi,rcx
0x000b9c73: lea    rax,[rdi-0x8]
0x000b9c77: cmp    rax,0x1f
0x000b9c7b: ja     0x1400b9c8a
0x000b9c7d: mov    rdi,rcx
0x000b9c80: mov    rcx,rdi
0x000b9c83: call   0x141539680
0x000b9c88: jmp    0x1400b9ca3
0x000b9c8a: call   QWORD PTR [rip+0x152be98]        # 0x1415e5b28
0x000b9c90: int3
0x000b9c91: mov    rdx,rbx
0x000b9c94: call   0x14153aa78
0x000b9c99: mov    BYTE PTR [rsi+r14*1],r15b
0x000b9c9d: mov    BYTE PTR [rsi+r14*1+0x1],0x0
0x000b9ca3: mov    rdi,QWORD PTR [rsp+0x40]
0x000b9ca8: mov    QWORD PTR [rbx],r14
0x000b9cab: mov    r14,QWORD PTR [rsp+0x50]
0x000b9cb0: mov    rbx,QWORD PTR [rsp+0x58]
0x000b9cb5: add    rsp,0x20
0x000b9cb9: pop    r15
0x000b9cbb: pop    rsi
0x000b9cbc: pop    rbp
0x000b9cbd: ret
0x000b9cbe: call   0x140065890
0x000b9cc3: int3
