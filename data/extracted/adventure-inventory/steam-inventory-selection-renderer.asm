# steam PE:6a70a6d9:02711000; inventory-selection-renderer; RVA 0x8819f0..0x883f14
0x008819f0: rex push rbp
0x008819f2: push   rbx
0x008819f3: push   rsi
0x008819f4: push   rdi
0x008819f5: push   r12
0x008819f7: push   r13
0x008819f9: push   r14
0x008819fb: push   r15
0x008819fd: lea    rbp,[rsp-0x8]
0x00881a02: sub    rsp,0x108
0x00881a09: mov    rax,QWORD PTR [rip+0x101a630]        # 0x14189c040
0x00881a10: xor    rax,rsp
0x00881a13: mov    QWORD PTR [rbp-0x10],rax
0x00881a17: mov    DWORD PTR [rbp-0x7c],edx
0x00881a1a: mov    r10,rcx
0x00881a1d: mov    QWORD PTR [rsp+0x48],rcx
0x00881a22: mov    r11d,0xffffffff
0x00881a28: mov    DWORD PTR [rsp+0x50],r11d
0x00881a2d: mov    DWORD PTR [rsp+0x44],r11d
0x00881a32: cmp    BYTE PTR [rip+0x1b0eb9c],0x0        # 0x1423905d5
0x00881a39: je     0x140881a4f
0x00881a3b: mov    eax,DWORD PTR [rip+0x1dc8b6f]        # 0x14264a5b0
0x00881a41: mov    DWORD PTR [rsp+0x50],eax
0x00881a45: mov    eax,DWORD PTR [rip+0x1dc8b69]        # 0x14264a5b4
0x00881a4b: mov    DWORD PTR [rsp+0x44],eax
0x00881a4f: lea    eax,[r9+r8*1]
0x00881a53: cdq
0x00881a54: sub    eax,edx
0x00881a56: sar    eax,1
0x00881a58: lea    r15d,[rax-0x2d]
0x00881a5c: mov    DWORD PTR [rsp+0x5c],r15d
0x00881a61: lea    r12d,[rax+0x2d]
0x00881a65: mov    DWORD PTR [rsp+0x58],r12d
0x00881a6a: mov    r13d,0x6
0x00881a70: mov    DWORD PTR [rsp+0x54],r13d
0x00881a75: mov    esi,DWORD PTR [rip+0x1b4bd0d]        # 0x1423cd788
0x00881a7b: add    esi,0xfffffffb
0x00881a7e: mov    DWORD PTR [rsp+0x74],esi
0x00881a82: mov    ecx,0x27
0x00881a87: mov    rax,QWORD PTR [r10+0x20]
0x00881a8b: sub    rax,QWORD PTR [r10+0x18]
0x00881a8f: sar    rax,0x3
0x00881a93: add    eax,0x2
0x00881a96: lea    eax,[rax+rax*2]
0x00881a99: cmp    eax,ecx
0x00881a9b: cmovl  ecx,eax
0x00881a9e: lea    eax,[rsi-0x5]
0x00881aa1: cmp    eax,ecx
0x00881aa3: jle    0x140881ab3
0x00881aa5: mov    r13d,esi
0x00881aa8: sub    r13d,ecx
0x00881aab: inc    r13d
0x00881aae: mov    DWORD PTR [rsp+0x54],r13d
0x00881ab3: mov    edi,r13d
0x00881ab6: cmp    r13d,esi
0x00881ab9: jg     0x140881b87
0x00881abf: nop
0x00881ac0: mov    ebx,r15d
0x00881ac3: cmp    r15d,r12d
0x00881ac6: jg     0x140881b7d
0x00881acc: nop    DWORD PTR [rax+0x0]
0x00881ad0: mov    DWORD PTR [rip+0x1dc899e],ebx        # 0x14264a474
0x00881ad6: mov    DWORD PTR [rip+0x1dc899c],edi        # 0x14264a478
0x00881adc: xor    r8d,r8d
0x00881adf: xor    edx,edx
0x00881ae1: lea    rcx,[rip+0x1dc8908]        # 0x14264a3f0
0x00881ae8: call   0x1400bb190
0x00881aed: cmp    edi,r13d
0x00881af0: jne    0x140881b1b
0x00881af2: cmp    ebx,r15d
0x00881af5: jne    0x140881aff
0x00881af7: mov    edx,DWORD PTR [rip+0x1dca217]        # 0x14264bd14
0x00881afd: jmp    0x140881b66
0x00881aff: lea    rcx,[rip+0x1dc88ea]        # 0x14264a3f0
0x00881b06: cmp    ebx,r12d
0x00881b09: jne    0x140881b13
0x00881b0b: mov    edx,DWORD PTR [rip+0x1dca21b]        # 0x14264bd2c
0x00881b11: jmp    0x140881b6d
0x00881b13: mov    edx,DWORD PTR [rip+0x1dca207]        # 0x14264bd20
0x00881b19: jmp    0x140881b6d
0x00881b1b: cmp    edi,esi
0x00881b1d: jne    0x140881b48
0x00881b1f: cmp    ebx,r15d
0x00881b22: jne    0x140881b2c
0x00881b24: mov    edx,DWORD PTR [rip+0x1dca1f2]        # 0x14264bd1c
0x00881b2a: jmp    0x140881b66
0x00881b2c: lea    rcx,[rip+0x1dc88bd]        # 0x14264a3f0
0x00881b33: cmp    ebx,r12d
0x00881b36: jne    0x140881b40
0x00881b38: mov    edx,DWORD PTR [rip+0x1dca1f6]        # 0x14264bd34
0x00881b3e: jmp    0x140881b6d
0x00881b40: mov    edx,DWORD PTR [rip+0x1dca1e2]        # 0x14264bd28
0x00881b46: jmp    0x140881b6d
0x00881b48: cmp    ebx,r15d
0x00881b4b: jne    0x140881b55
0x00881b4d: mov    edx,DWORD PTR [rip+0x1dca1c5]        # 0x14264bd18
0x00881b53: jmp    0x140881b66
0x00881b55: cmp    ebx,r12d
0x00881b58: mov    edx,DWORD PTR [rip+0x1dca1d2]        # 0x14264bd30
0x00881b5e: je     0x140881b66
0x00881b60: mov    edx,DWORD PTR [rip+0x1dca1be]        # 0x14264bd24
0x00881b66: lea    rcx,[rip+0x1dc8883]        # 0x14264a3f0
0x00881b6d: call   0x140adaad0
0x00881b72: inc    ebx
0x00881b74: cmp    ebx,r12d
0x00881b77: jle    0x140881ad0
0x00881b7d: inc    edi
0x00881b7f: cmp    edi,esi
0x00881b81: jle    0x140881ac0
0x00881b87: xor    edi,edi
0x00881b89: nop    DWORD PTR [rax+0x0]
0x00881b90: lea    esi,[r12-0x8]
0x00881b95: add    esi,edi
0x00881b97: lea    r11,[rip+0x1dd306e]        # 0x142654c0c
0x00881b9e: lea    ebx,[r13+0x1]
0x00881ba2: nop    DWORD PTR [rax+0x0]
0x00881ba6: data16 nop WORD PTR [rax+rax*1+0x0]
0x00881bb0: mov    DWORD PTR [rip+0x1dc88be],esi        # 0x14264a474
0x00881bb6: mov    DWORD PTR [rip+0x1dc88bc],ebx        # 0x14264a478
0x00881bbc: test   edi,edi
0x00881bbe: jne    0x140881bc6
0x00881bc0: mov    edx,DWORD PTR [r11-0x18]
0x00881bc4: jmp    0x140881bd4
0x00881bc6: cmp    edi,0x7
0x00881bc9: jne    0x140881bd0
0x00881bcb: mov    edx,DWORD PTR [r11]
0x00881bce: jmp    0x140881bd4
0x00881bd0: mov    edx,DWORD PTR [r11-0xc]
0x00881bd4: lea    rcx,[rip+0x1dc8815]        # 0x14264a3f0
0x00881bdb: call   0x140adaad0
0x00881be0: inc    ebx
0x00881be2: add    r11,0x4
0x00881be6: lea    rax,[rip+0x1dd302b]        # 0x142654c18
0x00881bed: cmp    r11,rax
0x00881bf0: jl     0x140881bb0
0x00881bf2: inc    edi
0x00881bf4: cmp    edi,0x8
0x00881bf7: jl     0x140881b90
0x00881bf9: mov    DWORD PTR [rip+0x1dc8879],0x1010007        # 0x14264a47c
0x00881c03: lea    eax,[r12-0x6]
0x00881c08: mov    DWORD PTR [rip+0x1dc8866],eax        # 0x14264a474
0x00881c0e: lea    edi,[r13+0x2]
0x00881c12: mov    DWORD PTR [rsp+0x40],edi
0x00881c16: mov    DWORD PTR [rip+0x1dc885c],edi        # 0x14264a478
0x00881c1c: xorps  xmm0,xmm0
0x00881c1f: movups XMMWORD PTR [rbp-0x58],xmm0
0x00881c23: movdqa xmm1,XMMWORD PTR [rip+0xf09535]        # 0x14178b160
0x00881c2b: movdqu XMMWORD PTR [rbp-0x48],xmm1
0x00881c30: mov    DWORD PTR [rbp-0x58],0x656e6f44 ; inline="Done"
0x00881c37: mov    BYTE PTR [rbp-0x54],0x0
0x00881c3b: xor    r9d,r9d
0x00881c3e: lea    rdx,[rbp-0x58]
0x00881c42: lea    rcx,[rip+0x1dc87a7]        # 0x14264a3f0
0x00881c49: call   0x140ad9960
0x00881c4e: nop
0x00881c4f: mov    rdx,QWORD PTR [rbp-0x40]
0x00881c53: cmp    rdx,0xf
0x00881c57: jbe    0x140881c8a
0x00881c59: inc    rdx
0x00881c5c: mov    rcx,QWORD PTR [rbp-0x58]
0x00881c60: mov    rax,rcx
0x00881c63: cmp    rdx,0x1000
0x00881c6a: jb     0x140881c85
0x00881c6c: add    rdx,0x27
0x00881c70: mov    rcx,QWORD PTR [rcx-0x8]
0x00881c74: sub    rax,rcx
0x00881c77: add    rax,0xfffffffffffffff8
0x00881c7b: cmp    rax,0x1f
0x00881c7f: ja     0x1408826e4
0x00881c85: call   0x141539680
0x00881c8a: mov    DWORD PTR [rip+0x1dc87e8],0x1010007        # 0x14264a47c
0x00881c94: lea    eax,[r15+0x2]
0x00881c98: mov    DWORD PTR [rip+0x1dc87d6],eax        # 0x14264a474
0x00881c9e: mov    DWORD PTR [rip+0x1dc87d4],edi        # 0x14264a478
0x00881ca4: mov    r14,QWORD PTR [rsp+0x48]
0x00881ca9: movsxd rax,DWORD PTR [r14+0x4]
0x00881cad: cmp    eax,0xa
0x00881cb0: ja     0x14088235f
0x00881cb6: lea    rdx,[rip+0xffffffffff77e343]        # 0x140000000
0x00881cbd: mov    ecx,DWORD PTR [rdx+rax*4+0x883f14]
0x00881cc4: add    rcx,rdx
0x00881cc7: jmp    rcx
0x00881cc9: xorps  xmm0,xmm0
0x00881ccc: movups XMMWORD PTR [rbp-0x58],xmm0
0x00881cd0: movdqa xmm1,XMMWORD PTR [rip+0xf09528]        # 0x14178b200
0x00881cd8: movdqu XMMWORD PTR [rbp-0x48],xmm1
0x00881cdd: movsd  xmm0,QWORD PTR [rip+0xe327eb]        # 0x1416b44d0 ; literal="Your inventory"
0x00881ce5: movsd  QWORD PTR [rbp-0x58],xmm0
0x00881cea: mov    eax,DWORD PTR [rip+0xe327e8]        # 0x1416b44d8 ; literal="entory"
0x00881cf0: mov    DWORD PTR [rbp-0x50],eax
0x00881cf3: movzx  eax,WORD PTR [rip+0xe327e2]        # 0x1416b44dc ; literal="ry"
0x00881cfa: mov    WORD PTR [rbp-0x4c],ax
0x00881cfe: mov    BYTE PTR [rbp-0x4a],0x0
0x00881d02: xor    r9d,r9d
0x00881d05: lea    rdx,[rbp-0x58]
0x00881d09: lea    rcx,[rip+0x1dc86e0]        # 0x14264a3f0
0x00881d10: call   0x140ad9960
0x00881d15: nop
0x00881d16: lea    rcx,[rbp-0x58]
0x00881d1a: call   0x14006f850
0x00881d1f: mov    r13,QWORD PTR [rip+0x1b633ea]        # 0x1423e5110
0x00881d26: test   DWORD PTR [r13+0x110],0x200
0x00881d31: je     0x140881d99
0x00881d33: mov    r10d,DWORD PTR [r13+0x3dc]
0x00881d3a: mov    r8,QWORD PTR [rip+0x1b63377]        # 0x1423e50b8
0x00881d41: mov    rbx,QWORD PTR [rip+0x1b63368]        # 0x1423e50b0
0x00881d48: sub    r8,rbx
0x00881d4b: sar    r8,0x3
0x00881d4f: test   r8d,r8d
0x00881d52: je     0x140881d99
0x00881d54: cmp    r10d,0xffffffff
0x00881d58: je     0x140881d99
0x00881d5a: xor    edx,edx
0x00881d5c: sub    r8d,0x1
0x00881d60: js     0x140881d8c
0x00881d62: lea    ecx,[rdx+r8*1]
0x00881d66: sar    ecx,1
0x00881d68: movsxd rax,ecx
0x00881d6b: mov    r11,QWORD PTR [rbx+rax*8]
0x00881d6f: cmp    DWORD PTR [r11+0x130],r10d
0x00881d76: je     0x140881d8f
0x00881d78: lea    eax,[rcx+0x1]
0x00881d7b: cmovle edx,eax
0x00881d7e: lea    eax,[rcx-0x1]
0x00881d81: cmovle eax,r8d
0x00881d85: mov    r8d,eax
0x00881d88: cmp    edx,eax
0x00881d8a: jle    0x140881d62
0x00881d8c: xor    r11d,r11d
0x00881d8f: test   r11,r11
0x00881d92: je     0x140881d99
0x00881d94: mov    r13,r11
0x00881d97: jmp    0x140881da2
0x00881d99: test   r13,r13
0x00881d9c: je     0x14088235f
0x00881da2: mov    rcx,r13
0x00881da5: call   0x141385b10
0x00881daa: mov    eax,0xffff8ad0
0x00881daf: cmp    WORD PTR [r13+0x4cc],ax
0x00881db7: jne    0x140881e0a
0x00881db9: cmp    DWORD PTR [r13+0x4d4],0xffffffff
0x00881dc1: jne    0x140881e0a
0x00881dc3: test   BYTE PTR [r13+0x114],0x1
0x00881dcb: jne    0x140881e03
0x00881dcd: test   DWORD PTR [r13+0x118],0x40000
0x00881dd8: jne    0x140881e03
0x00881dda: test   DWORD PTR [r13+0x110],0x8000
0x00881de5: je     0x140881dee
0x00881de7: mov    ebx,0x3
0x00881dec: jmp    0x140881e0f
0x00881dee: xor    ebx,ebx
0x00881df0: mov    rcx,r13
0x00881df3: call   0x1407e0610
0x00881df8: test   al,al
0x00881dfa: je     0x140881e0f
0x00881dfc: mov    ebx,0x1
0x00881e01: jmp    0x140881e0f
0x00881e03: mov    ebx,0x2
0x00881e08: jmp    0x140881e0f
0x00881e0a: mov    ebx,0x4
0x00881e0f: movsxd rdx,DWORD PTR [r13+rbx*4+0xde8]
0x00881e17: xor    r8d,r8d
0x00881e1a: test   edx,edx
0x00881e1c: js     0x140881e4c
0x00881e1e: lea    rcx,[rbx+rbx*2]
0x00881e22: mov    rax,QWORD PTR [r13+0x5f8]
0x00881e29: mov    r9,QWORD PTR [rax+rcx*8+0xe8]
0x00881e31: mov    r10,rdx
0x00881e34: mov    rdx,QWORD PTR [rax+rcx*8+0xf0]
0x00881e3c: sub    rdx,r9
0x00881e3f: sar    rdx,0x3
0x00881e43: cmp    r10,rdx
0x00881e46: jae    0x140881e4c
0x00881e48: mov    r8,QWORD PTR [r9+r10*8]
0x00881e4c: mov    ecx,DWORD PTR [r13+0x604]
0x00881e53: sub    ecx,DWORD PTR [r13+0x614]
0x00881e5a: mov    r9,QWORD PTR [r13+0x8e8]
0x00881e61: test   r9,r9
0x00881e64: je     0x140881e81
0x00881e66: imul   ecx,DWORD PTR [r9]
0x00881e6a: mov    eax,0x51eb851f
0x00881e6f: imul   ecx
0x00881e71: mov    ecx,edx
0x00881e73: sar    ecx,0x5
0x00881e76: mov    eax,ecx
0x00881e78: shr    eax,0x1f
0x00881e7b: add    ecx,eax
0x00881e7d: add    ecx,DWORD PTR [r9+0x18]
0x00881e81: xor    r15d,r15d
0x00881e84: test   ecx,ecx
0x00881e86: cmovns r15d,ecx
0x00881e8a: mov    DWORD PTR [rsp+0x60],r15d
0x00881e8f: test   r8,r8
0x00881e92: je     0x140881e9e
0x00881e94: test   DWORD PTR [r8+0x18],0x6
0x00881e9c: je     0x140881ed8
0x00881e9e: cmp    QWORD PTR [r13+0x490],0x0
0x00881ea6: jne    0x140881ed8
0x00881ea8: mov    rcx,r13
0x00881eab: call   0x1413b3030
0x00881eb0: test   rax,rax
0x00881eb3: je     0x140881ed8
0x00881eb5: cmp    DWORD PTR [rax+0x90],0x0
0x00881ebc: jne    0x140881ed8
0x00881ebe: mov    eax,DWORD PTR [r13+0x604]
0x00881ec5: sub    eax,DWORD PTR [r13+0x614]
0x00881ecc: cmp    eax,r15d
0x00881ecf: cmovl  r15d,eax
0x00881ed3: mov    DWORD PTR [rsp+0x60],r15d
0x00881ed8: xor    r14d,r14d
0x00881edb: xor    esi,esi
0x00881edd: mov    edx,0x2d
0x00881ee2: mov    rcx,r13
0x00881ee5: call   0x14133e7a0
0x00881eea: mov    DWORD PTR [rsp+0x70],eax
0x00881eee: mov    rbx,QWORD PTR [r13+0x408]
0x00881ef5: mov    rdi,QWORD PTR [r13+0x410]
0x00881efc: nop    DWORD PTR [rax+0x0]
0x00881f00: cmp    rbx,rdi
0x00881f03: jae    0x140881fff
0x00881f09: mov    rax,QWORD PTR [rbx]
0x00881f0c: mov    QWORD PTR [rsp+0x78],rax
0x00881f11: mov    r12,QWORD PTR [rax]
0x00881f14: test   DWORD PTR [r12+0x10],0x20000000
0x00881f1d: jne    0x140881f2c
0x00881f1f: mov    rcx,r12
0x00881f22: call   0x140c65f10
0x00881f27: mov    rax,QWORD PTR [rsp+0x78]
0x00881f2c: mov    r15d,DWORD PTR [r12+0x74]
0x00881f31: mov    r12d,DWORD PTR [r12+0x78]
0x00881f36: movzx  ecx,WORD PTR [rax+0x8]
0x00881f3a: cmp    cx,0x2
0x00881f3e: je     0x140881f46
0x00881f40: cmp    cx,0x5
0x00881f44: jne    0x140881f87
0x00881f46: mov    rcx,QWORD PTR [rax]
0x00881f49: mov    rax,QWORD PTR [rcx]
0x00881f4c: call   QWORD PTR [rax+0x6c8]
0x00881f52: test   al,al
0x00881f54: je     0x140881f87
0x00881f56: mov    r8d,DWORD PTR [rsp+0x70]
0x00881f5b: cmp    r8d,0xf
0x00881f5f: jl     0x140881f69
0x00881f61: xor    r15d,r15d
0x00881f64: xor    r12d,r12d
0x00881f67: jmp    0x140881f87
0x00881f69: cmp    r8d,0x1
0x00881f6d: jle    0x140881f87
0x00881f6f: mov    ecx,0xf
0x00881f74: sub    ecx,r8d
0x00881f77: imul   r15d,ecx
0x00881f7b: sar    r15d,0x4
0x00881f7f: imul   r12d,ecx
0x00881f83: sar    r12d,0x4
0x00881f87: add    r14d,r15d
0x00881f8a: add    esi,r12d
0x00881f8d: cmp    esi,0xf4240
0x00881f93: jle    0x140881fba
0x00881f95: mov    eax,0x431bde83
0x00881f9a: imul   esi
0x00881f9c: sar    edx,0x12
0x00881f9f: mov    eax,edx
0x00881fa1: shr    eax,0x1f
0x00881fa4: add    edx,eax
0x00881fa6: add    r14d,edx
0x00881fa9: imul   eax,edx,0xf4240
0x00881faf: sub    esi,eax
0x00881fb1: add    rbx,0x8
0x00881fb5: jmp    0x140881f00
0x00881fba: test   esi,esi
0x00881fbc: jns    0x140881ff6
0x00881fbe: mov    eax,0x431bde83
0x00881fc3: imul   esi
0x00881fc5: sar    edx,0x12
0x00881fc8: mov    eax,edx
0x00881fca: shr    eax,0x1f
0x00881fcd: add    edx,eax
0x00881fcf: add    r14d,edx
0x00881fd2: mov    eax,0x431bde83
0x00881fd7: imul   esi
0x00881fd9: sar    edx,0x12
0x00881fdc: mov    eax,edx
0x00881fde: shr    eax,0x1f
0x00881fe1: add    edx,eax
0x00881fe3: imul   eax,edx,0xf4240
0x00881fe9: sub    esi,eax
0x00881feb: jns    0x140881ff6
0x00881fed: dec    r14d
0x00881ff0: add    esi,0xf4240
0x00881ff6: add    rbx,0x8
0x00881ffa: jmp    0x140881f00
0x00881fff: mov    ecx,DWORD PTR [r13+0x6ac]
0x00882006: mov    eax,0x10624dd3
0x0088200b: cmp    ecx,0x493e0
0x00882011: jl     0x140882028
0x00882013: imul   ecx
0x00882015: mov    ebx,edx
0x00882017: sar    ebx,0x6
0x0088201a: mov    eax,ebx
0x0088201c: shr    eax,0x1f
0x0088201f: add    ebx,eax
0x00882021: imul   ebx,DWORD PTR [rsp+0x60]
0x00882026: jmp    0x14088203b
0x00882028: imul   ecx,DWORD PTR [rsp+0x60]
0x0088202d: imul   ecx
0x0088202f: mov    ebx,edx
0x00882031: sar    ebx,0x6
0x00882034: mov    eax,ebx
0x00882036: shr    eax,0x1f
0x00882039: add    ebx,eax
0x0088203b: test   ebx,ebx
0x0088203d: mov    edi,0x1
0x00882042: cmovle ebx,edi
0x00882045: mov    eax,0x68db8bad
0x0088204a: imul   esi
0x0088204c: mov    r12d,edx
0x0088204f: sar    r12d,0xc
0x00882053: mov    eax,r12d
0x00882056: shr    eax,0x1f
0x00882059: add    r12d,eax
0x0088205c: imul   eax,r14d,0x64
0x00882060: add    r12d,eax
0x00882063: mov    eax,DWORD PTR [rsp+0x5c]
0x00882067: add    eax,0x19
0x0088206a: mov    DWORD PTR [rip+0x1dc8404],eax        # 0x14264a474
0x00882070: mov    eax,DWORD PTR [rsp+0x40]
0x00882074: mov    DWORD PTR [rip+0x1dc83fe],eax        # 0x14264a478
0x0088207a: xorps  xmm0,xmm0
0x0088207d: movups XMMWORD PTR [rbp-0x30],xmm0
0x00882081: movdqa xmm1,XMMWORD PTR [rip+0xf09117]        # 0x14178b1a0
0x00882089: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x0088208e: movabs rax,0x203a6e6564727542 ; inline="Burden: "
0x00882098: mov    QWORD PTR [rbp-0x30],rax
0x0088209c: mov    BYTE PTR [rbp-0x28],0x0
0x008820a0: movups XMMWORD PTR [rbp-0x78],xmm0
0x008820a4: mov    QWORD PTR [rbp-0x68],0x0
0x008820ac: mov    QWORD PTR [rbp-0x60],0xf
0x008820b4: mov    BYTE PTR [rbp-0x78],0x0
0x008820b8: test   r14d,r14d
0x008820bb: jg     0x1408820d5
0x008820bd: mov    r8d,0x2
0x008820c3: lea    rdx,[rip+0xe23cd2]        # 0x1416a5d9c ; literal="<1"
0x008820ca: lea    rcx,[rbp-0x78]
0x008820ce: call   0x14006fa10
0x008820d3: jmp    0x1408820e1
0x008820d5: lea    rdx,[rbp-0x78]
0x008820d9: mov    ecx,r14d
0x008820dc: call   0x14052c130
0x008820e1: mov    dl,0xe2
0x008820e3: lea    rcx,[rbp-0x78]
0x008820e7: call   0x1400b9b80
0x008820ec: lea    rdx,[rbp-0x78]
0x008820f0: cmp    QWORD PTR [rbp-0x60],0xf
0x008820f5: cmova  rdx,QWORD PTR [rbp-0x78]
0x008820fa: mov    r8,QWORD PTR [rbp-0x68]
0x008820fe: lea    rcx,[rbp-0x30]
0x00882102: call   0x14006fa10
0x00882107: mov    r8,rdi
0x0088210a: lea    rdx,[rip+0xd69403]        # 0x1415eb514 ; literal="/"
0x00882111: lea    rcx,[rbp-0x30]
0x00882115: call   0x14006fa10
0x0088211a: mov    eax,0x51eb851f
0x0088211f: mul    ebx
0x00882121: mov    ecx,edx
0x00882123: shr    ecx,0x5
0x00882126: mov    QWORD PTR [rbp-0x68],0x0
0x0088212e: lea    rax,[rbp-0x78]
0x00882132: cmp    QWORD PTR [rbp-0x60],0xf
0x00882137: cmova  rax,QWORD PTR [rbp-0x78]
0x0088213c: mov    BYTE PTR [rax],0x0
0x0088213f: test   ecx,ecx
0x00882141: jg     0x14088215b
0x00882143: mov    r8d,0x2
0x00882149: lea    rdx,[rip+0xe23c4c]        # 0x1416a5d9c ; literal="<1"
0x00882150: lea    rcx,[rbp-0x78]
0x00882154: call   0x14006fa10
0x00882159: jmp    0x140882164
0x0088215b: lea    rdx,[rbp-0x78]
0x0088215f: call   0x14052c130
0x00882164: mov    r14,QWORD PTR [rbp-0x68]
0x00882168: mov    r15,QWORD PTR [rbp-0x60]
0x0088216c: cmp    r14,r15
0x0088216f: jae    0x140882196
0x00882171: lea    rax,[r14+0x1]
0x00882175: mov    QWORD PTR [rbp-0x68],rax
0x00882179: lea    rax,[rbp-0x78]
0x0088217d: cmp    r15,0xf
0x00882181: cmova  rax,QWORD PTR [rbp-0x78]
0x00882186: mov    WORD PTR [rax+r14*1],0xe2
0x0088218d: mov    rsi,QWORD PTR [rbp-0x78]
0x00882191: jmp    0x14088225c
0x00882196: movabs rdi,0x7fffffffffffffff
0x008821a0: mov    rax,rdi
0x008821a3: sub    rax,r14
0x008821a6: cmp    rax,0x1
0x008821aa: jb     0x140883f0c
0x008821b0: lea    r13,[r14+0x1]
0x008821b4: mov    rcx,r13
0x008821b7: or     rcx,0xf
0x008821bb: cmp    rcx,rdi
0x008821be: ja     0x1408821df
0x008821c0: mov    rdx,r15
0x008821c3: shr    rdx,1
0x008821c6: mov    rax,rdi
0x008821c9: sub    rax,rdx
0x008821cc: cmp    r15,rax
0x008821cf: ja     0x1408821df
0x008821d1: lea    rax,[rdx+r15*1]
0x008821d5: mov    rdi,rcx
0x008821d8: cmp    rcx,rax
0x008821db: cmovb  rdi,rax
0x008821df: lea    rcx,[rdi+0x1]
0x008821e3: call   0x1400707d0
0x008821e8: mov    rsi,rax
0x008821eb: mov    QWORD PTR [rbp-0x68],r13
0x008821ef: mov    QWORD PTR [rbp-0x60],rdi
0x008821f3: mov    r8,r14
0x008821f6: mov    rcx,rax
0x008821f9: cmp    r15,0xf
0x008821fd: jbe    0x140882248
0x008821ff: mov    rdi,QWORD PTR [rbp-0x78]
0x00882203: mov    rdx,rdi
0x00882206: call   0x14153aa78
0x0088220b: mov    WORD PTR [rsi+r14*1],0xe2
0x00882212: lea    rdx,[r15+0x1]
0x00882216: cmp    rdx,0x1000
0x0088221d: jb     0x140882237
0x0088221f: add    rdx,0x27
0x00882223: mov    rcx,QWORD PTR [rdi-0x8]
0x00882227: sub    rdi,rcx
0x0088222a: lea    rax,[rdi-0x8]
0x0088222e: cmp    rax,0x1f
0x00882232: ja     0x140882241
0x00882234: mov    rdi,rcx
0x00882237: mov    rcx,rdi
0x0088223a: call   0x141539680
0x0088223f: jmp    0x140882258
0x00882241: call   QWORD PTR [rip+0xd638e1]        # 0x1415e5b28
0x00882247: int3
0x00882248: lea    rdx,[rbp-0x78]
0x0088224c: call   0x14153aa78
0x00882251: mov    WORD PTR [rsi+r14*1],0xe2
0x00882258: mov    QWORD PTR [rbp-0x78],rsi
0x0088225c: lea    rdx,[rbp-0x78]
0x00882260: cmp    QWORD PTR [rbp-0x60],0xf
0x00882265: cmova  rdx,rsi
0x00882269: mov    r8,QWORD PTR [rbp-0x68]
0x0088226d: lea    rcx,[rbp-0x30]
0x00882271: call   0x14006fa10
0x00882276: lea    eax,[rbx+rbx*2]
0x00882279: cdq
0x0088227a: sub    eax,edx
0x0088227c: sar    eax,1
0x0088227e: cmp    eax,r12d
0x00882281: jge    0x14088228f
0x00882283: mov    DWORD PTR [rip+0x1dc81ef],0x1010004        # 0x14264a47c
0x0088228d: jmp    0x1408822a8
0x0088228f: cmp    r12d,ebx
0x00882292: mov    DWORD PTR [rip+0x1dc81e0],0x1010006        # 0x14264a47c
0x0088229c: jg     0x1408822a8
0x0088229e: mov    DWORD PTR [rip+0x1dc81d4],0x1000007        # 0x14264a47c
0x008822a8: xor    r9d,r9d
0x008822ab: lea    rdx,[rbp-0x30]
0x008822af: lea    rcx,[rip+0x1dc813a]        # 0x14264a3f0
0x008822b6: call   0x140ad9960
0x008822bb: nop
0x008822bc: mov    rdx,QWORD PTR [rbp-0x60]
0x008822c0: cmp    rdx,0xf
0x008822c4: jbe    0x1408822fa
0x008822c6: inc    rdx
0x008822c9: mov    rcx,QWORD PTR [rbp-0x78]
0x008822cd: mov    rax,rcx
0x008822d0: cmp    rdx,0x1000
0x008822d7: jb     0x1408822f5
0x008822d9: add    rdx,0x27
0x008822dd: mov    rcx,QWORD PTR [rcx-0x8]
0x008822e1: sub    rax,rcx
0x008822e4: add    rax,0xfffffffffffffff8
0x008822e8: cmp    rax,0x1f
0x008822ec: jbe    0x1408822f5
0x008822ee: call   QWORD PTR [rip+0xd63834]        # 0x1415e5b28
0x008822f4: int3
0x008822f5: call   0x141539680
0x008822fa: mov    QWORD PTR [rbp-0x68],0x0
0x00882302: mov    QWORD PTR [rbp-0x60],0xf
0x0088230a: mov    BYTE PTR [rbp-0x78],0x0
0x0088230e: mov    rdx,QWORD PTR [rbp-0x18]
0x00882312: cmp    rdx,0xf
0x00882316: jbe    0x14088234c
0x00882318: inc    rdx
0x0088231b: mov    rcx,QWORD PTR [rbp-0x30]
0x0088231f: mov    rax,rcx
0x00882322: cmp    rdx,0x1000
0x00882329: jb     0x140882347
0x0088232b: add    rdx,0x27
0x0088232f: mov    rcx,QWORD PTR [rcx-0x8]
0x00882333: sub    rax,rcx
0x00882336: add    rax,0xfffffffffffffff8
0x0088233a: cmp    rax,0x1f
0x0088233e: jbe    0x140882347
0x00882340: call   QWORD PTR [rip+0xd637e2]        # 0x1415e5b28
0x00882346: int3
0x00882347: call   0x141539680
0x0088234c: mov    r12d,DWORD PTR [rsp+0x58]
0x00882351: mov    r14,QWORD PTR [rsp+0x48]
0x00882356: mov    r15d,DWORD PTR [rsp+0x5c]
0x0088235b: mov    edi,DWORD PTR [rsp+0x40]
0x0088235f: cmp    BYTE PTR [r14+0x10],0x0
0x00882364: je     0x1408833af
0x0088236a: mov    eax,DWORD PTR [r14+0x4]
0x0088236e: sub    eax,0x7
0x00882371: cmp    eax,0x2
0x00882374: jbe    0x1408833af
0x0088237a: lea    r15d,[r12-0x28]
0x0088237f: dec    edi
0x00882381: lea    r13d,[r15+0x4]
0x00882385: lea    eax,[r15+0x14]
0x00882389: mov    DWORD PTR [rsp+0x60],eax
0x0088238d: add    r12d,0xffffffd9
0x00882391: mov    eax,DWORD PTR [rsp+0x58]
0x00882395: lea    esi,[rax-0x26]
0x00882398: lea    r14d,[rax-0x25]
0x0088239c: lea    rbx,[rip+0x1dd0981]        # 0x142652d24
0x008823a3: mov    r11,QWORD PTR [rsp+0x48]
0x008823a8: nop    DWORD PTR [rax+rax*1+0x0]
0x008823b0: mov    DWORD PTR [rip+0x1dc80bd],r15d        # 0x14264a474
0x008823b7: mov    DWORD PTR [rip+0x1dc80bb],edi        # 0x14264a478
0x008823bd: cmp    DWORD PTR [r11+0x4],0x1
0x008823c2: jne    0x1408828f0
0x008823c8: mov    edx,DWORD PTR [rbx+0x24]
0x008823cb: jmp    0x1408828f3
0x008823d0: xorps  xmm0,xmm0
0x008823d3: movups XMMWORD PTR [rbp-0x58],xmm0
0x008823d7: mov    ecx,0x20
0x008823dc: call   0x1400707d0
0x008823e1: mov    QWORD PTR [rbp-0x58],rax
0x008823e5: movdqa xmm0,XMMWORD PTR [rip+0xf08ec3]        # 0x14178b2b0
0x008823ed: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008823f2: movups xmm0,XMMWORD PTR [rip+0xe32107]        # 0x1416b4500 ; literal="What do you want to drop?"
0x008823f9: movups XMMWORD PTR [rax],xmm0
0x008823fc: movsd  xmm0,QWORD PTR [rip+0xe3210c]        # 0x1416b4510 ; literal=" to drop?"
0x00882404: movsd  QWORD PTR [rax+0x10],xmm0
0x00882409: movzx  ecx,BYTE PTR [rip+0xe32108]        # 0x1416b4518 ; literal="?"
0x00882410: mov    BYTE PTR [rax+0x18],cl
0x00882413: mov    BYTE PTR [rax+0x19],0x0
0x00882417: xor    r9d,r9d
0x0088241a: lea    rdx,[rbp-0x58]
0x0088241e: lea    rcx,[rip+0x1dc7fcb]        # 0x14264a3f0
0x00882425: call   0x140ad9960
0x0088242a: nop
0x0088242b: lea    rcx,[rbp-0x58]
0x0088242f: call   0x14006f850
0x00882434: jmp    0x14088235f
0x00882439: xorps  xmm0,xmm0
0x0088243c: movups XMMWORD PTR [rbp-0x58],xmm0
0x00882440: mov    ecx,0x20
0x00882445: call   0x1400707d0
0x0088244a: mov    QWORD PTR [rbp-0x58],rax
0x0088244e: movdqa xmm0,XMMWORD PTR [rip+0xf08e5a]        # 0x14178b2b0
0x00882456: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x0088245b: movups xmm0,XMMWORD PTR [rip+0xe3207e]        # 0x1416b44e0 ; literal="What do you want to wear?"
0x00882462: movups XMMWORD PTR [rax],xmm0
0x00882465: movsd  xmm0,QWORD PTR [rip+0xe32083]        # 0x1416b44f0 ; literal=" to wear?"
0x0088246d: movsd  QWORD PTR [rax+0x10],xmm0
0x00882472: movzx  ecx,BYTE PTR [rip+0xe3207f]        # 0x1416b44f8 ; literal="?"
0x00882479: mov    BYTE PTR [rax+0x18],cl
0x0088247c: mov    BYTE PTR [rax+0x19],0x0
0x00882480: xor    r9d,r9d
0x00882483: lea    rdx,[rbp-0x58]
0x00882487: lea    rcx,[rip+0x1dc7f62]        # 0x14264a3f0
0x0088248e: call   0x140ad9960
0x00882493: nop
0x00882494: lea    rcx,[rbp-0x58]
0x00882498: call   0x14006f850
0x0088249d: jmp    0x14088235f
0x008824a2: xorps  xmm0,xmm0
0x008824a5: movups XMMWORD PTR [rbp-0x58],xmm0
0x008824a9: mov    ecx,0x20
0x008824ae: call   0x1400707d0
0x008824b3: mov    rdx,rax
0x008824b6: mov    QWORD PTR [rbp-0x58],rax
0x008824ba: movdqa xmm0,XMMWORD PTR [rip+0xf08e0e]        # 0x14178b2d0
0x008824c2: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008824c7: movups xmm0,XMMWORD PTR [rip+0xe31f9a]        # 0x1416b4468 ; literal="What do you want to remove?"
0x008824ce: movups XMMWORD PTR [rax],xmm0
0x008824d1: movsd  xmm0,QWORD PTR [rip+0xe31f9f]        # 0x1416b4478 ; literal=" to remove?"
0x008824d9: movsd  QWORD PTR [rax+0x10],xmm0
0x008824de: movzx  ecx,WORD PTR [rip+0xe31f9b]        # 0x1416b4480 ; literal="ve?"
0x008824e5: mov    WORD PTR [rax+0x18],cx
0x008824e9: movzx  eax,BYTE PTR [rip+0xe31f92]        # 0x1416b4482 ; literal="?"
0x008824f0: mov    BYTE PTR [rdx+0x1a],al
0x008824f3: mov    BYTE PTR [rdx+0x1b],0x0
0x008824f7: xor    r9d,r9d
0x008824fa: lea    rdx,[rbp-0x58]
0x008824fe: lea    rcx,[rip+0x1dc7eeb]        # 0x14264a3f0
0x00882505: call   0x140ad9960
0x0088250a: nop
0x0088250b: lea    rcx,[rbp-0x58]
0x0088250f: call   0x14006f850
0x00882514: jmp    0x14088235f
0x00882519: xorps  xmm0,xmm0
0x0088251c: movups XMMWORD PTR [rbp-0x58],xmm0
0x00882520: mov    ecx,0x20
0x00882525: call   0x1400707d0
0x0088252a: mov    QWORD PTR [rbp-0x58],rax
0x0088252e: movdqa xmm0,XMMWORD PTR [rip+0xf08d8a]        # 0x14178b2c0
0x00882536: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x0088253b: movups xmm0,XMMWORD PTR [rip+0xe31f06]        # 0x1416b4448 ; literal="What do you want to place?"
0x00882542: movups XMMWORD PTR [rax],xmm0
0x00882545: movsd  xmm0,QWORD PTR [rip+0xe31f0b]        # 0x1416b4458 ; literal=" to place?"
0x0088254d: movsd  QWORD PTR [rax+0x10],xmm0
0x00882552: movzx  ecx,WORD PTR [rip+0xe31f07]        # 0x1416b4460 ; literal="e?"
0x00882559: mov    WORD PTR [rax+0x18],cx
0x0088255d: mov    BYTE PTR [rax+0x1a],0x0
0x00882561: xor    r9d,r9d
0x00882564: lea    rdx,[rbp-0x58]
0x00882568: lea    rcx,[rip+0x1dc7e81]        # 0x14264a3f0
0x0088256f: call   0x140ad9960
0x00882574: nop
0x00882575: lea    rcx,[rbp-0x58]
0x00882579: call   0x14006f850
0x0088257e: jmp    0x14088235f
0x00882583: xorps  xmm0,xmm0
0x00882586: movups XMMWORD PTR [rbp-0x58],xmm0
0x0088258a: mov    ecx,0x30
0x0088258f: call   0x1400707d0
0x00882594: mov    QWORD PTR [rbp-0x58],rax
0x00882598: movdqa xmm0,XMMWORD PTR [rip+0xf08d90]        # 0x14178b330 ; literal="!"
0x008825a0: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008825a5: movups xmm0,XMMWORD PTR [rip+0xe31efc]        # 0x1416b44a8 ; literal="What do you want to eat or drink?"
0x008825ac: movups XMMWORD PTR [rax],xmm0
0x008825af: movups xmm1,XMMWORD PTR [rip+0xe31f02]        # 0x1416b44b8 ; literal=" to eat or drink?"
0x008825b6: movups XMMWORD PTR [rax+0x10],xmm1
0x008825ba: movzx  ecx,BYTE PTR [rip+0xe31f07]        # 0x1416b44c8 ; literal="?"
0x008825c1: mov    BYTE PTR [rax+0x20],cl
0x008825c4: mov    BYTE PTR [rax+0x21],0x0
0x008825c8: xor    r9d,r9d
0x008825cb: lea    rdx,[rbp-0x58]
0x008825cf: lea    rcx,[rip+0x1dc7e1a]        # 0x14264a3f0
0x008825d6: call   0x140ad9960
0x008825db: nop
0x008825dc: lea    rcx,[rbp-0x58]
0x008825e0: call   0x14006f850
0x008825e5: jmp    0x14088235f
0x008825ea: xorps  xmm0,xmm0
0x008825ed: movups XMMWORD PTR [rbp-0x58],xmm0
0x008825f1: mov    ecx,0x20
0x008825f6: call   0x1400707d0
0x008825fb: mov    QWORD PTR [rbp-0x58],rax
0x008825ff: movdqa xmm0,XMMWORD PTR [rip+0xf08cb9]        # 0x14178b2c0
0x00882607: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x0088260c: movups xmm0,XMMWORD PTR [rip+0xe31e75]        # 0x1416b4488 ; literal="What do you want to throw?"
0x00882613: movups XMMWORD PTR [rax],xmm0
0x00882616: movsd  xmm0,QWORD PTR [rip+0xe31e7a]        # 0x1416b4498 ; literal=" to throw?"
0x0088261e: movsd  QWORD PTR [rax+0x10],xmm0
0x00882623: movzx  ecx,WORD PTR [rip+0xe31e76]        # 0x1416b44a0 ; literal="w?"
0x0088262a: mov    WORD PTR [rax+0x18],cx
0x0088262e: mov    BYTE PTR [rax+0x1a],0x0
0x00882632: xor    r9d,r9d
0x00882635: lea    rdx,[rbp-0x58]
0x00882639: lea    rcx,[rip+0x1dc7db0]        # 0x14264a3f0
0x00882640: call   0x140ad9960
0x00882645: nop
0x00882646: lea    rcx,[rbp-0x58]
0x0088264a: call   0x14006f850
0x0088264f: jmp    0x14088235f
0x00882654: xorps  xmm0,xmm0
0x00882657: movups XMMWORD PTR [rbp-0x58],xmm0
0x0088265b: mov    ecx,0x30
0x00882660: call   0x1400707d0
0x00882665: mov    QWORD PTR [rbp-0x58],rax
0x00882669: movdqa xmm0,XMMWORD PTR [rip+0xf08ccf]        # 0x14178b340 ; literal="\""
0x00882671: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x00882676: movups xmm0,XMMWORD PTR [rip+0xe31f4b]        # 0x1416b45c8 ; literal="With what do you want to interact?"
0x0088267d: movups XMMWORD PTR [rax],xmm0
0x00882680: movups xmm1,XMMWORD PTR [rip+0xe31f51]        # 0x1416b45d8 ; literal=" want to interact?"
0x00882687: movups XMMWORD PTR [rax+0x10],xmm1
0x0088268b: movzx  ecx,WORD PTR [rip+0xe31f56]        # 0x1416b45e8 ; literal="t?"
0x00882692: mov    WORD PTR [rax+0x20],cx
0x00882696: mov    BYTE PTR [rax+0x22],0x0
0x0088269a: xor    r9d,r9d
0x0088269d: lea    rdx,[rbp-0x58]
0x008826a1: lea    rcx,[rip+0x1dc7d48]        # 0x14264a3f0
0x008826a8: call   0x140ad9960
0x008826ad: nop
0x008826ae: mov    rdx,QWORD PTR [rbp-0x40]
0x008826b2: cmp    rdx,0xf
0x008826b6: jbe    0x14088235f
0x008826bc: inc    rdx
0x008826bf: mov    rcx,QWORD PTR [rbp-0x58]
0x008826c3: mov    rax,rcx
0x008826c6: cmp    rdx,0x1000
0x008826cd: jb     0x1408826eb
0x008826cf: add    rdx,0x27
0x008826d3: mov    rcx,QWORD PTR [rcx-0x8]
0x008826d7: sub    rax,rcx
0x008826da: add    rax,0xfffffffffffffff8
0x008826de: cmp    rax,0x1f
0x008826e2: jbe    0x1408826eb
0x008826e4: call   QWORD PTR [rip+0xd6343e]        # 0x1415e5b28
0x008826ea: int3
0x008826eb: call   0x141539680
0x008826f0: jmp    0x14088235f
0x008826f5: xorps  xmm0,xmm0
0x008826f8: movups XMMWORD PTR [rbp-0x58],xmm0
0x008826fc: mov    ecx,0x20
0x00882701: call   0x1400707d0
0x00882706: mov    QWORD PTR [rbp-0x58],rax
0x0088270a: movdqa xmm0,XMMWORD PTR [rip+0xf08b1e]        # 0x14178b230
0x00882712: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x00882717: movups xmm0,XMMWORD PTR [rip+0xe31e92]        # 0x1416b45b0 ; literal="Where do you put "
0x0088271e: movups XMMWORD PTR [rax],xmm0
0x00882721: movzx  ecx,BYTE PTR [rip+0xe31e98]        # 0x1416b45c0 ; literal=" "
0x00882728: mov    BYTE PTR [rax+0x10],cl
0x0088272b: mov    BYTE PTR [rax+0x11],0x0
0x0088272f: xor    r9d,r9d
0x00882732: lea    rdx,[rbp-0x58]
0x00882736: lea    rcx,[rip+0x1dc7cb3]        # 0x14264a3f0
0x0088273d: call   0x140ad9960
0x00882742: nop
0x00882743: mov    rdx,QWORD PTR [rbp-0x40]
0x00882747: cmp    rdx,0xf
0x0088274b: jbe    0x140882781
0x0088274d: inc    rdx
0x00882750: mov    rcx,QWORD PTR [rbp-0x58]
0x00882754: mov    rax,rcx
0x00882757: cmp    rdx,0x1000
0x0088275e: jb     0x14088277c
0x00882760: add    rdx,0x27
0x00882764: mov    rcx,QWORD PTR [rcx-0x8]
0x00882768: sub    rax,rcx
0x0088276b: add    rax,0xfffffffffffffff8
0x0088276f: cmp    rax,0x1f
0x00882773: jbe    0x14088277c
0x00882775: call   QWORD PTR [rip+0xd633ad]        # 0x1415e5b28
0x0088277b: int3
0x0088277c: call   0x141539680
0x00882781: xorps  xmm0,xmm0
0x00882784: movups XMMWORD PTR [rbp-0x30],xmm0
0x00882788: movdqa xmm1,XMMWORD PTR [rip+0xf08990]        # 0x14178b120
0x00882790: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x00882795: mov    BYTE PTR [rbp-0x30],0x0
0x00882799: mov    r9d,0x1
0x0088279f: xor    r8d,r8d
0x008827a2: lea    rdx,[rbp-0x30]
0x008827a6: mov    rcx,QWORD PTR [r14+0x8]
0x008827aa: call   0x140c65450
0x008827af: xor    r9d,r9d
0x008827b2: lea    rdx,[rbp-0x30]
0x008827b6: lea    rcx,[rip+0x1dc7c33]        # 0x14264a3f0
0x008827bd: call   0x140ad9960
0x008827c2: xorps  xmm0,xmm0
0x008827c5: movups XMMWORD PTR [rbp-0x58],xmm0
0x008827c9: movdqa xmm1,XMMWORD PTR [rip+0xf0895f]        # 0x14178b130
0x008827d1: movdqu XMMWORD PTR [rbp-0x48],xmm1
0x008827d6: mov    WORD PTR [rbp-0x58],0x3f
0x008827dc: xor    r9d,r9d
0x008827df: lea    rdx,[rbp-0x58]
0x008827e3: lea    rcx,[rip+0x1dc7c06]        # 0x14264a3f0
0x008827ea: call   0x140ad9960
0x008827ef: nop
0x008827f0: lea    rcx,[rbp-0x58]
0x008827f4: call   0x14006f850
0x008827f9: nop
0x008827fa: lea    rcx,[rbp-0x30]
0x008827fe: call   0x14006f850
0x00882803: jmp    0x14088235b
0x00882808: xorps  xmm0,xmm0
0x0088280b: movups XMMWORD PTR [rbp-0x58],xmm0
0x0088280f: mov    ecx,0x20
0x00882814: call   0x1400707d0
0x00882819: mov    QWORD PTR [rbp-0x58],rax
0x0088281d: movdqa xmm0,XMMWORD PTR [rip+0xf08a5b]        # 0x14178b280
0x00882825: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x0088282a: movups xmm0,XMMWORD PTR [rip+0xe31dd7]        # 0x1416b4608 ; literal="What will you do with "
0x00882831: movups XMMWORD PTR [rax],xmm0
0x00882834: mov    ecx,DWORD PTR [rip+0xe31dde]        # 0x1416b4618 ; literal=" with "
0x0088283a: mov    DWORD PTR [rax+0x10],ecx
0x0088283d: movzx  ecx,WORD PTR [rip+0xe31dd8]        # 0x1416b461c ; literal="h "
0x00882844: mov    WORD PTR [rax+0x14],cx
0x00882848: mov    BYTE PTR [rax+0x16],0x0
0x0088284c: xor    r9d,r9d
0x0088284f: lea    rdx,[rbp-0x58]
0x00882853: lea    rcx,[rip+0x1dc7b96]        # 0x14264a3f0
0x0088285a: call   0x140ad9960
0x0088285f: nop
0x00882860: lea    rcx,[rbp-0x58]
0x00882864: call   0x14006f850
0x00882869: xorps  xmm0,xmm0
0x0088286c: movups XMMWORD PTR [rbp-0x30],xmm0
0x00882870: movdqa xmm1,XMMWORD PTR [rip+0xf088a8]        # 0x14178b120
0x00882878: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x0088287d: mov    BYTE PTR [rbp-0x30],0x0
0x00882881: mov    r9d,0x1
0x00882887: xor    r8d,r8d
0x0088288a: lea    rdx,[rbp-0x30]
0x0088288e: mov    rcx,QWORD PTR [r14+0x8]
0x00882892: call   0x140c65450
0x00882897: xor    r9d,r9d
0x0088289a: lea    rdx,[rbp-0x30]
0x0088289e: lea    rcx,[rip+0x1dc7b4b]        # 0x14264a3f0
0x008828a5: call   0x140ad9960
0x008828aa: xorps  xmm0,xmm0
0x008828ad: movups XMMWORD PTR [rbp-0x58],xmm0
0x008828b1: movdqa xmm1,XMMWORD PTR [rip+0xf08877]        # 0x14178b130
0x008828b9: movdqu XMMWORD PTR [rbp-0x48],xmm1
0x008828be: mov    WORD PTR [rbp-0x58],0x3f
0x008828c4: xor    r9d,r9d
0x008828c7: lea    rdx,[rbp-0x58]
0x008828cb: lea    rcx,[rip+0x1dc7b1e]        # 0x14264a3f0
0x008828d2: call   0x140ad9960
0x008828d7: nop
0x008828d8: lea    rcx,[rbp-0x58]
0x008828dc: call   0x14006f850
0x008828e1: nop
0x008828e2: lea    rcx,[rbp-0x30]
0x008828e6: call   0x14006f850
0x008828eb: jmp    0x14088235b
0x008828f0: mov    edx,DWORD PTR [rbx-0xc]
0x008828f3: lea    rcx,[rip+0x1dc7af6]        # 0x14264a3f0
0x008828fa: call   0x140adaad0
0x008828ff: cmp    DWORD PTR [rip+0x1b4ae72],0x0        # 0x1423cd778
0x00882906: jle    0x14088292a
0x00882908: mov    rax,QWORD PTR [rip+0x1b4ae61]        # 0x1423cd770
0x0088290f: test   BYTE PTR [rax],0x1
0x00882912: je     0x14088292a
0x00882914: mov    r8b,0x1
0x00882917: xor    edx,edx
0x00882919: lea    rcx,[rip+0x1dc7ad0]        # 0x14264a3f0
0x00882920: call   0x1400bb190
0x00882925: mov    r11,QWORD PTR [rsp+0x48]
0x0088292a: mov    DWORD PTR [rip+0x1dc7b43],r12d        # 0x14264a474
0x00882931: mov    DWORD PTR [rip+0x1dc7b41],edi        # 0x14264a478
0x00882937: cmp    DWORD PTR [r11+0x4],0x1
0x0088293c: lea    rdx,[rbx+0x30]
0x00882940: je     0x140882945
0x00882942: mov    rdx,rbx
0x00882945: mov    edx,DWORD PTR [rdx]
0x00882947: lea    rcx,[rip+0x1dc7aa2]        # 0x14264a3f0
0x0088294e: call   0x140adaad0
0x00882953: cmp    DWORD PTR [rip+0x1b4ae1e],0x0        # 0x1423cd778
0x0088295a: jle    0x14088297e
0x0088295c: mov    rax,QWORD PTR [rip+0x1b4ae0d]        # 0x1423cd770
0x00882963: test   BYTE PTR [rax],0x1
0x00882966: je     0x14088297e
0x00882968: mov    r8b,0x1
0x0088296b: xor    edx,edx
0x0088296d: lea    rcx,[rip+0x1dc7a7c]        # 0x14264a3f0
0x00882974: call   0x1400bb190
0x00882979: mov    r11,QWORD PTR [rsp+0x48]
0x0088297e: mov    DWORD PTR [rip+0x1dc7af0],esi        # 0x14264a474
0x00882984: mov    DWORD PTR [rip+0x1dc7aee],edi        # 0x14264a478
0x0088298a: cmp    DWORD PTR [r11+0x4],0x1
0x0088298f: jne    0x140882996
0x00882991: mov    edx,DWORD PTR [rbx+0x3c]
0x00882994: jmp    0x140882999
0x00882996: mov    edx,DWORD PTR [rbx+0xc]
0x00882999: lea    rcx,[rip+0x1dc7a50]        # 0x14264a3f0
0x008829a0: call   0x140adaad0
0x008829a5: cmp    DWORD PTR [rip+0x1b4adcc],0x0        # 0x1423cd778
0x008829ac: jle    0x1408829d0
0x008829ae: mov    rax,QWORD PTR [rip+0x1b4adbb]        # 0x1423cd770
0x008829b5: test   BYTE PTR [rax],0x1
0x008829b8: je     0x1408829d0
0x008829ba: mov    r8b,0x1
0x008829bd: xor    edx,edx
0x008829bf: lea    rcx,[rip+0x1dc7a2a]        # 0x14264a3f0
0x008829c6: call   0x1400bb190
0x008829cb: mov    r11,QWORD PTR [rsp+0x48]
0x008829d0: mov    DWORD PTR [rip+0x1dc7a9d],r14d        # 0x14264a474
0x008829d7: mov    DWORD PTR [rip+0x1dc7a9b],edi        # 0x14264a478
0x008829dd: cmp    DWORD PTR [r11+0x4],0x1
0x008829e2: jne    0x1408829e9
0x008829e4: mov    edx,DWORD PTR [rbx+0x48]
0x008829e7: jmp    0x1408829ec
0x008829e9: mov    edx,DWORD PTR [rbx+0x18]
0x008829ec: lea    rcx,[rip+0x1dc79fd]        # 0x14264a3f0
0x008829f3: call   0x140adaad0
0x008829f8: cmp    DWORD PTR [rip+0x1b4ad79],0x0        # 0x1423cd778
0x008829ff: jle    0x140882a23
0x00882a01: mov    rax,QWORD PTR [rip+0x1b4ad68]        # 0x1423cd770
0x00882a08: test   BYTE PTR [rax],0x1
0x00882a0b: je     0x140882a23
0x00882a0d: mov    r8b,0x1
0x00882a10: xor    edx,edx
0x00882a12: lea    rcx,[rip+0x1dc79d7]        # 0x14264a3f0
0x00882a19: call   0x1400bb190
0x00882a1e: mov    r11,QWORD PTR [rsp+0x48]
0x00882a23: inc    edi
0x00882a25: add    rbx,0x4
0x00882a29: lea    rax,[rip+0x1dd0300]        # 0x142652d30
0x00882a30: cmp    rbx,rax
0x00882a33: jl     0x1408823b0
0x00882a39: mov    eax,DWORD PTR [rsp+0x50]
0x00882a3d: mov    edx,DWORD PTR [rsp+0x40]
0x00882a41: cmp    eax,r15d
0x00882a44: jl     0x140882a88
0x00882a46: cmp    eax,r13d
0x00882a49: jge    0x140882a88
0x00882a4b: lea    esi,[rdx-0x1]
0x00882a4e: mov    ecx,DWORD PTR [rsp+0x44]
0x00882a52: cmp    ecx,esi
0x00882a54: jl     0x140882a88
0x00882a56: lea    eax,[rsi+0x3]
0x00882a59: cmp    ecx,eax
0x00882a5b: jge    0x140882a88
0x00882a5d: mov    eax,DWORD PTR [rsp+0x58]
0x00882a61: add    eax,0xffffffd8
0x00882a64: mov    DWORD PTR [rip+0x1026952],eax        # 0x1418a93bc
0x00882a6a: mov    eax,DWORD PTR [rsp+0x54]
0x00882a6e: add    eax,0xfffffffe
0x00882a71: mov    DWORD PTR [rip+0x1026949],eax        # 0x1418a93c0
0x00882a77: mov    BYTE PTR [rip+0x102693a],0x0        # 0x1418a93b8
0x00882a7e: mov    DWORD PTR [rip+0x1026910],0x22b        # 0x1418a9398
0x00882a88: lea    r12d,[r13+0x1]
0x00882a8c: lea    esi,[r13+0x2]
0x00882a90: lea    r14d,[r13+0x3]
0x00882a94: lea    edi,[rdx-0x1]
0x00882a97: lea    rbx,[rip+0x1dd02e6]        # 0x142652d84
0x00882a9e: xchg   ax,ax
0x00882aa0: mov    DWORD PTR [rip+0x1dc79cd],r13d        # 0x14264a474
0x00882aa7: mov    DWORD PTR [rip+0x1dc79cb],edi        # 0x14264a478
0x00882aad: cmp    DWORD PTR [r11+0x4],0x2
0x00882ab2: jne    0x140882ab9
0x00882ab4: mov    edx,DWORD PTR [rbx+0x24]
0x00882ab7: jmp    0x140882abc
0x00882ab9: mov    edx,DWORD PTR [rbx-0xc]
0x00882abc: lea    rcx,[rip+0x1dc792d]        # 0x14264a3f0
0x00882ac3: call   0x140adaad0
0x00882ac8: cmp    DWORD PTR [rip+0x1b4aca9],0x0        # 0x1423cd778
0x00882acf: jle    0x140882af3
0x00882ad1: mov    rax,QWORD PTR [rip+0x1b4ac98]        # 0x1423cd770
0x00882ad8: test   BYTE PTR [rax],0x1
0x00882adb: je     0x140882af3
0x00882add: mov    r8b,0x1
0x00882ae0: xor    edx,edx
0x00882ae2: lea    rcx,[rip+0x1dc7907]        # 0x14264a3f0
0x00882ae9: call   0x1400bb190
0x00882aee: mov    r11,QWORD PTR [rsp+0x48]
0x00882af3: mov    DWORD PTR [rip+0x1dc797a],r12d        # 0x14264a474
0x00882afa: mov    DWORD PTR [rip+0x1dc7978],edi        # 0x14264a478
0x00882b00: cmp    DWORD PTR [r11+0x4],0x2
0x00882b05: lea    rdx,[rbx+0x30]
0x00882b09: je     0x140882b0e
0x00882b0b: mov    rdx,rbx
0x00882b0e: mov    edx,DWORD PTR [rdx]
0x00882b10: lea    rcx,[rip+0x1dc78d9]        # 0x14264a3f0
0x00882b17: call   0x140adaad0
0x00882b1c: cmp    DWORD PTR [rip+0x1b4ac55],0x0        # 0x1423cd778
0x00882b23: jle    0x140882b47
0x00882b25: mov    rax,QWORD PTR [rip+0x1b4ac44]        # 0x1423cd770
0x00882b2c: test   BYTE PTR [rax],0x1
0x00882b2f: je     0x140882b47
0x00882b31: mov    r8b,0x1
0x00882b34: xor    edx,edx
0x00882b36: lea    rcx,[rip+0x1dc78b3]        # 0x14264a3f0
0x00882b3d: call   0x1400bb190
0x00882b42: mov    r11,QWORD PTR [rsp+0x48]
0x00882b47: mov    DWORD PTR [rip+0x1dc7927],esi        # 0x14264a474
0x00882b4d: mov    DWORD PTR [rip+0x1dc7925],edi        # 0x14264a478
0x00882b53: cmp    DWORD PTR [r11+0x4],0x2
0x00882b58: jne    0x140882b5f
0x00882b5a: mov    edx,DWORD PTR [rbx+0x3c]
0x00882b5d: jmp    0x140882b62
0x00882b5f: mov    edx,DWORD PTR [rbx+0xc]
0x00882b62: lea    rcx,[rip+0x1dc7887]        # 0x14264a3f0
0x00882b69: call   0x140adaad0
0x00882b6e: cmp    DWORD PTR [rip+0x1b4ac03],0x0        # 0x1423cd778
0x00882b75: jle    0x140882b99
0x00882b77: mov    rax,QWORD PTR [rip+0x1b4abf2]        # 0x1423cd770
0x00882b7e: test   BYTE PTR [rax],0x1
0x00882b81: je     0x140882b99
0x00882b83: mov    r8b,0x1
0x00882b86: xor    edx,edx
0x00882b88: lea    rcx,[rip+0x1dc7861]        # 0x14264a3f0
0x00882b8f: call   0x1400bb190
0x00882b94: mov    r11,QWORD PTR [rsp+0x48]
0x00882b99: mov    DWORD PTR [rip+0x1dc78d4],r14d        # 0x14264a474
0x00882ba0: mov    DWORD PTR [rip+0x1dc78d2],edi        # 0x14264a478
0x00882ba6: cmp    DWORD PTR [r11+0x4],0x2
0x00882bab: jne    0x140882bb2
0x00882bad: mov    edx,DWORD PTR [rbx+0x48]
0x00882bb0: jmp    0x140882bb5
0x00882bb2: mov    edx,DWORD PTR [rbx+0x18]
0x00882bb5: lea    rcx,[rip+0x1dc7834]        # 0x14264a3f0
0x00882bbc: call   0x140adaad0
0x00882bc1: cmp    DWORD PTR [rip+0x1b4abb0],0x0        # 0x1423cd778
0x00882bc8: jle    0x140882bec
0x00882bca: mov    rax,QWORD PTR [rip+0x1b4ab9f]        # 0x1423cd770
0x00882bd1: test   BYTE PTR [rax],0x1
0x00882bd4: je     0x140882bec
0x00882bd6: mov    r8b,0x1
0x00882bd9: xor    edx,edx
0x00882bdb: lea    rcx,[rip+0x1dc780e]        # 0x14264a3f0
0x00882be2: call   0x1400bb190
0x00882be7: mov    r11,QWORD PTR [rsp+0x48]
0x00882bec: inc    edi
0x00882bee: add    rbx,0x4
0x00882bf2: lea    rax,[rip+0x1dd0197]        # 0x142652d90
0x00882bf9: cmp    rbx,rax
0x00882bfc: jl     0x140882aa0
0x00882c02: mov    ecx,DWORD PTR [rsp+0x50]
0x00882c06: cmp    ecx,r13d
0x00882c09: jl     0x140882c4d
0x00882c0b: lea    eax,[r13+0x4]
0x00882c0f: cmp    ecx,eax
0x00882c11: jge    0x140882c4d
0x00882c13: mov    esi,DWORD PTR [rsp+0x40]
0x00882c17: dec    esi
0x00882c19: mov    ecx,DWORD PTR [rsp+0x44]
0x00882c1d: cmp    ecx,esi
0x00882c1f: jl     0x140882c4d
0x00882c21: lea    eax,[rsi+0x3]
0x00882c24: cmp    ecx,eax
0x00882c26: jge    0x140882c4d
0x00882c28: mov    DWORD PTR [rip+0x102678d],r13d        # 0x1418a93bc
0x00882c2f: mov    eax,DWORD PTR [rsp+0x54]
0x00882c33: add    eax,0xfffffffe
0x00882c36: mov    DWORD PTR [rip+0x1026784],eax        # 0x1418a93c0
0x00882c3c: mov    BYTE PTR [rip+0x1026775],0x0        # 0x1418a93b8
0x00882c43: mov    DWORD PTR [rip+0x102674b],0x22c        # 0x1418a9398
0x00882c4d: mov    r13d,DWORD PTR [rsp+0x58]
0x00882c52: lea    r12d,[r13-0x1f]
0x00882c56: lea    esi,[r13-0x1e]
0x00882c5a: lea    r14d,[r13-0x1d]
0x00882c5e: mov    edi,DWORD PTR [rsp+0x40]
0x00882c62: dec    edi
0x00882c64: lea    rbx,[rip+0x1dd0179]        # 0x142652de4
0x00882c6b: lea    r15d,[r13-0x20]
0x00882c6f: nop
0x00882c70: mov    DWORD PTR [rip+0x1dc77fd],r15d        # 0x14264a474
0x00882c77: mov    DWORD PTR [rip+0x1dc77fb],edi        # 0x14264a478
0x00882c7d: cmp    DWORD PTR [r11+0x4],0x3
0x00882c82: jne    0x140882c89
0x00882c84: mov    edx,DWORD PTR [rbx+0x24]
0x00882c87: jmp    0x140882c8c
0x00882c89: mov    edx,DWORD PTR [rbx-0xc]
0x00882c8c: lea    rcx,[rip+0x1dc775d]        # 0x14264a3f0
0x00882c93: call   0x140adaad0
0x00882c98: cmp    DWORD PTR [rip+0x1b4aad9],0x0        # 0x1423cd778
0x00882c9f: jle    0x140882cc3
0x00882ca1: mov    rax,QWORD PTR [rip+0x1b4aac8]        # 0x1423cd770
0x00882ca8: test   BYTE PTR [rax],0x1
0x00882cab: je     0x140882cc3
0x00882cad: mov    r8b,0x1
0x00882cb0: xor    edx,edx
0x00882cb2: lea    rcx,[rip+0x1dc7737]        # 0x14264a3f0
0x00882cb9: call   0x1400bb190
0x00882cbe: mov    r11,QWORD PTR [rsp+0x48]
0x00882cc3: mov    DWORD PTR [rip+0x1dc77aa],r12d        # 0x14264a474
0x00882cca: mov    DWORD PTR [rip+0x1dc77a8],edi        # 0x14264a478
0x00882cd0: cmp    DWORD PTR [r11+0x4],0x3
0x00882cd5: lea    rdx,[rbx+0x30]
0x00882cd9: je     0x140882cde
0x00882cdb: mov    rdx,rbx
0x00882cde: mov    edx,DWORD PTR [rdx]
0x00882ce0: lea    rcx,[rip+0x1dc7709]        # 0x14264a3f0
0x00882ce7: call   0x140adaad0
0x00882cec: cmp    DWORD PTR [rip+0x1b4aa85],0x0        # 0x1423cd778
0x00882cf3: jle    0x140882d17
0x00882cf5: mov    rax,QWORD PTR [rip+0x1b4aa74]        # 0x1423cd770
0x00882cfc: test   BYTE PTR [rax],0x1
0x00882cff: je     0x140882d17
0x00882d01: mov    r8b,0x1
0x00882d04: xor    edx,edx
0x00882d06: lea    rcx,[rip+0x1dc76e3]        # 0x14264a3f0
0x00882d0d: call   0x1400bb190
0x00882d12: mov    r11,QWORD PTR [rsp+0x48]
0x00882d17: mov    DWORD PTR [rip+0x1dc7757],esi        # 0x14264a474
0x00882d1d: mov    DWORD PTR [rip+0x1dc7755],edi        # 0x14264a478
0x00882d23: cmp    DWORD PTR [r11+0x4],0x3
0x00882d28: jne    0x140882d2f
0x00882d2a: mov    edx,DWORD PTR [rbx+0x3c]
0x00882d2d: jmp    0x140882d32
0x00882d2f: mov    edx,DWORD PTR [rbx+0xc]
0x00882d32: lea    rcx,[rip+0x1dc76b7]        # 0x14264a3f0
0x00882d39: call   0x140adaad0
0x00882d3e: cmp    DWORD PTR [rip+0x1b4aa33],0x0        # 0x1423cd778
0x00882d45: jle    0x140882d69
0x00882d47: mov    rax,QWORD PTR [rip+0x1b4aa22]        # 0x1423cd770
0x00882d4e: test   BYTE PTR [rax],0x1
0x00882d51: je     0x140882d69
0x00882d53: mov    r8b,0x1
0x00882d56: xor    edx,edx
0x00882d58: lea    rcx,[rip+0x1dc7691]        # 0x14264a3f0
0x00882d5f: call   0x1400bb190
0x00882d64: mov    r11,QWORD PTR [rsp+0x48]
0x00882d69: mov    DWORD PTR [rip+0x1dc7704],r14d        # 0x14264a474
0x00882d70: mov    DWORD PTR [rip+0x1dc7702],edi        # 0x14264a478
0x00882d76: cmp    DWORD PTR [r11+0x4],0x3
0x00882d7b: jne    0x140882d82
0x00882d7d: mov    edx,DWORD PTR [rbx+0x48]
0x00882d80: jmp    0x140882d85
0x00882d82: mov    edx,DWORD PTR [rbx+0x18]
0x00882d85: lea    rcx,[rip+0x1dc7664]        # 0x14264a3f0
0x00882d8c: call   0x140adaad0
0x00882d91: cmp    DWORD PTR [rip+0x1b4a9e0],0x0        # 0x1423cd778
0x00882d98: jle    0x140882dbc
0x00882d9a: mov    rax,QWORD PTR [rip+0x1b4a9cf]        # 0x1423cd770
0x00882da1: test   BYTE PTR [rax],0x1
0x00882da4: je     0x140882dbc
0x00882da6: mov    r8b,0x1
0x00882da9: xor    edx,edx
0x00882dab: lea    rcx,[rip+0x1dc763e]        # 0x14264a3f0
0x00882db2: call   0x1400bb190
0x00882db7: mov    r11,QWORD PTR [rsp+0x48]
0x00882dbc: inc    edi
0x00882dbe: add    rbx,0x4
0x00882dc2: lea    rax,[rip+0x1dd0027]        # 0x142652df0
0x00882dc9: cmp    rbx,rax
0x00882dcc: jl     0x140882c70
0x00882dd2: lea    ecx,[r13-0x20]
0x00882dd6: mov    edx,DWORD PTR [rsp+0x50]
0x00882dda: cmp    edx,ecx
0x00882ddc: jl     0x140882e1e
0x00882dde: lea    eax,[rcx+0x4]
0x00882de1: cmp    edx,eax
0x00882de3: jge    0x140882e1e
0x00882de5: mov    esi,DWORD PTR [rsp+0x40]
0x00882de9: dec    esi
0x00882deb: mov    edx,DWORD PTR [rsp+0x44]
0x00882def: cmp    edx,esi
0x00882df1: jl     0x140882e1e
0x00882df3: lea    eax,[rsi+0x3]
0x00882df6: cmp    edx,eax
0x00882df8: jge    0x140882e1e
0x00882dfa: mov    DWORD PTR [rip+0x10265bc],ecx        # 0x1418a93bc
0x00882e00: mov    eax,DWORD PTR [rsp+0x54]
0x00882e04: add    eax,0xfffffffe
0x00882e07: mov    DWORD PTR [rip+0x10265b3],eax        # 0x1418a93c0
0x00882e0d: mov    BYTE PTR [rip+0x10265a4],0x0        # 0x1418a93b8
0x00882e14: mov    DWORD PTR [rip+0x102657a],0x22d        # 0x1418a9398
0x00882e1e: lea    r12d,[r13-0x1b]
0x00882e22: lea    esi,[r13-0x1a]
0x00882e26: lea    r14d,[r13-0x19]
0x00882e2a: mov    edi,DWORD PTR [rsp+0x40]
0x00882e2e: dec    edi
0x00882e30: lea    rbx,[rip+0x1dd000d]        # 0x142652e44
0x00882e37: lea    r15d,[r13-0x1c]
0x00882e3b: nop    DWORD PTR [rax+rax*1+0x0]
0x00882e40: mov    DWORD PTR [rip+0x1dc762d],r15d        # 0x14264a474
0x00882e47: mov    DWORD PTR [rip+0x1dc762b],edi        # 0x14264a478
0x00882e4d: cmp    DWORD PTR [r11+0x4],0x4
0x00882e52: jne    0x140882e59
0x00882e54: mov    edx,DWORD PTR [rbx+0x24]
0x00882e57: jmp    0x140882e5c
0x00882e59: mov    edx,DWORD PTR [rbx-0xc]
0x00882e5c: lea    rcx,[rip+0x1dc758d]        # 0x14264a3f0
0x00882e63: call   0x140adaad0
0x00882e68: cmp    DWORD PTR [rip+0x1b4a909],0x0        # 0x1423cd778
0x00882e6f: jle    0x140882e93
0x00882e71: mov    rax,QWORD PTR [rip+0x1b4a8f8]        # 0x1423cd770
0x00882e78: test   BYTE PTR [rax],0x1
0x00882e7b: je     0x140882e93
0x00882e7d: mov    r8b,0x1
0x00882e80: xor    edx,edx
0x00882e82: lea    rcx,[rip+0x1dc7567]        # 0x14264a3f0
0x00882e89: call   0x1400bb190
0x00882e8e: mov    r11,QWORD PTR [rsp+0x48]
0x00882e93: mov    DWORD PTR [rip+0x1dc75da],r12d        # 0x14264a474
0x00882e9a: mov    DWORD PTR [rip+0x1dc75d8],edi        # 0x14264a478
0x00882ea0: cmp    DWORD PTR [r11+0x4],0x4
0x00882ea5: lea    rdx,[rbx+0x30]
0x00882ea9: je     0x140882eae
0x00882eab: mov    rdx,rbx
0x00882eae: mov    edx,DWORD PTR [rdx]
0x00882eb0: lea    rcx,[rip+0x1dc7539]        # 0x14264a3f0
0x00882eb7: call   0x140adaad0
0x00882ebc: cmp    DWORD PTR [rip+0x1b4a8b5],0x0        # 0x1423cd778
0x00882ec3: jle    0x140882ee7
0x00882ec5: mov    rax,QWORD PTR [rip+0x1b4a8a4]        # 0x1423cd770
0x00882ecc: test   BYTE PTR [rax],0x1
0x00882ecf: je     0x140882ee7
0x00882ed1: mov    r8b,0x1
0x00882ed4: xor    edx,edx
0x00882ed6: lea    rcx,[rip+0x1dc7513]        # 0x14264a3f0
0x00882edd: call   0x1400bb190
0x00882ee2: mov    r11,QWORD PTR [rsp+0x48]
0x00882ee7: mov    DWORD PTR [rip+0x1dc7587],esi        # 0x14264a474
0x00882eed: mov    DWORD PTR [rip+0x1dc7585],edi        # 0x14264a478
0x00882ef3: cmp    DWORD PTR [r11+0x4],0x4
0x00882ef8: jne    0x140882eff
0x00882efa: mov    edx,DWORD PTR [rbx+0x3c]
0x00882efd: jmp    0x140882f02
0x00882eff: mov    edx,DWORD PTR [rbx+0xc]
0x00882f02: lea    rcx,[rip+0x1dc74e7]        # 0x14264a3f0
0x00882f09: call   0x140adaad0
0x00882f0e: cmp    DWORD PTR [rip+0x1b4a863],0x0        # 0x1423cd778
0x00882f15: jle    0x140882f39
0x00882f17: mov    rax,QWORD PTR [rip+0x1b4a852]        # 0x1423cd770
0x00882f1e: test   BYTE PTR [rax],0x1
0x00882f21: je     0x140882f39
0x00882f23: mov    r8b,0x1
0x00882f26: xor    edx,edx
0x00882f28: lea    rcx,[rip+0x1dc74c1]        # 0x14264a3f0
0x00882f2f: call   0x1400bb190
0x00882f34: mov    r11,QWORD PTR [rsp+0x48]
0x00882f39: mov    DWORD PTR [rip+0x1dc7534],r14d        # 0x14264a474
0x00882f40: mov    DWORD PTR [rip+0x1dc7532],edi        # 0x14264a478
0x00882f46: cmp    DWORD PTR [r11+0x4],0x4
0x00882f4b: jne    0x140882f52
0x00882f4d: mov    edx,DWORD PTR [rbx+0x48]
0x00882f50: jmp    0x140882f55
0x00882f52: mov    edx,DWORD PTR [rbx+0x18]
0x00882f55: lea    rcx,[rip+0x1dc7494]        # 0x14264a3f0
0x00882f5c: call   0x140adaad0
0x00882f61: cmp    DWORD PTR [rip+0x1b4a810],0x0        # 0x1423cd778
0x00882f68: jle    0x140882f8c
0x00882f6a: mov    rax,QWORD PTR [rip+0x1b4a7ff]        # 0x1423cd770
0x00882f71: test   BYTE PTR [rax],0x1
0x00882f74: je     0x140882f8c
0x00882f76: mov    r8b,0x1
0x00882f79: xor    edx,edx
0x00882f7b: lea    rcx,[rip+0x1dc746e]        # 0x14264a3f0
0x00882f82: call   0x1400bb190
0x00882f87: mov    r11,QWORD PTR [rsp+0x48]
0x00882f8c: inc    edi
0x00882f8e: add    rbx,0x4
0x00882f92: lea    rax,[rip+0x1dcfeb7]        # 0x142652e50
0x00882f99: cmp    rbx,rax
0x00882f9c: jl     0x140882e40
0x00882fa2: lea    ecx,[r13-0x1c]
0x00882fa6: mov    edx,DWORD PTR [rsp+0x50]
0x00882faa: cmp    edx,ecx
0x00882fac: jl     0x140882fee
0x00882fae: lea    eax,[rcx+0x4]
0x00882fb1: cmp    edx,eax
0x00882fb3: jge    0x140882fee
0x00882fb5: mov    esi,DWORD PTR [rsp+0x40]
0x00882fb9: dec    esi
0x00882fbb: mov    edx,DWORD PTR [rsp+0x44]
0x00882fbf: cmp    edx,esi
0x00882fc1: jl     0x140882fee
0x00882fc3: lea    eax,[rsi+0x3]
0x00882fc6: cmp    edx,eax
0x00882fc8: jge    0x140882fee
0x00882fca: mov    DWORD PTR [rip+0x10263ec],ecx        # 0x1418a93bc
0x00882fd0: mov    eax,DWORD PTR [rsp+0x54]
0x00882fd4: add    eax,0xfffffffe
0x00882fd7: mov    DWORD PTR [rip+0x10263e3],eax        # 0x1418a93c0
0x00882fdd: mov    BYTE PTR [rip+0x10263d4],0x0        # 0x1418a93b8
0x00882fe4: mov    DWORD PTR [rip+0x10263aa],0x22e        # 0x1418a9398
0x00882fee: lea    r12d,[r13-0x17]
0x00882ff2: lea    esi,[r13-0x16]
0x00882ff6: lea    r14d,[r13-0x15]
0x00882ffa: mov    edi,DWORD PTR [rsp+0x40]
0x00882ffe: dec    edi
0x00883000: lea    rbx,[rip+0x1dcfe9d]        # 0x142652ea4
0x00883007: lea    r15d,[r13-0x18]
0x0088300b: nop    DWORD PTR [rax+rax*1+0x0]
0x00883010: mov    DWORD PTR [rip+0x1dc745d],r15d        # 0x14264a474
0x00883017: mov    DWORD PTR [rip+0x1dc745b],edi        # 0x14264a478
0x0088301d: cmp    DWORD PTR [r11+0x4],0x5
0x00883022: jne    0x140883029
0x00883024: mov    edx,DWORD PTR [rbx+0x24]
0x00883027: jmp    0x14088302c
0x00883029: mov    edx,DWORD PTR [rbx-0xc]
0x0088302c: lea    rcx,[rip+0x1dc73bd]        # 0x14264a3f0
0x00883033: call   0x140adaad0
0x00883038: cmp    DWORD PTR [rip+0x1b4a739],0x0        # 0x1423cd778
0x0088303f: jle    0x140883063
0x00883041: mov    rax,QWORD PTR [rip+0x1b4a728]        # 0x1423cd770
0x00883048: test   BYTE PTR [rax],0x1
0x0088304b: je     0x140883063
0x0088304d: mov    r8b,0x1
0x00883050: xor    edx,edx
0x00883052: lea    rcx,[rip+0x1dc7397]        # 0x14264a3f0
0x00883059: call   0x1400bb190
0x0088305e: mov    r11,QWORD PTR [rsp+0x48]
0x00883063: mov    DWORD PTR [rip+0x1dc740a],r12d        # 0x14264a474
0x0088306a: mov    DWORD PTR [rip+0x1dc7408],edi        # 0x14264a478
0x00883070: cmp    DWORD PTR [r11+0x4],0x5
0x00883075: lea    rdx,[rbx+0x30]
0x00883079: je     0x14088307e
0x0088307b: mov    rdx,rbx
0x0088307e: mov    edx,DWORD PTR [rdx]
0x00883080: lea    rcx,[rip+0x1dc7369]        # 0x14264a3f0
0x00883087: call   0x140adaad0
0x0088308c: cmp    DWORD PTR [rip+0x1b4a6e5],0x0        # 0x1423cd778
0x00883093: jle    0x1408830b7
0x00883095: mov    rax,QWORD PTR [rip+0x1b4a6d4]        # 0x1423cd770
0x0088309c: test   BYTE PTR [rax],0x1
0x0088309f: je     0x1408830b7
0x008830a1: mov    r8b,0x1
0x008830a4: xor    edx,edx
0x008830a6: lea    rcx,[rip+0x1dc7343]        # 0x14264a3f0
0x008830ad: call   0x1400bb190
0x008830b2: mov    r11,QWORD PTR [rsp+0x48]
0x008830b7: mov    DWORD PTR [rip+0x1dc73b7],esi        # 0x14264a474
0x008830bd: mov    DWORD PTR [rip+0x1dc73b5],edi        # 0x14264a478
0x008830c3: cmp    DWORD PTR [r11+0x4],0x5
0x008830c8: jne    0x1408830cf
0x008830ca: mov    edx,DWORD PTR [rbx+0x3c]
0x008830cd: jmp    0x1408830d2
0x008830cf: mov    edx,DWORD PTR [rbx+0xc]
0x008830d2: lea    rcx,[rip+0x1dc7317]        # 0x14264a3f0
0x008830d9: call   0x140adaad0
0x008830de: cmp    DWORD PTR [rip+0x1b4a693],0x0        # 0x1423cd778
0x008830e5: jle    0x140883109
0x008830e7: mov    rax,QWORD PTR [rip+0x1b4a682]        # 0x1423cd770
0x008830ee: test   BYTE PTR [rax],0x1
0x008830f1: je     0x140883109
0x008830f3: mov    r8b,0x1
0x008830f6: xor    edx,edx
0x008830f8: lea    rcx,[rip+0x1dc72f1]        # 0x14264a3f0
0x008830ff: call   0x1400bb190
0x00883104: mov    r11,QWORD PTR [rsp+0x48]
0x00883109: mov    DWORD PTR [rip+0x1dc7364],r14d        # 0x14264a474
0x00883110: mov    DWORD PTR [rip+0x1dc7362],edi        # 0x14264a478
0x00883116: cmp    DWORD PTR [r11+0x4],0x5
0x0088311b: jne    0x140883122
0x0088311d: mov    edx,DWORD PTR [rbx+0x48]
0x00883120: jmp    0x140883125
0x00883122: mov    edx,DWORD PTR [rbx+0x18]
0x00883125: lea    rcx,[rip+0x1dc72c4]        # 0x14264a3f0
0x0088312c: call   0x140adaad0
0x00883131: cmp    DWORD PTR [rip+0x1b4a640],0x0        # 0x1423cd778
0x00883138: jle    0x14088315c
0x0088313a: mov    rax,QWORD PTR [rip+0x1b4a62f]        # 0x1423cd770
0x00883141: test   BYTE PTR [rax],0x1
0x00883144: je     0x14088315c
0x00883146: mov    r8b,0x1
0x00883149: xor    edx,edx
0x0088314b: lea    rcx,[rip+0x1dc729e]        # 0x14264a3f0
0x00883152: call   0x1400bb190
0x00883157: mov    r11,QWORD PTR [rsp+0x48]
0x0088315c: inc    edi
0x0088315e: add    rbx,0x4
0x00883162: lea    rax,[rip+0x1dcfd47]        # 0x142652eb0
0x00883169: cmp    rbx,rax
0x0088316c: jl     0x140883010
0x00883172: lea    ecx,[r13-0x18]
0x00883176: mov    edx,DWORD PTR [rsp+0x50]
0x0088317a: cmp    edx,ecx
0x0088317c: jl     0x1408831c1
0x0088317e: lea    eax,[rcx+0x4]
0x00883181: cmp    edx,eax
0x00883183: jge    0x1408831c1
0x00883185: mov    eax,DWORD PTR [rsp+0x40]
0x00883189: dec    eax
0x0088318b: mov    r8d,DWORD PTR [rsp+0x44]
0x00883190: cmp    r8d,eax
0x00883193: jl     0x1408831c1
0x00883195: add    eax,0x3
0x00883198: cmp    r8d,eax
0x0088319b: jge    0x1408831c1
0x0088319d: mov    DWORD PTR [rip+0x1026219],ecx        # 0x1418a93bc
0x008831a3: mov    eax,DWORD PTR [rsp+0x54]
0x008831a7: add    eax,0xfffffffe
0x008831aa: mov    DWORD PTR [rip+0x1026210],eax        # 0x1418a93c0
0x008831b0: mov    BYTE PTR [rip+0x1026201],0x0        # 0x1418a93b8
0x008831b7: mov    DWORD PTR [rip+0x10261d7],0x22f        # 0x1418a9398
0x008831c1: lea    r12d,[r13-0x13]
0x008831c5: lea    esi,[r13-0x12]
0x008831c9: lea    r14d,[r13-0x11]
0x008831cd: mov    r13d,DWORD PTR [rsp+0x40]
0x008831d2: dec    r13d
0x008831d5: mov    edi,r13d
0x008831d8: lea    rbx,[rip+0x1dcfd25]        # 0x142652f04
0x008831df: mov    r15d,DWORD PTR [rsp+0x60]
0x008831e4: nop    DWORD PTR [rax+0x0]
0x008831e8: nop    DWORD PTR [rax+rax*1+0x0]
0x008831f0: mov    DWORD PTR [rip+0x1dc727d],r15d        # 0x14264a474
0x008831f7: mov    DWORD PTR [rip+0x1dc727b],edi        # 0x14264a478
0x008831fd: cmp    DWORD PTR [r11+0x4],0x6
0x00883202: jne    0x140883209
0x00883204: mov    edx,DWORD PTR [rbx+0x24]
0x00883207: jmp    0x14088320c
0x00883209: mov    edx,DWORD PTR [rbx-0xc]
0x0088320c: lea    rcx,[rip+0x1dc71dd]        # 0x14264a3f0
0x00883213: call   0x140adaad0
0x00883218: cmp    DWORD PTR [rip+0x1b4a559],0x0        # 0x1423cd778
0x0088321f: jle    0x140883243
0x00883221: mov    rax,QWORD PTR [rip+0x1b4a548]        # 0x1423cd770
0x00883228: test   BYTE PTR [rax],0x1
0x0088322b: je     0x140883243
0x0088322d: mov    r8b,0x1
0x00883230: xor    edx,edx
0x00883232: lea    rcx,[rip+0x1dc71b7]        # 0x14264a3f0
0x00883239: call   0x1400bb190
0x0088323e: mov    r11,QWORD PTR [rsp+0x48]
0x00883243: mov    DWORD PTR [rip+0x1dc722a],r12d        # 0x14264a474
0x0088324a: mov    DWORD PTR [rip+0x1dc7228],edi        # 0x14264a478
0x00883250: cmp    DWORD PTR [r11+0x4],0x6
0x00883255: lea    rdx,[rbx+0x30]
0x00883259: je     0x14088325e
0x0088325b: mov    rdx,rbx
0x0088325e: mov    edx,DWORD PTR [rdx]
0x00883260: lea    rcx,[rip+0x1dc7189]        # 0x14264a3f0
0x00883267: call   0x140adaad0
0x0088326c: cmp    DWORD PTR [rip+0x1b4a505],0x0        # 0x1423cd778
0x00883273: jle    0x140883297
0x00883275: mov    rax,QWORD PTR [rip+0x1b4a4f4]        # 0x1423cd770
0x0088327c: test   BYTE PTR [rax],0x1
0x0088327f: je     0x140883297
0x00883281: mov    r8b,0x1
0x00883284: xor    edx,edx
0x00883286: lea    rcx,[rip+0x1dc7163]        # 0x14264a3f0
0x0088328d: call   0x1400bb190
0x00883292: mov    r11,QWORD PTR [rsp+0x48]
0x00883297: mov    DWORD PTR [rip+0x1dc71d7],esi        # 0x14264a474
0x0088329d: mov    DWORD PTR [rip+0x1dc71d5],edi        # 0x14264a478
0x008832a3: cmp    DWORD PTR [r11+0x4],0x6
0x008832a8: jne    0x1408832af
0x008832aa: mov    edx,DWORD PTR [rbx+0x3c]
0x008832ad: jmp    0x1408832b2
0x008832af: mov    edx,DWORD PTR [rbx+0xc]
0x008832b2: lea    rcx,[rip+0x1dc7137]        # 0x14264a3f0
0x008832b9: call   0x140adaad0
0x008832be: cmp    DWORD PTR [rip+0x1b4a4b3],0x0        # 0x1423cd778
0x008832c5: jle    0x1408832e9
0x008832c7: mov    rax,QWORD PTR [rip+0x1b4a4a2]        # 0x1423cd770
0x008832ce: test   BYTE PTR [rax],0x1
0x008832d1: je     0x1408832e9
0x008832d3: mov    r8b,0x1
0x008832d6: xor    edx,edx
0x008832d8: lea    rcx,[rip+0x1dc7111]        # 0x14264a3f0
0x008832df: call   0x1400bb190
0x008832e4: mov    r11,QWORD PTR [rsp+0x48]
0x008832e9: mov    DWORD PTR [rip+0x1dc7184],r14d        # 0x14264a474
0x008832f0: mov    DWORD PTR [rip+0x1dc7182],edi        # 0x14264a478
0x008832f6: cmp    DWORD PTR [r11+0x4],0x6
0x008832fb: jne    0x140883302
0x008832fd: mov    edx,DWORD PTR [rbx+0x48]
0x00883300: jmp    0x140883305
0x00883302: mov    edx,DWORD PTR [rbx+0x18]
0x00883305: lea    rcx,[rip+0x1dc70e4]        # 0x14264a3f0
0x0088330c: call   0x140adaad0
0x00883311: cmp    DWORD PTR [rip+0x1b4a460],0x0        # 0x1423cd778
0x00883318: jle    0x14088333c
0x0088331a: mov    rax,QWORD PTR [rip+0x1b4a44f]        # 0x1423cd770
0x00883321: test   BYTE PTR [rax],0x1
0x00883324: je     0x14088333c
0x00883326: mov    r8b,0x1
0x00883329: xor    edx,edx
0x0088332b: lea    rcx,[rip+0x1dc70be]        # 0x14264a3f0
0x00883332: call   0x1400bb190
0x00883337: mov    r11,QWORD PTR [rsp+0x48]
0x0088333c: inc    edi
0x0088333e: add    rbx,0x4
0x00883342: lea    rax,[rip+0x1dcfbc7]        # 0x142652f10
0x00883349: cmp    rbx,rax
0x0088334c: jl     0x1408831f0
0x00883352: mov    ecx,r15d
0x00883355: mov    edi,DWORD PTR [rsp+0x50]
0x00883359: cmp    edi,r15d
0x0088335c: mov    r15d,DWORD PTR [rsp+0x5c]
0x00883361: jl     0x1408833a8
0x00883363: lea    eax,[rcx+0x4]
0x00883366: cmp    edi,eax
0x00883368: jge    0x1408833a8
0x0088336a: mov    r11d,DWORD PTR [rsp+0x44]
0x0088336f: cmp    r11d,r13d
0x00883372: jl     0x1408833a8
0x00883374: lea    eax,[r13+0x3]
0x00883378: mov    r14,QWORD PTR [rsp+0x48]
0x0088337d: cmp    r11d,eax
0x00883380: jge    0x1408833b3
0x00883382: mov    DWORD PTR [rip+0x1026034],ecx        # 0x1418a93bc
0x00883388: mov    eax,DWORD PTR [rsp+0x54]
0x0088338c: add    eax,0xfffffffe
0x0088338f: mov    DWORD PTR [rip+0x102602b],eax        # 0x1418a93c0
0x00883395: mov    BYTE PTR [rip+0x102601c],0x0        # 0x1418a93b8
0x0088339c: mov    DWORD PTR [rip+0x1025ff2],0x230        # 0x1418a9398
0x008833a6: jmp    0x1408833b3
0x008833a8: mov    r14,QWORD PTR [rsp+0x48]
0x008833ad: jmp    0x1408833b3
0x008833af: mov    edi,DWORD PTR [rsp+0x50]
0x008833b3: lea    r13d,[r15+0x1]
0x008833b7: mov    DWORD PTR [rsp+0x54],r13d
0x008833bc: mov    r8d,DWORD PTR [rsp+0x58]
0x008833c1: lea    r12d,[r8-0x1]
0x008833c5: mov    r10d,DWORD PTR [rsp+0x40]
0x008833ca: add    r10d,0x2
0x008833ce: mov    DWORD PTR [rbp-0x80],r10d
0x008833d2: mov    ecx,DWORD PTR [rsp+0x74]
0x008833d6: dec    ecx
0x008833d8: sub    ecx,r10d
0x008833db: inc    ecx
0x008833dd: mov    eax,0x55555556
0x008833e2: imul   ecx
0x008833e4: mov    r9d,edx
0x008833e7: shr    r9d,0x1f
0x008833eb: add    r9d,edx
0x008833ee: mov    DWORD PTR [rsp+0x5c],r9d
0x008833f3: mov    rcx,QWORD PTR [r14+0x20]
0x008833f7: sub    rcx,QWORD PTR [r14+0x18]
0x008833fb: sar    rcx,0x3
0x008833ff: cmp    ecx,r9d
0x00883402: jle    0x140883408
0x00883404: lea    r12d,[r8-0x3]
0x00883408: mov    ebx,r10d
0x0088340b: mov    DWORD PTR [rsp+0x40],ebx
0x0088340f: mov    eax,DWORD PTR [r14+0x10c]
0x00883416: sub    ecx,r9d
0x00883419: cmp    eax,ecx
0x0088341b: cmovle ecx,eax
0x0088341e: xor    r15d,r15d
0x00883421: mov    eax,r15d
0x00883424: test   ecx,ecx
0x00883426: cmovns eax,ecx
0x00883429: mov    DWORD PTR [rsp+0x74],eax
0x0088342d: movsxd rsi,eax
0x00883430: mov    DWORD PTR [rsp+0x60],esi
0x00883434: add    eax,r9d
0x00883437: mov    DWORD PTR [rsp+0x70],eax
0x0088343b: cmp    esi,eax
0x0088343d: jge    0x140883e77
0x00883443: mov    r8,rsi
0x00883446: mov    QWORD PTR [rsp+0x78],rsi
0x0088344b: movsxd rax,r10d
0x0088344e: mov    QWORD PTR [rsp+0x68],rax
0x00883453: nop    DWORD PTR [rax+0x0]
0x00883457: nop    WORD PTR [rax+rax*1+0x0]
0x00883460: mov    rdx,QWORD PTR [r14+0x18]
0x00883464: mov    rcx,QWORD PTR [r14+0x20]
0x00883468: sub    rcx,rdx
0x0088346b: sar    rcx,0x3
0x0088346f: movsxd rax,esi
0x00883472: cmp    rax,rcx
0x00883475: jae    0x140883e6b
0x0088347b: mov    rcx,QWORD PTR [rdx+r8*8]
0x0088347f: mov    rax,QWORD PTR [rcx]
0x00883482: mov    edx,DWORD PTR [rbp-0x7c]
0x00883485: call   QWORD PTR [rax+0xc8]
0x0088348b: mov    r15d,eax
0x0088348e: mov    DWORD PTR [rip+0x1dc6fe4],0x1010007        # 0x14264a47c
0x00883498: mov    edi,r13d
0x0088349b: cmp    r13d,r12d
0x0088349e: jg     0x140883595
0x008834a4: lea    r14d,[rbx+0x3]
0x008834a8: nop    DWORD PTR [rax+rax*1+0x0]
0x008834b0: mov    esi,ebx
0x008834b2: cmp    ebx,r14d
0x008834b5: jge    0x140883581
0x008834bb: lea    rbx,[rip+0x1dc8ada]        # 0x14264bf9c
0x008834c2: nop    DWORD PTR [rax+0x0]
0x008834c6: data16 nop WORD PTR [rax+rax*1+0x0]
0x008834d0: mov    DWORD PTR [rip+0x1dc6f9e],edi        # 0x14264a474
0x008834d6: mov    DWORD PTR [rip+0x1dc6f9c],esi        # 0x14264a478
0x008834dc: test   r15d,r15d
0x008834df: je     0x14088351c
0x008834e1: cmp    edi,r13d
0x008834e4: jne    0x1408834eb
0x008834e6: mov    edx,DWORD PTR [rbx-0xc]
0x008834e9: jmp    0x14088353c
0x008834eb: lea    eax,[r13+0x1]
0x008834ef: cmp    edi,eax
0x008834f1: jne    0x1408834f7
0x008834f3: mov    edx,DWORD PTR [rbx]
0x008834f5: jmp    0x14088353c
0x008834f7: lea    eax,[r13+0x2]
0x008834fb: cmp    edi,eax
0x008834fd: jne    0x140883503
0x008834ff: mov    edx,DWORD PTR [rbx]
0x00883501: jmp    0x14088353c
0x00883503: lea    eax,[r13+0x3]
0x00883507: cmp    edi,eax
0x00883509: jne    0x14088350f
0x0088350b: mov    edx,DWORD PTR [rbx]
0x0088350d: jmp    0x14088353c
0x0088350f: lea    eax,[r13+0x4]
0x00883513: cmp    edi,eax
0x00883515: jne    0x140883529
0x00883517: mov    edx,DWORD PTR [rbx+0xc]
0x0088351a: jmp    0x14088353c
0x0088351c: cmp    edi,r13d
0x0088351f: jne    0x140883529
0x00883521: mov    edx,DWORD PTR [rbx-0x204]
0x00883527: jmp    0x14088353c
0x00883529: cmp    edi,r12d
0x0088352c: jne    0x140883536
0x0088352e: mov    edx,DWORD PTR [rbx-0x1ec]
0x00883534: jmp    0x14088353c
0x00883536: mov    edx,DWORD PTR [rbx-0x1f8]
0x0088353c: lea    rcx,[rip+0x1dc6ead]        # 0x14264a3f0
0x00883543: call   0x140adaad0
0x00883548: cmp    DWORD PTR [rip+0x1b4a229],0x0        # 0x1423cd778
0x0088354f: jle    0x14088356e
0x00883551: mov    rax,QWORD PTR [rip+0x1b4a218]        # 0x1423cd770
0x00883558: test   BYTE PTR [rax],0x1
0x0088355b: je     0x14088356e
0x0088355d: mov    r8b,0x1
0x00883560: xor    edx,edx
0x00883562: lea    rcx,[rip+0x1dc6e87]        # 0x14264a3f0
0x00883569: call   0x1400bb190
0x0088356e: inc    esi
0x00883570: add    rbx,0x4
0x00883574: cmp    esi,r14d
0x00883577: jl     0x1408834d0
0x0088357d: mov    ebx,DWORD PTR [rsp+0x40]
0x00883581: inc    edi
0x00883583: cmp    edi,r12d
0x00883586: jle    0x1408834b0
0x0088358c: mov    r14,QWORD PTR [rsp+0x48]
0x00883591: mov    esi,DWORD PTR [rsp+0x60]
0x00883595: test   r15d,r15d
0x00883598: je     0x1408835d4
0x0088359a: mov    DWORD PTR [rip+0x1dc6ed3],r13d        # 0x14264a474
0x008835a1: mov    DWORD PTR [rip+0x1dc6ed1],ebx        # 0x14264a478
0x008835a7: mov    BYTE PTR [rsp+0x30],0x0
0x008835ac: mov    DWORD PTR [rsp+0x28],0x3
0x008835b4: mov    DWORD PTR [rsp+0x20],0x5
0x008835bc: mov    r9d,0x2
0x008835c2: mov    r8d,r9d
0x008835c5: mov    edx,r15d
0x008835c8: lea    rcx,[rip+0x1dc6e21]        # 0x14264a3f0
0x008835cf: call   0x140adad70
0x008835d4: mov    rax,QWORD PTR [r14+0x18]
0x008835d8: mov    r15,QWORD PTR [rsp+0x78]
0x008835dd: mov    rcx,QWORD PTR [rax+r15*8]
0x008835e1: mov    ecx,DWORD PTR [rcx+0x8]
0x008835e4: add    ecx,0x7
0x008835e7: add    ecx,r13d
0x008835ea: mov    DWORD PTR [rip+0x1dc6e84],ecx        # 0x14264a474
0x008835f0: inc    ebx
0x008835f2: mov    DWORD PTR [rip+0x1dc6e80],ebx        # 0x14264a478
0x008835f8: mov    edx,esi
0x008835fa: sub    edx,DWORD PTR [rsp+0x74]
0x008835fe: add    edx,0x52
0x00883601: call   0x140c394b0
0x00883606: xorps  xmm0,xmm0
0x00883609: movups XMMWORD PTR [rbp-0x78],xmm0
0x0088360d: mov    QWORD PTR [rbp-0x68],0x0
0x00883615: mov    QWORD PTR [rbp-0x60],0xf
0x0088361d: mov    BYTE PTR [rbp-0x78],0x0
0x00883621: mov    eax,DWORD PTR [r14+0x4]
0x00883625: sub    eax,0x8
0x00883628: lea    rdx,[rbp-0x78]
0x0088362c: cmp    eax,0x1
0x0088362f: mov    rax,QWORD PTR [r14+0x18]
0x00883633: mov    rcx,QWORD PTR [rax+r15*8]
0x00883637: mov    rax,QWORD PTR [rcx]
0x0088363a: jbe    0x140883641
0x0088363c: call   QWORD PTR [rax+0x8]
0x0088363f: jmp    0x140883644
0x00883641: call   QWORD PTR [rax+0x10]
0x00883644: mov    DWORD PTR [rip+0x1dc6e2e],0x1010007        # 0x14264a47c
0x0088364e: mov    rax,QWORD PTR [r14+0x18]
0x00883652: mov    rcx,QWORD PTR [rax+r15*8]
0x00883656: mov    ecx,DWORD PTR [rcx+0x8]
0x00883659: add    ecx,0x9
0x0088365c: add    ecx,r13d
0x0088365f: mov    DWORD PTR [rip+0x1dc6e0f],ecx        # 0x14264a474
0x00883665: mov    DWORD PTR [rip+0x1dc6e0d],ebx        # 0x14264a478
0x0088366b: mov    rax,QWORD PTR [r14+0x18]
0x0088366f: mov    rax,QWORD PTR [rax+r15*8]
0x00883673: mov    ebx,r12d
0x00883676: sub    ebx,DWORD PTR [rax+0x8]
0x00883679: sub    ebx,r13d
0x0088367c: mov    rax,QWORD PTR [rbp-0x68]
0x00883680: movsxd rsi,ebx
0x00883683: cmp    DWORD PTR [r14+0x4],0x0
0x00883688: jne    0x1408836f5
0x0088368a: sub    rsi,0x23
0x0088368e: cmp    rax,rsi
0x00883691: jb     0x14088377d
0x00883697: lea    edi,[rbx-0x22]
0x0088369a: test   edi,edi
0x0088369c: js     0x1408836d1
0x0088369e: movsxd rdx,ebx
0x008836a1: sub    rdx,0x22
0x008836a5: cmp    rdx,rax
0x008836a8: ja     0x1408836c2
0x008836aa: mov    QWORD PTR [rbp-0x68],rdx
0x008836ae: lea    rax,[rbp-0x78]
0x008836b2: cmp    QWORD PTR [rbp-0x60],0xf
0x008836b7: cmova  rax,QWORD PTR [rbp-0x78]
0x008836bc: mov    BYTE PTR [rdx+rax*1],0x0
0x008836c0: jmp    0x1408836d1
0x008836c2: sub    rdx,rax
0x008836c5: xor    r8d,r8d
0x008836c8: lea    rcx,[rbp-0x78]
0x008836cc: call   0x1400e12b0
0x008836d1: cmp    edi,0x3
0x008836d4: jle    0x14088377d
0x008836da: lea    rcx,[rbp-0x78]
0x008836de: cmp    QWORD PTR [rbp-0x60],0xf
0x008836e3: cmova  rcx,QWORD PTR [rbp-0x78]
0x008836e8: movsxd rax,ebx
0x008836eb: mov    BYTE PTR [rax+rcx*1-0x25],0x2e
0x008836f0: lea    eax,[rbx-0x24]
0x008836f3: jmp    0x140883756
0x008836f5: sub    rsi,0xe
0x008836f9: cmp    rax,rsi
0x008836fc: jb     0x14088377d
0x008836fe: lea    edi,[rbx-0xd]
0x00883701: test   edi,edi
0x00883703: js     0x140883738
0x00883705: movsxd rdx,ebx
0x00883708: sub    rdx,0xd
0x0088370c: cmp    rdx,rax
0x0088370f: ja     0x140883729
0x00883711: mov    QWORD PTR [rbp-0x68],rdx
0x00883715: lea    rax,[rbp-0x78]
0x00883719: cmp    QWORD PTR [rbp-0x60],0xf
0x0088371e: cmova  rax,QWORD PTR [rbp-0x78]
0x00883723: mov    BYTE PTR [rax+rdx*1],0x0
0x00883727: jmp    0x140883738
0x00883729: sub    rdx,rax
0x0088372c: xor    r8d,r8d
0x0088372f: lea    rcx,[rbp-0x78]
0x00883733: call   0x1400e12b0
0x00883738: cmp    edi,0x3
0x0088373b: jle    0x14088377d
0x0088373d: lea    rcx,[rbp-0x78]
0x00883741: cmp    QWORD PTR [rbp-0x60],0xf
0x00883746: cmova  rcx,QWORD PTR [rbp-0x78]
0x0088374b: movsxd rax,ebx
0x0088374e: mov    BYTE PTR [rax+rcx*1-0x10],0x2e
0x00883753: lea    eax,[rbx-0xf]
0x00883756: lea    rdx,[rbp-0x78]
0x0088375a: cmp    QWORD PTR [rbp-0x60],0xf
0x0088375f: cmova  rdx,QWORD PTR [rbp-0x78]
0x00883764: movsxd rcx,eax
0x00883767: mov    BYTE PTR [rcx+rdx*1],0x2e
0x0088376b: lea    rax,[rbp-0x78]
0x0088376f: cmp    QWORD PTR [rbp-0x60],0xf
0x00883774: cmova  rax,QWORD PTR [rbp-0x78]
0x00883779: mov    BYTE PTR [rax+rsi*1],0x2e
0x0088377d: xor    r9d,r9d
0x00883780: lea    rdx,[rbp-0x78]
0x00883784: lea    rcx,[rip+0x1dc6c65]        # 0x14264a3f0
0x0088378b: call   0x140ad9960
0x00883790: mov    rax,QWORD PTR [r14+0x18]
0x00883794: mov    rcx,QWORD PTR [rax+r15*8]
0x00883798: mov    rax,QWORD PTR [rcx]
0x0088379b: call   QWORD PTR [rax+0xd8]
0x008837a1: test   rax,rax
0x008837a4: je     0x1408838d1
0x008837aa: xorps  xmm0,xmm0
0x008837ad: movups XMMWORD PTR [rbp-0x30],xmm0
0x008837b1: mov    QWORD PTR [rbp-0x20],0x0
0x008837b9: mov    QWORD PTR [rbp-0x18],0xf
0x008837c1: mov    BYTE PTR [rbp-0x30],0x0
0x008837c5: mov    r8,rax
0x008837c8: lea    rdx,[rbp-0x30]
0x008837cc: mov    rcx,QWORD PTR [rip+0x1b6193d]        # 0x1423e5110
0x008837d3: call   0x141393900
0x008837d8: mov    DWORD PTR [rip+0x1dc6c9a],0x1010003        # 0x14264a47c
0x008837e2: mov    rax,QWORD PTR [r14+0x18]
0x008837e6: mov    rcx,QWORD PTR [rax+r15*8]
0x008837ea: mov    ecx,DWORD PTR [rcx+0x8]
0x008837ed: add    ecx,0x7
0x008837f0: add    ecx,r13d
0x008837f3: mov    DWORD PTR [rip+0x1dc6c7b],ecx        # 0x14264a474
0x008837f9: mov    r14d,DWORD PTR [rsp+0x40]
0x008837fe: lea    eax,[r14+0x2]
0x00883802: mov    DWORD PTR [rip+0x1dc6c70],eax        # 0x14264a478
0x00883808: mov    r15,QWORD PTR [rsp+0x48]
0x0088380d: mov    rax,QWORD PTR [r15+0x18]
0x00883811: mov    rcx,QWORD PTR [rsp+0x78]
0x00883816: mov    rcx,QWORD PTR [rax+rcx*8]
0x0088381a: mov    ebx,r12d
0x0088381d: sub    ebx,DWORD PTR [rcx+0x8]
0x00883820: sub    ebx,r13d
0x00883823: movsxd rsi,ebx
0x00883826: sub    rsi,0x21
0x0088382a: mov    rax,QWORD PTR [rbp-0x20]
0x0088382e: cmp    rax,rsi
0x00883831: jb     0x1408838b2
0x00883833: lea    edi,[rbx-0x20]
0x00883836: test   edi,edi
0x00883838: js     0x14088386d
0x0088383a: movsxd rdx,ebx
0x0088383d: sub    rdx,0x20
0x00883841: cmp    rdx,rax
0x00883844: ja     0x14088385e
0x00883846: mov    QWORD PTR [rbp-0x20],rdx
0x0088384a: lea    rax,[rbp-0x30]
0x0088384e: cmp    QWORD PTR [rbp-0x18],0xf
0x00883853: cmova  rax,QWORD PTR [rbp-0x30]
0x00883858: mov    BYTE PTR [rax+rdx*1],0x0
0x0088385c: jmp    0x14088386d
0x0088385e: sub    rdx,rax
0x00883861: xor    r8d,r8d
0x00883864: lea    rcx,[rbp-0x30]
0x00883868: call   0x1400e12b0
0x0088386d: cmp    edi,0x3
0x00883870: jle    0x1408838b2
0x00883872: lea    rcx,[rbp-0x30]
0x00883876: cmp    QWORD PTR [rbp-0x18],0xf
0x0088387b: cmova  rcx,QWORD PTR [rbp-0x30]
0x00883880: movsxd rax,ebx
0x00883883: mov    BYTE PTR [rax+rcx*1-0x23],0x2e
0x00883888: lea    rdx,[rbp-0x30]
0x0088388c: cmp    QWORD PTR [rbp-0x18],0xf
0x00883891: cmova  rdx,QWORD PTR [rbp-0x30]
0x00883896: lea    eax,[rbx-0x22]
0x00883899: movsxd rcx,eax
0x0088389c: mov    BYTE PTR [rcx+rdx*1],0x2e
0x008838a0: lea    rax,[rbp-0x30]
0x008838a4: cmp    QWORD PTR [rbp-0x18],0xf
0x008838a9: cmova  rax,QWORD PTR [rbp-0x30]
0x008838ae: mov    BYTE PTR [rax+rsi*1],0x2e
0x008838b2: xor    r9d,r9d
0x008838b5: lea    rdx,[rbp-0x30]
0x008838b9: lea    rcx,[rip+0x1dc6b30]        # 0x14264a3f0
0x008838c0: call   0x140ad9960
0x008838c5: nop
0x008838c6: lea    rcx,[rbp-0x30]
0x008838ca: call   0x14006f850
0x008838cf: jmp    0x1408838db
0x008838d1: mov    r14d,DWORD PTR [rsp+0x40]
0x008838d6: mov    r15,QWORD PTR [rsp+0x48]
0x008838db: mov    rax,QWORD PTR [r15+0x18]
0x008838df: mov    rcx,QWORD PTR [rsp+0x78]
0x008838e4: mov    rcx,QWORD PTR [rax+rcx*8]
0x008838e8: mov    rax,QWORD PTR [rcx]
0x008838eb: call   QWORD PTR [rax+0xf8]
0x008838f1: mov    r15d,eax
0x008838f4: test   al,0x1
0x008838f6: je     0x1408839b3
0x008838fc: mov    esi,r14d
0x008838ff: lea    r14,[rip+0x1dd235e]        # 0x142655c64
0x00883906: data16 nop WORD PTR [rax+rax*1+0x0]
0x00883910: lea    r11d,[r12-0x15]
0x00883915: mov    rbx,r14
0x00883918: mov    edi,0x3
0x0088391d: nop    DWORD PTR [rax]
0x00883920: mov    DWORD PTR [rip+0x1dc6b4d],r11d        # 0x14264a474
0x00883927: mov    DWORD PTR [rip+0x1dc6b4b],esi        # 0x14264a478
0x0088392d: xor    r8d,r8d
0x00883930: mov    edx,DWORD PTR [rbx]
0x00883932: lea    rcx,[rip+0x1dc6ab7]        # 0x14264a3f0
0x00883939: call   0x140adb100
0x0088393e: inc    r11d
0x00883941: lea    rbx,[rbx+0xc]
0x00883945: sub    rdi,0x1
0x00883949: jne    0x140883920
0x0088394b: inc    esi
0x0088394d: add    r14,0x4
0x00883951: lea    rax,[rip+0x1dd2318]        # 0x142655c70
0x00883958: cmp    r14,rax
0x0088395b: jl     0x140883910
0x0088395d: lea    eax,[r12-0x15]
0x00883962: mov    edi,DWORD PTR [rsp+0x50]
0x00883966: cmp    edi,eax
0x00883968: mov    r13d,DWORD PTR [rsp+0x54]
0x0088396d: jl     0x1408839b7
0x0088396f: add    eax,0x4
0x00883972: mov    ecx,DWORD PTR [rsp+0x40]
0x00883976: cmp    edi,eax
0x00883978: jge    0x1408839bb
0x0088397a: movsxd rdx,DWORD PTR [rsp+0x44]
0x0088397f: cmp    rdx,QWORD PTR [rsp+0x68]
0x00883984: jl     0x1408839bb
0x00883986: lea    eax,[rcx+0x3]
0x00883989: cmp    edx,eax
0x0088398b: jge    0x1408839bb
0x0088398d: mov    eax,DWORD PTR [rsp+0x58]
0x00883991: add    eax,0x2
0x00883994: mov    DWORD PTR [rip+0x1025a22],eax        # 0x1418a93bc
0x0088399a: mov    DWORD PTR [rip+0x1025a20],ecx        # 0x1418a93c0
0x008839a0: mov    BYTE PTR [rip+0x1025a11],0x0        # 0x1418a93b8
0x008839a7: mov    DWORD PTR [rip+0x10259e7],0x231        # 0x1418a9398
0x008839b1: jmp    0x1408839bb
0x008839b3: mov    edi,DWORD PTR [rsp+0x50]
0x008839b7: mov    ecx,DWORD PTR [rsp+0x40]
0x008839bb: test   r15b,0x2
0x008839bf: je     0x140883a73
0x008839c5: mov    esi,ecx
0x008839c7: lea    r14,[rip+0x1dd22ba]        # 0x142655c88
0x008839ce: xchg   ax,ax
0x008839d0: lea    r11d,[r12-0x12]
0x008839d5: mov    rbx,r14
0x008839d8: mov    edi,0x3
0x008839dd: nop    DWORD PTR [rax]
0x008839e0: mov    DWORD PTR [rip+0x1dc6a8d],r11d        # 0x14264a474
0x008839e7: mov    DWORD PTR [rip+0x1dc6a8b],esi        # 0x14264a478
0x008839ed: xor    r8d,r8d
0x008839f0: mov    edx,DWORD PTR [rbx]
0x008839f2: lea    rcx,[rip+0x1dc69f7]        # 0x14264a3f0
0x008839f9: call   0x140adb100
0x008839fe: inc    r11d
0x00883a01: lea    rbx,[rbx+0xc]
0x00883a05: sub    rdi,0x1
0x00883a09: jne    0x1408839e0
0x00883a0b: inc    esi
0x00883a0d: add    r14,0x4
0x00883a11: lea    rax,[rip+0x1dd227c]        # 0x142655c94
0x00883a18: cmp    r14,rax
0x00883a1b: jl     0x1408839d0
0x00883a1d: lea    eax,[r12-0x12]
0x00883a22: mov    edi,DWORD PTR [rsp+0x50]
0x00883a26: cmp    edi,eax
0x00883a28: mov    r13d,DWORD PTR [rsp+0x54]
0x00883a2d: jl     0x140883a73
0x00883a2f: add    eax,0x4
0x00883a32: mov    ecx,DWORD PTR [rsp+0x40]
0x00883a36: cmp    edi,eax
0x00883a38: jge    0x140883a77
0x00883a3a: movsxd rdx,DWORD PTR [rsp+0x44]
0x00883a3f: cmp    rdx,QWORD PTR [rsp+0x68]
0x00883a44: jl     0x140883a77
0x00883a46: lea    eax,[rcx+0x3]
0x00883a49: cmp    edx,eax
0x00883a4b: jge    0x140883a77
0x00883a4d: mov    eax,DWORD PTR [rsp+0x58]
0x00883a51: add    eax,0x2
0x00883a54: mov    DWORD PTR [rip+0x1025962],eax        # 0x1418a93bc
0x00883a5a: mov    DWORD PTR [rip+0x1025960],ecx        # 0x1418a93c0
0x00883a60: mov    BYTE PTR [rip+0x1025951],0x0        # 0x1418a93b8
0x00883a67: mov    DWORD PTR [rip+0x1025927],0x232        # 0x1418a9398
0x00883a71: jmp    0x140883a77
0x00883a73: mov    ecx,DWORD PTR [rsp+0x40]
0x00883a77: test   r15b,0x4
0x00883a7b: je     0x140883b33
0x00883a81: mov    esi,ecx
0x00883a83: lea    r14,[rip+0x1dd2222]        # 0x142655cac
0x00883a8a: nop    WORD PTR [rax+rax*1+0x0]
0x00883a90: lea    r11d,[r12-0xf]
0x00883a95: mov    rbx,r14
0x00883a98: mov    edi,0x3
0x00883a9d: nop    DWORD PTR [rax]
0x00883aa0: mov    DWORD PTR [rip+0x1dc69cd],r11d        # 0x14264a474
0x00883aa7: mov    DWORD PTR [rip+0x1dc69cb],esi        # 0x14264a478
0x00883aad: xor    r8d,r8d
0x00883ab0: mov    edx,DWORD PTR [rbx]
0x00883ab2: lea    rcx,[rip+0x1dc6937]        # 0x14264a3f0
0x00883ab9: call   0x140adb100
0x00883abe: inc    r11d
0x00883ac1: lea    rbx,[rbx+0xc]
0x00883ac5: sub    rdi,0x1
0x00883ac9: jne    0x140883aa0
0x00883acb: inc    esi
0x00883acd: add    r14,0x4
0x00883ad1: lea    rax,[rip+0x1dd21e0]        # 0x142655cb8
0x00883ad8: cmp    r14,rax
0x00883adb: jl     0x140883a90
0x00883add: lea    eax,[r12-0xf]
0x00883ae2: mov    edi,DWORD PTR [rsp+0x50]
0x00883ae6: cmp    edi,eax
0x00883ae8: mov    r13d,DWORD PTR [rsp+0x54]
0x00883aed: jl     0x140883b33
0x00883aef: add    eax,0x4
0x00883af2: mov    ecx,DWORD PTR [rsp+0x40]
0x00883af6: cmp    edi,eax
0x00883af8: jge    0x140883b37
0x00883afa: movsxd rdx,DWORD PTR [rsp+0x44]
0x00883aff: cmp    rdx,QWORD PTR [rsp+0x68]
0x00883b04: jl     0x140883b37
0x00883b06: lea    eax,[rcx+0x3]
0x00883b09: cmp    edx,eax
0x00883b0b: jge    0x140883b37
0x00883b0d: mov    eax,DWORD PTR [rsp+0x58]
0x00883b11: add    eax,0x2
0x00883b14: mov    DWORD PTR [rip+0x10258a2],eax        # 0x1418a93bc
0x00883b1a: mov    DWORD PTR [rip+0x10258a0],ecx        # 0x1418a93c0
0x00883b20: mov    BYTE PTR [rip+0x1025891],0x0        # 0x1418a93b8
0x00883b27: mov    DWORD PTR [rip+0x1025867],0x233        # 0x1418a9398
0x00883b31: jmp    0x140883b37
0x00883b33: mov    ecx,DWORD PTR [rsp+0x40]
0x00883b37: test   r15b,0x8
0x00883b3b: je     0x140883bf3
0x00883b41: mov    esi,ecx
0x00883b43: lea    r14,[rip+0x1dd2186]        # 0x142655cd0
0x00883b4a: nop    WORD PTR [rax+rax*1+0x0]
0x00883b50: lea    r11d,[r12-0xc]
0x00883b55: mov    rbx,r14
0x00883b58: mov    edi,0x3
0x00883b5d: nop    DWORD PTR [rax]
0x00883b60: mov    DWORD PTR [rip+0x1dc690d],r11d        # 0x14264a474
0x00883b67: mov    DWORD PTR [rip+0x1dc690b],esi        # 0x14264a478
0x00883b6d: xor    r8d,r8d
0x00883b70: mov    edx,DWORD PTR [rbx]
0x00883b72: lea    rcx,[rip+0x1dc6877]        # 0x14264a3f0
0x00883b79: call   0x140adb100
0x00883b7e: inc    r11d
0x00883b81: lea    rbx,[rbx+0xc]
0x00883b85: sub    rdi,0x1
0x00883b89: jne    0x140883b60
0x00883b8b: inc    esi
0x00883b8d: add    r14,0x4
0x00883b91: lea    rax,[rip+0x1dd2144]        # 0x142655cdc
0x00883b98: cmp    r14,rax
0x00883b9b: jl     0x140883b50
0x00883b9d: lea    eax,[r12-0xc]
0x00883ba2: mov    edi,DWORD PTR [rsp+0x50]
0x00883ba6: cmp    edi,eax
0x00883ba8: mov    r13d,DWORD PTR [rsp+0x54]
0x00883bad: jl     0x140883bf3
0x00883baf: add    eax,0x4
0x00883bb2: mov    ecx,DWORD PTR [rsp+0x40]
0x00883bb6: cmp    edi,eax
0x00883bb8: jge    0x140883bf7
0x00883bba: movsxd rdx,DWORD PTR [rsp+0x44]
0x00883bbf: cmp    rdx,QWORD PTR [rsp+0x68]
0x00883bc4: jl     0x140883bf7
0x00883bc6: lea    eax,[rcx+0x3]
0x00883bc9: cmp    edx,eax
0x00883bcb: jge    0x140883bf7
0x00883bcd: mov    eax,DWORD PTR [rsp+0x58]
0x00883bd1: add    eax,0x2
0x00883bd4: mov    DWORD PTR [rip+0x10257e2],eax        # 0x1418a93bc
0x00883bda: mov    DWORD PTR [rip+0x10257e0],ecx        # 0x1418a93c0
0x00883be0: mov    BYTE PTR [rip+0x10257d1],0x0        # 0x1418a93b8
0x00883be7: mov    DWORD PTR [rip+0x10257a7],0x234        # 0x1418a9398
0x00883bf1: jmp    0x140883bf7
0x00883bf3: mov    ecx,DWORD PTR [rsp+0x40]
0x00883bf7: test   r15b,0x10
0x00883bfb: je     0x140883cb3
0x00883c01: mov    esi,ecx
0x00883c03: lea    r14,[rip+0x1dd20ea]        # 0x142655cf4
0x00883c0a: nop    WORD PTR [rax+rax*1+0x0]
0x00883c10: lea    r11d,[r12-0x9]
0x00883c15: mov    rbx,r14
0x00883c18: mov    edi,0x3
0x00883c1d: nop    DWORD PTR [rax]
0x00883c20: mov    DWORD PTR [rip+0x1dc684d],r11d        # 0x14264a474
0x00883c27: mov    DWORD PTR [rip+0x1dc684b],esi        # 0x14264a478
0x00883c2d: xor    r8d,r8d
0x00883c30: mov    edx,DWORD PTR [rbx]
0x00883c32: lea    rcx,[rip+0x1dc67b7]        # 0x14264a3f0
0x00883c39: call   0x140adb100
0x00883c3e: inc    r11d
0x00883c41: lea    rbx,[rbx+0xc]
0x00883c45: sub    rdi,0x1
0x00883c49: jne    0x140883c20
0x00883c4b: inc    esi
0x00883c4d: add    r14,0x4
0x00883c51: lea    rax,[rip+0x1dd20a8]        # 0x142655d00
0x00883c58: cmp    r14,rax
0x00883c5b: jl     0x140883c10
0x00883c5d: lea    eax,[r12-0x9]
0x00883c62: mov    edi,DWORD PTR [rsp+0x50]
0x00883c66: cmp    edi,eax
0x00883c68: mov    r13d,DWORD PTR [rsp+0x54]
0x00883c6d: jl     0x140883cb3
0x00883c6f: add    eax,0x4
0x00883c72: mov    ecx,DWORD PTR [rsp+0x40]
0x00883c76: cmp    edi,eax
0x00883c78: jge    0x140883cb7
0x00883c7a: movsxd rdx,DWORD PTR [rsp+0x44]
0x00883c7f: cmp    rdx,QWORD PTR [rsp+0x68]
0x00883c84: jl     0x140883cb7
0x00883c86: lea    eax,[rcx+0x3]
0x00883c89: cmp    edx,eax
0x00883c8b: jge    0x140883cb7
0x00883c8d: mov    eax,DWORD PTR [rsp+0x58]
0x00883c91: add    eax,0x2
0x00883c94: mov    DWORD PTR [rip+0x1025722],eax        # 0x1418a93bc
0x00883c9a: mov    DWORD PTR [rip+0x1025720],ecx        # 0x1418a93c0
0x00883ca0: mov    BYTE PTR [rip+0x1025711],0x0        # 0x1418a93b8
0x00883ca7: mov    DWORD PTR [rip+0x10256e7],0x235        # 0x1418a9398
0x00883cb1: jmp    0x140883cb7
0x00883cb3: mov    ecx,DWORD PTR [rsp+0x40]
0x00883cb7: test   r15b,0x20
0x00883cbb: je     0x140883d73
0x00883cc1: mov    esi,ecx
0x00883cc3: lea    r14,[rip+0x1dd204e]        # 0x142655d18
0x00883cca: nop    WORD PTR [rax+rax*1+0x0]
0x00883cd0: lea    r11d,[r12-0x6]
0x00883cd5: mov    rbx,r14
0x00883cd8: mov    edi,0x3
0x00883cdd: nop    DWORD PTR [rax]
0x00883ce0: mov    DWORD PTR [rip+0x1dc678d],r11d        # 0x14264a474
0x00883ce7: mov    DWORD PTR [rip+0x1dc678b],esi        # 0x14264a478
0x00883ced: xor    r8d,r8d
0x00883cf0: mov    edx,DWORD PTR [rbx]
0x00883cf2: lea    rcx,[rip+0x1dc66f7]        # 0x14264a3f0
0x00883cf9: call   0x140adb100
0x00883cfe: inc    r11d
0x00883d01: lea    rbx,[rbx+0xc]
0x00883d05: sub    rdi,0x1
0x00883d09: jne    0x140883ce0
0x00883d0b: inc    esi
0x00883d0d: add    r14,0x4
0x00883d11: lea    rax,[rip+0x1dd200c]        # 0x142655d24
0x00883d18: cmp    r14,rax
0x00883d1b: jl     0x140883cd0
0x00883d1d: lea    eax,[r12-0x6]
0x00883d22: mov    edi,DWORD PTR [rsp+0x50]
0x00883d26: cmp    edi,eax
0x00883d28: mov    r13d,DWORD PTR [rsp+0x54]
0x00883d2d: jl     0x140883d73
0x00883d2f: add    eax,0x4
0x00883d32: mov    ecx,DWORD PTR [rsp+0x40]
0x00883d36: cmp    edi,eax
0x00883d38: jge    0x140883d77
0x00883d3a: movsxd rdx,DWORD PTR [rsp+0x44]
0x00883d3f: cmp    rdx,QWORD PTR [rsp+0x68]
0x00883d44: jl     0x140883d77
0x00883d46: lea    eax,[rcx+0x3]
0x00883d49: cmp    edx,eax
0x00883d4b: jge    0x140883d77
0x00883d4d: mov    eax,DWORD PTR [rsp+0x58]
0x00883d51: add    eax,0x2
0x00883d54: mov    DWORD PTR [rip+0x1025662],eax        # 0x1418a93bc
0x00883d5a: mov    DWORD PTR [rip+0x1025660],ecx        # 0x1418a93c0
0x00883d60: mov    BYTE PTR [rip+0x1025651],0x0        # 0x1418a93b8
0x00883d67: mov    DWORD PTR [rip+0x1025627],0x236        # 0x1418a9398
0x00883d71: jmp    0x140883d77
0x00883d73: mov    ecx,DWORD PTR [rsp+0x40]
0x00883d77: test   r15b,0x40
0x00883d7b: je     0x140883e2b
0x00883d81: mov    esi,ecx
0x00883d83: lea    r14,[rip+0x1dd1fb2]        # 0x142655d3c
0x00883d8a: lea    r15d,[r12-0x3]
0x00883d8f: nop
0x00883d90: mov    r11d,r15d
0x00883d93: mov    rbx,r14
0x00883d96: mov    edi,0x3
0x00883d9b: nop    DWORD PTR [rax+rax*1+0x0]
0x00883da0: mov    DWORD PTR [rip+0x1dc66cd],r11d        # 0x14264a474
0x00883da7: mov    DWORD PTR [rip+0x1dc66cb],esi        # 0x14264a478
0x00883dad: xor    r8d,r8d
0x00883db0: mov    edx,DWORD PTR [rbx]
0x00883db2: lea    rcx,[rip+0x1dc6637]        # 0x14264a3f0
0x00883db9: call   0x140adb100
0x00883dbe: inc    r11d
0x00883dc1: lea    rbx,[rbx+0xc]
0x00883dc5: sub    rdi,0x1
0x00883dc9: jne    0x140883da0
0x00883dcb: inc    esi
0x00883dcd: add    r14,0x4
0x00883dd1: lea    rax,[rip+0x1dd1f70]        # 0x142655d48
0x00883dd8: cmp    r14,rax
0x00883ddb: jl     0x140883d90
0x00883ddd: mov    edi,DWORD PTR [rsp+0x50]
0x00883de1: cmp    edi,r15d
0x00883de4: jl     0x140883e2b
0x00883de6: lea    eax,[r15+0x4]
0x00883dea: mov    ebx,DWORD PTR [rsp+0x40]
0x00883dee: cmp    edi,eax
0x00883df0: jge    0x140883e2f
0x00883df2: movsxd rcx,DWORD PTR [rsp+0x44]
0x00883df7: cmp    rcx,QWORD PTR [rsp+0x68]
0x00883dfc: jl     0x140883e2f
0x00883dfe: lea    eax,[rbx+0x3]
0x00883e01: cmp    ecx,eax
0x00883e03: jge    0x140883e2f
0x00883e05: mov    eax,DWORD PTR [rsp+0x58]
0x00883e09: add    eax,0x2
0x00883e0c: mov    DWORD PTR [rip+0x10255aa],eax        # 0x1418a93bc
0x00883e12: mov    DWORD PTR [rip+0x10255a8],ebx        # 0x1418a93c0
0x00883e18: mov    BYTE PTR [rip+0x1025599],0x0        # 0x1418a93b8
0x00883e1f: mov    DWORD PTR [rip+0x102556f],0x237        # 0x1418a9398
0x00883e29: jmp    0x140883e2f
0x00883e2b: mov    ebx,DWORD PTR [rsp+0x40]
0x00883e2f: add    ebx,0x3
0x00883e32: mov    DWORD PTR [rsp+0x40],ebx
0x00883e36: add    QWORD PTR [rsp+0x68],0x3
0x00883e3c: lea    rcx,[rbp-0x78]
0x00883e40: call   0x14006f850
0x00883e45: mov    esi,DWORD PTR [rsp+0x60]
0x00883e49: inc    esi
0x00883e4b: mov    DWORD PTR [rsp+0x60],esi
0x00883e4f: mov    r8,QWORD PTR [rsp+0x78]
0x00883e54: inc    r8
0x00883e57: mov    QWORD PTR [rsp+0x78],r8
0x00883e5c: cmp    esi,DWORD PTR [rsp+0x70]
0x00883e60: mov    r14,QWORD PTR [rsp+0x48]
0x00883e65: jl     0x140883460
0x00883e6b: mov    r9d,DWORD PTR [rsp+0x5c]
0x00883e70: mov    r10d,DWORD PTR [rbp-0x80]
0x00883e74: xor    r15d,r15d
0x00883e77: mov    rcx,QWORD PTR [r14+0x20]
0x00883e7b: sub    rcx,QWORD PTR [r14+0x18]
0x00883e7f: sar    rcx,0x3
0x00883e83: cmp    ecx,r9d
0x00883e86: jle    0x140883eec
0x00883e88: mov    QWORD PTR [rbp-0x18],0x0
0x00883e90: mov    eax,DWORD PTR [r14+0x10c]
0x00883e97: mov    DWORD PTR [rbp-0x30],eax
0x00883e9a: mov    DWORD PTR [rbp-0x2c],r15d
0x00883e9e: lea    eax,[rcx-0x1]
0x00883ea1: mov    DWORD PTR [rbp-0x28],eax
0x00883ea4: lea    eax,[r10+0x1]
0x00883ea8: mov    DWORD PTR [rbp-0x20],eax
0x00883eab: lea    ecx,[r10-0x2]
0x00883eaf: lea    ecx,[rcx+r9*2]
0x00883eb3: add    ecx,r9d
0x00883eb6: mov    DWORD PTR [rbp-0x1c],ecx
0x00883eb9: mov    DWORD PTR [rbp-0x24],r9d
0x00883ebd: lea    rcx,[rbp-0x30]
0x00883ec1: call   0x1400bb3b0
0x00883ec6: lea    r9d,[r12+0x1]
0x00883ecb: mov    DWORD PTR [rsp+0x28],r15d
0x00883ed0: movzx  eax,BYTE PTR [r14+0x108]
0x00883ed8: mov    BYTE PTR [rsp+0x20],al
0x00883edc: mov    r8d,DWORD PTR [rsp+0x44]
0x00883ee1: mov    edx,edi
0x00883ee3: lea    rcx,[rbp-0x30]
0x00883ee7: call   0x14140f4d0
0x00883eec: mov    rcx,QWORD PTR [rbp-0x10]
0x00883ef0: xor    rcx,rsp
0x00883ef3: call   0x141539660
0x00883ef8: add    rsp,0x108
0x00883eff: pop    r15
0x00883f01: pop    r14
0x00883f03: pop    r13
0x00883f05: pop    r12
0x00883f07: pop    rdi
0x00883f08: pop    rsi
0x00883f09: pop    rbx
0x00883f0a: pop    rbp
0x00883f0b: ret
0x00883f0c: call   0x140065890
0x00883f11: nop
0x00883f12: xchg   ax,ax
