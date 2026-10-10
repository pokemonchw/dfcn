# reference PE:6a70a6d9:02711000; movement-modal; RVA 0x874800..0x877261
0x00874800: mov    QWORD PTR [rsp+0x10],rbx
0x00874805: push   rbp
0x00874806: push   rsi
0x00874807: push   rdi
0x00874808: push   r12
0x0087480a: push   r13
0x0087480c: push   r14
0x0087480e: push   r15
0x00874810: lea    rbp,[rsp-0xc0]
0x00874818: sub    rsp,0x1c0
0x0087481f: movaps XMMWORD PTR [rsp+0x1b0],xmm6
0x00874827: mov    rax,QWORD PTR [rip+0x1027812]        # 0x14189c040
0x0087482e: xor    rax,rsp
0x00874831: mov    QWORD PTR [rbp+0xa0],rax
0x00874838: mov    r10d,r9d
0x0087483b: mov    eax,r8d
0x0087483e: mov    r13,rcx
0x00874841: mov    r11d,0xffffffff
0x00874847: mov    DWORD PTR [rsp+0x6c],r11d
0x0087484c: mov    DWORD PTR [rsp+0x68],r11d
0x00874851: cmp    BYTE PTR [rip+0x1b1bd7d],0x0        # 0x1423905d5
0x00874858: je     0x14087486e
0x0087485a: mov    ecx,DWORD PTR [rip+0x1dd5d50]        # 0x14264a5b0
0x00874860: mov    DWORD PTR [rsp+0x6c],ecx
0x00874864: mov    ecx,DWORD PTR [rip+0x1dd5d4a]        # 0x14264a5b4
0x0087486a: mov    DWORD PTR [rsp+0x68],ecx
0x0087486e: lea    rcx,[rsp+0x4c]
0x00874873: mov    QWORD PTR [rsp+0x30],rcx
0x00874878: lea    rcx,[rsp+0x5c]
0x0087487d: mov    QWORD PTR [rsp+0x28],rcx
0x00874882: lea    rcx,[rsp+0x58]
0x00874887: mov    QWORD PTR [rsp+0x20],rcx
0x0087488c: lea    r9,[rsp+0x50]
0x00874891: mov    r8d,r10d
0x00874894: mov    edx,eax
0x00874896: call   0x140872cf0
0x0087489b: mov    r15d,DWORD PTR [rsp+0x5c]
0x008748a0: mov    esi,r15d
0x008748a3: mov    edi,DWORD PTR [rsp+0x58]
0x008748a7: mov    r12d,DWORD PTR [rsp+0x4c]
0x008748ac: cmp    r15d,r12d
0x008748af: jg     0x140874985
0x008748b5: mov    r14d,DWORD PTR [rsp+0x50]
0x008748ba: nop    WORD PTR [rax+rax*1+0x0]
0x008748c0: mov    ebx,r14d
0x008748c3: cmp    r14d,edi
0x008748c6: jg     0x14087497a
0x008748cc: nop    DWORD PTR [rax+0x0]
0x008748d0: mov    DWORD PTR [rip+0x1dd5b9e],ebx        # 0x14264a474
0x008748d6: mov    DWORD PTR [rip+0x1dd5b9c],esi        # 0x14264a478
0x008748dc: xor    r8d,r8d
0x008748df: xor    edx,edx
0x008748e1: lea    rcx,[rip+0x1dd5b08]        # 0x14264a3f0
0x008748e8: call   0x1400bb190
0x008748ed: cmp    esi,r15d
0x008748f0: jne    0x14087491a
0x008748f2: cmp    ebx,r14d
0x008748f5: jne    0x1408748ff
0x008748f7: mov    edx,DWORD PTR [rip+0x1dd7417]        # 0x14264bd14
0x008748fd: jmp    0x140874964
0x008748ff: lea    rcx,[rip+0x1dd5aea]        # 0x14264a3f0
0x00874906: cmp    ebx,edi
0x00874908: jne    0x140874912
0x0087490a: mov    edx,DWORD PTR [rip+0x1dd741c]        # 0x14264bd2c
0x00874910: jmp    0x14087496b
0x00874912: mov    edx,DWORD PTR [rip+0x1dd7408]        # 0x14264bd20
0x00874918: jmp    0x14087496b
0x0087491a: cmp    esi,r12d
0x0087491d: jne    0x140874947
0x0087491f: cmp    ebx,r14d
0x00874922: jne    0x14087492c
0x00874924: mov    edx,DWORD PTR [rip+0x1dd73f2]        # 0x14264bd1c
0x0087492a: jmp    0x140874964
0x0087492c: lea    rcx,[rip+0x1dd5abd]        # 0x14264a3f0
0x00874933: cmp    ebx,edi
0x00874935: jne    0x14087493f
0x00874937: mov    edx,DWORD PTR [rip+0x1dd73f7]        # 0x14264bd34
0x0087493d: jmp    0x14087496b
0x0087493f: mov    edx,DWORD PTR [rip+0x1dd73e3]        # 0x14264bd28
0x00874945: jmp    0x14087496b
0x00874947: cmp    ebx,r14d
0x0087494a: jne    0x140874954
0x0087494c: mov    edx,DWORD PTR [rip+0x1dd73c6]        # 0x14264bd18
0x00874952: jmp    0x140874964
0x00874954: cmp    ebx,edi
0x00874956: mov    edx,DWORD PTR [rip+0x1dd73d4]        # 0x14264bd30
0x0087495c: je     0x140874964
0x0087495e: mov    edx,DWORD PTR [rip+0x1dd73c0]        # 0x14264bd24
0x00874964: lea    rcx,[rip+0x1dd5a85]        # 0x14264a3f0
0x0087496b: call   0x140adaad0
0x00874970: inc    ebx
0x00874972: cmp    ebx,edi
0x00874974: jle    0x1408748d0
0x0087497a: inc    esi
0x0087497c: cmp    esi,r12d
0x0087497f: jle    0x1408748c0
0x00874985: xor    eax,eax
0x00874987: mov    QWORD PTR [rsp+0x70],rax
0x0087498c: mov    esi,eax
0x0087498e: xchg   ax,ax
0x00874990: lea    r14d,[rdi-0x8]
0x00874994: add    r14d,esi
0x00874997: lea    r11,[rip+0x1de026e]        # 0x142654c0c
0x0087499e: lea    ebx,[r15+0x1]
0x008749a2: nop    DWORD PTR [rax+0x0]
0x008749a6: data16 nop WORD PTR [rax+rax*1+0x0]
0x008749b0: mov    DWORD PTR [rip+0x1dd5abd],r14d        # 0x14264a474
0x008749b7: mov    DWORD PTR [rip+0x1dd5abb],ebx        # 0x14264a478
0x008749bd: test   esi,esi
0x008749bf: jne    0x1408749c7
0x008749c1: mov    edx,DWORD PTR [r11-0x18]
0x008749c5: jmp    0x1408749d5
0x008749c7: cmp    esi,0x7
0x008749ca: jne    0x1408749d1
0x008749cc: mov    edx,DWORD PTR [r11]
0x008749cf: jmp    0x1408749d5
0x008749d1: mov    edx,DWORD PTR [r11-0xc]
0x008749d5: lea    rcx,[rip+0x1dd5a14]        # 0x14264a3f0
0x008749dc: call   0x140adaad0
0x008749e1: inc    ebx
0x008749e3: add    r11,0x4
0x008749e7: lea    rax,[rip+0x1de022a]        # 0x142654c18
0x008749ee: cmp    r11,rax
0x008749f1: jl     0x1408749b0
0x008749f3: inc    esi
0x008749f5: cmp    esi,0x8
0x008749f8: jl     0x140874990
0x008749fa: mov    DWORD PTR [rip+0x1dd5a78],0x1010007        # 0x14264a47c
0x00874a04: lea    eax,[rdi-0x6]
0x00874a07: add    r15d,0x2
0x00874a0b: mov    DWORD PTR [rip+0x1dd5a63],eax        # 0x14264a474
0x00874a11: mov    DWORD PTR [rip+0x1dd5a60],r15d        # 0x14264a478
0x00874a18: lea    rdx,[rip+0xd8faa1]        # 0x1416044c0 ; literal="Done"
0x00874a1f: lea    rcx,[rbp-0x60]
0x00874a23: call   0x140068150
0x00874a28: nop
0x00874a29: xor    r9d,r9d
0x00874a2c: lea    rdx,[rbp-0x60]
0x00874a30: lea    rcx,[rip+0x1dd59b9]        # 0x14264a3f0
0x00874a37: call   0x140ad9960
0x00874a3c: nop
0x00874a3d: lea    rcx,[rbp-0x60]
0x00874a41: call   0x14006f850
0x00874a46: mov    DWORD PTR [rip+0x1dd5a2c],0x1010007        # 0x14264a47c
0x00874a50: mov    ebx,DWORD PTR [rsp+0x50]
0x00874a54: lea    eax,[rbx+0x2]
0x00874a57: mov    DWORD PTR [rsp+0x5c],eax
0x00874a5b: mov    DWORD PTR [rip+0x1dd5a13],eax        # 0x14264a474
0x00874a61: mov    DWORD PTR [rip+0x1dd5a10],r15d        # 0x14264a478
0x00874a68: lea    rdx,[rip+0xe3e5f1]        # 0x1416b3060 ; literal="How will "
0x00874a6f: lea    rcx,[rbp+0x60]
0x00874a73: call   0x140068150
0x00874a78: nop
0x00874a79: lea    rdx,[rip+0xd77ad0]        # 0x1415ec550 ; literal="you"
0x00874a80: lea    rcx,[rbp+0x80]
0x00874a87: call   0x140068150
0x00874a8c: nop
0x00874a8d: mov    rcx,QWORD PTR [r13+0x10]
0x00874a91: cmp    rcx,QWORD PTR [rip+0x1b70678]        # 0x1423e5110
0x00874a98: je     0x140874ab4
0x00874a9a: mov    BYTE PTR [rsp+0x20],0x1
0x00874a9f: xor    r9d,r9d
0x00874aa2: mov    r8d,0x1
0x00874aa8: lea    rdx,[rbp+0x80]
0x00874aaf: call   0x14132e430
0x00874ab4: lea    rdx,[rbp+0x80]
0x00874abb: lea    rcx,[rbp+0x60]
0x00874abf: call   0x1400b9d10
0x00874ac4: lea    rdx,[rip+0xe3e589]        # 0x1416b3054 ; literal=" move?"
0x00874acb: lea    rcx,[rbp+0x60]
0x00874acf: call   0x14006f560
0x00874ad4: xor    r9d,r9d
0x00874ad7: lea    rdx,[rbp+0x60]
0x00874adb: lea    rcx,[rip+0x1dd590e]        # 0x14264a3f0
0x00874ae2: call   0x140ad9960
0x00874ae7: lea    ecx,[rbx+0x1]
0x00874aea: mov    DWORD PTR [rsp+0x40],ecx
0x00874aee: lea    r10d,[rdi-0x1]
0x00874af2: lea    r11d,[r15+0x2]
0x00874af6: mov    DWORD PTR [rbp-0x7c],r11d
0x00874afa: mov    r12d,DWORD PTR [rsp+0x4c]
0x00874aff: lea    ecx,[r12-0xf]
0x00874b04: sub    ecx,r11d
0x00874b07: inc    ecx
0x00874b09: mov    eax,0x55555556
0x00874b0e: imul   ecx
0x00874b10: mov    r15d,edx
0x00874b13: shr    r15d,0x1f
0x00874b17: add    r15d,edx
0x00874b1a: mov    DWORD PTR [rsp+0x58],r15d
0x00874b1f: movsxd rax,DWORD PTR [r13+0x18]
0x00874b23: lea    r8,[rax+rax*2]
0x00874b27: mov    rax,QWORD PTR [r13+0x10]
0x00874b2b: mov    rcx,QWORD PTR [rax+0x5f8]
0x00874b32: mov    r9,QWORD PTR [rcx+r8*8+0xf0]
0x00874b3a: sub    r9,QWORD PTR [rcx+r8*8+0xe8]
0x00874b42: sar    r9,0x3
0x00874b46: lea    edi,[r10-0x2]
0x00874b4a: cmp    r9d,r15d
0x00874b4d: cmovle edi,r10d
0x00874b51: mov    DWORD PTR [rsp+0x54],edi
0x00874b55: mov    DWORD PTR [rsp+0x48],r11d
0x00874b5a: sub    r9d,r15d
0x00874b5d: cmp    DWORD PTR [r13+0x4],r9d
0x00874b61: cmovle r9d,DWORD PTR [r13+0x4]
0x00874b66: xor    r14d,r14d
0x00874b69: mov    eax,r14d
0x00874b6c: test   r9d,r9d
0x00874b6f: cmovns eax,r9d
0x00874b73: mov    DWORD PTR [rsp+0x78],eax
0x00874b77: movsxd r9,eax
0x00874b7a: mov    DWORD PTR [rsp+0x44],r9d
0x00874b7f: add    eax,r15d
0x00874b82: mov    DWORD PTR [rbp-0x80],eax
0x00874b85: mov    esi,0xf
0x00874b8a: cmp    r9d,eax
0x00874b8d: jge    0x140875bfb
0x00874b93: mov    QWORD PTR [rbp-0x78],r9
0x00874b97: movsxd r10,edi
0x00874b9a: mov    QWORD PTR [rsp+0x60],r10
0x00874b9f: movsxd rbx,DWORD PTR [rsp+0x40]
0x00874ba4: mov    r12,rbx
0x00874ba7: nop    WORD PTR [rax+rax*1+0x0]
0x00874bb0: movsxd rax,DWORD PTR [r13+0x18]
0x00874bb4: lea    rdx,[rax+rax*2]
0x00874bb8: mov    rax,QWORD PTR [r13+0x10]
0x00874bbc: mov    rcx,QWORD PTR [rax+0x5f8]
0x00874bc3: mov    r8,QWORD PTR [rcx+rdx*8+0xf0]
0x00874bcb: sub    r8,QWORD PTR [rcx+rdx*8+0xe8]
0x00874bd3: sar    r8,0x3
0x00874bd7: movsxd rax,r9d
0x00874bda: cmp    rax,r8
0x00874bdd: jae    0x140875bed
0x00874be3: mov    DWORD PTR [rip+0x1dd588f],0x1010007        # 0x14264a47c
0x00874bed: mov    r14d,ebx
0x00874bf0: cmp    ebx,edi
0x00874bf2: jg     0x140874d6e
0x00874bf8: lea    r15d,[r11+0x3]
0x00874bfc: nop    DWORD PTR [rax+0x0]
0x00874c00: mov    edi,r11d
0x00874c03: cmp    r11d,r15d
0x00874c06: jge    0x140874d55
0x00874c0c: movsxd rsi,r14d
0x00874c0f: cmp    r14d,DWORD PTR [rsp+0x54]
0x00874c14: jne    0x140874cb6
0x00874c1a: lea    rbx,[rip+0x1dd71b3]        # 0x14264bdd4
0x00874c21: mov    DWORD PTR [rip+0x1dd584c],r14d        # 0x14264a474
0x00874c28: mov    DWORD PTR [rip+0x1dd584a],edi        # 0x14264a478
0x00874c2e: movsxd rcx,DWORD PTR [r13+0x18]
0x00874c32: mov    rax,QWORD PTR [r13+0x10]
0x00874c36: cmp    DWORD PTR [rax+rcx*4+0xde8],r9d
0x00874c3e: jne    0x140874c4f
0x00874c40: lea    rax,[rbx-0x18]
0x00874c44: cmp    rsi,r12
0x00874c47: cmovne rax,rbx
0x00874c4b: mov    edx,DWORD PTR [rax]
0x00874c4d: jmp    0x140874c66
0x00874c4f: cmp    rsi,r12
0x00874c52: jne    0x140874c59
0x00874c54: mov    edx,DWORD PTR [rbx-0x3c]
0x00874c57: jmp    0x140874c66
0x00874c59: cmp    rsi,r10
0x00874c5c: jne    0x140874c63
0x00874c5e: mov    edx,DWORD PTR [rbx-0x24]
0x00874c61: jmp    0x140874c66
0x00874c63: mov    edx,DWORD PTR [rbx-0x30]
0x00874c66: lea    rcx,[rip+0x1dd5783]        # 0x14264a3f0
0x00874c6d: call   0x140adaad0
0x00874c72: cmp    DWORD PTR [rip+0x1b58aff],0x0        # 0x1423cd778
0x00874c79: jle    0x140874c98
0x00874c7b: mov    rax,QWORD PTR [rip+0x1b58aee]        # 0x1423cd770
0x00874c82: test   BYTE PTR [rax],0x1
0x00874c85: je     0x140874c98
0x00874c87: mov    r8b,0x1
0x00874c8a: xor    edx,edx
0x00874c8c: lea    rcx,[rip+0x1dd575d]        # 0x14264a3f0
0x00874c93: call   0x1400bb190
0x00874c98: inc    edi
0x00874c9a: add    rbx,0x4
0x00874c9e: cmp    edi,r15d
0x00874ca1: mov    r9d,DWORD PTR [rsp+0x44]
0x00874ca6: mov    r10,QWORD PTR [rsp+0x60]
0x00874cab: jl     0x140874c21
0x00874cb1: jmp    0x140874d50
0x00874cb6: lea    rbx,[rip+0x1dd710b]        # 0x14264bdc8
0x00874cbd: nop    DWORD PTR [rax]
0x00874cc0: mov    DWORD PTR [rip+0x1dd57ad],r14d        # 0x14264a474
0x00874cc7: mov    DWORD PTR [rip+0x1dd57ab],edi        # 0x14264a478
0x00874ccd: movsxd rcx,DWORD PTR [r13+0x18]
0x00874cd1: mov    rax,QWORD PTR [r13+0x10]
0x00874cd5: cmp    DWORD PTR [rax+rcx*4+0xde8],r9d
0x00874cdd: jne    0x140874cee
0x00874cdf: lea    rax,[rbx-0xc]
0x00874ce3: cmp    rsi,r12
0x00874ce6: cmovne rax,rbx
0x00874cea: mov    edx,DWORD PTR [rax]
0x00874cec: jmp    0x140874d05
0x00874cee: cmp    rsi,r12
0x00874cf1: jne    0x140874cf8
0x00874cf3: mov    edx,DWORD PTR [rbx-0x30]
0x00874cf6: jmp    0x140874d05
0x00874cf8: cmp    rsi,r10
0x00874cfb: jne    0x140874d02
0x00874cfd: mov    edx,DWORD PTR [rbx-0x18]
0x00874d00: jmp    0x140874d05
0x00874d02: mov    edx,DWORD PTR [rbx-0x24]
0x00874d05: lea    rcx,[rip+0x1dd56e4]        # 0x14264a3f0
0x00874d0c: call   0x140adaad0
0x00874d11: cmp    DWORD PTR [rip+0x1b58a60],0x0        # 0x1423cd778
0x00874d18: jle    0x140874d37
0x00874d1a: mov    rax,QWORD PTR [rip+0x1b58a4f]        # 0x1423cd770
0x00874d21: test   BYTE PTR [rax],0x1
0x00874d24: je     0x140874d37
0x00874d26: mov    r8b,0x1
0x00874d29: xor    edx,edx
0x00874d2b: lea    rcx,[rip+0x1dd56be]        # 0x14264a3f0
0x00874d32: call   0x1400bb190
0x00874d37: inc    edi
0x00874d39: add    rbx,0x4
0x00874d3d: cmp    edi,r15d
0x00874d40: mov    r9d,DWORD PTR [rsp+0x44]
0x00874d45: mov    r10,QWORD PTR [rsp+0x60]
0x00874d4a: jl     0x140874cc0
0x00874d50: mov    r11d,DWORD PTR [rsp+0x48]
0x00874d55: inc    r14d
0x00874d58: mov    edi,DWORD PTR [rsp+0x54]
0x00874d5c: cmp    r14d,edi
0x00874d5f: jle    0x140874c00
0x00874d65: mov    esi,0xf
0x00874d6a: mov    ebx,DWORD PTR [rsp+0x40]
0x00874d6e: lea    eax,[rbx+0x2]
0x00874d71: mov    DWORD PTR [rip+0x1dd56fd],eax        # 0x14264a474
0x00874d77: lea    r15d,[r11+0x1]
0x00874d7b: mov    DWORD PTR [rip+0x1dd56f6],r15d        # 0x14264a478
0x00874d82: mov    edx,r9d
0x00874d85: sub    edx,DWORD PTR [rsp+0x78]
0x00874d89: add    edx,0x52
0x00874d8c: call   0x140c394b0
0x00874d91: lea    eax,[rbx+0x4]
0x00874d94: mov    DWORD PTR [rip+0x1dd56da],eax        # 0x14264a474
0x00874d9a: mov    DWORD PTR [rip+0x1dd56d7],r15d        # 0x14264a478
0x00874da1: mov    DWORD PTR [rip+0x1dd56d1],0x1010007        # 0x14264a47c
0x00874dab: xorps  xmm0,xmm0
0x00874dae: movups XMMWORD PTR [rbp+0x0],xmm0
0x00874db2: xor    r14d,r14d
0x00874db5: mov    r8d,r14d
0x00874db8: mov    QWORD PTR [rbp+0x10],r14
0x00874dbc: mov    QWORD PTR [rbp+0x18],rsi
0x00874dc0: mov    BYTE PTR [rbp+0x0],r8b
0x00874dc4: movsxd rax,DWORD PTR [r13+0x18]
0x00874dc8: lea    rdx,[rax+rax*2]
0x00874dcc: mov    rax,QWORD PTR [r13+0x10]
0x00874dd0: mov    rcx,QWORD PTR [rax+0x5f8]
0x00874dd7: mov    rax,QWORD PTR [rcx+rdx*8+0xe8]
0x00874ddf: mov    rcx,QWORD PTR [rbp-0x78]
0x00874de3: mov    rcx,QWORD PTR [rax+rcx*8]
0x00874de7: movsxd rax,DWORD PTR [rcx]
0x00874dea: test   eax,eax
0x00874dec: js     0x140874e35
0x00874dee: mov    rdx,rax
0x00874df1: mov    rax,QWORD PTR [rip+0x1c77cc8]        # 0x1424ecac0
0x00874df8: mov    rcx,QWORD PTR [rip+0x1c77cb9]        # 0x1424ecab8
0x00874dff: sub    rax,rcx
0x00874e02: sar    rax,0x3
0x00874e06: cmp    rdx,rax
0x00874e09: jae    0x140874e35
0x00874e0b: mov    rdx,QWORD PTR [rcx+rdx*8]
0x00874e0f: lea    rax,[rbp+0x0]
0x00874e13: cmp    rax,rdx
0x00874e16: je     0x140874e4a
0x00874e18: mov    r8,QWORD PTR [rdx+0x10]
0x00874e1c: cmp    QWORD PTR [rdx+0x18],0xf
0x00874e21: jbe    0x140874e26
0x00874e23: mov    rdx,QWORD PTR [rdx]
0x00874e26: lea    rcx,[rbp+0x0]
0x00874e2a: call   0x14006f8d0
0x00874e2f: mov    r8,QWORD PTR [rbp+0x10]
0x00874e33: jmp    0x140874e4a
0x00874e35: mov    r8d,0x4
0x00874e3b: mov    QWORD PTR [rbp+0x10],r8
0x00874e3f: mov    DWORD PTR [rbp+0x0],0x65766f4d ; inline="Move"
0x00874e46: mov    BYTE PTR [rbp+0x4],0x0
0x00874e4a: mov    eax,edi
0x00874e4c: sub    eax,ebx
0x00874e4e: sub    eax,0x8
0x00874e51: cdqe
0x00874e53: cmp    r8,rax
0x00874e56: jb     0x140874edc
0x00874e5c: mov    rbx,QWORD PTR [rsp+0x60]
0x00874e61: sub    rbx,r12
0x00874e64: sub    rbx,0x7
0x00874e68: js     0x140874e99
0x00874e6a: cmp    rbx,r8
0x00874e6d: ja     0x140874e87
0x00874e6f: mov    QWORD PTR [rbp+0x10],rbx
0x00874e73: lea    rax,[rbp+0x0]
0x00874e77: cmp    QWORD PTR [rbp+0x18],0xf
0x00874e7c: cmova  rax,QWORD PTR [rbp+0x0]
0x00874e81: mov    BYTE PTR [rax+rbx*1],0x0
0x00874e85: jmp    0x140874e99
0x00874e87: mov    rdx,rbx
0x00874e8a: sub    rdx,r8
0x00874e8d: xor    r8d,r8d
0x00874e90: lea    rcx,[rbp+0x0]
0x00874e94: call   0x1400e12b0
0x00874e99: cmp    rbx,0x3
0x00874e9d: jle    0x140874ed8
0x00874e9f: lea    rax,[rbp+0x0]
0x00874ea3: cmp    QWORD PTR [rbp+0x18],0xf
0x00874ea8: cmova  rax,QWORD PTR [rbp+0x0]
0x00874ead: mov    BYTE PTR [rax+rbx*1-0x3],0x2e
0x00874eb2: lea    rax,[rbp+0x0]
0x00874eb6: cmp    QWORD PTR [rbp+0x18],0xf
0x00874ebb: cmova  rax,QWORD PTR [rbp+0x0]
0x00874ec0: mov    BYTE PTR [rax+rbx*1-0x2],0x2e
0x00874ec5: lea    rax,[rbp+0x0]
0x00874ec9: cmp    QWORD PTR [rbp+0x18],0xf
0x00874ece: cmova  rax,QWORD PTR [rbp+0x0]
0x00874ed3: mov    BYTE PTR [rax+rbx*1-0x1],0x2e
0x00874ed8: mov    ebx,DWORD PTR [rsp+0x40]
0x00874edc: xor    r9d,r9d
0x00874edf: lea    rdx,[rbp+0x0]
0x00874ee3: lea    rcx,[rip+0x1dd5506]        # 0x14264a3f0
0x00874eea: call   0x140ad9960
0x00874eef: movsxd rcx,DWORD PTR [r13+0x18]
0x00874ef3: mov    rax,QWORD PTR [r13+0x10]
0x00874ef7: mov    edx,DWORD PTR [rax+rcx*4+0xde8]
0x00874efe: mov    DWORD PTR [rsp+0x7c],edx
0x00874f02: mov    r8d,DWORD PTR [rsp+0x44]
0x00874f07: mov    DWORD PTR [rax+rcx*4+0xde8],r8d
0x00874f0f: lea    ecx,[rbx+0x1e]
0x00874f12: mov    rax,QWORD PTR [r13+0x10]
0x00874f16: mov    edx,0xffff8ad0
0x00874f1b: cmp    WORD PTR [rax+0x4cc],dx
0x00874f22: mov    DWORD PTR [rip+0x1dd554c],ecx        # 0x14264a474
0x00874f28: mov    DWORD PTR [rip+0x1dd5549],r15d        # 0x14264a478
0x00874f2f: je     0x1408754a6
0x00874f35: mov    rax,QWORD PTR [r13+0x10]
0x00874f39: test   DWORD PTR [rax+0x110],0x40000
0x00874f43: mov    DWORD PTR [rip+0x1dd552f],0x1010005        # 0x14264a47c
0x00874f4d: jne    0x140874f59
0x00874f4f: mov    DWORD PTR [rip+0x1dd5523],0x1010003        # 0x14264a47c
0x00874f59: lea    r9,[rbp-0x68]
0x00874f5d: mov    r8b,0x1
0x00874f60: xor    edx,edx
0x00874f62: mov    rcx,QWORD PTR [r13+0x10]
0x00874f66: call   0x141334c10
0x00874f6b: lea    ecx,[rax+0x64]
0x00874f6e: mov    eax,0xf4240
0x00874f73: cdq
0x00874f74: idiv   ecx
0x00874f76: mov    edi,eax
0x00874f78: xorps  xmm0,xmm0
0x00874f7b: movups XMMWORD PTR [rbp-0x40],xmm0
0x00874f7f: mov    QWORD PTR [rbp-0x30],r14
0x00874f83: mov    QWORD PTR [rbp-0x28],rsi
0x00874f87: mov    BYTE PTR [rbp-0x40],0x0
0x00874f8b: movups XMMWORD PTR [rbp-0x60],xmm0
0x00874f8f: mov    QWORD PTR [rbp-0x50],0x6
0x00874f97: mov    QWORD PTR [rbp-0x48],rsi
0x00874f9b: mov    eax,DWORD PTR [rip+0xe3e0d7]        # 0x1416b3078 ; literal="Climb "
0x00874fa1: mov    DWORD PTR [rbp-0x60],eax
0x00874fa4: movzx  eax,WORD PTR [rip+0xe3e0d1]        # 0x1416b307c ; literal="b "
0x00874fab: mov    WORD PTR [rbp-0x5c],ax
0x00874faf: mov    BYTE PTR [rbp-0x5a],0x0
0x00874fb3: xor    r9d,r9d
0x00874fb6: lea    rdx,[rbp-0x60]
0x00874fba: lea    rcx,[rip+0x1dd542f]        # 0x14264a3f0
0x00874fc1: call   0x140ad9960
0x00874fc6: nop
0x00874fc7: mov    rdx,QWORD PTR [rbp-0x48]
0x00874fcb: cmp    rdx,0xf
0x00874fcf: jbe    0x140875002
0x00874fd1: inc    rdx
0x00874fd4: mov    rcx,QWORD PTR [rbp-0x60]
0x00874fd8: mov    rax,rcx
0x00874fdb: cmp    rdx,0x1000
0x00874fe2: jb     0x140874ffd
0x00874fe4: add    rdx,0x27
0x00874fe8: mov    rcx,QWORD PTR [rcx-0x8]
0x00874fec: sub    rax,rcx
0x00874fef: add    rax,0xfffffffffffffff8
0x00874ff3: cmp    rax,0x1f
0x00874ff7: ja     0x140875bae
0x00874ffd: call   0x141539680
0x00875002: xorps  xmm0,xmm0
0x00875005: movups XMMWORD PTR [rbp-0x20],xmm0
0x00875009: mov    QWORD PTR [rbp-0x10],r14
0x0087500d: mov    QWORD PTR [rbp-0x8],rsi
0x00875011: mov    BYTE PTR [rbp-0x20],0x0
0x00875015: movups XMMWORD PTR [rbp-0x60],xmm0
0x00875019: mov    QWORD PTR [rbp-0x50],r14
0x0087501d: mov    QWORD PTR [rbp-0x48],rsi
0x00875021: mov    BYTE PTR [rbp-0x60],0x0
0x00875025: mov    eax,0x10624dd3
0x0087502a: imul   edi
0x0087502c: mov    ebx,edx
0x0087502e: sar    ebx,0x6
0x00875031: mov    eax,ebx
0x00875033: shr    eax,0x1f
0x00875036: add    ebx,eax
0x00875038: lea    rdx,[rbp-0x60]
0x0087503c: mov    ecx,ebx
0x0087503e: call   0x14052c2b0
0x00875043: lea    rdx,[rbp-0x60]
0x00875047: cmp    QWORD PTR [rbp-0x48],0xf
0x0087504c: cmova  rdx,QWORD PTR [rbp-0x60]
0x00875051: mov    r8,QWORD PTR [rbp-0x50]
0x00875055: lea    rcx,[rbp-0x20]
0x00875059: call   0x14006fa10
0x0087505e: nop
0x0087505f: mov    rdx,QWORD PTR [rbp-0x48]
0x00875063: cmp    rdx,0xf
0x00875067: jbe    0x14087509a
0x00875069: inc    rdx
0x0087506c: mov    rcx,QWORD PTR [rbp-0x60]
0x00875070: mov    rax,rcx
0x00875073: cmp    rdx,0x1000
0x0087507a: jb     0x140875095
0x0087507c: add    rdx,0x27
0x00875080: mov    rcx,QWORD PTR [rcx-0x8]
0x00875084: sub    rax,rcx
0x00875087: add    rax,0xfffffffffffffff8
0x0087508b: cmp    rax,0x1f
0x0087508f: ja     0x140875ba7
0x00875095: call   0x141539680
0x0087509a: lea    rdx,[rbp-0x20]
0x0087509e: cmp    QWORD PTR [rbp-0x8],0xf
0x008750a3: cmova  rdx,QWORD PTR [rbp-0x20]
0x008750a8: mov    r8,QWORD PTR [rbp-0x10]
0x008750ac: lea    rcx,[rbp-0x40]
0x008750b0: call   0x14006fa10
0x008750b5: mov    r15d,0x1
0x008750bb: mov    r8d,r15d
0x008750be: lea    rdx,[rip+0xd734ef]        # 0x1415e85b4 ; literal="."
0x008750c5: lea    rcx,[rbp-0x40]
0x008750c9: call   0x14006fa10
0x008750ce: xorps  xmm0,xmm0
0x008750d1: movups XMMWORD PTR [rbp+0x20],xmm0
0x008750d5: mov    QWORD PTR [rbp+0x30],r14
0x008750d9: mov    QWORD PTR [rbp+0x38],rsi
0x008750dd: mov    BYTE PTR [rbp+0x20],0x0
0x008750e1: movups XMMWORD PTR [rbp-0x60],xmm0
0x008750e5: mov    QWORD PTR [rbp-0x50],r14
0x008750e9: mov    QWORD PTR [rbp-0x48],rsi
0x008750ed: mov    BYTE PTR [rbp-0x60],0x0
0x008750f1: imul   eax,ebx,0x3e8
0x008750f7: sub    edi,eax
0x008750f9: lea    rdx,[rbp-0x60]
0x008750fd: mov    ecx,edi
0x008750ff: call   0x14052c2b0
0x00875104: lea    rdx,[rbp-0x60]
0x00875108: cmp    QWORD PTR [rbp-0x48],0xf
0x0087510d: cmova  rdx,QWORD PTR [rbp-0x60]
0x00875112: mov    r8,QWORD PTR [rbp-0x50]
0x00875116: lea    rcx,[rbp+0x20]
0x0087511a: call   0x14006fa10
0x0087511f: nop
0x00875120: mov    rdx,QWORD PTR [rbp-0x48]
0x00875124: cmp    rdx,0xf
0x00875128: jbe    0x14087515b
0x0087512a: inc    rdx
0x0087512d: mov    rcx,QWORD PTR [rbp-0x60]
0x00875131: mov    rax,rcx
0x00875134: cmp    rdx,0x1000
0x0087513b: jb     0x140875156
0x0087513d: add    rdx,0x27
0x00875141: mov    rcx,QWORD PTR [rcx-0x8]
0x00875145: sub    rax,rcx
0x00875148: add    rax,0xfffffffffffffff8
0x0087514c: cmp    rax,0x1f
0x00875150: ja     0x140875ba0
0x00875156: call   0x141539680
0x0087515b: mov    r8,QWORD PTR [rbp+0x30]
0x0087515f: cmp    r8,0x2
0x00875163: ja     0x14087517c
0x00875165: mov    r8,r15
0x00875168: lea    rdx,[rip+0xda1f1d]        # 0x14161708c ; literal="0"
0x0087516f: lea    rcx,[rbp-0x40]
0x00875173: call   0x14006fa10
0x00875178: mov    r8,QWORD PTR [rbp+0x30]
0x0087517c: cmp    r8,0x1
0x00875180: jne    0x140875199
0x00875182: mov    r8,r15
0x00875185: lea    rdx,[rip+0xda1f00]        # 0x14161708c ; literal="0"
0x0087518c: lea    rcx,[rbp-0x40]
0x00875190: call   0x14006fa10
0x00875195: mov    r8,QWORD PTR [rbp+0x30]
0x00875199: lea    rdx,[rbp+0x20]
0x0087519d: cmp    QWORD PTR [rbp+0x38],0xf
0x008751a2: cmova  rdx,QWORD PTR [rbp+0x20]
0x008751a7: lea    rcx,[rbp-0x40]
0x008751ab: call   0x14006fa10
0x008751b0: mov    rcx,QWORD PTR [rbp+0x30]
0x008751b4: cmp    rcx,0x4
0x008751b8: jb     0x140875229
0x008751ba: nop    WORD PTR [rax+rax*1+0x0]
0x008751c0: lea    rax,[rbp+0x20]
0x008751c4: mov    r8,QWORD PTR [rbp+0x20]
0x008751c8: mov    r9,QWORD PTR [rbp+0x38]
0x008751cc: cmp    r9,0xf
0x008751d0: cmova  rax,r8
0x008751d4: movsxd r10,ecx
0x008751d7: lea    rdx,[r10-0x1]
0x008751db: cmp    BYTE PTR [rdx+rax*1],0x30
0x008751df: jne    0x140875229
0x008751e1: lea    rax,[rbp+0x20]
0x008751e5: cmp    r9,0xf
0x008751e9: cmova  rax,r8
0x008751ed: cmp    BYTE PTR [r10+rax*1-0x2],0x30
0x008751f3: jne    0x140875229
0x008751f5: cmp    rdx,rcx
0x008751f8: ja     0x140875210
0x008751fa: mov    QWORD PTR [rbp+0x30],rdx
0x008751fe: lea    rax,[rbp+0x20]
0x00875202: cmp    r9,0xf
0x00875206: cmova  rax,r8
0x0087520a: mov    BYTE PTR [rax+rdx*1],0x0
0x0087520e: jmp    0x14087521f
0x00875210: sub    rdx,rcx
0x00875213: xor    r8d,r8d
0x00875216: lea    rcx,[rbp+0x20]
0x0087521a: call   0x1400e12b0
0x0087521f: mov    rcx,QWORD PTR [rbp+0x30]
0x00875223: cmp    rcx,0x4
0x00875227: jae    0x1408751c0
0x00875229: xor    r9d,r9d
0x0087522c: lea    rdx,[rbp-0x40]
0x00875230: lea    rcx,[rip+0x1dd51b9]        # 0x14264a3f0
0x00875237: call   0x140ad9960
0x0087523c: mov    eax,DWORD PTR [rsp+0x40]
0x00875240: add    eax,0x2c
0x00875243: mov    DWORD PTR [rip+0x1dd522b],eax        # 0x14264a474
0x00875249: mov    edi,DWORD PTR [rsp+0x48]
0x0087524d: mov    DWORD PTR [rip+0x1dd5225],edi        # 0x14264a478
0x00875253: mov    DWORD PTR [rip+0x1dd521f],0x1010002        # 0x14264a47c
0x0087525d: mov    r10,QWORD PTR [r13+0x10]
0x00875261: movzx  r9d,WORD PTR [r10+0x4ce]
0x00875269: movzx  r8d,WORD PTR [r10+0xaa]
0x00875271: cmp    r9w,r8w
0x00875275: setl   dl
0x00875278: movzx  eax,dl
0x0087527b: or     al,0x2
0x0087527d: movzx  ecx,al
0x00875280: movzx  eax,dl
0x00875283: cmp    r9w,r8w
0x00875287: cmovle ecx,eax
0x0087528a: movzx  edx,cl
0x0087528d: movzx  r9d,WORD PTR [r10+0x4cc]
0x00875295: movzx  r8d,WORD PTR [r10+0xa8]
0x0087529d: movzx  eax,dl
0x008752a0: or     al,0x4
0x008752a2: movzx  ecx,al
0x008752a5: cmp    r9w,r8w
0x008752a9: cmovle ecx,edx
0x008752ac: movzx  edx,cl
0x008752af: movzx  eax,dl
0x008752b2: or     al,0x8
0x008752b4: movzx  ecx,al
0x008752b7: cmp    r9w,r8w
0x008752bb: cmovge ecx,edx
0x008752be: movzx  edx,cl
0x008752c1: movzx  r9d,WORD PTR [r10+0x4d0]
0x008752c9: movzx  r8d,WORD PTR [r10+0xac]
0x008752d1: movzx  eax,dl
0x008752d4: or     al,0x10
0x008752d6: movzx  ecx,al
0x008752d9: cmp    r9w,r8w
0x008752dd: cmovle ecx,edx
0x008752e0: movzx  edx,cl
0x008752e3: movzx  eax,dl
0x008752e6: or     al,0x20
0x008752e8: movzx  ecx,al
0x008752eb: cmp    r9w,r8w
0x008752ef: cmovge ecx,edx
0x008752f2: movzx  ebx,cl
0x008752f5: mov    eax,ebx
0x008752f7: and    eax,0xf
0x008752fa: dec    eax
0x008752fc: cmp    eax,0x9
0x008752ff: ja     0x140875343
0x00875301: cdqe
0x00875303: lea    rdx,[rip+0xffffffffff78acf6]        # 0x140000000
0x0087530a: mov    ecx,DWORD PTR [rdx+rax*4+0x877114]
0x00875311: add    rcx,rdx
0x00875314: jmp    rcx
0x00875316: mov    dl,0x5e
0x00875318: jmp    0x140875334
0x0087531a: mov    dl,0x76
0x0087531c: jmp    0x140875334
0x0087531e: mov    dl,0x3e
0x00875320: jmp    0x140875334
0x00875322: mov    dl,0x3c
0x00875324: jmp    0x140875334
0x00875326: mov    dl,0xbf
0x00875328: jmp    0x140875334
0x0087532a: mov    dl,0xda
0x0087532c: jmp    0x140875334
0x0087532e: mov    dl,0xd9
0x00875330: jmp    0x140875334
0x00875332: mov    dl,0xc0
0x00875334: mov    r8b,0x1
0x00875337: lea    rcx,[rip+0x1dd50b2]        # 0x14264a3f0
0x0087533e: call   0x1400bb190
0x00875343: test   bl,0x10
0x00875346: je     0x140875365
0x00875348: mov    DWORD PTR [rip+0x1dd5126],esi        # 0x14264a474
0x0087534e: mov    DWORD PTR [rip+0x1dd5124],edi        # 0x14264a478
0x00875354: mov    r8b,0x1
0x00875357: mov    dl,0x18
0x00875359: lea    rcx,[rip+0x1dd5090]        # 0x14264a3f0
0x00875360: call   0x1400bb190
0x00875365: test   bl,0x20
0x00875368: je     0x140875388
0x0087536a: mov    DWORD PTR [rip+0x1dd5104],esi        # 0x14264a474
0x00875370: mov    DWORD PTR [rip+0x1dd5102],edi        # 0x14264a478
0x00875376: mov    r8b,0x1
0x00875379: mov    dl,0x19
0x0087537b: lea    rcx,[rip+0x1dd506e]        # 0x14264a3f0
0x00875382: call   0x1400bb190
0x00875387: nop
0x00875388: mov    rdx,QWORD PTR [rbp+0x38]
0x0087538c: cmp    rdx,0xf
0x00875390: jbe    0x1408753c3
0x00875392: inc    rdx
0x00875395: mov    rcx,QWORD PTR [rbp+0x20]
0x00875399: mov    rax,rcx
0x0087539c: cmp    rdx,0x1000
0x008753a3: jb     0x1408753be
0x008753a5: add    rdx,0x27
0x008753a9: mov    rcx,QWORD PTR [rcx-0x8]
0x008753ad: sub    rax,rcx
0x008753b0: add    rax,0xfffffffffffffff8
0x008753b4: cmp    rax,0x1f
0x008753b8: ja     0x140875ba7
0x008753be: call   0x141539680
0x008753c3: mov    QWORD PTR [rbp+0x30],r14
0x008753c7: mov    QWORD PTR [rbp+0x38],rsi
0x008753cb: mov    BYTE PTR [rbp+0x20],0x0
0x008753cf: mov    rdx,QWORD PTR [rbp-0x8]
0x008753d3: cmp    rdx,0xf
0x008753d7: jbe    0x14087540a
0x008753d9: inc    rdx
0x008753dc: mov    rcx,QWORD PTR [rbp-0x20]
0x008753e0: mov    rax,rcx
0x008753e3: cmp    rdx,0x1000
0x008753ea: jb     0x140875405
0x008753ec: add    rdx,0x27
0x008753f0: mov    rcx,QWORD PTR [rcx-0x8]
0x008753f4: sub    rax,rcx
0x008753f7: add    rax,0xfffffffffffffff8
0x008753fb: cmp    rax,0x1f
0x008753ff: ja     0x140875bae
0x00875405: call   0x141539680
0x0087540a: mov    QWORD PTR [rbp-0x10],r14
0x0087540e: mov    QWORD PTR [rbp-0x8],rsi
0x00875412: mov    BYTE PTR [rbp-0x20],0x0
0x00875416: mov    rdx,QWORD PTR [rbp-0x28]
0x0087541a: cmp    rdx,0xf
0x0087541e: jbe    0x140875451
0x00875420: inc    rdx
0x00875423: mov    rcx,QWORD PTR [rbp-0x40]
0x00875427: mov    rax,rcx
0x0087542a: cmp    rdx,0x1000
0x00875431: jb     0x14087544c
0x00875433: add    rdx,0x27
0x00875437: mov    rcx,QWORD PTR [rcx-0x8]
0x0087543b: sub    rax,rcx
0x0087543e: add    rax,0xfffffffffffffff8
0x00875442: cmp    rax,0x1f
0x00875446: ja     0x140875bb5
0x0087544c: call   0x141539680
0x00875451: mov    ebx,DWORD PTR [rsp+0x40]
0x00875455: movsxd rcx,DWORD PTR [r13+0x18]
0x00875459: mov    rax,QWORD PTR [r13+0x10]
0x0087545d: mov    edx,DWORD PTR [rsp+0x7c]
0x00875461: mov    DWORD PTR [rax+rcx*4+0xde8],edx
0x00875468: add    edi,0x3
0x0087546b: mov    DWORD PTR [rsp+0x48],edi
0x0087546f: lea    rcx,[rbp+0x0]
0x00875473: call   0x14006f850
0x00875478: mov    r9d,DWORD PTR [rsp+0x44]
0x0087547d: inc    r9d
0x00875480: mov    DWORD PTR [rsp+0x44],r9d
0x00875485: inc    QWORD PTR [rbp-0x78]
0x00875489: mov    edi,DWORD PTR [rsp+0x54]
0x0087548d: cmp    r9d,DWORD PTR [rbp-0x80]
0x00875491: jge    0x140875bed
0x00875497: mov    r10,QWORD PTR [rsp+0x60]
0x0087549c: mov    r11d,DWORD PTR [rsp+0x48]
0x008754a1: jmp    0x140874bb0
0x008754a6: mov    r14,QWORD PTR [r13+0x10]
0x008754aa: test   DWORD PTR [r14+0x110],0x40000
0x008754b5: mov    DWORD PTR [rip+0x1dd4fbd],0x1010005        # 0x14264a47c
0x008754bf: jne    0x1408754cb
0x008754c1: mov    DWORD PTR [rip+0x1dd4fb1],0x1000007        # 0x14264a47c
0x008754cb: lea    r9,[rbp-0x70]
0x008754cf: xor    r8d,r8d
0x008754d2: xor    edx,edx
0x008754d4: mov    rcx,r14
0x008754d7: call   0x141334c10
0x008754dc: lea    ecx,[rax+0x64]
0x008754df: mov    eax,0xf4240
0x008754e4: cdq
0x008754e5: idiv   ecx
0x008754e7: mov    esi,eax
0x008754e9: lea    r9,[rbp-0x70]
0x008754ed: mov    r8b,0x1
0x008754f0: xor    edx,edx
0x008754f2: mov    rcx,r14
0x008754f5: call   0x141334c10
0x008754fa: lea    ecx,[rax+0x64]
0x008754fd: mov    eax,0xf4240
0x00875502: cdq
0x00875503: idiv   ecx
0x00875505: mov    edi,eax
0x00875507: xorps  xmm0,xmm0
0x0087550a: movups XMMWORD PTR [rbp-0x60],xmm0
0x0087550e: mov    QWORD PTR [rbp-0x50],0x7
0x00875516: mov    ebx,0xf
0x0087551b: mov    QWORD PTR [rbp-0x48],rbx
0x0087551f: mov    rax,QWORD PTR [rip+0xe3db4a]        # 0x1416b3070 ; literal="Speed: "
0x00875526: mov    DWORD PTR [rbp-0x60],eax
0x00875529: movzx  eax,WORD PTR [rip+0xe3db44]        # 0x1416b3074 ; literal="d: "
0x00875530: mov    WORD PTR [rbp-0x5c],ax
0x00875534: movzx  eax,BYTE PTR [rip+0xe3db3b]        # 0x1416b3076 ; literal=" "
0x0087553b: mov    BYTE PTR [rbp-0x5a],al
0x0087553e: mov    BYTE PTR [rbp-0x59],0x0
0x00875542: xor    r9d,r9d
0x00875545: lea    rdx,[rbp-0x60]
0x00875549: lea    rcx,[rip+0x1dd4ea0]        # 0x14264a3f0
0x00875550: call   0x140ad9960
0x00875555: nop
0x00875556: mov    rdx,QWORD PTR [rbp-0x48]
0x0087555a: cmp    rdx,rbx
0x0087555d: jbe    0x140875590
0x0087555f: inc    rdx
0x00875562: mov    rcx,QWORD PTR [rbp-0x60]
0x00875566: mov    rax,rcx
0x00875569: cmp    rdx,0x1000
0x00875570: jb     0x14087558b
0x00875572: add    rdx,0x27
0x00875576: mov    rcx,QWORD PTR [rcx-0x8]
0x0087557a: sub    rax,rcx
0x0087557d: add    rax,0xfffffffffffffff8
0x00875581: cmp    rax,0x1f
0x00875585: ja     0x140875be6
0x0087558b: call   0x141539680
0x00875590: xorps  xmm0,xmm0
0x00875593: movups XMMWORD PTR [rbp-0x20],xmm0
0x00875597: xor    eax,eax
0x00875599: mov    QWORD PTR [rbp-0x10],rax
0x0087559d: mov    QWORD PTR [rbp-0x8],rbx
0x008755a1: mov    BYTE PTR [rbp-0x20],al
0x008755a4: movups XMMWORD PTR [rbp-0x40],xmm0
0x008755a8: mov    QWORD PTR [rbp-0x30],rax
0x008755ac: mov    BYTE PTR [rbp-0x40],al
0x008755af: cmp    esi,edi
0x008755b1: je     0x1408758b9
0x008755b7: mov    QWORD PTR [rbp-0x28],rbx
0x008755bb: movups XMMWORD PTR [rbp-0x60],xmm0
0x008755bf: mov    QWORD PTR [rbp-0x50],rax
0x008755c3: mov    QWORD PTR [rbp-0x48],rbx
0x008755c7: mov    BYTE PTR [rbp-0x60],al
0x008755ca: mov    eax,0x10624dd3
0x008755cf: imul   edi
0x008755d1: mov    ebx,edx
0x008755d3: sar    ebx,0x6
0x008755d6: mov    eax,ebx
0x008755d8: shr    eax,0x1f
0x008755db: add    ebx,eax
0x008755dd: lea    rdx,[rbp-0x60]
0x008755e1: mov    ecx,ebx
0x008755e3: call   0x14052c2b0
0x008755e8: lea    rdx,[rbp-0x60]
0x008755ec: cmp    QWORD PTR [rbp-0x48],0xf
0x008755f1: cmova  rdx,QWORD PTR [rbp-0x60]
0x008755f6: mov    r8,QWORD PTR [rbp-0x50]
0x008755fa: lea    rcx,[rbp-0x40]
0x008755fe: call   0x14006fa10
0x00875603: nop
0x00875604: mov    rdx,QWORD PTR [rbp-0x48]
0x00875608: cmp    rdx,0xf
0x0087560c: jbe    0x14087563f
0x0087560e: inc    rdx
0x00875611: mov    rcx,QWORD PTR [rbp-0x60]
0x00875615: mov    rax,rcx
0x00875618: cmp    rdx,0x1000
0x0087561f: jb     0x14087563a
0x00875621: add    rdx,0x27
0x00875625: mov    rcx,QWORD PTR [rcx-0x8]
0x00875629: sub    rax,rcx
0x0087562c: add    rax,0xfffffffffffffff8
0x00875630: cmp    rax,0x1f
0x00875634: ja     0x140875bbc
0x0087563a: call   0x141539680
0x0087563f: lea    rdx,[rbp-0x40]
0x00875643: cmp    QWORD PTR [rbp-0x28],0xf
0x00875648: cmova  rdx,QWORD PTR [rbp-0x40]
0x0087564d: mov    r8,QWORD PTR [rbp-0x30]
0x00875651: lea    rcx,[rbp-0x20]
0x00875655: call   0x14006fa10
0x0087565a: cmp    QWORD PTR [rbp-0x30],0x1
0x0087565f: jne    0x1408756b7
0x00875661: lea    rdx,[rip+0xd72f4c]        # 0x1415e85b4 ; literal="."
0x00875668: lea    rcx,[rbp-0x20]
0x0087566c: call   0x14006f560
0x00875671: lea    rcx,[rbp-0x60]
0x00875675: call   0x14006f690
0x0087567a: nop
0x0087567b: imul   eax,ebx,0x3e8
0x00875681: sub    edi,eax
0x00875683: mov    eax,0x51eb851f
0x00875688: imul   edi
0x0087568a: mov    ecx,edx
0x0087568c: sar    ecx,0x5
0x0087568f: mov    eax,ecx
0x00875691: shr    eax,0x1f
0x00875694: add    ecx,eax
0x00875696: lea    rdx,[rbp-0x60]
0x0087569a: call   0x14052c130
0x0087569f: lea    rdx,[rbp-0x60]
0x008756a3: lea    rcx,[rbp-0x20]
0x008756a7: call   0x1400b9d10
0x008756ac: nop
0x008756ad: lea    rcx,[rbp-0x60]
0x008756b1: call   0x14006f850
0x008756b6: nop
0x008756b7: mov    rdx,QWORD PTR [rbp-0x28]
0x008756bb: cmp    rdx,0xf
0x008756bf: jbe    0x1408756f2
0x008756c1: inc    rdx
0x008756c4: mov    rcx,QWORD PTR [rbp-0x40]
0x008756c8: mov    rax,rcx
0x008756cb: cmp    rdx,0x1000
0x008756d2: jb     0x1408756ed
0x008756d4: add    rdx,0x27
0x008756d8: mov    rcx,QWORD PTR [rcx-0x8]
0x008756dc: sub    rax,rcx
0x008756df: add    rax,0xfffffffffffffff8
0x008756e3: cmp    rax,0x1f
0x008756e7: ja     0x140875bc3
0x008756ed: call   0x141539680
0x008756f2: mov    r8d,0x1
0x008756f8: lea    rdx,[rip+0xd75e15]        # 0x1415eb514 ; literal="/"
0x008756ff: lea    rcx,[rbp-0x20]
0x00875703: call   0x14006fa10
0x00875708: xorps  xmm0,xmm0
0x0087570b: movups XMMWORD PTR [rbp-0x40],xmm0
0x0087570f: xor    ecx,ecx
0x00875711: mov    QWORD PTR [rbp-0x30],rcx
0x00875715: mov    eax,0xf
0x0087571a: mov    QWORD PTR [rbp-0x28],rax
0x0087571e: mov    BYTE PTR [rbp-0x40],cl
0x00875721: movups XMMWORD PTR [rbp-0x60],xmm0
0x00875725: mov    QWORD PTR [rbp-0x50],rcx
0x00875729: mov    QWORD PTR [rbp-0x48],rax
0x0087572d: mov    BYTE PTR [rbp-0x60],cl
0x00875730: mov    eax,0x10624dd3
0x00875735: imul   esi
0x00875737: mov    ebx,edx
0x00875739: sar    ebx,0x6
0x0087573c: mov    eax,ebx
0x0087573e: shr    eax,0x1f
0x00875741: add    ebx,eax
0x00875743: lea    rdx,[rbp-0x60]
0x00875747: mov    ecx,ebx
0x00875749: call   0x14052c2b0
0x0087574e: lea    rdx,[rbp-0x60]
0x00875752: cmp    QWORD PTR [rbp-0x48],0xf
0x00875757: cmova  rdx,QWORD PTR [rbp-0x60]
0x0087575c: mov    r8,QWORD PTR [rbp-0x50]
0x00875760: lea    rcx,[rbp-0x40]
0x00875764: call   0x14006fa10
0x00875769: nop
0x0087576a: mov    rdx,QWORD PTR [rbp-0x48]
0x0087576e: cmp    rdx,0xf
0x00875772: jbe    0x1408757a5
0x00875774: inc    rdx
0x00875777: mov    rcx,QWORD PTR [rbp-0x60]
0x0087577b: mov    rax,rcx
0x0087577e: cmp    rdx,0x1000
0x00875785: jb     0x1408757a0
0x00875787: add    rdx,0x27
0x0087578b: mov    rcx,QWORD PTR [rcx-0x8]
0x0087578f: sub    rax,rcx
0x00875792: add    rax,0xfffffffffffffff8
0x00875796: cmp    rax,0x1f
0x0087579a: ja     0x140875bca
0x008757a0: call   0x141539680
0x008757a5: lea    rdx,[rbp-0x40]
0x008757a9: cmp    QWORD PTR [rbp-0x28],0xf
0x008757ae: cmova  rdx,QWORD PTR [rbp-0x40]
0x008757b3: mov    r8,QWORD PTR [rbp-0x30]
0x008757b7: lea    rcx,[rbp-0x20]
0x008757bb: call   0x14006fa10
0x008757c0: cmp    QWORD PTR [rbp-0x30],0x1
0x008757c5: jne    0x14087581d
0x008757c7: lea    rdx,[rip+0xd72de6]        # 0x1415e85b4 ; literal="."
0x008757ce: lea    rcx,[rbp-0x20]
0x008757d2: call   0x14006f560
0x008757d7: lea    rcx,[rbp-0x60]
0x008757db: call   0x14006f690
0x008757e0: nop
0x008757e1: imul   eax,ebx,0x3e8
0x008757e7: sub    esi,eax
0x008757e9: mov    eax,0x51eb851f
0x008757ee: imul   esi
0x008757f0: mov    ecx,edx
0x008757f2: sar    ecx,0x5
0x008757f5: mov    eax,ecx
0x008757f7: shr    eax,0x1f
0x008757fa: add    ecx,eax
0x008757fc: lea    rdx,[rbp-0x60]
0x00875800: call   0x14052c130
0x00875805: lea    rdx,[rbp-0x60]
0x00875809: lea    rcx,[rbp-0x20]
0x0087580d: call   0x1400b9d10
0x00875812: nop
0x00875813: lea    rcx,[rbp-0x60]
0x00875817: call   0x14006f850
0x0087581c: nop
0x0087581d: mov    rdx,QWORD PTR [rbp-0x28]
0x00875821: cmp    rdx,0xf
0x00875825: jbe    0x140875858
0x00875827: inc    rdx
0x0087582a: mov    rcx,QWORD PTR [rbp-0x40]
0x0087582e: mov    rax,rcx
0x00875831: cmp    rdx,0x1000
0x00875838: jb     0x140875853
0x0087583a: add    rdx,0x27
0x0087583e: mov    rcx,QWORD PTR [rcx-0x8]
0x00875842: sub    rax,rcx
0x00875845: add    rax,0xfffffffffffffff8
0x00875849: cmp    rax,0x1f
0x0087584d: ja     0x140875bd1
0x00875853: call   0x141539680
0x00875858: mov    esi,0xf
0x0087585d: xor    r9d,r9d
0x00875860: lea    rdx,[rbp-0x20]
0x00875864: lea    rcx,[rip+0x1dd4b85]        # 0x14264a3f0
0x0087586b: call   0x140ad9960
0x00875870: mov    ebx,DWORD PTR [rsp+0x40]
0x00875874: lea    eax,[rbx+0x2c]
0x00875877: mov    DWORD PTR [rip+0x1dd4bf7],eax        # 0x14264a474
0x0087587d: mov    DWORD PTR [rip+0x1dd4bf4],r15d        # 0x14264a478
0x00875884: mov    DWORD PTR [rip+0x1dd4bee],0x1010002        # 0x14264a47c
0x0087588e: movzx  eax,BYTE PTR [r14+0x4c4]
0x00875896: and    eax,0xf
0x00875899: dec    eax
0x0087589b: cmp    eax,0x9
0x0087589e: ja     0x140875b0e
0x008758a4: cdqe
0x008758a6: lea    rdx,[rip+0xffffffffff78a753]        # 0x140000000
0x008758ad: mov    ecx,DWORD PTR [rdx+rax*4+0x87713c]
0x008758b4: add    rcx,rdx
0x008758b7: jmp    rcx
0x008758b9: mov    esi,0xf
0x008758be: mov    QWORD PTR [rbp-0x28],rsi
0x008758c2: movups XMMWORD PTR [rbp-0x60],xmm0
0x008758c6: mov    QWORD PTR [rbp-0x50],rax
0x008758ca: mov    QWORD PTR [rbp-0x48],rsi
0x008758ce: mov    BYTE PTR [rbp-0x60],0x0
0x008758d2: mov    eax,0x10624dd3
0x008758d7: imul   edi
0x008758d9: mov    ebx,edx
0x008758db: sar    ebx,0x6
0x008758de: mov    eax,ebx
0x008758e0: shr    eax,0x1f
0x008758e3: add    ebx,eax
0x008758e5: lea    rdx,[rbp-0x60]
0x008758e9: mov    ecx,ebx
0x008758eb: call   0x14052c2b0
0x008758f0: lea    rdx,[rbp-0x60]
0x008758f4: cmp    QWORD PTR [rbp-0x48],rsi
0x008758f8: cmova  rdx,QWORD PTR [rbp-0x60]
0x008758fd: mov    r8,QWORD PTR [rbp-0x50]
0x00875901: lea    rcx,[rbp-0x40]
0x00875905: call   0x14006fa10
0x0087590a: nop
0x0087590b: mov    rdx,QWORD PTR [rbp-0x48]
0x0087590f: cmp    rdx,rsi
0x00875912: jbe    0x140875945
0x00875914: inc    rdx
0x00875917: mov    rcx,QWORD PTR [rbp-0x60]
0x0087591b: mov    rax,rcx
0x0087591e: cmp    rdx,0x1000
0x00875925: jb     0x140875940
0x00875927: add    rdx,0x27
0x0087592b: mov    rcx,QWORD PTR [rcx-0x8]
0x0087592f: sub    rax,rcx
0x00875932: add    rax,0xfffffffffffffff8
0x00875936: cmp    rax,0x1f
0x0087593a: ja     0x140875bd8
0x00875940: call   0x141539680
0x00875945: lea    rdx,[rbp-0x40]
0x00875949: cmp    QWORD PTR [rbp-0x28],0xf
0x0087594e: cmova  rdx,QWORD PTR [rbp-0x40]
0x00875953: mov    r8,QWORD PTR [rbp-0x30]
0x00875957: lea    rcx,[rbp-0x20]
0x0087595b: call   0x14006fa10
0x00875960: mov    r8d,0x1
0x00875966: lea    rdx,[rip+0xd72c47]        # 0x1415e85b4 ; literal="."
0x0087596d: lea    rcx,[rbp-0x20]
0x00875971: call   0x14006fa10
0x00875976: xorps  xmm0,xmm0
0x00875979: movups XMMWORD PTR [rbp+0x40],xmm0
0x0087597d: xor    eax,eax
0x0087597f: mov    QWORD PTR [rbp+0x50],rax
0x00875983: mov    QWORD PTR [rbp+0x58],rsi
0x00875987: mov    BYTE PTR [rbp+0x40],al
0x0087598a: movups XMMWORD PTR [rbp-0x60],xmm0
0x0087598e: mov    QWORD PTR [rbp-0x50],rax
0x00875992: mov    QWORD PTR [rbp-0x48],rsi
0x00875996: mov    BYTE PTR [rbp-0x60],al
0x00875999: imul   eax,ebx,0x3e8
0x0087599f: sub    edi,eax
0x008759a1: lea    rdx,[rbp-0x60]
0x008759a5: mov    ecx,edi
0x008759a7: call   0x14052c2b0
0x008759ac: lea    rdx,[rbp-0x60]
0x008759b0: cmp    QWORD PTR [rbp-0x48],0xf
0x008759b5: cmova  rdx,QWORD PTR [rbp-0x60]
0x008759ba: mov    r8,QWORD PTR [rbp-0x50]
0x008759be: lea    rcx,[rbp+0x40]
0x008759c2: call   0x14006fa10
0x008759c7: nop
0x008759c8: mov    rdx,QWORD PTR [rbp-0x48]
0x008759cc: cmp    rdx,0xf
0x008759d0: jbe    0x140875a03
0x008759d2: inc    rdx
0x008759d5: mov    rcx,QWORD PTR [rbp-0x60]
0x008759d9: mov    rax,rcx
0x008759dc: cmp    rdx,0x1000
0x008759e3: jb     0x1408759fe
0x008759e5: add    rdx,0x27
0x008759e9: mov    rcx,QWORD PTR [rcx-0x8]
0x008759ed: sub    rax,rcx
0x008759f0: add    rax,0xfffffffffffffff8
0x008759f4: cmp    rax,0x1f
0x008759f8: ja     0x140875bdf
0x008759fe: call   0x141539680
0x00875a03: mov    r8,QWORD PTR [rbp+0x50]
0x00875a07: cmp    r8,0x2
0x00875a0b: ja     0x140875a21
0x00875a0d: lea    rdx,[rip+0xda1678]        # 0x14161708c ; literal="0"
0x00875a14: lea    rcx,[rbp-0x20]
0x00875a18: call   0x14006f560
0x00875a1d: mov    r8,QWORD PTR [rbp+0x50]
0x00875a21: cmp    r8,0x1
0x00875a25: jne    0x140875a3b
0x00875a27: lea    rdx,[rip+0xda165e]        # 0x14161708c ; literal="0"
0x00875a2e: lea    rcx,[rbp-0x20]
0x00875a32: call   0x14006f560
0x00875a37: mov    r8,QWORD PTR [rbp+0x50]
0x00875a3b: lea    rdx,[rbp+0x40]
0x00875a3f: cmp    QWORD PTR [rbp+0x58],0xf
0x00875a44: cmova  rdx,QWORD PTR [rbp+0x40]
0x00875a49: lea    rcx,[rbp-0x20]
0x00875a4d: call   0x14006fa10
0x00875a52: mov    rcx,QWORD PTR [rbp+0x50]
0x00875a56: cmp    rcx,0x4
0x00875a5a: jb     0x140875ac9
0x00875a5c: nop    DWORD PTR [rax+0x0]
0x00875a60: lea    rax,[rbp+0x40]
0x00875a64: mov    r8,QWORD PTR [rbp+0x40]
0x00875a68: mov    r9,QWORD PTR [rbp+0x58]
0x00875a6c: cmp    r9,0xf
0x00875a70: cmova  rax,r8
0x00875a74: movsxd r10,ecx
0x00875a77: lea    rdx,[r10-0x1]
0x00875a7b: cmp    BYTE PTR [rdx+rax*1],0x30
0x00875a7f: jne    0x140875ac9
0x00875a81: lea    rax,[rbp+0x40]
0x00875a85: cmp    r9,0xf
0x00875a89: cmova  rax,r8
0x00875a8d: cmp    BYTE PTR [rax+r10*1-0x2],0x30
0x00875a93: jne    0x140875ac9
0x00875a95: cmp    rdx,rcx
0x00875a98: ja     0x140875ab0
0x00875a9a: mov    QWORD PTR [rbp+0x50],rdx
0x00875a9e: lea    rax,[rbp+0x40]
0x00875aa2: cmp    r9,0xf
0x00875aa6: cmova  rax,r8
0x00875aaa: mov    BYTE PTR [rax+rdx*1],0x0
0x00875aae: jmp    0x140875abf
0x00875ab0: sub    rdx,rcx
0x00875ab3: xor    r8d,r8d
0x00875ab6: lea    rcx,[rbp+0x40]
0x00875aba: call   0x1400e12b0
0x00875abf: mov    rcx,QWORD PTR [rbp+0x50]
0x00875ac3: cmp    rcx,0x4
0x00875ac7: jae    0x140875a60
0x00875ac9: lea    rcx,[rbp+0x40]
0x00875acd: call   0x14006f850
0x00875ad2: nop
0x00875ad3: lea    rcx,[rbp-0x40]
0x00875ad7: call   0x14006f850
0x00875adc: jmp    0x14087585d
0x00875ae1: mov    dl,0x5e
0x00875ae3: jmp    0x140875aff
0x00875ae5: mov    dl,0x76
0x00875ae7: jmp    0x140875aff
0x00875ae9: mov    dl,0x3e
0x00875aeb: jmp    0x140875aff
0x00875aed: mov    dl,0x3c
0x00875aef: jmp    0x140875aff
0x00875af1: mov    dl,0xbf
0x00875af3: jmp    0x140875aff
0x00875af5: mov    dl,0xda
0x00875af7: jmp    0x140875aff
0x00875af9: mov    dl,0xd9
0x00875afb: jmp    0x140875aff
0x00875afd: mov    dl,0xc0
0x00875aff: mov    r8b,0x1
0x00875b02: lea    rcx,[rip+0x1dd48e7]        # 0x14264a3f0
0x00875b09: call   0x1400bb190
0x00875b0e: mov    edi,DWORD PTR [rsp+0x48]
0x00875b12: test   BYTE PTR [r14+0x4c4],0x10
0x00875b1a: je     0x140875b39
0x00875b1c: mov    DWORD PTR [rip+0x1dd4952],esi        # 0x14264a474
0x00875b22: mov    DWORD PTR [rip+0x1dd4950],edi        # 0x14264a478
0x00875b28: mov    r8b,0x1
0x00875b2b: mov    dl,0x18
0x00875b2d: lea    rcx,[rip+0x1dd48bc]        # 0x14264a3f0
0x00875b34: call   0x1400bb190
0x00875b39: test   BYTE PTR [r14+0x4c4],0x20
0x00875b41: je     0x140875b61
0x00875b43: mov    DWORD PTR [rip+0x1dd492b],esi        # 0x14264a474
0x00875b49: mov    DWORD PTR [rip+0x1dd4929],edi        # 0x14264a478
0x00875b4f: mov    r8b,0x1
0x00875b52: mov    dl,0x19
0x00875b54: lea    rcx,[rip+0x1dd4895]        # 0x14264a3f0
0x00875b5b: call   0x1400bb190
0x00875b60: nop
0x00875b61: mov    rdx,QWORD PTR [rbp-0x8]
0x00875b65: cmp    rdx,0xf
0x00875b69: jbe    0x140875b98
0x00875b6b: inc    rdx
0x00875b6e: mov    rcx,QWORD PTR [rbp-0x20]
0x00875b72: mov    rax,rcx
0x00875b75: cmp    rdx,0x1000
0x00875b7c: jb     0x140875b93
0x00875b7e: add    rdx,0x27
0x00875b82: mov    rcx,QWORD PTR [rcx-0x8]
0x00875b86: sub    rax,rcx
0x00875b89: add    rax,0xfffffffffffffff8
0x00875b8d: cmp    rax,0x1f
0x00875b91: ja     0x140875be6
0x00875b93: call   0x141539680
0x00875b98: xor    r14d,r14d
0x00875b9b: jmp    0x140875455
0x00875ba0: call   QWORD PTR [rip+0xd6ff82]        # 0x1415e5b28
0x00875ba6: nop
0x00875ba7: call   QWORD PTR [rip+0xd6ff7b]        # 0x1415e5b28
0x00875bad: nop
0x00875bae: call   QWORD PTR [rip+0xd6ff74]        # 0x1415e5b28
0x00875bb4: nop
0x00875bb5: call   QWORD PTR [rip+0xd6ff6d]        # 0x1415e5b28
0x00875bbb: nop
0x00875bbc: call   QWORD PTR [rip+0xd6ff66]        # 0x1415e5b28
0x00875bc2: nop
0x00875bc3: call   QWORD PTR [rip+0xd6ff5f]        # 0x1415e5b28
0x00875bc9: nop
0x00875bca: call   QWORD PTR [rip+0xd6ff58]        # 0x1415e5b28
0x00875bd0: nop
0x00875bd1: call   QWORD PTR [rip+0xd6ff51]        # 0x1415e5b28
0x00875bd7: nop
0x00875bd8: call   QWORD PTR [rip+0xd6ff4a]        # 0x1415e5b28
0x00875bde: nop
0x00875bdf: call   QWORD PTR [rip+0xd6ff43]        # 0x1415e5b28
0x00875be5: nop
0x00875be6: call   QWORD PTR [rip+0xd6ff3c]        # 0x1415e5b28
0x00875bec: nop
0x00875bed: mov    r15d,DWORD PTR [rsp+0x58]
0x00875bf2: mov    r12d,DWORD PTR [rsp+0x4c]
0x00875bf7: mov    ebx,DWORD PTR [rsp+0x50]
0x00875bfb: movsxd rax,DWORD PTR [r13+0x18]
0x00875bff: lea    rdx,[rax+rax*2]
0x00875c03: mov    rax,QWORD PTR [r13+0x10]
0x00875c07: mov    rcx,QWORD PTR [rax+0x5f8]
0x00875c0e: mov    r11,QWORD PTR [rcx+rdx*8+0xf0]
0x00875c16: sub    r11,QWORD PTR [rcx+rdx*8+0xe8]
0x00875c1e: sar    r11,0x3
0x00875c22: cmp    r11d,r15d
0x00875c25: jle    0x140875c8c
0x00875c27: mov    eax,DWORD PTR [rbp-0x7c]
0x00875c2a: lea    r10d,[rax+0x1]
0x00875c2e: lea    r9d,[rax-0x2]
0x00875c32: lea    r9d,[r9+r15*2]
0x00875c36: add    r9d,r15d
0x00875c39: mov    QWORD PTR [rbp-0x48],0x0
0x00875c41: lea    ecx,[r11-0x1]
0x00875c45: mov    eax,DWORD PTR [r13+0x4]
0x00875c49: mov    DWORD PTR [rbp-0x60],eax
0x00875c4c: mov    DWORD PTR [rbp-0x5c],r14d
0x00875c50: mov    DWORD PTR [rbp-0x58],ecx
0x00875c53: mov    DWORD PTR [rbp-0x50],r10d
0x00875c57: mov    DWORD PTR [rbp-0x4c],r9d
0x00875c5b: mov    DWORD PTR [rbp-0x54],r15d
0x00875c5f: lea    rcx,[rbp-0x60]
0x00875c63: call   0x1400bb3b0
0x00875c68: lea    r9d,[rdi+0x1]
0x00875c6c: mov    DWORD PTR [rsp+0x28],r14d
0x00875c71: movzx  eax,BYTE PTR [r13+0x8]
0x00875c76: mov    BYTE PTR [rsp+0x20],al
0x00875c7a: mov    r8d,DWORD PTR [rsp+0x68]
0x00875c7f: mov    edx,DWORD PTR [rsp+0x6c]
0x00875c83: lea    rcx,[rbp-0x60]
0x00875c87: call   0x14140f4d0
0x00875c8c: lea    r15d,[r12-0x11]
0x00875c91: mov    DWORD PTR [rip+0x1dd47e1],0x1010007        # 0x14264a47c
0x00875c9b: lea    r14d,[rbx+0x38]
0x00875c9f: mov    DWORD PTR [rip+0x1dd47ce],r14d        # 0x14264a474
0x00875ca6: mov    DWORD PTR [rip+0x1dd47cb],r15d        # 0x14264a478
0x00875cad: xorps  xmm0,xmm0
0x00875cb0: movups XMMWORD PTR [rbp-0x60],xmm0
0x00875cb4: mov    ecx,0x20
0x00875cb9: call   0x1400707d0
0x00875cbe: mov    rcx,rax
0x00875cc1: mov    QWORD PTR [rbp-0x60],rax
0x00875cc5: movdqa xmm0,XMMWORD PTR [rip+0xf155b3]        # 0x14178b280
0x00875ccd: movdqu XMMWORD PTR [rbp-0x50],xmm0
0x00875cd2: movups xmm0,XMMWORD PTR [rip+0xe3d347]        # 0x1416b3020 ; literal="Visual Stealth Factors"
0x00875cd9: movups XMMWORD PTR [rax],xmm0
0x00875cdc: mov    eax,DWORD PTR [rip+0xe3d34e]        # 0x1416b3030 ; literal="actors"
0x00875ce2: mov    DWORD PTR [rcx+0x10],eax
0x00875ce5: movzx  eax,WORD PTR [rip+0xe3d348]        # 0x1416b3034 ; literal="rs"
0x00875cec: mov    WORD PTR [rcx+0x14],ax
0x00875cf0: mov    BYTE PTR [rcx+0x16],0x0
0x00875cf4: xor    r9d,r9d
0x00875cf7: lea    rdx,[rbp-0x60]
0x00875cfb: lea    rcx,[rip+0x1dd46ee]        # 0x14264a3f0
0x00875d02: call   0x140ad9960
0x00875d07: nop
0x00875d08: lea    rcx,[rbp-0x60]
0x00875d0c: call   0x14006f850
0x00875d11: mov    rbx,QWORD PTR [r13+0x10]
0x00875d15: movzx  r9d,WORD PTR [rbx+0xac]
0x00875d1d: movzx  r8d,WORD PTR [rbx+0xaa]
0x00875d25: movzx  edx,WORD PTR [rbx+0xa8]
0x00875d2c: lea    rcx,[rip+0x1b5b7bd]        # 0x1423d14f0
0x00875d33: call   0x1414a2970
0x00875d38: mov    rcx,rax
0x00875d3b: test   rax,rax
0x00875d3e: je     0x140875d5f
0x00875d40: mov    rax,QWORD PTR [rax]
0x00875d43: call   QWORD PTR [rax]
0x00875d45: cmp    ax,0x9
0x00875d49: jne    0x140875d5f
0x00875d4b: mov    edi,0x19
0x00875d50: lea    eax,[r15+0x2]
0x00875d54: mov    r12d,0xf
0x00875d5a: jmp    0x140876026
0x00875d5f: movsx  rdi,WORD PTR [rbx+0xac]
0x00875d67: movsx  r10d,WORD PTR [rbx+0xaa]
0x00875d6f: movsx  r11d,WORD PTR [rbx+0xa8]
0x00875d77: mov    r12,QWORD PTR [rip+0x1c7232a]        # 0x1424e80a8
0x00875d7e: mov    r13d,DWORD PTR [rip+0x1c72357]        # 0x1424e80dc
0x00875d85: test   r11w,r11w
0x00875d89: js     0x140875e58
0x00875d8f: mov    r8d,r11d
0x00875d92: cmp    r11d,r13d
0x00875d95: jge    0x140875e58
0x00875d9b: test   r10w,r10w
0x00875d9f: js     0x140875e58
0x00875da5: mov    r9d,r10d
0x00875da8: cmp    r10d,DWORD PTR [rip+0x1c72331]        # 0x1424e80e0
0x00875daf: jge    0x140875e58
0x00875db5: test   di,di
0x00875db8: js     0x140875e58
0x00875dbe: cmp    edi,DWORD PTR [rip+0x1c72320]        # 0x1424e80e4
0x00875dc4: jge    0x140875e58
0x00875dca: movzx  eax,r11w
0x00875dce: sar    ax,0x4
0x00875dd2: movzx  ecx,r10w
0x00875dd6: sar    cx,0x4
0x00875dda: test   r12,r12
0x00875ddd: jne    0x140875def
0x00875ddf: movzx  esi,di
0x00875de2: movzx  ecx,r10w
0x00875de6: movzx  edx,r11w
0x00875dea: jmp    0x140875e73
0x00875def: movsx  rax,ax
0x00875df3: movsx  rdx,cx
0x00875df7: mov    rax,QWORD PTR [r12+rax*8]
0x00875dfb: mov    rax,QWORD PTR [rax+rdx*8]
0x00875dff: mov    rdx,QWORD PTR [rax+rdi*8]
0x00875e03: test   rdx,rdx
0x00875e06: je     0x140875e5e
0x00875e08: mov    eax,r11d
0x00875e0b: and    eax,0x8000000f
0x00875e10: jge    0x140875e19
0x00875e12: dec    eax
0x00875e14: or     eax,0xfffffff0
0x00875e17: inc    eax
0x00875e19: movsxd rcx,eax
0x00875e1c: shl    rcx,0x4
0x00875e20: mov    eax,r10d
0x00875e23: and    eax,0x8000000f
0x00875e28: jge    0x140875e31
0x00875e2a: dec    eax
0x00875e2c: or     eax,0xfffffff0
0x00875e2f: inc    eax
0x00875e31: cdqe
0x00875e33: add    rcx,rax
0x00875e36: test   DWORD PTR [rdx+rcx*4+0x6a0],0x800000
0x00875e41: je     0x140875e5e
0x00875e43: mov    edi,0x19
0x00875e48: mov    QWORD PTR [rbp-0x70],rsi
0x00875e4c: lea    eax,[r15+0x2]
0x00875e50: mov    r12,rsi
0x00875e53: jmp    0x140876026
0x00875e58: mov    r9d,r10d
0x00875e5b: mov    r8d,r11d
0x00875e5e: movzx  esi,di
0x00875e61: movzx  ecx,r10w
0x00875e65: movzx  edx,r11w
0x00875e69: test   r11w,r11w
0x00875e6d: js     0x140876064
0x00875e73: cmp    r8d,r13d
0x00875e76: jge    0x140876064
0x00875e7c: test   cx,cx
0x00875e7f: js     0x140876064
0x00875e85: cmp    r9d,DWORD PTR [rip+0x1c72254]        # 0x1424e80e0
0x00875e8c: jge    0x140876064
0x00875e92: test   si,si
0x00875e95: js     0x140876064
0x00875e9b: movsx  eax,si
0x00875e9e: cmp    eax,DWORD PTR [rip+0x1c72240]        # 0x1424e80e4
0x00875ea4: jge    0x140876064
0x00875eaa: sar    dx,0x4
0x00875eae: sar    cx,0x4
0x00875eb2: test   r12,r12
0x00875eb5: je     0x140876064
0x00875ebb: movsx  rax,dx
0x00875ebf: movsx  rdx,cx
0x00875ec3: mov    rax,QWORD PTR [r12+rax*8]
0x00875ec7: movsx  rcx,si
0x00875ecb: mov    rax,QWORD PTR [rax+rdx*8]
0x00875ecf: mov    rdx,QWORD PTR [rax+rcx*8]
0x00875ed3: test   rdx,rdx
0x00875ed6: je     0x140876064
0x00875edc: and    r8d,0x8000000f
0x00875ee3: jge    0x140875eef
0x00875ee5: dec    r8d
0x00875ee8: or     r8d,0xfffffff0
0x00875eec: inc    r8d
0x00875eef: movsxd rcx,r8d
0x00875ef2: shl    rcx,0x4
0x00875ef6: and    r9d,0x8000000f
0x00875efd: jge    0x140875f09
0x00875eff: dec    r9d
0x00875f02: or     r9d,0xfffffff0
0x00875f06: inc    r9d
0x00875f09: movsxd rax,r9d
0x00875f0c: add    rcx,rax
0x00875f0f: test   DWORD PTR [rdx+rcx*4+0x2a0],0x4000
0x00875f1a: je     0x140876064
0x00875f20: movzx  r9d,di
0x00875f24: movzx  r8d,r10w
0x00875f28: movzx  edx,r11w
0x00875f2c: lea    rcx,[rip+0x1b5b5bd]        # 0x1423d14f0
0x00875f33: call   0x14149def0
0x00875f38: movzx  edi,ax
0x00875f3b: cmp    ax,0x19
0x00875f3f: jle    0x140875f46
0x00875f41: mov    edi,0x19
0x00875f46: movzx  r9d,WORD PTR [rbx+0xac]
0x00875f4e: movzx  r8d,WORD PTR [rbx+0xaa]
0x00875f56: movzx  edx,WORD PTR [rbx+0xa8]
0x00875f5d: lea    rcx,[rip+0x1b5b58c]        # 0x1423d14f0
0x00875f64: call   0x14149de70
0x00875f69: movzx  esi,ax
0x00875f6c: lea    eax,[r15+0x2]
0x00875f70: cmp    si,0x19
0x00875f74: jl     0x14087601c
0x00875f7a: mov    DWORD PTR [rip+0x1dd44f8],0x1010006        # 0x14264a47c
0x00875f84: mov    DWORD PTR [rip+0x1dd44e9],r14d        # 0x14264a474
0x00875f8b: mov    DWORD PTR [rip+0x1dd44e7],eax        # 0x14264a478
0x00875f91: xorps  xmm0,xmm0
0x00875f94: movups XMMWORD PTR [rbp-0x60],xmm0
0x00875f98: movdqa xmm6,XMMWORD PTR [rip+0xf151d0]        # 0x14178b170
0x00875fa0: movdqu XMMWORD PTR [rbp-0x50],xmm6
0x00875fa5: mov    eax,DWORD PTR [rip+0xe3d06d]        # 0x1416b3018 ; literal="Light"
0x00875fab: mov    DWORD PTR [rbp-0x60],eax
0x00875fae: movzx  eax,BYTE PTR [rip+0xe3d067]        # 0x1416b301c ; literal="t"
0x00875fb5: mov    BYTE PTR [rbp-0x5c],al
0x00875fb8: mov    BYTE PTR [rbp-0x5b],0x0
0x00875fbc: xor    r9d,r9d
0x00875fbf: lea    rdx,[rbp-0x60]
0x00875fc3: lea    rcx,[rip+0x1dd4426]        # 0x14264a3f0
0x00875fca: call   0x140ad9960
0x00875fcf: nop
0x00875fd0: mov    rdx,QWORD PTR [rbp-0x48]
0x00875fd4: cmp    rdx,0xf
0x00875fd8: jbe    0x140876013
0x00875fda: inc    rdx
0x00875fdd: mov    rcx,QWORD PTR [rbp-0x60]
0x00875fe1: mov    rax,rcx
0x00875fe4: cmp    rdx,0x1000
0x00875feb: jb     0x140876006
0x00875fed: add    rdx,0x27
0x00875ff1: mov    rcx,QWORD PTR [rcx-0x8]
0x00875ff5: sub    rax,rcx
0x00875ff8: add    rax,0xfffffffffffffff8
0x00875ffc: cmp    rax,0x1f
0x00876000: ja     0x140876e2c
0x00876006: call   0x141539680
0x0087600b: movdqa xmm6,XMMWORD PTR [rip+0xf1515d]        # 0x14178b170
0x00876013: movzx  r12d,si
0x00876017: jmp    0x1408760dd
0x0087601c: movzx  r12d,si
0x00876020: cmp    si,0x3
0x00876024: jle    0x140876073
0x00876026: mov    DWORD PTR [rip+0x1dd444c],0x1010002        # 0x14264a47c
0x00876030: mov    DWORD PTR [rip+0x1dd443d],r14d        # 0x14264a474
0x00876037: mov    DWORD PTR [rip+0x1dd443b],eax        # 0x14264a478
0x0087603d: lea    rdx,[rip+0xe3cff4]        # 0x1416b3038 ; literal="Low Light"
0x00876044: lea    rcx,[rbp-0x60]
0x00876048: call   0x140068150
0x0087604d: nop
0x0087604e: xor    r9d,r9d
0x00876051: lea    rdx,[rbp-0x60]
0x00876055: lea    rcx,[rip+0x1dd4394]        # 0x14264a3f0
0x0087605c: call   0x140ad9960
0x00876061: nop
0x00876062: jmp    0x1408760cc
0x00876064: mov    edi,0x19
0x00876069: mov    r12d,0x3
0x0087606f: lea    eax,[r15+0x2]
0x00876073: mov    DWORD PTR [rip+0x1dd43ff],0x1010003        # 0x14264a47c
0x0087607d: mov    DWORD PTR [rip+0x1dd43f0],r14d        # 0x14264a474
0x00876084: mov    DWORD PTR [rip+0x1dd43ee],eax        # 0x14264a478
0x0087608a: xorps  xmm0,xmm0
0x0087608d: movups XMMWORD PTR [rbp-0x60],xmm0
0x00876091: movdqa xmm1,XMMWORD PTR [rip+0xf15107]        # 0x14178b1a0
0x00876099: movdqu XMMWORD PTR [rbp-0x50],xmm1
0x0087609e: mov    r8d,0x8
0x008760a4: lea    rdx,[rip+0xe3cf9d]        # 0x1416b3048 ; literal="Darkness"
0x008760ab: lea    rcx,[rbp-0x60]
0x008760af: call   0x1400682b0
0x008760b4: mov    BYTE PTR [rbp-0x58],0x0
0x008760b8: xor    r9d,r9d
0x008760bb: lea    rdx,[rbp-0x60]
0x008760bf: lea    rcx,[rip+0x1dd432a]        # 0x14264a3f0
0x008760c6: call   0x140ad9960
0x008760cb: nop
0x008760cc: lea    rcx,[rbp-0x60]
0x008760d0: call   0x14006f850
0x008760d5: movdqa xmm6,XMMWORD PTR [rip+0xf15093]        # 0x14178b170
0x008760dd: lea    eax,[r15+0x3]
0x008760e1: mov    DWORD PTR [rip+0x1dd438c],r14d        # 0x14264a474
0x008760e8: mov    DWORD PTR [rip+0x1dd438a],eax        # 0x14264a478
0x008760ee: xorps  xmm0,xmm0
0x008760f1: movups XMMWORD PTR [rbp-0x60],xmm0
0x008760f5: cmp    di,0x19
0x008760f9: jl     0x140876137
0x008760fb: mov    DWORD PTR [rip+0x1dd4377],0x1010006        # 0x14264a47c
0x00876105: movdqu XMMWORD PTR [rbp-0x50],xmm6
0x0087610a: mov    eax,DWORD PTR [rip+0xd9f0a8]        # 0x1416151b8 ; literal="Clear"
0x00876110: mov    DWORD PTR [rbp-0x60],eax
0x00876113: movzx  eax,BYTE PTR [rip+0xd9f0a2]        # 0x1416151bc ; literal="r"
0x0087611a: mov    BYTE PTR [rbp-0x5c],al
0x0087611d: mov    BYTE PTR [rbp-0x5b],0x0
0x00876121: xor    r9d,r9d
0x00876124: lea    rdx,[rbp-0x60]
0x00876128: lea    rcx,[rip+0x1dd42c1]        # 0x14264a3f0
0x0087612f: call   0x140ad9960
0x00876134: nop
0x00876135: jmp    0x140876186
0x00876137: mov    DWORD PTR [rip+0x1dd433b],0x1010002        # 0x14264a47c
0x00876141: movdqa xmm1,XMMWORD PTR [rip+0xf150a7]        # 0x14178b1f0
0x00876149: movdqu XMMWORD PTR [rbp-0x50],xmm1
0x0087614e: movsd  xmm0,QWORD PTR [rip+0xe3da92]        # 0x1416b3be8 ; literal="Fog/Rain/Snow"
0x00876156: movsd  QWORD PTR [rbp-0x60],xmm0
0x0087615b: mov    eax,DWORD PTR [rip+0xe3da8f]        # 0x1416b3bf0 ; literal="/Snow"
0x00876161: mov    DWORD PTR [rbp-0x58],eax
0x00876164: movzx  eax,BYTE PTR [rip+0xe3da89]        # 0x1416b3bf4 ; literal="w"
0x0087616b: mov    BYTE PTR [rbp-0x54],al
0x0087616e: mov    BYTE PTR [rbp-0x53],0x0
0x00876172: xor    r9d,r9d
0x00876175: lea    rdx,[rbp-0x60]
0x00876179: lea    rcx,[rip+0x1dd4270]        # 0x14264a3f0
0x00876180: call   0x140ad9960
0x00876185: nop
0x00876186: mov    rdx,QWORD PTR [rbp-0x48]
0x0087618a: cmp    rdx,0xf
0x0087618e: jbe    0x1408761c1
0x00876190: inc    rdx
0x00876193: mov    rcx,QWORD PTR [rbp-0x60]
0x00876197: cmp    rdx,0x1000
0x0087619e: mov    rax,rcx
0x008761a1: jb     0x1408761bc
0x008761a3: mov    rcx,QWORD PTR [rcx-0x8]
0x008761a7: sub    rax,rcx
0x008761aa: add    rdx,0x27
0x008761ae: add    rax,0xfffffffffffffff8
0x008761b2: cmp    rax,0x1f
0x008761b6: ja     0x140876e2c
0x008761bc: call   0x141539680
0x008761c1: cmp    r12w,di
0x008761c5: cmovg  r12w,di
0x008761ca: movsx  esi,r12w
0x008761ce: xor    dil,dil
0x008761d1: movzx  edx,WORD PTR [rbx+0xa8]
0x008761d8: mov    r12d,0x1
0x008761de: test   dx,dx
0x008761e1: jle    0x140876211
0x008761e3: dec    dx
0x008761e6: mov    DWORD PTR [rsp+0x20],r12d
0x008761eb: movzx  r9d,WORD PTR [rbx+0xac]
0x008761f3: movzx  r8d,WORD PTR [rbx+0xaa]
0x008761fb: lea    rcx,[rip+0x1b5b2ee]        # 0x1423d14f0
0x00876202: call   0x1414a1530
0x00876207: movzx  edi,dil
0x0087620b: test   al,al
0x0087620d: cmove  edi,r12d
0x00876211: movsx  edx,WORD PTR [rbx+0xa8]
0x00876218: mov    ecx,DWORD PTR [rip+0x1c71ebe]        # 0x1424e80dc
0x0087621e: dec    ecx
0x00876220: cmp    edx,ecx
0x00876222: jge    0x140876252
0x00876224: inc    dx
0x00876227: mov    DWORD PTR [rsp+0x20],r12d
0x0087622c: movzx  r9d,WORD PTR [rbx+0xac]
0x00876234: movzx  r8d,WORD PTR [rbx+0xaa]
0x0087623c: lea    rcx,[rip+0x1b5b2ad]        # 0x1423d14f0
0x00876243: call   0x1414a1530
0x00876248: movzx  edi,dil
0x0087624c: test   al,al
0x0087624e: cmove  edi,r12d
0x00876252: movzx  r8d,WORD PTR [rbx+0xaa]
0x0087625a: test   r8w,r8w
0x0087625e: jle    0x14087628e
0x00876260: dec    r8w
0x00876264: mov    DWORD PTR [rsp+0x20],r12d
0x00876269: movzx  r9d,WORD PTR [rbx+0xac]
0x00876271: movzx  edx,WORD PTR [rbx+0xa8]
0x00876278: lea    rcx,[rip+0x1b5b271]        # 0x1423d14f0
0x0087627f: call   0x1414a1530
0x00876284: movzx  edi,dil
0x00876288: test   al,al
0x0087628a: cmove  edi,r12d
0x0087628e: movsx  r8d,WORD PTR [rbx+0xaa]
0x00876296: mov    ecx,DWORD PTR [rip+0x1c71e44]        # 0x1424e80e0
0x0087629c: dec    ecx
0x0087629e: cmp    r8d,ecx
0x008762a1: jge    0x1408762d1
0x008762a3: inc    r8w
0x008762a7: mov    DWORD PTR [rsp+0x20],r12d
0x008762ac: movzx  r9d,WORD PTR [rbx+0xac]
0x008762b4: movzx  edx,WORD PTR [rbx+0xa8]
0x008762bb: lea    rcx,[rip+0x1b5b22e]        # 0x1423d14f0
0x008762c2: call   0x1414a1530
0x008762c7: test   al,al
0x008762c9: jne    0x1408762d1
0x008762cb: lea    ecx,[r15+0x4]
0x008762cf: jmp    0x1408762da
0x008762d1: lea    ecx,[r15+0x4]
0x008762d5: test   dil,dil
0x008762d8: je     0x140876356
0x008762da: mov    eax,esi
0x008762dc: cdq
0x008762dd: sub    eax,edx
0x008762df: sar    eax,1
0x008762e1: mov    esi,eax
0x008762e3: mov    DWORD PTR [rip+0x1dd418f],0x1010002        # 0x14264a47c
0x008762ed: mov    DWORD PTR [rip+0x1dd4180],r14d        # 0x14264a474
0x008762f4: mov    DWORD PTR [rip+0x1dd417e],ecx        # 0x14264a478
0x008762fa: xorps  xmm0,xmm0
0x008762fd: movups XMMWORD PTR [rbp-0x60],xmm0
0x00876301: movdqa xmm1,XMMWORD PTR [rip+0xf14ec7]        # 0x14178b1d0
0x00876309: movdqu XMMWORD PTR [rbp-0x50],xmm1
0x0087630e: movsd  xmm0,QWORD PTR [rip+0xe3d8c2]        # 0x1416b3bd8 ; literal="By Obstacle"
0x00876316: movsd  QWORD PTR [rbp-0x60],xmm0
0x0087631b: movzx  eax,WORD PTR [rip+0xe3d8be]        # 0x1416b3be0 ; literal="cle"
0x00876322: mov    WORD PTR [rbp-0x58],ax
0x00876326: movzx  eax,BYTE PTR [rip+0xe3d8b5]        # 0x1416b3be2 ; literal="e"
0x0087632d: mov    BYTE PTR [rbp-0x56],al
0x00876330: mov    BYTE PTR [rbp-0x55],0x0
0x00876334: xor    r9d,r9d
0x00876337: lea    rdx,[rbp-0x60]
0x0087633b: lea    rcx,[rip+0x1dd40ae]        # 0x14264a3f0
0x00876342: call   0x140ad9960
0x00876347: nop
0x00876348: lea    rcx,[rbp-0x60]
0x0087634c: call   0x14006f850
0x00876351: jmp    0x1408763eb
0x00876356: mov    DWORD PTR [rip+0x1dd411c],0x1010006        # 0x14264a47c
0x00876360: mov    DWORD PTR [rip+0x1dd410d],r14d        # 0x14264a474
0x00876367: mov    DWORD PTR [rip+0x1dd410b],ecx        # 0x14264a478
0x0087636d: xorps  xmm0,xmm0
0x00876370: movups XMMWORD PTR [rbp-0x60],xmm0
0x00876374: movdqa xmm1,XMMWORD PTR [rip+0xf14e34]        # 0x14178b1b0
0x0087637c: movdqu XMMWORD PTR [rbp-0x50],xmm1
0x00876381: movsd  xmm0,QWORD PTR [rip+0xe3d87f]        # 0x1416b3c08 ; literal="Open Area"
0x00876389: movsd  QWORD PTR [rbp-0x60],xmm0
0x0087638e: movzx  eax,BYTE PTR [rip+0xe3d87b]        # 0x1416b3c10 ; literal="a"
0x00876395: mov    BYTE PTR [rbp-0x58],al
0x00876398: mov    BYTE PTR [rbp-0x57],0x0
0x0087639c: xor    r9d,r9d
0x0087639f: lea    rdx,[rbp-0x60]
0x008763a3: lea    rcx,[rip+0x1dd4046]        # 0x14264a3f0
0x008763aa: call   0x140ad9960
0x008763af: nop
0x008763b0: mov    rdx,QWORD PTR [rbp-0x48]
0x008763b4: cmp    rdx,0xf
0x008763b8: jbe    0x1408763eb
0x008763ba: inc    rdx
0x008763bd: mov    rcx,QWORD PTR [rbp-0x60]
0x008763c1: mov    rax,rcx
0x008763c4: cmp    rdx,0x1000
0x008763cb: jb     0x1408763e6
0x008763cd: add    rdx,0x27
0x008763d1: mov    rcx,QWORD PTR [rcx-0x8]
0x008763d5: sub    rax,rcx
0x008763d8: add    rax,0xfffffffffffffff8
0x008763dc: cmp    rax,0x1f
0x008763e0: ja     0x140876e2c
0x008763e6: call   0x141539680
0x008763eb: mov    r8d,DWORD PTR [rbx+0x6b4]
0x008763f2: mov    eax,r8d
0x008763f5: cdq
0x008763f6: and    edx,0x3
0x008763f9: lea    edi,[rdx+rax*1]
0x008763fc: sar    edi,0x2
0x008763ff: test   DWORD PTR [rbx+0x110],0x8000
0x00876409: cmove  edi,r8d
0x0087640d: movsx  r12,WORD PTR [rbx+0xac]
0x00876415: movsx  r11d,WORD PTR [rbx+0xaa]
0x0087641d: movsx  r13d,WORD PTR [rbx+0xa8]
0x00876425: test   r13w,r13w
0x00876429: js     0x1408765cc
0x0087642f: mov    r8d,r13d
0x00876432: cmp    r13d,DWORD PTR [rip+0x1c71ca3]        # 0x1424e80dc
0x00876439: jge    0x1408765cc
0x0087643f: test   r11w,r11w
0x00876443: js     0x1408765cc
0x00876449: mov    r9d,r11d
0x0087644c: cmp    r11d,DWORD PTR [rip+0x1c71c8d]        # 0x1424e80e0
0x00876453: jge    0x1408765cc
0x00876459: test   r12w,r12w
0x0087645d: js     0x1408765cc
0x00876463: cmp    r12d,DWORD PTR [rip+0x1c71c7a]        # 0x1424e80e4
0x0087646a: jge    0x1408765cc
0x00876470: movzx  eax,r13w
0x00876474: sar    ax,0x4
0x00876478: movzx  ecx,r11w
0x0087647c: sar    cx,0x4
0x00876480: mov    r10,QWORD PTR [rip+0x1c71c21]        # 0x1424e80a8
0x00876487: test   r10,r10
0x0087648a: je     0x1408765cc
0x00876490: movsx  rax,ax
0x00876494: movsx  rdx,cx
0x00876498: mov    rax,QWORD PTR [r10+rax*8]
0x0087649c: mov    rax,QWORD PTR [rax+rdx*8]
0x008764a0: mov    rdx,QWORD PTR [rax+r12*8]
0x008764a4: test   rdx,rdx
0x008764a7: je     0x1408765cc
0x008764ad: and    r8d,0x8000000f
0x008764b4: jge    0x1408764c0
0x008764b6: dec    r8d
0x008764b9: or     r8d,0xfffffff0
0x008764bd: inc    r8d
0x008764c0: movsxd rcx,r8d
0x008764c3: add    rcx,0x5
0x008764c7: shl    rcx,0x4
0x008764cb: and    r9d,0x8000000f
0x008764d2: jge    0x1408764de
0x008764d4: dec    r9d
0x008764d7: or     r9d,0xfffffff0
0x008764db: inc    r9d
0x008764de: movsxd rax,r9d
0x008764e1: add    rcx,rax
0x008764e4: movzx  eax,WORD PTR [rdx+rcx*2]
0x008764e8: cmp    ax,0x22
0x008764ec: je     0x1408764fc
0x008764ee: mov    ecx,0x185
0x008764f3: cmp    ax,cx
0x008764f6: jne    0x1408765ce
0x008764fc: mov    DWORD PTR [rsp+0x70],0x190
0x00876504: mov    r13d,0xc8
0x0087650a: lea    r12d,[r15+0x5]
0x0087650e: mov    rcx,QWORD PTR [rsp+0x70]
0x00876513: mov    DWORD PTR [rip+0x1dd3f5a],r14d        # 0x14264a474
0x0087651a: mov    DWORD PTR [rip+0x1dd3f57],r12d        # 0x14264a478
0x00876521: cmp    edi,ecx
0x00876523: jge    0x1408766dd
0x00876529: mov    eax,esi
0x0087652b: cdq
0x0087652c: sub    eax,edx
0x0087652e: sar    eax,1
0x00876530: mov    esi,eax
0x00876532: mov    DWORD PTR [rip+0x1dd3f40],0x1010002        # 0x14264a47c
0x0087653c: xorps  xmm0,xmm0
0x0087653f: movups XMMWORD PTR [rbp-0x60],xmm0
0x00876543: movdqa xmm1,XMMWORD PTR [rip+0xf14ca5]        # 0x14178b1f0
0x0087654b: movdqu XMMWORD PTR [rbp-0x50],xmm1
0x00876550: movsd  xmm0,QWORD PTR [rip+0xe3d6a0]        # 0x1416b3bf8 ; literal="In Vegetation"
0x00876558: movsd  QWORD PTR [rbp-0x60],xmm0
0x0087655d: mov    eax,DWORD PTR [rip+0xe3d69d]        # 0x1416b3c00 ; literal="ation"
0x00876563: mov    DWORD PTR [rbp-0x58],eax
0x00876566: movzx  eax,BYTE PTR [rip+0xe3d697]        # 0x1416b3c04 ; literal="n"
0x0087656d: mov    BYTE PTR [rbp-0x54],al
0x00876570: mov    BYTE PTR [rbp-0x53],0x0
0x00876574: xor    r9d,r9d
0x00876577: lea    rdx,[rbp-0x60]
0x0087657b: lea    rcx,[rip+0x1dd3e6e]        # 0x14264a3f0
0x00876582: call   0x140ad9960
0x00876587: nop
0x00876588: mov    rdx,QWORD PTR [rbp-0x48]
0x0087658c: cmp    rdx,0xf
0x00876590: jbe    0x14087677e
0x00876596: inc    rdx
0x00876599: mov    rcx,QWORD PTR [rbp-0x60]
0x0087659d: mov    rax,rcx
0x008765a0: cmp    rdx,0x1000
0x008765a7: jb     0x1408765c2
0x008765a9: add    rdx,0x27
0x008765ad: mov    rcx,QWORD PTR [rcx-0x8]
0x008765b1: sub    rax,rcx
0x008765b4: add    rax,0xfffffffffffffff8
0x008765b8: cmp    rax,0x1f
0x008765bc: ja     0x140876e2c
0x008765c2: call   0x141539680
0x008765c7: jmp    0x14087677e
0x008765cc: xor    eax,eax
0x008765ce: movzx  eax,ax
0x008765d1: cmp    eax,0x158
0x008765d6: ja     0x140876605
0x008765d8: je     0x140876632
0x008765da: sub    eax,0x31
0x008765dd: cmp    eax,0xb7
0x008765e2: ja     0x140876504
0x008765e8: cdqe
0x008765ea: lea    rdx,[rip+0xffffffffff789a0f]        # 0x140000000
0x008765f1: movzx  eax,BYTE PTR [rdx+rax*1+0x87716c]
0x008765f9: mov    ecx,DWORD PTR [rdx+rax*4+0x877164]
0x00876600: add    rcx,rdx
0x00876603: jmp    rcx
0x00876605: sub    eax,0x159
0x0087660a: cmp    eax,0x34
0x0087660d: ja     0x140876504
0x00876613: cdqe
0x00876615: lea    rcx,[rip+0xffffffffff7899e4]        # 0x140000000
0x0087661c: movzx  eax,BYTE PTR [rcx+rax*1+0x87722c]
0x00876624: mov    r10d,DWORD PTR [rcx+rax*4+0x877224]
0x0087662c: add    r10,rcx
0x0087662f: jmp    r10
0x00876632: movzx  r9d,r12w
0x00876636: movzx  r8d,r11w
0x0087663a: movzx  edx,r13w
0x0087663e: lea    rcx,[rip+0x1b5aeab]        # 0x1423d14f0
0x00876645: call   0x1414d1330
0x0087664a: mov    r9,rax
0x0087664d: test   rax,rax
0x00876650: je     0x140876504
0x00876656: mov    edx,DWORD PTR [rax+0x8]
0x00876659: lea    rcx,[rip+0x1c76298]        # 0x1424ec8f8
0x00876660: call   0x14014d850
0x00876665: test   rax,rax
0x00876668: je     0x140876504
0x0087666e: movsx  edx,WORD PTR [rbx+0xa8]
0x00876675: and    edx,0x8000000f
0x0087667b: jge    0x140876684
0x0087667d: dec    edx
0x0087667f: or     edx,0xfffffff0
0x00876682: inc    edx
0x00876684: movsx  ecx,WORD PTR [rbx+0xaa]
0x0087668b: and    ecx,0x8000000f
0x00876691: jge    0x14087669a
0x00876693: dec    ecx
0x00876695: or     ecx,0xfffffff0
0x00876698: inc    ecx
0x0087669a: movsx  rax,dx
0x0087669e: shl    rax,0x4
0x008766a2: movsx  rcx,cx
0x008766a6: add    rax,r9
0x008766a9: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x008766ae: mov    r13d,0xc8
0x008766b4: cmp    dl,0x43
0x008766b7: jb     0x1408766c6
0x008766b9: mov    DWORD PTR [rsp+0x70],0x190
0x008766c1: jmp    0x14087650a
0x008766c6: cmp    dl,0x21
0x008766c9: mov    r12d,0x0
0x008766cf: cmova  r12d,r13d
0x008766d3: mov    QWORD PTR [rsp+0x70],r12
0x008766d8: jmp    0x14087650a
0x008766dd: mov    DWORD PTR [rip+0x1dd3d95],0x1010006        # 0x14264a47c
0x008766e7: test   DWORD PTR [rbx+0x110],0x8000
0x008766f1: jne    0x140876729
0x008766f3: mov    eax,edi
0x008766f5: cdq
0x008766f6: and    edx,0x3
0x008766f9: add    eax,edx
0x008766fb: sar    eax,0x2
0x008766fe: cmp    eax,ecx
0x00876700: jge    0x140876729
0x00876702: lea    rdx,[rip+0xe3d487]        # 0x1416b3b90 ; literal="Non-Prone In Vegetation"
0x00876709: lea    rcx,[rbp-0x60]
0x0087670d: call   0x140068150
0x00876712: nop
0x00876713: xor    r9d,r9d
0x00876716: lea    rdx,[rbp-0x60]
0x0087671a: lea    rcx,[rip+0x1dd3ccf]        # 0x14264a3f0
0x00876721: call   0x140ad9960
0x00876726: nop
0x00876727: jmp    0x140876775
0x00876729: test   ecx,ecx
0x0087672b: lea    rcx,[rbp-0x60]
0x0087672f: je     0x140876754
0x00876731: lea    rdx,[rip+0xe3d438]        # 0x1416b3b70 ; literal="Too Large For Vegetation"
0x00876738: call   0x140068150
0x0087673d: nop
0x0087673e: xor    r9d,r9d
0x00876741: lea    rdx,[rbp-0x60]
0x00876745: lea    rcx,[rip+0x1dd3ca4]        # 0x14264a3f0
0x0087674c: call   0x140ad9960
0x00876751: nop
0x00876752: jmp    0x140876775
0x00876754: lea    rdx,[rip+0xe3d465]        # 0x1416b3bc0 ; literal="No Suitable Vegetation"
0x0087675b: call   0x140068150
0x00876760: nop
0x00876761: xor    r9d,r9d
0x00876764: lea    rdx,[rbp-0x60]
0x00876768: lea    rcx,[rip+0x1dd3c81]        # 0x14264a3f0
0x0087676f: call   0x140ad9960
0x00876774: nop
0x00876775: lea    rcx,[rbp-0x60]
0x00876779: call   0x14006f850
0x0087677e: lea    r8d,[r15+0x6]
0x00876782: mov    DWORD PTR [rip+0x1dd3ceb],r14d        # 0x14264a474
0x00876789: mov    DWORD PTR [rip+0x1dd3ce8],r8d        # 0x14264a478
0x00876790: cmp    edi,0x1f4
0x00876796: jl     0x14087693d
0x0087679c: mov    eax,0x51eb851f
0x008767a1: imul   edi
0x008767a3: sar    edx,0x5
0x008767a6: mov    eax,edx
0x008767a8: shr    eax,0x1f
0x008767ab: add    edx,eax
0x008767ad: add    esi,edx
0x008767af: mov    DWORD PTR [rip+0x1dd3cc3],0x1010004        # 0x14264a47c
0x008767b9: test   DWORD PTR [rbx+0x110],0x8000
0x008767c3: jne    0x14087685b
0x008767c9: cmp    edi,0x7d0
0x008767cf: jge    0x14087685b
0x008767d5: lea    rcx,[rbp-0x60]
0x008767d9: cmp    edi,0x5dc
0x008767df: jl     0x140876807
0x008767e1: lea    rdx,[rip+0xe3d450]        # 0x1416b3c38 ; literal="Huge Non-Prone Profile"
0x008767e8: call   0x140068150
0x008767ed: nop
0x008767ee: xor    r9d,r9d
0x008767f1: lea    rdx,[rbp-0x60]
0x008767f5: lea    rcx,[rip+0x1dd3bf4]        # 0x14264a3f0
0x008767fc: call   0x140ad9960
0x00876801: nop
0x00876802: jmp    0x140876a9b
0x00876807: cmp    edi,0x3e8
0x0087680d: jl     0x140876835
0x0087680f: lea    rdx,[rip+0xe3d402]        # 0x1416b3c18 ; literal="Very Large Non-Prone Profile"
0x00876816: call   0x140068150
0x0087681b: nop
0x0087681c: xor    r9d,r9d
0x0087681f: lea    rdx,[rbp-0x60]
0x00876823: lea    rcx,[rip+0x1dd3bc6]        # 0x14264a3f0
0x0087682a: call   0x140ad9960
0x0087682f: nop
0x00876830: jmp    0x140876a9b
0x00876835: lea    rdx,[rip+0xe3d244]        # 0x1416b3a80 ; literal="Large Non-Prone Profile"
0x0087683c: call   0x140068150
0x00876841: nop
0x00876842: xor    r9d,r9d
0x00876845: lea    rdx,[rbp-0x60]
0x00876849: lea    rcx,[rip+0x1dd3ba0]        # 0x14264a3f0
0x00876850: call   0x140ad9960
0x00876855: nop
0x00876856: jmp    0x140876a9b
0x0087685b: lea    rcx,[rbp-0x60]
0x0087685f: cmp    edi,0x9c4
0x00876865: jl     0x14087688d
0x00876867: lea    rdx,[rip+0xe3d33a]        # 0x1416b3ba8 ; literal="Gargantuan Profile"
0x0087686e: call   0x140068150
0x00876873: nop
0x00876874: xor    r9d,r9d
0x00876877: lea    rdx,[rbp-0x60]
0x0087687b: lea    rcx,[rip+0x1dd3b6e]        # 0x14264a3f0
0x00876882: call   0x140ad9960
0x00876887: nop
0x00876888: jmp    0x140876a9b
0x0087688d: cmp    edi,0x7d0
0x00876893: jl     0x1408768bb
0x00876895: lea    rdx,[rip+0xe3d3c4]        # 0x1416b3c60 ; literal="Gigantic Profile"
0x0087689c: call   0x140068150
0x008768a1: nop
0x008768a2: xor    r9d,r9d
0x008768a5: lea    rdx,[rbp-0x60]
0x008768a9: lea    rcx,[rip+0x1dd3b40]        # 0x14264a3f0
0x008768b0: call   0x140ad9960
0x008768b5: nop
0x008768b6: jmp    0x140876a9b
0x008768bb: cmp    edi,0x5dc
0x008768c1: jl     0x1408768e9
0x008768c3: lea    rdx,[rip+0xe3d386]        # 0x1416b3c50 ; literal="Huge Profile"
0x008768ca: call   0x140068150
0x008768cf: nop
0x008768d0: xor    r9d,r9d
0x008768d3: lea    rdx,[rbp-0x60]
0x008768d7: lea    rcx,[rip+0x1dd3b12]        # 0x14264a3f0
0x008768de: call   0x140ad9960
0x008768e3: nop
0x008768e4: jmp    0x140876a9b
0x008768e9: cmp    edi,0x3e8
0x008768ef: jl     0x140876917
0x008768f1: lea    rdx,[rip+0xe3d390]        # 0x1416b3c88 ; literal="Very Large Profile"
0x008768f8: call   0x140068150
0x008768fd: nop
0x008768fe: xor    r9d,r9d
0x00876901: lea    rdx,[rbp-0x60]
0x00876905: lea    rcx,[rip+0x1dd3ae4]        # 0x14264a3f0
0x0087690c: call   0x140ad9960
0x00876911: nop
0x00876912: jmp    0x140876a9b
0x00876917: lea    rdx,[rip+0xe3d35a]        # 0x1416b3c78 ; literal="Large Profile"
0x0087691e: call   0x140068150
0x00876923: nop
0x00876924: xor    r9d,r9d
0x00876927: lea    rdx,[rbp-0x60]
0x0087692b: lea    rcx,[rip+0x1dd3abe]        # 0x14264a3f0
0x00876932: call   0x140ad9960
0x00876937: nop
0x00876938: jmp    0x140876a9b
0x0087693d: cmp    edi,r13d
0x00876940: jge    0x140876a3d
0x00876946: mov    ecx,edi
0x00876948: imul   ecx,esi
0x0087694b: mov    eax,0x51eb851f
0x00876950: imul   ecx
0x00876952: mov    esi,edx
0x00876954: sar    esi,0x6
0x00876957: mov    eax,esi
0x00876959: shr    eax,0x1f
0x0087695c: add    esi,eax
0x0087695e: mov    DWORD PTR [rip+0x1dd3b14],0x1010002        # 0x14264a47c
0x00876968: lea    rcx,[rbp-0x60]
0x0087696c: test   edi,edi
0x0087696e: jne    0x140876996
0x00876970: lea    rdx,[rip+0xe3d0f1]        # 0x1416b3a68 ; literal="Vanishing Profile"
0x00876977: call   0x140068150
0x0087697c: nop
0x0087697d: xor    r9d,r9d
0x00876980: lea    rdx,[rbp-0x60]
0x00876984: lea    rcx,[rip+0x1dd3a65]        # 0x14264a3f0
0x0087698b: call   0x140ad9960
0x00876990: nop
0x00876991: jmp    0x140876a9b
0x00876996: cmp    edi,0x32
0x00876999: jge    0x1408769c1
0x0087699b: lea    rdx,[rip+0xe3d106]        # 0x1416b3aa8 ; literal="Minuscule Profile"
0x008769a2: call   0x140068150
0x008769a7: nop
0x008769a8: xor    r9d,r9d
0x008769ab: lea    rdx,[rbp-0x60]
0x008769af: lea    rcx,[rip+0x1dd3a3a]        # 0x14264a3f0
0x008769b6: call   0x140ad9960
0x008769bb: nop
0x008769bc: jmp    0x140876a9b
0x008769c1: cmp    edi,0x64
0x008769c4: jge    0x1408769ec
0x008769c6: lea    rdx,[rip+0xe3d0cb]        # 0x1416b3a98 ; literal="Tiny Profile"
0x008769cd: call   0x140068150
0x008769d2: nop
0x008769d3: xor    r9d,r9d
0x008769d6: lea    rdx,[rbp-0x60]
0x008769da: lea    rcx,[rip+0x1dd3a0f]        # 0x14264a3f0
0x008769e1: call   0x140ad9960
0x008769e6: nop
0x008769e7: jmp    0x140876a9b
0x008769ec: cmp    edi,0x96
0x008769f2: jge    0x140876a1a
0x008769f4: lea    rdx,[rip+0xe3d025]        # 0x1416b3a20 ; literal="Very Small Profile"
0x008769fb: call   0x140068150
0x00876a00: nop
0x00876a01: xor    r9d,r9d
0x00876a04: lea    rdx,[rbp-0x60]
0x00876a08: lea    rcx,[rip+0x1dd39e1]        # 0x14264a3f0
0x00876a0f: call   0x140ad9960
0x00876a14: nop
0x00876a15: jmp    0x140876a9b
0x00876a1a: lea    rdx,[rip+0xe3cfef]        # 0x1416b3a10 ; literal="Small Profile"
0x00876a21: call   0x140068150
0x00876a26: nop
0x00876a27: xor    r9d,r9d
0x00876a2a: lea    rdx,[rbp-0x60]
0x00876a2e: lea    rcx,[rip+0x1dd39bb]        # 0x14264a3f0
0x00876a35: call   0x140ad9960
0x00876a3a: nop
0x00876a3b: jmp    0x140876a9b
0x00876a3d: mov    DWORD PTR [rip+0x1dd3a35],0x1010006        # 0x14264a47c
0x00876a47: lea    rcx,[rbp-0x60]
0x00876a4b: test   DWORD PTR [rbx+0x110],0x8000
0x00876a55: jne    0x140876a7a
0x00876a57: lea    rdx,[rip+0xe3cfda]        # 0x1416b3a38 ; literal="Average Non-Prone Profile"
0x00876a5e: call   0x140068150
0x00876a63: nop
0x00876a64: xor    r9d,r9d
0x00876a67: lea    rdx,[rbp-0x60]
0x00876a6b: lea    rcx,[rip+0x1dd397e]        # 0x14264a3f0
0x00876a72: call   0x140ad9960
0x00876a77: nop
0x00876a78: jmp    0x140876a9b
0x00876a7a: lea    rdx,[rip+0xe3cfd7]        # 0x1416b3a58 ; literal="Average Profile"
0x00876a81: call   0x140068150
0x00876a86: nop
0x00876a87: xor    r9d,r9d
0x00876a8a: lea    rdx,[rbp-0x60]
0x00876a8e: lea    rcx,[rip+0x1dd395b]        # 0x14264a3f0
0x00876a95: call   0x140ad9960
0x00876a9a: nop
0x00876a9b: lea    rcx,[rbp-0x60]
0x00876a9f: call   0x14006f850
0x00876aa4: mov    DWORD PTR [rip+0x1dd39ce],0x1010007        # 0x14264a47c
0x00876aae: mov    ebx,DWORD PTR [rsp+0x5c]
0x00876ab2: mov    DWORD PTR [rip+0x1dd39bc],ebx        # 0x14264a474
0x00876ab8: mov    DWORD PTR [rip+0x1dd39b9],r15d        # 0x14264a478
0x00876abf: xorps  xmm0,xmm0
0x00876ac2: movups XMMWORD PTR [rbp-0x60],xmm0
0x00876ac6: mov    ecx,0x20
0x00876acb: call   0x1400707d0
0x00876ad0: mov    QWORD PTR [rbp-0x60],rax
0x00876ad4: movdqa xmm0,XMMWORD PTR [rip+0xf147e4]        # 0x14178b2c0
0x00876adc: movdqu XMMWORD PTR [rbp-0x50],xmm0
0x00876ae1: movups xmm0,XMMWORD PTR [rip+0xe3d058]        # 0x1416b3b40 ; literal="Visual Stealth (w/o Skill)"
0x00876ae8: movups XMMWORD PTR [rax],xmm0
0x00876aeb: movsd  xmm0,QWORD PTR [rip+0xe3d05d]        # 0x1416b3b50 ; literal="w/o Skill)"
0x00876af3: movsd  QWORD PTR [rax+0x10],xmm0
0x00876af8: movzx  ecx,WORD PTR [rip+0xe3d059]        # 0x1416b3b58 ; literal="l)"
0x00876aff: mov    WORD PTR [rax+0x18],cx
0x00876b03: mov    BYTE PTR [rax+0x1a],0x0
0x00876b07: xor    r9d,r9d
0x00876b0a: lea    rdx,[rbp-0x60]
0x00876b0e: lea    rcx,[rip+0x1dd38db]        # 0x14264a3f0
0x00876b15: call   0x140ad9960
0x00876b1a: nop
0x00876b1b: lea    rcx,[rbp-0x60]
0x00876b1f: call   0x14006f850
0x00876b24: mov    DWORD PTR [rip+0x1dd394a],ebx        # 0x14264a474
0x00876b2a: lea    eax,[r15+0x2]
0x00876b2e: mov    DWORD PTR [rip+0x1dd3944],eax        # 0x14264a478
0x00876b34: test   esi,esi
0x00876b36: jg     0x140876bd6
0x00876b3c: mov    DWORD PTR [rip+0x1dd3936],0x1010003        # 0x14264a47c
0x00876b46: xorps  xmm0,xmm0
0x00876b49: movups XMMWORD PTR [rbp-0x60],xmm0
0x00876b4d: movdqa xmm1,XMMWORD PTR [rip+0xf1469b]        # 0x14178b1f0
0x00876b55: movdqu XMMWORD PTR [rbp-0x50],xmm1
0x00876b5a: movsd  xmm0,QWORD PTR [rip+0xe3cfce]        # 0x1416b3b30 ; literal="Best Possible"
0x00876b62: movsd  QWORD PTR [rbp-0x60],xmm0
0x00876b67: mov    eax,DWORD PTR [rip+0xe3cfcb]        # 0x1416b3b38 ; literal="sible"
0x00876b6d: mov    DWORD PTR [rbp-0x58],eax
0x00876b70: movzx  eax,BYTE PTR [rip+0xe3cfc5]        # 0x1416b3b3c ; literal="e"
0x00876b77: mov    BYTE PTR [rbp-0x54],al
0x00876b7a: mov    BYTE PTR [rbp-0x53],0x0
0x00876b7e: xor    r9d,r9d
0x00876b81: lea    rdx,[rbp-0x60]
0x00876b85: lea    rcx,[rip+0x1dd3864]        # 0x14264a3f0
0x00876b8c: call   0x140ad9960
0x00876b91: nop
0x00876b92: mov    rdx,QWORD PTR [rbp-0x48]
0x00876b96: cmp    rdx,0xf
0x00876b9a: jbe    0x140876d7b
0x00876ba0: inc    rdx
0x00876ba3: mov    rcx,QWORD PTR [rbp-0x60]
0x00876ba7: mov    rax,rcx
0x00876baa: cmp    rdx,0x1000
0x00876bb1: jb     0x140876bcc
0x00876bb3: add    rdx,0x27
0x00876bb7: mov    rcx,QWORD PTR [rcx-0x8]
0x00876bbb: sub    rax,rcx
0x00876bbe: add    rax,0xfffffffffffffff8
0x00876bc2: cmp    rax,0x1f
0x00876bc6: ja     0x140876e2c
0x00876bcc: call   0x141539680
0x00876bd1: jmp    0x140876d7b
0x00876bd6: lea    rcx,[rbp-0x60]
0x00876bda: cmp    esi,0x2
0x00876bdd: jg     0x140876c0f
0x00876bdf: mov    DWORD PTR [rip+0x1dd3893],0x1010002        # 0x14264a47c
0x00876be9: lea    rdx,[rip+0xdcff28]        # 0x141646b18 ; literal="Fantastic"
0x00876bf0: call   0x140068150
0x00876bf5: nop
0x00876bf6: xor    r9d,r9d
0x00876bf9: lea    rdx,[rbp-0x60]
0x00876bfd: lea    rcx,[rip+0x1dd37ec]        # 0x14264a3f0
0x00876c04: call   0x140ad9960
0x00876c09: nop
0x00876c0a: jmp    0x140876d72
0x00876c0f: cmp    esi,0x4
0x00876c12: jg     0x140876c44
0x00876c14: mov    DWORD PTR [rip+0x1dd385e],0x1010001        # 0x14264a47c
0x00876c1e: lea    rdx,[rip+0xdcff47]        # 0x141646b6c ; literal="Great"
0x00876c25: call   0x140068150
0x00876c2a: nop
0x00876c2b: xor    r9d,r9d
0x00876c2e: lea    rdx,[rbp-0x60]
0x00876c32: lea    rcx,[rip+0x1dd37b7]        # 0x14264a3f0
0x00876c39: call   0x140ad9960
0x00876c3e: nop
0x00876c3f: jmp    0x140876d72
0x00876c44: cmp    esi,0x6
0x00876c47: jg     0x140876c79
0x00876c49: mov    DWORD PTR [rip+0x1dd3829],0x1010007        # 0x14264a47c
0x00876c53: lea    rdx,[rip+0xdcfeaa]        # 0x141646b04 ; literal="Good"
0x00876c5a: call   0x140068150
0x00876c5f: nop
0x00876c60: xor    r9d,r9d
0x00876c63: lea    rdx,[rbp-0x60]
0x00876c67: lea    rcx,[rip+0x1dd3782]        # 0x14264a3f0
0x00876c6e: call   0x140ad9960
0x00876c73: nop
0x00876c74: jmp    0x140876d72
0x00876c79: cmp    esi,0xa
0x00876c7c: jg     0x140876cae
0x00876c7e: mov    DWORD PTR [rip+0x1dd37f4],0x1000007        # 0x14264a47c
0x00876c88: lea    rdx,[rip+0xdea111]        # 0x141660da0 ; literal="Average"
0x00876c8f: call   0x140068150
0x00876c94: nop
0x00876c95: xor    r9d,r9d
0x00876c98: lea    rdx,[rbp-0x60]
0x00876c9c: lea    rcx,[rip+0x1dd374d]        # 0x14264a3f0
0x00876ca3: call   0x140ad9960
0x00876ca8: nop
0x00876ca9: jmp    0x140876d72
0x00876cae: cmp    esi,0xf
0x00876cb1: jg     0x140876ce3
0x00876cb3: mov    DWORD PTR [rip+0x1dd37bf],0x1000006        # 0x14264a47c
0x00876cbd: lea    rdx,[rip+0xe3cea0]        # 0x1416b3b64 ; literal="Poor"
0x00876cc4: call   0x140068150
0x00876cc9: nop
0x00876cca: xor    r9d,r9d
0x00876ccd: lea    rdx,[rbp-0x60]
0x00876cd1: lea    rcx,[rip+0x1dd3718]        # 0x14264a3f0
0x00876cd8: call   0x140ad9960
0x00876cdd: nop
0x00876cde: jmp    0x140876d72
0x00876ce3: cmp    esi,0x14
0x00876ce6: jg     0x140876d15
0x00876ce8: mov    DWORD PTR [rip+0x1dd378a],0x1010006        # 0x14264a47c
0x00876cf2: lea    rdx,[rip+0xe3ce63]        # 0x1416b3b5c ; literal="Awful"
0x00876cf9: call   0x140068150
0x00876cfe: nop
0x00876cff: xor    r9d,r9d
0x00876d02: lea    rdx,[rbp-0x60]
0x00876d06: lea    rcx,[rip+0x1dd36e3]        # 0x14264a3f0
0x00876d0d: call   0x140ad9960
0x00876d12: nop
0x00876d13: jmp    0x140876d72
0x00876d15: cmp    esi,0x19
0x00876d18: jg     0x140876d47
0x00876d1a: mov    DWORD PTR [rip+0x1dd3758],0x1010004        # 0x14264a47c
0x00876d24: lea    rdx,[rip+0xe3cda5]        # 0x1416b3ad0 ; literal="Terrible"
0x00876d2b: call   0x140068150
0x00876d30: nop
0x00876d31: xor    r9d,r9d
0x00876d34: lea    rdx,[rbp-0x60]
0x00876d38: lea    rcx,[rip+0x1dd36b1]        # 0x14264a3f0
0x00876d3f: call   0x140ad9960
0x00876d44: nop
0x00876d45: jmp    0x140876d72
0x00876d47: mov    DWORD PTR [rip+0x1dd372b],0x1010005        # 0x14264a47c
0x00876d51: lea    rdx,[rip+0xe3cd68]        # 0x1416b3ac0 ; literal="Worst Possible"
0x00876d58: call   0x140068150
0x00876d5d: nop
0x00876d5e: xor    r9d,r9d
0x00876d61: lea    rdx,[rbp-0x60]
0x00876d65: lea    rcx,[rip+0x1dd3684]        # 0x14264a3f0
0x00876d6c: call   0x140ad9960
0x00876d71: nop
0x00876d72: lea    rcx,[rbp-0x60]
0x00876d76: call   0x14006f850
0x00876d7b: mov    DWORD PTR [rip+0x1dd36f7],0x1000007        # 0x14264a47c
0x00876d85: mov    DWORD PTR [rip+0x1dd36e9],ebx        # 0x14264a474
0x00876d8b: mov    DWORD PTR [rip+0x1dd36e6],r12d        # 0x14264a478
0x00876d92: xorps  xmm0,xmm0
0x00876d95: movups XMMWORD PTR [rbp-0x60],xmm0
0x00876d99: mov    ecx,0x40
0x00876d9e: call   0x1400707d0
0x00876da3: mov    rcx,rax
0x00876da6: mov    QWORD PTR [rbp-0x60],rax
0x00876daa: movdqa xmm0,XMMWORD PTR [rip+0xf1468e]        # 0x14178b440 ; literal="2"
0x00876db2: movdqu XMMWORD PTR [rbp-0x50],xmm0
0x00876db7: movups xmm0,XMMWORD PTR [rip+0xe3cd3a]        # 0x1416b3af8 ; literal="Quick movement and other actions decrease stealth."
0x00876dbe: movups XMMWORD PTR [rax],xmm0
0x00876dc1: movups xmm1,XMMWORD PTR [rip+0xe3cd40]        # 0x1416b3b08 ; literal="nd other actions decrease stealth."
0x00876dc8: movups XMMWORD PTR [rax+0x10],xmm1
0x00876dcc: movups xmm0,XMMWORD PTR [rip+0xe3cd45]        # 0x1416b3b18 ; literal=" decrease stealth."
0x00876dd3: movups XMMWORD PTR [rax+0x20],xmm0
0x00876dd7: movzx  eax,WORD PTR [rip+0xe3cd4a]        # 0x1416b3b28 ; literal="h."
0x00876dde: mov    WORD PTR [rcx+0x30],ax
0x00876de2: mov    BYTE PTR [rcx+0x32],0x0
0x00876de6: xor    r9d,r9d
0x00876de9: lea    rdx,[rbp-0x60]
0x00876ded: lea    rcx,[rip+0x1dd35fc]        # 0x14264a3f0
0x00876df4: call   0x140ad9960
0x00876df9: nop
0x00876dfa: mov    rdx,QWORD PTR [rbp-0x48]
0x00876dfe: cmp    rdx,0xf
0x00876e02: jbe    0x140876e38
0x00876e04: inc    rdx
0x00876e07: mov    rcx,QWORD PTR [rbp-0x60]
0x00876e0b: mov    rax,rcx
0x00876e0e: cmp    rdx,0x1000
0x00876e15: jb     0x140876e33
0x00876e17: add    rdx,0x27
0x00876e1b: mov    rcx,QWORD PTR [rcx-0x8]
0x00876e1f: sub    rax,rcx
0x00876e22: add    rax,0xfffffffffffffff8
0x00876e26: cmp    rax,0x1f
0x00876e2a: jbe    0x140876e33
0x00876e2c: call   QWORD PTR [rip+0xd6ecf6]        # 0x1415e5b28
0x00876e32: int3
0x00876e33: call   0x141539680
0x00876e38: mov    DWORD PTR [rip+0x1dd363a],0x1010007        # 0x14264a47c
0x00876e42: mov    r12d,DWORD PTR [rsp+0x5c]
0x00876e47: mov    DWORD PTR [rip+0x1dd3626],r12d        # 0x14264a474
0x00876e4e: mov    r13d,DWORD PTR [rsp+0x4c]
0x00876e53: add    r13d,0xfffffffa
0x00876e57: mov    DWORD PTR [rip+0x1dd361a],r13d        # 0x14264a478
0x00876e5e: mov    edx,0x19f
0x00876e63: call   0x140c394b0
0x00876e68: xorps  xmm0,xmm0
0x00876e6b: movups XMMWORD PTR [rbp-0x60],xmm0
0x00876e6f: mov    ecx,0x20
0x00876e74: call   0x1400707d0
0x00876e79: mov    QWORD PTR [rbp-0x60],rax
0x00876e7d: movdqa xmm0,XMMWORD PTR [rip+0xf143db]        # 0x14178b260
0x00876e85: movdqu XMMWORD PTR [rbp-0x50],xmm0
0x00876e8a: movups xmm0,XMMWORD PTR [rip+0xe3cc4f]        # 0x1416b3ae0 ; literal=" Swimming Preference"
0x00876e91: movups XMMWORD PTR [rax],xmm0
0x00876e94: mov    ecx,DWORD PTR [rip+0xe3cc56]        # 0x1416b3af0 ; literal="ence"
0x00876e9a: mov    DWORD PTR [rax+0x10],ecx
0x00876e9d: mov    BYTE PTR [rax+0x14],0x0
0x00876ea1: xor    r9d,r9d
0x00876ea4: lea    rdx,[rbp-0x60]
0x00876ea8: lea    rcx,[rip+0x1dd3541]        # 0x14264a3f0
0x00876eaf: call   0x140ad9960
0x00876eb4: nop
0x00876eb5: lea    rcx,[rbp-0x60]
0x00876eb9: call   0x14006f850
0x00876ebe: mov    eax,DWORD PTR [rsp+0x50]
0x00876ec2: lea    esi,[rax+0x14]
0x00876ec5: lea    r15d,[rax+0x16]
0x00876ec9: lea    r14d,[rax+0x28]
0x00876ecd: mov    ebx,r12d
0x00876ed0: cmp    r12d,esi
0x00876ed3: jg     0x140876f5d
0x00876ed9: nop    DWORD PTR [rax+0x0]
0x00876ee0: lea    edi,[r13+0x2]
0x00876ee4: lea    r11,[rip+0x1dd4fa9]        # 0x14264be94
0x00876eeb: nop    DWORD PTR [rax+rax*1+0x0]
0x00876ef0: mov    DWORD PTR [rip+0x1dd357e],ebx        # 0x14264a474
0x00876ef6: mov    DWORD PTR [rip+0x1dd357c],edi        # 0x14264a478
0x00876efc: cmp    WORD PTR [rip+0x1addc68],0x0        # 0x142354b6c
0x00876f04: jne    0x140876f20
0x00876f06: cmp    ebx,r12d
0x00876f09: jne    0x140876f11
0x00876f0b: mov    edx,DWORD PTR [r11-0x18]
0x00876f0f: jmp    0x140876f39
0x00876f11: cmp    ebx,esi
0x00876f13: jne    0x140876f1a
0x00876f15: mov    edx,DWORD PTR [r11]
0x00876f18: jmp    0x140876f39
0x00876f1a: mov    edx,DWORD PTR [r11-0xc]
0x00876f1e: jmp    0x140876f39
0x00876f20: cmp    ebx,r12d
0x00876f23: jne    0x140876f2b
0x00876f25: mov    edx,DWORD PTR [r11-0x60]
0x00876f29: jmp    0x140876f39
0x00876f2b: cmp    ebx,esi
0x00876f2d: jne    0x140876f35
0x00876f2f: mov    edx,DWORD PTR [r11-0x48]
0x00876f33: jmp    0x140876f39
0x00876f35: mov    edx,DWORD PTR [r11-0x54]
0x00876f39: lea    rcx,[rip+0x1dd34b0]        # 0x14264a3f0
0x00876f40: call   0x140adaad0
0x00876f45: inc    edi
0x00876f47: add    r11,0x4
0x00876f4b: lea    rax,[rip+0x1dd4f4e]        # 0x14264bea0
0x00876f52: cmp    r11,rax
0x00876f55: jl     0x140876ef0
0x00876f57: inc    ebx
0x00876f59: cmp    ebx,esi
0x00876f5b: jle    0x140876ee0
0x00876f5d: mov    DWORD PTR [rip+0x1dd3515],0x1010007        # 0x14264a47c
0x00876f67: lea    eax,[r12+0x2]
0x00876f6c: mov    DWORD PTR [rip+0x1dd3502],eax        # 0x14264a474
0x00876f72: lea    esi,[r13+0x3]
0x00876f76: mov    DWORD PTR [rip+0x1dd34fc],esi        # 0x14264a478
0x00876f7c: xorps  xmm0,xmm0
0x00876f7f: movups XMMWORD PTR [rbp-0x60],xmm0
0x00876f83: movdqa xmm1,XMMWORD PTR [rip+0xf14265]        # 0x14178b1f0
0x00876f8b: movdqu XMMWORD PTR [rbp-0x50],xmm1
0x00876f90: movsd  xmm0,QWORD PTR [rip+0xe3c998]        # 0x1416b3930 ; literal="When possible"
0x00876f98: movsd  QWORD PTR [rbp-0x60],xmm0
0x00876f9d: mov    eax,DWORD PTR [rip+0xe3c995]        # 0x1416b3938 ; literal="sible"
0x00876fa3: mov    DWORD PTR [rbp-0x58],eax
0x00876fa6: movzx  eax,BYTE PTR [rip+0xe3c98f]        # 0x1416b393c ; literal="e"
0x00876fad: mov    BYTE PTR [rbp-0x54],al
0x00876fb0: mov    BYTE PTR [rbp-0x53],0x0
0x00876fb4: xor    r9d,r9d
0x00876fb7: lea    rdx,[rbp-0x60]
0x00876fbb: lea    rcx,[rip+0x1dd342e]        # 0x14264a3f0
0x00876fc2: call   0x140ad9960
0x00876fc7: nop
0x00876fc8: lea    rcx,[rbp-0x60]
0x00876fcc: call   0x14006f850
0x00876fd1: mov    ebx,r15d
0x00876fd4: cmp    r15d,r14d
0x00876fd7: jg     0x140877059
0x00876fdd: lea    r12,[rip+0x1dd4ebc]        # 0x14264bea0
0x00876fe4: lea    edi,[r13+0x2]
0x00876fe8: lea    r11,[rip+0x1dd4ea5]        # 0x14264be94
0x00876fef: nop
0x00876ff0: mov    DWORD PTR [rip+0x1dd347e],ebx        # 0x14264a474
0x00876ff6: mov    DWORD PTR [rip+0x1dd347c],edi        # 0x14264a478
0x00876ffc: cmp    WORD PTR [rip+0x1addb68],0x1        # 0x142354b6c
0x00877004: jne    0x140877021
0x00877006: cmp    ebx,r15d
0x00877009: jne    0x140877011
0x0087700b: mov    edx,DWORD PTR [r11-0x18]
0x0087700f: jmp    0x14087703b
0x00877011: cmp    ebx,r14d
0x00877014: jne    0x14087701b
0x00877016: mov    edx,DWORD PTR [r11]
0x00877019: jmp    0x14087703b
0x0087701b: mov    edx,DWORD PTR [r11-0xc]
0x0087701f: jmp    0x14087703b
0x00877021: cmp    ebx,r15d
0x00877024: jne    0x14087702c
0x00877026: mov    edx,DWORD PTR [r11-0x60]
0x0087702a: jmp    0x14087703b
0x0087702c: cmp    ebx,r14d
0x0087702f: jne    0x140877037
0x00877031: mov    edx,DWORD PTR [r11-0x48]
0x00877035: jmp    0x14087703b
0x00877037: mov    edx,DWORD PTR [r11-0x54]
0x0087703b: lea    rcx,[rip+0x1dd33ae]        # 0x14264a3f0
0x00877042: call   0x140adaad0
0x00877047: inc    edi
0x00877049: add    r11,0x4
0x0087704d: cmp    r11,r12
0x00877050: jl     0x140876ff0
0x00877052: inc    ebx
0x00877054: cmp    ebx,r14d
0x00877057: jle    0x140876fe4
0x00877059: mov    DWORD PTR [rip+0x1dd3419],0x1010007        # 0x14264a47c
0x00877063: lea    eax,[r15+0x2]
0x00877067: mov    DWORD PTR [rip+0x1dd3407],eax        # 0x14264a474
0x0087706d: mov    DWORD PTR [rip+0x1dd3405],esi        # 0x14264a478
0x00877073: xorps  xmm0,xmm0
0x00877076: movups XMMWORD PTR [rbp-0x60],xmm0
0x0087707a: movdqa xmm1,XMMWORD PTR [rip+0xf1417e]        # 0x14178b200
0x00877082: movdqu XMMWORD PTR [rbp-0x50],xmm1
0x00877087: movsd  xmm0,QWORD PTR [rip+0xe3c891]        # 0x1416b3920 ; literal="When necessary"
0x0087708f: movsd  QWORD PTR [rbp-0x60],xmm0
0x00877094: mov    eax,DWORD PTR [rip+0xe3c88e]        # 0x1416b3928 ; literal="essary"
0x0087709a: mov    DWORD PTR [rbp-0x58],eax
0x0087709d: movzx  eax,WORD PTR [rip+0xe3c888]        # 0x1416b392c ; literal="ry"
0x008770a4: mov    WORD PTR [rbp-0x54],ax
0x008770a8: mov    BYTE PTR [rbp-0x52],0x0
0x008770ac: xor    r9d,r9d
0x008770af: lea    rdx,[rbp-0x60]
0x008770b3: lea    rcx,[rip+0x1dd3336]        # 0x14264a3f0
0x008770ba: call   0x140ad9960
0x008770bf: nop
0x008770c0: lea    rcx,[rbp-0x60]
0x008770c4: call   0x14006f850
0x008770c9: nop
0x008770ca: lea    rcx,[rbp+0x80]
0x008770d1: call   0x14006f850
0x008770d6: nop
0x008770d7: lea    rcx,[rbp+0x60]
0x008770db: call   0x14006f850
0x008770e0: mov    rcx,QWORD PTR [rbp+0xa0]
0x008770e7: xor    rcx,rsp
0x008770ea: call   0x141539660
0x008770ef: mov    rbx,QWORD PTR [rsp+0x208]
0x008770f7: movaps xmm6,XMMWORD PTR [rsp+0x1b0]
0x008770ff: add    rsp,0x1c0
0x00877106: pop    r15
0x00877108: pop    r14
0x0087710a: pop    r13
0x0087710c: pop    r12
0x0087710e: pop    rdi
0x0087710f: pop    rsi
0x00877110: pop    rbp
0x00877111: ret
0x00877112: xchg   ax,ax
0x00877114: (bad)
0x00877115: push   rbx
0x00877116: xchg   DWORD PTR [rax],eax
0x00877118: sbb    dl,BYTE PTR [rbx-0x79]
0x0087711b: add    BYTE PTR [rbx+0x53],al
0x0087711e: xchg   DWORD PTR [rax],eax
0x00877120: (bad)
0x00877121: push   rbx
0x00877122: xchg   DWORD PTR [rax],eax
0x00877124: es push rbx
0x00877126: xchg   DWORD PTR [rax],eax
0x00877128: cs push rbx
0x0087712a: xchg   DWORD PTR [rax],eax
0x0087712c: rex.XB push r11
0x0087712e: xchg   DWORD PTR [rax],eax
0x00877130: and    dl,BYTE PTR [rbx-0x79]
0x00877133: add    BYTE PTR [rdx],ch
0x00877135: push   rbx
0x00877136: xchg   DWORD PTR [rax],eax
0x00877138: xor    dl,BYTE PTR [rbx-0x79]
0x0087713b: add    cl,ah
0x0087713d: pop    rdx
0x0087713e: xchg   DWORD PTR [rax],eax
0x00877140: in     eax,0x5a
0x00877142: xchg   DWORD PTR [rax],eax
0x00877144: (bad)
0x00877145: pop    rbx
0x00877146: xchg   DWORD PTR [rax],eax
0x00877148: jmp    0x13187f8a7
0x0087714d: pop    rdx
0x0087714e: xchg   DWORD PTR [rax],eax
0x00877150: stc
0x00877151: pop    rdx
0x00877152: xchg   DWORD PTR [rax],eax
0x00877154: (bad)
0x00877155: pop    rbx
0x00877156: xchg   DWORD PTR [rax],eax
0x00877158: in     eax,dx
0x00877159: pop    rdx
0x0087715a: xchg   DWORD PTR [rax],eax
0x0087715c: cmc
0x0087715d: pop    rdx
0x0087715e: xchg   DWORD PTR [rax],eax
0x00877160: std
0x00877161: pop    rdx
0x00877162: xchg   DWORD PTR [rax],eax
0x00877164: xor    ah,BYTE PTR [rsi-0x79]
0x00877167: add    BYTE PTR [riz*2+0x87],al
0x0087716e: add    BYTE PTR [rax],al
0x00877170: add    BYTE PTR [rax],al
0x00877172: add    DWORD PTR [rcx],eax
0x00877174: add    DWORD PTR [rcx],eax
0x00877176: add    DWORD PTR [rcx],eax
0x00877178: add    DWORD PTR [rcx],eax
0x0087717a: add    DWORD PTR [rcx],eax
0x0087717c: add    DWORD PTR [rcx],eax
0x0087717e: add    DWORD PTR [rcx],eax
0x00877180: add    DWORD PTR [rcx],eax
0x00877182: add    DWORD PTR [rcx],eax
0x00877184: add    DWORD PTR [rcx],eax
0x00877186: add    DWORD PTR [rcx],eax
0x00877188: add    DWORD PTR [rcx],eax
0x0087718a: add    DWORD PTR [rcx],eax
0x0087718c: add    DWORD PTR [rcx],eax
0x0087718e: add    DWORD PTR [rcx],eax
0x00877190: add    DWORD PTR [rcx],eax
0x00877192: add    DWORD PTR [rcx],eax
0x00877194: add    DWORD PTR [rcx],eax
0x00877196: add    DWORD PTR [rcx],eax
0x00877198: add    DWORD PTR [rcx],eax
0x0087719a: add    DWORD PTR [rcx],eax
0x0087719c: add    DWORD PTR [rcx],eax
0x0087719e: add    DWORD PTR [rcx],eax
0x008771a0: add    DWORD PTR [rcx],eax
0x008771a2: add    DWORD PTR [rcx],eax
0x008771a4: add    DWORD PTR [rcx],eax
0x008771a6: add    DWORD PTR [rcx],eax
0x008771a8: add    DWORD PTR [rcx],eax
0x008771aa: add    DWORD PTR [rcx],eax
0x008771ac: add    DWORD PTR [rcx],eax
0x008771ae: add    DWORD PTR [rcx],eax
0x008771b0: add    DWORD PTR [rcx],eax
0x008771b2: add    DWORD PTR [rcx],eax
0x008771b4: add    DWORD PTR [rcx],eax
0x008771b6: add    DWORD PTR [rcx],eax
0x008771b8: add    DWORD PTR [rcx],eax
0x008771ba: add    DWORD PTR [rcx],eax
0x008771bc: add    DWORD PTR [rcx],eax
0x008771be: add    DWORD PTR [rcx],eax
0x008771c0: add    DWORD PTR [rcx],eax
0x008771c2: add    DWORD PTR [rcx],eax
0x008771c4: add    DWORD PTR [rcx],eax
0x008771c6: add    DWORD PTR [rcx],eax
0x008771c8: add    DWORD PTR [rcx],eax
0x008771ca: add    DWORD PTR [rcx],eax
0x008771cc: add    DWORD PTR [rcx],eax
0x008771ce: add    DWORD PTR [rcx],eax
0x008771d0: add    DWORD PTR [rcx],eax
0x008771d2: add    DWORD PTR [rcx],eax
0x008771d4: add    DWORD PTR [rcx],eax
0x008771d6: add    DWORD PTR [rcx],eax
0x008771d8: add    DWORD PTR [rcx],eax
0x008771da: add    DWORD PTR [rcx],eax
0x008771dc: add    DWORD PTR [rcx],eax
0x008771de: add    DWORD PTR [rcx],eax
0x008771e0: add    DWORD PTR [rcx],eax
0x008771e2: add    DWORD PTR [rcx],eax
0x008771e4: add    DWORD PTR [rcx],eax
0x008771e6: add    DWORD PTR [rcx],eax
0x008771e8: add    DWORD PTR [rcx],eax
0x008771ea: add    DWORD PTR [rcx],eax
0x008771ec: add    DWORD PTR [rcx],eax
0x008771ee: add    DWORD PTR [rcx],eax
0x008771f0: add    DWORD PTR [rcx],eax
0x008771f2: add    DWORD PTR [rcx],eax
0x008771f4: add    DWORD PTR [rcx],eax
0x008771f6: add    DWORD PTR [rcx],eax
0x008771f8: add    DWORD PTR [rcx],eax
0x008771fa: add    DWORD PTR [rcx],eax
0x008771fc: add    DWORD PTR [rcx],eax
0x008771fe: add    DWORD PTR [rcx],eax
0x00877200: add    DWORD PTR [rcx],eax
0x00877202: add    DWORD PTR [rcx],eax
0x00877204: add    DWORD PTR [rcx],eax
0x00877206: add    DWORD PTR [rcx],eax
0x00877208: add    DWORD PTR [rcx],eax
0x0087720a: add    DWORD PTR [rcx],eax
0x0087720c: add    DWORD PTR [rcx],eax
0x0087720e: add    DWORD PTR [rcx],eax
0x00877210: add    DWORD PTR [rcx],eax
0x00877212: add    DWORD PTR [rcx],eax
0x00877214: add    DWORD PTR [rcx],eax
0x00877216: add    DWORD PTR [rcx],eax
0x00877218: add    DWORD PTR [rcx],eax
0x0087721a: add    DWORD PTR [rcx],eax
0x0087721c: add    DWORD PTR [rcx],eax
0x0087721e: add    DWORD PTR [rcx],eax
0x00877220: add    BYTE PTR [rax],al
0x00877222: add    BYTE PTR [rax],al
0x00877224: xor    ah,BYTE PTR [rsi-0x79]
0x00877227: add    BYTE PTR [riz*2+0x87],al
0x0087722e: add    BYTE PTR [rcx],al
0x00877230: add    DWORD PTR [rcx],eax
0x00877232: add    DWORD PTR [rcx],eax
0x00877234: add    DWORD PTR [rcx],eax
0x00877236: add    DWORD PTR [rcx],eax
0x00877238: add    DWORD PTR [rcx],eax
0x0087723a: add    DWORD PTR [rcx],eax
0x0087723c: add    DWORD PTR [rcx],eax
0x0087723e: add    DWORD PTR [rcx],eax
0x00877240: add    DWORD PTR [rcx],eax
0x00877242: add    DWORD PTR [rcx],eax
0x00877244: add    DWORD PTR [rcx],eax
0x00877246: add    DWORD PTR [rcx],eax
0x00877248: add    DWORD PTR [rcx],eax
0x0087724a: add    DWORD PTR [rcx],eax
0x0087724c: add    DWORD PTR [rcx],eax
0x0087724e: add    DWORD PTR [rcx],eax
0x00877250: add    DWORD PTR [rcx],eax
0x00877252: add    BYTE PTR [rax],al
0x00877254: add    BYTE PTR [rax],al
0x00877256: add    DWORD PTR [rcx],eax
0x00877258: add    DWORD PTR [rax],eax
0x0087725a: add    BYTE PTR [rax],al
0x0087725c: add    BYTE PTR [rax],al
0x0087725e: add    BYTE PTR [rax],al
