140ababb0: rex push rbp
140ababb2: push   rbx
140ababb3: push   rsi
140ababb4: push   rdi
140ababb5: push   r12
140ababb7: push   r13
140ababb9: push   r14
140ababbb: push   r15
140ababbd: mov    rbp,rsp
140ababc0: sub    rsp,0x58
140ababc4: mov    r13,rcx
140ababc7: xorps  xmm0,xmm0
140ababca: movdqu XMMWORD PTR [rbp-0x28],xmm0
140ababcf: xor    eax,eax
140ababd1: mov    r14d,eax
140ababd4: mov    QWORD PTR [rbp-0x18],rax
140ababd8: mov    rax,QWORD PTR [rcx+0x14298]
140ababdf: sub    rax,QWORD PTR [rcx+0x14290]
140ababe6: sar    rax,0x3
140ababea: sub    eax,0x1
140ababed: movsxd r12,eax
140ababf0: mov    r15,QWORD PTR [rbp-0x20]
140ababf4: js     0x140abb120
140ababfa: mov    ebx,0xffff8ad0
140ababff: nop
140abac00: mov    rax,QWORD PTR [r13+0x14290]
140abac07: mov    rsi,QWORD PTR [rax+r12*8]
140abac0b: mov    QWORD PTR [rbp+0x60],rsi
140abac0f: test   BYTE PTR [rsi+0x10],0x10
140abac13: jne    0x140abb112
140abac19: mov    rax,QWORD PTR [rsi]
140abac1c: mov    rcx,rsi
140abac1f: call   QWORD PTR [rax+0x170]
140abac25: test   al,al
140abac27: je     0x140abb112
140abac2d: mov    WORD PTR [rbp+0x48],bx
140abac31: mov    eax,DWORD PTR [rsi+0x10]
140abac34: test   al,0x10
140abac36: jne    0x140abad05
140abac3c: test   al,0x8
140abac3e: je     0x140abaced
140abac44: mov    rbx,QWORD PTR [rsi+0x38]
140abac48: mov    rdi,QWORD PTR [rsi+0x40]
140abac4c: nop    DWORD PTR [rax+0x0]
140abac50: cmp    rbx,rdi
140abac53: jae    0x140abacb6
140abac55: mov    rcx,QWORD PTR [rbx]
140abac58: mov    rax,QWORD PTR [rcx]
140abac5b: call   QWORD PTR [rax+0x10]
140abac5e: cmp    eax,0xb
140abac61: je     0x140abac8c
140abac63: cmp    eax,0x12
140abac66: jne    0x140abac9a
140abac68: mov    rcx,QWORD PTR [rbx]
140abac6b: mov    rax,QWORD PTR [rcx]
140abac6e: call   QWORD PTR [rax+0x20]
140abac71: test   rax,rax
140abac74: je     0x140abac9a
140abac76: lea    r9,[rbp+0x50]
140abac7a: lea    r8,[rbp+0x58]
140abac7e: lea    rdx,[rbp+0x48]
140abac82: mov    rcx,rax
140abac85: call   0x141367430
140abac8a: jmp    0x140abad05
140abac8c: mov    rcx,QWORD PTR [rbx]
140abac8f: mov    rax,QWORD PTR [rcx]
140abac92: call   QWORD PTR [rax+0x18]
140abac95: test   rax,rax
140abac98: jne    0x140abaca0
140abac9a: add    rbx,0x8
140abac9e: jmp    0x140abac50
140abaca0: lea    r9,[rbp+0x50]
140abaca4: lea    r8,[rbp+0x58]
140abaca8: lea    rdx,[rbp+0x48]
140abacac: mov    rcx,rax
140abacaf: call   0x140c8baa0
140abacb4: jmp    0x140abad05
140abacb6: mov    rax,QWORD PTR [rsi+0x20]
140abacba: mov    rcx,QWORD PTR [rsi+0x28]
140abacbe: xchg   ax,ax
140abacc0: cmp    rax,rcx
140abacc3: jae    0x140abad05
140abacc5: mov    rdx,QWORD PTR [rax]
140abacc8: cmp    DWORD PTR [rdx],0x7
140abaccb: je     0x140abacd3
140abaccd: add    rax,0x8
140abacd1: jmp    0x140abacc0
140abacd3: mov    rcx,QWORD PTR [rdx+0x8]
140abacd7: movzx  eax,WORD PTR [rcx+0x4]
140abacdb: mov    WORD PTR [rbp+0x48],ax
140abacdf: movzx  eax,WORD PTR [rcx+0x6]
140abace3: mov    WORD PTR [rbp+0x58],ax
140abace7: movzx  eax,WORD PTR [rcx+0x8]
140abaceb: jmp    0x140abad01
140abaced: movzx  eax,WORD PTR [rsi+0x8]
140abacf1: mov    WORD PTR [rbp+0x48],ax
140abacf5: movzx  eax,WORD PTR [rsi+0xa]
140abacf9: mov    WORD PTR [rbp+0x58],ax
140abacfd: movzx  eax,WORD PTR [rsi+0xc]
140abad01: mov    WORD PTR [rbp+0x50],ax
140abad05: test   DWORD PTR [rsi+0x10],0x100
140abad0c: jne    0x140abadea
140abad12: mov    dl,0x1
140abad14: mov    rcx,rsi
140abad17: call   0x140c738a0
140abad1c: test   al,al
140abad1e: je     0x140abad48
140abad20: movzx  r9d,WORD PTR [rbp+0x50]
140abad25: movzx  r8d,WORD PTR [rbp+0x58]
140abad2a: movzx  edx,WORD PTR [rbp+0x48]
140abad2e: mov    rcx,r13
140abad31: call   0x14007dc40
140abad36: test   al,0x8
140abad38: je     0x140abad48
140abad3a: mov    rax,QWORD PTR [rsi]
140abad3d: xor    edx,edx
140abad3f: mov    rcx,rsi
140abad42: call   QWORD PTR [rax+0x280]
140abad48: test   BYTE PTR [rsi+0x10],0x4
140abad4c: je     0x140abad5c
140abad4e: mov    rax,QWORD PTR [rsi]
140abad51: xor    edx,edx
140abad53: mov    rcx,rsi
140abad56: call   QWORD PTR [rax+0x280]
140abad5c: test   BYTE PTR [rsi+0x10],0x8
140abad60: je     0x140abad70
140abad62: mov    rax,QWORD PTR [rsi]
140abad65: xor    edx,edx
140abad67: mov    rcx,rsi
140abad6a: call   QWORD PTR [rax+0x280]
140abad70: test   BYTE PTR [rsi+0x10],0x2
140abad74: je     0x140abad84
140abad76: mov    rax,QWORD PTR [rsi]
140abad79: xor    edx,edx
140abad7b: mov    rcx,rsi
140abad7e: call   QWORD PTR [rax+0x280]
140abad84: mov    rbx,QWORD PTR [rsi+0x38]
140abad88: mov    rdi,QWORD PTR [rsi+0x40]
140abad8c: nop    DWORD PTR [rax+0x0]
140abad90: cmp    rbx,rdi
140abad93: jae    0x140abadea
140abad95: mov    rcx,QWORD PTR [rbx]
140abad98: mov    rax,QWORD PTR [rcx]
140abad9b: call   QWORD PTR [rax+0x10]
140abad9e: cmp    eax,0x24
140abada1: je     0x140abada9
140abada3: add    rbx,0x8
140abada7: jmp    0x140abad90
140abada9: mov    rcx,QWORD PTR [rbx]
140abadac: mov    rax,QWORD PTR [rcx]
140abadaf: call   QWORD PTR [rax+0x30]
140abadb2: test   rax,rax
140abadb5: je     0x140abadea
140abadb7: mov    rdx,QWORD PTR [rax]
140abadba: mov    rcx,rax
140abadbd: call   QWORD PTR [rdx+0xd0]
140abadc3: sub    eax,0x4
140abadc6: je     0x140abaddc
140abadc8: sub    eax,0x2
140abadcb: je     0x140abaddc
140abadcd: sub    eax,0x29
140abadd0: je     0x140abaddc
140abadd2: sub    eax,0x1
140abadd5: je     0x140abaddc
140abadd7: cmp    eax,0x1
140abadda: jne    0x140abadea
140abaddc: mov    rax,QWORD PTR [rsi]
140abaddf: xor    edx,edx
140abade1: mov    rcx,rsi
140abade4: call   QWORD PTR [rax+0x280]
140abadea: mov    rbx,QWORD PTR [rsi+0x38]
140abadee: mov    rdi,QWORD PTR [rsi+0x40]
140abadf2: cmp    rbx,rdi
140abadf5: jae    0x140abae36
140abadf7: mov    rcx,QWORD PTR [rbx]
140abadfa: mov    rax,QWORD PTR [rcx]
140abadfd: call   QWORD PTR [rax+0x10]
140abae00: cmp    eax,0x10
140abae03: je     0x140abae0b
140abae05: add    rbx,0x8
140abae09: jmp    0x140abadf2
140abae0b: mov    rcx,QWORD PTR [rbx]
140abae0e: mov    rax,QWORD PTR [rcx]
140abae11: call   QWORD PTR [rax+0x20]
140abae14: test   rax,rax
140abae17: je     0x140abae36
140abae19: mov    rdx,rax
140abae1c: mov    rcx,rsi
140abae1f: call   0x140c8e1d0
140abae24: cmp    al,0x2
140abae26: jne    0x140abae36
140abae28: mov    rax,QWORD PTR [rsi]
140abae2b: xor    edx,edx
140abae2d: mov    rcx,rsi
140abae30: call   QWORD PTR [rax+0x280]
140abae36: mov    rax,QWORD PTR [rsi]
140abae39: mov    rcx,rsi
140abae3c: call   QWORD PTR [rax+0x288]
140abae42: movzx  r9d,WORD PTR [rbp+0x50]
140abae47: movzx  r8d,WORD PTR [rbp+0x58]
140abae4c: movzx  edx,WORD PTR [rbp+0x48]
140abae50: mov    rcx,r13
140abae53: call   0x14007dc40
140abae58: bt     eax,0xf
140abae5c: jae    0x140abb04d
140abae62: call   0x140eb68b0
140abae67: mov    r8d,eax
140abae6a: mov    eax,0x3
140abae6f: mul    r8d
140abae72: mov    ecx,r8d
140abae75: sub    ecx,edx
140abae77: shr    ecx,1
140abae79: add    ecx,edx
140abae7b: shr    ecx,0x1e
140abae7e: imul   ecx,ecx,0x7fffffff
140abae84: sub    r8d,ecx
140abae87: cmp    r8d,0x6666667
140abae8e: jae    0x140abb04d
140abae94: mov    rax,QWORD PTR [rsi]
140abae97: mov    rcx,rsi
140abae9a: call   QWORD PTR [rax+0x278]
140abaea0: cmp    eax,0x1
140abaea3: jle    0x140abb04d
140abaea9: mov    eax,DWORD PTR [rsi+0x10]
140abaeac: test   eax,0xc18
140abaeb1: jne    0x140abb04d
140abaeb7: bt     eax,0x8
140abaebb: jae    0x140abb04d
140abaec1: mov    rax,QWORD PTR [rsi]
140abaec4: mov    rcx,rsi
140abaec7: call   QWORD PTR [rax+0x38]
140abaeca: movzx  ebx,ax
140abaecd: mov    rdx,QWORD PTR [rsi]
140abaed0: mov    rcx,rsi
140abaed3: call   QWORD PTR [rdx+0x40]
140abaed6: mov    r8d,eax
140abaed9: movzx  edx,bx
140abaedc: lea    rcx,[rip+0x191660d]        # 0x1423d14f0
140abaee3: call   0x1414add70
140abaee8: test   rax,rax
140abaeeb: je     0x140abb04d
140abaef1: cmp    DWORD PTR [rax+0x298],0x5
140abaef8: jle    0x140abaf0b
140abaefa: mov    rax,QWORD PTR [rax+0x290]
140abaf01: test   BYTE PTR [rax+0x5],0x40
140abaf05: je     0x140abaf0b
140abaf07: mov    al,0x1
140abaf09: jmp    0x140abaf0d
140abaf0b: xor    al,al
140abaf0d: test   al,al
140abaf0f: je     0x140abb04d
140abaf15: mov    r14b,0x1
140abaf18: mov    rax,QWORD PTR [rsi]
140abaf1b: mov    rcx,rsi
140abaf1e: call   QWORD PTR [rax+0x48]
140abaf21: movsx  rbx,ax
140abaf25: mov    rdx,QWORD PTR [rsi]
140abaf28: mov    rcx,rsi
140abaf2b: call   QWORD PTR [rdx+0x50]
140abaf2e: movsx  rdx,ax
140abaf32: cmp    bx,0xffff
140abaf36: je     0x140abafb1
140abaf38: cmp    dx,0xffff
140abaf3c: je     0x140abafb1
140abaf3e: test   bx,bx
140abaf41: js     0x140abafb1
140abaf43: mov    rcx,QWORD PTR [rip+0x1a31b26]        # 0x1424eca70
140abaf4a: mov    r8,QWORD PTR [rip+0x1a31b17]        # 0x1424eca68
140abaf51: sub    rcx,r8
140abaf54: sar    rcx,0x3
140abaf58: cmp    rbx,rcx
140abaf5b: jae    0x140abafb1
140abaf5d: test   dx,dx
140abaf60: js     0x140abafb1
140abaf62: mov    rax,QWORD PTR [r8+rbx*8]
140abaf66: mov    rcx,QWORD PTR [rax+0x178]
140abaf6d: mov    rax,QWORD PTR [rax+0x180]
140abaf74: sub    rax,rcx
140abaf77: sar    rax,0x3
140abaf7b: cmp    rdx,rax
140abaf7e: jae    0x140abafb1
140abaf80: mov    rax,QWORD PTR [rcx+rdx*8]
140abaf84: cmp    DWORD PTR [rax+0x6b0],0xc
140abaf8b: jle    0x140abafa0
140abaf8d: mov    rax,QWORD PTR [rax+0x6a8]
140abaf94: cmp    BYTE PTR [rax+0xc],0x0
140abaf98: jge    0x140abafa0
140abaf9a: movzx  eax,r14b
140abaf9e: jmp    0x140abafa2
140abafa0: xor    al,al
140abafa2: movzx  r14d,r14b
140abafa6: test   al,al
140abafa8: mov    eax,0x0
140abafad: cmovne r14d,eax
140abafb1: mov    rbx,QWORD PTR [rsi+0x38]
140abafb5: mov    rdi,QWORD PTR [rsi+0x40]
140abafb9: nop    DWORD PTR [rax+0x0]
140abafc0: cmp    rbx,rdi
140abafc3: jae    0x140abaff8
140abafc5: mov    rcx,QWORD PTR [rbx]
140abafc8: mov    rax,QWORD PTR [rcx]
140abafcb: call   QWORD PTR [rax+0x10]
140abafce: cmp    eax,0x24
140abafd1: je     0x140abafd9
140abafd3: add    rbx,0x8
140abafd7: jmp    0x140abafc0
140abafd9: mov    rcx,QWORD PTR [rbx]
140abafdc: mov    rax,QWORD PTR [rcx]
140abafdf: call   QWORD PTR [rax+0x30]
140abafe2: test   rax,rax
140abafe5: je     0x140abaff8
140abafe7: mov    rdx,QWORD PTR [rax]
140abafea: mov    rcx,rax
140abafed: call   QWORD PTR [rdx+0xd0]
140abaff3: cmp    eax,0x3
140abaff6: je     0x140abb049
140abaff8: test   r14b,r14b
140abaffb: je     0x140abb049
140abaffd: call   0x140eb68b0
140abb002: mov    r8d,eax
140abb005: mov    eax,0x3
140abb00a: mul    r8d
140abb00d: mov    ecx,r8d
140abb010: sub    ecx,edx
140abb012: shr    ecx,1
140abb014: add    ecx,edx
140abb016: shr    ecx,0x1e
140abb019: imul   ecx,ecx,0x80000001
140abb01f: add    r8d,ecx
140abb022: mov    eax,0xc7fffffd
140abb027: mul    r8d
140abb02a: shr    edx,0x19
140abb02d: add    dx,0x32
140abb031: mov    WORD PTR [rsp+0x20],dx
140abb036: movzx  r9d,WORD PTR [rbp+0x50]
140abb03b: movzx  r8d,WORD PTR [rbp+0x58]
140abb040: movzx  edx,WORD PTR [rbp+0x48]
140abb044: call   0x140aca140
140abb049: mov    r14,QWORD PTR [rbp-0x18]
140abb04d: mov    rax,QWORD PTR [rsi]
140abb050: mov    rcx,rsi
140abb053: call   QWORD PTR [rax+0x290]
140abb059: test   al,al
140abb05b: jne    0x140abb074
140abb05d: mov    rax,QWORD PTR [rsi]
140abb060: mov    rcx,rsi
140abb063: call   QWORD PTR [rax+0x278]
140abb069: cmp    eax,0xc8
140abb06e: jl     0x140abb10d
140abb074: mov    rcx,rsi
140abb077: call   0x140c73a80
140abb07c: test   al,al
140abb07e: je     0x140abb10d
140abb084: mov    rax,QWORD PTR [rsi]
140abb087: mov    rcx,rsi
140abb08a: call   QWORD PTR [rax+0x290]
140abb090: test   al,al
140abb092: je     0x140abb0e7
140abb094: call   0x140eb68b0
140abb099: mov    r8d,eax
140abb09c: mov    eax,0x3
140abb0a1: mul    r8d
140abb0a4: mov    ecx,r8d
140abb0a7: sub    ecx,edx
140abb0a9: shr    ecx,1
140abb0ab: add    ecx,edx
140abb0ad: shr    ecx,0x1e
140abb0b0: imul   ecx,ecx,0x80000001
140abb0b6: add    r8d,ecx
140abb0b9: mov    eax,0x4fffffff
140abb0be: mul    r8d
140abb0c1: shr    edx,0x1a
140abb0c4: add    dx,0xa
140abb0c8: mov    WORD PTR [rsp+0x20],dx
140abb0cd: movzx  r9d,WORD PTR [rbp+0x50]
140abb0d2: movzx  r8d,WORD PTR [rbp+0x58]
140abb0d7: movzx  edx,WORD PTR [rbp+0x48]
140abb0db: lea    rcx,[rip+0x191640e]        # 0x1423d14f0
140abb0e2: call   0x1414637a0
140abb0e7: cmp    r15,r14
140abb0ea: je     0x140abb0f9
140abb0ec: mov    QWORD PTR [r15],rsi
140abb0ef: add    r15,0x8
140abb0f3: mov    QWORD PTR [rbp-0x20],r15
140abb0f7: jmp    0x140abb10d
140abb0f9: lea    r8,[rbp+0x60]
140abb0fd: mov    rdx,r15
140abb100: lea    rcx,[rbp-0x28]
140abb104: call   0x1400bad30
140abb109: mov    r15,QWORD PTR [rbp-0x20]
140abb10d: mov    ebx,0xffff8ad0
140abb112: sub    r12,0x1
140abb116: mov    r14,QWORD PTR [rbp-0x18]
140abb11a: jns    0x140abac00
140abb120: mov    rbx,QWORD PTR [rbp-0x28]
140abb124: mov    esi,0xff
140abb129: nop    DWORD PTR [rax+0x0]
140abb130: cmp    rbx,r15
140abb133: je     0x140abb167
140abb135: mov    eax,0x1
140abb13a: cmovb  eax,esi
140abb13d: test   al,al
140abb13f: jns    0x140abb167
140abb141: mov    rdi,QWORD PTR [rbx]
140abb144: mov    dl,0x1
140abb146: mov    rcx,rdi
140abb149: call   0x140c634f0
140abb14e: mov    rax,QWORD PTR [rdi]
140abb151: mov    rcx,rdi
140abb154: call   QWORD PTR [rax+0x330]
140abb15a: or     DWORD PTR [rdi+0x10],0x20010
140abb161: add    rbx,0x8
140abb165: jmp    0x140abb130
140abb167: lea    rcx,[rbp-0x28]
140abb16b: call   0x140066b70
140abb170: add    rsp,0x58
140abb174: pop    r15
140abb176: pop    r14
140abb178: pop    r13
140abb17a: pop    r12
140abb17c: pop    rdi
140abb17d: pop    rsi
140abb17e: pop    rbx
140abb17f: pop    rbp
140abb180: ret