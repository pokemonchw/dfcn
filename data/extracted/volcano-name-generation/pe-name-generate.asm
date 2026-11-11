0x140aac300: mov    QWORD PTR [rsp+0x10],rbx
0x140aac305: push   rbp
0x140aac306: push   rsi
0x140aac307: push   rdi
0x140aac308: push   r12
0x140aac30a: push   r13
0x140aac30c: push   r14
0x140aac30e: push   r15
0x140aac310: sub    rsp,0x100
0x140aac317: mov    rax,QWORD PTR [rip+0xe11d22]        # 0x1418be040
0x140aac31e: xor    rax,rsp
0x140aac321: mov    QWORD PTR [rsp+0xf0],rax
0x140aac329: mov    r15,QWORD PTR [rsp+0x160]
0x140aac331: lea    rdi,[rcx+0x40]
0x140aac335: lea    r11,[rcx+0x48]
0x140aac339: mov    QWORD PTR [rsp+0x28],rdi
0x140aac33e: lea    rbp,[rcx+0x66]
0x140aac342: mov    QWORD PTR [rsp+0x80],rdi
0x140aac34a: lea    r12,[rcx+0x44]
0x140aac34e: mov    QWORD PTR [rsp+0x20],r9
0x140aac353: lea    r13,[rcx+0x50]
0x140aac357: mov    WORD PTR [rsp+0x30],r8w
0x140aac35d: lea    rsi,[rcx+0x4c]
0x140aac361: mov    DWORD PTR [rsp+0x44],edx
0x140aac365: lea    r14,[rcx+0x54]
0x140aac369: mov    DWORD PTR [rsp+0x50],0x64
0x140aac371: mov    rbx,rcx
0x140aac374: mov    QWORD PTR [rsp+0x48],r11
0x140aac379: add    rcx,0x72
0x140aac37d: mov    QWORD PTR [rsp+0x78],r11
0x140aac382: mov    rax,rcx
0x140aac385: mov    QWORD PTR [rsp+0x38],rbp
0x140aac38a: mov    edi,0xffffffff
0x140aac38f: mov    QWORD PTR [rsp+0x98],rbp
0x140aac397: xor    r9d,r9d
0x140aac39a: mov    QWORD PTR [rsp+0x88],r12
0x140aac3a2: movzx  r10d,r8w
0x140aac3a6: mov    QWORD PTR [rsp+0x90],r13
0x140aac3ae: mov    QWORD PTR [rsp+0x68],rsi
0x140aac3b3: mov    QWORD PTR [rsp+0x70],r14
0x140aac3b8: nop    DWORD PTR [rax+rax*1+0x0]
0x140aac3c0: mov    QWORD PTR [rsp+0x58],rax
0x140aac3c5: cmp    r10w,0x8
0x140aac3ca: je     0x140aac3db
0x140aac3cc: mov    QWORD PTR [rsp+0x58],rcx
0x140aac3d1: mov    rax,rcx
0x140aac3d4: cmp    r10w,0x9
0x140aac3d9: jne    0x140aac3e4
0x140aac3db: cmp    BYTE PTR [rax],0x0
0x140aac3de: jne    0x140aac568
0x140aac3e4: mov    rax,QWORD PTR [rsp+0x68]
0x140aac3e9: mov    rsi,QWORD PTR [rsp+0x80]
0x140aac3f1: mov    r14,QWORD PTR [rsp+0x88]
0x140aac3f9: mov    r13,QWORD PTR [rsp+0x90]
0x140aac401: mov    rbp,QWORD PTR [rsp+0x98]
0x140aac409: mov    DWORD PTR [rsi],edi
0x140aac40b: mov    WORD PTR [rbx+0x5c],r9w
0x140aac410: mov    DWORD PTR [r14],edi
0x140aac413: mov    WORD PTR [rbx+0x5e],r9w
0x140aac418: mov    DWORD PTR [r11],edi
0x140aac41b: mov    WORD PTR [rbx+0x60],r9w
0x140aac420: mov    DWORD PTR [rax],edi
0x140aac422: mov    rax,QWORD PTR [rsp+0x70]
0x140aac427: mov    WORD PTR [rbx+0x62],r9w
0x140aac42c: mov    DWORD PTR [r13+0x0],edi
0x140aac430: mov    WORD PTR [rbx+0x64],r9w
0x140aac435: mov    DWORD PTR [rax],edi
0x140aac437: mov    rax,rbx
0x140aac43a: mov    WORD PTR [rbp+0x0],r9w
0x140aac43f: mov    DWORD PTR [rbx+0x58],edi
0x140aac442: mov    WORD PTR [rbx+0x68],r9w
0x140aac447: mov    DWORD PTR [rbx+0x6c],edi
0x140aac44a: mov    WORD PTR [rbx+0x70],di
0x140aac44e: mov    QWORD PTR [rbx+0x10],r9
0x140aac452: cmp    QWORD PTR [rbx+0x18],0xf
0x140aac457: jbe    0x140aac45c
0x140aac459: mov    rax,QWORD PTR [rbx]
0x140aac45c: mov    BYTE PTR [rax],0x0
0x140aac45f: lea    rax,[rbx+0x20]
0x140aac463: mov    QWORD PTR [rax+0x10],r9
0x140aac467: cmp    QWORD PTR [rax+0x18],0xf
0x140aac46c: jbe    0x140aac471
0x140aac46e: mov    rax,QWORD PTR [rax]
0x140aac471: mov    BYTE PTR [rax],0x0
0x140aac474: lea    rax,[rbx+0x72]
0x140aac478: mov    QWORD PTR [rsp+0x58],rax
0x140aac47d: mov    BYTE PTR [rax],0x0
0x140aac480: cmp    edx,0xffffffff
0x140aac483: jne    0x140aac544
0x140aac489: mov    rax,QWORD PTR [rip+0x1a63790]        # 0x14250fc20
0x140aac490: mov    edi,r9d
0x140aac493: mov    rcx,QWORD PTR [rip+0x1a6378e]        # 0x14250fc28
0x140aac49a: mov    r8,r9
0x140aac49d: nop    DWORD PTR [rax]
0x140aac4a0: cmp    rax,rcx
0x140aac4a3: jae    0x140aac4ca
0x140aac4a5: mov    rdx,QWORD PTR [rax]
0x140aac4a8: test   BYTE PTR [rdx+0x68],0x1
0x140aac4ac: jne    0x140aac4c1
0x140aac4ae: cmp    r8,0x14
0x140aac4b2: jge    0x140aac4c1
0x140aac4b4: inc    edi
0x140aac4b6: mov    DWORD PTR [rsp+r8*4+0xa0],r9d
0x140aac4be: inc    r8
0x140aac4c1: add    rax,0x8
0x140aac4c5: inc    r9d
0x140aac4c8: jmp    0x140aac4a0
0x140aac4ca: test   edi,edi
0x140aac4cc: jle    0x140aac535
0x140aac4ce: cmp    edi,0x1
0x140aac4d1: ja     0x140aac4e4
0x140aac4d3: xor    r9d,r9d
0x140aac4d6: mov    eax,r9d
0x140aac4d9: cdqe
0x140aac4db: mov    edx,DWORD PTR [rsp+rax*4+0xa0]
0x140aac4e2: jmp    0x140aac53b
0x140aac4e4: call   0x140ece790
0x140aac4e9: movzx  r10d,WORD PTR [rsp+0x30]
0x140aac4ef: mov    r8d,eax
0x140aac4f2: mov    r11,QWORD PTR [rsp+0x78]
0x140aac4f7: mov    eax,0x3
0x140aac4fc: mul    r8d
0x140aac4ff: mov    eax,r8d
0x140aac502: sub    eax,edx
0x140aac504: shr    eax,1
0x140aac506: add    eax,edx
0x140aac508: xor    edx,edx
0x140aac50a: shr    eax,0x1e
0x140aac50d: imul   eax,eax,0x7fffffff
0x140aac513: sub    r8d,eax
0x140aac516: mov    eax,0x7fffffff
0x140aac51b: div    edi
0x140aac51d: xor    edx,edx
0x140aac51f: lea    ecx,[rax+0x1]
0x140aac522: mov    eax,r8d
0x140aac525: div    ecx
0x140aac527: xor    r9d,r9d
0x140aac52a: cdqe
0x140aac52c: mov    edx,DWORD PTR [rsp+rax*4+0xa0]
0x140aac533: jmp    0x140aac53b
0x140aac535: xor    r9d,r9d
0x140aac538: mov    edx,r9d
0x140aac53b: mov    rax,QWORD PTR [rsp+0x58]
0x140aac540: mov    DWORD PTR [rsp+0x44],edx
0x140aac544: mov    QWORD PTR [rsp+0x28],rsi
0x140aac549: mov    r12,r14
0x140aac54c: mov    rsi,QWORD PTR [rsp+0x68]
0x140aac551: mov    r14,QWORD PTR [rsp+0x70]
0x140aac556: mov    WORD PTR [rbx+0x70],r10w
0x140aac55b: mov    DWORD PTR [rbx+0x6c],edx
0x140aac55e: mov    QWORD PTR [rsp+0x48],r11
0x140aac563: mov    QWORD PTR [rsp+0x38],rbp
0x140aac568: cmp    DWORD PTR [rbx+0x6c],0xffffffff
0x140aac56c: mov    BYTE PTR [rax],0x1
0x140aac56f: jne    0x140aac62d
0x140aac575: mov    rax,QWORD PTR [rip+0x1a636a4]        # 0x14250fc20
0x140aac57c: mov    edi,r9d
0x140aac57f: mov    rcx,QWORD PTR [rip+0x1a636a2]        # 0x14250fc28
0x140aac586: mov    r8,r9
0x140aac589: nop    DWORD PTR [rax+0x0]
0x140aac590: cmp    rax,rcx
0x140aac593: jae    0x140aac5ba
0x140aac595: mov    rdx,QWORD PTR [rax]
0x140aac598: test   BYTE PTR [rdx+0x68],0x1
0x140aac59c: jne    0x140aac5b1
0x140aac59e: cmp    r8,0x14
0x140aac5a2: jge    0x140aac5b1
0x140aac5a4: inc    edi
0x140aac5a6: mov    DWORD PTR [rsp+r8*4+0xa0],r9d
0x140aac5ae: inc    r8
0x140aac5b1: add    rax,0x8
0x140aac5b5: inc    r9d
0x140aac5b8: jmp    0x140aac590
0x140aac5ba: test   edi,edi
0x140aac5bc: jle    0x140aac626
0x140aac5be: cmp    edi,0x1
0x140aac5c1: ja     0x140aac5d7
0x140aac5c3: xor    r9d,r9d
0x140aac5c6: mov    eax,r9d
0x140aac5c9: cdqe
0x140aac5cb: mov    ecx,DWORD PTR [rsp+rax*4+0xa0]
0x140aac5d2: mov    DWORD PTR [rbx+0x6c],ecx
0x140aac5d5: jmp    0x140aac62d
0x140aac5d7: call   0x140ece790
0x140aac5dc: movzx  r10d,WORD PTR [rsp+0x30]
0x140aac5e2: mov    r8d,eax
0x140aac5e5: mov    eax,0x3
0x140aac5ea: mov    ecx,r8d
0x140aac5ed: mul    r8d
0x140aac5f0: mov    eax,0x7fffffff
0x140aac5f5: sub    ecx,edx
0x140aac5f7: shr    ecx,1
0x140aac5f9: add    ecx,edx
0x140aac5fb: xor    edx,edx
0x140aac5fd: div    edi
0x140aac5ff: shr    ecx,0x1e
0x140aac602: xor    edx,edx
0x140aac604: imul   ecx,ecx,0x7fffffff
0x140aac60a: sub    r8d,ecx
0x140aac60d: lea    ecx,[rax+0x1]
0x140aac610: mov    eax,r8d
0x140aac613: div    ecx
0x140aac615: xor    r9d,r9d
0x140aac618: cdqe
0x140aac61a: mov    ecx,DWORD PTR [rsp+rax*4+0xa0]
0x140aac621: mov    DWORD PTR [rbx+0x6c],ecx
0x140aac624: jmp    0x140aac62d
0x140aac626: xor    r9d,r9d
0x140aac629: mov    DWORD PTR [rbx+0x6c],r9d
0x140aac62d: movsx  rax,r10w
0x140aac631: cmp    eax,0x36
0x140aac634: ja     0x140aac9d4
0x140aac63a: lea    rdx,[rip+0xffffffffff5539bf]        # 0x140000000
0x140aac641: movzx  eax,BYTE PTR [rdx+rax*1+0xaada94]
0x140aac649: mov    ecx,DWORD PTR [rdx+rax*4+0xaada6c]
0x140aac650: add    rcx,rdx
0x140aac653: jmp    rcx
0x140aac655: cmp    r10w,0x9
0x140aac65a: je     0x140aac711
0x140aac660: mov    QWORD PTR [rbx+0x10],r9
0x140aac664: mov    rax,rbx
0x140aac667: cmp    QWORD PTR [rbx+0x18],0xf
0x140aac66c: jbe    0x140aac671
0x140aac66e: mov    rax,QWORD PTR [rbx]
0x140aac671: mov    rcx,QWORD PTR [rsp+0x20]
0x140aac676: lea    r8,[rsp+0x40]
0x140aac67b: mov    r9d,0x2
0x140aac681: mov    BYTE PTR [rax],0x0
0x140aac684: lea    rdx,[rsp+0x60]
0x140aac689: call   0x140d4dbd0
0x140aac68e: movsxd rax,DWORD PTR [rsp+0x60]
0x140aac693: movsxd rcx,DWORD PTR [rbx+0x6c]
0x140aac697: test   eax,eax
0x140aac699: js     0x140aac705
0x140aac69b: mov    rdx,rax
0x140aac69e: mov    rax,QWORD PTR [rip+0x1a63553]        # 0x14250fbf8
0x140aac6a5: sub    rax,QWORD PTR [rip+0x1a63544]        # 0x14250fbf0
0x140aac6ac: sar    rax,0x3
0x140aac6b0: cmp    rdx,rax
0x140aac6b3: jae    0x140aac705
0x140aac6b5: test   ecx,ecx
0x140aac6b7: js     0x140aac705
0x140aac6b9: mov    rax,QWORD PTR [rip+0x1a63568]        # 0x14250fc28
0x140aac6c0: mov    r8,QWORD PTR [rip+0x1a63559]        # 0x14250fc20
0x140aac6c7: sub    rax,r8
0x140aac6ca: sar    rax,0x3
0x140aac6ce: cmp    rcx,rax
0x140aac6d1: jae    0x140aac705
0x140aac6d3: mov    rax,QWORD PTR [r8+rcx*8]
0x140aac6d7: mov    r8,QWORD PTR [rax+0x50]
0x140aac6db: mov    rcx,QWORD PTR [rax+0x58]
0x140aac6df: sub    rcx,r8
0x140aac6e2: sar    rcx,0x3
0x140aac6e6: cmp    rcx,rdx
0x140aac6e9: jb     0x140aac705
0x140aac6eb: mov    rdx,QWORD PTR [r8+rdx*8]
0x140aac6ef: cmp    QWORD PTR [rdx+0x18],0xf
0x140aac6f4: mov    r8,QWORD PTR [rdx+0x10]
0x140aac6f8: jbe    0x140aac6fd
0x140aac6fa: mov    rdx,QWORD PTR [rdx]
0x140aac6fd: mov    rcx,rbx
0x140aac700: call   0x140071040
0x140aac705: cmp    WORD PTR [rsp+0x30],0xa
0x140aac70b: je     0x140aac9d4
0x140aac711: call   0x140ece790
0x140aac716: mov    r8d,eax
0x140aac719: mov    eax,0x3
0x140aac71e: mul    r8d
0x140aac721: mov    ecx,r8d
0x140aac724: sub    ecx,edx
0x140aac726: shr    ecx,1
0x140aac728: add    ecx,edx
0x140aac72a: shr    ecx,0x1e
0x140aac72d: imul   ecx,ecx,0x7fffffff
0x140aac733: sub    r8d,ecx
0x140aac736: shr    r8d,0x1e
0x140aac73a: test   r8d,r8d
0x140aac73d: je     0x140aac784
0x140aac73f: cmp    r8d,0x1
0x140aac743: jne    0x140aac9d4
0x140aac749: lea    rdi,[rbx+0x40]
0x140aac74d: xor    r9d,r9d
0x140aac750: mov    rdx,rdi
0x140aac753: mov    QWORD PTR [rsp+0x28],rdi
0x140aac758: lea    r8,[rbx+0x5c]
0x140aac75c: mov    rcx,r15
0x140aac75f: call   0x140d4dbd0
0x140aac764: mov    rcx,QWORD PTR [rsp+0x20]
0x140aac769: lea    r12,[rbx+0x44]
0x140aac76d: mov    rdx,r12
0x140aac770: lea    r8,[rbx+0x5e]
0x140aac774: mov    r9d,0x1
0x140aac77a: call   0x140d4dbd0
0x140aac77f: jmp    0x140aac9d9
0x140aac784: mov    rcx,QWORD PTR [rsp+0x20]
0x140aac789: lea    rdi,[rbx+0x40]
0x140aac78d: mov    rdx,rdi
0x140aac790: mov    QWORD PTR [rsp+0x28],rdi
0x140aac795: lea    r8,[rbx+0x5c]
0x140aac799: xor    r9d,r9d
0x140aac79c: call   0x140d4dbd0
0x140aac7a1: lea    r12,[rbx+0x44]
0x140aac7a5: mov    r9d,0x1
0x140aac7ab: mov    rdx,r12
0x140aac7ae: lea    r8,[rbx+0x5e]
0x140aac7b2: mov    rcx,r15
0x140aac7b5: call   0x140d4dbd0
0x140aac7ba: jmp    0x140aac9d9
0x140aac7bf: call   0x140ece790
0x140aac7c4: mov    ebp,eax
0x140aac7c6: lea    r8,[rbx+0x66]
0x140aac7ca: mov    ecx,ebp
0x140aac7cc: mov    eax,0x3
0x140aac7d1: mul    ebp
0x140aac7d3: mov    r9d,0x2
0x140aac7d9: sub    ecx,edx
0x140aac7db: shr    ecx,1
0x140aac7dd: add    ecx,edx
0x140aac7df: lea    rdx,[rbx+0x54]
0x140aac7e3: shr    ecx,0x1e
0x140aac7e6: imul   ecx,ecx,0x7fffffff
0x140aac7ec: sub    ebp,ecx
0x140aac7ee: mov    rcx,QWORD PTR [rsp+0x20]
0x140aac7f3: shr    ebp,0x1e
0x140aac7f6: test   bpl,bpl
0x140aac7f9: cmove  rcx,r15
0x140aac7fd: call   0x140d4dbd0
0x140aac802: call   0x140ece790
0x140aac807: mov    r8d,eax
0x140aac80a: mov    eax,0x3
0x140aac80f: mul    r8d
0x140aac812: mov    ecx,r8d
0x140aac815: mov    eax,0xbfffffff
0x140aac81a: sub    ecx,edx
0x140aac81c: shr    ecx,1
0x140aac81e: add    ecx,edx
0x140aac820: shr    ecx,0x1e
0x140aac823: imul   ecx,ecx,0x7fffffff
0x140aac829: sub    r8d,ecx
0x140aac82c: mul    r8d
0x140aac82f: mov    edi,edx
0x140aac831: shr    edi,0x1d
0x140aac834: call   0x140ece790
0x140aac839: mov    r8d,eax
0x140aac83c: mov    eax,0x3
0x140aac841: mul    r8d
0x140aac844: mov    ecx,r8d
0x140aac847: sub    ecx,edx
0x140aac849: shr    ecx,1
0x140aac84b: add    ecx,edx
0x140aac84d: shr    ecx,0x1e
0x140aac850: imul   ecx,ecx,0x7fffffff
0x140aac856: sub    r8d,ecx
0x140aac859: cmp    r8d,0x28f5c29
0x140aac860: jb     0x140aac886
0x140aac862: call   0x140ece790
0x140aac867: mov    edi,eax
0x140aac869: mov    eax,0x3
0x140aac86e: mul    edi
0x140aac870: mov    eax,edi
0x140aac872: sub    eax,edx
0x140aac874: shr    eax,1
0x140aac876: add    eax,edx
0x140aac878: shr    eax,0x1e
0x140aac87b: imul   eax,eax,0x7fffffff
0x140aac881: sub    edi,eax
0x140aac883: shr    edi,0x1e
0x140aac886: test   edi,edi
0x140aac888: je     0x140aacd01
0x140aac88e: cmp    edi,0x1
0x140aac891: jne    0x140aac898
0x140aac893: sub    dil,bpl
0x140aac896: jmp    0x140aac8ee
0x140aac898: cmp    edi,0x2
0x140aac89b: jne    0x140aac954
0x140aac8a1: call   0x140ece790
0x140aac8a6: mov    r8d,eax
0x140aac8a9: mov    r9d,0x5
0x140aac8af: mov    ecx,r8d
0x140aac8b2: mov    eax,0x3
0x140aac8b7: mul    r8d
0x140aac8ba: sub    ecx,edx
0x140aac8bc: shr    ecx,1
0x140aac8be: add    ecx,edx
0x140aac8c0: lea    rdx,[rbx+0x58]
0x140aac8c4: shr    ecx,0x1e
0x140aac8c7: imul   ecx,ecx,0x7fffffff
0x140aac8cd: sub    r8d,ecx
0x140aac8d0: mov    rcx,r15
0x140aac8d3: shr    r8d,0x1e
0x140aac8d7: movzx  edi,r8b
0x140aac8db: lea    r8,[rbx+0x68]
0x140aac8df: test   bpl,bpl
0x140aac8e2: jne    0x140aac8e9
0x140aac8e4: mov    rcx,QWORD PTR [rsp+0x20]
0x140aac8e9: call   0x140d4dbd0
0x140aac8ee: mov    rcx,QWORD PTR [rsp+0x20]
0x140aac8f3: lea    r8,[rbx+0x60]
0x140aac8f7: test   dil,dil
0x140aac8fa: lea    rdx,[rbx+0x48]
0x140aac8fe: mov    r9d,0x3
0x140aac904: cmove  rcx,r15
0x140aac908: call   0x140d4dbd0
0x140aac90d: call   0x140ece790
0x140aac912: mov    r8d,eax
0x140aac915: mov    eax,0x3
0x140aac91a: mul    r8d
0x140aac91d: mov    ecx,r8d
0x140aac920: sub    ecx,edx
0x140aac922: shr    ecx,1
0x140aac924: add    ecx,edx
0x140aac926: shr    ecx,0x1e
0x140aac929: imul   ecx,ecx,0x7fffffff
0x140aac92f: sub    r8d,ecx
0x140aac932: cmp    r8d,0x147ae15
0x140aac939: jae    0x140aac954
0x140aac93b: lea    rsi,[rbx+0x4c]
0x140aac93f: mov    r9d,0x3
0x140aac945: mov    rdx,rsi
0x140aac948: lea    r8,[rbx+0x62]
0x140aac94c: mov    rcx,r15
0x140aac94f: call   0x140d4dbd0
0x140aac954: mov    rdi,QWORD PTR [rsp+0x20]
0x140aac959: call   0x140ece790
0x140aac95e: mov    r8d,eax
0x140aac961: mov    eax,0x3
0x140aac966: mul    r8d
0x140aac969: mov    ecx,r8d
0x140aac96c: sub    ecx,edx
0x140aac96e: shr    ecx,1
0x140aac970: add    ecx,edx
0x140aac972: shr    ecx,0x1e
0x140aac975: imul   ecx,ecx,0x7fffffff
0x140aac97b: sub    r8d,ecx
0x140aac97e: cmp    r8d,0x147ae15
0x140aac985: jae    0x140aac9cf
0x140aac987: call   0x140ece790
0x140aac98c: mov    r9d,eax
0x140aac98f: lea    r8,[rbx+0x64]
0x140aac993: mov    ecx,r9d
0x140aac996: mov    eax,0x3
0x140aac99b: mul    r9d
0x140aac99e: sub    ecx,edx
0x140aac9a0: shr    ecx,1
0x140aac9a2: add    ecx,edx
0x140aac9a4: lea    rdx,[rbx+0x50]
0x140aac9a8: shr    ecx,0x1e
0x140aac9ab: imul   eax,ecx,0x7fffffff
0x140aac9b1: sub    r9d,eax
0x140aac9b4: cmp    r9d,0x40000000
0x140aac9bb: mov    r9d,0x4
0x140aac9c1: jb     0x140aacbda
0x140aac9c7: mov    rcx,rdi
0x140aac9ca: call   0x140d4dbd0
0x140aac9cf: mov    rbp,QWORD PTR [rsp+0x38]
0x140aac9d4: mov    rdi,QWORD PTR [rsp+0x28]
0x140aac9d9: mov    r11,QWORD PTR [rsp+0x48]
0x140aac9de: movsxd r9,DWORD PTR [r11]
0x140aac9e1: mov    r8d,r9d
0x140aac9e4: cmp    r9d,0xffffffff
0x140aac9e8: je     0x140aaca33
0x140aac9ea: movsxd r10,DWORD PTR [rbx+0x4c]
0x140aac9ee: lea    rsi,[rbx+0x4c]
0x140aac9f2: cmp    r10d,0xffffffff
0x140aac9f6: je     0x140aaca33
0x140aac9f8: mov    rcx,QWORD PTR [rip+0x1a631f1]        # 0x14250fbf0
0x140aac9ff: mov    rdx,QWORD PTR [rcx+r10*8]
0x140aaca03: mov    rcx,QWORD PTR [rcx+r9*8]
0x140aaca07: movzx  eax,BYTE PTR [rdx+0x140]
0x140aaca0e: cmp    BYTE PTR [rcx+0x140],al
0x140aaca14: jge    0x140aaca33
0x140aaca16: movzx  ecx,WORD PTR [rbx+0x60]
0x140aaca1a: lea    rsi,[rbx+0x4c]
0x140aaca1e: movzx  eax,WORD PTR [rbx+0x62]
0x140aaca22: mov    r8d,r10d
0x140aaca25: mov    WORD PTR [rbx+0x60],ax
0x140aaca29: mov    DWORD PTR [rsi],r9d
0x140aaca2c: mov    WORD PTR [rbx+0x62],cx
0x140aaca30: mov    DWORD PTR [r11],r10d
0x140aaca33: xor    al,al
0x140aaca35: mov    r10d,0x1
0x140aaca3b: cmp    WORD PTR [rbp+0x0],r10w
0x140aaca40: jne    0x140aaca4e
0x140aaca42: cmp    WORD PTR [rbx+0x68],r10w
0x140aaca47: movzx  eax,al
0x140aaca4a: cmove  eax,r10d
0x140aaca4e: mov    ecx,DWORD PTR [rdi]
0x140aaca50: cmp    ecx,0xffffffff
0x140aaca53: je     0x140aacaad
0x140aaca55: lea    r12,[rbx+0x44]
0x140aaca59: mov    edx,ecx
0x140aaca5b: cmp    ecx,DWORD PTR [r12]
0x140aaca5f: jne    0x140aaca66
0x140aaca61: mov    edx,DWORD PTR [rbx+0x40]
0x140aaca64: mov    al,0x1
0x140aaca66: mov    r9d,ecx
0x140aaca69: cmp    ecx,DWORD PTR [rbx+0x58]
0x140aaca6c: jne    0x140aaca73
0x140aaca6e: mov    al,0x1
0x140aaca70: mov    r9d,edx
0x140aaca73: lea    r13,[rbx+0x50]
0x140aaca77: mov    edx,ecx
0x140aaca79: cmp    ecx,DWORD PTR [r13+0x0]
0x140aaca7d: jne    0x140aaca84
0x140aaca7f: mov    al,0x1
0x140aaca81: mov    edx,r9d
0x140aaca84: mov    r9d,ecx
0x140aaca87: cmp    ecx,r8d
0x140aaca8a: jne    0x140aaca91
0x140aaca8c: mov    al,0x1
0x140aaca8e: mov    r9d,edx
0x140aaca91: cmp    ecx,DWORD PTR [rbx+0x4c]
0x140aaca94: lea    rsi,[rbx+0x4c]
0x140aaca98: jne    0x140aaca9f
0x140aaca9a: mov    al,0x1
0x140aaca9c: mov    ecx,r9d
0x140aaca9f: cmp    ecx,DWORD PTR [rbx+0x54]
0x140aacaa2: lea    r14,[rbx+0x54]
0x140aacaa6: movzx  eax,al
0x140aacaa9: cmove  eax,r10d
0x140aacaad: mov    edx,DWORD PTR [r12]
0x140aacab1: cmp    edx,0xffffffff
0x140aacab4: je     0x140aacaee
0x140aacab6: cmp    edx,DWORD PTR [rbx+0x58]
0x140aacab9: lea    r13,[rbx+0x50]
0x140aacabd: lea    rsi,[rbx+0x4c]
0x140aacac1: cmove  eax,r10d
0x140aacac5: lea    r14,[rbx+0x54]
0x140aacac9: cmp    edx,DWORD PTR [r13+0x0]
0x140aacacd: cmove  eax,r10d
0x140aacad1: cmp    edx,r8d
0x140aacad4: movzx  ecx,al
0x140aacad7: cmove  ecx,r10d
0x140aacadb: cmp    edx,DWORD PTR [rsi]
0x140aacadd: movzx  eax,cl
0x140aacae0: cmove  eax,r10d
0x140aacae4: cmp    edx,DWORD PTR [r14]
0x140aacae7: movzx  eax,al
0x140aacaea: cmove  eax,r10d
0x140aacaee: mov    edx,DWORD PTR [r13+0x0]
0x140aacaf2: cmp    edx,0xffffffff
0x140aacaf5: je     0x140aacb23
0x140aacaf7: cmp    edx,DWORD PTR [rbx+0x58]
0x140aacafa: lea    rsi,[rbx+0x4c]
0x140aacafe: lea    r14,[rbx+0x54]
0x140aacb02: cmove  eax,r10d
0x140aacb06: cmp    edx,r8d
0x140aacb09: movzx  ecx,al
0x140aacb0c: cmove  ecx,r10d
0x140aacb10: cmp    edx,DWORD PTR [rsi]
0x140aacb12: movzx  eax,cl
0x140aacb15: cmove  eax,r10d
0x140aacb19: cmp    edx,DWORD PTR [r14]
0x140aacb1c: movzx  eax,al
0x140aacb1f: cmove  eax,r10d
0x140aacb23: cmp    r8d,0xffffffff
0x140aacb27: je     0x140aacb4d
0x140aacb29: cmp    r8d,DWORD PTR [rbx+0x58]
0x140aacb2d: lea    rsi,[rbx+0x4c]
0x140aacb31: lea    r14,[rbx+0x54]
0x140aacb35: cmove  eax,r10d
0x140aacb39: cmp    r8d,DWORD PTR [rsi]
0x140aacb3c: movzx  ecx,al
0x140aacb3f: cmove  ecx,r10d
0x140aacb43: cmp    r8d,DWORD PTR [r14]
0x140aacb46: movzx  eax,cl
0x140aacb49: cmove  eax,r10d
0x140aacb4d: mov    ecx,DWORD PTR [rsi]
0x140aacb4f: cmp    ecx,0xffffffff
0x140aacb52: je     0x140aacb69
0x140aacb54: cmp    ecx,DWORD PTR [rbx+0x58]
0x140aacb57: lea    r14,[rbx+0x54]
0x140aacb5b: cmove  eax,r10d
0x140aacb5f: cmp    ecx,DWORD PTR [r14]
0x140aacb62: movzx  eax,al
0x140aacb65: cmove  eax,r10d
0x140aacb69: mov    ecx,DWORD PTR [r14]
0x140aacb6c: cmp    ecx,0xffffffff
0x140aacb6f: je     0x140aacb76
0x140aacb71: cmp    ecx,DWORD PTR [rbx+0x58]
0x140aacb74: je     0x140aacb7a
0x140aacb76: test   al,al
0x140aacb78: je     0x140aacbaf
0x140aacb7a: mov    ecx,DWORD PTR [rsp+0x50]
0x140aacb7e: mov    edi,0xffffffff
0x140aacb83: mov    rax,QWORD PTR [rsp+0x58]
0x140aacb88: dec    ecx
0x140aacb8a: mov    edx,DWORD PTR [rsp+0x44]
0x140aacb8e: test   ecx,ecx
0x140aacb90: movzx  r10d,WORD PTR [rsp+0x30]
0x140aacb96: mov    r9d,0x0
0x140aacb9c: mov    r11,QWORD PTR [rsp+0x78]
0x140aacba1: mov    DWORD PTR [rsp+0x50],ecx
0x140aacba5: lea    rcx,[rbx+0x72]
0x140aacba9: jg     0x140aac3c0
0x140aacbaf: mov    rcx,QWORD PTR [rsp+0xf0]
0x140aacbb7: xor    rcx,rsp
0x140aacbba: call   0x1415530b0
0x140aacbbf: mov    rbx,QWORD PTR [rsp+0x148]
0x140aacbc7: add    rsp,0x100
0x140aacbce: pop    r15
0x140aacbd0: pop    r14
0x140aacbd2: pop    r13
0x140aacbd4: pop    r12
0x140aacbd6: pop    rdi
0x140aacbd7: pop    rsi
0x140aacbd8: pop    rbp
0x140aacbd9: ret
0x140aacbda: mov    rcx,r15
0x140aacbdd: jmp    0x140aac9ca
0x140aacbe2: call   0x140ece790
0x140aacbe7: mov    r8d,eax
0x140aacbea: mov    eax,0x3
0x140aacbef: mul    r8d
0x140aacbf2: mov    ecx,r8d
0x140aacbf5: sub    ecx,edx
0x140aacbf7: shr    ecx,1
0x140aacbf9: add    ecx,edx
0x140aacbfb: shr    ecx,0x1e
0x140aacbfe: imul   ecx,ecx,0x7fffffff
0x140aacc04: sub    r8d,ecx
0x140aacc07: cmp    r8d,0x2aaaaaab
0x140aacc0e: jae    0x140aacc32
0x140aacc10: mov    rcx,QWORD PTR [rsp+0x20]
0x140aacc15: lea    rdx,[rbx+0x48]
0x140aacc19: lea    r8,[rbx+0x60]
0x140aacc1d: mov    QWORD PTR [rsp+0x48],rdx
0x140aacc22: mov    r9d,0x3
0x140aacc28: call   0x140d4dbd0
0x140aacc2d: jmp    0x140aac9d4
0x140aacc32: call   0x140ece790
0x140aacc37: mov    ebp,eax
0x140aacc39: lea    r8,[rbx+0x66]
0x140aacc3d: mov    ecx,ebp
0x140aacc3f: mov    eax,0x3
0x140aacc44: mul    ebp
0x140aacc46: mov    r9d,0x2
0x140aacc4c: sub    ecx,edx
0x140aacc4e: shr    ecx,1
0x140aacc50: add    ecx,edx
0x140aacc52: lea    rdx,[rbx+0x54]
0x140aacc56: shr    ecx,0x1e
0x140aacc59: imul   ecx,ecx,0x7fffffff
0x140aacc5f: sub    ebp,ecx
0x140aacc61: mov    rcx,QWORD PTR [rsp+0x20]
0x140aacc66: shr    ebp,0x1e
0x140aacc69: test   bpl,bpl
0x140aacc6c: cmove  rcx,r15
0x140aacc70: call   0x140d4dbd0
0x140aacc75: call   0x140ece790
0x140aacc7a: mov    r8d,eax
0x140aacc7d: mov    eax,0x3
0x140aacc82: mul    r8d
0x140aacc85: mov    ecx,r8d
0x140aacc88: mov    eax,0xbfffffff
0x140aacc8d: sub    ecx,edx
0x140aacc8f: shr    ecx,1
0x140aacc91: add    ecx,edx
0x140aacc93: shr    ecx,0x1e
0x140aacc96: imul   ecx,ecx,0x7fffffff
0x140aacc9c: sub    r8d,ecx
0x140aacc9f: mul    r8d
0x140aacca2: mov    edi,edx
0x140aacca4: shr    edi,0x1d
0x140aacca7: call   0x140ece790
0x140aaccac: mov    r8d,eax
0x140aaccaf: mov    eax,0x3
0x140aaccb4: mul    r8d
0x140aaccb7: mov    ecx,r8d
0x140aaccba: sub    ecx,edx
0x140aaccbc: shr    ecx,1
0x140aaccbe: add    ecx,edx
0x140aaccc0: shr    ecx,0x1e
0x140aaccc3: imul   ecx,ecx,0x7fffffff
0x140aaccc9: sub    r8d,ecx
0x140aacccc: cmp    r8d,0x28f5c29
0x140aaccd3: jb     0x140aaccf9
0x140aaccd5: call   0x140ece790
0x140aaccda: mov    edi,eax
0x140aaccdc: mov    eax,0x3
0x140aacce1: mul    edi
0x140aacce3: mov    eax,edi
0x140aacce5: sub    eax,edx
0x140aacce7: shr    eax,1
0x140aacce9: add    eax,edx
0x140aacceb: shr    eax,0x1e
0x140aaccee: imul   eax,eax,0x7fffffff
0x140aaccf4: sub    edi,eax
0x140aaccf6: shr    edi,0x1e
0x140aaccf9: test   edi,edi
0x140aaccfb: jne    0x140aac88e
0x140aacd01: lea    r8,[rbx+0x68]
0x140aacd05: mov    r9d,0x5
0x140aacd0b: lea    rdx,[rbx+0x58]
0x140aacd0f: test   bpl,bpl
0x140aacd12: jne    0x140aac94c
0x140aacd18: mov    rdi,QWORD PTR [rsp+0x20]
0x140aacd1d: mov    rcx,rdi
0x140aacd20: call   0x140d4dbd0
0x140aacd25: jmp    0x140aac959
0x140aacd2a: call   0x140ece790
0x140aacd2f: mov    r8d,eax
0x140aacd32: mov    eax,0x3
0x140aacd37: mul    r8d
0x140aacd3a: mov    ecx,r8d
0x140aacd3d: mov    eax,0xbfffffff
0x140aacd42: sub    ecx,edx
0x140aacd44: shr    ecx,1
0x140aacd46: add    ecx,edx
0x140aacd48: shr    ecx,0x1e
0x140aacd4b: imul   ecx,ecx,0x7fffffff
0x140aacd51: sub    r8d,ecx
0x140aacd54: mul    r8d
0x140aacd57: mov    edi,edx
0x140aacd59: shr    edi,0x1d
0x140aacd5c: cmp    edi,0x1
0x140aacd5f: ja     0x140aacd99
0x140aacd61: lea    rdx,[rbx+0x40]
0x140aacd65: xor    r9d,r9d
0x140aacd68: lea    r8,[rbx+0x5c]
0x140aacd6c: mov    QWORD PTR [rsp+0x28],rdx
0x140aacd71: mov    rcx,r15
0x140aacd74: call   0x140d4dbd0
0x140aacd79: mov    rcx,QWORD PTR [rsp+0x20]
0x140aacd7e: lea    r12,[rbx+0x44]
0x140aacd82: mov    rdx,r12
0x140aacd85: lea    r8,[rbx+0x5e]
0x140aacd89: mov    r9d,0x1
0x140aacd8f: call   0x140d4dbd0
0x140aacd94: cmp    edi,0x1
0x140aacd97: je     0x140aacda2
0x140aacd99: cmp    edi,0x2
0x140aacd9c: jne    0x140aac9d4
0x140aacda2: call   0x140ece790
0x140aacda7: mov    r8d,eax
0x140aacdaa: mov    r9d,0x2
0x140aacdb0: mov    ecx,r8d
0x140aacdb3: mov    eax,0x3
0x140aacdb8: mul    r8d
0x140aacdbb: sub    ecx,edx
0x140aacdbd: shr    ecx,1
0x140aacdbf: add    ecx,edx
0x140aacdc1: lea    rdx,[rbx+0x54]
0x140aacdc5: shr    ecx,0x1e
0x140aacdc8: imul   ecx,ecx,0x7fffffff
0x140aacdce: sub    r8d,ecx
0x140aacdd1: mov    ecx,0x1
0x140aacdd6: shr    r8d,0x1e
0x140aacdda: movzx  eax,r8b
0x140aacdde: cmp    edi,0x2
0x140aacde1: lea    r8,[rbx+0x66]
0x140aacde5: cmove  eax,ecx
0x140aacde8: mov    rcx,QWORD PTR [rsp+0x20]
0x140aacded: test   al,al
0x140aacdef: cmove  rcx,r15
0x140aacdf3: call   0x140d4dbd0
0x140aacdf8: call   0x140ece790
0x140aacdfd: mov    r8d,eax
0x140aace00: mov    eax,0x3
0x140aace05: mul    r8d
0x140aace08: mov    ecx,r8d
0x140aace0b: mov    eax,0xbfffffff
0x140aace10: sub    ecx,edx
0x140aace12: shr    ecx,1
0x140aace14: add    ecx,edx
0x140aace16: shr    ecx,0x1e
0x140aace19: imul   ecx,ecx,0x7fffffff
0x140aace1f: sub    r8d,ecx
0x140aace22: mul    r8d
0x140aace25: mov    edi,edx
0x140aace27: shr    edi,0x1d
0x140aace2a: call   0x140ece790
0x140aace2f: mov    r8d,eax
0x140aace32: mov    eax,0x3
0x140aace37: mul    r8d
0x140aace3a: mov    ecx,r8d
0x140aace3d: sub    ecx,edx
0x140aace3f: shr    ecx,1
0x140aace41: add    ecx,edx
0x140aace43: shr    ecx,0x1e
0x140aace46: imul   ecx,ecx,0x7fffffff
0x140aace4c: sub    r8d,ecx
0x140aace4f: cmp    r8d,0x28f5c29
0x140aace56: jb     0x140aace7c
0x140aace58: call   0x140ece790
0x140aace5d: mov    edi,eax
0x140aace5f: mov    eax,0x3
0x140aace64: mul    edi
0x140aace66: mov    eax,edi
0x140aace68: sub    eax,edx
0x140aace6a: shr    eax,1
0x140aace6c: add    eax,edx
0x140aace6e: shr    eax,0x1e
0x140aace71: imul   eax,eax,0x7fffffff
0x140aace77: sub    edi,eax
0x140aace79: shr    edi,0x1e
0x140aace7c: test   edi,edi
0x140aace7e: jne    0x140aace90
0x140aace80: lea    r8,[rbx+0x68]
0x140aace84: mov    r9d,0x5
0x140aace8a: lea    rdx,[rbx+0x58]
0x140aace8e: jmp    0x140aacf0c
0x140aace90: cmp    edi,0x2
0x140aace93: jne    0x140aacead
0x140aace95: lea    r8,[rbx+0x68]
0x140aace99: mov    r9d,0x5
0x140aace9f: lea    rdx,[rbx+0x58]
0x140aacea3: mov    rcx,r15
0x140aacea6: call   0x140d4dbd0
0x140aaceab: jmp    0x140aaceb2
0x140aacead: cmp    edi,0x1
0x140aaceb0: jne    0x140aacf14
0x140aaceb2: lea    rdx,[rbx+0x48]
0x140aaceb6: mov    r9d,0x3
0x140aacebc: lea    r8,[rbx+0x60]
0x140aacec0: mov    QWORD PTR [rsp+0x48],rdx
0x140aacec5: mov    rcx,r15
0x140aacec8: call   0x140d4dbd0
0x140aacecd: call   0x140ece790
0x140aaced2: mov    r8d,eax
0x140aaced5: mov    eax,0x3
0x140aaceda: mul    r8d
0x140aacedd: mov    ecx,r8d
0x140aacee0: sub    ecx,edx
0x140aacee2: shr    ecx,1
0x140aacee4: add    ecx,edx
0x140aacee6: shr    ecx,0x1e
0x140aacee9: imul   ecx,ecx,0x7fffffff
0x140aaceef: sub    r8d,ecx
0x140aacef2: cmp    r8d,0x147ae15
0x140aacef9: jae    0x140aacf14
0x140aacefb: lea    rsi,[rbx+0x4c]
0x140aaceff: mov    r9d,0x3
0x140aacf05: mov    rdx,rsi
0x140aacf08: lea    r8,[rbx+0x62]
0x140aacf0c: mov    rcx,r15
0x140aacf0f: call   0x140d4dbd0
0x140aacf14: call   0x140ece790
0x140aacf19: mov    r8d,eax
0x140aacf1c: mov    eax,0x3
0x140aacf21: mul    r8d
0x140aacf24: mov    ecx,r8d
0x140aacf27: sub    ecx,edx
0x140aacf29: shr    ecx,1
0x140aacf2b: add    ecx,edx
0x140aacf2d: shr    ecx,0x1e
0x140aacf30: imul   ecx,ecx,0x7fffffff
0x140aacf36: sub    r8d,ecx
0x140aacf39: cmp    r8d,0x147ae15
0x140aacf40: jae    0x140aac9d4
0x140aacf46: lea    r13,[rbx+0x50]
0x140aacf4a: mov    r9d,0x4
0x140aacf50: mov    rdx,r13
0x140aacf53: lea    r8,[rbx+0x64]
0x140aacf57: mov    rcx,r15
0x140aacf5a: call   0x140d4dbd0
0x140aacf5f: jmp    0x140aac9d4
0x140aacf64: call   0x140ece790
0x140aacf69: mov    r8d,eax
0x140aacf6c: mov    eax,0x3
0x140aacf71: mul    r8d
0x140aacf74: mov    ecx,r8d
0x140aacf77: mov    eax,0xbfffffff
0x140aacf7c: sub    ecx,edx
0x140aacf7e: shr    ecx,1
0x140aacf80: add    ecx,edx
0x140aacf82: shr    ecx,0x1e
0x140aacf85: imul   ecx,ecx,0x7fffffff
0x140aacf8b: sub    r8d,ecx
0x140aacf8e: mul    r8d
0x140aacf91: mov    edi,edx
0x140aacf93: shr    edi,0x1d
0x140aacf96: cmp    edi,0x1
0x140aacf99: ja     0x140aad02e
0x140aacf9f: call   0x140ece790
0x140aacfa4: mov    r8d,eax
0x140aacfa7: mov    eax,0x3
0x140aacfac: mul    r8d
0x140aacfaf: mov    ecx,r8d
0x140aacfb2: sub    ecx,edx
0x140aacfb4: shr    ecx,1
0x140aacfb6: add    ecx,edx
0x140aacfb8: shr    ecx,0x1e
0x140aacfbb: imul   ecx,ecx,0x7fffffff
0x140aacfc1: sub    r8d,ecx
0x140aacfc4: shr    r8d,0x1e
0x140aacfc8: test   r8d,r8d
0x140aacfcb: je     0x140aacff2
0x140aacfcd: cmp    r8d,0x1
0x140aacfd1: jne    0x140aad025
0x140aacfd3: lea    rdx,[rbx+0x40]
0x140aacfd7: xor    r9d,r9d
0x140aacfda: lea    r8,[rbx+0x5c]
0x140aacfde: mov    QWORD PTR [rsp+0x28],rdx
0x140aacfe3: mov    rcx,r15
0x140aacfe6: call   0x140d4dbd0
0x140aacfeb: mov    rcx,QWORD PTR [rsp+0x20]
0x140aacff0: jmp    0x140aad00f
0x140aacff2: mov    rcx,QWORD PTR [rsp+0x20]
0x140aacff7: lea    rdx,[rbx+0x40]
0x140aacffb: lea    r8,[rbx+0x5c]
0x140aacfff: mov    QWORD PTR [rsp+0x28],rdx
0x140aad004: xor    r9d,r9d
0x140aad007: call   0x140d4dbd0
0x140aad00c: mov    rcx,r15
0x140aad00f: lea    r12,[rbx+0x44]
0x140aad013: mov    r9d,0x1
0x140aad019: mov    rdx,r12
0x140aad01c: lea    r8,[rbx+0x5e]
0x140aad020: call   0x140d4dbd0
0x140aad025: cmp    edi,0x1
0x140aad028: je     0x140aacc32
0x140aad02e: cmp    edi,0x2
0x140aad031: jne    0x140aac9d4
0x140aad037: jmp    0x140aacc32
0x140aad03c: mov    rcx,QWORD PTR [rsp+0x20]
0x140aad041: lea    r14,[rbx+0x54]
0x140aad045: mov    rdx,r14
0x140aad048: lea    r8,[rbx+0x66]
0x140aad04c: mov    r9d,0x2
0x140aad052: call   0x140d4dbd0
0x140aad057: call   0x140ece790
0x140aad05c: mov    r8d,eax
0x140aad05f: mov    eax,0x3
0x140aad064: mul    r8d
0x140aad067: mov    ecx,r8d
0x140aad06a: mov    eax,0xbfffffff
0x140aad06f: sub    ecx,edx
0x140aad071: shr    ecx,1
0x140aad073: add    ecx,edx
0x140aad075: shr    ecx,0x1e
0x140aad078: imul   ecx,ecx,0x7fffffff
0x140aad07e: sub    r8d,ecx
0x140aad081: mul    r8d
0x140aad084: mov    edi,edx
0x140aad086: shr    edi,0x1d
0x140aad089: call   0x140ece790
0x140aad08e: mov    r8d,eax
0x140aad091: mov    eax,0x3
0x140aad096: mul    r8d
0x140aad099: mov    ecx,r8d
0x140aad09c: sub    ecx,edx
0x140aad09e: shr    ecx,1
0x140aad0a0: add    ecx,edx
0x140aad0a2: shr    ecx,0x1e
0x140aad0a5: imul   ecx,ecx,0x7fffffff
0x140aad0ab: sub    r8d,ecx
0x140aad0ae: cmp    r8d,0x28f5c29
0x140aad0b5: jb     0x140aad0db
0x140aad0b7: call   0x140ece790
0x140aad0bc: mov    edi,eax
0x140aad0be: mov    eax,0x3
0x140aad0c3: mul    edi
0x140aad0c5: mov    eax,edi
0x140aad0c7: sub    eax,edx
0x140aad0c9: shr    eax,1
0x140aad0cb: add    eax,edx
0x140aad0cd: shr    eax,0x1e
0x140aad0d0: imul   eax,eax,0x7fffffff
0x140aad0d6: sub    edi,eax
0x140aad0d8: shr    edi,0x1e
0x140aad0db: test   edi,edi
0x140aad0dd: jne    0x140aad0ef
0x140aad0df: lea    r8,[rbx+0x68]
0x140aad0e3: mov    r9d,0x5
0x140aad0e9: lea    rdx,[rbx+0x58]
0x140aad0ed: jmp    0x140aad16b
0x140aad0ef: cmp    edi,0x2
0x140aad0f2: jne    0x140aad10c
0x140aad0f4: lea    r8,[rbx+0x68]
0x140aad0f8: mov    r9d,0x5
0x140aad0fe: lea    rdx,[rbx+0x58]
0x140aad102: mov    rcx,r15
0x140aad105: call   0x140d4dbd0
0x140aad10a: jmp    0x140aad111
0x140aad10c: cmp    edi,0x1
0x140aad10f: jne    0x140aad173
0x140aad111: lea    rdx,[rbx+0x48]
0x140aad115: mov    r9d,0x3
0x140aad11b: lea    r8,[rbx+0x60]
0x140aad11f: mov    QWORD PTR [rsp+0x48],rdx
0x140aad124: mov    rcx,r15
0x140aad127: call   0x140d4dbd0
0x140aad12c: call   0x140ece790
0x140aad131: mov    r8d,eax
0x140aad134: mov    eax,0x3
0x140aad139: mul    r8d
0x140aad13c: mov    ecx,r8d
0x140aad13f: sub    ecx,edx
0x140aad141: shr    ecx,1
0x140aad143: add    ecx,edx
0x140aad145: shr    ecx,0x1e
0x140aad148: imul   ecx,ecx,0x7fffffff
0x140aad14e: sub    r8d,ecx
0x140aad151: cmp    r8d,0x147ae15
0x140aad158: jae    0x140aad173
0x140aad15a: lea    rsi,[rbx+0x4c]
0x140aad15e: mov    r9d,0x3
0x140aad164: mov    rdx,rsi
0x140aad167: lea    r8,[rbx+0x62]
0x140aad16b: mov    rcx,r15
0x140aad16e: call   0x140d4dbd0
0x140aad173: call   0x140ece790
0x140aad178: mov    r8d,eax
0x140aad17b: mov    eax,0x3
0x140aad180: mul    r8d
0x140aad183: mov    ecx,r8d
0x140aad186: sub    ecx,edx
0x140aad188: shr    ecx,1
0x140aad18a: add    ecx,edx
0x140aad18c: shr    ecx,0x1e
0x140aad18f: imul   ecx,ecx,0x7fffffff
0x140aad195: sub    r8d,ecx
0x140aad198: cmp    r8d,0x147ae15
0x140aad19f: jae    0x140aad1ba
0x140aad1a1: lea    r13,[rbx+0x50]
0x140aad1a5: mov    r9d,0x4
0x140aad1ab: mov    rdx,r13
0x140aad1ae: lea    r8,[rbx+0x64]
0x140aad1b2: mov    rcx,r15
0x140aad1b5: call   0x140d4dbd0
0x140aad1ba: cmp    WORD PTR [rbx+0x66],0x1
0x140aad1bf: lea    rbp,[rbx+0x66]
0x140aad1c3: mov    QWORD PTR [rsp+0x38],rbp
0x140aad1c8: jne    0x140aac9d4
0x140aad1ce: movsxd rax,DWORD PTR [rbx+0x54]
0x140aad1d2: lea    r14,[rbx+0x54]
0x140aad1d6: test   eax,eax
0x140aad1d8: js     0x140aac9d4
0x140aad1de: mov    rcx,QWORD PTR [rip+0x1a62a0b]        # 0x14250fbf0
0x140aad1e5: mov    rdx,rax
0x140aad1e8: mov    rax,QWORD PTR [rip+0x1a62a09]        # 0x14250fbf8
0x140aad1ef: sub    rax,rcx
0x140aad1f2: sar    rax,0x3
0x140aad1f6: cmp    rdx,rax
0x140aad1f9: jae    0x140aac9d4
0x140aad1ff: mov    rax,QWORD PTR [rcx+rdx*8]
0x140aad203: mov    rdi,QWORD PTR [rsp+0x28]
0x140aad208: cmp    QWORD PTR [rax+0x30],0x0
0x140aad20d: je     0x140aac9d9
0x140aad213: lea    rbp,[rbx+0x66]
0x140aad217: xor    eax,eax
0x140aad219: mov    QWORD PTR [rsp+0x38],rbp
0x140aad21e: mov    WORD PTR [rbp+0x0],ax
0x140aad222: jmp    0x140aac9d9
0x140aad227: mov    rcx,QWORD PTR [rsp+0x20]
0x140aad22c: lea    rbp,[rbx+0x66]
0x140aad230: lea    r14,[rbx+0x54]
0x140aad234: mov    QWORD PTR [rsp+0x38],rbp
0x140aad239: mov    r8,rbp
0x140aad23c: mov    rdx,r14
0x140aad23f: mov    r9d,0x2
0x140aad245: call   0x140d4dbd0
0x140aad24a: call   0x140ece790
0x140aad24f: mov    r8d,eax
0x140aad252: mov    eax,0x3
0x140aad257: mul    r8d
0x140aad25a: mov    ecx,r8d
0x140aad25d: mov    eax,0xbfffffff
0x140aad262: sub    ecx,edx
0x140aad264: shr    ecx,1
0x140aad266: add    ecx,edx
0x140aad268: shr    ecx,0x1e
0x140aad26b: imul   ecx,ecx,0x7fffffff
0x140aad271: sub    r8d,ecx
0x140aad274: mul    r8d
0x140aad277: mov    edi,edx
0x140aad279: shr    edi,0x1d
0x140aad27c: call   0x140ece790
0x140aad281: mov    r8d,eax
0x140aad284: mov    eax,0x3
0x140aad289: mul    r8d
0x140aad28c: mov    ecx,r8d
0x140aad28f: sub    ecx,edx
0x140aad291: shr    ecx,1
0x140aad293: add    ecx,edx
0x140aad295: shr    ecx,0x1e
0x140aad298: imul   ecx,ecx,0x7fffffff
0x140aad29e: sub    r8d,ecx
0x140aad2a1: cmp    r8d,0x28f5c29
0x140aad2a8: jb     0x140aad2ce
0x140aad2aa: call   0x140ece790
0x140aad2af: mov    edi,eax
0x140aad2b1: mov    eax,0x3
0x140aad2b6: mul    edi
0x140aad2b8: mov    eax,edi
0x140aad2ba: sub    eax,edx
0x140aad2bc: shr    eax,1
0x140aad2be: add    eax,edx
0x140aad2c0: shr    eax,0x1e
0x140aad2c3: imul   eax,eax,0x7fffffff
0x140aad2c9: sub    edi,eax
0x140aad2cb: shr    edi,0x1e
0x140aad2ce: test   edi,edi
0x140aad2d0: jne    0x140aad2e2
0x140aad2d2: lea    r8,[rbx+0x68]
0x140aad2d6: mov    r9d,0x5
0x140aad2dc: lea    rdx,[rbx+0x58]
0x140aad2e0: jmp    0x140aad35e
0x140aad2e2: cmp    edi,0x2
0x140aad2e5: jne    0x140aad2ff
0x140aad2e7: lea    r8,[rbx+0x68]
0x140aad2eb: mov    r9d,0x5
0x140aad2f1: lea    rdx,[rbx+0x58]
0x140aad2f5: mov    rcx,r15
0x140aad2f8: call   0x140d4dbd0
0x140aad2fd: jmp    0x140aad304
0x140aad2ff: cmp    edi,0x1
0x140aad302: jne    0x140aad366
0x140aad304: lea    rdx,[rbx+0x48]
0x140aad308: mov    r9d,0x3
0x140aad30e: lea    r8,[rbx+0x60]
0x140aad312: mov    QWORD PTR [rsp+0x48],rdx
0x140aad317: mov    rcx,r15
0x140aad31a: call   0x140d4dbd0
0x140aad31f: call   0x140ece790
0x140aad324: mov    r8d,eax
0x140aad327: mov    eax,0x3
0x140aad32c: mul    r8d
0x140aad32f: mov    ecx,r8d
0x140aad332: sub    ecx,edx
0x140aad334: shr    ecx,1
0x140aad336: add    ecx,edx
0x140aad338: shr    ecx,0x1e
0x140aad33b: imul   ecx,ecx,0x7fffffff
0x140aad341: sub    r8d,ecx
0x140aad344: cmp    r8d,0x147ae15
0x140aad34b: jae    0x140aad366
0x140aad34d: lea    rsi,[rbx+0x4c]
0x140aad351: mov    r9d,0x3
0x140aad357: mov    rdx,rsi
0x140aad35a: lea    r8,[rbx+0x62]
0x140aad35e: mov    rcx,r15
0x140aad361: call   0x140d4dbd0
0x140aad366: call   0x140ece790
0x140aad36b: mov    r8d,eax
0x140aad36e: mov    eax,0x3
0x140aad373: mul    r8d
0x140aad376: mov    ecx,r8d
0x140aad379: sub    ecx,edx
0x140aad37b: shr    ecx,1
0x140aad37d: add    ecx,edx
0x140aad37f: shr    ecx,0x1e
0x140aad382: imul   ecx,ecx,0x7fffffff
0x140aad388: sub    r8d,ecx
0x140aad38b: cmp    r8d,0x147ae15
0x140aad392: jae    0x140aac9d4
0x140aad398: lea    r13,[rbx+0x50]
0x140aad39c: mov    r9d,0x4
0x140aad3a2: mov    rdx,r13
0x140aad3a5: lea    r8,[rbx+0x64]
0x140aad3a9: mov    rcx,r15
0x140aad3ac: call   0x140d4dbd0
0x140aad3b1: jmp    0x140aac9d4
0x140aad3b6: call   0x140ece790
0x140aad3bb: mov    ebp,eax
0x140aad3bd: lea    r8,[rbx+0x66]
0x140aad3c1: mov    ecx,ebp
0x140aad3c3: mov    eax,0x3
0x140aad3c8: mul    ebp
0x140aad3ca: mov    r9d,0x2
0x140aad3d0: sub    ecx,edx
0x140aad3d2: shr    ecx,1
0x140aad3d4: add    ecx,edx
0x140aad3d6: lea    rdx,[rbx+0x54]
0x140aad3da: shr    ecx,0x1e
0x140aad3dd: imul   ecx,ecx,0x7fffffff
0x140aad3e3: sub    ebp,ecx
0x140aad3e5: mov    rcx,QWORD PTR [rsp+0x20]
0x140aad3ea: shr    ebp,0x1e
0x140aad3ed: test   bpl,bpl
0x140aad3f0: cmove  rcx,r15
0x140aad3f4: call   0x140d4dbd0
0x140aad3f9: call   0x140ece790
0x140aad3fe: mov    r8d,eax
0x140aad401: mov    eax,0x3
0x140aad406: mul    r8d
0x140aad409: mov    ecx,r8d
0x140aad40c: mov    eax,0xbfffffff
0x140aad411: sub    ecx,edx
0x140aad413: shr    ecx,1
0x140aad415: add    ecx,edx
0x140aad417: shr    ecx,0x1e
0x140aad41a: imul   ecx,ecx,0x7fffffff
0x140aad420: sub    r8d,ecx
0x140aad423: mul    r8d
0x140aad426: mov    edi,edx
0x140aad428: shr    edi,0x1d
0x140aad42b: call   0x140ece790
0x140aad430: mov    r8d,eax
0x140aad433: mov    eax,0x3
0x140aad438: mul    r8d
0x140aad43b: mov    ecx,r8d
0x140aad43e: sub    ecx,edx
0x140aad440: shr    ecx,1
0x140aad442: add    ecx,edx
0x140aad444: shr    ecx,0x1e
0x140aad447: imul   ecx,ecx,0x7fffffff
0x140aad44d: sub    r8d,ecx
0x140aad450: cmp    r8d,0x28f5c29
0x140aad457: jb     0x140aad47d
0x140aad459: call   0x140ece790
0x140aad45e: mov    edi,eax
0x140aad460: mov    eax,0x3
0x140aad465: mul    edi
0x140aad467: mov    eax,edi
0x140aad469: sub    eax,edx
0x140aad46b: shr    eax,1
0x140aad46d: add    eax,edx
0x140aad46f: shr    eax,0x1e
0x140aad472: imul   eax,eax,0x7fffffff
0x140aad478: sub    edi,eax
0x140aad47a: shr    edi,0x1e
0x140aad47d: test   edi,edi
0x140aad47f: jne    0x140aad4aa
0x140aad481: lea    r8,[rbx+0x68]
0x140aad485: mov    r9d,0x5
0x140aad48b: lea    rdx,[rbx+0x58]
0x140aad48f: test   bpl,bpl
0x140aad492: jne    0x140aad568
0x140aad498: mov    rdi,QWORD PTR [rsp+0x20]
0x140aad49d: mov    rcx,rdi
0x140aad4a0: call   0x140d4dbd0
0x140aad4a5: jmp    0x140aad575
0x140aad4aa: cmp    edi,0x1
0x140aad4ad: jne    0x140aad4b4
0x140aad4af: sub    dil,bpl
0x140aad4b2: jmp    0x140aad50a
0x140aad4b4: cmp    edi,0x2
0x140aad4b7: jne    0x140aad570
0x140aad4bd: call   0x140ece790
0x140aad4c2: mov    r8d,eax
0x140aad4c5: mov    r9d,0x5
0x140aad4cb: mov    ecx,r8d
0x140aad4ce: mov    eax,0x3
0x140aad4d3: mul    r8d
0x140aad4d6: sub    ecx,edx
0x140aad4d8: shr    ecx,1
0x140aad4da: add    ecx,edx
0x140aad4dc: lea    rdx,[rbx+0x58]
0x140aad4e0: shr    ecx,0x1e
0x140aad4e3: imul   ecx,ecx,0x7fffffff
0x140aad4e9: sub    r8d,ecx
0x140aad4ec: mov    rcx,r15
0x140aad4ef: shr    r8d,0x1e
0x140aad4f3: movzx  edi,r8b
0x140aad4f7: lea    r8,[rbx+0x68]
0x140aad4fb: test   bpl,bpl
0x140aad4fe: jne    0x140aad505
0x140aad500: mov    rcx,QWORD PTR [rsp+0x20]
0x140aad505: call   0x140d4dbd0
0x140aad50a: mov    rcx,QWORD PTR [rsp+0x20]
0x140aad50f: lea    r8,[rbx+0x60]
0x140aad513: test   dil,dil
0x140aad516: lea    rdx,[rbx+0x48]
0x140aad51a: mov    r9d,0x3
0x140aad520: cmove  rcx,r15
0x140aad524: call   0x140d4dbd0
0x140aad529: call   0x140ece790
0x140aad52e: mov    r8d,eax
0x140aad531: mov    eax,0x3
0x140aad536: mul    r8d
0x140aad539: mov    ecx,r8d
0x140aad53c: sub    ecx,edx
0x140aad53e: shr    ecx,1
0x140aad540: add    ecx,edx
0x140aad542: shr    ecx,0x1e
0x140aad545: imul   ecx,ecx,0x7fffffff
0x140aad54b: sub    r8d,ecx
0x140aad54e: cmp    r8d,0x147ae15
0x140aad555: jae    0x140aad570
0x140aad557: lea    rsi,[rbx+0x4c]
0x140aad55b: mov    r9d,0x3
0x140aad561: mov    rdx,rsi
0x140aad564: lea    r8,[rbx+0x62]
0x140aad568: mov    rcx,r15
0x140aad56b: call   0x140d4dbd0
0x140aad570: mov    rdi,QWORD PTR [rsp+0x20]
0x140aad575: call   0x140ece790
0x140aad57a: mov    r8d,eax
0x140aad57d: mov    eax,0x3
0x140aad582: mul    r8d
0x140aad585: mov    ecx,r8d
0x140aad588: sub    ecx,edx
0x140aad58a: shr    ecx,1
0x140aad58c: add    ecx,edx
0x140aad58e: shr    ecx,0x1e
0x140aad591: imul   ecx,ecx,0x7fffffff
0x140aad597: sub    r8d,ecx
0x140aad59a: cmp    r8d,0x147ae15
0x140aad5a1: jae    0x140aad5ea
0x140aad5a3: call   0x140ece790
0x140aad5a8: mov    r9d,eax
0x140aad5ab: lea    r8,[rbx+0x64]
0x140aad5af: mov    ecx,r9d
0x140aad5b2: mov    eax,0x3
0x140aad5b7: mul    r9d
0x140aad5ba: sub    ecx,edx
0x140aad5bc: shr    ecx,1
0x140aad5be: add    ecx,edx
0x140aad5c0: lea    rdx,[rbx+0x50]
0x140aad5c4: shr    ecx,0x1e
0x140aad5c7: imul   eax,ecx,0x7fffffff
0x140aad5cd: mov    rcx,rdi
0x140aad5d0: sub    r9d,eax
0x140aad5d3: cmp    r9d,0x40000000
0x140aad5da: mov    r9d,0x4
0x140aad5e0: jae    0x140aad5e5
0x140aad5e2: mov    rcx,r15
0x140aad5e5: call   0x140d4dbd0
0x140aad5ea: cmp    WORD PTR [rbx+0x66],0x0
0x140aad5ef: lea    rbp,[rbx+0x66]
0x140aad5f3: mov    QWORD PTR [rsp+0x38],rbp
0x140aad5f8: jne    0x140aac9d4
0x140aad5fe: movsxd rax,DWORD PTR [rbx+0x54]
0x140aad602: lea    r14,[rbx+0x54]
0x140aad606: test   eax,eax
0x140aad608: js     0x140aac9d4
0x140aad60e: mov    rcx,QWORD PTR [rip+0x1a625db]        # 0x14250fbf0
0x140aad615: mov    rdx,rax
0x140aad618: mov    rax,QWORD PTR [rip+0x1a625d9]        # 0x14250fbf8
0x140aad61f: sub    rax,rcx
0x140aad622: sar    rax,0x3
0x140aad626: cmp    rdx,rax
0x140aad629: jae    0x140aac9d4
0x140aad62f: mov    rax,QWORD PTR [rcx+rdx*8]
0x140aad633: mov    rdi,QWORD PTR [rsp+0x28]
0x140aad638: cmp    QWORD PTR [rax+0x50],0x0
0x140aad63d: je     0x140aac9d9
0x140aad643: lea    rbp,[rbx+0x66]
0x140aad647: mov    WORD PTR [rbp+0x0],0x1
0x140aad64d: mov    QWORD PTR [rsp+0x38],rbp
0x140aad652: jmp    0x140aac9d9
0x140aad657: call   0x140ece790
0x140aad65c: mov    r8d,eax
0x140aad65f: mov    eax,0x3
0x140aad664: mul    r8d
0x140aad667: mov    ecx,r8d
0x140aad66a: sub    ecx,edx
0x140aad66c: shr    ecx,1
0x140aad66e: add    ecx,edx
0x140aad670: shr    ecx,0x1e
0x140aad673: imul   ecx,ecx,0x7fffffff
0x140aad679: sub    r8d,ecx
0x140aad67c: cmp    r8d,0x2aaaaaab
0x140aad683: jae    0x140aad833
0x140aad689: call   0x140ece790
0x140aad68e: mov    r8d,eax
0x140aad691: mov    eax,0x3
0x140aad696: mul    r8d
0x140aad699: mov    ecx,r8d
0x140aad69c: sub    ecx,edx
0x140aad69e: shr    ecx,1
0x140aad6a0: add    ecx,edx
0x140aad6a2: shr    ecx,0x1e
0x140aad6a5: imul   ecx,ecx,0x7fffffff
0x140aad6ab: sub    r8d,ecx
0x140aad6ae: cmp    r8d,0x40000000
0x140aad6b5: jb     0x140aad789
0x140aad6bb: xor    eax,eax
0x140aad6bd: mov    QWORD PTR [rbx+0x10],rax
0x140aad6c1: mov    rax,rbx
0x140aad6c4: cmp    QWORD PTR [rbx+0x18],0xf
0x140aad6c9: jbe    0x140aad6ce
0x140aad6cb: mov    rax,QWORD PTR [rbx]
0x140aad6ce: mov    rcx,QWORD PTR [rsp+0x20]
0x140aad6d3: lea    r8,[rsp+0x40]
0x140aad6d8: mov    r9d,0x2
0x140aad6de: mov    BYTE PTR [rax],0x0
0x140aad6e1: lea    rdx,[rsp+0x64]
0x140aad6e6: call   0x140d4dbd0
0x140aad6eb: movsxd rax,DWORD PTR [rsp+0x64]
0x140aad6f0: movsxd rcx,DWORD PTR [rbx+0x6c]
0x140aad6f4: test   eax,eax
0x140aad6f6: js     0x140aad762
0x140aad6f8: mov    rdx,rax
0x140aad6fb: mov    rax,QWORD PTR [rip+0x1a624f6]        # 0x14250fbf8
0x140aad702: sub    rax,QWORD PTR [rip+0x1a624e7]        # 0x14250fbf0
0x140aad709: sar    rax,0x3
0x140aad70d: cmp    rdx,rax
0x140aad710: jae    0x140aad762
0x140aad712: test   ecx,ecx
0x140aad714: js     0x140aad762
0x140aad716: mov    rax,QWORD PTR [rip+0x1a6250b]        # 0x14250fc28
0x140aad71d: mov    r8,QWORD PTR [rip+0x1a624fc]        # 0x14250fc20
0x140aad724: sub    rax,r8
0x140aad727: sar    rax,0x3
0x140aad72b: cmp    rcx,rax
0x140aad72e: jae    0x140aad762
0x140aad730: mov    rax,QWORD PTR [r8+rcx*8]
0x140aad734: mov    r8,QWORD PTR [rax+0x50]
0x140aad738: mov    rcx,QWORD PTR [rax+0x58]
0x140aad73c: sub    rcx,r8
0x140aad73f: sar    rcx,0x3
0x140aad743: cmp    rcx,rdx
0x140aad746: jb     0x140aad762
0x140aad748: mov    rdx,QWORD PTR [r8+rdx*8]
0x140aad74c: cmp    QWORD PTR [rdx+0x18],0xf
0x140aad751: mov    r8,QWORD PTR [rdx+0x10]
0x140aad755: jbe    0x140aad75a
0x140aad757: mov    rdx,QWORD PTR [rdx]
0x140aad75a: mov    rcx,rbx
0x140aad75d: call   0x140071040
0x140aad762: mov    rdi,QWORD PTR [rsp+0x28]
0x140aad767: mov    rcx,QWORD PTR [rsp+0x20]
0x140aad76c: lea    rdx,[rbx+0x48]
0x140aad770: lea    r8,[rbx+0x60]
0x140aad774: mov    QWORD PTR [rsp+0x48],rdx
0x140aad779: mov    r9d,0x3
0x140aad77f: call   0x140d4dbd0
0x140aad784: jmp    0x140aac9d9
0x140aad789: call   0x140ece790
0x140aad78e: mov    r8d,eax
0x140aad791: mov    eax,0x3
0x140aad796: mul    r8d
0x140aad799: mov    ecx,r8d
0x140aad79c: sub    ecx,edx
0x140aad79e: shr    ecx,1
0x140aad7a0: add    ecx,edx
0x140aad7a2: shr    ecx,0x1e
0x140aad7a5: imul   ecx,ecx,0x7fffffff
0x140aad7ab: sub    r8d,ecx
0x140aad7ae: shr    r8d,0x1e
0x140aad7b2: test   r8d,r8d
0x140aad7b5: je     0x140aad7f8
0x140aad7b7: cmp    r8d,0x1
0x140aad7bb: jne    0x140aad762
0x140aad7bd: lea    rdi,[rbx+0x40]
0x140aad7c1: xor    r9d,r9d
0x140aad7c4: mov    rdx,rdi
0x140aad7c7: mov    QWORD PTR [rsp+0x28],rdi
0x140aad7cc: lea    r8,[rbx+0x5c]
0x140aad7d0: mov    rcx,r15
0x140aad7d3: call   0x140d4dbd0
0x140aad7d8: mov    rcx,QWORD PTR [rsp+0x20]
0x140aad7dd: lea    r12,[rbx+0x44]
0x140aad7e1: mov    rdx,r12
0x140aad7e4: lea    r8,[rbx+0x5e]
0x140aad7e8: mov    r9d,0x1
0x140aad7ee: call   0x140d4dbd0
0x140aad7f3: jmp    0x140aad767
0x140aad7f8: mov    rcx,QWORD PTR [rsp+0x20]
0x140aad7fd: lea    rdi,[rbx+0x40]
0x140aad801: mov    rdx,rdi
0x140aad804: mov    QWORD PTR [rsp+0x28],rdi
0x140aad809: lea    r8,[rbx+0x5c]
0x140aad80d: xor    r9d,r9d
0x140aad810: call   0x140d4dbd0
0x140aad815: lea    r12,[rbx+0x44]
0x140aad819: mov    r9d,0x1
0x140aad81f: mov    rdx,r12
0x140aad822: lea    r8,[rbx+0x5e]
0x140aad826: mov    rcx,r15
0x140aad829: call   0x140d4dbd0
0x140aad82e: jmp    0x140aad767
0x140aad833: call   0x140ece790
0x140aad838: mov    ebp,eax
0x140aad83a: lea    r8,[rbx+0x66]
0x140aad83e: mov    ecx,ebp
0x140aad840: mov    eax,0x3
0x140aad845: mul    ebp
0x140aad847: mov    r9d,0x2
0x140aad84d: sub    ecx,edx
0x140aad84f: shr    ecx,1
0x140aad851: add    ecx,edx
0x140aad853: lea    rdx,[rbx+0x54]
0x140aad857: shr    ecx,0x1e
0x140aad85a: imul   ecx,ecx,0x7fffffff
0x140aad860: sub    ebp,ecx
0x140aad862: mov    rcx,QWORD PTR [rsp+0x20]
0x140aad867: shr    ebp,0x1e
0x140aad86a: test   bpl,bpl
0x140aad86d: cmove  rcx,r15
0x140aad871: call   0x140d4dbd0
0x140aad876: call   0x140ece790
0x140aad87b: mov    r8d,eax
0x140aad87e: mov    eax,0x3
0x140aad883: mul    r8d
0x140aad886: mov    ecx,r8d
0x140aad889: mov    eax,0xbfffffff
0x140aad88e: sub    ecx,edx
0x140aad890: shr    ecx,1
0x140aad892: add    ecx,edx
0x140aad894: shr    ecx,0x1e
0x140aad897: imul   ecx,ecx,0x7fffffff
0x140aad89d: sub    r8d,ecx
0x140aad8a0: mul    r8d
0x140aad8a3: mov    edi,edx
0x140aad8a5: shr    edi,0x1d
0x140aad8a8: call   0x140ece790
0x140aad8ad: mov    r8d,eax
0x140aad8b0: mov    eax,0x3
0x140aad8b5: mul    r8d
0x140aad8b8: mov    ecx,r8d
0x140aad8bb: sub    ecx,edx
0x140aad8bd: shr    ecx,1
0x140aad8bf: add    ecx,edx
0x140aad8c1: shr    ecx,0x1e
0x140aad8c4: imul   ecx,ecx,0x7fffffff
0x140aad8ca: sub    r8d,ecx
0x140aad8cd: cmp    r8d,0x28f5c29
0x140aad8d4: jb     0x140aad8fa
0x140aad8d6: call   0x140ece790
0x140aad8db: mov    edi,eax
0x140aad8dd: mov    eax,0x3
0x140aad8e2: mul    edi
0x140aad8e4: mov    eax,edi
0x140aad8e6: sub    eax,edx
0x140aad8e8: shr    eax,1
0x140aad8ea: add    eax,edx
0x140aad8ec: shr    eax,0x1e
0x140aad8ef: imul   eax,eax,0x7fffffff
0x140aad8f5: sub    edi,eax
0x140aad8f7: shr    edi,0x1e
0x140aad8fa: test   edi,edi
0x140aad8fc: jne    0x140aad927
0x140aad8fe: lea    r8,[rbx+0x68]
0x140aad902: mov    r9d,0x5
0x140aad908: lea    rdx,[rbx+0x58]
0x140aad90c: test   bpl,bpl
0x140aad90f: jne    0x140aad9e5
0x140aad915: mov    rdi,QWORD PTR [rsp+0x20]
0x140aad91a: mov    rcx,rdi
0x140aad91d: call   0x140d4dbd0
0x140aad922: jmp    0x140aad9f2
0x140aad927: cmp    edi,0x1
0x140aad92a: jne    0x140aad931
0x140aad92c: sub    dil,bpl
0x140aad92f: jmp    0x140aad987
0x140aad931: cmp    edi,0x2
0x140aad934: jne    0x140aad9ed
0x140aad93a: call   0x140ece790
0x140aad93f: mov    r8d,eax
0x140aad942: mov    r9d,0x5
0x140aad948: mov    ecx,r8d
0x140aad94b: mov    eax,0x3
0x140aad950: mul    r8d
0x140aad953: sub    ecx,edx
0x140aad955: shr    ecx,1
0x140aad957: add    ecx,edx
0x140aad959: lea    rdx,[rbx+0x58]
0x140aad95d: shr    ecx,0x1e
0x140aad960: imul   ecx,ecx,0x7fffffff
0x140aad966: sub    r8d,ecx
0x140aad969: mov    rcx,r15
0x140aad96c: shr    r8d,0x1e
0x140aad970: movzx  edi,r8b
0x140aad974: lea    r8,[rbx+0x68]
0x140aad978: test   bpl,bpl
0x140aad97b: jne    0x140aad982
0x140aad97d: mov    rcx,QWORD PTR [rsp+0x20]
0x140aad982: call   0x140d4dbd0
0x140aad987: mov    rcx,QWORD PTR [rsp+0x20]
0x140aad98c: lea    r8,[rbx+0x60]
0x140aad990: test   dil,dil
0x140aad993: lea    rdx,[rbx+0x48]
0x140aad997: mov    r9d,0x3
0x140aad99d: cmove  rcx,r15
0x140aad9a1: call   0x140d4dbd0
0x140aad9a6: call   0x140ece790
0x140aad9ab: mov    r8d,eax
0x140aad9ae: mov    eax,0x3
0x140aad9b3: mul    r8d
0x140aad9b6: mov    ecx,r8d
0x140aad9b9: sub    ecx,edx
0x140aad9bb: shr    ecx,1
0x140aad9bd: add    ecx,edx
0x140aad9bf: shr    ecx,0x1e
0x140aad9c2: imul   ecx,ecx,0x7fffffff
0x140aad9c8: sub    r8d,ecx
0x140aad9cb: cmp    r8d,0x147ae15
0x140aad9d2: jae    0x140aad9ed
0x140aad9d4: lea    rsi,[rbx+0x4c]
0x140aad9d8: mov    r9d,0x3
0x140aad9de: mov    rdx,rsi
0x140aad9e1: lea    r8,[rbx+0x62]
0x140aad9e5: mov    rcx,r15
0x140aad9e8: call   0x140d4dbd0
0x140aad9ed: mov    rdi,QWORD PTR [rsp+0x20]
0x140aad9f2: call   0x140ece790
0x140aad9f7: mov    r8d,eax
0x140aad9fa: mov    eax,0x3
0x140aad9ff: mul    r8d
0x140aada02: mov    ecx,r8d
0x140aada05: sub    ecx,edx
0x140aada07: shr    ecx,1
0x140aada09: add    ecx,edx
0x140aada0b: shr    ecx,0x1e
0x140aada0e: imul   ecx,ecx,0x7fffffff
0x140aada14: sub    r8d,ecx
0x140aada17: cmp    r8d,0x147ae15
0x140aada1e: jae    0x140aad1ba
0x140aada24: call   0x140ece790
0x140aada29: mov    r9d,eax
0x140aada2c: lea    r8,[rbx+0x64]
0x140aada30: mov    ecx,r9d
0x140aada33: mov    eax,0x3
0x140aada38: mul    r9d
0x140aada3b: sub    ecx,edx
0x140aada3d: shr    ecx,1
0x140aada3f: add    ecx,edx
0x140aada41: lea    rdx,[rbx+0x50]
0x140aada45: shr    ecx,0x1e
0x140aada48: imul   eax,ecx,0x7fffffff
0x140aada4e: mov    rcx,rdi
0x140aada51: sub    r9d,eax
0x140aada54: cmp    r9d,0x40000000
0x140aada5b: mov    r9d,0x4
0x140aada61: jae    0x140aad1b5
0x140aada67: jmp    0x140aad1b2
