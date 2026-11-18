0x1413812a0: mov    QWORD PTR [rsp+0x8],rbx
0x1413812a5: mov    DWORD PTR [rsp+0x20],r9d
0x1413812aa: mov    DWORD PTR [rsp+0x18],r8d
0x1413812af: mov    WORD PTR [rsp+0x10],dx
0x1413812b4: push   rbp
0x1413812b5: push   rsi
0x1413812b6: push   rdi
0x1413812b7: push   r12
0x1413812b9: push   r13
0x1413812bb: push   r14
0x1413812bd: push   r15
0x1413812bf: mov    rbp,rsp
0x1413812c2: sub    rsp,0x80
0x1413812c9: mov    eax,0xffffffff
0x1413812ce: xor    r12d,r12d
0x1413812d1: mov    ebx,r8d
0x1413812d4: mov    DWORD PTR [rbp-0x14],eax
0x1413812d7: movsx  r8,dx
0x1413812db: mov    r15d,r9d
0x1413812de: mov    DWORD PTR [rbp-0x10],eax
0x1413812e1: mov    rdi,rcx
0x1413812e4: mov    DWORD PTR [rbp-0xc],eax
0x1413812e7: mov    esi,r12d
0x1413812ea: mov    DWORD PTR [rbp-0x20],eax
0x1413812ed: mov    r14,r8
0x1413812f0: mov    DWORD PTR [rbp-0x1c],eax
0x1413812f3: mov    r9d,0x64
0x1413812f9: mov    DWORD PTR [rbp-0x18],eax
0x1413812fc: lea    rdx,[rip+0xfffffffffec7ecfd]        # 0x140000000
0x141381303: mov    DWORD PTR [rbp-0x8],r8d
0x141381307: cmp    r8d,0x3b
0x14138130b: ja     0x141382cc9
0x141381311: mov    ecx,DWORD PTR [rdx+r8*4+0x1383e2c]
0x141381319: add    rcx,rdx
0x14138131c: jmp    rcx
0x14138131e: mov    edx,0x76
0x141381323: mov    rcx,rdi
0x141381326: call   0x1413570b0
0x14138132b: mov    edx,0x75
0x141381330: mov    rcx,rdi
0x141381333: mov    ebx,eax
0x141381335: call   0x1413570b0
0x14138133a: mov    rdx,QWORD PTR [rdi+0xa98]
0x141381341: mov    esi,eax
0x141381343: mov    r15d,DWORD PTR [rbp+0x90]
0x14138134a: sar    esi,0x2
0x14138134d: cmp    esi,ebx
0x14138134f: cmovle esi,ebx
0x141381352: test   rdx,rdx
0x141381355: jne    0x14138135c
0x141381357: mov    ecx,r12d
0x14138135a: jmp    0x141381393
0x14138135c: cmp    WORD PTR [rdi+0x360],0x8
0x141381364: jne    0x14138136b
0x141381366: mov    ecx,r12d
0x141381369: jmp    0x141381393
0x14138136b: mov    rdx,QWORD PTR [rdx+0xcb0]
0x141381372: test   rdx,rdx
0x141381375: jne    0x14138137c
0x141381377: mov    ecx,r12d
0x14138137a: jmp    0x141381393
0x14138137c: add    rdx,0x30
0x141381380: mov    ecx,r15d
0x141381383: call   0x1400bb3f0
0x141381388: mov    ecx,r12d
0x14138138b: test   rax,rax
0x14138138e: je     0x141381393
0x141381390: mov    ecx,DWORD PTR [rax+0x4]
0x141381393: mov    rdx,rdi
0x141381396: lea    r9,[rbp-0xc]
0x14138139a: mov    eax,0x360
0x14138139f: lea    r8,[rbp-0x10]
0x1413813a3: lea    r14,[rax+rdx*1]
0x1413813a7: lea    eax,[rsi+0x1]
0x1413813aa: add    eax,ecx
0x1413813ac: mov    ecx,0x76
0x1413813b1: cdq
0x1413813b2: sub    eax,edx
0x1413813b4: lea    rdx,[rbp-0x14]
0x1413813b8: sar    eax,1
0x1413813ba: mov    esi,eax
0x1413813bc: lea    rax,[rbp-0x18]
0x1413813c0: mov    QWORD PTR [rsp+0x30],rax
0x1413813c5: lea    rax,[rbp-0x1c]
0x1413813c9: mov    QWORD PTR [rsp+0x28],rax
0x1413813ce: lea    rax,[rbp-0x20]
0x1413813d2: mov    QWORD PTR [rsp+0x20],rax
0x1413813d7: call   0x14078eb10
0x1413813dc: mov    ebx,DWORD PTR [rbp+0x68]
0x1413813df: test   ebx,ebx
0x1413813e1: je     0x141381430
0x1413813e3: cmp    WORD PTR [rdi+0x800],r12w
0x1413813eb: jg     0x141381430
0x1413813ed: mov    edx,0x76
0x1413813f2: mov    r8d,ebx
0x1413813f5: mov    rcx,rdi
0x1413813f8: call   0x141354400
0x1413813fd: mov    edx,0x75
0x141381402: mov    r8d,ebx
0x141381405: mov    rcx,rdi
0x141381408: call   0x141354400
0x14138140d: mov    rcx,QWORD PTR [rdi+0xa98]
0x141381414: test   rcx,rcx
0x141381417: je     0x141381430
0x141381419: cmp    WORD PTR [r14],0x8
0x14138141e: je     0x141381430
0x141381420: mov    r8d,r15d
0x141381423: mov    edx,0x2
0x141381428: mov    r9d,ebx
0x14138142b: call   0x141101360
0x141381430: mov    r15d,DWORD PTR [rbp+0x58]
0x141381434: mov    r14d,DWORD PTR [rbp-0x8]
0x141381438: mov    ebx,DWORD PTR [rbp+0x50]
0x14138143b: mov    r13,QWORD PTR [rbp+0x70]
0x14138143f: movzx  r8d,WORD PTR [rbp+0x48]
0x141381444: cmp    WORD PTR [rdi+0x814],0x0
0x14138144c: mov    r12d,DWORD PTR [rbp+0x80]
0x141381453: jne    0x141381461
0x141381455: test   r12b,0x1
0x141381459: je     0x141381461
0x14138145b: lea    eax,[rsi+0x1]
0x14138145e: lea    esi,[rax+rax*4]
0x141381461: cmp    r8w,0x4
0x141381466: jne    0x14138147b
0x141381468: mov    eax,esi
0x14138146a: cdq
0x14138146b: sub    eax,edx
0x14138146d: sar    eax,1
0x14138146f: mov    esi,eax
0x141381471: mov    eax,ebx
0x141381473: cdq
0x141381474: sub    eax,edx
0x141381476: sar    eax,1
0x141381478: lea    ebx,[rax+0x1]
0x14138147b: mov    r8d,r15d
0x14138147e: mov    edx,esi
0x141381480: mov    ecx,ebx
0x141381482: call   0x141337b30
0x141381487: mov    r15,QWORD PTR [rbp+0x78]
0x14138148b: mov    ebx,eax
0x14138148d: mov    DWORD PTR [rbp-0x8],eax
0x141381490: test   r13,r13
0x141381493: jne    0x14138149e
0x141381495: test   r15,r15
0x141381498: je     0x141382dab
0x14138149e: mov    r8,r15
0x1413814a1: lea    rcx,[rbp-0x8]
0x1413814a5: mov    rdx,r13
0x1413814a8: call   0x141380430
0x1413814ad: test   r15,r15
0x1413814b0: jne    0x141382cd2
0x1413814b6: xor    esi,esi
0x1413814b8: mov    ebx,esi
0x1413814ba: jmp    0x141382d26
0x1413814bf: mov    r14,QWORD PTR [rbp+0x70]
0x1413814c3: test   r14,r14
0x1413814c6: je     0x14138165d
0x1413814cc: mov    rax,QWORD PTR [r14]
0x1413814cf: mov    rcx,r14
0x1413814d2: call   QWORD PTR [rax]
0x1413814d4: cmp    ax,0xd
0x1413814d8: jne    0x14138165d
0x1413814de: mov    rax,QWORD PTR [rdi+0xa98]
0x1413814e5: mov    r14,QWORD PTR [r14+0xe8]
0x1413814ec: test   rax,rax
0x1413814ef: je     0x141381519
0x1413814f1: cmp    WORD PTR [rdi+0x360],0x8
0x1413814f9: je     0x141381519
0x1413814fb: mov    rdx,QWORD PTR [rax+0xcb0]
0x141381502: test   rdx,rdx
0x141381505: je     0x141381519
0x141381507: movsx  ecx,WORD PTR [r14+0x28]
0x14138150c: call   0x1400bb3f0
0x141381511: test   rax,rax
0x141381514: je     0x141381519
0x141381516: mov    esi,DWORD PTR [rax+0x4]
0x141381519: movzx  edx,WORD PTR [r14+0xb8]
0x141381521: mov    rcx,rdi
0x141381524: mov    eax,0x360
0x141381529: lea    r15,[rcx+rax*1]
0x14138152d: call   0x1413570b0
0x141381532: mov    ebx,eax
0x141381534: mov    edx,0x75
0x141381539: mov    rcx,rdi
0x14138153c: sar    ebx,1
0x14138153e: call   0x1413570b0
0x141381543: mov    rdx,QWORD PTR [rdi+0xa98]
0x14138154a: mov    r12d,eax
0x14138154d: mov    r13d,DWORD PTR [rbp+0x90]
0x141381554: sar    r12d,0x2
0x141381558: cmp    ebx,esi
0x14138155a: cmovle ebx,esi
0x14138155d: cmp    r12d,ebx
0x141381560: cmovle r12d,ebx
0x141381564: test   rdx,rdx
0x141381567: jne    0x14138156d
0x141381569: xor    eax,eax
0x14138156b: jmp    0x14138159c
0x14138156d: cmp    WORD PTR [r15],0x8
0x141381572: jne    0x141381578
0x141381574: xor    eax,eax
0x141381576: jmp    0x14138159c
0x141381578: mov    rdx,QWORD PTR [rdx+0xcb0]
0x14138157f: test   rdx,rdx
0x141381582: jne    0x141381588
0x141381584: xor    eax,eax
0x141381586: jmp    0x14138159c
0x141381588: add    rdx,0x30
0x14138158c: mov    ecx,r13d
0x14138158f: call   0x1400bb3f0
0x141381594: test   rax,rax
0x141381597: je     0x14138159c
0x141381599: mov    eax,DWORD PTR [rax+0x4]
0x14138159c: movzx  ecx,WORD PTR [r14+0xb8]
0x1413815a4: lea    r9,[rbp-0xc]
0x1413815a8: inc    eax
0x1413815aa: lea    r8,[rbp-0x10]
0x1413815ae: add    eax,r12d
0x1413815b1: cdq
0x1413815b2: sub    eax,edx
0x1413815b4: lea    rdx,[rbp-0x14]
0x1413815b8: sar    eax,1
0x1413815ba: mov    esi,eax
0x1413815bc: lea    rax,[rbp-0x18]
0x1413815c0: mov    QWORD PTR [rsp+0x30],rax
0x1413815c5: lea    rax,[rbp-0x1c]
0x1413815c9: mov    QWORD PTR [rsp+0x28],rax
0x1413815ce: lea    rax,[rbp-0x20]
0x1413815d2: mov    QWORD PTR [rsp+0x20],rax
0x1413815d7: call   0x14078eb10
0x1413815dc: mov    ebx,DWORD PTR [rbp+0x68]
0x1413815df: test   ebx,ebx
0x1413815e1: je     0x141381430
0x1413815e7: cmp    WORD PTR [rdi+0x800],0x0
0x1413815ef: jg     0x141381430
0x1413815f5: movzx  edx,WORD PTR [r14+0xb8]
0x1413815fd: mov    r8d,ebx
0x141381600: mov    rcx,rdi
0x141381603: call   0x141354400
0x141381608: mov    edx,0x75
0x14138160d: mov    r8d,ebx
0x141381610: mov    rcx,rdi
0x141381613: call   0x141354400
0x141381618: mov    rcx,QWORD PTR [rdi+0xa98]
0x14138161f: test   rcx,rcx
0x141381622: je     0x14138163a
0x141381624: cmp    WORD PTR [r15],0x8
0x141381629: je     0x14138163a
0x14138162b: movsx  r8d,WORD PTR [r14+0x28]
0x141381630: mov    r9d,ebx
0x141381633: xor    edx,edx
0x141381635: call   0x141101360
0x14138163a: mov    rcx,QWORD PTR [rdi+0xa98]
0x141381641: test   rcx,rcx
0x141381644: je     0x141381430
0x14138164a: cmp    WORD PTR [r15],0x8
0x14138164f: je     0x141381430
0x141381655: mov    r8d,r13d
0x141381658: jmp    0x141381423
0x14138165d: xor    eax,eax
0x14138165f: jmp    0x141383e0f
0x141381664: mov    edx,0x74
0x141381669: mov    rcx,rdi
0x14138166c: call   0x1413570b0
0x141381671: mov    rdx,QWORD PTR [rdi+0xa98]
0x141381678: mov    ebx,eax
0x14138167a: mov    r14d,DWORD PTR [rbp+0x90]
0x141381681: test   rdx,rdx
0x141381684: jne    0x14138168b
0x141381686: mov    ecx,r12d
0x141381689: jmp    0x1413816c2
0x14138168b: cmp    WORD PTR [rdi+0x360],0x8
0x141381693: jne    0x14138169a
0x141381695: mov    ecx,r12d
0x141381698: jmp    0x1413816c2
0x14138169a: mov    rdx,QWORD PTR [rdx+0xcb0]
0x1413816a1: test   rdx,rdx
0x1413816a4: jne    0x1413816ab
0x1413816a6: mov    ecx,r12d
0x1413816a9: jmp    0x1413816c2
0x1413816ab: add    rdx,0x48
0x1413816af: mov    ecx,r14d
0x1413816b2: call   0x1400bb3f0
0x1413816b7: mov    ecx,r12d
0x1413816ba: test   rax,rax
0x1413816bd: je     0x1413816c2
0x1413816bf: mov    ecx,DWORD PTR [rax+0x4]
0x1413816c2: mov    rdx,rdi
0x1413816c5: mov    eax,0x360
0x1413816ca: lea    r15,[rdx+rax*1]
0x1413816ce: lea    eax,[rbx+0x1]
0x1413816d1: add    eax,ecx
0x1413816d3: lea    r9,[rbp-0xc]
0x1413816d7: cdq
0x1413816d8: lea    r8,[rbp-0x10]
0x1413816dc: sub    eax,edx
0x1413816de: mov    ecx,0x74
0x1413816e3: sar    eax,1
0x1413816e5: lea    rdx,[rbp-0x14]
0x1413816e9: mov    esi,eax
0x1413816eb: lea    rax,[rbp-0x18]
0x1413816ef: mov    QWORD PTR [rsp+0x30],rax
0x1413816f4: lea    rax,[rbp-0x1c]
0x1413816f8: mov    QWORD PTR [rsp+0x28],rax
0x1413816fd: lea    rax,[rbp-0x20]
0x141381701: mov    QWORD PTR [rsp+0x20],rax
0x141381706: call   0x14078eb10
0x14138170b: mov    ebx,DWORD PTR [rbp+0x68]
0x14138170e: test   ebx,ebx
0x141381710: je     0x141381430
0x141381716: cmp    WORD PTR [rdi+0x800],r12w
0x14138171e: jg     0x141381430
0x141381724: mov    edx,0x74
0x141381729: mov    r8d,ebx
0x14138172c: mov    rcx,rdi
0x14138172f: call   0x141354400
0x141381734: mov    rcx,QWORD PTR [rdi+0xa98]
0x14138173b: test   rcx,rcx
0x14138173e: je     0x141381430
0x141381744: cmp    WORD PTR [r15],0x8
0x141381749: je     0x141381430
0x14138174f: mov    r8d,r14d
0x141381752: mov    edx,0x3
0x141381757: jmp    0x141381428
0x14138175c: mov    edx,0x5c
0x141381761: mov    rcx,rdi
0x141381764: call   0x1413570b0
0x141381769: mov    edx,0x5a
0x14138176e: mov    rcx,rdi
0x141381771: mov    ebx,eax
0x141381773: call   0x1413570b0
0x141381778: mov    r14d,DWORD PTR [rbp+0x90]
0x14138177f: mov    esi,eax
0x141381781: sar    esi,0x2
0x141381784: cmp    esi,ebx
0x141381786: cmovle esi,ebx
0x141381789: cmp    r14d,0xffffffff
0x14138178d: je     0x1413817e4
0x14138178f: mov    rax,QWORD PTR [rdi+0xa98]
0x141381796: test   rax,rax
0x141381799: jne    0x1413817a0
0x14138179b: mov    eax,r12d
0x14138179e: jmp    0x1413817d9
0x1413817a0: cmp    WORD PTR [rdi+0x360],0x8
0x1413817a8: jne    0x1413817af
0x1413817aa: mov    eax,r12d
0x1413817ad: jmp    0x1413817d9
0x1413817af: mov    rdx,QWORD PTR [rax+0xcb0]
0x1413817b6: test   rdx,rdx
0x1413817b9: jne    0x1413817c0
0x1413817bb: mov    eax,r12d
0x1413817be: jmp    0x1413817d9
0x1413817c0: add    rdx,0x18
0x1413817c4: mov    ecx,r14d
0x1413817c7: call   0x1400bb3f0
0x1413817cc: test   rax,rax
0x1413817cf: jne    0x1413817d6
0x1413817d1: mov    eax,r12d
0x1413817d4: jmp    0x1413817d9
0x1413817d6: mov    eax,DWORD PTR [rax+0x4]
0x1413817d9: inc    esi
0x1413817db: add    eax,esi
0x1413817dd: cdq
0x1413817de: sub    eax,edx
0x1413817e0: sar    eax,1
0x1413817e2: mov    esi,eax
0x1413817e4: lea    rax,[rbp-0x18]
0x1413817e8: mov    ecx,0x5c
0x1413817ed: mov    QWORD PTR [rsp+0x30],rax
0x1413817f2: lea    r9,[rbp-0xc]
0x1413817f6: lea    rax,[rbp-0x1c]
0x1413817fa: mov    QWORD PTR [rsp+0x28],rax
0x1413817ff: lea    r8,[rbp-0x10]
0x141381803: lea    rax,[rbp-0x20]
0x141381807: lea    rdx,[rbp-0x14]
0x14138180b: mov    QWORD PTR [rsp+0x20],rax
0x141381810: call   0x14078eb10
0x141381815: mov    ebx,DWORD PTR [rbp+0x68]
0x141381818: test   ebx,ebx
0x14138181a: je     0x141381434
0x141381820: cmp    WORD PTR [rdi+0x800],r12w
0x141381828: jg     0x141381434
0x14138182e: mov    edx,0x5c
0x141381833: mov    r8d,ebx
0x141381836: mov    rcx,rdi
0x141381839: call   0x141354400
0x14138183e: mov    eax,ebx
0x141381840: mov    rcx,rdi
0x141381843: cdq
0x141381844: and    edx,0x3
0x141381847: lea    r8d,[rdx+rax*1]
0x14138184b: mov    edx,0x5a
0x141381850: sar    r8d,0x2
0x141381854: call   0x141354400
0x141381859: cmp    r14d,0xffffffff
0x14138185d: je     0x141381434
0x141381863: mov    rcx,QWORD PTR [rdi+0xa98]
0x14138186a: test   rcx,rcx
0x14138186d: je     0x141381434
0x141381873: cmp    WORD PTR [rdi+0x360],0x8
0x14138187b: je     0x141381434
0x141381881: mov    r9d,ebx
0x141381884: mov    r8d,r14d
0x141381887: mov    edx,0x1
0x14138188c: call   0x141101360
0x141381891: jmp    0x141381434
0x141381896: mov    edx,0x48
0x14138189b: mov    rcx,rdi
0x14138189e: call   0x1413570b0
0x1413818a3: mov    esi,eax
0x1413818a5: lea    r9,[rbp-0xc]
0x1413818a9: lea    rax,[rbp-0x18]
0x1413818ad: mov    ecx,0x48
0x1413818b2: mov    QWORD PTR [rsp+0x30],rax
0x1413818b7: lea    r8,[rbp-0x10]
0x1413818bb: lea    rax,[rbp-0x1c]
0x1413818bf: mov    QWORD PTR [rsp+0x28],rax
0x1413818c4: lea    rdx,[rbp-0x14]
0x1413818c8: lea    rax,[rbp-0x20]
0x1413818cc: mov    QWORD PTR [rsp+0x20],rax
0x1413818d1: call   0x14078eb10
0x1413818d6: mov    r8d,DWORD PTR [rbp+0x68]
0x1413818da: test   r8d,r8d
0x1413818dd: je     0x14138143b
0x1413818e3: cmp    WORD PTR [rdi+0x800],r12w
0x1413818eb: jg     0x14138143b
0x1413818f1: mov    edx,0x48
0x1413818f6: mov    rcx,rdi
0x1413818f9: call   0x141354400
0x1413818fe: jmp    0x14138143b
0x141381903: mov    edx,0x46
0x141381908: mov    rcx,rdi
0x14138190b: call   0x1413570b0
0x141381910: mov    esi,eax
0x141381912: lea    r9,[rbp-0xc]
0x141381916: lea    rax,[rbp-0x18]
0x14138191a: mov    ecx,0x46
0x14138191f: mov    QWORD PTR [rsp+0x30],rax
0x141381924: lea    r8,[rbp-0x10]
0x141381928: lea    rax,[rbp-0x1c]
0x14138192c: mov    QWORD PTR [rsp+0x28],rax
0x141381931: lea    rdx,[rbp-0x14]
0x141381935: lea    rax,[rbp-0x20]
0x141381939: mov    QWORD PTR [rsp+0x20],rax
0x14138193e: call   0x14078eb10
0x141381943: mov    r8d,DWORD PTR [rbp+0x68]
0x141381947: test   r8d,r8d
0x14138194a: je     0x14138143b
0x141381950: cmp    WORD PTR [rdi+0x800],r12w
0x141381958: jg     0x14138143b
0x14138195e: mov    edx,0x46
0x141381963: mov    rcx,rdi
0x141381966: call   0x141354400
0x14138196b: jmp    0x14138143b
0x141381970: mov    edx,0x4d
0x141381975: mov    rcx,rdi
0x141381978: call   0x1413570b0
0x14138197d: mov    esi,eax
0x14138197f: lea    r9,[rbp-0xc]
0x141381983: lea    rax,[rbp-0x18]
0x141381987: mov    ecx,0x4d
0x14138198c: mov    QWORD PTR [rsp+0x30],rax
0x141381991: lea    r8,[rbp-0x10]
0x141381995: lea    rax,[rbp-0x1c]
0x141381999: mov    QWORD PTR [rsp+0x28],rax
0x14138199e: lea    rdx,[rbp-0x14]
0x1413819a2: lea    rax,[rbp-0x20]
0x1413819a6: mov    QWORD PTR [rsp+0x20],rax
0x1413819ab: call   0x14078eb10
0x1413819b0: mov    r8d,DWORD PTR [rbp+0x68]
0x1413819b4: test   r8d,r8d
0x1413819b7: je     0x14138143b
0x1413819bd: cmp    WORD PTR [rdi+0x800],r12w
0x1413819c5: jg     0x14138143b
0x1413819cb: mov    edx,0x4d
0x1413819d0: mov    rcx,rdi
0x1413819d3: call   0x141354400
0x1413819d8: jmp    0x14138143b
0x1413819dd: mov    edx,0x50
0x1413819e2: mov    rcx,rdi
0x1413819e5: call   0x1413570b0
0x1413819ea: mov    esi,eax
0x1413819ec: lea    r9,[rbp-0xc]
0x1413819f0: lea    rax,[rbp-0x18]
0x1413819f4: mov    ecx,0x50
0x1413819f9: mov    QWORD PTR [rsp+0x30],rax
0x1413819fe: lea    r8,[rbp-0x10]
0x141381a02: lea    rax,[rbp-0x1c]
0x141381a06: mov    QWORD PTR [rsp+0x28],rax
0x141381a0b: lea    rdx,[rbp-0x14]
0x141381a0f: lea    rax,[rbp-0x20]
0x141381a13: mov    QWORD PTR [rsp+0x20],rax
0x141381a18: call   0x14078eb10
0x141381a1d: mov    r8d,DWORD PTR [rbp+0x68]
0x141381a21: test   r8d,r8d
0x141381a24: je     0x14138143b
0x141381a2a: cmp    WORD PTR [rdi+0x800],r12w
0x141381a32: jg     0x14138143b
0x141381a38: mov    edx,0x50
0x141381a3d: mov    rcx,rdi
0x141381a40: call   0x141354400
0x141381a45: jmp    0x14138143b
0x141381a4a: mov    edx,0x4e
0x141381a4f: mov    rcx,rdi
0x141381a52: call   0x1413570b0
0x141381a57: mov    esi,eax
0x141381a59: lea    r9,[rbp-0xc]
0x141381a5d: lea    rax,[rbp-0x18]
0x141381a61: mov    ecx,0x4e
0x141381a66: mov    QWORD PTR [rsp+0x30],rax
0x141381a6b: lea    r8,[rbp-0x10]
0x141381a6f: lea    rax,[rbp-0x1c]
0x141381a73: mov    QWORD PTR [rsp+0x28],rax
0x141381a78: lea    rdx,[rbp-0x14]
0x141381a7c: lea    rax,[rbp-0x20]
0x141381a80: mov    QWORD PTR [rsp+0x20],rax
0x141381a85: call   0x14078eb10
0x141381a8a: mov    r8d,DWORD PTR [rbp+0x68]
0x141381a8e: test   r8d,r8d
0x141381a91: je     0x14138143b
0x141381a97: cmp    WORD PTR [rdi+0x800],r12w
0x141381a9f: jg     0x14138143b
0x141381aa5: mov    edx,0x4e
0x141381aaa: mov    rcx,rdi
0x141381aad: call   0x141354400
0x141381ab2: jmp    0x14138143b
0x141381ab7: mov    edx,0x4f
0x141381abc: mov    rcx,rdi
0x141381abf: call   0x1413570b0
0x141381ac4: mov    esi,eax
0x141381ac6: lea    r9,[rbp-0xc]
0x141381aca: lea    rax,[rbp-0x18]
0x141381ace: mov    ecx,0x4f
0x141381ad3: mov    QWORD PTR [rsp+0x30],rax
0x141381ad8: lea    r8,[rbp-0x10]
0x141381adc: lea    rax,[rbp-0x1c]
0x141381ae0: mov    QWORD PTR [rsp+0x28],rax
0x141381ae5: lea    rdx,[rbp-0x14]
0x141381ae9: lea    rax,[rbp-0x20]
0x141381aed: mov    QWORD PTR [rsp+0x20],rax
0x141381af2: call   0x14078eb10
0x141381af7: mov    r8d,DWORD PTR [rbp+0x68]
0x141381afb: test   r8d,r8d
0x141381afe: je     0x14138143b
0x141381b04: cmp    WORD PTR [rdi+0x800],r12w
0x141381b0c: jg     0x14138143b
0x141381b12: mov    edx,0x4f
0x141381b17: mov    rcx,rdi
0x141381b1a: call   0x141354400
0x141381b1f: jmp    0x14138143b
0x141381b24: mov    edx,0x51
0x141381b29: mov    rcx,rdi
0x141381b2c: call   0x1413570b0
0x141381b31: mov    esi,eax
0x141381b33: lea    r9,[rbp-0xc]
0x141381b37: lea    rax,[rbp-0x18]
0x141381b3b: mov    ecx,0x51
0x141381b40: mov    QWORD PTR [rsp+0x30],rax
0x141381b45: lea    r8,[rbp-0x10]
0x141381b49: lea    rax,[rbp-0x1c]
0x141381b4d: mov    QWORD PTR [rsp+0x28],rax
0x141381b52: lea    rdx,[rbp-0x14]
0x141381b56: lea    rax,[rbp-0x20]
0x141381b5a: mov    QWORD PTR [rsp+0x20],rax
0x141381b5f: call   0x14078eb10
0x141381b64: mov    r8d,DWORD PTR [rbp+0x68]
0x141381b68: test   r8d,r8d
0x141381b6b: je     0x14138143b
0x141381b71: cmp    WORD PTR [rdi+0x800],r12w
0x141381b79: jg     0x14138143b
0x141381b7f: mov    edx,0x51
0x141381b84: mov    rcx,rdi
0x141381b87: call   0x141354400
0x141381b8c: jmp    0x14138143b
0x141381b91: mov    edx,0x52
0x141381b96: mov    rcx,rdi
0x141381b99: call   0x1413570b0
0x141381b9e: mov    esi,eax
0x141381ba0: lea    r9,[rbp-0xc]
0x141381ba4: lea    rax,[rbp-0x18]
0x141381ba8: mov    ecx,0x52
0x141381bad: mov    QWORD PTR [rsp+0x30],rax
0x141381bb2: lea    r8,[rbp-0x10]
0x141381bb6: lea    rax,[rbp-0x1c]
0x141381bba: mov    QWORD PTR [rsp+0x28],rax
0x141381bbf: lea    rdx,[rbp-0x14]
0x141381bc3: lea    rax,[rbp-0x20]
0x141381bc7: mov    QWORD PTR [rsp+0x20],rax
0x141381bcc: call   0x14078eb10
0x141381bd1: mov    r8d,DWORD PTR [rbp+0x68]
0x141381bd5: test   r8d,r8d
0x141381bd8: je     0x14138143b
0x141381bde: cmp    WORD PTR [rdi+0x800],r12w
0x141381be6: jg     0x14138143b
0x141381bec: mov    edx,0x52
0x141381bf1: mov    rcx,rdi
0x141381bf4: call   0x141354400
0x141381bf9: jmp    0x14138143b
0x141381bfe: mov    edx,0x4c
0x141381c03: mov    rcx,rdi
0x141381c06: call   0x1413570b0
0x141381c0b: mov    esi,eax
0x141381c0d: lea    r9,[rbp-0xc]
0x141381c11: lea    rax,[rbp-0x18]
0x141381c15: mov    ecx,0x4c
0x141381c1a: mov    QWORD PTR [rsp+0x30],rax
0x141381c1f: lea    r8,[rbp-0x10]
0x141381c23: lea    rax,[rbp-0x1c]
0x141381c27: mov    QWORD PTR [rsp+0x28],rax
0x141381c2c: lea    rdx,[rbp-0x14]
0x141381c30: lea    rax,[rbp-0x20]
0x141381c34: mov    QWORD PTR [rsp+0x20],rax
0x141381c39: call   0x14078eb10
0x141381c3e: mov    r8d,DWORD PTR [rbp+0x68]
0x141381c42: test   r8d,r8d
0x141381c45: je     0x14138143b
0x141381c4b: cmp    WORD PTR [rdi+0x800],r12w
0x141381c53: jg     0x14138143b
0x141381c59: mov    edx,0x4c
0x141381c5e: mov    rcx,rdi
0x141381c61: call   0x141354400
0x141381c66: jmp    0x14138143b
0x141381c6b: mov    edx,0x85
0x141381c70: mov    rcx,rdi
0x141381c73: call   0x1413570b0
0x141381c78: mov    esi,eax
0x141381c7a: lea    r9,[rbp-0xc]
0x141381c7e: lea    rax,[rbp-0x18]
0x141381c82: mov    ecx,0x85
0x141381c87: mov    QWORD PTR [rsp+0x30],rax
0x141381c8c: lea    r8,[rbp-0x10]
0x141381c90: lea    rax,[rbp-0x1c]
0x141381c94: mov    QWORD PTR [rsp+0x28],rax
0x141381c99: lea    rdx,[rbp-0x14]
0x141381c9d: lea    rax,[rbp-0x20]
0x141381ca1: mov    QWORD PTR [rsp+0x20],rax
0x141381ca6: call   0x14078eb10
0x141381cab: mov    r8d,DWORD PTR [rbp+0x68]
0x141381caf: test   r8d,r8d
0x141381cb2: je     0x14138143b
0x141381cb8: cmp    WORD PTR [rdi+0x800],r12w
0x141381cc0: jg     0x14138143b
0x141381cc6: mov    edx,0x85
0x141381ccb: mov    rcx,rdi
0x141381cce: call   0x141354400
0x141381cd3: jmp    0x14138143b
0x141381cd8: mov    edx,0x5c
0x141381cdd: mov    rcx,rdi
0x141381ce0: call   0x1413570b0
0x141381ce5: mov    esi,eax
0x141381ce7: lea    r9,[rbp-0xc]
0x141381ceb: lea    rax,[rbp-0x18]
0x141381cef: mov    ecx,0x5c
0x141381cf4: mov    QWORD PTR [rsp+0x30],rax
0x141381cf9: lea    r8,[rbp-0x10]
0x141381cfd: lea    rax,[rbp-0x1c]
0x141381d01: mov    QWORD PTR [rsp+0x28],rax
0x141381d06: lea    rdx,[rbp-0x14]
0x141381d0a: lea    rax,[rbp-0x20]
0x141381d0e: mov    QWORD PTR [rsp+0x20],rax
0x141381d13: call   0x14078eb10
0x141381d18: mov    r8d,DWORD PTR [rbp+0x68]
0x141381d1c: test   r8d,r8d
0x141381d1f: je     0x14138143b
0x141381d25: cmp    WORD PTR [rdi+0x800],r12w
0x141381d2d: jg     0x14138143b
0x141381d33: mov    edx,0x5c
0x141381d38: mov    rcx,rdi
0x141381d3b: call   0x141354400
0x141381d40: jmp    0x14138143b
0x141381d45: mov    edx,0x59
0x141381d4a: mov    rcx,rdi
0x141381d4d: call   0x1413570b0
0x141381d52: mov    edx,0x58
0x141381d57: mov    rcx,rdi
0x141381d5a: mov    ebx,eax
0x141381d5c: call   0x1413570b0
0x141381d61: mov    esi,eax
0x141381d63: lea    r9,[rbp-0xc]
0x141381d67: lea    rax,[rbp-0x18]
0x141381d6b: sar    esi,0x2
0x141381d6e: mov    QWORD PTR [rsp+0x30],rax
0x141381d73: lea    r8,[rbp-0x10]
0x141381d77: lea    rax,[rbp-0x1c]
0x141381d7b: cmp    esi,ebx
0x141381d7d: mov    QWORD PTR [rsp+0x28],rax
0x141381d82: lea    rdx,[rbp-0x14]
0x141381d86: lea    rax,[rbp-0x20]
0x141381d8a: mov    ecx,0x59
0x141381d8f: mov    QWORD PTR [rsp+0x20],rax
0x141381d94: cmovle esi,ebx
0x141381d97: call   0x14078eb10
0x141381d9c: mov    ebx,DWORD PTR [rbp+0x68]
0x141381d9f: test   ebx,ebx
0x141381da1: je     0x141381438
0x141381da7: cmp    WORD PTR [rdi+0x800],r12w
0x141381daf: jg     0x141381438
0x141381db5: mov    edx,0x59
0x141381dba: mov    r8d,ebx
0x141381dbd: mov    rcx,rdi
0x141381dc0: call   0x141354400
0x141381dc5: mov    eax,ebx
0x141381dc7: mov    rcx,rdi
0x141381dca: cdq
0x141381dcb: and    edx,0x3
0x141381dce: lea    r8d,[rdx+rax*1]
0x141381dd2: mov    edx,0x58
0x141381dd7: sar    r8d,0x2
0x141381ddb: call   0x141354400
0x141381de0: jmp    0x141381438
0x141381de5: mov    edx,0x5a
0x141381dea: mov    rcx,rdi
0x141381ded: call   0x1413570b0
0x141381df2: mov    edx,0x58
0x141381df7: mov    rcx,rdi
0x141381dfa: mov    ebx,eax
0x141381dfc: call   0x1413570b0
0x141381e01: mov    rdx,QWORD PTR [rdi+0xa98]
0x141381e08: mov    esi,eax
0x141381e0a: mov    r15d,DWORD PTR [rbp+0x90]
0x141381e11: sar    esi,0x2
0x141381e14: cmp    esi,ebx
0x141381e16: cmovle esi,ebx
0x141381e19: test   rdx,rdx
0x141381e1c: jne    0x141381e23
0x141381e1e: mov    ecx,r12d
0x141381e21: jmp    0x141381e5a
0x141381e23: cmp    WORD PTR [rdi+0x360],0x8
0x141381e2b: jne    0x141381e32
0x141381e2d: mov    ecx,r12d
0x141381e30: jmp    0x141381e5a
0x141381e32: mov    rdx,QWORD PTR [rdx+0xcb0]
0x141381e39: test   rdx,rdx
0x141381e3c: jne    0x141381e43
0x141381e3e: mov    ecx,r12d
0x141381e41: jmp    0x141381e5a
0x141381e43: add    rdx,0x18
0x141381e47: mov    ecx,r15d
0x141381e4a: call   0x1400bb3f0
0x141381e4f: mov    ecx,r12d
0x141381e52: test   rax,rax
0x141381e55: je     0x141381e5a
0x141381e57: mov    ecx,DWORD PTR [rax+0x4]
0x141381e5a: mov    rdx,rdi
0x141381e5d: lea    r9,[rbp-0xc]
0x141381e61: mov    eax,0x360
0x141381e66: lea    r8,[rbp-0x10]
0x141381e6a: lea    r14,[rax+rdx*1]
0x141381e6e: lea    eax,[rsi+0x1]
0x141381e71: add    eax,ecx
0x141381e73: mov    ecx,0x5a
0x141381e78: cdq
0x141381e79: sub    eax,edx
0x141381e7b: lea    rdx,[rbp-0x14]
0x141381e7f: sar    eax,1
0x141381e81: mov    esi,eax
0x141381e83: lea    rax,[rbp-0x18]
0x141381e87: mov    QWORD PTR [rsp+0x30],rax
0x141381e8c: lea    rax,[rbp-0x1c]
0x141381e90: mov    QWORD PTR [rsp+0x28],rax
0x141381e95: lea    rax,[rbp-0x20]
0x141381e99: mov    QWORD PTR [rsp+0x20],rax
0x141381e9e: call   0x14078eb10
0x141381ea3: mov    ebx,DWORD PTR [rbp+0x68]
0x141381ea6: test   ebx,ebx
0x141381ea8: je     0x141381430
0x141381eae: cmp    WORD PTR [rdi+0x800],r12w
0x141381eb6: jg     0x141381430
0x141381ebc: mov    edx,0x5a
0x141381ec1: mov    r8d,ebx
0x141381ec4: mov    rcx,rdi
0x141381ec7: call   0x141354400
0x141381ecc: mov    eax,ebx
0x141381ece: mov    rcx,rdi
0x141381ed1: cdq
0x141381ed2: and    edx,0x3
0x141381ed5: lea    r8d,[rdx+rax*1]
0x141381ed9: mov    edx,0x58
0x141381ede: sar    r8d,0x2
0x141381ee2: call   0x141354400
0x141381ee7: mov    rcx,QWORD PTR [rdi+0xa98]
0x141381eee: test   rcx,rcx
0x141381ef1: je     0x141381430
0x141381ef7: cmp    WORD PTR [r14],0x8
0x141381efc: je     0x141381430
0x141381f02: mov    r8d,r15d
0x141381f05: mov    edx,0x1
0x141381f0a: jmp    0x141381428
0x141381f0f: mov    edx,0x75
0x141381f14: mov    rcx,rdi
0x141381f17: call   0x1413570b0
0x141381f1c: mov    rdx,QWORD PTR [rdi+0xa98]
0x141381f23: mov    ebx,eax
0x141381f25: mov    r14d,DWORD PTR [rbp+0x90]
0x141381f2c: test   rdx,rdx
0x141381f2f: jne    0x141381f36
0x141381f31: mov    ecx,r12d
0x141381f34: jmp    0x141381f6d
0x141381f36: cmp    WORD PTR [rdi+0x360],0x8
0x141381f3e: jne    0x141381f45
0x141381f40: mov    ecx,r12d
0x141381f43: jmp    0x141381f6d
0x141381f45: mov    rdx,QWORD PTR [rdx+0xcb0]
0x141381f4c: test   rdx,rdx
0x141381f4f: jne    0x141381f56
0x141381f51: mov    ecx,r12d
0x141381f54: jmp    0x141381f6d
0x141381f56: add    rdx,0x30
0x141381f5a: mov    ecx,r14d
0x141381f5d: call   0x1400bb3f0
0x141381f62: mov    ecx,r12d
0x141381f65: test   rax,rax
0x141381f68: je     0x141381f6d
0x141381f6a: mov    ecx,DWORD PTR [rax+0x4]
0x141381f6d: mov    rdx,rdi
0x141381f70: lea    r9,[rbp-0xc]
0x141381f74: mov    eax,0x360
0x141381f79: lea    r8,[rbp-0x10]
0x141381f7d: lea    r15,[rax+rdx*1]
0x141381f81: lea    eax,[rbx+0x1]
0x141381f84: add    eax,ecx
0x141381f86: mov    ecx,0x75
0x141381f8b: cdq
0x141381f8c: sub    eax,edx
0x141381f8e: lea    rdx,[rbp-0x14]
0x141381f92: sar    eax,1
0x141381f94: mov    esi,eax
0x141381f96: lea    rax,[rbp-0x18]
0x141381f9a: mov    QWORD PTR [rsp+0x30],rax
0x141381f9f: lea    rax,[rbp-0x1c]
0x141381fa3: mov    QWORD PTR [rsp+0x28],rax
0x141381fa8: lea    rax,[rbp-0x20]
0x141381fac: mov    QWORD PTR [rsp+0x20],rax
0x141381fb1: call   0x14078eb10
0x141381fb6: mov    ebx,DWORD PTR [rbp+0x68]
0x141381fb9: test   ebx,ebx
0x141381fbb: je     0x141381430
0x141381fc1: cmp    WORD PTR [rdi+0x800],r12w
0x141381fc9: jg     0x141381430
0x141381fcf: mov    edx,0x75
0x141381fd4: mov    r8d,ebx
0x141381fd7: mov    rcx,rdi
0x141381fda: call   0x141354400
0x141381fdf: mov    rcx,QWORD PTR [rdi+0xa98]
0x141381fe6: test   rcx,rcx
0x141381fe9: je     0x141381430
0x141381fef: cmp    WORD PTR [r15],0x8
0x141381ff4: je     0x141381430
0x141381ffa: mov    r8d,r14d
0x141381ffd: jmp    0x141381423
0x141382002: mov    edx,0x74
0x141382007: mov    rcx,rdi
0x14138200a: call   0x1413570b0
0x14138200f: mov    rdx,QWORD PTR [rdi+0xa98]
0x141382016: mov    ebx,eax
0x141382018: mov    r14d,DWORD PTR [rbp+0x90]
0x14138201f: test   rdx,rdx
0x141382022: jne    0x141382038
0x141382024: mov    ecx,r12d
0x141382027: mov    rdx,rdi
0x14138202a: mov    eax,0x360
0x14138202f: lea    r15,[rax+rdx*1]
0x141382033: jmp    0x1413816ce
0x141382038: cmp    WORD PTR [rdi+0x360],0x8
0x141382040: jne    0x141382056
0x141382042: mov    ecx,r12d
0x141382045: mov    rdx,rdi
0x141382048: mov    eax,0x360
0x14138204d: lea    r15,[rax+rdx*1]
0x141382051: jmp    0x1413816ce
0x141382056: mov    rdx,QWORD PTR [rdx+0xcb0]
0x14138205d: test   rdx,rdx
0x141382060: jne    0x141382076
0x141382062: mov    ecx,r12d
0x141382065: mov    rdx,rdi
0x141382068: mov    eax,0x360
0x14138206d: lea    r15,[rax+rdx*1]
0x141382071: jmp    0x1413816ce
0x141382076: add    rdx,0x48
0x14138207a: mov    ecx,r14d
0x14138207d: call   0x1400bb3f0
0x141382082: mov    ecx,r12d
0x141382085: test   rax,rax
0x141382088: je     0x14138208d
0x14138208a: mov    ecx,DWORD PTR [rax+0x4]
0x14138208d: mov    rdx,rdi
0x141382090: mov    eax,0x360
0x141382095: lea    r15,[rax+rdx*1]
0x141382099: jmp    0x1413816ce
0x14138209e: mov    ecx,r8d
0x1413820a1: sub    ecx,0x6
0x1413820a4: je     0x1413820d2
0x1413820a6: sub    ecx,0xc
0x1413820a9: je     0x1413820cc
0x1413820ab: sub    ecx,0x1
0x1413820ae: je     0x1413820c4
0x1413820b0: cmp    ecx,0x1
0x1413820b3: jne    0x1413820bd
0x1413820b5: mov    r14d,0x66
0x1413820bb: jmp    0x1413820d8
0x1413820bd: movzx  r14d,WORD PTR [rbp+0x48]
0x1413820c2: jmp    0x1413820d8
0x1413820c4: mov    r14d,0x65
0x1413820ca: jmp    0x1413820d8
0x1413820cc: movzx  r14d,r9w
0x1413820d0: jmp    0x1413820d8
0x1413820d2: mov    r14d,0x63
0x1413820d8: movzx  edx,r14w
0x1413820dc: mov    rcx,rdi
0x1413820df: call   0x1413570b0
0x1413820e4: mov    edx,0x61
0x1413820e9: mov    rcx,rdi
0x1413820ec: mov    ebx,eax
0x1413820ee: call   0x1413570b0
0x1413820f3: mov    esi,eax
0x1413820f5: lea    r9,[rbp-0xc]
0x1413820f9: lea    rax,[rbp-0x18]
0x1413820fd: sar    esi,0x2
0x141382100: mov    QWORD PTR [rsp+0x30],rax
0x141382105: lea    r8,[rbp-0x10]
0x141382109: lea    rax,[rbp-0x1c]
0x14138210d: cmp    esi,ebx
0x14138210f: mov    QWORD PTR [rsp+0x28],rax
0x141382114: lea    rdx,[rbp-0x14]
0x141382118: lea    rax,[rbp-0x20]
0x14138211c: movzx  ecx,r14w
0x141382120: mov    QWORD PTR [rsp+0x20],rax
0x141382125: cmovle esi,ebx
0x141382128: call   0x14078eb10
0x14138212d: mov    ebx,DWORD PTR [rbp+0x68]
0x141382130: test   ebx,ebx
0x141382132: je     0x141381434
0x141382138: cmp    WORD PTR [rdi+0x800],r12w
0x141382140: jg     0x141381434
0x141382146: mov    r8d,ebx
0x141382149: movzx  edx,r14w
0x14138214d: mov    rcx,rdi
0x141382150: call   0x141354400
0x141382155: mov    edx,0x61
0x14138215a: mov    r8d,ebx
0x14138215d: mov    rcx,rdi
0x141382160: call   0x141354400
0x141382165: jmp    0x141381434
0x14138216a: mov    r13,QWORD PTR [rbp+0x70]
0x14138216e: test   r13,r13
0x141382171: je     0x141381444
0x141382177: mov    rax,QWORD PTR [r13+0x0]
0x14138217b: mov    rcx,r13
0x14138217e: call   QWORD PTR [rax+0x4f0]
0x141382184: movzx  edx,ax
0x141382187: mov    rcx,rdi
0x14138218a: call   0x1413570b0
0x14138218f: mov    edx,0x61
0x141382194: mov    rcx,rdi
0x141382197: mov    ebx,eax
0x141382199: call   0x1413570b0
0x14138219e: mov    rdx,QWORD PTR [r13+0x0]
0x1413821a2: mov    r14d,eax
0x1413821a5: sar    r14d,0x2
0x1413821a9: mov    rcx,r13
0x1413821ac: cmp    r14d,ebx
0x1413821af: cmovle r14d,ebx
0x1413821b3: call   QWORD PTR [rdx+0x4f0]
0x1413821b9: movzx  ebx,ax
0x1413821bc: cmp    ax,0xffff
0x1413821c0: jne    0x1413821c7
0x1413821c2: mov    ebx,0x61
0x1413821c7: lea    rax,[rbp-0x18]
0x1413821cb: movzx  ecx,bx
0x1413821ce: mov    QWORD PTR [rsp+0x30],rax
0x1413821d3: lea    r9,[rbp-0xc]
0x1413821d7: lea    rax,[rbp-0x1c]
0x1413821db: mov    QWORD PTR [rsp+0x28],rax
0x1413821e0: lea    r8,[rbp-0x10]
0x1413821e4: lea    rax,[rbp-0x20]
0x1413821e8: lea    rdx,[rbp-0x14]
0x1413821ec: mov    QWORD PTR [rsp+0x20],rax
0x1413821f1: call   0x14078eb10
0x1413821f6: mov    r15d,DWORD PTR [rbp+0x68]
0x1413821fa: mov    esi,r14d
0x1413821fd: test   r15d,r15d
0x141382200: je     0x141382236
0x141382202: cmp    WORD PTR [rdi+0x800],r12w
0x14138220a: jg     0x141382236
0x14138220c: cmp    bx,0xffff
0x141382210: je     0x141382226
0x141382212: cmp    bx,0x61
0x141382216: je     0x141382226
0x141382218: mov    r8d,r15d
0x14138221b: movzx  edx,bx
0x14138221e: mov    rcx,rdi
0x141382221: call   0x141354400
0x141382226: mov    edx,0x61
0x14138222b: mov    r8d,r15d
0x14138222e: mov    rcx,rdi
0x141382231: call   0x141354400
0x141382236: mov    r14d,DWORD PTR [rbp-0x8]
0x14138223a: mov    ebx,DWORD PTR [rbp+0x50]
0x14138223d: mov    r15d,DWORD PTR [rbp+0x58]
0x141382241: jmp    0x14138143f
0x141382246: mov    r12,QWORD PTR [rbp+0x78]
0x14138224a: test   r12,r12
0x14138224d: je     0x141382cc9
0x141382253: mov    rax,QWORD PTR [r12]
0x141382257: mov    rcx,r12
0x14138225a: call   QWORD PTR [rax+0x4f8]
0x141382260: movzx  edx,ax
0x141382263: mov    rcx,rdi
0x141382266: call   0x1413570b0
0x14138226b: mov    edx,0x62
0x141382270: mov    rcx,rdi
0x141382273: mov    ebx,eax
0x141382275: call   0x1413570b0
0x14138227a: mov    rdx,QWORD PTR [r12]
0x14138227e: mov    r14d,eax
0x141382281: sar    r14d,0x2
0x141382285: mov    rcx,r12
0x141382288: cmp    r14d,ebx
0x14138228b: cmovle r14d,ebx
0x14138228f: call   QWORD PTR [rdx+0x4f8]
0x141382295: movzx  ebx,ax
0x141382298: cmp    ax,0xffff
0x14138229c: jne    0x1413822a3
0x14138229e: mov    ebx,0x62
0x1413822a3: lea    rax,[rbp-0x18]
0x1413822a7: movzx  ecx,bx
0x1413822aa: mov    QWORD PTR [rsp+0x30],rax
0x1413822af: lea    r9,[rbp-0xc]
0x1413822b3: lea    rax,[rbp-0x1c]
0x1413822b7: mov    QWORD PTR [rsp+0x28],rax
0x1413822bc: lea    r8,[rbp-0x10]
0x1413822c0: lea    rax,[rbp-0x20]
0x1413822c4: lea    rdx,[rbp-0x14]
0x1413822c8: mov    QWORD PTR [rsp+0x20],rax
0x1413822cd: call   0x14078eb10
0x1413822d2: mov    r15d,DWORD PTR [rbp+0x68]
0x1413822d6: mov    esi,r14d
0x1413822d9: test   r15d,r15d
0x1413822dc: je     0x141381430
0x1413822e2: cmp    WORD PTR [rdi+0x800],0x0
0x1413822ea: jg     0x141381430
0x1413822f0: cmp    bx,0xffff
0x1413822f4: je     0x14138230a
0x1413822f6: cmp    bx,0x62
0x1413822fa: je     0x14138230a
0x1413822fc: mov    r8d,r15d
0x1413822ff: movzx  edx,bx
0x141382302: mov    rcx,rdi
0x141382305: call   0x141354400
0x14138230a: mov    edx,0x62
0x14138230f: mov    r8d,r15d
0x141382312: mov    rcx,rdi
0x141382315: call   0x141354400
0x14138231a: jmp    0x141381430
0x14138231f: mov    edx,0x2f
0x141382324: mov    rcx,rdi
0x141382327: call   0x1413570b0
0x14138232c: mov    edx,0x62
0x141382331: mov    rcx,rdi
0x141382334: mov    ebx,eax
0x141382336: call   0x1413570b0
0x14138233b: mov    esi,eax
0x14138233d: lea    r9,[rbp-0xc]
0x141382341: lea    rax,[rbp-0x18]
0x141382345: sar    esi,0x2
0x141382348: mov    QWORD PTR [rsp+0x30],rax
0x14138234d: lea    r8,[rbp-0x10]
0x141382351: lea    rax,[rbp-0x1c]
0x141382355: cmp    esi,ebx
0x141382357: mov    QWORD PTR [rsp+0x28],rax
0x14138235c: lea    rdx,[rbp-0x14]
0x141382360: lea    rax,[rbp-0x20]
0x141382364: mov    ecx,0x2f
0x141382369: mov    QWORD PTR [rsp+0x20],rax
0x14138236e: cmovle esi,ebx
0x141382371: call   0x14078eb10
0x141382376: mov    ebx,DWORD PTR [rbp+0x68]
0x141382379: test   ebx,ebx
0x14138237b: je     0x141381438
0x141382381: cmp    WORD PTR [rdi+0x800],r12w
0x141382389: jg     0x141381438
0x14138238f: mov    edx,0x2f
0x141382394: mov    r8d,ebx
0x141382397: mov    rcx,rdi
0x14138239a: call   0x141354400
0x14138239f: mov    edx,0x62
0x1413823a4: mov    r8d,ebx
0x1413823a7: mov    rcx,rdi
0x1413823aa: call   0x141354400
0x1413823af: jmp    0x141381438
0x1413823b4: mov    edx,0x67
0x1413823b9: mov    rcx,rdi
0x1413823bc: call   0x1413570b0
0x1413823c1: mov    esi,eax
0x1413823c3: lea    r9,[rbp-0xc]
0x1413823c7: lea    rax,[rbp-0x18]
0x1413823cb: mov    ecx,0x67
0x1413823d0: mov    QWORD PTR [rsp+0x30],rax
0x1413823d5: lea    r8,[rbp-0x10]
0x1413823d9: lea    rax,[rbp-0x1c]
0x1413823dd: mov    QWORD PTR [rsp+0x28],rax
0x1413823e2: lea    rdx,[rbp-0x14]
0x1413823e6: lea    rax,[rbp-0x20]
0x1413823ea: mov    QWORD PTR [rsp+0x20],rax
0x1413823ef: call   0x14078eb10
0x1413823f4: mov    r8d,DWORD PTR [rbp+0x68]
0x1413823f8: test   r8d,r8d
0x1413823fb: je     0x14138143b
0x141382401: cmp    WORD PTR [rdi+0x800],r12w
0x141382409: jg     0x14138143b
0x14138240f: mov    edx,0x67
0x141382414: mov    rcx,rdi
0x141382417: call   0x141354400
0x14138241c: jmp    0x14138143b
0x141382421: mov    edx,0x2d
0x141382426: mov    rcx,rdi
0x141382429: call   0x1413570b0
0x14138242e: mov    esi,eax
0x141382430: lea    r9,[rbp-0xc]
0x141382434: lea    rax,[rbp-0x18]
0x141382438: mov    ecx,0x2d
0x14138243d: mov    QWORD PTR [rsp+0x30],rax
0x141382442: lea    r8,[rbp-0x10]
0x141382446: lea    rax,[rbp-0x1c]
0x14138244a: mov    QWORD PTR [rsp+0x28],rax
0x14138244f: lea    rdx,[rbp-0x14]
0x141382453: lea    rax,[rbp-0x20]
0x141382457: mov    QWORD PTR [rsp+0x20],rax
0x14138245c: call   0x14078eb10
0x141382461: mov    r8d,DWORD PTR [rbp+0x68]
0x141382465: test   r8d,r8d
0x141382468: je     0x14138143b
0x14138246e: cmp    WORD PTR [rdi+0x800],r12w
0x141382476: jg     0x14138143b
0x14138247c: mov    edx,0x2d
0x141382481: mov    rcx,rdi
0x141382484: call   0x141354400
0x141382489: jmp    0x14138143b
0x14138248e: mov    ebx,0x63
0x141382493: mov    rcx,rdi
0x141382496: mov    edx,ebx
0x141382498: call   0x1413570b0
0x14138249d: mov    esi,eax
0x14138249f: lea    r9,[rbp-0xc]
0x1413824a3: lea    rax,[rbp-0x18]
0x1413824a7: mov    ecx,ebx
0x1413824a9: mov    QWORD PTR [rsp+0x30],rax
0x1413824ae: lea    r8,[rbp-0x10]
0x1413824b2: lea    rax,[rbp-0x1c]
0x1413824b6: mov    QWORD PTR [rsp+0x28],rax
0x1413824bb: lea    rdx,[rbp-0x14]
0x1413824bf: lea    rax,[rbp-0x20]
0x1413824c3: mov    QWORD PTR [rsp+0x20],rax
0x1413824c8: call   0x14078eb10
0x1413824cd: mov    r8d,DWORD PTR [rbp+0x68]
0x1413824d1: test   r8d,r8d
0x1413824d4: je     0x141381438
0x1413824da: cmp    WORD PTR [rdi+0x800],r12w
0x1413824e2: jg     0x141381438
0x1413824e8: mov    edx,ebx
0x1413824ea: mov    rcx,rdi
0x1413824ed: call   0x141354400
0x1413824f2: jmp    0x141381438
0x1413824f7: mov    edx,0x2c
0x1413824fc: mov    rcx,rdi
0x1413824ff: call   0x1413570b0
0x141382504: mov    esi,eax
0x141382506: lea    r9,[rbp-0xc]
0x14138250a: lea    rax,[rbp-0x18]
0x14138250e: mov    ecx,0x2c
0x141382513: mov    QWORD PTR [rsp+0x30],rax
0x141382518: lea    r8,[rbp-0x10]
0x14138251c: lea    rax,[rbp-0x1c]
0x141382520: mov    QWORD PTR [rsp+0x28],rax
0x141382525: lea    rdx,[rbp-0x14]
0x141382529: lea    rax,[rbp-0x20]
0x14138252d: mov    QWORD PTR [rsp+0x20],rax
0x141382532: call   0x14078eb10
0x141382537: mov    r8d,DWORD PTR [rbp+0x68]
0x14138253b: test   r8d,r8d
0x14138253e: je     0x14138143b
0x141382544: cmp    WORD PTR [rdi+0x800],r12w
0x14138254c: jg     0x14138143b
0x141382552: mov    edx,0x2c
0x141382557: mov    rcx,rdi
0x14138255a: call   0x141354400
0x14138255f: jmp    0x14138143b
0x141382564: mov    edx,0x35
0x141382569: mov    rcx,rdi
0x14138256c: call   0x1413570b0
0x141382571: mov    edx,0x62
0x141382576: mov    rcx,rdi
0x141382579: mov    ebx,eax
0x14138257b: call   0x1413570b0
0x141382580: mov    esi,eax
0x141382582: lea    r9,[rbp-0xc]
0x141382586: lea    rax,[rbp-0x18]
0x14138258a: sar    esi,0x2
0x14138258d: mov    QWORD PTR [rsp+0x30],rax
0x141382592: lea    r8,[rbp-0x10]
0x141382596: lea    rax,[rbp-0x1c]
0x14138259a: cmp    esi,ebx
0x14138259c: mov    QWORD PTR [rsp+0x28],rax
0x1413825a1: lea    rdx,[rbp-0x14]
0x1413825a5: lea    rax,[rbp-0x20]
0x1413825a9: mov    ecx,0x35
0x1413825ae: mov    QWORD PTR [rsp+0x20],rax
0x1413825b3: cmovle esi,ebx
0x1413825b6: call   0x14078eb10
0x1413825bb: mov    r8d,DWORD PTR [rbp+0x68]
0x1413825bf: test   r8d,r8d
0x1413825c2: je     0x141381438
0x1413825c8: cmp    WORD PTR [rdi+0x800],r12w
0x1413825d0: jg     0x141381438
0x1413825d6: mov    edx,0x35
0x1413825db: mov    rcx,rdi
0x1413825de: call   0x141354400
0x1413825e3: jmp    0x141381438
0x1413825e8: mov    edx,0x57
0x1413825ed: mov    rcx,rdi
0x1413825f0: call   0x1413570b0
0x1413825f5: mov    esi,eax
0x1413825f7: lea    r9,[rbp-0xc]
0x1413825fb: lea    rax,[rbp-0x18]
0x1413825ff: mov    ecx,0x57
0x141382604: mov    QWORD PTR [rsp+0x30],rax
0x141382609: lea    r8,[rbp-0x10]
0x14138260d: lea    rax,[rbp-0x1c]
0x141382611: mov    QWORD PTR [rsp+0x28],rax
0x141382616: lea    rdx,[rbp-0x14]
0x14138261a: lea    rax,[rbp-0x20]
0x14138261e: mov    QWORD PTR [rsp+0x20],rax
0x141382623: call   0x14078eb10
0x141382628: mov    r8d,DWORD PTR [rbp+0x68]
0x14138262c: test   r8d,r8d
0x14138262f: je     0x14138143b
0x141382635: cmp    WORD PTR [rdi+0x800],r12w
0x14138263d: jg     0x14138143b
0x141382643: mov    edx,0x57
0x141382648: mov    rcx,rdi
0x14138264b: call   0x141354400
0x141382650: jmp    0x14138143b
0x141382655: mov    edx,0x61
0x14138265a: mov    rcx,rdi
0x14138265d: call   0x1413570b0
0x141382662: mov    esi,eax
0x141382664: lea    r9,[rbp-0xc]
0x141382668: lea    rax,[rbp-0x18]
0x14138266c: mov    ecx,0x61
0x141382671: mov    QWORD PTR [rsp+0x30],rax
0x141382676: lea    r8,[rbp-0x10]
0x14138267a: lea    rax,[rbp-0x1c]
0x14138267e: mov    QWORD PTR [rsp+0x28],rax
0x141382683: lea    rdx,[rbp-0x14]
0x141382687: lea    rax,[rbp-0x20]
0x14138268b: mov    QWORD PTR [rsp+0x20],rax
0x141382690: call   0x14078eb10
0x141382695: mov    r8d,DWORD PTR [rbp+0x68]
0x141382699: test   r8d,r8d
0x14138269c: je     0x14138143b
0x1413826a2: cmp    WORD PTR [rdi+0x800],r12w
0x1413826aa: jg     0x14138143b
0x1413826b0: mov    edx,0x61
0x1413826b5: mov    rcx,rdi
0x1413826b8: call   0x141354400
0x1413826bd: jmp    0x14138143b
0x1413826c2: mov    edx,0x38
0x1413826c7: mov    rcx,rdi
0x1413826ca: call   0x1413570b0
0x1413826cf: mov    esi,eax
0x1413826d1: lea    r9,[rbp-0xc]
0x1413826d5: lea    rax,[rbp-0x18]
0x1413826d9: mov    ecx,0x38
0x1413826de: mov    QWORD PTR [rsp+0x30],rax
0x1413826e3: lea    r8,[rbp-0x10]
0x1413826e7: lea    rax,[rbp-0x1c]
0x1413826eb: mov    QWORD PTR [rsp+0x28],rax
0x1413826f0: lea    rdx,[rbp-0x14]
0x1413826f4: lea    rax,[rbp-0x20]
0x1413826f8: mov    QWORD PTR [rsp+0x20],rax
0x1413826fd: call   0x14078eb10
0x141382702: mov    r8d,DWORD PTR [rbp+0x68]
0x141382706: test   r8d,r8d
0x141382709: je     0x14138143b
0x14138270f: cmp    WORD PTR [rdi+0x800],r12w
0x141382717: jg     0x14138143b
0x14138271d: mov    edx,0x38
0x141382722: mov    rcx,rdi
0x141382725: call   0x141354400
0x14138272a: jmp    0x14138143b
0x14138272f: mov    edx,0x72
0x141382734: mov    rcx,rdi
0x141382737: call   0x1413570b0
0x14138273c: mov    esi,eax
0x14138273e: lea    r9,[rbp-0xc]
0x141382742: lea    rax,[rbp-0x18]
0x141382746: mov    ecx,0x72
0x14138274b: mov    QWORD PTR [rsp+0x30],rax
0x141382750: lea    r8,[rbp-0x10]
0x141382754: lea    rax,[rbp-0x1c]
0x141382758: mov    QWORD PTR [rsp+0x28],rax
0x14138275d: lea    rdx,[rbp-0x14]
0x141382761: lea    rax,[rbp-0x20]
0x141382765: mov    QWORD PTR [rsp+0x20],rax
0x14138276a: call   0x14078eb10
0x14138276f: mov    r8d,DWORD PTR [rbp+0x68]
0x141382773: test   r8d,r8d
0x141382776: je     0x14138143b
0x14138277c: cmp    WORD PTR [rdi+0x800],r12w
0x141382784: jg     0x14138143b
0x14138278a: mov    edx,0x72
0x14138278f: mov    rcx,rdi
0x141382792: call   0x141354400
0x141382797: jmp    0x14138143b
0x14138279c: mov    edx,0x53
0x1413827a1: mov    rcx,rdi
0x1413827a4: call   0x1413570b0
0x1413827a9: mov    esi,eax
0x1413827ab: lea    r9,[rbp-0xc]
0x1413827af: lea    rax,[rbp-0x18]
0x1413827b3: mov    ecx,0x53
0x1413827b8: mov    QWORD PTR [rsp+0x30],rax
0x1413827bd: lea    r8,[rbp-0x10]
0x1413827c1: lea    rax,[rbp-0x1c]
0x1413827c5: mov    QWORD PTR [rsp+0x28],rax
0x1413827ca: lea    rdx,[rbp-0x14]
0x1413827ce: lea    rax,[rbp-0x20]
0x1413827d2: mov    QWORD PTR [rsp+0x20],rax
0x1413827d7: call   0x14078eb10
0x1413827dc: mov    r8d,DWORD PTR [rbp+0x68]
0x1413827e0: test   r8d,r8d
0x1413827e3: je     0x14138143b
0x1413827e9: cmp    WORD PTR [rdi+0x800],r12w
0x1413827f1: jg     0x14138143b
0x1413827f7: mov    edx,0x53
0x1413827fc: mov    rcx,rdi
0x1413827ff: call   0x141354400
0x141382804: jmp    0x14138143b
0x141382809: mov    edx,0x56
0x14138280e: mov    rcx,rdi
0x141382811: call   0x1413570b0
0x141382816: mov    esi,eax
0x141382818: lea    r9,[rbp-0xc]
0x14138281c: lea    rax,[rbp-0x18]
0x141382820: mov    ecx,0x56
0x141382825: mov    QWORD PTR [rsp+0x30],rax
0x14138282a: lea    r8,[rbp-0x10]
0x14138282e: lea    rax,[rbp-0x1c]
0x141382832: mov    QWORD PTR [rsp+0x28],rax
0x141382837: lea    rdx,[rbp-0x14]
0x14138283b: lea    rax,[rbp-0x20]
0x14138283f: mov    QWORD PTR [rsp+0x20],rax
0x141382844: call   0x14078eb10
0x141382849: mov    r8d,DWORD PTR [rbp+0x68]
0x14138284d: test   r8d,r8d
0x141382850: je     0x14138143b
0x141382856: cmp    WORD PTR [rdi+0x800],r12w
0x14138285e: jg     0x14138143b
0x141382864: mov    edx,0x56
0x141382869: mov    rcx,rdi
0x14138286c: call   0x141354400
0x141382871: jmp    0x14138143b
0x141382876: mov    edx,0x60
0x14138287b: mov    rcx,rdi
0x14138287e: call   0x1413570b0
0x141382883: mov    esi,eax
0x141382885: lea    r9,[rbp-0xc]
0x141382889: lea    rax,[rbp-0x18]
0x14138288d: mov    ecx,0x60
0x141382892: mov    QWORD PTR [rsp+0x30],rax
0x141382897: lea    r8,[rbp-0x10]
0x14138289b: lea    rax,[rbp-0x1c]
0x14138289f: mov    QWORD PTR [rsp+0x28],rax
0x1413828a4: lea    rdx,[rbp-0x14]
0x1413828a8: lea    rax,[rbp-0x20]
0x1413828ac: mov    QWORD PTR [rsp+0x20],rax
0x1413828b1: call   0x14078eb10
0x1413828b6: mov    r8d,DWORD PTR [rbp+0x68]
0x1413828ba: test   r8d,r8d
0x1413828bd: je     0x14138143b
0x1413828c3: cmp    WORD PTR [rdi+0x800],r12w
0x1413828cb: jg     0x14138143b
0x1413828d1: mov    edx,0x60
0x1413828d6: mov    rcx,rdi
0x1413828d9: call   0x141354400
0x1413828de: jmp    0x14138143b
0x1413828e3: mov    edx,0x5f
0x1413828e8: mov    rcx,rdi
0x1413828eb: call   0x1413570b0
0x1413828f0: mov    esi,eax
0x1413828f2: lea    r9,[rbp-0xc]
0x1413828f6: lea    rax,[rbp-0x18]
0x1413828fa: mov    ecx,0x5f
0x1413828ff: mov    QWORD PTR [rsp+0x30],rax
0x141382904: lea    r8,[rbp-0x10]
0x141382908: lea    rax,[rbp-0x1c]
0x14138290c: mov    QWORD PTR [rsp+0x28],rax
0x141382911: lea    rdx,[rbp-0x14]
0x141382915: lea    rax,[rbp-0x20]
0x141382919: mov    QWORD PTR [rsp+0x20],rax
0x14138291e: call   0x14078eb10
0x141382923: mov    r8d,DWORD PTR [rbp+0x68]
0x141382927: test   r8d,r8d
0x14138292a: je     0x14138143b
0x141382930: cmp    WORD PTR [rdi+0x800],r12w
0x141382938: jg     0x14138143b
0x14138293e: mov    edx,0x5f
0x141382943: mov    rcx,rdi
0x141382946: call   0x141354400
0x14138294b: jmp    0x14138143b
0x141382950: mov    edx,0x4a
0x141382955: mov    rcx,rdi
0x141382958: call   0x1413570b0
0x14138295d: mov    esi,eax
0x14138295f: lea    r9,[rbp-0xc]
0x141382963: lea    rax,[rbp-0x18]
0x141382967: mov    ecx,0x4a
0x14138296c: mov    QWORD PTR [rsp+0x30],rax
0x141382971: lea    r8,[rbp-0x10]
0x141382975: lea    rax,[rbp-0x1c]
0x141382979: mov    QWORD PTR [rsp+0x28],rax
0x14138297e: lea    rdx,[rbp-0x14]
0x141382982: lea    rax,[rbp-0x20]
0x141382986: mov    QWORD PTR [rsp+0x20],rax
0x14138298b: call   0x14078eb10
0x141382990: mov    r8d,DWORD PTR [rbp+0x68]
0x141382994: test   r8d,r8d
0x141382997: je     0x14138143b
0x14138299d: cmp    WORD PTR [rdi+0x800],r12w
0x1413829a5: jg     0x14138143b
0x1413829ab: mov    edx,0x4a
0x1413829b0: mov    rcx,rdi
0x1413829b3: call   0x141354400
0x1413829b8: jmp    0x14138143b
0x1413829bd: mov    edx,0x54
0x1413829c2: mov    rcx,rdi
0x1413829c5: call   0x1413570b0
0x1413829ca: mov    esi,eax
0x1413829cc: lea    r9,[rbp-0xc]
0x1413829d0: lea    rax,[rbp-0x18]
0x1413829d4: mov    ecx,0x54
0x1413829d9: mov    QWORD PTR [rsp+0x30],rax
0x1413829de: lea    r8,[rbp-0x10]
0x1413829e2: lea    rax,[rbp-0x1c]
0x1413829e6: mov    QWORD PTR [rsp+0x28],rax
0x1413829eb: lea    rdx,[rbp-0x14]
0x1413829ef: lea    rax,[rbp-0x20]
0x1413829f3: mov    QWORD PTR [rsp+0x20],rax
0x1413829f8: call   0x14078eb10
0x1413829fd: mov    r8d,DWORD PTR [rbp+0x68]
0x141382a01: test   r8d,r8d
0x141382a04: je     0x14138143b
0x141382a0a: cmp    WORD PTR [rdi+0x800],r12w
0x141382a12: jg     0x14138143b
0x141382a18: mov    edx,0x54
0x141382a1d: mov    rcx,rdi
0x141382a20: call   0x141354400
0x141382a25: jmp    0x14138143b
0x141382a2a: mov    edx,0x55
0x141382a2f: mov    rcx,rdi
0x141382a32: call   0x1413570b0
0x141382a37: mov    esi,eax
0x141382a39: lea    r9,[rbp-0xc]
0x141382a3d: lea    rax,[rbp-0x18]
0x141382a41: mov    ecx,0x55
0x141382a46: mov    QWORD PTR [rsp+0x30],rax
0x141382a4b: lea    r8,[rbp-0x10]
0x141382a4f: lea    rax,[rbp-0x1c]
0x141382a53: mov    QWORD PTR [rsp+0x28],rax
0x141382a58: lea    rdx,[rbp-0x14]
0x141382a5c: lea    rax,[rbp-0x20]
0x141382a60: mov    QWORD PTR [rsp+0x20],rax
0x141382a65: call   0x14078eb10
0x141382a6a: mov    r8d,DWORD PTR [rbp+0x68]
0x141382a6e: test   r8d,r8d
0x141382a71: je     0x14138143b
0x141382a77: cmp    WORD PTR [rdi+0x800],r12w
0x141382a7f: jg     0x14138143b
0x141382a85: mov    edx,0x55
0x141382a8a: mov    rcx,rdi
0x141382a8d: call   0x141354400
0x141382a92: jmp    0x14138143b
0x141382a97: mov    edx,0x3b
0x141382a9c: mov    rcx,rdi
0x141382a9f: call   0x1413570b0
0x141382aa4: mov    esi,eax
0x141382aa6: lea    r9,[rbp-0xc]
0x141382aaa: lea    rax,[rbp-0x18]
0x141382aae: mov    ecx,0x3b
0x141382ab3: mov    QWORD PTR [rsp+0x30],rax
0x141382ab8: lea    r8,[rbp-0x10]
0x141382abc: lea    rax,[rbp-0x1c]
0x141382ac0: mov    QWORD PTR [rsp+0x28],rax
0x141382ac5: lea    rdx,[rbp-0x14]
0x141382ac9: lea    rax,[rbp-0x20]
0x141382acd: mov    QWORD PTR [rsp+0x20],rax
0x141382ad2: call   0x14078eb10
0x141382ad7: mov    r8d,DWORD PTR [rbp+0x68]
0x141382adb: test   r8d,r8d
0x141382ade: je     0x14138143b
0x141382ae4: cmp    WORD PTR [rdi+0x800],r12w
0x141382aec: jg     0x14138143b
0x141382af2: mov    edx,0x3b
0x141382af7: mov    rcx,rdi
0x141382afa: call   0x141354400
0x141382aff: jmp    0x14138143b
0x141382b04: mov    edx,0x3a
0x141382b09: mov    rcx,rdi
0x141382b0c: call   0x1413570b0
0x141382b11: mov    esi,eax
0x141382b13: lea    r9,[rbp-0xc]
0x141382b17: lea    rax,[rbp-0x18]
0x141382b1b: mov    ecx,0x3a
0x141382b20: mov    QWORD PTR [rsp+0x30],rax
0x141382b25: lea    r8,[rbp-0x10]
0x141382b29: lea    rax,[rbp-0x1c]
0x141382b2d: mov    QWORD PTR [rsp+0x28],rax
0x141382b32: lea    rdx,[rbp-0x14]
0x141382b36: lea    rax,[rbp-0x20]
0x141382b3a: mov    QWORD PTR [rsp+0x20],rax
0x141382b3f: call   0x14078eb10
0x141382b44: mov    r8d,DWORD PTR [rbp+0x68]
0x141382b48: test   r8d,r8d
0x141382b4b: je     0x14138143b
0x141382b51: cmp    WORD PTR [rdi+0x800],r12w
0x141382b59: jg     0x14138143b
0x141382b5f: mov    edx,0x3a
0x141382b64: mov    rcx,rdi
0x141382b67: call   0x141354400
0x141382b6c: jmp    0x14138143b
0x141382b71: movzx  ebx,WORD PTR [rbp+0x88]
0x141382b78: cmp    bx,ax
0x141382b7b: je     0x141382bb9
0x141382b7d: movzx  edx,bx
0x141382b80: mov    rcx,rdi
0x141382b83: call   0x1413570b0
0x141382b88: mov    esi,eax
0x141382b8a: lea    r9,[rbp-0xc]
0x141382b8e: lea    rax,[rbp-0x18]
0x141382b92: movzx  ecx,bx
0x141382b95: mov    QWORD PTR [rsp+0x30],rax
0x141382b9a: lea    r8,[rbp-0x10]
0x141382b9e: lea    rax,[rbp-0x1c]
0x141382ba2: mov    QWORD PTR [rsp+0x28],rax
0x141382ba7: lea    rdx,[rbp-0x14]
0x141382bab: lea    rax,[rbp-0x20]
0x141382baf: mov    QWORD PTR [rsp+0x20],rax
0x141382bb4: call   0x14078eb10
0x141382bb9: mov    r8d,DWORD PTR [rbp+0x68]
0x141382bbd: test   r8d,r8d
0x141382bc0: je     0x141381438
0x141382bc6: cmp    WORD PTR [rdi+0x800],r12w
0x141382bce: jg     0x141381438
0x141382bd4: cmp    bx,0xffff
0x141382bd8: je     0x141381438
0x141382bde: movzx  edx,bx
0x141382be1: mov    rcx,rdi
0x141382be4: call   0x141354400
0x141382be9: jmp    0x141381438
0x141382bee: mov    edx,0x62
0x141382bf3: mov    rcx,rdi
0x141382bf6: call   0x1413570b0
0x141382bfb: mov    esi,eax
0x141382bfd: lea    r9,[rbp-0xc]
0x141382c01: lea    rax,[rbp-0x18]
0x141382c05: mov    ecx,0x62
0x141382c0a: mov    QWORD PTR [rsp+0x30],rax
0x141382c0f: lea    r8,[rbp-0x10]
0x141382c13: lea    rax,[rbp-0x1c]
0x141382c17: mov    QWORD PTR [rsp+0x28],rax
0x141382c1c: lea    rdx,[rbp-0x14]
0x141382c20: lea    rax,[rbp-0x20]
0x141382c24: mov    QWORD PTR [rsp+0x20],rax
0x141382c29: call   0x14078eb10
0x141382c2e: mov    r8d,DWORD PTR [rbp+0x68]
0x141382c32: test   r8d,r8d
0x141382c35: je     0x14138143b
0x141382c3b: cmp    WORD PTR [rdi+0x800],r12w
0x141382c43: jg     0x14138143b
0x141382c49: mov    edx,0x62
0x141382c4e: mov    rcx,rdi
0x141382c51: call   0x141354400
0x141382c56: jmp    0x14138143b
0x141382c5b: mov    edx,0x67
0x141382c60: mov    rcx,rdi
0x141382c63: call   0x1413570b0
0x141382c68: mov    esi,eax
0x141382c6a: lea    r9,[rbp-0xc]
0x141382c6e: lea    rax,[rbp-0x18]
0x141382c72: mov    ecx,0x67
0x141382c77: mov    QWORD PTR [rsp+0x30],rax
0x141382c7c: lea    r8,[rbp-0x10]
0x141382c80: lea    rax,[rbp-0x1c]
0x141382c84: mov    QWORD PTR [rsp+0x28],rax
0x141382c89: lea    rdx,[rbp-0x14]
0x141382c8d: lea    rax,[rbp-0x20]
0x141382c91: mov    QWORD PTR [rsp+0x20],rax
0x141382c96: call   0x14078eb10
0x141382c9b: mov    r8d,DWORD PTR [rbp+0x68]
0x141382c9f: test   r8d,r8d
0x141382ca2: je     0x14138143b
0x141382ca8: cmp    WORD PTR [rdi+0x800],r12w
0x141382cb0: jg     0x141382cc4
0x141382cb2: mov    edx,0x67
0x141382cb7: mov    rcx,rdi
0x141382cba: call   0x141354400
0x141382cbf: jmp    0x14138143b
0x141382cc4: movzx  r8d,WORD PTR [rbp+0x48]
0x141382cc9: mov    r13,QWORD PTR [rbp+0x70]
0x141382ccd: jmp    0x141381444
0x141382cd2: mov    ecx,DWORD PTR [r15+0x1c]
0x141382cd6: lea    rdx,[rdi+0xd50]
0x141382cdd: call   0x1400bb3f0
0x141382ce2: xor    esi,esi
0x141382ce4: mov    r8,rax
0x141382ce7: mov    ebx,esi
0x141382ce9: test   rax,rax
0x141382cec: je     0x141382d26
0x141382cee: mov    eax,0x51eb851f
0x141382cf3: imul   DWORD PTR [r8+0xc]
0x141382cf7: mov    ecx,edx
0x141382cf9: sar    ecx,0x5
0x141382cfc: mov    eax,ecx
0x141382cfe: shr    eax,0x1f
0x141382d01: add    ecx,eax
0x141382d03: mov    eax,0x6ef5de4d
0x141382d08: imul   DWORD PTR [r8+0x4]
0x141382d0c: sar    edx,0x13
0x141382d0f: add    ecx,edx
0x141382d11: mov    eax,edx
0x141382d13: shr    eax,0x1f
0x141382d16: add    ecx,eax
0x141382d18: mov    eax,0x64
0x141382d1d: cmovns ebx,ecx
0x141382d20: cmp    ebx,0x64
0x141382d23: cmovg  ebx,eax
0x141382d26: mov    rcx,rdi
0x141382d29: mov    eax,0xd50
0x141382d2e: lea    rdx,[rcx+rax*1]
0x141382d32: test   r13,r13
0x141382d35: jne    0x141382d3b
0x141382d37: mov    eax,esi
0x141382d39: jmp    0x141382d8f
0x141382d3b: mov    ecx,DWORD PTR [r13+0x1c]
0x141382d3f: call   0x1400bb3f0
0x141382d44: mov    r9,rax
0x141382d47: test   rax,rax
0x141382d4a: jne    0x141382d50
0x141382d4c: mov    eax,esi
0x141382d4e: jmp    0x141382d8f
0x141382d50: mov    eax,0x51eb851f
0x141382d55: imul   DWORD PTR [r9+0xc]
0x141382d59: mov    eax,0x6ef5de4d
0x141382d5e: mov    r8d,edx
0x141382d61: imul   DWORD PTR [r9+0x4]
0x141382d65: sar    r8d,0x5
0x141382d69: mov    eax,esi
0x141382d6b: sar    edx,0x13
0x141382d6e: mov    ecx,r8d
0x141382d71: shr    ecx,0x1f
0x141382d74: add    r8d,ecx
0x141382d77: mov    ecx,edx
0x141382d79: shr    ecx,0x1f
0x141382d7c: add    edx,r8d
0x141382d7f: add    ecx,edx
0x141382d81: cmovns eax,ecx
0x141382d84: mov    ecx,0x64
0x141382d89: cmp    eax,0x64
0x141382d8c: cmovg  eax,ecx
0x141382d8f: lea    ecx,[rax+0x64]
0x141382d92: mov    eax,0x51eb851f
0x141382d97: add    ecx,ebx
0x141382d99: imul   ecx,DWORD PTR [rbp-0x8]
0x141382d9d: imul   ecx
0x141382d9f: mov    ebx,edx
0x141382da1: sar    ebx,0x5
0x141382da4: mov    eax,ebx
0x141382da6: shr    eax,0x1f
0x141382da9: add    ebx,eax
0x141382dab: cmp    r14d,0x3b
0x141382daf: ja     0x141382e1d
0x141382db1: lea    rdx,[rip+0xfffffffffec7d248]        # 0x140000000
0x141382db8: movsxd rax,r14d
0x141382dbb: movzx  eax,BYTE PTR [rdx+rax*1+0x1383f24]
0x141382dc3: mov    ecx,DWORD PTR [rdx+rax*4+0x1383f1c]
0x141382dca: add    rcx,rdx
0x141382dcd: jmp    rcx
0x141382dcf: mov    rcx,rdi
0x141382dd2: call   0x14134d320
0x141382dd7: lea    esi,[rax+0x1]
0x141382dda: cmp    esi,0x1
0x141382ddd: ja     0x141382de3
0x141382ddf: xor    eax,eax
0x141382de1: jmp    0x141382e1b
0x141382de3: call   0x140ece790
0x141382de8: mov    r8d,eax
0x141382deb: mov    eax,0x3
0x141382df0: mul    r8d
0x141382df3: mov    ecx,r8d
0x141382df6: mov    eax,0x7fffffff
0x141382dfb: sub    ecx,edx
0x141382dfd: shr    ecx,1
0x141382dff: add    ecx,edx
0x141382e01: xor    edx,edx
0x141382e03: div    esi
0x141382e05: shr    ecx,0x1e
0x141382e08: xor    edx,edx
0x141382e0a: imul   ecx,ecx,0x7fffffff
0x141382e10: sub    r8d,ecx
0x141382e13: lea    ecx,[rax+0x1]
0x141382e16: mov    eax,r8d
0x141382e19: div    ecx
0x141382e1b: sub    ebx,eax
0x141382e1d: movsxd r9,DWORD PTR [rbp-0x14]
0x141382e21: mov    r14d,DWORD PTR [rbp+0x60]
0x141382e25: cmp    r9d,0xffffffff
0x141382e29: je     0x141382f24
0x141382e2f: lea    rax,[r9+0x37]
0x141382e33: imul   rcx,rax,0x1c
0x141382e37: imul   rax,r9,0x1c
0x141382e3b: mov    r8d,DWORD PTR [rcx+rdi*1]
0x141382e3f: mov    rcx,QWORD PTR [rdi+0x8e8]
0x141382e46: sub    r8d,DWORD PTR [rax+rdi*1+0x614]
0x141382e4e: bt     r12d,0x8
0x141382e53: jae    0x141382e87
0x141382e55: test   rcx,rcx
0x141382e58: je     0x141382e7c
0x141382e5a: imul   r8d,DWORD PTR [rcx+r9*4]
0x141382e5f: mov    eax,0x51eb851f
0x141382e64: imul   r8d
0x141382e67: mov    r8d,edx
0x141382e6a: sar    r8d,0x5
0x141382e6e: mov    eax,r8d
0x141382e71: shr    eax,0x1f
0x141382e74: add    r8d,eax
0x141382e77: add    r8d,DWORD PTR [rcx+r9*4+0x18]
0x141382e7c: xor    ecx,ecx
0x141382e7e: test   r8d,r8d
0x141382e81: cmovns ecx,r8d
0x141382e85: jmp    0x141382efe
0x141382e87: test   rcx,rcx
0x141382e8a: je     0x141382eae
0x141382e8c: imul   r8d,DWORD PTR [rcx+r9*4]
0x141382e91: mov    eax,0x51eb851f
0x141382e96: imul   r8d
0x141382e99: mov    r8d,edx
0x141382e9c: sar    r8d,0x5
0x141382ea0: mov    eax,r8d
0x141382ea3: shr    eax,0x1f
0x141382ea6: add    r8d,eax
0x141382ea9: add    r8d,DWORD PTR [rcx+r9*4+0x18]
0x141382eae: xor    eax,eax
0x141382eb0: test   r8d,r8d
0x141382eb3: mov    esi,eax
0x141382eb5: cmovns esi,r8d
0x141382eb9: inc    esi
0x141382ebb: cmp    esi,0x1
0x141382ebe: jbe    0x141382efc
0x141382ec0: call   0x140ece790
0x141382ec5: mov    r9d,DWORD PTR [rbp-0x14]
0x141382ec9: mov    r8d,eax
0x141382ecc: mov    ecx,r8d
0x141382ecf: mov    eax,0x3
0x141382ed4: mul    r8d
0x141382ed7: mov    eax,0x7fffffff
0x141382edc: sub    ecx,edx
0x141382ede: shr    ecx,1
0x141382ee0: add    ecx,edx
0x141382ee2: xor    edx,edx
0x141382ee4: div    esi
0x141382ee6: shr    ecx,0x1e
0x141382ee9: xor    edx,edx
0x141382eeb: imul   ecx,ecx,0x7fffffff
0x141382ef1: sub    r8d,ecx
0x141382ef4: lea    ecx,[rax+0x1]
0x141382ef7: mov    eax,r8d
0x141382efa: div    ecx
0x141382efc: mov    ecx,eax
0x141382efe: mov    eax,0x51eb851f
0x141382f03: imul   ecx
0x141382f05: sar    edx,0x5
0x141382f08: mov    eax,edx
0x141382f0a: shr    eax,0x1f
0x141382f0d: add    edx,eax
0x141382f0f: add    ebx,edx
0x141382f11: test   r14d,r14d
0x141382f14: jle    0x141382f24
0x141382f16: mov    r8d,r14d
0x141382f19: mov    edx,r9d
0x141382f1c: mov    rcx,rdi
0x141382f1f: call   0x1413e3c90
0x141382f24: movsxd r9,DWORD PTR [rbp-0x10]
0x141382f28: cmp    r9d,0xffffffff
0x141382f2c: je     0x141383027
0x141382f32: lea    rax,[r9+0x37]
0x141382f36: imul   rcx,rax,0x1c
0x141382f3a: imul   rax,r9,0x1c
0x141382f3e: mov    r8d,DWORD PTR [rcx+rdi*1]
0x141382f42: mov    rcx,QWORD PTR [rdi+0x8e8]
0x141382f49: sub    r8d,DWORD PTR [rax+rdi*1+0x614]
0x141382f51: bt     r12d,0x8
0x141382f56: jae    0x141382f8a
0x141382f58: test   rcx,rcx
0x141382f5b: je     0x141382f7f
0x141382f5d: imul   r8d,DWORD PTR [rcx+r9*4]
0x141382f62: mov    eax,0x51eb851f
0x141382f67: imul   r8d
0x141382f6a: mov    r8d,edx
0x141382f6d: sar    r8d,0x5
0x141382f71: mov    eax,r8d
0x141382f74: shr    eax,0x1f
0x141382f77: add    r8d,eax
0x141382f7a: add    r8d,DWORD PTR [rcx+r9*4+0x18]
0x141382f7f: xor    ecx,ecx
0x141382f81: test   r8d,r8d
0x141382f84: cmovns ecx,r8d
0x141382f88: jmp    0x141383001
0x141382f8a: test   rcx,rcx
0x141382f8d: je     0x141382fb1
0x141382f8f: imul   r8d,DWORD PTR [rcx+r9*4]
0x141382f94: mov    eax,0x51eb851f
0x141382f99: imul   r8d
0x141382f9c: mov    r8d,edx
0x141382f9f: sar    r8d,0x5
0x141382fa3: mov    eax,r8d
0x141382fa6: shr    eax,0x1f
0x141382fa9: add    r8d,eax
0x141382fac: add    r8d,DWORD PTR [rcx+r9*4+0x18]
0x141382fb1: xor    eax,eax
0x141382fb3: test   r8d,r8d
0x141382fb6: mov    esi,eax
0x141382fb8: cmovns esi,r8d
0x141382fbc: inc    esi
0x141382fbe: cmp    esi,0x1
0x141382fc1: jbe    0x141382fff
0x141382fc3: call   0x140ece790
0x141382fc8: mov    r9d,DWORD PTR [rbp-0x10]
0x141382fcc: mov    r8d,eax
0x141382fcf: mov    ecx,r8d
0x141382fd2: mov    eax,0x3
0x141382fd7: mul    r8d
0x141382fda: mov    eax,0x7fffffff
0x141382fdf: sub    ecx,edx
0x141382fe1: shr    ecx,1
0x141382fe3: add    ecx,edx
0x141382fe5: xor    edx,edx
0x141382fe7: div    esi
0x141382fe9: shr    ecx,0x1e
0x141382fec: xor    edx,edx
0x141382fee: imul   ecx,ecx,0x7fffffff
0x141382ff4: sub    r8d,ecx
0x141382ff7: lea    ecx,[rax+0x1]
0x141382ffa: mov    eax,r8d
0x141382ffd: div    ecx
0x141382fff: mov    ecx,eax
0x141383001: mov    eax,0x10624dd3
0x141383006: imul   ecx
0x141383008: sar    edx,0x4
0x14138300b: mov    eax,edx
0x14138300d: shr    eax,0x1f
0x141383010: add    edx,eax
0x141383012: add    ebx,edx
0x141383014: test   r14d,r14d
0x141383017: jle    0x141383027
0x141383019: mov    r8d,r14d
0x14138301c: mov    edx,r9d
0x14138301f: mov    rcx,rdi
0x141383022: call   0x1413e3c90
0x141383027: movsxd r9,DWORD PTR [rbp-0xc]
0x14138302b: cmp    r9d,0xffffffff
0x14138302f: je     0x14138312a
0x141383035: lea    rax,[r9+0x37]
0x141383039: imul   rcx,rax,0x1c
0x14138303d: imul   rax,r9,0x1c
0x141383041: mov    r8d,DWORD PTR [rcx+rdi*1]
0x141383045: mov    rcx,QWORD PTR [rdi+0x8e8]
0x14138304c: sub    r8d,DWORD PTR [rax+rdi*1+0x614]
0x141383054: bt     r12d,0x8
0x141383059: jae    0x14138308d
0x14138305b: test   rcx,rcx
0x14138305e: je     0x141383082
0x141383060: imul   r8d,DWORD PTR [rcx+r9*4]
0x141383065: mov    eax,0x51eb851f
0x14138306a: imul   r8d
0x14138306d: mov    r8d,edx
0x141383070: sar    r8d,0x5
0x141383074: mov    eax,r8d
0x141383077: shr    eax,0x1f
0x14138307a: add    r8d,eax
0x14138307d: add    r8d,DWORD PTR [rcx+r9*4+0x18]
0x141383082: xor    ecx,ecx
0x141383084: test   r8d,r8d
0x141383087: cmovns ecx,r8d
0x14138308b: jmp    0x141383104
0x14138308d: test   rcx,rcx
0x141383090: je     0x1413830b4
0x141383092: imul   r8d,DWORD PTR [rcx+r9*4]
0x141383097: mov    eax,0x51eb851f
0x14138309c: imul   r8d
0x14138309f: mov    r8d,edx
0x1413830a2: sar    r8d,0x5
0x1413830a6: mov    eax,r8d
0x1413830a9: shr    eax,0x1f
0x1413830ac: add    r8d,eax
0x1413830af: add    r8d,DWORD PTR [rcx+r9*4+0x18]
0x1413830b4: xor    eax,eax
0x1413830b6: test   r8d,r8d
0x1413830b9: mov    esi,eax
0x1413830bb: cmovns esi,r8d
0x1413830bf: inc    esi
0x1413830c1: cmp    esi,0x1
0x1413830c4: jbe    0x141383102
0x1413830c6: call   0x140ece790
0x1413830cb: mov    r9d,DWORD PTR [rbp-0xc]
0x1413830cf: mov    r8d,eax
0x1413830d2: mov    ecx,r8d
0x1413830d5: mov    eax,0x3
0x1413830da: mul    r8d
0x1413830dd: mov    eax,0x7fffffff
0x1413830e2: sub    ecx,edx
0x1413830e4: shr    ecx,1
0x1413830e6: add    ecx,edx
0x1413830e8: xor    edx,edx
0x1413830ea: div    esi
0x1413830ec: shr    ecx,0x1e
0x1413830ef: xor    edx,edx
0x1413830f1: imul   ecx,ecx,0x7fffffff
0x1413830f7: sub    r8d,ecx
0x1413830fa: lea    ecx,[rax+0x1]
0x1413830fd: mov    eax,r8d
0x141383100: div    ecx
0x141383102: mov    ecx,eax
0x141383104: mov    eax,0x10624dd3
0x141383109: imul   ecx
0x14138310b: sar    edx,0x4
0x14138310e: mov    eax,edx
0x141383110: shr    eax,0x1f
0x141383113: add    edx,eax
0x141383115: add    ebx,edx
0x141383117: test   r14d,r14d
0x14138311a: jle    0x14138312a
0x14138311c: mov    r8d,r14d
0x14138311f: mov    edx,r9d
0x141383122: mov    rcx,rdi
0x141383125: call   0x1413e3c90
0x14138312a: mov    r9,QWORD PTR [rdi+0xa98]
0x141383131: test   r9,r9
0x141383134: je     0x141383863
0x14138313a: movsxd r15,DWORD PTR [rbp-0x18]
0x14138313e: cmp    r15d,0xffffffff
0x141383142: je     0x1413834a6
0x141383148: movsxd r8,DWORD PTR [rbp-0x20]
0x14138314c: imul   rax,r8,0x1c
0x141383150: mov    ecx,DWORD PTR [rax+r9*1+0xac]
0x141383158: sub    ecx,DWORD PTR [rax+r9*1+0xbc]
0x141383160: bt     r12d,0x8
0x141383165: jae    0x141383273
0x14138316b: mov    r10,QWORD PTR [rdi+0x8e8]
0x141383172: test   r10,r10
0x141383175: je     0x141383195
0x141383177: imul   ecx,DWORD PTR [r10+r8*4+0x30]
0x14138317d: mov    eax,0x51eb851f
0x141383182: imul   ecx
0x141383184: mov    ecx,edx
0x141383186: sar    ecx,0x5
0x141383189: mov    eax,ecx
0x14138318b: shr    eax,0x1f
0x14138318e: add    ecx,eax
0x141383190: add    ecx,DWORD PTR [r10+r8*4+0x64]
0x141383195: test   ecx,ecx
0x141383197: js     0x1413831ac
0x141383199: mov    eax,0x51eb851f
0x14138319e: imul   ecx
0x1413831a0: sar    edx,0x5
0x1413831a3: mov    eax,edx
0x1413831a5: shr    eax,0x1f
0x1413831a8: add    edx,eax
0x1413831aa: add    ebx,edx
0x1413831ac: movsxd rcx,DWORD PTR [rbp-0x1c]
0x1413831b0: imul   rax,rcx,0x1c
0x1413831b4: mov    r8d,DWORD PTR [rax+r9*1+0xac]
0x1413831bc: sub    r8d,DWORD PTR [rax+r9*1+0xbc]
0x1413831c4: test   r10,r10
0x1413831c7: je     0x1413831ec
0x1413831c9: imul   r8d,DWORD PTR [r10+rcx*4+0x30]
0x1413831cf: mov    eax,0x51eb851f
0x1413831d4: imul   r8d
0x1413831d7: mov    r8d,edx
0x1413831da: sar    r8d,0x5
0x1413831de: mov    eax,r8d
0x1413831e1: shr    eax,0x1f
0x1413831e4: add    r8d,eax
0x1413831e7: add    r8d,DWORD PTR [r10+rcx*4+0x64]
0x1413831ec: xor    ecx,ecx
0x1413831ee: mov    eax,0x10624dd3
0x1413831f3: test   r8d,r8d
0x1413831f6: cmovns ecx,r8d
0x1413831fa: imul   ecx
0x1413831fc: mov    r11d,edx
0x1413831ff: sar    r11d,0x4
0x141383203: mov    eax,r11d
0x141383206: shr    eax,0x1f
0x141383209: add    r11d,eax
0x14138320c: imul   rax,r15,0x1c
0x141383210: add    r11d,ebx
0x141383213: mov    r8d,DWORD PTR [rax+r9*1+0xac]
0x14138321b: sub    r8d,DWORD PTR [rax+r9*1+0xbc]
0x141383223: test   r10,r10
0x141383226: je     0x14138324b
0x141383228: imul   r8d,DWORD PTR [r10+r15*4+0x30]
0x14138322e: mov    eax,0x51eb851f
0x141383233: imul   r8d
0x141383236: mov    r8d,edx
0x141383239: sar    r8d,0x5
0x14138323d: mov    ecx,r8d
0x141383240: shr    ecx,0x1f
0x141383243: add    r8d,ecx
0x141383246: add    r8d,DWORD PTR [r10+r15*4+0x64]
0x14138324b: xor    r10d,r10d
0x14138324e: mov    eax,0x10624dd3
0x141383253: test   r8d,r8d
0x141383256: mov    ecx,r10d
0x141383259: cmovns ecx,r8d
0x14138325d: imul   ecx
0x14138325f: mov    ebx,edx
0x141383261: sar    ebx,0x4
0x141383264: mov    eax,ebx
0x141383266: shr    eax,0x1f
0x141383269: add    ebx,eax
0x14138326b: add    ebx,r11d
0x14138326e: jmp    0x141383479
0x141383273: mov    r9,QWORD PTR [rdi+0x8e8]
0x14138327a: test   r9,r9
0x14138327d: je     0x14138329d
0x14138327f: imul   ecx,DWORD PTR [r9+r8*4+0x30]
0x141383285: mov    eax,0x51eb851f
0x14138328a: imul   ecx
0x14138328c: mov    ecx,edx
0x14138328e: sar    ecx,0x5
0x141383291: mov    eax,ecx
0x141383293: shr    eax,0x1f
0x141383296: add    ecx,eax
0x141383298: add    ecx,DWORD PTR [r9+r8*4+0x64]
0x14138329d: xor    r10d,r10d
0x1413832a0: test   ecx,ecx
0x1413832a2: mov    esi,r10d
0x1413832a5: cmovns esi,ecx
0x1413832a8: inc    esi
0x1413832aa: cmp    esi,0x1
0x1413832ad: ja     0x1413832b4
0x1413832af: mov    ecx,r10d
0x1413832b2: jmp    0x1413832f5
0x1413832b4: call   0x140ece790
0x1413832b9: mov    r15d,DWORD PTR [rbp-0x18]
0x1413832bd: mov    r8d,eax
0x1413832c0: mov    ecx,r8d
0x1413832c3: mov    eax,0x3
0x1413832c8: mul    r8d
0x1413832cb: mov    eax,0x7fffffff
0x1413832d0: sub    ecx,edx
0x1413832d2: shr    ecx,1
0x1413832d4: add    ecx,edx
0x1413832d6: xor    edx,edx
0x1413832d8: div    esi
0x1413832da: shr    ecx,0x1e
0x1413832dd: xor    edx,edx
0x1413832df: imul   ecx,ecx,0x7fffffff
0x1413832e5: sub    r8d,ecx
0x1413832e8: lea    ecx,[rax+0x1]
0x1413832eb: mov    eax,r8d
0x1413832ee: div    ecx
0x1413832f0: xor    r10d,r10d
0x1413832f3: mov    ecx,eax
0x1413832f5: mov    eax,0x51eb851f
0x1413832fa: imul   ecx
0x1413832fc: sar    edx,0x5
0x1413832ff: mov    eax,edx
0x141383301: shr    eax,0x1f
0x141383304: add    edx,eax
0x141383306: add    ebx,edx
0x141383308: mov    rdx,QWORD PTR [rdi+0xa98]
0x14138330f: test   rdx,rdx
0x141383312: je     0x1413833aa
0x141383318: movsxd r8,DWORD PTR [rbp-0x1c]
0x14138331c: mov    r9,QWORD PTR [rdi+0x8e8]
0x141383323: imul   rax,r8,0x1c
0x141383327: mov    ecx,DWORD PTR [rax+rdx*1+0xac]
0x14138332e: sub    ecx,DWORD PTR [rax+rdx*1+0xbc]
0x141383335: test   r9,r9
0x141383338: je     0x141383358
0x14138333a: imul   ecx,DWORD PTR [r9+r8*4+0x30]
0x141383340: mov    eax,0x51eb851f
0x141383345: imul   ecx
0x141383347: mov    ecx,edx
0x141383349: sar    ecx,0x5
0x14138334c: mov    eax,ecx
0x14138334e: shr    eax,0x1f
0x141383351: add    ecx,eax
0x141383353: add    ecx,DWORD PTR [r9+r8*4+0x64]
0x141383358: test   ecx,ecx
0x14138335a: mov    esi,r10d
0x14138335d: cmovns esi,ecx
0x141383360: inc    esi
0x141383362: cmp    esi,0x1
0x141383365: jbe    0x1413833aa
0x141383367: call   0x140ece790
0x14138336c: mov    r15d,DWORD PTR [rbp-0x18]
0x141383370: mov    r8d,eax
0x141383373: mov    ecx,r8d
0x141383376: mov    eax,0x3
0x14138337b: mul    r8d
0x14138337e: mov    eax,0x7fffffff
0x141383383: sub    ecx,edx
0x141383385: shr    ecx,1
0x141383387: add    ecx,edx
0x141383389: xor    edx,edx
0x14138338b: div    esi
0x14138338d: shr    ecx,0x1e
0x141383390: xor    edx,edx
0x141383392: imul   ecx,ecx,0x7fffffff
0x141383398: sub    r8d,ecx
0x14138339b: lea    ecx,[rax+0x1]
0x14138339e: mov    eax,r8d
0x1413833a1: div    ecx
0x1413833a3: xor    r10d,r10d
0x1413833a6: mov    ecx,eax
0x1413833a8: jmp    0x1413833ad
0x1413833aa: mov    ecx,r10d
0x1413833ad: mov    eax,0x10624dd3
0x1413833b2: imul   ecx
0x1413833b4: sar    edx,0x4
0x1413833b7: mov    eax,edx
0x1413833b9: shr    eax,0x1f
0x1413833bc: add    edx,eax
0x1413833be: add    ebx,edx
0x1413833c0: mov    rdx,QWORD PTR [rdi+0xa98]
0x1413833c7: test   rdx,rdx
0x1413833ca: je     0x141383463
0x1413833d0: mov    r9,QWORD PTR [rdi+0x8e8]
0x1413833d7: movsxd rcx,r15d
0x1413833da: imul   rax,rcx,0x1c
0x1413833de: mov    r8d,DWORD PTR [rax+rdx*1+0xac]
0x1413833e6: sub    r8d,DWORD PTR [rax+rdx*1+0xbc]
0x1413833ee: test   r9,r9
0x1413833f1: je     0x141383416
0x1413833f3: imul   r8d,DWORD PTR [r9+rcx*4+0x30]
0x1413833f9: mov    eax,0x51eb851f
0x1413833fe: imul   r8d
0x141383401: mov    r8d,edx
0x141383404: sar    r8d,0x5
0x141383408: mov    eax,r8d
0x14138340b: shr    eax,0x1f
0x14138340e: add    r8d,eax
0x141383411: add    r8d,DWORD PTR [r9+rcx*4+0x64]
0x141383416: test   r8d,r8d
0x141383419: mov    esi,r10d
0x14138341c: cmovns esi,r8d
0x141383420: inc    esi
0x141383422: cmp    esi,0x1
0x141383425: jbe    0x141383463
0x141383427: call   0x140ece790
0x14138342c: mov    r8d,eax
0x14138342f: mov    eax,0x3
0x141383434: mul    r8d
0x141383437: mov    ecx,r8d
0x14138343a: mov    eax,0x7fffffff
0x14138343f: sub    ecx,edx
0x141383441: shr    ecx,1
0x141383443: add    ecx,edx
0x141383445: xor    edx,edx
0x141383447: div    esi
0x141383449: shr    ecx,0x1e
0x14138344c: xor    edx,edx
0x14138344e: imul   ecx,ecx,0x7fffffff
0x141383454: sub    r8d,ecx
0x141383457: lea    ecx,[rax+0x1]
0x14138345a: mov    eax,r8d
0x14138345d: div    ecx
0x14138345f: mov    ecx,eax
0x141383461: jmp    0x141383466
0x141383463: mov    ecx,r10d
0x141383466: mov    eax,0x10624dd3
0x14138346b: imul   ecx
0x14138346d: sar    edx,0x4
0x141383470: mov    eax,edx
0x141383472: shr    eax,0x1f
0x141383475: add    edx,eax
0x141383477: add    ebx,edx
0x141383479: test   r14d,r14d
0x14138347c: jle    0x141383823
0x141383482: mov    edx,DWORD PTR [rbp-0x20]
0x141383485: mov    r8d,r14d
0x141383488: mov    rcx,rdi
0x14138348b: call   0x1413e3da0
0x141383490: mov    edx,DWORD PTR [rbp-0x1c]
0x141383493: mov    r8d,r14d
0x141383496: mov    rcx,rdi
0x141383499: call   0x1413e3da0
0x14138349e: mov    edx,DWORD PTR [rbp-0x18]
0x1413834a1: jmp    0x141383818
0x1413834a6: movsxd rsi,DWORD PTR [rbp-0x1c]
0x1413834aa: cmp    esi,0xffffffff
0x1413834ad: je     0x14138370b
0x1413834b3: bt     r12d,0x8
0x1413834b8: jae    0x14138358c
0x1413834be: movsxd rcx,DWORD PTR [rbp-0x20]
0x1413834c2: mov    r10,QWORD PTR [rdi+0x8e8]
0x1413834c9: imul   rax,rcx,0x1c
0x1413834cd: mov    r8d,DWORD PTR [rax+r9*1+0xac]
0x1413834d5: sub    r8d,DWORD PTR [rax+r9*1+0xbc]
0x1413834dd: test   r10,r10
0x1413834e0: je     0x141383505
0x1413834e2: imul   r8d,DWORD PTR [r10+rcx*4+0x30]
0x1413834e8: mov    eax,0x51eb851f
0x1413834ed: imul   r8d
0x1413834f0: mov    r8d,edx
0x1413834f3: sar    r8d,0x5
0x1413834f7: mov    eax,r8d
0x1413834fa: shr    eax,0x1f
0x1413834fd: add    r8d,eax
0x141383500: add    r8d,DWORD PTR [r10+rcx*4+0x64]
0x141383505: xor    ecx,ecx
0x141383507: mov    eax,0x51eb851f
0x14138350c: test   r8d,r8d
0x14138350f: cmovns ecx,r8d
0x141383513: imul   ecx
0x141383515: mov    r11d,edx
0x141383518: sar    r11d,0x5
0x14138351c: mov    eax,r11d
0x14138351f: shr    eax,0x1f
0x141383522: add    r11d,eax
0x141383525: imul   rax,rsi,0x1c
0x141383529: add    r11d,ebx
0x14138352c: mov    r8d,DWORD PTR [rax+r9*1+0xac]
0x141383534: sub    r8d,DWORD PTR [rax+r9*1+0xbc]
0x14138353c: test   r10,r10
0x14138353f: je     0x141383564
0x141383541: imul   r8d,DWORD PTR [r10+rsi*4+0x30]
0x141383547: mov    eax,0x51eb851f
0x14138354c: imul   r8d
0x14138354f: mov    r8d,edx
0x141383552: sar    r8d,0x5
0x141383556: mov    eax,r8d
0x141383559: shr    eax,0x1f
0x14138355c: add    r8d,eax
0x14138355f: add    r8d,DWORD PTR [r10+rsi*4+0x64]
0x141383564: xor    r10d,r10d
0x141383567: mov    eax,0x10624dd3
0x14138356c: test   r8d,r8d
0x14138356f: mov    ecx,r10d
0x141383572: cmovns ecx,r8d
0x141383576: imul   ecx
0x141383578: mov    ebx,edx
0x14138357a: sar    ebx,0x4
0x14138357d: mov    eax,ebx
0x14138357f: shr    eax,0x1f
0x141383582: add    ebx,eax
0x141383584: add    ebx,r11d
0x141383587: jmp    0x1413836ec
0x14138358c: movsxd r8,DWORD PTR [rbp-0x20]
0x141383590: imul   rax,r8,0x1c
0x141383594: mov    ecx,DWORD PTR [rax+r9*1+0xac]
0x14138359c: sub    ecx,DWORD PTR [rax+r9*1+0xbc]
0x1413835a4: mov    r9,QWORD PTR [rdi+0x8e8]
0x1413835ab: test   r9,r9
0x1413835ae: je     0x1413835ce
0x1413835b0: imul   ecx,DWORD PTR [r9+r8*4+0x30]
0x1413835b6: mov    eax,0x51eb851f
0x1413835bb: imul   ecx
0x1413835bd: mov    ecx,edx
0x1413835bf: sar    ecx,0x5
0x1413835c2: mov    eax,ecx
0x1413835c4: shr    eax,0x1f
0x1413835c7: add    ecx,eax
0x1413835c9: add    ecx,DWORD PTR [r9+r8*4+0x64]
0x1413835ce: xor    r10d,r10d
0x1413835d1: test   ecx,ecx
0x1413835d3: mov    r15d,r10d
0x1413835d6: cmovns r15d,ecx
0x1413835da: inc    r15d
0x1413835dd: cmp    r15d,0x1
0x1413835e1: ja     0x1413835e8
0x1413835e3: mov    ecx,r10d
0x1413835e6: jmp    0x141383629
0x1413835e8: call   0x140ece790
0x1413835ed: mov    esi,DWORD PTR [rbp-0x1c]
0x1413835f0: mov    r8d,eax
0x1413835f3: mov    ecx,r8d
0x1413835f6: mov    eax,0x3
0x1413835fb: mul    r8d
0x1413835fe: mov    eax,0x7fffffff
0x141383603: sub    ecx,edx
0x141383605: shr    ecx,1
0x141383607: add    ecx,edx
0x141383609: xor    edx,edx
0x14138360b: div    r15d
0x14138360e: shr    ecx,0x1e
0x141383611: xor    edx,edx
0x141383613: imul   ecx,ecx,0x7fffffff
0x141383619: sub    r8d,ecx
0x14138361c: lea    ecx,[rax+0x1]
0x14138361f: mov    eax,r8d
0x141383622: div    ecx
0x141383624: xor    r10d,r10d
0x141383627: mov    ecx,eax
0x141383629: mov    eax,0x51eb851f
0x14138362e: imul   ecx
0x141383630: sar    edx,0x5
0x141383633: mov    eax,edx
0x141383635: shr    eax,0x1f
0x141383638: add    edx,eax
0x14138363a: add    ebx,edx
0x14138363c: mov    rdx,QWORD PTR [rdi+0xa98]
0x141383643: test   rdx,rdx
0x141383646: je     0x1413836d6
0x14138364c: mov    r9,QWORD PTR [rdi+0x8e8]
0x141383653: movsxd r8,esi
0x141383656: imul   rax,r8,0x1c
0x14138365a: mov    ecx,DWORD PTR [rax+rdx*1+0xac]
0x141383661: sub    ecx,DWORD PTR [rax+rdx*1+0xbc]
0x141383668: test   r9,r9
0x14138366b: je     0x14138368b
0x14138366d: imul   ecx,DWORD PTR [r9+r8*4+0x30]
0x141383673: mov    eax,0x51eb851f
0x141383678: imul   ecx
0x14138367a: mov    ecx,edx
0x14138367c: sar    ecx,0x5
0x14138367f: mov    eax,ecx
0x141383681: shr    eax,0x1f
0x141383684: add    ecx,eax
0x141383686: add    ecx,DWORD PTR [r9+r8*4+0x64]
0x14138368b: test   ecx,ecx
0x14138368d: mov    esi,r10d
0x141383690: cmovns esi,ecx
0x141383693: inc    esi
0x141383695: cmp    esi,0x1
0x141383698: jbe    0x1413836d6
0x14138369a: call   0x140ece790
0x14138369f: mov    r8d,eax
0x1413836a2: mov    eax,0x3
0x1413836a7: mul    r8d
0x1413836aa: mov    ecx,r8d
0x1413836ad: mov    eax,0x7fffffff
0x1413836b2: sub    ecx,edx
0x1413836b4: shr    ecx,1
0x1413836b6: add    ecx,edx
0x1413836b8: xor    edx,edx
0x1413836ba: div    esi
0x1413836bc: shr    ecx,0x1e
0x1413836bf: xor    edx,edx
0x1413836c1: imul   ecx,ecx,0x7fffffff
0x1413836c7: sub    r8d,ecx
0x1413836ca: lea    ecx,[rax+0x1]
0x1413836cd: mov    eax,r8d
0x1413836d0: div    ecx
0x1413836d2: mov    ecx,eax
0x1413836d4: jmp    0x1413836d9
0x1413836d6: mov    ecx,r10d
0x1413836d9: mov    eax,0x10624dd3
0x1413836de: imul   ecx
0x1413836e0: sar    edx,0x4
0x1413836e3: mov    eax,edx
0x1413836e5: shr    eax,0x1f
0x1413836e8: add    edx,eax
0x1413836ea: add    ebx,edx
0x1413836ec: test   r14d,r14d
0x1413836ef: jle    0x141383823
0x1413836f5: mov    edx,DWORD PTR [rbp-0x20]
0x1413836f8: mov    r8d,r14d
0x1413836fb: mov    rcx,rdi
0x1413836fe: call   0x1413e3da0
0x141383703: mov    edx,DWORD PTR [rbp-0x1c]
0x141383706: jmp    0x141383818
0x14138370b: movsxd r10,DWORD PTR [rbp-0x20]
0x14138370f: cmp    r10d,0xffffffff
0x141383713: je     0x141383823
0x141383719: imul   rax,r10,0x1c
0x14138371d: bt     r12d,0x8
0x141383722: jae    0x141383771
0x141383724: mov    r8d,DWORD PTR [rax+r9*1+0xac]
0x14138372c: sub    r8d,DWORD PTR [rax+r9*1+0xbc]
0x141383734: mov    r9,QWORD PTR [rdi+0x8e8]
0x14138373b: test   r9,r9
0x14138373e: je     0x141383763
0x141383740: imul   r8d,DWORD PTR [r9+r10*4+0x30]
0x141383746: mov    eax,0x51eb851f
0x14138374b: imul   r8d
0x14138374e: mov    r8d,edx
0x141383751: sar    r8d,0x5
0x141383755: mov    eax,r8d
0x141383758: shr    eax,0x1f
0x14138375b: add    r8d,eax
0x14138375e: add    r8d,DWORD PTR [r9+r10*4+0x64]
0x141383763: xor    ecx,ecx
0x141383765: test   r8d,r8d
0x141383768: cmovns ecx,r8d
0x14138376c: jmp    0x1413837fd
0x141383771: mov    ecx,DWORD PTR [rax+r9*1+0xac]
0x141383779: sub    ecx,DWORD PTR [rax+r9*1+0xbc]
0x141383781: mov    r9,QWORD PTR [rdi+0x8e8]
0x141383788: test   r9,r9
0x14138378b: je     0x1413837ab
0x14138378d: imul   ecx,DWORD PTR [r9+r10*4+0x30]
0x141383793: mov    eax,0x51eb851f
0x141383798: imul   ecx
0x14138379a: mov    ecx,edx
0x14138379c: sar    ecx,0x5
0x14138379f: mov    eax,ecx
0x1413837a1: shr    eax,0x1f
0x1413837a4: add    ecx,eax
0x1413837a6: add    ecx,DWORD PTR [r9+r10*4+0x64]
0x1413837ab: xor    edx,edx
0x1413837ad: test   ecx,ecx
0x1413837af: mov    esi,edx
0x1413837b1: cmovns esi,ecx
0x1413837b4: inc    esi
0x1413837b6: cmp    esi,0x1
0x1413837b9: ja     0x1413837bf
0x1413837bb: mov    ecx,edx
0x1413837bd: jmp    0x1413837fd
0x1413837bf: call   0x140ece790
0x1413837c4: mov    r10d,DWORD PTR [rbp-0x20]
0x1413837c8: mov    r8d,eax
0x1413837cb: mov    ecx,r8d
0x1413837ce: mov    eax,0x3
0x1413837d3: mul    r8d
0x1413837d6: mov    eax,0x7fffffff
0x1413837db: sub    ecx,edx
0x1413837dd: shr    ecx,1
0x1413837df: add    ecx,edx
0x1413837e1: xor    edx,edx
0x1413837e3: div    esi
0x1413837e5: shr    ecx,0x1e
0x1413837e8: xor    edx,edx
0x1413837ea: imul   ecx,ecx,0x7fffffff
0x1413837f0: sub    r8d,ecx
0x1413837f3: lea    ecx,[rax+0x1]
0x1413837f6: mov    eax,r8d
0x1413837f9: div    ecx
0x1413837fb: mov    ecx,eax
0x1413837fd: mov    eax,0x51eb851f
0x141383802: imul   ecx
0x141383804: sar    edx,0x5
0x141383807: mov    eax,edx
0x141383809: shr    eax,0x1f
0x14138380c: add    edx,eax
0x14138380e: add    ebx,edx
0x141383810: test   r14d,r14d
0x141383813: jle    0x141383823
0x141383815: mov    edx,r10d
0x141383818: mov    r8d,r14d
0x14138381b: mov    rcx,rdi
0x14138381e: call   0x1413e3da0
0x141383823: mov    rcx,QWORD PTR [rdi+0xa98]
0x14138382a: add    rcx,0x248
0x141383831: call   0x140e43f70
0x141383836: mov    r9,QWORD PTR [rdi+0xa98]
0x14138383d: mov    eax,DWORD PTR [r9+0x3cc]
0x141383844: cmp    eax,0x1
0x141383847: jne    0x141383852
0x141383849: cmp    DWORD PTR [r9+0x3d0],eax
0x141383850: je     0x14138385f
0x141383852: imul   eax,ebx
0x141383855: cdq
0x141383856: idiv   DWORD PTR [r9+0x3d0]
0x14138385d: mov    ebx,eax
0x14138385f: mov    r15,QWORD PTR [rbp+0x78]
0x141383863: movzx  r14d,WORD PTR [rbp+0x48]
0x141383868: cmp    r14w,0x11
0x14138386d: jne    0x14138388e
0x14138386f: test   r9,r9
0x141383872: je     0x14138388e
0x141383874: xor    r8d,r8d
0x141383877: lea    rcx,[r9+0x248]
0x14138387e: mov    edx,0x1c
0x141383883: call   0x140e29a90
0x141383888: test   al,al
0x14138388a: jne    0x14138388e
0x14138388c: sar    ebx,1
0x14138388e: test   r12b,0x40
0x141383892: je     0x1413838ba
0x141383894: mov    rcx,QWORD PTR [rdi+0xa98]
0x14138389b: test   rcx,rcx
0x14138389e: je     0x1413838ba
0x1413838a0: xor    r8d,r8d
0x1413838a3: add    rcx,0x248
0x1413838aa: mov    edx,0x2b
0x1413838af: call   0x140e29a90
0x1413838b4: test   al,al
0x1413838b6: jne    0x1413838ba
0x1413838b8: sar    ebx,1
0x1413838ba: cmp    r14w,0x17
0x1413838bf: jne    0x1413838e7
0x1413838c1: mov    rcx,QWORD PTR [rdi+0xa98]
0x1413838c8: test   rcx,rcx
0x1413838cb: je     0x1413838e7
0x1413838cd: xor    r8d,r8d
0x1413838d0: add    rcx,0x248
0x1413838d7: mov    edx,0x2c
0x1413838dc: call   0x140e29a90
0x1413838e1: test   al,al
0x1413838e3: jne    0x1413838e7
0x1413838e5: sar    ebx,1
0x1413838e7: mov    esi,0xa
0x1413838ec: test   r12b,0x10
0x1413838f0: je     0x14138393c
0x1413838f2: mov    ecx,0xffffffff
0x1413838f7: mov    eax,r12d
0x1413838fa: mov    DWORD PTR [rsp+0x50],ecx
0x1413838fe: and    eax,0x20
0x141383901: mov    WORD PTR [rsp+0x48],cx
0x141383906: mov    edx,0x11
0x14138390b: mov    DWORD PTR [rsp+0x40],eax
0x14138390f: mov    r9d,0x5
0x141383915: xor    eax,eax
0x141383917: mov    r8d,0xb
0x14138391d: mov    QWORD PTR [rsp+0x38],rax
0x141383922: mov    rcx,rdi
0x141383925: mov    QWORD PTR [rsp+0x30],rax
0x14138392a: mov    DWORD PTR [rsp+0x28],esi
0x14138392e: mov    DWORD PTR [rsp+0x20],esi
0x141383932: call   0x1413812a0
0x141383937: cmp    ebx,eax
0x141383939: cmovg  ebx,eax
0x14138393c: cmp    DWORD PTR [rdi+0x81c],0x0
0x141383943: jle    0x141383951
0x141383945: cmp    WORD PTR [rdi+0x814],0xffff
0x14138394d: jne    0x141383951
0x14138394f: sar    ebx,1
0x141383951: cmp    WORD PTR [rdi+0x7fc],0x0
0x141383959: jle    0x141383967
0x14138395b: cmp    WORD PTR [rdi+0x814],0xffff
0x141383963: jne    0x141383967
0x141383965: sar    ebx,1
0x141383967: cmp    WORD PTR [rdi+0x7fe],0x0
0x14138396f: jle    0x14138397d
0x141383971: cmp    WORD PTR [rdi+0x814],0xffff
0x141383979: jne    0x14138397d
0x14138397b: sar    ebx,1
0x14138397d: cmp    DWORD PTR [rdi+0x820],0x0
0x141383984: jle    0x141383992
0x141383986: cmp    WORD PTR [rdi+0x814],0xffff
0x14138398e: jne    0x141383992
0x141383990: sar    ebx,1
0x141383992: cmp    DWORD PTR [rdi+0x980],0x0
0x141383999: jle    0x1413839a7
0x14138399b: cmp    WORD PTR [rdi+0x814],0xffff
0x1413839a3: jne    0x1413839a7
0x1413839a5: sar    ebx,1
0x1413839a7: mov    rcx,rdi
0x1413839aa: call   0x14139bee0
0x1413839af: test   eax,eax
0x1413839b1: jne    0x1413839b6
0x1413839b3: sar    ebx,0x2
0x1413839b6: cmp    DWORD PTR [rdi+0x818],0x64
0x1413839bd: jl     0x1413839d5
0x1413839bf: cmp    WORD PTR [rdi+0x814],0x0
0x1413839c7: je     0x1413839d5
0x1413839c9: cmp    WORD PTR [rdi+0x360],0xffff
0x1413839d1: jne    0x1413839d5
0x1413839d3: sar    ebx,1
0x1413839d5: mov    ecx,DWORD PTR [rdi+0x984]
0x1413839db: cmp    ecx,0x7d0
0x1413839e1: jl     0x1413839fa
0x1413839e3: cmp    WORD PTR [rdi+0x814],0x0
0x1413839eb: je     0x1413839fa
0x1413839ed: lea    eax,[rbx+rbx*2]
0x1413839f0: cdq
0x1413839f1: and    edx,0x3
0x1413839f4: lea    ebx,[rdx+rax*1]
0x1413839f7: sar    ebx,0x2
0x1413839fa: cmp    ecx,0xfa0
0x141383a00: jl     0x141383a19
0x141383a02: cmp    WORD PTR [rdi+0x814],0x0
0x141383a0a: je     0x141383a19
0x141383a0c: lea    eax,[rbx+rbx*2]
0x141383a0f: cdq
0x141383a10: and    edx,0x3
0x141383a13: lea    ebx,[rdx+rax*1]
0x141383a16: sar    ebx,0x2
0x141383a19: cmp    ecx,0x1770
0x141383a1f: jl     0x141383a38
0x141383a21: cmp    WORD PTR [rdi+0x814],0x0
0x141383a29: je     0x141383a38
0x141383a2b: lea    eax,[rbx+rbx*2]
0x141383a2e: cdq
0x141383a2f: and    edx,0x3
0x141383a32: lea    ebx,[rdx+rax*1]
0x141383a35: sar    ebx,0x2
0x141383a38: cmp    DWORD PTR [rdi+0x1280],0x14
0x141383a3f: mov    r8d,DWORD PTR [rip+0x53a7f2]        # 0x1418be238
0x141383a46: jle    0x141383a67
0x141383a48: mov    rax,QWORD PTR [rdi+0x1278]
0x141383a4f: test   BYTE PTR [rax+0x14],0x4
0x141383a53: je     0x141383a67
0x141383a55: test   DWORD PTR [rdi+0x82c],0x10000000
0x141383a5f: jne    0x141383b10
0x141383a65: jmp    0x141383a87
0x141383a67: test   DWORD PTR [rdi+0x82c],0x10000000
0x141383a71: jne    0x141383b10
0x141383a77: test   DWORD PTR [rdi+0x828],0x10000000
0x141383a81: je     0x141383b10
0x141383a87: mov    rax,QWORD PTR [rdi+0x9a8]
0x141383a8e: mov    rcx,QWORD PTR [rdi+0x9b0]
0x141383a95: cmp    rax,rcx
0x141383a98: jae    0x141383ab6
0x141383a9a: mov    rdx,QWORD PTR [rax]
0x141383a9d: cmp    WORD PTR [rdx],0x2e
0x141383aa1: je     0x141383aa9
0x141383aa3: add    rax,0x8
0x141383aa7: jmp    0x141383a95
0x141383aa9: lea    rax,[rdx+0x4]
0x141383aad: test   rax,rax
0x141383ab0: je     0x141383ab6
0x141383ab2: mov    eax,DWORD PTR [rax]
0x141383ab4: jmp    0x141383ab8
0x141383ab6: xor    eax,eax
0x141383ab8: cmp    r8d,0x1
0x141383abc: jne    0x141383af1
0x141383abe: cmp    eax,0x24ea00
0x141383ac3: jl     0x141383adb
0x141383ac5: sar    ebx,1
0x141383ac7: mov    eax,DWORD PTR [rdi+0x98c]
0x141383acd: cmp    eax,0x54600
0x141383ad2: jl     0x141383b48
0x141383ad4: sar    ebx,1
0x141383ad6: jmp    0x141383b7b
0x141383adb: cmp    eax,0x127500
0x141383ae0: jl     0x141383ac7
0x141383ae2: lea    eax,[rbx+rbx*2]
0x141383ae5: cdq
0x141383ae6: and    edx,0x3
0x141383ae9: lea    ebx,[rdx+rax*1]
0x141383aec: sar    ebx,0x2
0x141383aef: jmp    0x141383ac7
0x141383af1: cmp    eax,0x62700
0x141383af6: jl     0x141383afc
0x141383af8: sar    ebx,1
0x141383afa: jmp    0x141383b10
0x141383afc: cmp    eax,0x49d40
0x141383b01: jl     0x141383b10
0x141383b03: lea    eax,[rbx+rbx*2]
0x141383b06: cdq
0x141383b07: and    edx,0x3
0x141383b0a: lea    ebx,[rdx+rax*1]
0x141383b0d: sar    ebx,0x2
0x141383b10: test   r8d,r8d
0x141383b13: jne    0x141383ac7
0x141383b15: cmp    DWORD PTR [rdi+0x98c],0xc350
0x141383b1f: jl     0x141383b23
0x141383b21: sar    ebx,1
0x141383b23: cmp    DWORD PTR [rdi+0x988],0x124f8
0x141383b2d: jl     0x141383b31
0x141383b2f: sar    ebx,1
0x141383b31: cmp    DWORD PTR [rdi+0x990],0x249f0
0x141383b3b: jl     0x141383c0f
0x141383b41: sar    ebx,1
0x141383b43: jmp    0x141383c0f
0x141383b48: cmp    eax,0x2a300
0x141383b4d: jl     0x141383b5e
0x141383b4f: lea    eax,[rbx+rbx*2]
0x141383b52: cdq
0x141383b53: and    edx,0x3
0x141383b56: lea    ebx,[rdx+rax*1]
0x141383b59: sar    ebx,0x2
0x141383b5c: jmp    0x141383b7b
0x141383b5e: cmp    eax,0x1c200
0x141383b63: jl     0x141383b7b
0x141383b65: lea    ecx,[rbx+rbx*8]
0x141383b68: mov    eax,0x66666667
0x141383b6d: imul   ecx
0x141383b6f: mov    ebx,edx
0x141383b71: sar    ebx,0x2
0x141383b74: mov    eax,ebx
0x141383b76: shr    eax,0x1f
0x141383b79: add    ebx,eax
0x141383b7b: mov    eax,DWORD PTR [rdi+0x988]
0x141383b81: cmp    eax,0x278d00
0x141383b86: jl     0x141383b8c
0x141383b88: sar    ebx,1
0x141383b8a: jmp    0x141383bbf
0x141383b8c: cmp    eax,0x127500
0x141383b91: jl     0x141383ba2
0x141383b93: lea    eax,[rbx+rbx*2]
0x141383b96: cdq
0x141383b97: and    edx,0x3
0x141383b9a: lea    ebx,[rdx+rax*1]
0x141383b9d: sar    ebx,0x2
0x141383ba0: jmp    0x141383bbf
0x141383ba2: cmp    eax,0x2a300
0x141383ba7: jl     0x141383bbf
0x141383ba9: lea    ecx,[rbx+rbx*8]
0x141383bac: mov    eax,0x66666667
0x141383bb1: imul   ecx
0x141383bb3: mov    ebx,edx
0x141383bb5: sar    ebx,0x2
0x141383bb8: mov    eax,ebx
0x141383bba: shr    eax,0x1f
0x141383bbd: add    ebx,eax
0x141383bbf: mov    eax,DWORD PTR [rdi+0x990]
0x141383bc5: cmp    eax,0xd2f00
0x141383bca: jl     0x141383bd1
0x141383bcc: sar    ebx,0x2
0x141383bcf: jmp    0x141383c0f
0x141383bd1: cmp    eax,0x54600
0x141383bd6: jl     0x141383bdc
0x141383bd8: sar    ebx,1
0x141383bda: jmp    0x141383c0f
0x141383bdc: cmp    eax,0x3f480
0x141383be1: jl     0x141383bf2
0x141383be3: lea    eax,[rbx+rbx*2]
0x141383be6: cdq
0x141383be7: and    edx,0x3
0x141383bea: lea    ebx,[rdx+rax*1]
0x141383bed: sar    ebx,0x2
0x141383bf0: jmp    0x141383c0f
0x141383bf2: cmp    eax,0x2a300
0x141383bf7: jl     0x141383c0f
0x141383bf9: lea    ecx,[rbx+rbx*8]
0x141383bfc: mov    eax,0x66666667
0x141383c01: imul   ecx
0x141383c03: mov    ebx,edx
0x141383c05: sar    ebx,0x2
0x141383c08: mov    eax,ebx
0x141383c0a: shr    eax,0x1f
0x141383c0d: add    ebx,eax
0x141383c0f: test   r12b,0x8
0x141383c13: je     0x141383c2c
0x141383c15: mov    eax,0x66666667
0x141383c1a: imul   DWORD PTR [rdi+0x6ac]
0x141383c20: sar    edx,0x3
0x141383c23: mov    eax,edx
0x141383c25: shr    eax,0x1f
0x141383c28: add    edx,eax
0x141383c2a: add    ebx,edx
0x141383c2c: movzx  ecx,WORD PTR [rdi+0x804]
0x141383c33: test   cx,cx
0x141383c36: jle    0x141383c3a
0x141383c38: sar    ebx,1
0x141383c3a: mov    eax,DWORD PTR [rdi+0x978]
0x141383c40: cmp    eax,0x32
0x141383c43: jl     0x141383c4a
0x141383c45: sar    ebx,0x2
0x141383c48: jmp    0x141383c50
0x141383c4a: test   eax,eax
0x141383c4c: jle    0x141383c50
0x141383c4e: sar    ebx,1
0x141383c50: cmp    WORD PTR [rdi+0x800],0x0
0x141383c58: jg     0x141383c64
0x141383c5a: cmp    cx,si
0x141383c5d: jge    0x141383c64
0x141383c5f: cmp    eax,0x64
0x141383c62: jl     0x141383c66
0x141383c64: xor    ebx,ebx
0x141383c66: cmp    r14w,0x8
0x141383c6b: jne    0x141383cb5
0x141383c6d: test   r13,r13
0x141383c70: je     0x141383d67
0x141383c76: mov    rax,QWORD PTR [r13+0x0]
0x141383c7a: mov    rcx,r13
0x141383c7d: mov    edx,DWORD PTR [rdi+0x6b0]
0x141383c83: call   QWORD PTR [rax+0x380]
0x141383c89: test   al,al
0x141383c8b: je     0x141383d67
0x141383c91: mov    r9d,0xffffffff
0x141383c97: xor    r8d,r8d
0x141383c9a: xor    edx,edx
0x141383c9c: mov    rcx,rdi
0x141383c9f: call   0x14139f2f0
0x141383ca4: cmp    ax,0xffff
0x141383ca8: jne    0x141383d67
0x141383cae: sar    ebx,1
0x141383cb0: jmp    0x141383d67
0x141383cb5: cmp    r14w,0x9
0x141383cba: jne    0x141383cf4
0x141383cbc: test   r15,r15
0x141383cbf: je     0x141383d06
0x141383cc1: mov    rax,QWORD PTR [r15]
0x141383cc4: mov    rcx,r15
0x141383cc7: mov    edx,DWORD PTR [rdi+0x6b0]
0x141383ccd: call   QWORD PTR [rax+0x380]
0x141383cd3: test   al,al
0x141383cd5: je     0x141383d06
0x141383cd7: mov    r9d,0xffffffff
0x141383cdd: xor    r8d,r8d
0x141383ce0: xor    edx,edx
0x141383ce2: mov    rcx,rdi
0x141383ce5: call   0x14139f2f0
0x141383cea: cmp    ax,0xffff
0x141383cee: jne    0x141383d06
0x141383cf0: sar    ebx,1
0x141383cf2: jmp    0x141383d06
0x141383cf4: cmp    r14w,si
0x141383cf8: je     0x141383d06
0x141383cfa: sub    r14w,0x39
0x141383cff: cmp    r14w,0x2
0x141383d04: ja     0x141383d67
0x141383d06: cmp    DWORD PTR [rdi+0x3dc],0xffffffff
0x141383d0d: je     0x141383d67
0x141383d0f: mov    edx,0x86
0x141383d14: mov    rcx,rdi
0x141383d17: call   0x1413570b0
0x141383d1c: test   eax,eax
0x141383d1e: jg     0x141383d2e
0x141383d20: mov    eax,ebx
0x141383d22: cdq
0x141383d23: and    edx,0x3
0x141383d26: lea    ebx,[rdx+rax*1]
0x141383d29: sar    ebx,0x2
0x141383d2c: jmp    0x141383d67
0x141383d2e: cmp    eax,0x1
0x141383d31: jne    0x141383d43
0x141383d33: mov    eax,0x55555556
0x141383d38: imul   ebx
0x141383d3a: mov    ebx,edx
0x141383d3c: shr    ebx,0x1f
0x141383d3f: add    ebx,edx
0x141383d41: jmp    0x141383d67
0x141383d43: mov    ecx,0xf
0x141383d48: cmp    eax,ecx
0x141383d4a: cmovg  eax,ecx
0x141383d4d: lea    ecx,[rax+0xf]
0x141383d50: mov    eax,0x88888889
0x141383d55: imul   ecx,ebx
0x141383d58: imul   ecx
0x141383d5a: lea    ebx,[rcx+rdx*1]
0x141383d5d: sar    ebx,0x4
0x141383d60: mov    eax,ebx
0x141383d62: shr    eax,0x1f
0x141383d65: add    ebx,eax
0x141383d67: test   r12b,0x2
0x141383d6b: je     0x141383d89
0x141383d6d: movzx  eax,WORD PTR [rdi+0x814]
0x141383d74: dec    ax
0x141383d77: cmp    ax,0x1
0x141383d7b: jbe    0x141383d87
0x141383d7d: cmp    WORD PTR [rdi+0x360],0x7
0x141383d85: jne    0x141383d89
0x141383d87: sar    ebx,1
0x141383d89: test   r12b,r12b
0x141383d8c: jns    0x141383db5
0x141383d8e: mov    eax,DWORD PTR [rdi+0x4c8]
0x141383d94: cmp    eax,esi
0x141383d96: jge    0x141383db9
0x141383d98: cmp    eax,0x1
0x141383d9b: jl     0x141383db5
0x141383d9d: sub    esi,eax
0x141383d9f: mov    eax,0x66666667
0x141383da4: imul   esi,ebx
0x141383da7: imul   esi
0x141383da9: mov    ebx,edx
0x141383dab: sar    ebx,0x2
0x141383dae: mov    eax,ebx
0x141383db0: shr    eax,0x1f
0x141383db3: add    ebx,eax
0x141383db5: test   ebx,ebx
0x141383db7: jns    0x141383dc1
0x141383db9: xor    r8d,r8d
0x141383dbc: mov    ebx,r8d
0x141383dbf: jmp    0x141383dc4
0x141383dc1: xor    r8d,r8d
0x141383dc4: mov    ecx,DWORD PTR [rdi+0x8f0]
0x141383dca: cmp    ecx,0x64
0x141383dcd: je     0x141383de5
0x141383dcf: imul   ebx,ecx
0x141383dd2: mov    eax,0x51eb851f
0x141383dd7: imul   ebx
0x141383dd9: mov    ebx,edx
0x141383ddb: sar    ebx,0x5
0x141383dde: mov    eax,ebx
0x141383de0: shr    eax,0x1f
0x141383de3: add    ebx,eax
0x141383de5: test   BYTE PTR [rdi+0x110],0x2
0x141383dec: cmovne ebx,r8d
0x141383df0: test   r12b,0x4
0x141383df4: je     0x141383e0d
0x141383df6: mov    eax,0x66666667
0x141383dfb: imul   DWORD PTR [rdi+0x6ac]
0x141383e01: sar    edx,0x3
0x141383e04: mov    ecx,edx
0x141383e06: shr    ecx,0x1f
0x141383e09: add    edx,ecx
0x141383e0b: add    ebx,edx
0x141383e0d: mov    eax,ebx
0x141383e0f: mov    rbx,QWORD PTR [rsp+0xc0]
0x141383e17: add    rsp,0x80
0x141383e1e: pop    r15
0x141383e20: pop    r14
0x141383e22: pop    r13
0x141383e24: pop    r12
0x141383e26: pop    rdi
0x141383e27: pop    rsi
0x141383e28: pop    rbp
0x141383e29: ret
0x141383e2a: xchg   ax,ax
0x141383e2c: mov    ah,0x23
0x141383e2e: cmp    BYTE PTR [rcx],al
0x141383e30: mov    ah,0x23
0x141383e32: cmp    BYTE PTR [rcx],al
0x141383e34: and    DWORD PTR [rax+rdi*1],esp
0x141383e37: add    DWORD PTR [rsi-0x71fec7dc],ecx
0x141383e3d: and    al,0x38
0x141383e3f: add    DWORD PTR [rbx+riz*1+0x209e0138],esi
0x141383e46: cmp    BYTE PTR [rcx],al
0x141383e48: mul    DWORD PTR [rax+rdi*1]
0x141383e4b: add    DWORD PTR [rdx+0x21],ebp
0x141383e4e: cmp    BYTE PTR [rcx],al
0x141383e50: rex.RX and r15b,BYTE PTR [rax]
0x141383e53: add    DWORD PTR [rbp+riz*1+0x38],esp
0x141383e57: add    eax,ebp
0x141383e59: and    eax,0x26550138
0x141383e5e: cmp    BYTE PTR [rcx],al
0x141383e60: ret    0x3826
0x141383e63: add    eax,ebp
0x141383e65: and    eax,0x28760138
0x141383e6a: cmp    BYTE PTR [rcx],al
0x141383e6c: mov    ebp,0x2a013829
0x141383e71: sub    bh,BYTE PTR [rax]
0x141383e73: add    DWORD PTR [rsi-0x61fec7e0],ebx
0x141383e79: and    BYTE PTR [rax],bh
0x141383e7b: add    DWORD PTR [rsi-0x68fec7e0],ebx
0x141383e81: sub    bh,BYTE PTR [rax]
0x141383e83: add    DWORD PTR [rbx+rbp*1],eax
0x141383e86: cmp    BYTE PTR [rcx],al
0x141383e88: jrcxz  0x141383eb2
0x141383e8a: cmp    BYTE PTR [rcx],al
0x141383e8c: push   rax
0x141383e8d: sub    DWORD PTR [rax],edi
0x141383e8f: add    DWORD PTR [rcx+0x2b],esi
0x141383e92: cmp    BYTE PTR [rcx],al
0x141383e94: push   rbp
0x141383e95: es cmp BYTE PTR [rcx],al
0x141383e98: push   rbp
0x141383e99: es cmp BYTE PTR [rcx],al
0x141383e9c: out    dx,al
0x141383e9d: sub    edi,DWORD PTR [rax]
0x141383e9f: add    esi,ebp
0x141383ea1: sub    edi,DWORD PTR [rax]
0x141383ea3: add    eax,ebp
0x141383ea5: and    eax,0x25e80138
0x141383eaa: cmp    BYTE PTR [rcx],al
0x141383eac: pop    rbx
0x141383ead: sub    al,0x38
0x141383eaf: add    eax,ebp
0x141383eb1: and    eax,0x279c0138
0x141383eb6: cmp    BYTE PTR [rcx],al
0x141383eb8: (bad)
0x141383eb9: (bad)
0x141383eba: cmp    BYTE PTR [rcx],al
0x141383ebc: or     DWORD PTR [rax],ebp
0x141383ebe: cmp    BYTE PTR [rcx],al
0x141383ec0: (bad)
0x141383ec1: adc    edi,DWORD PTR [rax]
0x141383ec3: add    DWORD PTR [rdi+0x64013814],edi
0x141383ec9: (bad)
0x141383eca: cmp    BYTE PTR [rcx],al
0x141383ecc: pop    rsp
0x141383ecd: (bad)
0x141383ece: cmp    BYTE PTR [rcx],al
0x141383ed0: fcomp  DWORD PTR [rax+rdi*1]
0x141383ed3: add    DWORD PTR [rbp+0x1d],eax
0x141383ed6: cmp    BYTE PTR [rcx],al
0x141383ed8: in     eax,0x1d
0x141383eda: cmp    BYTE PTR [rcx],al
0x141383edc: nop    DWORD PTR [rax]
0x141383edf: add    DWORD PTR [rdx],eax
0x141383ee1: and    BYTE PTR [rax],bh
0x141383ee3: add    DWORD PTR [rbx],eax
0x141383ee5: sbb    DWORD PTR [rax],edi
0x141383ee7: add    DWORD PTR [rax+0x19],esi
0x141383eea: cmp    BYTE PTR [rcx],al
0x141383eec: xchg   esi,eax
0x141383eed: sbb    BYTE PTR [rax],bh
0x141383eef: add    ebp,ebx
0x141383ef1: sbb    DWORD PTR [rax],edi
0x141383ef3: add    DWORD PTR [rdx+0x1a],ecx
0x141383ef6: cmp    BYTE PTR [rcx],al
0x141383ef8: mov    bh,0x1a
0x141383efa: cmp    BYTE PTR [rcx],al
0x141383efc: and    al,0x1b
0x141383efe: cmp    BYTE PTR [rcx],al
0x141383f00: xchg   ecx,eax
0x141383f01: sbb    edi,DWORD PTR [rax]
0x141383f03: add    esi,edi
0x141383f05: sbb    edi,DWORD PTR [rax]
0x141383f07: add    DWORD PTR [rbx+0x1c],ebp
0x141383f0a: cmp    BYTE PTR [rcx],al
0x141383f0c: fcomp  DWORD PTR [rax+rdi*1]
0x141383f0f: add    DWORD PTR [rdi],ebx
0x141383f11: and    edi,DWORD PTR [rax]
0x141383f13: add    DWORD PTR [rdi],ebx
0x141383f15: and    edi,DWORD PTR [rax]
0x141383f17: add    DWORD PTR [rdi],ebx
0x141383f19: and    edi,DWORD PTR [rax]
0x141383f1b: add    edi,ecx
0x141383f1d: sub    eax,0x2e1d0138
0x141383f22: cmp    BYTE PTR [rcx],al
0x141383f2c: add    BYTE PTR [rax],al
0x141383f2e: add    BYTE PTR [rcx],al
0x141383f30: add    DWORD PTR [rax],eax
0x141383f32: add    DWORD PTR [rcx],eax
0x141383f34: add    DWORD PTR [rcx],eax
0x141383f36: add    BYTE PTR [rax],al
0x141383f38: add    BYTE PTR [rax],al
0x141383f3a: add    DWORD PTR [rcx],eax
0x141383f3c: add    DWORD PTR [rcx],eax
0x141383f3e: add    DWORD PTR [rcx],eax
0x141383f40: add    DWORD PTR [rcx],eax
0x141383f42: add    DWORD PTR [rcx],eax
0x141383f44: add    DWORD PTR [rcx],eax
0x141383f46: add    DWORD PTR [rcx],eax
0x141383f48: add    DWORD PTR [rcx],eax
0x141383f4a: add    DWORD PTR [rax],eax
0x141383f4c: add    DWORD PTR [rcx],eax
0x141383f4e: add    DWORD PTR [rcx],eax
0x141383f50: add    DWORD PTR [rcx],eax
0x141383f52: add    DWORD PTR [rcx],eax
0x141383f54: add    DWORD PTR [rcx],eax
0x141383f56: add    DWORD PTR [rcx],eax
0x141383f58: add    DWORD PTR [rcx],eax
0x141383f5a: add    DWORD PTR [rcx],eax
0x141383f5c: add    DWORD PTR [rax],eax
