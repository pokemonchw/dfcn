# classic PE:6a70b91c:0270a000; organization-title-layout; RVA 0xd15e0..0xd17c2
0x000d15e0: rex push rbx
0x000d15e2: push   rsi
0x000d15e3: sub    rsp,0x28
0x000d15e7: cmp    DWORD PTR [rip+0x17c4c7a],0x0        # 0x141896268
0x000d15ee: mov    rbx,rcx
0x000d15f1: mov    esi,0x3a
0x000d15f6: jne    0x1400d1601
0x000d15f8: mov    esi,DWORD PTR [rip+0x22f6076]        # 0x1423c7674
0x000d15fe: add    esi,0xfffffffc
0x000d1601: cmp    QWORD PTR [rcx+0x68],0x0
0x000d1606: mov    QWORD PTR [rsp+0x48],rdi
0x000d160b: jne    0x1400d1643
0x000d160d: lea    rdx,[rcx+0x18]
0x000d1611: lea    rdi,[rcx+0x58]
0x000d1615: cmp    rdi,rdx
0x000d1618: je     0x1400d1630
0x000d161a: cmp    QWORD PTR [rdx+0x18],0xf
0x000d161f: mov    r8,QWORD PTR [rdx+0x10]
0x000d1623: jbe    0x1400d1628
0x000d1625: mov    rdx,QWORD PTR [rdx]
0x000d1628: mov    rcx,rdi
0x000d162b: call   0x14006f860
0x000d1630: movsxd rax,esi
0x000d1633: cmp    QWORD PTR [rdi+0x10],rax
0x000d1637: jbe    0x1400d1643
0x000d1639: mov    edx,esi
0x000d163b: mov    rcx,rdi
0x000d163e: call   0x14052b330
0x000d1643: mov    eax,DWORD PTR [rbx+0x98]
0x000d1649: test   al,0x1
0x000d164b: jne    0x1400d17b6
0x000d1651: or     eax,0x1
0x000d1654: mov    QWORD PTR [rsp+0x50],r14
0x000d1659: mov    DWORD PTR [rbx+0x98],eax
0x000d165f: mov    rsi,0xffffffffffffffff
0x000d1666: mov    r8,QWORD PTR [rbx]
0x000d1669: mov    r14d,esi
0x000d166c: mov    r11,QWORD PTR [rbx+0x8]
0x000d1670: sub    r11,r8
0x000d1673: sar    r11,0x3
0x000d1677: sub    r11d,0x1
0x000d167b: js     0x1400d170b
0x000d1681: mov    QWORD PTR [rsp+0x40],rbp
0x000d1686: mov    r10,rsi
0x000d1689: movsxd rdi,r11d
0x000d168c: mov    QWORD PTR [rsp+0x20],r15
0x000d1691: xor    r15d,r15d
0x000d1694: lea    rbp,[rdi*8+0x0]
0x000d169c: nop    DWORD PTR [rax+0x0]
0x000d16a0: mov    r9,QWORD PTR [r8+rbp*1]
0x000d16a4: mov    DWORD PTR [r9+0x1c],r15d
0x000d16a8: mov    rdx,QWORD PTR [rbx]
0x000d16ab: cmp    esi,0xffffffff
0x000d16ae: jne    0x1400d178e
0x000d16b4: mov    esi,r11d
0x000d16b7: mov    r10,rdi
0x000d16ba: mov    r8,rdx
0x000d16bd: cmp    r14d,0xffffffff
0x000d16c1: je     0x1400d16f4
0x000d16c3: movsxd rcx,r14d
0x000d16c6: mov    r8,rdx
0x000d16c9: cmp    rcx,r10
0x000d16cc: jle    0x1400d16f4
0x000d16ce: xchg   ax,ax
0x000d16d0: mov    rax,QWORD PTR [rdx+rcx*8]
0x000d16d4: mov    r8,rdx
0x000d16d7: cmp    QWORD PTR [rax+0x8],r9
0x000d16db: jne    0x1400d16e9
0x000d16dd: mov    eax,DWORD PTR [rax+0x1c]
0x000d16e0: inc    eax
0x000d16e2: add    DWORD PTR [r9+0x1c],eax
0x000d16e6: mov    r8,QWORD PTR [rbx]
0x000d16e9: dec    rcx
0x000d16ec: mov    rdx,r8
0x000d16ef: cmp    rcx,r10
0x000d16f2: jg     0x1400d16d0
0x000d16f4: dec    rdi
0x000d16f7: sub    rbp,0x8
0x000d16fb: sub    r11d,0x1
0x000d16ff: jns    0x1400d16a0
0x000d1701: mov    r15,QWORD PTR [rsp+0x20]
0x000d1706: mov    rbp,QWORD PTR [rsp+0x40]
0x000d170b: mov    r9,QWORD PTR [rbx+0x8]
0x000d170f: mov    r14,QWORD PTR [rsp+0x50]
0x000d1714: cmp    r8,r9
0x000d1717: jae    0x1400d17b6
0x000d171d: mov    rbx,QWORD PTR [r8]
0x000d1720: mov    eax,DWORD PTR [rbx+0x1c]
0x000d1723: test   eax,eax
0x000d1725: jle    0x1400d17ad
0x000d172b: lea    ecx,[rax+rax*4]
0x000d172e: mov    eax,0x5
0x000d1733: sub    eax,ecx
0x000d1735: mov    rcx,r8
0x000d1738: cdq
0x000d1739: sub    eax,edx
0x000d173b: sar    eax,1
0x000d173d: mov    edi,eax
0x000d173f: add    edi,DWORD PTR [rbx+0x18]
0x000d1742: cmp    rcx,r9
0x000d1745: jae    0x1400d17ad
0x000d1747: mov    edx,DWORD PTR [rbx+0x14]
0x000d174a: mov    r10,QWORD PTR [rcx]
0x000d174d: lea    eax,[rdx+0x1]
0x000d1750: mov    r11d,DWORD PTR [r10+0x14]
0x000d1754: cmp    r11d,eax
0x000d1757: jg     0x1400d17ad
0x000d1759: cmp    r11d,edx
0x000d175c: je     0x1400d1788
0x000d175e: cmp    QWORD PTR [r10+0x8],rbx
0x000d1762: jne    0x1400d1788
0x000d1764: mov    eax,DWORD PTR [r10+0x1c]
0x000d1768: lea    eax,[rax+rax*4]
0x000d176b: cdq
0x000d176c: sub    eax,edx
0x000d176e: sar    eax,1
0x000d1770: add    eax,edi
0x000d1772: mov    DWORD PTR [r10+0x18],eax
0x000d1776: mov    rax,QWORD PTR [rcx]
0x000d1779: mov    edx,DWORD PTR [rax+0x1c]
0x000d177c: lea    eax,[rdi+rdx*1]
0x000d177f: lea    edi,[rdx*4+0x5]
0x000d1786: add    edi,eax
0x000d1788: add    rcx,0x8
0x000d178c: jmp    0x1400d1742
0x000d178e: mov    rax,QWORD PTR [rdx+r10*8]
0x000d1792: mov    ecx,DWORD PTR [rax+0x14]
0x000d1795: cmp    DWORD PTR [r9+0x14],ecx
0x000d1799: je     0x1400d16ba
0x000d179f: mov    r14d,esi
0x000d17a2: mov    r10,rdi
0x000d17a5: mov    esi,r11d
0x000d17a8: jmp    0x1400d16c3
0x000d17ad: add    r8,0x8
0x000d17b1: jmp    0x1400d1714
0x000d17b6: mov    rdi,QWORD PTR [rsp+0x48]
0x000d17bb: add    rsp,0x28
0x000d17bf: pop    rsi
0x000d17c0: pop    rbx
0x000d17c1: ret
