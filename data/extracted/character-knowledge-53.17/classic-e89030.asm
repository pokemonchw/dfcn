; classic PE:6aea11a5:0272d000; knowledge-poetic-form; RVA 0xe89030..0xe8faf8; code ends 0xe8f490
0x00e89030: mov    QWORD PTR [rsp+0x18],rbx
0x00e89035: push   rbp
0x00e89036: push   rsi
0x00e89037: push   rdi
0x00e89038: push   r12
0x00e8903a: push   r13
0x00e8903c: push   r14
0x00e8903e: push   r15
0x00e89040: lea    rbp,[rsp-0x2f0]
0x00e89048: sub    rsp,0x3f0
0x00e8904f: movaps XMMWORD PTR [rsp+0x3e0],xmm6
0x00e89057: mov    rax,QWORD PTR [rip+0xa2efe2]        # 0x1418b8040
0x00e8905e: xor    rax,rsp
0x00e89061: mov    QWORD PTR [rbp+0x2d0],rax
0x00e89068: mov    r12,rdx
0x00e8906b: mov    QWORD PTR [rbp-0x50],rdx
0x00e8906f: mov    r13,rcx
0x00e89072: mov    QWORD PTR [rbp-0x60],rcx
0x00e89076: lea    rcx,[rbp+0xe8]
0x00e8907d: call   0x140070c50
0x00e89082: nop
0x00e89083: lea    rcx,[r13+0x8]
0x00e89087: xor    r9d,r9d
0x00e8908a: mov    r8b,0x1
0x00e8908d: lea    rdx,[rbp+0xe8]
0x00e89094: call   0x140aaafe0
0x00e89099: lea    rdx,[rbp+0xe8]
0x00e890a0: mov    rcx,r12
0x00e890a3: call   0x1400bb2d0
0x00e890a8: lea    rdx,[rip+0x77bd3d]        # 0x141604dec ; literal=" is"
0x00e890af: mov    rcx,r12
0x00e890b2: call   0x140070b20
0x00e890b7: mov    ecx,DWORD PTR [r13+0xd0]
0x00e890be: sub    ecx,0x1
0x00e890c1: je     0x140e89107
0x00e890c3: sub    ecx,0x1
0x00e890c6: je     0x140e890fe
0x00e890c8: sub    ecx,0x2
0x00e890cb: mov    r14,r12
0x00e890ce: je     0x140e890f5
0x00e890d0: sub    ecx,0x1
0x00e890d3: je     0x140e890ec
0x00e890d5: cmp    ecx,0x1
0x00e890d8: je     0x140e890e3
0x00e890da: lea    rdx,[rip+0x7d711b]        # 0x1416601fc ; literal=" a"
0x00e890e1: jmp    0x140e89111
0x00e890e3: lea    rdx,[rip+0x8c2246]        # 0x14174b330 ; literal=" a solemn"
0x00e890ea: jmp    0x140e89111
0x00e890ec: lea    rdx,[rip+0x8c2285]        # 0x14174b378 ; literal=" a light"
0x00e890f3: jmp    0x140e89111
0x00e890f5: lea    rdx,[rip+0x8c228c]        # 0x14174b388 ; literal=" a ribald"
0x00e890fc: jmp    0x140e89111
0x00e890fe: lea    rdx,[rip+0x8c2253]        # 0x14174b358 ; literal=" a reflective"
0x00e89105: jmp    0x140e8910e
0x00e89107: lea    rdx,[rip+0x8c225a]        # 0x14174b368 ; literal=" a dramatic"
0x00e8910e: mov    r14,r12
0x00e89111: mov    rcx,r14
0x00e89114: call   0x140070b20
0x00e89119: lea    rdx,[rip+0x8c2200]        # 0x14174b320 ; literal=" poetic "
0x00e89120: mov    rcx,r12
0x00e89123: call   0x140070b20
0x00e89128: mov    eax,DWORD PTR [r13+0xd0]
0x00e8912f: cmp    eax,0x3
0x00e89132: jne    0x140e8913d
0x00e89134: lea    rdx,[rip+0x8087fd]        # 0x141691938 ; literal="riddle"
0x00e8913b: jmp    0x140e89151
0x00e8913d: lea    rdx,[rip+0x8c2204]        # 0x14174b348 ; literal="narrative"
0x00e89144: lea    rcx,[rip+0x8c21f1]        # 0x14174b33c ; literal="form"
0x00e8914b: test   eax,eax
0x00e8914d: cmovne rdx,rcx
0x00e89151: mov    rcx,r14
0x00e89154: call   0x140070b20
0x00e89159: lea    r15,[rip+0xffffffffff176ea0]        # 0x140000000
0x00e89160: lea    rbx,[rip+0x775805]        # 0x1415fe96c ; literal=" "
0x00e89167: cmp    DWORD PTR [r13+0xdc],0xffffffff
0x00e8916f: je     0x140e8935c
0x00e89175: xor    dil,dil
0x00e89178: xor    bl,bl
0x00e8917a: lea    rdx,[rip+0x8c2287]        # 0x14174b408 ; literal=" intended "
0x00e89181: mov    rcx,r12
0x00e89184: call   0x140070b20
0x00e89189: movsxd rax,DWORD PTR [r13+0xdc]
0x00e89190: cmp    eax,0x16
0x00e89193: ja     0x140e89296
0x00e89199: mov    ecx,DWORD PTR [r15+rax*4+0xe8f490]
0x00e891a1: add    rcx,r15
0x00e891a4: jmp    rcx
0x00e891a6: lea    rdx,[rip+0x8c224b]        # 0x14174b3f8 ; literal="to describe"
0x00e891ad: mov    rcx,r12
0x00e891b0: call   0x140070b20
0x00e891b5: mov    dil,0x1
0x00e891b8: jmp    0x140e89296
0x00e891bd: lea    rdx,[rip+0x8c226c]        # 0x14174b430 ; literal="to satirize"
0x00e891c4: mov    rcx,r12
0x00e891c7: call   0x140070b20
0x00e891cc: mov    dil,0x1
0x00e891cf: jmp    0x140e89296
0x00e891d4: lea    rdx,[rip+0x8c223d]        # 0x14174b418 ; literal="to amuse the audience"
0x00e891db: jmp    0x140e8928c
0x00e891e0: lea    rdx,[rip+0x8c21c1]        # 0x14174b3a8 ; literal="to complain about"
0x00e891e7: mov    rcx,r12
0x00e891ea: call   0x140070b20
0x00e891ef: mov    dil,0x1
0x00e891f2: jmp    0x140e89296
0x00e891f7: lea    rdx,[rip+0x8c219a]        # 0x14174b398 ; literal="to renounce"
0x00e891fe: mov    rcx,r12
0x00e89201: call   0x140070b20
0x00e89206: jmp    0x140e89296
0x00e8920b: lea    rdx,[rip+0x8c21ce]        # 0x14174b3e0 ; literal="to make an apology"
0x00e89212: jmp    0x140e8928c
0x00e89214: lea    rdx,[rip+0x8c21a5]        # 0x14174b3c0 ; literal="to express pleasure with"
0x00e8921b: mov    rcx,r12
0x00e8921e: call   0x140070b20
0x00e89223: mov    dil,0x1
0x00e89226: jmp    0x140e89296
0x00e89228: lea    rdx,[rip+0x8c2281]        # 0x14174b4b0 ; literal="to express grief over"
0x00e8922f: mov    rcx,r12
0x00e89232: call   0x140070b20
0x00e89237: mov    dil,0x1
0x00e8923a: jmp    0x140e89296
0x00e8923c: lea    rdx,[rip+0x8c225d]        # 0x14174b4a0 ; literal="to praise"
0x00e89243: mov    rcx,r12
0x00e89246: call   0x140070b20
0x00e8924b: mov    dil,0x1
0x00e8924e: jmp    0x140e89296
0x00e89250: lea    rdx,[rip+0x8c2289]        # 0x14174b4e0 ; literal="to beseech"
0x00e89257: mov    rcx,r12
0x00e8925a: call   0x140070b20
0x00e8925f: jmp    0x140e89296
0x00e89261: lea    rdx,[rip+0x8c2260]        # 0x14174b4c8 ; literal="to teach a moral lesson"
0x00e89268: jmp    0x140e8928c
0x00e8926a: lea    rdx,[rip+0x8c21e7]        # 0x14174b458 ; literal="to make an assertion"
0x00e89271: jmp    0x140e8928c
0x00e89273: lea    rdx,[rip+0x8c21c6]        # 0x14174b440 ; literal="to make a concession"
0x00e8927a: jmp    0x140e8928c
0x00e8927c: lea    rdx,[rip+0x8c2205]        # 0x14174b488 ; literal="to console the audience"
0x00e89283: jmp    0x140e8928c
0x00e89285: lea    rdx,[rip+0x8c21e4]        # 0x14174b470 ; literal="to refuse consolation"
0x00e8928c: mov    rcx,r12
0x00e8928f: call   0x140070b20
0x00e89294: mov    bl,0x1
0x00e89296: cmp    DWORD PTR [r13+0xd4],0xffffffff
0x00e8929e: je     0x140e892dd
0x00e892a0: test   bl,bl
0x00e892a2: je     0x140e892b3
0x00e892a4: lea    rdx,[rip+0x8c2325]        # 0x14174b5d0 ; literal=" concerning"
0x00e892ab: mov    rcx,r12
0x00e892ae: call   0x140070b20
0x00e892b3: lea    rbx,[rip+0x7756b2]        # 0x1415fe96c ; literal=" "
0x00e892ba: mov    rdx,rbx
0x00e892bd: mov    rcx,r12
0x00e892c0: call   0x140070b20
0x00e892c5: mov    r8d,DWORD PTR [r13+0xd8]
0x00e892cc: mov    edx,DWORD PTR [r13+0xd4]
0x00e892d3: mov    rcx,r12
0x00e892d6: call   0x140e88cb0
0x00e892db: jmp    0x140e892f8
0x00e892dd: test   dil,dil
0x00e892e0: je     0x140e892f1
0x00e892e2: lea    rdx,[rip+0x8c22cf]        # 0x14174b5b8 ; literal=" a chosen subject"
0x00e892e9: mov    rcx,r12
0x00e892ec: call   0x140070b20
0x00e892f1: lea    rbx,[rip+0x775674]        # 0x1415fe96c ; literal=" "
0x00e892f8: mov    edx,DWORD PTR [r13+0x80]
0x00e892ff: xor    esi,esi
0x00e89301: mov    edi,0x1
0x00e89306: cmp    edx,0xffffffff
0x00e89309: je     0x140e89372
0x00e8930b: lea    rcx,[rip+0x1564866]        # 0x1423edb78
0x00e89312: call   0x14007f0b0
0x00e89317: mov    ecx,esi
0x00e89319: test   rax,rax
0x00e8931c: je     0x140e89325
0x00e8931e: cmp    WORD PTR [rax],0x8
0x00e89322: sete   cl
0x00e89325: lea    rax,[rip+0x8c22b4]        # 0x14174b5e0 ; literal=", originating in "
0x00e8932c: lea    rdx,[rip+0x7d7135]        # 0x141660468 ; literal=" which grew out of the performances of "
0x00e89333: test   ecx,ecx
0x00e89335: cmove  rdx,rax
0x00e89339: mov    rcx,r14
0x00e8933c: call   0x140070b20
0x00e89341: xor    r9d,r9d
0x00e89344: mov    r8d,DWORD PTR [r13+0x80]
0x00e8934b: mov    rdx,r12
0x00e8934e: lea    rcx,[rip+0x168cce3]        # 0x142516038
0x00e89355: call   0x140ba73e0
0x00e8935a: jmp    0x140e893be
0x00e8935c: cmp    DWORD PTR [r13+0xd4],0xffffffff
0x00e89364: je     0x140e892f8
0x00e89366: lea    rdx,[rip+0x8c228b]        # 0x14174b5f8 ; literal=" concerning "
0x00e8936d: jmp    0x140e892bd
0x00e89372: cmp    DWORD PTR [r13+0x84],0xffffffff
0x00e8937a: je     0x140e893be
0x00e8937c: lea    rcx,[rbp+0x130]
0x00e89383: call   0x140073640
0x00e89388: lea    rdx,[rip+0x7d7119]        # 0x1416604a8 ; literal=" originally devised by "
0x00e8938f: mov    rcx,r12
0x00e89392: call   0x140070b20
0x00e89397: mov    WORD PTR [rsp+0x28],si
0x00e8939c: mov    WORD PTR [rsp+0x20],di
0x00e893a1: lea    r9,[rbp+0x130]
0x00e893a8: mov    r8d,DWORD PTR [r13+0x84]
0x00e893af: mov    rdx,r12
0x00e893b2: lea    rcx,[rip+0x168cc7f]        # 0x142516038
0x00e893b9: call   0x140ba79f0
0x00e893be: lea    rdx,[rip+0x78b2bb]        # 0x141614680 ; literal=".  "
0x00e893c5: mov    rcx,r12
0x00e893c8: call   0x140070b20
0x00e893cd: test   BYTE PTR [r13+0x8c],0x2
0x00e893d5: lea    rax,[rip+0x8c2114]        # 0x14174b4f0 ; literal="The form guides poets during improvised performances.  "
0x00e893dc: lea    rdx,[rip+0x8c214d]        # 0x14174b530 ; literal="The rules of the form are applied by poets to produce individual poems which can be recited.  "
0x00e893e3: cmove  rdx,rax
0x00e893e7: mov    rcx,r14
0x00e893ea: call   0x140070b20
0x00e893ef: lea    rdx,[rip+0x8c21b2]        # 0x14174b5a8 ; literal="The poem "
0x00e893f6: mov    rcx,r12
0x00e893f9: call   0x140070b20
0x00e893fe: lea    rsi,[r13+0x90]
0x00e89405: mov    rcx,rsi
0x00e89408: call   0x140070410
0x00e8940d: cmp    rax,0x2
0x00e89411: jne    0x140e899a5
0x00e89417: lea    rdx,[rip+0x8c2172]        # 0x14174b590 ; literal="is divided into "
0x00e8941e: mov    rcx,r12
0x00e89421: call   0x140070b20
0x00e89426: xor    edx,edx
0x00e89428: mov    rcx,rsi
0x00e8942b: call   0x1400707e0
0x00e89430: mov    rcx,QWORD PTR [rax]
0x00e89433: mov    ebx,DWORD PTR [rcx+0xc]
0x00e89436: mov    rdx,rdi
0x00e89439: mov    rcx,rsi
0x00e8943c: call   0x1400707e0
0x00e89441: mov    rcx,QWORD PTR [rax]
0x00e89444: cmp    ebx,DWORD PTR [rcx+0xc]
0x00e89447: jne    0x140e895a9
0x00e8944d: xor    edx,edx
0x00e8944f: mov    rcx,rsi
0x00e89452: call   0x1400707e0
0x00e89457: mov    rcx,QWORD PTR [rax]
0x00e8945a: cmp    DWORD PTR [rcx+0x8],edi
0x00e8945d: jne    0x140e895a9
0x00e89463: mov    rdx,rdi
0x00e89466: mov    rcx,rsi
0x00e89469: call   0x1400707e0
0x00e8946e: mov    rcx,QWORD PTR [rax]
0x00e89471: cmp    DWORD PTR [rcx+0x8],edi
0x00e89474: jne    0x140e895a9
0x00e8947a: xor    edx,edx
0x00e8947c: mov    rcx,rsi
0x00e8947f: call   0x1400707e0
0x00e89484: mov    rcx,QWORD PTR [rax]
0x00e89487: test   BYTE PTR [rcx],0x2
0x00e8948a: jne    0x140e895a9
0x00e89490: mov    rdx,rdi
0x00e89493: mov    rcx,rsi
0x00e89496: call   0x1400707e0
0x00e8949b: mov    rcx,QWORD PTR [rax]
0x00e8949e: test   BYTE PTR [rcx],0x2
0x00e894a1: jne    0x140e895a9
0x00e894a7: lea    rdx,[rip+0x8c219a]        # 0x14174b648 ; literal="two distinct "
0x00e894ae: mov    rcx,r12
0x00e894b1: call   0x140070b20
0x00e894b6: xor    edx,edx
0x00e894b8: mov    rcx,rsi
0x00e894bb: call   0x1400707e0
0x00e894c0: mov    rbx,QWORD PTR [rax]
0x00e894c3: mov    eax,DWORD PTR [rbx+0xc]
0x00e894c6: cmp    eax,0x9
0x00e894c9: jl     0x140e89526
0x00e894cb: lea    rcx,[rbp+0x88]
0x00e894d2: call   0x140070c50
0x00e894d7: nop
0x00e894d8: lea    rdx,[rbp+0x88]
0x00e894df: mov    ecx,DWORD PTR [rbx+0xc]
0x00e894e2: call   0x140545040
0x00e894e7: lea    rdx,[rbp+0x88]
0x00e894ee: mov    rcx,r12
0x00e894f1: call   0x1400bb2d0
0x00e894f6: lea    rdx,[rip+0x8c213b]        # 0x14174b638 ; literal="-line stanza"
0x00e894fd: mov    rcx,r12
0x00e89500: call   0x140070b20
0x00e89505: nop
0x00e89506: lea    rcx,[rbp+0x88]
0x00e8950d: call   0x1400693f0
0x00e89512: lea    rdx,[rip+0x775faf]        # 0x1415ff4c8 ; literal="s"
0x00e89519: mov    rcx,r12
0x00e8951c: call   0x140070b20
0x00e89521: jmp    0x140e8a17e
0x00e89526: cmp    eax,0x8
0x00e89529: jne    0x140e89534
0x00e8952b: lea    rdx,[rip+0x8c212e]        # 0x14174b660 ; literal="octet"
0x00e89532: jmp    0x140e8958d
0x00e89534: cmp    eax,0x7
0x00e89537: jne    0x140e89542
0x00e89539: lea    rdx,[rip+0x8c2118]        # 0x14174b658 ; literal="septet"
0x00e89540: jmp    0x140e8958d
0x00e89542: cmp    eax,0x6
0x00e89545: jne    0x140e89550
0x00e89547: lea    rdx,[rip+0x8c20c6]        # 0x14174b614 ; literal="sexain"
0x00e8954e: jmp    0x140e8958d
0x00e89550: cmp    eax,0x5
0x00e89553: jne    0x140e8955e
0x00e89555: lea    rdx,[rip+0x8c20ac]        # 0x14174b608 ; literal="quintain"
0x00e8955c: jmp    0x140e8958d
0x00e8955e: cmp    eax,0x4
0x00e89561: jne    0x140e8956c
0x00e89563: lea    rdx,[rip+0x8c20be]        # 0x14174b628 ; literal="quatrain"
0x00e8956a: jmp    0x140e8958d
0x00e8956c: cmp    eax,0x3
0x00e8956f: jne    0x140e8957a
0x00e89571: lea    rdx,[rip+0x8c20a4]        # 0x14174b61c ; literal="tercet"
0x00e89578: jmp    0x140e8958d
0x00e8957a: cmp    eax,0x2
0x00e8957d: lea    rdx,[rip+0x8c2144]        # 0x14174b6c8 ; literal="couplet"
0x00e89584: je     0x140e8958d
0x00e89586: lea    rdx,[rip+0x8192df]        # 0x1416a286c ; literal="line"
0x00e8958d: mov    rcx,r12
0x00e89590: call   0x140070b20
0x00e89595: lea    rdx,[rip+0x775f2c]        # 0x1415ff4c8 ; literal="s"
0x00e8959c: mov    rcx,r12
0x00e8959f: call   0x140070b20
0x00e895a4: jmp    0x140e8a17e
0x00e895a9: xor    edi,edi
0x00e895ab: lea    r13,[rip+0x8c20d6]        # 0x14174b688 ; literal=" series of"
0x00e895b2: movsxd rdx,edi
0x00e895b5: mov    rcx,rsi
0x00e895b8: call   0x1400707e0
0x00e895bd: mov    rbx,QWORD PTR [rax]
0x00e895c0: xor    r15b,r15b
0x00e895c3: cmp    edi,0x1
0x00e895c6: jne    0x140e8970d
0x00e895cc: xor    edx,edx
0x00e895ce: mov    rcx,rsi
0x00e895d1: call   0x1400707e0
0x00e895d6: mov    rcx,QWORD PTR [rax]
0x00e895d9: mov    eax,DWORD PTR [rcx+0xc]
0x00e895dc: cmp    DWORD PTR [rbx+0xc],eax
0x00e895df: je     0x140e89600
0x00e895e1: test   BYTE PTR [rbx],0x2
0x00e895e4: je     0x140e8970d
0x00e895ea: xor    edx,edx
0x00e895ec: mov    rcx,rsi
0x00e895ef: call   0x1400707e0
0x00e895f4: mov    rcx,QWORD PTR [rax]
0x00e895f7: test   BYTE PTR [rcx],0x2
0x00e895fa: je     0x140e8970d
0x00e89600: lea    rdx,[rip+0x8c20b9]        # 0x14174b6c0 ; literal="another"
0x00e89607: mov    rcx,r12
0x00e8960a: call   0x140070b20
0x00e8960f: mov    eax,DWORD PTR [rbx+0x8]
0x00e89612: cmp    eax,0xa
0x00e89615: jl     0x140e8964b
0x00e89617: cmp    eax,0x64
0x00e8961a: jl     0x140e89630
0x00e8961c: lea    rdx,[rip+0x8c20c5]        # 0x14174b6e8 ; literal=" extremely long series of"
0x00e89623: mov    rcx,r14
0x00e89626: call   0x140070b20
0x00e8962b: jmp    0x140e8981c
0x00e89630: lea    rdx,[rip+0x8c2099]        # 0x14174b6d0 ; literal=" numerous series of"
0x00e89637: cmp    eax,0x32
0x00e8963a: cmovl  rdx,r13
0x00e8963e: mov    rcx,r14
0x00e89641: call   0x140070b20
0x00e89646: jmp    0x140e8981c
0x00e8964b: lea    rdx,[rip+0x77531a]        # 0x1415fe96c ; literal=" "
0x00e89652: mov    rcx,r12
0x00e89655: cmp    DWORD PTR [rbx+0x4],eax
0x00e89658: jne    0x140e89690
0x00e8965a: call   0x140070b20
0x00e8965f: lea    rcx,[rbp+0x88]
0x00e89666: call   0x140070c50
0x00e8966b: nop
0x00e8966c: lea    rdx,[rbp+0x88]
0x00e89673: mov    ecx,DWORD PTR [rbx+0x4]
0x00e89676: call   0x140545040
0x00e8967b: lea    rdx,[rbp+0x88]
0x00e89682: mov    rcx,r12
0x00e89685: call   0x1400bb2d0
0x00e8968a: nop
0x00e8968b: jmp    0x140e89810
0x00e89690: call   0x140070b20
0x00e89695: lea    rcx,[rbp+0x88]
0x00e8969c: call   0x140070c50
0x00e896a1: nop
0x00e896a2: lea    rdx,[rbp+0x88]
0x00e896a9: mov    ecx,DWORD PTR [rbx+0x4]
0x00e896ac: call   0x140545040
0x00e896b1: lea    rdx,[rbp+0x88]
0x00e896b8: mov    rcx,r12
0x00e896bb: call   0x1400bb2d0
0x00e896c0: nop
0x00e896c1: lea    rcx,[rbp+0x88]
0x00e896c8: call   0x1400693f0
0x00e896cd: lea    rdx,[rip+0x77a0c0]        # 0x141603794 ; literal=" to "
0x00e896d4: mov    rcx,r12
0x00e896d7: call   0x140070b20
0x00e896dc: lea    rcx,[rbp+0x88]
0x00e896e3: call   0x140070c50
0x00e896e8: nop
0x00e896e9: lea    rdx,[rbp+0x88]
0x00e896f0: mov    ecx,DWORD PTR [rbx+0x8]
0x00e896f3: call   0x140545040
0x00e896f8: lea    rdx,[rbp+0x88]
0x00e896ff: mov    rcx,r12
0x00e89702: call   0x1400bb2d0
0x00e89707: nop
0x00e89708: jmp    0x140e89810
0x00e8970d: mov    ecx,DWORD PTR [rbx+0x4]
0x00e89710: cmp    ecx,0x1
0x00e89713: jne    0x140e89731
0x00e89715: cmp    DWORD PTR [rbx+0x8],ecx
0x00e89718: jne    0x140e89731
0x00e8971a: lea    rdx,[rip+0x790207]        # 0x141619928 ; literal="a"
0x00e89721: mov    rcx,r12
0x00e89724: call   0x140070b20
0x00e89729: mov    r15b,0x1
0x00e8972c: jmp    0x140e8981c
0x00e89731: mov    eax,DWORD PTR [rbx+0x8]
0x00e89734: cmp    eax,0xa
0x00e89737: jl     0x140e89772
0x00e89739: cmp    eax,0x64
0x00e8973c: jl     0x140e89752
0x00e8973e: lea    rdx,[rip+0x8c1f23]        # 0x14174b668 ; literal="an extremely long series of"
0x00e89745: mov    rcx,r12
0x00e89748: call   0x140070b20
0x00e8974d: jmp    0x140e8981c
0x00e89752: cmp    eax,0x32
0x00e89755: lea    rdx,[rip+0x8c1f4c]        # 0x14174b6a8 ; literal="numerous series of"
0x00e8975c: jge    0x140e89765
0x00e8975e: lea    rdx,[rip+0x8c1f33]        # 0x14174b698 ; literal="a series of"
0x00e89765: mov    rcx,r12
0x00e89768: call   0x140070b20
0x00e8976d: jmp    0x140e8981c
0x00e89772: cmp    ecx,eax
0x00e89774: lea    rcx,[rbp+0x88]
0x00e8977b: jne    0x140e897a4
0x00e8977d: call   0x140070c50
0x00e89782: nop
0x00e89783: lea    rdx,[rbp+0x88]
0x00e8978a: mov    ecx,DWORD PTR [rbx+0x4]
0x00e8978d: call   0x140545040
0x00e89792: lea    rdx,[rbp+0x88]
0x00e89799: mov    rcx,r12
0x00e8979c: call   0x1400bb2d0
0x00e897a1: nop
0x00e897a2: jmp    0x140e89810
0x00e897a4: call   0x140070c50
0x00e897a9: nop
0x00e897aa: lea    rdx,[rbp+0x88]
0x00e897b1: mov    ecx,DWORD PTR [rbx+0x4]
0x00e897b4: call   0x140545040
0x00e897b9: lea    rdx,[rbp+0x88]
0x00e897c0: mov    rcx,r12
0x00e897c3: call   0x1400bb2d0
0x00e897c8: nop
0x00e897c9: lea    rcx,[rbp+0x88]
0x00e897d0: call   0x1400693f0
0x00e897d5: lea    rdx,[rip+0x779fb8]        # 0x141603794 ; literal=" to "
0x00e897dc: mov    rcx,r12
0x00e897df: call   0x140070b20
0x00e897e4: lea    rcx,[rbp+0x88]
0x00e897eb: call   0x140070c50
0x00e897f0: nop
0x00e897f1: lea    rdx,[rbp+0x88]
0x00e897f8: mov    ecx,DWORD PTR [rbx+0x8]
0x00e897fb: call   0x140545040
0x00e89800: lea    rdx,[rbp+0x88]
0x00e89807: mov    rcx,r12
0x00e8980a: call   0x1400bb2d0
0x00e8980f: nop
0x00e89810: lea    rcx,[rbp+0x88]
0x00e89817: call   0x1400693f0
0x00e8981c: test   BYTE PTR [rbx],0x2
0x00e8981f: je     0x140e89873
0x00e89821: lea    rdx,[rip+0x775144]        # 0x1415fe96c ; literal=" "
0x00e89828: mov    rcx,r12
0x00e8982b: call   0x140070b20
0x00e89830: mov    eax,DWORD PTR [rbx+0xc]
0x00e89833: cmp    eax,0x5
0x00e89836: jg     0x140e89853
0x00e89838: lea    rdx,[rip+0x8c13c9]        # 0x14174ac08 ; literal="brief "
0x00e8983f: mov    rcx,r12
0x00e89842: call   0x140070b20
0x00e89847: lea    rdx,[rip+0x8c13aa]        # 0x14174abf8 ; literal="verse paragraph"
0x00e8984e: jmp    0x140e8995a
0x00e89853: cmp    eax,0x15
0x00e89856: jl     0x140e89867
0x00e89858: lea    rdx,[rip+0x81703d]        # 0x1416a089c ; literal="long "
0x00e8985f: mov    rcx,r12
0x00e89862: call   0x140070b20
0x00e89867: lea    rdx,[rip+0x8c138a]        # 0x14174abf8 ; literal="verse paragraph"
0x00e8986e: jmp    0x140e8995a
0x00e89873: mov    eax,DWORD PTR [rbx+0xc]
0x00e89876: cmp    eax,0x9
0x00e89879: jl     0x140e898d6
0x00e8987b: lea    rdx,[rip+0x7750ea]        # 0x1415fe96c ; literal=" "
0x00e89882: mov    rcx,r12
0x00e89885: call   0x140070b20
0x00e8988a: lea    rcx,[rbp+0x88]
0x00e89891: call   0x140070c50
0x00e89896: nop
0x00e89897: lea    rdx,[rbp+0x88]
0x00e8989e: mov    ecx,DWORD PTR [rbx+0xc]
0x00e898a1: call   0x140545040
0x00e898a6: lea    rdx,[rbp+0x88]
0x00e898ad: mov    rcx,r12
0x00e898b0: call   0x1400bb2d0
0x00e898b5: lea    rdx,[rip+0x8c1d7c]        # 0x14174b638 ; literal="-line stanza"
0x00e898bc: mov    rcx,r12
0x00e898bf: call   0x140070b20
0x00e898c4: nop
0x00e898c5: lea    rcx,[rbp+0x88]
0x00e898cc: call   0x1400693f0
0x00e898d1: jmp    0x140e89962
0x00e898d6: cmp    eax,0x8
0x00e898d9: jne    0x140e89901
0x00e898db: lea    rdx,[rip+0x8c1336]        # 0x14174ac18 ; literal="n "
0x00e898e2: test   r15b,r15b
0x00e898e5: lea    rax,[rip+0x775080]        # 0x1415fe96c ; literal=" "
0x00e898ec: cmove  rdx,rax
0x00e898f0: mov    rcx,r12
0x00e898f3: call   0x140070b20
0x00e898f8: lea    rdx,[rip+0x8c1d61]        # 0x14174b660 ; literal="octet"
0x00e898ff: jmp    0x140e8995a
0x00e89901: cmp    eax,0x7
0x00e89904: jne    0x140e8990f
0x00e89906: lea    rdx,[rip+0x8c1303]        # 0x14174ac10 ; literal=" septet"
0x00e8990d: jmp    0x140e8995a
0x00e8990f: cmp    eax,0x6
0x00e89912: jne    0x140e8991d
0x00e89914: lea    rdx,[rip+0x8c12bd]        # 0x14174abd8 ; literal=" sexain"
0x00e8991b: jmp    0x140e8995a
0x00e8991d: cmp    eax,0x5
0x00e89920: jne    0x140e8992b
0x00e89922: lea    rdx,[rip+0x8c129f]        # 0x14174abc8 ; literal=" quintain"
0x00e89929: jmp    0x140e8995a
0x00e8992b: cmp    eax,0x4
0x00e8992e: jne    0x140e89939
0x00e89930: lea    rdx,[rip+0x8c12b1]        # 0x14174abe8 ; literal=" quatrain"
0x00e89937: jmp    0x140e8995a
0x00e89939: cmp    eax,0x3
0x00e8993c: jne    0x140e89947
0x00e8993e: lea    rdx,[rip+0x8c129b]        # 0x14174abe0 ; literal=" tercet"
0x00e89945: jmp    0x140e8995a
0x00e89947: cmp    eax,0x2
0x00e8994a: lea    rdx,[rip+0x8c133f]        # 0x14174ac90 ; literal=" couplet"
0x00e89951: je     0x140e8995a
0x00e89953: lea    rdx,[rip+0x7a82f6]        # 0x141631c50 ; literal=" line"
0x00e8995a: mov    rcx,r12
0x00e8995d: call   0x140070b20
0x00e89962: cmp    DWORD PTR [rbx+0x8],0x2
0x00e89966: jl     0x140e89977
0x00e89968: lea    rdx,[rip+0x775b59]        # 0x1415ff4c8 ; literal="s"
0x00e8996f: mov    rcx,r12
0x00e89972: call   0x140070b20
0x00e89977: test   edi,edi
0x00e89979: jne    0x140e89991
0x00e8997b: lea    rdx,[rip+0x7759be]        # 0x1415ff340 ; literal=" and "
0x00e89982: mov    rcx,r12
0x00e89985: call   0x140070b20
0x00e8998a: inc    edi
0x00e8998c: jmp    0x140e895b2
0x00e89991: inc    edi
0x00e89993: cmp    edi,0x2
0x00e89996: jl     0x140e895b2
0x00e8999c: mov    r13,QWORD PTR [rbp-0x60]
0x00e899a0: jmp    0x140e8a172
0x00e899a5: xorps  xmm0,xmm0
0x00e899a8: xor    eax,eax
0x00e899aa: movups XMMWORD PTR [rbp+0x130],xmm0
0x00e899b1: movups XMMWORD PTR [rbp+0x140],xmm0
0x00e899b8: movups XMMWORD PTR [rbp+0x150],xmm0
0x00e899bf: movups XMMWORD PTR [rbp+0x160],xmm0
0x00e899c6: movups XMMWORD PTR [rbp+0x170],xmm0
0x00e899cd: movups XMMWORD PTR [rbp+0x180],xmm0
0x00e899d4: movups XMMWORD PTR [rbp+0x190],xmm0
0x00e899db: mov    QWORD PTR [rbp+0x1a0],rax
0x00e899e2: mov    DWORD PTR [rbp+0x1a8],eax
0x00e899e8: mov    rcx,rsi
0x00e899eb: call   0x140070410
0x00e899f0: mov    rcx,r12
0x00e899f3: cmp    rax,0x3
0x00e899f7: jb     0x140e89a56
0x00e899f9: lea    rdx,[rip+0x8c1b90]        # 0x14174b590 ; literal="is divided into "
0x00e89a00: call   0x140070b20
0x00e89a05: lea    rcx,[rbp+0x88]
0x00e89a0c: call   0x140070c50
0x00e89a11: nop
0x00e89a12: mov    rcx,rsi
0x00e89a15: call   0x140070410
0x00e89a1a: mov    rcx,rax
0x00e89a1d: lea    rdx,[rbp+0x88]
0x00e89a24: call   0x140545040
0x00e89a29: lea    rdx,[rbp+0x88]
0x00e89a30: mov    rcx,r12
0x00e89a33: call   0x1400bb2d0
0x00e89a38: lea    rdx,[rip+0x8c1239]        # 0x14174ac78 ; literal=" distinct parts: "
0x00e89a3f: mov    rcx,r12
0x00e89a42: call   0x140070b20
0x00e89a47: nop
0x00e89a48: lea    rcx,[rbp+0x88]
0x00e89a4f: call   0x1400693f0
0x00e89a54: jmp    0x140e89a62
0x00e89a56: lea    rdx,[rip+0x78f76b]        # 0x1416191c8 ; literal="is "
0x00e89a5d: call   0x140070b20
0x00e89a62: mov    rcx,rsi
0x00e89a65: call   0x140070410
0x00e89a6a: mov    r14,rax
0x00e89a6d: lea    rdx,[rsp+0x38]
0x00e89a72: mov    rcx,rsi
0x00e89a75: call   0x140070800
0x00e89a7a: lea    rdx,[rsp+0x78]
0x00e89a7f: mov    rcx,rsi
0x00e89a82: call   0x1400707f0
0x00e89a87: lea    r8,[rsp+0x78]
0x00e89a8c: lea    rdx,[rsp+0x32]
0x00e89a91: lea    rcx,[rsp+0x38]
0x00e89a96: call   0x1400703e0
0x00e89a9b: xor    edx,edx
0x00e89a9d: movzx  ecx,BYTE PTR [rax]
0x00e89aa0: call   0x140066d70
0x00e89aa5: test   al,al
0x00e89aa7: je     0x140e8a17e
0x00e89aad: mov    edi,DWORD PTR [rbp+0x130]
0x00e89ab3: xor    r15b,r15b
0x00e89ab6: lea    rcx,[rsp+0x38]
0x00e89abb: call   0x1400703d0
0x00e89ac0: mov    rcx,QWORD PTR [rax]
0x00e89ac3: test   BYTE PTR [rcx],0x2
0x00e89ac6: je     0x140e89b0d
0x00e89ac8: test   edi,edi
0x00e89aca: jg     0x140e89b4e
0x00e89ad0: mov    rcx,rsi
0x00e89ad3: call   0x140070410
0x00e89ad8: cmp    rax,0x1
0x00e89adc: jne    0x140e89ccd
0x00e89ae2: lea    rcx,[rsp+0x38]
0x00e89ae7: call   0x1400703d0
0x00e89aec: mov    rcx,QWORD PTR [rax]
0x00e89aef: cmp    DWORD PTR [rcx+0x8],0x1
0x00e89af3: jne    0x140e89ccd
0x00e89af9: lea    rdx,[rip+0x8c1130]        # 0x14174ac30 ; literal="a single"
0x00e89b00: mov    rcx,r12
0x00e89b03: call   0x140070b20
0x00e89b08: jmp    0x140e89e69
0x00e89b0d: lea    rcx,[rsp+0x38]
0x00e89b12: call   0x1400703d0
0x00e89b17: mov    rcx,QWORD PTR [rax]
0x00e89b1a: cmp    DWORD PTR [rcx+0xc],0x1
0x00e89b1e: jl     0x140e89ad0
0x00e89b20: lea    rcx,[rsp+0x38]
0x00e89b25: call   0x1400703d0
0x00e89b2a: mov    rcx,QWORD PTR [rax]
0x00e89b2d: cmp    DWORD PTR [rcx+0xc],0x1e
0x00e89b31: jg     0x140e89ad0
0x00e89b33: lea    rcx,[rsp+0x38]
0x00e89b38: call   0x1400703d0
0x00e89b3d: mov    rcx,QWORD PTR [rax]
0x00e89b40: movsxd rax,DWORD PTR [rcx+0xc]
0x00e89b44: cmp    DWORD PTR [rbp+rax*4+0x130],0x0
0x00e89b4c: je     0x140e89ad0
0x00e89b4e: lea    rdx,[rip+0x8c1b6b]        # 0x14174b6c0 ; literal="another"
0x00e89b55: mov    rcx,r12
0x00e89b58: call   0x140070b20
0x00e89b5d: lea    rcx,[rsp+0x38]
0x00e89b62: call   0x1400703d0
0x00e89b67: mov    rcx,QWORD PTR [rax]
0x00e89b6a: cmp    DWORD PTR [rcx+0x8],0x1
0x00e89b6e: jle    0x140e89e69
0x00e89b74: mov    rdx,rbx
0x00e89b77: mov    rcx,r12
0x00e89b7a: call   0x140070b20
0x00e89b7f: lea    rcx,[rsp+0x38]
0x00e89b84: call   0x1400703d0
0x00e89b89: mov    rcx,QWORD PTR [rax]
0x00e89b8c: cmp    DWORD PTR [rcx+0x8],0xa
0x00e89b90: lea    rcx,[rsp+0x38]
0x00e89b95: jl     0x140e89be7
0x00e89b97: call   0x1400703d0
0x00e89b9c: mov    rcx,QWORD PTR [rax]
0x00e89b9f: cmp    DWORD PTR [rcx+0x8],0x64
0x00e89ba3: jl     0x140e89bb9
0x00e89ba5: lea    rdx,[rip+0x8c1104]        # 0x14174acb0 ; literal="extremely long series of"
0x00e89bac: mov    rcx,r12
0x00e89baf: call   0x140070b20
0x00e89bb4: jmp    0x140e89e69
0x00e89bb9: lea    rcx,[rsp+0x38]
0x00e89bbe: call   0x1400703d0
0x00e89bc3: mov    rcx,QWORD PTR [rax]
0x00e89bc6: cmp    DWORD PTR [rcx+0x8],0x32
0x00e89bca: lea    rdx,[rip+0x8c1ad7]        # 0x14174b6a8 ; literal="numerous series of"
0x00e89bd1: jge    0x140e89bda
0x00e89bd3: lea    rdx,[rip+0x8c10c6]        # 0x14174aca0 ; literal="series of"
0x00e89bda: mov    rcx,r12
0x00e89bdd: call   0x140070b20
0x00e89be2: jmp    0x140e89e69
0x00e89be7: call   0x1400703d0
0x00e89bec: mov    rbx,QWORD PTR [rax]
0x00e89bef: lea    rcx,[rsp+0x38]
0x00e89bf4: call   0x1400703d0
0x00e89bf9: mov    rcx,QWORD PTR [rax]
0x00e89bfc: mov    eax,DWORD PTR [rbx+0x8]
0x00e89bff: cmp    DWORD PTR [rcx+0x4],eax
0x00e89c02: lea    rcx,[rbp+0x88]
0x00e89c09: jne    0x140e89c42
0x00e89c0b: call   0x140070c50
0x00e89c10: nop
0x00e89c11: lea    rcx,[rsp+0x38]
0x00e89c16: call   0x1400703d0
0x00e89c1b: mov    rcx,QWORD PTR [rax]
0x00e89c1e: lea    rdx,[rbp+0x88]
0x00e89c25: mov    ecx,DWORD PTR [rcx+0x4]
0x00e89c28: call   0x140545040
0x00e89c2d: lea    rdx,[rbp+0x88]
0x00e89c34: mov    rcx,r12
0x00e89c37: call   0x1400bb2d0
0x00e89c3c: nop
0x00e89c3d: jmp    0x140e89e5d
0x00e89c42: call   0x140070c50
0x00e89c47: nop
0x00e89c48: lea    rcx,[rsp+0x38]
0x00e89c4d: call   0x1400703d0
0x00e89c52: mov    rcx,QWORD PTR [rax]
0x00e89c55: lea    rdx,[rbp+0x88]
0x00e89c5c: mov    ecx,DWORD PTR [rcx+0x4]
0x00e89c5f: call   0x140545040
0x00e89c64: lea    rdx,[rbp+0x88]
0x00e89c6b: mov    rcx,r12
0x00e89c6e: call   0x1400bb2d0
0x00e89c73: nop
0x00e89c74: lea    rcx,[rbp+0x88]
0x00e89c7b: call   0x1400693f0
0x00e89c80: lea    rdx,[rip+0x779b0d]        # 0x141603794 ; literal=" to "
0x00e89c87: mov    rcx,r12
0x00e89c8a: call   0x140070b20
0x00e89c8f: lea    rcx,[rbp+0x88]
0x00e89c96: call   0x140070c50
0x00e89c9b: nop
0x00e89c9c: lea    rcx,[rsp+0x38]
0x00e89ca1: call   0x1400703d0
0x00e89ca6: mov    rcx,QWORD PTR [rax]
0x00e89ca9: lea    rdx,[rbp+0x88]
0x00e89cb0: mov    ecx,DWORD PTR [rcx+0x8]
0x00e89cb3: call   0x140545040
0x00e89cb8: lea    rdx,[rbp+0x88]
0x00e89cbf: mov    rcx,r12
0x00e89cc2: call   0x1400bb2d0
0x00e89cc7: nop
0x00e89cc8: jmp    0x140e89e5d
0x00e89ccd: lea    rcx,[rsp+0x38]
0x00e89cd2: call   0x1400703d0
0x00e89cd7: mov    rcx,QWORD PTR [rax]
0x00e89cda: cmp    DWORD PTR [rcx+0x4],0x1
0x00e89cde: jne    0x140e89d0a
0x00e89ce0: lea    rcx,[rsp+0x38]
0x00e89ce5: call   0x1400703d0
0x00e89cea: mov    rcx,QWORD PTR [rax]
0x00e89ced: cmp    DWORD PTR [rcx+0x8],0x1
0x00e89cf1: jne    0x140e89d0a
0x00e89cf3: lea    rdx,[rip+0x78fc2e]        # 0x141619928 ; literal="a"
0x00e89cfa: mov    rcx,r12
0x00e89cfd: call   0x140070b20
0x00e89d02: mov    r15b,0x1
0x00e89d05: jmp    0x140e89e69
0x00e89d0a: lea    rcx,[rsp+0x38]
0x00e89d0f: call   0x1400703d0
0x00e89d14: mov    rcx,QWORD PTR [rax]
0x00e89d17: cmp    DWORD PTR [rcx+0x8],0xa
0x00e89d1b: lea    rcx,[rsp+0x38]
0x00e89d20: jl     0x140e89d7c
0x00e89d22: call   0x1400703d0
0x00e89d27: mov    rcx,QWORD PTR [rax]
0x00e89d2a: cmp    DWORD PTR [rcx+0x8],0x64
0x00e89d2e: jl     0x140e89d44
0x00e89d30: lea    rdx,[rip+0x8c1931]        # 0x14174b668 ; literal="an extremely long series of"
0x00e89d37: mov    rcx,r12
0x00e89d3a: call   0x140070b20
0x00e89d3f: jmp    0x140e89e69
0x00e89d44: lea    rcx,[rsp+0x38]
0x00e89d49: call   0x1400703d0
0x00e89d4e: mov    rcx,QWORD PTR [rax]
0x00e89d51: cmp    DWORD PTR [rcx+0x8],0x32
0x00e89d55: mov    rcx,r12
0x00e89d58: jl     0x140e89d6b
0x00e89d5a: lea    rdx,[rip+0x8c1947]        # 0x14174b6a8 ; literal="numerous series of"
0x00e89d61: call   0x140070b20
0x00e89d66: jmp    0x140e89e69
0x00e89d6b: lea    rdx,[rip+0x8c1926]        # 0x14174b698 ; literal="a series of"
0x00e89d72: call   0x140070b20
0x00e89d77: jmp    0x140e89e69
0x00e89d7c: call   0x1400703d0
0x00e89d81: mov    rbx,QWORD PTR [rax]
0x00e89d84: lea    rcx,[rsp+0x38]
0x00e89d89: call   0x1400703d0
0x00e89d8e: mov    rcx,QWORD PTR [rax]
0x00e89d91: mov    eax,DWORD PTR [rbx+0x8]
0x00e89d94: cmp    DWORD PTR [rcx+0x4],eax
0x00e89d97: lea    rcx,[rbp+0x88]
0x00e89d9e: jne    0x140e89dd7
0x00e89da0: call   0x140070c50
0x00e89da5: nop
0x00e89da6: lea    rcx,[rsp+0x38]
0x00e89dab: call   0x1400703d0
0x00e89db0: mov    rcx,QWORD PTR [rax]
0x00e89db3: lea    rdx,[rbp+0x88]
0x00e89dba: mov    ecx,DWORD PTR [rcx+0x4]
0x00e89dbd: call   0x140545040
0x00e89dc2: lea    rdx,[rbp+0x88]
0x00e89dc9: mov    rcx,r12
0x00e89dcc: call   0x1400bb2d0
0x00e89dd1: nop
0x00e89dd2: jmp    0x140e89e5d
0x00e89dd7: call   0x140070c50
0x00e89ddc: nop
0x00e89ddd: lea    rcx,[rsp+0x38]
0x00e89de2: call   0x1400703d0
0x00e89de7: mov    rcx,QWORD PTR [rax]
0x00e89dea: lea    rdx,[rbp+0x88]
0x00e89df1: mov    ecx,DWORD PTR [rcx+0x4]
0x00e89df4: call   0x140545040
0x00e89df9: lea    rdx,[rbp+0x88]
0x00e89e00: mov    rcx,r12
0x00e89e03: call   0x1400bb2d0
0x00e89e08: nop
0x00e89e09: lea    rcx,[rbp+0x88]
0x00e89e10: call   0x1400693f0
0x00e89e15: lea    rdx,[rip+0x779978]        # 0x141603794 ; literal=" to "
0x00e89e1c: mov    rcx,r12
0x00e89e1f: call   0x140070b20
0x00e89e24: lea    rcx,[rbp+0x88]
0x00e89e2b: call   0x140070c50
0x00e89e30: nop
0x00e89e31: lea    rcx,[rsp+0x38]
0x00e89e36: call   0x1400703d0
0x00e89e3b: mov    rcx,QWORD PTR [rax]
0x00e89e3e: lea    rdx,[rbp+0x88]
0x00e89e45: mov    ecx,DWORD PTR [rcx+0x8]
0x00e89e48: call   0x140545040
0x00e89e4d: lea    rdx,[rbp+0x88]
0x00e89e54: mov    rcx,r12
0x00e89e57: call   0x1400bb2d0
0x00e89e5c: nop
0x00e89e5d: lea    rcx,[rbp+0x88]
0x00e89e64: call   0x1400693f0
0x00e89e69: lea    rcx,[rsp+0x38]
0x00e89e6e: call   0x1400703d0
0x00e89e73: mov    rcx,QWORD PTR [rax]
0x00e89e76: test   BYTE PTR [rcx],0x2
0x00e89e79: je     0x140e89f14
0x00e89e7f: lea    rbx,[rip+0x774ae6]        # 0x1415fe96c ; literal=" "
0x00e89e86: mov    rdx,rbx
0x00e89e89: mov    rcx,r12
0x00e89e8c: call   0x140070b20
0x00e89e91: lea    rcx,[rsp+0x38]
0x00e89e96: call   0x1400703d0
0x00e89e9b: mov    rcx,QWORD PTR [rax]
0x00e89e9e: cmp    DWORD PTR [rcx+0xc],0x5
0x00e89ea2: jg     0x140e89ead
0x00e89ea4: lea    rdx,[rip+0x8c0d5d]        # 0x14174ac08 ; literal="brief "
0x00e89eab: jmp    0x140e89ece
0x00e89ead: lea    rcx,[rsp+0x38]
0x00e89eb2: call   0x1400703d0
0x00e89eb7: mov    rcx,QWORD PTR [rax]
0x00e89eba: cmp    DWORD PTR [rcx+0xc],0x15
0x00e89ebe: lea    rdx,[rip+0x8c0d5b]        # 0x14174ac20 ; literal="lengthy "
0x00e89ec5: jge    0x140e89ece
0x00e89ec7: lea    rdx,[rip+0x8c0d9e]        # 0x14174ac6c ; literal="full "
0x00e89ece: mov    rcx,r12
0x00e89ed1: call   0x140070b20
0x00e89ed6: lea    rdx,[rip+0x8c0d1b]        # 0x14174abf8 ; literal="verse paragraph"
0x00e89edd: mov    rcx,r12
0x00e89ee0: call   0x140070b20
0x00e89ee5: lea    rcx,[rsp+0x38]
0x00e89eea: call   0x1400703d0
0x00e89eef: mov    rcx,QWORD PTR [rax]
0x00e89ef2: cmp    DWORD PTR [rcx+0x8],0x2
0x00e89ef6: jl     0x140e89f07
0x00e89ef8: lea    rdx,[rip+0x7755c9]        # 0x1415ff4c8 ; literal="s"
0x00e89eff: mov    rcx,r12
0x00e89f02: call   0x140070b20
0x00e89f07: inc    edi
0x00e89f09: mov    DWORD PTR [rbp+0x130],edi
0x00e89f0f: jmp    0x140e8a11f
0x00e89f14: lea    rcx,[rsp+0x38]
0x00e89f19: call   0x1400703d0
0x00e89f1e: mov    rcx,QWORD PTR [rax]
0x00e89f21: cmp    DWORD PTR [rcx+0xc],0x9
0x00e89f25: jl     0x140e89f92
0x00e89f27: lea    rbx,[rip+0x774a3e]        # 0x1415fe96c ; literal=" "
0x00e89f2e: mov    rdx,rbx
0x00e89f31: mov    rcx,r12
0x00e89f34: call   0x140070b20
0x00e89f39: lea    rcx,[rbp+0x88]
0x00e89f40: call   0x140070c50
0x00e89f45: nop
0x00e89f46: lea    rcx,[rsp+0x38]
0x00e89f4b: call   0x1400703d0
0x00e89f50: mov    rcx,QWORD PTR [rax]
0x00e89f53: lea    rdx,[rbp+0x88]
0x00e89f5a: mov    ecx,DWORD PTR [rcx+0xc]
0x00e89f5d: call   0x140545040
0x00e89f62: lea    rdx,[rbp+0x88]
0x00e89f69: mov    rcx,r12
0x00e89f6c: call   0x1400bb2d0
0x00e89f71: lea    rdx,[rip+0x8c16c0]        # 0x14174b638 ; literal="-line stanza"
0x00e89f78: mov    rcx,r12
0x00e89f7b: call   0x140070b20
0x00e89f80: nop
0x00e89f81: lea    rcx,[rbp+0x88]
0x00e89f88: call   0x1400693f0
0x00e89f8d: jmp    0x140e8a0b9
0x00e89f92: lea    rcx,[rsp+0x38]
0x00e89f97: call   0x1400703d0
0x00e89f9c: mov    rcx,QWORD PTR [rax]
0x00e89f9f: cmp    DWORD PTR [rcx+0xc],0x8
0x00e89fa3: jne    0x140e89ff7
0x00e89fa5: mov    rcx,r12
0x00e89fa8: test   r15b,r15b
0x00e89fab: je     0x140e89fd4
0x00e89fad: lea    rdx,[rip+0x8c0c64]        # 0x14174ac18 ; literal="n "
0x00e89fb4: call   0x140070b20
0x00e89fb9: lea    rbx,[rip+0x7749ac]        # 0x1415fe96c ; literal=" "
0x00e89fc0: lea    rdx,[rip+0x8c1699]        # 0x14174b660 ; literal="octet"
0x00e89fc7: mov    rcx,r12
0x00e89fca: call   0x140070b20
0x00e89fcf: jmp    0x140e8a0b9
0x00e89fd4: lea    rbx,[rip+0x774991]        # 0x1415fe96c ; literal=" "
0x00e89fdb: mov    rdx,rbx
0x00e89fde: call   0x140070b20
0x00e89fe3: lea    rdx,[rip+0x8c1676]        # 0x14174b660 ; literal="octet"
0x00e89fea: mov    rcx,r12
0x00e89fed: call   0x140070b20
0x00e89ff2: jmp    0x140e8a0b9
0x00e89ff7: lea    rcx,[rsp+0x38]
0x00e89ffc: call   0x1400703d0
0x00e8a001: mov    rcx,QWORD PTR [rax]
0x00e8a004: cmp    DWORD PTR [rcx+0xc],0x7
0x00e8a008: jne    0x140e8a016
0x00e8a00a: lea    rdx,[rip+0x8c0bff]        # 0x14174ac10 ; literal=" septet"
0x00e8a011: jmp    0x140e8a0aa
0x00e8a016: lea    rcx,[rsp+0x38]
0x00e8a01b: call   0x1400703d0
0x00e8a020: mov    rcx,QWORD PTR [rax]
0x00e8a023: cmp    DWORD PTR [rcx+0xc],0x6
0x00e8a027: jne    0x140e8a035
0x00e8a029: lea    rdx,[rip+0x8c0ba8]        # 0x14174abd8 ; literal=" sexain"
0x00e8a030: jmp    0x140e8a0aa
0x00e8a035: lea    rcx,[rsp+0x38]
0x00e8a03a: call   0x1400703d0
0x00e8a03f: mov    rcx,QWORD PTR [rax]
0x00e8a042: cmp    DWORD PTR [rcx+0xc],0x5
0x00e8a046: jne    0x140e8a051
0x00e8a048: lea    rdx,[rip+0x8c0b79]        # 0x14174abc8 ; literal=" quintain"
0x00e8a04f: jmp    0x140e8a0aa
0x00e8a051: lea    rcx,[rsp+0x38]
0x00e8a056: call   0x1400703d0
0x00e8a05b: mov    rcx,QWORD PTR [rax]
0x00e8a05e: cmp    DWORD PTR [rcx+0xc],0x4
0x00e8a062: jne    0x140e8a06d
0x00e8a064: lea    rdx,[rip+0x8c0b7d]        # 0x14174abe8 ; literal=" quatrain"
0x00e8a06b: jmp    0x140e8a0aa
0x00e8a06d: lea    rcx,[rsp+0x38]
0x00e8a072: call   0x1400703d0
0x00e8a077: mov    rcx,QWORD PTR [rax]
0x00e8a07a: cmp    DWORD PTR [rcx+0xc],0x3
0x00e8a07e: jne    0x140e8a089
0x00e8a080: lea    rdx,[rip+0x8c0b59]        # 0x14174abe0 ; literal=" tercet"
0x00e8a087: jmp    0x140e8a0aa
0x00e8a089: lea    rcx,[rsp+0x38]
0x00e8a08e: call   0x1400703d0
0x00e8a093: mov    rcx,QWORD PTR [rax]
0x00e8a096: cmp    DWORD PTR [rcx+0xc],0x2
0x00e8a09a: lea    rdx,[rip+0x8c0bef]        # 0x14174ac90 ; literal=" couplet"
0x00e8a0a1: je     0x140e8a0aa
0x00e8a0a3: lea    rdx,[rip+0x7a7ba6]        # 0x141631c50 ; literal=" line"
0x00e8a0aa: mov    rcx,r12
0x00e8a0ad: call   0x140070b20
0x00e8a0b2: lea    rbx,[rip+0x7748b3]        # 0x1415fe96c ; literal=" "
0x00e8a0b9: lea    rcx,[rsp+0x38]
0x00e8a0be: call   0x1400703d0
0x00e8a0c3: mov    rcx,QWORD PTR [rax]
0x00e8a0c6: cmp    DWORD PTR [rcx+0x8],0x2
0x00e8a0ca: jl     0x140e8a0db
0x00e8a0cc: lea    rdx,[rip+0x7753f5]        # 0x1415ff4c8 ; literal="s"
0x00e8a0d3: mov    rcx,r12
0x00e8a0d6: call   0x140070b20
0x00e8a0db: lea    rcx,[rsp+0x38]
0x00e8a0e0: call   0x1400703d0
0x00e8a0e5: mov    rcx,QWORD PTR [rax]
0x00e8a0e8: cmp    DWORD PTR [rcx+0xc],0x1
0x00e8a0ec: jl     0x140e8a11f
0x00e8a0ee: lea    rcx,[rsp+0x38]
0x00e8a0f3: call   0x1400703d0
0x00e8a0f8: mov    rcx,QWORD PTR [rax]
0x00e8a0fb: cmp    DWORD PTR [rcx+0xc],0x1e
0x00e8a0ff: jg     0x140e8a11f
0x00e8a101: lea    rcx,[rsp+0x38]
0x00e8a106: call   0x1400703d0
0x00e8a10b: mov    rcx,QWORD PTR [rax]
0x00e8a10e: movsxd rax,DWORD PTR [rcx+0xc]
0x00e8a112: inc    DWORD PTR [rbp+rax*4+0x130]
0x00e8a119: mov    edi,DWORD PTR [rbp+0x130]
0x00e8a11f: cmp    r14d,0x2
0x00e8a123: jne    0x140e8a12e
0x00e8a125: lea    rdx,[rip+0x775214]        # 0x1415ff340 ; literal=" and "
0x00e8a12c: jmp    0x140e8a137
0x00e8a12e: jle    0x140e8a13f
0x00e8a130: lea    rdx,[rip+0x7751d1]        # 0x1415ff308 ; literal=", "
0x00e8a137: mov    rcx,r12
0x00e8a13a: call   0x140070b20
0x00e8a13f: lea    rcx,[rsp+0x38]
0x00e8a144: call   0x1400703c0
0x00e8a149: dec    r14d
0x00e8a14c: lea    r8,[rsp+0x78]
0x00e8a151: lea    rdx,[rsp+0x32]
0x00e8a156: lea    rcx,[rsp+0x38]
0x00e8a15b: call   0x1400703e0
0x00e8a160: xor    edx,edx
0x00e8a162: movzx  ecx,BYTE PTR [rax]
0x00e8a165: call   0x140066d70
0x00e8a16a: test   al,al
0x00e8a16c: jne    0x140e89ab3
0x00e8a172: mov    edi,0x1
0x00e8a177: lea    r15,[rip+0xffffffffff175e82]        # 0x140000000
0x00e8a17e: lea    rdx,[rip+0x78a4fb]        # 0x141614680 ; literal=".  "
0x00e8a185: mov    rcx,r12
0x00e8a188: call   0x140070b20
0x00e8a18d: cmp    DWORD PTR [r13+0xe0],0xffffffff
0x00e8a195: je     0x140e8a2f9
0x00e8a19b: lea    rcx,[rbp+0x48]
0x00e8a19f: call   0x140070c50
0x00e8a1a4: nop
0x00e8a1a5: lea    rcx,[r13+0x8]
0x00e8a1a9: xor    r9d,r9d
0x00e8a1ac: mov    r8b,0x1
0x00e8a1af: lea    rdx,[rbp+0x48]
0x00e8a1b3: call   0x140aaafe0
0x00e8a1b8: lea    rcx,[rbp+0x48]
0x00e8a1bc: call   0x140544330
0x00e8a1c1: lea    rdx,[rbp+0x48]
0x00e8a1c5: mov    rcx,r12
0x00e8a1c8: call   0x1400bb2d0
0x00e8a1cd: lea    rdx,[rip+0x8c0a6c]        # 0x14174ac40 ; literal=" is always written from the perspective of "
0x00e8a1d4: mov    rcx,r12
0x00e8a1d7: call   0x140070b20
0x00e8a1dc: lea    rcx,[r13+0xe8]
0x00e8a1e3: movsxd rdx,DWORD PTR [r13+0xe0]
0x00e8a1ea: call   0x1400707e0
0x00e8a1ef: mov    rbx,QWORD PTR [rax]
0x00e8a1f2: movsxd rax,DWORD PTR [rbx]
0x00e8a1f5: cmp    eax,0x7
0x00e8a1f8: ja     0x140e8a2e0
0x00e8a1fe: mov    ecx,DWORD PTR [r15+rax*4+0xe8f4ec]
0x00e8a206: add    rcx,r15
0x00e8a209: jmp    rcx
0x00e8a20b: lea    rdx,[rip+0x8c0b16]        # 0x14174ad28 ; literal="the author"
0x00e8a212: jmp    0x140e8a2d8
0x00e8a217: lea    rdx,[rip+0x8c0afa]        # 0x14174ad18 ; literal="a soldier"
0x00e8a21e: jmp    0x140e8a2d8
0x00e8a223: lea    rdx,[rip+0x8c0b2e]        # 0x14174ad58 ; literal="a traveler"
0x00e8a22a: jmp    0x140e8a2d8
0x00e8a22f: lea    rdx,[rip+0x8c0b02]        # 0x14174ad38 ; literal="a relative of the author"
0x00e8a236: jmp    0x140e8a2d8
0x00e8a23b: lea    rdx,[rip+0x8c0aa6]        # 0x14174ace8 ; literal="a party to a debate"
0x00e8a242: jmp    0x140e8a2d8
0x00e8a247: lea    rdx,[rip+0x8c0a82]        # 0x14174acd0 ; literal="a fictional poet"
0x00e8a24e: jmp    0x140e8a2d8
0x00e8a253: cmp    DWORD PTR [rbx+0x4],0xffffffff
0x00e8a257: je     0x140e8a28d
0x00e8a259: lea    rcx,[rbp+0x130]
0x00e8a260: call   0x140073640
0x00e8a265: xor    eax,eax
0x00e8a267: mov    WORD PTR [rsp+0x28],ax
0x00e8a26c: mov    WORD PTR [rsp+0x20],di
0x00e8a271: lea    r9,[rbp+0x130]
0x00e8a278: mov    r8d,DWORD PTR [rbx+0x4]
0x00e8a27c: mov    rdx,r12
0x00e8a27f: lea    rcx,[rip+0x168bdb2]        # 0x142516038
0x00e8a286: call   0x140ba79f0
0x00e8a28b: jmp    0x140e8a2e0
0x00e8a28d: lea    rdx,[rip+0x8c1024]        # 0x14174b2b8 ; literal="a historical figure"
0x00e8a294: jmp    0x140e8a2d8
0x00e8a296: cmp    DWORD PTR [rbx+0x4],0xffffffff
0x00e8a29a: je     0x140e8a2d1
0x00e8a29c: lea    rdx,[rip+0x7795e5]        # 0x141603888 ; literal="a "
0x00e8a2a3: mov    rcx,r12
0x00e8a2a6: call   0x140070b20
0x00e8a2ab: mov    BYTE PTR [rsp+0x28],0x0
0x00e8a2b0: movzx  eax,WORD PTR [rbx+0x8]
0x00e8a2b4: mov    WORD PTR [rsp+0x20],ax
0x00e8a2b9: xor    r9d,r9d
0x00e8a2bc: mov    r8d,DWORD PTR [rbx+0x4]
0x00e8a2c0: mov    rdx,r12
0x00e8a2c3: lea    rcx,[rip+0x168bd6e]        # 0x142516038
0x00e8a2ca: call   0x140ba99b0
0x00e8a2cf: jmp    0x140e8a2e0
0x00e8a2d1: lea    rdx,[rip+0x8c0a30]        # 0x14174ad08 ; literal="an animal"
0x00e8a2d8: mov    rcx,r12
0x00e8a2db: call   0x140070b20
0x00e8a2e0: lea    rdx,[rip+0x78a399]        # 0x141614680 ; literal=".  "
0x00e8a2e7: mov    rcx,r12
0x00e8a2ea: call   0x140070b20
0x00e8a2ef: nop
0x00e8a2f0: lea    rcx,[rbp+0x48]
0x00e8a2f4: call   0x1400693f0
0x00e8a2f9: mov    edx,DWORD PTR [r13+0xe4]
0x00e8a300: mov    ecx,edx
0x00e8a302: and    ecx,0x1
0x00e8a305: test   dl,0x4
0x00e8a308: je     0x140e8a30c
0x00e8a30a: inc    ecx
0x00e8a30c: test   dl,0x8
0x00e8a30f: lea    eax,[rcx+0x1]
0x00e8a312: cmove  eax,ecx
0x00e8a315: test   dl,0x10
0x00e8a318: lea    ecx,[rax+0x1]
0x00e8a31b: cmove  ecx,eax
0x00e8a31e: bt     edx,0x9
0x00e8a322: lea    eax,[rcx+0x1]
0x00e8a325: cmovae eax,ecx
0x00e8a328: bt     edx,0xa
0x00e8a32c: lea    ecx,[rax+0x1]
0x00e8a32f: cmovae ecx,eax
0x00e8a332: bt     edx,0xb
0x00e8a336: lea    eax,[rcx+0x1]
0x00e8a339: cmovae eax,ecx
0x00e8a33c: bt     edx,0xc
0x00e8a340: lea    ecx,[rax+0x1]
0x00e8a343: cmovae ecx,eax
0x00e8a346: bt     edx,0xd
0x00e8a34a: lea    eax,[rcx+0x1]
0x00e8a34d: cmovae eax,ecx
0x00e8a350: bt     edx,0xf
0x00e8a354: lea    ecx,[rax+0x1]
0x00e8a357: cmovae ecx,eax
0x00e8a35a: bt     edx,0x10
0x00e8a35e: lea    eax,[rcx+0x1]
0x00e8a361: cmovae eax,ecx
0x00e8a364: bt     edx,0x11
0x00e8a368: lea    ecx,[rax+0x1]
0x00e8a36b: cmovae ecx,eax
0x00e8a36e: bt     edx,0x12
0x00e8a372: lea    eax,[rcx+0x1]
0x00e8a375: cmovae eax,ecx
0x00e8a378: bt     edx,0x13
0x00e8a37c: lea    ecx,[rax+0x1]
0x00e8a37f: cmovae ecx,eax
0x00e8a382: bt     edx,0x14
0x00e8a386: lea    eax,[rcx+0x1]
0x00e8a389: cmovae eax,ecx
0x00e8a38c: bt     edx,0x15
0x00e8a390: lea    ecx,[rax+0x1]
0x00e8a393: cmovae ecx,eax
0x00e8a396: bt     edx,0x16
0x00e8a39a: lea    esi,[rcx+0x1]
0x00e8a39d: cmovae esi,ecx
0x00e8a3a0: test   esi,esi
0x00e8a3a2: jle    0x140e8a5e4
0x00e8a3a8: lea    rdx,[rip+0x8c0951]        # 0x14174ad00 ; literal="Use of "
0x00e8a3af: mov    rcx,r12
0x00e8a3b2: call   0x140070b20
0x00e8a3b7: xor    eax,eax
0x00e8a3b9: mov    edi,eax
0x00e8a3bb: mov    ebx,DWORD PTR [rsp+0x38]
0x00e8a3bf: nop
0x00e8a3c0: cmp    edi,0x10
0x00e8a3c3: ja     0x140e8a44e
0x00e8a3c9: movsxd rax,edi
0x00e8a3cc: mov    ecx,DWORD PTR [r15+rax*4+0xe8f50c]
0x00e8a3d4: add    rcx,r15
0x00e8a3d7: jmp    rcx
0x00e8a3d9: mov    ebx,0x1
0x00e8a3de: jmp    0x140e8a44e
0x00e8a3e0: mov    ebx,0x4
0x00e8a3e5: jmp    0x140e8a44e
0x00e8a3e7: mov    ebx,0x8
0x00e8a3ec: jmp    0x140e8a44e
0x00e8a3ee: mov    ebx,0x10
0x00e8a3f3: jmp    0x140e8a44e
0x00e8a3f5: mov    ebx,0x200
0x00e8a3fa: jmp    0x140e8a44e
0x00e8a3fc: mov    ebx,0x400
0x00e8a401: jmp    0x140e8a44e
0x00e8a403: mov    ebx,0x800
0x00e8a408: jmp    0x140e8a44e
0x00e8a40a: mov    ebx,0x1000
0x00e8a40f: jmp    0x140e8a44e
0x00e8a411: mov    ebx,0x2000
0x00e8a416: jmp    0x140e8a44e
0x00e8a418: mov    ebx,0x8000
0x00e8a41d: jmp    0x140e8a44e
0x00e8a41f: mov    ebx,0x10000
0x00e8a424: jmp    0x140e8a44e
0x00e8a426: mov    ebx,0x20000
0x00e8a42b: jmp    0x140e8a44e
0x00e8a42d: mov    ebx,0x40000
0x00e8a432: jmp    0x140e8a44e
0x00e8a434: mov    ebx,0x80000
0x00e8a439: jmp    0x140e8a44e
0x00e8a43b: mov    ebx,0x100000
0x00e8a440: jmp    0x140e8a44e
0x00e8a442: mov    ebx,0x200000
0x00e8a447: jmp    0x140e8a44e
0x00e8a449: mov    ebx,0x400000
0x00e8a44e: test   DWORD PTR [r13+0xe4],ebx
0x00e8a455: je     0x140e8a5ca
0x00e8a45b: cmp    ebx,0x2000
0x00e8a461: ja     0x140e8a519
0x00e8a467: je     0x140e8a50d
0x00e8a46d: cmp    ebx,0x200
0x00e8a473: ja     0x140e8a4cd
0x00e8a475: je     0x140e8a4c1
0x00e8a477: mov    eax,ebx
0x00e8a479: sub    eax,0x1
0x00e8a47c: je     0x140e8a4b5
0x00e8a47e: sub    eax,0x3
0x00e8a481: je     0x140e8a4a9
0x00e8a483: sub    eax,0x4
0x00e8a486: je     0x140e8a49d
0x00e8a488: cmp    eax,0x8
0x00e8a48b: jne    0x140e8a5a9
0x00e8a491: lea    rdx,[rip+0x8c0928]        # 0x14174adc0 ; literal="antanaclasis"
0x00e8a498: jmp    0x140e8a5a1
0x00e8a49d: lea    rdx,[rip+0x8c092c]        # 0x14174add0 ; literal="onomatopoeia"
0x00e8a4a4: jmp    0x140e8a5a1
0x00e8a4a9: lea    rdx,[rip+0x8c08f0]        # 0x14174ada0 ; literal="alliteration"
0x00e8a4b0: jmp    0x140e8a5a1
0x00e8a4b5: lea    rdx,[rip+0x8c08f4]        # 0x14174adb0 ; literal="internal rhyme"
0x00e8a4bc: jmp    0x140e8a5a1
0x00e8a4c1: lea    rdx,[rip+0x8c08b0]        # 0x14174ad78 ; literal="assonance"
0x00e8a4c8: jmp    0x140e8a5a1
0x00e8a4cd: cmp    ebx,0x400
0x00e8a4d3: je     0x140e8a501
0x00e8a4d5: cmp    ebx,0x800
0x00e8a4db: je     0x140e8a4f5
0x00e8a4dd: cmp    ebx,0x1000
0x00e8a4e3: jne    0x140e8a5a9
0x00e8a4e9: lea    rdx,[rip+0x8c0898]        # 0x14174ad88 ; literal="epenthesis"
0x00e8a4f0: jmp    0x140e8a5a1
0x00e8a4f5: lea    rdx,[rip+0x8c089c]        # 0x14174ad98 ; literal="elision"
0x00e8a4fc: jmp    0x140e8a5a1
0x00e8a501: lea    rdx,[rip+0x8c0860]        # 0x14174ad68 ; literal="consonance"
0x00e8a508: jmp    0x140e8a5a1
0x00e8a50d: lea    rdx,[rip+0x8c0914]        # 0x14174ae28 ; literal="synchysis"
0x00e8a514: jmp    0x140e8a5a1
0x00e8a519: cmp    ebx,0x80000
0x00e8a51f: ja     0x140e8a570
0x00e8a521: je     0x140e8a567
0x00e8a523: cmp    ebx,0x8000
0x00e8a529: je     0x140e8a55e
0x00e8a52b: cmp    ebx,0x10000
0x00e8a531: je     0x140e8a555
0x00e8a533: cmp    ebx,0x20000
0x00e8a539: je     0x140e8a54c
0x00e8a53b: cmp    ebx,0x40000
0x00e8a541: jne    0x140e8a5a9
0x00e8a543: lea    rdx,[rip+0x8c089e]        # 0x14174ade8 ; literal="metaphor"
0x00e8a54a: jmp    0x140e8a5a1
0x00e8a54c: lea    rdx,[rip+0x8c08e5]        # 0x14174ae38 ; literal="symbolism"
0x00e8a553: jmp    0x140e8a5a1
0x00e8a555: lea    rdx,[rip+0x8c08ec]        # 0x14174ae48 ; literal="ambiguity"
0x00e8a55c: jmp    0x140e8a5a1
0x00e8a55e: lea    rdx,[rip+0x8c08b3]        # 0x14174ae18 ; literal="allegory"
0x00e8a565: jmp    0x140e8a5a1
0x00e8a567: lea    rdx,[rip+0x8c0872]        # 0x14174ade0 ; literal="simile"
0x00e8a56e: jmp    0x140e8a5a1
0x00e8a570: cmp    ebx,0x100000
0x00e8a576: je     0x140e8a59a
0x00e8a578: cmp    ebx,0x200000
0x00e8a57e: je     0x140e8a591
0x00e8a580: cmp    ebx,0x400000
0x00e8a586: jne    0x140e8a5a9
0x00e8a588: lea    rdx,[rip+0x8c0941]        # 0x14174aed0 ; literal="juxtaposition"
0x00e8a58f: jmp    0x140e8a5a1
0x00e8a591: lea    rdx,[rip+0x8c0860]        # 0x14174adf8 ; literal="vivid imagery"
0x00e8a598: jmp    0x140e8a5a1
0x00e8a59a: lea    rdx,[rip+0x8c0867]        # 0x14174ae08 ; literal="metonymy"
0x00e8a5a1: mov    rcx,r12
0x00e8a5a4: call   0x140070b20
0x00e8a5a9: cmp    esi,0x2
0x00e8a5ac: jne    0x140e8a5b7
0x00e8a5ae: lea    rdx,[rip+0x774d8b]        # 0x1415ff340 ; literal=" and "
0x00e8a5b5: jmp    0x140e8a5c0
0x00e8a5b7: jle    0x140e8a5c8
0x00e8a5b9: lea    rdx,[rip+0x774d48]        # 0x1415ff308 ; literal=", "
0x00e8a5c0: mov    rcx,r12
0x00e8a5c3: call   0x140070b20
0x00e8a5c8: dec    esi
0x00e8a5ca: inc    edi
0x00e8a5cc: cmp    edi,0x11
0x00e8a5cf: jl     0x140e8a3c0
0x00e8a5d5: lea    rdx,[rip+0x8c08cc]        # 0x14174aea8 ; literal=" is characteristic of the form.  "
0x00e8a5dc: mov    rcx,r12
0x00e8a5df: call   0x140070b20
0x00e8a5e4: lea    rcx,[r13+0xb8]
0x00e8a5eb: call   0x140070930
0x00e8a5f0: mov    rbx,rax
0x00e8a5f3: test   eax,eax
0x00e8a5f5: jle    0x140e8a799
0x00e8a5fb: mov    rcx,r12
0x00e8a5fe: cmp    eax,0x2
0x00e8a601: jl     0x140e8a627
0x00e8a603: lea    rdx,[rip+0x8c08e6]        # 0x14174aef0 ; literal="Forms of "
0x00e8a60a: call   0x140070b20
0x00e8a60f: lea    rdx,[rip+0x8c086a]        # 0x14174ae80 ; literal="parallelism "
0x00e8a616: mov    rcx,r12
0x00e8a619: call   0x140070b20
0x00e8a61e: lea    rdx,[rip+0x7748b3]        # 0x1415feed8 ; literal="are"
0x00e8a625: jmp    0x140e8a649
0x00e8a627: lea    rdx,[rip+0x8c08b2]        # 0x14174aee0 ; literal="A form of "
0x00e8a62e: call   0x140070b20
0x00e8a633: lea    rdx,[rip+0x8c0846]        # 0x14174ae80 ; literal="parallelism "
0x00e8a63a: mov    rcx,r12
0x00e8a63d: call   0x140070b20
0x00e8a642: lea    rdx,[rip+0x77488b]        # 0x1415feed4 ; literal="is"
0x00e8a649: mov    rcx,r12
0x00e8a64c: call   0x140070b20
0x00e8a651: lea    rdx,[rip+0x8c0800]        # 0x14174ae58 ; literal=" common throughout the poem, in that "
0x00e8a658: mov    rcx,r12
0x00e8a65b: call   0x140070b20
0x00e8a660: xor    dil,dil
0x00e8a663: lea    rdx,[rsp+0x68]
0x00e8a668: lea    rcx,[r13+0xb8]
0x00e8a66f: call   0x140070800
0x00e8a674: lea    rdx,[rsp+0x78]
0x00e8a679: lea    rcx,[r13+0xb8]
0x00e8a680: call   0x1400707f0
0x00e8a685: lea    r8,[rsp+0x78]
0x00e8a68a: lea    rdx,[rsp+0x32]
0x00e8a68f: lea    rcx,[rsp+0x68]
0x00e8a694: call   0x1400703e0
0x00e8a699: xor    edx,edx
0x00e8a69b: movzx  ecx,BYTE PTR [rax]
0x00e8a69e: call   0x140066d70
0x00e8a6a3: test   al,al
0x00e8a6a5: je     0x140e8a78a
0x00e8a6ab: nop    DWORD PTR [rax+rax*1+0x0]
0x00e8a6b0: mov    rcx,r12
0x00e8a6b3: test   dil,dil
0x00e8a6b6: jne    0x140e8a6c9
0x00e8a6b8: lea    rdx,[rip+0x8c07d9]        # 0x14174ae98 ; literal="certain lines "
0x00e8a6bf: call   0x140070b20
0x00e8a6c4: mov    dil,0x1
0x00e8a6c7: jmp    0x140e8a6d5
0x00e8a6c9: lea    rdx,[rip+0x8c07c0]        # 0x14174ae90 ; literal="they "
0x00e8a6d0: call   0x140070b20
0x00e8a6d5: lea    rcx,[rsp+0x68]
0x00e8a6da: call   0x1400703d0
0x00e8a6df: movsxd rcx,DWORD PTR [rax]
0x00e8a6e2: cmp    ecx,0x6
0x00e8a6e5: ja     0x140e8a739
0x00e8a6e7: mov    ecx,DWORD PTR [r15+rcx*4+0xe8f550]
0x00e8a6ef: add    rcx,r15
0x00e8a6f2: jmp    rcx
0x00e8a6f4: lea    rdx,[rip+0x8c08e5]        # 0x14174afe0 ; literal="often share an underlying meaning"
0x00e8a6fb: jmp    0x140e8a731
0x00e8a6fd: lea    rdx,[rip+0x8c08b4]        # 0x14174afb8 ; literal="often contrast underlying meaning"
0x00e8a704: jmp    0x140e8a731
0x00e8a706: lea    rdx,[rip+0x8c0923]        # 0x14174b030 ; literal="are required to maintain phrasing"
0x00e8a70d: jmp    0x140e8a731
0x00e8a70f: lea    rdx,[rip+0x8c08f2]        # 0x14174b008 ; literal="have similar grammatical structures"
0x00e8a716: jmp    0x140e8a731
0x00e8a718: lea    rdx,[rip+0x8c0809]        # 0x14174af28 ; literal="use the same placement of allusions"
0x00e8a71f: jmp    0x140e8a731
0x00e8a721: lea    rdx,[rip+0x8c07d8]        # 0x14174af00 ; literal="sometimes have reversed word orders"
0x00e8a728: jmp    0x140e8a731
0x00e8a72a: lea    rdx,[rip+0x8c0867]        # 0x14174af98 ; literal="reverse grammatical structures"
0x00e8a731: mov    rcx,r12
0x00e8a734: call   0x140070b20
0x00e8a739: cmp    ebx,0x2
0x00e8a73c: jne    0x140e8a747
0x00e8a73e: lea    rdx,[rip+0x774bfb]        # 0x1415ff340 ; literal=" and "
0x00e8a745: jmp    0x140e8a750
0x00e8a747: jle    0x140e8a758
0x00e8a749: lea    rdx,[rip+0x774bb8]        # 0x1415ff308 ; literal=", "
0x00e8a750: mov    rcx,r12
0x00e8a753: call   0x140070b20
0x00e8a758: dec    ebx
0x00e8a75a: lea    rcx,[rsp+0x68]
0x00e8a75f: call   0x140070910
0x00e8a764: lea    r8,[rsp+0x78]
0x00e8a769: lea    rdx,[rsp+0x32]
0x00e8a76e: lea    rcx,[rsp+0x68]
0x00e8a773: call   0x1400703e0
0x00e8a778: xor    edx,edx
0x00e8a77a: movzx  ecx,BYTE PTR [rax]
0x00e8a77d: call   0x140066d70
0x00e8a782: test   al,al
0x00e8a784: jne    0x140e8a6b0
0x00e8a78a: lea    rdx,[rip+0x789eef]        # 0x141614680 ; literal=".  "
0x00e8a791: mov    rcx,r12
0x00e8a794: call   0x140070b20
0x00e8a799: mov    edx,DWORD PTR [r13+0xe4]
0x00e8a7a0: mov    ecx,edx
0x00e8a7a2: shr    ecx,0x5
0x00e8a7a5: and    ecx,0x1
0x00e8a7a8: test   dl,0x40
0x00e8a7ab: lea    eax,[rcx+0x1]
0x00e8a7ae: cmove  eax,ecx
0x00e8a7b1: test   dl,0x80
0x00e8a7b4: lea    ecx,[rax+0x1]
0x00e8a7b7: cmove  ecx,eax
0x00e8a7ba: bt     edx,0x8
0x00e8a7be: lea    r14d,[rcx+0x1]
0x00e8a7c2: cmovae r14d,ecx
0x00e8a7c6: test   r14d,r14d
0x00e8a7c9: je     0x140e8a901
0x00e8a7cf: lea    rdx,[rip+0x8c077a]        # 0x14174af50 ; literal="Linguistic skill is required in the visual presentation as well, as "
0x00e8a7d6: mov    rcx,r12
0x00e8a7d9: call   0x140070b20
0x00e8a7de: lea    rcx,[rbp+0x88]
0x00e8a7e5: call   0x140070c50
0x00e8a7ea: nop
0x00e8a7eb: lea    rcx,[r13+0x8]
0x00e8a7ef: xor    r9d,r9d
0x00e8a7f2: mov    r8b,0x1
0x00e8a7f5: lea    rdx,[rbp+0x88]
0x00e8a7fc: call   0x140aaafe0
0x00e8a801: lea    rdx,[rbp+0x88]
0x00e8a808: mov    rcx,r12
0x00e8a80b: call   0x1400bb2d0
0x00e8a810: nop
0x00e8a811: lea    rcx,[rbp+0x88]
0x00e8a818: call   0x1400693f0
0x00e8a81d: lea    rdx,[rip+0x8c08fc]        # 0x14174b120 ; literal=" must feature "
0x00e8a824: mov    rcx,r12
0x00e8a827: call   0x140070b20
0x00e8a82c: xor    eax,eax
0x00e8a82e: mov    edi,eax
0x00e8a830: mov    esi,r14d
0x00e8a833: mov    ebx,DWORD PTR [rsp+0x38]
0x00e8a837: mov    ecx,edi
0x00e8a839: test   edi,edi
0x00e8a83b: je     0x140e8a861
0x00e8a83d: sub    ecx,0x1
0x00e8a840: je     0x140e8a85a
0x00e8a842: sub    ecx,0x1
0x00e8a845: je     0x140e8a853
0x00e8a847: cmp    ecx,0x1
0x00e8a84a: jne    0x140e8a866
0x00e8a84c: mov    ebx,0x100
0x00e8a851: jmp    0x140e8a866
0x00e8a853: mov    ebx,0x80
0x00e8a858: jmp    0x140e8a866
0x00e8a85a: mov    ebx,0x40
0x00e8a85f: jmp    0x140e8a866
0x00e8a861: mov    ebx,0x20
0x00e8a866: test   DWORD PTR [r13+0xe4],ebx
0x00e8a86d: je     0x140e8a8e7
0x00e8a86f: mov    eax,ebx
0x00e8a871: sub    eax,0x20
0x00e8a874: je     0x140e8a8b7
0x00e8a876: sub    eax,0x20
0x00e8a879: je     0x140e8a8ae
0x00e8a87b: sub    eax,0x40
0x00e8a87e: je     0x140e8a8a5
0x00e8a880: cmp    eax,0x80
0x00e8a885: jne    0x140e8a8c6
0x00e8a887: cmp    r14d,0x2
0x00e8a88b: jb     0x140e8a89c
0x00e8a88d: lea    rdx,[rip+0x7f4550]        # 0x14167ede4 ; literal="even "
0x00e8a894: mov    rcx,r12
0x00e8a897: call   0x140070b20
0x00e8a89c: lea    rdx,[rip+0x8c07cd]        # 0x14174b070 ; literal="lines which emerge when reading along certain prescribed paths across the body of the poem"
0x00e8a8a3: jmp    0x140e8a8be
0x00e8a8a5: lea    rdx,[rip+0x8c0884]        # 0x14174b130 ; literal="lines which can be read orthogonally across the standard lines"
0x00e8a8ac: jmp    0x140e8a8be
0x00e8a8ae: lea    rdx,[rip+0x8c08bb]        # 0x14174b170 ; literal="lines which can be read backwards as well as forwards"
0x00e8a8b5: jmp    0x140e8a8be
0x00e8a8b7: lea    rdx,[rip+0x8c082a]        # 0x14174b0e8 ; literal="lines with different readings depending on word breaks"
0x00e8a8be: mov    rcx,r12
0x00e8a8c1: call   0x140070b20
0x00e8a8c6: cmp    esi,0x2
0x00e8a8c9: jne    0x140e8a8d4
0x00e8a8cb: lea    rdx,[rip+0x774a6e]        # 0x1415ff340 ; literal=" and "
0x00e8a8d2: jmp    0x140e8a8dd
0x00e8a8d4: jle    0x140e8a8e5
0x00e8a8d6: lea    rdx,[rip+0x774a2b]        # 0x1415ff308 ; literal=", "
0x00e8a8dd: mov    rcx,r12
0x00e8a8e0: call   0x140070b20
0x00e8a8e5: dec    esi
0x00e8a8e7: inc    edi
0x00e8a8e9: cmp    edi,0x4
0x00e8a8ec: jl     0x140e8a837
0x00e8a8f2: lea    rdx,[rip+0x789d87]        # 0x141614680 ; literal=".  "
0x00e8a8f9: mov    rcx,r12
0x00e8a8fc: call   0x140070b20
0x00e8a901: mov    eax,DWORD PTR [r13+0xa8]
0x00e8a908: cmp    DWORD PTR [r13+0xac],0xffffffff
0x00e8a910: je     0x140e8ae87
0x00e8a916: test   eax,eax
0x00e8a918: je     0x140e8b048
0x00e8a91e: lea    rcx,[r13+0x90]
0x00e8a925: call   0x140070410
0x00e8a92a: cmp    rax,0x2
0x00e8a92e: jae    0x140e8a94e
0x00e8a930: lea    rcx,[r13+0x90]
0x00e8a937: xor    edx,edx
0x00e8a939: call   0x1400707e0
0x00e8a93e: mov    rcx,QWORD PTR [rax]
0x00e8a941: cmp    DWORD PTR [rcx+0xc],0x2
0x00e8a945: lea    rdx,[rip+0x8c078c]        # 0x14174b0d8 ; literal="The poem has "
0x00e8a94c: jl     0x140e8a955
0x00e8a94e: lea    rdx,[rip+0x8c0703]        # 0x14174b058 ; literal="Each line has "
0x00e8a955: mov    rcx,r12
0x00e8a958: call   0x140070b20
0x00e8a95d: lea    rcx,[rbp+0x88]
0x00e8a964: call   0x140070c50
0x00e8a969: nop
0x00e8a96a: lea    rdx,[rbp+0x88]
0x00e8a971: mov    ecx,DWORD PTR [r13+0xa8]
0x00e8a978: call   0x140545040
0x00e8a97d: lea    rdx,[rbp+0x88]
0x00e8a984: mov    rcx,r12
0x00e8a987: call   0x1400bb2d0
0x00e8a98c: lea    rbx,[rip+0x773fd9]        # 0x1415fe96c ; literal=" "
0x00e8a993: mov    rdx,rbx
0x00e8a996: mov    rcx,r12
0x00e8a999: call   0x140070b20
0x00e8a99e: mov    rcx,r12
0x00e8a9a1: cmp    DWORD PTR [r13+0xa8],0x1
0x00e8a9a9: lea    rdx,[rip+0x8c071c]        # 0x14174b0cc ; literal="foot"
0x00e8a9b0: je     0x140e8a9b9
0x00e8a9b2: lea    rdx,[rip+0x8c14db]        # 0x14174be94 ; literal="feet"
0x00e8a9b9: call   0x140070b20
0x00e8a9be: lea    rdx,[rip+0x779e23]        # 0x1416047e8 ; literal=" with "
0x00e8a9c5: mov    rcx,r12
0x00e8a9c8: call   0x140070b20
0x00e8a9cd: mov    rcx,r12
0x00e8a9d0: test   BYTE PTR [r13+0x8c],0x1
0x00e8a9d8: je     0x140e8ab4b
0x00e8a9de: lea    rdx,[rip+0x8c149b]        # 0x14174be80 ; literal="a tone pattern of "
0x00e8a9e5: call   0x140070b20
0x00e8a9ea: movsxd rax,DWORD PTR [r13+0xac]
0x00e8a9f1: cmp    eax,0xb
0x00e8a9f4: ja     0x140e8ab3f
0x00e8a9fa: mov    ecx,DWORD PTR [r15+rax*4+0xe8f56c]
0x00e8aa02: add    rcx,r15
0x00e8aa05: jmp    rcx
0x00e8aa07: lea    rdx,[rip+0x8c14a2]        # 0x14174beb0 ; literal="even-uneven"
0x00e8aa0e: mov    rcx,r12
0x00e8aa11: call   0x140070b20
0x00e8aa16: lea    rdx,[rip+0x789c63]        # 0x141614680 ; literal=".  "
0x00e8aa1d: jmp    0x140e8ae79
0x00e8aa22: lea    rdx,[rip+0x8c1477]        # 0x14174bea0 ; literal="uneven-even"
0x00e8aa29: mov    rcx,r12
0x00e8aa2c: call   0x140070b20
0x00e8aa31: lea    rdx,[rip+0x789c48]        # 0x141614680 ; literal=".  "
0x00e8aa38: jmp    0x140e8ae79
0x00e8aa3d: lea    rdx,[rip+0x8c13fc]        # 0x14174be40 ; literal="uneven-uneven"
0x00e8aa44: mov    rcx,r12
0x00e8aa47: call   0x140070b20
0x00e8aa4c: lea    rdx,[rip+0x789c2d]        # 0x141614680 ; literal=".  "
0x00e8aa53: jmp    0x140e8ae79
0x00e8aa58: lea    rdx,[rip+0x8c13c9]        # 0x14174be28 ; literal="uneven-even-even"
0x00e8aa5f: mov    rcx,r12
0x00e8aa62: call   0x140070b20
0x00e8aa67: lea    rdx,[rip+0x789c12]        # 0x141614680 ; literal=".  "
0x00e8aa6e: jmp    0x140e8ae79
0x00e8aa73: lea    rdx,[rip+0x8c13ee]        # 0x14174be68 ; literal="even-uneven-even"
0x00e8aa7a: mov    rcx,r12
0x00e8aa7d: call   0x140070b20
0x00e8aa82: lea    rdx,[rip+0x789bf7]        # 0x141614680 ; literal=".  "
0x00e8aa89: jmp    0x140e8ae79
0x00e8aa8e: lea    rdx,[rip+0x8c13bb]        # 0x14174be50 ; literal="even-even-uneven"
0x00e8aa95: mov    rcx,r12
0x00e8aa98: call   0x140070b20
0x00e8aa9d: lea    rdx,[rip+0x789bdc]        # 0x141614680 ; literal=".  "
0x00e8aaa4: jmp    0x140e8ae79
0x00e8aaa9: lea    rdx,[rip+0x8c1480]        # 0x14174bf30 ; literal="uneven-even-uneven"
0x00e8aab0: mov    rcx,r12
0x00e8aab3: call   0x140070b20
0x00e8aab8: lea    rdx,[rip+0x789bc1]        # 0x141614680 ; literal=".  "
0x00e8aabf: jmp    0x140e8ae79
0x00e8aac4: lea    rdx,[rip+0x8c1455]        # 0x14174bf20 ; literal="even-even"
0x00e8aacb: mov    rcx,r12
0x00e8aace: call   0x140070b20
0x00e8aad3: lea    rdx,[rip+0x789ba6]        # 0x141614680 ; literal=".  "
0x00e8aada: jmp    0x140e8ae79
0x00e8aadf: lea    rdx,[rip+0x8c147a]        # 0x14174bf60 ; literal="even-even-even"
0x00e8aae6: mov    rcx,r12
0x00e8aae9: call   0x140070b20
0x00e8aaee: lea    rdx,[rip+0x789b8b]        # 0x141614680 ; literal=".  "
0x00e8aaf5: jmp    0x140e8ae79
0x00e8aafa: lea    rdx,[rip+0x8c1447]        # 0x14174bf48 ; literal="even-uneven-uneven"
0x00e8ab01: mov    rcx,r12
0x00e8ab04: call   0x140070b20
0x00e8ab09: lea    rdx,[rip+0x789b70]        # 0x141614680 ; literal=".  "
0x00e8ab10: jmp    0x140e8ae79
0x00e8ab15: lea    rdx,[rip+0x8c13bc]        # 0x14174bed8 ; literal="uneven-uneven-even"
0x00e8ab1c: mov    rcx,r12
0x00e8ab1f: call   0x140070b20
0x00e8ab24: lea    rdx,[rip+0x789b55]        # 0x141614680 ; literal=".  "
0x00e8ab2b: jmp    0x140e8ae79
0x00e8ab30: lea    rdx,[rip+0x8c1389]        # 0x14174bec0 ; literal="uneven-uneven-uneven"
0x00e8ab37: mov    rcx,r12
0x00e8ab3a: call   0x140070b20
0x00e8ab3f: lea    rdx,[rip+0x789b3a]        # 0x141614680 ; literal=".  "
0x00e8ab46: jmp    0x140e8ae79
0x00e8ab4b: test   DWORD PTR [r13+0xe4],0x4000
0x00e8ab56: je     0x140e8ad01
0x00e8ab5c: lea    rdx,[rip+0x8c139d]        # 0x14174bf00 ; literal="a syllable weight pattern of "
0x00e8ab63: call   0x140070b20
0x00e8ab68: movsxd rax,DWORD PTR [r13+0xac]
0x00e8ab6f: cmp    eax,0xb
0x00e8ab72: ja     0x140e8abf3
0x00e8ab74: mov    ecx,DWORD PTR [r15+rax*4+0xe8f59c]
0x00e8ab7c: add    rcx,r15
0x00e8ab7f: jmp    rcx
0x00e8ab81: lea    rdx,[rip+0x8c1368]        # 0x14174bef0 ; literal="short-long"
0x00e8ab88: jmp    0x140e8abeb
0x00e8ab8a: lea    rdx,[rip+0x8c143f]        # 0x14174bfd0 ; literal="long-short"
0x00e8ab91: jmp    0x140e8abeb
0x00e8ab93: lea    rdx,[rip+0x8c1426]        # 0x14174bfc0 ; literal="long-long"
0x00e8ab9a: jmp    0x140e8abeb
0x00e8ab9c: lea    rdx,[rip+0x8c1455]        # 0x14174bff8 ; literal="long-short-short"
0x00e8aba3: jmp    0x140e8abeb
0x00e8aba5: lea    rdx,[rip+0x8c1434]        # 0x14174bfe0 ; literal="short-long-short"
0x00e8abac: jmp    0x140e8abeb
0x00e8abae: lea    rdx,[rip+0x8c13cb]        # 0x14174bf80 ; literal="short-short-long"
0x00e8abb5: jmp    0x140e8abeb
0x00e8abb7: lea    rdx,[rip+0x8c13b2]        # 0x14174bf70 ; literal="long-short-long"
0x00e8abbe: jmp    0x140e8abeb
0x00e8abc0: lea    rdx,[rip+0x8c13e9]        # 0x14174bfb0 ; literal="short-short"
0x00e8abc7: jmp    0x140e8abeb
0x00e8abc9: lea    rdx,[rip+0x8c13c8]        # 0x14174bf98 ; literal="short-short-short"
0x00e8abd0: jmp    0x140e8abeb
0x00e8abd2: lea    rdx,[rip+0x8c147f]        # 0x14174c058 ; literal="short-long-long"
0x00e8abd9: jmp    0x140e8abeb
0x00e8abdb: lea    rdx,[rip+0x8c1466]        # 0x14174c048 ; literal="long-long-short"
0x00e8abe2: jmp    0x140e8abeb
0x00e8abe4: lea    rdx,[rip+0x8c148d]        # 0x14174c078 ; literal="long-long-long"
0x00e8abeb: mov    rcx,r12
0x00e8abee: call   0x140070b20
0x00e8abf3: lea    rdx,[rip+0x8c146e]        # 0x14174c068 ; literal=" (quantitative "
0x00e8abfa: mov    rcx,r12
0x00e8abfd: call   0x140070b20
0x00e8ac02: movsxd rax,DWORD PTR [r13+0xac]
0x00e8ac09: cmp    eax,0xb
0x00e8ac0c: ja     0x140e8ac8d
0x00e8ac0e: mov    ecx,DWORD PTR [r15+rax*4+0xe8f5cc]
0x00e8ac16: add    rcx,r15
0x00e8ac19: jmp    rcx
0x00e8ac1b: lea    rdx,[rip+0x8c13fa]        # 0x14174c01c ; literal="iambic"
0x00e8ac22: jmp    0x140e8ac85
0x00e8ac24: lea    rdx,[rip+0x8c13e5]        # 0x14174c010 ; literal="trochaic"
0x00e8ac2b: jmp    0x140e8ac85
0x00e8ac2d: lea    rdx,[rip+0x8c1404]        # 0x14174c038 ; literal="spondaic"
0x00e8ac34: jmp    0x140e8ac85
0x00e8ac36: lea    rdx,[rip+0x8c13eb]        # 0x14174c028 ; literal="dactylic"
0x00e8ac3d: jmp    0x140e8ac85
0x00e8ac3f: lea    rdx,[rip+0x8c148a]        # 0x14174c0d0 ; literal="amphibrachic"
0x00e8ac46: jmp    0x140e8ac85
0x00e8ac48: lea    rdx,[rip+0x8c1471]        # 0x14174c0c0 ; literal="anapaestic"
0x00e8ac4f: jmp    0x140e8ac85
0x00e8ac51: lea    rdx,[rip+0x8c1490]        # 0x14174c0e8 ; literal="cretic"
0x00e8ac58: jmp    0x140e8ac85
0x00e8ac5a: lea    rdx,[rip+0x8c147f]        # 0x14174c0e0 ; literal="pyrrhic"
0x00e8ac61: jmp    0x140e8ac85
0x00e8ac63: lea    rdx,[rip+0x8c1426]        # 0x14174c090 ; literal="tribrachic"
0x00e8ac6a: jmp    0x140e8ac85
0x00e8ac6c: lea    rdx,[rip+0x8c1415]        # 0x14174c088 ; literal="bacchic"
0x00e8ac73: jmp    0x140e8ac85
0x00e8ac75: lea    rdx,[rip+0x8c1434]        # 0x14174c0b0 ; literal="antibacchic"
0x00e8ac7c: jmp    0x140e8ac85
0x00e8ac7e: lea    rdx,[rip+0x8c141b]        # 0x14174c0a0 ; literal="molossic"
0x00e8ac85: mov    rcx,r12
0x00e8ac88: call   0x140070b20
0x00e8ac8d: mov    rdx,rbx
0x00e8ac90: mov    rcx,r12
0x00e8ac93: call   0x140070b20
0x00e8ac98: mov    eax,DWORD PTR [r13+0xa8]
0x00e8ac9f: dec    eax
0x00e8aca1: cmp    eax,0x7
0x00e8aca4: ja     0x140e8ae72
0x00e8acaa: cdqe
0x00e8acac: mov    ecx,DWORD PTR [r15+rax*4+0xe8f5fc]
0x00e8acb4: add    rcx,r15
0x00e8acb7: jmp    rcx
0x00e8acb9: lea    rdx,[rip+0x8c1478]        # 0x14174c138 ; literal="monometer"
0x00e8acc0: jmp    0x140e8ae6a
0x00e8acc5: lea    rdx,[rip+0x8c148c]        # 0x14174c158 ; literal="trimeter"
0x00e8accc: jmp    0x140e8ae6a
0x00e8acd1: lea    rdx,[rip+0x8c1470]        # 0x14174c148 ; literal="tetrameter"
0x00e8acd8: jmp    0x140e8ae6a
0x00e8acdd: lea    rdx,[rip+0x8c141c]        # 0x14174c100 ; literal="pentameter"
0x00e8ace4: jmp    0x140e8ae6a
0x00e8ace9: lea    rdx,[rip+0x8c1400]        # 0x14174c0f0 ; literal="hexameter"
0x00e8acf0: jmp    0x140e8ae6a
0x00e8acf5: lea    rdx,[rip+0x8c1424]        # 0x14174c120 ; literal="heptameter"
0x00e8acfc: jmp    0x140e8ae6a
0x00e8ad01: lea    rdx,[rip+0x8c14d8]        # 0x14174c1e0 ; literal="an accent pattern of "
0x00e8ad08: call   0x140070b20
0x00e8ad0d: movsxd rax,DWORD PTR [r13+0xac]
0x00e8ad14: cmp    eax,0xb
0x00e8ad17: ja     0x140e8ad98
0x00e8ad19: mov    ecx,DWORD PTR [r15+rax*4+0xe8f61c]
0x00e8ad21: add    rcx,r15
0x00e8ad24: jmp    rcx
0x00e8ad26: lea    rdx,[rip+0x8c14eb]        # 0x14174c218 ; literal="unstressed-stressed"
0x00e8ad2d: jmp    0x140e8ad90
0x00e8ad2f: lea    rdx,[rip+0x8c14ca]        # 0x14174c200 ; literal="stressed-unstressed"
0x00e8ad36: jmp    0x140e8ad90
0x00e8ad38: lea    rdx,[rip+0x8c1449]        # 0x14174c188 ; literal="stressed-stressed"
0x00e8ad3f: jmp    0x140e8ad90
0x00e8ad41: lea    rdx,[rip+0x8c1420]        # 0x14174c168 ; literal="stressed-unstressed-unstressed"
0x00e8ad48: jmp    0x140e8ad90
0x00e8ad4a: lea    rdx,[rip+0x8c146f]        # 0x14174c1c0 ; literal="unstressed-stressed-unstressed"
0x00e8ad51: jmp    0x140e8ad90
0x00e8ad53: lea    rdx,[rip+0x8c1446]        # 0x14174c1a0 ; literal="unstressed-unstressed-stressed"
0x00e8ad5a: jmp    0x140e8ad90
0x00e8ad5c: lea    rdx,[rip+0x8c1545]        # 0x14174c2a8 ; literal="stressed-unstressed-stressed"
0x00e8ad63: jmp    0x140e8ad90
0x00e8ad65: lea    rdx,[rip+0x8c1524]        # 0x14174c290 ; literal="unstressed-unstressed"
0x00e8ad6c: jmp    0x140e8ad90
0x00e8ad6e: lea    rdx,[rip+0x8c1573]        # 0x14174c2e8 ; literal="unstressed-unstressed-unstressed"
0x00e8ad75: jmp    0x140e8ad90
0x00e8ad77: lea    rdx,[rip+0x8c154a]        # 0x14174c2c8 ; literal="unstressed-stressed-stressed"
0x00e8ad7e: jmp    0x140e8ad90
0x00e8ad80: lea    rdx,[rip+0x8c14c9]        # 0x14174c250 ; literal="stressed-stressed-unstressed"
0x00e8ad87: jmp    0x140e8ad90
0x00e8ad89: lea    rdx,[rip+0x8c14a0]        # 0x14174c230 ; literal="stressed-stressed-stressed"
0x00e8ad90: mov    rcx,r12
0x00e8ad93: call   0x140070b20
0x00e8ad98: lea    rdx,[rip+0x8c14e1]        # 0x14174c280 ; literal=" (qualitative "
0x00e8ad9f: mov    rcx,r12
0x00e8ada2: call   0x140070b20
0x00e8ada7: movsxd rax,DWORD PTR [r13+0xac]
0x00e8adae: cmp    eax,0xb
0x00e8adb1: ja     0x140e8ae32
0x00e8adb3: mov    ecx,DWORD PTR [r15+rax*4+0xe8f64c]
0x00e8adbb: add    rcx,r15
0x00e8adbe: jmp    rcx
0x00e8adc0: lea    rdx,[rip+0x8c1255]        # 0x14174c01c ; literal="iambic"
0x00e8adc7: jmp    0x140e8ae2a
0x00e8adc9: lea    rdx,[rip+0x8c1240]        # 0x14174c010 ; literal="trochaic"
0x00e8add0: jmp    0x140e8ae2a
0x00e8add2: lea    rdx,[rip+0x8c125f]        # 0x14174c038 ; literal="spondaic"
0x00e8add9: jmp    0x140e8ae2a
0x00e8addb: lea    rdx,[rip+0x8c1246]        # 0x14174c028 ; literal="dactylic"
0x00e8ade2: jmp    0x140e8ae2a
0x00e8ade4: lea    rdx,[rip+0x8c12e5]        # 0x14174c0d0 ; literal="amphibrachic"
0x00e8adeb: jmp    0x140e8ae2a
0x00e8aded: lea    rdx,[rip+0x8c12cc]        # 0x14174c0c0 ; literal="anapaestic"
0x00e8adf4: jmp    0x140e8ae2a
0x00e8adf6: lea    rdx,[rip+0x8c12eb]        # 0x14174c0e8 ; literal="cretic"
0x00e8adfd: jmp    0x140e8ae2a
0x00e8adff: lea    rdx,[rip+0x8c12da]        # 0x14174c0e0 ; literal="pyrrhic"
0x00e8ae06: jmp    0x140e8ae2a
0x00e8ae08: lea    rdx,[rip+0x8c1281]        # 0x14174c090 ; literal="tribrachic"
0x00e8ae0f: jmp    0x140e8ae2a
0x00e8ae11: lea    rdx,[rip+0x8c1270]        # 0x14174c088 ; literal="bacchic"
0x00e8ae18: jmp    0x140e8ae2a
0x00e8ae1a: lea    rdx,[rip+0x8c128f]        # 0x14174c0b0 ; literal="antibacchic"
0x00e8ae21: jmp    0x140e8ae2a
0x00e8ae23: lea    rdx,[rip+0x8c1276]        # 0x14174c0a0 ; literal="molossic"
0x00e8ae2a: mov    rcx,r12
0x00e8ae2d: call   0x140070b20
0x00e8ae32: mov    rdx,rbx
0x00e8ae35: mov    rcx,r12
0x00e8ae38: call   0x140070b20
0x00e8ae3d: mov    eax,DWORD PTR [r13+0xa8]
0x00e8ae44: dec    eax
0x00e8ae46: cmp    eax,0x7
0x00e8ae49: ja     0x140e8ae72
0x00e8ae4b: cdqe
0x00e8ae4d: mov    ecx,DWORD PTR [r15+rax*4+0xe8f67c]
0x00e8ae55: add    rcx,r15
0x00e8ae58: jmp    rcx
0x00e8ae5a: lea    rdx,[rip+0x8c12cf]        # 0x14174c130 ; literal="dimeter"
0x00e8ae61: jmp    0x140e8ae6a
0x00e8ae63: lea    rdx,[rip+0x8c12a6]        # 0x14174c110 ; literal="octameter"
0x00e8ae6a: mov    rcx,r12
0x00e8ae6d: call   0x140070b20
0x00e8ae72: lea    rdx,[rip+0x8c137f]        # 0x14174c1f8 ; literal=").  "
0x00e8ae79: mov    rcx,r12
0x00e8ae7c: call   0x140070b20
0x00e8ae81: nop
0x00e8ae82: jmp    0x140e8b03c
0x00e8ae87: test   eax,eax
0x00e8ae89: je     0x140e8b048
0x00e8ae8f: lea    rcx,[r13+0x90]
0x00e8ae96: lea    rdx,[rsp+0x60]
0x00e8ae9b: call   0x140070800
0x00e8aea0: lea    rcx,[r13+0x90]
0x00e8aea7: lea    rdx,[rbp-0x68]
0x00e8aeab: call   0x1400707f0
0x00e8aeb0: lea    r8,[rbp-0x68]
0x00e8aeb4: lea    rdx,[rsp+0x33]
0x00e8aeb9: lea    rcx,[rsp+0x60]
0x00e8aebe: call   0x1400703e0
0x00e8aec3: xor    edx,edx
0x00e8aec5: movzx  ecx,BYTE PTR [rax]
0x00e8aec8: call   0x140066d70
0x00e8aecd: test   al,al
0x00e8aecf: je     0x140e8afbe
0x00e8aed5: lea    rcx,[rsp+0x60]
0x00e8aeda: call   0x1400703d0
0x00e8aedf: mov    rcx,QWORD PTR [rax]
0x00e8aee2: cmp    DWORD PTR [rcx+0x15c],0xffffffff
0x00e8aee9: jne    0x140e8b048
0x00e8aeef: lea    rcx,[rsp+0x60]
0x00e8aef4: call   0x1400703d0
0x00e8aef9: mov    rcx,QWORD PTR [rax]
0x00e8aefc: add    rcx,0x50
0x00e8af00: lea    rdx,[rsp+0x68]
0x00e8af05: call   0x140070800
0x00e8af0a: lea    rcx,[rsp+0x60]
0x00e8af0f: call   0x1400703d0
0x00e8af14: mov    rcx,QWORD PTR [rax]
0x00e8af17: add    rcx,0x50
0x00e8af1b: lea    rdx,[rsp+0x78]
0x00e8af20: call   0x1400707f0
0x00e8af25: lea    r8,[rsp+0x78]
0x00e8af2a: lea    rdx,[rsp+0x32]
0x00e8af2f: lea    rcx,[rsp+0x68]
0x00e8af34: call   0x1400703e0
0x00e8af39: xor    edx,edx
0x00e8af3b: movzx  ecx,BYTE PTR [rax]
0x00e8af3e: call   0x140066d70
0x00e8af43: test   al,al
0x00e8af45: je     0x140e8af8f
0x00e8af47: nop    WORD PTR [rax+rax*1+0x0]
0x00e8af50: lea    rcx,[rsp+0x68]
0x00e8af55: call   0x1400703d0
0x00e8af5a: cmp    DWORD PTR [rax],0xffffffff
0x00e8af5d: jne    0x140e8b048
0x00e8af63: lea    rcx,[rsp+0x68]
0x00e8af68: call   0x140070910
0x00e8af6d: lea    r8,[rsp+0x78]
0x00e8af72: lea    rdx,[rsp+0x32]
0x00e8af77: lea    rcx,[rsp+0x68]
0x00e8af7c: call   0x1400703e0
0x00e8af81: xor    edx,edx
0x00e8af83: movzx  ecx,BYTE PTR [rax]
0x00e8af86: call   0x140066d70
0x00e8af8b: test   al,al
0x00e8af8d: jne    0x140e8af50
0x00e8af8f: lea    rcx,[rsp+0x60]
0x00e8af94: call   0x1400703c0
0x00e8af99: lea    r8,[rbp-0x68]
0x00e8af9d: lea    rdx,[rsp+0x33]
0x00e8afa2: lea    rcx,[rsp+0x60]
0x00e8afa7: call   0x1400703e0
0x00e8afac: xor    edx,edx
0x00e8afae: movzx  ecx,BYTE PTR [rax]
0x00e8afb1: call   0x140066d70
0x00e8afb6: test   al,al
0x00e8afb8: jne    0x140e8aed5
0x00e8afbe: lea    rcx,[r13+0x90]
0x00e8afc5: call   0x140070410
0x00e8afca: cmp    rax,0x2
0x00e8afce: jae    0x140e8afee
0x00e8afd0: lea    rcx,[r13+0x90]
0x00e8afd7: xor    edx,edx
0x00e8afd9: call   0x1400707e0
0x00e8afde: mov    rcx,QWORD PTR [rax]
0x00e8afe1: cmp    DWORD PTR [rcx+0xc],0x2
0x00e8afe5: lea    rdx,[rip+0x8c00ec]        # 0x14174b0d8 ; literal="The poem has "
0x00e8afec: jl     0x140e8aff5
0x00e8afee: lea    rdx,[rip+0x8c0063]        # 0x14174b058 ; literal="Each line has "
0x00e8aff5: mov    rcx,r12
0x00e8aff8: call   0x140070b20
0x00e8affd: lea    rcx,[rbp+0x88]
0x00e8b004: call   0x140070c50
0x00e8b009: nop
0x00e8b00a: lea    rdx,[rbp+0x88]
0x00e8b011: mov    ecx,DWORD PTR [r13+0xa8]
0x00e8b018: call   0x140545040
0x00e8b01d: lea    rdx,[rbp+0x88]
0x00e8b024: mov    rcx,r12
0x00e8b027: call   0x1400bb2d0
0x00e8b02c: lea    rdx,[rip+0x8c123d]        # 0x14174c270 ; literal=" syllables.  "
0x00e8b033: mov    rcx,r12
0x00e8b036: call   0x140070b20
0x00e8b03b: nop
0x00e8b03c: lea    rcx,[rbp+0x88]
0x00e8b043: call   0x1400693f0
0x00e8b048: cmp    DWORD PTR [r13+0xb0],0xffffffff
0x00e8b050: je     0x140e8b0da
0x00e8b056: lea    rcx,[r13+0x90]
0x00e8b05d: call   0x140070410
0x00e8b062: cmp    rax,0x2
0x00e8b066: jae    0x140e8b086
0x00e8b068: lea    rcx,[r13+0x90]
0x00e8b06f: xor    edx,edx
0x00e8b071: call   0x1400707e0
0x00e8b076: mov    rcx,QWORD PTR [rax]
0x00e8b079: cmp    DWORD PTR [rcx+0xc],0x2
0x00e8b07d: lea    rdx,[rip+0x8c0054]        # 0x14174b0d8 ; literal="The poem has "
0x00e8b084: jl     0x140e8b08d
0x00e8b086: lea    rdx,[rip+0x8c0743]        # 0x14174b7d0 ; literal="Every line of the poem has "
0x00e8b08d: mov    rcx,r12
0x00e8b090: call   0x140070b20
0x00e8b095: mov    ecx,DWORD PTR [r13+0xb0]
0x00e8b09c: test   ecx,ecx
0x00e8b09e: je     0x140e8b0bc
0x00e8b0a0: sub    ecx,0x1
0x00e8b0a3: je     0x140e8b0b3
0x00e8b0a5: cmp    ecx,0x1
0x00e8b0a8: jne    0x140e8b0cb
0x00e8b0aa: lea    rdx,[rip+0x8c073f]        # 0x14174b7f0 ; literal="a terminal caesura"
0x00e8b0b1: jmp    0x140e8b0c3
0x00e8b0b3: lea    rdx,[rip+0x8c074e]        # 0x14174b808 ; literal="a medial caesura"
0x00e8b0ba: jmp    0x140e8b0c3
0x00e8b0bc: lea    rdx,[rip+0x8c06f5]        # 0x14174b7b8 ; literal="an initial caesura"
0x00e8b0c3: mov    rcx,r12
0x00e8b0c6: call   0x140070b20
0x00e8b0cb: lea    rdx,[rip+0x7895ae]        # 0x141614680 ; literal=".  "
0x00e8b0d2: mov    rcx,r12
0x00e8b0d5: call   0x140070b20
0x00e8b0da: mov    BYTE PTR [rsp+0x40],0x1
0x00e8b0df: lea    rcx,[r13+0x90]
0x00e8b0e6: lea    rdx,[rbp-0x80]
0x00e8b0ea: call   0x140070800
0x00e8b0ef: lea    rcx,[r13+0x90]
0x00e8b0f6: lea    rdx,[rbp-0x30]
0x00e8b0fa: call   0x1400707f0
0x00e8b0ff: lea    r8,[rbp-0x30]
0x00e8b103: lea    rdx,[rsp+0x33]
0x00e8b108: lea    rcx,[rbp-0x80]
0x00e8b10c: call   0x1400703e0
0x00e8b111: xor    edx,edx
0x00e8b113: movzx  ecx,BYTE PTR [rax]
0x00e8b116: call   0x140066d70
0x00e8b11b: test   al,al
0x00e8b11d: je     0x140e8b287
0x00e8b123: lea    rcx,[rbp-0x80]
0x00e8b127: call   0x1400703d0
0x00e8b12c: mov    rcx,QWORD PTR [rax]
0x00e8b12f: test   BYTE PTR [rcx],0x1
0x00e8b132: jne    0x140e8b14a
0x00e8b134: lea    rcx,[r13+0x90]
0x00e8b13b: call   0x140070410
0x00e8b140: cmp    rax,0x2
0x00e8b144: jae    0x140e8b2d9
0x00e8b14a: lea    rcx,[rbp-0x80]
0x00e8b14e: call   0x1400703d0
0x00e8b153: mov    rcx,QWORD PTR [rax]
0x00e8b156: cmp    DWORD PTR [rcx+0x18],0xffffffff
0x00e8b15a: jne    0x140e8b2d9
0x00e8b160: lea    rcx,[rbp-0x80]
0x00e8b164: call   0x1400703d0
0x00e8b169: mov    rcx,QWORD PTR [rax]
0x00e8b16c: cmp    DWORD PTR [rcx+0x1c],0xffffffff
0x00e8b170: jne    0x140e8b2d9
0x00e8b176: mov    edi,0xffffffff
0x00e8b17b: mov    bl,0x1
0x00e8b17d: xor    sil,sil
0x00e8b180: lea    rcx,[rbp-0x80]
0x00e8b184: call   0x1400703d0
0x00e8b189: mov    rcx,QWORD PTR [rax]
0x00e8b18c: add    rcx,0x20
0x00e8b190: lea    rdx,[rsp+0x60]
0x00e8b195: call   0x140070800
0x00e8b19a: lea    rcx,[rbp-0x80]
0x00e8b19e: call   0x1400703d0
0x00e8b1a3: mov    rcx,QWORD PTR [rax]
0x00e8b1a6: add    rcx,0x20
0x00e8b1aa: lea    rdx,[rsp+0x78]
0x00e8b1af: call   0x1400707f0
0x00e8b1b4: lea    r8,[rsp+0x78]
0x00e8b1b9: lea    rdx,[rsp+0x32]
0x00e8b1be: lea    rcx,[rsp+0x60]
0x00e8b1c3: call   0x1400703e0
0x00e8b1c8: xor    edx,edx
0x00e8b1ca: movzx  ecx,BYTE PTR [rax]
0x00e8b1cd: call   0x140066d70
0x00e8b1d2: test   al,al
0x00e8b1d4: je     0x140e8b2d9
0x00e8b1da: xor    r12d,r12d
0x00e8b1dd: nop    DWORD PTR [rax]
0x00e8b1e0: lea    rcx,[rsp+0x60]
0x00e8b1e5: call   0x1400703d0
0x00e8b1ea: cmp    DWORD PTR [rax],r12d
0x00e8b1ed: jl     0x140e8b21d
0x00e8b1ef: lea    rcx,[rsp+0x60]
0x00e8b1f4: call   0x1400703d0
0x00e8b1f9: cmp    DWORD PTR [rax],0x1a
0x00e8b1fc: jge    0x140e8b21d
0x00e8b1fe: lea    rcx,[rsp+0x60]
0x00e8b203: call   0x1400703d0
0x00e8b208: cmp    edi,0xffffffff
0x00e8b20b: jne    0x140e8b211
0x00e8b20d: mov    edi,DWORD PTR [rax]
0x00e8b20f: jmp    0x140e8b21a
0x00e8b211: movzx  ebx,bl
0x00e8b214: cmp    DWORD PTR [rax],edi
0x00e8b216: cmovne ebx,r12d
0x00e8b21a: mov    sil,0x1
0x00e8b21d: lea    rcx,[rsp+0x60]
0x00e8b222: call   0x140070910
0x00e8b227: lea    r8,[rsp+0x78]
0x00e8b22c: lea    rdx,[rsp+0x32]
0x00e8b231: lea    rcx,[rsp+0x60]
0x00e8b236: call   0x1400703e0
0x00e8b23b: xor    edx,edx
0x00e8b23d: movzx  ecx,BYTE PTR [rax]
0x00e8b240: call   0x140066d70
0x00e8b245: test   al,al
0x00e8b247: jne    0x140e8b1e0
0x00e8b249: mov    r12,QWORD PTR [rbp-0x50]
0x00e8b24d: test   sil,sil
0x00e8b250: je     0x140e8b2d9
0x00e8b256: test   bl,bl
0x00e8b258: je     0x140e8b2d9
0x00e8b25a: lea    rcx,[rbp-0x80]
0x00e8b25e: call   0x1400703c0
0x00e8b263: lea    r8,[rbp-0x30]
0x00e8b267: lea    rdx,[rsp+0x33]
0x00e8b26c: lea    rcx,[rbp-0x80]
0x00e8b270: call   0x1400703e0
0x00e8b275: xor    edx,edx
0x00e8b277: movzx  ecx,BYTE PTR [rax]
0x00e8b27a: call   0x140066d70
0x00e8b27f: test   al,al
0x00e8b281: jne    0x140e8b123
0x00e8b287: lea    rcx,[r13+0x90]
0x00e8b28e: call   0x140070410
0x00e8b293: cmp    rax,0x2
0x00e8b297: jae    0x140e8b2b4
0x00e8b299: lea    rcx,[r13+0x90]
0x00e8b2a0: xor    edx,edx
0x00e8b2a2: call   0x1400707e0
0x00e8b2a7: mov    rcx,QWORD PTR [rax]
0x00e8b2aa: cmp    DWORD PTR [rcx+0xc],0x2
0x00e8b2ae: jl     0x140e8b703
0x00e8b2b4: lea    rdx,[rip+0x8c047d]        # 0x14174b738 ; literal="The ending of each line of the poem shares the same rhyme"
0x00e8b2bb: mov    rcx,r12
0x00e8b2be: call   0x140070b20
0x00e8b2c3: test   BYTE PTR [r13+0xe4],0x2
0x00e8b2cb: je     0x140e8b2e4
0x00e8b2cd: lea    rdx,[rip+0x8c0434]        # 0x14174b708 ; literal=", though the rhyming doesn't have to be perfect"
0x00e8b2d4: jmp    0x140e8b6ec
0x00e8b2d9: xor    al,al
0x00e8b2db: mov    BYTE PTR [rsp+0x40],al
0x00e8b2df: jmp    0x140e8b703
0x00e8b2e4: lea    rcx,[r13+0x90]
0x00e8b2eb: call   0x140070410
0x00e8b2f0: lea    rcx,[r13+0x90]
0x00e8b2f7: cmp    rax,0x2
0x00e8b2fb: jb     0x140e8b4c1
0x00e8b301: xor    eax,eax
0x00e8b303: mov    ebx,eax
0x00e8b305: lea    rdx,[rsp+0x68]
0x00e8b30a: call   0x140070800
0x00e8b30f: lea    rcx,[r13+0x90]
0x00e8b316: lea    rdx,[rsp+0x78]
0x00e8b31b: call   0x1400707f0
0x00e8b320: lea    r8,[rsp+0x78]
0x00e8b325: lea    rdx,[rsp+0x32]
0x00e8b32a: lea    rcx,[rsp+0x68]
0x00e8b32f: call   0x1400703e0
0x00e8b334: xor    edx,edx
0x00e8b336: movzx  ecx,BYTE PTR [rax]
0x00e8b339: call   0x140066d70
0x00e8b33e: test   al,al
0x00e8b340: je     0x140e8b6f4
0x00e8b346: lea    rcx,[rsp+0x68]
0x00e8b34b: call   0x1400703d0
0x00e8b350: mov    rcx,QWORD PTR [rax]
0x00e8b353: test   BYTE PTR [rcx+0x194],0x2
0x00e8b35a: lea    eax,[rbx+0x1]
0x00e8b35d: cmove  eax,ebx
0x00e8b360: mov    ebx,eax
0x00e8b362: lea    rcx,[rsp+0x68]
0x00e8b367: call   0x1400703c0
0x00e8b36c: lea    r8,[rsp+0x78]
0x00e8b371: lea    rdx,[rsp+0x32]
0x00e8b376: lea    rcx,[rsp+0x68]
0x00e8b37b: call   0x1400703e0
0x00e8b380: xor    edx,edx
0x00e8b382: movzx  ecx,BYTE PTR [rax]
0x00e8b385: call   0x140066d70
0x00e8b38a: test   al,al
0x00e8b38c: jne    0x140e8b346
0x00e8b38e: test   ebx,ebx
0x00e8b390: jle    0x140e8b6f4
0x00e8b396: mov    esi,ebx
0x00e8b398: lea    rdx,[rip+0x8c03e9]        # 0x14174b788 ; literal=", though rhymes at the end of lines in the "
0x00e8b39f: mov    rcx,r12
0x00e8b3a2: call   0x140070b20
0x00e8b3a7: mov    edi,0x1
0x00e8b3ac: lea    rcx,[r13+0x90]
0x00e8b3b3: lea    rdx,[rbp-0x70]
0x00e8b3b7: call   0x140070800
0x00e8b3bc: lea    rcx,[r13+0x90]
0x00e8b3c3: lea    rdx,[rbp-0x68]
0x00e8b3c7: call   0x1400707f0
0x00e8b3cc: lea    r8,[rbp-0x68]
0x00e8b3d0: lea    rdx,[rsp+0x32]
0x00e8b3d5: lea    rcx,[rbp-0x70]
0x00e8b3d9: call   0x1400703e0
0x00e8b3de: xor    edx,edx
0x00e8b3e0: movzx  ecx,BYTE PTR [rax]
0x00e8b3e3: call   0x140066d70
0x00e8b3e8: test   al,al
0x00e8b3ea: je     0x140e8b48b
0x00e8b3f0: lea    rcx,[rbp-0x70]
0x00e8b3f4: call   0x1400703d0
0x00e8b3f9: mov    rcx,QWORD PTR [rax]
0x00e8b3fc: test   BYTE PTR [rcx+0x194],0x2
0x00e8b403: je     0x140e8b45c
0x00e8b405: lea    rcx,[rbp+0x48]
0x00e8b409: call   0x140070c50
0x00e8b40e: nop
0x00e8b40f: xor    r8d,r8d
0x00e8b412: lea    rdx,[rbp+0x48]
0x00e8b416: mov    ecx,edi
0x00e8b418: call   0x140545850
0x00e8b41d: lea    rcx,[rbp+0x48]
0x00e8b421: call   0x140543d60
0x00e8b426: lea    rdx,[rbp+0x48]
0x00e8b42a: mov    rcx,r12
0x00e8b42d: call   0x1400bb2d0
0x00e8b432: cmp    ebx,0x2
0x00e8b435: jne    0x140e8b440
0x00e8b437: lea    rdx,[rip+0x773f02]        # 0x1415ff340 ; literal=" and "
0x00e8b43e: jmp    0x140e8b449
0x00e8b440: jle    0x140e8b451
0x00e8b442: lea    rdx,[rip+0x773ebf]        # 0x1415ff308 ; literal=", "
0x00e8b449: mov    rcx,r12
0x00e8b44c: call   0x140070b20
0x00e8b451: dec    ebx
0x00e8b453: lea    rcx,[rbp+0x48]
0x00e8b457: call   0x1400693f0
0x00e8b45c: lea    rcx,[rbp-0x70]
0x00e8b460: call   0x1400703c0
0x00e8b465: inc    edi
0x00e8b467: lea    r8,[rbp-0x68]
0x00e8b46b: lea    rdx,[rsp+0x32]
0x00e8b470: lea    rcx,[rbp-0x70]
0x00e8b474: call   0x1400703e0
0x00e8b479: xor    edx,edx
0x00e8b47b: movzx  ecx,BYTE PTR [rax]
0x00e8b47e: call   0x140066d70
0x00e8b483: test   al,al
0x00e8b485: jne    0x140e8b3f0
0x00e8b48b: lea    rdx,[rip+0x7734da]        # 0x1415fe96c ; literal=" "
0x00e8b492: mov    rcx,r12
0x00e8b495: call   0x140070b20
0x00e8b49a: mov    rcx,r12
0x00e8b49d: cmp    esi,0x2
0x00e8b4a0: lea    rdx,[rip+0x8c02d1]        # 0x14174b778 ; literal="sections"
0x00e8b4a7: jge    0x140e8b4b0
0x00e8b4a9: lea    rdx,[rip+0x8c03e0]        # 0x14174b890 ; literal="section"
0x00e8b4b0: call   0x140070b20
0x00e8b4b5: lea    rdx,[rip+0x8c03b4]        # 0x14174b870 ; literal=" don't need to match perfectly"
0x00e8b4bc: jmp    0x140e8b6ec
0x00e8b4c1: xor    edx,edx
0x00e8b4c3: call   0x1400707e0
0x00e8b4c8: mov    rcx,QWORD PTR [rax]
0x00e8b4cb: sub    rcx,0xffffffffffffff80
0x00e8b4cf: call   0x140070930
0x00e8b4d4: test   rax,rax
0x00e8b4d7: je     0x140e8b6f4
0x00e8b4dd: xor    eax,eax
0x00e8b4df: mov    ebx,eax
0x00e8b4e1: lea    rcx,[r13+0x90]
0x00e8b4e8: xor    edx,edx
0x00e8b4ea: call   0x1400707e0
0x00e8b4ef: mov    rcx,QWORD PTR [rax]
0x00e8b4f2: sub    rcx,0xffffffffffffff80
0x00e8b4f6: lea    rdx,[rsp+0x68]
0x00e8b4fb: call   0x140070800
0x00e8b500: lea    rcx,[r13+0x90]
0x00e8b507: xor    edx,edx
0x00e8b509: call   0x1400707e0
0x00e8b50e: mov    rcx,QWORD PTR [rax]
0x00e8b511: sub    rcx,0xffffffffffffff80
0x00e8b515: lea    rdx,[rsp+0x78]
0x00e8b51a: call   0x1400707f0
0x00e8b51f: lea    r8,[rsp+0x78]
0x00e8b524: lea    rdx,[rsp+0x32]
0x00e8b529: lea    rcx,[rsp+0x68]
0x00e8b52e: call   0x1400703e0
0x00e8b533: xor    edx,edx
0x00e8b535: movzx  ecx,BYTE PTR [rax]
0x00e8b538: call   0x140066d70
0x00e8b53d: test   al,al
0x00e8b53f: je     0x140e8b6f4
0x00e8b545: lea    rcx,[rsp+0x68]
0x00e8b54a: call   0x1400703d0
0x00e8b54f: test   BYTE PTR [rax],0x2
0x00e8b552: lea    eax,[rbx+0x1]
0x00e8b555: cmove  eax,ebx
0x00e8b558: mov    ebx,eax
0x00e8b55a: lea    rcx,[rsp+0x68]
0x00e8b55f: call   0x140070910
0x00e8b564: lea    r8,[rsp+0x78]
0x00e8b569: lea    rdx,[rsp+0x32]
0x00e8b56e: lea    rcx,[rsp+0x68]
0x00e8b573: call   0x1400703e0
0x00e8b578: xor    edx,edx
0x00e8b57a: movzx  ecx,BYTE PTR [rax]
0x00e8b57d: call   0x140066d70
0x00e8b582: test   al,al
0x00e8b584: jne    0x140e8b545
0x00e8b586: test   ebx,ebx
0x00e8b588: jle    0x140e8b6f4
0x00e8b58e: mov    esi,ebx
0x00e8b590: lea    rdx,[rip+0x8c0319]        # 0x14174b8b0 ; literal=", though the rhyme"
0x00e8b597: mov    rcx,r12
0x00e8b59a: call   0x140070b20
0x00e8b59f: cmp    ebx,0x2
0x00e8b5a2: jl     0x140e8b5b3
0x00e8b5a4: lea    rdx,[rip+0x773f1d]        # 0x1415ff4c8 ; literal="s"
0x00e8b5ab: mov    rcx,r12
0x00e8b5ae: call   0x140070b20
0x00e8b5b3: lea    rdx,[rip+0x8c02de]        # 0x14174b898 ; literal=" at the end of the "
0x00e8b5ba: mov    rcx,r12
0x00e8b5bd: call   0x140070b20
0x00e8b5c2: mov    edi,0x1
0x00e8b5c7: lea    rcx,[r13+0x90]
0x00e8b5ce: xor    edx,edx
0x00e8b5d0: call   0x1400707e0
0x00e8b5d5: mov    rcx,QWORD PTR [rax]
0x00e8b5d8: sub    rcx,0xffffffffffffff80
0x00e8b5dc: lea    rdx,[rbp-0x70]
0x00e8b5e0: call   0x140070800
0x00e8b5e5: lea    rcx,[r13+0x90]
0x00e8b5ec: xor    edx,edx
0x00e8b5ee: call   0x1400707e0
0x00e8b5f3: mov    rcx,QWORD PTR [rax]
0x00e8b5f6: sub    rcx,0xffffffffffffff80
0x00e8b5fa: lea    rdx,[rbp-0x68]
0x00e8b5fe: call   0x1400707f0
0x00e8b603: lea    r8,[rbp-0x68]
0x00e8b607: lea    rdx,[rsp+0x32]
0x00e8b60c: lea    rcx,[rbp-0x70]
0x00e8b610: call   0x1400703e0
0x00e8b615: xor    edx,edx
0x00e8b617: movzx  ecx,BYTE PTR [rax]
0x00e8b61a: call   0x140066d70
0x00e8b61f: test   al,al
0x00e8b621: je     0x140e8b6bb
0x00e8b627: lea    rcx,[rbp-0x70]
0x00e8b62b: call   0x1400703d0
0x00e8b630: test   BYTE PTR [rax],0x2
0x00e8b633: je     0x140e8b68c
0x00e8b635: lea    rcx,[rbp+0x48]
0x00e8b639: call   0x140070c50
0x00e8b63e: nop
0x00e8b63f: xor    r8d,r8d
0x00e8b642: lea    rdx,[rbp+0x48]
0x00e8b646: mov    ecx,edi
0x00e8b648: call   0x140545850
0x00e8b64d: lea    rcx,[rbp+0x48]
0x00e8b651: call   0x140543d60
0x00e8b656: lea    rdx,[rbp+0x48]
0x00e8b65a: mov    rcx,r12
0x00e8b65d: call   0x1400bb2d0
0x00e8b662: cmp    ebx,0x2
0x00e8b665: jne    0x140e8b670
0x00e8b667: lea    rdx,[rip+0x773cd2]        # 0x1415ff340 ; literal=" and "
0x00e8b66e: jmp    0x140e8b679
0x00e8b670: jle    0x140e8b681
0x00e8b672: lea    rdx,[rip+0x773c8f]        # 0x1415ff308 ; literal=", "
0x00e8b679: mov    rcx,r12
0x00e8b67c: call   0x140070b20
0x00e8b681: dec    ebx
0x00e8b683: lea    rcx,[rbp+0x48]
0x00e8b687: call   0x1400693f0
0x00e8b68c: lea    rcx,[rbp-0x70]
0x00e8b690: call   0x140070910
0x00e8b695: inc    edi
0x00e8b697: lea    r8,[rbp-0x68]
0x00e8b69b: lea    rdx,[rsp+0x32]
0x00e8b6a0: lea    rcx,[rbp-0x70]
0x00e8b6a4: call   0x1400703e0
0x00e8b6a9: xor    edx,edx
0x00e8b6ab: movzx  ecx,BYTE PTR [rax]
0x00e8b6ae: call   0x140066d70
0x00e8b6b3: test   al,al
0x00e8b6b5: jne    0x140e8b627
0x00e8b6bb: lea    rdx,[rip+0x7732aa]        # 0x1415fe96c ; literal=" "
0x00e8b6c2: mov    rcx,r12
0x00e8b6c5: call   0x140070b20
0x00e8b6ca: mov    rcx,r12
0x00e8b6cd: cmp    esi,0x2
0x00e8b6d0: lea    rdx,[rip+0x8c0159]        # 0x14174b830 ; literal="lines don't"
0x00e8b6d7: jge    0x140e8b6e0
0x00e8b6d9: lea    rdx,[rip+0x8c0140]        # 0x14174b820 ; literal="line doesn't"
0x00e8b6e0: call   0x140070b20
0x00e8b6e5: lea    rdx,[rip+0x8c0164]        # 0x14174b850 ; literal=" need to match perfectly"
0x00e8b6ec: mov    rcx,r12
0x00e8b6ef: call   0x140070b20
0x00e8b6f4: lea    rdx,[rip+0x788f85]        # 0x141614680 ; literal=".  "
0x00e8b6fb: mov    rcx,r12
0x00e8b6fe: call   0x140070b20
0x00e8b703: mov    BYTE PTR [rsp+0x70],0x1
0x00e8b708: mov    edi,0xffffffff
0x00e8b70d: lea    rcx,[r13+0x90]
0x00e8b714: lea    rdx,[rbp-0x28]
0x00e8b718: call   0x140070800
0x00e8b71d: mov    rcx,QWORD PTR [rax]
0x00e8b720: mov    QWORD PTR [rbp-0x80],rcx
0x00e8b724: lea    r8,[rbp-0x30]
0x00e8b728: lea    rdx,[rsp+0x32]
0x00e8b72d: lea    rcx,[rbp-0x80]
0x00e8b731: call   0x1400703e0
0x00e8b736: xor    edx,edx
0x00e8b738: movzx  ecx,BYTE PTR [rax]
0x00e8b73b: call   0x140066d70
0x00e8b740: test   al,al
0x00e8b742: je     0x140e8b7bc
0x00e8b744: nop    DWORD PTR [rax+0x0]
0x00e8b748: nop    DWORD PTR [rax+rax*1+0x0]
0x00e8b750: mov    ebx,0x18
0x00e8b755: lea    rcx,[rbp-0x80]
0x00e8b759: call   0x1400703d0
0x00e8b75e: mov    rcx,QWORD PTR [rax]
0x00e8b761: cmp    DWORD PTR [rbx+rcx*1],0xffffffff
0x00e8b765: je     0x140e8b782
0x00e8b767: lea    rcx,[rbp-0x80]
0x00e8b76b: call   0x1400703d0
0x00e8b770: mov    rcx,QWORD PTR [rax]
0x00e8b773: cmp    edi,0xffffffff
0x00e8b776: jne    0x140e8b77d
0x00e8b778: mov    edi,DWORD PTR [rbx+rcx*1]
0x00e8b77b: jmp    0x140e8b782
0x00e8b77d: cmp    edi,DWORD PTR [rbx+rcx*1]
0x00e8b780: jne    0x140e8b78e
0x00e8b782: add    rbx,0x4
0x00e8b786: cmp    rbx,0x20
0x00e8b78a: jl     0x140e8b755
0x00e8b78c: jmp    0x140e8b793
0x00e8b78e: mov    BYTE PTR [rsp+0x70],0x0
0x00e8b793: lea    rcx,[rbp-0x80]
0x00e8b797: call   0x1400703c0
0x00e8b79c: lea    r8,[rbp-0x30]
0x00e8b7a0: lea    rdx,[rsp+0x32]
0x00e8b7a5: lea    rcx,[rbp-0x80]
0x00e8b7a9: call   0x1400703e0
0x00e8b7ae: xor    edx,edx
0x00e8b7b0: movzx  ecx,BYTE PTR [rax]
0x00e8b7b3: call   0x140066d70
0x00e8b7b8: test   al,al
0x00e8b7ba: jne    0x140e8b750
0x00e8b7bc: mov    BYTE PTR [rsp+0x33],0x0
0x00e8b7c1: movdqa xmm6,XMMWORD PTR [rip+0x91bc77]        # 0x1417a7440
0x00e8b7c9: movdqu XMMWORD PTR [rbp+0x108],xmm6
0x00e8b7d1: movdqu XMMWORD PTR [rbp+0x118],xmm6
0x00e8b7d9: mov    QWORD PTR [rbp+0x128],0xffffffffffffffff
0x00e8b7e4: xor    ecx,ecx
0x00e8b7e6: mov    DWORD PTR [rsp+0x4c],ecx
0x00e8b7ea: movdqa XMMWORD PTR [rbp+0x130],xmm6
0x00e8b7f2: movdqa XMMWORD PTR [rbp+0x140],xmm6
0x00e8b7fa: movdqa XMMWORD PTR [rbp+0x150],xmm6
0x00e8b802: movdqa XMMWORD PTR [rbp+0x160],xmm6
0x00e8b80a: movdqa XMMWORD PTR [rbp+0x170],xmm6
0x00e8b812: movdqa XMMWORD PTR [rbp+0x180],xmm6
0x00e8b81a: mov    QWORD PTR [rbp+0x190],0xffffffffffffffff
0x00e8b825: mov    DWORD PTR [rbp-0x54],ecx
0x00e8b828: mov    DWORD PTR [rsp+0x50],ecx
0x00e8b82c: mov    BYTE PTR [rsp+0x32],cl
0x00e8b830: lea    rcx,[r13+0x90]
0x00e8b837: lea    rdx,[rbp-0x28]
0x00e8b83b: call   0x140070800
0x00e8b840: mov    rcx,QWORD PTR [rax]
0x00e8b843: lea    r14,[r13+0x90]
0x00e8b84a: mov    QWORD PTR [rsp+0x68],r14
0x00e8b84f: mov    r13d,0x1
0x00e8b855: mov    DWORD PTR [rbp-0x40],r13d
0x00e8b859: mov    DWORD PTR [rbp-0x3c],r13d
0x00e8b85d: movzx  esi,BYTE PTR [rsp+0x30]
0x00e8b862: movzx  ebx,BYTE PTR [rsp+0x30]
0x00e8b867: movzx  edi,BYTE PTR [rsp+0x30]
0x00e8b86c: mov    r8d,0xff
0x00e8b872: mov    QWORD PTR [rbp-0x80],rcx
0x00e8b876: cmp    rcx,QWORD PTR [rbp-0x30]
0x00e8b87a: jne    0x140e8b880
0x00e8b87c: xor    dl,dl
0x00e8b87e: jmp    0x140e8b887
0x00e8b880: mov    edx,r13d
0x00e8b883: cmovb  edx,r8d
0x00e8b887: test   dl,dl
0x00e8b889: jns    0x140e8f450
0x00e8b88f: lea    rcx,[rbp-0x80]
0x00e8b893: call   0x1400703d0
0x00e8b898: mov    r13,QWORD PTR [rax]
0x00e8b89b: mov    QWORD PTR [rsp+0x58],r13
0x00e8b8a0: mov    rcx,r14
0x00e8b8a3: call   0x140070410
0x00e8b8a8: mov    r14,rax
0x00e8b8ab: cmp    rax,0x1
0x00e8b8af: sete   r15b
0x00e8b8b3: mov    BYTE PTR [rsp+0x31],r15b
0x00e8b8b8: lea    rcx,[rbp+0x28]
0x00e8b8bc: call   0x140070c50
0x00e8b8c1: nop
0x00e8b8c2: cmp    DWORD PTR [r13+0x180],0xffffffff
0x00e8b8ca: jne    0x140e8b8e4
0x00e8b8cc: cmp    DWORD PTR [r13+0x18c],0xffffffff
0x00e8b8d4: jne    0x140e8b8e4
0x00e8b8d6: cmp    DWORD PTR [r13+0x184],0xffffffff
0x00e8b8de: je     0x140e8bc24
0x00e8b8e4: lea    rcx,[rbp+0x28]
0x00e8b8e8: cmp    r14,0x1
0x00e8b8ec: je     0x140e8b949
0x00e8b8ee: lea    rdx,[rip+0x77833f]        # 0x141603c34 ; literal="The "
0x00e8b8f5: call   0x140070b20
0x00e8b8fa: lea    rcx,[rbp+0x48]
0x00e8b8fe: call   0x140070c50
0x00e8b903: nop
0x00e8b904: xor    r8d,r8d
0x00e8b907: lea    rdx,[rbp+0x48]
0x00e8b90b: mov    ecx,DWORD PTR [rbp-0x40]
0x00e8b90e: call   0x140545850
0x00e8b913: lea    rcx,[rbp+0x48]
0x00e8b917: call   0x140543d60
0x00e8b91c: lea    rdx,[rbp+0x48]
0x00e8b920: lea    rcx,[rbp+0x28]
0x00e8b924: call   0x1400bb2d0
0x00e8b929: lea    rdx,[rip+0x77911c]        # 0x141604a4c ; literal=" part"
0x00e8b930: lea    rcx,[rbp+0x28]
0x00e8b934: call   0x140070b20
0x00e8b939: mov    BYTE PTR [rsp+0x31],0x1
0x00e8b93e: lea    rcx,[rbp+0x48]
0x00e8b942: call   0x1400693f0
0x00e8b947: jmp    0x140e8b95a
0x00e8b949: lea    rdx,[rip+0x778e08]        # 0x141604758 ; literal="It"
0x00e8b950: call   0x140070b20
0x00e8b955: mov    BYTE PTR [rsp+0x31],r15b
0x00e8b95a: lea    rdx,[rip+0x77300b]        # 0x1415fe96c ; literal=" "
0x00e8b961: lea    rcx,[rbp+0x28]
0x00e8b965: call   0x140070b20
0x00e8b96a: movsxd rax,DWORD PTR [r13+0x180]
0x00e8b971: cmp    eax,0x6
0x00e8b974: ja     0x140e8b9cf
0x00e8b976: lea    rdx,[rip+0xffffffffff174683]        # 0x140000000
0x00e8b97d: mov    ecx,DWORD PTR [rdx+rax*4+0xe8f69c]
0x00e8b984: add    rcx,rdx
0x00e8b987: jmp    rcx
0x00e8b989: lea    rdx,[rip+0x8bfeb0]        # 0x14174b840 ; literal="is dramatic"
0x00e8b990: jmp    0x140e8b9c6
0x00e8b992: lea    rdx,[rip+0x8bff9f]        # 0x14174b938 ; literal="is reflective"
0x00e8b999: jmp    0x140e8b9c6
0x00e8b99b: lea    rdx,[rip+0x8bff86]        # 0x14174b928 ; literal="is ribald"
0x00e8b9a2: jmp    0x140e8b9c6
0x00e8b9a4: lea    rdx,[rip+0x8bffad]        # 0x14174b958 ; literal="is light"
0x00e8b9ab: jmp    0x140e8b9c6
0x00e8b9ad: lea    rdx,[rip+0x8bff94]        # 0x14174b948 ; literal="is solemn"
0x00e8b9b4: jmp    0x140e8b9c6
0x00e8b9b6: lea    rdx,[rip+0x8bff1b]        # 0x14174b8d8 ; literal="is a riddle"
0x00e8b9bd: jmp    0x140e8b9c6
0x00e8b9bf: lea    rdx,[rip+0x8bff02]        # 0x14174b8c8 ; literal="is a narrative"
0x00e8b9c6: lea    rcx,[rbp+0x28]
0x00e8b9ca: call   0x140070b20
0x00e8b9cf: cmp    DWORD PTR [r13+0x18c],0xffffffff
0x00e8b9d7: je     0x140e8bbc3
0x00e8b9dd: lea    rcx,[rbp+0x28]
0x00e8b9e1: cmp    DWORD PTR [r13+0x180],0xffffffff
0x00e8b9e9: lea    rdx,[rip+0x77909c]        # 0x141604a8c ; literal=" and"
0x00e8b9f0: jne    0x140e8b9f9
0x00e8b9f2: lea    rdx,[rip+0x7734db]        # 0x1415feed4 ; literal="is"
0x00e8b9f9: call   0x140070b20
0x00e8b9fe: lea    rdx,[rip+0x8bfa03]        # 0x14174b408 ; literal=" intended "
0x00e8ba05: lea    rcx,[rbp+0x28]
0x00e8ba09: call   0x140070b20
0x00e8ba0e: xor    r15b,r15b
0x00e8ba11: xor    r14b,r14b
0x00e8ba14: movsxd rax,DWORD PTR [r13+0x18c]
0x00e8ba1b: cmp    eax,0x16
0x00e8ba1e: ja     0x140e8bb84
0x00e8ba24: lea    rdx,[rip+0xffffffffff1745d5]        # 0x140000000
0x00e8ba2b: mov    ecx,DWORD PTR [rdx+rax*4+0xe8f6b8]
0x00e8ba32: add    rcx,rdx
0x00e8ba35: jmp    rcx
0x00e8ba37: lea    rdx,[rip+0x8bf9ba]        # 0x14174b3f8 ; literal="to describe"
0x00e8ba3e: lea    rcx,[rbp+0x28]
0x00e8ba42: call   0x140070b20
0x00e8ba47: mov    r15b,0x1
0x00e8ba4a: jmp    0x140e8bb84
0x00e8ba4f: lea    rdx,[rip+0x8bf9da]        # 0x14174b430 ; literal="to satirize"
0x00e8ba56: lea    rcx,[rbp+0x28]
0x00e8ba5a: call   0x140070b20
0x00e8ba5f: mov    r15b,0x1
0x00e8ba62: jmp    0x140e8bb84
0x00e8ba67: lea    rdx,[rip+0x8bf9aa]        # 0x14174b418 ; literal="to amuse the audience"
0x00e8ba6e: jmp    0x140e8bb78
0x00e8ba73: lea    rdx,[rip+0x8bf92e]        # 0x14174b3a8 ; literal="to complain about"
0x00e8ba7a: lea    rcx,[rbp+0x28]
0x00e8ba7e: call   0x140070b20
0x00e8ba83: mov    r15b,0x1
0x00e8ba86: jmp    0x140e8bb84
0x00e8ba8b: lea    rdx,[rip+0x8bf906]        # 0x14174b398 ; literal="to renounce"
0x00e8ba92: lea    rcx,[rbp+0x28]
0x00e8ba96: call   0x140070b20
0x00e8ba9b: jmp    0x140e8bb84
0x00e8baa0: lea    rdx,[rip+0x8bf939]        # 0x14174b3e0 ; literal="to make an apology"
0x00e8baa7: jmp    0x140e8bb78
0x00e8baac: lea    rdx,[rip+0x8bf90d]        # 0x14174b3c0 ; literal="to express pleasure with"
0x00e8bab3: lea    rcx,[rbp+0x28]
0x00e8bab7: call   0x140070b20
0x00e8babc: mov    r15b,0x1
0x00e8babf: jmp    0x140e8bb84
0x00e8bac4: lea    rdx,[rip+0x8bf9e5]        # 0x14174b4b0 ; literal="to express grief over"
0x00e8bacb: lea    rcx,[rbp+0x28]
0x00e8bacf: call   0x140070b20
0x00e8bad4: mov    r15b,0x1
0x00e8bad7: jmp    0x140e8bb84
0x00e8badc: lea    rdx,[rip+0x8bf9bd]        # 0x14174b4a0 ; literal="to praise"
0x00e8bae3: lea    rcx,[rbp+0x28]
0x00e8bae7: call   0x140070b20
0x00e8baec: mov    r15b,0x1
0x00e8baef: jmp    0x140e8bb84
0x00e8baf4: lea    rdx,[rip+0x8bf9e5]        # 0x14174b4e0 ; literal="to beseech"
0x00e8bafb: mov    rcx,r12
0x00e8bafe: call   0x140070b20
0x00e8bb03: jmp    0x140e8bb84
0x00e8bb05: lea    rdx,[rip+0x8bf9bc]        # 0x14174b4c8 ; literal="to teach a moral lesson"
0x00e8bb0c: jmp    0x140e8bb78
0x00e8bb0e: lea    rdx,[rip+0x8bf943]        # 0x14174b458 ; literal="to make an assertion"
0x00e8bb15: jmp    0x140e8bb78
0x00e8bb17: lea    rdx,[rip+0x8bf922]        # 0x14174b440 ; literal="to make a concession"
0x00e8bb1e: jmp    0x140e8bb78
0x00e8bb20: lea    rdx,[rip+0x8bf961]        # 0x14174b488 ; literal="to console the audience"
0x00e8bb27: jmp    0x140e8bb78
0x00e8bb29: lea    rdx,[rip+0x8bf940]        # 0x14174b470 ; literal="to refuse consolation"
0x00e8bb30: jmp    0x140e8bb78
0x00e8bb32: lea    rdx,[rip+0x8bfdcf]        # 0x14174b908 ; literal="to make a counter-assertion"
0x00e8bb39: jmp    0x140e8bb78
0x00e8bb3b: lea    rdx,[rip+0x8bfda6]        # 0x14174b8e8 ; literal="to synthesize previous ideas"
0x00e8bb42: jmp    0x140e8bb78
0x00e8bb44: lea    rdx,[rip+0x8bfebd]        # 0x14174ba08 ; literal="to develop the previous idea"
0x00e8bb4b: jmp    0x140e8bb78
0x00e8bb4d: lea    rdx,[rip+0x8bfe8c]        # 0x14174b9e0 ; literal="to invert the previous assertion"
0x00e8bb54: jmp    0x140e8bb78
0x00e8bb56: lea    rdx,[rip+0x8bfef3]        # 0x14174ba50 ; literal="to undercut the previous assertion"
0x00e8bb5d: jmp    0x140e8bb78
0x00e8bb5f: lea    rdx,[rip+0x8bfec2]        # 0x14174ba28 ; literal="to move away from previous ideas"
0x00e8bb66: jmp    0x140e8bb78
0x00e8bb68: lea    rdx,[rip+0x8bfe21]        # 0x14174b990 ; literal="to reflect on previous ideas"
0x00e8bb6f: jmp    0x140e8bb78
0x00e8bb71: lea    rdx,[rip+0x8bfdf0]        # 0x14174b968 ; literal="to offer a different perspective"
0x00e8bb78: lea    rcx,[rbp+0x28]
0x00e8bb7c: call   0x140070b20
0x00e8bb81: mov    r14b,0x1
0x00e8bb84: cmp    DWORD PTR [r13+0x184],0xffffffff
0x00e8bb8c: je     0x140e8bbac
0x00e8bb8e: test   r14b,r14b
0x00e8bb91: je     0x140e8bba3
0x00e8bb93: lea    rdx,[rip+0x8bfa36]        # 0x14174b5d0 ; literal=" concerning"
0x00e8bb9a: lea    rcx,[rbp+0x28]
0x00e8bb9e: call   0x140070b20
0x00e8bba3: lea    rdx,[rip+0x772dc2]        # 0x1415fe96c ; literal=" "
0x00e8bbaa: jmp    0x140e8bbee
0x00e8bbac: test   r15b,r15b
0x00e8bbaf: je     0x140e8bc0e
0x00e8bbb1: lea    rdx,[rip+0x8bfe08]        # 0x14174b9c0 ; literal=" the subject of the poem"
0x00e8bbb8: lea    rcx,[rbp+0x28]
0x00e8bbbc: call   0x140070b20
0x00e8bbc1: jmp    0x140e8bc0e
0x00e8bbc3: cmp    DWORD PTR [r13+0x184],0xffffffff
0x00e8bbcb: je     0x140e8bc0e
0x00e8bbcd: cmp    DWORD PTR [r13+0x180],0xffffffff
0x00e8bbd5: je     0x140e8bbe7
0x00e8bbd7: lea    rdx,[rip+0x773762]        # 0x1415ff340 ; literal=" and "
0x00e8bbde: lea    rcx,[rbp+0x28]
0x00e8bbe2: call   0x140070b20
0x00e8bbe7: lea    rdx,[rip+0x8bfdc2]        # 0x14174b9b0 ; literal="concerns "
0x00e8bbee: lea    rcx,[rbp+0x28]
0x00e8bbf2: call   0x140070b20
0x00e8bbf7: mov    r8d,DWORD PTR [r13+0x188]
0x00e8bbfe: mov    edx,DWORD PTR [r13+0x184]
0x00e8bc05: lea    rcx,[rbp+0x28]
0x00e8bc09: call   0x140e88cb0
0x00e8bc0e: lea    rdx,[rip+0x788a6b]        # 0x141614680 ; literal=".  "
0x00e8bc15: lea    rcx,[rbp+0x28]
0x00e8bc19: call   0x140070b20
0x00e8bc1e: movzx  r15d,BYTE PTR [rsp+0x31]
0x00e8bc24: cmp    DWORD PTR [r13+0x190],0xffffffff
0x00e8bc2c: je     0x140e8bdd9
0x00e8bc32: lea    rcx,[rbp+0x28]
0x00e8bc36: test   r15b,r15b
0x00e8bc39: jne    0x140e8bc96
0x00e8bc3b: lea    rdx,[rip+0x777ff2]        # 0x141603c34 ; literal="The "
0x00e8bc42: call   0x140070b20
0x00e8bc47: lea    rcx,[rbp+0x48]
0x00e8bc4b: call   0x140070c50
0x00e8bc50: nop
0x00e8bc51: xor    r8d,r8d
0x00e8bc54: lea    rdx,[rbp+0x48]
0x00e8bc58: mov    ecx,DWORD PTR [rbp-0x3c]
0x00e8bc5b: call   0x140545850
0x00e8bc60: lea    rcx,[rbp+0x48]
0x00e8bc64: call   0x140543d60
0x00e8bc69: lea    rdx,[rbp+0x48]
0x00e8bc6d: lea    rcx,[rbp+0x28]
0x00e8bc71: call   0x1400bb2d0
0x00e8bc76: lea    rdx,[rip+0x778dcf]        # 0x141604a4c ; literal=" part"
0x00e8bc7d: lea    rcx,[rbp+0x28]
0x00e8bc81: call   0x140070b20
0x00e8bc86: mov    BYTE PTR [rsp+0x31],0x1
0x00e8bc8b: lea    rcx,[rbp+0x48]
0x00e8bc8f: call   0x1400693f0
0x00e8bc94: jmp    0x140e8bca2
0x00e8bc96: lea    rdx,[rip+0x778abb]        # 0x141604758 ; literal="It"
0x00e8bc9d: call   0x140070b20
0x00e8bca2: lea    rdx,[rip+0x8bfe17]        # 0x14174bac0 ; literal=" is written from the perspective of "
0x00e8bca9: lea    rcx,[rbp+0x28]
0x00e8bcad: call   0x140070b20
0x00e8bcb2: mov    rcx,QWORD PTR [rbp-0x60]
0x00e8bcb6: add    rcx,0xe8
0x00e8bcbd: movsxd rdx,DWORD PTR [r13+0x190]
0x00e8bcc4: call   0x1400707e0
0x00e8bcc9: mov    r14,QWORD PTR [rax]
0x00e8bccc: movsxd rax,DWORD PTR [r14]
0x00e8bccf: cmp    eax,0x7
0x00e8bcd2: ja     0x140e8bdc9
0x00e8bcd8: lea    rdx,[rip+0xffffffffff174321]        # 0x140000000
0x00e8bcdf: mov    ecx,DWORD PTR [rdx+rax*4+0xe8f714]
0x00e8bce6: add    rcx,rdx
0x00e8bce9: jmp    rcx
0x00e8bceb: lea    rdx,[rip+0x8bf036]        # 0x14174ad28 ; literal="the author"
0x00e8bcf2: jmp    0x140e8bdc0
0x00e8bcf7: lea    rdx,[rip+0x8bf01a]        # 0x14174ad18 ; literal="a soldier"
0x00e8bcfe: jmp    0x140e8bdc0
0x00e8bd03: lea    rdx,[rip+0x8bf04e]        # 0x14174ad58 ; literal="a traveler"
0x00e8bd0a: jmp    0x140e8bdc0
0x00e8bd0f: lea    rdx,[rip+0x8bf022]        # 0x14174ad38 ; literal="a relative of the author"
0x00e8bd16: jmp    0x140e8bdc0
0x00e8bd1b: lea    rdx,[rip+0x8befc6]        # 0x14174ace8 ; literal="a party to a debate"
0x00e8bd22: jmp    0x140e8bdc0
0x00e8bd27: lea    rdx,[rip+0x8befa2]        # 0x14174acd0 ; literal="a fictional poet"
0x00e8bd2e: jmp    0x140e8bdc0
0x00e8bd33: cmp    DWORD PTR [r14+0x4],0xffffffff
0x00e8bd38: je     0x140e8bd71
0x00e8bd3a: lea    rcx,[rbp+0x200]
0x00e8bd41: call   0x140073640
0x00e8bd46: xor    eax,eax
0x00e8bd48: mov    WORD PTR [rsp+0x28],ax
0x00e8bd4d: mov    WORD PTR [rsp+0x20],0x1
0x00e8bd54: lea    r9,[rbp+0x200]
0x00e8bd5b: mov    r8d,DWORD PTR [r14+0x4]
0x00e8bd5f: lea    rdx,[rbp+0x28]
0x00e8bd63: lea    rcx,[rip+0x168a2ce]        # 0x142516038
0x00e8bd6a: call   0x140ba79f0
0x00e8bd6f: jmp    0x140e8bdc9
0x00e8bd71: lea    rdx,[rip+0x8bf540]        # 0x14174b2b8 ; literal="a historical figure"
0x00e8bd78: jmp    0x140e8bdc0
0x00e8bd7a: cmp    DWORD PTR [r14+0x4],0xffffffff
0x00e8bd7f: je     0x140e8bdb9
0x00e8bd81: lea    rdx,[rip+0x777b00]        # 0x141603888 ; literal="a "
0x00e8bd88: lea    rcx,[rbp+0x28]
0x00e8bd8c: call   0x140070b20
0x00e8bd91: mov    BYTE PTR [rsp+0x28],0x0
0x00e8bd96: movzx  eax,WORD PTR [r14+0x8]
0x00e8bd9b: mov    WORD PTR [rsp+0x20],ax
0x00e8bda0: xor    r9d,r9d
0x00e8bda3: mov    r8d,DWORD PTR [r14+0x4]
0x00e8bda7: lea    rdx,[rbp+0x28]
0x00e8bdab: lea    rcx,[rip+0x168a286]        # 0x142516038
0x00e8bdb2: call   0x140ba99b0
0x00e8bdb7: jmp    0x140e8bdc9
0x00e8bdb9: lea    rdx,[rip+0x8bef48]        # 0x14174ad08 ; literal="an animal"
0x00e8bdc0: lea    rcx,[rbp+0x28]
0x00e8bdc4: call   0x140070b20
0x00e8bdc9: lea    rdx,[rip+0x7888b0]        # 0x141614680 ; literal=".  "
0x00e8bdd0: lea    rcx,[rbp+0x28]
0x00e8bdd4: call   0x140070b20
0x00e8bdd9: mov    edx,DWORD PTR [r13+0x194]
0x00e8bde0: test   edx,edx
0x00e8bde2: je     0x140e8c172
0x00e8bde8: mov    ecx,edx
0x00e8bdea: and    ecx,0x1
0x00e8bded: test   dl,0x4
0x00e8bdf0: je     0x140e8bdf4
0x00e8bdf2: inc    ecx
0x00e8bdf4: test   dl,0x8
0x00e8bdf7: lea    eax,[rcx+0x1]
0x00e8bdfa: cmove  eax,ecx
0x00e8bdfd: test   dl,0x10
0x00e8be00: lea    ecx,[rax+0x1]
0x00e8be03: cmove  ecx,eax
0x00e8be06: bt     edx,0x9
0x00e8be0a: lea    eax,[rcx+0x1]
0x00e8be0d: cmovae eax,ecx
0x00e8be10: bt     edx,0xa
0x00e8be14: lea    ecx,[rax+0x1]
0x00e8be17: cmovae ecx,eax
0x00e8be1a: bt     edx,0xb
0x00e8be1e: lea    eax,[rcx+0x1]
0x00e8be21: cmovae eax,ecx
0x00e8be24: bt     edx,0xc
0x00e8be28: lea    ecx,[rax+0x1]
0x00e8be2b: cmovae ecx,eax
0x00e8be2e: bt     edx,0xd
0x00e8be32: lea    eax,[rcx+0x1]
0x00e8be35: cmovae eax,ecx
0x00e8be38: bt     edx,0xf
0x00e8be3c: lea    ecx,[rax+0x1]
0x00e8be3f: cmovae ecx,eax
0x00e8be42: bt     edx,0x10
0x00e8be46: lea    eax,[rcx+0x1]
0x00e8be49: cmovae eax,ecx
0x00e8be4c: bt     edx,0x11
0x00e8be50: lea    ecx,[rax+0x1]
0x00e8be53: cmovae ecx,eax
0x00e8be56: bt     edx,0x12
0x00e8be5a: lea    eax,[rcx+0x1]
0x00e8be5d: cmovae eax,ecx
0x00e8be60: bt     edx,0x13
0x00e8be64: lea    ecx,[rax+0x1]
0x00e8be67: cmovae ecx,eax
0x00e8be6a: bt     edx,0x14
0x00e8be6e: lea    eax,[rcx+0x1]
0x00e8be71: cmovae eax,ecx
0x00e8be74: bt     edx,0x15
0x00e8be78: lea    ecx,[rax+0x1]
0x00e8be7b: cmovae ecx,eax
0x00e8be7e: bt     edx,0x16
0x00e8be82: lea    r15d,[rcx+0x1]
0x00e8be86: cmovae r15d,ecx
0x00e8be8a: test   r15d,r15d
0x00e8be8d: jle    0x140e8c172
0x00e8be93: lea    rcx,[rbp+0x28]
0x00e8be97: cmp    BYTE PTR [rsp+0x31],0x0
0x00e8be9c: jne    0x140e8bf00
0x00e8be9e: lea    rdx,[rip+0x777d8f]        # 0x141603c34 ; literal="The "
0x00e8bea5: call   0x140070b20
0x00e8beaa: lea    rcx,[rbp+0x48]
0x00e8beae: call   0x140070c50
0x00e8beb3: nop
0x00e8beb4: mov    r12d,DWORD PTR [rsp+0x50]
0x00e8beb9: lea    ecx,[r12+0x1]
0x00e8bebe: xor    r8d,r8d
0x00e8bec1: lea    rdx,[rbp+0x48]
0x00e8bec5: call   0x140545850
0x00e8beca: lea    rcx,[rbp+0x48]
0x00e8bece: call   0x140543d60
0x00e8bed3: lea    rdx,[rbp+0x48]
0x00e8bed7: lea    rcx,[rbp+0x28]
0x00e8bedb: call   0x1400bb2d0
0x00e8bee0: lea    rdx,[rip+0x778b65]        # 0x141604a4c ; literal=" part"
0x00e8bee7: lea    rcx,[rbp+0x28]
0x00e8beeb: call   0x140070b20
0x00e8bef0: mov    BYTE PTR [rsp+0x31],0x1
0x00e8bef5: lea    rcx,[rbp+0x48]
0x00e8bef9: call   0x1400693f0
0x00e8befe: jmp    0x140e8bf11
0x00e8bf00: lea    rdx,[rip+0x778851]        # 0x141604758 ; literal="It"
0x00e8bf07: call   0x140070b20
0x00e8bf0c: mov    r12d,DWORD PTR [rsp+0x50]
0x00e8bf11: lea    rdx,[rip+0x8bfb90]        # 0x14174baa8 ; literal=" must make use of "
0x00e8bf18: lea    rcx,[rbp+0x28]
0x00e8bf1c: call   0x140070b20
0x00e8bf21: xor    eax,eax
0x00e8bf23: mov    r14d,eax
0x00e8bf26: mov    esi,DWORD PTR [rsp+0x44]
0x00e8bf2a: lea    rdi,[rip+0xffffffffff1740cf]        # 0x140000000
0x00e8bf31: mov    ebx,0x1
0x00e8bf36: cmp    r14d,0x10
0x00e8bf3a: ja     0x140e8bfc1
0x00e8bf40: movsxd rax,r14d
0x00e8bf43: mov    ecx,DWORD PTR [rdi+rax*4+0xe8f734]
0x00e8bf4a: add    rcx,rdi
0x00e8bf4d: jmp    rcx
0x00e8bf4f: mov    esi,ebx
0x00e8bf51: jmp    0x140e8bfc1
0x00e8bf53: mov    esi,0x4
0x00e8bf58: jmp    0x140e8bfc1
0x00e8bf5a: mov    esi,0x8
0x00e8bf5f: jmp    0x140e8bfc1
0x00e8bf61: mov    esi,0x10
0x00e8bf66: jmp    0x140e8bfc1
0x00e8bf68: mov    esi,0x200
0x00e8bf6d: jmp    0x140e8bfc1
0x00e8bf6f: mov    esi,0x400
0x00e8bf74: jmp    0x140e8bfc1
0x00e8bf76: mov    esi,0x800
0x00e8bf7b: jmp    0x140e8bfc1
0x00e8bf7d: mov    esi,0x1000
0x00e8bf82: jmp    0x140e8bfc1
0x00e8bf84: mov    esi,0x2000
0x00e8bf89: jmp    0x140e8bfc1
0x00e8bf8b: mov    esi,0x8000
0x00e8bf90: jmp    0x140e8bfc1
0x00e8bf92: mov    esi,0x10000
0x00e8bf97: jmp    0x140e8bfc1
0x00e8bf99: mov    esi,0x20000
0x00e8bf9e: jmp    0x140e8bfc1
0x00e8bfa0: mov    esi,0x40000
0x00e8bfa5: jmp    0x140e8bfc1
0x00e8bfa7: mov    esi,0x80000
0x00e8bfac: jmp    0x140e8bfc1
0x00e8bfae: mov    esi,0x100000
0x00e8bfb3: jmp    0x140e8bfc1
0x00e8bfb5: mov    esi,0x200000
0x00e8bfba: jmp    0x140e8bfc1
0x00e8bfbc: mov    esi,0x400000
0x00e8bfc1: test   DWORD PTR [r13+0x194],esi
0x00e8bfc8: je     0x140e8c140
0x00e8bfce: cmp    esi,0x2000
0x00e8bfd4: ja     0x140e8c08b
0x00e8bfda: je     0x140e8c07f
0x00e8bfe0: cmp    esi,0x200
0x00e8bfe6: ja     0x140e8c03f
0x00e8bfe8: je     0x140e8c033
0x00e8bfea: mov    eax,esi
0x00e8bfec: sub    eax,ebx
0x00e8bfee: je     0x140e8c027
0x00e8bff0: sub    eax,0x3
0x00e8bff3: je     0x140e8c01b
0x00e8bff5: sub    eax,0x4
0x00e8bff8: je     0x140e8c00f
0x00e8bffa: cmp    eax,0x8
0x00e8bffd: jne    0x140e8c11c
0x00e8c003: lea    rdx,[rip+0x8bedb6]        # 0x14174adc0 ; literal="antanaclasis"
0x00e8c00a: jmp    0x140e8c113
0x00e8c00f: lea    rdx,[rip+0x8bedba]        # 0x14174add0 ; literal="onomatopoeia"
0x00e8c016: jmp    0x140e8c113
0x00e8c01b: lea    rdx,[rip+0x8bed7e]        # 0x14174ada0 ; literal="alliteration"
0x00e8c022: jmp    0x140e8c113
0x00e8c027: lea    rdx,[rip+0x8bed82]        # 0x14174adb0 ; literal="internal rhyme"
0x00e8c02e: jmp    0x140e8c113
0x00e8c033: lea    rdx,[rip+0x8bed3e]        # 0x14174ad78 ; literal="assonance"
0x00e8c03a: jmp    0x140e8c113
0x00e8c03f: cmp    esi,0x400
0x00e8c045: je     0x140e8c073
0x00e8c047: cmp    esi,0x800
0x00e8c04d: je     0x140e8c067
0x00e8c04f: cmp    esi,0x1000
0x00e8c055: jne    0x140e8c11c
0x00e8c05b: lea    rdx,[rip+0x8bed26]        # 0x14174ad88 ; literal="epenthesis"
0x00e8c062: jmp    0x140e8c113
0x00e8c067: lea    rdx,[rip+0x8bed2a]        # 0x14174ad98 ; literal="elision"
0x00e8c06e: jmp    0x140e8c113
0x00e8c073: lea    rdx,[rip+0x8becee]        # 0x14174ad68 ; literal="consonance"
0x00e8c07a: jmp    0x140e8c113
0x00e8c07f: lea    rdx,[rip+0x8beda2]        # 0x14174ae28 ; literal="synchysis"
0x00e8c086: jmp    0x140e8c113
0x00e8c08b: cmp    esi,0x80000
0x00e8c091: ja     0x140e8c0e2
0x00e8c093: je     0x140e8c0d9
0x00e8c095: cmp    esi,0x8000
0x00e8c09b: je     0x140e8c0d0
0x00e8c09d: cmp    esi,0x10000
0x00e8c0a3: je     0x140e8c0c7
0x00e8c0a5: cmp    esi,0x20000
0x00e8c0ab: je     0x140e8c0be
0x00e8c0ad: cmp    esi,0x40000
0x00e8c0b3: jne    0x140e8c11c
0x00e8c0b5: lea    rdx,[rip+0x8bed2c]        # 0x14174ade8 ; literal="metaphor"
0x00e8c0bc: jmp    0x140e8c113
0x00e8c0be: lea    rdx,[rip+0x8bed73]        # 0x14174ae38 ; literal="symbolism"
0x00e8c0c5: jmp    0x140e8c113
0x00e8c0c7: lea    rdx,[rip+0x8bed7a]        # 0x14174ae48 ; literal="ambiguity"
0x00e8c0ce: jmp    0x140e8c113
0x00e8c0d0: lea    rdx,[rip+0x8bed41]        # 0x14174ae18 ; literal="allegory"
0x00e8c0d7: jmp    0x140e8c113
0x00e8c0d9: lea    rdx,[rip+0x8bed00]        # 0x14174ade0 ; literal="simile"
0x00e8c0e0: jmp    0x140e8c113
0x00e8c0e2: cmp    esi,0x100000
0x00e8c0e8: je     0x140e8c10c
0x00e8c0ea: cmp    esi,0x200000
0x00e8c0f0: je     0x140e8c103
0x00e8c0f2: cmp    esi,0x400000
0x00e8c0f8: jne    0x140e8c11c
0x00e8c0fa: lea    rdx,[rip+0x8bedcf]        # 0x14174aed0 ; literal="juxtaposition"
0x00e8c101: jmp    0x140e8c113
0x00e8c103: lea    rdx,[rip+0x8becee]        # 0x14174adf8 ; literal="vivid imagery"
0x00e8c10a: jmp    0x140e8c113
0x00e8c10c: lea    rdx,[rip+0x8becf5]        # 0x14174ae08 ; literal="metonymy"
0x00e8c113: lea    rcx,[rbp+0x28]
0x00e8c117: call   0x140070b20
0x00e8c11c: cmp    r15d,0x2
0x00e8c120: jne    0x140e8c12b
0x00e8c122: lea    rdx,[rip+0x773217]        # 0x1415ff340 ; literal=" and "
0x00e8c129: jmp    0x140e8c134
0x00e8c12b: jle    0x140e8c13d
0x00e8c12d: lea    rdx,[rip+0x7731d4]        # 0x1415ff308 ; literal=", "
0x00e8c134: lea    rcx,[rbp+0x28]
0x00e8c138: call   0x140070b20
0x00e8c13d: dec    r15d
0x00e8c140: inc    r14d
0x00e8c143: cmp    r14d,0x11
0x00e8c147: jl     0x140e8bf36
0x00e8c14d: mov    DWORD PTR [rsp+0x44],esi
0x00e8c151: lea    rdx,[rip+0x788528]        # 0x141614680 ; literal=".  "
0x00e8c158: lea    rcx,[rbp+0x28]
0x00e8c15c: call   0x140070b20
0x00e8c161: movzx  ebx,BYTE PTR [rsp+0x30]
0x00e8c166: movzx  edi,BYTE PTR [rsp+0x30]
0x00e8c16b: movzx  esi,BYTE PTR [rsp+0x30]
0x00e8c170: jmp    0x140e8c177
0x00e8c172: mov    r12d,DWORD PTR [rsp+0x50]
0x00e8c177: lea    rcx,[r13+0x168]
0x00e8c17e: call   0x140070930
0x00e8c183: test   rax,rax
0x00e8c186: je     0x140e8c341
0x00e8c18c: lea    rcx,[r13+0x168]
0x00e8c193: call   0x140070930
0x00e8c198: mov    r14,rax
0x00e8c19b: lea    rdx,[rip+0x8bf976]        # 0x14174bb18 ; literal="Certain lines"
0x00e8c1a2: lea    rcx,[rbp+0x28]
0x00e8c1a6: call   0x140070b20
0x00e8c1ab: cmp    BYTE PTR [rsp+0x31],0x0
0x00e8c1b0: jne    0x140e8c211
0x00e8c1b2: lea    rdx,[rip+0x802587]        # 0x14168e740 ; literal=" of the "
0x00e8c1b9: lea    rcx,[rbp+0x28]
0x00e8c1bd: call   0x140070b20
0x00e8c1c2: lea    rcx,[rbp+0x48]
0x00e8c1c6: call   0x140070c50
0x00e8c1cb: nop
0x00e8c1cc: lea    ecx,[r12+0x1]
0x00e8c1d1: xor    r8d,r8d
0x00e8c1d4: lea    rdx,[rbp+0x48]
0x00e8c1d8: call   0x140545850
0x00e8c1dd: lea    rcx,[rbp+0x48]
0x00e8c1e1: call   0x140543d60
0x00e8c1e6: lea    rdx,[rbp+0x48]
0x00e8c1ea: lea    rcx,[rbp+0x28]
0x00e8c1ee: call   0x1400bb2d0
0x00e8c1f3: lea    rdx,[rip+0x778852]        # 0x141604a4c ; literal=" part"
0x00e8c1fa: lea    rcx,[rbp+0x28]
0x00e8c1fe: call   0x140070b20
0x00e8c203: mov    BYTE PTR [rsp+0x31],0x1
0x00e8c208: lea    rcx,[rbp+0x48]
0x00e8c20c: call   0x1400693f0
0x00e8c211: lea    rdx,[rip+0x772754]        # 0x1415fe96c ; literal=" "
0x00e8c218: lea    rcx,[rbp+0x28]
0x00e8c21c: call   0x140070b20
0x00e8c221: lea    rdx,[rbp-0x68]
0x00e8c225: lea    rcx,[r13+0x168]
0x00e8c22c: call   0x140070800
0x00e8c231: lea    rdx,[rbp-0x20]
0x00e8c235: lea    rcx,[r13+0x168]
0x00e8c23c: call   0x1400707f0
0x00e8c241: lea    r8,[rbp-0x20]
0x00e8c245: lea    rdx,[rbp-0x78]
0x00e8c249: lea    rcx,[rbp-0x68]
0x00e8c24d: call   0x1400703e0
0x00e8c252: xor    edx,edx
0x00e8c254: movzx  ecx,BYTE PTR [rax]
0x00e8c257: call   0x140066d70
0x00e8c25c: test   al,al
0x00e8c25e: je     0x140e8c331
0x00e8c264: lea    rbx,[rip+0xffffffffff173d95]        # 0x140000000
0x00e8c26b: nop    DWORD PTR [rax+rax*1+0x0]
0x00e8c270: lea    rcx,[rbp-0x68]
0x00e8c274: call   0x1400703d0
0x00e8c279: movsxd rcx,DWORD PTR [rax]
0x00e8c27c: cmp    ecx,0x7
0x00e8c27f: ja     0x140e8c2dc
0x00e8c281: mov    ecx,DWORD PTR [rbx+rcx*4+0xe8f778]
0x00e8c288: add    rcx,rbx
0x00e8c28b: jmp    rcx
0x00e8c28d: lea    rdx,[rip+0x8bed4c]        # 0x14174afe0 ; literal="often share an underlying meaning"
0x00e8c294: jmp    0x140e8c2d3
0x00e8c296: lea    rdx,[rip+0x8bed1b]        # 0x14174afb8 ; literal="often contrast underlying meaning"
0x00e8c29d: jmp    0x140e8c2d3
0x00e8c29f: lea    rdx,[rip+0x8bed8a]        # 0x14174b030 ; literal="are required to maintain phrasing"
0x00e8c2a6: jmp    0x140e8c2d3
0x00e8c2a8: lea    rdx,[rip+0x8bed59]        # 0x14174b008 ; literal="have similar grammatical structures"
0x00e8c2af: jmp    0x140e8c2d3
0x00e8c2b1: lea    rdx,[rip+0x8bec70]        # 0x14174af28 ; literal="use the same placement of allusions"
0x00e8c2b8: jmp    0x140e8c2d3
0x00e8c2ba: lea    rdx,[rip+0x8bec3f]        # 0x14174af00 ; literal="sometimes have reversed word orders"
0x00e8c2c1: jmp    0x140e8c2d3
0x00e8c2c3: lea    rdx,[rip+0x8becce]        # 0x14174af98 ; literal="reverse grammatical structures"
0x00e8c2ca: jmp    0x140e8c2d3
0x00e8c2cc: lea    rdx,[rip+0x8bf815]        # 0x14174bae8 ; literal="present different views of the same subject"
0x00e8c2d3: lea    rcx,[rbp+0x28]
0x00e8c2d7: call   0x140070b20
0x00e8c2dc: cmp    r14d,0x2
0x00e8c2e0: jne    0x140e8c2eb
0x00e8c2e2: lea    rdx,[rip+0x773057]        # 0x1415ff340 ; literal=" and "
0x00e8c2e9: jmp    0x140e8c2f4
0x00e8c2eb: jle    0x140e8c2fd
0x00e8c2ed: lea    rdx,[rip+0x773014]        # 0x1415ff308 ; literal=", "
0x00e8c2f4: lea    rcx,[rbp+0x28]
0x00e8c2f8: call   0x140070b20
0x00e8c2fd: dec    r14d
0x00e8c300: lea    rcx,[rbp-0x68]
0x00e8c304: call   0x140070910
0x00e8c309: lea    r8,[rbp-0x20]
0x00e8c30d: lea    rdx,[rbp-0x78]
0x00e8c311: lea    rcx,[rbp-0x68]
0x00e8c315: call   0x1400703e0
0x00e8c31a: xor    edx,edx
0x00e8c31c: movzx  ecx,BYTE PTR [rax]
0x00e8c31f: call   0x140066d70
0x00e8c324: test   al,al
0x00e8c326: jne    0x140e8c270
0x00e8c32c: movzx  ebx,BYTE PTR [rsp+0x30]
0x00e8c331: lea    rdx,[rip+0x788348]        # 0x141614680 ; literal=".  "
0x00e8c338: lea    rcx,[rbp+0x28]
0x00e8c33c: call   0x140070b20
0x00e8c341: xor    r14d,r14d
0x00e8c344: mov    r12d,r14d
0x00e8c347: add    r13,0x98
0x00e8c34e: mov    rcx,r13
0x00e8c351: call   0x140070930
0x00e8c356: test   rax,rax
0x00e8c359: je     0x140e8c609
0x00e8c35f: mov    rdi,QWORD PTR [rsp+0x58]
0x00e8c364: mov    r15d,r14d
0x00e8c367: nop    WORD PTR [rax+rax*1+0x0]
0x00e8c370: mov    rdx,r15
0x00e8c373: lea    rcx,[rdi+0xb0]
0x00e8c37a: call   0x140070920
0x00e8c37f: mov    eax,DWORD PTR [rax]
0x00e8c381: mov    DWORD PTR [rbp-0x74],eax
0x00e8c384: mov    rdx,r15
0x00e8c387: lea    rcx,[rdi+0xc8]
0x00e8c38e: call   0x140070920
0x00e8c393: mov    r14d,DWORD PTR [rax]
0x00e8c396: lea    rcx,[rbp+0x28]
0x00e8c39a: cmp    BYTE PTR [rsp+0x31],0x0
0x00e8c39f: jne    0x140e8c3ff
0x00e8c3a1: lea    rdx,[rip+0x8bf6e0]        # 0x14174ba88 ; literal="In the "
0x00e8c3a8: call   0x140070b20
0x00e8c3ad: lea    rcx,[rbp+0x48]
0x00e8c3b1: call   0x140070c50
0x00e8c3b6: nop
0x00e8c3b7: mov    ecx,DWORD PTR [rsp+0x50]
0x00e8c3bb: inc    ecx
0x00e8c3bd: xor    r8d,r8d
0x00e8c3c0: lea    rdx,[rbp+0x48]
0x00e8c3c4: call   0x140545850
0x00e8c3c9: lea    rcx,[rbp+0x48]
0x00e8c3cd: call   0x140543d60
0x00e8c3d2: lea    rdx,[rbp+0x48]
0x00e8c3d6: lea    rcx,[rbp+0x28]
0x00e8c3da: call   0x1400bb2d0
0x00e8c3df: lea    rdx,[rip+0x8bf692]        # 0x14174ba78 ; literal=" part, the "
0x00e8c3e6: lea    rcx,[rbp+0x28]
0x00e8c3ea: call   0x140070b20
0x00e8c3ef: mov    BYTE PTR [rsp+0x31],0x1
0x00e8c3f4: lea    rcx,[rbp+0x48]
0x00e8c3f8: call   0x1400693f0
0x00e8c3fd: jmp    0x140e8c40b
0x00e8c3ff: lea    rdx,[rip+0x77782e]        # 0x141603c34 ; literal="The "
0x00e8c406: call   0x140070b20
0x00e8c40b: lea    rcx,[rbp+0x48]
0x00e8c40f: call   0x140070c50
0x00e8c414: nop
0x00e8c415: xor    r8d,r8d
0x00e8c418: lea    rdx,[rbp+0x48]
0x00e8c41c: mov    ecx,r14d
0x00e8c41f: call   0x140545850
0x00e8c424: lea    rcx,[rbp+0x48]
0x00e8c428: call   0x140543d60
0x00e8c42d: lea    rdx,[rbp+0x48]
0x00e8c431: lea    rcx,[rbp+0x28]
0x00e8c435: call   0x1400bb2d0
0x00e8c43a: nop
0x00e8c43b: lea    rcx,[rbp+0x48]
0x00e8c43f: call   0x1400693f0
0x00e8c444: lea    rdx,[rip+0x8bf64d]        # 0x14174ba98 ; literal=" line of "
0x00e8c44b: lea    rcx,[rbp+0x28]
0x00e8c44f: call   0x140070b20
0x00e8c454: lea    rcx,[rbp+0x28]
0x00e8c458: cmp    DWORD PTR [rdi+0x8],0x2
0x00e8c45c: lea    rdx,[rip+0x8bf62d]        # 0x14174ba90 ; literal="each "
0x00e8c463: jge    0x140e8c46c
0x00e8c465: lea    rdx,[rip+0x772c0c]        # 0x1415ff078 ; literal="the "
0x00e8c46c: call   0x140070b20
0x00e8c471: test   BYTE PTR [rdi],0x2
0x00e8c474: je     0x140e8c47f
0x00e8c476: lea    rdx,[rip+0x8be77b]        # 0x14174abf8 ; literal="verse paragraph"
0x00e8c47d: jmp    0x140e8c4f0
0x00e8c47f: mov    eax,DWORD PTR [rdi+0xc]
0x00e8c482: cmp    eax,0x9
0x00e8c485: jl     0x140e8c490
0x00e8c487: lea    rdx,[rip+0x8bf756]        # 0x14174bbe4 ; literal="stanza"
0x00e8c48e: jmp    0x140e8c4f0
0x00e8c490: cmp    eax,0x8
0x00e8c493: jne    0x140e8c49e
0x00e8c495: lea    rdx,[rip+0x8bf1c4]        # 0x14174b660 ; literal="octet"
0x00e8c49c: jmp    0x140e8c4f0
0x00e8c49e: cmp    eax,0x7
0x00e8c4a1: jne    0x140e8c4ac
0x00e8c4a3: lea    rdx,[rip+0x8bf1ae]        # 0x14174b658 ; literal="septet"
0x00e8c4aa: jmp    0x140e8c4f0
0x00e8c4ac: cmp    eax,0x6
0x00e8c4af: jne    0x140e8c4ba
0x00e8c4b1: lea    rdx,[rip+0x8bf15c]        # 0x14174b614 ; literal="sexain"
0x00e8c4b8: jmp    0x140e8c4f0
0x00e8c4ba: cmp    eax,0x5
0x00e8c4bd: jne    0x140e8c4c8
0x00e8c4bf: lea    rdx,[rip+0x8bf142]        # 0x14174b608 ; literal="quintain"
0x00e8c4c6: jmp    0x140e8c4f0
0x00e8c4c8: cmp    eax,0x4
0x00e8c4cb: jne    0x140e8c4d6
0x00e8c4cd: lea    rdx,[rip+0x8bf154]        # 0x14174b628 ; literal="quatrain"
0x00e8c4d4: jmp    0x140e8c4f0
0x00e8c4d6: cmp    eax,0x3
0x00e8c4d9: jne    0x140e8c4e4
0x00e8c4db: lea    rdx,[rip+0x8bf13a]        # 0x14174b61c ; literal="tercet"
0x00e8c4e2: jmp    0x140e8c4f0
0x00e8c4e4: cmp    eax,0x2
0x00e8c4e7: jne    0x140e8c4f9
0x00e8c4e9: lea    rdx,[rip+0x8bf1d8]        # 0x14174b6c8 ; literal="couplet"
0x00e8c4f0: lea    rcx,[rbp+0x28]
0x00e8c4f4: call   0x140070b20
0x00e8c4f9: lea    rdx,[rip+0x77246c]        # 0x1415fe96c ; literal=" "
0x00e8c500: lea    rcx,[rbp+0x28]
0x00e8c504: call   0x140070b20
0x00e8c509: mov    rdx,r15
0x00e8c50c: mov    rcx,r13
0x00e8c50f: call   0x140070920
0x00e8c514: movsxd rcx,DWORD PTR [rax]
0x00e8c517: cmp    ecx,0x8
0x00e8c51a: ja     0x140e8c587
0x00e8c51c: lea    rdx,[rip+0xffffffffff173add]        # 0x140000000
0x00e8c523: mov    ecx,DWORD PTR [rdx+rcx*4+0xe8f798]
0x00e8c52a: add    rcx,rdx
0x00e8c52d: jmp    rcx
0x00e8c52f: lea    rdx,[rip+0x8bf68a]        # 0x14174bbc0 ; literal="shares the underlying meaning of"
0x00e8c536: jmp    0x140e8c57e
0x00e8c538: lea    rdx,[rip+0x8bf6d9]        # 0x14174bc18 ; literal="contrasts the underlying meaning of"
0x00e8c53f: jmp    0x140e8c57e
0x00e8c541: lea    rdx,[rip+0x8bf6a8]        # 0x14174bbf0 ; literal="is required to maintain the phrasing of"
0x00e8c548: jmp    0x140e8c57e
0x00e8c54a: lea    rdx,[rip+0x8bf5ff]        # 0x14174bb50 ; literal="has the same grammatical structure as"
0x00e8c551: jmp    0x140e8c57e
0x00e8c553: lea    rdx,[rip+0x8bf5ce]        # 0x14174bb28 ; literal="uses the same placement of allusions as"
0x00e8c55a: jmp    0x140e8c57e
0x00e8c55c: lea    rdx,[rip+0x8bf63d]        # 0x14174bba0 ; literal="reverses the word order of"
0x00e8c563: jmp    0x140e8c57e
0x00e8c565: lea    rdx,[rip+0x8bf60c]        # 0x14174bb78 ; literal="reverses the grammatical structure of"
0x00e8c56c: jmp    0x140e8c57e
0x00e8c56e: lea    rdx,[rip+0x8bf77b]        # 0x14174bcf0 ; literal="presents a different view of the subject of"
0x00e8c575: jmp    0x140e8c57e
0x00e8c577: lea    rdx,[rip+0x8bf75a]        # 0x14174bcd8 ; literal="must expand the idea of"
0x00e8c57e: lea    rcx,[rbp+0x28]
0x00e8c582: call   0x140070b20
0x00e8c587: lea    rdx,[rip+0x77320e]        # 0x1415ff79c ; literal=" the "
0x00e8c58e: lea    rcx,[rbp+0x28]
0x00e8c592: call   0x140070b20
0x00e8c597: lea    rcx,[rbp+0x48]
0x00e8c59b: call   0x140070c50
0x00e8c5a0: nop
0x00e8c5a1: xor    r8d,r8d
0x00e8c5a4: lea    rdx,[rbp+0x48]
0x00e8c5a8: mov    ecx,DWORD PTR [rbp-0x74]
0x00e8c5ab: call   0x140545850
0x00e8c5b0: lea    rcx,[rbp+0x48]
0x00e8c5b4: call   0x140543d60
0x00e8c5b9: lea    rdx,[rbp+0x48]
0x00e8c5bd: lea    rcx,[rbp+0x28]
0x00e8c5c1: call   0x1400bb2d0
0x00e8c5c6: nop
0x00e8c5c7: lea    rcx,[rbp+0x48]
0x00e8c5cb: call   0x1400693f0
0x00e8c5d0: lea    rdx,[rip+0x8bf759]        # 0x14174bd30 ; literal=" line.  "
0x00e8c5d7: lea    rcx,[rbp+0x28]
0x00e8c5db: call   0x140070b20
0x00e8c5e0: inc    r12d
0x00e8c5e3: movsxd r15,r12d
0x00e8c5e6: mov    rcx,r13
0x00e8c5e9: call   0x140070930
0x00e8c5ee: cmp    r15,rax
0x00e8c5f1: jb     0x140e8c370
0x00e8c5f7: movzx  ebx,BYTE PTR [rsp+0x30]
0x00e8c5fc: movzx  edi,BYTE PTR [rsp+0x30]
0x00e8c601: movzx  esi,BYTE PTR [rsp+0x30]
0x00e8c606: xor    r14d,r14d
0x00e8c609: mov    r13,QWORD PTR [rsp+0x58]
0x00e8c60e: mov    edx,DWORD PTR [r13+0x194]
0x00e8c615: test   edx,edx
0x00e8c617: je     0x140e8c7c4
0x00e8c61d: mov    ecx,edx
0x00e8c61f: shr    ecx,0x5
0x00e8c622: and    ecx,0x1
0x00e8c625: test   dl,0x40
0x00e8c628: lea    eax,[rcx+0x1]
0x00e8c62b: cmove  eax,ecx
0x00e8c62e: test   dl,0x80
0x00e8c631: lea    ecx,[rax+0x1]
0x00e8c634: cmove  ecx,eax
0x00e8c637: bt     edx,0x8
0x00e8c63b: lea    r12d,[rcx+0x1]
0x00e8c63f: cmovae r12d,ecx
0x00e8c643: test   r12d,r12d
0x00e8c646: je     0x140e8c7c4
0x00e8c64c: lea    rcx,[rbp+0x28]
0x00e8c650: cmp    BYTE PTR [rsp+0x31],0x0
0x00e8c655: jne    0x140e8c6b5
0x00e8c657: lea    rdx,[rip+0x7775d6]        # 0x141603c34 ; literal="The "
0x00e8c65e: call   0x140070b20
0x00e8c663: lea    rcx,[rbp+0x48]
0x00e8c667: call   0x140070c50
0x00e8c66c: nop
0x00e8c66d: mov    ecx,DWORD PTR [rsp+0x50]
0x00e8c671: inc    ecx
0x00e8c673: xor    r8d,r8d
0x00e8c676: lea    rdx,[rbp+0x48]
0x00e8c67a: call   0x140545850
0x00e8c67f: lea    rcx,[rbp+0x48]
0x00e8c683: call   0x140543d60
0x00e8c688: lea    rdx,[rbp+0x48]
0x00e8c68c: lea    rcx,[rbp+0x28]
0x00e8c690: call   0x1400bb2d0
0x00e8c695: lea    rdx,[rip+0x7783b0]        # 0x141604a4c ; literal=" part"
0x00e8c69c: lea    rcx,[rbp+0x28]
0x00e8c6a0: call   0x140070b20
0x00e8c6a5: mov    BYTE PTR [rsp+0x31],0x1
0x00e8c6aa: lea    rcx,[rbp+0x48]
0x00e8c6ae: call   0x1400693f0
0x00e8c6b3: jmp    0x140e8c6c1
0x00e8c6b5: lea    rdx,[rip+0x77809c]        # 0x141604758 ; literal="It"
0x00e8c6bc: call   0x140070b20
0x00e8c6c1: lea    rdx,[rip+0x8bf658]        # 0x14174bd20 ; literal=" includes "
0x00e8c6c8: lea    rcx,[rbp+0x28]
0x00e8c6cc: call   0x140070b20
0x00e8c6d1: mov    r15d,r12d
0x00e8c6d4: mov    r13,QWORD PTR [rbp-0x50]
0x00e8c6d8: mov    rsi,QWORD PTR [rsp+0x58]
0x00e8c6dd: mov    edi,DWORD PTR [rbp-0x58]
0x00e8c6e0: mov    ecx,r14d
0x00e8c6e3: test   r14d,r14d
0x00e8c6e6: je     0x140e8c70c
0x00e8c6e8: sub    ecx,0x1
0x00e8c6eb: je     0x140e8c705
0x00e8c6ed: sub    ecx,0x1
0x00e8c6f0: je     0x140e8c6fe
0x00e8c6f2: cmp    ecx,0x1
0x00e8c6f5: jne    0x140e8c711
0x00e8c6f7: mov    edi,0x100
0x00e8c6fc: jmp    0x140e8c711
0x00e8c6fe: mov    edi,0x80
0x00e8c703: jmp    0x140e8c711
0x00e8c705: mov    edi,0x40
0x00e8c70a: jmp    0x140e8c711
0x00e8c70c: mov    edi,0x20
0x00e8c711: test   DWORD PTR [rsi+0x194],edi
0x00e8c717: je     0x140e8c795
0x00e8c719: mov    eax,edi
0x00e8c71b: sub    eax,0x20
0x00e8c71e: je     0x140e8c761
0x00e8c720: sub    eax,0x20
0x00e8c723: je     0x140e8c758
0x00e8c725: sub    eax,0x40
0x00e8c728: je     0x140e8c74f
0x00e8c72a: cmp    eax,0x80
0x00e8c72f: jne    0x140e8c771
0x00e8c731: cmp    r12d,0x2
0x00e8c735: jb     0x140e8c746
0x00e8c737: lea    rdx,[rip+0x7f26a6]        # 0x14167ede4 ; literal="even "
0x00e8c73e: mov    rcx,r13
0x00e8c741: call   0x140070b20
0x00e8c746: lea    rdx,[rip+0x8bf50b]        # 0x14174bc58 ; literal="lines which emerge when reading along certain prescribed paths"
0x00e8c74d: jmp    0x140e8c768
0x00e8c74f: lea    rdx,[rip+0x8be9da]        # 0x14174b130 ; literal="lines which can be read orthogonally across the standard lines"
0x00e8c756: jmp    0x140e8c768
0x00e8c758: lea    rdx,[rip+0x8bea11]        # 0x14174b170 ; literal="lines which can be read backwards as well as forwards"
0x00e8c75f: jmp    0x140e8c768
0x00e8c761: lea    rdx,[rip+0x8be980]        # 0x14174b0e8 ; literal="lines with different readings depending on word breaks"
0x00e8c768: lea    rcx,[rbp+0x28]
0x00e8c76c: call   0x140070b20
0x00e8c771: cmp    r15d,0x2
0x00e8c775: jne    0x140e8c780
0x00e8c777: lea    rdx,[rip+0x772bc2]        # 0x1415ff340 ; literal=" and "
0x00e8c77e: jmp    0x140e8c789
0x00e8c780: jle    0x140e8c792
0x00e8c782: lea    rdx,[rip+0x772b7f]        # 0x1415ff308 ; literal=", "
0x00e8c789: lea    rcx,[rbp+0x28]
0x00e8c78d: call   0x140070b20
0x00e8c792: dec    r15d
0x00e8c795: inc    r14d
0x00e8c798: cmp    r14d,0x4
0x00e8c79c: jl     0x140e8c6e0
0x00e8c7a2: mov    DWORD PTR [rbp-0x58],edi
0x00e8c7a5: lea    rdx,[rip+0x787ed4]        # 0x141614680 ; literal=".  "
0x00e8c7ac: lea    rcx,[rbp+0x28]
0x00e8c7b0: call   0x140070b20
0x00e8c7b5: movzx  edi,BYTE PTR [rsp+0x30]
0x00e8c7ba: movzx  esi,BYTE PTR [rsp+0x30]
0x00e8c7bf: mov    r13,QWORD PTR [rsp+0x58]
0x00e8c7c4: mov    r14d,DWORD PTR [r13+0x15c]
0x00e8c7cb: cmp    r14d,0xffffffff
0x00e8c7cf: jne    0x140e8c7df
0x00e8c7d1: cmp    DWORD PTR [r13+0x158],0x0
0x00e8c7d9: je     0x140e8d050
0x00e8c7df: mov    r15d,DWORD PTR [r13+0x158]
0x00e8c7e6: mov    r12,QWORD PTR [rbp-0x60]
0x00e8c7ea: mov    eax,DWORD PTR [r12+0xa8]
0x00e8c7f2: test   eax,eax
0x00e8c7f4: je     0x140e8c7fd
0x00e8c7f6: test   r15d,r15d
0x00e8c7f9: cmove  r15d,eax
0x00e8c7fd: mov    eax,DWORD PTR [r12+0xac]
0x00e8c805: cmp    eax,0xffffffff
0x00e8c808: je     0x140e8c813
0x00e8c80a: cmp    r14d,0xffffffff
0x00e8c80e: jne    0x140e8c81d
0x00e8c810: mov    r14d,eax
0x00e8c813: cmp    r14d,0xffffffff
0x00e8c817: je     0x140e8cf77
0x00e8c81d: lea    rcx,[rbp+0x28]
0x00e8c821: cmp    BYTE PTR [rsp+0x31],0x0
0x00e8c826: jne    0x140e8c886
0x00e8c828: lea    rdx,[rip+0x777405]        # 0x141603c34 ; literal="The "
0x00e8c82f: call   0x140070b20
0x00e8c834: lea    rcx,[rbp+0x48]
0x00e8c838: call   0x140070c50
0x00e8c83d: nop
0x00e8c83e: mov    ecx,DWORD PTR [rsp+0x50]
0x00e8c842: inc    ecx
0x00e8c844: xor    r8d,r8d
0x00e8c847: lea    rdx,[rbp+0x48]
0x00e8c84b: call   0x140545850
0x00e8c850: lea    rcx,[rbp+0x48]
0x00e8c854: call   0x140543d60
0x00e8c859: lea    rdx,[rbp+0x48]
0x00e8c85d: lea    rcx,[rbp+0x28]
0x00e8c861: call   0x1400bb2d0
0x00e8c866: lea    rdx,[rip+0x7781df]        # 0x141604a4c ; literal=" part"
0x00e8c86d: lea    rcx,[rbp+0x28]
0x00e8c871: call   0x140070b20
0x00e8c876: mov    BYTE PTR [rsp+0x31],0x1
0x00e8c87b: lea    rcx,[rbp+0x48]
0x00e8c87f: call   0x1400693f0
0x00e8c884: jmp    0x140e8c892
0x00e8c886: lea    rdx,[rip+0x777ecb]        # 0x141604758 ; literal="It"
0x00e8c88d: call   0x140070b20
0x00e8c892: lea    rcx,[rbp+0x28]
0x00e8c896: cmp    DWORD PTR [r13+0xc],0x2
0x00e8c89b: lea    rdx,[rip+0x8bf39e]        # 0x14174bc40 ; literal=" has lines with "
0x00e8c8a2: jge    0x140e8c8ab
0x00e8c8a4: lea    rdx,[rip+0x800dcd]        # 0x14168d678 ; literal=" has "
0x00e8c8ab: call   0x140070b20
0x00e8c8b0: lea    rcx,[rbp+0xc8]
0x00e8c8b7: call   0x140070c50
0x00e8c8bc: nop
0x00e8c8bd: lea    rdx,[rbp+0xc8]
0x00e8c8c4: mov    ecx,r15d
0x00e8c8c7: call   0x140545040
0x00e8c8cc: lea    rdx,[rbp+0xc8]
0x00e8c8d3: lea    rcx,[rbp+0x28]
0x00e8c8d7: call   0x1400bb2d0
0x00e8c8dc: lea    rdx,[rip+0x772089]        # 0x1415fe96c ; literal=" "
0x00e8c8e3: lea    rcx,[rbp+0x28]
0x00e8c8e7: call   0x140070b20
0x00e8c8ec: lea    rcx,[rbp+0x28]
0x00e8c8f0: cmp    r15d,0x1
0x00e8c8f4: lea    rdx,[rip+0x8be7d1]        # 0x14174b0cc ; literal="foot"
0x00e8c8fb: je     0x140e8c904
0x00e8c8fd: lea    rdx,[rip+0x8bf590]        # 0x14174be94 ; literal="feet"
0x00e8c904: call   0x140070b20
0x00e8c909: lea    rdx,[rip+0x777ed8]        # 0x1416047e8 ; literal=" with "
0x00e8c910: lea    rcx,[rbp+0x28]
0x00e8c914: call   0x140070b20
0x00e8c919: lea    rcx,[rbp+0x28]
0x00e8c91d: test   BYTE PTR [r12+0x8c],0x1
0x00e8c926: je     0x140e8c9d7
0x00e8c92c: lea    rdx,[rip+0x8bf54d]        # 0x14174be80 ; literal="a tone pattern of "
0x00e8c933: call   0x140070b20
0x00e8c938: cmp    r14d,0xb
0x00e8c93c: ja     0x140e8c9cb
0x00e8c942: movsxd rax,r14d
0x00e8c945: lea    rdx,[rip+0xffffffffff1736b4]        # 0x140000000
0x00e8c94c: mov    ecx,DWORD PTR [rdx+rax*4+0xe8f7bc]
0x00e8c953: add    rcx,rdx
0x00e8c956: jmp    rcx
0x00e8c958: lea    rdx,[rip+0x8bf551]        # 0x14174beb0 ; literal="even-uneven"
0x00e8c95f: jmp    0x140e8c9c2
0x00e8c961: lea    rdx,[rip+0x8bf538]        # 0x14174bea0 ; literal="uneven-even"
0x00e8c968: jmp    0x140e8c9c2
0x00e8c96a: lea    rdx,[rip+0x8bf4cf]        # 0x14174be40 ; literal="uneven-uneven"
0x00e8c971: jmp    0x140e8c9c2
0x00e8c973: lea    rdx,[rip+0x8bf4ae]        # 0x14174be28 ; literal="uneven-even-even"
0x00e8c97a: jmp    0x140e8c9c2
0x00e8c97c: lea    rdx,[rip+0x8bf4e5]        # 0x14174be68 ; literal="even-uneven-even"
0x00e8c983: jmp    0x140e8c9c2
0x00e8c985: lea    rdx,[rip+0x8bf4c4]        # 0x14174be50 ; literal="even-even-uneven"
0x00e8c98c: jmp    0x140e8c9c2
0x00e8c98e: lea    rdx,[rip+0x8bf59b]        # 0x14174bf30 ; literal="uneven-even-uneven"
0x00e8c995: jmp    0x140e8c9c2
0x00e8c997: lea    rdx,[rip+0x8bf582]        # 0x14174bf20 ; literal="even-even"
0x00e8c99e: jmp    0x140e8c9c2
0x00e8c9a0: lea    rdx,[rip+0x8bf5b9]        # 0x14174bf60 ; literal="even-even-even"
0x00e8c9a7: jmp    0x140e8c9c2
0x00e8c9a9: lea    rdx,[rip+0x8bf598]        # 0x14174bf48 ; literal="even-uneven-uneven"
0x00e8c9b0: jmp    0x140e8c9c2
0x00e8c9b2: lea    rdx,[rip+0x8bf51f]        # 0x14174bed8 ; literal="uneven-uneven-even"
0x00e8c9b9: jmp    0x140e8c9c2
0x00e8c9bb: lea    rdx,[rip+0x8bf4fe]        # 0x14174bec0 ; literal="uneven-uneven-uneven"
0x00e8c9c2: lea    rcx,[rbp+0x28]
0x00e8c9c6: call   0x140070b20
0x00e8c9cb: lea    rdx,[rip+0x787cae]        # 0x141614680 ; literal=".  "
0x00e8c9d2: jmp    0x140e8cf61
0x00e8c9d7: test   DWORD PTR [r12+0xe4],0x4000
0x00e8c9e3: je     0x140e8ccbb
0x00e8c9e9: lea    rdx,[rip+0x8bf510]        # 0x14174bf00 ; literal="a syllable weight pattern of "
0x00e8c9f0: call   0x140070b20
0x00e8c9f5: lea    r12,[rip+0xffffffffff173604]        # 0x140000000
0x00e8c9fc: cmp    r14d,0xb
0x00e8ca00: ja     0x140e8cc4d
0x00e8ca06: movsxd rax,r14d
0x00e8ca09: mov    ecx,DWORD PTR [r12+rax*4+0xe8f7ec]
0x00e8ca11: add    rcx,r12
0x00e8ca14: jmp    rcx
0x00e8ca16: lea    rdx,[rip+0x8bf4d3]        # 0x14174bef0 ; literal="short-long"
0x00e8ca1d: lea    rcx,[rbp+0x28]
0x00e8ca21: call   0x140070b20
0x00e8ca26: lea    rdx,[rip+0x8bf63b]        # 0x14174c068 ; literal=" (quantitative "
0x00e8ca2d: lea    rcx,[rbp+0x28]
0x00e8ca31: call   0x140070b20
0x00e8ca36: lea    rdx,[rip+0x8bf5df]        # 0x14174c01c ; literal="iambic"
0x00e8ca3d: jmp    0x140e8cc18
0x00e8ca42: lea    rdx,[rip+0x8bf587]        # 0x14174bfd0 ; literal="long-short"
0x00e8ca49: lea    rcx,[rbp+0x28]
0x00e8ca4d: call   0x140070b20
0x00e8ca52: lea    rdx,[rip+0x8bf60f]        # 0x14174c068 ; literal=" (quantitative "
0x00e8ca59: lea    rcx,[rbp+0x28]
0x00e8ca5d: call   0x140070b20
0x00e8ca62: lea    rdx,[rip+0x8bf5a7]        # 0x14174c010 ; literal="trochaic"
0x00e8ca69: jmp    0x140e8cc18
0x00e8ca6e: lea    rdx,[rip+0x8bf54b]        # 0x14174bfc0 ; literal="long-long"
0x00e8ca75: lea    rcx,[rbp+0x28]
0x00e8ca79: call   0x140070b20
0x00e8ca7e: lea    rdx,[rip+0x8bf5e3]        # 0x14174c068 ; literal=" (quantitative "
0x00e8ca85: lea    rcx,[rbp+0x28]
0x00e8ca89: call   0x140070b20
0x00e8ca8e: lea    rdx,[rip+0x8bf5a3]        # 0x14174c038 ; literal="spondaic"
0x00e8ca95: jmp    0x140e8cc18
0x00e8ca9a: lea    rdx,[rip+0x8bf557]        # 0x14174bff8 ; literal="long-short-short"
0x00e8caa1: lea    rcx,[rbp+0x28]
0x00e8caa5: call   0x140070b20
0x00e8caaa: lea    rdx,[rip+0x8bf5b7]        # 0x14174c068 ; literal=" (quantitative "
0x00e8cab1: lea    rcx,[rbp+0x28]
0x00e8cab5: call   0x140070b20
0x00e8caba: lea    rdx,[rip+0x8bf567]        # 0x14174c028 ; literal="dactylic"
0x00e8cac1: jmp    0x140e8cc18
0x00e8cac6: lea    rdx,[rip+0x8bf513]        # 0x14174bfe0 ; literal="short-long-short"
0x00e8cacd: lea    rcx,[rbp+0x28]
0x00e8cad1: call   0x140070b20
0x00e8cad6: lea    rdx,[rip+0x8bf58b]        # 0x14174c068 ; literal=" (quantitative "
0x00e8cadd: lea    rcx,[rbp+0x28]
0x00e8cae1: call   0x140070b20
0x00e8cae6: lea    rdx,[rip+0x8bf5e3]        # 0x14174c0d0 ; literal="amphibrachic"
0x00e8caed: jmp    0x140e8cc18
0x00e8caf2: lea    rdx,[rip+0x8bf487]        # 0x14174bf80 ; literal="short-short-long"
0x00e8caf9: lea    rcx,[rbp+0x28]
0x00e8cafd: call   0x140070b20
0x00e8cb02: lea    rdx,[rip+0x8bf55f]        # 0x14174c068 ; literal=" (quantitative "
0x00e8cb09: lea    rcx,[rbp+0x28]
0x00e8cb0d: call   0x140070b20
0x00e8cb12: lea    rdx,[rip+0x8bf5a7]        # 0x14174c0c0 ; literal="anapaestic"
0x00e8cb19: jmp    0x140e8cc18
0x00e8cb1e: lea    rdx,[rip+0x8bf44b]        # 0x14174bf70 ; literal="long-short-long"
0x00e8cb25: lea    rcx,[rbp+0x28]
0x00e8cb29: call   0x140070b20
0x00e8cb2e: lea    rdx,[rip+0x8bf533]        # 0x14174c068 ; literal=" (quantitative "
0x00e8cb35: lea    rcx,[rbp+0x28]
0x00e8cb39: call   0x140070b20
0x00e8cb3e: lea    rdx,[rip+0x8bf5a3]        # 0x14174c0e8 ; literal="cretic"
0x00e8cb45: jmp    0x140e8cc18
0x00e8cb4a: lea    rdx,[rip+0x8bf45f]        # 0x14174bfb0 ; literal="short-short"
0x00e8cb51: lea    rcx,[rbp+0x28]
0x00e8cb55: call   0x140070b20
0x00e8cb5a: lea    rdx,[rip+0x8bf507]        # 0x14174c068 ; literal=" (quantitative "
0x00e8cb61: lea    rcx,[rbp+0x28]
0x00e8cb65: call   0x140070b20
0x00e8cb6a: lea    rdx,[rip+0x8bf56f]        # 0x14174c0e0 ; literal="pyrrhic"
0x00e8cb71: jmp    0x140e8cc18
0x00e8cb76: lea    rdx,[rip+0x8bf41b]        # 0x14174bf98 ; literal="short-short-short"
0x00e8cb7d: lea    rcx,[rbp+0x28]
0x00e8cb81: call   0x140070b20
0x00e8cb86: lea    rdx,[rip+0x8bf4db]        # 0x14174c068 ; literal=" (quantitative "
0x00e8cb8d: lea    rcx,[rbp+0x28]
0x00e8cb91: call   0x140070b20
0x00e8cb96: lea    rdx,[rip+0x8bf4f3]        # 0x14174c090 ; literal="tribrachic"
0x00e8cb9d: jmp    0x140e8cc18
0x00e8cb9f: lea    rdx,[rip+0x8bf4b2]        # 0x14174c058 ; literal="short-long-long"
0x00e8cba6: lea    rcx,[rbp+0x28]
0x00e8cbaa: call   0x140070b20
0x00e8cbaf: lea    rdx,[rip+0x8bf4b2]        # 0x14174c068 ; literal=" (quantitative "
0x00e8cbb6: lea    rcx,[rbp+0x28]
0x00e8cbba: call   0x140070b20
0x00e8cbbf: lea    rdx,[rip+0x8bf4c2]        # 0x14174c088 ; literal="bacchic"
0x00e8cbc6: jmp    0x140e8cc18
0x00e8cbc8: lea    rdx,[rip+0x8bf479]        # 0x14174c048 ; literal="long-long-short"
0x00e8cbcf: lea    rcx,[rbp+0x28]
0x00e8cbd3: call   0x140070b20
0x00e8cbd8: lea    rdx,[rip+0x8bf489]        # 0x14174c068 ; literal=" (quantitative "
0x00e8cbdf: lea    rcx,[rbp+0x28]
0x00e8cbe3: call   0x140070b20
0x00e8cbe8: lea    rdx,[rip+0x8bf4c1]        # 0x14174c0b0 ; literal="antibacchic"
0x00e8cbef: jmp    0x140e8cc18
0x00e8cbf1: lea    rdx,[rip+0x8bf480]        # 0x14174c078 ; literal="long-long-long"
0x00e8cbf8: lea    rcx,[rbp+0x28]
0x00e8cbfc: call   0x140070b20
0x00e8cc01: lea    rdx,[rip+0x8bf460]        # 0x14174c068 ; literal=" (quantitative "
0x00e8cc08: lea    rcx,[rbp+0x28]
0x00e8cc0c: call   0x140070b20
0x00e8cc11: lea    rdx,[rip+0x8bf488]        # 0x14174c0a0 ; literal="molossic"
0x00e8cc18: lea    rcx,[rbp+0x28]
0x00e8cc1c: call   0x140070b20
0x00e8cc21: lea    rdx,[rip+0x771d44]        # 0x1415fe96c ; literal=" "
0x00e8cc28: lea    rcx,[rbp+0x28]
0x00e8cc2c: call   0x140070b20
0x00e8cc31: lea    eax,[r15-0x1]
0x00e8cc35: cmp    eax,0x7
0x00e8cc38: ja     0x140e8cf5a
0x00e8cc3e: cdqe
0x00e8cc40: mov    ecx,DWORD PTR [r12+rax*4+0xe8f81c]
0x00e8cc48: add    rcx,r12
0x00e8cc4b: jmp    rcx
0x00e8cc4d: lea    rdx,[rip+0x8bf414]        # 0x14174c068 ; literal=" (quantitative "
0x00e8cc54: lea    rcx,[rbp+0x28]
0x00e8cc58: call   0x140070b20
0x00e8cc5d: cmp    r14d,0xb
0x00e8cc61: ja     0x140e8cc21
0x00e8cc63: movsxd rax,r14d
0x00e8cc66: mov    ecx,DWORD PTR [r12+rax*4+0xe8f83c]
0x00e8cc6e: add    rcx,r12
0x00e8cc71: jmp    rcx
0x00e8cc73: lea    rdx,[rip+0x8bf4be]        # 0x14174c138 ; literal="monometer"
0x00e8cc7a: jmp    0x140e8cf51
0x00e8cc7f: lea    rdx,[rip+0x8bf4d2]        # 0x14174c158 ; literal="trimeter"
0x00e8cc86: jmp    0x140e8cf51
0x00e8cc8b: lea    rdx,[rip+0x8bf4b6]        # 0x14174c148 ; literal="tetrameter"
0x00e8cc92: jmp    0x140e8cf51
0x00e8cc97: lea    rdx,[rip+0x8bf462]        # 0x14174c100 ; literal="pentameter"
0x00e8cc9e: jmp    0x140e8cf51
0x00e8cca3: lea    rdx,[rip+0x8bf446]        # 0x14174c0f0 ; literal="hexameter"
0x00e8ccaa: jmp    0x140e8cf51
0x00e8ccaf: lea    rdx,[rip+0x8bf46a]        # 0x14174c120 ; literal="heptameter"
0x00e8ccb6: jmp    0x140e8cf51
0x00e8ccbb: lea    rdx,[rip+0x8bf51e]        # 0x14174c1e0 ; literal="an accent pattern of "
0x00e8ccc2: call   0x140070b20
0x00e8ccc7: lea    r12,[rip+0xffffffffff173332]        # 0x140000000
0x00e8ccce: cmp    r14d,0xb
0x00e8ccd2: ja     0x140e8cf1b
0x00e8ccd8: movsxd rax,r14d
0x00e8ccdb: mov    ecx,DWORD PTR [r12+rax*4+0xe8f86c]
0x00e8cce3: add    rcx,r12
0x00e8cce6: jmp    rcx
0x00e8cce8: lea    rdx,[rip+0x8bf529]        # 0x14174c218 ; literal="unstressed-stressed"
0x00e8ccef: lea    rcx,[rbp+0x28]
0x00e8ccf3: call   0x140070b20
0x00e8ccf8: lea    rdx,[rip+0x8bf581]        # 0x14174c280 ; literal=" (qualitative "
0x00e8ccff: lea    rcx,[rbp+0x28]
0x00e8cd03: call   0x140070b20
0x00e8cd08: lea    rdx,[rip+0x8bf30d]        # 0x14174c01c ; literal="iambic"
0x00e8cd0f: jmp    0x140e8ceea
0x00e8cd14: lea    rdx,[rip+0x8bf4e5]        # 0x14174c200 ; literal="stressed-unstressed"
0x00e8cd1b: lea    rcx,[rbp+0x28]
0x00e8cd1f: call   0x140070b20
0x00e8cd24: lea    rdx,[rip+0x8bf555]        # 0x14174c280 ; literal=" (qualitative "
0x00e8cd2b: lea    rcx,[rbp+0x28]
0x00e8cd2f: call   0x140070b20
0x00e8cd34: lea    rdx,[rip+0x8bf2d5]        # 0x14174c010 ; literal="trochaic"
0x00e8cd3b: jmp    0x140e8ceea
0x00e8cd40: lea    rdx,[rip+0x8bf441]        # 0x14174c188 ; literal="stressed-stressed"
0x00e8cd47: lea    rcx,[rbp+0x28]
0x00e8cd4b: call   0x140070b20
0x00e8cd50: lea    rdx,[rip+0x8bf529]        # 0x14174c280 ; literal=" (qualitative "
0x00e8cd57: lea    rcx,[rbp+0x28]
0x00e8cd5b: call   0x140070b20
0x00e8cd60: lea    rdx,[rip+0x8bf2d1]        # 0x14174c038 ; literal="spondaic"
0x00e8cd67: jmp    0x140e8ceea
0x00e8cd6c: lea    rdx,[rip+0x8bf3f5]        # 0x14174c168 ; literal="stressed-unstressed-unstressed"
0x00e8cd73: lea    rcx,[rbp+0x28]
0x00e8cd77: call   0x140070b20
0x00e8cd7c: lea    rdx,[rip+0x8bf4fd]        # 0x14174c280 ; literal=" (qualitative "
0x00e8cd83: lea    rcx,[rbp+0x28]
0x00e8cd87: call   0x140070b20
0x00e8cd8c: lea    rdx,[rip+0x8bf295]        # 0x14174c028 ; literal="dactylic"
0x00e8cd93: jmp    0x140e8ceea
0x00e8cd98: lea    rdx,[rip+0x8bf421]        # 0x14174c1c0 ; literal="unstressed-stressed-unstressed"
0x00e8cd9f: lea    rcx,[rbp+0x28]
0x00e8cda3: call   0x140070b20
0x00e8cda8: lea    rdx,[rip+0x8bf4d1]        # 0x14174c280 ; literal=" (qualitative "
0x00e8cdaf: lea    rcx,[rbp+0x28]
0x00e8cdb3: call   0x140070b20
0x00e8cdb8: lea    rdx,[rip+0x8bf311]        # 0x14174c0d0 ; literal="amphibrachic"
0x00e8cdbf: jmp    0x140e8ceea
0x00e8cdc4: lea    rdx,[rip+0x8bf3d5]        # 0x14174c1a0 ; literal="unstressed-unstressed-stressed"
0x00e8cdcb: lea    rcx,[rbp+0x28]
0x00e8cdcf: call   0x140070b20
0x00e8cdd4: lea    rdx,[rip+0x8bf4a5]        # 0x14174c280 ; literal=" (qualitative "
0x00e8cddb: lea    rcx,[rbp+0x28]
0x00e8cddf: call   0x140070b20
0x00e8cde4: lea    rdx,[rip+0x8bf2d5]        # 0x14174c0c0 ; literal="anapaestic"
0x00e8cdeb: jmp    0x140e8ceea
0x00e8cdf0: lea    rdx,[rip+0x8bf4b1]        # 0x14174c2a8 ; literal="stressed-unstressed-stressed"
0x00e8cdf7: lea    rcx,[rbp+0x28]
0x00e8cdfb: call   0x140070b20
0x00e8ce00: lea    rdx,[rip+0x8bf479]        # 0x14174c280 ; literal=" (qualitative "
0x00e8ce07: lea    rcx,[rbp+0x28]
0x00e8ce0b: call   0x140070b20
0x00e8ce10: lea    rdx,[rip+0x8bf2d1]        # 0x14174c0e8 ; literal="cretic"
0x00e8ce17: jmp    0x140e8ceea
0x00e8ce1c: lea    rdx,[rip+0x8bf46d]        # 0x14174c290 ; literal="unstressed-unstressed"
0x00e8ce23: lea    rcx,[rbp+0x28]
0x00e8ce27: call   0x140070b20
0x00e8ce2c: lea    rdx,[rip+0x8bf44d]        # 0x14174c280 ; literal=" (qualitative "
0x00e8ce33: lea    rcx,[rbp+0x28]
0x00e8ce37: call   0x140070b20
0x00e8ce3c: lea    rdx,[rip+0x8bf29d]        # 0x14174c0e0 ; literal="pyrrhic"
0x00e8ce43: jmp    0x140e8ceea
0x00e8ce48: lea    rdx,[rip+0x8bf499]        # 0x14174c2e8 ; literal="unstressed-unstressed-unstressed"
0x00e8ce4f: lea    rcx,[rbp+0x28]
0x00e8ce53: call   0x140070b20
0x00e8ce58: lea    rdx,[rip+0x8bf421]        # 0x14174c280 ; literal=" (qualitative "
0x00e8ce5f: lea    rcx,[rbp+0x28]
0x00e8ce63: call   0x140070b20
0x00e8ce68: lea    rdx,[rip+0x8bf221]        # 0x14174c090 ; literal="tribrachic"
0x00e8ce6f: jmp    0x140e8ceea
0x00e8ce71: lea    rdx,[rip+0x8bf450]        # 0x14174c2c8 ; literal="unstressed-stressed-stressed"
0x00e8ce78: lea    rcx,[rbp+0x28]
0x00e8ce7c: call   0x140070b20
0x00e8ce81: lea    rdx,[rip+0x8bf3f8]        # 0x14174c280 ; literal=" (qualitative "
0x00e8ce88: lea    rcx,[rbp+0x28]
0x00e8ce8c: call   0x140070b20
0x00e8ce91: lea    rdx,[rip+0x8bf1f0]        # 0x14174c088 ; literal="bacchic"
0x00e8ce98: jmp    0x140e8ceea
0x00e8ce9a: lea    rdx,[rip+0x8bf3af]        # 0x14174c250 ; literal="stressed-stressed-unstressed"
0x00e8cea1: lea    rcx,[rbp+0x28]
0x00e8cea5: call   0x140070b20
0x00e8ceaa: lea    rdx,[rip+0x8bf3cf]        # 0x14174c280 ; literal=" (qualitative "
0x00e8ceb1: lea    rcx,[rbp+0x28]
0x00e8ceb5: call   0x140070b20
0x00e8ceba: lea    rdx,[rip+0x8bf1ef]        # 0x14174c0b0 ; literal="antibacchic"
0x00e8cec1: jmp    0x140e8ceea
0x00e8cec3: lea    rdx,[rip+0x8bf366]        # 0x14174c230 ; literal="stressed-stressed-stressed"
0x00e8ceca: lea    rcx,[rbp+0x28]
0x00e8cece: call   0x140070b20
0x00e8ced3: lea    rdx,[rip+0x8bf3a6]        # 0x14174c280 ; literal=" (qualitative "
0x00e8ceda: lea    rcx,[rbp+0x28]
0x00e8cede: call   0x140070b20
0x00e8cee3: lea    rdx,[rip+0x8bf1b6]        # 0x14174c0a0 ; literal="molossic"
0x00e8ceea: lea    rcx,[rbp+0x28]
0x00e8ceee: call   0x140070b20
0x00e8cef3: lea    rdx,[rip+0x771a72]        # 0x1415fe96c ; literal=" "
0x00e8cefa: lea    rcx,[rbp+0x28]
0x00e8cefe: call   0x140070b20
0x00e8cf03: lea    eax,[r15-0x1]
0x00e8cf07: cmp    eax,0x7
0x00e8cf0a: ja     0x140e8cf5a
0x00e8cf0c: cdqe
0x00e8cf0e: mov    ecx,DWORD PTR [r12+rax*4+0xe8f89c]
0x00e8cf16: add    rcx,r12
0x00e8cf19: jmp    rcx
0x00e8cf1b: lea    rdx,[rip+0x8bf35e]        # 0x14174c280 ; literal=" (qualitative "
0x00e8cf22: lea    rcx,[rbp+0x28]
0x00e8cf26: call   0x140070b20
0x00e8cf2b: cmp    r14d,0xb
0x00e8cf2f: ja     0x140e8cef3
0x00e8cf31: movsxd rax,r14d
0x00e8cf34: mov    ecx,DWORD PTR [r12+rax*4+0xe8f8bc]
0x00e8cf3c: add    rcx,r12
0x00e8cf3f: jmp    rcx
0x00e8cf41: lea    rdx,[rip+0x8bf1e8]        # 0x14174c130 ; literal="dimeter"
0x00e8cf48: jmp    0x140e8cf51
0x00e8cf4a: lea    rdx,[rip+0x8bf1bf]        # 0x14174c110 ; literal="octameter"
0x00e8cf51: lea    rcx,[rbp+0x28]
0x00e8cf55: call   0x140070b20
0x00e8cf5a: lea    rdx,[rip+0x8bf297]        # 0x14174c1f8 ; literal=").  "
0x00e8cf61: lea    rcx,[rbp+0x28]
0x00e8cf65: call   0x140070b20
0x00e8cf6a: nop
0x00e8cf6b: lea    rcx,[rbp+0xc8]
0x00e8cf72: jmp    0x140e8d04b
0x00e8cf77: test   r15d,r15d
0x00e8cf7a: je     0x140e8d050
0x00e8cf80: lea    rcx,[rbp+0x28]
0x00e8cf84: cmp    BYTE PTR [rsp+0x31],0x0
0x00e8cf89: jne    0x140e8cfe9
0x00e8cf8b: lea    rdx,[rip+0x776ca2]        # 0x141603c34 ; literal="The "
0x00e8cf92: call   0x140070b20
0x00e8cf97: lea    rcx,[rbp+0x48]
0x00e8cf9b: call   0x140070c50
0x00e8cfa0: nop
0x00e8cfa1: mov    ecx,DWORD PTR [rsp+0x50]
0x00e8cfa5: inc    ecx
0x00e8cfa7: xor    r8d,r8d
0x00e8cfaa: lea    rdx,[rbp+0x48]
0x00e8cfae: call   0x140545850
0x00e8cfb3: lea    rcx,[rbp+0x48]
0x00e8cfb7: call   0x140543d60
0x00e8cfbc: lea    rdx,[rbp+0x48]
0x00e8cfc0: lea    rcx,[rbp+0x28]
0x00e8cfc4: call   0x1400bb2d0
0x00e8cfc9: lea    rdx,[rip+0x777a7c]        # 0x141604a4c ; literal=" part"
0x00e8cfd0: lea    rcx,[rbp+0x28]
0x00e8cfd4: call   0x140070b20
0x00e8cfd9: mov    BYTE PTR [rsp+0x31],0x1
0x00e8cfde: lea    rcx,[rbp+0x48]
0x00e8cfe2: call   0x1400693f0
0x00e8cfe7: jmp    0x140e8cff5
0x00e8cfe9: lea    rdx,[rip+0x777768]        # 0x141604758 ; literal="It"
0x00e8cff0: call   0x140070b20
0x00e8cff5: lea    rcx,[rbp+0x28]
0x00e8cff9: cmp    DWORD PTR [r13+0xc],0x2
0x00e8cffe: lea    rdx,[rip+0x8bec3b]        # 0x14174bc40 ; literal=" has lines with "
0x00e8d005: jge    0x140e8d00e
0x00e8d007: lea    rdx,[rip+0x80066a]        # 0x14168d678 ; literal=" has "
0x00e8d00e: call   0x140070b20
0x00e8d013: lea    rcx,[rbp+0x68]
0x00e8d017: call   0x140070c50
0x00e8d01c: nop
0x00e8d01d: lea    rdx,[rbp+0x68]
0x00e8d021: mov    ecx,r15d
0x00e8d024: call   0x140545040
0x00e8d029: lea    rdx,[rbp+0x68]
0x00e8d02d: lea    rcx,[rbp+0x28]
0x00e8d031: call   0x1400bb2d0
0x00e8d036: lea    rdx,[rip+0x8bf233]        # 0x14174c270 ; literal=" syllables.  "
0x00e8d03d: lea    rcx,[rbp+0x28]
0x00e8d041: call   0x140070b20
0x00e8d046: nop
0x00e8d047: lea    rcx,[rbp+0x68]
0x00e8d04b: call   0x1400693f0
0x00e8d050: cmp    DWORD PTR [r13+0x160],0xffffffff
0x00e8d058: je     0x140e8d141
0x00e8d05e: lea    rcx,[rbp+0x28]
0x00e8d062: cmp    BYTE PTR [rsp+0x31],0x0
0x00e8d067: jne    0x140e8d0c7
0x00e8d069: lea    rdx,[rip+0x776bc4]        # 0x141603c34 ; literal="The "
0x00e8d070: call   0x140070b20
0x00e8d075: lea    rcx,[rbp+0x48]
0x00e8d079: call   0x140070c50
0x00e8d07e: nop
0x00e8d07f: mov    ecx,DWORD PTR [rsp+0x50]
0x00e8d083: inc    ecx
0x00e8d085: xor    r8d,r8d
0x00e8d088: lea    rdx,[rbp+0x48]
0x00e8d08c: call   0x140545850
0x00e8d091: lea    rcx,[rbp+0x48]
0x00e8d095: call   0x140543d60
0x00e8d09a: lea    rdx,[rbp+0x48]
0x00e8d09e: lea    rcx,[rbp+0x28]
0x00e8d0a2: call   0x1400bb2d0
0x00e8d0a7: lea    rdx,[rip+0x77799e]        # 0x141604a4c ; literal=" part"
0x00e8d0ae: lea    rcx,[rbp+0x28]
0x00e8d0b2: call   0x140070b20
0x00e8d0b7: mov    BYTE PTR [rsp+0x31],0x1
0x00e8d0bc: lea    rcx,[rbp+0x48]
0x00e8d0c0: call   0x1400693f0
0x00e8d0c5: jmp    0x140e8d0d3
0x00e8d0c7: lea    rdx,[rip+0x77768a]        # 0x141604758 ; literal="It"
0x00e8d0ce: call   0x140070b20
0x00e8d0d3: lea    rdx,[rip+0x80059e]        # 0x14168d678 ; literal=" has "
0x00e8d0da: lea    rcx,[rbp+0x28]
0x00e8d0de: call   0x140070b20
0x00e8d0e3: mov    ecx,DWORD PTR [r13+0x160]
0x00e8d0ea: test   ecx,ecx
0x00e8d0ec: je     0x140e8d10a
0x00e8d0ee: sub    ecx,0x1
0x00e8d0f1: je     0x140e8d101
0x00e8d0f3: cmp    ecx,0x1
0x00e8d0f6: jne    0x140e8d11a
0x00e8d0f8: lea    rdx,[rip+0x8be6f1]        # 0x14174b7f0 ; literal="a terminal caesura"
0x00e8d0ff: jmp    0x140e8d111
0x00e8d101: lea    rdx,[rip+0x8be700]        # 0x14174b808 ; literal="a medial caesura"
0x00e8d108: jmp    0x140e8d111
0x00e8d10a: lea    rdx,[rip+0x8be6a7]        # 0x14174b7b8 ; literal="an initial caesura"
0x00e8d111: lea    rcx,[rbp+0x28]
0x00e8d115: call   0x140070b20
0x00e8d11a: cmp    DWORD PTR [r13+0xc],0x1
0x00e8d11f: jle    0x140e8d131
0x00e8d121: lea    rdx,[rip+0x8beba0]        # 0x14174bcc8 ; literal=" in each line"
0x00e8d128: lea    rcx,[rbp+0x28]
0x00e8d12c: call   0x140070b20
0x00e8d131: lea    rdx,[rip+0x787548]        # 0x141614680 ; literal=".  "
0x00e8d138: lea    rcx,[rbp+0x28]
0x00e8d13c: call   0x140070b20
0x00e8d141: lea    rcx,[r13+0x38]
0x00e8d145: call   0x140070930
0x00e8d14a: mov    r14,rax
0x00e8d14d: lea    rcx,[r13+0x50]
0x00e8d151: mov    QWORD PTR [rbp-0x10],rcx
0x00e8d155: call   0x140070930
0x00e8d15a: mov    r15,rax
0x00e8d15d: cmp    r14d,eax
0x00e8d160: cmovge r15d,r14d
0x00e8d164: lea    rcx,[r13+0x68]
0x00e8d168: call   0x140070930
0x00e8d16d: mov    r14,rax
0x00e8d170: cmp    r15d,eax
0x00e8d173: cmovge r14d,r15d
0x00e8d177: lea    rcx,[r13+0x80]
0x00e8d17e: mov    QWORD PTR [rbp-0x18],rcx
0x00e8d182: call   0x140070930
0x00e8d187: mov    r15,rax
0x00e8d18a: cmp    r14d,eax
0x00e8d18d: cmovge r15d,r14d
0x00e8d191: lea    rcx,[r13+0xe0]
0x00e8d198: call   0x140070930
0x00e8d19d: mov    r14,rax
0x00e8d1a0: cmp    r15d,eax
0x00e8d1a3: cmovge r14d,r15d
0x00e8d1a7: lea    rcx,[r13+0xf8]
0x00e8d1ae: call   0x140070930
0x00e8d1b3: mov    r15,rax
0x00e8d1b6: cmp    r14d,eax
0x00e8d1b9: cmovge r15d,r14d
0x00e8d1bd: lea    rcx,[r13+0x128]
0x00e8d1c4: call   0x140070930
0x00e8d1c9: mov    r14,rax
0x00e8d1cc: cmp    r15d,eax
0x00e8d1cf: cmovge r14d,r15d
0x00e8d1d3: lea    r15,[r13+0x140]
0x00e8d1da: mov    QWORD PTR [rbp-0x8],r15
0x00e8d1de: mov    rcx,r15
0x00e8d1e1: call   0x140070930
0x00e8d1e6: xor    ecx,ecx
0x00e8d1e8: mov    r12d,ecx
0x00e8d1eb: mov    DWORD PTR [rsp+0x74],ecx
0x00e8d1ef: mov    QWORD PTR [rbp-0x38],rcx
0x00e8d1f3: cmp    r14d,eax
0x00e8d1f6: cmovge eax,r14d
0x00e8d1fa: cdqe
0x00e8d1fc: mov    QWORD PTR [rbp+0x18],rax
0x00e8d200: test   rax,rax
0x00e8d203: jle    0x140e8e7db
0x00e8d209: mov    eax,0x1
0x00e8d20e: mov    DWORD PTR [rbp-0x44],eax
0x00e8d211: mov    DWORD PTR [rbp-0x74],eax
0x00e8d214: mov    rbx,QWORD PTR [rbp-0x50]
0x00e8d218: nop    DWORD PTR [rax+rax*1+0x0]
0x00e8d220: xor    r13b,r13b
0x00e8d223: mov    BYTE PTR [rsp+0x30],r13b
0x00e8d228: mov    r14,QWORD PTR [rsp+0x58]
0x00e8d22d: mov    rax,QWORD PTR [r14+0xe8]
0x00e8d234: sub    rax,QWORD PTR [r14+0xe0]
0x00e8d23b: sar    rax,0x2
0x00e8d23f: test   rax,rax
0x00e8d242: jne    0x140e8d26a
0x00e8d244: lea    rcx,[r14+0xf8]
0x00e8d24b: call   0x140070930
0x00e8d250: test   rax,rax
0x00e8d253: jne    0x140e8d26a
0x00e8d255: lea    rcx,[r14+0x128]
0x00e8d25c: call   0x140070930
0x00e8d261: test   rax,rax
0x00e8d264: je     0x140e8d64a
0x00e8d26a: mov    r15d,0xffffffff
0x00e8d270: mov    r12d,r15d
0x00e8d273: mov    r13d,r15d
0x00e8d276: mov    DWORD PTR [rbp-0x48],r15d
0x00e8d27a: mov    r14d,DWORD PTR [rsp+0x74]
0x00e8d27f: mov    rcx,QWORD PTR [rsp+0x58]
0x00e8d284: add    rcx,0xe0
0x00e8d28b: mov    rax,QWORD PTR [rcx+0x8]
0x00e8d28f: sub    rax,QWORD PTR [rcx]
0x00e8d292: sar    rax,0x2
0x00e8d296: cmp    r14,rax
0x00e8d299: jae    0x140e8d2a6
0x00e8d29b: mov    edx,r14d
0x00e8d29e: call   0x140070920
0x00e8d2a3: mov    r15d,DWORD PTR [rax]
0x00e8d2a6: mov    rcx,QWORD PTR [rsp+0x58]
0x00e8d2ab: add    rcx,0x128
0x00e8d2b2: mov    rax,QWORD PTR [rcx+0x8]
0x00e8d2b6: sub    rax,QWORD PTR [rcx]
0x00e8d2b9: sar    rax,0x2
0x00e8d2bd: cmp    r14,rax
0x00e8d2c0: jae    0x140e8d2cd
0x00e8d2c2: mov    rdx,r14
0x00e8d2c5: call   0x140070920
0x00e8d2ca: mov    r12d,DWORD PTR [rax]
0x00e8d2cd: mov    rcx,QWORD PTR [rsp+0x58]
0x00e8d2d2: add    rcx,0xf8
0x00e8d2d9: mov    rax,QWORD PTR [rcx+0x8]
0x00e8d2dd: sub    rax,QWORD PTR [rcx]
0x00e8d2e0: sar    rax,0x2
0x00e8d2e4: cmp    r14,rax
0x00e8d2e7: jae    0x140e8d311
0x00e8d2e9: mov    rdx,r14
0x00e8d2ec: call   0x140070920
0x00e8d2f1: mov    r13d,DWORD PTR [rax]
0x00e8d2f4: mov    rcx,QWORD PTR [rsp+0x58]
0x00e8d2f9: add    rcx,0x110
0x00e8d300: mov    rdx,r14
0x00e8d303: call   0x140070920
0x00e8d308: mov    r14d,DWORD PTR [rax]
0x00e8d30b: mov    DWORD PTR [rbp-0x48],r14d
0x00e8d30f: jmp    0x140e8d314
0x00e8d311: mov    r14d,r13d
0x00e8d314: lea    rdx,[rip+0x776919]        # 0x141603c34 ; literal="The "
0x00e8d31b: lea    rcx,[rbp+0x28]
0x00e8d31f: call   0x140070b20
0x00e8d324: lea    rcx,[rbp+0xa8]
0x00e8d32b: call   0x140070c50
0x00e8d330: nop
0x00e8d331: xor    r8d,r8d
0x00e8d334: lea    rdx,[rbp+0xa8]
0x00e8d33b: mov    ecx,DWORD PTR [rbp-0x44]
0x00e8d33e: call   0x140545850
0x00e8d343: lea    rcx,[rbp+0xa8]
0x00e8d34a: call   0x140543d60
0x00e8d34f: lea    rdx,[rbp+0xa8]
0x00e8d356: lea    rcx,[rbp+0x28]
0x00e8d35a: call   0x1400bb2d0
0x00e8d35f: lea    rdx,[rip+0x7a48ea]        # 0x141631c50 ; literal=" line"
0x00e8d366: lea    rcx,[rbp+0x28]
0x00e8d36a: call   0x140070b20
0x00e8d36f: mov    BYTE PTR [rsp+0x30],0x1
0x00e8d374: lea    rcx,[rbp+0xa8]
0x00e8d37b: call   0x1400693f0
0x00e8d380: mov    r8d,0x1
0x00e8d386: lea    rdx,[rip+0x7715df]        # 0x1415fe96c ; literal=" "
0x00e8d38d: lea    rcx,[rbp+0x28]
0x00e8d391: call   0x140070fd0
0x00e8d396: cmp    r15d,0x6
0x00e8d39a: ja     0x140e8d3f8
0x00e8d39c: movsxd rax,r15d
0x00e8d39f: lea    rdx,[rip+0xffffffffff172c5a]        # 0x140000000
0x00e8d3a6: mov    ecx,DWORD PTR [rdx+rax*4+0xe8f8ec]
0x00e8d3ad: add    rcx,rdx
0x00e8d3b0: jmp    rcx
0x00e8d3b2: lea    rdx,[rip+0x8be487]        # 0x14174b840 ; literal="is dramatic"
0x00e8d3b9: jmp    0x140e8d3ef
0x00e8d3bb: lea    rdx,[rip+0x8be576]        # 0x14174b938 ; literal="is reflective"
0x00e8d3c2: jmp    0x140e8d3ef
0x00e8d3c4: lea    rdx,[rip+0x8be55d]        # 0x14174b928 ; literal="is ribald"
0x00e8d3cb: jmp    0x140e8d3ef
0x00e8d3cd: lea    rdx,[rip+0x8be584]        # 0x14174b958 ; literal="is light"
0x00e8d3d4: jmp    0x140e8d3ef
0x00e8d3d6: lea    rdx,[rip+0x8be56b]        # 0x14174b948 ; literal="is solemn"
0x00e8d3dd: jmp    0x140e8d3ef
0x00e8d3df: lea    rdx,[rip+0x8be4f2]        # 0x14174b8d8 ; literal="is a riddle"
0x00e8d3e6: jmp    0x140e8d3ef
0x00e8d3e8: lea    rdx,[rip+0x8be4d9]        # 0x14174b8c8 ; literal="is a narrative"
0x00e8d3ef: lea    rcx,[rbp+0x28]
0x00e8d3f3: call   0x140070b20
0x00e8d3f8: cmp    r12d,0xffffffff
0x00e8d3fc: je     0x140e8d5ea
0x00e8d402: lea    rcx,[rbp+0x28]
0x00e8d406: cmp    r15d,0xffffffff
0x00e8d40a: lea    rdx,[rip+0x77767b]        # 0x141604a8c ; literal=" and"
0x00e8d411: jne    0x140e8d41a
0x00e8d413: lea    rdx,[rip+0x771aba]        # 0x1415feed4 ; literal="is"
0x00e8d41a: call   0x140070b20
0x00e8d41f: lea    rdx,[rip+0x8bdfe2]        # 0x14174b408 ; literal=" intended "
0x00e8d426: lea    rcx,[rbp+0x28]
0x00e8d42a: call   0x140070b20
0x00e8d42f: xor    r15b,r15b
0x00e8d432: xor    r14b,r14b
0x00e8d435: cmp    r12d,0x16
0x00e8d439: ja     0x140e8d5a2
0x00e8d43f: movsxd rax,r12d
0x00e8d442: lea    rdx,[rip+0xffffffffff172bb7]        # 0x140000000
0x00e8d449: mov    ecx,DWORD PTR [rdx+rax*4+0xe8f908]
0x00e8d450: add    rcx,rdx
0x00e8d453: jmp    rcx
0x00e8d455: lea    rdx,[rip+0x8bdf9c]        # 0x14174b3f8 ; literal="to describe"
0x00e8d45c: lea    rcx,[rbp+0x28]
0x00e8d460: call   0x140070b20
0x00e8d465: mov    r15b,0x1
0x00e8d468: jmp    0x140e8d5a2
0x00e8d46d: lea    rdx,[rip+0x8bdfbc]        # 0x14174b430 ; literal="to satirize"
0x00e8d474: lea    rcx,[rbp+0x28]
0x00e8d478: call   0x140070b20
0x00e8d47d: mov    r15b,0x1
0x00e8d480: jmp    0x140e8d5a2
0x00e8d485: lea    rdx,[rip+0x8bdf8c]        # 0x14174b418 ; literal="to amuse the audience"
0x00e8d48c: jmp    0x140e8d596
0x00e8d491: lea    rdx,[rip+0x8bdf10]        # 0x14174b3a8 ; literal="to complain about"
0x00e8d498: lea    rcx,[rbp+0x28]
0x00e8d49c: call   0x140070b20
0x00e8d4a1: mov    r15b,0x1
0x00e8d4a4: jmp    0x140e8d5a2
0x00e8d4a9: lea    rdx,[rip+0x8bdee8]        # 0x14174b398 ; literal="to renounce"
0x00e8d4b0: lea    rcx,[rbp+0x28]
0x00e8d4b4: call   0x140070b20
0x00e8d4b9: jmp    0x140e8d5a2
0x00e8d4be: lea    rdx,[rip+0x8bdf1b]        # 0x14174b3e0 ; literal="to make an apology"
0x00e8d4c5: jmp    0x140e8d596
0x00e8d4ca: lea    rdx,[rip+0x8bdeef]        # 0x14174b3c0 ; literal="to express pleasure with"
0x00e8d4d1: lea    rcx,[rbp+0x28]
0x00e8d4d5: call   0x140070b20
0x00e8d4da: mov    r15b,0x1
0x00e8d4dd: jmp    0x140e8d5a2
0x00e8d4e2: lea    rdx,[rip+0x8bdfc7]        # 0x14174b4b0 ; literal="to express grief over"
0x00e8d4e9: lea    rcx,[rbp+0x28]
0x00e8d4ed: call   0x140070b20
0x00e8d4f2: mov    r15b,0x1
0x00e8d4f5: jmp    0x140e8d5a2
0x00e8d4fa: lea    rdx,[rip+0x8bdf9f]        # 0x14174b4a0 ; literal="to praise"
0x00e8d501: lea    rcx,[rbp+0x28]
0x00e8d505: call   0x140070b20
0x00e8d50a: mov    r15b,0x1
0x00e8d50d: jmp    0x140e8d5a2
0x00e8d512: lea    rdx,[rip+0x8bdfc7]        # 0x14174b4e0 ; literal="to beseech"
0x00e8d519: mov    rcx,rbx
0x00e8d51c: call   0x140070b20
0x00e8d521: jmp    0x140e8d5a2
0x00e8d523: lea    rdx,[rip+0x8bdf9e]        # 0x14174b4c8 ; literal="to teach a moral lesson"
0x00e8d52a: jmp    0x140e8d596
0x00e8d52c: lea    rdx,[rip+0x8bdf25]        # 0x14174b458 ; literal="to make an assertion"
0x00e8d533: jmp    0x140e8d596
0x00e8d535: lea    rdx,[rip+0x8bdf04]        # 0x14174b440 ; literal="to make a concession"
0x00e8d53c: jmp    0x140e8d596
0x00e8d53e: lea    rdx,[rip+0x8bdf43]        # 0x14174b488 ; literal="to console the audience"
0x00e8d545: jmp    0x140e8d596
0x00e8d547: lea    rdx,[rip+0x8bdf22]        # 0x14174b470 ; literal="to refuse consolation"
0x00e8d54e: jmp    0x140e8d596
0x00e8d550: lea    rdx,[rip+0x8be3b1]        # 0x14174b908 ; literal="to make a counter-assertion"
0x00e8d557: jmp    0x140e8d596
0x00e8d559: lea    rdx,[rip+0x8be388]        # 0x14174b8e8 ; literal="to synthesize previous ideas"
0x00e8d560: jmp    0x140e8d596
0x00e8d562: lea    rdx,[rip+0x8be49f]        # 0x14174ba08 ; literal="to develop the previous idea"
0x00e8d569: jmp    0x140e8d596
0x00e8d56b: lea    rdx,[rip+0x8be46e]        # 0x14174b9e0 ; literal="to invert the previous assertion"
0x00e8d572: jmp    0x140e8d596
0x00e8d574: lea    rdx,[rip+0x8be4d5]        # 0x14174ba50 ; literal="to undercut the previous assertion"
0x00e8d57b: jmp    0x140e8d596
0x00e8d57d: lea    rdx,[rip+0x8be4a4]        # 0x14174ba28 ; literal="to move away from previous ideas"
0x00e8d584: jmp    0x140e8d596
0x00e8d586: lea    rdx,[rip+0x8be403]        # 0x14174b990 ; literal="to reflect on previous ideas"
0x00e8d58d: jmp    0x140e8d596
0x00e8d58f: lea    rdx,[rip+0x8be3d2]        # 0x14174b968 ; literal="to offer a different perspective"
0x00e8d596: lea    rcx,[rbp+0x28]
0x00e8d59a: call   0x140070b20
0x00e8d59f: mov    r14b,0x1
0x00e8d5a2: cmp    r13d,0xffffffff
0x00e8d5a6: je     0x140e8d5d3
0x00e8d5a8: test   r14b,r14b
0x00e8d5ab: je     0x140e8d5bd
0x00e8d5ad: lea    rdx,[rip+0x8be01c]        # 0x14174b5d0 ; literal=" concerning"
0x00e8d5b4: lea    rcx,[rbp+0x28]
0x00e8d5b8: call   0x140070b20
0x00e8d5bd: lea    rdx,[rip+0x7713a8]        # 0x1415fe96c ; literal=" "
0x00e8d5c4: lea    rcx,[rbp+0x28]
0x00e8d5c8: call   0x140070b20
0x00e8d5cd: mov    r8d,DWORD PTR [rbp-0x48]
0x00e8d5d1: jmp    0x140e8d619
0x00e8d5d3: test   r15b,r15b
0x00e8d5d6: je     0x140e8d625
0x00e8d5d8: lea    rdx,[rip+0x8be3e1]        # 0x14174b9c0 ; literal=" the subject of the poem"
0x00e8d5df: lea    rcx,[rbp+0x28]
0x00e8d5e3: call   0x140070b20
0x00e8d5e8: jmp    0x140e8d625
0x00e8d5ea: cmp    r13d,0xffffffff
0x00e8d5ee: je     0x140e8d625
0x00e8d5f0: cmp    r15d,0xffffffff
0x00e8d5f4: je     0x140e8d606
0x00e8d5f6: lea    rdx,[rip+0x771d43]        # 0x1415ff340 ; literal=" and "
0x00e8d5fd: lea    rcx,[rbp+0x28]
0x00e8d601: call   0x140070b20
0x00e8d606: lea    rdx,[rip+0x8be3a3]        # 0x14174b9b0 ; literal="concerns "
0x00e8d60d: lea    rcx,[rbp+0x28]
0x00e8d611: call   0x140070b20
0x00e8d616: mov    r8d,r14d
0x00e8d619: mov    edx,r13d
0x00e8d61c: lea    rcx,[rbp+0x28]
0x00e8d620: call   0x140e88cb0
0x00e8d625: mov    r8d,0x3
0x00e8d62b: lea    rdx,[rip+0x78704e]        # 0x141614680 ; literal=".  "
0x00e8d632: lea    rcx,[rbp+0x28]
0x00e8d636: call   0x140070fd0
0x00e8d63b: movzx  r13d,BYTE PTR [rsp+0x30]
0x00e8d641: mov    r12d,DWORD PTR [rsp+0x74]
0x00e8d646: mov    r15,QWORD PTR [rbp-0x8]
0x00e8d64a: mov    edx,r12d
0x00e8d64d: mov    rax,QWORD PTR [r15+0x8]
0x00e8d651: sub    rax,QWORD PTR [r15]
0x00e8d654: sar    rax,0x2
0x00e8d658: cmp    rdx,rax
0x00e8d65b: jae    0x140e8d81c
0x00e8d661: mov    rcx,r15
0x00e8d664: call   0x140070920
0x00e8d669: movsxd r14,DWORD PTR [rax]
0x00e8d66c: cmp    r14d,0xffffffff
0x00e8d670: je     0x140e8d81c
0x00e8d676: lea    rcx,[rbp+0x28]
0x00e8d67a: test   r13b,r13b
0x00e8d67d: jne    0x140e8d6dd
0x00e8d67f: lea    rdx,[rip+0x7765ae]        # 0x141603c34 ; literal="The "
0x00e8d686: call   0x140070b20
0x00e8d68b: lea    rcx,[rbp+0x48]
0x00e8d68f: call   0x140070c50
0x00e8d694: nop
0x00e8d695: xor    r8d,r8d
0x00e8d698: lea    rdx,[rbp+0x48]
0x00e8d69c: mov    ecx,DWORD PTR [rbp-0x74]
0x00e8d69f: call   0x140545850
0x00e8d6a4: lea    rcx,[rbp+0x48]
0x00e8d6a8: call   0x140543d60
0x00e8d6ad: lea    rdx,[rbp+0x48]
0x00e8d6b1: lea    rcx,[rbp+0x28]
0x00e8d6b5: call   0x1400bb2d0
0x00e8d6ba: lea    rdx,[rip+0x7a458f]        # 0x141631c50 ; literal=" line"
0x00e8d6c1: lea    rcx,[rbp+0x28]
0x00e8d6c5: call   0x140070b20
0x00e8d6ca: mov    r13b,0x1
0x00e8d6cd: mov    BYTE PTR [rsp+0x30],r13b
0x00e8d6d2: lea    rcx,[rbp+0x48]
0x00e8d6d6: call   0x1400693f0
0x00e8d6db: jmp    0x140e8d6e9
0x00e8d6dd: lea    rdx,[rip+0x777074]        # 0x141604758 ; literal="It"
0x00e8d6e4: call   0x140070b20
0x00e8d6e9: lea    rdx,[rip+0x8be3d0]        # 0x14174bac0 ; literal=" is written from the perspective of "
0x00e8d6f0: lea    rcx,[rbp+0x28]
0x00e8d6f4: call   0x140070b20
0x00e8d6f9: mov    rcx,QWORD PTR [rbp-0x60]
0x00e8d6fd: add    rcx,0xe8
0x00e8d704: mov    rdx,r14
0x00e8d707: call   0x1400707e0
0x00e8d70c: mov    r14,QWORD PTR [rax]
0x00e8d70f: movsxd rax,DWORD PTR [r14]
0x00e8d712: cmp    eax,0x7
0x00e8d715: ja     0x140e8d80c
0x00e8d71b: lea    rdx,[rip+0xffffffffff1728de]        # 0x140000000
0x00e8d722: mov    ecx,DWORD PTR [rdx+rax*4+0xe8f964]
0x00e8d729: add    rcx,rdx
0x00e8d72c: jmp    rcx
0x00e8d72e: lea    rdx,[rip+0x8bd5f3]        # 0x14174ad28 ; literal="the author"
0x00e8d735: jmp    0x140e8d803
0x00e8d73a: lea    rdx,[rip+0x8bd5d7]        # 0x14174ad18 ; literal="a soldier"
0x00e8d741: jmp    0x140e8d803
0x00e8d746: lea    rdx,[rip+0x8bd60b]        # 0x14174ad58 ; literal="a traveler"
0x00e8d74d: jmp    0x140e8d803
0x00e8d752: lea    rdx,[rip+0x8bd5df]        # 0x14174ad38 ; literal="a relative of the author"
0x00e8d759: jmp    0x140e8d803
0x00e8d75e: lea    rdx,[rip+0x8bd583]        # 0x14174ace8 ; literal="a party to a debate"
0x00e8d765: jmp    0x140e8d803
0x00e8d76a: lea    rdx,[rip+0x8bd55f]        # 0x14174acd0 ; literal="a fictional poet"
0x00e8d771: jmp    0x140e8d803
0x00e8d776: cmp    DWORD PTR [r14+0x4],0xffffffff
0x00e8d77b: je     0x140e8d7b4
0x00e8d77d: lea    rcx,[rbp+0x200]
0x00e8d784: call   0x140073640
0x00e8d789: xor    eax,eax
0x00e8d78b: mov    WORD PTR [rsp+0x28],ax
0x00e8d790: mov    WORD PTR [rsp+0x20],0x1
0x00e8d797: lea    r9,[rbp+0x200]
0x00e8d79e: mov    r8d,DWORD PTR [r14+0x4]
0x00e8d7a2: lea    rdx,[rbp+0x28]
0x00e8d7a6: lea    rcx,[rip+0x168888b]        # 0x142516038
0x00e8d7ad: call   0x140ba79f0
0x00e8d7b2: jmp    0x140e8d80c
0x00e8d7b4: lea    rdx,[rip+0x8bdafd]        # 0x14174b2b8 ; literal="a historical figure"
0x00e8d7bb: jmp    0x140e8d803
0x00e8d7bd: cmp    DWORD PTR [r14+0x4],0xffffffff
0x00e8d7c2: je     0x140e8d7fc
0x00e8d7c4: lea    rdx,[rip+0x7760bd]        # 0x141603888 ; literal="a "
0x00e8d7cb: lea    rcx,[rbp+0x28]
0x00e8d7cf: call   0x140070b20
0x00e8d7d4: mov    BYTE PTR [rsp+0x28],0x0
0x00e8d7d9: movzx  eax,WORD PTR [r14+0x8]
0x00e8d7de: mov    WORD PTR [rsp+0x20],ax
0x00e8d7e3: xor    r9d,r9d
0x00e8d7e6: mov    r8d,DWORD PTR [r14+0x4]
0x00e8d7ea: lea    rdx,[rbp+0x28]
0x00e8d7ee: lea    rcx,[rip+0x1688843]        # 0x142516038
0x00e8d7f5: call   0x140ba99b0
0x00e8d7fa: jmp    0x140e8d80c
0x00e8d7fc: lea    rdx,[rip+0x8bd505]        # 0x14174ad08 ; literal="an animal"
0x00e8d803: lea    rcx,[rbp+0x28]
0x00e8d807: call   0x140070b20
0x00e8d80c: lea    rdx,[rip+0x786e6d]        # 0x141614680 ; literal=".  "
0x00e8d813: lea    rcx,[rbp+0x28]
0x00e8d817: call   0x140070b20
0x00e8d81c: mov    r14,QWORD PTR [rbp-0x18]
0x00e8d820: mov    rcx,QWORD PTR [r14+0x8]
0x00e8d824: sub    rcx,QWORD PTR [r14]
0x00e8d827: sar    rcx,0x2
0x00e8d82b: mov    eax,r12d
0x00e8d82e: cmp    rax,rcx
0x00e8d831: jae    0x140e8dbe4
0x00e8d837: mov    edx,r12d
0x00e8d83a: mov    rcx,r14
0x00e8d83d: call   0x140070920
0x00e8d842: mov    r12d,DWORD PTR [rax]
0x00e8d845: mov    ecx,r12d
0x00e8d848: and    ecx,0x1
0x00e8d84b: test   r12b,0x4
0x00e8d84f: je     0x140e8d853
0x00e8d851: inc    ecx
0x00e8d853: test   r12b,0x8
0x00e8d857: lea    eax,[rcx+0x1]
0x00e8d85a: cmove  eax,ecx
0x00e8d85d: test   r12b,0x10
0x00e8d861: lea    ecx,[rax+0x1]
0x00e8d864: cmove  ecx,eax
0x00e8d867: bt     r12d,0x9
0x00e8d86c: lea    eax,[rcx+0x1]
0x00e8d86f: cmovae eax,ecx
0x00e8d872: bt     r12d,0xa
0x00e8d877: lea    ecx,[rax+0x1]
0x00e8d87a: cmovae ecx,eax
0x00e8d87d: bt     r12d,0xb
0x00e8d882: lea    eax,[rcx+0x1]
0x00e8d885: cmovae eax,ecx
0x00e8d888: bt     r12d,0xc
0x00e8d88d: lea    ecx,[rax+0x1]
0x00e8d890: cmovae ecx,eax
0x00e8d893: bt     r12d,0xd
0x00e8d898: lea    eax,[rcx+0x1]
0x00e8d89b: cmovae eax,ecx
0x00e8d89e: bt     r12d,0xf
0x00e8d8a3: lea    ecx,[rax+0x1]
0x00e8d8a6: cmovae ecx,eax
0x00e8d8a9: bt     r12d,0x10
0x00e8d8ae: lea    eax,[rcx+0x1]
0x00e8d8b1: cmovae eax,ecx
0x00e8d8b4: bt     r12d,0x11
0x00e8d8b9: lea    ecx,[rax+0x1]
0x00e8d8bc: cmovae ecx,eax
0x00e8d8bf: bt     r12d,0x12
0x00e8d8c4: lea    eax,[rcx+0x1]
0x00e8d8c7: cmovae eax,ecx
0x00e8d8ca: bt     r12d,0x13
0x00e8d8cf: lea    ecx,[rax+0x1]
0x00e8d8d2: cmovae ecx,eax
0x00e8d8d5: bt     r12d,0x14
0x00e8d8da: lea    eax,[rcx+0x1]
0x00e8d8dd: cmovae eax,ecx
0x00e8d8e0: bt     r12d,0x15
0x00e8d8e5: lea    ecx,[rax+0x1]
0x00e8d8e8: cmovae ecx,eax
0x00e8d8eb: bt     r12d,0x16
0x00e8d8f0: lea    r15d,[rcx+0x1]
0x00e8d8f4: cmovae r15d,ecx
0x00e8d8f8: test   r15d,r15d
0x00e8d8fb: jle    0x140e8dbdf
0x00e8d901: lea    rcx,[rbp+0x28]
0x00e8d905: test   r13b,r13b
0x00e8d908: jne    0x140e8d96b
0x00e8d90a: lea    rdx,[rip+0x776323]        # 0x141603c34 ; literal="The "
0x00e8d911: call   0x140070b20
0x00e8d916: lea    rcx,[rbp+0x48]
0x00e8d91a: call   0x140070c50
0x00e8d91f: nop
0x00e8d920: mov    ecx,DWORD PTR [rsp+0x74]
0x00e8d924: inc    ecx
0x00e8d926: xor    r8d,r8d
0x00e8d929: lea    rdx,[rbp+0x48]
0x00e8d92d: call   0x140545850
0x00e8d932: lea    rcx,[rbp+0x48]
0x00e8d936: call   0x140543d60
0x00e8d93b: lea    rdx,[rbp+0x48]
0x00e8d93f: lea    rcx,[rbp+0x28]
0x00e8d943: call   0x1400bb2d0
0x00e8d948: lea    rdx,[rip+0x7a4301]        # 0x141631c50 ; literal=" line"
0x00e8d94f: lea    rcx,[rbp+0x28]
0x00e8d953: call   0x140070b20
0x00e8d958: mov    r13b,0x1
0x00e8d95b: mov    BYTE PTR [rsp+0x30],r13b
0x00e8d960: lea    rcx,[rbp+0x48]
0x00e8d964: call   0x1400693f0
0x00e8d969: jmp    0x140e8d977
0x00e8d96b: lea    rdx,[rip+0x776de6]        # 0x141604758 ; literal="It"
0x00e8d972: call   0x140070b20
0x00e8d977: lea    rdx,[rip+0x8be12a]        # 0x14174baa8 ; literal=" must make use of "
0x00e8d97e: lea    rcx,[rbp+0x28]
0x00e8d982: call   0x140070b20
0x00e8d987: xor    eax,eax
0x00e8d989: mov    r14d,eax
0x00e8d98c: mov    edi,DWORD PTR [rsp+0x48]
0x00e8d990: lea    rsi,[rip+0xffffffffff172669]        # 0x140000000
0x00e8d997: mov    ebx,0x1
0x00e8d99c: nop    DWORD PTR [rax+0x0]
0x00e8d9a0: cmp    r14d,0x10
0x00e8d9a4: ja     0x140e8da2b
0x00e8d9aa: movsxd rax,r14d
0x00e8d9ad: mov    ecx,DWORD PTR [rsi+rax*4+0xe8f984]
0x00e8d9b4: add    rcx,rsi
0x00e8d9b7: jmp    rcx
0x00e8d9b9: mov    edi,ebx
0x00e8d9bb: jmp    0x140e8da2b
0x00e8d9bd: mov    edi,0x4
0x00e8d9c2: jmp    0x140e8da2b
0x00e8d9c4: mov    edi,0x8
0x00e8d9c9: jmp    0x140e8da2b
0x00e8d9cb: mov    edi,0x10
0x00e8d9d0: jmp    0x140e8da2b
0x00e8d9d2: mov    edi,0x200
0x00e8d9d7: jmp    0x140e8da2b
0x00e8d9d9: mov    edi,0x400
0x00e8d9de: jmp    0x140e8da2b
0x00e8d9e0: mov    edi,0x800
0x00e8d9e5: jmp    0x140e8da2b
0x00e8d9e7: mov    edi,0x1000
0x00e8d9ec: jmp    0x140e8da2b
0x00e8d9ee: mov    edi,0x2000
0x00e8d9f3: jmp    0x140e8da2b
0x00e8d9f5: mov    edi,0x8000
0x00e8d9fa: jmp    0x140e8da2b
0x00e8d9fc: mov    edi,0x10000
0x00e8da01: jmp    0x140e8da2b
0x00e8da03: mov    edi,0x20000
0x00e8da08: jmp    0x140e8da2b
0x00e8da0a: mov    edi,0x40000
0x00e8da0f: jmp    0x140e8da2b
0x00e8da11: mov    edi,0x80000
0x00e8da16: jmp    0x140e8da2b
0x00e8da18: mov    edi,0x100000
0x00e8da1d: jmp    0x140e8da2b
0x00e8da1f: mov    edi,0x200000
0x00e8da24: jmp    0x140e8da2b
0x00e8da26: mov    edi,0x400000
0x00e8da2b: test   r12d,edi
0x00e8da2e: je     0x140e8dba6
0x00e8da34: cmp    edi,0x2000
0x00e8da3a: ja     0x140e8daf1
0x00e8da40: je     0x140e8dae5
0x00e8da46: cmp    edi,0x200
0x00e8da4c: ja     0x140e8daa5
0x00e8da4e: je     0x140e8da99
0x00e8da50: mov    eax,edi
0x00e8da52: sub    eax,ebx
0x00e8da54: je     0x140e8da8d
0x00e8da56: sub    eax,0x3
0x00e8da59: je     0x140e8da81
0x00e8da5b: sub    eax,0x4
0x00e8da5e: je     0x140e8da75
0x00e8da60: cmp    eax,0x8
0x00e8da63: jne    0x140e8db82
0x00e8da69: lea    rdx,[rip+0x8bd350]        # 0x14174adc0 ; literal="antanaclasis"
0x00e8da70: jmp    0x140e8db79
0x00e8da75: lea    rdx,[rip+0x8bd354]        # 0x14174add0 ; literal="onomatopoeia"
0x00e8da7c: jmp    0x140e8db79
0x00e8da81: lea    rdx,[rip+0x8bd318]        # 0x14174ada0 ; literal="alliteration"
0x00e8da88: jmp    0x140e8db79
0x00e8da8d: lea    rdx,[rip+0x8bd31c]        # 0x14174adb0 ; literal="internal rhyme"
0x00e8da94: jmp    0x140e8db79
0x00e8da99: lea    rdx,[rip+0x8bd2d8]        # 0x14174ad78 ; literal="assonance"
0x00e8daa0: jmp    0x140e8db79
0x00e8daa5: cmp    edi,0x400
0x00e8daab: je     0x140e8dad9
0x00e8daad: cmp    edi,0x800
0x00e8dab3: je     0x140e8dacd
0x00e8dab5: cmp    edi,0x1000
0x00e8dabb: jne    0x140e8db82
0x00e8dac1: lea    rdx,[rip+0x8bd2c0]        # 0x14174ad88 ; literal="epenthesis"
0x00e8dac8: jmp    0x140e8db79
0x00e8dacd: lea    rdx,[rip+0x8bd2c4]        # 0x14174ad98 ; literal="elision"
0x00e8dad4: jmp    0x140e8db79
0x00e8dad9: lea    rdx,[rip+0x8bd288]        # 0x14174ad68 ; literal="consonance"
0x00e8dae0: jmp    0x140e8db79
0x00e8dae5: lea    rdx,[rip+0x8bd33c]        # 0x14174ae28 ; literal="synchysis"
0x00e8daec: jmp    0x140e8db79
0x00e8daf1: cmp    edi,0x80000
0x00e8daf7: ja     0x140e8db48
0x00e8daf9: je     0x140e8db3f
0x00e8dafb: cmp    edi,0x8000
0x00e8db01: je     0x140e8db36
0x00e8db03: cmp    edi,0x10000
0x00e8db09: je     0x140e8db2d
0x00e8db0b: cmp    edi,0x20000
0x00e8db11: je     0x140e8db24
0x00e8db13: cmp    edi,0x40000
0x00e8db19: jne    0x140e8db82
0x00e8db1b: lea    rdx,[rip+0x8bd2c6]        # 0x14174ade8 ; literal="metaphor"
0x00e8db22: jmp    0x140e8db79
0x00e8db24: lea    rdx,[rip+0x8bd30d]        # 0x14174ae38 ; literal="symbolism"
0x00e8db2b: jmp    0x140e8db79
0x00e8db2d: lea    rdx,[rip+0x8bd314]        # 0x14174ae48 ; literal="ambiguity"
0x00e8db34: jmp    0x140e8db79
0x00e8db36: lea    rdx,[rip+0x8bd2db]        # 0x14174ae18 ; literal="allegory"
0x00e8db3d: jmp    0x140e8db79
0x00e8db3f: lea    rdx,[rip+0x8bd29a]        # 0x14174ade0 ; literal="simile"
0x00e8db46: jmp    0x140e8db79
0x00e8db48: cmp    edi,0x100000
0x00e8db4e: je     0x140e8db72
0x00e8db50: cmp    edi,0x200000
0x00e8db56: je     0x140e8db69
0x00e8db58: cmp    edi,0x400000
0x00e8db5e: jne    0x140e8db82
0x00e8db60: lea    rdx,[rip+0x8bd369]        # 0x14174aed0 ; literal="juxtaposition"
0x00e8db67: jmp    0x140e8db79
0x00e8db69: lea    rdx,[rip+0x8bd288]        # 0x14174adf8 ; literal="vivid imagery"
0x00e8db70: jmp    0x140e8db79
0x00e8db72: lea    rdx,[rip+0x8bd28f]        # 0x14174ae08 ; literal="metonymy"
0x00e8db79: lea    rcx,[rbp+0x28]
0x00e8db7d: call   0x140070b20
0x00e8db82: cmp    r15d,0x2
0x00e8db86: jne    0x140e8db91
0x00e8db88: lea    rdx,[rip+0x7717b1]        # 0x1415ff340 ; literal=" and "
0x00e8db8f: jmp    0x140e8db9a
0x00e8db91: jle    0x140e8dba3
0x00e8db93: lea    rdx,[rip+0x77176e]        # 0x1415ff308 ; literal=", "
0x00e8db9a: lea    rcx,[rbp+0x28]
0x00e8db9e: call   0x140070b20
0x00e8dba3: dec    r15d
0x00e8dba6: inc    r14d
0x00e8dba9: cmp    r14d,0x11
0x00e8dbad: jl     0x140e8d9a0
0x00e8dbb3: mov    DWORD PTR [rsp+0x48],edi
0x00e8dbb7: mov    r8d,0x3
0x00e8dbbd: lea    rdx,[rip+0x786abc]        # 0x141614680 ; literal=".  "
0x00e8dbc4: lea    rcx,[rbp+0x28]
0x00e8dbc8: call   0x140070fd0
0x00e8dbcd: movzx  edi,BYTE PTR [rsp+0x30]
0x00e8dbd2: movzx  esi,BYTE PTR [rsp+0x30]
0x00e8dbd7: mov    rbx,QWORD PTR [rbp-0x50]
0x00e8dbdb: mov    r14,QWORD PTR [rbp-0x18]
0x00e8dbdf: mov    r12d,DWORD PTR [rsp+0x74]
0x00e8dbe4: mov    rdx,QWORD PTR [r14]
0x00e8dbe7: mov    rcx,QWORD PTR [r14+0x8]
0x00e8dbeb: sub    rcx,rdx
0x00e8dbee: sar    rcx,0x2
0x00e8dbf2: mov    eax,r12d
0x00e8dbf5: mov    r8,QWORD PTR [rbp-0x38]
0x00e8dbf9: cmp    rax,rcx
0x00e8dbfc: jae    0x140e8dd6c
0x00e8dc02: mov    eax,DWORD PTR [rdx+r8*4]
0x00e8dc06: mov    ecx,eax
0x00e8dc08: shr    ecx,0x5
0x00e8dc0b: and    ecx,0x1
0x00e8dc0e: test   al,0x40
0x00e8dc10: lea    r15d,[rcx+0x1]
0x00e8dc14: cmove  r15d,ecx
0x00e8dc18: test   r15d,r15d
0x00e8dc1b: je     0x140e8dd6c
0x00e8dc21: lea    rcx,[rbp+0x28]
0x00e8dc25: test   r13b,r13b
0x00e8dc28: jne    0x140e8dc87
0x00e8dc2a: lea    rdx,[rip+0x776003]        # 0x141603c34 ; literal="The "
0x00e8dc31: call   0x140070b20
0x00e8dc36: lea    rcx,[rbp+0x48]
0x00e8dc3a: call   0x140070c50
0x00e8dc3f: nop
0x00e8dc40: lea    ecx,[r12+0x1]
0x00e8dc45: xor    r8d,r8d
0x00e8dc48: lea    rdx,[rbp+0x48]
0x00e8dc4c: call   0x140545850
0x00e8dc51: lea    rcx,[rbp+0x48]
0x00e8dc55: call   0x140543d60
0x00e8dc5a: lea    rdx,[rbp+0x48]
0x00e8dc5e: lea    rcx,[rbp+0x28]
0x00e8dc62: call   0x1400bb2d0
0x00e8dc67: lea    rdx,[rip+0x7a3fe2]        # 0x141631c50 ; literal=" line"
0x00e8dc6e: lea    rcx,[rbp+0x28]
0x00e8dc72: call   0x140070b20
0x00e8dc77: mov    BYTE PTR [rsp+0x30],0x1
0x00e8dc7c: lea    rcx,[rbp+0x48]
0x00e8dc80: call   0x1400693f0
0x00e8dc85: jmp    0x140e8dc93
0x00e8dc87: lea    rdx,[rip+0x776aca]        # 0x141604758 ; literal="It"
0x00e8dc8e: call   0x140070b20
0x00e8dc93: lea    rdx,[rip+0x770cd2]        # 0x1415fe96c ; literal=" "
0x00e8dc9a: lea    rcx,[rbp+0x28]
0x00e8dc9e: call   0x140070b20
0x00e8dca3: xor    r13d,r13d
0x00e8dca6: mov    r14d,r13d
0x00e8dca9: mov    rsi,QWORD PTR [rsp+0x58]
0x00e8dcae: mov    ebx,DWORD PTR [rsp+0x38]
0x00e8dcb2: test   r14d,r14d
0x00e8dcb5: je     0x140e8dcc4
0x00e8dcb7: cmp    r14d,0x1
0x00e8dcbb: jne    0x140e8dcc9
0x00e8dcbd: mov    ebx,0x40
0x00e8dcc2: jmp    0x140e8dcc9
0x00e8dcc4: mov    ebx,0x20
0x00e8dcc9: test   DWORD PTR [rsi+0x194],ebx
0x00e8dccf: je     0x140e8dd36
0x00e8dcd1: cmp    ebx,0x20
0x00e8dcd4: je     0x140e8dced
0x00e8dcd6: cmp    ebx,0x40
0x00e8dcd9: jne    0x140e8dd03
0x00e8dcdb: lea    rdx,[rip+0x8be0d6]        # 0x14174bdb8 ; literal="can be read backwards as well as forwards"
0x00e8dce2: lea    rcx,[rbp+0x28]
0x00e8dce6: call   0x140070b20
0x00e8dceb: jmp    0x140e8dd03
0x00e8dced: mov    r8d,0x2f
0x00e8dcf3: lea    rdx,[rip+0x8bdf9e]        # 0x14174bc98 ; literal="has different readings depending on word breaks"
0x00e8dcfa: lea    rcx,[rbp+0x28]
0x00e8dcfe: call   0x140070fd0
0x00e8dd03: cmp    r15d,0x2
0x00e8dd07: jne    0x140e8dd21
0x00e8dd09: mov    r8d,0x5
0x00e8dd0f: lea    rdx,[rip+0x77162a]        # 0x1415ff340 ; literal=" and "
0x00e8dd16: lea    rcx,[rbp+0x28]
0x00e8dd1a: call   0x140070fd0
0x00e8dd1f: jmp    0x140e8dd33
0x00e8dd21: jle    0x140e8dd33
0x00e8dd23: lea    rdx,[rip+0x7715de]        # 0x1415ff308 ; literal=", "
0x00e8dd2a: lea    rcx,[rbp+0x28]
0x00e8dd2e: call   0x140070b20
0x00e8dd33: dec    r15d
0x00e8dd36: inc    r14d
0x00e8dd39: cmp    r14d,0x2
0x00e8dd3d: jl     0x140e8dcb2
0x00e8dd43: mov    DWORD PTR [rsp+0x38],ebx
0x00e8dd47: mov    r8d,0x3
0x00e8dd4d: lea    rdx,[rip+0x78692c]        # 0x141614680 ; literal=".  "
0x00e8dd54: lea    rcx,[rbp+0x28]
0x00e8dd58: call   0x140070fd0
0x00e8dd5d: movzx  esi,BYTE PTR [rsp+0x30]
0x00e8dd62: mov    rbx,QWORD PTR [rbp-0x50]
0x00e8dd66: mov    r8,QWORD PTR [rbp-0x38]
0x00e8dd6a: jmp    0x140e8dd6f
0x00e8dd6c: xor    r13d,r13d
0x00e8dd6f: mov    r10,QWORD PTR [rsp+0x58]
0x00e8dd74: mov    rdx,QWORD PTR [r10+0x38]
0x00e8dd78: mov    rcx,QWORD PTR [r10+0x40]
0x00e8dd7c: sub    rcx,rdx
0x00e8dd7f: sar    rcx,0x2
0x00e8dd83: mov    eax,r12d
0x00e8dd86: mov    r9,QWORD PTR [rbp-0x10]
0x00e8dd8a: cmp    rax,rcx
0x00e8dd8d: jb     0x140e8de48
0x00e8dd93: mov    rcx,QWORD PTR [r9+0x8]
0x00e8dd97: sub    rcx,QWORD PTR [r9]
0x00e8dd9a: sar    rcx,0x2
0x00e8dd9e: mov    eax,r12d
0x00e8dda1: cmp    rax,rcx
0x00e8dda4: jb     0x140e8de4c
0x00e8ddaa: movzx  r12d,BYTE PTR [rsp+0x30]
0x00e8ddb0: lea    r13,[r10+0x68]
0x00e8ddb4: mov    rdx,QWORD PTR [r13+0x0]
0x00e8ddb8: mov    rcx,QWORD PTR [r13+0x8]
0x00e8ddbc: sub    rcx,rdx
0x00e8ddbf: sar    rcx,0x2
0x00e8ddc3: mov    r14d,DWORD PTR [rsp+0x74]
0x00e8ddc8: mov    r15,QWORD PTR [rbp-0x38]
0x00e8ddcc: cmp    r14,rcx
0x00e8ddcf: jae    0x140e8e7ae
0x00e8ddd5: cmp    DWORD PTR [rdx+r15*4],0xffffffff
0x00e8ddda: je     0x140e8e7ae
0x00e8dde0: lea    rcx,[rbp+0x28]
0x00e8dde4: test   r12b,r12b
0x00e8dde7: jne    0x140e8e73e
0x00e8dded: lea    rdx,[rip+0x775e40]        # 0x141603c34 ; literal="The "
0x00e8ddf4: call   0x140070b20
0x00e8ddf9: lea    rcx,[rbp+0x68]
0x00e8ddfd: call   0x140070c50
0x00e8de02: nop
0x00e8de03: lea    ecx,[r14+0x1]
0x00e8de07: xor    r8d,r8d
0x00e8de0a: lea    rdx,[rbp+0x68]
0x00e8de0e: call   0x140545850
0x00e8de13: lea    rcx,[rbp+0x68]
0x00e8de17: call   0x140543d60
0x00e8de1c: lea    rdx,[rbp+0x68]
0x00e8de20: lea    rcx,[rbp+0x28]
0x00e8de24: call   0x1400bb2d0
0x00e8de29: lea    rdx,[rip+0x7a3e20]        # 0x141631c50 ; literal=" line"
0x00e8de30: lea    rcx,[rbp+0x28]
0x00e8de34: call   0x140070b20
0x00e8de39: nop
0x00e8de3a: lea    rcx,[rbp+0x68]
0x00e8de3e: call   0x1400693f0
0x00e8de43: jmp    0x140e8e74a
0x00e8de48: mov    r13d,DWORD PTR [rdx+r8*4]
0x00e8de4c: mov    r14d,0xffffffff
0x00e8de52: mov    rdx,QWORD PTR [r9]
0x00e8de55: mov    rcx,QWORD PTR [r9+0x8]
0x00e8de59: sub    rcx,rdx
0x00e8de5c: sar    rcx,0x2
0x00e8de60: mov    eax,r12d
0x00e8de63: cmp    rax,rcx
0x00e8de66: jae    0x140e8de6c
0x00e8de68: mov    r14d,DWORD PTR [rdx+r8*4]
0x00e8de6c: test   r13d,r13d
0x00e8de6f: jne    0x140e8dea9
0x00e8de71: cmp    r14d,0xffffffff
0x00e8de75: je     0x140e8ddaa
0x00e8de7b: mov    eax,DWORD PTR [r10+0x158]
0x00e8de82: mov    r15,QWORD PTR [rbp-0x60]
0x00e8de86: test   eax,eax
0x00e8de88: je     0x140e8de92
0x00e8de8a: mov    r13d,eax
0x00e8de8d: jmp    0x140e8dfc4
0x00e8de92: mov    eax,DWORD PTR [r15+0xa8]
0x00e8de99: test   eax,eax
0x00e8de9b: je     0x140e8dfc4
0x00e8dea1: mov    r13d,eax
0x00e8dea4: jmp    0x140e8dfc4
0x00e8dea9: cmp    r14d,0xffffffff
0x00e8dead: jne    0x140e8dfc0
0x00e8deb3: mov    r14d,DWORD PTR [r10+0x15c]
0x00e8deba: cmp    r14d,0xffffffff
0x00e8debe: jne    0x140e8dfc0
0x00e8dec4: mov    rax,QWORD PTR [rbp-0x60]
0x00e8dec8: mov    r14d,DWORD PTR [rax+0xac]
0x00e8decf: cmp    r14d,0xffffffff
0x00e8ded3: je     0x140e8dedd
0x00e8ded5: mov    r15,rax
0x00e8ded8: jmp    0x140e8dfc4
0x00e8dedd: movzx  r12d,BYTE PTR [rsp+0x30]
0x00e8dee3: lea    rcx,[rbp+0x28]
0x00e8dee7: test   r12b,r12b
0x00e8deea: jne    0x140e8df49
0x00e8deec: lea    rdx,[rip+0x775d41]        # 0x141603c34 ; literal="The "
0x00e8def3: call   0x140070b20
0x00e8def8: lea    rcx,[rbp+0x48]
0x00e8defc: call   0x140070c50
0x00e8df01: nop
0x00e8df02: mov    ecx,DWORD PTR [rsp+0x74]
0x00e8df06: inc    ecx
0x00e8df08: xor    r8d,r8d
0x00e8df0b: lea    rdx,[rbp+0x48]
0x00e8df0f: call   0x140545850
0x00e8df14: lea    rcx,[rbp+0x48]
0x00e8df18: call   0x140543d60
0x00e8df1d: lea    rdx,[rbp+0x48]
0x00e8df21: lea    rcx,[rbp+0x28]
0x00e8df25: call   0x1400bb2d0
0x00e8df2a: lea    rdx,[rip+0x7a3d1f]        # 0x141631c50 ; literal=" line"
0x00e8df31: lea    rcx,[rbp+0x28]
0x00e8df35: call   0x140070b20
0x00e8df3a: nop
0x00e8df3b: lea    rcx,[rbp+0x48]
0x00e8df3f: call   0x1400693f0
0x00e8df44: mov    r12b,0x1
0x00e8df47: jmp    0x140e8df55
0x00e8df49: lea    rdx,[rip+0x776808]        # 0x141604758 ; literal="It"
0x00e8df50: call   0x140070b20
0x00e8df55: mov    r8d,0x5
0x00e8df5b: lea    rdx,[rip+0x7ff716]        # 0x14168d678 ; literal=" has "
0x00e8df62: lea    rcx,[rbp+0x28]
0x00e8df66: call   0x140070fd0
0x00e8df6b: nop
0x00e8df6c: movzx  edx,dil
0x00e8df70: lea    rcx,[rbp+0x68]
0x00e8df74: call   0x140069750
0x00e8df79: lea    rcx,[rbp+0x68]
0x00e8df7d: call   0x140071140
0x00e8df82: nop
0x00e8df83: lea    rdx,[rbp+0x68]
0x00e8df87: mov    ecx,r13d
0x00e8df8a: call   0x140545040
0x00e8df8f: lea    rdx,[rbp+0x68]
0x00e8df93: lea    rcx,[rbp+0x28]
0x00e8df97: call   0x1400bb2d0
0x00e8df9c: lea    rdx,[rip+0x8be2cd]        # 0x14174c270 ; literal=" syllables.  "
0x00e8dfa3: lea    rcx,[rbp+0x28]
0x00e8dfa7: call   0x140070b20
0x00e8dfac: nop
0x00e8dfad: lea    rcx,[rbp+0x68]
0x00e8dfb1: call   0x1400693f0
0x00e8dfb6: mov    r10,QWORD PTR [rsp+0x58]
0x00e8dfbb: jmp    0x140e8ddb0
0x00e8dfc0: mov    r15,QWORD PTR [rbp-0x60]
0x00e8dfc4: movzx  r12d,BYTE PTR [rsp+0x30]
0x00e8dfca: lea    rcx,[rbp+0x28]
0x00e8dfce: test   r12b,r12b
0x00e8dfd1: jne    0x140e8e030
0x00e8dfd3: lea    rdx,[rip+0x775c5a]        # 0x141603c34 ; literal="The "
0x00e8dfda: call   0x140070b20
0x00e8dfdf: lea    rcx,[rbp+0x68]
0x00e8dfe3: call   0x140070c50
0x00e8dfe8: nop
0x00e8dfe9: mov    ecx,DWORD PTR [rsp+0x74]
0x00e8dfed: inc    ecx
0x00e8dfef: xor    r8d,r8d
0x00e8dff2: lea    rdx,[rbp+0x68]
0x00e8dff6: call   0x140545850
0x00e8dffb: lea    rcx,[rbp+0x68]
0x00e8dfff: call   0x140543d60
0x00e8e004: lea    rdx,[rbp+0x68]
0x00e8e008: lea    rcx,[rbp+0x28]
0x00e8e00c: call   0x1400bb2d0
0x00e8e011: lea    rdx,[rip+0x7a3c38]        # 0x141631c50 ; literal=" line"
0x00e8e018: lea    rcx,[rbp+0x28]
0x00e8e01c: call   0x140070b20
0x00e8e021: nop
0x00e8e022: lea    rcx,[rbp+0x68]
0x00e8e026: call   0x1400693f0
0x00e8e02b: mov    r12b,0x1
0x00e8e02e: jmp    0x140e8e03c
0x00e8e030: lea    rdx,[rip+0x776721]        # 0x141604758 ; literal="It"
0x00e8e037: call   0x140070b20
0x00e8e03c: mov    r8d,0x5
0x00e8e042: lea    rdx,[rip+0x7ff62f]        # 0x14168d678 ; literal=" has "
0x00e8e049: lea    rcx,[rbp+0x28]
0x00e8e04d: call   0x140070fd0
0x00e8e052: nop
0x00e8e053: movzx  edx,sil
0x00e8e057: lea    rcx,[rbp+0x88]
0x00e8e05e: call   0x140069750
0x00e8e063: lea    rcx,[rbp+0x88]
0x00e8e06a: call   0x140071140
0x00e8e06f: nop
0x00e8e070: lea    rdx,[rbp+0x88]
0x00e8e077: mov    ecx,r13d
0x00e8e07a: call   0x140545040
0x00e8e07f: lea    rdx,[rbp+0x88]
0x00e8e086: lea    rcx,[rbp+0x28]
0x00e8e08a: call   0x1400bb2d0
0x00e8e08f: mov    r8d,0x1
0x00e8e095: lea    rdx,[rip+0x7708d0]        # 0x1415fe96c ; literal=" "
0x00e8e09c: lea    rcx,[rbp+0x28]
0x00e8e0a0: call   0x140070fd0
0x00e8e0a5: lea    rcx,[rbp+0x28]
0x00e8e0a9: cmp    r13d,0x1
0x00e8e0ad: lea    rdx,[rip+0x8bd018]        # 0x14174b0cc ; literal="foot"
0x00e8e0b4: je     0x140e8e0bd
0x00e8e0b6: lea    rdx,[rip+0x8bddd7]        # 0x14174be94 ; literal="feet"
0x00e8e0bd: call   0x140070b20
0x00e8e0c2: mov    r8d,0x6
0x00e8e0c8: lea    rdx,[rip+0x776719]        # 0x1416047e8 ; literal=" with "
0x00e8e0cf: lea    rcx,[rbp+0x28]
0x00e8e0d3: call   0x140070fd0
0x00e8e0d8: lea    rcx,[rbp+0x28]
0x00e8e0dc: test   BYTE PTR [r15+0x8c],0x1
0x00e8e0e4: je     0x140e8e195
0x00e8e0ea: lea    rdx,[rip+0x8bdd8f]        # 0x14174be80 ; literal="a tone pattern of "
0x00e8e0f1: call   0x140070b20
0x00e8e0f6: cmp    r14d,0xb
0x00e8e0fa: ja     0x140e8e189
0x00e8e100: movsxd rax,r14d
0x00e8e103: lea    rdx,[rip+0xffffffffff171ef6]        # 0x140000000
0x00e8e10a: mov    ecx,DWORD PTR [rdx+rax*4+0xe8f9c8]
0x00e8e111: add    rcx,rdx
0x00e8e114: jmp    rcx
0x00e8e116: lea    rdx,[rip+0x8bdd93]        # 0x14174beb0 ; literal="even-uneven"
0x00e8e11d: jmp    0x140e8e180
0x00e8e11f: lea    rdx,[rip+0x8bdd7a]        # 0x14174bea0 ; literal="uneven-even"
0x00e8e126: jmp    0x140e8e180
0x00e8e128: lea    rdx,[rip+0x8bdd11]        # 0x14174be40 ; literal="uneven-uneven"
0x00e8e12f: jmp    0x140e8e180
0x00e8e131: lea    rdx,[rip+0x8bdcf0]        # 0x14174be28 ; literal="uneven-even-even"
0x00e8e138: jmp    0x140e8e180
0x00e8e13a: lea    rdx,[rip+0x8bdd27]        # 0x14174be68 ; literal="even-uneven-even"
0x00e8e141: jmp    0x140e8e180
0x00e8e143: lea    rdx,[rip+0x8bdd06]        # 0x14174be50 ; literal="even-even-uneven"
0x00e8e14a: jmp    0x140e8e180
0x00e8e14c: lea    rdx,[rip+0x8bdddd]        # 0x14174bf30 ; literal="uneven-even-uneven"
0x00e8e153: jmp    0x140e8e180
0x00e8e155: lea    rdx,[rip+0x8bddc4]        # 0x14174bf20 ; literal="even-even"
0x00e8e15c: jmp    0x140e8e180
0x00e8e15e: lea    rdx,[rip+0x8bddfb]        # 0x14174bf60 ; literal="even-even-even"
0x00e8e165: jmp    0x140e8e180
0x00e8e167: lea    rdx,[rip+0x8bddda]        # 0x14174bf48 ; literal="even-uneven-uneven"
0x00e8e16e: jmp    0x140e8e180
0x00e8e170: lea    rdx,[rip+0x8bdd61]        # 0x14174bed8 ; literal="uneven-uneven-even"
0x00e8e177: jmp    0x140e8e180
0x00e8e179: lea    rdx,[rip+0x8bdd40]        # 0x14174bec0 ; literal="uneven-uneven-uneven"
0x00e8e180: lea    rcx,[rbp+0x28]
0x00e8e184: call   0x140070b20
0x00e8e189: lea    rdx,[rip+0x7864f0]        # 0x141614680 ; literal=".  "
0x00e8e190: jmp    0x140e8e71e
0x00e8e195: test   DWORD PTR [r15+0xe4],0x4000
0x00e8e1a0: je     0x140e8e478
0x00e8e1a6: lea    rdx,[rip+0x8bdd53]        # 0x14174bf00 ; literal="a syllable weight pattern of "
0x00e8e1ad: call   0x140070b20
0x00e8e1b2: lea    r15,[rip+0xffffffffff171e47]        # 0x140000000
0x00e8e1b9: cmp    r14d,0xb
0x00e8e1bd: ja     0x140e8e40a
0x00e8e1c3: movsxd rax,r14d
0x00e8e1c6: mov    ecx,DWORD PTR [r15+rax*4+0xe8f9f8]
0x00e8e1ce: add    rcx,r15
0x00e8e1d1: jmp    rcx
0x00e8e1d3: lea    rdx,[rip+0x8bdd16]        # 0x14174bef0 ; literal="short-long"
0x00e8e1da: lea    rcx,[rbp+0x28]
0x00e8e1de: call   0x140070b20
0x00e8e1e3: lea    rdx,[rip+0x8bde7e]        # 0x14174c068 ; literal=" (quantitative "
0x00e8e1ea: lea    rcx,[rbp+0x28]
0x00e8e1ee: call   0x140070b20
0x00e8e1f3: lea    rdx,[rip+0x8bde22]        # 0x14174c01c ; literal="iambic"
0x00e8e1fa: jmp    0x140e8e3d5
0x00e8e1ff: lea    rdx,[rip+0x8bddca]        # 0x14174bfd0 ; literal="long-short"
0x00e8e206: lea    rcx,[rbp+0x28]
0x00e8e20a: call   0x140070b20
0x00e8e20f: lea    rdx,[rip+0x8bde52]        # 0x14174c068 ; literal=" (quantitative "
0x00e8e216: lea    rcx,[rbp+0x28]
0x00e8e21a: call   0x140070b20
0x00e8e21f: lea    rdx,[rip+0x8bddea]        # 0x14174c010 ; literal="trochaic"
0x00e8e226: jmp    0x140e8e3d5
0x00e8e22b: lea    rdx,[rip+0x8bdd8e]        # 0x14174bfc0 ; literal="long-long"
0x00e8e232: lea    rcx,[rbp+0x28]
0x00e8e236: call   0x140070b20
0x00e8e23b: lea    rdx,[rip+0x8bde26]        # 0x14174c068 ; literal=" (quantitative "
0x00e8e242: lea    rcx,[rbp+0x28]
0x00e8e246: call   0x140070b20
0x00e8e24b: lea    rdx,[rip+0x8bdde6]        # 0x14174c038 ; literal="spondaic"
0x00e8e252: jmp    0x140e8e3d5
0x00e8e257: lea    rdx,[rip+0x8bdd9a]        # 0x14174bff8 ; literal="long-short-short"
0x00e8e25e: lea    rcx,[rbp+0x28]
0x00e8e262: call   0x140070b20
0x00e8e267: lea    rdx,[rip+0x8bddfa]        # 0x14174c068 ; literal=" (quantitative "
0x00e8e26e: lea    rcx,[rbp+0x28]
0x00e8e272: call   0x140070b20
0x00e8e277: lea    rdx,[rip+0x8bddaa]        # 0x14174c028 ; literal="dactylic"
0x00e8e27e: jmp    0x140e8e3d5
0x00e8e283: lea    rdx,[rip+0x8bdd56]        # 0x14174bfe0 ; literal="short-long-short"
0x00e8e28a: lea    rcx,[rbp+0x28]
0x00e8e28e: call   0x140070b20
0x00e8e293: lea    rdx,[rip+0x8bddce]        # 0x14174c068 ; literal=" (quantitative "
0x00e8e29a: lea    rcx,[rbp+0x28]
0x00e8e29e: call   0x140070b20
0x00e8e2a3: lea    rdx,[rip+0x8bde26]        # 0x14174c0d0 ; literal="amphibrachic"
0x00e8e2aa: jmp    0x140e8e3d5
0x00e8e2af: lea    rdx,[rip+0x8bdcca]        # 0x14174bf80 ; literal="short-short-long"
0x00e8e2b6: lea    rcx,[rbp+0x28]
0x00e8e2ba: call   0x140070b20
0x00e8e2bf: lea    rdx,[rip+0x8bdda2]        # 0x14174c068 ; literal=" (quantitative "
0x00e8e2c6: lea    rcx,[rbp+0x28]
0x00e8e2ca: call   0x140070b20
0x00e8e2cf: lea    rdx,[rip+0x8bddea]        # 0x14174c0c0 ; literal="anapaestic"
0x00e8e2d6: jmp    0x140e8e3d5
0x00e8e2db: lea    rdx,[rip+0x8bdc8e]        # 0x14174bf70 ; literal="long-short-long"
0x00e8e2e2: lea    rcx,[rbp+0x28]
0x00e8e2e6: call   0x140070b20
0x00e8e2eb: lea    rdx,[rip+0x8bdd76]        # 0x14174c068 ; literal=" (quantitative "
0x00e8e2f2: lea    rcx,[rbp+0x28]
0x00e8e2f6: call   0x140070b20
0x00e8e2fb: lea    rdx,[rip+0x8bdde6]        # 0x14174c0e8 ; literal="cretic"
0x00e8e302: jmp    0x140e8e3d5
0x00e8e307: lea    rdx,[rip+0x8bdca2]        # 0x14174bfb0 ; literal="short-short"
0x00e8e30e: lea    rcx,[rbp+0x28]
0x00e8e312: call   0x140070b20
0x00e8e317: lea    rdx,[rip+0x8bdd4a]        # 0x14174c068 ; literal=" (quantitative "
0x00e8e31e: lea    rcx,[rbp+0x28]
0x00e8e322: call   0x140070b20
0x00e8e327: lea    rdx,[rip+0x8bddb2]        # 0x14174c0e0 ; literal="pyrrhic"
0x00e8e32e: jmp    0x140e8e3d5
0x00e8e333: lea    rdx,[rip+0x8bdc5e]        # 0x14174bf98 ; literal="short-short-short"
0x00e8e33a: lea    rcx,[rbp+0x28]
0x00e8e33e: call   0x140070b20
0x00e8e343: lea    rdx,[rip+0x8bdd1e]        # 0x14174c068 ; literal=" (quantitative "
0x00e8e34a: lea    rcx,[rbp+0x28]
0x00e8e34e: call   0x140070b20
0x00e8e353: lea    rdx,[rip+0x8bdd36]        # 0x14174c090 ; literal="tribrachic"
0x00e8e35a: jmp    0x140e8e3d5
0x00e8e35c: lea    rdx,[rip+0x8bdcf5]        # 0x14174c058 ; literal="short-long-long"
0x00e8e363: lea    rcx,[rbp+0x28]
0x00e8e367: call   0x140070b20
0x00e8e36c: lea    rdx,[rip+0x8bdcf5]        # 0x14174c068 ; literal=" (quantitative "
0x00e8e373: lea    rcx,[rbp+0x28]
0x00e8e377: call   0x140070b20
0x00e8e37c: lea    rdx,[rip+0x8bdd05]        # 0x14174c088 ; literal="bacchic"
0x00e8e383: jmp    0x140e8e3d5
0x00e8e385: lea    rdx,[rip+0x8bdcbc]        # 0x14174c048 ; literal="long-long-short"
0x00e8e38c: lea    rcx,[rbp+0x28]
0x00e8e390: call   0x140070b20
0x00e8e395: lea    rdx,[rip+0x8bdccc]        # 0x14174c068 ; literal=" (quantitative "
0x00e8e39c: lea    rcx,[rbp+0x28]
0x00e8e3a0: call   0x140070b20
0x00e8e3a5: lea    rdx,[rip+0x8bdd04]        # 0x14174c0b0 ; literal="antibacchic"
0x00e8e3ac: jmp    0x140e8e3d5
0x00e8e3ae: lea    rdx,[rip+0x8bdcc3]        # 0x14174c078 ; literal="long-long-long"
0x00e8e3b5: lea    rcx,[rbp+0x28]
0x00e8e3b9: call   0x140070b20
0x00e8e3be: lea    rdx,[rip+0x8bdca3]        # 0x14174c068 ; literal=" (quantitative "
0x00e8e3c5: lea    rcx,[rbp+0x28]
0x00e8e3c9: call   0x140070b20
0x00e8e3ce: lea    rdx,[rip+0x8bdccb]        # 0x14174c0a0 ; literal="molossic"
0x00e8e3d5: lea    rcx,[rbp+0x28]
0x00e8e3d9: call   0x140070b20
0x00e8e3de: lea    rdx,[rip+0x770587]        # 0x1415fe96c ; literal=" "
0x00e8e3e5: lea    rcx,[rbp+0x28]
0x00e8e3e9: call   0x140070b20
0x00e8e3ee: lea    eax,[r13-0x1]
0x00e8e3f2: cmp    eax,0x7
0x00e8e3f5: ja     0x140e8e717
0x00e8e3fb: cdqe
0x00e8e3fd: mov    ecx,DWORD PTR [r15+rax*4+0xe8fa28]
0x00e8e405: add    rcx,r15
0x00e8e408: jmp    rcx
0x00e8e40a: lea    rdx,[rip+0x8bdc57]        # 0x14174c068 ; literal=" (quantitative "
0x00e8e411: lea    rcx,[rbp+0x28]
0x00e8e415: call   0x140070b20
0x00e8e41a: cmp    r14d,0xb
0x00e8e41e: ja     0x140e8e3de
0x00e8e420: movsxd rax,r14d
0x00e8e423: mov    ecx,DWORD PTR [r15+rax*4+0xe8fa48]
0x00e8e42b: add    rcx,r15
0x00e8e42e: jmp    rcx
0x00e8e430: lea    rdx,[rip+0x8bdd01]        # 0x14174c138 ; literal="monometer"
0x00e8e437: jmp    0x140e8e70e
0x00e8e43c: lea    rdx,[rip+0x8bdd15]        # 0x14174c158 ; literal="trimeter"
0x00e8e443: jmp    0x140e8e70e
0x00e8e448: lea    rdx,[rip+0x8bdcf9]        # 0x14174c148 ; literal="tetrameter"
0x00e8e44f: jmp    0x140e8e70e
0x00e8e454: lea    rdx,[rip+0x8bdca5]        # 0x14174c100 ; literal="pentameter"
0x00e8e45b: jmp    0x140e8e70e
0x00e8e460: lea    rdx,[rip+0x8bdc89]        # 0x14174c0f0 ; literal="hexameter"
0x00e8e467: jmp    0x140e8e70e
0x00e8e46c: lea    rdx,[rip+0x8bdcad]        # 0x14174c120 ; literal="heptameter"
0x00e8e473: jmp    0x140e8e70e
0x00e8e478: lea    rdx,[rip+0x8bdd61]        # 0x14174c1e0 ; literal="an accent pattern of "
0x00e8e47f: call   0x140070b20
0x00e8e484: lea    r15,[rip+0xffffffffff171b75]        # 0x140000000
0x00e8e48b: cmp    r14d,0xb
0x00e8e48f: ja     0x140e8e6d8
0x00e8e495: movsxd rax,r14d
0x00e8e498: mov    ecx,DWORD PTR [r15+rax*4+0xe8fa78]
0x00e8e4a0: add    rcx,r15
0x00e8e4a3: jmp    rcx
0x00e8e4a5: lea    rdx,[rip+0x8bdd6c]        # 0x14174c218 ; literal="unstressed-stressed"
0x00e8e4ac: lea    rcx,[rbp+0x28]
0x00e8e4b0: call   0x140070b20
0x00e8e4b5: lea    rdx,[rip+0x8bddc4]        # 0x14174c280 ; literal=" (qualitative "
0x00e8e4bc: lea    rcx,[rbp+0x28]
0x00e8e4c0: call   0x140070b20
0x00e8e4c5: lea    rdx,[rip+0x8bdb50]        # 0x14174c01c ; literal="iambic"
0x00e8e4cc: jmp    0x140e8e6a7
0x00e8e4d1: lea    rdx,[rip+0x8bdd28]        # 0x14174c200 ; literal="stressed-unstressed"
0x00e8e4d8: lea    rcx,[rbp+0x28]
0x00e8e4dc: call   0x140070b20
0x00e8e4e1: lea    rdx,[rip+0x8bdd98]        # 0x14174c280 ; literal=" (qualitative "
0x00e8e4e8: lea    rcx,[rbp+0x28]
0x00e8e4ec: call   0x140070b20
0x00e8e4f1: lea    rdx,[rip+0x8bdb18]        # 0x14174c010 ; literal="trochaic"
0x00e8e4f8: jmp    0x140e8e6a7
0x00e8e4fd: lea    rdx,[rip+0x8bdc84]        # 0x14174c188 ; literal="stressed-stressed"
0x00e8e504: lea    rcx,[rbp+0x28]
0x00e8e508: call   0x140070b20
0x00e8e50d: lea    rdx,[rip+0x8bdd6c]        # 0x14174c280 ; literal=" (qualitative "
0x00e8e514: lea    rcx,[rbp+0x28]
0x00e8e518: call   0x140070b20
0x00e8e51d: lea    rdx,[rip+0x8bdb14]        # 0x14174c038 ; literal="spondaic"
0x00e8e524: jmp    0x140e8e6a7
0x00e8e529: lea    rdx,[rip+0x8bdc38]        # 0x14174c168 ; literal="stressed-unstressed-unstressed"
0x00e8e530: lea    rcx,[rbp+0x28]
0x00e8e534: call   0x140070b20
0x00e8e539: lea    rdx,[rip+0x8bdd40]        # 0x14174c280 ; literal=" (qualitative "
0x00e8e540: lea    rcx,[rbp+0x28]
0x00e8e544: call   0x140070b20
0x00e8e549: lea    rdx,[rip+0x8bdad8]        # 0x14174c028 ; literal="dactylic"
0x00e8e550: jmp    0x140e8e6a7
0x00e8e555: lea    rdx,[rip+0x8bdc64]        # 0x14174c1c0 ; literal="unstressed-stressed-unstressed"
0x00e8e55c: lea    rcx,[rbp+0x28]
0x00e8e560: call   0x140070b20
0x00e8e565: lea    rdx,[rip+0x8bdd14]        # 0x14174c280 ; literal=" (qualitative "
0x00e8e56c: lea    rcx,[rbp+0x28]
0x00e8e570: call   0x140070b20
0x00e8e575: lea    rdx,[rip+0x8bdb54]        # 0x14174c0d0 ; literal="amphibrachic"
0x00e8e57c: jmp    0x140e8e6a7
0x00e8e581: lea    rdx,[rip+0x8bdc18]        # 0x14174c1a0 ; literal="unstressed-unstressed-stressed"
0x00e8e588: lea    rcx,[rbp+0x28]
0x00e8e58c: call   0x140070b20
0x00e8e591: lea    rdx,[rip+0x8bdce8]        # 0x14174c280 ; literal=" (qualitative "
0x00e8e598: lea    rcx,[rbp+0x28]
0x00e8e59c: call   0x140070b20
0x00e8e5a1: lea    rdx,[rip+0x8bdb18]        # 0x14174c0c0 ; literal="anapaestic"
0x00e8e5a8: jmp    0x140e8e6a7
0x00e8e5ad: lea    rdx,[rip+0x8bdcf4]        # 0x14174c2a8 ; literal="stressed-unstressed-stressed"
0x00e8e5b4: lea    rcx,[rbp+0x28]
0x00e8e5b8: call   0x140070b20
0x00e8e5bd: lea    rdx,[rip+0x8bdcbc]        # 0x14174c280 ; literal=" (qualitative "
0x00e8e5c4: lea    rcx,[rbp+0x28]
0x00e8e5c8: call   0x140070b20
0x00e8e5cd: lea    rdx,[rip+0x8bdb14]        # 0x14174c0e8 ; literal="cretic"
0x00e8e5d4: jmp    0x140e8e6a7
0x00e8e5d9: lea    rdx,[rip+0x8bdcb0]        # 0x14174c290 ; literal="unstressed-unstressed"
0x00e8e5e0: lea    rcx,[rbp+0x28]
0x00e8e5e4: call   0x140070b20
0x00e8e5e9: lea    rdx,[rip+0x8bdc90]        # 0x14174c280 ; literal=" (qualitative "
0x00e8e5f0: lea    rcx,[rbp+0x28]
0x00e8e5f4: call   0x140070b20
0x00e8e5f9: lea    rdx,[rip+0x8bdae0]        # 0x14174c0e0 ; literal="pyrrhic"
0x00e8e600: jmp    0x140e8e6a7
0x00e8e605: lea    rdx,[rip+0x8bdcdc]        # 0x14174c2e8 ; literal="unstressed-unstressed-unstressed"
0x00e8e60c: lea    rcx,[rbp+0x28]
0x00e8e610: call   0x140070b20
0x00e8e615: lea    rdx,[rip+0x8bdc64]        # 0x14174c280 ; literal=" (qualitative "
0x00e8e61c: lea    rcx,[rbp+0x28]
0x00e8e620: call   0x140070b20
0x00e8e625: lea    rdx,[rip+0x8bda64]        # 0x14174c090 ; literal="tribrachic"
0x00e8e62c: jmp    0x140e8e6a7
0x00e8e62e: lea    rdx,[rip+0x8bdc93]        # 0x14174c2c8 ; literal="unstressed-stressed-stressed"
0x00e8e635: lea    rcx,[rbp+0x28]
0x00e8e639: call   0x140070b20
0x00e8e63e: lea    rdx,[rip+0x8bdc3b]        # 0x14174c280 ; literal=" (qualitative "
0x00e8e645: lea    rcx,[rbp+0x28]
0x00e8e649: call   0x140070b20
0x00e8e64e: lea    rdx,[rip+0x8bda33]        # 0x14174c088 ; literal="bacchic"
0x00e8e655: jmp    0x140e8e6a7
0x00e8e657: lea    rdx,[rip+0x8bdbf2]        # 0x14174c250 ; literal="stressed-stressed-unstressed"
0x00e8e65e: lea    rcx,[rbp+0x28]
0x00e8e662: call   0x140070b20
0x00e8e667: lea    rdx,[rip+0x8bdc12]        # 0x14174c280 ; literal=" (qualitative "
0x00e8e66e: lea    rcx,[rbp+0x28]
0x00e8e672: call   0x140070b20
0x00e8e677: lea    rdx,[rip+0x8bda32]        # 0x14174c0b0 ; literal="antibacchic"
0x00e8e67e: jmp    0x140e8e6a7
0x00e8e680: lea    rdx,[rip+0x8bdba9]        # 0x14174c230 ; literal="stressed-stressed-stressed"
0x00e8e687: lea    rcx,[rbp+0x28]
0x00e8e68b: call   0x140070b20
0x00e8e690: lea    rdx,[rip+0x8bdbe9]        # 0x14174c280 ; literal=" (qualitative "
0x00e8e697: lea    rcx,[rbp+0x28]
0x00e8e69b: call   0x140070b20
0x00e8e6a0: lea    rdx,[rip+0x8bd9f9]        # 0x14174c0a0 ; literal="molossic"
0x00e8e6a7: lea    rcx,[rbp+0x28]
0x00e8e6ab: call   0x140070b20
0x00e8e6b0: lea    rdx,[rip+0x7702b5]        # 0x1415fe96c ; literal=" "
0x00e8e6b7: lea    rcx,[rbp+0x28]
0x00e8e6bb: call   0x140070b20
0x00e8e6c0: lea    eax,[r13-0x1]
0x00e8e6c4: cmp    eax,0x7
0x00e8e6c7: ja     0x140e8e717
0x00e8e6c9: cdqe
0x00e8e6cb: mov    ecx,DWORD PTR [r15+rax*4+0xe8faa8]
0x00e8e6d3: add    rcx,r15
0x00e8e6d6: jmp    rcx
0x00e8e6d8: lea    rdx,[rip+0x8bdba1]        # 0x14174c280 ; literal=" (qualitative "
0x00e8e6df: lea    rcx,[rbp+0x28]
0x00e8e6e3: call   0x140070b20
0x00e8e6e8: cmp    r14d,0xb
0x00e8e6ec: ja     0x140e8e6b0
0x00e8e6ee: movsxd rax,r14d
0x00e8e6f1: mov    ecx,DWORD PTR [r15+rax*4+0xe8fac8]
0x00e8e6f9: add    rcx,r15
0x00e8e6fc: jmp    rcx
0x00e8e6fe: lea    rdx,[rip+0x8bda2b]        # 0x14174c130 ; literal="dimeter"
0x00e8e705: jmp    0x140e8e70e
0x00e8e707: lea    rdx,[rip+0x8bda02]        # 0x14174c110 ; literal="octameter"
0x00e8e70e: lea    rcx,[rbp+0x28]
0x00e8e712: call   0x140070b20
0x00e8e717: lea    rdx,[rip+0x8bdada]        # 0x14174c1f8 ; literal=").  "
0x00e8e71e: lea    rcx,[rbp+0x28]
0x00e8e722: call   0x140070b20
0x00e8e727: nop
0x00e8e728: lea    rcx,[rbp+0x88]
0x00e8e72f: call   0x140070e10
0x00e8e734: mov    r10,QWORD PTR [rsp+0x58]
0x00e8e739: jmp    0x140e8ddb0
0x00e8e73e: lea    rdx,[rip+0x776013]        # 0x141604758 ; literal="It"
0x00e8e745: call   0x140070b20
0x00e8e74a: mov    r8d,0x5
0x00e8e750: lea    rdx,[rip+0x7fef21]        # 0x14168d678 ; literal=" has "
0x00e8e757: lea    rcx,[rbp+0x28]
0x00e8e75b: call   0x140070fd0
0x00e8e760: mov    rcx,QWORD PTR [r13+0x0]
0x00e8e764: mov    edx,DWORD PTR [rcx+r15*4]
0x00e8e768: test   edx,edx
0x00e8e76a: je     0x140e8e788
0x00e8e76c: sub    edx,0x1
0x00e8e76f: je     0x140e8e77f
0x00e8e771: cmp    edx,0x1
0x00e8e774: jne    0x140e8e798
0x00e8e776: lea    rdx,[rip+0x8bd073]        # 0x14174b7f0 ; literal="a terminal caesura"
0x00e8e77d: jmp    0x140e8e78f
0x00e8e77f: lea    rdx,[rip+0x8bd082]        # 0x14174b808 ; literal="a medial caesura"
0x00e8e786: jmp    0x140e8e78f
0x00e8e788: lea    rdx,[rip+0x8bd029]        # 0x14174b7b8 ; literal="an initial caesura"
0x00e8e78f: lea    rcx,[rbp+0x28]
0x00e8e793: call   0x140070b20
0x00e8e798: mov    r8d,0x3
0x00e8e79e: lea    rdx,[rip+0x785edb]        # 0x141614680 ; literal=".  "
0x00e8e7a5: lea    rcx,[rbp+0x28]
0x00e8e7a9: call   0x140070fd0
0x00e8e7ae: mov    r12d,DWORD PTR [rsp+0x74]
0x00e8e7b3: inc    r12d
0x00e8e7b6: mov    DWORD PTR [rsp+0x74],r12d
0x00e8e7bb: inc    r15
0x00e8e7be: mov    QWORD PTR [rbp-0x38],r15
0x00e8e7c2: inc    DWORD PTR [rbp-0x44]
0x00e8e7c5: inc    DWORD PTR [rbp-0x74]
0x00e8e7c8: cmp    r15,QWORD PTR [rbp+0x18]
0x00e8e7cc: mov    r15,QWORD PTR [rbp-0x8]
0x00e8e7d0: jl     0x140e8d220
0x00e8e7d6: movzx  ebx,BYTE PTR [rsp+0x30]
0x00e8e7db: cmp    BYTE PTR [rsp+0x40],0x0
0x00e8e7e0: jne    0x140e8ece7
0x00e8e7e6: mov    r15d,0xffffffff
0x00e8e7ec: mov    r12b,0x1
0x00e8e7ef: xor    r13b,r13b
0x00e8e7f2: mov    r14,QWORD PTR [rsp+0x58]
0x00e8e7f7: lea    rdx,[rbp-0x70]
0x00e8e7fb: lea    rcx,[r14+0x20]
0x00e8e7ff: call   0x140070800
0x00e8e804: lea    rdx,[rbp+0x0]
0x00e8e808: lea    rcx,[r14+0x20]
0x00e8e80c: call   0x1400707f0
0x00e8e811: mov    rax,QWORD PTR [rbp-0x70]
0x00e8e815: mov    rcx,QWORD PTR [rbp+0x0]
0x00e8e819: mov    esi,0x1
0x00e8e81e: xor    edi,edi
0x00e8e820: mov    r14d,0xff
0x00e8e826: cmp    rax,rcx
0x00e8e829: je     0x140e8e875
0x00e8e82b: mov    edx,esi
0x00e8e82d: cmovb  edx,r14d
0x00e8e831: test   dl,dl
0x00e8e833: jns    0x140e8e875
0x00e8e835: mov    edx,DWORD PTR [rax]
0x00e8e837: test   edx,edx
0x00e8e839: js     0x140e8e86b
0x00e8e83b: cmp    edx,0x1a
0x00e8e83e: jge    0x140e8e86b
0x00e8e840: lea    rcx,[rbp-0x70]
0x00e8e844: call   0x1400703d0
0x00e8e849: cmp    r15d,0xffffffff
0x00e8e84d: jne    0x140e8e854
0x00e8e84f: mov    r15d,DWORD PTR [rax]
0x00e8e852: jmp    0x140e8e85f
0x00e8e854: movzx  r12d,r12b
0x00e8e858: cmp    DWORD PTR [rax],r15d
0x00e8e85b: cmovne r12d,edi
0x00e8e85f: movzx  r13d,sil
0x00e8e863: mov    rax,QWORD PTR [rbp-0x70]
0x00e8e867: mov    rcx,QWORD PTR [rbp+0x0]
0x00e8e86b: add    rax,0x4
0x00e8e86f: mov    QWORD PTR [rbp-0x70],rax
0x00e8e873: jmp    0x140e8e826
0x00e8e875: mov    rdx,QWORD PTR [rsp+0x58]
0x00e8e87a: mov    eax,DWORD PTR [rdx+0x18]
0x00e8e87d: cmp    eax,0xffffffff
0x00e8e880: movzx  edi,BYTE PTR [rsp+0x30]
0x00e8e885: movzx  esi,BYTE PTR [rsp+0x30]
0x00e8e88a: jne    0x140e8e8a0
0x00e8e88c: cmp    DWORD PTR [rdx+0x1c],0xffffffff
0x00e8e890: jne    0x140e8e8a0
0x00e8e892: test   r13b,r13b
0x00e8e895: je     0x140e8ece7
0x00e8e89b: jmp    0x140e8ecfb
0x00e8e8a0: test   r13b,r13b
0x00e8e8a3: jne    0x140e8ecf2
0x00e8e8a9: mov    r14d,DWORD PTR [rdx+0x10]
0x00e8e8ad: xor    r9d,r9d
0x00e8e8b0: mov    r13d,r9d
0x00e8e8b3: mov    r15d,DWORD PTR [rdx+0x14]
0x00e8e8b7: mov    r8d,0x1
0x00e8e8bd: mov    ecx,r8d
0x00e8e8c0: cmp    r15d,r14d
0x00e8e8c3: jge    0x140e8e8da
0x00e8e8c5: cmp    DWORD PTR [rdx+0x1c],0xffffffff
0x00e8e8c9: je     0x140e8e8da
0x00e8e8cb: mov    eax,r14d
0x00e8e8ce: mov    r14d,r15d
0x00e8e8d1: mov    r15d,eax
0x00e8e8d4: mov    r13d,r8d
0x00e8e8d7: mov    ecx,r9d
0x00e8e8da: movsxd rax,DWORD PTR [rdx+r13*4+0x18]
0x00e8e8df: mov    r8d,DWORD PTR [rsp+0x4c]
0x00e8e8e4: cmp    eax,0xffffffff
0x00e8e8e7: je     0x140e8e903
0x00e8e8e9: cmp    DWORD PTR [rbp+rax*4+0x108],0xffffffff
0x00e8e8f1: jne    0x140e8e903
0x00e8e8f3: mov    DWORD PTR [rbp+rax*4+0x108],r8d
0x00e8e8fb: inc    r8d
0x00e8e8fe: mov    DWORD PTR [rsp+0x4c],r8d
0x00e8e903: lea    r12,[rdx+rcx*4]
0x00e8e907: movsxd rax,DWORD PTR [r12+0x18]
0x00e8e90c: cmp    eax,0xffffffff
0x00e8e90f: je     0x140e8e92b
0x00e8e911: cmp    DWORD PTR [rbp+rax*4+0x108],0xffffffff
0x00e8e919: jne    0x140e8e92b
0x00e8e91b: mov    DWORD PTR [rbp+rax*4+0x108],r8d
0x00e8e923: inc    r8d
0x00e8e926: mov    DWORD PTR [rsp+0x4c],r8d
0x00e8e92b: lea    rcx,[rbp+0x28]
0x00e8e92f: cmp    BYTE PTR [rsp+0x70],r9b
0x00e8e934: je     0x140e8e9ec
0x00e8e93a: cmp    DWORD PTR [rdx+0x1c],0xffffffff
0x00e8e93e: je     0x140e8e9b2
0x00e8e940: lea    rdx,[rip+0x8bd451]        # 0x14174bd98 ; literal="The refrain occurs as lines "
0x00e8e947: call   0x140070b20
0x00e8e94c: lea    rcx,[rbp+0x68]
0x00e8e950: call   0x140070c50
0x00e8e955: nop
0x00e8e956: lea    rdx,[rbp+0x68]
0x00e8e95a: mov    ecx,r14d
0x00e8e95d: call   0x140545040
0x00e8e962: lea    rdx,[rbp+0x68]
0x00e8e966: lea    rcx,[rbp+0x28]
0x00e8e96a: call   0x1400bb2d0
0x00e8e96f: nop
0x00e8e970: lea    rcx,[rbp+0x68]
0x00e8e974: call   0x1400693f0
0x00e8e979: lea    rdx,[rip+0x7709c0]        # 0x1415ff340 ; literal=" and "
0x00e8e980: lea    rcx,[rbp+0x28]
0x00e8e984: call   0x140070b20
0x00e8e989: lea    rcx,[rbp+0x68]
0x00e8e98d: call   0x140070c50
0x00e8e992: nop
0x00e8e993: lea    rdx,[rbp+0x68]
0x00e8e997: mov    ecx,r15d
0x00e8e99a: call   0x140545040
0x00e8e99f: lea    rdx,[rbp+0x68]
0x00e8e9a3: lea    rcx,[rbp+0x28]
0x00e8e9a7: call   0x1400bb2d0
0x00e8e9ac: nop
0x00e8e9ad: jmp    0x140e8ec65
0x00e8e9b2: lea    rdx,[rip+0x8bd44f]        # 0x14174be08 ; literal="The refrain occurs as line "
0x00e8e9b9: call   0x140070b20
0x00e8e9be: lea    rcx,[rbp+0x68]
0x00e8e9c2: call   0x140070c50
0x00e8e9c7: nop
0x00e8e9c8: lea    rdx,[rbp+0x68]
0x00e8e9cc: mov    rax,QWORD PTR [rsp+0x58]
0x00e8e9d1: mov    ecx,DWORD PTR [rax+0x10]
0x00e8e9d4: call   0x140545040
0x00e8e9d9: lea    rdx,[rbp+0x68]
0x00e8e9dd: lea    rcx,[rbp+0x28]
0x00e8e9e1: call   0x1400bb2d0
0x00e8e9e6: nop
0x00e8e9e7: jmp    0x140e8ec65
0x00e8e9ec: mov    eax,DWORD PTR [rdx+0x1c]
0x00e8e9ef: cmp    DWORD PTR [rdx+0x18],eax
0x00e8e9f2: lea    rdx,[rip+0x77523b]        # 0x141603c34 ; literal="The "
0x00e8e9f9: jne    0x140e8eac2
0x00e8e9ff: call   0x140070b20
0x00e8ea04: lea    rcx,[rbp+0x68]
0x00e8ea08: call   0x140070c50
0x00e8ea0d: nop
0x00e8ea0e: mov    rax,QWORD PTR [rsp+0x58]
0x00e8ea13: movsxd rax,DWORD PTR [rax+0x18]
0x00e8ea17: mov    ecx,DWORD PTR [rbp+rax*4+0x108]
0x00e8ea1e: inc    ecx
0x00e8ea20: xor    r8d,r8d
0x00e8ea23: lea    rdx,[rbp+0x68]
0x00e8ea27: call   0x140545850
0x00e8ea2c: lea    rcx,[rbp+0x68]
0x00e8ea30: call   0x140543d60
0x00e8ea35: lea    rdx,[rbp+0x68]
0x00e8ea39: lea    rcx,[rbp+0x28]
0x00e8ea3d: call   0x1400bb2d0
0x00e8ea42: nop
0x00e8ea43: lea    rcx,[rbp+0x68]
0x00e8ea47: call   0x1400693f0
0x00e8ea4c: lea    rdx,[rip+0x8bd395]        # 0x14174bde8 ; literal=" refrain occurs as lines "
0x00e8ea53: lea    rcx,[rbp+0x28]
0x00e8ea57: call   0x140070b20
0x00e8ea5c: lea    rcx,[rbp+0x68]
0x00e8ea60: call   0x140070c50
0x00e8ea65: nop
0x00e8ea66: lea    rdx,[rbp+0x68]
0x00e8ea6a: mov    ecx,r14d
0x00e8ea6d: call   0x140545040
0x00e8ea72: lea    rdx,[rbp+0x68]
0x00e8ea76: lea    rcx,[rbp+0x28]
0x00e8ea7a: call   0x1400bb2d0
0x00e8ea7f: nop
0x00e8ea80: lea    rcx,[rbp+0x68]
0x00e8ea84: call   0x1400693f0
0x00e8ea89: lea    rdx,[rip+0x7708b0]        # 0x1415ff340 ; literal=" and "
0x00e8ea90: lea    rcx,[rbp+0x28]
0x00e8ea94: call   0x140070b20
0x00e8ea99: lea    rcx,[rbp+0x68]
0x00e8ea9d: call   0x140070c50
0x00e8eaa2: nop
0x00e8eaa3: lea    rdx,[rbp+0x68]
0x00e8eaa7: mov    ecx,r15d
0x00e8eaaa: call   0x140545040
0x00e8eaaf: lea    rdx,[rbp+0x68]
0x00e8eab3: lea    rcx,[rbp+0x28]
0x00e8eab7: call   0x1400bb2d0
0x00e8eabc: nop
0x00e8eabd: jmp    0x140e8ec65
0x00e8eac2: cmp    eax,0xffffffff
0x00e8eac5: jne    0x140e8eb52
0x00e8eacb: call   0x140070b20
0x00e8ead0: lea    rcx,[rbp+0x68]
0x00e8ead4: call   0x140070c50
0x00e8ead9: nop
0x00e8eada: mov    r14,QWORD PTR [rsp+0x58]
0x00e8eadf: movsxd rax,DWORD PTR [r14+0x18]
0x00e8eae3: mov    ecx,DWORD PTR [rbp+rax*4+0x108]
0x00e8eaea: inc    ecx
0x00e8eaec: xor    r8d,r8d
0x00e8eaef: lea    rdx,[rbp+0x68]
0x00e8eaf3: call   0x140545850
0x00e8eaf8: lea    rcx,[rbp+0x68]
0x00e8eafc: call   0x140543d60
0x00e8eb01: lea    rdx,[rbp+0x68]
0x00e8eb05: lea    rcx,[rbp+0x28]
0x00e8eb09: call   0x1400bb2d0
0x00e8eb0e: nop
0x00e8eb0f: lea    rcx,[rbp+0x68]
0x00e8eb13: call   0x1400693f0
0x00e8eb18: lea    rdx,[rip+0x8bd241]        # 0x14174bd60 ; literal=" refrain occurs as line "
0x00e8eb1f: lea    rcx,[rbp+0x28]
0x00e8eb23: call   0x140070b20
0x00e8eb28: lea    rcx,[rbp+0x68]
0x00e8eb2c: call   0x140070c50
0x00e8eb31: nop
0x00e8eb32: lea    rdx,[rbp+0x68]
0x00e8eb36: mov    ecx,DWORD PTR [r14+0x10]
0x00e8eb3a: call   0x140545040
0x00e8eb3f: lea    rdx,[rbp+0x68]
0x00e8eb43: lea    rcx,[rbp+0x28]
0x00e8eb47: call   0x1400bb2d0
0x00e8eb4c: nop
0x00e8eb4d: jmp    0x140e8ec65
0x00e8eb52: call   0x140070b20
0x00e8eb57: lea    rcx,[rbp+0x68]
0x00e8eb5b: call   0x140070c50
0x00e8eb60: nop
0x00e8eb61: mov    rax,QWORD PTR [rsp+0x58]
0x00e8eb66: movsxd rax,DWORD PTR [rax+r13*4+0x18]
0x00e8eb6b: mov    ecx,DWORD PTR [rbp+rax*4+0x108]
0x00e8eb72: inc    ecx
0x00e8eb74: xor    r8d,r8d
0x00e8eb77: lea    rdx,[rbp+0x68]
0x00e8eb7b: call   0x140545850
0x00e8eb80: lea    rcx,[rbp+0x68]
0x00e8eb84: call   0x140543d60
0x00e8eb89: lea    rdx,[rbp+0x68]
0x00e8eb8d: lea    rcx,[rbp+0x28]
0x00e8eb91: call   0x1400bb2d0
0x00e8eb96: nop
0x00e8eb97: lea    rcx,[rbp+0x68]
0x00e8eb9b: call   0x1400693f0
0x00e8eba0: lea    rdx,[rip+0x8bd1b9]        # 0x14174bd60 ; literal=" refrain occurs as line "
0x00e8eba7: lea    rcx,[rbp+0x28]
0x00e8ebab: call   0x140070b20
0x00e8ebb0: lea    rcx,[rbp+0x68]
0x00e8ebb4: call   0x140070c50
0x00e8ebb9: nop
0x00e8ebba: lea    rdx,[rbp+0x68]
0x00e8ebbe: mov    ecx,r14d
0x00e8ebc1: call   0x140545040
0x00e8ebc6: lea    rdx,[rbp+0x68]
0x00e8ebca: lea    rcx,[rbp+0x28]
0x00e8ebce: call   0x1400bb2d0
0x00e8ebd3: nop
0x00e8ebd4: lea    rcx,[rbp+0x68]
0x00e8ebd8: call   0x1400693f0
0x00e8ebdd: lea    rdx,[rip+0x770b04]        # 0x1415ff6e8 ; literal=" and the "
0x00e8ebe4: lea    rcx,[rbp+0x28]
0x00e8ebe8: call   0x140070b20
0x00e8ebed: lea    rcx,[rbp+0x68]
0x00e8ebf1: call   0x140070c50
0x00e8ebf6: nop
0x00e8ebf7: movsxd rax,DWORD PTR [r12+0x18]
0x00e8ebfc: mov    ecx,DWORD PTR [rbp+rax*4+0x108]
0x00e8ec03: inc    ecx
0x00e8ec05: xor    r8d,r8d
0x00e8ec08: lea    rdx,[rbp+0x68]
0x00e8ec0c: call   0x140545850
0x00e8ec11: lea    rcx,[rbp+0x68]
0x00e8ec15: call   0x140543d60
0x00e8ec1a: lea    rdx,[rbp+0x68]
0x00e8ec1e: lea    rcx,[rbp+0x28]
0x00e8ec22: call   0x1400bb2d0
0x00e8ec27: nop
0x00e8ec28: lea    rcx,[rbp+0x68]
0x00e8ec2c: call   0x1400693f0
0x00e8ec31: lea    rdx,[rip+0x8bd128]        # 0x14174bd60 ; literal=" refrain occurs as line "
0x00e8ec38: lea    rcx,[rbp+0x28]
0x00e8ec3c: call   0x140070b20
0x00e8ec41: lea    rcx,[rbp+0x68]
0x00e8ec45: call   0x140070c50
0x00e8ec4a: nop
0x00e8ec4b: lea    rdx,[rbp+0x68]
0x00e8ec4f: mov    ecx,r15d
0x00e8ec52: call   0x140545040
0x00e8ec57: lea    rdx,[rbp+0x68]
0x00e8ec5b: lea    rcx,[rbp+0x28]
0x00e8ec5f: call   0x1400bb2d0
0x00e8ec64: nop
0x00e8ec65: lea    rcx,[rbp+0x68]
0x00e8ec69: call   0x1400693f0
0x00e8ec6e: cmp    BYTE PTR [rsp+0x31],0x0
0x00e8ec73: jne    0x140e8ecd1
0x00e8ec75: lea    rdx,[rip+0x7ffac4]        # 0x14168e740 ; literal=" of the "
0x00e8ec7c: lea    rcx,[rbp+0x28]
0x00e8ec80: call   0x140070b20
0x00e8ec85: lea    rcx,[rbp+0x68]
0x00e8ec89: call   0x140070c50
0x00e8ec8e: nop
0x00e8ec8f: mov    ecx,DWORD PTR [rsp+0x50]
0x00e8ec93: inc    ecx
0x00e8ec95: xor    r8d,r8d
0x00e8ec98: lea    rdx,[rbp+0x68]
0x00e8ec9c: call   0x140545850
0x00e8eca1: lea    rcx,[rbp+0x68]
0x00e8eca5: call   0x140543d60
0x00e8ecaa: lea    rdx,[rbp+0x68]
0x00e8ecae: lea    rcx,[rbp+0x28]
0x00e8ecb2: call   0x1400bb2d0
0x00e8ecb7: lea    rdx,[rip+0x775d8e]        # 0x141604a4c ; literal=" part"
0x00e8ecbe: lea    rcx,[rbp+0x28]
0x00e8ecc2: call   0x140070b20
0x00e8ecc7: nop
0x00e8ecc8: lea    rcx,[rbp+0x68]
0x00e8eccc: call   0x1400693f0
0x00e8ecd1: mov    r8d,0x3
0x00e8ecd7: lea    rdx,[rip+0x7859a2]        # 0x141614680 ; literal=".  "
0x00e8ecde: lea    rcx,[rbp+0x28]
0x00e8ece2: call   0x140070fd0
0x00e8ece7: mov    r13d,0x1
0x00e8eced: jmp    0x140e8f3ed
0x00e8ecf2: cmp    eax,0xffffffff
0x00e8ecf5: jne    0x140e8ede4
0x00e8ecfb: cmp    DWORD PTR [rdx+0x1c],0xffffffff
0x00e8ecff: jne    0x140e8ede4
0x00e8ed05: test   r13b,r13b
0x00e8ed08: je     0x140e8ede4
0x00e8ed0e: test   r12b,r12b
0x00e8ed11: mov    r12,rdx
0x00e8ed14: je     0x140e8ede7
0x00e8ed1a: test   BYTE PTR [rdx],0x1
0x00e8ed1d: jne    0x140e8ede7
0x00e8ed23: cmp    DWORD PTR [rdx+0xc],0x2
0x00e8ed27: jl     0x140e8f188
0x00e8ed2d: lea    rdx,[rip+0x8bd00c]        # 0x14174bd40 ; literal="The ending of each line "
0x00e8ed34: lea    rcx,[rbp+0x28]
0x00e8ed38: call   0x140070b20
0x00e8ed3d: mov    rcx,QWORD PTR [rsp+0x68]
0x00e8ed42: call   0x140070410
0x00e8ed47: lea    rcx,[rbp+0x28]
0x00e8ed4b: cmp    rax,0x1
0x00e8ed4f: jne    0x140e8ed62
0x00e8ed51: lea    rdx,[rip+0x8bd030]        # 0x14174bd88 ; literal="of the poem"
0x00e8ed58: call   0x140070b20
0x00e8ed5d: jmp    0x140e8f188
0x00e8ed62: cmp    BYTE PTR [rsp+0x31],0x0
0x00e8ed67: jne    0x140e8edc3
0x00e8ed69: lea    rdx,[rip+0x8bd010]        # 0x14174bd80 ; literal="of the "
0x00e8ed70: call   0x140070b20
0x00e8ed75: lea    rcx,[rbp+0x68]
0x00e8ed79: call   0x140070c50
0x00e8ed7e: nop
0x00e8ed7f: mov    ecx,DWORD PTR [rsp+0x50]
0x00e8ed83: inc    ecx
0x00e8ed85: xor    r8d,r8d
0x00e8ed88: lea    rdx,[rbp+0x68]
0x00e8ed8c: call   0x140545850
0x00e8ed91: lea    rcx,[rbp+0x68]
0x00e8ed95: call   0x140543d60
0x00e8ed9a: lea    rdx,[rbp+0x68]
0x00e8ed9e: lea    rcx,[rbp+0x28]
0x00e8eda2: call   0x1400bb2d0
0x00e8eda7: lea    rdx,[rip+0x775c9e]        # 0x141604a4c ; literal=" part"
0x00e8edae: lea    rcx,[rbp+0x28]
0x00e8edb2: call   0x140070b20
0x00e8edb7: nop
0x00e8edb8: lea    rcx,[rbp+0x68]
0x00e8edbc: call   0x1400693f0
0x00e8edc1: jmp    0x140e8edcf
0x00e8edc3: lea    rdx,[rip+0x8bd5be]        # 0x14174c388 ; literal="of this part"
0x00e8edca: call   0x140070b20
0x00e8edcf: lea    rdx,[rip+0x8bd592]        # 0x14174c368 ; literal=" shares the same rhyme.  "
0x00e8edd6: lea    rcx,[rbp+0x28]
0x00e8edda: call   0x140070b20
0x00e8eddf: jmp    0x140e8f188
0x00e8ede4: mov    r12,rdx
0x00e8ede7: mov    r8d,0x11
0x00e8eded: lea    rdx,[rip+0x8bd5c4]        # 0x14174c3b8 ; literal="The rhyme scheme "
0x00e8edf4: lea    rcx,[rbp+0x28]
0x00e8edf8: call   0x140070fd0
0x00e8edfd: mov    rcx,QWORD PTR [rsp+0x68]
0x00e8ee02: mov    rax,QWORD PTR [rcx+0x8]
0x00e8ee06: sub    rax,QWORD PTR [rcx]
0x00e8ee09: and    rax,0xfffffffffffffff8
0x00e8ee0d: cmp    rax,0x8
0x00e8ee11: jne    0x140e8ee1f
0x00e8ee13: lea    rdx,[rip+0x8bcf6e]        # 0x14174bd88 ; literal="of the poem"
0x00e8ee1a: jmp    0x140e8ef27
0x00e8ee1f: mov    ecx,DWORD PTR [r12]
0x00e8ee23: mov    eax,ecx
0x00e8ee25: and    eax,0x1
0x00e8ee28: cmp    BYTE PTR [rsp+0x31],0x0
0x00e8ee2d: jne    0x140e8eee8
0x00e8ee33: test   eax,eax
0x00e8ee35: jne    0x140e8ee63
0x00e8ee37: test   cl,0x4
0x00e8ee3a: je     0x140e8ee45
0x00e8ee3c: lea    rdx,[rip+0x8bd555]        # 0x14174c398 ; literal="repeating in each stanza of"
0x00e8ee43: jmp    0x140e8ee6a
0x00e8ee45: lea    rcx,[rbp+0x28]
0x00e8ee49: cmp    DWORD PTR [r12+0x8],0x2
0x00e8ee4f: jl     0x140e8ee5a
0x00e8ee51: lea    rdx,[rip+0x8bd4c0]        # 0x14174c318 ; literal="within each stanza of"
0x00e8ee58: jmp    0x140e8ee6e
0x00e8ee5a: lea    rdx,[rip+0x8bd4ab]        # 0x14174c30c ; literal="within"
0x00e8ee61: jmp    0x140e8ee6e
0x00e8ee63: lea    rdx,[rip+0x86e7be]        # 0x1416fd628 ; literal="of"
0x00e8ee6a: lea    rcx,[rbp+0x28]
0x00e8ee6e: call   0x140070b20
0x00e8ee73: lea    rdx,[rip+0x770922]        # 0x1415ff79c ; literal=" the "
0x00e8ee7a: lea    rcx,[rbp+0x28]
0x00e8ee7e: call   0x140070b20
0x00e8ee83: lea    rcx,[rbp+0x68]
0x00e8ee87: call   0x140070c50
0x00e8ee8c: nop
0x00e8ee8d: mov    ecx,DWORD PTR [rsp+0x50]
0x00e8ee91: inc    ecx
0x00e8ee93: xor    r8d,r8d
0x00e8ee96: lea    rdx,[rbp+0x68]
0x00e8ee9a: call   0x140545850
0x00e8ee9f: lea    rcx,[rbp+0x68]
0x00e8eea3: call   0x140543d60
0x00e8eea8: lea    rdx,[rbp+0x68]
0x00e8eeac: lea    rcx,[rbp+0x28]
0x00e8eeb0: call   0x1400bb2d0
0x00e8eeb5: lea    rdx,[rip+0x775b90]        # 0x141604a4c ; literal=" part"
0x00e8eebc: lea    rcx,[rbp+0x28]
0x00e8eec0: call   0x140070b20
0x00e8eec5: test   BYTE PTR [r12],0x1
0x00e8eeca: je     0x140e8eedd
0x00e8eecc: lea    rdx,[rip+0x76fa99]        # 0x1415fe96c ; literal=" "
0x00e8eed3: lea    rcx,[rbp+0x28]
0x00e8eed7: call   0x140070b20
0x00e8eedc: nop
0x00e8eedd: lea    rcx,[rbp+0x68]
0x00e8eee1: call   0x1400693f0
0x00e8eee6: jmp    0x140e8ef19
0x00e8eee8: test   eax,eax
0x00e8eeea: jne    0x140e8ef19
0x00e8eeec: test   cl,0x4
0x00e8eeef: je     0x140e8eefa
0x00e8eef1: lea    rdx,[rip+0x8bd450]        # 0x14174c348 ; literal="repeating in each stanza"
0x00e8eef8: jmp    0x140e8ef10
0x00e8eefa: cmp    DWORD PTR [r12+0x8],0x2
0x00e8ef00: lea    rdx,[rip+0x8bd429]        # 0x14174c330 ; literal="within each stanza"
0x00e8ef07: jge    0x140e8ef10
0x00e8ef09: lea    rdx,[rip+0x8bd560]        # 0x14174c470 ; literal="within this stanza"
0x00e8ef10: lea    rcx,[rbp+0x28]
0x00e8ef14: call   0x140070b20
0x00e8ef19: test   BYTE PTR [r12],0x1
0x00e8ef1e: je     0x140e8ef30
0x00e8ef20: lea    rdx,[rip+0x8bd529]        # 0x14174c450 ; literal="respecting the full poem"
0x00e8ef27: lea    rcx,[rbp+0x28]
0x00e8ef2b: call   0x140070b20
0x00e8ef30: mov    r8d,0x4
0x00e8ef36: lea    rdx,[rip+0x77efaf]        # 0x14160deec ; literal=" is "
0x00e8ef3d: lea    rcx,[rbp+0x28]
0x00e8ef41: call   0x140070fd0
0x00e8ef46: movdqa XMMWORD PTR [rbp+0x200],xmm6
0x00e8ef4e: movdqa XMMWORD PTR [rbp+0x210],xmm6
0x00e8ef56: movdqa XMMWORD PTR [rbp+0x220],xmm6
0x00e8ef5e: movdqa XMMWORD PTR [rbp+0x230],xmm6
0x00e8ef66: movdqa XMMWORD PTR [rbp+0x240],xmm6
0x00e8ef6e: movdqa XMMWORD PTR [rbp+0x250],xmm6
0x00e8ef76: mov    QWORD PTR [rbp+0x260],0xffffffffffffffff
0x00e8ef81: xor    eax,eax
0x00e8ef83: mov    r15d,eax
0x00e8ef86: mov    r14d,0x1
0x00e8ef8c: lea    r8,[r12+0x20]
0x00e8ef91: mov    rdx,QWORD PTR [r8]
0x00e8ef94: lea    rcx,[rsp+0x60]
0x00e8ef99: call   0x140070d00
0x00e8ef9e: lea    r8,[r12+0x20]
0x00e8efa3: mov    rdx,QWORD PTR [r8+0x8]
0x00e8efa7: lea    rcx,[rbp+0x20]
0x00e8efab: call   0x140070d00
0x00e8efb0: mov    r9d,DWORD PTR [rsp+0x4c]
0x00e8efb5: mov    esi,DWORD PTR [rbp-0x54]
0x00e8efb8: mov    rdi,QWORD PTR [rsp+0x68]
0x00e8efbd: mov    ebx,0xff
0x00e8efc2: mov    r8d,r9d
0x00e8efc5: mov    rax,QWORD PTR [rsp+0x60]
0x00e8efca: cmp    rax,QWORD PTR [rbp+0x20]
0x00e8efce: je     0x140e8f110
0x00e8efd4: mov    edx,0x1
0x00e8efd9: cmovb  edx,ebx
0x00e8efdc: test   dl,dl
0x00e8efde: jns    0x140e8f110
0x00e8efe4: cmp    r14d,DWORD PTR [r12+0x10]
0x00e8efe9: jne    0x140e8f02b
0x00e8efeb: movsxd rax,DWORD PTR [r12+0x18]
0x00e8eff0: mov    edx,DWORD PTR [rbp+rax*4+0x108]
0x00e8eff7: cmp    edx,0xffffffff
0x00e8effa: jne    0x140e8f00f
0x00e8effc: mov    DWORD PTR [rbp+rax*4+0x108],r9d
0x00e8f004: inc    r9d
0x00e8f007: mov    DWORD PTR [rsp+0x4c],r9d
0x00e8f00c: mov    edx,r8d
0x00e8f00f: add    dl,0x31
0x00e8f012: lea    rcx,[rbp+0x28]
0x00e8f016: call   0x1400bb140
0x00e8f01b: mov    r9d,DWORD PTR [rsp+0x4c]
0x00e8f020: add    QWORD PTR [rsp+0x60],0x4
0x00e8f026: inc    r14d
0x00e8f029: jmp    0x140e8efc2
0x00e8f02b: cmp    r14d,DWORD PTR [r12+0x14]
0x00e8f030: jne    0x140e8f039
0x00e8f032: movsxd rax,DWORD PTR [r12+0x1c]
0x00e8f037: jmp    0x140e8eff0
0x00e8f039: mov    rax,QWORD PTR [rsp+0x60]
0x00e8f03e: mov    ecx,DWORD PTR [rax]
0x00e8f040: test   ecx,ecx
0x00e8f042: js     0x140e8f102
0x00e8f048: cmp    ecx,0x1a
0x00e8f04b: jge    0x140e8f102
0x00e8f051: test   BYTE PTR [r12],0x1
0x00e8f056: jne    0x140e8f0af
0x00e8f058: mov    rcx,rdi
0x00e8f05b: call   0x140070410
0x00e8f060: cmp    rax,0x1
0x00e8f064: je     0x140e8f0af
0x00e8f066: lea    rcx,[rsp+0x60]
0x00e8f06b: call   0x1400703d0
0x00e8f070: movsxd rcx,DWORD PTR [rax]
0x00e8f073: cmp    DWORD PTR [rbp+rcx*4+0x200],0xffffffff
0x00e8f07b: jne    0x140e8f095
0x00e8f07d: lea    rcx,[rsp+0x60]
0x00e8f082: call   0x1400703d0
0x00e8f087: movsxd rcx,DWORD PTR [rax]
0x00e8f08a: mov    DWORD PTR [rbp+rcx*4+0x200],r15d
0x00e8f092: inc    r15d
0x00e8f095: lea    rcx,[rsp+0x60]
0x00e8f09a: call   0x1400703d0
0x00e8f09f: movsxd rcx,DWORD PTR [rax]
0x00e8f0a2: movzx  edx,BYTE PTR [rbp+rcx*4+0x200]
0x00e8f0aa: add    dl,0x61
0x00e8f0ad: jmp    0x140e8f0f4
0x00e8f0af: lea    rcx,[rsp+0x60]
0x00e8f0b4: call   0x1400703d0
0x00e8f0b9: movsxd rcx,DWORD PTR [rax]
0x00e8f0bc: cmp    DWORD PTR [rbp+rcx*4+0x130],0xffffffff
0x00e8f0c4: jne    0x140e8f0dc
0x00e8f0c6: lea    rcx,[rsp+0x60]
0x00e8f0cb: call   0x1400703d0
0x00e8f0d0: movsxd rcx,DWORD PTR [rax]
0x00e8f0d3: mov    DWORD PTR [rbp+rcx*4+0x130],esi
0x00e8f0da: inc    esi
0x00e8f0dc: lea    rcx,[rsp+0x60]
0x00e8f0e1: call   0x1400703d0
0x00e8f0e6: movsxd rcx,DWORD PTR [rax]
0x00e8f0e9: movzx  edx,BYTE PTR [rbp+rcx*4+0x130]
0x00e8f0f1: add    dl,0x41
0x00e8f0f4: lea    rcx,[rbp+0x28]
0x00e8f0f8: call   0x1400bb2f0
0x00e8f0fd: mov    r9d,DWORD PTR [rsp+0x4c]
0x00e8f102: add    QWORD PTR [rsp+0x60],0x4
0x00e8f108: inc    r14d
0x00e8f10b: jmp    0x140e8efc2
0x00e8f110: mov    DWORD PTR [rbp-0x54],esi
0x00e8f113: movzx  r14d,BYTE PTR [rsp+0x33]
0x00e8f119: test   r14b,r14b
0x00e8f11c: movzx  ebx,BYTE PTR [rsp+0x30]
0x00e8f121: movzx  edi,BYTE PTR [rsp+0x30]
0x00e8f126: movzx  esi,BYTE PTR [rsp+0x30]
0x00e8f12b: jne    0x140e8f156
0x00e8f12d: cmp    DWORD PTR [r12+0x18],0xffffffff
0x00e8f133: jne    0x140e8f13d
0x00e8f135: cmp    DWORD PTR [r12+0x1c],0xffffffff
0x00e8f13b: je     0x140e8f156
0x00e8f13d: mov    r8d,0x22
0x00e8f143: lea    rdx,[rip+0x8bd39e]        # 0x14174c4e8 ; literal=", where numbers indicate a refrain"
0x00e8f14a: lea    rcx,[rbp+0x28]
0x00e8f14e: call   0x140070fd0
0x00e8f153: mov    r14b,0x1
0x00e8f156: mov    BYTE PTR [rsp+0x33],r14b
0x00e8f15b: mov    r8d,0x3
0x00e8f161: lea    rdx,[rip+0x785518]        # 0x141614680 ; literal=".  "
0x00e8f168: lea    rcx,[rbp+0x28]
0x00e8f16c: call   0x140070fd0
0x00e8f171: mov    eax,DWORD PTR [rsp+0x4c]
0x00e8f175: mov    DWORD PTR [rsp+0x4c],eax
0x00e8f179: mov    eax,DWORD PTR [rbp-0x54]
0x00e8f17c: mov    DWORD PTR [rbp-0x54],eax
0x00e8f17f: test   r13b,r13b
0x00e8f182: je     0x140e8ece7
0x00e8f188: mov    rax,QWORD PTR [rbp-0x60]
0x00e8f18c: test   BYTE PTR [rax+0xe4],0x2
0x00e8f193: je     0x140e8f1b9
0x00e8f195: cmp    BYTE PTR [rsp+0x32],0x0
0x00e8f19a: jne    0x140e8f1da
0x00e8f19c: mov    r8d,0x50
0x00e8f1a2: lea    rdx,[rip+0x8bd2e7]        # 0x14174c490 ; literal="As a rule throughout the poem, the end rhymes don't generally match perfectly.  "
0x00e8f1a9: lea    rcx,[rbp+0x28]
0x00e8f1ad: call   0x140070fd0
0x00e8f1b2: mov    BYTE PTR [rsp+0x32],0x1
0x00e8f1b7: jmp    0x140e8f1da
0x00e8f1b9: test   BYTE PTR [r12+0x194],0x2
0x00e8f1c2: je     0x140e8f1da
0x00e8f1c4: mov    r8d,0x49
0x00e8f1ca: lea    rdx,[rip+0x8bd20f]        # 0x14174c3e0 ; literal="In this part of the poem, the end rhymes don't need to match perfectly.  "
0x00e8f1d1: lea    rcx,[rbp+0x28]
0x00e8f1d5: call   0x140070fd0
0x00e8f1da: mov    rdx,QWORD PTR [r12+0x80]
0x00e8f1e2: mov    rax,QWORD PTR [r12+0x88]
0x00e8f1ea: sub    rax,rdx
0x00e8f1ed: sar    rax,0x2
0x00e8f1f1: test   rax,rax
0x00e8f1f4: je     0x140e8ece7
0x00e8f1fa: xor    eax,eax
0x00e8f1fc: mov    r14d,eax
0x00e8f1ff: lea    r8,[r12+0x80]
0x00e8f207: lea    rcx,[rbp+0x8]
0x00e8f20b: call   0x140070d00
0x00e8f210: lea    r8,[r12+0x80]
0x00e8f218: mov    rdx,QWORD PTR [r12+0x88]
0x00e8f220: lea    rcx,[rbp-0x28]
0x00e8f224: call   0x140070d00
0x00e8f229: mov    rcx,QWORD PTR [rbp-0x28]
0x00e8f22d: mov    rax,QWORD PTR [rbp+0x8]
0x00e8f231: mov    r8d,0xff
0x00e8f237: mov    r15d,0x1
0x00e8f23d: nop    DWORD PTR [rax]
0x00e8f240: cmp    rax,rcx
0x00e8f243: je     0x140e8f262
0x00e8f245: mov    edx,r15d
0x00e8f248: cmovb  edx,r8d
0x00e8f24c: test   dl,dl
0x00e8f24e: jns    0x140e8f262
0x00e8f250: test   BYTE PTR [rax],0x2
0x00e8f253: je     0x140e8f258
0x00e8f255: inc    r14d
0x00e8f258: add    rax,0x4
0x00e8f25c: mov    QWORD PTR [rbp+0x8],rax
0x00e8f260: jmp    0x140e8f240
0x00e8f262: test   r14d,r14d
0x00e8f265: jle    0x140e8f3ea
0x00e8f26b: mov    r12d,r14d
0x00e8f26e: mov    r8d,0x9
0x00e8f274: lea    rdx,[rip+0x8bd155]        # 0x14174c3d0 ; literal="The rhyme"
0x00e8f27b: lea    rcx,[rbp+0x28]
0x00e8f27f: call   0x140070fd0
0x00e8f284: cmp    r14d,0x2
0x00e8f288: jl     0x140e8f29d
0x00e8f28a: mov    r8,r15
0x00e8f28d: lea    rdx,[rip+0x770234]        # 0x1415ff4c8 ; literal="s"
0x00e8f294: lea    rcx,[rbp+0x28]
0x00e8f298: call   0x140070fd0
0x00e8f29d: mov    r8d,0x13
0x00e8f2a3: lea    rdx,[rip+0x8bc5ee]        # 0x14174b898 ; literal=" at the end of the "
0x00e8f2aa: lea    rcx,[rbp+0x28]
0x00e8f2ae: call   0x140070fd0
0x00e8f2b3: mov    r13,QWORD PTR [rsp+0x58]
0x00e8f2b8: lea    r8,[r13+0x80]
0x00e8f2bf: mov    rdx,QWORD PTR [r8]
0x00e8f2c2: lea    rcx,[rsp+0x78]
0x00e8f2c7: call   0x140070d00
0x00e8f2cc: lea    r8,[r13+0x80]
0x00e8f2d3: mov    rdx,QWORD PTR [r8+0x8]
0x00e8f2d7: lea    rcx,[rbp+0x10]
0x00e8f2db: call   0x140070d00
0x00e8f2e0: mov    rax,QWORD PTR [rsp+0x78]
0x00e8f2e5: mov    rcx,QWORD PTR [rbp+0x10]
0x00e8f2e9: mov    esi,0xff
0x00e8f2ee: mov    r13,r15
0x00e8f2f1: cmp    rax,rcx
0x00e8f2f4: je     0x140e8f38f
0x00e8f2fa: mov    edx,r13d
0x00e8f2fd: cmovb  edx,esi
0x00e8f300: test   dl,dl
0x00e8f302: jns    0x140e8f38f
0x00e8f308: test   BYTE PTR [rax],0x2
0x00e8f30b: je     0x140e8f37e
0x00e8f30d: movzx  edx,bl
0x00e8f310: lea    rcx,[rbp+0x48]
0x00e8f314: call   0x140069750
0x00e8f319: lea    rcx,[rbp+0x48]
0x00e8f31d: call   0x140071140
0x00e8f322: nop
0x00e8f323: xor    r8d,r8d
0x00e8f326: lea    rdx,[rbp+0x48]
0x00e8f32a: mov    ecx,r15d
0x00e8f32d: call   0x140545850
0x00e8f332: lea    rcx,[rbp+0x48]
0x00e8f336: call   0x140543d60
0x00e8f33b: lea    rdx,[rbp+0x48]
0x00e8f33f: lea    rcx,[rbp+0x28]
0x00e8f343: call   0x1400bb2d0
0x00e8f348: cmp    r14d,0x2
0x00e8f34c: jne    0x140e8f357
0x00e8f34e: lea    rdx,[rip+0x76ffeb]        # 0x1415ff340 ; literal=" and "
0x00e8f355: jmp    0x140e8f360
0x00e8f357: jle    0x140e8f369
0x00e8f359: lea    rdx,[rip+0x76ffa8]        # 0x1415ff308 ; literal=", "
0x00e8f360: lea    rcx,[rbp+0x28]
0x00e8f364: call   0x140070b20
0x00e8f369: dec    r14d
0x00e8f36c: lea    rcx,[rbp+0x48]
0x00e8f370: call   0x140070e10
0x00e8f375: mov    rax,QWORD PTR [rsp+0x78]
0x00e8f37a: mov    rcx,QWORD PTR [rbp+0x10]
0x00e8f37e: add    rax,0x4
0x00e8f382: mov    QWORD PTR [rsp+0x78],rax
0x00e8f387: inc    r15d
0x00e8f38a: jmp    0x140e8f2f1
0x00e8f38f: mov    r8,r13
0x00e8f392: lea    rdx,[rip+0x76f5d3]        # 0x1415fe96c ; literal=" "
0x00e8f399: lea    rcx,[rbp+0x28]
0x00e8f39d: call   0x140070fd0
0x00e8f3a2: lea    rcx,[rbp+0x28]
0x00e8f3a6: cmp    r12d,0x2
0x00e8f3aa: jl     0x140e8f3bb
0x00e8f3ac: mov    r8d,0xb
0x00e8f3b2: lea    rdx,[rip+0x8bc477]        # 0x14174b830 ; literal="lines don't"
0x00e8f3b9: jmp    0x140e8f3c8
0x00e8f3bb: mov    r8d,0xc
0x00e8f3c1: lea    rdx,[rip+0x8bc458]        # 0x14174b820 ; literal="line doesn't"
0x00e8f3c8: call   0x140070fd0
0x00e8f3cd: mov    r8d,0x1b
0x00e8f3d3: lea    rdx,[rip+0x8bd056]        # 0x14174c430 ; literal=" need to match perfectly.  "
0x00e8f3da: lea    rcx,[rbp+0x28]
0x00e8f3de: call   0x140070fd0
0x00e8f3e3: movzx  esi,BYTE PTR [rsp+0x30]
0x00e8f3e8: jmp    0x140e8f3ed
0x00e8f3ea: mov    r13,r15
0x00e8f3ed: mov    r14,QWORD PTR [rsp+0x68]
0x00e8f3f2: mov    r12,QWORD PTR [rbp-0x50]
0x00e8f3f6: cmp    QWORD PTR [rbp+0x38],0x0
0x00e8f3fb: je     0x140e8f430
0x00e8f3fd: mov    rax,QWORD PTR [r14+0x8]
0x00e8f401: sub    rax,QWORD PTR [r14]
0x00e8f404: sar    rax,0x3
0x00e8f408: cmp    rax,0x2
0x00e8f40c: jb     0x140e8f423
0x00e8f40e: mov    r8d,0x3
0x00e8f414: lea    rdx,[rip+0x784c91]        # 0x1416140ac ; literal="[B]"
0x00e8f41b: mov    rcx,r12
0x00e8f41e: call   0x140070fd0
0x00e8f423: lea    rdx,[rbp+0x28]
0x00e8f427: mov    rcx,r12
0x00e8f42a: call   0x1400bb2d0
0x00e8f42f: nop
0x00e8f430: lea    rcx,[rbp+0x28]
0x00e8f434: call   0x140070e10
0x00e8f439: mov    rcx,QWORD PTR [rbp-0x80]
0x00e8f43d: add    rcx,0x8
0x00e8f441: inc    DWORD PTR [rsp+0x50]
0x00e8f445: inc    DWORD PTR [rbp-0x40]
0x00e8f448: inc    DWORD PTR [rbp-0x3c]
0x00e8f44b: jmp    0x140e8b86c
0x00e8f450: lea    rcx,[rbp+0xe8]
0x00e8f457: call   0x1400693f0
0x00e8f45c: mov    rcx,QWORD PTR [rbp+0x2d0]
0x00e8f463: xor    rcx,rsp
0x00e8f466: call   0x14154de00
0x00e8f46b: mov    rbx,QWORD PTR [rsp+0x440]
0x00e8f473: movaps xmm6,XMMWORD PTR [rsp+0x3e0]
0x00e8f47b: add    rsp,0x3f0
0x00e8f482: pop    r15
0x00e8f484: pop    r14
0x00e8f486: pop    r13
0x00e8f488: pop    r12
0x00e8f48a: pop    rdi
0x00e8f48b: pop    rsi
0x00e8f48c: pop    rbp
0x00e8f48d: ret
0x00e8f48e: xchg   ax,ax
