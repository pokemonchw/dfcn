0x140d4eb70: mov    QWORD PTR [rsp+0x8],rbx
0x140d4eb75: mov    QWORD PTR [rsp+0x10],rsi
0x140d4eb7a: mov    QWORD PTR [rsp+0x18],rdi
0x140d4eb7f: mov    QWORD PTR [rsp+0x20],r12
0x140d4eb84: push   rbp
0x140d4eb85: push   r14
0x140d4eb87: push   r15
0x140d4eb89: mov    rbp,rsp
0x140d4eb8c: sub    rsp,0x50
0x140d4eb90: mov    rsi,r9
0x140d4eb93: mov    r15,r8
0x140d4eb96: mov    r12,rdx
0x140d4eb99: xorps  xmm0,xmm0
0x140d4eb9c: movdqu XMMWORD PTR [rbp-0x18],xmm0
0x140d4eba1: xor    r14d,r14d
0x140d4eba4: mov    ecx,r14d
0x140d4eba7: mov    QWORD PTR [rbp-0x8],rcx
0x140d4ebab: mov    edi,r14d
0x140d4ebae: mov    rdx,QWORD PTR [r9]
0x140d4ebb1: mov    rax,QWORD PTR [r9+0x8]
0x140d4ebb5: sub    rax,rdx
0x140d4ebb8: sar    rax,0x2
0x140d4ebbc: test   rax,rax
0x140d4ebbf: je     0x140d4ec1a
0x140d4ebc1: mov    ebx,r14d
0x140d4ebc4: movsxd rax,DWORD PTR [rbx+rdx*1]
0x140d4ebc8: test   eax,eax
0x140d4ebca: js     0x140d4ebfa
0x140d4ebcc: mov    rcx,rax
0x140d4ebcf: mov    rax,QWORD PTR [rip+0x17c103a]        # 0x14250fc10
0x140d4ebd6: mov    rdx,QWORD PTR [rip+0x17c102b]        # 0x14250fc08
0x140d4ebdd: sub    rax,rdx
0x140d4ebe0: sar    rax,0x3
0x140d4ebe4: cmp    rcx,rax
0x140d4ebe7: jae    0x140d4ebfa
0x140d4ebe9: mov    rdx,QWORD PTR [rdx+rcx*8]
0x140d4ebed: add    rdx,0x38
0x140d4ebf1: lea    rcx,[rbp-0x18]
0x140d4ebf5: call   0x1403d06d0
0x140d4ebfa: inc    edi
0x140d4ebfc: add    rbx,0x4
0x140d4ec00: mov    rdx,QWORD PTR [rsi]
0x140d4ec03: mov    rcx,QWORD PTR [rsi+0x8]
0x140d4ec07: sub    rcx,rdx
0x140d4ec0a: sar    rcx,0x2
0x140d4ec0e: movsxd rax,edi
0x140d4ec11: cmp    rax,rcx
0x140d4ec14: jb     0x140d4ebc4
0x140d4ec16: mov    rcx,QWORD PTR [rbp-0x8]
0x140d4ec1a: mov    rsi,QWORD PTR [rbp-0x10]
0x140d4ec1e: mov    rax,rsi
0x140d4ec21: mov    rdi,QWORD PTR [rbp-0x18]
0x140d4ec25: sub    rax,rdi
0x140d4ec28: sar    rax,0x2
0x140d4ec2c: test   rax,rax
0x140d4ec2f: jne    0x140d4ecb0
0x140d4ec31: mov    rbx,QWORD PTR [rip+0x17c0fc0]        # 0x14250fbf8
0x140d4ec38: sub    rbx,QWORD PTR [rip+0x17c0fb1]        # 0x14250fbf0
0x140d4ec3f: sar    rbx,0x3
0x140d4ec43: cmp    rbx,rax
0x140d4ec46: jae    0x140d4ec4e
0x140d4ec48: lea    rsi,[rdi+rbx*4]
0x140d4ec4c: jmp    0x140d4ec8d
0x140d4ec4e: jbe    0x140d4ec91
0x140d4ec50: sub    rcx,rdi
0x140d4ec53: sar    rcx,0x2
0x140d4ec57: cmp    rbx,rcx
0x140d4ec5a: jbe    0x140d4ec72
0x140d4ec5c: mov    rdx,rbx
0x140d4ec5f: lea    rcx,[rbp-0x18]
0x140d4ec63: call   0x140072360
0x140d4ec68: mov    rsi,QWORD PTR [rbp-0x10]
0x140d4ec6c: mov    rdi,QWORD PTR [rbp-0x18]
0x140d4ec70: jmp    0x140d4ec91
0x140d4ec72: sub    rbx,rax
0x140d4ec75: lea    rbx,[rbx*4+0x0]
0x140d4ec7d: mov    r8,rbx
0x140d4ec80: xor    edx,edx
0x140d4ec82: mov    rcx,rsi
0x140d4ec85: call   0x141554566
0x140d4ec8a: add    rsi,rbx
0x140d4ec8d: mov    QWORD PTR [rbp-0x10],rsi
0x140d4ec91: mov    ecx,r14d
0x140d4ec94: sub    rsi,rdi
0x140d4ec97: sar    rsi,0x2
0x140d4ec9b: test   rsi,rsi
0x140d4ec9e: je     0x140d4ecb0
0x140d4eca0: mov    DWORD PTR [rdi],ecx
0x140d4eca2: inc    ecx
0x140d4eca4: lea    rdi,[rdi+0x4]
0x140d4eca8: movsxd rax,ecx
0x140d4ecab: cmp    rax,rsi
0x140d4ecae: jb     0x140d4eca0
0x140d4ecb0: xorps  xmm0,xmm0
0x140d4ecb3: movdqu XMMWORD PTR [rbp-0x30],xmm0
0x140d4ecb8: mov    rcx,r14
0x140d4ecbb: mov    QWORD PTR [rbp-0x20],rcx
0x140d4ecbf: mov    edi,r14d
0x140d4ecc2: mov    rsi,QWORD PTR [rbp+0x40]
0x140d4ecc6: mov    rdx,QWORD PTR [rsi]
0x140d4ecc9: mov    rax,QWORD PTR [rsi+0x8]
0x140d4eccd: sub    rax,rdx
0x140d4ecd0: sar    rax,0x2
0x140d4ecd4: test   rax,rax
0x140d4ecd7: je     0x140d4ed36
0x140d4ecd9: mov    rbx,r14
0x140d4ecdc: nop    DWORD PTR [rax+0x0]
0x140d4ece0: movsxd rax,DWORD PTR [rbx+rdx*1]
0x140d4ece4: test   eax,eax
0x140d4ece6: js     0x140d4ed16
0x140d4ece8: mov    rcx,rax
0x140d4eceb: mov    rax,QWORD PTR [rip+0x17c0f1e]        # 0x14250fc10
0x140d4ecf2: mov    rdx,QWORD PTR [rip+0x17c0f0f]        # 0x14250fc08
0x140d4ecf9: sub    rax,rdx
0x140d4ecfc: sar    rax,0x3
0x140d4ed00: cmp    rcx,rax
0x140d4ed03: jae    0x140d4ed16
0x140d4ed05: mov    rdx,QWORD PTR [rdx+rcx*8]
0x140d4ed09: add    rdx,0x38
0x140d4ed0d: lea    rcx,[rbp-0x30]
0x140d4ed11: call   0x1403d06d0
0x140d4ed16: inc    edi
0x140d4ed18: add    rbx,0x4
0x140d4ed1c: mov    rdx,QWORD PTR [rsi]
0x140d4ed1f: mov    rcx,QWORD PTR [rsi+0x8]
0x140d4ed23: sub    rcx,rdx
0x140d4ed26: sar    rcx,0x2
0x140d4ed2a: movsxd rax,edi
0x140d4ed2d: cmp    rax,rcx
0x140d4ed30: jb     0x140d4ece0
0x140d4ed32: mov    rcx,QWORD PTR [rbp-0x20]
0x140d4ed36: mov    rsi,QWORD PTR [rbp-0x28]
0x140d4ed3a: mov    rax,rsi
0x140d4ed3d: mov    rdi,QWORD PTR [rbp-0x30]
0x140d4ed41: sub    rax,rdi
0x140d4ed44: sar    rax,0x2
0x140d4ed48: test   rax,rax
0x140d4ed4b: jne    0x140d4edd0
0x140d4ed51: mov    rbx,QWORD PTR [rip+0x17c0ea0]        # 0x14250fbf8
0x140d4ed58: sub    rbx,QWORD PTR [rip+0x17c0e91]        # 0x14250fbf0
0x140d4ed5f: sar    rbx,0x3
0x140d4ed63: cmp    rbx,rax
0x140d4ed66: jae    0x140d4ed6e
0x140d4ed68: lea    rsi,[rdi+rbx*4]
0x140d4ed6c: jmp    0x140d4edad
0x140d4ed6e: jbe    0x140d4edb1
0x140d4ed70: sub    rcx,rdi
0x140d4ed73: sar    rcx,0x2
0x140d4ed77: cmp    rbx,rcx
0x140d4ed7a: jbe    0x140d4ed92
0x140d4ed7c: mov    rdx,rbx
0x140d4ed7f: lea    rcx,[rbp-0x30]
0x140d4ed83: call   0x140072360
0x140d4ed88: mov    rsi,QWORD PTR [rbp-0x28]
0x140d4ed8c: mov    rdi,QWORD PTR [rbp-0x30]
0x140d4ed90: jmp    0x140d4edb1
0x140d4ed92: sub    rbx,rax
0x140d4ed95: lea    rbx,[rbx*4+0x0]
0x140d4ed9d: mov    r8,rbx
0x140d4eda0: xor    edx,edx
0x140d4eda2: mov    rcx,rsi
0x140d4eda5: call   0x141554566
0x140d4edaa: add    rsi,rbx
0x140d4edad: mov    QWORD PTR [rbp-0x28],rsi
0x140d4edb1: mov    ecx,r14d
0x140d4edb4: sub    rsi,rdi
0x140d4edb7: sar    rsi,0x2
0x140d4edbb: test   rsi,rsi
0x140d4edbe: je     0x140d4edd0
0x140d4edc0: mov    DWORD PTR [rdi],ecx
0x140d4edc2: inc    ecx
0x140d4edc4: lea    rdi,[rdi+0x4]
0x140d4edc8: movsxd rax,ecx
0x140d4edcb: cmp    rax,rsi
0x140d4edce: jb     0x140d4edc0
0x140d4edd0: mov    rsi,QWORD PTR [rbp+0x48]
0x140d4edd4: mov    rdx,QWORD PTR [rsi]
0x140d4edd7: mov    rax,QWORD PTR [rsi+0x8]
0x140d4eddb: sub    rax,rdx
0x140d4edde: sar    rax,0x2
0x140d4ede2: test   rax,rax
0x140d4ede5: je     0x140d4ee5b
0x140d4ede7: mov    rbx,r14
0x140d4edea: nop    WORD PTR [rax+rax*1+0x0]
0x140d4edf0: movsxd rax,DWORD PTR [rbx+rdx*1]
0x140d4edf4: test   eax,eax
0x140d4edf6: js     0x140d4ee3e
0x140d4edf8: mov    rdi,rax
0x140d4edfb: mov    rax,QWORD PTR [rip+0x17c0e0e]        # 0x14250fc10
0x140d4ee02: mov    rdx,QWORD PTR [rip+0x17c0dff]        # 0x14250fc08
0x140d4ee09: sub    rax,rdx
0x140d4ee0c: sar    rax,0x3
0x140d4ee10: cmp    rdi,rax
0x140d4ee13: jae    0x140d4ee3e
0x140d4ee15: mov    rdx,QWORD PTR [rdx+rdi*8]
0x140d4ee19: add    rdx,0x38
0x140d4ee1d: lea    rcx,[rbp-0x18]
0x140d4ee21: call   0x140d539c0
0x140d4ee26: mov    rax,QWORD PTR [rip+0x17c0ddb]        # 0x14250fc08
0x140d4ee2d: mov    rdx,QWORD PTR [rax+rdi*8]
0x140d4ee31: add    rdx,0x38
0x140d4ee35: lea    rcx,[rbp-0x30]
0x140d4ee39: call   0x140d539c0
0x140d4ee3e: inc    r14d
0x140d4ee41: add    rbx,0x4
0x140d4ee45: mov    rdx,QWORD PTR [rsi]
0x140d4ee48: mov    rcx,QWORD PTR [rsi+0x8]
0x140d4ee4c: sub    rcx,rdx
0x140d4ee4f: sar    rcx,0x2
0x140d4ee53: movsxd rax,r14d
0x140d4ee56: cmp    rax,rcx
0x140d4ee59: jb     0x140d4edf0
0x140d4ee5b: lea    rdx,[rbp-0x18]
0x140d4ee5f: mov    rcx,r12
0x140d4ee62: call   0x140d4d220
0x140d4ee67: lea    rdx,[rbp-0x30]
0x140d4ee6b: mov    rcx,r15
0x140d4ee6e: call   0x140d4d220
0x140d4ee73: nop
0x140d4ee74: lea    rcx,[rbp-0x30]
0x140d4ee78: call   0x140070d80
0x140d4ee7d: nop
0x140d4ee7e: lea    rcx,[rbp-0x18]
0x140d4ee82: call   0x140070d80
0x140d4ee87: lea    r11,[rsp+0x50]
0x140d4ee8c: mov    rbx,QWORD PTR [r11+0x20]
0x140d4ee90: mov    rsi,QWORD PTR [r11+0x28]
0x140d4ee94: mov    rdi,QWORD PTR [r11+0x30]
0x140d4ee98: mov    r12,QWORD PTR [r11+0x38]
0x140d4ee9c: mov    rsp,r11
0x140d4ee9f: pop    r15
0x140d4eea1: pop    r14
0x140d4eea3: pop    rbp
0x140d4eea4: ret
