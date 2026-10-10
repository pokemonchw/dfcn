# classic PE:6a70b91c:0270a000; inventory-selection-renderer; RVA 0x87f270..0x881794
0x0087f270: rex push rbp
0x0087f272: push   rbx
0x0087f273: push   rsi
0x0087f274: push   rdi
0x0087f275: push   r12
0x0087f277: push   r13
0x0087f279: push   r14
0x0087f27b: push   r15
0x0087f27d: lea    rbp,[rsp-0x8]
0x0087f282: sub    rsp,0x108
0x0087f289: mov    rax,QWORD PTR [rip+0x1016db0]        # 0x141896040
0x0087f290: xor    rax,rsp
0x0087f293: mov    QWORD PTR [rbp-0x10],rax
0x0087f297: mov    DWORD PTR [rbp-0x7c],edx
0x0087f29a: mov    r10,rcx
0x0087f29d: mov    QWORD PTR [rsp+0x48],rcx
0x0087f2a2: mov    r11d,0xffffffff
0x0087f2a8: mov    DWORD PTR [rsp+0x50],r11d
0x0087f2ad: mov    DWORD PTR [rsp+0x44],r11d
0x0087f2b2: cmp    BYTE PTR [rip+0x1b0b20c],0x0        # 0x14238a4c5
0x0087f2b9: je     0x14087f2cf
0x0087f2bb: mov    eax,DWORD PTR [rip+0x1dc51df]        # 0x1426444a0
0x0087f2c1: mov    DWORD PTR [rsp+0x50],eax
0x0087f2c5: mov    eax,DWORD PTR [rip+0x1dc51d9]        # 0x1426444a4
0x0087f2cb: mov    DWORD PTR [rsp+0x44],eax
0x0087f2cf: lea    eax,[r9+r8*1]
0x0087f2d3: cdq
0x0087f2d4: sub    eax,edx
0x0087f2d6: sar    eax,1
0x0087f2d8: lea    r15d,[rax-0x2d]
0x0087f2dc: mov    DWORD PTR [rsp+0x5c],r15d
0x0087f2e1: lea    r12d,[rax+0x2d]
0x0087f2e5: mov    DWORD PTR [rsp+0x58],r12d
0x0087f2ea: mov    r13d,0x6
0x0087f2f0: mov    DWORD PTR [rsp+0x54],r13d
0x0087f2f5: mov    esi,DWORD PTR [rip+0x1b4837d]        # 0x1423c7678
0x0087f2fb: add    esi,0xfffffffb
0x0087f2fe: mov    DWORD PTR [rsp+0x74],esi
0x0087f302: mov    ecx,0x27
0x0087f307: mov    rax,QWORD PTR [r10+0x20]
0x0087f30b: sub    rax,QWORD PTR [r10+0x18]
0x0087f30f: sar    rax,0x3
0x0087f313: add    eax,0x2
0x0087f316: lea    eax,[rax+rax*2]
0x0087f319: cmp    eax,ecx
0x0087f31b: cmovl  ecx,eax
0x0087f31e: lea    eax,[rsi-0x5]
0x0087f321: cmp    eax,ecx
0x0087f323: jle    0x14087f333
0x0087f325: mov    r13d,esi
0x0087f328: sub    r13d,ecx
0x0087f32b: inc    r13d
0x0087f32e: mov    DWORD PTR [rsp+0x54],r13d
0x0087f333: mov    edi,r13d
0x0087f336: cmp    r13d,esi
0x0087f339: jg     0x14087f407
0x0087f33f: nop
0x0087f340: mov    ebx,r15d
0x0087f343: cmp    r15d,r12d
0x0087f346: jg     0x14087f3fd
0x0087f34c: nop    DWORD PTR [rax+0x0]
0x0087f350: mov    DWORD PTR [rip+0x1dc500e],ebx        # 0x142644364
0x0087f356: mov    DWORD PTR [rip+0x1dc500c],edi        # 0x142644368
0x0087f35c: xor    r8d,r8d
0x0087f35f: xor    edx,edx
0x0087f361: lea    rcx,[rip+0x1dc4f78]        # 0x1426442e0
0x0087f368: call   0x1400bb120
0x0087f36d: cmp    edi,r13d
0x0087f370: jne    0x14087f39b
0x0087f372: cmp    ebx,r15d
0x0087f375: jne    0x14087f37f
0x0087f377: mov    edx,DWORD PTR [rip+0x1dc6887]        # 0x142645c04
0x0087f37d: jmp    0x14087f3e6
0x0087f37f: lea    rcx,[rip+0x1dc4f5a]        # 0x1426442e0
0x0087f386: cmp    ebx,r12d
0x0087f389: jne    0x14087f393
0x0087f38b: mov    edx,DWORD PTR [rip+0x1dc688b]        # 0x142645c1c
0x0087f391: jmp    0x14087f3ed
0x0087f393: mov    edx,DWORD PTR [rip+0x1dc6877]        # 0x142645c10
0x0087f399: jmp    0x14087f3ed
0x0087f39b: cmp    edi,esi
0x0087f39d: jne    0x14087f3c8
0x0087f39f: cmp    ebx,r15d
0x0087f3a2: jne    0x14087f3ac
0x0087f3a4: mov    edx,DWORD PTR [rip+0x1dc6862]        # 0x142645c0c
0x0087f3aa: jmp    0x14087f3e6
0x0087f3ac: lea    rcx,[rip+0x1dc4f2d]        # 0x1426442e0
0x0087f3b3: cmp    ebx,r12d
0x0087f3b6: jne    0x14087f3c0
0x0087f3b8: mov    edx,DWORD PTR [rip+0x1dc6866]        # 0x142645c24
0x0087f3be: jmp    0x14087f3ed
0x0087f3c0: mov    edx,DWORD PTR [rip+0x1dc6852]        # 0x142645c18
0x0087f3c6: jmp    0x14087f3ed
0x0087f3c8: cmp    ebx,r15d
0x0087f3cb: jne    0x14087f3d5
0x0087f3cd: mov    edx,DWORD PTR [rip+0x1dc6835]        # 0x142645c08
0x0087f3d3: jmp    0x14087f3e6
0x0087f3d5: cmp    ebx,r12d
0x0087f3d8: mov    edx,DWORD PTR [rip+0x1dc6842]        # 0x142645c20
0x0087f3de: je     0x14087f3e6
0x0087f3e0: mov    edx,DWORD PTR [rip+0x1dc682e]        # 0x142645c14
0x0087f3e6: lea    rcx,[rip+0x1dc4ef3]        # 0x1426442e0
0x0087f3ed: call   0x140ad7b10
0x0087f3f2: inc    ebx
0x0087f3f4: cmp    ebx,r12d
0x0087f3f7: jle    0x14087f350
0x0087f3fd: inc    edi
0x0087f3ff: cmp    edi,esi
0x0087f401: jle    0x14087f340
0x0087f407: xor    edi,edi
0x0087f409: nop    DWORD PTR [rax+0x0]
0x0087f410: lea    esi,[r12-0x8]
0x0087f415: add    esi,edi
0x0087f417: lea    r11,[rip+0x1dcf6de]        # 0x14264eafc
0x0087f41e: lea    ebx,[r13+0x1]
0x0087f422: nop    DWORD PTR [rax+0x0]
0x0087f426: data16 nop WORD PTR [rax+rax*1+0x0]
0x0087f430: mov    DWORD PTR [rip+0x1dc4f2e],esi        # 0x142644364
0x0087f436: mov    DWORD PTR [rip+0x1dc4f2c],ebx        # 0x142644368
0x0087f43c: test   edi,edi
0x0087f43e: jne    0x14087f446
0x0087f440: mov    edx,DWORD PTR [r11-0x18]
0x0087f444: jmp    0x14087f454
0x0087f446: cmp    edi,0x7
0x0087f449: jne    0x14087f450
0x0087f44b: mov    edx,DWORD PTR [r11]
0x0087f44e: jmp    0x14087f454
0x0087f450: mov    edx,DWORD PTR [r11-0xc]
0x0087f454: lea    rcx,[rip+0x1dc4e85]        # 0x1426442e0
0x0087f45b: call   0x140ad7b10
0x0087f460: inc    ebx
0x0087f462: add    r11,0x4
0x0087f466: lea    rax,[rip+0x1dcf69b]        # 0x14264eb08
0x0087f46d: cmp    r11,rax
0x0087f470: jl     0x14087f430
0x0087f472: inc    edi
0x0087f474: cmp    edi,0x8
0x0087f477: jl     0x14087f410
0x0087f479: mov    DWORD PTR [rip+0x1dc4ee9],0x1010007        # 0x14264436c
0x0087f483: lea    eax,[r12-0x6]
0x0087f488: mov    DWORD PTR [rip+0x1dc4ed6],eax        # 0x142644364
0x0087f48e: lea    edi,[r13+0x2]
0x0087f492: mov    DWORD PTR [rsp+0x40],edi
0x0087f496: mov    DWORD PTR [rip+0x1dc4ecc],edi        # 0x142644368
0x0087f49c: xorps  xmm0,xmm0
0x0087f49f: movups XMMWORD PTR [rbp-0x58],xmm0
0x0087f4a3: movdqa xmm1,XMMWORD PTR [rip+0xf065b5]        # 0x141785a60
0x0087f4ab: movdqu XMMWORD PTR [rbp-0x48],xmm1
0x0087f4b0: mov    DWORD PTR [rbp-0x58],0x656e6f44 ; inline="Done"
0x0087f4b7: mov    BYTE PTR [rbp-0x54],0x0
0x0087f4bb: xor    r9d,r9d
0x0087f4be: lea    rdx,[rbp-0x58]
0x0087f4c2: lea    rcx,[rip+0x1dc4e17]        # 0x1426442e0
0x0087f4c9: call   0x140ad69a0
0x0087f4ce: nop
0x0087f4cf: mov    rdx,QWORD PTR [rbp-0x40]
0x0087f4d3: cmp    rdx,0xf
0x0087f4d7: jbe    0x14087f50a
0x0087f4d9: inc    rdx
0x0087f4dc: mov    rcx,QWORD PTR [rbp-0x58]
0x0087f4e0: mov    rax,rcx
0x0087f4e3: cmp    rdx,0x1000
0x0087f4ea: jb     0x14087f505
0x0087f4ec: add    rdx,0x27
0x0087f4f0: mov    rcx,QWORD PTR [rcx-0x8]
0x0087f4f4: sub    rax,rcx
0x0087f4f7: add    rax,0xfffffffffffffff8
0x0087f4fb: cmp    rax,0x1f
0x0087f4ff: ja     0x14087ff64
0x0087f505: call   0x1415345f0
0x0087f50a: mov    DWORD PTR [rip+0x1dc4e58],0x1010007        # 0x14264436c
0x0087f514: lea    eax,[r15+0x2]
0x0087f518: mov    DWORD PTR [rip+0x1dc4e46],eax        # 0x142644364
0x0087f51e: mov    DWORD PTR [rip+0x1dc4e44],edi        # 0x142644368
0x0087f524: mov    r14,QWORD PTR [rsp+0x48]
0x0087f529: movsxd rax,DWORD PTR [r14+0x4]
0x0087f52d: cmp    eax,0xa
0x0087f530: ja     0x14087fbdf
0x0087f536: lea    rdx,[rip+0xffffffffff780ac3]        # 0x140000000
0x0087f53d: mov    ecx,DWORD PTR [rdx+rax*4+0x881794]
0x0087f544: add    rcx,rdx
0x0087f547: jmp    rcx
0x0087f549: xorps  xmm0,xmm0
0x0087f54c: movups XMMWORD PTR [rbp-0x58],xmm0
0x0087f550: movdqa xmm1,XMMWORD PTR [rip+0xf065a8]        # 0x141785b00
0x0087f558: movdqu XMMWORD PTR [rbp-0x48],xmm1
0x0087f55d: movsd  xmm0,QWORD PTR [rip+0xe3007b]        # 0x1416af5e0 ; literal="Your inventory"
0x0087f565: movsd  QWORD PTR [rbp-0x58],xmm0
0x0087f56a: mov    eax,DWORD PTR [rip+0xe30078]        # 0x1416af5e8 ; literal="entory"
0x0087f570: mov    DWORD PTR [rbp-0x50],eax
0x0087f573: movzx  eax,WORD PTR [rip+0xe30072]        # 0x1416af5ec ; literal="ry"
0x0087f57a: mov    WORD PTR [rbp-0x4c],ax
0x0087f57e: mov    BYTE PTR [rbp-0x4a],0x0
0x0087f582: xor    r9d,r9d
0x0087f585: lea    rdx,[rbp-0x58]
0x0087f589: lea    rcx,[rip+0x1dc4d50]        # 0x1426442e0
0x0087f590: call   0x140ad69a0
0x0087f595: nop
0x0087f596: lea    rcx,[rbp-0x58]
0x0087f59a: call   0x14006f7e0
0x0087f59f: mov    r13,QWORD PTR [rip+0x1b5fa5a]        # 0x1423df000
0x0087f5a6: test   DWORD PTR [r13+0x110],0x200
0x0087f5b1: je     0x14087f619
0x0087f5b3: mov    r10d,DWORD PTR [r13+0x3dc]
0x0087f5ba: mov    r8,QWORD PTR [rip+0x1b5f9e7]        # 0x1423defa8
0x0087f5c1: mov    rbx,QWORD PTR [rip+0x1b5f9d8]        # 0x1423defa0
0x0087f5c8: sub    r8,rbx
0x0087f5cb: sar    r8,0x3
0x0087f5cf: test   r8d,r8d
0x0087f5d2: je     0x14087f619
0x0087f5d4: cmp    r10d,0xffffffff
0x0087f5d8: je     0x14087f619
0x0087f5da: xor    edx,edx
0x0087f5dc: sub    r8d,0x1
0x0087f5e0: js     0x14087f60c
0x0087f5e2: lea    ecx,[rdx+r8*1]
0x0087f5e6: sar    ecx,1
0x0087f5e8: movsxd rax,ecx
0x0087f5eb: mov    r11,QWORD PTR [rbx+rax*8]
0x0087f5ef: cmp    DWORD PTR [r11+0x130],r10d
0x0087f5f6: je     0x14087f60f
0x0087f5f8: lea    eax,[rcx+0x1]
0x0087f5fb: cmovle edx,eax
0x0087f5fe: lea    eax,[rcx-0x1]
0x0087f601: cmovle eax,r8d
0x0087f605: mov    r8d,eax
0x0087f608: cmp    edx,eax
0x0087f60a: jle    0x14087f5e2
0x0087f60c: xor    r11d,r11d
0x0087f60f: test   r11,r11
0x0087f612: je     0x14087f619
0x0087f614: mov    r13,r11
0x0087f617: jmp    0x14087f622
0x0087f619: test   r13,r13
0x0087f61c: je     0x14087fbdf
0x0087f622: mov    rcx,r13
0x0087f625: call   0x141380a80
0x0087f62a: mov    eax,0xffff8ad0
0x0087f62f: cmp    WORD PTR [r13+0x4cc],ax
0x0087f637: jne    0x14087f68a
0x0087f639: cmp    DWORD PTR [r13+0x4d4],0xffffffff
0x0087f641: jne    0x14087f68a
0x0087f643: test   BYTE PTR [r13+0x114],0x1
0x0087f64b: jne    0x14087f683
0x0087f64d: test   DWORD PTR [r13+0x118],0x40000
0x0087f658: jne    0x14087f683
0x0087f65a: test   DWORD PTR [r13+0x110],0x8000
0x0087f665: je     0x14087f66e
0x0087f667: mov    ebx,0x3
0x0087f66c: jmp    0x14087f68f
0x0087f66e: xor    ebx,ebx
0x0087f670: mov    rcx,r13
0x0087f673: call   0x1407dde90
0x0087f678: test   al,al
0x0087f67a: je     0x14087f68f
0x0087f67c: mov    ebx,0x1
0x0087f681: jmp    0x14087f68f
0x0087f683: mov    ebx,0x2
0x0087f688: jmp    0x14087f68f
0x0087f68a: mov    ebx,0x4
0x0087f68f: movsxd rdx,DWORD PTR [r13+rbx*4+0xde8]
0x0087f697: xor    r8d,r8d
0x0087f69a: test   edx,edx
0x0087f69c: js     0x14087f6cc
0x0087f69e: lea    rcx,[rbx+rbx*2]
0x0087f6a2: mov    rax,QWORD PTR [r13+0x5f8]
0x0087f6a9: mov    r9,QWORD PTR [rax+rcx*8+0xe8]
0x0087f6b1: mov    r10,rdx
0x0087f6b4: mov    rdx,QWORD PTR [rax+rcx*8+0xf0]
0x0087f6bc: sub    rdx,r9
0x0087f6bf: sar    rdx,0x3
0x0087f6c3: cmp    r10,rdx
0x0087f6c6: jae    0x14087f6cc
0x0087f6c8: mov    r8,QWORD PTR [r9+r10*8]
0x0087f6cc: mov    ecx,DWORD PTR [r13+0x604]
0x0087f6d3: sub    ecx,DWORD PTR [r13+0x614]
0x0087f6da: mov    r9,QWORD PTR [r13+0x8e8]
0x0087f6e1: test   r9,r9
0x0087f6e4: je     0x14087f701
0x0087f6e6: imul   ecx,DWORD PTR [r9]
0x0087f6ea: mov    eax,0x51eb851f
0x0087f6ef: imul   ecx
0x0087f6f1: mov    ecx,edx
0x0087f6f3: sar    ecx,0x5
0x0087f6f6: mov    eax,ecx
0x0087f6f8: shr    eax,0x1f
0x0087f6fb: add    ecx,eax
0x0087f6fd: add    ecx,DWORD PTR [r9+0x18]
0x0087f701: xor    r15d,r15d
0x0087f704: test   ecx,ecx
0x0087f706: cmovns r15d,ecx
0x0087f70a: mov    DWORD PTR [rsp+0x60],r15d
0x0087f70f: test   r8,r8
0x0087f712: je     0x14087f71e
0x0087f714: test   DWORD PTR [r8+0x18],0x6
0x0087f71c: je     0x14087f758
0x0087f71e: cmp    QWORD PTR [r13+0x490],0x0
0x0087f726: jne    0x14087f758
0x0087f728: mov    rcx,r13
0x0087f72b: call   0x1413adfa0
0x0087f730: test   rax,rax
0x0087f733: je     0x14087f758
0x0087f735: cmp    DWORD PTR [rax+0x90],0x0
0x0087f73c: jne    0x14087f758
0x0087f73e: mov    eax,DWORD PTR [r13+0x604]
0x0087f745: sub    eax,DWORD PTR [r13+0x614]
0x0087f74c: cmp    eax,r15d
0x0087f74f: cmovl  r15d,eax
0x0087f753: mov    DWORD PTR [rsp+0x60],r15d
0x0087f758: xor    r14d,r14d
0x0087f75b: xor    esi,esi
0x0087f75d: mov    edx,0x2d
0x0087f762: mov    rcx,r13
0x0087f765: call   0x141339710
0x0087f76a: mov    DWORD PTR [rsp+0x70],eax
0x0087f76e: mov    rbx,QWORD PTR [r13+0x408]
0x0087f775: mov    rdi,QWORD PTR [r13+0x410]
0x0087f77c: nop    DWORD PTR [rax+0x0]
0x0087f780: cmp    rbx,rdi
0x0087f783: jae    0x14087f87f
0x0087f789: mov    rax,QWORD PTR [rbx]
0x0087f78c: mov    QWORD PTR [rsp+0x78],rax
0x0087f791: mov    r12,QWORD PTR [rax]
0x0087f794: test   DWORD PTR [r12+0x10],0x20000000
0x0087f79d: jne    0x14087f7ac
0x0087f79f: mov    rcx,r12
0x0087f7a2: call   0x140c62f50
0x0087f7a7: mov    rax,QWORD PTR [rsp+0x78]
0x0087f7ac: mov    r15d,DWORD PTR [r12+0x74]
0x0087f7b1: mov    r12d,DWORD PTR [r12+0x78]
0x0087f7b6: movzx  ecx,WORD PTR [rax+0x8]
0x0087f7ba: cmp    cx,0x2
0x0087f7be: je     0x14087f7c6
0x0087f7c0: cmp    cx,0x5
0x0087f7c4: jne    0x14087f807
0x0087f7c6: mov    rcx,QWORD PTR [rax]
0x0087f7c9: mov    rax,QWORD PTR [rcx]
0x0087f7cc: call   QWORD PTR [rax+0x6c8]
0x0087f7d2: test   al,al
0x0087f7d4: je     0x14087f807
0x0087f7d6: mov    r8d,DWORD PTR [rsp+0x70]
0x0087f7db: cmp    r8d,0xf
0x0087f7df: jl     0x14087f7e9
0x0087f7e1: xor    r15d,r15d
0x0087f7e4: xor    r12d,r12d
0x0087f7e7: jmp    0x14087f807
0x0087f7e9: cmp    r8d,0x1
0x0087f7ed: jle    0x14087f807
0x0087f7ef: mov    ecx,0xf
0x0087f7f4: sub    ecx,r8d
0x0087f7f7: imul   r15d,ecx
0x0087f7fb: sar    r15d,0x4
0x0087f7ff: imul   r12d,ecx
0x0087f803: sar    r12d,0x4
0x0087f807: add    r14d,r15d
0x0087f80a: add    esi,r12d
0x0087f80d: cmp    esi,0xf4240
0x0087f813: jle    0x14087f83a
0x0087f815: mov    eax,0x431bde83
0x0087f81a: imul   esi
0x0087f81c: sar    edx,0x12
0x0087f81f: mov    eax,edx
0x0087f821: shr    eax,0x1f
0x0087f824: add    edx,eax
0x0087f826: add    r14d,edx
0x0087f829: imul   eax,edx,0xf4240
0x0087f82f: sub    esi,eax
0x0087f831: add    rbx,0x8
0x0087f835: jmp    0x14087f780
0x0087f83a: test   esi,esi
0x0087f83c: jns    0x14087f876
0x0087f83e: mov    eax,0x431bde83
0x0087f843: imul   esi
0x0087f845: sar    edx,0x12
0x0087f848: mov    eax,edx
0x0087f84a: shr    eax,0x1f
0x0087f84d: add    edx,eax
0x0087f84f: add    r14d,edx
0x0087f852: mov    eax,0x431bde83
0x0087f857: imul   esi
0x0087f859: sar    edx,0x12
0x0087f85c: mov    eax,edx
0x0087f85e: shr    eax,0x1f
0x0087f861: add    edx,eax
0x0087f863: imul   eax,edx,0xf4240
0x0087f869: sub    esi,eax
0x0087f86b: jns    0x14087f876
0x0087f86d: dec    r14d
0x0087f870: add    esi,0xf4240
0x0087f876: add    rbx,0x8
0x0087f87a: jmp    0x14087f780
0x0087f87f: mov    ecx,DWORD PTR [r13+0x6ac]
0x0087f886: mov    eax,0x10624dd3
0x0087f88b: cmp    ecx,0x493e0
0x0087f891: jl     0x14087f8a8
0x0087f893: imul   ecx
0x0087f895: mov    ebx,edx
0x0087f897: sar    ebx,0x6
0x0087f89a: mov    eax,ebx
0x0087f89c: shr    eax,0x1f
0x0087f89f: add    ebx,eax
0x0087f8a1: imul   ebx,DWORD PTR [rsp+0x60]
0x0087f8a6: jmp    0x14087f8bb
0x0087f8a8: imul   ecx,DWORD PTR [rsp+0x60]
0x0087f8ad: imul   ecx
0x0087f8af: mov    ebx,edx
0x0087f8b1: sar    ebx,0x6
0x0087f8b4: mov    eax,ebx
0x0087f8b6: shr    eax,0x1f
0x0087f8b9: add    ebx,eax
0x0087f8bb: test   ebx,ebx
0x0087f8bd: mov    edi,0x1
0x0087f8c2: cmovle ebx,edi
0x0087f8c5: mov    eax,0x68db8bad
0x0087f8ca: imul   esi
0x0087f8cc: mov    r12d,edx
0x0087f8cf: sar    r12d,0xc
0x0087f8d3: mov    eax,r12d
0x0087f8d6: shr    eax,0x1f
0x0087f8d9: add    r12d,eax
0x0087f8dc: imul   eax,r14d,0x64
0x0087f8e0: add    r12d,eax
0x0087f8e3: mov    eax,DWORD PTR [rsp+0x5c]
0x0087f8e7: add    eax,0x19
0x0087f8ea: mov    DWORD PTR [rip+0x1dc4a74],eax        # 0x142644364
0x0087f8f0: mov    eax,DWORD PTR [rsp+0x40]
0x0087f8f4: mov    DWORD PTR [rip+0x1dc4a6e],eax        # 0x142644368
0x0087f8fa: xorps  xmm0,xmm0
0x0087f8fd: movups XMMWORD PTR [rbp-0x30],xmm0
0x0087f901: movdqa xmm1,XMMWORD PTR [rip+0xf06197]        # 0x141785aa0
0x0087f909: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x0087f90e: movabs rax,0x203a6e6564727542 ; inline="Burden: "
0x0087f918: mov    QWORD PTR [rbp-0x30],rax
0x0087f91c: mov    BYTE PTR [rbp-0x28],0x0
0x0087f920: movups XMMWORD PTR [rbp-0x78],xmm0
0x0087f924: mov    QWORD PTR [rbp-0x68],0x0
0x0087f92c: mov    QWORD PTR [rbp-0x60],0xf
0x0087f934: mov    BYTE PTR [rbp-0x78],0x0
0x0087f938: test   r14d,r14d
0x0087f93b: jg     0x14087f955
0x0087f93d: mov    r8d,0x2
0x0087f943: lea    rdx,[rip+0xe20f5a]        # 0x1416a08a4 ; literal="<1"
0x0087f94a: lea    rcx,[rbp-0x78]
0x0087f94e: call   0x14006f9a0
0x0087f953: jmp    0x14087f961
0x0087f955: lea    rdx,[rbp-0x78]
0x0087f959: mov    ecx,r14d
0x0087f95c: call   0x140529cf0
0x0087f961: mov    dl,0xe2
0x0087f963: lea    rcx,[rbp-0x78]
0x0087f967: call   0x1400b9b10
0x0087f96c: lea    rdx,[rbp-0x78]
0x0087f970: cmp    QWORD PTR [rbp-0x60],0xf
0x0087f975: cmova  rdx,QWORD PTR [rbp-0x78]
0x0087f97a: mov    r8,QWORD PTR [rbp-0x68]
0x0087f97e: lea    rcx,[rbp-0x30]
0x0087f982: call   0x14006f9a0
0x0087f987: mov    r8,rdi
0x0087f98a: lea    rdx,[rip+0xd66b3b]        # 0x1415e64cc ; literal="/"
0x0087f991: lea    rcx,[rbp-0x30]
0x0087f995: call   0x14006f9a0
0x0087f99a: mov    eax,0x51eb851f
0x0087f99f: mul    ebx
0x0087f9a1: mov    ecx,edx
0x0087f9a3: shr    ecx,0x5
0x0087f9a6: mov    QWORD PTR [rbp-0x68],0x0
0x0087f9ae: lea    rax,[rbp-0x78]
0x0087f9b2: cmp    QWORD PTR [rbp-0x60],0xf
0x0087f9b7: cmova  rax,QWORD PTR [rbp-0x78]
0x0087f9bc: mov    BYTE PTR [rax],0x0
0x0087f9bf: test   ecx,ecx
0x0087f9c1: jg     0x14087f9db
0x0087f9c3: mov    r8d,0x2
0x0087f9c9: lea    rdx,[rip+0xe20ed4]        # 0x1416a08a4 ; literal="<1"
0x0087f9d0: lea    rcx,[rbp-0x78]
0x0087f9d4: call   0x14006f9a0
0x0087f9d9: jmp    0x14087f9e4
0x0087f9db: lea    rdx,[rbp-0x78]
0x0087f9df: call   0x140529cf0
0x0087f9e4: mov    r14,QWORD PTR [rbp-0x68]
0x0087f9e8: mov    r15,QWORD PTR [rbp-0x60]
0x0087f9ec: cmp    r14,r15
0x0087f9ef: jae    0x14087fa16
0x0087f9f1: lea    rax,[r14+0x1]
0x0087f9f5: mov    QWORD PTR [rbp-0x68],rax
0x0087f9f9: lea    rax,[rbp-0x78]
0x0087f9fd: cmp    r15,0xf
0x0087fa01: cmova  rax,QWORD PTR [rbp-0x78]
0x0087fa06: mov    WORD PTR [rax+r14*1],0xe2
0x0087fa0d: mov    rsi,QWORD PTR [rbp-0x78]
0x0087fa11: jmp    0x14087fadc
0x0087fa16: movabs rdi,0x7fffffffffffffff
0x0087fa20: mov    rax,rdi
0x0087fa23: sub    rax,r14
0x0087fa26: cmp    rax,0x1
0x0087fa2a: jb     0x14088178c
0x0087fa30: lea    r13,[r14+0x1]
0x0087fa34: mov    rcx,r13
0x0087fa37: or     rcx,0xf
0x0087fa3b: cmp    rcx,rdi
0x0087fa3e: ja     0x14087fa5f
0x0087fa40: mov    rdx,r15
0x0087fa43: shr    rdx,1
0x0087fa46: mov    rax,rdi
0x0087fa49: sub    rax,rdx
0x0087fa4c: cmp    r15,rax
0x0087fa4f: ja     0x14087fa5f
0x0087fa51: lea    rax,[rdx+r15*1]
0x0087fa55: mov    rdi,rcx
0x0087fa58: cmp    rcx,rax
0x0087fa5b: cmovb  rdi,rax
0x0087fa5f: lea    rcx,[rdi+0x1]
0x0087fa63: call   0x140070760
0x0087fa68: mov    rsi,rax
0x0087fa6b: mov    QWORD PTR [rbp-0x68],r13
0x0087fa6f: mov    QWORD PTR [rbp-0x60],rdi
0x0087fa73: mov    r8,r14
0x0087fa76: mov    rcx,rax
0x0087fa79: cmp    r15,0xf
0x0087fa7d: jbe    0x14087fac8
0x0087fa7f: mov    rdi,QWORD PTR [rbp-0x78]
0x0087fa83: mov    rdx,rdi
0x0087fa86: call   0x1415359e8
0x0087fa8b: mov    WORD PTR [rsi+r14*1],0xe2
0x0087fa92: lea    rdx,[r15+0x1]
0x0087fa96: cmp    rdx,0x1000
0x0087fa9d: jb     0x14087fab7
0x0087fa9f: add    rdx,0x27
0x0087faa3: mov    rcx,QWORD PTR [rdi-0x8]
0x0087faa7: sub    rdi,rcx
0x0087faaa: lea    rax,[rdi-0x8]
0x0087faae: cmp    rax,0x1f
0x0087fab2: ja     0x14087fac1
0x0087fab4: mov    rdi,rcx
0x0087fab7: mov    rcx,rdi
0x0087faba: call   0x1415345f0
0x0087fabf: jmp    0x14087fad8
0x0087fac1: call   QWORD PTR [rip+0xd60fd9]        # 0x1415e0aa0
0x0087fac7: int3
0x0087fac8: lea    rdx,[rbp-0x78]
0x0087facc: call   0x1415359e8
0x0087fad1: mov    WORD PTR [rsi+r14*1],0xe2
0x0087fad8: mov    QWORD PTR [rbp-0x78],rsi
0x0087fadc: lea    rdx,[rbp-0x78]
0x0087fae0: cmp    QWORD PTR [rbp-0x60],0xf
0x0087fae5: cmova  rdx,rsi
0x0087fae9: mov    r8,QWORD PTR [rbp-0x68]
0x0087faed: lea    rcx,[rbp-0x30]
0x0087faf1: call   0x14006f9a0
0x0087faf6: lea    eax,[rbx+rbx*2]
0x0087faf9: cdq
0x0087fafa: sub    eax,edx
0x0087fafc: sar    eax,1
0x0087fafe: cmp    eax,r12d
0x0087fb01: jge    0x14087fb0f
0x0087fb03: mov    DWORD PTR [rip+0x1dc485f],0x1010004        # 0x14264436c
0x0087fb0d: jmp    0x14087fb28
0x0087fb0f: cmp    r12d,ebx
0x0087fb12: mov    DWORD PTR [rip+0x1dc4850],0x1010006        # 0x14264436c
0x0087fb1c: jg     0x14087fb28
0x0087fb1e: mov    DWORD PTR [rip+0x1dc4844],0x1000007        # 0x14264436c
0x0087fb28: xor    r9d,r9d
0x0087fb2b: lea    rdx,[rbp-0x30]
0x0087fb2f: lea    rcx,[rip+0x1dc47aa]        # 0x1426442e0
0x0087fb36: call   0x140ad69a0
0x0087fb3b: nop
0x0087fb3c: mov    rdx,QWORD PTR [rbp-0x60]
0x0087fb40: cmp    rdx,0xf
0x0087fb44: jbe    0x14087fb7a
0x0087fb46: inc    rdx
0x0087fb49: mov    rcx,QWORD PTR [rbp-0x78]
0x0087fb4d: mov    rax,rcx
0x0087fb50: cmp    rdx,0x1000
0x0087fb57: jb     0x14087fb75
0x0087fb59: add    rdx,0x27
0x0087fb5d: mov    rcx,QWORD PTR [rcx-0x8]
0x0087fb61: sub    rax,rcx
0x0087fb64: add    rax,0xfffffffffffffff8
0x0087fb68: cmp    rax,0x1f
0x0087fb6c: jbe    0x14087fb75
0x0087fb6e: call   QWORD PTR [rip+0xd60f2c]        # 0x1415e0aa0
0x0087fb74: int3
0x0087fb75: call   0x1415345f0
0x0087fb7a: mov    QWORD PTR [rbp-0x68],0x0
0x0087fb82: mov    QWORD PTR [rbp-0x60],0xf
0x0087fb8a: mov    BYTE PTR [rbp-0x78],0x0
0x0087fb8e: mov    rdx,QWORD PTR [rbp-0x18]
0x0087fb92: cmp    rdx,0xf
0x0087fb96: jbe    0x14087fbcc
0x0087fb98: inc    rdx
0x0087fb9b: mov    rcx,QWORD PTR [rbp-0x30]
0x0087fb9f: mov    rax,rcx
0x0087fba2: cmp    rdx,0x1000
0x0087fba9: jb     0x14087fbc7
0x0087fbab: add    rdx,0x27
0x0087fbaf: mov    rcx,QWORD PTR [rcx-0x8]
0x0087fbb3: sub    rax,rcx
0x0087fbb6: add    rax,0xfffffffffffffff8
0x0087fbba: cmp    rax,0x1f
0x0087fbbe: jbe    0x14087fbc7
0x0087fbc0: call   QWORD PTR [rip+0xd60eda]        # 0x1415e0aa0
0x0087fbc6: int3
0x0087fbc7: call   0x1415345f0
0x0087fbcc: mov    r12d,DWORD PTR [rsp+0x58]
0x0087fbd1: mov    r14,QWORD PTR [rsp+0x48]
0x0087fbd6: mov    r15d,DWORD PTR [rsp+0x5c]
0x0087fbdb: mov    edi,DWORD PTR [rsp+0x40]
0x0087fbdf: cmp    BYTE PTR [r14+0x10],0x0
0x0087fbe4: je     0x140880c2f
0x0087fbea: mov    eax,DWORD PTR [r14+0x4]
0x0087fbee: sub    eax,0x7
0x0087fbf1: cmp    eax,0x2
0x0087fbf4: jbe    0x140880c2f
0x0087fbfa: lea    r15d,[r12-0x28]
0x0087fbff: dec    edi
0x0087fc01: lea    r13d,[r15+0x4]
0x0087fc05: lea    eax,[r15+0x14]
0x0087fc09: mov    DWORD PTR [rsp+0x60],eax
0x0087fc0d: add    r12d,0xffffffd9
0x0087fc11: mov    eax,DWORD PTR [rsp+0x58]
0x0087fc15: lea    esi,[rax-0x26]
0x0087fc18: lea    r14d,[rax-0x25]
0x0087fc1c: lea    rbx,[rip+0x1dccff1]        # 0x14264cc14
0x0087fc23: mov    r11,QWORD PTR [rsp+0x48]
0x0087fc28: nop    DWORD PTR [rax+rax*1+0x0]
0x0087fc30: mov    DWORD PTR [rip+0x1dc472d],r15d        # 0x142644364
0x0087fc37: mov    DWORD PTR [rip+0x1dc472b],edi        # 0x142644368
0x0087fc3d: cmp    DWORD PTR [r11+0x4],0x1
0x0087fc42: jne    0x140880170
0x0087fc48: mov    edx,DWORD PTR [rbx+0x24]
0x0087fc4b: jmp    0x140880173
0x0087fc50: xorps  xmm0,xmm0
0x0087fc53: movups XMMWORD PTR [rbp-0x58],xmm0
0x0087fc57: mov    ecx,0x20
0x0087fc5c: call   0x140070760
0x0087fc61: mov    QWORD PTR [rbp-0x58],rax
0x0087fc65: movdqa xmm0,XMMWORD PTR [rip+0xf05f43]        # 0x141785bb0
0x0087fc6d: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x0087fc72: movups xmm0,XMMWORD PTR [rip+0xe2f997]        # 0x1416af610 ; literal="What do you want to drop?"
0x0087fc79: movups XMMWORD PTR [rax],xmm0
0x0087fc7c: movsd  xmm0,QWORD PTR [rip+0xe2f99c]        # 0x1416af620 ; literal=" to drop?"
0x0087fc84: movsd  QWORD PTR [rax+0x10],xmm0
0x0087fc89: movzx  ecx,BYTE PTR [rip+0xe2f998]        # 0x1416af628 ; literal="?"
0x0087fc90: mov    BYTE PTR [rax+0x18],cl
0x0087fc93: mov    BYTE PTR [rax+0x19],0x0
0x0087fc97: xor    r9d,r9d
0x0087fc9a: lea    rdx,[rbp-0x58]
0x0087fc9e: lea    rcx,[rip+0x1dc463b]        # 0x1426442e0
0x0087fca5: call   0x140ad69a0
0x0087fcaa: nop
0x0087fcab: lea    rcx,[rbp-0x58]
0x0087fcaf: call   0x14006f7e0
0x0087fcb4: jmp    0x14087fbdf
0x0087fcb9: xorps  xmm0,xmm0
0x0087fcbc: movups XMMWORD PTR [rbp-0x58],xmm0
0x0087fcc0: mov    ecx,0x20
0x0087fcc5: call   0x140070760
0x0087fcca: mov    QWORD PTR [rbp-0x58],rax
0x0087fcce: movdqa xmm0,XMMWORD PTR [rip+0xf05eda]        # 0x141785bb0
0x0087fcd6: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x0087fcdb: movups xmm0,XMMWORD PTR [rip+0xe2f90e]        # 0x1416af5f0 ; literal="What do you want to wear?"
0x0087fce2: movups XMMWORD PTR [rax],xmm0
0x0087fce5: movsd  xmm0,QWORD PTR [rip+0xe2f913]        # 0x1416af600 ; literal=" to wear?"
0x0087fced: movsd  QWORD PTR [rax+0x10],xmm0
0x0087fcf2: movzx  ecx,BYTE PTR [rip+0xe2f90f]        # 0x1416af608 ; literal="?"
0x0087fcf9: mov    BYTE PTR [rax+0x18],cl
0x0087fcfc: mov    BYTE PTR [rax+0x19],0x0
0x0087fd00: xor    r9d,r9d
0x0087fd03: lea    rdx,[rbp-0x58]
0x0087fd07: lea    rcx,[rip+0x1dc45d2]        # 0x1426442e0
0x0087fd0e: call   0x140ad69a0
0x0087fd13: nop
0x0087fd14: lea    rcx,[rbp-0x58]
0x0087fd18: call   0x14006f7e0
0x0087fd1d: jmp    0x14087fbdf
0x0087fd22: xorps  xmm0,xmm0
0x0087fd25: movups XMMWORD PTR [rbp-0x58],xmm0
0x0087fd29: mov    ecx,0x20
0x0087fd2e: call   0x140070760
0x0087fd33: mov    rdx,rax
0x0087fd36: mov    QWORD PTR [rbp-0x58],rax
0x0087fd3a: movdqa xmm0,XMMWORD PTR [rip+0xf05e8e]        # 0x141785bd0
0x0087fd42: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x0087fd47: movups xmm0,XMMWORD PTR [rip+0xe2f9e2]        # 0x1416af730 ; literal="What do you want to remove?"
0x0087fd4e: movups XMMWORD PTR [rax],xmm0
0x0087fd51: movsd  xmm0,QWORD PTR [rip+0xe2f9e7]        # 0x1416af740 ; literal=" to remove?"
0x0087fd59: movsd  QWORD PTR [rax+0x10],xmm0
0x0087fd5e: movzx  ecx,WORD PTR [rip+0xe2f9e3]        # 0x1416af748 ; literal="ve?"
0x0087fd65: mov    WORD PTR [rax+0x18],cx
0x0087fd69: movzx  eax,BYTE PTR [rip+0xe2f9da]        # 0x1416af74a ; literal="?"
0x0087fd70: mov    BYTE PTR [rdx+0x1a],al
0x0087fd73: mov    BYTE PTR [rdx+0x1b],0x0
0x0087fd77: xor    r9d,r9d
0x0087fd7a: lea    rdx,[rbp-0x58]
0x0087fd7e: lea    rcx,[rip+0x1dc455b]        # 0x1426442e0
0x0087fd85: call   0x140ad69a0
0x0087fd8a: nop
0x0087fd8b: lea    rcx,[rbp-0x58]
0x0087fd8f: call   0x14006f7e0
0x0087fd94: jmp    0x14087fbdf
0x0087fd99: xorps  xmm0,xmm0
0x0087fd9c: movups XMMWORD PTR [rbp-0x58],xmm0
0x0087fda0: mov    ecx,0x20
0x0087fda5: call   0x140070760
0x0087fdaa: mov    QWORD PTR [rbp-0x58],rax
0x0087fdae: movdqa xmm0,XMMWORD PTR [rip+0xf05e0a]        # 0x141785bc0
0x0087fdb6: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x0087fdbb: movups xmm0,XMMWORD PTR [rip+0xe2f94e]        # 0x1416af710 ; literal="What do you want to place?"
0x0087fdc2: movups XMMWORD PTR [rax],xmm0
0x0087fdc5: movsd  xmm0,QWORD PTR [rip+0xe2f953]        # 0x1416af720 ; literal=" to place?"
0x0087fdcd: movsd  QWORD PTR [rax+0x10],xmm0
0x0087fdd2: movzx  ecx,WORD PTR [rip+0xe2f94f]        # 0x1416af728 ; literal="e?"
0x0087fdd9: mov    WORD PTR [rax+0x18],cx
0x0087fddd: mov    BYTE PTR [rax+0x1a],0x0
0x0087fde1: xor    r9d,r9d
0x0087fde4: lea    rdx,[rbp-0x58]
0x0087fde8: lea    rcx,[rip+0x1dc44f1]        # 0x1426442e0
0x0087fdef: call   0x140ad69a0
0x0087fdf4: nop
0x0087fdf5: lea    rcx,[rbp-0x58]
0x0087fdf9: call   0x14006f7e0
0x0087fdfe: jmp    0x14087fbdf
0x0087fe03: xorps  xmm0,xmm0
0x0087fe06: movups XMMWORD PTR [rbp-0x58],xmm0
0x0087fe0a: mov    ecx,0x30
0x0087fe0f: call   0x140070760
0x0087fe14: mov    QWORD PTR [rbp-0x58],rax
0x0087fe18: movdqa xmm0,XMMWORD PTR [rip+0xf05e10]        # 0x141785c30 ; literal="!"
0x0087fe20: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x0087fe25: movups xmm0,XMMWORD PTR [rip+0xe2f944]        # 0x1416af770 ; literal="What do you want to eat or drink?"
0x0087fe2c: movups XMMWORD PTR [rax],xmm0
0x0087fe2f: movups xmm1,XMMWORD PTR [rip+0xe2f94a]        # 0x1416af780 ; literal=" to eat or drink?"
0x0087fe36: movups XMMWORD PTR [rax+0x10],xmm1
0x0087fe3a: movzx  ecx,BYTE PTR [rip+0xe2f94f]        # 0x1416af790 ; literal="?"
0x0087fe41: mov    BYTE PTR [rax+0x20],cl
0x0087fe44: mov    BYTE PTR [rax+0x21],0x0
0x0087fe48: xor    r9d,r9d
0x0087fe4b: lea    rdx,[rbp-0x58]
0x0087fe4f: lea    rcx,[rip+0x1dc448a]        # 0x1426442e0
0x0087fe56: call   0x140ad69a0
0x0087fe5b: nop
0x0087fe5c: lea    rcx,[rbp-0x58]
0x0087fe60: call   0x14006f7e0
0x0087fe65: jmp    0x14087fbdf
0x0087fe6a: xorps  xmm0,xmm0
0x0087fe6d: movups XMMWORD PTR [rbp-0x58],xmm0
0x0087fe71: mov    ecx,0x20
0x0087fe76: call   0x140070760
0x0087fe7b: mov    QWORD PTR [rbp-0x58],rax
0x0087fe7f: movdqa xmm0,XMMWORD PTR [rip+0xf05d39]        # 0x141785bc0
0x0087fe87: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x0087fe8c: movups xmm0,XMMWORD PTR [rip+0xe2f8bd]        # 0x1416af750 ; literal="What do you want to throw?"
0x0087fe93: movups XMMWORD PTR [rax],xmm0
0x0087fe96: movsd  xmm0,QWORD PTR [rip+0xe2f8c2]        # 0x1416af760 ; literal=" to throw?"
0x0087fe9e: movsd  QWORD PTR [rax+0x10],xmm0
0x0087fea3: movzx  ecx,WORD PTR [rip+0xe2f8be]        # 0x1416af768 ; literal="w?"
0x0087feaa: mov    WORD PTR [rax+0x18],cx
0x0087feae: mov    BYTE PTR [rax+0x1a],0x0
0x0087feb2: xor    r9d,r9d
0x0087feb5: lea    rdx,[rbp-0x58]
0x0087feb9: lea    rcx,[rip+0x1dc4420]        # 0x1426442e0
0x0087fec0: call   0x140ad69a0
0x0087fec5: nop
0x0087fec6: lea    rcx,[rbp-0x58]
0x0087feca: call   0x14006f7e0
0x0087fecf: jmp    0x14087fbdf
0x0087fed4: xorps  xmm0,xmm0
0x0087fed7: movups XMMWORD PTR [rbp-0x58],xmm0
0x0087fedb: mov    ecx,0x30
0x0087fee0: call   0x140070760
0x0087fee5: mov    QWORD PTR [rbp-0x58],rax
0x0087fee9: movdqa xmm0,XMMWORD PTR [rip+0xf05d4f]        # 0x141785c40 ; literal="\""
0x0087fef1: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x0087fef6: movups xmm0,XMMWORD PTR [rip+0xe2f7bb]        # 0x1416af6b8 ; literal="With what do you want to interact?"
0x0087fefd: movups XMMWORD PTR [rax],xmm0
0x0087ff00: movups xmm1,XMMWORD PTR [rip+0xe2f7c1]        # 0x1416af6c8 ; literal=" want to interact?"
0x0087ff07: movups XMMWORD PTR [rax+0x10],xmm1
0x0087ff0b: movzx  ecx,WORD PTR [rip+0xe2f7c6]        # 0x1416af6d8 ; literal="t?"
0x0087ff12: mov    WORD PTR [rax+0x20],cx
0x0087ff16: mov    BYTE PTR [rax+0x22],0x0
0x0087ff1a: xor    r9d,r9d
0x0087ff1d: lea    rdx,[rbp-0x58]
0x0087ff21: lea    rcx,[rip+0x1dc43b8]        # 0x1426442e0
0x0087ff28: call   0x140ad69a0
0x0087ff2d: nop
0x0087ff2e: mov    rdx,QWORD PTR [rbp-0x40]
0x0087ff32: cmp    rdx,0xf
0x0087ff36: jbe    0x14087fbdf
0x0087ff3c: inc    rdx
0x0087ff3f: mov    rcx,QWORD PTR [rbp-0x58]
0x0087ff43: mov    rax,rcx
0x0087ff46: cmp    rdx,0x1000
0x0087ff4d: jb     0x14087ff6b
0x0087ff4f: add    rdx,0x27
0x0087ff53: mov    rcx,QWORD PTR [rcx-0x8]
0x0087ff57: sub    rax,rcx
0x0087ff5a: add    rax,0xfffffffffffffff8
0x0087ff5e: cmp    rax,0x1f
0x0087ff62: jbe    0x14087ff6b
0x0087ff64: call   QWORD PTR [rip+0xd60b36]        # 0x1415e0aa0
0x0087ff6a: int3
0x0087ff6b: call   0x1415345f0
0x0087ff70: jmp    0x14087fbdf
0x0087ff75: xorps  xmm0,xmm0
0x0087ff78: movups XMMWORD PTR [rbp-0x58],xmm0
0x0087ff7c: mov    ecx,0x20
0x0087ff81: call   0x140070760
0x0087ff86: mov    QWORD PTR [rbp-0x58],rax
0x0087ff8a: movdqa xmm0,XMMWORD PTR [rip+0xf05b9e]        # 0x141785b30
0x0087ff92: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x0087ff97: movups xmm0,XMMWORD PTR [rip+0xe2f702]        # 0x1416af6a0 ; literal="Where do you put "
0x0087ff9e: movups XMMWORD PTR [rax],xmm0
0x0087ffa1: movzx  ecx,BYTE PTR [rip+0xe2f708]        # 0x1416af6b0 ; literal=" "
0x0087ffa8: mov    BYTE PTR [rax+0x10],cl
0x0087ffab: mov    BYTE PTR [rax+0x11],0x0
0x0087ffaf: xor    r9d,r9d
0x0087ffb2: lea    rdx,[rbp-0x58]
0x0087ffb6: lea    rcx,[rip+0x1dc4323]        # 0x1426442e0
0x0087ffbd: call   0x140ad69a0
0x0087ffc2: nop
0x0087ffc3: mov    rdx,QWORD PTR [rbp-0x40]
0x0087ffc7: cmp    rdx,0xf
0x0087ffcb: jbe    0x140880001
0x0087ffcd: inc    rdx
0x0087ffd0: mov    rcx,QWORD PTR [rbp-0x58]
0x0087ffd4: mov    rax,rcx
0x0087ffd7: cmp    rdx,0x1000
0x0087ffde: jb     0x14087fffc
0x0087ffe0: add    rdx,0x27
0x0087ffe4: mov    rcx,QWORD PTR [rcx-0x8]
0x0087ffe8: sub    rax,rcx
0x0087ffeb: add    rax,0xfffffffffffffff8
0x0087ffef: cmp    rax,0x1f
0x0087fff3: jbe    0x14087fffc
0x0087fff5: call   QWORD PTR [rip+0xd60aa5]        # 0x1415e0aa0
0x0087fffb: int3
0x0087fffc: call   0x1415345f0
0x00880001: xorps  xmm0,xmm0
0x00880004: movups XMMWORD PTR [rbp-0x30],xmm0
0x00880008: movdqa xmm1,XMMWORD PTR [rip+0xf05a10]        # 0x141785a20
0x00880010: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x00880015: mov    BYTE PTR [rbp-0x30],0x0
0x00880019: mov    r9d,0x1
0x0088001f: xor    r8d,r8d
0x00880022: lea    rdx,[rbp-0x30]
0x00880026: mov    rcx,QWORD PTR [r14+0x8]
0x0088002a: call   0x140c62490
0x0088002f: xor    r9d,r9d
0x00880032: lea    rdx,[rbp-0x30]
0x00880036: lea    rcx,[rip+0x1dc42a3]        # 0x1426442e0
0x0088003d: call   0x140ad69a0
0x00880042: xorps  xmm0,xmm0
0x00880045: movups XMMWORD PTR [rbp-0x58],xmm0
0x00880049: movdqa xmm1,XMMWORD PTR [rip+0xf059df]        # 0x141785a30
0x00880051: movdqu XMMWORD PTR [rbp-0x48],xmm1
0x00880056: mov    WORD PTR [rbp-0x58],0x3f
0x0088005c: xor    r9d,r9d
0x0088005f: lea    rdx,[rbp-0x58]
0x00880063: lea    rcx,[rip+0x1dc4276]        # 0x1426442e0
0x0088006a: call   0x140ad69a0
0x0088006f: nop
0x00880070: lea    rcx,[rbp-0x58]
0x00880074: call   0x14006f7e0
0x00880079: nop
0x0088007a: lea    rcx,[rbp-0x30]
0x0088007e: call   0x14006f7e0
0x00880083: jmp    0x14087fbdb
0x00880088: xorps  xmm0,xmm0
0x0088008b: movups XMMWORD PTR [rbp-0x58],xmm0
0x0088008f: mov    ecx,0x20
0x00880094: call   0x140070760
0x00880099: mov    QWORD PTR [rbp-0x58],rax
0x0088009d: movdqa xmm0,XMMWORD PTR [rip+0xf05adb]        # 0x141785b80
0x008800a5: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008800aa: movups xmm0,XMMWORD PTR [rip+0xe2f647]        # 0x1416af6f8 ; literal="What will you do with "
0x008800b1: movups XMMWORD PTR [rax],xmm0
0x008800b4: mov    ecx,DWORD PTR [rip+0xe2f64e]        # 0x1416af708 ; literal=" with "
0x008800ba: mov    DWORD PTR [rax+0x10],ecx
0x008800bd: movzx  ecx,WORD PTR [rip+0xe2f648]        # 0x1416af70c ; literal="h "
0x008800c4: mov    WORD PTR [rax+0x14],cx
0x008800c8: mov    BYTE PTR [rax+0x16],0x0
0x008800cc: xor    r9d,r9d
0x008800cf: lea    rdx,[rbp-0x58]
0x008800d3: lea    rcx,[rip+0x1dc4206]        # 0x1426442e0
0x008800da: call   0x140ad69a0
0x008800df: nop
0x008800e0: lea    rcx,[rbp-0x58]
0x008800e4: call   0x14006f7e0
0x008800e9: xorps  xmm0,xmm0
0x008800ec: movups XMMWORD PTR [rbp-0x30],xmm0
0x008800f0: movdqa xmm1,XMMWORD PTR [rip+0xf05928]        # 0x141785a20
0x008800f8: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x008800fd: mov    BYTE PTR [rbp-0x30],0x0
0x00880101: mov    r9d,0x1
0x00880107: xor    r8d,r8d
0x0088010a: lea    rdx,[rbp-0x30]
0x0088010e: mov    rcx,QWORD PTR [r14+0x8]
0x00880112: call   0x140c62490
0x00880117: xor    r9d,r9d
0x0088011a: lea    rdx,[rbp-0x30]
0x0088011e: lea    rcx,[rip+0x1dc41bb]        # 0x1426442e0
0x00880125: call   0x140ad69a0
0x0088012a: xorps  xmm0,xmm0
0x0088012d: movups XMMWORD PTR [rbp-0x58],xmm0
0x00880131: movdqa xmm1,XMMWORD PTR [rip+0xf058f7]        # 0x141785a30
0x00880139: movdqu XMMWORD PTR [rbp-0x48],xmm1
0x0088013e: mov    WORD PTR [rbp-0x58],0x3f
0x00880144: xor    r9d,r9d
0x00880147: lea    rdx,[rbp-0x58]
0x0088014b: lea    rcx,[rip+0x1dc418e]        # 0x1426442e0
0x00880152: call   0x140ad69a0
0x00880157: nop
0x00880158: lea    rcx,[rbp-0x58]
0x0088015c: call   0x14006f7e0
0x00880161: nop
0x00880162: lea    rcx,[rbp-0x30]
0x00880166: call   0x14006f7e0
0x0088016b: jmp    0x14087fbdb
0x00880170: mov    edx,DWORD PTR [rbx-0xc]
0x00880173: lea    rcx,[rip+0x1dc4166]        # 0x1426442e0
0x0088017a: call   0x140ad7b10
0x0088017f: cmp    DWORD PTR [rip+0x1b474e2],0x0        # 0x1423c7668
0x00880186: jle    0x1408801aa
0x00880188: mov    rax,QWORD PTR [rip+0x1b474d1]        # 0x1423c7660
0x0088018f: test   BYTE PTR [rax],0x1
0x00880192: je     0x1408801aa
0x00880194: mov    r8b,0x1
0x00880197: xor    edx,edx
0x00880199: lea    rcx,[rip+0x1dc4140]        # 0x1426442e0
0x008801a0: call   0x1400bb120
0x008801a5: mov    r11,QWORD PTR [rsp+0x48]
0x008801aa: mov    DWORD PTR [rip+0x1dc41b3],r12d        # 0x142644364
0x008801b1: mov    DWORD PTR [rip+0x1dc41b1],edi        # 0x142644368
0x008801b7: cmp    DWORD PTR [r11+0x4],0x1
0x008801bc: lea    rdx,[rbx+0x30]
0x008801c0: je     0x1408801c5
0x008801c2: mov    rdx,rbx
0x008801c5: mov    edx,DWORD PTR [rdx]
0x008801c7: lea    rcx,[rip+0x1dc4112]        # 0x1426442e0
0x008801ce: call   0x140ad7b10
0x008801d3: cmp    DWORD PTR [rip+0x1b4748e],0x0        # 0x1423c7668
0x008801da: jle    0x1408801fe
0x008801dc: mov    rax,QWORD PTR [rip+0x1b4747d]        # 0x1423c7660
0x008801e3: test   BYTE PTR [rax],0x1
0x008801e6: je     0x1408801fe
0x008801e8: mov    r8b,0x1
0x008801eb: xor    edx,edx
0x008801ed: lea    rcx,[rip+0x1dc40ec]        # 0x1426442e0
0x008801f4: call   0x1400bb120
0x008801f9: mov    r11,QWORD PTR [rsp+0x48]
0x008801fe: mov    DWORD PTR [rip+0x1dc4160],esi        # 0x142644364
0x00880204: mov    DWORD PTR [rip+0x1dc415e],edi        # 0x142644368
0x0088020a: cmp    DWORD PTR [r11+0x4],0x1
0x0088020f: jne    0x140880216
0x00880211: mov    edx,DWORD PTR [rbx+0x3c]
0x00880214: jmp    0x140880219
0x00880216: mov    edx,DWORD PTR [rbx+0xc]
0x00880219: lea    rcx,[rip+0x1dc40c0]        # 0x1426442e0
0x00880220: call   0x140ad7b10
0x00880225: cmp    DWORD PTR [rip+0x1b4743c],0x0        # 0x1423c7668
0x0088022c: jle    0x140880250
0x0088022e: mov    rax,QWORD PTR [rip+0x1b4742b]        # 0x1423c7660
0x00880235: test   BYTE PTR [rax],0x1
0x00880238: je     0x140880250
0x0088023a: mov    r8b,0x1
0x0088023d: xor    edx,edx
0x0088023f: lea    rcx,[rip+0x1dc409a]        # 0x1426442e0
0x00880246: call   0x1400bb120
0x0088024b: mov    r11,QWORD PTR [rsp+0x48]
0x00880250: mov    DWORD PTR [rip+0x1dc410d],r14d        # 0x142644364
0x00880257: mov    DWORD PTR [rip+0x1dc410b],edi        # 0x142644368
0x0088025d: cmp    DWORD PTR [r11+0x4],0x1
0x00880262: jne    0x140880269
0x00880264: mov    edx,DWORD PTR [rbx+0x48]
0x00880267: jmp    0x14088026c
0x00880269: mov    edx,DWORD PTR [rbx+0x18]
0x0088026c: lea    rcx,[rip+0x1dc406d]        # 0x1426442e0
0x00880273: call   0x140ad7b10
0x00880278: cmp    DWORD PTR [rip+0x1b473e9],0x0        # 0x1423c7668
0x0088027f: jle    0x1408802a3
0x00880281: mov    rax,QWORD PTR [rip+0x1b473d8]        # 0x1423c7660
0x00880288: test   BYTE PTR [rax],0x1
0x0088028b: je     0x1408802a3
0x0088028d: mov    r8b,0x1
0x00880290: xor    edx,edx
0x00880292: lea    rcx,[rip+0x1dc4047]        # 0x1426442e0
0x00880299: call   0x1400bb120
0x0088029e: mov    r11,QWORD PTR [rsp+0x48]
0x008802a3: inc    edi
0x008802a5: add    rbx,0x4
0x008802a9: lea    rax,[rip+0x1dcc970]        # 0x14264cc20
0x008802b0: cmp    rbx,rax
0x008802b3: jl     0x14087fc30
0x008802b9: mov    eax,DWORD PTR [rsp+0x50]
0x008802bd: mov    edx,DWORD PTR [rsp+0x40]
0x008802c1: cmp    eax,r15d
0x008802c4: jl     0x140880308
0x008802c6: cmp    eax,r13d
0x008802c9: jge    0x140880308
0x008802cb: lea    esi,[rdx-0x1]
0x008802ce: mov    ecx,DWORD PTR [rsp+0x44]
0x008802d2: cmp    ecx,esi
0x008802d4: jl     0x140880308
0x008802d6: lea    eax,[rsi+0x3]
0x008802d9: cmp    ecx,eax
0x008802db: jge    0x140880308
0x008802dd: mov    eax,DWORD PTR [rsp+0x58]
0x008802e1: add    eax,0xffffffd8
0x008802e4: mov    DWORD PTR [rip+0x10230a2],eax        # 0x1418a338c
0x008802ea: mov    eax,DWORD PTR [rsp+0x54]
0x008802ee: add    eax,0xfffffffe
0x008802f1: mov    DWORD PTR [rip+0x1023099],eax        # 0x1418a3390
0x008802f7: mov    BYTE PTR [rip+0x102308a],0x0        # 0x1418a3388
0x008802fe: mov    DWORD PTR [rip+0x1023060],0x22b        # 0x1418a3368
0x00880308: lea    r12d,[r13+0x1]
0x0088030c: lea    esi,[r13+0x2]
0x00880310: lea    r14d,[r13+0x3]
0x00880314: lea    edi,[rdx-0x1]
0x00880317: lea    rbx,[rip+0x1dcc956]        # 0x14264cc74
0x0088031e: xchg   ax,ax
0x00880320: mov    DWORD PTR [rip+0x1dc403d],r13d        # 0x142644364
0x00880327: mov    DWORD PTR [rip+0x1dc403b],edi        # 0x142644368
0x0088032d: cmp    DWORD PTR [r11+0x4],0x2
0x00880332: jne    0x140880339
0x00880334: mov    edx,DWORD PTR [rbx+0x24]
0x00880337: jmp    0x14088033c
0x00880339: mov    edx,DWORD PTR [rbx-0xc]
0x0088033c: lea    rcx,[rip+0x1dc3f9d]        # 0x1426442e0
0x00880343: call   0x140ad7b10
0x00880348: cmp    DWORD PTR [rip+0x1b47319],0x0        # 0x1423c7668
0x0088034f: jle    0x140880373
0x00880351: mov    rax,QWORD PTR [rip+0x1b47308]        # 0x1423c7660
0x00880358: test   BYTE PTR [rax],0x1
0x0088035b: je     0x140880373
0x0088035d: mov    r8b,0x1
0x00880360: xor    edx,edx
0x00880362: lea    rcx,[rip+0x1dc3f77]        # 0x1426442e0
0x00880369: call   0x1400bb120
0x0088036e: mov    r11,QWORD PTR [rsp+0x48]
0x00880373: mov    DWORD PTR [rip+0x1dc3fea],r12d        # 0x142644364
0x0088037a: mov    DWORD PTR [rip+0x1dc3fe8],edi        # 0x142644368
0x00880380: cmp    DWORD PTR [r11+0x4],0x2
0x00880385: lea    rdx,[rbx+0x30]
0x00880389: je     0x14088038e
0x0088038b: mov    rdx,rbx
0x0088038e: mov    edx,DWORD PTR [rdx]
0x00880390: lea    rcx,[rip+0x1dc3f49]        # 0x1426442e0
0x00880397: call   0x140ad7b10
0x0088039c: cmp    DWORD PTR [rip+0x1b472c5],0x0        # 0x1423c7668
0x008803a3: jle    0x1408803c7
0x008803a5: mov    rax,QWORD PTR [rip+0x1b472b4]        # 0x1423c7660
0x008803ac: test   BYTE PTR [rax],0x1
0x008803af: je     0x1408803c7
0x008803b1: mov    r8b,0x1
0x008803b4: xor    edx,edx
0x008803b6: lea    rcx,[rip+0x1dc3f23]        # 0x1426442e0
0x008803bd: call   0x1400bb120
0x008803c2: mov    r11,QWORD PTR [rsp+0x48]
0x008803c7: mov    DWORD PTR [rip+0x1dc3f97],esi        # 0x142644364
0x008803cd: mov    DWORD PTR [rip+0x1dc3f95],edi        # 0x142644368
0x008803d3: cmp    DWORD PTR [r11+0x4],0x2
0x008803d8: jne    0x1408803df
0x008803da: mov    edx,DWORD PTR [rbx+0x3c]
0x008803dd: jmp    0x1408803e2
0x008803df: mov    edx,DWORD PTR [rbx+0xc]
0x008803e2: lea    rcx,[rip+0x1dc3ef7]        # 0x1426442e0
0x008803e9: call   0x140ad7b10
0x008803ee: cmp    DWORD PTR [rip+0x1b47273],0x0        # 0x1423c7668
0x008803f5: jle    0x140880419
0x008803f7: mov    rax,QWORD PTR [rip+0x1b47262]        # 0x1423c7660
0x008803fe: test   BYTE PTR [rax],0x1
0x00880401: je     0x140880419
0x00880403: mov    r8b,0x1
0x00880406: xor    edx,edx
0x00880408: lea    rcx,[rip+0x1dc3ed1]        # 0x1426442e0
0x0088040f: call   0x1400bb120
0x00880414: mov    r11,QWORD PTR [rsp+0x48]
0x00880419: mov    DWORD PTR [rip+0x1dc3f44],r14d        # 0x142644364
0x00880420: mov    DWORD PTR [rip+0x1dc3f42],edi        # 0x142644368
0x00880426: cmp    DWORD PTR [r11+0x4],0x2
0x0088042b: jne    0x140880432
0x0088042d: mov    edx,DWORD PTR [rbx+0x48]
0x00880430: jmp    0x140880435
0x00880432: mov    edx,DWORD PTR [rbx+0x18]
0x00880435: lea    rcx,[rip+0x1dc3ea4]        # 0x1426442e0
0x0088043c: call   0x140ad7b10
0x00880441: cmp    DWORD PTR [rip+0x1b47220],0x0        # 0x1423c7668
0x00880448: jle    0x14088046c
0x0088044a: mov    rax,QWORD PTR [rip+0x1b4720f]        # 0x1423c7660
0x00880451: test   BYTE PTR [rax],0x1
0x00880454: je     0x14088046c
0x00880456: mov    r8b,0x1
0x00880459: xor    edx,edx
0x0088045b: lea    rcx,[rip+0x1dc3e7e]        # 0x1426442e0
0x00880462: call   0x1400bb120
0x00880467: mov    r11,QWORD PTR [rsp+0x48]
0x0088046c: inc    edi
0x0088046e: add    rbx,0x4
0x00880472: lea    rax,[rip+0x1dcc807]        # 0x14264cc80
0x00880479: cmp    rbx,rax
0x0088047c: jl     0x140880320
0x00880482: mov    ecx,DWORD PTR [rsp+0x50]
0x00880486: cmp    ecx,r13d
0x00880489: jl     0x1408804cd
0x0088048b: lea    eax,[r13+0x4]
0x0088048f: cmp    ecx,eax
0x00880491: jge    0x1408804cd
0x00880493: mov    esi,DWORD PTR [rsp+0x40]
0x00880497: dec    esi
0x00880499: mov    ecx,DWORD PTR [rsp+0x44]
0x0088049d: cmp    ecx,esi
0x0088049f: jl     0x1408804cd
0x008804a1: lea    eax,[rsi+0x3]
0x008804a4: cmp    ecx,eax
0x008804a6: jge    0x1408804cd
0x008804a8: mov    DWORD PTR [rip+0x1022edd],r13d        # 0x1418a338c
0x008804af: mov    eax,DWORD PTR [rsp+0x54]
0x008804b3: add    eax,0xfffffffe
0x008804b6: mov    DWORD PTR [rip+0x1022ed4],eax        # 0x1418a3390
0x008804bc: mov    BYTE PTR [rip+0x1022ec5],0x0        # 0x1418a3388
0x008804c3: mov    DWORD PTR [rip+0x1022e9b],0x22c        # 0x1418a3368
0x008804cd: mov    r13d,DWORD PTR [rsp+0x58]
0x008804d2: lea    r12d,[r13-0x1f]
0x008804d6: lea    esi,[r13-0x1e]
0x008804da: lea    r14d,[r13-0x1d]
0x008804de: mov    edi,DWORD PTR [rsp+0x40]
0x008804e2: dec    edi
0x008804e4: lea    rbx,[rip+0x1dcc7e9]        # 0x14264ccd4
0x008804eb: lea    r15d,[r13-0x20]
0x008804ef: nop
0x008804f0: mov    DWORD PTR [rip+0x1dc3e6d],r15d        # 0x142644364
0x008804f7: mov    DWORD PTR [rip+0x1dc3e6b],edi        # 0x142644368
0x008804fd: cmp    DWORD PTR [r11+0x4],0x3
0x00880502: jne    0x140880509
0x00880504: mov    edx,DWORD PTR [rbx+0x24]
0x00880507: jmp    0x14088050c
0x00880509: mov    edx,DWORD PTR [rbx-0xc]
0x0088050c: lea    rcx,[rip+0x1dc3dcd]        # 0x1426442e0
0x00880513: call   0x140ad7b10
0x00880518: cmp    DWORD PTR [rip+0x1b47149],0x0        # 0x1423c7668
0x0088051f: jle    0x140880543
0x00880521: mov    rax,QWORD PTR [rip+0x1b47138]        # 0x1423c7660
0x00880528: test   BYTE PTR [rax],0x1
0x0088052b: je     0x140880543
0x0088052d: mov    r8b,0x1
0x00880530: xor    edx,edx
0x00880532: lea    rcx,[rip+0x1dc3da7]        # 0x1426442e0
0x00880539: call   0x1400bb120
0x0088053e: mov    r11,QWORD PTR [rsp+0x48]
0x00880543: mov    DWORD PTR [rip+0x1dc3e1a],r12d        # 0x142644364
0x0088054a: mov    DWORD PTR [rip+0x1dc3e18],edi        # 0x142644368
0x00880550: cmp    DWORD PTR [r11+0x4],0x3
0x00880555: lea    rdx,[rbx+0x30]
0x00880559: je     0x14088055e
0x0088055b: mov    rdx,rbx
0x0088055e: mov    edx,DWORD PTR [rdx]
0x00880560: lea    rcx,[rip+0x1dc3d79]        # 0x1426442e0
0x00880567: call   0x140ad7b10
0x0088056c: cmp    DWORD PTR [rip+0x1b470f5],0x0        # 0x1423c7668
0x00880573: jle    0x140880597
0x00880575: mov    rax,QWORD PTR [rip+0x1b470e4]        # 0x1423c7660
0x0088057c: test   BYTE PTR [rax],0x1
0x0088057f: je     0x140880597
0x00880581: mov    r8b,0x1
0x00880584: xor    edx,edx
0x00880586: lea    rcx,[rip+0x1dc3d53]        # 0x1426442e0
0x0088058d: call   0x1400bb120
0x00880592: mov    r11,QWORD PTR [rsp+0x48]
0x00880597: mov    DWORD PTR [rip+0x1dc3dc7],esi        # 0x142644364
0x0088059d: mov    DWORD PTR [rip+0x1dc3dc5],edi        # 0x142644368
0x008805a3: cmp    DWORD PTR [r11+0x4],0x3
0x008805a8: jne    0x1408805af
0x008805aa: mov    edx,DWORD PTR [rbx+0x3c]
0x008805ad: jmp    0x1408805b2
0x008805af: mov    edx,DWORD PTR [rbx+0xc]
0x008805b2: lea    rcx,[rip+0x1dc3d27]        # 0x1426442e0
0x008805b9: call   0x140ad7b10
0x008805be: cmp    DWORD PTR [rip+0x1b470a3],0x0        # 0x1423c7668
0x008805c5: jle    0x1408805e9
0x008805c7: mov    rax,QWORD PTR [rip+0x1b47092]        # 0x1423c7660
0x008805ce: test   BYTE PTR [rax],0x1
0x008805d1: je     0x1408805e9
0x008805d3: mov    r8b,0x1
0x008805d6: xor    edx,edx
0x008805d8: lea    rcx,[rip+0x1dc3d01]        # 0x1426442e0
0x008805df: call   0x1400bb120
0x008805e4: mov    r11,QWORD PTR [rsp+0x48]
0x008805e9: mov    DWORD PTR [rip+0x1dc3d74],r14d        # 0x142644364
0x008805f0: mov    DWORD PTR [rip+0x1dc3d72],edi        # 0x142644368
0x008805f6: cmp    DWORD PTR [r11+0x4],0x3
0x008805fb: jne    0x140880602
0x008805fd: mov    edx,DWORD PTR [rbx+0x48]
0x00880600: jmp    0x140880605
0x00880602: mov    edx,DWORD PTR [rbx+0x18]
0x00880605: lea    rcx,[rip+0x1dc3cd4]        # 0x1426442e0
0x0088060c: call   0x140ad7b10
0x00880611: cmp    DWORD PTR [rip+0x1b47050],0x0        # 0x1423c7668
0x00880618: jle    0x14088063c
0x0088061a: mov    rax,QWORD PTR [rip+0x1b4703f]        # 0x1423c7660
0x00880621: test   BYTE PTR [rax],0x1
0x00880624: je     0x14088063c
0x00880626: mov    r8b,0x1
0x00880629: xor    edx,edx
0x0088062b: lea    rcx,[rip+0x1dc3cae]        # 0x1426442e0
0x00880632: call   0x1400bb120
0x00880637: mov    r11,QWORD PTR [rsp+0x48]
0x0088063c: inc    edi
0x0088063e: add    rbx,0x4
0x00880642: lea    rax,[rip+0x1dcc697]        # 0x14264cce0
0x00880649: cmp    rbx,rax
0x0088064c: jl     0x1408804f0
0x00880652: lea    ecx,[r13-0x20]
0x00880656: mov    edx,DWORD PTR [rsp+0x50]
0x0088065a: cmp    edx,ecx
0x0088065c: jl     0x14088069e
0x0088065e: lea    eax,[rcx+0x4]
0x00880661: cmp    edx,eax
0x00880663: jge    0x14088069e
0x00880665: mov    esi,DWORD PTR [rsp+0x40]
0x00880669: dec    esi
0x0088066b: mov    edx,DWORD PTR [rsp+0x44]
0x0088066f: cmp    edx,esi
0x00880671: jl     0x14088069e
0x00880673: lea    eax,[rsi+0x3]
0x00880676: cmp    edx,eax
0x00880678: jge    0x14088069e
0x0088067a: mov    DWORD PTR [rip+0x1022d0c],ecx        # 0x1418a338c
0x00880680: mov    eax,DWORD PTR [rsp+0x54]
0x00880684: add    eax,0xfffffffe
0x00880687: mov    DWORD PTR [rip+0x1022d03],eax        # 0x1418a3390
0x0088068d: mov    BYTE PTR [rip+0x1022cf4],0x0        # 0x1418a3388
0x00880694: mov    DWORD PTR [rip+0x1022cca],0x22d        # 0x1418a3368
0x0088069e: lea    r12d,[r13-0x1b]
0x008806a2: lea    esi,[r13-0x1a]
0x008806a6: lea    r14d,[r13-0x19]
0x008806aa: mov    edi,DWORD PTR [rsp+0x40]
0x008806ae: dec    edi
0x008806b0: lea    rbx,[rip+0x1dcc67d]        # 0x14264cd34
0x008806b7: lea    r15d,[r13-0x1c]
0x008806bb: nop    DWORD PTR [rax+rax*1+0x0]
0x008806c0: mov    DWORD PTR [rip+0x1dc3c9d],r15d        # 0x142644364
0x008806c7: mov    DWORD PTR [rip+0x1dc3c9b],edi        # 0x142644368
0x008806cd: cmp    DWORD PTR [r11+0x4],0x4
0x008806d2: jne    0x1408806d9
0x008806d4: mov    edx,DWORD PTR [rbx+0x24]
0x008806d7: jmp    0x1408806dc
0x008806d9: mov    edx,DWORD PTR [rbx-0xc]
0x008806dc: lea    rcx,[rip+0x1dc3bfd]        # 0x1426442e0
0x008806e3: call   0x140ad7b10
0x008806e8: cmp    DWORD PTR [rip+0x1b46f79],0x0        # 0x1423c7668
0x008806ef: jle    0x140880713
0x008806f1: mov    rax,QWORD PTR [rip+0x1b46f68]        # 0x1423c7660
0x008806f8: test   BYTE PTR [rax],0x1
0x008806fb: je     0x140880713
0x008806fd: mov    r8b,0x1
0x00880700: xor    edx,edx
0x00880702: lea    rcx,[rip+0x1dc3bd7]        # 0x1426442e0
0x00880709: call   0x1400bb120
0x0088070e: mov    r11,QWORD PTR [rsp+0x48]
0x00880713: mov    DWORD PTR [rip+0x1dc3c4a],r12d        # 0x142644364
0x0088071a: mov    DWORD PTR [rip+0x1dc3c48],edi        # 0x142644368
0x00880720: cmp    DWORD PTR [r11+0x4],0x4
0x00880725: lea    rdx,[rbx+0x30]
0x00880729: je     0x14088072e
0x0088072b: mov    rdx,rbx
0x0088072e: mov    edx,DWORD PTR [rdx]
0x00880730: lea    rcx,[rip+0x1dc3ba9]        # 0x1426442e0
0x00880737: call   0x140ad7b10
0x0088073c: cmp    DWORD PTR [rip+0x1b46f25],0x0        # 0x1423c7668
0x00880743: jle    0x140880767
0x00880745: mov    rax,QWORD PTR [rip+0x1b46f14]        # 0x1423c7660
0x0088074c: test   BYTE PTR [rax],0x1
0x0088074f: je     0x140880767
0x00880751: mov    r8b,0x1
0x00880754: xor    edx,edx
0x00880756: lea    rcx,[rip+0x1dc3b83]        # 0x1426442e0
0x0088075d: call   0x1400bb120
0x00880762: mov    r11,QWORD PTR [rsp+0x48]
0x00880767: mov    DWORD PTR [rip+0x1dc3bf7],esi        # 0x142644364
0x0088076d: mov    DWORD PTR [rip+0x1dc3bf5],edi        # 0x142644368
0x00880773: cmp    DWORD PTR [r11+0x4],0x4
0x00880778: jne    0x14088077f
0x0088077a: mov    edx,DWORD PTR [rbx+0x3c]
0x0088077d: jmp    0x140880782
0x0088077f: mov    edx,DWORD PTR [rbx+0xc]
0x00880782: lea    rcx,[rip+0x1dc3b57]        # 0x1426442e0
0x00880789: call   0x140ad7b10
0x0088078e: cmp    DWORD PTR [rip+0x1b46ed3],0x0        # 0x1423c7668
0x00880795: jle    0x1408807b9
0x00880797: mov    rax,QWORD PTR [rip+0x1b46ec2]        # 0x1423c7660
0x0088079e: test   BYTE PTR [rax],0x1
0x008807a1: je     0x1408807b9
0x008807a3: mov    r8b,0x1
0x008807a6: xor    edx,edx
0x008807a8: lea    rcx,[rip+0x1dc3b31]        # 0x1426442e0
0x008807af: call   0x1400bb120
0x008807b4: mov    r11,QWORD PTR [rsp+0x48]
0x008807b9: mov    DWORD PTR [rip+0x1dc3ba4],r14d        # 0x142644364
0x008807c0: mov    DWORD PTR [rip+0x1dc3ba2],edi        # 0x142644368
0x008807c6: cmp    DWORD PTR [r11+0x4],0x4
0x008807cb: jne    0x1408807d2
0x008807cd: mov    edx,DWORD PTR [rbx+0x48]
0x008807d0: jmp    0x1408807d5
0x008807d2: mov    edx,DWORD PTR [rbx+0x18]
0x008807d5: lea    rcx,[rip+0x1dc3b04]        # 0x1426442e0
0x008807dc: call   0x140ad7b10
0x008807e1: cmp    DWORD PTR [rip+0x1b46e80],0x0        # 0x1423c7668
0x008807e8: jle    0x14088080c
0x008807ea: mov    rax,QWORD PTR [rip+0x1b46e6f]        # 0x1423c7660
0x008807f1: test   BYTE PTR [rax],0x1
0x008807f4: je     0x14088080c
0x008807f6: mov    r8b,0x1
0x008807f9: xor    edx,edx
0x008807fb: lea    rcx,[rip+0x1dc3ade]        # 0x1426442e0
0x00880802: call   0x1400bb120
0x00880807: mov    r11,QWORD PTR [rsp+0x48]
0x0088080c: inc    edi
0x0088080e: add    rbx,0x4
0x00880812: lea    rax,[rip+0x1dcc527]        # 0x14264cd40
0x00880819: cmp    rbx,rax
0x0088081c: jl     0x1408806c0
0x00880822: lea    ecx,[r13-0x1c]
0x00880826: mov    edx,DWORD PTR [rsp+0x50]
0x0088082a: cmp    edx,ecx
0x0088082c: jl     0x14088086e
0x0088082e: lea    eax,[rcx+0x4]
0x00880831: cmp    edx,eax
0x00880833: jge    0x14088086e
0x00880835: mov    esi,DWORD PTR [rsp+0x40]
0x00880839: dec    esi
0x0088083b: mov    edx,DWORD PTR [rsp+0x44]
0x0088083f: cmp    edx,esi
0x00880841: jl     0x14088086e
0x00880843: lea    eax,[rsi+0x3]
0x00880846: cmp    edx,eax
0x00880848: jge    0x14088086e
0x0088084a: mov    DWORD PTR [rip+0x1022b3c],ecx        # 0x1418a338c
0x00880850: mov    eax,DWORD PTR [rsp+0x54]
0x00880854: add    eax,0xfffffffe
0x00880857: mov    DWORD PTR [rip+0x1022b33],eax        # 0x1418a3390
0x0088085d: mov    BYTE PTR [rip+0x1022b24],0x0        # 0x1418a3388
0x00880864: mov    DWORD PTR [rip+0x1022afa],0x22e        # 0x1418a3368
0x0088086e: lea    r12d,[r13-0x17]
0x00880872: lea    esi,[r13-0x16]
0x00880876: lea    r14d,[r13-0x15]
0x0088087a: mov    edi,DWORD PTR [rsp+0x40]
0x0088087e: dec    edi
0x00880880: lea    rbx,[rip+0x1dcc50d]        # 0x14264cd94
0x00880887: lea    r15d,[r13-0x18]
0x0088088b: nop    DWORD PTR [rax+rax*1+0x0]
0x00880890: mov    DWORD PTR [rip+0x1dc3acd],r15d        # 0x142644364
0x00880897: mov    DWORD PTR [rip+0x1dc3acb],edi        # 0x142644368
0x0088089d: cmp    DWORD PTR [r11+0x4],0x5
0x008808a2: jne    0x1408808a9
0x008808a4: mov    edx,DWORD PTR [rbx+0x24]
0x008808a7: jmp    0x1408808ac
0x008808a9: mov    edx,DWORD PTR [rbx-0xc]
0x008808ac: lea    rcx,[rip+0x1dc3a2d]        # 0x1426442e0
0x008808b3: call   0x140ad7b10
0x008808b8: cmp    DWORD PTR [rip+0x1b46da9],0x0        # 0x1423c7668
0x008808bf: jle    0x1408808e3
0x008808c1: mov    rax,QWORD PTR [rip+0x1b46d98]        # 0x1423c7660
0x008808c8: test   BYTE PTR [rax],0x1
0x008808cb: je     0x1408808e3
0x008808cd: mov    r8b,0x1
0x008808d0: xor    edx,edx
0x008808d2: lea    rcx,[rip+0x1dc3a07]        # 0x1426442e0
0x008808d9: call   0x1400bb120
0x008808de: mov    r11,QWORD PTR [rsp+0x48]
0x008808e3: mov    DWORD PTR [rip+0x1dc3a7a],r12d        # 0x142644364
0x008808ea: mov    DWORD PTR [rip+0x1dc3a78],edi        # 0x142644368
0x008808f0: cmp    DWORD PTR [r11+0x4],0x5
0x008808f5: lea    rdx,[rbx+0x30]
0x008808f9: je     0x1408808fe
0x008808fb: mov    rdx,rbx
0x008808fe: mov    edx,DWORD PTR [rdx]
0x00880900: lea    rcx,[rip+0x1dc39d9]        # 0x1426442e0
0x00880907: call   0x140ad7b10
0x0088090c: cmp    DWORD PTR [rip+0x1b46d55],0x0        # 0x1423c7668
0x00880913: jle    0x140880937
0x00880915: mov    rax,QWORD PTR [rip+0x1b46d44]        # 0x1423c7660
0x0088091c: test   BYTE PTR [rax],0x1
0x0088091f: je     0x140880937
0x00880921: mov    r8b,0x1
0x00880924: xor    edx,edx
0x00880926: lea    rcx,[rip+0x1dc39b3]        # 0x1426442e0
0x0088092d: call   0x1400bb120
0x00880932: mov    r11,QWORD PTR [rsp+0x48]
0x00880937: mov    DWORD PTR [rip+0x1dc3a27],esi        # 0x142644364
0x0088093d: mov    DWORD PTR [rip+0x1dc3a25],edi        # 0x142644368
0x00880943: cmp    DWORD PTR [r11+0x4],0x5
0x00880948: jne    0x14088094f
0x0088094a: mov    edx,DWORD PTR [rbx+0x3c]
0x0088094d: jmp    0x140880952
0x0088094f: mov    edx,DWORD PTR [rbx+0xc]
0x00880952: lea    rcx,[rip+0x1dc3987]        # 0x1426442e0
0x00880959: call   0x140ad7b10
0x0088095e: cmp    DWORD PTR [rip+0x1b46d03],0x0        # 0x1423c7668
0x00880965: jle    0x140880989
0x00880967: mov    rax,QWORD PTR [rip+0x1b46cf2]        # 0x1423c7660
0x0088096e: test   BYTE PTR [rax],0x1
0x00880971: je     0x140880989
0x00880973: mov    r8b,0x1
0x00880976: xor    edx,edx
0x00880978: lea    rcx,[rip+0x1dc3961]        # 0x1426442e0
0x0088097f: call   0x1400bb120
0x00880984: mov    r11,QWORD PTR [rsp+0x48]
0x00880989: mov    DWORD PTR [rip+0x1dc39d4],r14d        # 0x142644364
0x00880990: mov    DWORD PTR [rip+0x1dc39d2],edi        # 0x142644368
0x00880996: cmp    DWORD PTR [r11+0x4],0x5
0x0088099b: jne    0x1408809a2
0x0088099d: mov    edx,DWORD PTR [rbx+0x48]
0x008809a0: jmp    0x1408809a5
0x008809a2: mov    edx,DWORD PTR [rbx+0x18]
0x008809a5: lea    rcx,[rip+0x1dc3934]        # 0x1426442e0
0x008809ac: call   0x140ad7b10
0x008809b1: cmp    DWORD PTR [rip+0x1b46cb0],0x0        # 0x1423c7668
0x008809b8: jle    0x1408809dc
0x008809ba: mov    rax,QWORD PTR [rip+0x1b46c9f]        # 0x1423c7660
0x008809c1: test   BYTE PTR [rax],0x1
0x008809c4: je     0x1408809dc
0x008809c6: mov    r8b,0x1
0x008809c9: xor    edx,edx
0x008809cb: lea    rcx,[rip+0x1dc390e]        # 0x1426442e0
0x008809d2: call   0x1400bb120
0x008809d7: mov    r11,QWORD PTR [rsp+0x48]
0x008809dc: inc    edi
0x008809de: add    rbx,0x4
0x008809e2: lea    rax,[rip+0x1dcc3b7]        # 0x14264cda0
0x008809e9: cmp    rbx,rax
0x008809ec: jl     0x140880890
0x008809f2: lea    ecx,[r13-0x18]
0x008809f6: mov    edx,DWORD PTR [rsp+0x50]
0x008809fa: cmp    edx,ecx
0x008809fc: jl     0x140880a41
0x008809fe: lea    eax,[rcx+0x4]
0x00880a01: cmp    edx,eax
0x00880a03: jge    0x140880a41
0x00880a05: mov    eax,DWORD PTR [rsp+0x40]
0x00880a09: dec    eax
0x00880a0b: mov    r8d,DWORD PTR [rsp+0x44]
0x00880a10: cmp    r8d,eax
0x00880a13: jl     0x140880a41
0x00880a15: add    eax,0x3
0x00880a18: cmp    r8d,eax
0x00880a1b: jge    0x140880a41
0x00880a1d: mov    DWORD PTR [rip+0x1022969],ecx        # 0x1418a338c
0x00880a23: mov    eax,DWORD PTR [rsp+0x54]
0x00880a27: add    eax,0xfffffffe
0x00880a2a: mov    DWORD PTR [rip+0x1022960],eax        # 0x1418a3390
0x00880a30: mov    BYTE PTR [rip+0x1022951],0x0        # 0x1418a3388
0x00880a37: mov    DWORD PTR [rip+0x1022927],0x22f        # 0x1418a3368
0x00880a41: lea    r12d,[r13-0x13]
0x00880a45: lea    esi,[r13-0x12]
0x00880a49: lea    r14d,[r13-0x11]
0x00880a4d: mov    r13d,DWORD PTR [rsp+0x40]
0x00880a52: dec    r13d
0x00880a55: mov    edi,r13d
0x00880a58: lea    rbx,[rip+0x1dcc395]        # 0x14264cdf4
0x00880a5f: mov    r15d,DWORD PTR [rsp+0x60]
0x00880a64: nop    DWORD PTR [rax+0x0]
0x00880a68: nop    DWORD PTR [rax+rax*1+0x0]
0x00880a70: mov    DWORD PTR [rip+0x1dc38ed],r15d        # 0x142644364
0x00880a77: mov    DWORD PTR [rip+0x1dc38eb],edi        # 0x142644368
0x00880a7d: cmp    DWORD PTR [r11+0x4],0x6
0x00880a82: jne    0x140880a89
0x00880a84: mov    edx,DWORD PTR [rbx+0x24]
0x00880a87: jmp    0x140880a8c
0x00880a89: mov    edx,DWORD PTR [rbx-0xc]
0x00880a8c: lea    rcx,[rip+0x1dc384d]        # 0x1426442e0
0x00880a93: call   0x140ad7b10
0x00880a98: cmp    DWORD PTR [rip+0x1b46bc9],0x0        # 0x1423c7668
0x00880a9f: jle    0x140880ac3
0x00880aa1: mov    rax,QWORD PTR [rip+0x1b46bb8]        # 0x1423c7660
0x00880aa8: test   BYTE PTR [rax],0x1
0x00880aab: je     0x140880ac3
0x00880aad: mov    r8b,0x1
0x00880ab0: xor    edx,edx
0x00880ab2: lea    rcx,[rip+0x1dc3827]        # 0x1426442e0
0x00880ab9: call   0x1400bb120
0x00880abe: mov    r11,QWORD PTR [rsp+0x48]
0x00880ac3: mov    DWORD PTR [rip+0x1dc389a],r12d        # 0x142644364
0x00880aca: mov    DWORD PTR [rip+0x1dc3898],edi        # 0x142644368
0x00880ad0: cmp    DWORD PTR [r11+0x4],0x6
0x00880ad5: lea    rdx,[rbx+0x30]
0x00880ad9: je     0x140880ade
0x00880adb: mov    rdx,rbx
0x00880ade: mov    edx,DWORD PTR [rdx]
0x00880ae0: lea    rcx,[rip+0x1dc37f9]        # 0x1426442e0
0x00880ae7: call   0x140ad7b10
0x00880aec: cmp    DWORD PTR [rip+0x1b46b75],0x0        # 0x1423c7668
0x00880af3: jle    0x140880b17
0x00880af5: mov    rax,QWORD PTR [rip+0x1b46b64]        # 0x1423c7660
0x00880afc: test   BYTE PTR [rax],0x1
0x00880aff: je     0x140880b17
0x00880b01: mov    r8b,0x1
0x00880b04: xor    edx,edx
0x00880b06: lea    rcx,[rip+0x1dc37d3]        # 0x1426442e0
0x00880b0d: call   0x1400bb120
0x00880b12: mov    r11,QWORD PTR [rsp+0x48]
0x00880b17: mov    DWORD PTR [rip+0x1dc3847],esi        # 0x142644364
0x00880b1d: mov    DWORD PTR [rip+0x1dc3845],edi        # 0x142644368
0x00880b23: cmp    DWORD PTR [r11+0x4],0x6
0x00880b28: jne    0x140880b2f
0x00880b2a: mov    edx,DWORD PTR [rbx+0x3c]
0x00880b2d: jmp    0x140880b32
0x00880b2f: mov    edx,DWORD PTR [rbx+0xc]
0x00880b32: lea    rcx,[rip+0x1dc37a7]        # 0x1426442e0
0x00880b39: call   0x140ad7b10
0x00880b3e: cmp    DWORD PTR [rip+0x1b46b23],0x0        # 0x1423c7668
0x00880b45: jle    0x140880b69
0x00880b47: mov    rax,QWORD PTR [rip+0x1b46b12]        # 0x1423c7660
0x00880b4e: test   BYTE PTR [rax],0x1
0x00880b51: je     0x140880b69
0x00880b53: mov    r8b,0x1
0x00880b56: xor    edx,edx
0x00880b58: lea    rcx,[rip+0x1dc3781]        # 0x1426442e0
0x00880b5f: call   0x1400bb120
0x00880b64: mov    r11,QWORD PTR [rsp+0x48]
0x00880b69: mov    DWORD PTR [rip+0x1dc37f4],r14d        # 0x142644364
0x00880b70: mov    DWORD PTR [rip+0x1dc37f2],edi        # 0x142644368
0x00880b76: cmp    DWORD PTR [r11+0x4],0x6
0x00880b7b: jne    0x140880b82
0x00880b7d: mov    edx,DWORD PTR [rbx+0x48]
0x00880b80: jmp    0x140880b85
0x00880b82: mov    edx,DWORD PTR [rbx+0x18]
0x00880b85: lea    rcx,[rip+0x1dc3754]        # 0x1426442e0
0x00880b8c: call   0x140ad7b10
0x00880b91: cmp    DWORD PTR [rip+0x1b46ad0],0x0        # 0x1423c7668
0x00880b98: jle    0x140880bbc
0x00880b9a: mov    rax,QWORD PTR [rip+0x1b46abf]        # 0x1423c7660
0x00880ba1: test   BYTE PTR [rax],0x1
0x00880ba4: je     0x140880bbc
0x00880ba6: mov    r8b,0x1
0x00880ba9: xor    edx,edx
0x00880bab: lea    rcx,[rip+0x1dc372e]        # 0x1426442e0
0x00880bb2: call   0x1400bb120
0x00880bb7: mov    r11,QWORD PTR [rsp+0x48]
0x00880bbc: inc    edi
0x00880bbe: add    rbx,0x4
0x00880bc2: lea    rax,[rip+0x1dcc237]        # 0x14264ce00
0x00880bc9: cmp    rbx,rax
0x00880bcc: jl     0x140880a70
0x00880bd2: mov    ecx,r15d
0x00880bd5: mov    edi,DWORD PTR [rsp+0x50]
0x00880bd9: cmp    edi,r15d
0x00880bdc: mov    r15d,DWORD PTR [rsp+0x5c]
0x00880be1: jl     0x140880c28
0x00880be3: lea    eax,[rcx+0x4]
0x00880be6: cmp    edi,eax
0x00880be8: jge    0x140880c28
0x00880bea: mov    r11d,DWORD PTR [rsp+0x44]
0x00880bef: cmp    r11d,r13d
0x00880bf2: jl     0x140880c28
0x00880bf4: lea    eax,[r13+0x3]
0x00880bf8: mov    r14,QWORD PTR [rsp+0x48]
0x00880bfd: cmp    r11d,eax
0x00880c00: jge    0x140880c33
0x00880c02: mov    DWORD PTR [rip+0x1022784],ecx        # 0x1418a338c
0x00880c08: mov    eax,DWORD PTR [rsp+0x54]
0x00880c0c: add    eax,0xfffffffe
0x00880c0f: mov    DWORD PTR [rip+0x102277b],eax        # 0x1418a3390
0x00880c15: mov    BYTE PTR [rip+0x102276c],0x0        # 0x1418a3388
0x00880c1c: mov    DWORD PTR [rip+0x1022742],0x230        # 0x1418a3368
0x00880c26: jmp    0x140880c33
0x00880c28: mov    r14,QWORD PTR [rsp+0x48]
0x00880c2d: jmp    0x140880c33
0x00880c2f: mov    edi,DWORD PTR [rsp+0x50]
0x00880c33: lea    r13d,[r15+0x1]
0x00880c37: mov    DWORD PTR [rsp+0x54],r13d
0x00880c3c: mov    r8d,DWORD PTR [rsp+0x58]
0x00880c41: lea    r12d,[r8-0x1]
0x00880c45: mov    r10d,DWORD PTR [rsp+0x40]
0x00880c4a: add    r10d,0x2
0x00880c4e: mov    DWORD PTR [rbp-0x80],r10d
0x00880c52: mov    ecx,DWORD PTR [rsp+0x74]
0x00880c56: dec    ecx
0x00880c58: sub    ecx,r10d
0x00880c5b: inc    ecx
0x00880c5d: mov    eax,0x55555556
0x00880c62: imul   ecx
0x00880c64: mov    r9d,edx
0x00880c67: shr    r9d,0x1f
0x00880c6b: add    r9d,edx
0x00880c6e: mov    DWORD PTR [rsp+0x5c],r9d
0x00880c73: mov    rcx,QWORD PTR [r14+0x20]
0x00880c77: sub    rcx,QWORD PTR [r14+0x18]
0x00880c7b: sar    rcx,0x3
0x00880c7f: cmp    ecx,r9d
0x00880c82: jle    0x140880c88
0x00880c84: lea    r12d,[r8-0x3]
0x00880c88: mov    ebx,r10d
0x00880c8b: mov    DWORD PTR [rsp+0x40],ebx
0x00880c8f: mov    eax,DWORD PTR [r14+0x10c]
0x00880c96: sub    ecx,r9d
0x00880c99: cmp    eax,ecx
0x00880c9b: cmovle ecx,eax
0x00880c9e: xor    r15d,r15d
0x00880ca1: mov    eax,r15d
0x00880ca4: test   ecx,ecx
0x00880ca6: cmovns eax,ecx
0x00880ca9: mov    DWORD PTR [rsp+0x74],eax
0x00880cad: movsxd rsi,eax
0x00880cb0: mov    DWORD PTR [rsp+0x60],esi
0x00880cb4: add    eax,r9d
0x00880cb7: mov    DWORD PTR [rsp+0x70],eax
0x00880cbb: cmp    esi,eax
0x00880cbd: jge    0x1408816f7
0x00880cc3: mov    r8,rsi
0x00880cc6: mov    QWORD PTR [rsp+0x78],rsi
0x00880ccb: movsxd rax,r10d
0x00880cce: mov    QWORD PTR [rsp+0x68],rax
0x00880cd3: nop    DWORD PTR [rax+0x0]
0x00880cd7: nop    WORD PTR [rax+rax*1+0x0]
0x00880ce0: mov    rdx,QWORD PTR [r14+0x18]
0x00880ce4: mov    rcx,QWORD PTR [r14+0x20]
0x00880ce8: sub    rcx,rdx
0x00880ceb: sar    rcx,0x3
0x00880cef: movsxd rax,esi
0x00880cf2: cmp    rax,rcx
0x00880cf5: jae    0x1408816eb
0x00880cfb: mov    rcx,QWORD PTR [rdx+r8*8]
0x00880cff: mov    rax,QWORD PTR [rcx]
0x00880d02: mov    edx,DWORD PTR [rbp-0x7c]
0x00880d05: call   QWORD PTR [rax+0xc8]
0x00880d0b: mov    r15d,eax
0x00880d0e: mov    DWORD PTR [rip+0x1dc3654],0x1010007        # 0x14264436c
0x00880d18: mov    edi,r13d
0x00880d1b: cmp    r13d,r12d
0x00880d1e: jg     0x140880e15
0x00880d24: lea    r14d,[rbx+0x3]
0x00880d28: nop    DWORD PTR [rax+rax*1+0x0]
0x00880d30: mov    esi,ebx
0x00880d32: cmp    ebx,r14d
0x00880d35: jge    0x140880e01
0x00880d3b: lea    rbx,[rip+0x1dc514a]        # 0x142645e8c
0x00880d42: nop    DWORD PTR [rax+0x0]
0x00880d46: data16 nop WORD PTR [rax+rax*1+0x0]
0x00880d50: mov    DWORD PTR [rip+0x1dc360e],edi        # 0x142644364
0x00880d56: mov    DWORD PTR [rip+0x1dc360c],esi        # 0x142644368
0x00880d5c: test   r15d,r15d
0x00880d5f: je     0x140880d9c
0x00880d61: cmp    edi,r13d
0x00880d64: jne    0x140880d6b
0x00880d66: mov    edx,DWORD PTR [rbx-0xc]
0x00880d69: jmp    0x140880dbc
0x00880d6b: lea    eax,[r13+0x1]
0x00880d6f: cmp    edi,eax
0x00880d71: jne    0x140880d77
0x00880d73: mov    edx,DWORD PTR [rbx]
0x00880d75: jmp    0x140880dbc
0x00880d77: lea    eax,[r13+0x2]
0x00880d7b: cmp    edi,eax
0x00880d7d: jne    0x140880d83
0x00880d7f: mov    edx,DWORD PTR [rbx]
0x00880d81: jmp    0x140880dbc
0x00880d83: lea    eax,[r13+0x3]
0x00880d87: cmp    edi,eax
0x00880d89: jne    0x140880d8f
0x00880d8b: mov    edx,DWORD PTR [rbx]
0x00880d8d: jmp    0x140880dbc
0x00880d8f: lea    eax,[r13+0x4]
0x00880d93: cmp    edi,eax
0x00880d95: jne    0x140880da9
0x00880d97: mov    edx,DWORD PTR [rbx+0xc]
0x00880d9a: jmp    0x140880dbc
0x00880d9c: cmp    edi,r13d
0x00880d9f: jne    0x140880da9
0x00880da1: mov    edx,DWORD PTR [rbx-0x204]
0x00880da7: jmp    0x140880dbc
0x00880da9: cmp    edi,r12d
0x00880dac: jne    0x140880db6
0x00880dae: mov    edx,DWORD PTR [rbx-0x1ec]
0x00880db4: jmp    0x140880dbc
0x00880db6: mov    edx,DWORD PTR [rbx-0x1f8]
0x00880dbc: lea    rcx,[rip+0x1dc351d]        # 0x1426442e0
0x00880dc3: call   0x140ad7b10
0x00880dc8: cmp    DWORD PTR [rip+0x1b46899],0x0        # 0x1423c7668
0x00880dcf: jle    0x140880dee
0x00880dd1: mov    rax,QWORD PTR [rip+0x1b46888]        # 0x1423c7660
0x00880dd8: test   BYTE PTR [rax],0x1
0x00880ddb: je     0x140880dee
0x00880ddd: mov    r8b,0x1
0x00880de0: xor    edx,edx
0x00880de2: lea    rcx,[rip+0x1dc34f7]        # 0x1426442e0
0x00880de9: call   0x1400bb120
0x00880dee: inc    esi
0x00880df0: add    rbx,0x4
0x00880df4: cmp    esi,r14d
0x00880df7: jl     0x140880d50
0x00880dfd: mov    ebx,DWORD PTR [rsp+0x40]
0x00880e01: inc    edi
0x00880e03: cmp    edi,r12d
0x00880e06: jle    0x140880d30
0x00880e0c: mov    r14,QWORD PTR [rsp+0x48]
0x00880e11: mov    esi,DWORD PTR [rsp+0x60]
0x00880e15: test   r15d,r15d
0x00880e18: je     0x140880e54
0x00880e1a: mov    DWORD PTR [rip+0x1dc3543],r13d        # 0x142644364
0x00880e21: mov    DWORD PTR [rip+0x1dc3541],ebx        # 0x142644368
0x00880e27: mov    BYTE PTR [rsp+0x30],0x0
0x00880e2c: mov    DWORD PTR [rsp+0x28],0x3
0x00880e34: mov    DWORD PTR [rsp+0x20],0x5
0x00880e3c: mov    r9d,0x2
0x00880e42: mov    r8d,r9d
0x00880e45: mov    edx,r15d
0x00880e48: lea    rcx,[rip+0x1dc3491]        # 0x1426442e0
0x00880e4f: call   0x140ad7db0
0x00880e54: mov    rax,QWORD PTR [r14+0x18]
0x00880e58: mov    r15,QWORD PTR [rsp+0x78]
0x00880e5d: mov    rcx,QWORD PTR [rax+r15*8]
0x00880e61: mov    ecx,DWORD PTR [rcx+0x8]
0x00880e64: add    ecx,0x7
0x00880e67: add    ecx,r13d
0x00880e6a: mov    DWORD PTR [rip+0x1dc34f4],ecx        # 0x142644364
0x00880e70: inc    ebx
0x00880e72: mov    DWORD PTR [rip+0x1dc34f0],ebx        # 0x142644368
0x00880e78: mov    edx,esi
0x00880e7a: sub    edx,DWORD PTR [rsp+0x74]
0x00880e7e: add    edx,0x52
0x00880e81: call   0x140c364f0
0x00880e86: xorps  xmm0,xmm0
0x00880e89: movups XMMWORD PTR [rbp-0x78],xmm0
0x00880e8d: mov    QWORD PTR [rbp-0x68],0x0
0x00880e95: mov    QWORD PTR [rbp-0x60],0xf
0x00880e9d: mov    BYTE PTR [rbp-0x78],0x0
0x00880ea1: mov    eax,DWORD PTR [r14+0x4]
0x00880ea5: sub    eax,0x8
0x00880ea8: lea    rdx,[rbp-0x78]
0x00880eac: cmp    eax,0x1
0x00880eaf: mov    rax,QWORD PTR [r14+0x18]
0x00880eb3: mov    rcx,QWORD PTR [rax+r15*8]
0x00880eb7: mov    rax,QWORD PTR [rcx]
0x00880eba: jbe    0x140880ec1
0x00880ebc: call   QWORD PTR [rax+0x8]
0x00880ebf: jmp    0x140880ec4
0x00880ec1: call   QWORD PTR [rax+0x10]
0x00880ec4: mov    DWORD PTR [rip+0x1dc349e],0x1010007        # 0x14264436c
0x00880ece: mov    rax,QWORD PTR [r14+0x18]
0x00880ed2: mov    rcx,QWORD PTR [rax+r15*8]
0x00880ed6: mov    ecx,DWORD PTR [rcx+0x8]
0x00880ed9: add    ecx,0x9
0x00880edc: add    ecx,r13d
0x00880edf: mov    DWORD PTR [rip+0x1dc347f],ecx        # 0x142644364
0x00880ee5: mov    DWORD PTR [rip+0x1dc347d],ebx        # 0x142644368
0x00880eeb: mov    rax,QWORD PTR [r14+0x18]
0x00880eef: mov    rax,QWORD PTR [rax+r15*8]
0x00880ef3: mov    ebx,r12d
0x00880ef6: sub    ebx,DWORD PTR [rax+0x8]
0x00880ef9: sub    ebx,r13d
0x00880efc: mov    rax,QWORD PTR [rbp-0x68]
0x00880f00: movsxd rsi,ebx
0x00880f03: cmp    DWORD PTR [r14+0x4],0x0
0x00880f08: jne    0x140880f75
0x00880f0a: sub    rsi,0x23
0x00880f0e: cmp    rax,rsi
0x00880f11: jb     0x140880ffd
0x00880f17: lea    edi,[rbx-0x22]
0x00880f1a: test   edi,edi
0x00880f1c: js     0x140880f51
0x00880f1e: movsxd rdx,ebx
0x00880f21: sub    rdx,0x22
0x00880f25: cmp    rdx,rax
0x00880f28: ja     0x140880f42
0x00880f2a: mov    QWORD PTR [rbp-0x68],rdx
0x00880f2e: lea    rax,[rbp-0x78]
0x00880f32: cmp    QWORD PTR [rbp-0x60],0xf
0x00880f37: cmova  rax,QWORD PTR [rbp-0x78]
0x00880f3c: mov    BYTE PTR [rdx+rax*1],0x0
0x00880f40: jmp    0x140880f51
0x00880f42: sub    rdx,rax
0x00880f45: xor    r8d,r8d
0x00880f48: lea    rcx,[rbp-0x78]
0x00880f4c: call   0x1400e1240
0x00880f51: cmp    edi,0x3
0x00880f54: jle    0x140880ffd
0x00880f5a: lea    rcx,[rbp-0x78]
0x00880f5e: cmp    QWORD PTR [rbp-0x60],0xf
0x00880f63: cmova  rcx,QWORD PTR [rbp-0x78]
0x00880f68: movsxd rax,ebx
0x00880f6b: mov    BYTE PTR [rax+rcx*1-0x25],0x2e
0x00880f70: lea    eax,[rbx-0x24]
0x00880f73: jmp    0x140880fd6
0x00880f75: sub    rsi,0xe
0x00880f79: cmp    rax,rsi
0x00880f7c: jb     0x140880ffd
0x00880f7e: lea    edi,[rbx-0xd]
0x00880f81: test   edi,edi
0x00880f83: js     0x140880fb8
0x00880f85: movsxd rdx,ebx
0x00880f88: sub    rdx,0xd
0x00880f8c: cmp    rdx,rax
0x00880f8f: ja     0x140880fa9
0x00880f91: mov    QWORD PTR [rbp-0x68],rdx
0x00880f95: lea    rax,[rbp-0x78]
0x00880f99: cmp    QWORD PTR [rbp-0x60],0xf
0x00880f9e: cmova  rax,QWORD PTR [rbp-0x78]
0x00880fa3: mov    BYTE PTR [rax+rdx*1],0x0
0x00880fa7: jmp    0x140880fb8
0x00880fa9: sub    rdx,rax
0x00880fac: xor    r8d,r8d
0x00880faf: lea    rcx,[rbp-0x78]
0x00880fb3: call   0x1400e1240
0x00880fb8: cmp    edi,0x3
0x00880fbb: jle    0x140880ffd
0x00880fbd: lea    rcx,[rbp-0x78]
0x00880fc1: cmp    QWORD PTR [rbp-0x60],0xf
0x00880fc6: cmova  rcx,QWORD PTR [rbp-0x78]
0x00880fcb: movsxd rax,ebx
0x00880fce: mov    BYTE PTR [rax+rcx*1-0x10],0x2e
0x00880fd3: lea    eax,[rbx-0xf]
0x00880fd6: lea    rdx,[rbp-0x78]
0x00880fda: cmp    QWORD PTR [rbp-0x60],0xf
0x00880fdf: cmova  rdx,QWORD PTR [rbp-0x78]
0x00880fe4: movsxd rcx,eax
0x00880fe7: mov    BYTE PTR [rcx+rdx*1],0x2e
0x00880feb: lea    rax,[rbp-0x78]
0x00880fef: cmp    QWORD PTR [rbp-0x60],0xf
0x00880ff4: cmova  rax,QWORD PTR [rbp-0x78]
0x00880ff9: mov    BYTE PTR [rax+rsi*1],0x2e
0x00880ffd: xor    r9d,r9d
0x00881000: lea    rdx,[rbp-0x78]
0x00881004: lea    rcx,[rip+0x1dc32d5]        # 0x1426442e0
0x0088100b: call   0x140ad69a0
0x00881010: mov    rax,QWORD PTR [r14+0x18]
0x00881014: mov    rcx,QWORD PTR [rax+r15*8]
0x00881018: mov    rax,QWORD PTR [rcx]
0x0088101b: call   QWORD PTR [rax+0xd8]
0x00881021: test   rax,rax
0x00881024: je     0x140881151
0x0088102a: xorps  xmm0,xmm0
0x0088102d: movups XMMWORD PTR [rbp-0x30],xmm0
0x00881031: mov    QWORD PTR [rbp-0x20],0x0
0x00881039: mov    QWORD PTR [rbp-0x18],0xf
0x00881041: mov    BYTE PTR [rbp-0x30],0x0
0x00881045: mov    r8,rax
0x00881048: lea    rdx,[rbp-0x30]
0x0088104c: mov    rcx,QWORD PTR [rip+0x1b5dfad]        # 0x1423df000
0x00881053: call   0x14138e870
0x00881058: mov    DWORD PTR [rip+0x1dc330a],0x1010003        # 0x14264436c
0x00881062: mov    rax,QWORD PTR [r14+0x18]
0x00881066: mov    rcx,QWORD PTR [rax+r15*8]
0x0088106a: mov    ecx,DWORD PTR [rcx+0x8]
0x0088106d: add    ecx,0x7
0x00881070: add    ecx,r13d
0x00881073: mov    DWORD PTR [rip+0x1dc32eb],ecx        # 0x142644364
0x00881079: mov    r14d,DWORD PTR [rsp+0x40]
0x0088107e: lea    eax,[r14+0x2]
0x00881082: mov    DWORD PTR [rip+0x1dc32e0],eax        # 0x142644368
0x00881088: mov    r15,QWORD PTR [rsp+0x48]
0x0088108d: mov    rax,QWORD PTR [r15+0x18]
0x00881091: mov    rcx,QWORD PTR [rsp+0x78]
0x00881096: mov    rcx,QWORD PTR [rax+rcx*8]
0x0088109a: mov    ebx,r12d
0x0088109d: sub    ebx,DWORD PTR [rcx+0x8]
0x008810a0: sub    ebx,r13d
0x008810a3: movsxd rsi,ebx
0x008810a6: sub    rsi,0x21
0x008810aa: mov    rax,QWORD PTR [rbp-0x20]
0x008810ae: cmp    rax,rsi
0x008810b1: jb     0x140881132
0x008810b3: lea    edi,[rbx-0x20]
0x008810b6: test   edi,edi
0x008810b8: js     0x1408810ed
0x008810ba: movsxd rdx,ebx
0x008810bd: sub    rdx,0x20
0x008810c1: cmp    rdx,rax
0x008810c4: ja     0x1408810de
0x008810c6: mov    QWORD PTR [rbp-0x20],rdx
0x008810ca: lea    rax,[rbp-0x30]
0x008810ce: cmp    QWORD PTR [rbp-0x18],0xf
0x008810d3: cmova  rax,QWORD PTR [rbp-0x30]
0x008810d8: mov    BYTE PTR [rax+rdx*1],0x0
0x008810dc: jmp    0x1408810ed
0x008810de: sub    rdx,rax
0x008810e1: xor    r8d,r8d
0x008810e4: lea    rcx,[rbp-0x30]
0x008810e8: call   0x1400e1240
0x008810ed: cmp    edi,0x3
0x008810f0: jle    0x140881132
0x008810f2: lea    rcx,[rbp-0x30]
0x008810f6: cmp    QWORD PTR [rbp-0x18],0xf
0x008810fb: cmova  rcx,QWORD PTR [rbp-0x30]
0x00881100: movsxd rax,ebx
0x00881103: mov    BYTE PTR [rax+rcx*1-0x23],0x2e
0x00881108: lea    rdx,[rbp-0x30]
0x0088110c: cmp    QWORD PTR [rbp-0x18],0xf
0x00881111: cmova  rdx,QWORD PTR [rbp-0x30]
0x00881116: lea    eax,[rbx-0x22]
0x00881119: movsxd rcx,eax
0x0088111c: mov    BYTE PTR [rcx+rdx*1],0x2e
0x00881120: lea    rax,[rbp-0x30]
0x00881124: cmp    QWORD PTR [rbp-0x18],0xf
0x00881129: cmova  rax,QWORD PTR [rbp-0x30]
0x0088112e: mov    BYTE PTR [rax+rsi*1],0x2e
0x00881132: xor    r9d,r9d
0x00881135: lea    rdx,[rbp-0x30]
0x00881139: lea    rcx,[rip+0x1dc31a0]        # 0x1426442e0
0x00881140: call   0x140ad69a0
0x00881145: nop
0x00881146: lea    rcx,[rbp-0x30]
0x0088114a: call   0x14006f7e0
0x0088114f: jmp    0x14088115b
0x00881151: mov    r14d,DWORD PTR [rsp+0x40]
0x00881156: mov    r15,QWORD PTR [rsp+0x48]
0x0088115b: mov    rax,QWORD PTR [r15+0x18]
0x0088115f: mov    rcx,QWORD PTR [rsp+0x78]
0x00881164: mov    rcx,QWORD PTR [rax+rcx*8]
0x00881168: mov    rax,QWORD PTR [rcx]
0x0088116b: call   QWORD PTR [rax+0xf8]
0x00881171: mov    r15d,eax
0x00881174: test   al,0x1
0x00881176: je     0x140881233
0x0088117c: mov    esi,r14d
0x0088117f: lea    r14,[rip+0x1dce9ce]        # 0x14264fb54
0x00881186: data16 nop WORD PTR [rax+rax*1+0x0]
0x00881190: lea    r11d,[r12-0x15]
0x00881195: mov    rbx,r14
0x00881198: mov    edi,0x3
0x0088119d: nop    DWORD PTR [rax]
0x008811a0: mov    DWORD PTR [rip+0x1dc31bd],r11d        # 0x142644364
0x008811a7: mov    DWORD PTR [rip+0x1dc31bb],esi        # 0x142644368
0x008811ad: xor    r8d,r8d
0x008811b0: mov    edx,DWORD PTR [rbx]
0x008811b2: lea    rcx,[rip+0x1dc3127]        # 0x1426442e0
0x008811b9: call   0x140ad8140
0x008811be: inc    r11d
0x008811c1: lea    rbx,[rbx+0xc]
0x008811c5: sub    rdi,0x1
0x008811c9: jne    0x1408811a0
0x008811cb: inc    esi
0x008811cd: add    r14,0x4
0x008811d1: lea    rax,[rip+0x1dce988]        # 0x14264fb60
0x008811d8: cmp    r14,rax
0x008811db: jl     0x140881190
0x008811dd: lea    eax,[r12-0x15]
0x008811e2: mov    edi,DWORD PTR [rsp+0x50]
0x008811e6: cmp    edi,eax
0x008811e8: mov    r13d,DWORD PTR [rsp+0x54]
0x008811ed: jl     0x140881237
0x008811ef: add    eax,0x4
0x008811f2: mov    ecx,DWORD PTR [rsp+0x40]
0x008811f6: cmp    edi,eax
0x008811f8: jge    0x14088123b
0x008811fa: movsxd rdx,DWORD PTR [rsp+0x44]
0x008811ff: cmp    rdx,QWORD PTR [rsp+0x68]
0x00881204: jl     0x14088123b
0x00881206: lea    eax,[rcx+0x3]
0x00881209: cmp    edx,eax
0x0088120b: jge    0x14088123b
0x0088120d: mov    eax,DWORD PTR [rsp+0x58]
0x00881211: add    eax,0x2
0x00881214: mov    DWORD PTR [rip+0x1022172],eax        # 0x1418a338c
0x0088121a: mov    DWORD PTR [rip+0x1022170],ecx        # 0x1418a3390
0x00881220: mov    BYTE PTR [rip+0x1022161],0x0        # 0x1418a3388
0x00881227: mov    DWORD PTR [rip+0x1022137],0x231        # 0x1418a3368
0x00881231: jmp    0x14088123b
0x00881233: mov    edi,DWORD PTR [rsp+0x50]
0x00881237: mov    ecx,DWORD PTR [rsp+0x40]
0x0088123b: test   r15b,0x2
0x0088123f: je     0x1408812f3
0x00881245: mov    esi,ecx
0x00881247: lea    r14,[rip+0x1dce92a]        # 0x14264fb78
0x0088124e: xchg   ax,ax
0x00881250: lea    r11d,[r12-0x12]
0x00881255: mov    rbx,r14
0x00881258: mov    edi,0x3
0x0088125d: nop    DWORD PTR [rax]
0x00881260: mov    DWORD PTR [rip+0x1dc30fd],r11d        # 0x142644364
0x00881267: mov    DWORD PTR [rip+0x1dc30fb],esi        # 0x142644368
0x0088126d: xor    r8d,r8d
0x00881270: mov    edx,DWORD PTR [rbx]
0x00881272: lea    rcx,[rip+0x1dc3067]        # 0x1426442e0
0x00881279: call   0x140ad8140
0x0088127e: inc    r11d
0x00881281: lea    rbx,[rbx+0xc]
0x00881285: sub    rdi,0x1
0x00881289: jne    0x140881260
0x0088128b: inc    esi
0x0088128d: add    r14,0x4
0x00881291: lea    rax,[rip+0x1dce8ec]        # 0x14264fb84
0x00881298: cmp    r14,rax
0x0088129b: jl     0x140881250
0x0088129d: lea    eax,[r12-0x12]
0x008812a2: mov    edi,DWORD PTR [rsp+0x50]
0x008812a6: cmp    edi,eax
0x008812a8: mov    r13d,DWORD PTR [rsp+0x54]
0x008812ad: jl     0x1408812f3
0x008812af: add    eax,0x4
0x008812b2: mov    ecx,DWORD PTR [rsp+0x40]
0x008812b6: cmp    edi,eax
0x008812b8: jge    0x1408812f7
0x008812ba: movsxd rdx,DWORD PTR [rsp+0x44]
0x008812bf: cmp    rdx,QWORD PTR [rsp+0x68]
0x008812c4: jl     0x1408812f7
0x008812c6: lea    eax,[rcx+0x3]
0x008812c9: cmp    edx,eax
0x008812cb: jge    0x1408812f7
0x008812cd: mov    eax,DWORD PTR [rsp+0x58]
0x008812d1: add    eax,0x2
0x008812d4: mov    DWORD PTR [rip+0x10220b2],eax        # 0x1418a338c
0x008812da: mov    DWORD PTR [rip+0x10220b0],ecx        # 0x1418a3390
0x008812e0: mov    BYTE PTR [rip+0x10220a1],0x0        # 0x1418a3388
0x008812e7: mov    DWORD PTR [rip+0x1022077],0x232        # 0x1418a3368
0x008812f1: jmp    0x1408812f7
0x008812f3: mov    ecx,DWORD PTR [rsp+0x40]
0x008812f7: test   r15b,0x4
0x008812fb: je     0x1408813b3
0x00881301: mov    esi,ecx
0x00881303: lea    r14,[rip+0x1dce892]        # 0x14264fb9c
0x0088130a: nop    WORD PTR [rax+rax*1+0x0]
0x00881310: lea    r11d,[r12-0xf]
0x00881315: mov    rbx,r14
0x00881318: mov    edi,0x3
0x0088131d: nop    DWORD PTR [rax]
0x00881320: mov    DWORD PTR [rip+0x1dc303d],r11d        # 0x142644364
0x00881327: mov    DWORD PTR [rip+0x1dc303b],esi        # 0x142644368
0x0088132d: xor    r8d,r8d
0x00881330: mov    edx,DWORD PTR [rbx]
0x00881332: lea    rcx,[rip+0x1dc2fa7]        # 0x1426442e0
0x00881339: call   0x140ad8140
0x0088133e: inc    r11d
0x00881341: lea    rbx,[rbx+0xc]
0x00881345: sub    rdi,0x1
0x00881349: jne    0x140881320
0x0088134b: inc    esi
0x0088134d: add    r14,0x4
0x00881351: lea    rax,[rip+0x1dce850]        # 0x14264fba8
0x00881358: cmp    r14,rax
0x0088135b: jl     0x140881310
0x0088135d: lea    eax,[r12-0xf]
0x00881362: mov    edi,DWORD PTR [rsp+0x50]
0x00881366: cmp    edi,eax
0x00881368: mov    r13d,DWORD PTR [rsp+0x54]
0x0088136d: jl     0x1408813b3
0x0088136f: add    eax,0x4
0x00881372: mov    ecx,DWORD PTR [rsp+0x40]
0x00881376: cmp    edi,eax
0x00881378: jge    0x1408813b7
0x0088137a: movsxd rdx,DWORD PTR [rsp+0x44]
0x0088137f: cmp    rdx,QWORD PTR [rsp+0x68]
0x00881384: jl     0x1408813b7
0x00881386: lea    eax,[rcx+0x3]
0x00881389: cmp    edx,eax
0x0088138b: jge    0x1408813b7
0x0088138d: mov    eax,DWORD PTR [rsp+0x58]
0x00881391: add    eax,0x2
0x00881394: mov    DWORD PTR [rip+0x1021ff2],eax        # 0x1418a338c
0x0088139a: mov    DWORD PTR [rip+0x1021ff0],ecx        # 0x1418a3390
0x008813a0: mov    BYTE PTR [rip+0x1021fe1],0x0        # 0x1418a3388
0x008813a7: mov    DWORD PTR [rip+0x1021fb7],0x233        # 0x1418a3368
0x008813b1: jmp    0x1408813b7
0x008813b3: mov    ecx,DWORD PTR [rsp+0x40]
0x008813b7: test   r15b,0x8
0x008813bb: je     0x140881473
0x008813c1: mov    esi,ecx
0x008813c3: lea    r14,[rip+0x1dce7f6]        # 0x14264fbc0
0x008813ca: nop    WORD PTR [rax+rax*1+0x0]
0x008813d0: lea    r11d,[r12-0xc]
0x008813d5: mov    rbx,r14
0x008813d8: mov    edi,0x3
0x008813dd: nop    DWORD PTR [rax]
0x008813e0: mov    DWORD PTR [rip+0x1dc2f7d],r11d        # 0x142644364
0x008813e7: mov    DWORD PTR [rip+0x1dc2f7b],esi        # 0x142644368
0x008813ed: xor    r8d,r8d
0x008813f0: mov    edx,DWORD PTR [rbx]
0x008813f2: lea    rcx,[rip+0x1dc2ee7]        # 0x1426442e0
0x008813f9: call   0x140ad8140
0x008813fe: inc    r11d
0x00881401: lea    rbx,[rbx+0xc]
0x00881405: sub    rdi,0x1
0x00881409: jne    0x1408813e0
0x0088140b: inc    esi
0x0088140d: add    r14,0x4
0x00881411: lea    rax,[rip+0x1dce7b4]        # 0x14264fbcc
0x00881418: cmp    r14,rax
0x0088141b: jl     0x1408813d0
0x0088141d: lea    eax,[r12-0xc]
0x00881422: mov    edi,DWORD PTR [rsp+0x50]
0x00881426: cmp    edi,eax
0x00881428: mov    r13d,DWORD PTR [rsp+0x54]
0x0088142d: jl     0x140881473
0x0088142f: add    eax,0x4
0x00881432: mov    ecx,DWORD PTR [rsp+0x40]
0x00881436: cmp    edi,eax
0x00881438: jge    0x140881477
0x0088143a: movsxd rdx,DWORD PTR [rsp+0x44]
0x0088143f: cmp    rdx,QWORD PTR [rsp+0x68]
0x00881444: jl     0x140881477
0x00881446: lea    eax,[rcx+0x3]
0x00881449: cmp    edx,eax
0x0088144b: jge    0x140881477
0x0088144d: mov    eax,DWORD PTR [rsp+0x58]
0x00881451: add    eax,0x2
0x00881454: mov    DWORD PTR [rip+0x1021f32],eax        # 0x1418a338c
0x0088145a: mov    DWORD PTR [rip+0x1021f30],ecx        # 0x1418a3390
0x00881460: mov    BYTE PTR [rip+0x1021f21],0x0        # 0x1418a3388
0x00881467: mov    DWORD PTR [rip+0x1021ef7],0x234        # 0x1418a3368
0x00881471: jmp    0x140881477
0x00881473: mov    ecx,DWORD PTR [rsp+0x40]
0x00881477: test   r15b,0x10
0x0088147b: je     0x140881533
0x00881481: mov    esi,ecx
0x00881483: lea    r14,[rip+0x1dce75a]        # 0x14264fbe4
0x0088148a: nop    WORD PTR [rax+rax*1+0x0]
0x00881490: lea    r11d,[r12-0x9]
0x00881495: mov    rbx,r14
0x00881498: mov    edi,0x3
0x0088149d: nop    DWORD PTR [rax]
0x008814a0: mov    DWORD PTR [rip+0x1dc2ebd],r11d        # 0x142644364
0x008814a7: mov    DWORD PTR [rip+0x1dc2ebb],esi        # 0x142644368
0x008814ad: xor    r8d,r8d
0x008814b0: mov    edx,DWORD PTR [rbx]
0x008814b2: lea    rcx,[rip+0x1dc2e27]        # 0x1426442e0
0x008814b9: call   0x140ad8140
0x008814be: inc    r11d
0x008814c1: lea    rbx,[rbx+0xc]
0x008814c5: sub    rdi,0x1
0x008814c9: jne    0x1408814a0
0x008814cb: inc    esi
0x008814cd: add    r14,0x4
0x008814d1: lea    rax,[rip+0x1dce718]        # 0x14264fbf0
0x008814d8: cmp    r14,rax
0x008814db: jl     0x140881490
0x008814dd: lea    eax,[r12-0x9]
0x008814e2: mov    edi,DWORD PTR [rsp+0x50]
0x008814e6: cmp    edi,eax
0x008814e8: mov    r13d,DWORD PTR [rsp+0x54]
0x008814ed: jl     0x140881533
0x008814ef: add    eax,0x4
0x008814f2: mov    ecx,DWORD PTR [rsp+0x40]
0x008814f6: cmp    edi,eax
0x008814f8: jge    0x140881537
0x008814fa: movsxd rdx,DWORD PTR [rsp+0x44]
0x008814ff: cmp    rdx,QWORD PTR [rsp+0x68]
0x00881504: jl     0x140881537
0x00881506: lea    eax,[rcx+0x3]
0x00881509: cmp    edx,eax
0x0088150b: jge    0x140881537
0x0088150d: mov    eax,DWORD PTR [rsp+0x58]
0x00881511: add    eax,0x2
0x00881514: mov    DWORD PTR [rip+0x1021e72],eax        # 0x1418a338c
0x0088151a: mov    DWORD PTR [rip+0x1021e70],ecx        # 0x1418a3390
0x00881520: mov    BYTE PTR [rip+0x1021e61],0x0        # 0x1418a3388
0x00881527: mov    DWORD PTR [rip+0x1021e37],0x235        # 0x1418a3368
0x00881531: jmp    0x140881537
0x00881533: mov    ecx,DWORD PTR [rsp+0x40]
0x00881537: test   r15b,0x20
0x0088153b: je     0x1408815f3
0x00881541: mov    esi,ecx
0x00881543: lea    r14,[rip+0x1dce6be]        # 0x14264fc08
0x0088154a: nop    WORD PTR [rax+rax*1+0x0]
0x00881550: lea    r11d,[r12-0x6]
0x00881555: mov    rbx,r14
0x00881558: mov    edi,0x3
0x0088155d: nop    DWORD PTR [rax]
0x00881560: mov    DWORD PTR [rip+0x1dc2dfd],r11d        # 0x142644364
0x00881567: mov    DWORD PTR [rip+0x1dc2dfb],esi        # 0x142644368
0x0088156d: xor    r8d,r8d
0x00881570: mov    edx,DWORD PTR [rbx]
0x00881572: lea    rcx,[rip+0x1dc2d67]        # 0x1426442e0
0x00881579: call   0x140ad8140
0x0088157e: inc    r11d
0x00881581: lea    rbx,[rbx+0xc]
0x00881585: sub    rdi,0x1
0x00881589: jne    0x140881560
0x0088158b: inc    esi
0x0088158d: add    r14,0x4
0x00881591: lea    rax,[rip+0x1dce67c]        # 0x14264fc14
0x00881598: cmp    r14,rax
0x0088159b: jl     0x140881550
0x0088159d: lea    eax,[r12-0x6]
0x008815a2: mov    edi,DWORD PTR [rsp+0x50]
0x008815a6: cmp    edi,eax
0x008815a8: mov    r13d,DWORD PTR [rsp+0x54]
0x008815ad: jl     0x1408815f3
0x008815af: add    eax,0x4
0x008815b2: mov    ecx,DWORD PTR [rsp+0x40]
0x008815b6: cmp    edi,eax
0x008815b8: jge    0x1408815f7
0x008815ba: movsxd rdx,DWORD PTR [rsp+0x44]
0x008815bf: cmp    rdx,QWORD PTR [rsp+0x68]
0x008815c4: jl     0x1408815f7
0x008815c6: lea    eax,[rcx+0x3]
0x008815c9: cmp    edx,eax
0x008815cb: jge    0x1408815f7
0x008815cd: mov    eax,DWORD PTR [rsp+0x58]
0x008815d1: add    eax,0x2
0x008815d4: mov    DWORD PTR [rip+0x1021db2],eax        # 0x1418a338c
0x008815da: mov    DWORD PTR [rip+0x1021db0],ecx        # 0x1418a3390
0x008815e0: mov    BYTE PTR [rip+0x1021da1],0x0        # 0x1418a3388
0x008815e7: mov    DWORD PTR [rip+0x1021d77],0x236        # 0x1418a3368
0x008815f1: jmp    0x1408815f7
0x008815f3: mov    ecx,DWORD PTR [rsp+0x40]
0x008815f7: test   r15b,0x40
0x008815fb: je     0x1408816ab
0x00881601: mov    esi,ecx
0x00881603: lea    r14,[rip+0x1dce622]        # 0x14264fc2c
0x0088160a: lea    r15d,[r12-0x3]
0x0088160f: nop
0x00881610: mov    r11d,r15d
0x00881613: mov    rbx,r14
0x00881616: mov    edi,0x3
0x0088161b: nop    DWORD PTR [rax+rax*1+0x0]
0x00881620: mov    DWORD PTR [rip+0x1dc2d3d],r11d        # 0x142644364
0x00881627: mov    DWORD PTR [rip+0x1dc2d3b],esi        # 0x142644368
0x0088162d: xor    r8d,r8d
0x00881630: mov    edx,DWORD PTR [rbx]
0x00881632: lea    rcx,[rip+0x1dc2ca7]        # 0x1426442e0
0x00881639: call   0x140ad8140
0x0088163e: inc    r11d
0x00881641: lea    rbx,[rbx+0xc]
0x00881645: sub    rdi,0x1
0x00881649: jne    0x140881620
0x0088164b: inc    esi
0x0088164d: add    r14,0x4
0x00881651: lea    rax,[rip+0x1dce5e0]        # 0x14264fc38
0x00881658: cmp    r14,rax
0x0088165b: jl     0x140881610
0x0088165d: mov    edi,DWORD PTR [rsp+0x50]
0x00881661: cmp    edi,r15d
0x00881664: jl     0x1408816ab
0x00881666: lea    eax,[r15+0x4]
0x0088166a: mov    ebx,DWORD PTR [rsp+0x40]
0x0088166e: cmp    edi,eax
0x00881670: jge    0x1408816af
0x00881672: movsxd rcx,DWORD PTR [rsp+0x44]
0x00881677: cmp    rcx,QWORD PTR [rsp+0x68]
0x0088167c: jl     0x1408816af
0x0088167e: lea    eax,[rbx+0x3]
0x00881681: cmp    ecx,eax
0x00881683: jge    0x1408816af
0x00881685: mov    eax,DWORD PTR [rsp+0x58]
0x00881689: add    eax,0x2
0x0088168c: mov    DWORD PTR [rip+0x1021cfa],eax        # 0x1418a338c
0x00881692: mov    DWORD PTR [rip+0x1021cf8],ebx        # 0x1418a3390
0x00881698: mov    BYTE PTR [rip+0x1021ce9],0x0        # 0x1418a3388
0x0088169f: mov    DWORD PTR [rip+0x1021cbf],0x237        # 0x1418a3368
0x008816a9: jmp    0x1408816af
0x008816ab: mov    ebx,DWORD PTR [rsp+0x40]
0x008816af: add    ebx,0x3
0x008816b2: mov    DWORD PTR [rsp+0x40],ebx
0x008816b6: add    QWORD PTR [rsp+0x68],0x3
0x008816bc: lea    rcx,[rbp-0x78]
0x008816c0: call   0x14006f7e0
0x008816c5: mov    esi,DWORD PTR [rsp+0x60]
0x008816c9: inc    esi
0x008816cb: mov    DWORD PTR [rsp+0x60],esi
0x008816cf: mov    r8,QWORD PTR [rsp+0x78]
0x008816d4: inc    r8
0x008816d7: mov    QWORD PTR [rsp+0x78],r8
0x008816dc: cmp    esi,DWORD PTR [rsp+0x70]
0x008816e0: mov    r14,QWORD PTR [rsp+0x48]
0x008816e5: jl     0x140880ce0
0x008816eb: mov    r9d,DWORD PTR [rsp+0x5c]
0x008816f0: mov    r10d,DWORD PTR [rbp-0x80]
0x008816f4: xor    r15d,r15d
0x008816f7: mov    rcx,QWORD PTR [r14+0x20]
0x008816fb: sub    rcx,QWORD PTR [r14+0x18]
0x008816ff: sar    rcx,0x3
0x00881703: cmp    ecx,r9d
0x00881706: jle    0x14088176c
0x00881708: mov    QWORD PTR [rbp-0x18],0x0
0x00881710: mov    eax,DWORD PTR [r14+0x10c]
0x00881717: mov    DWORD PTR [rbp-0x30],eax
0x0088171a: mov    DWORD PTR [rbp-0x2c],r15d
0x0088171e: lea    eax,[rcx-0x1]
0x00881721: mov    DWORD PTR [rbp-0x28],eax
0x00881724: lea    eax,[r10+0x1]
0x00881728: mov    DWORD PTR [rbp-0x20],eax
0x0088172b: lea    ecx,[r10-0x2]
0x0088172f: lea    ecx,[rcx+r9*2]
0x00881733: add    ecx,r9d
0x00881736: mov    DWORD PTR [rbp-0x1c],ecx
0x00881739: mov    DWORD PTR [rbp-0x24],r9d
0x0088173d: lea    rcx,[rbp-0x30]
0x00881741: call   0x1400bb340
0x00881746: lea    r9d,[r12+0x1]
0x0088174b: mov    DWORD PTR [rsp+0x28],r15d
0x00881750: movzx  eax,BYTE PTR [r14+0x108]
0x00881758: mov    BYTE PTR [rsp+0x20],al
0x0088175c: mov    r8d,DWORD PTR [rsp+0x44]
0x00881761: mov    edx,edi
0x00881763: lea    rcx,[rbp-0x30]
0x00881767: call   0x14140a440
0x0088176c: mov    rcx,QWORD PTR [rbp-0x10]
0x00881770: xor    rcx,rsp
0x00881773: call   0x1415345d0
0x00881778: add    rsp,0x108
0x0088177f: pop    r15
0x00881781: pop    r14
0x00881783: pop    r13
0x00881785: pop    r12
0x00881787: pop    rdi
0x00881788: pop    rsi
0x00881789: pop    rbx
0x0088178a: pop    rbp
0x0088178b: ret
0x0088178c: call   0x140065820
0x00881791: nop
0x00881792: xchg   ax,ax
