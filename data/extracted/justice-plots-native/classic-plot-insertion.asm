# classic; PE:6a70b91c:0270a000; plot-insertion; RVA 0x477920..0x477ab5; PE disassembly
0x00477920: mov    QWORD PTR [rsp+0x10],rdx
0x00477925: push   rsi
0x00477926: push   rdi
0x00477927: push   r12
0x00477929: push   r13
0x0047792b: push   r15
0x0047792d: sub    rsp,0x30
0x00477931: lea    r12,[rdx+0x20]
0x00477935: mov    r13,rdx
0x00477938: mov    rdi,rcx
0x0047793b: cmp    r12,rdx
0x0047793e: je     0x140477956
0x00477940: cmp    QWORD PTR [rdx+0x18],0xf
0x00477945: jbe    0x14047794a
0x00477947: mov    rdx,QWORD PTR [rdx]
0x0047794a: mov    r8,QWORD PTR [r13+0x10]
0x0047794e: mov    rcx,r12
0x00477951: call   0x14006f860
0x00477956: mov    rcx,r12
0x00477959: call   0x14052a900
0x0047795e: lea    rsi,[rdi+0x278]
0x00477965: mov    r15,QWORD PTR [rsi+0x8]
0x00477969: mov    rcx,QWORD PTR [rsi]
0x0047796c: mov    rax,r15
0x0047796f: sub    rax,rcx
0x00477972: test   rax,0xfffffffffffffff8
0x00477978: jne    0x1404779b2
0x0047797a: cmp    r15,QWORD PTR [rsi+0x10]
0x0047797e: je     0x140477995
0x00477980: mov    QWORD PTR [r15],r13
0x00477983: add    QWORD PTR [rsi+0x8],0x8
0x00477988: add    rsp,0x30
0x0047798c: pop    r15
0x0047798e: pop    r13
0x00477990: pop    r12
0x00477992: pop    rdi
0x00477993: pop    rsi
0x00477994: ret
0x00477995: lea    r8,[rsp+0x68]
0x0047799a: mov    rdx,r15
0x0047799d: mov    rcx,rsi
0x004779a0: call   0x140070b60
0x004779a5: add    rsp,0x30
0x004779a9: pop    r15
0x004779ab: pop    r13
0x004779ad: pop    r12
0x004779af: pop    rdi
0x004779b0: pop    rsi
0x004779b1: ret
0x004779b2: mov    rdi,QWORD PTR [rdi+0x280]
0x004779b9: xor    eax,eax
0x004779bb: mov    QWORD PTR [rsp+0x70],rbx
0x004779c0: mov    rbx,rcx
0x004779c3: mov    QWORD PTR [rsp+0x28],rbp
0x004779c8: mov    DWORD PTR [rsp+0x60],eax
0x004779cc: mov    QWORD PTR [rsp+0x20],r14
0x004779d1: cmp    rbx,rdi
0x004779d4: jae    0x140477a79
0x004779da: mov    rcx,QWORD PTR [rbx]
0x004779dd: mov    rdx,r12
0x004779e0: mov    r14,QWORD PTR [r12+0x10]
0x004779e5: add    rcx,0x20
0x004779e9: cmp    QWORD PTR [r12+0x18],0xf
0x004779ef: jbe    0x1404779f5
0x004779f1: mov    rdx,QWORD PTR [r12]
0x004779f5: cmp    QWORD PTR [rcx+0x18],0xf
0x004779fa: mov    rbp,QWORD PTR [rcx+0x10]
0x004779fe: jbe    0x140477a03
0x00477a00: mov    rcx,QWORD PTR [rcx]
0x00477a03: cmp    r14,rbp
0x00477a06: mov    r8,rbp
0x00477a09: cmovb  r8,r14
0x00477a0d: call   0x141535d84
0x00477a12: test   eax,eax
0x00477a14: je     0x140477a1c
0x00477a16: jns    0x140477a27
0x00477a18: mov    al,0xff
0x00477a1a: jmp    0x140477a29
0x00477a1c: cmp    rbp,r14
0x00477a1f: jae    0x140477a25
0x00477a21: mov    al,0xff
0x00477a23: jmp    0x140477a29
0x00477a25: jbe    0x140477a2d
0x00477a27: mov    al,0x1
0x00477a29: test   al,al
0x00477a2b: jg     0x140477a37
0x00477a2d: add    rbx,0x8
0x00477a31: inc    DWORD PTR [rsp+0x60]
0x00477a35: jmp    0x1404779d1
0x00477a37: movsxd rax,DWORD PTR [rsp+0x60]
0x00477a3c: mov    rcx,QWORD PTR [rsi]
0x00477a3f: lea    rbx,[rcx+rax*8]
0x00477a43: cmp    r15,QWORD PTR [rsi+0x10]
0x00477a47: je     0x140477a74
0x00477a49: cmp    rbx,r15
0x00477a4c: je     0x140477a7f
0x00477a4e: mov    rax,QWORD PTR [r15-0x8]
0x00477a52: lea    r8,[r15-0x8]
0x00477a56: mov    QWORD PTR [r15],rax
0x00477a59: sub    r8,rbx
0x00477a5c: add    QWORD PTR [rsi+0x8],0x8
0x00477a61: sub    r15,r8
0x00477a64: mov    rcx,r15
0x00477a67: mov    rdx,rbx
0x00477a6a: call   0x141535d8a
0x00477a6f: mov    QWORD PTR [rbx],r13
0x00477a72: jmp    0x140477a99
0x00477a74: mov    rdx,rbx
0x00477a77: jmp    0x140477a8c
0x00477a79: cmp    r15,QWORD PTR [rsi+0x10]
0x00477a7d: je     0x140477a89
0x00477a7f: mov    QWORD PTR [r15],r13
0x00477a82: add    QWORD PTR [rsi+0x8],0x8
0x00477a87: jmp    0x140477a99
0x00477a89: mov    rdx,r15
0x00477a8c: lea    r8,[rsp+0x68]
0x00477a91: mov    rcx,rsi
0x00477a94: call   0x140070b60
0x00477a99: mov    rbp,QWORD PTR [rsp+0x28]
0x00477a9e: mov    r14,QWORD PTR [rsp+0x20]
0x00477aa3: mov    rbx,QWORD PTR [rsp+0x70]
0x00477aa8: add    rsp,0x30
0x00477aac: pop    r15
0x00477aae: pop    r13
0x00477ab0: pop    r12
0x00477ab2: pop    rdi
0x00477ab3: pop    rsi
0x00477ab4: ret
