0x140aadad0: mov     QWORD PTR [rsp+0x18],rbx
0x140aadad5: mov     QWORD PTR [rsp+0x20],rsi
0x140aadada: push    rbp
0x140aadadb: push    rdi
0x140aadadc: push    r12
0x140aadade: push    r14
0x140aadae0: push    r15
0x140aadae2: mov     rbp,rsp
0x140aadae5: sub     rsp,0x50
0x140aadae9: mov     rax,QWORD PTR [rip+0xe10550]        # 0x1418be040
0x140aadaf0: xor     rax,rsp
0x140aadaf3: mov     QWORD PTR [rbp-0x10],rax
0x140aadaf7: mov     rsi,rdx
0x140aadafa: mov     rdi,rcx
0x140aadafd: cmp     BYTE PTR [rcx+0x72],0x0
0x140aadb01: je      0x140aae14c
0x140aadb07: xor     r12d,r12d
0x140aadb0a: mov     r14d,r12d
0x140aadb0d: movsxd  rax,DWORD PTR [rip+0xe10720]        # 0x1418be234
0x140aadb14: cmp     eax,0xa
0x140aadb17: ja      0x140aadb24
0x140aadb19: lea     r14,[rip+0x1905440]        # 0x1423b2f60
0x140aadb20: mov     r14d,DWORD PTR [r14+rax*4]
0x140aadb24: mov     QWORD PTR [rdx+0x10],r12
0x140aadb28: mov     rax,rsi
0x140aadb2b: cmp     QWORD PTR [rdx+0x18],0xf
0x140aadb30: jbe     0x140aadb35
0x140aadb32: mov     rax,QWORD PTR [rdx]
0x140aadb35: mov     BYTE PTR [rax],r12b
0x140aadb38: cmp     QWORD PTR [rcx+0x30],r12
0x140aadb3c: je      0x140aadb7d
0x140aadb3e: test    r14d,0xfffffffd
0x140aadb45: jne     0x140aadb7d
0x140aadb47: mov     dl,0x60
0x140aadb49: mov     rcx,rsi
0x140aadb4c: call    0x1400bb1b0
0x140aadb51: lea     rbx,[rdi+0x20]
0x140aadb55: mov     rdx,rbx
0x140aadb58: cmp     QWORD PTR [rbx+0x18],0xf
0x140aadb5d: jbe     0x140aadb62
0x140aadb5f: mov     rdx,QWORD PTR [rbx]
0x140aadb62: mov     r8,QWORD PTR [rbx+0x10]
0x140aadb66: mov     rcx,rsi
0x140aadb69: call    0x140071040
0x140aadb6e: mov     dl,0x27
0x140aadb70: mov     rcx,rsi
0x140aadb73: call    0x1400bb1b0
0x140aadb78: mov     r15b,0x1
0x140aadb7b: jmp     0x140aadbc5
0x140aadb7d: mov     rdx,rdi
0x140aadb80: lea     rcx,[rbp-0x30]
0x140aadb84: call    0x140070c00
0x140aadb89: nop     
0x140aadb8a: lea     rcx,[rbp-0x30]
0x140aadb8e: call    0x1405468a0
0x140aadb93: lea     rdx,[rbp-0x30]
0x140aadb97: cmp     QWORD PTR [rbp-0x18],0xf
0x140aadb9c: cmova   rdx,QWORD PTR [rbp-0x30]
0x140aadba1: mov     r8,QWORD PTR [rbp-0x20]
0x140aadba5: mov     rcx,rsi
0x140aadba8: call    0x140071040
0x140aadbad: mov     rbx,QWORD PTR [rdi+0x10]
0x140aadbb1: lea     rcx,[rbp-0x30]
0x140aadbb5: call    0x140070e80
0x140aadbba: test    rbx,rbx
0x140aadbbd: setne   r15b
0x140aadbc1: lea     rbx,[rdi+0x20]
0x140aadbc5: cmp     QWORD PTR [rdi+0x30],0x0
0x140aadbca: je      0x140aadc2d
0x140aadbcc: cmp     r14d,0x1
0x140aadbd0: jne     0x140aadc1c
0x140aadbd2: test    r15b,r15b
0x140aadbd5: je      0x140aadbec
0x140aadbd7: mov     r8d,0x1
0x140aadbdd: lea     rdx,[rip+0xb55e0c]        # 0x1416039f0 ; literal=' '
0x140aadbe4: mov     rcx,rsi
0x140aadbe7: call    0x140071040
0x140aadbec: mov     dl,0x60
0x140aadbee: mov     rcx,rsi
0x140aadbf1: call    0x1400bb1b0
0x140aadbf6: mov     r8,QWORD PTR [rbx+0x10]
0x140aadbfa: cmp     QWORD PTR [rbx+0x18],0xf
0x140aadbff: jbe     0x140aadc04
0x140aadc01: mov     rbx,QWORD PTR [rbx]
0x140aadc04: mov     rdx,rbx
0x140aadc07: mov     rcx,rsi
0x140aadc0a: call    0x140071040
0x140aadc0f: mov     dl,0x27
0x140aadc11: mov     rcx,rsi
0x140aadc14: call    0x1400bb1b0
0x140aadc19: mov     r15b,0x1
0x140aadc1c: cmp     QWORD PTR [rdi+0x30],0x0
0x140aadc21: je      0x140aadc2d
0x140aadc23: cmp     r14d,0x2
0x140aadc27: je      0x140aae14c
0x140aadc2d: movsxd  rax,DWORD PTR [rdi+0x40]
0x140aadc31: mov     ebx,0xf
0x140aadc36: cmp     eax,0xffffffff
0x140aadc39: jne     0x140aadc44
0x140aadc3b: cmp     DWORD PTR [rdi+0x44],eax
0x140aadc3e: je      0x140aadd91
0x140aadc44: xorps   xmm0,xmm0
0x140aadc47: movups  XMMWORD PTR [rbp-0x30],xmm0
0x140aadc4b: mov     QWORD PTR [rbp-0x20],r12
0x140aadc4f: mov     QWORD PTR [rbp-0x18],rbx
0x140aadc53: mov     BYTE PTR [rbp-0x30],0x0
0x140aadc57: movsxd  rcx,DWORD PTR [rdi+0x6c]
0x140aadc5b: test    eax,eax
0x140aadc5d: js      0x140aadcca
0x140aadc5f: mov     r8,rax
0x140aadc62: mov     rax,QWORD PTR [rip+0x1a61f8f]        # 0x14250fbf8
0x140aadc69: sub     rax,QWORD PTR [rip+0x1a61f80]        # 0x14250fbf0
0x140aadc70: sar     rax,0x3
0x140aadc74: cmp     r8,rax
0x140aadc77: jae     0x140aadcca
0x140aadc79: test    ecx,ecx
0x140aadc7b: js      0x140aadcca
0x140aadc7d: mov     rax,QWORD PTR [rip+0x1a61fa4]        # 0x14250fc28
0x140aadc84: mov     rdx,QWORD PTR [rip+0x1a61f95]        # 0x14250fc20
0x140aadc8b: sub     rax,rdx
0x140aadc8e: sar     rax,0x3
0x140aadc92: cmp     rcx,rax
0x140aadc95: jae     0x140aadcd1
0x140aadc97: mov     rax,QWORD PTR [rdx+rcx*8]
0x140aadc9b: mov     r9,QWORD PTR [rax+0x50]
0x140aadc9f: mov     rcx,QWORD PTR [rax+0x58]
0x140aadca3: sub     rcx,r9
0x140aadca6: sar     rcx,0x3
0x140aadcaa: cmp     rcx,r8
0x140aadcad: jb      0x140aadcd1
0x140aadcaf: mov     rdx,QWORD PTR [r9+r8*8]
0x140aadcb3: mov     r8,QWORD PTR [rdx+0x10]
0x140aadcb7: cmp     QWORD PTR [rdx+0x18],0xf
0x140aadcbc: jbe     0x140aadcc1
0x140aadcbe: mov     rdx,QWORD PTR [rdx]
0x140aadcc1: lea     rcx,[rbp-0x30]
0x140aadcc5: call    0x140071040
0x140aadcca: mov     rdx,QWORD PTR [rip+0x1a61f4f]        # 0x14250fc20
0x140aadcd1: movsxd  rcx,DWORD PTR [rdi+0x6c]
0x140aadcd5: movsxd  rax,DWORD PTR [rdi+0x44]
0x140aadcd9: test    eax,eax
0x140aadcdb: js      0x140aadd41
0x140aadcdd: mov     r8,rax
0x140aadce0: mov     rax,QWORD PTR [rip+0x1a61f11]        # 0x14250fbf8
0x140aadce7: sub     rax,QWORD PTR [rip+0x1a61f02]        # 0x14250fbf0
0x140aadcee: sar     rax,0x3
0x140aadcf2: cmp     r8,rax
0x140aadcf5: jae     0x140aadd41
0x140aadcf7: test    ecx,ecx
0x140aadcf9: js      0x140aadd41
0x140aadcfb: mov     rax,QWORD PTR [rip+0x1a61f26]        # 0x14250fc28
0x140aadd02: sub     rax,rdx
0x140aadd05: sar     rax,0x3
0x140aadd09: cmp     rcx,rax
0x140aadd0c: jae     0x140aadd41
0x140aadd0e: mov     rax,QWORD PTR [rdx+rcx*8]
0x140aadd12: mov     rdx,QWORD PTR [rax+0x50]
0x140aadd16: mov     rcx,QWORD PTR [rax+0x58]
0x140aadd1a: sub     rcx,rdx
0x140aadd1d: sar     rcx,0x3
0x140aadd21: cmp     rcx,r8
0x140aadd24: jb      0x140aadd41
0x140aadd26: mov     rdx,QWORD PTR [rdx+r8*8]
0x140aadd2a: mov     r8,QWORD PTR [rdx+0x10]
0x140aadd2e: cmp     QWORD PTR [rdx+0x18],0xf
0x140aadd33: jbe     0x140aadd38
0x140aadd35: mov     rdx,QWORD PTR [rdx]
0x140aadd38: lea     rcx,[rbp-0x30]
0x140aadd3c: call    0x140071040
0x140aadd41: cmp     QWORD PTR [rbp-0x20],0x0
0x140aadd46: je      0x140aadd88
0x140aadd48: test    r15b,r15b
0x140aadd4b: je      0x140aadd62
0x140aadd4d: mov     r8d,0x1
0x140aadd53: lea     rdx,[rip+0xb55c96]        # 0x1416039f0 ; literal=' '
0x140aadd5a: mov     rcx,rsi
0x140aadd5d: call    0x140071040
0x140aadd62: lea     rcx,[rbp-0x30]
0x140aadd66: call    0x1405468a0
0x140aadd6b: lea     rdx,[rbp-0x30]
0x140aadd6f: cmp     QWORD PTR [rbp-0x18],0xf
0x140aadd74: cmova   rdx,QWORD PTR [rbp-0x30]
0x140aadd79: mov     r8,QWORD PTR [rbp-0x20]
0x140aadd7d: mov     rcx,rsi
0x140aadd80: call    0x140071040
0x140aadd85: mov     r15b,0x1
0x140aadd88: lea     rcx,[rbp-0x30]
0x140aadd8c: call    0x140070e80
0x140aadd91: cmp     DWORD PTR [rdi+0x54],0xffffffff
0x140aadd95: jne     0x140aadda7
0x140aadd97: cmp     DWORD PTR [rdi+0x48],0xffffffff
0x140aadd9b: jne     0x140aadda7
0x140aadd9d: cmp     DWORD PTR [rdi+0x4c],0xffffffff
0x140aadda1: je      0x140aae02a
0x140aadda7: xorps   xmm0,xmm0
0x140aaddaa: movups  XMMWORD PTR [rbp-0x30],xmm0
0x140aaddae: mov     QWORD PTR [rbp-0x20],r12
0x140aaddb2: mov     QWORD PTR [rbp-0x18],rbx
0x140aaddb6: mov     BYTE PTR [rbp-0x30],0x0
0x140aaddba: movsxd  rcx,DWORD PTR [rdi+0x6c]
0x140aaddbe: movsxd  rax,DWORD PTR [rdi+0x48]
0x140aaddc2: test    eax,eax
0x140aaddc4: js      0x140aade31
0x140aaddc6: mov     r8,rax
0x140aaddc9: mov     rax,QWORD PTR [rip+0x1a61e28]        # 0x14250fbf8
0x140aaddd0: sub     rax,QWORD PTR [rip+0x1a61e19]        # 0x14250fbf0
0x140aaddd7: sar     rax,0x3
0x140aadddb: cmp     r8,rax
0x140aaddde: jae     0x140aade31
0x140aadde0: test    ecx,ecx
0x140aadde2: js      0x140aade31
0x140aadde4: mov     rax,QWORD PTR [rip+0x1a61e3d]        # 0x14250fc28
0x140aaddeb: mov     rdx,QWORD PTR [rip+0x1a61e2e]        # 0x14250fc20
0x140aaddf2: sub     rax,rdx
0x140aaddf5: sar     rax,0x3
0x140aaddf9: cmp     rcx,rax
0x140aaddfc: jae     0x140aade38
0x140aaddfe: mov     rax,QWORD PTR [rdx+rcx*8]
0x140aade02: mov     r9,QWORD PTR [rax+0x50]
0x140aade06: mov     rcx,QWORD PTR [rax+0x58]
0x140aade0a: sub     rcx,r9
0x140aade0d: sar     rcx,0x3
0x140aade11: cmp     rcx,r8
0x140aade14: jb      0x140aade38
0x140aade16: mov     rdx,QWORD PTR [r9+r8*8]
0x140aade1a: mov     r8,QWORD PTR [rdx+0x10]
0x140aade1e: cmp     QWORD PTR [rdx+0x18],0xf
0x140aade23: jbe     0x140aade28
0x140aade25: mov     rdx,QWORD PTR [rdx]
0x140aade28: lea     rcx,[rbp-0x30]
0x140aade2c: call    0x140071040
0x140aade31: mov     rdx,QWORD PTR [rip+0x1a61de8]        # 0x14250fc20
0x140aade38: movsxd  rcx,DWORD PTR [rdi+0x6c]
0x140aade3c: movsxd  rax,DWORD PTR [rdi+0x4c]
0x140aade40: test    eax,eax
0x140aade42: js      0x140aadeaf
0x140aade44: mov     r8,rax
0x140aade47: mov     rax,QWORD PTR [rip+0x1a61daa]        # 0x14250fbf8
0x140aade4e: sub     rax,QWORD PTR [rip+0x1a61d9b]        # 0x14250fbf0
0x140aade55: sar     rax,0x3
0x140aade59: cmp     r8,rax
0x140aade5c: jae     0x140aadeaf
0x140aade5e: test    ecx,ecx
0x140aade60: js      0x140aadeaf
0x140aade62: mov     rax,QWORD PTR [rip+0x1a61dbf]        # 0x14250fc28
0x140aade69: sub     rax,rdx
0x140aade6c: sar     rax,0x3
0x140aade70: cmp     rcx,rax
0x140aade73: jae     0x140aadeaf
0x140aade75: mov     rax,QWORD PTR [rdx+rcx*8]
0x140aade79: mov     r9,QWORD PTR [rax+0x50]
0x140aade7d: mov     rcx,QWORD PTR [rax+0x58]
0x140aade81: sub     rcx,r9
0x140aade84: sar     rcx,0x3
0x140aade88: cmp     rcx,r8
0x140aade8b: jb      0x140aadeaf
0x140aade8d: mov     rdx,QWORD PTR [r9+r8*8]
0x140aade91: mov     r8,QWORD PTR [rdx+0x10]
0x140aade95: cmp     QWORD PTR [rdx+0x18],0xf
0x140aade9a: jbe     0x140aade9f
0x140aade9c: mov     rdx,QWORD PTR [rdx]
0x140aade9f: lea     rcx,[rbp-0x30]
0x140aadea3: call    0x140071040
0x140aadea8: mov     rdx,QWORD PTR [rip+0x1a61d71]        # 0x14250fc20
0x140aadeaf: movsxd  rcx,DWORD PTR [rdi+0x6c]
0x140aadeb3: movsxd  rax,DWORD PTR [rdi+0x50]
0x140aadeb7: test    eax,eax
0x140aadeb9: js      0x140aadf26
0x140aadebb: mov     r8,rax
0x140aadebe: mov     rax,QWORD PTR [rip+0x1a61d33]        # 0x14250fbf8
0x140aadec5: sub     rax,QWORD PTR [rip+0x1a61d24]        # 0x14250fbf0
0x140aadecc: sar     rax,0x3
0x140aaded0: cmp     r8,rax
0x140aaded3: jae     0x140aadf26
0x140aaded5: test    ecx,ecx
0x140aaded7: js      0x140aadf26
0x140aaded9: mov     rax,QWORD PTR [rip+0x1a61d48]        # 0x14250fc28
0x140aadee0: sub     rax,rdx
0x140aadee3: sar     rax,0x3
0x140aadee7: cmp     rcx,rax
0x140aadeea: jae     0x140aadf26
0x140aadeec: mov     rax,QWORD PTR [rdx+rcx*8]
0x140aadef0: mov     r9,QWORD PTR [rax+0x50]
0x140aadef4: mov     rcx,QWORD PTR [rax+0x58]
0x140aadef8: sub     rcx,r9
0x140aadefb: sar     rcx,0x3
0x140aadeff: cmp     rcx,r8
0x140aadf02: jb      0x140aadf26
0x140aadf04: mov     rdx,QWORD PTR [r9+r8*8]
0x140aadf08: mov     r8,QWORD PTR [rdx+0x10]
0x140aadf0c: cmp     QWORD PTR [rdx+0x18],0xf
0x140aadf11: jbe     0x140aadf16
0x140aadf13: mov     rdx,QWORD PTR [rdx]
0x140aadf16: lea     rcx,[rbp-0x30]
0x140aadf1a: call    0x140071040
0x140aadf1f: mov     rdx,QWORD PTR [rip+0x1a61cfa]        # 0x14250fc20
0x140aadf26: movsxd  rcx,DWORD PTR [rdi+0x6c]
0x140aadf2a: movsxd  rax,DWORD PTR [rdi+0x54]
0x140aadf2e: test    eax,eax
0x140aadf30: js      0x140aadf9d
0x140aadf32: mov     r8,rax
0x140aadf35: mov     rax,QWORD PTR [rip+0x1a61cbc]        # 0x14250fbf8
0x140aadf3c: sub     rax,QWORD PTR [rip+0x1a61cad]        # 0x14250fbf0
0x140aadf43: sar     rax,0x3
0x140aadf47: cmp     r8,rax
0x140aadf4a: jae     0x140aadf9d
0x140aadf4c: test    ecx,ecx
0x140aadf4e: js      0x140aadf9d
0x140aadf50: mov     rax,QWORD PTR [rip+0x1a61cd1]        # 0x14250fc28
0x140aadf57: sub     rax,rdx
0x140aadf5a: sar     rax,0x3
0x140aadf5e: cmp     rcx,rax
0x140aadf61: jae     0x140aadf9d
0x140aadf63: mov     rax,QWORD PTR [rdx+rcx*8]
0x140aadf67: mov     r9,QWORD PTR [rax+0x50]
0x140aadf6b: mov     rcx,QWORD PTR [rax+0x58]
0x140aadf6f: sub     rcx,r9
0x140aadf72: sar     rcx,0x3
0x140aadf76: cmp     rcx,r8
0x140aadf79: jb      0x140aadf9d
0x140aadf7b: mov     rdx,QWORD PTR [r9+r8*8]
0x140aadf7f: mov     r8,QWORD PTR [rdx+0x10]
0x140aadf83: cmp     QWORD PTR [rdx+0x18],0xf
0x140aadf88: jbe     0x140aadf8d
0x140aadf8a: mov     rdx,QWORD PTR [rdx]
0x140aadf8d: lea     rcx,[rbp-0x30]
0x140aadf91: call    0x140071040
0x140aadf96: mov     rdx,QWORD PTR [rip+0x1a61c83]        # 0x14250fc20
0x140aadf9d: cmp     QWORD PTR [rbp-0x20],0x0
0x140aadfa2: je      0x140aadfeb
0x140aadfa4: test    r15b,r15b
0x140aadfa7: je      0x140aadfbe
0x140aadfa9: mov     r8d,0x1
0x140aadfaf: lea     rdx,[rip+0xb55a3a]        # 0x1416039f0 ; literal=' '
0x140aadfb6: mov     rcx,rsi
0x140aadfb9: call    0x140071040
0x140aadfbe: lea     rcx,[rbp-0x30]
0x140aadfc2: call    0x1405468a0
0x140aadfc7: lea     rdx,[rbp-0x30]
0x140aadfcb: cmp     QWORD PTR [rbp-0x18],0xf
0x140aadfd0: cmova   rdx,QWORD PTR [rbp-0x30]
0x140aadfd5: mov     r8,QWORD PTR [rbp-0x20]
0x140aadfd9: mov     rcx,rsi
0x140aadfdc: call    0x140071040
0x140aadfe1: mov     r15b,0x1
0x140aadfe4: mov     rdx,QWORD PTR [rip+0x1a61c35]        # 0x14250fc20
0x140aadfeb: mov     rax,QWORD PTR [rbp-0x18]
0x140aadfef: cmp     rax,0xf
0x140aadff3: jbe     0x140aae031
0x140aadff5: lea     rdx,[rax+0x1]
0x140aadff9: mov     rcx,QWORD PTR [rbp-0x30]
0x140aadffd: mov     rax,rcx
0x140aae000: cmp     rdx,0x1000
0x140aae007: jb      0x140aae025
0x140aae009: add     rdx,0x27
0x140aae00d: mov     rcx,QWORD PTR [rcx-0x8]
0x140aae011: sub     rax,rcx
0x140aae014: add     rax,0xfffffffffffffff8
0x140aae018: cmp     rax,0x1f
0x140aae01c: jbe     0x140aae025
0x140aae01e: call    QWORD PTR [rip+0xb52b1c]        # 0x141600b40
0x140aae024: int3    
0x140aae025: call    0x1415530d0
0x140aae02a: mov     rdx,QWORD PTR [rip+0x1a61bef]        # 0x14250fc20
0x140aae031: movsxd  rax,DWORD PTR [rdi+0x58]
0x140aae035: cmp     eax,0xffffffff
0x140aae038: je      0x140aae14c
0x140aae03e: xorps   xmm0,xmm0
0x140aae041: movups  XMMWORD PTR [rbp-0x30],xmm0
0x140aae045: mov     QWORD PTR [rbp-0x20],r12
0x140aae049: mov     QWORD PTR [rbp-0x18],rbx
0x140aae04d: mov     BYTE PTR [rbp-0x30],0x0
0x140aae051: movsxd  rcx,DWORD PTR [rdi+0x6c]
0x140aae055: test    eax,eax
0x140aae057: js      0x140aae111
0x140aae05d: mov     r8,rax
0x140aae060: mov     rax,QWORD PTR [rip+0x1a61b91]        # 0x14250fbf8
0x140aae067: sub     rax,QWORD PTR [rip+0x1a61b82]        # 0x14250fbf0
0x140aae06e: sar     rax,0x3
0x140aae072: cmp     r8,rax
0x140aae075: jae     0x140aae111
0x140aae07b: test    ecx,ecx
0x140aae07d: js      0x140aae111
0x140aae083: mov     rax,QWORD PTR [rip+0x1a61b9e]        # 0x14250fc28
0x140aae08a: sub     rax,rdx
0x140aae08d: sar     rax,0x3
0x140aae091: cmp     rcx,rax
0x140aae094: jae     0x140aae111
0x140aae096: mov     rax,QWORD PTR [rdx+rcx*8]
0x140aae09a: mov     rdx,QWORD PTR [rax+0x50]
0x140aae09e: mov     rcx,QWORD PTR [rax+0x58]
0x140aae0a2: sub     rcx,rdx
0x140aae0a5: sar     rcx,0x3
0x140aae0a9: cmp     rcx,r8
0x140aae0ac: jb      0x140aae111
0x140aae0ae: mov     rdx,QWORD PTR [rdx+r8*8]
0x140aae0b2: mov     r8,QWORD PTR [rdx+0x10]
0x140aae0b6: cmp     QWORD PTR [rdx+0x18],0xf
0x140aae0bb: jbe     0x140aae0c0
0x140aae0bd: mov     rdx,QWORD PTR [rdx]
0x140aae0c0: lea     rcx,[rbp-0x30]
0x140aae0c4: call    0x140071040
0x140aae0c9: cmp     QWORD PTR [rbp-0x20],0x0
0x140aae0ce: je      0x140aae10d
0x140aae0d0: test    r15b,r15b
0x140aae0d3: je      0x140aae0ea
0x140aae0d5: mov     r8d,0x1
0x140aae0db: lea     rdx,[rip+0xb5590e]        # 0x1416039f0 ; literal=' '
0x140aae0e2: mov     rcx,rsi
0x140aae0e5: call    0x140071040
0x140aae0ea: lea     rcx,[rbp-0x30]
0x140aae0ee: call    0x1405468a0
0x140aae0f3: lea     rdx,[rbp-0x30]
0x140aae0f7: cmp     QWORD PTR [rbp-0x18],0xf
0x140aae0fc: cmova   rdx,QWORD PTR [rbp-0x30]
0x140aae101: mov     r8,QWORD PTR [rbp-0x20]
0x140aae105: mov     rcx,rsi
0x140aae108: call    0x140071040
0x140aae10d: mov     rbx,QWORD PTR [rbp-0x18]
0x140aae111: cmp     rbx,0xf
0x140aae115: jbe     0x140aae14c
0x140aae117: lea     rdx,[rbx+0x1]
0x140aae11b: mov     rcx,QWORD PTR [rbp-0x30]
0x140aae11f: mov     rax,rcx
0x140aae122: cmp     rdx,0x1000
0x140aae129: jb      0x140aae147
0x140aae12b: add     rdx,0x27
0x140aae12f: mov     rcx,QWORD PTR [rcx-0x8]
0x140aae133: sub     rax,rcx
0x140aae136: add     rax,0xfffffffffffffff8
0x140aae13a: cmp     rax,0x1f
0x140aae13e: jbe     0x140aae147
0x140aae140: call    QWORD PTR [rip+0xb529fa]        # 0x141600b40
0x140aae146: int3    
0x140aae147: call    0x1415530d0
0x140aae14c: mov     rcx,QWORD PTR [rbp-0x10]
0x140aae150: xor     rcx,rsp
0x140aae153: call    0x1415530b0
0x140aae158: lea     r11,[rsp+0x50]
0x140aae15d: mov     rbx,QWORD PTR [r11+0x40]
0x140aae161: mov     rsi,QWORD PTR [r11+0x48]
0x140aae165: mov     rsp,r11
0x140aae168: pop     r15
0x140aae16a: pop     r14
0x140aae16c: pop     r12
0x140aae16e: pop     rdi
0x140aae16f: pop     rbp
0x140aae170: ret     
