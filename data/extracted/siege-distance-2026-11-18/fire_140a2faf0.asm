0x140a2faf0: mov    QWORD PTR [rsp+0x18],rbx
0x140a2faf5: push   rbp
0x140a2faf6: push   rsi
0x140a2faf7: push   rdi
0x140a2faf8: push   r12
0x140a2fafa: push   r13
0x140a2fafc: push   r14
0x140a2fafe: push   r15
0x140a2fb00: lea    rbp,[rsp-0x50]
0x140a2fb05: sub    rsp,0x150
0x140a2fb0c: mov    rax,QWORD PTR [rip+0xe8e52d]        # 0x1418be040
0x140a2fb13: xor    rax,rsp
0x140a2fb16: mov    QWORD PTR [rbp+0x40],rax
0x140a2fb1a: mov    QWORD PTR [rbp-0x80],rdx
0x140a2fb1e: mov    r13,rcx
0x140a2fb21: mov    rdi,QWORD PTR [rcx+0x4d8]
0x140a2fb28: mov    ecx,0x92
0x140a2fb2d: mov    r14d,0xffff8ad0
0x140a2fb33: cmp    WORD PTR [r13+0xc0],r14w
0x140a2fb3b: jne    0x140a2fb52
0x140a2fb3d: mov    eax,DWORD PTR [rdi+0x2c]
0x140a2fb40: and    eax,0xfffffff3
0x140a2fb43: mov    DWORD PTR [rdi+0x2c],eax
0x140a2fb46: cmp    WORD PTR [rdi+0x14],cx
0x140a2fb4a: je     0x140a2fb52
0x140a2fb4c: and    eax,0xffffffdf
0x140a2fb4f: mov    DWORD PTR [rdi+0x2c],eax
0x140a2fb52: mov    eax,DWORD PTR [rdi+0x2c]
0x140a2fb55: test   al,0x4
0x140a2fb57: jne    0x140a3097a
0x140a2fb5d: test   al,0x8
0x140a2fb5f: jne    0x140a3097a
0x140a2fb65: test   al,0x20
0x140a2fb67: je     0x140a2fb73
0x140a2fb69: cmp    WORD PTR [rdi+0x14],cx
0x140a2fb6d: jne    0x140a3097a
0x140a2fb73: mov    rbx,QWORD PTR [rdi+0xb0]
0x140a2fb7a: mov    rdi,QWORD PTR [rdi+0xb8]
0x140a2fb81: xor    r15d,r15d
0x140a2fb84: cmp    rbx,rdi
0x140a2fb87: jae    0x140a2fbab
0x140a2fb89: mov    rcx,QWORD PTR [rbx]
0x140a2fb8c: mov    rax,QWORD PTR [rcx]
0x140a2fb8f: call   QWORD PTR [rax+0x10]
0x140a2fb92: cmp    eax,0x24
0x140a2fb95: je     0x140a2fb9d
0x140a2fb97: add    rbx,0x8
0x140a2fb9b: jmp    0x140a2fb81
0x140a2fb9d: mov    rcx,QWORD PTR [rbx]
0x140a2fba0: mov    rax,QWORD PTR [rcx]
0x140a2fba3: call   QWORD PTR [rax+0x30]
0x140a2fba6: mov    rsi,rax
0x140a2fba9: jmp    0x140a2fbae
0x140a2fbab: mov    rsi,r15
0x140a2fbae: test   rsi,rsi
0x140a2fbb1: jne    0x140a2fc5d
0x140a2fbb7: xorps  xmm0,xmm0
0x140a2fbba: movups XMMWORD PTR [rbp-0x38],xmm0
0x140a2fbbe: mov    QWORD PTR [rbp-0x28],r15
0x140a2fbc2: mov    QWORD PTR [rbp-0x20],0xf
0x140a2fbca: mov    BYTE PTR [rbp-0x38],r15b
0x140a2fbce: movups XMMWORD PTR [rbp-0x18],xmm0
0x140a2fbd2: mov    QWORD PTR [rbp-0x8],r15
0x140a2fbd6: mov    QWORD PTR [rbp+0x0],0xf
0x140a2fbde: mov    BYTE PTR [rbp-0x18],r15b
0x140a2fbe2: movdqa XMMWORD PTR [rbp+0x10],xmm0
0x140a2fbe7: mov    QWORD PTR [rbp+0x20],r15
0x140a2fbeb: mov    QWORD PTR [rbp-0x54],r15
0x140a2fbef: mov    QWORD PTR [rbp-0x4c],r15
0x140a2fbf3: mov    DWORD PTR [rbp-0x44],r15d
0x140a2fbf7: mov    eax,0xffffffff
0x140a2fbfc: mov    QWORD PTR [rbp+0x8],0xffffffffffffffff
0x140a2fc04: mov    DWORD PTR [rbp+0x28],eax
0x140a2fc07: mov    WORD PTR [rbp+0x2c],ax
0x140a2fc0b: mov    DWORD PTR [rbp+0x30],eax
0x140a2fc0e: mov    DWORD PTR [rbp+0x34],0x8ad08ad0
0x140a2fc15: mov    WORD PTR [rbp+0x38],r14w
0x140a2fc1a: mov    eax,0x20
0x140a2fc1f: mov    WORD PTR [rbp-0x60],ax
0x140a2fc23: lea    rax,[rbp-0x60]
0x140a2fc27: mov    QWORD PTR [rsp+0x20],rax
0x140a2fc2c: xor    r9d,r9d
0x140a2fc2f: xor    r8d,r8d
0x140a2fc32: mov    dl,0x1
0x140a2fc34: mov    rcx,r13
0x140a2fc37: call   0x14133d990
0x140a2fc3c: nop
0x140a2fc3d: lea    rcx,[rbp+0x10]
0x140a2fc41: call   0x140070d80
0x140a2fc46: lea    rcx,[rbp-0x18]
0x140a2fc4a: call   0x140070e80
0x140a2fc4f: lea    rcx,[rbp-0x38]
0x140a2fc53: call   0x140070e80
0x140a2fc58: jmp    0x140a3097a
0x140a2fc5d: mov    rax,QWORD PTR [rsi]
0x140a2fc60: mov    rcx,rsi
0x140a2fc63: call   QWORD PTR [rax+0xd0]
0x140a2fc69: cmp    eax,0x16
0x140a2fc6c: je     0x140a2fd18
0x140a2fc72: xorps  xmm0,xmm0
0x140a2fc75: movups XMMWORD PTR [rbp-0x38],xmm0
0x140a2fc79: mov    QWORD PTR [rbp-0x28],r15
0x140a2fc7d: mov    QWORD PTR [rbp-0x20],0xf
0x140a2fc85: mov    BYTE PTR [rbp-0x38],r15b
0x140a2fc89: movups XMMWORD PTR [rbp-0x18],xmm0
0x140a2fc8d: mov    QWORD PTR [rbp-0x8],r15
0x140a2fc91: mov    QWORD PTR [rbp+0x0],0xf
0x140a2fc99: mov    BYTE PTR [rbp-0x18],r15b
0x140a2fc9d: movdqa XMMWORD PTR [rbp+0x10],xmm0
0x140a2fca2: mov    QWORD PTR [rbp+0x20],r15
0x140a2fca6: mov    QWORD PTR [rbp-0x54],r15
0x140a2fcaa: mov    QWORD PTR [rbp-0x4c],r15
0x140a2fcae: mov    DWORD PTR [rbp-0x44],r15d
0x140a2fcb2: mov    eax,0xffffffff
0x140a2fcb7: mov    QWORD PTR [rbp+0x8],0xffffffffffffffff
0x140a2fcbf: mov    DWORD PTR [rbp+0x28],eax
0x140a2fcc2: mov    WORD PTR [rbp+0x2c],ax
0x140a2fcc6: mov    DWORD PTR [rbp+0x30],eax
0x140a2fcc9: mov    DWORD PTR [rbp+0x34],0x8ad08ad0
0x140a2fcd0: mov    WORD PTR [rbp+0x38],r14w
0x140a2fcd5: mov    eax,0x21
0x140a2fcda: mov    WORD PTR [rbp-0x60],ax
0x140a2fcde: lea    rax,[rbp-0x60]
0x140a2fce2: mov    QWORD PTR [rsp+0x20],rax
0x140a2fce7: xor    r9d,r9d
0x140a2fcea: xor    r8d,r8d
0x140a2fced: mov    dl,0x1
0x140a2fcef: mov    rcx,r13
0x140a2fcf2: call   0x14133d990
0x140a2fcf7: nop
0x140a2fcf8: lea    rcx,[rbp+0x10]
0x140a2fcfc: call   0x140070d80
0x140a2fd01: lea    rcx,[rbp-0x18]
0x140a2fd05: call   0x140070e80
0x140a2fd0a: lea    rcx,[rbp-0x38]
0x140a2fd0e: call   0x140070e80
0x140a2fd13: jmp    0x140a3097a
0x140a2fd18: cmp    WORD PTR [rsi+0x148],r15w
0x140a2fd20: je     0x140a2fdcc
0x140a2fd26: xorps  xmm0,xmm0
0x140a2fd29: movups XMMWORD PTR [rbp-0x38],xmm0
0x140a2fd2d: mov    QWORD PTR [rbp-0x28],r15
0x140a2fd31: mov    QWORD PTR [rbp-0x20],0xf
0x140a2fd39: mov    BYTE PTR [rbp-0x38],r15b
0x140a2fd3d: movups XMMWORD PTR [rbp-0x18],xmm0
0x140a2fd41: mov    QWORD PTR [rbp-0x8],r15
0x140a2fd45: mov    QWORD PTR [rbp+0x0],0xf
0x140a2fd4d: mov    BYTE PTR [rbp-0x18],r15b
0x140a2fd51: movdqa XMMWORD PTR [rbp+0x10],xmm0
0x140a2fd56: mov    QWORD PTR [rbp+0x20],r15
0x140a2fd5a: mov    QWORD PTR [rbp-0x54],r15
0x140a2fd5e: mov    QWORD PTR [rbp-0x4c],r15
0x140a2fd62: mov    DWORD PTR [rbp-0x44],r15d
0x140a2fd66: mov    eax,0xffffffff
0x140a2fd6b: mov    QWORD PTR [rbp+0x8],0xffffffffffffffff
0x140a2fd73: mov    DWORD PTR [rbp+0x28],eax
0x140a2fd76: mov    WORD PTR [rbp+0x2c],ax
0x140a2fd7a: mov    DWORD PTR [rbp+0x30],eax
0x140a2fd7d: mov    DWORD PTR [rbp+0x34],0x8ad08ad0
0x140a2fd84: mov    WORD PTR [rbp+0x38],r14w
0x140a2fd89: mov    eax,0x21
0x140a2fd8e: mov    WORD PTR [rbp-0x60],ax
0x140a2fd92: lea    rax,[rbp-0x60]
0x140a2fd96: mov    QWORD PTR [rsp+0x20],rax
0x140a2fd9b: xor    r9d,r9d
0x140a2fd9e: xor    r8d,r8d
0x140a2fda1: mov    dl,0x1
0x140a2fda3: mov    rcx,r13
0x140a2fda6: call   0x14133d990
0x140a2fdab: nop
0x140a2fdac: lea    rcx,[rbp+0x10]
0x140a2fdb0: call   0x140070d80
0x140a2fdb5: lea    rcx,[rbp-0x18]
0x140a2fdb9: call   0x140070e80
0x140a2fdbe: lea    rcx,[rbp-0x38]
0x140a2fdc2: call   0x140070e80
0x140a2fdc7: jmp    0x140a3097a
0x140a2fdcc: mov    rax,QWORD PTR [rsi+0x130]
0x140a2fdd3: sub    rax,QWORD PTR [rsi+0x128]
0x140a2fdda: sar    rax,0x3
0x140a2fdde: cmp    rax,0x3
0x140a2fde2: ja     0x140a2fed2
0x140a2fde8: mov    QWORD PTR [rsp+0x20],r15
0x140a2fded: xor    r9d,r9d
0x140a2fdf0: xor    r8d,r8d
0x140a2fdf3: mov    dl,0x1
0x140a2fdf5: mov    rcx,r13
0x140a2fdf8: call   0x14133d990
0x140a2fdfd: cmp    BYTE PTR [rsi+0x14c],0x1
0x140a2fe04: jl     0x140a3097a
0x140a2fe0a: cmp    QWORD PTR [r13+0x4d8],r15
0x140a2fe11: jne    0x140a3097a
0x140a2fe17: mov    rax,QWORD PTR [rsi+0x60]
0x140a2fe1b: sub    rax,QWORD PTR [rsi+0x58]
0x140a2fe1f: test   rax,0xfffffffffffffff8
0x140a2fe25: jne    0x140a3097a
0x140a2fe2b: mov    rax,QWORD PTR [rsi]
0x140a2fe2e: mov    rcx,rsi
0x140a2fe31: call   QWORD PTR [rax+0x258]
0x140a2fe37: test   al,al
0x140a2fe39: jne    0x140a3097a
0x140a2fe3f: mov    ecx,0x148
0x140a2fe44: call   0x1415530e0
0x140a2fe49: mov    QWORD PTR [rbp-0x70],rax
0x140a2fe4d: xor    edx,edx
0x140a2fe4f: mov    rcx,rax
0x140a2fe52: call   0x140d19db0
0x140a2fe57: mov    rbx,rax
0x140a2fe5a: mov    WORD PTR [rax+0x14],0x87
0x140a2fe60: lea    rdx,[rax+0x20]
0x140a2fe64: lea    r9,[rax+0x1e]
0x140a2fe68: lea    r8,[rax+0x1c]
0x140a2fe6c: movzx  ecx,BYTE PTR [rsi+0x14a]
0x140a2fe73: mov    BYTE PTR [rsp+0x28],cl
0x140a2fe77: mov    QWORD PTR [rsp+0x20],rdx
0x140a2fe7c: mov    rdx,rsi
0x140a2fe7f: call   0x140a5afd0
0x140a2fe84: mov    QWORD PTR [rbp-0x70],rbx
0x140a2fe88: mov    r8d,DWORD PTR [rsi+0x50]
0x140a2fe8c: mov    edx,0x24
0x140a2fe91: mov    rcx,rbx
0x140a2fe94: call   0x140d21440
0x140a2fe99: mov    rdx,QWORD PTR [rsi+0x60]
0x140a2fe9d: cmp    rdx,QWORD PTR [rsi+0x68]
0x140a2fea1: je     0x140a2fead
0x140a2fea3: mov    QWORD PTR [rdx],rbx
0x140a2fea6: add    QWORD PTR [rsi+0x60],0x8
0x140a2feab: jmp    0x140a2feba
0x140a2fead: lea    r8,[rbp-0x70]
0x140a2feb1: lea    rcx,[rsi+0x58]
0x140a2feb5: call   0x1400bc360
0x140a2feba: mov    rcx,rbx
0x140a2febd: call   0x140d21860
0x140a2fec2: mov    rdx,rbx
0x140a2fec5: mov    rcx,r13
0x140a2fec8: call   0x141340d60
0x140a2fecd: jmp    0x140a3097a
0x140a2fed2: cmp    BYTE PTR [rsi+0x14c],0x1
0x140a2fed9: jg     0x140a2fef5
0x140a2fedb: mov    QWORD PTR [rsp+0x20],r15
0x140a2fee0: xor    r9d,r9d
0x140a2fee3: xor    r8d,r8d
0x140a2fee6: mov    dl,0x1
0x140a2fee8: mov    rcx,r13
0x140a2feeb: call   0x14133d990
0x140a2fef0: jmp    0x140a3097a
0x140a2fef5: mov    r12b,0xff
0x140a2fef8: mov    BYTE PTR [rsp+0x60],r12b
0x140a2fefd: movzx  eax,WORD PTR [rsi+0x20]
0x140a2ff01: mov    WORD PTR [rsp+0x78],ax
0x140a2ff06: movsx  rax,BYTE PTR [rsi+0x14a]
0x140a2ff0e: lea    rbx,[rip+0xffffffffff5d00eb]        # 0x140000000
0x140a2ff15: cmp    eax,0x7
0x140a2ff18: ja     0x140a2ff9e
0x140a2ff1e: mov    ecx,DWORD PTR [rbx+rax*4+0xa309a4]
0x140a2ff25: add    rcx,rbx
0x140a2ff28: jmp    rcx
0x140a2ff2a: movzx  ecx,WORD PTR [rsi+0x10]
0x140a2ff2e: movzx  eax,WORD PTR [rsi+0x1c]
0x140a2ff32: inc    ax
0x140a2ff35: jmp    0x140a2ffa8
0x140a2ff37: movzx  ecx,WORD PTR [rsi+0x10]
0x140a2ff3b: dec    cx
0x140a2ff3e: movzx  eax,WORD PTR [rsi+0x1c]
0x140a2ff42: inc    ax
0x140a2ff45: jmp    0x140a2ffa8
0x140a2ff47: movzx  ecx,WORD PTR [rsi+0x10]
0x140a2ff4b: dec    cx
0x140a2ff4e: movzx  eax,WORD PTR [rsi+0x1c]
0x140a2ff52: jmp    0x140a2ffa8
0x140a2ff54: movzx  ecx,WORD PTR [rsi+0x10]
0x140a2ff58: dec    cx
0x140a2ff5b: movzx  eax,WORD PTR [rsi+0x1c]
0x140a2ff5f: dec    ax
0x140a2ff62: jmp    0x140a2ffa8
0x140a2ff64: movzx  ecx,WORD PTR [rsi+0x10]
0x140a2ff68: movzx  eax,WORD PTR [rsi+0x1c]
0x140a2ff6c: dec    ax
0x140a2ff6f: jmp    0x140a2ffa8
0x140a2ff71: movzx  ecx,WORD PTR [rsi+0x10]
0x140a2ff75: inc    cx
0x140a2ff78: movzx  eax,WORD PTR [rsi+0x1c]
0x140a2ff7c: dec    ax
0x140a2ff7f: jmp    0x140a2ffa8
0x140a2ff81: movzx  ecx,WORD PTR [rsi+0x10]
0x140a2ff85: inc    cx
0x140a2ff88: movzx  eax,WORD PTR [rsi+0x1c]
0x140a2ff8c: jmp    0x140a2ffa8
0x140a2ff8e: movzx  ecx,WORD PTR [rsi+0x10]
0x140a2ff92: inc    cx
0x140a2ff95: movzx  eax,WORD PTR [rsi+0x1c]
0x140a2ff99: inc    ax
0x140a2ff9c: jmp    0x140a2ffa8
0x140a2ff9e: movzx  eax,WORD PTR [rsp+0x74]
0x140a2ffa3: movzx  ecx,WORD PTR [rsp+0x74]
0x140a2ffa8: mov    WORD PTR [rsp+0x64],ax
0x140a2ffad: mov    WORD PTR [rsp+0x66],cx
0x140a2ffb2: mov    rdx,r15
0x140a2ffb5: mov    QWORD PTR [rbp-0x78],rdx
0x140a2ffb9: mov    r14d,0xffffffff
0x140a2ffbf: mov    rax,QWORD PTR [rbp-0x80]
0x140a2ffc3: cmp    DWORD PTR [rax+0x660],r15d
0x140a2ffca: jle    0x140a3020b
0x140a2ffd0: mov    WORD PTR [rsp+0x62],r14w
0x140a2ffd6: lea    rdi,[rax+0x20]
0x140a2ffda: mov    QWORD PTR [rbp-0x70],rdi
0x140a2ffde: mov    DWORD PTR [rsp+0x74],r15d
0x140a2ffe3: mov    rcx,rax
0x140a2ffe6: data16 nop WORD PTR [rax+rax*1+0x0]
0x140a2fff0: mov    rdi,QWORD PTR [rdi]
0x140a2fff3: cmp    DWORD PTR [rdi+0x3d8],0xffffffff
0x140a2fffa: jne    0x140a301e5
0x140a30000: test   DWORD PTR [rdi+0x110],0x2010000
0x140a3000a: jne    0x140a301e5
0x140a30010: cmp    WORD PTR [rdi+0x800],0x0
0x140a30018: jg     0x140a301e5
0x140a3001e: mov    rcx,rdi
0x140a30021: call   0x1413a7840
0x140a30026: movsx  ecx,ax
0x140a30029: dec    ecx
0x140a3002b: cmp    ecx,0xf
0x140a3002e: ja     0x140a30048
0x140a30030: movsxd rax,ecx
0x140a30033: mov    ecx,DWORD PTR [rbx+rax*4+0xa309c4]
0x140a3003a: add    rcx,rbx
0x140a3003d: jmp    rcx
0x140a3003f: test   BYTE PTR [rdi+0x11c],0x80
0x140a30046: je     0x140a3005b
0x140a30048: mov    rdx,rdi
0x140a3004b: mov    rcx,r13
0x140a3004e: call   0x14140bba0
0x140a30053: test   al,al
0x140a30055: je     0x140a301dd
0x140a3005b: movsx  r14d,WORD PTR [rdi+0xa8]
0x140a30063: mov    r12d,DWORD PTR [rsi+0x10]
0x140a30067: mov    eax,r14d
0x140a3006a: sub    eax,r12d
0x140a3006d: mov    r8d,eax
0x140a30070: neg    r8d
0x140a30073: cmovs  r8d,eax
0x140a30077: movsx  ebx,WORD PTR [rdi+0xaa]
0x140a3007e: mov    r15d,DWORD PTR [rsi+0x1c]
0x140a30082: mov    eax,ebx
0x140a30084: sub    eax,r15d
0x140a30087: mov    ecx,eax
0x140a30089: neg    ecx
0x140a3008b: cmovs  ecx,eax
0x140a3008e: movsx  eax,WORD PTR [rdi+0xac]
0x140a30095: sub    eax,DWORD PTR [rsi+0x20]
0x140a30098: mov    edx,eax
0x140a3009a: neg    edx
0x140a3009c: cmovs  edx,eax
0x140a3009f: movsx  r9d,cx
0x140a300a3: imul   r9d,r9d
0x140a300a7: movsx  ecx,r8w
0x140a300ab: imul   ecx,ecx
0x140a300ae: movsx  r8d,dx
0x140a300b2: imul   r8d,r8d
0x140a300b6: lea    eax,[rcx+r9*1]
0x140a300ba: cmp    eax,r8d
0x140a300bd: jl     0x140a301d0
0x140a300c3: cmp    r14d,r12d
0x140a300c6: jne    0x140a300d1
0x140a300c8: cmp    ebx,r15d
0x140a300cb: je     0x140a301d0
0x140a300d1: lea    eax,[r8+r9*1]
0x140a300d5: add    eax,ecx
0x140a300d7: movd   xmm1,eax
0x140a300db: cvtdq2ps xmm1,xmm1
0x140a300de: xorps  xmm0,xmm0
0x140a300e1: ucomiss xmm0,xmm1
0x140a300e4: ja     0x140a300ef
0x140a300e6: xorps  xmm0,xmm0
0x140a300e9: sqrtss xmm0,xmm1
0x140a300ed: jmp    0x140a300f7
0x140a300ef: movaps xmm0,xmm1
0x140a300f2: call   0x1415548d6
0x140a300f7: cvttss2si r9d,xmm0
0x140a300fc: movzx  ecx,WORD PTR [rsp+0x62]
0x140a30101: cmp    cx,0xffff
0x140a30105: je     0x140a30111
0x140a30107: cmp    r9w,cx
0x140a3010b: jg     0x140a301d0
0x140a30111: cmp    r9w,0x19
0x140a30116: jg     0x140a301d0
0x140a3011c: sub    bx,r15w
0x140a30120: sub    r14w,r12w
0x140a30124: movsx  eax,r14w
0x140a30128: mov    edx,eax
0x140a3012a: neg    edx
0x140a3012c: cmovs  edx,eax
0x140a3012f: movsx  eax,bx
0x140a30132: mov    ecx,eax
0x140a30134: neg    ecx
0x140a30136: cmovs  ecx,eax
0x140a30139: movsx  r8d,dx
0x140a3013d: movsx  edx,cx
0x140a30140: test   bx,bx
0x140a30143: jns    0x140a30150
0x140a30145: lea    eax,[r8+r8*1]
0x140a30149: cmp    eax,edx
0x140a3014b: jle    0x140a3019c
0x140a3014d: test   bx,bx
0x140a30150: jle    0x140a3015e
0x140a30152: lea    eax,[r8+r8*1]
0x140a30156: cmp    eax,edx
0x140a30158: jg     0x140a3015e
0x140a3015a: mov    al,0x4
0x140a3015c: jmp    0x140a3019e
0x140a3015e: test   r14w,r14w
0x140a30162: jns    0x140a3017f
0x140a30164: lea    eax,[rdx+rdx*1]
0x140a30167: cmp    eax,r8d
0x140a3016a: jg     0x140a30170
0x140a3016c: mov    al,0x6
0x140a3016e: jmp    0x140a3019e
0x140a30170: test   bx,bx
0x140a30173: jle    0x140a30179
0x140a30175: mov    al,0x5
0x140a30177: jmp    0x140a3019e
0x140a30179: jns    0x140a3019c
0x140a3017b: mov    al,0x7
0x140a3017d: jmp    0x140a3019e
0x140a3017f: jle    0x140a3019c
0x140a30181: lea    eax,[rdx+rdx*1]
0x140a30184: cmp    eax,r8d
0x140a30187: jg     0x140a3018d
0x140a30189: mov    al,0x2
0x140a3018b: jmp    0x140a3019e
0x140a3018d: test   bx,bx
0x140a30190: jns    0x140a30196
0x140a30192: mov    al,0x1
0x140a30194: jmp    0x140a3019e
0x140a30196: jle    0x140a3019c
0x140a30198: mov    al,0x3
0x140a3019a: jmp    0x140a3019e
0x140a3019c: xor    al,al
0x140a3019e: mov    rcx,QWORD PTR [rbp-0x80]
0x140a301a2: lea    rbx,[rip+0xffffffffff5cfe57]        # 0x140000000
0x140a301a9: cmp    BYTE PTR [rsi+0x14a],al
0x140a301af: jne    0x140a301c8
0x140a301b1: mov    rdx,rdi
0x140a301b4: mov    QWORD PTR [rbp-0x78],rdx
0x140a301b8: movzx  r12d,al
0x140a301bc: mov    BYTE PTR [rsp+0x60],al
0x140a301c0: mov    WORD PTR [rsp+0x62],r9w
0x140a301c6: jmp    0x140a301e5
0x140a301c8: movzx  r12d,BYTE PTR [rsp+0x60]
0x140a301ce: jmp    0x140a301e1
0x140a301d0: lea    rbx,[rip+0xffffffffff5cfe29]        # 0x140000000
0x140a301d7: movzx  r12d,BYTE PTR [rsp+0x60]
0x140a301dd: mov    rcx,QWORD PTR [rbp-0x80]
0x140a301e1: mov    rdx,QWORD PTR [rbp-0x78]
0x140a301e5: inc    DWORD PTR [rsp+0x74]
0x140a301e9: mov    rdi,QWORD PTR [rbp-0x70]
0x140a301ed: add    rdi,0x8
0x140a301f1: mov    QWORD PTR [rbp-0x70],rdi
0x140a301f5: mov    eax,DWORD PTR [rsp+0x74]
0x140a301f9: cmp    eax,DWORD PTR [rcx+0x660]
0x140a301ff: jl     0x140a2fff0
0x140a30205: mov    r14d,0xffffffff
0x140a3020b: mov    ecx,0xffff8ad0
0x140a30210: mov    WORD PTR [rsp+0x68],cx
0x140a30215: mov    WORD PTR [rsp+0x6c],cx
0x140a3021a: mov    WORD PTR [rsp+0x70],cx
0x140a3021f: test   rdx,rdx
0x140a30222: je     0x140a302ab
0x140a30228: test   DWORD PTR [rdx+0x110],0x2000000
0x140a30232: je     0x140a30287
0x140a30234: mov    rbx,QWORD PTR [rdx+0x1d8]
0x140a3023b: mov    rdi,QWORD PTR [rdx+0x1e0]
0x140a30242: cmp    rbx,rdi
0x140a30245: jae    0x140a30280
0x140a30247: mov    rcx,QWORD PTR [rbx]
0x140a3024a: mov    rax,QWORD PTR [rcx]
0x140a3024d: call   QWORD PTR [rax+0x10]
0x140a30250: cmp    eax,0xb
0x140a30253: jne    0x140a30263
0x140a30255: mov    rcx,QWORD PTR [rbx]
0x140a30258: mov    rax,QWORD PTR [rcx]
0x140a3025b: call   QWORD PTR [rax+0x18]
0x140a3025e: test   rax,rax
0x140a30261: jne    0x140a30269
0x140a30263: add    rbx,0x8
0x140a30267: jmp    0x140a30242
0x140a30269: lea    r9,[rsp+0x70]
0x140a3026e: lea    r8,[rsp+0x6c]
0x140a30273: lea    rdx,[rsp+0x68]
0x140a30278: mov    rcx,rax
0x140a3027b: call   0x140ca3790
0x140a30280: mov    ecx,0xffff8ad0
0x140a30285: jmp    0x140a302ab
0x140a30287: movzx  eax,WORD PTR [rdx+0xa8]
0x140a3028e: mov    WORD PTR [rsp+0x68],ax
0x140a30293: movzx  eax,WORD PTR [rdx+0xaa]
0x140a3029a: mov    WORD PTR [rsp+0x6c],ax
0x140a3029f: movzx  eax,WORD PTR [rdx+0xac]
0x140a302a6: mov    WORD PTR [rsp+0x70],ax
0x140a302ab: xor    r15b,r15b
0x140a302ae: mov    BYTE PTR [rsp+0x62],r15b
0x140a302b3: cmp    WORD PTR [rsp+0x68],cx
0x140a302b8: jne    0x140a30678
0x140a302be: cmp    BYTE PTR [rsi+0x14c],0x4
0x140a302c5: jne    0x140a30678
0x140a302cb: mov    WORD PTR [rsp+0x74],r14w
0x140a302d1: mov    rbx,QWORD PTR [rip+0x19e0e08]        # 0x1424110e0
0x140a302d8: mov    rdi,QWORD PTR [rip+0x19e0e09]        # 0x1424110e8
0x140a302df: cmp    rbx,rdi
0x140a302e2: je     0x140a3052c
0x140a302e8: nop    DWORD PTR [rax+rax*1+0x0]
0x140a302f0: mov    r15,QWORD PTR [rbx]
0x140a302f3: mov    rax,QWORD PTR [r15]
0x140a302f6: mov    rcx,r15
0x140a302f9: call   QWORD PTR [rax+0x120]
0x140a302ff: movsx  ecx,WORD PTR [r15+0x120]
0x140a30307: cmp    ecx,eax
0x140a30309: jl     0x140a30509
0x140a3030f: mov    rax,QWORD PTR [r15]
0x140a30312: mov    rcx,r15
0x140a30315: call   QWORD PTR [rax+0x258]
0x140a3031b: test   al,al
0x140a3031d: jne    0x140a30509
0x140a30323: mov    r12d,DWORD PTR [r15+0x10]
0x140a30327: mov    r10d,DWORD PTR [rsi+0x10]
0x140a3032b: mov    eax,r12d
0x140a3032e: sub    eax,r10d
0x140a30331: mov    r8d,eax
0x140a30334: neg    r8d
0x140a30337: cmovs  r8d,eax
0x140a3033b: mov    r14d,DWORD PTR [r15+0x1c]
0x140a3033f: mov    r11d,DWORD PTR [rsi+0x1c]
0x140a30343: mov    eax,r14d
0x140a30346: sub    eax,r11d
0x140a30349: mov    ecx,eax
0x140a3034b: neg    ecx
0x140a3034d: cmovs  ecx,eax
0x140a30350: mov    eax,DWORD PTR [r15+0x20]
0x140a30354: sub    eax,DWORD PTR [rsi+0x20]
0x140a30357: mov    edx,eax
0x140a30359: neg    edx
0x140a3035b: cmovs  edx,eax
0x140a3035e: movsx  r9d,cx
0x140a30362: imul   r9d,r9d
0x140a30366: movsx  ecx,r8w
0x140a3036a: imul   ecx,ecx
0x140a3036d: movsx  r8d,dx
0x140a30371: imul   r8d,r8d
0x140a30375: lea    eax,[rcx+r9*1]
0x140a30379: cmp    eax,r8d
0x140a3037c: jl     0x140a30503
0x140a30382: lea    eax,[r8+r9*1]
0x140a30386: add    eax,ecx
0x140a30388: movd   xmm1,eax
0x140a3038c: cvtdq2ps xmm1,xmm1
0x140a3038f: xorps  xmm0,xmm0
0x140a30392: ucomiss xmm0,xmm1
0x140a30395: ja     0x140a303a0
0x140a30397: xorps  xmm0,xmm0
0x140a3039a: sqrtss xmm0,xmm1
0x140a3039e: jmp    0x140a303b0
0x140a303a0: movaps xmm0,xmm1
0x140a303a3: call   0x1415548d6
0x140a303a8: mov    r10d,DWORD PTR [rsi+0x10]
0x140a303ac: mov    r11d,DWORD PTR [rsi+0x1c]
0x140a303b0: cvttss2si eax,xmm0
0x140a303b4: mov    DWORD PTR [rbp-0x80],eax
0x140a303b7: movzx  ecx,WORD PTR [rsp+0x74]
0x140a303bc: cmp    cx,0xffff
0x140a303c0: je     0x140a303cb
0x140a303c2: cmp    ax,cx
0x140a303c5: jg     0x140a30503
0x140a303cb: cmp    ax,0x19
0x140a303cf: jg     0x140a30503
0x140a303d5: sub    r14w,r11w
0x140a303d9: sub    r12w,r10w
0x140a303dd: movsx  eax,r12w
0x140a303e1: mov    edx,eax
0x140a303e3: neg    edx
0x140a303e5: cmovs  edx,eax
0x140a303e8: movsx  eax,r14w
0x140a303ec: mov    ecx,eax
0x140a303ee: neg    ecx
0x140a303f0: cmovs  ecx,eax
0x140a303f3: movsx  r8d,dx
0x140a303f7: movsx  edx,cx
0x140a303fa: test   r14w,r14w
0x140a303fe: jns    0x140a3040c
0x140a30400: lea    eax,[r8+r8*1]
0x140a30404: cmp    eax,edx
0x140a30406: jle    0x140a30461
0x140a30408: test   r14w,r14w
0x140a3040c: jle    0x140a3041b
0x140a3040e: lea    eax,[r8+r8*1]
0x140a30412: cmp    eax,edx
0x140a30414: jg     0x140a3041b
0x140a30416: mov    r14b,0x4
0x140a30419: jmp    0x140a30464
0x140a3041b: test   r12w,r12w
0x140a3041f: jns    0x140a30440
0x140a30421: lea    eax,[rdx+rdx*1]
0x140a30424: cmp    eax,r8d
0x140a30427: jg     0x140a3042e
0x140a30429: mov    r14b,0x6
0x140a3042c: jmp    0x140a30464
0x140a3042e: test   r14w,r14w
0x140a30432: jle    0x140a30439
0x140a30434: mov    r14b,0x5
0x140a30437: jmp    0x140a30464
0x140a30439: jns    0x140a30461
0x140a3043b: mov    r14b,0x7
0x140a3043e: jmp    0x140a30464
0x140a30440: jle    0x140a30461
0x140a30442: lea    eax,[rdx+rdx*1]
0x140a30445: cmp    eax,r8d
0x140a30448: jg     0x140a3044f
0x140a3044a: mov    r14b,0x2
0x140a3044d: jmp    0x140a30464
0x140a3044f: test   r14w,r14w
0x140a30453: jns    0x140a3045a
0x140a30455: mov    r14b,0x1
0x140a30458: jmp    0x140a30464
0x140a3045a: jle    0x140a30461
0x140a3045c: mov    r14b,0x3
0x140a3045f: jmp    0x140a30464
0x140a30461: xor    r14b,r14b
0x140a30464: cmp    BYTE PTR [rsi+0x14a],r14b
0x140a3046b: jne    0x140a30503
0x140a30471: mov    rcx,r13
0x140a30474: call   0x14139bee0
0x140a30479: test   eax,eax
0x140a3047b: je     0x140a30503
0x140a30481: mov    rcx,r13
0x140a30484: call   0x14139be10
0x140a30489: movzx  r8d,WORD PTR [r15+0x20]
0x140a3048e: movzx  r9d,WORD PTR [r15+0x1c]
0x140a30493: mov    DWORD PTR [rsp+0x30],eax
0x140a30497: mov    WORD PTR [rsp+0x28],r8w
0x140a3049d: mov    WORD PTR [rsp+0x20],r9w
0x140a304a3: movzx  r9d,WORD PTR [r15+0x10]
0x140a304a8: movzx  r8d,WORD PTR [r13+0xac]
0x140a304b0: movzx  edx,WORD PTR [r13+0xaa]
0x140a304b8: movzx  ecx,WORD PTR [r13+0xa8]
0x140a304c0: call   0x140aa84d0
0x140a304c5: test   al,al
0x140a304c7: je     0x140a30503
0x140a304c9: movzx  eax,WORD PTR [r15+0x10]
0x140a304ce: mov    WORD PTR [rsp+0x68],ax
0x140a304d3: movzx  eax,WORD PTR [r15+0x1c]
0x140a304d8: mov    WORD PTR [rsp+0x6c],ax
0x140a304dd: movzx  eax,WORD PTR [r15+0x20]
0x140a304e2: mov    WORD PTR [rsp+0x70],ax
0x140a304e7: movzx  r12d,r14b
0x140a304eb: mov    BYTE PTR [rsp+0x60],r14b
0x140a304f0: movzx  eax,WORD PTR [rbp-0x80]
0x140a304f4: mov    WORD PTR [rsp+0x74],ax
0x140a304f9: mov    r15b,0x1
0x140a304fc: mov    BYTE PTR [rsp+0x62],r15b
0x140a30501: jmp    0x140a3050f
0x140a30503: movzx  r12d,BYTE PTR [rsp+0x60]
0x140a30509: movzx  r15d,BYTE PTR [rsp+0x62]
0x140a3050f: add    rbx,0x8
0x140a30513: cmp    rbx,rdi
0x140a30516: jne    0x140a302f0
0x140a3051c: mov    ecx,0xffff8ad0
0x140a30521: cmp    WORD PTR [rsp+0x68],cx
0x140a30526: jne    0x140a30678
0x140a3052c: movzx  edx,WORD PTR [rsi+0x10]
0x140a30530: movzx  r8d,WORD PTR [rsi+0x1c]
0x140a30535: movzx  edi,WORD PTR [rsi+0x20]
0x140a30539: movsx  rax,BYTE PTR [rsi+0x14a]
0x140a30541: cmp    eax,0x7
0x140a30544: ja     0x140a3058b
0x140a30546: lea    r9,[rip+0xffffffffff5cfab3]        # 0x140000000
0x140a3054d: mov    ecx,DWORD PTR [r9+rax*4+0xa30a04]
0x140a30555: add    rcx,r9
0x140a30558: jmp    rcx
0x140a3055a: add    dx,0x19
0x140a3055e: jmp    0x140a30586
0x140a30560: add    dx,0x19
0x140a30564: jmp    0x140a3058b
0x140a30566: add    dx,0x19
0x140a3056a: add    r8w,0x19
0x140a3056f: jmp    0x140a3058b
0x140a30571: add    dx,0xffe7
0x140a30575: add    r8w,0x19
0x140a3057a: jmp    0x140a3058b
0x140a3057c: add    dx,0xffe7
0x140a30580: jmp    0x140a3058b
0x140a30582: add    dx,0xffe7
0x140a30586: add    r8w,0xffe7
0x140a3058b: xor    r14d,r14d
0x140a3058e: mov    r11d,r14d
0x140a30591: test   dx,dx
0x140a30594: cmovns r11w,dx
0x140a30599: test   r8w,r8w
0x140a3059d: jns    0x140a305a2
0x140a3059f: mov    r8d,r14d
0x140a305a2: movsx  eax,r11w
0x140a305a6: mov    ecx,DWORD PTR [rip+0x1ad9fb0]        # 0x14250a55c
0x140a305ac: cmp    eax,ecx
0x140a305ae: jl     0x140a305b4
0x140a305b0: lea    r11d,[rcx-0x1]
0x140a305b4: movzx  eax,r8w
0x140a305b8: mov    ecx,DWORD PTR [rip+0x1ad9fa2]        # 0x14250a560
0x140a305be: cmp    eax,ecx
0x140a305c0: jl     0x140a305c6
0x140a305c2: lea    r8d,[rcx-0x1]
0x140a305c6: movzx  r9d,r8w
0x140a305ca: sub    r9w,WORD PTR [rsi+0x1c]
0x140a305cf: movzx  ebx,r11w
0x140a305d3: sub    bx,WORD PTR [rsi+0x10]
0x140a305d7: movsx  eax,bx
0x140a305da: mov    edx,eax
0x140a305dc: neg    edx
0x140a305de: cmovs  edx,eax
0x140a305e1: movsx  eax,r9w
0x140a305e5: mov    ecx,eax
0x140a305e7: neg    ecx
0x140a305e9: cmovs  ecx,eax
0x140a305ec: movsx  r10d,dx
0x140a305f0: movsx  edx,cx
0x140a305f3: test   r9w,r9w
0x140a305f7: jns    0x140a30605
0x140a305f9: lea    eax,[r10+r10*1]
0x140a305fd: cmp    eax,edx
0x140a305ff: jle    0x140a30652
0x140a30601: test   r9w,r9w
0x140a30605: jle    0x140a30613
0x140a30607: lea    eax,[r10+r10*1]
0x140a3060b: cmp    eax,edx
0x140a3060d: jg     0x140a30613
0x140a3060f: mov    al,0x4
0x140a30611: jmp    0x140a30654
0x140a30613: test   bx,bx
0x140a30616: jns    0x140a30634
0x140a30618: lea    eax,[rdx+rdx*1]
0x140a3061b: cmp    eax,r10d
0x140a3061e: jg     0x140a30624
0x140a30620: mov    al,0x6
0x140a30622: jmp    0x140a30654
0x140a30624: test   r9w,r9w
0x140a30628: jle    0x140a3062e
0x140a3062a: mov    al,0x5
0x140a3062c: jmp    0x140a30654
0x140a3062e: jns    0x140a30652
0x140a30630: mov    al,0x7
0x140a30632: jmp    0x140a30654
0x140a30634: jle    0x140a30652
0x140a30636: lea    eax,[rdx+rdx*1]
0x140a30639: cmp    eax,r10d
0x140a3063c: jg     0x140a30642
0x140a3063e: mov    al,0x2
0x140a30640: jmp    0x140a30654
0x140a30642: test   r9w,r9w
0x140a30646: jns    0x140a3064c
0x140a30648: mov    al,0x1
0x140a3064a: jmp    0x140a30654
0x140a3064c: jle    0x140a30652
0x140a3064e: mov    al,0x3
0x140a30650: jmp    0x140a30654
0x140a30652: xor    al,al
0x140a30654: mov    ecx,0xffff8ad0
0x140a30659: cmp    BYTE PTR [rsi+0x14a],al
0x140a3065f: jne    0x140a3067b
0x140a30661: mov    WORD PTR [rsp+0x68],r11w
0x140a30667: mov    WORD PTR [rsp+0x6c],r8w
0x140a3066d: mov    WORD PTR [rsp+0x70],di
0x140a30672: movzx  r12d,al
0x140a30676: jmp    0x140a3067b
0x140a30678: xor    r14d,r14d
0x140a3067b: movzx  eax,WORD PTR [rsp+0x66]
0x140a30680: movzx  r8d,WORD PTR [rsp+0x64]
0x140a30686: movzx  r9d,WORD PTR [rsp+0x78]
0x140a3068c: cmp    WORD PTR [r13+0xa8],ax
0x140a30694: jne    0x140a3096a
0x140a3069a: cmp    WORD PTR [r13+0xaa],r8w
0x140a306a2: jne    0x140a3096a
0x140a306a8: cmp    WORD PTR [r13+0xac],r9w
0x140a306b0: jne    0x140a3096a
0x140a306b6: cmp    BYTE PTR [rsi+0x14d],0x0
0x140a306bd: jne    0x140a3097a
0x140a306c3: cmp    BYTE PTR [rsi+0x14c],0x3
0x140a306ca: jl     0x140a3097a
0x140a306d0: cmp    BYTE PTR [rsi+0x14a],r12b
0x140a306d7: jne    0x140a3097a
0x140a306dd: cmp    WORD PTR [rsp+0x68],cx
0x140a306e2: je     0x140a3097a
0x140a306e8: mov    rax,QWORD PTR [rsi+0x128]
0x140a306ef: mov    rcx,QWORD PTR [rax+0x18]
0x140a306f3: mov    rdi,QWORD PTR [rcx]
0x140a306f6: mov    dl,0x2
0x140a306f8: mov    rcx,rdi
0x140a306fb: call   0x140c7b1e0
0x140a30700: mov    ecx,0xa0
0x140a30705: call   0x1415530e0
0x140a3070a: mov    rbx,rax
0x140a3070d: mov    QWORD PTR [rbp-0x70],rax
0x140a30711: xor    edx,edx
0x140a30713: mov    rcx,rax
0x140a30716: call   0x140ebf110
0x140a3071b: lea    rax,[rip+0xc47cfe]        # 0x141678420
0x140a30722: mov    QWORD PTR [rbx],rax
0x140a30725: test   DWORD PTR [rdi+0x10],0x20000000
0x140a3072c: jne    0x140a30736
0x140a3072e: mov    rcx,rdi
0x140a30731: call   0x140c7dc00
0x140a30736: movsxd r14,DWORD PTR [rdi+0x74]
0x140a3073a: test   DWORD PTR [rdi+0x10],0x20000000
0x140a30741: jne    0x140a3074b
0x140a30743: mov    rcx,rdi
0x140a30746: call   0x140c7dc00
0x140a3074b: imul   rcx,r14,0xf4240
0x140a30752: movsxd rax,DWORD PTR [rdi+0x78]
0x140a30756: add    rcx,rax
0x140a30759: test   rcx,rcx
0x140a3075c: jg     0x140a30765
0x140a3075e: mov    eax,0xc8
0x140a30763: jmp    0x140a3076f
0x140a30765: mov    eax,0x3b9aca00
0x140a3076a: cqo
0x140a3076c: idiv   rcx
0x140a3076f: mov    DWORD PTR [rbx+0x58],eax
0x140a30772: cmp    eax,0xc8
0x140a30777: jle    0x140a30782
0x140a30779: mov    DWORD PTR [rbx+0x58],0xc8
0x140a30780: jmp    0x140a3078e
0x140a30782: cmp    eax,0x14
0x140a30785: jge    0x140a3078e
0x140a30787: mov    DWORD PTR [rbx+0x58],0x14
0x140a3078e: movzx  r9d,WORD PTR [rsi+0x10]
0x140a30793: mov    WORD PTR [rbx+0x20],r9w
0x140a30798: movzx  r10d,WORD PTR [rsi+0x1c]
0x140a3079d: mov    WORD PTR [rbx+0x22],r10w
0x140a307a2: movzx  r11d,WORD PTR [rsi+0x20]
0x140a307a7: mov    WORD PTR [rbx+0x24],r11w
0x140a307ac: movsx  rax,BYTE PTR [rsi+0x14a]
0x140a307b4: movzx  edx,r9w
0x140a307b8: movzx  r8d,r10w
0x140a307bc: cmp    eax,0x7
0x140a307bf: ja     0x140a3081c
0x140a307c1: lea    r14,[rip+0xffffffffff5cf838]        # 0x140000000
0x140a307c8: mov    ecx,DWORD PTR [r14+rax*4+0xa30a24]
0x140a307d0: add    rcx,r14
0x140a307d3: jmp    rcx
0x140a307d5: lea    edx,[r9+0x1]
0x140a307d9: jmp    0x140a3080f
0x140a307db: lea    edx,[r9+0x1]
0x140a307df: mov    WORD PTR [rbx+0x20],dx
0x140a307e3: jmp    0x140a3081c
0x140a307e5: lea    edx,[r9+0x1]
0x140a307e9: mov    WORD PTR [rbx+0x20],dx
0x140a307ed: lea    r8d,[r10+0x1]
0x140a307f1: jmp    0x140a30817
0x140a307f3: lea    edx,[r9-0x1]
0x140a307f7: mov    WORD PTR [rbx+0x20],dx
0x140a307fb: lea    r8d,[r10+0x1]
0x140a307ff: jmp    0x140a30817
0x140a30801: lea    edx,[r9-0x1]
0x140a30805: mov    WORD PTR [rbx+0x20],dx
0x140a30809: jmp    0x140a3081c
0x140a3080b: lea    edx,[r9-0x1]
0x140a3080f: mov    WORD PTR [rbx+0x20],dx
0x140a30813: lea    r8d,[r10-0x1]
0x140a30817: mov    WORD PTR [rbx+0x22],r8w
0x140a3081c: mov    WORD PTR [rbx+0x32],dx
0x140a30820: mov    WORD PTR [rbx+0x34],r8w
0x140a30825: mov    WORD PTR [rbx+0x36],r11w
0x140a3082a: movzx  eax,WORD PTR [rsp+0x68]
0x140a3082f: mov    WORD PTR [rbx+0x26],ax
0x140a30833: movzx  eax,WORD PTR [rsp+0x6c]
0x140a30838: mov    WORD PTR [rbx+0x28],ax
0x140a3083c: movzx  eax,WORD PTR [rsp+0x70]
0x140a30841: mov    WORD PTR [rbx+0x2a],ax
0x140a30845: xor    r12d,r12d
0x140a30848: mov    DWORD PTR [rbx+0x38],r12d
0x140a3084c: mov    DWORD PTR [rbx+0x40],r12d
0x140a30850: mov    DWORD PTR [rbx+0x44],0xffffffff
0x140a30857: mov    DWORD PTR [rbx+0x3c],0xc8
0x140a3085e: mov    WORD PTR [rbx+0x2c],dx
0x140a30862: mov    WORD PTR [rbx+0x2e],r8w
0x140a30867: mov    WORD PTR [rbx+0x30],r11w
0x140a3086c: mov    QWORD PTR [rbx+0x98],rdi
0x140a30873: mov    WORD PTR [rdi+0x8],dx
0x140a30877: mov    rcx,QWORD PTR [rbx+0x98]
0x140a3087e: movzx  eax,WORD PTR [rbx+0x2e]
0x140a30882: mov    WORD PTR [rcx+0xa],ax
0x140a30886: mov    rcx,QWORD PTR [rbx+0x98]
0x140a3088d: movzx  eax,WORD PTR [rbx+0x30]
0x140a30891: mov    WORD PTR [rcx+0xc],ax
0x140a30895: mov    r8d,DWORD PTR [rbx+0x10]
0x140a30899: mov    edx,0xc
0x140a3089e: mov    rcx,QWORD PTR [rbx+0x98]
0x140a308a5: call   0x140073c90
0x140a308aa: mov    QWORD PTR [rbx+0x18],r12
0x140a308ae: mov    DWORD PTR [rbx+0x4c],r12d
0x140a308b2: or     DWORD PTR [rdi+0x10],0x2
0x140a308b6: mov    eax,DWORD PTR [rbx+0x48]
0x140a308b9: or     eax,0x4
0x140a308bc: or     eax,0x10
0x140a308bf: mov    DWORD PTR [rbx+0x48],eax
0x140a308c2: mov    r14,QWORD PTR [rbp-0x78]
0x140a308c6: test   r14,r14
0x140a308c9: je     0x140a308d5
0x140a308cb: mov    eax,DWORD PTR [r14+0x130]
0x140a308d2: mov    DWORD PTR [rbx+0x68],eax
0x140a308d5: mov    eax,0x4b
0x140a308da: mov    ecx,0x19
0x140a308df: test   r15b,r15b
0x140a308e2: cmove  eax,ecx
0x140a308e5: mov    edx,0x3b
0x140a308ea: mov    DWORD PTR [rsp+0x50],0xffffffff
0x140a308f2: mov    WORD PTR [rsp+0x48],0x2f
0x140a308f9: mov    DWORD PTR [rsp+0x40],0x1
0x140a30901: mov    QWORD PTR [rsp+0x38],r12
0x140a30906: mov    QWORD PTR [rsp+0x30],rdi
0x140a3090b: mov    DWORD PTR [rsp+0x28],eax
0x140a3090f: mov    DWORD PTR [rsp+0x20],eax
0x140a30913: mov    r9d,0xf
0x140a30919: mov    r8d,0xb
0x140a3091f: mov    rcx,r13
0x140a30922: call   0x1413812a0
0x140a30927: add    eax,0x64
0x140a3092a: mov    DWORD PTR [rbx+0x50],eax
0x140a3092d: test   r14,r14
0x140a30930: je     0x140a3094a
0x140a30932: mov    r9d,0x6
0x140a30938: mov    r8,r14
0x140a3093b: mov    rdx,r13
0x140a3093e: lea    rcx,[rip+0x19c302b]        # 0x1423f3970
0x140a30945: call   0x1414fc5c0
0x140a3094a: cmp    WORD PTR [r13+0x814],0x2
0x140a30953: jne    0x140a30959
0x140a30955: or     DWORD PTR [rbx+0x48],0x40
0x140a30959: mov    BYTE PTR [rsi+0x14d],0x1
0x140a30960: mov    rcx,r13
0x140a30963: call   0x1413843f0
0x140a30968: jmp    0x140a3097a
0x140a3096a: mov    DWORD PTR [rsp+0x20],r14d
0x140a3096f: movzx  edx,ax
0x140a30972: mov    rcx,r13
0x140a30975: call   0x140074ea0
0x140a3097a: mov    rcx,QWORD PTR [rbp+0x40]
0x140a3097e: xor    rcx,rsp
0x140a30981: call   0x1415530b0
0x140a30986: mov    rbx,QWORD PTR [rsp+0x1a0]
0x140a3098e: add    rsp,0x150
0x140a30995: pop    r15
0x140a30997: pop    r14
0x140a30999: pop    r13
0x140a3099b: pop    r12
0x140a3099d: pop    rdi
0x140a3099e: pop    rsi
0x140a3099f: pop    rbp
0x140a309a0: ret
0x140a309a1: nop    DWORD PTR [rax]
0x140a309a4: sub    bh,bh
0x140a309a6: movabs ds:0xa2ff4700a2ff3700,al
0x140a309af: add    BYTE PTR [rdi+rdi*8-0x5e],dl
0x140a309b3: add    BYTE PTR [rdi+rdi*8-0x5e],ah
0x140a309b7: add    BYTE PTR [rcx-0x1],dh
0x140a309ba: movabs ds:0xa2ff8e00a2ff8100,al
0x140a309c3: add    BYTE PTR [rbx+0x0],bl
0x140a309c6: movabs ds:0xa3004800a3004800,eax
0x140a309cf: add    BYTE PTR [rax+0x0],cl
0x140a309d2: movabs ds:0xa3003f00a3005b00,eax
0x140a309db: add    BYTE PTR [rax+0x0],cl
0x140a309de: movabs ds:0xa3005b00a3004800,eax
0x140a309e7: add    BYTE PTR [rax+0x0],cl
0x140a309ea: movabs ds:0xa3005b00a3004800,eax
0x140a309f3: add    BYTE PTR [rax+0x0],cl
0x140a309f6: movabs ds:0xa3004800a3005b00,eax
0x140a309ff: add    BYTE PTR [rbx+0x0],bl
0x140a30a02: movabs ds:0xa3055a00a3058600,eax
0x140a30a0b: add    BYTE PTR [rax+0x5],ah
0x140a30a0e: movabs ds:0xa3056a00a3056600,eax
0x140a30a17: add    BYTE PTR [rcx+0x5],dh
0x140a30a1a: movabs ds:0xa3058200a3057c00,eax
0x140a30a23: add    BYTE PTR [rbx],dl
0x140a30a25: or     BYTE PTR [rbx-0x5cf82b00],ah
0x140a30a2b: add    bl,bl
0x140a30a2d: (bad)
0x140a30a2e: movabs ds:0xa307ed00a307e500,eax
0x140a30a37: add    bl,dh
0x140a30a39: (bad)
0x140a30a3a: movabs ds:0xa3080b00a3080100,eax
