# steam PE:6a70a6d9:02711000; craft-input; RVA 0x27d2b0..0x27e2fa
0x0027d2b0: mov    QWORD PTR [rsp+0x8],rbx
0x0027d2b5: mov    QWORD PTR [rsp+0x18],rsi
0x0027d2ba: mov    QWORD PTR [rsp+0x20],rdi
0x0027d2bf: mov    QWORD PTR [rsp+0x10],rdx
0x0027d2c4: push   rbp
0x0027d2c5: push   r12
0x0027d2c7: push   r13
0x0027d2c9: push   r14
0x0027d2cb: push   r15
0x0027d2cd: lea    rbp,[rsp-0x27]
0x0027d2d2: sub    rsp,0x90
0x0027d2d9: mov    r14d,r9d
0x0027d2dc: mov    r15d,r8d
0x0027d2df: mov    r8,rdx
0x0027d2e2: mov    rsi,rcx
0x0027d2e5: mov    eax,DWORD PTR [rbp+0x7f]
0x0027d2e8: add    eax,DWORD PTR [rbp+0x77]
0x0027d2eb: cdq
0x0027d2ec: sub    eax,edx
0x0027d2ee: sar    eax,1
0x0027d2f0: lea    ebx,[rax-0x32]
0x0027d2f3: mov    DWORD PTR [rbp-0x1],ebx
0x0027d2f6: lea    r13d,[rax+0x32]
0x0027d2fa: mov    edx,DWORD PTR [rip+0x2150488]        # 0x1423cd788
0x0027d300: add    edx,0xfffffffb
0x0027d303: mov    DWORD PTR [rbp+0xf],edx
0x0027d306: movzx  r10d,BYTE PTR [rip+0x21132c7]        # 0x1423905d5
0x0027d30e: test   r10b,r10b
0x0027d311: je     0x14027d31c
0x0027d313: cmp    BYTE PTR [rip+0x21132b3],0x0        # 0x1423905cd
0x0027d31a: jne    0x14027d354
0x0027d31c: mov    rcx,QWORD PTR [r8]
0x0027d31f: mov    rax,QWORD PTR [rcx+0x8]
0x0027d323: cmp    BYTE PTR [rax+0x19],0x0
0x0027d327: jne    0x14027d348
0x0027d329: nop    DWORD PTR [rax+0x0]
0x0027d330: cmp    DWORD PTR [rax+0x1c],0x5
0x0027d334: jge    0x14027d33c
0x0027d336: mov    rax,QWORD PTR [rax+0x10]
0x0027d33a: jmp    0x14027d342
0x0027d33c: mov    rcx,rax
0x0027d33f: mov    rax,QWORD PTR [rax]
0x0027d342: cmp    BYTE PTR [rax+0x19],0x0
0x0027d346: je     0x14027d330
0x0027d348: cmp    BYTE PTR [rcx+0x19],0x0
0x0027d34c: jne    0x14027d397
0x0027d34e: cmp    DWORD PTR [rcx+0x1c],0x5
0x0027d352: jg     0x14027d397
0x0027d354: mov    BYTE PTR [rip+0x2113272],0x0        # 0x1423905cd
0x0027d35b: mov    rcx,r8
0x0027d35e: call   0x1400e1170
0x0027d363: mov    ecx,0x232a ; inline_fragment="*#"
0x0027d368: call   0x1407e43c0
0x0027d36d: mov    ecx,DWORD PTR [rsi+0x4]
0x0027d370: sub    ecx,0x2
0x0027d373: je     0x14027d383
0x0027d375: sub    ecx,0x1
0x0027d378: je     0x14027d383
0x0027d37a: cmp    ecx,0x1
0x0027d37d: jne    0x14027dfbe
0x0027d383: mov    DWORD PTR [rsi+0x4],0x1
0x0027d38a: mov    rcx,rsi
0x0027d38d: call   0x1402810a0
0x0027d392: jmp    0x14027d5be
0x0027d397: mov    r11,QWORD PTR [rsi+0xb8]
0x0027d39e: sub    r11,QWORD PTR [rsi+0xb0]
0x0027d3a5: sar    r11,0x3
0x0027d3a9: mov    QWORD PTR [rbp+0x7],r11
0x0027d3ad: lea    eax,[rbx+0x1]
0x0027d3b0: mov    DWORD PTR [rbp+0x13],eax
0x0027d3b3: lea    r9d,[r13-0x1]
0x0027d3b7: lea    ecx,[rdx-0x1b]
0x0027d3ba: mov    eax,0x55555556 ; inline_fragment="VUUU"
0x0027d3bf: imul   ecx
0x0027d3c1: mov    r12d,edx
0x0027d3c4: shr    r12d,0x1f
0x0027d3c8: add    r12d,edx
0x0027d3cb: lea    ecx,[r9-0x2]
0x0027d3cf: cmp    r11d,r12d
0x0027d3d2: cmovle ecx,r9d
0x0027d3d6: mov    DWORD PTR [rbp+0x77],ecx
0x0027d3d9: xor    edi,edi
0x0027d3db: cmp    DWORD PTR [rsi+0x4],0x1
0x0027d3df: je     0x14027d4c1
0x0027d3e5: cmp    r11d,r12d
0x0027d3e8: jle    0x14027d4c1
0x0027d3ee: test   r10b,r10b
0x0027d3f1: je     0x14027d537
0x0027d3f7: cmp    r15d,ebx
0x0027d3fa: jl     0x14027d537
0x0027d400: cmp    r15d,r13d
0x0027d403: jg     0x14027d537
0x0027d409: cmp    r14d,0x14
0x0027d40d: jl     0x14027d537
0x0027d413: cmp    r14d,DWORD PTR [rbp+0xf]
0x0027d417: jg     0x14027d537
0x0027d41d: lea    ecx,[r12*2+0x19]
0x0027d425: add    ecx,r12d
0x0027d428: mov    QWORD PTR [rbp-0x9],rdi
0x0027d42c: mov    eax,DWORD PTR [rsi+0x8c]
0x0027d432: mov    DWORD PTR [rbp-0x21],eax
0x0027d435: mov    DWORD PTR [rbp-0x1d],edi
0x0027d438: lea    eax,[r11-0x1]
0x0027d43c: mov    DWORD PTR [rbp-0x19],eax
0x0027d43f: mov    DWORD PTR [rbp-0x11],0x1c
0x0027d446: mov    DWORD PTR [rbp-0xd],ecx
0x0027d449: mov    DWORD PTR [rbp-0x15],r12d
0x0027d44d: lea    rcx,[rbp-0x21]
0x0027d451: call   0x1400bb3b0
0x0027d456: lea    r9,[rsi+0x90]
0x0027d45d: lea    r8,[rsi+0x8c]
0x0027d464: mov    rbx,QWORD PTR [rbp+0x5f]
0x0027d468: mov    rdx,rbx
0x0027d46b: lea    rcx,[rbp-0x21]
0x0027d46f: call   0x14140f2b0
0x0027d474: test   al,al
0x0027d476: jne    0x14027d5be
0x0027d47c: mov    r11,QWORD PTR [rbp+0x7]
0x0027d480: lea    eax,[r11-0x1]
0x0027d484: lea    r8,[rsi+0x8c]
0x0027d48b: mov    DWORD PTR [rsp+0x30],0x1
0x0027d493: mov    DWORD PTR [rsp+0x28],r12d
0x0027d498: mov    DWORD PTR [rsp+0x20],eax
0x0027d49c: xor    r9d,r9d
0x0027d49f: mov    rdx,rbx
0x0027d4a2: call   0x140a9cb20
0x0027d4a7: mov    r8,QWORD PTR [rbp+0x5f]
0x0027d4ab: lea    r9d,[r13-0x1]
0x0027d4af: movzx  r10d,BYTE PTR [rip+0x211311e]        # 0x1423905d5
0x0027d4b7: mov    r11,QWORD PTR [rbp+0x7]
0x0027d4bb: mov    ebx,DWORD PTR [rbp-0x1]
0x0027d4be: mov    ecx,DWORD PTR [rbp+0x77]
0x0027d4c1: cmp    BYTE PTR [rsi+0x90],dil
0x0027d4c8: je     0x14027d5ea
0x0027d4ce: cmp    DWORD PTR [rsi+0x4],0x1
0x0027d4d2: je     0x14027d5ea
0x0027d4d8: test   r10b,r10b
0x0027d4db: je     0x14027d5e1
0x0027d4e1: cmp    BYTE PTR [rip+0x21130e6],dil        # 0x1423905ce
0x0027d4e8: je     0x14027d5e1
0x0027d4ee: mov    QWORD PTR [rbp-0x9],rdi
0x0027d4f2: mov    eax,DWORD PTR [rsi+0x8c]
0x0027d4f8: mov    DWORD PTR [rbp-0x21],eax
0x0027d4fb: mov    DWORD PTR [rbp-0x1d],edi
0x0027d4fe: lea    eax,[r11-0x1]
0x0027d502: mov    DWORD PTR [rbp-0x19],eax
0x0027d505: mov    DWORD PTR [rbp-0x11],0x1c
0x0027d50c: lea    eax,[r12*2+0x19]
0x0027d514: add    eax,r12d
0x0027d517: mov    DWORD PTR [rbp-0xd],eax
0x0027d51a: mov    DWORD PTR [rbp-0x15],r12d
0x0027d51e: lea    rcx,[rbp-0x21]
0x0027d522: call   0x1400bb3b0
0x0027d527: mov    edx,DWORD PTR [rbp-0x11]
0x0027d52a: cmp    r14d,edx
0x0027d52d: jg     0x14027d540
0x0027d52f: mov    eax,DWORD PTR [rbp-0x1d]
0x0027d532: mov    DWORD PTR [rbp-0x21],eax
0x0027d535: jmp    0x14027d5a3
0x0027d537: mov    rbx,QWORD PTR [rbp+0x5f]
0x0027d53b: jmp    0x14027d480
0x0027d540: mov    ecx,DWORD PTR [rbp-0xd]
0x0027d543: cmp    r14d,ecx
0x0027d546: jl     0x14027d55c
0x0027d548: mov    eax,DWORD PTR [rbp-0x19]
0x0027d54b: sub    eax,DWORD PTR [rbp-0x15]
0x0027d54e: inc    eax
0x0027d550: mov    DWORD PTR [rbp-0x21],eax
0x0027d553: mov    ecx,DWORD PTR [rbp-0x1d]
0x0027d556: cmp    eax,ecx
0x0027d558: jge    0x14027d5a3
0x0027d55a: jmp    0x14027d5a0
0x0027d55c: cmp    ecx,edx
0x0027d55e: jle    0x14027d5a3
0x0027d560: mov    r9d,DWORD PTR [rbp-0x19]
0x0027d564: mov    eax,r9d
0x0027d567: mov    r10d,DWORD PTR [rbp-0x1d]
0x0027d56b: sub    eax,r10d
0x0027d56e: sub    eax,DWORD PTR [rbp-0x15]
0x0027d571: add    eax,0x1
0x0027d574: cmovns edi,eax
0x0027d577: sub    r14d,edx
0x0027d57a: imul   edi,r14d
0x0027d57e: sub    ecx,edx
0x0027d580: inc    ecx
0x0027d582: mov    eax,edi
0x0027d584: cdq
0x0027d585: idiv   ecx
0x0027d587: lea    ecx,[rax+r10*1]
0x0027d58b: sub    r9d,DWORD PTR [rbp-0x15]
0x0027d58f: inc    r9d
0x0027d592: cmp    ecx,r9d
0x0027d595: cmovg  ecx,r9d
0x0027d599: cmp    ecx,r10d
0x0027d59c: cmovl  ecx,r10d
0x0027d5a0: mov    DWORD PTR [rbp-0x21],ecx
0x0027d5a3: lea    rcx,[rbp-0x21]
0x0027d5a7: call   0x1400bb3b0
0x0027d5ac: mov    eax,DWORD PTR [rbp-0x21]
0x0027d5af: mov    DWORD PTR [rsi+0x8c],eax
0x0027d5b5: mov    WORD PTR [rip+0x211300e],0x0        # 0x1423905cc
0x0027d5be: xor    al,al
0x0027d5c0: lea    r11,[rsp+0x90]
0x0027d5c8: mov    rbx,QWORD PTR [r11+0x30]
0x0027d5cc: mov    rsi,QWORD PTR [r11+0x40]
0x0027d5d0: mov    rdi,QWORD PTR [r11+0x48]
0x0027d5d4: mov    rsp,r11
0x0027d5d7: pop    r15
0x0027d5d9: pop    r14
0x0027d5db: pop    r13
0x0027d5dd: pop    r12
0x0027d5df: pop    rbp
0x0027d5e0: ret
0x0027d5e1: mov    BYTE PTR [rsi+0x90],dil
0x0027d5e8: jmp    0x14027d5b5
0x0027d5ea: cmp    r15d,ebx
0x0027d5ed: jl     0x14027d600
0x0027d5ef: cmp    r15d,r13d
0x0027d5f2: jg     0x14027d600
0x0027d5f4: cmp    r14d,0x14
0x0027d5f8: jl     0x14027d600
0x0027d5fa: cmp    r14d,DWORD PTR [rbp+0xf]
0x0027d5fe: jle    0x14027d61f
0x0027d600: movzx  edx,BYTE PTR [rip+0x2112fc5]        # 0x1423905cc
0x0027d607: test   r10b,r10b
0x0027d60a: je     0x14027d626
0x0027d60c: test   dl,dl
0x0027d60e: je     0x14027d626
0x0027d610: mov    BYTE PTR [rip+0x2112fb5],dil        # 0x1423905cc
0x0027d617: mov    BYTE PTR [rsi],dil
0x0027d61a: jmp    0x14027dfc1
0x0027d61f: movzx  edx,BYTE PTR [rip+0x2112fa6]        # 0x1423905cc
0x0027d626: lea    eax,[r13-0xc]
0x0027d62a: cmp    r15d,eax
0x0027d62d: jl     0x14027d65f
0x0027d62f: cmp    r15d,r9d
0x0027d632: jg     0x14027d65f
0x0027d634: lea    eax,[r14-0x15]
0x0027d638: cmp    eax,0x2
0x0027d63b: ja     0x14027d65f
0x0027d63d: test   r10b,r10b
0x0027d640: je     0x14027d65f
0x0027d642: test   dl,dl
0x0027d644: je     0x14027d65f
0x0027d646: mov    ecx,0x232a ; inline_fragment="*#"
0x0027d64b: call   0x1407e43c0
0x0027d650: mov    BYTE PTR [rip+0x2112f75],dil        # 0x1423905cc
0x0027d657: mov    BYTE PTR [rsi],dil
0x0027d65a: jmp    0x14027dfc1
0x0027d65f: cmp    DWORD PTR [rsi+0x4],0x1
0x0027d663: je     0x14027dabe
0x0027d669: mov    rax,QWORD PTR [rsi+0xa0]
0x0027d670: sub    rax,QWORD PTR [rsi+0x98]
0x0027d677: sar    rax,0x3
0x0027d67b: test   rax,rax
0x0027d67e: je     0x14027d6c9
0x0027d680: mov    eax,0x2
0x0027d685: cmp    r11d,r12d
0x0027d688: cmovle eax,edi
0x0027d68b: lea    r9d,[rbx+0x1]
0x0027d68f: cmp    r15d,r9d
0x0027d692: jl     0x14027d6c9
0x0027d694: add    eax,ecx
0x0027d696: cmp    r15d,eax
0x0027d699: jg     0x14027d6c9
0x0027d69b: lea    eax,[r14-0x18]
0x0027d69f: cmp    eax,0x2
0x0027d6a2: ja     0x14027d6c9
0x0027d6a4: test   r10b,r10b
0x0027d6a7: je     0x14027d6c9
0x0027d6a9: test   dl,dl
0x0027d6ab: je     0x14027d6c9
0x0027d6ad: mov    BYTE PTR [rip+0x2112f18],dil        # 0x1423905cc
0x0027d6b4: cmp    BYTE PTR [rsi+0xe8],dil
0x0027d6bb: sete   al
0x0027d6be: mov    BYTE PTR [rsi+0xe8],al
0x0027d6c4: jmp    0x14027d5be
0x0027d6c9: cmp    r11d,r12d
0x0027d6cc: jle    0x14027d7ed
0x0027d6d2: lea    eax,[rcx+0x1]
0x0027d6d5: lea    ecx,[r12*2+0x19]
0x0027d6dd: add    ecx,r12d
0x0027d6e0: cmp    r15d,eax
0x0027d6e3: jl     0x14027d7ed
0x0027d6e9: inc    eax
0x0027d6eb: cmp    r15d,eax
0x0027d6ee: jg     0x14027d7ed
0x0027d6f4: cmp    r14d,0x1b
0x0027d6f8: jl     0x14027d7ed
0x0027d6fe: lea    eax,[rcx+0x1]
0x0027d701: cmp    r14d,eax
0x0027d704: jg     0x14027d7ed
0x0027d70a: test   r10b,r10b
0x0027d70d: je     0x14027d7ed
0x0027d713: test   dl,dl
0x0027d715: je     0x14027d7ed
0x0027d71b: mov    BYTE PTR [rip+0x2112eaa],dil        # 0x1423905cc
0x0027d722: mov    QWORD PTR [rbp-0x9],rdi
0x0027d726: mov    eax,DWORD PTR [rsi+0x8c]
0x0027d72c: mov    DWORD PTR [rbp-0x21],eax
0x0027d72f: mov    DWORD PTR [rbp-0x1d],edi
0x0027d732: lea    eax,[r11-0x1]
0x0027d736: mov    DWORD PTR [rbp-0x19],eax
0x0027d739: mov    DWORD PTR [rbp-0x11],0x1c
0x0027d740: mov    DWORD PTR [rbp-0xd],ecx
0x0027d743: mov    DWORD PTR [rbp-0x15],r12d
0x0027d747: lea    rcx,[rbp-0x21]
0x0027d74b: call   0x1400bb3b0
0x0027d750: mov    BYTE PTR [rsi+0x90],dil
0x0027d757: mov    eax,DWORD PTR [rbp-0x11]
0x0027d75a: dec    eax
0x0027d75c: cmp    r14d,eax
0x0027d75f: jne    0x14027d778
0x0027d761: mov    ecx,DWORD PTR [rbp-0x21]
0x0027d764: dec    ecx
0x0027d766: cmp    ecx,DWORD PTR [rbp-0x1d]
0x0027d769: cmovl  ecx,DWORD PTR [rbp-0x1d]
0x0027d76d: mov    DWORD PTR [rsi+0x8c],ecx
0x0027d773: jmp    0x14027d5be
0x0027d778: mov    eax,DWORD PTR [rbp-0xd]
0x0027d77b: inc    eax
0x0027d77d: cmp    r14d,eax
0x0027d780: jne    0x14027d79f
0x0027d782: mov    ecx,DWORD PTR [rbp-0x21]
0x0027d785: inc    ecx
0x0027d787: mov    eax,DWORD PTR [rbp-0x19]
0x0027d78a: sub    eax,DWORD PTR [rbp-0x15]
0x0027d78d: inc    eax
0x0027d78f: cmp    ecx,eax
0x0027d791: cmovg  ecx,eax
0x0027d794: mov    DWORD PTR [rsi+0x8c],ecx
0x0027d79a: jmp    0x14027d5be
0x0027d79f: cmp    r14d,DWORD PTR [rbp-0x9]
0x0027d7a3: jl     0x14027d7d5
0x0027d7a5: cmp    r14d,DWORD PTR [rbp-0x5]
0x0027d7a9: jg     0x14027d7b7
0x0027d7ab: mov    BYTE PTR [rsi+0x90],0x1
0x0027d7b2: jmp    0x14027d5be
0x0027d7b7: mov    edx,DWORD PTR [rbp-0x21]
0x0027d7ba: add    edx,DWORD PTR [rbp-0x15]
0x0027d7bd: mov    ecx,DWORD PTR [rbp-0x19]
0x0027d7c0: sub    ecx,DWORD PTR [rbp-0x15]
0x0027d7c3: inc    ecx
0x0027d7c5: cmp    edx,ecx
0x0027d7c7: cmovg  edx,ecx
0x0027d7ca: mov    DWORD PTR [rsi+0x8c],edx
0x0027d7d0: jmp    0x14027d5be
0x0027d7d5: mov    ecx,DWORD PTR [rbp-0x21]
0x0027d7d8: sub    ecx,DWORD PTR [rbp-0x15]
0x0027d7db: cmp    ecx,DWORD PTR [rbp-0x1d]
0x0027d7de: cmovl  ecx,DWORD PTR [rbp-0x1d]
0x0027d7e2: mov    DWORD PTR [rsi+0x8c],ecx
0x0027d7e8: jmp    0x14027d5be
0x0027d7ed: mov    r9d,0x1b
0x0027d7f3: mov    DWORD PTR [rbp+0x7f],r9d
0x0027d7f7: mov    eax,DWORD PTR [rsi+0x8c]
0x0027d7fd: mov    ecx,r11d
0x0027d800: sub    ecx,r12d
0x0027d803: cmp    eax,ecx
0x0027d805: cmovle ecx,eax
0x0027d808: mov    r13d,edi
0x0027d80b: test   ecx,ecx
0x0027d80d: cmovns r13d,ecx
0x0027d811: lea    eax,[r12+r13*1]
0x0027d815: mov    DWORD PTR [rbp+0x17],eax
0x0027d818: cmp    r13d,eax
0x0027d81b: jge    0x14027dabe
0x0027d821: mov    eax,0x52 ; inline_fragment="R"
0x0027d826: sub    eax,r13d
0x0027d829: mov    DWORD PTR [rbp+0x1b],eax
0x0027d82c: nop    DWORD PTR [rax+0x0]
0x0027d830: cmp    r13d,r11d
0x0027d833: jge    0x14027dabb
0x0027d839: xor    bl,bl
0x0027d83b: lea    edx,[rax+r13*1]
0x0027d83f: mov    rcx,QWORD PTR [r8]
0x0027d842: mov    rax,QWORD PTR [rcx+0x8]
0x0027d846: cmp    BYTE PTR [rax+0x19],bl
0x0027d849: jne    0x14027d866
0x0027d84b: nop    DWORD PTR [rax+rax*1+0x0]
0x0027d850: cmp    DWORD PTR [rax+0x1c],edx
0x0027d853: jge    0x14027d85b
0x0027d855: mov    rax,QWORD PTR [rax+0x10]
0x0027d859: jmp    0x14027d861
0x0027d85b: mov    rcx,rax
0x0027d85e: mov    rax,QWORD PTR [rax]
0x0027d861: cmp    BYTE PTR [rax+0x19],bl
0x0027d864: je     0x14027d850
0x0027d866: mov    r12d,0x1
0x0027d86c: cmp    BYTE PTR [rcx+0x19],bl
0x0027d86f: jne    0x14027d87b
0x0027d871: movzx  ebx,bl
0x0027d874: cmp    edx,DWORD PTR [rcx+0x1c]
0x0027d877: cmovge ebx,r12d
0x0027d87b: cmp    r15d,DWORD PTR [rbp+0x13]
0x0027d87f: jl     0x14027d89b
0x0027d881: cmp    r15d,DWORD PTR [rbp+0x77]
0x0027d885: jge    0x14027d89b
0x0027d887: cmp    r14d,r9d
0x0027d88a: jl     0x14027d89b
0x0027d88c: lea    eax,[r9+0x3]
0x0027d890: cmp    r14d,eax
0x0027d893: jge    0x14027d89b
0x0027d895: test   bl,bl
0x0027d897: je     0x14027d8bb
0x0027d899: jmp    0x14027d89f
0x0027d89b: test   bl,bl
0x0027d89d: je     0x14027d8cd
0x0027d89f: mov    rcx,r8
0x0027d8a2: call   0x1400e1170
0x0027d8a7: mov    r8,QWORD PTR [rbp+0x5f]
0x0027d8ab: mov    r9d,DWORD PTR [rbp+0x7f]
0x0027d8af: movzx  r10d,BYTE PTR [rip+0x2112d1e]        # 0x1423905d5
0x0027d8b7: mov    r11,QWORD PTR [rbp+0x7]
0x0027d8bb: test   r10b,r10b
0x0027d8be: je     0x14027d8c9
0x0027d8c0: cmp    BYTE PTR [rip+0x2112d05],dil        # 0x1423905cc
0x0027d8c7: jne    0x14027d8ea
0x0027d8c9: test   bl,bl
0x0027d8cb: jne    0x14027d8ea
0x0027d8cd: add    r9d,0x3
0x0027d8d1: mov    DWORD PTR [rbp+0x7f],r9d
0x0027d8d5: inc    r13d
0x0027d8d8: cmp    r13d,DWORD PTR [rbp+0x17]
0x0027d8dc: jge    0x14027dabb
0x0027d8e2: mov    eax,DWORD PTR [rbp+0x1b]
0x0027d8e5: jmp    0x14027d830
0x0027d8ea: mov    BYTE PTR [rip+0x2112cdb],dil        # 0x1423905cc
0x0027d8f1: mov    rcx,r8
0x0027d8f4: call   0x1400e1170
0x0027d8f9: movsxd rcx,r13d
0x0027d8fc: mov    rax,QWORD PTR [rsi+0xb0]
0x0027d903: mov    r14,QWORD PTR [rax+rcx*8]
0x0027d907: mov    ecx,DWORD PTR [rsi+0x4]
0x0027d90a: test   ecx,ecx
0x0027d90c: je     0x14027d97d
0x0027d90e: sub    ecx,0x2
0x0027d911: je     0x14027d960
0x0027d913: sub    ecx,0x1
0x0027d916: je     0x14027d93f
0x0027d918: cmp    ecx,0x1
0x0027d91b: jne    0x14027dfd7
0x0027d921: mov    rax,QWORD PTR [r14+0x78]
0x0027d925: mov    ecx,DWORD PTR [rax+0x4]
0x0027d928: mov    DWORD PTR [rsi+0x88],ecx
0x0027d92e: mov    DWORD PTR [rsi+0x4],r12d
0x0027d932: mov    rcx,rsi
0x0027d935: call   0x1402810a0
0x0027d93a: jmp    0x14027d5be
0x0027d93f: mov    rax,QWORD PTR [r14+0x68]
0x0027d943: mov    ecx,DWORD PTR [rax+0xe0]
0x0027d949: mov    DWORD PTR [rsi+0x80],ecx
0x0027d94f: mov    DWORD PTR [rsi+0x4],r12d
0x0027d953: mov    rcx,rsi
0x0027d956: call   0x1402810a0
0x0027d95b: jmp    0x14027d5be
0x0027d960: movzx  eax,WORD PTR [r14+0x70]
0x0027d965: mov    WORD PTR [rsi+0x84],ax
0x0027d96c: mov    DWORD PTR [rsi+0x4],r12d
0x0027d970: mov    rcx,rsi
0x0027d973: call   0x1402810a0
0x0027d978: jmp    0x14027d5be
0x0027d97d: mov    rdx,QWORD PTR [rip+0x216778c]        # 0x1423e5110
0x0027d984: lea    r8,[rdx+0x1274]
0x0027d98b: mov    edx,DWORD PTR [rdx+0xc30]
0x0027d991: lea    rcx,[rip+0x227c320]        # 0x1424f9cb8
0x0027d998: call   0x140b530b0
0x0027d99d: mov    rbx,rax
0x0027d9a0: test   rax,rax
0x0027d9a3: je     0x14027dab3
0x0027d9a9: mov    rax,QWORD PTR [rax+0x130]
0x0027d9b0: test   rax,rax
0x0027d9b3: jne    0x14027d9fd
0x0027d9b5: mov    ecx,0x68 ; inline_fragment="h"
0x0027d9ba: call   0x141539690
0x0027d9bf: mov    QWORD PTR [rbp+0x7],rax
0x0027d9c3: mov    QWORD PTR [rax],rdi
0x0027d9c6: mov    QWORD PTR [rax+0x8],rdi
0x0027d9ca: mov    QWORD PTR [rax+0x10],rdi
0x0027d9ce: mov    QWORD PTR [rax+0x18],rdi
0x0027d9d2: mov    QWORD PTR [rax+0x20],rdi
0x0027d9d6: mov    QWORD PTR [rax+0x28],rdi
0x0027d9da: mov    QWORD PTR [rax+0x30],rdi
0x0027d9de: mov    QWORD PTR [rax+0x38],rdi
0x0027d9e2: mov    QWORD PTR [rax+0x40],rdi
0x0027d9e6: mov    QWORD PTR [rax+0x48],rdi
0x0027d9ea: mov    QWORD PTR [rax+0x50],rdi
0x0027d9ee: mov    QWORD PTR [rax+0x58],rdi
0x0027d9f2: mov    QWORD PTR [rax+0x60],rdi
0x0027d9f6: mov    QWORD PTR [rbx+0x130],rax
0x0027d9fd: cmp    QWORD PTR [rax+0x58],rdi
0x0027da01: jne    0x14027da50
0x0027da03: mov    ecx,0x60 ; inline_fragment="`"
0x0027da08: call   0x141539690
0x0027da0d: mov    rcx,rax
0x0027da10: mov    QWORD PTR [rbp+0x7],rax
0x0027da14: mov    QWORD PTR [rax],rdi
0x0027da17: mov    QWORD PTR [rax+0x8],rdi
0x0027da1b: mov    QWORD PTR [rax+0x10],rdi
0x0027da1f: mov    QWORD PTR [rax+0x18],rdi
0x0027da23: mov    QWORD PTR [rax+0x20],rdi
0x0027da27: mov    QWORD PTR [rax+0x28],rdi
0x0027da2b: mov    QWORD PTR [rax+0x38],rdi
0x0027da2f: mov    QWORD PTR [rax+0x40],rdi
0x0027da33: mov    QWORD PTR [rax+0x48],rdi
0x0027da37: mov    DWORD PTR [rax+0x30],0xffffffff
0x0027da3e: mov    DWORD PTR [rax+0x50],edi
0x0027da41: mov    QWORD PTR [rax+0x58],rdi
0x0027da45: mov    rax,QWORD PTR [rbx+0x130]
0x0027da4c: mov    QWORD PTR [rax+0x58],rcx
0x0027da50: mov    rdx,QWORD PTR [r14+0x60]
0x0027da54: mov    rax,QWORD PTR [rbx+0x130]
0x0027da5b: mov    rcx,QWORD PTR [rax+0x58]
0x0027da5f: mov    eax,DWORD PTR [rdx]
0x0027da61: mov    DWORD PTR [rcx+0x30],eax
0x0027da64: mov    rax,QWORD PTR [rbx+0x130]
0x0027da6b: mov    rdx,QWORD PTR [rax+0x58]
0x0027da6f: add    rdx,0x38
0x0027da73: mov    rcx,QWORD PTR [r14+0x60]
0x0027da77: mov    ecx,DWORD PTR [rcx]
0x0027da79: call   0x1400b9e70
0x0027da7e: call   0x1401043f0
0x0027da83: mov    ecx,DWORD PTR [rbx+0xe0]
0x0027da89: mov    DWORD PTR [rax+0x28],ecx
0x0027da8c: mov    rcx,QWORD PTR [r14+0x60]
0x0027da90: mov    edx,DWORD PTR [rcx]
0x0027da92: mov    DWORD PTR [rax+0x2c],edx
0x0027da95: mov    ecx,DWORD PTR [rip+0x20f6c59]        # 0x1423746f4
0x0027da9b: mov    DWORD PTR [rax+0x8],ecx
0x0027da9e: mov    ecx,DWORD PTR [rip+0x210a520]        # 0x142387fc4
0x0027daa4: mov    DWORD PTR [rax+0xc],ecx
0x0027daa7: mov    rdx,QWORD PTR [rax]
0x0027daaa: mov    rcx,rax
0x0027daad: call   QWORD PTR [rdx+0x128]
0x0027dab3: mov    BYTE PTR [rsi],dil
0x0027dab6: jmp    0x14027dfc1
0x0027dabb: mov    ebx,DWORD PTR [rbp-0x1]
0x0027dabe: mov    ecx,DWORD PTR [rsi+0x4]
0x0027dac1: test   ecx,ecx
0x0027dac3: je     0x14027e0d4
0x0027dac9: cmp    ecx,0x1
0x0027dacc: jne    0x14027d5b5
0x0027dad2: xor    al,al
0x0027dad4: mov    BYTE PTR [rbp+0x77],al
0x0027dad7: mov    BYTE PTR [rbp+0x7f],al
0x0027dada: mov    BYTE PTR [rbp-0x29],al
0x0027dadd: mov    BYTE PTR [rbp-0x28],al
0x0027dae0: lea    ecx,[rbx+0x2]
0x0027dae3: lea    edx,[rbx+0x14]
0x0027dae6: lea    r9d,[rbx+0x16]
0x0027daea: lea    r10d,[rbx+0x28]
0x0027daee: lea    r11d,[rbx+0x2a]
0x0027daf2: add    ebx,0x3c
0x0027daf5: mov    eax,DWORD PTR [rbp-0x1]
0x0027daf8: lea    r12d,[rax+0x3e]
0x0027dafc: lea    r13d,[rax+0x50]
0x0027db00: cmp    BYTE PTR [rip+0x2112ace],dil        # 0x1423905d5
0x0027db07: mov    r8,QWORD PTR [rbp+0x5f]
0x0027db0b: je     0x14027dbbf
0x0027db11: cmp    BYTE PTR [rip+0x2112ab4],dil        # 0x1423905cc
0x0027db18: je     0x14027dbbf
0x0027db1e: cmp    r15d,ecx
0x0027db21: jl     0x14027db3c
0x0027db23: cmp    r15d,edx
0x0027db26: jg     0x14027db3c
0x0027db28: lea    eax,[r14-0x1d]
0x0027db2c: cmp    eax,0x2
0x0027db2f: ja     0x14027db3c
0x0027db31: mov    BYTE PTR [rip+0x2112a94],dil        # 0x1423905cc
0x0027db38: mov    BYTE PTR [rbp+0x77],0x1
0x0027db3c: cmp    r15d,r9d
0x0027db3f: jl     0x14027db5a
0x0027db41: cmp    r15d,r10d
0x0027db44: jg     0x14027db5a
0x0027db46: lea    eax,[r14-0x1d]
0x0027db4a: cmp    eax,0x2
0x0027db4d: ja     0x14027db5a
0x0027db4f: mov    BYTE PTR [rip+0x2112a76],dil        # 0x1423905cc
0x0027db56: mov    BYTE PTR [rbp+0x7f],0x1
0x0027db5a: cmp    r15d,r11d
0x0027db5d: jl     0x14027db78
0x0027db5f: cmp    r15d,ebx
0x0027db62: jg     0x14027db78
0x0027db64: lea    eax,[r14-0x1d]
0x0027db68: cmp    eax,0x2
0x0027db6b: ja     0x14027db78
0x0027db6d: mov    BYTE PTR [rip+0x2112a58],dil        # 0x1423905cc
0x0027db74: mov    BYTE PTR [rbp-0x29],0x1
0x0027db78: cmp    r15d,r12d
0x0027db7b: jl     0x14027db96
0x0027db7d: cmp    r15d,r13d
0x0027db80: jg     0x14027db96
0x0027db82: lea    eax,[r14-0x1d]
0x0027db86: cmp    eax,0x2
0x0027db89: ja     0x14027db96
0x0027db8b: mov    BYTE PTR [rip+0x2112a3a],dil        # 0x1423905cc
0x0027db92: mov    BYTE PTR [rbp-0x28],0x1
0x0027db96: cmp    r15d,ecx
0x0027db99: jl     0x14027dbbf
0x0027db9b: cmp    r15d,edx
0x0027db9e: jg     0x14027dbbf
0x0027dba0: mov    ecx,DWORD PTR [rbp+0xf]
0x0027dba3: lea    eax,[rcx-0x3]
0x0027dba6: cmp    r14d,eax
0x0027dba9: jl     0x14027dbbf
0x0027dbab: lea    eax,[rcx-0x1]
0x0027dbae: cmp    r14d,eax
0x0027dbb1: jg     0x14027dbbf
0x0027dbb3: mov    BYTE PTR [rip+0x2112a12],dil        # 0x1423905cc
0x0027dbba: mov    r12b,0x1
0x0027dbbd: jmp    0x14027dbc2
0x0027dbbf: xor    r12b,r12b
0x0027dbc2: mov    rcx,QWORD PTR [r8]
0x0027dbc5: mov    rax,QWORD PTR [rcx+0x8]
0x0027dbc9: cmp    BYTE PTR [rax+0x19],dil
0x0027dbcd: jne    0x14027dbeb
0x0027dbcf: nop
0x0027dbd0: cmp    DWORD PTR [rax+0x1c],0x171
0x0027dbd7: jge    0x14027dbdf
0x0027dbd9: mov    rax,QWORD PTR [rax+0x10]
0x0027dbdd: jmp    0x14027dbe5
0x0027dbdf: mov    rcx,rax
0x0027dbe2: mov    rax,QWORD PTR [rax]
0x0027dbe5: cmp    BYTE PTR [rax+0x19],dil
0x0027dbe9: je     0x14027dbd0
0x0027dbeb: cmp    BYTE PTR [rcx+0x19],dil
0x0027dbef: jne    0x14027dc0b
0x0027dbf1: cmp    DWORD PTR [rcx+0x1c],0x171
0x0027dbf8: jg     0x14027dc0b
0x0027dbfa: mov    rcx,r8
0x0027dbfd: call   0x1400e1170
0x0027dc02: mov    r15b,0x1
0x0027dc05: mov    r8,QWORD PTR [rbp+0x5f]
0x0027dc09: jmp    0x14027dc10
0x0027dc0b: movzx  r15d,BYTE PTR [rbp+0x77]
0x0027dc10: mov    rcx,QWORD PTR [r8]
0x0027dc13: mov    rax,QWORD PTR [rcx+0x8]
0x0027dc17: cmp    BYTE PTR [rax+0x19],dil
0x0027dc1b: jne    0x14027dc3b
0x0027dc1d: nop    DWORD PTR [rax]
0x0027dc20: cmp    DWORD PTR [rax+0x1c],0x172
0x0027dc27: jge    0x14027dc2f
0x0027dc29: mov    rax,QWORD PTR [rax+0x10]
0x0027dc2d: jmp    0x14027dc35
0x0027dc2f: mov    rcx,rax
0x0027dc32: mov    rax,QWORD PTR [rax]
0x0027dc35: cmp    BYTE PTR [rax+0x19],dil
0x0027dc39: je     0x14027dc20
0x0027dc3b: cmp    BYTE PTR [rcx+0x19],dil
0x0027dc3f: jne    0x14027dc5b
0x0027dc41: cmp    DWORD PTR [rcx+0x1c],0x172
0x0027dc48: jg     0x14027dc5b
0x0027dc4a: mov    rcx,r8
0x0027dc4d: call   0x1400e1170
0x0027dc52: mov    r14b,0x1
0x0027dc55: mov    r8,QWORD PTR [rbp+0x5f]
0x0027dc59: jmp    0x14027dc60
0x0027dc5b: movzx  r14d,BYTE PTR [rbp+0x7f]
0x0027dc60: mov    rcx,QWORD PTR [r8]
0x0027dc63: mov    rax,QWORD PTR [rcx+0x8]
0x0027dc67: cmp    BYTE PTR [rax+0x19],dil
0x0027dc6b: jne    0x14027dc8b
0x0027dc6d: nop    DWORD PTR [rax]
0x0027dc70: cmp    DWORD PTR [rax+0x1c],0x173
0x0027dc77: jge    0x14027dc7f
0x0027dc79: mov    rax,QWORD PTR [rax+0x10]
0x0027dc7d: jmp    0x14027dc85
0x0027dc7f: mov    rcx,rax
0x0027dc82: mov    rax,QWORD PTR [rax]
0x0027dc85: cmp    BYTE PTR [rax+0x19],dil
0x0027dc89: je     0x14027dc70
0x0027dc8b: cmp    BYTE PTR [rcx+0x19],dil
0x0027dc8f: jne    0x14027dcaa
0x0027dc91: cmp    DWORD PTR [rcx+0x1c],0x173
0x0027dc98: jg     0x14027dcaa
0x0027dc9a: mov    rcx,r8
0x0027dc9d: call   0x1400e1170
0x0027dca2: mov    bl,0x1
0x0027dca4: mov    r8,QWORD PTR [rbp+0x5f]
0x0027dca8: jmp    0x14027dcae
0x0027dcaa: movzx  ebx,BYTE PTR [rbp-0x29]
0x0027dcae: mov    rcx,QWORD PTR [r8]
0x0027dcb1: mov    rax,QWORD PTR [rcx+0x8]
0x0027dcb5: cmp    BYTE PTR [rax+0x19],dil
0x0027dcb9: jne    0x14027dcdb
0x0027dcbb: nop    DWORD PTR [rax+rax*1+0x0]
0x0027dcc0: cmp    DWORD PTR [rax+0x1c],0x174
0x0027dcc7: jge    0x14027dccf
0x0027dcc9: mov    rax,QWORD PTR [rax+0x10]
0x0027dccd: jmp    0x14027dcd5
0x0027dccf: mov    rcx,rax
0x0027dcd2: mov    rax,QWORD PTR [rax]
0x0027dcd5: cmp    BYTE PTR [rax+0x19],dil
0x0027dcd9: je     0x14027dcc0
0x0027dcdb: cmp    BYTE PTR [rcx+0x19],dil
0x0027dcdf: jne    0x14027dcfa
0x0027dce1: cmp    DWORD PTR [rcx+0x1c],0x174
0x0027dce8: jg     0x14027dcfa
0x0027dcea: mov    rcx,r8
0x0027dced: call   0x1400e1170
0x0027dcf2: mov    dl,0x1
0x0027dcf4: mov    r8,QWORD PTR [rbp+0x5f]
0x0027dcf8: jmp    0x14027dcfe
0x0027dcfa: movzx  edx,BYTE PTR [rbp-0x28]
0x0027dcfe: mov    rcx,QWORD PTR [r8]
0x0027dd01: mov    rax,QWORD PTR [rcx+0x8]
0x0027dd05: cmp    BYTE PTR [rax+0x19],dil
0x0027dd09: jne    0x14027dd28
0x0027dd0b: nop    DWORD PTR [rax+rax*1+0x0]
0x0027dd10: cmp    DWORD PTR [rax+0x1c],0x1
0x0027dd14: jge    0x14027dd1c
0x0027dd16: mov    rax,QWORD PTR [rax+0x10]
0x0027dd1a: jmp    0x14027dd22
0x0027dd1c: mov    rcx,rax
0x0027dd1f: mov    rax,QWORD PTR [rax]
0x0027dd22: cmp    BYTE PTR [rax+0x19],dil
0x0027dd26: je     0x14027dd10
0x0027dd28: cmp    BYTE PTR [rcx+0x19],dil
0x0027dd2c: jne    0x14027dd3e
0x0027dd2e: cmp    DWORD PTR [rcx+0x1c],0x1
0x0027dd32: jg     0x14027dd3e
0x0027dd34: mov    rcx,r8
0x0027dd37: call   0x1400e1170
0x0027dd3c: jmp    0x14027dd47
0x0027dd3e: test   r12b,r12b
0x0027dd41: je     0x14027dfde
0x0027dd47: mov    rdx,QWORD PTR [rip+0x21673c2]        # 0x1423e5110
0x0027dd4e: lea    r8,[rdx+0x1274]
0x0027dd55: mov    edx,DWORD PTR [rdx+0xc30]
0x0027dd5b: lea    rcx,[rip+0x227bf56]        # 0x1424f9cb8
0x0027dd62: call   0x140b530b0
0x0027dd67: mov    rbx,rax
0x0027dd6a: test   rax,rax
0x0027dd6d: je     0x14027dfbe
0x0027dd73: mov    rax,QWORD PTR [rax+0x130]
0x0027dd7a: test   rax,rax
0x0027dd7d: jne    0x14027ddc7
0x0027dd7f: mov    ecx,0x68 ; inline_fragment="h"
0x0027dd84: call   0x141539690
0x0027dd89: mov    QWORD PTR [rbp+0x7],rax
0x0027dd8d: mov    QWORD PTR [rax],rdi
0x0027dd90: mov    QWORD PTR [rax+0x8],rdi
0x0027dd94: mov    QWORD PTR [rax+0x10],rdi
0x0027dd98: mov    QWORD PTR [rax+0x18],rdi
0x0027dd9c: mov    QWORD PTR [rax+0x20],rdi
0x0027dda0: mov    QWORD PTR [rax+0x28],rdi
0x0027dda4: mov    QWORD PTR [rax+0x30],rdi
0x0027dda8: mov    QWORD PTR [rax+0x38],rdi
0x0027ddac: mov    QWORD PTR [rax+0x40],rdi
0x0027ddb0: mov    QWORD PTR [rax+0x48],rdi
0x0027ddb4: mov    QWORD PTR [rax+0x50],rdi
0x0027ddb8: mov    QWORD PTR [rax+0x58],rdi
0x0027ddbc: mov    QWORD PTR [rax+0x60],rdi
0x0027ddc0: mov    QWORD PTR [rbx+0x130],rax
0x0027ddc7: cmp    QWORD PTR [rax+0x58],rdi
0x0027ddcb: jne    0x14027de1a
0x0027ddcd: mov    ecx,0x60 ; inline_fragment="`"
0x0027ddd2: call   0x141539690
0x0027ddd7: mov    rcx,rax
0x0027ddda: mov    QWORD PTR [rbp+0x7],rax
0x0027ddde: mov    QWORD PTR [rax],rdi
0x0027dde1: mov    QWORD PTR [rax+0x8],rdi
0x0027dde5: mov    QWORD PTR [rax+0x10],rdi
0x0027dde9: mov    QWORD PTR [rax+0x18],rdi
0x0027dded: mov    QWORD PTR [rax+0x20],rdi
0x0027ddf1: mov    QWORD PTR [rax+0x28],rdi
0x0027ddf5: mov    QWORD PTR [rax+0x38],rdi
0x0027ddf9: mov    QWORD PTR [rax+0x40],rdi
0x0027ddfd: mov    QWORD PTR [rax+0x48],rdi
0x0027de01: mov    DWORD PTR [rax+0x30],0xffffffff
0x0027de08: mov    DWORD PTR [rax+0x50],edi
0x0027de0b: mov    QWORD PTR [rax+0x58],rdi
0x0027de0f: mov    rax,QWORD PTR [rbx+0x130]
0x0027de16: mov    QWORD PTR [rax+0x58],rcx
0x0027de1a: mov    ecx,0xe8
0x0027de1f: call   0x141539690
0x0027de24: mov    QWORD PTR [rbp+0x7],rax
0x0027de28: xor    edx,edx
0x0027de2a: mov    rcx,rax
0x0027de2d: call   0x140c39cd0
0x0027de32: mov    rdi,rax
0x0027de35: mov    ecx,DWORD PTR [rbx+0xe0]
0x0027de3b: mov    DWORD PTR [rax+0x8c],ecx
0x0027de41: movsx  ecx,WORD PTR [rbx+0x2]
0x0027de45: mov    DWORD PTR [rax+0x80],ecx
0x0027de4b: movzx  ecx,WORD PTR [rbx+0x4]
0x0027de4f: mov    WORD PTR [rax+0x84],cx
0x0027de56: mov    r9d,DWORD PTR [rip+0x20f6897]        # 0x1423746f4
0x0027de5d: mov    edx,DWORD PTR [rip+0x210a161]        # 0x142387fc4
0x0027de63: mov    r8d,DWORD PTR [rbx+0x18]
0x0027de67: cmp    r8d,0xffffffff
0x0027de6b: je     0x14027de70
0x0027de6d: mov    edx,DWORD PTR [rbx+0x1c]
0x0027de70: cmove  r8d,r9d
0x0027de74: mov    ecx,DWORD PTR [rbx+0x14]
0x0027de77: cmp    ecx,0xffffffff
0x0027de7a: je     0x14027deb8
0x0027de7c: cmp    edx,0xffffffff
0x0027de7f: je     0x14027deb8
0x0027de81: cmp    DWORD PTR [rip+0x161e410],0x1        # 0x14189c298
0x0027de88: ja     0x14027deb8
0x0027de8a: sub    r8d,DWORD PTR [rbx+0x20]
0x0027de8e: sub    r8d,DWORD PTR [rbx+0x10]
0x0027de92: mov    eax,DWORD PTR [rbx+0x24]
0x0027de95: add    eax,ecx
0x0027de97: sub    edx,eax
0x0027de99: jns    0x14027dec0
0x0027de9b: mov    ecx,0x62700
0x0027dea0: sub    ecx,edx
0x0027dea2: mov    eax,0xd663cca3
0x0027dea7: imul   ecx
0x0027dea9: sar    edx,0x10
0x0027deac: mov    eax,edx
0x0027deae: shr    eax,0x1f
0x0027deb1: add    edx,eax
0x0027deb3: add    r8d,edx
0x0027deb6: jmp    0x14027dec0
0x0027deb8: sub    r8d,DWORD PTR [rbx+0x20]
0x0027debc: sub    r8d,DWORD PTR [rbx+0x10]
0x0027dec0: sub    r9d,r8d
0x0027dec3: mov    DWORD PTR [rdi+0x94],r9d
0x0027deca: call   0x140eb68b0
0x0027decf: mov    r8d,eax
0x0027ded2: mov    eax,0x3
0x0027ded7: mul    r8d
0x0027deda: mov    ecx,r8d
0x0027dedd: sub    ecx,edx
0x0027dedf: shr    ecx,1
0x0027dee1: add    ecx,edx
0x0027dee3: shr    ecx,0x1e
0x0027dee6: imul   ecx,ecx,0x7fffffff
0x0027deec: sub    r8d,ecx
0x0027deef: mov    eax,0xc4d77ce7
0x0027def4: mul    r8d
0x0027def7: shr    edx,0xc
0x0027defa: mov    DWORD PTR [rdi+0x98],edx
0x0027df00: lea    rdx,[rsi+0x8]
0x0027df04: lea    rcx,[rdi+0x8]
0x0027df08: call   0x14014d760
0x0027df0d: mov    eax,DWORD PTR [rsi+0x88]
0x0027df13: mov    DWORD PTR [rdi+0xb0],eax
0x0027df19: movzx  eax,WORD PTR [rsi+0x84]
0x0027df20: mov    WORD PTR [rdi+0xac],ax
0x0027df27: mov    edx,DWORD PTR [rsi+0x80]
0x0027df2d: mov    DWORD PTR [rdi+0xa0],edx
0x0027df33: mov    DWORD PTR [rdi+0x90],0xffffffff
0x0027df3d: cmp    edx,0xffffffff
0x0027df40: je     0x14027df67
0x0027df42: mov    ecx,0x83
0x0027df47: cmp    ax,cx
0x0027df4a: jne    0x14027df67
0x0027df4c: mov    r8d,DWORD PTR [rbx+0xe0]
0x0027df53: lea    rcx,[rip+0x2153596]        # 0x1423d14f0
0x0027df5a: call   0x14014c4f0
0x0027df5f: mov    ecx,DWORD PTR [rax]
0x0027df61: mov    DWORD PTR [rdi+0x9c],ecx
0x0027df67: mov    rax,QWORD PTR [rbx+0x130]
0x0027df6e: mov    rcx,QWORD PTR [rax+0x58]
0x0027df72: mov    eax,DWORD PTR [rdi]
0x0027df74: mov    DWORD PTR [rcx+0x30],eax
0x0027df77: mov    rax,QWORD PTR [rbx+0x130]
0x0027df7e: mov    rdx,QWORD PTR [rax+0x58]
0x0027df82: add    rdx,0x38
0x0027df86: mov    ecx,DWORD PTR [rdi]
0x0027df88: call   0x1400b9e70
0x0027df8d: call   0x1401043f0
0x0027df92: mov    ecx,DWORD PTR [rbx+0xe0]
0x0027df98: mov    DWORD PTR [rax+0x28],ecx
0x0027df9b: mov    ecx,DWORD PTR [rdi]
0x0027df9d: mov    DWORD PTR [rax+0x2c],ecx
0x0027dfa0: mov    ecx,DWORD PTR [rip+0x20f674e]        # 0x1423746f4
0x0027dfa6: mov    DWORD PTR [rax+0x8],ecx
0x0027dfa9: mov    ecx,DWORD PTR [rip+0x210a015]        # 0x142387fc4
0x0027dfaf: mov    DWORD PTR [rax+0xc],ecx
0x0027dfb2: mov    rdx,QWORD PTR [rax]
0x0027dfb5: mov    rcx,rax
0x0027dfb8: call   QWORD PTR [rdx+0x128]
0x0027dfbe: mov    BYTE PTR [rsi],0x0
0x0027dfc1: cmp    WORD PTR [rip+0x23ccb2f],0x2        # 0x14264aaf8
0x0027dfc9: jge    0x14027dfd7
0x0027dfcb: mov    eax,0x2
0x0027dfd0: mov    WORD PTR [rip+0x23ccb21],ax        # 0x14264aaf8
0x0027dfd7: mov    al,0x1
0x0027dfd9: jmp    0x14027d5c0
0x0027dfde: test   r15b,r15b
0x0027dfe1: je     0x14027e087
0x0027dfe7: mov    rcx,r8
0x0027dfea: call   0x1400e1170
0x0027dfef: mov    BYTE PTR [rip+0x21125d6],dil        # 0x1423905cc
0x0027dff6: mov    ecx,DWORD PTR [rsi+0x88]
0x0027dffc: mov    rax,QWORD PTR [rip+0x21537fd]        # 0x1423d1800
0x0027e003: sub    rax,QWORD PTR [rip+0x21537ee]        # 0x1423d17f8
0x0027e00a: test   rax,0xfffffffffffffff8
0x0027e010: je     0x14027e03f
0x0027e012: cmp    ecx,0xffffffff
0x0027e015: je     0x14027e03f
0x0027e017: lea    rdx,[rip+0x21537da]        # 0x1423d17f8
0x0027e01e: call   0x1400ba0a0
0x0027e023: mov    rdi,rax
0x0027e026: add    rsi,0x8
0x0027e02a: test   rax,rax
0x0027e02d: je     0x14027e043
0x0027e02f: xor    r8d,r8d
0x0027e032: mov    rdx,rsi
0x0027e035: mov    rcx,rax
0x0027e038: call   0x140931860
0x0027e03d: jmp    0x14027e066
0x0027e03f: add    rsi,0x8
0x0027e043: xor    r8d,r8d
0x0027e046: lea    rax,[rip+0x22743eb]        # 0x1424f2438
0x0027e04d: mov    QWORD PTR [rsp+0x20],rax
0x0027e052: lea    r9,[rip+0x226f75f]        # 0x1424ed7b8
0x0027e059: mov    edx,0xffffffff
0x0027e05e: mov    rcx,rsi
0x0027e061: call   0x140a92860
0x0027e066: mov    QWORD PTR [rsp+0x20],rdi
0x0027e06b: xor    r9d,r9d
0x0027e06e: mov    r8,rsi
0x0027e071: mov    edx,0xc
0x0027e076: lea    rcx,[rip+0x1624c7b]        # 0x1418a2cf8
0x0027e07d: call   0x1401fc150
0x0027e082: jmp    0x14027d5be
0x0027e087: test   r14b,r14b
0x0027e08a: je     0x14027e0a0
0x0027e08c: mov    DWORD PTR [rsi+0x4],0x4
0x0027e093: mov    rcx,rsi
0x0027e096: call   0x1402810a0
0x0027e09b: jmp    0x14027d5be
0x0027e0a0: test   bl,bl
0x0027e0a2: je     0x14027e0b8
0x0027e0a4: mov    DWORD PTR [rsi+0x4],0x2
0x0027e0ab: mov    rcx,rsi
0x0027e0ae: call   0x1402810a0
0x0027e0b3: jmp    0x14027d5be
0x0027e0b8: test   dl,dl
0x0027e0ba: je     0x14027d5b5
0x0027e0c0: mov    DWORD PTR [rsi+0x4],0x3
0x0027e0c7: mov    rcx,rsi
0x0027e0ca: call   0x1402810a0
0x0027e0cf: jmp    0x14027d5be
0x0027e0d4: xor    r12b,r12b
0x0027e0d7: xor    bl,bl
0x0027e0d9: mov    eax,DWORD PTR [rbp-0x1]
0x0027e0dc: lea    r9d,[rax+0x2]
0x0027e0e0: lea    ecx,[rax+0x14]
0x0027e0e3: mov    r11d,DWORD PTR [rbp+0xf]
0x0027e0e7: lea    eax,[r11-0x3]
0x0027e0eb: lea    r10d,[r11-0x1]
0x0027e0ef: lea    edx,[rcx+0x4]
0x0027e0f2: lea    r13d,[rdx+0x12]
0x0027e0f6: dec    r11d
0x0027e0f9: cmp    BYTE PTR [rip+0x21124d6],bl        # 0x1423905d5
0x0027e0ff: je     0x14027e142
0x0027e101: cmp    BYTE PTR [rip+0x21124c5],bl        # 0x1423905cc
0x0027e107: je     0x14027e142
0x0027e109: cmp    r15d,r9d
0x0027e10c: jl     0x14027e126
0x0027e10e: cmp    r15d,ecx
0x0027e111: jg     0x14027e126
0x0027e113: cmp    r14d,eax
0x0027e116: jl     0x14027e126
0x0027e118: cmp    r14d,r10d
0x0027e11b: jg     0x14027e126
0x0027e11d: mov    BYTE PTR [rip+0x21124a9],bl        # 0x1423905cc
0x0027e123: mov    r12b,0x1
0x0027e126: cmp    r15d,edx
0x0027e129: jl     0x14027e142
0x0027e12b: cmp    r15d,r13d
0x0027e12e: jg     0x14027e142
0x0027e130: cmp    r14d,eax
0x0027e133: jl     0x14027e142
0x0027e135: cmp    r14d,r11d
0x0027e138: jg     0x14027e142
0x0027e13a: mov    BYTE PTR [rip+0x211248c],bl        # 0x1423905cc
0x0027e140: mov    bl,0x1
0x0027e142: mov    rcx,QWORD PTR [r8]
0x0027e145: mov    rax,QWORD PTR [rcx+0x8]
0x0027e149: cmp    BYTE PTR [rax+0x19],dil
0x0027e14d: jne    0x14027e16b
0x0027e14f: nop
0x0027e150: cmp    DWORD PTR [rax+0x1c],0x16f
0x0027e157: jge    0x14027e15f
0x0027e159: mov    rax,QWORD PTR [rax+0x10]
0x0027e15d: jmp    0x14027e165
0x0027e15f: mov    rcx,rax
0x0027e162: mov    rax,QWORD PTR [rax]
0x0027e165: cmp    BYTE PTR [rax+0x19],dil
0x0027e169: je     0x14027e150
0x0027e16b: cmp    BYTE PTR [rcx+0x19],dil
0x0027e16f: jne    0x14027e189
0x0027e171: cmp    DWORD PTR [rcx+0x1c],0x16f
0x0027e178: jg     0x14027e189
0x0027e17a: mov    rcx,r8
0x0027e17d: call   0x1400e1170
0x0027e182: mov    r12b,0x1
0x0027e185: mov    r8,QWORD PTR [rbp+0x5f]
0x0027e189: mov    rcx,QWORD PTR [r8]
0x0027e18c: mov    rax,QWORD PTR [rcx+0x8]
0x0027e190: cmp    BYTE PTR [rax+0x19],dil
0x0027e194: jne    0x14027e1b1
0x0027e196: cmp    DWORD PTR [rax+0x1c],0x170
0x0027e19d: jge    0x14027e1a5
0x0027e19f: mov    rax,QWORD PTR [rax+0x10]
0x0027e1a3: jmp    0x14027e1ab
0x0027e1a5: mov    rcx,rax
0x0027e1a8: mov    rax,QWORD PTR [rax]
0x0027e1ab: cmp    BYTE PTR [rax+0x19],dil
0x0027e1af: je     0x14027e196
0x0027e1b1: cmp    BYTE PTR [rcx+0x19],dil
0x0027e1b5: jne    0x14027e1ce
0x0027e1b7: cmp    DWORD PTR [rcx+0x1c],0x170
0x0027e1be: jg     0x14027e1ce
0x0027e1c0: mov    rcx,r8
0x0027e1c3: call   0x1400e1170
0x0027e1c8: mov    bl,0x1
0x0027e1ca: mov    r8,QWORD PTR [rbp+0x5f]
0x0027e1ce: test   r12b,r12b
0x0027e1d1: je     0x14027e1f6
0x0027e1d3: mov    rcx,r8
0x0027e1d6: call   0x1400e1170
0x0027e1db: mov    BYTE PTR [rip+0x21123ea],dil        # 0x1423905cc
0x0027e1e2: mov    DWORD PTR [rsi+0x4],0x1
0x0027e1e9: mov    rcx,rsi
0x0027e1ec: call   0x1402810a0
0x0027e1f1: jmp    0x14027d5be
0x0027e1f6: test   bl,bl
0x0027e1f8: je     0x14027d5b5
0x0027e1fe: mov    rcx,r8
0x0027e201: call   0x1400e1170
0x0027e206: mov    BYTE PTR [rip+0x21123bf],dil        # 0x1423905cc
0x0027e20d: mov    rdx,QWORD PTR [rip+0x2166efc]        # 0x1423e5110
0x0027e214: lea    r8,[rdx+0x1274]
0x0027e21b: mov    edx,DWORD PTR [rdx+0xc30]
0x0027e221: lea    rcx,[rip+0x227ba90]        # 0x1424f9cb8
0x0027e228: call   0x140b530b0
0x0027e22d: mov    rbx,rax
0x0027e230: test   rax,rax
0x0027e233: je     0x14027e2f2
0x0027e239: mov    rax,QWORD PTR [rax+0x130]
0x0027e240: test   rax,rax
0x0027e243: jne    0x14027e28d
0x0027e245: mov    ecx,0x68 ; inline_fragment="h"
0x0027e24a: call   0x141539690
0x0027e24f: mov    QWORD PTR [rbp+0x7],rax
0x0027e253: mov    QWORD PTR [rax],rdi
0x0027e256: mov    QWORD PTR [rax+0x8],rdi
0x0027e25a: mov    QWORD PTR [rax+0x10],rdi
0x0027e25e: mov    QWORD PTR [rax+0x18],rdi
0x0027e262: mov    QWORD PTR [rax+0x20],rdi
0x0027e266: mov    QWORD PTR [rax+0x28],rdi
0x0027e26a: mov    QWORD PTR [rax+0x30],rdi
0x0027e26e: mov    QWORD PTR [rax+0x38],rdi
0x0027e272: mov    QWORD PTR [rax+0x40],rdi
0x0027e276: mov    QWORD PTR [rax+0x48],rdi
0x0027e27a: mov    QWORD PTR [rax+0x50],rdi
0x0027e27e: mov    QWORD PTR [rax+0x58],rdi
0x0027e282: mov    QWORD PTR [rax+0x60],rdi
0x0027e286: mov    QWORD PTR [rbx+0x130],rax
0x0027e28d: cmp    QWORD PTR [rax+0x58],rdi
0x0027e291: jne    0x14027e2e0
0x0027e293: mov    ecx,0x60 ; inline_fragment="`"
0x0027e298: call   0x141539690
0x0027e29d: mov    rcx,rax
0x0027e2a0: mov    QWORD PTR [rbp+0x7],rax
0x0027e2a4: mov    QWORD PTR [rax],rdi
0x0027e2a7: mov    QWORD PTR [rax+0x8],rdi
0x0027e2ab: mov    QWORD PTR [rax+0x10],rdi
0x0027e2af: mov    QWORD PTR [rax+0x18],rdi
0x0027e2b3: mov    QWORD PTR [rax+0x20],rdi
0x0027e2b7: mov    QWORD PTR [rax+0x28],rdi
0x0027e2bb: mov    QWORD PTR [rax+0x38],rdi
0x0027e2bf: mov    QWORD PTR [rax+0x40],rdi
0x0027e2c3: mov    QWORD PTR [rax+0x48],rdi
0x0027e2c7: mov    DWORD PTR [rax+0x30],0xffffffff
0x0027e2ce: mov    DWORD PTR [rax+0x50],edi
0x0027e2d1: mov    QWORD PTR [rax+0x58],rdi
0x0027e2d5: mov    rax,QWORD PTR [rbx+0x130]
0x0027e2dc: mov    QWORD PTR [rax+0x58],rcx
0x0027e2e0: mov    rax,QWORD PTR [rbx+0x130]
0x0027e2e7: mov    rcx,QWORD PTR [rax+0x58]
0x0027e2eb: mov    DWORD PTR [rcx+0x30],0xffffffff
0x0027e2f2: mov    BYTE PTR [rsi],dil
0x0027e2f5: jmp    0x14027d5be
