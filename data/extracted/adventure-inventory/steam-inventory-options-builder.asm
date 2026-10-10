# steam PE:6a70a6d9:02711000; inventory-options-builder; RVA 0x860040..0x861e2c
0x00860040: mov    QWORD PTR [rsp+0x8],rcx
0x00860045: push   rbp
0x00860046: push   rbx
0x00860047: push   rsi
0x00860048: push   rdi
0x00860049: push   r12
0x0086004b: push   r13
0x0086004d: push   r14
0x0086004f: push   r15
0x00860051: lea    rbp,[rsp-0x1f]
0x00860056: sub    rsp,0xc8
0x0086005d: mov    r12,rcx
0x00860060: mov    rsi,QWORD PTR [rip+0x1b850a9]        # 0x1423e5110
0x00860067: mov    r13d,0xffff8ad0
0x0086006d: mov    WORD PTR [rbp+0x77],r13w
0x00860072: test   DWORD PTR [rsi+0x110],0x2000000
0x0086007c: je     0x1408600d1
0x0086007e: mov    rbx,QWORD PTR [rsi+0x1d8]
0x00860085: mov    rdi,QWORD PTR [rsi+0x1e0]
0x0086008c: nop    DWORD PTR [rax+0x0]
0x00860090: cmp    rbx,rdi
0x00860093: jae    0x1408600cb
0x00860095: mov    rcx,QWORD PTR [rbx]
0x00860098: mov    rax,QWORD PTR [rcx]
0x0086009b: call   QWORD PTR [rax+0x10]
0x0086009e: cmp    eax,0xb
0x008600a1: jne    0x1408600b1
0x008600a3: mov    rcx,QWORD PTR [rbx]
0x008600a6: mov    rax,QWORD PTR [rcx]
0x008600a9: call   QWORD PTR [rax+0x18]
0x008600ac: test   rax,rax
0x008600af: jne    0x1408600b7
0x008600b1: add    rbx,0x8
0x008600b5: jmp    0x140860090
0x008600b7: lea    r9,[rbp+0x6f]
0x008600bb: lea    r8,[rbp+0x7f]
0x008600bf: lea    rdx,[rbp+0x77]
0x008600c3: mov    rcx,rax
0x008600c6: call   0x140c8baa0
0x008600cb: movzx  esi,WORD PTR [rbp+0x6f]
0x008600cf: jmp    0x1408600f2
0x008600d1: movzx  eax,WORD PTR [rsi+0xa8]
0x008600d8: mov    WORD PTR [rbp+0x77],ax
0x008600dc: movzx  eax,WORD PTR [rsi+0xaa]
0x008600e3: mov    WORD PTR [rbp+0x7f],ax
0x008600e7: movzx  esi,WORD PTR [rsi+0xac]
0x008600ee: mov    WORD PTR [rbp+0x6f],si
0x008600f2: mov    r8,QWORD PTR [rip+0x1b85017]        # 0x1423e5110
0x008600f9: xor    r9d,r9d
0x008600fc: cmp    DWORD PTR [r8+0x1280],0x14
0x00860104: jle    0x140860126
0x00860106: mov    rax,QWORD PTR [r8+0x1278]
0x0086010d: test   BYTE PTR [rax+0x14],0x4
0x00860111: je     0x140860126
0x00860113: test   DWORD PTR [r8+0x82c],0x10000000
0x0086011e: jne    0x14086038e
0x00860124: jmp    0x14086014f
0x00860126: mov    r8,QWORD PTR [rip+0x1b84fe3]        # 0x1423e5110
0x0086012d: test   DWORD PTR [r8+0x82c],0x10000000
0x00860138: jne    0x14086038e
0x0086013e: test   DWORD PTR [r8+0x828],0x10000000
0x00860149: je     0x14086038e
0x0086014f: mov    rbx,QWORD PTR [rip+0x1b84f72]        # 0x1423e50c8
0x00860156: mov    rdi,QWORD PTR [rip+0x1b84f73]        # 0x1423e50d0
0x0086015d: lea    r15,[rip+0xe5c6b4]        # 0x1416bc818
0x00860164: cmp    rbx,rdi
0x00860167: jae    0x14086038b
0x0086016d: mov    r14,QWORD PTR [rbx]
0x00860170: cmp    r14,QWORD PTR [rip+0x1b84f99]        # 0x1423e5110
0x00860177: je     0x140860382
0x0086017d: test   DWORD PTR [r14+0x110],0x2000002
0x00860188: jne    0x140860382
0x0086018e: cmp    WORD PTR [r14+0x800],0x0
0x00860197: jle    0x140860382
0x0086019d: mov    rcx,r14
0x008601a0: call   0x1400e36d0
0x008601a5: test   al,al
0x008601a7: je     0x140860382
0x008601ad: movsx  ecx,WORD PTR [r14+0xa8]
0x008601b5: movsx  eax,WORD PTR [rbp+0x77]
0x008601b9: sub    ecx,eax
0x008601bb: mov    eax,ecx
0x008601bd: neg    eax
0x008601bf: cmovs  eax,ecx
0x008601c2: cmp    eax,0x1
0x008601c5: jg     0x140860382
0x008601cb: movsx  ecx,WORD PTR [r14+0xaa]
0x008601d3: movsx  eax,WORD PTR [rbp+0x7f]
0x008601d7: sub    ecx,eax
0x008601d9: mov    eax,ecx
0x008601db: neg    eax
0x008601dd: cmovs  eax,ecx
0x008601e0: cmp    eax,0x1
0x008601e3: jg     0x140860382
0x008601e9: cmp    WORD PTR [r14+0xac],si
0x008601f1: jne    0x140860382
0x008601f7: movsx  rcx,WORD PTR [r14+0x12c]
0x008601ff: movsx  rax,WORD PTR [r14+0xa4]
0x00860207: test   ax,ax
0x0086020a: js     0x140860382
0x00860210: mov    rdx,rax
0x00860213: mov    rax,QWORD PTR [rip+0x1c8c856]        # 0x1424eca70
0x0086021a: mov    r8,QWORD PTR [rip+0x1c8c847]        # 0x1424eca68
0x00860221: sub    rax,r8
0x00860224: sar    rax,0x3
0x00860228: cmp    rdx,rax
0x0086022b: jae    0x140860382
0x00860231: test   cx,cx
0x00860234: js     0x140860382
0x0086023a: mov    rax,QWORD PTR [r8+rdx*8]
0x0086023e: mov    rdx,QWORD PTR [rax+0x178]
0x00860245: mov    rax,QWORD PTR [rax+0x180]
0x0086024c: sub    rax,rdx
0x0086024f: sar    rax,0x3
0x00860253: cmp    rcx,rax
0x00860256: jae    0x140860382
0x0086025c: mov    rax,QWORD PTR [rdx+rcx*8]
0x00860260: test   rax,rax
0x00860263: je     0x140860382
0x00860269: movzx  edx,WORD PTR [rax+0x3c76]
0x00860270: cmp    dx,0xffff
0x00860274: je     0x140860382
0x0086027a: mov    r8d,DWORD PTR [rax+0x3c78]
0x00860281: lea    rcx,[rip+0x1b71268]        # 0x1423d14f0
0x00860288: call   0x1414add70
0x0086028d: test   rax,rax
0x00860290: je     0x14086037e
0x00860296: cmp    DWORD PTR [rax+0x298],0x4
0x0086029d: jle    0x1408602b0
0x0086029f: mov    rax,QWORD PTR [rax+0x290]
0x008602a6: test   BYTE PTR [rax+0x4],0x1
0x008602aa: je     0x1408602b0
0x008602ac: mov    al,0x1
0x008602ae: jmp    0x1408602b2
0x008602b0: xor    al,al
0x008602b2: test   al,al
0x008602b4: je     0x14086037e
0x008602ba: mov    ecx,0x28
0x008602bf: call   0x141539690
0x008602c4: mov    rcx,rax
0x008602c7: mov    QWORD PTR [rbp-0x51],rax
0x008602cb: mov    DWORD PTR [rax+0x8],0x0
0x008602d2: mov    r10d,0xffffffff
0x008602d8: mov    DWORD PTR [rax+0xc],r10d
0x008602dc: mov    DWORD PTR [rax+0x10],0x8ad08ad0
0x008602e3: mov    DWORD PTR [rax+0x14],0x8ad08ad0
0x008602ea: mov    DWORD PTR [rax+0x18],0x8ad08ad0
0x008602f1: mov    QWORD PTR [rax],r15
0x008602f4: mov    DWORD PTR [rax+0x20],r10d
0x008602f8: mov    eax,DWORD PTR [r14+0x130]
0x008602ff: mov    DWORD PTR [rcx+0x20],eax
0x00860302: movzx  eax,WORD PTR [r14+0xa8]
0x0086030a: mov    WORD PTR [rcx+0x10],ax
0x0086030e: movzx  eax,WORD PTR [r14+0xaa]
0x00860316: mov    WORD PTR [rcx+0x12],ax
0x0086031a: movzx  eax,WORD PTR [r14+0xac]
0x00860322: mov    WORD PTR [rcx+0x14],ax
0x00860326: movzx  eax,WORD PTR [rbp+0x77]
0x0086032a: mov    WORD PTR [rcx+0x16],ax
0x0086032e: movzx  eax,WORD PTR [rbp+0x7f]
0x00860332: mov    WORD PTR [rcx+0x18],ax
0x00860336: movzx  eax,WORD PTR [rbp+0x6f]
0x0086033a: mov    WORD PTR [rcx+0x1a],ax
0x0086033e: mov    QWORD PTR [rbp-0x51],rcx
0x00860342: mov    rdx,QWORD PTR [r12+0xc8]
0x0086034a: cmp    rdx,QWORD PTR [r12+0xd0]
0x00860352: je     0x14086036d
0x00860354: mov    QWORD PTR [rdx],rcx
0x00860357: add    QWORD PTR [r12+0xc8],0x8
0x00860360: movzx  esi,WORD PTR [rbp+0x6f]
0x00860364: add    rbx,0x8
0x00860368: jmp    0x140860164
0x0086036d: lea    r8,[rbp-0x51]
0x00860371: lea    rcx,[r12+0xc0]
0x00860379: call   0x1400bad30
0x0086037e: movzx  esi,WORD PTR [rbp+0x6f]
0x00860382: add    rbx,0x8
0x00860386: jmp    0x140860164
0x0086038b: xor    r9d,r9d
0x0086038e: mov    DWORD PTR [rbp-0x49],r9d
0x00860392: mov    rax,QWORD PTR [rip+0x1b84d77]        # 0x1423e5110
0x00860399: mov    rcx,QWORD PTR [rax+0x410]
0x008603a0: sub    rcx,QWORD PTR [rax+0x408]
0x008603a7: sar    rcx,0x3
0x008603ab: test   rcx,rcx
0x008603ae: je     0x140860e34
0x008603b4: mov    r13,r9
0x008603b7: mov    QWORD PTR [rbp-0x51],r9
0x008603bb: mov    eax,0x124
0x008603c0: lea    r8,[rip+0xffffffffff79fc39]        # 0x140000000
0x008603c7: nop    WORD PTR [rax+rax*1+0x0]
0x008603d0: mov    edi,r9d
0x008603d3: mov    DWORD PTR [rbp-0x45],r9d
0x008603d7: mov    rsi,r9
0x008603da: mov    QWORD PTR [rbp-0x31],r9
0x008603de: mov    r14d,0x2
0x008603e4: mov    QWORD PTR [rbp-0x59],r14
0x008603e8: mov    r12d,r14d
0x008603eb: mov    QWORD PTR [rbp-0x39],r14
0x008603ef: nop
0x008603f0: mov    r15b,0x1
0x008603f3: cmp    edi,0x8
0x008603f6: ja     0x1408604c0
0x008603fc: bt     eax,edi
0x008603ff: jae    0x1408604c0
0x00860405: mov    rax,QWORD PTR [rip+0x1b84d04]        # 0x1423e5110
0x0086040c: mov    rax,QWORD PTR [rax+0x408]
0x00860413: mov    rdx,QWORD PTR [rax+r13*8]
0x00860417: movsx  eax,WORD PTR [rdx+0x8]
0x0086041b: add    eax,0xfffffffe
0x0086041e: cmp    eax,0x8
0x00860421: ja     0x140860435
0x00860423: cdqe
0x00860425: mov    ecx,DWORD PTR [r8+rax*4+0x861e2c]
0x0086042d: add    rcx,r8
0x00860430: jmp    rcx
0x00860432: xor    r15b,r15b
0x00860435: movzx  ebx,r15b
0x00860439: cmp    edi,0x2
0x0086043c: je     0x140860681
0x00860442: mov    rdx,QWORD PTR [rdx]
0x00860445: mov    rcx,QWORD PTR [rip+0x1b84cc4]        # 0x1423e5110
0x0086044c: call   0x1413610f0
0x00860451: xor    r15d,r15d
0x00860454: test   al,al
0x00860456: cmove  r15d,ebx
0x0086045a: mov    r8,QWORD PTR [rip+0x1b84caf]        # 0x1423e5110
0x00860461: mov    rax,QWORD PTR [r8+0x408]
0x00860468: mov    rcx,QWORD PTR [rax+r13*8]
0x0086046c: mov    rdx,QWORD PTR [rcx]
0x0086046f: test   rdx,rdx
0x00860472: je     0x1408604b9
0x00860474: mov    r9,QWORD PTR [r8+0xb18]
0x0086047b: mov    rax,QWORD PTR [r8+0xb20]
0x00860482: sub    rax,r9
0x00860485: sar    rax,0x4
0x00860489: sub    eax,0x1
0x0086048c: js     0x1408604b9
0x0086048e: mov    r8d,DWORD PTR [rdx+0x1c]
0x00860492: movsxd rdx,eax
0x00860495: mov    rcx,rdx
0x00860498: shl    rcx,0x4
0x0086049c: nop    DWORD PTR [rax+0x0]
0x008604a0: mov    rax,QWORD PTR [r9+rcx*1]
0x008604a4: cmp    DWORD PTR [rax+0x14],r8d
0x008604a8: je     0x1408604b6
0x008604aa: sub    rcx,0x10
0x008604ae: sub    rdx,0x1
0x008604b2: jns    0x1408604a0
0x008604b4: jmp    0x1408604b9
0x008604b6: xor    r15b,r15b
0x008604b9: lea    r8,[rip+0xffffffffff79fb40]        # 0x140000000
0x008604c0: cmp    edi,0x3
0x008604c3: jne    0x140860681
0x008604c9: mov    rax,QWORD PTR [rip+0x1b84c40]        # 0x1423e5110
0x008604d0: mov    rax,QWORD PTR [rax+0x408]
0x008604d7: mov    rdx,QWORD PTR [rax+r13*8]
0x008604db: movsx  eax,WORD PTR [rdx+0x8]
0x008604df: add    eax,0xfffffffe
0x008604e2: cmp    eax,0x8
0x008604e5: ja     0x1408604f9
0x008604e7: cdqe
0x008604e9: mov    ecx,DWORD PTR [r8+rax*4+0x861e50]
0x008604f1: add    rcx,r8
0x008604f4: jmp    rcx
0x008604f6: xor    r15b,r15b
0x008604f9: mov    rdx,QWORD PTR [rdx]
0x008604fc: mov    rcx,QWORD PTR [rip+0x1b84c0d]        # 0x1423e5110
0x00860503: call   0x1413610f0
0x00860508: xor    r10d,r10d
0x0086050b: movzx  ecx,r15b
0x0086050f: test   al,al
0x00860511: cmove  r10d,ecx
0x00860515: mov    r8,QWORD PTR [rip+0x1b84bf4]        # 0x1423e5110
0x0086051c: mov    rax,QWORD PTR [r8+0x408]
0x00860523: mov    rcx,QWORD PTR [rax+r13*8]
0x00860527: mov    r12,QWORD PTR [rcx]
0x0086052a: test   r12,r12
0x0086052d: je     0x140860d6f
0x00860533: mov    r9,QWORD PTR [r8+0xb18]
0x0086053a: mov    rax,QWORD PTR [r8+0xb20]
0x00860541: sub    rax,r9
0x00860544: sar    rax,0x4
0x00860548: sub    eax,0x1
0x0086054b: js     0x140860578
0x0086054d: mov    r8d,DWORD PTR [r12+0x1c]
0x00860552: movsxd rdx,eax
0x00860555: mov    rcx,rdx
0x00860558: shl    rcx,0x4
0x0086055c: nop    DWORD PTR [rax+0x0]
0x00860560: mov    rax,QWORD PTR [r9+rcx*1]
0x00860564: cmp    DWORD PTR [rax+0x14],r8d
0x00860568: je     0x140860679
0x0086056e: sub    rcx,0x10
0x00860572: sub    rdx,0x1
0x00860576: jns    0x140860560
0x00860578: movzx  r15d,r10b
0x0086057c: mov    r13,QWORD PTR [rip+0x1b84b8d]        # 0x1423e5110
0x00860583: movzx  edx,WORD PTR [r13+0xa4]
0x0086058b: mov    rcx,r12
0x0086058e: call   0x141360e50
0x00860593: test   eax,eax
0x00860595: jne    0x140860d6b
0x0086059b: mov    rax,QWORD PTR [r12]
0x0086059f: mov    rcx,r12
0x008605a2: call   QWORD PTR [rax+0x1d8]
0x008605a8: movzx  r14d,ax
0x008605ac: mov    rdx,QWORD PTR [r12]
0x008605b0: mov    rcx,r12
0x008605b3: call   QWORD PTR [rdx+0x5a0]
0x008605b9: movzx  esi,al
0x008605bc: mov    rdx,QWORD PTR [r12]
0x008605c0: mov    rcx,r12
0x008605c3: call   QWORD PTR [rdx+0x198]
0x008605c9: mov    edi,eax
0x008605cb: mov    rdx,QWORD PTR [r12]
0x008605cf: mov    rcx,r12
0x008605d2: call   QWORD PTR [rdx+0x8]
0x008605d5: movzx  ebx,ax
0x008605d8: mov    rdx,QWORD PTR [r12]
0x008605dc: mov    rcx,r12
0x008605df: call   QWORD PTR [rdx]
0x008605e1: mov    BYTE PTR [rsp+0x48],0x0
0x008605e6: lea    rcx,[rbp-0x29]
0x008605ea: mov    QWORD PTR [rsp+0x40],rcx
0x008605ef: lea    rcx,[rbp-0x25]
0x008605f3: mov    QWORD PTR [rsp+0x38],rcx
0x008605f8: lea    rcx,[rbp-0x41]
0x008605fc: mov    QWORD PTR [rsp+0x30],rcx
0x00860601: mov    BYTE PTR [rsp+0x28],r14b
0x00860606: mov    BYTE PTR [rsp+0x20],sil
0x0086060b: mov    r9d,edi
0x0086060e: movzx  r8d,bx
0x00860612: movzx  edx,ax
0x00860615: mov    rcx,r13
0x00860618: call   0x141394e20
0x0086061d: test   al,al
0x0086061f: je     0x140860d60
0x00860625: movzx  ecx,WORD PTR [rbp-0x41]
0x00860629: lea    eax,[rcx-0x2]
0x0086062c: cmp    ax,0x3
0x00860630: jbe    0x14086063c
0x00860632: cmp    cx,0xa
0x00860636: jne    0x140860d60
0x0086063c: mov    edi,DWORD PTR [rbp-0x45]
0x0086063f: mov    rsi,QWORD PTR [rbp-0x31]
0x00860643: mov    r14,QWORD PTR [rbp-0x59]
0x00860647: mov    r12,QWORD PTR [rbp-0x39]
0x0086064b: mov    r13,QWORD PTR [rbp-0x51]
0x0086064f: xor    ebx,ebx
0x00860651: test   r15b,r15b
0x00860654: je     0x140860d73
0x0086065a: cmp    edi,0x8
0x0086065d: ja     0x140860d73
0x00860663: movsxd rax,edi
0x00860666: lea    rdx,[rip+0xffffffffff79f993]        # 0x140000000
0x0086066d: mov    ecx,DWORD PTR [rdx+rax*4+0x861e74]
0x00860674: add    rcx,rdx
0x00860677: jmp    rcx
0x00860679: xor    r15b,r15b
0x0086067c: jmp    0x14086057c
0x00860681: cmp    edi,0x4
0x00860684: jne    0x140860750
0x0086068a: mov    r8,QWORD PTR [rip+0x1b84a7f]        # 0x1423e5110
0x00860691: mov    rax,QWORD PTR [r8+0x408]
0x00860698: mov    rdx,QWORD PTR [rax+r13*8]
0x0086069c: mov    rdx,QWORD PTR [rdx]
0x0086069f: mov    rcx,r8
0x008606a2: call   0x1413610f0
0x008606a7: xor    ebx,ebx
0x008606a9: mov    r10d,ebx
0x008606ac: movzx  ecx,r15b
0x008606b0: test   al,al
0x008606b2: cmove  r10d,ecx
0x008606b6: mov    r8,QWORD PTR [rip+0x1b84a53]        # 0x1423e5110
0x008606bd: mov    rax,QWORD PTR [r8+0x408]
0x008606c4: mov    r11,QWORD PTR [rax+r13*8]
0x008606c8: mov    rcx,QWORD PTR [r11]
0x008606cb: movzx  r15d,r10b
0x008606cf: test   rcx,rcx
0x008606d2: je     0x140860719
0x008606d4: mov    r9,QWORD PTR [r8+0xb18]
0x008606db: mov    rax,QWORD PTR [r8+0xb20]
0x008606e2: sub    rax,r9
0x008606e5: sar    rax,0x4
0x008606e9: sub    eax,0x1
0x008606ec: js     0x140860719
0x008606ee: mov    r8d,DWORD PTR [rcx+0x1c]
0x008606f2: movsxd rdx,eax
0x008606f5: mov    rcx,rdx
0x008606f8: shl    rcx,0x4
0x008606fc: nop    DWORD PTR [rax+0x0]
0x00860700: mov    rax,QWORD PTR [r9+rcx*1]
0x00860704: cmp    DWORD PTR [rax+0x14],r8d
0x00860708: je     0x140860716
0x0086070a: sub    rcx,0x10
0x0086070e: sub    rdx,0x1
0x00860712: jns    0x140860700
0x00860714: jmp    0x140860719
0x00860716: xor    r15b,r15b
0x00860719: movsx  ecx,WORD PTR [r11+0x8]
0x0086071e: sub    ecx,0x2
0x00860721: je     0x140860651
0x00860727: sub    ecx,0x1
0x0086072a: je     0x140860651
0x00860730: sub    ecx,0x1
0x00860733: je     0x140860651
0x00860739: sub    ecx,0x1
0x0086073c: je     0x140860651
0x00860742: cmp    ecx,0x5
0x00860745: je     0x140860651
0x0086074b: jmp    0x140860d73
0x00860750: cmp    edi,0x6
0x00860753: jne    0x14086064f
0x00860759: mov    rax,QWORD PTR [rip+0x1b849b0]        # 0x1423e5110
0x00860760: mov    rax,QWORD PTR [rax+0x408]
0x00860767: mov    rdx,QWORD PTR [rax+r13*8]
0x0086076b: movsx  eax,WORD PTR [rdx+0x8]
0x0086076f: add    eax,0xfffffffe
0x00860772: cmp    eax,0x8
0x00860775: ja     0x140860789
0x00860777: cdqe
0x00860779: mov    ecx,DWORD PTR [r8+rax*4+0x861e98]
0x00860781: add    rcx,r8
0x00860784: jmp    rcx
0x00860786: xor    r15b,r15b
0x00860789: mov    rdx,QWORD PTR [rdx]
0x0086078c: mov    rcx,QWORD PTR [rip+0x1b8497d]        # 0x1423e5110
0x00860793: call   0x1413610f0
0x00860798: xor    ebx,ebx
0x0086079a: mov    r10d,ebx
0x0086079d: movzx  ecx,r15b
0x008607a1: test   al,al
0x008607a3: cmove  r10d,ecx
0x008607a7: mov    r8,QWORD PTR [rip+0x1b84962]        # 0x1423e5110
0x008607ae: mov    rax,QWORD PTR [r8+0x408]
0x008607b5: mov    rcx,QWORD PTR [rax+r13*8]
0x008607b9: mov    rdx,QWORD PTR [rcx]
0x008607bc: movzx  r15d,r10b
0x008607c0: test   rdx,rdx
0x008607c3: je     0x140860651
0x008607c9: mov    r9,QWORD PTR [r8+0xb18]
0x008607d0: mov    rax,QWORD PTR [r8+0xb20]
0x008607d7: sub    rax,r9
0x008607da: sar    rax,0x4
0x008607de: sub    eax,0x1
0x008607e1: js     0x140860651
0x008607e7: mov    r8d,DWORD PTR [rdx+0x1c]
0x008607eb: movsxd rdx,eax
0x008607ee: mov    rcx,rdx
0x008607f1: shl    rcx,0x4
0x008607f5: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x00860800: mov    rax,QWORD PTR [r9+rcx*1]
0x00860804: cmp    DWORD PTR [rax+0x14],r8d
0x00860808: je     0x140860d73
0x0086080e: sub    rcx,0x10
0x00860812: sub    rdx,0x1
0x00860816: jns    0x140860800
0x00860818: jmp    0x140860651
0x0086081d: mov    ecx,0x28
0x00860822: call   0x141539690
0x00860827: mov    rdx,rax
0x0086082a: mov    QWORD PTR [rbp-0x59],rax
0x0086082e: mov    DWORD PTR [rax+0x8],ebx
0x00860831: mov    DWORD PTR [rax+0xc],0xffffffff
0x00860838: lea    rax,[rip+0xe594b9]        # 0x1416b9cf8
0x0086083f: mov    QWORD PTR [rdx],rax
0x00860842: mov    QWORD PTR [rdx+0x10],rbx
0x00860846: mov    QWORD PTR [rdx+0x18],rbx
0x0086084a: mov    DWORD PTR [rdx+0x20],ebx
0x0086084d: mov    rcx,QWORD PTR [rip+0x1b848bc]        # 0x1423e5110
0x00860854: mov    rcx,QWORD PTR [rcx+0x408]
0x0086085b: mov    rax,QWORD PTR [rcx+r13*8]
0x0086085f: mov    rcx,QWORD PTR [rax]
0x00860862: mov    QWORD PTR [rdx+0x10],rcx
0x00860866: mov    rax,QWORD PTR [rip+0x1b848a3]        # 0x1423e5110
0x0086086d: mov    rax,QWORD PTR [rax+0x408]
0x00860874: mov    rcx,QWORD PTR [rax+r13*8]
0x00860878: mov    QWORD PTR [rdx+0x18],rcx
0x0086087c: mov    DWORD PTR [rdx+0x8],ebx
0x0086087f: lea    rax,[r14+r14*2]
0x00860883: mov    r15,QWORD PTR [rbp+0x67]
0x00860887: lea    rcx,[r15+rax*8]
0x0086088b: mov    QWORD PTR [rbp-0x59],rdx
0x0086088f: mov    rax,QWORD PTR [rcx+0x8]
0x00860893: cmp    rax,QWORD PTR [rcx+0x10]
0x00860897: je     0x1408608a6
0x00860899: mov    QWORD PTR [rax],rdx
0x0086089c: add    QWORD PTR [rcx+0x8],0x8
0x008608a1: jmp    0x140860d73
0x008608a6: lea    r8,[rbp-0x59]
0x008608aa: mov    rdx,rax
0x008608ad: call   0x1400bad30
0x008608b2: jmp    0x140860d73
0x008608b7: mov    ecx,0x20
0x008608bc: call   0x141539690
0x008608c1: mov    r8,rax
0x008608c4: mov    QWORD PTR [rbp-0x59],rax
0x008608c8: mov    DWORD PTR [rax+0x8],ebx
0x008608cb: mov    DWORD PTR [rax+0xc],0xffffffff
0x008608d2: lea    rax,[rip+0xe56b1f]        # 0x1416b73f8
0x008608d9: mov    QWORD PTR [r8],rax
0x008608dc: mov    QWORD PTR [r8+0x10],rbx
0x008608e0: mov    QWORD PTR [r8+0x18],rbx
0x008608e4: mov    rcx,QWORD PTR [rip+0x1b84825]        # 0x1423e5110
0x008608eb: mov    rcx,QWORD PTR [rcx+0x408]
0x008608f2: mov    rdx,QWORD PTR [rcx+r13*8]
0x008608f6: mov    rax,QWORD PTR [rdx]
0x008608f9: mov    QWORD PTR [r8+0x10],rax
0x008608fd: mov    rax,QWORD PTR [rip+0x1b8480c]        # 0x1423e5110
0x00860904: mov    rax,QWORD PTR [rax+0x408]
0x0086090b: mov    rcx,QWORD PTR [rax+r13*8]
0x0086090f: mov    QWORD PTR [r8+0x18],rcx
0x00860913: mov    DWORD PTR [r8+0x8],ebx
0x00860917: lea    rax,[r12+r12*2]
0x0086091b: mov    r15,QWORD PTR [rbp+0x67]
0x0086091f: lea    rcx,[r15+rax*8]
0x00860923: mov    QWORD PTR [rbp-0x59],r8
0x00860927: mov    rdx,QWORD PTR [rcx+0x8]
0x0086092b: cmp    rdx,QWORD PTR [rcx+0x10]
0x0086092f: je     0x14086093e
0x00860931: mov    QWORD PTR [rdx],r8
0x00860934: add    QWORD PTR [rcx+0x8],0x8
0x00860939: jmp    0x140860d73
0x0086093e: lea    r8,[rbp-0x59]
0x00860942: call   0x1400bad30
0x00860947: jmp    0x140860d73
0x0086094c: mov    ecx,0x20
0x00860951: call   0x141539690
0x00860956: mov    r8,rax
0x00860959: mov    QWORD PTR [rbp-0x59],rax
0x0086095d: mov    DWORD PTR [rax+0x8],ebx
0x00860960: mov    DWORD PTR [rax+0xc],0xffffffff
0x00860967: lea    rax,[rip+0xe5d002]        # 0x1416bd970
0x0086096e: mov    QWORD PTR [r8],rax
0x00860971: mov    QWORD PTR [r8+0x10],rbx
0x00860975: mov    QWORD PTR [r8+0x18],rbx
0x00860979: mov    rcx,QWORD PTR [rip+0x1b84790]        # 0x1423e5110
0x00860980: mov    rcx,QWORD PTR [rcx+0x408]
0x00860987: mov    rdx,QWORD PTR [rcx+r13*8]
0x0086098b: mov    rax,QWORD PTR [rdx]
0x0086098e: mov    QWORD PTR [r8+0x10],rax
0x00860992: mov    rax,QWORD PTR [rip+0x1b84777]        # 0x1423e5110
0x00860999: mov    rax,QWORD PTR [rax+0x408]
0x008609a0: mov    rcx,QWORD PTR [rax+r13*8]
0x008609a4: mov    QWORD PTR [r8+0x18],rcx
0x008609a8: mov    DWORD PTR [r8+0x8],ebx
0x008609ac: lea    rax,[rsi+0x2]
0x008609b0: lea    rax,[rax+rax*2]
0x008609b4: mov    r15,QWORD PTR [rbp+0x67]
0x008609b8: lea    rcx,[r15+rax*8]
0x008609bc: mov    QWORD PTR [rbp-0x59],r8
0x008609c0: mov    rdx,QWORD PTR [rcx+0x8]
0x008609c4: cmp    rdx,QWORD PTR [rcx+0x10]
0x008609c8: je     0x14086093e
0x008609ce: mov    QWORD PTR [rdx],r8
0x008609d1: add    QWORD PTR [rcx+0x8],0x8
0x008609d6: jmp    0x140860d73
0x008609db: mov    ecx,0x20
0x008609e0: call   0x141539690
0x008609e5: mov    r8,rax
0x008609e8: mov    QWORD PTR [rbp-0x59],rax
0x008609ec: mov    DWORD PTR [rax+0x8],ebx
0x008609ef: mov    DWORD PTR [rax+0xc],0xffffffff
0x008609f6: lea    rax,[rip+0xe574f3]        # 0x1416b7ef0
0x008609fd: jmp    0x14086096e
0x00860a02: mov    ecx,0x20
0x00860a07: call   0x141539690
0x00860a0c: mov    r8,rax
0x00860a0f: mov    QWORD PTR [rbp-0x59],rax
0x00860a13: mov    DWORD PTR [rax+0x8],ebx
0x00860a16: mov    DWORD PTR [rax+0xc],0xffffffff
0x00860a1d: lea    rax,[rip+0xe58214]        # 0x1416b8c38
0x00860a24: mov    QWORD PTR [r8],rax
0x00860a27: mov    QWORD PTR [r8+0x10],rbx
0x00860a2b: mov    QWORD PTR [r8+0x18],rbx
0x00860a2f: mov    rcx,QWORD PTR [rip+0x1b846da]        # 0x1423e5110
0x00860a36: mov    rdx,QWORD PTR [rcx+0x408]
0x00860a3d: mov    rcx,QWORD PTR [rdx+r13*8]
0x00860a41: mov    rdx,QWORD PTR [rcx]
0x00860a44: mov    QWORD PTR [r8+0x10],rdx
0x00860a48: mov    rax,QWORD PTR [rip+0x1b846c1]        # 0x1423e5110
0x00860a4f: mov    rcx,QWORD PTR [rax+0x408]
0x00860a56: mov    rax,QWORD PTR [rcx+r13*8]
0x00860a5a: mov    QWORD PTR [r8+0x18],rax
0x00860a5e: jmp    0x1408609a8
0x00860a63: xorps  xmm0,xmm0
0x00860a66: movdqu XMMWORD PTR [rbp-0x21],xmm0
0x00860a6b: mov    QWORD PTR [rbp-0x11],rbx
0x00860a6f: mov    rax,QWORD PTR [rip+0x1b8469a]        # 0x1423e5110
0x00860a76: mov    rcx,QWORD PTR [rax+0x408]
0x00860a7d: mov    r8,QWORD PTR [rcx+r13*8]
0x00860a81: mov    r8,QWORD PTR [r8]
0x00860a84: lea    rdx,[rbp-0x21]
0x00860a88: mov    r15,QWORD PTR [rbp+0x67]
0x00860a8c: mov    rcx,r15
0x00860a8f: call   0x140899370
0x00860a94: mov    rax,QWORD PTR [rbp-0x19]
0x00860a98: sub    rax,QWORD PTR [rbp-0x21]
0x00860a9c: sar    rax,0x3
0x00860aa0: test   rax,rax
0x00860aa3: je     0x140860b6a
0x00860aa9: mov    ecx,0x38
0x00860aae: call   0x141539690
0x00860ab3: mov    rbx,rax
0x00860ab6: mov    QWORD PTR [rbp-0x59],rax
0x00860aba: xor    r8d,r8d
0x00860abd: mov    DWORD PTR [rax+0x8],r8d
0x00860ac1: mov    DWORD PTR [rax+0xc],0xffffffff
0x00860ac8: lea    rax,[rip+0xe59aa1]        # 0x1416ba570
0x00860acf: mov    QWORD PTR [rbx],rax
0x00860ad2: lea    r9,[rbx+0x20]
0x00860ad6: mov    QWORD PTR [r9],r8
0x00860ad9: mov    QWORD PTR [r9+0x8],r8
0x00860add: mov    QWORD PTR [r9+0x10],r8
0x00860ae1: mov    QWORD PTR [rbx+0x10],r8
0x00860ae5: mov    QWORD PTR [rbx+0x18],r8
0x00860ae9: mov    rax,QWORD PTR [rip+0x1b84620]        # 0x1423e5110
0x00860af0: mov    rcx,QWORD PTR [rax+0x408]
0x00860af7: mov    rax,QWORD PTR [rcx+r13*8]
0x00860afb: mov    rcx,QWORD PTR [rax]
0x00860afe: mov    QWORD PTR [rbx+0x10],rcx
0x00860b02: mov    rax,QWORD PTR [rip+0x1b84607]        # 0x1423e5110
0x00860b09: mov    rax,QWORD PTR [rax+0x408]
0x00860b10: mov    rdx,QWORD PTR [rax+r13*8]
0x00860b14: mov    QWORD PTR [rbx+0x18],rdx
0x00860b18: mov    DWORD PTR [rbx+0x8],r8d
0x00860b1c: lea    rax,[rbp-0x21]
0x00860b20: cmp    r9,rax
0x00860b23: je     0x140860b3c
0x00860b25: mov    r8,QWORD PTR [rbp-0x19]
0x00860b29: mov    rdx,QWORD PTR [rbp-0x21]
0x00860b2d: sub    r8,rdx
0x00860b30: sar    r8,0x3
0x00860b34: mov    rcx,r9
0x00860b37: call   0x1400e16b0
0x00860b3c: lea    rax,[rsi+0x2]
0x00860b40: lea    rax,[rax+rax*2]
0x00860b44: lea    rcx,[r15+rax*8]
0x00860b48: mov    QWORD PTR [rbp-0x59],rbx
0x00860b4c: mov    rdx,QWORD PTR [rcx+0x8]
0x00860b50: cmp    rdx,QWORD PTR [rcx+0x10]
0x00860b54: je     0x140860b60
0x00860b56: mov    QWORD PTR [rdx],rbx
0x00860b59: add    QWORD PTR [rcx+0x8],0x8
0x00860b5e: jmp    0x140860b6a
0x00860b60: lea    r8,[rbp-0x59]
0x00860b64: call   0x1400bad30
0x00860b69: nop
0x00860b6a: lea    rcx,[rbp-0x21]
0x00860b6e: call   0x140066b70
0x00860b73: jmp    0x140860d73
0x00860b78: mov    ecx,0x20
0x00860b7d: call   0x141539690
0x00860b82: mov    r8,rax
0x00860b85: mov    QWORD PTR [rbp-0x59],rax
0x00860b89: mov    DWORD PTR [rax+0x8],ebx
0x00860b8c: mov    DWORD PTR [rax+0xc],0xffffffff
0x00860b93: lea    rax,[rip+0xe5c36e]        # 0x1416bcf08
0x00860b9a: jmp    0x14086096e
0x00860b9f: xorps  xmm0,xmm0
0x00860ba2: movdqu XMMWORD PTR [rbp-0x9],xmm0
0x00860ba7: mov    QWORD PTR [rbp+0x7],rbx
0x00860bab: mov    rax,QWORD PTR [rip+0x1b8455e]        # 0x1423e5110
0x00860bb2: mov    rax,QWORD PTR [rax+0x408]
0x00860bb9: mov    r8,QWORD PTR [rax+r13*8]
0x00860bbd: mov    eax,0xffff8ad0
0x00860bc2: mov    WORD PTR [rsp+0x40],ax
0x00860bc7: mov    WORD PTR [rsp+0x38],ax
0x00860bcc: mov    WORD PTR [rsp+0x30],ax
0x00860bd1: mov    BYTE PTR [rsp+0x28],0x0
0x00860bd6: mov    DWORD PTR [rsp+0x20],ebx
0x00860bda: mov    r9,r8
0x00860bdd: mov    r8,QWORD PTR [r8]
0x00860be0: lea    rdx,[rbp-0x9]
0x00860be4: mov    r15,QWORD PTR [rbp+0x67]
0x00860be8: mov    rcx,r15
0x00860beb: call   0x140897820
0x00860bf0: mov    rax,QWORD PTR [rbp-0x1]
0x00860bf4: sub    rax,QWORD PTR [rbp-0x9]
0x00860bf8: sar    rax,0x3
0x00860bfc: test   rax,rax
0x00860bff: je     0x140860cc6
0x00860c05: mov    ecx,0x38
0x00860c0a: call   0x141539690
0x00860c0f: mov    rbx,rax
0x00860c12: mov    QWORD PTR [rbp-0x59],rax
0x00860c16: xor    r8d,r8d
0x00860c19: mov    DWORD PTR [rax+0x8],r8d
0x00860c1d: mov    DWORD PTR [rax+0xc],0xffffffff
0x00860c24: lea    rax,[rip+0xe5b74d]        # 0x1416bc378
0x00860c2b: mov    QWORD PTR [rbx],rax
0x00860c2e: lea    r9,[rbx+0x20]
0x00860c32: mov    QWORD PTR [r9],r8
0x00860c35: mov    QWORD PTR [r9+0x8],r8
0x00860c39: mov    QWORD PTR [r9+0x10],r8
0x00860c3d: mov    QWORD PTR [rbx+0x10],r8
0x00860c41: mov    QWORD PTR [rbx+0x18],r8
0x00860c45: mov    rax,QWORD PTR [rip+0x1b844c4]        # 0x1423e5110
0x00860c4c: mov    rax,QWORD PTR [rax+0x408]
0x00860c53: mov    rcx,QWORD PTR [rax+r13*8]
0x00860c57: mov    rax,QWORD PTR [rcx]
0x00860c5a: mov    QWORD PTR [rbx+0x10],rax
0x00860c5e: mov    rax,QWORD PTR [rip+0x1b844ab]        # 0x1423e5110
0x00860c65: mov    rax,QWORD PTR [rax+0x408]
0x00860c6c: mov    rdx,QWORD PTR [rax+r13*8]
0x00860c70: mov    QWORD PTR [rbx+0x18],rdx
0x00860c74: mov    DWORD PTR [rbx+0x8],r8d
0x00860c78: lea    rax,[rbp-0x9]
0x00860c7c: cmp    r9,rax
0x00860c7f: je     0x140860c98
0x00860c81: mov    r8,QWORD PTR [rbp-0x1]
0x00860c85: mov    rdx,QWORD PTR [rbp-0x9]
0x00860c89: sub    r8,rdx
0x00860c8c: sar    r8,0x3
0x00860c90: mov    rcx,r9
0x00860c93: call   0x1400e16b0
0x00860c98: lea    rax,[rsi+0x2]
0x00860c9c: lea    rax,[rax+rax*2]
0x00860ca0: lea    rcx,[r15+rax*8]
0x00860ca4: mov    QWORD PTR [rbp-0x59],rbx
0x00860ca8: mov    rdx,QWORD PTR [rcx+0x8]
0x00860cac: cmp    rdx,QWORD PTR [rcx+0x10]
0x00860cb0: je     0x140860cbc
0x00860cb2: mov    QWORD PTR [rdx],rbx
0x00860cb5: add    QWORD PTR [rcx+0x8],0x8
0x00860cba: jmp    0x140860cc6
0x00860cbc: lea    r8,[rbp-0x59]
0x00860cc0: call   0x1400bad30
0x00860cc5: nop
0x00860cc6: lea    rcx,[rbp-0x9]
0x00860cca: call   0x140066b70
0x00860ccf: jmp    0x140860d73
0x00860cd4: mov    ecx,0x20
0x00860cd9: call   0x141539690
0x00860cde: mov    r8,rax
0x00860ce1: mov    QWORD PTR [rbp-0x59],rax
0x00860ce5: mov    DWORD PTR [rax+0x8],ebx
0x00860ce8: mov    DWORD PTR [rax+0xc],0xffffffff
0x00860cef: lea    rax,[rip+0xe59502]        # 0x1416ba1f8
0x00860cf6: mov    QWORD PTR [r8],rax
0x00860cf9: mov    QWORD PTR [r8+0x10],rbx
0x00860cfd: mov    QWORD PTR [r8+0x18],rbx
0x00860d01: mov    rcx,QWORD PTR [rip+0x1b84408]        # 0x1423e5110
0x00860d08: mov    rdx,QWORD PTR [rcx+0x408]
0x00860d0f: mov    rcx,QWORD PTR [rdx+r13*8]
0x00860d13: mov    rdx,QWORD PTR [rcx]
0x00860d16: mov    QWORD PTR [r8+0x10],rdx
0x00860d1a: mov    rax,QWORD PTR [rip+0x1b843ef]        # 0x1423e5110
0x00860d21: mov    rcx,QWORD PTR [rax+0x408]
0x00860d28: mov    rax,QWORD PTR [rcx+r13*8]
0x00860d2c: mov    QWORD PTR [r8+0x18],rax
0x00860d30: mov    DWORD PTR [r8+0x8],ebx
0x00860d34: lea    rax,[rsi+0x2]
0x00860d38: lea    rax,[rax+rax*2]
0x00860d3c: mov    r15,QWORD PTR [rbp+0x67]
0x00860d40: lea    rcx,[r15+rax*8]
0x00860d44: mov    QWORD PTR [rbp-0x59],r8
0x00860d48: mov    rdx,QWORD PTR [rcx+0x8]
0x00860d4c: cmp    rdx,QWORD PTR [rcx+0x10]
0x00860d50: je     0x14086093e
0x00860d56: mov    QWORD PTR [rdx],r8
0x00860d59: add    QWORD PTR [rcx+0x8],0x8
0x00860d5e: jmp    0x140860d73
0x00860d60: mov    edi,DWORD PTR [rbp-0x45]
0x00860d63: mov    r14,QWORD PTR [rbp-0x59]
0x00860d67: mov    rsi,QWORD PTR [rbp-0x31]
0x00860d6b: mov    r13,QWORD PTR [rbp-0x51]
0x00860d6f: mov    r12,QWORD PTR [rbp-0x39]
0x00860d73: mov    rax,QWORD PTR [rip+0x1b84396]        # 0x1423e5110
0x00860d7a: mov    rax,QWORD PTR [rax+0x408]
0x00860d81: mov    rdx,QWORD PTR [rax+r13*8]
0x00860d85: mov    r15d,0xffff8ad0
0x00860d8b: mov    WORD PTR [rsp+0x38],r15w
0x00860d91: mov    WORD PTR [rsp+0x30],r15w
0x00860d97: mov    WORD PTR [rsp+0x28],r15w
0x00860d9d: mov    BYTE PTR [rsp+0x20],0x0
0x00860da2: mov    r9d,edi
0x00860da5: mov    r8d,0x1
0x00860dab: mov    rdx,QWORD PTR [rdx]
0x00860dae: mov    rcx,QWORD PTR [rbp+0x67]
0x00860db2: call   0x140861ec0
0x00860db7: inc    edi
0x00860db9: mov    DWORD PTR [rbp-0x45],edi
0x00860dbc: inc    rsi
0x00860dbf: mov    QWORD PTR [rbp-0x31],rsi
0x00860dc3: inc    r14
0x00860dc6: mov    QWORD PTR [rbp-0x59],r14
0x00860dca: inc    r12
0x00860dcd: mov    QWORD PTR [rbp-0x39],r12
0x00860dd1: cmp    edi,0x9
0x00860dd4: lea    r8,[rip+0xffffffffff79f225]        # 0x140000000
0x00860ddb: mov    eax,0x124
0x00860de0: jl     0x1408603f0
0x00860de6: mov    edx,DWORD PTR [rbp-0x49]
0x00860de9: inc    edx
0x00860deb: mov    DWORD PTR [rbp-0x49],edx
0x00860dee: inc    r13
0x00860df1: mov    QWORD PTR [rbp-0x51],r13
0x00860df5: mov    rax,QWORD PTR [rip+0x1b84314]        # 0x1423e5110
0x00860dfc: mov    rcx,QWORD PTR [rax+0x410]
0x00860e03: sub    rcx,QWORD PTR [rax+0x408]
0x00860e0a: sar    rcx,0x3
0x00860e0e: movsxd rax,edx
0x00860e11: cmp    rax,rcx
0x00860e14: mov    r9d,0x0
0x00860e1a: lea    r8,[rip+0xffffffffff79f1df]        # 0x140000000
0x00860e21: mov    eax,0x124
0x00860e26: jb     0x1408603d0
0x00860e2c: movzx  esi,WORD PTR [rbp+0x6f]
0x00860e30: mov    r12,QWORD PTR [rbp+0x67]
0x00860e34: mov    edi,r9d
0x00860e37: mov    rax,QWORD PTR [rip+0x1b842d2]        # 0x1423e5110
0x00860e3e: mov    rcx,QWORD PTR [rax+0x6d8]
0x00860e45: sub    rcx,QWORD PTR [rax+0x6d0]
0x00860e4c: sar    rcx,0x3
0x00860e50: test   rcx,rcx
0x00860e53: je     0x140860f0c
0x00860e59: mov    rsi,r9
0x00860e5c: lea    r14,[rip+0xe5c545]        # 0x1416bd3a8
0x00860e63: mov    ecx,0x20
0x00860e68: call   0x141539690
0x00860e6d: mov    rdx,rax
0x00860e70: mov    QWORD PTR [rbp-0x51],rax
0x00860e74: xor    r9d,r9d
0x00860e77: mov    DWORD PTR [rax+0x8],r9d
0x00860e7b: mov    DWORD PTR [rax+0xc],0xffffffff
0x00860e82: mov    QWORD PTR [rax],r14
0x00860e85: mov    QWORD PTR [rax+0x10],r9
0x00860e89: mov    QWORD PTR [rax+0x18],r9
0x00860e8d: mov    rcx,QWORD PTR [rip+0x1b8427c]        # 0x1423e5110
0x00860e94: mov    QWORD PTR [rax+0x10],rcx
0x00860e98: mov    rcx,QWORD PTR [rip+0x1b84271]        # 0x1423e5110
0x00860e9f: mov    rcx,QWORD PTR [rcx+0x6d0]
0x00860ea6: mov    rax,QWORD PTR [rsi+rcx*1]
0x00860eaa: mov    QWORD PTR [rdx+0x18],rax
0x00860eae: mov    QWORD PTR [rbp-0x51],rdx
0x00860eb2: mov    rax,QWORD PTR [r12+0x38]
0x00860eb7: cmp    rax,QWORD PTR [r12+0x40]
0x00860ebc: je     0x140860ec9
0x00860ebe: mov    QWORD PTR [rax],rdx
0x00860ec1: add    QWORD PTR [r12+0x38],0x8
0x00860ec7: jmp    0x140860edd
0x00860ec9: lea    r8,[rbp-0x51]
0x00860ecd: mov    rdx,rax
0x00860ed0: lea    rcx,[r12+0x30]
0x00860ed5: call   0x1400bad30
0x00860eda: xor    r9d,r9d
0x00860edd: inc    edi
0x00860edf: add    rsi,0x8
0x00860ee3: mov    rax,QWORD PTR [rip+0x1b84226]        # 0x1423e5110
0x00860eea: mov    rcx,QWORD PTR [rax+0x6d8]
0x00860ef1: sub    rcx,QWORD PTR [rax+0x6d0]
0x00860ef8: sar    rcx,0x3
0x00860efc: movsxd rax,edi
0x00860eff: cmp    rax,rcx
0x00860f02: jb     0x140860e63
0x00860f08: movzx  esi,WORD PTR [rbp+0x6f]
0x00860f0c: mov    r15d,r9d
0x00860f0f: mov    DWORD PTR [rbp-0x49],r9d
0x00860f13: mov    rax,QWORD PTR [rip+0x1b8db56]        # 0x1423eea70
0x00860f1a: sub    rax,QWORD PTR [rip+0x1b8db47]        # 0x1423eea68
0x00860f21: sar    rax,0x3
0x00860f25: test   rax,rax
0x00860f28: je     0x140861189
0x00860f2e: mov    r14,r9
0x00860f31: lea    r13,[rip+0xe57ab0]        # 0x1416b89e8
0x00860f38: nop    DWORD PTR [rax+rax*1+0x0]
0x00860f40: mov    rbx,QWORD PTR [rip+0x1b8db21]        # 0x1423eea68
0x00860f47: mov    rcx,QWORD PTR [rbx+r14*1]
0x00860f4b: mov    rax,QWORD PTR [rcx]
0x00860f4e: call   QWORD PTR [rax+0x120]
0x00860f54: mov    rcx,QWORD PTR [rbx+r14*1]
0x00860f58: movsx  edx,WORD PTR [rcx+0x120]
0x00860f5f: cmp    edx,eax
0x00860f61: jl     0x140861159
0x00860f67: mov    rax,QWORD PTR [rip+0x1b8dafa]        # 0x1423eea68
0x00860f6e: mov    rdx,QWORD PTR [r14+rax*1]
0x00860f72: movsx  eax,WORD PTR [rbp+0x77]
0x00860f76: mov    ecx,DWORD PTR [rdx+0x10]
0x00860f79: sub    ecx,eax
0x00860f7b: mov    eax,ecx
0x00860f7d: neg    eax
0x00860f7f: cmovs  eax,ecx
0x00860f82: cmp    eax,0x1
0x00860f85: jg     0x140861159
0x00860f8b: movsx  eax,WORD PTR [rbp+0x7f]
0x00860f8f: mov    ecx,DWORD PTR [rdx+0x1c]
0x00860f92: sub    ecx,eax
0x00860f94: mov    eax,ecx
0x00860f96: neg    eax
0x00860f98: cmovs  eax,ecx
0x00860f9b: cmp    eax,0x1
0x00860f9e: jg     0x140861159
0x00860fa4: mov    ecx,DWORD PTR [rdx+0x20]
0x00860fa7: movsx  esi,WORD PTR [rbp+0x6f]
0x00860fab: cmp    ecx,esi
0x00860fad: jne    0x14086115d
0x00860fb3: movsx  eax,WORD PTR [rdx+0x14c]
0x00860fba: cmp    eax,ecx
0x00860fbc: jne    0x14086115d
0x00860fc2: mov    rbx,QWORD PTR [rdx+0x130]
0x00860fc9: sub    rbx,QWORD PTR [rdx+0x128]
0x00860fd0: sar    rbx,0x3
0x00860fd4: sub    ebx,0x1
0x00860fd7: movsxd rdi,ebx
0x00860fda: js     0x14086115d
0x00860fe0: mov    rax,QWORD PTR [rip+0x1b8da81]        # 0x1423eea68
0x00860fe7: mov    rax,QWORD PTR [r14+rax*1]
0x00860feb: mov    rax,QWORD PTR [rax+0x128]
0x00860ff2: mov    rcx,QWORD PTR [rax+rdi*8]
0x00860ff6: mov    rcx,QWORD PTR [rcx]
0x00860ff9: mov    rax,QWORD PTR [rcx]
0x00860ffc: call   QWORD PTR [rax]
0x00860ffe: cmp    ax,0x12
0x00861002: je     0x140861011
0x00861004: dec    ebx
0x00861006: sub    rdi,0x1
0x0086100a: jns    0x140860fe0
0x0086100c: jmp    0x140861159
0x00861011: mov    rax,QWORD PTR [rip+0x1b8da50]        # 0x1423eea68
0x00861018: mov    rax,QWORD PTR [r14+rax*1]
0x0086101c: movsxd rcx,ebx
0x0086101f: mov    rax,QWORD PTR [rax+0x128]
0x00861026: mov    rcx,QWORD PTR [rax+rcx*8]
0x0086102a: mov    rdi,QWORD PTR [rcx]
0x0086102d: test   rdi,rdi
0x00861030: je     0x140861159
0x00861036: test   BYTE PTR [rdi+0x10],0x40
0x0086103a: je     0x140861159
0x00861040: mov    rax,QWORD PTR [rdi+0x40]
0x00861044: sub    rax,QWORD PTR [rdi+0x38]
0x00861048: sar    rax,0x3
0x0086104c: sub    eax,0x1
0x0086104f: movsxd rbx,eax
0x00861052: js     0x140861159
0x00861058: nop    DWORD PTR [rax+rax*1+0x0]
0x00861060: mov    rax,QWORD PTR [rdi+0x38]
0x00861064: mov    rcx,QWORD PTR [rax+rbx*8]
0x00861068: mov    rax,QWORD PTR [rcx]
0x0086106b: call   QWORD PTR [rax+0x10]
0x0086106e: cmp    eax,0xa
0x00861071: jne    0x14086114b
0x00861077: mov    rax,QWORD PTR [rdi+0x38]
0x0086107b: mov    rcx,QWORD PTR [rax+rbx*8]
0x0086107f: mov    rax,QWORD PTR [rcx]
0x00861082: call   QWORD PTR [rax+0x18]
0x00861085: mov    rsi,rax
0x00861088: test   rax,rax
0x0086108b: je     0x14086114b
0x00861091: mov    ecx,0x30
0x00861096: call   0x141539690
0x0086109b: mov    rdx,rax
0x0086109e: mov    QWORD PTR [rbp-0x51],rax
0x008610a2: xor    eax,eax
0x008610a4: mov    DWORD PTR [rdx+0x8],eax
0x008610a7: mov    DWORD PTR [rdx+0xc],0xffffffff
0x008610ae: mov    DWORD PTR [rdx+0x10],0x8ad08ad0
0x008610b5: mov    DWORD PTR [rdx+0x14],0x8ad08ad0
0x008610bc: mov    DWORD PTR [rdx+0x18],0x8ad08ad0
0x008610c3: mov    QWORD PTR [rdx],r13
0x008610c6: mov    QWORD PTR [rdx+0x20],rdi
0x008610ca: mov    QWORD PTR [rdx+0x28],rsi
0x008610ce: mov    rax,QWORD PTR [rip+0x1b8d993]        # 0x1423eea68
0x008610d5: mov    rcx,QWORD PTR [r14+rax*1]
0x008610d9: movzx  eax,WORD PTR [rcx+0x10]
0x008610dd: mov    WORD PTR [rdx+0x10],ax
0x008610e1: mov    rax,QWORD PTR [rip+0x1b8d980]        # 0x1423eea68
0x008610e8: mov    rcx,QWORD PTR [r14+rax*1]
0x008610ec: movzx  eax,WORD PTR [rcx+0x1c]
0x008610f0: mov    WORD PTR [rdx+0x12],ax
0x008610f4: mov    rax,QWORD PTR [rip+0x1b8d96d]        # 0x1423eea68
0x008610fb: mov    rcx,QWORD PTR [r14+rax*1]
0x008610ff: movzx  eax,WORD PTR [rcx+0x20]
0x00861103: mov    WORD PTR [rdx+0x14],ax
0x00861107: movzx  eax,WORD PTR [rbp+0x77]
0x0086110b: mov    WORD PTR [rdx+0x16],ax
0x0086110f: movzx  eax,WORD PTR [rbp+0x7f]
0x00861113: mov    WORD PTR [rdx+0x18],ax
0x00861117: movzx  eax,WORD PTR [rbp+0x6f]
0x0086111b: mov    WORD PTR [rdx+0x1a],ax
0x0086111f: lea    rcx,[r12+0xc0]
0x00861127: mov    QWORD PTR [rbp-0x51],rdx
0x0086112b: mov    rax,QWORD PTR [rcx+0x8]
0x0086112f: cmp    rax,QWORD PTR [rcx+0x10]
0x00861133: je     0x14086113f
0x00861135: mov    QWORD PTR [rax],rdx
0x00861138: add    QWORD PTR [rcx+0x8],0x8
0x0086113d: jmp    0x14086114b
0x0086113f: lea    r8,[rbp-0x51]
0x00861143: mov    rdx,rax
0x00861146: call   0x1400bad30
0x0086114b: sub    rbx,0x1
0x0086114f: jns    0x140861060
0x00861155: mov    r15d,DWORD PTR [rbp-0x49]
0x00861159: movzx  esi,WORD PTR [rbp+0x6f]
0x0086115d: inc    r15d
0x00861160: mov    DWORD PTR [rbp-0x49],r15d
0x00861164: add    r14,0x8
0x00861168: mov    rcx,QWORD PTR [rip+0x1b8d901]        # 0x1423eea70
0x0086116f: sub    rcx,QWORD PTR [rip+0x1b8d8f2]        # 0x1423eea68
0x00861176: sar    rcx,0x3
0x0086117a: movsxd rax,r15d
0x0086117d: cmp    rax,rcx
0x00861180: jb     0x140860f40
0x00861186: xor    r9d,r9d
0x00861189: movsx  eax,WORD PTR [rbp+0x77]
0x0086118d: lea    r15d,[rax-0x1]
0x00861191: movsx  r13d,r15w
0x00861195: inc    eax
0x00861197: cmp    r13d,eax
0x0086119a: jg     0x14086196d
0x008611a0: lea    rdi,[rip+0xe587d9]        # 0x1416b9980
0x008611a7: nop    WORD PTR [rax+rax*1+0x0]
0x008611b0: movsx  eax,WORD PTR [rbp+0x7f]
0x008611b4: lea    r14d,[rax-0x1]
0x008611b8: movsx  ebx,r14w
0x008611bc: inc    eax
0x008611be: cmp    ebx,eax
0x008611c0: jg     0x140861956
0x008611c6: test   r15w,r15w
0x008611ca: js     0x140861276
0x008611d0: cmp    r13d,DWORD PTR [rip+0x1c86f05]        # 0x1424e80dc
0x008611d7: jge    0x140861276
0x008611dd: test   r14w,r14w
0x008611e1: js     0x140861276
0x008611e7: cmp    ebx,DWORD PTR [rip+0x1c86ef3]        # 0x1424e80e0
0x008611ed: jge    0x140861276
0x008611f3: test   si,si
0x008611f6: js     0x140861276
0x008611f8: movsx  eax,si
0x008611fb: cmp    eax,DWORD PTR [rip+0x1c86ee3]        # 0x1424e80e4
0x00861201: jge    0x140861276
0x00861203: movzx  eax,r15w
0x00861207: sar    ax,0x4
0x0086120b: movzx  edx,r14w
0x0086120f: sar    dx,0x4
0x00861213: mov    rcx,QWORD PTR [rip+0x1c86e8e]        # 0x1424e80a8
0x0086121a: test   rcx,rcx
0x0086121d: je     0x140861276
0x0086121f: movsx  rax,ax
0x00861223: movsx  rdx,dx
0x00861227: mov    rax,QWORD PTR [rcx+rax*8]
0x0086122b: movsx  rcx,si
0x0086122f: mov    rax,QWORD PTR [rax+rdx*8]
0x00861233: mov    rdx,QWORD PTR [rax+rcx*8]
0x00861237: test   rdx,rdx
0x0086123a: je     0x140861276
0x0086123c: mov    eax,r13d
0x0086123f: and    eax,0x8000000f
0x00861244: jge    0x14086124d
0x00861246: dec    eax
0x00861248: or     eax,0xfffffff0
0x0086124b: inc    eax
0x0086124d: movsxd rcx,eax
0x00861250: add    rcx,0x5
0x00861254: shl    rcx,0x4
0x00861258: mov    eax,ebx
0x0086125a: and    eax,0x8000000f
0x0086125f: jge    0x140861268
0x00861261: dec    eax
0x00861263: or     eax,0xfffffff0
0x00861266: inc    eax
0x00861268: cdqe
0x0086126a: add    rcx,rax
0x0086126d: movzx  eax,WORD PTR [rdx+rcx*2]
0x00861271: mov    DWORD PTR [rbp-0x49],eax
0x00861274: jmp    0x14086127a
0x00861276: mov    DWORD PTR [rbp-0x49],r9d
0x0086127a: cmp    r15w,WORD PTR [rbp+0x77]
0x0086127f: jne    0x14086135d
0x00861285: cmp    r14w,WORD PTR [rbp+0x7f]
0x0086128a: jne    0x14086135d
0x00861290: movzx  r9d,si
0x00861294: movzx  r8d,r14w
0x00861298: movzx  edx,r15w
0x0086129c: lea    rcx,[rip+0x1b7024d]        # 0x1423d14f0
0x008612a3: call   0x140247d80
0x008612a8: cmp    al,0x1
0x008612aa: jle    0x14086135d
0x008612b0: mov    ecx,0x30
0x008612b5: call   0x141539690
0x008612ba: mov    rcx,rax
0x008612bd: mov    QWORD PTR [rbp-0x51],rax
0x008612c1: mov    DWORD PTR [rax+0x8],0x0
0x008612c8: mov    edx,0xffffffff
0x008612cd: mov    DWORD PTR [rax+0xc],edx
0x008612d0: mov    DWORD PTR [rax+0x10],0x8ad08ad0
0x008612d7: mov    DWORD PTR [rax+0x14],0x8ad08ad0
0x008612de: mov    DWORD PTR [rax+0x18],0x8ad08ad0
0x008612e5: mov    QWORD PTR [rax],rdi
0x008612e8: mov    DWORD PTR [rax+0x24],edx
0x008612eb: mov    edx,0x1
0x008612f0: mov    WORD PTR [rax+0x20],0x6
0x008612f6: mov    WORD PTR [rax+0x28],dx
0x008612fa: mov    WORD PTR [rax+0x10],r15w
0x008612ff: mov    WORD PTR [rax+0x12],r14w
0x00861304: movzx  eax,WORD PTR [rbp+0x6f]
0x00861308: mov    WORD PTR [rcx+0x14],ax
0x0086130c: movzx  eax,WORD PTR [rbp+0x77]
0x00861310: mov    WORD PTR [rcx+0x16],ax
0x00861314: movzx  eax,WORD PTR [rbp+0x7f]
0x00861318: mov    WORD PTR [rcx+0x18],ax
0x0086131c: movzx  eax,WORD PTR [rbp+0x6f]
0x00861320: mov    WORD PTR [rcx+0x1a],ax
0x00861324: mov    QWORD PTR [rbp-0x51],rcx
0x00861328: mov    rdx,QWORD PTR [r12+0xc8]
0x00861330: cmp    rdx,QWORD PTR [r12+0xd0]
0x00861338: je     0x140861348
0x0086133a: mov    QWORD PTR [rdx],rcx
0x0086133d: add    QWORD PTR [r12+0xc8],0x8
0x00861346: jmp    0x140861359
0x00861348: lea    r8,[rbp-0x51]
0x0086134c: lea    rcx,[r12+0xc0]
0x00861354: call   0x1400bad30
0x00861359: movzx  esi,WORD PTR [rbp+0x6f]
0x0086135d: movzx  r9d,si
0x00861361: movzx  r8d,r14w
0x00861365: movzx  edx,r15w
0x00861369: lea    rcx,[rip+0x1b70180]        # 0x1423d14f0
0x00861370: call   0x140247d80
0x00861375: test   al,al
0x00861377: jne    0x14086193d
0x0086137d: movzx  r8d,r14w
0x00861381: movzx  edx,r15w
0x00861385: lea    rcx,[rip+0x1b70164]        # 0x1423d14f0
0x0086138c: call   0x1402c3a90
0x00861391: test   al,al
0x00861393: jne    0x14086193d
0x00861399: test   r15w,r15w
0x0086139d: js     0x14086165d
0x008613a3: cmp    r13d,DWORD PTR [rip+0x1c86d32]        # 0x1424e80dc
0x008613aa: jge    0x14086165d
0x008613b0: test   r14w,r14w
0x008613b4: js     0x14086165d
0x008613ba: cmp    ebx,DWORD PTR [rip+0x1c86d20]        # 0x1424e80e0
0x008613c0: jge    0x14086165d
0x008613c6: test   si,si
0x008613c9: js     0x14086165d
0x008613cf: movsx  edi,si
0x008613d2: cmp    edi,DWORD PTR [rip+0x1c86d0c]        # 0x1424e80e4
0x008613d8: jge    0x14086165d
0x008613de: movzx  r8d,r14w
0x008613e2: movzx  edx,r15w
0x008613e6: lea    rcx,[rip+0x1b70103]        # 0x1423d14f0
0x008613ed: call   0x140067f80
0x008613f2: movzx  r12d,ax
0x008613f6: movzx  r8d,r14w
0x008613fa: movzx  edx,r15w
0x008613fe: lea    rcx,[rip+0x1b700eb]        # 0x1423d14f0
0x00861405: call   0x1414aa830
0x0086140a: test   al,al
0x0086140c: je     0x14086165d
0x00861412: mov    ecx,r12d
0x00861415: cmp    r12d,0x164
0x0086141c: ja     0x14086143e
0x0086141e: je     0x140861658
0x00861424: sub    ecx,0x41
0x00861427: je     0x140861658
0x0086142d: sub    ecx,0x101
0x00861433: je     0x140861658
0x00861439: cmp    ecx,0x1
0x0086143c: jmp    0x14086144d
0x0086143e: sub    ecx,0x1b0
0x00861444: je     0x140861658
0x0086144a: cmp    ecx,0x3a
0x0086144d: je     0x140861658
0x00861453: movzx  edx,r15w
0x00861457: lea    rcx,[rip+0x1b70092]        # 0x1423d14f0
0x0086145e: call   0x140068010
0x00861463: and    eax,0x7
0x00861466: sub    eax,0x6
0x00861469: je     0x140861658
0x0086146f: cmp    eax,0x1
0x00861472: jne    0x1408614c8
0x00861474: movzx  r8d,r14w
0x00861478: movzx  edx,r15w
0x0086147c: lea    rcx,[rip+0x1b8ca85]        # 0x1423edf08
0x00861483: call   0x1405a8470
0x00861488: test   al,al
0x0086148a: jne    0x14086165d
0x00861490: movzx  r8d,r14w
0x00861494: movzx  edx,r15w
0x00861498: lea    rcx,[rip+0x1b8ca69]        # 0x1423edf08
0x0086149f: call   0x1405a8550
0x008614a4: test   al,al
0x008614a6: jne    0x14086165d
0x008614ac: movzx  r8d,r14w
0x008614b0: movzx  edx,r15w
0x008614b4: lea    rcx,[rip+0x1b8ca4d]        # 0x1423edf08
0x008614bb: call   0x1405a8320
0x008614c0: test   al,al
0x008614c2: jne    0x14086165d
0x008614c8: cmp    r13d,DWORD PTR [rip+0x1c86c0d]        # 0x1424e80dc
0x008614cf: jge    0x140861658
0x008614d5: cmp    ebx,DWORD PTR [rip+0x1c86c05]        # 0x1424e80e0
0x008614db: jge    0x140861658
0x008614e1: cmp    edi,DWORD PTR [rip+0x1c86bfd]        # 0x1424e80e4
0x008614e7: jge    0x140861658
0x008614ed: movzx  eax,r15w
0x008614f1: sar    ax,0x4
0x008614f5: movzx  edx,r14w
0x008614f9: sar    dx,0x4
0x008614fd: mov    rcx,QWORD PTR [rip+0x1c86ba4]        # 0x1424e80a8
0x00861504: test   rcx,rcx
0x00861507: je     0x140861658
0x0086150d: movsx  rax,ax
0x00861511: movsx  rdx,dx
0x00861515: mov    rax,QWORD PTR [rcx+rax*8]
0x00861519: movsx  rcx,si
0x0086151d: mov    rax,QWORD PTR [rax+rdx*8]
0x00861521: mov    rcx,QWORD PTR [rax+rcx*8]
0x00861525: test   rcx,rcx
0x00861528: je     0x140861658
0x0086152e: mov    r8d,ebx
0x00861531: and    r8d,0x8000000f
0x00861538: jge    0x140861544
0x0086153a: dec    r8d
0x0086153d: or     r8d,0xfffffff0
0x00861541: inc    r8d
0x00861544: mov    edx,r13d
0x00861547: and    edx,0x8000000f
0x0086154d: jge    0x140861556
0x0086154f: dec    edx
0x00861551: or     edx,0xfffffff0
0x00861554: inc    edx
0x00861556: xor    edi,edi
0x00861558: mov    DWORD PTR [rsp+0x38],edi
0x0086155c: mov    BYTE PTR [rsp+0x30],0x1
0x00861561: mov    BYTE PTR [rsp+0x28],dil
0x00861566: mov    BYTE PTR [rsp+0x20],0x1
0x0086156b: xor    r9d,r9d
0x0086156e: call   0x140534da0
0x00861573: movzx  esi,WORD PTR [rbp+0x6f]
0x00861577: test   al,al
0x00861579: je     0x14086165d
0x0086157f: lea    r9d,[rsi-0x1]
0x00861583: movzx  r8d,r14w
0x00861587: movzx  edx,r15w
0x0086158b: lea    rcx,[rip+0x1b6ff5e]        # 0x1423d14f0
0x00861592: call   0x140247d80
0x00861597: cmp    al,0x1
0x00861599: jle    0x14086165d
0x0086159f: mov    ecx,0x30
0x008615a4: call   0x141539690
0x008615a9: mov    rcx,rax
0x008615ac: mov    QWORD PTR [rbp-0x51],rax
0x008615b0: mov    DWORD PTR [rax+0x8],edi
0x008615b3: mov    edx,0xffffffff
0x008615b8: mov    DWORD PTR [rax+0xc],edx
0x008615bb: mov    DWORD PTR [rax+0x10],0x8ad08ad0
0x008615c2: mov    DWORD PTR [rax+0x14],0x8ad08ad0
0x008615c9: mov    DWORD PTR [rax+0x18],0x8ad08ad0
0x008615d0: lea    rax,[rip+0xe583a9]        # 0x1416b9980
0x008615d7: mov    QWORD PTR [rcx],rax
0x008615da: mov    DWORD PTR [rcx+0x24],edx
0x008615dd: mov    edx,0x1
0x008615e2: mov    WORD PTR [rcx+0x20],0x6
0x008615e8: mov    WORD PTR [rcx+0x28],dx
0x008615ec: mov    WORD PTR [rcx+0x10],r15w
0x008615f1: mov    WORD PTR [rcx+0x12],r14w
0x008615f6: movzx  eax,WORD PTR [rbp+0x6f]
0x008615fa: dec    ax
0x008615fd: mov    WORD PTR [rcx+0x14],ax
0x00861601: movzx  eax,WORD PTR [rbp+0x77]
0x00861605: mov    WORD PTR [rcx+0x16],ax
0x00861609: movzx  eax,WORD PTR [rbp+0x7f]
0x0086160d: mov    WORD PTR [rcx+0x18],ax
0x00861611: movzx  eax,WORD PTR [rbp+0x6f]
0x00861615: mov    WORD PTR [rcx+0x1a],ax
0x00861619: mov    rax,QWORD PTR [rbp+0x67]
0x0086161d: mov    QWORD PTR [rbp-0x51],rcx
0x00861621: mov    rdx,QWORD PTR [rax+0xc8]
0x00861628: cmp    rdx,QWORD PTR [rax+0xd0]
0x0086162f: je     0x140861642
0x00861631: mov    QWORD PTR [rdx],rcx
0x00861634: add    QWORD PTR [rax+0xc8],0x8
0x0086163c: movzx  esi,WORD PTR [rbp+0x6f]
0x00861640: jmp    0x14086166a
0x00861642: lea    r8,[rbp-0x51]
0x00861646: lea    rcx,[rax+0xc0]
0x0086164d: call   0x1400bad30
0x00861652: movzx  esi,WORD PTR [rbp+0x6f]
0x00861656: jmp    0x14086166a
0x00861658: xor    dil,dil
0x0086165b: jmp    0x14086166a
0x0086165d: xor    dil,dil
0x00861660: test   r15w,r15w
0x00861664: js     0x140861858
0x0086166a: cmp    r13d,DWORD PTR [rip+0x1c86a6b]        # 0x1424e80dc
0x00861671: jge    0x140861858
0x00861677: test   r14w,r14w
0x0086167b: js     0x140861858
0x00861681: cmp    ebx,DWORD PTR [rip+0x1c86a59]        # 0x1424e80e0
0x00861687: jge    0x140861858
0x0086168d: test   si,si
0x00861690: js     0x140861858
0x00861696: movsx  eax,si
0x00861699: cmp    eax,DWORD PTR [rip+0x1c86a45]        # 0x1424e80e4
0x0086169f: jge    0x140861858
0x008616a5: movzx  eax,r15w
0x008616a9: sar    ax,0x4
0x008616ad: movzx  edx,r14w
0x008616b1: sar    dx,0x4
0x008616b5: mov    rcx,QWORD PTR [rip+0x1c869ec]        # 0x1424e80a8
0x008616bc: test   rcx,rcx
0x008616bf: je     0x140861858
0x008616c5: movsx  rax,ax
0x008616c9: movsx  rdx,dx
0x008616cd: mov    rax,QWORD PTR [rcx+rax*8]
0x008616d1: movsx  rcx,si
0x008616d5: mov    rax,QWORD PTR [rax+rdx*8]
0x008616d9: mov    r13,QWORD PTR [rax+rcx*8]
0x008616dd: test   r13,r13
0x008616e0: je     0x140861854
0x008616e6: mov    rax,QWORD PTR [r13+0x10]
0x008616ea: sub    rax,QWORD PTR [r13+0x8]
0x008616ee: sar    rax,0x3
0x008616f2: sub    eax,0x1
0x008616f5: movsxd r12,eax
0x008616f8: js     0x140861854
0x008616fe: movsx  esi,r14w
0x00861702: mov    rax,QWORD PTR [r13+0x8]
0x00861706: mov    rcx,QWORD PTR [rax+r12*8]
0x0086170a: mov    rax,QWORD PTR [rcx]
0x0086170d: call   QWORD PTR [rax]
0x0086170f: cmp    ax,0x3
0x00861713: jne    0x140861846
0x00861719: mov    rax,QWORD PTR [r13+0x8]
0x0086171d: mov    rbx,QWORD PTR [rax+r12*8]
0x00861721: movsx  eax,r15w
0x00861725: and    eax,0x8000000f
0x0086172a: jge    0x140861733
0x0086172c: dec    eax
0x0086172e: or     eax,0xfffffff0
0x00861731: inc    eax
0x00861733: movsxd rdx,eax
0x00861736: add    rdx,rdx
0x00861739: mov    eax,esi
0x0086173b: and    eax,0x8000000f
0x00861740: jge    0x140861749
0x00861742: dec    eax
0x00861744: or     eax,0xfffffff0
0x00861747: inc    eax
0x00861749: movsxd rcx,eax
0x0086174c: lea    rax,[rbx+rdx*8]
0x00861750: cmp    BYTE PTR [rcx+rax*1+0x12],0x64
0x00861755: jb     0x140861846
0x0086175b: cmp    WORD PTR [rbx+0x10],0x2
0x00861760: je     0x140861846
0x00861766: mov    ecx,0x30
0x0086176b: call   0x141539690
0x00861770: mov    rcx,rax
0x00861773: mov    QWORD PTR [rbp-0x51],rax
0x00861777: mov    DWORD PTR [rax+0x8],0x0
0x0086177e: mov    edx,0xffffffff
0x00861783: mov    DWORD PTR [rax+0xc],edx
0x00861786: mov    DWORD PTR [rax+0x10],0x8ad08ad0
0x0086178d: mov    DWORD PTR [rax+0x14],0x8ad08ad0
0x00861794: mov    DWORD PTR [rax+0x18],0x8ad08ad0
0x0086179b: lea    rax,[rip+0xe581de]        # 0x1416b9980
0x008617a2: mov    QWORD PTR [rcx],rax
0x008617a5: mov    WORD PTR [rcx+0x20],dx
0x008617a9: mov    DWORD PTR [rcx+0x24],edx
0x008617ac: mov    r8d,0x1
0x008617b2: mov    WORD PTR [rcx+0x28],r8w
0x008617b7: movzx  eax,WORD PTR [rbx+0x8]
0x008617bb: mov    WORD PTR [rcx+0x20],ax
0x008617bf: mov    eax,DWORD PTR [rbx+0xc]
0x008617c2: mov    DWORD PTR [rcx+0x24],eax
0x008617c5: movzx  eax,WORD PTR [rbx+0x10]
0x008617c9: mov    WORD PTR [rcx+0x28],ax
0x008617cd: mov    WORD PTR [rcx+0x10],r15w
0x008617d2: mov    WORD PTR [rcx+0x12],r14w
0x008617d7: movzx  eax,WORD PTR [rbp+0x6f]
0x008617db: mov    WORD PTR [rcx+0x14],ax
0x008617df: movzx  eax,WORD PTR [rbp+0x77]
0x008617e3: mov    WORD PTR [rcx+0x16],ax
0x008617e7: movzx  eax,WORD PTR [rbp+0x7f]
0x008617eb: mov    WORD PTR [rcx+0x18],ax
0x008617ef: movzx  eax,WORD PTR [rbp+0x6f]
0x008617f3: mov    WORD PTR [rcx+0x1a],ax
0x008617f7: mov    rax,QWORD PTR [rbp+0x67]
0x008617fb: mov    QWORD PTR [rbp-0x51],rcx
0x008617ff: mov    rdx,QWORD PTR [rax+0xc8]
0x00861806: cmp    rdx,QWORD PTR [rax+0xd0]
0x0086180d: je     0x14086181c
0x0086180f: mov    QWORD PTR [rdx],rcx
0x00861812: add    QWORD PTR [rax+0xc8],0x8
0x0086181a: jmp    0x140861832
0x0086181c: lea    r8,[rbp-0x51]
0x00861820: lea    rcx,[rax+0xc0]
0x00861827: call   0x1400bad30
0x0086182c: mov    r8d,0x1
0x00861832: cmp    WORD PTR [rbx+0x8],0xc
0x00861837: jne    0x140861846
0x00861839: movzx  edi,dil
0x0086183d: cmp    WORD PTR [rbx+0x10],0x0
0x00861842: cmove  edi,r8d
0x00861846: sub    r12,0x1
0x0086184a: jns    0x140861702
0x00861850: movzx  esi,WORD PTR [rbp+0x6f]
0x00861854: movsx  r13d,r15w
0x00861858: movzx  ecx,WORD PTR [rbp-0x49]
0x0086185c: call   0x1407dd2c0
0x00861861: test   al,al
0x00861863: je     0x140861932
0x00861869: test   dil,dil
0x0086186c: jne    0x140861932
0x00861872: mov    ecx,0x30
0x00861877: call   0x141539690
0x0086187c: mov    rcx,rax
0x0086187f: mov    QWORD PTR [rbp-0x51],rax
0x00861883: xor    r9d,r9d
0x00861886: mov    DWORD PTR [rax+0x8],r9d
0x0086188a: mov    edx,0xffffffff
0x0086188f: mov    DWORD PTR [rax+0xc],edx
0x00861892: mov    DWORD PTR [rax+0x10],0x8ad08ad0
0x00861899: mov    DWORD PTR [rax+0x14],0x8ad08ad0
0x008618a0: mov    DWORD PTR [rax+0x18],0x8ad08ad0
0x008618a7: lea    rdi,[rip+0xe580d2]        # 0x1416b9980
0x008618ae: mov    QWORD PTR [rax],rdi
0x008618b1: mov    DWORD PTR [rax+0x24],edx
0x008618b4: mov    WORD PTR [rax+0x28],0x1
0x008618ba: mov    WORD PTR [rax+0x20],0xc
0x008618c0: mov    WORD PTR [rax+0x28],r9w
0x008618c5: mov    WORD PTR [rax+0x10],r15w
0x008618ca: mov    WORD PTR [rax+0x12],r14w
0x008618cf: movzx  eax,WORD PTR [rbp+0x6f]
0x008618d3: mov    WORD PTR [rcx+0x14],ax
0x008618d7: movzx  eax,WORD PTR [rbp+0x77]
0x008618db: mov    WORD PTR [rcx+0x16],ax
0x008618df: movzx  eax,WORD PTR [rbp+0x7f]
0x008618e3: mov    WORD PTR [rcx+0x18],ax
0x008618e7: movzx  eax,WORD PTR [rbp+0x6f]
0x008618eb: mov    WORD PTR [rcx+0x1a],ax
0x008618ef: mov    r12,QWORD PTR [rbp+0x67]
0x008618f3: mov    QWORD PTR [rbp-0x51],rcx
0x008618f7: mov    rdx,QWORD PTR [r12+0xc8]
0x008618ff: cmp    rdx,QWORD PTR [r12+0xd0]
0x00861907: je     0x14086191b
0x00861909: mov    QWORD PTR [rdx],rcx
0x0086190c: add    QWORD PTR [r12+0xc8],0x8
0x00861915: movzx  esi,WORD PTR [rbp+0x6f]
0x00861919: jmp    0x140861940
0x0086191b: lea    r8,[rbp-0x51]
0x0086191f: lea    rcx,[r12+0xc0]
0x00861927: call   0x1400bad30
0x0086192c: movzx  esi,WORD PTR [rbp+0x6f]
0x00861930: jmp    0x14086193d
0x00861932: lea    rdi,[rip+0xe58047]        # 0x1416b9980
0x00861939: mov    r12,QWORD PTR [rbp+0x67]
0x0086193d: xor    r9d,r9d
0x00861940: inc    r14w
0x00861944: movsx  ebx,r14w
0x00861948: movsx  eax,WORD PTR [rbp+0x7f]
0x0086194c: inc    eax
0x0086194e: cmp    ebx,eax
0x00861950: jle    0x1408611c6
0x00861956: inc    r15w
0x0086195a: movsx  r13d,r15w
0x0086195e: movsx  eax,WORD PTR [rbp+0x77]
0x00861962: inc    eax
0x00861964: cmp    r13d,eax
0x00861967: jle    0x1408611b0
0x0086196d: mov    edi,r9d
0x00861970: mov    rax,QWORD PTR [rip+0x1b83799]        # 0x1423e5110
0x00861977: mov    rcx,QWORD PTR [rax+0x6d8]
0x0086197e: sub    rcx,QWORD PTR [rax+0x6d0]
0x00861985: sar    rcx,0x3
0x00861989: mov    r13,QWORD PTR [rbp+0x67]
0x0086198d: test   rcx,rcx
0x00861990: je     0x140861a51
0x00861996: mov    rsi,r9
0x00861999: lea    r14,[rip+0xe53df0]        # 0x1416b5790
0x008619a0: mov    ecx,0x20
0x008619a5: call   0x141539690
0x008619aa: mov    rdx,rax
0x008619ad: mov    QWORD PTR [rbp-0x51],rax
0x008619b1: xor    r9d,r9d
0x008619b4: mov    DWORD PTR [rax+0x8],r9d
0x008619b8: mov    DWORD PTR [rax+0xc],0xffffffff
0x008619bf: mov    QWORD PTR [rax],r14
0x008619c2: mov    QWORD PTR [rax+0x10],r9
0x008619c6: mov    QWORD PTR [rax+0x18],r9
0x008619ca: mov    rcx,QWORD PTR [rip+0x1b8373f]        # 0x1423e5110
0x008619d1: mov    QWORD PTR [rax+0x10],rcx
0x008619d5: mov    rcx,QWORD PTR [rip+0x1b83734]        # 0x1423e5110
0x008619dc: mov    rcx,QWORD PTR [rcx+0x6d0]
0x008619e3: mov    rax,QWORD PTR [rsi+rcx*1]
0x008619e7: mov    QWORD PTR [rdx+0x18],rax
0x008619eb: mov    QWORD PTR [rbp-0x51],rdx
0x008619ef: mov    rax,QWORD PTR [r13+0xc8]
0x008619f6: cmp    rax,QWORD PTR [r13+0xd0]
0x008619fd: je     0x140861a0c
0x008619ff: mov    QWORD PTR [rax],rdx
0x00861a02: add    QWORD PTR [r13+0xc8],0x8
0x00861a0a: jmp    0x140861a22
0x00861a0c: lea    r8,[rbp-0x51]
0x00861a10: mov    rdx,rax
0x00861a13: lea    rcx,[r13+0xc0]
0x00861a1a: call   0x1400bad30
0x00861a1f: xor    r9d,r9d
0x00861a22: inc    edi
0x00861a24: add    rsi,0x8
0x00861a28: mov    rax,QWORD PTR [rip+0x1b836e1]        # 0x1423e5110
0x00861a2f: mov    rcx,QWORD PTR [rax+0x6d8]
0x00861a36: sub    rcx,QWORD PTR [rax+0x6d0]
0x00861a3d: sar    rcx,0x3
0x00861a41: movsxd rax,edi
0x00861a44: cmp    rax,rcx
0x00861a47: jb     0x1408619a0
0x00861a4d: mov    r13,QWORD PTR [rbp+0x67]
0x00861a51: mov    r12d,r9d
0x00861a54: mov    DWORD PTR [rbp-0x49],r9d
0x00861a58: mov    rax,QWORD PTR [rip+0x1b836b1]        # 0x1423e5110
0x00861a5f: mov    rcx,QWORD PTR [rax+0x410]
0x00861a66: sub    rcx,QWORD PTR [rax+0x408]
0x00861a6d: sar    rcx,0x3
0x00861a71: test   rcx,rcx
0x00861a74: je     0x140861c34
0x00861a7a: mov    r14,r9
0x00861a7d: nop    DWORD PTR [rax]
0x00861a80: mov    rax,QWORD PTR [rip+0x1b83689]        # 0x1423e5110
0x00861a87: mov    rax,QWORD PTR [rax+0x408]
0x00861a8e: mov    rcx,QWORD PTR [r14+rax*1]
0x00861a92: mov    rcx,QWORD PTR [rcx]
0x00861a95: test   rcx,rcx
0x00861a98: je     0x140861c04
0x00861a9e: mov    rax,QWORD PTR [rcx]
0x00861aa1: call   QWORD PTR [rax+0x448]
0x00861aa7: test   al,al
0x00861aa9: je     0x140861c04
0x00861aaf: mov    rax,QWORD PTR [rip+0x1b8365a]        # 0x1423e5110
0x00861ab6: mov    rax,QWORD PTR [rax+0x408]
0x00861abd: mov    rcx,QWORD PTR [r14+rax*1]
0x00861ac1: mov    rcx,QWORD PTR [rcx]
0x00861ac4: mov    rax,QWORD PTR [rcx]
0x00861ac7: call   QWORD PTR [rax+0x2a8]
0x00861acd: test   al,al
0x00861acf: jne    0x140861c04
0x00861ad5: mov    rax,QWORD PTR [rip+0x1b83634]        # 0x1423e5110
0x00861adc: mov    rax,QWORD PTR [rax+0x408]
0x00861ae3: mov    rcx,QWORD PTR [r14+rax*1]
0x00861ae7: mov    rcx,QWORD PTR [rcx]
0x00861aea: mov    rax,QWORD PTR [rcx]
0x00861aed: call   QWORD PTR [rax]
0x00861aef: cmp    ax,0x4b
0x00861af3: je     0x140861c04
0x00861af9: mov    rax,QWORD PTR [rip+0x1b83610]        # 0x1423e5110
0x00861b00: mov    rax,QWORD PTR [rax+0x408]
0x00861b07: mov    rcx,QWORD PTR [r14+rax*1]
0x00861b0b: mov    r15,QWORD PTR [rcx]
0x00861b0e: mov    rcx,QWORD PTR [r15+0x98]
0x00861b15: test   rcx,rcx
0x00861b18: je     0x140861c04
0x00861b1e: xor    r9d,r9d
0x00861b21: mov    edi,r9d
0x00861b24: mov    rax,QWORD PTR [rcx+0x8]
0x00861b28: sub    rax,QWORD PTR [rcx]
0x00861b2b: sar    rax,0x3
0x00861b2f: test   rax,rax
0x00861b32: je     0x140861c04
0x00861b38: lea    rbx,[r13+0xc0]
0x00861b3f: mov    esi,r9d
0x00861b42: lea    r13,[rip+0xe5b16f]        # 0x1416bccb8
0x00861b49: nop    DWORD PTR [rax+0x0]
0x00861b50: mov    ecx,0x28
0x00861b55: call   0x141539690
0x00861b5a: mov    rdx,rax
0x00861b5d: mov    QWORD PTR [rbp-0x51],rax
0x00861b61: xor    r9d,r9d
0x00861b64: mov    DWORD PTR [rax+0x8],r9d
0x00861b68: mov    DWORD PTR [rax+0xc],0xffffffff
0x00861b6f: mov    QWORD PTR [rax],r13
0x00861b72: mov    QWORD PTR [rax+0x10],r9
0x00861b76: mov    QWORD PTR [rax+0x18],r9
0x00861b7a: mov    QWORD PTR [rax+0x20],r9
0x00861b7e: mov    rcx,QWORD PTR [rip+0x1b8358b]        # 0x1423e5110
0x00861b85: mov    QWORD PTR [rax+0x10],rcx
0x00861b89: mov    rcx,QWORD PTR [rip+0x1b83580]        # 0x1423e5110
0x00861b90: mov    rax,QWORD PTR [rcx+0x408]
0x00861b97: mov    rcx,QWORD PTR [r14+rax*1]
0x00861b9b: mov    QWORD PTR [rdx+0x18],rcx
0x00861b9f: mov    rax,QWORD PTR [r15+0x98]
0x00861ba6: mov    rcx,QWORD PTR [rax]
0x00861ba9: mov    rax,QWORD PTR [rsi+rcx*1]
0x00861bad: mov    QWORD PTR [rdx+0x20],rax
0x00861bb1: mov    QWORD PTR [rbp-0x51],rdx
0x00861bb5: mov    rax,QWORD PTR [rbx+0x8]
0x00861bb9: cmp    rax,QWORD PTR [rbx+0x10]
0x00861bbd: je     0x140861bc9
0x00861bbf: mov    QWORD PTR [rax],rdx
0x00861bc2: add    QWORD PTR [rbx+0x8],0x8
0x00861bc7: jmp    0x140861bd8
0x00861bc9: lea    r8,[rbp-0x51]
0x00861bcd: mov    rdx,rax
0x00861bd0: mov    rcx,rbx
0x00861bd3: call   0x1400bad30
0x00861bd8: inc    edi
0x00861bda: add    rsi,0x8
0x00861bde: mov    rax,QWORD PTR [r15+0x98]
0x00861be5: mov    rcx,QWORD PTR [rax+0x8]
0x00861be9: sub    rcx,QWORD PTR [rax]
0x00861bec: sar    rcx,0x3
0x00861bf0: movsxd rax,edi
0x00861bf3: cmp    rax,rcx
0x00861bf6: jb     0x140861b50
0x00861bfc: mov    r12d,DWORD PTR [rbp-0x49]
0x00861c00: mov    r13,QWORD PTR [rbp+0x67]
0x00861c04: inc    r12d
0x00861c07: mov    DWORD PTR [rbp-0x49],r12d
0x00861c0b: add    r14,0x8
0x00861c0f: mov    rax,QWORD PTR [rip+0x1b834fa]        # 0x1423e5110
0x00861c16: mov    rcx,QWORD PTR [rax+0x410]
0x00861c1d: sub    rcx,QWORD PTR [rax+0x408]
0x00861c24: sar    rcx,0x3
0x00861c28: movsxd rax,r12d
0x00861c2b: cmp    rax,rcx
0x00861c2e: jb     0x140861a80
0x00861c34: mov    rbx,QWORD PTR [r13+0x30]
0x00861c38: mov    r14,QWORD PTR [r13+0x38]
0x00861c3c: nop    DWORD PTR [rax+0x0]
0x00861c40: cmp    rbx,r14
0x00861c43: jae    0x140861e16
0x00861c49: mov    rcx,QWORD PTR [rbx]
0x00861c4c: mov    rax,QWORD PTR [rcx]
0x00861c4f: call   QWORD PTR [rax+0x90]
0x00861c55: mov    r15,rax
0x00861c58: test   rax,rax
0x00861c5b: je     0x140861e0d
0x00861c61: mov    rdi,QWORD PTR [r13+0x48]
0x00861c65: mov    rsi,QWORD PTR [r13+0x50]
0x00861c69: nop    DWORD PTR [rax+0x0]
0x00861c70: cmp    rdi,rsi
0x00861c73: jae    0x140861c9d
0x00861c75: mov    rcx,QWORD PTR [rdi]
0x00861c78: mov    rax,QWORD PTR [rcx]
0x00861c7b: call   QWORD PTR [rax+0x90]
0x00861c81: cmp    rax,r15
0x00861c84: jne    0x140861c97
0x00861c86: mov    rcx,QWORD PTR [rbx]
0x00861c89: mov    rax,QWORD PTR [rcx]
0x00861c8c: mov    edx,0x1
0x00861c91: call   QWORD PTR [rax+0xf0]
0x00861c97: add    rdi,0x8
0x00861c9b: jmp    0x140861c70
0x00861c9d: mov    rdi,QWORD PTR [r13+0x60]
0x00861ca1: mov    rsi,QWORD PTR [r13+0x68]
0x00861ca5: cmp    rdi,rsi
0x00861ca8: jae    0x140861cd2
0x00861caa: mov    rcx,QWORD PTR [rdi]
0x00861cad: mov    rax,QWORD PTR [rcx]
0x00861cb0: call   QWORD PTR [rax+0x90]
0x00861cb6: cmp    rax,r15
0x00861cb9: jne    0x140861ccc
0x00861cbb: mov    rcx,QWORD PTR [rbx]
0x00861cbe: mov    rax,QWORD PTR [rcx]
0x00861cc1: mov    edx,0x2
0x00861cc6: call   QWORD PTR [rax+0xf0]
0x00861ccc: add    rdi,0x8
0x00861cd0: jmp    0x140861ca5
0x00861cd2: mov    rdi,QWORD PTR [r13+0x78]
0x00861cd6: mov    rsi,QWORD PTR [r13+0x80]
0x00861cdd: nop    DWORD PTR [rax]
0x00861ce0: cmp    rdi,rsi
0x00861ce3: jae    0x140861d0d
0x00861ce5: mov    rcx,QWORD PTR [rdi]
0x00861ce8: mov    rax,QWORD PTR [rcx]
0x00861ceb: call   QWORD PTR [rax+0x90]
0x00861cf1: cmp    rax,r15
0x00861cf4: jne    0x140861d07
0x00861cf6: mov    rcx,QWORD PTR [rbx]
0x00861cf9: mov    rax,QWORD PTR [rcx]
0x00861cfc: mov    edx,0x4
0x00861d01: call   QWORD PTR [rax+0xf0]
0x00861d07: add    rdi,0x8
0x00861d0b: jmp    0x140861ce0
0x00861d0d: mov    rdi,QWORD PTR [r13+0x90]
0x00861d14: mov    rsi,QWORD PTR [r13+0x98]
0x00861d1b: nop    DWORD PTR [rax+rax*1+0x0]
0x00861d20: cmp    rdi,rsi
0x00861d23: jae    0x140861d4d
0x00861d25: mov    rcx,QWORD PTR [rdi]
0x00861d28: mov    rax,QWORD PTR [rcx]
0x00861d2b: call   QWORD PTR [rax+0x90]
0x00861d31: cmp    rax,r15
0x00861d34: jne    0x140861d47
0x00861d36: mov    rcx,QWORD PTR [rbx]
0x00861d39: mov    rax,QWORD PTR [rcx]
0x00861d3c: mov    edx,0x8
0x00861d41: call   QWORD PTR [rax+0xf0]
0x00861d47: add    rdi,0x8
0x00861d4b: jmp    0x140861d20
0x00861d4d: mov    rdi,QWORD PTR [r13+0xa8]
0x00861d54: mov    rsi,QWORD PTR [r13+0xb0]
0x00861d5b: nop    DWORD PTR [rax+rax*1+0x0]
0x00861d60: cmp    rdi,rsi
0x00861d63: jae    0x140861d8d
0x00861d65: mov    rcx,QWORD PTR [rdi]
0x00861d68: mov    rax,QWORD PTR [rcx]
0x00861d6b: call   QWORD PTR [rax+0x90]
0x00861d71: cmp    rax,r15
0x00861d74: jne    0x140861d87
0x00861d76: mov    rcx,QWORD PTR [rbx]
0x00861d79: mov    rax,QWORD PTR [rcx]
0x00861d7c: mov    edx,0x10
0x00861d81: call   QWORD PTR [rax+0xf0]
0x00861d87: add    rdi,0x8
0x00861d8b: jmp    0x140861d60
0x00861d8d: mov    rdi,QWORD PTR [r13+0xc0]
0x00861d94: mov    rsi,QWORD PTR [r13+0xc8]
0x00861d9b: nop    DWORD PTR [rax+rax*1+0x0]
0x00861da0: cmp    rdi,rsi
0x00861da3: jae    0x140861dcd
0x00861da5: mov    rcx,QWORD PTR [rdi]
0x00861da8: mov    rax,QWORD PTR [rcx]
0x00861dab: call   QWORD PTR [rax+0x90]
0x00861db1: cmp    rax,r15
0x00861db4: jne    0x140861dc7
0x00861db6: mov    rcx,QWORD PTR [rbx]
0x00861db9: mov    rax,QWORD PTR [rcx]
0x00861dbc: mov    edx,0x20
0x00861dc1: call   QWORD PTR [rax+0xf0]
0x00861dc7: add    rdi,0x8
0x00861dcb: jmp    0x140861da0
0x00861dcd: mov    rdi,QWORD PTR [r13+0xd8]
0x00861dd4: mov    rsi,QWORD PTR [r13+0xe0]
0x00861ddb: nop    DWORD PTR [rax+rax*1+0x0]
0x00861de0: cmp    rdi,rsi
0x00861de3: jae    0x140861e0d
0x00861de5: mov    rcx,QWORD PTR [rdi]
0x00861de8: mov    rax,QWORD PTR [rcx]
0x00861deb: call   QWORD PTR [rax+0x90]
0x00861df1: cmp    rax,r15
0x00861df4: jne    0x140861e07
0x00861df6: mov    rcx,QWORD PTR [rbx]
0x00861df9: mov    rax,QWORD PTR [rcx]
0x00861dfc: mov    edx,0x40
0x00861e01: call   QWORD PTR [rax+0xf0]
0x00861e07: add    rdi,0x8
0x00861e0b: jmp    0x140861de0
0x00861e0d: add    rbx,0x8
0x00861e11: jmp    0x140861c40
0x00861e16: add    rsp,0xc8
0x00861e1d: pop    r15
0x00861e1f: pop    r14
0x00861e21: pop    r13
0x00861e23: pop    r12
0x00861e25: pop    rdi
0x00861e26: pop    rsi
0x00861e27: pop    rbx
0x00861e28: pop    rbp
0x00861e29: ret
0x00861e2a: xchg   ax,ax
