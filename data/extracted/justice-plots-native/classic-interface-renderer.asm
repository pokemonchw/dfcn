# classic; PE:6a70b91c:0270a000; interface renderer caller; RVA 0x393bd0..0x394648; PE disassembly
0x00393bd0: rex push rbp
0x00393bd2: push   rbx
0x00393bd3: push   rsi
0x00393bd4: push   rdi
0x00393bd5: push   r12
0x00393bd7: push   r13
0x00393bd9: push   r14
0x00393bdb: push   r15
0x00393bdd: lea    rbp,[rsp-0x1f]
0x00393be2: sub    rsp,0x98
0x00393be9: mov    rax,QWORD PTR [rip+0x1502450]        # 0x141896040
0x00393bf0: xor    rax,rsp
0x00393bf3: mov    QWORD PTR [rbp+0x7],rax
0x00393bf7: mov    DWORD PTR [rbp-0x45],r9d
0x00393bfb: mov    r12d,r8d
0x00393bfe: mov    DWORD PTR [rbp-0x29],r8d
0x00393c02: mov    r15d,edx
0x00393c05: mov    DWORD PTR [rbp-0x39],edx
0x00393c08: mov    r8,rcx
0x00393c0b: mov    QWORD PTR [rbp-0x21],rcx
0x00393c0f: lea    r13d,[r12+0x4]
0x00393c14: mov    DWORD PTR [rbp-0x35],r13d
0x00393c18: lea    edi,[r9-0x1c]
0x00393c1c: mov    r14d,DWORD PTR [rip+0x2033a55]        # 0x1423c7678
0x00393c23: add    r14d,0xfffffffc
0x00393c27: mov    DWORD PTR [rip+0x22b073b],0x1010007        # 0x14264436c
0x00393c31: mov    esi,0x4
0x00393c36: cmp    r14d,esi
0x00393c39: jl     0x140393d0d
0x00393c3f: lea    r15,[rip+0x22b069a]        # 0x1426442e0
0x00393c46: data16 nop WORD PTR [rax+rax*1+0x0]
0x00393c50: mov    ebx,r13d
0x00393c53: cmp    r13d,edi
0x00393c56: jg     0x140393cfa
0x00393c5c: nop    DWORD PTR [rax+0x0]
0x00393c60: mov    DWORD PTR [rip+0x22b06fe],ebx        # 0x142644364
0x00393c66: mov    DWORD PTR [rip+0x22b06fc],esi        # 0x142644368
0x00393c6c: xor    r8d,r8d
0x00393c6f: xor    edx,edx
0x00393c71: mov    rcx,r15
0x00393c74: call   0x1400bb120
0x00393c79: cmp    esi,0x4
0x00393c7c: jne    0x140393ca2
0x00393c7e: cmp    ebx,r13d
0x00393c81: jne    0x140393c8b
0x00393c83: mov    edx,DWORD PTR [rip+0x22b1f7b]        # 0x142645c04
0x00393c89: jmp    0x140393ce8
0x00393c8b: mov    rcx,r15
0x00393c8e: cmp    ebx,edi
0x00393c90: jne    0x140393c9a
0x00393c92: mov    edx,DWORD PTR [rip+0x22b1f84]        # 0x142645c1c
0x00393c98: jmp    0x140393ceb
0x00393c9a: mov    edx,DWORD PTR [rip+0x22b1f70]        # 0x142645c10
0x00393ca0: jmp    0x140393ceb
0x00393ca2: cmp    esi,r14d
0x00393ca5: jne    0x140393ccb
0x00393ca7: cmp    ebx,r13d
0x00393caa: jne    0x140393cb4
0x00393cac: mov    edx,DWORD PTR [rip+0x22b1f5a]        # 0x142645c0c
0x00393cb2: jmp    0x140393ce8
0x00393cb4: mov    rcx,r15
0x00393cb7: cmp    ebx,edi
0x00393cb9: jne    0x140393cc3
0x00393cbb: mov    edx,DWORD PTR [rip+0x22b1f63]        # 0x142645c24
0x00393cc1: jmp    0x140393ceb
0x00393cc3: mov    edx,DWORD PTR [rip+0x22b1f4f]        # 0x142645c18
0x00393cc9: jmp    0x140393ceb
0x00393ccb: cmp    ebx,r13d
0x00393cce: jne    0x140393cd8
0x00393cd0: mov    edx,DWORD PTR [rip+0x22b1f32]        # 0x142645c08
0x00393cd6: jmp    0x140393ce8
0x00393cd8: cmp    ebx,edi
0x00393cda: mov    edx,DWORD PTR [rip+0x22b1f40]        # 0x142645c20
0x00393ce0: je     0x140393ce8
0x00393ce2: mov    edx,DWORD PTR [rip+0x22b1f2c]        # 0x142645c14
0x00393ce8: mov    rcx,r15
0x00393ceb: call   0x140ad7b10
0x00393cf0: inc    ebx
0x00393cf2: cmp    ebx,edi
0x00393cf4: jle    0x140393c60
0x00393cfa: inc    esi
0x00393cfc: cmp    esi,r14d
0x00393cff: jle    0x140393c50
0x00393d05: mov    r8,QWORD PTR [rbp-0x21]
0x00393d09: mov    r15d,DWORD PTR [rbp-0x39]
0x00393d0d: lea    r9,[rip+0xffffffffffc6c2ec]        # 0x140000000
0x00393d14: mov    r10d,0x5
0x00393d1a: mov    r11d,0x8
0x00393d20: cmp    DWORD PTR [rip+0x150256d],0x4        # 0x141896294
0x00393d27: je     0x140394403
0x00393d2d: xor    r12d,r12d
0x00393d30: lea    ecx,[r13+0x79]
0x00393d34: mov    DWORD PTR [rbp-0x31],ecx
0x00393d37: lea    edx,[rdi-0x1]
0x00393d3a: mov    DWORD PTR [rbp-0x2d],edx
0x00393d3d: mov    r15d,DWORD PTR [rbp-0x41]
0x00393d41: mov    esi,DWORD PTR [rbp-0x41]
0x00393d44: mov    ebx,0x6
0x00393d49: cmp    DWORD PTR [rip+0x2033918],0x0        # 0x1423c7668
0x00393d50: jle    0x140393d92
0x00393d52: mov    rax,QWORD PTR [rip+0x2033907]        # 0x1423c7660
0x00393d59: test   BYTE PTR [rax],0x1
0x00393d5c: je     0x140393d92
0x00393d5e: lea    r14,[r8+0x1bc]
0x00393d65: cmp    r12d,DWORD PTR [r14]
0x00393d68: mov    WORD PTR [rip+0x22b0603],0x0        # 0x142644374
0x00393d71: mov    BYTE PTR [rip+0x22b05f7],0x0        # 0x14264436f
0x00393d78: jne    0x140393d86
0x00393d7a: mov    DWORD PTR [rip+0x22b05ec],0x2c46        # 0x142644370
0x00393d84: jmp    0x140393db2
0x00393d86: mov    DWORD PTR [rip+0x22b05e0],0xffffff        # 0x142644370
0x00393d90: jmp    0x140393db2
0x00393d92: lea    r14,[r8+0x1bc]
0x00393d99: cmp    r12d,DWORD PTR [r14]
0x00393d9c: mov    DWORD PTR [rip+0x22b05c6],0x1010007        # 0x14264436c
0x00393da6: je     0x140393db2
0x00393da8: mov    DWORD PTR [rip+0x22b05ba],0x1000007        # 0x14264436c
0x00393db2: cmp    ecx,edx
0x00393db4: jg     0x140393ea4
0x00393dba: cmp    r12d,0x7
0x00393dbe: ja     0x140393e92
0x00393dc4: movsxd rax,r12d
0x00393dc7: mov    ecx,DWORD PTR [r9+rax*4+0x3945c8]
0x00393dcf: add    rcx,r9
0x00393dd2: jmp    rcx
0x00393dd4: lea    r15d,[r13+0x1]
0x00393dd8: lea    esi,[r13+0xd]
0x00393ddc: mov    DWORD PTR [rbp-0x49],r10d
0x00393de0: mov    rax,r10
0x00393de3: mov    r13,rbx
0x00393de6: mov    edi,r10d
0x00393de9: jmp    0x140393f61
0x00393dee: lea    r15d,[r13+0xe]
0x00393df2: lea    esi,[r13+0x16]
0x00393df6: mov    DWORD PTR [rbp-0x49],r10d
0x00393dfa: mov    rax,r10
0x00393dfd: mov    r13,rbx
0x00393e00: mov    edi,r10d
0x00393e03: jmp    0x140393f61
0x00393e08: lea    r15d,[r13+0x17]
0x00393e0c: lea    esi,[r13+0x20]
0x00393e10: mov    DWORD PTR [rbp-0x49],r10d
0x00393e14: mov    rax,r10
0x00393e17: mov    r13,rbx
0x00393e1a: mov    edi,r10d
0x00393e1d: jmp    0x140393f61
0x00393e22: lea    r15d,[r13+0x21]
0x00393e26: lea    esi,[r13+0x29]
0x00393e2a: mov    DWORD PTR [rbp-0x49],r10d
0x00393e2e: mov    rax,r10
0x00393e31: mov    r13,rbx
0x00393e34: mov    edi,r10d
0x00393e37: jmp    0x140393f61
0x00393e3c: lea    r15d,[r13+0x2a]
0x00393e40: lea    esi,[r13+0x38]
0x00393e44: mov    DWORD PTR [rbp-0x49],r10d
0x00393e48: mov    rax,r10
0x00393e4b: mov    r13,rbx
0x00393e4e: mov    edi,r10d
0x00393e51: jmp    0x140393f61
0x00393e56: lea    r15d,[r13+0x39]
0x00393e5a: lea    esi,[r13+0x55]
0x00393e5e: mov    DWORD PTR [rbp-0x49],r10d
0x00393e62: mov    rax,r10
0x00393e65: mov    r13,rbx
0x00393e68: mov    edi,r10d
0x00393e6b: jmp    0x140393f61
0x00393e70: lea    r15d,[r13+0x56]
0x00393e74: lea    esi,[r13+0x60]
0x00393e78: mov    DWORD PTR [rbp-0x49],r10d
0x00393e7c: mov    rax,r10
0x00393e7f: mov    r13,rbx
0x00393e82: mov    edi,r10d
0x00393e85: jmp    0x140393f61
0x00393e8a: lea    r15d,[r13+0x61]
0x00393e8e: lea    esi,[r13+0x6b]
0x00393e92: mov    DWORD PTR [rbp-0x49],r10d
0x00393e96: mov    rax,r10
0x00393e99: mov    r13,rbx
0x00393e9c: mov    edi,r10d
0x00393e9f: jmp    0x140393f61
0x00393ea4: cmp    r12d,0x7
0x00393ea8: ja     0x140393f08
0x00393eaa: movsxd rax,r12d
0x00393ead: mov    ecx,DWORD PTR [r9+rax*4+0x3945e8]
0x00393eb5: add    rcx,r9
0x00393eb8: jmp    rcx
0x00393eba: lea    r15d,[r13+0x1]
0x00393ebe: lea    esi,[r13+0xd]
0x00393ec2: jmp    0x140393f08
0x00393ec4: lea    r15d,[r13+0xe]
0x00393ec8: lea    esi,[r13+0x16]
0x00393ecc: jmp    0x140393f08
0x00393ece: lea    r15d,[r13+0x17]
0x00393ed2: lea    esi,[r13+0x20]
0x00393ed6: jmp    0x140393f08
0x00393ed8: lea    r15d,[r13+0x21]
0x00393edc: lea    esi,[r13+0x29]
0x00393ee0: jmp    0x140393f08
0x00393ee2: lea    r15d,[r13+0x2a]
0x00393ee6: lea    esi,[r13+0x38]
0x00393eea: jmp    0x140393f08
0x00393eec: lea    r15d,[r13+0x1]
0x00393ef0: lea    esi,[r13+0x1d]
0x00393ef4: jmp    0x140393f08
0x00393ef6: lea    r15d,[r13+0x1e]
0x00393efa: lea    esi,[r13+0x28]
0x00393efe: jmp    0x140393f08
0x00393f00: lea    r15d,[r13+0x29]
0x00393f04: lea    esi,[r13+0x33]
0x00393f08: cmp    DWORD PTR [r14],0x5
0x00393f0c: jge    0x140393f3b
0x00393f0e: mov    ecx,0x7
0x00393f13: cmp    r12d,0x5
0x00393f17: cmovge ecx,r10d
0x00393f1b: mov    DWORD PTR [rbp-0x49],ecx
0x00393f1e: mov    eax,0x7
0x00393f23: cmovge rax,r10
0x00393f27: mov    r13,r11
0x00393f2a: cmovge r13,rbx
0x00393f2e: mov    edi,ecx
0x00393f30: cmp    rax,r13
0x00393f33: ja     0x140394075
0x00393f39: jmp    0x140393f61
0x00393f3b: cmp    r12d,0x5
0x00393f3f: jge    0x140393f50
0x00393f41: mov    DWORD PTR [rbp-0x49],r10d
0x00393f45: mov    rax,r10
0x00393f48: mov    r13,rbx
0x00393f4b: mov    edi,r10d
0x00393f4e: jmp    0x140393f61
0x00393f50: mov    DWORD PTR [rbp-0x49],0x7
0x00393f57: mov    eax,0x7
0x00393f5c: mov    r13,r11
0x00393f5f: mov    edi,eax
0x00393f61: xor    ebx,ebx
0x00393f63: sub    r13,rax
0x00393f66: inc    r13
0x00393f69: mov    QWORD PTR [rbp-0x41],r13
0x00393f6d: nop    DWORD PTR [rax]
0x00393f70: mov    r11d,r15d
0x00393f73: cmp    r15d,esi
0x00393f76: jg     0x14039404b
0x00393f7c: lea    r13,[rip+0x22b035d]        # 0x1426442e0
0x00393f83: nop    DWORD PTR [rax+0x0]
0x00393f87: nop    WORD PTR [rax+rax*1+0x0]
0x00393f90: mov    DWORD PTR [rip+0x22b03cd],r11d        # 0x142644364
0x00393f97: mov    DWORD PTR [rip+0x22b03cb],edi        # 0x142644368
0x00393f9d: cmp    r12d,DWORD PTR [r14]
0x00393fa0: jne    0x140393fea
0x00393fa2: cmp    r11d,r15d
0x00393fa5: jne    0x140393fb0
0x00393fa7: lea    rdx,[r13+0x1f8c]
0x00393fae: jmp    0x14039402e
0x00393fb0: lea    eax,[r15+0x1]
0x00393fb4: cmp    r11d,eax
0x00393fb7: jne    0x140393fc2
0x00393fb9: lea    rdx,[r13+0x1f94]
0x00393fc0: jmp    0x14039402e
0x00393fc2: cmp    r11d,esi
0x00393fc5: jne    0x140393fd0
0x00393fc7: lea    rdx,[r13+0x1fac]
0x00393fce: jmp    0x14039402e
0x00393fd0: lea    eax,[rsi-0x1]
0x00393fd3: cmp    r11d,eax
0x00393fd6: jne    0x140393fe1
0x00393fd8: lea    rdx,[r13+0x1fa4]
0x00393fdf: jmp    0x14039402e
0x00393fe1: lea    rdx,[r13+0x1f9c]
0x00393fe8: jmp    0x14039402e
0x00393fea: cmp    r11d,r15d
0x00393fed: jne    0x140393ff8
0x00393fef: lea    rdx,[r13+0x1f64]
0x00393ff6: jmp    0x14039402e
0x00393ff8: lea    eax,[r15+0x1]
0x00393ffc: cmp    r11d,eax
0x00393fff: jne    0x14039400a
0x00394001: lea    rdx,[r13+0x1f6c]
0x00394008: jmp    0x14039402e
0x0039400a: cmp    r11d,esi
0x0039400d: jne    0x140394018
0x0039400f: lea    rdx,[r13+0x1f84]
0x00394016: jmp    0x14039402e
0x00394018: lea    eax,[rsi-0x1]
0x0039401b: cmp    r11d,eax
0x0039401e: lea    rdx,[r13+0x1f7c]
0x00394025: je     0x14039402e
0x00394027: lea    rdx,[r13+0x1f74]
0x0039402e: add    rdx,rbx
0x00394031: mov    edx,DWORD PTR [rdx]
0x00394033: mov    rcx,r13
0x00394036: call   0x140ad7b10
0x0039403b: inc    r11d
0x0039403e: cmp    r11d,esi
0x00394041: jle    0x140393f90
0x00394047: mov    r13,QWORD PTR [rbp-0x41]
0x0039404b: inc    edi
0x0039404d: add    rbx,0x4
0x00394051: sub    r13,0x1
0x00394055: mov    QWORD PTR [rbp-0x41],r13
0x00394059: jne    0x140393f70
0x0039405f: mov    ecx,DWORD PTR [rbp-0x49]
0x00394062: lea    r9,[rip+0xffffffffffc6bf97]        # 0x140000000
0x00394069: mov    r10d,0x5
0x0039406f: mov    r11d,0x8
0x00394075: xor    ebx,ebx
0x00394077: lea    r14d,[r15+0x2]
0x0039407b: nop    DWORD PTR [rax+rax*1+0x0]
0x00394080: mov    DWORD PTR [rip+0x22b02dd],r14d        # 0x142644364
0x00394087: lea    eax,[rbx+rcx*1]
0x0039408a: mov    DWORD PTR [rip+0x22b02d8],eax        # 0x142644368
0x00394090: mov    edi,0x10
0x00394095: cmp    ebx,0x1
0x00394098: cmovne edi,r11d
0x0039409c: cmp    DWORD PTR [rip+0x20335c5],0x0        # 0x1423c7668
0x003940a3: jle    0x1403940b1
0x003940a5: mov    rax,QWORD PTR [rip+0x20335b4]        # 0x1423c7660
0x003940ac: test   BYTE PTR [rax],0x1
0x003940af: jne    0x1403940bb
0x003940b1: test   ebx,ebx
0x003940b3: je     0x1403943b9
0x003940b9: xor    edi,edi
0x003940bb: cmp    r12d,0x7
0x003940bf: ja     0x1403943b9
0x003940c5: movsxd rax,r12d
0x003940c8: mov    ecx,DWORD PTR [r9+rax*4+0x394608]
0x003940d0: add    rcx,r9
0x003940d3: jmp    rcx
0x003940d5: xorps  xmm0,xmm0
0x003940d8: movups XMMWORD PTR [rbp-0x19],xmm0
0x003940dc: mov    QWORD PTR [rbp-0x9],0x9
0x003940e4: mov    QWORD PTR [rbp-0x1],0xf
0x003940ec: movsd  xmm0,QWORD PTR [rip+0x1292d9c]        # 0x141626e90 ; literal='Creatures'
0x003940f4: movsd  QWORD PTR [rbp-0x19],xmm0
0x003940f9: movzx  eax,BYTE PTR [rip+0x1292d98]        # 0x141626e98 ; literal='s'
0x00394100: mov    BYTE PTR [rbp-0x11],al
0x00394103: mov    BYTE PTR [rbp-0x10],0x0
0x00394107: mov    DWORD PTR [rsp+0x20],edi
0x0039410b: xor    r9d,r9d
0x0039410e: lea    rdx,[rbp-0x19]
0x00394112: lea    rcx,[rip+0x22b01c7]        # 0x1426442e0
0x00394119: call   0x140ad68b0
0x0039411e: nop
0x0039411f: jmp    0x1403943a7
0x00394124: xorps  xmm0,xmm0
0x00394127: movups XMMWORD PTR [rbp-0x19],xmm0
0x0039412b: mov    QWORD PTR [rbp-0x9],r10
0x0039412f: mov    QWORD PTR [rbp-0x1],0xf
0x00394137: mov    eax,DWORD PTR [rip+0x12681bb]        # 0x1415fc2f8 ; literal='Tasks'
0x0039413d: mov    DWORD PTR [rbp-0x19],eax
0x00394140: movzx  eax,BYTE PTR [rip+0x12681b5]        # 0x1415fc2fc ; literal='s'
0x00394147: mov    BYTE PTR [rbp-0x15],al
0x0039414a: mov    BYTE PTR [rbp-0x14],0x0
0x0039414e: mov    DWORD PTR [rsp+0x20],edi
0x00394152: xor    r9d,r9d
0x00394155: lea    rdx,[rbp-0x19]
0x00394159: lea    rcx,[rip+0x22b0180]        # 0x1426442e0
0x00394160: call   0x140ad68b0
0x00394165: nop
0x00394166: jmp    0x1403943a7
0x0039416b: xorps  xmm0,xmm0
0x0039416e: movups XMMWORD PTR [rbp-0x19],xmm0
0x00394172: mov    QWORD PTR [rbp-0x9],0x6
0x0039417a: mov    QWORD PTR [rbp-0x1],0xf
0x00394182: mov    eax,DWORD PTR [rip+0x1292b68]        # 0x141626cf0 ; literal='Places'
0x00394188: mov    DWORD PTR [rbp-0x19],eax
0x0039418b: movzx  eax,WORD PTR [rip+0x1292b62]        # 0x141626cf4 ; literal='es'
0x00394192: mov    WORD PTR [rbp-0x15],ax
0x00394196: mov    BYTE PTR [rbp-0x13],0x0
0x0039419a: mov    DWORD PTR [rsp+0x20],edi
0x0039419e: xor    r9d,r9d
0x003941a1: lea    rdx,[rbp-0x19]
0x003941a5: lea    rcx,[rip+0x22b0134]        # 0x1426442e0
0x003941ac: call   0x140ad68b0
0x003941b1: nop
0x003941b2: jmp    0x1403943a7
0x003941b7: xorps  xmm0,xmm0
0x003941ba: movups XMMWORD PTR [rbp-0x19],xmm0
0x003941be: mov    QWORD PTR [rbp-0x9],r10
0x003941c2: mov    QWORD PTR [rbp-0x1],0xf
0x003941ca: mov    eax,DWORD PTR [rip+0x125df10]        # 0x1415f20e0 ; literal='Labor'
0x003941d0: mov    DWORD PTR [rbp-0x19],eax
0x003941d3: movzx  eax,BYTE PTR [rip+0x125df0a]        # 0x1415f20e4 ; literal='r'
0x003941da: mov    BYTE PTR [rbp-0x15],al
0x003941dd: mov    BYTE PTR [rbp-0x14],0x0
0x003941e1: mov    DWORD PTR [rsp+0x20],edi
0x003941e5: xor    r9d,r9d
0x003941e8: lea    rdx,[rbp-0x19]
0x003941ec: lea    rcx,[rip+0x22b00ed]        # 0x1426442e0
0x003941f3: call   0x140ad68b0
0x003941f8: nop
0x003941f9: jmp    0x1403943a7
0x003941fe: xorps  xmm0,xmm0
0x00394201: movups XMMWORD PTR [rbp-0x19],xmm0
0x00394205: mov    QWORD PTR [rbp-0x9],0xb
0x0039420d: mov    QWORD PTR [rbp-0x1],0xf
0x00394215: movsd  xmm0,QWORD PTR [rip+0x12680c3]        # 0x1415fc2e0 ; literal='Work orders'
0x0039421d: movsd  QWORD PTR [rbp-0x19],xmm0
0x00394222: movzx  eax,WORD PTR [rip+0x12680bf]        # 0x1415fc2e8 ; literal='ers'
0x00394229: mov    WORD PTR [rbp-0x11],ax
0x0039422d: movzx  eax,BYTE PTR [rip+0x12680b6]        # 0x1415fc2ea ; literal='s'
0x00394234: mov    BYTE PTR [rbp-0xf],al
0x00394237: mov    BYTE PTR [rbp-0xe],0x0
0x0039423b: mov    DWORD PTR [rsp+0x20],edi
0x0039423f: xor    r9d,r9d
0x00394242: lea    rdx,[rbp-0x19]
0x00394246: lea    rcx,[rip+0x22b0093]        # 0x1426442e0
0x0039424d: call   0x140ad68b0
0x00394252: nop
0x00394253: mov    rdx,QWORD PTR [rbp-0x1]
0x00394257: cmp    rdx,0xf
0x0039425b: jbe    0x1403943b0
0x00394261: inc    rdx
0x00394264: mov    rcx,QWORD PTR [rbp-0x19]
0x00394268: cmp    rdx,0x1000
0x0039426f: mov    rax,rcx
0x00394272: jb     0x14039428d
0x00394274: add    rdx,0x27
0x00394278: mov    rcx,QWORD PTR [rcx-0x8]
0x0039427c: sub    rax,rcx
0x0039427f: add    rax,0xfffffffffffffff8
0x00394283: cmp    rax,0x1f
0x00394287: ja     0x1403943f4
0x0039428d: call   0x1415345f0
0x00394292: jmp    0x1403943b0
0x00394297: xorps  xmm0,xmm0
0x0039429a: movups XMMWORD PTR [rbp-0x19],xmm0
0x0039429e: mov    ecx,0x20
0x003942a3: call   0x140070760
0x003942a8: mov    QWORD PTR [rbp-0x19],rax
0x003942ac: mov    QWORD PTR [rbp-0x9],0x19
0x003942b4: mov    QWORD PTR [rbp-0x1],0x1f
0x003942bc: movups xmm0,XMMWORD PTR [rip+0x1272585]        # 0x141606848 ; literal='Nobles and administrators'
0x003942c3: movups XMMWORD PTR [rax],xmm0
0x003942c6: movsd  xmm0,QWORD PTR [rip+0x127258a]        # 0x141606858 ; literal='istrators'
0x003942ce: movsd  QWORD PTR [rax+0x10],xmm0
0x003942d3: movzx  ecx,BYTE PTR [rip+0x1272586]        # 0x141606860 ; literal='s'
0x003942da: mov    BYTE PTR [rax+0x18],cl
0x003942dd: mov    BYTE PTR [rax+0x19],0x0
0x003942e1: mov    DWORD PTR [rsp+0x20],edi
0x003942e5: xor    r9d,r9d
0x003942e8: lea    rdx,[rbp-0x19]
0x003942ec: lea    rcx,[rip+0x22affed]        # 0x1426442e0
0x003942f3: call   0x140ad68b0
0x003942f8: nop
0x003942f9: jmp    0x140394253
0x003942fe: xorps  xmm0,xmm0
0x00394301: movups XMMWORD PTR [rbp-0x19],xmm0
0x00394305: mov    QWORD PTR [rbp-0x9],0x7
0x0039430d: mov    QWORD PTR [rbp-0x1],0xf
0x00394315: mov    rax,QWORD PTR [rip+0x12929cc]        # 0x141626ce8 ; literal='Objects'
0x0039431c: mov    DWORD PTR [rbp-0x19],eax
0x0039431f: movzx  eax,WORD PTR [rip+0x12929c6]        # 0x141626cec ; literal='cts'
0x00394326: mov    WORD PTR [rbp-0x15],ax
0x0039432a: movzx  eax,BYTE PTR [rip+0x12929bd]        # 0x141626cee ; literal='s'
0x00394331: mov    BYTE PTR [rbp-0x13],al
0x00394334: mov    BYTE PTR [rbp-0x12],0x0
0x00394338: mov    DWORD PTR [rsp+0x20],edi
0x0039433c: xor    r9d,r9d
0x0039433f: lea    rdx,[rbp-0x19]
0x00394343: lea    rcx,[rip+0x22aff96]        # 0x1426442e0
0x0039434a: call   0x140ad68b0
0x0039434f: nop
0x00394350: jmp    0x140394253
0x00394355: xorps  xmm0,xmm0
0x00394358: movups XMMWORD PTR [rbp-0x19],xmm0
0x0039435c: mov    QWORD PTR [rbp-0x9],0x7
0x00394364: mov    QWORD PTR [rbp-0x1],0xf
0x0039436c: mov    rax,QWORD PTR [rip+0x1271995]        # 0x141605d08 ; literal='Justice'
0x00394373: mov    DWORD PTR [rbp-0x19],eax
0x00394376: movzx  eax,WORD PTR [rip+0x127198f]        # 0x141605d0c ; literal='ice'
0x0039437d: mov    WORD PTR [rbp-0x15],ax
0x00394381: movzx  eax,BYTE PTR [rip+0x1271986]        # 0x141605d0e ; literal='e'
0x00394388: mov    BYTE PTR [rbp-0x13],al
0x0039438b: mov    BYTE PTR [rbp-0x12],0x0
0x0039438f: mov    DWORD PTR [rsp+0x20],edi
0x00394393: xor    r9d,r9d
0x00394396: lea    rdx,[rbp-0x19]
0x0039439a: lea    rcx,[rip+0x22aff3f]        # 0x1426442e0
0x003943a1: call   0x140ad68b0
0x003943a6: nop
0x003943a7: lea    rcx,[rbp-0x19]
0x003943ab: call   0x14006f7e0
0x003943b0: mov    r11d,0x8
0x003943b6: mov    ecx,DWORD PTR [rbp-0x49]
0x003943b9: inc    ebx
0x003943bb: cmp    ebx,0x2
0x003943be: lea    r9,[rip+0xffffffffffc6bc3b]        # 0x140000000
0x003943c5: mov    r10d,0x5
0x003943cb: jl     0x140394080
0x003943d1: inc    r12d
0x003943d4: lea    r9,[rip+0xffffffffffc6bc25]        # 0x140000000
0x003943db: cmp    r12d,0x8
0x003943df: jge    0x1403943fb
0x003943e1: mov    r13d,DWORD PTR [rbp-0x35]
0x003943e5: mov    ecx,DWORD PTR [rbp-0x31]
0x003943e8: mov    edx,DWORD PTR [rbp-0x2d]
0x003943eb: mov    r8,QWORD PTR [rbp-0x21]
0x003943ef: jmp    0x140393d44
0x003943f4: call   QWORD PTR [rip+0x124c6a6]        # 0x1415e0aa0
0x003943fa: int3
0x003943fb: mov    r15d,DWORD PTR [rbp-0x39]
0x003943ff: mov    r12d,DWORD PTR [rbp-0x29]
0x00394403: mov    rdx,QWORD PTR [rbp-0x21]
0x00394407: movsxd rax,DWORD PTR [rdx+0x1bc]
0x0039440e: cmp    eax,0x7
0x00394411: ja     0x1403945a6
0x00394417: mov    ecx,DWORD PTR [r9+rax*4+0x394628]
0x0039441f: add    rcx,r9
0x00394422: jmp    rcx
0x00394424: lea    rsi,[rdx+0x1c0]
0x0039442b: mov    dl,0xd
0x0039442d: mov    rcx,rsi
0x00394430: call   0x14140b2f0
0x00394435: mov    DWORD PTR [rsi+0xb0],r11d
0x0039443c: mov    DWORD PTR [rsi+0xa8],r10d
0x00394443: mov    DWORD PTR [rsi+0xac],0xffffffe0
0x0039444d: mov    DWORD PTR [rsi+0xa4],0xfffffffc
0x00394457: call   0x14140b110
0x0039445c: mov    ecx,DWORD PTR [rsi+0x18]
0x0039445f: sub    ecx,DWORD PTR [rsi+0x10]
0x00394462: inc    ecx
0x00394464: mov    eax,DWORD PTR [rsi+0xc4]
0x0039446a: cmp    ecx,eax
0x0039446c: cmovle ecx,eax
0x0039446f: cmp    ecx,0x76
0x00394472: jl     0x14039447b
0x00394474: add    DWORD PTR [rsi+0xb0],0xfffffffe
0x0039447b: mov    rcx,rsi
0x0039447e: call   0x14140b110
0x00394483: mov    rbx,QWORD PTR [rsi+0x160]
0x0039448a: mov    rdi,QWORD PTR [rsi+0x168]
0x00394491: cmp    rbx,rdi
0x00394494: je     0x1403944a8
0x00394496: mov    rcx,QWORD PTR [rbx]
0x00394499: mov    rax,QWORD PTR [rcx]
0x0039449c: call   QWORD PTR [rax+0x20]
0x0039449f: add    rbx,0x10
0x003944a3: cmp    rbx,rdi
0x003944a6: jne    0x140394496
0x003944a8: mov    edx,r15d
0x003944ab: mov    rcx,rsi
0x003944ae: call   0x14140df20
0x003944b3: mov    rbx,QWORD PTR [rsi+0x160]
0x003944ba: mov    rdi,QWORD PTR [rsi+0x168]
0x003944c1: cmp    rbx,rdi
0x003944c4: je     0x1403945a6
0x003944ca: nop    WORD PTR [rax+rax*1+0x0]
0x003944d0: mov    rcx,QWORD PTR [rbx]
0x003944d3: movzx  eax,BYTE PTR [rcx+0xa0]
0x003944da: and    al,0x3
0x003944dc: cmp    al,0x3
0x003944de: jne    0x1403944e9
0x003944e0: mov    rax,QWORD PTR [rcx]
0x003944e3: mov    edx,r15d
0x003944e6: call   QWORD PTR [rax+0x18]
0x003944e9: add    rbx,0x10
0x003944ed: cmp    rbx,rdi
0x003944f0: jne    0x1403944d0
0x003944f2: jmp    0x1403945a6
0x003944f7: lea    rcx,[rdx+0x380]
0x003944fe: mov    r9d,DWORD PTR [rbp-0x45]
0x00394502: mov    r8d,r12d
0x00394505: mov    edx,r15d
0x00394508: call   0x140395850
0x0039450d: jmp    0x1403945a6
0x00394512: lea    rcx,[rdx+0x3a0]
0x00394519: mov    r9d,DWORD PTR [rbp-0x45]
0x0039451d: mov    r8d,r12d
0x00394520: mov    edx,r15d
0x00394523: call   0x1403987e0
0x00394528: jmp    0x1403945a6
0x0039452a: lea    rbx,[rdx+0x458]
0x00394531: mov    rax,QWORD PTR [rbx]
0x00394534: mov    rcx,rbx
0x00394537: call   QWORD PTR [rax+0x20]
0x0039453a: mov    rax,QWORD PTR [rbx]
0x0039453d: mov    edx,r15d
0x00394540: mov    rcx,rbx
0x00394543: call   QWORD PTR [rax+0x18]
0x00394546: jmp    0x1403945a6
0x00394548: lea    rcx,[rdx+0x610]
0x0039454f: mov    r9d,DWORD PTR [rbp-0x45]
0x00394553: mov    r8d,r12d
0x00394556: mov    edx,r15d
0x00394559: call   0x140390ac0
0x0039455e: jmp    0x1403945a6
0x00394560: lea    rcx,[rdx+0x860]
0x00394567: mov    r9d,DWORD PTR [rbp-0x45]
0x0039456b: mov    r8d,r12d
0x0039456e: mov    edx,r15d
0x00394571: call   0x140423390
0x00394576: jmp    0x1403945a6
0x00394578: lea    rcx,[rdx+0x990]
0x0039457f: mov    r9d,DWORD PTR [rbp-0x45]
0x00394583: mov    r8d,r12d
0x00394586: mov    edx,r15d
0x00394589: call   0x14039d6b0
0x0039458e: jmp    0x1403945a6
0x00394590: lea    rcx,[rdx+0xa10]
0x00394597: mov    r9d,DWORD PTR [rbp-0x45]
0x0039459b: mov    r8d,r12d
0x0039459e: mov    edx,r15d
0x003945a1: call   0x140474590
0x003945a6: mov    rcx,QWORD PTR [rbp+0x7]
0x003945aa: xor    rcx,rsp
0x003945ad: call   0x1415345d0
0x003945b2: add    rsp,0x98
0x003945b9: pop    r15
0x003945bb: pop    r14
0x003945bd: pop    r13
0x003945bf: pop    r12
0x003945c1: pop    rdi
0x003945c2: pop    rsi
0x003945c3: pop    rbx
0x003945c4: pop    rbp
0x003945c5: ret
0x003945c6: xchg   ax,ax
0x003945c8: (bad)
0x003945c9: cmp    eax,0x3dee0039
0x003945ce: cmp    DWORD PTR [rax],eax
0x003945d0: or     BYTE PTR [rsi],bh
0x003945d2: cmp    DWORD PTR [rax],eax
0x003945d4: and    bh,BYTE PTR [rsi]
0x003945d6: cmp    DWORD PTR [rax],eax
0x003945d8: cmp    al,0x3e
0x003945da: cmp    DWORD PTR [rax],eax
0x003945dc: push   rsi
0x003945dd: ds cmp DWORD PTR [rax],eax
0x003945e0: jo     0x140394620
0x003945e2: cmp    DWORD PTR [rax],eax
0x003945e4: mov    bh,BYTE PTR [rsi]
0x003945e6: cmp    DWORD PTR [rax],eax
0x003945e8: mov    edx,0xc400393e
0x003945ed: ds cmp DWORD PTR [rax],eax
0x003945f0: (bad)
0x003945f1: ds cmp DWORD PTR [rax],eax
0x003945f4: fdivr  DWORD PTR [rsi]
0x003945f6: cmp    DWORD PTR [rax],eax
0x003945f8: loop   0x140394638
0x003945fa: cmp    DWORD PTR [rax],eax
0x003945fc: in     al,dx
0x003945fd: ds cmp DWORD PTR [rax],eax
0x00394600: idiv   BYTE PTR [rsi]
0x00394602: cmp    DWORD PTR [rax],eax
0x00394604: add    BYTE PTR [rdi],bh
0x00394606: cmp    DWORD PTR [rax],eax
0x00394608: cmp    DWORD PTR [rax],r16d
0x0039460c: and    al,0x41
0x0039460e: cmp    DWORD PTR [rax],eax
0x00394610: imul   eax,DWORD PTR [rcx+0x39],0x0
0x00394614: mov    bh,0x41
0x00394616: cmp    DWORD PTR [rax],eax
0x00394618: inc    BYTE PTR [rcx+0x39]
0x0039461b: add    BYTE PTR [rdi-0x1ffc6be],dl
0x00394621: rex.X cmp DWORD PTR [rax],eax
0x00394624: push   rbp
0x00394625: rex.XB cmp DWORD PTR [r8],eax
0x00394628: and    al,0x44
0x0039462a: cmp    DWORD PTR [rax],eax
0x0039462c: test   DWORD PTR [rcx+rdi*1+0x0],0x394512
0x00394634: sub    al,BYTE PTR [rbp+0x39]
0x00394637: add    BYTE PTR [rax+0x45],cl
0x0039463a: cmp    DWORD PTR [rax],eax
0x0039463c: (bad)
0x0039463d: cmp    DWORD PTR [r8],r8d
0x00394640: js     0x140394687
0x00394642: cmp    DWORD PTR [rax],eax
0x00394644: nop
0x00394645: cmp    DWORD PTR [r8],r8d
