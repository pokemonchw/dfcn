# classic PE:6a70b91c:0270a000; cache-wrap; RVA 0x8e4b80..0x8e4ca1
0x008e4b80: test   r8d,r8d
0x008e4b83: jle    0x1408e4ca0
0x008e4b89: mov    QWORD PTR [rsp+0x8],rbx
0x008e4b8e: mov    QWORD PTR [rsp+0x10],rbp
0x008e4b93: push   rsi
0x008e4b94: push   rdi
0x008e4b95: push   r14
0x008e4b97: sub    rsp,0x40
0x008e4b9b: mov    edi,r8d
0x008e4b9e: mov    rbx,rdx
0x008e4ba1: mov    rsi,rcx
0x008e4ba4: xorps  xmm0,xmm0
0x008e4ba7: movdqu XMMWORD PTR [rsp+0x20],xmm0
0x008e4bad: xor    ebp,ebp
0x008e4baf: mov    QWORD PTR [rsp+0x30],rbp
0x008e4bb4: mov    ecx,0x20
0x008e4bb9: call   0x141534600
0x008e4bbe: xorps  xmm0,xmm0
0x008e4bc1: movups XMMWORD PTR [rax],xmm0
0x008e4bc4: mov    QWORD PTR [rax+0x10],rbp
0x008e4bc8: mov    QWORD PTR [rax+0x18],0xf
0x008e4bd0: mov    BYTE PTR [rax],bpl
0x008e4bd3: mov    QWORD PTR [rsp+0x78],rax
0x008e4bd8: cmp    rax,rbx
0x008e4bdb: je     0x1408e4bf6
0x008e4bdd: mov    r8,QWORD PTR [rbx+0x10]
0x008e4be1: cmp    QWORD PTR [rbx+0x18],0xf
0x008e4be6: jbe    0x1408e4beb
0x008e4be8: mov    rbx,QWORD PTR [rbx]
0x008e4beb: mov    rdx,rbx
0x008e4bee: mov    rcx,rax
0x008e4bf1: call   0x14006f860
0x008e4bf6: lea    r8,[rsp+0x78]
0x008e4bfb: xor    edx,edx
0x008e4bfd: lea    rcx,[rsp+0x20]
0x008e4c02: call   0x1400bacc0
0x008e4c07: mov    r8d,edi
0x008e4c0a: lea    rdx,[rsp+0x20]
0x008e4c0f: mov    rcx,rsi
0x008e4c12: call   0x1408e4cb0
0x008e4c17: nop
0x008e4c18: mov    rdi,QWORD PTR [rsp+0x28]
0x008e4c1d: mov    rax,rdi
0x008e4c20: mov    rsi,QWORD PTR [rsp+0x20]
0x008e4c25: sub    rax,rsi
0x008e4c28: sar    rax,0x3
0x008e4c2c: test   rax,rax
0x008e4c2f: je     0x1408e4c84
0x008e4c31: lea    rbp,[rsi+0x8]
0x008e4c35: mov    r14,rsi
0x008e4c38: neg    r14
0x008e4c3b: nop    DWORD PTR [rax+rax*1+0x0]
0x008e4c40: mov    rbx,QWORD PTR [rsi]
0x008e4c43: test   rbx,rbx
0x008e4c46: je     0x1408e4c5d
0x008e4c48: mov    rcx,rbx
0x008e4c4b: call   0x14006f7e0
0x008e4c50: mov    edx,0x20
0x008e4c55: mov    rcx,rbx
0x008e4c58: call   0x1415345f0
0x008e4c5d: mov    r8,rdi
0x008e4c60: sub    r8,rbp
0x008e4c63: mov    rdx,rbp
0x008e4c66: mov    rcx,rsi
0x008e4c69: call   0x141535d8a
0x008e4c6e: sub    rdi,0x8
0x008e4c72: lea    rax,[rdi+r14*1]
0x008e4c76: sar    rax,0x3
0x008e4c7a: test   rax,rax
0x008e4c7d: jne    0x1408e4c40
0x008e4c7f: mov    QWORD PTR [rsp+0x28],rdi
0x008e4c84: lea    rcx,[rsp+0x20]
0x008e4c89: call   0x140066b00
0x008e4c8e: mov    rbx,QWORD PTR [rsp+0x60]
0x008e4c93: mov    rbp,QWORD PTR [rsp+0x68]
0x008e4c98: add    rsp,0x40
0x008e4c9c: pop    r14
0x008e4c9e: pop    rdi
0x008e4c9f: pop    rsi
0x008e4ca0: ret
