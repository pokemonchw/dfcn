140a3a2e0: mov    QWORD PTR [rsp+0x8],rbx
140a3a2e5: mov    DWORD PTR [rsp+0x20],r9d
140a3a2ea: mov    QWORD PTR [rsp+0x18],r8
140a3a2ef: mov    QWORD PTR [rsp+0x10],rdx
140a3a2f4: push   rbp
140a3a2f5: push   rsi
140a3a2f6: push   rdi
140a3a2f7: push   r12
140a3a2f9: push   r13
140a3a2fb: push   r14
140a3a2fd: push   r15
140a3a2ff: lea    rbp,[rsp-0x27]
140a3a304: sub    rsp,0x90
140a3a30b: mov    r12,rdx
140a3a30e: mov    r15,rcx
140a3a311: cmp    DWORD PTR [rdx+0x4],0x28
140a3a315: jge    0x140a3bd85
140a3a31b: cmp    QWORD PTR [rcx+0xd80],0x0
140a3a323: jne    0x140a3bd85
140a3a329: call   0x140eb68b0
140a3a32e: mov    r8d,eax
140a3a331: mov    eax,0x3
140a3a336: mul    r8d
140a3a339: mov    ecx,r8d
140a3a33c: sub    ecx,edx
140a3a33e: shr    ecx,1
140a3a340: add    ecx,edx
140a3a342: shr    ecx,0x1e
140a3a345: imul   ecx,ecx,0x7fffffff
140a3a34b: sub    r8d,ecx
140a3a34e: xor    r14d,r14d
140a3a351: mov    ecx,0xffffffff
140a3a356: mov    DWORD PTR [rbp+0x7f],ecx
140a3a359: cmp    r8d,0x28f5c29
140a3a360: jae    0x140a3a3db
140a3a362: mov    rdi,QWORD PTR [r15+0x5f8]
140a3a369: mov    eax,DWORD PTR [rdi+0xe0]
140a3a36f: shr    eax,1
140a3a371: test   al,0x1
140a3a373: je     0x140a3a3db
140a3a375: mov    QWORD PTR [rbp-0x9],r14
140a3a379: mov    DWORD PTR [rbp-0x1],ecx
140a3a37c: mov    DWORD PTR [rbp-0x11],0x2
140a3a383: mov    rbx,QWORD PTR [rdi+0x30]
140a3a387: mov    rdi,QWORD PTR [rdi+0x38]
140a3a38b: nop    DWORD PTR [rax+rax*1+0x0]
140a3a390: cmp    rbx,rdi
140a3a393: jae    0x140a3a3db
140a3a395: mov    rdx,QWORD PTR [rbx]
140a3a398: cmp    DWORD PTR [rdx],0x2
140a3a39b: jne    0x140a3a3b2
140a3a39d: add    rdx,0x8
140a3a3a1: lea    r8,[rbp-0x11]
140a3a3a5: mov    rcx,r15
140a3a3a8: call   0x1413dec20
140a3a3ad: cmp    eax,0x1
140a3a3b0: je     0x140a3a3b8
140a3a3b2: add    rbx,0x8
140a3a3b6: jmp    0x140a3a390
140a3a3b8: mov    rax,QWORD PTR [rbx]
140a3a3bb: test   rax,rax
140a3a3be: je     0x140a3a3db
140a3a3c0: mov    DWORD PTR [r12],0x4d
140a3a3c8: mov    DWORD PTR [r12+0x4],0x28
140a3a3d1: mov    QWORD PTR [r12+0x58],rax
140a3a3d6: jmp    0x140a3bd85
140a3a3db: movsx  rcx,WORD PTR [r15+0x12c]
140a3a3e3: movsx  rax,WORD PTR [r15+0xa4]
140a3a3eb: mov    rdi,QWORD PTR [rip+0x1ab267e]        # 0x1424eca70
140a3a3f2: mov    r9,QWORD PTR [rip+0x1ab266f]        # 0x1424eca68
140a3a3f9: test   ax,ax
140a3a3fc: js     0x140a3a71e
140a3a402: mov    rdx,rax
140a3a405: mov    rax,rdi
140a3a408: sub    rax,r9
140a3a40b: sar    rax,0x3
140a3a40f: cmp    rdx,rax
140a3a412: jae    0x140a3a71e
140a3a418: test   cx,cx
140a3a41b: js     0x140a3a71e
140a3a421: mov    rax,QWORD PTR [r9+rdx*8]
140a3a425: mov    rdx,QWORD PTR [rax+0x178]
140a3a42c: mov    rax,QWORD PTR [rax+0x180]
140a3a433: sub    rax,rdx
140a3a436: sar    rax,0x3
140a3a43a: cmp    rcx,rax
140a3a43d: jae    0x140a3a71e
140a3a443: mov    rbx,QWORD PTR [rdx+rcx*8]
140a3a447: mov    QWORD PTR [rbp+0x7],rbx
140a3a44b: cmp    DWORD PTR [rbx+0x6b0],0x14
140a3a452: jle    0x140a3a465
140a3a454: mov    rax,QWORD PTR [rbx+0x6a8]
140a3a45b: test   BYTE PTR [rax+0x14],0x20
140a3a45f: je     0x140a3a465
140a3a461: mov    al,0x1
140a3a463: jmp    0x140a3a467
140a3a465: xor    al,al
140a3a467: test   al,al
140a3a469: je     0x140a3a71e
140a3a46f: test   rbx,rbx
140a3a472: je     0x140a3a71e
140a3a478: mov    r10,QWORD PTR [rip+0x1997109]        # 0x1423d1588
140a3a47f: mov    rdx,QWORD PTR [rip+0x19970fa]        # 0x1423d1580
140a3a486: sub    r10,rdx
140a3a489: sar    r10,0x3
140a3a48d: sub    r10d,0x1
140a3a491: mov    QWORD PTR [rbp+0xf],r10
140a3a495: js     0x140a3a71e
140a3a49b: movsxd rax,r10d
140a3a49e: lea    r11,[rdx+rax*8]
140a3a4a2: mov    QWORD PTR [rbp+0x17],r11
140a3a4a6: data16 nop WORD PTR [rax+rax*1+0x0]
140a3a4b0: mov    rcx,QWORD PTR [r11]
140a3a4b3: cmp    BYTE PTR [rcx+0xa],0x0
140a3a4b7: je     0x140a3a6f8
140a3a4bd: movzx  eax,WORD PTR [r15+0xa8]
140a3a4c5: cmp    WORD PTR [rcx+0x4],ax
140a3a4c9: jne    0x140a3a6f8
140a3a4cf: movzx  eax,WORD PTR [r15+0xaa]
140a3a4d7: cmp    WORD PTR [rcx+0x6],ax
140a3a4db: jne    0x140a3a6f8
140a3a4e1: movzx  eax,WORD PTR [r15+0xac]
140a3a4e9: cmp    WORD PTR [rcx+0x8],ax
140a3a4ed: jne    0x140a3a6f8
140a3a4f3: movsx  rdx,WORD PTR [rcx]
140a3a4f7: test   dx,dx
140a3a4fa: js     0x140a3a53a
140a3a4fc: mov    rax,rdi
140a3a4ff: sub    rax,r9
140a3a502: sar    rax,0x3
140a3a506: cmp    rdx,rax
140a3a509: jae    0x140a3a53a
140a3a50b: mov    rax,QWORD PTR [r9+rdx*8]
140a3a50f: cmp    DWORD PTR [rax+0x1b0],0x0
140a3a516: jle    0x140a3a528
140a3a518: mov    rax,QWORD PTR [rax+0x1a8]
140a3a51f: cmp    BYTE PTR [rax],0x0
140a3a522: jge    0x140a3a528
140a3a524: mov    al,0x1
140a3a526: jmp    0x140a3a52a
140a3a528: xor    al,al
140a3a52a: test   al,al
140a3a52c: jne    0x140a3a6f8
140a3a532: mov    r8,rcx
140a3a535: mov    rcx,rdx
140a3a538: jmp    0x140a3a55c
140a3a53a: mov    r8,rcx
140a3a53d: test   dx,dx
140a3a540: js     0x140a3a6f8
140a3a546: mov    rcx,rdx
140a3a549: mov    rax,rdi
140a3a54c: sub    rax,r9
140a3a54f: sar    rax,0x3
140a3a553: cmp    rdx,rax
140a3a556: jae    0x140a3a6f8
140a3a55c: mov    r14,QWORD PTR [r9+rcx*8]
140a3a560: test   r14,r14
140a3a563: je     0x140a3a6f8
140a3a569: movsx  rcx,WORD PTR [r8+0x2]
140a3a56e: movzx  edx,WORD PTR [r8]
140a3a572: mov    rax,rdi
140a3a575: sub    rax,r9
140a3a578: sar    rax,0x3
140a3a57c: cmp    rdx,rax
140a3a57f: jae    0x140a3a6f8
140a3a585: test   cx,cx
140a3a588: js     0x140a3a6f8
140a3a58e: mov    rax,QWORD PTR [r9+rdx*8]
140a3a592: mov    rdx,QWORD PTR [rax+0x178]
140a3a599: mov    rax,QWORD PTR [rax+0x180]
140a3a5a0: sub    rax,rdx
140a3a5a3: sar    rax,0x3
140a3a5a7: cmp    rcx,rax
140a3a5aa: jae    0x140a3a6f8
140a3a5b0: mov    r13,QWORD PTR [rdx+rcx*8]
140a3a5b4: test   r13,r13
140a3a5b7: je     0x140a3a6f8
140a3a5bd: mov    rdi,QWORD PTR [rbx+0x3ef8]
140a3a5c4: mov    rax,QWORD PTR [rbx+0x3f00]
140a3a5cb: sub    rax,rdi
140a3a5ce: sar    rax,0x3
140a3a5d2: sub    eax,0x1
140a3a5d5: movsxd rbx,eax
140a3a5d8: js     0x140a3a606
140a3a5da: nop    WORD PTR [rax+rax*1+0x0]
140a3a5e0: mov    rdx,QWORD PTR [rdi+rbx*8]
140a3a5e4: lea    rcx,[r13+0x3eb0]
140a3a5eb: call   0x1406b8af0
140a3a5f0: test   al,al
140a3a5f2: jne    0x140a3a79e
140a3a5f8: sub    rbx,0x1
140a3a5fc: jns    0x140a3a5e0
140a3a5fe: mov    r10,QWORD PTR [rbp+0xf]
140a3a602: mov    r11,QWORD PTR [rbp+0x17]
140a3a606: mov    rbx,QWORD PTR [rbp+0x7]
140a3a60a: mov    rcx,QWORD PTR [rbx+0x3f10]
140a3a611: mov    QWORD PTR [rbp+0x1f],rcx
140a3a615: mov    rax,QWORD PTR [rbx+0x3f18]
140a3a61c: sub    rax,rcx
140a3a61f: sar    rax,0x3
140a3a623: sub    eax,0x1
140a3a626: js     0x140a3a6f1
140a3a62c: mov    r9,QWORD PTR [r14+0x18]
140a3a630: mov    QWORD PTR [rbp-0x19],r9
140a3a634: movsxd r12,eax
140a3a637: mov    r8,QWORD PTR [r14+0x10]
140a3a63b: mov    QWORD PTR [rbp+0x77],r8
140a3a63f: nop
140a3a640: mov    rdx,QWORD PTR [rcx+r12*8]
140a3a644: mov    rax,QWORD PTR [rdx+0x10]
140a3a648: cmp    QWORD PTR [rdx+0x18],0xf
140a3a64d: jbe    0x140a3a652
140a3a64f: mov    rdx,QWORD PTR [rdx]
140a3a652: mov    rcx,r14
140a3a655: cmp    r9,0xf
140a3a659: jbe    0x140a3a65e
140a3a65b: mov    rcx,QWORD PTR [r14]
140a3a65e: cmp    r8,rax
140a3a661: jne    0x140a3a6db
140a3a663: call   0x14153ae14
140a3a668: test   eax,eax
140a3a66a: jne    0x140a3a6d3
140a3a66c: mov    rax,QWORD PTR [rbx+0x3f28]
140a3a673: mov    rbx,QWORD PTR [rax+r12*8]
140a3a677: mov    rdi,QWORD PTR [rbx+0x10]
140a3a67b: mov    rdx,rbx
140a3a67e: mov    rsi,QWORD PTR [rbx+0x18]
140a3a682: cmp    rsi,0xf
140a3a686: jbe    0x140a3a68b
140a3a688: mov    rdx,QWORD PTR [rbx]
140a3a68b: mov    r8,QWORD PTR [r13+0x10]
140a3a68f: mov    rcx,r13
140a3a692: cmp    QWORD PTR [r13+0x18],0xf
140a3a697: jbe    0x140a3a69d
140a3a699: mov    rcx,QWORD PTR [r13+0x0]
140a3a69d: cmp    r8,rdi
140a3a6a0: jne    0x140a3a6af
140a3a6a2: call   0x14153ae14
140a3a6a7: test   eax,eax
140a3a6a9: je     0x140a3a79e
140a3a6af: cmp    rsi,0xf
140a3a6b3: jbe    0x140a3a6b8
140a3a6b5: mov    rbx,QWORD PTR [rbx]
140a3a6b8: cmp    rdi,0x3
140a3a6bc: jne    0x140a3a6cf
140a3a6be: cmp    WORD PTR [rbx],0x4c41
140a3a6c3: jne    0x140a3a6cf
140a3a6c5: cmp    BYTE PTR [rbx+0x2],0x4c
140a3a6c9: je     0x140a3a79e
140a3a6cf: mov    rbx,QWORD PTR [rbp+0x7]
140a3a6d3: mov    r9,QWORD PTR [rbp-0x19]
140a3a6d7: mov    r8,QWORD PTR [rbp+0x77]
140a3a6db: sub    r12,0x1
140a3a6df: mov    rcx,QWORD PTR [rbp+0x1f]
140a3a6e3: jns    0x140a3a640
140a3a6e9: mov    r10,QWORD PTR [rbp+0xf]
140a3a6ed: mov    r11,QWORD PTR [rbp+0x17]
140a3a6f1: mov    rdi,QWORD PTR [rip+0x1ab2378]        # 0x1424eca70
140a3a6f8: dec    r10d
140a3a6fb: mov    QWORD PTR [rbp+0xf],r10
140a3a6ff: sub    r11,0x8
140a3a703: mov    QWORD PTR [rbp+0x17],r11
140a3a707: mov    r9,QWORD PTR [rip+0x1ab235a]        # 0x1424eca68
140a3a70e: test   r10d,r10d
140a3a711: jns    0x140a3a4b0
140a3a717: mov    r12,QWORD PTR [rbp+0x6f]
140a3a71b: xor    r14d,r14d
140a3a71e: movsx  rcx,WORD PTR [r15+0x12c]
140a3a726: movsx  rax,WORD PTR [r15+0xa4]
140a3a72e: mov    r13d,0x1
140a3a734: test   ax,ax
140a3a737: js     0x140a3b4c3
140a3a73d: mov    rdx,rax
140a3a740: mov    rax,rdi
140a3a743: sub    rax,r9
140a3a746: sar    rax,0x3
140a3a74a: cmp    rdx,rax
140a3a74d: jae    0x140a3b4c3
140a3a753: test   cx,cx
140a3a756: js     0x140a3b4c3
140a3a75c: mov    rax,QWORD PTR [r9+rdx*8]
140a3a760: mov    rdx,QWORD PTR [rax+0x178]
140a3a767: mov    rax,QWORD PTR [rax+0x180]
140a3a76e: sub    rax,rdx
140a3a771: sar    rax,0x3
140a3a775: cmp    rcx,rax
140a3a778: jae    0x140a3b4c3
140a3a77e: mov    rax,QWORD PTR [rdx+rcx*8]
140a3a782: cmp    DWORD PTR [rax+0x6b0],0x14
140a3a789: jle    0x140a3a7bb
140a3a78b: mov    rax,QWORD PTR [rax+0x6a8]
140a3a792: test   BYTE PTR [rax+0x14],0x10
140a3a796: je     0x140a3a7bb
140a3a798: movzx  eax,r13b
140a3a79c: jmp    0x140a3a7bd
140a3a79e: mov    rcx,QWORD PTR [rbp+0x6f]
140a3a7a2: mov    DWORD PTR [rcx],0x4e
140a3a7a8: mov    DWORD PTR [rcx+0x4],0x28
140a3a7af: mov    rax,QWORD PTR [rbp+0xf]
140a3a7b3: mov    DWORD PTR [rcx+0x38],eax
140a3a7b6: jmp    0x140a3bd85
140a3a7bb: xor    al,al
140a3a7bd: test   al,al
140a3a7bf: je     0x140a3b4c3
140a3a7c5: mov    rcx,r15
140a3a7c8: call   0x1407e0610
140a3a7cd: test   al,al
140a3a7cf: je     0x140a3b4c3
140a3a7d5: mov    r10d,DWORD PTR [r15+0x3bc]
140a3a7dc: cmp    r10d,0xffffffff
140a3a7e0: je     0x140a3a843
140a3a7e2: mov    r9,QWORD PTR [rip+0x19aa8cf]        # 0x1423e50b8
140a3a7e9: sub    r9,QWORD PTR [rip+0x19aa8c0]        # 0x1423e50b0
140a3a7f0: sar    r9,0x3
140a3a7f4: test   r9d,r9d
140a3a7f7: je     0x140a3a843
140a3a7f9: sub    r9d,r13d
140a3a7fc: mov    r8d,r14d
140a3a7ff: js     0x140a3a843
140a3a801: nop    DWORD PTR [rax+0x0]
140a3a805: data16 data16 nop WORD PTR [rax+rax*1+0x0]
140a3a810: lea    edx,[r8+r9*1]
140a3a814: sar    edx,1
140a3a816: movsxd rcx,edx
140a3a819: mov    rax,QWORD PTR [rip+0x19aa890]        # 0x1423e50b0
140a3a820: mov    rsi,QWORD PTR [rax+rcx*8]
140a3a824: cmp    DWORD PTR [rsi+0x130],r10d
140a3a82b: je     0x140a3a846
140a3a82d: lea    eax,[rdx+0x1]
140a3a830: cmovle r8d,eax
140a3a834: lea    eax,[rdx-0x1]
140a3a837: cmovle eax,r9d
140a3a83b: mov    r9d,eax
140a3a83e: cmp    r8d,eax
140a3a841: jle    0x140a3a810
140a3a843: mov    rsi,r14
140a3a846: mov    rax,QWORD PTR [r15+0x408]
140a3a84d: mov    rcx,QWORD PTR [r15+0x410]
140a3a854: cmp    rax,rcx
140a3a857: jae    0x140a3aa1d
140a3a85d: mov    rdx,QWORD PTR [rax]
140a3a860: cmp    WORD PTR [rdx+0x8],0x0
140a3a865: je     0x140a3a86d
140a3a867: add    rax,0x8
140a3a86b: jmp    0x140a3a854
140a3a86d: cmp    QWORD PTR [rdx],0x0
140a3a871: je     0x140a3aa1d
140a3a877: movsx  rcx,WORD PTR [r15+0x12c]
140a3a87f: movsx  rax,WORD PTR [r15+0xa4]
140a3a887: mov    rbx,QWORD PTR [rip+0x1ab21e2]        # 0x1424eca70
140a3a88e: mov    r11,QWORD PTR [rip+0x1ab21d3]        # 0x1424eca68
140a3a895: test   ax,ax
140a3a898: js     0x140a3a9ef
140a3a89e: mov    rdx,rax
140a3a8a1: mov    rax,rbx
140a3a8a4: sub    rax,r11
140a3a8a7: sar    rax,0x3
140a3a8ab: cmp    rdx,rax
140a3a8ae: jae    0x140a3a9ef
140a3a8b4: test   cx,cx
140a3a8b7: js     0x140a3a9ef
140a3a8bd: mov    rax,QWORD PTR [r11+rdx*8]
140a3a8c1: mov    rdx,QWORD PTR [rax+0x178]
140a3a8c8: mov    rax,QWORD PTR [rax+0x180]
140a3a8cf: sub    rax,rdx
140a3a8d2: sar    rax,0x3
140a3a8d6: cmp    rcx,rax
140a3a8d9: jae    0x140a3a9ef
140a3a8df: mov    rax,QWORD PTR [rdx+rcx*8]
140a3a8e3: cmp    DWORD PTR [rax+0x6b0],0x13
140a3a8ea: jle    0x140a3a8ff
140a3a8ec: mov    rax,QWORD PTR [rax+0x6a8]
140a3a8f3: test   BYTE PTR [rax+0x13],0x2
140a3a8f7: je     0x140a3a8ff
140a3a8f9: movzx  eax,r13b
140a3a8fd: jmp    0x140a3a901
140a3a8ff: xor    al,al
140a3a901: test   al,al
140a3a903: je     0x140a3a9ef
140a3a909: xor    bl,bl
140a3a90b: test   rsi,rsi
140a3a90e: je     0x140a3a99e
140a3a914: mov    QWORD PTR [r15+0x3b0],rsi
140a3a91b: mov    DWORD PTR [r15+0xbc],0x2
140a3a926: mov    WORD PTR [r15+0x3b8],r14w
140a3a92e: movzx  edx,WORD PTR [rsi+0xaa]
140a3a935: sub    dx,WORD PTR [r15+0xaa]
140a3a93d: movzx  eax,WORD PTR [rsi+0xa8]
140a3a944: sub    ax,WORD PTR [r15+0xa8]
140a3a94c: movsx  ecx,ax
140a3a94f: movsx  eax,dx
140a3a952: imul   ecx,ecx
140a3a955: imul   eax,eax
140a3a958: add    eax,ecx
140a3a95a: movd   xmm1,eax
140a3a95e: cvtdq2ps xmm1,xmm1
140a3a961: xorps  xmm0,xmm0
140a3a964: ucomiss xmm0,xmm1
140a3a967: ja     0x140a3a972
140a3a969: xorps  xmm0,xmm0
140a3a96c: sqrtss xmm0,xmm1
140a3a970: jmp    0x140a3a97a
140a3a972: movaps xmm0,xmm1
140a3a975: call   0x14153ae80
140a3a97a: cvttss2si eax,xmm0
140a3a97e: cmp    ax,r13w
140a3a982: jg     0x140a3a99a
140a3a984: movzx  ebx,bl
140a3a987: movzx  eax,WORD PTR [r15+0xac]
140a3a98f: cmp    WORD PTR [rsi+0xac],ax
140a3a996: cmove  ebx,r13d
140a3a99a: test   bl,bl
140a3a99c: je     0x140a3a9e1
140a3a99e: mov    rax,QWORD PTR [r15+0x408]
140a3a9a5: mov    rcx,QWORD PTR [r15+0x410]
140a3a9ac: nop    DWORD PTR [rax+0x0]
140a3a9b0: cmp    rax,rcx
140a3a9b3: jae    0x140a3a9ca
140a3a9b5: mov    rdx,QWORD PTR [rax]
140a3a9b8: cmp    WORD PTR [rdx+0x8],0x0
140a3a9bd: je     0x140a3a9c5
140a3a9bf: add    rax,0x8
140a3a9c3: jmp    0x140a3a9b0
140a3a9c5: mov    rdx,QWORD PTR [rdx]
140a3a9c8: jmp    0x140a3a9cd
140a3a9ca: mov    rdx,r14
140a3a9cd: mov    BYTE PTR [rsp+0x20],r13b
140a3a9d2: xor    r9d,r9d
140a3a9d5: movzx  r8d,r13b
140a3a9d9: mov    rcx,r15
140a3a9dc: call   0x141329bf0
140a3a9e1: mov    rbx,QWORD PTR [rip+0x1ab2088]        # 0x1424eca70
140a3a9e8: mov    r11,QWORD PTR [rip+0x1ab2079]        # 0x1424eca68
140a3a9ef: mov    rax,QWORD PTR [r15+0x408]
140a3a9f6: mov    rcx,QWORD PTR [r15+0x410]
140a3a9fd: nop    DWORD PTR [rax]
140a3aa00: cmp    rax,rcx
140a3aa03: jae    0x140a3aaba
140a3aa09: mov    rdx,QWORD PTR [rax]
140a3aa0c: cmp    WORD PTR [rdx+0x8],0x0
140a3aa11: je     0x140a3aab0
140a3aa17: add    rax,0x8
140a3aa1b: jmp    0x140a3aa00
140a3aa1d: mov    rbx,QWORD PTR [rip+0x1996b64]        # 0x1423d1588
140a3aa24: sub    rbx,QWORD PTR [rip+0x1996b55]        # 0x1423d1580
140a3aa2b: sar    rbx,0x3
140a3aa2f: sub    ebx,r13d
140a3aa32: js     0x140a3a9e1
140a3aa34: movsxd rdi,ebx
140a3aa37: nop    WORD PTR [rax+rax*1+0x0]
140a3aa40: mov    rax,QWORD PTR [rip+0x1996b39]        # 0x1423d1580
140a3aa47: mov    rcx,QWORD PTR [rax+rdi*8]
140a3aa4b: cmp    BYTE PTR [rcx+0xa],0x0
140a3aa4f: je     0x140a3aa84
140a3aa51: movzx  eax,WORD PTR [r15+0xa8]
140a3aa59: cmp    WORD PTR [rcx+0x4],ax
140a3aa5d: jne    0x140a3aa84
140a3aa5f: movzx  eax,WORD PTR [r15+0xaa]
140a3aa67: cmp    WORD PTR [rcx+0x6],ax
140a3aa6b: jne    0x140a3aa84
140a3aa6d: movzx  eax,WORD PTR [r15+0xac]
140a3aa75: cmp    WORD PTR [rcx+0x8],ax
140a3aa79: jne    0x140a3aa84
140a3aa7b: call   0x140a45470
140a3aa80: test   al,al
140a3aa82: jne    0x140a3aa90
140a3aa84: dec    ebx
140a3aa86: sub    rdi,r13
140a3aa89: jns    0x140a3aa40
140a3aa8b: jmp    0x140a3a9e1
140a3aa90: mov    DWORD PTR [r12],0x4f
140a3aa98: mov    DWORD PTR [r12+0x4],0x28
140a3aaa1: mov    DWORD PTR [r12+0x38],ebx
140a3aaa6: mov    QWORD PTR [r12+0x8],rsi
140a3aaab: jmp    0x140a3bd85
140a3aab0: cmp    QWORD PTR [rdx],0x0
140a3aab4: jne    0x140a3b4d1
140a3aaba: mov    r13d,0x23
140a3aac0: xor    r12d,r12d
140a3aac3: mov    r14d,r12d
140a3aac6: mov    rax,QWORD PTR [rip+0x1996abb]        # 0x1423d1588
140a3aacd: sub    rax,QWORD PTR [rip+0x1996aac]        # 0x1423d1580
140a3aad4: sar    rax,0x3
140a3aad8: test   rax,rax
140a3aadb: je     0x140a3af4d
140a3aae1: mov    rax,QWORD PTR [rip+0x1996a98]        # 0x1423d1580
140a3aae8: mov    rbx,QWORD PTR [r12+rax*1]
140a3aaec: mov    rcx,rbx
140a3aaef: call   0x140a45470
140a3aaf4: test   al,al
140a3aaf6: je     0x140a3ac14
140a3aafc: mov    BYTE PTR [rsp+0x20],0x0
140a3ab01: movzx  r9d,WORD PTR [rbx+0x8]
140a3ab06: movzx  r8d,WORD PTR [rbx+0x6]
140a3ab0b: movzx  edx,WORD PTR [rbx+0x4]
140a3ab0f: mov    rcx,r15
140a3ab12: call   0x141366860
140a3ab17: test   al,al
140a3ab19: je     0x140a3ac14
140a3ab1f: mov    rax,QWORD PTR [rip+0x1996a5a]        # 0x1423d1580
140a3ab26: mov    rcx,QWORD PTR [r12+rax*1]
140a3ab2a: mov    BYTE PTR [rsp+0x20],0x1
140a3ab2f: movzx  r9d,WORD PTR [rcx+0x8]
140a3ab34: movzx  r8d,WORD PTR [rcx+0x6]
140a3ab39: movzx  edx,WORD PTR [rcx+0x4]
140a3ab3d: mov    rcx,r15
140a3ab40: call   0x1413a4910
140a3ab45: test   al,al
140a3ab47: mov    rax,QWORD PTR [rip+0x1996a32]        # 0x1423d1580
140a3ab4e: mov    rcx,QWORD PTR [r12+rax*1]
140a3ab52: jne    0x140a3aeab
140a3ab58: movzx  esi,WORD PTR [rcx+0x4]
140a3ab5c: movzx  edi,WORD PTR [rcx+0x6]
140a3ab60: movzx  ebx,WORD PTR [rcx+0x8]
140a3ab64: cmp    si,WORD PTR [r15+0xa8]
140a3ab6c: jne    0x140a3ac14
140a3ab72: cmp    di,WORD PTR [r15+0xaa]
140a3ab7a: jne    0x140a3ac14
140a3ab80: cmp    bx,WORD PTR [r15+0xac]
140a3ab88: jge    0x140a3ac14
140a3ab8e: mov    BYTE PTR [rsp+0x20],0x0
140a3ab93: movzx  r9d,bx
140a3ab97: movzx  r8d,di
140a3ab9b: movzx  edx,si
140a3ab9e: mov    rcx,r15
140a3aba1: call   0x141366860
140a3aba6: test   al,al
140a3aba8: je     0x140a3ac14
140a3abaa: nop    WORD PTR [rax+rax*1+0x0]
140a3abb0: inc    bx
140a3abb3: mov    DWORD PTR [rsp+0x40],0x0
140a3abbb: mov    BYTE PTR [rsp+0x38],0x0
140a3abc0: mov    BYTE PTR [rsp+0x30],0x0
140a3abc5: mov    BYTE PTR [rsp+0x28],0x0
140a3abca: mov    BYTE PTR [rsp+0x20],0x1
140a3abcf: movzx  r9d,bx
140a3abd3: movzx  r8d,di
140a3abd7: movzx  edx,si
140a3abda: lea    rcx,[rip+0x199690f]        # 0x1423d14f0
140a3abe1: call   0x141447200
140a3abe6: test   al,al
140a3abe8: je     0x140a3ac14
140a3abea: cmp    bx,WORD PTR [r15+0xac]
140a3abf2: je     0x140a3af1c
140a3abf8: mov    BYTE PTR [rsp+0x20],0x0
140a3abfd: movzx  r9d,bx
140a3ac01: movzx  r8d,di
140a3ac05: movzx  edx,si
140a3ac08: mov    rcx,r15
140a3ac0b: call   0x141366860
140a3ac10: test   al,al
140a3ac12: jne    0x140a3abb0
140a3ac14: mov    r8d,DWORD PTR [rbp+0x7f]
140a3ac18: inc    r14d
140a3ac1b: add    r12,0x8
140a3ac1f: mov    rcx,QWORD PTR [rip+0x1996962]        # 0x1423d1588
140a3ac26: mov    rdx,QWORD PTR [rip+0x1996953]        # 0x1423d1580
140a3ac2d: sub    rcx,rdx
140a3ac30: sar    rcx,0x3
140a3ac34: movsxd rax,r14d
140a3ac37: cmp    rax,rcx
140a3ac3a: jb     0x140a3aae1
140a3ac40: cmp    r8d,0xffffffff
140a3ac44: je     0x140a3af4a
140a3ac4a: movsxd rax,r8d
140a3ac4d: mov    rcx,QWORD PTR [rdx+rax*8]
140a3ac51: movsx  esi,WORD PTR [rcx+0x4]
140a3ac55: movsx  edi,WORD PTR [rcx+0x6]
140a3ac59: movzx  ebx,WORD PTR [rcx+0x8]
140a3ac5d: cmp    si,WORD PTR [r15+0xa8]
140a3ac65: jne    0x140a3ad0c
140a3ac6b: cmp    di,WORD PTR [r15+0xaa]
140a3ac73: jne    0x140a3ad0c
140a3ac79: cmp    bx,WORD PTR [r15+0xac]
140a3ac81: jge    0x140a3ad0c
140a3ac87: mov    BYTE PTR [rsp+0x20],0x0
140a3ac8c: movzx  r9d,bx
140a3ac90: movzx  r8d,di
140a3ac94: movzx  edx,si
140a3ac97: mov    rcx,r15
140a3ac9a: call   0x141366860
140a3ac9f: test   al,al
140a3aca1: je     0x140a3ad0c
140a3aca3: lea    r14d,[rbx+0x1]
140a3aca7: mov    DWORD PTR [rsp+0x40],0x0
140a3acaf: mov    BYTE PTR [rsp+0x38],0x0
140a3acb4: mov    BYTE PTR [rsp+0x30],0x0
140a3acb9: mov    BYTE PTR [rsp+0x28],0x0
140a3acbe: mov    BYTE PTR [rsp+0x20],0x1
140a3acc3: movzx  r9d,r14w
140a3acc7: movzx  r8d,di
140a3accb: movzx  edx,si
140a3acce: lea    rcx,[rip+0x199681b]        # 0x1423d14f0
140a3acd5: call   0x141447200
140a3acda: test   al,al
140a3acdc: je     0x140a3ad0c
140a3acde: movzx  ebx,r14w
140a3ace2: cmp    r14w,WORD PTR [r15+0xac]
140a3acea: je     0x140a3af28
140a3acf0: mov    BYTE PTR [rsp+0x20],0x0
140a3acf5: movzx  r9d,bx
140a3acf9: movzx  r8d,di
140a3acfd: movzx  edx,si
140a3ad00: mov    rcx,r15
140a3ad03: call   0x141366860
140a3ad08: test   al,al
140a3ad0a: jne    0x140a3aca3
140a3ad0c: mov    BYTE PTR [rsp+0x20],0x0
140a3ad11: movzx  r9d,bx
140a3ad15: movzx  r8d,di
140a3ad19: movzx  edx,si
140a3ad1c: mov    rcx,r15
140a3ad1f: call   0x141366860
140a3ad24: test   al,al
140a3ad26: je     0x140a3b4bd
140a3ad2c: mov    rcx,r15
140a3ad2f: call   0x14138ed20
140a3ad34: test   al,al
140a3ad36: jne    0x140a3ae7a
140a3ad3c: mov    r14d,0xf
140a3ad42: lea    r12d,[rbx+0x1]
140a3ad46: data16 nop WORD PTR [rax+rax*1+0x0]
140a3ad50: movzx  r9d,r12w
140a3ad54: movzx  r8d,di
140a3ad58: movzx  edx,si
140a3ad5b: mov    rcx,r15
140a3ad5e: call   0x141367790
140a3ad63: test   al,al
140a3ad65: jne    0x140a3ae7a
140a3ad6b: xor    r8d,r8d
140a3ad6e: xor    edx,edx
140a3ad70: mov    rcx,r15
140a3ad73: call   0x141348060
140a3ad78: mov    DWORD PTR [rsp+0x28],eax
140a3ad7c: mov    BYTE PTR [rsp+0x20],0x1
140a3ad81: movzx  r9d,r12w
140a3ad85: movzx  r8d,di
140a3ad89: movzx  edx,si
140a3ad8c: lea    rcx,[rip+0x199675d]        # 0x1423d14f0
140a3ad93: call   0x1414adea0
140a3ad98: test   al,al
140a3ad9a: je     0x140a3ae7a
140a3ada0: test   si,si
140a3ada3: js     0x140a3ae7a
140a3ada9: cmp    esi,DWORD PTR [rip+0x1aad32d]        # 0x1424e80dc
140a3adaf: jge    0x140a3ae7a
140a3adb5: test   di,di
140a3adb8: js     0x140a3ae7a
140a3adbe: cmp    edi,DWORD PTR [rip+0x1aad31c]        # 0x1424e80e0
140a3adc4: jge    0x140a3ae7a
140a3adca: test   r12w,r12w
140a3adce: js     0x140a3ae7a
140a3add4: movsx  eax,bx
140a3add7: inc    eax
140a3add9: cmp    eax,DWORD PTR [rip+0x1aad305]        # 0x1424e80e4
140a3addf: jge    0x140a3ae7a
140a3ade5: movzx  eax,si
140a3ade8: sar    ax,0x4
140a3adec: movzx  ecx,di
140a3adef: sar    cx,0x4
140a3adf3: mov    r8,QWORD PTR [rip+0x1aad2ae]        # 0x1424e80a8
140a3adfa: test   r8,r8
140a3adfd: je     0x140a3ae7a
140a3adff: movsx  rax,ax
140a3ae03: movsx  rdx,cx
140a3ae07: mov    rax,QWORD PTR [r8+rax*8]
140a3ae0b: movsx  rcx,bx
140a3ae0f: mov    rax,QWORD PTR [rax+rdx*8]
140a3ae13: mov    rcx,QWORD PTR [rax+rcx*8+0x8]
140a3ae18: test   rcx,rcx
140a3ae1b: je     0x140a3ae7a
140a3ae1d: mov    r8d,edi
140a3ae20: and    r8d,0x8000000f
140a3ae27: jge    0x140a3ae33
140a3ae29: dec    r8d
140a3ae2c: or     r8d,0xfffffff0
140a3ae30: inc    r8d
140a3ae33: mov    edx,esi
140a3ae35: and    edx,0x8000000f
140a3ae3b: jge    0x140a3ae44
140a3ae3d: dec    edx
140a3ae3f: or     edx,0xfffffff0
140a3ae42: inc    edx
140a3ae44: mov    DWORD PTR [rsp+0x38],0x0
140a3ae4c: mov    BYTE PTR [rsp+0x30],0x0
140a3ae51: mov    BYTE PTR [rsp+0x28],0x0
140a3ae56: mov    BYTE PTR [rsp+0x20],0x0
140a3ae5b: mov    r9b,0x1
140a3ae5e: call   0x140534da0
140a3ae63: test   al,al
140a3ae65: je     0x140a3ae7a
140a3ae67: inc    bx
140a3ae6a: inc    r12w
140a3ae6e: dec    r14d
140a3ae71: test   r14d,r14d
140a3ae74: jg     0x140a3ad50
140a3ae7a: cmp    WORD PTR [r15+0xc0],si
140a3ae82: jne    0x140a3ae9c
140a3ae84: cmp    WORD PTR [r15+0xc2],di
140a3ae8c: jne    0x140a3ae9c
140a3ae8e: cmp    WORD PTR [r15+0xc4],bx
140a3ae96: je     0x140a3b4bd
140a3ae9c: mov    rcx,QWORD PTR [rbp+0x6f]
140a3aea0: mov    DWORD PTR [rcx],0x51
140a3aea6: jmp    0x140a3af32
140a3aeab: movzx  eax,WORD PTR [r15+0xac]
140a3aeb3: sub    ax,WORD PTR [rcx+0x8]
140a3aeb7: movzx  r8d,WORD PTR [r15+0xaa]
140a3aebf: sub    r8w,WORD PTR [rcx+0x6]
140a3aec4: movzx  edx,WORD PTR [r15+0xa8]
140a3aecc: sub    dx,WORD PTR [rcx+0x4]
140a3aed0: cwde
140a3aed1: mov    ebx,eax
140a3aed3: neg    ebx
140a3aed5: cmovs  ebx,eax
140a3aed8: movsx  ecx,dx
140a3aedb: movsx  eax,r8w
140a3aedf: imul   ecx,ecx
140a3aee2: imul   eax,eax
140a3aee5: add    eax,ecx
140a3aee7: movd   xmm1,eax
140a3aeeb: cvtdq2ps xmm1,xmm1
140a3aeee: xorps  xmm0,xmm0
140a3aef1: ucomiss xmm0,xmm1
140a3aef4: ja     0x140a3aeff
140a3aef6: xorps  xmm0,xmm0
140a3aef9: sqrtss xmm0,xmm1
140a3aefd: jmp    0x140a3af07
140a3aeff: movaps xmm0,xmm1
140a3af02: call   0x14153ae80
140a3af07: cvttss2si eax,xmm0
140a3af0b: add    ax,bx
140a3af0e: cmp    r13w,ax
140a3af12: jle    0x140a3ac14
140a3af18: movzx  r13d,ax
140a3af1c: mov    r8d,r14d
140a3af1f: mov    DWORD PTR [rbp+0x7f],r14d
140a3af23: jmp    0x140a3ac18
140a3af28: mov    rcx,QWORD PTR [rbp+0x6f]
140a3af2c: mov    DWORD PTR [rcx],0x50
140a3af32: mov    DWORD PTR [rcx+0x4],0x28
140a3af39: mov    WORD PTR [rcx+0x30],si
140a3af3d: mov    WORD PTR [rcx+0x32],di
140a3af41: mov    WORD PTR [rcx+0x34],bx
140a3af45: jmp    0x140a3bd85
140a3af4a: xor    r12d,r12d
140a3af4d: movzx  edx,WORD PTR [r15+0xaa]
140a3af55: sub    dx,WORD PTR [r15+0xb0]
140a3af5d: movzx  eax,WORD PTR [r15+0xa8]
140a3af65: sub    ax,WORD PTR [r15+0xae]
140a3af6d: movsx  ecx,ax
140a3af70: movsx  eax,dx
140a3af73: imul   ecx,ecx
140a3af76: imul   eax,eax
140a3af79: add    eax,ecx
140a3af7b: movd   xmm1,eax
140a3af7f: cvtdq2ps xmm1,xmm1
140a3af82: xorps  xmm0,xmm0
140a3af85: ucomiss xmm0,xmm1
140a3af88: ja     0x140a3af93
140a3af8a: xorps  xmm0,xmm0
140a3af8d: sqrtss xmm0,xmm1
140a3af91: jmp    0x140a3af9b
140a3af93: movaps xmm0,xmm1
140a3af96: call   0x14153ae80
140a3af9b: cvttss2si ebx,xmm0
140a3af9f: call   0x140eb68b0
140a3afa4: mov    r8d,eax
140a3afa7: mov    eax,0x3
140a3afac: mul    r8d
140a3afaf: mov    ecx,r8d
140a3afb2: sub    ecx,edx
140a3afb4: shr    ecx,1
140a3afb6: add    ecx,edx
140a3afb8: shr    ecx,0x1e
140a3afbb: imul   ecx,ecx,0x7fffffff
140a3afc1: sub    r8d,ecx
140a3afc4: cmp    r8d,0x1b4e81c
140a3afcb: jb     0x140a3b02d
140a3afcd: cmp    bx,0x3
140a3afd1: jge    0x140a3b4bd
140a3afd7: call   0x140eb68b0
140a3afdc: mov    r8d,eax
140a3afdf: mov    eax,0x3
140a3afe4: mul    r8d
140a3afe7: mov    ecx,r8d
140a3afea: sub    ecx,edx
140a3afec: shr    ecx,1
140a3afee: add    ecx,edx
140a3aff0: shr    ecx,0x1e
140a3aff3: imul   ecx,ecx,0x7fffffff
140a3aff9: sub    r8d,ecx
140a3affc: cmp    r8d,0x6666667
140a3b003: jae    0x140a3b4bd
140a3b009: cmp    QWORD PTR [r15+0x3b0],0x0
140a3b011: jne    0x140a3b4bd
140a3b017: movzx  eax,WORD PTR [r15+0xb2]
140a3b01f: cmp    WORD PTR [r15+0xac],ax
140a3b027: jne    0x140a3b4bd
140a3b02d: xorps  xmm0,xmm0
140a3b030: movdqu XMMWORD PTR [rbp-0x11],xmm0
140a3b035: mov    rbx,r12
140a3b038: mov    QWORD PTR [rbp-0x1],rbx
140a3b03c: mov    r13d,r12d
140a3b03f: mov    rax,QWORD PTR [rip+0x19aa72a]        # 0x1423e5770
140a3b046: sub    rax,QWORD PTR [rip+0x19aa71b]        # 0x1423e5768
140a3b04d: sar    rax,0x3
140a3b051: mov    r14,QWORD PTR [rbp-0x9]
140a3b055: test   rax,rax
140a3b058: je     0x140a3b1e3
140a3b05e: xchg   ax,ax
140a3b060: mov    rax,QWORD PTR [rip+0x19aa701]        # 0x1423e5768
140a3b067: mov    rsi,QWORD PTR [r12+rax*1]
140a3b06b: mov    eax,DWORD PTR [rsi+0x10]
140a3b06e: and    eax,0x480c11
140a3b073: cmp    eax,0x1
140a3b076: jne    0x140a3b1b7
140a3b07c: mov    eax,0xffff8ad0
140a3b081: mov    WORD PTR [rbp+0x7f],ax
140a3b085: mov    eax,DWORD PTR [rsi+0x10]
140a3b088: test   al,0x10
140a3b08a: jne    0x140a3b169
140a3b090: test   al,0x8
140a3b092: je     0x140a3b151
140a3b098: mov    rbx,QWORD PTR [rsi+0x38]
140a3b09c: mov    rdi,QWORD PTR [rsi+0x40]
140a3b0a0: cmp    rbx,rdi
140a3b0a3: jae    0x140a3b111
140a3b0a5: mov    rcx,QWORD PTR [rbx]
140a3b0a8: mov    rax,QWORD PTR [rcx]
140a3b0ab: call   QWORD PTR [rax+0x10]
140a3b0ae: cmp    eax,0xb
140a3b0b1: je     0x140a3b0e3
140a3b0b3: cmp    eax,0x12
140a3b0b6: jne    0x140a3b0f1
140a3b0b8: mov    rcx,QWORD PTR [rbx]
140a3b0bb: mov    rax,QWORD PTR [rcx]
140a3b0be: call   QWORD PTR [rax+0x20]
140a3b0c1: test   rax,rax
140a3b0c4: je     0x140a3b0f1
140a3b0c6: lea    r9,[rbp-0x19]
140a3b0ca: lea    r8,[rbp+0x77]
140a3b0ce: lea    rdx,[rbp+0x7f]
140a3b0d2: mov    rcx,rax
140a3b0d5: call   0x141367430
140a3b0da: mov    rbx,QWORD PTR [rbp-0x1]
140a3b0de: jmp    0x140a3b169
140a3b0e3: mov    rcx,QWORD PTR [rbx]
140a3b0e6: mov    rax,QWORD PTR [rcx]
140a3b0e9: call   QWORD PTR [rax+0x18]
140a3b0ec: test   rax,rax
140a3b0ef: jne    0x140a3b0f7
140a3b0f1: add    rbx,0x8
140a3b0f5: jmp    0x140a3b0a0
140a3b0f7: lea    r9,[rbp-0x19]
140a3b0fb: lea    r8,[rbp+0x77]
140a3b0ff: lea    rdx,[rbp+0x7f]
140a3b103: mov    rcx,rax
140a3b106: call   0x140c8baa0
140a3b10b: mov    rbx,QWORD PTR [rbp-0x1]
140a3b10f: jmp    0x140a3b169
140a3b111: mov    rax,QWORD PTR [rsi+0x20]
140a3b115: mov    rcx,QWORD PTR [rsi+0x28]
140a3b119: nop    DWORD PTR [rax+0x0]
140a3b120: cmp    rax,rcx
140a3b123: jae    0x140a3b10b
140a3b125: mov    rdx,QWORD PTR [rax]
140a3b128: cmp    DWORD PTR [rdx],0x7
140a3b12b: je     0x140a3b133
140a3b12d: add    rax,0x8
140a3b131: jmp    0x140a3b120
140a3b133: mov    rcx,QWORD PTR [rdx+0x8]
140a3b137: movzx  eax,WORD PTR [rcx+0x4]
140a3b13b: mov    WORD PTR [rbp+0x7f],ax
140a3b13f: movzx  eax,WORD PTR [rcx+0x6]
140a3b143: mov    WORD PTR [rbp+0x77],ax
140a3b147: movzx  eax,WORD PTR [rcx+0x8]
140a3b14b: mov    rbx,QWORD PTR [rbp-0x1]
140a3b14f: jmp    0x140a3b165
140a3b151: movzx  eax,WORD PTR [rsi+0x8]
140a3b155: mov    WORD PTR [rbp+0x7f],ax
140a3b159: movzx  eax,WORD PTR [rsi+0xa]
140a3b15d: mov    WORD PTR [rbp+0x77],ax
140a3b161: movzx  eax,WORD PTR [rsi+0xc]
140a3b165: mov    WORD PTR [rbp-0x19],ax
140a3b169: mov    BYTE PTR [rsp+0x20],0x1
140a3b16e: movzx  r9d,WORD PTR [rbp-0x19]
140a3b173: movzx  r8d,WORD PTR [rbp+0x77]
140a3b178: movzx  edx,WORD PTR [rbp+0x7f]
140a3b17c: mov    rcx,r15
140a3b17f: call   0x1413a4910
140a3b184: test   al,al
140a3b186: je     0x140a3b1b7
140a3b188: mov    r8,QWORD PTR [rip+0x19aa5d9]        # 0x1423e5768
140a3b18f: add    r8,r12
140a3b192: cmp    r14,rbx
140a3b195: je     0x140a3b1a7
140a3b197: mov    rax,QWORD PTR [r8]
140a3b19a: mov    QWORD PTR [r14],rax
140a3b19d: add    r14,0x8
140a3b1a1: mov    QWORD PTR [rbp-0x9],r14
140a3b1a5: jmp    0x140a3b1b7
140a3b1a7: mov    rdx,r14
140a3b1aa: lea    rcx,[rbp-0x11]
140a3b1ae: call   0x1400bad30
140a3b1b3: mov    r14,QWORD PTR [rbp-0x9]
140a3b1b7: inc    r13d
140a3b1ba: add    r12,0x8
140a3b1be: mov    rcx,QWORD PTR [rip+0x19aa5ab]        # 0x1423e5770
140a3b1c5: sub    rcx,QWORD PTR [rip+0x19aa59c]        # 0x1423e5768
140a3b1cc: sar    rcx,0x3
140a3b1d0: movsxd rax,r13d
140a3b1d3: cmp    rax,rcx
140a3b1d6: mov    rbx,QWORD PTR [rbp-0x1]
140a3b1da: jb     0x140a3b060
140a3b1e0: xor    r12d,r12d
140a3b1e3: mov    rsi,QWORD PTR [rbp-0x11]
140a3b1e7: sub    r14,rsi
140a3b1ea: sar    r14,0x3
140a3b1ee: test   r14,r14
140a3b1f1: je     0x140a3b4b4
140a3b1f7: mov    QWORD PTR [r15+0x3b0],r12
140a3b1fe: cmp    r14d,0x1
140a3b202: ja     0x140a3b209
140a3b204: mov    eax,r12d
140a3b207: jmp    0x140a3b242
140a3b209: call   0x140eb68b0
140a3b20e: mov    r8d,eax
140a3b211: mov    eax,0x3
140a3b216: mul    r8d
140a3b219: mov    ecx,r8d
140a3b21c: sub    ecx,edx
140a3b21e: shr    ecx,1
140a3b220: add    ecx,edx
140a3b222: shr    ecx,0x1e
140a3b225: imul   ecx,ecx,0x80000001
140a3b22b: add    r8d,ecx
140a3b22e: xor    edx,edx
140a3b230: mov    eax,0x7fffffff
140a3b235: div    r14d
140a3b238: lea    ecx,[rax+0x1]
140a3b23b: xor    edx,edx
140a3b23d: mov    eax,r8d
140a3b240: div    ecx
140a3b242: cdqe
140a3b244: mov    rsi,QWORD PTR [rsi+rax*8]
140a3b248: mov    eax,0xffff8ad0
140a3b24d: mov    WORD PTR [rbp+0x7f],ax
140a3b251: mov    eax,DWORD PTR [rsi+0x10]
140a3b254: test   al,0x10
140a3b256: jne    0x140a3b325
140a3b25c: test   al,0x8
140a3b25e: je     0x140a3b30d
140a3b264: mov    rbx,QWORD PTR [rsi+0x38]
140a3b268: mov    rdi,QWORD PTR [rsi+0x40]
140a3b26c: nop    DWORD PTR [rax+0x0]
140a3b270: cmp    rbx,rdi
140a3b273: jae    0x140a3b2d6
140a3b275: mov    rcx,QWORD PTR [rbx]
140a3b278: mov    rax,QWORD PTR [rcx]
140a3b27b: call   QWORD PTR [rax+0x10]
140a3b27e: cmp    eax,0xb
140a3b281: je     0x140a3b2ac
140a3b283: cmp    eax,0x12
140a3b286: jne    0x140a3b2ba
140a3b288: mov    rcx,QWORD PTR [rbx]
140a3b28b: mov    rax,QWORD PTR [rcx]
140a3b28e: call   QWORD PTR [rax+0x20]
140a3b291: test   rax,rax
140a3b294: je     0x140a3b2ba
140a3b296: lea    r9,[rbp-0x19]
140a3b29a: lea    r8,[rbp+0x77]
140a3b29e: lea    rdx,[rbp+0x7f]
140a3b2a2: mov    rcx,rax
140a3b2a5: call   0x141367430
140a3b2aa: jmp    0x140a3b325
140a3b2ac: mov    rcx,QWORD PTR [rbx]
140a3b2af: mov    rax,QWORD PTR [rcx]
140a3b2b2: call   QWORD PTR [rax+0x18]
140a3b2b5: test   rax,rax
140a3b2b8: jne    0x140a3b2c0
140a3b2ba: add    rbx,0x8
140a3b2be: jmp    0x140a3b270
140a3b2c0: lea    r9,[rbp-0x19]
140a3b2c4: lea    r8,[rbp+0x77]
140a3b2c8: lea    rdx,[rbp+0x7f]
140a3b2cc: mov    rcx,rax
140a3b2cf: call   0x140c8baa0
140a3b2d4: jmp    0x140a3b325
140a3b2d6: mov    rax,QWORD PTR [rsi+0x20]
140a3b2da: mov    rcx,QWORD PTR [rsi+0x28]
140a3b2de: xchg   ax,ax
140a3b2e0: cmp    rax,rcx
140a3b2e3: jae    0x140a3b325
140a3b2e5: mov    rdx,QWORD PTR [rax]
140a3b2e8: cmp    DWORD PTR [rdx],0x7
140a3b2eb: je     0x140a3b2f3
140a3b2ed: add    rax,0x8
140a3b2f1: jmp    0x140a3b2e0
140a3b2f3: mov    rcx,QWORD PTR [rdx+0x8]
140a3b2f7: movzx  eax,WORD PTR [rcx+0x4]
140a3b2fb: mov    WORD PTR [rbp+0x7f],ax
140a3b2ff: movzx  eax,WORD PTR [rcx+0x6]
140a3b303: mov    WORD PTR [rbp+0x77],ax
140a3b307: movzx  eax,WORD PTR [rcx+0x8]
140a3b30b: jmp    0x140a3b321
140a3b30d: movzx  eax,WORD PTR [rsi+0x8]
140a3b311: mov    WORD PTR [rbp+0x7f],ax
140a3b315: movzx  eax,WORD PTR [rsi+0xa]
140a3b319: mov    WORD PTR [rbp+0x77],ax
140a3b31d: movzx  eax,WORD PTR [rsi+0xc]
140a3b321: mov    WORD PTR [rbp-0x19],ax
140a3b325: mov    r14d,0xf
140a3b32b: nop    DWORD PTR [rax+rax*1+0x0]
140a3b330: movzx  ebx,WORD PTR [rbp-0x19]
140a3b334: inc    bx
140a3b337: movzx  edi,WORD PTR [rbp+0x77]
140a3b33b: movzx  esi,WORD PTR [rbp+0x7f]
140a3b33f: movzx  r9d,bx
140a3b343: movzx  r8d,di
140a3b347: movzx  edx,si
140a3b34a: mov    rcx,r15
140a3b34d: call   0x141367790
140a3b352: test   al,al
140a3b354: jne    0x140a3b474
140a3b35a: xor    r8d,r8d
140a3b35d: xor    edx,edx
140a3b35f: mov    rcx,r15
140a3b362: call   0x141348060
140a3b367: mov    DWORD PTR [rsp+0x28],eax
140a3b36b: mov    BYTE PTR [rsp+0x20],0x1
140a3b370: movzx  r9d,bx
140a3b374: movzx  r8d,di
140a3b378: movzx  edx,si
140a3b37b: lea    rcx,[rip+0x199616e]        # 0x1423d14f0
140a3b382: call   0x1414adea0
140a3b387: test   al,al
140a3b389: je     0x140a3b474
140a3b38f: movzx  ecx,WORD PTR [rbp-0x19]
140a3b393: inc    cx
140a3b396: movsx  r9d,WORD PTR [rbp+0x7f]
140a3b39b: test   r9w,r9w
140a3b39f: js     0x140a3b479
140a3b3a5: cmp    r9d,DWORD PTR [rip+0x1aacd30]        # 0x1424e80dc
140a3b3ac: jge    0x140a3b479
140a3b3b2: movsx  r8d,WORD PTR [rbp+0x77]
140a3b3b7: test   r8w,r8w
140a3b3bb: js     0x140a3b47e
140a3b3c1: cmp    r8d,DWORD PTR [rip+0x1aacd18]        # 0x1424e80e0
140a3b3c8: jge    0x140a3b47e
140a3b3ce: test   cx,cx
140a3b3d1: js     0x140a3b47e
140a3b3d7: movsx  eax,cx
140a3b3da: cmp    eax,DWORD PTR [rip+0x1aacd04]        # 0x1424e80e4
140a3b3e0: jge    0x140a3b47e
140a3b3e6: movzx  eax,r9w
140a3b3ea: sar    ax,0x4
140a3b3ee: movzx  edx,r8w
140a3b3f2: sar    dx,0x4
140a3b3f6: mov    r10,QWORD PTR [rip+0x1aaccab]        # 0x1424e80a8
140a3b3fd: test   r10,r10
140a3b400: je     0x140a3b47e
140a3b402: movsx  rax,ax
140a3b406: movsx  rdx,dx
140a3b40a: mov    rax,QWORD PTR [r10+rax*8]
140a3b40e: movsx  rcx,cx
140a3b412: mov    rax,QWORD PTR [rax+rdx*8]
140a3b416: mov    rcx,QWORD PTR [rax+rcx*8]
140a3b41a: test   rcx,rcx
140a3b41d: je     0x140a3b47e
140a3b41f: and    r8d,0x8000000f
140a3b426: jge    0x140a3b432
140a3b428: dec    r8d
140a3b42b: or     r8d,0xfffffff0
140a3b42f: inc    r8d
140a3b432: mov    edx,r9d
140a3b435: and    edx,0x8000000f
140a3b43b: jge    0x140a3b444
140a3b43d: dec    edx
140a3b43f: or     edx,0xfffffff0
140a3b442: inc    edx
140a3b444: mov    DWORD PTR [rsp+0x38],r12d
140a3b449: mov    BYTE PTR [rsp+0x30],0x0
140a3b44e: mov    BYTE PTR [rsp+0x28],0x0
140a3b453: mov    BYTE PTR [rsp+0x20],0x0
140a3b458: mov    r9b,0x1
140a3b45b: call   0x140534da0
140a3b460: test   al,al
140a3b462: je     0x140a3b474
140a3b464: inc    WORD PTR [rbp-0x19]
140a3b468: dec    r14d
140a3b46b: test   r14d,r14d
140a3b46e: jg     0x140a3b330
140a3b474: movzx  r9d,WORD PTR [rbp+0x7f]
140a3b479: movzx  r8d,WORD PTR [rbp+0x77]
140a3b47e: mov    rcx,QWORD PTR [rbp+0x6f]
140a3b482: mov    DWORD PTR [rcx],0x3c
140a3b488: mov    DWORD PTR [rcx+0x4],0x28
140a3b48f: mov    WORD PTR [rcx+0x30],r9w
140a3b494: mov    WORD PTR [rcx+0x32],r8w
140a3b499: movzx  eax,WORD PTR [rbp-0x19]
140a3b49d: mov    WORD PTR [rcx+0x34],ax
140a3b4a1: mov    DWORD PTR [rcx+0x38],0x15
140a3b4a8: mov    DWORD PTR [rcx+0x3c],0x3
140a3b4af: jmp    0x140a3bd7c
140a3b4b4: lea    rcx,[rbp-0x11]
140a3b4b8: call   0x140066b70
140a3b4bd: mov    r13d,0x1
140a3b4c3: mov    r11,QWORD PTR [rip+0x1ab159e]        # 0x1424eca68
140a3b4ca: mov    rbx,QWORD PTR [rip+0x1ab159f]        # 0x1424eca70
140a3b4d1: movsx  rcx,WORD PTR [r15+0x12c]
140a3b4d9: movsx  rax,WORD PTR [r15+0xa4]
140a3b4e1: test   ax,ax
140a3b4e4: js     0x140a3bd85
140a3b4ea: mov    rdx,rax
140a3b4ed: mov    rax,rbx
140a3b4f0: sub    rax,r11
140a3b4f3: sar    rax,0x3
140a3b4f7: cmp    rdx,rax
140a3b4fa: jae    0x140a3bd85
140a3b500: test   cx,cx
140a3b503: js     0x140a3bd85
140a3b509: mov    rax,QWORD PTR [r11+rdx*8]
140a3b50d: mov    rdx,QWORD PTR [rax+0x178]
140a3b514: mov    rax,QWORD PTR [rax+0x180]
140a3b51b: sub    rax,rdx
140a3b51e: sar    rax,0x3
140a3b522: cmp    rcx,rax
140a3b525: jae    0x140a3bd85
140a3b52b: mov    rax,QWORD PTR [rdx+rcx*8]
140a3b52f: cmp    DWORD PTR [rax+0x6b0],0x13
140a3b536: jle    0x140a3b549
140a3b538: mov    rax,QWORD PTR [rax+0x6a8]
140a3b53f: test   BYTE PTR [rax+0x13],0x4
140a3b543: je     0x140a3b549
140a3b545: mov    al,0x1
140a3b547: jmp    0x140a3b54b
140a3b549: xor    al,al
140a3b54b: test   al,al
140a3b54d: je     0x140a3bd85
140a3b553: mov    r10d,DWORD PTR [r15+0x3bc]
140a3b55a: cmp    r10d,0xffffffff
140a3b55e: je     0x140a3b5c5
140a3b560: mov    r9,QWORD PTR [rip+0x19a9b51]        # 0x1423e50b8
140a3b567: sub    r9,QWORD PTR [rip+0x19a9b42]        # 0x1423e50b0
140a3b56e: sar    r9,0x3
140a3b572: test   r9d,r9d
140a3b575: je     0x140a3b5c5
140a3b577: xor    r12d,r12d
140a3b57a: mov    r8d,r12d
140a3b57d: sub    r9d,0x1
140a3b581: js     0x140a3b5c8
140a3b583: nop    DWORD PTR [rax+0x0]
140a3b587: nop    WORD PTR [rax+rax*1+0x0]
140a3b590: lea    edx,[r8+r9*1]
140a3b594: sar    edx,1
140a3b596: movsxd rcx,edx
140a3b599: mov    rax,QWORD PTR [rip+0x19a9b10]        # 0x1423e50b0
140a3b5a0: mov    rsi,QWORD PTR [rax+rcx*8]
140a3b5a4: cmp    DWORD PTR [rsi+0x130],r10d
140a3b5ab: je     0x140a3b5cb
140a3b5ad: lea    eax,[rdx+0x1]
140a3b5b0: cmovle r8d,eax
140a3b5b4: lea    eax,[rdx-0x1]
140a3b5b7: cmovle eax,r9d
140a3b5bb: mov    r9d,eax
140a3b5be: cmp    r8d,eax
140a3b5c1: jle    0x140a3b590
140a3b5c3: jmp    0x140a3b5c8
140a3b5c5: xor    r12d,r12d
140a3b5c8: mov    rsi,r12
140a3b5cb: mov    rax,QWORD PTR [r15+0x408]
140a3b5d2: mov    rcx,QWORD PTR [r15+0x410]
140a3b5d9: nop    DWORD PTR [rax+0x0]
140a3b5e0: cmp    rax,rcx
140a3b5e3: jae    0x140a3b77d
140a3b5e9: mov    rdx,QWORD PTR [rax]
140a3b5ec: cmp    WORD PTR [rdx+0x8],0x0
140a3b5f1: je     0x140a3b5f9
140a3b5f3: add    rax,0x8
140a3b5f7: jmp    0x140a3b5e0
140a3b5f9: cmp    QWORD PTR [rdx],0x0
140a3b5fd: je     0x140a3b77d
140a3b603: movsx  rcx,WORD PTR [r15+0x12c]
140a3b60b: movsx  rax,WORD PTR [r15+0xa4]
140a3b613: test   ax,ax
140a3b616: js     0x140a3b752
140a3b61c: sub    rbx,r11
140a3b61f: sar    rbx,0x3
140a3b623: cmp    rax,rbx
140a3b626: jae    0x140a3b752
140a3b62c: test   cx,cx
140a3b62f: js     0x140a3b752
140a3b635: mov    rax,QWORD PTR [r11+rax*8]
140a3b639: mov    rdx,QWORD PTR [rax+0x178]
140a3b640: mov    rax,QWORD PTR [rax+0x180]
140a3b647: sub    rax,rdx
140a3b64a: sar    rax,0x3
140a3b64e: cmp    rcx,rax
140a3b651: jae    0x140a3b752
140a3b657: mov    rax,QWORD PTR [rdx+rcx*8]
140a3b65b: cmp    DWORD PTR [rax+0x6b0],0x13
140a3b662: jle    0x140a3b675
140a3b664: mov    rax,QWORD PTR [rax+0x6a8]
140a3b66b: test   BYTE PTR [rax+0x13],0x2
140a3b66f: je     0x140a3b675
140a3b671: mov    al,0x1
140a3b673: jmp    0x140a3b677
140a3b675: xor    al,al
140a3b677: test   al,al
140a3b679: je     0x140a3b752
140a3b67f: xor    bl,bl
140a3b681: test   rsi,rsi
140a3b684: je     0x140a3b714
140a3b68a: mov    QWORD PTR [r15+0x3b0],rsi
140a3b691: mov    DWORD PTR [r15+0xbc],0x2
140a3b69c: mov    WORD PTR [r15+0x3b8],r12w
140a3b6a4: movzx  edx,WORD PTR [rsi+0xaa]
140a3b6ab: sub    dx,WORD PTR [r15+0xaa]
140a3b6b3: movzx  eax,WORD PTR [rsi+0xa8]
140a3b6ba: sub    ax,WORD PTR [r15+0xa8]
140a3b6c2: movsx  ecx,ax
140a3b6c5: movsx  eax,dx
140a3b6c8: imul   ecx,ecx
140a3b6cb: imul   eax,eax
140a3b6ce: add    eax,ecx
140a3b6d0: movd   xmm1,eax
140a3b6d4: cvtdq2ps xmm1,xmm1
140a3b6d7: xorps  xmm0,xmm0
140a3b6da: ucomiss xmm0,xmm1
140a3b6dd: ja     0x140a3b6e8
140a3b6df: xorps  xmm0,xmm0
140a3b6e2: sqrtss xmm0,xmm1
140a3b6e6: jmp    0x140a3b6f0
140a3b6e8: movaps xmm0,xmm1
140a3b6eb: call   0x14153ae80
140a3b6f0: cvttss2si eax,xmm0
140a3b6f4: cmp    ax,0x1
140a3b6f8: jg     0x140a3b710
140a3b6fa: movzx  ebx,bl
140a3b6fd: movzx  eax,WORD PTR [r15+0xac]
140a3b705: cmp    WORD PTR [rsi+0xac],ax
140a3b70c: cmove  ebx,r13d
140a3b710: test   bl,bl
140a3b712: je     0x140a3b752
140a3b714: mov    rax,QWORD PTR [r15+0x408]
140a3b71b: mov    rcx,QWORD PTR [r15+0x410]
140a3b722: cmp    rax,rcx
140a3b725: jae    0x140a3b73c
140a3b727: mov    rdx,QWORD PTR [rax]
140a3b72a: cmp    WORD PTR [rdx+0x8],0x0
140a3b72f: je     0x140a3b737
140a3b731: add    rax,0x8
140a3b735: jmp    0x140a3b722
140a3b737: mov    rdx,QWORD PTR [rdx]
140a3b73a: jmp    0x140a3b73f
140a3b73c: mov    rdx,r12
140a3b73f: mov    BYTE PTR [rsp+0x20],0x1
140a3b744: xor    r9d,r9d
140a3b747: mov    r8b,0x1
140a3b74a: mov    rcx,r15
140a3b74d: call   0x141329bf0
140a3b752: mov    rax,QWORD PTR [r15+0x408]
140a3b759: mov    rcx,QWORD PTR [r15+0x410]
140a3b760: cmp    rax,rcx
140a3b763: jae    0x140a3b802
140a3b769: mov    rdx,QWORD PTR [rax]
140a3b76c: cmp    WORD PTR [rdx+0x8],0x0
140a3b771: je     0x140a3b7f8
140a3b777: add    rax,0x8
140a3b77b: jmp    0x140a3b760
140a3b77d: mov    r14d,r12d
140a3b780: mov    rbx,QWORD PTR [rip+0x1995df9]        # 0x1423d1580
140a3b787: mov    rdi,QWORD PTR [rip+0x1995dfa]        # 0x1423d1588
140a3b78e: xchg   ax,ax
140a3b790: cmp    rbx,rdi
140a3b793: jae    0x140a3b752
140a3b795: mov    rcx,QWORD PTR [rbx]
140a3b798: cmp    BYTE PTR [rcx+0xa],0x0
140a3b79c: je     0x140a3b7d1
140a3b79e: movzx  eax,WORD PTR [r15+0xa8]
140a3b7a6: cmp    WORD PTR [rcx+0x4],ax
140a3b7aa: jne    0x140a3b7d1
140a3b7ac: movzx  eax,WORD PTR [r15+0xaa]
140a3b7b4: cmp    WORD PTR [rcx+0x6],ax
140a3b7b8: jne    0x140a3b7d1
140a3b7ba: movzx  eax,WORD PTR [r15+0xac]
140a3b7c2: cmp    WORD PTR [rcx+0x8],ax
140a3b7c6: jne    0x140a3b7d1
140a3b7c8: call   0x140a45470
140a3b7cd: test   al,al
140a3b7cf: jne    0x140a3b7da
140a3b7d1: add    rbx,0x8
140a3b7d5: inc    r14d
140a3b7d8: jmp    0x140a3b790
140a3b7da: mov    rcx,QWORD PTR [rbp+0x6f]
140a3b7de: mov    DWORD PTR [rcx],0x4f
140a3b7e4: mov    DWORD PTR [rcx+0x4],0x28
140a3b7eb: mov    DWORD PTR [rcx+0x38],r14d
140a3b7ef: mov    QWORD PTR [rcx+0x8],rsi
140a3b7f3: jmp    0x140a3bd85
140a3b7f8: cmp    QWORD PTR [rdx],0x0
140a3b7fc: jne    0x140a3bd85
140a3b802: mov    r14d,0x7
140a3b808: mov    DWORD PTR [rbp-0x19],r14d
140a3b80c: mov    r13,r12
140a3b80f: mov    rbx,QWORD PTR [rip+0x1995d6a]        # 0x1423d1580
140a3b816: mov    rdi,QWORD PTR [rip+0x1995d6b]        # 0x1423d1588
140a3b81d: nop    DWORD PTR [rax]
140a3b820: cmp    rbx,rdi
140a3b823: jae    0x140a3b932
140a3b829: mov    rsi,QWORD PTR [rbx]
140a3b82c: movzx  ecx,WORD PTR [rsi+0x4]
140a3b830: mov    WORD PTR [rbp+0x77],cx
140a3b834: movzx  eax,WORD PTR [r15+0xa8]
140a3b83c: sub    ax,cx
140a3b83f: movsx  edx,ax
140a3b842: movzx  ecx,WORD PTR [rsi+0x6]
140a3b846: mov    WORD PTR [rbp+0x7f],cx
140a3b84a: movzx  eax,WORD PTR [r15+0xaa]
140a3b852: sub    ax,cx
140a3b855: movsx  ecx,ax
140a3b858: movzx  r12d,WORD PTR [rsi+0x8]
140a3b85d: imul   ecx,ecx
140a3b860: imul   edx,edx
140a3b863: add    ecx,edx
140a3b865: movd   xmm1,ecx
140a3b869: cvtdq2ps xmm1,xmm1
140a3b86c: xorps  xmm0,xmm0
140a3b86f: ucomiss xmm0,xmm1
140a3b872: ja     0x140a3b87d
140a3b874: xorps  xmm0,xmm0
140a3b877: sqrtss xmm0,xmm1
140a3b87b: jmp    0x140a3b885
140a3b87d: movaps xmm0,xmm1
140a3b880: call   0x14153ae80
140a3b885: cvttss2si r14d,xmm0
140a3b88a: movzx  eax,WORD PTR [r15+0xac]
140a3b892: sub    ax,r12w
140a3b896: movsx  ecx,ax
140a3b899: mov    eax,ecx
140a3b89b: neg    eax
140a3b89d: cmovs  eax,ecx
140a3b8a0: add    r14w,ax
140a3b8a4: cmp    WORD PTR [rbp-0x19],r14w
140a3b8a9: jle    0x140a3b929
140a3b8ab: mov    rcx,rsi
140a3b8ae: call   0x140a45470
140a3b8b3: test   al,al
140a3b8b5: je     0x140a3b929
140a3b8b7: movzx  r9d,r12w
140a3b8bb: movzx  r8d,WORD PTR [rbp+0x7f]
140a3b8c0: movzx  edx,WORD PTR [rbp+0x77]
140a3b8c4: mov    rcx,r15
140a3b8c7: call   0x141367790
140a3b8cc: test   al,al
140a3b8ce: jne    0x140a3b929
140a3b8d0: xor    r8d,r8d
140a3b8d3: xor    edx,edx
140a3b8d5: mov    rcx,r15
140a3b8d8: call   0x141348060
140a3b8dd: mov    DWORD PTR [rsp+0x28],eax
140a3b8e1: mov    BYTE PTR [rsp+0x20],0x1
140a3b8e6: movzx  r9d,r12w
140a3b8ea: movzx  r8d,WORD PTR [rbp+0x7f]
140a3b8ef: movzx  edx,WORD PTR [rbp+0x77]
140a3b8f3: lea    rcx,[rip+0x1995bf6]        # 0x1423d14f0
140a3b8fa: call   0x1414adea0
140a3b8ff: test   al,al
140a3b901: je     0x140a3b929
140a3b903: mov    BYTE PTR [rsp+0x20],0x1
140a3b908: movzx  r9d,WORD PTR [rsi+0x8]
140a3b90d: movzx  r8d,WORD PTR [rsi+0x6]
140a3b912: movzx  edx,WORD PTR [rsi+0x4]
140a3b916: mov    rcx,r15
140a3b919: call   0x1413a4910
140a3b91e: test   al,al
140a3b920: je     0x140a3b929
140a3b922: mov    DWORD PTR [rbp-0x19],r14d
140a3b926: mov    r13,rsi
140a3b929: add    rbx,0x8
140a3b92d: jmp    0x140a3b820
140a3b932: test   r13,r13
140a3b935: je     0x140a3b999
140a3b937: movzx  eax,WORD PTR [r13+0x4]
140a3b93c: cmp    WORD PTR [r15+0xc0],ax
140a3b944: jne    0x140a3b968
140a3b946: movzx  eax,WORD PTR [r13+0x6]
140a3b94b: cmp    WORD PTR [r15+0xc2],ax
140a3b953: jne    0x140a3b968
140a3b955: movzx  eax,WORD PTR [r13+0x8]
140a3b95a: cmp    WORD PTR [r15+0xc4],ax
140a3b962: je     0x140a3bd85
140a3b968: mov    rcx,QWORD PTR [rbp+0x6f]
140a3b96c: mov    DWORD PTR [rcx],0x51
140a3b972: mov    DWORD PTR [rcx+0x4],0x28
140a3b979: movzx  eax,WORD PTR [r13+0x4]
140a3b97e: mov    WORD PTR [rcx+0x30],ax
140a3b982: movzx  eax,WORD PTR [r13+0x6]
140a3b987: mov    WORD PTR [rcx+0x32],ax
140a3b98b: movzx  eax,WORD PTR [r13+0x8]
140a3b990: mov    WORD PTR [rcx+0x34],ax
140a3b994: jmp    0x140a3bd85
140a3b999: movzx  edx,WORD PTR [r15+0xaa]
140a3b9a1: sub    dx,WORD PTR [r15+0xb0]
140a3b9a9: movzx  eax,WORD PTR [r15+0xa8]
140a3b9b1: sub    ax,WORD PTR [r15+0xae]
140a3b9b9: movsx  ecx,ax
140a3b9bc: movsx  eax,dx
140a3b9bf: imul   ecx,ecx
140a3b9c2: imul   eax,eax
140a3b9c5: add    eax,ecx
140a3b9c7: movd   xmm1,eax
140a3b9cb: cvtdq2ps xmm1,xmm1
140a3b9ce: xorps  xmm0,xmm0
140a3b9d1: ucomiss xmm0,xmm1
140a3b9d4: ja     0x140a3b9df
140a3b9d6: xorps  xmm0,xmm0
140a3b9d9: sqrtss xmm0,xmm1
140a3b9dd: jmp    0x140a3b9e7
140a3b9df: movaps xmm0,xmm1
140a3b9e2: call   0x14153ae80
140a3b9e7: cvttss2si ebx,xmm0
140a3b9eb: call   0x140eb68b0
140a3b9f0: mov    r8d,eax
140a3b9f3: mov    eax,0x3
140a3b9f8: mul    r8d
140a3b9fb: mov    ecx,r8d
140a3b9fe: sub    ecx,edx
140a3ba00: shr    ecx,1
140a3ba02: add    ecx,edx
140a3ba04: shr    ecx,0x1e
140a3ba07: imul   ecx,ecx,0x7fffffff
140a3ba0d: sub    r8d,ecx
140a3ba10: cmp    r8d,0x2bb0d0
140a3ba17: jb     0x140a3ba79
140a3ba19: cmp    bx,0x3
140a3ba1d: jge    0x140a3bd85
140a3ba23: call   0x140eb68b0
140a3ba28: mov    r8d,eax
140a3ba2b: mov    eax,0x3
140a3ba30: mul    r8d
140a3ba33: mov    ecx,r8d
140a3ba36: sub    ecx,edx
140a3ba38: shr    ecx,1
140a3ba3a: add    ecx,edx
140a3ba3c: shr    ecx,0x1e
140a3ba3f: imul   ecx,ecx,0x7fffffff
140a3ba45: sub    r8d,ecx
140a3ba48: cmp    r8d,0xa3d70b
140a3ba4f: jae    0x140a3bd85
140a3ba55: cmp    QWORD PTR [r15+0x3b0],0x0
140a3ba5d: jne    0x140a3bd85
140a3ba63: movzx  eax,WORD PTR [r15+0xb2]
140a3ba6b: cmp    WORD PTR [r15+0xac],ax
140a3ba73: jne    0x140a3bd85
140a3ba79: xorps  xmm0,xmm0
140a3ba7c: movdqu XMMWORD PTR [rbp-0x11],xmm0
140a3ba81: xor    eax,eax
140a3ba83: mov    ebx,eax
140a3ba85: mov    QWORD PTR [rbp-0x1],rax
140a3ba89: mov    rsi,QWORD PTR [rip+0x19a9cd8]        # 0x1423e5768
140a3ba90: mov    r14,QWORD PTR [rip+0x19a9cd9]        # 0x1423e5770
140a3ba97: mov    r12,QWORD PTR [rbp-0x9]
140a3ba9b: nop    DWORD PTR [rax+rax*1+0x0]
140a3baa0: cmp    rsi,r14
140a3baa3: jae    0x140a3bc0a
140a3baa9: mov    r13,QWORD PTR [rsi]
140a3baac: mov    QWORD PTR [rbp+0x1f],r13
140a3bab0: mov    eax,DWORD PTR [r13+0x10]
140a3bab4: and    eax,0x480c11
140a3bab9: cmp    eax,0x1
140a3babc: jne    0x140a3bbfd
140a3bac2: mov    eax,0xffff8ad0
140a3bac7: mov    WORD PTR [rbp+0x7f],ax
140a3bacb: mov    eax,DWORD PTR [r13+0x10]
140a3bacf: test   al,0x10
140a3bad1: jne    0x140a3bbac
140a3bad7: test   al,0x8
140a3bad9: je     0x140a3bb91
140a3badf: mov    rbx,QWORD PTR [r13+0x38]
140a3bae3: mov    rdi,QWORD PTR [r13+0x40]
140a3bae7: cmp    rbx,rdi
140a3baea: jae    0x140a3bb58
140a3baec: mov    rcx,QWORD PTR [rbx]
140a3baef: mov    rax,QWORD PTR [rcx]
140a3baf2: call   QWORD PTR [rax+0x10]
140a3baf5: cmp    eax,0xb
140a3baf8: je     0x140a3bb2a
140a3bafa: cmp    eax,0x12
140a3bafd: jne    0x140a3bb38
140a3baff: mov    rcx,QWORD PTR [rbx]
140a3bb02: mov    rax,QWORD PTR [rcx]
140a3bb05: call   QWORD PTR [rax+0x20]
140a3bb08: test   rax,rax
140a3bb0b: je     0x140a3bb38
140a3bb0d: lea    r9,[rbp-0x19]
140a3bb11: lea    r8,[rbp+0x77]
140a3bb15: lea    rdx,[rbp+0x7f]
140a3bb19: mov    rcx,rax
140a3bb1c: call   0x141367430
140a3bb21: mov    rbx,QWORD PTR [rbp-0x1]
140a3bb25: jmp    0x140a3bbac
140a3bb2a: mov    rcx,QWORD PTR [rbx]
140a3bb2d: mov    rax,QWORD PTR [rcx]
140a3bb30: call   QWORD PTR [rax+0x18]
140a3bb33: test   rax,rax
140a3bb36: jne    0x140a3bb3e
140a3bb38: add    rbx,0x8
140a3bb3c: jmp    0x140a3bae7
140a3bb3e: lea    r9,[rbp-0x19]
140a3bb42: lea    r8,[rbp+0x77]
140a3bb46: lea    rdx,[rbp+0x7f]
140a3bb4a: mov    rcx,rax
140a3bb4d: call   0x140c8baa0
140a3bb52: mov    rbx,QWORD PTR [rbp-0x1]
140a3bb56: jmp    0x140a3bbac
140a3bb58: mov    rax,QWORD PTR [r13+0x20]
140a3bb5c: mov    rcx,QWORD PTR [r13+0x28]
140a3bb60: cmp    rax,rcx
140a3bb63: jae    0x140a3bb52
140a3bb65: mov    rdx,QWORD PTR [rax]
140a3bb68: cmp    DWORD PTR [rdx],0x7
140a3bb6b: je     0x140a3bb73
140a3bb6d: add    rax,0x8
140a3bb71: jmp    0x140a3bb60
140a3bb73: mov    rcx,QWORD PTR [rdx+0x8]
140a3bb77: movzx  eax,WORD PTR [rcx+0x4]
140a3bb7b: mov    WORD PTR [rbp+0x7f],ax
140a3bb7f: movzx  eax,WORD PTR [rcx+0x6]
140a3bb83: mov    WORD PTR [rbp+0x77],ax
140a3bb87: movzx  eax,WORD PTR [rcx+0x8]
140a3bb8b: mov    rbx,QWORD PTR [rbp-0x1]
140a3bb8f: jmp    0x140a3bba8
140a3bb91: movzx  eax,WORD PTR [r13+0x8]
140a3bb96: mov    WORD PTR [rbp+0x7f],ax
140a3bb9a: movzx  eax,WORD PTR [r13+0xa]
140a3bb9f: mov    WORD PTR [rbp+0x77],ax
140a3bba3: movzx  eax,WORD PTR [r13+0xc]
140a3bba8: mov    WORD PTR [rbp-0x19],ax
140a3bbac: mov    BYTE PTR [rsp+0x20],0x1
140a3bbb1: movzx  r9d,WORD PTR [rbp-0x19]
140a3bbb6: movzx  r8d,WORD PTR [rbp+0x77]
140a3bbbb: movzx  edx,WORD PTR [rbp+0x7f]
140a3bbbf: mov    rcx,r15
140a3bbc2: call   0x1413a4910
140a3bbc7: test   al,al
140a3bbc9: je     0x140a3bbfd
140a3bbcb: cmp    r12,rbx
140a3bbce: je     0x140a3bbe9
140a3bbd0: mov    QWORD PTR [r12],r13
140a3bbd4: add    r12,0x8
140a3bbd8: mov    QWORD PTR [rbp-0x9],r12
140a3bbdc: add    rsi,0x8
140a3bbe0: mov    rbx,QWORD PTR [rbp-0x1]
140a3bbe4: jmp    0x140a3baa0
140a3bbe9: lea    r8,[rbp+0x1f]
140a3bbed: mov    rdx,r12
140a3bbf0: lea    rcx,[rbp-0x11]
140a3bbf4: call   0x1400bad30
140a3bbf9: mov    r12,QWORD PTR [rbp-0x9]
140a3bbfd: add    rsi,0x8
140a3bc01: mov    rbx,QWORD PTR [rbp-0x1]
140a3bc05: jmp    0x140a3baa0
140a3bc0a: mov    rsi,QWORD PTR [rbp-0x11]
140a3bc0e: sub    r12,rsi
140a3bc11: sar    r12,0x3
140a3bc15: test   r12,r12
140a3bc18: je     0x140a3bd7c
140a3bc1e: xor    eax,eax
140a3bc20: mov    QWORD PTR [r15+0x3b0],rax
140a3bc27: cmp    r12d,0x1
140a3bc2b: jbe    0x140a3bc66
140a3bc2d: call   0x140eb68b0
140a3bc32: mov    r8d,eax
140a3bc35: mov    eax,0x3
140a3bc3a: mul    r8d
140a3bc3d: mov    ecx,r8d
140a3bc40: sub    ecx,edx
140a3bc42: shr    ecx,1
140a3bc44: add    ecx,edx
140a3bc46: shr    ecx,0x1e
140a3bc49: imul   ecx,ecx,0x80000001
140a3bc4f: add    r8d,ecx
140a3bc52: xor    edx,edx
140a3bc54: mov    eax,0x7fffffff
140a3bc59: div    r12d
140a3bc5c: lea    ecx,[rax+0x1]
140a3bc5f: xor    edx,edx
140a3bc61: mov    eax,r8d
140a3bc64: div    ecx
140a3bc66: cdqe
140a3bc68: mov    rsi,QWORD PTR [rsi+rax*8]
140a3bc6c: mov    eax,0xffff8ad0
140a3bc71: mov    WORD PTR [rbp+0x7f],ax
140a3bc75: mov    eax,DWORD PTR [rsi+0x10]
140a3bc78: test   al,0x10
140a3bc7a: jne    0x140a3bd45
140a3bc80: test   al,0x8
140a3bc82: je     0x140a3bd2d
140a3bc88: mov    rbx,QWORD PTR [rsi+0x38]
140a3bc8c: mov    rdi,QWORD PTR [rsi+0x40]
140a3bc90: cmp    rbx,rdi
140a3bc93: jae    0x140a3bcf6
140a3bc95: mov    rcx,QWORD PTR [rbx]
140a3bc98: mov    rax,QWORD PTR [rcx]
140a3bc9b: call   QWORD PTR [rax+0x10]
140a3bc9e: cmp    eax,0xb
140a3bca1: je     0x140a3bccc
140a3bca3: cmp    eax,0x12
140a3bca6: jne    0x140a3bcda
140a3bca8: mov    rcx,QWORD PTR [rbx]
140a3bcab: mov    rax,QWORD PTR [rcx]
140a3bcae: call   QWORD PTR [rax+0x20]
140a3bcb1: test   rax,rax
140a3bcb4: je     0x140a3bcda
140a3bcb6: lea    r9,[rbp-0x19]
140a3bcba: lea    r8,[rbp+0x77]
140a3bcbe: lea    rdx,[rbp+0x7f]
140a3bcc2: mov    rcx,rax
140a3bcc5: call   0x141367430
140a3bcca: jmp    0x140a3bd45
140a3bccc: mov    rcx,QWORD PTR [rbx]
140a3bccf: mov    rax,QWORD PTR [rcx]
140a3bcd2: call   QWORD PTR [rax+0x18]
140a3bcd5: test   rax,rax
140a3bcd8: jne    0x140a3bce0
140a3bcda: add    rbx,0x8
140a3bcde: jmp    0x140a3bc90
140a3bce0: lea    r9,[rbp-0x19]
140a3bce4: lea    r8,[rbp+0x77]
140a3bce8: lea    rdx,[rbp+0x7f]
140a3bcec: mov    rcx,rax
140a3bcef: call   0x140c8baa0
140a3bcf4: jmp    0x140a3bd45
140a3bcf6: mov    rax,QWORD PTR [rsi+0x20]
140a3bcfa: mov    rcx,QWORD PTR [rsi+0x28]
140a3bcfe: xchg   ax,ax
140a3bd00: cmp    rax,rcx
140a3bd03: jae    0x140a3bd45
140a3bd05: mov    rdx,QWORD PTR [rax]
140a3bd08: cmp    DWORD PTR [rdx],0x7
140a3bd0b: je     0x140a3bd13
140a3bd0d: add    rax,0x8
140a3bd11: jmp    0x140a3bd00
140a3bd13: mov    rcx,QWORD PTR [rdx+0x8]
140a3bd17: movzx  eax,WORD PTR [rcx+0x4]
140a3bd1b: mov    WORD PTR [rbp+0x7f],ax
140a3bd1f: movzx  eax,WORD PTR [rcx+0x6]
140a3bd23: mov    WORD PTR [rbp+0x77],ax
140a3bd27: movzx  eax,WORD PTR [rcx+0x8]
140a3bd2b: jmp    0x140a3bd41
140a3bd2d: movzx  eax,WORD PTR [rsi+0x8]
140a3bd31: mov    WORD PTR [rbp+0x7f],ax
140a3bd35: movzx  eax,WORD PTR [rsi+0xa]
140a3bd39: mov    WORD PTR [rbp+0x77],ax
140a3bd3d: movzx  eax,WORD PTR [rsi+0xc]
140a3bd41: mov    WORD PTR [rbp-0x19],ax
140a3bd45: mov    rcx,QWORD PTR [rbp+0x6f]
140a3bd49: mov    DWORD PTR [rcx],0x3c
140a3bd4f: mov    DWORD PTR [rcx+0x4],0x28
140a3bd56: movzx  eax,WORD PTR [rbp+0x7f]
140a3bd5a: mov    WORD PTR [rcx+0x30],ax
140a3bd5e: movzx  eax,WORD PTR [rbp+0x77]
140a3bd62: mov    WORD PTR [rcx+0x32],ax
140a3bd66: movzx  eax,WORD PTR [rbp-0x19]
140a3bd6a: mov    WORD PTR [rcx+0x34],ax
140a3bd6e: mov    DWORD PTR [rcx+0x38],0x15
140a3bd75: mov    DWORD PTR [rcx+0x3c],0x3
140a3bd7c: lea    rcx,[rbp-0x11]
140a3bd80: call   0x140066b70
140a3bd85: mov    rbx,QWORD PTR [rsp+0xd0]
140a3bd8d: add    rsp,0x90
140a3bd94: pop    r15
140a3bd96: pop    r14
140a3bd98: pop    r13
140a3bd9a: pop    r12
140a3bd9c: pop    rdi
140a3bd9d: pop    rsi
140a3bd9e: pop    rbp
140a3bd9f: ret
