; reference PE:6aea05a1:02734000; knowledge-poetic-form; RVA 0xe8e2e0..0xe94da8; code ends 0xe94740
0x00e8e2e0: mov    QWORD PTR [rsp+0x18],rbx
0x00e8e2e5: push   rbp
0x00e8e2e6: push   rsi
0x00e8e2e7: push   rdi
0x00e8e2e8: push   r12
0x00e8e2ea: push   r13
0x00e8e2ec: push   r14
0x00e8e2ee: push   r15
0x00e8e2f0: lea    rbp,[rsp-0x2f0]
0x00e8e2f8: sub    rsp,0x3f0
0x00e8e2ff: movaps XMMWORD PTR [rsp+0x3e0],xmm6
0x00e8e307: mov    rax,QWORD PTR [rip+0xa2fd32]        # 0x1418be040
0x00e8e30e: xor    rax,rsp
0x00e8e311: mov    QWORD PTR [rbp+0x2d0],rax
0x00e8e318: mov    r12,rdx
0x00e8e31b: mov    QWORD PTR [rbp-0x50],rdx
0x00e8e31f: mov    r13,rcx
0x00e8e322: mov    QWORD PTR [rbp-0x60],rcx
0x00e8e326: lea    rcx,[rbp+0xe8]
0x00e8e32d: call   0x140070cc0
0x00e8e332: nop
0x00e8e333: lea    rcx,[r13+0x8]
0x00e8e337: xor    r9d,r9d
0x00e8e33a: mov    r8b,0x1
0x00e8e33d: lea    rdx,[rbp+0xe8]
0x00e8e344: call   0x140aae180
0x00e8e349: lea    rdx,[rbp+0xe8]
0x00e8e350: mov    rcx,r12
0x00e8e353: call   0x1400bb340
0x00e8e358: lea    rdx,[rip+0x77baed]        # 0x141609e4c ; literal=" is"
0x00e8e35f: mov    rcx,r12
0x00e8e362: call   0x140070b90
0x00e8e367: mov    ecx,DWORD PTR [r13+0xd0]
0x00e8e36e: sub    ecx,0x1
0x00e8e371: je     0x140e8e3b7
0x00e8e373: sub    ecx,0x1
0x00e8e376: je     0x140e8e3ae
0x00e8e378: sub    ecx,0x2
0x00e8e37b: mov    r14,r12
0x00e8e37e: je     0x140e8e3a5
0x00e8e380: sub    ecx,0x1
0x00e8e383: je     0x140e8e39c
0x00e8e385: cmp    ecx,0x1
0x00e8e388: je     0x140e8e393
0x00e8e38a: lea    rdx,[rip+0x7d6f6b]        # 0x1416652fc ; literal=" a"
0x00e8e391: jmp    0x140e8e3c1
0x00e8e393: lea    rdx,[rip+0x8c1ede]        # 0x141750278 ; literal=" a solemn"
0x00e8e39a: jmp    0x140e8e3c1
0x00e8e39c: lea    rdx,[rip+0x8c1ee5]        # 0x141750288 ; literal=" a light"
0x00e8e3a3: jmp    0x140e8e3c1
0x00e8e3a5: lea    rdx,[rip+0x8c1f34]        # 0x1417502e0 ; literal=" a ribald"
0x00e8e3ac: jmp    0x140e8e3c1
0x00e8e3ae: lea    rdx,[rip+0x8c1f3b]        # 0x1417502f0 ; literal=" a reflective"
0x00e8e3b5: jmp    0x140e8e3be
0x00e8e3b7: lea    rdx,[rip+0x8c1efa]        # 0x1417502b8 ; literal=" a dramatic"
0x00e8e3be: mov    r14,r12
0x00e8e3c1: mov    rcx,r14
0x00e8e3c4: call   0x140070b90
0x00e8e3c9: lea    rdx,[rip+0x8c1ed8]        # 0x1417502a8 ; literal=" poetic "
0x00e8e3d0: mov    rcx,r12
0x00e8e3d3: call   0x140070b90
0x00e8e3d8: mov    eax,DWORD PTR [r13+0xd0]
0x00e8e3df: cmp    eax,0x3
0x00e8e3e2: jne    0x140e8e3ed
0x00e8e3e4: lea    rdx,[rip+0x800901]        # 0x14168ecec ; literal="riddle"
0x00e8e3eb: jmp    0x140e8e401
0x00e8e3ed: lea    rdx,[rip+0x8c1ea4]        # 0x141750298 ; literal="narrative"
0x00e8e3f4: lea    rcx,[rip+0x8c1f69]        # 0x141750364 ; literal="form"
0x00e8e3fb: test   eax,eax
0x00e8e3fd: cmovne rdx,rcx
0x00e8e401: mov    rcx,r14
0x00e8e404: call   0x140070b90
0x00e8e409: lea    r15,[rip+0xffffffffff171bf0]        # 0x140000000
0x00e8e410: lea    rbx,[rip+0x7755d9]        # 0x1416039f0 ; literal=" "
0x00e8e417: cmp    DWORD PTR [r13+0xdc],0xffffffff
0x00e8e41f: je     0x140e8e60c
0x00e8e425: xor    dil,dil
0x00e8e428: xor    bl,bl
0x00e8e42a: lea    rdx,[rip+0x8c1f27]        # 0x141750358 ; literal=" intended "
0x00e8e431: mov    rcx,r12
0x00e8e434: call   0x140070b90
0x00e8e439: movsxd rax,DWORD PTR [r13+0xdc]
0x00e8e440: cmp    eax,0x16
0x00e8e443: ja     0x140e8e546
0x00e8e449: mov    ecx,DWORD PTR [r15+rax*4+0xe94740]
0x00e8e451: add    rcx,r15
0x00e8e454: jmp    rcx
0x00e8e456: lea    rdx,[rip+0x8c1f23]        # 0x141750380 ; literal="to describe"
0x00e8e45d: mov    rcx,r12
0x00e8e460: call   0x140070b90
0x00e8e465: mov    dil,0x1
0x00e8e468: jmp    0x140e8e546
0x00e8e46d: lea    rdx,[rip+0x8c1efc]        # 0x141750370 ; literal="to satirize"
0x00e8e474: mov    rcx,r12
0x00e8e477: call   0x140070b90
0x00e8e47c: mov    dil,0x1
0x00e8e47f: jmp    0x140e8e546
0x00e8e484: lea    rdx,[rip+0x8c1e8d]        # 0x141750318 ; literal="to amuse the audience"
0x00e8e48b: jmp    0x140e8e53c
0x00e8e490: lea    rdx,[rip+0x8c1e69]        # 0x141750300 ; literal="to complain about"
0x00e8e497: mov    rcx,r12
0x00e8e49a: call   0x140070b90
0x00e8e49f: mov    dil,0x1
0x00e8e4a2: jmp    0x140e8e546
0x00e8e4a7: lea    rdx,[rip+0x8c1e9a]        # 0x141750348 ; literal="to renounce"
0x00e8e4ae: mov    rcx,r12
0x00e8e4b1: call   0x140070b90
0x00e8e4b6: jmp    0x140e8e546
0x00e8e4bb: lea    rdx,[rip+0x8c1e6e]        # 0x141750330 ; literal="to make an apology"
0x00e8e4c2: jmp    0x140e8e53c
0x00e8e4c4: lea    rdx,[rip+0x8c1f3d]        # 0x141750408 ; literal="to express pleasure with"
0x00e8e4cb: mov    rcx,r12
0x00e8e4ce: call   0x140070b90
0x00e8e4d3: mov    dil,0x1
0x00e8e4d6: jmp    0x140e8e546
0x00e8e4d8: lea    rdx,[rip+0x8c1f11]        # 0x1417503f0 ; literal="to express grief over"
0x00e8e4df: mov    rcx,r12
0x00e8e4e2: call   0x140070b90
0x00e8e4e7: mov    dil,0x1
0x00e8e4ea: jmp    0x140e8e546
0x00e8e4ec: lea    rdx,[rip+0x8c1f45]        # 0x141750438 ; literal="to praise"
0x00e8e4f3: mov    rcx,r12
0x00e8e4f6: call   0x140070b90
0x00e8e4fb: mov    dil,0x1
0x00e8e4fe: jmp    0x140e8e546
0x00e8e500: lea    rdx,[rip+0x8c1f21]        # 0x141750428 ; literal="to beseech"
0x00e8e507: mov    rcx,r12
0x00e8e50a: call   0x140070b90
0x00e8e50f: jmp    0x140e8e546
0x00e8e511: lea    rdx,[rip+0x8c1e90]        # 0x1417503a8 ; literal="to teach a moral lesson"
0x00e8e518: jmp    0x140e8e53c
0x00e8e51a: lea    rdx,[rip+0x8c1e6f]        # 0x141750390 ; literal="to make an assertion"
0x00e8e521: jmp    0x140e8e53c
0x00e8e523: lea    rdx,[rip+0x8c1eae]        # 0x1417503d8 ; literal="to make a concession"
0x00e8e52a: jmp    0x140e8e53c
0x00e8e52c: lea    rdx,[rip+0x8c1e8d]        # 0x1417503c0 ; literal="to console the audience"
0x00e8e533: jmp    0x140e8e53c
0x00e8e535: lea    rdx,[rip+0x8c1fe4]        # 0x141750520 ; literal="to refuse consolation"
0x00e8e53c: mov    rcx,r12
0x00e8e53f: call   0x140070b90
0x00e8e544: mov    bl,0x1
0x00e8e546: cmp    DWORD PTR [r13+0xd4],0xffffffff
0x00e8e54e: je     0x140e8e58d
0x00e8e550: test   bl,bl
0x00e8e552: je     0x140e8e563
0x00e8e554: lea    rdx,[rip+0x8c1fb5]        # 0x141750510 ; literal=" concerning"
0x00e8e55b: mov    rcx,r12
0x00e8e55e: call   0x140070b90
0x00e8e563: lea    rbx,[rip+0x775486]        # 0x1416039f0 ; literal=" "
0x00e8e56a: mov    rdx,rbx
0x00e8e56d: mov    rcx,r12
0x00e8e570: call   0x140070b90
0x00e8e575: mov    r8d,DWORD PTR [r13+0xd8]
0x00e8e57c: mov    edx,DWORD PTR [r13+0xd4]
0x00e8e583: mov    rcx,r12
0x00e8e586: call   0x140e8df60
0x00e8e58b: jmp    0x140e8e5a8
0x00e8e58d: test   dil,dil
0x00e8e590: je     0x140e8e5a1
0x00e8e592: lea    rdx,[rip+0x8c1faf]        # 0x141750548 ; literal=" a chosen subject"
0x00e8e599: mov    rcx,r12
0x00e8e59c: call   0x140070b90
0x00e8e5a1: lea    rbx,[rip+0x775448]        # 0x1416039f0 ; literal=" "
0x00e8e5a8: mov    edx,DWORD PTR [r13+0x80]
0x00e8e5af: xor    esi,esi
0x00e8e5b1: mov    edi,0x1
0x00e8e5b6: cmp    edx,0xffffffff
0x00e8e5b9: je     0x140e8e622
0x00e8e5bb: lea    rcx,[rip+0x15656b6]        # 0x1423f3c78
0x00e8e5c2: call   0x14007f120
0x00e8e5c7: mov    ecx,esi
0x00e8e5c9: test   rax,rax
0x00e8e5cc: je     0x140e8e5d5
0x00e8e5ce: cmp    WORD PTR [rax],0x8
0x00e8e5d2: sete   cl
0x00e8e5d5: lea    rax,[rip+0x8c1ed4]        # 0x1417504b0 ; literal=", originating in "
0x00e8e5dc: lea    rdx,[rip+0x7d754d]        # 0x141665b30 ; literal=" which grew out of the performances of "
0x00e8e5e3: test   ecx,ecx
0x00e8e5e5: cmove  rdx,rax
0x00e8e5e9: mov    rcx,r14
0x00e8e5ec: call   0x140070b90
0x00e8e5f1: xor    r9d,r9d
0x00e8e5f4: mov    r8d,DWORD PTR [r13+0x80]
0x00e8e5fb: mov    rdx,r12
0x00e8e5fe: lea    rcx,[rip+0x168db33]        # 0x14251c138
0x00e8e605: call   0x140baa5c0
0x00e8e60a: jmp    0x140e8e66e
0x00e8e60c: cmp    DWORD PTR [r13+0xd4],0xffffffff
0x00e8e614: je     0x140e8e5a8
0x00e8e616: lea    rdx,[rip+0x8c1f1b]        # 0x141750538 ; literal=" concerning "
0x00e8e61d: jmp    0x140e8e56d
0x00e8e622: cmp    DWORD PTR [r13+0x84],0xffffffff
0x00e8e62a: je     0x140e8e66e
0x00e8e62c: lea    rcx,[rbp+0x130]
0x00e8e633: call   0x1400736b0
0x00e8e638: lea    rdx,[rip+0x7d7531]        # 0x141665b70 ; literal=" originally devised by "
0x00e8e63f: mov    rcx,r12
0x00e8e642: call   0x140070b90
0x00e8e647: mov    WORD PTR [rsp+0x28],si
0x00e8e64c: mov    WORD PTR [rsp+0x20],di
0x00e8e651: lea    r9,[rbp+0x130]
0x00e8e658: mov    r8d,DWORD PTR [r13+0x84]
0x00e8e65f: mov    rdx,r12
0x00e8e662: lea    rcx,[rip+0x168dacf]        # 0x14251c138
0x00e8e669: call   0x140baabd0
0x00e8e66e: lea    rdx,[rip+0x78af23]        # 0x141619598 ; literal=".  "
0x00e8e675: mov    rcx,r12
0x00e8e678: call   0x140070b90
0x00e8e67d: test   BYTE PTR [r13+0x8c],0x2
0x00e8e685: lea    rax,[rip+0x8c1e4c]        # 0x1417504d8 ; literal="The form guides poets during improvised performances.  "
0x00e8e68c: lea    rdx,[rip+0x8c1dbd]        # 0x141750450 ; literal="The rules of the form are applied by poets to produce individual poems which can be recited.  "
0x00e8e693: cmove  rdx,rax
0x00e8e697: mov    rcx,r14
0x00e8e69a: call   0x140070b90
0x00e8e69f: lea    rdx,[rip+0x8c1e22]        # 0x1417504c8 ; literal="The poem "
0x00e8e6a6: mov    rcx,r12
0x00e8e6a9: call   0x140070b90
0x00e8e6ae: lea    rsi,[r13+0x90]
0x00e8e6b5: mov    rcx,rsi
0x00e8e6b8: call   0x140070480
0x00e8e6bd: cmp    rax,0x2
0x00e8e6c1: jne    0x140e8ec55
0x00e8e6c7: lea    rdx,[rip+0x8c1ed2]        # 0x1417505a0 ; literal="is divided into "
0x00e8e6ce: mov    rcx,r12
0x00e8e6d1: call   0x140070b90
0x00e8e6d6: xor    edx,edx
0x00e8e6d8: mov    rcx,rsi
0x00e8e6db: call   0x140070850
0x00e8e6e0: mov    rcx,QWORD PTR [rax]
0x00e8e6e3: mov    ebx,DWORD PTR [rcx+0xc]
0x00e8e6e6: mov    rdx,rdi
0x00e8e6e9: mov    rcx,rsi
0x00e8e6ec: call   0x140070850
0x00e8e6f1: mov    rcx,QWORD PTR [rax]
0x00e8e6f4: cmp    ebx,DWORD PTR [rcx+0xc]
0x00e8e6f7: jne    0x140e8e859
0x00e8e6fd: xor    edx,edx
0x00e8e6ff: mov    rcx,rsi
0x00e8e702: call   0x140070850
0x00e8e707: mov    rcx,QWORD PTR [rax]
0x00e8e70a: cmp    DWORD PTR [rcx+0x8],edi
0x00e8e70d: jne    0x140e8e859
0x00e8e713: mov    rdx,rdi
0x00e8e716: mov    rcx,rsi
0x00e8e719: call   0x140070850
0x00e8e71e: mov    rcx,QWORD PTR [rax]
0x00e8e721: cmp    DWORD PTR [rcx+0x8],edi
0x00e8e724: jne    0x140e8e859
0x00e8e72a: xor    edx,edx
0x00e8e72c: mov    rcx,rsi
0x00e8e72f: call   0x140070850
0x00e8e734: mov    rcx,QWORD PTR [rax]
0x00e8e737: test   BYTE PTR [rcx],0x2
0x00e8e73a: jne    0x140e8e859
0x00e8e740: mov    rdx,rdi
0x00e8e743: mov    rcx,rsi
0x00e8e746: call   0x140070850
0x00e8e74b: mov    rcx,QWORD PTR [rax]
0x00e8e74e: test   BYTE PTR [rcx],0x2
0x00e8e751: jne    0x140e8e859
0x00e8e757: lea    rdx,[rip+0x8c1e32]        # 0x141750590 ; literal="two distinct "
0x00e8e75e: mov    rcx,r12
0x00e8e761: call   0x140070b90
0x00e8e766: xor    edx,edx
0x00e8e768: mov    rcx,rsi
0x00e8e76b: call   0x140070850
0x00e8e770: mov    rbx,QWORD PTR [rax]
0x00e8e773: mov    eax,DWORD PTR [rbx+0xc]
0x00e8e776: cmp    eax,0x9
0x00e8e779: jl     0x140e8e7d6
0x00e8e77b: lea    rcx,[rbp+0x88]
0x00e8e782: call   0x140070cc0
0x00e8e787: nop
0x00e8e788: lea    rdx,[rbp+0x88]
0x00e8e78f: mov    ecx,DWORD PTR [rbx+0xc]
0x00e8e792: call   0x140547840
0x00e8e797: lea    rdx,[rbp+0x88]
0x00e8e79e: mov    rcx,r12
0x00e8e7a1: call   0x1400bb340
0x00e8e7a6: lea    rdx,[rip+0x8c1e13]        # 0x1417505c0 ; literal="-line stanza"
0x00e8e7ad: mov    rcx,r12
0x00e8e7b0: call   0x140070b90
0x00e8e7b5: nop
0x00e8e7b6: lea    rcx,[rbp+0x88]
0x00e8e7bd: call   0x140069460
0x00e8e7c2: lea    rdx,[rip+0x775d27]        # 0x1416044f0 ; literal="s"
0x00e8e7c9: mov    rcx,r12
0x00e8e7cc: call   0x140070b90
0x00e8e7d1: jmp    0x140e8f42e
0x00e8e7d6: cmp    eax,0x8
0x00e8e7d9: jne    0x140e8e7e4
0x00e8e7db: lea    rdx,[rip+0x8c1dd2]        # 0x1417505b4 ; literal="octet"
0x00e8e7e2: jmp    0x140e8e83d
0x00e8e7e4: cmp    eax,0x7
0x00e8e7e7: jne    0x140e8e7f2
0x00e8e7e9: lea    rdx,[rip+0x8c1d74]        # 0x141750564 ; literal="septet"
0x00e8e7f0: jmp    0x140e8e83d
0x00e8e7f2: cmp    eax,0x6
0x00e8e7f5: jne    0x140e8e800
0x00e8e7f7: lea    rdx,[rip+0x8c1d5e]        # 0x14175055c ; literal="sexain"
0x00e8e7fe: jmp    0x140e8e83d
0x00e8e800: cmp    eax,0x5
0x00e8e803: jne    0x140e8e80e
0x00e8e805: lea    rdx,[rip+0x8c1d74]        # 0x141750580 ; literal="quintain"
0x00e8e80c: jmp    0x140e8e83d
0x00e8e80e: cmp    eax,0x4
0x00e8e811: jne    0x140e8e81c
0x00e8e813: lea    rdx,[rip+0x8c1d56]        # 0x141750570 ; literal="quatrain"
0x00e8e81a: jmp    0x140e8e83d
0x00e8e81c: cmp    eax,0x3
0x00e8e81f: jne    0x140e8e82a
0x00e8e821: lea    rdx,[rip+0x8c1e10]        # 0x141750638 ; literal="tercet"
0x00e8e828: jmp    0x140e8e83d
0x00e8e82a: cmp    eax,0x2
0x00e8e82d: lea    rdx,[rip+0x8c1dfc]        # 0x141750630 ; literal="couplet"
0x00e8e834: je     0x140e8e83d
0x00e8e836: lea    rdx,[rip+0x818fdf]        # 0x1416a781c ; literal="line"
0x00e8e83d: mov    rcx,r12
0x00e8e840: call   0x140070b90
0x00e8e845: lea    rdx,[rip+0x775ca4]        # 0x1416044f0 ; literal="s"
0x00e8e84c: mov    rcx,r12
0x00e8e84f: call   0x140070b90
0x00e8e854: jmp    0x140e8f42e
0x00e8e859: xor    edi,edi
0x00e8e85b: lea    r13,[rip+0x8c1d6e]        # 0x1417505d0 ; literal=" series of"
0x00e8e862: movsxd rdx,edi
0x00e8e865: mov    rcx,rsi
0x00e8e868: call   0x140070850
0x00e8e86d: mov    rbx,QWORD PTR [rax]
0x00e8e870: xor    r15b,r15b
0x00e8e873: cmp    edi,0x1
0x00e8e876: jne    0x140e8e9bd
0x00e8e87c: xor    edx,edx
0x00e8e87e: mov    rcx,rsi
0x00e8e881: call   0x140070850
0x00e8e886: mov    rcx,QWORD PTR [rax]
0x00e8e889: mov    eax,DWORD PTR [rcx+0xc]
0x00e8e88c: cmp    DWORD PTR [rbx+0xc],eax
0x00e8e88f: je     0x140e8e8b0
0x00e8e891: test   BYTE PTR [rbx],0x2
0x00e8e894: je     0x140e8e9bd
0x00e8e89a: xor    edx,edx
0x00e8e89c: mov    rcx,rsi
0x00e8e89f: call   0x140070850
0x00e8e8a4: mov    rcx,QWORD PTR [rax]
0x00e8e8a7: test   BYTE PTR [rcx],0x2
0x00e8e8aa: je     0x140e8e9bd
0x00e8e8b0: lea    rdx,[rip+0x8c1da9]        # 0x141750660 ; literal="another"
0x00e8e8b7: mov    rcx,r12
0x00e8e8ba: call   0x140070b90
0x00e8e8bf: mov    eax,DWORD PTR [rbx+0x8]
0x00e8e8c2: cmp    eax,0xa
0x00e8e8c5: jl     0x140e8e8fb
0x00e8e8c7: cmp    eax,0x64
0x00e8e8ca: jl     0x140e8e8e0
0x00e8e8cc: lea    rdx,[rip+0x8c1d6d]        # 0x141750640 ; literal=" extremely long series of"
0x00e8e8d3: mov    rcx,r14
0x00e8e8d6: call   0x140070b90
0x00e8e8db: jmp    0x140e8eacc
0x00e8e8e0: lea    rdx,[rip+0x8c1cf9]        # 0x1417505e0 ; literal=" numerous series of"
0x00e8e8e7: cmp    eax,0x32
0x00e8e8ea: cmovl  rdx,r13
0x00e8e8ee: mov    rcx,r14
0x00e8e8f1: call   0x140070b90
0x00e8e8f6: jmp    0x140e8eacc
0x00e8e8fb: lea    rdx,[rip+0x7750ee]        # 0x1416039f0 ; literal=" "
0x00e8e902: mov    rcx,r12
0x00e8e905: cmp    DWORD PTR [rbx+0x4],eax
0x00e8e908: jne    0x140e8e940
0x00e8e90a: call   0x140070b90
0x00e8e90f: lea    rcx,[rbp+0x88]
0x00e8e916: call   0x140070cc0
0x00e8e91b: nop
0x00e8e91c: lea    rdx,[rbp+0x88]
0x00e8e923: mov    ecx,DWORD PTR [rbx+0x4]
0x00e8e926: call   0x140547840
0x00e8e92b: lea    rdx,[rbp+0x88]
0x00e8e932: mov    rcx,r12
0x00e8e935: call   0x1400bb340
0x00e8e93a: nop
0x00e8e93b: jmp    0x140e8eac0
0x00e8e940: call   0x140070b90
0x00e8e945: lea    rcx,[rbp+0x88]
0x00e8e94c: call   0x140070cc0
0x00e8e951: nop
0x00e8e952: lea    rdx,[rbp+0x88]
0x00e8e959: mov    ecx,DWORD PTR [rbx+0x4]
0x00e8e95c: call   0x140547840
0x00e8e961: lea    rdx,[rbp+0x88]
0x00e8e968: mov    rcx,r12
0x00e8e96b: call   0x1400bb340
0x00e8e970: nop
0x00e8e971: lea    rcx,[rbp+0x88]
0x00e8e978: call   0x140069460
0x00e8e97d: lea    rdx,[rip+0x779eb0]        # 0x141608834 ; literal=" to "
0x00e8e984: mov    rcx,r12
0x00e8e987: call   0x140070b90
0x00e8e98c: lea    rcx,[rbp+0x88]
0x00e8e993: call   0x140070cc0
0x00e8e998: nop
0x00e8e999: lea    rdx,[rbp+0x88]
0x00e8e9a0: mov    ecx,DWORD PTR [rbx+0x8]
0x00e8e9a3: call   0x140547840
0x00e8e9a8: lea    rdx,[rbp+0x88]
0x00e8e9af: mov    rcx,r12
0x00e8e9b2: call   0x1400bb340
0x00e8e9b7: nop
0x00e8e9b8: jmp    0x140e8eac0
0x00e8e9bd: mov    ecx,DWORD PTR [rbx+0x4]
0x00e8e9c0: cmp    ecx,0x1
0x00e8e9c3: jne    0x140e8e9e1
0x00e8e9c5: cmp    DWORD PTR [rbx+0x8],ecx
0x00e8e9c8: jne    0x140e8e9e1
0x00e8e9ca: lea    rdx,[rip+0x79011b]        # 0x14161eaec ; literal="a"
0x00e8e9d1: mov    rcx,r12
0x00e8e9d4: call   0x140070b90
0x00e8e9d9: mov    r15b,0x1
0x00e8e9dc: jmp    0x140e8eacc
0x00e8e9e1: mov    eax,DWORD PTR [rbx+0x8]
0x00e8e9e4: cmp    eax,0xa
0x00e8e9e7: jl     0x140e8ea22
0x00e8e9e9: cmp    eax,0x64
0x00e8e9ec: jl     0x140e8ea02
0x00e8e9ee: lea    rdx,[rip+0x8c1c1b]        # 0x141750610 ; literal="an extremely long series of"
0x00e8e9f5: mov    rcx,r12
0x00e8e9f8: call   0x140070b90
0x00e8e9fd: jmp    0x140e8eacc
0x00e8ea02: cmp    eax,0x32
0x00e8ea05: lea    rdx,[rip+0x8c1bec]        # 0x1417505f8 ; literal="numerous series of"
0x00e8ea0c: jge    0x140e8ea15
0x00e8ea0e: lea    rdx,[rip+0x8c1c8b]        # 0x1417506a0 ; literal="a series of"
0x00e8ea15: mov    rcx,r12
0x00e8ea18: call   0x140070b90
0x00e8ea1d: jmp    0x140e8eacc
0x00e8ea22: cmp    ecx,eax
0x00e8ea24: lea    rcx,[rbp+0x88]
0x00e8ea2b: jne    0x140e8ea54
0x00e8ea2d: call   0x140070cc0
0x00e8ea32: nop
0x00e8ea33: lea    rdx,[rbp+0x88]
0x00e8ea3a: mov    ecx,DWORD PTR [rbx+0x4]
0x00e8ea3d: call   0x140547840
0x00e8ea42: lea    rdx,[rbp+0x88]
0x00e8ea49: mov    rcx,r12
0x00e8ea4c: call   0x1400bb340
0x00e8ea51: nop
0x00e8ea52: jmp    0x140e8eac0
0x00e8ea54: call   0x140070cc0
0x00e8ea59: nop
0x00e8ea5a: lea    rdx,[rbp+0x88]
0x00e8ea61: mov    ecx,DWORD PTR [rbx+0x4]
0x00e8ea64: call   0x140547840
0x00e8ea69: lea    rdx,[rbp+0x88]
0x00e8ea70: mov    rcx,r12
0x00e8ea73: call   0x1400bb340
0x00e8ea78: nop
0x00e8ea79: lea    rcx,[rbp+0x88]
0x00e8ea80: call   0x140069460
0x00e8ea85: lea    rdx,[rip+0x779da8]        # 0x141608834 ; literal=" to "
0x00e8ea8c: mov    rcx,r12
0x00e8ea8f: call   0x140070b90
0x00e8ea94: lea    rcx,[rbp+0x88]
0x00e8ea9b: call   0x140070cc0
0x00e8eaa0: nop
0x00e8eaa1: lea    rdx,[rbp+0x88]
0x00e8eaa8: mov    ecx,DWORD PTR [rbx+0x8]
0x00e8eaab: call   0x140547840
0x00e8eab0: lea    rdx,[rbp+0x88]
0x00e8eab7: mov    rcx,r12
0x00e8eaba: call   0x1400bb340
0x00e8eabf: nop
0x00e8eac0: lea    rcx,[rbp+0x88]
0x00e8eac7: call   0x140069460
0x00e8eacc: test   BYTE PTR [rbx],0x2
0x00e8eacf: je     0x140e8eb23
0x00e8ead1: lea    rdx,[rip+0x774f18]        # 0x1416039f0 ; literal=" "
0x00e8ead8: mov    rcx,r12
0x00e8eadb: call   0x140070b90
0x00e8eae0: mov    eax,DWORD PTR [rbx+0xc]
0x00e8eae3: cmp    eax,0x5
0x00e8eae6: jg     0x140e8eb03
0x00e8eae8: lea    rdx,[rip+0x8c1ba5]        # 0x141750694 ; literal="brief "
0x00e8eaef: mov    rcx,r12
0x00e8eaf2: call   0x140070b90
0x00e8eaf7: lea    rdx,[rip+0x8c1bb2]        # 0x1417506b0 ; literal="verse paragraph"
0x00e8eafe: jmp    0x140e8ec0a
0x00e8eb03: cmp    eax,0x15
0x00e8eb06: jl     0x140e8eb17
0x00e8eb08: lea    rdx,[rip+0x81734d]        # 0x1416a5e5c ; literal="long "
0x00e8eb0f: mov    rcx,r12
0x00e8eb12: call   0x140070b90
0x00e8eb17: lea    rdx,[rip+0x8c1b92]        # 0x1417506b0 ; literal="verse paragraph"
0x00e8eb1e: jmp    0x140e8ec0a
0x00e8eb23: mov    eax,DWORD PTR [rbx+0xc]
0x00e8eb26: cmp    eax,0x9
0x00e8eb29: jl     0x140e8eb86
0x00e8eb2b: lea    rdx,[rip+0x774ebe]        # 0x1416039f0 ; literal=" "
0x00e8eb32: mov    rcx,r12
0x00e8eb35: call   0x140070b90
0x00e8eb3a: lea    rcx,[rbp+0x88]
0x00e8eb41: call   0x140070cc0
0x00e8eb46: nop
0x00e8eb47: lea    rdx,[rbp+0x88]
0x00e8eb4e: mov    ecx,DWORD PTR [rbx+0xc]
0x00e8eb51: call   0x140547840
0x00e8eb56: lea    rdx,[rbp+0x88]
0x00e8eb5d: mov    rcx,r12
0x00e8eb60: call   0x1400bb340
0x00e8eb65: lea    rdx,[rip+0x8c1a54]        # 0x1417505c0 ; literal="-line stanza"
0x00e8eb6c: mov    rcx,r12
0x00e8eb6f: call   0x140070b90
0x00e8eb74: nop
0x00e8eb75: lea    rcx,[rbp+0x88]
0x00e8eb7c: call   0x140069460
0x00e8eb81: jmp    0x140e8ec12
0x00e8eb86: cmp    eax,0x8
0x00e8eb89: jne    0x140e8ebb1
0x00e8eb8b: lea    rdx,[rip+0x8c1b1a]        # 0x1417506ac ; literal="n "
0x00e8eb92: test   r15b,r15b
0x00e8eb95: lea    rax,[rip+0x774e54]        # 0x1416039f0 ; literal=" "
0x00e8eb9c: cmove  rdx,rax
0x00e8eba0: mov    rcx,r12
0x00e8eba3: call   0x140070b90
0x00e8eba8: lea    rdx,[rip+0x8c1a05]        # 0x1417505b4 ; literal="octet"
0x00e8ebaf: jmp    0x140e8ec0a
0x00e8ebb1: cmp    eax,0x7
0x00e8ebb4: jne    0x140e8ebbf
0x00e8ebb6: lea    rdx,[rip+0x8c1ab3]        # 0x141750670 ; literal=" septet"
0x00e8ebbd: jmp    0x140e8ec0a
0x00e8ebbf: cmp    eax,0x6
0x00e8ebc2: jne    0x140e8ebcd
0x00e8ebc4: lea    rdx,[rip+0x8c1a9d]        # 0x141750668 ; literal=" sexain"
0x00e8ebcb: jmp    0x140e8ec0a
0x00e8ebcd: cmp    eax,0x5
0x00e8ebd0: jne    0x140e8ebdb
0x00e8ebd2: lea    rdx,[rip+0x8c1aaf]        # 0x141750688 ; literal=" quintain"
0x00e8ebd9: jmp    0x140e8ec0a
0x00e8ebdb: cmp    eax,0x4
0x00e8ebde: jne    0x140e8ebe9
0x00e8ebe0: lea    rdx,[rip+0x8c1a91]        # 0x141750678 ; literal=" quatrain"
0x00e8ebe7: jmp    0x140e8ec0a
0x00e8ebe9: cmp    eax,0x3
0x00e8ebec: jne    0x140e8ebf7
0x00e8ebee: lea    rdx,[rip+0x8c1b13]        # 0x141750708 ; literal=" tercet"
0x00e8ebf5: jmp    0x140e8ec0a
0x00e8ebf7: cmp    eax,0x2
0x00e8ebfa: lea    rdx,[rip+0x8c1af7]        # 0x1417506f8 ; literal=" couplet"
0x00e8ec01: je     0x140e8ec0a
0x00e8ec03: lea    rdx,[rip+0x7a8236]        # 0x141636e40 ; literal=" line"
0x00e8ec0a: mov    rcx,r12
0x00e8ec0d: call   0x140070b90
0x00e8ec12: cmp    DWORD PTR [rbx+0x8],0x2
0x00e8ec16: jl     0x140e8ec27
0x00e8ec18: lea    rdx,[rip+0x7758d1]        # 0x1416044f0 ; literal="s"
0x00e8ec1f: mov    rcx,r12
0x00e8ec22: call   0x140070b90
0x00e8ec27: test   edi,edi
0x00e8ec29: jne    0x140e8ec41
0x00e8ec2b: lea    rdx,[rip+0x77575a]        # 0x14160438c ; literal=" and "
0x00e8ec32: mov    rcx,r12
0x00e8ec35: call   0x140070b90
0x00e8ec3a: inc    edi
0x00e8ec3c: jmp    0x140e8e862
0x00e8ec41: inc    edi
0x00e8ec43: cmp    edi,0x2
0x00e8ec46: jl     0x140e8e862
0x00e8ec4c: mov    r13,QWORD PTR [rbp-0x60]
0x00e8ec50: jmp    0x140e8f422
0x00e8ec55: xorps  xmm0,xmm0
0x00e8ec58: xor    eax,eax
0x00e8ec5a: movups XMMWORD PTR [rbp+0x130],xmm0
0x00e8ec61: movups XMMWORD PTR [rbp+0x140],xmm0
0x00e8ec68: movups XMMWORD PTR [rbp+0x150],xmm0
0x00e8ec6f: movups XMMWORD PTR [rbp+0x160],xmm0
0x00e8ec76: movups XMMWORD PTR [rbp+0x170],xmm0
0x00e8ec7d: movups XMMWORD PTR [rbp+0x180],xmm0
0x00e8ec84: movups XMMWORD PTR [rbp+0x190],xmm0
0x00e8ec8b: mov    QWORD PTR [rbp+0x1a0],rax
0x00e8ec92: mov    DWORD PTR [rbp+0x1a8],eax
0x00e8ec98: mov    rcx,rsi
0x00e8ec9b: call   0x140070480
0x00e8eca0: mov    rcx,r12
0x00e8eca3: cmp    rax,0x3
0x00e8eca7: jb     0x140e8ed06
0x00e8eca9: lea    rdx,[rip+0x8c18f0]        # 0x1417505a0 ; literal="is divided into "
0x00e8ecb0: call   0x140070b90
0x00e8ecb5: lea    rcx,[rbp+0x88]
0x00e8ecbc: call   0x140070cc0
0x00e8ecc1: nop
0x00e8ecc2: mov    rcx,rsi
0x00e8ecc5: call   0x140070480
0x00e8ecca: mov    rcx,rax
0x00e8eccd: lea    rdx,[rbp+0x88]
0x00e8ecd4: call   0x140547840
0x00e8ecd9: lea    rdx,[rbp+0x88]
0x00e8ece0: mov    rcx,r12
0x00e8ece3: call   0x1400bb340
0x00e8ece8: lea    rdx,[rip+0x8c1a41]        # 0x141750730 ; literal=" distinct parts: "
0x00e8ecef: mov    rcx,r12
0x00e8ecf2: call   0x140070b90
0x00e8ecf7: nop
0x00e8ecf8: lea    rcx,[rbp+0x88]
0x00e8ecff: call   0x140069460
0x00e8ed04: jmp    0x140e8ed12
0x00e8ed06: lea    rdx,[rip+0x78f413]        # 0x14161e120 ; literal="is "
0x00e8ed0d: call   0x140070b90
0x00e8ed12: mov    rcx,rsi
0x00e8ed15: call   0x140070480
0x00e8ed1a: mov    r14,rax
0x00e8ed1d: lea    rdx,[rsp+0x38]
0x00e8ed22: mov    rcx,rsi
0x00e8ed25: call   0x140070870
0x00e8ed2a: lea    rdx,[rsp+0x78]
0x00e8ed2f: mov    rcx,rsi
0x00e8ed32: call   0x140070860
0x00e8ed37: lea    r8,[rsp+0x78]
0x00e8ed3c: lea    rdx,[rsp+0x32]
0x00e8ed41: lea    rcx,[rsp+0x38]
0x00e8ed46: call   0x140070450
0x00e8ed4b: xor    edx,edx
0x00e8ed4d: movzx  ecx,BYTE PTR [rax]
0x00e8ed50: call   0x140066de0
0x00e8ed55: test   al,al
0x00e8ed57: je     0x140e8f42e
0x00e8ed5d: mov    edi,DWORD PTR [rbp+0x130]
0x00e8ed63: xor    r15b,r15b
0x00e8ed66: lea    rcx,[rsp+0x38]
0x00e8ed6b: call   0x140070440
0x00e8ed70: mov    rcx,QWORD PTR [rax]
0x00e8ed73: test   BYTE PTR [rcx],0x2
0x00e8ed76: je     0x140e8edbd
0x00e8ed78: test   edi,edi
0x00e8ed7a: jg     0x140e8edfe
0x00e8ed80: mov    rcx,rsi
0x00e8ed83: call   0x140070480
0x00e8ed88: cmp    rax,0x1
0x00e8ed8c: jne    0x140e8ef7d
0x00e8ed92: lea    rcx,[rsp+0x38]
0x00e8ed97: call   0x140070440
0x00e8ed9c: mov    rcx,QWORD PTR [rax]
0x00e8ed9f: cmp    DWORD PTR [rcx+0x8],0x1
0x00e8eda3: jne    0x140e8ef7d
0x00e8eda9: lea    rdx,[rip+0x8c1910]        # 0x1417506c0 ; literal="a single"
0x00e8edb0: mov    rcx,r12
0x00e8edb3: call   0x140070b90
0x00e8edb8: jmp    0x140e8f119
0x00e8edbd: lea    rcx,[rsp+0x38]
0x00e8edc2: call   0x140070440
0x00e8edc7: mov    rcx,QWORD PTR [rax]
0x00e8edca: cmp    DWORD PTR [rcx+0xc],0x1
0x00e8edce: jl     0x140e8ed80
0x00e8edd0: lea    rcx,[rsp+0x38]
0x00e8edd5: call   0x140070440
0x00e8edda: mov    rcx,QWORD PTR [rax]
0x00e8eddd: cmp    DWORD PTR [rcx+0xc],0x1e
0x00e8ede1: jg     0x140e8ed80
0x00e8ede3: lea    rcx,[rsp+0x38]
0x00e8ede8: call   0x140070440
0x00e8eded: mov    rcx,QWORD PTR [rax]
0x00e8edf0: movsxd rax,DWORD PTR [rcx+0xc]
0x00e8edf4: cmp    DWORD PTR [rbp+rax*4+0x130],0x0
0x00e8edfc: je     0x140e8ed80
0x00e8edfe: lea    rdx,[rip+0x8c185b]        # 0x141750660 ; literal="another"
0x00e8ee05: mov    rcx,r12
0x00e8ee08: call   0x140070b90
0x00e8ee0d: lea    rcx,[rsp+0x38]
0x00e8ee12: call   0x140070440
0x00e8ee17: mov    rcx,QWORD PTR [rax]
0x00e8ee1a: cmp    DWORD PTR [rcx+0x8],0x1
0x00e8ee1e: jle    0x140e8f119
0x00e8ee24: mov    rdx,rbx
0x00e8ee27: mov    rcx,r12
0x00e8ee2a: call   0x140070b90
0x00e8ee2f: lea    rcx,[rsp+0x38]
0x00e8ee34: call   0x140070440
0x00e8ee39: mov    rcx,QWORD PTR [rax]
0x00e8ee3c: cmp    DWORD PTR [rcx+0x8],0xa
0x00e8ee40: lea    rcx,[rsp+0x38]
0x00e8ee45: jl     0x140e8ee97
0x00e8ee47: call   0x140070440
0x00e8ee4c: mov    rcx,QWORD PTR [rax]
0x00e8ee4f: cmp    DWORD PTR [rcx+0x8],0x64
0x00e8ee53: jl     0x140e8ee69
0x00e8ee55: lea    rdx,[rip+0x8c18b4]        # 0x141750710 ; literal="extremely long series of"
0x00e8ee5c: mov    rcx,r12
0x00e8ee5f: call   0x140070b90
0x00e8ee64: jmp    0x140e8f119
0x00e8ee69: lea    rcx,[rsp+0x38]
0x00e8ee6e: call   0x140070440
0x00e8ee73: mov    rcx,QWORD PTR [rax]
0x00e8ee76: cmp    DWORD PTR [rcx+0x8],0x32
0x00e8ee7a: lea    rdx,[rip+0x8c1777]        # 0x1417505f8 ; literal="numerous series of"
0x00e8ee81: jge    0x140e8ee8a
0x00e8ee83: lea    rdx,[rip+0x8c1846]        # 0x1417506d0 ; literal="series of"
0x00e8ee8a: mov    rcx,r12
0x00e8ee8d: call   0x140070b90
0x00e8ee92: jmp    0x140e8f119
0x00e8ee97: call   0x140070440
0x00e8ee9c: mov    rbx,QWORD PTR [rax]
0x00e8ee9f: lea    rcx,[rsp+0x38]
0x00e8eea4: call   0x140070440
0x00e8eea9: mov    rcx,QWORD PTR [rax]
0x00e8eeac: mov    eax,DWORD PTR [rbx+0x8]
0x00e8eeaf: cmp    DWORD PTR [rcx+0x4],eax
0x00e8eeb2: lea    rcx,[rbp+0x88]
0x00e8eeb9: jne    0x140e8eef2
0x00e8eebb: call   0x140070cc0
0x00e8eec0: nop
0x00e8eec1: lea    rcx,[rsp+0x38]
0x00e8eec6: call   0x140070440
0x00e8eecb: mov    rcx,QWORD PTR [rax]
0x00e8eece: lea    rdx,[rbp+0x88]
0x00e8eed5: mov    ecx,DWORD PTR [rcx+0x4]
0x00e8eed8: call   0x140547840
0x00e8eedd: lea    rdx,[rbp+0x88]
0x00e8eee4: mov    rcx,r12
0x00e8eee7: call   0x1400bb340
0x00e8eeec: nop
0x00e8eeed: jmp    0x140e8f10d
0x00e8eef2: call   0x140070cc0
0x00e8eef7: nop
0x00e8eef8: lea    rcx,[rsp+0x38]
0x00e8eefd: call   0x140070440
0x00e8ef02: mov    rcx,QWORD PTR [rax]
0x00e8ef05: lea    rdx,[rbp+0x88]
0x00e8ef0c: mov    ecx,DWORD PTR [rcx+0x4]
0x00e8ef0f: call   0x140547840
0x00e8ef14: lea    rdx,[rbp+0x88]
0x00e8ef1b: mov    rcx,r12
0x00e8ef1e: call   0x1400bb340
0x00e8ef23: nop
0x00e8ef24: lea    rcx,[rbp+0x88]
0x00e8ef2b: call   0x140069460
0x00e8ef30: lea    rdx,[rip+0x7798fd]        # 0x141608834 ; literal=" to "
0x00e8ef37: mov    rcx,r12
0x00e8ef3a: call   0x140070b90
0x00e8ef3f: lea    rcx,[rbp+0x88]
0x00e8ef46: call   0x140070cc0
0x00e8ef4b: nop
0x00e8ef4c: lea    rcx,[rsp+0x38]
0x00e8ef51: call   0x140070440
0x00e8ef56: mov    rcx,QWORD PTR [rax]
0x00e8ef59: lea    rdx,[rbp+0x88]
0x00e8ef60: mov    ecx,DWORD PTR [rcx+0x8]
0x00e8ef63: call   0x140547840
0x00e8ef68: lea    rdx,[rbp+0x88]
0x00e8ef6f: mov    rcx,r12
0x00e8ef72: call   0x1400bb340
0x00e8ef77: nop
0x00e8ef78: jmp    0x140e8f10d
0x00e8ef7d: lea    rcx,[rsp+0x38]
0x00e8ef82: call   0x140070440
0x00e8ef87: mov    rcx,QWORD PTR [rax]
0x00e8ef8a: cmp    DWORD PTR [rcx+0x4],0x1
0x00e8ef8e: jne    0x140e8efba
0x00e8ef90: lea    rcx,[rsp+0x38]
0x00e8ef95: call   0x140070440
0x00e8ef9a: mov    rcx,QWORD PTR [rax]
0x00e8ef9d: cmp    DWORD PTR [rcx+0x8],0x1
0x00e8efa1: jne    0x140e8efba
0x00e8efa3: lea    rdx,[rip+0x78fb42]        # 0x14161eaec ; literal="a"
0x00e8efaa: mov    rcx,r12
0x00e8efad: call   0x140070b90
0x00e8efb2: mov    r15b,0x1
0x00e8efb5: jmp    0x140e8f119
0x00e8efba: lea    rcx,[rsp+0x38]
0x00e8efbf: call   0x140070440
0x00e8efc4: mov    rcx,QWORD PTR [rax]
0x00e8efc7: cmp    DWORD PTR [rcx+0x8],0xa
0x00e8efcb: lea    rcx,[rsp+0x38]
0x00e8efd0: jl     0x140e8f02c
0x00e8efd2: call   0x140070440
0x00e8efd7: mov    rcx,QWORD PTR [rax]
0x00e8efda: cmp    DWORD PTR [rcx+0x8],0x64
0x00e8efde: jl     0x140e8eff4
0x00e8efe0: lea    rdx,[rip+0x8c1629]        # 0x141750610 ; literal="an extremely long series of"
0x00e8efe7: mov    rcx,r12
0x00e8efea: call   0x140070b90
0x00e8efef: jmp    0x140e8f119
0x00e8eff4: lea    rcx,[rsp+0x38]
0x00e8eff9: call   0x140070440
0x00e8effe: mov    rcx,QWORD PTR [rax]
0x00e8f001: cmp    DWORD PTR [rcx+0x8],0x32
0x00e8f005: mov    rcx,r12
0x00e8f008: jl     0x140e8f01b
0x00e8f00a: lea    rdx,[rip+0x8c15e7]        # 0x1417505f8 ; literal="numerous series of"
0x00e8f011: call   0x140070b90
0x00e8f016: jmp    0x140e8f119
0x00e8f01b: lea    rdx,[rip+0x8c167e]        # 0x1417506a0 ; literal="a series of"
0x00e8f022: call   0x140070b90
0x00e8f027: jmp    0x140e8f119
0x00e8f02c: call   0x140070440
0x00e8f031: mov    rbx,QWORD PTR [rax]
0x00e8f034: lea    rcx,[rsp+0x38]
0x00e8f039: call   0x140070440
0x00e8f03e: mov    rcx,QWORD PTR [rax]
0x00e8f041: mov    eax,DWORD PTR [rbx+0x8]
0x00e8f044: cmp    DWORD PTR [rcx+0x4],eax
0x00e8f047: lea    rcx,[rbp+0x88]
0x00e8f04e: jne    0x140e8f087
0x00e8f050: call   0x140070cc0
0x00e8f055: nop
0x00e8f056: lea    rcx,[rsp+0x38]
0x00e8f05b: call   0x140070440
0x00e8f060: mov    rcx,QWORD PTR [rax]
0x00e8f063: lea    rdx,[rbp+0x88]
0x00e8f06a: mov    ecx,DWORD PTR [rcx+0x4]
0x00e8f06d: call   0x140547840
0x00e8f072: lea    rdx,[rbp+0x88]
0x00e8f079: mov    rcx,r12
0x00e8f07c: call   0x1400bb340
0x00e8f081: nop
0x00e8f082: jmp    0x140e8f10d
0x00e8f087: call   0x140070cc0
0x00e8f08c: nop
0x00e8f08d: lea    rcx,[rsp+0x38]
0x00e8f092: call   0x140070440
0x00e8f097: mov    rcx,QWORD PTR [rax]
0x00e8f09a: lea    rdx,[rbp+0x88]
0x00e8f0a1: mov    ecx,DWORD PTR [rcx+0x4]
0x00e8f0a4: call   0x140547840
0x00e8f0a9: lea    rdx,[rbp+0x88]
0x00e8f0b0: mov    rcx,r12
0x00e8f0b3: call   0x1400bb340
0x00e8f0b8: nop
0x00e8f0b9: lea    rcx,[rbp+0x88]
0x00e8f0c0: call   0x140069460
0x00e8f0c5: lea    rdx,[rip+0x779768]        # 0x141608834 ; literal=" to "
0x00e8f0cc: mov    rcx,r12
0x00e8f0cf: call   0x140070b90
0x00e8f0d4: lea    rcx,[rbp+0x88]
0x00e8f0db: call   0x140070cc0
0x00e8f0e0: nop
0x00e8f0e1: lea    rcx,[rsp+0x38]
0x00e8f0e6: call   0x140070440
0x00e8f0eb: mov    rcx,QWORD PTR [rax]
0x00e8f0ee: lea    rdx,[rbp+0x88]
0x00e8f0f5: mov    ecx,DWORD PTR [rcx+0x8]
0x00e8f0f8: call   0x140547840
0x00e8f0fd: lea    rdx,[rbp+0x88]
0x00e8f104: mov    rcx,r12
0x00e8f107: call   0x1400bb340
0x00e8f10c: nop
0x00e8f10d: lea    rcx,[rbp+0x88]
0x00e8f114: call   0x140069460
0x00e8f119: lea    rcx,[rsp+0x38]
0x00e8f11e: call   0x140070440
0x00e8f123: mov    rcx,QWORD PTR [rax]
0x00e8f126: test   BYTE PTR [rcx],0x2
0x00e8f129: je     0x140e8f1c4
0x00e8f12f: lea    rbx,[rip+0x7748ba]        # 0x1416039f0 ; literal=" "
0x00e8f136: mov    rdx,rbx
0x00e8f139: mov    rcx,r12
0x00e8f13c: call   0x140070b90
0x00e8f141: lea    rcx,[rsp+0x38]
0x00e8f146: call   0x140070440
0x00e8f14b: mov    rcx,QWORD PTR [rax]
0x00e8f14e: cmp    DWORD PTR [rcx+0xc],0x5
0x00e8f152: jg     0x140e8f15d
0x00e8f154: lea    rdx,[rip+0x8c1539]        # 0x141750694 ; literal="brief "
0x00e8f15b: jmp    0x140e8f17e
0x00e8f15d: lea    rcx,[rsp+0x38]
0x00e8f162: call   0x140070440
0x00e8f167: mov    rcx,QWORD PTR [rax]
0x00e8f16a: cmp    DWORD PTR [rcx+0xc],0x15
0x00e8f16e: lea    rdx,[rip+0x8c1573]        # 0x1417506e8 ; literal="lengthy "
0x00e8f175: jge    0x140e8f17e
0x00e8f177: lea    rdx,[rip+0x8c155e]        # 0x1417506dc ; literal="full "
0x00e8f17e: mov    rcx,r12
0x00e8f181: call   0x140070b90
0x00e8f186: lea    rdx,[rip+0x8c1523]        # 0x1417506b0 ; literal="verse paragraph"
0x00e8f18d: mov    rcx,r12
0x00e8f190: call   0x140070b90
0x00e8f195: lea    rcx,[rsp+0x38]
0x00e8f19a: call   0x140070440
0x00e8f19f: mov    rcx,QWORD PTR [rax]
0x00e8f1a2: cmp    DWORD PTR [rcx+0x8],0x2
0x00e8f1a6: jl     0x140e8f1b7
0x00e8f1a8: lea    rdx,[rip+0x775341]        # 0x1416044f0 ; literal="s"
0x00e8f1af: mov    rcx,r12
0x00e8f1b2: call   0x140070b90
0x00e8f1b7: inc    edi
0x00e8f1b9: mov    DWORD PTR [rbp+0x130],edi
0x00e8f1bf: jmp    0x140e8f3cf
0x00e8f1c4: lea    rcx,[rsp+0x38]
0x00e8f1c9: call   0x140070440
0x00e8f1ce: mov    rcx,QWORD PTR [rax]
0x00e8f1d1: cmp    DWORD PTR [rcx+0xc],0x9
0x00e8f1d5: jl     0x140e8f242
0x00e8f1d7: lea    rbx,[rip+0x774812]        # 0x1416039f0 ; literal=" "
0x00e8f1de: mov    rdx,rbx
0x00e8f1e1: mov    rcx,r12
0x00e8f1e4: call   0x140070b90
0x00e8f1e9: lea    rcx,[rbp+0x88]
0x00e8f1f0: call   0x140070cc0
0x00e8f1f5: nop
0x00e8f1f6: lea    rcx,[rsp+0x38]
0x00e8f1fb: call   0x140070440
0x00e8f200: mov    rcx,QWORD PTR [rax]
0x00e8f203: lea    rdx,[rbp+0x88]
0x00e8f20a: mov    ecx,DWORD PTR [rcx+0xc]
0x00e8f20d: call   0x140547840
0x00e8f212: lea    rdx,[rbp+0x88]
0x00e8f219: mov    rcx,r12
0x00e8f21c: call   0x1400bb340
0x00e8f221: lea    rdx,[rip+0x8c1398]        # 0x1417505c0 ; literal="-line stanza"
0x00e8f228: mov    rcx,r12
0x00e8f22b: call   0x140070b90
0x00e8f230: nop
0x00e8f231: lea    rcx,[rbp+0x88]
0x00e8f238: call   0x140069460
0x00e8f23d: jmp    0x140e8f369
0x00e8f242: lea    rcx,[rsp+0x38]
0x00e8f247: call   0x140070440
0x00e8f24c: mov    rcx,QWORD PTR [rax]
0x00e8f24f: cmp    DWORD PTR [rcx+0xc],0x8
0x00e8f253: jne    0x140e8f2a7
0x00e8f255: mov    rcx,r12
0x00e8f258: test   r15b,r15b
0x00e8f25b: je     0x140e8f284
0x00e8f25d: lea    rdx,[rip+0x8c1448]        # 0x1417506ac ; literal="n "
0x00e8f264: call   0x140070b90
0x00e8f269: lea    rbx,[rip+0x774780]        # 0x1416039f0 ; literal=" "
0x00e8f270: lea    rdx,[rip+0x8c133d]        # 0x1417505b4 ; literal="octet"
0x00e8f277: mov    rcx,r12
0x00e8f27a: call   0x140070b90
0x00e8f27f: jmp    0x140e8f369
0x00e8f284: lea    rbx,[rip+0x774765]        # 0x1416039f0 ; literal=" "
0x00e8f28b: mov    rdx,rbx
0x00e8f28e: call   0x140070b90
0x00e8f293: lea    rdx,[rip+0x8c131a]        # 0x1417505b4 ; literal="octet"
0x00e8f29a: mov    rcx,r12
0x00e8f29d: call   0x140070b90
0x00e8f2a2: jmp    0x140e8f369
0x00e8f2a7: lea    rcx,[rsp+0x38]
0x00e8f2ac: call   0x140070440
0x00e8f2b1: mov    rcx,QWORD PTR [rax]
0x00e8f2b4: cmp    DWORD PTR [rcx+0xc],0x7
0x00e8f2b8: jne    0x140e8f2c6
0x00e8f2ba: lea    rdx,[rip+0x8c13af]        # 0x141750670 ; literal=" septet"
0x00e8f2c1: jmp    0x140e8f35a
0x00e8f2c6: lea    rcx,[rsp+0x38]
0x00e8f2cb: call   0x140070440
0x00e8f2d0: mov    rcx,QWORD PTR [rax]
0x00e8f2d3: cmp    DWORD PTR [rcx+0xc],0x6
0x00e8f2d7: jne    0x140e8f2e5
0x00e8f2d9: lea    rdx,[rip+0x8c1388]        # 0x141750668 ; literal=" sexain"
0x00e8f2e0: jmp    0x140e8f35a
0x00e8f2e5: lea    rcx,[rsp+0x38]
0x00e8f2ea: call   0x140070440
0x00e8f2ef: mov    rcx,QWORD PTR [rax]
0x00e8f2f2: cmp    DWORD PTR [rcx+0xc],0x5
0x00e8f2f6: jne    0x140e8f301
0x00e8f2f8: lea    rdx,[rip+0x8c1389]        # 0x141750688 ; literal=" quintain"
0x00e8f2ff: jmp    0x140e8f35a
0x00e8f301: lea    rcx,[rsp+0x38]
0x00e8f306: call   0x140070440
0x00e8f30b: mov    rcx,QWORD PTR [rax]
0x00e8f30e: cmp    DWORD PTR [rcx+0xc],0x4
0x00e8f312: jne    0x140e8f31d
0x00e8f314: lea    rdx,[rip+0x8c135d]        # 0x141750678 ; literal=" quatrain"
0x00e8f31b: jmp    0x140e8f35a
0x00e8f31d: lea    rcx,[rsp+0x38]
0x00e8f322: call   0x140070440
0x00e8f327: mov    rcx,QWORD PTR [rax]
0x00e8f32a: cmp    DWORD PTR [rcx+0xc],0x3
0x00e8f32e: jne    0x140e8f339
0x00e8f330: lea    rdx,[rip+0x8c13d1]        # 0x141750708 ; literal=" tercet"
0x00e8f337: jmp    0x140e8f35a
0x00e8f339: lea    rcx,[rsp+0x38]
0x00e8f33e: call   0x140070440
0x00e8f343: mov    rcx,QWORD PTR [rax]
0x00e8f346: cmp    DWORD PTR [rcx+0xc],0x2
0x00e8f34a: lea    rdx,[rip+0x8c13a7]        # 0x1417506f8 ; literal=" couplet"
0x00e8f351: je     0x140e8f35a
0x00e8f353: lea    rdx,[rip+0x7a7ae6]        # 0x141636e40 ; literal=" line"
0x00e8f35a: mov    rcx,r12
0x00e8f35d: call   0x140070b90
0x00e8f362: lea    rbx,[rip+0x774687]        # 0x1416039f0 ; literal=" "
0x00e8f369: lea    rcx,[rsp+0x38]
0x00e8f36e: call   0x140070440
0x00e8f373: mov    rcx,QWORD PTR [rax]
0x00e8f376: cmp    DWORD PTR [rcx+0x8],0x2
0x00e8f37a: jl     0x140e8f38b
0x00e8f37c: lea    rdx,[rip+0x77516d]        # 0x1416044f0 ; literal="s"
0x00e8f383: mov    rcx,r12
0x00e8f386: call   0x140070b90
0x00e8f38b: lea    rcx,[rsp+0x38]
0x00e8f390: call   0x140070440
0x00e8f395: mov    rcx,QWORD PTR [rax]
0x00e8f398: cmp    DWORD PTR [rcx+0xc],0x1
0x00e8f39c: jl     0x140e8f3cf
0x00e8f39e: lea    rcx,[rsp+0x38]
0x00e8f3a3: call   0x140070440
0x00e8f3a8: mov    rcx,QWORD PTR [rax]
0x00e8f3ab: cmp    DWORD PTR [rcx+0xc],0x1e
0x00e8f3af: jg     0x140e8f3cf
0x00e8f3b1: lea    rcx,[rsp+0x38]
0x00e8f3b6: call   0x140070440
0x00e8f3bb: mov    rcx,QWORD PTR [rax]
0x00e8f3be: movsxd rax,DWORD PTR [rcx+0xc]
0x00e8f3c2: inc    DWORD PTR [rbp+rax*4+0x130]
0x00e8f3c9: mov    edi,DWORD PTR [rbp+0x130]
0x00e8f3cf: cmp    r14d,0x2
0x00e8f3d3: jne    0x140e8f3de
0x00e8f3d5: lea    rdx,[rip+0x774fb0]        # 0x14160438c ; literal=" and "
0x00e8f3dc: jmp    0x140e8f3e7
0x00e8f3de: jle    0x140e8f3ef
0x00e8f3e0: lea    rdx,[rip+0x774fad]        # 0x141604394 ; literal=", "
0x00e8f3e7: mov    rcx,r12
0x00e8f3ea: call   0x140070b90
0x00e8f3ef: lea    rcx,[rsp+0x38]
0x00e8f3f4: call   0x140070430
0x00e8f3f9: dec    r14d
0x00e8f3fc: lea    r8,[rsp+0x78]
0x00e8f401: lea    rdx,[rsp+0x32]
0x00e8f406: lea    rcx,[rsp+0x38]
0x00e8f40b: call   0x140070450
0x00e8f410: xor    edx,edx
0x00e8f412: movzx  ecx,BYTE PTR [rax]
0x00e8f415: call   0x140066de0
0x00e8f41a: test   al,al
0x00e8f41c: jne    0x140e8ed63
0x00e8f422: mov    edi,0x1
0x00e8f427: lea    r15,[rip+0xffffffffff170bd2]        # 0x140000000
0x00e8f42e: lea    rdx,[rip+0x78a163]        # 0x141619598 ; literal=".  "
0x00e8f435: mov    rcx,r12
0x00e8f438: call   0x140070b90
0x00e8f43d: cmp    DWORD PTR [r13+0xe0],0xffffffff
0x00e8f445: je     0x140e8f5a9
0x00e8f44b: lea    rcx,[rbp+0x48]
0x00e8f44f: call   0x140070cc0
0x00e8f454: nop
0x00e8f455: lea    rcx,[r13+0x8]
0x00e8f459: xor    r9d,r9d
0x00e8f45c: mov    r8b,0x1
0x00e8f45f: lea    rdx,[rbp+0x48]
0x00e8f463: call   0x140aae180
0x00e8f468: lea    rcx,[rbp+0x48]
0x00e8f46c: call   0x140546b30
0x00e8f471: lea    rdx,[rbp+0x48]
0x00e8f475: mov    rcx,r12
0x00e8f478: call   0x1400bb340
0x00e8f47d: lea    rdx,[rip+0x8c1a14]        # 0x141750e98 ; literal=" is always written from the perspective of "
0x00e8f484: mov    rcx,r12
0x00e8f487: call   0x140070b90
0x00e8f48c: lea    rcx,[r13+0xe8]
0x00e8f493: movsxd rdx,DWORD PTR [r13+0xe0]
0x00e8f49a: call   0x140070850
0x00e8f49f: mov    rbx,QWORD PTR [rax]
0x00e8f4a2: movsxd rax,DWORD PTR [rbx]
0x00e8f4a5: cmp    eax,0x7
0x00e8f4a8: ja     0x140e8f590
0x00e8f4ae: mov    ecx,DWORD PTR [r15+rax*4+0xe9479c]
0x00e8f4b6: add    rcx,r15
0x00e8f4b9: jmp    rcx
0x00e8f4bb: lea    rdx,[rip+0x8c19c6]        # 0x141750e88 ; literal="the author"
0x00e8f4c2: jmp    0x140e8f588
0x00e8f4c7: lea    rdx,[rip+0x8c1a0a]        # 0x141750ed8 ; literal="a soldier"
0x00e8f4ce: jmp    0x140e8f588
0x00e8f4d3: lea    rdx,[rip+0x8c19ee]        # 0x141750ec8 ; literal="a traveler"
0x00e8f4da: jmp    0x140e8f588
0x00e8f4df: lea    rdx,[rip+0x8c195a]        # 0x141750e40 ; literal="a relative of the author"
0x00e8f4e6: jmp    0x140e8f588
0x00e8f4eb: lea    rdx,[rip+0x8c1936]        # 0x141750e28 ; literal="a party to a debate"
0x00e8f4f2: jmp    0x140e8f588
0x00e8f4f7: lea    rdx,[rip+0x8c1972]        # 0x141750e70 ; literal="a fictional poet"
0x00e8f4fe: jmp    0x140e8f588
0x00e8f503: cmp    DWORD PTR [rbx+0x4],0xffffffff
0x00e8f507: je     0x140e8f53d
0x00e8f509: lea    rcx,[rbp+0x130]
0x00e8f510: call   0x1400736b0
0x00e8f515: xor    eax,eax
0x00e8f517: mov    WORD PTR [rsp+0x28],ax
0x00e8f51c: mov    WORD PTR [rsp+0x20],di
0x00e8f521: lea    r9,[rbp+0x130]
0x00e8f528: mov    r8d,DWORD PTR [rbx+0x4]
0x00e8f52c: mov    rdx,r12
0x00e8f52f: lea    rcx,[rip+0x168cc02]        # 0x14251c138
0x00e8f536: call   0x140baabd0
0x00e8f53b: jmp    0x140e8f590
0x00e8f53d: lea    rdx,[rip+0x8c136c]        # 0x1417508b0 ; literal="a historical figure"
0x00e8f544: jmp    0x140e8f588
0x00e8f546: cmp    DWORD PTR [rbx+0x4],0xffffffff
0x00e8f54a: je     0x140e8f581
0x00e8f54c: lea    rdx,[rip+0x77934d]        # 0x1416088a0 ; literal="a "
0x00e8f553: mov    rcx,r12
0x00e8f556: call   0x140070b90
0x00e8f55b: mov    BYTE PTR [rsp+0x28],0x0
0x00e8f560: movzx  eax,WORD PTR [rbx+0x8]
0x00e8f564: mov    WORD PTR [rsp+0x20],ax
0x00e8f569: xor    r9d,r9d
0x00e8f56c: mov    r8d,DWORD PTR [rbx+0x4]
0x00e8f570: mov    rdx,r12
0x00e8f573: lea    rcx,[rip+0x168cbbe]        # 0x14251c138
0x00e8f57a: call   0x140bacb90
0x00e8f57f: jmp    0x140e8f590
0x00e8f581: lea    rdx,[rip+0x8c18d8]        # 0x141750e60 ; literal="an animal"
0x00e8f588: mov    rcx,r12
0x00e8f58b: call   0x140070b90
0x00e8f590: lea    rdx,[rip+0x78a001]        # 0x141619598 ; literal=".  "
0x00e8f597: mov    rcx,r12
0x00e8f59a: call   0x140070b90
0x00e8f59f: nop
0x00e8f5a0: lea    rcx,[rbp+0x48]
0x00e8f5a4: call   0x140069460
0x00e8f5a9: mov    edx,DWORD PTR [r13+0xe4]
0x00e8f5b0: mov    ecx,edx
0x00e8f5b2: and    ecx,0x1
0x00e8f5b5: test   dl,0x4
0x00e8f5b8: je     0x140e8f5bc
0x00e8f5ba: inc    ecx
0x00e8f5bc: test   dl,0x8
0x00e8f5bf: lea    eax,[rcx+0x1]
0x00e8f5c2: cmove  eax,ecx
0x00e8f5c5: test   dl,0x10
0x00e8f5c8: lea    ecx,[rax+0x1]
0x00e8f5cb: cmove  ecx,eax
0x00e8f5ce: bt     edx,0x9
0x00e8f5d2: lea    eax,[rcx+0x1]
0x00e8f5d5: cmovae eax,ecx
0x00e8f5d8: bt     edx,0xa
0x00e8f5dc: lea    ecx,[rax+0x1]
0x00e8f5df: cmovae ecx,eax
0x00e8f5e2: bt     edx,0xb
0x00e8f5e6: lea    eax,[rcx+0x1]
0x00e8f5e9: cmovae eax,ecx
0x00e8f5ec: bt     edx,0xc
0x00e8f5f0: lea    ecx,[rax+0x1]
0x00e8f5f3: cmovae ecx,eax
0x00e8f5f6: bt     edx,0xd
0x00e8f5fa: lea    eax,[rcx+0x1]
0x00e8f5fd: cmovae eax,ecx
0x00e8f600: bt     edx,0xf
0x00e8f604: lea    ecx,[rax+0x1]
0x00e8f607: cmovae ecx,eax
0x00e8f60a: bt     edx,0x10
0x00e8f60e: lea    eax,[rcx+0x1]
0x00e8f611: cmovae eax,ecx
0x00e8f614: bt     edx,0x11
0x00e8f618: lea    ecx,[rax+0x1]
0x00e8f61b: cmovae ecx,eax
0x00e8f61e: bt     edx,0x12
0x00e8f622: lea    eax,[rcx+0x1]
0x00e8f625: cmovae eax,ecx
0x00e8f628: bt     edx,0x13
0x00e8f62c: lea    ecx,[rax+0x1]
0x00e8f62f: cmovae ecx,eax
0x00e8f632: bt     edx,0x14
0x00e8f636: lea    eax,[rcx+0x1]
0x00e8f639: cmovae eax,ecx
0x00e8f63c: bt     edx,0x15
0x00e8f640: lea    ecx,[rax+0x1]
0x00e8f643: cmovae ecx,eax
0x00e8f646: bt     edx,0x16
0x00e8f64a: lea    esi,[rcx+0x1]
0x00e8f64d: cmovae esi,ecx
0x00e8f650: test   esi,esi
0x00e8f652: jle    0x140e8f894
0x00e8f658: lea    rdx,[rip+0x8c18d1]        # 0x141750f30 ; literal="Use of "
0x00e8f65f: mov    rcx,r12
0x00e8f662: call   0x140070b90
0x00e8f667: xor    eax,eax
0x00e8f669: mov    edi,eax
0x00e8f66b: mov    ebx,DWORD PTR [rsp+0x38]
0x00e8f66f: nop
0x00e8f670: cmp    edi,0x10
0x00e8f673: ja     0x140e8f6fe
0x00e8f679: movsxd rax,edi
0x00e8f67c: mov    ecx,DWORD PTR [r15+rax*4+0xe947bc]
0x00e8f684: add    rcx,r15
0x00e8f687: jmp    rcx
0x00e8f689: mov    ebx,0x1
0x00e8f68e: jmp    0x140e8f6fe
0x00e8f690: mov    ebx,0x4
0x00e8f695: jmp    0x140e8f6fe
0x00e8f697: mov    ebx,0x8
0x00e8f69c: jmp    0x140e8f6fe
0x00e8f69e: mov    ebx,0x10
0x00e8f6a3: jmp    0x140e8f6fe
0x00e8f6a5: mov    ebx,0x200
0x00e8f6aa: jmp    0x140e8f6fe
0x00e8f6ac: mov    ebx,0x400
0x00e8f6b1: jmp    0x140e8f6fe
0x00e8f6b3: mov    ebx,0x800
0x00e8f6b8: jmp    0x140e8f6fe
0x00e8f6ba: mov    ebx,0x1000
0x00e8f6bf: jmp    0x140e8f6fe
0x00e8f6c1: mov    ebx,0x2000
0x00e8f6c6: jmp    0x140e8f6fe
0x00e8f6c8: mov    ebx,0x8000
0x00e8f6cd: jmp    0x140e8f6fe
0x00e8f6cf: mov    ebx,0x10000
0x00e8f6d4: jmp    0x140e8f6fe
0x00e8f6d6: mov    ebx,0x20000
0x00e8f6db: jmp    0x140e8f6fe
0x00e8f6dd: mov    ebx,0x40000
0x00e8f6e2: jmp    0x140e8f6fe
0x00e8f6e4: mov    ebx,0x80000
0x00e8f6e9: jmp    0x140e8f6fe
0x00e8f6eb: mov    ebx,0x100000
0x00e8f6f0: jmp    0x140e8f6fe
0x00e8f6f2: mov    ebx,0x200000
0x00e8f6f7: jmp    0x140e8f6fe
0x00e8f6f9: mov    ebx,0x400000
0x00e8f6fe: test   DWORD PTR [r13+0xe4],ebx
0x00e8f705: je     0x140e8f87a
0x00e8f70b: cmp    ebx,0x2000
0x00e8f711: ja     0x140e8f7c9
0x00e8f717: je     0x140e8f7bd
0x00e8f71d: cmp    ebx,0x200
0x00e8f723: ja     0x140e8f77d
0x00e8f725: je     0x140e8f771
0x00e8f727: mov    eax,ebx
0x00e8f729: sub    eax,0x1
0x00e8f72c: je     0x140e8f765
0x00e8f72e: sub    eax,0x3
0x00e8f731: je     0x140e8f759
0x00e8f733: sub    eax,0x4
0x00e8f736: je     0x140e8f74d
0x00e8f738: cmp    eax,0x8
0x00e8f73b: jne    0x140e8f859
0x00e8f741: lea    rdx,[rip+0x8c17b0]        # 0x141750ef8 ; literal="antanaclasis"
0x00e8f748: jmp    0x140e8f851
0x00e8f74d: lea    rdx,[rip+0x8c17e4]        # 0x141750f38 ; literal="onomatopoeia"
0x00e8f754: jmp    0x140e8f851
0x00e8f759: lea    rdx,[rip+0x8c17e8]        # 0x141750f48 ; literal="alliteration"
0x00e8f760: jmp    0x140e8f851
0x00e8f765: lea    rdx,[rip+0x8c17b4]        # 0x141750f20 ; literal="internal rhyme"
0x00e8f76c: jmp    0x140e8f851
0x00e8f771: lea    rdx,[rip+0x8c1770]        # 0x141750ee8 ; literal="assonance"
0x00e8f778: jmp    0x140e8f851
0x00e8f77d: cmp    ebx,0x400
0x00e8f783: je     0x140e8f7b1
0x00e8f785: cmp    ebx,0x800
0x00e8f78b: je     0x140e8f7a5
0x00e8f78d: cmp    ebx,0x1000
0x00e8f793: jne    0x140e8f859
0x00e8f799: lea    rdx,[rip+0x8c1800]        # 0x141750fa0 ; literal="epenthesis"
0x00e8f7a0: jmp    0x140e8f851
0x00e8f7a5: lea    rdx,[rip+0x8c175c]        # 0x141750f08 ; literal="elision"
0x00e8f7ac: jmp    0x140e8f851
0x00e8f7b1: lea    rdx,[rip+0x8c1758]        # 0x141750f10 ; literal="consonance"
0x00e8f7b8: jmp    0x140e8f851
0x00e8f7bd: lea    rdx,[rip+0x8c17cc]        # 0x141750f90 ; literal="synchysis"
0x00e8f7c4: jmp    0x140e8f851
0x00e8f7c9: cmp    ebx,0x80000
0x00e8f7cf: ja     0x140e8f820
0x00e8f7d1: je     0x140e8f817
0x00e8f7d3: cmp    ebx,0x8000
0x00e8f7d9: je     0x140e8f80e
0x00e8f7db: cmp    ebx,0x10000
0x00e8f7e1: je     0x140e8f805
0x00e8f7e3: cmp    ebx,0x20000
0x00e8f7e9: je     0x140e8f7fc
0x00e8f7eb: cmp    ebx,0x40000
0x00e8f7f1: jne    0x140e8f859
0x00e8f7f3: lea    rdx,[rip+0x8c175e]        # 0x141750f58 ; literal="metaphor"
0x00e8f7fa: jmp    0x140e8f851
0x00e8f7fc: lea    rdx,[rip+0x8c1765]        # 0x141750f68 ; literal="symbolism"
0x00e8f803: jmp    0x140e8f851
0x00e8f805: lea    rdx,[rip+0x8c17a4]        # 0x141750fb0 ; literal="ambiguity"
0x00e8f80c: jmp    0x140e8f851
0x00e8f80e: lea    rdx,[rip+0x8c17ab]        # 0x141750fc0 ; literal="allegory"
0x00e8f815: jmp    0x140e8f851
0x00e8f817: lea    rdx,[rip+0x8c1766]        # 0x141750f84 ; literal="simile"
0x00e8f81e: jmp    0x140e8f851
0x00e8f820: cmp    ebx,0x100000
0x00e8f826: je     0x140e8f84a
0x00e8f828: cmp    ebx,0x200000
0x00e8f82e: je     0x140e8f841
0x00e8f830: cmp    ebx,0x400000
0x00e8f836: jne    0x140e8f859
0x00e8f838: lea    rdx,[rip+0x8c17e9]        # 0x141751028 ; literal="juxtaposition"
0x00e8f83f: jmp    0x140e8f851
0x00e8f841: lea    rdx,[rip+0x8c17f0]        # 0x141751038 ; literal="vivid imagery"
0x00e8f848: jmp    0x140e8f851
0x00e8f84a: lea    rdx,[rip+0x8c1727]        # 0x141750f78 ; literal="metonymy"
0x00e8f851: mov    rcx,r12
0x00e8f854: call   0x140070b90
0x00e8f859: cmp    esi,0x2
0x00e8f85c: jne    0x140e8f867
0x00e8f85e: lea    rdx,[rip+0x774b27]        # 0x14160438c ; literal=" and "
0x00e8f865: jmp    0x140e8f870
0x00e8f867: jle    0x140e8f878
0x00e8f869: lea    rdx,[rip+0x774b24]        # 0x141604394 ; literal=", "
0x00e8f870: mov    rcx,r12
0x00e8f873: call   0x140070b90
0x00e8f878: dec    esi
0x00e8f87a: inc    edi
0x00e8f87c: cmp    edi,0x11
0x00e8f87f: jl     0x140e8f670
0x00e8f885: lea    rdx,[rip+0x8c17cc]        # 0x141751058 ; literal=" is characteristic of the form.  "
0x00e8f88c: mov    rcx,r12
0x00e8f88f: call   0x140070b90
0x00e8f894: lea    rcx,[r13+0xb8]
0x00e8f89b: call   0x1400709a0
0x00e8f8a0: mov    rbx,rax
0x00e8f8a3: test   eax,eax
0x00e8f8a5: jle    0x140e8fa49
0x00e8f8ab: mov    rcx,r12
0x00e8f8ae: cmp    eax,0x2
0x00e8f8b1: jl     0x140e8f8d7
0x00e8f8b3: lea    rdx,[rip+0x8c178e]        # 0x141751048 ; literal="Forms of "
0x00e8f8ba: call   0x140070b90
0x00e8f8bf: lea    rdx,[rip+0x8c170a]        # 0x141750fd0 ; literal="parallelism "
0x00e8f8c6: mov    rcx,r12
0x00e8f8c9: call   0x140070b90
0x00e8f8ce: lea    rdx,[rip+0x77465f]        # 0x141603f34 ; literal="are"
0x00e8f8d5: jmp    0x140e8f8f9
0x00e8f8d7: lea    rdx,[rip+0x8c1702]        # 0x141750fe0 ; literal="A form of "
0x00e8f8de: call   0x140070b90
0x00e8f8e3: lea    rdx,[rip+0x8c16e6]        # 0x141750fd0 ; literal="parallelism "
0x00e8f8ea: mov    rcx,r12
0x00e8f8ed: call   0x140070b90
0x00e8f8f2: lea    rdx,[rip+0x774657]        # 0x141603f50 ; literal="is"
0x00e8f8f9: mov    rcx,r12
0x00e8f8fc: call   0x140070b90
0x00e8f901: lea    rdx,[rip+0x8c16f8]        # 0x141751000 ; literal=" common throughout the poem, in that "
0x00e8f908: mov    rcx,r12
0x00e8f90b: call   0x140070b90
0x00e8f910: xor    dil,dil
0x00e8f913: lea    rdx,[rsp+0x68]
0x00e8f918: lea    rcx,[r13+0xb8]
0x00e8f91f: call   0x140070870
0x00e8f924: lea    rdx,[rsp+0x78]
0x00e8f929: lea    rcx,[r13+0xb8]
0x00e8f930: call   0x140070860
0x00e8f935: lea    r8,[rsp+0x78]
0x00e8f93a: lea    rdx,[rsp+0x32]
0x00e8f93f: lea    rcx,[rsp+0x68]
0x00e8f944: call   0x140070450
0x00e8f949: xor    edx,edx
0x00e8f94b: movzx  ecx,BYTE PTR [rax]
0x00e8f94e: call   0x140066de0
0x00e8f953: test   al,al
0x00e8f955: je     0x140e8fa3a
0x00e8f95b: nop    DWORD PTR [rax+rax*1+0x0]
0x00e8f960: mov    rcx,r12
0x00e8f963: test   dil,dil
0x00e8f966: jne    0x140e8f979
0x00e8f968: lea    rdx,[rip+0x8c1681]        # 0x141750ff0 ; literal="certain lines "
0x00e8f96f: call   0x140070b90
0x00e8f974: mov    dil,0x1
0x00e8f977: jmp    0x140e8f985
0x00e8f979: lea    rdx,[rip+0x8c17bc]        # 0x14175113c ; literal="they "
0x00e8f980: call   0x140070b90
0x00e8f985: lea    rcx,[rsp+0x68]
0x00e8f98a: call   0x140070440
0x00e8f98f: movsxd rcx,DWORD PTR [rax]
0x00e8f992: cmp    ecx,0x6
0x00e8f995: ja     0x140e8f9e9
0x00e8f997: mov    ecx,DWORD PTR [r15+rcx*4+0xe94800]
0x00e8f99f: add    rcx,r15
0x00e8f9a2: jmp    rcx
0x00e8f9a4: lea    rdx,[rip+0x8c176d]        # 0x141751118 ; literal="often share an underlying meaning"
0x00e8f9ab: jmp    0x140e8f9e1
0x00e8f9ad: lea    rdx,[rip+0x8c17bc]        # 0x141751170 ; literal="often contrast underlying meaning"
0x00e8f9b4: jmp    0x140e8f9e1
0x00e8f9b6: lea    rdx,[rip+0x8c178b]        # 0x141751148 ; literal="are required to maintain phrasing"
0x00e8f9bd: jmp    0x140e8f9e1
0x00e8f9bf: lea    rdx,[rip+0x8c16e2]        # 0x1417510a8 ; literal="have similar grammatical structures"
0x00e8f9c6: jmp    0x140e8f9e1
0x00e8f9c8: lea    rdx,[rip+0x8c16b1]        # 0x141751080 ; literal="use the same placement of allusions"
0x00e8f9cf: jmp    0x140e8f9e1
0x00e8f9d1: lea    rdx,[rip+0x8c1718]        # 0x1417510f0 ; literal="sometimes have reversed word orders"
0x00e8f9d8: jmp    0x140e8f9e1
0x00e8f9da: lea    rdx,[rip+0x8c16ef]        # 0x1417510d0 ; literal="reverse grammatical structures"
0x00e8f9e1: mov    rcx,r12
0x00e8f9e4: call   0x140070b90
0x00e8f9e9: cmp    ebx,0x2
0x00e8f9ec: jne    0x140e8f9f7
0x00e8f9ee: lea    rdx,[rip+0x774997]        # 0x14160438c ; literal=" and "
0x00e8f9f5: jmp    0x140e8fa00
0x00e8f9f7: jle    0x140e8fa08
0x00e8f9f9: lea    rdx,[rip+0x774994]        # 0x141604394 ; literal=", "
0x00e8fa00: mov    rcx,r12
0x00e8fa03: call   0x140070b90
0x00e8fa08: dec    ebx
0x00e8fa0a: lea    rcx,[rsp+0x68]
0x00e8fa0f: call   0x140070980
0x00e8fa14: lea    r8,[rsp+0x78]
0x00e8fa19: lea    rdx,[rsp+0x32]
0x00e8fa1e: lea    rcx,[rsp+0x68]
0x00e8fa23: call   0x140070450
0x00e8fa28: xor    edx,edx
0x00e8fa2a: movzx  ecx,BYTE PTR [rax]
0x00e8fa2d: call   0x140066de0
0x00e8fa32: test   al,al
0x00e8fa34: jne    0x140e8f960
0x00e8fa3a: lea    rdx,[rip+0x789b57]        # 0x141619598 ; literal=".  "
0x00e8fa41: mov    rcx,r12
0x00e8fa44: call   0x140070b90
0x00e8fa49: mov    edx,DWORD PTR [r13+0xe4]
0x00e8fa50: mov    ecx,edx
0x00e8fa52: shr    ecx,0x5
0x00e8fa55: and    ecx,0x1
0x00e8fa58: test   dl,0x40
0x00e8fa5b: lea    eax,[rcx+0x1]
0x00e8fa5e: cmove  eax,ecx
0x00e8fa61: test   dl,0x80
0x00e8fa64: lea    ecx,[rax+0x1]
0x00e8fa67: cmove  ecx,eax
0x00e8fa6a: bt     edx,0x8
0x00e8fa6e: lea    r14d,[rcx+0x1]
0x00e8fa72: cmovae r14d,ecx
0x00e8fa76: test   r14d,r14d
0x00e8fa79: je     0x140e8fbb1
0x00e8fa7f: lea    rdx,[rip+0x8c17ea]        # 0x141751270 ; literal="Linguistic skill is required in the visual presentation as well, as "
0x00e8fa86: mov    rcx,r12
0x00e8fa89: call   0x140070b90
0x00e8fa8e: lea    rcx,[rbp+0x88]
0x00e8fa95: call   0x140070cc0
0x00e8fa9a: nop
0x00e8fa9b: lea    rcx,[r13+0x8]
0x00e8fa9f: xor    r9d,r9d
0x00e8faa2: mov    r8b,0x1
0x00e8faa5: lea    rdx,[rbp+0x88]
0x00e8faac: call   0x140aae180
0x00e8fab1: lea    rdx,[rbp+0x88]
0x00e8fab8: mov    rcx,r12
0x00e8fabb: call   0x1400bb340
0x00e8fac0: nop
0x00e8fac1: lea    rcx,[rbp+0x88]
0x00e8fac8: call   0x140069460
0x00e8facd: lea    rdx,[rip+0x8c178c]        # 0x141751260 ; literal=" must feature "
0x00e8fad4: mov    rcx,r12
0x00e8fad7: call   0x140070b90
0x00e8fadc: xor    eax,eax
0x00e8fade: mov    edi,eax
0x00e8fae0: mov    esi,r14d
0x00e8fae3: mov    ebx,DWORD PTR [rsp+0x38]
0x00e8fae7: mov    ecx,edi
0x00e8fae9: test   edi,edi
0x00e8faeb: je     0x140e8fb11
0x00e8faed: sub    ecx,0x1
0x00e8faf0: je     0x140e8fb0a
0x00e8faf2: sub    ecx,0x1
0x00e8faf5: je     0x140e8fb03
0x00e8faf7: cmp    ecx,0x1
0x00e8fafa: jne    0x140e8fb16
0x00e8fafc: mov    ebx,0x100
0x00e8fb01: jmp    0x140e8fb16
0x00e8fb03: mov    ebx,0x80
0x00e8fb08: jmp    0x140e8fb16
0x00e8fb0a: mov    ebx,0x40
0x00e8fb0f: jmp    0x140e8fb16
0x00e8fb11: mov    ebx,0x20
0x00e8fb16: test   DWORD PTR [r13+0xe4],ebx
0x00e8fb1d: je     0x140e8fb97
0x00e8fb1f: mov    eax,ebx
0x00e8fb21: sub    eax,0x20
0x00e8fb24: je     0x140e8fb67
0x00e8fb26: sub    eax,0x20
0x00e8fb29: je     0x140e8fb5e
0x00e8fb2b: sub    eax,0x40
0x00e8fb2e: je     0x140e8fb55
0x00e8fb30: cmp    eax,0x80
0x00e8fb35: jne    0x140e8fb76
0x00e8fb37: cmp    r14d,0x2
0x00e8fb3b: jb     0x140e8fb4c
0x00e8fb3d: lea    rdx,[rip+0x804eb0]        # 0x1416949f4 ; literal="even "
0x00e8fb44: mov    rcx,r12
0x00e8fb47: call   0x140070b90
0x00e8fb4c: lea    rdx,[rip+0x8c164d]        # 0x1417511a0 ; literal="lines which emerge when reading along certain prescribed paths across the body of the poem"
0x00e8fb53: jmp    0x140e8fb6e
0x00e8fb55: lea    rdx,[rip+0x8c16a4]        # 0x141751200 ; literal="lines which can be read orthogonally across the standard lines"
0x00e8fb5c: jmp    0x140e8fb6e
0x00e8fb5e: lea    rdx,[rip+0x8c1753]        # 0x1417512b8 ; literal="lines which can be read backwards as well as forwards"
0x00e8fb65: jmp    0x140e8fb6e
0x00e8fb67: lea    rdx,[rip+0x8c1782]        # 0x1417512f0 ; literal="lines with different readings depending on word breaks"
0x00e8fb6e: mov    rcx,r12
0x00e8fb71: call   0x140070b90
0x00e8fb76: cmp    esi,0x2
0x00e8fb79: jne    0x140e8fb84
0x00e8fb7b: lea    rdx,[rip+0x77480a]        # 0x14160438c ; literal=" and "
0x00e8fb82: jmp    0x140e8fb8d
0x00e8fb84: jle    0x140e8fb95
0x00e8fb86: lea    rdx,[rip+0x774807]        # 0x141604394 ; literal=", "
0x00e8fb8d: mov    rcx,r12
0x00e8fb90: call   0x140070b90
0x00e8fb95: dec    esi
0x00e8fb97: inc    edi
0x00e8fb99: cmp    edi,0x4
0x00e8fb9c: jl     0x140e8fae7
0x00e8fba2: lea    rdx,[rip+0x7899ef]        # 0x141619598 ; literal=".  "
0x00e8fba9: mov    rcx,r12
0x00e8fbac: call   0x140070b90
0x00e8fbb1: mov    eax,DWORD PTR [r13+0xa8]
0x00e8fbb8: cmp    DWORD PTR [r13+0xac],0xffffffff
0x00e8fbc0: je     0x140e90137
0x00e8fbc6: test   eax,eax
0x00e8fbc8: je     0x140e902f8
0x00e8fbce: lea    rcx,[r13+0x90]
0x00e8fbd5: call   0x140070480
0x00e8fbda: cmp    rax,0x2
0x00e8fbde: jae    0x140e8fbfe
0x00e8fbe0: lea    rcx,[r13+0x90]
0x00e8fbe7: xor    edx,edx
0x00e8fbe9: call   0x140070850
0x00e8fbee: mov    rcx,QWORD PTR [rax]
0x00e8fbf1: cmp    DWORD PTR [rcx+0xc],0x2
0x00e8fbf5: lea    rdx,[rip+0x8c1644]        # 0x141751240 ; literal="The poem has "
0x00e8fbfc: jl     0x140e8fc05
0x00e8fbfe: lea    rdx,[rip+0x8c164b]        # 0x141751250 ; literal="Each line has "
0x00e8fc05: mov    rcx,r12
0x00e8fc08: call   0x140070b90
0x00e8fc0d: lea    rcx,[rbp+0x88]
0x00e8fc14: call   0x140070cc0
0x00e8fc19: nop
0x00e8fc1a: lea    rdx,[rbp+0x88]
0x00e8fc21: mov    ecx,DWORD PTR [r13+0xa8]
0x00e8fc28: call   0x140547840
0x00e8fc2d: lea    rdx,[rbp+0x88]
0x00e8fc34: mov    rcx,r12
0x00e8fc37: call   0x1400bb340
0x00e8fc3c: lea    rbx,[rip+0x773dad]        # 0x1416039f0 ; literal=" "
0x00e8fc43: mov    rdx,rbx
0x00e8fc46: mov    rcx,r12
0x00e8fc49: call   0x140070b90
0x00e8fc4e: mov    rcx,r12
0x00e8fc51: cmp    DWORD PTR [r13+0xa8],0x1
0x00e8fc59: lea    rdx,[rip+0x8c171c]        # 0x14175137c ; literal="foot"
0x00e8fc60: je     0x140e8fc69
0x00e8fc62: lea    rdx,[rip+0x8c170b]        # 0x141751374 ; literal="feet"
0x00e8fc69: call   0x140070b90
0x00e8fc6e: lea    rdx,[rip+0x779bd3]        # 0x141609848 ; literal=" with "
0x00e8fc75: mov    rcx,r12
0x00e8fc78: call   0x140070b90
0x00e8fc7d: mov    rcx,r12
0x00e8fc80: test   BYTE PTR [r13+0x8c],0x1
0x00e8fc88: je     0x140e8fdfb
0x00e8fc8e: lea    rdx,[rip+0x8c1703]        # 0x141751398 ; literal="a tone pattern of "
0x00e8fc95: call   0x140070b90
0x00e8fc9a: movsxd rax,DWORD PTR [r13+0xac]
0x00e8fca1: cmp    eax,0xb
0x00e8fca4: ja     0x140e8fdef
0x00e8fcaa: mov    ecx,DWORD PTR [r15+rax*4+0xe9481c]
0x00e8fcb2: add    rcx,r15
0x00e8fcb5: jmp    rcx
0x00e8fcb7: lea    rdx,[rip+0x8c16ca]        # 0x141751388 ; literal="even-uneven"
0x00e8fcbe: mov    rcx,r12
0x00e8fcc1: call   0x140070b90
0x00e8fcc6: lea    rdx,[rip+0x7898cb]        # 0x141619598 ; literal=".  "
0x00e8fccd: jmp    0x140e90129
0x00e8fcd2: lea    rdx,[rip+0x8c165f]        # 0x141751338 ; literal="uneven-even"
0x00e8fcd9: mov    rcx,r12
0x00e8fcdc: call   0x140070b90
0x00e8fce1: lea    rdx,[rip+0x7898b0]        # 0x141619598 ; literal=".  "
0x00e8fce8: jmp    0x140e90129
0x00e8fced: lea    rdx,[rip+0x8c1634]        # 0x141751328 ; literal="uneven-uneven"
0x00e8fcf4: mov    rcx,r12
0x00e8fcf7: call   0x140070b90
0x00e8fcfc: lea    rdx,[rip+0x789895]        # 0x141619598 ; literal=".  "
0x00e8fd03: jmp    0x140e90129
0x00e8fd08: lea    rdx,[rip+0x8c1651]        # 0x141751360 ; literal="uneven-even-even"
0x00e8fd0f: mov    rcx,r12
0x00e8fd12: call   0x140070b90
0x00e8fd17: lea    rdx,[rip+0x78987a]        # 0x141619598 ; literal=".  "
0x00e8fd1e: jmp    0x140e90129
0x00e8fd23: lea    rdx,[rip+0x8c161e]        # 0x141751348 ; literal="even-uneven-even"
0x00e8fd2a: mov    rcx,r12
0x00e8fd2d: call   0x140070b90
0x00e8fd32: lea    rdx,[rip+0x78985f]        # 0x141619598 ; literal=".  "
0x00e8fd39: jmp    0x140e90129
0x00e8fd3e: lea    rdx,[rip+0x8c16eb]        # 0x141751430 ; literal="even-even-uneven"
0x00e8fd45: mov    rcx,r12
0x00e8fd48: call   0x140070b90
0x00e8fd4d: lea    rdx,[rip+0x789844]        # 0x141619598 ; literal=".  "
0x00e8fd54: jmp    0x140e90129
0x00e8fd59: lea    rdx,[rip+0x8c16b8]        # 0x141751418 ; literal="uneven-even-uneven"
0x00e8fd60: mov    rcx,r12
0x00e8fd63: call   0x140070b90
0x00e8fd68: lea    rdx,[rip+0x789829]        # 0x141619598 ; literal=".  "
0x00e8fd6f: jmp    0x140e90129
0x00e8fd74: lea    rdx,[rip+0x8c16dd]        # 0x141751458 ; literal="even-even"
0x00e8fd7b: mov    rcx,r12
0x00e8fd7e: call   0x140070b90
0x00e8fd83: lea    rdx,[rip+0x78980e]        # 0x141619598 ; literal=".  "
0x00e8fd8a: jmp    0x140e90129
0x00e8fd8f: lea    rdx,[rip+0x8c16b2]        # 0x141751448 ; literal="even-even-even"
0x00e8fd96: mov    rcx,r12
0x00e8fd99: call   0x140070b90
0x00e8fd9e: lea    rdx,[rip+0x7897f3]        # 0x141619598 ; literal=".  "
0x00e8fda5: jmp    0x140e90129
0x00e8fdaa: lea    rdx,[rip+0x8c1617]        # 0x1417513c8 ; literal="even-uneven-uneven"
0x00e8fdb1: mov    rcx,r12
0x00e8fdb4: call   0x140070b90
0x00e8fdb9: lea    rdx,[rip+0x7897d8]        # 0x141619598 ; literal=".  "
0x00e8fdc0: jmp    0x140e90129
0x00e8fdc5: lea    rdx,[rip+0x8c15e4]        # 0x1417513b0 ; literal="uneven-uneven-even"
0x00e8fdcc: mov    rcx,r12
0x00e8fdcf: call   0x140070b90
0x00e8fdd4: lea    rdx,[rip+0x7897bd]        # 0x141619598 ; literal=".  "
0x00e8fddb: jmp    0x140e90129
0x00e8fde0: lea    rdx,[rip+0x8c1619]        # 0x141751400 ; literal="uneven-uneven-uneven"
0x00e8fde7: mov    rcx,r12
0x00e8fdea: call   0x140070b90
0x00e8fdef: lea    rdx,[rip+0x7897a2]        # 0x141619598 ; literal=".  "
0x00e8fdf6: jmp    0x140e90129
0x00e8fdfb: test   DWORD PTR [r13+0xe4],0x4000
0x00e8fe06: je     0x140e8ffb1
0x00e8fe0c: lea    rdx,[rip+0x8c15cd]        # 0x1417513e0 ; literal="a syllable weight pattern of "
0x00e8fe13: call   0x140070b90
0x00e8fe18: movsxd rax,DWORD PTR [r13+0xac]
0x00e8fe1f: cmp    eax,0xb
0x00e8fe22: ja     0x140e8fea3
0x00e8fe24: mov    ecx,DWORD PTR [r15+rax*4+0xe9484c]
0x00e8fe2c: add    rcx,r15
0x00e8fe2f: jmp    rcx
0x00e8fe31: lea    rdx,[rip+0x8c0af0]        # 0x141750928 ; literal="short-long"
0x00e8fe38: jmp    0x140e8fe9b
0x00e8fe3a: lea    rdx,[rip+0x8c0ad7]        # 0x141750918 ; literal="long-short"
0x00e8fe41: jmp    0x140e8fe9b
0x00e8fe43: lea    rdx,[rip+0x8c0b06]        # 0x141750950 ; literal="long-long"
0x00e8fe4a: jmp    0x140e8fe9b
0x00e8fe4c: lea    rdx,[rip+0x8c0ae5]        # 0x141750938 ; literal="long-short-short"
0x00e8fe53: jmp    0x140e8fe9b
0x00e8fe55: lea    rdx,[rip+0x8c0a84]        # 0x1417508e0 ; literal="short-long-short"
0x00e8fe5c: jmp    0x140e8fe9b
0x00e8fe5e: lea    rdx,[rip+0x8c0a63]        # 0x1417508c8 ; literal="short-short-long"
0x00e8fe65: jmp    0x140e8fe9b
0x00e8fe67: lea    rdx,[rip+0x8c0a9a]        # 0x141750908 ; literal="long-short-long"
0x00e8fe6e: jmp    0x140e8fe9b
0x00e8fe70: lea    rdx,[rip+0x8c0a81]        # 0x1417508f8 ; literal="short-short"
0x00e8fe77: jmp    0x140e8fe9b
0x00e8fe79: lea    rdx,[rip+0x8c0b28]        # 0x1417509a8 ; literal="short-short-short"
0x00e8fe80: jmp    0x140e8fe9b
0x00e8fe82: lea    rdx,[rip+0x8c0b0f]        # 0x141750998 ; literal="short-long-long"
0x00e8fe89: jmp    0x140e8fe9b
0x00e8fe8b: lea    rdx,[rip+0x8c0b3e]        # 0x1417509d0 ; literal="long-long-short"
0x00e8fe92: jmp    0x140e8fe9b
0x00e8fe94: lea    rdx,[rip+0x8c0b25]        # 0x1417509c0 ; literal="long-long-long"
0x00e8fe9b: mov    rcx,r12
0x00e8fe9e: call   0x140070b90
0x00e8fea3: lea    rdx,[rip+0x8c0abe]        # 0x141750968 ; literal=" (quantitative "
0x00e8feaa: mov    rcx,r12
0x00e8fead: call   0x140070b90
0x00e8feb2: movsxd rax,DWORD PTR [r13+0xac]
0x00e8feb9: cmp    eax,0xb
0x00e8febc: ja     0x140e8ff3d
0x00e8febe: mov    ecx,DWORD PTR [r15+rax*4+0xe9487c]
0x00e8fec6: add    rcx,r15
0x00e8fec9: jmp    rcx
0x00e8fecb: lea    rdx,[rip+0x8c0a8a]        # 0x14175095c ; literal="iambic"
0x00e8fed2: jmp    0x140e8ff35
0x00e8fed4: lea    rdx,[rip+0x8c0aad]        # 0x141750988 ; literal="trochaic"
0x00e8fedb: jmp    0x140e8ff35
0x00e8fedd: lea    rdx,[rip+0x8c0a94]        # 0x141750978 ; literal="spondaic"
0x00e8fee4: jmp    0x140e8ff35
0x00e8fee6: lea    rdx,[rip+0x8c0b33]        # 0x141750a20 ; literal="dactylic"
0x00e8feed: jmp    0x140e8ff35
0x00e8feef: lea    rdx,[rip+0x8c0b1a]        # 0x141750a10 ; literal="amphibrachic"
0x00e8fef6: jmp    0x140e8ff35
0x00e8fef8: lea    rdx,[rip+0x8c0b39]        # 0x141750a38 ; literal="anapaestic"
0x00e8feff: jmp    0x140e8ff35
0x00e8ff01: lea    rdx,[rip+0x8c0b24]        # 0x141750a2c ; literal="cretic"
0x00e8ff08: jmp    0x140e8ff35
0x00e8ff0a: lea    rdx,[rip+0x8c0adf]        # 0x1417509f0 ; literal="pyrrhic"
0x00e8ff11: jmp    0x140e8ff35
0x00e8ff13: lea    rdx,[rip+0x8c0ac6]        # 0x1417509e0 ; literal="tribrachic"
0x00e8ff1a: jmp    0x140e8ff35
0x00e8ff1c: lea    rdx,[rip+0x8c0ae5]        # 0x141750a08 ; literal="bacchic"
0x00e8ff23: jmp    0x140e8ff35
0x00e8ff25: lea    rdx,[rip+0x8c0acc]        # 0x1417509f8 ; literal="antibacchic"
0x00e8ff2c: jmp    0x140e8ff35
0x00e8ff2e: lea    rdx,[rip+0x8c0b63]        # 0x141750a98 ; literal="molossic"
0x00e8ff35: mov    rcx,r12
0x00e8ff38: call   0x140070b90
0x00e8ff3d: mov    rdx,rbx
0x00e8ff40: mov    rcx,r12
0x00e8ff43: call   0x140070b90
0x00e8ff48: mov    eax,DWORD PTR [r13+0xa8]
0x00e8ff4f: dec    eax
0x00e8ff51: cmp    eax,0x7
0x00e8ff54: ja     0x140e90122
0x00e8ff5a: cdqe
0x00e8ff5c: mov    ecx,DWORD PTR [r15+rax*4+0xe948ac]
0x00e8ff64: add    rcx,r15
0x00e8ff67: jmp    rcx
0x00e8ff69: lea    rdx,[rip+0x8c0b18]        # 0x141750a88 ; literal="monometer"
0x00e8ff70: jmp    0x140e9011a
0x00e8ff75: lea    rdx,[rip+0x8c0b2c]        # 0x141750aa8 ; literal="trimeter"
0x00e8ff7c: jmp    0x140e9011a
0x00e8ff81: lea    rdx,[rip+0x8c0ad0]        # 0x141750a58 ; literal="tetrameter"
0x00e8ff88: jmp    0x140e9011a
0x00e8ff8d: lea    rdx,[rip+0x8c0ab4]        # 0x141750a48 ; literal="pentameter"
0x00e8ff94: jmp    0x140e9011a
0x00e8ff99: lea    rdx,[rip+0x8c0ad8]        # 0x141750a78 ; literal="hexameter"
0x00e8ffa0: jmp    0x140e9011a
0x00e8ffa5: lea    rdx,[rip+0x8c0abc]        # 0x141750a68 ; literal="heptameter"
0x00e8ffac: jmp    0x140e9011a
0x00e8ffb1: lea    rdx,[rip+0x8c0ba8]        # 0x141750b60 ; literal="an accent pattern of "
0x00e8ffb8: call   0x140070b90
0x00e8ffbd: movsxd rax,DWORD PTR [r13+0xac]
0x00e8ffc4: cmp    eax,0xb
0x00e8ffc7: ja     0x140e90048
0x00e8ffc9: mov    ecx,DWORD PTR [r15+rax*4+0xe948cc]
0x00e8ffd1: add    rcx,r15
0x00e8ffd4: jmp    rcx
0x00e8ffd6: lea    rdx,[rip+0x8c0b6b]        # 0x141750b48 ; literal="unstressed-stressed"
0x00e8ffdd: jmp    0x140e90040
0x00e8ffdf: lea    rdx,[rip+0x8c0af2]        # 0x141750ad8 ; literal="stressed-unstressed"
0x00e8ffe6: jmp    0x140e90040
0x00e8ffe8: lea    rdx,[rip+0x8c0ad1]        # 0x141750ac0 ; literal="stressed-stressed"
0x00e8ffef: jmp    0x140e90040
0x00e8fff1: lea    rdx,[rip+0x8c0b18]        # 0x141750b10 ; literal="stressed-unstressed-unstressed"
0x00e8fff8: jmp    0x140e90040
0x00e8fffa: lea    rdx,[rip+0x8c0aef]        # 0x141750af0 ; literal="unstressed-stressed-unstressed"
0x00e90001: jmp    0x140e90040
0x00e90003: lea    rdx,[rip+0x8c0bfe]        # 0x141750c08 ; literal="unstressed-unstressed-stressed"
0x00e9000a: jmp    0x140e90040
0x00e9000c: lea    rdx,[rip+0x8c0bd5]        # 0x141750be8 ; literal="stressed-unstressed-stressed"
0x00e90013: jmp    0x140e90040
0x00e90015: lea    rdx,[rip+0x8c0c34]        # 0x141750c50 ; literal="unstressed-unstressed"
0x00e9001c: jmp    0x140e90040
0x00e9001e: lea    rdx,[rip+0x8c0c03]        # 0x141750c28 ; literal="unstressed-unstressed-unstressed"
0x00e90025: jmp    0x140e90040
0x00e90027: lea    rdx,[rip+0x8c0b6a]        # 0x141750b98 ; literal="unstressed-stressed-stressed"
0x00e9002e: jmp    0x140e90040
0x00e90030: lea    rdx,[rip+0x8c0b41]        # 0x141750b78 ; literal="stressed-stressed-unstressed"
0x00e90037: jmp    0x140e90040
0x00e90039: lea    rdx,[rip+0x8c0b88]        # 0x141750bc8 ; literal="stressed-stressed-stressed"
0x00e90040: mov    rcx,r12
0x00e90043: call   0x140070b90
0x00e90048: lea    rdx,[rip+0x8c0b69]        # 0x141750bb8 ; literal=" (qualitative "
0x00e9004f: mov    rcx,r12
0x00e90052: call   0x140070b90
0x00e90057: movsxd rax,DWORD PTR [r13+0xac]
0x00e9005e: cmp    eax,0xb
0x00e90061: ja     0x140e900e2
0x00e90063: mov    ecx,DWORD PTR [r15+rax*4+0xe948fc]
0x00e9006b: add    rcx,r15
0x00e9006e: jmp    rcx
0x00e90070: lea    rdx,[rip+0x8c08e5]        # 0x14175095c ; literal="iambic"
0x00e90077: jmp    0x140e900da
0x00e90079: lea    rdx,[rip+0x8c0908]        # 0x141750988 ; literal="trochaic"
0x00e90080: jmp    0x140e900da
0x00e90082: lea    rdx,[rip+0x8c08ef]        # 0x141750978 ; literal="spondaic"
0x00e90089: jmp    0x140e900da
0x00e9008b: lea    rdx,[rip+0x8c098e]        # 0x141750a20 ; literal="dactylic"
0x00e90092: jmp    0x140e900da
0x00e90094: lea    rdx,[rip+0x8c0975]        # 0x141750a10 ; literal="amphibrachic"
0x00e9009b: jmp    0x140e900da
0x00e9009d: lea    rdx,[rip+0x8c0994]        # 0x141750a38 ; literal="anapaestic"
0x00e900a4: jmp    0x140e900da
0x00e900a6: lea    rdx,[rip+0x8c097f]        # 0x141750a2c ; literal="cretic"
0x00e900ad: jmp    0x140e900da
0x00e900af: lea    rdx,[rip+0x8c093a]        # 0x1417509f0 ; literal="pyrrhic"
0x00e900b6: jmp    0x140e900da
0x00e900b8: lea    rdx,[rip+0x8c0921]        # 0x1417509e0 ; literal="tribrachic"
0x00e900bf: jmp    0x140e900da
0x00e900c1: lea    rdx,[rip+0x8c0940]        # 0x141750a08 ; literal="bacchic"
0x00e900c8: jmp    0x140e900da
0x00e900ca: lea    rdx,[rip+0x8c0927]        # 0x1417509f8 ; literal="antibacchic"
0x00e900d1: jmp    0x140e900da
0x00e900d3: lea    rdx,[rip+0x8c09be]        # 0x141750a98 ; literal="molossic"
0x00e900da: mov    rcx,r12
0x00e900dd: call   0x140070b90
0x00e900e2: mov    rdx,rbx
0x00e900e5: mov    rcx,r12
0x00e900e8: call   0x140070b90
0x00e900ed: mov    eax,DWORD PTR [r13+0xa8]
0x00e900f4: dec    eax
0x00e900f6: cmp    eax,0x7
0x00e900f9: ja     0x140e90122
0x00e900fb: cdqe
0x00e900fd: mov    ecx,DWORD PTR [r15+rax*4+0xe9492c]
0x00e90105: add    rcx,r15
0x00e90108: jmp    rcx
0x00e9010a: lea    rdx,[rip+0x8c09a7]        # 0x141750ab8 ; literal="dimeter"
0x00e90111: jmp    0x140e9011a
0x00e90113: lea    rdx,[rip+0x8c0a1e]        # 0x141750b38 ; literal="octameter"
0x00e9011a: mov    rcx,r12
0x00e9011d: call   0x140070b90
0x00e90122: lea    rdx,[rip+0x8c0a07]        # 0x141750b30 ; literal=").  "
0x00e90129: mov    rcx,r12
0x00e9012c: call   0x140070b90
0x00e90131: nop
0x00e90132: jmp    0x140e902ec
0x00e90137: test   eax,eax
0x00e90139: je     0x140e902f8
0x00e9013f: lea    rcx,[r13+0x90]
0x00e90146: lea    rdx,[rsp+0x60]
0x00e9014b: call   0x140070870
0x00e90150: lea    rcx,[r13+0x90]
0x00e90157: lea    rdx,[rbp-0x68]
0x00e9015b: call   0x140070860
0x00e90160: lea    r8,[rbp-0x68]
0x00e90164: lea    rdx,[rsp+0x33]
0x00e90169: lea    rcx,[rsp+0x60]
0x00e9016e: call   0x140070450
0x00e90173: xor    edx,edx
0x00e90175: movzx  ecx,BYTE PTR [rax]
0x00e90178: call   0x140066de0
0x00e9017d: test   al,al
0x00e9017f: je     0x140e9026e
0x00e90185: lea    rcx,[rsp+0x60]
0x00e9018a: call   0x140070440
0x00e9018f: mov    rcx,QWORD PTR [rax]
0x00e90192: cmp    DWORD PTR [rcx+0x15c],0xffffffff
0x00e90199: jne    0x140e902f8
0x00e9019f: lea    rcx,[rsp+0x60]
0x00e901a4: call   0x140070440
0x00e901a9: mov    rcx,QWORD PTR [rax]
0x00e901ac: add    rcx,0x50
0x00e901b0: lea    rdx,[rsp+0x68]
0x00e901b5: call   0x140070870
0x00e901ba: lea    rcx,[rsp+0x60]
0x00e901bf: call   0x140070440
0x00e901c4: mov    rcx,QWORD PTR [rax]
0x00e901c7: add    rcx,0x50
0x00e901cb: lea    rdx,[rsp+0x78]
0x00e901d0: call   0x140070860
0x00e901d5: lea    r8,[rsp+0x78]
0x00e901da: lea    rdx,[rsp+0x32]
0x00e901df: lea    rcx,[rsp+0x68]
0x00e901e4: call   0x140070450
0x00e901e9: xor    edx,edx
0x00e901eb: movzx  ecx,BYTE PTR [rax]
0x00e901ee: call   0x140066de0
0x00e901f3: test   al,al
0x00e901f5: je     0x140e9023f
0x00e901f7: nop    WORD PTR [rax+rax*1+0x0]
0x00e90200: lea    rcx,[rsp+0x68]
0x00e90205: call   0x140070440
0x00e9020a: cmp    DWORD PTR [rax],0xffffffff
0x00e9020d: jne    0x140e902f8
0x00e90213: lea    rcx,[rsp+0x68]
0x00e90218: call   0x140070980
0x00e9021d: lea    r8,[rsp+0x78]
0x00e90222: lea    rdx,[rsp+0x32]
0x00e90227: lea    rcx,[rsp+0x68]
0x00e9022c: call   0x140070450
0x00e90231: xor    edx,edx
0x00e90233: movzx  ecx,BYTE PTR [rax]
0x00e90236: call   0x140066de0
0x00e9023b: test   al,al
0x00e9023d: jne    0x140e90200
0x00e9023f: lea    rcx,[rsp+0x60]
0x00e90244: call   0x140070430
0x00e90249: lea    r8,[rbp-0x68]
0x00e9024d: lea    rdx,[rsp+0x33]
0x00e90252: lea    rcx,[rsp+0x60]
0x00e90257: call   0x140070450
0x00e9025c: xor    edx,edx
0x00e9025e: movzx  ecx,BYTE PTR [rax]
0x00e90261: call   0x140066de0
0x00e90266: test   al,al
0x00e90268: jne    0x140e90185
0x00e9026e: lea    rcx,[r13+0x90]
0x00e90275: call   0x140070480
0x00e9027a: cmp    rax,0x2
0x00e9027e: jae    0x140e9029e
0x00e90280: lea    rcx,[r13+0x90]
0x00e90287: xor    edx,edx
0x00e90289: call   0x140070850
0x00e9028e: mov    rcx,QWORD PTR [rax]
0x00e90291: cmp    DWORD PTR [rcx+0xc],0x2
0x00e90295: lea    rdx,[rip+0x8c0fa4]        # 0x141751240 ; literal="The poem has "
0x00e9029c: jl     0x140e902a5
0x00e9029e: lea    rdx,[rip+0x8c0fab]        # 0x141751250 ; literal="Each line has "
0x00e902a5: mov    rcx,r12
0x00e902a8: call   0x140070b90
0x00e902ad: lea    rcx,[rbp+0x88]
0x00e902b4: call   0x140070cc0
0x00e902b9: nop
0x00e902ba: lea    rdx,[rbp+0x88]
0x00e902c1: mov    ecx,DWORD PTR [r13+0xa8]
0x00e902c8: call   0x140547840
0x00e902cd: lea    rdx,[rbp+0x88]
0x00e902d4: mov    rcx,r12
0x00e902d7: call   0x1400bb340
0x00e902dc: lea    rdx,[rip+0x8c0a5d]        # 0x141750d40 ; literal=" syllables.  "
0x00e902e3: mov    rcx,r12
0x00e902e6: call   0x140070b90
0x00e902eb: nop
0x00e902ec: lea    rcx,[rbp+0x88]
0x00e902f3: call   0x140069460
0x00e902f8: cmp    DWORD PTR [r13+0xb0],0xffffffff
0x00e90300: je     0x140e9038a
0x00e90306: lea    rcx,[r13+0x90]
0x00e9030d: call   0x140070480
0x00e90312: cmp    rax,0x2
0x00e90316: jae    0x140e90336
0x00e90318: lea    rcx,[r13+0x90]
0x00e9031f: xor    edx,edx
0x00e90321: call   0x140070850
0x00e90326: mov    rcx,QWORD PTR [rax]
0x00e90329: cmp    DWORD PTR [rcx+0xc],0x2
0x00e9032d: lea    rdx,[rip+0x8c0f0c]        # 0x141751240 ; literal="The poem has "
0x00e90334: jl     0x140e9033d
0x00e90336: lea    rdx,[rip+0x8c09e3]        # 0x141750d20 ; literal="Every line of the poem has "
0x00e9033d: mov    rcx,r12
0x00e90340: call   0x140070b90
0x00e90345: mov    ecx,DWORD PTR [r13+0xb0]
0x00e9034c: test   ecx,ecx
0x00e9034e: je     0x140e9036c
0x00e90350: sub    ecx,0x1
0x00e90353: je     0x140e90363
0x00e90355: cmp    ecx,0x1
0x00e90358: jne    0x140e9037b
0x00e9035a: lea    rdx,[rip+0x8c0947]        # 0x141750ca8 ; literal="a terminal caesura"
0x00e90361: jmp    0x140e90373
0x00e90363: lea    rdx,[rip+0x8c09e6]        # 0x141750d50 ; literal="a medial caesura"
0x00e9036a: jmp    0x140e90373
0x00e9036c: lea    rdx,[rip+0x8c09f5]        # 0x141750d68 ; literal="an initial caesura"
0x00e90373: mov    rcx,r12
0x00e90376: call   0x140070b90
0x00e9037b: lea    rdx,[rip+0x789216]        # 0x141619598 ; literal=".  "
0x00e90382: mov    rcx,r12
0x00e90385: call   0x140070b90
0x00e9038a: mov    BYTE PTR [rsp+0x40],0x1
0x00e9038f: lea    rcx,[r13+0x90]
0x00e90396: lea    rdx,[rbp-0x80]
0x00e9039a: call   0x140070870
0x00e9039f: lea    rcx,[r13+0x90]
0x00e903a6: lea    rdx,[rbp-0x30]
0x00e903aa: call   0x140070860
0x00e903af: lea    r8,[rbp-0x30]
0x00e903b3: lea    rdx,[rsp+0x33]
0x00e903b8: lea    rcx,[rbp-0x80]
0x00e903bc: call   0x140070450
0x00e903c1: xor    edx,edx
0x00e903c3: movzx  ecx,BYTE PTR [rax]
0x00e903c6: call   0x140066de0
0x00e903cb: test   al,al
0x00e903cd: je     0x140e90537
0x00e903d3: lea    rcx,[rbp-0x80]
0x00e903d7: call   0x140070440
0x00e903dc: mov    rcx,QWORD PTR [rax]
0x00e903df: test   BYTE PTR [rcx],0x1
0x00e903e2: jne    0x140e903fa
0x00e903e4: lea    rcx,[r13+0x90]
0x00e903eb: call   0x140070480
0x00e903f0: cmp    rax,0x2
0x00e903f4: jae    0x140e90589
0x00e903fa: lea    rcx,[rbp-0x80]
0x00e903fe: call   0x140070440
0x00e90403: mov    rcx,QWORD PTR [rax]
0x00e90406: cmp    DWORD PTR [rcx+0x18],0xffffffff
0x00e9040a: jne    0x140e90589
0x00e90410: lea    rcx,[rbp-0x80]
0x00e90414: call   0x140070440
0x00e90419: mov    rcx,QWORD PTR [rax]
0x00e9041c: cmp    DWORD PTR [rcx+0x1c],0xffffffff
0x00e90420: jne    0x140e90589
0x00e90426: mov    edi,0xffffffff
0x00e9042b: mov    bl,0x1
0x00e9042d: xor    sil,sil
0x00e90430: lea    rcx,[rbp-0x80]
0x00e90434: call   0x140070440
0x00e90439: mov    rcx,QWORD PTR [rax]
0x00e9043c: add    rcx,0x20
0x00e90440: lea    rdx,[rsp+0x60]
0x00e90445: call   0x140070870
0x00e9044a: lea    rcx,[rbp-0x80]
0x00e9044e: call   0x140070440
0x00e90453: mov    rcx,QWORD PTR [rax]
0x00e90456: add    rcx,0x20
0x00e9045a: lea    rdx,[rsp+0x78]
0x00e9045f: call   0x140070860
0x00e90464: lea    r8,[rsp+0x78]
0x00e90469: lea    rdx,[rsp+0x32]
0x00e9046e: lea    rcx,[rsp+0x60]
0x00e90473: call   0x140070450
0x00e90478: xor    edx,edx
0x00e9047a: movzx  ecx,BYTE PTR [rax]
0x00e9047d: call   0x140066de0
0x00e90482: test   al,al
0x00e90484: je     0x140e90589
0x00e9048a: xor    r12d,r12d
0x00e9048d: nop    DWORD PTR [rax]
0x00e90490: lea    rcx,[rsp+0x60]
0x00e90495: call   0x140070440
0x00e9049a: cmp    DWORD PTR [rax],r12d
0x00e9049d: jl     0x140e904cd
0x00e9049f: lea    rcx,[rsp+0x60]
0x00e904a4: call   0x140070440
0x00e904a9: cmp    DWORD PTR [rax],0x1a
0x00e904ac: jge    0x140e904cd
0x00e904ae: lea    rcx,[rsp+0x60]
0x00e904b3: call   0x140070440
0x00e904b8: cmp    edi,0xffffffff
0x00e904bb: jne    0x140e904c1
0x00e904bd: mov    edi,DWORD PTR [rax]
0x00e904bf: jmp    0x140e904ca
0x00e904c1: movzx  ebx,bl
0x00e904c4: cmp    DWORD PTR [rax],edi
0x00e904c6: cmovne ebx,r12d
0x00e904ca: mov    sil,0x1
0x00e904cd: lea    rcx,[rsp+0x60]
0x00e904d2: call   0x140070980
0x00e904d7: lea    r8,[rsp+0x78]
0x00e904dc: lea    rdx,[rsp+0x32]
0x00e904e1: lea    rcx,[rsp+0x60]
0x00e904e6: call   0x140070450
0x00e904eb: xor    edx,edx
0x00e904ed: movzx  ecx,BYTE PTR [rax]
0x00e904f0: call   0x140066de0
0x00e904f5: test   al,al
0x00e904f7: jne    0x140e90490
0x00e904f9: mov    r12,QWORD PTR [rbp-0x50]
0x00e904fd: test   sil,sil
0x00e90500: je     0x140e90589
0x00e90506: test   bl,bl
0x00e90508: je     0x140e90589
0x00e9050a: lea    rcx,[rbp-0x80]
0x00e9050e: call   0x140070430
0x00e90513: lea    r8,[rbp-0x30]
0x00e90517: lea    rdx,[rsp+0x33]
0x00e9051c: lea    rcx,[rbp-0x80]
0x00e90520: call   0x140070450
0x00e90525: xor    edx,edx
0x00e90527: movzx  ecx,BYTE PTR [rax]
0x00e9052a: call   0x140066de0
0x00e9052f: test   al,al
0x00e90531: jne    0x140e903d3
0x00e90537: lea    rcx,[r13+0x90]
0x00e9053e: call   0x140070480
0x00e90543: cmp    rax,0x2
0x00e90547: jae    0x140e90564
0x00e90549: lea    rcx,[r13+0x90]
0x00e90550: xor    edx,edx
0x00e90552: call   0x140070850
0x00e90557: mov    rcx,QWORD PTR [rax]
0x00e9055a: cmp    DWORD PTR [rcx+0xc],0x2
0x00e9055e: jl     0x140e909b3
0x00e90564: lea    rdx,[rip+0x8c06fd]        # 0x141750c68 ; literal="The ending of each line of the poem shares the same rhyme"
0x00e9056b: mov    rcx,r12
0x00e9056e: call   0x140070b90
0x00e90573: test   BYTE PTR [r13+0xe4],0x2
0x00e9057b: je     0x140e90594
0x00e9057d: lea    rdx,[rip+0x8c076c]        # 0x141750cf0 ; literal=", though the rhyming doesn't have to be perfect"
0x00e90584: jmp    0x140e9099c
0x00e90589: xor    al,al
0x00e9058b: mov    BYTE PTR [rsp+0x40],al
0x00e9058f: jmp    0x140e909b3
0x00e90594: lea    rcx,[r13+0x90]
0x00e9059b: call   0x140070480
0x00e905a0: lea    rcx,[r13+0x90]
0x00e905a7: cmp    rax,0x2
0x00e905ab: jb     0x140e90771
0x00e905b1: xor    eax,eax
0x00e905b3: mov    ebx,eax
0x00e905b5: lea    rdx,[rsp+0x68]
0x00e905ba: call   0x140070870
0x00e905bf: lea    rcx,[r13+0x90]
0x00e905c6: lea    rdx,[rsp+0x78]
0x00e905cb: call   0x140070860
0x00e905d0: lea    r8,[rsp+0x78]
0x00e905d5: lea    rdx,[rsp+0x32]
0x00e905da: lea    rcx,[rsp+0x68]
0x00e905df: call   0x140070450
0x00e905e4: xor    edx,edx
0x00e905e6: movzx  ecx,BYTE PTR [rax]
0x00e905e9: call   0x140066de0
0x00e905ee: test   al,al
0x00e905f0: je     0x140e909a4
0x00e905f6: lea    rcx,[rsp+0x68]
0x00e905fb: call   0x140070440
0x00e90600: mov    rcx,QWORD PTR [rax]
0x00e90603: test   BYTE PTR [rcx+0x194],0x2
0x00e9060a: lea    eax,[rbx+0x1]
0x00e9060d: cmove  eax,ebx
0x00e90610: mov    ebx,eax
0x00e90612: lea    rcx,[rsp+0x68]
0x00e90617: call   0x140070430
0x00e9061c: lea    r8,[rsp+0x78]
0x00e90621: lea    rdx,[rsp+0x32]
0x00e90626: lea    rcx,[rsp+0x68]
0x00e9062b: call   0x140070450
0x00e90630: xor    edx,edx
0x00e90632: movzx  ecx,BYTE PTR [rax]
0x00e90635: call   0x140066de0
0x00e9063a: test   al,al
0x00e9063c: jne    0x140e905f6
0x00e9063e: test   ebx,ebx
0x00e90640: jle    0x140e909a4
0x00e90646: mov    esi,ebx
0x00e90648: lea    rdx,[rip+0x8c0671]        # 0x141750cc0 ; literal=", though rhymes at the end of lines in the "
0x00e9064f: mov    rcx,r12
0x00e90652: call   0x140070b90
0x00e90657: mov    edi,0x1
0x00e9065c: lea    rcx,[r13+0x90]
0x00e90663: lea    rdx,[rbp-0x70]
0x00e90667: call   0x140070870
0x00e9066c: lea    rcx,[r13+0x90]
0x00e90673: lea    rdx,[rbp-0x68]
0x00e90677: call   0x140070860
0x00e9067c: lea    r8,[rbp-0x68]
0x00e90680: lea    rdx,[rsp+0x32]
0x00e90685: lea    rcx,[rbp-0x70]
0x00e90689: call   0x140070450
0x00e9068e: xor    edx,edx
0x00e90690: movzx  ecx,BYTE PTR [rax]
0x00e90693: call   0x140066de0
0x00e90698: test   al,al
0x00e9069a: je     0x140e9073b
0x00e906a0: lea    rcx,[rbp-0x70]
0x00e906a4: call   0x140070440
0x00e906a9: mov    rcx,QWORD PTR [rax]
0x00e906ac: test   BYTE PTR [rcx+0x194],0x2
0x00e906b3: je     0x140e9070c
0x00e906b5: lea    rcx,[rbp+0x48]
0x00e906b9: call   0x140070cc0
0x00e906be: nop
0x00e906bf: xor    r8d,r8d
0x00e906c2: lea    rdx,[rbp+0x48]
0x00e906c6: mov    ecx,edi
0x00e906c8: call   0x140548050
0x00e906cd: lea    rcx,[rbp+0x48]
0x00e906d1: call   0x140546560
0x00e906d6: lea    rdx,[rbp+0x48]
0x00e906da: mov    rcx,r12
0x00e906dd: call   0x1400bb340
0x00e906e2: cmp    ebx,0x2
0x00e906e5: jne    0x140e906f0
0x00e906e7: lea    rdx,[rip+0x773c9e]        # 0x14160438c ; literal=" and "
0x00e906ee: jmp    0x140e906f9
0x00e906f0: jle    0x140e90701
0x00e906f2: lea    rdx,[rip+0x773c9b]        # 0x141604394 ; literal=", "
0x00e906f9: mov    rcx,r12
0x00e906fc: call   0x140070b90
0x00e90701: dec    ebx
0x00e90703: lea    rcx,[rbp+0x48]
0x00e90707: call   0x140069460
0x00e9070c: lea    rcx,[rbp-0x70]
0x00e90710: call   0x140070430
0x00e90715: inc    edi
0x00e90717: lea    r8,[rbp-0x68]
0x00e9071b: lea    rdx,[rsp+0x32]
0x00e90720: lea    rcx,[rbp-0x70]
0x00e90724: call   0x140070450
0x00e90729: xor    edx,edx
0x00e9072b: movzx  ecx,BYTE PTR [rax]
0x00e9072e: call   0x140066de0
0x00e90733: test   al,al
0x00e90735: jne    0x140e906a0
0x00e9073b: lea    rdx,[rip+0x7732ae]        # 0x1416039f0 ; literal=" "
0x00e90742: mov    rcx,r12
0x00e90745: call   0x140070b90
0x00e9074a: mov    rcx,r12
0x00e9074d: cmp    esi,0x2
0x00e90750: lea    rdx,[rip+0x8c0689]        # 0x141750de0 ; literal="sections"
0x00e90757: jge    0x140e90760
0x00e90759: lea    rdx,[rip+0x8c0678]        # 0x141750dd8 ; literal="section"
0x00e90760: call   0x140070b90
0x00e90765: lea    rdx,[rip+0x8c069c]        # 0x141750e08 ; literal=" don't need to match perfectly"
0x00e9076c: jmp    0x140e9099c
0x00e90771: xor    edx,edx
0x00e90773: call   0x140070850
0x00e90778: mov    rcx,QWORD PTR [rax]
0x00e9077b: sub    rcx,0xffffffffffffff80
0x00e9077f: call   0x1400709a0
0x00e90784: test   rax,rax
0x00e90787: je     0x140e909a4
0x00e9078d: xor    eax,eax
0x00e9078f: mov    ebx,eax
0x00e90791: lea    rcx,[r13+0x90]
0x00e90798: xor    edx,edx
0x00e9079a: call   0x140070850
0x00e9079f: mov    rcx,QWORD PTR [rax]
0x00e907a2: sub    rcx,0xffffffffffffff80
0x00e907a6: lea    rdx,[rsp+0x68]
0x00e907ab: call   0x140070870
0x00e907b0: lea    rcx,[r13+0x90]
0x00e907b7: xor    edx,edx
0x00e907b9: call   0x140070850
0x00e907be: mov    rcx,QWORD PTR [rax]
0x00e907c1: sub    rcx,0xffffffffffffff80
0x00e907c5: lea    rdx,[rsp+0x78]
0x00e907ca: call   0x140070860
0x00e907cf: lea    r8,[rsp+0x78]
0x00e907d4: lea    rdx,[rsp+0x32]
0x00e907d9: lea    rcx,[rsp+0x68]
0x00e907de: call   0x140070450
0x00e907e3: xor    edx,edx
0x00e907e5: movzx  ecx,BYTE PTR [rax]
0x00e907e8: call   0x140066de0
0x00e907ed: test   al,al
0x00e907ef: je     0x140e909a4
0x00e907f5: lea    rcx,[rsp+0x68]
0x00e907fa: call   0x140070440
0x00e907ff: test   BYTE PTR [rax],0x2
0x00e90802: lea    eax,[rbx+0x1]
0x00e90805: cmove  eax,ebx
0x00e90808: mov    ebx,eax
0x00e9080a: lea    rcx,[rsp+0x68]
0x00e9080f: call   0x140070980
0x00e90814: lea    r8,[rsp+0x78]
0x00e90819: lea    rdx,[rsp+0x32]
0x00e9081e: lea    rcx,[rsp+0x68]
0x00e90823: call   0x140070450
0x00e90828: xor    edx,edx
0x00e9082a: movzx  ecx,BYTE PTR [rax]
0x00e9082d: call   0x140066de0
0x00e90832: test   al,al
0x00e90834: jne    0x140e907f5
0x00e90836: test   ebx,ebx
0x00e90838: jle    0x140e909a4
0x00e9083e: mov    esi,ebx
0x00e90840: lea    rdx,[rip+0x8c05a9]        # 0x141750df0 ; literal=", though the rhyme"
0x00e90847: mov    rcx,r12
0x00e9084a: call   0x140070b90
0x00e9084f: cmp    ebx,0x2
0x00e90852: jl     0x140e90863
0x00e90854: lea    rdx,[rip+0x773c95]        # 0x1416044f0 ; literal="s"
0x00e9085b: mov    rcx,r12
0x00e9085e: call   0x140070b90
0x00e90863: lea    rdx,[rip+0x8c0526]        # 0x141750d90 ; literal=" at the end of the "
0x00e9086a: mov    rcx,r12
0x00e9086d: call   0x140070b90
0x00e90872: mov    edi,0x1
0x00e90877: lea    rcx,[r13+0x90]
0x00e9087e: xor    edx,edx
0x00e90880: call   0x140070850
0x00e90885: mov    rcx,QWORD PTR [rax]
0x00e90888: sub    rcx,0xffffffffffffff80
0x00e9088c: lea    rdx,[rbp-0x70]
0x00e90890: call   0x140070870
0x00e90895: lea    rcx,[r13+0x90]
0x00e9089c: xor    edx,edx
0x00e9089e: call   0x140070850
0x00e908a3: mov    rcx,QWORD PTR [rax]
0x00e908a6: sub    rcx,0xffffffffffffff80
0x00e908aa: lea    rdx,[rbp-0x68]
0x00e908ae: call   0x140070860
0x00e908b3: lea    r8,[rbp-0x68]
0x00e908b7: lea    rdx,[rsp+0x32]
0x00e908bc: lea    rcx,[rbp-0x70]
0x00e908c0: call   0x140070450
0x00e908c5: xor    edx,edx
0x00e908c7: movzx  ecx,BYTE PTR [rax]
0x00e908ca: call   0x140066de0
0x00e908cf: test   al,al
0x00e908d1: je     0x140e9096b
0x00e908d7: lea    rcx,[rbp-0x70]
0x00e908db: call   0x140070440
0x00e908e0: test   BYTE PTR [rax],0x2
0x00e908e3: je     0x140e9093c
0x00e908e5: lea    rcx,[rbp+0x48]
0x00e908e9: call   0x140070cc0
0x00e908ee: nop
0x00e908ef: xor    r8d,r8d
0x00e908f2: lea    rdx,[rbp+0x48]
0x00e908f6: mov    ecx,edi
0x00e908f8: call   0x140548050
0x00e908fd: lea    rcx,[rbp+0x48]
0x00e90901: call   0x140546560
0x00e90906: lea    rdx,[rbp+0x48]
0x00e9090a: mov    rcx,r12
0x00e9090d: call   0x1400bb340
0x00e90912: cmp    ebx,0x2
0x00e90915: jne    0x140e90920
0x00e90917: lea    rdx,[rip+0x773a6e]        # 0x14160438c ; literal=" and "
0x00e9091e: jmp    0x140e90929
0x00e90920: jle    0x140e90931
0x00e90922: lea    rdx,[rip+0x773a6b]        # 0x141604394 ; literal=", "
0x00e90929: mov    rcx,r12
0x00e9092c: call   0x140070b90
0x00e90931: dec    ebx
0x00e90933: lea    rcx,[rbp+0x48]
0x00e90937: call   0x140069460
0x00e9093c: lea    rcx,[rbp-0x70]
0x00e90940: call   0x140070980
0x00e90945: inc    edi
0x00e90947: lea    r8,[rbp-0x68]
0x00e9094b: lea    rdx,[rsp+0x32]
0x00e90950: lea    rcx,[rbp-0x70]
0x00e90954: call   0x140070450
0x00e90959: xor    edx,edx
0x00e9095b: movzx  ecx,BYTE PTR [rax]
0x00e9095e: call   0x140066de0
0x00e90963: test   al,al
0x00e90965: jne    0x140e908d7
0x00e9096b: lea    rdx,[rip+0x77307e]        # 0x1416039f0 ; literal=" "
0x00e90972: mov    rcx,r12
0x00e90975: call   0x140070b90
0x00e9097a: mov    rcx,r12
0x00e9097d: cmp    esi,0x2
0x00e90980: lea    rdx,[rip+0x8c03f9]        # 0x141750d80 ; literal="lines don't"
0x00e90987: jge    0x140e90990
0x00e90989: lea    rdx,[rip+0x8c0438]        # 0x141750dc8 ; literal="line doesn't"
0x00e90990: call   0x140070b90
0x00e90995: lea    rdx,[rip+0x8c040c]        # 0x141750da8 ; literal=" need to match perfectly"
0x00e9099c: mov    rcx,r12
0x00e9099f: call   0x140070b90
0x00e909a4: lea    rdx,[rip+0x788bed]        # 0x141619598 ; literal=".  "
0x00e909ab: mov    rcx,r12
0x00e909ae: call   0x140070b90
0x00e909b3: mov    BYTE PTR [rsp+0x70],0x1
0x00e909b8: mov    edi,0xffffffff
0x00e909bd: lea    rcx,[r13+0x90]
0x00e909c4: lea    rdx,[rbp-0x28]
0x00e909c8: call   0x140070870
0x00e909cd: mov    rcx,QWORD PTR [rax]
0x00e909d0: mov    QWORD PTR [rbp-0x80],rcx
0x00e909d4: lea    r8,[rbp-0x30]
0x00e909d8: lea    rdx,[rsp+0x32]
0x00e909dd: lea    rcx,[rbp-0x80]
0x00e909e1: call   0x140070450
0x00e909e6: xor    edx,edx
0x00e909e8: movzx  ecx,BYTE PTR [rax]
0x00e909eb: call   0x140066de0
0x00e909f0: test   al,al
0x00e909f2: je     0x140e90a6c
0x00e909f4: nop    DWORD PTR [rax+0x0]
0x00e909f8: nop    DWORD PTR [rax+rax*1+0x0]
0x00e90a00: mov    ebx,0x18
0x00e90a05: lea    rcx,[rbp-0x80]
0x00e90a09: call   0x140070440
0x00e90a0e: mov    rcx,QWORD PTR [rax]
0x00e90a11: cmp    DWORD PTR [rbx+rcx*1],0xffffffff
0x00e90a15: je     0x140e90a32
0x00e90a17: lea    rcx,[rbp-0x80]
0x00e90a1b: call   0x140070440
0x00e90a20: mov    rcx,QWORD PTR [rax]
0x00e90a23: cmp    edi,0xffffffff
0x00e90a26: jne    0x140e90a2d
0x00e90a28: mov    edi,DWORD PTR [rbx+rcx*1]
0x00e90a2b: jmp    0x140e90a32
0x00e90a2d: cmp    edi,DWORD PTR [rbx+rcx*1]
0x00e90a30: jne    0x140e90a3e
0x00e90a32: add    rbx,0x4
0x00e90a36: cmp    rbx,0x20
0x00e90a3a: jl     0x140e90a05
0x00e90a3c: jmp    0x140e90a43
0x00e90a3e: mov    BYTE PTR [rsp+0x70],0x0
0x00e90a43: lea    rcx,[rbp-0x80]
0x00e90a47: call   0x140070430
0x00e90a4c: lea    r8,[rbp-0x30]
0x00e90a50: lea    rdx,[rsp+0x32]
0x00e90a55: lea    rcx,[rbp-0x80]
0x00e90a59: call   0x140070450
0x00e90a5e: xor    edx,edx
0x00e90a60: movzx  ecx,BYTE PTR [rax]
0x00e90a63: call   0x140066de0
0x00e90a68: test   al,al
0x00e90a6a: jne    0x140e90a00
0x00e90a6c: mov    BYTE PTR [rsp+0x33],0x0
0x00e90a71: movdqa xmm6,XMMWORD PTR [rip+0x91c077]        # 0x1417acaf0
0x00e90a79: movdqu XMMWORD PTR [rbp+0x108],xmm6
0x00e90a81: movdqu XMMWORD PTR [rbp+0x118],xmm6
0x00e90a89: mov    QWORD PTR [rbp+0x128],0xffffffffffffffff
0x00e90a94: xor    ecx,ecx
0x00e90a96: mov    DWORD PTR [rsp+0x4c],ecx
0x00e90a9a: movdqa XMMWORD PTR [rbp+0x130],xmm6
0x00e90aa2: movdqa XMMWORD PTR [rbp+0x140],xmm6
0x00e90aaa: movdqa XMMWORD PTR [rbp+0x150],xmm6
0x00e90ab2: movdqa XMMWORD PTR [rbp+0x160],xmm6
0x00e90aba: movdqa XMMWORD PTR [rbp+0x170],xmm6
0x00e90ac2: movdqa XMMWORD PTR [rbp+0x180],xmm6
0x00e90aca: mov    QWORD PTR [rbp+0x190],0xffffffffffffffff
0x00e90ad5: mov    DWORD PTR [rbp-0x54],ecx
0x00e90ad8: mov    DWORD PTR [rsp+0x50],ecx
0x00e90adc: mov    BYTE PTR [rsp+0x32],cl
0x00e90ae0: lea    rcx,[r13+0x90]
0x00e90ae7: lea    rdx,[rbp-0x28]
0x00e90aeb: call   0x140070870
0x00e90af0: mov    rcx,QWORD PTR [rax]
0x00e90af3: lea    r14,[r13+0x90]
0x00e90afa: mov    QWORD PTR [rsp+0x68],r14
0x00e90aff: mov    r13d,0x1
0x00e90b05: mov    DWORD PTR [rbp-0x40],r13d
0x00e90b09: mov    DWORD PTR [rbp-0x3c],r13d
0x00e90b0d: movzx  esi,BYTE PTR [rsp+0x30]
0x00e90b12: movzx  ebx,BYTE PTR [rsp+0x30]
0x00e90b17: movzx  edi,BYTE PTR [rsp+0x30]
0x00e90b1c: mov    r8d,0xff
0x00e90b22: mov    QWORD PTR [rbp-0x80],rcx
0x00e90b26: cmp    rcx,QWORD PTR [rbp-0x30]
0x00e90b2a: jne    0x140e90b30
0x00e90b2c: xor    dl,dl
0x00e90b2e: jmp    0x140e90b37
0x00e90b30: mov    edx,r13d
0x00e90b33: cmovb  edx,r8d
0x00e90b37: test   dl,dl
0x00e90b39: jns    0x140e94700
0x00e90b3f: lea    rcx,[rbp-0x80]
0x00e90b43: call   0x140070440
0x00e90b48: mov    r13,QWORD PTR [rax]
0x00e90b4b: mov    QWORD PTR [rsp+0x58],r13
0x00e90b50: mov    rcx,r14
0x00e90b53: call   0x140070480
0x00e90b58: mov    r14,rax
0x00e90b5b: cmp    rax,0x1
0x00e90b5f: sete   r15b
0x00e90b63: mov    BYTE PTR [rsp+0x31],r15b
0x00e90b68: lea    rcx,[rbp+0x28]
0x00e90b6c: call   0x140070cc0
0x00e90b71: nop
0x00e90b72: cmp    DWORD PTR [r13+0x180],0xffffffff
0x00e90b7a: jne    0x140e90b94
0x00e90b7c: cmp    DWORD PTR [r13+0x18c],0xffffffff
0x00e90b84: jne    0x140e90b94
0x00e90b86: cmp    DWORD PTR [r13+0x184],0xffffffff
0x00e90b8e: je     0x140e90ed4
0x00e90b94: lea    rcx,[rbp+0x28]
0x00e90b98: cmp    r14,0x1
0x00e90b9c: je     0x140e90bf9
0x00e90b9e: lea    rdx,[rip+0x778097]        # 0x141608c3c ; literal="The "
0x00e90ba5: call   0x140070b90
0x00e90baa: lea    rcx,[rbp+0x48]
0x00e90bae: call   0x140070cc0
0x00e90bb3: nop
0x00e90bb4: xor    r8d,r8d
0x00e90bb7: lea    rdx,[rbp+0x48]
0x00e90bbb: mov    ecx,DWORD PTR [rbp-0x40]
0x00e90bbe: call   0x140548050
0x00e90bc3: lea    rcx,[rbp+0x48]
0x00e90bc7: call   0x140546560
0x00e90bcc: lea    rdx,[rbp+0x48]
0x00e90bd0: lea    rcx,[rbp+0x28]
0x00e90bd4: call   0x1400bb340
0x00e90bd9: lea    rdx,[rip+0x778ecc]        # 0x141609aac ; literal=" part"
0x00e90be0: lea    rcx,[rbp+0x28]
0x00e90be4: call   0x140070b90
0x00e90be9: mov    BYTE PTR [rsp+0x31],0x1
0x00e90bee: lea    rcx,[rbp+0x48]
0x00e90bf2: call   0x140069460
0x00e90bf7: jmp    0x140e90c0a
0x00e90bf9: lea    rdx,[rip+0x778bb8]        # 0x1416097b8 ; literal="It"
0x00e90c00: call   0x140070b90
0x00e90c05: mov    BYTE PTR [rsp+0x31],r15b
0x00e90c0a: lea    rdx,[rip+0x772ddf]        # 0x1416039f0 ; literal=" "
0x00e90c11: lea    rcx,[rbp+0x28]
0x00e90c15: call   0x140070b90
0x00e90c1a: movsxd rax,DWORD PTR [r13+0x180]
0x00e90c21: cmp    eax,0x6
0x00e90c24: ja     0x140e90c7f
0x00e90c26: lea    rdx,[rip+0xffffffffff16f3d3]        # 0x140000000
0x00e90c2d: mov    ecx,DWORD PTR [rdx+rax*4+0xe9494c]
0x00e90c34: add    rcx,rdx
0x00e90c37: jmp    rcx
0x00e90c39: lea    rdx,[rip+0x8c0888]        # 0x1417514c8 ; literal="is dramatic"
0x00e90c40: jmp    0x140e90c76
0x00e90c42: lea    rdx,[rip+0x8c086f]        # 0x1417514b8 ; literal="is reflective"
0x00e90c49: jmp    0x140e90c76
0x00e90c4b: lea    rdx,[rip+0x8c0896]        # 0x1417514e8 ; literal="is ribald"
0x00e90c52: jmp    0x140e90c76
0x00e90c54: lea    rdx,[rip+0x8c087d]        # 0x1417514d8 ; literal="is light"
0x00e90c5b: jmp    0x140e90c76
0x00e90c5d: lea    rdx,[rip+0x8c0814]        # 0x141751478 ; literal="is solemn"
0x00e90c64: jmp    0x140e90c76
0x00e90c66: lea    rdx,[rip+0x8c07fb]        # 0x141751468 ; literal="is a riddle"
0x00e90c6d: jmp    0x140e90c76
0x00e90c6f: lea    rdx,[rip+0x8c0832]        # 0x1417514a8 ; literal="is a narrative"
0x00e90c76: lea    rcx,[rbp+0x28]
0x00e90c7a: call   0x140070b90
0x00e90c7f: cmp    DWORD PTR [r13+0x18c],0xffffffff
0x00e90c87: je     0x140e90e73
0x00e90c8d: lea    rcx,[rbp+0x28]
0x00e90c91: cmp    DWORD PTR [r13+0x180],0xffffffff
0x00e90c99: lea    rdx,[rip+0x778e4c]        # 0x141609aec ; literal=" and"
0x00e90ca0: jne    0x140e90ca9
0x00e90ca2: lea    rdx,[rip+0x7732a7]        # 0x141603f50 ; literal="is"
0x00e90ca9: call   0x140070b90
0x00e90cae: lea    rdx,[rip+0x8bf6a3]        # 0x141750358 ; literal=" intended "
0x00e90cb5: lea    rcx,[rbp+0x28]
0x00e90cb9: call   0x140070b90
0x00e90cbe: xor    r15b,r15b
0x00e90cc1: xor    r14b,r14b
0x00e90cc4: movsxd rax,DWORD PTR [r13+0x18c]
0x00e90ccb: cmp    eax,0x16
0x00e90cce: ja     0x140e90e34
0x00e90cd4: lea    rdx,[rip+0xffffffffff16f325]        # 0x140000000
0x00e90cdb: mov    ecx,DWORD PTR [rdx+rax*4+0xe94968]
0x00e90ce2: add    rcx,rdx
0x00e90ce5: jmp    rcx
0x00e90ce7: lea    rdx,[rip+0x8bf692]        # 0x141750380 ; literal="to describe"
0x00e90cee: lea    rcx,[rbp+0x28]
0x00e90cf2: call   0x140070b90
0x00e90cf7: mov    r15b,0x1
0x00e90cfa: jmp    0x140e90e34
0x00e90cff: lea    rdx,[rip+0x8bf66a]        # 0x141750370 ; literal="to satirize"
0x00e90d06: lea    rcx,[rbp+0x28]
0x00e90d0a: call   0x140070b90
0x00e90d0f: mov    r15b,0x1
0x00e90d12: jmp    0x140e90e34
0x00e90d17: lea    rdx,[rip+0x8bf5fa]        # 0x141750318 ; literal="to amuse the audience"
0x00e90d1e: jmp    0x140e90e28
0x00e90d23: lea    rdx,[rip+0x8bf5d6]        # 0x141750300 ; literal="to complain about"
0x00e90d2a: lea    rcx,[rbp+0x28]
0x00e90d2e: call   0x140070b90
0x00e90d33: mov    r15b,0x1
0x00e90d36: jmp    0x140e90e34
0x00e90d3b: lea    rdx,[rip+0x8bf606]        # 0x141750348 ; literal="to renounce"
0x00e90d42: lea    rcx,[rbp+0x28]
0x00e90d46: call   0x140070b90
0x00e90d4b: jmp    0x140e90e34
0x00e90d50: lea    rdx,[rip+0x8bf5d9]        # 0x141750330 ; literal="to make an apology"
0x00e90d57: jmp    0x140e90e28
0x00e90d5c: lea    rdx,[rip+0x8bf6a5]        # 0x141750408 ; literal="to express pleasure with"
0x00e90d63: lea    rcx,[rbp+0x28]
0x00e90d67: call   0x140070b90
0x00e90d6c: mov    r15b,0x1
0x00e90d6f: jmp    0x140e90e34
0x00e90d74: lea    rdx,[rip+0x8bf675]        # 0x1417503f0 ; literal="to express grief over"
0x00e90d7b: lea    rcx,[rbp+0x28]
0x00e90d7f: call   0x140070b90
0x00e90d84: mov    r15b,0x1
0x00e90d87: jmp    0x140e90e34
0x00e90d8c: lea    rdx,[rip+0x8bf6a5]        # 0x141750438 ; literal="to praise"
0x00e90d93: lea    rcx,[rbp+0x28]
0x00e90d97: call   0x140070b90
0x00e90d9c: mov    r15b,0x1
0x00e90d9f: jmp    0x140e90e34
0x00e90da4: lea    rdx,[rip+0x8bf67d]        # 0x141750428 ; literal="to beseech"
0x00e90dab: mov    rcx,r12
0x00e90dae: call   0x140070b90
0x00e90db3: jmp    0x140e90e34
0x00e90db5: lea    rdx,[rip+0x8bf5ec]        # 0x1417503a8 ; literal="to teach a moral lesson"
0x00e90dbc: jmp    0x140e90e28
0x00e90dbe: lea    rdx,[rip+0x8bf5cb]        # 0x141750390 ; literal="to make an assertion"
0x00e90dc5: jmp    0x140e90e28
0x00e90dc7: lea    rdx,[rip+0x8bf60a]        # 0x1417503d8 ; literal="to make a concession"
0x00e90dce: jmp    0x140e90e28
0x00e90dd0: lea    rdx,[rip+0x8bf5e9]        # 0x1417503c0 ; literal="to console the audience"
0x00e90dd7: jmp    0x140e90e28
0x00e90dd9: lea    rdx,[rip+0x8bf740]        # 0x141750520 ; literal="to refuse consolation"
0x00e90de0: jmp    0x140e90e28
0x00e90de2: lea    rdx,[rip+0x8c069f]        # 0x141751488 ; literal="to make a counter-assertion"
0x00e90de9: jmp    0x140e90e28
0x00e90deb: lea    rdx,[rip+0x8c07b6]        # 0x1417515a8 ; literal="to synthesize previous ideas"
0x00e90df2: jmp    0x140e90e28
0x00e90df4: lea    rdx,[rip+0x8c078d]        # 0x141751588 ; literal="to develop the previous idea"
0x00e90dfb: jmp    0x140e90e28
0x00e90dfd: lea    rdx,[rip+0x8c07ec]        # 0x1417515f0 ; literal="to invert the previous assertion"
0x00e90e04: jmp    0x140e90e28
0x00e90e06: lea    rdx,[rip+0x8c07bb]        # 0x1417515c8 ; literal="to undercut the previous assertion"
0x00e90e0d: jmp    0x140e90e28
0x00e90e0f: lea    rdx,[rip+0x8c0702]        # 0x141751518 ; literal="to move away from previous ideas"
0x00e90e16: jmp    0x140e90e28
0x00e90e18: lea    rdx,[rip+0x8c06d9]        # 0x1417514f8 ; literal="to reflect on previous ideas"
0x00e90e1f: jmp    0x140e90e28
0x00e90e21: lea    rdx,[rip+0x8c0738]        # 0x141751560 ; literal="to offer a different perspective"
0x00e90e28: lea    rcx,[rbp+0x28]
0x00e90e2c: call   0x140070b90
0x00e90e31: mov    r14b,0x1
0x00e90e34: cmp    DWORD PTR [r13+0x184],0xffffffff
0x00e90e3c: je     0x140e90e5c
0x00e90e3e: test   r14b,r14b
0x00e90e41: je     0x140e90e53
0x00e90e43: lea    rdx,[rip+0x8bf6c6]        # 0x141750510 ; literal=" concerning"
0x00e90e4a: lea    rcx,[rbp+0x28]
0x00e90e4e: call   0x140070b90
0x00e90e53: lea    rdx,[rip+0x772b96]        # 0x1416039f0 ; literal=" "
0x00e90e5a: jmp    0x140e90e9e
0x00e90e5c: test   r15b,r15b
0x00e90e5f: je     0x140e90ebe
0x00e90e61: lea    rdx,[rip+0x8c06d8]        # 0x141751540 ; literal=" the subject of the poem"
0x00e90e68: lea    rcx,[rbp+0x28]
0x00e90e6c: call   0x140070b90
0x00e90e71: jmp    0x140e90ebe
0x00e90e73: cmp    DWORD PTR [r13+0x184],0xffffffff
0x00e90e7b: je     0x140e90ebe
0x00e90e7d: cmp    DWORD PTR [r13+0x180],0xffffffff
0x00e90e85: je     0x140e90e97
0x00e90e87: lea    rdx,[rip+0x7734fe]        # 0x14160438c ; literal=" and "
0x00e90e8e: lea    rcx,[rbp+0x28]
0x00e90e92: call   0x140070b90
0x00e90e97: lea    rdx,[rip+0x8c07fa]        # 0x141751698 ; literal="concerns "
0x00e90e9e: lea    rcx,[rbp+0x28]
0x00e90ea2: call   0x140070b90
0x00e90ea7: mov    r8d,DWORD PTR [r13+0x188]
0x00e90eae: mov    edx,DWORD PTR [r13+0x184]
0x00e90eb5: lea    rcx,[rbp+0x28]
0x00e90eb9: call   0x140e8df60
0x00e90ebe: lea    rdx,[rip+0x7886d3]        # 0x141619598 ; literal=".  "
0x00e90ec5: lea    rcx,[rbp+0x28]
0x00e90ec9: call   0x140070b90
0x00e90ece: movzx  r15d,BYTE PTR [rsp+0x31]
0x00e90ed4: cmp    DWORD PTR [r13+0x190],0xffffffff
0x00e90edc: je     0x140e91089
0x00e90ee2: lea    rcx,[rbp+0x28]
0x00e90ee6: test   r15b,r15b
0x00e90ee9: jne    0x140e90f46
0x00e90eeb: lea    rdx,[rip+0x777d4a]        # 0x141608c3c ; literal="The "
0x00e90ef2: call   0x140070b90
0x00e90ef7: lea    rcx,[rbp+0x48]
0x00e90efb: call   0x140070cc0
0x00e90f00: nop
0x00e90f01: xor    r8d,r8d
0x00e90f04: lea    rdx,[rbp+0x48]
0x00e90f08: mov    ecx,DWORD PTR [rbp-0x3c]
0x00e90f0b: call   0x140548050
0x00e90f10: lea    rcx,[rbp+0x48]
0x00e90f14: call   0x140546560
0x00e90f19: lea    rdx,[rbp+0x48]
0x00e90f1d: lea    rcx,[rbp+0x28]
0x00e90f21: call   0x1400bb340
0x00e90f26: lea    rdx,[rip+0x778b7f]        # 0x141609aac ; literal=" part"
0x00e90f2d: lea    rcx,[rbp+0x28]
0x00e90f31: call   0x140070b90
0x00e90f36: mov    BYTE PTR [rsp+0x31],0x1
0x00e90f3b: lea    rcx,[rbp+0x48]
0x00e90f3f: call   0x140069460
0x00e90f44: jmp    0x140e90f52
0x00e90f46: lea    rdx,[rip+0x77886b]        # 0x1416097b8 ; literal="It"
0x00e90f4d: call   0x140070b90
0x00e90f52: lea    rdx,[rip+0x8c0717]        # 0x141751670 ; literal=" is written from the perspective of "
0x00e90f59: lea    rcx,[rbp+0x28]
0x00e90f5d: call   0x140070b90
0x00e90f62: mov    rcx,QWORD PTR [rbp-0x60]
0x00e90f66: add    rcx,0xe8
0x00e90f6d: movsxd rdx,DWORD PTR [r13+0x190]
0x00e90f74: call   0x140070850
0x00e90f79: mov    r14,QWORD PTR [rax]
0x00e90f7c: movsxd rax,DWORD PTR [r14]
0x00e90f7f: cmp    eax,0x7
0x00e90f82: ja     0x140e91079
0x00e90f88: lea    rdx,[rip+0xffffffffff16f071]        # 0x140000000
0x00e90f8f: mov    ecx,DWORD PTR [rdx+rax*4+0xe949c4]
0x00e90f96: add    rcx,rdx
0x00e90f99: jmp    rcx
0x00e90f9b: lea    rdx,[rip+0x8bfee6]        # 0x141750e88 ; literal="the author"
0x00e90fa2: jmp    0x140e91070
0x00e90fa7: lea    rdx,[rip+0x8bff2a]        # 0x141750ed8 ; literal="a soldier"
0x00e90fae: jmp    0x140e91070
0x00e90fb3: lea    rdx,[rip+0x8bff0e]        # 0x141750ec8 ; literal="a traveler"
0x00e90fba: jmp    0x140e91070
0x00e90fbf: lea    rdx,[rip+0x8bfe7a]        # 0x141750e40 ; literal="a relative of the author"
0x00e90fc6: jmp    0x140e91070
0x00e90fcb: lea    rdx,[rip+0x8bfe56]        # 0x141750e28 ; literal="a party to a debate"
0x00e90fd2: jmp    0x140e91070
0x00e90fd7: lea    rdx,[rip+0x8bfe92]        # 0x141750e70 ; literal="a fictional poet"
0x00e90fde: jmp    0x140e91070
0x00e90fe3: cmp    DWORD PTR [r14+0x4],0xffffffff
0x00e90fe8: je     0x140e91021
0x00e90fea: lea    rcx,[rbp+0x200]
0x00e90ff1: call   0x1400736b0
0x00e90ff6: xor    eax,eax
0x00e90ff8: mov    WORD PTR [rsp+0x28],ax
0x00e90ffd: mov    WORD PTR [rsp+0x20],0x1
0x00e91004: lea    r9,[rbp+0x200]
0x00e9100b: mov    r8d,DWORD PTR [r14+0x4]
0x00e9100f: lea    rdx,[rbp+0x28]
0x00e91013: lea    rcx,[rip+0x168b11e]        # 0x14251c138
0x00e9101a: call   0x140baabd0
0x00e9101f: jmp    0x140e91079
0x00e91021: lea    rdx,[rip+0x8bf888]        # 0x1417508b0 ; literal="a historical figure"
0x00e91028: jmp    0x140e91070
0x00e9102a: cmp    DWORD PTR [r14+0x4],0xffffffff
0x00e9102f: je     0x140e91069
0x00e91031: lea    rdx,[rip+0x777868]        # 0x1416088a0 ; literal="a "
0x00e91038: lea    rcx,[rbp+0x28]
0x00e9103c: call   0x140070b90
0x00e91041: mov    BYTE PTR [rsp+0x28],0x0
0x00e91046: movzx  eax,WORD PTR [r14+0x8]
0x00e9104b: mov    WORD PTR [rsp+0x20],ax
0x00e91050: xor    r9d,r9d
0x00e91053: mov    r8d,DWORD PTR [r14+0x4]
0x00e91057: lea    rdx,[rbp+0x28]
0x00e9105b: lea    rcx,[rip+0x168b0d6]        # 0x14251c138
0x00e91062: call   0x140bacb90
0x00e91067: jmp    0x140e91079
0x00e91069: lea    rdx,[rip+0x8bfdf0]        # 0x141750e60 ; literal="an animal"
0x00e91070: lea    rcx,[rbp+0x28]
0x00e91074: call   0x140070b90
0x00e91079: lea    rdx,[rip+0x788518]        # 0x141619598 ; literal=".  "
0x00e91080: lea    rcx,[rbp+0x28]
0x00e91084: call   0x140070b90
0x00e91089: mov    edx,DWORD PTR [r13+0x194]
0x00e91090: test   edx,edx
0x00e91092: je     0x140e91422
0x00e91098: mov    ecx,edx
0x00e9109a: and    ecx,0x1
0x00e9109d: test   dl,0x4
0x00e910a0: je     0x140e910a4
0x00e910a2: inc    ecx
0x00e910a4: test   dl,0x8
0x00e910a7: lea    eax,[rcx+0x1]
0x00e910aa: cmove  eax,ecx
0x00e910ad: test   dl,0x10
0x00e910b0: lea    ecx,[rax+0x1]
0x00e910b3: cmove  ecx,eax
0x00e910b6: bt     edx,0x9
0x00e910ba: lea    eax,[rcx+0x1]
0x00e910bd: cmovae eax,ecx
0x00e910c0: bt     edx,0xa
0x00e910c4: lea    ecx,[rax+0x1]
0x00e910c7: cmovae ecx,eax
0x00e910ca: bt     edx,0xb
0x00e910ce: lea    eax,[rcx+0x1]
0x00e910d1: cmovae eax,ecx
0x00e910d4: bt     edx,0xc
0x00e910d8: lea    ecx,[rax+0x1]
0x00e910db: cmovae ecx,eax
0x00e910de: bt     edx,0xd
0x00e910e2: lea    eax,[rcx+0x1]
0x00e910e5: cmovae eax,ecx
0x00e910e8: bt     edx,0xf
0x00e910ec: lea    ecx,[rax+0x1]
0x00e910ef: cmovae ecx,eax
0x00e910f2: bt     edx,0x10
0x00e910f6: lea    eax,[rcx+0x1]
0x00e910f9: cmovae eax,ecx
0x00e910fc: bt     edx,0x11
0x00e91100: lea    ecx,[rax+0x1]
0x00e91103: cmovae ecx,eax
0x00e91106: bt     edx,0x12
0x00e9110a: lea    eax,[rcx+0x1]
0x00e9110d: cmovae eax,ecx
0x00e91110: bt     edx,0x13
0x00e91114: lea    ecx,[rax+0x1]
0x00e91117: cmovae ecx,eax
0x00e9111a: bt     edx,0x14
0x00e9111e: lea    eax,[rcx+0x1]
0x00e91121: cmovae eax,ecx
0x00e91124: bt     edx,0x15
0x00e91128: lea    ecx,[rax+0x1]
0x00e9112b: cmovae ecx,eax
0x00e9112e: bt     edx,0x16
0x00e91132: lea    r15d,[rcx+0x1]
0x00e91136: cmovae r15d,ecx
0x00e9113a: test   r15d,r15d
0x00e9113d: jle    0x140e91422
0x00e91143: lea    rcx,[rbp+0x28]
0x00e91147: cmp    BYTE PTR [rsp+0x31],0x0
0x00e9114c: jne    0x140e911b0
0x00e9114e: lea    rdx,[rip+0x777ae7]        # 0x141608c3c ; literal="The "
0x00e91155: call   0x140070b90
0x00e9115a: lea    rcx,[rbp+0x48]
0x00e9115e: call   0x140070cc0
0x00e91163: nop
0x00e91164: mov    r12d,DWORD PTR [rsp+0x50]
0x00e91169: lea    ecx,[r12+0x1]
0x00e9116e: xor    r8d,r8d
0x00e91171: lea    rdx,[rbp+0x48]
0x00e91175: call   0x140548050
0x00e9117a: lea    rcx,[rbp+0x48]
0x00e9117e: call   0x140546560
0x00e91183: lea    rdx,[rbp+0x48]
0x00e91187: lea    rcx,[rbp+0x28]
0x00e9118b: call   0x1400bb340
0x00e91190: lea    rdx,[rip+0x778915]        # 0x141609aac ; literal=" part"
0x00e91197: lea    rcx,[rbp+0x28]
0x00e9119b: call   0x140070b90
0x00e911a0: mov    BYTE PTR [rsp+0x31],0x1
0x00e911a5: lea    rcx,[rbp+0x48]
0x00e911a9: call   0x140069460
0x00e911ae: jmp    0x140e911c1
0x00e911b0: lea    rdx,[rip+0x778601]        # 0x1416097b8 ; literal="It"
0x00e911b7: call   0x140070b90
0x00e911bc: mov    r12d,DWORD PTR [rsp+0x50]
0x00e911c1: lea    rdx,[rip+0x8c04f0]        # 0x1417516b8 ; literal=" must make use of "
0x00e911c8: lea    rcx,[rbp+0x28]
0x00e911cc: call   0x140070b90
0x00e911d1: xor    eax,eax
0x00e911d3: mov    r14d,eax
0x00e911d6: mov    esi,DWORD PTR [rsp+0x44]
0x00e911da: lea    rdi,[rip+0xffffffffff16ee1f]        # 0x140000000
0x00e911e1: mov    ebx,0x1
0x00e911e6: cmp    r14d,0x10
0x00e911ea: ja     0x140e91271
0x00e911f0: movsxd rax,r14d
0x00e911f3: mov    ecx,DWORD PTR [rdi+rax*4+0xe949e4]
0x00e911fa: add    rcx,rdi
0x00e911fd: jmp    rcx
0x00e911ff: mov    esi,ebx
0x00e91201: jmp    0x140e91271
0x00e91203: mov    esi,0x4
0x00e91208: jmp    0x140e91271
0x00e9120a: mov    esi,0x8
0x00e9120f: jmp    0x140e91271
0x00e91211: mov    esi,0x10
0x00e91216: jmp    0x140e91271
0x00e91218: mov    esi,0x200
0x00e9121d: jmp    0x140e91271
0x00e9121f: mov    esi,0x400
0x00e91224: jmp    0x140e91271
0x00e91226: mov    esi,0x800
0x00e9122b: jmp    0x140e91271
0x00e9122d: mov    esi,0x1000
0x00e91232: jmp    0x140e91271
0x00e91234: mov    esi,0x2000
0x00e91239: jmp    0x140e91271
0x00e9123b: mov    esi,0x8000
0x00e91240: jmp    0x140e91271
0x00e91242: mov    esi,0x10000
0x00e91247: jmp    0x140e91271
0x00e91249: mov    esi,0x20000
0x00e9124e: jmp    0x140e91271
0x00e91250: mov    esi,0x40000
0x00e91255: jmp    0x140e91271
0x00e91257: mov    esi,0x80000
0x00e9125c: jmp    0x140e91271
0x00e9125e: mov    esi,0x100000
0x00e91263: jmp    0x140e91271
0x00e91265: mov    esi,0x200000
0x00e9126a: jmp    0x140e91271
0x00e9126c: mov    esi,0x400000
0x00e91271: test   DWORD PTR [r13+0x194],esi
0x00e91278: je     0x140e913f0
0x00e9127e: cmp    esi,0x2000
0x00e91284: ja     0x140e9133b
0x00e9128a: je     0x140e9132f
0x00e91290: cmp    esi,0x200
0x00e91296: ja     0x140e912ef
0x00e91298: je     0x140e912e3
0x00e9129a: mov    eax,esi
0x00e9129c: sub    eax,ebx
0x00e9129e: je     0x140e912d7
0x00e912a0: sub    eax,0x3
0x00e912a3: je     0x140e912cb
0x00e912a5: sub    eax,0x4
0x00e912a8: je     0x140e912bf
0x00e912aa: cmp    eax,0x8
0x00e912ad: jne    0x140e913cc
0x00e912b3: lea    rdx,[rip+0x8bfc3e]        # 0x141750ef8 ; literal="antanaclasis"
0x00e912ba: jmp    0x140e913c3
0x00e912bf: lea    rdx,[rip+0x8bfc72]        # 0x141750f38 ; literal="onomatopoeia"
0x00e912c6: jmp    0x140e913c3
0x00e912cb: lea    rdx,[rip+0x8bfc76]        # 0x141750f48 ; literal="alliteration"
0x00e912d2: jmp    0x140e913c3
0x00e912d7: lea    rdx,[rip+0x8bfc42]        # 0x141750f20 ; literal="internal rhyme"
0x00e912de: jmp    0x140e913c3
0x00e912e3: lea    rdx,[rip+0x8bfbfe]        # 0x141750ee8 ; literal="assonance"
0x00e912ea: jmp    0x140e913c3
0x00e912ef: cmp    esi,0x400
0x00e912f5: je     0x140e91323
0x00e912f7: cmp    esi,0x800
0x00e912fd: je     0x140e91317
0x00e912ff: cmp    esi,0x1000
0x00e91305: jne    0x140e913cc
0x00e9130b: lea    rdx,[rip+0x8bfc8e]        # 0x141750fa0 ; literal="epenthesis"
0x00e91312: jmp    0x140e913c3
0x00e91317: lea    rdx,[rip+0x8bfbea]        # 0x141750f08 ; literal="elision"
0x00e9131e: jmp    0x140e913c3
0x00e91323: lea    rdx,[rip+0x8bfbe6]        # 0x141750f10 ; literal="consonance"
0x00e9132a: jmp    0x140e913c3
0x00e9132f: lea    rdx,[rip+0x8bfc5a]        # 0x141750f90 ; literal="synchysis"
0x00e91336: jmp    0x140e913c3
0x00e9133b: cmp    esi,0x80000
0x00e91341: ja     0x140e91392
0x00e91343: je     0x140e91389
0x00e91345: cmp    esi,0x8000
0x00e9134b: je     0x140e91380
0x00e9134d: cmp    esi,0x10000
0x00e91353: je     0x140e91377
0x00e91355: cmp    esi,0x20000
0x00e9135b: je     0x140e9136e
0x00e9135d: cmp    esi,0x40000
0x00e91363: jne    0x140e913cc
0x00e91365: lea    rdx,[rip+0x8bfbec]        # 0x141750f58 ; literal="metaphor"
0x00e9136c: jmp    0x140e913c3
0x00e9136e: lea    rdx,[rip+0x8bfbf3]        # 0x141750f68 ; literal="symbolism"
0x00e91375: jmp    0x140e913c3
0x00e91377: lea    rdx,[rip+0x8bfc32]        # 0x141750fb0 ; literal="ambiguity"
0x00e9137e: jmp    0x140e913c3
0x00e91380: lea    rdx,[rip+0x8bfc39]        # 0x141750fc0 ; literal="allegory"
0x00e91387: jmp    0x140e913c3
0x00e91389: lea    rdx,[rip+0x8bfbf4]        # 0x141750f84 ; literal="simile"
0x00e91390: jmp    0x140e913c3
0x00e91392: cmp    esi,0x100000
0x00e91398: je     0x140e913bc
0x00e9139a: cmp    esi,0x200000
0x00e913a0: je     0x140e913b3
0x00e913a2: cmp    esi,0x400000
0x00e913a8: jne    0x140e913cc
0x00e913aa: lea    rdx,[rip+0x8bfc77]        # 0x141751028 ; literal="juxtaposition"
0x00e913b1: jmp    0x140e913c3
0x00e913b3: lea    rdx,[rip+0x8bfc7e]        # 0x141751038 ; literal="vivid imagery"
0x00e913ba: jmp    0x140e913c3
0x00e913bc: lea    rdx,[rip+0x8bfbb5]        # 0x141750f78 ; literal="metonymy"
0x00e913c3: lea    rcx,[rbp+0x28]
0x00e913c7: call   0x140070b90
0x00e913cc: cmp    r15d,0x2
0x00e913d0: jne    0x140e913db
0x00e913d2: lea    rdx,[rip+0x772fb3]        # 0x14160438c ; literal=" and "
0x00e913d9: jmp    0x140e913e4
0x00e913db: jle    0x140e913ed
0x00e913dd: lea    rdx,[rip+0x772fb0]        # 0x141604394 ; literal=", "
0x00e913e4: lea    rcx,[rbp+0x28]
0x00e913e8: call   0x140070b90
0x00e913ed: dec    r15d
0x00e913f0: inc    r14d
0x00e913f3: cmp    r14d,0x11
0x00e913f7: jl     0x140e911e6
0x00e913fd: mov    DWORD PTR [rsp+0x44],esi
0x00e91401: lea    rdx,[rip+0x788190]        # 0x141619598 ; literal=".  "
0x00e91408: lea    rcx,[rbp+0x28]
0x00e9140c: call   0x140070b90
0x00e91411: movzx  ebx,BYTE PTR [rsp+0x30]
0x00e91416: movzx  edi,BYTE PTR [rsp+0x30]
0x00e9141b: movzx  esi,BYTE PTR [rsp+0x30]
0x00e91420: jmp    0x140e91427
0x00e91422: mov    r12d,DWORD PTR [rsp+0x50]
0x00e91427: lea    rcx,[r13+0x168]
0x00e9142e: call   0x1400709a0
0x00e91433: test   rax,rax
0x00e91436: je     0x140e915f1
0x00e9143c: lea    rcx,[r13+0x168]
0x00e91443: call   0x1400709a0
0x00e91448: mov    r14,rax
0x00e9144b: lea    rdx,[rip+0x8c0256]        # 0x1417516a8 ; literal="Certain lines"
0x00e91452: lea    rcx,[rbp+0x28]
0x00e91456: call   0x140070b90
0x00e9145b: cmp    BYTE PTR [rsp+0x31],0x0
0x00e91460: jne    0x140e914c1
0x00e91462: lea    rdx,[rip+0x7faa5f]        # 0x14168bec8 ; literal=" of the "
0x00e91469: lea    rcx,[rbp+0x28]
0x00e9146d: call   0x140070b90
0x00e91472: lea    rcx,[rbp+0x48]
0x00e91476: call   0x140070cc0
0x00e9147b: nop
0x00e9147c: lea    ecx,[r12+0x1]
0x00e91481: xor    r8d,r8d
0x00e91484: lea    rdx,[rbp+0x48]
0x00e91488: call   0x140548050
0x00e9148d: lea    rcx,[rbp+0x48]
0x00e91491: call   0x140546560
0x00e91496: lea    rdx,[rbp+0x48]
0x00e9149a: lea    rcx,[rbp+0x28]
0x00e9149e: call   0x1400bb340
0x00e914a3: lea    rdx,[rip+0x778602]        # 0x141609aac ; literal=" part"
0x00e914aa: lea    rcx,[rbp+0x28]
0x00e914ae: call   0x140070b90
0x00e914b3: mov    BYTE PTR [rsp+0x31],0x1
0x00e914b8: lea    rcx,[rbp+0x48]
0x00e914bc: call   0x140069460
0x00e914c1: lea    rdx,[rip+0x772528]        # 0x1416039f0 ; literal=" "
0x00e914c8: lea    rcx,[rbp+0x28]
0x00e914cc: call   0x140070b90
0x00e914d1: lea    rdx,[rbp-0x68]
0x00e914d5: lea    rcx,[r13+0x168]
0x00e914dc: call   0x140070870
0x00e914e1: lea    rdx,[rbp-0x20]
0x00e914e5: lea    rcx,[r13+0x168]
0x00e914ec: call   0x140070860
0x00e914f1: lea    r8,[rbp-0x20]
0x00e914f5: lea    rdx,[rbp-0x78]
0x00e914f9: lea    rcx,[rbp-0x68]
0x00e914fd: call   0x140070450
0x00e91502: xor    edx,edx
0x00e91504: movzx  ecx,BYTE PTR [rax]
0x00e91507: call   0x140066de0
0x00e9150c: test   al,al
0x00e9150e: je     0x140e915e1
0x00e91514: lea    rbx,[rip+0xffffffffff16eae5]        # 0x140000000
0x00e9151b: nop    DWORD PTR [rax+rax*1+0x0]
0x00e91520: lea    rcx,[rbp-0x68]
0x00e91524: call   0x140070440
0x00e91529: movsxd rcx,DWORD PTR [rax]
0x00e9152c: cmp    ecx,0x7
0x00e9152f: ja     0x140e9158c
0x00e91531: mov    ecx,DWORD PTR [rbx+rcx*4+0xe94a28]
0x00e91538: add    rcx,rbx
0x00e9153b: jmp    rcx
0x00e9153d: lea    rdx,[rip+0x8bfbd4]        # 0x141751118 ; literal="often share an underlying meaning"
0x00e91544: jmp    0x140e91583
0x00e91546: lea    rdx,[rip+0x8bfc23]        # 0x141751170 ; literal="often contrast underlying meaning"
0x00e9154d: jmp    0x140e91583
0x00e9154f: lea    rdx,[rip+0x8bfbf2]        # 0x141751148 ; literal="are required to maintain phrasing"
0x00e91556: jmp    0x140e91583
0x00e91558: lea    rdx,[rip+0x8bfb49]        # 0x1417510a8 ; literal="have similar grammatical structures"
0x00e9155f: jmp    0x140e91583
0x00e91561: lea    rdx,[rip+0x8bfb18]        # 0x141751080 ; literal="use the same placement of allusions"
0x00e91568: jmp    0x140e91583
0x00e9156a: lea    rdx,[rip+0x8bfb7f]        # 0x1417510f0 ; literal="sometimes have reversed word orders"
0x00e91571: jmp    0x140e91583
0x00e91573: lea    rdx,[rip+0x8bfb56]        # 0x1417510d0 ; literal="reverse grammatical structures"
0x00e9157a: jmp    0x140e91583
0x00e9157c: lea    rdx,[rip+0x8c009d]        # 0x141751620 ; literal="present different views of the same subject"
0x00e91583: lea    rcx,[rbp+0x28]
0x00e91587: call   0x140070b90
0x00e9158c: cmp    r14d,0x2
0x00e91590: jne    0x140e9159b
0x00e91592: lea    rdx,[rip+0x772df3]        # 0x14160438c ; literal=" and "
0x00e91599: jmp    0x140e915a4
0x00e9159b: jle    0x140e915ad
0x00e9159d: lea    rdx,[rip+0x772df0]        # 0x141604394 ; literal=", "
0x00e915a4: lea    rcx,[rbp+0x28]
0x00e915a8: call   0x140070b90
0x00e915ad: dec    r14d
0x00e915b0: lea    rcx,[rbp-0x68]
0x00e915b4: call   0x140070980
0x00e915b9: lea    r8,[rbp-0x20]
0x00e915bd: lea    rdx,[rbp-0x78]
0x00e915c1: lea    rcx,[rbp-0x68]
0x00e915c5: call   0x140070450
0x00e915ca: xor    edx,edx
0x00e915cc: movzx  ecx,BYTE PTR [rax]
0x00e915cf: call   0x140066de0
0x00e915d4: test   al,al
0x00e915d6: jne    0x140e91520
0x00e915dc: movzx  ebx,BYTE PTR [rsp+0x30]
0x00e915e1: lea    rdx,[rip+0x787fb0]        # 0x141619598 ; literal=".  "
0x00e915e8: lea    rcx,[rbp+0x28]
0x00e915ec: call   0x140070b90
0x00e915f1: xor    r14d,r14d
0x00e915f4: mov    r12d,r14d
0x00e915f7: add    r13,0x98
0x00e915fe: mov    rcx,r13
0x00e91601: call   0x1400709a0
0x00e91606: test   rax,rax
0x00e91609: je     0x140e918b9
0x00e9160f: mov    rdi,QWORD PTR [rsp+0x58]
0x00e91614: mov    r15d,r14d
0x00e91617: nop    WORD PTR [rax+rax*1+0x0]
0x00e91620: mov    rdx,r15
0x00e91623: lea    rcx,[rdi+0xb0]
0x00e9162a: call   0x140070990
0x00e9162f: mov    eax,DWORD PTR [rax]
0x00e91631: mov    DWORD PTR [rbp-0x74],eax
0x00e91634: mov    rdx,r15
0x00e91637: lea    rcx,[rdi+0xc8]
0x00e9163e: call   0x140070990
0x00e91643: mov    r14d,DWORD PTR [rax]
0x00e91646: lea    rcx,[rbp+0x28]
0x00e9164a: cmp    BYTE PTR [rsp+0x31],0x0
0x00e9164f: jne    0x140e916af
0x00e91651: lea    rdx,[rip+0x8bffc0]        # 0x141751618 ; literal="In the "
0x00e91658: call   0x140070b90
0x00e9165d: lea    rcx,[rbp+0x48]
0x00e91661: call   0x140070cc0
0x00e91666: nop
0x00e91667: mov    ecx,DWORD PTR [rsp+0x50]
0x00e9166b: inc    ecx
0x00e9166d: xor    r8d,r8d
0x00e91670: lea    rdx,[rbp+0x48]
0x00e91674: call   0x140548050
0x00e91679: lea    rcx,[rbp+0x48]
0x00e9167d: call   0x140546560
0x00e91682: lea    rdx,[rbp+0x48]
0x00e91686: lea    rcx,[rbp+0x28]
0x00e9168a: call   0x1400bb340
0x00e9168f: lea    rdx,[rip+0x8bffca]        # 0x141751660 ; literal=" part, the "
0x00e91696: lea    rcx,[rbp+0x28]
0x00e9169a: call   0x140070b90
0x00e9169f: mov    BYTE PTR [rsp+0x31],0x1
0x00e916a4: lea    rcx,[rbp+0x48]
0x00e916a8: call   0x140069460
0x00e916ad: jmp    0x140e916bb
0x00e916af: lea    rdx,[rip+0x777586]        # 0x141608c3c ; literal="The "
0x00e916b6: call   0x140070b90
0x00e916bb: lea    rcx,[rbp+0x48]
0x00e916bf: call   0x140070cc0
0x00e916c4: nop
0x00e916c5: xor    r8d,r8d
0x00e916c8: lea    rdx,[rbp+0x48]
0x00e916cc: mov    ecx,r14d
0x00e916cf: call   0x140548050
0x00e916d4: lea    rcx,[rbp+0x48]
0x00e916d8: call   0x140546560
0x00e916dd: lea    rdx,[rbp+0x48]
0x00e916e1: lea    rcx,[rbp+0x28]
0x00e916e5: call   0x1400bb340
0x00e916ea: nop
0x00e916eb: lea    rcx,[rbp+0x48]
0x00e916ef: call   0x140069460
0x00e916f4: lea    rdx,[rip+0x8bff55]        # 0x141751650 ; literal=" line of "
0x00e916fb: lea    rcx,[rbp+0x28]
0x00e916ff: call   0x140070b90
0x00e91704: lea    rcx,[rbp+0x28]
0x00e91708: cmp    DWORD PTR [rdi+0x8],0x2
0x00e9170c: lea    rdx,[rip+0x8c005d]        # 0x141751770 ; literal="each "
0x00e91713: jge    0x140e9171c
0x00e91715: lea    rdx,[rip+0x7729e8]        # 0x141604104 ; literal="the "
0x00e9171c: call   0x140070b90
0x00e91721: test   BYTE PTR [rdi],0x2
0x00e91724: je     0x140e9172f
0x00e91726: lea    rdx,[rip+0x8bef83]        # 0x1417506b0 ; literal="verse paragraph"
0x00e9172d: jmp    0x140e917a0
0x00e9172f: mov    eax,DWORD PTR [rdi+0xc]
0x00e91732: cmp    eax,0x9
0x00e91735: jl     0x140e91740
0x00e91737: lea    rdx,[rip+0x8c002a]        # 0x141751768 ; literal="stanza"
0x00e9173e: jmp    0x140e917a0
0x00e91740: cmp    eax,0x8
0x00e91743: jne    0x140e9174e
0x00e91745: lea    rdx,[rip+0x8bee68]        # 0x1417505b4 ; literal="octet"
0x00e9174c: jmp    0x140e917a0
0x00e9174e: cmp    eax,0x7
0x00e91751: jne    0x140e9175c
0x00e91753: lea    rdx,[rip+0x8bee0a]        # 0x141750564 ; literal="septet"
0x00e9175a: jmp    0x140e917a0
0x00e9175c: cmp    eax,0x6
0x00e9175f: jne    0x140e9176a
0x00e91761: lea    rdx,[rip+0x8bedf4]        # 0x14175055c ; literal="sexain"
0x00e91768: jmp    0x140e917a0
0x00e9176a: cmp    eax,0x5
0x00e9176d: jne    0x140e91778
0x00e9176f: lea    rdx,[rip+0x8bee0a]        # 0x141750580 ; literal="quintain"
0x00e91776: jmp    0x140e917a0
0x00e91778: cmp    eax,0x4
0x00e9177b: jne    0x140e91786
0x00e9177d: lea    rdx,[rip+0x8bedec]        # 0x141750570 ; literal="quatrain"
0x00e91784: jmp    0x140e917a0
0x00e91786: cmp    eax,0x3
0x00e91789: jne    0x140e91794
0x00e9178b: lea    rdx,[rip+0x8beea6]        # 0x141750638 ; literal="tercet"
0x00e91792: jmp    0x140e917a0
0x00e91794: cmp    eax,0x2
0x00e91797: jne    0x140e917a9
0x00e91799: lea    rdx,[rip+0x8bee90]        # 0x141750630 ; literal="couplet"
0x00e917a0: lea    rcx,[rbp+0x28]
0x00e917a4: call   0x140070b90
0x00e917a9: lea    rdx,[rip+0x772240]        # 0x1416039f0 ; literal=" "
0x00e917b0: lea    rcx,[rbp+0x28]
0x00e917b4: call   0x140070b90
0x00e917b9: mov    rdx,r15
0x00e917bc: mov    rcx,r13
0x00e917bf: call   0x140070990
0x00e917c4: movsxd rcx,DWORD PTR [rax]
0x00e917c7: cmp    ecx,0x8
0x00e917ca: ja     0x140e91837
0x00e917cc: lea    rdx,[rip+0xffffffffff16e82d]        # 0x140000000
0x00e917d3: mov    ecx,DWORD PTR [rdx+rcx*4+0xe94a48]
0x00e917da: add    rcx,rdx
0x00e917dd: jmp    rcx
0x00e917df: lea    rdx,[rip+0x8bffba]        # 0x1417517a0 ; literal="shares the underlying meaning of"
0x00e917e6: jmp    0x140e9182e
0x00e917e8: lea    rdx,[rip+0x8bff89]        # 0x141751778 ; literal="contrasts the underlying meaning of"
0x00e917ef: jmp    0x140e9182e
0x00e917f1: lea    rdx,[rip+0x8bff00]        # 0x1417516f8 ; literal="is required to maintain the phrasing of"
0x00e917f8: jmp    0x140e9182e
0x00e917fa: lea    rdx,[rip+0x8bfecf]        # 0x1417516d0 ; literal="has the same grammatical structure as"
0x00e91801: jmp    0x140e9182e
0x00e91803: lea    rdx,[rip+0x8bff36]        # 0x141751740 ; literal="uses the same placement of allusions as"
0x00e9180a: jmp    0x140e9182e
0x00e9180c: lea    rdx,[rip+0x8bff0d]        # 0x141751720 ; literal="reverses the word order of"
0x00e91813: jmp    0x140e9182e
0x00e91815: lea    rdx,[rip+0x8c0054]        # 0x141751870 ; literal="reverses the grammatical structure of"
0x00e9181c: jmp    0x140e9182e
0x00e9181e: lea    rdx,[rip+0x8c001b]        # 0x141751840 ; literal="presents a different view of the subject of"
0x00e91825: jmp    0x140e9182e
0x00e91827: lea    rdx,[rip+0x8c007a]        # 0x1417518a8 ; literal="must expand the idea of"
0x00e9182e: lea    rcx,[rbp+0x28]
0x00e91832: call   0x140070b90
0x00e91837: lea    rdx,[rip+0x772fda]        # 0x141604818 ; literal=" the "
0x00e9183e: lea    rcx,[rbp+0x28]
0x00e91842: call   0x140070b90
0x00e91847: lea    rcx,[rbp+0x48]
0x00e9184b: call   0x140070cc0
0x00e91850: nop
0x00e91851: xor    r8d,r8d
0x00e91854: lea    rdx,[rbp+0x48]
0x00e91858: mov    ecx,DWORD PTR [rbp-0x74]
0x00e9185b: call   0x140548050
0x00e91860: lea    rcx,[rbp+0x48]
0x00e91864: call   0x140546560
0x00e91869: lea    rdx,[rbp+0x48]
0x00e9186d: lea    rcx,[rbp+0x28]
0x00e91871: call   0x1400bb340
0x00e91876: nop
0x00e91877: lea    rcx,[rbp+0x48]
0x00e9187b: call   0x140069460
0x00e91880: lea    rdx,[rip+0x8c0011]        # 0x141751898 ; literal=" line.  "
0x00e91887: lea    rcx,[rbp+0x28]
0x00e9188b: call   0x140070b90
0x00e91890: inc    r12d
0x00e91893: movsxd r15,r12d
0x00e91896: mov    rcx,r13
0x00e91899: call   0x1400709a0
0x00e9189e: cmp    r15,rax
0x00e918a1: jb     0x140e91620
0x00e918a7: movzx  ebx,BYTE PTR [rsp+0x30]
0x00e918ac: movzx  edi,BYTE PTR [rsp+0x30]
0x00e918b1: movzx  esi,BYTE PTR [rsp+0x30]
0x00e918b6: xor    r14d,r14d
0x00e918b9: mov    r13,QWORD PTR [rsp+0x58]
0x00e918be: mov    edx,DWORD PTR [r13+0x194]
0x00e918c5: test   edx,edx
0x00e918c7: je     0x140e91a74
0x00e918cd: mov    ecx,edx
0x00e918cf: shr    ecx,0x5
0x00e918d2: and    ecx,0x1
0x00e918d5: test   dl,0x40
0x00e918d8: lea    eax,[rcx+0x1]
0x00e918db: cmove  eax,ecx
0x00e918de: test   dl,0x80
0x00e918e1: lea    ecx,[rax+0x1]
0x00e918e4: cmove  ecx,eax
0x00e918e7: bt     edx,0x8
0x00e918eb: lea    r12d,[rcx+0x1]
0x00e918ef: cmovae r12d,ecx
0x00e918f3: test   r12d,r12d
0x00e918f6: je     0x140e91a74
0x00e918fc: lea    rcx,[rbp+0x28]
0x00e91900: cmp    BYTE PTR [rsp+0x31],0x0
0x00e91905: jne    0x140e91965
0x00e91907: lea    rdx,[rip+0x77732e]        # 0x141608c3c ; literal="The "
0x00e9190e: call   0x140070b90
0x00e91913: lea    rcx,[rbp+0x48]
0x00e91917: call   0x140070cc0
0x00e9191c: nop
0x00e9191d: mov    ecx,DWORD PTR [rsp+0x50]
0x00e91921: inc    ecx
0x00e91923: xor    r8d,r8d
0x00e91926: lea    rdx,[rbp+0x48]
0x00e9192a: call   0x140548050
0x00e9192f: lea    rcx,[rbp+0x48]
0x00e91933: call   0x140546560
0x00e91938: lea    rdx,[rbp+0x48]
0x00e9193c: lea    rcx,[rbp+0x28]
0x00e91940: call   0x1400bb340
0x00e91945: lea    rdx,[rip+0x778160]        # 0x141609aac ; literal=" part"
0x00e9194c: lea    rcx,[rbp+0x28]
0x00e91950: call   0x140070b90
0x00e91955: mov    BYTE PTR [rsp+0x31],0x1
0x00e9195a: lea    rcx,[rbp+0x48]
0x00e9195e: call   0x140069460
0x00e91963: jmp    0x140e91971
0x00e91965: lea    rdx,[rip+0x777e4c]        # 0x1416097b8 ; literal="It"
0x00e9196c: call   0x140070b90
0x00e91971: lea    rdx,[rip+0x8bfe90]        # 0x141751808 ; literal=" includes "
0x00e91978: lea    rcx,[rbp+0x28]
0x00e9197c: call   0x140070b90
0x00e91981: mov    r15d,r12d
0x00e91984: mov    r13,QWORD PTR [rbp-0x50]
0x00e91988: mov    rsi,QWORD PTR [rsp+0x58]
0x00e9198d: mov    edi,DWORD PTR [rbp-0x58]
0x00e91990: mov    ecx,r14d
0x00e91993: test   r14d,r14d
0x00e91996: je     0x140e919bc
0x00e91998: sub    ecx,0x1
0x00e9199b: je     0x140e919b5
0x00e9199d: sub    ecx,0x1
0x00e919a0: je     0x140e919ae
0x00e919a2: cmp    ecx,0x1
0x00e919a5: jne    0x140e919c1
0x00e919a7: mov    edi,0x100
0x00e919ac: jmp    0x140e919c1
0x00e919ae: mov    edi,0x80
0x00e919b3: jmp    0x140e919c1
0x00e919b5: mov    edi,0x40
0x00e919ba: jmp    0x140e919c1
0x00e919bc: mov    edi,0x20
0x00e919c1: test   DWORD PTR [rsi+0x194],edi
0x00e919c7: je     0x140e91a45
0x00e919c9: mov    eax,edi
0x00e919cb: sub    eax,0x20
0x00e919ce: je     0x140e91a11
0x00e919d0: sub    eax,0x20
0x00e919d3: je     0x140e91a08
0x00e919d5: sub    eax,0x40
0x00e919d8: je     0x140e919ff
0x00e919da: cmp    eax,0x80
0x00e919df: jne    0x140e91a21
0x00e919e1: cmp    r12d,0x2
0x00e919e5: jb     0x140e919f6
0x00e919e7: lea    rdx,[rip+0x803006]        # 0x1416949f4 ; literal="even "
0x00e919ee: mov    rcx,r13
0x00e919f1: call   0x140070b90
0x00e919f6: lea    rdx,[rip+0x8bfdcb]        # 0x1417517c8 ; literal="lines which emerge when reading along certain prescribed paths"
0x00e919fd: jmp    0x140e91a18
0x00e919ff: lea    rdx,[rip+0x8bf7fa]        # 0x141751200 ; literal="lines which can be read orthogonally across the standard lines"
0x00e91a06: jmp    0x140e91a18
0x00e91a08: lea    rdx,[rip+0x8bf8a9]        # 0x1417512b8 ; literal="lines which can be read backwards as well as forwards"
0x00e91a0f: jmp    0x140e91a18
0x00e91a11: lea    rdx,[rip+0x8bf8d8]        # 0x1417512f0 ; literal="lines with different readings depending on word breaks"
0x00e91a18: lea    rcx,[rbp+0x28]
0x00e91a1c: call   0x140070b90
0x00e91a21: cmp    r15d,0x2
0x00e91a25: jne    0x140e91a30
0x00e91a27: lea    rdx,[rip+0x77295e]        # 0x14160438c ; literal=" and "
0x00e91a2e: jmp    0x140e91a39
0x00e91a30: jle    0x140e91a42
0x00e91a32: lea    rdx,[rip+0x77295b]        # 0x141604394 ; literal=", "
0x00e91a39: lea    rcx,[rbp+0x28]
0x00e91a3d: call   0x140070b90
0x00e91a42: dec    r15d
0x00e91a45: inc    r14d
0x00e91a48: cmp    r14d,0x4
0x00e91a4c: jl     0x140e91990
0x00e91a52: mov    DWORD PTR [rbp-0x58],edi
0x00e91a55: lea    rdx,[rip+0x787b3c]        # 0x141619598 ; literal=".  "
0x00e91a5c: lea    rcx,[rbp+0x28]
0x00e91a60: call   0x140070b90
0x00e91a65: movzx  edi,BYTE PTR [rsp+0x30]
0x00e91a6a: movzx  esi,BYTE PTR [rsp+0x30]
0x00e91a6f: mov    r13,QWORD PTR [rsp+0x58]
0x00e91a74: mov    r14d,DWORD PTR [r13+0x15c]
0x00e91a7b: cmp    r14d,0xffffffff
0x00e91a7f: jne    0x140e91a8f
0x00e91a81: cmp    DWORD PTR [r13+0x158],0x0
0x00e91a89: je     0x140e92300
0x00e91a8f: mov    r15d,DWORD PTR [r13+0x158]
0x00e91a96: mov    r12,QWORD PTR [rbp-0x60]
0x00e91a9a: mov    eax,DWORD PTR [r12+0xa8]
0x00e91aa2: test   eax,eax
0x00e91aa4: je     0x140e91aad
0x00e91aa6: test   r15d,r15d
0x00e91aa9: cmove  r15d,eax
0x00e91aad: mov    eax,DWORD PTR [r12+0xac]
0x00e91ab5: cmp    eax,0xffffffff
0x00e91ab8: je     0x140e91ac3
0x00e91aba: cmp    r14d,0xffffffff
0x00e91abe: jne    0x140e91acd
0x00e91ac0: mov    r14d,eax
0x00e91ac3: cmp    r14d,0xffffffff
0x00e91ac7: je     0x140e92227
0x00e91acd: lea    rcx,[rbp+0x28]
0x00e91ad1: cmp    BYTE PTR [rsp+0x31],0x0
0x00e91ad6: jne    0x140e91b36
0x00e91ad8: lea    rdx,[rip+0x77715d]        # 0x141608c3c ; literal="The "
0x00e91adf: call   0x140070b90
0x00e91ae4: lea    rcx,[rbp+0x48]
0x00e91ae8: call   0x140070cc0
0x00e91aed: nop
0x00e91aee: mov    ecx,DWORD PTR [rsp+0x50]
0x00e91af2: inc    ecx
0x00e91af4: xor    r8d,r8d
0x00e91af7: lea    rdx,[rbp+0x48]
0x00e91afb: call   0x140548050
0x00e91b00: lea    rcx,[rbp+0x48]
0x00e91b04: call   0x140546560
0x00e91b09: lea    rdx,[rbp+0x48]
0x00e91b0d: lea    rcx,[rbp+0x28]
0x00e91b11: call   0x1400bb340
0x00e91b16: lea    rdx,[rip+0x777f8f]        # 0x141609aac ; literal=" part"
0x00e91b1d: lea    rcx,[rbp+0x28]
0x00e91b21: call   0x140070b90
0x00e91b26: mov    BYTE PTR [rsp+0x31],0x1
0x00e91b2b: lea    rcx,[rbp+0x48]
0x00e91b2f: call   0x140069460
0x00e91b34: jmp    0x140e91b42
0x00e91b36: lea    rdx,[rip+0x777c7b]        # 0x1416097b8 ; literal="It"
0x00e91b3d: call   0x140070b90
0x00e91b42: lea    rcx,[rbp+0x28]
0x00e91b46: cmp    DWORD PTR [r13+0xc],0x2
0x00e91b4b: lea    rdx,[rip+0x8bfcd6]        # 0x141751828 ; literal=" has lines with "
0x00e91b52: jge    0x140e91b5b
0x00e91b54: lea    rdx,[rip+0x7f8c21]        # 0x14168a77c ; literal=" has "
0x00e91b5b: call   0x140070b90
0x00e91b60: lea    rcx,[rbp+0xc8]
0x00e91b67: call   0x140070cc0
0x00e91b6c: nop
0x00e91b6d: lea    rdx,[rbp+0xc8]
0x00e91b74: mov    ecx,r15d
0x00e91b77: call   0x140547840
0x00e91b7c: lea    rdx,[rbp+0xc8]
0x00e91b83: lea    rcx,[rbp+0x28]
0x00e91b87: call   0x1400bb340
0x00e91b8c: lea    rdx,[rip+0x771e5d]        # 0x1416039f0 ; literal=" "
0x00e91b93: lea    rcx,[rbp+0x28]
0x00e91b97: call   0x140070b90
0x00e91b9c: lea    rcx,[rbp+0x28]
0x00e91ba0: cmp    r15d,0x1
0x00e91ba4: lea    rdx,[rip+0x8bf7d1]        # 0x14175137c ; literal="foot"
0x00e91bab: je     0x140e91bb4
0x00e91bad: lea    rdx,[rip+0x8bf7c0]        # 0x141751374 ; literal="feet"
0x00e91bb4: call   0x140070b90
0x00e91bb9: lea    rdx,[rip+0x777c88]        # 0x141609848 ; literal=" with "
0x00e91bc0: lea    rcx,[rbp+0x28]
0x00e91bc4: call   0x140070b90
0x00e91bc9: lea    rcx,[rbp+0x28]
0x00e91bcd: test   BYTE PTR [r12+0x8c],0x1
0x00e91bd6: je     0x140e91c87
0x00e91bdc: lea    rdx,[rip+0x8bf7b5]        # 0x141751398 ; literal="a tone pattern of "
0x00e91be3: call   0x140070b90
0x00e91be8: cmp    r14d,0xb
0x00e91bec: ja     0x140e91c7b
0x00e91bf2: movsxd rax,r14d
0x00e91bf5: lea    rdx,[rip+0xffffffffff16e404]        # 0x140000000
0x00e91bfc: mov    ecx,DWORD PTR [rdx+rax*4+0xe94a6c]
0x00e91c03: add    rcx,rdx
0x00e91c06: jmp    rcx
0x00e91c08: lea    rdx,[rip+0x8bf779]        # 0x141751388 ; literal="even-uneven"
0x00e91c0f: jmp    0x140e91c72
0x00e91c11: lea    rdx,[rip+0x8bf720]        # 0x141751338 ; literal="uneven-even"
0x00e91c18: jmp    0x140e91c72
0x00e91c1a: lea    rdx,[rip+0x8bf707]        # 0x141751328 ; literal="uneven-uneven"
0x00e91c21: jmp    0x140e91c72
0x00e91c23: lea    rdx,[rip+0x8bf736]        # 0x141751360 ; literal="uneven-even-even"
0x00e91c2a: jmp    0x140e91c72
0x00e91c2c: lea    rdx,[rip+0x8bf715]        # 0x141751348 ; literal="even-uneven-even"
0x00e91c33: jmp    0x140e91c72
0x00e91c35: lea    rdx,[rip+0x8bf7f4]        # 0x141751430 ; literal="even-even-uneven"
0x00e91c3c: jmp    0x140e91c72
0x00e91c3e: lea    rdx,[rip+0x8bf7d3]        # 0x141751418 ; literal="uneven-even-uneven"
0x00e91c45: jmp    0x140e91c72
0x00e91c47: lea    rdx,[rip+0x8bf80a]        # 0x141751458 ; literal="even-even"
0x00e91c4e: jmp    0x140e91c72
0x00e91c50: lea    rdx,[rip+0x8bf7f1]        # 0x141751448 ; literal="even-even-even"
0x00e91c57: jmp    0x140e91c72
0x00e91c59: lea    rdx,[rip+0x8bf768]        # 0x1417513c8 ; literal="even-uneven-uneven"
0x00e91c60: jmp    0x140e91c72
0x00e91c62: lea    rdx,[rip+0x8bf747]        # 0x1417513b0 ; literal="uneven-uneven-even"
0x00e91c69: jmp    0x140e91c72
0x00e91c6b: lea    rdx,[rip+0x8bf78e]        # 0x141751400 ; literal="uneven-uneven-uneven"
0x00e91c72: lea    rcx,[rbp+0x28]
0x00e91c76: call   0x140070b90
0x00e91c7b: lea    rdx,[rip+0x787916]        # 0x141619598 ; literal=".  "
0x00e91c82: jmp    0x140e92211
0x00e91c87: test   DWORD PTR [r12+0xe4],0x4000
0x00e91c93: je     0x140e91f6b
0x00e91c99: lea    rdx,[rip+0x8bf740]        # 0x1417513e0 ; literal="a syllable weight pattern of "
0x00e91ca0: call   0x140070b90
0x00e91ca5: lea    r12,[rip+0xffffffffff16e354]        # 0x140000000
0x00e91cac: cmp    r14d,0xb
0x00e91cb0: ja     0x140e91efd
0x00e91cb6: movsxd rax,r14d
0x00e91cb9: mov    ecx,DWORD PTR [r12+rax*4+0xe94a9c]
0x00e91cc1: add    rcx,r12
0x00e91cc4: jmp    rcx
0x00e91cc6: lea    rdx,[rip+0x8bec5b]        # 0x141750928 ; literal="short-long"
0x00e91ccd: lea    rcx,[rbp+0x28]
0x00e91cd1: call   0x140070b90
0x00e91cd6: lea    rdx,[rip+0x8bec8b]        # 0x141750968 ; literal=" (quantitative "
0x00e91cdd: lea    rcx,[rbp+0x28]
0x00e91ce1: call   0x140070b90
0x00e91ce6: lea    rdx,[rip+0x8bec6f]        # 0x14175095c ; literal="iambic"
0x00e91ced: jmp    0x140e91ec8
0x00e91cf2: lea    rdx,[rip+0x8bec1f]        # 0x141750918 ; literal="long-short"
0x00e91cf9: lea    rcx,[rbp+0x28]
0x00e91cfd: call   0x140070b90
0x00e91d02: lea    rdx,[rip+0x8bec5f]        # 0x141750968 ; literal=" (quantitative "
0x00e91d09: lea    rcx,[rbp+0x28]
0x00e91d0d: call   0x140070b90
0x00e91d12: lea    rdx,[rip+0x8bec6f]        # 0x141750988 ; literal="trochaic"
0x00e91d19: jmp    0x140e91ec8
0x00e91d1e: lea    rdx,[rip+0x8bec2b]        # 0x141750950 ; literal="long-long"
0x00e91d25: lea    rcx,[rbp+0x28]
0x00e91d29: call   0x140070b90
0x00e91d2e: lea    rdx,[rip+0x8bec33]        # 0x141750968 ; literal=" (quantitative "
0x00e91d35: lea    rcx,[rbp+0x28]
0x00e91d39: call   0x140070b90
0x00e91d3e: lea    rdx,[rip+0x8bec33]        # 0x141750978 ; literal="spondaic"
0x00e91d45: jmp    0x140e91ec8
0x00e91d4a: lea    rdx,[rip+0x8bebe7]        # 0x141750938 ; literal="long-short-short"
0x00e91d51: lea    rcx,[rbp+0x28]
0x00e91d55: call   0x140070b90
0x00e91d5a: lea    rdx,[rip+0x8bec07]        # 0x141750968 ; literal=" (quantitative "
0x00e91d61: lea    rcx,[rbp+0x28]
0x00e91d65: call   0x140070b90
0x00e91d6a: lea    rdx,[rip+0x8becaf]        # 0x141750a20 ; literal="dactylic"
0x00e91d71: jmp    0x140e91ec8
0x00e91d76: lea    rdx,[rip+0x8beb63]        # 0x1417508e0 ; literal="short-long-short"
0x00e91d7d: lea    rcx,[rbp+0x28]
0x00e91d81: call   0x140070b90
0x00e91d86: lea    rdx,[rip+0x8bebdb]        # 0x141750968 ; literal=" (quantitative "
0x00e91d8d: lea    rcx,[rbp+0x28]
0x00e91d91: call   0x140070b90
0x00e91d96: lea    rdx,[rip+0x8bec73]        # 0x141750a10 ; literal="amphibrachic"
0x00e91d9d: jmp    0x140e91ec8
0x00e91da2: lea    rdx,[rip+0x8beb1f]        # 0x1417508c8 ; literal="short-short-long"
0x00e91da9: lea    rcx,[rbp+0x28]
0x00e91dad: call   0x140070b90
0x00e91db2: lea    rdx,[rip+0x8bebaf]        # 0x141750968 ; literal=" (quantitative "
0x00e91db9: lea    rcx,[rbp+0x28]
0x00e91dbd: call   0x140070b90
0x00e91dc2: lea    rdx,[rip+0x8bec6f]        # 0x141750a38 ; literal="anapaestic"
0x00e91dc9: jmp    0x140e91ec8
0x00e91dce: lea    rdx,[rip+0x8beb33]        # 0x141750908 ; literal="long-short-long"
0x00e91dd5: lea    rcx,[rbp+0x28]
0x00e91dd9: call   0x140070b90
0x00e91dde: lea    rdx,[rip+0x8beb83]        # 0x141750968 ; literal=" (quantitative "
0x00e91de5: lea    rcx,[rbp+0x28]
0x00e91de9: call   0x140070b90
0x00e91dee: lea    rdx,[rip+0x8bec37]        # 0x141750a2c ; literal="cretic"
0x00e91df5: jmp    0x140e91ec8
0x00e91dfa: lea    rdx,[rip+0x8beaf7]        # 0x1417508f8 ; literal="short-short"
0x00e91e01: lea    rcx,[rbp+0x28]
0x00e91e05: call   0x140070b90
0x00e91e0a: lea    rdx,[rip+0x8beb57]        # 0x141750968 ; literal=" (quantitative "
0x00e91e11: lea    rcx,[rbp+0x28]
0x00e91e15: call   0x140070b90
0x00e91e1a: lea    rdx,[rip+0x8bebcf]        # 0x1417509f0 ; literal="pyrrhic"
0x00e91e21: jmp    0x140e91ec8
0x00e91e26: lea    rdx,[rip+0x8beb7b]        # 0x1417509a8 ; literal="short-short-short"
0x00e91e2d: lea    rcx,[rbp+0x28]
0x00e91e31: call   0x140070b90
0x00e91e36: lea    rdx,[rip+0x8beb2b]        # 0x141750968 ; literal=" (quantitative "
0x00e91e3d: lea    rcx,[rbp+0x28]
0x00e91e41: call   0x140070b90
0x00e91e46: lea    rdx,[rip+0x8beb93]        # 0x1417509e0 ; literal="tribrachic"
0x00e91e4d: jmp    0x140e91ec8
0x00e91e4f: lea    rdx,[rip+0x8beb42]        # 0x141750998 ; literal="short-long-long"
0x00e91e56: lea    rcx,[rbp+0x28]
0x00e91e5a: call   0x140070b90
0x00e91e5f: lea    rdx,[rip+0x8beb02]        # 0x141750968 ; literal=" (quantitative "
0x00e91e66: lea    rcx,[rbp+0x28]
0x00e91e6a: call   0x140070b90
0x00e91e6f: lea    rdx,[rip+0x8beb92]        # 0x141750a08 ; literal="bacchic"
0x00e91e76: jmp    0x140e91ec8
0x00e91e78: lea    rdx,[rip+0x8beb51]        # 0x1417509d0 ; literal="long-long-short"
0x00e91e7f: lea    rcx,[rbp+0x28]
0x00e91e83: call   0x140070b90
0x00e91e88: lea    rdx,[rip+0x8bead9]        # 0x141750968 ; literal=" (quantitative "
0x00e91e8f: lea    rcx,[rbp+0x28]
0x00e91e93: call   0x140070b90
0x00e91e98: lea    rdx,[rip+0x8beb59]        # 0x1417509f8 ; literal="antibacchic"
0x00e91e9f: jmp    0x140e91ec8
0x00e91ea1: lea    rdx,[rip+0x8beb18]        # 0x1417509c0 ; literal="long-long-long"
0x00e91ea8: lea    rcx,[rbp+0x28]
0x00e91eac: call   0x140070b90
0x00e91eb1: lea    rdx,[rip+0x8beab0]        # 0x141750968 ; literal=" (quantitative "
0x00e91eb8: lea    rcx,[rbp+0x28]
0x00e91ebc: call   0x140070b90
0x00e91ec1: lea    rdx,[rip+0x8bebd0]        # 0x141750a98 ; literal="molossic"
0x00e91ec8: lea    rcx,[rbp+0x28]
0x00e91ecc: call   0x140070b90
0x00e91ed1: lea    rdx,[rip+0x771b18]        # 0x1416039f0 ; literal=" "
0x00e91ed8: lea    rcx,[rbp+0x28]
0x00e91edc: call   0x140070b90
0x00e91ee1: lea    eax,[r15-0x1]
0x00e91ee5: cmp    eax,0x7
0x00e91ee8: ja     0x140e9220a
0x00e91eee: cdqe
0x00e91ef0: mov    ecx,DWORD PTR [r12+rax*4+0xe94acc]
0x00e91ef8: add    rcx,r12
0x00e91efb: jmp    rcx
0x00e91efd: lea    rdx,[rip+0x8bea64]        # 0x141750968 ; literal=" (quantitative "
0x00e91f04: lea    rcx,[rbp+0x28]
0x00e91f08: call   0x140070b90
0x00e91f0d: cmp    r14d,0xb
0x00e91f11: ja     0x140e91ed1
0x00e91f13: movsxd rax,r14d
0x00e91f16: mov    ecx,DWORD PTR [r12+rax*4+0xe94aec]
0x00e91f1e: add    rcx,r12
0x00e91f21: jmp    rcx
0x00e91f23: lea    rdx,[rip+0x8beb5e]        # 0x141750a88 ; literal="monometer"
0x00e91f2a: jmp    0x140e92201
0x00e91f2f: lea    rdx,[rip+0x8beb72]        # 0x141750aa8 ; literal="trimeter"
0x00e91f36: jmp    0x140e92201
0x00e91f3b: lea    rdx,[rip+0x8beb16]        # 0x141750a58 ; literal="tetrameter"
0x00e91f42: jmp    0x140e92201
0x00e91f47: lea    rdx,[rip+0x8beafa]        # 0x141750a48 ; literal="pentameter"
0x00e91f4e: jmp    0x140e92201
0x00e91f53: lea    rdx,[rip+0x8beb1e]        # 0x141750a78 ; literal="hexameter"
0x00e91f5a: jmp    0x140e92201
0x00e91f5f: lea    rdx,[rip+0x8beb02]        # 0x141750a68 ; literal="heptameter"
0x00e91f66: jmp    0x140e92201
0x00e91f6b: lea    rdx,[rip+0x8bebee]        # 0x141750b60 ; literal="an accent pattern of "
0x00e91f72: call   0x140070b90
0x00e91f77: lea    r12,[rip+0xffffffffff16e082]        # 0x140000000
0x00e91f7e: cmp    r14d,0xb
0x00e91f82: ja     0x140e921cb
0x00e91f88: movsxd rax,r14d
0x00e91f8b: mov    ecx,DWORD PTR [r12+rax*4+0xe94b1c]
0x00e91f93: add    rcx,r12
0x00e91f96: jmp    rcx
0x00e91f98: lea    rdx,[rip+0x8beba9]        # 0x141750b48 ; literal="unstressed-stressed"
0x00e91f9f: lea    rcx,[rbp+0x28]
0x00e91fa3: call   0x140070b90
0x00e91fa8: lea    rdx,[rip+0x8bec09]        # 0x141750bb8 ; literal=" (qualitative "
0x00e91faf: lea    rcx,[rbp+0x28]
0x00e91fb3: call   0x140070b90
0x00e91fb8: lea    rdx,[rip+0x8be99d]        # 0x14175095c ; literal="iambic"
0x00e91fbf: jmp    0x140e9219a
0x00e91fc4: lea    rdx,[rip+0x8beb0d]        # 0x141750ad8 ; literal="stressed-unstressed"
0x00e91fcb: lea    rcx,[rbp+0x28]
0x00e91fcf: call   0x140070b90
0x00e91fd4: lea    rdx,[rip+0x8bebdd]        # 0x141750bb8 ; literal=" (qualitative "
0x00e91fdb: lea    rcx,[rbp+0x28]
0x00e91fdf: call   0x140070b90
0x00e91fe4: lea    rdx,[rip+0x8be99d]        # 0x141750988 ; literal="trochaic"
0x00e91feb: jmp    0x140e9219a
0x00e91ff0: lea    rdx,[rip+0x8beac9]        # 0x141750ac0 ; literal="stressed-stressed"
0x00e91ff7: lea    rcx,[rbp+0x28]
0x00e91ffb: call   0x140070b90
0x00e92000: lea    rdx,[rip+0x8bebb1]        # 0x141750bb8 ; literal=" (qualitative "
0x00e92007: lea    rcx,[rbp+0x28]
0x00e9200b: call   0x140070b90
0x00e92010: lea    rdx,[rip+0x8be961]        # 0x141750978 ; literal="spondaic"
0x00e92017: jmp    0x140e9219a
0x00e9201c: lea    rdx,[rip+0x8beaed]        # 0x141750b10 ; literal="stressed-unstressed-unstressed"
0x00e92023: lea    rcx,[rbp+0x28]
0x00e92027: call   0x140070b90
0x00e9202c: lea    rdx,[rip+0x8beb85]        # 0x141750bb8 ; literal=" (qualitative "
0x00e92033: lea    rcx,[rbp+0x28]
0x00e92037: call   0x140070b90
0x00e9203c: lea    rdx,[rip+0x8be9dd]        # 0x141750a20 ; literal="dactylic"
0x00e92043: jmp    0x140e9219a
0x00e92048: lea    rdx,[rip+0x8beaa1]        # 0x141750af0 ; literal="unstressed-stressed-unstressed"
0x00e9204f: lea    rcx,[rbp+0x28]
0x00e92053: call   0x140070b90
0x00e92058: lea    rdx,[rip+0x8beb59]        # 0x141750bb8 ; literal=" (qualitative "
0x00e9205f: lea    rcx,[rbp+0x28]
0x00e92063: call   0x140070b90
0x00e92068: lea    rdx,[rip+0x8be9a1]        # 0x141750a10 ; literal="amphibrachic"
0x00e9206f: jmp    0x140e9219a
0x00e92074: lea    rdx,[rip+0x8beb8d]        # 0x141750c08 ; literal="unstressed-unstressed-stressed"
0x00e9207b: lea    rcx,[rbp+0x28]
0x00e9207f: call   0x140070b90
0x00e92084: lea    rdx,[rip+0x8beb2d]        # 0x141750bb8 ; literal=" (qualitative "
0x00e9208b: lea    rcx,[rbp+0x28]
0x00e9208f: call   0x140070b90
0x00e92094: lea    rdx,[rip+0x8be99d]        # 0x141750a38 ; literal="anapaestic"
0x00e9209b: jmp    0x140e9219a
0x00e920a0: lea    rdx,[rip+0x8beb41]        # 0x141750be8 ; literal="stressed-unstressed-stressed"
0x00e920a7: lea    rcx,[rbp+0x28]
0x00e920ab: call   0x140070b90
0x00e920b0: lea    rdx,[rip+0x8beb01]        # 0x141750bb8 ; literal=" (qualitative "
0x00e920b7: lea    rcx,[rbp+0x28]
0x00e920bb: call   0x140070b90
0x00e920c0: lea    rdx,[rip+0x8be965]        # 0x141750a2c ; literal="cretic"
0x00e920c7: jmp    0x140e9219a
0x00e920cc: lea    rdx,[rip+0x8beb7d]        # 0x141750c50 ; literal="unstressed-unstressed"
0x00e920d3: lea    rcx,[rbp+0x28]
0x00e920d7: call   0x140070b90
0x00e920dc: lea    rdx,[rip+0x8bead5]        # 0x141750bb8 ; literal=" (qualitative "
0x00e920e3: lea    rcx,[rbp+0x28]
0x00e920e7: call   0x140070b90
0x00e920ec: lea    rdx,[rip+0x8be8fd]        # 0x1417509f0 ; literal="pyrrhic"
0x00e920f3: jmp    0x140e9219a
0x00e920f8: lea    rdx,[rip+0x8beb29]        # 0x141750c28 ; literal="unstressed-unstressed-unstressed"
0x00e920ff: lea    rcx,[rbp+0x28]
0x00e92103: call   0x140070b90
0x00e92108: lea    rdx,[rip+0x8beaa9]        # 0x141750bb8 ; literal=" (qualitative "
0x00e9210f: lea    rcx,[rbp+0x28]
0x00e92113: call   0x140070b90
0x00e92118: lea    rdx,[rip+0x8be8c1]        # 0x1417509e0 ; literal="tribrachic"
0x00e9211f: jmp    0x140e9219a
0x00e92121: lea    rdx,[rip+0x8bea70]        # 0x141750b98 ; literal="unstressed-stressed-stressed"
0x00e92128: lea    rcx,[rbp+0x28]
0x00e9212c: call   0x140070b90
0x00e92131: lea    rdx,[rip+0x8bea80]        # 0x141750bb8 ; literal=" (qualitative "
0x00e92138: lea    rcx,[rbp+0x28]
0x00e9213c: call   0x140070b90
0x00e92141: lea    rdx,[rip+0x8be8c0]        # 0x141750a08 ; literal="bacchic"
0x00e92148: jmp    0x140e9219a
0x00e9214a: lea    rdx,[rip+0x8bea27]        # 0x141750b78 ; literal="stressed-stressed-unstressed"
0x00e92151: lea    rcx,[rbp+0x28]
0x00e92155: call   0x140070b90
0x00e9215a: lea    rdx,[rip+0x8bea57]        # 0x141750bb8 ; literal=" (qualitative "
0x00e92161: lea    rcx,[rbp+0x28]
0x00e92165: call   0x140070b90
0x00e9216a: lea    rdx,[rip+0x8be887]        # 0x1417509f8 ; literal="antibacchic"
0x00e92171: jmp    0x140e9219a
0x00e92173: lea    rdx,[rip+0x8bea4e]        # 0x141750bc8 ; literal="stressed-stressed-stressed"
0x00e9217a: lea    rcx,[rbp+0x28]
0x00e9217e: call   0x140070b90
0x00e92183: lea    rdx,[rip+0x8bea2e]        # 0x141750bb8 ; literal=" (qualitative "
0x00e9218a: lea    rcx,[rbp+0x28]
0x00e9218e: call   0x140070b90
0x00e92193: lea    rdx,[rip+0x8be8fe]        # 0x141750a98 ; literal="molossic"
0x00e9219a: lea    rcx,[rbp+0x28]
0x00e9219e: call   0x140070b90
0x00e921a3: lea    rdx,[rip+0x771846]        # 0x1416039f0 ; literal=" "
0x00e921aa: lea    rcx,[rbp+0x28]
0x00e921ae: call   0x140070b90
0x00e921b3: lea    eax,[r15-0x1]
0x00e921b7: cmp    eax,0x7
0x00e921ba: ja     0x140e9220a
0x00e921bc: cdqe
0x00e921be: mov    ecx,DWORD PTR [r12+rax*4+0xe94b4c]
0x00e921c6: add    rcx,r12
0x00e921c9: jmp    rcx
0x00e921cb: lea    rdx,[rip+0x8be9e6]        # 0x141750bb8 ; literal=" (qualitative "
0x00e921d2: lea    rcx,[rbp+0x28]
0x00e921d6: call   0x140070b90
0x00e921db: cmp    r14d,0xb
0x00e921df: ja     0x140e921a3
0x00e921e1: movsxd rax,r14d
0x00e921e4: mov    ecx,DWORD PTR [r12+rax*4+0xe94b6c]
0x00e921ec: add    rcx,r12
0x00e921ef: jmp    rcx
0x00e921f1: lea    rdx,[rip+0x8be8c0]        # 0x141750ab8 ; literal="dimeter"
0x00e921f8: jmp    0x140e92201
0x00e921fa: lea    rdx,[rip+0x8be937]        # 0x141750b38 ; literal="octameter"
0x00e92201: lea    rcx,[rbp+0x28]
0x00e92205: call   0x140070b90
0x00e9220a: lea    rdx,[rip+0x8be91f]        # 0x141750b30 ; literal=").  "
0x00e92211: lea    rcx,[rbp+0x28]
0x00e92215: call   0x140070b90
0x00e9221a: nop
0x00e9221b: lea    rcx,[rbp+0xc8]
0x00e92222: jmp    0x140e922fb
0x00e92227: test   r15d,r15d
0x00e9222a: je     0x140e92300
0x00e92230: lea    rcx,[rbp+0x28]
0x00e92234: cmp    BYTE PTR [rsp+0x31],0x0
0x00e92239: jne    0x140e92299
0x00e9223b: lea    rdx,[rip+0x7769fa]        # 0x141608c3c ; literal="The "
0x00e92242: call   0x140070b90
0x00e92247: lea    rcx,[rbp+0x48]
0x00e9224b: call   0x140070cc0
0x00e92250: nop
0x00e92251: mov    ecx,DWORD PTR [rsp+0x50]
0x00e92255: inc    ecx
0x00e92257: xor    r8d,r8d
0x00e9225a: lea    rdx,[rbp+0x48]
0x00e9225e: call   0x140548050
0x00e92263: lea    rcx,[rbp+0x48]
0x00e92267: call   0x140546560
0x00e9226c: lea    rdx,[rbp+0x48]
0x00e92270: lea    rcx,[rbp+0x28]
0x00e92274: call   0x1400bb340
0x00e92279: lea    rdx,[rip+0x77782c]        # 0x141609aac ; literal=" part"
0x00e92280: lea    rcx,[rbp+0x28]
0x00e92284: call   0x140070b90
0x00e92289: mov    BYTE PTR [rsp+0x31],0x1
0x00e9228e: lea    rcx,[rbp+0x48]
0x00e92292: call   0x140069460
0x00e92297: jmp    0x140e922a5
0x00e92299: lea    rdx,[rip+0x777518]        # 0x1416097b8 ; literal="It"
0x00e922a0: call   0x140070b90
0x00e922a5: lea    rcx,[rbp+0x28]
0x00e922a9: cmp    DWORD PTR [r13+0xc],0x2
0x00e922ae: lea    rdx,[rip+0x8bf573]        # 0x141751828 ; literal=" has lines with "
0x00e922b5: jge    0x140e922be
0x00e922b7: lea    rdx,[rip+0x7f84be]        # 0x14168a77c ; literal=" has "
0x00e922be: call   0x140070b90
0x00e922c3: lea    rcx,[rbp+0x68]
0x00e922c7: call   0x140070cc0
0x00e922cc: nop
0x00e922cd: lea    rdx,[rbp+0x68]
0x00e922d1: mov    ecx,r15d
0x00e922d4: call   0x140547840
0x00e922d9: lea    rdx,[rbp+0x68]
0x00e922dd: lea    rcx,[rbp+0x28]
0x00e922e1: call   0x1400bb340
0x00e922e6: lea    rdx,[rip+0x8bea53]        # 0x141750d40 ; literal=" syllables.  "
0x00e922ed: lea    rcx,[rbp+0x28]
0x00e922f1: call   0x140070b90
0x00e922f6: nop
0x00e922f7: lea    rcx,[rbp+0x68]
0x00e922fb: call   0x140069460
0x00e92300: cmp    DWORD PTR [r13+0x160],0xffffffff
0x00e92308: je     0x140e923f1
0x00e9230e: lea    rcx,[rbp+0x28]
0x00e92312: cmp    BYTE PTR [rsp+0x31],0x0
0x00e92317: jne    0x140e92377
0x00e92319: lea    rdx,[rip+0x77691c]        # 0x141608c3c ; literal="The "
0x00e92320: call   0x140070b90
0x00e92325: lea    rcx,[rbp+0x48]
0x00e92329: call   0x140070cc0
0x00e9232e: nop
0x00e9232f: mov    ecx,DWORD PTR [rsp+0x50]
0x00e92333: inc    ecx
0x00e92335: xor    r8d,r8d
0x00e92338: lea    rdx,[rbp+0x48]
0x00e9233c: call   0x140548050
0x00e92341: lea    rcx,[rbp+0x48]
0x00e92345: call   0x140546560
0x00e9234a: lea    rdx,[rbp+0x48]
0x00e9234e: lea    rcx,[rbp+0x28]
0x00e92352: call   0x1400bb340
0x00e92357: lea    rdx,[rip+0x77774e]        # 0x141609aac ; literal=" part"
0x00e9235e: lea    rcx,[rbp+0x28]
0x00e92362: call   0x140070b90
0x00e92367: mov    BYTE PTR [rsp+0x31],0x1
0x00e9236c: lea    rcx,[rbp+0x48]
0x00e92370: call   0x140069460
0x00e92375: jmp    0x140e92383
0x00e92377: lea    rdx,[rip+0x77743a]        # 0x1416097b8 ; literal="It"
0x00e9237e: call   0x140070b90
0x00e92383: lea    rdx,[rip+0x7f83f2]        # 0x14168a77c ; literal=" has "
0x00e9238a: lea    rcx,[rbp+0x28]
0x00e9238e: call   0x140070b90
0x00e92393: mov    ecx,DWORD PTR [r13+0x160]
0x00e9239a: test   ecx,ecx
0x00e9239c: je     0x140e923ba
0x00e9239e: sub    ecx,0x1
0x00e923a1: je     0x140e923b1
0x00e923a3: cmp    ecx,0x1
0x00e923a6: jne    0x140e923ca
0x00e923a8: lea    rdx,[rip+0x8be8f9]        # 0x141750ca8 ; literal="a terminal caesura"
0x00e923af: jmp    0x140e923c1
0x00e923b1: lea    rdx,[rip+0x8be998]        # 0x141750d50 ; literal="a medial caesura"
0x00e923b8: jmp    0x140e923c1
0x00e923ba: lea    rdx,[rip+0x8be9a7]        # 0x141750d68 ; literal="an initial caesura"
0x00e923c1: lea    rcx,[rbp+0x28]
0x00e923c5: call   0x140070b90
0x00e923ca: cmp    DWORD PTR [r13+0xc],0x1
0x00e923cf: jle    0x140e923e1
0x00e923d1: lea    rdx,[rip+0x8bf440]        # 0x141751818 ; literal=" in each line"
0x00e923d8: lea    rcx,[rbp+0x28]
0x00e923dc: call   0x140070b90
0x00e923e1: lea    rdx,[rip+0x7871b0]        # 0x141619598 ; literal=".  "
0x00e923e8: lea    rcx,[rbp+0x28]
0x00e923ec: call   0x140070b90
0x00e923f1: lea    rcx,[r13+0x38]
0x00e923f5: call   0x1400709a0
0x00e923fa: mov    r14,rax
0x00e923fd: lea    rcx,[r13+0x50]
0x00e92401: mov    QWORD PTR [rbp-0x10],rcx
0x00e92405: call   0x1400709a0
0x00e9240a: mov    r15,rax
0x00e9240d: cmp    r14d,eax
0x00e92410: cmovge r15d,r14d
0x00e92414: lea    rcx,[r13+0x68]
0x00e92418: call   0x1400709a0
0x00e9241d: mov    r14,rax
0x00e92420: cmp    r15d,eax
0x00e92423: cmovge r14d,r15d
0x00e92427: lea    rcx,[r13+0x80]
0x00e9242e: mov    QWORD PTR [rbp-0x18],rcx
0x00e92432: call   0x1400709a0
0x00e92437: mov    r15,rax
0x00e9243a: cmp    r14d,eax
0x00e9243d: cmovge r15d,r14d
0x00e92441: lea    rcx,[r13+0xe0]
0x00e92448: call   0x1400709a0
0x00e9244d: mov    r14,rax
0x00e92450: cmp    r15d,eax
0x00e92453: cmovge r14d,r15d
0x00e92457: lea    rcx,[r13+0xf8]
0x00e9245e: call   0x1400709a0
0x00e92463: mov    r15,rax
0x00e92466: cmp    r14d,eax
0x00e92469: cmovge r15d,r14d
0x00e9246d: lea    rcx,[r13+0x128]
0x00e92474: call   0x1400709a0
0x00e92479: mov    r14,rax
0x00e9247c: cmp    r15d,eax
0x00e9247f: cmovge r14d,r15d
0x00e92483: lea    r15,[r13+0x140]
0x00e9248a: mov    QWORD PTR [rbp-0x8],r15
0x00e9248e: mov    rcx,r15
0x00e92491: call   0x1400709a0
0x00e92496: xor    ecx,ecx
0x00e92498: mov    r12d,ecx
0x00e9249b: mov    DWORD PTR [rsp+0x74],ecx
0x00e9249f: mov    QWORD PTR [rbp-0x38],rcx
0x00e924a3: cmp    r14d,eax
0x00e924a6: cmovge eax,r14d
0x00e924aa: cdqe
0x00e924ac: mov    QWORD PTR [rbp+0x18],rax
0x00e924b0: test   rax,rax
0x00e924b3: jle    0x140e93a8b
0x00e924b9: mov    eax,0x1
0x00e924be: mov    DWORD PTR [rbp-0x44],eax
0x00e924c1: mov    DWORD PTR [rbp-0x74],eax
0x00e924c4: mov    rbx,QWORD PTR [rbp-0x50]
0x00e924c8: nop    DWORD PTR [rax+rax*1+0x0]
0x00e924d0: xor    r13b,r13b
0x00e924d3: mov    BYTE PTR [rsp+0x30],r13b
0x00e924d8: mov    r14,QWORD PTR [rsp+0x58]
0x00e924dd: mov    rax,QWORD PTR [r14+0xe8]
0x00e924e4: sub    rax,QWORD PTR [r14+0xe0]
0x00e924eb: sar    rax,0x2
0x00e924ef: test   rax,rax
0x00e924f2: jne    0x140e9251a
0x00e924f4: lea    rcx,[r14+0xf8]
0x00e924fb: call   0x1400709a0
0x00e92500: test   rax,rax
0x00e92503: jne    0x140e9251a
0x00e92505: lea    rcx,[r14+0x128]
0x00e9250c: call   0x1400709a0
0x00e92511: test   rax,rax
0x00e92514: je     0x140e928fa
0x00e9251a: mov    r15d,0xffffffff
0x00e92520: mov    r12d,r15d
0x00e92523: mov    r13d,r15d
0x00e92526: mov    DWORD PTR [rbp-0x48],r15d
0x00e9252a: mov    r14d,DWORD PTR [rsp+0x74]
0x00e9252f: mov    rcx,QWORD PTR [rsp+0x58]
0x00e92534: add    rcx,0xe0
0x00e9253b: mov    rax,QWORD PTR [rcx+0x8]
0x00e9253f: sub    rax,QWORD PTR [rcx]
0x00e92542: sar    rax,0x2
0x00e92546: cmp    r14,rax
0x00e92549: jae    0x140e92556
0x00e9254b: mov    edx,r14d
0x00e9254e: call   0x140070990
0x00e92553: mov    r15d,DWORD PTR [rax]
0x00e92556: mov    rcx,QWORD PTR [rsp+0x58]
0x00e9255b: add    rcx,0x128
0x00e92562: mov    rax,QWORD PTR [rcx+0x8]
0x00e92566: sub    rax,QWORD PTR [rcx]
0x00e92569: sar    rax,0x2
0x00e9256d: cmp    r14,rax
0x00e92570: jae    0x140e9257d
0x00e92572: mov    rdx,r14
0x00e92575: call   0x140070990
0x00e9257a: mov    r12d,DWORD PTR [rax]
0x00e9257d: mov    rcx,QWORD PTR [rsp+0x58]
0x00e92582: add    rcx,0xf8
0x00e92589: mov    rax,QWORD PTR [rcx+0x8]
0x00e9258d: sub    rax,QWORD PTR [rcx]
0x00e92590: sar    rax,0x2
0x00e92594: cmp    r14,rax
0x00e92597: jae    0x140e925c1
0x00e92599: mov    rdx,r14
0x00e9259c: call   0x140070990
0x00e925a1: mov    r13d,DWORD PTR [rax]
0x00e925a4: mov    rcx,QWORD PTR [rsp+0x58]
0x00e925a9: add    rcx,0x110
0x00e925b0: mov    rdx,r14
0x00e925b3: call   0x140070990
0x00e925b8: mov    r14d,DWORD PTR [rax]
0x00e925bb: mov    DWORD PTR [rbp-0x48],r14d
0x00e925bf: jmp    0x140e925c4
0x00e925c1: mov    r14d,r13d
0x00e925c4: lea    rdx,[rip+0x776671]        # 0x141608c3c ; literal="The "
0x00e925cb: lea    rcx,[rbp+0x28]
0x00e925cf: call   0x140070b90
0x00e925d4: lea    rcx,[rbp+0xa8]
0x00e925db: call   0x140070cc0
0x00e925e0: nop
0x00e925e1: xor    r8d,r8d
0x00e925e4: lea    rdx,[rbp+0xa8]
0x00e925eb: mov    ecx,DWORD PTR [rbp-0x44]
0x00e925ee: call   0x140548050
0x00e925f3: lea    rcx,[rbp+0xa8]
0x00e925fa: call   0x140546560
0x00e925ff: lea    rdx,[rbp+0xa8]
0x00e92606: lea    rcx,[rbp+0x28]
0x00e9260a: call   0x1400bb340
0x00e9260f: lea    rdx,[rip+0x7a482a]        # 0x141636e40 ; literal=" line"
0x00e92616: lea    rcx,[rbp+0x28]
0x00e9261a: call   0x140070b90
0x00e9261f: mov    BYTE PTR [rsp+0x30],0x1
0x00e92624: lea    rcx,[rbp+0xa8]
0x00e9262b: call   0x140069460
0x00e92630: mov    r8d,0x1
0x00e92636: lea    rdx,[rip+0x7713b3]        # 0x1416039f0 ; literal=" "
0x00e9263d: lea    rcx,[rbp+0x28]
0x00e92641: call   0x140071040
0x00e92646: cmp    r15d,0x6
0x00e9264a: ja     0x140e926a8
0x00e9264c: movsxd rax,r15d
0x00e9264f: lea    rdx,[rip+0xffffffffff16d9aa]        # 0x140000000
0x00e92656: mov    ecx,DWORD PTR [rdx+rax*4+0xe94b9c]
0x00e9265d: add    rcx,rdx
0x00e92660: jmp    rcx
0x00e92662: lea    rdx,[rip+0x8bee5f]        # 0x1417514c8 ; literal="is dramatic"
0x00e92669: jmp    0x140e9269f
0x00e9266b: lea    rdx,[rip+0x8bee46]        # 0x1417514b8 ; literal="is reflective"
0x00e92672: jmp    0x140e9269f
0x00e92674: lea    rdx,[rip+0x8bee6d]        # 0x1417514e8 ; literal="is ribald"
0x00e9267b: jmp    0x140e9269f
0x00e9267d: lea    rdx,[rip+0x8bee54]        # 0x1417514d8 ; literal="is light"
0x00e92684: jmp    0x140e9269f
0x00e92686: lea    rdx,[rip+0x8bedeb]        # 0x141751478 ; literal="is solemn"
0x00e9268d: jmp    0x140e9269f
0x00e9268f: lea    rdx,[rip+0x8bedd2]        # 0x141751468 ; literal="is a riddle"
0x00e92696: jmp    0x140e9269f
0x00e92698: lea    rdx,[rip+0x8bee09]        # 0x1417514a8 ; literal="is a narrative"
0x00e9269f: lea    rcx,[rbp+0x28]
0x00e926a3: call   0x140070b90
0x00e926a8: cmp    r12d,0xffffffff
0x00e926ac: je     0x140e9289a
0x00e926b2: lea    rcx,[rbp+0x28]
0x00e926b6: cmp    r15d,0xffffffff
0x00e926ba: lea    rdx,[rip+0x77742b]        # 0x141609aec ; literal=" and"
0x00e926c1: jne    0x140e926ca
0x00e926c3: lea    rdx,[rip+0x771886]        # 0x141603f50 ; literal="is"
0x00e926ca: call   0x140070b90
0x00e926cf: lea    rdx,[rip+0x8bdc82]        # 0x141750358 ; literal=" intended "
0x00e926d6: lea    rcx,[rbp+0x28]
0x00e926da: call   0x140070b90
0x00e926df: xor    r15b,r15b
0x00e926e2: xor    r14b,r14b
0x00e926e5: cmp    r12d,0x16
0x00e926e9: ja     0x140e92852
0x00e926ef: movsxd rax,r12d
0x00e926f2: lea    rdx,[rip+0xffffffffff16d907]        # 0x140000000
0x00e926f9: mov    ecx,DWORD PTR [rdx+rax*4+0xe94bb8]
0x00e92700: add    rcx,rdx
0x00e92703: jmp    rcx
0x00e92705: lea    rdx,[rip+0x8bdc74]        # 0x141750380 ; literal="to describe"
0x00e9270c: lea    rcx,[rbp+0x28]
0x00e92710: call   0x140070b90
0x00e92715: mov    r15b,0x1
0x00e92718: jmp    0x140e92852
0x00e9271d: lea    rdx,[rip+0x8bdc4c]        # 0x141750370 ; literal="to satirize"
0x00e92724: lea    rcx,[rbp+0x28]
0x00e92728: call   0x140070b90
0x00e9272d: mov    r15b,0x1
0x00e92730: jmp    0x140e92852
0x00e92735: lea    rdx,[rip+0x8bdbdc]        # 0x141750318 ; literal="to amuse the audience"
0x00e9273c: jmp    0x140e92846
0x00e92741: lea    rdx,[rip+0x8bdbb8]        # 0x141750300 ; literal="to complain about"
0x00e92748: lea    rcx,[rbp+0x28]
0x00e9274c: call   0x140070b90
0x00e92751: mov    r15b,0x1
0x00e92754: jmp    0x140e92852
0x00e92759: lea    rdx,[rip+0x8bdbe8]        # 0x141750348 ; literal="to renounce"
0x00e92760: lea    rcx,[rbp+0x28]
0x00e92764: call   0x140070b90
0x00e92769: jmp    0x140e92852
0x00e9276e: lea    rdx,[rip+0x8bdbbb]        # 0x141750330 ; literal="to make an apology"
0x00e92775: jmp    0x140e92846
0x00e9277a: lea    rdx,[rip+0x8bdc87]        # 0x141750408 ; literal="to express pleasure with"
0x00e92781: lea    rcx,[rbp+0x28]
0x00e92785: call   0x140070b90
0x00e9278a: mov    r15b,0x1
0x00e9278d: jmp    0x140e92852
0x00e92792: lea    rdx,[rip+0x8bdc57]        # 0x1417503f0 ; literal="to express grief over"
0x00e92799: lea    rcx,[rbp+0x28]
0x00e9279d: call   0x140070b90
0x00e927a2: mov    r15b,0x1
0x00e927a5: jmp    0x140e92852
0x00e927aa: lea    rdx,[rip+0x8bdc87]        # 0x141750438 ; literal="to praise"
0x00e927b1: lea    rcx,[rbp+0x28]
0x00e927b5: call   0x140070b90
0x00e927ba: mov    r15b,0x1
0x00e927bd: jmp    0x140e92852
0x00e927c2: lea    rdx,[rip+0x8bdc5f]        # 0x141750428 ; literal="to beseech"
0x00e927c9: mov    rcx,rbx
0x00e927cc: call   0x140070b90
0x00e927d1: jmp    0x140e92852
0x00e927d3: lea    rdx,[rip+0x8bdbce]        # 0x1417503a8 ; literal="to teach a moral lesson"
0x00e927da: jmp    0x140e92846
0x00e927dc: lea    rdx,[rip+0x8bdbad]        # 0x141750390 ; literal="to make an assertion"
0x00e927e3: jmp    0x140e92846
0x00e927e5: lea    rdx,[rip+0x8bdbec]        # 0x1417503d8 ; literal="to make a concession"
0x00e927ec: jmp    0x140e92846
0x00e927ee: lea    rdx,[rip+0x8bdbcb]        # 0x1417503c0 ; literal="to console the audience"
0x00e927f5: jmp    0x140e92846
0x00e927f7: lea    rdx,[rip+0x8bdd22]        # 0x141750520 ; literal="to refuse consolation"
0x00e927fe: jmp    0x140e92846
0x00e92800: lea    rdx,[rip+0x8bec81]        # 0x141751488 ; literal="to make a counter-assertion"
0x00e92807: jmp    0x140e92846
0x00e92809: lea    rdx,[rip+0x8bed98]        # 0x1417515a8 ; literal="to synthesize previous ideas"
0x00e92810: jmp    0x140e92846
0x00e92812: lea    rdx,[rip+0x8bed6f]        # 0x141751588 ; literal="to develop the previous idea"
0x00e92819: jmp    0x140e92846
0x00e9281b: lea    rdx,[rip+0x8bedce]        # 0x1417515f0 ; literal="to invert the previous assertion"
0x00e92822: jmp    0x140e92846
0x00e92824: lea    rdx,[rip+0x8bed9d]        # 0x1417515c8 ; literal="to undercut the previous assertion"
0x00e9282b: jmp    0x140e92846
0x00e9282d: lea    rdx,[rip+0x8bece4]        # 0x141751518 ; literal="to move away from previous ideas"
0x00e92834: jmp    0x140e92846
0x00e92836: lea    rdx,[rip+0x8becbb]        # 0x1417514f8 ; literal="to reflect on previous ideas"
0x00e9283d: jmp    0x140e92846
0x00e9283f: lea    rdx,[rip+0x8bed1a]        # 0x141751560 ; literal="to offer a different perspective"
0x00e92846: lea    rcx,[rbp+0x28]
0x00e9284a: call   0x140070b90
0x00e9284f: mov    r14b,0x1
0x00e92852: cmp    r13d,0xffffffff
0x00e92856: je     0x140e92883
0x00e92858: test   r14b,r14b
0x00e9285b: je     0x140e9286d
0x00e9285d: lea    rdx,[rip+0x8bdcac]        # 0x141750510 ; literal=" concerning"
0x00e92864: lea    rcx,[rbp+0x28]
0x00e92868: call   0x140070b90
0x00e9286d: lea    rdx,[rip+0x77117c]        # 0x1416039f0 ; literal=" "
0x00e92874: lea    rcx,[rbp+0x28]
0x00e92878: call   0x140070b90
0x00e9287d: mov    r8d,DWORD PTR [rbp-0x48]
0x00e92881: jmp    0x140e928c9
0x00e92883: test   r15b,r15b
0x00e92886: je     0x140e928d5
0x00e92888: lea    rdx,[rip+0x8becb1]        # 0x141751540 ; literal=" the subject of the poem"
0x00e9288f: lea    rcx,[rbp+0x28]
0x00e92893: call   0x140070b90
0x00e92898: jmp    0x140e928d5
0x00e9289a: cmp    r13d,0xffffffff
0x00e9289e: je     0x140e928d5
0x00e928a0: cmp    r15d,0xffffffff
0x00e928a4: je     0x140e928b6
0x00e928a6: lea    rdx,[rip+0x771adf]        # 0x14160438c ; literal=" and "
0x00e928ad: lea    rcx,[rbp+0x28]
0x00e928b1: call   0x140070b90
0x00e928b6: lea    rdx,[rip+0x8beddb]        # 0x141751698 ; literal="concerns "
0x00e928bd: lea    rcx,[rbp+0x28]
0x00e928c1: call   0x140070b90
0x00e928c6: mov    r8d,r14d
0x00e928c9: mov    edx,r13d
0x00e928cc: lea    rcx,[rbp+0x28]
0x00e928d0: call   0x140e8df60
0x00e928d5: mov    r8d,0x3
0x00e928db: lea    rdx,[rip+0x786cb6]        # 0x141619598 ; literal=".  "
0x00e928e2: lea    rcx,[rbp+0x28]
0x00e928e6: call   0x140071040
0x00e928eb: movzx  r13d,BYTE PTR [rsp+0x30]
0x00e928f1: mov    r12d,DWORD PTR [rsp+0x74]
0x00e928f6: mov    r15,QWORD PTR [rbp-0x8]
0x00e928fa: mov    edx,r12d
0x00e928fd: mov    rax,QWORD PTR [r15+0x8]
0x00e92901: sub    rax,QWORD PTR [r15]
0x00e92904: sar    rax,0x2
0x00e92908: cmp    rdx,rax
0x00e9290b: jae    0x140e92acc
0x00e92911: mov    rcx,r15
0x00e92914: call   0x140070990
0x00e92919: movsxd r14,DWORD PTR [rax]
0x00e9291c: cmp    r14d,0xffffffff
0x00e92920: je     0x140e92acc
0x00e92926: lea    rcx,[rbp+0x28]
0x00e9292a: test   r13b,r13b
0x00e9292d: jne    0x140e9298d
0x00e9292f: lea    rdx,[rip+0x776306]        # 0x141608c3c ; literal="The "
0x00e92936: call   0x140070b90
0x00e9293b: lea    rcx,[rbp+0x48]
0x00e9293f: call   0x140070cc0
0x00e92944: nop
0x00e92945: xor    r8d,r8d
0x00e92948: lea    rdx,[rbp+0x48]
0x00e9294c: mov    ecx,DWORD PTR [rbp-0x74]
0x00e9294f: call   0x140548050
0x00e92954: lea    rcx,[rbp+0x48]
0x00e92958: call   0x140546560
0x00e9295d: lea    rdx,[rbp+0x48]
0x00e92961: lea    rcx,[rbp+0x28]
0x00e92965: call   0x1400bb340
0x00e9296a: lea    rdx,[rip+0x7a44cf]        # 0x141636e40 ; literal=" line"
0x00e92971: lea    rcx,[rbp+0x28]
0x00e92975: call   0x140070b90
0x00e9297a: mov    r13b,0x1
0x00e9297d: mov    BYTE PTR [rsp+0x30],r13b
0x00e92982: lea    rcx,[rbp+0x48]
0x00e92986: call   0x140069460
0x00e9298b: jmp    0x140e92999
0x00e9298d: lea    rdx,[rip+0x776e24]        # 0x1416097b8 ; literal="It"
0x00e92994: call   0x140070b90
0x00e92999: lea    rdx,[rip+0x8becd0]        # 0x141751670 ; literal=" is written from the perspective of "
0x00e929a0: lea    rcx,[rbp+0x28]
0x00e929a4: call   0x140070b90
0x00e929a9: mov    rcx,QWORD PTR [rbp-0x60]
0x00e929ad: add    rcx,0xe8
0x00e929b4: mov    rdx,r14
0x00e929b7: call   0x140070850
0x00e929bc: mov    r14,QWORD PTR [rax]
0x00e929bf: movsxd rax,DWORD PTR [r14]
0x00e929c2: cmp    eax,0x7
0x00e929c5: ja     0x140e92abc
0x00e929cb: lea    rdx,[rip+0xffffffffff16d62e]        # 0x140000000
0x00e929d2: mov    ecx,DWORD PTR [rdx+rax*4+0xe94c14]
0x00e929d9: add    rcx,rdx
0x00e929dc: jmp    rcx
0x00e929de: lea    rdx,[rip+0x8be4a3]        # 0x141750e88 ; literal="the author"
0x00e929e5: jmp    0x140e92ab3
0x00e929ea: lea    rdx,[rip+0x8be4e7]        # 0x141750ed8 ; literal="a soldier"
0x00e929f1: jmp    0x140e92ab3
0x00e929f6: lea    rdx,[rip+0x8be4cb]        # 0x141750ec8 ; literal="a traveler"
0x00e929fd: jmp    0x140e92ab3
0x00e92a02: lea    rdx,[rip+0x8be437]        # 0x141750e40 ; literal="a relative of the author"
0x00e92a09: jmp    0x140e92ab3
0x00e92a0e: lea    rdx,[rip+0x8be413]        # 0x141750e28 ; literal="a party to a debate"
0x00e92a15: jmp    0x140e92ab3
0x00e92a1a: lea    rdx,[rip+0x8be44f]        # 0x141750e70 ; literal="a fictional poet"
0x00e92a21: jmp    0x140e92ab3
0x00e92a26: cmp    DWORD PTR [r14+0x4],0xffffffff
0x00e92a2b: je     0x140e92a64
0x00e92a2d: lea    rcx,[rbp+0x200]
0x00e92a34: call   0x1400736b0
0x00e92a39: xor    eax,eax
0x00e92a3b: mov    WORD PTR [rsp+0x28],ax
0x00e92a40: mov    WORD PTR [rsp+0x20],0x1
0x00e92a47: lea    r9,[rbp+0x200]
0x00e92a4e: mov    r8d,DWORD PTR [r14+0x4]
0x00e92a52: lea    rdx,[rbp+0x28]
0x00e92a56: lea    rcx,[rip+0x16896db]        # 0x14251c138
0x00e92a5d: call   0x140baabd0
0x00e92a62: jmp    0x140e92abc
0x00e92a64: lea    rdx,[rip+0x8bde45]        # 0x1417508b0 ; literal="a historical figure"
0x00e92a6b: jmp    0x140e92ab3
0x00e92a6d: cmp    DWORD PTR [r14+0x4],0xffffffff
0x00e92a72: je     0x140e92aac
0x00e92a74: lea    rdx,[rip+0x775e25]        # 0x1416088a0 ; literal="a "
0x00e92a7b: lea    rcx,[rbp+0x28]
0x00e92a7f: call   0x140070b90
0x00e92a84: mov    BYTE PTR [rsp+0x28],0x0
0x00e92a89: movzx  eax,WORD PTR [r14+0x8]
0x00e92a8e: mov    WORD PTR [rsp+0x20],ax
0x00e92a93: xor    r9d,r9d
0x00e92a96: mov    r8d,DWORD PTR [r14+0x4]
0x00e92a9a: lea    rdx,[rbp+0x28]
0x00e92a9e: lea    rcx,[rip+0x1689693]        # 0x14251c138
0x00e92aa5: call   0x140bacb90
0x00e92aaa: jmp    0x140e92abc
0x00e92aac: lea    rdx,[rip+0x8be3ad]        # 0x141750e60 ; literal="an animal"
0x00e92ab3: lea    rcx,[rbp+0x28]
0x00e92ab7: call   0x140070b90
0x00e92abc: lea    rdx,[rip+0x786ad5]        # 0x141619598 ; literal=".  "
0x00e92ac3: lea    rcx,[rbp+0x28]
0x00e92ac7: call   0x140070b90
0x00e92acc: mov    r14,QWORD PTR [rbp-0x18]
0x00e92ad0: mov    rcx,QWORD PTR [r14+0x8]
0x00e92ad4: sub    rcx,QWORD PTR [r14]
0x00e92ad7: sar    rcx,0x2
0x00e92adb: mov    eax,r12d
0x00e92ade: cmp    rax,rcx
0x00e92ae1: jae    0x140e92e94
0x00e92ae7: mov    edx,r12d
0x00e92aea: mov    rcx,r14
0x00e92aed: call   0x140070990
0x00e92af2: mov    r12d,DWORD PTR [rax]
0x00e92af5: mov    ecx,r12d
0x00e92af8: and    ecx,0x1
0x00e92afb: test   r12b,0x4
0x00e92aff: je     0x140e92b03
0x00e92b01: inc    ecx
0x00e92b03: test   r12b,0x8
0x00e92b07: lea    eax,[rcx+0x1]
0x00e92b0a: cmove  eax,ecx
0x00e92b0d: test   r12b,0x10
0x00e92b11: lea    ecx,[rax+0x1]
0x00e92b14: cmove  ecx,eax
0x00e92b17: bt     r12d,0x9
0x00e92b1c: lea    eax,[rcx+0x1]
0x00e92b1f: cmovae eax,ecx
0x00e92b22: bt     r12d,0xa
0x00e92b27: lea    ecx,[rax+0x1]
0x00e92b2a: cmovae ecx,eax
0x00e92b2d: bt     r12d,0xb
0x00e92b32: lea    eax,[rcx+0x1]
0x00e92b35: cmovae eax,ecx
0x00e92b38: bt     r12d,0xc
0x00e92b3d: lea    ecx,[rax+0x1]
0x00e92b40: cmovae ecx,eax
0x00e92b43: bt     r12d,0xd
0x00e92b48: lea    eax,[rcx+0x1]
0x00e92b4b: cmovae eax,ecx
0x00e92b4e: bt     r12d,0xf
0x00e92b53: lea    ecx,[rax+0x1]
0x00e92b56: cmovae ecx,eax
0x00e92b59: bt     r12d,0x10
0x00e92b5e: lea    eax,[rcx+0x1]
0x00e92b61: cmovae eax,ecx
0x00e92b64: bt     r12d,0x11
0x00e92b69: lea    ecx,[rax+0x1]
0x00e92b6c: cmovae ecx,eax
0x00e92b6f: bt     r12d,0x12
0x00e92b74: lea    eax,[rcx+0x1]
0x00e92b77: cmovae eax,ecx
0x00e92b7a: bt     r12d,0x13
0x00e92b7f: lea    ecx,[rax+0x1]
0x00e92b82: cmovae ecx,eax
0x00e92b85: bt     r12d,0x14
0x00e92b8a: lea    eax,[rcx+0x1]
0x00e92b8d: cmovae eax,ecx
0x00e92b90: bt     r12d,0x15
0x00e92b95: lea    ecx,[rax+0x1]
0x00e92b98: cmovae ecx,eax
0x00e92b9b: bt     r12d,0x16
0x00e92ba0: lea    r15d,[rcx+0x1]
0x00e92ba4: cmovae r15d,ecx
0x00e92ba8: test   r15d,r15d
0x00e92bab: jle    0x140e92e8f
0x00e92bb1: lea    rcx,[rbp+0x28]
0x00e92bb5: test   r13b,r13b
0x00e92bb8: jne    0x140e92c1b
0x00e92bba: lea    rdx,[rip+0x77607b]        # 0x141608c3c ; literal="The "
0x00e92bc1: call   0x140070b90
0x00e92bc6: lea    rcx,[rbp+0x48]
0x00e92bca: call   0x140070cc0
0x00e92bcf: nop
0x00e92bd0: mov    ecx,DWORD PTR [rsp+0x74]
0x00e92bd4: inc    ecx
0x00e92bd6: xor    r8d,r8d
0x00e92bd9: lea    rdx,[rbp+0x48]
0x00e92bdd: call   0x140548050
0x00e92be2: lea    rcx,[rbp+0x48]
0x00e92be6: call   0x140546560
0x00e92beb: lea    rdx,[rbp+0x48]
0x00e92bef: lea    rcx,[rbp+0x28]
0x00e92bf3: call   0x1400bb340
0x00e92bf8: lea    rdx,[rip+0x7a4241]        # 0x141636e40 ; literal=" line"
0x00e92bff: lea    rcx,[rbp+0x28]
0x00e92c03: call   0x140070b90
0x00e92c08: mov    r13b,0x1
0x00e92c0b: mov    BYTE PTR [rsp+0x30],r13b
0x00e92c10: lea    rcx,[rbp+0x48]
0x00e92c14: call   0x140069460
0x00e92c19: jmp    0x140e92c27
0x00e92c1b: lea    rdx,[rip+0x776b96]        # 0x1416097b8 ; literal="It"
0x00e92c22: call   0x140070b90
0x00e92c27: lea    rdx,[rip+0x8bea8a]        # 0x1417516b8 ; literal=" must make use of "
0x00e92c2e: lea    rcx,[rbp+0x28]
0x00e92c32: call   0x140070b90
0x00e92c37: xor    eax,eax
0x00e92c39: mov    r14d,eax
0x00e92c3c: mov    edi,DWORD PTR [rsp+0x48]
0x00e92c40: lea    rsi,[rip+0xffffffffff16d3b9]        # 0x140000000
0x00e92c47: mov    ebx,0x1
0x00e92c4c: nop    DWORD PTR [rax+0x0]
0x00e92c50: cmp    r14d,0x10
0x00e92c54: ja     0x140e92cdb
0x00e92c5a: movsxd rax,r14d
0x00e92c5d: mov    ecx,DWORD PTR [rsi+rax*4+0xe94c34]
0x00e92c64: add    rcx,rsi
0x00e92c67: jmp    rcx
0x00e92c69: mov    edi,ebx
0x00e92c6b: jmp    0x140e92cdb
0x00e92c6d: mov    edi,0x4
0x00e92c72: jmp    0x140e92cdb
0x00e92c74: mov    edi,0x8
0x00e92c79: jmp    0x140e92cdb
0x00e92c7b: mov    edi,0x10
0x00e92c80: jmp    0x140e92cdb
0x00e92c82: mov    edi,0x200
0x00e92c87: jmp    0x140e92cdb
0x00e92c89: mov    edi,0x400
0x00e92c8e: jmp    0x140e92cdb
0x00e92c90: mov    edi,0x800
0x00e92c95: jmp    0x140e92cdb
0x00e92c97: mov    edi,0x1000
0x00e92c9c: jmp    0x140e92cdb
0x00e92c9e: mov    edi,0x2000
0x00e92ca3: jmp    0x140e92cdb
0x00e92ca5: mov    edi,0x8000
0x00e92caa: jmp    0x140e92cdb
0x00e92cac: mov    edi,0x10000
0x00e92cb1: jmp    0x140e92cdb
0x00e92cb3: mov    edi,0x20000
0x00e92cb8: jmp    0x140e92cdb
0x00e92cba: mov    edi,0x40000
0x00e92cbf: jmp    0x140e92cdb
0x00e92cc1: mov    edi,0x80000
0x00e92cc6: jmp    0x140e92cdb
0x00e92cc8: mov    edi,0x100000
0x00e92ccd: jmp    0x140e92cdb
0x00e92ccf: mov    edi,0x200000
0x00e92cd4: jmp    0x140e92cdb
0x00e92cd6: mov    edi,0x400000
0x00e92cdb: test   r12d,edi
0x00e92cde: je     0x140e92e56
0x00e92ce4: cmp    edi,0x2000
0x00e92cea: ja     0x140e92da1
0x00e92cf0: je     0x140e92d95
0x00e92cf6: cmp    edi,0x200
0x00e92cfc: ja     0x140e92d55
0x00e92cfe: je     0x140e92d49
0x00e92d00: mov    eax,edi
0x00e92d02: sub    eax,ebx
0x00e92d04: je     0x140e92d3d
0x00e92d06: sub    eax,0x3
0x00e92d09: je     0x140e92d31
0x00e92d0b: sub    eax,0x4
0x00e92d0e: je     0x140e92d25
0x00e92d10: cmp    eax,0x8
0x00e92d13: jne    0x140e92e32
0x00e92d19: lea    rdx,[rip+0x8be1d8]        # 0x141750ef8 ; literal="antanaclasis"
0x00e92d20: jmp    0x140e92e29
0x00e92d25: lea    rdx,[rip+0x8be20c]        # 0x141750f38 ; literal="onomatopoeia"
0x00e92d2c: jmp    0x140e92e29
0x00e92d31: lea    rdx,[rip+0x8be210]        # 0x141750f48 ; literal="alliteration"
0x00e92d38: jmp    0x140e92e29
0x00e92d3d: lea    rdx,[rip+0x8be1dc]        # 0x141750f20 ; literal="internal rhyme"
0x00e92d44: jmp    0x140e92e29
0x00e92d49: lea    rdx,[rip+0x8be198]        # 0x141750ee8 ; literal="assonance"
0x00e92d50: jmp    0x140e92e29
0x00e92d55: cmp    edi,0x400
0x00e92d5b: je     0x140e92d89
0x00e92d5d: cmp    edi,0x800
0x00e92d63: je     0x140e92d7d
0x00e92d65: cmp    edi,0x1000
0x00e92d6b: jne    0x140e92e32
0x00e92d71: lea    rdx,[rip+0x8be228]        # 0x141750fa0 ; literal="epenthesis"
0x00e92d78: jmp    0x140e92e29
0x00e92d7d: lea    rdx,[rip+0x8be184]        # 0x141750f08 ; literal="elision"
0x00e92d84: jmp    0x140e92e29
0x00e92d89: lea    rdx,[rip+0x8be180]        # 0x141750f10 ; literal="consonance"
0x00e92d90: jmp    0x140e92e29
0x00e92d95: lea    rdx,[rip+0x8be1f4]        # 0x141750f90 ; literal="synchysis"
0x00e92d9c: jmp    0x140e92e29
0x00e92da1: cmp    edi,0x80000
0x00e92da7: ja     0x140e92df8
0x00e92da9: je     0x140e92def
0x00e92dab: cmp    edi,0x8000
0x00e92db1: je     0x140e92de6
0x00e92db3: cmp    edi,0x10000
0x00e92db9: je     0x140e92ddd
0x00e92dbb: cmp    edi,0x20000
0x00e92dc1: je     0x140e92dd4
0x00e92dc3: cmp    edi,0x40000
0x00e92dc9: jne    0x140e92e32
0x00e92dcb: lea    rdx,[rip+0x8be186]        # 0x141750f58 ; literal="metaphor"
0x00e92dd2: jmp    0x140e92e29
0x00e92dd4: lea    rdx,[rip+0x8be18d]        # 0x141750f68 ; literal="symbolism"
0x00e92ddb: jmp    0x140e92e29
0x00e92ddd: lea    rdx,[rip+0x8be1cc]        # 0x141750fb0 ; literal="ambiguity"
0x00e92de4: jmp    0x140e92e29
0x00e92de6: lea    rdx,[rip+0x8be1d3]        # 0x141750fc0 ; literal="allegory"
0x00e92ded: jmp    0x140e92e29
0x00e92def: lea    rdx,[rip+0x8be18e]        # 0x141750f84 ; literal="simile"
0x00e92df6: jmp    0x140e92e29
0x00e92df8: cmp    edi,0x100000
0x00e92dfe: je     0x140e92e22
0x00e92e00: cmp    edi,0x200000
0x00e92e06: je     0x140e92e19
0x00e92e08: cmp    edi,0x400000
0x00e92e0e: jne    0x140e92e32
0x00e92e10: lea    rdx,[rip+0x8be211]        # 0x141751028 ; literal="juxtaposition"
0x00e92e17: jmp    0x140e92e29
0x00e92e19: lea    rdx,[rip+0x8be218]        # 0x141751038 ; literal="vivid imagery"
0x00e92e20: jmp    0x140e92e29
0x00e92e22: lea    rdx,[rip+0x8be14f]        # 0x141750f78 ; literal="metonymy"
0x00e92e29: lea    rcx,[rbp+0x28]
0x00e92e2d: call   0x140070b90
0x00e92e32: cmp    r15d,0x2
0x00e92e36: jne    0x140e92e41
0x00e92e38: lea    rdx,[rip+0x77154d]        # 0x14160438c ; literal=" and "
0x00e92e3f: jmp    0x140e92e4a
0x00e92e41: jle    0x140e92e53
0x00e92e43: lea    rdx,[rip+0x77154a]        # 0x141604394 ; literal=", "
0x00e92e4a: lea    rcx,[rbp+0x28]
0x00e92e4e: call   0x140070b90
0x00e92e53: dec    r15d
0x00e92e56: inc    r14d
0x00e92e59: cmp    r14d,0x11
0x00e92e5d: jl     0x140e92c50
0x00e92e63: mov    DWORD PTR [rsp+0x48],edi
0x00e92e67: mov    r8d,0x3
0x00e92e6d: lea    rdx,[rip+0x786724]        # 0x141619598 ; literal=".  "
0x00e92e74: lea    rcx,[rbp+0x28]
0x00e92e78: call   0x140071040
0x00e92e7d: movzx  edi,BYTE PTR [rsp+0x30]
0x00e92e82: movzx  esi,BYTE PTR [rsp+0x30]
0x00e92e87: mov    rbx,QWORD PTR [rbp-0x50]
0x00e92e8b: mov    r14,QWORD PTR [rbp-0x18]
0x00e92e8f: mov    r12d,DWORD PTR [rsp+0x74]
0x00e92e94: mov    rdx,QWORD PTR [r14]
0x00e92e97: mov    rcx,QWORD PTR [r14+0x8]
0x00e92e9b: sub    rcx,rdx
0x00e92e9e: sar    rcx,0x2
0x00e92ea2: mov    eax,r12d
0x00e92ea5: mov    r8,QWORD PTR [rbp-0x38]
0x00e92ea9: cmp    rax,rcx
0x00e92eac: jae    0x140e9301c
0x00e92eb2: mov    eax,DWORD PTR [rdx+r8*4]
0x00e92eb6: mov    ecx,eax
0x00e92eb8: shr    ecx,0x5
0x00e92ebb: and    ecx,0x1
0x00e92ebe: test   al,0x40
0x00e92ec0: lea    r15d,[rcx+0x1]
0x00e92ec4: cmove  r15d,ecx
0x00e92ec8: test   r15d,r15d
0x00e92ecb: je     0x140e9301c
0x00e92ed1: lea    rcx,[rbp+0x28]
0x00e92ed5: test   r13b,r13b
0x00e92ed8: jne    0x140e92f37
0x00e92eda: lea    rdx,[rip+0x775d5b]        # 0x141608c3c ; literal="The "
0x00e92ee1: call   0x140070b90
0x00e92ee6: lea    rcx,[rbp+0x48]
0x00e92eea: call   0x140070cc0
0x00e92eef: nop
0x00e92ef0: lea    ecx,[r12+0x1]
0x00e92ef5: xor    r8d,r8d
0x00e92ef8: lea    rdx,[rbp+0x48]
0x00e92efc: call   0x140548050
0x00e92f01: lea    rcx,[rbp+0x48]
0x00e92f05: call   0x140546560
0x00e92f0a: lea    rdx,[rbp+0x48]
0x00e92f0e: lea    rcx,[rbp+0x28]
0x00e92f12: call   0x1400bb340
0x00e92f17: lea    rdx,[rip+0x7a3f22]        # 0x141636e40 ; literal=" line"
0x00e92f1e: lea    rcx,[rbp+0x28]
0x00e92f22: call   0x140070b90
0x00e92f27: mov    BYTE PTR [rsp+0x30],0x1
0x00e92f2c: lea    rcx,[rbp+0x48]
0x00e92f30: call   0x140069460
0x00e92f35: jmp    0x140e92f43
0x00e92f37: lea    rdx,[rip+0x77687a]        # 0x1416097b8 ; literal="It"
0x00e92f3e: call   0x140070b90
0x00e92f43: lea    rdx,[rip+0x770aa6]        # 0x1416039f0 ; literal=" "
0x00e92f4a: lea    rcx,[rbp+0x28]
0x00e92f4e: call   0x140070b90
0x00e92f53: xor    r13d,r13d
0x00e92f56: mov    r14d,r13d
0x00e92f59: mov    rsi,QWORD PTR [rsp+0x58]
0x00e92f5e: mov    ebx,DWORD PTR [rsp+0x38]
0x00e92f62: test   r14d,r14d
0x00e92f65: je     0x140e92f74
0x00e92f67: cmp    r14d,0x1
0x00e92f6b: jne    0x140e92f79
0x00e92f6d: mov    ebx,0x40
0x00e92f72: jmp    0x140e92f79
0x00e92f74: mov    ebx,0x20
0x00e92f79: test   DWORD PTR [rsi+0x194],ebx
0x00e92f7f: je     0x140e92fe6
0x00e92f81: cmp    ebx,0x20
0x00e92f84: je     0x140e92f9d
0x00e92f86: cmp    ebx,0x40
0x00e92f89: jne    0x140e92fb3
0x00e92f8b: lea    rdx,[rip+0x8be99e]        # 0x141751930 ; literal="can be read backwards as well as forwards"
0x00e92f92: lea    rcx,[rbp+0x28]
0x00e92f96: call   0x140070b90
0x00e92f9b: jmp    0x140e92fb3
0x00e92f9d: mov    r8d,0x2f
0x00e92fa3: lea    rdx,[rip+0x8be9b6]        # 0x141751960 ; literal="has different readings depending on word breaks"
0x00e92faa: lea    rcx,[rbp+0x28]
0x00e92fae: call   0x140071040
0x00e92fb3: cmp    r15d,0x2
0x00e92fb7: jne    0x140e92fd1
0x00e92fb9: mov    r8d,0x5
0x00e92fbf: lea    rdx,[rip+0x7713c6]        # 0x14160438c ; literal=" and "
0x00e92fc6: lea    rcx,[rbp+0x28]
0x00e92fca: call   0x140071040
0x00e92fcf: jmp    0x140e92fe3
0x00e92fd1: jle    0x140e92fe3
0x00e92fd3: lea    rdx,[rip+0x7713ba]        # 0x141604394 ; literal=", "
0x00e92fda: lea    rcx,[rbp+0x28]
0x00e92fde: call   0x140070b90
0x00e92fe3: dec    r15d
0x00e92fe6: inc    r14d
0x00e92fe9: cmp    r14d,0x2
0x00e92fed: jl     0x140e92f62
0x00e92ff3: mov    DWORD PTR [rsp+0x38],ebx
0x00e92ff7: mov    r8d,0x3
0x00e92ffd: lea    rdx,[rip+0x786594]        # 0x141619598 ; literal=".  "
0x00e93004: lea    rcx,[rbp+0x28]
0x00e93008: call   0x140071040
0x00e9300d: movzx  esi,BYTE PTR [rsp+0x30]
0x00e93012: mov    rbx,QWORD PTR [rbp-0x50]
0x00e93016: mov    r8,QWORD PTR [rbp-0x38]
0x00e9301a: jmp    0x140e9301f
0x00e9301c: xor    r13d,r13d
0x00e9301f: mov    r10,QWORD PTR [rsp+0x58]
0x00e93024: mov    rdx,QWORD PTR [r10+0x38]
0x00e93028: mov    rcx,QWORD PTR [r10+0x40]
0x00e9302c: sub    rcx,rdx
0x00e9302f: sar    rcx,0x2
0x00e93033: mov    eax,r12d
0x00e93036: mov    r9,QWORD PTR [rbp-0x10]
0x00e9303a: cmp    rax,rcx
0x00e9303d: jb     0x140e930f8
0x00e93043: mov    rcx,QWORD PTR [r9+0x8]
0x00e93047: sub    rcx,QWORD PTR [r9]
0x00e9304a: sar    rcx,0x2
0x00e9304e: mov    eax,r12d
0x00e93051: cmp    rax,rcx
0x00e93054: jb     0x140e930fc
0x00e9305a: movzx  r12d,BYTE PTR [rsp+0x30]
0x00e93060: lea    r13,[r10+0x68]
0x00e93064: mov    rdx,QWORD PTR [r13+0x0]
0x00e93068: mov    rcx,QWORD PTR [r13+0x8]
0x00e9306c: sub    rcx,rdx
0x00e9306f: sar    rcx,0x2
0x00e93073: mov    r14d,DWORD PTR [rsp+0x74]
0x00e93078: mov    r15,QWORD PTR [rbp-0x38]
0x00e9307c: cmp    r14,rcx
0x00e9307f: jae    0x140e93a5e
0x00e93085: cmp    DWORD PTR [rdx+r15*4],0xffffffff
0x00e9308a: je     0x140e93a5e
0x00e93090: lea    rcx,[rbp+0x28]
0x00e93094: test   r12b,r12b
0x00e93097: jne    0x140e939ee
0x00e9309d: lea    rdx,[rip+0x775b98]        # 0x141608c3c ; literal="The "
0x00e930a4: call   0x140070b90
0x00e930a9: lea    rcx,[rbp+0x68]
0x00e930ad: call   0x140070cc0
0x00e930b2: nop
0x00e930b3: lea    ecx,[r14+0x1]
0x00e930b7: xor    r8d,r8d
0x00e930ba: lea    rdx,[rbp+0x68]
0x00e930be: call   0x140548050
0x00e930c3: lea    rcx,[rbp+0x68]
0x00e930c7: call   0x140546560
0x00e930cc: lea    rdx,[rbp+0x68]
0x00e930d0: lea    rcx,[rbp+0x28]
0x00e930d4: call   0x1400bb340
0x00e930d9: lea    rdx,[rip+0x7a3d60]        # 0x141636e40 ; literal=" line"
0x00e930e0: lea    rcx,[rbp+0x28]
0x00e930e4: call   0x140070b90
0x00e930e9: nop
0x00e930ea: lea    rcx,[rbp+0x68]
0x00e930ee: call   0x140069460
0x00e930f3: jmp    0x140e939fa
0x00e930f8: mov    r13d,DWORD PTR [rdx+r8*4]
0x00e930fc: mov    r14d,0xffffffff
0x00e93102: mov    rdx,QWORD PTR [r9]
0x00e93105: mov    rcx,QWORD PTR [r9+0x8]
0x00e93109: sub    rcx,rdx
0x00e9310c: sar    rcx,0x2
0x00e93110: mov    eax,r12d
0x00e93113: cmp    rax,rcx
0x00e93116: jae    0x140e9311c
0x00e93118: mov    r14d,DWORD PTR [rdx+r8*4]
0x00e9311c: test   r13d,r13d
0x00e9311f: jne    0x140e93159
0x00e93121: cmp    r14d,0xffffffff
0x00e93125: je     0x140e9305a
0x00e9312b: mov    eax,DWORD PTR [r10+0x158]
0x00e93132: mov    r15,QWORD PTR [rbp-0x60]
0x00e93136: test   eax,eax
0x00e93138: je     0x140e93142
0x00e9313a: mov    r13d,eax
0x00e9313d: jmp    0x140e93274
0x00e93142: mov    eax,DWORD PTR [r15+0xa8]
0x00e93149: test   eax,eax
0x00e9314b: je     0x140e93274
0x00e93151: mov    r13d,eax
0x00e93154: jmp    0x140e93274
0x00e93159: cmp    r14d,0xffffffff
0x00e9315d: jne    0x140e93270
0x00e93163: mov    r14d,DWORD PTR [r10+0x15c]
0x00e9316a: cmp    r14d,0xffffffff
0x00e9316e: jne    0x140e93270
0x00e93174: mov    rax,QWORD PTR [rbp-0x60]
0x00e93178: mov    r14d,DWORD PTR [rax+0xac]
0x00e9317f: cmp    r14d,0xffffffff
0x00e93183: je     0x140e9318d
0x00e93185: mov    r15,rax
0x00e93188: jmp    0x140e93274
0x00e9318d: movzx  r12d,BYTE PTR [rsp+0x30]
0x00e93193: lea    rcx,[rbp+0x28]
0x00e93197: test   r12b,r12b
0x00e9319a: jne    0x140e931f9
0x00e9319c: lea    rdx,[rip+0x775a99]        # 0x141608c3c ; literal="The "
0x00e931a3: call   0x140070b90
0x00e931a8: lea    rcx,[rbp+0x48]
0x00e931ac: call   0x140070cc0
0x00e931b1: nop
0x00e931b2: mov    ecx,DWORD PTR [rsp+0x74]
0x00e931b6: inc    ecx
0x00e931b8: xor    r8d,r8d
0x00e931bb: lea    rdx,[rbp+0x48]
0x00e931bf: call   0x140548050
0x00e931c4: lea    rcx,[rbp+0x48]
0x00e931c8: call   0x140546560
0x00e931cd: lea    rdx,[rbp+0x48]
0x00e931d1: lea    rcx,[rbp+0x28]
0x00e931d5: call   0x1400bb340
0x00e931da: lea    rdx,[rip+0x7a3c5f]        # 0x141636e40 ; literal=" line"
0x00e931e1: lea    rcx,[rbp+0x28]
0x00e931e5: call   0x140070b90
0x00e931ea: nop
0x00e931eb: lea    rcx,[rbp+0x48]
0x00e931ef: call   0x140069460
0x00e931f4: mov    r12b,0x1
0x00e931f7: jmp    0x140e93205
0x00e931f9: lea    rdx,[rip+0x7765b8]        # 0x1416097b8 ; literal="It"
0x00e93200: call   0x140070b90
0x00e93205: mov    r8d,0x5
0x00e9320b: lea    rdx,[rip+0x7f756a]        # 0x14168a77c ; literal=" has "
0x00e93212: lea    rcx,[rbp+0x28]
0x00e93216: call   0x140071040
0x00e9321b: nop
0x00e9321c: movzx  edx,dil
0x00e93220: lea    rcx,[rbp+0x68]
0x00e93224: call   0x1400697c0
0x00e93229: lea    rcx,[rbp+0x68]
0x00e9322d: call   0x1400711b0
0x00e93232: nop
0x00e93233: lea    rdx,[rbp+0x68]
0x00e93237: mov    ecx,r13d
0x00e9323a: call   0x140547840
0x00e9323f: lea    rdx,[rbp+0x68]
0x00e93243: lea    rcx,[rbp+0x28]
0x00e93247: call   0x1400bb340
0x00e9324c: lea    rdx,[rip+0x8bdaed]        # 0x141750d40 ; literal=" syllables.  "
0x00e93253: lea    rcx,[rbp+0x28]
0x00e93257: call   0x140070b90
0x00e9325c: nop
0x00e9325d: lea    rcx,[rbp+0x68]
0x00e93261: call   0x140069460
0x00e93266: mov    r10,QWORD PTR [rsp+0x58]
0x00e9326b: jmp    0x140e93060
0x00e93270: mov    r15,QWORD PTR [rbp-0x60]
0x00e93274: movzx  r12d,BYTE PTR [rsp+0x30]
0x00e9327a: lea    rcx,[rbp+0x28]
0x00e9327e: test   r12b,r12b
0x00e93281: jne    0x140e932e0
0x00e93283: lea    rdx,[rip+0x7759b2]        # 0x141608c3c ; literal="The "
0x00e9328a: call   0x140070b90
0x00e9328f: lea    rcx,[rbp+0x68]
0x00e93293: call   0x140070cc0
0x00e93298: nop
0x00e93299: mov    ecx,DWORD PTR [rsp+0x74]
0x00e9329d: inc    ecx
0x00e9329f: xor    r8d,r8d
0x00e932a2: lea    rdx,[rbp+0x68]
0x00e932a6: call   0x140548050
0x00e932ab: lea    rcx,[rbp+0x68]
0x00e932af: call   0x140546560
0x00e932b4: lea    rdx,[rbp+0x68]
0x00e932b8: lea    rcx,[rbp+0x28]
0x00e932bc: call   0x1400bb340
0x00e932c1: lea    rdx,[rip+0x7a3b78]        # 0x141636e40 ; literal=" line"
0x00e932c8: lea    rcx,[rbp+0x28]
0x00e932cc: call   0x140070b90
0x00e932d1: nop
0x00e932d2: lea    rcx,[rbp+0x68]
0x00e932d6: call   0x140069460
0x00e932db: mov    r12b,0x1
0x00e932de: jmp    0x140e932ec
0x00e932e0: lea    rdx,[rip+0x7764d1]        # 0x1416097b8 ; literal="It"
0x00e932e7: call   0x140070b90
0x00e932ec: mov    r8d,0x5
0x00e932f2: lea    rdx,[rip+0x7f7483]        # 0x14168a77c ; literal=" has "
0x00e932f9: lea    rcx,[rbp+0x28]
0x00e932fd: call   0x140071040
0x00e93302: nop
0x00e93303: movzx  edx,sil
0x00e93307: lea    rcx,[rbp+0x88]
0x00e9330e: call   0x1400697c0
0x00e93313: lea    rcx,[rbp+0x88]
0x00e9331a: call   0x1400711b0
0x00e9331f: nop
0x00e93320: lea    rdx,[rbp+0x88]
0x00e93327: mov    ecx,r13d
0x00e9332a: call   0x140547840
0x00e9332f: lea    rdx,[rbp+0x88]
0x00e93336: lea    rcx,[rbp+0x28]
0x00e9333a: call   0x1400bb340
0x00e9333f: mov    r8d,0x1
0x00e93345: lea    rdx,[rip+0x7706a4]        # 0x1416039f0 ; literal=" "
0x00e9334c: lea    rcx,[rbp+0x28]
0x00e93350: call   0x140071040
0x00e93355: lea    rcx,[rbp+0x28]
0x00e93359: cmp    r13d,0x1
0x00e9335d: lea    rdx,[rip+0x8be018]        # 0x14175137c ; literal="foot"
0x00e93364: je     0x140e9336d
0x00e93366: lea    rdx,[rip+0x8be007]        # 0x141751374 ; literal="feet"
0x00e9336d: call   0x140070b90
0x00e93372: mov    r8d,0x6
0x00e93378: lea    rdx,[rip+0x7764c9]        # 0x141609848 ; literal=" with "
0x00e9337f: lea    rcx,[rbp+0x28]
0x00e93383: call   0x140071040
0x00e93388: lea    rcx,[rbp+0x28]
0x00e9338c: test   BYTE PTR [r15+0x8c],0x1
0x00e93394: je     0x140e93445
0x00e9339a: lea    rdx,[rip+0x8bdff7]        # 0x141751398 ; literal="a tone pattern of "
0x00e933a1: call   0x140070b90
0x00e933a6: cmp    r14d,0xb
0x00e933aa: ja     0x140e93439
0x00e933b0: movsxd rax,r14d
0x00e933b3: lea    rdx,[rip+0xffffffffff16cc46]        # 0x140000000
0x00e933ba: mov    ecx,DWORD PTR [rdx+rax*4+0xe94c78]
0x00e933c1: add    rcx,rdx
0x00e933c4: jmp    rcx
0x00e933c6: lea    rdx,[rip+0x8bdfbb]        # 0x141751388 ; literal="even-uneven"
0x00e933cd: jmp    0x140e93430
0x00e933cf: lea    rdx,[rip+0x8bdf62]        # 0x141751338 ; literal="uneven-even"
0x00e933d6: jmp    0x140e93430
0x00e933d8: lea    rdx,[rip+0x8bdf49]        # 0x141751328 ; literal="uneven-uneven"
0x00e933df: jmp    0x140e93430
0x00e933e1: lea    rdx,[rip+0x8bdf78]        # 0x141751360 ; literal="uneven-even-even"
0x00e933e8: jmp    0x140e93430
0x00e933ea: lea    rdx,[rip+0x8bdf57]        # 0x141751348 ; literal="even-uneven-even"
0x00e933f1: jmp    0x140e93430
0x00e933f3: lea    rdx,[rip+0x8be036]        # 0x141751430 ; literal="even-even-uneven"
0x00e933fa: jmp    0x140e93430
0x00e933fc: lea    rdx,[rip+0x8be015]        # 0x141751418 ; literal="uneven-even-uneven"
0x00e93403: jmp    0x140e93430
0x00e93405: lea    rdx,[rip+0x8be04c]        # 0x141751458 ; literal="even-even"
0x00e9340c: jmp    0x140e93430
0x00e9340e: lea    rdx,[rip+0x8be033]        # 0x141751448 ; literal="even-even-even"
0x00e93415: jmp    0x140e93430
0x00e93417: lea    rdx,[rip+0x8bdfaa]        # 0x1417513c8 ; literal="even-uneven-uneven"
0x00e9341e: jmp    0x140e93430
0x00e93420: lea    rdx,[rip+0x8bdf89]        # 0x1417513b0 ; literal="uneven-uneven-even"
0x00e93427: jmp    0x140e93430
0x00e93429: lea    rdx,[rip+0x8bdfd0]        # 0x141751400 ; literal="uneven-uneven-uneven"
0x00e93430: lea    rcx,[rbp+0x28]
0x00e93434: call   0x140070b90
0x00e93439: lea    rdx,[rip+0x786158]        # 0x141619598 ; literal=".  "
0x00e93440: jmp    0x140e939ce
0x00e93445: test   DWORD PTR [r15+0xe4],0x4000
0x00e93450: je     0x140e93728
0x00e93456: lea    rdx,[rip+0x8bdf83]        # 0x1417513e0 ; literal="a syllable weight pattern of "
0x00e9345d: call   0x140070b90
0x00e93462: lea    r15,[rip+0xffffffffff16cb97]        # 0x140000000
0x00e93469: cmp    r14d,0xb
0x00e9346d: ja     0x140e936ba
0x00e93473: movsxd rax,r14d
0x00e93476: mov    ecx,DWORD PTR [r15+rax*4+0xe94ca8]
0x00e9347e: add    rcx,r15
0x00e93481: jmp    rcx
0x00e93483: lea    rdx,[rip+0x8bd49e]        # 0x141750928 ; literal="short-long"
0x00e9348a: lea    rcx,[rbp+0x28]
0x00e9348e: call   0x140070b90
0x00e93493: lea    rdx,[rip+0x8bd4ce]        # 0x141750968 ; literal=" (quantitative "
0x00e9349a: lea    rcx,[rbp+0x28]
0x00e9349e: call   0x140070b90
0x00e934a3: lea    rdx,[rip+0x8bd4b2]        # 0x14175095c ; literal="iambic"
0x00e934aa: jmp    0x140e93685
0x00e934af: lea    rdx,[rip+0x8bd462]        # 0x141750918 ; literal="long-short"
0x00e934b6: lea    rcx,[rbp+0x28]
0x00e934ba: call   0x140070b90
0x00e934bf: lea    rdx,[rip+0x8bd4a2]        # 0x141750968 ; literal=" (quantitative "
0x00e934c6: lea    rcx,[rbp+0x28]
0x00e934ca: call   0x140070b90
0x00e934cf: lea    rdx,[rip+0x8bd4b2]        # 0x141750988 ; literal="trochaic"
0x00e934d6: jmp    0x140e93685
0x00e934db: lea    rdx,[rip+0x8bd46e]        # 0x141750950 ; literal="long-long"
0x00e934e2: lea    rcx,[rbp+0x28]
0x00e934e6: call   0x140070b90
0x00e934eb: lea    rdx,[rip+0x8bd476]        # 0x141750968 ; literal=" (quantitative "
0x00e934f2: lea    rcx,[rbp+0x28]
0x00e934f6: call   0x140070b90
0x00e934fb: lea    rdx,[rip+0x8bd476]        # 0x141750978 ; literal="spondaic"
0x00e93502: jmp    0x140e93685
0x00e93507: lea    rdx,[rip+0x8bd42a]        # 0x141750938 ; literal="long-short-short"
0x00e9350e: lea    rcx,[rbp+0x28]
0x00e93512: call   0x140070b90
0x00e93517: lea    rdx,[rip+0x8bd44a]        # 0x141750968 ; literal=" (quantitative "
0x00e9351e: lea    rcx,[rbp+0x28]
0x00e93522: call   0x140070b90
0x00e93527: lea    rdx,[rip+0x8bd4f2]        # 0x141750a20 ; literal="dactylic"
0x00e9352e: jmp    0x140e93685
0x00e93533: lea    rdx,[rip+0x8bd3a6]        # 0x1417508e0 ; literal="short-long-short"
0x00e9353a: lea    rcx,[rbp+0x28]
0x00e9353e: call   0x140070b90
0x00e93543: lea    rdx,[rip+0x8bd41e]        # 0x141750968 ; literal=" (quantitative "
0x00e9354a: lea    rcx,[rbp+0x28]
0x00e9354e: call   0x140070b90
0x00e93553: lea    rdx,[rip+0x8bd4b6]        # 0x141750a10 ; literal="amphibrachic"
0x00e9355a: jmp    0x140e93685
0x00e9355f: lea    rdx,[rip+0x8bd362]        # 0x1417508c8 ; literal="short-short-long"
0x00e93566: lea    rcx,[rbp+0x28]
0x00e9356a: call   0x140070b90
0x00e9356f: lea    rdx,[rip+0x8bd3f2]        # 0x141750968 ; literal=" (quantitative "
0x00e93576: lea    rcx,[rbp+0x28]
0x00e9357a: call   0x140070b90
0x00e9357f: lea    rdx,[rip+0x8bd4b2]        # 0x141750a38 ; literal="anapaestic"
0x00e93586: jmp    0x140e93685
0x00e9358b: lea    rdx,[rip+0x8bd376]        # 0x141750908 ; literal="long-short-long"
0x00e93592: lea    rcx,[rbp+0x28]
0x00e93596: call   0x140070b90
0x00e9359b: lea    rdx,[rip+0x8bd3c6]        # 0x141750968 ; literal=" (quantitative "
0x00e935a2: lea    rcx,[rbp+0x28]
0x00e935a6: call   0x140070b90
0x00e935ab: lea    rdx,[rip+0x8bd47a]        # 0x141750a2c ; literal="cretic"
0x00e935b2: jmp    0x140e93685
0x00e935b7: lea    rdx,[rip+0x8bd33a]        # 0x1417508f8 ; literal="short-short"
0x00e935be: lea    rcx,[rbp+0x28]
0x00e935c2: call   0x140070b90
0x00e935c7: lea    rdx,[rip+0x8bd39a]        # 0x141750968 ; literal=" (quantitative "
0x00e935ce: lea    rcx,[rbp+0x28]
0x00e935d2: call   0x140070b90
0x00e935d7: lea    rdx,[rip+0x8bd412]        # 0x1417509f0 ; literal="pyrrhic"
0x00e935de: jmp    0x140e93685
0x00e935e3: lea    rdx,[rip+0x8bd3be]        # 0x1417509a8 ; literal="short-short-short"
0x00e935ea: lea    rcx,[rbp+0x28]
0x00e935ee: call   0x140070b90
0x00e935f3: lea    rdx,[rip+0x8bd36e]        # 0x141750968 ; literal=" (quantitative "
0x00e935fa: lea    rcx,[rbp+0x28]
0x00e935fe: call   0x140070b90
0x00e93603: lea    rdx,[rip+0x8bd3d6]        # 0x1417509e0 ; literal="tribrachic"
0x00e9360a: jmp    0x140e93685
0x00e9360c: lea    rdx,[rip+0x8bd385]        # 0x141750998 ; literal="short-long-long"
0x00e93613: lea    rcx,[rbp+0x28]
0x00e93617: call   0x140070b90
0x00e9361c: lea    rdx,[rip+0x8bd345]        # 0x141750968 ; literal=" (quantitative "
0x00e93623: lea    rcx,[rbp+0x28]
0x00e93627: call   0x140070b90
0x00e9362c: lea    rdx,[rip+0x8bd3d5]        # 0x141750a08 ; literal="bacchic"
0x00e93633: jmp    0x140e93685
0x00e93635: lea    rdx,[rip+0x8bd394]        # 0x1417509d0 ; literal="long-long-short"
0x00e9363c: lea    rcx,[rbp+0x28]
0x00e93640: call   0x140070b90
0x00e93645: lea    rdx,[rip+0x8bd31c]        # 0x141750968 ; literal=" (quantitative "
0x00e9364c: lea    rcx,[rbp+0x28]
0x00e93650: call   0x140070b90
0x00e93655: lea    rdx,[rip+0x8bd39c]        # 0x1417509f8 ; literal="antibacchic"
0x00e9365c: jmp    0x140e93685
0x00e9365e: lea    rdx,[rip+0x8bd35b]        # 0x1417509c0 ; literal="long-long-long"
0x00e93665: lea    rcx,[rbp+0x28]
0x00e93669: call   0x140070b90
0x00e9366e: lea    rdx,[rip+0x8bd2f3]        # 0x141750968 ; literal=" (quantitative "
0x00e93675: lea    rcx,[rbp+0x28]
0x00e93679: call   0x140070b90
0x00e9367e: lea    rdx,[rip+0x8bd413]        # 0x141750a98 ; literal="molossic"
0x00e93685: lea    rcx,[rbp+0x28]
0x00e93689: call   0x140070b90
0x00e9368e: lea    rdx,[rip+0x77035b]        # 0x1416039f0 ; literal=" "
0x00e93695: lea    rcx,[rbp+0x28]
0x00e93699: call   0x140070b90
0x00e9369e: lea    eax,[r13-0x1]
0x00e936a2: cmp    eax,0x7
0x00e936a5: ja     0x140e939c7
0x00e936ab: cdqe
0x00e936ad: mov    ecx,DWORD PTR [r15+rax*4+0xe94cd8]
0x00e936b5: add    rcx,r15
0x00e936b8: jmp    rcx
0x00e936ba: lea    rdx,[rip+0x8bd2a7]        # 0x141750968 ; literal=" (quantitative "
0x00e936c1: lea    rcx,[rbp+0x28]
0x00e936c5: call   0x140070b90
0x00e936ca: cmp    r14d,0xb
0x00e936ce: ja     0x140e9368e
0x00e936d0: movsxd rax,r14d
0x00e936d3: mov    ecx,DWORD PTR [r15+rax*4+0xe94cf8]
0x00e936db: add    rcx,r15
0x00e936de: jmp    rcx
0x00e936e0: lea    rdx,[rip+0x8bd3a1]        # 0x141750a88 ; literal="monometer"
0x00e936e7: jmp    0x140e939be
0x00e936ec: lea    rdx,[rip+0x8bd3b5]        # 0x141750aa8 ; literal="trimeter"
0x00e936f3: jmp    0x140e939be
0x00e936f8: lea    rdx,[rip+0x8bd359]        # 0x141750a58 ; literal="tetrameter"
0x00e936ff: jmp    0x140e939be
0x00e93704: lea    rdx,[rip+0x8bd33d]        # 0x141750a48 ; literal="pentameter"
0x00e9370b: jmp    0x140e939be
0x00e93710: lea    rdx,[rip+0x8bd361]        # 0x141750a78 ; literal="hexameter"
0x00e93717: jmp    0x140e939be
0x00e9371c: lea    rdx,[rip+0x8bd345]        # 0x141750a68 ; literal="heptameter"
0x00e93723: jmp    0x140e939be
0x00e93728: lea    rdx,[rip+0x8bd431]        # 0x141750b60 ; literal="an accent pattern of "
0x00e9372f: call   0x140070b90
0x00e93734: lea    r15,[rip+0xffffffffff16c8c5]        # 0x140000000
0x00e9373b: cmp    r14d,0xb
0x00e9373f: ja     0x140e93988
0x00e93745: movsxd rax,r14d
0x00e93748: mov    ecx,DWORD PTR [r15+rax*4+0xe94d28]
0x00e93750: add    rcx,r15
0x00e93753: jmp    rcx
0x00e93755: lea    rdx,[rip+0x8bd3ec]        # 0x141750b48 ; literal="unstressed-stressed"
0x00e9375c: lea    rcx,[rbp+0x28]
0x00e93760: call   0x140070b90
0x00e93765: lea    rdx,[rip+0x8bd44c]        # 0x141750bb8 ; literal=" (qualitative "
0x00e9376c: lea    rcx,[rbp+0x28]
0x00e93770: call   0x140070b90
0x00e93775: lea    rdx,[rip+0x8bd1e0]        # 0x14175095c ; literal="iambic"
0x00e9377c: jmp    0x140e93957
0x00e93781: lea    rdx,[rip+0x8bd350]        # 0x141750ad8 ; literal="stressed-unstressed"
0x00e93788: lea    rcx,[rbp+0x28]
0x00e9378c: call   0x140070b90
0x00e93791: lea    rdx,[rip+0x8bd420]        # 0x141750bb8 ; literal=" (qualitative "
0x00e93798: lea    rcx,[rbp+0x28]
0x00e9379c: call   0x140070b90
0x00e937a1: lea    rdx,[rip+0x8bd1e0]        # 0x141750988 ; literal="trochaic"
0x00e937a8: jmp    0x140e93957
0x00e937ad: lea    rdx,[rip+0x8bd30c]        # 0x141750ac0 ; literal="stressed-stressed"
0x00e937b4: lea    rcx,[rbp+0x28]
0x00e937b8: call   0x140070b90
0x00e937bd: lea    rdx,[rip+0x8bd3f4]        # 0x141750bb8 ; literal=" (qualitative "
0x00e937c4: lea    rcx,[rbp+0x28]
0x00e937c8: call   0x140070b90
0x00e937cd: lea    rdx,[rip+0x8bd1a4]        # 0x141750978 ; literal="spondaic"
0x00e937d4: jmp    0x140e93957
0x00e937d9: lea    rdx,[rip+0x8bd330]        # 0x141750b10 ; literal="stressed-unstressed-unstressed"
0x00e937e0: lea    rcx,[rbp+0x28]
0x00e937e4: call   0x140070b90
0x00e937e9: lea    rdx,[rip+0x8bd3c8]        # 0x141750bb8 ; literal=" (qualitative "
0x00e937f0: lea    rcx,[rbp+0x28]
0x00e937f4: call   0x140070b90
0x00e937f9: lea    rdx,[rip+0x8bd220]        # 0x141750a20 ; literal="dactylic"
0x00e93800: jmp    0x140e93957
0x00e93805: lea    rdx,[rip+0x8bd2e4]        # 0x141750af0 ; literal="unstressed-stressed-unstressed"
0x00e9380c: lea    rcx,[rbp+0x28]
0x00e93810: call   0x140070b90
0x00e93815: lea    rdx,[rip+0x8bd39c]        # 0x141750bb8 ; literal=" (qualitative "
0x00e9381c: lea    rcx,[rbp+0x28]
0x00e93820: call   0x140070b90
0x00e93825: lea    rdx,[rip+0x8bd1e4]        # 0x141750a10 ; literal="amphibrachic"
0x00e9382c: jmp    0x140e93957
0x00e93831: lea    rdx,[rip+0x8bd3d0]        # 0x141750c08 ; literal="unstressed-unstressed-stressed"
0x00e93838: lea    rcx,[rbp+0x28]
0x00e9383c: call   0x140070b90
0x00e93841: lea    rdx,[rip+0x8bd370]        # 0x141750bb8 ; literal=" (qualitative "
0x00e93848: lea    rcx,[rbp+0x28]
0x00e9384c: call   0x140070b90
0x00e93851: lea    rdx,[rip+0x8bd1e0]        # 0x141750a38 ; literal="anapaestic"
0x00e93858: jmp    0x140e93957
0x00e9385d: lea    rdx,[rip+0x8bd384]        # 0x141750be8 ; literal="stressed-unstressed-stressed"
0x00e93864: lea    rcx,[rbp+0x28]
0x00e93868: call   0x140070b90
0x00e9386d: lea    rdx,[rip+0x8bd344]        # 0x141750bb8 ; literal=" (qualitative "
0x00e93874: lea    rcx,[rbp+0x28]
0x00e93878: call   0x140070b90
0x00e9387d: lea    rdx,[rip+0x8bd1a8]        # 0x141750a2c ; literal="cretic"
0x00e93884: jmp    0x140e93957
0x00e93889: lea    rdx,[rip+0x8bd3c0]        # 0x141750c50 ; literal="unstressed-unstressed"
0x00e93890: lea    rcx,[rbp+0x28]
0x00e93894: call   0x140070b90
0x00e93899: lea    rdx,[rip+0x8bd318]        # 0x141750bb8 ; literal=" (qualitative "
0x00e938a0: lea    rcx,[rbp+0x28]
0x00e938a4: call   0x140070b90
0x00e938a9: lea    rdx,[rip+0x8bd140]        # 0x1417509f0 ; literal="pyrrhic"
0x00e938b0: jmp    0x140e93957
0x00e938b5: lea    rdx,[rip+0x8bd36c]        # 0x141750c28 ; literal="unstressed-unstressed-unstressed"
0x00e938bc: lea    rcx,[rbp+0x28]
0x00e938c0: call   0x140070b90
0x00e938c5: lea    rdx,[rip+0x8bd2ec]        # 0x141750bb8 ; literal=" (qualitative "
0x00e938cc: lea    rcx,[rbp+0x28]
0x00e938d0: call   0x140070b90
0x00e938d5: lea    rdx,[rip+0x8bd104]        # 0x1417509e0 ; literal="tribrachic"
0x00e938dc: jmp    0x140e93957
0x00e938de: lea    rdx,[rip+0x8bd2b3]        # 0x141750b98 ; literal="unstressed-stressed-stressed"
0x00e938e5: lea    rcx,[rbp+0x28]
0x00e938e9: call   0x140070b90
0x00e938ee: lea    rdx,[rip+0x8bd2c3]        # 0x141750bb8 ; literal=" (qualitative "
0x00e938f5: lea    rcx,[rbp+0x28]
0x00e938f9: call   0x140070b90
0x00e938fe: lea    rdx,[rip+0x8bd103]        # 0x141750a08 ; literal="bacchic"
0x00e93905: jmp    0x140e93957
0x00e93907: lea    rdx,[rip+0x8bd26a]        # 0x141750b78 ; literal="stressed-stressed-unstressed"
0x00e9390e: lea    rcx,[rbp+0x28]
0x00e93912: call   0x140070b90
0x00e93917: lea    rdx,[rip+0x8bd29a]        # 0x141750bb8 ; literal=" (qualitative "
0x00e9391e: lea    rcx,[rbp+0x28]
0x00e93922: call   0x140070b90
0x00e93927: lea    rdx,[rip+0x8bd0ca]        # 0x1417509f8 ; literal="antibacchic"
0x00e9392e: jmp    0x140e93957
0x00e93930: lea    rdx,[rip+0x8bd291]        # 0x141750bc8 ; literal="stressed-stressed-stressed"
0x00e93937: lea    rcx,[rbp+0x28]
0x00e9393b: call   0x140070b90
0x00e93940: lea    rdx,[rip+0x8bd271]        # 0x141750bb8 ; literal=" (qualitative "
0x00e93947: lea    rcx,[rbp+0x28]
0x00e9394b: call   0x140070b90
0x00e93950: lea    rdx,[rip+0x8bd141]        # 0x141750a98 ; literal="molossic"
0x00e93957: lea    rcx,[rbp+0x28]
0x00e9395b: call   0x140070b90
0x00e93960: lea    rdx,[rip+0x770089]        # 0x1416039f0 ; literal=" "
0x00e93967: lea    rcx,[rbp+0x28]
0x00e9396b: call   0x140070b90
0x00e93970: lea    eax,[r13-0x1]
0x00e93974: cmp    eax,0x7
0x00e93977: ja     0x140e939c7
0x00e93979: cdqe
0x00e9397b: mov    ecx,DWORD PTR [r15+rax*4+0xe94d58]
0x00e93983: add    rcx,r15
0x00e93986: jmp    rcx
0x00e93988: lea    rdx,[rip+0x8bd229]        # 0x141750bb8 ; literal=" (qualitative "
0x00e9398f: lea    rcx,[rbp+0x28]
0x00e93993: call   0x140070b90
0x00e93998: cmp    r14d,0xb
0x00e9399c: ja     0x140e93960
0x00e9399e: movsxd rax,r14d
0x00e939a1: mov    ecx,DWORD PTR [r15+rax*4+0xe94d78]
0x00e939a9: add    rcx,r15
0x00e939ac: jmp    rcx
0x00e939ae: lea    rdx,[rip+0x8bd103]        # 0x141750ab8 ; literal="dimeter"
0x00e939b5: jmp    0x140e939be
0x00e939b7: lea    rdx,[rip+0x8bd17a]        # 0x141750b38 ; literal="octameter"
0x00e939be: lea    rcx,[rbp+0x28]
0x00e939c2: call   0x140070b90
0x00e939c7: lea    rdx,[rip+0x8bd162]        # 0x141750b30 ; literal=").  "
0x00e939ce: lea    rcx,[rbp+0x28]
0x00e939d2: call   0x140070b90
0x00e939d7: nop
0x00e939d8: lea    rcx,[rbp+0x88]
0x00e939df: call   0x140070e80
0x00e939e4: mov    r10,QWORD PTR [rsp+0x58]
0x00e939e9: jmp    0x140e93060
0x00e939ee: lea    rdx,[rip+0x775dc3]        # 0x1416097b8 ; literal="It"
0x00e939f5: call   0x140070b90
0x00e939fa: mov    r8d,0x5
0x00e93a00: lea    rdx,[rip+0x7f6d75]        # 0x14168a77c ; literal=" has "
0x00e93a07: lea    rcx,[rbp+0x28]
0x00e93a0b: call   0x140071040
0x00e93a10: mov    rcx,QWORD PTR [r13+0x0]
0x00e93a14: mov    edx,DWORD PTR [rcx+r15*4]
0x00e93a18: test   edx,edx
0x00e93a1a: je     0x140e93a38
0x00e93a1c: sub    edx,0x1
0x00e93a1f: je     0x140e93a2f
0x00e93a21: cmp    edx,0x1
0x00e93a24: jne    0x140e93a48
0x00e93a26: lea    rdx,[rip+0x8bd27b]        # 0x141750ca8 ; literal="a terminal caesura"
0x00e93a2d: jmp    0x140e93a3f
0x00e93a2f: lea    rdx,[rip+0x8bd31a]        # 0x141750d50 ; literal="a medial caesura"
0x00e93a36: jmp    0x140e93a3f
0x00e93a38: lea    rdx,[rip+0x8bd329]        # 0x141750d68 ; literal="an initial caesura"
0x00e93a3f: lea    rcx,[rbp+0x28]
0x00e93a43: call   0x140070b90
0x00e93a48: mov    r8d,0x3
0x00e93a4e: lea    rdx,[rip+0x785b43]        # 0x141619598 ; literal=".  "
0x00e93a55: lea    rcx,[rbp+0x28]
0x00e93a59: call   0x140071040
0x00e93a5e: mov    r12d,DWORD PTR [rsp+0x74]
0x00e93a63: inc    r12d
0x00e93a66: mov    DWORD PTR [rsp+0x74],r12d
0x00e93a6b: inc    r15
0x00e93a6e: mov    QWORD PTR [rbp-0x38],r15
0x00e93a72: inc    DWORD PTR [rbp-0x44]
0x00e93a75: inc    DWORD PTR [rbp-0x74]
0x00e93a78: cmp    r15,QWORD PTR [rbp+0x18]
0x00e93a7c: mov    r15,QWORD PTR [rbp-0x8]
0x00e93a80: jl     0x140e924d0
0x00e93a86: movzx  ebx,BYTE PTR [rsp+0x30]
0x00e93a8b: cmp    BYTE PTR [rsp+0x40],0x0
0x00e93a90: jne    0x140e93f97
0x00e93a96: mov    r15d,0xffffffff
0x00e93a9c: mov    r12b,0x1
0x00e93a9f: xor    r13b,r13b
0x00e93aa2: mov    r14,QWORD PTR [rsp+0x58]
0x00e93aa7: lea    rdx,[rbp-0x70]
0x00e93aab: lea    rcx,[r14+0x20]
0x00e93aaf: call   0x140070870
0x00e93ab4: lea    rdx,[rbp+0x0]
0x00e93ab8: lea    rcx,[r14+0x20]
0x00e93abc: call   0x140070860
0x00e93ac1: mov    rax,QWORD PTR [rbp-0x70]
0x00e93ac5: mov    rcx,QWORD PTR [rbp+0x0]
0x00e93ac9: mov    esi,0x1
0x00e93ace: xor    edi,edi
0x00e93ad0: mov    r14d,0xff
0x00e93ad6: cmp    rax,rcx
0x00e93ad9: je     0x140e93b25
0x00e93adb: mov    edx,esi
0x00e93add: cmovb  edx,r14d
0x00e93ae1: test   dl,dl
0x00e93ae3: jns    0x140e93b25
0x00e93ae5: mov    edx,DWORD PTR [rax]
0x00e93ae7: test   edx,edx
0x00e93ae9: js     0x140e93b1b
0x00e93aeb: cmp    edx,0x1a
0x00e93aee: jge    0x140e93b1b
0x00e93af0: lea    rcx,[rbp-0x70]
0x00e93af4: call   0x140070440
0x00e93af9: cmp    r15d,0xffffffff
0x00e93afd: jne    0x140e93b04
0x00e93aff: mov    r15d,DWORD PTR [rax]
0x00e93b02: jmp    0x140e93b0f
0x00e93b04: movzx  r12d,r12b
0x00e93b08: cmp    DWORD PTR [rax],r15d
0x00e93b0b: cmovne r12d,edi
0x00e93b0f: movzx  r13d,sil
0x00e93b13: mov    rax,QWORD PTR [rbp-0x70]
0x00e93b17: mov    rcx,QWORD PTR [rbp+0x0]
0x00e93b1b: add    rax,0x4
0x00e93b1f: mov    QWORD PTR [rbp-0x70],rax
0x00e93b23: jmp    0x140e93ad6
0x00e93b25: mov    rdx,QWORD PTR [rsp+0x58]
0x00e93b2a: mov    eax,DWORD PTR [rdx+0x18]
0x00e93b2d: cmp    eax,0xffffffff
0x00e93b30: movzx  edi,BYTE PTR [rsp+0x30]
0x00e93b35: movzx  esi,BYTE PTR [rsp+0x30]
0x00e93b3a: jne    0x140e93b50
0x00e93b3c: cmp    DWORD PTR [rdx+0x1c],0xffffffff
0x00e93b40: jne    0x140e93b50
0x00e93b42: test   r13b,r13b
0x00e93b45: je     0x140e93f97
0x00e93b4b: jmp    0x140e93fab
0x00e93b50: test   r13b,r13b
0x00e93b53: jne    0x140e93fa2
0x00e93b59: mov    r14d,DWORD PTR [rdx+0x10]
0x00e93b5d: xor    r9d,r9d
0x00e93b60: mov    r13d,r9d
0x00e93b63: mov    r15d,DWORD PTR [rdx+0x14]
0x00e93b67: mov    r8d,0x1
0x00e93b6d: mov    ecx,r8d
0x00e93b70: cmp    r15d,r14d
0x00e93b73: jge    0x140e93b8a
0x00e93b75: cmp    DWORD PTR [rdx+0x1c],0xffffffff
0x00e93b79: je     0x140e93b8a
0x00e93b7b: mov    eax,r14d
0x00e93b7e: mov    r14d,r15d
0x00e93b81: mov    r15d,eax
0x00e93b84: mov    r13d,r8d
0x00e93b87: mov    ecx,r9d
0x00e93b8a: movsxd rax,DWORD PTR [rdx+r13*4+0x18]
0x00e93b8f: mov    r8d,DWORD PTR [rsp+0x4c]
0x00e93b94: cmp    eax,0xffffffff
0x00e93b97: je     0x140e93bb3
0x00e93b99: cmp    DWORD PTR [rbp+rax*4+0x108],0xffffffff
0x00e93ba1: jne    0x140e93bb3
0x00e93ba3: mov    DWORD PTR [rbp+rax*4+0x108],r8d
0x00e93bab: inc    r8d
0x00e93bae: mov    DWORD PTR [rsp+0x4c],r8d
0x00e93bb3: lea    r12,[rdx+rcx*4]
0x00e93bb7: movsxd rax,DWORD PTR [r12+0x18]
0x00e93bbc: cmp    eax,0xffffffff
0x00e93bbf: je     0x140e93bdb
0x00e93bc1: cmp    DWORD PTR [rbp+rax*4+0x108],0xffffffff
0x00e93bc9: jne    0x140e93bdb
0x00e93bcb: mov    DWORD PTR [rbp+rax*4+0x108],r8d
0x00e93bd3: inc    r8d
0x00e93bd6: mov    DWORD PTR [rsp+0x4c],r8d
0x00e93bdb: lea    rcx,[rbp+0x28]
0x00e93bdf: cmp    BYTE PTR [rsp+0x70],r9b
0x00e93be4: je     0x140e93c9c
0x00e93bea: cmp    DWORD PTR [rdx+0x1c],0xffffffff
0x00e93bee: je     0x140e93c62
0x00e93bf0: lea    rdx,[rip+0x8bddb9]        # 0x1417519b0 ; literal="The refrain occurs as lines "
0x00e93bf7: call   0x140070b90
0x00e93bfc: lea    rcx,[rbp+0x68]
0x00e93c00: call   0x140070cc0
0x00e93c05: nop
0x00e93c06: lea    rdx,[rbp+0x68]
0x00e93c0a: mov    ecx,r14d
0x00e93c0d: call   0x140547840
0x00e93c12: lea    rdx,[rbp+0x68]
0x00e93c16: lea    rcx,[rbp+0x28]
0x00e93c1a: call   0x1400bb340
0x00e93c1f: nop
0x00e93c20: lea    rcx,[rbp+0x68]
0x00e93c24: call   0x140069460
0x00e93c29: lea    rdx,[rip+0x77075c]        # 0x14160438c ; literal=" and "
0x00e93c30: lea    rcx,[rbp+0x28]
0x00e93c34: call   0x140070b90
0x00e93c39: lea    rcx,[rbp+0x68]
0x00e93c3d: call   0x140070cc0
0x00e93c42: nop
0x00e93c43: lea    rdx,[rbp+0x68]
0x00e93c47: mov    ecx,r15d
0x00e93c4a: call   0x140547840
0x00e93c4f: lea    rdx,[rbp+0x68]
0x00e93c53: lea    rcx,[rbp+0x28]
0x00e93c57: call   0x1400bb340
0x00e93c5c: nop
0x00e93c5d: jmp    0x140e93f15
0x00e93c62: lea    rdx,[rip+0x8bdd27]        # 0x141751990 ; literal="The refrain occurs as line "
0x00e93c69: call   0x140070b90
0x00e93c6e: lea    rcx,[rbp+0x68]
0x00e93c72: call   0x140070cc0
0x00e93c77: nop
0x00e93c78: lea    rdx,[rbp+0x68]
0x00e93c7c: mov    rax,QWORD PTR [rsp+0x58]
0x00e93c81: mov    ecx,DWORD PTR [rax+0x10]
0x00e93c84: call   0x140547840
0x00e93c89: lea    rdx,[rbp+0x68]
0x00e93c8d: lea    rcx,[rbp+0x28]
0x00e93c91: call   0x1400bb340
0x00e93c96: nop
0x00e93c97: jmp    0x140e93f15
0x00e93c9c: mov    eax,DWORD PTR [rdx+0x1c]
0x00e93c9f: cmp    DWORD PTR [rdx+0x18],eax
0x00e93ca2: lea    rdx,[rip+0x774f93]        # 0x141608c3c ; literal="The "
0x00e93ca9: jne    0x140e93d72
0x00e93caf: call   0x140070b90
0x00e93cb4: lea    rcx,[rbp+0x68]
0x00e93cb8: call   0x140070cc0
0x00e93cbd: nop
0x00e93cbe: mov    rax,QWORD PTR [rsp+0x58]
0x00e93cc3: movsxd rax,DWORD PTR [rax+0x18]
0x00e93cc7: mov    ecx,DWORD PTR [rbp+rax*4+0x108]
0x00e93cce: inc    ecx
0x00e93cd0: xor    r8d,r8d
0x00e93cd3: lea    rdx,[rbp+0x68]
0x00e93cd7: call   0x140548050
0x00e93cdc: lea    rcx,[rbp+0x68]
0x00e93ce0: call   0x140546560
0x00e93ce5: lea    rdx,[rbp+0x68]
0x00e93ce9: lea    rcx,[rbp+0x28]
0x00e93ced: call   0x1400bb340
0x00e93cf2: nop
0x00e93cf3: lea    rcx,[rbp+0x68]
0x00e93cf7: call   0x140069460
0x00e93cfc: lea    rdx,[rip+0x8bdbdd]        # 0x1417518e0 ; literal=" refrain occurs as lines "
0x00e93d03: lea    rcx,[rbp+0x28]
0x00e93d07: call   0x140070b90
0x00e93d0c: lea    rcx,[rbp+0x68]
0x00e93d10: call   0x140070cc0
0x00e93d15: nop
0x00e93d16: lea    rdx,[rbp+0x68]
0x00e93d1a: mov    ecx,r14d
0x00e93d1d: call   0x140547840
0x00e93d22: lea    rdx,[rbp+0x68]
0x00e93d26: lea    rcx,[rbp+0x28]
0x00e93d2a: call   0x1400bb340
0x00e93d2f: nop
0x00e93d30: lea    rcx,[rbp+0x68]
0x00e93d34: call   0x140069460
0x00e93d39: lea    rdx,[rip+0x77064c]        # 0x14160438c ; literal=" and "
0x00e93d40: lea    rcx,[rbp+0x28]
0x00e93d44: call   0x140070b90
0x00e93d49: lea    rcx,[rbp+0x68]
0x00e93d4d: call   0x140070cc0
0x00e93d52: nop
0x00e93d53: lea    rdx,[rbp+0x68]
0x00e93d57: mov    ecx,r15d
0x00e93d5a: call   0x140547840
0x00e93d5f: lea    rdx,[rbp+0x68]
0x00e93d63: lea    rcx,[rbp+0x28]
0x00e93d67: call   0x1400bb340
0x00e93d6c: nop
0x00e93d6d: jmp    0x140e93f15
0x00e93d72: cmp    eax,0xffffffff
0x00e93d75: jne    0x140e93e02
0x00e93d7b: call   0x140070b90
0x00e93d80: lea    rcx,[rbp+0x68]
0x00e93d84: call   0x140070cc0
0x00e93d89: nop
0x00e93d8a: mov    r14,QWORD PTR [rsp+0x58]
0x00e93d8f: movsxd rax,DWORD PTR [r14+0x18]
0x00e93d93: mov    ecx,DWORD PTR [rbp+rax*4+0x108]
0x00e93d9a: inc    ecx
0x00e93d9c: xor    r8d,r8d
0x00e93d9f: lea    rdx,[rbp+0x68]
0x00e93da3: call   0x140548050
0x00e93da8: lea    rcx,[rbp+0x68]
0x00e93dac: call   0x140546560
0x00e93db1: lea    rdx,[rbp+0x68]
0x00e93db5: lea    rcx,[rbp+0x28]
0x00e93db9: call   0x1400bb340
0x00e93dbe: nop
0x00e93dbf: lea    rcx,[rbp+0x68]
0x00e93dc3: call   0x140069460
0x00e93dc8: lea    rdx,[rip+0x8bdaf1]        # 0x1417518c0 ; literal=" refrain occurs as line "
0x00e93dcf: lea    rcx,[rbp+0x28]
0x00e93dd3: call   0x140070b90
0x00e93dd8: lea    rcx,[rbp+0x68]
0x00e93ddc: call   0x140070cc0
0x00e93de1: nop
0x00e93de2: lea    rdx,[rbp+0x68]
0x00e93de6: mov    ecx,DWORD PTR [r14+0x10]
0x00e93dea: call   0x140547840
0x00e93def: lea    rdx,[rbp+0x68]
0x00e93df3: lea    rcx,[rbp+0x28]
0x00e93df7: call   0x1400bb340
0x00e93dfc: nop
0x00e93dfd: jmp    0x140e93f15
0x00e93e02: call   0x140070b90
0x00e93e07: lea    rcx,[rbp+0x68]
0x00e93e0b: call   0x140070cc0
0x00e93e10: nop
0x00e93e11: mov    rax,QWORD PTR [rsp+0x58]
0x00e93e16: movsxd rax,DWORD PTR [rax+r13*4+0x18]
0x00e93e1b: mov    ecx,DWORD PTR [rbp+rax*4+0x108]
0x00e93e22: inc    ecx
0x00e93e24: xor    r8d,r8d
0x00e93e27: lea    rdx,[rbp+0x68]
0x00e93e2b: call   0x140548050
0x00e93e30: lea    rcx,[rbp+0x68]
0x00e93e34: call   0x140546560
0x00e93e39: lea    rdx,[rbp+0x68]
0x00e93e3d: lea    rcx,[rbp+0x28]
0x00e93e41: call   0x1400bb340
0x00e93e46: nop
0x00e93e47: lea    rcx,[rbp+0x68]
0x00e93e4b: call   0x140069460
0x00e93e50: lea    rdx,[rip+0x8bda69]        # 0x1417518c0 ; literal=" refrain occurs as line "
0x00e93e57: lea    rcx,[rbp+0x28]
0x00e93e5b: call   0x140070b90
0x00e93e60: lea    rcx,[rbp+0x68]
0x00e93e64: call   0x140070cc0
0x00e93e69: nop
0x00e93e6a: lea    rdx,[rbp+0x68]
0x00e93e6e: mov    ecx,r14d
0x00e93e71: call   0x140547840
0x00e93e76: lea    rdx,[rbp+0x68]
0x00e93e7a: lea    rcx,[rbp+0x28]
0x00e93e7e: call   0x1400bb340
0x00e93e83: nop
0x00e93e84: lea    rcx,[rbp+0x68]
0x00e93e88: call   0x140069460
0x00e93e8d: lea    rdx,[rip+0x770894]        # 0x141604728 ; literal=" and the "
0x00e93e94: lea    rcx,[rbp+0x28]
0x00e93e98: call   0x140070b90
0x00e93e9d: lea    rcx,[rbp+0x68]
0x00e93ea1: call   0x140070cc0
0x00e93ea6: nop
0x00e93ea7: movsxd rax,DWORD PTR [r12+0x18]
0x00e93eac: mov    ecx,DWORD PTR [rbp+rax*4+0x108]
0x00e93eb3: inc    ecx
0x00e93eb5: xor    r8d,r8d
0x00e93eb8: lea    rdx,[rbp+0x68]
0x00e93ebc: call   0x140548050
0x00e93ec1: lea    rcx,[rbp+0x68]
0x00e93ec5: call   0x140546560
0x00e93eca: lea    rdx,[rbp+0x68]
0x00e93ece: lea    rcx,[rbp+0x28]
0x00e93ed2: call   0x1400bb340
0x00e93ed7: nop
0x00e93ed8: lea    rcx,[rbp+0x68]
0x00e93edc: call   0x140069460
0x00e93ee1: lea    rdx,[rip+0x8bd9d8]        # 0x1417518c0 ; literal=" refrain occurs as line "
0x00e93ee8: lea    rcx,[rbp+0x28]
0x00e93eec: call   0x140070b90
0x00e93ef1: lea    rcx,[rbp+0x68]
0x00e93ef5: call   0x140070cc0
0x00e93efa: nop
0x00e93efb: lea    rdx,[rbp+0x68]
0x00e93eff: mov    ecx,r15d
0x00e93f02: call   0x140547840
0x00e93f07: lea    rdx,[rbp+0x68]
0x00e93f0b: lea    rcx,[rbp+0x28]
0x00e93f0f: call   0x1400bb340
0x00e93f14: nop
0x00e93f15: lea    rcx,[rbp+0x68]
0x00e93f19: call   0x140069460
0x00e93f1e: cmp    BYTE PTR [rsp+0x31],0x0
0x00e93f23: jne    0x140e93f81
0x00e93f25: lea    rdx,[rip+0x7f7f9c]        # 0x14168bec8 ; literal=" of the "
0x00e93f2c: lea    rcx,[rbp+0x28]
0x00e93f30: call   0x140070b90
0x00e93f35: lea    rcx,[rbp+0x68]
0x00e93f39: call   0x140070cc0
0x00e93f3e: nop
0x00e93f3f: mov    ecx,DWORD PTR [rsp+0x50]
0x00e93f43: inc    ecx
0x00e93f45: xor    r8d,r8d
0x00e93f48: lea    rdx,[rbp+0x68]
0x00e93f4c: call   0x140548050
0x00e93f51: lea    rcx,[rbp+0x68]
0x00e93f55: call   0x140546560
0x00e93f5a: lea    rdx,[rbp+0x68]
0x00e93f5e: lea    rcx,[rbp+0x28]
0x00e93f62: call   0x1400bb340
0x00e93f67: lea    rdx,[rip+0x775b3e]        # 0x141609aac ; literal=" part"
0x00e93f6e: lea    rcx,[rbp+0x28]
0x00e93f72: call   0x140070b90
0x00e93f77: nop
0x00e93f78: lea    rcx,[rbp+0x68]
0x00e93f7c: call   0x140069460
0x00e93f81: mov    r8d,0x3
0x00e93f87: lea    rdx,[rip+0x78560a]        # 0x141619598 ; literal=".  "
0x00e93f8e: lea    rcx,[rbp+0x28]
0x00e93f92: call   0x140071040
0x00e93f97: mov    r13d,0x1
0x00e93f9d: jmp    0x140e9469d
0x00e93fa2: cmp    eax,0xffffffff
0x00e93fa5: jne    0x140e94094
0x00e93fab: cmp    DWORD PTR [rdx+0x1c],0xffffffff
0x00e93faf: jne    0x140e94094
0x00e93fb5: test   r13b,r13b
0x00e93fb8: je     0x140e94094
0x00e93fbe: test   r12b,r12b
0x00e93fc1: mov    r12,rdx
0x00e93fc4: je     0x140e94097
0x00e93fca: test   BYTE PTR [rdx],0x1
0x00e93fcd: jne    0x140e94097
0x00e93fd3: cmp    DWORD PTR [rdx+0xc],0x2
0x00e93fd7: jl     0x140e94438
0x00e93fdd: lea    rdx,[rip+0x8bd92c]        # 0x141751910 ; literal="The ending of each line "
0x00e93fe4: lea    rcx,[rbp+0x28]
0x00e93fe8: call   0x140070b90
0x00e93fed: mov    rcx,QWORD PTR [rsp+0x68]
0x00e93ff2: call   0x140070480
0x00e93ff7: lea    rcx,[rbp+0x28]
0x00e93ffb: cmp    rax,0x1
0x00e93fff: jne    0x140e94012
0x00e94001: lea    rdx,[rip+0x8bd8f8]        # 0x141751900 ; literal="of the poem"
0x00e94008: call   0x140070b90
0x00e9400d: jmp    0x140e94438
0x00e94012: cmp    BYTE PTR [rsp+0x31],0x0
0x00e94017: jne    0x140e94073
0x00e94019: lea    rdx,[rip+0x8bda20]        # 0x141751a40 ; literal="of the "
0x00e94020: call   0x140070b90
0x00e94025: lea    rcx,[rbp+0x68]
0x00e94029: call   0x140070cc0
0x00e9402e: nop
0x00e9402f: mov    ecx,DWORD PTR [rsp+0x50]
0x00e94033: inc    ecx
0x00e94035: xor    r8d,r8d
0x00e94038: lea    rdx,[rbp+0x68]
0x00e9403c: call   0x140548050
0x00e94041: lea    rcx,[rbp+0x68]
0x00e94045: call   0x140546560
0x00e9404a: lea    rdx,[rbp+0x68]
0x00e9404e: lea    rcx,[rbp+0x28]
0x00e94052: call   0x1400bb340
0x00e94057: lea    rdx,[rip+0x775a4e]        # 0x141609aac ; literal=" part"
0x00e9405e: lea    rcx,[rbp+0x28]
0x00e94062: call   0x140070b90
0x00e94067: nop
0x00e94068: lea    rcx,[rbp+0x68]
0x00e9406c: call   0x140069460
0x00e94071: jmp    0x140e9407f
0x00e94073: lea    rdx,[rip+0x8bd9b6]        # 0x141751a30 ; literal="of this part"
0x00e9407a: call   0x140070b90
0x00e9407f: lea    rdx,[rip+0x8bd9da]        # 0x141751a60 ; literal=" shares the same rhyme.  "
0x00e94086: lea    rcx,[rbp+0x28]
0x00e9408a: call   0x140070b90
0x00e9408f: jmp    0x140e94438
0x00e94094: mov    r12,rdx
0x00e94097: mov    r8d,0x11
0x00e9409d: lea    rdx,[rip+0x8bd9a4]        # 0x141751a48 ; literal="The rhyme scheme "
0x00e940a4: lea    rcx,[rbp+0x28]
0x00e940a8: call   0x140071040
0x00e940ad: mov    rcx,QWORD PTR [rsp+0x68]
0x00e940b2: mov    rax,QWORD PTR [rcx+0x8]
0x00e940b6: sub    rax,QWORD PTR [rcx]
0x00e940b9: and    rax,0xfffffffffffffff8
0x00e940bd: cmp    rax,0x8
0x00e940c1: jne    0x140e940cf
0x00e940c3: lea    rdx,[rip+0x8bd836]        # 0x141751900 ; literal="of the poem"
0x00e940ca: jmp    0x140e941d7
0x00e940cf: mov    ecx,DWORD PTR [r12]
0x00e940d3: mov    eax,ecx
0x00e940d5: and    eax,0x1
0x00e940d8: cmp    BYTE PTR [rsp+0x31],0x0
0x00e940dd: jne    0x140e94198
0x00e940e3: test   eax,eax
0x00e940e5: jne    0x140e94113
0x00e940e7: test   cl,0x4
0x00e940ea: je     0x140e940f5
0x00e940ec: lea    rdx,[rip+0x8bd8f5]        # 0x1417519e8 ; literal="repeating in each stanza of"
0x00e940f3: jmp    0x140e9411a
0x00e940f5: lea    rcx,[rbp+0x28]
0x00e940f9: cmp    DWORD PTR [r12+0x8],0x2
0x00e940ff: jl     0x140e9410a
0x00e94101: lea    rdx,[rip+0x8bd8c8]        # 0x1417519d0 ; literal="within each stanza of"
0x00e94108: jmp    0x140e9411e
0x00e9410a: lea    rdx,[rip+0x8bd913]        # 0x141751a24 ; literal="within"
0x00e94111: jmp    0x140e9411e
0x00e94113: lea    rdx,[rip+0x86e746]        # 0x141702860 ; literal="of"
0x00e9411a: lea    rcx,[rbp+0x28]
0x00e9411e: call   0x140070b90
0x00e94123: lea    rdx,[rip+0x7706ee]        # 0x141604818 ; literal=" the "
0x00e9412a: lea    rcx,[rbp+0x28]
0x00e9412e: call   0x140070b90
0x00e94133: lea    rcx,[rbp+0x68]
0x00e94137: call   0x140070cc0
0x00e9413c: nop
0x00e9413d: mov    ecx,DWORD PTR [rsp+0x50]
0x00e94141: inc    ecx
0x00e94143: xor    r8d,r8d
0x00e94146: lea    rdx,[rbp+0x68]
0x00e9414a: call   0x140548050
0x00e9414f: lea    rcx,[rbp+0x68]
0x00e94153: call   0x140546560
0x00e94158: lea    rdx,[rbp+0x68]
0x00e9415c: lea    rcx,[rbp+0x28]
0x00e94160: call   0x1400bb340
0x00e94165: lea    rdx,[rip+0x775940]        # 0x141609aac ; literal=" part"
0x00e9416c: lea    rcx,[rbp+0x28]
0x00e94170: call   0x140070b90
0x00e94175: test   BYTE PTR [r12],0x1
0x00e9417a: je     0x140e9418d
0x00e9417c: lea    rdx,[rip+0x76f86d]        # 0x1416039f0 ; literal=" "
0x00e94183: lea    rcx,[rbp+0x28]
0x00e94187: call   0x140070b90
0x00e9418c: nop
0x00e9418d: lea    rcx,[rbp+0x68]
0x00e94191: call   0x140069460
0x00e94196: jmp    0x140e941c9
0x00e94198: test   eax,eax
0x00e9419a: jne    0x140e941c9
0x00e9419c: test   cl,0x4
0x00e9419f: je     0x140e941aa
0x00e941a1: lea    rdx,[rip+0x8bd860]        # 0x141751a08 ; literal="repeating in each stanza"
0x00e941a8: jmp    0x140e941c0
0x00e941aa: cmp    DWORD PTR [r12+0x8],0x2
0x00e941b0: lea    rdx,[rip+0x8bd9b9]        # 0x141751b70 ; literal="within each stanza"
0x00e941b7: jge    0x140e941c0
0x00e941b9: lea    rdx,[rip+0x8bd998]        # 0x141751b58 ; literal="within this stanza"
0x00e941c0: lea    rcx,[rbp+0x28]
0x00e941c4: call   0x140070b90
0x00e941c9: test   BYTE PTR [r12],0x1
0x00e941ce: je     0x140e941e0
0x00e941d0: lea    rdx,[rip+0x8bd9d9]        # 0x141751bb0 ; literal="respecting the full poem"
0x00e941d7: lea    rcx,[rbp+0x28]
0x00e941db: call   0x140070b90
0x00e941e0: mov    r8d,0x4
0x00e941e6: lea    rdx,[rip+0x77ed07]        # 0x141612ef4 ; literal=" is "
0x00e941ed: lea    rcx,[rbp+0x28]
0x00e941f1: call   0x140071040
0x00e941f6: movdqa XMMWORD PTR [rbp+0x200],xmm6
0x00e941fe: movdqa XMMWORD PTR [rbp+0x210],xmm6
0x00e94206: movdqa XMMWORD PTR [rbp+0x220],xmm6
0x00e9420e: movdqa XMMWORD PTR [rbp+0x230],xmm6
0x00e94216: movdqa XMMWORD PTR [rbp+0x240],xmm6
0x00e9421e: movdqa XMMWORD PTR [rbp+0x250],xmm6
0x00e94226: mov    QWORD PTR [rbp+0x260],0xffffffffffffffff
0x00e94231: xor    eax,eax
0x00e94233: mov    r15d,eax
0x00e94236: mov    r14d,0x1
0x00e9423c: lea    r8,[r12+0x20]
0x00e94241: mov    rdx,QWORD PTR [r8]
0x00e94244: lea    rcx,[rsp+0x60]
0x00e94249: call   0x140070d70
0x00e9424e: lea    r8,[r12+0x20]
0x00e94253: mov    rdx,QWORD PTR [r8+0x8]
0x00e94257: lea    rcx,[rbp+0x20]
0x00e9425b: call   0x140070d70
0x00e94260: mov    r9d,DWORD PTR [rsp+0x4c]
0x00e94265: mov    esi,DWORD PTR [rbp-0x54]
0x00e94268: mov    rdi,QWORD PTR [rsp+0x68]
0x00e9426d: mov    ebx,0xff
0x00e94272: mov    r8d,r9d
0x00e94275: mov    rax,QWORD PTR [rsp+0x60]
0x00e9427a: cmp    rax,QWORD PTR [rbp+0x20]
0x00e9427e: je     0x140e943c0
0x00e94284: mov    edx,0x1
0x00e94289: cmovb  edx,ebx
0x00e9428c: test   dl,dl
0x00e9428e: jns    0x140e943c0
0x00e94294: cmp    r14d,DWORD PTR [r12+0x10]
0x00e94299: jne    0x140e942db
0x00e9429b: movsxd rax,DWORD PTR [r12+0x18]
0x00e942a0: mov    edx,DWORD PTR [rbp+rax*4+0x108]
0x00e942a7: cmp    edx,0xffffffff
0x00e942aa: jne    0x140e942bf
0x00e942ac: mov    DWORD PTR [rbp+rax*4+0x108],r9d
0x00e942b4: inc    r9d
0x00e942b7: mov    DWORD PTR [rsp+0x4c],r9d
0x00e942bc: mov    edx,r8d
0x00e942bf: add    dl,0x31
0x00e942c2: lea    rcx,[rbp+0x28]
0x00e942c6: call   0x1400bb1b0
0x00e942cb: mov    r9d,DWORD PTR [rsp+0x4c]
0x00e942d0: add    QWORD PTR [rsp+0x60],0x4
0x00e942d6: inc    r14d
0x00e942d9: jmp    0x140e94272
0x00e942db: cmp    r14d,DWORD PTR [r12+0x14]
0x00e942e0: jne    0x140e942e9
0x00e942e2: movsxd rax,DWORD PTR [r12+0x1c]
0x00e942e7: jmp    0x140e942a0
0x00e942e9: mov    rax,QWORD PTR [rsp+0x60]
0x00e942ee: mov    ecx,DWORD PTR [rax]
0x00e942f0: test   ecx,ecx
0x00e942f2: js     0x140e943b2
0x00e942f8: cmp    ecx,0x1a
0x00e942fb: jge    0x140e943b2
0x00e94301: test   BYTE PTR [r12],0x1
0x00e94306: jne    0x140e9435f
0x00e94308: mov    rcx,rdi
0x00e9430b: call   0x140070480
0x00e94310: cmp    rax,0x1
0x00e94314: je     0x140e9435f
0x00e94316: lea    rcx,[rsp+0x60]
0x00e9431b: call   0x140070440
0x00e94320: movsxd rcx,DWORD PTR [rax]
0x00e94323: cmp    DWORD PTR [rbp+rcx*4+0x200],0xffffffff
0x00e9432b: jne    0x140e94345
0x00e9432d: lea    rcx,[rsp+0x60]
0x00e94332: call   0x140070440
0x00e94337: movsxd rcx,DWORD PTR [rax]
0x00e9433a: mov    DWORD PTR [rbp+rcx*4+0x200],r15d
0x00e94342: inc    r15d
0x00e94345: lea    rcx,[rsp+0x60]
0x00e9434a: call   0x140070440
0x00e9434f: movsxd rcx,DWORD PTR [rax]
0x00e94352: movzx  edx,BYTE PTR [rbp+rcx*4+0x200]
0x00e9435a: add    dl,0x61
0x00e9435d: jmp    0x140e943a4
0x00e9435f: lea    rcx,[rsp+0x60]
0x00e94364: call   0x140070440
0x00e94369: movsxd rcx,DWORD PTR [rax]
0x00e9436c: cmp    DWORD PTR [rbp+rcx*4+0x130],0xffffffff
0x00e94374: jne    0x140e9438c
0x00e94376: lea    rcx,[rsp+0x60]
0x00e9437b: call   0x140070440
0x00e94380: movsxd rcx,DWORD PTR [rax]
0x00e94383: mov    DWORD PTR [rbp+rcx*4+0x130],esi
0x00e9438a: inc    esi
0x00e9438c: lea    rcx,[rsp+0x60]
0x00e94391: call   0x140070440
0x00e94396: movsxd rcx,DWORD PTR [rax]
0x00e94399: movzx  edx,BYTE PTR [rbp+rcx*4+0x130]
0x00e943a1: add    dl,0x41
0x00e943a4: lea    rcx,[rbp+0x28]
0x00e943a8: call   0x1400bb360
0x00e943ad: mov    r9d,DWORD PTR [rsp+0x4c]
0x00e943b2: add    QWORD PTR [rsp+0x60],0x4
0x00e943b8: inc    r14d
0x00e943bb: jmp    0x140e94272
0x00e943c0: mov    DWORD PTR [rbp-0x54],esi
0x00e943c3: movzx  r14d,BYTE PTR [rsp+0x33]
0x00e943c9: test   r14b,r14b
0x00e943cc: movzx  ebx,BYTE PTR [rsp+0x30]
0x00e943d1: movzx  edi,BYTE PTR [rsp+0x30]
0x00e943d6: movzx  esi,BYTE PTR [rsp+0x30]
0x00e943db: jne    0x140e94406
0x00e943dd: cmp    DWORD PTR [r12+0x18],0xffffffff
0x00e943e3: jne    0x140e943ed
0x00e943e5: cmp    DWORD PTR [r12+0x1c],0xffffffff
0x00e943eb: je     0x140e94406
0x00e943ed: mov    r8d,0x22
0x00e943f3: lea    rdx,[rip+0x8bd78e]        # 0x141751b88 ; literal=", where numbers indicate a refrain"
0x00e943fa: lea    rcx,[rbp+0x28]
0x00e943fe: call   0x140071040
0x00e94403: mov    r14b,0x1
0x00e94406: mov    BYTE PTR [rsp+0x33],r14b
0x00e9440b: mov    r8d,0x3
0x00e94411: lea    rdx,[rip+0x785180]        # 0x141619598 ; literal=".  "
0x00e94418: lea    rcx,[rbp+0x28]
0x00e9441c: call   0x140071040
0x00e94421: mov    eax,DWORD PTR [rsp+0x4c]
0x00e94425: mov    DWORD PTR [rsp+0x4c],eax
0x00e94429: mov    eax,DWORD PTR [rbp-0x54]
0x00e9442c: mov    DWORD PTR [rbp-0x54],eax
0x00e9442f: test   r13b,r13b
0x00e94432: je     0x140e93f97
0x00e94438: mov    rax,QWORD PTR [rbp-0x60]
0x00e9443c: test   BYTE PTR [rax+0xe4],0x2
0x00e94443: je     0x140e94469
0x00e94445: cmp    BYTE PTR [rsp+0x32],0x0
0x00e9444a: jne    0x140e9448a
0x00e9444c: mov    r8d,0x50
0x00e94452: lea    rdx,[rip+0x8bd677]        # 0x141751ad0 ; literal="As a rule throughout the poem, the end rhymes don't generally match perfectly.  "
0x00e94459: lea    rcx,[rbp+0x28]
0x00e9445d: call   0x140071040
0x00e94462: mov    BYTE PTR [rsp+0x32],0x1
0x00e94467: jmp    0x140e9448a
0x00e94469: test   BYTE PTR [r12+0x194],0x2
0x00e94472: je     0x140e9448a
0x00e94474: mov    r8d,0x49
0x00e9447a: lea    rdx,[rip+0x8bd5ff]        # 0x141751a80 ; literal="In this part of the poem, the end rhymes don't need to match perfectly.  "
0x00e94481: lea    rcx,[rbp+0x28]
0x00e94485: call   0x140071040
0x00e9448a: mov    rdx,QWORD PTR [r12+0x80]
0x00e94492: mov    rax,QWORD PTR [r12+0x88]
0x00e9449a: sub    rax,rdx
0x00e9449d: sar    rax,0x2
0x00e944a1: test   rax,rax
0x00e944a4: je     0x140e93f97
0x00e944aa: xor    eax,eax
0x00e944ac: mov    r14d,eax
0x00e944af: lea    r8,[r12+0x80]
0x00e944b7: lea    rcx,[rbp+0x8]
0x00e944bb: call   0x140070d70
0x00e944c0: lea    r8,[r12+0x80]
0x00e944c8: mov    rdx,QWORD PTR [r12+0x88]
0x00e944d0: lea    rcx,[rbp-0x28]
0x00e944d4: call   0x140070d70
0x00e944d9: mov    rcx,QWORD PTR [rbp-0x28]
0x00e944dd: mov    rax,QWORD PTR [rbp+0x8]
0x00e944e1: mov    r8d,0xff
0x00e944e7: mov    r15d,0x1
0x00e944ed: nop    DWORD PTR [rax]
0x00e944f0: cmp    rax,rcx
0x00e944f3: je     0x140e94512
0x00e944f5: mov    edx,r15d
0x00e944f8: cmovb  edx,r8d
0x00e944fc: test   dl,dl
0x00e944fe: jns    0x140e94512
0x00e94500: test   BYTE PTR [rax],0x2
0x00e94503: je     0x140e94508
0x00e94505: inc    r14d
0x00e94508: add    rax,0x4
0x00e9450c: mov    QWORD PTR [rbp+0x8],rax
0x00e94510: jmp    0x140e944f0
0x00e94512: test   r14d,r14d
0x00e94515: jle    0x140e9469a
0x00e9451b: mov    r12d,r14d
0x00e9451e: mov    r8d,0x9
0x00e94524: lea    rdx,[rip+0x8bd61d]        # 0x141751b48 ; literal="The rhyme"
0x00e9452b: lea    rcx,[rbp+0x28]
0x00e9452f: call   0x140071040
0x00e94534: cmp    r14d,0x2
0x00e94538: jl     0x140e9454d
0x00e9453a: mov    r8,r15
0x00e9453d: lea    rdx,[rip+0x76ffac]        # 0x1416044f0 ; literal="s"
0x00e94544: lea    rcx,[rbp+0x28]
0x00e94548: call   0x140071040
0x00e9454d: mov    r8d,0x13
0x00e94553: lea    rdx,[rip+0x8bc836]        # 0x141750d90 ; literal=" at the end of the "
0x00e9455a: lea    rcx,[rbp+0x28]
0x00e9455e: call   0x140071040
0x00e94563: mov    r13,QWORD PTR [rsp+0x58]
0x00e94568: lea    r8,[r13+0x80]
0x00e9456f: mov    rdx,QWORD PTR [r8]
0x00e94572: lea    rcx,[rsp+0x78]
0x00e94577: call   0x140070d70
0x00e9457c: lea    r8,[r13+0x80]
0x00e94583: mov    rdx,QWORD PTR [r8+0x8]
0x00e94587: lea    rcx,[rbp+0x10]
0x00e9458b: call   0x140070d70
0x00e94590: mov    rax,QWORD PTR [rsp+0x78]
0x00e94595: mov    rcx,QWORD PTR [rbp+0x10]
0x00e94599: mov    esi,0xff
0x00e9459e: mov    r13,r15
0x00e945a1: cmp    rax,rcx
0x00e945a4: je     0x140e9463f
0x00e945aa: mov    edx,r13d
0x00e945ad: cmovb  edx,esi
0x00e945b0: test   dl,dl
0x00e945b2: jns    0x140e9463f
0x00e945b8: test   BYTE PTR [rax],0x2
0x00e945bb: je     0x140e9462e
0x00e945bd: movzx  edx,bl
0x00e945c0: lea    rcx,[rbp+0x48]
0x00e945c4: call   0x1400697c0
0x00e945c9: lea    rcx,[rbp+0x48]
0x00e945cd: call   0x1400711b0
0x00e945d2: nop
0x00e945d3: xor    r8d,r8d
0x00e945d6: lea    rdx,[rbp+0x48]
0x00e945da: mov    ecx,r15d
0x00e945dd: call   0x140548050
0x00e945e2: lea    rcx,[rbp+0x48]
0x00e945e6: call   0x140546560
0x00e945eb: lea    rdx,[rbp+0x48]
0x00e945ef: lea    rcx,[rbp+0x28]
0x00e945f3: call   0x1400bb340
0x00e945f8: cmp    r14d,0x2
0x00e945fc: jne    0x140e94607
0x00e945fe: lea    rdx,[rip+0x76fd87]        # 0x14160438c ; literal=" and "
0x00e94605: jmp    0x140e94610
0x00e94607: jle    0x140e94619
0x00e94609: lea    rdx,[rip+0x76fd84]        # 0x141604394 ; literal=", "
0x00e94610: lea    rcx,[rbp+0x28]
0x00e94614: call   0x140070b90
0x00e94619: dec    r14d
0x00e9461c: lea    rcx,[rbp+0x48]
0x00e94620: call   0x140070e80
0x00e94625: mov    rax,QWORD PTR [rsp+0x78]
0x00e9462a: mov    rcx,QWORD PTR [rbp+0x10]
0x00e9462e: add    rax,0x4
0x00e94632: mov    QWORD PTR [rsp+0x78],rax
0x00e94637: inc    r15d
0x00e9463a: jmp    0x140e945a1
0x00e9463f: mov    r8,r13
0x00e94642: lea    rdx,[rip+0x76f3a7]        # 0x1416039f0 ; literal=" "
0x00e94649: lea    rcx,[rbp+0x28]
0x00e9464d: call   0x140071040
0x00e94652: lea    rcx,[rbp+0x28]
0x00e94656: cmp    r12d,0x2
0x00e9465a: jl     0x140e9466b
0x00e9465c: mov    r8d,0xb
0x00e94662: lea    rdx,[rip+0x8bc717]        # 0x141750d80 ; literal="lines don't"
0x00e94669: jmp    0x140e94678
0x00e9466b: mov    r8d,0xc
0x00e94671: lea    rdx,[rip+0x8bc750]        # 0x141750dc8 ; literal="line doesn't"
0x00e94678: call   0x140071040
0x00e9467d: mov    r8d,0x1b
0x00e94683: lea    rdx,[rip+0x8bd49e]        # 0x141751b28 ; literal=" need to match perfectly.  "
0x00e9468a: lea    rcx,[rbp+0x28]
0x00e9468e: call   0x140071040
0x00e94693: movzx  esi,BYTE PTR [rsp+0x30]
0x00e94698: jmp    0x140e9469d
0x00e9469a: mov    r13,r15
0x00e9469d: mov    r14,QWORD PTR [rsp+0x68]
0x00e946a2: mov    r12,QWORD PTR [rbp-0x50]
0x00e946a6: cmp    QWORD PTR [rbp+0x38],0x0
0x00e946ab: je     0x140e946e0
0x00e946ad: mov    rax,QWORD PTR [r14+0x8]
0x00e946b1: sub    rax,QWORD PTR [r14]
0x00e946b4: sar    rax,0x3
0x00e946b8: cmp    rax,0x2
0x00e946bc: jb     0x140e946d3
0x00e946be: mov    r8d,0x3
0x00e946c4: lea    rdx,[rip+0x784805]        # 0x141618ed0 ; literal="[B]"
0x00e946cb: mov    rcx,r12
0x00e946ce: call   0x140071040
0x00e946d3: lea    rdx,[rbp+0x28]
0x00e946d7: mov    rcx,r12
0x00e946da: call   0x1400bb340
0x00e946df: nop
0x00e946e0: lea    rcx,[rbp+0x28]
0x00e946e4: call   0x140070e80
0x00e946e9: mov    rcx,QWORD PTR [rbp-0x80]
0x00e946ed: add    rcx,0x8
0x00e946f1: inc    DWORD PTR [rsp+0x50]
0x00e946f5: inc    DWORD PTR [rbp-0x40]
0x00e946f8: inc    DWORD PTR [rbp-0x3c]
0x00e946fb: jmp    0x140e90b1c
0x00e94700: lea    rcx,[rbp+0xe8]
0x00e94707: call   0x140069460
0x00e9470c: mov    rcx,QWORD PTR [rbp+0x2d0]
0x00e94713: xor    rcx,rsp
0x00e94716: call   0x1415530b0
0x00e9471b: mov    rbx,QWORD PTR [rsp+0x440]
0x00e94723: movaps xmm6,XMMWORD PTR [rsp+0x3e0]
0x00e9472b: add    rsp,0x3f0
0x00e94732: pop    r15
0x00e94734: pop    r14
0x00e94736: pop    r13
0x00e94738: pop    r12
0x00e9473a: pop    rdi
0x00e9473b: pop    rsi
0x00e9473c: pop    rbp
0x00e9473d: ret
0x00e9473e: xchg   ax,ax
