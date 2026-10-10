# steam PE:6a70a6d9:02711000; reaction-class-token-space; RVA 0x724a30..0x724b09
0x00724a30: mov    QWORD PTR [rsp+0x20],rbp
0x00724a35: push   rsi
0x00724a36: push   rdi
0x00724a37: push   r12
0x00724a39: sub    rsp,0x30
0x00724a3d: mov    rbp,QWORD PTR [rdx+0x10]
0x00724a41: mov    rdi,rcx
0x00724a44: xor    ecx,ecx
0x00724a46: movabs rax,0x7fffffffffffffff
0x00724a50: movzx  r12d,r8b
0x00724a54: mov    rsi,rdx
0x00724a57: cmp    rbp,rax
0x00724a5a: je     0x140724b03
0x00724a60: cmp    QWORD PTR [rdx+0x18],0xf
0x00724a65: mov    QWORD PTR [rsp+0x50],rbx
0x00724a6a: mov    QWORD PTR [rsp+0x58],r14
0x00724a6f: mov    QWORD PTR [rsp+0x60],r15
0x00724a74: jbe    0x140724a79
0x00724a76: mov    rsi,QWORD PTR [rdx]
0x00724a79: xorps  xmm0,xmm0
0x00724a7c: lea    r15,[rbp+0x1]
0x00724a80: movups XMMWORD PTR [rdi],xmm0
0x00724a83: mov    ebx,0xf
0x00724a88: mov    QWORD PTR [rdi+0x10],rcx
0x00724a8c: mov    QWORD PTR [rdi+0x18],rcx
0x00724a90: mov    r14,rdi
0x00724a93: cmp    r15,rbx
0x00724a96: jbe    0x140724ac4
0x00724a98: mov    rbx,r15
0x00724a9b: or     rbx,0xf
0x00724a9f: cmp    rbx,rax
0x00724aa2: jbe    0x140724aa9
0x00724aa4: mov    rbx,rax
0x00724aa7: jmp    0x140724ab5
0x00724aa9: mov    eax,0x16
0x00724aae: cmp    rbx,rax
0x00724ab1: cmovb  rbx,rax
0x00724ab5: lea    rcx,[rbx+0x1]
0x00724ab9: call   0x1400707d0
0x00724abe: mov    r14,rax
0x00724ac1: mov    QWORD PTR [rdi],rax
0x00724ac4: mov    r8,rbp
0x00724ac7: mov    QWORD PTR [rdi+0x10],r15
0x00724acb: mov    rdx,rsi
0x00724ace: mov    QWORD PTR [rdi+0x18],rbx
0x00724ad2: mov    rcx,r14
0x00724ad5: call   0x14153aa78
0x00724ada: mov    rbx,QWORD PTR [rsp+0x50]
0x00724adf: mov    rax,rdi
0x00724ae2: mov    BYTE PTR [r14+rbp*1],r12b
0x00724ae6: mov    rbp,QWORD PTR [rsp+0x68]
0x00724aeb: mov    BYTE PTR [r14+r15*1],0x0
0x00724af0: mov    r15,QWORD PTR [rsp+0x60]
0x00724af5: mov    r14,QWORD PTR [rsp+0x58]
0x00724afa: add    rsp,0x30
0x00724afe: pop    r12
0x00724b00: pop    rdi
0x00724b01: pop    rsi
0x00724b02: ret
0x00724b03: call   0x140065890
0x00724b08: int3
