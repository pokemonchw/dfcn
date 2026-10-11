# reference; PE:6a70a6d9:02711000; interface renderer caller; RVA 0x396010..0x396a88; PE disassembly
0x00396010: rex push rbp
0x00396012: push   rbx
0x00396013: push   rsi
0x00396014: push   rdi
0x00396015: push   r12
0x00396017: push   r13
0x00396019: push   r14
0x0039601b: push   r15
0x0039601d: lea    rbp,[rsp-0x1f]
0x00396022: sub    rsp,0x98
0x00396029: mov    rax,QWORD PTR [rip+0x1506010]        # 0x14189c040
0x00396030: xor    rax,rsp
0x00396033: mov    QWORD PTR [rbp+0x7],rax
0x00396037: mov    DWORD PTR [rbp-0x45],r9d
0x0039603b: mov    r12d,r8d
0x0039603e: mov    DWORD PTR [rbp-0x29],r8d
0x00396042: mov    r15d,edx
0x00396045: mov    DWORD PTR [rbp-0x39],edx
0x00396048: mov    r8,rcx
0x0039604b: mov    QWORD PTR [rbp-0x21],rcx
0x0039604f: lea    r13d,[r12+0x4]
0x00396054: mov    DWORD PTR [rbp-0x35],r13d
0x00396058: lea    edi,[r9-0x1c]
0x0039605c: mov    r14d,DWORD PTR [rip+0x2037725]        # 0x1423cd788
0x00396063: add    r14d,0xfffffffc
0x00396067: mov    DWORD PTR [rip+0x22b440b],0x1010007        # 0x14264a47c
0x00396071: mov    esi,0x4
0x00396076: cmp    r14d,esi
0x00396079: jl     0x14039614d
0x0039607f: lea    r15,[rip+0x22b436a]        # 0x14264a3f0
0x00396086: data16 nop WORD PTR [rax+rax*1+0x0]
0x00396090: mov    ebx,r13d
0x00396093: cmp    r13d,edi
0x00396096: jg     0x14039613a
0x0039609c: nop    DWORD PTR [rax+0x0]
0x003960a0: mov    DWORD PTR [rip+0x22b43ce],ebx        # 0x14264a474
0x003960a6: mov    DWORD PTR [rip+0x22b43cc],esi        # 0x14264a478
0x003960ac: xor    r8d,r8d
0x003960af: xor    edx,edx
0x003960b1: mov    rcx,r15
0x003960b4: call   0x1400bb190
0x003960b9: cmp    esi,0x4
0x003960bc: jne    0x1403960e2
0x003960be: cmp    ebx,r13d
0x003960c1: jne    0x1403960cb
0x003960c3: mov    edx,DWORD PTR [rip+0x22b5c4b]        # 0x14264bd14
0x003960c9: jmp    0x140396128
0x003960cb: mov    rcx,r15
0x003960ce: cmp    ebx,edi
0x003960d0: jne    0x1403960da
0x003960d2: mov    edx,DWORD PTR [rip+0x22b5c54]        # 0x14264bd2c
0x003960d8: jmp    0x14039612b
0x003960da: mov    edx,DWORD PTR [rip+0x22b5c40]        # 0x14264bd20
0x003960e0: jmp    0x14039612b
0x003960e2: cmp    esi,r14d
0x003960e5: jne    0x14039610b
0x003960e7: cmp    ebx,r13d
0x003960ea: jne    0x1403960f4
0x003960ec: mov    edx,DWORD PTR [rip+0x22b5c2a]        # 0x14264bd1c
0x003960f2: jmp    0x140396128
0x003960f4: mov    rcx,r15
0x003960f7: cmp    ebx,edi
0x003960f9: jne    0x140396103
0x003960fb: mov    edx,DWORD PTR [rip+0x22b5c33]        # 0x14264bd34
0x00396101: jmp    0x14039612b
0x00396103: mov    edx,DWORD PTR [rip+0x22b5c1f]        # 0x14264bd28
0x00396109: jmp    0x14039612b
0x0039610b: cmp    ebx,r13d
0x0039610e: jne    0x140396118
0x00396110: mov    edx,DWORD PTR [rip+0x22b5c02]        # 0x14264bd18
0x00396116: jmp    0x140396128
0x00396118: cmp    ebx,edi
0x0039611a: mov    edx,DWORD PTR [rip+0x22b5c10]        # 0x14264bd30
0x00396120: je     0x140396128
0x00396122: mov    edx,DWORD PTR [rip+0x22b5bfc]        # 0x14264bd24
0x00396128: mov    rcx,r15
0x0039612b: call   0x140adaad0
0x00396130: inc    ebx
0x00396132: cmp    ebx,edi
0x00396134: jle    0x1403960a0
0x0039613a: inc    esi
0x0039613c: cmp    esi,r14d
0x0039613f: jle    0x140396090
0x00396145: mov    r8,QWORD PTR [rbp-0x21]
0x00396149: mov    r15d,DWORD PTR [rbp-0x39]
0x0039614d: lea    r9,[rip+0xffffffffffc69eac]        # 0x140000000
0x00396154: mov    r10d,0x5
0x0039615a: mov    r11d,0x8
0x00396160: cmp    DWORD PTR [rip+0x150615d],0x4        # 0x14189c2c4
0x00396167: je     0x140396843
0x0039616d: xor    r12d,r12d
0x00396170: lea    ecx,[r13+0x79]
0x00396174: mov    DWORD PTR [rbp-0x31],ecx
0x00396177: lea    edx,[rdi-0x1]
0x0039617a: mov    DWORD PTR [rbp-0x2d],edx
0x0039617d: mov    r15d,DWORD PTR [rbp-0x41]
0x00396181: mov    esi,DWORD PTR [rbp-0x41]
0x00396184: mov    ebx,0x6
0x00396189: cmp    DWORD PTR [rip+0x20375e8],0x0        # 0x1423cd778
0x00396190: jle    0x1403961d2
0x00396192: mov    rax,QWORD PTR [rip+0x20375d7]        # 0x1423cd770
0x00396199: test   BYTE PTR [rax],0x1
0x0039619c: je     0x1403961d2
0x0039619e: lea    r14,[r8+0x1bc]
0x003961a5: cmp    r12d,DWORD PTR [r14]
0x003961a8: mov    WORD PTR [rip+0x22b42d3],0x0        # 0x14264a484
0x003961b1: mov    BYTE PTR [rip+0x22b42c7],0x0        # 0x14264a47f
0x003961b8: jne    0x1403961c6
0x003961ba: mov    DWORD PTR [rip+0x22b42bc],0x2c46        # 0x14264a480
0x003961c4: jmp    0x1403961f2
0x003961c6: mov    DWORD PTR [rip+0x22b42b0],0xffffff        # 0x14264a480
0x003961d0: jmp    0x1403961f2
0x003961d2: lea    r14,[r8+0x1bc]
0x003961d9: cmp    r12d,DWORD PTR [r14]
0x003961dc: mov    DWORD PTR [rip+0x22b4296],0x1010007        # 0x14264a47c
0x003961e6: je     0x1403961f2
0x003961e8: mov    DWORD PTR [rip+0x22b428a],0x1000007        # 0x14264a47c
0x003961f2: cmp    ecx,edx
0x003961f4: jg     0x1403962e4
0x003961fa: cmp    r12d,0x7
0x003961fe: ja     0x1403962d2
0x00396204: movsxd rax,r12d
0x00396207: mov    ecx,DWORD PTR [r9+rax*4+0x396a08]
0x0039620f: add    rcx,r9
0x00396212: jmp    rcx
0x00396214: lea    r15d,[r13+0x1]
0x00396218: lea    esi,[r13+0xd]
0x0039621c: mov    DWORD PTR [rbp-0x49],r10d
0x00396220: mov    rax,r10
0x00396223: mov    r13,rbx
0x00396226: mov    edi,r10d
0x00396229: jmp    0x1403963a1
0x0039622e: lea    r15d,[r13+0xe]
0x00396232: lea    esi,[r13+0x16]
0x00396236: mov    DWORD PTR [rbp-0x49],r10d
0x0039623a: mov    rax,r10
0x0039623d: mov    r13,rbx
0x00396240: mov    edi,r10d
0x00396243: jmp    0x1403963a1
0x00396248: lea    r15d,[r13+0x17]
0x0039624c: lea    esi,[r13+0x20]
0x00396250: mov    DWORD PTR [rbp-0x49],r10d
0x00396254: mov    rax,r10
0x00396257: mov    r13,rbx
0x0039625a: mov    edi,r10d
0x0039625d: jmp    0x1403963a1
0x00396262: lea    r15d,[r13+0x21]
0x00396266: lea    esi,[r13+0x29]
0x0039626a: mov    DWORD PTR [rbp-0x49],r10d
0x0039626e: mov    rax,r10
0x00396271: mov    r13,rbx
0x00396274: mov    edi,r10d
0x00396277: jmp    0x1403963a1
0x0039627c: lea    r15d,[r13+0x2a]
0x00396280: lea    esi,[r13+0x38]
0x00396284: mov    DWORD PTR [rbp-0x49],r10d
0x00396288: mov    rax,r10
0x0039628b: mov    r13,rbx
0x0039628e: mov    edi,r10d
0x00396291: jmp    0x1403963a1
0x00396296: lea    r15d,[r13+0x39]
0x0039629a: lea    esi,[r13+0x55]
0x0039629e: mov    DWORD PTR [rbp-0x49],r10d
0x003962a2: mov    rax,r10
0x003962a5: mov    r13,rbx
0x003962a8: mov    edi,r10d
0x003962ab: jmp    0x1403963a1
0x003962b0: lea    r15d,[r13+0x56]
0x003962b4: lea    esi,[r13+0x60]
0x003962b8: mov    DWORD PTR [rbp-0x49],r10d
0x003962bc: mov    rax,r10
0x003962bf: mov    r13,rbx
0x003962c2: mov    edi,r10d
0x003962c5: jmp    0x1403963a1
0x003962ca: lea    r15d,[r13+0x61]
0x003962ce: lea    esi,[r13+0x6b]
0x003962d2: mov    DWORD PTR [rbp-0x49],r10d
0x003962d6: mov    rax,r10
0x003962d9: mov    r13,rbx
0x003962dc: mov    edi,r10d
0x003962df: jmp    0x1403963a1
0x003962e4: cmp    r12d,0x7
0x003962e8: ja     0x140396348
0x003962ea: movsxd rax,r12d
0x003962ed: mov    ecx,DWORD PTR [r9+rax*4+0x396a28]
0x003962f5: add    rcx,r9
0x003962f8: jmp    rcx
0x003962fa: lea    r15d,[r13+0x1]
0x003962fe: lea    esi,[r13+0xd]
0x00396302: jmp    0x140396348
0x00396304: lea    r15d,[r13+0xe]
0x00396308: lea    esi,[r13+0x16]
0x0039630c: jmp    0x140396348
0x0039630e: lea    r15d,[r13+0x17]
0x00396312: lea    esi,[r13+0x20]
0x00396316: jmp    0x140396348
0x00396318: lea    r15d,[r13+0x21]
0x0039631c: lea    esi,[r13+0x29]
0x00396320: jmp    0x140396348
0x00396322: lea    r15d,[r13+0x2a]
0x00396326: lea    esi,[r13+0x38]
0x0039632a: jmp    0x140396348
0x0039632c: lea    r15d,[r13+0x1]
0x00396330: lea    esi,[r13+0x1d]
0x00396334: jmp    0x140396348
0x00396336: lea    r15d,[r13+0x1e]
0x0039633a: lea    esi,[r13+0x28]
0x0039633e: jmp    0x140396348
0x00396340: lea    r15d,[r13+0x29]
0x00396344: lea    esi,[r13+0x33]
0x00396348: cmp    DWORD PTR [r14],0x5
0x0039634c: jge    0x14039637b
0x0039634e: mov    ecx,0x7
0x00396353: cmp    r12d,0x5
0x00396357: cmovge ecx,r10d
0x0039635b: mov    DWORD PTR [rbp-0x49],ecx
0x0039635e: mov    eax,0x7
0x00396363: cmovge rax,r10
0x00396367: mov    r13,r11
0x0039636a: cmovge r13,rbx
0x0039636e: mov    edi,ecx
0x00396370: cmp    rax,r13
0x00396373: ja     0x1403964b5
0x00396379: jmp    0x1403963a1
0x0039637b: cmp    r12d,0x5
0x0039637f: jge    0x140396390
0x00396381: mov    DWORD PTR [rbp-0x49],r10d
0x00396385: mov    rax,r10
0x00396388: mov    r13,rbx
0x0039638b: mov    edi,r10d
0x0039638e: jmp    0x1403963a1
0x00396390: mov    DWORD PTR [rbp-0x49],0x7
0x00396397: mov    eax,0x7
0x0039639c: mov    r13,r11
0x0039639f: mov    edi,eax
0x003963a1: xor    ebx,ebx
0x003963a3: sub    r13,rax
0x003963a6: inc    r13
0x003963a9: mov    QWORD PTR [rbp-0x41],r13
0x003963ad: nop    DWORD PTR [rax]
0x003963b0: mov    r11d,r15d
0x003963b3: cmp    r15d,esi
0x003963b6: jg     0x14039648b
0x003963bc: lea    r13,[rip+0x22b402d]        # 0x14264a3f0
0x003963c3: nop    DWORD PTR [rax+0x0]
0x003963c7: nop    WORD PTR [rax+rax*1+0x0]
0x003963d0: mov    DWORD PTR [rip+0x22b409d],r11d        # 0x14264a474
0x003963d7: mov    DWORD PTR [rip+0x22b409b],edi        # 0x14264a478
0x003963dd: cmp    r12d,DWORD PTR [r14]
0x003963e0: jne    0x14039642a
0x003963e2: cmp    r11d,r15d
0x003963e5: jne    0x1403963f0
0x003963e7: lea    rdx,[r13+0x1f8c]
0x003963ee: jmp    0x14039646e
0x003963f0: lea    eax,[r15+0x1]
0x003963f4: cmp    r11d,eax
0x003963f7: jne    0x140396402
0x003963f9: lea    rdx,[r13+0x1f94]
0x00396400: jmp    0x14039646e
0x00396402: cmp    r11d,esi
0x00396405: jne    0x140396410
0x00396407: lea    rdx,[r13+0x1fac]
0x0039640e: jmp    0x14039646e
0x00396410: lea    eax,[rsi-0x1]
0x00396413: cmp    r11d,eax
0x00396416: jne    0x140396421
0x00396418: lea    rdx,[r13+0x1fa4]
0x0039641f: jmp    0x14039646e
0x00396421: lea    rdx,[r13+0x1f9c]
0x00396428: jmp    0x14039646e
0x0039642a: cmp    r11d,r15d
0x0039642d: jne    0x140396438
0x0039642f: lea    rdx,[r13+0x1f64]
0x00396436: jmp    0x14039646e
0x00396438: lea    eax,[r15+0x1]
0x0039643c: cmp    r11d,eax
0x0039643f: jne    0x14039644a
0x00396441: lea    rdx,[r13+0x1f6c]
0x00396448: jmp    0x14039646e
0x0039644a: cmp    r11d,esi
0x0039644d: jne    0x140396458
0x0039644f: lea    rdx,[r13+0x1f84]
0x00396456: jmp    0x14039646e
0x00396458: lea    eax,[rsi-0x1]
0x0039645b: cmp    r11d,eax
0x0039645e: lea    rdx,[r13+0x1f7c]
0x00396465: je     0x14039646e
0x00396467: lea    rdx,[r13+0x1f74]
0x0039646e: add    rdx,rbx
0x00396471: mov    edx,DWORD PTR [rdx]
0x00396473: mov    rcx,r13
0x00396476: call   0x140adaad0
0x0039647b: inc    r11d
0x0039647e: cmp    r11d,esi
0x00396481: jle    0x1403963d0
0x00396487: mov    r13,QWORD PTR [rbp-0x41]
0x0039648b: inc    edi
0x0039648d: add    rbx,0x4
0x00396491: sub    r13,0x1
0x00396495: mov    QWORD PTR [rbp-0x41],r13
0x00396499: jne    0x1403963b0
0x0039649f: mov    ecx,DWORD PTR [rbp-0x49]
0x003964a2: lea    r9,[rip+0xffffffffffc69b57]        # 0x140000000
0x003964a9: mov    r10d,0x5
0x003964af: mov    r11d,0x8
0x003964b5: xor    ebx,ebx
0x003964b7: lea    r14d,[r15+0x2]
0x003964bb: nop    DWORD PTR [rax+rax*1+0x0]
0x003964c0: mov    DWORD PTR [rip+0x22b3fad],r14d        # 0x14264a474
0x003964c7: lea    eax,[rbx+rcx*1]
0x003964ca: mov    DWORD PTR [rip+0x22b3fa8],eax        # 0x14264a478
0x003964d0: mov    edi,0x10
0x003964d5: cmp    ebx,0x1
0x003964d8: cmovne edi,r11d
0x003964dc: cmp    DWORD PTR [rip+0x2037295],0x0        # 0x1423cd778
0x003964e3: jle    0x1403964f1
0x003964e5: mov    rax,QWORD PTR [rip+0x2037284]        # 0x1423cd770
0x003964ec: test   BYTE PTR [rax],0x1
0x003964ef: jne    0x1403964fb
0x003964f1: test   ebx,ebx
0x003964f3: je     0x1403967f9
0x003964f9: xor    edi,edi
0x003964fb: cmp    r12d,0x7
0x003964ff: ja     0x1403967f9
0x00396505: movsxd rax,r12d
0x00396508: mov    ecx,DWORD PTR [r9+rax*4+0x396a48]
0x00396510: add    rcx,r9
0x00396513: jmp    rcx
0x00396515: xorps  xmm0,xmm0
0x00396518: movups XMMWORD PTR [rbp-0x19],xmm0
0x0039651c: mov    QWORD PTR [rbp-0x9],0x9
0x00396524: mov    QWORD PTR [rbp-0x1],0xf
0x0039652c: movsd  xmm0,QWORD PTR [rip+0x129507c]        # 0x14162b5b0 ; literal='Creatures'
0x00396534: movsd  QWORD PTR [rbp-0x19],xmm0
0x00396539: movzx  eax,BYTE PTR [rip+0x1295078]        # 0x14162b5b8 ; literal='s'
0x00396540: mov    BYTE PTR [rbp-0x11],al
0x00396543: mov    BYTE PTR [rbp-0x10],0x0
0x00396547: mov    DWORD PTR [rsp+0x20],edi
0x0039654b: xor    r9d,r9d
0x0039654e: lea    rdx,[rbp-0x19]
0x00396552: lea    rcx,[rip+0x22b3e97]        # 0x14264a3f0
0x00396559: call   0x140ad9870
0x0039655e: nop
0x0039655f: jmp    0x1403967e7
0x00396564: xorps  xmm0,xmm0
0x00396567: movups XMMWORD PTR [rbp-0x19],xmm0
0x0039656b: mov    QWORD PTR [rbp-0x9],r10
0x0039656f: mov    QWORD PTR [rbp-0x1],0xf
0x00396577: mov    eax,DWORD PTR [rip+0x126ac3b]        # 0x1416011b8 ; literal='Tasks'
0x0039657d: mov    DWORD PTR [rbp-0x19],eax
0x00396580: movzx  eax,BYTE PTR [rip+0x126ac35]        # 0x1416011bc ; literal='s'
0x00396587: mov    BYTE PTR [rbp-0x15],al
0x0039658a: mov    BYTE PTR [rbp-0x14],0x0
0x0039658e: mov    DWORD PTR [rsp+0x20],edi
0x00396592: xor    r9d,r9d
0x00396595: lea    rdx,[rbp-0x19]
0x00396599: lea    rcx,[rip+0x22b3e50]        # 0x14264a3f0
0x003965a0: call   0x140ad9870
0x003965a5: nop
0x003965a6: jmp    0x1403967e7
0x003965ab: xorps  xmm0,xmm0
0x003965ae: movups XMMWORD PTR [rbp-0x19],xmm0
0x003965b2: mov    QWORD PTR [rbp-0x9],0x6
0x003965ba: mov    QWORD PTR [rbp-0x1],0xf
0x003965c2: mov    eax,DWORD PTR [rip+0x1294fdc]        # 0x14162b5a4 ; literal='Places'
0x003965c8: mov    DWORD PTR [rbp-0x19],eax
0x003965cb: movzx  eax,WORD PTR [rip+0x1294fd6]        # 0x14162b5a8 ; literal='es'
0x003965d2: mov    WORD PTR [rbp-0x15],ax
0x003965d6: mov    BYTE PTR [rbp-0x13],0x0
0x003965da: mov    DWORD PTR [rsp+0x20],edi
0x003965de: xor    r9d,r9d
0x003965e1: lea    rdx,[rbp-0x19]
0x003965e5: lea    rcx,[rip+0x22b3e04]        # 0x14264a3f0
0x003965ec: call   0x140ad9870
0x003965f1: nop
0x003965f2: jmp    0x1403967e7
0x003965f7: xorps  xmm0,xmm0
0x003965fa: movups XMMWORD PTR [rbp-0x19],xmm0
0x003965fe: mov    QWORD PTR [rbp-0x9],r10
0x00396602: mov    QWORD PTR [rbp-0x1],0xf
0x0039660a: mov    eax,DWORD PTR [rip+0x1260acc]        # 0x1415f70dc ; literal='Labor'
0x00396610: mov    DWORD PTR [rbp-0x19],eax
0x00396613: movzx  eax,BYTE PTR [rip+0x1260ac6]        # 0x1415f70e0 ; literal='r'
0x0039661a: mov    BYTE PTR [rbp-0x15],al
0x0039661d: mov    BYTE PTR [rbp-0x14],0x0
0x00396621: mov    DWORD PTR [rsp+0x20],edi
0x00396625: xor    r9d,r9d
0x00396628: lea    rdx,[rbp-0x19]
0x0039662c: lea    rcx,[rip+0x22b3dbd]        # 0x14264a3f0
0x00396633: call   0x140ad9870
0x00396638: nop
0x00396639: jmp    0x1403967e7
0x0039663e: xorps  xmm0,xmm0
0x00396641: movups XMMWORD PTR [rbp-0x19],xmm0
0x00396645: mov    QWORD PTR [rbp-0x9],0xb
0x0039664d: mov    QWORD PTR [rbp-0x1],0xf
0x00396655: movsd  xmm0,QWORD PTR [rip+0x126ab43]        # 0x1416011a0 ; literal='Work orders'
0x0039665d: movsd  QWORD PTR [rbp-0x19],xmm0
0x00396662: movzx  eax,WORD PTR [rip+0x126ab3f]        # 0x1416011a8 ; literal='ers'
0x00396669: mov    WORD PTR [rbp-0x11],ax
0x0039666d: movzx  eax,BYTE PTR [rip+0x126ab36]        # 0x1416011aa ; literal='s'
0x00396674: mov    BYTE PTR [rbp-0xf],al
0x00396677: mov    BYTE PTR [rbp-0xe],0x0
0x0039667b: mov    DWORD PTR [rsp+0x20],edi
0x0039667f: xor    r9d,r9d
0x00396682: lea    rdx,[rbp-0x19]
0x00396686: lea    rcx,[rip+0x22b3d63]        # 0x14264a3f0
0x0039668d: call   0x140ad9870
0x00396692: nop
0x00396693: mov    rdx,QWORD PTR [rbp-0x1]
0x00396697: cmp    rdx,0xf
0x0039669b: jbe    0x1403967f0
0x003966a1: inc    rdx
0x003966a4: mov    rcx,QWORD PTR [rbp-0x19]
0x003966a8: cmp    rdx,0x1000
0x003966af: mov    rax,rcx
0x003966b2: jb     0x1403966cd
0x003966b4: add    rdx,0x27
0x003966b8: mov    rcx,QWORD PTR [rcx-0x8]
0x003966bc: sub    rax,rcx
0x003966bf: add    rax,0xfffffffffffffff8
0x003966c3: cmp    rax,0x1f
0x003966c7: ja     0x140396834
0x003966cd: call   0x141539680
0x003966d2: jmp    0x1403967f0
0x003966d7: xorps  xmm0,xmm0
0x003966da: movups XMMWORD PTR [rbp-0x19],xmm0
0x003966de: mov    ecx,0x20
0x003966e3: call   0x1400707d0
0x003966e8: mov    QWORD PTR [rbp-0x19],rax
0x003966ec: mov    QWORD PTR [rbp-0x9],0x19
0x003966f4: mov    QWORD PTR [rbp-0x1],0x1f
0x003966fc: movups xmm0,XMMWORD PTR [rip+0x1274365]        # 0x14160aa68 ; literal='Nobles and administrators'
0x00396703: movups XMMWORD PTR [rax],xmm0
0x00396706: movsd  xmm0,QWORD PTR [rip+0x127436a]        # 0x14160aa78 ; literal='istrators'
0x0039670e: movsd  QWORD PTR [rax+0x10],xmm0
0x00396713: movzx  ecx,BYTE PTR [rip+0x1274366]        # 0x14160aa80 ; literal='s'
0x0039671a: mov    BYTE PTR [rax+0x18],cl
0x0039671d: mov    BYTE PTR [rax+0x19],0x0
0x00396721: mov    DWORD PTR [rsp+0x20],edi
0x00396725: xor    r9d,r9d
0x00396728: lea    rdx,[rbp-0x19]
0x0039672c: lea    rcx,[rip+0x22b3cbd]        # 0x14264a3f0
0x00396733: call   0x140ad9870
0x00396738: nop
0x00396739: jmp    0x140396693
0x0039673e: xorps  xmm0,xmm0
0x00396741: movups XMMWORD PTR [rbp-0x19],xmm0
0x00396745: mov    QWORD PTR [rbp-0x9],0x7
0x0039674d: mov    QWORD PTR [rbp-0x1],0xf
0x00396755: mov    rax,QWORD PTR [rip+0x1294e74]        # 0x14162b5d0 ; literal='Objects'
0x0039675c: mov    DWORD PTR [rbp-0x19],eax
0x0039675f: movzx  eax,WORD PTR [rip+0x1294e6e]        # 0x14162b5d4 ; literal='cts'
0x00396766: mov    WORD PTR [rbp-0x15],ax
0x0039676a: movzx  eax,BYTE PTR [rip+0x1294e65]        # 0x14162b5d6 ; literal='s'
0x00396771: mov    BYTE PTR [rbp-0x13],al
0x00396774: mov    BYTE PTR [rbp-0x12],0x0
0x00396778: mov    DWORD PTR [rsp+0x20],edi
0x0039677c: xor    r9d,r9d
0x0039677f: lea    rdx,[rbp-0x19]
0x00396783: lea    rcx,[rip+0x22b3c66]        # 0x14264a3f0
0x0039678a: call   0x140ad9870
0x0039678f: nop
0x00396790: jmp    0x140396693
0x00396795: xorps  xmm0,xmm0
0x00396798: movups XMMWORD PTR [rbp-0x19],xmm0
0x0039679c: mov    QWORD PTR [rbp-0x9],0x7
0x003967a4: mov    QWORD PTR [rbp-0x1],0xf
0x003967ac: mov    rax,QWORD PTR [rip+0x12745a5]        # 0x14160ad58 ; literal='Justice'
0x003967b3: mov    DWORD PTR [rbp-0x19],eax
0x003967b6: movzx  eax,WORD PTR [rip+0x127459f]        # 0x14160ad5c ; literal='ice'
0x003967bd: mov    WORD PTR [rbp-0x15],ax
0x003967c1: movzx  eax,BYTE PTR [rip+0x1274596]        # 0x14160ad5e ; literal='e'
0x003967c8: mov    BYTE PTR [rbp-0x13],al
0x003967cb: mov    BYTE PTR [rbp-0x12],0x0
0x003967cf: mov    DWORD PTR [rsp+0x20],edi
0x003967d3: xor    r9d,r9d
0x003967d6: lea    rdx,[rbp-0x19]
0x003967da: lea    rcx,[rip+0x22b3c0f]        # 0x14264a3f0
0x003967e1: call   0x140ad9870
0x003967e6: nop
0x003967e7: lea    rcx,[rbp-0x19]
0x003967eb: call   0x14006f850
0x003967f0: mov    r11d,0x8
0x003967f6: mov    ecx,DWORD PTR [rbp-0x49]
0x003967f9: inc    ebx
0x003967fb: cmp    ebx,0x2
0x003967fe: lea    r9,[rip+0xffffffffffc697fb]        # 0x140000000
0x00396805: mov    r10d,0x5
0x0039680b: jl     0x1403964c0
0x00396811: inc    r12d
0x00396814: lea    r9,[rip+0xffffffffffc697e5]        # 0x140000000
0x0039681b: cmp    r12d,0x8
0x0039681f: jge    0x14039683b
0x00396821: mov    r13d,DWORD PTR [rbp-0x35]
0x00396825: mov    ecx,DWORD PTR [rbp-0x31]
0x00396828: mov    edx,DWORD PTR [rbp-0x2d]
0x0039682b: mov    r8,QWORD PTR [rbp-0x21]
0x0039682f: jmp    0x140396184
0x00396834: call   QWORD PTR [rip+0x124f2ee]        # 0x1415e5b28
0x0039683a: int3
0x0039683b: mov    r15d,DWORD PTR [rbp-0x39]
0x0039683f: mov    r12d,DWORD PTR [rbp-0x29]
0x00396843: mov    rdx,QWORD PTR [rbp-0x21]
0x00396847: movsxd rax,DWORD PTR [rdx+0x1bc]
0x0039684e: cmp    eax,0x7
0x00396851: ja     0x1403969e6
0x00396857: mov    ecx,DWORD PTR [r9+rax*4+0x396a68]
0x0039685f: add    rcx,r9
0x00396862: jmp    rcx
0x00396864: lea    rsi,[rdx+0x1c0]
0x0039686b: mov    dl,0xd
0x0039686d: mov    rcx,rsi
0x00396870: call   0x141410380
0x00396875: mov    DWORD PTR [rsi+0xb0],r11d
0x0039687c: mov    DWORD PTR [rsi+0xa8],r10d
0x00396883: mov    DWORD PTR [rsi+0xac],0xffffffe0
0x0039688d: mov    DWORD PTR [rsi+0xa4],0xfffffffc
0x00396897: call   0x1414101a0
0x0039689c: mov    ecx,DWORD PTR [rsi+0x18]
0x0039689f: sub    ecx,DWORD PTR [rsi+0x10]
0x003968a2: inc    ecx
0x003968a4: mov    eax,DWORD PTR [rsi+0xc4]
0x003968aa: cmp    ecx,eax
0x003968ac: cmovle ecx,eax
0x003968af: cmp    ecx,0x76
0x003968b2: jl     0x1403968bb
0x003968b4: add    DWORD PTR [rsi+0xb0],0xfffffffe
0x003968bb: mov    rcx,rsi
0x003968be: call   0x1414101a0
0x003968c3: mov    rbx,QWORD PTR [rsi+0x160]
0x003968ca: mov    rdi,QWORD PTR [rsi+0x168]
0x003968d1: cmp    rbx,rdi
0x003968d4: je     0x1403968e8
0x003968d6: mov    rcx,QWORD PTR [rbx]
0x003968d9: mov    rax,QWORD PTR [rcx]
0x003968dc: call   QWORD PTR [rax+0x20]
0x003968df: add    rbx,0x10
0x003968e3: cmp    rbx,rdi
0x003968e6: jne    0x1403968d6
0x003968e8: mov    edx,r15d
0x003968eb: mov    rcx,rsi
0x003968ee: call   0x141412fb0
0x003968f3: mov    rbx,QWORD PTR [rsi+0x160]
0x003968fa: mov    rdi,QWORD PTR [rsi+0x168]
0x00396901: cmp    rbx,rdi
0x00396904: je     0x1403969e6
0x0039690a: nop    WORD PTR [rax+rax*1+0x0]
0x00396910: mov    rcx,QWORD PTR [rbx]
0x00396913: movzx  eax,BYTE PTR [rcx+0xa0]
0x0039691a: and    al,0x3
0x0039691c: cmp    al,0x3
0x0039691e: jne    0x140396929
0x00396920: mov    rax,QWORD PTR [rcx]
0x00396923: mov    edx,r15d
0x00396926: call   QWORD PTR [rax+0x18]
0x00396929: add    rbx,0x10
0x0039692d: cmp    rbx,rdi
0x00396930: jne    0x140396910
0x00396932: jmp    0x1403969e6
0x00396937: lea    rcx,[rdx+0x380]
0x0039693e: mov    r9d,DWORD PTR [rbp-0x45]
0x00396942: mov    r8d,r12d
0x00396945: mov    edx,r15d
0x00396948: call   0x140397c90
0x0039694d: jmp    0x1403969e6
0x00396952: lea    rcx,[rdx+0x3a0]
0x00396959: mov    r9d,DWORD PTR [rbp-0x45]
0x0039695d: mov    r8d,r12d
0x00396960: mov    edx,r15d
0x00396963: call   0x14039ac20
0x00396968: jmp    0x1403969e6
0x0039696a: lea    rbx,[rdx+0x458]
0x00396971: mov    rax,QWORD PTR [rbx]
0x00396974: mov    rcx,rbx
0x00396977: call   QWORD PTR [rax+0x20]
0x0039697a: mov    rax,QWORD PTR [rbx]
0x0039697d: mov    edx,r15d
0x00396980: mov    rcx,rbx
0x00396983: call   QWORD PTR [rax+0x18]
0x00396986: jmp    0x1403969e6
0x00396988: lea    rcx,[rdx+0x610]
0x0039698f: mov    r9d,DWORD PTR [rbp-0x45]
0x00396993: mov    r8d,r12d
0x00396996: mov    edx,r15d
0x00396999: call   0x140392f00
0x0039699e: jmp    0x1403969e6
0x003969a0: lea    rcx,[rdx+0x860]
0x003969a7: mov    r9d,DWORD PTR [rbp-0x45]
0x003969ab: mov    r8d,r12d
0x003969ae: mov    edx,r15d
0x003969b1: call   0x1404257d0
0x003969b6: jmp    0x1403969e6
0x003969b8: lea    rcx,[rdx+0x990]
0x003969bf: mov    r9d,DWORD PTR [rbp-0x45]
0x003969c3: mov    r8d,r12d
0x003969c6: mov    edx,r15d
0x003969c9: call   0x14039faf0
0x003969ce: jmp    0x1403969e6
0x003969d0: lea    rcx,[rdx+0xa10]
0x003969d7: mov    r9d,DWORD PTR [rbp-0x45]
0x003969db: mov    r8d,r12d
0x003969de: mov    edx,r15d
0x003969e1: call   0x1404769d0
0x003969e6: mov    rcx,QWORD PTR [rbp+0x7]
0x003969ea: xor    rcx,rsp
0x003969ed: call   0x141539660
0x003969f2: add    rsp,0x98
0x003969f9: pop    r15
0x003969fb: pop    r14
0x003969fd: pop    r13
0x003969ff: pop    r12
0x00396a01: pop    rdi
0x00396a02: pop    rsi
0x00396a03: pop    rbx
0x00396a04: pop    rbp
0x00396a05: ret
0x00396a06: xchg   ax,ax
0x00396a08: adc    al,0x62
0x00396a0a: cmp    DWORD PTR [rax],eax
0x00396a0c: (bad)
0x00396a12: cmp    DWORD PTR [rax],eax
0x00396a14: (bad)
0x00396a19: (bad)
0x00396a1e: cmp    DWORD PTR [rax],eax
0x00396a20: mov    al,0x62
0x00396a22: cmp    DWORD PTR [rax],eax
0x00396a24: retf   0x3962
0x00396a27: add    dl,bh
0x00396a29: (bad)
0x00396a2e: cmp    DWORD PTR [rax],eax
0x00396a30: (bad)
0x00396a31: movsxd edi,DWORD PTR [rcx]
0x00396a33: add    BYTE PTR [rax],bl
0x00396a35: movsxd edi,DWORD PTR [rcx]
0x00396a37: add    BYTE PTR [rdx],ah
0x00396a39: movsxd edi,DWORD PTR [rcx]
0x00396a3b: add    BYTE PTR [rbx+riz*2],ch
0x00396a3e: cmp    DWORD PTR [rax],eax
0x00396a40: ss movsxd edi,DWORD PTR [rcx]
0x00396a43: add    BYTE PTR [rax+0x63],al
0x00396a46: cmp    DWORD PTR [rax],eax
0x00396a48: adc    eax,0x64003965
0x00396a4d: cmp    DWORD PTR gs:[rax],eax
0x00396a50: stos   DWORD PTR [rdi],eax
0x00396a51: cmp    DWORD PTR gs:[rax],eax
0x00396a54: mul    DWORD PTR [rbp+0x39]
0x00396a57: add    BYTE PTR [rsi],bh
0x00396a59: cmp    WORD PTR [rax],ax
0x00396a5c: xlat   BYTE PTR [rbx]
0x00396a5d: cmp    WORD PTR [rax],ax
0x00396a60: ds cmp DWORD PTR [eax],eax
0x00396a64: xchg   ebp,eax
0x00396a65: cmp    DWORD PTR [eax],eax
0x00396a68: fs push 0x69370039
0x00396a6e: cmp    DWORD PTR [rax],eax
0x00396a70: push   rdx
0x00396a71: imul   edi,DWORD PTR [rcx],0x39696a00
0x00396a77: add    BYTE PTR [rax-0x5fffc697],cl
0x00396a7d: imul   edi,DWORD PTR [rcx],0x3969b800
0x00396a83: add    al,dl
0x00396a85: .byte 0x69
0x00396a86: cmp    DWORD PTR [rax],eax
