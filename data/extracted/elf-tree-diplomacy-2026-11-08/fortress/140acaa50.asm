; Original disk PE PE:6a70a6d9:02711000; D:\program\steam\steamapps\common\Dwarf Fortress\Dwarf Fortress.exe; VA 0x140acaa50..0x140acb82b
0x140acaa50: mov    QWORD PTR [rsp+0x10],rbx
0x140acaa55: mov    QWORD PTR [rsp+0x18],rsi
0x140acaa5a: mov    QWORD PTR [rsp+0x20],rdi
0x140acaa5f: push   rbp
0x140acaa60: push   r12
0x140acaa62: push   r13
0x140acaa64: push   r14
0x140acaa66: push   r15
0x140acaa68: mov    rbp,rsp
0x140acaa6b: sub    rsp,0x80
0x140acaa72: mov    rsi,rdx
0x140acaa75: mov    r15,rcx
0x140acaa78: mov    QWORD PTR [rbp-0x48],rcx
0x140acaa7c: mov    r10d,DWORD PTR [rdx]
0x140acaa7f: mov    r9,QWORD PTR [rip+0x191a632]        # 0x1423e50b8
0x140acaa86: mov    r11,QWORD PTR [rip+0x191a623]        # 0x1423e50b0
0x140acaa8d: sub    r9,r11
0x140acaa90: sar    r9,0x3
0x140acaa94: test   r9d,r9d
0x140acaa97: je     0x140acaae0
0x140acaa99: cmp    r10d,0xffffffff
0x140acaa9d: je     0x140acaae0
0x140acaa9f: lea    eax,[r9-0x1]
0x140acaaa3: xor    r14d,r14d
0x140acaaa6: mov    edx,r14d
0x140acaaa9: test   eax,eax
0x140acaaab: js     0x140acaad7
0x140acaaad: nop    DWORD PTR [rax]
0x140acaab0: mov    edi,eax
0x140acaab2: lea    ecx,[rdx+rax*1]
0x140acaab5: sar    ecx,1
0x140acaab7: movsxd rax,ecx
0x140acaaba: mov    rbx,QWORD PTR [r11+rax*8]
0x140acaabe: cmp    DWORD PTR [rbx+0x130],r10d
0x140acaac5: je     0x140acaada
0x140acaac7: lea    eax,[rcx+0x1]
0x140acaaca: cmovle edx,eax
0x140acaacd: lea    eax,[rcx-0x1]
0x140acaad0: cmovle eax,edi
0x140acaad3: cmp    edx,eax
0x140acaad5: jle    0x140acaab0
0x140acaad7: mov    rbx,r14
0x140acaada: mov    r8d,DWORD PTR [rsi+0x4]
0x140acaade: jmp    0x140acaaef
0x140acaae0: mov    r8d,DWORD PTR [rdx+0x4]
0x140acaae4: xor    r14d,r14d
0x140acaae7: mov    ebx,r14d
0x140acaaea: test   r9d,r9d
0x140acaaed: je     0x140acab29
0x140acaaef: cmp    r8d,0xffffffff
0x140acaaf3: je     0x140acab29
0x140acaaf5: lea    eax,[r9-0x1]
0x140acaaf9: mov    edx,r14d
0x140acaafc: test   eax,eax
0x140acaafe: js     0x140acab29
0x140acab00: mov    r10d,eax
0x140acab03: lea    ecx,[rdx+rax*1]
0x140acab06: sar    ecx,1
0x140acab08: movsxd rax,ecx
0x140acab0b: mov    rdi,QWORD PTR [r11+rax*8]
0x140acab0f: cmp    DWORD PTR [rdi+0x130],r8d
0x140acab16: je     0x140acab2c
0x140acab18: lea    eax,[rcx+0x1]
0x140acab1b: cmovle edx,eax
0x140acab1e: lea    eax,[rcx-0x1]
0x140acab21: cmovle eax,r10d
0x140acab25: cmp    edx,eax
0x140acab27: jle    0x140acab00
0x140acab29: mov    rdi,r14
0x140acab2c: test   rbx,rbx
0x140acab2f: je     0x140acb80a
0x140acab35: test   rdi,rdi
0x140acab38: je     0x140acb80a
0x140acab3e: mov    ecx,DWORD PTR [r15]
0x140acab41: cmp    ecx,0xffffffff
0x140acab44: je     0x140acb80a
0x140acab4a: mov    rax,QWORD PTR [rip+0x1906caf]        # 0x1423d1800
0x140acab51: sub    rax,QWORD PTR [rip+0x1906ca0]        # 0x1423d17f8
0x140acab58: test   rax,0xfffffffffffffff8
0x140acab5e: je     0x140acb80a
0x140acab64: lea    rdx,[rip+0x1906c8d]        # 0x1423d17f8
0x140acab6b: call   0x1400ba0a0
0x140acab70: mov    rsi,rax
0x140acab73: test   rax,rax
0x140acab76: je     0x140acb80a
0x140acab7c: lea    r13,[rax+0x4]
0x140acab80: mov    QWORD PTR [rbp-0x10],r13
0x140acab84: mov    r12d,0x5
0x140acab8a: mov    edx,r12d
0x140acab8d: mov    DWORD PTR [rsp+0x20],0xffffffff
0x140acab95: mov    r9d,0xffffffff
0x140acab9b: mov    r8d,DWORD PTR [r13+0x0]
0x140acab9f: mov    rcx,rbx
0x140acaba2: call   0x1413b9c00
0x140acaba7: test   al,al
0x140acaba9: je     0x140acac9f
0x140acabaf: mov    eax,0x8
0x140acabb4: mov    DWORD PTR [rbp-0x50],eax
0x140acabb7: mov    rdx,QWORD PTR [r15+0x18]
0x140acabbb: cmp    rdx,QWORD PTR [r15+0x20]
0x140acabbf: je     0x140acabca
0x140acabc1: mov    DWORD PTR [rdx],eax
0x140acabc3: add    QWORD PTR [r15+0x18],0x4
0x140acabc8: jmp    0x140acabd7
0x140acabca: lea    r8,[rbp-0x50]
0x140acabce: lea    rcx,[r15+0x10]
0x140acabd2: call   0x140070e20
0x140acabd7: mov    DWORD PTR [rbp-0x50],0xffffffff
0x140acabde: mov    rdx,QWORD PTR [r15+0x30]
0x140acabe2: cmp    rdx,QWORD PTR [r15+0x38]
0x140acabe6: je     0x140acabf5
0x140acabe8: mov    DWORD PTR [rdx],0xffffffff
0x140acabee: add    QWORD PTR [r15+0x30],0x4
0x140acabf3: jmp    0x140acac02
0x140acabf5: lea    r8,[rbp-0x50]
0x140acabf9: lea    rcx,[r15+0x28]
0x140acabfd: call   0x140070e20
0x140acac02: mov    eax,0x6
0x140acac07: mov    DWORD PTR [rbp-0x50],eax
0x140acac0a: mov    rdx,QWORD PTR [r15+0x18]
0x140acac0e: cmp    rdx,QWORD PTR [r15+0x20]
0x140acac12: je     0x140acac1d
0x140acac14: mov    DWORD PTR [rdx],eax
0x140acac16: add    QWORD PTR [r15+0x18],0x4
0x140acac1b: jmp    0x140acac2a
0x140acac1d: lea    r8,[rbp-0x50]
0x140acac21: lea    rcx,[r15+0x10]
0x140acac25: call   0x140070e20
0x140acac2a: mov    DWORD PTR [rbp-0x50],0xffffffff
0x140acac31: mov    rdx,QWORD PTR [r15+0x30]
0x140acac35: cmp    rdx,QWORD PTR [r15+0x38]
0x140acac39: je     0x140acac48
0x140acac3b: mov    DWORD PTR [rdx],0xffffffff
0x140acac41: add    QWORD PTR [r15+0x30],0x4
0x140acac46: jmp    0x140acac55
0x140acac48: lea    r8,[rbp-0x50]
0x140acac4c: lea    rcx,[r15+0x28]
0x140acac50: call   0x140070e20
0x140acac55: mov    DWORD PTR [rbp-0x50],r12d
0x140acac59: mov    rdx,QWORD PTR [r15+0x18]
0x140acac5d: cmp    rdx,QWORD PTR [r15+0x20]
0x140acac61: je     0x140acac6d
0x140acac63: mov    DWORD PTR [rdx],r12d
0x140acac66: add    QWORD PTR [r15+0x18],0x4
0x140acac6b: jmp    0x140acac7a
0x140acac6d: lea    r8,[rbp-0x50]
0x140acac71: lea    rcx,[r15+0x10]
0x140acac75: call   0x140070e20
0x140acac7a: mov    DWORD PTR [rbp-0x50],0xffffffff
0x140acac81: mov    rdx,QWORD PTR [r15+0x30]
0x140acac85: cmp    rdx,QWORD PTR [r15+0x38]
0x140acac89: je     0x140acb1f7
0x140acac8f: mov    DWORD PTR [rdx],0xffffffff
0x140acac95: add    QWORD PTR [r15+0x30],0x4
0x140acac9a: jmp    0x140acb80a
0x140acac9f: mov    ecx,DWORD PTR [r15]
0x140acaca2: cmp    ecx,DWORD PTR [rip+0x18c89c8]        # 0x142393670
0x140acaca8: jne    0x140acb209
0x140acacae: mov    edx,DWORD PTR [rip+0x18c89c0]        # 0x142393674
0x140acacb4: mov    rcx,rsi
0x140acacb7: call   0x14099a910
0x140acacbc: movsx  r11d,ax
0x140acacc0: mov    WORD PTR [rbp-0x4c],r11w
0x140acacc5: xor    r8b,r8b
0x140acacc8: lea    rax,[rsi+0x10c0]
0x140acaccf: mov    QWORD PTR [rbp-0x20],rax
0x140acacd3: mov    r9,QWORD PTR [rax]
0x140acacd6: mov    rcx,QWORD PTR [rax+0x8]
0x140acacda: sub    rcx,r9
0x140acacdd: sar    rcx,0x3
0x140acace1: sub    ecx,0x1
0x140acace4: movsxd rdx,ecx
0x140acace7: mov    r10d,0x8
0x140acaced: mov    r12d,0x6
0x140acacf3: js     0x140acb135
0x140acacf9: mov    r12d,0x1
0x140acacff: nop
0x140acad00: mov    rax,QWORD PTR [r9+rdx*8]
0x140acad04: cmp    WORD PTR [rax+0x2d8],0xffff
0x140acad0c: jne    0x140acad23
0x140acad0e: lea    ecx,[r11+0x1]
0x140acad12: movsx  eax,WORD PTR [rax+0x2c8]
0x140acad19: movzx  r8d,r8b
0x140acad1d: cmp    eax,ecx
0x140acad1f: cmove  r8d,r12d
0x140acad23: sub    rdx,r12
0x140acad26: jns    0x140acad00
0x140acad28: test   r8b,r8b
0x140acad2b: je     0x140acb12f
0x140acad31: mov    DWORD PTR [rbp-0x50],0xffffffff
0x140acad38: lea    rax,[rsi+0xd0]
0x140acad3f: mov    QWORD PTR [rbp-0x18],rax
0x140acad43: mov    rdx,rax
0x140acad46: mov    ecx,DWORD PTR [rip+0x18c8928]        # 0x142393674
0x140acad4c: call   0x1400b9dc0
0x140acad51: test   rax,rax
0x140acad54: je     0x140acad67
0x140acad56: mov    ecx,DWORD PTR [r13+0x0]
0x140acad5a: cmp    DWORD PTR [rax+0x4],ecx
0x140acad5d: jne    0x140acad67
0x140acad5f: mov    r15d,DWORD PTR [rax+0xc]
0x140acad63: mov    DWORD PTR [rbp-0x50],r15d
0x140acad67: xorps  xmm0,xmm0
0x140acad6a: movdqu XMMWORD PTR [rbp-0x40],xmm0
0x140acad6f: mov    QWORD PTR [rbp-0x30],r14
0x140acad73: mov    rdi,QWORD PTR [rip+0x1a20dde]        # 0x1424ebb58
0x140acad7a: mov    rbx,QWORD PTR [rdi+0x178]
0x140acad81: mov    rdi,QWORD PTR [rdi+0x180]
0x140acad88: mov    r14d,DWORD PTR [rbp-0x50]
0x140acad8c: nop    DWORD PTR [rax+0x0]
0x140acad90: mov    r15,rsi
0x140acad93: cmp    rbx,rdi
0x140acad96: jae    0x140acaeac
0x140acad9c: mov    r12,QWORD PTR [rbx]
0x140acad9f: mov    rcx,r12
0x140acada2: call   0x1409b4e70
0x140acada7: mov    r13,rax
0x140acadaa: test   rax,rax
0x140acadad: je     0x140acaea3
0x140acadb3: cmp    rax,QWORD PTR [rip+0x18cf42e]        # 0x14239a1e8
0x140acadba: je     0x140acaea3
0x140acadc0: mov    rcx,rax
0x140acadc3: call   0x14093ce30
0x140acadc8: mov    QWORD PTR [rbp-0x28],rax
0x140acadcc: mov    r12d,DWORD PTR [r12+0x88]
0x140acadd4: mov    DWORD PTR [rbp-0x50],r12d
0x140acadd8: mov    rdx,QWORD PTR [rbp-0x18]
0x140acaddc: mov    ecx,r12d
0x140acaddf: call   0x1400b9dc0
0x140acade4: cmp    r14d,0xffffffff
0x140acade8: je     0x140acae38
0x140acadea: test   rax,rax
0x140acaded: je     0x140acae38
0x140acadef: cmp    DWORD PTR [rax+0xc],r14d
0x140acadf3: jne    0x140acae07
0x140acadf5: mov    ecx,r12d
0x140acadf8: lea    rdx,[rbp-0x40]
0x140acadfc: call   0x1400b9e70
0x140acae01: add    rbx,0x8
0x140acae05: jmp    0x140acad90
0x140acae07: mov    ecx,DWORD PTR [rax+0xc]
0x140acae0a: mov    r12,QWORD PTR [rbp-0x28]
0x140acae0e: cmp    ecx,0xffffffff
0x140acae11: je     0x140acae3c
0x140acae13: lea    rdx,[r12+0x1110]
0x140acae1b: call   0x1400b9dc0
0x140acae20: test   rax,rax
0x140acae23: je     0x140acae3c
0x140acae25: mov    rcx,QWORD PTR [rbp-0x10]
0x140acae29: mov    ecx,DWORD PTR [rcx]
0x140acae2b: cmp    DWORD PTR [rax+0x34],ecx
0x140acae2e: jne    0x140acae3c
0x140acae30: cmp    DWORD PTR [rax+0x38],r14d
0x140acae34: jne    0x140acae3c
0x140acae36: jmp    0x140acae97
0x140acae38: mov    r12,QWORD PTR [rbp-0x28]
0x140acae3c: mov    rdx,QWORD PTR [rip+0x18cf3a5]        # 0x14239a1e8
0x140acae43: add    rdx,0x1028
0x140acae4a: mov    ecx,DWORD PTR [r13+0x4]
0x140acae4e: call   0x1400b9dc0
0x140acae53: test   rax,rax
0x140acae56: je     0x140acae64
0x140acae58: cmp    WORD PTR [rax+0x4],0x3
0x140acae5d: jne    0x140acae64
0x140acae5f: cmp    r12,rsi
0x140acae62: je     0x140acae97
0x140acae64: mov    rax,QWORD PTR [r13+0xd0]
0x140acae6b: mov    rcx,QWORD PTR [r13+0xd8]
0x140acae72: cmp    rax,rcx
0x140acae75: jae    0x140acae8a
0x140acae77: mov    rdx,QWORD PTR [rax]
0x140acae7a: test   BYTE PTR [rdx+0x1c],0x8
0x140acae7e: jne    0x140acae86
0x140acae80: add    rax,0x8
0x140acae84: jmp    0x140acae72
0x140acae86: mov    eax,DWORD PTR [rdx]
0x140acae88: jmp    0x140acae8f
0x140acae8a: mov    eax,0xffffffff
0x140acae8f: cmp    eax,DWORD PTR [rip+0x18c87df]        # 0x142393674
0x140acae95: jne    0x140acaea3
0x140acae97: mov    ecx,DWORD PTR [rbp-0x50]
0x140acae9a: lea    rdx,[rbp-0x40]
0x140acae9e: call   0x1400b9e70
0x140acaea3: add    rbx,0x8
0x140acaea7: jmp    0x140acad90
0x140acaeac: mov    rbx,QWORD PTR [rbp-0x38]
0x140acaeb0: sub    rbx,QWORD PTR [rbp-0x40]
0x140acaeb4: sar    rbx,0x2
0x140acaeb8: lea    rcx,[rip+0x18c6371]        # 0x142391230
0x140acaebf: call   0x140e638d0
0x140acaec4: lea    rcx,[rip+0x18c6365]        # 0x142391230
0x140acaecb: call   0x140e64380
0x140acaed0: lea    rcx,[rip+0x18c6359]        # 0x142391230
0x140acaed7: call   0x140e640d0
0x140acaedc: movsx  r8d,WORD PTR [rip+0x18c66a8]        # 0x14239158c
0x140acaee4: mov    ecx,DWORD PTR [rip+0x18c6896]        # 0x142391780
0x140acaeea: mov    edx,DWORD PTR [rip+0x18c68b8]        # 0x1423917a8
0x140acaef0: cmp    ebx,0x1
0x140acaef3: mov    r14d,0x0
0x140acaef9: jl     0x140acaf0b
0x140acaefb: imul   eax,ebx,0x4e20
0x140acaf01: add    ecx,eax
0x140acaf03: imul   eax,ebx,0x7d0
0x140acaf09: add    edx,eax
0x140acaf0b: cmp    r8d,DWORD PTR [rip+0x18cf22e]        # 0x14239a140
0x140acaf12: jl     0x140acaf2a
0x140acaf14: cmp    ecx,DWORD PTR [rip+0x18cf24e]        # 0x14239a168
0x140acaf1a: jl     0x140acaf2a
0x140acaf1c: cmp    edx,DWORD PTR [rip+0x18cf26e]        # 0x14239a190
0x140acaf22: jl     0x140acaf2a
0x140acaf24: mov    r14d,0x1
0x140acaf2a: cmp    r8d,DWORD PTR [rip+0x18cf213]        # 0x14239a144
0x140acaf31: jl     0x140acaf49
0x140acaf33: cmp    ecx,DWORD PTR [rip+0x18cf233]        # 0x14239a16c
0x140acaf39: jl     0x140acaf49
0x140acaf3b: cmp    edx,DWORD PTR [rip+0x18cf253]        # 0x14239a194
0x140acaf41: jl     0x140acaf49
0x140acaf43: mov    r14d,0x2
0x140acaf49: mov    r10d,0x3
0x140acaf4f: cmp    r8d,DWORD PTR [rip+0x18cf1f2]        # 0x14239a148
0x140acaf56: jl     0x140acaf6c
0x140acaf58: cmp    ecx,DWORD PTR [rip+0x18cf212]        # 0x14239a170
0x140acaf5e: jl     0x140acaf6c
0x140acaf60: cmp    edx,DWORD PTR [rip+0x18cf232]        # 0x14239a198
0x140acaf66: jl     0x140acaf6c
0x140acaf68: movzx  r14d,r10w
0x140acaf6c: mov    ebx,0x4
0x140acaf71: cmp    r8d,DWORD PTR [rip+0x18cf1d4]        # 0x14239a14c
0x140acaf78: jl     0x140acaf8e
0x140acaf7a: cmp    ecx,DWORD PTR [rip+0x18cf1f4]        # 0x14239a174
0x140acaf80: jl     0x140acaf8e
0x140acaf82: cmp    edx,DWORD PTR [rip+0x18cf214]        # 0x14239a19c
0x140acaf88: jl     0x140acaf8e
0x140acaf8a: movzx  r14d,bx
0x140acaf8e: mov    esi,0x5
0x140acaf93: cmp    r8d,DWORD PTR [rip+0x18cf1b6]        # 0x14239a150
0x140acaf9a: jl     0x140acafb0
0x140acaf9c: cmp    ecx,DWORD PTR [rip+0x18cf1d6]        # 0x14239a178
0x140acafa2: jl     0x140acafb0
0x140acafa4: cmp    edx,DWORD PTR [rip+0x18cf1f6]        # 0x14239a1a0
0x140acafaa: jl     0x140acafb0
0x140acafac: movzx  r14d,si
0x140acafb0: mov    r12d,0x6
0x140acafb6: cmp    r8d,DWORD PTR [rip+0x18cf197]        # 0x14239a154
0x140acafbd: jl     0x140acafd3
0x140acafbf: cmp    ecx,DWORD PTR [rip+0x18cf1b7]        # 0x14239a17c
0x140acafc5: jl     0x140acafd3
0x140acafc7: cmp    edx,DWORD PTR [rip+0x18cf1d7]        # 0x14239a1a4
0x140acafcd: jl     0x140acafd3
0x140acafcf: movzx  r14d,r12w
0x140acafd3: cmp    r8d,DWORD PTR [rip+0x18cf17e]        # 0x14239a158
0x140acafda: jl     0x140acaff2
0x140acafdc: cmp    ecx,DWORD PTR [rip+0x18cf19e]        # 0x14239a180
0x140acafe2: jl     0x140acaff2
0x140acafe4: cmp    edx,DWORD PTR [rip+0x18cf1be]        # 0x14239a1a8
0x140acafea: jl     0x140acaff2
0x140acafec: mov    r14d,0x7
0x140acaff2: cmp    r8d,DWORD PTR [rip+0x18cf163]        # 0x14239a15c
0x140acaff9: jl     0x140acb011
0x140acaffb: cmp    ecx,DWORD PTR [rip+0x18cf183]        # 0x14239a184
0x140acb001: jl     0x140acb011
0x140acb003: cmp    edx,DWORD PTR [rip+0x18cf1a3]        # 0x14239a1ac
0x140acb009: jl     0x140acb011
0x140acb00b: mov    r14d,0x8
0x140acb011: cmp    r8d,DWORD PTR [rip+0x18cf148]        # 0x14239a160
0x140acb018: jl     0x140acb030
0x140acb01a: cmp    ecx,DWORD PTR [rip+0x18cf168]        # 0x14239a188
0x140acb020: jl     0x140acb030
0x140acb022: cmp    edx,DWORD PTR [rip+0x18cf188]        # 0x14239a1b0
0x140acb028: jl     0x140acb030
0x140acb02a: mov    r14d,0x9
0x140acb030: cmp    r8d,DWORD PTR [rip+0x18cf12d]        # 0x14239a164
0x140acb037: jl     0x140acb04f
0x140acb039: cmp    ecx,DWORD PTR [rip+0x18cf14d]        # 0x14239a18c
0x140acb03f: jl     0x140acb04f
0x140acb041: cmp    edx,DWORD PTR [rip+0x18cf16d]        # 0x14239a1b4
0x140acb047: jl     0x140acb04f
0x140acb049: mov    r14d,0xa
0x140acb04f: movzx  r11d,WORD PTR [rbp-0x4c]
0x140acb054: cmp    r14w,r11w
0x140acb058: jle    0x140acb0a6
0x140acb05a: mov    r9,QWORD PTR [rbp-0x20]
0x140acb05e: mov    rcx,QWORD PTR [r9+0x8]
0x140acb062: mov    r9,QWORD PTR [r9]
0x140acb065: mov    rax,r9
0x140acb068: cmp    rax,rcx
0x140acb06b: jae    0x140acb09c
0x140acb06d: mov    r8,QWORD PTR [rax]
0x140acb070: cmp    WORD PTR [r8+0x2c8],r14w
0x140acb078: jne    0x140acb096
0x140acb07a: cmp    DWORD PTR [r8+0x30],0x2
0x140acb07f: jle    0x140acb08b
0x140acb081: mov    rdx,QWORD PTR [r8+0x28]
0x140acb085: test   BYTE PTR [rdx+0x2],0x8
0x140acb089: jne    0x140acb096
0x140acb08b: cmp    WORD PTR [r8+0x2d8],0xffff
0x140acb094: je     0x140acb0bb
0x140acb096: add    rax,0x8
0x140acb09a: jmp    0x140acb068
0x140acb09c: dec    r14w
0x140acb0a0: cmp    r14w,r11w
0x140acb0a4: jg     0x140acb065
0x140acb0a6: mov    r15,QWORD PTR [rbp-0x48]
0x140acb0aa: lea    rcx,[rbp-0x40]
0x140acb0ae: call   0x14006f750
0x140acb0b3: mov    r10d,0x8
0x140acb0b9: jmp    0x140acb13a
0x140acb0bb: mov    r15,QWORD PTR [rbp-0x48]
0x140acb0bf: cmp    r14w,r11w
0x140acb0c3: jle    0x140acb0aa
0x140acb0c5: lea    rcx,[r15+0x10]
0x140acb0c9: mov    rdx,QWORD PTR [rcx+0x8]
0x140acb0cd: test   r11w,r11w
0x140acb0d1: jne    0x140acb0f1
0x140acb0d3: mov    DWORD PTR [rbp-0x50],r10d
0x140acb0d7: cmp    rdx,QWORD PTR [rcx+0x10]
0x140acb0db: je     0x140acb102
0x140acb0dd: mov    DWORD PTR [rdx],r10d
0x140acb0e0: add    QWORD PTR [rcx+0x8],rbx
0x140acb0e4: jmp    0x140acb10b
0x140acb0e6: lea    r8,[rbp-0x50]
0x140acb0ea: call   0x140070e20
0x140acb0ef: jmp    0x140acb0aa
0x140acb0f1: mov    DWORD PTR [rbp-0x50],ebx
0x140acb0f4: cmp    rdx,QWORD PTR [rcx+0x10]
0x140acb0f8: je     0x140acb102
0x140acb0fa: mov    DWORD PTR [rdx],ebx
0x140acb0fc: add    QWORD PTR [rcx+0x8],rbx
0x140acb100: jmp    0x140acb10b
0x140acb102: lea    r8,[rbp-0x50]
0x140acb106: call   0x140070e20
0x140acb10b: lea    rcx,[r15+0x28]
0x140acb10f: mov    DWORD PTR [rbp-0x50],0xffffffff
0x140acb116: mov    rdx,QWORD PTR [rcx+0x8]
0x140acb11a: cmp    rdx,QWORD PTR [rcx+0x10]
0x140acb11e: je     0x140acb0e6
0x140acb120: mov    DWORD PTR [rdx],0xffffffff
0x140acb126: add    QWORD PTR [rcx+0x8],rbx
0x140acb12a: jmp    0x140acb0aa
0x140acb12f: mov    r12d,0x6
0x140acb135: mov    esi,0x5
0x140acb13a: mov    DWORD PTR [rbp-0x50],r10d
0x140acb13e: mov    rdx,QWORD PTR [r15+0x18]
0x140acb142: cmp    rdx,QWORD PTR [r15+0x20]
0x140acb146: je     0x140acb152
0x140acb148: mov    DWORD PTR [rdx],r10d
0x140acb14b: add    QWORD PTR [r15+0x18],0x4
0x140acb150: jmp    0x140acb15f
0x140acb152: lea    r8,[rbp-0x50]
0x140acb156: lea    rcx,[r15+0x10]
0x140acb15a: call   0x140070e20
0x140acb15f: mov    DWORD PTR [rbp-0x50],0xffffffff
0x140acb166: mov    rdx,QWORD PTR [r15+0x30]
0x140acb16a: cmp    rdx,QWORD PTR [r15+0x38]
0x140acb16e: je     0x140acb17d
0x140acb170: mov    DWORD PTR [rdx],0xffffffff
0x140acb176: add    QWORD PTR [r15+0x30],0x4
0x140acb17b: jmp    0x140acb18a
0x140acb17d: lea    r8,[rbp-0x50]
0x140acb181: lea    rcx,[r15+0x28]
0x140acb185: call   0x140070e20
0x140acb18a: mov    DWORD PTR [rbp-0x50],r12d
0x140acb18e: mov    rdx,QWORD PTR [r15+0x18]
0x140acb192: cmp    rdx,QWORD PTR [r15+0x20]
0x140acb196: je     0x140acb1a2
0x140acb198: mov    DWORD PTR [rdx],r12d
0x140acb19b: add    QWORD PTR [r15+0x18],0x4
0x140acb1a0: jmp    0x140acb1af
0x140acb1a2: lea    r8,[rbp-0x50]
0x140acb1a6: lea    rcx,[r15+0x10]
0x140acb1aa: call   0x140070e20
0x140acb1af: mov    DWORD PTR [rbp-0x50],0xffffffff
0x140acb1b6: mov    rdx,QWORD PTR [r15+0x30]
0x140acb1ba: cmp    rdx,QWORD PTR [r15+0x38]
0x140acb1be: je     0x140acb1cd
0x140acb1c0: mov    DWORD PTR [rdx],0xffffffff
0x140acb1c6: add    QWORD PTR [r15+0x30],0x4
0x140acb1cb: jmp    0x140acb1da
0x140acb1cd: lea    r8,[rbp-0x50]
0x140acb1d1: lea    rcx,[r15+0x28]
0x140acb1d5: call   0x140070e20
0x140acb1da: mov    DWORD PTR [rbp-0x50],esi
0x140acb1dd: mov    rdx,QWORD PTR [r15+0x18]
0x140acb1e1: cmp    rdx,QWORD PTR [r15+0x20]
0x140acb1e5: je     0x140acac6d
0x140acb1eb: mov    DWORD PTR [rdx],esi
0x140acb1ed: add    QWORD PTR [r15+0x18],0x4
0x140acb1f2: jmp    0x140acac7a
0x140acb1f7: lea    r8,[rbp-0x50]
0x140acb1fb: lea    rcx,[r15+0x28]
0x140acb1ff: call   0x140070e20
0x140acb204: jmp    0x140acb80a
0x140acb209: mov    rax,QWORD PTR [rsi+0x8]
0x140acb20d: cmp    DWORD PTR [rax+0x3a8],0x6
0x140acb214: jle    0x140acb516
0x140acb21a: mov    rax,QWORD PTR [rax+0x3a0]
0x140acb221: test   BYTE PTR [rax+0x6],0x1
0x140acb225: je     0x140acb516
0x140acb22b: movzx  r12d,r14w
0x140acb22f: mov    rax,QWORD PTR [rip+0x19065ca]        # 0x1423d1800
0x140acb236: sub    rax,QWORD PTR [rip+0x19065bb]        # 0x1423d17f8
0x140acb23d: test   rax,0xfffffffffffffff8
0x140acb243: je     0x140acb277
0x140acb245: cmp    ecx,0xffffffff
0x140acb248: je     0x140acb277
0x140acb24a: lea    rdx,[rip+0x19065a7]        # 0x1423d17f8
0x140acb251: call   0x1400ba0a0
0x140acb256: test   rax,rax
0x140acb259: je     0x140acb277
0x140acb25b: lea    rdx,[rax+0x1028]
0x140acb262: mov    ecx,DWORD PTR [rip+0x18c8410]        # 0x142393678
0x140acb268: call   0x1400b9dc0
0x140acb26d: test   rax,rax
0x140acb270: je     0x140acb277
0x140acb272: movzx  r12d,WORD PTR [rax+0x4]
0x140acb277: xorps  xmm0,xmm0
0x140acb27a: movdqu XMMWORD PTR [rbp-0x40],xmm0
0x140acb27f: mov    QWORD PTR [rbp-0x30],r14
0x140acb283: lea    eax,[r12-0x1]
0x140acb288: mov    r13d,0xfffb
0x140acb28e: test   r13w,ax
0x140acb292: jne    0x140acb2e7
0x140acb294: lea    rcx,[r15+0x10]
0x140acb298: mov    eax,0x1
0x140acb29d: mov    DWORD PTR [rbp-0x50],eax
0x140acb2a0: mov    rdx,QWORD PTR [rcx+0x8]
0x140acb2a4: cmp    rdx,QWORD PTR [rcx+0x10]
0x140acb2a8: je     0x140acb2b3
0x140acb2aa: mov    DWORD PTR [rdx],eax
0x140acb2ac: add    QWORD PTR [rcx+0x8],0x4
0x140acb2b1: jmp    0x140acb2bc
0x140acb2b3: lea    r8,[rbp-0x50]
0x140acb2b7: call   0x140070e20
0x140acb2bc: lea    rcx,[r15+0x28]
0x140acb2c0: mov    DWORD PTR [rbp-0x50],0xffffffff
0x140acb2c7: mov    rdx,QWORD PTR [rcx+0x8]
0x140acb2cb: cmp    rdx,QWORD PTR [rcx+0x10]
0x140acb2cf: je     0x140acb2de
0x140acb2d1: mov    DWORD PTR [rdx],0xffffffff
0x140acb2d7: add    QWORD PTR [rcx+0x8],0x4
0x140acb2dc: jmp    0x140acb2e7
0x140acb2de: lea    r8,[rbp-0x50]
0x140acb2e2: call   0x140070e20
0x140acb2e7: mov    r8d,DWORD PTR [rip+0x18c838a]        # 0x142393678
0x140acb2ee: mov    edx,DWORD PTR [rip+0x18c837c]        # 0x142393670
0x140acb2f4: mov    rcx,rdi
0x140acb2f7: call   0x14134bb20
0x140acb2fc: mov    eax,0x2
0x140acb301: mov    DWORD PTR [rbp-0x50],eax
0x140acb304: lea    r8,[rbp-0x50]
0x140acb308: xor    edx,edx
0x140acb30a: lea    rcx,[rbp-0x40]
0x140acb30e: call   0x140070e20
0x140acb313: call   0x140eb68b0
0x140acb318: mov    r8d,eax
0x140acb31b: mov    eax,0x3
0x140acb320: mul    r8d
0x140acb323: mov    ecx,r8d
0x140acb326: sub    ecx,edx
0x140acb328: shr    ecx,1
0x140acb32a: add    ecx,edx
0x140acb32c: shr    ecx,0x1e
0x140acb32f: imul   ecx,ecx,0x80000001
0x140acb335: add    r8d,ecx
0x140acb338: mov    eax,0xbfffffff
0x140acb33d: mul    r8d
0x140acb340: shr    edx,0x1d
0x140acb343: add    dx,0x2
0x140acb347: test   dx,dx
0x140acb34a: jle    0x140acb432
0x140acb350: mov    r15,QWORD PTR [rbp-0x40]
0x140acb354: mov    rdi,QWORD PTR [rbp-0x38]
0x140acb358: nop    DWORD PTR [rax+rax*1+0x0]
0x140acb360: mov    rbx,rdi
0x140acb363: sub    rbx,r15
0x140acb366: sar    rbx,0x2
0x140acb36a: test   rbx,rbx
0x140acb36d: je     0x140acb42e
0x140acb373: cmp    ebx,0x1
0x140acb376: ja     0x140acb37d
0x140acb378: mov    eax,r14d
0x140acb37b: jmp    0x140acb3b5
0x140acb37d: call   0x140eb68b0
0x140acb382: mov    r8d,eax
0x140acb385: mov    eax,0x3
0x140acb38a: mul    r8d
0x140acb38d: mov    ecx,r8d
0x140acb390: sub    ecx,edx
0x140acb392: shr    ecx,1
0x140acb394: add    ecx,edx
0x140acb396: shr    ecx,0x1e
0x140acb399: imul   ecx,ecx,0x80000001
0x140acb39f: add    r8d,ecx
0x140acb3a2: xor    edx,edx
0x140acb3a4: mov    eax,0x7fffffff
0x140acb3a9: div    ebx
0x140acb3ab: lea    ecx,[rax+0x1]
0x140acb3ae: xor    edx,edx
0x140acb3b0: mov    eax,r8d
0x140acb3b3: div    ecx
0x140acb3b5: mov    rcx,QWORD PTR [rbp-0x48]
0x140acb3b9: add    rcx,0x10
0x140acb3bd: cdqe
0x140acb3bf: lea    rbx,[r15+rax*4]
0x140acb3c3: mov    rdx,QWORD PTR [rcx+0x8]
0x140acb3c7: cmp    rdx,QWORD PTR [rcx+0x10]
0x140acb3cb: je     0x140acb3d8
0x140acb3cd: mov    eax,DWORD PTR [rbx]
0x140acb3cf: mov    DWORD PTR [rdx],eax
0x140acb3d1: add    QWORD PTR [rcx+0x8],0x4
0x140acb3d6: jmp    0x140acb3e0
0x140acb3d8: mov    r8,rbx
0x140acb3db: call   0x140070e20
0x140acb3e0: mov    rcx,QWORD PTR [rbp-0x48]
0x140acb3e4: add    rcx,0x28
0x140acb3e8: mov    DWORD PTR [rbp-0x50],0xffffffff
0x140acb3ef: mov    rdx,QWORD PTR [rcx+0x8]
0x140acb3f3: cmp    rdx,QWORD PTR [rcx+0x10]
0x140acb3f7: je     0x140acb406
0x140acb3f9: mov    DWORD PTR [rdx],0xffffffff
0x140acb3ff: add    QWORD PTR [rcx+0x8],0x4
0x140acb404: jmp    0x140acb40f
0x140acb406: lea    r8,[rbp-0x50]
0x140acb40a: call   0x140070e20
0x140acb40f: lea    rdx,[rbx+0x4]
0x140acb413: mov    r8,rdi
0x140acb416: sub    r8,rdx
0x140acb419: mov    rcx,rbx
0x140acb41c: call   0x14153ae1a
0x140acb421: sub    rdi,0x4
0x140acb425: mov    QWORD PTR [rbp-0x38],rdi
0x140acb429: jmp    0x140acb360
0x140acb42e: mov    r15,QWORD PTR [rbp-0x48]
0x140acb432: mov    rbx,QWORD PTR [rsi+0x13a0]
0x140acb439: sub    rbx,QWORD PTR [rsi+0x1398]
0x140acb440: sar    rbx,0x3
0x140acb444: sub    ebx,0x1
0x140acb447: mov    DWORD PTR [rbp-0x50],ebx
0x140acb44a: js     0x140acb4b3
0x140acb44c: mov    eax,ebx
0x140acb44e: xchg   ax,ax
0x140acb450: movsxd rcx,eax
0x140acb453: mov    rax,QWORD PTR [rsi+0x1398]
0x140acb45a: mov    rcx,QWORD PTR [rax+rcx*8]
0x140acb45e: cmp    WORD PTR [rcx],0x0
0x140acb462: jne    0x140acb4a9
0x140acb464: lea    rcx,[r15+0x10]
0x140acb468: mov    DWORD PTR [rbp-0x4c],r14d
0x140acb46c: mov    rdx,QWORD PTR [rcx+0x8]
0x140acb470: cmp    rdx,QWORD PTR [rcx+0x10]
0x140acb474: je     0x140acb480
0x140acb476: mov    DWORD PTR [rdx],r14d
0x140acb479: add    QWORD PTR [rcx+0x8],0x4
0x140acb47e: jmp    0x140acb489
0x140acb480: lea    r8,[rbp-0x4c]
0x140acb484: call   0x140070e20
0x140acb489: lea    rcx,[r15+0x28]
0x140acb48d: mov    rdx,QWORD PTR [rcx+0x8]
0x140acb491: cmp    rdx,QWORD PTR [rcx+0x10]
0x140acb495: je     0x140acb4a0
0x140acb497: mov    DWORD PTR [rdx],ebx
0x140acb499: add    QWORD PTR [rcx+0x8],0x4
0x140acb49e: jmp    0x140acb4a9
0x140acb4a0: lea    r8,[rbp-0x50]
0x140acb4a4: call   0x140070e20
0x140acb4a9: sub    ebx,0x1
0x140acb4ac: mov    eax,ebx
0x140acb4ae: mov    DWORD PTR [rbp-0x50],ebx
0x140acb4b1: jns    0x140acb450
0x140acb4b3: dec    r12w
0x140acb4b7: test   r13w,r12w
0x140acb4bb: je     0x140acb511
0x140acb4bd: lea    rcx,[r15+0x10]
0x140acb4c1: mov    eax,0x8
0x140acb4c6: mov    DWORD PTR [rbp-0x50],eax
0x140acb4c9: mov    rdx,QWORD PTR [rcx+0x8]
0x140acb4cd: cmp    rdx,QWORD PTR [rcx+0x10]
0x140acb4d1: je     0x140acb4dc
0x140acb4d3: mov    DWORD PTR [rdx],eax
0x140acb4d5: add    QWORD PTR [rcx+0x8],0x4
0x140acb4da: jmp    0x140acb4e5
0x140acb4dc: lea    r8,[rbp-0x50]
0x140acb4e0: call   0x140070e20
0x140acb4e5: lea    rcx,[r15+0x28]
0x140acb4e9: mov    DWORD PTR [rbp-0x50],0xffffffff
0x140acb4f0: mov    rdx,QWORD PTR [rcx+0x8]
0x140acb4f4: cmp    rdx,QWORD PTR [rcx+0x10]
0x140acb4f8: je     0x140acb507
0x140acb4fa: mov    DWORD PTR [rdx],0xffffffff
0x140acb500: add    QWORD PTR [rcx+0x8],0x4
0x140acb505: jmp    0x140acb511
0x140acb507: lea    r8,[rbp-0x50]
0x140acb50b: call   0x140070e20
0x140acb510: nop
0x140acb511: jmp    0x140acb801
0x140acb516: movzx  r12d,r14w
0x140acb51a: mov    rax,QWORD PTR [rip+0x19062df]        # 0x1423d1800
0x140acb521: sub    rax,QWORD PTR [rip+0x19062d0]        # 0x1423d17f8
0x140acb528: test   rax,0xfffffffffffffff8
0x140acb52e: je     0x140acb562
0x140acb530: cmp    ecx,0xffffffff
0x140acb533: je     0x140acb562
0x140acb535: lea    rdx,[rip+0x19062bc]        # 0x1423d17f8
0x140acb53c: call   0x1400ba0a0
0x140acb541: test   rax,rax
0x140acb544: je     0x140acb562
0x140acb546: lea    rdx,[rax+0x1028]
0x140acb54d: mov    ecx,DWORD PTR [rip+0x18c8125]        # 0x142393678
0x140acb553: call   0x1400b9dc0
0x140acb558: test   rax,rax
0x140acb55b: je     0x140acb562
0x140acb55d: movzx  r12d,WORD PTR [rax+0x4]
0x140acb562: xorps  xmm0,xmm0
0x140acb565: movdqu XMMWORD PTR [rbp-0x40],xmm0
0x140acb56a: mov    QWORD PTR [rbp-0x30],r14
0x140acb56e: lea    eax,[r12-0x1]
0x140acb573: mov    r13d,0xfffb
0x140acb579: test   r13w,ax
0x140acb57d: je     0x140acb620
0x140acb583: mov    eax,0x7
0x140acb588: mov    DWORD PTR [rbp-0x50],eax
0x140acb58b: xor    edx,edx
0x140acb58d: lea    rcx,[rbp-0x40]
0x140acb591: lea    r8,[rbp-0x50]
0x140acb595: call   0x140070e20
0x140acb59a: mov    r8d,DWORD PTR [rip+0x18c80d7]        # 0x142393678
0x140acb5a1: mov    edx,DWORD PTR [rip+0x18c80c9]        # 0x142393670
0x140acb5a7: mov    rcx,rdi
0x140acb5aa: call   0x14134bb20
0x140acb5af: call   0x140eb68b0
0x140acb5b4: mov    r8d,eax
0x140acb5b7: mov    eax,0x3
0x140acb5bc: mul    r8d
0x140acb5bf: mov    ecx,r8d
0x140acb5c2: sub    ecx,edx
0x140acb5c4: shr    ecx,1
0x140acb5c6: add    ecx,edx
0x140acb5c8: shr    ecx,0x1e
0x140acb5cb: imul   ecx,ecx,0x80000001
0x140acb5d1: add    r8d,ecx
0x140acb5d4: mov    eax,0xbfffffff
0x140acb5d9: mul    r8d
0x140acb5dc: shr    edx,0x1d
0x140acb5df: add    dx,0x2
0x140acb5e3: test   dx,dx
0x140acb5e6: jle    0x140acb724
0x140acb5ec: mov    r15,QWORD PTR [rbp-0x40]
0x140acb5f0: mov    rdi,QWORD PTR [rbp-0x38]
0x140acb5f4: mov    r13,QWORD PTR [rbp-0x48]
0x140acb5f8: nop    DWORD PTR [rax+rax*1+0x0]
0x140acb600: mov    rbx,rdi
0x140acb603: sub    rbx,r15
0x140acb606: sar    rbx,0x2
0x140acb60a: test   rbx,rbx
0x140acb60d: je     0x140acb71a
0x140acb613: cmp    ebx,0x1
0x140acb616: ja     0x140acb671
0x140acb618: mov    eax,r14d
0x140acb61b: jmp    0x140acb6a9
0x140acb620: lea    rcx,[r15+0x10]
0x140acb624: mov    eax,0x1
0x140acb629: mov    DWORD PTR [rbp-0x50],eax
0x140acb62c: mov    rdx,QWORD PTR [rcx+0x8]
0x140acb630: cmp    rdx,QWORD PTR [rcx+0x10]
0x140acb634: je     0x140acb63f
0x140acb636: mov    DWORD PTR [rdx],eax
0x140acb638: add    QWORD PTR [rcx+0x8],0x4
0x140acb63d: jmp    0x140acb648
0x140acb63f: lea    r8,[rbp-0x50]
0x140acb643: call   0x140070e20
0x140acb648: lea    rcx,[r15+0x28]
0x140acb64c: mov    DWORD PTR [rbp-0x50],0xffffffff
0x140acb653: mov    rdx,QWORD PTR [rcx+0x8]
0x140acb657: cmp    rdx,QWORD PTR [rcx+0x10]
0x140acb65b: je     0x140acb591
0x140acb661: mov    DWORD PTR [rdx],0xffffffff
0x140acb667: add    QWORD PTR [rcx+0x8],0x4
0x140acb66c: jmp    0x140acb59a
0x140acb671: call   0x140eb68b0
0x140acb676: mov    r8d,eax
0x140acb679: mov    eax,0x3
0x140acb67e: mul    r8d
0x140acb681: mov    ecx,r8d
0x140acb684: sub    ecx,edx
0x140acb686: shr    ecx,1
0x140acb688: add    ecx,edx
0x140acb68a: shr    ecx,0x1e
0x140acb68d: imul   ecx,ecx,0x80000001
0x140acb693: add    r8d,ecx
0x140acb696: xor    edx,edx
0x140acb698: mov    eax,0x7fffffff
0x140acb69d: div    ebx
0x140acb69f: lea    ecx,[rax+0x1]
0x140acb6a2: xor    edx,edx
0x140acb6a4: mov    eax,r8d
0x140acb6a7: div    ecx
0x140acb6a9: lea    rcx,[r13+0x10]
0x140acb6ad: cdqe
0x140acb6af: lea    rbx,[r15+rax*4]
0x140acb6b3: mov    rdx,QWORD PTR [rcx+0x8]
0x140acb6b7: cmp    rdx,QWORD PTR [rcx+0x10]
0x140acb6bb: je     0x140acb6c8
0x140acb6bd: mov    eax,DWORD PTR [rbx]
0x140acb6bf: mov    DWORD PTR [rdx],eax
0x140acb6c1: add    QWORD PTR [rcx+0x8],0x4
0x140acb6c6: jmp    0x140acb6d0
0x140acb6c8: mov    r8,rbx
0x140acb6cb: call   0x140070e20
0x140acb6d0: lea    rcx,[r13+0x28]
0x140acb6d4: mov    DWORD PTR [rbp-0x50],0xffffffff
0x140acb6db: mov    rdx,QWORD PTR [rcx+0x8]
0x140acb6df: cmp    rdx,QWORD PTR [rcx+0x10]
0x140acb6e3: je     0x140acb6f2
0x140acb6e5: mov    DWORD PTR [rdx],0xffffffff
0x140acb6eb: add    QWORD PTR [rcx+0x8],0x4
0x140acb6f0: jmp    0x140acb6fb
0x140acb6f2: lea    r8,[rbp-0x50]
0x140acb6f6: call   0x140070e20
0x140acb6fb: lea    rdx,[rbx+0x4]
0x140acb6ff: mov    r8,rdi
0x140acb702: sub    r8,rdx
0x140acb705: mov    rcx,rbx
0x140acb708: call   0x14153ae1a
0x140acb70d: sub    rdi,0x4
0x140acb711: mov    QWORD PTR [rbp-0x38],rdi
0x140acb715: jmp    0x140acb600
0x140acb71a: mov    r13d,0xfffb
0x140acb720: mov    r15,QWORD PTR [rbp-0x48]
0x140acb724: mov    rbx,QWORD PTR [rsi+0x13a0]
0x140acb72b: sub    rbx,QWORD PTR [rsi+0x1398]
0x140acb732: sar    rbx,0x3
0x140acb736: sub    ebx,0x1
0x140acb739: mov    DWORD PTR [rbp-0x50],ebx
0x140acb73c: js     0x140acb7a3
0x140acb73e: mov    eax,ebx
0x140acb740: movsxd rcx,eax
0x140acb743: mov    rax,QWORD PTR [rsi+0x1398]
0x140acb74a: mov    rcx,QWORD PTR [rax+rcx*8]
0x140acb74e: cmp    WORD PTR [rcx],0x0
0x140acb752: jne    0x140acb799
0x140acb754: lea    rcx,[r15+0x10]
0x140acb758: mov    DWORD PTR [rbp-0x4c],r14d
0x140acb75c: mov    rdx,QWORD PTR [rcx+0x8]
0x140acb760: cmp    rdx,QWORD PTR [rcx+0x10]
0x140acb764: je     0x140acb770
0x140acb766: mov    DWORD PTR [rdx],r14d
0x140acb769: add    QWORD PTR [rcx+0x8],0x4
0x140acb76e: jmp    0x140acb779
0x140acb770: lea    r8,[rbp-0x4c]
0x140acb774: call   0x140070e20
0x140acb779: lea    rcx,[r15+0x28]
0x140acb77d: mov    rdx,QWORD PTR [rcx+0x8]
0x140acb781: cmp    rdx,QWORD PTR [rcx+0x10]
0x140acb785: je     0x140acb790
0x140acb787: mov    DWORD PTR [rdx],ebx
0x140acb789: add    QWORD PTR [rcx+0x8],0x4
0x140acb78e: jmp    0x140acb799
0x140acb790: lea    r8,[rbp-0x50]
0x140acb794: call   0x140070e20
0x140acb799: sub    ebx,0x1
0x140acb79c: mov    eax,ebx
0x140acb79e: mov    DWORD PTR [rbp-0x50],ebx
0x140acb7a1: jns    0x140acb740
0x140acb7a3: dec    r12w
0x140acb7a7: test   r13w,r12w
0x140acb7ab: je     0x140acb801
0x140acb7ad: lea    rcx,[r15+0x10]
0x140acb7b1: mov    eax,0x8
0x140acb7b6: mov    DWORD PTR [rbp-0x50],eax
0x140acb7b9: mov    rdx,QWORD PTR [rcx+0x8]
0x140acb7bd: cmp    rdx,QWORD PTR [rcx+0x10]
0x140acb7c1: je     0x140acb7cc
0x140acb7c3: mov    DWORD PTR [rdx],eax
0x140acb7c5: add    QWORD PTR [rcx+0x8],0x4
0x140acb7ca: jmp    0x140acb7d5
0x140acb7cc: lea    r8,[rbp-0x50]
0x140acb7d0: call   0x140070e20
0x140acb7d5: lea    rcx,[r15+0x28]
0x140acb7d9: mov    DWORD PTR [rbp-0x50],0xffffffff
0x140acb7e0: mov    rdx,QWORD PTR [rcx+0x8]
0x140acb7e4: cmp    rdx,QWORD PTR [rcx+0x10]
0x140acb7e8: je     0x140acb7f7
0x140acb7ea: mov    DWORD PTR [rdx],0xffffffff
0x140acb7f0: add    QWORD PTR [rcx+0x8],0x4
0x140acb7f5: jmp    0x140acb801
0x140acb7f7: lea    r8,[rbp-0x50]
0x140acb7fb: call   0x140070e20
0x140acb800: nop
0x140acb801: lea    rcx,[rbp-0x40]
0x140acb805: call   0x14006f750
0x140acb80a: lea    r11,[rsp+0x80]
0x140acb812: mov    rbx,QWORD PTR [r11+0x38]
0x140acb816: mov    rsi,QWORD PTR [r11+0x40]
0x140acb81a: mov    rdi,QWORD PTR [r11+0x48]
0x140acb81e: mov    rsp,r11
0x140acb821: pop    r15
0x140acb823: pop    r14
0x140acb825: pop    r13
0x140acb827: pop    r12
0x140acb829: pop    rbp
0x140acb82a: ret
