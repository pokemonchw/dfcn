; classic PE:6aea11a5:0272d000; written-work-content; RVA 0xcda860..0xcdb51e; code ends 0xcdb4b0
0x00cda860: mov    QWORD PTR [rsp+0x8],rbx
0x00cda865: push   rbp
0x00cda866: push   rsi
0x00cda867: push   rdi
0x00cda868: push   r12
0x00cda86a: push   r13
0x00cda86c: push   r14
0x00cda86e: push   r15
0x00cda870: mov    rbp,rsp
0x00cda873: sub    rsp,0x70
0x00cda877: mov    rax,QWORD PTR [rip+0xbdd7c2]        # 0x1418b8040
0x00cda87e: xor    rax,rsp
0x00cda881: mov    QWORD PTR [rbp-0x8],rax
0x00cda885: mov    edi,r8d
0x00cda888: mov    DWORD PTR [rbp-0x50],r8d
0x00cda88c: mov    r14,rdx
0x00cda88f: mov    r13,rcx
0x00cda892: xor    esi,esi
0x00cda894: mov    r15d,esi
0x00cda897: mov    r12d,esi
0x00cda89a: mov    rbx,QWORD PTR [rcx+0x30]
0x00cda89e: mov    rdx,rbx
0x00cda8a1: mov    rax,QWORD PTR [rcx+0x38]
0x00cda8a5: mov    rcx,QWORD PTR [rcx+0x48]
0x00cda8a9: mov    r8,rcx
0x00cda8ac: nop    DWORD PTR [rax+0x0]
0x00cda8b0: cmp    rdx,rax
0x00cda8b3: jae    0x140cda8e0
0x00cda8b5: mov    r10d,DWORD PTR [r8]
0x00cda8b8: add    rdx,0x8
0x00cda8bc: add    r8,0x4
0x00cda8c0: lea    r9d,[r15+0x1]
0x00cda8c4: test   r10d,r10d
0x00cda8c7: cmovne r9d,r15d
0x00cda8cb: mov    r15d,r9d
0x00cda8ce: lea    r9d,[r12+0x1]
0x00cda8d3: cmp    r10d,0x5
0x00cda8d7: cmovne r9d,r12d
0x00cda8db: mov    r12d,r9d
0x00cda8de: jmp    0x140cda8b0
0x00cda8e0: test   r15d,r15d
0x00cda8e3: jle    0x140cdab14
0x00cda8e9: mov    edx,DWORD PTR [r13+0x68]
0x00cda8ed: cmp    edx,0x14
0x00cda8f0: jne    0x140cda994
0x00cda8f6: cmp    r15d,0x1
0x00cda8fa: jne    0x140cdaa3b
0x00cda900: cmp    rbx,rax
0x00cda903: jae    0x140cdab29
0x00cda909: cmp    DWORD PTR [rcx],esi
0x00cda90b: je     0x140cda917
0x00cda90d: add    rbx,0x8
0x00cda911: add    rcx,0x4
0x00cda915: jmp    0x140cda900
0x00cda917: mov    r8d,0x1f
0x00cda91d: lea    rdx,[rip+0xa43bdc]        # 0x14171e500 ; literal="It asks the question, \"What if "
0x00cda924: mov    rcx,r14
0x00cda927: call   0x140070fd0
0x00cda92c: xorps  xmm0,xmm0
0x00cda92f: movups XMMWORD PTR [rbp-0x48],xmm0
0x00cda933: mov    QWORD PTR [rbp-0x38],rsi
0x00cda937: mov    QWORD PTR [rbp-0x30],0xf
0x00cda93f: mov    BYTE PTR [rbp-0x48],sil
0x00cda943: mov    rcx,QWORD PTR [rbx]
0x00cda946: mov    rax,QWORD PTR [rcx]
0x00cda949: mov    r8d,edi
0x00cda94c: lea    rdx,[rbp-0x48]
0x00cda950: call   QWORD PTR [rax+0x90]
0x00cda956: lea    rdx,[rbp-0x48]
0x00cda95a: cmp    QWORD PTR [rbp-0x30],0xf
0x00cda95f: cmova  rdx,QWORD PTR [rbp-0x48]
0x00cda964: mov    r8,QWORD PTR [rbp-0x38]
0x00cda968: mov    rcx,r14
0x00cda96b: call   0x140070fd0
0x00cda970: mov    r8d,0x1d
0x00cda976: lea    rdx,[rip+0xa43ba3]        # 0x14171e520 ; literal=" had unfolded differently?\"  "
0x00cda97d: mov    rcx,r14
0x00cda980: call   0x140070fd0
0x00cda985: nop
0x00cda986: lea    rcx,[rbp-0x48]
0x00cda98a: call   0x140070e10
0x00cda98f: jmp    0x140cdab29
0x00cda994: cmp    edx,0x10
0x00cda997: jne    0x140cdaa3b
0x00cda99d: cmp    r15d,0x1
0x00cda9a1: jne    0x140cdaa3b
0x00cda9a7: cmp    rbx,rax
0x00cda9aa: jae    0x140cdab29
0x00cda9b0: cmp    DWORD PTR [rcx],esi
0x00cda9b2: je     0x140cda9be
0x00cda9b4: add    rbx,0x8
0x00cda9b8: add    rcx,0x4
0x00cda9bc: jmp    0x140cda9a7
0x00cda9be: mov    r8d,0x1b
0x00cda9c4: lea    rdx,[rip+0xa43b75]        # 0x14171e540 ; literal="It concerns the lineage of "
0x00cda9cb: mov    rcx,r14
0x00cda9ce: call   0x140070fd0
0x00cda9d3: xorps  xmm0,xmm0
0x00cda9d6: movups XMMWORD PTR [rbp-0x48],xmm0
0x00cda9da: mov    QWORD PTR [rbp-0x38],rsi
0x00cda9de: mov    QWORD PTR [rbp-0x30],0xf
0x00cda9e6: mov    BYTE PTR [rbp-0x48],sil
0x00cda9ea: mov    rcx,QWORD PTR [rbx]
0x00cda9ed: mov    rax,QWORD PTR [rcx]
0x00cda9f0: mov    r8d,edi
0x00cda9f3: lea    rdx,[rbp-0x48]
0x00cda9f7: call   QWORD PTR [rax+0x90]
0x00cda9fd: lea    rdx,[rbp-0x48]
0x00cdaa01: cmp    QWORD PTR [rbp-0x30],0xf
0x00cdaa06: cmova  rdx,QWORD PTR [rbp-0x48]
0x00cdaa0b: mov    r8,QWORD PTR [rbp-0x38]
0x00cdaa0f: mov    rcx,r14
0x00cdaa12: call   0x140070fd0
0x00cdaa17: mov    r8d,0x3
0x00cdaa1d: lea    rdx,[rip+0x939c5c]        # 0x141614680 ; literal=".  "
0x00cdaa24: mov    rcx,r14
0x00cdaa27: call   0x140070fd0
0x00cdaa2c: nop
0x00cdaa2d: lea    rcx,[rbp-0x48]
0x00cdaa31: call   0x140070e10
0x00cdaa36: jmp    0x140cdab29
0x00cdaa3b: mov    r8d,0xc
0x00cdaa41: lea    rdx,[rip+0xa43b18]        # 0x14171e560 ; literal="It concerns "
0x00cdaa48: mov    rcx,r14
0x00cdaa4b: call   0x140070fd0
0x00cdaa50: mov    rbx,QWORD PTR [r13+0x30]
0x00cdaa54: mov    rsi,QWORD PTR [r13+0x38]
0x00cdaa58: mov    rdi,QWORD PTR [r13+0x48]
0x00cdaa5c: nop    DWORD PTR [rax+0x0]
0x00cdaa60: cmp    rbx,rsi
0x00cdaa63: jae    0x140cdab29
0x00cdaa69: cmp    DWORD PTR [rdi],0x0
0x00cdaa6c: jne    0x140cdab07
0x00cdaa72: xorps  xmm0,xmm0
0x00cdaa75: movups XMMWORD PTR [rbp-0x48],xmm0
0x00cdaa79: mov    QWORD PTR [rbp-0x38],0x0
0x00cdaa81: mov    QWORD PTR [rbp-0x30],0xf
0x00cdaa89: mov    BYTE PTR [rbp-0x48],0x0
0x00cdaa8d: mov    rcx,QWORD PTR [rbx]
0x00cdaa90: mov    rax,QWORD PTR [rcx]
0x00cdaa93: mov    r8d,DWORD PTR [rbp-0x50]
0x00cdaa97: lea    rdx,[rbp-0x48]
0x00cdaa9b: call   QWORD PTR [rax+0x90]
0x00cdaaa1: lea    rdx,[rbp-0x48]
0x00cdaaa5: cmp    QWORD PTR [rbp-0x30],0xf
0x00cdaaaa: cmova  rdx,QWORD PTR [rbp-0x48]
0x00cdaaaf: mov    r8,QWORD PTR [rbp-0x38]
0x00cdaab3: mov    rcx,r14
0x00cdaab6: call   0x140070fd0
0x00cdaabb: dec    r15d
0x00cdaabe: cmp    r15d,0x2
0x00cdaac2: jl     0x140cdaad3
0x00cdaac4: mov    r8d,0x2
0x00cdaaca: lea    rdx,[rip+0x924837]        # 0x1415ff308 ; literal=", "
0x00cdaad1: jmp    0x140cdaaf5
0x00cdaad3: cmp    r15d,0x1
0x00cdaad7: jne    0x140cdaae8
0x00cdaad9: mov    r8d,0x5
0x00cdaadf: lea    rdx,[rip+0x92485a]        # 0x1415ff340 ; literal=" and "
0x00cdaae6: jmp    0x140cdaaf5
0x00cdaae8: mov    r8d,0x3
0x00cdaaee: lea    rdx,[rip+0x939b8b]        # 0x141614680 ; literal=".  "
0x00cdaaf5: mov    rcx,r14
0x00cdaaf8: call   0x140070fd0
0x00cdaafd: nop
0x00cdaafe: lea    rcx,[rbp-0x48]
0x00cdab02: call   0x140070e10
0x00cdab07: add    rbx,0x8
0x00cdab0b: add    rdi,0x4
0x00cdab0f: jmp    0x140cdaa60
0x00cdab14: mov    r8d,0x25
0x00cdab1a: lea    rdx,[rip+0xa43a4f]        # 0x14171e570 ; literal="The work has no particular subject.  "
0x00cdab21: mov    rcx,r14
0x00cdab24: call   0x140070fd0
0x00cdab29: mov    rdi,QWORD PTR [r13+0x30]
0x00cdab2d: mov    rsi,QWORD PTR [r13+0x38]
0x00cdab31: mov    rbx,QWORD PTR [r13+0x48]
0x00cdab35: mov    r15d,0x2d
0x00cdab3b: nop    DWORD PTR [rax+rax*1+0x0]
0x00cdab40: cmp    rdi,rsi
0x00cdab43: jae    0x140cdae4b
0x00cdab49: cmp    DWORD PTR [rbx],0x6
0x00cdab4c: jne    0x140cdabfe
0x00cdab52: mov    r8,r15
0x00cdab55: lea    rdx,[rip+0xa43a3c]        # 0x14171e598 ; literal="The writing conveys a moral lesson regarding "
0x00cdab5c: mov    rcx,r14
0x00cdab5f: call   0x140070fd0
0x00cdab64: xorps  xmm0,xmm0
0x00cdab67: movups XMMWORD PTR [rbp-0x48],xmm0
0x00cdab6b: mov    QWORD PTR [rbp-0x38],0x0
0x00cdab73: mov    QWORD PTR [rbp-0x30],0xf
0x00cdab7b: mov    BYTE PTR [rbp-0x48],0x0
0x00cdab7f: mov    rcx,QWORD PTR [rdi]
0x00cdab82: mov    rax,QWORD PTR [rcx]
0x00cdab85: mov    r8d,DWORD PTR [rbp-0x50]
0x00cdab89: lea    rdx,[rbp-0x48]
0x00cdab8d: call   QWORD PTR [rax+0x90]
0x00cdab93: lea    rdx,[rbp-0x48]
0x00cdab97: cmp    QWORD PTR [rbp-0x30],0xf
0x00cdab9c: cmova  rdx,QWORD PTR [rbp-0x48]
0x00cdaba1: mov    r8,QWORD PTR [rbp-0x38]
0x00cdaba5: mov    rcx,r14
0x00cdaba8: call   0x140070fd0
0x00cdabad: mov    r8d,0x3
0x00cdabb3: lea    rdx,[rip+0x939ac6]        # 0x141614680 ; literal=".  "
0x00cdabba: mov    rcx,r14
0x00cdabbd: call   0x140070fd0
0x00cdabc2: nop
0x00cdabc3: mov    rdx,QWORD PTR [rbp-0x30]
0x00cdabc7: cmp    rdx,0xf
0x00cdabcb: jbe    0x140cdabfe
0x00cdabcd: inc    rdx
0x00cdabd0: mov    rcx,QWORD PTR [rbp-0x48]
0x00cdabd4: mov    rax,rcx
0x00cdabd7: cmp    rdx,0x1000
0x00cdabde: jb     0x140cdabf9
0x00cdabe0: add    rdx,0x27
0x00cdabe4: mov    rcx,QWORD PTR [rcx-0x8]
0x00cdabe8: sub    rax,rcx
0x00cdabeb: add    rax,0xfffffffffffffff8
0x00cdabef: cmp    rax,0x1f
0x00cdabf3: ja     0x140cdae2f
0x00cdabf9: call   0x14154de20
0x00cdabfe: cmp    DWORD PTR [rbx],0x9
0x00cdac01: jne    0x140cdacb6
0x00cdac07: mov    r8d,0x1c
0x00cdac0d: lea    rdx,[rip+0xa439b4]        # 0x14171e5c8 ; literal="The overall text emphasizes "
0x00cdac14: mov    rcx,r14
0x00cdac17: call   0x140070fd0
0x00cdac1c: xorps  xmm0,xmm0
0x00cdac1f: movups XMMWORD PTR [rbp-0x48],xmm0
0x00cdac23: mov    QWORD PTR [rbp-0x38],0x0
0x00cdac2b: mov    QWORD PTR [rbp-0x30],0xf
0x00cdac33: mov    BYTE PTR [rbp-0x48],0x0
0x00cdac37: mov    rcx,QWORD PTR [rdi]
0x00cdac3a: mov    rax,QWORD PTR [rcx]
0x00cdac3d: mov    r8d,DWORD PTR [rbp-0x50]
0x00cdac41: lea    rdx,[rbp-0x48]
0x00cdac45: call   QWORD PTR [rax+0x90]
0x00cdac4b: lea    rdx,[rbp-0x48]
0x00cdac4f: cmp    QWORD PTR [rbp-0x30],0xf
0x00cdac54: cmova  rdx,QWORD PTR [rbp-0x48]
0x00cdac59: mov    r8,QWORD PTR [rbp-0x38]
0x00cdac5d: mov    rcx,r14
0x00cdac60: call   0x140070fd0
0x00cdac65: mov    r8d,0x3
0x00cdac6b: lea    rdx,[rip+0x939a0e]        # 0x141614680 ; literal=".  "
0x00cdac72: mov    rcx,r14
0x00cdac75: call   0x140070fd0
0x00cdac7a: nop
0x00cdac7b: mov    rdx,QWORD PTR [rbp-0x30]
0x00cdac7f: cmp    rdx,0xf
0x00cdac83: jbe    0x140cdacb6
0x00cdac85: inc    rdx
0x00cdac88: mov    rcx,QWORD PTR [rbp-0x48]
0x00cdac8c: mov    rax,rcx
0x00cdac8f: cmp    rdx,0x1000
0x00cdac96: jb     0x140cdacb1
0x00cdac98: add    rdx,0x27
0x00cdac9c: mov    rcx,QWORD PTR [rcx-0x8]
0x00cdaca0: sub    rax,rcx
0x00cdaca3: add    rax,0xfffffffffffffff8
0x00cdaca7: cmp    rax,0x1f
0x00cdacab: ja     0x140cdae36
0x00cdacb1: call   0x14154de20
0x00cdacb6: cmp    DWORD PTR [rbx],0x7
0x00cdacb9: jne    0x140cdad6e
0x00cdacbf: mov    r8d,0x26
0x00cdacc5: lea    rdx,[rip+0xa4391c]        # 0x14171e5e8 ; literal="For lyrics, the composer has selected "
0x00cdaccc: mov    rcx,r14
0x00cdaccf: call   0x140070fd0
0x00cdacd4: xorps  xmm0,xmm0
0x00cdacd7: movups XMMWORD PTR [rbp-0x48],xmm0
0x00cdacdb: mov    QWORD PTR [rbp-0x38],0x0
0x00cdace3: mov    QWORD PTR [rbp-0x30],0xf
0x00cdaceb: mov    BYTE PTR [rbp-0x48],0x0
0x00cdacef: mov    rcx,QWORD PTR [rdi]
0x00cdacf2: mov    rax,QWORD PTR [rcx]
0x00cdacf5: mov    r8d,DWORD PTR [rbp-0x50]
0x00cdacf9: lea    rdx,[rbp-0x48]
0x00cdacfd: call   QWORD PTR [rax+0x90]
0x00cdad03: lea    rdx,[rbp-0x48]
0x00cdad07: cmp    QWORD PTR [rbp-0x30],0xf
0x00cdad0c: cmova  rdx,QWORD PTR [rbp-0x48]
0x00cdad11: mov    r8,QWORD PTR [rbp-0x38]
0x00cdad15: mov    rcx,r14
0x00cdad18: call   0x140070fd0
0x00cdad1d: mov    r8d,0x3
0x00cdad23: lea    rdx,[rip+0x939956]        # 0x141614680 ; literal=".  "
0x00cdad2a: mov    rcx,r14
0x00cdad2d: call   0x140070fd0
0x00cdad32: nop
0x00cdad33: mov    rdx,QWORD PTR [rbp-0x30]
0x00cdad37: cmp    rdx,0xf
0x00cdad3b: jbe    0x140cdad6e
0x00cdad3d: inc    rdx
0x00cdad40: mov    rcx,QWORD PTR [rbp-0x48]
0x00cdad44: mov    rax,rcx
0x00cdad47: cmp    rdx,0x1000
0x00cdad4e: jb     0x140cdad69
0x00cdad50: add    rdx,0x27
0x00cdad54: mov    rcx,QWORD PTR [rcx-0x8]
0x00cdad58: sub    rax,rcx
0x00cdad5b: add    rax,0xfffffffffffffff8
0x00cdad5f: cmp    rax,0x1f
0x00cdad63: ja     0x140cdae3d
0x00cdad69: call   0x14154de20
0x00cdad6e: cmp    DWORD PTR [rbx],0x8
0x00cdad71: jne    0x140cdae22
0x00cdad77: mov    r8d,0x3a
0x00cdad7d: lea    rdx,[rip+0xa4388c]        # 0x14171e610 ; literal="For musical accompaniment, the choreographer has selected "
0x00cdad84: mov    rcx,r14
0x00cdad87: call   0x140070fd0
0x00cdad8c: xorps  xmm0,xmm0
0x00cdad8f: movups XMMWORD PTR [rbp-0x48],xmm0
0x00cdad93: mov    QWORD PTR [rbp-0x38],0x0
0x00cdad9b: mov    QWORD PTR [rbp-0x30],0xf
0x00cdada3: mov    BYTE PTR [rbp-0x48],0x0
0x00cdada7: mov    rcx,QWORD PTR [rdi]
0x00cdadaa: mov    rax,QWORD PTR [rcx]
0x00cdadad: mov    r8d,DWORD PTR [rbp-0x50]
0x00cdadb1: lea    rdx,[rbp-0x48]
0x00cdadb5: call   QWORD PTR [rax+0x90]
0x00cdadbb: lea    rdx,[rbp-0x48]
0x00cdadbf: cmp    QWORD PTR [rbp-0x30],0xf
0x00cdadc4: cmova  rdx,QWORD PTR [rbp-0x48]
0x00cdadc9: mov    r8,QWORD PTR [rbp-0x38]
0x00cdadcd: mov    rcx,r14
0x00cdadd0: call   0x140070fd0
0x00cdadd5: mov    r8d,0x3
0x00cdaddb: lea    rdx,[rip+0x93989e]        # 0x141614680 ; literal=".  "
0x00cdade2: mov    rcx,r14
0x00cdade5: call   0x140070fd0
0x00cdadea: nop
0x00cdadeb: mov    rdx,QWORD PTR [rbp-0x30]
0x00cdadef: cmp    rdx,0xf
0x00cdadf3: jbe    0x140cdae22
0x00cdadf5: inc    rdx
0x00cdadf8: mov    rcx,QWORD PTR [rbp-0x48]
0x00cdadfc: mov    rax,rcx
0x00cdadff: cmp    rdx,0x1000
0x00cdae06: jb     0x140cdae1d
0x00cdae08: add    rdx,0x27
0x00cdae0c: mov    rcx,QWORD PTR [rcx-0x8]
0x00cdae10: sub    rax,rcx
0x00cdae13: add    rax,0xfffffffffffffff8
0x00cdae17: cmp    rax,0x1f
0x00cdae1b: ja     0x140cdae44
0x00cdae1d: call   0x14154de20
0x00cdae22: add    rdi,0x8
0x00cdae26: add    rbx,0x4
0x00cdae2a: jmp    0x140cdab40
0x00cdae2f: call   QWORD PTR [rip+0x920c93]        # 0x1415fbac8
0x00cdae35: int3
0x00cdae36: call   QWORD PTR [rip+0x920c8c]        # 0x1415fbac8
0x00cdae3c: int3
0x00cdae3d: call   QWORD PTR [rip+0x920c85]        # 0x1415fbac8
0x00cdae43: int3
0x00cdae44: call   QWORD PTR [rip+0x920c7e]        # 0x1415fbac8
0x00cdae4a: int3
0x00cdae4b: mov    rax,QWORD PTR [r13+0x78]
0x00cdae4f: sub    rax,QWORD PTR [r13+0x70]
0x00cdae53: sar    rax,0x2
0x00cdae57: lea    rsi,[rip+0xffffffffff3251a2]        # 0x140000000
0x00cdae5e: test   rax,rax
0x00cdae61: je     0x140cdaf7a
0x00cdae67: mov    r8d,0xc
0x00cdae6d: lea    rdx,[rip+0xa437dc]        # 0x14171e650 ; literal="The writing "
0x00cdae74: mov    rcx,r14
0x00cdae77: call   0x140070fd0
0x00cdae7c: mov    rax,QWORD PTR [r13+0x70]
0x00cdae80: movsxd rbx,DWORD PTR [rax]
0x00cdae83: mov    rax,QWORD PTR [r13+0x88]
0x00cdae8a: mov    r9d,DWORD PTR [r13+0xa4]
0x00cdae91: mov    r8d,DWORD PTR [rax]
0x00cdae94: mov    edx,ebx
0x00cdae96: mov    rcx,r14
0x00cdae99: call   0x140cda030
0x00cdae9e: mov    rdi,QWORD PTR [r13+0x70]
0x00cdaea2: mov    rax,QWORD PTR [r13+0x78]
0x00cdaea6: sub    rax,rdi
0x00cdaea9: sar    rax,0x2
0x00cdaead: cmp    rax,0x2
0x00cdaeb1: jb     0x140cdaf65
0x00cdaeb7: movsxd rdi,DWORD PTR [rdi+0x4]
0x00cdaebb: mov    rax,QWORD PTR [r13+0x88]
0x00cdaec2: mov    esi,DWORD PTR [rax+0x4]
0x00cdaec5: lea    rdx,[rip+0xffffffffff325134]        # 0x140000000
0x00cdaecc: cmp    ebx,0x11
0x00cdaecf: ja     0x140cdaef8
0x00cdaed1: movzx  eax,BYTE PTR [rdx+rbx*1+0xcdb4bc]
0x00cdaed9: mov    ecx,DWORD PTR [rdx+rax*4+0xcdb4b0]
0x00cdaee0: add    rcx,rdx
0x00cdaee3: jmp    rcx
0x00cdaee5: cmp    DWORD PTR [r13+0xa4],0x14
0x00cdaeed: setl   r8b
0x00cdaef1: jmp    0x140cdaefb
0x00cdaef3: mov    r8b,0x1
0x00cdaef6: jmp    0x140cdaefb
0x00cdaef8: xor    r8b,r8b
0x00cdaefb: cmp    edi,0x11
0x00cdaefe: ja     0x140cdaf25
0x00cdaf00: movzx  eax,BYTE PTR [rdx+rdi*1+0xcdb4dc]
0x00cdaf08: mov    ecx,DWORD PTR [rdx+rax*4+0xcdb4d0]
0x00cdaf0f: add    rcx,rdx
0x00cdaf12: jmp    rcx
0x00cdaf14: cmp    DWORD PTR [r13+0xa4],0x14
0x00cdaf1c: setl   al
0x00cdaf1f: jmp    0x140cdaf27
0x00cdaf21: mov    al,0x1
0x00cdaf23: jmp    0x140cdaf27
0x00cdaf25: xor    al,al
0x00cdaf27: lea    rcx,[rip+0xa43742]        # 0x14171e670 ; literal=" and it "
0x00cdaf2e: lea    rdx,[rip+0xa4372b]        # 0x14171e660 ; literal=" yet it "
0x00cdaf35: cmp    al,r8b
0x00cdaf38: cmove  rdx,rcx
0x00cdaf3c: mov    r8d,0x8
0x00cdaf42: mov    rcx,r14
0x00cdaf45: call   0x140070fd0
0x00cdaf4a: mov    r9d,DWORD PTR [r13+0xa4]
0x00cdaf51: mov    r8d,esi
0x00cdaf54: mov    edx,edi
0x00cdaf56: mov    rcx,r14
0x00cdaf59: call   0x140cda030
0x00cdaf5e: lea    rsi,[rip+0xffffffffff32509b]        # 0x140000000
0x00cdaf65: mov    r8d,0x3
0x00cdaf6b: lea    rdx,[rip+0x93970e]        # 0x141614680 ; literal=".  "
0x00cdaf72: mov    rcx,r14
0x00cdaf75: call   0x140070fd0
0x00cdaf7a: movsxd rax,DWORD PTR [r13+0x68]
0x00cdaf7e: cmp    eax,0x19
0x00cdaf81: ja     0x140cdb1ce
0x00cdaf87: movzx  eax,BYTE PTR [rsi+rax*1+0xcdb504]
0x00cdaf8f: mov    ecx,DWORD PTR [rsi+rax*4+0xcdb4f0]
0x00cdaf96: add    rcx,rsi
0x00cdaf99: jmp    rcx
0x00cdaf9b: mov    eax,DWORD PTR [r13+0xa4]
0x00cdafa2: cmp    eax,0x32
0x00cdafa5: jl     0x140cdafb9
0x00cdafa7: lea    rdx,[rip+0xa436d2]        # 0x14171e680 ; literal="Overall, the information is compiled masterfully"
0x00cdafae: mov    r15d,0x30
0x00cdafb4: jmp    0x140cdb246
0x00cdafb9: cmp    eax,0x28
0x00cdafbc: jl     0x140cdafd0
0x00cdafbe: lea    rdx,[rip+0xa436f3]        # 0x14171e6b8 ; literal="Overall, the splendid source of information"
0x00cdafc5: mov    r15d,0x2b
0x00cdafcb: jmp    0x140cdb246
0x00cdafd0: cmp    eax,0x1e
0x00cdafd3: jl     0x140cdafe7
0x00cdafd5: lea    rdx,[rip+0xa4370c]        # 0x14171e6e8 ; literal="Overall, this is a great source of information"
0x00cdafdc: mov    r15d,0x2e
0x00cdafe2: jmp    0x140cdb246
0x00cdafe7: cmp    eax,0x14
0x00cdafea: jl     0x140cdaff8
0x00cdafec: lea    rdx,[rip+0xa43725]        # 0x14171e718 ; literal="Overall, this is a good source of information"
0x00cdaff3: jmp    0x140cdb246
0x00cdaff8: mov    rcx,r14
0x00cdaffb: cmp    eax,0xa
0x00cdaffe: jl     0x140cdb012
0x00cdb000: lea    rdx,[rip+0xa43741]        # 0x14171e748 ; literal="Overall, the information is not compiled very well"
0x00cdb007: mov    r15d,0x32
0x00cdb00d: jmp    0x140cdb249
0x00cdb012: lea    rdx,[rip+0xa43767]        # 0x14171e780 ; literal="Overall, this is a terrible compilation of information"
0x00cdb019: mov    r15d,0x36
0x00cdb01f: jmp    0x140cdb249
0x00cdb024: mov    eax,DWORD PTR [r13+0xa4]
0x00cdb02b: cmp    eax,0x32
0x00cdb02e: jl     0x140cdb042
0x00cdb030: lea    rdx,[rip+0xa43781]        # 0x14171e7b8 ; literal="Overall, the poetry is masterful"
0x00cdb037: mov    r15d,0x20
0x00cdb03d: jmp    0x140cdb246
0x00cdb042: cmp    eax,0x28
0x00cdb045: jl     0x140cdb059
0x00cdb047: lea    rdx,[rip+0xa43792]        # 0x14171e7e0 ; literal="Overall, the poetry is inspired"
0x00cdb04e: mov    r15d,0x1f
0x00cdb054: jmp    0x140cdb246
0x00cdb059: cmp    eax,0x1e
0x00cdb05c: jl     0x140cdb070
0x00cdb05e: lea    rdx,[rip+0xa4379b]        # 0x14171e800 ; literal="Overall, the poetry is great"
0x00cdb065: mov    r15d,0x1c
0x00cdb06b: jmp    0x140cdb246
0x00cdb070: cmp    eax,0x14
0x00cdb073: jl     0x140cdb087
0x00cdb075: lea    rdx,[rip+0xa437a4]        # 0x14171e820 ; literal="Overall, the poetry is passable"
0x00cdb07c: mov    r15d,0x1f
0x00cdb082: jmp    0x140cdb246
0x00cdb087: mov    rcx,r14
0x00cdb08a: cmp    eax,0xa
0x00cdb08d: jl     0x140cdb0a1
0x00cdb08f: lea    rdx,[rip+0xa437aa]        # 0x14171e840 ; literal="Overall, the poetry is not awful, but not very good either"
0x00cdb096: mov    r15d,0x3a
0x00cdb09c: jmp    0x140cdb249
0x00cdb0a1: lea    rdx,[rip+0xa437d8]        # 0x14171e880 ; literal="Overall, the poetry is very, very bad"
0x00cdb0a8: mov    r15d,0x25
0x00cdb0ae: jmp    0x140cdb249
0x00cdb0b3: mov    eax,DWORD PTR [r13+0xa4]
0x00cdb0ba: cmp    eax,0x32
0x00cdb0bd: jl     0x140cdb0d1
0x00cdb0bf: lea    rdx,[rip+0xa437e2]        # 0x14171e8a8 ; literal="Overall, the composition is masterful"
0x00cdb0c6: mov    r15d,0x25
0x00cdb0cc: jmp    0x140cdb246
0x00cdb0d1: cmp    eax,0x28
0x00cdb0d4: jl     0x140cdb0e8
0x00cdb0d6: lea    rdx,[rip+0xa437f3]        # 0x14171e8d0 ; literal="Overall, the composition is inspired"
0x00cdb0dd: mov    r15d,0x24
0x00cdb0e3: jmp    0x140cdb246
0x00cdb0e8: cmp    eax,0x1e
0x00cdb0eb: jl     0x140cdb0ff
0x00cdb0ed: lea    rdx,[rip+0xa43804]        # 0x14171e8f8 ; literal="Overall, the composition is great"
0x00cdb0f4: mov    r15d,0x21
0x00cdb0fa: jmp    0x140cdb246
0x00cdb0ff: cmp    eax,0x14
0x00cdb102: jl     0x140cdb116
0x00cdb104: lea    rdx,[rip+0xa43815]        # 0x14171e920 ; literal="Overall, the composition is passable"
0x00cdb10b: mov    r15d,0x24
0x00cdb111: jmp    0x140cdb246
0x00cdb116: mov    rcx,r14
0x00cdb119: cmp    eax,0xa
0x00cdb11c: jl     0x140cdb130
0x00cdb11e: lea    rdx,[rip+0xa4382b]        # 0x14171e950 ; literal="Overall, the composition is not awful, but not very good either"
0x00cdb125: mov    r15d,0x3f
0x00cdb12b: jmp    0x140cdb249
0x00cdb130: lea    rdx,[rip+0xa43859]        # 0x14171e990 ; literal="Overall, the composition is atrocious"
0x00cdb137: mov    r15d,0x25
0x00cdb13d: jmp    0x140cdb249
0x00cdb142: mov    eax,DWORD PTR [r13+0xa4]
0x00cdb149: cmp    eax,0x32
0x00cdb14c: jl     0x140cdb160
0x00cdb14e: lea    rdx,[rip+0xa43863]        # 0x14171e9b8 ; literal="Overall, the choreography is masterful"
0x00cdb155: mov    r15d,0x26
0x00cdb15b: jmp    0x140cdb246
0x00cdb160: cmp    eax,0x28
0x00cdb163: jl     0x140cdb177
0x00cdb165: lea    rdx,[rip+0xa43874]        # 0x14171e9e0 ; literal="Overall, the choreography is inspired"
0x00cdb16c: mov    r15d,0x25
0x00cdb172: jmp    0x140cdb246
0x00cdb177: cmp    eax,0x1e
0x00cdb17a: jl     0x140cdb18e
0x00cdb17c: lea    rdx,[rip+0xa43885]        # 0x14171ea08 ; literal="Overall, the choreography is great"
0x00cdb183: mov    r15d,0x22
0x00cdb189: jmp    0x140cdb246
0x00cdb18e: cmp    eax,0x14
0x00cdb191: jl     0x140cdb1a5
0x00cdb193: lea    rdx,[rip+0xa43896]        # 0x14171ea30 ; literal="Overall, the choreography is passable"
0x00cdb19a: mov    r15d,0x25
0x00cdb1a0: jmp    0x140cdb246
0x00cdb1a5: mov    rcx,r14
0x00cdb1a8: cmp    eax,0xa
0x00cdb1ab: jl     0x140cdb1bf
0x00cdb1ad: lea    rdx,[rip+0xa438ac]        # 0x14171ea60 ; literal="Overall, the choreography is not awful, but not very good either"
0x00cdb1b4: mov    r15d,0x40
0x00cdb1ba: jmp    0x140cdb249
0x00cdb1bf: lea    rdx,[rip+0xa438e2]        # 0x14171eaa8 ; literal="Overall, the choreography is just terrible"
0x00cdb1c6: mov    r15d,0x2a
0x00cdb1cc: jmp    0x140cdb249
0x00cdb1ce: mov    eax,DWORD PTR [r13+0xa4]
0x00cdb1d5: cmp    eax,0x32
0x00cdb1d8: jl     0x140cdb1e9
0x00cdb1da: lea    rdx,[rip+0xa438f7]        # 0x14171ead8 ; literal="Overall, the prose is masterful"
0x00cdb1e1: mov    r15d,0x1f
0x00cdb1e7: jmp    0x140cdb246
0x00cdb1e9: cmp    eax,0x28
0x00cdb1ec: jl     0x140cdb1fd
0x00cdb1ee: lea    rdx,[rip+0xa43903]        # 0x14171eaf8 ; literal="Overall, the prose is splendid"
0x00cdb1f5: mov    r15d,0x1e
0x00cdb1fb: jmp    0x140cdb246
0x00cdb1fd: cmp    eax,0x1e
0x00cdb200: jl     0x140cdb211
0x00cdb202: lea    rdx,[rip+0xa4390f]        # 0x14171eb18 ; literal="Overall, the prose is great"
0x00cdb209: mov    r15d,0x1b
0x00cdb20f: jmp    0x140cdb246
0x00cdb211: cmp    eax,0x14
0x00cdb214: jl     0x140cdb225
0x00cdb216: lea    rdx,[rip+0xa4391b]        # 0x14171eb38 ; literal="Overall, the prose is passable"
0x00cdb21d: mov    r15d,0x1e
0x00cdb223: jmp    0x140cdb246
0x00cdb225: cmp    eax,0xa
0x00cdb228: jl     0x140cdb239
0x00cdb22a: lea    rdx,[rip+0xa43927]        # 0x14171eb58 ; literal="Overall, the prose is not awful, but not very good either"
0x00cdb231: mov    r15d,0x39
0x00cdb237: jmp    0x140cdb246
0x00cdb239: lea    rdx,[rip+0xa43958]        # 0x14171eb98 ; literal="Overall, the prose is amateurish at best"
0x00cdb240: mov    r15d,0x28
0x00cdb246: mov    rcx,r14
0x00cdb249: mov    r8,r15
0x00cdb24c: call   0x140070fd0
0x00cdb251: mov    r8d,0x3
0x00cdb257: lea    rdx,[rip+0x939422]        # 0x141614680 ; literal=".  "
0x00cdb25e: mov    rcx,r14
0x00cdb261: call   0x140070fd0
0x00cdb266: test   r12d,r12d
0x00cdb269: jle    0x140cdb48a
0x00cdb26f: mov    rcx,r14
0x00cdb272: cmp    r12d,0x1
0x00cdb276: jne    0x140cdb28f
0x00cdb278: mov    r8d,0x20
0x00cdb27e: lea    rdx,[rip+0xa43943]        # 0x14171ebc8 ; literal="The work has a single chapter.  "
0x00cdb285: call   0x140070fd0
0x00cdb28a: jmp    0x140cdb336
0x00cdb28f: mov    r8d,0xd
0x00cdb295: lea    rdx,[rip+0xa43954]        # 0x14171ebf0 ; literal="The work has "
0x00cdb29c: call   0x140070fd0
0x00cdb2a1: xorps  xmm0,xmm0
0x00cdb2a4: movups XMMWORD PTR [rbp-0x48],xmm0
0x00cdb2a8: mov    QWORD PTR [rbp-0x38],0x0
0x00cdb2b0: mov    QWORD PTR [rbp-0x30],0xf
0x00cdb2b8: mov    BYTE PTR [rbp-0x48],0x0
0x00cdb2bc: lea    rdx,[rbp-0x48]
0x00cdb2c0: mov    ecx,r12d
0x00cdb2c3: call   0x140545040
0x00cdb2c8: lea    rdx,[rbp-0x48]
0x00cdb2cc: cmp    QWORD PTR [rbp-0x30],0xf
0x00cdb2d1: cmova  rdx,QWORD PTR [rbp-0x48]
0x00cdb2d6: mov    r8,QWORD PTR [rbp-0x38]
0x00cdb2da: mov    rcx,r14
0x00cdb2dd: call   0x140070fd0
0x00cdb2e2: mov    r8d,0xc
0x00cdb2e8: lea    rdx,[rip+0xa43911]        # 0x14171ec00 ; literal=" chapters.  "
0x00cdb2ef: mov    rcx,r14
0x00cdb2f2: call   0x140070fd0
0x00cdb2f7: nop
0x00cdb2f8: mov    rdx,QWORD PTR [rbp-0x30]
0x00cdb2fc: cmp    rdx,0xf
0x00cdb300: jbe    0x140cdb336
0x00cdb302: inc    rdx
0x00cdb305: mov    rcx,QWORD PTR [rbp-0x48]
0x00cdb309: mov    rax,rcx
0x00cdb30c: cmp    rdx,0x1000
0x00cdb313: jb     0x140cdb331
0x00cdb315: add    rdx,0x27
0x00cdb319: mov    rcx,QWORD PTR [rcx-0x8]
0x00cdb31d: sub    rax,rcx
0x00cdb320: add    rax,0xfffffffffffffff8
0x00cdb324: cmp    rax,0x1f
0x00cdb328: jbe    0x140cdb331
0x00cdb32a: call   QWORD PTR [rip+0x920798]        # 0x1415fbac8
0x00cdb330: int3
0x00cdb331: call   0x14154de20
0x00cdb336: mov    rbx,QWORD PTR [r13+0x30]
0x00cdb33a: mov    rsi,QWORD PTR [r13+0x38]
0x00cdb33e: mov    rdi,QWORD PTR [r13+0x48]
0x00cdb342: mov    r15d,0x1
0x00cdb348: nop    DWORD PTR [rax+rax*1+0x0]
0x00cdb350: cmp    rbx,rsi
0x00cdb353: jae    0x140cdb48a
0x00cdb359: cmp    DWORD PTR [rdi],0x5
0x00cdb35c: jne    0x140cdb47d
0x00cdb362: mov    rcx,r14
0x00cdb365: cmp    r12d,0x1
0x00cdb369: jne    0x140cdb37f
0x00cdb36b: mov    r8d,0x2
0x00cdb371: lea    rdx,[rip+0x9293e0]        # 0x141604758 ; literal="It"
0x00cdb378: call   0x140070fd0
0x00cdb37d: jmp    0x140cdb3fd
0x00cdb37f: mov    r8d,0x4
0x00cdb385: lea    rdx,[rip+0x9288a8]        # 0x141603c34 ; literal="The "
0x00cdb38c: call   0x140070fd0
0x00cdb391: xorps  xmm0,xmm0
0x00cdb394: movups XMMWORD PTR [rbp-0x48],xmm0
0x00cdb398: mov    QWORD PTR [rbp-0x38],0x0
0x00cdb3a0: mov    QWORD PTR [rbp-0x30],0xf
0x00cdb3a8: mov    BYTE PTR [rbp-0x48],0x0
0x00cdb3ac: xor    r8d,r8d
0x00cdb3af: lea    rdx,[rbp-0x48]
0x00cdb3b3: mov    ecx,r15d
0x00cdb3b6: call   0x140545850
0x00cdb3bb: lea    rcx,[rbp-0x48]
0x00cdb3bf: call   0x140543d60
0x00cdb3c4: lea    rdx,[rbp-0x48]
0x00cdb3c8: cmp    QWORD PTR [rbp-0x30],0xf
0x00cdb3cd: cmova  rdx,QWORD PTR [rbp-0x48]
0x00cdb3d2: mov    r8,QWORD PTR [rbp-0x38]
0x00cdb3d6: mov    rcx,r14
0x00cdb3d9: call   0x140070fd0
0x00cdb3de: mov    r8d,0x8
0x00cdb3e4: lea    rdx,[rip+0xa43825]        # 0x14171ec10 ; literal=" chapter"
0x00cdb3eb: mov    rcx,r14
0x00cdb3ee: call   0x140070fd0
0x00cdb3f3: nop
0x00cdb3f4: lea    rcx,[rbp-0x48]
0x00cdb3f8: call   0x140070e10
0x00cdb3fd: mov    r8d,0x8
0x00cdb403: lea    rdx,[rip+0xa43816]        # 0x14171ec20 ; literal=" covers "
0x00cdb40a: mov    rcx,r14
0x00cdb40d: call   0x140070fd0
0x00cdb412: xorps  xmm0,xmm0
0x00cdb415: movups XMMWORD PTR [rbp-0x28],xmm0
0x00cdb419: mov    QWORD PTR [rbp-0x18],0x0
0x00cdb421: mov    QWORD PTR [rbp-0x10],0xf
0x00cdb429: mov    BYTE PTR [rbp-0x28],0x0
0x00cdb42d: mov    rcx,QWORD PTR [rbx]
0x00cdb430: mov    rax,QWORD PTR [rcx]
0x00cdb433: mov    r8d,DWORD PTR [rbp-0x50]
0x00cdb437: lea    rdx,[rbp-0x28]
0x00cdb43b: call   QWORD PTR [rax+0x90]
0x00cdb441: lea    rdx,[rbp-0x28]
0x00cdb445: cmp    QWORD PTR [rbp-0x10],0xf
0x00cdb44a: cmova  rdx,QWORD PTR [rbp-0x28]
0x00cdb44f: mov    r8,QWORD PTR [rbp-0x18]
0x00cdb453: mov    rcx,r14
0x00cdb456: call   0x140070fd0
0x00cdb45b: inc    r15d
0x00cdb45e: mov    r8d,0x3
0x00cdb464: lea    rdx,[rip+0x939215]        # 0x141614680 ; literal=".  "
0x00cdb46b: mov    rcx,r14
0x00cdb46e: call   0x140070fd0
0x00cdb473: nop
0x00cdb474: lea    rcx,[rbp-0x28]
0x00cdb478: call   0x140070e10
0x00cdb47d: add    rbx,0x8
0x00cdb481: add    rdi,0x4
0x00cdb485: jmp    0x140cdb350
0x00cdb48a: mov    rcx,QWORD PTR [rbp-0x8]
0x00cdb48e: xor    rcx,rsp
0x00cdb491: call   0x14154de00
0x00cdb496: mov    rbx,QWORD PTR [rsp+0xb0]
0x00cdb49e: add    rsp,0x70
0x00cdb4a2: pop    r15
0x00cdb4a4: pop    r14
0x00cdb4a6: pop    r13
0x00cdb4a8: pop    r12
0x00cdb4aa: pop    rdi
0x00cdb4ab: pop    rsi
0x00cdb4ac: pop    rbp
0x00cdb4ad: ret
0x00cdb4ae: xchg   ax,ax
