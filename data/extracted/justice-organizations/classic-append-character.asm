# classic PE:6a70b91c:0270a000; append-character; RVA 0xb9b10..0xb9c54
0x000b9b10: mov    QWORD PTR [rsp+0x20],rbx
0x000b9b15: push   rbp
0x000b9b16: push   rsi
0x000b9b17: push   r15
0x000b9b19: sub    rsp,0x20
0x000b9b1d: mov    rsi,QWORD PTR [rcx+0x10]
0x000b9b21: movzx  r15d,dl
0x000b9b25: mov    rbp,QWORD PTR [rcx+0x18]
0x000b9b29: mov    rbx,rcx
0x000b9b2c: cmp    rsi,rbp
0x000b9b2f: jae    0x1400b9b59
0x000b9b31: lea    rax,[rsi+0x1]
0x000b9b35: mov    QWORD PTR [rcx+0x10],rax
0x000b9b39: cmp    rbp,0xf
0x000b9b3d: jbe    0x1400b9b42
0x000b9b3f: mov    rbx,QWORD PTR [rcx]
0x000b9b42: mov    BYTE PTR [rbx+rsi*1],r15b
0x000b9b46: mov    BYTE PTR [rbx+rsi*1+0x1],0x0
0x000b9b4b: mov    rbx,QWORD PTR [rsp+0x58]
0x000b9b50: add    rsp,0x20
0x000b9b54: pop    r15
0x000b9b56: pop    rsi
0x000b9b57: pop    rbp
0x000b9b58: ret
0x000b9b59: mov    QWORD PTR [rsp+0x40],rdi
0x000b9b5e: movabs rdi,0x7fffffffffffffff
0x000b9b68: mov    rax,rdi
0x000b9b6b: sub    rax,rsi
0x000b9b6e: cmp    rax,0x1
0x000b9b72: jb     0x1400b9c4e
0x000b9b78: mov    QWORD PTR [rsp+0x48],r12
0x000b9b7d: lea    r12,[rsi+0x1]
0x000b9b81: mov    rcx,r12
0x000b9b84: mov    QWORD PTR [rsp+0x50],r14
0x000b9b89: or     rcx,0xf
0x000b9b8d: cmp    rcx,rdi
0x000b9b90: ja     0x1400b9bb1
0x000b9b92: mov    rdx,rbp
0x000b9b95: mov    rax,rdi
0x000b9b98: shr    rdx,1
0x000b9b9b: sub    rax,rdx
0x000b9b9e: cmp    rbp,rax
0x000b9ba1: ja     0x1400b9bb1
0x000b9ba3: lea    rax,[rdx+rbp*1]
0x000b9ba7: mov    rdi,rcx
0x000b9baa: cmp    rcx,rax
0x000b9bad: cmovb  rdi,rax
0x000b9bb1: lea    rcx,[rdi+0x1]
0x000b9bb5: call   0x140070760
0x000b9bba: mov    QWORD PTR [rbx+0x10],r12
0x000b9bbe: mov    r14,rax
0x000b9bc1: mov    r12,QWORD PTR [rsp+0x48]
0x000b9bc6: mov    r8,rsi
0x000b9bc9: mov    QWORD PTR [rbx+0x18],rdi
0x000b9bcd: mov    rcx,rax
0x000b9bd0: cmp    rbp,0xf
0x000b9bd4: jbe    0x1400b9c21
0x000b9bd6: mov    rdi,QWORD PTR [rbx]
0x000b9bd9: mov    rdx,rdi
0x000b9bdc: call   0x1415359e8
0x000b9be1: lea    rdx,[rbp+0x1]
0x000b9be5: mov    BYTE PTR [rsi+r14*1],r15b
0x000b9be9: mov    BYTE PTR [rsi+r14*1+0x1],0x0
0x000b9bef: cmp    rdx,0x1000
0x000b9bf6: jb     0x1400b9c10
0x000b9bf8: mov    rcx,QWORD PTR [rdi-0x8]
0x000b9bfc: add    rdx,0x27
0x000b9c00: sub    rdi,rcx
0x000b9c03: lea    rax,[rdi-0x8]
0x000b9c07: cmp    rax,0x1f
0x000b9c0b: ja     0x1400b9c1a
0x000b9c0d: mov    rdi,rcx
0x000b9c10: mov    rcx,rdi
0x000b9c13: call   0x1415345f0
0x000b9c18: jmp    0x1400b9c33
0x000b9c1a: call   QWORD PTR [rip+0x1526e80]        # 0x1415e0aa0
0x000b9c20: int3
0x000b9c21: mov    rdx,rbx
0x000b9c24: call   0x1415359e8
0x000b9c29: mov    BYTE PTR [rsi+r14*1],r15b
0x000b9c2d: mov    BYTE PTR [rsi+r14*1+0x1],0x0
0x000b9c33: mov    rdi,QWORD PTR [rsp+0x40]
0x000b9c38: mov    QWORD PTR [rbx],r14
0x000b9c3b: mov    r14,QWORD PTR [rsp+0x50]
0x000b9c40: mov    rbx,QWORD PTR [rsp+0x58]
0x000b9c45: add    rsp,0x20
0x000b9c49: pop    r15
0x000b9c4b: pop    rsi
0x000b9c4c: pop    rbp
0x000b9c4d: ret
0x000b9c4e: call   0x140065820
0x000b9c53: int3
