0x140aaa930: mov     QWORD PTR [rsp+0x18],rbx
0x140aaa935: mov     QWORD PTR [rsp+0x20],rsi
0x140aaa93a: push    rbp
0x140aaa93b: push    rdi
0x140aaa93c: push    r12
0x140aaa93e: push    r14
0x140aaa940: push    r15
0x140aaa942: mov     rbp,rsp
0x140aaa945: sub     rsp,0x50
0x140aaa949: mov     rax,QWORD PTR [rip+0xe0d6f0]        # 0x1418b8040
0x140aaa950: xor     rax,rsp
0x140aaa953: mov     QWORD PTR [rbp-0x10],rax
0x140aaa957: mov     rsi,rdx
0x140aaa95a: mov     rdi,rcx
0x140aaa95d: cmp     BYTE PTR [rcx+0x72],0x0
0x140aaa961: je      0x140aaafac
0x140aaa967: xor     r12d,r12d
0x140aaa96a: mov     r14d,r12d
0x140aaa96d: movsxd  rax,DWORD PTR [rip+0xe0d8a4]        # 0x1418b8218
0x140aaa974: cmp     eax,0xa
0x140aaa977: ja      0x140aaa984
0x140aaa979: lea     r14,[rip+0x19024e0]        # 0x1423ace60
0x140aaa980: mov     r14d,DWORD PTR [r14+rax*4]
0x140aaa984: mov     QWORD PTR [rdx+0x10],r12
0x140aaa988: mov     rax,rsi
0x140aaa98b: cmp     QWORD PTR [rdx+0x18],0xf
0x140aaa990: jbe     0x140aaa995
0x140aaa992: mov     rax,QWORD PTR [rdx]
0x140aaa995: mov     BYTE PTR [rax],r12b
0x140aaa998: cmp     QWORD PTR [rcx+0x30],r12
0x140aaa99c: je      0x140aaa9dd
0x140aaa99e: test    r14d,0xfffffffd
0x140aaa9a5: jne     0x140aaa9dd
0x140aaa9a7: mov     dl,0x60
0x140aaa9a9: mov     rcx,rsi
0x140aaa9ac: call    0x1400bb140
0x140aaa9b1: lea     rbx,[rdi+0x20]
0x140aaa9b5: mov     rdx,rbx
0x140aaa9b8: cmp     QWORD PTR [rbx+0x18],0xf
0x140aaa9bd: jbe     0x140aaa9c2
0x140aaa9bf: mov     rdx,QWORD PTR [rbx]
0x140aaa9c2: mov     r8,QWORD PTR [rbx+0x10]
0x140aaa9c6: mov     rcx,rsi
0x140aaa9c9: call    0x140070fd0
0x140aaa9ce: mov     dl,0x27
0x140aaa9d0: mov     rcx,rsi
0x140aaa9d3: call    0x1400bb140
0x140aaa9d8: mov     r15b,0x1
0x140aaa9db: jmp     0x140aaaa25
0x140aaa9dd: mov     rdx,rdi
0x140aaa9e0: lea     rcx,[rbp-0x30]
0x140aaa9e4: call    0x140070b90
0x140aaa9e9: nop     
0x140aaa9ea: lea     rcx,[rbp-0x30]
0x140aaa9ee: call    0x1405440a0
0x140aaa9f3: lea     rdx,[rbp-0x30]
0x140aaa9f7: cmp     QWORD PTR [rbp-0x18],0xf
0x140aaa9fc: cmova   rdx,QWORD PTR [rbp-0x30]
0x140aaaa01: mov     r8,QWORD PTR [rbp-0x20]
0x140aaaa05: mov     rcx,rsi
0x140aaaa08: call    0x140070fd0
0x140aaaa0d: mov     rbx,QWORD PTR [rdi+0x10]
0x140aaaa11: lea     rcx,[rbp-0x30]
0x140aaaa15: call    0x140070e10
0x140aaaa1a: test    rbx,rbx
0x140aaaa1d: setne   r15b
0x140aaaa21: lea     rbx,[rdi+0x20]
0x140aaaa25: cmp     QWORD PTR [rdi+0x30],0x0
0x140aaaa2a: je      0x140aaaa8d
0x140aaaa2c: cmp     r14d,0x1
0x140aaaa30: jne     0x140aaaa7c
0x140aaaa32: test    r15b,r15b
0x140aaaa35: je      0x140aaaa4c
0x140aaaa37: mov     r8d,0x1
0x140aaaa3d: lea     rdx,[rip+0xb53f28]        # 0x1415fe96c ; literal=' '
0x140aaaa44: mov     rcx,rsi
0x140aaaa47: call    0x140070fd0
0x140aaaa4c: mov     dl,0x60
0x140aaaa4e: mov     rcx,rsi
0x140aaaa51: call    0x1400bb140
0x140aaaa56: mov     r8,QWORD PTR [rbx+0x10]
0x140aaaa5a: cmp     QWORD PTR [rbx+0x18],0xf
0x140aaaa5f: jbe     0x140aaaa64
0x140aaaa61: mov     rbx,QWORD PTR [rbx]
0x140aaaa64: mov     rdx,rbx
0x140aaaa67: mov     rcx,rsi
0x140aaaa6a: call    0x140070fd0
0x140aaaa6f: mov     dl,0x27
0x140aaaa71: mov     rcx,rsi
0x140aaaa74: call    0x1400bb140
0x140aaaa79: mov     r15b,0x1
0x140aaaa7c: cmp     QWORD PTR [rdi+0x30],0x0
0x140aaaa81: je      0x140aaaa8d
0x140aaaa83: cmp     r14d,0x2
0x140aaaa87: je      0x140aaafac
0x140aaaa8d: movsxd  rax,DWORD PTR [rdi+0x40]
0x140aaaa91: mov     ebx,0xf
0x140aaaa96: cmp     eax,0xffffffff
0x140aaaa99: jne     0x140aaaaa4
0x140aaaa9b: cmp     DWORD PTR [rdi+0x44],eax
0x140aaaa9e: je      0x140aaabf1
0x140aaaaa4: xorps   xmm0,xmm0
0x140aaaaa7: movups  XMMWORD PTR [rbp-0x30],xmm0
0x140aaaaab: mov     QWORD PTR [rbp-0x20],r12
0x140aaaaaf: mov     QWORD PTR [rbp-0x18],rbx
0x140aaaab3: mov     BYTE PTR [rbp-0x30],0x0
0x140aaaab7: movsxd  rcx,DWORD PTR [rdi+0x6c]
0x140aaaabb: test    eax,eax
0x140aaaabd: js      0x140aaab2a
0x140aaaabf: mov     r8,rax
0x140aaaac2: mov     rax,QWORD PTR [rip+0x1a5f02f]        # 0x142509af8
0x140aaaac9: sub     rax,QWORD PTR [rip+0x1a5f020]        # 0x142509af0
0x140aaaad0: sar     rax,0x3
0x140aaaad4: cmp     r8,rax
0x140aaaad7: jae     0x140aaab2a
0x140aaaad9: test    ecx,ecx
0x140aaaadb: js      0x140aaab2a
0x140aaaadd: mov     rax,QWORD PTR [rip+0x1a5f044]        # 0x142509b28
0x140aaaae4: mov     rdx,QWORD PTR [rip+0x1a5f035]        # 0x142509b20
0x140aaaaeb: sub     rax,rdx
0x140aaaaee: sar     rax,0x3
0x140aaaaf2: cmp     rcx,rax
0x140aaaaf5: jae     0x140aaab31
0x140aaaaf7: mov     rax,QWORD PTR [rdx+rcx*8]
0x140aaaafb: mov     r9,QWORD PTR [rax+0x50]
0x140aaaaff: mov     rcx,QWORD PTR [rax+0x58]
0x140aaab03: sub     rcx,r9
0x140aaab06: sar     rcx,0x3
0x140aaab0a: cmp     rcx,r8
0x140aaab0d: jb      0x140aaab31
0x140aaab0f: mov     rdx,QWORD PTR [r9+r8*8]
0x140aaab13: mov     r8,QWORD PTR [rdx+0x10]
0x140aaab17: cmp     QWORD PTR [rdx+0x18],0xf
0x140aaab1c: jbe     0x140aaab21
0x140aaab1e: mov     rdx,QWORD PTR [rdx]
0x140aaab21: lea     rcx,[rbp-0x30]
0x140aaab25: call    0x140070fd0
0x140aaab2a: mov     rdx,QWORD PTR [rip+0x1a5efef]        # 0x142509b20
0x140aaab31: movsxd  rcx,DWORD PTR [rdi+0x6c]
0x140aaab35: movsxd  rax,DWORD PTR [rdi+0x44]
0x140aaab39: test    eax,eax
0x140aaab3b: js      0x140aaaba1
0x140aaab3d: mov     r8,rax
0x140aaab40: mov     rax,QWORD PTR [rip+0x1a5efb1]        # 0x142509af8
0x140aaab47: sub     rax,QWORD PTR [rip+0x1a5efa2]        # 0x142509af0
0x140aaab4e: sar     rax,0x3
0x140aaab52: cmp     r8,rax
0x140aaab55: jae     0x140aaaba1
0x140aaab57: test    ecx,ecx
0x140aaab59: js      0x140aaaba1
0x140aaab5b: mov     rax,QWORD PTR [rip+0x1a5efc6]        # 0x142509b28
0x140aaab62: sub     rax,rdx
0x140aaab65: sar     rax,0x3
0x140aaab69: cmp     rcx,rax
0x140aaab6c: jae     0x140aaaba1
0x140aaab6e: mov     rax,QWORD PTR [rdx+rcx*8]
0x140aaab72: mov     rdx,QWORD PTR [rax+0x50]
0x140aaab76: mov     rcx,QWORD PTR [rax+0x58]
0x140aaab7a: sub     rcx,rdx
0x140aaab7d: sar     rcx,0x3
0x140aaab81: cmp     rcx,r8
0x140aaab84: jb      0x140aaaba1
0x140aaab86: mov     rdx,QWORD PTR [rdx+r8*8]
0x140aaab8a: mov     r8,QWORD PTR [rdx+0x10]
0x140aaab8e: cmp     QWORD PTR [rdx+0x18],0xf
0x140aaab93: jbe     0x140aaab98
0x140aaab95: mov     rdx,QWORD PTR [rdx]
0x140aaab98: lea     rcx,[rbp-0x30]
0x140aaab9c: call    0x140070fd0
0x140aaaba1: cmp     QWORD PTR [rbp-0x20],0x0
0x140aaaba6: je      0x140aaabe8
0x140aaaba8: test    r15b,r15b
0x140aaabab: je      0x140aaabc2
0x140aaabad: mov     r8d,0x1
0x140aaabb3: lea     rdx,[rip+0xb53db2]        # 0x1415fe96c ; literal=' '
0x140aaabba: mov     rcx,rsi
0x140aaabbd: call    0x140070fd0
0x140aaabc2: lea     rcx,[rbp-0x30]
0x140aaabc6: call    0x1405440a0
0x140aaabcb: lea     rdx,[rbp-0x30]
0x140aaabcf: cmp     QWORD PTR [rbp-0x18],0xf
0x140aaabd4: cmova   rdx,QWORD PTR [rbp-0x30]
0x140aaabd9: mov     r8,QWORD PTR [rbp-0x20]
0x140aaabdd: mov     rcx,rsi
0x140aaabe0: call    0x140070fd0
0x140aaabe5: mov     r15b,0x1
0x140aaabe8: lea     rcx,[rbp-0x30]
0x140aaabec: call    0x140070e10
0x140aaabf1: cmp     DWORD PTR [rdi+0x54],0xffffffff
0x140aaabf5: jne     0x140aaac07
0x140aaabf7: cmp     DWORD PTR [rdi+0x48],0xffffffff
0x140aaabfb: jne     0x140aaac07
0x140aaabfd: cmp     DWORD PTR [rdi+0x4c],0xffffffff
0x140aaac01: je      0x140aaae8a
0x140aaac07: xorps   xmm0,xmm0
0x140aaac0a: movups  XMMWORD PTR [rbp-0x30],xmm0
0x140aaac0e: mov     QWORD PTR [rbp-0x20],r12
0x140aaac12: mov     QWORD PTR [rbp-0x18],rbx
0x140aaac16: mov     BYTE PTR [rbp-0x30],0x0
0x140aaac1a: movsxd  rcx,DWORD PTR [rdi+0x6c]
0x140aaac1e: movsxd  rax,DWORD PTR [rdi+0x48]
0x140aaac22: test    eax,eax
0x140aaac24: js      0x140aaac91
0x140aaac26: mov     r8,rax
0x140aaac29: mov     rax,QWORD PTR [rip+0x1a5eec8]        # 0x142509af8
0x140aaac30: sub     rax,QWORD PTR [rip+0x1a5eeb9]        # 0x142509af0
0x140aaac37: sar     rax,0x3
0x140aaac3b: cmp     r8,rax
0x140aaac3e: jae     0x140aaac91
0x140aaac40: test    ecx,ecx
0x140aaac42: js      0x140aaac91
0x140aaac44: mov     rax,QWORD PTR [rip+0x1a5eedd]        # 0x142509b28
0x140aaac4b: mov     rdx,QWORD PTR [rip+0x1a5eece]        # 0x142509b20
0x140aaac52: sub     rax,rdx
0x140aaac55: sar     rax,0x3
0x140aaac59: cmp     rcx,rax
0x140aaac5c: jae     0x140aaac98
0x140aaac5e: mov     rax,QWORD PTR [rdx+rcx*8]
0x140aaac62: mov     r9,QWORD PTR [rax+0x50]
0x140aaac66: mov     rcx,QWORD PTR [rax+0x58]
0x140aaac6a: sub     rcx,r9
0x140aaac6d: sar     rcx,0x3
0x140aaac71: cmp     rcx,r8
0x140aaac74: jb      0x140aaac98
0x140aaac76: mov     rdx,QWORD PTR [r9+r8*8]
0x140aaac7a: mov     r8,QWORD PTR [rdx+0x10]
0x140aaac7e: cmp     QWORD PTR [rdx+0x18],0xf
0x140aaac83: jbe     0x140aaac88
0x140aaac85: mov     rdx,QWORD PTR [rdx]
0x140aaac88: lea     rcx,[rbp-0x30]
0x140aaac8c: call    0x140070fd0
0x140aaac91: mov     rdx,QWORD PTR [rip+0x1a5ee88]        # 0x142509b20
0x140aaac98: movsxd  rcx,DWORD PTR [rdi+0x6c]
0x140aaac9c: movsxd  rax,DWORD PTR [rdi+0x4c]
0x140aaaca0: test    eax,eax
0x140aaaca2: js      0x140aaad0f
0x140aaaca4: mov     r8,rax
0x140aaaca7: mov     rax,QWORD PTR [rip+0x1a5ee4a]        # 0x142509af8
0x140aaacae: sub     rax,QWORD PTR [rip+0x1a5ee3b]        # 0x142509af0
0x140aaacb5: sar     rax,0x3
0x140aaacb9: cmp     r8,rax
0x140aaacbc: jae     0x140aaad0f
0x140aaacbe: test    ecx,ecx
0x140aaacc0: js      0x140aaad0f
0x140aaacc2: mov     rax,QWORD PTR [rip+0x1a5ee5f]        # 0x142509b28
0x140aaacc9: sub     rax,rdx
0x140aaaccc: sar     rax,0x3
0x140aaacd0: cmp     rcx,rax
0x140aaacd3: jae     0x140aaad0f
0x140aaacd5: mov     rax,QWORD PTR [rdx+rcx*8]
0x140aaacd9: mov     r9,QWORD PTR [rax+0x50]
0x140aaacdd: mov     rcx,QWORD PTR [rax+0x58]
0x140aaace1: sub     rcx,r9
0x140aaace4: sar     rcx,0x3
0x140aaace8: cmp     rcx,r8
0x140aaaceb: jb      0x140aaad0f
0x140aaaced: mov     rdx,QWORD PTR [r9+r8*8]
0x140aaacf1: mov     r8,QWORD PTR [rdx+0x10]
0x140aaacf5: cmp     QWORD PTR [rdx+0x18],0xf
0x140aaacfa: jbe     0x140aaacff
0x140aaacfc: mov     rdx,QWORD PTR [rdx]
0x140aaacff: lea     rcx,[rbp-0x30]
0x140aaad03: call    0x140070fd0
0x140aaad08: mov     rdx,QWORD PTR [rip+0x1a5ee11]        # 0x142509b20
0x140aaad0f: movsxd  rcx,DWORD PTR [rdi+0x6c]
0x140aaad13: movsxd  rax,DWORD PTR [rdi+0x50]
0x140aaad17: test    eax,eax
0x140aaad19: js      0x140aaad86
0x140aaad1b: mov     r8,rax
0x140aaad1e: mov     rax,QWORD PTR [rip+0x1a5edd3]        # 0x142509af8
0x140aaad25: sub     rax,QWORD PTR [rip+0x1a5edc4]        # 0x142509af0
0x140aaad2c: sar     rax,0x3
0x140aaad30: cmp     r8,rax
0x140aaad33: jae     0x140aaad86
0x140aaad35: test    ecx,ecx
0x140aaad37: js      0x140aaad86
0x140aaad39: mov     rax,QWORD PTR [rip+0x1a5ede8]        # 0x142509b28
0x140aaad40: sub     rax,rdx
0x140aaad43: sar     rax,0x3
0x140aaad47: cmp     rcx,rax
0x140aaad4a: jae     0x140aaad86
0x140aaad4c: mov     rax,QWORD PTR [rdx+rcx*8]
0x140aaad50: mov     r9,QWORD PTR [rax+0x50]
0x140aaad54: mov     rcx,QWORD PTR [rax+0x58]
0x140aaad58: sub     rcx,r9
0x140aaad5b: sar     rcx,0x3
0x140aaad5f: cmp     rcx,r8
0x140aaad62: jb      0x140aaad86
0x140aaad64: mov     rdx,QWORD PTR [r9+r8*8]
0x140aaad68: mov     r8,QWORD PTR [rdx+0x10]
0x140aaad6c: cmp     QWORD PTR [rdx+0x18],0xf
0x140aaad71: jbe     0x140aaad76
0x140aaad73: mov     rdx,QWORD PTR [rdx]
0x140aaad76: lea     rcx,[rbp-0x30]
0x140aaad7a: call    0x140070fd0
0x140aaad7f: mov     rdx,QWORD PTR [rip+0x1a5ed9a]        # 0x142509b20
0x140aaad86: movsxd  rcx,DWORD PTR [rdi+0x6c]
0x140aaad8a: movsxd  rax,DWORD PTR [rdi+0x54]
0x140aaad8e: test    eax,eax
0x140aaad90: js      0x140aaadfd
0x140aaad92: mov     r8,rax
0x140aaad95: mov     rax,QWORD PTR [rip+0x1a5ed5c]        # 0x142509af8
0x140aaad9c: sub     rax,QWORD PTR [rip+0x1a5ed4d]        # 0x142509af0
0x140aaada3: sar     rax,0x3
0x140aaada7: cmp     r8,rax
0x140aaadaa: jae     0x140aaadfd
0x140aaadac: test    ecx,ecx
0x140aaadae: js      0x140aaadfd
0x140aaadb0: mov     rax,QWORD PTR [rip+0x1a5ed71]        # 0x142509b28
0x140aaadb7: sub     rax,rdx
0x140aaadba: sar     rax,0x3
0x140aaadbe: cmp     rcx,rax
0x140aaadc1: jae     0x140aaadfd
0x140aaadc3: mov     rax,QWORD PTR [rdx+rcx*8]
0x140aaadc7: mov     r9,QWORD PTR [rax+0x50]
0x140aaadcb: mov     rcx,QWORD PTR [rax+0x58]
0x140aaadcf: sub     rcx,r9
0x140aaadd2: sar     rcx,0x3
0x140aaadd6: cmp     rcx,r8
0x140aaadd9: jb      0x140aaadfd
0x140aaaddb: mov     rdx,QWORD PTR [r9+r8*8]
0x140aaaddf: mov     r8,QWORD PTR [rdx+0x10]
0x140aaade3: cmp     QWORD PTR [rdx+0x18],0xf
0x140aaade8: jbe     0x140aaaded
0x140aaadea: mov     rdx,QWORD PTR [rdx]
0x140aaaded: lea     rcx,[rbp-0x30]
0x140aaadf1: call    0x140070fd0
0x140aaadf6: mov     rdx,QWORD PTR [rip+0x1a5ed23]        # 0x142509b20
0x140aaadfd: cmp     QWORD PTR [rbp-0x20],0x0
0x140aaae02: je      0x140aaae4b
0x140aaae04: test    r15b,r15b
0x140aaae07: je      0x140aaae1e
0x140aaae09: mov     r8d,0x1
0x140aaae0f: lea     rdx,[rip+0xb53b56]        # 0x1415fe96c ; literal=' '
0x140aaae16: mov     rcx,rsi
0x140aaae19: call    0x140070fd0
0x140aaae1e: lea     rcx,[rbp-0x30]
0x140aaae22: call    0x1405440a0
0x140aaae27: lea     rdx,[rbp-0x30]
0x140aaae2b: cmp     QWORD PTR [rbp-0x18],0xf
0x140aaae30: cmova   rdx,QWORD PTR [rbp-0x30]
0x140aaae35: mov     r8,QWORD PTR [rbp-0x20]
0x140aaae39: mov     rcx,rsi
0x140aaae3c: call    0x140070fd0
0x140aaae41: mov     r15b,0x1
0x140aaae44: mov     rdx,QWORD PTR [rip+0x1a5ecd5]        # 0x142509b20
0x140aaae4b: mov     rax,QWORD PTR [rbp-0x18]
0x140aaae4f: cmp     rax,0xf
0x140aaae53: jbe     0x140aaae91
0x140aaae55: lea     rdx,[rax+0x1]
0x140aaae59: mov     rcx,QWORD PTR [rbp-0x30]
0x140aaae5d: mov     rax,rcx
0x140aaae60: cmp     rdx,0x1000
0x140aaae67: jb      0x140aaae85
0x140aaae69: add     rdx,0x27
0x140aaae6d: mov     rcx,QWORD PTR [rcx-0x8]
0x140aaae71: sub     rax,rcx
0x140aaae74: add     rax,0xfffffffffffffff8
0x140aaae78: cmp     rax,0x1f
0x140aaae7c: jbe     0x140aaae85
0x140aaae7e: call    QWORD PTR [rip+0xb50c44]        # 0x1415fbac8
0x140aaae84: int3    
0x140aaae85: call    0x14154de20
0x140aaae8a: mov     rdx,QWORD PTR [rip+0x1a5ec8f]        # 0x142509b20
0x140aaae91: movsxd  rax,DWORD PTR [rdi+0x58]
0x140aaae95: cmp     eax,0xffffffff
0x140aaae98: je      0x140aaafac
0x140aaae9e: xorps   xmm0,xmm0
0x140aaaea1: movups  XMMWORD PTR [rbp-0x30],xmm0
0x140aaaea5: mov     QWORD PTR [rbp-0x20],r12
0x140aaaea9: mov     QWORD PTR [rbp-0x18],rbx
0x140aaaead: mov     BYTE PTR [rbp-0x30],0x0
0x140aaaeb1: movsxd  rcx,DWORD PTR [rdi+0x6c]
0x140aaaeb5: test    eax,eax
0x140aaaeb7: js      0x140aaaf71
0x140aaaebd: mov     r8,rax
0x140aaaec0: mov     rax,QWORD PTR [rip+0x1a5ec31]        # 0x142509af8
0x140aaaec7: sub     rax,QWORD PTR [rip+0x1a5ec22]        # 0x142509af0
0x140aaaece: sar     rax,0x3
0x140aaaed2: cmp     r8,rax
0x140aaaed5: jae     0x140aaaf71
0x140aaaedb: test    ecx,ecx
0x140aaaedd: js      0x140aaaf71
0x140aaaee3: mov     rax,QWORD PTR [rip+0x1a5ec3e]        # 0x142509b28
0x140aaaeea: sub     rax,rdx
0x140aaaeed: sar     rax,0x3
0x140aaaef1: cmp     rcx,rax
0x140aaaef4: jae     0x140aaaf71
0x140aaaef6: mov     rax,QWORD PTR [rdx+rcx*8]
0x140aaaefa: mov     rdx,QWORD PTR [rax+0x50]
0x140aaaefe: mov     rcx,QWORD PTR [rax+0x58]
0x140aaaf02: sub     rcx,rdx
0x140aaaf05: sar     rcx,0x3
0x140aaaf09: cmp     rcx,r8
0x140aaaf0c: jb      0x140aaaf71
0x140aaaf0e: mov     rdx,QWORD PTR [rdx+r8*8]
0x140aaaf12: mov     r8,QWORD PTR [rdx+0x10]
0x140aaaf16: cmp     QWORD PTR [rdx+0x18],0xf
0x140aaaf1b: jbe     0x140aaaf20
0x140aaaf1d: mov     rdx,QWORD PTR [rdx]
0x140aaaf20: lea     rcx,[rbp-0x30]
0x140aaaf24: call    0x140070fd0
0x140aaaf29: cmp     QWORD PTR [rbp-0x20],0x0
0x140aaaf2e: je      0x140aaaf6d
0x140aaaf30: test    r15b,r15b
0x140aaaf33: je      0x140aaaf4a
0x140aaaf35: mov     r8d,0x1
0x140aaaf3b: lea     rdx,[rip+0xb53a2a]        # 0x1415fe96c ; literal=' '
0x140aaaf42: mov     rcx,rsi
0x140aaaf45: call    0x140070fd0
0x140aaaf4a: lea     rcx,[rbp-0x30]
0x140aaaf4e: call    0x1405440a0
0x140aaaf53: lea     rdx,[rbp-0x30]
0x140aaaf57: cmp     QWORD PTR [rbp-0x18],0xf
0x140aaaf5c: cmova   rdx,QWORD PTR [rbp-0x30]
0x140aaaf61: mov     r8,QWORD PTR [rbp-0x20]
0x140aaaf65: mov     rcx,rsi
0x140aaaf68: call    0x140070fd0
0x140aaaf6d: mov     rbx,QWORD PTR [rbp-0x18]
0x140aaaf71: cmp     rbx,0xf
0x140aaaf75: jbe     0x140aaafac
0x140aaaf77: lea     rdx,[rbx+0x1]
0x140aaaf7b: mov     rcx,QWORD PTR [rbp-0x30]
0x140aaaf7f: mov     rax,rcx
0x140aaaf82: cmp     rdx,0x1000
0x140aaaf89: jb      0x140aaafa7
0x140aaaf8b: add     rdx,0x27
0x140aaaf8f: mov     rcx,QWORD PTR [rcx-0x8]
0x140aaaf93: sub     rax,rcx
0x140aaaf96: add     rax,0xfffffffffffffff8
0x140aaaf9a: cmp     rax,0x1f
0x140aaaf9e: jbe     0x140aaafa7
0x140aaafa0: call    QWORD PTR [rip+0xb50b22]        # 0x1415fbac8
0x140aaafa6: int3    
0x140aaafa7: call    0x14154de20
0x140aaafac: mov     rcx,QWORD PTR [rbp-0x10]
0x140aaafb0: xor     rcx,rsp
0x140aaafb3: call    0x14154de00
0x140aaafb8: lea     r11,[rsp+0x50]
0x140aaafbd: mov     rbx,QWORD PTR [r11+0x40]
0x140aaafc1: mov     rsi,QWORD PTR [r11+0x48]
0x140aaafc5: mov     rsp,r11
0x140aaafc8: pop     r15
0x140aaafca: pop     r14
0x140aaafcc: pop     r12
0x140aaafce: pop     rdi
0x140aaafcf: pop     rbp
0x140aaafd0: ret     
