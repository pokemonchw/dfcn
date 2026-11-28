; reference PE:6aea05a1:02734000; written-work-content; RVA 0xcdda40..0xcde6fe; code ends 0xcde690
0x00cdda40: mov    QWORD PTR [rsp+0x8],rbx
0x00cdda45: push   rbp
0x00cdda46: push   rsi
0x00cdda47: push   rdi
0x00cdda48: push   r12
0x00cdda4a: push   r13
0x00cdda4c: push   r14
0x00cdda4e: push   r15
0x00cdda50: mov    rbp,rsp
0x00cdda53: sub    rsp,0x70
0x00cdda57: mov    rax,QWORD PTR [rip+0xbe05e2]        # 0x1418be040
0x00cdda5e: xor    rax,rsp
0x00cdda61: mov    QWORD PTR [rbp-0x8],rax
0x00cdda65: mov    edi,r8d
0x00cdda68: mov    DWORD PTR [rbp-0x50],r8d
0x00cdda6c: mov    r14,rdx
0x00cdda6f: mov    r13,rcx
0x00cdda72: xor    esi,esi
0x00cdda74: mov    r15d,esi
0x00cdda77: mov    r12d,esi
0x00cdda7a: mov    rbx,QWORD PTR [rcx+0x30]
0x00cdda7e: mov    rdx,rbx
0x00cdda81: mov    rax,QWORD PTR [rcx+0x38]
0x00cdda85: mov    rcx,QWORD PTR [rcx+0x48]
0x00cdda89: mov    r8,rcx
0x00cdda8c: nop    DWORD PTR [rax+0x0]
0x00cdda90: cmp    rdx,rax
0x00cdda93: jae    0x140cddac0
0x00cdda95: mov    r10d,DWORD PTR [r8]
0x00cdda98: add    rdx,0x8
0x00cdda9c: add    r8,0x4
0x00cddaa0: lea    r9d,[r15+0x1]
0x00cddaa4: test   r10d,r10d
0x00cddaa7: cmovne r9d,r15d
0x00cddaab: mov    r15d,r9d
0x00cddaae: lea    r9d,[r12+0x1]
0x00cddab3: cmp    r10d,0x5
0x00cddab7: cmovne r9d,r12d
0x00cddabb: mov    r12d,r9d
0x00cddabe: jmp    0x140cdda90
0x00cddac0: test   r15d,r15d
0x00cddac3: jle    0x140cddcf4
0x00cddac9: mov    edx,DWORD PTR [r13+0x68]
0x00cddacd: cmp    edx,0x14
0x00cddad0: jne    0x140cddb74
0x00cddad6: cmp    r15d,0x1
0x00cddada: jne    0x140cddc1b
0x00cddae0: cmp    rbx,rax
0x00cddae3: jae    0x140cddd09
0x00cddae9: cmp    DWORD PTR [rcx],esi
0x00cddaeb: je     0x140cddaf7
0x00cddaed: add    rbx,0x8
0x00cddaf1: add    rcx,0x4
0x00cddaf5: jmp    0x140cddae0
0x00cddaf7: mov    r8d,0x1f
0x00cddafd: lea    rdx,[rip+0xa45f0c]        # 0x141723a10 ; literal="It asks the question, \"What if "
0x00cddb04: mov    rcx,r14
0x00cddb07: call   0x140071040
0x00cddb0c: xorps  xmm0,xmm0
0x00cddb0f: movups XMMWORD PTR [rbp-0x48],xmm0
0x00cddb13: mov    QWORD PTR [rbp-0x38],rsi
0x00cddb17: mov    QWORD PTR [rbp-0x30],0xf
0x00cddb1f: mov    BYTE PTR [rbp-0x48],sil
0x00cddb23: mov    rcx,QWORD PTR [rbx]
0x00cddb26: mov    rax,QWORD PTR [rcx]
0x00cddb29: mov    r8d,edi
0x00cddb2c: lea    rdx,[rbp-0x48]
0x00cddb30: call   QWORD PTR [rax+0x90]
0x00cddb36: lea    rdx,[rbp-0x48]
0x00cddb3a: cmp    QWORD PTR [rbp-0x30],0xf
0x00cddb3f: cmova  rdx,QWORD PTR [rbp-0x48]
0x00cddb44: mov    r8,QWORD PTR [rbp-0x38]
0x00cddb48: mov    rcx,r14
0x00cddb4b: call   0x140071040
0x00cddb50: mov    r8d,0x1d
0x00cddb56: lea    rdx,[rip+0xa45ed3]        # 0x141723a30 ; literal=" had unfolded differently?\"  "
0x00cddb5d: mov    rcx,r14
0x00cddb60: call   0x140071040
0x00cddb65: nop
0x00cddb66: lea    rcx,[rbp-0x48]
0x00cddb6a: call   0x140070e80
0x00cddb6f: jmp    0x140cddd09
0x00cddb74: cmp    edx,0x10
0x00cddb77: jne    0x140cddc1b
0x00cddb7d: cmp    r15d,0x1
0x00cddb81: jne    0x140cddc1b
0x00cddb87: cmp    rbx,rax
0x00cddb8a: jae    0x140cddd09
0x00cddb90: cmp    DWORD PTR [rcx],esi
0x00cddb92: je     0x140cddb9e
0x00cddb94: add    rbx,0x8
0x00cddb98: add    rcx,0x4
0x00cddb9c: jmp    0x140cddb87
0x00cddb9e: mov    r8d,0x1b
0x00cddba4: lea    rdx,[rip+0xa45ea5]        # 0x141723a50 ; literal="It concerns the lineage of "
0x00cddbab: mov    rcx,r14
0x00cddbae: call   0x140071040
0x00cddbb3: xorps  xmm0,xmm0
0x00cddbb6: movups XMMWORD PTR [rbp-0x48],xmm0
0x00cddbba: mov    QWORD PTR [rbp-0x38],rsi
0x00cddbbe: mov    QWORD PTR [rbp-0x30],0xf
0x00cddbc6: mov    BYTE PTR [rbp-0x48],sil
0x00cddbca: mov    rcx,QWORD PTR [rbx]
0x00cddbcd: mov    rax,QWORD PTR [rcx]
0x00cddbd0: mov    r8d,edi
0x00cddbd3: lea    rdx,[rbp-0x48]
0x00cddbd7: call   QWORD PTR [rax+0x90]
0x00cddbdd: lea    rdx,[rbp-0x48]
0x00cddbe1: cmp    QWORD PTR [rbp-0x30],0xf
0x00cddbe6: cmova  rdx,QWORD PTR [rbp-0x48]
0x00cddbeb: mov    r8,QWORD PTR [rbp-0x38]
0x00cddbef: mov    rcx,r14
0x00cddbf2: call   0x140071040
0x00cddbf7: mov    r8d,0x3
0x00cddbfd: lea    rdx,[rip+0x93b994]        # 0x141619598 ; literal=".  "
0x00cddc04: mov    rcx,r14
0x00cddc07: call   0x140071040
0x00cddc0c: nop
0x00cddc0d: lea    rcx,[rbp-0x48]
0x00cddc11: call   0x140070e80
0x00cddc16: jmp    0x140cddd09
0x00cddc1b: mov    r8d,0xc
0x00cddc21: lea    rdx,[rip+0xa45e48]        # 0x141723a70 ; literal="It concerns "
0x00cddc28: mov    rcx,r14
0x00cddc2b: call   0x140071040
0x00cddc30: mov    rbx,QWORD PTR [r13+0x30]
0x00cddc34: mov    rsi,QWORD PTR [r13+0x38]
0x00cddc38: mov    rdi,QWORD PTR [r13+0x48]
0x00cddc3c: nop    DWORD PTR [rax+0x0]
0x00cddc40: cmp    rbx,rsi
0x00cddc43: jae    0x140cddd09
0x00cddc49: cmp    DWORD PTR [rdi],0x0
0x00cddc4c: jne    0x140cddce7
0x00cddc52: xorps  xmm0,xmm0
0x00cddc55: movups XMMWORD PTR [rbp-0x48],xmm0
0x00cddc59: mov    QWORD PTR [rbp-0x38],0x0
0x00cddc61: mov    QWORD PTR [rbp-0x30],0xf
0x00cddc69: mov    BYTE PTR [rbp-0x48],0x0
0x00cddc6d: mov    rcx,QWORD PTR [rbx]
0x00cddc70: mov    rax,QWORD PTR [rcx]
0x00cddc73: mov    r8d,DWORD PTR [rbp-0x50]
0x00cddc77: lea    rdx,[rbp-0x48]
0x00cddc7b: call   QWORD PTR [rax+0x90]
0x00cddc81: lea    rdx,[rbp-0x48]
0x00cddc85: cmp    QWORD PTR [rbp-0x30],0xf
0x00cddc8a: cmova  rdx,QWORD PTR [rbp-0x48]
0x00cddc8f: mov    r8,QWORD PTR [rbp-0x38]
0x00cddc93: mov    rcx,r14
0x00cddc96: call   0x140071040
0x00cddc9b: dec    r15d
0x00cddc9e: cmp    r15d,0x2
0x00cddca2: jl     0x140cddcb3
0x00cddca4: mov    r8d,0x2
0x00cddcaa: lea    rdx,[rip+0x9266e3]        # 0x141604394 ; literal=", "
0x00cddcb1: jmp    0x140cddcd5
0x00cddcb3: cmp    r15d,0x1
0x00cddcb7: jne    0x140cddcc8
0x00cddcb9: mov    r8d,0x5
0x00cddcbf: lea    rdx,[rip+0x9266c6]        # 0x14160438c ; literal=" and "
0x00cddcc6: jmp    0x140cddcd5
0x00cddcc8: mov    r8d,0x3
0x00cddcce: lea    rdx,[rip+0x93b8c3]        # 0x141619598 ; literal=".  "
0x00cddcd5: mov    rcx,r14
0x00cddcd8: call   0x140071040
0x00cddcdd: nop
0x00cddcde: lea    rcx,[rbp-0x48]
0x00cddce2: call   0x140070e80
0x00cddce7: add    rbx,0x8
0x00cddceb: add    rdi,0x4
0x00cddcef: jmp    0x140cddc40
0x00cddcf4: mov    r8d,0x25
0x00cddcfa: lea    rdx,[rip+0xa45d7f]        # 0x141723a80 ; literal="The work has no particular subject.  "
0x00cddd01: mov    rcx,r14
0x00cddd04: call   0x140071040
0x00cddd09: mov    rdi,QWORD PTR [r13+0x30]
0x00cddd0d: mov    rsi,QWORD PTR [r13+0x38]
0x00cddd11: mov    rbx,QWORD PTR [r13+0x48]
0x00cddd15: mov    r15d,0x2d
0x00cddd1b: nop    DWORD PTR [rax+rax*1+0x0]
0x00cddd20: cmp    rdi,rsi
0x00cddd23: jae    0x140cde02b
0x00cddd29: cmp    DWORD PTR [rbx],0x6
0x00cddd2c: jne    0x140cdddde
0x00cddd32: mov    r8,r15
0x00cddd35: lea    rdx,[rip+0xa45d6c]        # 0x141723aa8 ; literal="The writing conveys a moral lesson regarding "
0x00cddd3c: mov    rcx,r14
0x00cddd3f: call   0x140071040
0x00cddd44: xorps  xmm0,xmm0
0x00cddd47: movups XMMWORD PTR [rbp-0x48],xmm0
0x00cddd4b: mov    QWORD PTR [rbp-0x38],0x0
0x00cddd53: mov    QWORD PTR [rbp-0x30],0xf
0x00cddd5b: mov    BYTE PTR [rbp-0x48],0x0
0x00cddd5f: mov    rcx,QWORD PTR [rdi]
0x00cddd62: mov    rax,QWORD PTR [rcx]
0x00cddd65: mov    r8d,DWORD PTR [rbp-0x50]
0x00cddd69: lea    rdx,[rbp-0x48]
0x00cddd6d: call   QWORD PTR [rax+0x90]
0x00cddd73: lea    rdx,[rbp-0x48]
0x00cddd77: cmp    QWORD PTR [rbp-0x30],0xf
0x00cddd7c: cmova  rdx,QWORD PTR [rbp-0x48]
0x00cddd81: mov    r8,QWORD PTR [rbp-0x38]
0x00cddd85: mov    rcx,r14
0x00cddd88: call   0x140071040
0x00cddd8d: mov    r8d,0x3
0x00cddd93: lea    rdx,[rip+0x93b7fe]        # 0x141619598 ; literal=".  "
0x00cddd9a: mov    rcx,r14
0x00cddd9d: call   0x140071040
0x00cddda2: nop
0x00cddda3: mov    rdx,QWORD PTR [rbp-0x30]
0x00cddda7: cmp    rdx,0xf
0x00cdddab: jbe    0x140cdddde
0x00cdddad: inc    rdx
0x00cdddb0: mov    rcx,QWORD PTR [rbp-0x48]
0x00cdddb4: mov    rax,rcx
0x00cdddb7: cmp    rdx,0x1000
0x00cdddbe: jb     0x140cdddd9
0x00cdddc0: add    rdx,0x27
0x00cdddc4: mov    rcx,QWORD PTR [rcx-0x8]
0x00cdddc8: sub    rax,rcx
0x00cdddcb: add    rax,0xfffffffffffffff8
0x00cdddcf: cmp    rax,0x1f
0x00cdddd3: ja     0x140cde00f
0x00cdddd9: call   0x1415530d0
0x00cdddde: cmp    DWORD PTR [rbx],0x9
0x00cddde1: jne    0x140cdde96
0x00cddde7: mov    r8d,0x1c
0x00cddded: lea    rdx,[rip+0xa45ce4]        # 0x141723ad8 ; literal="The overall text emphasizes "
0x00cdddf4: mov    rcx,r14
0x00cdddf7: call   0x140071040
0x00cdddfc: xorps  xmm0,xmm0
0x00cdddff: movups XMMWORD PTR [rbp-0x48],xmm0
0x00cdde03: mov    QWORD PTR [rbp-0x38],0x0
0x00cdde0b: mov    QWORD PTR [rbp-0x30],0xf
0x00cdde13: mov    BYTE PTR [rbp-0x48],0x0
0x00cdde17: mov    rcx,QWORD PTR [rdi]
0x00cdde1a: mov    rax,QWORD PTR [rcx]
0x00cdde1d: mov    r8d,DWORD PTR [rbp-0x50]
0x00cdde21: lea    rdx,[rbp-0x48]
0x00cdde25: call   QWORD PTR [rax+0x90]
0x00cdde2b: lea    rdx,[rbp-0x48]
0x00cdde2f: cmp    QWORD PTR [rbp-0x30],0xf
0x00cdde34: cmova  rdx,QWORD PTR [rbp-0x48]
0x00cdde39: mov    r8,QWORD PTR [rbp-0x38]
0x00cdde3d: mov    rcx,r14
0x00cdde40: call   0x140071040
0x00cdde45: mov    r8d,0x3
0x00cdde4b: lea    rdx,[rip+0x93b746]        # 0x141619598 ; literal=".  "
0x00cdde52: mov    rcx,r14
0x00cdde55: call   0x140071040
0x00cdde5a: nop
0x00cdde5b: mov    rdx,QWORD PTR [rbp-0x30]
0x00cdde5f: cmp    rdx,0xf
0x00cdde63: jbe    0x140cdde96
0x00cdde65: inc    rdx
0x00cdde68: mov    rcx,QWORD PTR [rbp-0x48]
0x00cdde6c: mov    rax,rcx
0x00cdde6f: cmp    rdx,0x1000
0x00cdde76: jb     0x140cdde91
0x00cdde78: add    rdx,0x27
0x00cdde7c: mov    rcx,QWORD PTR [rcx-0x8]
0x00cdde80: sub    rax,rcx
0x00cdde83: add    rax,0xfffffffffffffff8
0x00cdde87: cmp    rax,0x1f
0x00cdde8b: ja     0x140cde016
0x00cdde91: call   0x1415530d0
0x00cdde96: cmp    DWORD PTR [rbx],0x7
0x00cdde99: jne    0x140cddf4e
0x00cdde9f: mov    r8d,0x26
0x00cddea5: lea    rdx,[rip+0xa45c4c]        # 0x141723af8 ; literal="For lyrics, the composer has selected "
0x00cddeac: mov    rcx,r14
0x00cddeaf: call   0x140071040
0x00cddeb4: xorps  xmm0,xmm0
0x00cddeb7: movups XMMWORD PTR [rbp-0x48],xmm0
0x00cddebb: mov    QWORD PTR [rbp-0x38],0x0
0x00cddec3: mov    QWORD PTR [rbp-0x30],0xf
0x00cddecb: mov    BYTE PTR [rbp-0x48],0x0
0x00cddecf: mov    rcx,QWORD PTR [rdi]
0x00cdded2: mov    rax,QWORD PTR [rcx]
0x00cdded5: mov    r8d,DWORD PTR [rbp-0x50]
0x00cdded9: lea    rdx,[rbp-0x48]
0x00cddedd: call   QWORD PTR [rax+0x90]
0x00cddee3: lea    rdx,[rbp-0x48]
0x00cddee7: cmp    QWORD PTR [rbp-0x30],0xf
0x00cddeec: cmova  rdx,QWORD PTR [rbp-0x48]
0x00cddef1: mov    r8,QWORD PTR [rbp-0x38]
0x00cddef5: mov    rcx,r14
0x00cddef8: call   0x140071040
0x00cddefd: mov    r8d,0x3
0x00cddf03: lea    rdx,[rip+0x93b68e]        # 0x141619598 ; literal=".  "
0x00cddf0a: mov    rcx,r14
0x00cddf0d: call   0x140071040
0x00cddf12: nop
0x00cddf13: mov    rdx,QWORD PTR [rbp-0x30]
0x00cddf17: cmp    rdx,0xf
0x00cddf1b: jbe    0x140cddf4e
0x00cddf1d: inc    rdx
0x00cddf20: mov    rcx,QWORD PTR [rbp-0x48]
0x00cddf24: mov    rax,rcx
0x00cddf27: cmp    rdx,0x1000
0x00cddf2e: jb     0x140cddf49
0x00cddf30: add    rdx,0x27
0x00cddf34: mov    rcx,QWORD PTR [rcx-0x8]
0x00cddf38: sub    rax,rcx
0x00cddf3b: add    rax,0xfffffffffffffff8
0x00cddf3f: cmp    rax,0x1f
0x00cddf43: ja     0x140cde01d
0x00cddf49: call   0x1415530d0
0x00cddf4e: cmp    DWORD PTR [rbx],0x8
0x00cddf51: jne    0x140cde002
0x00cddf57: mov    r8d,0x3a
0x00cddf5d: lea    rdx,[rip+0xa45bbc]        # 0x141723b20 ; literal="For musical accompaniment, the choreographer has selected "
0x00cddf64: mov    rcx,r14
0x00cddf67: call   0x140071040
0x00cddf6c: xorps  xmm0,xmm0
0x00cddf6f: movups XMMWORD PTR [rbp-0x48],xmm0
0x00cddf73: mov    QWORD PTR [rbp-0x38],0x0
0x00cddf7b: mov    QWORD PTR [rbp-0x30],0xf
0x00cddf83: mov    BYTE PTR [rbp-0x48],0x0
0x00cddf87: mov    rcx,QWORD PTR [rdi]
0x00cddf8a: mov    rax,QWORD PTR [rcx]
0x00cddf8d: mov    r8d,DWORD PTR [rbp-0x50]
0x00cddf91: lea    rdx,[rbp-0x48]
0x00cddf95: call   QWORD PTR [rax+0x90]
0x00cddf9b: lea    rdx,[rbp-0x48]
0x00cddf9f: cmp    QWORD PTR [rbp-0x30],0xf
0x00cddfa4: cmova  rdx,QWORD PTR [rbp-0x48]
0x00cddfa9: mov    r8,QWORD PTR [rbp-0x38]
0x00cddfad: mov    rcx,r14
0x00cddfb0: call   0x140071040
0x00cddfb5: mov    r8d,0x3
0x00cddfbb: lea    rdx,[rip+0x93b5d6]        # 0x141619598 ; literal=".  "
0x00cddfc2: mov    rcx,r14
0x00cddfc5: call   0x140071040
0x00cddfca: nop
0x00cddfcb: mov    rdx,QWORD PTR [rbp-0x30]
0x00cddfcf: cmp    rdx,0xf
0x00cddfd3: jbe    0x140cde002
0x00cddfd5: inc    rdx
0x00cddfd8: mov    rcx,QWORD PTR [rbp-0x48]
0x00cddfdc: mov    rax,rcx
0x00cddfdf: cmp    rdx,0x1000
0x00cddfe6: jb     0x140cddffd
0x00cddfe8: add    rdx,0x27
0x00cddfec: mov    rcx,QWORD PTR [rcx-0x8]
0x00cddff0: sub    rax,rcx
0x00cddff3: add    rax,0xfffffffffffffff8
0x00cddff7: cmp    rax,0x1f
0x00cddffb: ja     0x140cde024
0x00cddffd: call   0x1415530d0
0x00cde002: add    rdi,0x8
0x00cde006: add    rbx,0x4
0x00cde00a: jmp    0x140cddd20
0x00cde00f: call   QWORD PTR [rip+0x922b2b]        # 0x141600b40
0x00cde015: int3
0x00cde016: call   QWORD PTR [rip+0x922b24]        # 0x141600b40
0x00cde01c: int3
0x00cde01d: call   QWORD PTR [rip+0x922b1d]        # 0x141600b40
0x00cde023: int3
0x00cde024: call   QWORD PTR [rip+0x922b16]        # 0x141600b40
0x00cde02a: int3
0x00cde02b: mov    rax,QWORD PTR [r13+0x78]
0x00cde02f: sub    rax,QWORD PTR [r13+0x70]
0x00cde033: sar    rax,0x2
0x00cde037: lea    rsi,[rip+0xffffffffff321fc2]        # 0x140000000
0x00cde03e: test   rax,rax
0x00cde041: je     0x140cde15a
0x00cde047: mov    r8d,0xc
0x00cde04d: lea    rdx,[rip+0xa45b0c]        # 0x141723b60 ; literal="The writing "
0x00cde054: mov    rcx,r14
0x00cde057: call   0x140071040
0x00cde05c: mov    rax,QWORD PTR [r13+0x70]
0x00cde060: movsxd rbx,DWORD PTR [rax]
0x00cde063: mov    rax,QWORD PTR [r13+0x88]
0x00cde06a: mov    r9d,DWORD PTR [r13+0xa4]
0x00cde071: mov    r8d,DWORD PTR [rax]
0x00cde074: mov    edx,ebx
0x00cde076: mov    rcx,r14
0x00cde079: call   0x140cdd210
0x00cde07e: mov    rdi,QWORD PTR [r13+0x70]
0x00cde082: mov    rax,QWORD PTR [r13+0x78]
0x00cde086: sub    rax,rdi
0x00cde089: sar    rax,0x2
0x00cde08d: cmp    rax,0x2
0x00cde091: jb     0x140cde145
0x00cde097: movsxd rdi,DWORD PTR [rdi+0x4]
0x00cde09b: mov    rax,QWORD PTR [r13+0x88]
0x00cde0a2: mov    esi,DWORD PTR [rax+0x4]
0x00cde0a5: lea    rdx,[rip+0xffffffffff321f54]        # 0x140000000
0x00cde0ac: cmp    ebx,0x11
0x00cde0af: ja     0x140cde0d8
0x00cde0b1: movzx  eax,BYTE PTR [rdx+rbx*1+0xcde69c]
0x00cde0b9: mov    ecx,DWORD PTR [rdx+rax*4+0xcde690]
0x00cde0c0: add    rcx,rdx
0x00cde0c3: jmp    rcx
0x00cde0c5: cmp    DWORD PTR [r13+0xa4],0x14
0x00cde0cd: setl   r8b
0x00cde0d1: jmp    0x140cde0db
0x00cde0d3: mov    r8b,0x1
0x00cde0d6: jmp    0x140cde0db
0x00cde0d8: xor    r8b,r8b
0x00cde0db: cmp    edi,0x11
0x00cde0de: ja     0x140cde105
0x00cde0e0: movzx  eax,BYTE PTR [rdx+rdi*1+0xcde6bc]
0x00cde0e8: mov    ecx,DWORD PTR [rdx+rax*4+0xcde6b0]
0x00cde0ef: add    rcx,rdx
0x00cde0f2: jmp    rcx
0x00cde0f4: cmp    DWORD PTR [r13+0xa4],0x14
0x00cde0fc: setl   al
0x00cde0ff: jmp    0x140cde107
0x00cde101: mov    al,0x1
0x00cde103: jmp    0x140cde107
0x00cde105: xor    al,al
0x00cde107: lea    rcx,[rip+0xa45a72]        # 0x141723b80 ; literal=" and it "
0x00cde10e: lea    rdx,[rip+0xa45a5b]        # 0x141723b70 ; literal=" yet it "
0x00cde115: cmp    al,r8b
0x00cde118: cmove  rdx,rcx
0x00cde11c: mov    r8d,0x8
0x00cde122: mov    rcx,r14
0x00cde125: call   0x140071040
0x00cde12a: mov    r9d,DWORD PTR [r13+0xa4]
0x00cde131: mov    r8d,esi
0x00cde134: mov    edx,edi
0x00cde136: mov    rcx,r14
0x00cde139: call   0x140cdd210
0x00cde13e: lea    rsi,[rip+0xffffffffff321ebb]        # 0x140000000
0x00cde145: mov    r8d,0x3
0x00cde14b: lea    rdx,[rip+0x93b446]        # 0x141619598 ; literal=".  "
0x00cde152: mov    rcx,r14
0x00cde155: call   0x140071040
0x00cde15a: movsxd rax,DWORD PTR [r13+0x68]
0x00cde15e: cmp    eax,0x19
0x00cde161: ja     0x140cde3ae
0x00cde167: movzx  eax,BYTE PTR [rsi+rax*1+0xcde6e4]
0x00cde16f: mov    ecx,DWORD PTR [rsi+rax*4+0xcde6d0]
0x00cde176: add    rcx,rsi
0x00cde179: jmp    rcx
0x00cde17b: mov    eax,DWORD PTR [r13+0xa4]
0x00cde182: cmp    eax,0x32
0x00cde185: jl     0x140cde199
0x00cde187: lea    rdx,[rip+0xa45a02]        # 0x141723b90 ; literal="Overall, the information is compiled masterfully"
0x00cde18e: mov    r15d,0x30
0x00cde194: jmp    0x140cde426
0x00cde199: cmp    eax,0x28
0x00cde19c: jl     0x140cde1b0
0x00cde19e: lea    rdx,[rip+0xa45a23]        # 0x141723bc8 ; literal="Overall, the splendid source of information"
0x00cde1a5: mov    r15d,0x2b
0x00cde1ab: jmp    0x140cde426
0x00cde1b0: cmp    eax,0x1e
0x00cde1b3: jl     0x140cde1c7
0x00cde1b5: lea    rdx,[rip+0xa45a3c]        # 0x141723bf8 ; literal="Overall, this is a great source of information"
0x00cde1bc: mov    r15d,0x2e
0x00cde1c2: jmp    0x140cde426
0x00cde1c7: cmp    eax,0x14
0x00cde1ca: jl     0x140cde1d8
0x00cde1cc: lea    rdx,[rip+0xa45a55]        # 0x141723c28 ; literal="Overall, this is a good source of information"
0x00cde1d3: jmp    0x140cde426
0x00cde1d8: mov    rcx,r14
0x00cde1db: cmp    eax,0xa
0x00cde1de: jl     0x140cde1f2
0x00cde1e0: lea    rdx,[rip+0xa45a71]        # 0x141723c58 ; literal="Overall, the information is not compiled very well"
0x00cde1e7: mov    r15d,0x32
0x00cde1ed: jmp    0x140cde429
0x00cde1f2: lea    rdx,[rip+0xa45a97]        # 0x141723c90 ; literal="Overall, this is a terrible compilation of information"
0x00cde1f9: mov    r15d,0x36
0x00cde1ff: jmp    0x140cde429
0x00cde204: mov    eax,DWORD PTR [r13+0xa4]
0x00cde20b: cmp    eax,0x32
0x00cde20e: jl     0x140cde222
0x00cde210: lea    rdx,[rip+0xa45ab1]        # 0x141723cc8 ; literal="Overall, the poetry is masterful"
0x00cde217: mov    r15d,0x20
0x00cde21d: jmp    0x140cde426
0x00cde222: cmp    eax,0x28
0x00cde225: jl     0x140cde239
0x00cde227: lea    rdx,[rip+0xa45ac2]        # 0x141723cf0 ; literal="Overall, the poetry is inspired"
0x00cde22e: mov    r15d,0x1f
0x00cde234: jmp    0x140cde426
0x00cde239: cmp    eax,0x1e
0x00cde23c: jl     0x140cde250
0x00cde23e: lea    rdx,[rip+0xa45acb]        # 0x141723d10 ; literal="Overall, the poetry is great"
0x00cde245: mov    r15d,0x1c
0x00cde24b: jmp    0x140cde426
0x00cde250: cmp    eax,0x14
0x00cde253: jl     0x140cde267
0x00cde255: lea    rdx,[rip+0xa45ad4]        # 0x141723d30 ; literal="Overall, the poetry is passable"
0x00cde25c: mov    r15d,0x1f
0x00cde262: jmp    0x140cde426
0x00cde267: mov    rcx,r14
0x00cde26a: cmp    eax,0xa
0x00cde26d: jl     0x140cde281
0x00cde26f: lea    rdx,[rip+0xa45ada]        # 0x141723d50 ; literal="Overall, the poetry is not awful, but not very good either"
0x00cde276: mov    r15d,0x3a
0x00cde27c: jmp    0x140cde429
0x00cde281: lea    rdx,[rip+0xa45b08]        # 0x141723d90 ; literal="Overall, the poetry is very, very bad"
0x00cde288: mov    r15d,0x25
0x00cde28e: jmp    0x140cde429
0x00cde293: mov    eax,DWORD PTR [r13+0xa4]
0x00cde29a: cmp    eax,0x32
0x00cde29d: jl     0x140cde2b1
0x00cde29f: lea    rdx,[rip+0xa45b12]        # 0x141723db8 ; literal="Overall, the composition is masterful"
0x00cde2a6: mov    r15d,0x25
0x00cde2ac: jmp    0x140cde426
0x00cde2b1: cmp    eax,0x28
0x00cde2b4: jl     0x140cde2c8
0x00cde2b6: lea    rdx,[rip+0xa45b23]        # 0x141723de0 ; literal="Overall, the composition is inspired"
0x00cde2bd: mov    r15d,0x24
0x00cde2c3: jmp    0x140cde426
0x00cde2c8: cmp    eax,0x1e
0x00cde2cb: jl     0x140cde2df
0x00cde2cd: lea    rdx,[rip+0xa44dfc]        # 0x1417230d0 ; literal="Overall, the composition is great"
0x00cde2d4: mov    r15d,0x21
0x00cde2da: jmp    0x140cde426
0x00cde2df: cmp    eax,0x14
0x00cde2e2: jl     0x140cde2f6
0x00cde2e4: lea    rdx,[rip+0xa44e0d]        # 0x1417230f8 ; literal="Overall, the composition is passable"
0x00cde2eb: mov    r15d,0x24
0x00cde2f1: jmp    0x140cde426
0x00cde2f6: mov    rcx,r14
0x00cde2f9: cmp    eax,0xa
0x00cde2fc: jl     0x140cde310
0x00cde2fe: lea    rdx,[rip+0xa44e1b]        # 0x141723120 ; literal="Overall, the composition is not awful, but not very good either"
0x00cde305: mov    r15d,0x3f
0x00cde30b: jmp    0x140cde429
0x00cde310: lea    rdx,[rip+0xa44e49]        # 0x141723160 ; literal="Overall, the composition is atrocious"
0x00cde317: mov    r15d,0x25
0x00cde31d: jmp    0x140cde429
0x00cde322: mov    eax,DWORD PTR [r13+0xa4]
0x00cde329: cmp    eax,0x32
0x00cde32c: jl     0x140cde340
0x00cde32e: lea    rdx,[rip+0xa44e53]        # 0x141723188 ; literal="Overall, the choreography is masterful"
0x00cde335: mov    r15d,0x26
0x00cde33b: jmp    0x140cde426
0x00cde340: cmp    eax,0x28
0x00cde343: jl     0x140cde357
0x00cde345: lea    rdx,[rip+0xa44e64]        # 0x1417231b0 ; literal="Overall, the choreography is inspired"
0x00cde34c: mov    r15d,0x25
0x00cde352: jmp    0x140cde426
0x00cde357: cmp    eax,0x1e
0x00cde35a: jl     0x140cde36e
0x00cde35c: lea    rdx,[rip+0xa44e75]        # 0x1417231d8 ; literal="Overall, the choreography is great"
0x00cde363: mov    r15d,0x22
0x00cde369: jmp    0x140cde426
0x00cde36e: cmp    eax,0x14
0x00cde371: jl     0x140cde385
0x00cde373: lea    rdx,[rip+0xa44e86]        # 0x141723200 ; literal="Overall, the choreography is passable"
0x00cde37a: mov    r15d,0x25
0x00cde380: jmp    0x140cde426
0x00cde385: mov    rcx,r14
0x00cde388: cmp    eax,0xa
0x00cde38b: jl     0x140cde39f
0x00cde38d: lea    rdx,[rip+0xa44e9c]        # 0x141723230 ; literal="Overall, the choreography is not awful, but not very good either"
0x00cde394: mov    r15d,0x40
0x00cde39a: jmp    0x140cde429
0x00cde39f: lea    rdx,[rip+0xa44ed2]        # 0x141723278 ; literal="Overall, the choreography is just terrible"
0x00cde3a6: mov    r15d,0x2a
0x00cde3ac: jmp    0x140cde429
0x00cde3ae: mov    eax,DWORD PTR [r13+0xa4]
0x00cde3b5: cmp    eax,0x32
0x00cde3b8: jl     0x140cde3c9
0x00cde3ba: lea    rdx,[rip+0xa44ee7]        # 0x1417232a8 ; literal="Overall, the prose is masterful"
0x00cde3c1: mov    r15d,0x1f
0x00cde3c7: jmp    0x140cde426
0x00cde3c9: cmp    eax,0x28
0x00cde3cc: jl     0x140cde3dd
0x00cde3ce: lea    rdx,[rip+0xa44ef3]        # 0x1417232c8 ; literal="Overall, the prose is splendid"
0x00cde3d5: mov    r15d,0x1e
0x00cde3db: jmp    0x140cde426
0x00cde3dd: cmp    eax,0x1e
0x00cde3e0: jl     0x140cde3f1
0x00cde3e2: lea    rdx,[rip+0xa44eff]        # 0x1417232e8 ; literal="Overall, the prose is great"
0x00cde3e9: mov    r15d,0x1b
0x00cde3ef: jmp    0x140cde426
0x00cde3f1: cmp    eax,0x14
0x00cde3f4: jl     0x140cde405
0x00cde3f6: lea    rdx,[rip+0xa44f0b]        # 0x141723308 ; literal="Overall, the prose is passable"
0x00cde3fd: mov    r15d,0x1e
0x00cde403: jmp    0x140cde426
0x00cde405: cmp    eax,0xa
0x00cde408: jl     0x140cde419
0x00cde40a: lea    rdx,[rip+0xa44f17]        # 0x141723328 ; literal="Overall, the prose is not awful, but not very good either"
0x00cde411: mov    r15d,0x39
0x00cde417: jmp    0x140cde426
0x00cde419: lea    rdx,[rip+0xa44f48]        # 0x141723368 ; literal="Overall, the prose is amateurish at best"
0x00cde420: mov    r15d,0x28
0x00cde426: mov    rcx,r14
0x00cde429: mov    r8,r15
0x00cde42c: call   0x140071040
0x00cde431: mov    r8d,0x3
0x00cde437: lea    rdx,[rip+0x93b15a]        # 0x141619598 ; literal=".  "
0x00cde43e: mov    rcx,r14
0x00cde441: call   0x140071040
0x00cde446: test   r12d,r12d
0x00cde449: jle    0x140cde66a
0x00cde44f: mov    rcx,r14
0x00cde452: cmp    r12d,0x1
0x00cde456: jne    0x140cde46f
0x00cde458: mov    r8d,0x20
0x00cde45e: lea    rdx,[rip+0xa44f33]        # 0x141723398 ; literal="The work has a single chapter.  "
0x00cde465: call   0x140071040
0x00cde46a: jmp    0x140cde516
0x00cde46f: mov    r8d,0xd
0x00cde475: lea    rdx,[rip+0xa44f44]        # 0x1417233c0 ; literal="The work has "
0x00cde47c: call   0x140071040
0x00cde481: xorps  xmm0,xmm0
0x00cde484: movups XMMWORD PTR [rbp-0x48],xmm0
0x00cde488: mov    QWORD PTR [rbp-0x38],0x0
0x00cde490: mov    QWORD PTR [rbp-0x30],0xf
0x00cde498: mov    BYTE PTR [rbp-0x48],0x0
0x00cde49c: lea    rdx,[rbp-0x48]
0x00cde4a0: mov    ecx,r12d
0x00cde4a3: call   0x140547840
0x00cde4a8: lea    rdx,[rbp-0x48]
0x00cde4ac: cmp    QWORD PTR [rbp-0x30],0xf
0x00cde4b1: cmova  rdx,QWORD PTR [rbp-0x48]
0x00cde4b6: mov    r8,QWORD PTR [rbp-0x38]
0x00cde4ba: mov    rcx,r14
0x00cde4bd: call   0x140071040
0x00cde4c2: mov    r8d,0xc
0x00cde4c8: lea    rdx,[rip+0xa44f01]        # 0x1417233d0 ; literal=" chapters.  "
0x00cde4cf: mov    rcx,r14
0x00cde4d2: call   0x140071040
0x00cde4d7: nop
0x00cde4d8: mov    rdx,QWORD PTR [rbp-0x30]
0x00cde4dc: cmp    rdx,0xf
0x00cde4e0: jbe    0x140cde516
0x00cde4e2: inc    rdx
0x00cde4e5: mov    rcx,QWORD PTR [rbp-0x48]
0x00cde4e9: mov    rax,rcx
0x00cde4ec: cmp    rdx,0x1000
0x00cde4f3: jb     0x140cde511
0x00cde4f5: add    rdx,0x27
0x00cde4f9: mov    rcx,QWORD PTR [rcx-0x8]
0x00cde4fd: sub    rax,rcx
0x00cde500: add    rax,0xfffffffffffffff8
0x00cde504: cmp    rax,0x1f
0x00cde508: jbe    0x140cde511
0x00cde50a: call   QWORD PTR [rip+0x922630]        # 0x141600b40
0x00cde510: int3
0x00cde511: call   0x1415530d0
0x00cde516: mov    rbx,QWORD PTR [r13+0x30]
0x00cde51a: mov    rsi,QWORD PTR [r13+0x38]
0x00cde51e: mov    rdi,QWORD PTR [r13+0x48]
0x00cde522: mov    r15d,0x1
0x00cde528: nop    DWORD PTR [rax+rax*1+0x0]
0x00cde530: cmp    rbx,rsi
0x00cde533: jae    0x140cde66a
0x00cde539: cmp    DWORD PTR [rdi],0x5
0x00cde53c: jne    0x140cde65d
0x00cde542: mov    rcx,r14
0x00cde545: cmp    r12d,0x1
0x00cde549: jne    0x140cde55f
0x00cde54b: mov    r8d,0x2
0x00cde551: lea    rdx,[rip+0x92b260]        # 0x1416097b8 ; literal="It"
0x00cde558: call   0x140071040
0x00cde55d: jmp    0x140cde5dd
0x00cde55f: mov    r8d,0x4
0x00cde565: lea    rdx,[rip+0x92a6d0]        # 0x141608c3c ; literal="The "
0x00cde56c: call   0x140071040
0x00cde571: xorps  xmm0,xmm0
0x00cde574: movups XMMWORD PTR [rbp-0x48],xmm0
0x00cde578: mov    QWORD PTR [rbp-0x38],0x0
0x00cde580: mov    QWORD PTR [rbp-0x30],0xf
0x00cde588: mov    BYTE PTR [rbp-0x48],0x0
0x00cde58c: xor    r8d,r8d
0x00cde58f: lea    rdx,[rbp-0x48]
0x00cde593: mov    ecx,r15d
0x00cde596: call   0x140548050
0x00cde59b: lea    rcx,[rbp-0x48]
0x00cde59f: call   0x140546560
0x00cde5a4: lea    rdx,[rbp-0x48]
0x00cde5a8: cmp    QWORD PTR [rbp-0x30],0xf
0x00cde5ad: cmova  rdx,QWORD PTR [rbp-0x48]
0x00cde5b2: mov    r8,QWORD PTR [rbp-0x38]
0x00cde5b6: mov    rcx,r14
0x00cde5b9: call   0x140071040
0x00cde5be: mov    r8d,0x8
0x00cde5c4: lea    rdx,[rip+0xa44e15]        # 0x1417233e0 ; literal=" chapter"
0x00cde5cb: mov    rcx,r14
0x00cde5ce: call   0x140071040
0x00cde5d3: nop
0x00cde5d4: lea    rcx,[rbp-0x48]
0x00cde5d8: call   0x140070e80
0x00cde5dd: mov    r8d,0x8
0x00cde5e3: lea    rdx,[rip+0xa44e06]        # 0x1417233f0 ; literal=" covers "
0x00cde5ea: mov    rcx,r14
0x00cde5ed: call   0x140071040
0x00cde5f2: xorps  xmm0,xmm0
0x00cde5f5: movups XMMWORD PTR [rbp-0x28],xmm0
0x00cde5f9: mov    QWORD PTR [rbp-0x18],0x0
0x00cde601: mov    QWORD PTR [rbp-0x10],0xf
0x00cde609: mov    BYTE PTR [rbp-0x28],0x0
0x00cde60d: mov    rcx,QWORD PTR [rbx]
0x00cde610: mov    rax,QWORD PTR [rcx]
0x00cde613: mov    r8d,DWORD PTR [rbp-0x50]
0x00cde617: lea    rdx,[rbp-0x28]
0x00cde61b: call   QWORD PTR [rax+0x90]
0x00cde621: lea    rdx,[rbp-0x28]
0x00cde625: cmp    QWORD PTR [rbp-0x10],0xf
0x00cde62a: cmova  rdx,QWORD PTR [rbp-0x28]
0x00cde62f: mov    r8,QWORD PTR [rbp-0x18]
0x00cde633: mov    rcx,r14
0x00cde636: call   0x140071040
0x00cde63b: inc    r15d
0x00cde63e: mov    r8d,0x3
0x00cde644: lea    rdx,[rip+0x93af4d]        # 0x141619598 ; literal=".  "
0x00cde64b: mov    rcx,r14
0x00cde64e: call   0x140071040
0x00cde653: nop
0x00cde654: lea    rcx,[rbp-0x28]
0x00cde658: call   0x140070e80
0x00cde65d: add    rbx,0x8
0x00cde661: add    rdi,0x4
0x00cde665: jmp    0x140cde530
0x00cde66a: mov    rcx,QWORD PTR [rbp-0x8]
0x00cde66e: xor    rcx,rsp
0x00cde671: call   0x1415530b0
0x00cde676: mov    rbx,QWORD PTR [rsp+0xb0]
0x00cde67e: add    rsp,0x70
0x00cde682: pop    r15
0x00cde684: pop    r14
0x00cde686: pop    r13
0x00cde688: pop    r12
0x00cde68a: pop    rdi
0x00cde68b: pop    rsi
0x00cde68c: pop    rbp
0x00cde68d: ret
0x00cde68e: xchg   ax,ax
