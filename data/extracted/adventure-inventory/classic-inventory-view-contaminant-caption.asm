# classic PE:6a70b91c:0270a000; inventory-view-contaminant-caption; RVA 0x836b20..0x836ef1
0x00836b20: mov    QWORD PTR [rsp+0x18],rbx
0x00836b25: mov    QWORD PTR [rsp+0x20],rsi
0x00836b2a: push   rbp
0x00836b2b: push   rdi
0x00836b2c: push   r12
0x00836b2e: push   r14
0x00836b30: push   r15
0x00836b32: mov    rbp,rsp
0x00836b35: sub    rsp,0x50
0x00836b39: mov    rax,QWORD PTR [rip+0x105f500]        # 0x141896040
0x00836b40: xor    rax,rsp
0x00836b43: mov    QWORD PTR [rbp-0x10],rax
0x00836b47: mov    r12,rdx
0x00836b4a: mov    rbx,rcx
0x00836b4d: cmp    QWORD PTR [rcx+0x10],0x0
0x00836b52: je     0x140836ec6
0x00836b58: mov    rcx,QWORD PTR [rcx+0x18]
0x00836b5c: test   rcx,rcx
0x00836b5f: je     0x140836ec6
0x00836b65: xorps  xmm0,xmm0
0x00836b68: movups XMMWORD PTR [rbp-0x30],xmm0
0x00836b6c: xor    esi,esi
0x00836b6e: mov    QWORD PTR [rbp-0x20],rsi
0x00836b72: mov    QWORD PTR [rbp-0x18],0xf
0x00836b7a: mov    BYTE PTR [rbp-0x30],sil
0x00836b7e: call   0x1406559b0
0x00836b83: mov    rdi,QWORD PTR [rbx+0x10]
0x00836b87: mov    rax,QWORD PTR [rbx+0x18]
0x00836b8b: movsx  rcx,WORD PTR [rax+0x18]
0x00836b90: test   cx,cx
0x00836b93: js     0x140836d6a
0x00836b99: mov    rax,QWORD PTR [rdi+0x5f8]
0x00836ba0: mov    rdx,QWORD PTR [rax]
0x00836ba3: mov    rbx,rcx
0x00836ba6: mov    rcx,QWORD PTR [rax+0x8]
0x00836baa: sub    rcx,rdx
0x00836bad: sar    rcx,0x3
0x00836bb1: cmp    rbx,rcx
0x00836bb4: jae    0x140836d6a
0x00836bba: mov    rax,QWORD PTR [rdx+rbx*8]
0x00836bbe: mov    rcx,QWORD PTR [rax+0x98]
0x00836bc5: sub    rcx,QWORD PTR [rax+0x90]
0x00836bcc: sar    rcx,0x3
0x00836bd0: mov    QWORD PTR [rbp-0x20],rsi
0x00836bd4: lea    rax,[rbp-0x30]
0x00836bd8: test   rcx,rcx
0x00836bdb: je     0x140836c30
0x00836bdd: cmp    QWORD PTR [rbp-0x18],0xf
0x00836be2: cmova  rax,QWORD PTR [rbp-0x30]
0x00836be7: mov    BYTE PTR [rax],sil
0x00836bea: mov    rax,QWORD PTR [rdi+0x5f8]
0x00836bf1: mov    rcx,QWORD PTR [rax]
0x00836bf4: mov    rax,QWORD PTR [rcx+rbx*8]
0x00836bf8: cmp    DWORD PTR [rax+0x84],0x1
0x00836bff: jg     0x140836c0a
0x00836c01: mov    rax,QWORD PTR [rax+0x90]
0x00836c08: jmp    0x140836c11
0x00836c0a: mov    rax,QWORD PTR [rax+0xa8]
0x00836c11: mov    rdx,QWORD PTR [rax]
0x00836c14: cmp    QWORD PTR [rdx+0x18],0xf
0x00836c19: mov    r8,QWORD PTR [rdx+0x10]
0x00836c1d: jbe    0x140836c22
0x00836c1f: mov    rdx,QWORD PTR [rdx]
0x00836c22: lea    rcx,[rbp-0x30]
0x00836c26: call   0x14006f9a0
0x00836c2b: jmp    0x140836e43
0x00836c30: cmp    QWORD PTR [rbp-0x18],0xf
0x00836c35: cmova  rax,QWORD PTR [rbp-0x30]
0x00836c3a: mov    BYTE PTR [rax],0x0
0x00836c3d: mov    r8d,0x9
0x00836c43: lea    rdx,[rip+0xe451a6]        # 0x14167bdf0 ; literal="body part"
0x00836c4a: lea    rcx,[rbp-0x30]
0x00836c4e: call   0x14006f9a0
0x00836c53: mov    rax,QWORD PTR [rdi+0x5f8]
0x00836c5a: mov    rcx,QWORD PTR [rax]
0x00836c5d: mov    rax,QWORD PTR [rcx+rbx*8]
0x00836c61: cmp    DWORD PTR [rax+0x84],0x1
0x00836c68: jle    0x140836e43
0x00836c6e: mov    rdi,QWORD PTR [rbp-0x20]
0x00836c72: mov    rsi,QWORD PTR [rbp-0x18]
0x00836c76: cmp    rdi,rsi
0x00836c79: jae    0x140836c9b
0x00836c7b: lea    rax,[rdi+0x1]
0x00836c7f: mov    QWORD PTR [rbp-0x20],rax
0x00836c83: lea    rax,[rbp-0x30]
0x00836c87: cmp    rsi,0xf
0x00836c8b: cmova  rax,QWORD PTR [rbp-0x30]
0x00836c90: mov    WORD PTR [rax+rdi*1],0x73
0x00836c96: jmp    0x140836e43
0x00836c9b: movabs rbx,0x7fffffffffffffff
0x00836ca5: mov    rax,rbx
0x00836ca8: sub    rax,rdi
0x00836cab: cmp    rax,0x1
0x00836caf: jb     0x140836eeb
0x00836cb5: lea    r15,[rdi+0x1]
0x00836cb9: mov    rcx,r15
0x00836cbc: or     rcx,0xf
0x00836cc0: cmp    rcx,rbx
0x00836cc3: ja     0x140836ce4
0x00836cc5: mov    rdx,rsi
0x00836cc8: shr    rdx,1
0x00836ccb: mov    rax,rbx
0x00836cce: sub    rax,rdx
0x00836cd1: cmp    rsi,rax
0x00836cd4: ja     0x140836ce4
0x00836cd6: lea    rax,[rsi+rdx*1]
0x00836cda: mov    rbx,rcx
0x00836cdd: cmp    rcx,rax
0x00836ce0: cmovb  rbx,rax
0x00836ce4: lea    rcx,[rbx+0x1]
0x00836ce8: call   0x140070760
0x00836ced: mov    r14,rax
0x00836cf0: mov    QWORD PTR [rbp-0x20],r15
0x00836cf4: mov    QWORD PTR [rbp-0x18],rbx
0x00836cf8: mov    r8,rdi
0x00836cfb: mov    rcx,rax
0x00836cfe: cmp    rsi,0xf
0x00836d02: jbe    0x140836d51
0x00836d04: mov    rbx,QWORD PTR [rbp-0x30]
0x00836d08: mov    rdx,rbx
0x00836d0b: call   0x1415359e8
0x00836d10: mov    WORD PTR [r14+rdi*1],0x73
0x00836d17: lea    rdx,[rsi+0x1]
0x00836d1b: cmp    rdx,0x1000
0x00836d22: jb     0x140836d40
0x00836d24: add    rdx,0x27
0x00836d28: mov    rcx,QWORD PTR [rbx-0x8]
0x00836d2c: sub    rbx,rcx
0x00836d2f: lea    rax,[rbx-0x8]
0x00836d33: cmp    rax,0x1f
0x00836d37: ja     0x140836e33
0x00836d3d: mov    rbx,rcx
0x00836d40: mov    rcx,rbx
0x00836d43: call   0x1415345f0
0x00836d48: mov    QWORD PTR [rbp-0x30],r14
0x00836d4c: jmp    0x140836e43
0x00836d51: lea    rdx,[rbp-0x30]
0x00836d55: call   0x1415359e8
0x00836d5a: mov    WORD PTR [r14+rdi*1],0x73
0x00836d61: mov    QWORD PTR [rbp-0x30],r14
0x00836d65: jmp    0x140836e43
0x00836d6a: mov    rdi,QWORD PTR [rbp-0x18]
0x00836d6e: cmp    rdi,0x9
0x00836d72: jb     0x140836da7
0x00836d74: lea    rbx,[rbp-0x30]
0x00836d78: cmp    rdi,0xf
0x00836d7c: cmova  rbx,QWORD PTR [rbp-0x30]
0x00836d81: mov    QWORD PTR [rbp-0x20],0x9
0x00836d89: mov    r8d,0x9
0x00836d8f: lea    rdx,[rip+0xe4505a]        # 0x14167bdf0 ; literal="body part"
0x00836d96: mov    rcx,rbx
0x00836d99: call   0x141535d8a
0x00836d9e: mov    BYTE PTR [rbx+0x9],0x0
0x00836da2: jmp    0x140836e43
0x00836da7: mov    rcx,rdi
0x00836daa: shr    rcx,1
0x00836dad: movabs rbx,0x7fffffffffffffff
0x00836db7: mov    rax,rbx
0x00836dba: sub    rax,rcx
0x00836dbd: cmp    rdi,rax
0x00836dc0: ja     0x140836dd2
0x00836dc2: lea    rax,[rcx+rdi*1]
0x00836dc6: mov    ebx,0xf
0x00836dcb: cmp    rax,rbx
0x00836dce: cmova  rbx,rax
0x00836dd2: lea    rcx,[rbx+0x1]
0x00836dd6: call   0x140070760
0x00836ddb: mov    rsi,rax
0x00836dde: mov    QWORD PTR [rbp-0x20],0x9
0x00836de6: mov    QWORD PTR [rbp-0x18],rbx
0x00836dea: movsd  xmm0,QWORD PTR [rip+0xe44ffe]        # 0x14167bdf0 ; literal="body part"
0x00836df2: movsd  QWORD PTR [rax],xmm0
0x00836df6: movzx  ecx,BYTE PTR [rip+0xe44ffb]        # 0x14167bdf8 ; literal="t"
0x00836dfd: mov    BYTE PTR [rax+0x8],cl
0x00836e00: mov    BYTE PTR [rax+0x9],0x0
0x00836e04: cmp    rdi,0xf
0x00836e08: jbe    0x140836e3f
0x00836e0a: lea    rdx,[rdi+0x1]
0x00836e0e: mov    rcx,QWORD PTR [rbp-0x30]
0x00836e12: mov    rax,rcx
0x00836e15: cmp    rdx,0x1000
0x00836e1c: jb     0x140836e3a
0x00836e1e: add    rdx,0x27
0x00836e22: mov    rcx,QWORD PTR [rcx-0x8]
0x00836e26: sub    rax,rcx
0x00836e29: add    rax,0xfffffffffffffff8
0x00836e2d: cmp    rax,0x1f
0x00836e31: jbe    0x140836e3a
0x00836e33: call   QWORD PTR [rip+0xda9c67]        # 0x1415e0aa0
0x00836e39: int3
0x00836e3a: call   0x1415345f0
0x00836e3f: mov    QWORD PTR [rbp-0x30],rsi
0x00836e43: mov    r8d,0x2
0x00836e49: lea    rdx,[rip+0xdd9448]        # 0x141610298 ; literal=" ("
0x00836e50: mov    rcx,r12
0x00836e53: call   0x14006f9a0
0x00836e58: lea    rdx,[rbp-0x30]
0x00836e5c: cmp    QWORD PTR [rbp-0x18],0xf
0x00836e61: cmova  rdx,QWORD PTR [rbp-0x30]
0x00836e66: mov    r8,QWORD PTR [rbp-0x20]
0x00836e6a: mov    rcx,r12
0x00836e6d: call   0x14006f9a0
0x00836e72: mov    r8d,0x1
0x00836e78: lea    rdx,[rip+0xdd9459]        # 0x1416102d8 ; literal=")"
0x00836e7f: mov    rcx,r12
0x00836e82: call   0x14006f9a0
0x00836e87: nop
0x00836e88: mov    rdx,QWORD PTR [rbp-0x18]
0x00836e8c: cmp    rdx,0xf
0x00836e90: jbe    0x140836ec6
0x00836e92: inc    rdx
0x00836e95: mov    rcx,QWORD PTR [rbp-0x30]
0x00836e99: mov    rax,rcx
0x00836e9c: cmp    rdx,0x1000
0x00836ea3: jb     0x140836ec1
0x00836ea5: add    rdx,0x27
0x00836ea9: mov    rcx,QWORD PTR [rcx-0x8]
0x00836ead: sub    rax,rcx
0x00836eb0: add    rax,0xfffffffffffffff8
0x00836eb4: cmp    rax,0x1f
0x00836eb8: jbe    0x140836ec1
0x00836eba: call   QWORD PTR [rip+0xda9be0]        # 0x1415e0aa0
0x00836ec0: int3
0x00836ec1: call   0x1415345f0
0x00836ec6: mov    rcx,QWORD PTR [rbp-0x10]
0x00836eca: xor    rcx,rsp
0x00836ecd: call   0x1415345d0
0x00836ed2: lea    r11,[rsp+0x50]
0x00836ed7: mov    rbx,QWORD PTR [r11+0x40]
0x00836edb: mov    rsi,QWORD PTR [r11+0x48]
0x00836edf: mov    rsp,r11
0x00836ee2: pop    r15
0x00836ee4: pop    r14
0x00836ee6: pop    r12
0x00836ee8: pop    rdi
0x00836ee9: pop    rbp
0x00836eea: ret
0x00836eeb: call   0x140065820
0x00836ef0: nop
