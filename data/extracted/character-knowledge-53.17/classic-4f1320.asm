; classic PE:6aea11a5:0272d000; dance-movement-description; RVA 0x4f1320..0x4f2144; code ends 0x4f2004
0x004f1320: mov    QWORD PTR [rsp+0x18],rbx
0x004f1325: push   rbp
0x004f1326: push   rsi
0x004f1327: push   rdi
0x004f1328: push   r12
0x004f132a: push   r13
0x004f132c: push   r14
0x004f132e: push   r15
0x004f1330: sub    rsp,0xa0
0x004f1337: mov    rax,QWORD PTR [rip+0x13c6d02]        # 0x1418b8040
0x004f133e: xor    rax,rsp
0x004f1341: mov    QWORD PTR [rsp+0x90],rax
0x004f1349: mov    ebx,r9d
0x004f134c: mov    edi,r8d
0x004f134f: mov    r14,rdx
0x004f1352: mov    rsi,rcx
0x004f1355: mov    eax,DWORD PTR [rdx+0x80]
0x004f135b: test   al,0x1
0x004f135d: je     0x1404f139c
0x004f135f: mov    r8d,0xb
0x004f1365: lea    rdx,[rip+0x116eb7c]        # 0x14165fee8 ; literal="called the "
0x004f136c: call   0x140070fd0
0x004f1371: mov    rdx,r14
0x004f1374: cmp    QWORD PTR [r14+0x18],0xf
0x004f1379: jbe    0x1404f137e
0x004f137b: mov    rdx,QWORD PTR [r14]
0x004f137e: mov    r8,QWORD PTR [r14+0x10]
0x004f1382: mov    rcx,rsi
0x004f1385: call   0x140070fd0
0x004f138a: mov    r8d,0x3
0x004f1390: lea    rdx,[rip+0x11232e9]        # 0x141614680 ; literal=".  "
0x004f1397: jmp    0x1404f1441
0x004f139c: test   al,0x4
0x004f139e: je     0x1404f13f1
0x004f13a0: mov    r8d,0x4
0x004f13a6: lea    rdx,[rip+0x1112887]        # 0x141603c34 ; literal="The "
0x004f13ad: call   0x140070fd0
0x004f13b2: mov    rdx,r14
0x004f13b5: cmp    QWORD PTR [r14+0x18],0xf
0x004f13ba: jbe    0x1404f13bf
0x004f13bc: mov    rdx,QWORD PTR [r14]
0x004f13bf: mov    r8,QWORD PTR [r14+0x10]
0x004f13c3: mov    rcx,rsi
0x004f13c6: call   0x140070fd0
0x004f13cb: mov    eax,0x29
0x004f13d0: mov    r8d,0x1e
0x004f13d6: cmp    ebx,0x1
0x004f13d9: cmovg  r8d,eax
0x004f13dd: lea    rax,[rip+0x116eb34]        # 0x14165ff18 ; literal=" is one of the fundamental dance moves.  "
0x004f13e4: lea    rdx,[rip+0x116eb0d]        # 0x14165fef8 ; literal=" the fundamental dance move.  "
0x004f13eb: cmovg  rdx,rax
0x004f13ef: jmp    0x1404f1441
0x004f13f1: test   al,0x2
0x004f13f3: je     0x1404f1449
0x004f13f5: mov    r8d,0x4
0x004f13fb: lea    rdx,[rip+0x1112832]        # 0x141603c34 ; literal="The "
0x004f1402: call   0x140070fd0
0x004f1407: mov    rdx,r14
0x004f140a: cmp    QWORD PTR [r14+0x18],0xf
0x004f140f: jbe    0x1404f1414
0x004f1411: mov    rdx,QWORD PTR [r14]
0x004f1414: mov    r8,QWORD PTR [r14+0x10]
0x004f1418: mov    rcx,rsi
0x004f141b: call   0x140070fd0
0x004f1420: cmp    edi,0x1
0x004f1423: jg     0x1404f1434
0x004f1425: mov    r8d,0x22
0x004f142b: lea    rdx,[rip+0x116eb16]        # 0x14165ff48 ; literal=" the fundamental dance position.  "
0x004f1432: jmp    0x1404f1441
0x004f1434: mov    r8d,0x2d
0x004f143a: lea    rdx,[rip+0x116eb2f]        # 0x14165ff70 ; literal=" is one of the fundamental dance positions.  "
0x004f1441: mov    rcx,rsi
0x004f1444: call   0x140070fd0
0x004f1449: mov    r8d,0x1
0x004f144f: xor    r9d,r9d
0x004f1452: mov    DWORD PTR [rsp+0x68],r9d
0x004f1457: mov    edx,r9d
0x004f145a: mov    rax,QWORD PTR [r14+0x68]
0x004f145e: mov    rcx,QWORD PTR [r14+0x70]
0x004f1462: mov    r13d,r8d
0x004f1465: cmp    rax,rcx
0x004f1468: jae    0x1404f1482
0x004f146a: test   BYTE PTR [rax],0x2
0x004f146d: je     0x1404f147a
0x004f146f: mov    DWORD PTR [rsp+r13*4+0x68],edx
0x004f1474: inc    r8d
0x004f1477: inc    r13
0x004f147a: add    rax,0x4
0x004f147e: inc    edx
0x004f1480: jmp    0x1404f1465
0x004f1482: mov    DWORD PTR [rsp+0x24],r8d
0x004f1487: movsxd rax,r8d
0x004f148a: mov    DWORD PTR [rsp+rax*4+0x68],edx
0x004f148e: mov    ecx,r9d
0x004f1491: mov    DWORD PTR [rsp+0x20],ecx
0x004f1495: test   r13,r13
0x004f1498: jle    0x1404f1fd9
0x004f149e: mov    rbx,r9
0x004f14a1: lea    r9,[rip+0x116c63c]        # 0x14165dae4 ; literal="there"
0x004f14a8: mov    ebp,DWORD PTR [rsp+0x28]
0x004f14ac: nop    DWORD PTR [rax+0x0]
0x004f14b0: cmp    r13,0x2
0x004f14b4: jl     0x1404f1503
0x004f14b6: test   rbx,rbx
0x004f14b9: jne    0x1404f14ca
0x004f14bb: mov    r8d,0x7
0x004f14c1: lea    rdx,[rip+0x116ed00]        # 0x1416601c8 ; literal="First, "
0x004f14c8: jmp    0x1404f14f4
0x004f14ca: cmp    r13,0x2
0x004f14ce: je     0x1404f14e7
0x004f14d0: lea    eax,[r8-0x1]
0x004f14d4: cmp    ecx,eax
0x004f14d6: jl     0x1404f14e7
0x004f14d8: mov    r8d,0x9
0x004f14de: lea    rdx,[rip+0x116ecf3]        # 0x1416601d8 ; literal="Finally, "
0x004f14e5: jmp    0x1404f14f4
0x004f14e7: mov    r8d,0x5
0x004f14ed: lea    rdx,[rip+0x116ecdc]        # 0x1416601d0 ; literal="Then "
0x004f14f4: mov    rcx,rsi
0x004f14f7: call   0x140070fd0
0x004f14fc: lea    r9,[rip+0x116c5e1]        # 0x14165dae4 ; literal="there"
0x004f1503: movsxd rdx,DWORD PTR [rsp+rbx*4+0x68]
0x004f1508: mov    DWORD PTR [rsp+0x2c],edx
0x004f150c: lea    rax,[rbx+0x1]
0x004f1510: mov    rbx,rax
0x004f1513: mov    QWORD PTR [rsp+0x40],rax
0x004f1518: mov    ecx,DWORD PTR [rsp+rax*4+0x68]
0x004f151c: dec    ecx
0x004f151e: mov    DWORD PTR [rsp+0x28],ecx
0x004f1522: mov    r12d,edx
0x004f1525: mov    r15,rdx
0x004f1528: mov    rax,rdx
0x004f152b: mov    QWORD PTR [rsp+0x38],rdx
0x004f1530: movsxd rdi,ecx
0x004f1533: mov    QWORD PTR [rsp+0x30],rdi
0x004f1538: cmp    rdx,rdi
0x004f153b: jg     0x1404f1fa5
0x004f1541: xor    bl,bl
0x004f1543: cmp    r15,rax
0x004f1546: jne    0x1404f1593
0x004f1548: lea    rdx,[rip+0x116ec95]        # 0x1416601e4 ; literal="There"
0x004f154f: cmp    r13,0x1
0x004f1553: cmovne rdx,r9
0x004f1557: mov    r8d,0x5
0x004f155d: mov    rcx,rsi
0x004f1560: call   0x140070fd0
0x004f1565: mov    rcx,rsi
0x004f1568: test   BYTE PTR [r14+0x80],0x2
0x004f1570: je     0x1404f1581
0x004f1572: mov    r8d,0xa
0x004f1578: lea    rdx,[rip+0x116ec71]        # 0x1416601f0 ; literal=" should be"
0x004f157f: jmp    0x1404f158e
0x004f1581: mov    r8d,0x3
0x004f1587: lea    rdx,[rip+0x111385e]        # 0x141604dec ; literal=" is"
0x004f158e: call   0x140070fd0
0x004f1593: mov    rax,QWORD PTR [r14+0x20]
0x004f1597: movsxd rcx,DWORD PTR [rax+r15*4]
0x004f159b: cmp    ecx,0x21
0x004f159e: ja     0x1404f15b0
0x004f15a0: movabs rax,0x30400001f
0x004f15aa: bt     rax,rcx
0x004f15ae: jb     0x1404f15c7
0x004f15b0: mov    r8d,0x2
0x004f15b6: lea    rdx,[rip+0x116ec3f]        # 0x1416601fc ; literal=" a"
0x004f15bd: mov    rcx,rsi
0x004f15c0: call   0x140070fd0
0x004f15c5: mov    bl,0x1
0x004f15c7: mov    rcx,QWORD PTR [r14+0x20]
0x004f15cb: mov    edx,DWORD PTR [rcx+r15*4]
0x004f15cf: test   edx,edx
0x004f15d1: je     0x1404f15e7
0x004f15d3: sub    edx,0x1
0x004f15d6: je     0x1404f15e7
0x004f15d8: sub    edx,0x1
0x004f15db: je     0x1404f15e7
0x004f15dd: sub    edx,0x1
0x004f15e0: je     0x1404f15e7
0x004f15e2: cmp    edx,0x1
0x004f15e5: jne    0x1404f1657
0x004f15e7: mov    r8d,0xd
0x004f15ed: lea    rdx,[rip+0x116ec0c]        # 0x141660200 ; literal=" a series of "
0x004f15f4: mov    rcx,rsi
0x004f15f7: call   0x140070fd0
0x004f15fc: xorps  xmm0,xmm0
0x004f15ff: movups XMMWORD PTR [rsp+0x48],xmm0
0x004f1604: mov    QWORD PTR [rsp+0x58],0x0
0x004f160d: mov    QWORD PTR [rsp+0x60],0xf
0x004f1616: mov    BYTE PTR [rsp+0x48],0x0
0x004f161b: mov    rcx,QWORD PTR [r14+0x50]
0x004f161f: lea    rdx,[rsp+0x48]
0x004f1624: mov    ecx,DWORD PTR [rcx+r15*4]
0x004f1628: call   0x140545040
0x004f162d: lea    rdx,[rsp+0x48]
0x004f1632: cmp    QWORD PTR [rsp+0x60],0xf
0x004f1638: cmova  rdx,QWORD PTR [rsp+0x48]
0x004f163e: mov    r8,QWORD PTR [rsp+0x58]
0x004f1643: mov    rcx,rsi
0x004f1646: call   0x140070fd0
0x004f164b: xor    bl,bl
0x004f164d: lea    rcx,[rsp+0x48]
0x004f1652: call   0x140070e10
0x004f1657: mov    rax,QWORD PTR [r14+0x38]
0x004f165b: movsxd rcx,DWORD PTR [rax+r15*4]
0x004f165f: lea    rdi,[rip+0xffffffffffb0e99a]        # 0x140000000
0x004f1666: cmp    ecx,0x2d
0x004f1669: ja     0x1404f1a3d
0x004f166f: mov    ecx,DWORD PTR [rdi+rcx*4+0x4f2004]
0x004f1676: add    rcx,rdi
0x004f1679: jmp    rcx
0x004f167b: mov    r8d,0x9
0x004f1681: lea    rdx,[rip+0x116eb88]        # 0x141660210 ; literal=" graceful"
0x004f1688: jmp    0x1404f1a35
0x004f168d: mov    r8d,0x7
0x004f1693: lea    rdx,[rip+0x116eb86]        # 0x141660220 ; literal=" serene"
0x004f169a: jmp    0x1404f1a35
0x004f169f: mov    r8d,0x5
0x004f16a5: lea    rdx,[rip+0x116eb7c]        # 0x141660228 ; literal=" calm"
0x004f16ac: jmp    0x1404f1a35
0x004f16b1: mov    r8d,0xa
0x004f16b7: lea    rdx,[rip+0x116eb72]        # 0x141660230 ; literal=" grotesque"
0x004f16be: jmp    0x1404f1a35
0x004f16c3: mov    r8d,0x6
0x004f16c9: lea    rdx,[rip+0x116eb6c]        # 0x14166023c ; literal=" crude"
0x004f16d0: jmp    0x1404f1a35
0x004f16d5: lea    rdx,[rip+0x116eb6c]        # 0x141660248 ; literal=" refined"
0x004f16dc: jmp    0x1404f1a2f
0x004f16e1: test   bl,bl
0x004f16e3: je     0x1404f16fa
0x004f16e5: mov    r8d,0x1
0x004f16eb: lea    rdx,[rip+0x116eb62]        # 0x141660254 ; literal="n"
0x004f16f2: mov    rcx,rsi
0x004f16f5: call   0x140070fd0
0x004f16fa: mov    r8d,0xc
0x004f1700: lea    rdx,[rip+0x116eb51]        # 0x141660258 ; literal=" understated"
0x004f1707: jmp    0x1404f1a35
0x004f170c: mov    r8d,0x9
0x004f1712: lea    rdx,[rip+0x116eb4f]        # 0x141660268 ; literal=" delicate"
0x004f1719: jmp    0x1404f1a35
0x004f171e: test   bl,bl
0x004f1720: je     0x1404f1737
0x004f1722: mov    r8d,0x1
0x004f1728: lea    rdx,[rip+0x116eb25]        # 0x141660254 ; literal="n"
0x004f172f: mov    rcx,rsi
0x004f1732: call   0x140070fd0
0x004f1737: mov    r8d,0xa
0x004f173d: lea    rdx,[rip+0x116eb34]        # 0x141660278 ; literal=" elaborate"
0x004f1744: jmp    0x1404f1a35
0x004f1749: test   bl,bl
0x004f174b: je     0x1404f1762
0x004f174d: mov    r8d,0x1
0x004f1753: lea    rdx,[rip+0x116eafa]        # 0x141660254 ; literal="n"
0x004f175a: mov    rcx,rsi
0x004f175d: call   0x140070fd0
0x004f1762: mov    r8d,0xb
0x004f1768: lea    rdx,[rip+0x116eb19]        # 0x141660288 ; literal=" expressive"
0x004f176f: jmp    0x1404f1a35
0x004f1774: mov    r8d,0x7
0x004f177a: lea    rdx,[rip+0x116eb17]        # 0x141660298 ; literal=" strong"
0x004f1781: jmp    0x1404f1a35
0x004f1786: mov    r8d,0x6
0x004f178c: lea    rdx,[rip+0x116eb0d]        # 0x1416602a0 ; literal=" large"
0x004f1793: jmp    0x1404f1a35
0x004f1798: mov    r8d,0xb
0x004f179e: lea    rdx,[rip+0x116eb03]        # 0x1416602a8 ; literal=" weightless"
0x004f17a5: jmp    0x1404f1a35
0x004f17aa: mov    r8d,0x6
0x004f17b0: lea    rdx,[rip+0x116eafd]        # 0x1416602b4 ; literal=" fluid"
0x004f17b7: jmp    0x1404f1a35
0x004f17bc: test   bl,bl
0x004f17be: je     0x1404f17d5
0x004f17c0: mov    r8d,0x1
0x004f17c6: lea    rdx,[rip+0x116ea87]        # 0x141660254 ; literal="n"
0x004f17cd: mov    rcx,rsi
0x004f17d0: call   0x140070fd0
0x004f17d5: mov    r8d,0xb
0x004f17db: lea    rdx,[rip+0x116eade]        # 0x1416602c0 ; literal=" undulating"
0x004f17e2: jmp    0x1404f1a35
0x004f17e7: mov    r8d,0x5
0x004f17ed: lea    rdx,[rip+0x116ead8]        # 0x1416602cc ; literal=" soft"
0x004f17f4: jmp    0x1404f1a35
0x004f17f9: lea    rdx,[rip+0x116ead8]        # 0x1416602d8 ; literal=" jerking"
0x004f1800: jmp    0x1404f1a2f
0x004f1805: mov    r8d,0xc
0x004f180b: lea    rdx,[rip+0x116ead6]        # 0x1416602e8 ; literal=" sharp-edged"
0x004f1812: jmp    0x1404f1a35
0x004f1817: mov    r8d,0xf
0x004f181d: lea    rdx,[rip+0x116ead4]        # 0x1416602f8 ; literal=" straight-lined"
0x004f1824: jmp    0x1404f1a35
0x004f1829: mov    r8d,0x5
0x004f182f: lea    rdx,[rip+0x116ead2]        # 0x141660308 ; literal=" high"
0x004f1836: jmp    0x1404f1a35
0x004f183b: mov    r8d,0x4
0x004f1841: lea    rdx,[rip+0x116eac8]        # 0x141660310 ; literal=" low"
0x004f1848: jmp    0x1404f1a35
0x004f184d: mov    r8d,0x12
0x004f1853: lea    rdx,[rip+0x116eabe]        # 0x141660318 ; literal=" loudly percussive"
0x004f185a: jmp    0x1404f1a35
0x004f185f: mov    r8d,0x12
0x004f1865: lea    rdx,[rip+0x116eac4]        # 0x141660330 ; literal=" softly percussive"
0x004f186c: jmp    0x1404f1a35
0x004f1871: test   bl,bl
0x004f1873: je     0x1404f188a
0x004f1875: mov    r8d,0x1
0x004f187b: lea    rdx,[rip+0x116e9d2]        # 0x141660254 ; literal="n"
0x004f1882: mov    rcx,rsi
0x004f1885: call   0x140070fd0
0x004f188a: lea    rdx,[rip+0x116eab7]        # 0x141660348 ; literal=" aborted"
0x004f1891: jmp    0x1404f1a2f
0x004f1896: mov    r8d,0x13
0x004f189c: lea    rdx,[rip+0x116e6fd]        # 0x14165ffa0 ; literal=" partially realized"
0x004f18a3: jmp    0x1404f1a35
0x004f18a8: test   bl,bl
0x004f18aa: je     0x1404f18c1
0x004f18ac: mov    r8d,0x1
0x004f18b2: lea    rdx,[rip+0x116e99b]        # 0x141660254 ; literal="n"
0x004f18b9: mov    rcx,rsi
0x004f18bc: call   0x140070fd0
0x004f18c1: mov    r8d,0xa
0x004f18c7: lea    rdx,[rip+0x116e6ea]        # 0x14165ffb8 ; literal=" energetic"
0x004f18ce: jmp    0x1404f1a35
0x004f18d3: mov    r8d,0xb
0x004f18d9: lea    rdx,[rip+0x116e6e8]        # 0x14165ffc8 ; literal=" passionate"
0x004f18e0: jmp    0x1404f1a35
0x004f18e5: mov    r8d,0xa
0x004f18eb: lea    rdx,[rip+0x116e6e6]        # 0x14165ffd8 ; literal=" vivacious"
0x004f18f2: jmp    0x1404f1a35
0x004f18f7: mov    r8d,0x7
0x004f18fd: lea    rdx,[rip+0x116e6e4]        # 0x14165ffe8 ; literal=" joyous"
0x004f1904: jmp    0x1404f1a35
0x004f1909: mov    r8d,0x6
0x004f190f: lea    rdx,[rip+0x116e6da]        # 0x14165fff0 ; literal=" proud"
0x004f1916: jmp    0x1404f1a35
0x004f191b: mov    r8d,0xb
0x004f1921: lea    rdx,[rip+0x116e6d0]        # 0x14165fff8 ; literal=" flamboyant"
0x004f1928: jmp    0x1404f1a35
0x004f192d: mov    r8d,0x7
0x004f1933: lea    rdx,[rip+0x116e6ce]        # 0x141660008 ; literal=" lively"
0x004f193a: jmp    0x1404f1a35
0x004f193f: mov    r8d,0x9
0x004f1945: lea    rdx,[rip+0x116e6c4]        # 0x141660010 ; literal=" spirited"
0x004f194c: jmp    0x1404f1a35
0x004f1951: mov    r8d,0x9
0x004f1957: lea    rdx,[rip+0x116e6c2]        # 0x141660020 ; literal=" vigorous"
0x004f195e: jmp    0x1404f1a35
0x004f1963: test   bl,bl
0x004f1965: je     0x1404f197c
0x004f1967: mov    r8d,0x1
0x004f196d: lea    rdx,[rip+0x116e8e0]        # 0x141660254 ; literal="n"
0x004f1974: mov    rcx,rsi
0x004f1977: call   0x140070fd0
0x004f197c: lea    rdx,[rip+0x116e6ad]        # 0x141660030 ; literal=" intense"
0x004f1983: jmp    0x1404f1a2f
0x004f1988: test   bl,bl
0x004f198a: je     0x1404f19a1
0x004f198c: mov    r8d,0x1
0x004f1992: lea    rdx,[rip+0x116e8bb]        # 0x141660254 ; literal="n"
0x004f1999: mov    rcx,rsi
0x004f199c: call   0x140070fd0
0x004f19a1: mov    r8d,0xb
0x004f19a7: lea    rdx,[rip+0x116e692]        # 0x141660040 ; literal=" aggressive"
0x004f19ae: jmp    0x1404f1a35
0x004f19b3: mov    r8d,0x9
0x004f19b9: lea    rdx,[rip+0x116e690]        # 0x141660050 ; literal=" powerful"
0x004f19c0: jmp    0x1404f1a35
0x004f19c2: mov    r8d,0x9
0x004f19c8: lea    rdx,[rip+0x116e691]        # 0x141660060 ; literal=" sluggish"
0x004f19cf: jmp    0x1404f1a35
0x004f19d1: lea    rdx,[rip+0x116e698]        # 0x141660070 ; literal=" relaxed"
0x004f19d8: jmp    0x1404f1a2f
0x004f19da: lea    rdx,[rip+0x116e69f]        # 0x141660080 ; literal=" passive"
0x004f19e1: jmp    0x1404f1a2f
0x004f19e3: mov    r8d,0x7
0x004f19e9: lea    rdx,[rip+0x116e6a0]        # 0x141660090 ; literal=" subtle"
0x004f19f0: jmp    0x1404f1a35
0x004f19f2: lea    rdx,[rip+0x116e69f]        # 0x141660098 ; literal=" sensual"
0x004f19f9: jmp    0x1404f1a2f
0x004f19fb: mov    r8d,0xa
0x004f1a01: lea    rdx,[rip+0x116e6a0]        # 0x1416600a8 ; literal=" debauched"
0x004f1a08: jmp    0x1404f1a35
0x004f1a0a: mov    r8d,0x9
0x004f1a10: lea    rdx,[rip+0x116e6a1]        # 0x1416600b8 ; literal=" twisting"
0x004f1a17: jmp    0x1404f1a35
0x004f1a19: mov    r8d,0xa
0x004f1a1f: lea    rdx,[rip+0x116e6a2]        # 0x1416600c8 ; literal=" sprightly"
0x004f1a26: jmp    0x1404f1a35
0x004f1a28: lea    rdx,[rip+0x116e6a9]        # 0x1416600d8 ; literal=" sinuous"
0x004f1a2f: mov    r8d,0x8
0x004f1a35: mov    rcx,rsi
0x004f1a38: call   0x140070fd0
0x004f1a3d: mov    rax,QWORD PTR [r14+0x38]
0x004f1a41: movzx  r8d,bl
0x004f1a45: cmp    DWORD PTR [rax+r15*4],0xffffffff
0x004f1a4a: mov    ebx,0x0
0x004f1a4f: cmovne r8d,ebx
0x004f1a53: mov    rcx,QWORD PTR [r14+0x20]
0x004f1a57: mov    edx,DWORD PTR [rcx+r15*4]
0x004f1a5b: sub    edx,0x6
0x004f1a5e: je     0x1404f1a94
0x004f1a60: sub    edx,0x7
0x004f1a63: je     0x1404f1a73
0x004f1a65: sub    edx,0x1
0x004f1a68: je     0x1404f1a73
0x004f1a6a: cmp    edx,0x1
0x004f1a6d: jne    0x1404f1b70
0x004f1a73: mov    rax,QWORD PTR [r14+0x50]
0x004f1a77: cmp    DWORD PTR [rax+r15*4],0x2
0x004f1a7c: jne    0x1404f1b70
0x004f1a82: mov    r8d,0x9
0x004f1a88: lea    rdx,[rip+0x116e6a1]        # 0x141660130 ; literal=" repeated"
0x004f1a8f: jmp    0x1404f1b68
0x004f1a94: mov    rax,QWORD PTR [r14+0x50]
0x004f1a98: cmp    DWORD PTR [rax+r15*4],ebx
0x004f1a9c: jge    0x1404f1ab6
0x004f1a9e: mov    r8d,0x11
0x004f1aa4: lea    rdx,[rip+0x116e63d]        # 0x1416600e8 ; literal=" counterclockwise"
0x004f1aab: mov    rcx,rsi
0x004f1aae: call   0x140070fd0
0x004f1ab3: xor    r8b,r8b
0x004f1ab6: mov    rax,QWORD PTR [r14+0x50]
0x004f1aba: cmp    DWORD PTR [rax+r15*4],ebx
0x004f1abe: jle    0x1404f1ad8
0x004f1ac0: mov    r8d,0xa
0x004f1ac6: lea    rdx,[rip+0x116e633]        # 0x141660100 ; literal=" clockwise"
0x004f1acd: mov    rcx,rsi
0x004f1ad0: call   0x140070fd0
0x004f1ad5: xor    r8b,r8b
0x004f1ad8: mov    rax,QWORD PTR [r14+0x50]
0x004f1adc: mov    ecx,DWORD PTR [rax+r15*4]
0x004f1ae0: neg    ecx
0x004f1ae2: cmovs  ecx,DWORD PTR [rax+r15*4]
0x004f1ae7: cmp    ecx,0x2d
0x004f1aea: jne    0x1404f1b06
0x004f1aec: test   r8b,r8b
0x004f1aef: je     0x1404f1b06
0x004f1af1: mov    r8d,0x1
0x004f1af7: lea    rdx,[rip+0x116e756]        # 0x141660254 ; literal="n"
0x004f1afe: mov    rcx,rsi
0x004f1b01: call   0x140070fd0
0x004f1b06: mov    r8d,0x7
0x004f1b0c: lea    rdx,[rip+0x116e5fd]        # 0x141660110 ; literal=" eighth"
0x004f1b13: mov    rcx,rsi
0x004f1b16: call   0x140070fd0
0x004f1b1b: mov    rax,QWORD PTR [r14+0x50]
0x004f1b1f: mov    ecx,DWORD PTR [rax+r15*4]
0x004f1b23: neg    ecx
0x004f1b25: cmovs  ecx,DWORD PTR [rax+r15*4]
0x004f1b2a: cmp    ecx,0x5a
0x004f1b2d: jne    0x1404f1b44
0x004f1b2f: mov    r8d,0x8
0x004f1b35: lea    rdx,[rip+0x116e5dc]        # 0x141660118 ; literal=" quarter"
0x004f1b3c: mov    rcx,rsi
0x004f1b3f: call   0x140070fd0
0x004f1b44: mov    rax,QWORD PTR [r14+0x50]
0x004f1b48: mov    ecx,DWORD PTR [rax+r15*4]
0x004f1b4c: neg    ecx
0x004f1b4e: cmovs  ecx,DWORD PTR [rax+r15*4]
0x004f1b53: cmp    ecx,0xb4
0x004f1b59: jne    0x1404f1b70
0x004f1b5b: mov    r8d,0x5
0x004f1b61: lea    rdx,[rip+0x116e5bc]        # 0x141660124 ; literal=" half"
0x004f1b68: mov    rcx,rsi
0x004f1b6b: call   0x140070fd0
0x004f1b70: mov    rax,QWORD PTR [r14+0x20]
0x004f1b74: movsxd rcx,DWORD PTR [rax+r15*4]
0x004f1b78: cmp    ecx,0x21
0x004f1b7b: ja     0x1404f1ddc
0x004f1b81: mov    ecx,DWORD PTR [rdi+rcx*4+0x4f20bc]
0x004f1b88: add    rcx,rdi
0x004f1b8b: jmp    rcx
0x004f1b8d: mov    r8d,0x1a
0x004f1b93: lea    rdx,[rip+0x116e5a6]        # 0x141660140 ; literal=" steps in a square pattern"
0x004f1b9a: jmp    0x1404f1dd4
0x004f1b9f: mov    r8d,0x1c
0x004f1ba5: lea    rdx,[rip+0x116e5b4]        # 0x141660160 ; literal=" steps in a circular pattern"
0x004f1bac: jmp    0x1404f1dd4
0x004f1bb1: mov    r8d,0x1c
0x004f1bb7: lea    rdx,[rip+0x116e5c2]        # 0x141660180 ; literal=" steps in a triangle pattern"
0x004f1bbe: jmp    0x1404f1dd4
0x004f1bc3: mov    r8d,0x20
0x004f1bc9: lea    rdx,[rip+0x116e5d0]        # 0x1416601a0 ; literal=" steps in a figure-eight pattern"
0x004f1bd0: jmp    0x1404f1dd4
0x004f1bd5: mov    r8d,0x1e
0x004f1bdb: lea    rdx,[rip+0x116ea1e]        # 0x141660600 ; literal=" steps in an intricate pattern"
0x004f1be2: jmp    0x1404f1dd4
0x004f1be7: mov    r8d,0x5
0x004f1bed: lea    rdx,[rip+0x116ea2c]        # 0x141660620 ; literal=" move"
0x004f1bf4: jmp    0x1404f1dd4
0x004f1bf9: mov    r8d,0x5
0x004f1bff: lea    rdx,[rip+0x116ea22]        # 0x141660628 ; literal=" turn"
0x004f1c06: jmp    0x1404f1dd4
0x004f1c0b: mov    r8d,0x12
0x004f1c11: lea    rdx,[rip+0x116ea18]        # 0x141660630 ; literal=" facial expression"
0x004f1c18: jmp    0x1404f1dd4
0x004f1c1d: mov    r8d,0xd
0x004f1c23: lea    rdx,[rip+0x116ea1e]        # 0x141660648 ; literal=" hand gesture"
0x004f1c2a: jmp    0x1404f1dd4
0x004f1c2f: mov    r8d,0xe
0x004f1c35: lea    rdx,[rip+0x116ea1c]        # 0x141660658 ; literal=" straight walk"
0x004f1c3c: jmp    0x1404f1dd4
0x004f1c41: mov    r8d,0xc
0x004f1c47: lea    rdx,[rip+0x116ea1a]        # 0x141660668 ; literal=" curved walk"
0x004f1c4e: jmp    0x1404f1dd4
0x004f1c53: mov    r8d,0x4
0x004f1c59: lea    rdx,[rip+0x116ea18]        # 0x141660678 ; literal=" run"
0x004f1c60: jmp    0x1404f1dd4
0x004f1c65: mov    r8d,0x5
0x004f1c6b: lea    rdx,[rip+0x116ea0e]        # 0x141660680 ; literal=" leap"
0x004f1c72: jmp    0x1404f1dd4
0x004f1c77: mov    r8d,0x5
0x004f1c7d: lea    rdx,[rip+0x116ea04]        # 0x141660688 ; literal=" kick"
0x004f1c84: jmp    0x1404f1dd4
0x004f1c89: mov    r8d,0xa
0x004f1c8f: lea    rdx,[rip+0x116e9fa]        # 0x141660690 ; literal=" left kick"
0x004f1c96: jmp    0x1404f1dd4
0x004f1c9b: mov    r8d,0xb
0x004f1ca1: lea    rdx,[rip+0x116e9f8]        # 0x1416606a0 ; literal=" right kick"
0x004f1ca8: jmp    0x1404f1dd4
0x004f1cad: mov    r8d,0x9
0x004f1cb3: lea    rdx,[rip+0x116e9f6]        # 0x1416606b0 ; literal=" leg lift"
0x004f1cba: jmp    0x1404f1dd4
0x004f1cbf: mov    r8d,0xe
0x004f1cc5: lea    rdx,[rip+0x116e9f4]        # 0x1416606c0 ; literal=" left leg lift"
0x004f1ccc: jmp    0x1404f1dd4
0x004f1cd1: mov    r8d,0xf
0x004f1cd7: lea    rdx,[rip+0x116e9f2]        # 0x1416606d0 ; literal=" right leg lift"
0x004f1cde: jmp    0x1404f1dd4
0x004f1ce3: mov    r8d,0xb
0x004f1ce9: lea    rdx,[rip+0x116e9f0]        # 0x1416606e0 ; literal=" body level"
0x004f1cf0: jmp    0x1404f1dd4
0x004f1cf5: mov    r8d,0x12
0x004f1cfb: lea    rdx,[rip+0x116e9ee]        # 0x1416606f0 ; literal=" body level change"
0x004f1d02: jmp    0x1404f1dd4
0x004f1d07: mov    r8d,0xd
0x004f1d0d: lea    rdx,[rip+0x116e9f4]        # 0x141660708 ; literal=" arm carriage"
0x004f1d14: jmp    0x1404f1dd4
0x004f1d19: mov    r8d,0x10
0x004f1d1f: lea    rdx,[rip+0x116e9f2]        # 0x141660718 ; literal=" raised left arm"
0x004f1d26: jmp    0x1404f1dd4
0x004f1d2b: mov    r8d,0x11
0x004f1d31: lea    rdx,[rip+0x116e9f8]        # 0x141660730 ; literal=" raised right arm"
0x004f1d38: jmp    0x1404f1dd4
0x004f1d3d: mov    r8d,0xb
0x004f1d43: lea    rdx,[rip+0x116e9fe]        # 0x141660748 ; literal=" raised arm"
0x004f1d4a: jmp    0x1404f1dd4
0x004f1d4f: mov    r8d,0x5
0x004f1d55: lea    rdx,[rip+0x116e9f8]        # 0x141660754 ; literal=" spin"
0x004f1d5c: jmp    0x1404f1dd4
0x004f1d5e: mov    r8d,0x1a
0x004f1d64: lea    rdx,[rip+0x116e9f5]        # 0x141660760 ; literal=" independent body movement"
0x004f1d6b: jmp    0x1404f1dd4
0x004f1d6d: mov    r8d,0x5
0x004f1d73: lea    rdx,[rip+0x116ea02]        # 0x14166077c ; literal=" sway"
0x004f1d7a: jmp    0x1404f1dd4
0x004f1d7c: mov    r8d,0xd
0x004f1d82: lea    rdx,[rip+0x116e9ff]        # 0x141660788 ; literal=" forward bend"
0x004f1d89: jmp    0x1404f1dd4
0x004f1d8b: mov    r8d,0xe
0x004f1d91: lea    rdx,[rip+0x116ea00]        # 0x141660798 ; literal=" backward bend"
0x004f1d98: jmp    0x1404f1dd4
0x004f1d9a: mov    r8d,0xe
0x004f1da0: lea    rdx,[rip+0x116ea01]        # 0x1416607a8 ; literal=" leftward bend"
0x004f1da7: jmp    0x1404f1dd4
0x004f1da9: mov    r8d,0xf
0x004f1daf: lea    rdx,[rip+0x116ea02]        # 0x1416607b8 ; literal=" rightward bend"
0x004f1db6: jmp    0x1404f1dd4
0x004f1db8: mov    r8d,0x9
0x004f1dbe: lea    rdx,[rip+0x116ea03]        # 0x1416607c8 ; literal=" footwork"
0x004f1dc5: jmp    0x1404f1dd4
0x004f1dc7: mov    r8d,0x21
0x004f1dcd: lea    rdx,[rip+0x116ea04]        # 0x1416607d8 ; literal=" movement along the line of dance"
0x004f1dd4: mov    rcx,rsi
0x004f1dd7: call   0x140070fd0
0x004f1ddc: mov    rax,QWORD PTR [r14+0x68]
0x004f1de0: mov    edx,DWORD PTR [rax+r15*4]
0x004f1de4: mov    ecx,edx
0x004f1de6: shr    ecx,0x2
0x004f1de9: and    ecx,0x1
0x004f1dec: test   dl,0x8
0x004f1def: lea    eax,[rcx+0x1]
0x004f1df2: cmove  eax,ecx
0x004f1df5: test   dl,0x10
0x004f1df8: lea    ecx,[rax+0x1]
0x004f1dfb: cmove  ecx,eax
0x004f1dfe: test   dl,0x20
0x004f1e01: lea    edi,[rcx+0x1]
0x004f1e04: cmove  edi,ecx
0x004f1e07: test   edi,edi
0x004f1e09: je     0x1404f1eed
0x004f1e0f: nop
0x004f1e10: mov    eax,ebx
0x004f1e12: test   ebx,ebx
0x004f1e14: je     0x1404f1e3a
0x004f1e16: sub    eax,0x1
0x004f1e19: je     0x1404f1e33
0x004f1e1b: sub    eax,0x1
0x004f1e1e: je     0x1404f1e2c
0x004f1e20: cmp    eax,0x1
0x004f1e23: jne    0x1404f1e3f
0x004f1e25: mov    ebp,0x20
0x004f1e2a: jmp    0x1404f1e3f
0x004f1e2c: mov    ebp,0x10
0x004f1e31: jmp    0x1404f1e3f
0x004f1e33: mov    ebp,0x8
0x004f1e38: jmp    0x1404f1e3f
0x004f1e3a: mov    ebp,0x4
0x004f1e3f: mov    rax,QWORD PTR [r14+0x68]
0x004f1e43: test   DWORD PTR [rax+r15*4],ebp
0x004f1e47: je     0x1404f1ecd
0x004f1e4d: dec    edi
0x004f1e4f: cmp    ebp,0x4
0x004f1e52: je     0x1404f1e8a
0x004f1e54: cmp    ebp,0x8
0x004f1e57: je     0x1404f1e7b
0x004f1e59: cmp    ebp,0x10
0x004f1e5c: je     0x1404f1e6c
0x004f1e5e: cmp    ebp,0x20
0x004f1e61: jne    0x1404f1e9f
0x004f1e63: lea    rdx,[rip+0x116e50e]        # 0x141660378 ; literal=" shadowed"
0x004f1e6a: jmp    0x1404f1e91
0x004f1e6c: mov    r8d,0x18
0x004f1e72: lea    rdx,[rip+0x116e4df]        # 0x141660358 ; literal=" performed in succession"
0x004f1e79: jmp    0x1404f1e97
0x004f1e7b: mov    r8d,0x18
0x004f1e81: lea    rdx,[rip+0x116e988]        # 0x141660810 ; literal=" performed in retrograde"
0x004f1e88: jmp    0x1404f1e97
0x004f1e8a: lea    rdx,[rip+0x116e96f]        # 0x141660800 ; literal=" mirrored"
0x004f1e91: mov    r8d,0x9
0x004f1e97: mov    rcx,rsi
0x004f1e9a: call   0x140070fd0
0x004f1e9f: cmp    edi,0x2
0x004f1ea2: jl     0x1404f1eb3
0x004f1ea4: mov    r8d,0x1
0x004f1eaa: lea    rdx,[rip+0x1122353]        # 0x141614204 ; literal=","
0x004f1eb1: jmp    0x1404f1ec5
0x004f1eb3: cmp    edi,0x1
0x004f1eb6: jne    0x1404f1ecd
0x004f1eb8: mov    r8d,0x4
0x004f1ebe: lea    rdx,[rip+0x1112bc7]        # 0x141604a8c ; literal=" and"
0x004f1ec5: mov    rcx,rsi
0x004f1ec8: call   0x140070fd0
0x004f1ecd: inc    ebx
0x004f1ecf: cmp    ebx,0x4
0x004f1ed2: jl     0x1404f1e10
0x004f1ed8: mov    r8d,0x11
0x004f1ede: lea    rdx,[rip+0x116e4a3]        # 0x141660388 ; literal=" by group members"
0x004f1ee5: mov    rcx,rsi
0x004f1ee8: call   0x140070fd0
0x004f1eed: mov    rax,QWORD PTR [r14+0x68]
0x004f1ef1: mov    ecx,DWORD PTR [rax+r15*4]
0x004f1ef5: test   cl,0x40
0x004f1ef8: je     0x1404f1f09
0x004f1efa: mov    r8d,0xe
0x004f1f00: lea    rdx,[rip+0x116e499]        # 0x1416603a0 ; literal=" from the lead"
0x004f1f07: jmp    0x1404f1f1a
0x004f1f09: test   cl,cl
0x004f1f0b: jns    0x1404f1f22
0x004f1f0d: mov    r8d,0x12
0x004f1f13: lea    rdx,[rip+0x116e496]        # 0x1416603b0 ; literal=" from the follower"
0x004f1f1a: mov    rcx,rsi
0x004f1f1d: call   0x140070fd0
0x004f1f22: mov    rdi,QWORD PTR [rsp+0x30]
0x004f1f27: cmp    r15,QWORD PTR [rsp+0x38]
0x004f1f2c: jne    0x1404f1f42
0x004f1f2e: cmp    r15,rdi
0x004f1f31: je     0x1404f1f42
0x004f1f33: mov    r8d,0x5
0x004f1f39: lea    rdx,[rip+0x116e484]        # 0x1416603c4 ; literal=" with"
0x004f1f40: jmp    0x1404f1f7d
0x004f1f42: mov    eax,DWORD PTR [rsp+0x2c]
0x004f1f46: inc    eax
0x004f1f48: cmp    r12d,eax
0x004f1f4b: jl     0x1404f1f85
0x004f1f4d: mov    ecx,DWORD PTR [rsp+0x28]
0x004f1f51: lea    eax,[rcx-0x2]
0x004f1f54: cmp    r12d,eax
0x004f1f57: jg     0x1404f1f68
0x004f1f59: mov    r8d,0x1
0x004f1f5f: lea    rdx,[rip+0x112229e]        # 0x141614204 ; literal=","
0x004f1f66: jmp    0x1404f1f7d
0x004f1f68: lea    eax,[rcx-0x1]
0x004f1f6b: cmp    r12d,eax
0x004f1f6e: jne    0x1404f1f85
0x004f1f70: mov    r8d,0x4
0x004f1f76: lea    rdx,[rip+0x1112b0f]        # 0x141604a8c ; literal=" and"
0x004f1f7d: mov    rcx,rsi
0x004f1f80: call   0x140070fd0
0x004f1f85: inc    r12d
0x004f1f88: inc    r15
0x004f1f8b: cmp    r15,rdi
0x004f1f8e: mov    rax,QWORD PTR [rsp+0x38]
0x004f1f93: lea    r9,[rip+0x116bb4a]        # 0x14165dae4 ; literal="there"
0x004f1f9a: jle    0x1404f1541
0x004f1fa0: mov    rbx,QWORD PTR [rsp+0x40]
0x004f1fa5: mov    r8d,0x3
0x004f1fab: lea    rdx,[rip+0x11226ce]        # 0x141614680 ; literal=".  "
0x004f1fb2: mov    rcx,rsi
0x004f1fb5: call   0x140070fd0
0x004f1fba: mov    ecx,DWORD PTR [rsp+0x20]
0x004f1fbe: inc    ecx
0x004f1fc0: mov    DWORD PTR [rsp+0x20],ecx
0x004f1fc4: cmp    rbx,r13
0x004f1fc7: mov    r8d,DWORD PTR [rsp+0x24]
0x004f1fcc: lea    r9,[rip+0x116bb11]        # 0x14165dae4 ; literal="there"
0x004f1fd3: jl     0x1404f14b0
0x004f1fd9: mov    rcx,QWORD PTR [rsp+0x90]
0x004f1fe1: xor    rcx,rsp
0x004f1fe4: call   0x14154de00
0x004f1fe9: mov    rbx,QWORD PTR [rsp+0xf0]
0x004f1ff1: add    rsp,0xa0
0x004f1ff8: pop    r15
0x004f1ffa: pop    r14
0x004f1ffc: pop    r13
0x004f1ffe: pop    r12
0x004f2000: pop    rdi
0x004f2001: pop    rsi
0x004f2002: pop    rbp
0x004f2003: ret
