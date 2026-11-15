; classic; PE:6aea11a5:0272d000; 4f833c9d92136e266e56202987dce40845a41990811413c7766fd526a08a0d8f; memorial-race-caste; complete unwind owner
0xaba4d0: mov    QWORD PTR [rsp+0x10],rsi
0xaba4d5: push   rdi
0xaba4d6: sub    rsp,0x20
0xaba4da: mov    QWORD PTR [rdx+0x10],0x0
0xaba4e2: mov    rdi,rdx
0xaba4e5: cmp    QWORD PTR [rdx+0x18],0xf
0xaba4ea: mov    rax,rdx
0xaba4ed: movsx  rsi,cx
0xaba4f1: jbe    0x140aba4f6
0xaba4f3: mov    rax,QWORD PTR [rdx]
0xaba4f6: mov    BYTE PTR [rax],0x0
0xaba4f9: mov    rcx,QWORD PTR [rip+0x1a4e8e8]        # 0x142508de8
0xaba500: mov    QWORD PTR [rsp+0x30],rbx
0xaba505: cmp    r9w,0xffff
0xaba50a: je     0x140aba669
0xaba510: test   r8b,r8b
0xaba513: je     0x140aba5aa
0xaba519: test   si,si
0xaba51c: js     0x140aba5a2
0xaba522: mov    rax,QWORD PTR [rip+0x1a4e8c7]        # 0x142508df0
0xaba529: mov    rbx,rsi
0xaba52c: sub    rax,rcx
0xaba52f: sar    rax,0x3
0xaba533: cmp    rsi,rax
0xaba536: jae    0x140aba5a2
0xaba538: test   r9w,r9w
0xaba53c: js     0x140aba671
0xaba542: mov    rax,QWORD PTR [rcx+rsi*8]
0xaba546: movsx  r8,r9w
0xaba54a: mov    rdx,QWORD PTR [rax+0x178]
0xaba551: mov    rax,QWORD PTR [rax+0x180]
0xaba558: sub    rax,rdx
0xaba55b: sar    rax,0x3
0xaba55f: cmp    r8,rax
0xaba562: jae    0x140aba671
0xaba568: mov    rdx,QWORD PTR [rdx+r8*8]
0xaba56c: add    rdx,0x40
0xaba570: cmp    rdi,rdx
0xaba573: je     0x140aba592
0xaba575: cmp    QWORD PTR [rdx+0x18],0xf
0xaba57a: mov    r8,QWORD PTR [rdx+0x10]
0xaba57e: jbe    0x140aba583
0xaba580: mov    rdx,QWORD PTR [rdx]
0xaba583: mov    rcx,rdi
0xaba586: call   0x140070e90
0xaba58b: mov    rcx,QWORD PTR [rip+0x1a4e856]        # 0x142508de8
0xaba592: cmp    QWORD PTR [rdi+0x10],0x0
0xaba597: ja     0x140aba659
0xaba59d: jmp    0x140aba671
0xaba5a2: mov    rbx,rsi
0xaba5a5: jmp    0x140aba671
0xaba5aa: test   si,si
0xaba5ad: js     0x140aba61b
0xaba5af: mov    rax,QWORD PTR [rip+0x1a4e83a]        # 0x142508df0
0xaba5b6: sub    rax,rcx
0xaba5b9: sar    rax,0x3
0xaba5bd: cmp    rsi,rax
0xaba5c0: jae    0x140aba61b
0xaba5c2: test   r9w,r9w
0xaba5c6: js     0x140aba61b
0xaba5c8: mov    rax,QWORD PTR [rcx+rsi*8]
0xaba5cc: movsx  r8,r9w
0xaba5d0: mov    rdx,QWORD PTR [rax+0x178]
0xaba5d7: mov    rax,QWORD PTR [rax+0x180]
0xaba5de: sub    rax,rdx
0xaba5e1: sar    rax,0x3
0xaba5e5: cmp    r8,rax
0xaba5e8: jae    0x140aba61b
0xaba5ea: mov    rdx,QWORD PTR [rdx+r8*8]
0xaba5ee: add    rdx,0x20
0xaba5f2: cmp    rdi,rdx
0xaba5f5: je     0x140aba614
0xaba5f7: cmp    QWORD PTR [rdx+0x18],0xf
0xaba5fc: mov    r8,QWORD PTR [rdx+0x10]
0xaba600: jbe    0x140aba605
0xaba602: mov    rdx,QWORD PTR [rdx]
0xaba605: mov    rcx,rdi
0xaba608: call   0x140070e90
0xaba60d: mov    rcx,QWORD PTR [rip+0x1a4e7d4]        # 0x142508de8
0xaba614: cmp    QWORD PTR [rdi+0x10],0x0
0xaba619: ja     0x140aba659
0xaba61b: mov    rbx,rsi
0xaba61e: test   si,si
0xaba621: js     0x140aba659
0xaba623: mov    rax,QWORD PTR [rip+0x1a4e7c6]        # 0x142508df0
0xaba62a: sub    rax,rcx
0xaba62d: sar    rax,0x3
0xaba631: cmp    rbx,rax
0xaba634: jae    0x140aba659
0xaba636: mov    rdx,QWORD PTR [rcx+rbx*8]
0xaba63a: add    rdx,0x20
0xaba63e: cmp    rdi,rdx
0xaba641: je     0x140aba659
0xaba643: cmp    QWORD PTR [rdx+0x18],0xf
0xaba648: mov    r8,QWORD PTR [rdx+0x10]
0xaba64c: jbe    0x140aba651
0xaba64e: mov    rdx,QWORD PTR [rdx]
0xaba651: mov    rcx,rdi
0xaba654: call   0x140070e90
0xaba659: mov    rbx,QWORD PTR [rsp+0x30]
0xaba65e: mov    rsi,QWORD PTR [rsp+0x38]
0xaba663: add    rsp,0x20
0xaba667: pop    rdi
0xaba668: ret
0xaba669: mov    rbx,rsi
0xaba66c: test   r8b,r8b
0xaba66f: je     0x140aba61e
0xaba671: test   si,si
0xaba674: js     0x140aba659
0xaba676: mov    rax,QWORD PTR [rip+0x1a4e773]        # 0x142508df0
0xaba67d: sub    rax,rcx
0xaba680: sar    rax,0x3
0xaba684: cmp    rbx,rax
0xaba687: jae    0x140aba659
0xaba689: mov    rdx,QWORD PTR [rcx+rbx*8]
0xaba68d: add    rdx,0x40
0xaba691: jmp    0x140aba63e
