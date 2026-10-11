# reference PE:6a70a6d9:02711000; intelligence-search-filter; RVA 0x479330..0x479a1b
0x00479330: mov    QWORD PTR [rsp+0x10],rbx
0x00479335: mov    QWORD PTR [rsp+0x18],rsi
0x0047933a: mov    QWORD PTR [rsp+0x20],rdi
0x0047933f: push   rbp
0x00479340: push   r12
0x00479342: push   r13
0x00479344: push   r14
0x00479346: push   r15
0x00479348: lea    rbp,[rsp-0x37]
0x0047934d: sub    rsp,0xf0
0x00479354: mov    rax,QWORD PTR [rip+0x1422ce5]        # 0x14189c040
0x0047935b: xor    rax,rsp
0x0047935e: mov    QWORD PTR [rbp+0x27],rax
0x00479362: mov    r15,rcx
0x00479365: mov    QWORD PTR [rsp+0x38],rcx
0x0047936a: lea    rdi,[rcx+0x298]
0x00479371: xorps  xmm0,xmm0
0x00479374: movups XMMWORD PTR [rbp-0x79],xmm0
0x00479378: xor    r12d,r12d
0x0047937b: mov    QWORD PTR [rbp-0x69],r12
0x0047937f: mov    QWORD PTR [rbp-0x61],r12
0x00479383: mov    rsi,QWORD PTR [rdi+0x10]
0x00479387: cmp    QWORD PTR [rdi+0x18],0xf
0x0047938c: jbe    0x140479391
0x0047938e: mov    rdi,QWORD PTR [rdi]
0x00479391: movabs rbx,0x7fffffffffffffff
0x0047939b: cmp    rsi,rbx
0x0047939e: ja     0x140479a15
0x004793a4: cmp    rsi,0xf
0x004793a8: ja     0x1404793bf
0x004793aa: mov    QWORD PTR [rbp-0x69],rsi
0x004793ae: mov    QWORD PTR [rbp-0x61],0xf
0x004793b6: movups xmm0,XMMWORD PTR [rdi]
0x004793b9: movups XMMWORD PTR [rbp-0x79],xmm0
0x004793bd: jmp    0x1404793ff
0x004793bf: mov    rax,rsi
0x004793c2: or     rax,0xf
0x004793c6: cmp    rax,rbx
0x004793c9: ja     0x1404793da
0x004793cb: mov    rbx,rax
0x004793ce: mov    ecx,0x16
0x004793d3: cmp    rax,rcx
0x004793d6: cmovb  rbx,rcx
0x004793da: lea    rcx,[rbx+0x1]
0x004793de: call   0x1400707d0
0x004793e3: mov    QWORD PTR [rbp-0x79],rax
0x004793e7: mov    QWORD PTR [rbp-0x69],rsi
0x004793eb: mov    QWORD PTR [rbp-0x61],rbx
0x004793ef: lea    r8,[rsi+0x1]
0x004793f3: mov    rdx,rdi
0x004793f6: mov    rcx,rax
0x004793f9: call   0x14153aa78
0x004793fe: nop
0x004793ff: lea    rcx,[rbp-0x79]
0x00479403: call   0x14052cee0
0x00479408: mov    eax,DWORD PTR [r15+0x290]
0x0047940f: sub    eax,0x1
0x00479412: je     0x140479845
0x00479418: sub    eax,0x1
0x0047941b: je     0x140479682
0x00479421: cmp    eax,0x1
0x00479424: jne    0x1404799df
0x0047942a: lea    r8,[r15+0x300]
0x00479431: lea    rbx,[r15+0x348]
0x00479438: mov    QWORD PTR [rsp+0x20],rbx
0x0047943d: cmp    rbx,r8
0x00479440: je     0x140479458
0x00479442: mov    rdx,QWORD PTR [r8]
0x00479445: mov    r8,QWORD PTR [r8+0x8]
0x00479449: sub    r8,rdx
0x0047944c: sar    r8,0x3
0x00479450: mov    rcx,rbx
0x00479453: call   0x1400e16b0
0x00479458: mov    rdi,QWORD PTR [rbp-0x69]
0x0047945c: test   rdi,rdi
0x0047945f: je     0x14047962e
0x00479465: mov    r13,QWORD PTR [rbx+0x8]
0x00479469: sub    r13,QWORD PTR [rbx]
0x0047946c: sar    r13,0x3
0x00479470: sub    r13d,0x1
0x00479474: js     0x14047962e
0x0047947a: movsxd rax,r13d
0x0047947d: lea    rsi,[rax*8+0x0]
0x00479485: mov    QWORD PTR [rsp+0x30],rsi
0x0047948a: mov    QWORD PTR [rsp+0x28],rsi
0x0047948f: nop
0x00479490: mov    rdx,QWORD PTR [rbx]
0x00479493: mov    rdx,QWORD PTR [rsi+rdx*1]
0x00479497: lea    rcx,[rbp-0x39]
0x0047949b: call   0x14006f5d0
0x004794a0: nop
0x004794a1: lea    rcx,[rbp-0x39]
0x004794a5: call   0x14052cee0
0x004794aa: mov    rcx,QWORD PTR [rbx]
0x004794ad: mov    rdx,QWORD PTR [rsi+rcx*1]
0x004794b1: add    rdx,0x70
0x004794b5: lea    rcx,[rbp-0x59]
0x004794b9: call   0x14006f5d0
0x004794be: lea    rcx,[rbp-0x59]
0x004794c2: call   0x14052cee0
0x004794c7: lea    rsi,[rbp-0x79]
0x004794cb: cmp    QWORD PTR [rbp-0x61],0xf
0x004794d0: cmova  rsi,QWORD PTR [rbp-0x79]
0x004794d5: lea    r12,[rbp-0x39]
0x004794d9: cmp    QWORD PTR [rbp-0x21],0xf
0x004794de: cmova  r12,QWORD PTR [rbp-0x39]
0x004794e3: mov    rax,QWORD PTR [rbp-0x29]
0x004794e7: cmp    rdi,rax
0x004794ea: ja     0x140479549
0x004794ec: sub    rax,rdi
0x004794ef: lea    r14,[rax+r12*1]
0x004794f3: movsx  r15d,BYTE PTR [rsi]
0x004794f7: lea    r8,[r14+0x1]
0x004794fb: sub    r8,r12
0x004794fe: mov    edx,r15d
0x00479501: mov    rcx,r12
0x00479504: call   0x14153aa72
0x00479509: mov    rbx,rax
0x0047950c: test   rax,rax
0x0047950f: je     0x140479544
0x00479511: mov    r8,rdi
0x00479514: mov    rdx,rsi
0x00479517: mov    rcx,rbx
0x0047951a: call   0x14153ae14
0x0047951f: test   eax,eax
0x00479521: je     0x140479658
0x00479527: inc    rbx
0x0047952a: lea    r8,[r14+0x1]
0x0047952e: sub    r8,rbx
0x00479531: mov    edx,r15d
0x00479534: mov    rcx,rbx
0x00479537: call   0x14153aa72
0x0047953c: mov    rbx,rax
0x0047953f: test   rax,rax
0x00479542: jne    0x140479511
0x00479544: mov    rbx,QWORD PTR [rsp+0x20]
0x00479549: lea    rsi,[rbp-0x79]
0x0047954d: cmp    QWORD PTR [rbp-0x61],0xf
0x00479552: cmova  rsi,QWORD PTR [rbp-0x79]
0x00479557: lea    r14,[rbp-0x59]
0x0047955b: cmp    QWORD PTR [rbp-0x41],0xf
0x00479560: cmova  r14,QWORD PTR [rbp-0x59]
0x00479565: mov    rax,QWORD PTR [rbp-0x49]
0x00479569: cmp    rdi,rax
0x0047956c: ja     0x1404795d8
0x0047956e: sub    rax,rdi
0x00479571: lea    r15,[rax+r14*1]
0x00479575: movsx  r12d,BYTE PTR [rsi]
0x00479579: lea    r8,[r15+0x1]
0x0047957d: sub    r8,r14
0x00479580: mov    edx,r12d
0x00479583: mov    rcx,r14
0x00479586: call   0x14153aa72
0x0047958b: mov    rbx,rax
0x0047958e: test   rax,rax
0x00479591: je     0x1404795d3
0x00479593: nop    DWORD PTR [rax+0x0]
0x00479597: nop    WORD PTR [rax+rax*1+0x0]
0x004795a0: mov    r8,rdi
0x004795a3: mov    rdx,rsi
0x004795a6: mov    rcx,rbx
0x004795a9: call   0x14153ae14
0x004795ae: test   eax,eax
0x004795b0: je     0x14047966b
0x004795b6: inc    rbx
0x004795b9: lea    r8,[r15+0x1]
0x004795bd: sub    r8,rbx
0x004795c0: mov    edx,r12d
0x004795c3: mov    rcx,rbx
0x004795c6: call   0x14153aa72
0x004795cb: mov    rbx,rax
0x004795ce: test   rax,rax
0x004795d1: jne    0x1404795a0
0x004795d3: mov    rbx,QWORD PTR [rsp+0x20]
0x004795d8: mov    rcx,QWORD PTR [rsp+0x28]
0x004795dd: add    rcx,QWORD PTR [rbx]
0x004795e0: mov    r8,QWORD PTR [rbx+0x8]
0x004795e4: lea    rdx,[rcx+0x8]
0x004795e8: sub    r8,rdx
0x004795eb: call   0x14153ae1a
0x004795f0: add    QWORD PTR [rbx+0x8],0xfffffffffffffff8
0x004795f5: lea    rcx,[rbp-0x59]
0x004795f9: call   0x14006f850
0x004795fe: nop
0x004795ff: lea    rcx,[rbp-0x39]
0x00479603: call   0x14006f850
0x00479608: sub    QWORD PTR [rsp+0x28],0x8
0x0047960e: mov    rsi,QWORD PTR [rsp+0x30]
0x00479613: sub    rsi,0x8
0x00479617: mov    QWORD PTR [rsp+0x30],rsi
0x0047961c: sub    r13d,0x1
0x00479620: jns    0x140479490
0x00479626: mov    r15,QWORD PTR [rsp+0x38]
0x0047962b: xor    r12d,r12d
0x0047962e: mov    DWORD PTR [r15+0x294],r12d
0x00479635: mov    rax,QWORD PTR [rbx+0x8]
0x00479639: sub    rax,QWORD PTR [rbx]
0x0047963c: test   rax,0xfffffffffffffff8
0x00479642: jne    0x1404799df
0x00479648: mov    DWORD PTR [r15+0x294],0xffffffff
0x00479653: jmp    0x1404799df
0x00479658: sub    rbx,r12
0x0047965b: cmp    rbx,0xffffffffffffffff
0x0047965f: mov    rbx,QWORD PTR [rsp+0x20]
0x00479664: jne    0x1404795f5
0x00479666: jmp    0x140479549
0x0047966b: sub    rbx,r14
0x0047966e: cmp    rbx,0xffffffffffffffff
0x00479672: mov    rbx,QWORD PTR [rsp+0x20]
0x00479677: jne    0x1404795f5
0x0047967d: jmp    0x1404795d8
0x00479682: lea    r8,[r15+0x2e8]
0x00479689: lea    r13,[r15+0x330]
0x00479690: cmp    r13,r8
0x00479693: je     0x1404796ab
0x00479695: mov    rdx,QWORD PTR [r8]
0x00479698: mov    r8,QWORD PTR [r8+0x8]
0x0047969c: sub    r8,rdx
0x0047969f: sar    r8,0x3
0x004796a3: mov    rcx,r13
0x004796a6: call   0x1400e16b0
0x004796ab: mov    r14,QWORD PTR [rbp-0x69]
0x004796af: test   r14,r14
0x004796b2: je     0x1404797e8
0x004796b8: mov    rsi,QWORD PTR [r13+0x8]
0x004796bc: sub    rsi,QWORD PTR [r13+0x0]
0x004796c0: sar    rsi,0x3
0x004796c4: sub    esi,0x1
0x004796c7: js     0x1404797e8
0x004796cd: movsxd rax,esi
0x004796d0: lea    rcx,[rax*8+0x0]
0x004796d8: mov    QWORD PTR [rsp+0x30],rcx
0x004796dd: mov    QWORD PTR [rsp+0x28],rcx
0x004796e2: nop    DWORD PTR [rax+0x0]
0x004796e6: data16 nop WORD PTR [rax+rax*1+0x0]
0x004796f0: mov    rax,QWORD PTR [r13+0x0]
0x004796f4: mov    rdx,QWORD PTR [rax+rcx*1]
0x004796f8: add    rdx,0x18
0x004796fc: lea    rcx,[rbp-0x19]
0x00479700: call   0x14006f5d0
0x00479705: lea    rcx,[rbp-0x19]
0x00479709: call   0x14052cee0
0x0047970e: lea    rdi,[rbp-0x79]
0x00479712: cmp    QWORD PTR [rbp-0x61],0xf
0x00479717: cmova  rdi,QWORD PTR [rbp-0x79]
0x0047971c: lea    rax,[rbp-0x19]
0x00479720: cmp    QWORD PTR [rbp-0x1],0xf
0x00479725: cmova  rax,QWORD PTR [rbp-0x19]
0x0047972a: mov    QWORD PTR [rsp+0x20],rax
0x0047972f: mov    rcx,QWORD PTR [rbp-0x9]
0x00479733: cmp    r14,rcx
0x00479736: ja     0x14047979c
0x00479738: sub    rcx,r14
0x0047973b: lea    r15,[rcx+rax*1]
0x0047973f: movsx  r12d,BYTE PTR [rdi]
0x00479743: lea    r8,[r15+0x1]
0x00479747: sub    r8,rax
0x0047974a: mov    edx,r12d
0x0047974d: mov    rcx,rax
0x00479750: call   0x14153aa72
0x00479755: mov    rbx,rax
0x00479758: test   rax,rax
0x0047975b: je     0x14047979c
0x0047975d: nop    DWORD PTR [rax]
0x00479760: mov    r8,r14
0x00479763: mov    rdx,rdi
0x00479766: mov    rcx,rbx
0x00479769: call   0x14153ae14
0x0047976e: test   eax,eax
0x00479770: je     0x140479791
0x00479772: inc    rbx
0x00479775: lea    r8,[r15+0x1]
0x00479779: sub    r8,rbx
0x0047977c: mov    edx,r12d
0x0047977f: mov    rcx,rbx
0x00479782: call   0x14153aa72
0x00479787: mov    rbx,rax
0x0047978a: test   rax,rax
0x0047978d: jne    0x140479760
0x0047978f: jmp    0x14047979c
0x00479791: sub    rbx,QWORD PTR [rsp+0x20]
0x00479796: cmp    rbx,0xffffffffffffffff
0x0047979a: jne    0x1404797ba
0x0047979c: mov    rcx,QWORD PTR [rsp+0x28]
0x004797a1: add    rcx,QWORD PTR [r13+0x0]
0x004797a5: mov    r8,QWORD PTR [r13+0x8]
0x004797a9: lea    rdx,[rcx+0x8]
0x004797ad: sub    r8,rdx
0x004797b0: call   0x14153ae1a
0x004797b5: add    QWORD PTR [r13+0x8],0xfffffffffffffff8
0x004797ba: lea    rcx,[rbp-0x19]
0x004797be: call   0x14006f850
0x004797c3: sub    QWORD PTR [rsp+0x28],0x8
0x004797c9: mov    rcx,QWORD PTR [rsp+0x30]
0x004797ce: sub    rcx,0x8
0x004797d2: mov    QWORD PTR [rsp+0x30],rcx
0x004797d7: sub    esi,0x1
0x004797da: jns    0x1404796f0
0x004797e0: mov    r15,QWORD PTR [rsp+0x38]
0x004797e5: xor    r12d,r12d
0x004797e8: mov    DWORD PTR [r15+0x294],r12d
0x004797ef: mov    rbx,QWORD PTR [r15+0x330]
0x004797f6: mov    rax,QWORD PTR [r15+0x338]
0x004797fd: sub    rax,rbx
0x00479800: sar    rax,0x3
0x00479804: test   rax,rax
0x00479807: je     0x140479648
0x0047980d: mov    rbx,QWORD PTR [rbx]
0x00479810: mov    rcx,rbx
0x00479813: call   0x1400d1650
0x00479818: mov    QWORD PTR [r15+0x2c0],r12
0x0047981f: mov    rcx,QWORD PTR [rbx]
0x00479822: mov    rax,QWORD PTR [rbx+0x8]
0x00479826: sub    rax,rcx
0x00479829: sar    rax,0x3
0x0047982d: test   rax,rax
0x00479830: je     0x1404799df
0x00479836: mov    rax,QWORD PTR [rcx]
0x00479839: mov    QWORD PTR [r15+0x2c0],rax
0x00479840: jmp    0x1404799df
0x00479845: lea    r8,[r15+0x2d0]
0x0047984c: lea    rdi,[r15+0x318]
0x00479853: mov    QWORD PTR [rsp+0x30],rdi
0x00479858: cmp    rdi,r8
0x0047985b: je     0x140479873
0x0047985d: mov    rdx,QWORD PTR [r8]
0x00479860: mov    r8,QWORD PTR [r8+0x8]
0x00479864: sub    r8,rdx
0x00479867: sar    r8,0x3
0x0047986b: mov    rcx,rdi
0x0047986e: call   0x1400e16b0
0x00479873: mov    r14,QWORD PTR [rbp-0x69]
0x00479877: test   r14,r14
0x0047987a: je     0x1404799b1
0x00479880: mov    rsi,QWORD PTR [rdi+0x8]
0x00479884: sub    rsi,QWORD PTR [rdi]
0x00479887: sar    rsi,0x3
0x0047988b: sub    esi,0x1
0x0047988e: js     0x1404799b1
0x00479894: movsxd rax,esi
0x00479897: lea    rcx,[rax*8+0x0]
0x0047989f: mov    QWORD PTR [rsp+0x20],rcx
0x004798a4: mov    QWORD PTR [rsp+0x28],rcx
0x004798a9: nop    DWORD PTR [rax+0x0]
0x004798b0: mov    rax,QWORD PTR [rdi]
0x004798b3: mov    rdx,QWORD PTR [rcx+rax*1]
0x004798b7: add    rdx,0x18
0x004798bb: lea    rcx,[rbp+0x7]
0x004798bf: call   0x14006f5d0
0x004798c4: lea    rcx,[rbp+0x7]
0x004798c8: call   0x14052cee0
0x004798cd: lea    rdi,[rbp-0x79]
0x004798d1: cmp    QWORD PTR [rbp-0x61],0xf
0x004798d6: cmova  rdi,QWORD PTR [rbp-0x79]
0x004798db: lea    r13,[rbp+0x7]
0x004798df: cmp    QWORD PTR [rbp+0x1f],0xf
0x004798e4: cmova  r13,QWORD PTR [rbp+0x7]
0x004798e9: mov    rax,QWORD PTR [rbp+0x17]
0x004798ed: cmp    r14,rax
0x004798f0: ja     0x14047995a
0x004798f2: sub    rax,r14
0x004798f5: lea    r15,[rax+r13*1]
0x004798f9: movsx  r12d,BYTE PTR [rdi]
0x004798fd: lea    r8,[r15+0x1]
0x00479901: sub    r8,r13
0x00479904: mov    edx,r12d
0x00479907: mov    rcx,r13
0x0047990a: call   0x14153aa72
0x0047990f: mov    rbx,rax
0x00479912: test   rax,rax
0x00479915: je     0x14047995a
0x00479917: nop    WORD PTR [rax+rax*1+0x0]
0x00479920: mov    r8,r14
0x00479923: mov    rdx,rdi
0x00479926: mov    rcx,rbx
0x00479929: call   0x14153ae14
0x0047992e: test   eax,eax
0x00479930: je     0x140479951
0x00479932: inc    rbx
0x00479935: lea    r8,[r15+0x1]
0x00479939: sub    r8,rbx
0x0047993c: mov    edx,r12d
0x0047993f: mov    rcx,rbx
0x00479942: call   0x14153aa72
0x00479947: mov    rbx,rax
0x0047994a: test   rax,rax
0x0047994d: jne    0x140479920
0x0047994f: jmp    0x14047995a
0x00479951: sub    rbx,r13
0x00479954: cmp    rbx,0xffffffffffffffff
0x00479958: jne    0x14047997e
0x0047995a: mov    rdi,QWORD PTR [rsp+0x30]
0x0047995f: mov    rcx,QWORD PTR [rsp+0x28]
0x00479964: add    rcx,QWORD PTR [rdi]
0x00479967: mov    r8,QWORD PTR [rdi+0x8]
0x0047996b: lea    rdx,[rcx+0x8]
0x0047996f: sub    r8,rdx
0x00479972: call   0x14153ae1a
0x00479977: add    QWORD PTR [rdi+0x8],0xfffffffffffffff8
0x0047997c: jmp    0x140479983
0x0047997e: mov    rdi,QWORD PTR [rsp+0x30]
0x00479983: lea    rcx,[rbp+0x7]
0x00479987: call   0x14006f850
0x0047998c: sub    QWORD PTR [rsp+0x28],0x8
0x00479992: mov    rcx,QWORD PTR [rsp+0x20]
0x00479997: sub    rcx,0x8
0x0047999b: mov    QWORD PTR [rsp+0x20],rcx
0x004799a0: sub    esi,0x1
0x004799a3: jns    0x1404798b0
0x004799a9: mov    r15,QWORD PTR [rsp+0x38]
0x004799ae: xor    r12d,r12d
0x004799b1: mov    DWORD PTR [r15+0x294],r12d
0x004799b8: mov    rcx,QWORD PTR [r15+0x318]
0x004799bf: mov    rax,QWORD PTR [r15+0x320]
0x004799c6: sub    rax,rcx
0x004799c9: sar    rax,0x3
0x004799cd: test   rax,rax
0x004799d0: je     0x140479648
0x004799d6: mov    rcx,QWORD PTR [rcx]
0x004799d9: call   0x1400d1840
0x004799de: nop
0x004799df: lea    rcx,[rbp-0x79]
0x004799e3: call   0x14006f850
0x004799e8: mov    rcx,QWORD PTR [rbp+0x27]
0x004799ec: xor    rcx,rsp
0x004799ef: call   0x141539660
0x004799f4: lea    r11,[rsp+0xf0]
0x004799fc: mov    rbx,QWORD PTR [r11+0x38]
0x00479a00: mov    rsi,QWORD PTR [r11+0x40]
0x00479a04: mov    rdi,QWORD PTR [r11+0x48]
0x00479a08: mov    rsp,r11
0x00479a0b: pop    r15
0x00479a0d: pop    r14
0x00479a0f: pop    r13
0x00479a11: pop    r12
0x00479a13: pop    rbp
0x00479a14: ret
0x00479a15: call   0x140065890
0x00479a1a: int3
