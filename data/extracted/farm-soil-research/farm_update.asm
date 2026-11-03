0x1405702b0: rex push rbx
0x1405702b2: push   rbp
0x1405702b3: push   rsi
0x1405702b4: push   rdi
0x1405702b5: push   r12
0x1405702b7: push   r13
0x1405702b9: push   r14
0x1405702bb: push   r15
0x1405702bd: sub    rsp,0x48
0x1405702c1: mov    rsi,rcx
0x1405702c4: lea    r13,[rcx+0x58]
0x1405702c8: mov    r8,QWORD PTR [r13+0x0]
0x1405702cc: mov    rdx,QWORD PTR [r13+0x8]
0x1405702d0: sub    rdx,r8
0x1405702d3: sar    rdx,0x3
0x1405702d7: sub    dx,0x1
0x1405702db: js     0x1405702fd
0x1405702dd: nop    DWORD PTR [rax]
0x1405702e0: movsx  rax,dx
0x1405702e4: mov    rcx,QWORD PTR [r8+rax*8]
0x1405702e8: cmp    WORD PTR [rcx+0x14],0x58
0x1405702ed: je     0x140570464
0x1405702f3: sub    dx,0x1
0x1405702f7: jns    0x1405702e0
0x1405702f9: lea    r13,[rsi+0x58]
0x1405702fd: xor    r14b,r14b
0x140570300: mov    BYTE PTR [rsp+0x90],r14b
0x140570308: sub    WORD PTR [rsi+0x164],0x1
0x140570310: jns    0x14057039d
0x140570316: movsx  edi,WORD PTR [rsi+0x8]
0x14057031a: mov    ebp,edi
0x14057031c: cmp    edi,DWORD PTR [rsi+0x14]
0x14057031f: jg     0x140570394
0x140570321: movsx  ebx,WORD PTR [rsi+0xc]
0x140570325: mov    edx,ebx
0x140570327: cmp    ebx,DWORD PTR [rsi+0x18]
0x14057032a: jg     0x140570385
0x14057032c: nop    DWORD PTR [rax+0x0]
0x140570330: mov    r8,QWORD PTR [rsi+0x30]
0x140570334: test   r8,r8
0x140570337: je     0x140570355
0x140570339: mov    eax,DWORD PTR [rsi+0x14]
0x14057033c: sub    eax,DWORD PTR [rsi+0x8]
0x14057033f: inc    eax
0x140570341: sub    edx,DWORD PTR [rsi+0xc]
0x140570344: imul   eax,edx
0x140570347: sub    eax,DWORD PTR [rsi+0x8]
0x14057034a: add    eax,ebp
0x14057034c: cdqe
0x14057034e: cmp    BYTE PTR [rax+r8*1],0x0
0x140570353: je     0x14057037a
0x140570355: mov    DWORD PTR [rsp+0x28],0x1
0x14057035d: mov    BYTE PTR [rsp+0x20],0x1
0x140570362: movzx  r9d,WORD PTR [rsi+0x20]
0x140570367: movzx  r8d,bx
0x14057036b: movzx  edx,di
0x14057036e: lea    rcx,[rip+0x1e6117b]        # 0x1423d14f0
0x140570375: call   0x1414c45a0
0x14057037a: inc    bx
0x14057037d: movsx  edx,bx
0x140570380: cmp    edx,DWORD PTR [rsi+0x18]
0x140570383: jle    0x140570330
0x140570385: inc    di
0x140570388: movsx  ebp,di
0x14057038b: cmp    ebp,DWORD PTR [rsi+0x14]
0x14057038e: jle    0x140570321
0x140570390: lea    r13,[rsi+0x58]
0x140570394: mov    WORD PTR [rsi+0x164],0x1f4
0x14057039d: mov    eax,0x51eb851f
0x1405703a2: imul   DWORD PTR [rip+0x1e17c1c]        # 0x142387fc4
0x1405703a8: sar    edx,0x5
0x1405703ab: mov    eax,edx
0x1405703ad: shr    eax,0x1f
0x1405703b0: add    edx,eax
0x1405703b2: imul   eax,edx,0x64
0x1405703b5: cmp    DWORD PTR [rip+0x1e17c09],eax        # 0x142387fc4
0x1405703bb: jne    0x1405713e2
0x1405703c1: mov    rax,QWORD PTR [rsi+0x130]
0x1405703c8: sub    rax,QWORD PTR [rsi+0x128]
0x1405703cf: sar    rax,0x3
0x1405703d3: xor    r15d,r15d
0x1405703d6: sub    eax,0x1
0x1405703d9: movsxd rbx,eax
0x1405703dc: mov    QWORD PTR [rsp+0xa0],rbx
0x1405703e4: js     0x140570d01
0x1405703ea: mov    ebp,0x5d
0x1405703ef: nop
0x1405703f0: mov    rdx,QWORD PTR [rsi+0x128]
0x1405703f7: mov    rax,QWORD PTR [rdx+rbx*8]
0x1405703fb: mov    rcx,QWORD PTR [rax]
0x1405703fe: test   BYTE PTR [rcx+0x10],0x20
0x140570402: je     0x140570cdd
0x140570408: mov    rdi,rcx
0x14057040b: mov    rax,QWORD PTR [rcx]
0x14057040e: call   QWORD PTR [rax]
0x140570410: mov    rdx,QWORD PTR [rdi]
0x140570413: mov    rcx,rdi
0x140570416: cmp    ax,0x35
0x14057041a: jne    0x140570add
0x140570420: call   QWORD PTR [rdx+0x58]
0x140570423: movsx  r12,ax
0x140570427: cmp    r12w,0xffff
0x14057042c: je     0x140570cdd
0x140570432: inc    DWORD PTR [rdi+0xc0]
0x140570438: test   r12w,r12w
0x14057043c: js     0x140570470
0x14057043e: mov    rax,QWORD PTR [rip+0x1f7c4bb]        # 0x1424ec900
0x140570445: mov    rdx,QWORD PTR [rip+0x1f7c4ac]        # 0x1424ec8f8
0x14057044c: sub    rax,rdx
0x14057044f: sar    rax,0x3
0x140570453: cmp    r12,rax
0x140570456: jae    0x140570470
0x140570458: mov    rax,QWORD PTR [rdx+r12*8]
0x14057045c: mov    ebx,DWORD PTR [rax+0x218]
0x140570462: jmp    0x140570473
0x140570464: mov    r14b,0x1
0x140570467: lea    r13,[rsi+0x58]
0x14057046b: jmp    0x140570300
0x140570470: mov    ebx,r15d
0x140570473: lea    rdx,[rsp+0x98]
0x14057047b: movzx  ecx,r12w
0x14057047f: call   0x140aae1a0
0x140570484: movsx  rcx,BYTE PTR [rip+0x1366a82]        # 0x1418d6f0e
0x14057048c: cmp    BYTE PTR [rsp+rcx*1+0x98],0x0
0x140570494: je     0x140570ab0
0x14057049a: mov    DWORD PTR [rsp+0x20],r12d
0x14057049f: movzx  r9d,WORD PTR [rdi+0xc]
0x1405704a4: movzx  r8d,WORD PTR [rdi+0xa]
0x1405704a9: movzx  edx,WORD PTR [rdi+0x8]
0x1405704ad: lea    rcx,[rip+0x1e6103c]        # 0x1423d14f0
0x1405704b4: call   0x1414b1520
0x1405704b9: test   al,al
0x1405704bb: je     0x140570aa9
0x1405704c1: cmp    DWORD PTR [rdi+0xc0],ebx
0x1405704c7: jl     0x140570cd5
0x1405704cd: mov    ebx,0x1
0x1405704d2: lea    r14,[rsi+0x15c]
0x1405704d9: mov    ecx,DWORD PTR [r14]
0x1405704dc: test   ecx,ecx
0x1405704de: jle    0x1405705e9
0x1405704e4: mov    r15,r14
0x1405704e7: mov    eax,DWORD PTR [rsi+0x160]
0x1405704ed: cdq
0x1405704ee: and    edx,0x3
0x1405704f1: add    eax,edx
0x1405704f3: sar    eax,0x2
0x1405704f6: cmp    ecx,eax
0x1405704f8: jl     0x140570527
0x1405704fa: call   0x140eb68b0
0x1405704ff: mov    ebx,eax
0x140570501: mov    eax,0x3
0x140570506: mul    ebx
0x140570508: mov    eax,ebx
0x14057050a: sub    eax,edx
0x14057050c: shr    eax,1
0x14057050e: add    eax,edx
0x140570510: shr    eax,0x1e
0x140570513: imul   eax,eax,0x80000001
0x140570519: add    ebx,eax
0x14057051b: shr    ebx,0x1e
0x14057051e: inc    ebx
0x140570520: lea    r15,[rsi+0x15c]
0x140570527: mov    rbp,r14
0x14057052a: mov    eax,DWORD PTR [rsi+0x160]
0x140570530: cdq
0x140570531: sub    eax,edx
0x140570533: sar    eax,1
0x140570535: cmp    DWORD PTR [r14],eax
0x140570538: jl     0x140570569
0x14057053a: call   0x140eb68b0
0x14057053f: mov    r8d,eax
0x140570542: mov    eax,0x3
0x140570547: mul    r8d
0x14057054a: mov    ecx,r8d
0x14057054d: sub    ecx,edx
0x14057054f: shr    ecx,1
0x140570551: add    ecx,edx
0x140570553: shr    ecx,0x1e
0x140570556: imul   ecx,ecx,0x7fffffff
0x14057055c: sub    r8d,ecx
0x14057055f: shr    r8d,0x1e
0x140570563: add    ebx,r8d
0x140570566: mov    rbp,r15
0x140570569: mov    eax,DWORD PTR [rsi+0x160]
0x14057056f: lea    eax,[rax+rax*2]
0x140570572: cdq
0x140570573: and    edx,0x3
0x140570576: add    eax,edx
0x140570578: sar    eax,0x2
0x14057057b: cmp    DWORD PTR [r14],eax
0x14057057e: jl     0x1405705af
0x140570580: call   0x140eb68b0
0x140570585: mov    r8d,eax
0x140570588: mov    eax,0x3
0x14057058d: mul    r8d
0x140570590: mov    ecx,r8d
0x140570593: sub    ecx,edx
0x140570595: shr    ecx,1
0x140570597: add    ecx,edx
0x140570599: shr    ecx,0x1e
0x14057059c: imul   ecx,ecx,0x80000001
0x1405705a2: add    r8d,ecx
0x1405705a5: shr    r8d,0x1e
0x1405705a9: add    ebx,r8d
0x1405705ac: mov    r14,rbp
0x1405705af: mov    eax,DWORD PTR [rsi+0x160]
0x1405705b5: cmp    DWORD PTR [r14],eax
0x1405705b8: jl     0x1405705e6
0x1405705ba: call   0x140eb68b0
0x1405705bf: mov    r8d,eax
0x1405705c2: mov    eax,0x3
0x1405705c7: mul    r8d
0x1405705ca: mov    ecx,r8d
0x1405705cd: sub    ecx,edx
0x1405705cf: shr    ecx,1
0x1405705d1: add    ecx,edx
0x1405705d3: shr    ecx,0x1e
0x1405705d6: imul   ecx,ecx,0x80000001
0x1405705dc: add    r8d,ecx
0x1405705df: shr    r8d,0x1e
0x1405705e3: add    ebx,r8d
0x1405705e6: xor    r15d,r15d
0x1405705e9: movsx  r14d,WORD PTR [rdi+0xc4]
0x1405705f1: call   0x140eb68b0
0x1405705f6: mov    r8d,eax
0x1405705f9: mov    eax,0x3
0x1405705fe: mul    r8d
0x140570601: mov    ecx,r8d
0x140570604: sub    ecx,edx
0x140570606: shr    ecx,1
0x140570608: add    ecx,edx
0x14057060a: shr    ecx,0x1e
0x14057060d: imul   eax,ecx,0x7fffffff
0x140570613: sub    r8d,eax
0x140570616: mov    eax,0x4fffffff
0x14057061b: mul    r8d
0x14057061e: shr    edx,0x1b
0x140570621: cmp    edx,r14d
0x140570624: jge    0x140570652
0x140570626: call   0x140eb68b0
0x14057062b: mov    r8d,eax
0x14057062e: mov    eax,0x3
0x140570633: mul    r8d
0x140570636: mov    ecx,r8d
0x140570639: sub    ecx,edx
0x14057063b: shr    ecx,1
0x14057063d: add    ecx,edx
0x14057063f: shr    ecx,0x1e
0x140570642: imul   ecx,ecx,0x7fffffff
0x140570648: sub    r8d,ecx
0x14057064b: shr    r8d,0x1e
0x14057064f: add    ebx,r8d
0x140570652: call   0x140eb68b0
0x140570657: mov    r8d,eax
0x14057065a: mov    eax,0x3
0x14057065f: mul    r8d
0x140570662: mov    ecx,r8d
0x140570665: sub    ecx,edx
0x140570667: shr    ecx,1
0x140570669: add    ecx,edx
0x14057066b: shr    ecx,0x1e
0x14057066e: imul   ecx,ecx,0x80000001
0x140570674: add    r8d,ecx
0x140570677: mov    eax,0x4fffffff
0x14057067c: mul    r8d
0x14057067f: shr    edx,0x1a
0x140570682: cmp    edx,r14d
0x140570685: jge    0x1405706b3
0x140570687: call   0x140eb68b0
0x14057068c: mov    r8d,eax
0x14057068f: mov    eax,0x3
0x140570694: mul    r8d
0x140570697: mov    ecx,r8d
0x14057069a: sub    ecx,edx
0x14057069c: shr    ecx,1
0x14057069e: add    ecx,edx
0x1405706a0: shr    ecx,0x1e
0x1405706a3: imul   ecx,ecx,0x80000001
0x1405706a9: add    r8d,ecx
0x1405706ac: shr    r8d,0x1e
0x1405706b0: add    ebx,r8d
0x1405706b3: call   0x140eb68b0
0x1405706b8: mov    r8d,eax
0x1405706bb: mov    eax,0x3
0x1405706c0: mul    r8d
0x1405706c3: mov    ecx,r8d
0x1405706c6: sub    ecx,edx
0x1405706c8: shr    ecx,1
0x1405706ca: add    ecx,edx
0x1405706cc: shr    ecx,0x1e
0x1405706cf: imul   ecx,ecx,0x7fffffff
0x1405706d5: sub    r8d,ecx
0x1405706d8: mov    eax,0xeffffff3
0x1405706dd: mul    r8d
0x1405706e0: shr    edx,0x1b
0x1405706e3: cmp    edx,r14d
0x1405706e6: jge    0x140570714
0x1405706e8: call   0x140eb68b0
0x1405706ed: mov    r8d,eax
0x1405706f0: mov    eax,0x3
0x1405706f5: mul    r8d
0x1405706f8: mov    ecx,r8d
0x1405706fb: sub    ecx,edx
0x1405706fd: shr    ecx,1
0x1405706ff: add    ecx,edx
0x140570701: shr    ecx,0x1e
0x140570704: imul   ecx,ecx,0x7fffffff
0x14057070a: sub    r8d,ecx
0x14057070d: shr    r8d,0x1e
0x140570711: add    ebx,r8d
0x140570714: call   0x140eb68b0
0x140570719: mov    r8d,eax
0x14057071c: mov    eax,0x3
0x140570721: mul    r8d
0x140570724: mov    ecx,r8d
0x140570727: sub    ecx,edx
0x140570729: shr    ecx,1
0x14057072b: add    ecx,edx
0x14057072d: shr    ecx,0x1e
0x140570730: imul   ecx,ecx,0x80000001
0x140570736: add    r8d,ecx
0x140570739: mov    eax,0x3fffffe3
0x14057073e: mul    r8d
0x140570741: sub    r8d,edx
0x140570744: shr    r8d,1
0x140570747: add    r8d,edx
0x14057074a: shr    r8d,0x1a
0x14057074e: cmp    r8d,r14d
0x140570751: jge    0x14057077f
0x140570753: call   0x140eb68b0
0x140570758: mov    r8d,eax
0x14057075b: mov    eax,0x3
0x140570760: mul    r8d
0x140570763: mov    ecx,r8d
0x140570766: sub    ecx,edx
0x140570768: shr    ecx,1
0x14057076a: add    ecx,edx
0x14057076c: shr    ecx,0x1e
0x14057076f: imul   ecx,ecx,0x80000001
0x140570775: add    r8d,ecx
0x140570778: shr    r8d,0x1e
0x14057077c: add    ebx,r8d
0x14057077f: call   0x140eb68b0
0x140570784: mov    r8d,eax
0x140570787: mov    eax,0x3
0x14057078c: mul    r8d
0x14057078f: mov    ecx,r8d
0x140570792: sub    ecx,edx
0x140570794: shr    ecx,1
0x140570796: add    ecx,edx
0x140570798: shr    ecx,0x1e
0x14057079b: imul   ecx,ecx,0x80000001
0x1405707a1: add    r8d,ecx
0x1405707a4: mov    eax,0xc7fffffd
0x1405707a9: mul    r8d
0x1405707ac: shr    edx,0x1a
0x1405707af: cmp    edx,r14d
0x1405707b2: jge    0x14057080e
0x1405707b4: call   0x140eb68b0
0x1405707b9: mov    r8d,eax
0x1405707bc: mov    eax,0x3
0x1405707c1: mul    r8d
0x1405707c4: mov    ecx,r8d
0x1405707c7: sub    ecx,edx
0x1405707c9: shr    ecx,1
0x1405707cb: add    ecx,edx
0x1405707cd: shr    ecx,0x1e
0x1405707d0: imul   ecx,ecx,0x7fffffff
0x1405707d6: sub    r8d,ecx
0x1405707d9: cmp    r8d,0x2aaaaaab
0x1405707e0: jae    0x14057080e
0x1405707e2: call   0x140eb68b0
0x1405707e7: mov    r8d,eax
0x1405707ea: mov    eax,0x3
0x1405707ef: mul    r8d
0x1405707f2: mov    ecx,r8d
0x1405707f5: sub    ecx,edx
0x1405707f7: shr    ecx,1
0x1405707f9: add    ecx,edx
0x1405707fb: shr    ecx,0x1e
0x1405707fe: imul   ecx,ecx,0x7fffffff
0x140570804: sub    r8d,ecx
0x140570807: shr    r8d,0x1e
0x14057080b: add    ebx,r8d
0x14057080e: movzx  r9d,WORD PTR [rdi+0xc]
0x140570813: movzx  ebp,WORD PTR [rdi+0xa]
0x140570817: movzx  r14d,WORD PTR [rdi+0x8]
0x14057081c: movzx  r8d,bp
0x140570820: movzx  edx,r14w
0x140570824: lea    rcx,[rip+0x1e60cc5]        # 0x1423d14f0
0x14057082b: call   0x14007dc40
0x140570830: bt     eax,0xf
0x140570834: jae    0x140570993
0x14057083a: movzx  r8d,bp
0x14057083e: movzx  edx,r14w
0x140570842: lea    rcx,[rip+0x1e60ca7]        # 0x1423d14f0
0x140570849: call   0x14014e100
0x14057084e: test   eax,eax
0x140570850: js     0x140570993
0x140570856: movsxd rcx,eax
0x140570859: mov    rax,QWORD PTR [rip+0x1f7c070]        # 0x1424ec8d0
0x140570860: mov    rdx,QWORD PTR [rip+0x1f7c061]        # 0x1424ec8c8
0x140570867: sub    rax,rdx
0x14057086a: sar    rax,0x3
0x14057086e: cmp    rcx,rax
0x140570871: jae    0x140570993
0x140570877: mov    rax,QWORD PTR [rdx+rcx*8]
0x14057087b: cmp    DWORD PTR [rax+0x40],0x1
0x14057087f: jle    0x14057088f
0x140570881: mov    rax,QWORD PTR [rax+0x38]
0x140570885: test   BYTE PTR [rax+0x1],0x8
0x140570889: je     0x14057088f
0x14057088b: mov    al,0x1
0x14057088d: jmp    0x140570891
0x14057088f: xor    al,al
0x140570891: test   al,al
0x140570893: je     0x140570993
0x140570899: movsx  rcx,WORD PTR [rdi+0xc]
0x14057089e: movsx  r9,WORD PTR [rdi+0xa]
0x1405708a3: movsx  r8d,WORD PTR [rdi+0x8]
0x1405708a8: test   r8w,r8w
0x1405708ac: js     0x14057097c
0x1405708b2: cmp    r8d,DWORD PTR [rip+0x1f77823]        # 0x1424e80dc
0x1405708b9: jge    0x14057097c
0x1405708bf: test   r9w,r9w
0x1405708c3: js     0x14057097c
0x1405708c9: cmp    r9d,DWORD PTR [rip+0x1f77810]        # 0x1424e80e0
0x1405708d0: jge    0x14057097c
0x1405708d6: test   cx,cx
0x1405708d9: js     0x14057097c
0x1405708df: cmp    ecx,DWORD PTR [rip+0x1f777ff]        # 0x1424e80e4
0x1405708e5: jge    0x14057097c
0x1405708eb: movzx  eax,r8w
0x1405708ef: sar    ax,0x4
0x1405708f3: mov    r10,QWORD PTR [rip+0x1f777ae]        # 0x1424e80a8
0x1405708fa: test   r10,r10
0x1405708fd: je     0x14057097c
0x1405708ff: movsx  rax,ax
0x140570903: mov    rdx,r9
0x140570906: sar    rdx,0x4
0x14057090a: mov    rax,QWORD PTR [r10+rax*8]
0x14057090e: mov    rax,QWORD PTR [rax+rdx*8]
0x140570912: mov    rdx,QWORD PTR [rax+rcx*8]
0x140570916: test   rdx,rdx
0x140570919: je     0x14057097c
0x14057091b: mov    eax,r8d
0x14057091e: and    eax,0x8000000f
0x140570923: jge    0x14057092c
0x140570925: dec    eax
0x140570927: or     eax,0xfffffff0
0x14057092a: inc    eax
0x14057092c: movsxd rcx,eax
0x14057092f: shl    rcx,0x4
0x140570933: mov    eax,r9d
0x140570936: and    eax,0x8000000f
0x14057093b: jge    0x140570944
0x14057093d: dec    eax
0x14057093f: or     eax,0xfffffff0
0x140570942: inc    eax
0x140570944: cdqe
0x140570946: add    rcx,rax
0x140570949: test   DWORD PTR [rdx+rcx*4+0x2a0],0x20000000
0x140570954: je     0x14057097c
0x140570956: mov    ecx,DWORD PTR [rdx+0x3c]
0x140570959: cmp    ecx,0xffffffff
0x14057095c: je     0x14057097c
0x14057095e: mov    rdx,QWORD PTR [rip+0x1f7b1f3]        # 0x1424ebb58
0x140570965: add    rdx,0x250
0x14057096c: call   0x1400e1560
0x140570971: test   rax,rax
0x140570974: je     0x14057097c
0x140570976: cmp    WORD PTR [rax],0x0
0x14057097a: je     0x140570993
0x14057097c: cmp    ebx,0x4
0x14057097f: jl     0x140570a26
0x140570985: mov    eax,ebx
0x140570987: cdq
0x140570988: and    edx,0x3
0x14057098b: lea    ebx,[rdx+rax*1]
0x14057098e: sar    ebx,0x2
0x140570991: inc    ebx
0x140570993: test   ebx,ebx
0x140570995: jle    0x140570a83
0x14057099b: mov    ecx,0xc8
0x1405709a0: call   0x141539690
0x1405709a5: mov    r14,rax
0x1405709a8: mov    QWORD PTR [rsp+0xa8],rax
0x1405709b0: xor    edx,edx
0x1405709b2: mov    rcx,rax
0x1405709b5: call   0x1400fc720
0x1405709ba: lea    rax,[rip+0x10e90a7]        # 0x141659a68
0x1405709c1: mov    QWORD PTR [r14],rax
0x1405709c4: mov    WORD PTR [r14+0xb8],0x1a3
0x1405709ce: mov    QWORD PTR [r14+0xbc],0x0
0x1405709d9: mov    DWORD PTR [r14+0x80],ebx
0x1405709e0: test   r12w,r12w
0x1405709e4: js     0x140570a30
0x1405709e6: mov    rax,QWORD PTR [rip+0x1f7bf13]        # 0x1424ec900
0x1405709ed: mov    rcx,QWORD PTR [rip+0x1f7bf04]        # 0x1424ec8f8
0x1405709f4: sub    rax,rcx
0x1405709f7: sar    rax,0x3
0x1405709fb: cmp    r12,rax
0x1405709fe: jae    0x140570a30
0x140570a00: mov    rax,QWORD PTR [rcx+r12*8]
0x140570a04: movzx  ecx,WORD PTR [rax+0x2b8]
0x140570a0b: mov    WORD PTR [r14+0xb8],cx
0x140570a13: mov    rax,QWORD PTR [rip+0x1f7bede]        # 0x1424ec8f8
0x140570a1a: mov    rcx,QWORD PTR [rax+r12*8]
0x140570a1e: mov    eax,DWORD PTR [rcx+0x2cc]
0x140570a24: jmp    0x140570a3d
0x140570a26: mov    ebx,0x1
0x140570a2b: jmp    0x14057099b
0x140570a30: mov    eax,0xffffffff
0x140570a35: mov    WORD PTR [r14+0xb8],ax
0x140570a3d: mov    DWORD PTR [r14+0xbc],eax
0x140570a44: mov    rax,QWORD PTR [r14]
0x140570a47: mov    dl,0x1
0x140570a49: mov    rcx,r14
0x140570a4c: call   QWORD PTR [rax+0x328]
0x140570a52: mov    rdx,r14
0x140570a55: mov    rcx,rsi
0x140570a58: call   0x14054bdc0
0x140570a5d: mov    WORD PTR [rax+0x8],0x2
0x140570a63: or     DWORD PTR [r14+0x10],0x20
0x140570a68: movzx  eax,WORD PTR [rdi+0x8]
0x140570a6c: mov    WORD PTR [r14+0x8],ax
0x140570a71: movzx  eax,WORD PTR [rdi+0xa]
0x140570a75: mov    WORD PTR [r14+0xa],ax
0x140570a7a: movzx  eax,WORD PTR [rdi+0xc]
0x140570a7e: mov    WORD PTR [r14+0xc],ax
0x140570a83: mov    r12d,0xffff8ad0
0x140570a89: mov    r9d,r12d
0x140570a8c: mov    r8d,r12d
0x140570a8f: mov    BYTE PTR [rsp+0x28],0x1
0x140570a94: mov    WORD PTR [rsp+0x20],r12w
0x140570a9a: mov    dl,0x1
0x140570a9c: mov    rcx,rdi
0x140570a9f: call   0x140ab52d0
0x140570aa4: jmp    0x140570cd5
0x140570aa9: movzx  ecx,BYTE PTR [rip+0x136645e]        # 0x1418d6f0e
0x140570ab0: movsx  r8d,cl
0x140570ab4: add    r8d,0x3
0x140570ab8: and    r8d,0x80000003
0x140570abf: jge    0x140570acb
0x140570ac1: dec    r8d
0x140570ac4: or     r8d,0xfffffffc
0x140570ac8: inc    r8d
0x140570acb: movzx  edx,r12w
0x140570acf: lea    rcx,[rip+0x1e2075a]        # 0x142391230
0x140570ad6: call   0x14054b670
0x140570adb: jmp    0x140570a83
0x140570add: call   QWORD PTR [rdx]
0x140570adf: cmp    ax,0x36
0x140570ae3: jne    0x140570cdd
0x140570ae9: test   r14b,r14b
0x140570aec: jne    0x140570bd1
0x140570af2: mov    ebx,r15d
0x140570af5: mov    rdx,QWORD PTR [r13+0x8]
0x140570af9: mov    r8,QWORD PTR [r13+0x0]
0x140570afd: mov    rax,rdx
0x140570b00: sub    rax,r8
0x140570b03: sar    rax,0x3
0x140570b07: test   rax,rax
0x140570b0a: je     0x140570b6c
0x140570b0c: mov    rbp,r8
0x140570b0f: mov    r11,r15
0x140570b12: mov    r9,r8
0x140570b15: mov    r10,rdx
0x140570b18: nop    DWORD PTR [rax+rax*1+0x0]
0x140570b20: mov    r8,r9
0x140570b23: mov    rdx,r10
0x140570b26: mov    rcx,QWORD PTR [r11+rbp*1]
0x140570b2a: cmp    WORD PTR [rcx+0x14],0x5d
0x140570b2f: jne    0x140570b4f
0x140570b31: movzx  eax,WORD PTR [rdi+0x8]
0x140570b35: cmp    WORD PTR [rcx+0x1c],ax
0x140570b39: jne    0x140570b4f
0x140570b3b: movzx  eax,WORD PTR [rdi+0xa]
0x140570b3f: cmp    WORD PTR [rcx+0x1e],ax
0x140570b43: jne    0x140570b4f
0x140570b45: movzx  eax,WORD PTR [rdi+0xc]
0x140570b49: cmp    WORD PTR [rcx+0x20],ax
0x140570b4d: je     0x140570b67
0x140570b4f: inc    ebx
0x140570b51: add    r11,0x8
0x140570b55: mov    rcx,r10
0x140570b58: sub    rcx,r9
0x140570b5b: sar    rcx,0x3
0x140570b5f: movsxd rax,ebx
0x140570b62: cmp    rax,rcx
0x140570b65: jb     0x140570b20
0x140570b67: mov    ebp,0x5d
0x140570b6c: sub    rdx,r8
0x140570b6f: sar    rdx,0x3
0x140570b73: movsxd rax,ebx
0x140570b76: cmp    rax,rdx
0x140570b79: jne    0x140570bc9
0x140570b7b: mov    ecx,0x148
0x140570b80: call   0x141539690
0x140570b85: mov    QWORD PTR [rsp+0x30],rax
0x140570b8a: xor    edx,edx
0x140570b8c: mov    rcx,rax
0x140570b8f: call   0x140d020c0
0x140570b94: mov    rbx,rax
0x140570b97: mov    WORD PTR [rax+0x14],bp
0x140570b9b: movzx  ecx,WORD PTR [rdi+0x8]
0x140570b9f: mov    WORD PTR [rax+0x1c],cx
0x140570ba3: movzx  ecx,WORD PTR [rdi+0xa]
0x140570ba7: mov    WORD PTR [rax+0x1e],cx
0x140570bab: movzx  ecx,WORD PTR [rdi+0xc]
0x140570baf: mov    WORD PTR [rax+0x20],cx
0x140570bb3: mov    r8b,0x1
0x140570bb6: mov    rdx,rax
0x140570bb9: mov    rcx,rsi
0x140570bbc: call   0x14054bcf0
0x140570bc1: mov    rcx,rbx
0x140570bc4: call   0x140d09b70
0x140570bc9: mov    rbx,QWORD PTR [rsp+0xa0]
0x140570bd1: mov    rax,QWORD PTR [rdi]
0x140570bd4: mov    rcx,rdi
0x140570bd7: call   QWORD PTR [rax+0x288]
0x140570bdd: mov    rax,QWORD PTR [rdi]
0x140570be0: mov    rcx,rdi
0x140570be3: call   QWORD PTR [rax+0x58]
0x140570be6: movsx  ecx,ax
0x140570be9: mov    DWORD PTR [rsp+0x20],ecx
0x140570bed: movzx  r9d,WORD PTR [rdi+0xc]
0x140570bf2: movzx  r8d,WORD PTR [rdi+0xa]
0x140570bf7: movzx  edx,WORD PTR [rdi+0x8]
0x140570bfb: lea    rcx,[rip+0x1e608ee]        # 0x1423d14f0
0x140570c02: call   0x1414b1520
0x140570c07: test   al,al
0x140570c09: jne    0x140570c2f
0x140570c0b: mov    rax,QWORD PTR [rdi]
0x140570c0e: mov    rcx,rdi
0x140570c11: call   QWORD PTR [rax+0x288]
0x140570c17: mov    rax,QWORD PTR [rdi]
0x140570c1a: mov    rcx,rdi
0x140570c1d: call   QWORD PTR [rax+0x288]
0x140570c23: mov    rax,QWORD PTR [rdi]
0x140570c26: mov    rcx,rdi
0x140570c29: call   QWORD PTR [rax+0x288]
0x140570c2f: mov    rax,QWORD PTR [rdi]
0x140570c32: mov    rcx,rdi
0x140570c35: call   QWORD PTR [rax+0x278]
0x140570c3b: cmp    eax,0xc8
0x140570c40: jl     0x140570cdd
0x140570c46: mov    rax,QWORD PTR [r13+0x8]
0x140570c4a: sub    rax,QWORD PTR [r13+0x0]
0x140570c4e: sar    rax,0x3
0x140570c52: sub    eax,0x1
0x140570c55: movsxd rbx,eax
0x140570c58: js     0x140570c82
0x140570c5a: nop    WORD PTR [rax+rax*1+0x0]
0x140570c60: mov    rcx,QWORD PTR [r13+0x0]
0x140570c64: mov    rax,QWORD PTR [rcx+rbx*8]
0x140570c68: cmp    WORD PTR [rax+0x14],0x5d
0x140570c6d: jne    0x140570c7c
0x140570c6f: mov    rcx,rax
0x140570c72: test   rax,rax
0x140570c75: je     0x140570c7c
0x140570c77: call   0x140a67820
0x140570c7c: sub    rbx,0x1
0x140570c80: jns    0x140570c60
0x140570c82: mov    dl,0x1
0x140570c84: mov    rcx,rdi
0x140570c87: call   0x140c634f0
0x140570c8c: mov    rax,QWORD PTR [rdi]
0x140570c8f: mov    rcx,rdi
0x140570c92: call   QWORD PTR [rax+0x330]
0x140570c98: mov    rax,QWORD PTR [rdi]
0x140570c9b: xor    edx,edx
0x140570c9d: mov    rcx,rdi
0x140570ca0: call   QWORD PTR [rax+0x280]
0x140570ca6: or     DWORD PTR [rdi+0x10],0x100
0x140570cad: mov    rax,QWORD PTR [rdi]
0x140570cb0: mov    dl,0x1
0x140570cb2: mov    rcx,rdi
0x140570cb5: call   QWORD PTR [rax+0x328]
0x140570cbb: mov    rax,QWORD PTR [rdi]
0x140570cbe: movsx  r9d,WORD PTR [rdi+0xc]
0x140570cc3: movsx  r8d,WORD PTR [rdi+0xa]
0x140570cc8: movsx  edx,WORD PTR [rdi+0x8]
0x140570ccc: mov    rcx,rdi
0x140570ccf: call   QWORD PTR [rax+0x320]
0x140570cd5: mov    rbx,QWORD PTR [rsp+0xa0]
0x140570cdd: sub    rbx,0x1
0x140570ce1: mov    QWORD PTR [rsp+0xa0],rbx
0x140570ce9: movzx  r14d,BYTE PTR [rsp+0x90]
0x140570cf2: mov    ebp,0x5d
0x140570cf7: jns    0x1405703f0
0x140570cfd: lea    r13,[rsi+0x58]
0x140570d01: xor    r12b,r12b
0x140570d04: movsx  rax,BYTE PTR [rip+0x1366202]        # 0x1418d6f0e
0x140570d0c: movzx  edx,WORD PTR [rsi+rax*2+0x148]
0x140570d14: cmp    dx,0xffff
0x140570d18: je     0x140570d31
0x140570d1a: call   0x14057c050
0x140570d1f: test   al,al
0x140570d21: je     0x140570d27
0x140570d23: lea    r13,[rsi+0x58]
0x140570d27: setne  r12b
0x140570d2b: movzx  ebp,r12b
0x140570d2f: jmp    0x140570d34
0x140570d31: mov    bpl,0x1
0x140570d34: mov    rax,QWORD PTR [r13+0x8]
0x140570d38: sub    rax,QWORD PTR [r13+0x0]
0x140570d3c: sar    rax,0x3
0x140570d40: sub    eax,0x1
0x140570d43: movsxd rbx,eax
0x140570d46: js     0x140570d91
0x140570d48: lea    rdi,[rbx*8+0x0]
0x140570d50: mov    rcx,QWORD PTR [r13+0x0]
0x140570d54: mov    rax,QWORD PTR [rcx+rdi*1]
0x140570d58: cmp    WORD PTR [rax+0x14],0x5c
0x140570d5d: jne    0x140570d87
0x140570d5f: mov    rcx,QWORD PTR [rcx+rbx*8]
0x140570d63: test   bpl,bpl
0x140570d66: jne    0x140570d7d
0x140570d68: movsx  rax,BYTE PTR [rip+0x136619e]        # 0x1418d6f0e
0x140570d70: movsx  edx,WORD PTR [rsi+rax*2+0x148]
0x140570d78: cmp    DWORD PTR [rcx+0x34],edx
0x140570d7b: je     0x140570d87
0x140570d7d: test   rcx,rcx
0x140570d80: je     0x140570d87
0x140570d82: call   0x140a67820
0x140570d87: sub    rbx,0x1
0x140570d8b: lea    rdi,[rdi-0x8]
0x140570d8f: jns    0x140570d50
0x140570d91: movzx  eax,BYTE PTR [rip+0x1366176]        # 0x1418d6f0e
0x140570d98: cmp    BYTE PTR [rsi+0x158],al
0x140570d9e: jge    0x140570db9
0x140570da0: mov    rcx,rsi
0x140570da3: call   0x1405897e0
0x140570da8: test   BYTE PTR [rsi+0x154],0x1
0x140570daf: je     0x140570db9
0x140570db1: mov    rcx,rsi
0x140570db4: call   0x1405894a0
0x140570db9: movzx  eax,BYTE PTR [rip+0x136614e]        # 0x1418d6f0e
0x140570dc0: mov    BYTE PTR [rsi+0x158],al
0x140570dc6: mov    rax,QWORD PTR [rsi+0x60]
0x140570dca: sub    rax,QWORD PTR [rsi+0x58]
0x140570dce: test   rax,0xfffffffffffffff8
0x140570dd4: jne    0x1405713e2
0x140570dda: movsx  rax,BYTE PTR [rip+0x136612c]        # 0x1418d6f0e
0x140570de2: movsx  ecx,WORD PTR [rsi+rax*2+0x148]
0x140570dea: cmp    cx,0xffff
0x140570dee: je     0x1405713e2
0x140570df4: cmp    BYTE PTR [rsp+0x90],0x0
0x140570dfc: jne    0x1405713e2
0x140570e02: mov    r15d,ecx
0x140570e05: xor    r13d,r13d
0x140570e08: mov    edi,r13d
0x140570e0b: movsx  ebp,WORD PTR [rsi+0x8]
0x140570e0f: mov    r14d,ebp
0x140570e12: cmp    ebp,DWORD PTR [rsi+0x14]
0x140570e15: jg     0x140570eb0
0x140570e1b: nop    DWORD PTR [rax+rax*1+0x0]
0x140570e20: movsx  ebx,WORD PTR [rsi+0xc]
0x140570e24: mov    edx,ebx
0x140570e26: cmp    ebx,DWORD PTR [rsi+0x18]
0x140570e29: jg     0x140570e9f
0x140570e2b: nop    DWORD PTR [rax+rax*1+0x0]
0x140570e30: mov    r8,QWORD PTR [rsi+0x30]
0x140570e34: test   r8,r8
0x140570e37: je     0x140570e55
0x140570e39: mov    eax,DWORD PTR [rsi+0x14]
0x140570e3c: sub    eax,DWORD PTR [rsi+0x8]
0x140570e3f: inc    eax
0x140570e41: sub    edx,DWORD PTR [rsi+0xc]
0x140570e44: imul   eax,edx
0x140570e47: sub    eax,DWORD PTR [rsi+0x8]
0x140570e4a: add    eax,r14d
0x140570e4d: cdqe
0x140570e4f: cmp    BYTE PTR [rax+r8*1],r13b
0x140570e53: je     0x140570e94
0x140570e55: movzx  r9d,WORD PTR [rsi+0x20]
0x140570e5a: movzx  r8d,bx
0x140570e5e: movzx  edx,bp
0x140570e61: lea    rcx,[rip+0x1e60688]        # 0x1423d14f0
0x140570e68: call   0x1414b1460
0x140570e6d: test   eax,eax
0x140570e6f: jne    0x140570e94
0x140570e71: mov    DWORD PTR [rsp+0x20],r15d
0x140570e76: movzx  r9d,WORD PTR [rsi+0x20]
0x140570e7b: movzx  r8d,bx
0x140570e7f: movzx  edx,bp
0x140570e82: lea    rcx,[rip+0x1e60667]        # 0x1423d14f0
0x140570e89: call   0x1414b1520
0x140570e8e: test   al,al
0x140570e90: je     0x140570e94
0x140570e92: inc    edi
0x140570e94: inc    bx
0x140570e97: movsx  edx,bx
0x140570e9a: cmp    edx,DWORD PTR [rsi+0x18]
0x140570e9d: jle    0x140570e30
0x140570e9f: inc    bp
0x140570ea2: movsx  r14d,bp
0x140570ea6: cmp    r14d,DWORD PTR [rsi+0x14]
0x140570eaa: jle    0x140570e20
0x140570eb0: mov    r8d,r13d
0x140570eb3: mov    rdx,QWORD PTR [rsi+0x128]
0x140570eba: mov    r9,QWORD PTR [rsi+0x130]
0x140570ec1: sub    r9,rdx
0x140570ec4: sar    r9,0x3
0x140570ec8: test   r9,r9
0x140570ecb: je     0x140570eee
0x140570ecd: nop    DWORD PTR [rax]
0x140570ed0: mov    ecx,edi
0x140570ed2: mov    rax,QWORD PTR [rdx]
0x140570ed5: dec    edi
0x140570ed7: cmp    WORD PTR [rax+0x8],0x2
0x140570edc: cmovne edi,ecx
0x140570edf: inc    r8d
0x140570ee2: lea    rdx,[rdx+0x8]
0x140570ee6: movsxd rax,r8d
0x140570ee9: cmp    rax,r9
0x140570eec: jb     0x140570ed0
0x140570eee: test   edi,edi
0x140570ef0: jle    0x1405713e2
0x140570ef6: test   r12b,r12b
0x140570ef9: jne    0x1405713e2
0x140570eff: mov    ebp,r13d
0x140570f02: mov    r12d,r13d
0x140570f05: mov    rax,QWORD PTR [rip+0x1e74b94]        # 0x1423e5aa0
0x140570f0c: mov    rdx,QWORD PTR [rip+0x1e74b85]        # 0x1423e5a98
0x140570f13: sub    rax,rdx
0x140570f16: sar    rax,0x3
0x140570f1a: test   rax,rax
0x140570f1d: je     0x14057108f
0x140570f23: mov    r14,r13
0x140570f26: data16 nop WORD PTR [rax+rax*1+0x0]
0x140570f30: mov    rdi,QWORD PTR [rdx+r14*1]
0x140570f34: mov    eax,DWORD PTR [rdi+0x10]
0x140570f37: test   al,0x20
0x140570f39: jne    0x14057106e
0x140570f3f: test   BYTE PTR [rdi+0x14],0x8
0x140570f43: jne    0x14057106e
0x140570f49: test   eax,0xe90c12
0x140570f4e: jne    0x14057106e
0x140570f54: test   al,0x8
0x140570f56: je     0x140570faa
0x140570f58: mov    rbx,QWORD PTR [rdi+0x38]
0x140570f5c: mov    rdi,QWORD PTR [rdi+0x40]
0x140570f60: cmp    rbx,rdi
0x140570f63: jae    0x14057135e
0x140570f69: mov    rcx,QWORD PTR [rbx]
0x140570f6c: mov    rax,QWORD PTR [rcx]
0x140570f6f: call   QWORD PTR [rax+0x10]
0x140570f72: cmp    eax,0xb
0x140570f75: je     0x140570f7d
0x140570f77: add    rbx,0x8
0x140570f7b: jmp    0x140570f60
0x140570f7d: mov    rcx,QWORD PTR [rbx]
0x140570f80: mov    rax,QWORD PTR [rcx]
0x140570f83: call   QWORD PTR [rax+0x18]
0x140570f86: test   rax,rax
0x140570f89: je     0x14057135e
0x140570f8f: mov    rdx,QWORD PTR [rax]
0x140570f92: mov    rcx,rax
0x140570f95: call   QWORD PTR [rdx+0x90]
0x140570f9b: test   al,al
0x140570f9d: je     0x14057135e
0x140570fa3: mov    rdx,QWORD PTR [rip+0x1e74aee]        # 0x1423e5a98
0x140570faa: mov    r15d,r13d
0x140570fad: mov    rax,QWORD PTR [rdx+r14*1]
0x140570fb1: mov    rcx,QWORD PTR [rax+0x40]
0x140570fb5: sub    rcx,QWORD PTR [rax+0x38]
0x140570fb9: sar    rcx,0x3
0x140570fbd: test   rcx,rcx
0x140570fc0: je     0x14057106e
0x140570fc6: mov    rdi,r13
0x140570fc9: nop    DWORD PTR [rax+0x0]
0x140570fd0: mov    rax,QWORD PTR [rdx+r14*1]
0x140570fd4: mov    rcx,QWORD PTR [rax+0x38]
0x140570fd8: mov    rcx,QWORD PTR [rdi+rcx*1]
0x140570fdc: mov    rax,QWORD PTR [rcx]
0x140570fdf: call   QWORD PTR [rax+0x10]
0x140570fe2: cmp    eax,0xa
0x140570fe5: jne    0x140571044
0x140570fe7: mov    rax,QWORD PTR [rip+0x1e74aaa]        # 0x1423e5a98
0x140570fee: mov    rcx,QWORD PTR [rax+r14*1]
0x140570ff2: mov    rax,QWORD PTR [rcx+0x38]
0x140570ff6: mov    rcx,QWORD PTR [rdi+rax*1]
0x140570ffa: mov    rax,QWORD PTR [rcx]
0x140570ffd: call   QWORD PTR [rax+0x18]
0x140571000: mov    rbx,rax
0x140571003: test   rax,rax
0x140571006: je     0x140571044
0x140571008: mov    rdx,QWORD PTR [rax]
0x14057100b: mov    rcx,rax
0x14057100e: call   QWORD PTR [rdx]
0x140571010: cmp    ax,0x35
0x140571014: jne    0x140571044
0x140571016: movsx  rcx,BYTE PTR [rip+0x1365ef0]        # 0x1418d6f0e
0x14057101e: movsx  edx,WORD PTR [rsi+rcx*2+0x148]
0x140571026: cmp    DWORD PTR [rbx+0xbc],edx
0x14057102c: jne    0x140571044
0x14057102e: mov    eax,DWORD PTR [rbx+0x10]
0x140571031: test   al,0x20
0x140571033: jne    0x140571044
0x140571035: test   BYTE PTR [rbx+0x14],0x8
0x140571039: jne    0x140571044
0x14057103b: test   eax,0xe90c12
0x140571040: jne    0x140571044
0x140571042: inc    ebp
0x140571044: inc    r15d
0x140571047: add    rdi,0x8
0x14057104b: mov    rdx,QWORD PTR [rip+0x1e74a46]        # 0x1423e5a98
0x140571052: mov    rax,QWORD PTR [rdx+r14*1]
0x140571056: mov    rcx,QWORD PTR [rax+0x40]
0x14057105a: sub    rcx,QWORD PTR [rax+0x38]
0x14057105e: sar    rcx,0x3
0x140571062: movsxd rax,r15d
0x140571065: cmp    rax,rcx
0x140571068: jb     0x140570fd0
0x14057106e: inc    r12d
0x140571071: add    r14,0x8
0x140571075: mov    rcx,QWORD PTR [rip+0x1e74a24]        # 0x1423e5aa0
0x14057107c: sub    rcx,rdx
0x14057107f: sar    rcx,0x3
0x140571083: movsxd rax,r12d
0x140571086: cmp    rax,rcx
0x140571089: jb     0x140570f30
0x14057108f: mov    r12d,r13d
0x140571092: mov    r8,QWORD PTR [rip+0x1e7501f]        # 0x1423e60b8
0x140571099: mov    rax,r8
0x14057109c: mov    rdx,QWORD PTR [rip+0x1e7500d]        # 0x1423e60b0
0x1405710a3: sub    rax,rdx
0x1405710a6: sar    rax,0x3
0x1405710aa: test   rax,rax
0x1405710ad: je     0x1405711c2
0x1405710b3: mov    r14,r13
0x1405710b6: data16 nop WORD PTR [rax+rax*1+0x0]
0x1405710c0: mov    rcx,QWORD PTR [rdx+r14*1]
0x1405710c4: mov    eax,DWORD PTR [rcx+0x10]
0x1405710c7: test   al,0x28
0x1405710c9: jne    0x1405711a5
0x1405710cf: test   BYTE PTR [rcx+0x14],0x8
0x1405710d3: jne    0x1405711a5
0x1405710d9: test   eax,0xe90c12
0x1405710de: jne    0x1405711a5
0x1405710e4: mov    r15d,r13d
0x1405710e7: mov    rax,QWORD PTR [rcx+0x40]
0x1405710eb: sub    rax,QWORD PTR [rcx+0x38]
0x1405710ef: sar    rax,0x3
0x1405710f3: test   rax,rax
0x1405710f6: je     0x1405711a5
0x1405710fc: mov    rdi,r13
0x1405710ff: nop
0x140571100: mov    rax,QWORD PTR [rdx+r14*1]
0x140571104: mov    rax,QWORD PTR [rax+0x38]
0x140571108: mov    rcx,QWORD PTR [rdi+rax*1]
0x14057110c: mov    rax,QWORD PTR [rcx]
0x14057110f: call   QWORD PTR [rax+0x10]
0x140571112: cmp    eax,0xa
0x140571115: jne    0x140571174
0x140571117: mov    rax,QWORD PTR [rip+0x1e74f92]        # 0x1423e60b0
0x14057111e: mov    rax,QWORD PTR [rax+r14*1]
0x140571122: mov    rax,QWORD PTR [rax+0x38]
0x140571126: mov    rcx,QWORD PTR [rdi+rax*1]
0x14057112a: mov    rax,QWORD PTR [rcx]
0x14057112d: call   QWORD PTR [rax+0x18]
0x140571130: mov    rbx,rax
0x140571133: test   rax,rax
0x140571136: je     0x140571174
0x140571138: mov    rdx,QWORD PTR [rax]
0x14057113b: mov    rcx,rax
0x14057113e: call   QWORD PTR [rdx]
0x140571140: cmp    ax,0x35
0x140571144: jne    0x140571174
0x140571146: movsx  rcx,BYTE PTR [rip+0x1365dc0]        # 0x1418d6f0e
0x14057114e: movsx  edx,WORD PTR [rsi+rcx*2+0x148]
0x140571156: cmp    DWORD PTR [rbx+0xbc],edx
0x14057115c: jne    0x140571174
0x14057115e: mov    eax,DWORD PTR [rbx+0x10]
0x140571161: test   al,0x20
0x140571163: jne    0x140571174
0x140571165: test   BYTE PTR [rbx+0x14],0x8
0x140571169: jne    0x140571174
0x14057116b: test   eax,0xe90c12
0x140571170: jne    0x140571174
0x140571172: inc    ebp
0x140571174: inc    r15d
0x140571177: add    rdi,0x8
0x14057117b: mov    rdx,QWORD PTR [rip+0x1e74f2e]        # 0x1423e60b0
0x140571182: mov    rax,QWORD PTR [rdx+r14*1]
0x140571186: mov    rcx,QWORD PTR [rax+0x40]
0x14057118a: sub    rcx,QWORD PTR [rax+0x38]
0x14057118e: sar    rcx,0x3
0x140571192: movsxd rax,r15d
0x140571195: cmp    rax,rcx
0x140571198: jb     0x140571100
0x14057119e: mov    r8,QWORD PTR [rip+0x1e74f13]        # 0x1423e60b8
0x1405711a5: inc    r12d
0x1405711a8: add    r14,0x8
0x1405711ac: mov    rcx,r8
0x1405711af: sub    rcx,rdx
0x1405711b2: sar    rcx,0x3
0x1405711b6: movsxd rax,r12d
0x1405711b9: cmp    rax,rcx
0x1405711bc: jb     0x1405710c0
0x1405711c2: mov    rax,QWORD PTR [rip+0x1e744b7]        # 0x1423e5680
0x1405711c9: mov    rdx,QWORD PTR [rip+0x1e744a8]        # 0x1423e5678
0x1405711d0: sub    rax,rdx
0x1405711d3: sar    rax,0x3
0x1405711d7: test   rax,rax
0x1405711da: je     0x140571248
0x1405711dc: mov    rbx,r13
0x1405711df: nop
0x1405711e0: mov    rcx,QWORD PTR [rdx+rbx*1]
0x1405711e4: mov    rax,QWORD PTR [rcx]
0x1405711e7: call   QWORD PTR [rax]
0x1405711e9: mov    rdx,QWORD PTR [rip+0x1e74488]        # 0x1423e5678
0x1405711f0: cmp    ax,0x35
0x1405711f4: jne    0x14057122b
0x1405711f6: mov    r8,QWORD PTR [rdx+rbx*1]
0x1405711fa: movsx  rax,BYTE PTR [rip+0x1365d0c]        # 0x1418d6f0e
0x140571202: movsx  ecx,WORD PTR [rsi+rax*2+0x148]
0x14057120a: cmp    DWORD PTR [r8+0xbc],ecx
0x140571211: jne    0x14057122b
0x140571213: mov    eax,DWORD PTR [r8+0x10]
0x140571217: test   al,0x28
0x140571219: jne    0x14057122b
0x14057121b: test   BYTE PTR [r8+0x14],0x8
0x140571220: jne    0x14057122b
0x140571222: test   eax,0xe90c12
0x140571227: jne    0x14057122b
0x140571229: inc    ebp
0x14057122b: inc    r13d
0x14057122e: add    rbx,0x8
0x140571232: mov    rcx,QWORD PTR [rip+0x1e74447]        # 0x1423e5680
0x140571239: sub    rcx,rdx
0x14057123c: sar    rcx,0x3
0x140571240: movsxd rax,r13d
0x140571243: cmp    rax,rcx
0x140571246: jb     0x1405711e0
0x140571248: mov    rdx,QWORD PTR [rip+0x1e74f79]        # 0x1423e61c8
0x14057124f: test   rdx,rdx
0x140571252: je     0x140571298
0x140571254: movsx  rax,BYTE PTR [rip+0x1365cb2]        # 0x1418d6f0e
0x14057125c: lea    r8,[rsi+rax*2]
0x140571260: mov    rcx,QWORD PTR [rdx]
0x140571263: cmp    WORD PTR [rcx+0x14],0x5c
0x140571268: jne    0x14057128f
0x14057126a: movsx  eax,WORD PTR [r8+0x148]
0x140571272: cmp    DWORD PTR [rcx+0x34],eax
0x140571275: jne    0x14057128f
0x140571277: mov    rax,QWORD PTR [rcx+0x88]
0x14057127e: sub    rax,QWORD PTR [rcx+0x80]
0x140571285: test   rax,0xfffffffffffffff8
0x14057128b: jne    0x14057128f
0x14057128d: dec    ebp
0x14057128f: mov    rdx,QWORD PTR [rdx+0x10]
0x140571293: test   rdx,rdx
0x140571296: jne    0x140571260
0x140571298: test   ebp,ebp
0x14057129a: jle    0x1405713e2
0x1405712a0: mov    r12d,0xffff8ad0
0x1405712a6: dec    ebp
0x1405712a8: movsx  rax,BYTE PTR [rip+0x1365c5e]        # 0x1418d6f0e
0x1405712b0: movsx  r9d,WORD PTR [rsi+rax*2+0x148]
0x1405712b9: lea    r8,[rsp+0x98]
0x1405712c1: lea    rdx,[rsp+0x90]
0x1405712c9: mov    rcx,rsi
0x1405712cc: call   0x140557850
0x1405712d1: movzx  r14d,WORD PTR [rsp+0x90]
0x1405712da: cmp    r14w,r12w
0x1405712de: je     0x1405713e2
0x1405712e4: mov    ecx,0x148
0x1405712e9: call   0x141539690
0x1405712ee: mov    QWORD PTR [rsp+0xa8],rax
0x1405712f6: xor    edx,edx
0x1405712f8: mov    rcx,rax
0x1405712fb: call   0x140d020c0
0x140571300: mov    rbx,rax
0x140571303: mov    WORD PTR [rax+0x14],0x5c
0x140571309: movsx  rax,BYTE PTR [rip+0x1365bfd]        # 0x1418d6f0e
0x140571311: movsx  rcx,WORD PTR [rsi+rax*2+0x148]
0x14057131a: test   cx,cx
0x14057131d: js     0x14057136a
0x14057131f: mov    rdx,rcx
0x140571322: mov    rax,QWORD PTR [rip+0x1f7b5d7]        # 0x1424ec900
0x140571329: mov    rcx,QWORD PTR [rip+0x1f7b5c8]        # 0x1424ec8f8
0x140571330: sub    rax,rcx
0x140571333: sar    rax,0x3
0x140571337: cmp    rdx,rax
0x14057133a: jae    0x14057136a
0x14057133c: mov    rax,QWORD PTR [rcx+rdx*8]
0x140571340: movzx  ecx,WORD PTR [rax+0x2be]
0x140571347: mov    WORD PTR [rbx+0x30],cx
0x14057134b: mov    rax,QWORD PTR [rip+0x1f7b5a6]        # 0x1424ec8f8
0x140571352: mov    rcx,QWORD PTR [rax+rdx*8]
0x140571356: mov    eax,DWORD PTR [rcx+0x2d8]
0x14057135c: jmp    0x140571373
0x14057135e: mov    rdx,QWORD PTR [rip+0x1e74733]        # 0x1423e5a98
0x140571365: jmp    0x14057106e
0x14057136a: mov    eax,0xffffffff
0x14057136f: mov    WORD PTR [rbx+0x30],ax
0x140571373: mov    edx,0x34
0x140571378: mov    rcx,rbx
0x14057137b: mov    DWORD PTR [rbx+rdx*1],eax
0x14057137e: mov    WORD PTR [rbx+0x1c],r14w
0x140571383: movzx  eax,WORD PTR [rsp+0x98]
0x14057138b: mov    WORD PTR [rbx+0x1e],ax
0x14057138f: movzx  eax,WORD PTR [rsi+0x20]
0x140571393: mov    WORD PTR [rbx+0x20],ax
0x140571397: mov    QWORD PTR [rsp+0xa0],rbx
0x14057139f: mov    r8d,DWORD PTR [rsi+0x50]
0x1405713a3: mov    edx,0x24
0x1405713a8: call   0x140d09750
0x1405713ad: mov    rdx,QWORD PTR [rsi+0x60]
0x1405713b1: cmp    rdx,QWORD PTR [rsi+0x68]
0x1405713b5: je     0x1405713c1
0x1405713b7: mov    QWORD PTR [rdx],rbx
0x1405713ba: add    QWORD PTR [rsi+0x60],0x8
0x1405713bf: jmp    0x1405713d2
0x1405713c1: lea    r8,[rsp+0xa0]
0x1405713c9: lea    rcx,[rsi+0x58]
0x1405713cd: call   0x1400bad30
0x1405713d2: mov    rcx,rbx
0x1405713d5: call   0x140d09b70
0x1405713da: test   ebp,ebp
0x1405713dc: jg     0x1405712a6
0x1405713e2: add    rsp,0x48
0x1405713e6: pop    r15
0x1405713e8: pop    r14
0x1405713ea: pop    r13
0x1405713ec: pop    r12
0x1405713ee: pop    rdi
0x1405713ef: pop    rsi
0x1405713f0: pop    rbp
0x1405713f1: pop    rbx
0x1405713f2: ret
