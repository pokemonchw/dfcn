# classic PE:6a70b91c:0270a000; movement-modal; RVA 0x872080..0x874ae1
0x00872080: mov    QWORD PTR [rsp+0x10],rbx
0x00872085: push   rbp
0x00872086: push   rsi
0x00872087: push   rdi
0x00872088: push   r12
0x0087208a: push   r13
0x0087208c: push   r14
0x0087208e: push   r15
0x00872090: lea    rbp,[rsp-0xc0]
0x00872098: sub    rsp,0x1c0
0x0087209f: movaps XMMWORD PTR [rsp+0x1b0],xmm6
0x008720a7: mov    rax,QWORD PTR [rip+0x1023f92]        # 0x141896040
0x008720ae: xor    rax,rsp
0x008720b1: mov    QWORD PTR [rbp+0xa0],rax
0x008720b8: mov    r10d,r9d
0x008720bb: mov    eax,r8d
0x008720be: mov    r13,rcx
0x008720c1: mov    r11d,0xffffffff
0x008720c7: mov    DWORD PTR [rsp+0x6c],r11d
0x008720cc: mov    DWORD PTR [rsp+0x68],r11d
0x008720d1: cmp    BYTE PTR [rip+0x1b183ed],0x0        # 0x14238a4c5
0x008720d8: je     0x1408720ee
0x008720da: mov    ecx,DWORD PTR [rip+0x1dd23c0]        # 0x1426444a0
0x008720e0: mov    DWORD PTR [rsp+0x6c],ecx
0x008720e4: mov    ecx,DWORD PTR [rip+0x1dd23ba]        # 0x1426444a4
0x008720ea: mov    DWORD PTR [rsp+0x68],ecx
0x008720ee: lea    rcx,[rsp+0x4c]
0x008720f3: mov    QWORD PTR [rsp+0x30],rcx
0x008720f8: lea    rcx,[rsp+0x5c]
0x008720fd: mov    QWORD PTR [rsp+0x28],rcx
0x00872102: lea    rcx,[rsp+0x58]
0x00872107: mov    QWORD PTR [rsp+0x20],rcx
0x0087210c: lea    r9,[rsp+0x50]
0x00872111: mov    r8d,r10d
0x00872114: mov    edx,eax
0x00872116: call   0x140870570
0x0087211b: mov    r15d,DWORD PTR [rsp+0x5c]
0x00872120: mov    esi,r15d
0x00872123: mov    edi,DWORD PTR [rsp+0x58]
0x00872127: mov    r12d,DWORD PTR [rsp+0x4c]
0x0087212c: cmp    r15d,r12d
0x0087212f: jg     0x140872205
0x00872135: mov    r14d,DWORD PTR [rsp+0x50]
0x0087213a: nop    WORD PTR [rax+rax*1+0x0]
0x00872140: mov    ebx,r14d
0x00872143: cmp    r14d,edi
0x00872146: jg     0x1408721fa
0x0087214c: nop    DWORD PTR [rax+0x0]
0x00872150: mov    DWORD PTR [rip+0x1dd220e],ebx        # 0x142644364
0x00872156: mov    DWORD PTR [rip+0x1dd220c],esi        # 0x142644368
0x0087215c: xor    r8d,r8d
0x0087215f: xor    edx,edx
0x00872161: lea    rcx,[rip+0x1dd2178]        # 0x1426442e0
0x00872168: call   0x1400bb120
0x0087216d: cmp    esi,r15d
0x00872170: jne    0x14087219a
0x00872172: cmp    ebx,r14d
0x00872175: jne    0x14087217f
0x00872177: mov    edx,DWORD PTR [rip+0x1dd3a87]        # 0x142645c04
0x0087217d: jmp    0x1408721e4
0x0087217f: lea    rcx,[rip+0x1dd215a]        # 0x1426442e0
0x00872186: cmp    ebx,edi
0x00872188: jne    0x140872192
0x0087218a: mov    edx,DWORD PTR [rip+0x1dd3a8c]        # 0x142645c1c
0x00872190: jmp    0x1408721eb
0x00872192: mov    edx,DWORD PTR [rip+0x1dd3a78]        # 0x142645c10
0x00872198: jmp    0x1408721eb
0x0087219a: cmp    esi,r12d
0x0087219d: jne    0x1408721c7
0x0087219f: cmp    ebx,r14d
0x008721a2: jne    0x1408721ac
0x008721a4: mov    edx,DWORD PTR [rip+0x1dd3a62]        # 0x142645c0c
0x008721aa: jmp    0x1408721e4
0x008721ac: lea    rcx,[rip+0x1dd212d]        # 0x1426442e0
0x008721b3: cmp    ebx,edi
0x008721b5: jne    0x1408721bf
0x008721b7: mov    edx,DWORD PTR [rip+0x1dd3a67]        # 0x142645c24
0x008721bd: jmp    0x1408721eb
0x008721bf: mov    edx,DWORD PTR [rip+0x1dd3a53]        # 0x142645c18
0x008721c5: jmp    0x1408721eb
0x008721c7: cmp    ebx,r14d
0x008721ca: jne    0x1408721d4
0x008721cc: mov    edx,DWORD PTR [rip+0x1dd3a36]        # 0x142645c08
0x008721d2: jmp    0x1408721e4
0x008721d4: cmp    ebx,edi
0x008721d6: mov    edx,DWORD PTR [rip+0x1dd3a44]        # 0x142645c20
0x008721dc: je     0x1408721e4
0x008721de: mov    edx,DWORD PTR [rip+0x1dd3a30]        # 0x142645c14
0x008721e4: lea    rcx,[rip+0x1dd20f5]        # 0x1426442e0
0x008721eb: call   0x140ad7b10
0x008721f0: inc    ebx
0x008721f2: cmp    ebx,edi
0x008721f4: jle    0x140872150
0x008721fa: inc    esi
0x008721fc: cmp    esi,r12d
0x008721ff: jle    0x140872140
0x00872205: xor    eax,eax
0x00872207: mov    QWORD PTR [rsp+0x70],rax
0x0087220c: mov    esi,eax
0x0087220e: xchg   ax,ax
0x00872210: lea    r14d,[rdi-0x8]
0x00872214: add    r14d,esi
0x00872217: lea    r11,[rip+0x1ddc8de]        # 0x14264eafc
0x0087221e: lea    ebx,[r15+0x1]
0x00872222: nop    DWORD PTR [rax+0x0]
0x00872226: data16 nop WORD PTR [rax+rax*1+0x0]
0x00872230: mov    DWORD PTR [rip+0x1dd212d],r14d        # 0x142644364
0x00872237: mov    DWORD PTR [rip+0x1dd212b],ebx        # 0x142644368
0x0087223d: test   esi,esi
0x0087223f: jne    0x140872247
0x00872241: mov    edx,DWORD PTR [r11-0x18]
0x00872245: jmp    0x140872255
0x00872247: cmp    esi,0x7
0x0087224a: jne    0x140872251
0x0087224c: mov    edx,DWORD PTR [r11]
0x0087224f: jmp    0x140872255
0x00872251: mov    edx,DWORD PTR [r11-0xc]
0x00872255: lea    rcx,[rip+0x1dd2084]        # 0x1426442e0
0x0087225c: call   0x140ad7b10
0x00872261: inc    ebx
0x00872263: add    r11,0x4
0x00872267: lea    rax,[rip+0x1ddc89a]        # 0x14264eb08
0x0087226e: cmp    r11,rax
0x00872271: jl     0x140872230
0x00872273: inc    esi
0x00872275: cmp    esi,0x8
0x00872278: jl     0x140872210
0x0087227a: mov    DWORD PTR [rip+0x1dd20e8],0x1010007        # 0x14264436c
0x00872284: lea    eax,[rdi-0x6]
0x00872287: add    r15d,0x2
0x0087228b: mov    DWORD PTR [rip+0x1dd20d3],eax        # 0x142644364
0x00872291: mov    DWORD PTR [rip+0x1dd20d0],r15d        # 0x142644368
0x00872298: lea    rdx,[rip+0xd8d1f1]        # 0x1415ff490 ; literal="Done"
0x0087229f: lea    rcx,[rbp-0x60]
0x008722a3: call   0x1400680e0
0x008722a8: nop
0x008722a9: xor    r9d,r9d
0x008722ac: lea    rdx,[rbp-0x60]
0x008722b0: lea    rcx,[rip+0x1dd2029]        # 0x1426442e0
0x008722b7: call   0x140ad69a0
0x008722bc: nop
0x008722bd: lea    rcx,[rbp-0x60]
0x008722c1: call   0x14006f7e0
0x008722c6: mov    DWORD PTR [rip+0x1dd209c],0x1010007        # 0x14264436c
0x008722d0: mov    ebx,DWORD PTR [rsp+0x50]
0x008722d4: lea    eax,[rbx+0x2]
0x008722d7: mov    DWORD PTR [rsp+0x5c],eax
0x008722db: mov    DWORD PTR [rip+0x1dd2083],eax        # 0x142644364
0x008722e1: mov    DWORD PTR [rip+0x1dd2080],r15d        # 0x142644368
0x008722e8: lea    rdx,[rip+0xe3bf19]        # 0x1416ae208 ; literal="How will "
0x008722ef: lea    rcx,[rbp+0x60]
0x008722f3: call   0x1400680e0
0x008722f8: nop
0x008722f9: lea    rdx,[rip+0xd751b8]        # 0x1415e74b8 ; literal="you"
0x00872300: lea    rcx,[rbp+0x80]
0x00872307: call   0x1400680e0
0x0087230c: nop
0x0087230d: mov    rcx,QWORD PTR [r13+0x10]
0x00872311: cmp    rcx,QWORD PTR [rip+0x1b6cce8]        # 0x1423df000
0x00872318: je     0x140872334
0x0087231a: mov    BYTE PTR [rsp+0x20],0x1
0x0087231f: xor    r9d,r9d
0x00872322: mov    r8d,0x1
0x00872328: lea    rdx,[rbp+0x80]
0x0087232f: call   0x1413293a0
0x00872334: lea    rdx,[rbp+0x80]
0x0087233b: lea    rcx,[rbp+0x60]
0x0087233f: call   0x1400b9ca0
0x00872344: lea    rdx,[rip+0xe3beb5]        # 0x1416ae200 ; literal=" move?"
0x0087234b: lea    rcx,[rbp+0x60]
0x0087234f: call   0x14006f4f0
0x00872354: xor    r9d,r9d
0x00872357: lea    rdx,[rbp+0x60]
0x0087235b: lea    rcx,[rip+0x1dd1f7e]        # 0x1426442e0
0x00872362: call   0x140ad69a0
0x00872367: lea    ecx,[rbx+0x1]
0x0087236a: mov    DWORD PTR [rsp+0x40],ecx
0x0087236e: lea    r10d,[rdi-0x1]
0x00872372: lea    r11d,[r15+0x2]
0x00872376: mov    DWORD PTR [rbp-0x7c],r11d
0x0087237a: mov    r12d,DWORD PTR [rsp+0x4c]
0x0087237f: lea    ecx,[r12-0xf]
0x00872384: sub    ecx,r11d
0x00872387: inc    ecx
0x00872389: mov    eax,0x55555556
0x0087238e: imul   ecx
0x00872390: mov    r15d,edx
0x00872393: shr    r15d,0x1f
0x00872397: add    r15d,edx
0x0087239a: mov    DWORD PTR [rsp+0x58],r15d
0x0087239f: movsxd rax,DWORD PTR [r13+0x18]
0x008723a3: lea    r8,[rax+rax*2]
0x008723a7: mov    rax,QWORD PTR [r13+0x10]
0x008723ab: mov    rcx,QWORD PTR [rax+0x5f8]
0x008723b2: mov    r9,QWORD PTR [rcx+r8*8+0xf0]
0x008723ba: sub    r9,QWORD PTR [rcx+r8*8+0xe8]
0x008723c2: sar    r9,0x3
0x008723c6: lea    edi,[r10-0x2]
0x008723ca: cmp    r9d,r15d
0x008723cd: cmovle edi,r10d
0x008723d1: mov    DWORD PTR [rsp+0x54],edi
0x008723d5: mov    DWORD PTR [rsp+0x48],r11d
0x008723da: sub    r9d,r15d
0x008723dd: cmp    DWORD PTR [r13+0x4],r9d
0x008723e1: cmovle r9d,DWORD PTR [r13+0x4]
0x008723e6: xor    r14d,r14d
0x008723e9: mov    eax,r14d
0x008723ec: test   r9d,r9d
0x008723ef: cmovns eax,r9d
0x008723f3: mov    DWORD PTR [rsp+0x78],eax
0x008723f7: movsxd r9,eax
0x008723fa: mov    DWORD PTR [rsp+0x44],r9d
0x008723ff: add    eax,r15d
0x00872402: mov    DWORD PTR [rbp-0x80],eax
0x00872405: mov    esi,0xf
0x0087240a: cmp    r9d,eax
0x0087240d: jge    0x14087347b
0x00872413: mov    QWORD PTR [rbp-0x78],r9
0x00872417: movsxd r10,edi
0x0087241a: mov    QWORD PTR [rsp+0x60],r10
0x0087241f: movsxd rbx,DWORD PTR [rsp+0x40]
0x00872424: mov    r12,rbx
0x00872427: nop    WORD PTR [rax+rax*1+0x0]
0x00872430: movsxd rax,DWORD PTR [r13+0x18]
0x00872434: lea    rdx,[rax+rax*2]
0x00872438: mov    rax,QWORD PTR [r13+0x10]
0x0087243c: mov    rcx,QWORD PTR [rax+0x5f8]
0x00872443: mov    r8,QWORD PTR [rcx+rdx*8+0xf0]
0x0087244b: sub    r8,QWORD PTR [rcx+rdx*8+0xe8]
0x00872453: sar    r8,0x3
0x00872457: movsxd rax,r9d
0x0087245a: cmp    rax,r8
0x0087245d: jae    0x14087346d
0x00872463: mov    DWORD PTR [rip+0x1dd1eff],0x1010007        # 0x14264436c
0x0087246d: mov    r14d,ebx
0x00872470: cmp    ebx,edi
0x00872472: jg     0x1408725ee
0x00872478: lea    r15d,[r11+0x3]
0x0087247c: nop    DWORD PTR [rax+0x0]
0x00872480: mov    edi,r11d
0x00872483: cmp    r11d,r15d
0x00872486: jge    0x1408725d5
0x0087248c: movsxd rsi,r14d
0x0087248f: cmp    r14d,DWORD PTR [rsp+0x54]
0x00872494: jne    0x140872536
0x0087249a: lea    rbx,[rip+0x1dd3823]        # 0x142645cc4
0x008724a1: mov    DWORD PTR [rip+0x1dd1ebc],r14d        # 0x142644364
0x008724a8: mov    DWORD PTR [rip+0x1dd1eba],edi        # 0x142644368
0x008724ae: movsxd rcx,DWORD PTR [r13+0x18]
0x008724b2: mov    rax,QWORD PTR [r13+0x10]
0x008724b6: cmp    DWORD PTR [rax+rcx*4+0xde8],r9d
0x008724be: jne    0x1408724cf
0x008724c0: lea    rax,[rbx-0x18]
0x008724c4: cmp    rsi,r12
0x008724c7: cmovne rax,rbx
0x008724cb: mov    edx,DWORD PTR [rax]
0x008724cd: jmp    0x1408724e6
0x008724cf: cmp    rsi,r12
0x008724d2: jne    0x1408724d9
0x008724d4: mov    edx,DWORD PTR [rbx-0x3c]
0x008724d7: jmp    0x1408724e6
0x008724d9: cmp    rsi,r10
0x008724dc: jne    0x1408724e3
0x008724de: mov    edx,DWORD PTR [rbx-0x24]
0x008724e1: jmp    0x1408724e6
0x008724e3: mov    edx,DWORD PTR [rbx-0x30]
0x008724e6: lea    rcx,[rip+0x1dd1df3]        # 0x1426442e0
0x008724ed: call   0x140ad7b10
0x008724f2: cmp    DWORD PTR [rip+0x1b5516f],0x0        # 0x1423c7668
0x008724f9: jle    0x140872518
0x008724fb: mov    rax,QWORD PTR [rip+0x1b5515e]        # 0x1423c7660
0x00872502: test   BYTE PTR [rax],0x1
0x00872505: je     0x140872518
0x00872507: mov    r8b,0x1
0x0087250a: xor    edx,edx
0x0087250c: lea    rcx,[rip+0x1dd1dcd]        # 0x1426442e0
0x00872513: call   0x1400bb120
0x00872518: inc    edi
0x0087251a: add    rbx,0x4
0x0087251e: cmp    edi,r15d
0x00872521: mov    r9d,DWORD PTR [rsp+0x44]
0x00872526: mov    r10,QWORD PTR [rsp+0x60]
0x0087252b: jl     0x1408724a1
0x00872531: jmp    0x1408725d0
0x00872536: lea    rbx,[rip+0x1dd377b]        # 0x142645cb8
0x0087253d: nop    DWORD PTR [rax]
0x00872540: mov    DWORD PTR [rip+0x1dd1e1d],r14d        # 0x142644364
0x00872547: mov    DWORD PTR [rip+0x1dd1e1b],edi        # 0x142644368
0x0087254d: movsxd rcx,DWORD PTR [r13+0x18]
0x00872551: mov    rax,QWORD PTR [r13+0x10]
0x00872555: cmp    DWORD PTR [rax+rcx*4+0xde8],r9d
0x0087255d: jne    0x14087256e
0x0087255f: lea    rax,[rbx-0xc]
0x00872563: cmp    rsi,r12
0x00872566: cmovne rax,rbx
0x0087256a: mov    edx,DWORD PTR [rax]
0x0087256c: jmp    0x140872585
0x0087256e: cmp    rsi,r12
0x00872571: jne    0x140872578
0x00872573: mov    edx,DWORD PTR [rbx-0x30]
0x00872576: jmp    0x140872585
0x00872578: cmp    rsi,r10
0x0087257b: jne    0x140872582
0x0087257d: mov    edx,DWORD PTR [rbx-0x18]
0x00872580: jmp    0x140872585
0x00872582: mov    edx,DWORD PTR [rbx-0x24]
0x00872585: lea    rcx,[rip+0x1dd1d54]        # 0x1426442e0
0x0087258c: call   0x140ad7b10
0x00872591: cmp    DWORD PTR [rip+0x1b550d0],0x0        # 0x1423c7668
0x00872598: jle    0x1408725b7
0x0087259a: mov    rax,QWORD PTR [rip+0x1b550bf]        # 0x1423c7660
0x008725a1: test   BYTE PTR [rax],0x1
0x008725a4: je     0x1408725b7
0x008725a6: mov    r8b,0x1
0x008725a9: xor    edx,edx
0x008725ab: lea    rcx,[rip+0x1dd1d2e]        # 0x1426442e0
0x008725b2: call   0x1400bb120
0x008725b7: inc    edi
0x008725b9: add    rbx,0x4
0x008725bd: cmp    edi,r15d
0x008725c0: mov    r9d,DWORD PTR [rsp+0x44]
0x008725c5: mov    r10,QWORD PTR [rsp+0x60]
0x008725ca: jl     0x140872540
0x008725d0: mov    r11d,DWORD PTR [rsp+0x48]
0x008725d5: inc    r14d
0x008725d8: mov    edi,DWORD PTR [rsp+0x54]
0x008725dc: cmp    r14d,edi
0x008725df: jle    0x140872480
0x008725e5: mov    esi,0xf
0x008725ea: mov    ebx,DWORD PTR [rsp+0x40]
0x008725ee: lea    eax,[rbx+0x2]
0x008725f1: mov    DWORD PTR [rip+0x1dd1d6d],eax        # 0x142644364
0x008725f7: lea    r15d,[r11+0x1]
0x008725fb: mov    DWORD PTR [rip+0x1dd1d66],r15d        # 0x142644368
0x00872602: mov    edx,r9d
0x00872605: sub    edx,DWORD PTR [rsp+0x78]
0x00872609: add    edx,0x52
0x0087260c: call   0x140c364f0
0x00872611: lea    eax,[rbx+0x4]
0x00872614: mov    DWORD PTR [rip+0x1dd1d4a],eax        # 0x142644364
0x0087261a: mov    DWORD PTR [rip+0x1dd1d47],r15d        # 0x142644368
0x00872621: mov    DWORD PTR [rip+0x1dd1d41],0x1010007        # 0x14264436c
0x0087262b: xorps  xmm0,xmm0
0x0087262e: movups XMMWORD PTR [rbp+0x0],xmm0
0x00872632: xor    r14d,r14d
0x00872635: mov    r8d,r14d
0x00872638: mov    QWORD PTR [rbp+0x10],r14
0x0087263c: mov    QWORD PTR [rbp+0x18],rsi
0x00872640: mov    BYTE PTR [rbp+0x0],r8b
0x00872644: movsxd rax,DWORD PTR [r13+0x18]
0x00872648: lea    rdx,[rax+rax*2]
0x0087264c: mov    rax,QWORD PTR [r13+0x10]
0x00872650: mov    rcx,QWORD PTR [rax+0x5f8]
0x00872657: mov    rax,QWORD PTR [rcx+rdx*8+0xe8]
0x0087265f: mov    rcx,QWORD PTR [rbp-0x78]
0x00872663: mov    rcx,QWORD PTR [rax+rcx*8]
0x00872667: movsxd rax,DWORD PTR [rcx]
0x0087266a: test   eax,eax
0x0087266c: js     0x1408726b5
0x0087266e: mov    rdx,rax
0x00872671: mov    rax,QWORD PTR [rip+0x1c74338]        # 0x1424e69b0
0x00872678: mov    rcx,QWORD PTR [rip+0x1c74329]        # 0x1424e69a8
0x0087267f: sub    rax,rcx
0x00872682: sar    rax,0x3
0x00872686: cmp    rdx,rax
0x00872689: jae    0x1408726b5
0x0087268b: mov    rdx,QWORD PTR [rcx+rdx*8]
0x0087268f: lea    rax,[rbp+0x0]
0x00872693: cmp    rax,rdx
0x00872696: je     0x1408726ca
0x00872698: mov    r8,QWORD PTR [rdx+0x10]
0x0087269c: cmp    QWORD PTR [rdx+0x18],0xf
0x008726a1: jbe    0x1408726a6
0x008726a3: mov    rdx,QWORD PTR [rdx]
0x008726a6: lea    rcx,[rbp+0x0]
0x008726aa: call   0x14006f860
0x008726af: mov    r8,QWORD PTR [rbp+0x10]
0x008726b3: jmp    0x1408726ca
0x008726b5: mov    r8d,0x4
0x008726bb: mov    QWORD PTR [rbp+0x10],r8
0x008726bf: mov    DWORD PTR [rbp+0x0],0x65766f4d ; inline="Move"
0x008726c6: mov    BYTE PTR [rbp+0x4],0x0
0x008726ca: mov    eax,edi
0x008726cc: sub    eax,ebx
0x008726ce: sub    eax,0x8
0x008726d1: cdqe
0x008726d3: cmp    r8,rax
0x008726d6: jb     0x14087275c
0x008726dc: mov    rbx,QWORD PTR [rsp+0x60]
0x008726e1: sub    rbx,r12
0x008726e4: sub    rbx,0x7
0x008726e8: js     0x140872719
0x008726ea: cmp    rbx,r8
0x008726ed: ja     0x140872707
0x008726ef: mov    QWORD PTR [rbp+0x10],rbx
0x008726f3: lea    rax,[rbp+0x0]
0x008726f7: cmp    QWORD PTR [rbp+0x18],0xf
0x008726fc: cmova  rax,QWORD PTR [rbp+0x0]
0x00872701: mov    BYTE PTR [rax+rbx*1],0x0
0x00872705: jmp    0x140872719
0x00872707: mov    rdx,rbx
0x0087270a: sub    rdx,r8
0x0087270d: xor    r8d,r8d
0x00872710: lea    rcx,[rbp+0x0]
0x00872714: call   0x1400e1240
0x00872719: cmp    rbx,0x3
0x0087271d: jle    0x140872758
0x0087271f: lea    rax,[rbp+0x0]
0x00872723: cmp    QWORD PTR [rbp+0x18],0xf
0x00872728: cmova  rax,QWORD PTR [rbp+0x0]
0x0087272d: mov    BYTE PTR [rax+rbx*1-0x3],0x2e
0x00872732: lea    rax,[rbp+0x0]
0x00872736: cmp    QWORD PTR [rbp+0x18],0xf
0x0087273b: cmova  rax,QWORD PTR [rbp+0x0]
0x00872740: mov    BYTE PTR [rax+rbx*1-0x2],0x2e
0x00872745: lea    rax,[rbp+0x0]
0x00872749: cmp    QWORD PTR [rbp+0x18],0xf
0x0087274e: cmova  rax,QWORD PTR [rbp+0x0]
0x00872753: mov    BYTE PTR [rax+rbx*1-0x1],0x2e
0x00872758: mov    ebx,DWORD PTR [rsp+0x40]
0x0087275c: xor    r9d,r9d
0x0087275f: lea    rdx,[rbp+0x0]
0x00872763: lea    rcx,[rip+0x1dd1b76]        # 0x1426442e0
0x0087276a: call   0x140ad69a0
0x0087276f: movsxd rcx,DWORD PTR [r13+0x18]
0x00872773: mov    rax,QWORD PTR [r13+0x10]
0x00872777: mov    edx,DWORD PTR [rax+rcx*4+0xde8]
0x0087277e: mov    DWORD PTR [rsp+0x7c],edx
0x00872782: mov    r8d,DWORD PTR [rsp+0x44]
0x00872787: mov    DWORD PTR [rax+rcx*4+0xde8],r8d
0x0087278f: lea    ecx,[rbx+0x1e]
0x00872792: mov    rax,QWORD PTR [r13+0x10]
0x00872796: mov    edx,0xffff8ad0
0x0087279b: cmp    WORD PTR [rax+0x4cc],dx
0x008727a2: mov    DWORD PTR [rip+0x1dd1bbc],ecx        # 0x142644364
0x008727a8: mov    DWORD PTR [rip+0x1dd1bb9],r15d        # 0x142644368
0x008727af: je     0x140872d26
0x008727b5: mov    rax,QWORD PTR [r13+0x10]
0x008727b9: test   DWORD PTR [rax+0x110],0x40000
0x008727c3: mov    DWORD PTR [rip+0x1dd1b9f],0x1010005        # 0x14264436c
0x008727cd: jne    0x1408727d9
0x008727cf: mov    DWORD PTR [rip+0x1dd1b93],0x1010003        # 0x14264436c
0x008727d9: lea    r9,[rbp-0x68]
0x008727dd: mov    r8b,0x1
0x008727e0: xor    edx,edx
0x008727e2: mov    rcx,QWORD PTR [r13+0x10]
0x008727e6: call   0x14132fb80
0x008727eb: lea    ecx,[rax+0x64]
0x008727ee: mov    eax,0xf4240
0x008727f3: cdq
0x008727f4: idiv   ecx
0x008727f6: mov    edi,eax
0x008727f8: xorps  xmm0,xmm0
0x008727fb: movups XMMWORD PTR [rbp-0x40],xmm0
0x008727ff: mov    QWORD PTR [rbp-0x30],r14
0x00872803: mov    QWORD PTR [rbp-0x28],rsi
0x00872807: mov    BYTE PTR [rbp-0x40],0x0
0x0087280b: movups XMMWORD PTR [rbp-0x60],xmm0
0x0087280f: mov    QWORD PTR [rbp-0x50],0x6
0x00872817: mov    QWORD PTR [rbp-0x48],rsi
0x0087281b: mov    eax,DWORD PTR [rip+0xe3b9ff]        # 0x1416ae220 ; literal="Climb "
0x00872821: mov    DWORD PTR [rbp-0x60],eax
0x00872824: movzx  eax,WORD PTR [rip+0xe3b9f9]        # 0x1416ae224 ; literal="b "
0x0087282b: mov    WORD PTR [rbp-0x5c],ax
0x0087282f: mov    BYTE PTR [rbp-0x5a],0x0
0x00872833: xor    r9d,r9d
0x00872836: lea    rdx,[rbp-0x60]
0x0087283a: lea    rcx,[rip+0x1dd1a9f]        # 0x1426442e0
0x00872841: call   0x140ad69a0
0x00872846: nop
0x00872847: mov    rdx,QWORD PTR [rbp-0x48]
0x0087284b: cmp    rdx,0xf
0x0087284f: jbe    0x140872882
0x00872851: inc    rdx
0x00872854: mov    rcx,QWORD PTR [rbp-0x60]
0x00872858: mov    rax,rcx
0x0087285b: cmp    rdx,0x1000
0x00872862: jb     0x14087287d
0x00872864: add    rdx,0x27
0x00872868: mov    rcx,QWORD PTR [rcx-0x8]
0x0087286c: sub    rax,rcx
0x0087286f: add    rax,0xfffffffffffffff8
0x00872873: cmp    rax,0x1f
0x00872877: ja     0x14087342e
0x0087287d: call   0x1415345f0
0x00872882: xorps  xmm0,xmm0
0x00872885: movups XMMWORD PTR [rbp-0x20],xmm0
0x00872889: mov    QWORD PTR [rbp-0x10],r14
0x0087288d: mov    QWORD PTR [rbp-0x8],rsi
0x00872891: mov    BYTE PTR [rbp-0x20],0x0
0x00872895: movups XMMWORD PTR [rbp-0x60],xmm0
0x00872899: mov    QWORD PTR [rbp-0x50],r14
0x0087289d: mov    QWORD PTR [rbp-0x48],rsi
0x008728a1: mov    BYTE PTR [rbp-0x60],0x0
0x008728a5: mov    eax,0x10624dd3
0x008728aa: imul   edi
0x008728ac: mov    ebx,edx
0x008728ae: sar    ebx,0x6
0x008728b1: mov    eax,ebx
0x008728b3: shr    eax,0x1f
0x008728b6: add    ebx,eax
0x008728b8: lea    rdx,[rbp-0x60]
0x008728bc: mov    ecx,ebx
0x008728be: call   0x140529db0
0x008728c3: lea    rdx,[rbp-0x60]
0x008728c7: cmp    QWORD PTR [rbp-0x48],0xf
0x008728cc: cmova  rdx,QWORD PTR [rbp-0x60]
0x008728d1: mov    r8,QWORD PTR [rbp-0x50]
0x008728d5: lea    rcx,[rbp-0x20]
0x008728d9: call   0x14006f9a0
0x008728de: nop
0x008728df: mov    rdx,QWORD PTR [rbp-0x48]
0x008728e3: cmp    rdx,0xf
0x008728e7: jbe    0x14087291a
0x008728e9: inc    rdx
0x008728ec: mov    rcx,QWORD PTR [rbp-0x60]
0x008728f0: mov    rax,rcx
0x008728f3: cmp    rdx,0x1000
0x008728fa: jb     0x140872915
0x008728fc: add    rdx,0x27
0x00872900: mov    rcx,QWORD PTR [rcx-0x8]
0x00872904: sub    rax,rcx
0x00872907: add    rax,0xfffffffffffffff8
0x0087290b: cmp    rax,0x1f
0x0087290f: ja     0x140873427
0x00872915: call   0x1415345f0
0x0087291a: lea    rdx,[rbp-0x20]
0x0087291e: cmp    QWORD PTR [rbp-0x8],0xf
0x00872923: cmova  rdx,QWORD PTR [rbp-0x20]
0x00872928: mov    r8,QWORD PTR [rbp-0x10]
0x0087292c: lea    rcx,[rbp-0x40]
0x00872930: call   0x14006f9a0
0x00872935: mov    r15d,0x1
0x0087293b: mov    r8d,r15d
0x0087293e: lea    rdx,[rip+0xd70c2f]        # 0x1415e3574 ; literal="."
0x00872945: lea    rcx,[rbp-0x40]
0x00872949: call   0x14006f9a0
0x0087294e: xorps  xmm0,xmm0
0x00872951: movups XMMWORD PTR [rbp+0x20],xmm0
0x00872955: mov    QWORD PTR [rbp+0x30],r14
0x00872959: mov    QWORD PTR [rbp+0x38],rsi
0x0087295d: mov    BYTE PTR [rbp+0x20],0x0
0x00872961: movups XMMWORD PTR [rbp-0x60],xmm0
0x00872965: mov    QWORD PTR [rbp-0x50],r14
0x00872969: mov    QWORD PTR [rbp-0x48],rsi
0x0087296d: mov    BYTE PTR [rbp-0x60],0x0
0x00872971: imul   eax,ebx,0x3e8
0x00872977: sub    edi,eax
0x00872979: lea    rdx,[rbp-0x60]
0x0087297d: mov    ecx,edi
0x0087297f: call   0x140529db0
0x00872984: lea    rdx,[rbp-0x60]
0x00872988: cmp    QWORD PTR [rbp-0x48],0xf
0x0087298d: cmova  rdx,QWORD PTR [rbp-0x60]
0x00872992: mov    r8,QWORD PTR [rbp-0x50]
0x00872996: lea    rcx,[rbp+0x20]
0x0087299a: call   0x14006f9a0
0x0087299f: nop
0x008729a0: mov    rdx,QWORD PTR [rbp-0x48]
0x008729a4: cmp    rdx,0xf
0x008729a8: jbe    0x1408729db
0x008729aa: inc    rdx
0x008729ad: mov    rcx,QWORD PTR [rbp-0x60]
0x008729b1: mov    rax,rcx
0x008729b4: cmp    rdx,0x1000
0x008729bb: jb     0x1408729d6
0x008729bd: add    rdx,0x27
0x008729c1: mov    rcx,QWORD PTR [rcx-0x8]
0x008729c5: sub    rax,rcx
0x008729c8: add    rax,0xfffffffffffffff8
0x008729cc: cmp    rax,0x1f
0x008729d0: ja     0x140873420
0x008729d6: call   0x1415345f0
0x008729db: mov    r8,QWORD PTR [rbp+0x30]
0x008729df: cmp    r8,0x2
0x008729e3: ja     0x1408729fc
0x008729e5: mov    r8,r15
0x008729e8: lea    rdx,[rip+0xd9f5b5]        # 0x141611fa4 ; literal="0"
0x008729ef: lea    rcx,[rbp-0x40]
0x008729f3: call   0x14006f9a0
0x008729f8: mov    r8,QWORD PTR [rbp+0x30]
0x008729fc: cmp    r8,0x1
0x00872a00: jne    0x140872a19
0x00872a02: mov    r8,r15
0x00872a05: lea    rdx,[rip+0xd9f598]        # 0x141611fa4 ; literal="0"
0x00872a0c: lea    rcx,[rbp-0x40]
0x00872a10: call   0x14006f9a0
0x00872a15: mov    r8,QWORD PTR [rbp+0x30]
0x00872a19: lea    rdx,[rbp+0x20]
0x00872a1d: cmp    QWORD PTR [rbp+0x38],0xf
0x00872a22: cmova  rdx,QWORD PTR [rbp+0x20]
0x00872a27: lea    rcx,[rbp-0x40]
0x00872a2b: call   0x14006f9a0
0x00872a30: mov    rcx,QWORD PTR [rbp+0x30]
0x00872a34: cmp    rcx,0x4
0x00872a38: jb     0x140872aa9
0x00872a3a: nop    WORD PTR [rax+rax*1+0x0]
0x00872a40: lea    rax,[rbp+0x20]
0x00872a44: mov    r8,QWORD PTR [rbp+0x20]
0x00872a48: mov    r9,QWORD PTR [rbp+0x38]
0x00872a4c: cmp    r9,0xf
0x00872a50: cmova  rax,r8
0x00872a54: movsxd r10,ecx
0x00872a57: lea    rdx,[r10-0x1]
0x00872a5b: cmp    BYTE PTR [rdx+rax*1],0x30
0x00872a5f: jne    0x140872aa9
0x00872a61: lea    rax,[rbp+0x20]
0x00872a65: cmp    r9,0xf
0x00872a69: cmova  rax,r8
0x00872a6d: cmp    BYTE PTR [r10+rax*1-0x2],0x30
0x00872a73: jne    0x140872aa9
0x00872a75: cmp    rdx,rcx
0x00872a78: ja     0x140872a90
0x00872a7a: mov    QWORD PTR [rbp+0x30],rdx
0x00872a7e: lea    rax,[rbp+0x20]
0x00872a82: cmp    r9,0xf
0x00872a86: cmova  rax,r8
0x00872a8a: mov    BYTE PTR [rax+rdx*1],0x0
0x00872a8e: jmp    0x140872a9f
0x00872a90: sub    rdx,rcx
0x00872a93: xor    r8d,r8d
0x00872a96: lea    rcx,[rbp+0x20]
0x00872a9a: call   0x1400e1240
0x00872a9f: mov    rcx,QWORD PTR [rbp+0x30]
0x00872aa3: cmp    rcx,0x4
0x00872aa7: jae    0x140872a40
0x00872aa9: xor    r9d,r9d
0x00872aac: lea    rdx,[rbp-0x40]
0x00872ab0: lea    rcx,[rip+0x1dd1829]        # 0x1426442e0
0x00872ab7: call   0x140ad69a0
0x00872abc: mov    eax,DWORD PTR [rsp+0x40]
0x00872ac0: add    eax,0x2c
0x00872ac3: mov    DWORD PTR [rip+0x1dd189b],eax        # 0x142644364
0x00872ac9: mov    edi,DWORD PTR [rsp+0x48]
0x00872acd: mov    DWORD PTR [rip+0x1dd1895],edi        # 0x142644368
0x00872ad3: mov    DWORD PTR [rip+0x1dd188f],0x1010002        # 0x14264436c
0x00872add: mov    r10,QWORD PTR [r13+0x10]
0x00872ae1: movzx  r9d,WORD PTR [r10+0x4ce]
0x00872ae9: movzx  r8d,WORD PTR [r10+0xaa]
0x00872af1: cmp    r9w,r8w
0x00872af5: setl   dl
0x00872af8: movzx  eax,dl
0x00872afb: or     al,0x2
0x00872afd: movzx  ecx,al
0x00872b00: movzx  eax,dl
0x00872b03: cmp    r9w,r8w
0x00872b07: cmovle ecx,eax
0x00872b0a: movzx  edx,cl
0x00872b0d: movzx  r9d,WORD PTR [r10+0x4cc]
0x00872b15: movzx  r8d,WORD PTR [r10+0xa8]
0x00872b1d: movzx  eax,dl
0x00872b20: or     al,0x4
0x00872b22: movzx  ecx,al
0x00872b25: cmp    r9w,r8w
0x00872b29: cmovle ecx,edx
0x00872b2c: movzx  edx,cl
0x00872b2f: movzx  eax,dl
0x00872b32: or     al,0x8
0x00872b34: movzx  ecx,al
0x00872b37: cmp    r9w,r8w
0x00872b3b: cmovge ecx,edx
0x00872b3e: movzx  edx,cl
0x00872b41: movzx  r9d,WORD PTR [r10+0x4d0]
0x00872b49: movzx  r8d,WORD PTR [r10+0xac]
0x00872b51: movzx  eax,dl
0x00872b54: or     al,0x10
0x00872b56: movzx  ecx,al
0x00872b59: cmp    r9w,r8w
0x00872b5d: cmovle ecx,edx
0x00872b60: movzx  edx,cl
0x00872b63: movzx  eax,dl
0x00872b66: or     al,0x20
0x00872b68: movzx  ecx,al
0x00872b6b: cmp    r9w,r8w
0x00872b6f: cmovge ecx,edx
0x00872b72: movzx  ebx,cl
0x00872b75: mov    eax,ebx
0x00872b77: and    eax,0xf
0x00872b7a: dec    eax
0x00872b7c: cmp    eax,0x9
0x00872b7f: ja     0x140872bc3
0x00872b81: cdqe
0x00872b83: lea    rdx,[rip+0xffffffffff78d476]        # 0x140000000
0x00872b8a: mov    ecx,DWORD PTR [rdx+rax*4+0x874994]
0x00872b91: add    rcx,rdx
0x00872b94: jmp    rcx
0x00872b96: mov    dl,0x5e
0x00872b98: jmp    0x140872bb4
0x00872b9a: mov    dl,0x76
0x00872b9c: jmp    0x140872bb4
0x00872b9e: mov    dl,0x3e
0x00872ba0: jmp    0x140872bb4
0x00872ba2: mov    dl,0x3c
0x00872ba4: jmp    0x140872bb4
0x00872ba6: mov    dl,0xbf
0x00872ba8: jmp    0x140872bb4
0x00872baa: mov    dl,0xda
0x00872bac: jmp    0x140872bb4
0x00872bae: mov    dl,0xd9
0x00872bb0: jmp    0x140872bb4
0x00872bb2: mov    dl,0xc0
0x00872bb4: mov    r8b,0x1
0x00872bb7: lea    rcx,[rip+0x1dd1722]        # 0x1426442e0
0x00872bbe: call   0x1400bb120
0x00872bc3: test   bl,0x10
0x00872bc6: je     0x140872be5
0x00872bc8: mov    DWORD PTR [rip+0x1dd1796],esi        # 0x142644364
0x00872bce: mov    DWORD PTR [rip+0x1dd1794],edi        # 0x142644368
0x00872bd4: mov    r8b,0x1
0x00872bd7: mov    dl,0x18
0x00872bd9: lea    rcx,[rip+0x1dd1700]        # 0x1426442e0
0x00872be0: call   0x1400bb120
0x00872be5: test   bl,0x20
0x00872be8: je     0x140872c08
0x00872bea: mov    DWORD PTR [rip+0x1dd1774],esi        # 0x142644364
0x00872bf0: mov    DWORD PTR [rip+0x1dd1772],edi        # 0x142644368
0x00872bf6: mov    r8b,0x1
0x00872bf9: mov    dl,0x19
0x00872bfb: lea    rcx,[rip+0x1dd16de]        # 0x1426442e0
0x00872c02: call   0x1400bb120
0x00872c07: nop
0x00872c08: mov    rdx,QWORD PTR [rbp+0x38]
0x00872c0c: cmp    rdx,0xf
0x00872c10: jbe    0x140872c43
0x00872c12: inc    rdx
0x00872c15: mov    rcx,QWORD PTR [rbp+0x20]
0x00872c19: mov    rax,rcx
0x00872c1c: cmp    rdx,0x1000
0x00872c23: jb     0x140872c3e
0x00872c25: add    rdx,0x27
0x00872c29: mov    rcx,QWORD PTR [rcx-0x8]
0x00872c2d: sub    rax,rcx
0x00872c30: add    rax,0xfffffffffffffff8
0x00872c34: cmp    rax,0x1f
0x00872c38: ja     0x140873427
0x00872c3e: call   0x1415345f0
0x00872c43: mov    QWORD PTR [rbp+0x30],r14
0x00872c47: mov    QWORD PTR [rbp+0x38],rsi
0x00872c4b: mov    BYTE PTR [rbp+0x20],0x0
0x00872c4f: mov    rdx,QWORD PTR [rbp-0x8]
0x00872c53: cmp    rdx,0xf
0x00872c57: jbe    0x140872c8a
0x00872c59: inc    rdx
0x00872c5c: mov    rcx,QWORD PTR [rbp-0x20]
0x00872c60: mov    rax,rcx
0x00872c63: cmp    rdx,0x1000
0x00872c6a: jb     0x140872c85
0x00872c6c: add    rdx,0x27
0x00872c70: mov    rcx,QWORD PTR [rcx-0x8]
0x00872c74: sub    rax,rcx
0x00872c77: add    rax,0xfffffffffffffff8
0x00872c7b: cmp    rax,0x1f
0x00872c7f: ja     0x14087342e
0x00872c85: call   0x1415345f0
0x00872c8a: mov    QWORD PTR [rbp-0x10],r14
0x00872c8e: mov    QWORD PTR [rbp-0x8],rsi
0x00872c92: mov    BYTE PTR [rbp-0x20],0x0
0x00872c96: mov    rdx,QWORD PTR [rbp-0x28]
0x00872c9a: cmp    rdx,0xf
0x00872c9e: jbe    0x140872cd1
0x00872ca0: inc    rdx
0x00872ca3: mov    rcx,QWORD PTR [rbp-0x40]
0x00872ca7: mov    rax,rcx
0x00872caa: cmp    rdx,0x1000
0x00872cb1: jb     0x140872ccc
0x00872cb3: add    rdx,0x27
0x00872cb7: mov    rcx,QWORD PTR [rcx-0x8]
0x00872cbb: sub    rax,rcx
0x00872cbe: add    rax,0xfffffffffffffff8
0x00872cc2: cmp    rax,0x1f
0x00872cc6: ja     0x140873435
0x00872ccc: call   0x1415345f0
0x00872cd1: mov    ebx,DWORD PTR [rsp+0x40]
0x00872cd5: movsxd rcx,DWORD PTR [r13+0x18]
0x00872cd9: mov    rax,QWORD PTR [r13+0x10]
0x00872cdd: mov    edx,DWORD PTR [rsp+0x7c]
0x00872ce1: mov    DWORD PTR [rax+rcx*4+0xde8],edx
0x00872ce8: add    edi,0x3
0x00872ceb: mov    DWORD PTR [rsp+0x48],edi
0x00872cef: lea    rcx,[rbp+0x0]
0x00872cf3: call   0x14006f7e0
0x00872cf8: mov    r9d,DWORD PTR [rsp+0x44]
0x00872cfd: inc    r9d
0x00872d00: mov    DWORD PTR [rsp+0x44],r9d
0x00872d05: inc    QWORD PTR [rbp-0x78]
0x00872d09: mov    edi,DWORD PTR [rsp+0x54]
0x00872d0d: cmp    r9d,DWORD PTR [rbp-0x80]
0x00872d11: jge    0x14087346d
0x00872d17: mov    r10,QWORD PTR [rsp+0x60]
0x00872d1c: mov    r11d,DWORD PTR [rsp+0x48]
0x00872d21: jmp    0x140872430
0x00872d26: mov    r14,QWORD PTR [r13+0x10]
0x00872d2a: test   DWORD PTR [r14+0x110],0x40000
0x00872d35: mov    DWORD PTR [rip+0x1dd162d],0x1010005        # 0x14264436c
0x00872d3f: jne    0x140872d4b
0x00872d41: mov    DWORD PTR [rip+0x1dd1621],0x1000007        # 0x14264436c
0x00872d4b: lea    r9,[rbp-0x70]
0x00872d4f: xor    r8d,r8d
0x00872d52: xor    edx,edx
0x00872d54: mov    rcx,r14
0x00872d57: call   0x14132fb80
0x00872d5c: lea    ecx,[rax+0x64]
0x00872d5f: mov    eax,0xf4240
0x00872d64: cdq
0x00872d65: idiv   ecx
0x00872d67: mov    esi,eax
0x00872d69: lea    r9,[rbp-0x70]
0x00872d6d: mov    r8b,0x1
0x00872d70: xor    edx,edx
0x00872d72: mov    rcx,r14
0x00872d75: call   0x14132fb80
0x00872d7a: lea    ecx,[rax+0x64]
0x00872d7d: mov    eax,0xf4240
0x00872d82: cdq
0x00872d83: idiv   ecx
0x00872d85: mov    edi,eax
0x00872d87: xorps  xmm0,xmm0
0x00872d8a: movups XMMWORD PTR [rbp-0x60],xmm0
0x00872d8e: mov    QWORD PTR [rbp-0x50],0x7
0x00872d96: mov    ebx,0xf
0x00872d9b: mov    QWORD PTR [rbp-0x48],rbx
0x00872d9f: mov    rax,QWORD PTR [rip+0xe3b472]        # 0x1416ae218 ; literal="Speed: "
0x00872da6: mov    DWORD PTR [rbp-0x60],eax
0x00872da9: movzx  eax,WORD PTR [rip+0xe3b46c]        # 0x1416ae21c ; literal="d: "
0x00872db0: mov    WORD PTR [rbp-0x5c],ax
0x00872db4: movzx  eax,BYTE PTR [rip+0xe3b463]        # 0x1416ae21e ; literal=" "
0x00872dbb: mov    BYTE PTR [rbp-0x5a],al
0x00872dbe: mov    BYTE PTR [rbp-0x59],0x0
0x00872dc2: xor    r9d,r9d
0x00872dc5: lea    rdx,[rbp-0x60]
0x00872dc9: lea    rcx,[rip+0x1dd1510]        # 0x1426442e0
0x00872dd0: call   0x140ad69a0
0x00872dd5: nop
0x00872dd6: mov    rdx,QWORD PTR [rbp-0x48]
0x00872dda: cmp    rdx,rbx
0x00872ddd: jbe    0x140872e10
0x00872ddf: inc    rdx
0x00872de2: mov    rcx,QWORD PTR [rbp-0x60]
0x00872de6: mov    rax,rcx
0x00872de9: cmp    rdx,0x1000
0x00872df0: jb     0x140872e0b
0x00872df2: add    rdx,0x27
0x00872df6: mov    rcx,QWORD PTR [rcx-0x8]
0x00872dfa: sub    rax,rcx
0x00872dfd: add    rax,0xfffffffffffffff8
0x00872e01: cmp    rax,0x1f
0x00872e05: ja     0x140873466
0x00872e0b: call   0x1415345f0
0x00872e10: xorps  xmm0,xmm0
0x00872e13: movups XMMWORD PTR [rbp-0x20],xmm0
0x00872e17: xor    eax,eax
0x00872e19: mov    QWORD PTR [rbp-0x10],rax
0x00872e1d: mov    QWORD PTR [rbp-0x8],rbx
0x00872e21: mov    BYTE PTR [rbp-0x20],al
0x00872e24: movups XMMWORD PTR [rbp-0x40],xmm0
0x00872e28: mov    QWORD PTR [rbp-0x30],rax
0x00872e2c: mov    BYTE PTR [rbp-0x40],al
0x00872e2f: cmp    esi,edi
0x00872e31: je     0x140873139
0x00872e37: mov    QWORD PTR [rbp-0x28],rbx
0x00872e3b: movups XMMWORD PTR [rbp-0x60],xmm0
0x00872e3f: mov    QWORD PTR [rbp-0x50],rax
0x00872e43: mov    QWORD PTR [rbp-0x48],rbx
0x00872e47: mov    BYTE PTR [rbp-0x60],al
0x00872e4a: mov    eax,0x10624dd3
0x00872e4f: imul   edi
0x00872e51: mov    ebx,edx
0x00872e53: sar    ebx,0x6
0x00872e56: mov    eax,ebx
0x00872e58: shr    eax,0x1f
0x00872e5b: add    ebx,eax
0x00872e5d: lea    rdx,[rbp-0x60]
0x00872e61: mov    ecx,ebx
0x00872e63: call   0x140529db0
0x00872e68: lea    rdx,[rbp-0x60]
0x00872e6c: cmp    QWORD PTR [rbp-0x48],0xf
0x00872e71: cmova  rdx,QWORD PTR [rbp-0x60]
0x00872e76: mov    r8,QWORD PTR [rbp-0x50]
0x00872e7a: lea    rcx,[rbp-0x40]
0x00872e7e: call   0x14006f9a0
0x00872e83: nop
0x00872e84: mov    rdx,QWORD PTR [rbp-0x48]
0x00872e88: cmp    rdx,0xf
0x00872e8c: jbe    0x140872ebf
0x00872e8e: inc    rdx
0x00872e91: mov    rcx,QWORD PTR [rbp-0x60]
0x00872e95: mov    rax,rcx
0x00872e98: cmp    rdx,0x1000
0x00872e9f: jb     0x140872eba
0x00872ea1: add    rdx,0x27
0x00872ea5: mov    rcx,QWORD PTR [rcx-0x8]
0x00872ea9: sub    rax,rcx
0x00872eac: add    rax,0xfffffffffffffff8
0x00872eb0: cmp    rax,0x1f
0x00872eb4: ja     0x14087343c
0x00872eba: call   0x1415345f0
0x00872ebf: lea    rdx,[rbp-0x40]
0x00872ec3: cmp    QWORD PTR [rbp-0x28],0xf
0x00872ec8: cmova  rdx,QWORD PTR [rbp-0x40]
0x00872ecd: mov    r8,QWORD PTR [rbp-0x30]
0x00872ed1: lea    rcx,[rbp-0x20]
0x00872ed5: call   0x14006f9a0
0x00872eda: cmp    QWORD PTR [rbp-0x30],0x1
0x00872edf: jne    0x140872f37
0x00872ee1: lea    rdx,[rip+0xd7068c]        # 0x1415e3574 ; literal="."
0x00872ee8: lea    rcx,[rbp-0x20]
0x00872eec: call   0x14006f4f0
0x00872ef1: lea    rcx,[rbp-0x60]
0x00872ef5: call   0x14006f620
0x00872efa: nop
0x00872efb: imul   eax,ebx,0x3e8
0x00872f01: sub    edi,eax
0x00872f03: mov    eax,0x51eb851f
0x00872f08: imul   edi
0x00872f0a: mov    ecx,edx
0x00872f0c: sar    ecx,0x5
0x00872f0f: mov    eax,ecx
0x00872f11: shr    eax,0x1f
0x00872f14: add    ecx,eax
0x00872f16: lea    rdx,[rbp-0x60]
0x00872f1a: call   0x140529cf0
0x00872f1f: lea    rdx,[rbp-0x60]
0x00872f23: lea    rcx,[rbp-0x20]
0x00872f27: call   0x1400b9ca0
0x00872f2c: nop
0x00872f2d: lea    rcx,[rbp-0x60]
0x00872f31: call   0x14006f7e0
0x00872f36: nop
0x00872f37: mov    rdx,QWORD PTR [rbp-0x28]
0x00872f3b: cmp    rdx,0xf
0x00872f3f: jbe    0x140872f72
0x00872f41: inc    rdx
0x00872f44: mov    rcx,QWORD PTR [rbp-0x40]
0x00872f48: mov    rax,rcx
0x00872f4b: cmp    rdx,0x1000
0x00872f52: jb     0x140872f6d
0x00872f54: add    rdx,0x27
0x00872f58: mov    rcx,QWORD PTR [rcx-0x8]
0x00872f5c: sub    rax,rcx
0x00872f5f: add    rax,0xfffffffffffffff8
0x00872f63: cmp    rax,0x1f
0x00872f67: ja     0x140873443
0x00872f6d: call   0x1415345f0
0x00872f72: mov    r8d,0x1
0x00872f78: lea    rdx,[rip+0xd7354d]        # 0x1415e64cc ; literal="/"
0x00872f7f: lea    rcx,[rbp-0x20]
0x00872f83: call   0x14006f9a0
0x00872f88: xorps  xmm0,xmm0
0x00872f8b: movups XMMWORD PTR [rbp-0x40],xmm0
0x00872f8f: xor    ecx,ecx
0x00872f91: mov    QWORD PTR [rbp-0x30],rcx
0x00872f95: mov    eax,0xf
0x00872f9a: mov    QWORD PTR [rbp-0x28],rax
0x00872f9e: mov    BYTE PTR [rbp-0x40],cl
0x00872fa1: movups XMMWORD PTR [rbp-0x60],xmm0
0x00872fa5: mov    QWORD PTR [rbp-0x50],rcx
0x00872fa9: mov    QWORD PTR [rbp-0x48],rax
0x00872fad: mov    BYTE PTR [rbp-0x60],cl
0x00872fb0: mov    eax,0x10624dd3
0x00872fb5: imul   esi
0x00872fb7: mov    ebx,edx
0x00872fb9: sar    ebx,0x6
0x00872fbc: mov    eax,ebx
0x00872fbe: shr    eax,0x1f
0x00872fc1: add    ebx,eax
0x00872fc3: lea    rdx,[rbp-0x60]
0x00872fc7: mov    ecx,ebx
0x00872fc9: call   0x140529db0
0x00872fce: lea    rdx,[rbp-0x60]
0x00872fd2: cmp    QWORD PTR [rbp-0x48],0xf
0x00872fd7: cmova  rdx,QWORD PTR [rbp-0x60]
0x00872fdc: mov    r8,QWORD PTR [rbp-0x50]
0x00872fe0: lea    rcx,[rbp-0x40]
0x00872fe4: call   0x14006f9a0
0x00872fe9: nop
0x00872fea: mov    rdx,QWORD PTR [rbp-0x48]
0x00872fee: cmp    rdx,0xf
0x00872ff2: jbe    0x140873025
0x00872ff4: inc    rdx
0x00872ff7: mov    rcx,QWORD PTR [rbp-0x60]
0x00872ffb: mov    rax,rcx
0x00872ffe: cmp    rdx,0x1000
0x00873005: jb     0x140873020
0x00873007: add    rdx,0x27
0x0087300b: mov    rcx,QWORD PTR [rcx-0x8]
0x0087300f: sub    rax,rcx
0x00873012: add    rax,0xfffffffffffffff8
0x00873016: cmp    rax,0x1f
0x0087301a: ja     0x14087344a
0x00873020: call   0x1415345f0
0x00873025: lea    rdx,[rbp-0x40]
0x00873029: cmp    QWORD PTR [rbp-0x28],0xf
0x0087302e: cmova  rdx,QWORD PTR [rbp-0x40]
0x00873033: mov    r8,QWORD PTR [rbp-0x30]
0x00873037: lea    rcx,[rbp-0x20]
0x0087303b: call   0x14006f9a0
0x00873040: cmp    QWORD PTR [rbp-0x30],0x1
0x00873045: jne    0x14087309d
0x00873047: lea    rdx,[rip+0xd70526]        # 0x1415e3574 ; literal="."
0x0087304e: lea    rcx,[rbp-0x20]
0x00873052: call   0x14006f4f0
0x00873057: lea    rcx,[rbp-0x60]
0x0087305b: call   0x14006f620
0x00873060: nop
0x00873061: imul   eax,ebx,0x3e8
0x00873067: sub    esi,eax
0x00873069: mov    eax,0x51eb851f
0x0087306e: imul   esi
0x00873070: mov    ecx,edx
0x00873072: sar    ecx,0x5
0x00873075: mov    eax,ecx
0x00873077: shr    eax,0x1f
0x0087307a: add    ecx,eax
0x0087307c: lea    rdx,[rbp-0x60]
0x00873080: call   0x140529cf0
0x00873085: lea    rdx,[rbp-0x60]
0x00873089: lea    rcx,[rbp-0x20]
0x0087308d: call   0x1400b9ca0
0x00873092: nop
0x00873093: lea    rcx,[rbp-0x60]
0x00873097: call   0x14006f7e0
0x0087309c: nop
0x0087309d: mov    rdx,QWORD PTR [rbp-0x28]
0x008730a1: cmp    rdx,0xf
0x008730a5: jbe    0x1408730d8
0x008730a7: inc    rdx
0x008730aa: mov    rcx,QWORD PTR [rbp-0x40]
0x008730ae: mov    rax,rcx
0x008730b1: cmp    rdx,0x1000
0x008730b8: jb     0x1408730d3
0x008730ba: add    rdx,0x27
0x008730be: mov    rcx,QWORD PTR [rcx-0x8]
0x008730c2: sub    rax,rcx
0x008730c5: add    rax,0xfffffffffffffff8
0x008730c9: cmp    rax,0x1f
0x008730cd: ja     0x140873451
0x008730d3: call   0x1415345f0
0x008730d8: mov    esi,0xf
0x008730dd: xor    r9d,r9d
0x008730e0: lea    rdx,[rbp-0x20]
0x008730e4: lea    rcx,[rip+0x1dd11f5]        # 0x1426442e0
0x008730eb: call   0x140ad69a0
0x008730f0: mov    ebx,DWORD PTR [rsp+0x40]
0x008730f4: lea    eax,[rbx+0x2c]
0x008730f7: mov    DWORD PTR [rip+0x1dd1267],eax        # 0x142644364
0x008730fd: mov    DWORD PTR [rip+0x1dd1264],r15d        # 0x142644368
0x00873104: mov    DWORD PTR [rip+0x1dd125e],0x1010002        # 0x14264436c
0x0087310e: movzx  eax,BYTE PTR [r14+0x4c4]
0x00873116: and    eax,0xf
0x00873119: dec    eax
0x0087311b: cmp    eax,0x9
0x0087311e: ja     0x14087338e
0x00873124: cdqe
0x00873126: lea    rdx,[rip+0xffffffffff78ced3]        # 0x140000000
0x0087312d: mov    ecx,DWORD PTR [rdx+rax*4+0x8749bc]
0x00873134: add    rcx,rdx
0x00873137: jmp    rcx
0x00873139: mov    esi,0xf
0x0087313e: mov    QWORD PTR [rbp-0x28],rsi
0x00873142: movups XMMWORD PTR [rbp-0x60],xmm0
0x00873146: mov    QWORD PTR [rbp-0x50],rax
0x0087314a: mov    QWORD PTR [rbp-0x48],rsi
0x0087314e: mov    BYTE PTR [rbp-0x60],0x0
0x00873152: mov    eax,0x10624dd3
0x00873157: imul   edi
0x00873159: mov    ebx,edx
0x0087315b: sar    ebx,0x6
0x0087315e: mov    eax,ebx
0x00873160: shr    eax,0x1f
0x00873163: add    ebx,eax
0x00873165: lea    rdx,[rbp-0x60]
0x00873169: mov    ecx,ebx
0x0087316b: call   0x140529db0
0x00873170: lea    rdx,[rbp-0x60]
0x00873174: cmp    QWORD PTR [rbp-0x48],rsi
0x00873178: cmova  rdx,QWORD PTR [rbp-0x60]
0x0087317d: mov    r8,QWORD PTR [rbp-0x50]
0x00873181: lea    rcx,[rbp-0x40]
0x00873185: call   0x14006f9a0
0x0087318a: nop
0x0087318b: mov    rdx,QWORD PTR [rbp-0x48]
0x0087318f: cmp    rdx,rsi
0x00873192: jbe    0x1408731c5
0x00873194: inc    rdx
0x00873197: mov    rcx,QWORD PTR [rbp-0x60]
0x0087319b: mov    rax,rcx
0x0087319e: cmp    rdx,0x1000
0x008731a5: jb     0x1408731c0
0x008731a7: add    rdx,0x27
0x008731ab: mov    rcx,QWORD PTR [rcx-0x8]
0x008731af: sub    rax,rcx
0x008731b2: add    rax,0xfffffffffffffff8
0x008731b6: cmp    rax,0x1f
0x008731ba: ja     0x140873458
0x008731c0: call   0x1415345f0
0x008731c5: lea    rdx,[rbp-0x40]
0x008731c9: cmp    QWORD PTR [rbp-0x28],0xf
0x008731ce: cmova  rdx,QWORD PTR [rbp-0x40]
0x008731d3: mov    r8,QWORD PTR [rbp-0x30]
0x008731d7: lea    rcx,[rbp-0x20]
0x008731db: call   0x14006f9a0
0x008731e0: mov    r8d,0x1
0x008731e6: lea    rdx,[rip+0xd70387]        # 0x1415e3574 ; literal="."
0x008731ed: lea    rcx,[rbp-0x20]
0x008731f1: call   0x14006f9a0
0x008731f6: xorps  xmm0,xmm0
0x008731f9: movups XMMWORD PTR [rbp+0x40],xmm0
0x008731fd: xor    eax,eax
0x008731ff: mov    QWORD PTR [rbp+0x50],rax
0x00873203: mov    QWORD PTR [rbp+0x58],rsi
0x00873207: mov    BYTE PTR [rbp+0x40],al
0x0087320a: movups XMMWORD PTR [rbp-0x60],xmm0
0x0087320e: mov    QWORD PTR [rbp-0x50],rax
0x00873212: mov    QWORD PTR [rbp-0x48],rsi
0x00873216: mov    BYTE PTR [rbp-0x60],al
0x00873219: imul   eax,ebx,0x3e8
0x0087321f: sub    edi,eax
0x00873221: lea    rdx,[rbp-0x60]
0x00873225: mov    ecx,edi
0x00873227: call   0x140529db0
0x0087322c: lea    rdx,[rbp-0x60]
0x00873230: cmp    QWORD PTR [rbp-0x48],0xf
0x00873235: cmova  rdx,QWORD PTR [rbp-0x60]
0x0087323a: mov    r8,QWORD PTR [rbp-0x50]
0x0087323e: lea    rcx,[rbp+0x40]
0x00873242: call   0x14006f9a0
0x00873247: nop
0x00873248: mov    rdx,QWORD PTR [rbp-0x48]
0x0087324c: cmp    rdx,0xf
0x00873250: jbe    0x140873283
0x00873252: inc    rdx
0x00873255: mov    rcx,QWORD PTR [rbp-0x60]
0x00873259: mov    rax,rcx
0x0087325c: cmp    rdx,0x1000
0x00873263: jb     0x14087327e
0x00873265: add    rdx,0x27
0x00873269: mov    rcx,QWORD PTR [rcx-0x8]
0x0087326d: sub    rax,rcx
0x00873270: add    rax,0xfffffffffffffff8
0x00873274: cmp    rax,0x1f
0x00873278: ja     0x14087345f
0x0087327e: call   0x1415345f0
0x00873283: mov    r8,QWORD PTR [rbp+0x50]
0x00873287: cmp    r8,0x2
0x0087328b: ja     0x1408732a1
0x0087328d: lea    rdx,[rip+0xd9ed10]        # 0x141611fa4 ; literal="0"
0x00873294: lea    rcx,[rbp-0x20]
0x00873298: call   0x14006f4f0
0x0087329d: mov    r8,QWORD PTR [rbp+0x50]
0x008732a1: cmp    r8,0x1
0x008732a5: jne    0x1408732bb
0x008732a7: lea    rdx,[rip+0xd9ecf6]        # 0x141611fa4 ; literal="0"
0x008732ae: lea    rcx,[rbp-0x20]
0x008732b2: call   0x14006f4f0
0x008732b7: mov    r8,QWORD PTR [rbp+0x50]
0x008732bb: lea    rdx,[rbp+0x40]
0x008732bf: cmp    QWORD PTR [rbp+0x58],0xf
0x008732c4: cmova  rdx,QWORD PTR [rbp+0x40]
0x008732c9: lea    rcx,[rbp-0x20]
0x008732cd: call   0x14006f9a0
0x008732d2: mov    rcx,QWORD PTR [rbp+0x50]
0x008732d6: cmp    rcx,0x4
0x008732da: jb     0x140873349
0x008732dc: nop    DWORD PTR [rax+0x0]
0x008732e0: lea    rax,[rbp+0x40]
0x008732e4: mov    r8,QWORD PTR [rbp+0x40]
0x008732e8: mov    r9,QWORD PTR [rbp+0x58]
0x008732ec: cmp    r9,0xf
0x008732f0: cmova  rax,r8
0x008732f4: movsxd r10,ecx
0x008732f7: lea    rdx,[r10-0x1]
0x008732fb: cmp    BYTE PTR [rdx+rax*1],0x30
0x008732ff: jne    0x140873349
0x00873301: lea    rax,[rbp+0x40]
0x00873305: cmp    r9,0xf
0x00873309: cmova  rax,r8
0x0087330d: cmp    BYTE PTR [rax+r10*1-0x2],0x30
0x00873313: jne    0x140873349
0x00873315: cmp    rdx,rcx
0x00873318: ja     0x140873330
0x0087331a: mov    QWORD PTR [rbp+0x50],rdx
0x0087331e: lea    rax,[rbp+0x40]
0x00873322: cmp    r9,0xf
0x00873326: cmova  rax,r8
0x0087332a: mov    BYTE PTR [rax+rdx*1],0x0
0x0087332e: jmp    0x14087333f
0x00873330: sub    rdx,rcx
0x00873333: xor    r8d,r8d
0x00873336: lea    rcx,[rbp+0x40]
0x0087333a: call   0x1400e1240
0x0087333f: mov    rcx,QWORD PTR [rbp+0x50]
0x00873343: cmp    rcx,0x4
0x00873347: jae    0x1408732e0
0x00873349: lea    rcx,[rbp+0x40]
0x0087334d: call   0x14006f7e0
0x00873352: nop
0x00873353: lea    rcx,[rbp-0x40]
0x00873357: call   0x14006f7e0
0x0087335c: jmp    0x1408730dd
0x00873361: mov    dl,0x5e
0x00873363: jmp    0x14087337f
0x00873365: mov    dl,0x76
0x00873367: jmp    0x14087337f
0x00873369: mov    dl,0x3e
0x0087336b: jmp    0x14087337f
0x0087336d: mov    dl,0x3c
0x0087336f: jmp    0x14087337f
0x00873371: mov    dl,0xbf
0x00873373: jmp    0x14087337f
0x00873375: mov    dl,0xda
0x00873377: jmp    0x14087337f
0x00873379: mov    dl,0xd9
0x0087337b: jmp    0x14087337f
0x0087337d: mov    dl,0xc0
0x0087337f: mov    r8b,0x1
0x00873382: lea    rcx,[rip+0x1dd0f57]        # 0x1426442e0
0x00873389: call   0x1400bb120
0x0087338e: mov    edi,DWORD PTR [rsp+0x48]
0x00873392: test   BYTE PTR [r14+0x4c4],0x10
0x0087339a: je     0x1408733b9
0x0087339c: mov    DWORD PTR [rip+0x1dd0fc2],esi        # 0x142644364
0x008733a2: mov    DWORD PTR [rip+0x1dd0fc0],edi        # 0x142644368
0x008733a8: mov    r8b,0x1
0x008733ab: mov    dl,0x18
0x008733ad: lea    rcx,[rip+0x1dd0f2c]        # 0x1426442e0
0x008733b4: call   0x1400bb120
0x008733b9: test   BYTE PTR [r14+0x4c4],0x20
0x008733c1: je     0x1408733e1
0x008733c3: mov    DWORD PTR [rip+0x1dd0f9b],esi        # 0x142644364
0x008733c9: mov    DWORD PTR [rip+0x1dd0f99],edi        # 0x142644368
0x008733cf: mov    r8b,0x1
0x008733d2: mov    dl,0x19
0x008733d4: lea    rcx,[rip+0x1dd0f05]        # 0x1426442e0
0x008733db: call   0x1400bb120
0x008733e0: nop
0x008733e1: mov    rdx,QWORD PTR [rbp-0x8]
0x008733e5: cmp    rdx,0xf
0x008733e9: jbe    0x140873418
0x008733eb: inc    rdx
0x008733ee: mov    rcx,QWORD PTR [rbp-0x20]
0x008733f2: mov    rax,rcx
0x008733f5: cmp    rdx,0x1000
0x008733fc: jb     0x140873413
0x008733fe: add    rdx,0x27
0x00873402: mov    rcx,QWORD PTR [rcx-0x8]
0x00873406: sub    rax,rcx
0x00873409: add    rax,0xfffffffffffffff8
0x0087340d: cmp    rax,0x1f
0x00873411: ja     0x140873466
0x00873413: call   0x1415345f0
0x00873418: xor    r14d,r14d
0x0087341b: jmp    0x140872cd5
0x00873420: call   QWORD PTR [rip+0xd6d67a]        # 0x1415e0aa0
0x00873426: nop
0x00873427: call   QWORD PTR [rip+0xd6d673]        # 0x1415e0aa0
0x0087342d: nop
0x0087342e: call   QWORD PTR [rip+0xd6d66c]        # 0x1415e0aa0
0x00873434: nop
0x00873435: call   QWORD PTR [rip+0xd6d665]        # 0x1415e0aa0
0x0087343b: nop
0x0087343c: call   QWORD PTR [rip+0xd6d65e]        # 0x1415e0aa0
0x00873442: nop
0x00873443: call   QWORD PTR [rip+0xd6d657]        # 0x1415e0aa0
0x00873449: nop
0x0087344a: call   QWORD PTR [rip+0xd6d650]        # 0x1415e0aa0
0x00873450: nop
0x00873451: call   QWORD PTR [rip+0xd6d649]        # 0x1415e0aa0
0x00873457: nop
0x00873458: call   QWORD PTR [rip+0xd6d642]        # 0x1415e0aa0
0x0087345e: nop
0x0087345f: call   QWORD PTR [rip+0xd6d63b]        # 0x1415e0aa0
0x00873465: nop
0x00873466: call   QWORD PTR [rip+0xd6d634]        # 0x1415e0aa0
0x0087346c: nop
0x0087346d: mov    r15d,DWORD PTR [rsp+0x58]
0x00873472: mov    r12d,DWORD PTR [rsp+0x4c]
0x00873477: mov    ebx,DWORD PTR [rsp+0x50]
0x0087347b: movsxd rax,DWORD PTR [r13+0x18]
0x0087347f: lea    rdx,[rax+rax*2]
0x00873483: mov    rax,QWORD PTR [r13+0x10]
0x00873487: mov    rcx,QWORD PTR [rax+0x5f8]
0x0087348e: mov    r11,QWORD PTR [rcx+rdx*8+0xf0]
0x00873496: sub    r11,QWORD PTR [rcx+rdx*8+0xe8]
0x0087349e: sar    r11,0x3
0x008734a2: cmp    r11d,r15d
0x008734a5: jle    0x14087350c
0x008734a7: mov    eax,DWORD PTR [rbp-0x7c]
0x008734aa: lea    r10d,[rax+0x1]
0x008734ae: lea    r9d,[rax-0x2]
0x008734b2: lea    r9d,[r9+r15*2]
0x008734b6: add    r9d,r15d
0x008734b9: mov    QWORD PTR [rbp-0x48],0x0
0x008734c1: lea    ecx,[r11-0x1]
0x008734c5: mov    eax,DWORD PTR [r13+0x4]
0x008734c9: mov    DWORD PTR [rbp-0x60],eax
0x008734cc: mov    DWORD PTR [rbp-0x5c],r14d
0x008734d0: mov    DWORD PTR [rbp-0x58],ecx
0x008734d3: mov    DWORD PTR [rbp-0x50],r10d
0x008734d7: mov    DWORD PTR [rbp-0x4c],r9d
0x008734db: mov    DWORD PTR [rbp-0x54],r15d
0x008734df: lea    rcx,[rbp-0x60]
0x008734e3: call   0x1400bb340
0x008734e8: lea    r9d,[rdi+0x1]
0x008734ec: mov    DWORD PTR [rsp+0x28],r14d
0x008734f1: movzx  eax,BYTE PTR [r13+0x8]
0x008734f6: mov    BYTE PTR [rsp+0x20],al
0x008734fa: mov    r8d,DWORD PTR [rsp+0x68]
0x008734ff: mov    edx,DWORD PTR [rsp+0x6c]
0x00873503: lea    rcx,[rbp-0x60]
0x00873507: call   0x14140a440
0x0087350c: lea    r15d,[r12-0x11]
0x00873511: mov    DWORD PTR [rip+0x1dd0e51],0x1010007        # 0x14264436c
0x0087351b: lea    r14d,[rbx+0x38]
0x0087351f: mov    DWORD PTR [rip+0x1dd0e3e],r14d        # 0x142644364
0x00873526: mov    DWORD PTR [rip+0x1dd0e3b],r15d        # 0x142644368
0x0087352d: xorps  xmm0,xmm0
0x00873530: movups XMMWORD PTR [rbp-0x60],xmm0
0x00873534: mov    ecx,0x20
0x00873539: call   0x140070760
0x0087353e: mov    rcx,rax
0x00873541: mov    QWORD PTR [rbp-0x60],rax
0x00873545: movdqa xmm0,XMMWORD PTR [rip+0xf12633]        # 0x141785b80
0x0087354d: movdqu XMMWORD PTR [rbp-0x50],xmm0
0x00873552: movups xmm0,XMMWORD PTR [rip+0xe3ab2f]        # 0x1416ae088 ; literal="Visual Stealth Factors"
0x00873559: movups XMMWORD PTR [rax],xmm0
0x0087355c: mov    eax,DWORD PTR [rip+0xe3ab36]        # 0x1416ae098 ; literal="actors"
0x00873562: mov    DWORD PTR [rcx+0x10],eax
0x00873565: movzx  eax,WORD PTR [rip+0xe3ab30]        # 0x1416ae09c ; literal="rs"
0x0087356c: mov    WORD PTR [rcx+0x14],ax
0x00873570: mov    BYTE PTR [rcx+0x16],0x0
0x00873574: xor    r9d,r9d
0x00873577: lea    rdx,[rbp-0x60]
0x0087357b: lea    rcx,[rip+0x1dd0d5e]        # 0x1426442e0
0x00873582: call   0x140ad69a0
0x00873587: nop
0x00873588: lea    rcx,[rbp-0x60]
0x0087358c: call   0x14006f7e0
0x00873591: mov    rbx,QWORD PTR [r13+0x10]
0x00873595: movzx  r9d,WORD PTR [rbx+0xac]
0x0087359d: movzx  r8d,WORD PTR [rbx+0xaa]
0x008735a5: movzx  edx,WORD PTR [rbx+0xa8]
0x008735ac: lea    rcx,[rip+0x1b57e2d]        # 0x1423cb3e0
0x008735b3: call   0x14149d8e0
0x008735b8: mov    rcx,rax
0x008735bb: test   rax,rax
0x008735be: je     0x1408735df
0x008735c0: mov    rax,QWORD PTR [rax]
0x008735c3: call   QWORD PTR [rax]
0x008735c5: cmp    ax,0x9
0x008735c9: jne    0x1408735df
0x008735cb: mov    edi,0x19
0x008735d0: lea    eax,[r15+0x2]
0x008735d4: mov    r12d,0xf
0x008735da: jmp    0x1408738a6
0x008735df: movsx  rdi,WORD PTR [rbx+0xac]
0x008735e7: movsx  r10d,WORD PTR [rbx+0xaa]
0x008735ef: movsx  r11d,WORD PTR [rbx+0xa8]
0x008735f7: mov    r12,QWORD PTR [rip+0x1c6e99a]        # 0x1424e1f98
0x008735fe: mov    r13d,DWORD PTR [rip+0x1c6e9c7]        # 0x1424e1fcc
0x00873605: test   r11w,r11w
0x00873609: js     0x1408736d8
0x0087360f: mov    r8d,r11d
0x00873612: cmp    r11d,r13d
0x00873615: jge    0x1408736d8
0x0087361b: test   r10w,r10w
0x0087361f: js     0x1408736d8
0x00873625: mov    r9d,r10d
0x00873628: cmp    r10d,DWORD PTR [rip+0x1c6e9a1]        # 0x1424e1fd0
0x0087362f: jge    0x1408736d8
0x00873635: test   di,di
0x00873638: js     0x1408736d8
0x0087363e: cmp    edi,DWORD PTR [rip+0x1c6e990]        # 0x1424e1fd4
0x00873644: jge    0x1408736d8
0x0087364a: movzx  eax,r11w
0x0087364e: sar    ax,0x4
0x00873652: movzx  ecx,r10w
0x00873656: sar    cx,0x4
0x0087365a: test   r12,r12
0x0087365d: jne    0x14087366f
0x0087365f: movzx  esi,di
0x00873662: movzx  ecx,r10w
0x00873666: movzx  edx,r11w
0x0087366a: jmp    0x1408736f3
0x0087366f: movsx  rax,ax
0x00873673: movsx  rdx,cx
0x00873677: mov    rax,QWORD PTR [r12+rax*8]
0x0087367b: mov    rax,QWORD PTR [rax+rdx*8]
0x0087367f: mov    rdx,QWORD PTR [rax+rdi*8]
0x00873683: test   rdx,rdx
0x00873686: je     0x1408736de
0x00873688: mov    eax,r11d
0x0087368b: and    eax,0x8000000f
0x00873690: jge    0x140873699
0x00873692: dec    eax
0x00873694: or     eax,0xfffffff0
0x00873697: inc    eax
0x00873699: movsxd rcx,eax
0x0087369c: shl    rcx,0x4
0x008736a0: mov    eax,r10d
0x008736a3: and    eax,0x8000000f
0x008736a8: jge    0x1408736b1
0x008736aa: dec    eax
0x008736ac: or     eax,0xfffffff0
0x008736af: inc    eax
0x008736b1: cdqe
0x008736b3: add    rcx,rax
0x008736b6: test   DWORD PTR [rdx+rcx*4+0x6a0],0x800000
0x008736c1: je     0x1408736de
0x008736c3: mov    edi,0x19
0x008736c8: mov    QWORD PTR [rbp-0x70],rsi
0x008736cc: lea    eax,[r15+0x2]
0x008736d0: mov    r12,rsi
0x008736d3: jmp    0x1408738a6
0x008736d8: mov    r9d,r10d
0x008736db: mov    r8d,r11d
0x008736de: movzx  esi,di
0x008736e1: movzx  ecx,r10w
0x008736e5: movzx  edx,r11w
0x008736e9: test   r11w,r11w
0x008736ed: js     0x1408738e4
0x008736f3: cmp    r8d,r13d
0x008736f6: jge    0x1408738e4
0x008736fc: test   cx,cx
0x008736ff: js     0x1408738e4
0x00873705: cmp    r9d,DWORD PTR [rip+0x1c6e8c4]        # 0x1424e1fd0
0x0087370c: jge    0x1408738e4
0x00873712: test   si,si
0x00873715: js     0x1408738e4
0x0087371b: movsx  eax,si
0x0087371e: cmp    eax,DWORD PTR [rip+0x1c6e8b0]        # 0x1424e1fd4
0x00873724: jge    0x1408738e4
0x0087372a: sar    dx,0x4
0x0087372e: sar    cx,0x4
0x00873732: test   r12,r12
0x00873735: je     0x1408738e4
0x0087373b: movsx  rax,dx
0x0087373f: movsx  rdx,cx
0x00873743: mov    rax,QWORD PTR [r12+rax*8]
0x00873747: movsx  rcx,si
0x0087374b: mov    rax,QWORD PTR [rax+rdx*8]
0x0087374f: mov    rdx,QWORD PTR [rax+rcx*8]
0x00873753: test   rdx,rdx
0x00873756: je     0x1408738e4
0x0087375c: and    r8d,0x8000000f
0x00873763: jge    0x14087376f
0x00873765: dec    r8d
0x00873768: or     r8d,0xfffffff0
0x0087376c: inc    r8d
0x0087376f: movsxd rcx,r8d
0x00873772: shl    rcx,0x4
0x00873776: and    r9d,0x8000000f
0x0087377d: jge    0x140873789
0x0087377f: dec    r9d
0x00873782: or     r9d,0xfffffff0
0x00873786: inc    r9d
0x00873789: movsxd rax,r9d
0x0087378c: add    rcx,rax
0x0087378f: test   DWORD PTR [rdx+rcx*4+0x2a0],0x4000
0x0087379a: je     0x1408738e4
0x008737a0: movzx  r9d,di
0x008737a4: movzx  r8d,r10w
0x008737a8: movzx  edx,r11w
0x008737ac: lea    rcx,[rip+0x1b57c2d]        # 0x1423cb3e0
0x008737b3: call   0x141498e60
0x008737b8: movzx  edi,ax
0x008737bb: cmp    ax,0x19
0x008737bf: jle    0x1408737c6
0x008737c1: mov    edi,0x19
0x008737c6: movzx  r9d,WORD PTR [rbx+0xac]
0x008737ce: movzx  r8d,WORD PTR [rbx+0xaa]
0x008737d6: movzx  edx,WORD PTR [rbx+0xa8]
0x008737dd: lea    rcx,[rip+0x1b57bfc]        # 0x1423cb3e0
0x008737e4: call   0x141498de0
0x008737e9: movzx  esi,ax
0x008737ec: lea    eax,[r15+0x2]
0x008737f0: cmp    si,0x19
0x008737f4: jl     0x14087389c
0x008737fa: mov    DWORD PTR [rip+0x1dd0b68],0x1010006        # 0x14264436c
0x00873804: mov    DWORD PTR [rip+0x1dd0b59],r14d        # 0x142644364
0x0087380b: mov    DWORD PTR [rip+0x1dd0b57],eax        # 0x142644368
0x00873811: xorps  xmm0,xmm0
0x00873814: movups XMMWORD PTR [rbp-0x60],xmm0
0x00873818: movdqa xmm6,XMMWORD PTR [rip+0xf12250]        # 0x141785a70
0x00873820: movdqu XMMWORD PTR [rbp-0x50],xmm6
0x00873825: mov    eax,DWORD PTR [rip+0xe3a851]        # 0x1416ae07c ; literal="Light"
0x0087382b: mov    DWORD PTR [rbp-0x60],eax
0x0087382e: movzx  eax,BYTE PTR [rip+0xe3a84b]        # 0x1416ae080 ; literal="t"
0x00873835: mov    BYTE PTR [rbp-0x5c],al
0x00873838: mov    BYTE PTR [rbp-0x5b],0x0
0x0087383c: xor    r9d,r9d
0x0087383f: lea    rdx,[rbp-0x60]
0x00873843: lea    rcx,[rip+0x1dd0a96]        # 0x1426442e0
0x0087384a: call   0x140ad69a0
0x0087384f: nop
0x00873850: mov    rdx,QWORD PTR [rbp-0x48]
0x00873854: cmp    rdx,0xf
0x00873858: jbe    0x140873893
0x0087385a: inc    rdx
0x0087385d: mov    rcx,QWORD PTR [rbp-0x60]
0x00873861: mov    rax,rcx
0x00873864: cmp    rdx,0x1000
0x0087386b: jb     0x140873886
0x0087386d: add    rdx,0x27
0x00873871: mov    rcx,QWORD PTR [rcx-0x8]
0x00873875: sub    rax,rcx
0x00873878: add    rax,0xfffffffffffffff8
0x0087387c: cmp    rax,0x1f
0x00873880: ja     0x1408746ac
0x00873886: call   0x1415345f0
0x0087388b: movdqa xmm6,XMMWORD PTR [rip+0xf121dd]        # 0x141785a70
0x00873893: movzx  r12d,si
0x00873897: jmp    0x14087395d
0x0087389c: movzx  r12d,si
0x008738a0: cmp    si,0x3
0x008738a4: jle    0x1408738f3
0x008738a6: mov    DWORD PTR [rip+0x1dd0abc],0x1010002        # 0x14264436c
0x008738b0: mov    DWORD PTR [rip+0x1dd0aad],r14d        # 0x142644364
0x008738b7: mov    DWORD PTR [rip+0x1dd0aab],eax        # 0x142644368
0x008738bd: lea    rdx,[rip+0xe3a7dc]        # 0x1416ae0a0 ; literal="Low Light"
0x008738c4: lea    rcx,[rbp-0x60]
0x008738c8: call   0x1400680e0
0x008738cd: nop
0x008738ce: xor    r9d,r9d
0x008738d1: lea    rdx,[rbp-0x60]
0x008738d5: lea    rcx,[rip+0x1dd0a04]        # 0x1426442e0
0x008738dc: call   0x140ad69a0
0x008738e1: nop
0x008738e2: jmp    0x14087394c
0x008738e4: mov    edi,0x19
0x008738e9: mov    r12d,0x3
0x008738ef: lea    eax,[r15+0x2]
0x008738f3: mov    DWORD PTR [rip+0x1dd0a6f],0x1010003        # 0x14264436c
0x008738fd: mov    DWORD PTR [rip+0x1dd0a60],r14d        # 0x142644364
0x00873904: mov    DWORD PTR [rip+0x1dd0a5e],eax        # 0x142644368
0x0087390a: xorps  xmm0,xmm0
0x0087390d: movups XMMWORD PTR [rbp-0x60],xmm0
0x00873911: movdqa xmm1,XMMWORD PTR [rip+0xf12187]        # 0x141785aa0
0x00873919: movdqu XMMWORD PTR [rbp-0x50],xmm1
0x0087391e: mov    r8d,0x8
0x00873924: lea    rdx,[rip+0xe3a785]        # 0x1416ae0b0 ; literal="Darkness"
0x0087392b: lea    rcx,[rbp-0x60]
0x0087392f: call   0x140068240
0x00873934: mov    BYTE PTR [rbp-0x58],0x0
0x00873938: xor    r9d,r9d
0x0087393b: lea    rdx,[rbp-0x60]
0x0087393f: lea    rcx,[rip+0x1dd099a]        # 0x1426442e0
0x00873946: call   0x140ad69a0
0x0087394b: nop
0x0087394c: lea    rcx,[rbp-0x60]
0x00873950: call   0x14006f7e0
0x00873955: movdqa xmm6,XMMWORD PTR [rip+0xf12113]        # 0x141785a70
0x0087395d: lea    eax,[r15+0x3]
0x00873961: mov    DWORD PTR [rip+0x1dd09fc],r14d        # 0x142644364
0x00873968: mov    DWORD PTR [rip+0x1dd09fa],eax        # 0x142644368
0x0087396e: xorps  xmm0,xmm0
0x00873971: movups XMMWORD PTR [rbp-0x60],xmm0
0x00873975: cmp    di,0x19
0x00873979: jl     0x1408739b7
0x0087397b: mov    DWORD PTR [rip+0x1dd09e7],0x1010006        # 0x14264436c
0x00873985: movdqu XMMWORD PTR [rbp-0x50],xmm6
0x0087398a: mov    eax,DWORD PTR [rip+0xd9ca38]        # 0x1416103c8 ; literal="Clear"
0x00873990: mov    DWORD PTR [rbp-0x60],eax
0x00873993: movzx  eax,BYTE PTR [rip+0xd9ca32]        # 0x1416103cc ; literal="r"
0x0087399a: mov    BYTE PTR [rbp-0x5c],al
0x0087399d: mov    BYTE PTR [rbp-0x5b],0x0
0x008739a1: xor    r9d,r9d
0x008739a4: lea    rdx,[rbp-0x60]
0x008739a8: lea    rcx,[rip+0x1dd0931]        # 0x1426442e0
0x008739af: call   0x140ad69a0
0x008739b4: nop
0x008739b5: jmp    0x140873a06
0x008739b7: mov    DWORD PTR [rip+0x1dd09ab],0x1010002        # 0x14264436c
0x008739c1: movdqa xmm1,XMMWORD PTR [rip+0xf12127]        # 0x141785af0
0x008739c9: movdqu XMMWORD PTR [rbp-0x50],xmm1
0x008739ce: movsd  xmm0,QWORD PTR [rip+0xe3a67a]        # 0x1416ae050 ; literal="Fog/Rain/Snow"
0x008739d6: movsd  QWORD PTR [rbp-0x60],xmm0
0x008739db: mov    eax,DWORD PTR [rip+0xe3a677]        # 0x1416ae058 ; literal="/Snow"
0x008739e1: mov    DWORD PTR [rbp-0x58],eax
0x008739e4: movzx  eax,BYTE PTR [rip+0xe3a671]        # 0x1416ae05c ; literal="w"
0x008739eb: mov    BYTE PTR [rbp-0x54],al
0x008739ee: mov    BYTE PTR [rbp-0x53],0x0
0x008739f2: xor    r9d,r9d
0x008739f5: lea    rdx,[rbp-0x60]
0x008739f9: lea    rcx,[rip+0x1dd08e0]        # 0x1426442e0
0x00873a00: call   0x140ad69a0
0x00873a05: nop
0x00873a06: mov    rdx,QWORD PTR [rbp-0x48]
0x00873a0a: cmp    rdx,0xf
0x00873a0e: jbe    0x140873a41
0x00873a10: inc    rdx
0x00873a13: mov    rcx,QWORD PTR [rbp-0x60]
0x00873a17: cmp    rdx,0x1000
0x00873a1e: mov    rax,rcx
0x00873a21: jb     0x140873a3c
0x00873a23: mov    rcx,QWORD PTR [rcx-0x8]
0x00873a27: sub    rax,rcx
0x00873a2a: add    rdx,0x27
0x00873a2e: add    rax,0xfffffffffffffff8
0x00873a32: cmp    rax,0x1f
0x00873a36: ja     0x1408746ac
0x00873a3c: call   0x1415345f0
0x00873a41: cmp    r12w,di
0x00873a45: cmovg  r12w,di
0x00873a4a: movsx  esi,r12w
0x00873a4e: xor    dil,dil
0x00873a51: movzx  edx,WORD PTR [rbx+0xa8]
0x00873a58: mov    r12d,0x1
0x00873a5e: test   dx,dx
0x00873a61: jle    0x140873a91
0x00873a63: dec    dx
0x00873a66: mov    DWORD PTR [rsp+0x20],r12d
0x00873a6b: movzx  r9d,WORD PTR [rbx+0xac]
0x00873a73: movzx  r8d,WORD PTR [rbx+0xaa]
0x00873a7b: lea    rcx,[rip+0x1b5795e]        # 0x1423cb3e0
0x00873a82: call   0x14149c4a0
0x00873a87: movzx  edi,dil
0x00873a8b: test   al,al
0x00873a8d: cmove  edi,r12d
0x00873a91: movsx  edx,WORD PTR [rbx+0xa8]
0x00873a98: mov    ecx,DWORD PTR [rip+0x1c6e52e]        # 0x1424e1fcc
0x00873a9e: dec    ecx
0x00873aa0: cmp    edx,ecx
0x00873aa2: jge    0x140873ad2
0x00873aa4: inc    dx
0x00873aa7: mov    DWORD PTR [rsp+0x20],r12d
0x00873aac: movzx  r9d,WORD PTR [rbx+0xac]
0x00873ab4: movzx  r8d,WORD PTR [rbx+0xaa]
0x00873abc: lea    rcx,[rip+0x1b5791d]        # 0x1423cb3e0
0x00873ac3: call   0x14149c4a0
0x00873ac8: movzx  edi,dil
0x00873acc: test   al,al
0x00873ace: cmove  edi,r12d
0x00873ad2: movzx  r8d,WORD PTR [rbx+0xaa]
0x00873ada: test   r8w,r8w
0x00873ade: jle    0x140873b0e
0x00873ae0: dec    r8w
0x00873ae4: mov    DWORD PTR [rsp+0x20],r12d
0x00873ae9: movzx  r9d,WORD PTR [rbx+0xac]
0x00873af1: movzx  edx,WORD PTR [rbx+0xa8]
0x00873af8: lea    rcx,[rip+0x1b578e1]        # 0x1423cb3e0
0x00873aff: call   0x14149c4a0
0x00873b04: movzx  edi,dil
0x00873b08: test   al,al
0x00873b0a: cmove  edi,r12d
0x00873b0e: movsx  r8d,WORD PTR [rbx+0xaa]
0x00873b16: mov    ecx,DWORD PTR [rip+0x1c6e4b4]        # 0x1424e1fd0
0x00873b1c: dec    ecx
0x00873b1e: cmp    r8d,ecx
0x00873b21: jge    0x140873b51
0x00873b23: inc    r8w
0x00873b27: mov    DWORD PTR [rsp+0x20],r12d
0x00873b2c: movzx  r9d,WORD PTR [rbx+0xac]
0x00873b34: movzx  edx,WORD PTR [rbx+0xa8]
0x00873b3b: lea    rcx,[rip+0x1b5789e]        # 0x1423cb3e0
0x00873b42: call   0x14149c4a0
0x00873b47: test   al,al
0x00873b49: jne    0x140873b51
0x00873b4b: lea    ecx,[r15+0x4]
0x00873b4f: jmp    0x140873b5a
0x00873b51: lea    ecx,[r15+0x4]
0x00873b55: test   dil,dil
0x00873b58: je     0x140873bd6
0x00873b5a: mov    eax,esi
0x00873b5c: cdq
0x00873b5d: sub    eax,edx
0x00873b5f: sar    eax,1
0x00873b61: mov    esi,eax
0x00873b63: mov    DWORD PTR [rip+0x1dd07ff],0x1010002        # 0x14264436c
0x00873b6d: mov    DWORD PTR [rip+0x1dd07f0],r14d        # 0x142644364
0x00873b74: mov    DWORD PTR [rip+0x1dd07ee],ecx        # 0x142644368
0x00873b7a: xorps  xmm0,xmm0
0x00873b7d: movups XMMWORD PTR [rbp-0x60],xmm0
0x00873b81: movdqa xmm1,XMMWORD PTR [rip+0xf11f47]        # 0x141785ad0
0x00873b89: movdqu XMMWORD PTR [rbp-0x50],xmm1
0x00873b8e: movsd  xmm0,QWORD PTR [rip+0xe3a4aa]        # 0x1416ae040 ; literal="By Obstacle"
0x00873b96: movsd  QWORD PTR [rbp-0x60],xmm0
0x00873b9b: movzx  eax,WORD PTR [rip+0xe3a4a6]        # 0x1416ae048 ; literal="cle"
0x00873ba2: mov    WORD PTR [rbp-0x58],ax
0x00873ba6: movzx  eax,BYTE PTR [rip+0xe3a49d]        # 0x1416ae04a ; literal="e"
0x00873bad: mov    BYTE PTR [rbp-0x56],al
0x00873bb0: mov    BYTE PTR [rbp-0x55],0x0
0x00873bb4: xor    r9d,r9d
0x00873bb7: lea    rdx,[rbp-0x60]
0x00873bbb: lea    rcx,[rip+0x1dd071e]        # 0x1426442e0
0x00873bc2: call   0x140ad69a0
0x00873bc7: nop
0x00873bc8: lea    rcx,[rbp-0x60]
0x00873bcc: call   0x14006f7e0
0x00873bd1: jmp    0x140873c6b
0x00873bd6: mov    DWORD PTR [rip+0x1dd078c],0x1010006        # 0x14264436c
0x00873be0: mov    DWORD PTR [rip+0x1dd077d],r14d        # 0x142644364
0x00873be7: mov    DWORD PTR [rip+0x1dd077b],ecx        # 0x142644368
0x00873bed: xorps  xmm0,xmm0
0x00873bf0: movups XMMWORD PTR [rbp-0x60],xmm0
0x00873bf4: movdqa xmm1,XMMWORD PTR [rip+0xf11eb4]        # 0x141785ab0
0x00873bfc: movdqu XMMWORD PTR [rbp-0x50],xmm1
0x00873c01: movsd  xmm0,QWORD PTR [rip+0xe3a467]        # 0x1416ae070 ; literal="Open Area"
0x00873c09: movsd  QWORD PTR [rbp-0x60],xmm0
0x00873c0e: movzx  eax,BYTE PTR [rip+0xe3a463]        # 0x1416ae078 ; literal="a"
0x00873c15: mov    BYTE PTR [rbp-0x58],al
0x00873c18: mov    BYTE PTR [rbp-0x57],0x0
0x00873c1c: xor    r9d,r9d
0x00873c1f: lea    rdx,[rbp-0x60]
0x00873c23: lea    rcx,[rip+0x1dd06b6]        # 0x1426442e0
0x00873c2a: call   0x140ad69a0
0x00873c2f: nop
0x00873c30: mov    rdx,QWORD PTR [rbp-0x48]
0x00873c34: cmp    rdx,0xf
0x00873c38: jbe    0x140873c6b
0x00873c3a: inc    rdx
0x00873c3d: mov    rcx,QWORD PTR [rbp-0x60]
0x00873c41: mov    rax,rcx
0x00873c44: cmp    rdx,0x1000
0x00873c4b: jb     0x140873c66
0x00873c4d: add    rdx,0x27
0x00873c51: mov    rcx,QWORD PTR [rcx-0x8]
0x00873c55: sub    rax,rcx
0x00873c58: add    rax,0xfffffffffffffff8
0x00873c5c: cmp    rax,0x1f
0x00873c60: ja     0x1408746ac
0x00873c66: call   0x1415345f0
0x00873c6b: mov    r8d,DWORD PTR [rbx+0x6b4]
0x00873c72: mov    eax,r8d
0x00873c75: cdq
0x00873c76: and    edx,0x3
0x00873c79: lea    edi,[rdx+rax*1]
0x00873c7c: sar    edi,0x2
0x00873c7f: test   DWORD PTR [rbx+0x110],0x8000
0x00873c89: cmove  edi,r8d
0x00873c8d: movsx  r12,WORD PTR [rbx+0xac]
0x00873c95: movsx  r11d,WORD PTR [rbx+0xaa]
0x00873c9d: movsx  r13d,WORD PTR [rbx+0xa8]
0x00873ca5: test   r13w,r13w
0x00873ca9: js     0x140873e4c
0x00873caf: mov    r8d,r13d
0x00873cb2: cmp    r13d,DWORD PTR [rip+0x1c6e313]        # 0x1424e1fcc
0x00873cb9: jge    0x140873e4c
0x00873cbf: test   r11w,r11w
0x00873cc3: js     0x140873e4c
0x00873cc9: mov    r9d,r11d
0x00873ccc: cmp    r11d,DWORD PTR [rip+0x1c6e2fd]        # 0x1424e1fd0
0x00873cd3: jge    0x140873e4c
0x00873cd9: test   r12w,r12w
0x00873cdd: js     0x140873e4c
0x00873ce3: cmp    r12d,DWORD PTR [rip+0x1c6e2ea]        # 0x1424e1fd4
0x00873cea: jge    0x140873e4c
0x00873cf0: movzx  eax,r13w
0x00873cf4: sar    ax,0x4
0x00873cf8: movzx  ecx,r11w
0x00873cfc: sar    cx,0x4
0x00873d00: mov    r10,QWORD PTR [rip+0x1c6e291]        # 0x1424e1f98
0x00873d07: test   r10,r10
0x00873d0a: je     0x140873e4c
0x00873d10: movsx  rax,ax
0x00873d14: movsx  rdx,cx
0x00873d18: mov    rax,QWORD PTR [r10+rax*8]
0x00873d1c: mov    rax,QWORD PTR [rax+rdx*8]
0x00873d20: mov    rdx,QWORD PTR [rax+r12*8]
0x00873d24: test   rdx,rdx
0x00873d27: je     0x140873e4c
0x00873d2d: and    r8d,0x8000000f
0x00873d34: jge    0x140873d40
0x00873d36: dec    r8d
0x00873d39: or     r8d,0xfffffff0
0x00873d3d: inc    r8d
0x00873d40: movsxd rcx,r8d
0x00873d43: add    rcx,0x5
0x00873d47: shl    rcx,0x4
0x00873d4b: and    r9d,0x8000000f
0x00873d52: jge    0x140873d5e
0x00873d54: dec    r9d
0x00873d57: or     r9d,0xfffffff0
0x00873d5b: inc    r9d
0x00873d5e: movsxd rax,r9d
0x00873d61: add    rcx,rax
0x00873d64: movzx  eax,WORD PTR [rdx+rcx*2]
0x00873d68: cmp    ax,0x22
0x00873d6c: je     0x140873d7c
0x00873d6e: mov    ecx,0x185
0x00873d73: cmp    ax,cx
0x00873d76: jne    0x140873e4e
0x00873d7c: mov    DWORD PTR [rsp+0x70],0x190
0x00873d84: mov    r13d,0xc8
0x00873d8a: lea    r12d,[r15+0x5]
0x00873d8e: mov    rcx,QWORD PTR [rsp+0x70]
0x00873d93: mov    DWORD PTR [rip+0x1dd05ca],r14d        # 0x142644364
0x00873d9a: mov    DWORD PTR [rip+0x1dd05c7],r12d        # 0x142644368
0x00873da1: cmp    edi,ecx
0x00873da3: jge    0x140873f5d
0x00873da9: mov    eax,esi
0x00873dab: cdq
0x00873dac: sub    eax,edx
0x00873dae: sar    eax,1
0x00873db0: mov    esi,eax
0x00873db2: mov    DWORD PTR [rip+0x1dd05b0],0x1010002        # 0x14264436c
0x00873dbc: xorps  xmm0,xmm0
0x00873dbf: movups XMMWORD PTR [rbp-0x60],xmm0
0x00873dc3: movdqa xmm1,XMMWORD PTR [rip+0xf11d25]        # 0x141785af0
0x00873dcb: movdqu XMMWORD PTR [rbp-0x50],xmm1
0x00873dd0: movsd  xmm0,QWORD PTR [rip+0xe3a288]        # 0x1416ae060 ; literal="In Vegetation"
0x00873dd8: movsd  QWORD PTR [rbp-0x60],xmm0
0x00873ddd: mov    eax,DWORD PTR [rip+0xe3a285]        # 0x1416ae068 ; literal="ation"
0x00873de3: mov    DWORD PTR [rbp-0x58],eax
0x00873de6: movzx  eax,BYTE PTR [rip+0xe3a27f]        # 0x1416ae06c ; literal="n"
0x00873ded: mov    BYTE PTR [rbp-0x54],al
0x00873df0: mov    BYTE PTR [rbp-0x53],0x0
0x00873df4: xor    r9d,r9d
0x00873df7: lea    rdx,[rbp-0x60]
0x00873dfb: lea    rcx,[rip+0x1dd04de]        # 0x1426442e0
0x00873e02: call   0x140ad69a0
0x00873e07: nop
0x00873e08: mov    rdx,QWORD PTR [rbp-0x48]
0x00873e0c: cmp    rdx,0xf
0x00873e10: jbe    0x140873ffe
0x00873e16: inc    rdx
0x00873e19: mov    rcx,QWORD PTR [rbp-0x60]
0x00873e1d: mov    rax,rcx
0x00873e20: cmp    rdx,0x1000
0x00873e27: jb     0x140873e42
0x00873e29: add    rdx,0x27
0x00873e2d: mov    rcx,QWORD PTR [rcx-0x8]
0x00873e31: sub    rax,rcx
0x00873e34: add    rax,0xfffffffffffffff8
0x00873e38: cmp    rax,0x1f
0x00873e3c: ja     0x1408746ac
0x00873e42: call   0x1415345f0
0x00873e47: jmp    0x140873ffe
0x00873e4c: xor    eax,eax
0x00873e4e: movzx  eax,ax
0x00873e51: cmp    eax,0x158
0x00873e56: ja     0x140873e85
0x00873e58: je     0x140873eb2
0x00873e5a: sub    eax,0x31
0x00873e5d: cmp    eax,0xb7
0x00873e62: ja     0x140873d84
0x00873e68: cdqe
0x00873e6a: lea    rdx,[rip+0xffffffffff78c18f]        # 0x140000000
0x00873e71: movzx  eax,BYTE PTR [rdx+rax*1+0x8749ec]
0x00873e79: mov    ecx,DWORD PTR [rdx+rax*4+0x8749e4]
0x00873e80: add    rcx,rdx
0x00873e83: jmp    rcx
0x00873e85: sub    eax,0x159
0x00873e8a: cmp    eax,0x34
0x00873e8d: ja     0x140873d84
0x00873e93: cdqe
0x00873e95: lea    rcx,[rip+0xffffffffff78c164]        # 0x140000000
0x00873e9c: movzx  eax,BYTE PTR [rcx+rax*1+0x874aac]
0x00873ea4: mov    r10d,DWORD PTR [rcx+rax*4+0x874aa4]
0x00873eac: add    r10,rcx
0x00873eaf: jmp    r10
0x00873eb2: movzx  r9d,r12w
0x00873eb6: movzx  r8d,r11w
0x00873eba: movzx  edx,r13w
0x00873ebe: lea    rcx,[rip+0x1b5751b]        # 0x1423cb3e0
0x00873ec5: call   0x1414cc2a0
0x00873eca: mov    r9,rax
0x00873ecd: test   rax,rax
0x00873ed0: je     0x140873d84
0x00873ed6: mov    edx,DWORD PTR [rax+0x8]
0x00873ed9: lea    rcx,[rip+0x1c72908]        # 0x1424e67e8
0x00873ee0: call   0x14014d7e0
0x00873ee5: test   rax,rax
0x00873ee8: je     0x140873d84
0x00873eee: movsx  edx,WORD PTR [rbx+0xa8]
0x00873ef5: and    edx,0x8000000f
0x00873efb: jge    0x140873f04
0x00873efd: dec    edx
0x00873eff: or     edx,0xfffffff0
0x00873f02: inc    edx
0x00873f04: movsx  ecx,WORD PTR [rbx+0xaa]
0x00873f0b: and    ecx,0x8000000f
0x00873f11: jge    0x140873f1a
0x00873f13: dec    ecx
0x00873f15: or     ecx,0xfffffff0
0x00873f18: inc    ecx
0x00873f1a: movsx  rax,dx
0x00873f1e: shl    rax,0x4
0x00873f22: movsx  rcx,cx
0x00873f26: add    rax,r9
0x00873f29: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00873f2e: mov    r13d,0xc8
0x00873f34: cmp    dl,0x43
0x00873f37: jb     0x140873f46
0x00873f39: mov    DWORD PTR [rsp+0x70],0x190
0x00873f41: jmp    0x140873d8a
0x00873f46: cmp    dl,0x21
0x00873f49: mov    r12d,0x0
0x00873f4f: cmova  r12d,r13d
0x00873f53: mov    QWORD PTR [rsp+0x70],r12
0x00873f58: jmp    0x140873d8a
0x00873f5d: mov    DWORD PTR [rip+0x1dd0405],0x1010006        # 0x14264436c
0x00873f67: test   DWORD PTR [rbx+0x110],0x8000
0x00873f71: jne    0x140873fa9
0x00873f73: mov    eax,edi
0x00873f75: cdq
0x00873f76: and    edx,0x3
0x00873f79: add    eax,edx
0x00873f7b: sar    eax,0x2
0x00873f7e: cmp    eax,ecx
0x00873f80: jge    0x140873fa9
0x00873f82: lea    rdx,[rip+0xe3a1a7]        # 0x1416ae130 ; literal="Non-Prone In Vegetation"
0x00873f89: lea    rcx,[rbp-0x60]
0x00873f8d: call   0x1400680e0
0x00873f92: nop
0x00873f93: xor    r9d,r9d
0x00873f96: lea    rdx,[rbp-0x60]
0x00873f9a: lea    rcx,[rip+0x1dd033f]        # 0x1426442e0
0x00873fa1: call   0x140ad69a0
0x00873fa6: nop
0x00873fa7: jmp    0x140873ff5
0x00873fa9: test   ecx,ecx
0x00873fab: lea    rcx,[rbp-0x60]
0x00873faf: je     0x140873fd4
0x00873fb1: lea    rdx,[rip+0xe3a158]        # 0x1416ae110 ; literal="Too Large For Vegetation"
0x00873fb8: call   0x1400680e0
0x00873fbd: nop
0x00873fbe: xor    r9d,r9d
0x00873fc1: lea    rdx,[rbp-0x60]
0x00873fc5: lea    rcx,[rip+0x1dd0314]        # 0x1426442e0
0x00873fcc: call   0x140ad69a0
0x00873fd1: nop
0x00873fd2: jmp    0x140873ff5
0x00873fd4: lea    rdx,[rip+0xe3a185]        # 0x1416ae160 ; literal="No Suitable Vegetation"
0x00873fdb: call   0x1400680e0
0x00873fe0: nop
0x00873fe1: xor    r9d,r9d
0x00873fe4: lea    rdx,[rbp-0x60]
0x00873fe8: lea    rcx,[rip+0x1dd02f1]        # 0x1426442e0
0x00873fef: call   0x140ad69a0
0x00873ff4: nop
0x00873ff5: lea    rcx,[rbp-0x60]
0x00873ff9: call   0x14006f7e0
0x00873ffe: lea    r8d,[r15+0x6]
0x00874002: mov    DWORD PTR [rip+0x1dd035b],r14d        # 0x142644364
0x00874009: mov    DWORD PTR [rip+0x1dd0358],r8d        # 0x142644368
0x00874010: cmp    edi,0x1f4
0x00874016: jl     0x1408741bd
0x0087401c: mov    eax,0x51eb851f
0x00874021: imul   edi
0x00874023: sar    edx,0x5
0x00874026: mov    eax,edx
0x00874028: shr    eax,0x1f
0x0087402b: add    edx,eax
0x0087402d: add    esi,edx
0x0087402f: mov    DWORD PTR [rip+0x1dd0333],0x1010004        # 0x14264436c
0x00874039: test   DWORD PTR [rbx+0x110],0x8000
0x00874043: jne    0x1408740db
0x00874049: cmp    edi,0x7d0
0x0087404f: jge    0x1408740db
0x00874055: lea    rcx,[rbp-0x60]
0x00874059: cmp    edi,0x5dc
0x0087405f: jl     0x140874087
0x00874061: lea    rdx,[rip+0xe3aaf0]        # 0x1416aeb58 ; literal="Huge Non-Prone Profile"
0x00874068: call   0x1400680e0
0x0087406d: nop
0x0087406e: xor    r9d,r9d
0x00874071: lea    rdx,[rbp-0x60]
0x00874075: lea    rcx,[rip+0x1dd0264]        # 0x1426442e0
0x0087407c: call   0x140ad69a0
0x00874081: nop
0x00874082: jmp    0x14087431b
0x00874087: cmp    edi,0x3e8
0x0087408d: jl     0x1408740b5
0x0087408f: lea    rdx,[rip+0xe3aaa2]        # 0x1416aeb38 ; literal="Very Large Non-Prone Profile"
0x00874096: call   0x1400680e0
0x0087409b: nop
0x0087409c: xor    r9d,r9d
0x0087409f: lea    rdx,[rbp-0x60]
0x008740a3: lea    rcx,[rip+0x1dd0236]        # 0x1426442e0
0x008740aa: call   0x140ad69a0
0x008740af: nop
0x008740b0: jmp    0x14087431b
0x008740b5: lea    rdx,[rip+0xe3aa3c]        # 0x1416aeaf8 ; literal="Large Non-Prone Profile"
0x008740bc: call   0x1400680e0
0x008740c1: nop
0x008740c2: xor    r9d,r9d
0x008740c5: lea    rdx,[rbp-0x60]
0x008740c9: lea    rcx,[rip+0x1dd0210]        # 0x1426442e0
0x008740d0: call   0x140ad69a0
0x008740d5: nop
0x008740d6: jmp    0x14087431b
0x008740db: lea    rcx,[rbp-0x60]
0x008740df: cmp    edi,0x9c4
0x008740e5: jl     0x14087410d
0x008740e7: lea    rdx,[rip+0xe3a05a]        # 0x1416ae148 ; literal="Gargantuan Profile"
0x008740ee: call   0x1400680e0
0x008740f3: nop
0x008740f4: xor    r9d,r9d
0x008740f7: lea    rdx,[rbp-0x60]
0x008740fb: lea    rcx,[rip+0x1dd01de]        # 0x1426442e0
0x00874102: call   0x140ad69a0
0x00874107: nop
0x00874108: jmp    0x14087431b
0x0087410d: cmp    edi,0x7d0
0x00874113: jl     0x14087413b
0x00874115: lea    rdx,[rip+0xe39fb4]        # 0x1416ae0d0 ; literal="Gigantic Profile"
0x0087411c: call   0x1400680e0
0x00874121: nop
0x00874122: xor    r9d,r9d
0x00874125: lea    rdx,[rbp-0x60]
0x00874129: lea    rcx,[rip+0x1dd01b0]        # 0x1426442e0
0x00874130: call   0x140ad69a0
0x00874135: nop
0x00874136: jmp    0x14087431b
0x0087413b: cmp    edi,0x5dc
0x00874141: jl     0x140874169
0x00874143: lea    rdx,[rip+0xe39f76]        # 0x1416ae0c0 ; literal="Huge Profile"
0x0087414a: call   0x1400680e0
0x0087414f: nop
0x00874150: xor    r9d,r9d
0x00874153: lea    rdx,[rbp-0x60]
0x00874157: lea    rcx,[rip+0x1dd0182]        # 0x1426442e0
0x0087415e: call   0x140ad69a0
0x00874163: nop
0x00874164: jmp    0x14087431b
0x00874169: cmp    edi,0x3e8
0x0087416f: jl     0x140874197
0x00874171: lea    rdx,[rip+0xe39f80]        # 0x1416ae0f8 ; literal="Very Large Profile"
0x00874178: call   0x1400680e0
0x0087417d: nop
0x0087417e: xor    r9d,r9d
0x00874181: lea    rdx,[rbp-0x60]
0x00874185: lea    rcx,[rip+0x1dd0154]        # 0x1426442e0
0x0087418c: call   0x140ad69a0
0x00874191: nop
0x00874192: jmp    0x14087431b
0x00874197: lea    rdx,[rip+0xe39f4a]        # 0x1416ae0e8 ; literal="Large Profile"
0x0087419e: call   0x1400680e0
0x008741a3: nop
0x008741a4: xor    r9d,r9d
0x008741a7: lea    rdx,[rbp-0x60]
0x008741ab: lea    rcx,[rip+0x1dd012e]        # 0x1426442e0
0x008741b2: call   0x140ad69a0
0x008741b7: nop
0x008741b8: jmp    0x14087431b
0x008741bd: cmp    edi,r13d
0x008741c0: jge    0x1408742bd
0x008741c6: mov    ecx,edi
0x008741c8: imul   ecx,esi
0x008741cb: mov    eax,0x51eb851f
0x008741d0: imul   ecx
0x008741d2: mov    esi,edx
0x008741d4: sar    esi,0x6
0x008741d7: mov    eax,esi
0x008741d9: shr    eax,0x1f
0x008741dc: add    esi,eax
0x008741de: mov    DWORD PTR [rip+0x1dd0184],0x1010002        # 0x14264436c
0x008741e8: lea    rcx,[rbp-0x60]
0x008741ec: test   edi,edi
0x008741ee: jne    0x140874216
0x008741f0: lea    rdx,[rip+0xe3a8e9]        # 0x1416aeae0 ; literal="Vanishing Profile"
0x008741f7: call   0x1400680e0
0x008741fc: nop
0x008741fd: xor    r9d,r9d
0x00874200: lea    rdx,[rbp-0x60]
0x00874204: lea    rcx,[rip+0x1dd00d5]        # 0x1426442e0
0x0087420b: call   0x140ad69a0
0x00874210: nop
0x00874211: jmp    0x14087431b
0x00874216: cmp    edi,0x32
0x00874219: jge    0x140874241
0x0087421b: lea    rdx,[rip+0xe3a8fe]        # 0x1416aeb20 ; literal="Minuscule Profile"
0x00874222: call   0x1400680e0
0x00874227: nop
0x00874228: xor    r9d,r9d
0x0087422b: lea    rdx,[rbp-0x60]
0x0087422f: lea    rcx,[rip+0x1dd00aa]        # 0x1426442e0
0x00874236: call   0x140ad69a0
0x0087423b: nop
0x0087423c: jmp    0x14087431b
0x00874241: cmp    edi,0x64
0x00874244: jge    0x14087426c
0x00874246: lea    rdx,[rip+0xe3a8c3]        # 0x1416aeb10 ; literal="Tiny Profile"
0x0087424d: call   0x1400680e0
0x00874252: nop
0x00874253: xor    r9d,r9d
0x00874256: lea    rdx,[rbp-0x60]
0x0087425a: lea    rcx,[rip+0x1dd007f]        # 0x1426442e0
0x00874261: call   0x140ad69a0
0x00874266: nop
0x00874267: jmp    0x14087431b
0x0087426c: cmp    edi,0x96
0x00874272: jge    0x14087429a
0x00874274: lea    rdx,[rip+0xe3a945]        # 0x1416aebc0 ; literal="Very Small Profile"
0x0087427b: call   0x1400680e0
0x00874280: nop
0x00874281: xor    r9d,r9d
0x00874284: lea    rdx,[rbp-0x60]
0x00874288: lea    rcx,[rip+0x1dd0051]        # 0x1426442e0
0x0087428f: call   0x140ad69a0
0x00874294: nop
0x00874295: jmp    0x14087431b
0x0087429a: lea    rdx,[rip+0xe3a90f]        # 0x1416aebb0 ; literal="Small Profile"
0x008742a1: call   0x1400680e0
0x008742a6: nop
0x008742a7: xor    r9d,r9d
0x008742aa: lea    rdx,[rbp-0x60]
0x008742ae: lea    rcx,[rip+0x1dd002b]        # 0x1426442e0
0x008742b5: call   0x140ad69a0
0x008742ba: nop
0x008742bb: jmp    0x14087431b
0x008742bd: mov    DWORD PTR [rip+0x1dd00a5],0x1010006        # 0x14264436c
0x008742c7: lea    rcx,[rbp-0x60]
0x008742cb: test   DWORD PTR [rbx+0x110],0x8000
0x008742d5: jne    0x1408742fa
0x008742d7: lea    rdx,[rip+0xe3a8fa]        # 0x1416aebd8 ; literal="Average Non-Prone Profile"
0x008742de: call   0x1400680e0
0x008742e3: nop
0x008742e4: xor    r9d,r9d
0x008742e7: lea    rdx,[rbp-0x60]
0x008742eb: lea    rcx,[rip+0x1dcffee]        # 0x1426442e0
0x008742f2: call   0x140ad69a0
0x008742f7: nop
0x008742f8: jmp    0x14087431b
0x008742fa: lea    rdx,[rip+0xe3a8f7]        # 0x1416aebf8 ; literal="Average Profile"
0x00874301: call   0x1400680e0
0x00874306: nop
0x00874307: xor    r9d,r9d
0x0087430a: lea    rdx,[rbp-0x60]
0x0087430e: lea    rcx,[rip+0x1dcffcb]        # 0x1426442e0
0x00874315: call   0x140ad69a0
0x0087431a: nop
0x0087431b: lea    rcx,[rbp-0x60]
0x0087431f: call   0x14006f7e0
0x00874324: mov    DWORD PTR [rip+0x1dd003e],0x1010007        # 0x14264436c
0x0087432e: mov    ebx,DWORD PTR [rsp+0x5c]
0x00874332: mov    DWORD PTR [rip+0x1dd002c],ebx        # 0x142644364
0x00874338: mov    DWORD PTR [rip+0x1dd0029],r15d        # 0x142644368
0x0087433f: xorps  xmm0,xmm0
0x00874342: movups XMMWORD PTR [rbp-0x60],xmm0
0x00874346: mov    ecx,0x20
0x0087434b: call   0x140070760
0x00874350: mov    QWORD PTR [rbp-0x60],rax
0x00874354: movdqa xmm0,XMMWORD PTR [rip+0xf11864]        # 0x141785bc0
0x0087435c: movdqu XMMWORD PTR [rbp-0x50],xmm0
0x00874361: movups xmm0,XMMWORD PTR [rip+0xe3a818]        # 0x1416aeb80 ; literal="Visual Stealth (w/o Skill)"
0x00874368: movups XMMWORD PTR [rax],xmm0
0x0087436b: movsd  xmm0,QWORD PTR [rip+0xe3a81d]        # 0x1416aeb90 ; literal="w/o Skill)"
0x00874373: movsd  QWORD PTR [rax+0x10],xmm0
0x00874378: movzx  ecx,WORD PTR [rip+0xe3a819]        # 0x1416aeb98 ; literal="l)"
0x0087437f: mov    WORD PTR [rax+0x18],cx
0x00874383: mov    BYTE PTR [rax+0x1a],0x0
0x00874387: xor    r9d,r9d
0x0087438a: lea    rdx,[rbp-0x60]
0x0087438e: lea    rcx,[rip+0x1dcff4b]        # 0x1426442e0
0x00874395: call   0x140ad69a0
0x0087439a: nop
0x0087439b: lea    rcx,[rbp-0x60]
0x0087439f: call   0x14006f7e0
0x008743a4: mov    DWORD PTR [rip+0x1dcffba],ebx        # 0x142644364
0x008743aa: lea    eax,[r15+0x2]
0x008743ae: mov    DWORD PTR [rip+0x1dcffb4],eax        # 0x142644368
0x008743b4: test   esi,esi
0x008743b6: jg     0x140874456
0x008743bc: mov    DWORD PTR [rip+0x1dcffa6],0x1010003        # 0x14264436c
0x008743c6: xorps  xmm0,xmm0
0x008743c9: movups XMMWORD PTR [rbp-0x60],xmm0
0x008743cd: movdqa xmm1,XMMWORD PTR [rip+0xf1171b]        # 0x141785af0
0x008743d5: movdqu XMMWORD PTR [rbp-0x50],xmm1
0x008743da: movsd  xmm0,QWORD PTR [rip+0xe3a78e]        # 0x1416aeb70 ; literal="Best Possible"
0x008743e2: movsd  QWORD PTR [rbp-0x60],xmm0
0x008743e7: mov    eax,DWORD PTR [rip+0xe3a78b]        # 0x1416aeb78 ; literal="sible"
0x008743ed: mov    DWORD PTR [rbp-0x58],eax
0x008743f0: movzx  eax,BYTE PTR [rip+0xe3a785]        # 0x1416aeb7c ; literal="e"
0x008743f7: mov    BYTE PTR [rbp-0x54],al
0x008743fa: mov    BYTE PTR [rbp-0x53],0x0
0x008743fe: xor    r9d,r9d
0x00874401: lea    rdx,[rbp-0x60]
0x00874405: lea    rcx,[rip+0x1dcfed4]        # 0x1426442e0
0x0087440c: call   0x140ad69a0
0x00874411: nop
0x00874412: mov    rdx,QWORD PTR [rbp-0x48]
0x00874416: cmp    rdx,0xf
0x0087441a: jbe    0x1408745fb
0x00874420: inc    rdx
0x00874423: mov    rcx,QWORD PTR [rbp-0x60]
0x00874427: mov    rax,rcx
0x0087442a: cmp    rdx,0x1000
0x00874431: jb     0x14087444c
0x00874433: add    rdx,0x27
0x00874437: mov    rcx,QWORD PTR [rcx-0x8]
0x0087443b: sub    rax,rcx
0x0087443e: add    rax,0xfffffffffffffff8
0x00874442: cmp    rax,0x1f
0x00874446: ja     0x1408746ac
0x0087444c: call   0x1415345f0
0x00874451: jmp    0x1408745fb
0x00874456: lea    rcx,[rbp-0x60]
0x0087445a: cmp    esi,0x2
0x0087445d: jg     0x14087448f
0x0087445f: mov    DWORD PTR [rip+0x1dcff03],0x1010002        # 0x14264436c
0x00874469: lea    rdx,[rip+0xdcd718]        # 0x141641b88 ; literal="Fantastic"
0x00874470: call   0x1400680e0
0x00874475: nop
0x00874476: xor    r9d,r9d
0x00874479: lea    rdx,[rbp-0x60]
0x0087447d: lea    rcx,[rip+0x1dcfe5c]        # 0x1426442e0
0x00874484: call   0x140ad69a0
0x00874489: nop
0x0087448a: jmp    0x1408745f2
0x0087448f: cmp    esi,0x4
0x00874492: jg     0x1408744c4
0x00874494: mov    DWORD PTR [rip+0x1dcfece],0x1010001        # 0x14264436c
0x0087449e: lea    rdx,[rip+0xdcd737]        # 0x141641bdc ; literal="Great"
0x008744a5: call   0x1400680e0
0x008744aa: nop
0x008744ab: xor    r9d,r9d
0x008744ae: lea    rdx,[rbp-0x60]
0x008744b2: lea    rcx,[rip+0x1dcfe27]        # 0x1426442e0
0x008744b9: call   0x140ad69a0
0x008744be: nop
0x008744bf: jmp    0x1408745f2
0x008744c4: cmp    esi,0x6
0x008744c7: jg     0x1408744f9
0x008744c9: mov    DWORD PTR [rip+0x1dcfe99],0x1010007        # 0x14264436c
0x008744d3: lea    rdx,[rip+0xdcd69a]        # 0x141641b74 ; literal="Good"
0x008744da: call   0x1400680e0
0x008744df: nop
0x008744e0: xor    r9d,r9d
0x008744e3: lea    rdx,[rbp-0x60]
0x008744e7: lea    rcx,[rip+0x1dcfdf2]        # 0x1426442e0
0x008744ee: call   0x140ad69a0
0x008744f3: nop
0x008744f4: jmp    0x1408745f2
0x008744f9: cmp    esi,0xa
0x008744fc: jg     0x14087452e
0x008744fe: mov    DWORD PTR [rip+0x1dcfe64],0x1000007        # 0x14264436c
0x00874508: lea    rdx,[rip+0xde7849]        # 0x14165bd58 ; literal="Average"
0x0087450f: call   0x1400680e0
0x00874514: nop
0x00874515: xor    r9d,r9d
0x00874518: lea    rdx,[rbp-0x60]
0x0087451c: lea    rcx,[rip+0x1dcfdbd]        # 0x1426442e0
0x00874523: call   0x140ad69a0
0x00874528: nop
0x00874529: jmp    0x1408745f2
0x0087452e: cmp    esi,0xf
0x00874531: jg     0x140874563
0x00874533: mov    DWORD PTR [rip+0x1dcfe2f],0x1000006        # 0x14264436c
0x0087453d: lea    rdx,[rip+0xe3a660]        # 0x1416aeba4 ; literal="Poor"
0x00874544: call   0x1400680e0
0x00874549: nop
0x0087454a: xor    r9d,r9d
0x0087454d: lea    rdx,[rbp-0x60]
0x00874551: lea    rcx,[rip+0x1dcfd88]        # 0x1426442e0
0x00874558: call   0x140ad69a0
0x0087455d: nop
0x0087455e: jmp    0x1408745f2
0x00874563: cmp    esi,0x14
0x00874566: jg     0x140874595
0x00874568: mov    DWORD PTR [rip+0x1dcfdfa],0x1010006        # 0x14264436c
0x00874572: lea    rdx,[rip+0xe3a623]        # 0x1416aeb9c ; literal="Awful"
0x00874579: call   0x1400680e0
0x0087457e: nop
0x0087457f: xor    r9d,r9d
0x00874582: lea    rdx,[rbp-0x60]
0x00874586: lea    rcx,[rip+0x1dcfd53]        # 0x1426442e0
0x0087458d: call   0x140ad69a0
0x00874592: nop
0x00874593: jmp    0x1408745f2
0x00874595: cmp    esi,0x19
0x00874598: jg     0x1408745c7
0x0087459a: mov    DWORD PTR [rip+0x1dcfdc8],0x1010004        # 0x14264436c
0x008745a4: lea    rdx,[rip+0xe3a40d]        # 0x1416ae9b8 ; literal="Terrible"
0x008745ab: call   0x1400680e0
0x008745b0: nop
0x008745b1: xor    r9d,r9d
0x008745b4: lea    rdx,[rbp-0x60]
0x008745b8: lea    rcx,[rip+0x1dcfd21]        # 0x1426442e0
0x008745bf: call   0x140ad69a0
0x008745c4: nop
0x008745c5: jmp    0x1408745f2
0x008745c7: mov    DWORD PTR [rip+0x1dcfd9b],0x1010005        # 0x14264436c
0x008745d1: lea    rdx,[rip+0xe3a3d0]        # 0x1416ae9a8 ; literal="Worst Possible"
0x008745d8: call   0x1400680e0
0x008745dd: nop
0x008745de: xor    r9d,r9d
0x008745e1: lea    rdx,[rbp-0x60]
0x008745e5: lea    rcx,[rip+0x1dcfcf4]        # 0x1426442e0
0x008745ec: call   0x140ad69a0
0x008745f1: nop
0x008745f2: lea    rcx,[rbp-0x60]
0x008745f6: call   0x14006f7e0
0x008745fb: mov    DWORD PTR [rip+0x1dcfd67],0x1000007        # 0x14264436c
0x00874605: mov    DWORD PTR [rip+0x1dcfd59],ebx        # 0x142644364
0x0087460b: mov    DWORD PTR [rip+0x1dcfd56],r12d        # 0x142644368
0x00874612: xorps  xmm0,xmm0
0x00874615: movups XMMWORD PTR [rbp-0x60],xmm0
0x00874619: mov    ecx,0x40
0x0087461e: call   0x140070760
0x00874623: mov    rcx,rax
0x00874626: mov    QWORD PTR [rbp-0x60],rax
0x0087462a: movdqa xmm0,XMMWORD PTR [rip+0xf1170e]        # 0x141785d40 ; literal="2"
0x00874632: movdqu XMMWORD PTR [rbp-0x50],xmm0
0x00874637: movups xmm0,XMMWORD PTR [rip+0xe3a3a2]        # 0x1416ae9e0 ; literal="Quick movement and other actions decrease stealth."
0x0087463e: movups XMMWORD PTR [rax],xmm0
0x00874641: movups xmm1,XMMWORD PTR [rip+0xe3a3a8]        # 0x1416ae9f0 ; literal="nd other actions decrease stealth."
0x00874648: movups XMMWORD PTR [rax+0x10],xmm1
0x0087464c: movups xmm0,XMMWORD PTR [rip+0xe3a3ad]        # 0x1416aea00 ; literal=" decrease stealth."
0x00874653: movups XMMWORD PTR [rax+0x20],xmm0
0x00874657: movzx  eax,WORD PTR [rip+0xe3a3b2]        # 0x1416aea10 ; literal="h."
0x0087465e: mov    WORD PTR [rcx+0x30],ax
0x00874662: mov    BYTE PTR [rcx+0x32],0x0
0x00874666: xor    r9d,r9d
0x00874669: lea    rdx,[rbp-0x60]
0x0087466d: lea    rcx,[rip+0x1dcfc6c]        # 0x1426442e0
0x00874674: call   0x140ad69a0
0x00874679: nop
0x0087467a: mov    rdx,QWORD PTR [rbp-0x48]
0x0087467e: cmp    rdx,0xf
0x00874682: jbe    0x1408746b8
0x00874684: inc    rdx
0x00874687: mov    rcx,QWORD PTR [rbp-0x60]
0x0087468b: mov    rax,rcx
0x0087468e: cmp    rdx,0x1000
0x00874695: jb     0x1408746b3
0x00874697: add    rdx,0x27
0x0087469b: mov    rcx,QWORD PTR [rcx-0x8]
0x0087469f: sub    rax,rcx
0x008746a2: add    rax,0xfffffffffffffff8
0x008746a6: cmp    rax,0x1f
0x008746aa: jbe    0x1408746b3
0x008746ac: call   QWORD PTR [rip+0xd6c3ee]        # 0x1415e0aa0
0x008746b2: int3
0x008746b3: call   0x1415345f0
0x008746b8: mov    DWORD PTR [rip+0x1dcfcaa],0x1010007        # 0x14264436c
0x008746c2: mov    r12d,DWORD PTR [rsp+0x5c]
0x008746c7: mov    DWORD PTR [rip+0x1dcfc96],r12d        # 0x142644364
0x008746ce: mov    r13d,DWORD PTR [rsp+0x4c]
0x008746d3: add    r13d,0xfffffffa
0x008746d7: mov    DWORD PTR [rip+0x1dcfc8a],r13d        # 0x142644368
0x008746de: mov    edx,0x19f
0x008746e3: call   0x140c364f0
0x008746e8: xorps  xmm0,xmm0
0x008746eb: movups XMMWORD PTR [rbp-0x60],xmm0
0x008746ef: mov    ecx,0x20
0x008746f4: call   0x140070760
0x008746f9: mov    QWORD PTR [rbp-0x60],rax
0x008746fd: movdqa xmm0,XMMWORD PTR [rip+0xf1145b]        # 0x141785b60
0x00874705: movdqu XMMWORD PTR [rbp-0x50],xmm0
0x0087470a: movups xmm0,XMMWORD PTR [rip+0xe3a2b7]        # 0x1416ae9c8 ; literal=" Swimming Preference"
0x00874711: movups XMMWORD PTR [rax],xmm0
0x00874714: mov    ecx,DWORD PTR [rip+0xe3a2be]        # 0x1416ae9d8 ; literal="ence"
0x0087471a: mov    DWORD PTR [rax+0x10],ecx
0x0087471d: mov    BYTE PTR [rax+0x14],0x0
0x00874721: xor    r9d,r9d
0x00874724: lea    rdx,[rbp-0x60]
0x00874728: lea    rcx,[rip+0x1dcfbb1]        # 0x1426442e0
0x0087472f: call   0x140ad69a0
0x00874734: nop
0x00874735: lea    rcx,[rbp-0x60]
0x00874739: call   0x14006f7e0
0x0087473e: mov    eax,DWORD PTR [rsp+0x50]
0x00874742: lea    esi,[rax+0x14]
0x00874745: lea    r15d,[rax+0x16]
0x00874749: lea    r14d,[rax+0x28]
0x0087474d: mov    ebx,r12d
0x00874750: cmp    r12d,esi
0x00874753: jg     0x1408747dd
0x00874759: nop    DWORD PTR [rax+0x0]
0x00874760: lea    edi,[r13+0x2]
0x00874764: lea    r11,[rip+0x1dd1619]        # 0x142645d84
0x0087476b: nop    DWORD PTR [rax+rax*1+0x0]
0x00874770: mov    DWORD PTR [rip+0x1dcfbee],ebx        # 0x142644364
0x00874776: mov    DWORD PTR [rip+0x1dcfbec],edi        # 0x142644368
0x0087477c: cmp    WORD PTR [rip+0x1ada2d8],0x0        # 0x14234ea5c
0x00874784: jne    0x1408747a0
0x00874786: cmp    ebx,r12d
0x00874789: jne    0x140874791
0x0087478b: mov    edx,DWORD PTR [r11-0x18]
0x0087478f: jmp    0x1408747b9
0x00874791: cmp    ebx,esi
0x00874793: jne    0x14087479a
0x00874795: mov    edx,DWORD PTR [r11]
0x00874798: jmp    0x1408747b9
0x0087479a: mov    edx,DWORD PTR [r11-0xc]
0x0087479e: jmp    0x1408747b9
0x008747a0: cmp    ebx,r12d
0x008747a3: jne    0x1408747ab
0x008747a5: mov    edx,DWORD PTR [r11-0x60]
0x008747a9: jmp    0x1408747b9
0x008747ab: cmp    ebx,esi
0x008747ad: jne    0x1408747b5
0x008747af: mov    edx,DWORD PTR [r11-0x48]
0x008747b3: jmp    0x1408747b9
0x008747b5: mov    edx,DWORD PTR [r11-0x54]
0x008747b9: lea    rcx,[rip+0x1dcfb20]        # 0x1426442e0
0x008747c0: call   0x140ad7b10
0x008747c5: inc    edi
0x008747c7: add    r11,0x4
0x008747cb: lea    rax,[rip+0x1dd15be]        # 0x142645d90
0x008747d2: cmp    r11,rax
0x008747d5: jl     0x140874770
0x008747d7: inc    ebx
0x008747d9: cmp    ebx,esi
0x008747db: jle    0x140874760
0x008747dd: mov    DWORD PTR [rip+0x1dcfb85],0x1010007        # 0x14264436c
0x008747e7: lea    eax,[r12+0x2]
0x008747ec: mov    DWORD PTR [rip+0x1dcfb72],eax        # 0x142644364
0x008747f2: lea    esi,[r13+0x3]
0x008747f6: mov    DWORD PTR [rip+0x1dcfb6c],esi        # 0x142644368
0x008747fc: xorps  xmm0,xmm0
0x008747ff: movups XMMWORD PTR [rbp-0x60],xmm0
0x00874803: movdqa xmm1,XMMWORD PTR [rip+0xf112e5]        # 0x141785af0
0x0087480b: movdqu XMMWORD PTR [rbp-0x50],xmm1
0x00874810: movsd  xmm0,QWORD PTR [rip+0xe3a148]        # 0x1416ae960 ; literal="When possible"
0x00874818: movsd  QWORD PTR [rbp-0x60],xmm0
0x0087481d: mov    eax,DWORD PTR [rip+0xe3a145]        # 0x1416ae968 ; literal="sible"
0x00874823: mov    DWORD PTR [rbp-0x58],eax
0x00874826: movzx  eax,BYTE PTR [rip+0xe3a13f]        # 0x1416ae96c ; literal="e"
0x0087482d: mov    BYTE PTR [rbp-0x54],al
0x00874830: mov    BYTE PTR [rbp-0x53],0x0
0x00874834: xor    r9d,r9d
0x00874837: lea    rdx,[rbp-0x60]
0x0087483b: lea    rcx,[rip+0x1dcfa9e]        # 0x1426442e0
0x00874842: call   0x140ad69a0
0x00874847: nop
0x00874848: lea    rcx,[rbp-0x60]
0x0087484c: call   0x14006f7e0
0x00874851: mov    ebx,r15d
0x00874854: cmp    r15d,r14d
0x00874857: jg     0x1408748d9
0x0087485d: lea    r12,[rip+0x1dd152c]        # 0x142645d90
0x00874864: lea    edi,[r13+0x2]
0x00874868: lea    r11,[rip+0x1dd1515]        # 0x142645d84
0x0087486f: nop
0x00874870: mov    DWORD PTR [rip+0x1dcfaee],ebx        # 0x142644364
0x00874876: mov    DWORD PTR [rip+0x1dcfaec],edi        # 0x142644368
0x0087487c: cmp    WORD PTR [rip+0x1ada1d8],0x1        # 0x14234ea5c
0x00874884: jne    0x1408748a1
0x00874886: cmp    ebx,r15d
0x00874889: jne    0x140874891
0x0087488b: mov    edx,DWORD PTR [r11-0x18]
0x0087488f: jmp    0x1408748bb
0x00874891: cmp    ebx,r14d
0x00874894: jne    0x14087489b
0x00874896: mov    edx,DWORD PTR [r11]
0x00874899: jmp    0x1408748bb
0x0087489b: mov    edx,DWORD PTR [r11-0xc]
0x0087489f: jmp    0x1408748bb
0x008748a1: cmp    ebx,r15d
0x008748a4: jne    0x1408748ac
0x008748a6: mov    edx,DWORD PTR [r11-0x60]
0x008748aa: jmp    0x1408748bb
0x008748ac: cmp    ebx,r14d
0x008748af: jne    0x1408748b7
0x008748b1: mov    edx,DWORD PTR [r11-0x48]
0x008748b5: jmp    0x1408748bb
0x008748b7: mov    edx,DWORD PTR [r11-0x54]
0x008748bb: lea    rcx,[rip+0x1dcfa1e]        # 0x1426442e0
0x008748c2: call   0x140ad7b10
0x008748c7: inc    edi
0x008748c9: add    r11,0x4
0x008748cd: cmp    r11,r12
0x008748d0: jl     0x140874870
0x008748d2: inc    ebx
0x008748d4: cmp    ebx,r14d
0x008748d7: jle    0x140874864
0x008748d9: mov    DWORD PTR [rip+0x1dcfa89],0x1010007        # 0x14264436c
0x008748e3: lea    eax,[r15+0x2]
0x008748e7: mov    DWORD PTR [rip+0x1dcfa77],eax        # 0x142644364
0x008748ed: mov    DWORD PTR [rip+0x1dcfa75],esi        # 0x142644368
0x008748f3: xorps  xmm0,xmm0
0x008748f6: movups XMMWORD PTR [rbp-0x60],xmm0
0x008748fa: movdqa xmm1,XMMWORD PTR [rip+0xf111fe]        # 0x141785b00
0x00874902: movdqu XMMWORD PTR [rbp-0x50],xmm1
0x00874907: movsd  xmm0,QWORD PTR [rip+0xe3a041]        # 0x1416ae950 ; literal="When necessary"
0x0087490f: movsd  QWORD PTR [rbp-0x60],xmm0
0x00874914: mov    eax,DWORD PTR [rip+0xe3a03e]        # 0x1416ae958 ; literal="essary"
0x0087491a: mov    DWORD PTR [rbp-0x58],eax
0x0087491d: movzx  eax,WORD PTR [rip+0xe3a038]        # 0x1416ae95c ; literal="ry"
0x00874924: mov    WORD PTR [rbp-0x54],ax
0x00874928: mov    BYTE PTR [rbp-0x52],0x0
0x0087492c: xor    r9d,r9d
0x0087492f: lea    rdx,[rbp-0x60]
0x00874933: lea    rcx,[rip+0x1dcf9a6]        # 0x1426442e0
0x0087493a: call   0x140ad69a0
0x0087493f: nop
0x00874940: lea    rcx,[rbp-0x60]
0x00874944: call   0x14006f7e0
0x00874949: nop
0x0087494a: lea    rcx,[rbp+0x80]
0x00874951: call   0x14006f7e0
0x00874956: nop
0x00874957: lea    rcx,[rbp+0x60]
0x0087495b: call   0x14006f7e0
0x00874960: mov    rcx,QWORD PTR [rbp+0xa0]
0x00874967: xor    rcx,rsp
0x0087496a: call   0x1415345d0
0x0087496f: mov    rbx,QWORD PTR [rsp+0x208]
0x00874977: movaps xmm6,XMMWORD PTR [rsp+0x1b0]
0x0087497f: add    rsp,0x1c0
0x00874986: pop    r15
0x00874988: pop    r14
0x0087498a: pop    r13
0x0087498c: pop    r12
0x0087498e: pop    rdi
0x0087498f: pop    rsi
0x00874990: pop    rbp
0x00874991: ret
0x00874992: xchg   ax,ax
0x00874994: xchg   esi,eax
0x00874995: sub    eax,DWORD PTR [rdi-0x78d46600]
0x0087499b: add    bl,al
0x0087499d: sub    eax,DWORD PTR [rdi-0x78d46200]
0x008749a3: add    BYTE PTR [rsi-0x51ff78d5],ah
0x008749a9: sub    eax,DWORD PTR [rdi-0x78d43d00]
0x008749af: add    BYTE PTR [rdx-0x55ff78d5],ah
0x008749b5: sub    eax,DWORD PTR [rdi-0x78d44e00]
0x008749bb: add    BYTE PTR [rcx+0x33],ah
0x008749be: xchg   DWORD PTR [rax],eax
0x008749c0: xor    eax,DWORD PTR gs:[rdi-0x78cc7200]
0x008749c7: add    BYTE PTR [rcx+0x33],ch
0x008749ca: xchg   DWORD PTR [rax],eax
0x008749cc: jno    0x140874a01
0x008749ce: xchg   DWORD PTR [rax],eax
0x008749d0: jns    0x140874a05
0x008749d2: xchg   DWORD PTR [rax],eax
0x008749d4: mov    ?,WORD PTR [rbx]
0x008749d6: xchg   DWORD PTR [rax],eax
0x008749d8: ins    DWORD PTR [rdi],dx
0x008749d9: xor    eax,DWORD PTR [rdi-0x78cc8b00]
0x008749df: add    BYTE PTR [rbp+0x33],bh
0x008749e2: xchg   DWORD PTR [rax],eax
0x008749e4: mov    dl,0x3e
0x008749e6: xchg   DWORD PTR [rax],eax
0x008749e8: test   BYTE PTR [rip+0x87],bh        # 0x140874a75
0x008749ee: add    BYTE PTR [rax],al
0x008749f0: add    BYTE PTR [rax],al
0x008749f2: add    DWORD PTR [rcx],eax
0x008749f4: add    DWORD PTR [rcx],eax
0x008749f6: add    DWORD PTR [rcx],eax
0x008749f8: add    DWORD PTR [rcx],eax
0x008749fa: add    DWORD PTR [rcx],eax
0x008749fc: add    DWORD PTR [rcx],eax
0x008749fe: add    DWORD PTR [rcx],eax
0x00874a00: add    DWORD PTR [rcx],eax
0x00874a02: add    DWORD PTR [rcx],eax
0x00874a04: add    DWORD PTR [rcx],eax
0x00874a06: add    DWORD PTR [rcx],eax
0x00874a08: add    DWORD PTR [rcx],eax
0x00874a0a: add    DWORD PTR [rcx],eax
0x00874a0c: add    DWORD PTR [rcx],eax
0x00874a0e: add    DWORD PTR [rcx],eax
0x00874a10: add    DWORD PTR [rcx],eax
0x00874a12: add    DWORD PTR [rcx],eax
0x00874a14: add    DWORD PTR [rcx],eax
0x00874a16: add    DWORD PTR [rcx],eax
0x00874a18: add    DWORD PTR [rcx],eax
0x00874a1a: add    DWORD PTR [rcx],eax
0x00874a1c: add    DWORD PTR [rcx],eax
0x00874a1e: add    DWORD PTR [rcx],eax
0x00874a20: add    DWORD PTR [rcx],eax
0x00874a22: add    DWORD PTR [rcx],eax
0x00874a24: add    DWORD PTR [rcx],eax
0x00874a26: add    DWORD PTR [rcx],eax
0x00874a28: add    DWORD PTR [rcx],eax
0x00874a2a: add    DWORD PTR [rcx],eax
0x00874a2c: add    DWORD PTR [rcx],eax
0x00874a2e: add    DWORD PTR [rcx],eax
0x00874a30: add    DWORD PTR [rcx],eax
0x00874a32: add    DWORD PTR [rcx],eax
0x00874a34: add    DWORD PTR [rcx],eax
0x00874a36: add    DWORD PTR [rcx],eax
0x00874a38: add    DWORD PTR [rcx],eax
0x00874a3a: add    DWORD PTR [rcx],eax
0x00874a3c: add    DWORD PTR [rcx],eax
0x00874a3e: add    DWORD PTR [rcx],eax
0x00874a40: add    DWORD PTR [rcx],eax
0x00874a42: add    DWORD PTR [rcx],eax
0x00874a44: add    DWORD PTR [rcx],eax
0x00874a46: add    DWORD PTR [rcx],eax
0x00874a48: add    DWORD PTR [rcx],eax
0x00874a4a: add    DWORD PTR [rcx],eax
0x00874a4c: add    DWORD PTR [rcx],eax
0x00874a4e: add    DWORD PTR [rcx],eax
0x00874a50: add    DWORD PTR [rcx],eax
0x00874a52: add    DWORD PTR [rcx],eax
0x00874a54: add    DWORD PTR [rcx],eax
0x00874a56: add    DWORD PTR [rcx],eax
0x00874a58: add    DWORD PTR [rcx],eax
0x00874a5a: add    DWORD PTR [rcx],eax
0x00874a5c: add    DWORD PTR [rcx],eax
0x00874a5e: add    DWORD PTR [rcx],eax
0x00874a60: add    DWORD PTR [rcx],eax
0x00874a62: add    DWORD PTR [rcx],eax
0x00874a64: add    DWORD PTR [rcx],eax
0x00874a66: add    DWORD PTR [rcx],eax
0x00874a68: add    DWORD PTR [rcx],eax
0x00874a6a: add    DWORD PTR [rcx],eax
0x00874a6c: add    DWORD PTR [rcx],eax
0x00874a6e: add    DWORD PTR [rcx],eax
0x00874a70: add    DWORD PTR [rcx],eax
0x00874a72: add    DWORD PTR [rcx],eax
0x00874a74: add    DWORD PTR [rcx],eax
0x00874a76: add    DWORD PTR [rcx],eax
0x00874a78: add    DWORD PTR [rcx],eax
0x00874a7a: add    DWORD PTR [rcx],eax
0x00874a7c: add    DWORD PTR [rcx],eax
0x00874a7e: add    DWORD PTR [rcx],eax
0x00874a80: add    DWORD PTR [rcx],eax
0x00874a82: add    DWORD PTR [rcx],eax
0x00874a84: add    DWORD PTR [rcx],eax
0x00874a86: add    DWORD PTR [rcx],eax
0x00874a88: add    DWORD PTR [rcx],eax
0x00874a8a: add    DWORD PTR [rcx],eax
0x00874a8c: add    DWORD PTR [rcx],eax
0x00874a8e: add    DWORD PTR [rcx],eax
0x00874a90: add    DWORD PTR [rcx],eax
0x00874a92: add    DWORD PTR [rcx],eax
0x00874a94: add    DWORD PTR [rcx],eax
0x00874a96: add    DWORD PTR [rcx],eax
0x00874a98: add    DWORD PTR [rcx],eax
0x00874a9a: add    DWORD PTR [rcx],eax
0x00874a9c: add    DWORD PTR [rcx],eax
0x00874a9e: add    DWORD PTR [rcx],eax
0x00874aa0: add    BYTE PTR [rax],al
0x00874aa2: add    BYTE PTR [rax],al
0x00874aa4: mov    dl,0x3e
0x00874aa6: xchg   DWORD PTR [rax],eax
0x00874aa8: test   BYTE PTR [rip+0x87],bh        # 0x140874b35
0x00874aae: add    BYTE PTR [rcx],al
0x00874ab0: add    DWORD PTR [rcx],eax
0x00874ab2: add    DWORD PTR [rcx],eax
0x00874ab4: add    DWORD PTR [rcx],eax
0x00874ab6: add    DWORD PTR [rcx],eax
0x00874ab8: add    DWORD PTR [rcx],eax
0x00874aba: add    DWORD PTR [rcx],eax
0x00874abc: add    DWORD PTR [rcx],eax
0x00874abe: add    DWORD PTR [rcx],eax
0x00874ac0: add    DWORD PTR [rcx],eax
0x00874ac2: add    DWORD PTR [rcx],eax
0x00874ac4: add    DWORD PTR [rcx],eax
0x00874ac6: add    DWORD PTR [rcx],eax
0x00874ac8: add    DWORD PTR [rcx],eax
0x00874aca: add    DWORD PTR [rcx],eax
0x00874acc: add    DWORD PTR [rcx],eax
0x00874ace: add    DWORD PTR [rcx],eax
0x00874ad0: add    DWORD PTR [rcx],eax
0x00874ad2: add    BYTE PTR [rax],al
0x00874ad4: add    BYTE PTR [rax],al
0x00874ad6: add    DWORD PTR [rcx],eax
0x00874ad8: add    DWORD PTR [rax],eax
0x00874ada: add    BYTE PTR [rax],al
0x00874adc: add    BYTE PTR [rax],al
0x00874ade: add    BYTE PTR [rax],al
