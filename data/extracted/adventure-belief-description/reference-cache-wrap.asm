# reference PE:6a70a6d9:02711000; cache-wrap; RVA 0x8e7310..0x8e7431
0x008e7310: test   r8d,r8d
0x008e7313: jle    0x1408e7430
0x008e7319: mov    QWORD PTR [rsp+0x8],rbx
0x008e731e: mov    QWORD PTR [rsp+0x10],rbp
0x008e7323: push   rsi
0x008e7324: push   rdi
0x008e7325: push   r14
0x008e7327: sub    rsp,0x40
0x008e732b: mov    edi,r8d
0x008e732e: mov    rbx,rdx
0x008e7331: mov    rsi,rcx
0x008e7334: xorps  xmm0,xmm0
0x008e7337: movdqu XMMWORD PTR [rsp+0x20],xmm0
0x008e733d: xor    ebp,ebp
0x008e733f: mov    QWORD PTR [rsp+0x30],rbp
0x008e7344: mov    ecx,0x20
0x008e7349: call   0x141539690
0x008e734e: xorps  xmm0,xmm0
0x008e7351: movups XMMWORD PTR [rax],xmm0
0x008e7354: mov    QWORD PTR [rax+0x10],rbp
0x008e7358: mov    QWORD PTR [rax+0x18],0xf
0x008e7360: mov    BYTE PTR [rax],bpl
0x008e7363: mov    QWORD PTR [rsp+0x78],rax
0x008e7368: cmp    rax,rbx
0x008e736b: je     0x1408e7386
0x008e736d: mov    r8,QWORD PTR [rbx+0x10]
0x008e7371: cmp    QWORD PTR [rbx+0x18],0xf
0x008e7376: jbe    0x1408e737b
0x008e7378: mov    rbx,QWORD PTR [rbx]
0x008e737b: mov    rdx,rbx
0x008e737e: mov    rcx,rax
0x008e7381: call   0x14006f8d0
0x008e7386: lea    r8,[rsp+0x78]
0x008e738b: xor    edx,edx
0x008e738d: lea    rcx,[rsp+0x20]
0x008e7392: call   0x1400bad30
0x008e7397: mov    r8d,edi
0x008e739a: lea    rdx,[rsp+0x20]
0x008e739f: mov    rcx,rsi
0x008e73a2: call   0x1408e7440
0x008e73a7: nop
0x008e73a8: mov    rdi,QWORD PTR [rsp+0x28]
0x008e73ad: mov    rax,rdi
0x008e73b0: mov    rsi,QWORD PTR [rsp+0x20]
0x008e73b5: sub    rax,rsi
0x008e73b8: sar    rax,0x3
0x008e73bc: test   rax,rax
0x008e73bf: je     0x1408e7414
0x008e73c1: lea    rbp,[rsi+0x8]
0x008e73c5: mov    r14,rsi
0x008e73c8: neg    r14
0x008e73cb: nop    DWORD PTR [rax+rax*1+0x0]
0x008e73d0: mov    rbx,QWORD PTR [rsi]
0x008e73d3: test   rbx,rbx
0x008e73d6: je     0x1408e73ed
0x008e73d8: mov    rcx,rbx
0x008e73db: call   0x14006f850
0x008e73e0: mov    edx,0x20
0x008e73e5: mov    rcx,rbx
0x008e73e8: call   0x141539680
0x008e73ed: mov    r8,rdi
0x008e73f0: sub    r8,rbp
0x008e73f3: mov    rdx,rbp
0x008e73f6: mov    rcx,rsi
0x008e73f9: call   0x14153ae1a
0x008e73fe: sub    rdi,0x8
0x008e7402: lea    rax,[rdi+r14*1]
0x008e7406: sar    rax,0x3
0x008e740a: test   rax,rax
0x008e740d: jne    0x1408e73d0
0x008e740f: mov    QWORD PTR [rsp+0x28],rdi
0x008e7414: lea    rcx,[rsp+0x20]
0x008e7419: call   0x140066b70
0x008e741e: mov    rbx,QWORD PTR [rsp+0x60]
0x008e7423: mov    rbp,QWORD PTR [rsp+0x68]
0x008e7428: add    rsp,0x40
0x008e742c: pop    r14
0x008e742e: pop    rdi
0x008e742f: pop    rsi
0x008e7430: ret
