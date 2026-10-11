# reference PE:6a70a6d9:02711000; organization-title-layout; RVA 0xd1650..0xd1832
0x000d1650: rex push rbx
0x000d1652: push   rsi
0x000d1653: sub    rsp,0x28
0x000d1657: cmp    DWORD PTR [rip+0x17cac3a],0x0        # 0x14189c298
0x000d165e: mov    rbx,rcx
0x000d1661: mov    esi,0x3a
0x000d1666: jne    0x1400d1671
0x000d1668: mov    esi,DWORD PTR [rip+0x22fc116]        # 0x1423cd784
0x000d166e: add    esi,0xfffffffc
0x000d1671: cmp    QWORD PTR [rcx+0x68],0x0
0x000d1676: mov    QWORD PTR [rsp+0x48],rdi
0x000d167b: jne    0x1400d16b3
0x000d167d: lea    rdx,[rcx+0x18]
0x000d1681: lea    rdi,[rcx+0x58]
0x000d1685: cmp    rdi,rdx
0x000d1688: je     0x1400d16a0
0x000d168a: cmp    QWORD PTR [rdx+0x18],0xf
0x000d168f: mov    r8,QWORD PTR [rdx+0x10]
0x000d1693: jbe    0x1400d1698
0x000d1695: mov    rdx,QWORD PTR [rdx]
0x000d1698: mov    rcx,rdi
0x000d169b: call   0x14006f8d0
0x000d16a0: movsxd rax,esi
0x000d16a3: cmp    QWORD PTR [rdi+0x10],rax
0x000d16a7: jbe    0x1400d16b3
0x000d16a9: mov    edx,esi
0x000d16ab: mov    rcx,rdi
0x000d16ae: call   0x14052d910
0x000d16b3: mov    eax,DWORD PTR [rbx+0x98]
0x000d16b9: test   al,0x1
0x000d16bb: jne    0x1400d1826
0x000d16c1: or     eax,0x1
0x000d16c4: mov    QWORD PTR [rsp+0x50],r14
0x000d16c9: mov    DWORD PTR [rbx+0x98],eax
0x000d16cf: mov    rsi,0xffffffffffffffff
0x000d16d6: mov    r8,QWORD PTR [rbx]
0x000d16d9: mov    r14d,esi
0x000d16dc: mov    r11,QWORD PTR [rbx+0x8]
0x000d16e0: sub    r11,r8
0x000d16e3: sar    r11,0x3
0x000d16e7: sub    r11d,0x1
0x000d16eb: js     0x1400d177b
0x000d16f1: mov    QWORD PTR [rsp+0x40],rbp
0x000d16f6: mov    r10,rsi
0x000d16f9: movsxd rdi,r11d
0x000d16fc: mov    QWORD PTR [rsp+0x20],r15
0x000d1701: xor    r15d,r15d
0x000d1704: lea    rbp,[rdi*8+0x0]
0x000d170c: nop    DWORD PTR [rax+0x0]
0x000d1710: mov    r9,QWORD PTR [r8+rbp*1]
0x000d1714: mov    DWORD PTR [r9+0x1c],r15d
0x000d1718: mov    rdx,QWORD PTR [rbx]
0x000d171b: cmp    esi,0xffffffff
0x000d171e: jne    0x1400d17fe
0x000d1724: mov    esi,r11d
0x000d1727: mov    r10,rdi
0x000d172a: mov    r8,rdx
0x000d172d: cmp    r14d,0xffffffff
0x000d1731: je     0x1400d1764
0x000d1733: movsxd rcx,r14d
0x000d1736: mov    r8,rdx
0x000d1739: cmp    rcx,r10
0x000d173c: jle    0x1400d1764
0x000d173e: xchg   ax,ax
0x000d1740: mov    rax,QWORD PTR [rdx+rcx*8]
0x000d1744: mov    r8,rdx
0x000d1747: cmp    QWORD PTR [rax+0x8],r9
0x000d174b: jne    0x1400d1759
0x000d174d: mov    eax,DWORD PTR [rax+0x1c]
0x000d1750: inc    eax
0x000d1752: add    DWORD PTR [r9+0x1c],eax
0x000d1756: mov    r8,QWORD PTR [rbx]
0x000d1759: dec    rcx
0x000d175c: mov    rdx,r8
0x000d175f: cmp    rcx,r10
0x000d1762: jg     0x1400d1740
0x000d1764: dec    rdi
0x000d1767: sub    rbp,0x8
0x000d176b: sub    r11d,0x1
0x000d176f: jns    0x1400d1710
0x000d1771: mov    r15,QWORD PTR [rsp+0x20]
0x000d1776: mov    rbp,QWORD PTR [rsp+0x40]
0x000d177b: mov    r9,QWORD PTR [rbx+0x8]
0x000d177f: mov    r14,QWORD PTR [rsp+0x50]
0x000d1784: cmp    r8,r9
0x000d1787: jae    0x1400d1826
0x000d178d: mov    rbx,QWORD PTR [r8]
0x000d1790: mov    eax,DWORD PTR [rbx+0x1c]
0x000d1793: test   eax,eax
0x000d1795: jle    0x1400d181d
0x000d179b: lea    ecx,[rax+rax*4]
0x000d179e: mov    eax,0x5
0x000d17a3: sub    eax,ecx
0x000d17a5: mov    rcx,r8
0x000d17a8: cdq
0x000d17a9: sub    eax,edx
0x000d17ab: sar    eax,1
0x000d17ad: mov    edi,eax
0x000d17af: add    edi,DWORD PTR [rbx+0x18]
0x000d17b2: cmp    rcx,r9
0x000d17b5: jae    0x1400d181d
0x000d17b7: mov    edx,DWORD PTR [rbx+0x14]
0x000d17ba: mov    r10,QWORD PTR [rcx]
0x000d17bd: lea    eax,[rdx+0x1]
0x000d17c0: mov    r11d,DWORD PTR [r10+0x14]
0x000d17c4: cmp    r11d,eax
0x000d17c7: jg     0x1400d181d
0x000d17c9: cmp    r11d,edx
0x000d17cc: je     0x1400d17f8
0x000d17ce: cmp    QWORD PTR [r10+0x8],rbx
0x000d17d2: jne    0x1400d17f8
0x000d17d4: mov    eax,DWORD PTR [r10+0x1c]
0x000d17d8: lea    eax,[rax+rax*4]
0x000d17db: cdq
0x000d17dc: sub    eax,edx
0x000d17de: sar    eax,1
0x000d17e0: add    eax,edi
0x000d17e2: mov    DWORD PTR [r10+0x18],eax
0x000d17e6: mov    rax,QWORD PTR [rcx]
0x000d17e9: mov    edx,DWORD PTR [rax+0x1c]
0x000d17ec: lea    eax,[rdi+rdx*1]
0x000d17ef: lea    edi,[rdx*4+0x5]
0x000d17f6: add    edi,eax
0x000d17f8: add    rcx,0x8
0x000d17fc: jmp    0x1400d17b2
0x000d17fe: mov    rax,QWORD PTR [rdx+r10*8]
0x000d1802: mov    ecx,DWORD PTR [rax+0x14]
0x000d1805: cmp    DWORD PTR [r9+0x14],ecx
0x000d1809: je     0x1400d172a
0x000d180f: mov    r14d,esi
0x000d1812: mov    r10,rdi
0x000d1815: mov    esi,r11d
0x000d1818: jmp    0x1400d1733
0x000d181d: add    r8,0x8
0x000d1821: jmp    0x1400d1784
0x000d1826: mov    rdi,QWORD PTR [rsp+0x48]
0x000d182b: add    rsp,0x28
0x000d182f: pop    rsi
0x000d1830: pop    rbx
0x000d1831: ret
