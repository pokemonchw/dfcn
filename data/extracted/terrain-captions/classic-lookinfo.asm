; classic; PE:6a70b91c:0270a000; lookinfo; RVA 0x404420..0x40609e
0x00404420: mov    QWORD PTR [rsp+0x10],rbx
0x00404425: mov    QWORD PTR [rsp+0x18],rsi
0x0040442a: mov    QWORD PTR [rsp+0x20],rdi
0x0040442f: push   rbp
0x00404430: push   r12
0x00404432: push   r13
0x00404434: push   r14
0x00404436: push   r15
0x00404438: lea    rbp,[rsp-0x90]
0x00404440: sub    rsp,0x190
0x00404447: mov    rax,QWORD PTR [rip+0x1491bf2]        # 0x141896040
0x0040444e: xor    rax,rsp
0x00404451: mov    QWORD PTR [rbp+0x88],rax
0x00404458: mov    rsi,rcx
0x0040445b: lea    rbx,[rcx+0x28]
0x0040445f: xor    r12d,r12d
0x00404462: mov    QWORD PTR [rbx+0x10],r12
0x00404466: mov    rax,rbx
0x00404469: cmp    QWORD PTR [rbx+0x18],0xf
0x0040446e: jbe    0x140404473
0x00404470: mov    rax,QWORD PTR [rbx]
0x00404473: mov    BYTE PTR [rax],r12b
0x00404476: movsxd rax,DWORD PTR [rcx]
0x00404479: cmp    eax,0xf
0x0040447c: ja     0x14040606e
0x00404482: lea    r15,[rip+0xffffffffffbfbb77]        # 0x140000000
0x00404489: mov    ecx,DWORD PTR [r15+rax*4+0x4060a0]
0x00404491: add    rcx,r15
0x00404494: mov    r13d,0x1
0x0040449a: mov    r14d,0x2
0x004044a0: jmp    rcx
0x004044a2: mov    r11d,DWORD PTR [rsi+0x4]
0x004044a6: mov    r8,QWORD PTR [rip+0x1fdae9b]        # 0x1423df348
0x004044ad: mov    rdi,QWORD PTR [rip+0x1fdae8c]        # 0x1423df340
0x004044b4: sub    r8,rdi
0x004044b7: sar    r8,0x3
0x004044bb: test   r8d,r8d
0x004044be: je     0x1404052c4
0x004044c4: cmp    r11d,0xffffffff
0x004044c8: je     0x1404052c4
0x004044ce: sub    r8d,r13d
0x004044d1: mov    edx,r12d
0x004044d4: js     0x140404507
0x004044d6: data16 nop WORD PTR [rax+rax*1+0x0]
0x004044e0: lea    ecx,[rdx+r8*1]
0x004044e4: sar    ecx,1
0x004044e6: movsxd rax,ecx
0x004044e9: mov    r10,QWORD PTR [rdi+rax*8]
0x004044ed: cmp    DWORD PTR [r10+0x1c],r11d
0x004044f1: je     0x14040450a
0x004044f3: lea    eax,[rcx+0x1]
0x004044f6: cmovle edx,eax
0x004044f9: lea    eax,[rcx-0x1]
0x004044fc: cmovle eax,r8d
0x00404500: mov    r8d,eax
0x00404503: cmp    edx,eax
0x00404505: jle    0x1404044e0
0x00404507: mov    r10,r12
0x0040450a: test   r10,r10
0x0040450d: je     0x1404052c4
0x00404513: mov    r9d,0xffffffff
0x00404519: xor    r8d,r8d
0x0040451c: mov    rdx,rbx
0x0040451f: mov    rcx,r10
0x00404522: call   0x140c62490
0x00404527: mov    DWORD PTR [rsi+0x48],0x6
0x0040452e: jmp    0x140406069
0x00404533: mov    BYTE PTR [rsp+0x28],r13b
0x00404538: movzx  eax,WORD PTR [rsi+0x20]
0x0040453c: mov    WORD PTR [rsp+0x20],ax
0x00404541: movzx  r9d,WORD PTR [rsi+0x1e]
0x00404546: movzx  r8d,WORD PTR [rsi+0x1c]
0x0040454b: mov    rdx,rbx
0x0040454e: lea    rcx,[rip+0x1fc6e8b]        # 0x1423cb3e0
0x00404555: call   0x140e782a0
0x0040455a: mov    DWORD PTR [rsi+0x48],r13d
0x0040455e: jmp    0x140406069
0x00404563: movsxd rax,DWORD PTR [rsi+0x4]
0x00404567: mov    edi,0x7
0x0040456c: cmp    eax,0x8
0x0040456f: ja     0x140404670
0x00404575: mov    ecx,DWORD PTR [r15+rax*4+0x4060e0]
0x0040457d: add    rcx,r15
0x00404580: jmp    rcx
0x00404582: mov    r8,r12
0x00404585: cmp    WORD PTR [rsi+0x8],0xa
0x0040458a: setl   r8b
0x0040458e: add    r8,0xd
0x00404592: lea    rcx,[rip+0x1230907]        # 0x141634ea0 ; literal="Quiet movement"
0x00404599: lea    rdx,[rip+0x1230a08]        # 0x141634fa8 ; literal="Loud movement"
0x004045a0: cmp    WORD PTR [rsi+0x8],0xa
0x004045a5: cmovl  rdx,rcx
0x004045a9: jmp    0x140404668
0x004045ae: lea    rax,[rip+0x12308c3]        # 0x141634e78 ; literal="Light combat"
0x004045b5: lea    rdx,[rip+0x12308f4]        # 0x141634eb0 ; literal="Heavy combat"
0x004045bc: cmp    WORD PTR [rsi+0x8],0xa
0x004045c1: cmovl  rdx,rax
0x004045c5: mov    r8d,0xc
0x004045cb: jmp    0x140404668
0x004045d0: mov    r8,r12
0x004045d3: cmp    WORD PTR [rsi+0x8],0xa
0x004045d8: setl   r8b
0x004045dc: add    r8,0x11
0x004045e0: lea    rcx,[rip+0x12308f9]        # 0x141634ee0 ; literal="Quiet vocalization"
0x004045e7: lea    rdx,[rip+0x123089a]        # 0x141634e88 ; literal="Loud vocalization"
0x004045ee: cmp    WORD PTR [rsi+0x8],0xa
0x004045f3: cmovl  rdx,rcx
0x004045f7: jmp    0x140404668
0x004045f9: mov    r8,r12
0x004045fc: cmp    WORD PTR [rsi+0x8],0xa
0x00404601: setl   r8b
0x00404605: add    r8,0xd
0x00404609: lea    rcx,[rip+0x12308b0]        # 0x141634ec0 ; literal="Quiet grinding"
0x00404610: lea    rdx,[rip+0x12308e1]        # 0x141634ef8 ; literal="Loud grinding"
0x00404617: cmp    WORD PTR [rsi+0x8],0xa
0x0040461c: cmovl  rdx,rcx
0x00404620: jmp    0x140404668
0x00404622: mov    r8d,0xc
0x00404628: lea    rdx,[rip+0x12308a1]        # 0x141634ed0 ; literal="Storytelling"
0x0040462f: jmp    0x140404668
0x00404631: mov    r8d,0x9
0x00404637: lea    rdx,[rip+0x12307d2]        # 0x141634e10 ; literal="Preaching"
0x0040463e: jmp    0x140404668
0x00404640: mov    r8d,0xf
0x00404646: lea    rdx,[rip+0x12307d3]        # 0x141634e20 ; literal="Poem recitation"
0x0040464d: jmp    0x140404668
0x0040464f: mov    r8d,0xd
0x00404655: lea    rdx,[rip+0x123079c]        # 0x141634df8 ; literal="Musical voice"
0x0040465c: jmp    0x140404668
0x0040465e: mov    r8,rdi
0x00404661: lea    rdx,[rip+0x12307a0]        # 0x141634e08 ; literal="Dancing"
0x00404668: mov    rcx,rbx
0x0040466b: call   0x14006f860
0x00404670: mov    r8,rdi
0x00404673: lea    rdx,[rip+0x12307e6]        # 0x141634e60 ; literal=" (heard"
0x0040467a: mov    rcx,rbx
0x0040467d: call   0x14006f9a0
0x00404682: cmp    DWORD PTR [rsi+0xc],0x4b
0x00404686: jl     0x14040469d
0x00404688: mov    r8d,0x9
0x0040468e: lea    rdx,[rip+0x12307d3]        # 0x141634e68 ; literal=" recently"
0x00404695: mov    rcx,rbx
0x00404698: call   0x14006f9a0
0x0040469d: mov    r8,r13
0x004046a0: lea    rdx,[rip+0x120bc31]        # 0x1416102d8 ; literal=")"
0x004046a7: mov    rcx,rbx
0x004046aa: call   0x14006f9a0
0x004046af: mov    DWORD PTR [rsi+0x48],0x3
0x004046b6: jmp    0x140406069
0x004046bb: movsxd rax,DWORD PTR [rsi+0x4]
0x004046bf: cmp    eax,0xa
0x004046c2: ja     0x140404804
0x004046c8: mov    ecx,DWORD PTR [r15+rax*4+0x406104]
0x004046d0: add    rcx,r15
0x004046d3: jmp    rcx
0x004046d5: lea    rdx,[rip+0x1230754]        # 0x141634e30 ; literal="Creature (remembered)"
0x004046dc: jmp    0x1404047f6
0x004046e1: mov    r8d,0x13
0x004046e7: lea    rdx,[rip+0x123075a]        # 0x141634e48 ; literal="Object (remembered)"
0x004046ee: mov    rcx,rbx
0x004046f1: call   0x14006f860
0x004046f6: mov    DWORD PTR [rsi+0x48],r12d
0x004046fa: jmp    0x140406069
0x004046ff: mov    r8d,0x16
0x00404705: lea    rdx,[rip+0x1230644]        # 0x141634d50 ; literal="Structure (remembered)"
0x0040470c: mov    rcx,rbx
0x0040470f: call   0x14006f860
0x00404714: mov    DWORD PTR [rsi+0x48],r12d
0x00404718: jmp    0x140406069
0x0040471d: mov    r8d,0x11
0x00404723: lea    rdx,[rip+0x123063e]        # 0x141634d68 ; literal="Wall (remembered)"
0x0040472a: mov    rcx,rbx
0x0040472d: call   0x14006f860
0x00404732: mov    DWORD PTR [rsi+0x48],r12d
0x00404736: jmp    0x140406069
0x0040473b: mov    r8d,0x19
0x00404741: lea    rdx,[rip+0x12305c8]        # 0x141634d10 ; literal="Upward stair (remembered)"
0x00404748: mov    rcx,rbx
0x0040474b: call   0x14006f860
0x00404750: mov    DWORD PTR [rsi+0x48],r12d
0x00404754: jmp    0x140406069
0x00404759: mov    r8d,0x1b
0x0040475f: lea    rdx,[rip+0x12305ca]        # 0x141634d30 ; literal="Downward stair (remembered)"
0x00404766: mov    rcx,rbx
0x00404769: call   0x14006f860
0x0040476e: mov    DWORD PTR [rsi+0x48],r12d
0x00404772: jmp    0x140406069
0x00404777: mov    r8d,0x19
0x0040477d: lea    rdx,[rip+0x1230634]        # 0x141634db8 ; literal="Updown stair (remembered)"
0x00404784: mov    rcx,rbx
0x00404787: call   0x14006f860
0x0040478c: mov    DWORD PTR [rsi+0x48],r12d
0x00404790: jmp    0x140406069
0x00404795: mov    r8d,0x18
0x0040479b: lea    rdx,[rip+0x1230636]        # 0x141634dd8 ; literal="Upward ramp (remembered)"
0x004047a2: mov    rcx,rbx
0x004047a5: call   0x14006f860
0x004047aa: mov    DWORD PTR [rsi+0x48],r12d
0x004047ae: jmp    0x140406069
0x004047b3: mov    r8d,0x1a
0x004047b9: lea    rdx,[rip+0x12305c0]        # 0x141634d80 ; literal="Downward ramp (remembered)"
0x004047c0: mov    rcx,rbx
0x004047c3: call   0x14006f860
0x004047c8: mov    DWORD PTR [rsi+0x48],r12d
0x004047cc: jmp    0x140406069
0x004047d1: mov    r8d,0x12
0x004047d7: lea    rdx,[rip+0x12305c2]        # 0x141634da0 ; literal="Floor (remembered)"
0x004047de: mov    rcx,rbx
0x004047e1: call   0x14006f860
0x004047e6: mov    DWORD PTR [rsi+0x48],r12d
0x004047ea: jmp    0x140406069
0x004047ef: lea    rdx,[rip+0x123096a]        # 0x141635160 ; literal="Open air (remembered)"
0x004047f6: mov    r8d,0x15
0x004047fc: mov    rcx,rbx
0x004047ff: call   0x14006f860
0x00404804: mov    DWORD PTR [rsi+0x48],r12d
0x00404808: jmp    0x140406069
0x0040480d: mov    r8d,0x1c
0x00404813: lea    rdx,[rip+0x123095e]        # 0x141635178 ; literal="Blood of the living (sensed)"
0x0040481a: mov    rcx,rbx
0x0040481d: call   0x14006f860
0x00404822: movzx  eax,WORD PTR [rsi+0x6]
0x00404826: mov    WORD PTR [rsi+0x48],ax
0x0040482a: movzx  eax,WORD PTR [rsi+0x8]
0x0040482e: mov    WORD PTR [rsi+0x4a],ax
0x00404832: movzx  eax,WORD PTR [rsi+0xa]
0x00404836: mov    WORD PTR [rsi+0x4c],ax
0x0040483a: jmp    0x14040606e
0x0040483f: mov    r11d,DWORD PTR [rsi+0x4]
0x00404843: mov    r8,QWORD PTR [rip+0x1fda75e]        # 0x1423defa8
0x0040484a: mov    rdi,QWORD PTR [rip+0x1fda74f]        # 0x1423defa0
0x00404851: sub    r8,rdi
0x00404854: sar    r8,0x3
0x00404858: test   r8d,r8d
0x0040485b: je     0x1404048e2
0x00404861: cmp    r11d,0xffffffff
0x00404865: je     0x1404048e2
0x00404867: sub    r8d,r13d
0x0040486a: mov    edx,r12d
0x0040486d: js     0x14040489a
0x0040486f: nop
0x00404870: lea    ecx,[rdx+r8*1]
0x00404874: sar    ecx,1
0x00404876: movsxd rax,ecx
0x00404879: mov    r10,QWORD PTR [rdi+rax*8]
0x0040487d: cmp    DWORD PTR [r10+0x130],r11d
0x00404884: je     0x14040489d
0x00404886: lea    eax,[rcx+0x1]
0x00404889: cmovle edx,eax
0x0040488c: lea    eax,[rcx-0x1]
0x0040488f: cmovle eax,r8d
0x00404893: mov    r8d,eax
0x00404896: cmp    edx,eax
0x00404898: jle    0x140404870
0x0040489a: mov    r10,r12
0x0040489d: test   r10,r10
0x004048a0: je     0x1404048e2
0x004048a2: mov    eax,DWORD PTR [rip+0x14919c0]        # 0x141896268
0x004048a8: test   eax,eax
0x004048aa: jne    0x1404048c6
0x004048ac: xor    r8d,r8d
0x004048af: mov    rdx,rbx
0x004048b2: mov    rcx,r10
0x004048b5: call   0x14132bba0
0x004048ba: mov    DWORD PTR [rsi+0x48],0x7
0x004048c1: jmp    0x140406069
0x004048c6: cmp    eax,r13d
0x004048c9: jne    0x1404048e2
0x004048cb: mov    BYTE PTR [rsp+0x20],r13b
0x004048d0: movzx  r9d,r13b
0x004048d4: xor    r8d,r8d
0x004048d7: mov    rdx,rbx
0x004048da: mov    rcx,r10
0x004048dd: call   0x1413293a0
0x004048e2: mov    DWORD PTR [rsi+0x48],0x7
0x004048e9: jmp    0x140406069
0x004048ee: mov    r11d,DWORD PTR [rsi+0x4]
0x004048f2: mov    rdi,QWORD PTR [rip+0x1fe3507]        # 0x1423e7e00
0x004048f9: mov    r8,QWORD PTR [rip+0x1fe3508]        # 0x1423e7e08
0x00404900: sub    r8,rdi
0x00404903: sar    r8,0x3
0x00404907: test   r8,r8
0x0040490a: je     0x14040495e
0x0040490c: cmp    r11d,0xffffffff
0x00404910: je     0x14040495e
0x00404912: sub    r8d,r13d
0x00404915: mov    edx,r12d
0x00404918: js     0x140404947
0x0040491a: nop    WORD PTR [rax+rax*1+0x0]
0x00404920: lea    ecx,[rdx+r8*1]
0x00404924: sar    ecx,1
0x00404926: movsxd rax,ecx
0x00404929: mov    r10,QWORD PTR [rdi+rax*8]
0x0040492d: cmp    DWORD PTR [r10+0x50],r11d
0x00404931: je     0x14040494a
0x00404933: lea    eax,[rcx+0x1]
0x00404936: cmovle edx,eax
0x00404939: lea    eax,[rcx-0x1]
0x0040493c: cmovle eax,r8d
0x00404940: mov    r8d,eax
0x00404943: cmp    edx,eax
0x00404945: jle    0x140404920
0x00404947: mov    r10,r12
0x0040494a: test   r10,r10
0x0040494d: je     0x14040495e
0x0040494f: mov    rax,QWORD PTR [r10]
0x00404952: mov    rdx,rbx
0x00404955: mov    rcx,r10
0x00404958: call   QWORD PTR [rax+0x188]
0x0040495e: mov    DWORD PTR [rsi+0x48],0x3
0x00404965: jmp    0x140406069
0x0040496a: mov    r11d,DWORD PTR [rsi+0x8]
0x0040496e: cmp    r11d,0xffffffff
0x00404972: je     0x1404049ec
0x00404974: mov    rdi,QWORD PTR [rip+0x1fda9c5]        # 0x1423df340
0x0040497b: mov    r8,QWORD PTR [rip+0x1fda9c6]        # 0x1423df348
0x00404982: sub    r8,rdi
0x00404985: sar    r8,0x3
0x00404989: test   r8d,r8d
0x0040498c: je     0x140406062
0x00404992: sub    r8d,r13d
0x00404995: mov    edx,r12d
0x00404998: js     0x1404049c7
0x0040499a: nop    WORD PTR [rax+rax*1+0x0]
0x004049a0: lea    ecx,[r8+rdx*1]
0x004049a4: sar    ecx,1
0x004049a6: movsxd rax,ecx
0x004049a9: mov    r10,QWORD PTR [rdi+rax*8]
0x004049ad: cmp    DWORD PTR [r10+0x1c],r11d
0x004049b1: je     0x1404049ca
0x004049b3: lea    eax,[rcx+0x1]
0x004049b6: cmovle edx,eax
0x004049b9: lea    eax,[rcx-0x1]
0x004049bc: cmovle eax,r8d
0x004049c0: mov    r8d,eax
0x004049c3: cmp    edx,eax
0x004049c5: jle    0x1404049a0
0x004049c7: mov    r10,r12
0x004049ca: test   r10,r10
0x004049cd: je     0x140406062
0x004049d3: mov    r9d,0xffffffff
0x004049d9: xor    r8d,r8d
0x004049dc: mov    rdx,rbx
0x004049df: mov    rcx,r10
0x004049e2: call   0x140c62490
0x004049e7: jmp    0x140406062
0x004049ec: test   BYTE PTR [rsi+0xc],r14b
0x004049f0: je     0x140404aa9
0x004049f6: mov    r8d,0xc
0x004049fc: lea    rdx,[rip+0x1230745]        # 0x141635148 ; literal="a colony of "
0x00404a03: mov    rcx,rbx
0x00404a06: call   0x14006f860
0x00404a0b: xorps  xmm0,xmm0
0x00404a0e: movups XMMWORD PTR [rbp+0x8],xmm0
0x00404a12: mov    ecx,0xf
0x00404a17: mov    QWORD PTR [rbp+0x20],rcx
0x00404a1b: movsx  rax,WORD PTR [rsi+0x4]
0x00404a20: mov    r8,r12
0x00404a23: mov    QWORD PTR [rbp+0x18],r12
0x00404a27: mov    BYTE PTR [rbp+0x8],r8b
0x00404a2b: test   ax,ax
0x00404a2e: js     0x140404a7c
0x00404a30: mov    rdx,QWORD PTR [rip+0x20e1f21]        # 0x1424e6958
0x00404a37: mov    r9,rax
0x00404a3a: mov    rax,QWORD PTR [rip+0x20e1f1f]        # 0x1424e6960
0x00404a41: sub    rax,rdx
0x00404a44: sar    rax,0x3
0x00404a48: cmp    r9,rax
0x00404a4b: jae    0x140404a7c
0x00404a4d: mov    rdx,QWORD PTR [rdx+r9*8]
0x00404a51: add    rdx,0x40
0x00404a55: lea    rax,[rbp+0x8]
0x00404a59: cmp    rax,rdx
0x00404a5c: je     0x140404a7c
0x00404a5e: mov    r8,QWORD PTR [rdx+0x10]
0x00404a62: cmp    QWORD PTR [rdx+0x18],rcx
0x00404a66: jbe    0x140404a6b
0x00404a68: mov    rdx,QWORD PTR [rdx]
0x00404a6b: lea    rcx,[rbp+0x8]
0x00404a6f: call   0x14006f860
0x00404a74: mov    rcx,QWORD PTR [rbp+0x20]
0x00404a78: mov    r8,QWORD PTR [rbp+0x18]
0x00404a7c: lea    rdx,[rbp+0x8]
0x00404a80: cmp    rcx,0xf
0x00404a84: cmova  rdx,QWORD PTR [rbp+0x8]
0x00404a89: mov    rcx,rbx
0x00404a8c: call   0x14006f9a0
0x00404a91: nop
0x00404a92: mov    rdx,QWORD PTR [rbp+0x20]
0x00404a96: cmp    rdx,0xf
0x00404a9a: jbe    0x140406062
0x00404aa0: mov    rcx,QWORD PTR [rbp+0x8]
0x00404aa4: jmp    0x140404ca7
0x00404aa9: mov    eax,DWORD PTR [rsi+0x10]
0x00404aac: cmp    eax,r13d
0x00404aaf: ja     0x140404aca
0x00404ab1: movzx  r9d,WORD PTR [rsi+0x6]
0x00404ab6: xor    r8d,r8d
0x00404ab9: mov    rdx,rbx
0x00404abc: movzx  ecx,WORD PTR [rsi+0x4]
0x00404ac0: call   0x140aa0c50
0x00404ac5: jmp    0x140406062
0x00404aca: cmp    eax,0xa
0x00404acd: jae    0x140404b3e
0x00404acf: movsx  rcx,WORD PTR [rsi+0x4]
0x00404ad4: mov    QWORD PTR [rbx+0x10],r12
0x00404ad8: mov    rax,rbx
0x00404adb: cmp    QWORD PTR [rbx+0x18],0xf
0x00404ae0: jbe    0x140404ae5
0x00404ae2: mov    rax,QWORD PTR [rbx]
0x00404ae5: mov    BYTE PTR [rax],r12b
0x00404ae8: test   cx,cx
0x00404aeb: js     0x140406062
0x00404af1: mov    rdx,rcx
0x00404af4: mov    rax,QWORD PTR [rip+0x20e1e65]        # 0x1424e6960
0x00404afb: mov    rcx,QWORD PTR [rip+0x20e1e56]        # 0x1424e6958
0x00404b02: sub    rax,rcx
0x00404b05: sar    rax,0x3
0x00404b09: cmp    rdx,rax
0x00404b0c: jae    0x140406062
0x00404b12: mov    rdx,QWORD PTR [rcx+rdx*8]
0x00404b16: add    rdx,0x40
0x00404b1a: cmp    rbx,rdx
0x00404b1d: je     0x140406062
0x00404b23: mov    r8,QWORD PTR [rdx+0x10]
0x00404b27: cmp    QWORD PTR [rdx+0x18],0xf
0x00404b2c: jbe    0x140404b31
0x00404b2e: mov    rdx,QWORD PTR [rdx]
0x00404b31: mov    rcx,rbx
0x00404b34: call   0x14006f860
0x00404b39: jmp    0x140406062
0x00404b3e: mov    rcx,rbx
0x00404b41: cmp    eax,0x32
0x00404b44: jae    0x140404bfb
0x00404b4a: mov    r8d,0x5
0x00404b50: lea    rdx,[rip+0x1230601]        # 0x141635158 ; literal="many "
0x00404b57: call   0x14006f860
0x00404b5c: xorps  xmm0,xmm0
0x00404b5f: movups XMMWORD PTR [rbp+0x28],xmm0
0x00404b63: mov    ecx,0xf
0x00404b68: mov    QWORD PTR [rbp+0x40],rcx
0x00404b6c: movsx  rax,WORD PTR [rsi+0x4]
0x00404b71: mov    r8,r12
0x00404b74: mov    QWORD PTR [rbp+0x38],r12
0x00404b78: mov    BYTE PTR [rbp+0x28],r8b
0x00404b7c: test   ax,ax
0x00404b7f: js     0x140404bcd
0x00404b81: mov    rdx,QWORD PTR [rip+0x20e1dd0]        # 0x1424e6958
0x00404b88: mov    r9,rax
0x00404b8b: mov    rax,QWORD PTR [rip+0x20e1dce]        # 0x1424e6960
0x00404b92: sub    rax,rdx
0x00404b95: sar    rax,0x3
0x00404b99: cmp    r9,rax
0x00404b9c: jae    0x140404bcd
0x00404b9e: mov    rdx,QWORD PTR [rdx+r9*8]
0x00404ba2: add    rdx,0x40
0x00404ba6: lea    rax,[rbp+0x28]
0x00404baa: cmp    rax,rdx
0x00404bad: je     0x140404bcd
0x00404baf: mov    r8,QWORD PTR [rdx+0x10]
0x00404bb3: cmp    QWORD PTR [rdx+0x18],rcx
0x00404bb7: jbe    0x140404bbc
0x00404bb9: mov    rdx,QWORD PTR [rdx]
0x00404bbc: lea    rcx,[rbp+0x28]
0x00404bc0: call   0x14006f860
0x00404bc5: mov    rcx,QWORD PTR [rbp+0x40]
0x00404bc9: mov    r8,QWORD PTR [rbp+0x38]
0x00404bcd: lea    rdx,[rbp+0x28]
0x00404bd1: cmp    rcx,0xf
0x00404bd5: cmova  rdx,QWORD PTR [rbp+0x28]
0x00404bda: lea    rcx,[rsi+0x28]
0x00404bde: call   0x14006f9a0
0x00404be3: nop
0x00404be4: mov    rdx,QWORD PTR [rbp+0x40]
0x00404be8: cmp    rdx,0xf
0x00404bec: jbe    0x140406062
0x00404bf2: mov    rcx,QWORD PTR [rbp+0x28]
0x00404bf6: jmp    0x140404ca7
0x00404bfb: mov    r8d,0xb
0x00404c01: lea    rdx,[rip+0x12305a0]        # 0x1416351a8 ; literal="a swarm of "
0x00404c08: call   0x14006f860
0x00404c0d: xorps  xmm0,xmm0
0x00404c10: movups XMMWORD PTR [rbp+0x48],xmm0
0x00404c14: mov    ecx,0xf
0x00404c19: mov    QWORD PTR [rbp+0x60],rcx
0x00404c1d: movsx  rax,WORD PTR [rsi+0x4]
0x00404c22: mov    r8,r12
0x00404c25: mov    QWORD PTR [rbp+0x58],r12
0x00404c29: mov    BYTE PTR [rbp+0x48],r8b
0x00404c2d: test   ax,ax
0x00404c30: js     0x140404c7e
0x00404c32: mov    rdx,QWORD PTR [rip+0x20e1d1f]        # 0x1424e6958
0x00404c39: mov    r9,rax
0x00404c3c: mov    rax,QWORD PTR [rip+0x20e1d1d]        # 0x1424e6960
0x00404c43: sub    rax,rdx
0x00404c46: sar    rax,0x3
0x00404c4a: cmp    r9,rax
0x00404c4d: jae    0x140404c7e
0x00404c4f: mov    rdx,QWORD PTR [rdx+r9*8]
0x00404c53: add    rdx,0x40
0x00404c57: lea    rax,[rbp+0x48]
0x00404c5b: cmp    rax,rdx
0x00404c5e: je     0x140404c7e
0x00404c60: mov    r8,QWORD PTR [rdx+0x10]
0x00404c64: cmp    QWORD PTR [rdx+0x18],rcx
0x00404c68: jbe    0x140404c6d
0x00404c6a: mov    rdx,QWORD PTR [rdx]
0x00404c6d: lea    rcx,[rbp+0x48]
0x00404c71: call   0x14006f860
0x00404c76: mov    rcx,QWORD PTR [rbp+0x60]
0x00404c7a: mov    r8,QWORD PTR [rbp+0x58]
0x00404c7e: lea    rdx,[rbp+0x48]
0x00404c82: cmp    rcx,0xf
0x00404c86: cmova  rdx,QWORD PTR [rbp+0x48]
0x00404c8b: lea    rcx,[rsi+0x28]
0x00404c8f: call   0x14006f9a0
0x00404c94: nop
0x00404c95: mov    rdx,QWORD PTR [rbp+0x60]
0x00404c99: cmp    rdx,0xf
0x00404c9d: jbe    0x140406062
0x00404ca3: mov    rcx,QWORD PTR [rbp+0x48]
0x00404ca7: inc    rdx
0x00404caa: mov    rax,rcx
0x00404cad: cmp    rdx,0x1000
0x00404cb4: jb     0x140404ccf
0x00404cb6: add    rdx,0x27
0x00404cba: mov    rcx,QWORD PTR [rcx-0x8]
0x00404cbe: sub    rax,rcx
0x00404cc1: add    rax,0xfffffffffffffff8
0x00404cc5: cmp    rax,0x1f
0x00404cc9: ja     0x140405fc6
0x00404ccf: call   0x1415345f0
0x00404cd4: jmp    0x140406062
0x00404cd9: movsx  rax,WORD PTR [rsi+0x4]
0x00404cde: mov    edi,0x5
0x00404ce3: cmp    eax,0xd
0x00404ce6: ja     0x140404ff6
0x00404cec: mov    ecx,DWORD PTR [r15+rax*4+0x406130]
0x00404cf4: add    rcx,r15
0x00404cf7: jmp    rcx
0x00404cf9: mov    r8d,0x6
0x00404cff: lea    rdx,[rip+0x12304ae]        # 0x1416351b4 ; literal="Miasma"
0x00404d06: lea    rcx,[rsi+0x28]
0x00404d0a: call   0x14006f860
0x00404d0f: mov    DWORD PTR [rsi+0x48],edi
0x00404d12: jmp    0x140406069
0x00404d17: mov    r8,r12
0x00404d1a: cmp    WORD PTR [rsi+0x6],r13w
0x00404d1f: sete   r8b
0x00404d23: add    r8,0x4
0x00404d27: lea    r9,[rip+0x1230472]        # 0x1416351a0 ; literal="Mist"
0x00404d2e: lea    rdx,[rip+0x1230463]        # 0x141635198 ; literal="Steam"
0x00404d35: cmp    WORD PTR [rsi+0x6],r13w
0x00404d3a: cmovne rdx,r9
0x00404d3e: lea    rcx,[rsi+0x28]
0x00404d42: call   0x14006f860
0x00404d47: mov    DWORD PTR [rsi+0x48],edi
0x00404d4a: jmp    0x140406069
0x00404d4f: mov    r8d,0x4
0x00404d55: lea    rdx,[rip+0x1230444]        # 0x1416351a0 ; literal="Mist"
0x00404d5c: lea    rcx,[rsi+0x28]
0x00404d60: call   0x14006f860
0x00404d65: mov    DWORD PTR [rsi+0x48],edi
0x00404d68: jmp    0x140406069
0x00404d6d: mov    WORD PTR [rsp+0x30],0x3
0x00404d74: lea    rdx,[rsi+0x28]
0x00404d78: mov    BYTE PTR [rsp+0x28],r12b
0x00404d7d: mov    DWORD PTR [rsp+0x20],r12d
0x00404d82: mov    r9d,DWORD PTR [rsi+0x8]
0x00404d86: movzx  r8d,WORD PTR [rsi+0x6]
0x00404d8b: lea    rcx,[rip+0x1fc664e]        # 0x1423cb3e0
0x00404d92: call   0x1414cc890
0x00404d97: mov    DWORD PTR [rsi+0x48],edi
0x00404d9a: jmp    0x140406069
0x00404d9f: mov    ebx,DWORD PTR [rsi+0xc]
0x00404da2: mov    r11,QWORD PTR [rip+0x1fe427f]        # 0x1423e9028
0x00404da9: mov    r10,QWORD PTR [rip+0x1fe4280]        # 0x1423e9030
0x00404db0: sub    r10,r11
0x00404db3: sar    r10,0x3
0x00404db7: test   r10d,r10d
0x00404dba: je     0x140404ea4
0x00404dc0: mov    r9d,r12d
0x00404dc3: cmp    r10d,0x40
0x00404dc7: jle    0x140404df4
0x00404dc9: nop    DWORD PTR [rax+0x0]
0x00404dd0: mov    r8d,r10d
0x00404dd3: shr    r8d,1
0x00404dd6: lea    edx,[r8+r9*1]
0x00404dda: movsxd rax,edx
0x00404ddd: mov    rcx,QWORD PTR [r11+rax*8]
0x00404de1: cmp    ebx,DWORD PTR [rcx+0x8]
0x00404de4: cmovl  edx,r9d
0x00404de8: mov    r9d,edx
0x00404deb: sub    r10d,r8d
0x00404dee: cmp    r10d,0x40
0x00404df2: jg     0x140404dd0
0x00404df4: lea    eax,[r9+r10*1]
0x00404df8: cmp    eax,0xffffffff
0x00404dfb: je     0x140404ea4
0x00404e01: cmp    r9d,eax
0x00404e04: jge    0x140404ea4
0x00404e0a: movsxd rcx,r9d
0x00404e0d: movsxd rdx,eax
0x00404e10: mov    rax,QWORD PTR [r11+rcx*8]
0x00404e14: cmp    ebx,DWORD PTR [rax+0x8]
0x00404e17: je     0x140404e26
0x00404e19: inc    r9d
0x00404e1c: inc    rcx
0x00404e1f: cmp    rcx,rdx
0x00404e22: jl     0x140404e10
0x00404e24: jmp    0x140404ea4
0x00404e26: mov    DWORD PTR [rbp-0x70],r9d
0x00404e2a: movsxd rax,r9d
0x00404e2d: mov    rbx,QWORD PTR [r11+rax*8]
0x00404e31: mov    QWORD PTR [rbp-0x68],rbx
0x00404e35: movaps xmm0,XMMWORD PTR [rbp-0x70]
0x00404e39: test   rbx,rbx
0x00404e3c: je     0x140404ea4
0x00404e3e: psrldq xmm0,0x8
0x00404e43: movq   rcx,xmm0
0x00404e48: mov    rax,QWORD PTR [rcx]
0x00404e4b: call   QWORD PTR [rax]
0x00404e4d: cmp    ax,r13w
0x00404e51: jne    0x140404ea4
0x00404e53: lea    rcx,[rsi+0x28]
0x00404e57: mov    DWORD PTR [rsp+0x68],r12d
0x00404e5c: mov    DWORD PTR [rsp+0x60],r12d
0x00404e61: mov    BYTE PTR [rsp+0x58],r12b
0x00404e66: mov    r15d,0xffffffff
0x00404e6c: mov    DWORD PTR [rsp+0x50],r15d
0x00404e71: mov    DWORD PTR [rsp+0x48],r15d
0x00404e76: mov    QWORD PTR [rsp+0x40],r12
0x00404e7b: mov    BYTE PTR [rsp+0x38],r12b
0x00404e80: mov    DWORD PTR [rsp+0x30],r12d
0x00404e85: mov    DWORD PTR [rsp+0x28],r15d
0x00404e8a: mov    eax,DWORD PTR [rbx+0x18]
0x00404e8d: mov    DWORD PTR [rsp+0x20],eax
0x00404e91: movzx  r9d,WORD PTR [rbx+0x14]
0x00404e96: movzx  r8d,WORD PTR [rbx+0x12]
0x00404e9b: movzx  edx,WORD PTR [rbx+0x10]
0x00404e9f: call   0x140a7fc90
0x00404ea4: cmp    QWORD PTR [rsi+0x38],r12
0x00404ea8: jne    0x140404ff6
0x00404eae: mov    r8d,0xa
0x00404eb4: lea    rdx,[rip+0x1230245]        # 0x141635100 ; literal="Item Cloud"
0x00404ebb: lea    rcx,[rsi+0x28]
0x00404ebf: call   0x14006f860
0x00404ec4: mov    DWORD PTR [rsi+0x48],edi
0x00404ec7: jmp    0x140406069
0x00404ecc: mov    r8d,0xd
0x00404ed2: lea    rdx,[rip+0x1230237]        # 0x141635110 ; literal="An Ocean Wave"
0x00404ed9: lea    rcx,[rsi+0x28]
0x00404edd: call   0x14006f860
0x00404ee2: mov    DWORD PTR [rsi+0x48],edi
0x00404ee5: jmp    0x140406069
0x00404eea: mov    r8d,0x8
0x00404ef0: lea    rdx,[rip+0x12301e9]        # 0x1416350e0 ; literal="Sea Foam"
0x00404ef7: lea    rcx,[rsi+0x28]
0x00404efb: call   0x14006f860
0x00404f00: mov    DWORD PTR [rsi+0x48],edi
0x00404f03: jmp    0x140406069
0x00404f08: mov    eax,DWORD PTR [rsi+0x10]
0x00404f0b: and    eax,r13d
0x00404f0e: mov    ecx,eax
0x00404f10: lea    r8,[rax+0x9]
0x00404f14: lea    rax,[rip+0x1230215]        # 0x141635130 ; literal="Lava Mist"
0x00404f1b: lea    rdx,[rip+0x12301ce]        # 0x1416350f0 ; literal="Magma Mist"
0x00404f22: test   ecx,ecx
0x00404f24: cmove  rdx,rax
0x00404f28: lea    rcx,[rsi+0x28]
0x00404f2c: call   0x14006f860
0x00404f31: mov    DWORD PTR [rsi+0x48],edi
0x00404f34: jmp    0x140406069
0x00404f39: lea    rdx,[rsi+0x28]
0x00404f3d: mov    WORD PTR [rsp+0x30],r13w
0x00404f43: mov    BYTE PTR [rsp+0x28],r12b
0x00404f48: mov    DWORD PTR [rsp+0x20],r12d
0x00404f4d: mov    r9d,DWORD PTR [rsi+0x8]
0x00404f51: movzx  r8d,WORD PTR [rsi+0x6]
0x00404f56: lea    rcx,[rip+0x1fc6483]        # 0x1423cb3e0
0x00404f5d: call   0x1414cc890
0x00404f62: lea    rcx,[rsi+0x28]
0x00404f66: mov    r8d,0x6
0x00404f6c: lea    rdx,[rip+0x12301c9]        # 0x14163513c ; literal=" vapor"
0x00404f73: call   0x14006f9a0
0x00404f78: mov    DWORD PTR [rsi+0x48],edi
0x00404f7b: jmp    0x140406069
0x00404f80: mov    WORD PTR [rsp+0x30],0x2
0x00404f87: jmp    0x140404d74
0x00404f8c: lea    rdx,[rip+0x123018d]        # 0x141635120 ; literal="Smoke"
0x00404f93: mov    r8,rdi
0x00404f96: lea    rcx,[rsi+0x28]
0x00404f9a: call   0x14006f860
0x00404f9f: mov    DWORD PTR [rsi+0x48],edi
0x00404fa2: jmp    0x140406069
0x00404fa7: mov    r8d,0xa
0x00404fad: lea    rdx,[rip+0x11ed3a4]        # 0x1415f2358 ; literal="Dragonfire"
0x00404fb4: lea    rcx,[rsi+0x28]
0x00404fb8: call   0x14006f860
0x00404fbd: mov    DWORD PTR [rsi+0x48],edi
0x00404fc0: jmp    0x140406069
0x00404fc5: mov    r8d,0x4
0x00404fcb: lea    rdx,[rip+0x11ed372]        # 0x1415f2344 ; literal="Fire"
0x00404fd2: lea    rcx,[rsi+0x28]
0x00404fd6: call   0x14006f860
0x00404fdb: mov    DWORD PTR [rsi+0x48],edi
0x00404fde: jmp    0x140406069
0x00404fe3: lea    rdx,[rip+0x123013e]        # 0x141635128 ; literal="A Web"
0x00404fea: mov    r8,rdi
0x00404fed: lea    rcx,[rsi+0x28]
0x00404ff1: call   0x14006f860
0x00404ff6: mov    DWORD PTR [rsi+0x48],edi
0x00404ff9: jmp    0x140406069
0x00404ffe: mov    r8d,0xa
0x00405004: lea    rdx,[rip+0x123006d]        # 0x141635078 ; literal="A Campfire"
0x0040500b: mov    rcx,rbx
0x0040500e: call   0x14006f860
0x00405013: mov    DWORD PTR [rsi+0x48],0x4
0x0040501a: jmp    0x140406069
0x0040501f: mov    edx,DWORD PTR [rsi+0x4]
0x00405022: mov    r8d,DWORD PTR [rsi+0x10]
0x00405026: movzx  eax,WORD PTR [rsi+0xc]
0x0040502a: cmp    edx,0xffffffff
0x0040502d: je     0x140405089
0x0040502f: mov    DWORD PTR [rsp+0x68],r12d
0x00405034: mov    DWORD PTR [rsp+0x60],r12d
0x00405039: mov    BYTE PTR [rsp+0x58],r12b
0x0040503e: mov    r15d,0xffffffff
0x00405044: mov    DWORD PTR [rsp+0x50],r15d
0x00405049: mov    DWORD PTR [rsp+0x48],r15d
0x0040504e: mov    QWORD PTR [rsp+0x40],r12
0x00405053: mov    BYTE PTR [rsp+0x38],r12b
0x00405058: mov    DWORD PTR [rsp+0x30],r12d
0x0040505d: mov    DWORD PTR [rsp+0x28],r15d
0x00405062: mov    DWORD PTR [rsp+0x20],r8d
0x00405067: movzx  r9d,ax
0x0040506b: movzx  r8d,WORD PTR [rsi+0x8]
0x00405070: mov    rcx,rbx
0x00405073: call   0x140a7fc90
0x00405078: mov    rcx,rbx
0x0040507b: call   0x14052b070
0x00405080: mov    DWORD PTR [rsi+0x48],r14d
0x00405084: jmp    0x140406069
0x00405089: movsx  rbx,WORD PTR [rsi+0x14]
0x0040508e: movzx  edx,ax
0x00405091: lea    rcx,[rip+0x1fc6348]        # 0x1423cb3e0
0x00405098: call   0x1414a8ce0
0x0040509d: test   rax,rax
0x004050a0: je     0x1404050fc
0x004050a2: movsxd rax,DWORD PTR [rax+rbx*4+0x9c]
0x004050aa: test   eax,eax
0x004050ac: js     0x1404050fc
0x004050ae: mov    rcx,rax
0x004050b1: mov    rax,QWORD PTR [rip+0x20ebf28]        # 0x1424f0fe0
0x004050b8: mov    rdx,QWORD PTR [rip+0x20ebf19]        # 0x1424f0fd8
0x004050bf: sub    rax,rdx
0x004050c2: sar    rax,0x3
0x004050c6: cmp    rcx,rax
0x004050c9: jae    0x1404050fc
0x004050cb: mov    rax,QWORD PTR [rdx+rcx*8]
0x004050cf: mov    rcx,QWORD PTR [rax+0x20]
0x004050d3: movsx  rdx,WORD PTR [rcx]
0x004050d7: mov    rax,QWORD PTR [rip+0x20ebeca]        # 0x1424f0fa8
0x004050de: mov    rcx,QWORD PTR [rax+rdx*8]
0x004050e2: movsx  eax,BYTE PTR [rcx+0x70]
0x004050e6: mov    WORD PTR [rsi+0x48],ax
0x004050ea: mov    WORD PTR [rsi+0x4a],r12w
0x004050ef: cmp    BYTE PTR [rcx+0x70],r12b
0x004050f3: je     0x140405103
0x004050f5: movsx  r13d,BYTE PTR [rcx+0x71]
0x004050fa: jmp    0x140405103
0x004050fc: mov    DWORD PTR [rsi+0x48],0x4
0x00405103: mov    eax,0x4c
0x00405108: mov    rcx,rsi
0x0040510b: mov    WORD PTR [rax+rcx*1],r13w
0x00405110: movsx  edx,WORD PTR [rsi+0x18]
0x00405114: cmp    DWORD PTR [rsi+0x14],0x1
0x00405118: je     0x140405150
0x0040511a: sub    edx,0x1
0x0040511d: je     0x140405141
0x0040511f: sub    edx,0x1
0x00405122: je     0x140405138
0x00405124: cmp    edx,0x1
0x00405127: jne    0x140405193
0x00405129: mov    r8d,0xa
0x0040512f: lea    rdx,[rip+0x122ff6a]        # 0x1416350a0 ; literal="A pile of "
0x00405136: jmp    0x14040518a
0x00405138: lea    rdx,[rip+0x122ff89]        # 0x1416350c8 ; literal="A small pile of "
0x0040513f: jmp    0x140405184
0x00405141: mov    r8d,0xd
0x00405147: lea    rdx,[rip+0x122ff6a]        # 0x1416350b8 ; literal="A dusting of "
0x0040514e: jmp    0x14040518a
0x00405150: sub    edx,0x1
0x00405153: je     0x14040517d
0x00405155: sub    edx,0x1
0x00405158: je     0x14040516e
0x0040515a: cmp    edx,0x1
0x0040515d: jne    0x140405193
0x0040515f: mov    r8d,0xa
0x00405165: lea    rdx,[rip+0x122fefc]        # 0x141635068 ; literal="A pool of "
0x0040516c: jmp    0x14040518a
0x0040516e: mov    r8d,0xb
0x00405174: lea    rdx,[rip+0x122fedd]        # 0x141635058 ; literal="A smear of "
0x0040517b: jmp    0x14040518a
0x0040517d: lea    rdx,[rip+0x122ff04]        # 0x141635088 ; literal="A spattering of "
0x00405184: mov    r8d,0x10
0x0040518a: lea    rcx,[rsi+0x28]
0x0040518e: call   0x14006f860
0x00405193: xorps  xmm0,xmm0
0x00405196: movups XMMWORD PTR [rbp-0x58],xmm0
0x0040519a: mov    QWORD PTR [rbp-0x48],r12
0x0040519e: mov    eax,0xf
0x004051a3: mov    QWORD PTR [rbp-0x40],rax
0x004051a7: mov    BYTE PTR [rbp-0x58],r12b
0x004051ab: movzx  eax,WORD PTR [rsi+0x14]
0x004051af: mov    WORD PTR [rsp+0x30],ax
0x004051b4: mov    BYTE PTR [rsp+0x28],0x0
0x004051b9: mov    DWORD PTR [rsp+0x20],r12d
0x004051be: mov    r9d,DWORD PTR [rsi+0x10]
0x004051c2: movzx  r8d,WORD PTR [rsi+0xc]
0x004051c7: lea    rdx,[rbp-0x58]
0x004051cb: lea    rcx,[rip+0x1fc620e]        # 0x1423cb3e0
0x004051d2: call   0x1414cc890
0x004051d7: lea    rdx,[rbp-0x58]
0x004051db: cmp    QWORD PTR [rbp-0x40],0xf
0x004051e0: cmova  rdx,QWORD PTR [rbp-0x58]
0x004051e5: lea    rcx,[rsi+0x28]
0x004051e9: mov    r8,QWORD PTR [rbp-0x48]
0x004051ed: call   0x14006f9a0
0x004051f2: nop
0x004051f3: lea    rcx,[rbp-0x58]
0x004051f7: call   0x14006f7e0
0x004051fc: jmp    0x14040606e
0x00405201: mov    r10d,DWORD PTR [rsi+0x4]
0x00405205: mov    r8,QWORD PTR [rip+0x1fda13c]        # 0x1423df348
0x0040520c: mov    r11,QWORD PTR [rip+0x1fda12d]        # 0x1423df340
0x00405213: sub    r8,r11
0x00405216: sar    r8,0x3
0x0040521a: test   r8d,r8d
0x0040521d: je     0x140405257
0x0040521f: cmp    r10d,0xffffffff
0x00405223: je     0x140405257
0x00405225: sub    r8d,r13d
0x00405228: mov    edx,r12d
0x0040522b: js     0x140405257
0x0040522d: nop    DWORD PTR [rax]
0x00405230: lea    ecx,[rdx+r8*1]
0x00405234: sar    ecx,1
0x00405236: movsxd rax,ecx
0x00405239: mov    rbx,QWORD PTR [r11+rax*8]
0x0040523d: cmp    DWORD PTR [rbx+0x1c],r10d
0x00405241: je     0x14040525a
0x00405243: lea    eax,[rcx+0x1]
0x00405246: cmovle edx,eax
0x00405249: lea    eax,[rcx-0x1]
0x0040524c: cmovle eax,r8d
0x00405250: mov    r8d,eax
0x00405253: cmp    edx,eax
0x00405255: jle    0x140405230
0x00405257: mov    rbx,r12
0x0040525a: test   rbx,rbx
0x0040525d: je     0x1404052c4
0x0040525f: lea    rcx,[rsi+0x28]
0x00405263: mov    r8,r13
0x00405266: lea    rdx,[rip+0x11de4b3]        # 0x1415e3720 ; literal=" "
0x0040526d: call   0x14006f9a0
0x00405272: xorps  xmm0,xmm0
0x00405275: movups XMMWORD PTR [rbp-0x58],xmm0
0x00405279: mov    QWORD PTR [rbp-0x48],r12
0x0040527d: mov    eax,0xf
0x00405282: mov    QWORD PTR [rbp-0x40],rax
0x00405286: mov    BYTE PTR [rbp-0x58],r12b
0x0040528a: mov    r9d,0xffffffff
0x00405290: xor    r8d,r8d
0x00405293: lea    rdx,[rbp-0x58]
0x00405297: mov    rcx,rbx
0x0040529a: call   0x140c62490
0x0040529f: lea    rdx,[rbp-0x58]
0x004052a3: cmp    QWORD PTR [rbp-0x40],0xf
0x004052a8: cmova  rdx,QWORD PTR [rbp-0x58]
0x004052ad: lea    rcx,[rsi+0x28]
0x004052b1: mov    r8,QWORD PTR [rbp-0x48]
0x004052b5: call   0x14006f9a0
0x004052ba: nop
0x004052bb: lea    rcx,[rbp-0x58]
0x004052bf: call   0x14006f7e0
0x004052c4: mov    DWORD PTR [rsi+0x48],0x6
0x004052cb: jmp    0x140406069
0x004052d0: mov    r8d,0x6
0x004052d6: lea    rdx,[rip+0x122fdcf]        # 0x1416350ac ; literal="A Fire"
0x004052dd: mov    rcx,rbx
0x004052e0: call   0x14006f860
0x004052e5: mov    DWORD PTR [rsi+0x48],0x4
0x004052ec: jmp    0x140406069
0x004052f1: mov    ecx,DWORD PTR [rsi+0x4]
0x004052f4: mov    eax,ecx
0x004052f6: and    eax,0x3
0x004052f9: cmp    al,0x3
0x004052fb: jne    0x14040530c
0x004052fd: lea    rdx,[rip+0x122fd04]        # 0x141635008 ; literal="Stagnant salt water ["
0x00405304: mov    r8d,0x15
0x0040530a: jmp    0x140405341
0x0040530c: test   r13b,cl
0x0040530f: je     0x140405320
0x00405311: lea    rdx,[rip+0x122fd08]        # 0x141635020 ; literal="Stagnant water ["
0x00405318: mov    r8d,0x10
0x0040531e: jmp    0x140405341
0x00405320: test   r14b,cl
0x00405323: je     0x140405334
0x00405325: lea    rdx,[rip+0x122fcc4]        # 0x141634ff0 ; literal="Salt water ["
0x0040532c: mov    r8d,0xc
0x00405332: jmp    0x140405341
0x00405334: lea    rdx,[rip+0x122fcc5]        # 0x141635000 ; literal="Water ["
0x0040533b: mov    r8d,0x7
0x00405341: mov    rcx,rbx
0x00405344: call   0x14006f860
0x00405349: xorps  xmm0,xmm0
0x0040534c: movups XMMWORD PTR [rbp-0x38],xmm0
0x00405350: mov    QWORD PTR [rbp-0x28],r12
0x00405354: mov    eax,0xf
0x00405359: mov    QWORD PTR [rbp-0x20],rax
0x0040535d: mov    BYTE PTR [rbp-0x38],r12b
0x00405361: movsx  ecx,WORD PTR [rsi+0x8]
0x00405365: lea    rdx,[rbp-0x38]
0x00405369: call   0x140529db0
0x0040536e: lea    rdx,[rbp-0x38]
0x00405372: cmp    QWORD PTR [rbp-0x20],0xf
0x00405377: cmova  rdx,QWORD PTR [rbp-0x38]
0x0040537c: lea    rcx,[rsi+0x28]
0x00405380: mov    r8,QWORD PTR [rbp-0x28]
0x00405384: call   0x14006f9a0
0x00405389: lea    rcx,[rsi+0x28]
0x0040538d: mov    r8d,0x3
0x00405393: lea    rdx,[rip+0x122fcb2]        # 0x14163504c ; literal="/7]"
0x0040539a: call   0x14006f9a0
0x0040539f: mov    DWORD PTR [rsi+0x48],0x1
0x004053a6: mov    WORD PTR [rsi+0x4c],r13w
0x004053ab: mov    rdx,QWORD PTR [rbp-0x20]
0x004053af: cmp    rdx,0xf
0x004053b3: jbe    0x14040606e
0x004053b9: inc    rdx
0x004053bc: mov    rcx,QWORD PTR [rbp-0x38]
0x004053c0: mov    rax,rcx
0x004053c3: cmp    rdx,0x1000
0x004053ca: jb     0x1404053e5
0x004053cc: add    rdx,0x27
0x004053d0: mov    rcx,QWORD PTR [rcx-0x8]
0x004053d4: sub    rax,rcx
0x004053d7: add    rax,0xfffffffffffffff8
0x004053db: cmp    rax,0x1f
0x004053df: ja     0x140405fc6
0x004053e5: call   0x1415345f0
0x004053ea: jmp    0x14040606e
0x004053ef: mov    eax,DWORD PTR [rsi+0x4]
0x004053f2: and    eax,r13d
0x004053f5: mov    r9d,eax
0x004053f8: lea    r8,[rax+0x6]
0x004053fc: lea    rax,[rip+0x122fc31]        # 0x141635034 ; literal="Lava ["
0x00405403: lea    rdx,[rip+0x122fc46]        # 0x141635050 ; literal="Magma ["
0x0040540a: test   r9d,r9d
0x0040540d: cmove  rdx,rax
0x00405411: mov    rcx,rbx
0x00405414: call   0x14006f860
0x00405419: xorps  xmm0,xmm0
0x0040541c: movups XMMWORD PTR [rbp-0x58],xmm0
0x00405420: mov    QWORD PTR [rbp-0x48],r12
0x00405424: mov    eax,0xf
0x00405429: mov    QWORD PTR [rbp-0x40],rax
0x0040542d: mov    BYTE PTR [rbp-0x58],r12b
0x00405431: movsx  ecx,WORD PTR [rsi+0x8]
0x00405435: lea    rdx,[rbp-0x58]
0x00405439: call   0x140529db0
0x0040543e: lea    rdx,[rbp-0x58]
0x00405442: cmp    QWORD PTR [rbp-0x40],0xf
0x00405447: cmova  rdx,QWORD PTR [rbp-0x58]
0x0040544c: lea    rcx,[rsi+0x28]
0x00405450: mov    r8,QWORD PTR [rbp-0x48]
0x00405454: call   0x14006f9a0
0x00405459: lea    rcx,[rsi+0x28]
0x0040545d: mov    r8d,0x3
0x00405463: lea    rdx,[rip+0x122fbe2]        # 0x14163504c ; literal="/7]"
0x0040546a: call   0x14006f9a0
0x0040546f: mov    DWORD PTR [rsi+0x48],0x4
0x00405476: mov    WORD PTR [rsi+0x4c],r13w
0x0040547b: lea    rcx,[rbp-0x58]
0x0040547f: call   0x14006f7e0
0x00405484: jmp    0x14040606e
0x00405489: mov    eax,DWORD PTR [rip+0x1490dd9]        # 0x141896268
0x0040548f: test   eax,eax
0x00405491: jne    0x1404054ad
0x00405493: mov    r8d,0xb
0x00405499: lea    rdx,[rip+0x122fba0]        # 0x141635040 ; literal="Track/Spoor"
0x004054a0: mov    rcx,rbx
0x004054a3: call   0x14006f860
0x004054a8: jmp    0x140406062
0x004054ad: cmp    eax,r13d
0x004054b0: jne    0x140406062
0x004054b6: lea    rcx,[rsi+0x28]
0x004054ba: mov    r8d,0xd
0x004054c0: lea    rdx,[rip+0x1230101]        # 0x1416355c8 ; literal="Track/Spoor: "
0x004054c7: call   0x14006f860
0x004054cc: movzx  ecx,BYTE PTR [rsi+0x6]
0x004054d0: mov    ebx,0x3
0x004054d5: test   ecx,ecx
0x004054d7: je     0x140405fcd
0x004054dd: sub    ecx,r13d
0x004054e0: je     0x140405ae4
0x004054e6: sub    ecx,r13d
0x004054e9: je     0x14040550f
0x004054eb: cmp    ecx,r13d
0x004054ee: jne    0x140405aa8
0x004054f4: lea    rcx,[rsi+0x28]
0x004054f8: mov    r8d,0xe
0x004054fe: lea    rdx,[rip+0x12300eb]        # 0x1416355f0 ; literal="unintelligible"
0x00405505: call   0x14006f9a0
0x0040550a: jmp    0x140405aa8
0x0040550f: mov    r12d,DWORD PTR [rsi+0x8]
0x00405513: mov    DWORD PTR [rbp-0x80],r12d
0x00405517: mov    eax,DWORD PTR [rsi+0xc]
0x0040551a: mov    DWORD PTR [rbp-0x70],eax
0x0040551d: mov    eax,DWORD PTR [rsi+0x10]
0x00405520: mov    DWORD PTR [rbp-0x60],eax
0x00405523: mov    ebx,0x6
0x00405528: mov    r15d,0xffffffff
0x0040552e: mov    r14d,0xf
0x00405534: test   BYTE PTR [rsi+0x4],0x40
0x00405538: je     0x140405994
0x0040553e: movsx  rcx,WORD PTR [rsi+0x20]
0x00405543: movsx  r8d,WORD PTR [rsi+0x1e]
0x00405548: movsx  r9d,WORD PTR [rsi+0x1c]
0x0040554d: test   r9w,r9w
0x00405551: js     0x1404056a2
0x00405557: mov    eax,r9d
0x0040555a: cmp    r9d,DWORD PTR [rip+0x20dca6b]        # 0x1424e1fcc
0x00405561: jge    0x1404056a2
0x00405567: test   r8w,r8w
0x0040556b: js     0x1404056a2
0x00405571: mov    eax,r8d
0x00405574: cmp    r8d,DWORD PTR [rip+0x20dca55]        # 0x1424e1fd0
0x0040557b: jge    0x1404056a2
0x00405581: test   cx,cx
0x00405584: js     0x1404056a2
0x0040558a: mov    eax,ecx
0x0040558c: cmp    ecx,DWORD PTR [rip+0x20dca42]        # 0x1424e1fd4
0x00405592: jge    0x1404056a2
0x00405598: movzx  eax,r9w
0x0040559c: sar    ax,0x4
0x004055a0: movzx  edx,r8w
0x004055a4: sar    dx,0x4
0x004055a8: mov    r10,QWORD PTR [rip+0x20dc9e9]        # 0x1424e1f98
0x004055af: test   r10,r10
0x004055b2: je     0x1404056a2
0x004055b8: movsx  rax,ax
0x004055bc: movsx  rdx,dx
0x004055c0: mov    rax,QWORD PTR [r10+rax*8]
0x004055c4: mov    rax,QWORD PTR [rax+rdx*8]
0x004055c8: mov    rdi,QWORD PTR [rax+rcx*8]
0x004055cc: test   rdi,rdi
0x004055cf: je     0x1404056a2
0x004055d5: mov    r13d,r8d
0x004055d8: and    r13d,0x8000000f
0x004055df: jge    0x1404055eb
0x004055e1: dec    r13d
0x004055e4: or     r13d,0xfffffff0
0x004055e8: inc    r13d
0x004055eb: mov    r12d,r9d
0x004055ee: and    r12d,0x8000000f
0x004055f5: jge    0x140405601
0x004055f7: dec    r12d
0x004055fa: or     r12d,0xfffffff0
0x004055fe: inc    r12d
0x00405601: movzx  eax,r15w
0x00405605: mov    DWORD PTR [rsp+0x78],eax
0x00405609: xor    r8b,r8b
0x0040560c: mov    BYTE PTR [rsp+0x70],r8b
0x00405611: mov    rbx,QWORD PTR [rdi+0x8]
0x00405615: mov    rdi,QWORD PTR [rdi+0x10]
0x00405619: movzx  ecx,WORD PTR [rsp+0x70]
0x0040561e: mov    DWORD PTR [rsp+0x74],ecx
0x00405622: mov    r10d,DWORD PTR [rbp-0x80]
0x00405626: mov    DWORD PTR [rsp+0x7c],r10d
0x0040562b: nop    DWORD PTR [rax+rax*1+0x0]
0x00405630: cmp    rbx,rdi
0x00405633: jae    0x1404056c1
0x00405639: mov    r14,QWORD PTR [rbx]
0x0040563c: mov    rax,QWORD PTR [r14]
0x0040563f: mov    rcx,r14
0x00405642: call   QWORD PTR [rax]
0x00405644: cmp    ax,0x3
0x00405648: jne    0x140405693
0x0040564a: movzx  edx,WORD PTR [r14+0x10]
0x0040564f: cmp    dx,0x1
0x00405653: jne    0x140405693
0x00405655: movsx  rax,r12w
0x00405659: shl    rax,0x4
0x0040565d: movsx  rcx,r13w
0x00405661: add    rax,r14
0x00405664: movzx  r8d,BYTE PTR [rcx+rax*1+0x12]
0x0040566a: cmp    r8b,BYTE PTR [rsp+0x70]
0x0040566f: jbe    0x140405693
0x00405671: movzx  eax,WORD PTR [r14+0x8]
0x00405676: mov    DWORD PTR [rsp+0x78],eax
0x0040567a: mov    r10d,DWORD PTR [r14+0xc]
0x0040567e: mov    DWORD PTR [rsp+0x7c],r10d
0x00405683: mov    WORD PTR [rsp+0x74],dx
0x00405688: mov    BYTE PTR [rsp+0x70],r8b
0x0040568d: add    rbx,0x8
0x00405691: jmp    0x140405630
0x00405693: mov    r10d,DWORD PTR [rsp+0x7c]
0x00405698: mov    eax,DWORD PTR [rsp+0x78]
0x0040569c: add    rbx,0x8
0x004056a0: jmp    0x140405630
0x004056a2: movzx  r12d,WORD PTR [rsp+0x70]
0x004056a8: mov    DWORD PTR [rsp+0x74],r12d
0x004056ad: mov    r10d,DWORD PTR [rbp-0x80]
0x004056b1: mov    DWORD PTR [rsp+0x7c],r10d
0x004056b6: movzx  eax,WORD PTR [rsp+0x74]
0x004056bb: mov    DWORD PTR [rsp+0x78],eax
0x004056bf: jmp    0x1404056d7
0x004056c1: mov    r12d,DWORD PTR [rsp+0x74]
0x004056c6: mov    r13d,0x1
0x004056cc: mov    r14d,0xf
0x004056d2: mov    ebx,0x6
0x004056d7: cmp    ax,r15w
0x004056db: jne    0x1404056eb
0x004056dd: mov    eax,ebx
0x004056df: mov    DWORD PTR [rsp+0x78],ebx
0x004056e3: mov    r12d,r13d
0x004056e6: mov    DWORD PTR [rsp+0x74],r13d
0x004056eb: xorps  xmm0,xmm0
0x004056ee: movups XMMWORD PTR [rbp-0x38],xmm0
0x004056f2: mov    QWORD PTR [rbp-0x20],r14
0x004056f6: mov    QWORD PTR [rbp-0x28],0x0
0x004056fe: mov    BYTE PTR [rbp-0x38],0x0
0x00405702: mov    ecx,0xdb
0x00405707: sub    ax,cx
0x0040570a: mov    ecx,0xc7
0x0040570f: cmp    ax,cx
0x00405712: ja     0x14040588b
0x00405718: mov    r9,QWORD PTR [rip+0x20ee4f1]        # 0x1424f3c10
0x0040571f: mov    r11,QWORD PTR [rip+0x20ee4e2]        # 0x1424f3c08
0x00405726: sub    r9,r11
0x00405729: sar    r9,0x3
0x0040572d: test   r9,r9
0x00405730: je     0x14040588b
0x00405736: cmp    r10d,0xffffffff
0x0040573a: je     0x14040588b
0x00405740: xor    edx,edx
0x00405742: sub    r9d,0x1
0x00405746: js     0x14040588b
0x0040574c: nop    DWORD PTR [rax+0x0]
0x00405750: lea    ecx,[r9+rdx*1]
0x00405754: sar    ecx,1
0x00405756: movsxd rax,ecx
0x00405759: mov    rbx,QWORD PTR [r11+rax*8]
0x0040575d: cmp    DWORD PTR [rbx+0xe0],r10d
0x00405764: je     0x140405780
0x00405766: lea    eax,[rcx-0x1]
0x00405769: cmovle eax,r9d
0x0040576d: mov    r9d,eax
0x00405770: lea    eax,[rcx+0x1]
0x00405773: cmovle edx,eax
0x00405776: cmp    edx,r9d
0x00405779: jle    0x140405750
0x0040577b: jmp    0x14040588b
0x00405780: test   rbx,rbx
0x00405783: je     0x14040588b
0x00405789: cmp    BYTE PTR [rbx+0xaa],0x0
0x00405790: je     0x14040588b
0x00405796: xorps  xmm0,xmm0
0x00405799: movups XMMWORD PTR [rbp+0x68],xmm0
0x0040579d: xor    edi,edi
0x0040579f: mov    QWORD PTR [rbp+0x78],rdi
0x004057a3: mov    r12,r14
0x004057a6: mov    QWORD PTR [rbp+0x80],r14
0x004057ad: mov    BYTE PTR [rbp+0x68],dil
0x004057b1: mov    rax,QWORD PTR [rbx+0x130]
0x004057b8: test   rax,rax
0x004057bb: je     0x1404057e9
0x004057bd: mov    rcx,QWORD PTR [rax+0x58]
0x004057c1: test   rcx,rcx
0x004057c4: je     0x1404057e9
0x004057c6: mov    edx,DWORD PTR [rcx+0x30]
0x004057c9: cmp    edx,0xffffffff
0x004057cc: je     0x1404057e9
0x004057ce: lea    rcx,[rip+0x20dc403]        # 0x1424e1bd8
0x004057d5: call   0x140072500
0x004057da: test   rax,rax
0x004057dd: je     0x1404057e9
0x004057df: mov    rcx,rax
0x004057e2: call   0x140c37530
0x004057e7: jmp    0x1404057ed
0x004057e9: lea    rax,[rbx+0x38]
0x004057ed: test   rax,rax
0x004057f0: je     0x140405815
0x004057f2: cmp    BYTE PTR [rax+0x72],0x0
0x004057f6: je     0x140405815
0x004057f8: xor    r9d,r9d
0x004057fb: mov    r8b,0x1
0x004057fe: lea    rdx,[rbp+0x68]
0x00405802: mov    rcx,rax
0x00405805: call   0x140a91760
0x0040580a: mov    r12,QWORD PTR [rbp+0x80]
0x00405811: mov    rdi,QWORD PTR [rbp+0x78]
0x00405815: lea    rdx,[rbp+0x68]
0x00405819: cmp    r12,0xf
0x0040581d: cmova  rdx,QWORD PTR [rbp+0x68]
0x00405822: mov    r8,rdi
0x00405825: lea    rcx,[rbp-0x38]
0x00405829: call   0x14006f9a0
0x0040582e: mov    r8d,0x3
0x00405834: lea    rdx,[rip+0x11e331d]        # 0x1415e8b58 ; literal="'s "
0x0040583b: lea    rcx,[rbp-0x38]
0x0040583f: call   0x14006f9a0
0x00405844: nop
0x00405845: mov    rdx,QWORD PTR [rbp+0x80]
0x0040584c: cmp    rdx,0xf
0x00405850: jbe    0x140405886
0x00405852: inc    rdx
0x00405855: mov    rcx,QWORD PTR [rbp+0x68]
0x00405859: mov    rax,rcx
0x0040585c: cmp    rdx,0x1000
0x00405863: jb     0x140405881
0x00405865: add    rdx,0x27
0x00405869: mov    rcx,QWORD PTR [rcx-0x8]
0x0040586d: sub    rax,rcx
0x00405870: add    rax,0xfffffffffffffff8
0x00405874: cmp    rax,0x1f
0x00405878: jbe    0x140405881
0x0040587a: call   QWORD PTR [rip+0x11db220]        # 0x1415e0aa0
0x00405880: int3
0x00405881: call   0x1415345f0
0x00405886: mov    r12d,DWORD PTR [rsp+0x74]
0x0040588b: mov    r8d,DWORD PTR [rsp+0x7c]
0x00405890: movzx  edx,WORD PTR [rsp+0x78]
0x00405895: lea    rcx,[rip+0x1fc5b44]        # 0x1423cb3e0
0x0040589c: call   0x1414a8ce0
0x004058a1: mov    rbx,rax
0x004058a4: lea    rdi,[rip+0x11dde75]        # 0x1415e3720 ; literal=" "
0x004058ab: test   rax,rax
0x004058ae: je     0x140405909
0x004058b0: cmp    QWORD PTR [rax+0x530],0x0
0x004058b8: je     0x1404058e7
0x004058ba: lea    rdx,[rax+0x520]
0x004058c1: mov    r8,QWORD PTR [rdx+0x10]
0x004058c5: cmp    QWORD PTR [rdx+0x18],0xf
0x004058ca: jbe    0x1404058cf
0x004058cc: mov    rdx,QWORD PTR [rdx]
0x004058cf: lea    rcx,[rbp-0x38]
0x004058d3: call   0x14006f9a0
0x004058d8: mov    r8,r13
0x004058db: mov    rdx,rdi
0x004058de: lea    rcx,[rbp-0x38]
0x004058e2: call   0x14006f9a0
0x004058e7: movsx  rdx,r12w
0x004058eb: shl    rdx,0x5
0x004058ef: add    rdx,0x178
0x004058f6: add    rdx,rbx
0x004058f9: mov    r8,QWORD PTR [rdx+0x10]
0x004058fd: cmp    QWORD PTR [rdx+0x18],0xf
0x00405902: jbe    0x140405916
0x00405904: mov    rdx,QWORD PTR [rdx]
0x00405907: jmp    0x140405916
0x00405909: lea    rdx,[rip+0x137d1a0]        # 0x141782ab0 ; literal="unknown material"
0x00405910: mov    r8d,0x10
0x00405916: lea    rcx,[rbp-0x38]
0x0040591a: call   0x14006f9a0
0x0040591f: lea    rdx,[rbp-0x38]
0x00405923: cmp    QWORD PTR [rbp-0x20],0xf
0x00405928: cmova  rdx,QWORD PTR [rbp-0x38]
0x0040592d: lea    rcx,[rsi+0x28]
0x00405931: mov    r8,QWORD PTR [rbp-0x28]
0x00405935: call   0x14006f9a0
0x0040593a: lea    rcx,[rsi+0x28]
0x0040593e: mov    r8,r13
0x00405941: mov    rdx,rdi
0x00405944: call   0x14006f9a0
0x00405949: nop
0x0040594a: mov    rdx,QWORD PTR [rbp-0x20]
0x0040594e: cmp    rdx,0xf
0x00405952: jbe    0x140405988
0x00405954: inc    rdx
0x00405957: mov    rcx,QWORD PTR [rbp-0x38]
0x0040595b: mov    rax,rcx
0x0040595e: cmp    rdx,0x1000
0x00405965: jb     0x140405983
0x00405967: add    rdx,0x27
0x0040596b: mov    rcx,QWORD PTR [rcx-0x8]
0x0040596f: sub    rax,rcx
0x00405972: add    rax,0xfffffffffffffff8
0x00405976: cmp    rax,0x1f
0x0040597a: jbe    0x140405983
0x0040597c: call   QWORD PTR [rip+0x11db11e]        # 0x1415e0aa0
0x00405982: int3
0x00405983: call   0x1415345f0
0x00405988: mov    r12d,DWORD PTR [rbp-0x80]
0x0040598c: mov    eax,DWORD PTR [rbp-0x60]
0x0040598f: mov    ebx,0x6
0x00405994: test   al,0x1
0x00405996: je     0x1404059a4
0x00405998: mov    r8,rbx
0x0040599b: lea    rdx,[rip+0x122fc62]        # 0x141635604 ; literal="right "
0x004059a2: jmp    0x1404059b5
0x004059a4: test   al,0x2
0x004059a6: je     0x1404059be
0x004059a8: mov    r8d,0x5
0x004059ae: lea    rdx,[rip+0x122fc57]        # 0x14163560c ; literal="left "
0x004059b5: lea    rcx,[rsi+0x28]
0x004059b9: call   0x14006f9a0
0x004059be: xorps  xmm0,xmm0
0x004059c1: movups XMMWORD PTR [rbp-0x58],xmm0
0x004059c5: xor    eax,eax
0x004059c7: mov    QWORD PTR [rbp-0x48],rax
0x004059cb: mov    QWORD PTR [rbp-0x40],r14
0x004059cf: mov    BYTE PTR [rbp-0x58],al
0x004059d2: mov    r9d,r15d
0x004059d5: mov    DWORD PTR [rsp+0x68],eax
0x004059d9: mov    DWORD PTR [rsp+0x60],eax
0x004059dd: mov    BYTE PTR [rsp+0x58],al
0x004059e1: mov    DWORD PTR [rsp+0x50],r15d
0x004059e6: mov    DWORD PTR [rsp+0x48],r15d
0x004059eb: mov    QWORD PTR [rsp+0x40],rax
0x004059f0: mov    BYTE PTR [rsp+0x38],al
0x004059f4: mov    DWORD PTR [rsp+0x30],eax
0x004059f8: mov    DWORD PTR [rsp+0x28],r13d
0x004059fd: mov    DWORD PTR [rsp+0x20],r15d
0x00405a02: movzx  r8d,WORD PTR [rbp-0x70]
0x00405a07: movzx  edx,r12w
0x00405a0b: lea    rcx,[rbp-0x58]
0x00405a0f: call   0x140a7fc90
0x00405a14: lea    rdx,[rbp-0x58]
0x00405a18: cmp    QWORD PTR [rbp-0x40],0xf
0x00405a1d: cmova  rdx,QWORD PTR [rbp-0x58]
0x00405a22: lea    rcx,[rsi+0x28]
0x00405a26: mov    r8,QWORD PTR [rbp-0x48]
0x00405a2a: call   0x14006f9a0
0x00405a2f: lea    rcx,[rsi+0x28]
0x00405a33: test   BYTE PTR [rsi+0x4],0x40
0x00405a37: je     0x140405a45
0x00405a39: mov    r8,rbx
0x00405a3c: lea    rdx,[rip+0x122fb6d]        # 0x1416355b0 ; literal=" print"
0x00405a43: jmp    0x140405a52
0x00405a45: mov    r8d,0x8
0x00405a4b: lea    rdx,[rip+0x122fb66]        # 0x1416355b8 ; literal=" imprint"
0x00405a52: call   0x14006f9a0
0x00405a57: nop
0x00405a58: mov    rdx,QWORD PTR [rbp-0x40]
0x00405a5c: cmp    rdx,0xf
0x00405a60: jbe    0x140405a96
0x00405a62: inc    rdx
0x00405a65: mov    rcx,QWORD PTR [rbp-0x58]
0x00405a69: mov    rax,rcx
0x00405a6c: cmp    rdx,0x1000
0x00405a73: jb     0x140405a91
0x00405a75: add    rdx,0x27
0x00405a79: mov    rcx,QWORD PTR [rcx-0x8]
0x00405a7d: sub    rax,rcx
0x00405a80: add    rax,0xfffffffffffffff8
0x00405a84: cmp    rax,0x1f
0x00405a88: jbe    0x140405a91
0x00405a8a: call   QWORD PTR [rip+0x11db010]        # 0x1415e0aa0
0x00405a90: int3
0x00405a91: call   0x1415345f0
0x00405a96: mov    r14d,0x2
0x00405a9c: lea    r15,[rip+0xffffffffffbfa55d]        # 0x140000000
0x00405aa3: mov    ebx,0x3
0x00405aa8: lea    rcx,[rsi+0x28]
0x00405aac: cmp    QWORD PTR [rcx+0x10],0x32
0x00405ab1: jbe    0x140405abd
0x00405ab3: mov    edx,0x32
0x00405ab8: call   0x14052b330
0x00405abd: movzx  eax,WORD PTR [rsi+0x4]
0x00405ac1: test   al,0x2
0x00405ac3: je     0x140406046
0x00405ac9: and    eax,0x1c
0x00405acc: cdqe
0x00405ace: movzx  eax,BYTE PTR [r15+rax*1+0x40618c]
0x00405ad7: mov    ecx,DWORD PTR [r15+rax*4+0x406168]
0x00405adf: add    rcx,r15
0x00405ae2: jmp    rcx
0x00405ae4: movsxd rax,DWORD PTR [rsi+0xc]
0x00405ae8: lea    rcx,[rax*4+0x0]
0x00405af0: mov    rax,QWORD PTR [rip+0x20e0e81]        # 0x1424e6978
0x00405af7: movsxd rdi,DWORD PTR [rcx+rax*1]
0x00405afb: mov    rax,QWORD PTR [rip+0x20e0e8e]        # 0x1424e6990
0x00405b02: movsxd rdx,DWORD PTR [rcx+rax*1]
0x00405b06: movzx  eax,WORD PTR [rsi+0x10]
0x00405b0a: mov    WORD PTR [rsp+0x74],ax
0x00405b0f: mov    rcx,QWORD PTR [rip+0x20e0e4a]        # 0x1424e6960
0x00405b16: mov    r8,QWORD PTR [rip+0x20e0e3b]        # 0x1424e6958
0x00405b1d: test   di,di
0x00405b20: js     0x140405b66
0x00405b22: movsx  r9,di
0x00405b26: mov    rax,rcx
0x00405b29: sub    rax,r8
0x00405b2c: sar    rax,0x3
0x00405b30: cmp    r9,rax
0x00405b33: jae    0x140405b66
0x00405b35: test   dx,dx
0x00405b38: js     0x140405b66
0x00405b3a: mov    rax,QWORD PTR [r8+r9*8]
0x00405b3e: mov    r9,QWORD PTR [rax+0x178]
0x00405b45: movsx  r10,dx
0x00405b49: mov    rax,QWORD PTR [rax+0x180]
0x00405b50: sub    rax,r9
0x00405b53: sar    rax,0x3
0x00405b57: cmp    r10,rax
0x00405b5a: jae    0x140405b66
0x00405b5c: mov    rax,QWORD PTR [r9+r10*8]
0x00405b60: mov    QWORD PTR [rbp-0x70],rax
0x00405b64: jmp    0x140405b6a
0x00405b66: mov    QWORD PTR [rbp-0x70],r12
0x00405b6a: xorps  xmm0,xmm0
0x00405b6d: movups XMMWORD PTR [rbp-0x18],xmm0
0x00405b71: mov    ebx,0xf
0x00405b76: mov    QWORD PTR [rbp+0x0],rbx
0x00405b7a: mov    r9,r12
0x00405b7d: mov    QWORD PTR [rbp-0x8],r12
0x00405b81: mov    BYTE PTR [rbp-0x18],r9b
0x00405b85: cmp    dx,0xffff
0x00405b89: je     0x140405c12
0x00405b8f: test   di,di
0x00405b92: js     0x140405c53
0x00405b98: movzx  r10d,di
0x00405b9c: mov    rax,rcx
0x00405b9f: sub    rax,r8
0x00405ba2: sar    rax,0x3
0x00405ba6: cmp    r10,rax
0x00405ba9: jae    0x140405c17
0x00405bab: test   dx,dx
0x00405bae: js     0x140405c17
0x00405bb0: mov    rax,QWORD PTR [r8+r10*8]
0x00405bb4: mov    r10,QWORD PTR [rax+0x178]
0x00405bbb: movsx  rdx,dx
0x00405bbf: mov    rax,QWORD PTR [rax+0x180]
0x00405bc6: sub    rax,r10
0x00405bc9: sar    rax,0x3
0x00405bcd: cmp    rdx,rax
0x00405bd0: jae    0x140405c17
0x00405bd2: mov    rdx,QWORD PTR [r10+rdx*8]
0x00405bd6: add    rdx,0x20
0x00405bda: lea    rax,[rbp-0x18]
0x00405bde: cmp    rax,rdx
0x00405be1: je     0x140405c17
0x00405be3: mov    r8,QWORD PTR [rdx+0x10]
0x00405be7: cmp    QWORD PTR [rdx+0x18],rbx
0x00405beb: jbe    0x140405bf0
0x00405bed: mov    rdx,QWORD PTR [rdx]
0x00405bf0: lea    rcx,[rbp-0x18]
0x00405bf4: call   0x14006f860
0x00405bf9: mov    r9,QWORD PTR [rbp-0x8]
0x00405bfd: test   r9,r9
0x00405c00: jne    0x140405c53
0x00405c02: mov    rcx,QWORD PTR [rip+0x20e0d57]        # 0x1424e6960
0x00405c09: mov    r8,QWORD PTR [rip+0x20e0d48]        # 0x1424e6958
0x00405c10: jmp    0x140405c17
0x00405c12: test   di,di
0x00405c15: js     0x140405c53
0x00405c17: movsx  rdx,di
0x00405c1b: sub    rcx,r8
0x00405c1e: sar    rcx,0x3
0x00405c22: cmp    rdx,rcx
0x00405c25: jae    0x140405c53
0x00405c27: mov    rdx,QWORD PTR [r8+rdx*8]
0x00405c2b: add    rdx,0x20
0x00405c2f: lea    rax,[rbp-0x18]
0x00405c33: cmp    rax,rdx
0x00405c36: je     0x140405c53
0x00405c38: mov    r8,QWORD PTR [rdx+0x10]
0x00405c3c: cmp    QWORD PTR [rdx+0x18],0xf
0x00405c41: jbe    0x140405c46
0x00405c43: mov    rdx,QWORD PTR [rdx]
0x00405c46: lea    rcx,[rbp-0x18]
0x00405c4a: call   0x14006f860
0x00405c4f: mov    r9,QWORD PTR [rbp-0x8]
0x00405c53: lea    rdx,[rbp-0x18]
0x00405c57: cmp    QWORD PTR [rbp+0x0],0xf
0x00405c5c: cmova  rdx,QWORD PTR [rbp-0x18]
0x00405c61: lea    rcx,[rsi+0x28]
0x00405c65: mov    r8,r9
0x00405c68: call   0x14006f9a0
0x00405c6d: xor    r14b,r14b
0x00405c70: mov    r12d,0x6
0x00405c76: lea    r11,[rip+0x11e2edb]        # 0x1415e8b58 ; literal="'s "
0x00405c7d: test   BYTE PTR [rsi+0x4],0x40
0x00405c81: je     0x140405e8e
0x00405c87: movsx  rcx,WORD PTR [rsi+0x20]
0x00405c8c: movsx  r8d,WORD PTR [rsi+0x1e]
0x00405c91: movsx  r9d,WORD PTR [rsi+0x1c]
0x00405c96: test   r9w,r9w
0x00405c9a: js     0x140405dd9
0x00405ca0: cmp    r9d,DWORD PTR [rip+0x20dc325]        # 0x1424e1fcc
0x00405ca7: jge    0x140405dd9
0x00405cad: test   r8w,r8w
0x00405cb1: js     0x140405dd9
0x00405cb7: cmp    r8d,DWORD PTR [rip+0x20dc312]        # 0x1424e1fd0
0x00405cbe: jge    0x140405dd9
0x00405cc4: test   cx,cx
0x00405cc7: js     0x140405dd9
0x00405ccd: cmp    ecx,DWORD PTR [rip+0x20dc301]        # 0x1424e1fd4
0x00405cd3: jge    0x140405dd9
0x00405cd9: movzx  eax,r9w
0x00405cdd: sar    ax,0x4
0x00405ce1: movzx  edx,r8w
0x00405ce5: sar    dx,0x4
0x00405ce9: mov    r10,QWORD PTR [rip+0x20dc2a8]        # 0x1424e1f98
0x00405cf0: test   r10,r10
0x00405cf3: je     0x140405dd9
0x00405cf9: movsx  rax,ax
0x00405cfd: movsx  rdx,dx
0x00405d01: mov    rax,QWORD PTR [r10+rax*8]
0x00405d05: mov    rax,QWORD PTR [rax+rdx*8]
0x00405d09: mov    rdi,QWORD PTR [rax+rcx*8]
0x00405d0d: test   rdi,rdi
0x00405d10: je     0x140405dd9
0x00405d16: mov    r13d,r8d
0x00405d19: and    r13d,0x8000000f
0x00405d20: jge    0x140405d2c
0x00405d22: dec    r13d
0x00405d25: or     r13d,0xfffffff0
0x00405d29: inc    r13d
0x00405d2c: mov    r12d,r9d
0x00405d2f: and    r12d,0x8000000f
0x00405d36: jge    0x140405d42
0x00405d38: dec    r12d
0x00405d3b: or     r12d,0xfffffff0
0x00405d3f: inc    r12d
0x00405d42: mov    r15d,0xffffffff
0x00405d48: xor    r8b,r8b
0x00405d4b: mov    BYTE PTR [rsp+0x70],r8b
0x00405d50: mov    rbx,QWORD PTR [rdi+0x8]
0x00405d54: mov    rdi,QWORD PTR [rdi+0x10]
0x00405d58: movzx  r14d,WORD PTR [rsp+0x70]
0x00405d5e: mov    DWORD PTR [rsp+0x7c],r14d
0x00405d63: mov    eax,DWORD PTR [rbp-0x70]
0x00405d66: mov    DWORD PTR [rsp+0x78],eax
0x00405d6a: nop    WORD PTR [rax+rax*1+0x0]
0x00405d70: cmp    rbx,rdi
0x00405d73: jae    0x140405dea
0x00405d75: mov    r14,QWORD PTR [rbx]
0x00405d78: mov    rax,QWORD PTR [r14]
0x00405d7b: mov    rcx,r14
0x00405d7e: call   QWORD PTR [rax]
0x00405d80: cmp    ax,0x3
0x00405d84: jne    0x140405dce
0x00405d86: movzx  edx,WORD PTR [r14+0x10]
0x00405d8b: cmp    dx,0x1
0x00405d8f: jne    0x140405dce
0x00405d91: movsx  rax,r12w
0x00405d95: shl    rax,0x4
0x00405d99: movsx  rcx,r13w
0x00405d9d: add    rax,r14
0x00405da0: movzx  r8d,BYTE PTR [rcx+rax*1+0x12]
0x00405da6: cmp    r8b,BYTE PTR [rsp+0x70]
0x00405dab: jbe    0x140405dce
0x00405dad: movzx  r15d,WORD PTR [r14+0x8]
0x00405db2: mov    eax,DWORD PTR [r14+0xc]
0x00405db6: mov    DWORD PTR [rsp+0x78],eax
0x00405dba: movzx  r14d,dx
0x00405dbe: mov    DWORD PTR [rsp+0x7c],r14d
0x00405dc3: mov    BYTE PTR [rsp+0x70],r8b
0x00405dc8: add    rbx,0x8
0x00405dcc: jmp    0x140405d70
0x00405dce: mov    r14d,DWORD PTR [rsp+0x7c]
0x00405dd3: add    rbx,0x8
0x00405dd7: jmp    0x140405d70
0x00405dd9: movzx  r14d,WORD PTR [rsp+0x70]
0x00405ddf: mov    edi,DWORD PTR [rbp-0x70]
0x00405de2: movzx  r15d,WORD PTR [rsp+0x74]
0x00405de8: jmp    0x140405e06
0x00405dea: lea    r11,[rip+0x11e2d67]        # 0x1415e8b58 ; literal="'s "
0x00405df1: mov    r13d,0x1
0x00405df7: mov    r12d,0x6
0x00405dfd: mov    edi,DWORD PTR [rsp+0x78]
0x00405e01: mov    ebx,0xf
0x00405e06: cmp    r15w,0xffff
0x00405e0b: jne    0x140405e14
0x00405e0d: movzx  r15d,r12w
0x00405e11: mov    r14d,r13d
0x00405e14: lea    rcx,[rsi+0x28]
0x00405e18: mov    r8d,0x3
0x00405e1e: mov    rdx,r11
0x00405e21: call   0x14006f9a0
0x00405e26: xorps  xmm0,xmm0
0x00405e29: movups XMMWORD PTR [rbp-0x58],xmm0
0x00405e2d: xor    eax,eax
0x00405e2f: mov    QWORD PTR [rbp-0x48],rax
0x00405e33: mov    QWORD PTR [rbp-0x40],rbx
0x00405e37: mov    BYTE PTR [rbp-0x58],al
0x00405e3a: mov    WORD PTR [rsp+0x30],r14w
0x00405e40: mov    BYTE PTR [rsp+0x28],0x1
0x00405e45: mov    DWORD PTR [rsp+0x20],eax
0x00405e49: mov    r9d,edi
0x00405e4c: movzx  r8d,r15w
0x00405e50: lea    rdx,[rbp-0x58]
0x00405e54: lea    rcx,[rip+0x1fc5585]        # 0x1423cb3e0
0x00405e5b: call   0x1414cc890
0x00405e60: lea    rdx,[rbp-0x58]
0x00405e64: cmp    QWORD PTR [rbp-0x40],0xf
0x00405e69: cmova  rdx,QWORD PTR [rbp-0x58]
0x00405e6e: lea    rcx,[rsi+0x28]
0x00405e72: mov    r8,QWORD PTR [rbp-0x48]
0x00405e76: call   0x14006f9a0
0x00405e7b: mov    r14b,0x1
0x00405e7e: lea    rcx,[rbp-0x58]
0x00405e82: call   0x14006f7e0
0x00405e87: lea    r11,[rip+0x11e2cca]        # 0x1415e8b58 ; literal="'s "
0x00405e8e: movzx  eax,WORD PTR [rsp+0x74]
0x00405e93: test   ax,ax
0x00405e96: js     0x140405f5f
0x00405e9c: mov    r15,QWORD PTR [rbp-0x70]
0x00405ea0: mov    rcx,QWORD PTR [r15+0x6c0]
0x00405ea7: movsx  rdx,ax
0x00405eab: mov    rax,QWORD PTR [r15+0x6c8]
0x00405eb2: sub    rax,rcx
0x00405eb5: sar    rax,0x3
0x00405eb9: cmp    rdx,rax
0x00405ebc: jae    0x140405f5f
0x00405ec2: lea    rbx,[rdx*8+0x0]
0x00405eca: mov    rcx,QWORD PTR [rbx+rcx*1]
0x00405ece: mov    rax,QWORD PTR [rcx+0x98]
0x00405ed5: sub    rax,QWORD PTR [rcx+0x90]
0x00405edc: sar    rax,0x3
0x00405ee0: test   rax,rax
0x00405ee3: je     0x140405f5f
0x00405ee5: movzx  r8d,r14b
0x00405ee9: xor    r8,0x1
0x00405eed: lea    r8,[r8*2+0x1]
0x00405ef5: lea    rdi,[rip+0x11dd824]        # 0x1415e3720 ; literal=" "
0x00405efc: test   r14b,r14b
0x00405eff: cmovne r11,rdi
0x00405f03: lea    rcx,[rsi+0x28]
0x00405f07: mov    rdx,r11
0x00405f0a: call   0x14006f9a0
0x00405f0f: mov    rax,QWORD PTR [r15+0x6c0]
0x00405f16: mov    rax,QWORD PTR [rax+rbx*1]
0x00405f1a: mov    rax,QWORD PTR [rax+0x90]
0x00405f21: mov    rdx,QWORD PTR [rax]
0x00405f24: lea    rax,[rbp-0x18]
0x00405f28: cmp    rax,rdx
0x00405f2b: je     0x140405f44
0x00405f2d: mov    r8,QWORD PTR [rdx+0x10]
0x00405f31: cmp    QWORD PTR [rdx+0x18],0xf
0x00405f36: jbe    0x140405f3b
0x00405f38: mov    rdx,QWORD PTR [rdx]
0x00405f3b: lea    rcx,[rbp-0x18]
0x00405f3f: call   0x14006f860
0x00405f44: lea    rdx,[rbp-0x18]
0x00405f48: cmp    QWORD PTR [rbp+0x0],0xf
0x00405f4d: cmova  rdx,QWORD PTR [rbp-0x18]
0x00405f52: lea    rcx,[rsi+0x28]
0x00405f56: mov    r8,QWORD PTR [rbp-0x8]
0x00405f5a: call   0x14006f9a0
0x00405f5f: lea    rcx,[rsi+0x28]
0x00405f63: test   BYTE PTR [rsi+0x4],0x40
0x00405f67: je     0x140405f75
0x00405f69: mov    r8,r12
0x00405f6c: lea    rdx,[rip+0x122f63d]        # 0x1416355b0 ; literal=" print"
0x00405f73: jmp    0x140405f82
0x00405f75: mov    r8d,0x8
0x00405f7b: lea    rdx,[rip+0x122f636]        # 0x1416355b8 ; literal=" imprint"
0x00405f82: call   0x14006f9a0
0x00405f87: nop
0x00405f88: mov    rdx,QWORD PTR [rbp+0x0]
0x00405f8c: cmp    rdx,0xf
0x00405f90: jbe    0x140405a96
0x00405f96: inc    rdx
0x00405f99: mov    rcx,QWORD PTR [rbp-0x18]
0x00405f9d: mov    rax,rcx
0x00405fa0: cmp    rdx,0x1000
0x00405fa7: jb     0x140405a91
0x00405fad: add    rdx,0x27
0x00405fb1: mov    rcx,QWORD PTR [rcx-0x8]
0x00405fb5: sub    rax,rcx
0x00405fb8: add    rax,0xfffffffffffffff8
0x00405fbc: cmp    rax,0x1f
0x00405fc0: jbe    0x140405a91
0x00405fc6: call   QWORD PTR [rip+0x11daad4]        # 0x1415e0aa0
0x00405fcc: int3
0x00405fcd: lea    rcx,[rsi+0x28]
0x00405fd1: mov    r8d,0x11
0x00405fd7: lea    rdx,[rip+0x122f5fa]        # 0x1416355d8 ; literal="broken vegetation"
0x00405fde: call   0x14006f9a0
0x00405fe3: jmp    0x140405aa8
0x00405fe8: mov    r8,r14
0x00405feb: lea    rdx,[rip+0x122f60e]        # 0x141635600 ; literal="/N"
0x00405ff2: jmp    0x14040603d
0x00405ff4: mov    r8,r14
0x00405ff7: lea    rdx,[rip+0x122f582]        # 0x141635580 ; literal="/S"
0x00405ffe: jmp    0x14040603d
0x00406000: mov    r8,r14
0x00406003: lea    rdx,[rip+0x122f57a]        # 0x141635584 ; literal="/E"
0x0040600a: jmp    0x14040603d
0x0040600c: mov    r8,r14
0x0040600f: lea    rdx,[rip+0x122f562]        # 0x141635578 ; literal="/W"
0x00406016: jmp    0x14040603d
0x00406018: lea    rdx,[rip+0x122f55d]        # 0x14163557c ; literal="/NE"
0x0040601f: jmp    0x14040603a
0x00406021: lea    rdx,[rip+0x122f580]        # 0x1416355a8 ; literal="/NW"
0x00406028: jmp    0x14040603a
0x0040602a: lea    rdx,[rip+0x122f57b]        # 0x1416355ac ; literal="/SE"
0x00406031: jmp    0x14040603a
0x00406033: lea    rdx,[rip+0x122f54e]        # 0x141635588 ; literal="/SW"
0x0040603a: mov    r8,rbx
0x0040603d: lea    rcx,[rsi+0x28]
0x00406041: call   0x14006f9a0
0x00406046: test   BYTE PTR [rsi+0x4],0x20
0x0040604a: je     0x140406062
0x0040604c: lea    rcx,[rsi+0x28]
0x00406050: mov    r8d,0x15
0x00406056: lea    rdx,[rip+0x122f533]        # 0x141635590 ; literal="/yours or companion's"
0x0040605d: call   0x14006f9a0
0x00406062: mov    DWORD PTR [rsi+0x48],0x2
0x00406069: mov    WORD PTR [rsi+0x4c],r13w
0x0040606e: mov    rcx,QWORD PTR [rbp+0x88]
0x00406075: xor    rcx,rsp
0x00406078: call   0x1415345d0
0x0040607d: lea    r11,[rsp+0x190]
0x00406085: mov    rbx,QWORD PTR [r11+0x38]
0x00406089: mov    rsi,QWORD PTR [r11+0x40]
0x0040608d: mov    rdi,QWORD PTR [r11+0x48]
0x00406091: mov    rsp,r11
0x00406094: pop    r15
0x00406096: pop    r14
0x00406098: pop    r13
0x0040609a: pop    r12
0x0040609c: pop    rbp
0x0040609d: ret
