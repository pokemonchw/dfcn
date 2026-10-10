; reference; actual size call 0x3f9317; owner 0x3d6950..0x3fd60d; direct vector refs=True
0x003f92b2: mov    edx,0x36
0x003f92b7: lea    rcx,[rbp+0x3510]
0x003f92be: call   0x1400fb540
0x003f92c3: mov    BYTE PTR [rax],0x2e
0x003f92c6: xor    r9d,r9d
0x003f92c9: xor    r8d,r8d
0x003f92cc: lea    rdx,[rbp+0x3510]
0x003f92d3: lea    rcx,[rip+0x2251116]        # 0x14264a3f0
0x003f92da: call   0x140ad9960
0x003f92df: nop
0x003f92e0: lea    rcx,[rbp+0x3530]
0x003f92e7: call   0x140067e30
0x003f92ec: nop
0x003f92ed: lea    rcx,[rbp+0x3510]
0x003f92f4: call   0x140067e30
0x003f92f9: jmp    0x1403f97b5
0x003f92fe: mov    eax,0xffff8ad0
0x003f9303: cmp    WORD PTR [rip+0x14b3bee],ax        # 0x1418acef8
0x003f930a: je     0x1403f97b5
0x003f9310: lea    rcx,[rip+0x22a2909]        # 0x14269bc20
0x003f9317: call   0x140420dd0
0x003f931c: test   rax,rax
0x003f931f: je     0x1403f97b5
0x003f9325: xor    r8d,r8d
0x003f9328: mov    edx,0x7
0x003f932d: mov    r9b,0x1
0x003f9330: lea    rcx,[rip+0x22510b9]        # 0x14264a3f0
0x003f9337: call   0x1400bb130
0x003f933c: cmp    BYTE PTR [rip+0x14ae275],r15b        # 0x1418a75b8
0x003f9343: je     0x1403f9594
0x003f9349: test   BYTE PTR [rip+0x14ae26c],0x4        # 0x1418a75bc
0x003f9350: je     0x1403f97b5
0x003f9356: mov    edi,DWORD PTR [rbp+0xb4]
0x003f935c: add    edi,0xffffffdb
0x003f935f: lea    r14d,[rdi-0x3c]
0x003f9363: lea    rcx,[rip+0x22a28b6]        # 0x14269bc20
0x003f936a: call   0x140420dd0
0x003f936f: lea    r15d,[rax+0x8]
0x003f9373: mov    esi,0x7
0x003f9378: cmp    r15d,esi
0x003f937b: jl     0x1403f9479
0x003f9381: lea    r13,[rip+0x2251068]        # 0x14264a3f0
0x003f9388: nop    DWORD PTR [rax+rax*1+0x0]
0x003f9390: mov    ebx,r14d
0x003f9393: cmp    r14d,edi
0x003f9396: jg     0x1403f946a
0x003f939c: nop    DWORD PTR [rax+0x0]
0x003f93a0: mov    r8d,ebx
0x003f93a3: mov    edx,esi
0x003f93a5: mov    rcx,r13
0x003f93a8: call   0x1400bb120
0x003f93ad: xor    r8d,r8d
0x003f93b0: xor    edx,edx
0x003f93b2: mov    rcx,r13
0x003f93b5: call   0x1400bb190
0x003f93ba: cmp    esi,0x7
0x003f93bd: jne    0x1403f93f2
0x003f93c3: cmp    ebx,r14d
0x003f93c6: jne    0x1403f93d7
0x003f93cc: mov    edx,DWORD PTR [rip+0x2252942]        # 0x14264bd14
0x003f93d2: jmp    0x1403f9458
; reference; actual size call 0x3f936a; owner 0x3d6950..0x3fd60d; direct vector refs=True
0x003f92fe: mov    eax,0xffff8ad0
0x003f9303: cmp    WORD PTR [rip+0x14b3bee],ax        # 0x1418acef8
0x003f930a: je     0x1403f97b5
0x003f9310: lea    rcx,[rip+0x22a2909]        # 0x14269bc20
0x003f9317: call   0x140420dd0
0x003f931c: test   rax,rax
0x003f931f: je     0x1403f97b5
0x003f9325: xor    r8d,r8d
0x003f9328: mov    edx,0x7
0x003f932d: mov    r9b,0x1
0x003f9330: lea    rcx,[rip+0x22510b9]        # 0x14264a3f0
0x003f9337: call   0x1400bb130
0x003f933c: cmp    BYTE PTR [rip+0x14ae275],r15b        # 0x1418a75b8
0x003f9343: je     0x1403f9594
0x003f9349: test   BYTE PTR [rip+0x14ae26c],0x4        # 0x1418a75bc
0x003f9350: je     0x1403f97b5
0x003f9356: mov    edi,DWORD PTR [rbp+0xb4]
0x003f935c: add    edi,0xffffffdb
0x003f935f: lea    r14d,[rdi-0x3c]
0x003f9363: lea    rcx,[rip+0x22a28b6]        # 0x14269bc20
0x003f936a: call   0x140420dd0
0x003f936f: lea    r15d,[rax+0x8]
0x003f9373: mov    esi,0x7
0x003f9378: cmp    r15d,esi
0x003f937b: jl     0x1403f9479
0x003f9381: lea    r13,[rip+0x2251068]        # 0x14264a3f0
0x003f9388: nop    DWORD PTR [rax+rax*1+0x0]
0x003f9390: mov    ebx,r14d
0x003f9393: cmp    r14d,edi
0x003f9396: jg     0x1403f946a
0x003f939c: nop    DWORD PTR [rax+0x0]
0x003f93a0: mov    r8d,ebx
0x003f93a3: mov    edx,esi
0x003f93a5: mov    rcx,r13
0x003f93a8: call   0x1400bb120
0x003f93ad: xor    r8d,r8d
0x003f93b0: xor    edx,edx
0x003f93b2: mov    rcx,r13
0x003f93b5: call   0x1400bb190
0x003f93ba: cmp    esi,0x7
0x003f93bd: jne    0x1403f93f2
0x003f93c3: cmp    ebx,r14d
0x003f93c6: jne    0x1403f93d7
0x003f93cc: mov    edx,DWORD PTR [rip+0x2252942]        # 0x14264bd14
0x003f93d2: jmp    0x1403f9458
0x003f93d7: mov    rcx,r13
0x003f93da: cmp    ebx,edi
0x003f93dc: jne    0x1403f93ea
0x003f93e2: mov    edx,DWORD PTR [rip+0x2252944]        # 0x14264bd2c
0x003f93e8: jmp    0x1403f945b
0x003f93ea: mov    edx,DWORD PTR [rip+0x2252930]        # 0x14264bd20
0x003f93f0: jmp    0x1403f945b
0x003f93f2: cmp    esi,r15d
0x003f93f5: jne    0x1403f9430
0x003f93fb: cmp    ebx,r14d
0x003f93fe: jne    0x1403f940f
0x003f9404: mov    edx,DWORD PTR [rip+0x2252912]        # 0x14264bd1c
0x003f940a: jmp    0x1403f9458
0x003f940f: mov    rcx,r13
0x003f9412: cmp    ebx,edi
0x003f9414: jne    0x1403f9425
; reference; actual begin-iterator call 0x3f9487; owner 0x3d6950..0x3fd60d; direct vector refs=True
0x003f942b: jmp    0x1403f945b
0x003f9430: cmp    ebx,r14d
0x003f9433: jne    0x1403f9444
0x003f9439: mov    edx,DWORD PTR [rip+0x22528d9]        # 0x14264bd18
0x003f943f: jmp    0x1403f9458
0x003f9444: cmp    ebx,edi
0x003f9446: mov    edx,DWORD PTR [rip+0x22528e4]        # 0x14264bd30
0x003f944c: je     0x1403f9458
0x003f9452: mov    edx,DWORD PTR [rip+0x22528cc]        # 0x14264bd24
0x003f9458: mov    rcx,r13
0x003f945b: call   0x140adaad0
0x003f9460: inc    ebx
0x003f9462: cmp    ebx,edi
0x003f9464: jle    0x1403f93a0
0x003f946a: inc    esi
0x003f946c: cmp    esi,r15d
0x003f946f: jle    0x1403f9390
0x003f9475: mov    r13d,DWORD PTR [rbp-0x48]
0x003f9479: lea    rdx,[rbp+0x268]
0x003f9480: lea    rcx,[rip+0x22a2799]        # 0x14269bc20
0x003f9487: call   0x140420e00
0x003f948c: lea    rdx,[rbp+0x270]
0x003f9493: lea    rcx,[rip+0x22a2786]        # 0x14269bc20
0x003f949a: call   0x140420df0
0x003f949f: lea    r8,[rbp+0x270]
0x003f94a6: lea    rdx,[rbp-0x1b]
0x003f94aa: lea    rcx,[rbp+0x268]
0x003f94b1: call   0x14006ee20
0x003f94b6: xor    edx,edx
0x003f94b8: movzx  ecx,BYTE PTR [rax]
0x003f94bb: call   0x1400657b0
0x003f94c0: test   al,al
0x003f94c2: je     0x1403f97b5
0x003f94c8: mov    esi,0x8
0x003f94cd: lea    r13,[rip+0x2250f1c]        # 0x14264a3f0
0x003f94d4: nop    DWORD PTR [rax+0x0]
0x003f94d8: nop    DWORD PTR [rax+rax*1+0x0]
0x003f94e0: lea    r8d,[r14+0x2]
0x003f94e4: mov    edx,esi
0x003f94e6: mov    rcx,r13
0x003f94e9: call   0x1400bb120
0x003f94ee: lea    rcx,[rbp+0x268]
0x003f94f5: call   0x14006ee10
0x003f94fa: mov    rcx,QWORD PTR [rax]
0x003f94fd: movzx  edi,BYTE PTR [rcx+0x4c]
0x003f9501: lea    rcx,[rbp+0x268]
0x003f9508: call   0x14006ee10
0x003f950d: mov    rcx,QWORD PTR [rax]
0x003f9510: movzx  ebx,WORD PTR [rcx+0x4a]
0x003f9514: lea    rcx,[rbp+0x268]
0x003f951b: call   0x14006ee10
0x003f9520: mov    rcx,QWORD PTR [rax]
0x003f9523: movzx  r9d,dil
0x003f9527: movzx  r8d,bx
0x003f952b: movzx  edx,WORD PTR [rcx+0x48]
0x003f952f: mov    rcx,r13
0x003f9532: call   0x1400bb130
0x003f9537: lea    rcx,[rbp+0x268]
0x003f953e: call   0x14006ee10
0x003f9543: mov    rdx,QWORD PTR [rax]
0x003f9546: add    rdx,0x28
; reference; actual end-iterator call 0x3f949a; owner 0x3d6950..0x3fd60d; direct vector refs=True
0x003f9439: mov    edx,DWORD PTR [rip+0x22528d9]        # 0x14264bd18
0x003f943f: jmp    0x1403f9458
0x003f9444: cmp    ebx,edi
0x003f9446: mov    edx,DWORD PTR [rip+0x22528e4]        # 0x14264bd30
0x003f944c: je     0x1403f9458
0x003f9452: mov    edx,DWORD PTR [rip+0x22528cc]        # 0x14264bd24
0x003f9458: mov    rcx,r13
0x003f945b: call   0x140adaad0
0x003f9460: inc    ebx
0x003f9462: cmp    ebx,edi
0x003f9464: jle    0x1403f93a0
0x003f946a: inc    esi
0x003f946c: cmp    esi,r15d
0x003f946f: jle    0x1403f9390
0x003f9475: mov    r13d,DWORD PTR [rbp-0x48]
0x003f9479: lea    rdx,[rbp+0x268]
0x003f9480: lea    rcx,[rip+0x22a2799]        # 0x14269bc20
0x003f9487: call   0x140420e00
0x003f948c: lea    rdx,[rbp+0x270]
0x003f9493: lea    rcx,[rip+0x22a2786]        # 0x14269bc20
0x003f949a: call   0x140420df0
0x003f949f: lea    r8,[rbp+0x270]
0x003f94a6: lea    rdx,[rbp-0x1b]
0x003f94aa: lea    rcx,[rbp+0x268]
0x003f94b1: call   0x14006ee20
0x003f94b6: xor    edx,edx
0x003f94b8: movzx  ecx,BYTE PTR [rax]
0x003f94bb: call   0x1400657b0
0x003f94c0: test   al,al
0x003f94c2: je     0x1403f97b5
0x003f94c8: mov    esi,0x8
0x003f94cd: lea    r13,[rip+0x2250f1c]        # 0x14264a3f0
0x003f94d4: nop    DWORD PTR [rax+0x0]
0x003f94d8: nop    DWORD PTR [rax+rax*1+0x0]
0x003f94e0: lea    r8d,[r14+0x2]
0x003f94e4: mov    edx,esi
0x003f94e6: mov    rcx,r13
0x003f94e9: call   0x1400bb120
0x003f94ee: lea    rcx,[rbp+0x268]
0x003f94f5: call   0x14006ee10
0x003f94fa: mov    rcx,QWORD PTR [rax]
0x003f94fd: movzx  edi,BYTE PTR [rcx+0x4c]
0x003f9501: lea    rcx,[rbp+0x268]
0x003f9508: call   0x14006ee10
0x003f950d: mov    rcx,QWORD PTR [rax]
0x003f9510: movzx  ebx,WORD PTR [rcx+0x4a]
0x003f9514: lea    rcx,[rbp+0x268]
0x003f951b: call   0x14006ee10
0x003f9520: mov    rcx,QWORD PTR [rax]
0x003f9523: movzx  r9d,dil
0x003f9527: movzx  r8d,bx
0x003f952b: movzx  edx,WORD PTR [rcx+0x48]
0x003f952f: mov    rcx,r13
0x003f9532: call   0x1400bb130
0x003f9537: lea    rcx,[rbp+0x268]
0x003f953e: call   0x14006ee10
0x003f9543: mov    rdx,QWORD PTR [rax]
0x003f9546: add    rdx,0x28
0x003f954a: xor    r9d,r9d
0x003f954d: xor    r8d,r8d
0x003f9550: mov    rcx,r13
; reference; actual size call 0x3f95a8; owner 0x3d6950..0x3fd60d; direct vector refs=True
0x003f954d: xor    r8d,r8d
0x003f9550: mov    rcx,r13
0x003f9553: call   0x140ad9960
0x003f9558: inc    esi
0x003f955a: lea    rcx,[rbp+0x268]
0x003f9561: call   0x14006ee00
0x003f9566: lea    r8,[rbp+0x270]
0x003f956d: lea    rdx,[rbp-0x1b]
0x003f9571: lea    rcx,[rbp+0x268]
0x003f9578: call   0x14006ee20
0x003f957d: xor    edx,edx
0x003f957f: movzx  ecx,BYTE PTR [rax]
0x003f9582: call   0x1400657b0
0x003f9587: test   al,al
0x003f9589: jne    0x1403f94e0
0x003f958f: jmp    0x1403f97b1
0x003f9594: mov    edi,DWORD PTR [rbp+0xb4]
0x003f959a: add    edi,0xffffffdb
0x003f959d: lea    r14d,[rdi-0x3c]
0x003f95a1: lea    rcx,[rip+0x22a2678]        # 0x14269bc20
0x003f95a8: call   0x140420dd0
0x003f95ad: lea    r15d,[rax+0x5]
0x003f95b1: mov    esi,0x3
0x003f95b6: cmp    r15d,esi
0x003f95b9: jl     0x1403f96a7
0x003f95bf: lea    r13,[rip+0x2250e2a]        # 0x14264a3f0
0x003f95c6: data16 nop WORD PTR [rax+rax*1+0x0]
0x003f95d0: mov    ebx,r14d
0x003f95d3: cmp    r14d,edi
0x003f95d6: jg     0x1403f9698
0x003f95dc: nop    DWORD PTR [rax+0x0]
0x003f95e0: mov    r8d,ebx
0x003f95e3: mov    edx,esi
0x003f95e5: mov    rcx,r13
0x003f95e8: call   0x1400bb120
0x003f95ed: xor    r8d,r8d
0x003f95f0: xor    edx,edx
0x003f95f2: mov    rcx,r13
0x003f95f5: call   0x1400bb190
0x003f95fa: cmp    esi,0x3
0x003f95fd: jne    0x1403f9620
0x003f9603: cmp    ebx,r14d
0x003f9606: jne    0x1403f9614
0x003f960c: mov    edx,DWORD PTR [rip+0x225272a]        # 0x14264bd3c
0x003f9612: jmp    0x1403f9686
0x003f9614: cmp    ebx,edi
0x003f9616: jne    0x1403f968e
0x003f9618: mov    edx,DWORD PTR [rip+0x2252726]        # 0x14264bd44
0x003f961e: jmp    0x1403f9686
0x003f9620: cmp    esi,r15d
0x003f9623: jne    0x1403f965e
0x003f9629: cmp    ebx,r14d
0x003f962c: jne    0x1403f963d
0x003f9632: mov    edx,DWORD PTR [rip+0x22526e4]        # 0x14264bd1c
0x003f9638: jmp    0x1403f9686
0x003f963d: mov    rcx,r13
0x003f9640: cmp    ebx,edi
0x003f9642: jne    0x1403f9653
0x003f9648: mov    edx,DWORD PTR [rip+0x22526e6]        # 0x14264bd34
0x003f964e: jmp    0x1403f9689
0x003f9653: mov    edx,DWORD PTR [rip+0x22526cf]        # 0x14264bd28
; reference; actual begin-iterator call 0x3f96b5; owner 0x3d6950..0x3fd60d; direct vector refs=True
0x003f9659: jmp    0x1403f9689
0x003f965e: cmp    ebx,r14d
0x003f9661: jne    0x1403f9672
0x003f9667: mov    edx,DWORD PTR [rip+0x22526ab]        # 0x14264bd18
0x003f966d: jmp    0x1403f9686
0x003f9672: cmp    ebx,edi
0x003f9674: mov    edx,DWORD PTR [rip+0x22526b6]        # 0x14264bd30
0x003f967a: je     0x1403f9686
0x003f9680: mov    edx,DWORD PTR [rip+0x225269e]        # 0x14264bd24
0x003f9686: mov    rcx,r13
0x003f9689: call   0x140adaad0
0x003f968e: inc    ebx
0x003f9690: cmp    ebx,edi
0x003f9692: jle    0x1403f95e0
0x003f9698: inc    esi
0x003f969a: cmp    esi,r15d
0x003f969d: jle    0x1403f95d0
0x003f96a3: mov    r13d,DWORD PTR [rbp-0x48]
0x003f96a7: lea    rdx,[rbp+0x278]
0x003f96ae: lea    rcx,[rip+0x22a256b]        # 0x14269bc20
0x003f96b5: call   0x140420e00
0x003f96ba: lea    rdx,[rbp+0x280]
0x003f96c1: lea    rcx,[rip+0x22a2558]        # 0x14269bc20
0x003f96c8: call   0x140420df0
0x003f96cd: lea    r8,[rbp+0x280]
0x003f96d4: lea    rdx,[rbp-0x1a]
0x003f96d8: lea    rcx,[rbp+0x278]
0x003f96df: call   0x14006ee20
0x003f96e4: xor    edx,edx
0x003f96e6: movzx  ecx,BYTE PTR [rax]
0x003f96e9: call   0x1400657b0
0x003f96ee: test   al,al
0x003f96f0: je     0x1403f97b5
0x003f96f6: mov    esi,0x5
0x003f96fb: lea    r13,[rip+0x2250cee]        # 0x14264a3f0
0x003f9702: lea    r8d,[r14+0x2]
0x003f9706: mov    edx,esi
0x003f9708: mov    rcx,r13
0x003f970b: call   0x1400bb120
0x003f9710: lea    rcx,[rbp+0x278]
0x003f9717: call   0x14006ee10
0x003f971c: mov    rcx,QWORD PTR [rax]
0x003f971f: movzx  edi,BYTE PTR [rcx+0x4c]
0x003f9723: lea    rcx,[rbp+0x278]
0x003f972a: call   0x14006ee10
0x003f972f: mov    rcx,QWORD PTR [rax]
0x003f9732: movzx  ebx,WORD PTR [rcx+0x4a]
0x003f9736: lea    rcx,[rbp+0x278]
0x003f973d: call   0x14006ee10
0x003f9742: mov    rcx,QWORD PTR [rax]
0x003f9745: movzx  r9d,dil
0x003f9749: movzx  r8d,bx
0x003f974d: movzx  edx,WORD PTR [rcx+0x48]
0x003f9751: mov    rcx,r13
0x003f9754: call   0x1400bb130
0x003f9759: lea    rcx,[rbp+0x278]
0x003f9760: call   0x14006ee10
0x003f9765: mov    rdx,QWORD PTR [rax]
0x003f9768: add    rdx,0x28
0x003f976c: xor    r9d,r9d
0x003f976f: xor    r8d,r8d
; reference; actual end-iterator call 0x3f96c8; owner 0x3d6950..0x3fd60d; direct vector refs=True
0x003f9667: mov    edx,DWORD PTR [rip+0x22526ab]        # 0x14264bd18
0x003f966d: jmp    0x1403f9686
0x003f9672: cmp    ebx,edi
0x003f9674: mov    edx,DWORD PTR [rip+0x22526b6]        # 0x14264bd30
0x003f967a: je     0x1403f9686
0x003f9680: mov    edx,DWORD PTR [rip+0x225269e]        # 0x14264bd24
0x003f9686: mov    rcx,r13
0x003f9689: call   0x140adaad0
0x003f968e: inc    ebx
0x003f9690: cmp    ebx,edi
0x003f9692: jle    0x1403f95e0
0x003f9698: inc    esi
0x003f969a: cmp    esi,r15d
0x003f969d: jle    0x1403f95d0
0x003f96a3: mov    r13d,DWORD PTR [rbp-0x48]
0x003f96a7: lea    rdx,[rbp+0x278]
0x003f96ae: lea    rcx,[rip+0x22a256b]        # 0x14269bc20
0x003f96b5: call   0x140420e00
0x003f96ba: lea    rdx,[rbp+0x280]
0x003f96c1: lea    rcx,[rip+0x22a2558]        # 0x14269bc20
0x003f96c8: call   0x140420df0
0x003f96cd: lea    r8,[rbp+0x280]
0x003f96d4: lea    rdx,[rbp-0x1a]
0x003f96d8: lea    rcx,[rbp+0x278]
0x003f96df: call   0x14006ee20
0x003f96e4: xor    edx,edx
0x003f96e6: movzx  ecx,BYTE PTR [rax]
0x003f96e9: call   0x1400657b0
0x003f96ee: test   al,al
0x003f96f0: je     0x1403f97b5
0x003f96f6: mov    esi,0x5
0x003f96fb: lea    r13,[rip+0x2250cee]        # 0x14264a3f0
0x003f9702: lea    r8d,[r14+0x2]
0x003f9706: mov    edx,esi
0x003f9708: mov    rcx,r13
0x003f970b: call   0x1400bb120
0x003f9710: lea    rcx,[rbp+0x278]
0x003f9717: call   0x14006ee10
0x003f971c: mov    rcx,QWORD PTR [rax]
0x003f971f: movzx  edi,BYTE PTR [rcx+0x4c]
0x003f9723: lea    rcx,[rbp+0x278]
0x003f972a: call   0x14006ee10
0x003f972f: mov    rcx,QWORD PTR [rax]
0x003f9732: movzx  ebx,WORD PTR [rcx+0x4a]
0x003f9736: lea    rcx,[rbp+0x278]
0x003f973d: call   0x14006ee10
0x003f9742: mov    rcx,QWORD PTR [rax]
0x003f9745: movzx  r9d,dil
0x003f9749: movzx  r8d,bx
0x003f974d: movzx  edx,WORD PTR [rcx+0x48]
0x003f9751: mov    rcx,r13
0x003f9754: call   0x1400bb130
0x003f9759: lea    rcx,[rbp+0x278]
0x003f9760: call   0x14006ee10
0x003f9765: mov    rdx,QWORD PTR [rax]
0x003f9768: add    rdx,0x28
0x003f976c: xor    r9d,r9d
0x003f976f: xor    r8d,r8d
0x003f9772: mov    rcx,r13
0x003f9775: call   0x140ad9960
0x003f977a: inc    esi
; reference; actual pointer-push call 0x408771; owner 0x4085f0..0x40a214; direct vector refs=True
0x00408722: cmp    WORD PTR [rbx+0xc],r13w
0x00408727: jne    0x14040877b
0x00408729: cmp    WORD PTR [rbx+0xe],r9w
0x0040872e: jne    0x14040877b
0x00408730: mov    ecx,0x50
0x00408735: call   0x141539690
0x0040873a: mov    rcx,rax
0x0040873d: call   0x14040a220
0x00408742: mov    rcx,rax
0x00408745: mov    QWORD PTR [rbp+0x67],rax
0x00408749: mov    edx,0xd
0x0040874e: call   0x1403d6860
0x00408753: mov    r9d,DWORD PTR [rbx]
0x00408756: mov    DWORD PTR [rcx+0x4],r9d
0x0040875a: mov    eax,DWORD PTR [rbx+0x14]
0x0040875d: mov    DWORD PTR [rcx+0xc],eax
0x00408760: movzx  eax,WORD PTR [rbx+0x10]
0x00408764: mov    WORD PTR [rcx+0x8],ax
0x00408768: call   0x140406860
0x0040876d: lea    rdx,[rbp+0x67]
0x00408771: call   0x140420e10
0x00408776: movzx  r9d,WORD PTR [rbp+0x7f]
0x0040877b: inc    edi
0x0040877d: mov    eax,0x51eb851f
0x00408782: imul   edi
0x00408784: sar    edx,0x5
0x00408787: mov    eax,edx
0x00408789: shr    eax,0x1f
0x0040878c: add    edx,eax
0x0040878e: imul   eax,edx,0x64
0x00408791: sub    edi,eax
0x00408793: sub    rsi,0x1
0x00408797: jne    0x140408700
0x0040879d: mov    QWORD PTR [rsp+0x38],r14
0x004087a2: movzx  r8d,r13w
0x004087a6: mov    BYTE PTR [rsp+0x30],sil
0x004087ab: movzx  edx,r12w
0x004087af: mov    BYTE PTR [rsp+0x28],0x1
0x004087b4: mov    BYTE PTR [rsp+0x20],sil
0x004087b9: call   0x140e84bc0
0x004087be: test   al,al
0x004087c0: je     0x14040a1bc
0x004087c6: mov    rax,QWORD PTR [rip+0x1fdc903]        # 0x1423e50d0
0x004087cd: xor    r15d,r15d
0x004087d0: sub    rax,QWORD PTR [rip+0x1fdc8f1]        # 0x1423e50c8
0x004087d7: mov    r14d,r15d
0x004087da: sar    rax,0x3
0x004087de: mov    esi,0x2
0x004087e3: movsxd rdi,eax
0x004087e6: mov    QWORD PTR [rbp+0x7],rdi
0x004087ea: mov    QWORD PTR [rbp-0x1],r15
0x004087ee: test   eax,eax
0x004087f0: jle    0x1404089d5
0x004087f6: data16 nop WORD PTR [rax+rax*1+0x0]
0x00408800: mov    rax,QWORD PTR [rip+0x1fdc8c1]        # 0x1423e50c8
0x00408807: mov    rbx,QWORD PTR [rax+r14*8]
0x0040880b: test   DWORD PTR [rbx+0x110],0x2000002
0x00408815: jne    0x1404089b8
0x0040881b: mov    rcx,QWORD PTR [rip+0x1fdc8ee]        # 0x1423e5110
0x00408822: lea    rax,[rbp-0x19]
0x00408826: mov    QWORD PTR [rsp+0x28],rax
; reference; actual pointer-push call 0x408923; owner 0x4085f0..0x40a214; direct vector refs=True
0x004088d2: cmp    eax,0x1
0x004088d5: jg     0x140408928
0x004088d7: cmp    r8w,WORD PTR [rbp+0x6f]
0x004088dc: jne    0x140408928
0x004088de: cmp    dx,WORD PTR [rbp+0x77]
0x004088e2: jne    0x140408928
0x004088e4: mov    ecx,0x50
0x004088e9: call   0x141539690
0x004088ee: mov    rcx,rax
0x004088f1: call   0x14040a220
0x004088f6: mov    rcx,rax
0x004088f9: mov    QWORD PTR [rbp-0x9],rax
0x004088fd: mov    edx,0xf
0x00408902: call   0x1403d6860
0x00408907: mov    BYTE PTR [rcx+0x4],r14b
0x0040890b: mov    WORD PTR [rcx+0x6],r13w
0x00408910: mov    WORD PTR [rcx+0x8],r12w
0x00408915: mov    WORD PTR [rcx+0xa],r15w
0x0040891a: call   0x140406860
0x0040891f: lea    rdx,[rbp-0x9]
0x00408923: call   0x140420e10
0x00408928: add    rdi,0x6
0x0040892c: sub    rsi,0x1
0x00408930: jne    0x1404088a0
0x00408936: mov    r14,QWORD PTR [rbp-0x1]
0x0040893a: mov    esi,0x2
0x0040893f: mov    rdi,QWORD PTR [rbp+0x7]
0x00408943: movzx  eax,WORD PTR [rbp+0x6f]
0x00408947: movzx  r9d,WORD PTR [rbp+0x7f]
0x0040894c: cmp    WORD PTR [rbx+0xa8],ax
0x00408953: jne    0x1404089b8
0x00408955: movzx  eax,WORD PTR [rbp+0x77]
0x00408959: cmp    WORD PTR [rbx+0xaa],ax
0x00408960: jne    0x1404089b8
0x00408962: cmp    WORD PTR [rbx+0xac],r9w
0x0040896a: jne    0x1404089b8
0x0040896c: mov    ecx,0x50
0x00408971: call   0x141539690
0x00408976: mov    rcx,rax
0x00408979: call   0x14040a220
0x0040897e: mov    rcx,rax
0x00408981: mov    QWORD PTR [rbp-0x1],rax
0x00408985: mov    edx,0xf
0x0040898a: call   0x1403d6860
0x0040898f: movzx  eax,BYTE PTR [rbp+0x67]
0x00408993: mov    BYTE PTR [rcx+0x4],al
0x00408996: mov    WORD PTR [rcx+0x6],r13w
0x0040899b: mov    WORD PTR [rcx+0x8],r12w
0x004089a0: mov    WORD PTR [rcx+0xa],r15w
0x004089a5: call   0x140406860
0x004089aa: lea    rdx,[rbp-0x1]
0x004089ae: call   0x140420e10
0x004089b3: movzx  r9d,WORD PTR [rbp+0x7f]
0x004089b8: inc    r14
0x004089bb: mov    QWORD PTR [rbp-0x1],r14
0x004089bf: cmp    r14,rdi
0x004089c2: jl     0x140408800
0x004089c8: movzx  r13d,WORD PTR [rbp+0x77]
0x004089cd: xor    r15d,r15d
0x004089d0: movzx  r12d,WORD PTR [rbp+0x6f]
0x004089d5: movzx  r8d,r13w
; reference; actual pointer-push call 0x4089ae; owner 0x4085f0..0x40a214; direct vector refs=True
0x00408955: movzx  eax,WORD PTR [rbp+0x77]
0x00408959: cmp    WORD PTR [rbx+0xaa],ax
0x00408960: jne    0x1404089b8
0x00408962: cmp    WORD PTR [rbx+0xac],r9w
0x0040896a: jne    0x1404089b8
0x0040896c: mov    ecx,0x50
0x00408971: call   0x141539690
0x00408976: mov    rcx,rax
0x00408979: call   0x14040a220
0x0040897e: mov    rcx,rax
0x00408981: mov    QWORD PTR [rbp-0x1],rax
0x00408985: mov    edx,0xf
0x0040898a: call   0x1403d6860
0x0040898f: movzx  eax,BYTE PTR [rbp+0x67]
0x00408993: mov    BYTE PTR [rcx+0x4],al
0x00408996: mov    WORD PTR [rcx+0x6],r13w
0x0040899b: mov    WORD PTR [rcx+0x8],r12w
0x004089a0: mov    WORD PTR [rcx+0xa],r15w
0x004089a5: call   0x140406860
0x004089aa: lea    rdx,[rbp-0x1]
0x004089ae: call   0x140420e10
0x004089b3: movzx  r9d,WORD PTR [rbp+0x7f]
0x004089b8: inc    r14
0x004089bb: mov    QWORD PTR [rbp-0x1],r14
0x004089bf: cmp    r14,rdi
0x004089c2: jl     0x140408800
0x004089c8: movzx  r13d,WORD PTR [rbp+0x77]
0x004089cd: xor    r15d,r15d
0x004089d0: movzx  r12d,WORD PTR [rbp+0x6f]
0x004089d5: movzx  r8d,r13w
0x004089d9: lea    rcx,[rip+0x1fc8b10]        # 0x1423d14f0
0x004089e0: movzx  edx,r12w
0x004089e4: call   0x14007dc40
0x004089e9: mov    edi,eax
0x004089eb: mov    esi,0xffff8ad0
0x004089f0: test   al,al
0x004089f2: jns    0x140408a5c
0x004089f4: mov    ecx,0x50
0x004089f9: call   0x141539690
0x004089fe: xorps  xmm0,xmm0
0x00408a01: mov    QWORD PTR [rbp+0x67],rax
0x00408a05: mov    rcx,rax
0x00408a08: mov    rbx,rax
0x00408a0b: movups XMMWORD PTR [rax+0x28],xmm0
0x00408a0f: mov    QWORD PTR [rax+0x38],r15
0x00408a13: mov    QWORD PTR [rax+0x40],0xf
0x00408a1b: mov    BYTE PTR [rax+0x28],0x0
0x00408a1f: mov    QWORD PTR [rax],0xe
0x00408a26: mov    DWORD PTR [rax+0x1c],0x8ad08ad0
0x00408a2d: mov    WORD PTR [rax+0x20],si
0x00408a31: call   0x140406860
0x00408a36: mov    rdx,QWORD PTR [rip+0x22931eb]        # 0x14269bc28
0x00408a3d: cmp    rdx,QWORD PTR [rip+0x22931ec]        # 0x14269bc30
0x00408a44: je     0x140408a53
0x00408a46: mov    QWORD PTR [rdx],rbx
0x00408a49: add    QWORD PTR [rip+0x22931d7],0x8        # 0x14269bc28
0x00408a51: jmp    0x140408a5c
0x00408a53: lea    r8,[rbp+0x67]
0x00408a57: call   0x140420e40
0x00408a5c: test   dil,0x40
0x00408a60: je     0x140408ad0
; reference; actual size call 0xb02d0a; owner 0xaf1190..0xb03c40; direct vector refs=True
0x00b02ca8: mov    r9b,0x1
0x00b02cab: mov    rcx,r15
0x00b02cae: call   0x1400bb130
0x00b02cb3: mov    r8d,DWORD PTR [rbp+0x2c4]
0x00b02cba: mov    edx,DWORD PTR [rbp+0xec]
0x00b02cc0: mov    rcx,r15
0x00b02cc3: call   0x1400bb120
0x00b02cc8: mov    BYTE PTR [rsp+0x30],0x0
0x00b02ccd: mov    r13d,0x8
0x00b02cd3: mov    DWORD PTR [rsp+0x28],r13d
0x00b02cd8: mov    DWORD PTR [rsp+0x20],0xc
0x00b02ce0: xor    r9d,r9d
0x00b02ce3: xor    r8d,r8d
0x00b02ce6: mov    edx,DWORD PTR [rbx+0x142c]
0x00b02cec: mov    rcx,r15
0x00b02cef: call   0x140adad70
0x00b02cf4: jmp    0x140b02d03
0x00b02cf6: lea    r15,[rip+0x1b476f3]        # 0x14264a3f0
0x00b02cfd: mov    r13d,0x8
0x00b02d03: lea    rcx,[rip+0x1b98f16]        # 0x14269bc20
0x00b02d0a: call   0x140420dd0
0x00b02d0f: test   rax,rax
0x00b02d12: je     0x140b03269
0x00b02d18: cmp    BYTE PTR [rip+0xda56b1],0x0        # 0x1418a83d0
0x00b02d1f: jne    0x140b03269
0x00b02d25: cmp    BYTE PTR [rip+0xda5634],0x0        # 0x1418a8360
0x00b02d2c: jne    0x140b03269
0x00b02d32: cmp    BYTE PTR [rip+0xda57af],0x0        # 0x1418a84e8
0x00b02d39: jne    0x140b03269
0x00b02d3f: cmp    BYTE PTR [rip+0xda586a],0x0        # 0x1418a85b0
0x00b02d46: jne    0x140b03269
0x00b02d4c: cmp    BYTE PTR [rip+0xda5d5d],0x0        # 0x1418a8ab0
0x00b02d53: jne    0x140b03269
0x00b02d59: cmp    BYTE PTR [rip+0xda59c8],0x0        # 0x1418a8728
0x00b02d60: jne    0x140b03269
0x00b02d66: cmp    BYTE PTR [rip+0xda5cdb],0x0        # 0x1418a8a48
0x00b02d6d: jne    0x140b03269
0x00b02d73: cmp    BYTE PTR [rip+0xda5e06],0x0        # 0x1418a8b80
0x00b02d7a: jne    0x140b03269
0x00b02d80: cmp    BYTE PTR [rip+0xda5e69],0x0        # 0x1418a8bf0
0x00b02d87: jne    0x140b03269
0x00b02d8d: cmp    BYTE PTR [rip+0xda159c],0x0        # 0x1418a4330
0x00b02d94: jne    0x140b03269
0x00b02d9a: cmp    BYTE PTR [rip+0xd9ff57],0x0        # 0x1418a2cf8
0x00b02da1: jne    0x140b03518
0x00b02da7: cmp    BYTE PTR [rip+0xda019a],0x0        # 0x1418a2f48
0x00b02dae: jne    0x140b03518
0x00b02db4: cmp    BYTE PTR [rip+0xd9ec9d],0x0        # 0x1418a1a58
0x00b02dbb: jne    0x140b03518
0x00b02dc1: cmp    BYTE PTR [rip+0xda08e8],0x0        # 0x1418a36b0
0x00b02dc8: jne    0x140b032df
0x00b02dce: cmp    BYTE PTR [rip+0xda4d1b],0x0        # 0x1418a7af0
0x00b02dd5: jne    0x140b032df
0x00b02ddb: cmp    BYTE PTR [rip+0xda44be],0x0        # 0x1418a72a0
0x00b02de2: jne    0x140b032df
0x00b02de8: cmp    BYTE PTR [rip+0xda5d69],0x0        # 0x1418a8b58
0x00b02def: jne    0x140b032df
0x00b02df5: lea    rcx,[rip+0x19e0a84]        # 0x1424e3880
0x00b02dfc: call   0x14006ee50
0x00b02e01: test   rax,rax
0x00b02e04: jne    0x140b03269
; reference; actual size call 0xb02e55; owner 0xaf1190..0xb03c40; direct vector refs=True
0x00b02def: jne    0x140b032df
0x00b02df5: lea    rcx,[rip+0x19e0a84]        # 0x1424e3880
0x00b02dfc: call   0x14006ee50
0x00b02e01: test   rax,rax
0x00b02e04: jne    0x140b03269
0x00b02e0a: test   BYTE PTR [rip+0x19e4dff],0x10        # 0x1424e7c10
0x00b02e11: jne    0x140b03269
0x00b02e17: xor    r8d,r8d
0x00b02e1a: mov    edx,0x7
0x00b02e1f: mov    r9b,0x1
0x00b02e22: mov    rcx,r15
0x00b02e25: call   0x1400bb130
0x00b02e2a: cmp    BYTE PTR [rip+0xda4787],0x0        # 0x1418a75b8
0x00b02e31: je     0x140b03036
0x00b02e37: test   BYTE PTR [rip+0xda477e],0x4        # 0x1418a75bc
0x00b02e3e: je     0x140b03269
0x00b02e44: mov    edi,DWORD PTR [rbp-0x70]
0x00b02e47: add    edi,0xffffffdb
0x00b02e4a: lea    r14d,[rdi-0x3c]
0x00b02e4e: lea    rcx,[rip+0x1b98dcb]        # 0x14269bc20
0x00b02e55: call   0x140420dd0
0x00b02e5a: lea    r15d,[rax+0x8]
0x00b02e5e: mov    esi,0x7
0x00b02e63: cmp    r15d,esi
0x00b02e66: jl     0x140b02f29
0x00b02e6c: nop    DWORD PTR [rax+0x0]
0x00b02e70: mov    ebx,r14d
0x00b02e73: cmp    r14d,edi
0x00b02e76: jg     0x140b02f1e
0x00b02e7c: lea    r12,[rip+0x1b4756d]        # 0x14264a3f0
0x00b02e83: mov    r8d,ebx
0x00b02e86: mov    edx,esi
0x00b02e88: mov    rcx,r12
0x00b02e8b: call   0x1400bb120
0x00b02e90: xor    r8d,r8d
0x00b02e93: xor    edx,edx
0x00b02e95: mov    rcx,r12
0x00b02e98: call   0x1400bb190
0x00b02e9d: cmp    esi,0x7
0x00b02ea0: jne    0x140b02ec6
0x00b02ea2: cmp    ebx,r14d
0x00b02ea5: jne    0x140b02eaf
0x00b02ea7: mov    edx,DWORD PTR [rip+0x1b48e67]        # 0x14264bd14
0x00b02ead: jmp    0x140b02f0c
0x00b02eaf: mov    rcx,r12
0x00b02eb2: cmp    ebx,edi
0x00b02eb4: jne    0x140b02ebe
0x00b02eb6: mov    edx,DWORD PTR [rip+0x1b48e70]        # 0x14264bd2c
0x00b02ebc: jmp    0x140b02f0f
0x00b02ebe: mov    edx,DWORD PTR [rip+0x1b48e5c]        # 0x14264bd20
0x00b02ec4: jmp    0x140b02f0f
0x00b02ec6: cmp    esi,r15d
0x00b02ec9: jne    0x140b02eef
0x00b02ecb: cmp    ebx,r14d
0x00b02ece: jne    0x140b02ed8
0x00b02ed0: mov    edx,DWORD PTR [rip+0x1b48e46]        # 0x14264bd1c
0x00b02ed6: jmp    0x140b02f0c
0x00b02ed8: mov    rcx,r12
0x00b02edb: cmp    ebx,edi
0x00b02edd: jne    0x140b02ee7
0x00b02edf: mov    edx,DWORD PTR [rip+0x1b48e4f]        # 0x14264bd34
; reference; actual begin-iterator call 0xb02f37; owner 0xaf1190..0xb03c40; direct vector refs=True
0x00b02ee7: mov    edx,DWORD PTR [rip+0x1b48e3b]        # 0x14264bd28
0x00b02eed: jmp    0x140b02f0f
0x00b02eef: cmp    ebx,r14d
0x00b02ef2: jne    0x140b02efc
0x00b02ef4: mov    edx,DWORD PTR [rip+0x1b48e1e]        # 0x14264bd18
0x00b02efa: jmp    0x140b02f0c
0x00b02efc: cmp    ebx,edi
0x00b02efe: mov    edx,DWORD PTR [rip+0x1b48e2c]        # 0x14264bd30
0x00b02f04: je     0x140b02f0c
0x00b02f06: mov    edx,DWORD PTR [rip+0x1b48e18]        # 0x14264bd24
0x00b02f0c: mov    rcx,r12
0x00b02f0f: call   0x140adaad0
0x00b02f14: inc    ebx
0x00b02f16: cmp    ebx,edi
0x00b02f18: jle    0x140b02e83
0x00b02f1e: inc    esi
0x00b02f20: cmp    esi,r15d
0x00b02f23: jle    0x140b02e70
0x00b02f29: lea    rdx,[rbp+0x1d8]
0x00b02f30: lea    rcx,[rip+0x1b98ce9]        # 0x14269bc20
0x00b02f37: call   0x140420e00
0x00b02f3c: lea    rdx,[rbp+0x2f0]
0x00b02f43: lea    rcx,[rip+0x1b98cd6]        # 0x14269bc20
0x00b02f4a: call   0x140420df0
0x00b02f4f: lea    r8,[rbp+0x2f0]
0x00b02f56: lea    rdx,[rbp+0x55]
0x00b02f5a: lea    rcx,[rbp+0x1d8]
0x00b02f61: call   0x14006ee20
0x00b02f66: xor    edx,edx
0x00b02f68: movzx  ecx,BYTE PTR [rax]
0x00b02f6b: call   0x1400657b0
0x00b02f70: test   al,al
0x00b02f72: je     0x140b03269
0x00b02f78: lea    rsi,[rip+0x1b47471]        # 0x14264a3f0
0x00b02f7f: nop
0x00b02f80: lea    r8d,[r14+0x2]
0x00b02f84: mov    edx,r13d
0x00b02f87: mov    rcx,rsi
0x00b02f8a: call   0x1400bb120
0x00b02f8f: lea    rcx,[rbp+0x1d8]
0x00b02f96: call   0x14006ee10
0x00b02f9b: mov    rcx,QWORD PTR [rax]
0x00b02f9e: movzx  edi,BYTE PTR [rcx+0x4c]
0x00b02fa2: lea    rcx,[rbp+0x1d8]
0x00b02fa9: call   0x14006ee10
0x00b02fae: mov    rcx,QWORD PTR [rax]
0x00b02fb1: movzx  ebx,WORD PTR [rcx+0x4a]
0x00b02fb5: lea    rcx,[rbp+0x1d8]
0x00b02fbc: call   0x14006ee10
0x00b02fc1: mov    rcx,QWORD PTR [rax]
0x00b02fc4: movzx  r9d,dil
0x00b02fc8: movzx  r8d,bx
0x00b02fcc: movzx  edx,WORD PTR [rcx+0x48]
0x00b02fd0: mov    rcx,rsi
0x00b02fd3: call   0x1400bb130
0x00b02fd8: lea    rcx,[rbp+0x1d8]
0x00b02fdf: call   0x14006ee10
0x00b02fe4: mov    rdx,QWORD PTR [rax]
0x00b02fe7: add    rdx,0x28
0x00b02feb: xor    r9d,r9d
0x00b02fee: xor    r8d,r8d
; reference; actual end-iterator call 0xb02f4a; owner 0xaf1190..0xb03c40; direct vector refs=True
0x00b02ef2: jne    0x140b02efc
0x00b02ef4: mov    edx,DWORD PTR [rip+0x1b48e1e]        # 0x14264bd18
0x00b02efa: jmp    0x140b02f0c
0x00b02efc: cmp    ebx,edi
0x00b02efe: mov    edx,DWORD PTR [rip+0x1b48e2c]        # 0x14264bd30
0x00b02f04: je     0x140b02f0c
0x00b02f06: mov    edx,DWORD PTR [rip+0x1b48e18]        # 0x14264bd24
0x00b02f0c: mov    rcx,r12
0x00b02f0f: call   0x140adaad0
0x00b02f14: inc    ebx
0x00b02f16: cmp    ebx,edi
0x00b02f18: jle    0x140b02e83
0x00b02f1e: inc    esi
0x00b02f20: cmp    esi,r15d
0x00b02f23: jle    0x140b02e70
0x00b02f29: lea    rdx,[rbp+0x1d8]
0x00b02f30: lea    rcx,[rip+0x1b98ce9]        # 0x14269bc20
0x00b02f37: call   0x140420e00
0x00b02f3c: lea    rdx,[rbp+0x2f0]
0x00b02f43: lea    rcx,[rip+0x1b98cd6]        # 0x14269bc20
0x00b02f4a: call   0x140420df0
0x00b02f4f: lea    r8,[rbp+0x2f0]
0x00b02f56: lea    rdx,[rbp+0x55]
0x00b02f5a: lea    rcx,[rbp+0x1d8]
0x00b02f61: call   0x14006ee20
0x00b02f66: xor    edx,edx
0x00b02f68: movzx  ecx,BYTE PTR [rax]
0x00b02f6b: call   0x1400657b0
0x00b02f70: test   al,al
0x00b02f72: je     0x140b03269
0x00b02f78: lea    rsi,[rip+0x1b47471]        # 0x14264a3f0
0x00b02f7f: nop
0x00b02f80: lea    r8d,[r14+0x2]
0x00b02f84: mov    edx,r13d
0x00b02f87: mov    rcx,rsi
0x00b02f8a: call   0x1400bb120
0x00b02f8f: lea    rcx,[rbp+0x1d8]
0x00b02f96: call   0x14006ee10
0x00b02f9b: mov    rcx,QWORD PTR [rax]
0x00b02f9e: movzx  edi,BYTE PTR [rcx+0x4c]
0x00b02fa2: lea    rcx,[rbp+0x1d8]
0x00b02fa9: call   0x14006ee10
0x00b02fae: mov    rcx,QWORD PTR [rax]
0x00b02fb1: movzx  ebx,WORD PTR [rcx+0x4a]
0x00b02fb5: lea    rcx,[rbp+0x1d8]
0x00b02fbc: call   0x14006ee10
0x00b02fc1: mov    rcx,QWORD PTR [rax]
0x00b02fc4: movzx  r9d,dil
0x00b02fc8: movzx  r8d,bx
0x00b02fcc: movzx  edx,WORD PTR [rcx+0x48]
0x00b02fd0: mov    rcx,rsi
0x00b02fd3: call   0x1400bb130
0x00b02fd8: lea    rcx,[rbp+0x1d8]
0x00b02fdf: call   0x14006ee10
0x00b02fe4: mov    rdx,QWORD PTR [rax]
0x00b02fe7: add    rdx,0x28
0x00b02feb: xor    r9d,r9d
0x00b02fee: xor    r8d,r8d
0x00b02ff1: mov    rcx,rsi
0x00b02ff4: call   0x140ad9960
0x00b02ff9: inc    r13d
; reference; actual size call 0xb03046; owner 0xaf1190..0xb03c40; direct vector refs=True
0x00b02fee: xor    r8d,r8d
0x00b02ff1: mov    rcx,rsi
0x00b02ff4: call   0x140ad9960
0x00b02ff9: inc    r13d
0x00b02ffc: lea    rcx,[rbp+0x1d8]
0x00b03003: call   0x14006ee00
0x00b03008: lea    r8,[rbp+0x2f0]
0x00b0300f: lea    rdx,[rbp+0x55]
0x00b03013: lea    rcx,[rbp+0x1d8]
0x00b0301a: call   0x14006ee20
0x00b0301f: xor    edx,edx
0x00b03021: movzx  ecx,BYTE PTR [rax]
0x00b03024: call   0x1400657b0
0x00b03029: test   al,al
0x00b0302b: jne    0x140b02f80
0x00b03031: jmp    0x140b03269
0x00b03036: mov    edi,DWORD PTR [rbp-0x70]
0x00b03039: add    edi,0xffffffdb
0x00b0303c: lea    esi,[rdi-0x3c]
0x00b0303f: lea    rcx,[rip+0x1b98bda]        # 0x14269bc20
0x00b03046: call   0x140420dd0
0x00b0304b: lea    r14d,[rax+0x4]
0x00b0304f: cmp    r14d,0x3
0x00b03053: jl     0x140b03116
0x00b03059: nop    DWORD PTR [rax+0x0]
0x00b03060: mov    ebx,esi
0x00b03062: cmp    esi,edi
0x00b03064: jg     0x140b0310a
0x00b0306a: nop    WORD PTR [rax+rax*1+0x0]
0x00b03070: mov    r8d,ebx
0x00b03073: mov    edx,r12d
0x00b03076: mov    rcx,r15
0x00b03079: call   0x1400bb120
0x00b0307e: xor    r8d,r8d
0x00b03081: xor    edx,edx
0x00b03083: mov    rcx,r15
0x00b03086: call   0x1400bb190
0x00b0308b: cmp    r12d,0x3
0x00b0308f: jne    0x140b030b4
0x00b03091: cmp    ebx,esi
0x00b03093: jne    0x140b0309d
0x00b03095: mov    edx,DWORD PTR [rip+0x1b48c79]        # 0x14264bd14
0x00b0309b: jmp    0x140b030f8
0x00b0309d: mov    rcx,r15
0x00b030a0: cmp    ebx,edi
0x00b030a2: jne    0x140b030ac
0x00b030a4: mov    edx,DWORD PTR [rip+0x1b48c82]        # 0x14264bd2c
0x00b030aa: jmp    0x140b030fb
0x00b030ac: mov    edx,DWORD PTR [rip+0x1b48c6e]        # 0x14264bd20
0x00b030b2: jmp    0x140b030fb
0x00b030b4: cmp    r12d,r14d
0x00b030b7: jne    0x140b030dc
0x00b030b9: cmp    ebx,esi
0x00b030bb: jne    0x140b030c5
0x00b030bd: mov    edx,DWORD PTR [rip+0x1b48c59]        # 0x14264bd1c
0x00b030c3: jmp    0x140b030f8
0x00b030c5: mov    rcx,r15
0x00b030c8: cmp    ebx,edi
0x00b030ca: jne    0x140b030d4
0x00b030cc: mov    edx,DWORD PTR [rip+0x1b48c62]        # 0x14264bd34
0x00b030d2: jmp    0x140b030fb
; reference; actual begin-iterator call 0xb03124; owner 0xaf1190..0xb03c40; direct vector refs=True
0x00b030d4: mov    edx,DWORD PTR [rip+0x1b48c4e]        # 0x14264bd28
0x00b030da: jmp    0x140b030fb
0x00b030dc: cmp    ebx,esi
0x00b030de: jne    0x140b030e8
0x00b030e0: mov    edx,DWORD PTR [rip+0x1b48c32]        # 0x14264bd18
0x00b030e6: jmp    0x140b030f8
0x00b030e8: cmp    ebx,edi
0x00b030ea: mov    edx,DWORD PTR [rip+0x1b48c40]        # 0x14264bd30
0x00b030f0: je     0x140b030f8
0x00b030f2: mov    edx,DWORD PTR [rip+0x1b48c2c]        # 0x14264bd24
0x00b030f8: mov    rcx,r15
0x00b030fb: call   0x140adaad0
0x00b03100: inc    ebx
0x00b03102: cmp    ebx,edi
0x00b03104: jle    0x140b03070
0x00b0310a: inc    r12d
0x00b0310d: cmp    r12d,r14d
0x00b03110: jle    0x140b03060
0x00b03116: lea    rdx,[rbp+0xe0]
0x00b0311d: lea    rcx,[rip+0x1b98afc]        # 0x14269bc20
0x00b03124: call   0x140420e00
0x00b03129: lea    rdx,[rbp+0x370]
0x00b03130: lea    rcx,[rip+0x1b98ae9]        # 0x14269bc20
0x00b03137: call   0x140420df0
0x00b0313c: lea    r8,[rbp+0x370]
0x00b03143: lea    rdx,[rbp+0x54]
0x00b03147: lea    rcx,[rbp+0xe0]
0x00b0314e: call   0x14006ee20
0x00b03153: xor    edx,edx
0x00b03155: movzx  ecx,BYTE PTR [rax]
0x00b03158: call   0x1400657b0
0x00b0315d: test   al,al
0x00b0315f: je     0x140b03269
0x00b03165: mov    r14d,0x4
0x00b0316b: nop    DWORD PTR [rax+rax*1+0x0]
0x00b03170: lea    r8d,[rsi+0x2]
0x00b03174: mov    edx,r14d
0x00b03177: mov    rcx,r15
0x00b0317a: call   0x1400bb120
0x00b0317f: cmp    DWORD PTR [rip+0xd99112],0x1        # 0x14189c298
0x00b03186: jne    0x140b031c7
0x00b03188: lea    rcx,[rbp+0xe0]
0x00b0318f: call   0x14006ee10
0x00b03194: mov    rcx,QWORD PTR [rax]
0x00b03197: cmp    DWORD PTR [rcx],0x2
0x00b0319a: jne    0x140b031c7
0x00b0319c: lea    rcx,[rbp+0xe0]
0x00b031a3: call   0x14006ee10
0x00b031a8: mov    rdx,QWORD PTR [rax]
0x00b031ab: mov    edx,DWORD PTR [rdx+0x4]
0x00b031ae: lea    rcx,[rip+0x18e1efb]        # 0x1423e50b0
0x00b031b5: call   0x140073b70
0x00b031ba: test   rax,rax
0x00b031bd: je     0x140b031c7
0x00b031bf: mov    rcx,rax
0x00b031c2: call   0x1407e4860
0x00b031c7: lea    rcx,[rbp+0xe0]
0x00b031ce: call   0x14006ee10
0x00b031d3: mov    rcx,QWORD PTR [rax]
0x00b031d6: movzx  edi,BYTE PTR [rcx+0x4c]
0x00b031da: lea    rcx,[rbp+0xe0]
; reference; actual end-iterator call 0xb03137; owner 0xaf1190..0xb03c40; direct vector refs=True
0x00b030de: jne    0x140b030e8
0x00b030e0: mov    edx,DWORD PTR [rip+0x1b48c32]        # 0x14264bd18
0x00b030e6: jmp    0x140b030f8
0x00b030e8: cmp    ebx,edi
0x00b030ea: mov    edx,DWORD PTR [rip+0x1b48c40]        # 0x14264bd30
0x00b030f0: je     0x140b030f8
0x00b030f2: mov    edx,DWORD PTR [rip+0x1b48c2c]        # 0x14264bd24
0x00b030f8: mov    rcx,r15
0x00b030fb: call   0x140adaad0
0x00b03100: inc    ebx
0x00b03102: cmp    ebx,edi
0x00b03104: jle    0x140b03070
0x00b0310a: inc    r12d
0x00b0310d: cmp    r12d,r14d
0x00b03110: jle    0x140b03060
0x00b03116: lea    rdx,[rbp+0xe0]
0x00b0311d: lea    rcx,[rip+0x1b98afc]        # 0x14269bc20
0x00b03124: call   0x140420e00
0x00b03129: lea    rdx,[rbp+0x370]
0x00b03130: lea    rcx,[rip+0x1b98ae9]        # 0x14269bc20
0x00b03137: call   0x140420df0
0x00b0313c: lea    r8,[rbp+0x370]
0x00b03143: lea    rdx,[rbp+0x54]
0x00b03147: lea    rcx,[rbp+0xe0]
0x00b0314e: call   0x14006ee20
0x00b03153: xor    edx,edx
0x00b03155: movzx  ecx,BYTE PTR [rax]
0x00b03158: call   0x1400657b0
0x00b0315d: test   al,al
0x00b0315f: je     0x140b03269
0x00b03165: mov    r14d,0x4
0x00b0316b: nop    DWORD PTR [rax+rax*1+0x0]
0x00b03170: lea    r8d,[rsi+0x2]
0x00b03174: mov    edx,r14d
0x00b03177: mov    rcx,r15
0x00b0317a: call   0x1400bb120
0x00b0317f: cmp    DWORD PTR [rip+0xd99112],0x1        # 0x14189c298
0x00b03186: jne    0x140b031c7
0x00b03188: lea    rcx,[rbp+0xe0]
0x00b0318f: call   0x14006ee10
0x00b03194: mov    rcx,QWORD PTR [rax]
0x00b03197: cmp    DWORD PTR [rcx],0x2
0x00b0319a: jne    0x140b031c7
0x00b0319c: lea    rcx,[rbp+0xe0]
0x00b031a3: call   0x14006ee10
0x00b031a8: mov    rdx,QWORD PTR [rax]
0x00b031ab: mov    edx,DWORD PTR [rdx+0x4]
0x00b031ae: lea    rcx,[rip+0x18e1efb]        # 0x1423e50b0
0x00b031b5: call   0x140073b70
0x00b031ba: test   rax,rax
0x00b031bd: je     0x140b031c7
0x00b031bf: mov    rcx,rax
0x00b031c2: call   0x1407e4860
0x00b031c7: lea    rcx,[rbp+0xe0]
0x00b031ce: call   0x14006ee10
0x00b031d3: mov    rcx,QWORD PTR [rax]
0x00b031d6: movzx  edi,BYTE PTR [rcx+0x4c]
0x00b031da: lea    rcx,[rbp+0xe0]
0x00b031e1: call   0x14006ee10
0x00b031e6: mov    rcx,QWORD PTR [rax]
0x00b031e9: movzx  ebx,WORD PTR [rcx+0x4a]
