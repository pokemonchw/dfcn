; classic PE:6aea11a5:0272d000; mod-load-dialog; complete PE unwind owner RVA 0x7ddab0..0x7de978
0x7ddab0: mov    QWORD PTR [rsp+0x10],rbx
0x7ddab5: mov    QWORD PTR [rsp+0x18],rsi
0x7ddaba: mov    QWORD PTR [rsp+0x20],rdi
0x7ddabf: push   rbp
0x7ddac0: push   r12
0x7ddac2: push   r13
0x7ddac4: push   r14
0x7ddac6: push   r15
0x7ddac8: lea    rbp,[rsp-0x37]
0x7ddacd: sub    rsp,0xc0
0x7ddad4: mov    rax,QWORD PTR [rip+0x10da565]        # 0x1418b8040
0x7ddadb: xor    rax,rsp
0x7ddade: mov    QWORD PTR [rbp+0x27],rax
0x7ddae2: mov    r14d,r9d
0x7ddae5: mov    ebx,r8d
0x7ddae8: mov    edi,edx
0x7ddaea: mov    rsi,rcx
0x7ddaed: mov    QWORD PTR [rbp-0x41],rcx
0x7ddaf1: movsxd r10,DWORD PTR [rcx+0x8]
0x7ddaf5: test   r10d,r10d
0x7ddaf8: js     0x1407de94b
0x7ddafe: mov    rax,QWORD PTR [rip+0x1e7d2e3]        # 0x14265ade8
0x7ddb05: sub    rax,QWORD PTR [rip+0x1e7d2d4]        # 0x14265ade0
0x7ddb0c: sar    rax,0x3
0x7ddb10: cmp    r10d,eax
0x7ddb13: jge    0x1407de94b
0x7ddb19: mov    rdx,QWORD PTR [rip+0x1e7d340]        # 0x14265ae60
0x7ddb20: mov    rdx,QWORD PTR [rdx+r10*8]
0x7ddb24: lea    rcx,[rbp+0x7]
0x7ddb28: call   0x140070b90
0x7ddb2d: nop
0x7ddb2e: movsxd rax,DWORD PTR [rsi+0x8]
0x7ddb32: mov    rdx,QWORD PTR [rip+0x1e7d33f]        # 0x14265ae78
0x7ddb39: mov    rdx,QWORD PTR [rdx+rax*8]
0x7ddb3d: lea    rcx,[rbp-0x19]
0x7ddb41: call   0x140070b90
0x7ddb46: nop
0x7ddb47: cmp    BYTE PTR [rsi+0xc],0x0
0x7ddb4b: je     0x1407de538
0x7ddb51: lea    eax,[rdi+rbx*1]
0x7ddb54: cdq
0x7ddb55: sub    eax,edx
0x7ddb57: sar    eax,1
0x7ddb59: lea    edi,[rax-0x2a]
0x7ddb5c: lea    ebx,[rdi+0x54]
0x7ddb5f: lea    eax,[r14-0xf]
0x7ddb63: mov    DWORD PTR [rbp-0x69],eax
0x7ddb66: lea    r13d,[r14-0x7]
0x7ddb6a: lea    r15d,[rdi+0x2]
0x7ddb6e: lea    r14d,[r15+0x9]
0x7ddb72: lea    ecx,[r14+0x2]
0x7ddb76: mov    DWORD PTR [rbp-0x65],ecx
0x7ddb79: lea    r12d,[rcx+0xd]
0x7ddb7d: lea    ecx,[r12+0x2]
0x7ddb82: mov    DWORD PTR [rbp-0x61],ecx
0x7ddb85: add    ecx,0xf
0x7ddb88: mov    DWORD PTR [rbp-0x49],ecx
0x7ddb8b: add    ecx,0x2
0x7ddb8e: mov    DWORD PTR [rbp-0x5d],ecx
0x7ddb91: add    ecx,0x13
0x7ddb94: mov    DWORD PTR [rbp-0x45],ecx
0x7ddb97: add    ecx,0x2
0x7ddb9a: mov    DWORD PTR [rbp-0x59],ecx
0x7ddb9d: add    ecx,0x10
0x7ddba0: mov    DWORD PTR [rbp-0x55],ecx
0x7ddba3: lea    ecx,[r13-0x3]
0x7ddba7: mov    DWORD PTR [rbp-0x51],ecx
0x7ddbaa: lea    ecx,[r13-0x1]
0x7ddbae: mov    DWORD PTR [rbp-0x4d],ecx
0x7ddbb1: mov    DWORD PTR [rip+0x1e88c41],0x1000006        # 0x1426667fc
0x7ddbbb: mov    esi,eax
0x7ddbbd: cmp    eax,r13d
0x7ddbc0: jg     0x1407ddc91
0x7ddbc6: mov    r14d,eax
0x7ddbc9: nop    DWORD PTR [rax+0x0]
0x7ddbd0: mov    r11d,edi
0x7ddbd3: cmp    edi,ebx
0x7ddbd5: jg     0x1407ddc7f
0x7ddbdb: nop    DWORD PTR [rax+rax*1+0x0]
0x7ddbe0: mov    DWORD PTR [rip+0x1e88c0d],r11d        # 0x1426667f4
0x7ddbe7: mov    DWORD PTR [rip+0x1e88c0b],esi        # 0x1426667f8
0x7ddbed: cmp    esi,r14d
0x7ddbf0: jne    0x1407ddc1b
0x7ddbf2: cmp    r11d,edi
0x7ddbf5: jne    0x1407ddbff
0x7ddbf7: mov    edx,DWORD PTR [rip+0x1c0f42f]        # 0x1423ed02c
0x7ddbfd: jmp    0x1407ddc67
0x7ddbff: lea    rcx,[rip+0x1e88b6a]        # 0x142666770
0x7ddc06: cmp    r11d,ebx
0x7ddc09: jne    0x1407ddc13
0x7ddc0b: mov    edx,DWORD PTR [rip+0x1c0f423]        # 0x1423ed034
0x7ddc11: jmp    0x1407ddc6e
0x7ddc13: mov    edx,DWORD PTR [rip+0x1c0f417]        # 0x1423ed030
0x7ddc19: jmp    0x1407ddc6e
0x7ddc1b: cmp    esi,r13d
0x7ddc1e: jne    0x1407ddc49
0x7ddc20: cmp    r11d,edi
0x7ddc23: jne    0x1407ddc2d
0x7ddc25: mov    edx,DWORD PTR [rip+0x1c0f419]        # 0x1423ed044
0x7ddc2b: jmp    0x1407ddc67
0x7ddc2d: lea    rcx,[rip+0x1e88b3c]        # 0x142666770
0x7ddc34: cmp    r11d,ebx
0x7ddc37: jne    0x1407ddc41
0x7ddc39: mov    edx,DWORD PTR [rip+0x1c0f40d]        # 0x1423ed04c
0x7ddc3f: jmp    0x1407ddc6e
0x7ddc41: mov    edx,DWORD PTR [rip+0x1c0f401]        # 0x1423ed048
0x7ddc47: jmp    0x1407ddc6e
0x7ddc49: cmp    r11d,edi
0x7ddc4c: jne    0x1407ddc56
0x7ddc4e: mov    edx,DWORD PTR [rip+0x1c0f3e4]        # 0x1423ed038
0x7ddc54: jmp    0x1407ddc67
0x7ddc56: cmp    r11d,ebx
0x7ddc59: mov    edx,DWORD PTR [rip+0x1c0f3e1]        # 0x1423ed040
0x7ddc5f: je     0x1407ddc67
0x7ddc61: mov    edx,DWORD PTR [rip+0x1c0f3d5]        # 0x1423ed03c
0x7ddc67: lea    rcx,[rip+0x1e88b02]        # 0x142666770
0x7ddc6e: call   0x140af1390
0x7ddc73: inc    r11d
0x7ddc76: cmp    r11d,ebx
0x7ddc79: jle    0x1407ddbe0
0x7ddc7f: inc    esi
0x7ddc81: cmp    esi,r13d
0x7ddc84: jle    0x1407ddbd0
0x7ddc8a: lea    r14d,[r15+0x9]
0x7ddc8e: mov    eax,DWORD PTR [rbp-0x69]
0x7ddc91: mov    DWORD PTR [rip+0x1e88b61],0x1010007        # 0x1426667fc
0x7ddc9b: mov    DWORD PTR [rip+0x1e88b52],r15d        # 0x1426667f4
0x7ddca2: add    eax,0x2
0x7ddca5: mov    DWORD PTR [rip+0x1e88b4d],eax        # 0x1426667f8
0x7ddcab: xorps  xmm0,xmm0
0x7ddcae: movups XMMWORD PTR [rbp-0x39],xmm0
0x7ddcb2: mov    ecx,0x30
0x7ddcb7: call   0x140071d90
0x7ddcbc: mov    rcx,rax
0x7ddcbf: mov    QWORD PTR [rbp-0x39],rax
0x7ddcc3: movdqa xmm0,XMMWORD PTR [rip+0xfc88e5]        # 0x1417a65b0
0x7ddccb: movdqu XMMWORD PTR [rbp-0x29],xmm0
0x7ddcd0: movups xmm0,XMMWORD PTR [rip+0xeea9a9]        # 0x1416c8680 ; vector='Newer compatible'
0x7ddcd7: movups XMMWORD PTR [rax],xmm0
0x7ddcda: movups xmm1,XMMWORD PTR [rip+0xeea9af]        # 0x1416c8690 ; vector=' version of mod '
0x7ddce1: movups XMMWORD PTR [rax+0x10],xmm1
0x7ddce5: movsd  xmm0,QWORD PTR [rip+0xeea9b3]        # 0x1416c86a0 ; cstring='detected:'
0x7ddced: movsd  QWORD PTR [rax+0x20],xmm0
0x7ddcf2: movzx  eax,BYTE PTR [rip+0xeea9af]        # 0x1416c86a8 ; cstring=':'
0x7ddcf9: mov    BYTE PTR [rcx+0x28],al
0x7ddcfc: mov    BYTE PTR [rcx+0x29],0x0
0x7ddd00: xor    r9d,r9d
0x7ddd03: lea    rdx,[rbp-0x39]
0x7ddd07: lea    rcx,[rip+0x1e88a62]        # 0x142666770
0x7ddd0e: call   0x140af0220
0x7ddd13: nop
0x7ddd14: mov    rdx,QWORD PTR [rbp-0x21]
0x7ddd18: cmp    rdx,0xf
0x7ddd1c: jbe    0x1407ddd4f
0x7ddd1e: inc    rdx
0x7ddd21: mov    rcx,QWORD PTR [rbp-0x39]
0x7ddd25: mov    rax,rcx
0x7ddd28: cmp    rdx,0x1000
0x7ddd2f: jb     0x1407ddd4a
0x7ddd31: add    rdx,0x27
0x7ddd35: mov    rcx,QWORD PTR [rcx-0x8]
0x7ddd39: sub    rax,rcx
0x7ddd3c: add    rax,0xfffffffffffffff8
0x7ddd40: cmp    rax,0x1f
0x7ddd44: ja     0x1407de92b
0x7ddd4a: call   0x14154de20
0x7ddd4f: mov    DWORD PTR [rip+0x1e88a9e],r15d        # 0x1426667f4
0x7ddd56: mov    eax,DWORD PTR [rbp-0x69]
0x7ddd59: add    eax,0x3
0x7ddd5c: mov    DWORD PTR [rip+0x1e88a96],eax        # 0x1426667f8
0x7ddd62: xor    r9d,r9d
0x7ddd65: lea    rdx,[rbp+0x7]
0x7ddd69: lea    rcx,[rip+0x1e88a00]        # 0x142666770
0x7ddd70: call   0x140af0220
0x7ddd75: xorps  xmm0,xmm0
0x7ddd78: movups XMMWORD PTR [rbp-0x39],xmm0
0x7ddd7c: movdqa xmm1,XMMWORD PTR [rip+0xfc85ac]        # 0x1417a6330
0x7ddd84: movdqu XMMWORD PTR [rbp-0x29],xmm1
0x7ddd89: mov    WORD PTR [rbp-0x39],0x20
0x7ddd8f: xor    r9d,r9d
0x7ddd92: lea    rdx,[rbp-0x39]
0x7ddd96: lea    rcx,[rip+0x1e889d3]        # 0x142666770
0x7ddd9d: call   0x140af0220
0x7ddda2: nop
0x7ddda3: lea    rcx,[rbp-0x39]
0x7ddda7: call   0x140070e10
0x7dddac: mov    rsi,QWORD PTR [rbp-0x41]
0x7dddb0: mov    rdx,QWORD PTR [rsi+0x18]
0x7dddb4: test   rdx,rdx
0x7dddb7: je     0x1407ddef9
0x7dddbd: add    rdx,0x68
0x7dddc1: xor    r9d,r9d
0x7dddc4: lea    rcx,[rip+0x1e889a5]        # 0x142666770
0x7dddcb: call   0x140af0220
0x7dddd0: xorps  xmm0,xmm0
0x7dddd3: movups XMMWORD PTR [rbp-0x39],xmm0
0x7dddd7: movdqa xmm1,XMMWORD PTR [rip+0xfc8601]        # 0x1417a63e0
0x7ddddf: movdqu XMMWORD PTR [rbp-0x29],xmm1
0x7ddde4: movsd  xmm0,QWORD PTR [rip+0xeea8c4]        # 0x1416c86b0 ; cstring=' (save uses '
0x7dddec: movsd  QWORD PTR [rbp-0x39],xmm0
0x7dddf1: mov    eax,DWORD PTR [rip+0xeea8c1]        # 0x1416c86b8 ; cstring='ses '
0x7dddf7: mov    DWORD PTR [rbp-0x31],eax
0x7dddfa: mov    BYTE PTR [rbp-0x2d],0x0
0x7dddfe: xor    r9d,r9d
0x7dde01: lea    rdx,[rbp-0x39]
0x7dde05: lea    rcx,[rip+0x1e88964]        # 0x142666770
0x7dde0c: call   0x140af0220
0x7dde11: nop
0x7dde12: lea    rcx,[rbp-0x39]
0x7dde16: call   0x140070e10
0x7dde1b: xor    r9d,r9d
0x7dde1e: lea    rdx,[rbp-0x19]
0x7dde22: lea    rcx,[rip+0x1e88947]        # 0x142666770
0x7dde29: call   0x140af0220
0x7dde2e: cmp    QWORD PTR [rsi+0x20],0x0
0x7dde33: jne    0x1407ddec2
0x7dde39: xorps  xmm0,xmm0
0x7dde3c: movups XMMWORD PTR [rbp-0x39],xmm0
0x7dde40: movdqa xmm1,XMMWORD PTR [rip+0xfc8588]        # 0x1417a63d0
0x7dde48: movdqu XMMWORD PTR [rbp-0x29],xmm1
0x7dde4d: movsd  xmm0,QWORD PTR [rip+0xeea813]        # 0x1416c8668 ; cstring=', not found'
0x7dde55: movsd  QWORD PTR [rbp-0x39],xmm0
0x7dde5a: movzx  eax,WORD PTR [rip+0xeea80f]        # 0x1416c8670 ; cstring='und'
0x7dde61: mov    WORD PTR [rbp-0x31],ax
0x7dde65: movzx  eax,BYTE PTR [rip+0xeea806]        # 0x1416c8672 ; cstring='d'
0x7dde6c: mov    BYTE PTR [rbp-0x2f],al
0x7dde6f: mov    BYTE PTR [rbp-0x2e],0x0
0x7dde73: xor    r9d,r9d
0x7dde76: lea    rdx,[rbp-0x39]
0x7dde7a: lea    rcx,[rip+0x1e888ef]        # 0x142666770
0x7dde81: call   0x140af0220
0x7dde86: nop
0x7dde87: mov    rdx,QWORD PTR [rbp-0x21]
0x7dde8b: cmp    rdx,0xf
0x7dde8f: jbe    0x1407ddec2
0x7dde91: inc    rdx
0x7dde94: mov    rcx,QWORD PTR [rbp-0x39]
0x7dde98: mov    rax,rcx
0x7dde9b: cmp    rdx,0x1000
0x7ddea2: jb     0x1407ddebd
0x7ddea4: add    rdx,0x27
0x7ddea8: mov    rcx,QWORD PTR [rcx-0x8]
0x7ddeac: sub    rax,rcx
0x7ddeaf: add    rax,0xfffffffffffffff8
0x7ddeb3: cmp    rax,0x1f
0x7ddeb7: ja     0x1407de92b
0x7ddebd: call   0x14154de20
0x7ddec2: xorps  xmm0,xmm0
0x7ddec5: movups XMMWORD PTR [rbp-0x39],xmm0
0x7ddec9: movdqa xmm1,XMMWORD PTR [rip+0xfc845f]        # 0x1417a6330
0x7dded1: movdqu XMMWORD PTR [rbp-0x29],xmm1
0x7dded6: mov    WORD PTR [rbp-0x39],0x29
0x7ddedc: xor    r9d,r9d
0x7ddedf: lea    rdx,[rbp-0x39]
0x7ddee3: lea    rcx,[rip+0x1e88886]        # 0x142666770
0x7ddeea: call   0x140af0220
0x7ddeef: nop
0x7ddef0: lea    rcx,[rbp-0x39]
0x7ddef4: call   0x140070e10
0x7ddef9: mov    r13d,DWORD PTR [rbp-0x51]
0x7ddefd: mov    ebx,r13d
0x7ddf00: mov    edi,DWORD PTR [rbp-0x4d]
0x7ddf03: cmp    r13d,edi
0x7ddf06: jg     0x1407ddfc8
0x7ddf0c: nop    DWORD PTR [rax+0x0]
0x7ddf10: mov    r11d,r15d
0x7ddf13: cmp    r15d,r14d
0x7ddf16: jg     0x1407ddfbe
0x7ddf1c: nop    DWORD PTR [rax+0x0]
0x7ddf20: mov    DWORD PTR [rip+0x1e888cd],r11d        # 0x1426667f4
0x7ddf27: mov    DWORD PTR [rip+0x1e888cb],ebx        # 0x1426667f8
0x7ddf2d: cmp    ebx,r13d
0x7ddf30: jne    0x1407ddf5b
0x7ddf32: cmp    r11d,r15d
0x7ddf35: jne    0x1407ddf3f
0x7ddf37: mov    edx,DWORD PTR [rip+0x1c0eeeb]        # 0x1423ece28
0x7ddf3d: jmp    0x1407ddfa6
0x7ddf3f: lea    rcx,[rip+0x1e8882a]        # 0x142666770
0x7ddf46: cmp    r11d,r14d
0x7ddf49: jne    0x1407ddf53
0x7ddf4b: mov    edx,DWORD PTR [rip+0x1c0eedf]        # 0x1423ece30
0x7ddf51: jmp    0x1407ddfad
0x7ddf53: mov    edx,DWORD PTR [rip+0x1c0eed3]        # 0x1423ece2c
0x7ddf59: jmp    0x1407ddfad
0x7ddf5b: cmp    ebx,edi
0x7ddf5d: jne    0x1407ddf88
0x7ddf5f: cmp    r11d,r15d
0x7ddf62: jne    0x1407ddf6c
0x7ddf64: mov    edx,DWORD PTR [rip+0x1c0eed6]        # 0x1423ece40
0x7ddf6a: jmp    0x1407ddfa6
0x7ddf6c: lea    rcx,[rip+0x1e887fd]        # 0x142666770
0x7ddf73: cmp    r11d,r14d
0x7ddf76: jne    0x1407ddf80
0x7ddf78: mov    edx,DWORD PTR [rip+0x1c0eeca]        # 0x1423ece48
0x7ddf7e: jmp    0x1407ddfad
0x7ddf80: mov    edx,DWORD PTR [rip+0x1c0eebe]        # 0x1423ece44
0x7ddf86: jmp    0x1407ddfad
0x7ddf88: cmp    r11d,r15d
0x7ddf8b: jne    0x1407ddf95
0x7ddf8d: mov    edx,DWORD PTR [rip+0x1c0eea1]        # 0x1423ece34
0x7ddf93: jmp    0x1407ddfa6
0x7ddf95: cmp    r11d,r14d
0x7ddf98: mov    edx,DWORD PTR [rip+0x1c0ee9e]        # 0x1423ece3c
0x7ddf9e: je     0x1407ddfa6
0x7ddfa0: mov    edx,DWORD PTR [rip+0x1c0ee92]        # 0x1423ece38
0x7ddfa6: lea    rcx,[rip+0x1e887c3]        # 0x142666770
0x7ddfad: call   0x140af1390
0x7ddfb2: inc    r11d
0x7ddfb5: cmp    r11d,r14d
0x7ddfb8: jle    0x1407ddf20
0x7ddfbe: inc    ebx
0x7ddfc0: cmp    ebx,edi
0x7ddfc2: jle    0x1407ddf10
0x7ddfc8: lea    eax,[r15+0x2]
0x7ddfcc: mov    DWORD PTR [rip+0x1e88822],eax        # 0x1426667f4
0x7ddfd2: lea    r14d,[r13+0x1]
0x7ddfd6: mov    DWORD PTR [rip+0x1e8881b],r14d        # 0x1426667f8
0x7ddfdd: xorps  xmm0,xmm0
0x7ddfe0: movups XMMWORD PTR [rbp-0x39],xmm0
0x7ddfe4: movdqa xmm1,XMMWORD PTR [rip+0xfc8394]        # 0x1417a6380
0x7ddfec: movdqu XMMWORD PTR [rbp-0x29],xmm1
0x7ddff1: mov    eax,DWORD PTR [rip+0xeea67d]        # 0x1416c8674 ; cstring='Update'
0x7ddff7: mov    DWORD PTR [rbp-0x39],eax
0x7ddffa: movzx  eax,WORD PTR [rip+0xeea677]        # 0x1416c8678 ; cstring='te'
0x7de001: mov    WORD PTR [rbp-0x35],ax
0x7de005: mov    BYTE PTR [rbp-0x33],0x0
0x7de009: xor    r9d,r9d
0x7de00c: lea    rdx,[rbp-0x39]
0x7de010: lea    rcx,[rip+0x1e88759]        # 0x142666770
0x7de017: call   0x140af0220
0x7de01c: nop
0x7de01d: lea    rcx,[rbp-0x39]
0x7de021: call   0x140070e10
0x7de026: mov    ebx,r13d
0x7de029: cmp    r13d,edi
0x7de02c: jg     0x1407de0fb
0x7de032: mov    eax,DWORD PTR [rbp-0x65]
0x7de035: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x7de040: mov    r11d,eax
0x7de043: cmp    eax,r12d
0x7de046: jg     0x1407de0f1
0x7de04c: nop    DWORD PTR [rax+0x0]
0x7de050: mov    DWORD PTR [rip+0x1e8879d],r11d        # 0x1426667f4
0x7de057: mov    DWORD PTR [rip+0x1e8879b],ebx        # 0x1426667f8
0x7de05d: cmp    ebx,r13d
0x7de060: jne    0x1407de08b
0x7de062: cmp    r11d,eax
0x7de065: jne    0x1407de06f
0x7de067: mov    edx,DWORD PTR [rip+0x1c0edbb]        # 0x1423ece28
0x7de06d: jmp    0x1407de0d6
0x7de06f: lea    rcx,[rip+0x1e886fa]        # 0x142666770
0x7de076: cmp    r11d,r12d
0x7de079: jne    0x1407de083
0x7de07b: mov    edx,DWORD PTR [rip+0x1c0edaf]        # 0x1423ece30
0x7de081: jmp    0x1407de0dd
0x7de083: mov    edx,DWORD PTR [rip+0x1c0eda3]        # 0x1423ece2c
0x7de089: jmp    0x1407de0dd
0x7de08b: cmp    ebx,edi
0x7de08d: jne    0x1407de0b8
0x7de08f: cmp    r11d,eax
0x7de092: jne    0x1407de09c
0x7de094: mov    edx,DWORD PTR [rip+0x1c0eda6]        # 0x1423ece40
0x7de09a: jmp    0x1407de0d6
0x7de09c: lea    rcx,[rip+0x1e886cd]        # 0x142666770
0x7de0a3: cmp    r11d,r12d
0x7de0a6: jne    0x1407de0b0
0x7de0a8: mov    edx,DWORD PTR [rip+0x1c0ed9a]        # 0x1423ece48
0x7de0ae: jmp    0x1407de0dd
0x7de0b0: mov    edx,DWORD PTR [rip+0x1c0ed8e]        # 0x1423ece44
0x7de0b6: jmp    0x1407de0dd
0x7de0b8: cmp    r11d,eax
0x7de0bb: jne    0x1407de0c5
0x7de0bd: mov    edx,DWORD PTR [rip+0x1c0ed71]        # 0x1423ece34
0x7de0c3: jmp    0x1407de0d6
0x7de0c5: cmp    r11d,r12d
0x7de0c8: mov    edx,DWORD PTR [rip+0x1c0ed6e]        # 0x1423ece3c
0x7de0ce: je     0x1407de0d6
0x7de0d0: mov    edx,DWORD PTR [rip+0x1c0ed62]        # 0x1423ece38
0x7de0d6: lea    rcx,[rip+0x1e88693]        # 0x142666770
0x7de0dd: call   0x140af1390
0x7de0e2: inc    r11d
0x7de0e5: cmp    r11d,r12d
0x7de0e8: mov    eax,DWORD PTR [rbp-0x65]
0x7de0eb: jle    0x1407de050
0x7de0f1: inc    ebx
0x7de0f3: cmp    ebx,edi
0x7de0f5: jle    0x1407de040
0x7de0fb: mov    eax,DWORD PTR [rbp-0x65]
0x7de0fe: add    eax,0x2
0x7de101: mov    DWORD PTR [rip+0x1e886ed],eax        # 0x1426667f4
0x7de107: mov    DWORD PTR [rip+0x1e886ea],r14d        # 0x1426667f8
0x7de10e: xorps  xmm0,xmm0
0x7de111: movups XMMWORD PTR [rbp-0x39],xmm0
0x7de115: movdqa xmm1,XMMWORD PTR [rip+0xfc82a3]        # 0x1417a63c0
0x7de11d: movdqu XMMWORD PTR [rbp-0x29],xmm1
0x7de122: movsd  xmm0,QWORD PTR [rip+0xeea5be]        # 0x1416c86e8 ; cstring='Update all'
0x7de12a: movsd  QWORD PTR [rbp-0x39],xmm0
0x7de12f: movzx  eax,WORD PTR [rip+0xeea5ba]        # 0x1416c86f0 ; cstring='ll'
0x7de136: mov    WORD PTR [rbp-0x31],ax
0x7de13a: mov    BYTE PTR [rbp-0x2f],0x0
0x7de13e: xor    r9d,r9d
0x7de141: lea    rdx,[rbp-0x39]
0x7de145: lea    rcx,[rip+0x1e88624]        # 0x142666770
0x7de14c: call   0x140af0220
0x7de151: nop
0x7de152: lea    rcx,[rbp-0x39]
0x7de156: call   0x140070e10
0x7de15b: cmp    QWORD PTR [rsi+0x20],0x0
0x7de160: je     0x1407de3fd
0x7de166: mov    ebx,r13d
0x7de169: cmp    r13d,edi
0x7de16c: jg     0x1407de23b
0x7de172: mov    esi,DWORD PTR [rbp-0x49]
0x7de175: mov    eax,DWORD PTR [rbp-0x61]
0x7de178: nop    DWORD PTR [rax+rax*1+0x0]
0x7de180: mov    r11d,eax
0x7de183: cmp    eax,esi
0x7de185: jg     0x1407de231
0x7de18b: nop    DWORD PTR [rax+rax*1+0x0]
0x7de190: mov    DWORD PTR [rip+0x1e8865d],r11d        # 0x1426667f4
0x7de197: mov    DWORD PTR [rip+0x1e8865b],ebx        # 0x1426667f8
0x7de19d: cmp    ebx,r13d
0x7de1a0: jne    0x1407de1cb
0x7de1a2: cmp    r11d,eax
0x7de1a5: jne    0x1407de1af
0x7de1a7: mov    edx,DWORD PTR [rip+0x1c0ec57]        # 0x1423ece04
0x7de1ad: jmp    0x1407de216
0x7de1af: lea    rcx,[rip+0x1e885ba]        # 0x142666770
0x7de1b6: cmp    r11d,esi
0x7de1b9: jne    0x1407de1c3
0x7de1bb: mov    edx,DWORD PTR [rip+0x1c0ec4b]        # 0x1423ece0c
0x7de1c1: jmp    0x1407de21d
0x7de1c3: mov    edx,DWORD PTR [rip+0x1c0ec3f]        # 0x1423ece08
0x7de1c9: jmp    0x1407de21d
0x7de1cb: cmp    ebx,edi
0x7de1cd: jne    0x1407de1f8
0x7de1cf: cmp    r11d,eax
0x7de1d2: jne    0x1407de1dc
0x7de1d4: mov    edx,DWORD PTR [rip+0x1c0ec42]        # 0x1423ece1c
0x7de1da: jmp    0x1407de216
0x7de1dc: lea    rcx,[rip+0x1e8858d]        # 0x142666770
0x7de1e3: cmp    r11d,esi
0x7de1e6: jne    0x1407de1f0
0x7de1e8: mov    edx,DWORD PTR [rip+0x1c0ec36]        # 0x1423ece24
0x7de1ee: jmp    0x1407de21d
0x7de1f0: mov    edx,DWORD PTR [rip+0x1c0ec2a]        # 0x1423ece20
0x7de1f6: jmp    0x1407de21d
0x7de1f8: cmp    r11d,eax
0x7de1fb: jne    0x1407de205
0x7de1fd: mov    edx,DWORD PTR [rip+0x1c0ec0d]        # 0x1423ece10
0x7de203: jmp    0x1407de216
0x7de205: cmp    r11d,esi
0x7de208: mov    edx,DWORD PTR [rip+0x1c0ec0a]        # 0x1423ece18
0x7de20e: je     0x1407de216
0x7de210: mov    edx,DWORD PTR [rip+0x1c0ebfe]        # 0x1423ece14
0x7de216: lea    rcx,[rip+0x1e88553]        # 0x142666770
0x7de21d: call   0x140af1390
0x7de222: inc    r11d
0x7de225: cmp    r11d,esi
0x7de228: mov    eax,DWORD PTR [rbp-0x61]
0x7de22b: jle    0x1407de190
0x7de231: inc    ebx
0x7de233: cmp    ebx,edi
0x7de235: jle    0x1407de180
0x7de23b: mov    eax,DWORD PTR [rbp-0x61]
0x7de23e: add    eax,0x2
0x7de241: mov    DWORD PTR [rip+0x1e885ad],eax        # 0x1426667f4
0x7de247: mov    DWORD PTR [rip+0x1e885aa],r14d        # 0x1426667f8
0x7de24e: xorps  xmm0,xmm0
0x7de251: movups XMMWORD PTR [rbp-0x39],xmm0
0x7de255: movdqa xmm1,XMMWORD PTR [rip+0xfc8183]        # 0x1417a63e0
0x7de25d: movdqu XMMWORD PTR [rbp-0x29],xmm1
0x7de262: movsd  xmm0,QWORD PTR [rip+0xeea48e]        # 0x1416c86f8 ; cstring="Don't update"
0x7de26a: movsd  QWORD PTR [rbp-0x39],xmm0
0x7de26f: mov    eax,DWORD PTR [rip+0xeea48b]        # 0x1416c8700 ; cstring='date'
0x7de275: mov    DWORD PTR [rbp-0x31],eax
0x7de278: mov    BYTE PTR [rbp-0x2d],0x0
0x7de27c: xor    r9d,r9d
0x7de27f: lea    rdx,[rbp-0x39]
0x7de283: lea    rcx,[rip+0x1e884e6]        # 0x142666770
0x7de28a: call   0x140af0220
0x7de28f: nop
0x7de290: lea    rcx,[rbp-0x39]
0x7de294: call   0x140070e10
0x7de299: mov    ebx,r13d
0x7de29c: cmp    r13d,edi
0x7de29f: jg     0x1407de36b
0x7de2a5: mov    esi,DWORD PTR [rbp-0x45]
0x7de2a8: mov    eax,DWORD PTR [rbp-0x5d]
0x7de2ab: nop    DWORD PTR [rax+rax*1+0x0]
0x7de2b0: mov    r11d,eax
0x7de2b3: cmp    eax,esi
0x7de2b5: jg     0x1407de361
0x7de2bb: nop    DWORD PTR [rax+rax*1+0x0]
0x7de2c0: mov    DWORD PTR [rip+0x1e8852d],r11d        # 0x1426667f4
0x7de2c7: mov    DWORD PTR [rip+0x1e8852b],ebx        # 0x1426667f8
0x7de2cd: cmp    ebx,r13d
0x7de2d0: jne    0x1407de2fb
0x7de2d2: cmp    r11d,eax
0x7de2d5: jne    0x1407de2df
0x7de2d7: mov    edx,DWORD PTR [rip+0x1c0eb27]        # 0x1423ece04
0x7de2dd: jmp    0x1407de346
0x7de2df: lea    rcx,[rip+0x1e8848a]        # 0x142666770
0x7de2e6: cmp    r11d,esi
0x7de2e9: jne    0x1407de2f3
0x7de2eb: mov    edx,DWORD PTR [rip+0x1c0eb1b]        # 0x1423ece0c
0x7de2f1: jmp    0x1407de34d
0x7de2f3: mov    edx,DWORD PTR [rip+0x1c0eb0f]        # 0x1423ece08
0x7de2f9: jmp    0x1407de34d
0x7de2fb: cmp    ebx,edi
0x7de2fd: jne    0x1407de328
0x7de2ff: cmp    r11d,eax
0x7de302: jne    0x1407de30c
0x7de304: mov    edx,DWORD PTR [rip+0x1c0eb12]        # 0x1423ece1c
0x7de30a: jmp    0x1407de346
0x7de30c: lea    rcx,[rip+0x1e8845d]        # 0x142666770
0x7de313: cmp    r11d,esi
0x7de316: jne    0x1407de320
0x7de318: mov    edx,DWORD PTR [rip+0x1c0eb06]        # 0x1423ece24
0x7de31e: jmp    0x1407de34d
0x7de320: mov    edx,DWORD PTR [rip+0x1c0eafa]        # 0x1423ece20
0x7de326: jmp    0x1407de34d
0x7de328: cmp    r11d,eax
0x7de32b: jne    0x1407de335
0x7de32d: mov    edx,DWORD PTR [rip+0x1c0eadd]        # 0x1423ece10
0x7de333: jmp    0x1407de346
0x7de335: cmp    r11d,esi
0x7de338: mov    edx,DWORD PTR [rip+0x1c0eada]        # 0x1423ece18
0x7de33e: je     0x1407de346
0x7de340: mov    edx,DWORD PTR [rip+0x1c0eace]        # 0x1423ece14
0x7de346: lea    rcx,[rip+0x1e88423]        # 0x142666770
0x7de34d: call   0x140af1390
0x7de352: inc    r11d
0x7de355: cmp    r11d,esi
0x7de358: mov    eax,DWORD PTR [rbp-0x5d]
0x7de35b: jle    0x1407de2c0
0x7de361: inc    ebx
0x7de363: cmp    ebx,edi
0x7de365: jle    0x1407de2b0
0x7de36b: mov    eax,DWORD PTR [rbp-0x5d]
0x7de36e: add    eax,0x2
0x7de371: mov    DWORD PTR [rip+0x1e8847d],eax        # 0x1426667f4
0x7de377: mov    DWORD PTR [rip+0x1e8847a],r14d        # 0x1426667f8
0x7de37e: xorps  xmm0,xmm0
0x7de381: movups XMMWORD PTR [rbp-0x39],xmm0
0x7de385: mov    ecx,0x20
0x7de38a: call   0x140071d90
0x7de38f: mov    QWORD PTR [rbp-0x39],rax
0x7de393: movdqa xmm0,XMMWORD PTR [rip+0xfc8085]        # 0x1417a6420
0x7de39b: movdqu XMMWORD PTR [rbp-0x29],xmm0
0x7de3a0: movups xmm0,XMMWORD PTR [rip+0xeea319]        # 0x1416c86c0 ; vector="Don't update any"
0x7de3a7: movups XMMWORD PTR [rax],xmm0
0x7de3aa: mov    BYTE PTR [rax+0x10],0x0
0x7de3ae: xor    r9d,r9d
0x7de3b1: lea    rdx,[rbp-0x39]
0x7de3b5: lea    rcx,[rip+0x1e883b4]        # 0x142666770
0x7de3bc: call   0x140af0220
0x7de3c1: nop
0x7de3c2: mov    rdx,QWORD PTR [rbp-0x21]
0x7de3c6: cmp    rdx,0xf
0x7de3ca: jbe    0x1407de3fd
0x7de3cc: inc    rdx
0x7de3cf: mov    rcx,QWORD PTR [rbp-0x39]
0x7de3d3: mov    rax,rcx
0x7de3d6: cmp    rdx,0x1000
0x7de3dd: jb     0x1407de3f8
0x7de3df: add    rdx,0x27
0x7de3e3: mov    rcx,QWORD PTR [rcx-0x8]
0x7de3e7: sub    rax,rcx
0x7de3ea: add    rax,0xfffffffffffffff8
0x7de3ee: cmp    rax,0x1f
0x7de3f2: ja     0x1407de92b
0x7de3f8: call   0x14154de20
0x7de3fd: mov    ebx,r13d
0x7de400: cmp    r13d,edi
0x7de403: jg     0x1407de4cb
0x7de409: mov    esi,DWORD PTR [rbp-0x55]
0x7de40c: mov    eax,DWORD PTR [rbp-0x59]
0x7de40f: nop
0x7de410: mov    r11d,eax
0x7de413: cmp    eax,esi
0x7de415: jg     0x1407de4c1
0x7de41b: nop    DWORD PTR [rax+rax*1+0x0]
0x7de420: mov    DWORD PTR [rip+0x1e883cd],r11d        # 0x1426667f4
0x7de427: mov    DWORD PTR [rip+0x1e883cb],ebx        # 0x1426667f8
0x7de42d: cmp    ebx,r13d
0x7de430: jne    0x1407de45b
0x7de432: cmp    r11d,eax
0x7de435: jne    0x1407de43f
0x7de437: mov    edx,DWORD PTR [rip+0x1c0ea0f]        # 0x1423ece4c
0x7de43d: jmp    0x1407de4a6
0x7de43f: lea    rcx,[rip+0x1e8832a]        # 0x142666770
0x7de446: cmp    r11d,esi
0x7de449: jne    0x1407de453
0x7de44b: mov    edx,DWORD PTR [rip+0x1c0ea03]        # 0x1423ece54
0x7de451: jmp    0x1407de4ad
0x7de453: mov    edx,DWORD PTR [rip+0x1c0e9f7]        # 0x1423ece50
0x7de459: jmp    0x1407de4ad
0x7de45b: cmp    ebx,edi
0x7de45d: jne    0x1407de488
0x7de45f: cmp    r11d,eax
0x7de462: jne    0x1407de46c
0x7de464: mov    edx,DWORD PTR [rip+0x1c0e9fa]        # 0x1423ece64
0x7de46a: jmp    0x1407de4a6
0x7de46c: lea    rcx,[rip+0x1e882fd]        # 0x142666770
0x7de473: cmp    r11d,esi
0x7de476: jne    0x1407de480
0x7de478: mov    edx,DWORD PTR [rip+0x1c0e9ee]        # 0x1423ece6c
0x7de47e: jmp    0x1407de4ad
0x7de480: mov    edx,DWORD PTR [rip+0x1c0e9e2]        # 0x1423ece68
0x7de486: jmp    0x1407de4ad
0x7de488: cmp    r11d,eax
0x7de48b: jne    0x1407de495
0x7de48d: mov    edx,DWORD PTR [rip+0x1c0e9c5]        # 0x1423ece58
0x7de493: jmp    0x1407de4a6
0x7de495: cmp    r11d,esi
0x7de498: mov    edx,DWORD PTR [rip+0x1c0e9c2]        # 0x1423ece60
0x7de49e: je     0x1407de4a6
0x7de4a0: mov    edx,DWORD PTR [rip+0x1c0e9b6]        # 0x1423ece5c
0x7de4a6: lea    rcx,[rip+0x1e882c3]        # 0x142666770
0x7de4ad: call   0x140af1390
0x7de4b2: inc    r11d
0x7de4b5: cmp    r11d,esi
0x7de4b8: mov    eax,DWORD PTR [rbp-0x59]
0x7de4bb: jle    0x1407de420
0x7de4c1: inc    ebx
0x7de4c3: cmp    ebx,edi
0x7de4c5: jle    0x1407de410
0x7de4cb: mov    eax,DWORD PTR [rbp-0x59]
0x7de4ce: add    eax,0x2
0x7de4d1: mov    DWORD PTR [rip+0x1e8831d],eax        # 0x1426667f4
0x7de4d7: mov    DWORD PTR [rip+0x1e8831a],r14d        # 0x1426667f8
0x7de4de: xorps  xmm0,xmm0
0x7de4e1: movups XMMWORD PTR [rbp-0x39],xmm0
0x7de4e5: movdqa xmm1,XMMWORD PTR [rip+0xfc7f03]        # 0x1417a63f0
0x7de4ed: movdqu XMMWORD PTR [rbp-0x29],xmm1
0x7de4f2: movsd  xmm0,QWORD PTR [rip+0xeea1de]        # 0x1416c86d8 ; cstring='Back to title'
0x7de4fa: movsd  QWORD PTR [rbp-0x39],xmm0
0x7de4ff: mov    eax,DWORD PTR [rip+0xeea1db]        # 0x1416c86e0 ; cstring='title'
0x7de505: mov    DWORD PTR [rbp-0x31],eax
0x7de508: movzx  eax,BYTE PTR [rip+0xeea1d5]        # 0x1416c86e4 ; cstring='e'
0x7de50f: mov    BYTE PTR [rbp-0x2d],al
0x7de512: mov    BYTE PTR [rbp-0x2c],0x0
0x7de516: xor    r9d,r9d
0x7de519: lea    rdx,[rbp-0x39]
0x7de51d: lea    rcx,[rip+0x1e8824c]        # 0x142666770
0x7de524: call   0x140af0220
0x7de529: nop
0x7de52a: lea    rcx,[rbp-0x39]
0x7de52e: call   0x140070e10
0x7de533: jmp    0x1407de938
0x7de538: cmp    BYTE PTR [rsi+0xd],0x0
0x7de53c: je     0x1407de938
0x7de542: lea    eax,[rdi+rbx*1]
0x7de545: cdq
0x7de546: sub    eax,edx
0x7de548: sar    eax,1
0x7de54a: lea    esi,[rax-0x23]
0x7de54d: lea    ebx,[rsi+0x46]
0x7de550: lea    r12d,[r14-0xf]
0x7de554: lea    r13d,[r14-0x7]
0x7de558: lea    eax,[rbx+rsi*1]
0x7de55b: cdq
0x7de55c: sub    eax,edx
0x7de55e: sar    eax,1
0x7de560: lea    r15d,[rax-0x8]
0x7de564: lea    edi,[r15+0x10]
0x7de568: lea    eax,[r13-0x3]
0x7de56c: mov    DWORD PTR [rbp-0x69],eax
0x7de56f: lea    eax,[r13-0x1]
0x7de573: mov    DWORD PTR [rbp-0x55],eax
0x7de576: mov    DWORD PTR [rip+0x1e8827c],0x1000006        # 0x1426667fc
0x7de580: mov    r14d,r12d
0x7de583: cmp    r12d,r13d
0x7de586: jg     0x1407de64c
0x7de58c: nop    DWORD PTR [rax+0x0]
0x7de590: mov    r11d,esi
0x7de593: cmp    esi,ebx
0x7de595: jg     0x1407de640
0x7de59b: nop    DWORD PTR [rax+rax*1+0x0]
0x7de5a0: mov    DWORD PTR [rip+0x1e8824d],r11d        # 0x1426667f4
0x7de5a7: mov    DWORD PTR [rip+0x1e8824a],r14d        # 0x1426667f8
0x7de5ae: cmp    r14d,r12d
0x7de5b1: jne    0x1407de5dc
0x7de5b3: cmp    r11d,esi
0x7de5b6: jne    0x1407de5c0
0x7de5b8: mov    edx,DWORD PTR [rip+0x1c0ea6e]        # 0x1423ed02c
0x7de5be: jmp    0x1407de628
0x7de5c0: lea    rcx,[rip+0x1e881a9]        # 0x142666770
0x7de5c7: cmp    r11d,ebx
0x7de5ca: jne    0x1407de5d4
0x7de5cc: mov    edx,DWORD PTR [rip+0x1c0ea62]        # 0x1423ed034
0x7de5d2: jmp    0x1407de62f
0x7de5d4: mov    edx,DWORD PTR [rip+0x1c0ea56]        # 0x1423ed030
0x7de5da: jmp    0x1407de62f
0x7de5dc: cmp    r14d,r13d
0x7de5df: jne    0x1407de60a
0x7de5e1: cmp    r11d,esi
0x7de5e4: jne    0x1407de5ee
0x7de5e6: mov    edx,DWORD PTR [rip+0x1c0ea58]        # 0x1423ed044
0x7de5ec: jmp    0x1407de628
0x7de5ee: lea    rcx,[rip+0x1e8817b]        # 0x142666770
0x7de5f5: cmp    r11d,ebx
0x7de5f8: jne    0x1407de602
0x7de5fa: mov    edx,DWORD PTR [rip+0x1c0ea4c]        # 0x1423ed04c
0x7de600: jmp    0x1407de62f
0x7de602: mov    edx,DWORD PTR [rip+0x1c0ea40]        # 0x1423ed048
0x7de608: jmp    0x1407de62f
0x7de60a: cmp    r11d,esi
0x7de60d: jne    0x1407de617
0x7de60f: mov    edx,DWORD PTR [rip+0x1c0ea23]        # 0x1423ed038
0x7de615: jmp    0x1407de628
0x7de617: cmp    r11d,ebx
0x7de61a: mov    edx,DWORD PTR [rip+0x1c0ea20]        # 0x1423ed040
0x7de620: je     0x1407de628
0x7de622: mov    edx,DWORD PTR [rip+0x1c0ea14]        # 0x1423ed03c
0x7de628: lea    rcx,[rip+0x1e88141]        # 0x142666770
0x7de62f: call   0x140af1390
0x7de634: inc    r11d
0x7de637: cmp    r11d,ebx
0x7de63a: jle    0x1407de5a0
0x7de640: inc    r14d
0x7de643: cmp    r14d,r13d
0x7de646: jle    0x1407de590
0x7de64c: mov    DWORD PTR [rip+0x1e881a6],0x1010007        # 0x1426667fc
0x7de656: add    esi,0x2
0x7de659: mov    DWORD PTR [rip+0x1e88195],esi        # 0x1426667f4
0x7de65f: lea    eax,[r12+0x2]
0x7de664: mov    DWORD PTR [rip+0x1e8818e],eax        # 0x1426667f8
0x7de66a: mov    rax,QWORD PTR [rbp-0x41]
0x7de66e: xorps  xmm0,xmm0
0x7de671: mov    ecx,0x20
0x7de676: movups XMMWORD PTR [rbp-0x39],xmm0
0x7de67a: cmp    DWORD PTR [rax+0x10],0x0
0x7de67e: je     0x1407de6de
0x7de680: call   0x140071d90
0x7de685: mov    rdx,rax
0x7de688: mov    QWORD PTR [rbp-0x39],rax
0x7de68c: movdqa xmm0,XMMWORD PTR [rip+0xfc7e6c]        # 0x1417a6500
0x7de694: movdqu XMMWORD PTR [rbp-0x29],xmm0
0x7de699: movups xmm0,XMMWORD PTR [rip+0xeea080]        # 0x1416c8720 ; vector='Failed to find c'
0x7de6a0: movups XMMWORD PTR [rax],xmm0
0x7de6a3: movsd  xmm0,QWORD PTR [rip+0xeea085]        # 0x1416c8730 ; cstring='ompatible mod:'
0x7de6ab: movsd  QWORD PTR [rax+0x10],xmm0
0x7de6b0: mov    ecx,DWORD PTR [rip+0xeea082]        # 0x1416c8738 ; cstring='e mod:'
0x7de6b6: mov    DWORD PTR [rax+0x18],ecx
0x7de6b9: movzx  eax,WORD PTR [rip+0xeea07c]        # 0x1416c873c ; cstring='d:'
0x7de6c0: mov    WORD PTR [rdx+0x1c],ax
0x7de6c4: mov    BYTE PTR [rdx+0x1e],0x0
0x7de6c8: xor    r9d,r9d
0x7de6cb: lea    rdx,[rbp-0x39]
0x7de6cf: lea    rcx,[rip+0x1e8809a]        # 0x142666770
0x7de6d6: call   0x140af0220
0x7de6db: nop
0x7de6dc: jmp    0x1407de72a
0x7de6de: call   0x140071d90
0x7de6e3: mov    QWORD PTR [rbp-0x39],rax
0x7de6e7: movdqa xmm0,XMMWORD PTR [rip+0xfc7d91]        # 0x1417a6480
0x7de6ef: movdqu XMMWORD PTR [rbp-0x29],xmm0
0x7de6f4: movups xmm0,XMMWORD PTR [rip+0xeea00d]        # 0x1416c8708 ; vector='Failed to instal'
0x7de6fb: movups XMMWORD PTR [rax],xmm0
0x7de6fe: mov    ecx,DWORD PTR [rip+0xeea014]        # 0x1416c8718 ; cstring='l mod:'
0x7de704: mov    DWORD PTR [rax+0x10],ecx
0x7de707: movzx  ecx,WORD PTR [rip+0xeea00e]        # 0x1416c871c ; cstring='d:'
0x7de70e: mov    WORD PTR [rax+0x14],cx
0x7de712: mov    BYTE PTR [rax+0x16],0x0
0x7de716: xor    r9d,r9d
0x7de719: lea    rdx,[rbp-0x39]
0x7de71d: lea    rcx,[rip+0x1e8804c]        # 0x142666770
0x7de724: call   0x140af0220
0x7de729: nop
0x7de72a: mov    rdx,QWORD PTR [rbp-0x21]
0x7de72e: cmp    rdx,0xf
0x7de732: jbe    0x1407de765
0x7de734: inc    rdx
0x7de737: mov    rcx,QWORD PTR [rbp-0x39]
0x7de73b: cmp    rdx,0x1000
0x7de742: mov    rax,rcx
0x7de745: jb     0x1407de760
0x7de747: mov    rcx,QWORD PTR [rcx-0x8]
0x7de74b: sub    rax,rcx
0x7de74e: add    rdx,0x27
0x7de752: add    rax,0xfffffffffffffff8
0x7de756: cmp    rax,0x1f
0x7de75a: ja     0x1407de92b
0x7de760: call   0x14154de20
0x7de765: mov    DWORD PTR [rip+0x1e88089],esi        # 0x1426667f4
0x7de76b: lea    eax,[r12+0x3]
0x7de770: mov    DWORD PTR [rip+0x1e88082],eax        # 0x1426667f8
0x7de776: xor    r9d,r9d
0x7de779: lea    rdx,[rbp+0x7]
0x7de77d: lea    rcx,[rip+0x1e87fec]        # 0x142666770
0x7de784: call   0x140af0220
0x7de789: xorps  xmm0,xmm0
0x7de78c: movups XMMWORD PTR [rbp-0x39],xmm0
0x7de790: movdqa xmm1,XMMWORD PTR [rip+0xfc7b98]        # 0x1417a6330
0x7de798: movdqu XMMWORD PTR [rbp-0x29],xmm1
0x7de79d: mov    WORD PTR [rbp-0x39],0x20
0x7de7a3: xor    r9d,r9d
0x7de7a6: lea    rdx,[rbp-0x39]
0x7de7aa: lea    rcx,[rip+0x1e87fbf]        # 0x142666770
0x7de7b1: call   0x140af0220
0x7de7b6: nop
0x7de7b7: lea    rcx,[rbp-0x39]
0x7de7bb: call   0x140070e10
0x7de7c0: xor    r9d,r9d
0x7de7c3: lea    rdx,[rbp-0x19]
0x7de7c7: lea    rcx,[rip+0x1e87fa2]        # 0x142666770
0x7de7ce: call   0x140af0220
0x7de7d3: mov    ecx,DWORD PTR [rbp-0x69]
0x7de7d6: mov    ebx,ecx
0x7de7d8: mov    esi,DWORD PTR [rbp-0x55]
0x7de7db: cmp    ecx,esi
0x7de7dd: jg     0x1407de89a
0x7de7e3: mov    r11d,r15d
0x7de7e6: cmp    r15d,edi
0x7de7e9: jg     0x1407de890
0x7de7ef: nop
0x7de7f0: mov    DWORD PTR [rip+0x1e87ffd],r11d        # 0x1426667f4
0x7de7f7: mov    DWORD PTR [rip+0x1e87ffb],ebx        # 0x1426667f8
0x7de7fd: cmp    ebx,ecx
0x7de7ff: jne    0x1407de82a
0x7de801: cmp    r11d,r15d
0x7de804: jne    0x1407de80e
0x7de806: mov    edx,DWORD PTR [rip+0x1c0e640]        # 0x1423ece4c
0x7de80c: jmp    0x1407de875
0x7de80e: lea    rcx,[rip+0x1e87f5b]        # 0x142666770
0x7de815: cmp    r11d,edi
0x7de818: jne    0x1407de822
0x7de81a: mov    edx,DWORD PTR [rip+0x1c0e634]        # 0x1423ece54
0x7de820: jmp    0x1407de87c
0x7de822: mov    edx,DWORD PTR [rip+0x1c0e628]        # 0x1423ece50
0x7de828: jmp    0x1407de87c
0x7de82a: cmp    ebx,esi
0x7de82c: jne    0x1407de857
0x7de82e: cmp    r11d,r15d
0x7de831: jne    0x1407de83b
0x7de833: mov    edx,DWORD PTR [rip+0x1c0e62b]        # 0x1423ece64
0x7de839: jmp    0x1407de875
0x7de83b: lea    rcx,[rip+0x1e87f2e]        # 0x142666770
0x7de842: cmp    r11d,edi
0x7de845: jne    0x1407de84f
0x7de847: mov    edx,DWORD PTR [rip+0x1c0e61f]        # 0x1423ece6c
0x7de84d: jmp    0x1407de87c
0x7de84f: mov    edx,DWORD PTR [rip+0x1c0e613]        # 0x1423ece68
0x7de855: jmp    0x1407de87c
0x7de857: cmp    r11d,r15d
0x7de85a: jne    0x1407de864
0x7de85c: mov    edx,DWORD PTR [rip+0x1c0e5f6]        # 0x1423ece58
0x7de862: jmp    0x1407de875
0x7de864: cmp    r11d,edi
0x7de867: mov    edx,DWORD PTR [rip+0x1c0e5f3]        # 0x1423ece60
0x7de86d: je     0x1407de875
0x7de86f: mov    edx,DWORD PTR [rip+0x1c0e5e7]        # 0x1423ece5c
0x7de875: lea    rcx,[rip+0x1e87ef4]        # 0x142666770
0x7de87c: call   0x140af1390
0x7de881: inc    r11d
0x7de884: cmp    r11d,edi
0x7de887: mov    ecx,DWORD PTR [rbp-0x69]
0x7de88a: jle    0x1407de7f0
0x7de890: inc    ebx
0x7de892: cmp    ebx,esi
0x7de894: jle    0x1407de7e3
0x7de89a: lea    eax,[r15+0x2]
0x7de89e: mov    DWORD PTR [rip+0x1e87f50],eax        # 0x1426667f4
0x7de8a4: lea    eax,[rcx+0x1]
0x7de8a7: mov    DWORD PTR [rip+0x1e87f4b],eax        # 0x1426667f8
0x7de8ad: xorps  xmm0,xmm0
0x7de8b0: movups XMMWORD PTR [rbp-0x39],xmm0
0x7de8b4: movdqa xmm1,XMMWORD PTR [rip+0xfc7b34]        # 0x1417a63f0
0x7de8bc: movdqu XMMWORD PTR [rbp-0x29],xmm1
0x7de8c1: movsd  xmm0,QWORD PTR [rip+0xee9e0f]        # 0x1416c86d8 ; cstring='Back to title'
0x7de8c9: movsd  QWORD PTR [rbp-0x39],xmm0
0x7de8ce: mov    eax,DWORD PTR [rip+0xee9e0c]        # 0x1416c86e0 ; cstring='title'
0x7de8d4: mov    DWORD PTR [rbp-0x31],eax
0x7de8d7: movzx  eax,BYTE PTR [rip+0xee9e06]        # 0x1416c86e4 ; cstring='e'
0x7de8de: mov    BYTE PTR [rbp-0x2d],al
0x7de8e1: mov    BYTE PTR [rbp-0x2c],0x0
0x7de8e5: xor    r9d,r9d
0x7de8e8: lea    rdx,[rbp-0x39]
0x7de8ec: lea    rcx,[rip+0x1e87e7d]        # 0x142666770
0x7de8f3: call   0x140af0220
0x7de8f8: nop
0x7de8f9: mov    rdx,QWORD PTR [rbp-0x21]
0x7de8fd: cmp    rdx,0xf
0x7de901: jbe    0x1407de938
0x7de903: inc    rdx
0x7de906: mov    rcx,QWORD PTR [rbp-0x39]
0x7de90a: mov    rax,rcx
0x7de90d: cmp    rdx,0x1000
0x7de914: jb     0x1407de932
0x7de916: add    rdx,0x27
0x7de91a: mov    rcx,QWORD PTR [rcx-0x8]
0x7de91e: sub    rax,rcx
0x7de921: add    rax,0xfffffffffffffff8
0x7de925: cmp    rax,0x1f
0x7de929: jbe    0x1407de932
0x7de92b: call   QWORD PTR [rip+0xe1d197]        # 0x1415fbac8
0x7de931: int3
0x7de932: call   0x14154de20
0x7de937: nop
0x7de938: lea    rcx,[rbp-0x19]
0x7de93c: call   0x140070e10
0x7de941: nop
0x7de942: lea    rcx,[rbp+0x7]
0x7de946: call   0x140070e10
0x7de94b: mov    rcx,QWORD PTR [rbp+0x27]
0x7de94f: xor    rcx,rsp
0x7de952: call   0x14154de00
0x7de957: lea    r11,[rsp+0xc0]
0x7de95f: mov    rbx,QWORD PTR [r11+0x38]
0x7de963: mov    rsi,QWORD PTR [r11+0x40]
0x7de967: mov    rdi,QWORD PTR [r11+0x48]
0x7de96b: mov    rsp,r11
0x7de96e: pop    r15
0x7de970: pop    r14
0x7de972: pop    r13
0x7de974: pop    r12
0x7de976: pop    rbp
0x7de977: ret
