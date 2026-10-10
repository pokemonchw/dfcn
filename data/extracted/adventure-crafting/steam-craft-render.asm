# steam PE:6a70a6d9:02711000; craft-render; RVA 0x27bd70..0x27d2ab
0x0027bd70: rex push rbp
0x0027bd72: push   rbx
0x0027bd73: push   rsi
0x0027bd74: push   rdi
0x0027bd75: push   r12
0x0027bd77: push   r13
0x0027bd79: push   r14
0x0027bd7b: push   r15
0x0027bd7d: lea    rbp,[rsp-0x68]
0x0027bd82: sub    rsp,0x168
0x0027bd89: mov    rax,QWORD PTR [rip+0x16202b0]        # 0x14189c040
0x0027bd90: xor    rax,rsp
0x0027bd93: mov    QWORD PTR [rbp+0x50],rax
0x0027bd97: mov    DWORD PTR [rsp+0x64],edx
0x0027bd9b: mov    QWORD PTR [rsp+0x50],rcx
0x0027bda0: mov    eax,DWORD PTR [rcx+0x4]
0x0027bda3: sub    eax,0x4
0x0027bda6: cmp    eax,0x1
0x0027bda9: jbe    0x14027d285
0x0027bdaf: mov    rax,QWORD PTR [rip+0x216935a]        # 0x1423e5110
0x0027bdb6: mov    QWORD PTR [rbp-0x60],rax
0x0027bdba: mov    DWORD PTR [rsp+0x78],0xffffffff
0x0027bdc2: mov    DWORD PTR [rsp+0x74],0xffffffff
0x0027bdca: cmp    BYTE PTR [rip+0x2114804],0x0        # 0x1423905d5
0x0027bdd1: je     0x14027bde7
0x0027bdd3: mov    eax,DWORD PTR [rip+0x23ce7d7]        # 0x14264a5b0
0x0027bdd9: mov    DWORD PTR [rsp+0x78],eax
0x0027bddd: mov    eax,DWORD PTR [rip+0x23ce7d1]        # 0x14264a5b4
0x0027bde3: mov    DWORD PTR [rsp+0x74],eax
0x0027bde7: lea    eax,[r9+r8*1]
0x0027bdeb: cdq
0x0027bdec: sub    eax,edx
0x0027bdee: sar    eax,1
0x0027bdf0: lea    r14d,[rax-0x32]
0x0027bdf4: lea    edi,[rax+0x32]
0x0027bdf7: mov    r13d,0x14
0x0027bdfd: mov    r12d,DWORD PTR [rip+0x2151984]        # 0x1423cd788
0x0027be04: add    r12d,0xfffffffb
0x0027be08: mov    DWORD PTR [rsp+0x60],r12d
0x0027be0d: call   0x14027ffb0
0x0027be12: mov    DWORD PTR [rsp+0x6c],eax
0x0027be16: mov    r8d,0x27 ; inline_fragment="'"
0x0027be1c: lea    ecx,[rax+0x2]
0x0027be1f: lea    edx,[rcx+rcx*2]
0x0027be22: cmp    edx,r8d
0x0027be25: cmovl  r8d,edx
0x0027be29: lea    ecx,[r12-0x13]
0x0027be2e: cmp    ecx,r8d
0x0027be31: jle    0x14027be3c
0x0027be33: mov    r13d,r12d
0x0027be36: sub    r13d,r8d
0x0027be39: inc    r13d
0x0027be3c: mov    esi,r13d
0x0027be3f: cmp    r13d,r12d
0x0027be42: jg     0x14027bf15
0x0027be48: nop    DWORD PTR [rax+rax*1+0x0]
0x0027be50: mov    ebx,r14d
0x0027be53: cmp    r14d,edi
0x0027be56: jg     0x14027bf0a
0x0027be5c: nop    DWORD PTR [rax+0x0]
0x0027be60: mov    DWORD PTR [rip+0x23ce60e],ebx        # 0x14264a474
0x0027be66: mov    DWORD PTR [rip+0x23ce60c],esi        # 0x14264a478
0x0027be6c: xor    r8d,r8d
0x0027be6f: xor    edx,edx
0x0027be71: lea    rcx,[rip+0x23ce578]        # 0x14264a3f0
0x0027be78: call   0x1400bb190
0x0027be7d: cmp    esi,r13d
0x0027be80: jne    0x14027beaa
0x0027be82: cmp    ebx,r14d
0x0027be85: jne    0x14027be8f
0x0027be87: mov    edx,DWORD PTR [rip+0x23cfe87]        # 0x14264bd14
0x0027be8d: jmp    0x14027bef4
0x0027be8f: lea    rcx,[rip+0x23ce55a]        # 0x14264a3f0
0x0027be96: cmp    ebx,edi
0x0027be98: jne    0x14027bea2
0x0027be9a: mov    edx,DWORD PTR [rip+0x23cfe8c]        # 0x14264bd2c
0x0027bea0: jmp    0x14027befb
0x0027bea2: mov    edx,DWORD PTR [rip+0x23cfe78]        # 0x14264bd20
0x0027bea8: jmp    0x14027befb
0x0027beaa: cmp    esi,r12d
0x0027bead: jne    0x14027bed7
0x0027beaf: cmp    ebx,r14d
0x0027beb2: jne    0x14027bebc
0x0027beb4: mov    edx,DWORD PTR [rip+0x23cfe62]        # 0x14264bd1c
0x0027beba: jmp    0x14027bef4
0x0027bebc: lea    rcx,[rip+0x23ce52d]        # 0x14264a3f0
0x0027bec3: cmp    ebx,edi
0x0027bec5: jne    0x14027becf
0x0027bec7: mov    edx,DWORD PTR [rip+0x23cfe67]        # 0x14264bd34
0x0027becd: jmp    0x14027befb
0x0027becf: mov    edx,DWORD PTR [rip+0x23cfe53]        # 0x14264bd28
0x0027bed5: jmp    0x14027befb
0x0027bed7: cmp    ebx,r14d
0x0027beda: jne    0x14027bee4
0x0027bedc: mov    edx,DWORD PTR [rip+0x23cfe36]        # 0x14264bd18
0x0027bee2: jmp    0x14027bef4
0x0027bee4: cmp    ebx,edi
0x0027bee6: mov    edx,DWORD PTR [rip+0x23cfe44]        # 0x14264bd30
0x0027beec: je     0x14027bef4
0x0027beee: mov    edx,DWORD PTR [rip+0x23cfe30]        # 0x14264bd24
0x0027bef4: lea    rcx,[rip+0x23ce4f5]        # 0x14264a3f0
0x0027befb: call   0x140adaad0
0x0027bf00: inc    ebx
0x0027bf02: cmp    ebx,edi
0x0027bf04: jle    0x14027be60
0x0027bf0a: inc    esi
0x0027bf0c: cmp    esi,r12d
0x0027bf0f: jle    0x14027be50
0x0027bf15: xor    esi,esi
0x0027bf17: nop    WORD PTR [rax+rax*1+0x0]
0x0027bf20: lea    r15d,[rdi-0xc]
0x0027bf24: add    r15d,esi
0x0027bf27: lea    r11,[rip+0x23d8cba]        # 0x142654be8
0x0027bf2e: lea    ebx,[r13+0x1]
0x0027bf32: nop    DWORD PTR [rax+0x0]
0x0027bf36: data16 nop WORD PTR [rax+rax*1+0x0]
0x0027bf40: mov    DWORD PTR [rip+0x23ce52d],r15d        # 0x14264a474
0x0027bf47: mov    DWORD PTR [rip+0x23ce52b],ebx        # 0x14264a478
0x0027bf4d: test   esi,esi
0x0027bf4f: jne    0x14027bf57
0x0027bf51: mov    edx,DWORD PTR [r11-0x18]
0x0027bf55: jmp    0x14027bf65
0x0027bf57: cmp    esi,0xb
0x0027bf5a: jne    0x14027bf61
0x0027bf5c: mov    edx,DWORD PTR [r11]
0x0027bf5f: jmp    0x14027bf65
0x0027bf61: mov    edx,DWORD PTR [r11-0xc]
0x0027bf65: lea    rcx,[rip+0x23ce484]        # 0x14264a3f0
0x0027bf6c: call   0x140adaad0
0x0027bf71: inc    ebx
0x0027bf73: add    r11,0x4
0x0027bf77: lea    rax,[rip+0x23d8c76]        # 0x142654bf4
0x0027bf7e: cmp    r11,rax
0x0027bf81: jl     0x14027bf40
0x0027bf83: inc    esi
0x0027bf85: cmp    esi,0xc
0x0027bf88: jl     0x14027bf20
0x0027bf8a: mov    DWORD PTR [rip+0x23ce4e8],0x1010007        # 0x14264a47c
0x0027bf94: lea    eax,[rdi-0x9]
0x0027bf97: mov    DWORD PTR [rip+0x23ce4d7],eax        # 0x14264a474
0x0027bf9d: add    r13d,0x2
0x0027bfa1: mov    DWORD PTR [rip+0x23ce4d0],r13d        # 0x14264a478
0x0027bfa8: xorps  xmm0,xmm0
0x0027bfab: movups XMMWORD PTR [rbp-0x50],xmm0
0x0027bfaf: movdqa xmm1,XMMWORD PTR [rip+0x150f1c9]        # 0x14178b180
0x0027bfb7: movdqu XMMWORD PTR [rbp-0x40],xmm1
0x0027bfbc: mov    eax,DWORD PTR [rip+0x1382762]        # 0x1415fe724 ; literal="Cancel"
0x0027bfc2: mov    DWORD PTR [rbp-0x50],eax
0x0027bfc5: movzx  eax,WORD PTR [rip+0x138275c]        # 0x1415fe728 ; literal="el"
0x0027bfcc: mov    WORD PTR [rbp-0x4c],ax
0x0027bfd0: mov    BYTE PTR [rbp-0x4a],0x0
0x0027bfd4: xor    r9d,r9d
0x0027bfd7: lea    rdx,[rbp-0x50]
0x0027bfdb: lea    rcx,[rip+0x23ce40e]        # 0x14264a3f0
0x0027bfe2: call   0x140ad9960
0x0027bfe7: nop
0x0027bfe8: mov    rdx,QWORD PTR [rbp-0x38]
0x0027bfec: cmp    rdx,0xf
0x0027bff0: mov    r12d,DWORD PTR [rsp+0x60]
0x0027bff5: jbe    0x14027c028
0x0027bff7: inc    rdx
0x0027bffa: mov    rcx,QWORD PTR [rbp-0x50]
0x0027bffe: mov    rax,rcx
0x0027c001: cmp    rdx,0x1000
0x0027c008: jb     0x14027c023
0x0027c00a: add    rdx,0x27
0x0027c00e: mov    rcx,QWORD PTR [rcx-0x8]
0x0027c012: sub    rax,rcx
0x0027c015: add    rax,0xfffffffffffffff8
0x0027c019: cmp    rax,0x1f
0x0027c01d: ja     0x14027c583
0x0027c023: call   0x141539680
0x0027c028: mov    DWORD PTR [rip+0x23ce44a],0x1010007        # 0x14264a47c
0x0027c032: lea    eax,[r14+0x2]
0x0027c036: mov    DWORD PTR [rip+0x23ce438],eax        # 0x14264a474
0x0027c03c: mov    DWORD PTR [rip+0x23ce435],r13d        # 0x14264a478
0x0027c043: mov    rsi,QWORD PTR [rsp+0x50]
0x0027c048: mov    ecx,DWORD PTR [rsi+0x4]
0x0027c04b: test   ecx,ecx
0x0027c04d: je     0x14027c3c2
0x0027c053: sub    ecx,0x1
0x0027c056: je     0x14027c366
0x0027c05c: sub    ecx,0x1
0x0027c05f: je     0x14027c2f3
0x0027c065: cmp    ecx,0x1
0x0027c068: jne    0x14027c46f
0x0027c06e: mov    r15,QWORD PTR [rsi+0xc0]
0x0027c075: test   r15,r15
0x0027c078: je     0x14027c46f
0x0027c07e: add    r15,0x20
0x0027c082: xorps  xmm0,xmm0
0x0027c085: movups XMMWORD PTR [rbp-0x30],xmm0
0x0027c089: xorps  xmm1,xmm1
0x0027c08c: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x0027c091: mov    rsi,QWORD PTR [r15+0x10]
0x0027c095: cmp    QWORD PTR [r15+0x18],0xf
0x0027c09a: jbe    0x14027c09f
0x0027c09c: mov    r15,QWORD PTR [r15]
0x0027c09f: movabs rbx,0x7fffffffffffffff
0x0027c0a9: cmp    rsi,rbx
0x0027c0ac: ja     0x14027d2a5
0x0027c0b2: cmp    rsi,0xf
0x0027c0b6: ja     0x14027c0ce
0x0027c0b8: mov    QWORD PTR [rbp-0x20],rsi
0x0027c0bc: mov    QWORD PTR [rbp-0x18],0xf
0x0027c0c4: movups xmm0,XMMWORD PTR [r15]
0x0027c0c8: movups XMMWORD PTR [rbp-0x30],xmm0
0x0027c0cc: jmp    0x14027c10e
0x0027c0ce: mov    rax,rsi
0x0027c0d1: or     rax,0xf
0x0027c0d5: cmp    rax,rbx
0x0027c0d8: ja     0x14027c0e9
0x0027c0da: mov    rbx,rax
0x0027c0dd: mov    ecx,0x16
0x0027c0e2: cmp    rax,rcx
0x0027c0e5: cmovb  rbx,rcx
0x0027c0e9: lea    rcx,[rbx+0x1]
0x0027c0ed: call   0x1400707d0
0x0027c0f2: mov    QWORD PTR [rbp-0x30],rax
0x0027c0f6: mov    QWORD PTR [rbp-0x20],rsi
0x0027c0fa: mov    QWORD PTR [rbp-0x18],rbx
0x0027c0fe: lea    r8,[rsi+0x1]
0x0027c102: mov    rdx,r15
0x0027c105: mov    rcx,rax
0x0027c108: call   0x14153aa78
0x0027c10d: nop
0x0027c10e: mov    rsi,QWORD PTR [rsp+0x50]
0x0027c113: movsxd rdx,DWORD PTR [rsi+0xc8]
0x0027c11a: test   edx,edx
0x0027c11c: js     0x14027c2b2
0x0027c122: mov    rax,QWORD PTR [rsi+0xc0]
0x0027c129: mov    rcx,QWORD PTR [rax+0x58]
0x0027c12d: sub    rcx,QWORD PTR [rax+0x50]
0x0027c131: sar    rcx,0x3
0x0027c135: cmp    rdx,rcx
0x0027c138: jae    0x14027c2b2
0x0027c13e: mov    r8d,0x9
0x0027c144: lea    rdx,[rip+0x139fc6d]        # 0x14161bdb8 ; literal=": select "
0x0027c14b: lea    rcx,[rbp-0x30]
0x0027c14f: call   0x14006fa10
0x0027c154: mov    rax,QWORD PTR [rsi+0xc0]
0x0027c15b: movsxd rcx,DWORD PTR [rsi+0xc8]
0x0027c162: mov    rax,QWORD PTR [rax+0x50]
0x0027c166: mov    rdx,QWORD PTR [rax+rcx*8]
0x0027c16a: add    rdx,0x8
0x0027c16e: mov    r8,QWORD PTR [rdx+0x10]
0x0027c172: cmp    QWORD PTR [rdx+0x18],0xf
0x0027c177: jbe    0x14027c17c
0x0027c179: mov    rdx,QWORD PTR [rdx]
0x0027c17c: lea    rcx,[rbp-0x30]
0x0027c180: call   0x14006fa10
0x0027c185: mov    r8d,0x2
0x0027c18b: lea    rdx,[rip+0x13993ae]        # 0x141615540 ; literal=" ("
0x0027c192: lea    rcx,[rbp-0x30]
0x0027c196: call   0x14006fa10
0x0027c19b: xorps  xmm0,xmm0
0x0027c19e: movups XMMWORD PTR [rbp-0x50],xmm0
0x0027c1a2: mov    QWORD PTR [rbp-0x40],0x0
0x0027c1aa: mov    QWORD PTR [rbp-0x38],0xf
0x0027c1b2: mov    BYTE PTR [rbp-0x50],0x0
0x0027c1b6: mov    r8,QWORD PTR [rsi+0xc0]
0x0027c1bd: movsxd rcx,DWORD PTR [rsi+0xc8]
0x0027c1c4: mov    rax,QWORD PTR [r8+0x50]
0x0027c1c8: mov    rcx,QWORD PTR [rax+rcx*8]
0x0027c1cc: mov    rax,QWORD PTR [rcx]
0x0027c1cf: mov    r8d,DWORD PTR [r8+0x118]
0x0027c1d6: lea    rdx,[rbp-0x50]
0x0027c1da: call   QWORD PTR [rax+0x38]
0x0027c1dd: lea    rdx,[rbp-0x50]
0x0027c1e1: cmp    QWORD PTR [rbp-0x38],0xf
0x0027c1e6: cmova  rdx,QWORD PTR [rbp-0x50]
0x0027c1eb: mov    r8,QWORD PTR [rbp-0x40]
0x0027c1ef: lea    rcx,[rbp-0x30]
0x0027c1f3: call   0x14006fa10
0x0027c1f8: mov    rax,QWORD PTR [rsi+0xc0]
0x0027c1ff: movsxd rcx,DWORD PTR [rsi+0xc8]
0x0027c206: mov    rax,QWORD PTR [rax+0x50]
0x0027c20a: mov    rcx,QWORD PTR [rax+rcx*8]
0x0027c20e: cmp    DWORD PTR [rcx+0x28],0x1
0x0027c212: jle    0x14027c24f
0x0027c214: mov    r8d,0x2
0x0027c21a: lea    rdx,[rip+0x136ceb7]        # 0x1415e90d8 ; literal=", "
0x0027c221: lea    rcx,[rbp-0x30]
0x0027c225: call   0x14006fa10
0x0027c22a: lea    rdx,[rbp-0x30]
0x0027c22e: mov    ecx,DWORD PTR [rsi+0xcc]
0x0027c234: call   0x14052c130
0x0027c239: mov    r8d,0x5
0x0027c23f: lea    rdx,[rip+0x139fb7e]        # 0x14161bdc4 ; literal=" left"
0x0027c246: lea    rcx,[rbp-0x30]
0x0027c24a: call   0x14006fa10
0x0027c24f: mov    rax,QWORD PTR [rsi+0xc0]
0x0027c256: movsxd rcx,DWORD PTR [rsi+0xc8]
0x0027c25d: mov    rax,QWORD PTR [rax+0x50]
0x0027c261: mov    rcx,QWORD PTR [rax+rcx*8]
0x0027c265: mov    eax,DWORD PTR [rcx+0x2c]
0x0027c268: and    eax,0x1
0x0027c26b: mov    ecx,eax
0x0027c26d: lea    r8,[rax*4+0xa]
0x0027c275: lea    rax,[rip+0x139fabc]        # 0x14161bd38 ; literal=", consumed"
0x0027c27c: lea    rdx,[rip+0x139faa5]        # 0x14161bd28 ; literal=", not consumed"
0x0027c283: test   ecx,ecx
0x0027c285: cmove  rdx,rax
0x0027c289: lea    rcx,[rbp-0x30]
0x0027c28d: call   0x14006fa10
0x0027c292: mov    r8d,0x1
0x0027c298: lea    rdx,[rip+0x13992e1]        # 0x141615580 ; literal=")"
0x0027c29f: lea    rcx,[rbp-0x30]
0x0027c2a3: call   0x14006fa10
0x0027c2a8: nop
0x0027c2a9: lea    rcx,[rbp-0x50]
0x0027c2ad: call   0x14006f850
0x0027c2b2: mov    r8d,0x1
0x0027c2b8: lea    rdx,[rip+0x136c2f5]        # 0x1415e85b4 ; literal="."
0x0027c2bf: lea    rcx,[rbp-0x30]
0x0027c2c3: call   0x14006fa10
0x0027c2c8: lea    rcx,[rbp-0x30]
0x0027c2cc: call   0x14052d650
0x0027c2d1: xor    r9d,r9d
0x0027c2d4: lea    rdx,[rbp-0x30]
0x0027c2d8: lea    rcx,[rip+0x23ce111]        # 0x14264a3f0
0x0027c2df: call   0x140ad9960
0x0027c2e4: nop
0x0027c2e5: lea    rcx,[rbp-0x30]
0x0027c2e9: call   0x14006f850
0x0027c2ee: jmp    0x14027c46f
0x0027c2f3: xorps  xmm0,xmm0
0x0027c2f6: movups XMMWORD PTR [rbp-0x50],xmm0
0x0027c2fa: mov    ecx,0x20 ; inline_fragment=" "
0x0027c2ff: call   0x1400707d0
0x0027c304: mov    rdx,rax
0x0027c307: mov    QWORD PTR [rbp-0x50],rax
0x0027c30b: movdqa xmm0,XMMWORD PTR [rip+0x150ef7d]        # 0x14178b290
0x0027c313: movdqu XMMWORD PTR [rbp-0x40],xmm0
0x0027c318: movups xmm0,XMMWORD PTR [rip+0x139fa81]        # 0x14161bda0 ; literal="Select a butchery tool."
0x0027c31f: movups XMMWORD PTR [rax],xmm0
0x0027c322: mov    ecx,DWORD PTR [rip+0x139fa88]        # 0x14161bdb0 ; literal="y tool."
0x0027c328: mov    DWORD PTR [rax+0x10],ecx
0x0027c32b: movzx  ecx,WORD PTR [rip+0x139fa82]        # 0x14161bdb4 ; literal="ol."
0x0027c332: mov    WORD PTR [rax+0x14],cx
0x0027c336: movzx  eax,BYTE PTR [rip+0x139fa79]        # 0x14161bdb6 ; literal="."
0x0027c33d: mov    BYTE PTR [rdx+0x16],al
0x0027c340: mov    BYTE PTR [rdx+0x17],0x0
0x0027c344: xor    r9d,r9d
0x0027c347: lea    rdx,[rbp-0x50]
0x0027c34b: lea    rcx,[rip+0x23ce09e]        # 0x14264a3f0
0x0027c352: call   0x140ad9960
0x0027c357: nop
0x0027c358: lea    rcx,[rbp-0x50]
0x0027c35c: call   0x14006f850
0x0027c361: jmp    0x14027c46f
0x0027c366: xorps  xmm0,xmm0
0x0027c369: movups XMMWORD PTR [rbp-0x50],xmm0
0x0027c36d: mov    ecx,0x20 ; inline_fragment=" "
0x0027c372: call   0x1400707d0
0x0027c377: mov    QWORD PTR [rbp-0x50],rax
0x0027c37b: movdqa xmm0,XMMWORD PTR [rip+0x150ef5d]        # 0x14178b2e0
0x0027c383: movdqu XMMWORD PTR [rbp-0x40],xmm0
0x0027c388: movups xmm0,XMMWORD PTR [rip+0x139f9f1]        # 0x14161bd80 ; literal="What do you want to butcher?"
0x0027c38f: movups XMMWORD PTR [rax],xmm0
0x0027c392: movsd  xmm0,QWORD PTR [rip+0x139f9f6]        # 0x14161bd90 ; literal=" to butcher?"
0x0027c39a: movsd  QWORD PTR [rax+0x10],xmm0
0x0027c39f: mov    ecx,DWORD PTR [rip+0x139f9f3]        # 0x14161bd98 ; literal="her?"
0x0027c3a5: mov    DWORD PTR [rax+0x18],ecx
0x0027c3a8: mov    BYTE PTR [rax+0x1c],0x0
0x0027c3ac: xor    r9d,r9d
0x0027c3af: lea    rdx,[rbp-0x50]
0x0027c3b3: lea    rcx,[rip+0x23ce036]        # 0x14264a3f0
0x0027c3ba: call   0x140ad9960
0x0027c3bf: nop
0x0027c3c0: jmp    0x14027c434
0x0027c3c2: xorps  xmm0,xmm0
0x0027c3c5: movups XMMWORD PTR [rbp-0x50],xmm0
0x0027c3c9: mov    ecx,0x50 ; inline_fragment="P"
0x0027c3ce: call   0x1400707d0
0x0027c3d3: mov    QWORD PTR [rbp-0x50],rax
0x0027c3d7: movdqa xmm0,XMMWORD PTR [rip+0x150f181]        # 0x14178b560 ; literal="H"
0x0027c3df: movdqu XMMWORD PTR [rbp-0x40],xmm0
0x0027c3e4: movaps xmm0,XMMWORD PTR [rip+0x139fb15]        # 0x14161bf00 ; literal="What do you want to do?  Items must be in a grasp or on the ground here."
0x0027c3eb: movups XMMWORD PTR [rax],xmm0
0x0027c3ee: movaps xmm1,XMMWORD PTR [rip+0x139fb1b]        # 0x14161bf10 ; literal=" to do?  Items must be in a grasp or on the ground here."
0x0027c3f5: movups XMMWORD PTR [rax+0x10],xmm1
0x0027c3f9: movaps xmm0,XMMWORD PTR [rip+0x139fb20]        # 0x14161bf20 ; literal="ust be in a grasp or on the ground here."
0x0027c400: movups XMMWORD PTR [rax+0x20],xmm0
0x0027c404: movaps xmm1,XMMWORD PTR [rip+0x139fb25]        # 0x14161bf30 ; literal="p or on the ground here."
0x0027c40b: movups XMMWORD PTR [rax+0x30],xmm1
0x0027c40f: movsd  xmm0,QWORD PTR [rip+0x139fb29]        # 0x14161bf40 ; literal="nd here."
0x0027c417: movsd  QWORD PTR [rax+0x40],xmm0
0x0027c41c: mov    BYTE PTR [rax+0x48],0x0
0x0027c420: xor    r9d,r9d
0x0027c423: lea    rdx,[rbp-0x50]
0x0027c427: lea    rcx,[rip+0x23cdfc2]        # 0x14264a3f0
0x0027c42e: call   0x140ad9960
0x0027c433: nop
0x0027c434: mov    rdx,QWORD PTR [rbp-0x38]
0x0027c438: cmp    rdx,0xf
0x0027c43c: jbe    0x14027c46f
0x0027c43e: inc    rdx
0x0027c441: mov    rcx,QWORD PTR [rbp-0x50]
0x0027c445: cmp    rdx,0x1000
0x0027c44c: mov    rax,rcx
0x0027c44f: jb     0x14027c46a
0x0027c451: mov    rcx,QWORD PTR [rcx-0x8]
0x0027c455: sub    rax,rcx
0x0027c458: add    rdx,0x27
0x0027c45c: add    rax,0xfffffffffffffff8
0x0027c460: cmp    rax,0x1f
0x0027c464: ja     0x14027c583
0x0027c46a: call   0x141539680
0x0027c46f: inc    r14d
0x0027c472: mov    DWORD PTR [rsp+0x44],r14d
0x0027c477: lea    eax,[rdi-0x1]
0x0027c47a: mov    DWORD PTR [rsp+0x4c],eax
0x0027c47e: lea    r15d,[r13+0x2]
0x0027c482: mov    DWORD PTR [rsp+0x60],r15d
0x0027c487: lea    ecx,[r12-0x1]
0x0027c48c: sub    ecx,r15d
0x0027c48f: inc    ecx
0x0027c491: mov    eax,0x55555556 ; inline_fragment="VUUU"
0x0027c496: imul   ecx
0x0027c498: mov    ebx,edx
0x0027c49a: shr    ebx,0x1f
0x0027c49d: add    ebx,edx
0x0027c49f: mov    DWORD PTR [rbp-0x70],ebx
0x0027c4a2: movsxd r13,DWORD PTR [rsp+0x6c]
0x0027c4a7: cmp    r13d,ebx
0x0027c4aa: jle    0x14027c4b7
0x0027c4ac: lea    r12d,[rdi-0x3]
0x0027c4b0: mov    DWORD PTR [rsp+0x4c],r12d
0x0027c4b5: jmp    0x14027c4bc
0x0027c4b7: mov    r12d,DWORD PTR [rsp+0x4c]
0x0027c4bc: test   r13d,r13d
0x0027c4bf: jne    0x14027c65f
0x0027c4c5: lea    eax,[r14+0x1]
0x0027c4c9: mov    DWORD PTR [rip+0x23cdfa5],eax        # 0x14264a474
0x0027c4cf: mov    DWORD PTR [rip+0x23cdfa2],r15d        # 0x14264a478
0x0027c4d6: mov    DWORD PTR [rip+0x23cdf9c],0x1000004        # 0x14264a47c
0x0027c4e0: mov    ecx,DWORD PTR [rsi+0x4]
0x0027c4e3: sub    ecx,0x1
0x0027c4e6: je     0x14027c5ff
0x0027c4ec: sub    ecx,0x1
0x0027c4ef: je     0x14027c594
0x0027c4f5: cmp    ecx,0x1
0x0027c4f8: jne    0x14027c65f
0x0027c4fe: xorps  xmm0,xmm0
0x0027c501: movups XMMWORD PTR [rbp-0x50],xmm0
0x0027c505: mov    ecx,0x20 ; inline_fragment=" "
0x0027c50a: call   0x1400707d0
0x0027c50f: mov    QWORD PTR [rbp-0x50],rax
0x0027c513: movdqa xmm0,XMMWORD PTR [rip+0x150ed25]        # 0x14178b240
0x0027c51b: movdqu XMMWORD PTR [rbp-0x40],xmm0
0x0027c520: movups xmm0,XMMWORD PTR [rip+0x139f8e9]        # 0x14161be10 ; literal="No available item."
0x0027c527: movups XMMWORD PTR [rax],xmm0
0x0027c52a: movzx  ecx,WORD PTR [rip+0x139f8ef]        # 0x14161be20 ; literal="m."
0x0027c531: mov    WORD PTR [rax+0x10],cx
0x0027c535: mov    BYTE PTR [rax+0x12],r13b
0x0027c539: xor    r9d,r9d
0x0027c53c: lea    rdx,[rbp-0x50]
0x0027c540: lea    rcx,[rip+0x23cdea9]        # 0x14264a3f0
0x0027c547: call   0x140ad9960
0x0027c54c: nop
0x0027c54d: mov    rdx,QWORD PTR [rbp-0x38]
0x0027c551: cmp    rdx,0xf
0x0027c555: jbe    0x14027c65f
0x0027c55b: inc    rdx
0x0027c55e: mov    rcx,QWORD PTR [rbp-0x50]
0x0027c562: mov    rax,rcx
0x0027c565: cmp    rdx,0x1000
0x0027c56c: jb     0x14027c58a
0x0027c56e: add    rdx,0x27
0x0027c572: mov    rcx,QWORD PTR [rcx-0x8]
0x0027c576: sub    rax,rcx
0x0027c579: add    rax,0xfffffffffffffff8
0x0027c57d: cmp    rax,0x1f
0x0027c581: jbe    0x14027c58a
0x0027c583: call   QWORD PTR [rip+0x136959f]        # 0x1415e5b28
0x0027c589: int3
0x0027c58a: call   0x141539680
0x0027c58f: jmp    0x14027c65f
0x0027c594: xorps  xmm0,xmm0
0x0027c597: movups XMMWORD PTR [rbp-0x50],xmm0
0x0027c59b: mov    ecx,0x20 ; inline_fragment=" "
0x0027c5a0: call   0x1400707d0
0x0027c5a5: mov    rdx,rax
0x0027c5a8: mov    QWORD PTR [rbp-0x50],rax
0x0027c5ac: movdqa xmm0,XMMWORD PTR [rip+0x150ed1c]        # 0x14178b2d0
0x0027c5b4: movdqu XMMWORD PTR [rbp-0x40],xmm0
0x0027c5b9: movups xmm0,XMMWORD PTR [rip+0x139f7a0]        # 0x14161bd60 ; literal="No butchery tool available."
0x0027c5c0: movups XMMWORD PTR [rax],xmm0
0x0027c5c3: movsd  xmm0,QWORD PTR [rip+0x139f7a5]        # 0x14161bd70 ; literal=" available."
0x0027c5cb: movsd  QWORD PTR [rax+0x10],xmm0
0x0027c5d0: movzx  ecx,WORD PTR [rip+0x139f7a1]        # 0x14161bd78 ; literal="le."
0x0027c5d7: mov    WORD PTR [rax+0x18],cx
0x0027c5db: movzx  eax,BYTE PTR [rip+0x139f798]        # 0x14161bd7a ; literal="."
0x0027c5e2: mov    BYTE PTR [rdx+0x1a],al
0x0027c5e5: mov    BYTE PTR [rdx+0x1b],0x0
0x0027c5e9: xor    r9d,r9d
0x0027c5ec: lea    rdx,[rbp-0x50]
0x0027c5f0: lea    rcx,[rip+0x23cddf9]        # 0x14264a3f0
0x0027c5f7: call   0x140ad9960
0x0027c5fc: nop
0x0027c5fd: jmp    0x14027c656
0x0027c5ff: xorps  xmm0,xmm0
0x0027c602: movups XMMWORD PTR [rbp-0x50],xmm0
0x0027c606: mov    ecx,0x20 ; inline_fragment=" "
0x0027c60b: call   0x1400707d0
0x0027c610: mov    QWORD PTR [rbp-0x50],rax
0x0027c614: movdqa xmm0,XMMWORD PTR [rip+0x150ec54]        # 0x14178b270
0x0027c61c: movdqu XMMWORD PTR [rbp-0x40],xmm0
0x0027c621: movups xmm0,XMMWORD PTR [rip+0x139f720]        # 0x14161bd48 ; literal="No carcass available."
0x0027c628: movups XMMWORD PTR [rax],xmm0
0x0027c62b: mov    ecx,DWORD PTR [rip+0x139f727]        # 0x14161bd58 ; literal="able."
0x0027c631: mov    DWORD PTR [rax+0x10],ecx
0x0027c634: movzx  ecx,BYTE PTR [rip+0x139f721]        # 0x14161bd5c ; literal="."
0x0027c63b: mov    BYTE PTR [rax+0x14],cl
0x0027c63e: mov    BYTE PTR [rax+0x15],0x0
0x0027c642: xor    r9d,r9d
0x0027c645: lea    rdx,[rbp-0x50]
0x0027c649: lea    rcx,[rip+0x23cdda0]        # 0x14264a3f0
0x0027c650: call   0x140ad9960
0x0027c655: nop
0x0027c656: lea    rcx,[rbp-0x50]
0x0027c65a: call   0x14006f850
0x0027c65f: mov    edi,r15d
0x0027c662: mov    DWORD PTR [rsp+0x48],r15d
0x0027c667: mov    ecx,r13d
0x0027c66a: sub    ecx,ebx
0x0027c66c: cmp    DWORD PTR [rsi+0x24],ecx
0x0027c66f: cmovle ecx,DWORD PTR [rsi+0x24]
0x0027c673: xor    eax,eax
0x0027c675: test   ecx,ecx
0x0027c677: cmovns eax,ecx
0x0027c67a: mov    DWORD PTR [rsp+0x70],eax
0x0027c67e: movsxd rdx,eax
0x0027c681: mov    DWORD PTR [rsp+0x68],edx
0x0027c685: add    eax,ebx
0x0027c687: cmp    edx,eax
0x0027c689: jge    0x14027d21b
0x0027c68f: mov    r8,rdx
0x0027c692: mov    QWORD PTR [rsp+0x58],rdx
0x0027c697: movsxd rax,r12d
0x0027c69a: mov    QWORD PTR [rbp-0x68],rax
0x0027c69e: movsxd rcx,r14d
0x0027c6a1: mov    QWORD PTR [rbp-0x78],rcx
0x0027c6a5: mov    rax,r13
0x0027c6a8: mov    QWORD PTR [rbp-0x58],rax
0x0027c6ac: nop    DWORD PTR [rax+0x0]
0x0027c6b0: cmp    r8,rax
0x0027c6b3: jge    0x14027d211
0x0027c6b9: xor    r13d,r13d
0x0027c6bc: mov    DWORD PTR [rsp+0x40],r13d
0x0027c6c1: mov    ecx,DWORD PTR [rsi+0x4]
0x0027c6c4: sub    ecx,0x1
0x0027c6c7: je     0x14027c6e2
0x0027c6c9: sub    ecx,0x1
0x0027c6cc: je     0x14027c6d9
0x0027c6ce: cmp    ecx,0x1
0x0027c6d1: jne    0x14027c6fd
0x0027c6d3: mov    rax,QWORD PTR [rsi+0x78]
0x0027c6d7: jmp    0x14027c6e9
0x0027c6d9: mov    rax,QWORD PTR [rsi+0x110]
0x0027c6e0: jmp    0x14027c6e9
0x0027c6e2: mov    rax,QWORD PTR [rsi+0xf8]
0x0027c6e9: mov    edx,DWORD PTR [rsp+0x64]
0x0027c6ed: mov    rcx,QWORD PTR [rax+r8*8]
0x0027c6f1: call   0x140c7cbc0
0x0027c6f6: mov    r13d,eax
0x0027c6f9: mov    DWORD PTR [rsp+0x40],eax
0x0027c6fd: mov    DWORD PTR [rip+0x23cdd75],0x1010007        # 0x14264a47c
0x0027c707: mov    esi,r14d
0x0027c70a: cmp    r14d,r12d
0x0027c70d: jg     0x14027c812
0x0027c713: lea    r14d,[rdi+0x3]
0x0027c717: mov    r13,QWORD PTR [rbp-0x78]
0x0027c71b: mov    r15,r13
0x0027c71e: xchg   ax,ax
0x0027c720: mov    ebx,edi
0x0027c722: cmp    edi,r14d
0x0027c725: jge    0x14027c7fa
0x0027c72b: cmp    esi,r12d
0x0027c72e: jne    0x14027c798
0x0027c730: lea    rdi,[rip+0x23cf679]        # 0x14264bdb0
0x0027c737: nop    WORD PTR [rax+rax*1+0x0]
0x0027c740: mov    DWORD PTR [rip+0x23cdd2e],esi        # 0x14264a474
0x0027c746: mov    DWORD PTR [rip+0x23cdd2c],ebx        # 0x14264a478
0x0027c74c: lea    rdx,[rdi-0x18]
0x0027c750: cmp    r15,r13
0x0027c753: cmovne rdx,rdi
0x0027c757: mov    edx,DWORD PTR [rdx]
0x0027c759: lea    rcx,[rip+0x23cdc90]        # 0x14264a3f0
0x0027c760: call   0x140adaad0
0x0027c765: cmp    DWORD PTR [rip+0x215100c],0x0        # 0x1423cd778
0x0027c76c: jle    0x14027c78b
0x0027c76e: mov    rax,QWORD PTR [rip+0x2150ffb]        # 0x1423cd770
0x0027c775: test   BYTE PTR [rax],0x1
0x0027c778: je     0x14027c78b
0x0027c77a: mov    r8b,0x1
0x0027c77d: xor    edx,edx
0x0027c77f: lea    rcx,[rip+0x23cdc6a]        # 0x14264a3f0
0x0027c786: call   0x1400bb190
0x0027c78b: inc    ebx
0x0027c78d: add    rdi,0x4
0x0027c791: cmp    ebx,r14d
0x0027c794: jl     0x14027c740
0x0027c796: jmp    0x14027c7f6
0x0027c798: lea    rdi,[rip+0x23cf605]        # 0x14264bda4
0x0027c79f: nop
0x0027c7a0: mov    DWORD PTR [rip+0x23cdcce],esi        # 0x14264a474
0x0027c7a6: mov    DWORD PTR [rip+0x23cdccc],ebx        # 0x14264a478
0x0027c7ac: lea    rdx,[rdi-0xc]
0x0027c7b0: cmp    r15,r13
0x0027c7b3: cmovne rdx,rdi
0x0027c7b7: mov    edx,DWORD PTR [rdx]
0x0027c7b9: lea    rcx,[rip+0x23cdc30]        # 0x14264a3f0
0x0027c7c0: call   0x140adaad0
0x0027c7c5: cmp    DWORD PTR [rip+0x2150fac],0x0        # 0x1423cd778
0x0027c7cc: jle    0x14027c7eb
0x0027c7ce: mov    rax,QWORD PTR [rip+0x2150f9b]        # 0x1423cd770
0x0027c7d5: test   BYTE PTR [rax],0x1
0x0027c7d8: je     0x14027c7eb
0x0027c7da: mov    r8b,0x1
0x0027c7dd: xor    edx,edx
0x0027c7df: lea    rcx,[rip+0x23cdc0a]        # 0x14264a3f0
0x0027c7e6: call   0x1400bb190
0x0027c7eb: inc    ebx
0x0027c7ed: add    rdi,0x4
0x0027c7f1: cmp    ebx,r14d
0x0027c7f4: jl     0x14027c7a0
0x0027c7f6: mov    edi,DWORD PTR [rsp+0x48]
0x0027c7fa: inc    esi
0x0027c7fc: inc    r15
0x0027c7ff: cmp    esi,r12d
0x0027c802: jle    0x14027c720
0x0027c808: mov    r13d,DWORD PTR [rsp+0x40]
0x0027c80d: mov    r14d,DWORD PTR [rsp+0x44]
0x0027c812: cmp    DWORD PTR [rip+0x2150f5f],0x0        # 0x1423cd778
0x0027c819: jle    0x14027c86b
0x0027c81b: mov    rax,QWORD PTR [rip+0x2150f4e]        # 0x1423cd770
0x0027c822: test   BYTE PTR [rax],0x1
0x0027c825: je     0x14027c86b
0x0027c827: test   r13d,r13d
0x0027c82a: je     0x14027c86b
0x0027c82c: mov    DWORD PTR [rip+0x23cdc41],r14d        # 0x14264a474
0x0027c833: mov    DWORD PTR [rip+0x23cdc3f],edi        # 0x14264a478
0x0027c839: mov    BYTE PTR [rsp+0x30],0x0
0x0027c83e: mov    DWORD PTR [rsp+0x28],0x3
0x0027c846: mov    DWORD PTR [rsp+0x20],0x5
0x0027c84e: mov    r9d,0x2
0x0027c854: mov    r8d,r9d
0x0027c857: mov    edx,r13d
0x0027c85a: lea    rcx,[rip+0x23cdb8f]        # 0x14264a3f0
0x0027c861: call   0x140adad70
0x0027c866: xor    r12d,r12d
0x0027c869: jmp    0x14027c882
0x0027c86b: xor    r12d,r12d
0x0027c86e: mov    DWORD PTR [rsp+0x40],r12d
0x0027c873: mov    QWORD PTR [rbp-0x80],r12
0x0027c877: test   r13d,r13d
0x0027c87a: jne    0x14027c88b
0x0027c87c: mov    r12d,0x5
0x0027c882: mov    QWORD PTR [rbp-0x80],r12
0x0027c886: mov    DWORD PTR [rsp+0x40],r12d
0x0027c88b: mov    edi,r14d
0x0027c88e: sub    edi,r12d
0x0027c891: lea    eax,[rdi+0x7]
0x0027c894: mov    DWORD PTR [rip+0x23cdbda],eax        # 0x14264a474
0x0027c89a: mov    r15d,DWORD PTR [rsp+0x48]
0x0027c89f: lea    ebx,[r15+0x1]
0x0027c8a3: mov    DWORD PTR [rip+0x23cdbcf],ebx        # 0x14264a478
0x0027c8a9: mov    edx,DWORD PTR [rsp+0x68]
0x0027c8ad: sub    edx,DWORD PTR [rsp+0x70]
0x0027c8b1: add    edx,0x52
0x0027c8b4: call   0x140c394b0
0x0027c8b9: lea    eax,[rdi+0x9]
0x0027c8bc: mov    DWORD PTR [rip+0x23cdbb2],eax        # 0x14264a474
0x0027c8c2: mov    DWORD PTR [rip+0x23cdbb0],ebx        # 0x14264a478
0x0027c8c8: mov    DWORD PTR [rip+0x23cdbaa],0x1010007        # 0x14264a47c
0x0027c8d2: xorps  xmm0,xmm0
0x0027c8d5: movups XMMWORD PTR [rbp-0x10],xmm0
0x0027c8d9: mov    QWORD PTR [rbp+0x0],0x0
0x0027c8e1: mov    QWORD PTR [rbp+0x8],0xf
0x0027c8e9: mov    BYTE PTR [rbp-0x10],0x0
0x0027c8ed: mov    rsi,QWORD PTR [rsp+0x50]
0x0027c8f2: mov    ecx,DWORD PTR [rsi+0x4]
0x0027c8f5: test   ecx,ecx
0x0027c8f7: je     0x14027c96b
0x0027c8f9: sub    ecx,0x1
0x0027c8fc: mov    rdi,QWORD PTR [rsp+0x58]
0x0027c901: je     0x14027c942
0x0027c903: sub    ecx,0x1
0x0027c906: je     0x14027c917
0x0027c908: cmp    ecx,0x1
0x0027c90b: jne    0x14027ca6b
0x0027c911: mov    rax,QWORD PTR [rsi+0x78]
0x0027c915: jmp    0x14027c91e
0x0027c917: mov    rax,QWORD PTR [rsi+0x110]
0x0027c91e: lea    rdx,[rbp-0x10]
0x0027c922: xor    r8d,r8d
0x0027c925: mov    r9d,0xffffffff
0x0027c92b: mov    rcx,QWORD PTR [rax+rdi*8]
0x0027c92f: call   0x140c65450
0x0027c934: lea    rcx,[rbp-0x10]
0x0027c938: call   0x14052d650
0x0027c93d: jmp    0x14027ca6b
0x0027c942: mov    rax,QWORD PTR [rsi+0xf8]
0x0027c949: mov    rcx,QWORD PTR [rax+rdi*8]
0x0027c94d: mov    rax,QWORD PTR [rcx]
0x0027c950: xor    r8d,r8d
0x0027c953: lea    rdx,[rbp-0x10]
0x0027c957: call   QWORD PTR [rax+0x5e8]
0x0027c95d: lea    rcx,[rbp-0x10]
0x0027c961: call   0x14052d650
0x0027c966: jmp    0x14027ca6b
0x0027c96b: mov    rax,QWORD PTR [rsi+0x28]
0x0027c96f: mov    rcx,QWORD PTR [rsp+0x58]
0x0027c974: mov    rdx,QWORD PTR [rax+rcx*8]
0x0027c978: test   rdx,rdx
0x0027c97b: jne    0x14027cad8
0x0027c981: mov    r14,QWORD PTR [rsi+0x40]
0x0027c985: mov    rax,QWORD PTR [r14+rcx*8]
0x0027c989: cmp    QWORD PTR [rax+0x10],rdx
0x0027c98d: jne    0x14027c9be
0x0027c98f: mov    QWORD PTR [rbp+0x0],0x7
0x0027c997: mov    rax,QWORD PTR [rip+0x139f48a]        # 0x14161be28 ; literal="Butcher"
0x0027c99e: mov    DWORD PTR [rbp-0x10],eax
0x0027c9a1: movzx  eax,WORD PTR [rip+0x139f484]        # 0x14161be2c ; literal="her"
0x0027c9a8: mov    WORD PTR [rbp-0xc],ax
0x0027c9ac: movzx  eax,BYTE PTR [rip+0x139f47b]        # 0x14161be2e ; literal="r"
0x0027c9b3: mov    BYTE PTR [rbp-0xa],al
0x0027c9b6: mov    BYTE PTR [rbp-0x9],dl
0x0027c9b9: jmp    0x14027ca58
0x0027c9be: mov    rbx,QWORD PTR [rip+0x227a8bb]        # 0x1424f7280
0x0027c9c5: mov    rdi,QWORD PTR [rip+0x227a8bc]        # 0x1424f7288
0x0027c9cc: nop    DWORD PTR [rax+0x0]
0x0027c9d0: cmp    rbx,rdi
0x0027c9d3: jae    0x14027ca49
0x0027c9d5: mov    r15,QWORD PTR [r14+rcx*8]
0x0027c9d9: mov    rsi,QWORD PTR [rbx]
0x0027c9dc: mov    r12,QWORD PTR [r15+0x10]
0x0027c9e0: mov    rdx,r15
0x0027c9e3: mov    r13,QWORD PTR [r15+0x18]
0x0027c9e7: cmp    r13,0xf
0x0027c9eb: jbe    0x14027c9f0
0x0027c9ed: mov    rdx,QWORD PTR [r15]
0x0027c9f0: mov    r8,QWORD PTR [rsi+0x10]
0x0027c9f4: mov    rcx,rsi
0x0027c9f7: cmp    QWORD PTR [rsi+0x18],0xf
0x0027c9fc: jbe    0x14027ca01
0x0027c9fe: mov    rcx,QWORD PTR [rsi]
0x0027ca01: cmp    r8,r12
0x0027ca04: jne    0x14027ca0f
0x0027ca06: call   0x14153ae14
0x0027ca0b: test   eax,eax
0x0027ca0d: je     0x14027ca1a
0x0027ca0f: add    rbx,0x8
0x0027ca13: mov    rcx,QWORD PTR [rsp+0x58]
0x0027ca18: jmp    0x14027c9d0
0x0027ca1a: lea    rax,[rbp-0x10]
0x0027ca1e: cmp    QWORD PTR [rsi+0x50],0x0
0x0027ca23: je     0x14027cabf
0x0027ca29: lea    rdx,[rsi+0x40]
0x0027ca2d: cmp    rax,rdx
0x0027ca30: je     0x14027ca49
0x0027ca32: mov    r8,QWORD PTR [rdx+0x10]
0x0027ca36: cmp    QWORD PTR [rdx+0x18],0xf
0x0027ca3b: jbe    0x14027ca40
0x0027ca3d: mov    rdx,QWORD PTR [rdx]
0x0027ca40: lea    rcx,[rbp-0x10]
0x0027ca44: call   0x14006f8d0
0x0027ca49: mov    r15d,DWORD PTR [rsp+0x48]
0x0027ca4e: mov    rsi,QWORD PTR [rsp+0x50]
0x0027ca53: mov    r12d,DWORD PTR [rsp+0x40]
0x0027ca58: mov    r14d,DWORD PTR [rsp+0x44]
0x0027ca5d: lea    rcx,[rbp-0x10]
0x0027ca61: call   0x14052d650
0x0027ca66: mov    rdi,QWORD PTR [rsp+0x58]
0x0027ca6b: mov    eax,r12d
0x0027ca6e: sub    eax,r14d
0x0027ca71: mov    ecx,DWORD PTR [rsp+0x4c]
0x0027ca75: add    ecx,0xfffffff2
0x0027ca78: add    eax,ecx
0x0027ca7a: movsxd rcx,eax
0x0027ca7d: mov    rdx,QWORD PTR [rbp+0x0]
0x0027ca81: mov    r14,QWORD PTR [rbp-0x78]
0x0027ca85: mov    r13,QWORD PTR [rbp-0x80]
0x0027ca89: cmp    rdx,rcx
0x0027ca8c: jb     0x14027cb57
0x0027ca92: mov    rax,QWORD PTR [rbp-0x68]
0x0027ca96: sub    rax,r14
0x0027ca99: lea    rbx,[r13-0xd]
0x0027ca9d: add    rbx,rax
0x0027caa0: js     0x14027cb18
0x0027caa2: cmp    rbx,rdx
0x0027caa5: ja     0x14027cb05
0x0027caa7: mov    QWORD PTR [rbp+0x0],rbx
0x0027caab: lea    rax,[rbp-0x10]
0x0027caaf: cmp    QWORD PTR [rbp+0x8],0xf
0x0027cab4: cmova  rax,QWORD PTR [rbp-0x10]
0x0027cab9: mov    BYTE PTR [rax+rbx*1],0x0
0x0027cabd: jmp    0x14027cb18
0x0027cabf: cmp    rax,r15
0x0027cac2: je     0x14027ca49
0x0027cac4: cmp    r13,0xf
0x0027cac8: jbe    0x14027cacd
0x0027caca: mov    r15,QWORD PTR [r15]
0x0027cacd: mov    r8,r12
0x0027cad0: mov    rdx,r15
0x0027cad3: jmp    0x14027ca40
0x0027cad8: add    rdx,0x20
0x0027cadc: lea    rax,[rbp-0x10]
0x0027cae0: cmp    rax,rdx
0x0027cae3: je     0x14027ca5d
0x0027cae9: mov    r8,QWORD PTR [rdx+0x10]
0x0027caed: cmp    QWORD PTR [rdx+0x18],0xf
0x0027caf2: jbe    0x14027caf7
0x0027caf4: mov    rdx,QWORD PTR [rdx]
0x0027caf7: lea    rcx,[rbp-0x10]
0x0027cafb: call   0x14006f8d0
0x0027cb00: jmp    0x14027ca5d
0x0027cb05: mov    rdx,rbx
0x0027cb08: sub    rdx,QWORD PTR [rbp+0x0]
0x0027cb0c: xor    r8d,r8d
0x0027cb0f: lea    rcx,[rbp-0x10]
0x0027cb13: call   0x1400e12b0
0x0027cb18: cmp    rbx,0x3
0x0027cb1c: jle    0x14027cb57
0x0027cb1e: lea    rax,[rbp-0x10]
0x0027cb22: cmp    QWORD PTR [rbp+0x8],0xf
0x0027cb27: cmova  rax,QWORD PTR [rbp-0x10]
0x0027cb2c: mov    BYTE PTR [rax+rbx*1-0x3],0x2e ; inline_fragment="."
0x0027cb31: lea    rax,[rbp-0x10]
0x0027cb35: cmp    QWORD PTR [rbp+0x8],0xf
0x0027cb3a: cmova  rax,QWORD PTR [rbp-0x10]
0x0027cb3f: mov    BYTE PTR [rax+rbx*1-0x2],0x2e ; inline_fragment="."
0x0027cb44: lea    rax,[rbp-0x10]
0x0027cb48: cmp    QWORD PTR [rbp+0x8],0xf
0x0027cb4d: cmova  rax,QWORD PTR [rbp-0x10]
0x0027cb52: mov    BYTE PTR [rax+rbx*1-0x1],0x2e ; inline_fragment="."
0x0027cb57: xor    r9d,r9d
0x0027cb5a: lea    rdx,[rbp-0x10]
0x0027cb5e: lea    rcx,[rip+0x23cd88b]        # 0x14264a3f0
0x0027cb65: call   0x140ad9960
0x0027cb6a: mov    eax,DWORD PTR [rsp+0x44]
0x0027cb6e: sub    eax,r12d
0x0027cb71: add    eax,0xa
0x0027cb74: mov    DWORD PTR [rip+0x23cd8fa],eax        # 0x14264a474
0x0027cb7a: lea    eax,[r15+0x2]
0x0027cb7e: mov    DWORD PTR [rip+0x23cd8f4],eax        # 0x14264a478
0x0027cb84: mov    ecx,DWORD PTR [rsi+0x4]
0x0027cb87: test   ecx,ecx
0x0027cb89: je     0x14027cc27
0x0027cb8f: cmp    ecx,0x1
0x0027cb92: jne    0x14027d1b1
0x0027cb98: mov    rax,QWORD PTR [rsi+0xf8]
0x0027cb9f: mov    rcx,QWORD PTR [rbp-0x60]
0x0027cba3: cmp    DWORD PTR [rcx+0x988],0x278d00
0x0027cbad: setge  r8b
0x0027cbb1: xor    edx,edx
0x0027cbb3: mov    rcx,QWORD PTR [rax+rdi*8]
0x0027cbb7: call   0x140c73230
0x0027cbbc: test   al,al
0x0027cbbe: jne    0x14027d1b1
0x0027cbc4: mov    DWORD PTR [rip+0x23cd8ae],0x1000004        # 0x14264a47c
0x0027cbce: xorps  xmm0,xmm0
0x0027cbd1: movups XMMWORD PTR [rbp-0x50],xmm0
0x0027cbd5: mov    ecx,0x20 ; inline_fragment=" "
0x0027cbda: call   0x1400707d0
0x0027cbdf: mov    QWORD PTR [rbp-0x50],rax
0x0027cbe3: mov    QWORD PTR [rbp-0x40],0x18
0x0027cbeb: mov    QWORD PTR [rbp-0x38],0x1f
0x0027cbf3: movups xmm0,XMMWORD PTR [rip+0x139f1f6]        # 0x14161bdf0 ; literal="You are not that hungry."
0x0027cbfa: movups XMMWORD PTR [rax],xmm0
0x0027cbfd: movsd  xmm0,QWORD PTR [rip+0x139f1fb]        # 0x14161be00 ; literal=" hungry."
0x0027cc05: movsd  QWORD PTR [rax+0x10],xmm0
0x0027cc0a: mov    BYTE PTR [rax+0x18],0x0
0x0027cc0e: xor    r9d,r9d
0x0027cc11: lea    rdx,[rbp-0x50]
0x0027cc15: lea    rcx,[rip+0x23cd7d4]        # 0x14264a3f0
0x0027cc1c: call   0x140ad9960
0x0027cc21: nop
0x0027cc22: jmp    0x14027cd80
0x0027cc27: mov    rax,QWORD PTR [rsi+0x28]
0x0027cc2b: mov    rdx,QWORD PTR [rsp+0x58]
0x0027cc30: mov    rbx,QWORD PTR [rax+rdx*8]
0x0027cc34: test   rbx,rbx
0x0027cc37: jne    0x14027cee4
0x0027cc3d: mov    rax,QWORD PTR [rsi+0x40]
0x0027cc41: mov    rcx,QWORD PTR [rax+rdx*8]
0x0027cc45: cmp    QWORD PTR [rcx+0x10],rbx
0x0027cc49: jne    0x14027cdc4
0x0027cc4f: mov    r8,QWORD PTR [rsi+0xf8]
0x0027cc56: mov    rax,QWORD PTR [rsi+0x100]
0x0027cc5d: sub    rax,r8
0x0027cc60: sar    rax,0x3
0x0027cc64: test   rax,rax
0x0027cc67: jne    0x14027ccd1
0x0027cc69: mov    DWORD PTR [rip+0x23cd809],0x1000004        # 0x14264a47c
0x0027cc73: xorps  xmm0,xmm0
0x0027cc76: movups XMMWORD PTR [rbp-0x50],xmm0
0x0027cc7a: mov    ecx,0x20 ; inline_fragment=" "
0x0027cc7f: call   0x1400707d0
0x0027cc84: mov    QWORD PTR [rbp-0x50],rax
0x0027cc88: mov    QWORD PTR [rbp-0x40],0x15
0x0027cc90: mov    QWORD PTR [rbp-0x38],0x1f
0x0027cc98: movups xmm0,XMMWORD PTR [rip+0x139f0a9]        # 0x14161bd48 ; literal="No carcass available."
0x0027cc9f: movups XMMWORD PTR [rax],xmm0
0x0027cca2: mov    ecx,DWORD PTR [rip+0x139f0b0]        # 0x14161bd58 ; literal="able."
0x0027cca8: mov    DWORD PTR [rax+0x10],ecx
0x0027ccab: movzx  ecx,BYTE PTR [rip+0x139f0aa]        # 0x14161bd5c ; literal="."
0x0027ccb2: mov    BYTE PTR [rax+0x14],cl
0x0027ccb5: mov    BYTE PTR [rax+0x15],bl
0x0027ccb8: xor    r9d,r9d
0x0027ccbb: lea    rdx,[rbp-0x50]
0x0027ccbf: lea    rcx,[rip+0x23cd72a]        # 0x14264a3f0
0x0027ccc6: call   0x140ad9960
0x0027cccb: nop
0x0027cccc: jmp    0x14027cd80
0x0027ccd1: mov    rdx,QWORD PTR [rsi+0x110]
0x0027ccd8: mov    rcx,QWORD PTR [rsi+0x118]
0x0027ccdf: sub    rcx,rdx
0x0027cce2: sar    rcx,0x3
0x0027cce6: test   rcx,rcx
0x0027cce9: je     0x14027cd0a
0x0027cceb: cmp    rax,0x1
0x0027ccef: jne    0x14027d1b1
0x0027ccf5: cmp    rcx,rax
0x0027ccf8: jne    0x14027d1b1
0x0027ccfe: mov    rax,QWORD PTR [rdx]
0x0027cd01: cmp    QWORD PTR [r8],rax
0x0027cd04: jne    0x14027d1b1
0x0027cd0a: mov    DWORD PTR [rip+0x23cd768],0x1000004        # 0x14264a47c
0x0027cd14: xorps  xmm0,xmm0
0x0027cd17: movups XMMWORD PTR [rbp-0x50],xmm0
0x0027cd1b: mov    ecx,0x20 ; inline_fragment=" "
0x0027cd20: call   0x1400707d0
0x0027cd25: mov    rdx,rax
0x0027cd28: mov    QWORD PTR [rbp-0x50],rax
0x0027cd2c: mov    QWORD PTR [rbp-0x40],0x1b
0x0027cd34: mov    QWORD PTR [rbp-0x38],0x1f
0x0027cd3c: movups xmm0,XMMWORD PTR [rip+0x139f01d]        # 0x14161bd60 ; literal="No butchery tool available."
0x0027cd43: movups XMMWORD PTR [rax],xmm0
0x0027cd46: movsd  xmm0,QWORD PTR [rip+0x139f022]        # 0x14161bd70 ; literal=" available."
0x0027cd4e: movsd  QWORD PTR [rax+0x10],xmm0
0x0027cd53: movzx  ecx,WORD PTR [rip+0x139f01e]        # 0x14161bd78 ; literal="le."
0x0027cd5a: mov    WORD PTR [rax+0x18],cx
0x0027cd5e: movzx  eax,BYTE PTR [rip+0x139f015]        # 0x14161bd7a ; literal="."
0x0027cd65: mov    BYTE PTR [rdx+0x1a],al
0x0027cd68: mov    BYTE PTR [rdx+0x1b],0x0
0x0027cd6c: xor    r9d,r9d
0x0027cd6f: lea    rdx,[rbp-0x50]
0x0027cd73: lea    rcx,[rip+0x23cd676]        # 0x14264a3f0
0x0027cd7a: call   0x140ad9960
0x0027cd7f: nop
0x0027cd80: mov    rdx,QWORD PTR [rbp-0x38]
0x0027cd84: cmp    rdx,0xf
0x0027cd88: jbe    0x14027d1b1
0x0027cd8e: mov    rcx,QWORD PTR [rbp-0x50]
0x0027cd92: inc    rdx
0x0027cd95: mov    rax,rcx
0x0027cd98: cmp    rdx,0x1000
0x0027cd9f: jb     0x14027cdba
0x0027cda1: add    rdx,0x27
0x0027cda5: mov    rcx,QWORD PTR [rcx-0x8]
0x0027cda9: sub    rax,rcx
0x0027cdac: add    rax,0xfffffffffffffff8
0x0027cdb0: cmp    rax,0x1f
0x0027cdb4: ja     0x14027d1fc
0x0027cdba: call   0x141539680
0x0027cdbf: jmp    0x14027d1b1
0x0027cdc4: xorps  xmm0,xmm0
0x0027cdc7: movups XMMWORD PTR [rbp+0x10],xmm0
0x0027cdcb: xor    r14d,r14d
0x0027cdce: mov    QWORD PTR [rbp+0x20],r14
0x0027cdd2: mov    r15d,0xf
0x0027cdd8: mov    QWORD PTR [rbp+0x28],r15
0x0027cddc: mov    BYTE PTR [rbp+0x10],r14b
0x0027cde0: mov    DWORD PTR [rip+0x23cd692],0x1000007        # 0x14264a47c
0x0027cdea: mov    rbx,QWORD PTR [rip+0x227a48f]        # 0x1424f7280
0x0027cdf1: mov    rdi,QWORD PTR [rip+0x227a490]        # 0x1424f7288
0x0027cdf8: cmp    rbx,rdi
0x0027cdfb: jae    0x14027ce76
0x0027cdfd: mov    rax,QWORD PTR [rsi+0x40]
0x0027ce01: mov    rdx,QWORD PTR [rax+rdx*8]
0x0027ce05: mov    rsi,QWORD PTR [rbx]
0x0027ce08: mov    rax,QWORD PTR [rdx+0x10]
0x0027ce0c: cmp    QWORD PTR [rdx+0x18],0xf
0x0027ce11: jbe    0x14027ce16
0x0027ce13: mov    rdx,QWORD PTR [rdx]
0x0027ce16: mov    r8,QWORD PTR [rsi+0x10]
0x0027ce1a: mov    rcx,rsi
0x0027ce1d: cmp    QWORD PTR [rsi+0x18],0xf
0x0027ce22: jbe    0x14027ce27
0x0027ce24: mov    rcx,QWORD PTR [rsi]
0x0027ce27: cmp    r8,rax
0x0027ce2a: jne    0x14027ce35
0x0027ce2c: call   0x14153ae14
0x0027ce31: test   eax,eax
0x0027ce33: je     0x14027ce45
0x0027ce35: add    rbx,0x8
0x0027ce39: mov    rsi,QWORD PTR [rsp+0x50]
0x0027ce3e: mov    rdx,QWORD PTR [rsp+0x58]
0x0027ce43: jmp    0x14027cdf8
0x0027ce45: lea    rdx,[rsi+0x68]
0x0027ce49: lea    rax,[rbp+0x10]
0x0027ce4d: cmp    rax,rdx
0x0027ce50: je     0x14027ce71
0x0027ce52: mov    r8,QWORD PTR [rdx+0x10]
0x0027ce56: cmp    QWORD PTR [rdx+0x18],0xf
0x0027ce5b: jbe    0x14027ce60
0x0027ce5d: mov    rdx,QWORD PTR [rdx]
0x0027ce60: lea    rcx,[rbp+0x10]
0x0027ce64: call   0x14006f8d0
0x0027ce69: mov    r15,QWORD PTR [rbp+0x28]
0x0027ce6d: mov    r14,QWORD PTR [rbp+0x20]
0x0027ce71: mov    rsi,QWORD PTR [rsp+0x50]
0x0027ce76: sub    r12d,DWORD PTR [rsp+0x44]
0x0027ce7b: mov    eax,DWORD PTR [rsp+0x4c]
0x0027ce7f: add    eax,0xfffffff6
0x0027ce82: add    eax,r12d
0x0027ce85: movsxd rcx,eax
0x0027ce88: cmp    r14,rcx
0x0027ce8b: jbe    0x14027cec7
0x0027ce8d: mov    rdx,QWORD PTR [rbp-0x68]
0x0027ce91: sub    rdx,QWORD PTR [rbp-0x78]
0x0027ce95: add    rdx,0xfffffffffffffff6
0x0027ce99: add    rdx,r13
0x0027ce9c: cmp    rdx,r14
0x0027ce9f: ja     0x14027ceb8
0x0027cea1: mov    QWORD PTR [rbp+0x20],rdx
0x0027cea5: lea    rax,[rbp+0x10]
0x0027cea9: cmp    r15,0xf
0x0027cead: cmova  rax,QWORD PTR [rbp+0x10]
0x0027ceb2: mov    BYTE PTR [rax+rdx*1],0x0
0x0027ceb6: jmp    0x14027cec7
0x0027ceb8: sub    rdx,r14
0x0027cebb: xor    r8d,r8d
0x0027cebe: lea    rcx,[rbp+0x10]
0x0027cec2: call   0x1400e12b0
0x0027cec7: xor    r9d,r9d
0x0027ceca: lea    rdx,[rbp+0x10]
0x0027cece: lea    rcx,[rip+0x23cd51b]        # 0x14264a3f0
0x0027ced5: call   0x140ad9960
0x0027ceda: nop
0x0027cedb: lea    rcx,[rbp+0x10]
0x0027cedf: jmp    0x14027d1ac
0x0027cee4: mov    DWORD PTR [rip+0x23cd58e],0x1000007        # 0x14264a47c
0x0027ceee: xorps  xmm0,xmm0
0x0027cef1: movups XMMWORD PTR [rbp-0x30],xmm0
0x0027cef5: mov    r8d,0x7
0x0027cefb: mov    QWORD PTR [rbp-0x20],r8
0x0027ceff: mov    QWORD PTR [rbp-0x18],0xf
0x0027cf07: mov    rax,QWORD PTR [rip+0x139ef22]        # 0x14161be30 ; literal="Needs: "
0x0027cf0e: mov    DWORD PTR [rbp-0x30],eax
0x0027cf11: movzx  eax,WORD PTR [rip+0x139ef1c]        # 0x14161be34 ; literal="s: "
0x0027cf18: mov    WORD PTR [rbp-0x2c],ax
0x0027cf1c: movzx  eax,BYTE PTR [rip+0x139ef13]        # 0x14161be36 ; literal=" "
0x0027cf23: mov    BYTE PTR [rbp-0x2a],al
0x0027cf26: mov    BYTE PTR [rbp-0x29],0x0
0x0027cf2a: mov    rdx,QWORD PTR [rbx+0x50]
0x0027cf2e: mov    rax,QWORD PTR [rbx+0x58]
0x0027cf32: sub    rax,rdx
0x0027cf35: sar    rax,0x3
0x0027cf39: test   rax,rax
0x0027cf3c: jne    0x14027cf59
0x0027cf3e: mov    r8d,0x8
0x0027cf44: lea    rdx,[rip+0x139eeed]        # 0x14161be38 ; literal="nothing."
0x0027cf4b: lea    rcx,[rbp-0x30]
0x0027cf4f: call   0x14006fa10
0x0027cf54: jmp    0x14027d13f
0x0027cf59: xor    r15d,r15d
0x0027cf5c: mov    edi,r15d
0x0027cf5f: test   rax,rax
0x0027cf62: je     0x14027d143
0x0027cf68: mov    esi,r15d
0x0027cf6b: nop    DWORD PTR [rax+rax*1+0x0]
0x0027cf70: xorps  xmm0,xmm0
0x0027cf73: movups XMMWORD PTR [rbp-0x50],xmm0
0x0027cf77: mov    QWORD PTR [rbp-0x40],r15
0x0027cf7b: mov    QWORD PTR [rbp-0x38],0xf
0x0027cf83: mov    BYTE PTR [rbp-0x50],0x0
0x0027cf87: mov    rcx,QWORD PTR [rdx+rsi*1]
0x0027cf8b: mov    rax,QWORD PTR [rcx]
0x0027cf8e: mov    r8d,DWORD PTR [rbx+0x118]
0x0027cf95: lea    rdx,[rbp-0x50]
0x0027cf99: call   QWORD PTR [rax+0x38]
0x0027cf9c: lea    rdx,[rbp-0x50]
0x0027cfa0: cmp    QWORD PTR [rbp-0x38],0xf
0x0027cfa5: cmova  rdx,QWORD PTR [rbp-0x50]
0x0027cfaa: mov    r8,QWORD PTR [rbp-0x40]
0x0027cfae: lea    rcx,[rbp-0x30]
0x0027cfb2: call   0x14006fa10
0x0027cfb7: mov    r8d,0x2
0x0027cfbd: lea    rdx,[rip+0x139ee08]        # 0x14161bdcc ; literal=" ["
0x0027cfc4: lea    rcx,[rbp-0x30]
0x0027cfc8: call   0x14006fa10
0x0027cfcd: mov    rax,QWORD PTR [rbx+0x50]
0x0027cfd1: mov    rcx,QWORD PTR [rax+rsi*1]
0x0027cfd5: mov    ecx,DWORD PTR [rcx+0x28]
0x0027cfd8: cmp    ecx,0x1
0x0027cfdb: jle    0x14027d06e
0x0027cfe1: xorps  xmm0,xmm0
0x0027cfe4: movups XMMWORD PTR [rbp+0x30],xmm0
0x0027cfe8: mov    QWORD PTR [rbp+0x40],r15
0x0027cfec: mov    QWORD PTR [rbp+0x48],0xf
0x0027cff4: mov    BYTE PTR [rbp+0x30],0x0
0x0027cff8: lea    rdx,[rbp+0x30]
0x0027cffc: call   0x14052c2b0
0x0027d001: lea    rdx,[rbp+0x30]
0x0027d005: cmp    QWORD PTR [rbp+0x48],0xf
0x0027d00a: cmova  rdx,QWORD PTR [rbp+0x30]
0x0027d00f: mov    r8,QWORD PTR [rbp+0x40]
0x0027d013: lea    rcx,[rbp-0x30]
0x0027d017: call   0x14006fa10
0x0027d01c: nop
0x0027d01d: mov    rdx,QWORD PTR [rbp+0x48]
0x0027d021: cmp    rdx,0xf
0x0027d025: jbe    0x14027d058
0x0027d027: inc    rdx
0x0027d02a: mov    rcx,QWORD PTR [rbp+0x30]
0x0027d02e: mov    rax,rcx
0x0027d031: cmp    rdx,0x1000
0x0027d038: jb     0x14027d053
0x0027d03a: add    rdx,0x27
0x0027d03e: mov    rcx,QWORD PTR [rcx-0x8]
0x0027d042: sub    rax,rcx
0x0027d045: add    rax,0xfffffffffffffff8
0x0027d049: cmp    rax,0x1f
0x0027d04d: ja     0x14027d203
0x0027d053: call   0x141539680
0x0027d058: mov    r8d,0x1
0x0027d05e: lea    rdx,[rip+0x136e4af]        # 0x1415eb514 ; literal="/"
0x0027d065: lea    rcx,[rbp-0x30]
0x0027d069: call   0x14006fa10
0x0027d06e: mov    rax,QWORD PTR [rbx+0x50]
0x0027d072: mov    rcx,QWORD PTR [rsi+rax*1]
0x0027d076: mov    eax,DWORD PTR [rcx+0x2c]
0x0027d079: and    eax,0x1
0x0027d07c: lea    r8,[rax*4+0x8]
0x0027d084: lea    rdx,[rip+0x139ed45]        # 0x14161bdd0 ; literal="not consumed"
0x0027d08b: lea    rax,[rip+0x139ed4e]        # 0x14161bde0 ; literal="consumed"
0x0027d092: cmove  rdx,rax
0x0027d096: lea    rcx,[rbp-0x30]
0x0027d09a: call   0x14006fa10
0x0027d09f: mov    r8d,0x1
0x0027d0a5: lea    rdx,[rip+0x13805e4]        # 0x1415fd690 ; literal="]"
0x0027d0ac: lea    rcx,[rbp-0x30]
0x0027d0b0: call   0x14006fa10
0x0027d0b5: mov    rax,QWORD PTR [rbx+0x58]
0x0027d0b9: sub    rax,QWORD PTR [rbx+0x50]
0x0027d0bd: sar    rax,0x3
0x0027d0c1: dec    eax
0x0027d0c3: cmp    edi,eax
0x0027d0c5: je     0x14027d0de
0x0027d0c7: mov    r8d,0x2
0x0027d0cd: lea    rdx,[rip+0x136c004]        # 0x1415e90d8 ; literal=", "
0x0027d0d4: lea    rcx,[rbp-0x30]
0x0027d0d8: call   0x14006fa10
0x0027d0dd: nop
0x0027d0de: mov    rdx,QWORD PTR [rbp-0x38]
0x0027d0e2: cmp    rdx,0xf
0x0027d0e6: jbe    0x14027d119
0x0027d0e8: inc    rdx
0x0027d0eb: mov    rcx,QWORD PTR [rbp-0x50]
0x0027d0ef: mov    rax,rcx
0x0027d0f2: cmp    rdx,0x1000
0x0027d0f9: jb     0x14027d114
0x0027d0fb: add    rdx,0x27
0x0027d0ff: mov    rcx,QWORD PTR [rcx-0x8]
0x0027d103: sub    rax,rcx
0x0027d106: add    rax,0xfffffffffffffff8
0x0027d10a: cmp    rax,0x1f
0x0027d10e: ja     0x14027d20a
0x0027d114: call   0x141539680
0x0027d119: inc    edi
0x0027d11b: add    rsi,0x8
0x0027d11f: mov    rdx,QWORD PTR [rbx+0x50]
0x0027d123: mov    rcx,QWORD PTR [rbx+0x58]
0x0027d127: sub    rcx,rdx
0x0027d12a: sar    rcx,0x3
0x0027d12e: movsxd rax,edi
0x0027d131: cmp    rax,rcx
0x0027d134: jb     0x14027cf70
0x0027d13a: mov    rsi,QWORD PTR [rsp+0x50]
0x0027d13f: mov    r8,QWORD PTR [rbp-0x20]
0x0027d143: sub    r12d,DWORD PTR [rsp+0x44]
0x0027d148: mov    eax,DWORD PTR [rsp+0x4c]
0x0027d14c: add    eax,0xfffffff6
0x0027d14f: add    eax,r12d
0x0027d152: movsxd rcx,eax
0x0027d155: cmp    r8,rcx
0x0027d158: jbe    0x14027d194
0x0027d15a: mov    rdx,QWORD PTR [rbp-0x68]
0x0027d15e: sub    rdx,r14
0x0027d161: add    rdx,0xfffffffffffffff6
0x0027d165: add    rdx,r13
0x0027d168: cmp    rdx,r8
0x0027d16b: ja     0x14027d185
0x0027d16d: mov    QWORD PTR [rbp-0x20],rdx
0x0027d171: lea    rax,[rbp-0x30]
0x0027d175: cmp    QWORD PTR [rbp-0x18],0xf
0x0027d17a: cmova  rax,QWORD PTR [rbp-0x30]
0x0027d17f: mov    BYTE PTR [rax+rdx*1],0x0
0x0027d183: jmp    0x14027d194
0x0027d185: sub    rdx,r8
0x0027d188: xor    r8d,r8d
0x0027d18b: lea    rcx,[rbp-0x30]
0x0027d18f: call   0x1400e12b0
0x0027d194: xor    r9d,r9d
0x0027d197: lea    rdx,[rbp-0x30]
0x0027d19b: lea    rcx,[rip+0x23cd24e]        # 0x14264a3f0
0x0027d1a2: call   0x140ad9960
0x0027d1a7: nop
0x0027d1a8: lea    rcx,[rbp-0x30]
0x0027d1ac: call   0x14006f850
0x0027d1b1: mov    edi,DWORD PTR [rsp+0x48]
0x0027d1b5: add    edi,0x3
0x0027d1b8: mov    DWORD PTR [rsp+0x48],edi
0x0027d1bc: lea    rcx,[rbp-0x10]
0x0027d1c0: call   0x14006f850
0x0027d1c5: mov    edx,DWORD PTR [rsp+0x68]
0x0027d1c9: inc    edx
0x0027d1cb: mov    DWORD PTR [rsp+0x68],edx
0x0027d1cf: mov    r8,QWORD PTR [rsp+0x58]
0x0027d1d4: inc    r8
0x0027d1d7: mov    QWORD PTR [rsp+0x58],r8
0x0027d1dc: mov    ebx,DWORD PTR [rbp-0x70]
0x0027d1df: mov    eax,DWORD PTR [rsp+0x70]
0x0027d1e3: add    eax,ebx
0x0027d1e5: cmp    edx,eax
0x0027d1e7: jge    0x14027d211
0x0027d1e9: mov    r12d,DWORD PTR [rsp+0x4c]
0x0027d1ee: mov    r14d,DWORD PTR [rsp+0x44]
0x0027d1f3: mov    rax,QWORD PTR [rbp-0x58]
0x0027d1f7: jmp    0x14027c6b0
0x0027d1fc: call   QWORD PTR [rip+0x1368926]        # 0x1415e5b28
0x0027d202: nop
0x0027d203: call   QWORD PTR [rip+0x136891f]        # 0x1415e5b28
0x0027d209: nop
0x0027d20a: call   QWORD PTR [rip+0x1368918]        # 0x1415e5b28
0x0027d210: nop
0x0027d211: mov    r13d,DWORD PTR [rsp+0x6c]
0x0027d216: mov    r15d,DWORD PTR [rsp+0x60]
0x0027d21b: cmp    r13d,ebx
0x0027d21e: jle    0x14027d285
0x0027d220: mov    QWORD PTR [rbp-0x38],0x0
0x0027d228: mov    eax,DWORD PTR [rsi+0x24]
0x0027d22b: mov    DWORD PTR [rbp-0x50],eax
0x0027d22e: mov    DWORD PTR [rbp-0x4c],0x0
0x0027d235: lea    eax,[r13-0x1]
0x0027d239: mov    DWORD PTR [rbp-0x48],eax
0x0027d23c: lea    eax,[r15+0x1]
0x0027d240: mov    DWORD PTR [rbp-0x40],eax
0x0027d243: lea    ecx,[rbx-0x1]
0x0027d246: lea    ecx,[r15+rcx*2]
0x0027d24a: add    ecx,ebx
0x0027d24c: mov    DWORD PTR [rbp-0x3c],ecx
0x0027d24f: mov    DWORD PTR [rbp-0x44],ebx
0x0027d252: lea    rcx,[rbp-0x50]
0x0027d256: call   0x1400bb3b0
0x0027d25b: mov    r9d,DWORD PTR [rsp+0x4c]
0x0027d260: inc    r9d
0x0027d263: mov    DWORD PTR [rsp+0x28],0x0
0x0027d26b: movzx  eax,BYTE PTR [rsi+0x20]
0x0027d26f: mov    BYTE PTR [rsp+0x20],al
0x0027d273: mov    r8d,DWORD PTR [rsp+0x74]
0x0027d278: mov    edx,DWORD PTR [rsp+0x78]
0x0027d27c: lea    rcx,[rbp-0x50]
0x0027d280: call   0x14140f4d0
0x0027d285: mov    rcx,QWORD PTR [rbp+0x50]
0x0027d289: xor    rcx,rsp
0x0027d28c: call   0x141539660
0x0027d291: add    rsp,0x168
0x0027d298: pop    r15
0x0027d29a: pop    r14
0x0027d29c: pop    r13
0x0027d29e: pop    r12
0x0027d2a0: pop    rdi
0x0027d2a1: pop    rsi
0x0027d2a2: pop    rbx
0x0027d2a3: pop    rbp
0x0027d2a4: ret
0x0027d2a5: call   0x140065890
0x0027d2aa: int3
