; classic; PE:6a70b91c:0270a000; look vector 0x2695b10; owner 0x7f1530..0x7f44a1
0x007f1530: mov    QWORD PTR [rsp+0x10],rbx
0x007f1535: mov    QWORD PTR [rsp+0x18],rsi
0x007f153a: mov    QWORD PTR [rsp+0x20],rdi
0x007f153f: push   rbp
0x007f1540: push   r12
0x007f1542: push   r13
0x007f1544: push   r14
0x007f1546: push   r15
0x007f1548: lea    rbp,[rsp-0x40]
0x007f154d: sub    rsp,0x140
0x007f1554: mov    rax,QWORD PTR [rip+0x10a4ae5]        # 0x141896040
0x007f155b: xor    rax,rsp
0x007f155e: mov    QWORD PTR [rbp+0x30],rax
0x007f1562: mov    rdi,rcx
0x007f1565: cmp    BYTE PTR [rip+0x10b001c],0x0        # 0x1418a1588
0x007f156c: setne  BYTE PTR [rip+0x1e52f8d]        # 0x142644500
0x007f1573: mov    BYTE PTR [rip+0x1e52fce],0x0        # 0x142644548
0x007f157a: mov    r12d,0xffffffff
0x007f1580: mov    DWORD PTR [rbp-0x78],r12d
0x007f1584: mov    DWORD PTR [rip+0x1e52fc1],r12d        # 0x14264454c
0x007f158b: lea    rdx,[rbp-0x7c]
0x007f158f: lea    rcx,[rsp+0x74]
0x007f1594: call   0x140c303b0
0x007f1599: mov    DWORD PTR [rip+0x10b58fc],r12d        # 0x1418a6e9c
0x007f15a0: mov    QWORD PTR [rip+0x10b1dbd],0xffffffffffffffff        # 0x1418a3368
0x007f15ab: mov    QWORD PTR [rip+0x10b1dba],0xffffffffffffffff        # 0x1418a3370
0x007f15b6: mov    ebx,DWORD PTR [rsp+0x74]
0x007f15ba: mov    DWORD PTR [rip+0x10b1dcc],ebx        # 0x1418a338c
0x007f15c0: mov    eax,DWORD PTR [rip+0x1bd60b2]        # 0x1423c7678
0x007f15c6: add    eax,0xfffffffb
0x007f15c9: mov    DWORD PTR [rip+0x10b1dc1],eax        # 0x1418a3390
0x007f15cf: mov    BYTE PTR [rip+0x10b1db2],0x0        # 0x1418a3388
0x007f15d6: xor    r14d,r14d
0x007f15d9: mov    DWORD PTR [rip+0x10b1d98],r14d        # 0x1418a3378
0x007f15e0: movzx  eax,WORD PTR [rip+0x1e49479]        # 0x14263aa60
0x007f15e7: sub    ax,0x19
0x007f15eb: cmp    ax,0x1
0x007f15ef: jbe    0x1407f4339
0x007f15f5: cmp    DWORD PTR [rip+0x1e51ef4],r14d        # 0x1426434f0
0x007f15fc: jg     0x1407f160e
0x007f15fe: cmp    BYTE PTR [rip+0x1e51e23],0x1        # 0x142643428
0x007f1605: jne    0x1407f1644
0x007f1607: mov    BYTE PTR [rip+0x1e51e22],r14b        # 0x142643430
0x007f160e: xor    r8d,r8d
0x007f1611: movzx  edx,r12b
0x007f1615: xor    ecx,ecx
0x007f1617: call   0x1408bc000
0x007f161c: call   0x140843fe0
0x007f1621: call   0x140800ad0
0x007f1626: call   QWORD PTR [rip+0xdeebbc]        # 0x1415e01e8
0x007f162c: mov    edx,eax
0x007f162e: call   0x140e95f50
0x007f1633: lea    rcx,[rip+0x1ba2ed6]        # 0x142394510
0x007f163a: call   0x140aee1d0
0x007f163f: jmp    0x1407f4341
0x007f1644: mov    eax,DWORD PTR [rip+0x1e51dda]        # 0x142643424
0x007f164a: cmp    eax,0x6
0x007f164d: je     0x1407f160e
0x007f164f: test   eax,eax
0x007f1651: jne    0x1407f160e
0x007f1653: mov    rax,QWORD PTR [rip+0x1cec11e]        # 0x1424dd778
0x007f165a: sub    rax,QWORD PTR [rip+0x1cec10f]        # 0x1424dd770
0x007f1661: sar    rax,0x3
0x007f1665: test   rax,rax
0x007f1668: je     0x1407f16b8
0x007f166a: xor    r8d,r8d
0x007f166d: movzx  edx,r12b
0x007f1671: xor    ecx,ecx
0x007f1673: call   0x1408bc000
0x007f1678: call   QWORD PTR [rip+0xdeeb6a]        # 0x1415e01e8
0x007f167e: mov    edx,eax
0x007f1680: call   0x140e95f50
0x007f1685: lea    rcx,[rip+0x1ba2e84]        # 0x142394510
0x007f168c: call   0x140aee1d0
0x007f1691: lea    rdx,[rbp-0x78]
0x007f1695: lea    rcx,[rsp+0x74]
0x007f169a: call   0x140c303b0
0x007f169f: mov    r8d,DWORD PTR [rbp-0x78]
0x007f16a3: mov    edx,DWORD PTR [rsp+0x74]
0x007f16a7: lea    rcx,[rip+0x1cec092]        # 0x1424dd740
0x007f16ae: call   0x1400e9ed0
0x007f16b3: jmp    0x1407f4341
0x007f16b8: test   BYTE PTR [rip+0x1cf0441],0x1        # 0x1424e1b00
0x007f16bf: jne    0x1407f4341
0x007f16c5: lea    rcx,[rip+0x1d0e8a4]        # 0x1424fff70
0x007f16cc: call   0x140e80370
0x007f16d1: xor    r8d,r8d
0x007f16d4: movzx  edx,r12b
0x007f16d8: xor    ecx,ecx
0x007f16da: call   0x1408bc000
0x007f16df: call   QWORD PTR [rip+0xdeeb03]        # 0x1415e01e8
0x007f16e5: mov    edx,eax
0x007f16e7: call   0x140e95f50
0x007f16ec: lea    rcx,[rip+0x1ba2e1d]        # 0x142394510
0x007f16f3: call   0x140aee1d0
0x007f16f8: mov    esi,DWORD PTR [rbp-0x7c]
0x007f16fb: test   BYTE PTR [rip+0x1cf03fe],0x10        # 0x1424e1b00
0x007f1702: je     0x1407f1722
0x007f1704: mov    r8d,esi
0x007f1707: mov    edx,ebx
0x007f1709: lea    rcx,[rip+0x1cec030]        # 0x1424dd740
0x007f1710: call   0x1407ff940
0x007f1715: test   BYTE PTR [rip+0x1cf03e4],0x2        # 0x1424e1b00
0x007f171c: jne    0x1407f4341
0x007f1722: movzx  eax,WORD PTR [rip+0x1e49337]        # 0x14263aa60
0x007f1729: cmp    ax,0x1
0x007f172d: jne    0x1407f2c66
0x007f1733: mov    rax,QWORD PTR [rip+0x1ea43de]        # 0x142695b18
0x007f173a: sub    rax,QWORD PTR [rip+0x1ea43cf]        # 0x142695b10
0x007f1741: sar    rax,0x3
0x007f1745: mov    ebx,0x3
0x007f174a: cmp    rax,0x5
0x007f174e: jbe    0x1407f180a
0x007f1754: mov    DWORD PTR [rip+0x1e52c0e],0x1010007        # 0x14264436c
0x007f175e: mov    DWORD PTR [rip+0x1e52bff],r14d        # 0x142644364
0x007f1765: mov    DWORD PTR [rip+0x1e52bfd],ebx        # 0x142644368
0x007f176b: mov    edx,0x1b
0x007f1770: call   0x140c364f0
0x007f1775: mov    edx,0x1c
0x007f177a: call   0x140c364f0
0x007f177f: xorps  xmm0,xmm0
0x007f1782: movups XMMWORD PTR [rbp-0x10],xmm0
0x007f1786: mov    ecx,0x20
0x007f178b: call   0x140070760
0x007f1790: mov    QWORD PTR [rbp-0x10],rax
0x007f1794: movdqa xmm0,XMMWORD PTR [rip+0xf943c4]        # 0x141785b60
0x007f179c: movdqu XMMWORD PTR [rbp+0x0],xmm0
0x007f17a1: movups xmm0,XMMWORD PTR [rip+0xeb7368]        # 0x1416a8b10 ; literal=" to view other pages"
0x007f17a8: movups XMMWORD PTR [rax],xmm0
0x007f17ab: mov    ecx,DWORD PTR [rip+0xeb736f]        # 0x1416a8b20 ; literal="ages"
0x007f17b1: mov    DWORD PTR [rax+0x10],ecx
0x007f17b4: mov    BYTE PTR [rax+0x14],r14b
0x007f17b8: xor    r9d,r9d
0x007f17bb: lea    rdx,[rbp-0x10]
0x007f17bf: lea    rcx,[rip+0x1e52b1a]        # 0x1426442e0
0x007f17c6: call   0x140ad69a0
0x007f17cb: nop
0x007f17cc: mov    rdx,QWORD PTR [rbp+0x8]
0x007f17d0: cmp    rdx,0xf
0x007f17d4: jbe    0x1407f180a
0x007f17d6: inc    rdx
0x007f17d9: mov    rcx,QWORD PTR [rbp-0x10]
0x007f17dd: mov    rax,rcx
0x007f17e0: cmp    rdx,0x1000
0x007f17e7: jb     0x1407f1805
0x007f17e9: add    rdx,0x27
0x007f17ed: mov    rcx,QWORD PTR [rcx-0x8]
0x007f17f1: sub    rax,rcx
0x007f17f4: add    rax,0xfffffffffffffff8
0x007f17f8: cmp    rax,0x1f
0x007f17fc: jbe    0x1407f1805
0x007f17fe: call   QWORD PTR [rip+0xdef29c]        # 0x1415e0aa0
0x007f1804: int3
0x007f1805: call   0x1415345f0
0x007f180a: mov    edi,0x4
0x007f180f: mov    DWORD PTR [rsp+0x74],edi
0x007f1813: movzx  edx,WORD PTR [rip+0x10a4a7e]        # 0x141896298
0x007f181a: sub    dx,WORD PTR [rip+0x1d0e75b]        # 0x1424fff7c
0x007f1821: movzx  r8d,WORD PTR [rip+0x10a4a73]        # 0x14189629c
0x007f1829: sub    r8w,WORD PTR [rip+0x1d0e74d]        # 0x1424fff7e
0x007f1831: movsx  ecx,BYTE PTR [rip+0x1d0e73a]        # 0x1424fff72
0x007f1838: test   ecx,ecx
0x007f183a: je     0x1407f18a8
0x007f183c: sub    ecx,0x1
0x007f183f: je     0x1407f1896
0x007f1841: sub    ecx,0x1
0x007f1844: je     0x1407f1876
0x007f1846: cmp    ecx,0x1
0x007f1849: jne    0x1407f186d
0x007f184b: movsx  eax,dx
0x007f184e: movsx  ecx,WORD PTR [rip+0x1d0e723]        # 0x1424fff78
0x007f1855: sub    ecx,eax
0x007f1857: dec    ecx
0x007f1859: movsx  eax,r8w
0x007f185d: movsx  r8d,WORD PTR [rip+0x1d0e715]        # 0x1424fff7a
0x007f1865: sub    r8d,eax
0x007f1868: dec    r8d
0x007f186b: jmp    0x1407f18c5
0x007f186d: mov    r8d,DWORD PTR [rip+0x1e52af4]        # 0x142644368
0x007f1874: jmp    0x1407f18d2
0x007f1876: movsx  ecx,r8w
0x007f187a: movsx  eax,WORD PTR [rip+0x1d0e6f3]        # 0x1424fff74
0x007f1881: add    ecx,eax
0x007f1883: movsx  eax,dx
0x007f1886: movsx  r8d,WORD PTR [rip+0x1d0e6ec]        # 0x1424fff7a
0x007f188e: sub    r8d,eax
0x007f1891: dec    r8d
0x007f1894: jmp    0x1407f18c5
0x007f1896: movsx  ecx,dx
0x007f1899: movsx  eax,WORD PTR [rip+0x1d0e6d4]        # 0x1424fff74
0x007f18a0: add    ecx,eax
0x007f18a2: movsx  r8d,r8w
0x007f18a6: jmp    0x1407f18bb
0x007f18a8: movsx  eax,r8w
0x007f18ac: movsx  ecx,WORD PTR [rip+0x1d0e6c5]        # 0x1424fff78
0x007f18b3: sub    ecx,eax
0x007f18b5: dec    ecx
0x007f18b7: movsx  r8d,dx
0x007f18bb: movsx  eax,WORD PTR [rip+0x1d0e6b4]        # 0x1424fff76
0x007f18c2: add    r8d,eax
0x007f18c5: mov    DWORD PTR [rip+0x1e52a9c],r8d        # 0x142644368
0x007f18cc: mov    DWORD PTR [rip+0x1e52a92],ecx        # 0x142644364
0x007f18d2: mov    ecx,DWORD PTR [rip+0x1bd5da0]        # 0x1423c7678
0x007f18d8: lea    eax,[rcx-0x1]
0x007f18db: cdq
0x007f18dc: sub    eax,edx
0x007f18de: sar    eax,1
0x007f18e0: dec    eax
0x007f18e2: cmp    r8d,eax
0x007f18e5: jge    0x1407f18ee
0x007f18e7: lea    edi,[rcx-0xb]
0x007f18ea: mov    DWORD PTR [rsp+0x74],edi
0x007f18ee: xorps  xmm0,xmm0
0x007f18f1: movups XMMWORD PTR [rbp-0x30],xmm0
0x007f18f5: mov    QWORD PTR [rbp-0x20],r14
0x007f18f9: mov    QWORD PTR [rbp-0x18],0xf
0x007f1901: mov    BYTE PTR [rbp-0x30],0x0
0x007f1905: mov    eax,DWORD PTR [rip+0x1b5d9ad]        # 0x14234f2b8
0x007f190b: lea    r13d,[rax+rax*4]
0x007f190f: mov    DWORD PTR [rbp-0x78],r13d
0x007f1913: lea    eax,[r13+0x5]
0x007f1917: cmp    r13d,eax
0x007f191a: jge    0x1407f2c58
0x007f1920: movsxd r12,r13d
0x007f1923: mov    QWORD PTR [rbp-0x70],r12
0x007f1927: lea    r15,[rip+0xffffffffff80e6d2]        # 0x140000000
0x007f192e: mov    esi,0x1
0x007f1933: nop    DWORD PTR [rax+0x0]
0x007f1937: nop    WORD PTR [rax+rax*1+0x0]
0x007f1940: mov    rcx,QWORD PTR [rip+0x1ea41d1]        # 0x142695b18
0x007f1947: mov    rdx,QWORD PTR [rip+0x1ea41c2]        # 0x142695b10
0x007f194e: sub    rcx,rdx
0x007f1951: sar    rcx,0x3
0x007f1955: movsxd rax,r13d
0x007f1958: cmp    rax,rcx
0x007f195b: jae    0x1407f2c58
0x007f1961: mov    rdx,QWORD PTR [rdx+r12*8]
0x007f1965: movsxd rax,DWORD PTR [rdx]
0x007f1968: cmp    eax,0xc
0x007f196b: ja     0x1407f2c2d
0x007f1971: mov    ecx,DWORD PTR [r15+rax*4+0x7f4370]
0x007f1979: add    rcx,r15
0x007f197c: jmp    rcx
0x007f197e: mov    BYTE PTR [rsp+0x28],0x1
0x007f1983: movzx  eax,WORD PTR [rip+0x10a4916]        # 0x1418962a0
0x007f198a: mov    WORD PTR [rsp+0x20],ax
0x007f198f: movzx  r9d,WORD PTR [rip+0x10a4905]        # 0x14189629c
0x007f1997: movzx  r8d,WORD PTR [rip+0x10a48f9]        # 0x141896298
0x007f199f: lea    rdx,[rbp-0x30]
0x007f19a3: lea    rcx,[rip+0x1bd9a36]        # 0x1423cb3e0
0x007f19aa: call   0x140e782a0
0x007f19af: mov    DWORD PTR [rip+0x1e529b3],0x1010001        # 0x14264436c
0x007f19b9: mov    DWORD PTR [rip+0x1e529a4],r14d        # 0x142644364
0x007f19c0: mov    DWORD PTR [rip+0x1e529a2],edi        # 0x142644368
0x007f19c6: inc    edi
0x007f19c8: mov    DWORD PTR [rsp+0x74],edi
0x007f19cc: mov    eax,DWORD PTR [rip+0x1b5d8e6]        # 0x14234f2b8
0x007f19d2: lea    ecx,[rax+rax*4]
0x007f19d5: mov    edx,r13d
0x007f19d8: sub    edx,ecx
0x007f19da: add    edx,0x52
0x007f19dd: call   0x140c364f0
0x007f19e2: lea    rdx,[rip+0xe0f077]        # 0x141600a60 ; literal=" - "
0x007f19e9: lea    rcx,[rbp-0x58]
0x007f19ed: call   0x1400680e0
0x007f19f2: nop
0x007f19f3: xor    r9d,r9d
0x007f19f6: lea    rdx,[rbp-0x58]
0x007f19fa: lea    rcx,[rip+0x1e528df]        # 0x1426442e0
0x007f1a01: call   0x140ad69a0
0x007f1a06: nop
0x007f1a07: lea    rcx,[rbp-0x58]
0x007f1a0b: call   0x14006f7e0
0x007f1a10: xor    r9d,r9d
0x007f1a13: lea    rdx,[rbp-0x30]
0x007f1a17: lea    rcx,[rip+0x1e528c2]        # 0x1426442e0
0x007f1a1e: call   0x140ad69a0
0x007f1a23: jmp    0x1407f2c2d
0x007f1a28: mov    edx,DWORD PTR [rdx+0x4]
0x007f1a2b: lea    rcx,[rip+0x1bed90e]        # 0x1423df340
0x007f1a32: call   0x140072670
0x007f1a37: mov    rbx,rax
0x007f1a3a: test   rax,rax
0x007f1a3d: je     0x1407f2c2d
0x007f1a43: mov    DWORD PTR [rip+0x1e5291f],0x1010006        # 0x14264436c
0x007f1a4d: mov    DWORD PTR [rip+0x1e52910],r14d        # 0x142644364
0x007f1a54: mov    DWORD PTR [rip+0x1e5290e],edi        # 0x142644368
0x007f1a5a: inc    edi
0x007f1a5c: mov    DWORD PTR [rsp+0x74],edi
0x007f1a60: mov    ecx,DWORD PTR [rip+0x1b5d852]        # 0x14234f2b8
0x007f1a66: lea    r8d,[rcx+rcx*4]
0x007f1a6a: mov    edx,r13d
0x007f1a6d: sub    edx,r8d
0x007f1a70: add    edx,0x52
0x007f1a73: call   0x140c364f0
0x007f1a78: lea    rdx,[rip+0xe0efe1]        # 0x141600a60 ; literal=" - "
0x007f1a7f: lea    rcx,[rbp-0x58]
0x007f1a83: call   0x1400680e0
0x007f1a88: nop
0x007f1a89: xor    r9d,r9d
0x007f1a8c: lea    rdx,[rbp-0x58]
0x007f1a90: lea    rcx,[rip+0x1e52849]        # 0x1426442e0
0x007f1a97: call   0x140ad69a0
0x007f1a9c: nop
0x007f1a9d: lea    rcx,[rbp-0x58]
0x007f1aa1: call   0x14006f7e0
0x007f1aa6: mov    r9d,0xffffffff
0x007f1aac: xor    r8d,r8d
0x007f1aaf: lea    rdx,[rbp-0x30]
0x007f1ab3: mov    rcx,rbx
0x007f1ab6: call   0x140c62490
0x007f1abb: jmp    0x1407f1a10
0x007f1ac0: mov    edx,DWORD PTR [rdx+0x4]
0x007f1ac3: lea    rcx,[rip+0x1bed876]        # 0x1423df340
0x007f1aca: call   0x140072670
0x007f1acf: mov    rbx,rax
0x007f1ad2: test   rax,rax
0x007f1ad5: je     0x1407f2c2d
0x007f1adb: mov    DWORD PTR [rip+0x1e52887],0x1010006        # 0x14264436c
0x007f1ae5: mov    DWORD PTR [rip+0x1e52878],r14d        # 0x142644364
0x007f1aec: mov    DWORD PTR [rip+0x1e52876],edi        # 0x142644368
0x007f1af2: inc    edi
0x007f1af4: mov    DWORD PTR [rsp+0x74],edi
0x007f1af8: mov    ecx,DWORD PTR [rip+0x1b5d7ba]        # 0x14234f2b8
0x007f1afe: lea    r8d,[rcx+rcx*4]
0x007f1b02: mov    edx,r13d
0x007f1b05: sub    edx,r8d
0x007f1b08: add    edx,0x52
0x007f1b0b: call   0x140c364f0
0x007f1b10: lea    rdx,[rip+0xeb6fed]        # 0x1416a8b04 ; literal=" -  "
0x007f1b17: lea    rcx,[rbp-0x58]
0x007f1b1b: call   0x1400680e0
0x007f1b20: nop
0x007f1b21: xor    r9d,r9d
0x007f1b24: lea    rdx,[rbp-0x58]
0x007f1b28: lea    rcx,[rip+0x1e527b1]        # 0x1426442e0
0x007f1b2f: call   0x140ad69a0
0x007f1b34: nop
0x007f1b35: jmp    0x1407f1a9d
0x007f1b3a: mov    edx,DWORD PTR [rdx+0x4]
0x007f1b3d: lea    rcx,[rip+0x1bed45c]        # 0x1423defa0
0x007f1b44: call   0x140073b00
0x007f1b49: mov    rbx,rax
0x007f1b4c: test   rax,rax
0x007f1b4f: je     0x1407f2c2d
0x007f1b55: mov    DWORD PTR [rip+0x1e5280d],0x1010007        # 0x14264436c
0x007f1b5f: mov    DWORD PTR [rip+0x1e527fe],r14d        # 0x142644364
0x007f1b66: mov    DWORD PTR [rip+0x1e527fc],edi        # 0x142644368
0x007f1b6c: inc    edi
0x007f1b6e: mov    DWORD PTR [rsp+0x74],edi
0x007f1b72: mov    ecx,DWORD PTR [rip+0x1b5d740]        # 0x14234f2b8
0x007f1b78: lea    r8d,[rcx+rcx*4]
0x007f1b7c: mov    edx,r13d
0x007f1b7f: sub    edx,r8d
0x007f1b82: add    edx,0x52
0x007f1b85: call   0x140c364f0
0x007f1b8a: lea    rdx,[rip+0xe0eecf]        # 0x141600a60 ; literal=" - "
0x007f1b91: lea    rcx,[rbp-0x58]
0x007f1b95: call   0x1400680e0
0x007f1b9a: nop
0x007f1b9b: xor    r9d,r9d
0x007f1b9e: lea    rdx,[rbp-0x58]
0x007f1ba2: lea    rcx,[rip+0x1e52737]        # 0x1426442e0
0x007f1ba9: call   0x140ad69a0
0x007f1bae: nop
0x007f1baf: lea    rcx,[rbp-0x58]
0x007f1bb3: call   0x14006f7e0
0x007f1bb8: mov    rcx,rbx
0x007f1bbb: call   0x1407e20e0
0x007f1bc0: mov    DWORD PTR [rip+0x1e527a2],0x1010007        # 0x14264436c
0x007f1bca: mov    BYTE PTR [rsp+0x20],0x1
0x007f1bcf: mov    r9b,0x1
0x007f1bd2: xor    r8d,r8d
0x007f1bd5: lea    rdx,[rbp-0x30]
0x007f1bd9: mov    rcx,rbx
0x007f1bdc: call   0x1413293a0
0x007f1be1: jmp    0x1407f1a10
0x007f1be6: mov    edx,DWORD PTR [rdx+0x4]
0x007f1be9: lea    rcx,[rip+0x1bf6208]        # 0x1423e7df8
0x007f1bf0: call   0x140067ce0
0x007f1bf5: mov    rbx,rax
0x007f1bf8: test   rax,rax
0x007f1bfb: je     0x1407f2c2d
0x007f1c01: mov    DWORD PTR [rip+0x1e52761],0x1010003        # 0x14264436c
0x007f1c0b: mov    DWORD PTR [rip+0x1e52752],r14d        # 0x142644364
0x007f1c12: mov    DWORD PTR [rip+0x1e52750],edi        # 0x142644368
0x007f1c18: inc    edi
0x007f1c1a: mov    DWORD PTR [rsp+0x74],edi
0x007f1c1e: mov    ecx,DWORD PTR [rip+0x1b5d694]        # 0x14234f2b8
0x007f1c24: lea    r8d,[rcx+rcx*4]
0x007f1c28: mov    edx,r13d
0x007f1c2b: sub    edx,r8d
0x007f1c2e: add    edx,0x52
0x007f1c31: call   0x140c364f0
0x007f1c36: lea    rdx,[rip+0xe0ee23]        # 0x141600a60 ; literal=" - "
0x007f1c3d: lea    rcx,[rbp-0x58]
0x007f1c41: call   0x1400680e0
0x007f1c46: nop
0x007f1c47: xor    r9d,r9d
0x007f1c4a: lea    rdx,[rbp-0x58]
0x007f1c4e: lea    rcx,[rip+0x1e5268b]        # 0x1426442e0
0x007f1c55: call   0x140ad69a0
0x007f1c5a: nop
0x007f1c5b: lea    rcx,[rbp-0x58]
0x007f1c5f: call   0x14006f7e0
0x007f1c64: mov    rax,QWORD PTR [rbx]
0x007f1c67: lea    rdx,[rbp-0x30]
0x007f1c6b: mov    rcx,rbx
0x007f1c6e: call   QWORD PTR [rax+0x188]
0x007f1c74: jmp    0x1407f1a10
0x007f1c79: mov    edx,DWORD PTR [rdx+0x8]
0x007f1c7c: lea    rcx,[rip+0x1bed6bd]        # 0x1423df340
0x007f1c83: call   0x140072670
0x007f1c88: mov    rbx,rax
0x007f1c8b: mov    DWORD PTR [rip+0x1e526d7],0x1010002        # 0x14264436c
0x007f1c95: mov    DWORD PTR [rip+0x1e526c8],r14d        # 0x142644364
0x007f1c9c: mov    DWORD PTR [rip+0x1e526c6],edi        # 0x142644368
0x007f1ca2: inc    edi
0x007f1ca4: mov    DWORD PTR [rsp+0x74],edi
0x007f1ca8: mov    ecx,DWORD PTR [rip+0x1b5d60a]        # 0x14234f2b8
0x007f1cae: lea    r8d,[rcx+rcx*4]
0x007f1cb2: mov    edx,r13d
0x007f1cb5: sub    edx,r8d
0x007f1cb8: add    edx,0x52
0x007f1cbb: call   0x140c364f0
0x007f1cc0: lea    rdx,[rip+0xe0ed99]        # 0x141600a60 ; literal=" - "
0x007f1cc7: lea    rcx,[rbp-0x58]
0x007f1ccb: call   0x1400680e0
0x007f1cd0: nop
0x007f1cd1: xor    r9d,r9d
0x007f1cd4: lea    rdx,[rbp-0x58]
0x007f1cd8: lea    rcx,[rip+0x1e52601]        # 0x1426442e0
0x007f1cdf: call   0x140ad69a0
0x007f1ce4: nop
0x007f1ce5: lea    rcx,[rbp-0x58]
0x007f1ce9: call   0x14006f7e0
0x007f1cee: test   rbx,rbx
0x007f1cf1: jne    0x1407f1aa6
0x007f1cf7: mov    rax,QWORD PTR [rip+0x1ea3e12]        # 0x142695b10
0x007f1cfe: mov    rcx,QWORD PTR [rax+r12*8]
0x007f1d02: test   BYTE PTR [rcx+0xc],0x2
0x007f1d06: je     0x1407f1d5a
0x007f1d08: lea    rdx,[rip+0xe43439]        # 0x141635148 ; literal="a colony of "
0x007f1d0f: lea    rcx,[rbp-0x30]
0x007f1d13: call   0x14006f510
0x007f1d18: lea    rcx,[rbp+0x10]
0x007f1d1c: call   0x14006f620
0x007f1d21: nop
0x007f1d22: mov    r9d,0xffffffff
0x007f1d28: mov    rax,QWORD PTR [rip+0x1ea3de1]        # 0x142695b10
0x007f1d2f: mov    rcx,QWORD PTR [rax+r12*8]
0x007f1d33: mov    r8b,0x1
0x007f1d36: lea    rdx,[rbp+0x10]
0x007f1d3a: movzx  ecx,WORD PTR [rcx+0x4]
0x007f1d3e: call   0x140aa0c50
0x007f1d43: lea    rdx,[rbp+0x10]
0x007f1d47: lea    rcx,[rbp-0x30]
0x007f1d4b: call   0x1400b9ca0
0x007f1d50: nop
0x007f1d51: lea    rcx,[rbp+0x10]
0x007f1d55: jmp    0x1407f1a0b
0x007f1d5a: mov    eax,DWORD PTR [rcx+0x10]
0x007f1d5d: cmp    eax,0x1
0x007f1d60: ja     0x1407f1d7c
0x007f1d62: movzx  r9d,WORD PTR [rcx+0x6]
0x007f1d67: xor    r8d,r8d
0x007f1d6a: lea    rdx,[rbp-0x30]
0x007f1d6e: movzx  ecx,WORD PTR [rcx+0x4]
0x007f1d72: call   0x140aa0c50
0x007f1d77: jmp    0x1407f1a10
0x007f1d7c: cmp    eax,0xa
0x007f1d7f: jae    0x1407f1d9c
0x007f1d81: mov    r9d,0xffffffff
0x007f1d87: mov    r8b,0x1
0x007f1d8a: lea    rdx,[rbp-0x30]
0x007f1d8e: movzx  ecx,WORD PTR [rcx+0x4]
0x007f1d92: call   0x140aa0c50
0x007f1d97: jmp    0x1407f1a10
0x007f1d9c: lea    rcx,[rbp-0x30]
0x007f1da0: cmp    eax,0x32
0x007f1da3: jae    0x1407f1df3
0x007f1da5: lea    rdx,[rip+0xe433ac]        # 0x141635158 ; literal="many "
0x007f1dac: call   0x14006f510
0x007f1db1: lea    rcx,[rbp+0x10]
0x007f1db5: call   0x14006f620
0x007f1dba: nop
0x007f1dbb: mov    r9d,0xffffffff
0x007f1dc1: mov    rax,QWORD PTR [rip+0x1ea3d48]        # 0x142695b10
0x007f1dc8: mov    rcx,QWORD PTR [rax+r12*8]
0x007f1dcc: mov    r8b,0x1
0x007f1dcf: lea    rdx,[rbp+0x10]
0x007f1dd3: movzx  ecx,WORD PTR [rcx+0x4]
0x007f1dd7: call   0x140aa0c50
0x007f1ddc: lea    rdx,[rbp+0x10]
0x007f1de0: lea    rcx,[rbp-0x30]
0x007f1de4: call   0x1400b9ca0
0x007f1de9: nop
0x007f1dea: lea    rcx,[rbp+0x10]
0x007f1dee: jmp    0x1407f1a0b
0x007f1df3: lea    rdx,[rip+0xe433ae]        # 0x1416351a8 ; literal="a swarm of "
0x007f1dfa: call   0x14006f510
0x007f1dff: lea    rcx,[rbp+0x10]
0x007f1e03: call   0x14006f620
0x007f1e08: nop
0x007f1e09: mov    r9d,0xffffffff
0x007f1e0f: mov    rax,QWORD PTR [rip+0x1ea3cfa]        # 0x142695b10
0x007f1e16: mov    rcx,QWORD PTR [rax+r12*8]
0x007f1e1a: mov    r8b,0x1
0x007f1e1d: lea    rdx,[rbp+0x10]
0x007f1e21: movzx  ecx,WORD PTR [rcx+0x4]
0x007f1e25: call   0x140aa0c50
0x007f1e2a: lea    rdx,[rbp+0x10]
0x007f1e2e: lea    rcx,[rbp-0x30]
0x007f1e32: call   0x1400b9ca0
0x007f1e37: nop
0x007f1e38: lea    rcx,[rbp+0x10]
0x007f1e3c: jmp    0x1407f1a0b
0x007f1e41: mov    DWORD PTR [rip+0x1e52521],0x1010005        # 0x14264436c
0x007f1e4b: mov    DWORD PTR [rip+0x1e52512],r14d        # 0x142644364
0x007f1e52: mov    DWORD PTR [rip+0x1e52510],edi        # 0x142644368
0x007f1e58: inc    edi
0x007f1e5a: mov    DWORD PTR [rsp+0x74],edi
0x007f1e5e: mov    eax,DWORD PTR [rip+0x1b5d454]        # 0x14234f2b8
0x007f1e64: lea    ecx,[rax+rax*4]
0x007f1e67: mov    edx,r13d
0x007f1e6a: sub    edx,ecx
0x007f1e6c: add    edx,0x52
0x007f1e6f: call   0x140c364f0
0x007f1e74: lea    rdx,[rip+0xe0ebe5]        # 0x141600a60 ; literal=" - "
0x007f1e7b: lea    rcx,[rbp-0x58]
0x007f1e7f: call   0x1400680e0
0x007f1e84: nop
0x007f1e85: xor    r9d,r9d
0x007f1e88: lea    rdx,[rbp-0x58]
0x007f1e8c: lea    rcx,[rip+0x1e5244d]        # 0x1426442e0
0x007f1e93: call   0x140ad69a0
0x007f1e98: nop
0x007f1e99: lea    rcx,[rbp-0x58]
0x007f1e9d: call   0x14006f7e0
0x007f1ea2: mov    rax,QWORD PTR [rip+0x1ea3c67]        # 0x142695b10
0x007f1ea9: mov    r8,QWORD PTR [rax+r12*8]
0x007f1ead: movsx  rax,WORD PTR [r8+0x4]
0x007f1eb2: cmp    eax,0xd
0x007f1eb5: ja     0x1407f1a10
0x007f1ebb: mov    ecx,DWORD PTR [r15+rax*4+0x7f43a4]
0x007f1ec3: add    rcx,r15
0x007f1ec6: jmp    rcx
0x007f1ec8: lea    rdx,[rip+0xe432e5]        # 0x1416351b4 ; literal="Miasma"
0x007f1ecf: lea    rcx,[rbp-0x30]
0x007f1ed3: call   0x14006f510
0x007f1ed8: jmp    0x1407f1a10
0x007f1edd: lea    rdx,[rip+0xe432b4]        # 0x141635198 ; literal="Steam"
0x007f1ee4: cmp    WORD PTR [r8+0x6],0x1
0x007f1eea: lea    rax,[rip+0xe432af]        # 0x1416351a0 ; literal="Mist"
0x007f1ef1: cmovne rdx,rax
0x007f1ef5: lea    rcx,[rbp-0x30]
0x007f1ef9: call   0x14006f510
0x007f1efe: jmp    0x1407f1a10
0x007f1f03: lea    rdx,[rip+0xe43296]        # 0x1416351a0 ; literal="Mist"
0x007f1f0a: lea    rcx,[rbp-0x30]
0x007f1f0e: call   0x14006f510
0x007f1f13: jmp    0x1407f1a10
0x007f1f18: mov    WORD PTR [rsp+0x30],bx
0x007f1f1d: mov    BYTE PTR [rsp+0x28],0x0
0x007f1f22: mov    DWORD PTR [rsp+0x20],r14d
0x007f1f27: mov    r9d,DWORD PTR [r8+0x8]
0x007f1f2b: movzx  r8d,WORD PTR [r8+0x6]
0x007f1f30: lea    rdx,[rbp-0x30]
0x007f1f34: lea    rcx,[rip+0x1bd94a5]        # 0x1423cb3e0
0x007f1f3b: call   0x1414cc890
0x007f1f40: jmp    0x1407f1a10
0x007f1f45: lea    rdx,[rip+0xe431c4]        # 0x141635110 ; literal="An Ocean Wave"
0x007f1f4c: lea    rcx,[rbp-0x30]
0x007f1f50: call   0x14006f510
0x007f1f55: jmp    0x1407f1a10
0x007f1f5a: lea    rdx,[rip+0xe4317f]        # 0x1416350e0 ; literal="Sea Foam"
0x007f1f61: lea    rcx,[rbp-0x30]
0x007f1f65: call   0x14006f510
0x007f1f6a: jmp    0x1407f1a10
0x007f1f6f: movzx  r9d,WORD PTR [rip+0x10a4329]        # 0x1418962a0
0x007f1f77: movzx  r8d,WORD PTR [rip+0x10a431d]        # 0x14189629c
0x007f1f7f: movzx  edx,WORD PTR [rip+0x10a4312]        # 0x141896298
0x007f1f86: lea    rcx,[rip+0x1bd9453]        # 0x1423cb3e0
0x007f1f8d: call   0x14007dbd0
0x007f1f92: bt     eax,0xf
0x007f1f96: lea    rdx,[rip+0xe43193]        # 0x141635130 ; literal="Lava Mist"
0x007f1f9d: lea    rax,[rip+0xe4314c]        # 0x1416350f0 ; literal="Magma Mist"
0x007f1fa4: cmovb  rdx,rax
0x007f1fa8: lea    rcx,[rbp-0x30]
0x007f1fac: call   0x14006f510
0x007f1fb1: jmp    0x1407f1a10
0x007f1fb6: mov    WORD PTR [rsp+0x30],si
0x007f1fbb: mov    BYTE PTR [rsp+0x28],0x0
0x007f1fc0: mov    DWORD PTR [rsp+0x20],r14d
0x007f1fc5: mov    r9d,DWORD PTR [r8+0x8]
0x007f1fc9: movzx  r8d,WORD PTR [r8+0x6]
0x007f1fce: lea    rdx,[rbp-0x30]
0x007f1fd2: lea    rcx,[rip+0x1bd9407]        # 0x1423cb3e0
0x007f1fd9: call   0x1414cc890
0x007f1fde: lea    rdx,[rip+0xeb6b57]        # 0x1416a8b3c ; literal=" Vapor"
0x007f1fe5: lea    rcx,[rbp-0x30]
0x007f1fe9: call   0x14006f4f0
0x007f1fee: jmp    0x1407f1a10
0x007f1ff3: mov    WORD PTR [rsp+0x30],0x2
0x007f1ffa: jmp    0x1407f1f1d
0x007f1fff: lea    rdx,[rip+0xe4311a]        # 0x141635120 ; literal="Smoke"
0x007f2006: lea    rcx,[rbp-0x30]
0x007f200a: call   0x14006f510
0x007f200f: jmp    0x1407f1a10
0x007f2014: lea    rdx,[rip+0xe0033d]        # 0x1415f2358 ; literal="Dragonfire"
0x007f201b: lea    rcx,[rbp-0x30]
0x007f201f: call   0x14006f510
0x007f2024: jmp    0x1407f1a10
0x007f2029: lea    rdx,[rip+0xe00314]        # 0x1415f2344 ; literal="Fire"
0x007f2030: lea    rcx,[rbp-0x30]
0x007f2034: call   0x14006f510
0x007f2039: jmp    0x1407f1a10
0x007f203e: lea    rdx,[rip+0xe430e3]        # 0x141635128 ; literal="A Web"
0x007f2045: lea    rcx,[rbp-0x30]
0x007f2049: call   0x14006f510
0x007f204e: jmp    0x1407f1a10
0x007f2053: xor    edx,edx
0x007f2055: lea    rcx,[rbp-0x30]
0x007f2059: call   0x14006f4c0
0x007f205e: mov    rax,QWORD PTR [rip+0x1ea3aab]        # 0x142695b10
0x007f2065: mov    rdx,QWORD PTR [rax+r12*8]
0x007f2069: mov    edx,DWORD PTR [rdx+0xc]
0x007f206c: lea    rcx,[rip+0x1bf6fb5]        # 0x1423e9028
0x007f2073: call   0x1403d4040
0x007f2078: mov    rbx,rax
0x007f207b: test   rax,rax
0x007f207e: je     0x1407f20db
0x007f2080: mov    rdx,QWORD PTR [rax]
0x007f2083: mov    rcx,rax
0x007f2086: call   QWORD PTR [rdx]
0x007f2088: cmp    ax,0x1
0x007f208c: jne    0x1407f20db
0x007f208e: mov    DWORD PTR [rsp+0x68],r14d
0x007f2093: mov    DWORD PTR [rsp+0x60],r14d
0x007f2098: mov    BYTE PTR [rsp+0x58],0x0
0x007f209d: mov    eax,0xffffffff
0x007f20a2: mov    DWORD PTR [rsp+0x50],eax
0x007f20a6: mov    DWORD PTR [rsp+0x48],eax
0x007f20aa: mov    QWORD PTR [rsp+0x40],r14
0x007f20af: mov    BYTE PTR [rsp+0x38],0x0
0x007f20b4: mov    DWORD PTR [rsp+0x30],r14d
0x007f20b9: mov    DWORD PTR [rsp+0x28],eax
0x007f20bd: mov    eax,DWORD PTR [rbx+0x18]
0x007f20c0: mov    DWORD PTR [rsp+0x20],eax
0x007f20c4: movzx  r9d,WORD PTR [rbx+0x14]
0x007f20c9: movzx  r8d,WORD PTR [rbx+0x12]
0x007f20ce: movzx  edx,WORD PTR [rbx+0x10]
0x007f20d2: lea    rcx,[rbp-0x30]
0x007f20d6: call   0x140a7fc90
0x007f20db: cmp    QWORD PTR [rbp-0x20],0x0
0x007f20e0: jne    0x1407f1a10
0x007f20e6: lea    rdx,[rip+0xe43013]        # 0x141635100 ; literal="Item Cloud"
0x007f20ed: lea    rcx,[rbp-0x30]
0x007f20f1: call   0x14006f510
0x007f20f6: jmp    0x1407f1a10
0x007f20fb: mov    DWORD PTR [rip+0x1e52267],0x1010004        # 0x14264436c
0x007f2105: mov    DWORD PTR [rip+0x1e52258],r14d        # 0x142644364
0x007f210c: mov    DWORD PTR [rip+0x1e52256],edi        # 0x142644368
0x007f2112: inc    edi
0x007f2114: mov    DWORD PTR [rsp+0x74],edi
0x007f2118: mov    eax,DWORD PTR [rip+0x1b5d19a]        # 0x14234f2b8
0x007f211e: lea    ecx,[rax+rax*4]
0x007f2121: mov    edx,r13d
0x007f2124: sub    edx,ecx
0x007f2126: add    edx,0x52
0x007f2129: call   0x140c364f0
0x007f212e: lea    rdx,[rip+0xe0e92b]        # 0x141600a60 ; literal=" - "
0x007f2135: lea    rcx,[rbp-0x58]
0x007f2139: call   0x1400680e0
0x007f213e: nop
0x007f213f: xor    r9d,r9d
0x007f2142: lea    rdx,[rbp-0x58]
0x007f2146: lea    rcx,[rip+0x1e52193]        # 0x1426442e0
0x007f214d: call   0x140ad69a0
0x007f2152: nop
0x007f2153: lea    rcx,[rbp-0x58]
0x007f2157: call   0x14006f7e0
0x007f215c: lea    rdx,[rip+0xe42f49]        # 0x1416350ac ; literal="A Fire"
0x007f2163: lea    rcx,[rbp-0x58]
0x007f2167: call   0x1400680e0
0x007f216c: nop
0x007f216d: xor    r9d,r9d
0x007f2170: lea    rdx,[rbp-0x58]
0x007f2174: lea    rcx,[rip+0x1e52165]        # 0x1426442e0
0x007f217b: call   0x140ad69a0
0x007f2180: nop
0x007f2181: lea    rcx,[rbp-0x58]
0x007f2185: jmp    0x1407f2c28
0x007f218a: mov    DWORD PTR [rip+0x1e521d8],0x1010004        # 0x14264436c
0x007f2194: mov    DWORD PTR [rip+0x1e521c9],r14d        # 0x142644364
0x007f219b: mov    DWORD PTR [rip+0x1e521c7],edi        # 0x142644368
0x007f21a1: inc    edi
0x007f21a3: mov    DWORD PTR [rsp+0x74],edi
0x007f21a7: mov    eax,DWORD PTR [rip+0x1b5d10b]        # 0x14234f2b8
0x007f21ad: lea    ecx,[rax+rax*4]
0x007f21b0: mov    edx,r13d
0x007f21b3: sub    edx,ecx
0x007f21b5: add    edx,0x52
0x007f21b8: call   0x140c364f0
0x007f21bd: lea    rdx,[rip+0xe0e89c]        # 0x141600a60 ; literal=" - "
0x007f21c4: lea    rcx,[rbp-0x58]
0x007f21c8: call   0x1400680e0
0x007f21cd: nop
0x007f21ce: xor    r9d,r9d
0x007f21d1: lea    rdx,[rbp-0x58]
0x007f21d5: lea    rcx,[rip+0x1e52104]        # 0x1426442e0
0x007f21dc: call   0x140ad69a0
0x007f21e1: nop
0x007f21e2: lea    rcx,[rbp-0x58]
0x007f21e6: call   0x14006f7e0
0x007f21eb: lea    rdx,[rip+0xe42e86]        # 0x141635078 ; literal="A Campfire"
0x007f21f2: lea    rcx,[rbp-0x58]
0x007f21f6: call   0x1400680e0
0x007f21fb: nop
0x007f21fc: xor    r9d,r9d
0x007f21ff: lea    rdx,[rbp-0x58]
0x007f2203: lea    rcx,[rip+0x1e520d6]        # 0x1426442e0
0x007f220a: call   0x140ad69a0
0x007f220f: nop
0x007f2210: lea    rcx,[rbp-0x58]
0x007f2214: jmp    0x1407f2c28
0x007f2219: mov    DWORD PTR [rip+0x1e52149],0x1010002        # 0x14264436c
0x007f2223: mov    DWORD PTR [rip+0x1e5213a],r14d        # 0x142644364
0x007f222a: mov    DWORD PTR [rip+0x1e52138],edi        # 0x142644368
0x007f2230: inc    edi
0x007f2232: mov    DWORD PTR [rsp+0x74],edi
0x007f2236: mov    eax,DWORD PTR [rip+0x1b5d07c]        # 0x14234f2b8
0x007f223c: lea    ecx,[rax+rax*4]
0x007f223f: mov    edx,r13d
0x007f2242: sub    edx,ecx
0x007f2244: add    edx,0x52
0x007f2247: call   0x140c364f0
0x007f224c: lea    rdx,[rip+0xe0e80d]        # 0x141600a60 ; literal=" - "
0x007f2253: lea    rcx,[rbp-0x58]
0x007f2257: call   0x1400680e0
0x007f225c: nop
0x007f225d: xor    r9d,r9d
0x007f2260: lea    rdx,[rbp-0x58]
0x007f2264: lea    rcx,[rip+0x1e52075]        # 0x1426442e0
0x007f226b: call   0x140ad69a0
0x007f2270: nop
0x007f2271: lea    rcx,[rbp-0x58]
0x007f2275: call   0x14006f7e0
0x007f227a: mov    rax,QWORD PTR [rip+0x1ea388f]        # 0x142695b10
0x007f2281: mov    rcx,QWORD PTR [rax+r12*8]
0x007f2285: movzx  r12d,WORD PTR [rcx+0x1c]
0x007f228a: movzx  ebx,WORD PTR [rcx+0x1e]
0x007f228e: mov    WORD PTR [rbp-0x7c],bx
0x007f2292: movzx  edi,WORD PTR [rcx+0x20]
0x007f2296: mov    WORD PTR [rbp-0x80],di
0x007f229a: lea    rdx,[rip+0xe43327]        # 0x1416355c8 ; literal="Track/Spoor: "
0x007f22a1: lea    rcx,[rbp-0x10]
0x007f22a5: call   0x1400680e0
0x007f22aa: nop
0x007f22ab: mov    rax,QWORD PTR [rip+0x1ea385e]        # 0x142695b10
0x007f22b2: mov    rdx,QWORD PTR [rbp-0x70]
0x007f22b6: mov    rdx,QWORD PTR [rax+rdx*8]
0x007f22ba: movzx  ecx,BYTE PTR [rdx+0x6]
0x007f22be: test   ecx,ecx
0x007f22c0: je     0x1407f2684
0x007f22c6: sub    ecx,0x1
0x007f22c9: je     0x1407f2472
0x007f22cf: sub    ecx,0x1
0x007f22d2: je     0x1407f22e9
0x007f22d4: cmp    ecx,0x1
0x007f22d7: jne    0x1407f2694
0x007f22dd: lea    rdx,[rip+0xe4330c]        # 0x1416355f0 ; literal="unintelligible"
0x007f22e4: jmp    0x1407f268b
0x007f22e9: mov    r13d,DWORD PTR [rdx+0x8]
0x007f22ed: mov    eax,DWORD PTR [rdx+0xc]
0x007f22f0: mov    DWORD PTR [rbp-0x7c],eax
0x007f22f3: mov    r15d,DWORD PTR [rdx+0x10]
0x007f22f7: test   BYTE PTR [rdx+0x4],0x40
0x007f22fb: je     0x1407f23b8
0x007f2301: lea    rax,[rbp-0x68]
0x007f2305: mov    QWORD PTR [rsp+0x38],rax
0x007f230a: lea    rax,[rbp-0x74]
0x007f230e: mov    QWORD PTR [rsp+0x30],rax
0x007f2313: lea    rax,[rbp-0x60]
0x007f2317: mov    QWORD PTR [rsp+0x28],rax
0x007f231c: lea    rax,[rsp+0x7c]
0x007f2321: mov    QWORD PTR [rsp+0x20],rax
0x007f2326: movzx  r9d,di
0x007f232a: movzx  r8d,bx
0x007f232e: movzx  edx,r12w
0x007f2332: lea    rcx,[rip+0x1bd90a7]        # 0x1423cb3e0
0x007f2339: call   0x1414cdc30
0x007f233e: movzx  edi,WORD PTR [rsp+0x7c]
0x007f2343: cmp    di,0xffff
0x007f2347: jne    0x1407f235c
0x007f2349: mov    edi,0x6
0x007f234e: mov    WORD PTR [rsp+0x7c],di
0x007f2353: movzx  ebx,si
0x007f2356: mov    WORD PTR [rbp-0x74],bx
0x007f235a: jmp    0x1407f2360
0x007f235c: movzx  ebx,WORD PTR [rbp-0x74]
0x007f2360: lea    rcx,[rbp+0x10]
0x007f2364: call   0x14006f620
0x007f2369: nop
0x007f236a: mov    WORD PTR [rsp+0x30],bx
0x007f236f: mov    BYTE PTR [rsp+0x28],0x1
0x007f2374: mov    DWORD PTR [rsp+0x20],r14d
0x007f2379: mov    r9d,DWORD PTR [rbp-0x60]
0x007f237d: movzx  r8d,di
0x007f2381: lea    rdx,[rbp+0x10]
0x007f2385: lea    rcx,[rip+0x1bd9054]        # 0x1423cb3e0
0x007f238c: call   0x1414cc890
0x007f2391: lea    rdx,[rbp+0x10]
0x007f2395: lea    rcx,[rbp-0x10]
0x007f2399: call   0x1400b9ca0
0x007f239e: lea    rdx,[rip+0xdf137b]        # 0x1415e3720 ; literal=" "
0x007f23a5: lea    rcx,[rbp-0x10]
0x007f23a9: call   0x14006f4f0
0x007f23ae: nop
0x007f23af: lea    rcx,[rbp+0x10]
0x007f23b3: call   0x14006f7e0
0x007f23b8: test   r15b,0x1
0x007f23bc: je     0x1407f23c7
0x007f23be: lea    rdx,[rip+0xe4323f]        # 0x141635604 ; literal="right "
0x007f23c5: jmp    0x1407f23d4
0x007f23c7: test   r15b,0x2
0x007f23cb: je     0x1407f23dd
0x007f23cd: lea    rdx,[rip+0xe43238]        # 0x14163560c ; literal="left "
0x007f23d4: lea    rcx,[rbp-0x10]
0x007f23d8: call   0x14006f4f0
0x007f23dd: lea    rcx,[rbp-0x58]
0x007f23e1: call   0x14006f620
0x007f23e6: nop
0x007f23e7: mov    eax,0xffffffff
0x007f23ec: mov    r9d,eax
0x007f23ef: mov    DWORD PTR [rsp+0x68],r14d
0x007f23f4: mov    DWORD PTR [rsp+0x60],r14d
0x007f23f9: mov    BYTE PTR [rsp+0x58],0x0
0x007f23fe: mov    DWORD PTR [rsp+0x50],eax
0x007f2402: mov    DWORD PTR [rsp+0x48],eax
0x007f2406: mov    QWORD PTR [rsp+0x40],r14
0x007f240b: mov    BYTE PTR [rsp+0x38],0x0
0x007f2410: mov    DWORD PTR [rsp+0x30],r14d
0x007f2415: mov    DWORD PTR [rsp+0x28],esi
0x007f2419: mov    DWORD PTR [rsp+0x20],eax
0x007f241d: movzx  r8d,WORD PTR [rbp-0x7c]
0x007f2422: movzx  edx,r13w
0x007f2426: lea    rcx,[rbp-0x58]
0x007f242a: call   0x140a7fc90
0x007f242f: lea    rdx,[rbp-0x58]
0x007f2433: lea    rcx,[rbp-0x10]
0x007f2437: call   0x1400b9ca0
0x007f243c: mov    rax,QWORD PTR [rip+0x1ea36cd]        # 0x142695b10
0x007f2443: mov    r12,QWORD PTR [rbp-0x70]
0x007f2447: mov    rcx,QWORD PTR [rax+r12*8]
0x007f244b: test   BYTE PTR [rcx+0x4],0x40
0x007f244f: lea    rcx,[rbp-0x10]
0x007f2453: lea    rdx,[rip+0xe43156]        # 0x1416355b0 ; literal=" print"
0x007f245a: jne    0x1407f2463
0x007f245c: lea    rdx,[rip+0xe43155]        # 0x1416355b8 ; literal=" imprint"
0x007f2463: call   0x14006f4f0
0x007f2468: nop
0x007f2469: lea    rcx,[rbp-0x58]
0x007f246d: jmp    0x1407f2672
0x007f2472: movsxd rax,DWORD PTR [rdx+0xc]
0x007f2476: lea    rcx,[rax*4+0x0]
0x007f247e: mov    rax,QWORD PTR [rip+0x1cf44f3]        # 0x1424e6978
0x007f2485: mov    edi,DWORD PTR [rax+rcx*1]
0x007f2488: mov    rax,QWORD PTR [rip+0x1cf4501]        # 0x1424e6990
0x007f248f: mov    ebx,DWORD PTR [rax+rcx*1]
0x007f2492: movsx  r15,WORD PTR [rdx+0x10]
0x007f2497: movzx  r8d,bx
0x007f249b: movzx  edx,di
0x007f249e: lea    rcx,[rip+0x1cf4493]        # 0x1424e6938
0x007f24a5: call   0x1400bba20
0x007f24aa: mov    r13,rax
0x007f24ad: lea    rcx,[rbp+0x10]
0x007f24b1: call   0x14006f620
0x007f24b6: nop
0x007f24b7: movzx  r9d,bx
0x007f24bb: xor    r8d,r8d
0x007f24be: lea    rdx,[rbp+0x10]
0x007f24c2: movzx  ecx,di
0x007f24c5: call   0x140aa0c50
0x007f24ca: lea    rdx,[rbp+0x10]
0x007f24ce: lea    rcx,[rbp-0x10]
0x007f24d2: call   0x1400b9ca0
0x007f24d7: xor    dil,dil
0x007f24da: mov    rax,QWORD PTR [rip+0x1ea362f]        # 0x142695b10
0x007f24e1: mov    rcx,QWORD PTR [rbp-0x70]
0x007f24e5: mov    rcx,QWORD PTR [rax+rcx*8]
0x007f24e9: test   BYTE PTR [rcx+0x4],0x40
0x007f24ed: je     0x1407f25b1
0x007f24f3: lea    rax,[rbp-0x64]
0x007f24f7: mov    QWORD PTR [rsp+0x38],rax
0x007f24fc: lea    rax,[rsp+0x78]
0x007f2501: mov    QWORD PTR [rsp+0x30],rax
0x007f2506: lea    rax,[rbp-0x5c]
0x007f250a: mov    QWORD PTR [rsp+0x28],rax
0x007f250f: lea    rax,[rsp+0x70]
0x007f2514: mov    QWORD PTR [rsp+0x20],rax
0x007f2519: movzx  r9d,WORD PTR [rbp-0x80]
0x007f251e: movzx  r8d,WORD PTR [rbp-0x7c]
0x007f2523: movzx  edx,r12w
0x007f2527: lea    rcx,[rip+0x1bd8eb2]        # 0x1423cb3e0
0x007f252e: call   0x1414cdc30
0x007f2533: movzx  edi,WORD PTR [rsp+0x70]
0x007f2538: cmp    di,0xffff
0x007f253c: jne    0x1407f2552
0x007f253e: mov    edi,0x6
0x007f2543: mov    WORD PTR [rsp+0x70],di
0x007f2548: movzx  ebx,si
0x007f254b: mov    WORD PTR [rsp+0x78],bx
0x007f2550: jmp    0x1407f2557
0x007f2552: movzx  ebx,WORD PTR [rsp+0x78]
0x007f2557: lea    rdx,[rip+0xdf65fa]        # 0x1415e8b58 ; literal="'s "
0x007f255e: lea    rcx,[rbp-0x10]
0x007f2562: call   0x14006f4f0
0x007f2567: lea    rcx,[rbp-0x58]
0x007f256b: call   0x14006f620
0x007f2570: nop
0x007f2571: mov    WORD PTR [rsp+0x30],bx
0x007f2576: mov    BYTE PTR [rsp+0x28],0x1
0x007f257b: mov    DWORD PTR [rsp+0x20],r14d
0x007f2580: mov    r9d,DWORD PTR [rbp-0x5c]
0x007f2584: movzx  r8d,di
0x007f2588: lea    rdx,[rbp-0x58]
0x007f258c: lea    rcx,[rip+0x1bd8e4d]        # 0x1423cb3e0
0x007f2593: call   0x1414cc890
0x007f2598: lea    rdx,[rbp-0x58]
0x007f259c: lea    rcx,[rbp-0x10]
0x007f25a0: call   0x1400b9ca0
0x007f25a5: mov    dil,0x1
0x007f25a8: lea    rcx,[rbp-0x58]
0x007f25ac: call   0x14006f7e0
0x007f25b1: test   r15w,r15w
0x007f25b5: js     0x1407f2641
0x007f25bb: mov    rcx,QWORD PTR [r13+0x6c0]
0x007f25c2: mov    rax,QWORD PTR [r13+0x6c8]
0x007f25c9: sub    rax,rcx
0x007f25cc: sar    rax,0x3
0x007f25d0: cmp    r15,rax
0x007f25d3: jae    0x1407f2641
0x007f25d5: lea    rbx,[r15*8+0x0]
0x007f25dd: mov    rax,QWORD PTR [rcx+rbx*1]
0x007f25e1: mov    rcx,QWORD PTR [rax+0x98]
0x007f25e8: sub    rcx,QWORD PTR [rax+0x90]
0x007f25ef: sar    rcx,0x3
0x007f25f3: test   rcx,rcx
0x007f25f6: je     0x1407f2641
0x007f25f8: lea    rdx,[rip+0xdf6559]        # 0x1415e8b58 ; literal="'s "
0x007f25ff: test   dil,dil
0x007f2602: lea    rax,[rip+0xdf1117]        # 0x1415e3720 ; literal=" "
0x007f2609: cmovne rdx,rax
0x007f260d: lea    rcx,[rbp-0x10]
0x007f2611: call   0x14006f4f0
0x007f2616: mov    rax,QWORD PTR [r13+0x6c0]
0x007f261d: mov    rcx,QWORD PTR [rax+rbx*1]
0x007f2621: mov    rdx,QWORD PTR [rcx+0x90]
0x007f2628: mov    rdx,QWORD PTR [rdx]
0x007f262b: lea    rcx,[rbp+0x10]
0x007f262f: call   0x14006f530
0x007f2634: lea    rdx,[rbp+0x10]
0x007f2638: lea    rcx,[rbp-0x10]
0x007f263c: call   0x1400b9ca0
0x007f2641: mov    rax,QWORD PTR [rip+0x1ea34c8]        # 0x142695b10
0x007f2648: mov    r12,QWORD PTR [rbp-0x70]
0x007f264c: mov    rcx,QWORD PTR [rax+r12*8]
0x007f2650: test   BYTE PTR [rcx+0x4],0x40
0x007f2654: lea    rcx,[rbp-0x10]
0x007f2658: lea    rdx,[rip+0xe42f51]        # 0x1416355b0 ; literal=" print"
0x007f265f: jne    0x1407f2668
0x007f2661: lea    rdx,[rip+0xe42f50]        # 0x1416355b8 ; literal=" imprint"
0x007f2668: call   0x14006f4f0
0x007f266d: nop
0x007f266e: lea    rcx,[rbp+0x10]
0x007f2672: call   0x14006f7e0
0x007f2677: lea    r15,[rip+0xffffffffff80d982]        # 0x140000000
0x007f267e: mov    r13d,DWORD PTR [rbp-0x78]
0x007f2682: jmp    0x1407f2698
0x007f2684: lea    rdx,[rip+0xe42f4d]        # 0x1416355d8 ; literal="broken vegetation"
0x007f268b: lea    rcx,[rbp-0x10]
0x007f268f: call   0x14006f4f0
0x007f2694: mov    r12,QWORD PTR [rbp-0x70]
0x007f2698: mov    edx,0x32
0x007f269d: lea    rcx,[rbp-0x10]
0x007f26a1: call   0x14052b900
0x007f26a6: mov    rax,QWORD PTR [rip+0x1ea3463]        # 0x142695b10
0x007f26ad: mov    rcx,QWORD PTR [rax+r12*8]
0x007f26b1: movzx  eax,WORD PTR [rcx+0x4]
0x007f26b5: test   al,0x2
0x007f26b7: je     0x1407f2723
0x007f26b9: and    eax,0x1c
0x007f26bc: cdqe
0x007f26be: movzx  eax,BYTE PTR [r15+rax*1+0x7f4400]
0x007f26c7: mov    ecx,DWORD PTR [r15+rax*4+0x7f43dc]
0x007f26cf: add    rcx,r15
0x007f26d2: jmp    rcx
0x007f26d4: lea    rdx,[rip+0xe42f25]        # 0x141635600 ; literal="/N"
0x007f26db: jmp    0x1407f271a
0x007f26dd: lea    rdx,[rip+0xe42e9c]        # 0x141635580 ; literal="/S"
0x007f26e4: jmp    0x1407f271a
0x007f26e6: lea    rdx,[rip+0xe42e97]        # 0x141635584 ; literal="/E"
0x007f26ed: jmp    0x1407f271a
0x007f26ef: lea    rdx,[rip+0xe42e82]        # 0x141635578 ; literal="/W"
0x007f26f6: jmp    0x1407f271a
0x007f26f8: lea    rdx,[rip+0xe42e7d]        # 0x14163557c ; literal="/NE"
0x007f26ff: jmp    0x1407f271a
0x007f2701: lea    rdx,[rip+0xe42ea0]        # 0x1416355a8 ; literal="/NW"
0x007f2708: jmp    0x1407f271a
0x007f270a: lea    rdx,[rip+0xe42e9b]        # 0x1416355ac ; literal="/SE"
0x007f2711: jmp    0x1407f271a
0x007f2713: lea    rdx,[rip+0xe42e6e]        # 0x141635588 ; literal="/SW"
0x007f271a: lea    rcx,[rbp-0x10]
0x007f271e: call   0x14006f4f0
0x007f2723: mov    rax,QWORD PTR [rip+0x1ea33e6]        # 0x142695b10
0x007f272a: mov    rcx,QWORD PTR [rax+r12*8]
0x007f272e: test   BYTE PTR [rcx+0x4],0x20
0x007f2732: je     0x1407f2744
0x007f2734: lea    rdx,[rip+0xe42e55]        # 0x141635590 ; literal="/yours or companion's"
0x007f273b: lea    rcx,[rbp-0x10]
0x007f273f: call   0x14006f4f0
0x007f2744: xor    r9d,r9d
0x007f2747: lea    rdx,[rbp-0x10]
0x007f274b: lea    rcx,[rip+0x1e51b8e]        # 0x1426442e0
0x007f2752: call   0x140ad69a0
0x007f2757: nop
0x007f2758: jmp    0x1407f2c24
0x007f275d: mov    DWORD PTR [rip+0x1e51c05],0x1010001        # 0x14264436c
0x007f2767: mov    DWORD PTR [rip+0x1e51bf6],r14d        # 0x142644364
0x007f276e: mov    DWORD PTR [rip+0x1e51bf4],edi        # 0x142644368
0x007f2774: inc    edi
0x007f2776: mov    DWORD PTR [rsp+0x74],edi
0x007f277a: mov    eax,DWORD PTR [rip+0x1b5cb38]        # 0x14234f2b8
0x007f2780: lea    ecx,[rax+rax*4]
0x007f2783: mov    edx,r13d
0x007f2786: sub    edx,ecx
0x007f2788: add    edx,0x52
0x007f278b: call   0x140c364f0
0x007f2790: lea    rdx,[rip+0xe0e2c9]        # 0x141600a60 ; literal=" - "
0x007f2797: lea    rcx,[rbp+0x10]
0x007f279b: call   0x1400680e0
0x007f27a0: nop
0x007f27a1: xor    r9d,r9d
0x007f27a4: lea    rdx,[rbp+0x10]
0x007f27a8: lea    rcx,[rip+0x1e51b31]        # 0x1426442e0
0x007f27af: call   0x140ad69a0
0x007f27b4: nop
0x007f27b5: lea    rcx,[rbp+0x10]
0x007f27b9: call   0x14006f7e0
0x007f27be: mov    rax,QWORD PTR [rip+0x1ea334b]        # 0x142695b10
0x007f27c5: mov    rcx,QWORD PTR [rax+r12*8]
0x007f27c9: mov    eax,DWORD PTR [rcx+0x4]
0x007f27cc: mov    ecx,eax
0x007f27ce: and    ecx,0x1
0x007f27d1: je     0x1407f27ff
0x007f27d3: and    eax,0x2
0x007f27d6: je     0x1407f2802
0x007f27d8: lea    rdx,[rip+0xe42829]        # 0x141635008 ; literal="Stagnant salt water ["
0x007f27df: lea    rcx,[rbp+0x10]
0x007f27e3: call   0x1400680e0
0x007f27e8: nop
0x007f27e9: xor    r9d,r9d
0x007f27ec: lea    rdx,[rbp+0x10]
0x007f27f0: lea    rcx,[rip+0x1e51ae9]        # 0x1426442e0
0x007f27f7: call   0x140ad69a0
0x007f27fc: nop
0x007f27fd: jmp    0x1407f2875
0x007f27ff: and    eax,0x2
0x007f2802: test   ecx,ecx
0x007f2804: lea    rcx,[rbp+0x10]
0x007f2808: je     0x1407f282d
0x007f280a: lea    rdx,[rip+0xe4280f]        # 0x141635020 ; literal="Stagnant water ["
0x007f2811: call   0x1400680e0
0x007f2816: nop
0x007f2817: xor    r9d,r9d
0x007f281a: lea    rdx,[rbp+0x10]
0x007f281e: lea    rcx,[rip+0x1e51abb]        # 0x1426442e0
0x007f2825: call   0x140ad69a0
0x007f282a: nop
0x007f282b: jmp    0x1407f2875
0x007f282d: test   eax,eax
0x007f282f: je     0x1407f2854
0x007f2831: lea    rdx,[rip+0xe427b8]        # 0x141634ff0 ; literal="Salt water ["
0x007f2838: call   0x1400680e0
0x007f283d: nop
0x007f283e: xor    r9d,r9d
0x007f2841: lea    rdx,[rbp+0x10]
0x007f2845: lea    rcx,[rip+0x1e51a94]        # 0x1426442e0
0x007f284c: call   0x140ad69a0
0x007f2851: nop
0x007f2852: jmp    0x1407f2875
0x007f2854: lea    rdx,[rip+0xe427a5]        # 0x141635000 ; literal="Water ["
0x007f285b: call   0x1400680e0
0x007f2860: nop
0x007f2861: xor    r9d,r9d
0x007f2864: lea    rdx,[rbp+0x10]
0x007f2868: lea    rcx,[rip+0x1e51a71]        # 0x1426442e0
0x007f286f: call   0x140ad69a0
0x007f2874: nop
0x007f2875: lea    rcx,[rbp+0x10]
0x007f2879: call   0x14006f7e0
0x007f287e: lea    rcx,[rbp-0x58]
0x007f2882: call   0x14006f620
0x007f2887: nop
0x007f2888: mov    rax,QWORD PTR [rip+0x1ea3281]        # 0x142695b10
0x007f288f: mov    rcx,QWORD PTR [rax+r12*8]
0x007f2893: movsx  ecx,WORD PTR [rcx+0x8]
0x007f2897: lea    rdx,[rbp-0x58]
0x007f289b: call   0x140529db0
0x007f28a0: xor    r9d,r9d
0x007f28a3: lea    rdx,[rbp-0x58]
0x007f28a7: lea    rcx,[rip+0x1e51a32]        # 0x1426442e0
0x007f28ae: call   0x140ad69a0
0x007f28b3: lea    rdx,[rip+0xe42792]        # 0x14163504c ; literal="/7]"
0x007f28ba: lea    rcx,[rbp+0x10]
0x007f28be: call   0x1400680e0
0x007f28c3: nop
0x007f28c4: xor    r9d,r9d
0x007f28c7: lea    rdx,[rbp+0x10]
0x007f28cb: lea    rcx,[rip+0x1e51a0e]        # 0x1426442e0
0x007f28d2: call   0x140ad69a0
0x007f28d7: nop
0x007f28d8: lea    rcx,[rbp+0x10]
0x007f28dc: call   0x14006f7e0
0x007f28e1: nop
0x007f28e2: lea    rcx,[rbp-0x58]
0x007f28e6: jmp    0x1407f2c28
0x007f28eb: mov    DWORD PTR [rip+0x1e51a77],0x1010004        # 0x14264436c
0x007f28f5: mov    DWORD PTR [rip+0x1e51a68],r14d        # 0x142644364
0x007f28fc: mov    DWORD PTR [rip+0x1e51a66],edi        # 0x142644368
0x007f2902: inc    edi
0x007f2904: mov    DWORD PTR [rsp+0x74],edi
0x007f2908: mov    eax,DWORD PTR [rip+0x1b5c9aa]        # 0x14234f2b8
0x007f290e: lea    ecx,[rax+rax*4]
0x007f2911: mov    edx,r13d
0x007f2914: sub    edx,ecx
0x007f2916: add    edx,0x52
0x007f2919: call   0x140c364f0
0x007f291e: lea    rdx,[rip+0xe0e13b]        # 0x141600a60 ; literal=" - "
0x007f2925: lea    rcx,[rbp+0x10]
0x007f2929: call   0x1400680e0
0x007f292e: nop
0x007f292f: xor    r9d,r9d
0x007f2932: lea    rdx,[rbp+0x10]
0x007f2936: lea    rcx,[rip+0x1e519a3]        # 0x1426442e0
0x007f293d: call   0x140ad69a0
0x007f2942: nop
0x007f2943: lea    rcx,[rbp+0x10]
0x007f2947: call   0x14006f7e0
0x007f294c: movzx  r9d,WORD PTR [rip+0x10a394c]        # 0x1418962a0
0x007f2954: movzx  r8d,WORD PTR [rip+0x10a3940]        # 0x14189629c
0x007f295c: movzx  edx,WORD PTR [rip+0x10a3935]        # 0x141896298
0x007f2963: lea    rcx,[rip+0x1bd8a76]        # 0x1423cb3e0
0x007f296a: call   0x14007dbd0
0x007f296f: lea    rcx,[rbp+0x10]
0x007f2973: bt     eax,0xf
0x007f2977: jb     0x1407f299c
0x007f2979: lea    rdx,[rip+0xe426b4]        # 0x141635034 ; literal="Lava ["
0x007f2980: call   0x1400680e0
0x007f2985: nop
0x007f2986: xor    r9d,r9d
0x007f2989: lea    rdx,[rbp+0x10]
0x007f298d: lea    rcx,[rip+0x1e5194c]        # 0x1426442e0
0x007f2994: call   0x140ad69a0
0x007f2999: nop
0x007f299a: jmp    0x1407f29bd
0x007f299c: lea    rdx,[rip+0xe426ad]        # 0x141635050 ; literal="Magma ["
0x007f29a3: call   0x1400680e0
0x007f29a8: nop
0x007f29a9: xor    r9d,r9d
0x007f29ac: lea    rdx,[rbp+0x10]
0x007f29b0: lea    rcx,[rip+0x1e51929]        # 0x1426442e0
0x007f29b7: call   0x140ad69a0
0x007f29bc: nop
0x007f29bd: lea    rcx,[rbp+0x10]
0x007f29c1: call   0x14006f7e0
0x007f29c6: lea    rcx,[rbp-0x58]
0x007f29ca: call   0x14006f620
0x007f29cf: nop
0x007f29d0: mov    rax,QWORD PTR [rip+0x1ea3139]        # 0x142695b10
0x007f29d7: mov    rcx,QWORD PTR [rax+r12*8]
0x007f29db: movsx  ecx,WORD PTR [rcx+0x8]
0x007f29df: lea    rdx,[rbp-0x58]
0x007f29e3: call   0x140529db0
0x007f29e8: xor    r9d,r9d
0x007f29eb: lea    rdx,[rbp-0x58]
0x007f29ef: lea    rcx,[rip+0x1e518ea]        # 0x1426442e0
0x007f29f6: call   0x140ad69a0
0x007f29fb: lea    rdx,[rip+0xe4264a]        # 0x14163504c ; literal="/7]"
0x007f2a02: lea    rcx,[rbp+0x10]
0x007f2a06: call   0x1400680e0
0x007f2a0b: nop
0x007f2a0c: xor    r9d,r9d
0x007f2a0f: lea    rdx,[rbp+0x10]
0x007f2a13: lea    rcx,[rip+0x1e518c6]        # 0x1426442e0
0x007f2a1a: call   0x140ad69a0
0x007f2a1f: nop
0x007f2a20: lea    rcx,[rbp+0x10]
0x007f2a24: call   0x14006f7e0
0x007f2a29: nop
0x007f2a2a: lea    rcx,[rbp-0x58]
0x007f2a2e: jmp    0x1407f2c28
0x007f2a33: cmp    DWORD PTR [rdx+0x4],0xffffffff
0x007f2a37: je     0x1407f2a45
0x007f2a39: mov    DWORD PTR [rip+0x1e51929],0x1000002        # 0x14264436c
0x007f2a43: jmp    0x1407f2a64
0x007f2a45: mov    WORD PTR [rsp+0x20],r14w
0x007f2a4b: movzx  r9d,WORD PTR [rdx+0x14]
0x007f2a50: mov    r8d,DWORD PTR [rdx+0x10]
0x007f2a54: movzx  edx,WORD PTR [rdx+0xc]
0x007f2a58: lea    rcx,[rip+0x1bd8981]        # 0x1423cb3e0
0x007f2a5f: call   0x1414cce60
0x007f2a64: mov    DWORD PTR [rip+0x1e518f9],r14d        # 0x142644364
0x007f2a6b: mov    DWORD PTR [rip+0x1e518f7],edi        # 0x142644368
0x007f2a71: inc    edi
0x007f2a73: mov    DWORD PTR [rsp+0x74],edi
0x007f2a77: mov    eax,DWORD PTR [rip+0x1b5c83b]        # 0x14234f2b8
0x007f2a7d: lea    ecx,[rax+rax*4]
0x007f2a80: mov    edx,r13d
0x007f2a83: sub    edx,ecx
0x007f2a85: add    edx,0x52
0x007f2a88: call   0x140c364f0
0x007f2a8d: lea    rdx,[rip+0xe0dfcc]        # 0x141600a60 ; literal=" - "
0x007f2a94: lea    rcx,[rbp-0x58]
0x007f2a98: call   0x1400680e0
0x007f2a9d: nop
0x007f2a9e: xor    r9d,r9d
0x007f2aa1: lea    rdx,[rbp-0x58]
0x007f2aa5: lea    rcx,[rip+0x1e51834]        # 0x1426442e0
0x007f2aac: call   0x140ad69a0
0x007f2ab1: nop
0x007f2ab2: lea    rcx,[rbp-0x58]
0x007f2ab6: call   0x14006f7e0
0x007f2abb: lea    rcx,[rbp-0x10]
0x007f2abf: call   0x14006f620
0x007f2ac4: nop
0x007f2ac5: mov    rax,QWORD PTR [rip+0x1ea3044]        # 0x142695b10
0x007f2acc: mov    r8,QWORD PTR [rax+r12*8]
0x007f2ad0: mov    edx,DWORD PTR [r8+0x4]
0x007f2ad4: cmp    edx,0xffffffff
0x007f2ad7: je     0x1407f2b31
0x007f2ad9: mov    eax,DWORD PTR [r8+0x10]
0x007f2add: mov    DWORD PTR [rsp+0x68],r14d
0x007f2ae2: mov    DWORD PTR [rsp+0x60],r14d
0x007f2ae7: mov    BYTE PTR [rsp+0x58],0x0
0x007f2aec: mov    ecx,0xffffffff
0x007f2af1: mov    DWORD PTR [rsp+0x50],ecx
0x007f2af5: mov    DWORD PTR [rsp+0x48],ecx
0x007f2af9: mov    QWORD PTR [rsp+0x40],r14
0x007f2afe: mov    BYTE PTR [rsp+0x38],0x0
0x007f2b03: mov    DWORD PTR [rsp+0x30],r14d
0x007f2b08: mov    DWORD PTR [rsp+0x28],ecx
0x007f2b0c: mov    DWORD PTR [rsp+0x20],eax
0x007f2b10: movzx  r9d,WORD PTR [r8+0xc]
0x007f2b15: movzx  r8d,WORD PTR [r8+0x8]
0x007f2b1a: lea    rcx,[rbp-0x10]
0x007f2b1e: call   0x140a7fc90
0x007f2b23: lea    rcx,[rbp-0x10]
0x007f2b27: call   0x14052b070
0x007f2b2c: jmp    0x1407f2c10
0x007f2b31: movsx  ecx,WORD PTR [r8+0x18]
0x007f2b36: mov    edx,DWORD PTR [r8+0x14]
0x007f2b3a: test   edx,edx
0x007f2b3c: je     0x1407f2b87
0x007f2b3e: cmp    edx,0x1
0x007f2b41: je     0x1407f2b5d
0x007f2b43: sub    ecx,0x1
0x007f2b46: je     0x1407f2b54
0x007f2b48: sub    ecx,0x1
0x007f2b4b: je     0x1407f2b9f
0x007f2b4d: cmp    ecx,0x1
0x007f2b50: je     0x1407f2b96
0x007f2b52: jmp    0x1407f2bb8
0x007f2b54: lea    rdx,[rip+0xe4255d]        # 0x1416350b8 ; literal="A dusting of "
0x007f2b5b: jmp    0x1407f2baf
0x007f2b5d: sub    ecx,0x1
0x007f2b60: je     0x1407f2b7e
0x007f2b62: sub    ecx,0x1
0x007f2b65: je     0x1407f2b75
0x007f2b67: cmp    ecx,0x1
0x007f2b6a: jne    0x1407f2bb8
0x007f2b6c: lea    rdx,[rip+0xe424f5]        # 0x141635068 ; literal="A pool of "
0x007f2b73: jmp    0x1407f2baf
0x007f2b75: lea    rdx,[rip+0xe424dc]        # 0x141635058 ; literal="A smear of "
0x007f2b7c: jmp    0x1407f2baf
0x007f2b7e: lea    rdx,[rip+0xe42503]        # 0x141635088 ; literal="A spattering of "
0x007f2b85: jmp    0x1407f2baf
0x007f2b87: sub    ecx,0x1
0x007f2b8a: je     0x1407f2ba8
0x007f2b8c: sub    ecx,0x1
0x007f2b8f: je     0x1407f2b9f
0x007f2b91: cmp    ecx,0x1
0x007f2b94: jne    0x1407f2bb8
0x007f2b96: lea    rdx,[rip+0xe42503]        # 0x1416350a0 ; literal="A pile of "
0x007f2b9d: jmp    0x1407f2baf
0x007f2b9f: lea    rdx,[rip+0xe42522]        # 0x1416350c8 ; literal="A small pile of "
0x007f2ba6: jmp    0x1407f2baf
0x007f2ba8: lea    rdx,[rip+0xeb5f79]        # 0x1416a8b28 ; literal="A thin layer of "
0x007f2baf: lea    rcx,[rbp-0x10]
0x007f2bb3: call   0x14006f510
0x007f2bb8: lea    rcx,[rbp-0x58]
0x007f2bbc: call   0x14006f620
0x007f2bc1: nop
0x007f2bc2: mov    rax,QWORD PTR [rip+0x1ea2f47]        # 0x142695b10
0x007f2bc9: mov    rcx,QWORD PTR [rax+r12*8]
0x007f2bcd: movzx  eax,WORD PTR [rcx+0x14]
0x007f2bd1: mov    WORD PTR [rsp+0x30],ax
0x007f2bd6: mov    BYTE PTR [rsp+0x28],0x0
0x007f2bdb: mov    DWORD PTR [rsp+0x20],r14d
0x007f2be0: mov    r9d,DWORD PTR [rcx+0x10]
0x007f2be4: movzx  r8d,WORD PTR [rcx+0xc]
0x007f2be9: lea    rdx,[rbp-0x58]
0x007f2bed: lea    rcx,[rip+0x1bd87ec]        # 0x1423cb3e0
0x007f2bf4: call   0x1414cc890
0x007f2bf9: lea    rdx,[rbp-0x58]
0x007f2bfd: lea    rcx,[rbp-0x10]
0x007f2c01: call   0x1400b9ca0
0x007f2c06: nop
0x007f2c07: lea    rcx,[rbp-0x58]
0x007f2c0b: call   0x14006f7e0
0x007f2c10: xor    r9d,r9d
0x007f2c13: lea    rdx,[rbp-0x10]
0x007f2c17: lea    rcx,[rip+0x1e516c2]        # 0x1426442e0
0x007f2c1e: call   0x140ad69a0
0x007f2c23: nop
0x007f2c24: lea    rcx,[rbp-0x10]
0x007f2c28: call   0x14006f7e0
0x007f2c2d: inc    r13d
0x007f2c30: mov    DWORD PTR [rbp-0x78],r13d
0x007f2c34: inc    r12
0x007f2c37: mov    QWORD PTR [rbp-0x70],r12
0x007f2c3b: mov    eax,DWORD PTR [rip+0x1b5c677]        # 0x14234f2b8
0x007f2c41: inc    eax
0x007f2c43: lea    ecx,[rax+rax*4]
0x007f2c46: cmp    r13d,ecx
0x007f2c49: mov    edi,DWORD PTR [rsp+0x74]
0x007f2c4d: mov    ebx,0x3
0x007f2c52: jl     0x1407f1940
0x007f2c58: lea    rcx,[rbp-0x30]
0x007f2c5c: call   0x14006f7e0
0x007f2c61: jmp    0x1407f4341
0x007f2c66: sub    ax,0x1b
0x007f2c6a: mov    ecx,0xfffb
0x007f2c6f: test   cx,ax
0x007f2c72: je     0x1407f36b4
0x007f2c78: mov    r8d,DWORD PTR [rip+0x10b421d]        # 0x1418a6e9c
0x007f2c7f: mov    eax,DWORD PTR [rip+0x10b421b]        # 0x1418a6ea0
0x007f2c85: cmp    r8d,r12d
0x007f2c88: jne    0x1407f2ca9
0x007f2c8a: cmp    eax,r12d
0x007f2c8d: je     0x1407f2ca9
0x007f2c8f: mov    eax,r12d
0x007f2c92: mov    DWORD PTR [rip+0x10b4208],eax        # 0x1418a6ea0
0x007f2c98: mov    edx,0x2
0x007f2c9d: lea    rcx,[rip+0x1e5163c]        # 0x1426442e0
0x007f2ca4: call   0x140ae4c40
0x007f2ca9: mov    r15d,r12d
0x007f2cac: mov    DWORD PTR [rsp+0x74],r12d
0x007f2cb1: mov    ebx,r12d
0x007f2cb4: mov    edi,r12d
0x007f2cb7: cmp    r8d,r12d
0x007f2cba: je     0x1407f3207
0x007f2cc0: cmp    eax,r8d
0x007f2cc3: je     0x1407f30b7
0x007f2cc9: lea    rcx,[rip+0x10b41d8]        # 0x1418a6ea8
0x007f2cd0: call   0x1400bb940
0x007f2cd5: mov    edx,DWORD PTR [rip+0x10b41c1]        # 0x1418a6e9c
0x007f2cdb: mov    DWORD PTR [rip+0x10b41bf],edx        # 0x1418a6ea0
0x007f2ce1: mov    DWORD PTR [rip+0x10b41d5],0x1e        # 0x1418a6ec0
0x007f2ceb: mov    rcx,QWORD PTR [rip+0x1cf2d56]        # 0x1424e5a48
0x007f2cf2: call   0x14007dab0
0x007f2cf7: mov    r15,rax
0x007f2cfa: test   rax,rax
0x007f2cfd: je     0x1407f30b7
0x007f2d03: cmp    QWORD PTR [rip+0x1bec2f6],r14        # 0x1423df000
0x007f2d0a: je     0x1407f30b7
0x007f2d10: lea    rdx,[rip+0xdf5cad]        # 0x1415e89c4 ; literal="The "
0x007f2d17: lea    rcx,[rbp-0x30]
0x007f2d1b: call   0x1400680e0
0x007f2d20: nop
0x007f2d21: lea    rcx,[rbp-0x10]
0x007f2d25: call   0x14006f620
0x007f2d2a: nop
0x007f2d2b: lea    rdx,[rbp-0x10]
0x007f2d2f: mov    rcx,r15
0x007f2d32: call   0x1410c6d80
0x007f2d37: cmp    QWORD PTR [rbp+0x0],0x0
0x007f2d3c: je     0x1407f2d5b
0x007f2d3e: lea    rdx,[rbp-0x10]
0x007f2d42: lea    rcx,[rbp-0x30]
0x007f2d46: call   0x1400b9ca0
0x007f2d4b: lea    rdx,[rip+0xdf09ce]        # 0x1415e3720 ; literal=" "
0x007f2d52: lea    rcx,[rbp-0x30]
0x007f2d56: call   0x14006f4f0
0x007f2d5b: cmp    WORD PTR [r15+0x80],0xa
0x007f2d64: je     0x1407f2dcc
0x007f2d66: mov    rcx,r15
0x007f2d69: call   0x14107d530
0x007f2d6e: mov    rbx,rax
0x007f2d71: test   rax,rax
0x007f2d74: je     0x1407f2d86
0x007f2d76: mov    ecx,DWORD PTR [rax+0x9c]
0x007f2d7c: shr    ecx,0xa
0x007f2d7f: not    ecx
0x007f2d81: and    ecx,0x1
0x007f2d84: jmp    0x1407f2d89
0x007f2d86: mov    ecx,r14d
0x007f2d89: test   ecx,ecx
0x007f2d8b: je     0x1407f2dcc
0x007f2d8d: lea    rcx,[rbp-0x58]
0x007f2d91: call   0x14006f620
0x007f2d96: nop
0x007f2d97: mov    r8d,r12d
0x007f2d9a: lea    rdx,[rbp-0x58]
0x007f2d9e: movzx  ecx,WORD PTR [rbx+0x98]
0x007f2da5: call   0x140aa07f0
0x007f2daa: lea    rdx,[rbp-0x58]
0x007f2dae: lea    rcx,[rbp-0x30]
0x007f2db2: call   0x1400b9ca0
0x007f2db7: mov    dl,0x20
0x007f2db9: lea    rcx,[rbp-0x30]
0x007f2dbd: call   0x1400b9b10
0x007f2dc2: nop
0x007f2dc3: lea    rcx,[rbp-0x58]
0x007f2dc7: call   0x14006f7e0
0x007f2dcc: lea    rdx,[rbp-0x10]
0x007f2dd0: mov    rcx,r15
0x007f2dd3: call   0x1410c6dc0
0x007f2dd8: lea    rdx,[rbp-0x10]
0x007f2ddc: lea    rcx,[rbp-0x30]
0x007f2de0: call   0x1400b9ca0
0x007f2de5: cmp    BYTE PTR [r15+0x72],0x0
0x007f2dea: je     0x1407f2e2f
0x007f2dec: lea    rdx,[rip+0xdf36dd]        # 0x1415e64d0 ; literal=" of "
0x007f2df3: lea    rcx,[rbp-0x30]
0x007f2df7: call   0x14006f4f0
0x007f2dfc: lea    rcx,[rbp-0x58]
0x007f2e00: call   0x14006f620
0x007f2e05: nop
0x007f2e06: xor    r9d,r9d
0x007f2e09: mov    r8b,0x1
0x007f2e0c: lea    rdx,[rbp-0x58]
0x007f2e10: mov    rcx,r15
0x007f2e13: call   0x140a91760
0x007f2e18: lea    rdx,[rbp-0x58]
0x007f2e1c: lea    rcx,[rbp-0x30]
0x007f2e20: call   0x1400b9ca0
0x007f2e25: nop
0x007f2e26: lea    rcx,[rbp-0x58]
0x007f2e2a: call   0x14006f7e0
0x007f2e2f: cmp    WORD PTR [r15+0x80],0x3
0x007f2e38: jne    0x1407f2e4b
0x007f2e3a: cmp    DWORD PTR [r15+0x34c],0x0
0x007f2e42: lea    rdx,[rip+0xe0593f]        # 0x1415f8788 ; literal=" are "
0x007f2e49: je     0x1407f2e52
0x007f2e4b: lea    rdx,[rip+0xdff2ce]        # 0x1415f2120 ; literal=" is "
0x007f2e52: lea    rcx,[rbp-0x30]
0x007f2e56: call   0x14006f4f0
0x007f2e5b: lea    r9,[rsp+0x7c]
0x007f2e60: lea    r8,[rsp+0x78]
0x007f2e65: lea    rdx,[rsp+0x70]
0x007f2e6a: mov    rcx,QWORD PTR [rip+0x1bec18f]        # 0x1423df000
0x007f2e71: call   0x1413623a0
0x007f2e76: mov    BYTE PTR [rsp+0x28],0x0
0x007f2e7b: mov    BYTE PTR [rsp+0x20],0x1
0x007f2e80: movzx  r9d,WORD PTR [rsp+0x7c]
0x007f2e86: movzx  r8d,WORD PTR [rsp+0x78]
0x007f2e8c: movzx  edx,WORD PTR [rsp+0x70]
0x007f2e91: lea    rcx,[rip+0x1bd8548]        # 0x1423cb3e0
0x007f2e98: call   0x1414a5470
0x007f2e9d: mov    r13,rax
0x007f2ea0: mov    BYTE PTR [rsp+0x20],0x1
0x007f2ea5: movzx  r9d,WORD PTR [rsp+0x7c]
0x007f2eab: movzx  r8d,WORD PTR [rsp+0x78]
0x007f2eb1: movzx  edx,WORD PTR [rsp+0x70]
0x007f2eb6: lea    rcx,[rip+0x1bd8523]        # 0x1423cb3e0
0x007f2ebd: call   0x1414a5280
0x007f2ec2: mov    QWORD PTR [rbp-0x70],rax
0x007f2ec6: movsx  ebx,WORD PTR [rsp+0x78]
0x007f2ecb: mov    r8d,ebx
0x007f2ece: movsx  esi,WORD PTR [rsp+0x70]
0x007f2ed3: mov    edx,esi
0x007f2ed5: mov    rcx,r15
0x007f2ed8: call   0x14107e190
0x007f2edd: movsxd r12,eax
0x007f2ee0: test   r13,r13
0x007f2ee3: je     0x1407f2f47
0x007f2ee5: mov    rcx,QWORD PTR [rip+0x1bec114]        # 0x1423df000
0x007f2eec: call   0x1413a05d0
0x007f2ef1: mov    rdx,QWORD PTR [r13+0x310]
0x007f2ef8: test   rdx,rdx
0x007f2efb: je     0x1407f2f06
0x007f2efd: cmp    DWORD PTR [rdx+0x20],0xfff0bdc0
0x007f2f04: jne    0x1407f2f3d
0x007f2f06: cmp    r15,r13
0x007f2f09: jne    0x1407f2f3d
0x007f2f0b: movzx  r9d,WORD PTR [rsp+0x7c]
0x007f2f11: movzx  ebx,WORD PTR [rsp+0x78]
0x007f2f16: movzx  r8d,bx
0x007f2f1a: movzx  esi,WORD PTR [rsp+0x70]
0x007f2f1f: movzx  edx,si
0x007f2f22: lea    rcx,[rip+0x1bd84b7]        # 0x1423cb3e0
0x007f2f29: call   0x14007dbd0
0x007f2f2e: bt     eax,0x8
0x007f2f32: jb     0x1407f2f4d
0x007f2f34: cmp    QWORD PTR [rbp-0x70],0x0
0x007f2f39: jne    0x1407f2f4d
0x007f2f3b: jmp    0x1407f2f47
0x007f2f3d: movzx  ebx,WORD PTR [rsp+0x78]
0x007f2f42: movzx  esi,WORD PTR [rsp+0x70]
0x007f2f47: cmp    r12d,0xffffffff
0x007f2f4b: jne    0x1407f2f59
0x007f2f4d: lea    rdx,[rip+0xe4e9fc]        # 0x141641950 ; literal="here"
0x007f2f54: jmp    0x1407f3073
0x007f2f59: movsx  r8d,bx
0x007f2f5d: movsx  edx,si
0x007f2f60: mov    rcx,r15
0x007f2f63: call   0x14107e090
0x007f2f68: cmp    eax,0x64
0x007f2f6b: jle    0x1407f2f76
0x007f2f6d: lea    rdx,[rip+0xe53b78]        # 0x141646aec ; literal="far"
0x007f2f74: jmp    0x1407f2fab
0x007f2f76: cmp    eax,0x40
0x007f2f79: jl     0x1407f2f84
0x007f2f7b: lea    rdx,[rip+0xeb6b86]        # 0x1416a9b08 ; literal="a day's travel"
0x007f2f82: jmp    0x1407f2fab
0x007f2f84: cmp    eax,0x24
0x007f2f87: jl     0x1407f2f92
0x007f2f89: lea    rdx,[rip+0xeb6b60]        # 0x1416a9af0 ; literal="nearly a day's travel"
0x007f2f90: jmp    0x1407f2fab
0x007f2f92: cmp    eax,0x9
0x007f2f95: jl     0x1407f2fa0
0x007f2f97: lea    rdx,[rip+0xeb6ad2]        # 0x1416a9a70 ; literal="a half day's travel"
0x007f2f9e: jmp    0x1407f2fab
0x007f2fa0: test   eax,eax
0x007f2fa2: js     0x1407f2fb4
0x007f2fa4: lea    rdx,[rip+0xeb6ab5]        # 0x1416a9a60 ; literal="a short walk"
0x007f2fab: lea    rcx,[rbp-0x30]
0x007f2faf: call   0x14006f4f0
0x007f2fb4: lea    rdx,[rip+0xe7af3d]        # 0x14166def8 ; literal=" to the "
0x007f2fbb: lea    rcx,[rbp-0x30]
0x007f2fbf: call   0x14006f4f0
0x007f2fc4: cmp    r12d,0xf
0x007f2fc8: ja     0x1407f307c
0x007f2fce: lea    rdx,[rip+0xffffffffff80d02b]        # 0x140000000
0x007f2fd5: mov    eax,DWORD PTR [rdx+r12*4+0x7f4420]
0x007f2fdd: add    rax,rdx
0x007f2fe0: jmp    rax
0x007f2fe2: lea    rdx,[rip+0xe43a53]        # 0x141636a3c ; literal="north"
0x007f2fe9: jmp    0x1407f3073
0x007f2fee: lea    rdx,[rip+0xeb6aa3]        # 0x1416a9a98 ; literal="north-northeast"
0x007f2ff5: jmp    0x1407f3073
0x007f2ff7: lea    rdx,[rip+0xe4ec6a]        # 0x141641c68 ; literal="northeast"
0x007f2ffe: jmp    0x1407f3073
0x007f3000: lea    rdx,[rip+0xeb6a81]        # 0x1416a9a88 ; literal="east-northeast"
0x007f3007: jmp    0x1407f3073
0x007f3009: lea    rdx,[rip+0xe43a1c]        # 0x141636a2c ; literal="east"
0x007f3010: jmp    0x1407f3073
0x007f3012: lea    rdx,[rip+0xeb6b87]        # 0x1416a9ba0 ; literal="east-southeast"
0x007f3019: jmp    0x1407f3073
0x007f301b: lea    rdx,[rip+0xe4ebd6]        # 0x141641bf8 ; literal="southeast"
0x007f3022: jmp    0x1407f3073
0x007f3024: lea    rdx,[rip+0xeb6b65]        # 0x1416a9b90 ; literal="south-southeast"
0x007f302b: jmp    0x1407f3073
0x007f302d: lea    rdx,[rip+0xe43a10]        # 0x141636a44 ; literal="south"
0x007f3034: jmp    0x1407f3073
0x007f3036: lea    rdx,[rip+0xeb6b83]        # 0x1416a9bc0 ; literal="south-southwest"
0x007f303d: jmp    0x1407f3073
0x007f303f: lea    rdx,[rip+0xe4ec32]        # 0x141641c78 ; literal="southwest"
0x007f3046: jmp    0x1407f3073
0x007f3048: lea    rdx,[rip+0xeb6b61]        # 0x1416a9bb0 ; literal="west-southwest"
0x007f304f: jmp    0x1407f3073
0x007f3051: lea    rdx,[rip+0xe439dc]        # 0x141636a34 ; literal="west"
0x007f3058: jmp    0x1407f3073
0x007f305a: lea    rdx,[rip+0xeb6ac7]        # 0x1416a9b28 ; literal="west-northwest"
0x007f3061: jmp    0x1407f3073
0x007f3063: lea    rdx,[rip+0xe4ebee]        # 0x141641c58 ; literal="northwest"
0x007f306a: jmp    0x1407f3073
0x007f306c: lea    rdx,[rip+0xeb6aa5]        # 0x1416a9b18 ; literal="north-northwest"
0x007f3073: lea    rcx,[rbp-0x30]
0x007f3077: call   0x14006f4f0
0x007f307c: lea    rdx,[rip+0xdf04f1]        # 0x1415e3574 ; literal="."
0x007f3083: lea    rcx,[rbp-0x30]
0x007f3087: call   0x14006f4f0
0x007f308c: mov    r8d,DWORD PTR [rip+0x10b3e2d]        # 0x1418a6ec0
0x007f3093: lea    rdx,[rbp-0x30]
0x007f3097: lea    rcx,[rip+0x10b3e0a]        # 0x1418a6ea8
0x007f309e: call   0x1408e4b80
0x007f30a3: nop
0x007f30a4: lea    rcx,[rbp-0x10]
0x007f30a8: call   0x14006f7e0
0x007f30ad: nop
0x007f30ae: lea    rcx,[rbp-0x30]
0x007f30b2: call   0x14006f7e0
0x007f30b7: mov    rdi,QWORD PTR [rip+0x10b3df2]        # 0x1418a6eb0
0x007f30be: mov    r15,rdi
0x007f30c1: mov    rbx,QWORD PTR [rip+0x10b3de0]        # 0x1418a6ea8
0x007f30c8: sub    r15,rbx
0x007f30cb: sar    r15,0x3
0x007f30cf: test   r15,r15
0x007f30d2: je     0x1407f36a4
0x007f30d8: mov    esi,DWORD PTR [rip+0x10b3de2]        # 0x1418a6ec0
0x007f30de: add    esi,0x11
0x007f30e1: add    r15d,0x1
0x007f30e5: js     0x1407f31c5
0x007f30eb: nop    DWORD PTR [rax+rax*1+0x0]
0x007f30f0: mov    ebx,0xd
0x007f30f5: cmp    esi,ebx
0x007f30f7: jl     0x1407f31ab
0x007f30fd: nop    DWORD PTR [rax]
0x007f3100: mov    DWORD PTR [rip+0x1e5125e],ebx        # 0x142644364
0x007f3106: mov    DWORD PTR [rip+0x1e5125b],r14d        # 0x142644368
0x007f310d: xor    r8d,r8d
0x007f3110: xor    edx,edx
0x007f3112: lea    rcx,[rip+0x1e511c7]        # 0x1426442e0
0x007f3119: call   0x1400bb120
0x007f311e: test   r14d,r14d
0x007f3121: jne    0x1407f314b
0x007f3123: cmp    ebx,0xd
0x007f3126: jne    0x1407f3130
0x007f3128: mov    edx,DWORD PTR [rip+0x1e52ad6]        # 0x142645c04
0x007f312e: jmp    0x1407f3195
0x007f3130: lea    rcx,[rip+0x1e511a9]        # 0x1426442e0
0x007f3137: cmp    ebx,esi
0x007f3139: jne    0x1407f3143
0x007f313b: mov    edx,DWORD PTR [rip+0x1e52adb]        # 0x142645c1c
0x007f3141: jmp    0x1407f319c
0x007f3143: mov    edx,DWORD PTR [rip+0x1e52ac7]        # 0x142645c10
0x007f3149: jmp    0x1407f319c
0x007f314b: cmp    r14d,r15d
0x007f314e: jne    0x1407f3178
0x007f3150: cmp    ebx,0xd
0x007f3153: jne    0x1407f315d
0x007f3155: mov    edx,DWORD PTR [rip+0x1e52ab1]        # 0x142645c0c
0x007f315b: jmp    0x1407f3195
0x007f315d: lea    rcx,[rip+0x1e5117c]        # 0x1426442e0
0x007f3164: cmp    ebx,esi
0x007f3166: jne    0x1407f3170
0x007f3168: mov    edx,DWORD PTR [rip+0x1e52ab6]        # 0x142645c24
0x007f316e: jmp    0x1407f319c
0x007f3170: mov    edx,DWORD PTR [rip+0x1e52aa2]        # 0x142645c18
0x007f3176: jmp    0x1407f319c
0x007f3178: cmp    ebx,0xd
0x007f317b: jne    0x1407f3185
0x007f317d: mov    edx,DWORD PTR [rip+0x1e52a85]        # 0x142645c08
0x007f3183: jmp    0x1407f3195
0x007f3185: cmp    ebx,esi
0x007f3187: mov    edx,DWORD PTR [rip+0x1e52a93]        # 0x142645c20
0x007f318d: je     0x1407f3195
0x007f318f: mov    edx,DWORD PTR [rip+0x1e52a7f]        # 0x142645c14
0x007f3195: lea    rcx,[rip+0x1e51144]        # 0x1426442e0
0x007f319c: call   0x140ad7b10
0x007f31a1: inc    ebx
0x007f31a3: cmp    ebx,esi
0x007f31a5: jle    0x1407f3100
0x007f31ab: inc    r14d
0x007f31ae: cmp    r14d,r15d
0x007f31b1: jle    0x1407f30f0
0x007f31b7: mov    rdi,QWORD PTR [rip+0x10b3cf2]        # 0x1418a6eb0
0x007f31be: mov    rbx,QWORD PTR [rip+0x10b3ce3]        # 0x1418a6ea8
0x007f31c5: mov    DWORD PTR [rip+0x1e5119d],0x1010007        # 0x14264436c
0x007f31cf: mov    esi,0x1
0x007f31d4: cmp    rbx,rdi
0x007f31d7: jae    0x1407f36a4
0x007f31dd: mov    DWORD PTR [rip+0x1e5117d],0xf        # 0x142644364
0x007f31e7: mov    DWORD PTR [rip+0x1e5117b],esi        # 0x142644368
0x007f31ed: xor    r9d,r9d
0x007f31f0: mov    rdx,QWORD PTR [rbx]
0x007f31f3: lea    rcx,[rip+0x1e510e6]        # 0x1426442e0
0x007f31fa: call   0x140ad69a0
0x007f31ff: inc    esi
0x007f3201: add    rbx,0x8
0x007f3205: jmp    0x1407f31d4
0x007f3207: cmp    DWORD PTR [rip+0x10b015b],ebx        # 0x1418a3368
0x007f320d: je     0x1407f3671
0x007f3213: call   QWORD PTR [rip+0xdecfcf]        # 0x1415e01e8
0x007f3219: cmp    BYTE PTR [rip+0x10b0140],r14b        # 0x1418a3360
0x007f3220: jne    0x1407f3255
0x007f3222: mov    edx,DWORD PTR [rip+0x10b013c]        # 0x1418a3364
0x007f3228: cmp    edx,eax
0x007f322a: jg     0x1407f32cf
0x007f3230: lea    ecx,[rdx+0x3e8]
0x007f3236: cmp    ecx,eax
0x007f3238: jl     0x1407f32cf
0x007f323e: mov    ecx,eax
0x007f3240: sub    ecx,edx
0x007f3242: cmp    ecx,0x1f4
0x007f3248: jl     0x1407f3600
0x007f324e: mov    BYTE PTR [rip+0x10b010b],0x1        # 0x1418a3360
0x007f3255: movsxd r8,DWORD PTR [rip+0x10b010c]        # 0x1418a3368
0x007f325c: mov    DWORD PTR [rbp-0x78],r8d
0x007f3260: mov    r15d,DWORD PTR [rip+0x10b0105]        # 0x1418a336c
0x007f3267: mov    DWORD PTR [rsp+0x74],r15d
0x007f326c: mov    r9d,DWORD PTR [rip+0x10b00fd]        # 0x1418a3370
0x007f3273: mov    DWORD PTR [rbp-0x7c],r9d
0x007f3277: mov    r10d,DWORD PTR [rip+0x10b00f6]        # 0x1418a3374
0x007f327e: mov    DWORD PTR [rbp-0x80],r10d
0x007f3282: mov    DWORD PTR [rip+0x1e510e0],0x1010007        # 0x14264436c
0x007f328c: mov    DWORD PTR [rip+0x10b00d2],eax        # 0x1418a3364
0x007f3292: lea    rcx,[r8+r8*2]
0x007f3296: lea    rdx,[rip+0xffffffffff80cd63]        # 0x140000000
0x007f329d: lea    r13,[rdx+0x18a3398]
0x007f32a4: lea    r13,[r13+rcx*8+0x0]
0x007f32a9: cmp    r8d,0x183
0x007f32b0: jne    0x1407f3301
0x007f32b2: cmp    r15d,0xd
0x007f32b6: jne    0x1407f32da
0x007f32b8: cmp    r9d,0x17
0x007f32bc: jne    0x1407f3301
0x007f32be: mov    edx,r10d
0x007f32c1: lea    rcx,[rip+0x1cfdec0]        # 0x1424f1188
0x007f32c8: call   0x14014dc00
0x007f32cd: jmp    0x1407f32f5
0x007f32cf: mov    DWORD PTR [rip+0x10b008f],eax        # 0x1418a3364
0x007f32d5: jmp    0x1407f3600
0x007f32da: cmp    r15d,0x5
0x007f32de: jne    0x1407f3301
0x007f32e0: cmp    r9d,0x7
0x007f32e4: jne    0x1407f3301
0x007f32e6: mov    edx,r10d
0x007f32e9: lea    rcx,[rip+0x1cfde98]        # 0x1424f1188
0x007f32f0: call   0x14014dca0
0x007f32f5: test   rax,rax
0x007f32f8: je     0x1407f3301
0x007f32fa: lea    r13,[rax+0xbca0]
0x007f3301: cmp    BYTE PTR [rip+0x10b0080],r14b        # 0x1418a3388
0x007f3308: je     0x1407f3409
0x007f330e: add    esi,0xffffffe2
0x007f3311: lea    edi,[rsi+0x1b]
0x007f3314: mov    r12,QWORD PTR [r13+0x8]
0x007f3318: sub    r12,QWORD PTR [r13+0x0]
0x007f331c: sar    r12,0x3
0x007f3320: inc    r12d
0x007f3323: cmp    r12d,0x11
0x007f3327: jle    0x1407f3331
0x007f3329: mov    r12d,0x11
0x007f332f: jmp    0x1407f333a
0x007f3331: test   r12d,r12d
0x007f3334: js     0x1407f3519
0x007f333a: mov    r15d,r14d
0x007f333d: nop    DWORD PTR [rax]
0x007f3340: mov    ebx,esi
0x007f3342: cmp    esi,edi
0x007f3344: jg     0x1407f33f8
0x007f334a: nop    WORD PTR [rax+rax*1+0x0]
0x007f3350: mov    DWORD PTR [rip+0x1e5100e],ebx        # 0x142644364
0x007f3356: mov    DWORD PTR [rip+0x1e5100b],r15d        # 0x142644368
0x007f335d: xor    r8d,r8d
0x007f3360: xor    edx,edx
0x007f3362: lea    rcx,[rip+0x1e50f77]        # 0x1426442e0
0x007f3369: call   0x1400bb120
0x007f336e: test   r15d,r15d
0x007f3371: jne    0x1407f339a
0x007f3373: cmp    ebx,esi
0x007f3375: jne    0x1407f337f
0x007f3377: mov    edx,DWORD PTR [rip+0x1e52887]        # 0x142645c04
0x007f337d: jmp    0x1407f33e2
0x007f337f: lea    rcx,[rip+0x1e50f5a]        # 0x1426442e0
0x007f3386: cmp    ebx,edi
0x007f3388: jne    0x1407f3392
0x007f338a: mov    edx,DWORD PTR [rip+0x1e5288c]        # 0x142645c1c
0x007f3390: jmp    0x1407f33e9
0x007f3392: mov    edx,DWORD PTR [rip+0x1e52878]        # 0x142645c10
0x007f3398: jmp    0x1407f33e9
0x007f339a: cmp    r15d,r12d
0x007f339d: jne    0x1407f33c6
0x007f339f: cmp    ebx,esi
0x007f33a1: jne    0x1407f33ab
0x007f33a3: mov    edx,DWORD PTR [rip+0x1e52863]        # 0x142645c0c
0x007f33a9: jmp    0x1407f33e2
0x007f33ab: lea    rcx,[rip+0x1e50f2e]        # 0x1426442e0
0x007f33b2: cmp    ebx,edi
0x007f33b4: jne    0x1407f33be
0x007f33b6: mov    edx,DWORD PTR [rip+0x1e52868]        # 0x142645c24
0x007f33bc: jmp    0x1407f33e9
0x007f33be: mov    edx,DWORD PTR [rip+0x1e52854]        # 0x142645c18
0x007f33c4: jmp    0x1407f33e9
0x007f33c6: cmp    ebx,esi
0x007f33c8: jne    0x1407f33d2
0x007f33ca: mov    edx,DWORD PTR [rip+0x1e52838]        # 0x142645c08
0x007f33d0: jmp    0x1407f33e2
0x007f33d2: cmp    ebx,edi
0x007f33d4: mov    edx,DWORD PTR [rip+0x1e52846]        # 0x142645c20
0x007f33da: je     0x1407f33e2
0x007f33dc: mov    edx,DWORD PTR [rip+0x1e52832]        # 0x142645c14
0x007f33e2: lea    rcx,[rip+0x1e50ef7]        # 0x1426442e0
0x007f33e9: call   0x140ad7b10
0x007f33ee: inc    ebx
0x007f33f0: cmp    ebx,edi
0x007f33f2: jle    0x1407f3350
0x007f33f8: inc    r15d
0x007f33fb: cmp    r15d,r12d
0x007f33fe: jle    0x1407f3340
0x007f3404: jmp    0x1407f3514
0x007f3409: mov    esi,DWORD PTR [rip+0x10aff7d]        # 0x1418a338c
0x007f340f: lea    edi,[rsi+0x1b]
0x007f3412: mov    rcx,QWORD PTR [r13+0x8]
0x007f3416: sub    rcx,QWORD PTR [r13+0x0]
0x007f341a: sar    rcx,0x3
0x007f341e: mov    r12d,DWORD PTR [rip+0x10aff6b]        # 0x1418a3390
0x007f3425: mov    r14d,r12d
0x007f3428: sub    r14d,ecx
0x007f342b: dec    r14d
0x007f342e: cmp    DWORD PTR [rip+0x10aff43],0x0        # 0x1418a3378
0x007f3435: je     0x1407f343b
0x007f3437: sub    r14d,0x2
0x007f343b: mov    r15d,r14d
0x007f343e: cmp    r14d,r12d
0x007f3441: jg     0x1407f3514
0x007f3447: nop    WORD PTR [rax+rax*1+0x0]
0x007f3450: mov    ebx,esi
0x007f3452: cmp    esi,edi
0x007f3454: jg     0x1407f3508
0x007f345a: nop    WORD PTR [rax+rax*1+0x0]
0x007f3460: mov    DWORD PTR [rip+0x1e50efe],ebx        # 0x142644364
0x007f3466: mov    DWORD PTR [rip+0x1e50efb],r15d        # 0x142644368
0x007f346d: xor    r8d,r8d
0x007f3470: xor    edx,edx
0x007f3472: lea    rcx,[rip+0x1e50e67]        # 0x1426442e0
0x007f3479: call   0x1400bb120
0x007f347e: cmp    r15d,r14d
0x007f3481: jne    0x1407f34aa
0x007f3483: cmp    ebx,esi
0x007f3485: jne    0x1407f348f
0x007f3487: mov    edx,DWORD PTR [rip+0x1e52777]        # 0x142645c04
0x007f348d: jmp    0x1407f34f2
0x007f348f: lea    rcx,[rip+0x1e50e4a]        # 0x1426442e0
0x007f3496: cmp    ebx,edi
0x007f3498: jne    0x1407f34a2
0x007f349a: mov    edx,DWORD PTR [rip+0x1e5277c]        # 0x142645c1c
0x007f34a0: jmp    0x1407f34f9
0x007f34a2: mov    edx,DWORD PTR [rip+0x1e52768]        # 0x142645c10
0x007f34a8: jmp    0x1407f34f9
0x007f34aa: cmp    r15d,r12d
0x007f34ad: jne    0x1407f34d6
0x007f34af: cmp    ebx,esi
0x007f34b1: jne    0x1407f34bb
0x007f34b3: mov    edx,DWORD PTR [rip+0x1e52753]        # 0x142645c0c
0x007f34b9: jmp    0x1407f34f2
0x007f34bb: lea    rcx,[rip+0x1e50e1e]        # 0x1426442e0
0x007f34c2: cmp    ebx,edi
0x007f34c4: jne    0x1407f34ce
0x007f34c6: mov    edx,DWORD PTR [rip+0x1e52758]        # 0x142645c24
0x007f34cc: jmp    0x1407f34f9
0x007f34ce: mov    edx,DWORD PTR [rip+0x1e52744]        # 0x142645c18
0x007f34d4: jmp    0x1407f34f9
0x007f34d6: cmp    ebx,esi
0x007f34d8: jne    0x1407f34e2
0x007f34da: mov    edx,DWORD PTR [rip+0x1e52728]        # 0x142645c08
0x007f34e0: jmp    0x1407f34f2
0x007f34e2: cmp    ebx,edi
0x007f34e4: mov    edx,DWORD PTR [rip+0x1e52736]        # 0x142645c20
0x007f34ea: je     0x1407f34f2
0x007f34ec: mov    edx,DWORD PTR [rip+0x1e52722]        # 0x142645c14
0x007f34f2: lea    rcx,[rip+0x1e50de7]        # 0x1426442e0
0x007f34f9: call   0x140ad7b10
0x007f34fe: inc    ebx
0x007f3500: cmp    ebx,edi
0x007f3502: jle    0x1407f3460
0x007f3508: inc    r15d
0x007f350b: cmp    r15d,r12d
0x007f350e: jle    0x1407f3450
0x007f3514: mov    r15d,DWORD PTR [rsp+0x74]
0x007f3519: mov    DWORD PTR [rip+0x1e50e49],0x1010007        # 0x14264436c
0x007f3523: inc    r14d
0x007f3526: mov    rbx,QWORD PTR [r13+0x0]
0x007f352a: mov    rdi,QWORD PTR [r13+0x8]
0x007f352e: xchg   ax,ax
0x007f3530: cmp    rbx,rdi
0x007f3533: jae    0x1407f356c
0x007f3535: mov    DWORD PTR [rip+0x1e50e2c],r14d        # 0x142644368
0x007f353c: cmp    BYTE PTR [rip+0x10afe45],0x0        # 0x1418a3388
0x007f3543: lea    eax,[rsi+0x1]
0x007f3546: jne    0x1407f354b
0x007f3548: lea    eax,[rsi+0x2]
0x007f354b: mov    DWORD PTR [rip+0x1e50e13],eax        # 0x142644364
0x007f3551: xor    r9d,r9d
0x007f3554: mov    rdx,QWORD PTR [rbx]
0x007f3557: lea    rcx,[rip+0x1e50d82]        # 0x1426442e0
0x007f355e: call   0x140ad69a0
0x007f3563: inc    r14d
0x007f3566: add    rbx,0x8
0x007f356a: jmp    0x1407f3530
0x007f356c: cmp    DWORD PTR [rip+0x10afe05],0x0        # 0x1418a3378
0x007f3573: je     0x1407f35fa
0x007f3579: inc    r14d
0x007f357c: mov    DWORD PTR [rip+0x1e50de5],r14d        # 0x142644368
0x007f3583: cmp    BYTE PTR [rip+0x10afdfe],0x0        # 0x1418a3388
0x007f358a: lea    eax,[rsi+0x1]
0x007f358d: jne    0x1407f3592
0x007f358f: lea    eax,[rsi+0x2]
0x007f3592: mov    DWORD PTR [rip+0x1e50dcc],eax        # 0x142644364
0x007f3598: mov    DWORD PTR [rip+0x1e50dca],0x1000007        # 0x14264436c
0x007f35a2: xorps  xmm0,xmm0
0x007f35a5: movups XMMWORD PTR [rbp+0x10],xmm0
0x007f35a9: movdqa xmm1,XMMWORD PTR [rip+0xf924ef]        # 0x141785aa0
0x007f35b1: movdqu XMMWORD PTR [rbp+0x20],xmm1
0x007f35b6: movabs rax,0x203a79656b746f48
0x007f35c0: mov    QWORD PTR [rbp+0x10],rax
0x007f35c4: mov    BYTE PTR [rbp+0x18],0x0
0x007f35c8: xor    r9d,r9d
0x007f35cb: lea    rdx,[rbp+0x10]
0x007f35cf: lea    rcx,[rip+0x1e50d0a]        # 0x1426442e0
0x007f35d6: call   0x140ad69a0
0x007f35db: nop
0x007f35dc: lea    rcx,[rbp+0x10]
0x007f35e0: call   0x14006f7e0
0x007f35e5: mov    DWORD PTR [rip+0x1e50d7d],0x1010002        # 0x14264436c
0x007f35ef: mov    edx,DWORD PTR [rip+0x10afd83]        # 0x1418a3378
0x007f35f5: call   0x140c364f0
0x007f35fa: mov    edi,DWORD PTR [rbp-0x80]
0x007f35fd: mov    ebx,DWORD PTR [rbp-0x7c]
0x007f3600: mov    eax,DWORD PTR [rbp-0x78]
0x007f3603: cmp    DWORD PTR [rip+0x10b37df],eax        # 0x1418a6de8
0x007f3609: jne    0x1407f3624
0x007f360b: cmp    DWORD PTR [rip+0x10b37da],r15d        # 0x1418a6dec
0x007f3612: jne    0x1407f3624
0x007f3614: cmp    DWORD PTR [rip+0x10b37d6],ebx        # 0x1418a6df0
0x007f361a: jne    0x1407f3624
0x007f361c: cmp    DWORD PTR [rip+0x10b37d2],edi        # 0x1418a6df4
0x007f3622: je     0x1407f3653
0x007f3624: mov    DWORD PTR [rip+0x10b37be],eax        # 0x1418a6de8
0x007f362a: mov    DWORD PTR [rip+0x10b37bb],r15d        # 0x1418a6dec
0x007f3631: mov    DWORD PTR [rip+0x10b37b9],ebx        # 0x1418a6df0
0x007f3637: mov    DWORD PTR [rip+0x10b37b7],edi        # 0x1418a6df4
0x007f363d: cmp    WORD PTR [rip+0x1e513a3],0x2        # 0x1426449e8
0x007f3645: jge    0x1407f3653
0x007f3647: mov    eax,0x2
0x007f364c: mov    WORD PTR [rip+0x1e51395],ax        # 0x1426449e8
0x007f3653: cmp    BYTE PTR [rip+0x10adf2e],0x0        # 0x1418a1588
0x007f365a: je     0x1407f4341
0x007f3660: lea    rcx,[rip+0x10adf21]        # 0x1418a1588
0x007f3667: call   0x1401e8ab0
0x007f366c: jmp    0x1407f4341
0x007f3671: cmp    BYTE PTR [rip+0x10afce8],r14b        # 0x1418a3360
0x007f3678: je     0x1407f3600
0x007f367a: call   QWORD PTR [rip+0xdecb68]        # 0x1415e01e8
0x007f3680: mov    ecx,DWORD PTR [rip+0x10afcde]        # 0x1418a3364
0x007f3686: cmp    ecx,eax
0x007f3688: jg     0x1407f3698
0x007f368a: add    ecx,0x3e8
0x007f3690: cmp    ecx,eax
0x007f3692: jge    0x1407f3600
0x007f3698: mov    BYTE PTR [rip+0x10afcc1],r14b        # 0x1418a3360
0x007f369f: jmp    0x1407f3600
0x007f36a4: mov    r15d,DWORD PTR [rsp+0x74]
0x007f36a9: mov    ebx,r15d
0x007f36ac: mov    edi,r15d
0x007f36af: jmp    0x1407f3600
0x007f36b4: mov    eax,DWORD PTR [rip+0x1bd3fba]        # 0x1423c7674
0x007f36ba: cdq
0x007f36bb: sub    eax,edx
0x007f36bd: sar    eax,1
0x007f36bf: mov    r15d,eax
0x007f36c2: lea    r8d,[rax+0x23]
0x007f36c6: lea    edx,[r15-0x23]
0x007f36ca: call   0x140b00c80
0x007f36cf: movsx  r11d,WORD PTR [rip+0x1e4fce5]        # 0x1426433bc
0x007f36d7: mov    WORD PTR [rsp+0x7c],r11w
0x007f36dd: movsx  r10d,WORD PTR [rip+0x1e4fcd9]        # 0x1426433be
0x007f36e5: mov    WORD PTR [rbp-0x74],r10w
0x007f36ea: movzx  r9d,WORD PTR [rip+0x1e4fcce]        # 0x1426433c0
0x007f36f2: mov    WORD PTR [rsp+0x78],r9w
0x007f36f8: mov    ecx,r11d
0x007f36fb: and    ecx,0x8000000f
0x007f3701: jge    0x1407f370a
0x007f3703: dec    ecx
0x007f3705: or     ecx,0xfffffff0
0x007f3708: inc    ecx
0x007f370a: mov    eax,r10d
0x007f370d: and    eax,0x8000000f
0x007f3712: jge    0x1407f371b
0x007f3714: dec    eax
0x007f3716: or     eax,0xfffffff0
0x007f3719: inc    eax
0x007f371b: mov    rdx,QWORD PTR [rip+0x1e4fca6]        # 0x1426433c8
0x007f3722: movsx  r8,cx
0x007f3726: shl    r8,0x4
0x007f372a: movsx  rax,ax
0x007f372e: add    r8,rax
0x007f3731: lea    r13,[rdx+r8*2]
0x007f3735: movzx  ebx,WORD PTR [r13+0x8]
0x007f373a: mov    edi,0x180
0x007f373f: and    bx,di
0x007f3742: movzx  ecx,BYTE PTR [rdx+r8*1+0x208]
0x007f374b: test   ecx,ecx
0x007f374d: je     0x1407f403f
0x007f3753: sub    ecx,0x1
0x007f3756: je     0x1407f3bf0
0x007f375c: sub    ecx,0x1
0x007f375f: je     0x1407f3805
0x007f3765: cmp    ecx,0x1
0x007f3768: jne    0x1407f4110
0x007f376e: lea    eax,[r15-0x22]
0x007f3772: mov    DWORD PTR [rip+0x1e50bec],eax        # 0x142644364
0x007f3778: mov    esi,ecx
0x007f377a: mov    DWORD PTR [rip+0x1e50be8],ecx        # 0x142644368
0x007f3780: mov    DWORD PTR [rip+0x1e50be2],0x1010007        # 0x14264436c
0x007f378a: xorps  xmm0,xmm0
0x007f378d: movups XMMWORD PTR [rbp+0x10],xmm0
0x007f3791: mov    ecx,0x20
0x007f3796: call   0x140070760
0x007f379b: mov    rdx,rax
0x007f379e: mov    QWORD PTR [rbp+0x10],rax
0x007f37a2: movdqa xmm0,XMMWORD PTR [rip+0xf92466]        # 0x141785c10
0x007f37aa: movdqu XMMWORD PTR [rbp+0x20],xmm0
0x007f37af: movups xmm0,XMMWORD PTR [rip+0xeb650a]        # 0x1416a9cc0 ; literal="This is an unintelligible mess."
0x007f37b6: movups XMMWORD PTR [rax],xmm0
0x007f37b9: movsd  xmm0,QWORD PTR [rip+0xeb650f]        # 0x1416a9cd0 ; literal="elligible mess."
0x007f37c1: movsd  QWORD PTR [rax+0x10],xmm0
0x007f37c6: mov    ecx,DWORD PTR [rip+0xeb650c]        # 0x1416a9cd8 ; literal="e mess."
0x007f37cc: mov    DWORD PTR [rax+0x18],ecx
0x007f37cf: movzx  eax,WORD PTR [rip+0xeb6506]        # 0x1416a9cdc ; literal="ss."
0x007f37d6: mov    WORD PTR [rdx+0x1c],ax
0x007f37da: movzx  eax,BYTE PTR [rip+0xeb64fd]        # 0x1416a9cde ; literal="."
0x007f37e1: mov    BYTE PTR [rdx+0x1e],al
0x007f37e4: mov    BYTE PTR [rdx+0x1f],r14b
0x007f37e8: xor    r9d,r9d
0x007f37eb: lea    rdx,[rbp+0x10]
0x007f37ef: lea    rcx,[rip+0x1e50aea]        # 0x1426442e0
0x007f37f6: call   0x140ad69a0
0x007f37fb: nop
0x007f37fc: lea    rcx,[rbp+0x10]
0x007f3800: jmp    0x1407f410b
0x007f3805: mov    eax,DWORD PTR [rdx+r8*4+0x308]
0x007f380d: mov    DWORD PTR [rbp-0x68],eax
0x007f3810: mov    eax,DWORD PTR [rdx+r8*4+0x708]
0x007f3818: mov    DWORD PTR [rbp-0x78],eax
0x007f381b: mov    eax,DWORD PTR [rdx+r8*4+0xb08]
0x007f3823: mov    DWORD PTR [rbp-0x60],eax
0x007f3826: lea    eax,[r15-0x22]
0x007f382a: mov    DWORD PTR [rip+0x1e50b34],eax        # 0x142644364
0x007f3830: mov    esi,0x1
0x007f3835: mov    DWORD PTR [rip+0x1e50b2d],esi        # 0x142644368
0x007f383b: mov    DWORD PTR [rip+0x1e50b27],0x1010007        # 0x14264436c
0x007f3845: xorps  xmm0,xmm0
0x007f3848: movups XMMWORD PTR [rbp-0x10],xmm0
0x007f384c: mov    QWORD PTR [rbp+0x0],0x2
0x007f3854: mov    QWORD PTR [rbp+0x8],0xf
0x007f385c: mov    eax,0x2041
0x007f3861: mov    WORD PTR [rbp-0x10],ax
0x007f3865: mov    BYTE PTR [rbp-0xe],r14b
0x007f3869: test   BYTE PTR [r13+0x8],0x40
0x007f386e: je     0x1407f3970
0x007f3874: lea    rax,[rbp-0x64]
0x007f3878: mov    QWORD PTR [rsp+0x38],rax
0x007f387d: lea    rax,[rbp-0x80]
0x007f3881: mov    QWORD PTR [rsp+0x30],rax
0x007f3886: lea    rax,[rbp-0x5c]
0x007f388a: mov    QWORD PTR [rsp+0x28],rax
0x007f388f: lea    rax,[rbp-0x7c]
0x007f3893: mov    QWORD PTR [rsp+0x20],rax
0x007f3898: movzx  r8d,r10w
0x007f389c: movzx  edx,r11w
0x007f38a0: lea    rcx,[rip+0x1bd7b39]        # 0x1423cb3e0
0x007f38a7: call   0x1414cdc30
0x007f38ac: movzx  ecx,WORD PTR [rbp-0x7c]
0x007f38b0: mov    DWORD PTR [rsp+0x74],ecx
0x007f38b4: cmp    cx,0xffff
0x007f38b8: jne    0x1407f38c9
0x007f38ba: mov    DWORD PTR [rsp+0x74],0x6
0x007f38c2: mov    WORD PTR [rsp+0x70],si
0x007f38c7: jmp    0x1407f38d2
0x007f38c9: movzx  eax,WORD PTR [rbp-0x80]
0x007f38cd: mov    WORD PTR [rsp+0x70],ax
0x007f38d2: cmp    bx,di
0x007f38d5: jne    0x1407f38e0
0x007f38d7: lea    rdx,[rip+0xeb6336]        # 0x1416a9c14 ; literal="thick "
0x007f38de: jmp    0x1407f3906
0x007f38e0: mov    edi,0x100
0x007f38e5: cmp    bx,di
0x007f38e8: jne    0x1407f38f3
0x007f38ea: lea    rdx,[rip+0xeb631b]        # 0x1416a9c0c ; literal="light "
0x007f38f1: jmp    0x1407f3906
0x007f38f3: mov    r12d,0x80
0x007f38f9: cmp    bx,r12w
0x007f38fd: jne    0x1407f390f
0x007f38ff: lea    rdx,[rip+0xeb631e]        # 0x1416a9c24 ; literal="faint "
0x007f3906: lea    rcx,[rbp-0x10]
0x007f390a: call   0x14006f4f0
0x007f390f: lea    rcx,[rbp-0x58]
0x007f3913: call   0x14006f620
0x007f3918: nop
0x007f3919: movzx  eax,WORD PTR [rsp+0x70]
0x007f391e: mov    WORD PTR [rsp+0x30],ax
0x007f3923: mov    BYTE PTR [rsp+0x28],0x1
0x007f3928: mov    DWORD PTR [rsp+0x20],r14d
0x007f392d: mov    r9d,DWORD PTR [rbp-0x5c]
0x007f3931: movzx  r8d,WORD PTR [rsp+0x74]
0x007f3937: lea    rdx,[rbp-0x58]
0x007f393b: lea    rcx,[rip+0x1bd7a9e]        # 0x1423cb3e0
0x007f3942: call   0x1414cc890
0x007f3947: lea    rdx,[rbp-0x58]
0x007f394b: lea    rcx,[rbp-0x10]
0x007f394f: call   0x1400b9ca0
0x007f3954: lea    rdx,[rip+0xdefdc5]        # 0x1415e3720 ; literal=" "
0x007f395b: lea    rcx,[rbp-0x10]
0x007f395f: call   0x14006f4f0
0x007f3964: nop
0x007f3965: lea    rcx,[rbp-0x58]
0x007f3969: call   0x14006f7e0
0x007f396e: jmp    0x1407f39ad
0x007f3970: cmp    bx,di
0x007f3973: jne    0x1407f397e
0x007f3975: lea    rdx,[rip+0xeb62a0]        # 0x1416a9c1c ; literal="deep "
0x007f397c: jmp    0x1407f39a4
0x007f397e: mov    edi,0x100
0x007f3983: cmp    bx,di
0x007f3986: jne    0x1407f3991
0x007f3988: lea    rdx,[rip+0xeb6249]        # 0x1416a9bd8 ; literal="shallow "
0x007f398f: jmp    0x1407f39a4
0x007f3991: mov    r12d,0x80
0x007f3997: cmp    bx,r12w
0x007f399b: jne    0x1407f39ad
0x007f399d: lea    rdx,[rip+0xeb622c]        # 0x1416a9bd0 ; literal="vague "
0x007f39a4: lea    rcx,[rbp-0x10]
0x007f39a8: call   0x14006f4f0
0x007f39ad: mov    eax,DWORD PTR [rbp-0x60]
0x007f39b0: test   al,0x1
0x007f39b2: je     0x1407f39bd
0x007f39b4: lea    rdx,[rip+0xe41c49]        # 0x141635604 ; literal="right "
0x007f39bb: jmp    0x1407f39c8
0x007f39bd: test   al,0x2
0x007f39bf: je     0x1407f39d1
0x007f39c1: lea    rdx,[rip+0xe41c44]        # 0x14163560c ; literal="left "
0x007f39c8: lea    rcx,[rbp-0x10]
0x007f39cc: call   0x14006f4f0
0x007f39d1: xorps  xmm0,xmm0
0x007f39d4: movups XMMWORD PTR [rbp-0x30],xmm0
0x007f39d8: mov    QWORD PTR [rbp-0x20],r14
0x007f39dc: mov    QWORD PTR [rbp-0x18],0xf
0x007f39e4: mov    BYTE PTR [rbp-0x30],0x0
0x007f39e8: mov    eax,0xffffffff
0x007f39ed: mov    r9d,eax
0x007f39f0: mov    DWORD PTR [rsp+0x68],r14d
0x007f39f5: mov    DWORD PTR [rsp+0x60],r14d
0x007f39fa: mov    BYTE PTR [rsp+0x58],0x0
0x007f39ff: mov    DWORD PTR [rsp+0x50],eax
0x007f3a03: mov    DWORD PTR [rsp+0x48],eax
0x007f3a07: mov    QWORD PTR [rsp+0x40],r14
0x007f3a0c: mov    BYTE PTR [rsp+0x38],0x0
0x007f3a11: mov    DWORD PTR [rsp+0x30],r14d
0x007f3a16: mov    DWORD PTR [rsp+0x28],esi
0x007f3a1a: mov    DWORD PTR [rsp+0x20],eax
0x007f3a1e: movzx  r8d,WORD PTR [rbp-0x78]
0x007f3a23: movzx  edx,WORD PTR [rbp-0x68]
0x007f3a27: lea    rcx,[rbp-0x30]
0x007f3a2b: call   0x140a7fc90
0x007f3a30: lea    rdx,[rbp-0x30]
0x007f3a34: cmp    QWORD PTR [rbp-0x18],0xf
0x007f3a39: cmova  rdx,QWORD PTR [rbp-0x30]
0x007f3a3e: mov    r8,QWORD PTR [rbp-0x20]
0x007f3a42: lea    rcx,[rbp-0x10]
0x007f3a46: call   0x14006f9a0
0x007f3a4b: lea    rcx,[rbp-0x10]
0x007f3a4f: test   BYTE PTR [r13+0x8],0x40
0x007f3a54: je     0x1407f3a67
0x007f3a56: lea    rdx,[rip+0xe41b53]        # 0x1416355b0 ; literal=" print"
0x007f3a5d: call   0x14006f4f0
0x007f3a62: jmp    0x1407f3b59
0x007f3a67: lea    rdx,[rip+0xeb618a]        # 0x1416a9bf8 ; literal=" imprint in the "
0x007f3a6e: call   0x14006f4f0
0x007f3a73: lea    rax,[rbp-0x64]
0x007f3a77: mov    QWORD PTR [rsp+0x38],rax
0x007f3a7c: lea    rax,[rbp-0x80]
0x007f3a80: mov    QWORD PTR [rsp+0x30],rax
0x007f3a85: lea    rax,[rbp-0x78]
0x007f3a89: mov    QWORD PTR [rsp+0x28],rax
0x007f3a8e: lea    rax,[rsp+0x70]
0x007f3a93: mov    QWORD PTR [rsp+0x20],rax
0x007f3a98: movzx  esi,WORD PTR [rsp+0x78]
0x007f3a9d: movzx  r9d,si
0x007f3aa1: movzx  ebx,WORD PTR [rbp-0x74]
0x007f3aa5: movzx  r8d,bx
0x007f3aa9: movzx  edi,WORD PTR [rsp+0x7c]
0x007f3aae: movzx  edx,di
0x007f3ab1: lea    rcx,[rip+0x1bd7928]        # 0x1423cb3e0
0x007f3ab8: call   0x1414cda90
0x007f3abd: cmp    WORD PTR [rsp+0x70],0xffff
0x007f3ac3: jne    0x1407f3b0b
0x007f3ac5: lea    rax,[rbp-0x80]
0x007f3ac9: mov    QWORD PTR [rsp+0x40],rax
0x007f3ace: lea    rax,[rbp-0x78]
0x007f3ad2: mov    QWORD PTR [rsp+0x38],rax
0x007f3ad7: lea    rax,[rsp+0x70]
0x007f3adc: mov    QWORD PTR [rsp+0x30],rax
0x007f3ae1: lea    rax,[rbp-0x7c]
0x007f3ae5: mov    QWORD PTR [rsp+0x28],rax
0x007f3aea: lea    rax,[rsp+0x7c]
0x007f3aef: mov    QWORD PTR [rsp+0x20],rax
0x007f3af4: movzx  r9d,si
0x007f3af8: movzx  r8d,bx
0x007f3afc: movzx  edx,di
0x007f3aff: lea    rcx,[rip+0x1bd78da]        # 0x1423cb3e0
0x007f3b06: call   0x1414cbbe0
0x007f3b0b: lea    rcx,[rbp-0x58]
0x007f3b0f: call   0x14006f620
0x007f3b14: nop
0x007f3b15: movzx  eax,WORD PTR [rbp-0x80]
0x007f3b19: mov    WORD PTR [rsp+0x30],ax
0x007f3b1e: mov    BYTE PTR [rsp+0x28],0x0
0x007f3b23: mov    DWORD PTR [rsp+0x20],r14d
0x007f3b28: mov    r9d,DWORD PTR [rbp-0x78]
0x007f3b2c: movzx  r8d,WORD PTR [rsp+0x70]
0x007f3b32: lea    rdx,[rbp-0x58]
0x007f3b36: lea    rcx,[rip+0x1bd78a3]        # 0x1423cb3e0
0x007f3b3d: call   0x1414cc890
0x007f3b42: lea    rdx,[rbp-0x58]
0x007f3b46: lea    rcx,[rbp-0x10]
0x007f3b4a: call   0x1400b9ca0
0x007f3b4f: nop
0x007f3b50: lea    rcx,[rbp-0x58]
0x007f3b54: call   0x14006f7e0
0x007f3b59: lea    rcx,[rbp-0x10]
0x007f3b5d: cmp    QWORD PTR [rbp+0x0],0x3c
0x007f3b62: lea    rdx,[rip+0xeb607f]        # 0x1416a9be8 ; literal=" is here."
0x007f3b69: jbe    0x1407f3b72
0x007f3b6b: lea    rdx,[rip+0xdefa02]        # 0x1415e3574 ; literal="."
0x007f3b72: call   0x14006f4f0
0x007f3b77: mov    edx,0x45
0x007f3b7c: lea    rcx,[rbp-0x10]
0x007f3b80: call   0x14052b900
0x007f3b85: xor    r9d,r9d
0x007f3b88: lea    rdx,[rbp-0x10]
0x007f3b8c: lea    rcx,[rip+0x1e5074d]        # 0x1426442e0
0x007f3b93: call   0x140ad69a0
0x007f3b98: nop
0x007f3b99: mov    rdx,QWORD PTR [rbp-0x18]
0x007f3b9d: cmp    rdx,0xf
0x007f3ba1: jbe    0x1407f3bd7
0x007f3ba3: inc    rdx
0x007f3ba6: mov    rcx,QWORD PTR [rbp-0x30]
0x007f3baa: mov    rax,rcx
0x007f3bad: cmp    rdx,0x1000
0x007f3bb4: jb     0x1407f3bd2
0x007f3bb6: add    rdx,0x27
0x007f3bba: mov    rcx,QWORD PTR [rcx-0x8]
0x007f3bbe: sub    rax,rcx
0x007f3bc1: add    rax,0xfffffffffffffff8
0x007f3bc5: cmp    rax,0x1f
0x007f3bc9: jbe    0x1407f3bd2
0x007f3bcb: call   QWORD PTR [rip+0xdececf]        # 0x1415e0aa0
0x007f3bd1: int3
0x007f3bd2: call   0x1415345f0
0x007f3bd7: mov    QWORD PTR [rbp-0x20],r14
0x007f3bdb: mov    QWORD PTR [rbp-0x18],0xf
0x007f3be3: mov    BYTE PTR [rbp-0x30],0x0
0x007f3be7: lea    rcx,[rbp-0x10]
0x007f3beb: jmp    0x1407f410b
0x007f3bf0: movsxd rax,DWORD PTR [rdx+r8*4+0x708]
0x007f3bf8: lea    rcx,[rax*4+0x0]
0x007f3c00: mov    rax,QWORD PTR [rip+0x1cf2d71]        # 0x1424e6978
0x007f3c07: movsxd r12,DWORD PTR [rcx+rax*1]
0x007f3c0b: mov    rax,QWORD PTR [rip+0x1cf2d7e]        # 0x1424e6990
0x007f3c12: movsxd rdi,DWORD PTR [rcx+rax*1]
0x007f3c16: movzx  eax,WORD PTR [rdx+r8*4+0xb08]
0x007f3c1f: mov    WORD PTR [rsp+0x70],ax
0x007f3c24: test   r12w,r12w
0x007f3c28: js     0x1407f3c7d
0x007f3c2a: mov    rcx,QWORD PTR [rip+0x1cf2d27]        # 0x1424e6958
0x007f3c31: movsx  rdx,r12w
0x007f3c35: mov    rax,QWORD PTR [rip+0x1cf2d24]        # 0x1424e6960
0x007f3c3c: sub    rax,rcx
0x007f3c3f: sar    rax,0x3
0x007f3c43: cmp    rdx,rax
0x007f3c46: jae    0x1407f3c7d
0x007f3c48: test   di,di
0x007f3c4b: js     0x1407f3c7d
0x007f3c4d: mov    rcx,QWORD PTR [rcx+rdx*8]
0x007f3c51: movsx  rdx,di
0x007f3c55: mov    rax,QWORD PTR [rcx+0x180]
0x007f3c5c: sub    rax,QWORD PTR [rcx+0x178]
0x007f3c63: sar    rax,0x3
0x007f3c67: cmp    rdx,rax
0x007f3c6a: jae    0x1407f3c7d
0x007f3c6c: mov    rax,QWORD PTR [rcx+0x178]
0x007f3c73: mov    rcx,QWORD PTR [rax+rdx*8]
0x007f3c77: mov    QWORD PTR [rbp-0x70],rcx
0x007f3c7b: jmp    0x1407f3c81
0x007f3c7d: mov    QWORD PTR [rbp-0x70],r14
0x007f3c81: lea    eax,[r15-0x22]
0x007f3c85: mov    DWORD PTR [rip+0x1e506d9],eax        # 0x142644364
0x007f3c8b: mov    esi,0x1
0x007f3c90: mov    DWORD PTR [rip+0x1e506d2],esi        # 0x142644368
0x007f3c96: mov    DWORD PTR [rip+0x1e506cc],0x1010007        # 0x14264436c
0x007f3ca0: lea    rdx,[rip+0xdf493d]        # 0x1415e85e4 ; literal="A "
0x007f3ca7: lea    rcx,[rbp-0x10]
0x007f3cab: call   0x1400680e0
0x007f3cb0: nop
0x007f3cb1: xorps  xmm0,xmm0
0x007f3cb4: movups XMMWORD PTR [rbp-0x30],xmm0
0x007f3cb8: movdqa xmm1,XMMWORD PTR [rip+0xf91d60]        # 0x141785a20
0x007f3cc0: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x007f3cc5: mov    BYTE PTR [rbp-0x30],0x0
0x007f3cc9: movzx  r9d,di
0x007f3ccd: xor    r8d,r8d
0x007f3cd0: lea    rdx,[rbp-0x30]
0x007f3cd4: movzx  ecx,r12w
0x007f3cd8: call   0x140aa0c50
0x007f3cdd: lea    rdx,[rbp-0x30]
0x007f3ce1: lea    rcx,[rbp-0x10]
0x007f3ce5: call   0x1400b9ca0
0x007f3cea: xor    r8b,r8b
0x007f3ced: mov    edi,0x100
0x007f3cf2: mov    r12d,0x80
0x007f3cf8: test   BYTE PTR [r13+0x8],0x40
0x007f3cfd: je     0x1407f3df3
0x007f3d03: lea    rax,[rbp-0x64]
0x007f3d07: mov    QWORD PTR [rsp+0x38],rax
0x007f3d0c: lea    rax,[rbp-0x80]
0x007f3d10: mov    QWORD PTR [rsp+0x30],rax
0x007f3d15: lea    rax,[rbp-0x68]
0x007f3d19: mov    QWORD PTR [rsp+0x28],rax
0x007f3d1e: lea    rax,[rbp-0x7c]
0x007f3d22: mov    QWORD PTR [rsp+0x20],rax
0x007f3d27: movzx  r9d,WORD PTR [rsp+0x78]
0x007f3d2d: movzx  r8d,WORD PTR [rbp-0x74]
0x007f3d32: movzx  edx,WORD PTR [rsp+0x7c]
0x007f3d37: lea    rcx,[rip+0x1bd76a2]        # 0x1423cb3e0
0x007f3d3e: call   0x1414cdc30
0x007f3d43: movzx  eax,WORD PTR [rbp-0x7c]
0x007f3d47: mov    DWORD PTR [rsp+0x74],eax
0x007f3d4b: cmp    ax,0xffff
0x007f3d4f: jne    0x1407f3d5b
0x007f3d51: mov    DWORD PTR [rsp+0x74],0x6
0x007f3d59: jmp    0x1407f3d5f
0x007f3d5b: movzx  esi,WORD PTR [rbp-0x80]
0x007f3d5f: lea    rdx,[rip+0xdf4df2]        # 0x1415e8b58 ; literal="'s "
0x007f3d66: lea    rcx,[rbp-0x10]
0x007f3d6a: call   0x14006f4f0
0x007f3d6f: mov    eax,0x180
0x007f3d74: cmp    bx,ax
0x007f3d77: jne    0x1407f3d82
0x007f3d79: lea    rdx,[rip+0xeb5e94]        # 0x1416a9c14 ; literal="thick "
0x007f3d80: jmp    0x1407f3d9d
0x007f3d82: cmp    bx,di
0x007f3d85: jne    0x1407f3d90
0x007f3d87: lea    rdx,[rip+0xeb5e7e]        # 0x1416a9c0c ; literal="light "
0x007f3d8e: jmp    0x1407f3d9d
0x007f3d90: cmp    bx,r12w
0x007f3d94: jne    0x1407f3da6
0x007f3d96: lea    rdx,[rip+0xeb5e87]        # 0x1416a9c24 ; literal="faint "
0x007f3d9d: lea    rcx,[rbp-0x10]
0x007f3da1: call   0x14006f4f0
0x007f3da6: lea    rcx,[rbp-0x58]
0x007f3daa: call   0x14006f620
0x007f3daf: nop
0x007f3db0: mov    WORD PTR [rsp+0x30],si
0x007f3db5: mov    BYTE PTR [rsp+0x28],0x1
0x007f3dba: mov    DWORD PTR [rsp+0x20],r14d
0x007f3dbf: mov    r9d,DWORD PTR [rbp-0x68]
0x007f3dc3: movzx  r8d,WORD PTR [rsp+0x74]
0x007f3dc9: lea    rdx,[rbp-0x58]
0x007f3dcd: lea    rcx,[rip+0x1bd760c]        # 0x1423cb3e0
0x007f3dd4: call   0x1414cc890
0x007f3dd9: lea    rdx,[rbp-0x58]
0x007f3ddd: lea    rcx,[rbp-0x10]
0x007f3de1: call   0x1400b9ca0
0x007f3de6: nop
0x007f3de7: lea    rcx,[rbp-0x58]
0x007f3deb: call   0x14006f7e0
0x007f3df0: mov    r8b,0x1
0x007f3df3: movsx  rax,WORD PTR [rsp+0x70]
0x007f3df9: test   ax,ax
0x007f3dfc: js     0x1407f3ede
0x007f3e02: mov    rsi,QWORD PTR [rbp-0x70]
0x007f3e06: mov    rcx,QWORD PTR [rsi+0x6c0]
0x007f3e0d: mov    rdx,rax
0x007f3e10: mov    rax,QWORD PTR [rsi+0x6c8]
0x007f3e17: sub    rax,rcx
0x007f3e1a: sar    rax,0x3
0x007f3e1e: cmp    rdx,rax
0x007f3e21: jae    0x1407f3ede
0x007f3e27: lea    rax,[rdx*8+0x0]
0x007f3e2f: mov    QWORD PTR [rbp-0x70],rax
0x007f3e33: mov    rcx,QWORD PTR [rax+rcx*1]
0x007f3e37: mov    rax,QWORD PTR [rcx+0x98]
0x007f3e3e: sub    rax,QWORD PTR [rcx+0x90]
0x007f3e45: sar    rax,0x3
0x007f3e49: test   rax,rax
0x007f3e4c: je     0x1407f3ede
0x007f3e52: lea    rcx,[rbp-0x10]
0x007f3e56: test   r8b,r8b
0x007f3e59: jne    0x1407f3ea3
0x007f3e5b: lea    rdx,[rip+0xdf4cf6]        # 0x1415e8b58 ; literal="'s "
0x007f3e62: call   0x14006f4f0
0x007f3e67: mov    eax,0x180
0x007f3e6c: cmp    bx,ax
0x007f3e6f: jne    0x1407f3e7e
0x007f3e71: lea    rdx,[rip+0xeb5da4]        # 0x1416a9c1c ; literal="deep "
0x007f3e78: lea    rcx,[rbp-0x10]
0x007f3e7c: jmp    0x1407f3eaa
0x007f3e7e: cmp    bx,di
0x007f3e81: jne    0x1407f3e90
0x007f3e83: lea    rdx,[rip+0xeb5d4e]        # 0x1416a9bd8 ; literal="shallow "
0x007f3e8a: lea    rcx,[rbp-0x10]
0x007f3e8e: jmp    0x1407f3eaa
0x007f3e90: cmp    bx,r12w
0x007f3e94: jne    0x1407f3eaf
0x007f3e96: lea    rdx,[rip+0xeb5d33]        # 0x1416a9bd0 ; literal="vague "
0x007f3e9d: lea    rcx,[rbp-0x10]
0x007f3ea1: jmp    0x1407f3eaa
0x007f3ea3: lea    rdx,[rip+0xdef876]        # 0x1415e3720 ; literal=" "
0x007f3eaa: call   0x14006f4f0
0x007f3eaf: mov    rax,QWORD PTR [rsi+0x6c0]
0x007f3eb6: mov    rdx,QWORD PTR [rbp-0x70]
0x007f3eba: mov    rdx,QWORD PTR [rax+rdx*1]
0x007f3ebe: mov    rdx,QWORD PTR [rdx+0x90]
0x007f3ec5: mov    rdx,QWORD PTR [rdx]
0x007f3ec8: lea    rcx,[rbp-0x30]
0x007f3ecc: call   0x14006f530
0x007f3ed1: lea    rdx,[rbp-0x30]
0x007f3ed5: lea    rcx,[rbp-0x10]
0x007f3ed9: call   0x1400b9ca0
0x007f3ede: lea    rcx,[rbp-0x10]
0x007f3ee2: test   BYTE PTR [r13+0x8],0x40
0x007f3ee7: je     0x1407f3efa
0x007f3ee9: lea    rdx,[rip+0xe416c0]        # 0x1416355b0 ; literal=" print"
0x007f3ef0: call   0x14006f4f0
0x007f3ef5: jmp    0x1407f3fec
0x007f3efa: lea    rdx,[rip+0xeb5cf7]        # 0x1416a9bf8 ; literal=" imprint in the "
0x007f3f01: call   0x14006f4f0
0x007f3f06: lea    rax,[rbp-0x64]
0x007f3f0a: mov    QWORD PTR [rsp+0x38],rax
0x007f3f0f: lea    rax,[rbp-0x80]
0x007f3f13: mov    QWORD PTR [rsp+0x30],rax
0x007f3f18: lea    rax,[rbp-0x78]
0x007f3f1c: mov    QWORD PTR [rsp+0x28],rax
0x007f3f21: lea    rax,[rsp+0x70]
0x007f3f26: mov    QWORD PTR [rsp+0x20],rax
0x007f3f2b: movzx  esi,WORD PTR [rsp+0x78]
0x007f3f30: movzx  r9d,si
0x007f3f34: movzx  ebx,WORD PTR [rbp-0x74]
0x007f3f38: movzx  r8d,bx
0x007f3f3c: movzx  edi,WORD PTR [rsp+0x7c]
0x007f3f41: movzx  edx,di
0x007f3f44: lea    rcx,[rip+0x1bd7495]        # 0x1423cb3e0
0x007f3f4b: call   0x1414cda90
0x007f3f50: cmp    WORD PTR [rsp+0x70],0xffff
0x007f3f56: jne    0x1407f3f9e
0x007f3f58: lea    rax,[rbp-0x80]
0x007f3f5c: mov    QWORD PTR [rsp+0x40],rax
0x007f3f61: lea    rax,[rbp-0x78]
0x007f3f65: mov    QWORD PTR [rsp+0x38],rax
0x007f3f6a: lea    rax,[rsp+0x70]
0x007f3f6f: mov    QWORD PTR [rsp+0x30],rax
0x007f3f74: lea    rax,[rbp-0x7c]
0x007f3f78: mov    QWORD PTR [rsp+0x28],rax
0x007f3f7d: lea    rax,[rsp+0x7c]
0x007f3f82: mov    QWORD PTR [rsp+0x20],rax
0x007f3f87: movzx  r9d,si
0x007f3f8b: movzx  r8d,bx
0x007f3f8f: movzx  edx,di
0x007f3f92: lea    rcx,[rip+0x1bd7447]        # 0x1423cb3e0
0x007f3f99: call   0x1414cbbe0
0x007f3f9e: lea    rcx,[rbp-0x58]
0x007f3fa2: call   0x14006f620
0x007f3fa7: nop
0x007f3fa8: movzx  eax,WORD PTR [rbp-0x80]
0x007f3fac: mov    WORD PTR [rsp+0x30],ax
0x007f3fb1: mov    BYTE PTR [rsp+0x28],0x0
0x007f3fb6: mov    DWORD PTR [rsp+0x20],r14d
0x007f3fbb: mov    r9d,DWORD PTR [rbp-0x78]
0x007f3fbf: movzx  r8d,WORD PTR [rsp+0x70]
0x007f3fc5: lea    rdx,[rbp-0x58]
0x007f3fc9: lea    rcx,[rip+0x1bd7410]        # 0x1423cb3e0
0x007f3fd0: call   0x1414cc890
0x007f3fd5: lea    rdx,[rbp-0x58]
0x007f3fd9: lea    rcx,[rbp-0x10]
0x007f3fdd: call   0x1400b9ca0
0x007f3fe2: nop
0x007f3fe3: lea    rcx,[rbp-0x58]
0x007f3fe7: call   0x14006f7e0
0x007f3fec: lea    rcx,[rbp-0x10]
0x007f3ff0: cmp    QWORD PTR [rbp+0x0],0x3c
0x007f3ff5: lea    rdx,[rip+0xeb5bec]        # 0x1416a9be8 ; literal=" is here."
0x007f3ffc: jbe    0x1407f4005
0x007f3ffe: lea    rdx,[rip+0xdef56f]        # 0x1415e3574 ; literal="."
0x007f4005: call   0x14006f4f0
0x007f400a: mov    edx,0x45
0x007f400f: lea    rcx,[rbp-0x10]
0x007f4013: call   0x14052b900
0x007f4018: xor    r9d,r9d
0x007f401b: lea    rdx,[rbp-0x10]
0x007f401f: lea    rcx,[rip+0x1e502ba]        # 0x1426442e0
0x007f4026: call   0x140ad69a0
0x007f402b: nop
0x007f402c: lea    rcx,[rbp-0x30]
0x007f4030: call   0x14006f7e0
0x007f4035: nop
0x007f4036: lea    rcx,[rbp-0x10]
0x007f403a: jmp    0x1407f410b
0x007f403f: lea    eax,[r15-0x22]
0x007f4043: mov    DWORD PTR [rip+0x1e5031b],eax        # 0x142644364
0x007f4049: mov    esi,0x1
0x007f404e: mov    DWORD PTR [rip+0x1e50314],esi        # 0x142644368
0x007f4054: mov    DWORD PTR [rip+0x1e5030e],0x1010007        # 0x14264436c
0x007f405e: lea    rcx,[rbp-0x58]
0x007f4062: cmp    bx,di
0x007f4065: jne    0x1407f408a
0x007f4067: lea    rdx,[rip+0xeb4a1a]        # 0x1416a8a88 ; literal="The vegetation is heavily damaged here."
0x007f406e: call   0x1400680e0
0x007f4073: nop
0x007f4074: xor    r9d,r9d
0x007f4077: lea    rdx,[rbp-0x58]
0x007f407b: lea    rcx,[rip+0x1e5025e]        # 0x1426442e0
0x007f4082: call   0x140ad69a0
0x007f4087: nop
0x007f4088: jmp    0x1407f4107
0x007f408a: mov    edi,0x100
0x007f408f: cmp    bx,di
0x007f4092: jne    0x1407f40b7
0x007f4094: lea    rdx,[rip+0xeb49cd]        # 0x1416a8a68 ; literal="The vegetation is bent here."
0x007f409b: call   0x1400680e0
0x007f40a0: nop
0x007f40a1: xor    r9d,r9d
0x007f40a4: lea    rdx,[rbp-0x58]
0x007f40a8: lea    rcx,[rip+0x1e50231]        # 0x1426442e0
0x007f40af: call   0x140ad69a0
0x007f40b4: nop
0x007f40b5: jmp    0x1407f4107
0x007f40b7: mov    r12d,0x80
0x007f40bd: cmp    bx,r12w
0x007f40c1: jne    0x1407f40e6
0x007f40c3: lea    rdx,[rip+0xeb4a06]        # 0x1416a8ad0 ; literal="The vegetation has been slightly perturbed here."
0x007f40ca: call   0x1400680e0
0x007f40cf: nop
0x007f40d0: xor    r9d,r9d
0x007f40d3: lea    rdx,[rbp-0x58]
0x007f40d7: lea    rcx,[rip+0x1e50202]        # 0x1426442e0
0x007f40de: call   0x140ad69a0
0x007f40e3: nop
0x007f40e4: jmp    0x1407f4107
0x007f40e6: lea    rdx,[rip+0xeb49c3]        # 0x1416a8ab0 ; literal="The vegetation is broken here."
0x007f40ed: call   0x1400680e0
0x007f40f2: nop
0x007f40f3: xor    r9d,r9d
0x007f40f6: lea    rdx,[rbp-0x58]
0x007f40fa: lea    rcx,[rip+0x1e501df]        # 0x1426442e0
0x007f4101: call   0x140ad69a0
0x007f4106: nop
0x007f4107: lea    rcx,[rbp-0x58]
0x007f410b: call   0x14006f7e0
0x007f4110: test   BYTE PTR [r13+0x8],0x2
0x007f4115: je     0x1407f42aa
0x007f411b: mov    DWORD PTR [rip+0x1e50247],0x1010007        # 0x14264436c
0x007f4125: lea    eax,[r15-0x22]
0x007f4129: mov    DWORD PTR [rip+0x1e50235],eax        # 0x142644364
0x007f412f: mov    DWORD PTR [rip+0x1e5022f],0x3        # 0x142644368
0x007f4139: movzx  eax,WORD PTR [r13+0x8]
0x007f413e: and    eax,0x1c
0x007f4141: movsxd rcx,eax
0x007f4144: lea    rdx,[rip+0xffffffffff80beb5]        # 0x140000000
0x007f414b: movzx  eax,BYTE PTR [rdx+rcx*1+0x7f4484]
0x007f4153: mov    ecx,DWORD PTR [rdx+rax*4+0x7f4460]
0x007f415a: add    rcx,rdx
0x007f415d: jmp    rcx
0x007f415f: lea    rdx,[rip+0xeb5b42]        # 0x1416a9ca8 ; literal="The signs lead north."
0x007f4166: lea    rcx,[rbp-0x58]
0x007f416a: call   0x1400680e0
0x007f416f: nop
0x007f4170: xor    r9d,r9d
0x007f4173: lea    rdx,[rbp-0x58]
0x007f4177: lea    rcx,[rip+0x1e50162]        # 0x1426442e0
0x007f417e: call   0x140ad69a0
0x007f4183: nop
0x007f4184: jmp    0x1407f42a1
0x007f4189: lea    rdx,[rip+0xeb5b68]        # 0x1416a9cf8 ; literal="The signs lead south."
0x007f4190: lea    rcx,[rbp-0x58]
0x007f4194: call   0x1400680e0
0x007f4199: nop
0x007f419a: xor    r9d,r9d
0x007f419d: lea    rdx,[rbp-0x58]
0x007f41a1: lea    rcx,[rip+0x1e50138]        # 0x1426442e0
0x007f41a8: call   0x140ad69a0
0x007f41ad: nop
0x007f41ae: jmp    0x1407f42a1
0x007f41b3: lea    rdx,[rip+0xeb5b26]        # 0x1416a9ce0 ; literal="The signs lead east."
0x007f41ba: lea    rcx,[rbp-0x58]
0x007f41be: call   0x1400680e0
0x007f41c3: nop
0x007f41c4: xor    r9d,r9d
0x007f41c7: lea    rdx,[rbp-0x58]
0x007f41cb: lea    rcx,[rip+0x1e5010e]        # 0x1426442e0
0x007f41d2: call   0x140ad69a0
0x007f41d7: nop
0x007f41d8: jmp    0x1407f42a1
0x007f41dd: lea    rdx,[rip+0xeb5a6c]        # 0x1416a9c50 ; literal="The signs lead west."
0x007f41e4: lea    rcx,[rbp-0x58]
0x007f41e8: call   0x1400680e0
0x007f41ed: nop
0x007f41ee: xor    r9d,r9d
0x007f41f1: lea    rdx,[rbp-0x58]
0x007f41f5: lea    rcx,[rip+0x1e500e4]        # 0x1426442e0
0x007f41fc: call   0x140ad69a0
0x007f4201: nop
0x007f4202: jmp    0x1407f42a1
0x007f4207: lea    rdx,[rip+0xeb5a22]        # 0x1416a9c30 ; literal="The signs lead northeast."
0x007f420e: lea    rcx,[rbp-0x58]
0x007f4212: call   0x1400680e0
0x007f4217: nop
0x007f4218: xor    r9d,r9d
0x007f421b: lea    rdx,[rbp-0x58]
0x007f421f: lea    rcx,[rip+0x1e500ba]        # 0x1426442e0
0x007f4226: call   0x140ad69a0
0x007f422b: nop
0x007f422c: jmp    0x1407f42a1
0x007f422e: lea    rdx,[rip+0xeb5a53]        # 0x1416a9c88 ; literal="The signs lead northwest."
0x007f4235: lea    rcx,[rbp-0x58]
0x007f4239: call   0x1400680e0
0x007f423e: nop
0x007f423f: xor    r9d,r9d
0x007f4242: lea    rdx,[rbp-0x58]
0x007f4246: lea    rcx,[rip+0x1e50093]        # 0x1426442e0
0x007f424d: call   0x140ad69a0
0x007f4252: nop
0x007f4253: jmp    0x1407f42a1
0x007f4255: lea    rdx,[rip+0xeb5a0c]        # 0x1416a9c68 ; literal="The signs lead southeast."
0x007f425c: lea    rcx,[rbp-0x58]
0x007f4260: call   0x1400680e0
0x007f4265: nop
0x007f4266: xor    r9d,r9d
0x007f4269: lea    rdx,[rbp-0x58]
0x007f426d: lea    rcx,[rip+0x1e5006c]        # 0x1426442e0
0x007f4274: call   0x140ad69a0
0x007f4279: nop
0x007f427a: jmp    0x1407f42a1
0x007f427c: lea    rdx,[rip+0xeb584d]        # 0x1416a9ad0 ; literal="The signs lead southwest."
0x007f4283: lea    rcx,[rbp-0x58]
0x007f4287: call   0x1400680e0
0x007f428c: nop
0x007f428d: xor    r9d,r9d
0x007f4290: lea    rdx,[rbp-0x58]
0x007f4294: lea    rcx,[rip+0x1e50045]        # 0x1426442e0
0x007f429b: call   0x140ad69a0
0x007f42a0: nop
0x007f42a1: lea    rcx,[rbp-0x58]
0x007f42a5: call   0x14006f7e0
0x007f42aa: test   BYTE PTR [r13+0x8],0x20
0x007f42af: je     0x1407f4341
0x007f42b5: mov    DWORD PTR [rip+0x1e500ad],0x1010007        # 0x14264436c
0x007f42bf: lea    eax,[r15-0x22]
0x007f42c3: mov    DWORD PTR [rip+0x1e5009b],eax        # 0x142644364
0x007f42c9: mov    eax,0x4
0x007f42ce: mov    DWORD PTR [rip+0x1e50094],eax        # 0x142644368
0x007f42d4: xorps  xmm0,xmm0
0x007f42d7: movups XMMWORD PTR [rbp-0x58],xmm0
0x007f42db: mov    ecx,0x30
0x007f42e0: call   0x140070760
0x007f42e5: mov    QWORD PTR [rbp-0x58],rax
0x007f42e9: movdqa xmm0,XMMWORD PTR [rip+0xf9194f]        # 0x141785c40 ; literal="\""
0x007f42f1: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x007f42f6: movups xmm0,XMMWORD PTR [rip+0xeb57ab]        # 0x1416a9aa8 ; literal="They belong to you or a companion."
0x007f42fd: movups XMMWORD PTR [rax],xmm0
0x007f4300: movups xmm1,XMMWORD PTR [rip+0xeb57b1]        # 0x1416a9ab8 ; literal="ou or a companion."
0x007f4307: movups XMMWORD PTR [rax+0x10],xmm1
0x007f430b: movzx  ecx,WORD PTR [rip+0xeb57b6]        # 0x1416a9ac8 ; literal="n."
0x007f4312: mov    WORD PTR [rax+0x20],cx
0x007f4316: mov    BYTE PTR [rax+0x22],0x0
0x007f431a: xor    r9d,r9d
0x007f431d: lea    rdx,[rbp-0x58]
0x007f4321: lea    rcx,[rip+0x1e4ffb8]        # 0x1426442e0
0x007f4328: call   0x140ad69a0
0x007f432d: nop
0x007f432e: lea    rcx,[rbp-0x58]
0x007f4332: call   0x14006f7e0
0x007f4337: jmp    0x1407f4341
0x007f4339: mov    rcx,rdi
0x007f433c: call   0x14080ae60
0x007f4341: mov    rcx,QWORD PTR [rbp+0x30]
0x007f4345: xor    rcx,rsp
0x007f4348: call   0x1415345d0
0x007f434d: lea    r11,[rsp+0x140]
0x007f4355: mov    rbx,QWORD PTR [r11+0x38]
0x007f4359: mov    rsi,QWORD PTR [r11+0x40]
0x007f435d: mov    rdi,QWORD PTR [r11+0x48]
0x007f4361: mov    rsp,r11
0x007f4364: pop    r15
0x007f4366: pop    r14
0x007f4368: pop    r13
0x007f436a: pop    r12
0x007f436c: pop    rbp
0x007f436d: ret
0x007f436e: xchg   ax,ax
0x007f4370: sub    BYTE PTR [rdx],bl
0x007f4372: jg     0x1407f4374
0x007f4374: jle    0x1407f438f
0x007f4376: jg     0x1407f4378
0x007f4378: cmp    bl,BYTE PTR [rbx]
0x007f437a: jg     0x1407f437c
0x007f437c: out    0x1b,al
0x007f437e: jg     0x1407f4380
0x007f4380: jns    0x1407f439e
0x007f4382: jg     0x1407f4384
0x007f4384: rex.B (bad)
0x007f4386: jg     0x1407f4388
0x007f4388: mov    ah,BYTE PTR [rcx]
0x007f438a: jg     0x1407f438c
0x007f438c: xor    ebp,DWORD PTR [rdx]
0x007f438e: jg     0x1407f4390
0x007f4390: rcr    BYTE PTR [rdx],0x7f
0x007f4393: add    bl,bh
0x007f4395: and    BYTE PTR [rdi+0x0],bh
0x007f4398: pop    rbp
0x007f4399: (bad)
0x007f439a: jg     0x1407f439c
0x007f439c: jmp    0x1407f43c6
0x007f439e: jg     0x1407f43a0
0x007f43a0: sbb    DWORD PTR [rdx],esp
0x007f43a2: jg     0x1407f43a4
0x007f43a4: enter  0x7f1e,0x0
0x007f43a8: fstp   QWORD PTR [rsi]
0x007f43aa: jg     0x1407f43ac
0x007f43ac: add    ebx,DWORD PTR [rdi]
0x007f43ae: jg     0x1407f43b0
0x007f43b0: sbb    BYTE PTR [rdi],bl
0x007f43b2: jg     0x1407f43b4
0x007f43b4: outs   dx,DWORD PTR [rsi]
0x007f43b5: (bad)
0x007f43b6: jg     0x1407f43b8
0x007f43b8: call   FWORD PTR [rdi]
0x007f43ba: jg     0x1407f43bc
0x007f43bc: adc    al,0x20
0x007f43be: jg     0x1407f43c0
0x007f43c0: sub    DWORD PTR [rax],esp
0x007f43c2: jg     0x1407f43c4
0x007f43c4: ds and BYTE PTR [rdi+0x0],bh
0x007f43c8: repz (bad)
0x007f43ca: jg     0x1407f43cc
0x007f43cc: mov    dh,0x1f
0x007f43ce: jg     0x1407f43d0
0x007f43d0: rex.RB (bad)
0x007f43d2: jg     0x1407f43d4
0x007f43d4: pop    rdx
0x007f43d5: (bad)
0x007f43d6: jg     0x1407f43d8
0x007f43d8: push   rbx
0x007f43d9: and    BYTE PTR [rdi+0x0],bh
0x007f43dc: (bad)
0x007f43dd: es jg  0x1407f43e0
0x007f43e0: frstor [rsi]
0x007f43e2: jg     0x1407f43e4
0x007f43e4: out    0x26,al
0x007f43e6: jg     0x1407f43e8
0x007f43e8: clc
0x007f43e9: es jg  0x1407f43ec
0x007f43ec: out    dx,eax
0x007f43ed: es jg  0x1407f43f0
0x007f43f0: add    DWORD PTR [rdi],esp
0x007f43f2: jg     0x1407f43f4
0x007f43f4: or     ah,BYTE PTR [rdi]
0x007f43f6: jg     0x1407f43f8
0x007f43f8: adc    esp,DWORD PTR [rdi]
0x007f43fa: jg     0x1407f43fc
0x007f43fc: and    esp,DWORD PTR [rdi]
0x007f43fe: jg     0x1407f4400
0x007f4400: add    BYTE PTR [rax],cl
0x007f4402: or     BYTE PTR [rax],cl
0x007f4404: add    DWORD PTR [rax],ecx
0x007f4406: or     BYTE PTR [rax],cl
0x007f4408: add    cl,BYTE PTR [rax]
0x007f440a: or     BYTE PTR [rax],cl
0x007f440c: add    ecx,DWORD PTR [rax]
0x007f440e: or     BYTE PTR [rax],cl
0x007f4410: add    al,0x8
0x007f4412: or     BYTE PTR [rax],cl
0x007f4414: add    eax,0x6080808
0x007f4419: or     BYTE PTR [rax],cl
0x007f441b: or     BYTE PTR [rdi],al
0x007f441d: nop    DWORD PTR [rax]
0x007f4420: loop   0x1407f4451
0x007f4422: jg     0x1407f4424
0x007f4424: out    dx,al
0x007f4425: (bad)
0x007f4426: jg     0x1407f4428
0x007f4428: imul   DWORD PTR [rdi]
0x007f442a: jg     0x1407f442c
0x007f442c: add    BYTE PTR [rax],dh
0x007f442e: jg     0x1407f4430
0x007f4430: or     DWORD PTR [rax],esi
0x007f4432: jg     0x1407f4434
0x007f4434: adc    dh,BYTE PTR [rax]
0x007f4436: jg     0x1407f4438
0x007f4438: sbb    esi,DWORD PTR [rax]
0x007f443a: jg     0x1407f443c
0x007f443c: and    al,0x30
0x007f443e: jg     0x1407f4440
0x007f4440: sub    eax,0x36007f30
0x007f4445: xor    BYTE PTR [rdi+0x0],bh
0x007f4448: (bad)
0x007f4449: xor    BYTE PTR [rdi+0x0],bh
0x007f444c: rex.W xor BYTE PTR [rdi+0x0],dil
0x007f4450: push   rcx
0x007f4451: xor    BYTE PTR [rdi+0x0],bh
0x007f4454: pop    rdx
0x007f4455: xor    BYTE PTR [rdi+0x0],bh
0x007f4458: movsxd esi,DWORD PTR [rax]
0x007f445a: jg     0x1407f445c
0x007f445c: ins    BYTE PTR [rdi],dx
0x007f445d: xor    BYTE PTR [rdi+0x0],bh
0x007f4460: pop    rdi
0x007f4461: rex.B jg 0x1407f4464
0x007f4464: mov    DWORD PTR [rcx+0x7f],eax
0x007f4467: add    BYTE PTR [rbx+0x7007f41],dh
0x007f446d: rex.X jg 0x1407f4470
0x007f4470: fld    QWORD PTR [rcx+0x7f]
0x007f4473: add    BYTE PTR [rsi],ch
0x007f4475: rex.X jg 0x1407f4478
0x007f4478: push   rbp
0x007f4479: rex.X jg 0x1407f447c
0x007f447c: jl     0x1407f44c0
0x007f447e: jg     0x1407f4480
0x007f4480: stos   BYTE PTR [rdi],al
0x007f4481: rex.X jg 0x1407f4484
0x007f4484: add    BYTE PTR [rax],cl
0x007f4486: or     BYTE PTR [rax],cl
0x007f4488: add    DWORD PTR [rax],ecx
0x007f448a: or     BYTE PTR [rax],cl
0x007f448c: add    cl,BYTE PTR [rax]
0x007f448e: or     BYTE PTR [rax],cl
0x007f4490: add    ecx,DWORD PTR [rax]
0x007f4492: or     BYTE PTR [rax],cl
0x007f4494: add    al,0x8
0x007f4496: or     BYTE PTR [rax],cl
0x007f4498: add    eax,0x6080808
0x007f449d: or     BYTE PTR [rax],cl
0x007f449f: or     BYTE PTR [rdi],al
