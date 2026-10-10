# classic PE:6a70b91c:0270a000; faith-render-path; RVA 0x62a5b4..0x62b240
0x0062a5b4: cmp    DWORD PTR [r13+0x1298],0x2
0x0062a5bc: jne    0x14062ad43
0x0062a5c2: cmp    DWORD PTR [r13+0x5a0],0xffffffff
0x0062a5ca: je     0x14062a784
0x0062a5d0: mov    r14d,DWORD PTR [rbp-0x80]
0x0062a5d4: lea    r15d,[r14+0xb]
0x0062a5d8: lea    r13d,[r14+0xd]
0x0062a5dc: lea    r12d,[r14+0x18]
0x0062a5e0: mov    ebx,DWORD PTR [rip+0x1d9d092]        # 0x1423c7678
0x0062a5e6: add    ebx,0xfffffff8
0x0062a5e9: mov    DWORD PTR [rsp+0x7c],ebx
0x0062a5ed: cmp    r14d,r15d
0x0062a5f0: jg     0x14062a65f
0x0062a5f2: mov    edi,r14d
0x0062a5f5: mov    r13d,ebx
0x0062a5f8: lea    r12,[rip+0x2019ce1]        # 0x1426442e0
0x0062a5ff: nop
0x0062a600: mov    esi,r13d
0x0062a603: lea    rbx,[rip+0x201b732]        # 0x142645d3c
0x0062a60a: lea    r13,[rip+0x201b737]        # 0x142645d48
0x0062a611: mov    r8d,edi
0x0062a614: mov    edx,esi
0x0062a616: mov    rcx,r12
0x0062a619: call   0x1400bb0b0
0x0062a61e: cmp    edi,r14d
0x0062a621: jne    0x14062a628
0x0062a623: mov    edx,DWORD PTR [rbx-0x18]
0x0062a626: jmp    0x14062a634
0x0062a628: cmp    edi,r15d
0x0062a62b: jne    0x14062a631
0x0062a62d: mov    edx,DWORD PTR [rbx]
0x0062a62f: jmp    0x14062a634
0x0062a631: mov    edx,DWORD PTR [rbx-0xc]
0x0062a634: mov    rcx,r12
0x0062a637: call   0x140ad7b10
0x0062a63c: inc    esi
0x0062a63e: add    rbx,0x4
0x0062a642: cmp    rbx,r13
0x0062a645: jl     0x14062a611
0x0062a647: inc    edi
0x0062a649: cmp    edi,r15d
0x0062a64c: mov    r13d,DWORD PTR [rsp+0x7c]
0x0062a651: jle    0x14062a600
0x0062a653: lea    r12d,[r14+0x18]
0x0062a657: lea    r13d,[r14+0xd]
0x0062a65b: mov    ebx,DWORD PTR [rsp+0x7c]
0x0062a65f: xor    r8d,r8d
0x0062a662: mov    edx,0x7
0x0062a667: mov    r9b,0x1
0x0062a66a: lea    r15,[rip+0x2019c6f]        # 0x1426442e0
0x0062a671: mov    rcx,r15
0x0062a674: call   0x1400bb0c0
0x0062a679: lea    r8d,[r14+0x2]
0x0062a67d: lea    edx,[rbx+0x1]
0x0062a680: mov    rcx,r15
0x0062a683: call   0x1400bb0b0
0x0062a688: lea    rdx,[rip+0x10320f9]        # 0x14165c788 ; literal="Believe"
0x0062a68f: lea    rcx,[rbp+0x2520]
0x0062a696: call   0x1400680e0
0x0062a69b: nop
0x0062a69c: xor    r9d,r9d
0x0062a69f: xor    r8d,r8d
0x0062a6a2: lea    rdx,[rbp+0x2520]
0x0062a6a9: mov    rcx,r15
0x0062a6ac: call   0x140ad69a0
0x0062a6b1: nop
0x0062a6b2: lea    rcx,[rbp+0x2520]
0x0062a6b9: call   0x140067dc0
0x0062a6be: mov    edi,r13d
0x0062a6c1: cmp    r13d,r12d
0x0062a6c4: jg     0x14062a728
0x0062a6c6: data16 nop WORD PTR [rax+rax*1+0x0]
0x0062a6d0: mov    esi,ebx
0x0062a6d2: lea    rbx,[rip+0x201b663]        # 0x142645d3c
0x0062a6d9: nop    DWORD PTR [rax+0x0]
0x0062a6e0: mov    r8d,edi
0x0062a6e3: mov    edx,esi
0x0062a6e5: mov    rcx,r15
0x0062a6e8: call   0x1400bb0b0
0x0062a6ed: cmp    edi,r13d
0x0062a6f0: jne    0x14062a6f7
0x0062a6f2: mov    edx,DWORD PTR [rbx-0x18]
0x0062a6f5: jmp    0x14062a703
0x0062a6f7: cmp    edi,r12d
0x0062a6fa: jne    0x14062a700
0x0062a6fc: mov    edx,DWORD PTR [rbx]
0x0062a6fe: jmp    0x14062a703
0x0062a700: mov    edx,DWORD PTR [rbx-0xc]
0x0062a703: mov    rcx,r15
0x0062a706: call   0x140ad7b10
0x0062a70b: inc    esi
0x0062a70d: add    rbx,0x4
0x0062a711: lea    rax,[rip+0x201b630]        # 0x142645d48
0x0062a718: cmp    rbx,rax
0x0062a71b: jl     0x14062a6e0
0x0062a71d: inc    edi
0x0062a71f: cmp    edi,r12d
0x0062a722: mov    ebx,DWORD PTR [rsp+0x7c]
0x0062a726: jle    0x14062a6d0
0x0062a728: xor    r8d,r8d
0x0062a72b: mov    edx,0x7
0x0062a730: mov    r9b,0x1
0x0062a733: mov    rcx,r15
0x0062a736: call   0x1400bb0c0
0x0062a73b: lea    r8d,[r13+0x3]
0x0062a73f: lea    edx,[rbx+0x1]
0x0062a742: mov    rcx,r15
0x0062a745: call   0x1400bb0b0
0x0062a74a: lea    rdx,[rip+0x103203f]        # 0x14165c790 ; literal="Doubt"
0x0062a751: lea    rcx,[rbp+0x2540]
0x0062a758: call   0x1400680e0
0x0062a75d: nop
0x0062a75e: xor    r9d,r9d
0x0062a761: xor    r8d,r8d
0x0062a764: lea    rdx,[rbp+0x2540]
0x0062a76b: mov    rcx,r15
0x0062a76e: call   0x140ad69a0
0x0062a773: nop
0x0062a774: lea    rcx,[rbp+0x2540]
0x0062a77b: call   0x140067dc0
0x0062a780: mov    r13,QWORD PTR [rbp-0x78]
0x0062a784: mov    r15d,DWORD PTR [rbp-0x80]
0x0062a788: lea    ebx,[r15+0x32]
0x0062a78c: mov    ecx,DWORD PTR [rip+0x1d9cee6]        # 0x1423c7678
0x0062a792: add    ecx,0xffffffde
0x0062a795: mov    eax,0x55555556
0x0062a79a: imul   ecx
0x0062a79c: mov    r12d,edx
0x0062a79f: shr    r12d,0x1f
0x0062a7a3: add    r12d,edx
0x0062a7a6: mov    DWORD PTR [rbp-0x2c],r12d
0x0062a7aa: lea    rdi,[r13+0x12e8]
0x0062a7b1: mov    QWORD PTR [rbp-0x38],rdi
0x0062a7b5: mov    rcx,rdi
0x0062a7b8: call   0x14006f300
0x0062a7bd: mov    QWORD PTR [rbp-0x70],rax
0x0062a7c1: lea    r14d,[rbx-0x2]
0x0062a7c5: cmp    eax,r12d
0x0062a7c8: cmovle r14d,ebx
0x0062a7cc: mov    DWORD PTR [rbp-0x5c],r14d
0x0062a7d0: mov    ecx,DWORD PTR [r13+0x1364]
0x0062a7d7: mov    edx,eax
0x0062a7d9: sub    edx,r12d
0x0062a7dc: cmp    ecx,edx
0x0062a7de: cmovle edx,ecx
0x0062a7e1: xor    ecx,ecx
0x0062a7e3: mov    esi,ecx
0x0062a7e5: test   edx,edx
0x0062a7e7: cmovns esi,edx
0x0062a7ea: mov    DWORD PTR [rbp-0x68],esi
0x0062a7ed: lea    ecx,[r12+rsi*1]
0x0062a7f1: mov    DWORD PTR [rbp-0x64],ecx
0x0062a7f4: cmp    esi,ecx
0x0062a7f6: jge    0x14062acd0
0x0062a7fc: mov    r13d,0x1b
0x0062a802: mov    DWORD PTR [rsp+0x74],r13d
0x0062a807: cmp    esi,eax
0x0062a809: jge    0x14062acc8
0x0062a80f: xor    r12b,r12b
0x0062a812: movsxd rbx,esi
0x0062a815: mov    rdx,rbx
0x0062a818: mov    rcx,rdi
0x0062a81b: call   0x14006f2f0
0x0062a820: mov    ecx,DWORD PTR [rax]
0x0062a822: cmp    ecx,0xffffffff
0x0062a825: je     0x14062a87c
0x0062a827: test   ecx,ecx
0x0062a829: je     0x14062a851
0x0062a82b: cmp    ecx,0x1
0x0062a82e: jne    0x14062a89d
0x0062a830: mov    rdi,QWORD PTR [rbp-0x78]
0x0062a834: lea    rcx,[rdi+0x1300]
0x0062a83b: mov    rdx,rbx
0x0062a83e: call   0x14006f2f0
0x0062a843: mov    ecx,DWORD PTR [rax]
0x0062a845: cmp    DWORD PTR [rdi+0x5a4],ecx
0x0062a84b: sete   r12b
0x0062a84f: jmp    0x14062a89d
0x0062a851: mov    rdi,QWORD PTR [rbp-0x78]
0x0062a855: lea    rcx,[rdi+0x1300]
0x0062a85c: mov    rdx,rbx
0x0062a85f: call   0x14006f2f0
0x0062a864: mov    ecx,DWORD PTR [rax]
0x0062a866: cmp    DWORD PTR [rdi+0x5a0],ecx
0x0062a86c: jne    0x14062a89d
0x0062a86e: cmp    DWORD PTR [rdi+0x5a4],0xffffffff
0x0062a875: jne    0x14062a89d
0x0062a877: mov    r12b,0x1
0x0062a87a: jmp    0x14062a89d
0x0062a87c: mov    rax,QWORD PTR [rbp-0x78]
0x0062a880: cmp    DWORD PTR [rax+0x5a0],0xffffffff
0x0062a887: jne    0x14062a89d
0x0062a889: movzx  r12d,r12b
0x0062a88d: cmp    DWORD PTR [rax+0x5a4],0xffffffff
0x0062a894: mov    eax,0x1
0x0062a899: cmove  r12d,eax
0x0062a89d: xor    r8d,r8d
0x0062a8a0: mov    edx,0x7
0x0062a8a5: mov    r9b,0x1
0x0062a8a8: lea    rbx,[rip+0x2019a31]        # 0x1426442e0
0x0062a8af: mov    rcx,rbx
0x0062a8b2: call   0x1400bb0c0
0x0062a8b7: mov    edi,r15d
0x0062a8ba: cmp    r15d,r14d
0x0062a8bd: jg     0x14062a98b
0x0062a8c3: inc    r13d
0x0062a8c6: mov    eax,DWORD PTR [rsp+0x74]
0x0062a8ca: add    eax,0xfffffffe
0x0062a8cd: mov    DWORD PTR [rsp+0x78],eax
0x0062a8d1: mov    esi,eax
0x0062a8d3: cmp    eax,r13d
0x0062a8d6: jge    0x14062a971
0x0062a8dc: lea    rbx,[rip+0x201b4a1]        # 0x142645d84
0x0062a8e3: mov    r8d,edi
0x0062a8e6: mov    edx,esi
0x0062a8e8: lea    rcx,[rip+0x20199f1]        # 0x1426442e0
0x0062a8ef: call   0x1400bb0b0
0x0062a8f4: test   r12b,r12b
0x0062a8f7: je     0x14062a918
0x0062a8f9: cmp    edi,r15d
0x0062a8fc: jne    0x14062a903
0x0062a8fe: mov    edx,DWORD PTR [rbx-0x18]
0x0062a901: jmp    0x14062a92f
0x0062a903: lea    rcx,[rip+0x20199d6]        # 0x1426442e0
0x0062a90a: cmp    edi,r14d
0x0062a90d: jne    0x14062a913
0x0062a90f: mov    edx,DWORD PTR [rbx]
0x0062a911: jmp    0x14062a936
0x0062a913: mov    edx,DWORD PTR [rbx-0xc]
0x0062a916: jmp    0x14062a936
0x0062a918: cmp    edi,r15d
0x0062a91b: jne    0x14062a922
0x0062a91d: mov    edx,DWORD PTR [rbx-0x60]
0x0062a920: jmp    0x14062a92f
0x0062a922: cmp    edi,r14d
0x0062a925: jne    0x14062a92c
0x0062a927: mov    edx,DWORD PTR [rbx-0x48]
0x0062a92a: jmp    0x14062a92f
0x0062a92c: mov    edx,DWORD PTR [rbx-0x54]
0x0062a92f: lea    rcx,[rip+0x20199aa]        # 0x1426442e0
0x0062a936: call   0x140ad7b10
0x0062a93b: xor    edx,edx
0x0062a93d: lea    rcx,[rip+0x1d9cd1c]        # 0x1423c7660
0x0062a944: call   0x140071f20
0x0062a949: test   al,al
0x0062a94b: je     0x14062a95e
0x0062a94d: mov    r8b,0x1
0x0062a950: xor    edx,edx
0x0062a952: lea    rcx,[rip+0x2019987]        # 0x1426442e0
0x0062a959: call   0x1400bb120
0x0062a95e: inc    esi
0x0062a960: add    rbx,0x4
0x0062a964: cmp    esi,r13d
0x0062a967: jl     0x14062a8e3
0x0062a96d: mov    eax,DWORD PTR [rsp+0x78]
0x0062a971: inc    edi
0x0062a973: cmp    edi,r14d
0x0062a976: jle    0x14062a8d1
0x0062a97c: mov    esi,DWORD PTR [rbp-0x68]
0x0062a97f: mov    r13d,DWORD PTR [rsp+0x74]
0x0062a984: lea    rbx,[rip+0x2019955]        # 0x1426442e0
0x0062a98b: xor    r8d,r8d
0x0062a98e: mov    edx,0x7
0x0062a993: mov    rcx,rbx
0x0062a996: test   r12b,r12b
0x0062a999: je     0x14062a9a0
0x0062a99b: mov    r9b,0x1
0x0062a99e: jmp    0x14062a9a3
0x0062a9a0: xor    r9d,r9d
0x0062a9a3: call   0x1400bb0c0
0x0062a9a8: lea    r8d,[r15+0x2]
0x0062a9ac: lea    edx,[r13-0x1]
0x0062a9b0: mov    rcx,rbx
0x0062a9b3: call   0x1400bb0b0
0x0062a9b8: lea    rcx,[rbp+0x1360]
0x0062a9bf: call   0x14006f620
0x0062a9c4: nop
0x0062a9c5: movsxd rdx,esi
0x0062a9c8: mov    rdi,QWORD PTR [rbp-0x38]
0x0062a9cc: mov    rcx,rdi
0x0062a9cf: call   0x14006f2f0
0x0062a9d4: mov    ecx,DWORD PTR [rax]
0x0062a9d6: cmp    ecx,0xffffffff
0x0062a9d9: je     0x14062aa68
0x0062a9df: test   ecx,ecx
0x0062a9e1: je     0x14062aa1b
0x0062a9e3: mov    r12,QWORD PTR [rbp-0x78]
0x0062a9e7: cmp    ecx,0x1
0x0062a9ea: jne    0x14062aa7f
0x0062a9f0: lea    rcx,[r12+0x1300]
0x0062a9f8: movsxd rdx,esi
0x0062a9fb: call   0x14006f2f0
0x0062aa00: xor    r9d,r9d
0x0062aa03: mov    r8d,DWORD PTR [rax]
0x0062aa06: lea    rdx,[rbp+0x1360]
0x0062aa0d: lea    rcx,[rip+0x1ec9194]        # 0x1424f3ba8
0x0062aa14: call   0x140b8f940
0x0062aa19: jmp    0x14062aa7f
0x0062aa1b: lea    rcx,[rbp+0x450]
0x0062aa22: call   0x140072010
0x0062aa27: mov    r12,QWORD PTR [rbp-0x78]
0x0062aa2b: lea    rcx,[r12+0x1300]
0x0062aa33: movsxd rdx,esi
0x0062aa36: call   0x14006f2f0
0x0062aa3b: mov    WORD PTR [rsp+0x28],0x1
0x0062aa42: xor    ecx,ecx
0x0062aa44: mov    WORD PTR [rsp+0x20],cx
0x0062aa49: lea    r9,[rbp+0x450]
0x0062aa50: mov    r8d,DWORD PTR [rax]
0x0062aa53: lea    rdx,[rbp+0x1360]
0x0062aa5a: lea    rcx,[rip+0x1ec9147]        # 0x1424f3ba8
0x0062aa61: call   0x140b8ff50
0x0062aa66: jmp    0x14062aa7f
0x0062aa68: lea    rdx,[rip+0xfcfd6d]        # 0x1415fa7dc ; literal="None"
0x0062aa6f: lea    rcx,[rbp+0x1360]
0x0062aa76: call   0x14006f510
0x0062aa7b: mov    r12,QWORD PTR [rbp-0x78]
0x0062aa7f: lea    rcx,[rbp+0x1360]
0x0062aa86: call   0x14052b070
0x0062aa8b: xor    r9d,r9d
0x0062aa8e: xor    r8d,r8d
0x0062aa91: lea    rdx,[rbp+0x1360]
0x0062aa98: mov    rcx,rbx
0x0062aa9b: call   0x140ad69a0
0x0062aaa0: movsxd rdx,esi
0x0062aaa3: mov    rcx,rdi
0x0062aaa6: call   0x14006f2f0
0x0062aaab: cmp    DWORD PTR [rax],0xffffffff
0x0062aaae: je     0x14062ac6a
0x0062aab4: lea    r8d,[r15+0x4]
0x0062aab8: mov    edx,r13d
0x0062aabb: mov    rcx,rbx
0x0062aabe: call   0x1400bb0b0
0x0062aac3: lea    rcx,[rbp+0x1140]
0x0062aaca: call   0x14006f620
0x0062aacf: nop
0x0062aad0: movsxd rdx,esi
0x0062aad3: mov    rcx,rdi
0x0062aad6: call   0x14006f2f0
0x0062aadb: mov    edx,DWORD PTR [rax]
0x0062aadd: test   edx,edx
0x0062aadf: je     0x14062af56
0x0062aae5: cmp    edx,0x1
0x0062aae8: jne    0x14062abc2
0x0062aaee: lea    rdx,[rip+0xfbcddb]        # 0x1415e78d0 ; literal="Religion"
0x0062aaf5: lea    rcx,[rbp+0x1140]
0x0062aafc: call   0x14006f510
0x0062ab01: lea    rcx,[r12+0x1300]
0x0062ab09: movsxd rdx,esi
0x0062ab0c: call   0x14006f2f0
0x0062ab11: mov    edx,DWORD PTR [rax]
0x0062ab13: lea    rcx,[rip+0x1da0bce]        # 0x1423cb6e8
0x0062ab1a: call   0x14007da80
0x0062ab1f: mov    r13,rax
0x0062ab22: test   rax,rax
0x0062ab25: je     0x14062abbd
0x0062ab2b: lea    rdx,[rbp+0xa8]
0x0062ab32: lea    rcx,[r12+0x1280]
0x0062ab3a: call   0x14006f1d0
0x0062ab3f: lea    rdx,[rbp+0x168]
0x0062ab46: lea    rcx,[r12+0x1280]
0x0062ab4e: call   0x14006f1c0
0x0062ab53: lea    rdx,[rbp+0x168]
0x0062ab5a: lea    rcx,[rbp+0xa8]
0x0062ab61: call   0x1400b9900
0x0062ab66: test   al,al
0x0062ab68: jne    0x14062abb6
0x0062ab6a: nop    WORD PTR [rax+rax*1+0x0]
0x0062ab70: lea    rcx,[rbp+0xa8]
0x0062ab77: call   0x14006eda0
0x0062ab7c: mov    rbx,QWORD PTR [rax]
0x0062ab7f: mov    eax,DWORD PTR [r12+0x340]
0x0062ab87: cmp    DWORD PTR [rbx+0x88],eax
0x0062ab8d: je     0x14062adf7
0x0062ab93: lea    rcx,[rbp+0xa8]
0x0062ab9a: call   0x14006ed90
0x0062ab9f: lea    rdx,[rbp+0x168]
0x0062aba6: lea    rcx,[rbp+0xa8]
0x0062abad: call   0x1400b9900
0x0062abb2: test   al,al
0x0062abb4: je     0x14062ab70
0x0062abb6: lea    rbx,[rip+0x2019723]        # 0x1426442e0
0x0062abbd: mov    r13d,DWORD PTR [rsp+0x74]
0x0062abc2: mov    edi,r14d
0x0062abc5: sub    edi,r15d
0x0062abc8: lea    rcx,[rbp+0x1140]
0x0062abcf: call   0x14006f2c0
0x0062abd4: lea    ecx,[rdi-0x8]
0x0062abd7: movsxd rdx,ecx
0x0062abda: cmp    rax,rdx
0x0062abdd: jb     0x14062ac41
0x0062abdf: lea    ebx,[rdi-0x9]
0x0062abe2: movsxd rsi,edi
0x0062abe5: lea    rdx,[rsi-0x9]
0x0062abe9: xor    r8d,r8d
0x0062abec: lea    rcx,[rbp+0x1140]
0x0062abf3: call   0x1400e11c0
0x0062abf8: cmp    ebx,0x3
0x0062abfb: jle    0x14062ac3a
0x0062abfd: lea    rdx,[rsi-0xc]
0x0062ac01: lea    rcx,[rbp+0x1140]
0x0062ac08: call   0x1400fb4d0
0x0062ac0d: mov    BYTE PTR [rax],0x2e
0x0062ac10: lea    eax,[rdi-0xb]
0x0062ac13: movsxd rdx,eax
0x0062ac16: lea    rcx,[rbp+0x1140]
0x0062ac1d: call   0x1400fb4d0
0x0062ac22: mov    BYTE PTR [rax],0x2e
0x0062ac25: lea    eax,[rdi-0xa]
0x0062ac28: movsxd rdx,eax
0x0062ac2b: lea    rcx,[rbp+0x1140]
0x0062ac32: call   0x1400fb4d0
0x0062ac37: mov    BYTE PTR [rax],0x2e
0x0062ac3a: lea    rbx,[rip+0x201969f]        # 0x1426442e0
0x0062ac41: xor    r9d,r9d
0x0062ac44: xor    r8d,r8d
0x0062ac47: lea    rdx,[rbp+0x1140]
0x0062ac4e: mov    rcx,rbx
0x0062ac51: call   0x140ad69a0
0x0062ac56: nop
0x0062ac57: lea    rcx,[rbp+0x1140]
0x0062ac5e: call   0x140067dc0
0x0062ac63: mov    esi,DWORD PTR [rbp-0x68]
0x0062ac66: mov    rdi,QWORD PTR [rbp-0x38]
0x0062ac6a: mov    eax,DWORD PTR [rbp-0x60]
0x0062ac6d: cmp    eax,r15d
0x0062ac70: jl     0x14062aca1
0x0062ac72: cmp    eax,r14d
0x0062ac75: jg     0x14062aca1
0x0062ac77: lea    eax,[r13-0x2]
0x0062ac7b: mov    ecx,DWORD PTR [rbp-0x58]
0x0062ac7e: cmp    ecx,eax
0x0062ac80: jl     0x14062aca1
0x0062ac82: cmp    ecx,r13d
0x0062ac85: jg     0x14062aca1
0x0062ac87: mov    r9d,esi
0x0062ac8a: mov    eax,0xffffffff
0x0062ac8f: mov    r8d,eax
0x0062ac92: mov    edx,eax
0x0062ac94: mov    rcx,QWORD PTR [rbp-0x78]
0x0062ac98: call   0x14063b7b0
0x0062ac9d: mov    BYTE PTR [rbp-0x3c],0x1
0x0062aca1: add    r13d,0x3
0x0062aca5: mov    DWORD PTR [rsp+0x74],r13d
0x0062acaa: lea    rcx,[rbp+0x1360]
0x0062acb1: call   0x140067dc0
0x0062acb6: inc    esi
0x0062acb8: mov    DWORD PTR [rbp-0x68],esi
0x0062acbb: cmp    esi,DWORD PTR [rbp-0x64]
0x0062acbe: mov    rax,QWORD PTR [rbp-0x70]
0x0062acc2: jl     0x14062a807
0x0062acc8: mov    r12d,DWORD PTR [rbp-0x2c]
0x0062accc: mov    r13,QWORD PTR [rbp-0x78]
0x0062acd0: cmp    eax,r12d
0x0062acd3: jle    0x14062ad43
0x0062acd5: lea    ebx,[r12*2+0x17]
0x0062acdd: add    ebx,r12d
0x0062ace0: lea    rcx,[rbp+0x270]
0x0062ace7: call   0x1400bb2f0
0x0062acec: mov    r9,QWORD PTR [rbp-0x70]
0x0062acf0: dec    r9d
0x0062acf3: mov    DWORD PTR [rsp+0x30],ebx
0x0062acf7: mov    DWORD PTR [rsp+0x28],0x1a
0x0062acff: mov    DWORD PTR [rsp+0x20],r12d
0x0062ad04: xor    r8d,r8d
0x0062ad07: mov    edx,DWORD PTR [r13+0x1364]
0x0062ad0e: lea    rcx,[rbp+0x270]
0x0062ad15: call   0x1400bb310
0x0062ad1a: lea    r9d,[r14+0x1]
0x0062ad1e: xor    eax,eax
0x0062ad20: mov    DWORD PTR [rsp+0x28],eax
0x0062ad24: movzx  eax,BYTE PTR [r13+0x1368]
0x0062ad2c: mov    BYTE PTR [rsp+0x20],al
0x0062ad30: mov    r8d,DWORD PTR [rbp-0x58]
0x0062ad34: mov    edx,DWORD PTR [rbp-0x60]
0x0062ad37: lea    rcx,[rbp+0x270]
0x0062ad3e: call   0x14140a440
0x0062ad43: cmp    BYTE PTR [rbp-0x3c],0x0
0x0062ad47: je     0x14062b167
0x0062ad4d: lea    rcx,[r13+0x1330]
0x0062ad54: call   0x14006ede0
0x0062ad59: test   rax,rax
0x0062ad5c: je     0x14062b167
0x0062ad62: mov    ebx,DWORD PTR [rip+0x1d9c910]        # 0x1423c7678
0x0062ad68: add    ebx,0xffffffec
0x0062ad6b: lea    rcx,[r13+0x1330]
0x0062ad72: call   0x14006ede0
0x0062ad77: mov    esi,DWORD PTR [rbp-0x80]
0x0062ad7a: add    esi,0x35
0x0062ad7d: lea    edi,[rsi+0x1f]
0x0062ad80: mov    r15d,DWORD PTR [rip+0x1d9c8f1]        # 0x1423c7678
0x0062ad87: add    r15d,0xfffffffa
0x0062ad8b: cmp    eax,ebx
0x0062ad8d: cmovl  ebx,eax
0x0062ad90: mov    r13d,r15d
0x0062ad93: sub    r13d,ebx
0x0062ad96: mov    DWORD PTR [rsp+0x78],r13d
0x0062ad9b: lea    r12d,[r13-0x1]
0x0062ad9f: mov    r14d,r12d
0x0062ada2: cmp    r12d,r15d
0x0062ada5: jg     0x14062b08e
0x0062adab: lea    r13,[rip+0x201952e]        # 0x1426442e0
0x0062adb2: mov    ebx,esi
0x0062adb4: cmp    esi,edi
0x0062adb6: jg     0x14062b07d
0x0062adbc: nop    DWORD PTR [rax+0x0]
0x0062adc0: mov    r8d,ebx
0x0062adc3: mov    edx,r14d
0x0062adc6: mov    rcx,r13
0x0062adc9: call   0x1400bb0b0
0x0062adce: xor    r8d,r8d
0x0062add1: xor    edx,edx
0x0062add3: mov    rcx,r13
0x0062add6: call   0x1400bb120
0x0062addb: cmp    r14d,r12d
0x0062adde: jne    0x14062b027
0x0062ade4: cmp    ebx,esi
0x0062ade6: jne    0x14062b010
0x0062adec: mov    edx,DWORD PTR [rip+0x201ae12]        # 0x142645c04
0x0062adf2: jmp    0x14062b06b
0x0062adf7: xor    eax,eax
0x0062adf9: mov    r12d,eax
0x0062adfc: mov    esi,eax
0x0062adfe: lea    rdx,[rbp+0x20]
0x0062ae02: lea    rcx,[rbx+0x2b0]
0x0062ae09: call   0x14006f1d0
0x0062ae0e: lea    rdx,[rbp+0x170]
0x0062ae15: lea    rcx,[rbx+0x2b0]
0x0062ae1c: call   0x14006f1c0
0x0062ae21: lea    r8,[rbp+0x170]
0x0062ae28: lea    rdx,[rbp-0x6]
0x0062ae2c: lea    rcx,[rbp+0x20]
0x0062ae30: call   0x14006edb0
0x0062ae35: xor    edx,edx
0x0062ae37: movzx  ecx,BYTE PTR [rax]
0x0062ae3a: call   0x140065740
0x0062ae3f: test   al,al
0x0062ae41: je     0x14062abb6
0x0062ae47: mov    r14d,0x1
0x0062ae4d: nop    DWORD PTR [rax]
0x0062ae50: lea    rcx,[rbp+0x20]
0x0062ae54: call   0x14006eda0
0x0062ae59: mov    rcx,QWORD PTR [rax]
0x0062ae5c: add    rcx,0x28
0x0062ae60: mov    edx,r14d
0x0062ae63: call   0x140071f20
0x0062ae68: test   al,al
0x0062ae6a: jne    0x14062aee5
0x0062ae6c: lea    rcx,[rbp+0x20]
0x0062ae70: call   0x14006eda0
0x0062ae75: mov    rcx,QWORD PTR [rax]
0x0062ae78: add    rcx,0x28
0x0062ae7c: xor    edx,edx
0x0062ae7e: call   0x140071f20
0x0062ae83: movzx  edi,al
0x0062ae86: lea    rcx,[rbp+0x20]
0x0062ae8a: call   0x14006eda0
0x0062ae8f: mov    rcx,QWORD PTR [rax]
0x0062ae92: add    rcx,0x28
0x0062ae96: mov    edx,0x3
0x0062ae9b: call   0x140071f20
0x0062aea0: test   al,al
0x0062aea2: cmovne edi,r14d
0x0062aea6: lea    rcx,[rbp+0x20]
0x0062aeaa: call   0x14006eda0
0x0062aeaf: mov    rcx,QWORD PTR [rax]
0x0062aeb2: mov    rax,QWORD PTR [rcx]
0x0062aeb5: call   QWORD PTR [rax]
0x0062aeb7: cmp    ax,0x2
0x0062aebb: jne    0x14062aee5
0x0062aebd: lea    rcx,[rbp+0x20]
0x0062aec1: call   0x14006eda0
0x0062aec6: mov    rbx,QWORD PTR [rax]
0x0062aec9: mov    rax,QWORD PTR [rbx]
0x0062aecc: mov    rcx,rbx
0x0062aecf: call   QWORD PTR [rax+0x38]
0x0062aed2: cmp    eax,DWORD PTR [r13+0x4]
0x0062aed6: jne    0x14062aee5
0x0062aed8: test   dil,dil
0x0062aedb: je     0x14062aee2
0x0062aedd: mov    r12,rbx
0x0062aee0: jmp    0x14062aee5
0x0062aee2: mov    rsi,rbx
0x0062aee5: lea    rcx,[rbp+0x20]
0x0062aee9: call   0x14006ed90
0x0062aeee: lea    r8,[rbp+0x170]
0x0062aef5: lea    rdx,[rbp-0x6]
0x0062aef9: lea    rcx,[rbp+0x20]
0x0062aefd: call   0x14006edb0
0x0062af02: xor    edx,edx
0x0062af04: movzx  ecx,BYTE PTR [rax]
0x0062af07: call   0x140065740
0x0062af0c: test   al,al
0x0062af0e: jne    0x14062ae50
0x0062af14: test   rsi,rsi
0x0062af17: mov    r14d,DWORD PTR [rbp-0x5c]
0x0062af1b: je     0x14062af35
0x0062af1d: lea    rdx,[rip+0x1031874]        # 0x14165c798 ; literal=" with temple"
0x0062af24: lea    rcx,[rbp+0x1140]
0x0062af2b: call   0x14006f4f0
0x0062af30: jmp    0x14062abb6
0x0062af35: test   r12,r12
0x0062af38: je     0x14062abb6
0x0062af3e: lea    rdx,[rip+0x1031733]        # 0x14165c678 ; literal=" with ruined temple"
0x0062af45: lea    rcx,[rbp+0x1140]
0x0062af4c: call   0x14006f4f0
0x0062af51: jmp    0x14062abb6
0x0062af56: lea    rcx,[r12+0x1300]
0x0062af5e: movsxd rdx,esi
0x0062af61: call   0x14006f2f0
0x0062af66: mov    edx,DWORD PTR [rax]
0x0062af68: lea    rcx,[rip+0x1ec8c39]        # 0x1424f3ba8
0x0062af6f: call   0x140067d50
0x0062af74: test   rax,rax
0x0062af77: je     0x14062aff8
0x0062af79: lea    rbx,[rax+0xc8]
0x0062af80: mov    edx,0x2
0x0062af85: mov    rcx,rbx
0x0062af88: call   0x140071f20
0x0062af8d: test   al,al
0x0062af8f: je     0x14062afb0
0x0062af91: lea    rdx,[rip+0xfd0004]        # 0x1415faf9c ; literal="Deity"
0x0062af98: lea    rcx,[rbp+0x1140]
0x0062af9f: call   0x14006f510
0x0062afa4: lea    rbx,[rip+0x2019335]        # 0x1426442e0
0x0062afab: jmp    0x14062abc2
0x0062afb0: mov    edx,0x3
0x0062afb5: mov    rcx,rbx
0x0062afb8: call   0x140071f20
0x0062afbd: lea    rcx,[rbp+0x1140]
0x0062afc4: test   al,al
0x0062afc6: je     0x14062afe0
0x0062afc8: lea    rdx,[rip+0xfbcff1]        # 0x1415e7fc0 ; literal="Force"
0x0062afcf: call   0x14006f510
0x0062afd4: lea    rbx,[rip+0x2019305]        # 0x1426442e0
0x0062afdb: jmp    0x14062abc2
0x0062afe0: lea    rdx,[rip+0xfcffa1]        # 0x1415faf88 ; literal="Object of worship"
0x0062afe7: call   0x14006f510
0x0062afec: lea    rbx,[rip+0x20192ed]        # 0x1426442e0
0x0062aff3: jmp    0x14062abc2
0x0062aff8: lea    rdx,[rip+0xfcff89]        # 0x1415faf88 ; literal="Object of worship"
0x0062afff: lea    rcx,[rbp+0x1140]
0x0062b006: call   0x14006f510
0x0062b00b: jmp    0x14062abc2
0x0062b010: mov    rcx,r13
0x0062b013: cmp    ebx,edi
0x0062b015: jne    0x14062b01f
0x0062b017: mov    edx,DWORD PTR [rip+0x201abff]        # 0x142645c1c
0x0062b01d: jmp    0x14062b06e
0x0062b01f: mov    edx,DWORD PTR [rip+0x201abeb]        # 0x142645c10
0x0062b025: jmp    0x14062b06e
0x0062b027: cmp    r14d,r15d
0x0062b02a: jne    0x14062b04f
0x0062b02c: cmp    ebx,esi
0x0062b02e: jne    0x14062b038
0x0062b030: mov    edx,DWORD PTR [rip+0x201abd6]        # 0x142645c0c
0x0062b036: jmp    0x14062b06b
0x0062b038: mov    rcx,r13
0x0062b03b: cmp    ebx,edi
0x0062b03d: jne    0x14062b047
0x0062b03f: mov    edx,DWORD PTR [rip+0x201abdf]        # 0x142645c24
0x0062b045: jmp    0x14062b06e
0x0062b047: mov    edx,DWORD PTR [rip+0x201abcb]        # 0x142645c18
0x0062b04d: jmp    0x14062b06e
0x0062b04f: cmp    ebx,esi
0x0062b051: jne    0x14062b05b
0x0062b053: mov    edx,DWORD PTR [rip+0x201abaf]        # 0x142645c08
0x0062b059: jmp    0x14062b06b
0x0062b05b: cmp    ebx,edi
0x0062b05d: mov    edx,DWORD PTR [rip+0x201abbd]        # 0x142645c20
0x0062b063: je     0x14062b06b
0x0062b065: mov    edx,DWORD PTR [rip+0x201aba9]        # 0x142645c14
0x0062b06b: mov    rcx,r13
0x0062b06e: call   0x140ad7b10
0x0062b073: inc    ebx
0x0062b075: cmp    ebx,edi
0x0062b077: jle    0x14062adc0
0x0062b07d: inc    r14d
0x0062b080: cmp    r14d,r15d
0x0062b083: jle    0x14062adb2
0x0062b089: mov    r13d,DWORD PTR [rsp+0x78]
0x0062b08e: xor    r8d,r8d
0x0062b091: mov    edx,0x6
0x0062b096: mov    r9b,0x1
0x0062b099: lea    rbx,[rip+0x2019240]        # 0x1426442e0
0x0062b0a0: mov    rcx,rbx
0x0062b0a3: call   0x1400bb0c0
0x0062b0a8: mov    r12,QWORD PTR [rbp-0x78]
0x0062b0ac: lea    rcx,[r12+0x1330]
0x0062b0b4: lea    rdx,[rbp+0xb0]
0x0062b0bb: call   0x14006f1d0
0x0062b0c0: lea    rcx,[r12+0x1330]
0x0062b0c8: lea    rdx,[rbp+0x178]
0x0062b0cf: call   0x14006f1c0
0x0062b0d4: lea    r8,[rbp+0x178]
0x0062b0db: lea    rdx,[rbp-0x5]
0x0062b0df: lea    rcx,[rbp+0xb0]
0x0062b0e6: call   0x14006edb0
0x0062b0eb: xor    edx,edx
0x0062b0ed: movzx  ecx,BYTE PTR [rax]
0x0062b0f0: call   0x140065740
0x0062b0f5: test   al,al
0x0062b0f7: je     0x14062b16b
0x0062b0f9: nop    DWORD PTR [rax+0x0]
0x0062b100: cmp    r13d,r15d
0x0062b103: jge    0x14062b16b
0x0062b105: lea    r8d,[rsi+0x2]
0x0062b109: mov    edx,r13d
0x0062b10c: mov    rcx,rbx
0x0062b10f: call   0x1400bb0b0
0x0062b114: lea    rcx,[rbp+0xb0]
0x0062b11b: call   0x14006eda0
0x0062b120: xor    r9d,r9d
0x0062b123: xor    r8d,r8d
0x0062b126: mov    rdx,QWORD PTR [rax]
0x0062b129: mov    rcx,rbx
0x0062b12c: call   0x140ad69a0
0x0062b131: lea    rcx,[rbp+0xb0]
0x0062b138: call   0x14006ed90
0x0062b13d: inc    r13d
0x0062b140: lea    r8,[rbp+0x178]
0x0062b147: lea    rdx,[rbp-0x5]
0x0062b14b: lea    rcx,[rbp+0xb0]
0x0062b152: call   0x14006edb0
0x0062b157: xor    edx,edx
0x0062b159: movzx  ecx,BYTE PTR [rax]
0x0062b15c: call   0x140065740
0x0062b161: test   al,al
0x0062b163: jne    0x14062b100
0x0062b165: jmp    0x14062b16b
0x0062b167: mov    r12,QWORD PTR [rbp-0x78]
0x0062b16b: mov    edx,DWORD PTR [r12+0x340]
0x0062b173: mov    rcx,QWORD PTR [rip+0x1eba8ce]        # 0x1424e5a48
0x0062b17a: call   0x14007dab0
0x0062b17f: mov    rbx,rax
0x0062b182: cmp    BYTE PTR [rbp-0x3c],0x0
0x0062b186: je     0x14062b1ba
0x0062b188: lea    rcx,[r12+0x1280]
0x0062b190: call   0x14006ede0
0x0062b195: test   rax,rax
0x0062b198: je     0x14062b1ba
0x0062b19a: movsxd rax,DWORD PTR [r12+0x1348]
0x0062b1a2: cmp    eax,0xffffffff
0x0062b1a5: je     0x14062b1ba
0x0062b1a7: mov    rdx,rax
0x0062b1aa: lea    rcx,[r12+0x1280]
0x0062b1b2: call   0x14006f1b0
0x0062b1b7: mov    rbx,QWORD PTR [rax]
0x0062b1ba: test   rbx,rbx
0x0062b1bd: je     0x14062b2dc
0x0062b1c3: mov    rcx,rbx
0x0062b1c6: call   0x1409b26a0
0x0062b1cb: mov    rdi,rax
0x0062b1ce: xor    edx,edx
0x0062b1d0: lea    rcx,[rip+0x1d9c489]        # 0x1423c7660
0x0062b1d7: call   0x140071f20
0x0062b1dc: test   al,al
0x0062b1de: je     0x14062b25d
0x0062b1e0: lea    rcx,[rbp+0x3c00]
0x0062b1e7: call   0x1400bbf20
0x0062b1ec: mov    ecx,DWORD PTR [rbx+0x88]
0x0062b1f2: mov    DWORD PTR [rbp+0x3d88],ecx
0x0062b1f8: test   rdi,rdi
0x0062b1fb: je     0x14062b202
0x0062b1fd: mov    eax,DWORD PTR [rdi+0x4]
0x0062b200: jmp    0x14062b207
0x0062b202: mov    eax,0xffffffff
0x0062b207: movsx  r9d,WORD PTR [rbx+0x84]
0x0062b20f: movsx  r8d,WORD PTR [rbx+0x82]
0x0062b217: xor    ecx,ecx
0x0062b219: mov    DWORD PTR [rsp+0x58],ecx
0x0062b21d: mov    DWORD PTR [rsp+0x50],ecx
0x0062b221: lea    rcx,[rbp+0x3c00]
0x0062b228: mov    QWORD PTR [rsp+0x48],rcx
0x0062b22d: mov    BYTE PTR [rsp+0x40],0x1
0x0062b232: mov    BYTE PTR [rsp+0x38],0x0
0x0062b237: mov    DWORD PTR [rsp+0x30],eax
0x0062b23b: .byte 0xc7
0x0062b23c: rex.R and al,0x28
0x0062b23f: .byte 0x3
