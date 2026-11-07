; Original disk PE PE:6a70a6d9:02711000; D:\program\steam\steamapps\common\Dwarf Fortress\Dwarf Fortress.exe; VA 0x140915f10..0x14091e20c
0x140915f10: mov    QWORD PTR [rsp+0x10],rbx
0x140915f15: mov    QWORD PTR [rsp+0x18],rsi
0x140915f1a: mov    QWORD PTR [rsp+0x20],rdi
0x140915f1f: push   rbp
0x140915f20: push   r12
0x140915f22: push   r13
0x140915f24: push   r14
0x140915f26: push   r15
0x140915f28: lea    rbp,[rsp-0xeb0]
0x140915f30: sub    rsp,0xfb0
0x140915f37: mov    rax,QWORD PTR [rip+0xf86102]        # 0x14189c040
0x140915f3e: xor    rax,rsp
0x140915f41: mov    QWORD PTR [rbp+0xea0],rax
0x140915f48: mov    r12,rcx
0x140915f4b: mov    QWORD PTR [rsp+0x58],rcx
0x140915f50: test   BYTE PTR [rip+0x1a84161],0x1        # 0x14239a0b8
0x140915f57: jne    0x14091e0a6
0x140915f5d: cmp    DWORD PTR [rcx+0x13fc],0x0
0x140915f64: jg     0x14091e0a6
0x140915f6a: mov    BYTE PTR [rsp+0x51],0x0
0x140915f6f: mov    rcx,QWORD PTR [rcx+0x8]
0x140915f73: add    rcx,0x3a0
0x140915f7a: mov    edx,0x7
0x140915f7f: call   0x140071f90
0x140915f84: test   al,al
0x140915f86: je     0x14091603d
0x140915f8c: lea    rdx,[rbp+0x250]
0x140915f93: lea    rcx,[rip+0x1acf12e]        # 0x1423e50c8
0x140915f9a: call   0x14006f240
0x140915f9f: lea    rdx,[rbp+0x538]
0x140915fa6: lea    rcx,[rip+0x1acf11b]        # 0x1423e50c8
0x140915fad: call   0x14006f230
0x140915fb2: lea    rdx,[rbp+0x538]
0x140915fb9: lea    rcx,[rbp+0x250]
0x140915fc0: call   0x1400b9970
0x140915fc5: test   al,al
0x140915fc7: jne    0x14091603d
0x140915fc9: nop    DWORD PTR [rax+0x0]
0x140915fd0: lea    rcx,[rbp+0x250]
0x140915fd7: call   0x14006ee10
0x140915fdc: mov    rbx,QWORD PTR [rax]
0x140915fdf: test   BYTE PTR [rbx+0x110],0x2
0x140915fe6: jne    0x140916013
0x140915fe8: movzx  eax,WORD PTR [rbx+0xa0]
0x140915fef: cmp    ax,0x67
0x140915ff3: je     0x140915ffb
0x140915ff5: cmp    ax,0x68
0x140915ff9: jne    0x140916013
0x140915ffb: mov    rcx,rbx
0x140915ffe: call   0x14138ed20
0x140916003: test   al,al
0x140916005: je     0x140916013
0x140916007: mov    rcx,rbx
0x14091600a: call   0x140073760
0x14091600f: test   al,al
0x140916011: jne    0x140916038
0x140916013: lea    rcx,[rbp+0x250]
0x14091601a: call   0x14006ee00
0x14091601f: lea    rdx,[rbp+0x538]
0x140916026: lea    rcx,[rbp+0x250]
0x14091602d: call   0x1400b9970
0x140916032: test   al,al
0x140916034: je     0x140915fd0
0x140916036: jmp    0x14091603d
0x140916038: mov    BYTE PTR [rsp+0x51],0x1
0x14091603d: lea    rcx,[rbp+0x660]
0x140916044: call   0x140065b00
0x140916049: nop
0x14091604a: lea    rcx,[rbp+0x870]
0x140916051: call   0x140065b00
0x140916056: nop
0x140916057: lea    rdx,[rbp+0x660]
0x14091605e: mov    rcx,r12
0x140916061: call   0x140901030
0x140916066: lea    rdx,[rbp+0x100]
0x14091606d: lea    rcx,[rbp+0x660]
0x140916074: call   0x14006f240
0x140916079: lea    rdx,[rbp+0x550]
0x140916080: lea    rcx,[rbp+0x660]
0x140916087: call   0x14006f230
0x14091608c: lea    r8,[rbp+0x550]
0x140916093: lea    rdx,[rbp+0x2]
0x140916097: lea    rcx,[rbp+0x100]
0x14091609e: call   0x14006ee20
0x1409160a3: xor    edx,edx
0x1409160a5: movzx  ecx,BYTE PTR [rax]
0x1409160a8: call   0x1400657b0
0x1409160ad: test   al,al
0x1409160af: je     0x14091612a
0x1409160b1: mov    ebx,0x5001
0x1409160b6: data16 nop WORD PTR [rax+rax*1+0x0]
0x1409160c0: lea    rcx,[rbp+0x100]
0x1409160c7: call   0x14006ee10
0x1409160cc: movzx  ecx,WORD PTR [rax]
0x1409160cf: sub    cx,0x4f
0x1409160d3: cmp    cx,0xe
0x1409160d7: ja     0x1409160f9
0x1409160d9: bt     ebx,ecx
0x1409160dc: jae    0x1409160f9
0x1409160de: lea    rcx,[rbp+0x100]
0x1409160e5: call   0x14006ee10
0x1409160ea: mov    rdx,rax
0x1409160ed: lea    rcx,[rbp+0x870]
0x1409160f4: call   0x14006f4f0
0x1409160f9: lea    rcx,[rbp+0x100]
0x140916100: call   0x14006f430
0x140916105: lea    r8,[rbp+0x550]
0x14091610c: lea    rdx,[rbp+0x2]
0x140916110: lea    rcx,[rbp+0x100]
0x140916117: call   0x14006ee20
0x14091611c: xor    edx,edx
0x14091611e: movzx  ecx,BYTE PTR [rax]
0x140916121: call   0x1400657b0
0x140916126: test   al,al
0x140916128: jne    0x1409160c0
0x14091612a: lea    rcx,[rbp+0x870]
0x140916131: call   0x14006f450
0x140916136: lea    rdx,[rbp+0x660]
0x14091613d: test   rax,rax
0x140916140: jne    0x140916150
0x140916142: lea    rcx,[rbp+0x870]
0x140916149: call   0x140065fb0
0x14091614e: jmp    0x14091617c
0x140916150: mov    ecx,0x5b
0x140916155: call   0x14013cbc0
0x14091615a: mov    ecx,0x4f
0x14091615f: lea    rdx,[rbp+0x660]
0x140916166: call   0x14013cbc0
0x14091616b: mov    ecx,0x5d
0x140916170: lea    rdx,[rbp+0x660]
0x140916177: call   0x14013cbc0
0x14091617c: mov    rcx,QWORD PTR [r12+0x8]
0x140916181: add    rcx,0x3a0
0x140916188: mov    edx,0x2
0x14091618d: call   0x140071f90
0x140916192: test   al,al
0x140916194: jne    0x14091e08d
0x14091619a: xor    esi,esi
0x14091619c: mov    QWORD PTR [rbp-0x20],rsi
0x1409161a0: lea    rcx,[r12+0x1948]
0x1409161a8: call   0x14006ee50
0x1409161ad: test   eax,eax
0x1409161af: jle    0x1409161de
0x1409161b1: mov    ecx,eax
0x1409161b3: call   0x140071f30
0x1409161b8: movsxd rdx,eax
0x1409161bb: lea    rcx,[r12+0x1948]
0x1409161c3: call   0x14006f220
0x1409161c8: mov    rcx,QWORD PTR [rax]
0x1409161cb: mov    edx,DWORD PTR [rcx+0x4]
0x1409161ce: lea    rcx,[rip+0x1be3ae3]        # 0x1424f9cb8
0x1409161d5: call   0x140067dc0
0x1409161da: mov    QWORD PTR [rbp-0x20],rax
0x1409161de: lea    rcx,[rip+0x1d85993]        # 0x14269bb78
0x1409161e5: call   0x1407c8660
0x1409161ea: mov    rdi,rax
0x1409161ed: sub    edi,0x1
0x1409161f0: js     0x1409162b2
0x1409161f6: movsxd rbx,edi
0x1409161f9: nop    DWORD PTR [rax+0x0]
0x140916200: mov    rdx,rbx
0x140916203: lea    rcx,[rip+0x1d8596e]        # 0x14269bb78
0x14091620a: call   0x1407c8650
0x14091620f: mov    rcx,QWORD PTR [rax]
0x140916212: cmp    QWORD PTR [rcx+0x8],r12
0x140916216: jne    0x1409162a6
0x14091621c: mov    rdx,rbx
0x14091621f: lea    rcx,[rip+0x1d85952]        # 0x14269bb78
0x140916226: call   0x1407c8650
0x14091622b: mov    rcx,QWORD PTR [rax]
0x14091622e: cmp    WORD PTR [rcx],0x1
0x140916232: je     0x14091627b
0x140916234: mov    rdx,rbx
0x140916237: lea    rcx,[rip+0x1d8593a]        # 0x14269bb78
0x14091623e: call   0x1407c8650
0x140916243: mov    rcx,QWORD PTR [rax]
0x140916246: cmp    WORD PTR [rcx],si
0x140916249: je     0x14091627b
0x14091624b: mov    rdx,rbx
0x14091624e: lea    rcx,[rip+0x1d85923]        # 0x14269bb78
0x140916255: call   0x1407c8650
0x14091625a: mov    rcx,QWORD PTR [rax]
0x14091625d: cmp    WORD PTR [rcx],0x2
0x140916261: je     0x14091627b
0x140916263: mov    rdx,rbx
0x140916266: lea    rcx,[rip+0x1d8590b]        # 0x14269bb78
0x14091626d: call   0x1407c8650
0x140916272: mov    rcx,QWORD PTR [rax]
0x140916275: cmp    WORD PTR [rcx],0x9
0x140916279: jne    0x1409162a6
0x14091627b: mov    rdx,rbx
0x14091627e: lea    rcx,[rip+0x1d858f3]        # 0x14269bb78
0x140916285: call   0x1407c8650
0x14091628a: mov    edx,0x20
0x14091628f: mov    rcx,QWORD PTR [rax]
0x140916292: call   0x141539680
0x140916297: mov    rdx,rbx
0x14091629a: lea    rcx,[rip+0x1d858d7]        # 0x14269bb78
0x1409162a1: call   0x1409e43c0
0x1409162a6: dec    rbx
0x1409162a9: sub    edi,0x1
0x1409162ac: jns    0x140916200
0x1409162b2: mov    edx,DWORD PTR [rip+0x1a7d3bc]        # 0x142393674
0x1409162b8: mov    rcx,QWORD PTR [rip+0x1bd5899]        # 0x1424ebb58
0x1409162bf: call   0x14007db20
0x1409162c4: mov    rbx,rax
0x1409162c7: mov    QWORD PTR [rbp+0x10],rax
0x1409162cb: test   rax,rax
0x1409162ce: je     0x14091e08d
0x1409162d4: mov    DWORD PTR [r12+0x13fc],0x348
0x1409162e0: mov    r8b,0x1
0x1409162e3: movzx  edx,r8b
0x1409162e7: lea    rcx,[rip+0x1a7d26a]        # 0x142393558
0x1409162ee: call   0x1408d95a0
0x1409162f3: cmp    eax,0xffffffff
0x1409162f6: jne    0x14091e08d
0x1409162fc: lea    rcx,[rbp+0x320]
0x140916303: call   0x140065b00
0x140916308: nop
0x140916309: mov    r8b,0x1
0x14091630c: lea    rdx,[rbp+0x320]
0x140916313: mov    rcx,r12
0x140916316: call   0x1409903f0
0x14091631b: lea    rcx,[rbp+0x320]
0x140916322: call   0x14006ee50
0x140916327: test   rax,rax
0x14091632a: je     0x14091e080
0x140916330: lea    rcx,[rbp+0x940]
0x140916337: call   0x14012f4e0
0x14091633c: nop
0x14091633d: mov    DWORD PTR [rsp+0x48],0x1
0x140916345: mov    BYTE PTR [rsp+0x40],0x1
0x14091634a: mov    BYTE PTR [rsp+0x38],0x0
0x14091634f: mov    BYTE PTR [rsp+0x30],0x0
0x140916354: mov    BYTE PTR [rsp+0x28],0x0
0x140916359: mov    DWORD PTR [rsp+0x20],0xffffffff
0x140916361: movzx  r9d,WORD PTR [rbx+0x84]
0x140916369: movzx  r8d,WORD PTR [rbx+0x82]
0x140916371: lea    rdx,[rbp+0x940]
0x140916378: mov    rcx,QWORD PTR [rip+0x1bd57d9]        # 0x1424ebb58
0x14091637f: call   0x140f01770
0x140916384: lea    rcx,[rbp+0x320]
0x14091638b: call   0x14006ee50
0x140916390: mov    r13,rax
0x140916393: sub    r13d,0x1
0x140916397: mov    QWORD PTR [rbp-0x58],r13
0x14091639b: js     0x140916bad
0x1409163a1: mov    r12d,r13d
0x1409163a4: mov    QWORD PTR [rbp-0x18],r12
0x1409163a8: mov    edx,r13d
0x1409163ab: lea    rcx,[rbp+0x320]
0x1409163b2: call   0x14006f220
0x1409163b7: mov    r15,QWORD PTR [rax]
0x1409163ba: movzx  r8d,WORD PTR [r15+0x84]
0x1409163c2: movzx  edx,WORD PTR [r15+0x82]
0x1409163ca: mov    rcx,QWORD PTR [rip+0x1bd5787]        # 0x1424ebb58
0x1409163d1: call   0x1401bc2d0
0x1409163d6: cmp    eax,0xffffffff
0x1409163d9: jne    0x1409163ef
0x1409163db: mov    edx,r12d
0x1409163de: lea    rcx,[rbp+0x320]
0x1409163e5: call   0x1400b99a0
0x1409163ea: jmp    0x140916b9a
0x1409163ef: xor    r14b,r14b
0x1409163f2: mov    BYTE PTR [rsp+0x60],r14b
0x1409163f7: mov    rcx,r15
0x1409163fa: call   0x1409b4ed0
0x1409163ff: mov    edi,eax
0x140916401: mov    rbx,QWORD PTR [rsp+0x58]
0x140916406: cmp    eax,DWORD PTR [rbx+0x4]
0x140916409: je     0x1409164c0
0x14091640f: cmp    WORD PTR [rbx],0x0
0x140916413: jne    0x1409164c8
0x140916419: lea    rdx,[rbp+0x108]
0x140916420: lea    rcx,[rbx+0xb8]
0x140916427: call   0x14006f240
0x14091642c: lea    rdx,[rbp+0x558]
0x140916433: lea    rcx,[rbx+0xb8]
0x14091643a: call   0x14006f230
0x14091643f: lea    r8,[rbp+0x558]
0x140916446: lea    rdx,[rbp-0x5]
0x14091644a: lea    rcx,[rbp+0x108]
0x140916451: call   0x14006ee20
0x140916456: xor    edx,edx
0x140916458: movzx  ecx,BYTE PTR [rax]
0x14091645b: call   0x1400657b0
0x140916460: test   al,al
0x140916462: je     0x1409164c8
0x140916464: lea    rcx,[rbp+0x108]
0x14091646b: call   0x14006ee10
0x140916470: mov    rcx,QWORD PTR [rax]
0x140916473: cmp    DWORD PTR [rcx+0x4],edi
0x140916476: jne    0x14091648d
0x140916478: lea    rcx,[rbp+0x108]
0x14091647f: call   0x14006ee10
0x140916484: mov    rcx,QWORD PTR [rax]
0x140916487: cmp    WORD PTR [rcx],0x1
0x14091648b: je     0x1409164c0
0x14091648d: lea    rcx,[rbp+0x108]
0x140916494: call   0x14006ee00
0x140916499: lea    r8,[rbp+0x558]
0x1409164a0: lea    rdx,[rbp-0x5]
0x1409164a4: lea    rcx,[rbp+0x108]
0x1409164ab: call   0x14006ee20
0x1409164b0: xor    edx,edx
0x1409164b2: movzx  ecx,BYTE PTR [rax]
0x1409164b5: call   0x1400657b0
0x1409164ba: test   al,al
0x1409164bc: jne    0x140916464
0x1409164be: jmp    0x1409164c8
0x1409164c0: mov    r14b,0x1
0x1409164c3: mov    BYTE PTR [rsp+0x60],r14b
0x1409164c8: mov    DWORD PTR [rbp-0x64],esi
0x1409164cb: mov    rcx,QWORD PTR [r15+0x308]
0x1409164d2: test   rcx,rcx
0x1409164d5: je     0x140916636
0x1409164db: lea    rdx,[rbp+0x110]
0x1409164e2: call   0x14006f240
0x1409164e7: lea    rdx,[rbp+0x568]
0x1409164ee: mov    rcx,QWORD PTR [r15+0x308]
0x1409164f5: call   0x14006f230
0x1409164fa: lea    r8,[rbp+0x568]
0x140916501: lea    rdx,[rbp+0x5]
0x140916505: lea    rcx,[rbp+0x110]
0x14091650c: call   0x14006ee20
0x140916511: xor    edx,edx
0x140916513: movzx  ecx,BYTE PTR [rax]
0x140916516: call   0x1400657b0
0x14091651b: test   al,al
0x14091651d: je     0x140916724
0x140916523: lea    rcx,[rbp+0x110]
0x14091652a: call   0x14006ee10
0x14091652f: mov    rcx,QWORD PTR [rax]
0x140916532: add    rcx,0x20
0x140916536: lea    rdx,[rbp+0x78]
0x14091653a: call   0x14006f240
0x14091653f: lea    rcx,[rbp+0x110]
0x140916546: call   0x14006ee10
0x14091654b: mov    rcx,QWORD PTR [rax]
0x14091654e: add    rcx,0x20
0x140916552: lea    rdx,[rbp+0x560]
0x140916559: call   0x14006f230
0x14091655e: lea    r8,[rbp+0x560]
0x140916565: lea    rdx,[rbp+0x4]
0x140916569: lea    rcx,[rbp+0x78]
0x14091656d: call   0x14006ee20
0x140916572: xor    edx,edx
0x140916574: movzx  ecx,BYTE PTR [rax]
0x140916577: call   0x1400657b0
0x14091657c: test   al,al
0x14091657e: je     0x1409165fc
0x140916584: lea    rcx,[rbp+0x78]
0x140916588: call   0x14006ee10
0x14091658d: mov    rcx,QWORD PTR [rax]
0x140916590: cmp    DWORD PTR [rcx],0x0
0x140916593: jle    0x1409165ce
0x140916595: lea    rcx,[rbp+0x78]
0x140916599: call   0x14006ee10
0x14091659e: mov    rcx,QWORD PTR [rax]
0x1409165a1: mov    eax,DWORD PTR [rbx+0x4]
0x1409165a4: cmp    DWORD PTR [rcx+0xc],eax
0x1409165a7: je     0x1409165c0
0x1409165a9: lea    rcx,[rbp+0x78]
0x1409165ad: call   0x14006ee10
0x1409165b2: mov    rcx,QWORD PTR [rax]
0x1409165b5: cmp    DWORD PTR [rcx+0xc],0xffffffff
0x1409165b9: jne    0x1409165ce
0x1409165bb: test   r14b,r14b
0x1409165be: je     0x1409165ce
0x1409165c0: lea    rcx,[rbp+0x78]
0x1409165c4: call   0x14006ee10
0x1409165c9: mov    rcx,QWORD PTR [rax]
0x1409165cc: add    esi,DWORD PTR [rcx]
0x1409165ce: lea    rcx,[rbp+0x78]
0x1409165d2: call   0x14006ee00
0x1409165d7: lea    r8,[rbp+0x560]
0x1409165de: lea    rdx,[rbp+0x4]
0x1409165e2: lea    rcx,[rbp+0x78]
0x1409165e6: call   0x14006ee20
0x1409165eb: xor    edx,edx
0x1409165ed: movzx  ecx,BYTE PTR [rax]
0x1409165f0: call   0x1400657b0
0x1409165f5: test   al,al
0x1409165f7: jne    0x140916584
0x1409165f9: mov    DWORD PTR [rbp-0x64],esi
0x1409165fc: lea    rcx,[rbp+0x110]
0x140916603: call   0x14006ee00
0x140916608: lea    r8,[rbp+0x568]
0x14091660f: lea    rdx,[rbp+0x5]
0x140916613: lea    rcx,[rbp+0x110]
0x14091661a: call   0x14006ee20
0x14091661f: xor    edx,edx
0x140916621: movzx  ecx,BYTE PTR [rax]
0x140916624: call   0x1400657b0
0x140916629: test   al,al
0x14091662b: jne    0x140916523
0x140916631: jmp    0x140916724
0x140916636: lea    rdx,[rbp+0x80]
0x14091663d: lea    rcx,[r15+0xd8]
0x140916644: call   0x14006f240
0x140916649: lea    rdx,[rbp+0x570]
0x140916650: lea    rcx,[r15+0xd8]
0x140916657: call   0x14006f230
0x14091665c: lea    r8,[rbp+0x570]
0x140916663: lea    rdx,[rbp+0x6]
0x140916667: lea    rcx,[rbp+0x80]
0x14091666e: call   0x14006ee20
0x140916673: xor    edx,edx
0x140916675: movzx  ecx,BYTE PTR [rax]
0x140916678: call   0x1400657b0
0x14091667d: test   al,al
0x14091667f: je     0x140916724
0x140916685: mov    r12,QWORD PTR [rsp+0x58]
0x14091668a: nop    WORD PTR [rax+rax*1+0x0]
0x140916690: lea    rcx,[rbp+0x80]
0x140916697: call   0x14006ee10
0x14091669c: mov    rcx,QWORD PTR [rax]
0x14091669f: cmp    DWORD PTR [rcx],0x0
0x1409166a2: jle    0x1409166e8
0x1409166a4: lea    rcx,[rbp+0x80]
0x1409166ab: call   0x14006ee10
0x1409166b0: mov    rcx,QWORD PTR [rax]
0x1409166b3: mov    eax,DWORD PTR [r12+0x4]
0x1409166b8: cmp    DWORD PTR [rcx+0xc],eax
0x1409166bb: je     0x1409166d7
0x1409166bd: lea    rcx,[rbp+0x80]
0x1409166c4: call   0x14006ee10
0x1409166c9: mov    rcx,QWORD PTR [rax]
0x1409166cc: cmp    DWORD PTR [rcx+0xc],0xffffffff
0x1409166d0: jne    0x1409166e8
0x1409166d2: test   r14b,r14b
0x1409166d5: je     0x1409166e8
0x1409166d7: lea    rcx,[rbp+0x80]
0x1409166de: call   0x14006ee10
0x1409166e3: mov    rcx,QWORD PTR [rax]
0x1409166e6: add    esi,DWORD PTR [rcx]
0x1409166e8: lea    rcx,[rbp+0x80]
0x1409166ef: call   0x14006ee00
0x1409166f4: lea    r8,[rbp+0x570]
0x1409166fb: lea    rdx,[rbp+0x6]
0x1409166ff: lea    rcx,[rbp+0x80]
0x140916706: call   0x14006ee20
0x14091670b: xor    edx,edx
0x14091670d: movzx  ecx,BYTE PTR [rax]
0x140916710: call   0x1400657b0
0x140916715: test   al,al
0x140916717: jne    0x140916690
0x14091671d: mov    DWORD PTR [rbp-0x64],esi
0x140916720: mov    r12,QWORD PTR [rbp-0x18]
0x140916724: mov    rdi,QWORD PTR [rsp+0x58]
0x140916729: lea    rdx,[rbp+0x190]
0x140916730: lea    rcx,[rdi+0x1450]
0x140916737: call   0x14006f240
0x14091673c: lea    rdx,[rbp+0x580]
0x140916743: lea    rcx,[rdi+0x1450]
0x14091674a: call   0x14006f230
0x14091674f: lea    r8,[rbp+0x580]
0x140916756: lea    rdx,[rbp+0x8]
0x14091675a: lea    rcx,[rbp+0x190]
0x140916761: call   0x14006ee20
0x140916766: xor    edx,edx
0x140916768: movzx  ecx,BYTE PTR [rax]
0x14091676b: call   0x1400657b0
0x140916770: test   al,al
0x140916772: je     0x140916a92
0x140916778: mov    r12,rdi
0x14091677b: mov    esi,0xffffffff
0x140916780: mov    r13d,0xfff7
0x140916786: mov    r14d,0x1
0x14091678c: nop    DWORD PTR [rax+0x0]
0x140916790: lea    rcx,[rbp+0x190]
0x140916797: call   0x14006ee10
0x14091679c: mov    rbx,QWORD PTR [rax]
0x14091679f: mov    rcx,QWORD PTR [rbx+0x10]
0x1409167a3: add    rcx,0xc8
0x1409167aa: mov    edi,0x7
0x1409167af: mov    edx,edi
0x1409167b1: call   0x140071f90
0x1409167b6: test   al,al
0x1409167b8: jne    0x1409167c8
0x1409167ba: mov    rax,QWORD PTR [rbx+0x10]
0x1409167be: cmp    DWORD PTR [rax+0x30],0xffffffff
0x1409167c2: jne    0x140916a47
0x1409167c8: mov    rax,QWORD PTR [rbx+0x18]
0x1409167cc: test   rax,rax
0x1409167cf: je     0x1409167de
0x1409167d1: cmp    DWORD PTR [rax+0x110],0x0
0x1409167d8: jl     0x140916a47
0x1409167de: mov    rcx,QWORD PTR [rbx+0x10]
0x1409167e2: movzx  eax,WORD PTR [rcx]
0x1409167e5: cmp    ax,0x67
0x1409167e9: je     0x140916a47
0x1409167ef: cmp    ax,0x68
0x1409167f3: je     0x140916a47
0x1409167f9: add    rcx,0xc8
0x140916800: mov    edx,edi
0x140916802: call   0x140071f90
0x140916807: test   al,al
0x140916809: jne    0x140916a47
0x14091680f: mov    r8d,esi
0x140916812: mov    edx,esi
0x140916814: mov    rcx,QWORD PTR [rbx+0x10]
0x140916818: call   0x140b97440
0x14091681d: test   ax,ax
0x140916820: je     0x14091688b
0x140916822: xor    dil,dil
0x140916825: mov    edx,0x13
0x14091682a: mov    DWORD PTR [rsp+0x20],esi
0x14091682e: mov    r9d,esi
0x140916831: mov    r8d,DWORD PTR [r12+0x4]
0x140916836: mov    rcx,QWORD PTR [rbx+0x10]
0x14091683a: call   0x140beb8a0
0x14091683f: test   al,al
0x140916841: je     0x140916854
0x140916843: movzx  edi,dil
0x140916847: cmp    DWORD PTR [r12+0x13f8],0x2
0x140916850: cmovge edi,r14d
0x140916854: mov    rdx,QWORD PTR [rbx+0x10]
0x140916858: mov    r9d,0x85
0x14091685e: movzx  r8d,WORD PTR [rdx+0x4]
0x140916863: movzx  edx,WORD PTR [rdx+0x2]
0x140916867: lea    rcx,[rip+0x1bd61da]        # 0x1424eca48
0x14091686e: call   0x140072850
0x140916873: test   al,al
0x140916875: je     0x140916882
0x140916877: cmp    DWORD PTR [r12+0x13f8],0x2
0x140916880: jge    0x14091688b
0x140916882: test   dil,dil
0x140916885: je     0x140916a47
0x14091688b: mov    rcx,QWORD PTR [rbx+0x10]
0x14091688f: mov    rdx,QWORD PTR [rcx+0x130]
0x140916896: test   rdx,rdx
0x140916899: je     0x140916a47
0x14091689f: mov    rdx,QWORD PTR [rdx+0x28]
0x1409168a3: test   rdx,rdx
0x1409168a6: je     0x140916a47
0x1409168ac: mov    eax,DWORD PTR [r15+0x88]
0x1409168b3: cmp    DWORD PTR [rdx+0x4],eax
0x1409168b6: jne    0x140916a47
0x1409168bc: xor    edx,edx
0x1409168be: mov    DWORD PTR [rsp+0x20],esi
0x1409168c2: mov    r9d,esi
0x1409168c5: mov    r8d,esi
0x1409168c8: call   0x140b98ad0
0x1409168cd: test   al,al
0x1409168cf: jne    0x140916a47
0x1409168d5: mov    rdx,QWORD PTR [r15+0x308]
0x1409168dc: test   rdx,rdx
0x1409168df: je     0x14091690c
0x1409168e1: lea    rax,[rdx+0x2d8f4]
0x1409168e8: xor    ecx,ecx
0x1409168ea: mov    edx,DWORD PTR [rdx+0x4d4c4]
0x1409168f0: test   edx,edx
0x1409168f2: jle    0x14091690c
0x1409168f4: mov    r8d,DWORD PTR [rbx]
0x1409168f7: cmp    DWORD PTR [rax],r8d
0x1409168fa: je     0x140916a47
0x140916900: inc    ecx
0x140916902: add    rax,0x104
0x140916908: cmp    ecx,edx
0x14091690a: jl     0x1409168f7
0x14091690c: mov    rax,QWORD PTR [rbx+0x10]
0x140916910: mov    rcx,QWORD PTR [rax+0x130]
0x140916917: test   rcx,rcx
0x14091691a: je     0x140916954
0x14091691c: mov    rcx,QWORD PTR [rcx+0x40]
0x140916920: test   rcx,rcx
0x140916923: je     0x140916954
0x140916925: call   0x14006ee50
0x14091692a: test   rax,rax
0x14091692d: je     0x140916954
0x14091692f: mov    rax,QWORD PTR [rbx+0x10]
0x140916933: mov    rcx,QWORD PTR [rax+0x130]
0x14091693a: mov    rax,QWORD PTR [rcx+0x48]
0x14091693e: test   rax,rax
0x140916941: je     0x140916a47
0x140916947: cmp    DWORD PTR [rax+0x144],0xffffffff
0x14091694e: je     0x140916a47
0x140916954: mov    rax,QWORD PTR [rbx+0x10]
0x140916958: mov    rcx,QWORD PTR [rax+0x130]
0x14091695f: test   rcx,rcx
0x140916962: je     0x140916a47
0x140916968: mov    rax,QWORD PTR [rcx+0x8]
0x14091696c: test   rax,rax
0x14091696f: je     0x140916983
0x140916971: movzx  eax,WORD PTR [rax+0x60]
0x140916975: sub    ax,0x65
0x140916979: test   r13w,ax
0x14091697d: je     0x140916a47
0x140916983: mov    rcx,QWORD PTR [rcx+0x8]
0x140916987: test   rcx,rcx
0x14091698a: je     0x140916a47
0x140916990: lea    rdx,[rbp+0x258]
0x140916997: call   0x14006f240
0x14091699c: mov    rax,QWORD PTR [rbx+0x10]
0x1409169a0: mov    rcx,QWORD PTR [rax+0x130]
0x1409169a7: lea    rdx,[rbp+0x578]
0x1409169ae: mov    rcx,QWORD PTR [rcx+0x8]
0x1409169b2: call   0x14006f230
0x1409169b7: lea    r8,[rbp+0x578]
0x1409169be: lea    rdx,[rbp+0x7]
0x1409169c2: lea    rcx,[rbp+0x258]
0x1409169c9: call   0x14006ee20
0x1409169ce: xor    edx,edx
0x1409169d0: movzx  ecx,BYTE PTR [rax]
0x1409169d3: call   0x1400657b0
0x1409169d8: test   al,al
0x1409169da: je     0x140916a47
0x1409169dc: lea    rsi,[rip+0xffffffffff6e961d]        # 0x140000000
0x1409169e3: lea    rcx,[rbp+0x258]
0x1409169ea: call   0x14006ee10
0x1409169ef: movsx  ecx,WORD PTR [rax]
0x1409169f2: add    ecx,0xffffffdb
0x1409169f5: cmp    ecx,0x41
0x1409169f8: ja     0x140916a11
0x1409169fa: movsxd rax,ecx
0x1409169fd: movzx  eax,BYTE PTR [rsi+rax*1+0x91e0e0]
0x140916a05: mov    ecx,DWORD PTR [rsi+rax*4+0x91e0d8]
0x140916a0c: add    rcx,rsi
0x140916a0f: jmp    rcx
0x140916a11: lea    rcx,[rbp+0x258]
0x140916a18: call   0x14006f430
0x140916a1d: lea    r8,[rbp+0x578]
0x140916a24: lea    rdx,[rbp+0x7]
0x140916a28: lea    rcx,[rbp+0x258]
0x140916a2f: call   0x14006ee20
0x140916a34: xor    edx,edx
0x140916a36: movzx  ecx,BYTE PTR [rax]
0x140916a39: call   0x1400657b0
0x140916a3e: test   al,al
0x140916a40: jne    0x1409169e3
0x140916a42: mov    esi,0xffffffff
0x140916a47: lea    rcx,[rbp+0x190]
0x140916a4e: call   0x14006ee00
0x140916a53: lea    r8,[rbp+0x580]
0x140916a5a: lea    rdx,[rbp+0x8]
0x140916a5e: lea    rcx,[rbp+0x190]
0x140916a65: call   0x14006ee20
0x140916a6a: xor    edx,edx
0x140916a6c: movzx  ecx,BYTE PTR [rax]
0x140916a6f: call   0x1400657b0
0x140916a74: test   al,al
0x140916a76: jne    0x140916790
0x140916a7c: mov    esi,DWORD PTR [rbp-0x64]
0x140916a7f: movzx  r14d,BYTE PTR [rsp+0x60]
0x140916a85: mov    r12,QWORD PTR [rbp-0x18]
0x140916a89: mov    r13,QWORD PTR [rbp-0x58]
0x140916a8d: mov    rdi,QWORD PTR [rsp+0x58]
0x140916a92: test   r14b,r14b
0x140916a95: je     0x140916b84
0x140916a9b: mov    r8d,0x40
0x140916aa1: movzx  edx,WORD PTR [rdi+0x98]
0x140916aa8: lea    rcx,[rip+0x1bd5f99]        # 0x1424eca48
0x140916aaf: call   0x1400e35c0
0x140916ab4: test   al,al
0x140916ab6: je     0x140916b84
0x140916abc: lea    rdx,[rbp+0x198]
0x140916ac3: lea    rcx,[r15+0x2b0]
0x140916aca: call   0x14006f240
0x140916acf: lea    rdx,[rbp+0x588]
0x140916ad6: lea    rcx,[r15+0x2b0]
0x140916add: call   0x14006f230
0x140916ae2: lea    rdx,[rbp+0x588]
0x140916ae9: lea    rcx,[rbp+0x198]
0x140916af0: call   0x1400b9970
0x140916af5: test   al,al
0x140916af7: jne    0x140916b84
0x140916afd: nop    DWORD PTR [rax]
0x140916b00: lea    rcx,[rbp+0x198]
0x140916b07: call   0x14006ee10
0x140916b0c: mov    rbx,QWORD PTR [rax]
0x140916b0f: mov    edx,0x1
0x140916b14: lea    rcx,[rbx+0x28]
0x140916b18: call   0x140071f90
0x140916b1d: test   al,al
0x140916b1f: jne    0x140916b59
0x140916b21: xor    edx,edx
0x140916b23: lea    rcx,[rbx+0x28]
0x140916b27: call   0x140071f90
0x140916b2c: test   al,al
0x140916b2e: jne    0x140916b59
0x140916b30: mov    edx,0x3
0x140916b35: lea    rcx,[rbx+0x28]
0x140916b39: call   0x140071f90
0x140916b3e: test   al,al
0x140916b40: jne    0x140916b59
0x140916b42: mov    rax,QWORD PTR [rbx]
0x140916b45: mov    rcx,rbx
0x140916b48: call   QWORD PTR [rax]
0x140916b4a: cmp    ax,0x7
0x140916b4e: jne    0x140916b59
0x140916b50: test   BYTE PTR [rbx+0x130],0x1
0x140916b57: jne    0x140916b7e
0x140916b59: lea    rcx,[rbp+0x198]
0x140916b60: call   0x14006ee00
0x140916b65: lea    rdx,[rbp+0x588]
0x140916b6c: lea    rcx,[rbp+0x198]
0x140916b73: call   0x1400b9970
0x140916b78: test   al,al
0x140916b7a: je     0x140916b00
0x140916b7c: jmp    0x140916b84
0x140916b7e: add    esi,0x2710
0x140916b84: cmp    esi,0xa
0x140916b87: jge    0x140916b98
0x140916b89: mov    edx,r12d
0x140916b8c: lea    rcx,[rbp+0x320]
0x140916b93: call   0x1400b99a0
0x140916b98: xor    esi,esi
0x140916b9a: sub    r13d,0x1
0x140916b9e: mov    QWORD PTR [rbp-0x58],r13
0x140916ba2: jns    0x1409163a1
0x140916ba8: mov    r12,QWORD PTR [rsp+0x58]
0x140916bad: lea    rcx,[rbp+0x320]
0x140916bb4: call   0x14006ee50
0x140916bb9: test   rax,rax
0x140916bbc: je     0x14091e073
0x140916bc2: mov    rbx,rsi
0x140916bc5: mov    QWORD PTR [rbp-0x50],rbx
0x140916bc9: mov    r13d,esi
0x140916bcc: mov    DWORD PTR [rbp+0x38],esi
0x140916bcf: lea    rdx,[rbp+0x128]
0x140916bd6: lea    rcx,[rbp+0x320]
0x140916bdd: call   0x14006f240
0x140916be2: lea    rdx,[rbp+0x478]
0x140916be9: lea    rcx,[rbp+0x320]
0x140916bf0: call   0x14006f230
0x140916bf5: lea    r8,[rbp+0x478]
0x140916bfc: lea    rdx,[rbp+0x1a]
0x140916c00: lea    rcx,[rbp+0x128]
0x140916c07: call   0x14006ee20
0x140916c0c: xor    edx,edx
0x140916c0e: movzx  ecx,BYTE PTR [rax]
0x140916c11: call   0x1400657b0
0x140916c16: test   al,al
0x140916c18: je     0x1409174e4
0x140916c1e: xchg   ax,ax
0x140916c20: mov    r14d,esi
0x140916c23: mov    DWORD PTR [rsp+0x6c],esi
0x140916c27: lea    rcx,[rbp+0x128]
0x140916c2e: call   0x14006ee10
0x140916c33: mov    rsi,QWORD PTR [rax]
0x140916c36: mov    QWORD PTR [rbp-0x18],rsi
0x140916c3a: xor    r15b,r15b
0x140916c3d: mov    BYTE PTR [rsp+0x50],r15b
0x140916c42: mov    rcx,rsi
0x140916c45: call   0x1409b4ed0
0x140916c4a: mov    edi,eax
0x140916c4c: mov    DWORD PTR [rbp-0x64],eax
0x140916c4f: cmp    eax,DWORD PTR [r12+0x4]
0x140916c54: je     0x140916d1f
0x140916c5a: cmp    WORD PTR [r12],0x0
0x140916c60: jne    0x140916e19
0x140916c66: lea    rdx,[rbp+0x118]
0x140916c6d: lea    rcx,[r12+0xb8]
0x140916c75: call   0x14006f240
0x140916c7a: lea    rdx,[rbp+0x590]
0x140916c81: lea    rcx,[r12+0xb8]
0x140916c89: call   0x14006f230
0x140916c8e: lea    r8,[rbp+0x590]
0x140916c95: lea    rdx,[rbp+0x9]
0x140916c99: lea    rcx,[rbp+0x118]
0x140916ca0: call   0x14006ee20
0x140916ca5: xor    edx,edx
0x140916ca7: movzx  ecx,BYTE PTR [rax]
0x140916caa: call   0x1400657b0
0x140916caf: test   al,al
0x140916cb1: je     0x140916e19
0x140916cb7: nop    WORD PTR [rax+rax*1+0x0]
0x140916cc0: lea    rcx,[rbp+0x118]
0x140916cc7: call   0x14006ee10
0x140916ccc: mov    rcx,QWORD PTR [rax]
0x140916ccf: cmp    DWORD PTR [rcx+0x4],edi
0x140916cd2: jne    0x140916ce9
0x140916cd4: lea    rcx,[rbp+0x118]
0x140916cdb: call   0x14006ee10
0x140916ce0: mov    rcx,QWORD PTR [rax]
0x140916ce3: cmp    WORD PTR [rcx],0x1
0x140916ce7: je     0x140916d1f
0x140916ce9: lea    rcx,[rbp+0x118]
0x140916cf0: call   0x14006ee00
0x140916cf5: lea    r8,[rbp+0x590]
0x140916cfc: lea    rdx,[rbp+0x9]
0x140916d00: lea    rcx,[rbp+0x118]
0x140916d07: call   0x14006ee20
0x140916d0c: xor    edx,edx
0x140916d0e: movzx  ecx,BYTE PTR [rax]
0x140916d11: call   0x1400657b0
0x140916d16: test   al,al
0x140916d18: jne    0x140916cc0
0x140916d1a: jmp    0x140916e19
0x140916d1f: mov    r15b,0x1
0x140916d22: mov    BYTE PTR [rsp+0x50],r15b
0x140916d27: mov    r8d,0x40
0x140916d2d: movzx  edx,WORD PTR [r12+0x98]
0x140916d36: lea    rcx,[rip+0x1bd5d0b]        # 0x1424eca48
0x140916d3d: call   0x1400e35c0
0x140916d42: test   al,al
0x140916d44: je     0x140916e19
0x140916d4a: lea    rdx,[rbp+0x1a0]
0x140916d51: lea    rcx,[rsi+0x2b0]
0x140916d58: call   0x14006f240
0x140916d5d: lea    rdx,[rbp+0x598]
0x140916d64: lea    rcx,[rsi+0x2b0]
0x140916d6b: call   0x14006f230
0x140916d70: lea    rdx,[rbp+0x598]
0x140916d77: lea    rcx,[rbp+0x1a0]
0x140916d7e: call   0x1400b9970
0x140916d83: test   al,al
0x140916d85: jne    0x140916e19
0x140916d8b: nop    DWORD PTR [rax+rax*1+0x0]
0x140916d90: lea    rcx,[rbp+0x1a0]
0x140916d97: call   0x14006ee10
0x140916d9c: mov    rbx,QWORD PTR [rax]
0x140916d9f: mov    edx,0x1
0x140916da4: lea    rcx,[rbx+0x28]
0x140916da8: call   0x140071f90
0x140916dad: test   al,al
0x140916daf: jne    0x140916de9
0x140916db1: xor    edx,edx
0x140916db3: lea    rcx,[rbx+0x28]
0x140916db7: call   0x140071f90
0x140916dbc: test   al,al
0x140916dbe: jne    0x140916de9
0x140916dc0: mov    edx,0x3
0x140916dc5: lea    rcx,[rbx+0x28]
0x140916dc9: call   0x140071f90
0x140916dce: test   al,al
0x140916dd0: jne    0x140916de9
0x140916dd2: mov    rax,QWORD PTR [rbx]
0x140916dd5: mov    rcx,rbx
0x140916dd8: call   QWORD PTR [rax]
0x140916dda: cmp    ax,0x7
0x140916dde: jne    0x140916de9
0x140916de0: test   BYTE PTR [rbx+0x130],0x1
0x140916de7: jne    0x140916e0e
0x140916de9: lea    rcx,[rbp+0x1a0]
0x140916df0: call   0x14006ee00
0x140916df5: lea    rdx,[rbp+0x598]
0x140916dfc: lea    rcx,[rbp+0x1a0]
0x140916e03: call   0x1400b9970
0x140916e08: test   al,al
0x140916e0a: je     0x140916d90
0x140916e0c: jmp    0x140916e19
0x140916e0e: mov    r14d,0x2710
0x140916e14: mov    DWORD PTR [rsp+0x6c],r14d
0x140916e19: mov    rcx,QWORD PTR [rsi+0x308]
0x140916e20: test   rcx,rcx
0x140916e23: je     0x14091712a
0x140916e29: lea    rdx,[rbp+0x120]
0x140916e30: call   0x14006f240
0x140916e35: lea    rdx,[rbp+0x5b0]
0x140916e3c: mov    rcx,QWORD PTR [rsi+0x308]
0x140916e43: call   0x14006f230
0x140916e48: lea    r8,[rbp+0x5b0]
0x140916e4f: lea    rdx,[rbp+0xc]
0x140916e53: lea    rcx,[rbp+0x120]
0x140916e5a: call   0x14006ee20
0x140916e5f: xor    edx,edx
0x140916e61: movzx  ecx,BYTE PTR [rax]
0x140916e64: call   0x1400657b0
0x140916e69: test   al,al
0x140916e6b: je     0x140917480
0x140916e71: mov    r13,QWORD PTR [rsp+0x58]
0x140916e76: data16 nop WORD PTR [rax+rax*1+0x0]
0x140916e80: lea    rcx,[rbp+0x120]
0x140916e87: call   0x14006ee10
0x140916e8c: mov    rcx,QWORD PTR [rax]
0x140916e8f: add    rcx,0x20
0x140916e93: lea    rdx,[rbp+0x28]
0x140916e97: call   0x14006f240
0x140916e9c: lea    rcx,[rbp+0x120]
0x140916ea3: call   0x14006ee10
0x140916ea8: mov    rcx,QWORD PTR [rax]
0x140916eab: add    rcx,0x20
0x140916eaf: lea    rdx,[rbp+0x5a8]
0x140916eb6: call   0x14006f230
0x140916ebb: lea    r8,[rbp+0x5a8]
0x140916ec2: lea    rdx,[rbp+0xb]
0x140916ec6: lea    rcx,[rbp+0x28]
0x140916eca: call   0x14006ee20
0x140916ecf: xor    edx,edx
0x140916ed1: movzx  ecx,BYTE PTR [rax]
0x140916ed4: call   0x1400657b0
0x140916ed9: test   al,al
0x140916edb: je     0x1409170e6
0x140916ee1: lea    rcx,[rbp+0x28]
0x140916ee5: call   0x14006ee10
0x140916eea: mov    rcx,QWORD PTR [rax]
0x140916eed: cmp    DWORD PTR [rcx],0x0
0x140916ef0: jle    0x1409170b1
0x140916ef6: lea    rcx,[rbp+0x28]
0x140916efa: call   0x14006ee10
0x140916eff: mov    rcx,QWORD PTR [rax]
0x140916f02: mov    eax,DWORD PTR [r13+0x4]
0x140916f06: cmp    DWORD PTR [rcx+0xc],eax
0x140916f09: je     0x140916f2a
0x140916f0b: lea    rcx,[rbp+0x28]
0x140916f0f: call   0x14006ee10
0x140916f14: mov    rcx,QWORD PTR [rax]
0x140916f17: cmp    DWORD PTR [rcx+0xc],0xffffffff
0x140916f1b: jne    0x1409170b1
0x140916f21: test   r15b,r15b
0x140916f24: je     0x1409170b1
0x140916f2a: lea    rcx,[rbp+0x28]
0x140916f2e: call   0x14006ee10
0x140916f33: mov    rcx,QWORD PTR [rax]
0x140916f36: cmp    DWORD PTR [rcx+0x18],0xffffffff
0x140916f3a: lea    rcx,[rbp+0x28]
0x140916f3e: jne    0x1409170a1
0x140916f44: xor    bl,bl
0x140916f46: xor    r15b,r15b
0x140916f49: call   0x14006ee10
0x140916f4e: mov    rdx,QWORD PTR [rax]
0x140916f51: movzx  edx,WORD PTR [rdx+0x4]
0x140916f55: lea    rcx,[rip+0x1bd5aec]        # 0x1424eca48
0x140916f5c: call   0x1400bba60
0x140916f61: test   rax,rax
0x140916f64: je     0x14091709d
0x140916f6a: xor    ecx,ecx
0x140916f6c: movzx  esi,cx
0x140916f6f: lea    rdi,[rax+0x178]
0x140916f76: lea    rdx,[rbp+0x1a8]
0x140916f7d: mov    rcx,rdi
0x140916f80: call   0x14006f240
0x140916f85: lea    rdx,[rbp+0x5a0]
0x140916f8c: mov    rcx,rdi
0x140916f8f: call   0x14006f230
0x140916f94: lea    r8,[rbp+0x5a0]
0x140916f9b: lea    rdx,[rbp+0xa]
0x140916f9f: lea    rcx,[rbp+0x1a8]
0x140916fa6: call   0x14006ee20
0x140916fab: xor    edx,edx
0x140916fad: movzx  ecx,BYTE PTR [rax]
0x140916fb0: call   0x1400657b0
0x140916fb5: test   al,al
0x140916fb7: je     0x14091709d
0x140916fbd: mov    r14d,0x1
0x140916fc3: lea    rcx,[rbp+0x1a8]
0x140916fca: call   0x14006ee10
0x140916fcf: lea    rcx,[rbp+0x28]
0x140916fd3: call   0x14006ee10
0x140916fd8: mov    rcx,QWORD PTR [rax]
0x140916fdb: lea    r9,[r13+0xc40]
0x140916fe2: lea    r8,[r13+0xb98]
0x140916fe9: movzx  edx,si
0x140916fec: mov    ecx,DWORD PTR [rcx+0x4]
0x140916fef: call   0x1400eb4f0
0x140916ff4: cmp    eax,0xffffffff
0x140916ff7: je     0x140916fff
0x140916ff9: movzx  ebx,r14b
0x140916ffd: jmp    0x14091705e
0x140916fff: lea    rcx,[rbp+0x28]
0x140917003: call   0x14006ee10
0x140917008: lea    r9,[r13+0xc58]
0x14091700f: lea    r8,[r13+0xbb0]
0x140917016: mov    rcx,QWORD PTR [rax]
0x140917019: movzx  edx,si
0x14091701c: mov    ecx,DWORD PTR [rcx+0x4]
0x14091701f: call   0x1400eb4f0
0x140917024: cmp    eax,0xffffffff
0x140917027: je     0x14091702f
0x140917029: movzx  r15d,r14b
0x14091702d: jmp    0x14091705e
0x14091702f: lea    rcx,[rbp+0x28]
0x140917033: call   0x14006ee10
0x140917038: lea    r9,[r13+0xc10]
0x14091703f: lea    r8,[r13+0xb68]
0x140917046: mov    rcx,QWORD PTR [rax]
0x140917049: movzx  edx,si
0x14091704c: mov    ecx,DWORD PTR [rcx+0x4]
0x14091704f: call   0x1400eb4f0
0x140917054: movzx  ebx,bl
0x140917057: cmp    eax,0xffffffff
0x14091705a: cmovne ebx,r14d
0x14091705e: lea    rcx,[rbp+0x1a8]
0x140917065: call   0x14006ee00
0x14091706a: inc    si
0x14091706d: lea    r8,[rbp+0x5a0]
0x140917074: lea    rdx,[rbp+0xa]
0x140917078: lea    rcx,[rbp+0x1a8]
0x14091707f: call   0x14006ee20
0x140917084: xor    edx,edx
0x140917086: movzx  ecx,BYTE PTR [rax]
0x140917089: call   0x1400657b0
0x14091708e: test   al,al
0x140917090: jne    0x140916fc3
0x140917096: test   bl,bl
0x140917098: mov    r14d,DWORD PTR [rsp+0x6c]
0x14091709d: lea    rcx,[rbp+0x28]
0x1409170a1: call   0x14006ee10
0x1409170a6: mov    rcx,QWORD PTR [rax]
0x1409170a9: add    r14d,DWORD PTR [rcx]
0x1409170ac: mov    DWORD PTR [rsp+0x6c],r14d
0x1409170b1: lea    rcx,[rbp+0x28]
0x1409170b5: call   0x14006ee00
0x1409170ba: lea    r8,[rbp+0x5a8]
0x1409170c1: lea    rdx,[rbp+0xb]
0x1409170c5: lea    rcx,[rbp+0x28]
0x1409170c9: call   0x14006ee20
0x1409170ce: xor    edx,edx
0x1409170d0: movzx  ecx,BYTE PTR [rax]
0x1409170d3: call   0x1400657b0
0x1409170d8: test   al,al
0x1409170da: movzx  r15d,BYTE PTR [rsp+0x50]
0x1409170e0: jne    0x140916ee1
0x1409170e6: lea    rcx,[rbp+0x120]
0x1409170ed: call   0x14006ee00
0x1409170f2: lea    r8,[rbp+0x5b0]
0x1409170f9: lea    rdx,[rbp+0xc]
0x1409170fd: lea    rcx,[rbp+0x120]
0x140917104: call   0x14006ee20
0x140917109: xor    edx,edx
0x14091710b: movzx  ecx,BYTE PTR [rax]
0x14091710e: call   0x1400657b0
0x140917113: test   al,al
0x140917115: movzx  r15d,BYTE PTR [rsp+0x50]
0x14091711b: jne    0x140916e80
0x140917121: mov    r13d,DWORD PTR [rbp+0x38]
0x140917125: jmp    0x140917480
0x14091712a: lea    rdx,[rbp+0x30]
0x14091712e: lea    rcx,[rsi+0xc0]
0x140917135: call   0x14006f240
0x14091713a: lea    rdx,[rbp+0x5c8]
0x140917141: lea    rcx,[rsi+0xc0]
0x140917148: call   0x14006f230
0x14091714d: lea    r8,[rbp+0x5c8]
0x140917154: lea    rdx,[rbp+0x18]
0x140917158: lea    rcx,[rbp+0x30]
0x14091715c: call   0x14006ee20
0x140917161: xor    edx,edx
0x140917163: movzx  ecx,BYTE PTR [rax]
0x140917166: call   0x1400657b0
0x14091716b: test   al,al
0x14091716d: je     0x1409173a7
0x140917173: lea    rcx,[rbp+0x30]
0x140917177: call   0x14006ee10
0x14091717c: mov    rcx,QWORD PTR [rax]
0x14091717f: cmp    DWORD PTR [rcx+0x4],0x0
0x140917183: jbe    0x140917367
0x140917189: lea    rcx,[rbp+0x30]
0x14091718d: call   0x14006ee10
0x140917192: mov    rcx,QWORD PTR [rax]
0x140917195: mov    eax,DWORD PTR [r12+0x4]
0x14091719a: cmp    DWORD PTR [rcx+0x10],eax
0x14091719d: je     0x1409171bd
0x14091719f: lea    rcx,[rbp+0x30]
0x1409171a3: call   0x14006ee10
0x1409171a8: mov    rcx,QWORD PTR [rax]
0x1409171ab: cmp    DWORD PTR [rcx+0x10],edi
0x1409171ae: jne    0x140917367
0x1409171b4: test   r15b,r15b
0x1409171b7: je     0x140917367
0x1409171bd: lea    rcx,[rbp+0x30]
0x1409171c1: call   0x14006ee10
0x1409171c6: mov    rcx,QWORD PTR [rax]
0x1409171c9: cmp    WORD PTR [rcx],0x0
0x1409171cd: jne    0x140917367
0x1409171d3: xor    r15b,r15b
0x1409171d6: xor    r12b,r12b
0x1409171d9: xor    sil,sil
0x1409171dc: lea    rcx,[rbp+0x30]
0x1409171e0: call   0x14006ee10
0x1409171e5: mov    rdx,QWORD PTR [rax]
0x1409171e8: movzx  edx,WORD PTR [rdx+0x2]
0x1409171ec: lea    rcx,[rip+0x1bd5855]        # 0x1424eca48
0x1409171f3: call   0x1400bba60
0x1409171f8: test   rax,rax
0x1409171fb: je     0x140917362
0x140917201: xor    ecx,ecx
0x140917203: movzx  edi,cx
0x140917206: lea    rbx,[rax+0x178]
0x14091720d: lea    rdx,[rbp+0x1b0]
0x140917214: mov    rcx,rbx
0x140917217: call   0x14006f240
0x14091721c: lea    rdx,[rbp+0x5b8]
0x140917223: mov    rcx,rbx
0x140917226: call   0x14006f230
0x14091722b: lea    r8,[rbp+0x5b8]
0x140917232: lea    rdx,[rbp+0xd]
0x140917236: lea    rcx,[rbp+0x1b0]
0x14091723d: call   0x14006ee20
0x140917242: xor    edx,edx
0x140917244: movzx  ecx,BYTE PTR [rax]
0x140917247: call   0x1400657b0
0x14091724c: test   al,al
0x14091724e: je     0x140917362
0x140917254: mov    r14,QWORD PTR [rsp+0x58]
0x140917259: nop    DWORD PTR [rax+0x0]
0x140917260: lea    rcx,[rbp+0x1b0]
0x140917267: call   0x14006ee10
0x14091726c: lea    rcx,[rbp+0x30]
0x140917270: call   0x14006ee10
0x140917275: mov    rcx,QWORD PTR [rax]
0x140917278: movsx  ecx,WORD PTR [rcx+0x2]
0x14091727c: lea    r9,[r14+0xc40]
0x140917283: lea    r8,[r14+0xb98]
0x14091728a: movzx  edx,di
0x14091728d: call   0x1400eb4f0
0x140917292: cmp    eax,0xffffffff
0x140917295: je     0x14091729c
0x140917297: mov    r15b,0x1
0x14091729a: jmp    0x140917301
0x14091729c: lea    rcx,[rbp+0x30]
0x1409172a0: call   0x14006ee10
0x1409172a5: lea    r9,[r14+0xc58]
0x1409172ac: lea    r8,[r14+0xbb0]
0x1409172b3: mov    rax,QWORD PTR [rax]
0x1409172b6: movsx  ecx,WORD PTR [rax+0x2]
0x1409172ba: movzx  edx,di
0x1409172bd: call   0x1400eb4f0
0x1409172c2: cmp    eax,0xffffffff
0x1409172c5: je     0x1409172cc
0x1409172c7: mov    r12b,0x1
0x1409172ca: jmp    0x140917301
0x1409172cc: lea    rcx,[rbp+0x30]
0x1409172d0: call   0x14006ee10
0x1409172d5: lea    r9,[r14+0xc10]
0x1409172dc: lea    r8,[r14+0xb68]
0x1409172e3: mov    rax,QWORD PTR [rax]
0x1409172e6: movsx  ecx,WORD PTR [rax+0x2]
0x1409172ea: movzx  edx,di
0x1409172ed: call   0x1400eb4f0
0x1409172f2: movzx  esi,sil
0x1409172f6: cmp    eax,0xffffffff
0x1409172f9: mov    eax,0x1
0x1409172fe: cmovne esi,eax
0x140917301: lea    rcx,[rbp+0x1b0]
0x140917308: call   0x14006ee00
0x14091730d: inc    di
0x140917310: lea    r8,[rbp+0x5b8]
0x140917317: lea    rdx,[rbp+0xd]
0x14091731b: lea    rcx,[rbp+0x1b0]
0x140917322: call   0x14006ee20
0x140917327: xor    edx,edx
0x140917329: movzx  ecx,BYTE PTR [rax]
0x14091732c: call   0x1400657b0
0x140917331: test   al,al
0x140917333: jne    0x140917260
0x140917339: test   r15b,r15b
0x14091733c: mov    r14d,DWORD PTR [rsp+0x6c]
0x140917341: jne    0x14091734d
0x140917343: test   r12b,r12b
0x140917346: jne    0x14091734d
0x140917348: test   sil,sil
0x14091734b: je     0x140917362
0x14091734d: lea    rcx,[rbp+0x30]
0x140917351: call   0x14006ee10
0x140917356: mov    rcx,QWORD PTR [rax]
0x140917359: add    r14d,DWORD PTR [rcx+0x4]
0x14091735d: mov    DWORD PTR [rsp+0x6c],r14d
0x140917362: mov    r12,QWORD PTR [rsp+0x58]
0x140917367: lea    rcx,[rbp+0x30]
0x14091736b: call   0x14006ee00
0x140917370: lea    r8,[rbp+0x5c8]
0x140917377: lea    rdx,[rbp+0x18]
0x14091737b: lea    rcx,[rbp+0x30]
0x14091737f: call   0x14006ee20
0x140917384: xor    edx,edx
0x140917386: movzx  ecx,BYTE PTR [rax]
0x140917389: call   0x1400657b0
0x14091738e: test   al,al
0x140917390: mov    edi,DWORD PTR [rbp-0x64]
0x140917393: movzx  r15d,BYTE PTR [rsp+0x50]
0x140917399: jne    0x140917173
0x14091739f: mov    rsi,QWORD PTR [rbp-0x18]
0x1409173a3: mov    r13d,DWORD PTR [rbp+0x38]
0x1409173a7: lea    rdx,[rbp+0x68]
0x1409173ab: lea    rcx,[rsi+0xd8]
0x1409173b2: call   0x14006f240
0x1409173b7: lea    rdx,[rbp+0x470]
0x1409173be: lea    rcx,[rsi+0xd8]
0x1409173c5: call   0x14006f230
0x1409173ca: lea    r8,[rbp+0x470]
0x1409173d1: lea    rdx,[rbp+0x19]
0x1409173d5: lea    rcx,[rbp+0x68]
0x1409173d9: call   0x14006ee20
0x1409173de: xor    edx,edx
0x1409173e0: movzx  ecx,BYTE PTR [rax]
0x1409173e3: call   0x1400657b0
0x1409173e8: test   al,al
0x1409173ea: je     0x140917480
0x1409173f0: movzx  ebx,BYTE PTR [rsp+0x50]
0x1409173f5: lea    rcx,[rbp+0x68]
0x1409173f9: call   0x14006ee10
0x1409173fe: mov    rcx,QWORD PTR [rax]
0x140917401: cmp    DWORD PTR [rcx],0x0
0x140917404: jle    0x140917451
0x140917406: lea    rcx,[rbp+0x68]
0x14091740a: call   0x14006ee10
0x14091740f: mov    rcx,QWORD PTR [rax]
0x140917412: mov    eax,DWORD PTR [r12+0x4]
0x140917417: cmp    DWORD PTR [rcx+0xc],eax
0x14091741a: je     0x140917432
0x14091741c: lea    rcx,[rbp+0x68]
0x140917420: call   0x14006ee10
0x140917425: mov    rcx,QWORD PTR [rax]
0x140917428: cmp    DWORD PTR [rcx+0xc],0xffffffff
0x14091742c: jne    0x140917451
0x14091742e: test   bl,bl
0x140917430: je     0x140917451
0x140917432: lea    rcx,[rbp+0x68]
0x140917436: call   0x14006ee10
0x14091743b: mov    rcx,QWORD PTR [rax]
0x14091743e: cmp    DWORD PTR [rcx+0x18],0xffffffff
0x140917442: lea    rcx,[rbp+0x68]
0x140917446: call   0x14006ee10
0x14091744b: mov    rcx,QWORD PTR [rax]
0x14091744e: add    r14d,DWORD PTR [rcx]
0x140917451: lea    rcx,[rbp+0x68]
0x140917455: call   0x14006ee00
0x14091745a: lea    r8,[rbp+0x470]
0x140917461: lea    rdx,[rbp+0x19]
0x140917465: lea    rcx,[rbp+0x68]
0x140917469: call   0x14006ee20
0x14091746e: xor    edx,edx
0x140917470: movzx  ecx,BYTE PTR [rax]
0x140917473: call   0x1400657b0
0x140917478: test   al,al
0x14091747a: jne    0x1409173f5
0x140917480: cmp    r14d,r13d
0x140917483: jle    0x1409174a1
0x140917485: lea    rcx,[rbp+0x128]
0x14091748c: call   0x14006ee10
0x140917491: mov    rbx,QWORD PTR [rax]
0x140917494: mov    QWORD PTR [rbp-0x50],rbx
0x140917498: mov    r13d,r14d
0x14091749b: mov    DWORD PTR [rbp+0x38],r14d
0x14091749f: jmp    0x1409174a5
0x1409174a1: mov    rbx,QWORD PTR [rbp-0x50]
0x1409174a5: lea    rcx,[rbp+0x128]
0x1409174ac: call   0x14006ee00
0x1409174b1: lea    r8,[rbp+0x478]
0x1409174b8: lea    rdx,[rbp+0x1a]
0x1409174bc: lea    rcx,[rbp+0x128]
0x1409174c3: call   0x14006ee20
0x1409174c8: xor    edx,edx
0x1409174ca: movzx  ecx,BYTE PTR [rax]
0x1409174cd: call   0x1400657b0
0x1409174d2: test   al,al
0x1409174d4: mov    r12,QWORD PTR [rsp+0x58]
0x1409174d9: mov    esi,0x0
0x1409174de: jne    0x140916c20
0x1409174e4: test   rbx,rbx
0x1409174e7: jne    0x140917513
0x1409174e9: lea    rcx,[rbp+0x320]
0x1409174f0: call   0x14006ee50
0x1409174f5: mov    rcx,rax
0x1409174f8: call   0x140071f30
0x1409174fd: movsxd rdx,eax
0x140917500: lea    rcx,[rbp+0x320]
0x140917507: call   0x14006f220
0x14091750c: mov    rbx,QWORD PTR [rax]
0x14091750f: mov    QWORD PTR [rbp-0x50],rbx
0x140917513: xor    r14b,r14b
0x140917516: mov    BYTE PTR [rsp+0x50],r14b
0x14091751b: mov    rcx,rbx
0x14091751e: call   0x1409b4ed0
0x140917523: mov    edi,eax
0x140917525: mov    DWORD PTR [rbp-0x64],eax
0x140917528: mov    r13,QWORD PTR [rsp+0x58]
0x14091752d: cmp    eax,DWORD PTR [r13+0x4]
0x140917531: je     0x1409178d9
0x140917537: cmp    WORD PTR [r13+0x0],0x0
0x14091753d: jne    0x1409175ee
0x140917543: lea    rdx,[rbp+0x130]
0x14091754a: lea    rcx,[r13+0xb8]
0x140917551: call   0x14006f240
0x140917556: lea    rdx,[rbp+0x480]
0x14091755d: lea    rcx,[r13+0xb8]
0x140917564: call   0x14006f230
0x140917569: lea    r8,[rbp+0x480]
0x140917570: lea    rdx,[rbp+0x1b]
0x140917574: lea    rcx,[rbp+0x130]
0x14091757b: call   0x14006ee20
0x140917580: xor    edx,edx
0x140917582: movzx  ecx,BYTE PTR [rax]
0x140917585: call   0x1400657b0
0x14091758a: test   al,al
0x14091758c: je     0x1409175ee
0x14091758e: xchg   ax,ax
0x140917590: lea    rcx,[rbp+0x130]
0x140917597: call   0x14006ee10
0x14091759c: mov    rcx,QWORD PTR [rax]
0x14091759f: cmp    DWORD PTR [rcx+0x4],edi
0x1409175a2: jne    0x1409175bd
0x1409175a4: lea    rcx,[rbp+0x130]
0x1409175ab: call   0x14006ee10
0x1409175b0: mov    rcx,QWORD PTR [rax]
0x1409175b3: cmp    WORD PTR [rcx],0x1
0x1409175b7: je     0x1409178d5
0x1409175bd: lea    rcx,[rbp+0x130]
0x1409175c4: call   0x14006ee00
0x1409175c9: lea    r8,[rbp+0x480]
0x1409175d0: lea    rdx,[rbp+0x1b]
0x1409175d4: lea    rcx,[rbp+0x130]
0x1409175db: call   0x14006ee20
0x1409175e0: xor    edx,edx
0x1409175e2: movzx  ecx,BYTE PTR [rax]
0x1409175e5: call   0x1400657b0
0x1409175ea: test   al,al
0x1409175ec: jne    0x140917590
0x1409175ee: mov    BYTE PTR [rsp+0x70],r14b
0x1409175f3: xor    ebx,ebx
0x1409175f5: mov    r12d,ebx
0x1409175f8: mov    DWORD PTR [rsp+0x54],ebx
0x1409175fc: lea    rcx,[rbp+0x2d8]
0x140917603: call   0x140065b00
0x140917608: nop
0x140917609: lea    rcx,[rbp+0x260]
0x140917610: call   0x140065b00
0x140917615: nop
0x140917616: lea    rcx,[rbp+0x308]
0x14091761d: call   0x140065b00
0x140917622: nop
0x140917623: movzx  eax,BYTE PTR [rsp+0x70]
0x140917628: neg    al
0x14091762a: sbb    esi,esi
0x14091762c: and    esi,0x2710
0x140917632: mov    DWORD PTR [rbp-0x38],esi
0x140917635: lea    rcx,[rbp+0x768]
0x14091763c: call   0x140065b00
0x140917641: nop
0x140917642: lea    rcx,[rbp+0x780]
0x140917649: call   0x140065b00
0x14091764e: nop
0x14091764f: lea    rcx,[rbp+0x428]
0x140917656: call   0x140065b00
0x14091765b: nop
0x14091765c: lea    rcx,[rbp+0x2c0]
0x140917663: call   0x140065b00
0x140917668: nop
0x140917669: lea    rcx,[rbp+0x798]
0x140917670: call   0x140065b00
0x140917675: nop
0x140917676: lea    rcx,[rbp+0x7b0]
0x14091767d: call   0x140065b00
0x140917682: nop
0x140917683: lea    rcx,[rbp+0x440]
0x14091768a: call   0x140065b00
0x14091768f: nop
0x140917690: lea    rcx,[rbp+0x2a8]
0x140917697: call   0x140065b00
0x14091769c: nop
0x14091769d: lea    rcx,[rbp+0x648]
0x1409176a4: call   0x140065b00
0x1409176a9: nop
0x1409176aa: lea    rcx,[rbp+0x630]
0x1409176b1: call   0x140065b00
0x1409176b6: nop
0x1409176b7: lea    rcx,[rbp+0x290]
0x1409176be: call   0x140065b00
0x1409176c3: nop
0x1409176c4: lea    rcx,[rbp+0x178]
0x1409176cb: call   0x140065b00
0x1409176d0: nop
0x1409176d1: lea    rcx,[rbp+0x7c8]
0x1409176d8: call   0x140065b00
0x1409176dd: nop
0x1409176de: lea    rcx,[rbp+0x7e0]
0x1409176e5: call   0x140065b00
0x1409176ea: nop
0x1409176eb: lea    rcx,[rbp+0x160]
0x1409176f2: call   0x140065b00
0x1409176f7: nop
0x1409176f8: lea    rcx,[rbp+0x2f0]
0x1409176ff: call   0x140065b00
0x140917704: nop
0x140917705: lea    rcx,[rbp+0x7f8]
0x14091770c: call   0x140065b00
0x140917711: nop
0x140917712: lea    rcx,[rbp+0x810]
0x140917719: call   0x140065b00
0x14091771e: nop
0x14091771f: lea    rcx,[rbp+0x618]
0x140917726: call   0x140065b00
0x14091772b: nop
0x14091772c: lea    rcx,[rbp+0x278]
0x140917733: call   0x140065b00
0x140917738: nop
0x140917739: mov    r15d,ebx
0x14091773c: mov    DWORD PTR [rbp-0x68],ebx
0x14091773f: lea    rcx,[rbp+0x828]
0x140917746: call   0x140065b00
0x14091774b: nop
0x14091774c: lea    rcx,[rbp+0x840]
0x140917753: call   0x140065b00
0x140917758: nop
0x140917759: lea    rcx,[rbp+0x6d0]
0x140917760: call   0x140065b00
0x140917765: nop
0x140917766: lea    rcx,[rbp+0x6b8]
0x14091776d: call   0x140065b00
0x140917772: nop
0x140917773: mov    BYTE PTR [rbp-0x60],bl
0x140917776: mov    BYTE PTR [rsp+0x60],bl
0x14091777a: mov    rax,QWORD PTR [rbp-0x50]
0x14091777e: mov    rcx,QWORD PTR [rax+0x308]
0x140917785: test   rcx,rcx
0x140917788: je     0x140918145
0x14091778e: lea    rdx,[rbp+0x138]
0x140917795: call   0x14006f240
0x14091779a: lea    rdx,[rbp+0x4a8]
0x1409177a1: mov    rdi,QWORD PTR [rbp-0x50]
0x1409177a5: mov    rcx,QWORD PTR [rdi+0x308]
0x1409177ac: call   0x14006f230
0x1409177b1: lea    r8,[rbp+0x4a8]
0x1409177b8: lea    rdx,[rbp+0x1f]
0x1409177bc: lea    rcx,[rbp+0x138]
0x1409177c3: call   0x14006ee20
0x1409177c8: mov    DWORD PTR [rbp-0x6c],esi
0x1409177cb: xor    edx,edx
0x1409177cd: movzx  ecx,BYTE PTR [rax]
0x1409177d0: call   0x1400657b0
0x1409177d5: test   al,al
0x1409177d7: je     0x140918a4f
0x1409177dd: mov    DWORD PTR [rbp-0x6c],esi
0x1409177e0: lea    rcx,[rbp+0x138]
0x1409177e7: call   0x14006ee10
0x1409177ec: mov    rcx,QWORD PTR [rax]
0x1409177ef: add    rcx,0x20
0x1409177f3: lea    rdx,[rsp+0x78]
0x1409177f8: call   0x14006f240
0x1409177fd: lea    rcx,[rbp+0x138]
0x140917804: call   0x14006ee10
0x140917809: mov    rcx,QWORD PTR [rax]
0x14091780c: add    rcx,0x20
0x140917810: lea    rdx,[rbp+0x4a0]
0x140917817: call   0x14006f230
0x14091781c: lea    r8,[rbp+0x4a0]
0x140917823: lea    rdx,[rbp+0x1e]
0x140917827: lea    rcx,[rsp+0x78]
0x14091782c: call   0x14006ee20
0x140917831: xor    edx,edx
0x140917833: movzx  ecx,BYTE PTR [rax]
0x140917836: call   0x1400657b0
0x14091783b: test   al,al
0x14091783d: je     0x140918105
0x140917843: lea    rcx,[rsp+0x78]
0x140917848: call   0x14006ee10
0x14091784d: mov    rcx,QWORD PTR [rax]
0x140917850: cmp    DWORD PTR [rcx],0x0
0x140917853: jle    0x1409180c0
0x140917859: lea    rcx,[rsp+0x78]
0x14091785e: call   0x14006ee10
0x140917863: mov    rcx,QWORD PTR [rax]
0x140917866: mov    eax,DWORD PTR [r13+0x4]
0x14091786a: cmp    DWORD PTR [rcx+0xc],eax
0x14091786d: je     0x14091788f
0x14091786f: lea    rcx,[rsp+0x78]
0x140917874: call   0x14006ee10
0x140917879: mov    rcx,QWORD PTR [rax]
0x14091787c: cmp    DWORD PTR [rcx+0xc],0xffffffff
0x140917880: jne    0x1409180c0
0x140917886: test   r14b,r14b
0x140917889: je     0x1409180c0
0x14091788f: lea    rcx,[rsp+0x78]
0x140917894: call   0x14006ee10
0x140917899: mov    rcx,QWORD PTR [rax]
0x14091789c: cmp    DWORD PTR [rcx+0x18],0xffffffff
0x1409178a0: lea    rcx,[rsp+0x78]
0x1409178a5: je     0x1409179db
0x1409178ab: mov    BYTE PTR [rsp+0x60],0x1
0x1409178b0: call   0x14006ee10
0x1409178b5: mov    rcx,QWORD PTR [rax]
0x1409178b8: add    r15d,DWORD PTR [rcx]
0x1409178bb: mov    DWORD PTR [rbp-0x68],r15d
0x1409178bf: lea    rcx,[rsp+0x78]
0x1409178c4: call   0x14006ee10
0x1409178c9: lea    rcx,[rbp+0x840]
0x1409178d0: jmp    0x1409180b8
0x1409178d5: mov    rbx,QWORD PTR [rbp-0x50]
0x1409178d9: mov    r14b,0x1
0x1409178dc: mov    BYTE PTR [rsp+0x70],0x0
0x1409178e1: mov    BYTE PTR [rsp+0x50],r14b
0x1409178e6: mov    r8d,0x40
0x1409178ec: movzx  edx,WORD PTR [r13+0x98]
0x1409178f4: lea    rcx,[rip+0x1bd514d]        # 0x1424eca48
0x1409178fb: call   0x1400e35c0
0x140917900: test   al,al
0x140917902: je     0x1409175f3
0x140917908: lea    rdx,[rbp+0x1b8]
0x14091790f: lea    rcx,[rbx+0x2b0]
0x140917916: call   0x14006f240
0x14091791b: lea    rdx,[rbp+0x488]
0x140917922: lea    rcx,[rbx+0x2b0]
0x140917929: call   0x14006f230
0x14091792e: lea    rdx,[rbp+0x488]
0x140917935: lea    rcx,[rbp+0x1b8]
0x14091793c: call   0x1400b9970
0x140917941: test   al,al
0x140917943: jne    0x1409175f3
0x140917949: nop    DWORD PTR [rax+0x0]
0x140917950: lea    rcx,[rbp+0x1b8]
0x140917957: call   0x14006ee10
0x14091795c: mov    rbx,QWORD PTR [rax]
0x14091795f: mov    edx,0x1
0x140917964: lea    rcx,[rbx+0x28]
0x140917968: call   0x140071f90
0x14091796d: test   al,al
0x14091796f: jne    0x1409179a9
0x140917971: xor    edx,edx
0x140917973: lea    rcx,[rbx+0x28]
0x140917977: call   0x140071f90
0x14091797c: test   al,al
0x14091797e: jne    0x1409179a9
0x140917980: mov    edx,0x3
0x140917985: lea    rcx,[rbx+0x28]
0x140917989: call   0x140071f90
0x14091798e: test   al,al
0x140917990: jne    0x1409179a9
0x140917992: mov    rax,QWORD PTR [rbx]
0x140917995: mov    rcx,rbx
0x140917998: call   QWORD PTR [rax]
0x14091799a: cmp    ax,0x7
0x14091799e: jne    0x1409179a9
0x1409179a0: test   BYTE PTR [rbx+0x130],0x1
0x1409179a7: jne    0x1409179d1
0x1409179a9: lea    rcx,[rbp+0x1b8]
0x1409179b0: call   0x14006ee00
0x1409179b5: lea    rdx,[rbp+0x488]
0x1409179bc: lea    rcx,[rbp+0x1b8]
0x1409179c3: call   0x1400b9970
0x1409179c8: test   al,al
0x1409179ca: je     0x140917950
0x1409179cc: jmp    0x1409175f3
0x1409179d1: mov    BYTE PTR [rsp+0x70],0x1
0x1409179d6: jmp    0x1409175f3
0x1409179db: xor    sil,sil
0x1409179de: xor    r14b,r14b
0x1409179e1: xor    dil,dil
0x1409179e4: call   0x14006ee10
0x1409179e9: mov    rdx,QWORD PTR [rax]
0x1409179ec: movzx  edx,WORD PTR [rdx+0x4]
0x1409179f0: lea    rcx,[rip+0x1bd5051]        # 0x1424eca48
0x1409179f7: call   0x1400bba60
0x1409179fc: test   rax,rax
0x1409179ff: je     0x14091807d
0x140917a05: movzx  r15d,bx
0x140917a09: lea    rbx,[rax+0x178]
0x140917a10: lea    rdx,[rbp+0x1c0]
0x140917a17: mov    rcx,rbx
0x140917a1a: call   0x14006f240
0x140917a1f: lea    rdx,[rbp+0x490]
0x140917a26: mov    rcx,rbx
0x140917a29: call   0x14006f230
0x140917a2e: lea    r8,[rbp+0x490]
0x140917a35: lea    rdx,[rbp+0x1d]
0x140917a39: lea    rcx,[rbp+0x1c0]
0x140917a40: call   0x14006ee20
0x140917a45: xor    edx,edx
0x140917a47: movzx  ecx,BYTE PTR [rax]
0x140917a4a: call   0x1400657b0
0x140917a4f: test   al,al
0x140917a51: je     0x14091807d
0x140917a57: nop    WORD PTR [rax+rax*1+0x0]
0x140917a60: lea    rcx,[rbp+0x1c0]
0x140917a67: call   0x14006ee10
0x140917a6c: lea    rcx,[rsp+0x78]
0x140917a71: call   0x14006ee10
0x140917a76: mov    rcx,QWORD PTR [rax]
0x140917a79: lea    r9,[r13+0xc40]
0x140917a80: lea    r8,[r13+0xb98]
0x140917a87: movzx  edx,r15w
0x140917a8b: mov    ecx,DWORD PTR [rcx+0x4]
0x140917a8e: call   0x1400eb4f0
0x140917a93: movzx  esi,sil
0x140917a97: cmp    eax,0xffffffff
0x140917a9a: mov    eax,0x1
0x140917a9f: cmovne esi,eax
0x140917aa2: lea    rcx,[rsp+0x78]
0x140917aa7: call   0x14006ee10
0x140917aac: mov    rcx,QWORD PTR [rax]
0x140917aaf: lea    r9,[r13+0xc58]
0x140917ab6: mov    r8,QWORD PTR [rsp+0x58]
0x140917abb: add    r8,0xbb0
0x140917ac2: movzx  edx,r15w
0x140917ac6: mov    ecx,DWORD PTR [rcx+0x4]
0x140917ac9: call   0x1400eb4f0
0x140917ace: movzx  r14d,r14b
0x140917ad2: cmp    eax,0xffffffff
0x140917ad5: mov    eax,0x1
0x140917ada: cmovne r14d,eax
0x140917ade: lea    rcx,[rsp+0x78]
0x140917ae3: call   0x14006ee10
0x140917ae8: mov    rcx,QWORD PTR [rax]
0x140917aeb: mov    rdx,QWORD PTR [rsp+0x58]
0x140917af0: lea    r9,[rdx+0xc10]
0x140917af7: lea    r8,[rdx+0xb68]
0x140917afe: movzx  edx,r15w
0x140917b02: mov    ecx,DWORD PTR [rcx+0x4]
0x140917b05: call   0x1400eb4f0
0x140917b0a: movzx  edi,dil
0x140917b0e: cmp    eax,0xffffffff
0x140917b11: mov    eax,0x1
0x140917b16: cmovne edi,eax
0x140917b19: lea    rcx,[rbp+0x1c0]
0x140917b20: call   0x14006ee00
0x140917b25: inc    r15w
0x140917b29: lea    r8,[rbp+0x490]
0x140917b30: lea    rdx,[rbp+0x1d]
0x140917b34: lea    rcx,[rbp+0x1c0]
0x140917b3b: call   0x14006ee20
0x140917b40: xor    edx,edx
0x140917b42: movzx  ecx,BYTE PTR [rax]
0x140917b45: call   0x1400657b0
0x140917b4a: test   al,al
0x140917b4c: jne    0x140917a60
0x140917b52: test   sil,sil
0x140917b55: je     0x140917cf1
0x140917b5b: lea    rcx,[rsp+0x78]
0x140917b60: call   0x14006ee10
0x140917b65: mov    rdx,rax
0x140917b68: test   dil,dil
0x140917b6b: je     0x140917c31
0x140917b71: lea    rcx,[rbp+0x630]
0x140917b78: call   0x1400b9980
0x140917b7d: lea    rcx,[rsp+0x78]
0x140917b82: call   0x14006ee10
0x140917b87: mov    rcx,QWORD PTR [rax]
0x140917b8a: lea    rdx,[rbp+0x290]
0x140917b91: mov    ecx,DWORD PTR [rcx+0x4]
0x140917b94: call   0x1400b9f70
0x140917b99: movsxd rdi,eax
0x140917b9c: lea    rcx,[rsp+0x78]
0x140917ba1: call   0x14006ee10
0x140917ba6: mov    rcx,QWORD PTR [rax]
0x140917ba9: cmp    edi,0xffffffff
0x140917bac: je     0x140917bcb
0x140917bae: mov    ebx,DWORD PTR [rcx]
0x140917bb0: mov    rdx,rdi
0x140917bb3: lea    rcx,[rbp+0x178]
0x140917bba: call   0x14006f360
0x140917bbf: add    DWORD PTR [rax],ebx
0x140917bc1: mov    r12d,DWORD PTR [rsp+0x54]
0x140917bc6: jmp    0x1409180c0
0x140917bcb: lea    rdx,[rbp+0x290]
0x140917bd2: mov    ecx,DWORD PTR [rcx+0x4]
0x140917bd5: call   0x1400b9e70
0x140917bda: movsxd rbx,eax
0x140917bdd: lea    rcx,[rbp+0x178]
0x140917be4: call   0x14006f370
0x140917be9: lea    rcx,[rsp+0x78]
0x140917bee: cmp    ebx,eax
0x140917bf0: jge    0x140917c13
0x140917bf2: call   0x14006ee10
0x140917bf7: mov    rdx,rbx
0x140917bfa: mov    r8,QWORD PTR [rax]
0x140917bfd: lea    rcx,[rbp+0x178]
0x140917c04: call   0x1400b9a10
0x140917c09: mov    r12d,DWORD PTR [rsp+0x54]
0x140917c0e: jmp    0x1409180c0
0x140917c13: call   0x14006ee10
0x140917c18: mov    rdx,QWORD PTR [rax]
0x140917c1b: lea    rcx,[rbp+0x178]
0x140917c22: call   0x14006f410
0x140917c27: mov    r12d,DWORD PTR [rsp+0x54]
0x140917c2c: jmp    0x1409180c0
0x140917c31: lea    rcx,[rbp+0x780]
0x140917c38: call   0x1400b9980
0x140917c3d: lea    rcx,[rsp+0x78]
0x140917c42: call   0x14006ee10
0x140917c47: mov    rcx,QWORD PTR [rax]
0x140917c4a: lea    rdx,[rbp+0x428]
0x140917c51: mov    ecx,DWORD PTR [rcx+0x4]
0x140917c54: call   0x1400b9f70
0x140917c59: movsxd rdi,eax
0x140917c5c: lea    rcx,[rsp+0x78]
0x140917c61: call   0x14006ee10
0x140917c66: mov    rcx,QWORD PTR [rax]
0x140917c69: cmp    edi,0xffffffff
0x140917c6c: je     0x140917c8b
0x140917c6e: mov    ebx,DWORD PTR [rcx]
0x140917c70: mov    rdx,rdi
0x140917c73: lea    rcx,[rbp+0x2c0]
0x140917c7a: call   0x14006f360
0x140917c7f: add    DWORD PTR [rax],ebx
0x140917c81: mov    r12d,DWORD PTR [rsp+0x54]
0x140917c86: jmp    0x1409180c0
0x140917c8b: lea    rdx,[rbp+0x428]
0x140917c92: mov    ecx,DWORD PTR [rcx+0x4]
0x140917c95: call   0x1400b9e70
0x140917c9a: movsxd rbx,eax
0x140917c9d: lea    rcx,[rbp+0x2c0]
0x140917ca4: call   0x14006f370
0x140917ca9: lea    rcx,[rsp+0x78]
0x140917cae: cmp    ebx,eax
0x140917cb0: jge    0x140917cd3
0x140917cb2: call   0x14006ee10
0x140917cb7: mov    rdx,rbx
0x140917cba: mov    r8,QWORD PTR [rax]
0x140917cbd: lea    rcx,[rbp+0x2c0]
0x140917cc4: call   0x1400b9a10
0x140917cc9: mov    r12d,DWORD PTR [rsp+0x54]
0x140917cce: jmp    0x1409180c0
0x140917cd3: call   0x14006ee10
0x140917cd8: mov    rdx,QWORD PTR [rax]
0x140917cdb: lea    rcx,[rbp+0x2c0]
0x140917ce2: call   0x14006f410
0x140917ce7: mov    r12d,DWORD PTR [rsp+0x54]
0x140917cec: jmp    0x1409180c0
0x140917cf1: test   r14b,r14b
0x140917cf4: je     0x140917fa8
0x140917cfa: xor    dil,dil
0x140917cfd: lea    rcx,[rsp+0x78]
0x140917d02: call   0x14006ee10
0x140917d07: mov    rcx,QWORD PTR [rax]
0x140917d0a: cmp    DWORD PTR [rcx+0x4],0xffffffff
0x140917d0e: je     0x140917edb
0x140917d14: lea    rcx,[rsp+0x78]
0x140917d19: call   0x14006ee10
0x140917d1e: mov    rdx,QWORD PTR [rax]
0x140917d21: movzx  edx,WORD PTR [rdx+0x4]
0x140917d25: lea    rcx,[rip+0x1bd4d1c]        # 0x1424eca48
0x140917d2c: call   0x1400bba60
0x140917d31: lea    rbx,[rax+0x178]
0x140917d38: lea    rdx,[rbp+0x1c8]
0x140917d3f: mov    rcx,rbx
0x140917d42: call   0x14006f240
0x140917d47: lea    rdx,[rbp+0x498]
0x140917d4e: mov    rcx,rbx
0x140917d51: call   0x14006f230
0x140917d56: lea    rdx,[rbp+0x498]
0x140917d5d: lea    rcx,[rbp+0x1c8]
0x140917d64: call   0x1400b9970
0x140917d69: test   al,al
0x140917d6b: jne    0x140917edb
0x140917d71: lea    rcx,[rbp+0x1c8]
0x140917d78: call   0x14006ee10
0x140917d7d: mov    rsi,QWORD PTR [rax]
0x140917d80: mov    edx,0x68
0x140917d85: lea    rcx,[rsi+0x6a8]
0x140917d8c: call   0x140071f90
0x140917d91: test   al,al
0x140917d93: je     0x140917dde
0x140917d95: mov    edx,0x3a
0x140917d9a: lea    rcx,[rsi+0x6a8]
0x140917da1: call   0x140071f90
0x140917da6: test   al,al
0x140917da8: je     0x140917dde
0x140917daa: lea    rcx,[rsi+0x15d8]
0x140917db1: call   0x14006f370
0x140917db6: test   eax,eax
0x140917db8: jle    0x140917dde
0x140917dba: movsxd rdx,eax
0x140917dbd: dec    rdx
0x140917dc0: lea    rcx,[rsi+0x15d8]
0x140917dc7: call   0x14006f360
0x140917dcc: movzx  edi,dil
0x140917dd0: cmp    DWORD PTR [rax],0x61a8
0x140917dd6: mov    eax,0x1
0x140917ddb: cmovge edi,eax
0x140917dde: lea    rcx,[rbp+0x1c8]
0x140917de5: call   0x14006ee00
0x140917dea: lea    rdx,[rbp+0x498]
0x140917df1: lea    rcx,[rbp+0x1c8]
0x140917df8: call   0x1400b9970
0x140917dfd: test   al,al
0x140917dff: je     0x140917d71
0x140917e05: test   dil,dil
0x140917e08: je     0x140917edb
0x140917e0e: lea    rcx,[rsp+0x78]
0x140917e13: call   0x14006ee10
0x140917e18: mov    rdx,rax
0x140917e1b: lea    rcx,[rbp+0x810]
0x140917e22: call   0x1400b9980
0x140917e27: lea    rcx,[rsp+0x78]
0x140917e2c: call   0x14006ee10
0x140917e31: mov    rcx,QWORD PTR [rax]
0x140917e34: lea    rdx,[rbp+0x618]
0x140917e3b: mov    ecx,DWORD PTR [rcx+0x4]
0x140917e3e: call   0x1400b9f70
0x140917e43: movsxd rdi,eax
0x140917e46: lea    rcx,[rsp+0x78]
0x140917e4b: call   0x14006ee10
0x140917e50: mov    rcx,QWORD PTR [rax]
0x140917e53: cmp    edi,0xffffffff
0x140917e56: je     0x140917e75
0x140917e58: mov    ebx,DWORD PTR [rcx]
0x140917e5a: mov    rdx,rdi
0x140917e5d: lea    rcx,[rbp+0x278]
0x140917e64: call   0x14006f360
0x140917e69: add    DWORD PTR [rax],ebx
0x140917e6b: mov    r12d,DWORD PTR [rsp+0x54]
0x140917e70: jmp    0x1409180c0
0x140917e75: lea    rdx,[rbp+0x618]
0x140917e7c: mov    ecx,DWORD PTR [rcx+0x4]
0x140917e7f: call   0x1400b9e70
0x140917e84: movsxd rbx,eax
0x140917e87: lea    rcx,[rbp+0x278]
0x140917e8e: call   0x14006f370
0x140917e93: lea    rcx,[rsp+0x78]
0x140917e98: cmp    ebx,eax
0x140917e9a: jge    0x140917ebd
0x140917e9c: call   0x14006ee10
0x140917ea1: mov    rdx,rbx
0x140917ea4: mov    r8,QWORD PTR [rax]
0x140917ea7: lea    rcx,[rbp+0x278]
0x140917eae: call   0x1400b9a10
0x140917eb3: mov    r12d,DWORD PTR [rsp+0x54]
0x140917eb8: jmp    0x1409180c0
0x140917ebd: call   0x14006ee10
0x140917ec2: mov    rdx,QWORD PTR [rax]
0x140917ec5: lea    rcx,[rbp+0x278]
0x140917ecc: call   0x14006f410
0x140917ed1: mov    r12d,DWORD PTR [rsp+0x54]
0x140917ed6: jmp    0x1409180c0
0x140917edb: lea    rcx,[rsp+0x78]
0x140917ee0: call   0x14006ee10
0x140917ee5: mov    rdx,rax
0x140917ee8: lea    rcx,[rbp+0x7e0]
0x140917eef: call   0x1400b9980
0x140917ef4: lea    rcx,[rsp+0x78]
0x140917ef9: call   0x14006ee10
0x140917efe: mov    rcx,QWORD PTR [rax]
0x140917f01: lea    rdx,[rbp+0x160]
0x140917f08: mov    ecx,DWORD PTR [rcx+0x4]
0x140917f0b: call   0x1400b9f70
0x140917f10: movsxd rdi,eax
0x140917f13: lea    rcx,[rsp+0x78]
0x140917f18: call   0x14006ee10
0x140917f1d: mov    rcx,QWORD PTR [rax]
0x140917f20: cmp    edi,0xffffffff
0x140917f23: je     0x140917f42
0x140917f25: mov    ebx,DWORD PTR [rcx]
0x140917f27: mov    rdx,rdi
0x140917f2a: lea    rcx,[rbp+0x2f0]
0x140917f31: call   0x14006f360
0x140917f36: add    DWORD PTR [rax],ebx
0x140917f38: mov    r12d,DWORD PTR [rsp+0x54]
0x140917f3d: jmp    0x1409180c0
0x140917f42: lea    rdx,[rbp+0x160]
0x140917f49: mov    ecx,DWORD PTR [rcx+0x4]
0x140917f4c: call   0x1400b9e70
0x140917f51: movsxd rbx,eax
0x140917f54: lea    rcx,[rbp+0x2f0]
0x140917f5b: call   0x14006f370
0x140917f60: lea    rcx,[rsp+0x78]
0x140917f65: cmp    ebx,eax
0x140917f67: jge    0x140917f8a
0x140917f69: call   0x14006ee10
0x140917f6e: mov    rdx,rbx
0x140917f71: mov    r8,QWORD PTR [rax]
0x140917f74: lea    rcx,[rbp+0x2f0]
0x140917f7b: call   0x1400b9a10
0x140917f80: mov    r12d,DWORD PTR [rsp+0x54]
0x140917f85: jmp    0x1409180c0
0x140917f8a: call   0x14006ee10
0x140917f8f: mov    rdx,QWORD PTR [rax]
0x140917f92: lea    rcx,[rbp+0x2f0]
0x140917f99: call   0x14006f410
0x140917f9e: mov    r12d,DWORD PTR [rsp+0x54]
0x140917fa3: jmp    0x1409180c0
0x140917fa8: test   dil,dil
0x140917fab: je     0x140918078
0x140917fb1: lea    rcx,[rsp+0x78]
0x140917fb6: call   0x14006ee10
0x140917fbb: mov    rdx,rax
0x140917fbe: lea    rcx,[rbp+0x7b0]
0x140917fc5: call   0x1400b9980
0x140917fca: lea    rcx,[rsp+0x78]
0x140917fcf: call   0x14006ee10
0x140917fd4: mov    rcx,QWORD PTR [rax]
0x140917fd7: lea    rdx,[rbp+0x440]
0x140917fde: mov    ecx,DWORD PTR [rcx+0x4]
0x140917fe1: call   0x1400b9f70
0x140917fe6: movsxd rdi,eax
0x140917fe9: lea    rcx,[rsp+0x78]
0x140917fee: call   0x14006ee10
0x140917ff3: mov    rcx,QWORD PTR [rax]
0x140917ff6: cmp    edi,0xffffffff
0x140917ff9: je     0x140918018
0x140917ffb: mov    ebx,DWORD PTR [rcx]
0x140917ffd: mov    rdx,rdi
0x140918000: lea    rcx,[rbp+0x2a8]
0x140918007: call   0x14006f360
0x14091800c: add    DWORD PTR [rax],ebx
0x14091800e: mov    r12d,DWORD PTR [rsp+0x54]
0x140918013: jmp    0x1409180c0
0x140918018: lea    rdx,[rbp+0x440]
0x14091801f: mov    ecx,DWORD PTR [rcx+0x4]
0x140918022: call   0x1400b9e70
0x140918027: movsxd rbx,eax
0x14091802a: lea    rcx,[rbp+0x2a8]
0x140918031: call   0x14006f370
0x140918036: lea    rcx,[rsp+0x78]
0x14091803b: cmp    ebx,eax
0x14091803d: jge    0x14091805d
0x14091803f: call   0x14006ee10
0x140918044: mov    rdx,rbx
0x140918047: mov    r8,QWORD PTR [rax]
0x14091804a: lea    rcx,[rbp+0x2a8]
0x140918051: call   0x1400b9a10
0x140918056: mov    r12d,DWORD PTR [rsp+0x54]
0x14091805b: jmp    0x1409180c0
0x14091805d: call   0x14006ee10
0x140918062: mov    rdx,QWORD PTR [rax]
0x140918065: lea    rcx,[rbp+0x2a8]
0x14091806c: call   0x14006f410
0x140918071: mov    r12d,DWORD PTR [rsp+0x54]
0x140918076: jmp    0x1409180c0
0x140918078: mov    r12d,DWORD PTR [rsp+0x54]
0x14091807d: lea    rcx,[rsp+0x78]
0x140918082: call   0x14006ee10
0x140918087: mov    rcx,QWORD PTR [rax]
0x14091808a: add    r12d,DWORD PTR [rcx]
0x14091808d: mov    DWORD PTR [rsp+0x54],r12d
0x140918092: lea    rcx,[rsp+0x78]
0x140918097: call   0x14006ee10
0x14091809c: mov    rcx,QWORD PTR [rax]
0x14091809f: mov    edi,DWORD PTR [rbp-0x6c]
0x1409180a2: add    edi,DWORD PTR [rcx]
0x1409180a4: mov    DWORD PTR [rbp-0x6c],edi
0x1409180a7: lea    rcx,[rsp+0x78]
0x1409180ac: call   0x14006ee10
0x1409180b1: lea    rcx,[rbp+0x260]
0x1409180b8: mov    rdx,rax
0x1409180bb: call   0x1400b9980
0x1409180c0: lea    rcx,[rsp+0x78]
0x1409180c5: call   0x14006ee00
0x1409180ca: lea    r8,[rbp+0x4a0]
0x1409180d1: lea    rdx,[rbp+0x1e]
0x1409180d5: lea    rcx,[rsp+0x78]
0x1409180da: call   0x14006ee20
0x1409180df: xor    edx,edx
0x1409180e1: movzx  ecx,BYTE PTR [rax]
0x1409180e4: call   0x1400657b0
0x1409180e9: test   al,al
0x1409180eb: movzx  r14d,BYTE PTR [rsp+0x50]
0x1409180f1: mov    r15d,DWORD PTR [rbp-0x68]
0x1409180f5: mov    r13,QWORD PTR [rsp+0x58]
0x1409180fa: mov    ebx,0x0
0x1409180ff: jne    0x140917843
0x140918105: lea    rcx,[rbp+0x138]
0x14091810c: call   0x14006ee00
0x140918111: lea    r8,[rbp+0x4a8]
0x140918118: lea    rdx,[rbp+0x1f]
0x14091811c: lea    rcx,[rbp+0x138]
0x140918123: call   0x14006ee20
0x140918128: xor    edx,edx
0x14091812a: movzx  ecx,BYTE PTR [rax]
0x14091812d: call   0x1400657b0
0x140918132: test   al,al
0x140918134: movzx  r14d,BYTE PTR [rsp+0x50]
0x14091813a: jne    0x1409177e0
0x140918140: jmp    0x140918a4b
0x140918145: lea    rbx,[rax+0xc0]
0x14091814c: lea    rdx,[rbp-0x78]
0x140918150: mov    rcx,rbx
0x140918153: call   0x14006f240
0x140918158: lea    rdx,[rbp+0x4c0]
0x14091815f: mov    rcx,rbx
0x140918162: call   0x14006f230
0x140918167: lea    r8,[rbp+0x4c0]
0x14091816e: lea    rdx,[rbp+0x21]
0x140918172: lea    rcx,[rbp-0x78]
0x140918176: call   0x14006ee20
0x14091817b: xor    edx,edx
0x14091817d: movzx  ecx,BYTE PTR [rax]
0x140918180: call   0x1400657b0
0x140918185: test   al,al
0x140918187: je     0x140918910
0x14091818d: nop    DWORD PTR [rax]
0x140918190: lea    rcx,[rbp-0x78]
0x140918194: call   0x14006ee10
0x140918199: mov    rcx,QWORD PTR [rax]
0x14091819c: cmp    DWORD PTR [rcx+0x4],0x0
0x1409181a0: jbe    0x1409188cd
0x1409181a6: lea    rcx,[rbp-0x78]
0x1409181aa: call   0x14006ee10
0x1409181af: mov    rcx,QWORD PTR [rax]
0x1409181b2: mov    eax,DWORD PTR [r13+0x4]
0x1409181b6: cmp    DWORD PTR [rcx+0x10],eax
0x1409181b9: je     0x1409181d9
0x1409181bb: lea    rcx,[rbp-0x78]
0x1409181bf: call   0x14006ee10
0x1409181c4: mov    rcx,QWORD PTR [rax]
0x1409181c7: cmp    DWORD PTR [rcx+0x10],edi
0x1409181ca: jne    0x1409188cd
0x1409181d0: test   r14b,r14b
0x1409181d3: je     0x1409188cd
0x1409181d9: lea    rcx,[rbp-0x78]
0x1409181dd: call   0x14006ee10
0x1409181e2: mov    rcx,QWORD PTR [rax]
0x1409181e5: cmp    WORD PTR [rcx],0x0
0x1409181e9: jne    0x1409188cd
0x1409181ef: xor    sil,sil
0x1409181f2: xor    r14b,r14b
0x1409181f5: xor    dil,dil
0x1409181f8: lea    rcx,[rbp-0x78]
0x1409181fc: call   0x14006ee10
0x140918201: mov    rdx,QWORD PTR [rax]
0x140918204: movzx  edx,WORD PTR [rdx+0x2]
0x140918208: lea    rcx,[rip+0x1bd4839]        # 0x1424eca48
0x14091820f: call   0x1400bba60
0x140918214: test   rax,rax
0x140918217: je     0x1409188cd
0x14091821d: xor    ecx,ecx
0x14091821f: movzx  r15d,cx
0x140918223: lea    rbx,[rax+0x178]
0x14091822a: lea    rdx,[rbp+0x1d0]
0x140918231: mov    rcx,rbx
0x140918234: call   0x14006f240
0x140918239: lea    rdx,[rbp+0x4b0]
0x140918240: mov    rcx,rbx
0x140918243: call   0x14006f230
0x140918248: lea    r8,[rbp+0x4b0]
0x14091824f: lea    rdx,[rbp+0x20]
0x140918253: lea    rcx,[rbp+0x1d0]
0x14091825a: call   0x14006ee20
0x14091825f: xor    edx,edx
0x140918261: movzx  ecx,BYTE PTR [rax]
0x140918264: call   0x1400657b0
0x140918269: test   al,al
0x14091826b: je     0x1409188cd
0x140918271: lea    rcx,[rbp+0x1d0]
0x140918278: call   0x14006ee10
0x14091827d: lea    rcx,[rbp-0x78]
0x140918281: call   0x14006ee10
0x140918286: mov    rcx,QWORD PTR [rax]
0x140918289: movsx  ecx,WORD PTR [rcx+0x2]
0x14091828d: lea    r9,[r13+0xc40]
0x140918294: lea    r8,[r13+0xb98]
0x14091829b: movzx  edx,r15w
0x14091829f: call   0x1400eb4f0
0x1409182a4: movzx  esi,sil
0x1409182a8: cmp    eax,0xffffffff
0x1409182ab: mov    eax,0x1
0x1409182b0: cmovne esi,eax
0x1409182b3: lea    rcx,[rbp-0x78]
0x1409182b7: call   0x14006ee10
0x1409182bc: mov    rcx,QWORD PTR [rax]
0x1409182bf: movsx  ecx,WORD PTR [rcx+0x2]
0x1409182c3: lea    r9,[r13+0xc58]
0x1409182ca: mov    r8,QWORD PTR [rsp+0x58]
0x1409182cf: add    r8,0xbb0
0x1409182d6: movzx  edx,r15w
0x1409182da: call   0x1400eb4f0
0x1409182df: movzx  r14d,r14b
0x1409182e3: cmp    eax,0xffffffff
0x1409182e6: mov    eax,0x1
0x1409182eb: cmovne r14d,eax
0x1409182ef: lea    rcx,[rbp-0x78]
0x1409182f3: call   0x14006ee10
0x1409182f8: mov    rcx,QWORD PTR [rax]
0x1409182fb: movsx  ecx,WORD PTR [rcx+0x2]
0x1409182ff: mov    rdx,QWORD PTR [rsp+0x58]
0x140918304: lea    r9,[rdx+0xc10]
0x14091830b: lea    r8,[rdx+0xb68]
0x140918312: movzx  edx,r15w
0x140918316: call   0x1400eb4f0
0x14091831b: movzx  edi,dil
0x14091831f: cmp    eax,0xffffffff
0x140918322: mov    eax,0x1
0x140918327: cmovne edi,eax
0x14091832a: lea    rcx,[rbp+0x1d0]
0x140918331: call   0x14006ee00
0x140918336: inc    r15w
0x14091833a: lea    r8,[rbp+0x4b0]
0x140918341: lea    rdx,[rbp+0x20]
0x140918345: lea    rcx,[rbp+0x1d0]
0x14091834c: call   0x14006ee20
0x140918351: xor    edx,edx
0x140918353: movzx  ecx,BYTE PTR [rax]
0x140918356: call   0x1400657b0
0x14091835b: test   al,al
0x14091835d: jne    0x140918271
0x140918363: test   sil,sil
0x140918366: je     0x140918519
0x14091836c: lea    rcx,[rbp-0x78]
0x140918370: call   0x14006ee10
0x140918375: mov    rdx,rax
0x140918378: test   dil,dil
0x14091837b: je     0x14091844d
0x140918381: lea    rcx,[rbp+0x648]
0x140918388: call   0x1400b9980
0x14091838d: lea    rcx,[rbp-0x78]
0x140918391: call   0x14006ee10
0x140918396: mov    rcx,QWORD PTR [rax]
0x140918399: movsx  ecx,WORD PTR [rcx+0x2]
0x14091839d: lea    rdx,[rbp+0x290]
0x1409183a4: call   0x1400b9f70
0x1409183a9: movsxd rdi,eax
0x1409183ac: lea    rcx,[rbp-0x78]
0x1409183b0: call   0x14006ee10
0x1409183b5: mov    rcx,QWORD PTR [rax]
0x1409183b8: cmp    edi,0xffffffff
0x1409183bb: je     0x1409183d6
0x1409183bd: mov    ebx,DWORD PTR [rcx+0x4]
0x1409183c0: mov    rdx,rdi
0x1409183c3: lea    rcx,[rbp+0x178]
0x1409183ca: call   0x14006f360
0x1409183cf: add    DWORD PTR [rax],ebx
0x1409183d1: jmp    0x1409188c8
0x1409183d6: movsx  ecx,WORD PTR [rcx+0x2]
0x1409183da: lea    rdx,[rbp+0x290]
0x1409183e1: call   0x1400b9e70
0x1409183e6: movsxd rbx,eax
0x1409183e9: lea    rcx,[rbp+0x178]
0x1409183f0: call   0x14006f370
0x1409183f5: lea    rcx,[rbp-0x78]
0x1409183f9: cmp    ebx,eax
0x1409183fb: jge    0x140918429
0x1409183fd: call   0x14006ee10
0x140918402: mov    rcx,QWORD PTR [rax]
0x140918405: mov    edx,DWORD PTR [rcx+0x4]
0x140918408: mov    DWORD PTR [rbp+0x3f8],edx
0x14091840e: mov    rdx,rbx
0x140918411: lea    r8,[rbp+0x3f8]
0x140918418: lea    rcx,[rbp+0x178]
0x14091841f: call   0x1400b9a10
0x140918424: jmp    0x1409188c8
0x140918429: call   0x14006ee10
0x14091842e: mov    rcx,QWORD PTR [rax]
0x140918431: mov    eax,DWORD PTR [rcx+0x4]
0x140918434: mov    DWORD PTR [rbp+0x400],eax
0x14091843a: lea    rdx,[rbp+0x400]
0x140918441: lea    rcx,[rbp+0x178]
0x140918448: jmp    0x1409188c3
0x14091844d: lea    rcx,[rbp+0x768]
0x140918454: call   0x1400b9980
0x140918459: lea    rcx,[rbp-0x78]
0x14091845d: call   0x14006ee10
0x140918462: mov    rcx,QWORD PTR [rax]
0x140918465: movsx  ecx,WORD PTR [rcx+0x2]
0x140918469: lea    rdx,[rbp+0x428]
0x140918470: call   0x1400b9f70
0x140918475: movsxd rdi,eax
0x140918478: lea    rcx,[rbp-0x78]
0x14091847c: call   0x14006ee10
0x140918481: mov    rcx,QWORD PTR [rax]
0x140918484: cmp    edi,0xffffffff
0x140918487: je     0x1409184a2
0x140918489: mov    ebx,DWORD PTR [rcx+0x4]
0x14091848c: mov    rdx,rdi
0x14091848f: lea    rcx,[rbp+0x2c0]
0x140918496: call   0x14006f360
0x14091849b: add    DWORD PTR [rax],ebx
0x14091849d: jmp    0x1409188c8
0x1409184a2: movsx  ecx,WORD PTR [rcx+0x2]
0x1409184a6: lea    rdx,[rbp+0x428]
0x1409184ad: call   0x1400b9e70
0x1409184b2: movsxd rbx,eax
0x1409184b5: lea    rcx,[rbp+0x2c0]
0x1409184bc: call   0x14006f370
0x1409184c1: lea    rcx,[rbp-0x78]
0x1409184c5: cmp    ebx,eax
0x1409184c7: jge    0x1409184f5
0x1409184c9: call   0x14006ee10
0x1409184ce: mov    rcx,QWORD PTR [rax]
0x1409184d1: mov    edx,DWORD PTR [rcx+0x4]
0x1409184d4: mov    DWORD PTR [rbp+0x404],edx
0x1409184da: mov    rdx,rbx
0x1409184dd: lea    r8,[rbp+0x404]
0x1409184e4: lea    rcx,[rbp+0x2c0]
0x1409184eb: call   0x1400b9a10
0x1409184f0: jmp    0x1409188c8
0x1409184f5: call   0x14006ee10
0x1409184fa: mov    rcx,QWORD PTR [rax]
0x1409184fd: mov    eax,DWORD PTR [rcx+0x4]
0x140918500: mov    DWORD PTR [rbp+0x408],eax
0x140918506: lea    rdx,[rbp+0x408]
0x14091850d: lea    rcx,[rbp+0x2c0]
0x140918514: jmp    0x1409188c3
0x140918519: test   r14b,r14b
0x14091851c: je     0x1409187ed
0x140918522: xor    dil,dil
0x140918525: lea    rcx,[rbp-0x78]
0x140918529: call   0x14006ee10
0x14091852e: mov    rcx,QWORD PTR [rax]
0x140918531: cmp    WORD PTR [rcx+0x2],0xffff
0x140918536: je     0x140918715
0x14091853c: lea    rcx,[rbp-0x78]
0x140918540: call   0x14006ee10
0x140918545: mov    rdx,QWORD PTR [rax]
0x140918548: movzx  edx,WORD PTR [rdx+0x2]
0x14091854c: lea    rcx,[rip+0x1bd44f5]        # 0x1424eca48
0x140918553: call   0x1400bba60
0x140918558: lea    rbx,[rax+0x178]
0x14091855f: lea    rdx,[rbp+0x1d8]
0x140918566: mov    rcx,rbx
0x140918569: call   0x14006f240
0x14091856e: lea    rdx,[rbp+0x4b8]
0x140918575: mov    rcx,rbx
0x140918578: call   0x14006f230
0x14091857d: lea    rdx,[rbp+0x4b8]
0x140918584: lea    rcx,[rbp+0x1d8]
0x14091858b: call   0x1400b9970
0x140918590: test   al,al
0x140918592: jne    0x140918715
0x140918598: nop    DWORD PTR [rax+rax*1+0x0]
0x1409185a0: lea    rcx,[rbp+0x1d8]
0x1409185a7: call   0x14006ee10
0x1409185ac: mov    rsi,QWORD PTR [rax]
0x1409185af: mov    edx,0x68
0x1409185b4: lea    rcx,[rsi+0x6a8]
0x1409185bb: call   0x140071f90
0x1409185c0: test   al,al
0x1409185c2: je     0x14091860d
0x1409185c4: mov    edx,0x3a
0x1409185c9: lea    rcx,[rsi+0x6a8]
0x1409185d0: call   0x140071f90
0x1409185d5: test   al,al
0x1409185d7: je     0x14091860d
0x1409185d9: lea    rcx,[rsi+0x15d8]
0x1409185e0: call   0x14006f370
0x1409185e5: test   eax,eax
0x1409185e7: jle    0x14091860d
0x1409185e9: movsxd rdx,eax
0x1409185ec: dec    rdx
0x1409185ef: lea    rcx,[rsi+0x15d8]
0x1409185f6: call   0x14006f360
0x1409185fb: movzx  edi,dil
0x1409185ff: cmp    DWORD PTR [rax],0x61a8
0x140918605: mov    eax,0x1
0x14091860a: cmovge edi,eax
0x14091860d: lea    rcx,[rbp+0x1d8]
0x140918614: call   0x14006ee00
0x140918619: lea    rdx,[rbp+0x4b8]
0x140918620: lea    rcx,[rbp+0x1d8]
0x140918627: call   0x1400b9970
0x14091862c: test   al,al
0x14091862e: je     0x1409185a0
0x140918634: test   dil,dil
0x140918637: je     0x140918715
0x14091863d: lea    rcx,[rbp-0x78]
0x140918641: call   0x14006ee10
0x140918646: mov    rdx,rax
0x140918649: lea    rcx,[rbp+0x7f8]
0x140918650: call   0x1400b9980
0x140918655: lea    rcx,[rbp-0x78]
0x140918659: call   0x14006ee10
0x14091865e: mov    rcx,QWORD PTR [rax]
0x140918661: movsx  ecx,WORD PTR [rcx+0x2]
0x140918665: lea    rdx,[rbp+0x618]
0x14091866c: call   0x1400b9f70
0x140918671: movsxd rdi,eax
0x140918674: lea    rcx,[rbp-0x78]
0x140918678: call   0x14006ee10
0x14091867d: mov    rcx,QWORD PTR [rax]
0x140918680: cmp    edi,0xffffffff
0x140918683: je     0x14091869e
0x140918685: mov    ebx,DWORD PTR [rcx+0x4]
0x140918688: mov    rdx,rdi
0x14091868b: lea    rcx,[rbp+0x278]
0x140918692: call   0x14006f360
0x140918697: add    DWORD PTR [rax],ebx
0x140918699: jmp    0x1409188c8
0x14091869e: movsx  ecx,WORD PTR [rcx+0x2]
0x1409186a2: lea    rdx,[rbp+0x618]
0x1409186a9: call   0x1400b9e70
0x1409186ae: movsxd rbx,eax
0x1409186b1: lea    rcx,[rbp+0x278]
0x1409186b8: call   0x14006f370
0x1409186bd: lea    rcx,[rbp-0x78]
0x1409186c1: cmp    ebx,eax
0x1409186c3: jge    0x1409186f1
0x1409186c5: call   0x14006ee10
0x1409186ca: mov    rcx,QWORD PTR [rax]
0x1409186cd: mov    edx,DWORD PTR [rcx+0x4]
0x1409186d0: mov    DWORD PTR [rbp+0x40c],edx
0x1409186d6: mov    rdx,rbx
0x1409186d9: lea    r8,[rbp+0x40c]
0x1409186e0: lea    rcx,[rbp+0x278]
0x1409186e7: call   0x1400b9a10
0x1409186ec: jmp    0x1409188c8
0x1409186f1: call   0x14006ee10
0x1409186f6: mov    rcx,QWORD PTR [rax]
0x1409186f9: mov    eax,DWORD PTR [rcx+0x4]
0x1409186fc: mov    DWORD PTR [rbp+0x414],eax
0x140918702: lea    rdx,[rbp+0x414]
0x140918709: lea    rcx,[rbp+0x278]
0x140918710: jmp    0x1409188c3
0x140918715: lea    rcx,[rbp-0x78]
0x140918719: call   0x14006ee10
0x14091871e: mov    rdx,rax
0x140918721: lea    rcx,[rbp+0x7c8]
0x140918728: call   0x1400b9980
0x14091872d: lea    rcx,[rbp-0x78]
0x140918731: call   0x14006ee10
0x140918736: mov    rcx,QWORD PTR [rax]
0x140918739: movsx  ecx,WORD PTR [rcx+0x2]
0x14091873d: lea    rdx,[rbp+0x160]
0x140918744: call   0x1400b9f70
0x140918749: movsxd rdi,eax
0x14091874c: lea    rcx,[rbp-0x78]
0x140918750: call   0x14006ee10
0x140918755: mov    rcx,QWORD PTR [rax]
0x140918758: cmp    edi,0xffffffff
0x14091875b: je     0x140918776
0x14091875d: mov    ebx,DWORD PTR [rcx+0x4]
0x140918760: mov    rdx,rdi
0x140918763: lea    rcx,[rbp+0x2f0]
0x14091876a: call   0x14006f360
0x14091876f: add    DWORD PTR [rax],ebx
0x140918771: jmp    0x1409188c8
0x140918776: movsx  ecx,WORD PTR [rcx+0x2]
0x14091877a: lea    rdx,[rbp+0x160]
0x140918781: call   0x1400b9e70
0x140918786: movsxd rbx,eax
0x140918789: lea    rcx,[rbp+0x2f0]
0x140918790: call   0x14006f370
0x140918795: lea    rcx,[rbp-0x78]
0x140918799: cmp    ebx,eax
0x14091879b: jge    0x1409187c9
0x14091879d: call   0x14006ee10
0x1409187a2: mov    rcx,QWORD PTR [rax]
0x1409187a5: mov    edx,DWORD PTR [rcx+0x4]
0x1409187a8: mov    DWORD PTR [rbp+0x418],edx
0x1409187ae: mov    rdx,rbx
0x1409187b1: lea    r8,[rbp+0x418]
0x1409187b8: lea    rcx,[rbp+0x2f0]
0x1409187bf: call   0x1400b9a10
0x1409187c4: jmp    0x1409188c8
0x1409187c9: call   0x14006ee10
0x1409187ce: mov    rcx,QWORD PTR [rax]
0x1409187d1: mov    eax,DWORD PTR [rcx+0x4]
0x1409187d4: mov    DWORD PTR [rbp+0x41c],eax
0x1409187da: lea    rdx,[rbp+0x41c]
0x1409187e1: lea    rcx,[rbp+0x2f0]
0x1409187e8: jmp    0x1409188c3
0x1409187ed: test   dil,dil
0x1409187f0: je     0x1409188c8
0x1409187f6: lea    rcx,[rbp-0x78]
0x1409187fa: call   0x14006ee10
0x1409187ff: mov    rdx,rax
0x140918802: lea    rcx,[rbp+0x798]
0x140918809: call   0x1400b9980
0x14091880e: lea    rcx,[rbp-0x78]
0x140918812: call   0x14006ee10
0x140918817: mov    rcx,QWORD PTR [rax]
0x14091881a: movsx  ecx,WORD PTR [rcx+0x2]
0x14091881e: lea    rdx,[rbp+0x440]
0x140918825: call   0x1400b9f70
0x14091882a: movsxd rdi,eax
0x14091882d: lea    rcx,[rbp-0x78]
0x140918831: call   0x14006ee10
0x140918836: mov    rcx,QWORD PTR [rax]
0x140918839: cmp    edi,0xffffffff
0x14091883c: je     0x140918854
0x14091883e: mov    ebx,DWORD PTR [rcx+0x4]
0x140918841: mov    rdx,rdi
0x140918844: lea    rcx,[rbp+0x2a8]
0x14091884b: call   0x14006f360
0x140918850: add    DWORD PTR [rax],ebx
0x140918852: jmp    0x1409188c8
0x140918854: movsx  ecx,WORD PTR [rcx+0x2]
0x140918858: lea    rdx,[rbp+0x440]
0x14091885f: call   0x1400b9e70
0x140918864: movsxd rbx,eax
0x140918867: lea    rcx,[rbp+0x2a8]
0x14091886e: call   0x14006f370
0x140918873: lea    rcx,[rbp-0x78]
0x140918877: cmp    ebx,eax
0x140918879: jge    0x1409188a4
0x14091887b: call   0x14006ee10
0x140918880: mov    rcx,QWORD PTR [rax]
0x140918883: mov    edx,DWORD PTR [rcx+0x4]
0x140918886: mov    DWORD PTR [rbp+0x420],edx
0x14091888c: mov    rdx,rbx
0x14091888f: lea    r8,[rbp+0x420]
0x140918896: lea    rcx,[rbp+0x2a8]
0x14091889d: call   0x1400b9a10
0x1409188a2: jmp    0x1409188c8
0x1409188a4: call   0x14006ee10
0x1409188a9: mov    rcx,QWORD PTR [rax]
0x1409188ac: mov    eax,DWORD PTR [rcx+0x4]
0x1409188af: mov    DWORD PTR [rbp+0x338],eax
0x1409188b5: lea    rdx,[rbp+0x338]
0x1409188bc: lea    rcx,[rbp+0x2a8]
0x1409188c3: call   0x14006f410
0x1409188c8: mov    r13,QWORD PTR [rsp+0x58]
0x1409188cd: lea    rcx,[rbp-0x78]
0x1409188d1: call   0x14006ee00
0x1409188d6: lea    r8,[rbp+0x4c0]
0x1409188dd: lea    rdx,[rbp+0x21]
0x1409188e1: lea    rcx,[rbp-0x78]
0x1409188e5: call   0x14006ee20
0x1409188ea: xor    edx,edx
0x1409188ec: movzx  ecx,BYTE PTR [rax]
0x1409188ef: call   0x1400657b0
0x1409188f4: test   al,al
0x1409188f6: mov    edi,DWORD PTR [rbp-0x64]
0x1409188f9: movzx  r14d,BYTE PTR [rsp+0x50]
0x1409188ff: jne    0x140918190
0x140918905: mov    esi,DWORD PTR [rbp-0x38]
0x140918908: mov    r12d,DWORD PTR [rsp+0x54]
0x14091890d: mov    r15d,r12d
0x140918910: mov    rdi,QWORD PTR [rbp-0x50]
0x140918914: lea    rdx,[rbp+0x58]
0x140918918: lea    rcx,[rdi+0xd8]
0x14091891f: call   0x14006f240
0x140918924: lea    rdx,[rbp+0x4c8]
0x14091892b: lea    rcx,[rdi+0xd8]
0x140918932: call   0x14006f230
0x140918937: lea    r8,[rbp+0x4c8]
0x14091893e: lea    rdx,[rbp+0x1c]
0x140918942: lea    rcx,[rbp+0x58]
0x140918946: call   0x14006ee20
0x14091894b: mov    DWORD PTR [rbp-0x6c],esi
0x14091894e: xor    edx,edx
0x140918950: movzx  ecx,BYTE PTR [rax]
0x140918953: call   0x1400657b0
0x140918958: test   al,al
0x14091895a: je     0x140918a4f
0x140918960: mov    edi,esi
0x140918962: movzx  ebx,BYTE PTR [rsp+0x50]
0x140918967: lea    rcx,[rbp+0x58]
0x14091896b: call   0x14006ee10
0x140918970: mov    rcx,QWORD PTR [rax]
0x140918973: cmp    DWORD PTR [rcx],0x0
0x140918976: jle    0x140918a10
0x14091897c: lea    rcx,[rbp+0x58]
0x140918980: call   0x14006ee10
0x140918985: mov    rcx,QWORD PTR [rax]
0x140918988: mov    eax,DWORD PTR [r13+0x4]
0x14091898c: cmp    DWORD PTR [rcx+0xc],eax
0x14091898f: je     0x1409189a7
0x140918991: lea    rcx,[rbp+0x58]
0x140918995: call   0x14006ee10
0x14091899a: mov    rcx,QWORD PTR [rax]
0x14091899d: cmp    DWORD PTR [rcx+0xc],0xffffffff
0x1409189a1: jne    0x140918a10
0x1409189a3: test   bl,bl
0x1409189a5: je     0x140918a10
0x1409189a7: lea    rcx,[rbp+0x58]
0x1409189ab: call   0x14006ee10
0x1409189b0: mov    rcx,QWORD PTR [rax]
0x1409189b3: cmp    DWORD PTR [rcx+0x18],0xffffffff
0x1409189b7: lea    rcx,[rbp+0x58]
0x1409189bb: je     0x1409189df
0x1409189bd: mov    BYTE PTR [rsp+0x60],0x1
0x1409189c2: call   0x14006ee10
0x1409189c7: mov    rcx,QWORD PTR [rax]
0x1409189ca: add    r15d,DWORD PTR [rcx]
0x1409189cd: lea    rcx,[rbp+0x58]
0x1409189d1: call   0x14006ee10
0x1409189d6: lea    rcx,[rbp+0x828]
0x1409189dd: jmp    0x140918a08
0x1409189df: call   0x14006ee10
0x1409189e4: mov    rcx,QWORD PTR [rax]
0x1409189e7: add    r12d,DWORD PTR [rcx]
0x1409189ea: lea    rcx,[rbp+0x58]
0x1409189ee: call   0x14006ee10
0x1409189f3: mov    rcx,QWORD PTR [rax]
0x1409189f6: add    edi,DWORD PTR [rcx]
0x1409189f8: lea    rcx,[rbp+0x58]
0x1409189fc: call   0x14006ee10
0x140918a01: lea    rcx,[rbp+0x2d8]
0x140918a08: mov    rdx,rax
0x140918a0b: call   0x1400b9980
0x140918a10: lea    rcx,[rbp+0x58]
0x140918a14: call   0x14006ee00
0x140918a19: lea    r8,[rbp+0x4c8]
0x140918a20: lea    rdx,[rbp+0x1c]
0x140918a24: lea    rcx,[rbp+0x58]
0x140918a28: call   0x14006ee20
0x140918a2d: xor    edx,edx
0x140918a2f: movzx  ecx,BYTE PTR [rax]
0x140918a32: call   0x1400657b0
0x140918a37: test   al,al
0x140918a39: jne    0x140918967
0x140918a3f: mov    DWORD PTR [rbp-0x6c],edi
0x140918a42: mov    DWORD PTR [rbp-0x68],r15d
0x140918a46: mov    DWORD PTR [rsp+0x54],r12d
0x140918a4b: mov    rdi,QWORD PTR [rbp-0x50]
0x140918a4f: lea    rdx,[rbp+0x1f0]
0x140918a56: lea    rcx,[r13+0x1450]
0x140918a5d: call   0x14006f240
0x140918a62: lea    rdx,[rbp+0x4e0]
0x140918a69: lea    rcx,[r13+0x1450]
0x140918a70: call   0x14006f230
0x140918a75: lea    r8,[rbp+0x4e0]
0x140918a7c: lea    rdx,[rbp-0xb]
0x140918a80: lea    rcx,[rbp+0x1f0]
0x140918a87: call   0x14006ee20
0x140918a8c: xor    edx,edx
0x140918a8e: movzx  ecx,BYTE PTR [rax]
0x140918a91: call   0x1400657b0
0x140918a96: test   al,al
0x140918a98: je     0x140918fdd
0x140918a9e: xchg   ax,ax
0x140918aa0: lea    rcx,[rbp+0x1f0]
0x140918aa7: call   0x14006ee10
0x140918aac: mov    rcx,QWORD PTR [rax]
0x140918aaf: mov    QWORD PTR [rbp-0x30],rcx
0x140918ab3: mov    rcx,QWORD PTR [rcx+0x10]
0x140918ab7: add    rcx,0xc8
0x140918abe: mov    ebx,0x7
0x140918ac3: mov    edx,ebx
0x140918ac5: call   0x140071f90
0x140918aca: mov    rcx,QWORD PTR [rbp-0x30]
0x140918ace: test   al,al
0x140918ad0: jne    0x140918ae0
0x140918ad2: mov    rax,QWORD PTR [rcx+0x10]
0x140918ad6: cmp    DWORD PTR [rax+0x30],0xffffffff
0x140918ada: jne    0x140918f9f
0x140918ae0: inc    r12d
0x140918ae3: mov    DWORD PTR [rsp+0x54],r12d
0x140918ae8: mov    rax,QWORD PTR [rcx+0x18]
0x140918aec: test   rax,rax
0x140918aef: je     0x140918afe
0x140918af1: cmp    DWORD PTR [rax+0x110],0x0
0x140918af8: jl     0x140918f9f
0x140918afe: mov    rcx,QWORD PTR [rcx+0x10]
0x140918b02: movzx  eax,WORD PTR [rcx]
0x140918b05: cmp    ax,0x67
0x140918b09: je     0x140918f9f
0x140918b0f: cmp    ax,0x68
0x140918b13: je     0x140918f9f
0x140918b19: mov    r12d,0xffffffff
0x140918b1f: mov    r8d,r12d
0x140918b22: mov    edx,r12d
0x140918b25: call   0x140b97440
0x140918b2a: test   ax,ax
0x140918b2d: je     0x140918ba4
0x140918b2f: xor    bl,bl
0x140918b31: mov    rax,QWORD PTR [rbp-0x30]
0x140918b35: mov    edx,0x13
0x140918b3a: mov    DWORD PTR [rsp+0x20],r12d
0x140918b3f: mov    r9d,r12d
0x140918b42: mov    r8d,DWORD PTR [r13+0x4]
0x140918b46: mov    rcx,QWORD PTR [rax+0x10]
0x140918b4a: call   0x140beb8a0
0x140918b4f: test   al,al
0x140918b51: je     0x140918b66
0x140918b53: movzx  ebx,bl
0x140918b56: cmp    DWORD PTR [r13+0x13f8],0x2
0x140918b5e: mov    eax,0x1
0x140918b63: cmovge ebx,eax
0x140918b66: mov    rax,QWORD PTR [rbp-0x30]
0x140918b6a: mov    rdx,QWORD PTR [rax+0x10]
0x140918b6e: mov    r9d,0x85
0x140918b74: movzx  r8d,WORD PTR [rdx+0x4]
0x140918b79: movzx  edx,WORD PTR [rdx+0x2]
0x140918b7d: lea    rcx,[rip+0x1bd3ec4]        # 0x1424eca48
0x140918b84: call   0x140072850
0x140918b89: test   al,al
0x140918b8b: je     0x140918b97
0x140918b8d: cmp    DWORD PTR [r13+0x13f8],0x2
0x140918b95: jge    0x140918b9f
0x140918b97: test   bl,bl
0x140918b99: je     0x140918f9f
0x140918b9f: mov    ebx,0x7
0x140918ba4: mov    rax,QWORD PTR [rbp-0x30]
0x140918ba8: mov    rcx,QWORD PTR [rax+0x10]
0x140918bac: mov    rdx,QWORD PTR [rcx+0x130]
0x140918bb3: test   rdx,rdx
0x140918bb6: je     0x140918f9f
0x140918bbc: mov    rdx,QWORD PTR [rdx+0x28]
0x140918bc0: test   rdx,rdx
0x140918bc3: je     0x140918f9f
0x140918bc9: mov    eax,DWORD PTR [rdi+0x88]
0x140918bcf: cmp    DWORD PTR [rdx+0x4],eax
0x140918bd2: jne    0x140918f9f
0x140918bd8: xor    edx,edx
0x140918bda: mov    DWORD PTR [rsp+0x20],r12d
0x140918bdf: mov    r9d,r12d
0x140918be2: mov    r8d,r12d
0x140918be5: call   0x140b98ad0
0x140918bea: test   al,al
0x140918bec: jne    0x140918f9f
0x140918bf2: mov    rax,QWORD PTR [rbp-0x30]
0x140918bf6: mov    edx,ebx
0x140918bf8: mov    r8d,r12d
0x140918bfb: mov    rcx,QWORD PTR [rax+0x10]
0x140918bff: call   0x140b98d90
0x140918c04: test   ax,ax
0x140918c07: jne    0x140918f9f
0x140918c0d: mov    rax,QWORD PTR [rbp-0x30]
0x140918c11: mov    edx,0x6
0x140918c16: mov    r8d,r12d
0x140918c19: mov    rcx,QWORD PTR [rax+0x10]
0x140918c1d: call   0x140b973c0
0x140918c22: test   ax,ax
0x140918c25: jne    0x140918f9f
0x140918c2b: mov    rax,QWORD PTR [rbp-0x30]
0x140918c2f: mov    edx,0x4
0x140918c34: mov    r8d,r12d
0x140918c37: mov    rcx,QWORD PTR [rax+0x10]
0x140918c3b: call   0x140b973c0
0x140918c40: test   ax,ax
0x140918c43: jne    0x140918f9f
0x140918c49: mov    rdx,QWORD PTR [rdi+0x308]
0x140918c50: mov    r9,QWORD PTR [rbp-0x30]
0x140918c54: xor    ebx,ebx
0x140918c56: test   rdx,rdx
0x140918c59: je     0x140918c86
0x140918c5b: lea    rax,[rdx+0x2d8f4]
0x140918c62: mov    ecx,ebx
0x140918c64: mov    edx,DWORD PTR [rdx+0x4d4c4]
0x140918c6a: test   edx,edx
0x140918c6c: jle    0x140918c86
0x140918c6e: mov    r8d,DWORD PTR [r9]
0x140918c71: cmp    DWORD PTR [rax],r8d
0x140918c74: je     0x140918f9f
0x140918c7a: inc    ecx
0x140918c7c: add    rax,0x104
0x140918c82: cmp    ecx,edx
0x140918c84: jl     0x140918c71
0x140918c86: xor    r14b,r14b
0x140918c89: xor    r15b,r15b
0x140918c8c: xor    sil,sil
0x140918c8f: mov    rdx,QWORD PTR [r9+0x10]
0x140918c93: movzx  edx,WORD PTR [rdx+0x2]
0x140918c97: lea    rcx,[rip+0x1bd3daa]        # 0x1424eca48
0x140918c9e: call   0x1400bba60
0x140918ca3: test   rax,rax
0x140918ca6: je     0x140918de8
0x140918cac: movzx  edi,bx
0x140918caf: lea    rbx,[rax+0x178]
0x140918cb6: lea    rdx,[rbp+0x1e0]
0x140918cbd: mov    rcx,rbx
0x140918cc0: call   0x14006f240
0x140918cc5: lea    rdx,[rbp+0x4d0]
0x140918ccc: mov    rcx,rbx
0x140918ccf: call   0x14006f230
0x140918cd4: lea    r8,[rbp+0x4d0]
0x140918cdb: lea    rdx,[rbp+0x22]
0x140918cdf: lea    rcx,[rbp+0x1e0]
0x140918ce6: call   0x14006ee20
0x140918ceb: xor    edx,edx
0x140918ced: movzx  ecx,BYTE PTR [rax]
0x140918cf0: call   0x1400657b0
0x140918cf5: test   al,al
0x140918cf7: je     0x140918de8
0x140918cfd: nop    DWORD PTR [rax]
0x140918d00: lea    rcx,[rbp+0x1e0]
0x140918d07: call   0x14006ee10
0x140918d0c: mov    rax,QWORD PTR [rbp-0x30]
0x140918d10: mov    rcx,QWORD PTR [rax+0x10]
0x140918d14: movsx  ecx,WORD PTR [rcx+0x2]
0x140918d18: lea    r9,[r13+0xc40]
0x140918d1f: lea    r8,[r13+0xb98]
0x140918d26: movzx  edx,di
0x140918d29: call   0x1400eb4f0
0x140918d2e: cmp    eax,r12d
0x140918d31: je     0x140918d38
0x140918d33: mov    r14b,0x1
0x140918d36: jmp    0x140918d95
0x140918d38: lea    r9,[r13+0xc58]
0x140918d3f: lea    r8,[r13+0xbb0]
0x140918d46: mov    rax,QWORD PTR [rbp-0x30]
0x140918d4a: mov    rcx,QWORD PTR [rax+0x10]
0x140918d4e: movsx  ecx,WORD PTR [rcx+0x2]
0x140918d52: movzx  edx,di
0x140918d55: call   0x1400eb4f0
0x140918d5a: cmp    eax,r12d
0x140918d5d: je     0x140918d64
0x140918d5f: mov    r15b,0x1
0x140918d62: jmp    0x140918d95
0x140918d64: lea    r9,[r13+0xc10]
0x140918d6b: lea    r8,[r13+0xb68]
0x140918d72: mov    rax,QWORD PTR [rbp-0x30]
0x140918d76: mov    rcx,QWORD PTR [rax+0x10]
0x140918d7a: movsx  ecx,WORD PTR [rcx+0x2]
0x140918d7e: movzx  edx,di
0x140918d81: call   0x1400eb4f0
0x140918d86: movzx  esi,sil
0x140918d8a: cmp    eax,r12d
0x140918d8d: mov    eax,0x1
0x140918d92: cmovne esi,eax
0x140918d95: lea    rcx,[rbp+0x1e0]
0x140918d9c: call   0x14006ee00
0x140918da1: inc    di
0x140918da4: lea    r8,[rbp+0x4d0]
0x140918dab: lea    rdx,[rbp+0x22]
0x140918daf: lea    rcx,[rbp+0x1e0]
0x140918db6: call   0x14006ee20
0x140918dbb: xor    edx,edx
0x140918dbd: movzx  ecx,BYTE PTR [rax]
0x140918dc0: call   0x1400657b0
0x140918dc5: test   al,al
0x140918dc7: jne    0x140918d00
0x140918dcd: test   r14b,r14b
0x140918dd0: jne    0x140918f9f
0x140918dd6: test   r15b,r15b
0x140918dd9: jne    0x140918f9f
0x140918ddf: test   sil,sil
0x140918de2: jne    0x140918f9f
0x140918de8: mov    rdx,QWORD PTR [rbp-0x30]
0x140918dec: mov    rax,QWORD PTR [rdx+0x10]
0x140918df0: mov    rcx,QWORD PTR [rax+0x130]
0x140918df7: test   rcx,rcx
0x140918dfa: je     0x140918e40
0x140918dfc: mov    rcx,QWORD PTR [rcx+0x40]
0x140918e00: test   rcx,rcx
0x140918e03: je     0x140918e40
0x140918e05: call   0x14006ee50
0x140918e0a: mov    rdx,QWORD PTR [rbp-0x30]
0x140918e0e: test   rax,rax
0x140918e11: je     0x140918e40
0x140918e13: mov    rax,QWORD PTR [rdx+0x10]
0x140918e17: mov    rcx,QWORD PTR [rax+0x130]
0x140918e1e: mov    rax,QWORD PTR [rcx+0x48]
0x140918e22: test   rax,rax
0x140918e25: je     0x140918e30
0x140918e27: cmp    DWORD PTR [rax+0x144],0xffffffff
0x140918e2e: jne    0x140918e40
0x140918e30: mov    BYTE PTR [rbp-0x60],0x1
0x140918e34: lea    rcx,[rbp+0x6d0]
0x140918e3b: jmp    0x140918f96
0x140918e40: mov    rax,QWORD PTR [rdx+0x10]
0x140918e44: mov    rcx,QWORD PTR [rax+0x130]
0x140918e4b: test   rcx,rcx
0x140918e4e: je     0x140918f9f
0x140918e54: mov    rax,QWORD PTR [rcx+0x8]
0x140918e58: test   rax,rax
0x140918e5b: je     0x140918e7b
0x140918e5d: movzx  eax,WORD PTR [rax+0x60]
0x140918e61: sub    ax,0x65
0x140918e65: mov    edx,0xfff7
0x140918e6a: test   dx,ax
0x140918e6d: jne    0x140918e7b
0x140918e6f: lea    rcx,[rbp+0x6b8]
0x140918e76: jmp    0x140918f96
0x140918e7b: mov    rcx,QWORD PTR [rcx+0x8]
0x140918e7f: test   rcx,rcx
0x140918e82: je     0x140918f9f
0x140918e88: lea    rdx,[rbp+0x1e8]
0x140918e8f: call   0x14006f240
0x140918e94: mov    rax,QWORD PTR [rbp-0x30]
0x140918e98: mov    rcx,QWORD PTR [rax+0x10]
0x140918e9c: mov    rax,QWORD PTR [rcx+0x130]
0x140918ea3: lea    rdx,[rbp+0x4d8]
0x140918eaa: mov    rcx,QWORD PTR [rax+0x8]
0x140918eae: call   0x14006f230
0x140918eb3: lea    r8,[rbp+0x4d8]
0x140918eba: lea    rdx,[rbp-0xc]
0x140918ebe: lea    rcx,[rbp+0x1e8]
0x140918ec5: call   0x14006ee20
0x140918eca: xor    edx,edx
0x140918ecc: movzx  ecx,BYTE PTR [rax]
0x140918ecf: call   0x1400657b0
0x140918ed4: test   al,al
0x140918ed6: je     0x140918f46
0x140918ed8: nop    DWORD PTR [rax+rax*1+0x0]
0x140918ee0: lea    rcx,[rbp+0x1e8]
0x140918ee7: call   0x14006ee10
0x140918eec: movsx  ecx,WORD PTR [rax]
0x140918eef: add    ecx,0xffffffdb
0x140918ef2: cmp    ecx,0x41
0x140918ef5: ja     0x140918f15
0x140918ef7: movsxd rax,ecx
0x140918efa: lea    rdx,[rip+0xffffffffff6e70ff]        # 0x140000000
0x140918f01: movzx  eax,BYTE PTR [rdx+rax*1+0x91e12c]
0x140918f09: mov    ecx,DWORD PTR [rdx+rax*4+0x91e124]
0x140918f10: add    rcx,rdx
0x140918f13: jmp    rcx
0x140918f15: lea    rcx,[rbp+0x1e8]
0x140918f1c: call   0x14006f430
0x140918f21: lea    r8,[rbp+0x4d8]
0x140918f28: lea    rdx,[rbp-0xc]
0x140918f2c: lea    rcx,[rbp+0x1e8]
0x140918f33: call   0x14006ee20
0x140918f38: xor    edx,edx
0x140918f3a: movzx  ecx,BYTE PTR [rax]
0x140918f3d: call   0x1400657b0
0x140918f42: test   al,al
0x140918f44: jne    0x140918ee0
0x140918f46: mov    rax,QWORD PTR [rbp-0x30]
0x140918f4a: mov    rdx,QWORD PTR [rax+0x10]
0x140918f4e: mov    r9d,0x85
0x140918f54: movzx  r8d,WORD PTR [rdx+0x4]
0x140918f59: movzx  edx,WORD PTR [rdx+0x2]
0x140918f5d: lea    rcx,[rip+0x1bd3ae4]        # 0x1424eca48
0x140918f64: call   0x140072850
0x140918f69: test   al,al
0x140918f6b: jne    0x140918f8f
0x140918f6d: mov    rax,QWORD PTR [rbp-0x30]
0x140918f71: mov    edx,0x13
0x140918f76: mov    DWORD PTR [rsp+0x20],r12d
0x140918f7b: mov    r9d,r12d
0x140918f7e: mov    r8d,DWORD PTR [r13+0x4]
0x140918f82: mov    rcx,QWORD PTR [rax+0x10]
0x140918f86: call   0x140beb8a0
0x140918f8b: test   al,al
0x140918f8d: je     0x140918f9f
0x140918f8f: lea    rcx,[rbp+0x308]
0x140918f96: lea    rdx,[rbp-0x30]
0x140918f9a: call   0x1400b9980
0x140918f9f: lea    rcx,[rbp+0x1f0]
0x140918fa6: call   0x14006ee00
0x140918fab: lea    r8,[rbp+0x4e0]
0x140918fb2: lea    rdx,[rbp-0xb]
0x140918fb6: lea    rcx,[rbp+0x1f0]
0x140918fbd: call   0x14006ee20
0x140918fc2: xor    edx,edx
0x140918fc4: movzx  ecx,BYTE PTR [rax]
0x140918fc7: call   0x1400657b0
0x140918fcc: test   al,al
0x140918fce: mov    r12d,DWORD PTR [rsp+0x54]
0x140918fd3: mov    rdi,QWORD PTR [rbp-0x50]
0x140918fd7: jne    0x140918aa0
0x140918fdd: lea    rdi,[rip+0x1a7824c]        # 0x142391230
0x140918fe4: mov    rcx,rdi
0x140918fe7: call   0x140e65b70
0x140918fec: xor    r14d,r14d
0x140918fef: mov    r15d,r14d
0x140918ff2: mov    QWORD PTR [rbp-0x80],r14
0x140918ff6: mov    DWORD PTR [rsp+0x64],0xa
0x140918ffe: mov    DWORD PTR [rbp-0x5c],r14d
0x140919002: mov    r13d,r14d
0x140919005: mov    DWORD PTR [rbp-0x70],r14d
0x140919009: mov    r12d,r14d
0x14091900c: mov    DWORD PTR [rsp+0x68],r14d
0x140919011: mov    DWORD PTR [rsp+0x6c],0x4
0x140919019: mov    ecx,0x14
0x14091901e: cmp    BYTE PTR [rbp-0x60],r14b
0x140919022: jne    0x1409192f9
0x140919028: cmp    BYTE PTR [rsp+0x60],r12b
0x14091902d: jne    0x1409192f9
0x140919033: xor    bl,bl
0x140919035: mov    rsi,QWORD PTR [rsp+0x58]
0x14091903a: mov    rcx,QWORD PTR [rsi+0x8]
0x14091903e: add    rcx,0x3a0
0x140919045: mov    edx,0x2d
0x14091904a: call   0x140071f90
0x14091904f: test   al,al
0x140919051: jne    0x140919187
0x140919057: mov    dl,0x1
0x140919059: mov    r8,QWORD PTR [rsi+0x8]
0x14091905d: movsx  rax,WORD PTR [r8+0x37b0]
0x140919065: test   ax,ax
0x140919068: jle    0x140919087
0x14091906a: cmp    eax,0x5
0x14091906d: jg     0x140919087
0x14091906f: mov    rcx,rax
0x140919072: movsx  eax,WORD PTR [rip+0x1a78513]        # 0x14239158c
0x140919079: movzx  edx,dl
0x14091907c: cmp    eax,DWORD PTR [rdi+rcx*4+0x8df4]
0x140919083: cmovl  edx,r14d
0x140919087: movsx  rax,WORD PTR [r8+0x37b2]
0x14091908f: test   ax,ax
0x140919092: jle    0x1409190ad
0x140919094: cmp    eax,0x5
0x140919097: jg     0x1409190ad
0x140919099: movzx  edx,dl
0x14091909c: mov    eax,DWORD PTR [rdi+rax*4+0x8e08]
0x1409190a3: cmp    DWORD PTR [rip+0x1a786d7],eax        # 0x142391780
0x1409190a9: cmovl  edx,r14d
0x1409190ad: movsx  rax,WORD PTR [r8+0x37b4]
0x1409190b5: test   ax,ax
0x1409190b8: jle    0x1409190ce
0x1409190ba: cmp    eax,0x5
0x1409190bd: jg     0x1409190ce
0x1409190bf: mov    eax,DWORD PTR [rdi+rax*4+0x8e1c]
0x1409190c6: cmp    DWORD PTR [rip+0x1a786dc],eax        # 0x1423917a8
0x1409190cc: jl     0x1409190d2
0x1409190ce: test   dl,dl
0x1409190d0: jne    0x1409190de
0x1409190d2: test   DWORD PTR [rsi+0x9c],0x800000
0x1409190dc: je     0x1409190e0
0x1409190de: mov    bl,0x1
0x1409190e0: mov    eax,DWORD PTR [rip+0x1a80fb6]        # 0x14239a09c
0x1409190e6: cmp    DWORD PTR [rsi+0x13f4],eax
0x1409190ec: jl     0x140919181
0x1409190f2: test   bl,bl
0x1409190f4: je     0x140919181
0x1409190fa: mov    ecx,0x64
0x1409190ff: call   0x140071f30
0x140919104: cmp    eax,DWORD PTR [rip+0x1a80f9a]        # 0x14239a0a4
0x14091910a: jge    0x140919181
0x14091910c: mov    eax,DWORD PTR [rip+0x1a80f8a]        # 0x14239a09c
0x140919112: sub    eax,DWORD PTR [rip+0x1a80f88]        # 0x14239a0a0
0x140919118: mov    DWORD PTR [rsi+0x13f4],eax
0x14091911e: inc    DWORD PTR [rsi+0x13f4]
0x140919124: mov    DWORD PTR [rsp+0x6c],r14d
0x140919129: mov    eax,DWORD PTR [rip+0x1a80f59]        # 0x14239a088
0x14091912f: mov    DWORD PTR [rsp+0x64],eax
0x140919133: mov    eax,DWORD PTR [rsi+0x13f8]
0x140919139: test   eax,eax
0x14091913b: jne    0x14091914e
0x14091913d: mov    r14d,DWORD PTR [rip+0x1a80f48]        # 0x14239a08c
0x140919144: mov    DWORD PTR [rsp+0x68],r14d
0x140919149: jmp    0x1409193a6
0x14091914e: cmp    eax,0x1
0x140919151: jne    0x140919164
0x140919153: mov    r14d,DWORD PTR [rip+0x1a80f36]        # 0x14239a090
0x14091915a: mov    DWORD PTR [rsp+0x68],r14d
0x14091915f: jmp    0x1409193a6
0x140919164: lea    r14d,[rax-0x2]
0x140919168: imul   r14d,DWORD PTR [rip+0x1a80f28]        # 0x14239a098
0x140919170: add    r14d,DWORD PTR [rip+0x1a80f1d]        # 0x14239a094
0x140919177: mov    DWORD PTR [rsp+0x68],r14d
0x14091917c: jmp    0x1409193a6
0x140919181: inc    DWORD PTR [rsi+0x13f4]
0x140919187: lea    rcx,[rbp+0x6b8]
0x14091918e: call   0x14006ee50
0x140919193: test   rax,rax
0x140919196: jne    0x1409191ba
0x140919198: lea    rcx,[rbp+0x2d8]
0x14091919f: call   0x14006ee50
0x1409191a4: test   rax,rax
0x1409191a7: jne    0x1409191ba
0x1409191a9: lea    rcx,[rbp+0x260]
0x1409191b0: call   0x14006ee50
0x1409191b5: test   rax,rax
0x1409191b8: je     0x1409191da
0x1409191ba: cmp    BYTE PTR [rsp+0x51],r12b
0x1409191bf: jne    0x1409191fd
0x1409191c1: mov    rcx,QWORD PTR [rsi+0x8]
0x1409191c5: add    rcx,0x3a0
0x1409191cc: mov    edx,0x8
0x1409191d1: call   0x140071f90
0x1409191d6: test   al,al
0x1409191d8: jne    0x1409191fd
0x1409191da: test   bl,bl
0x1409191dc: jne    0x14091df14
0x1409191e2: mov    eax,DWORD PTR [rsi+0x13f4]
0x1409191e8: test   eax,eax
0x1409191ea: jle    0x14091df14
0x1409191f0: dec    eax
0x1409191f2: mov    DWORD PTR [rsi+0x13f4],eax
0x1409191f8: jmp    0x14091df14
0x1409191fd: mov    DWORD PTR [rsp+0x6c],0x4
0x140919205: mov    ecx,0x3
0x14091920a: call   0x140071f30
0x14091920f: lea    ebx,[rax+0x2]
0x140919212: mov    ecx,DWORD PTR [rsi+0x13f4]
0x140919218: cmp    ecx,0x1
0x14091921b: jne    0x14091922a
0x14091921d: mov    r12d,ebx
0x140919220: mov    edi,r14d
0x140919223: mov    DWORD PTR [rsp+0x64],r14d
0x140919228: jmp    0x140919299
0x14091922a: mov    ebx,r14d
0x14091922d: cmp    ecx,0x3
0x140919230: setge  bl
0x140919233: inc    ebx
0x140919235: add    ebx,eax
0x140919237: cmp    ecx,0x5
0x14091923a: jl     0x14091923e
0x14091923c: inc    ebx
0x14091923e: mov    r12d,ebx
0x140919241: cmp    ecx,0xa
0x140919244: jl     0x14091924d
0x140919246: inc    ebx
0x140919248: mov    r12d,ebx
0x14091924b: jmp    0x14091925f
0x14091924d: mov    edi,r14d
0x140919250: mov    DWORD PTR [rsp+0x64],r14d
0x140919255: mov    DWORD PTR [rsp+0x68],r14d
0x14091925a: cmp    ecx,0x3
0x14091925d: jl     0x140919273
0x14091925f: mov    edi,0x6
0x140919264: mov    DWORD PTR [rsp+0x64],edi
0x140919268: mov    r14d,0x64
0x14091926e: mov    DWORD PTR [rsp+0x68],r14d
0x140919273: cmp    ecx,0x5
0x140919276: jl     0x14091929e
0x140919278: mov    ecx,0x2
0x14091927d: call   0x140071f30
0x140919282: lea    ecx,[rax+rax*2]
0x140919285: lea    edi,[rdi+rcx*2]
0x140919288: add    edi,0x6
0x14091928b: mov    DWORD PTR [rsp+0x64],edi
0x14091928f: imul   eax,DWORD PTR [rsi+0x13f4],0x32
0x140919296: add    r14d,eax
0x140919299: mov    DWORD PTR [rsp+0x68],r14d
0x14091929e: test   edi,edi
0x1409192a0: jle    0x1409192b1
0x1409192a2: imul   ecx,DWORD PTR [rsi+0x13f8],0x64
0x1409192a9: add    r14d,ecx
0x1409192ac: mov    DWORD PTR [rsp+0x68],r14d
0x1409192b1: mov    rcx,QWORD PTR [rsi+0x8]
0x1409192b5: add    rcx,0x3a0
0x1409192bc: mov    edx,0x2d
0x1409192c1: call   0x140071f90
0x1409192c6: test   al,al
0x1409192c8: je     0x1409193a6
0x1409192ce: mov    eax,ebx
0x1409192d0: cdq
0x1409192d1: sub    eax,edx
0x1409192d3: sar    eax,1
0x1409192d5: mov    ecx,DWORD PTR [rsi+0x13f4]
0x1409192db: sub    ecx,eax
0x1409192dd: sub    ecx,0x1
0x1409192e0: mov    DWORD PTR [rsi+0x13f4],ecx
0x1409192e6: jns    0x1409193a6
0x1409192ec: xor    eax,eax
0x1409192ee: mov    DWORD PTR [rsi+0x13f4],eax
0x1409192f4: jmp    0x1409193a6
0x1409192f9: movsx  edi,WORD PTR [rip+0x1a77fd4]        # 0x1423912d4
0x140919300: lea    ebx,[rdi+rdi*4]
0x140919303: add    ebx,ebx
0x140919305: mov    eax,ebx
0x140919307: cmp    ebx,ecx
0x140919309: cmovg  eax,ecx
0x14091930c: mov    rsi,QWORD PTR [rsp+0x58]
0x140919311: cmp    DWORD PTR [rsi+0x13f4],eax
0x140919317: jl     0x14091936d
0x140919319: mov    ecx,0x2
0x14091931e: call   0x140071f30
0x140919323: test   eax,eax
0x140919325: je     0x14091936d
0x140919327: mov    DWORD PTR [rsp+0x6c],r14d
0x14091932c: mov    eax,DWORD PTR [rip+0x1a80d56]        # 0x14239a088
0x140919332: cdq
0x140919333: sub    eax,edx
0x140919335: sar    eax,1
0x140919337: mov    r14d,eax
0x14091933a: mov    DWORD PTR [rsp+0x64],eax
0x14091933e: lea    ecx,[rbx+0x1]
0x140919341: call   0x140071f30
0x140919346: mov    ebx,eax
0x140919348: mov    ecx,0x5
0x14091934d: call   0x140071f30
0x140919352: add    ebx,eax
0x140919354: lea    ecx,[rdi+rdi*4]
0x140919357: lea    eax,[rcx*4+0x1]
0x14091935e: add    eax,ebx
0x140919360: cmp    eax,r14d
0x140919363: cmovg  eax,r14d
0x140919367: mov    DWORD PTR [rbp-0x5c],eax
0x14091936a: xor    r14d,r14d
0x14091936d: lea    rcx,[rbp+0x6d0]
0x140919374: call   0x14006ee50
0x140919379: lea    r13d,[rdi+0x1]
0x14091937d: cmp    eax,r13d
0x140919380: cmovle r13d,eax
0x140919384: mov    DWORD PTR [rbp-0x70],r13d
0x140919388: cmp    DWORD PTR [rsp+0x6c],r12d
0x14091938d: je     0x140919398
0x14091938f: sub    DWORD PTR [rsi+0x13f4],0xa
0x140919396: jns    0x1409193a3
0x140919398: mov    DWORD PTR [rbp-0x70],r13d
0x14091939c: mov    DWORD PTR [rsi+0x13f4],r14d
0x1409193a3: mov    r14d,r12d
0x1409193a6: mov    eax,DWORD PTR [rsp+0x54]
0x1409193aa: cdq
0x1409193ab: sub    eax,edx
0x1409193ad: sar    eax,1
0x1409193af: mov    edx,DWORD PTR [rsp+0x64]
0x1409193b3: cmp    edx,eax
0x1409193b5: jle    0x1409193c3
0x1409193b7: cmp    BYTE PTR [rsp+0x70],r15b
0x1409193bc: cmove  edx,eax
0x1409193bf: mov    DWORD PTR [rsp+0x64],edx
0x1409193c3: mov    eax,0x32
0x1409193c8: test   edx,edx
0x1409193ca: jle    0x1409193d8
0x1409193cc: test   r14d,r14d
0x1409193cf: cmove  r14d,eax
0x1409193d3: mov    DWORD PTR [rsp+0x68],r14d
0x1409193d8: mov    DWORD PTR [rbp+0x60],edx
0x1409193db: mov    DWORD PTR [rbp+0x94],r14d
0x1409193e2: mov    eax,0x66666667
0x1409193e7: imul   r14d
0x1409193ea: mov    ecx,edx
0x1409193ec: sar    ecx,1
0x1409193ee: mov    eax,ecx
0x1409193f0: shr    eax,0x1f
0x1409193f3: add    ecx,eax
0x1409193f5: mov    DWORD PTR [rbp+0x158],ecx
0x1409193fb: call   0x14013e720
0x140919400: mov    rdi,rax
0x140919403: mov    QWORD PTR [rbp-0x58],rax
0x140919407: mov    ecx,DWORD PTR [rsi+0x4]
0x14091940a: mov    DWORD PTR [rax+0x4],ecx
0x14091940d: mov    edx,0x2
0x140919412: mov    rcx,rax
0x140919415: call   0x1400fe960
0x14091941a: mov    rbx,QWORD PTR [rbp-0x50]
0x14091941e: mov    ecx,DWORD PTR [rbx+0x200]
0x140919424: add    ecx,DWORD PTR [rbx+0x1f8]
0x14091942a: sar    ecx,1
0x14091942c: lea    r8d,[rcx*2+0x1]
0x140919434: add    r8d,ecx
0x140919437: mov    ecx,DWORD PTR [rbx+0x204]
0x14091943d: add    ecx,DWORD PTR [rbx+0x1fc]
0x140919443: sar    ecx,1
0x140919445: lea    edx,[rcx*2+0x1]
0x14091944c: add    edx,ecx
0x14091944e: mov    rax,QWORD PTR [rdi+0x130]
0x140919455: mov    DWORD PTR [rax+0x5c],r8d
0x140919459: mov    rax,QWORD PTR [rdi+0x130]
0x140919460: mov    DWORD PTR [rax+0x60],edx
0x140919463: mov    rax,QWORD PTR [rdi+0x130]
0x14091946a: xor    ecx,ecx
0x14091946c: mov    DWORD PTR [rax],ecx
0x14091946e: mov    eax,DWORD PTR [rip+0x1a5b280]        # 0x1423746f4
0x140919474: mov    DWORD PTR [rdi+0x38],eax
0x140919477: mov    eax,DWORD PTR [rip+0x1a6eb47]        # 0x142387fc4
0x14091947d: mov    DWORD PTR [rdi+0x3c],eax
0x140919480: mov    rcx,QWORD PTR [rbp+0x10]
0x140919484: mov    eax,DWORD PTR [rcx+0x88]
0x14091948a: mov    DWORD PTR [rdi+0x8],eax
0x14091948d: mov    DWORD PTR [rdi+0x18],0x32
0x140919494: mov    ebx,0xffffffff
0x140919499: mov    DWORD PTR [rdi+0x1c],ebx
0x14091949c: mov    eax,DWORD PTR [rcx+0x200]
0x1409194a2: add    eax,DWORD PTR [rcx+0x1f8]
0x1409194a8: sar    eax,1
0x1409194aa: lea    eax,[rax+rax*2]
0x1409194ad: inc    eax
0x1409194af: mov    DWORD PTR [rdi+0x10],eax
0x1409194b2: mov    eax,DWORD PTR [rcx+0x204]
0x1409194b8: add    eax,DWORD PTR [rcx+0x1fc]
0x1409194be: sar    eax,1
0x1409194c0: lea    eax,[rax+rax*2]
0x1409194c3: inc    eax
0x1409194c5: mov    DWORD PTR [rdi+0x14],eax
0x1409194c8: mov    eax,DWORD PTR [rdi]
0x1409194ca: mov    DWORD PTR [rdi+0x44],eax
0x1409194cd: mov    DWORD PTR [rdi+0x40],ebx
0x1409194d0: mov    rax,QWORD PTR [rbp-0x20]
0x1409194d4: test   rax,rax
0x1409194d7: je     0x1409194e2
0x1409194d9: mov    eax,DWORD PTR [rax+0xe0]
0x1409194df: mov    DWORD PTR [rdi+0x48],eax
0x1409194e2: mov    DWORD PTR [rdi+0x4c],ebx
0x1409194e5: lea    rdx,[rsi+0x1420]
0x1409194ec: mov    rcx,rdi
0x1409194ef: call   0x1400b9fa0
0x1409194f4: mov    r14d,0x37
0x1409194fa: test   r12d,r12d
0x1409194fd: jle    0x140919919
0x140919503: lea    rcx,[rbp+0x6b8]
0x14091950a: call   0x14006ee50
0x14091950f: test   rax,rax
0x140919512: je     0x1409195f7
0x140919518: test   r15,r15
0x14091951b: jne    0x1409195a2
0x140919521: call   0x140121580
0x140919526: mov    r15,rax
0x140919529: mov    QWORD PTR [rbp-0x80],rax
0x14091952d: lea    rdx,[rsi+0x1408]
0x140919534: mov    rcx,rax
0x140919537: call   0x1400b9fa0
0x14091953c: mov    QWORD PTR [r15+0x60],rdi
0x140919540: mov    ecx,DWORD PTR [rdi]
0x140919542: mov    DWORD PTR [r15+0x5c],ecx
0x140919546: mov    DWORD PTR [r15+0x120],0xffff003a
0x140919551: mov    r9d,0x20
0x140919557: mov    BYTE PTR [rsp+0x20],0x1
0x14091955c: lea    r8,[r15+0x128]
0x140919563: lea    rdx,[r15+0x124]
0x14091956a: mov    rcx,rsi
0x14091956d: call   0x140aa9ca0
0x140919572: mov    r9d,DWORD PTR [r15+0x128]
0x140919579: movzx  r8d,WORD PTR [r15+0x124]
0x140919581: mov    edx,0x1d
0x140919586: lea    rcx,[rip+0x1ab7f63]        # 0x1423d14f0
0x14091958d: call   0x14145bee0
0x140919592: mov    rdi,QWORD PTR [rbp-0x58]
0x140919596: test   al,al
0x140919598: je     0x1409195a2
0x14091959a: mov    WORD PTR [r15+0x120],r14w
0x1409195a2: lea    rcx,[rbp+0x6b8]
0x1409195a9: call   0x14006ee50
0x1409195ae: mov    rcx,rax
0x1409195b1: call   0x140071f30
0x1409195b6: movsxd rbx,eax
0x1409195b9: mov    rdx,rbx
0x1409195bc: lea    rcx,[rbp+0x6b8]
0x1409195c3: call   0x14006f220
0x1409195c8: mov    rdx,QWORD PTR [rax]
0x1409195cb: mov    r8,QWORD PTR [rdx+0x18]
0x1409195cf: mov    rcx,r15
0x1409195d2: call   0x140123990
0x1409195d7: mov    rdx,rbx
0x1409195da: lea    rcx,[rbp+0x6b8]
0x1409195e1: call   0x1400b99a0
0x1409195e6: dec    r12d
0x1409195e9: test   r12d,r12d
0x1409195ec: jg     0x140919503
0x1409195f2: jmp    0x140919919
0x1409195f7: mov    r14d,0xffff8ad0
0x1409195fd: movzx  r13d,BYTE PTR [rsp+0x51]
0x140919603: lea    rcx,[rbp+0x2d8]
0x14091960a: call   0x14006ee50
0x14091960f: test   rax,rax
0x140919612: jne    0x140919629
0x140919614: lea    rcx,[rbp+0x260]
0x14091961b: call   0x14006ee50
0x140919620: test   rax,rax
0x140919623: je     0x14091990b
0x140919629: mov    rax,QWORD PTR [rbp-0x50]
0x14091962d: cmp    QWORD PTR [rax+0x308],0x0
0x140919635: je     0x14091967c
0x140919637: lea    rcx,[rbp+0x260]
0x14091963e: call   0x14006ee50
0x140919643: mov    rcx,rax
0x140919646: call   0x140071f30
0x14091964b: movsxd rbx,eax
0x14091964e: mov    rdx,rbx
0x140919651: lea    rcx,[rbp+0x260]
0x140919658: call   0x14006f220
0x14091965d: mov    rcx,QWORD PTR [rax]
0x140919660: lea    rdi,[rcx+0x4]
0x140919664: dec    DWORD PTR [rcx]
0x140919666: cmp    DWORD PTR [rcx],0x0
0x140919669: jg     0x1409196bf
0x14091966b: mov    rdx,rbx
0x14091966e: lea    rcx,[rbp+0x260]
0x140919675: call   0x1400b99a0
0x14091967a: jmp    0x1409196bf
0x14091967c: lea    rcx,[rbp+0x2d8]
0x140919683: call   0x14006ee50
0x140919688: mov    rcx,rax
0x14091968b: call   0x140071f30
0x140919690: movsxd rbx,eax
0x140919693: mov    rdx,rbx
0x140919696: lea    rcx,[rbp+0x2d8]
0x14091969d: call   0x14006f220
0x1409196a2: mov    rcx,QWORD PTR [rax]
0x1409196a5: lea    rdi,[rcx+0x4]
0x1409196a9: dec    DWORD PTR [rcx]
0x1409196ab: cmp    DWORD PTR [rcx],0x0
0x1409196ae: jg     0x1409196bf
0x1409196b0: mov    rdx,rbx
0x1409196b3: lea    rcx,[rbp+0x2d8]
0x1409196ba: call   0x1400b99a0
0x1409196bf: dec    DWORD PTR [rbp-0x6c]
0x1409196c2: call   0x141379960
0x1409196c7: mov    rbx,rax
0x1409196ca: or     DWORD PTR [rax+0x114],0x4
0x1409196d1: mov    ecx,DWORD PTR [rsi+0x4]
0x1409196d4: mov    DWORD PTR [rax+0x140],ecx
0x1409196da: mov    ecx,DWORD PTR [rdi+0x4]
0x1409196dd: mov    DWORD PTR [rax+0x144],ecx
0x1409196e3: mov    ecx,DWORD PTR [rdi+0xc]
0x1409196e6: mov    DWORD PTR [rax+0x148],ecx
0x1409196ec: mov    ecx,DWORD PTR [rdi+0x10]
0x1409196ef: mov    DWORD PTR [rax+0x14c],ecx
0x1409196f5: mov    r8d,0xffffffff
0x1409196fb: xor    r9d,r9d
0x1409196fe: movzx  edx,WORD PTR [rdi]
0x140919701: mov    rcx,rax
0x140919704: call   0x141382630
0x140919709: mov    WORD PTR [rbx+0xa0],0x66
0x140919712: mov    rcx,rbx
0x140919715: call   0x1413824a0
0x14091971a: mov    rcx,rbx
0x14091971d: call   0x14137c020
0x140919722: movzx  eax,WORD PTR [rbx+0xa0]
0x140919729: mov    WORD PTR [rbx+0xa2],ax
0x140919730: mov    DWORD PTR [rbx+0xa8],0x8ad08ad0
0x14091973a: mov    WORD PTR [rbx+0xac],r14w
0x140919742: xor    r8d,r8d
0x140919745: mov    dl,0x1
0x140919747: mov    rcx,rbx
0x14091974a: call   0x141329d70
0x14091974f: xor    r9d,r9d
0x140919752: xor    r8d,r8d
0x140919755: mov    dl,0x1
0x140919757: mov    rcx,rbx
0x14091975a: call   0x1413356f0
0x14091975f: mov    rcx,rbx
0x140919762: call   0x1413348f0
0x140919767: test   al,al
0x140919769: je     0x140919773
0x14091976b: mov    rcx,rbx
0x14091976e: call   0x141334820
0x140919773: mov    rax,QWORD PTR [rbx]
0x140919776: mov    r10,QWORD PTR [rax+0x20]
0x14091977a: xor    r9d,r9d
0x14091977d: mov    r8b,0x1
0x140919780: xor    edx,edx
0x140919782: mov    rcx,rbx
0x140919785: call   r10
0x140919788: mov    r15,rax
0x14091978b: mov    rdx,QWORD PTR [rax+0x10]
0x14091978f: mov    ecx,DWORD PTR [rdx+0xe0]
0x140919795: mov    DWORD PTR [rdx+0xc0],ecx
0x14091979b: xor    edx,edx
0x14091979d: mov    r9d,0x1
0x1409197a3: mov    BYTE PTR [rsp+0x20],dl
0x1409197a7: mov    r14,QWORD PTR [rsp+0x58]
0x1409197ac: mov    r8d,DWORD PTR [r14+0x4]
0x1409197b0: mov    rcx,QWORD PTR [rax+0x10]
0x1409197b4: call   0x140b97ef0
0x1409197b9: test   r13b,r13b
0x1409197bc: je     0x140919800
0x1409197be: mov    rcx,QWORD PTR [r14+0x8]
0x1409197c2: add    rcx,0x3a0
0x1409197c9: mov    edx,0x8
0x1409197ce: call   0x140071f90
0x1409197d3: test   al,al
0x1409197d5: je     0x1409197f7
0x1409197d7: mov    ecx,0x2
0x1409197dc: call   0x140071f30
0x1409197e1: test   eax,eax
0x1409197e3: mov    r14d,0x6d
0x1409197e9: jne    0x1409197f1
0x1409197eb: mov    r14d,0x65
0x1409197f1: movzx  edx,r14w
0x1409197f5: jmp    0x14091980c
0x1409197f7: mov    eax,0x6d
0x1409197fc: mov    edx,eax
0x1409197fe: jmp    0x140919808
0x140919800: mov    eax,0x65
0x140919805: movzx  edx,ax
0x140919808: movzx  r14d,ax
0x14091980c: mov    rcx,QWORD PTR [r15+0x10]
0x140919810: mov    r8b,0x1
0x140919813: call   0x140bbb0d0
0x140919818: mov    WORD PTR [rbx+0xa0],r14w
0x140919820: and    DWORD PTR [rbx+0x114],0xfffffffb
0x140919827: mov    rax,QWORD PTR [r15+0x18]
0x14091982b: or     DWORD PTR [rax+0x114],0x100
0x140919835: mov    rax,QWORD PTR [r15+0x18]
0x140919839: or     DWORD PTR [rax+0x114],0x8000
0x140919843: mov    rcx,QWORD PTR [r15+0x18]
0x140919847: call   0x141388210
0x14091984c: cmp    QWORD PTR [rbp-0x80],0x0
0x140919851: jne    0x1409198e1
0x140919857: call   0x140121580
0x14091985c: mov    r14,rax
0x14091985f: mov    QWORD PTR [rbp-0x80],rax
0x140919863: mov    rsi,QWORD PTR [rsp+0x58]
0x140919868: lea    rdx,[rsi+0x1408]
0x14091986f: mov    rcx,rax
0x140919872: call   0x1400b9fa0
0x140919877: mov    rax,QWORD PTR [rbp-0x58]
0x14091987b: mov    QWORD PTR [r14+0x60],rax
0x14091987f: mov    eax,DWORD PTR [rax]
0x140919881: mov    DWORD PTR [r14+0x5c],eax
0x140919885: mov    DWORD PTR [r14+0x120],0xffff003a
0x140919890: mov    r9d,0x20
0x140919896: mov    BYTE PTR [rsp+0x20],0x1
0x14091989b: lea    r8,[r14+0x128]
0x1409198a2: lea    rdx,[r14+0x124]
0x1409198a9: mov    rcx,rsi
0x1409198ac: call   0x140aa9ca0
0x1409198b1: mov    r9d,DWORD PTR [r14+0x128]
0x1409198b8: movzx  r8d,WORD PTR [r14+0x124]
0x1409198c0: mov    edx,0x1d
0x1409198c5: lea    rcx,[rip+0x1ab7c24]        # 0x1423d14f0
0x1409198cc: call   0x14145bee0
0x1409198d1: test   al,al
0x1409198d3: je     0x1409198e6
0x1409198d5: mov    WORD PTR [r14+0x120],0x37
0x1409198df: jmp    0x1409198e6
0x1409198e1: mov    rsi,QWORD PTR [rsp+0x58]
0x1409198e6: mov    r8,QWORD PTR [r15+0x18]
0x1409198ea: mov    rdx,r15
0x1409198ed: mov    r15,QWORD PTR [rbp-0x80]
0x1409198f1: mov    rcx,r15
0x1409198f4: call   0x140123990
0x1409198f9: dec    r12d
0x1409198fc: test   r12d,r12d
0x1409198ff: mov    r14d,0xffff8ad0
0x140919905: jg     0x140919603
0x14091990b: mov    r13d,DWORD PTR [rbp-0x70]
0x14091990f: mov    rdi,QWORD PTR [rbp-0x58]
0x140919913: mov    r14d,0x37
0x140919919: test   r13d,r13d
0x14091991c: jle    0x140919a11
0x140919922: lea    rcx,[rbp+0x6d0]
0x140919929: call   0x14006ee50
0x14091992e: test   rax,rax
0x140919931: je     0x140919a0d
0x140919937: test   r15,r15
0x14091993a: jne    0x1409199b9
0x140919940: call   0x140121580
0x140919945: mov    r15,rax
0x140919948: lea    rdx,[rsi+0x1408]
0x14091994f: mov    rcx,rax
0x140919952: call   0x1400b9fa0
0x140919957: mov    QWORD PTR [r15+0x60],rdi
0x14091995b: mov    eax,DWORD PTR [rdi]
0x14091995d: mov    DWORD PTR [r15+0x5c],eax
0x140919961: mov    DWORD PTR [r15+0x120],0xffff003a
0x14091996c: mov    r9d,0x20
0x140919972: mov    BYTE PTR [rsp+0x20],0x1
0x140919977: lea    r8,[r15+0x128]
0x14091997e: lea    rdx,[r15+0x124]
0x140919985: mov    rcx,rsi
0x140919988: call   0x140aa9ca0
0x14091998d: mov    r9d,DWORD PTR [r15+0x128]
0x140919994: movzx  r8d,WORD PTR [r15+0x124]
0x14091999c: mov    edx,0x1d
0x1409199a1: lea    rcx,[rip+0x1ab7b48]        # 0x1423d14f0
0x1409199a8: call   0x14145bee0
0x1409199ad: test   al,al
0x1409199af: je     0x1409199b9
0x1409199b1: mov    WORD PTR [r15+0x120],r14w
0x1409199b9: lea    rcx,[rbp+0x6d0]
0x1409199c0: call   0x14006ee50
0x1409199c5: mov    rcx,rax
0x1409199c8: call   0x140071f30
0x1409199cd: movsxd rbx,eax
0x1409199d0: mov    rdx,rbx
0x1409199d3: lea    rcx,[rbp+0x6d0]
0x1409199da: call   0x14006f220
0x1409199df: mov    rdx,QWORD PTR [rax]
0x1409199e2: mov    r8,QWORD PTR [rdx+0x18]
0x1409199e6: mov    rcx,r15
0x1409199e9: call   0x140123990
0x1409199ee: mov    rdx,rbx
0x1409199f1: lea    rcx,[rbp+0x6d0]
0x1409199f8: call   0x1400b99a0
0x1409199fd: dec    r13d
0x140919a00: test   r13d,r13d
0x140919a03: mov    rdi,QWORD PTR [rbp-0x58]
0x140919a07: jg     0x140919922
0x140919a0d: mov    QWORD PTR [rbp-0x80],r15
0x140919a11: mov    r14d,DWORD PTR [rbp-0x5c]
0x140919a15: test   r14d,r14d
0x140919a18: jle    0x140919db2
0x140919a1e: mov    r12d,DWORD PTR [rbp-0x68]
0x140919a22: jmp    0x140919a2d
0x140919a24: mov    rsi,QWORD PTR [rsp+0x58]
0x140919a29: mov    r15,QWORD PTR [rbp-0x80]
0x140919a2d: test   r12d,r12d
0x140919a30: jle    0x140919db2
0x140919a36: test   r15,r15
0x140919a39: jne    0x140919ac2
0x140919a3f: call   0x140121580
0x140919a44: mov    r15,rax
0x140919a47: mov    QWORD PTR [rbp-0x80],rax
0x140919a4b: lea    rdx,[rsi+0x1408]
0x140919a52: mov    rcx,rax
0x140919a55: call   0x1400b9fa0
0x140919a5a: mov    rax,QWORD PTR [rbp-0x58]
0x140919a5e: mov    QWORD PTR [r15+0x60],rax
0x140919a62: mov    eax,DWORD PTR [rax]
0x140919a64: mov    DWORD PTR [r15+0x5c],eax
0x140919a68: mov    DWORD PTR [r15+0x120],0xffff003a
0x140919a73: mov    r9d,0x20
0x140919a79: mov    BYTE PTR [rsp+0x20],0x1
0x140919a7e: lea    r8,[r15+0x128]
0x140919a85: lea    rdx,[r15+0x124]
0x140919a8c: mov    rcx,rsi
0x140919a8f: call   0x140aa9ca0
0x140919a94: mov    r9d,DWORD PTR [r15+0x128]
0x140919a9b: movzx  r8d,WORD PTR [r15+0x124]
0x140919aa3: mov    edx,0x1d
0x140919aa8: lea    rcx,[rip+0x1ab7a41]        # 0x1423d14f0
0x140919aaf: call   0x14145bee0
0x140919ab4: test   al,al
0x140919ab6: je     0x140919ac2
0x140919ab8: mov    WORD PTR [r15+0x120],0x37
0x140919ac2: mov    ecx,r14d
0x140919ac5: call   0x140071f30
0x140919aca: lea    ebx,[rax+0x1]
0x140919acd: mov    rax,QWORD PTR [rbp-0x50]
0x140919ad1: cmp    QWORD PTR [rax+0x308],0x0
0x140919ad9: je     0x140919c45
0x140919adf: lea    rcx,[rbp+0x840]
0x140919ae6: call   0x14006ee50
0x140919aeb: mov    rcx,rax
0x140919aee: call   0x140071f30
0x140919af3: movsxd r15,eax
0x140919af6: mov    rdx,r15
0x140919af9: lea    rcx,[rbp+0x840]
0x140919b00: call   0x14006f220
0x140919b05: mov    rsi,QWORD PTR [rax]
0x140919b08: mov    edi,DWORD PTR [rsi]
0x140919b0a: cmp    ebx,edi
0x140919b0c: cmovle edi,ebx
0x140919b0f: mov    rbx,QWORD PTR [rbp-0x80]
0x140919b13: lea    rdx,[rbp+0xf8]
0x140919b1a: lea    rcx,[rbx+0x38]
0x140919b1e: call   0x14006f240
0x140919b23: lea    rdx,[rbp+0x378]
0x140919b2a: lea    rcx,[rbx+0x38]
0x140919b2e: call   0x14006f230
0x140919b33: lea    r8,[rbp+0x378]
0x140919b3a: lea    rdx,[rbp-0xa]
0x140919b3e: lea    rcx,[rbp+0xf8]
0x140919b45: call   0x14006ee20
0x140919b4a: xor    edx,edx
0x140919b4c: movzx  ecx,BYTE PTR [rax]
0x140919b4f: call   0x1400657b0
0x140919b54: mov    r13,QWORD PTR [rsp+0x58]
0x140919b59: test   al,al
0x140919b5b: je     0x140919bbd
0x140919b5d: nop    DWORD PTR [rax]
0x140919b60: lea    rcx,[rbp+0xf8]
0x140919b67: call   0x14006ee10
0x140919b6c: mov    rbx,QWORD PTR [rax]
0x140919b6f: lea    rcx,[rbx+0x4]
0x140919b73: mov    r8d,DWORD PTR [r13+0x4]
0x140919b77: lea    rdx,[rsi+0x4]
0x140919b7b: call   0x1400fdaf0
0x140919b80: test   al,al
0x140919b82: jne    0x140919bb7
0x140919b84: lea    rcx,[rbp+0xf8]
0x140919b8b: call   0x14006ee00
0x140919b90: lea    r8,[rbp+0x378]
0x140919b97: lea    rdx,[rbp-0xa]
0x140919b9b: lea    rcx,[rbp+0xf8]
0x140919ba2: call   0x14006ee20
0x140919ba7: xor    edx,edx
0x140919ba9: movzx  ecx,BYTE PTR [rax]
0x140919bac: call   0x1400657b0
0x140919bb1: test   al,al
0x140919bb3: jne    0x140919b60
0x140919bb5: jmp    0x140919bb9
0x140919bb7: add    DWORD PTR [rbx],edi
0x140919bb9: mov    r14d,DWORD PTR [rbp-0x5c]
0x140919bbd: lea    r8,[rbp+0x378]
0x140919bc4: lea    rdx,[rbp+0x8f]
0x140919bcb: lea    rcx,[rbp+0xf8]
0x140919bd2: call   0x14006ee20
0x140919bd7: xor    edx,edx
0x140919bd9: movzx  ecx,BYTE PTR [rax]
0x140919bdc: call   0x140071e60
0x140919be1: test   al,al
0x140919be3: je     0x140919c26
0x140919be5: mov    ecx,0x3c
0x140919bea: call   0x141539690
0x140919bef: mov    QWORD PTR [rbp-0x18],rax
0x140919bf3: mov    rcx,rax
0x140919bf6: call   0x1400ff2e0
0x140919bfb: mov    rbx,rax
0x140919bfe: mov    DWORD PTR [rax],edi
0x140919c00: lea    rcx,[rax+0x4]
0x140919c04: lea    rdx,[rsi+0x4]
0x140919c08: mov    r8d,0xffffffff
0x140919c0e: call   0x1400fda90
0x140919c13: mov    ecx,DWORD PTR [r13+0x4]
0x140919c17: mov    DWORD PTR [rbx+0xc],ecx
0x140919c1a: mov    rdx,rbx
0x140919c1d: mov    rcx,QWORD PTR [rbp-0x80]
0x140919c21: call   0x140124760
0x140919c26: sub    DWORD PTR [rsi],edi
0x140919c28: cmp    DWORD PTR [rsi],0x0
0x140919c2b: jg     0x140919d9f
0x140919c31: mov    rdx,r15
0x140919c34: lea    rcx,[rbp+0x840]
0x140919c3b: call   0x1400b99a0
0x140919c40: jmp    0x140919d9f
0x140919c45: lea    rcx,[rbp+0x828]
0x140919c4c: call   0x14006ee50
0x140919c51: mov    rcx,rax
0x140919c54: call   0x140071f30
0x140919c59: movsxd r15,eax
0x140919c5c: mov    rdx,r15
0x140919c5f: lea    rcx,[rbp+0x828]
0x140919c66: call   0x14006f220
0x140919c6b: mov    rsi,QWORD PTR [rax]
0x140919c6e: mov    edi,DWORD PTR [rsi]
0x140919c70: cmp    ebx,edi
0x140919c72: cmovle edi,ebx
0x140919c75: mov    rbx,QWORD PTR [rbp-0x80]
0x140919c79: lea    rdx,[rbp+0x140]
0x140919c80: lea    rcx,[rbx+0x38]
0x140919c84: call   0x14006f240
0x140919c89: lea    rdx,[rbp+0x380]
0x140919c90: lea    rcx,[rbx+0x38]
0x140919c94: call   0x14006f230
0x140919c99: lea    r8,[rbp+0x380]
0x140919ca0: lea    rdx,[rbp-0x9]
0x140919ca4: lea    rcx,[rbp+0x140]
0x140919cab: call   0x14006ee20
0x140919cb0: xor    edx,edx
0x140919cb2: movzx  ecx,BYTE PTR [rax]
0x140919cb5: call   0x1400657b0
0x140919cba: mov    r13,QWORD PTR [rsp+0x58]
0x140919cbf: test   al,al
0x140919cc1: je     0x140919d20
0x140919cc3: lea    rcx,[rbp+0x140]
0x140919cca: call   0x14006ee10
0x140919ccf: mov    rbx,QWORD PTR [rax]
0x140919cd2: lea    rcx,[rbx+0x4]
0x140919cd6: mov    r8d,DWORD PTR [r13+0x4]
0x140919cda: lea    rdx,[rsi+0x4]
0x140919cde: call   0x1400fdaf0
0x140919ce3: test   al,al
0x140919ce5: jne    0x140919d1a
0x140919ce7: lea    rcx,[rbp+0x140]
0x140919cee: call   0x14006ee00
0x140919cf3: lea    r8,[rbp+0x380]
0x140919cfa: lea    rdx,[rbp-0x9]
0x140919cfe: lea    rcx,[rbp+0x140]
0x140919d05: call   0x14006ee20
0x140919d0a: xor    edx,edx
0x140919d0c: movzx  ecx,BYTE PTR [rax]
0x140919d0f: call   0x1400657b0
0x140919d14: test   al,al
0x140919d16: jne    0x140919cc3
0x140919d18: jmp    0x140919d1c
0x140919d1a: add    DWORD PTR [rbx],edi
0x140919d1c: mov    r14d,DWORD PTR [rbp-0x5c]
0x140919d20: lea    r8,[rbp+0x380]
0x140919d27: lea    rdx,[rbp+0x8c]
0x140919d2e: lea    rcx,[rbp+0x140]
0x140919d35: call   0x14006ee20
0x140919d3a: xor    edx,edx
0x140919d3c: movzx  ecx,BYTE PTR [rax]
0x140919d3f: call   0x140071e60
0x140919d44: test   al,al
0x140919d46: je     0x140919d89
0x140919d48: mov    ecx,0x3c
0x140919d4d: call   0x141539690
0x140919d52: mov    QWORD PTR [rbp-0x38],rax
0x140919d56: mov    rcx,rax
0x140919d59: call   0x1400ff2e0
0x140919d5e: mov    rbx,rax
0x140919d61: mov    DWORD PTR [rax],edi
0x140919d63: lea    rcx,[rax+0x4]
0x140919d67: lea    rdx,[rsi+0x4]
0x140919d6b: mov    r8d,0xffffffff
0x140919d71: call   0x1400fda90
0x140919d76: mov    ecx,DWORD PTR [r13+0x4]
0x140919d7a: mov    DWORD PTR [rbx+0xc],ecx
0x140919d7d: mov    rdx,rbx
0x140919d80: mov    rcx,QWORD PTR [rbp-0x80]
0x140919d84: call   0x140124760
0x140919d89: sub    DWORD PTR [rsi],edi
0x140919d8b: cmp    DWORD PTR [rsi],0x0
0x140919d8e: jg     0x140919d9f
0x140919d90: mov    rdx,r15
0x140919d93: lea    rcx,[rbp+0x828]
0x140919d9a: call   0x1400b99a0
0x140919d9f: sub    r12d,edi
0x140919da2: sub    r14d,edi
0x140919da5: mov    DWORD PTR [rbp-0x5c],r14d
0x140919da9: test   r14d,r14d
0x140919dac: jg     0x140919a24
0x140919db2: xor    r15d,r15d
0x140919db5: mov    r14d,r15d
0x140919db8: mov    DWORD PTR [rsp+0x54],r15d
0x140919dbd: lea    rcx,[rbp+0x458]
0x140919dc4: call   0x140065b00
0x140919dc9: nop
0x140919dca: lea    rcx,[rbp+0x600]
0x140919dd1: call   0x140065b00
0x140919dd6: nop
0x140919dd7: lea    rcx,[rbp+0x700]
0x140919dde: call   0x140065b00
0x140919de3: nop
0x140919de4: lea    rcx,[rbp+0x718]
0x140919deb: call   0x140065b00
0x140919df0: nop
0x140919df1: lea    rcx,[rbp+0x730]
0x140919df8: call   0x140065b00
0x140919dfd: nop
0x140919dfe: mov    eax,0x66666667
0x140919e03: imul   DWORD PTR [rsp+0x68]
0x140919e07: mov    ecx,edx
0x140919e09: sar    ecx,0x2
0x140919e0c: mov    eax,ecx
0x140919e0e: shr    eax,0x1f
0x140919e11: add    ecx,eax
0x140919e13: mov    DWORD PTR [rbp-0x20],ecx
0x140919e16: mov    r13d,0xffffffff
0x140919e1c: mov    DWORD PTR [rbp-0x64],r13d
0x140919e20: lea    rcx,[rbp+0x308]
0x140919e27: call   0x14006ee50
0x140919e2c: test   rax,rax
0x140919e2f: je     0x14091a234
0x140919e35: cmp    DWORD PTR [rsp+0x6c],r15d
0x140919e3a: jne    0x14091a234
0x140919e40: mov    DWORD PTR [rbp-0x70],r13d
0x140919e44: mov    r12d,r15d
0x140919e47: mov    DWORD PTR [rbp-0x38],r15d
0x140919e4b: lea    rcx,[rbp+0x308]
0x140919e52: call   0x14006ee50
0x140919e57: test   eax,eax
0x140919e59: jle    0x14091a231
0x140919e5f: nop
0x140919e60: movsxd rdx,r15d
0x140919e63: lea    rcx,[rbp+0x308]
0x140919e6a: call   0x14006f220
0x140919e6f: mov    rsi,QWORD PTR [rax]
0x140919e72: xor    edx,edx
0x140919e74: mov    r14d,edx
0x140919e77: mov    rax,QWORD PTR [rsi+0x10]
0x140919e7b: mov    rcx,QWORD PTR [rax+0x130]
0x140919e82: test   rcx,rcx
0x140919e85: je     0x14091a00b
0x140919e8b: mov    rcx,QWORD PTR [rcx+0x8]
0x140919e8f: test   rcx,rcx
0x140919e92: je     0x140919f19
0x140919e98: mov    ebx,edx
0x140919e9a: call   0x14006f450
0x140919e9f: test   eax,eax
0x140919ea1: jle    0x140919f19
0x140919ea3: movabs r12,0x100200001
0x140919ead: nop    DWORD PTR [rax]
0x140919eb0: mov    rax,QWORD PTR [rsi+0x10]
0x140919eb4: mov    rcx,QWORD PTR [rax+0x130]
0x140919ebb: movsxd rdi,ebx
0x140919ebe: mov    rdx,rdi
0x140919ec1: mov    rcx,QWORD PTR [rcx+0x8]
0x140919ec5: call   0x14006f440
0x140919eca: movzx  ecx,WORD PTR [rax]
0x140919ecd: sub    cx,0x4a
0x140919ed1: cmp    cx,0x20
0x140919ed5: ja     0x140919efb
0x140919ed7: bt     r12,rcx
0x140919edb: jae    0x140919efb
0x140919edd: mov    rax,QWORD PTR [rsi+0x10]
0x140919ee1: mov    rcx,QWORD PTR [rax+0x130]
0x140919ee8: mov    rcx,QWORD PTR [rcx+0x8]
0x140919eec: add    rcx,0x18
0x140919ef0: mov    rdx,rdi
0x140919ef3: call   0x14006f360
0x140919ef8: add    r14d,DWORD PTR [rax]
0x140919efb: inc    ebx
0x140919efd: mov    rax,QWORD PTR [rsi+0x10]
0x140919f01: mov    rcx,QWORD PTR [rax+0x130]
0x140919f08: mov    rcx,QWORD PTR [rcx+0x8]
0x140919f0c: call   0x14006f450
0x140919f11: cmp    ebx,eax
0x140919f13: jl     0x140919eb0
0x140919f15: mov    r12d,DWORD PTR [rbp-0x38]
0x140919f19: mov    edx,0x13
0x140919f1e: mov    eax,0xffffffff
0x140919f23: mov    DWORD PTR [rsp+0x20],eax
0x140919f27: mov    r9d,eax
0x140919f2a: mov    rdi,QWORD PTR [rsp+0x58]
0x140919f2f: mov    r8d,DWORD PTR [rdi+0x4]
0x140919f33: mov    rcx,QWORD PTR [rsi+0x10]
0x140919f37: call   0x140beb8a0
0x140919f3c: lea    ebx,[r14+0xf4240]
0x140919f43: test   al,al
0x140919f45: cmove  ebx,r14d
0x140919f49: mov    rdx,QWORD PTR [rsi+0x10]
0x140919f4d: mov    r9d,0x85
0x140919f53: movzx  r8d,WORD PTR [rdx+0x4]
0x140919f58: movzx  edx,WORD PTR [rdx+0x2]
0x140919f5c: lea    rcx,[rip+0x1bd2ae5]        # 0x1424eca48
0x140919f63: call   0x140072850
0x140919f68: lea    r14d,[rbx+0x989680]
0x140919f6f: test   al,al
0x140919f71: cmove  r14d,ebx
0x140919f75: cmp    r14d,r13d
0x140919f78: jle    0x14091a010
0x140919f7e: mov    eax,0x10624dd3
0x140919f83: imul   r14d
0x140919f86: mov    edi,edx
0x140919f88: sar    edi,0x6
0x140919f8b: mov    eax,edi
0x140919f8d: shr    eax,0x1f
0x140919f90: add    edi,eax
0x140919f92: cmp    edi,0x1e
0x140919f95: mov    eax,0x1e
0x140919f9a: cmovg  edi,eax
0x140919f9d: mov    edx,0x13
0x140919fa2: mov    eax,0xffffffff
0x140919fa7: mov    DWORD PTR [rsp+0x20],eax
0x140919fab: mov    r9d,eax
0x140919fae: mov    rax,QWORD PTR [rsp+0x58]
0x140919fb3: mov    r8d,DWORD PTR [rax+0x4]
0x140919fb7: mov    rcx,QWORD PTR [rsi+0x10]
0x140919fbb: call   0x140beb8a0
0x140919fc0: xor    ecx,ecx
0x140919fc2: mov    ebx,ecx
0x140919fc4: test   al,al
0x140919fc6: cmove  ebx,edi
0x140919fc9: mov    rdx,QWORD PTR [rsi+0x10]
0x140919fcd: mov    r9d,0x85
0x140919fd3: movzx  r8d,WORD PTR [rdx+0x4]
0x140919fd8: movzx  edx,WORD PTR [rdx+0x2]
0x140919fdc: lea    rcx,[rip+0x1bd2a65]        # 0x1424eca48
0x140919fe3: call   0x140072850
0x140919fe8: xor    ecx,ecx
0x140919fea: test   al,al
0x140919fec: cmove  ecx,ebx
0x140919fef: mov    rdi,QWORD PTR [rsp+0x58]
0x140919ff4: cmp    ecx,DWORD PTR [rbp-0x20]
0x140919ff7: jg     0x14091a010
0x140919ff9: mov    esi,r15d
0x140919ffc: mov    DWORD PTR [rbp-0x70],r15d
0x14091a000: mov    r12d,ecx
0x14091a003: mov    DWORD PTR [rbp-0x38],ecx
0x14091a006: mov    r13d,r14d
0x14091a009: jmp    0x14091a013
0x14091a00b: mov    rdi,QWORD PTR [rsp+0x58]
0x14091a010: mov    esi,DWORD PTR [rbp-0x70]
0x14091a013: inc    r15d
0x14091a016: lea    rcx,[rbp+0x308]
0x14091a01d: call   0x14006ee50
0x14091a022: cmp    r15d,eax
0x14091a025: jl     0x140919e60
0x14091a02b: cmp    esi,0xffffffff
0x14091a02e: je     0x14091a22c
0x14091a034: mov    r14,QWORD PTR [rbp-0x80]
0x14091a038: test   r14,r14
0x14091a03b: jne    0x14091a0ce
0x14091a041: call   0x140121580
0x14091a046: mov    r14,rax
0x14091a049: mov    QWORD PTR [rbp-0x80],rax
0x14091a04d: lea    rdx,[rdi+0x1408]
0x14091a054: mov    rcx,rax
0x14091a057: call   0x1400b9fa0
0x14091a05c: mov    rax,QWORD PTR [rbp-0x58]
0x14091a060: mov    QWORD PTR [r14+0x60],rax
0x14091a064: mov    eax,DWORD PTR [rax]
0x14091a066: mov    DWORD PTR [r14+0x5c],eax
0x14091a06a: mov    DWORD PTR [r14+0x120],0xffff003a
0x14091a075: mov    r13d,0xffffffff
0x14091a07b: mov    r9d,0x20
0x14091a081: mov    BYTE PTR [rsp+0x20],0x1
0x14091a086: lea    r8,[r14+0x128]
0x14091a08d: lea    rdx,[r14+0x124]
0x14091a094: mov    rcx,QWORD PTR [rsp+0x58]
0x14091a099: call   0x140aa9ca0
0x14091a09e: mov    r9d,DWORD PTR [r14+0x128]
0x14091a0a5: movzx  r8d,WORD PTR [r14+0x124]
0x14091a0ad: mov    edx,0x1d
0x14091a0b2: lea    rcx,[rip+0x1ab7437]        # 0x1423d14f0
0x14091a0b9: call   0x14145bee0
0x14091a0be: test   al,al
0x14091a0c0: je     0x14091a0d4
0x14091a0c2: mov    WORD PTR [r14+0x120],0x37
0x14091a0cc: jmp    0x14091a0d4
0x14091a0ce: mov    r13d,0xffffffff
0x14091a0d4: movsxd rdi,esi
0x14091a0d7: mov    rdx,rdi
0x14091a0da: lea    rcx,[rbp+0x308]
0x14091a0e1: call   0x14006f220
0x14091a0e6: mov    rbx,QWORD PTR [rax]
0x14091a0e9: mov    r8,QWORD PTR [rbx+0x18]
0x14091a0ed: mov    rdx,rbx
0x14091a0f0: mov    rcx,r14
0x14091a0f3: call   0x140123990
0x14091a0f8: mov    rsi,rax
0x14091a0fb: mov    rcx,QWORD PTR [rbx+0x10]
0x14091a0ff: add    rcx,0xc8
0x14091a106: mov    r14d,0x1
0x14091a10c: mov    edx,r14d
0x14091a10f: call   0x140071f90
0x14091a114: test   al,al
0x14091a116: jne    0x14091a175
0x14091a118: mov    rcx,QWORD PTR [rbx+0x10]
0x14091a11c: call   0x140c0ef40
0x14091a121: cmp    r12d,0x14
0x14091a125: jl     0x14091a13f
0x14091a127: mov    rax,QWORD PTR [rbx+0x10]
0x14091a12b: mov    rcx,QWORD PTR [rax+0x130]
0x14091a132: mov    rax,QWORD PTR [rcx+0x50]
0x14091a136: mov    DWORD PTR [rax+0x20],0x3
0x14091a13d: jmp    0x14091a175
0x14091a13f: cmp    r12d,0xa
0x14091a143: jl     0x14091a15d
0x14091a145: mov    rax,QWORD PTR [rbx+0x10]
0x14091a149: mov    rcx,QWORD PTR [rax+0x130]
0x14091a150: mov    rax,QWORD PTR [rcx+0x50]
0x14091a154: mov    DWORD PTR [rax+0x20],0x2
0x14091a15b: jmp    0x14091a175
0x14091a15d: test   r12d,r12d
0x14091a160: jle    0x14091a175
0x14091a162: mov    rax,QWORD PTR [rbx+0x10]
0x14091a166: mov    rcx,QWORD PTR [rax+0x130]
0x14091a16d: mov    rax,QWORD PTR [rcx+0x50]
0x14091a171: mov    DWORD PTR [rax+0x20],r14d
0x14091a175: mov    DWORD PTR [rbp+0x33c],0x5
0x14091a17f: lea    rdx,[rbp+0x33c]
0x14091a186: lea    rcx,[rbp+0x600]
0x14091a18d: call   0x14006f410
0x14091a192: mov    DWORD PTR [rbp+0x340],0x8
0x14091a19c: lea    rdx,[rbp+0x340]
0x14091a1a3: lea    rcx,[rbp+0x700]
0x14091a1aa: call   0x14006f410
0x14091a1af: mov    DWORD PTR [rbp+0x344],r13d
0x14091a1b6: lea    rdx,[rbp+0x344]
0x14091a1bd: lea    rcx,[rbp+0x718]
0x14091a1c4: call   0x14006f410
0x14091a1c9: mov    DWORD PTR [rbp+0x348],r13d
0x14091a1d0: lea    rdx,[rbp+0x348]
0x14091a1d7: lea    rcx,[rbp+0x730]
0x14091a1de: call   0x14006f410
0x14091a1e3: mov    DWORD PTR [rbp+0x34c],r14d
0x14091a1ea: lea    rdx,[rbp+0x34c]
0x14091a1f1: lea    rcx,[rbp+0x458]
0x14091a1f8: call   0x14006f410
0x14091a1fd: xor    r15d,r15d
0x14091a200: mov    DWORD PTR [rsi+0x68],r15d
0x14091a204: mov    DWORD PTR [rsp+0x54],r14d
0x14091a209: mov    rdx,rdi
0x14091a20c: lea    rcx,[rbp+0x308]
0x14091a213: call   0x1400b99a0
0x14091a218: mov    rax,QWORD PTR [rbx+0x10]
0x14091a21c: mov    edi,DWORD PTR [rax+0xe0]
0x14091a222: mov    DWORD PTR [rbp-0x64],edi
0x14091a225: sub    DWORD PTR [rsp+0x68],r12d
0x14091a22a: jmp    0x14091a234
0x14091a22c: mov    r14d,DWORD PTR [rsp+0x54]
0x14091a231: xor    r15d,r15d
0x14091a234: xorps  xmm0,xmm0
0x14091a237: xor    ebx,ebx
0x14091a239: mov    QWORD PTR [rbp+0x38],rbx
0x14091a23d: movups XMMWORD PTR [rbp+0xa20],xmm0
0x14091a244: movups XMMWORD PTR [rbp+0xa30],xmm0
0x14091a24b: movups XMMWORD PTR [rbp+0xa40],xmm0
0x14091a252: mov    QWORD PTR [rbp+0xa50],rbx
0x14091a259: mov    QWORD PTR [rbp-0x18],rbx
0x14091a25d: movups XMMWORD PTR [rbp+0xa58],xmm0
0x14091a264: movups XMMWORD PTR [rbp+0xa68],xmm0
0x14091a26b: movups XMMWORD PTR [rbp+0xa78],xmm0
0x14091a272: mov    QWORD PTR [rbp+0xa88],rbx
0x14091a279: mov    DWORD PTR [rbp+0xa90],ebx
0x14091a27f: mov    r12d,0xff
0x14091a285: cmp    DWORD PTR [rsp+0x68],ebx
0x14091a289: jle    0x14091da6a
0x14091a28f: nop
0x14091a290: mov    DWORD PTR [rbp-0x5c],r14d
0x14091a294: mov    esi,r15d
0x14091a297: mov    DWORD PTR [rbp+0x40],r15d
0x14091a29b: lea    rdx,[rbp+0x1f8]
0x14091a2a2: lea    rcx,[rbp+0x2c0]
0x14091a2a9: call   0x14006f240
0x14091a2ae: lea    rdx,[rbp+0x4e8]
0x14091a2b5: lea    rcx,[rbp+0x2c0]
0x14091a2bc: call   0x14006f230
0x14091a2c1: lea    rdx,[rbp+0x4e8]
0x14091a2c8: lea    rcx,[rbp+0x1f8]
0x14091a2cf: call   0x1400b9970
0x14091a2d4: test   al,al
0x14091a2d6: jne    0x14091a31b
0x14091a2d8: nop    DWORD PTR [rax+rax*1+0x0]
0x14091a2e0: mov    ebx,esi
0x14091a2e2: lea    rcx,[rbp+0x1f8]
0x14091a2e9: call   0x14006ee10
0x14091a2ee: mov    esi,DWORD PTR [rax]
0x14091a2f0: cmp    ebx,esi
0x14091a2f2: cmovge esi,ebx
0x14091a2f5: lea    rcx,[rbp+0x1f8]
0x14091a2fc: call   0x14006f350
0x14091a301: lea    rdx,[rbp+0x4e8]
0x14091a308: lea    rcx,[rbp+0x1f8]
0x14091a30f: call   0x1400b9970
0x14091a314: test   al,al
0x14091a316: je     0x14091a2e0
0x14091a318: mov    DWORD PTR [rbp+0x40],esi
0x14091a31b: mov    edi,r15d
0x14091a31e: mov    DWORD PTR [rbp-0x70],r15d
0x14091a322: lea    rdx,[rbp+0x200]
0x14091a329: lea    rcx,[rbp+0x278]
0x14091a330: call   0x14006f240
0x14091a335: lea    rdx,[rbp+0x4f0]
0x14091a33c: lea    rcx,[rbp+0x278]
0x14091a343: call   0x14006f230
0x14091a348: lea    rdx,[rbp+0x4f0]
0x14091a34f: lea    rcx,[rbp+0x200]
0x14091a356: call   0x1400b9970
0x14091a35b: test   al,al
0x14091a35d: jne    0x14091a39b
0x14091a35f: nop
0x14091a360: mov    ebx,edi
0x14091a362: lea    rcx,[rbp+0x200]
0x14091a369: call   0x14006ee10
0x14091a36e: mov    edi,DWORD PTR [rax]
0x14091a370: cmp    ebx,edi
0x14091a372: cmovge edi,ebx
0x14091a375: lea    rcx,[rbp+0x200]
0x14091a37c: call   0x14006f350
0x14091a381: lea    rdx,[rbp+0x4f0]
0x14091a388: lea    rcx,[rbp+0x200]
0x14091a38f: call   0x1400b9970
0x14091a394: test   al,al
0x14091a396: je     0x14091a360
0x14091a398: mov    DWORD PTR [rbp-0x70],edi
0x14091a39b: mov    edi,r15d
0x14091a39e: mov    DWORD PTR [rbp-0x68],r15d
0x14091a3a2: lea    rdx,[rbp+0x208]
0x14091a3a9: lea    rcx,[rbp+0x2a8]
0x14091a3b0: call   0x14006f240
0x14091a3b5: lea    rdx,[rbp+0x4f8]
0x14091a3bc: lea    rcx,[rbp+0x2a8]
0x14091a3c3: call   0x14006f230
0x14091a3c8: lea    rdx,[rbp+0x4f8]
0x14091a3cf: lea    rcx,[rbp+0x208]
0x14091a3d6: call   0x1400b9970
0x14091a3db: test   al,al
0x14091a3dd: jne    0x14091a41b
0x14091a3df: nop
0x14091a3e0: mov    ebx,edi
0x14091a3e2: lea    rcx,[rbp+0x208]
0x14091a3e9: call   0x14006ee10
0x14091a3ee: mov    edi,DWORD PTR [rax]
0x14091a3f0: cmp    ebx,edi
0x14091a3f2: cmovge edi,ebx
0x14091a3f5: lea    rcx,[rbp+0x208]
0x14091a3fc: call   0x14006f350
0x14091a401: lea    rdx,[rbp+0x4f8]
0x14091a408: lea    rcx,[rbp+0x208]
0x14091a40f: call   0x1400b9970
0x14091a414: test   al,al
0x14091a416: je     0x14091a3e0
0x14091a418: mov    DWORD PTR [rbp-0x68],edi
0x14091a41b: lea    rdx,[rbp+0x210]
0x14091a422: lea    rcx,[rbp+0x178]
0x14091a429: call   0x14006f240
0x14091a42e: lea    rdx,[rbp+0x500]
0x14091a435: lea    rcx,[rbp+0x178]
0x14091a43c: call   0x14006f230
0x14091a441: lea    rdx,[rbp+0x500]
0x14091a448: lea    rcx,[rbp+0x210]
0x14091a44f: call   0x1400b9970
0x14091a454: test   al,al
0x14091a456: jne    0x14091a4a5
0x14091a458: nop    DWORD PTR [rax+rax*1+0x0]
0x14091a460: mov    ebx,esi
0x14091a462: lea    rcx,[rbp+0x210]
0x14091a469: call   0x14006ee10
0x14091a46e: mov    esi,DWORD PTR [rax]
0x14091a470: mov    eax,esi
0x14091a472: cmp    ebx,esi
0x14091a474: cmovge esi,ebx
0x14091a477: cmp    edi,eax
0x14091a479: cmovl  edi,eax
0x14091a47c: lea    rcx,[rbp+0x210]
0x14091a483: call   0x14006f350
0x14091a488: lea    rdx,[rbp+0x500]
0x14091a48f: lea    rcx,[rbp+0x210]
0x14091a496: call   0x1400b9970
0x14091a49b: test   al,al
0x14091a49d: je     0x14091a460
0x14091a49f: mov    DWORD PTR [rbp-0x68],edi
0x14091a4a2: mov    DWORD PTR [rbp+0x40],esi
0x14091a4a5: mov    r12d,r15d
0x14091a4a8: mov    DWORD PTR [rbp-0x20],r15d
0x14091a4ac: mov    r13d,r15d
0x14091a4af: mov    DWORD PTR [rbp-0x38],r15d
0x14091a4b3: mov    DWORD PTR [rbp+0x10],r15d
0x14091a4b7: mov    rax,QWORD PTR [rbp+0x168]
0x14091a4be: mov    rcx,QWORD PTR [rbp+0x160]
0x14091a4c5: sub    rax,rcx
0x14091a4c8: sar    rax,0x2
0x14091a4cc: test   eax,eax
0x14091a4ce: jle    0x14091a5cb
0x14091a4d4: xor    eax,eax
0x14091a4d6: mov    r14d,eax
0x14091a4d9: nop    DWORD PTR [rax+0x0]
0x14091a4e0: mov    rax,QWORD PTR [rbp+0x2f0]
0x14091a4e7: mov    esi,DWORD PTR [r14+rax*1]
0x14091a4eb: mov    edi,0x1
0x14091a4f0: movzx  edx,WORD PTR [r14+rcx*1]
0x14091a4f5: lea    rcx,[rip+0x1bd254c]        # 0x1424eca48
0x14091a4fc: call   0x1400bba60
0x14091a501: test   rax,rax
0x14091a504: je     0x14091a597
0x14091a50a: lea    rbx,[rax+0x178]
0x14091a511: lea    rdx,[rbp+0x218]
0x14091a518: mov    rcx,rbx
0x14091a51b: call   0x14006f240
0x14091a520: lea    rdx,[rbp+0x508]
0x14091a527: mov    rcx,rbx
0x14091a52a: call   0x14006f230
0x14091a52f: mov    rax,QWORD PTR [rbp+0x508]
0x14091a536: cmp    QWORD PTR [rbp+0x218],rax
0x14091a53d: je     0x14091a597
0x14091a53f: nop
0x14091a540: mov    ebx,edi
0x14091a542: lea    rcx,[rbp+0x218]
0x14091a549: call   0x14006ee10
0x14091a54e: mov    rcx,QWORD PTR [rax]
0x14091a551: movsx  edi,WORD PTR [rcx+0x490]
0x14091a558: cmp    edi,ebx
0x14091a55a: cmovle edi,ebx
0x14091a55d: lea    rcx,[rbp+0x218]
0x14091a564: call   0x14006ee00
0x14091a569: mov    rax,QWORD PTR [rbp+0x508]
0x14091a570: cmp    QWORD PTR [rbp+0x218],rax
0x14091a577: jne    0x14091a540
0x14091a579: cmp    edi,0xa
0x14091a57c: jl     0x14091a588
0x14091a57e: cmp    DWORD PTR [rbp+0x10],esi
0x14091a581: jge    0x14091a59e
0x14091a583: mov    DWORD PTR [rbp+0x10],esi
0x14091a586: jmp    0x14091a59e
0x14091a588: cmp    edi,0x2
0x14091a58b: jl     0x14091a597
0x14091a58d: cmp    r13d,esi
0x14091a590: jge    0x14091a59e
0x14091a592: mov    r13d,esi
0x14091a595: jmp    0x14091a59e
0x14091a597: cmp    r12d,esi
0x14091a59a: cmovl  r12d,esi
0x14091a59e: inc    r15d
0x14091a5a1: add    r14,0x4
0x14091a5a5: mov    rax,QWORD PTR [rbp+0x168]
0x14091a5ac: mov    rcx,QWORD PTR [rbp+0x160]
0x14091a5b3: sub    rax,rcx
0x14091a5b6: sar    rax,0x2
0x14091a5ba: cmp    r15d,eax
0x14091a5bd: jl     0x14091a4e0
0x14091a5c3: mov    DWORD PTR [rbp-0x38],r13d
0x14091a5c7: mov    DWORD PTR [rbp-0x20],r12d
0x14091a5cb: xor    edx,edx
0x14091a5cd: mov    edi,edx
0x14091a5cf: mov    ebx,edx
0x14091a5d1: xor    r13b,r13b
0x14091a5d4: mov    BYTE PTR [rbp-0x46],dl
0x14091a5d7: mov    BYTE PTR [rsp+0x51],dl
0x14091a5db: mov    BYTE PTR [rbp-0x48],dl
0x14091a5de: mov    BYTE PTR [rbp-0x47],dl
0x14091a5e1: mov    BYTE PTR [rsp+0x50],dl
0x14091a5e5: mov    r9d,DWORD PTR [rsp+0x68]
0x14091a5ea: mov    r11d,DWORD PTR [rbp-0x6c]
0x14091a5ee: mov    eax,DWORD PTR [rsp+0x64]
0x14091a5f2: cmp    DWORD PTR [rbp-0x64],0xffffffff
0x14091a5f6: je     0x14091a629
0x14091a5f8: cmp    DWORD PTR [rbp+0xa38],edx
0x14091a5fe: jne    0x14091a629
0x14091a600: cmp    r9d,0x2
0x14091a604: jb     0x14091a629
0x14091a606: cmp    r11d,0x2
0x14091a60a: jl     0x14091a629
0x14091a60c: mov    ecx,0x1
0x14091a611: cmp    eax,0x2
0x14091a614: jl     0x14091a62e
0x14091a616: mov    DWORD PTR [rbp+0x9e8],0x6
0x14091a620: mov    edi,ecx
0x14091a622: mov    ebx,ecx
0x14091a624: mov    BYTE PTR [rbp-0x46],cl
0x14091a627: jmp    0x14091a62e
0x14091a629: mov    ecx,0x1
0x14091a62e: mov    r12d,DWORD PTR [rbp+0xa24]
0x14091a635: cmp    r9d,0x3
0x14091a639: jb     0x14091a661
0x14091a63b: cmp    r11d,0x3
0x14091a63f: jl     0x14091a661
0x14091a641: cmp    eax,0x3
0x14091a644: jl     0x14091a661
0x14091a646: cmp    DWORD PTR [rbp+0xa20],r12d
0x14091a64d: jl     0x14091a655
0x14091a64f: cmp    r11d,0xa
0x14091a653: jge    0x14091a661
0x14091a655: mov    DWORD PTR [rbp+rbx*4+0x9e8],edx
0x14091a65c: inc    edi
0x14091a65e: inc    rbx
0x14091a661: mov    esi,DWORD PTR [rbp+0xa48]
0x14091a667: mov    r14d,DWORD PTR [rbp+0xa44]
0x14091a66e: mov    r15d,DWORD PTR [rbp+0xa40]
0x14091a675: cmp    r9d,0xa
0x14091a679: jb     0x14091a697
0x14091a67b: cmp    r11d,0xa
0x14091a67f: jl     0x14091a6a1
0x14091a681: cmp    eax,0xa
0x14091a684: jl     0x14091a6ab
0x14091a686: mov    DWORD PTR [rbp+rbx*4+0x9e8],ecx
0x14091a68d: inc    edi
0x14091a68f: inc    rbx
0x14091a692: mov    r13b,0x1
0x14091a695: jmp    0x14091a6b0
0x14091a697: cmp    r9d,0x5
0x14091a69b: jb     0x14091a85c
0x14091a6a1: cmp    r11d,0x5
0x14091a6a5: jl     0x14091a72c
0x14091a6ab: cmp    eax,0x5
0x14091a6ae: jl     0x14091a72c
0x14091a6b0: lea    rcx,[rbp+0x870]
0x14091a6b7: call   0x14006f450
0x14091a6bc: test   rax,rax
0x14091a6bf: je     0x14091a723
0x14091a6c1: cmp    DWORD PTR [rbp+0xa28],r12d
0x14091a6c8: jl     0x14091a70c
0x14091a6ca: cmp    DWORD PTR [rsp+0x6c],0x4
0x14091a6cf: je     0x14091a70c
0x14091a6d1: mov    rax,QWORD PTR [rsp+0x58]
0x14091a6d6: mov    rcx,QWORD PTR [rax+0x8]
0x14091a6da: add    rcx,0x3a0
0x14091a6e1: mov    edx,0x6
0x14091a6e6: call   0x140071f90
0x14091a6eb: mov    r11d,DWORD PTR [rbp-0x6c]
0x14091a6ef: test   al,al
0x14091a6f1: jne    0x14091a710
0x14091a6f3: cmp    r11d,0xa
0x14091a6f7: jge    0x14091a727
0x14091a6f9: mov    eax,0x2
0x14091a6fe: mov    DWORD PTR [rbp+rbx*4+0x9e8],eax
0x14091a705: inc    edi
0x14091a707: inc    rbx
0x14091a70a: jmp    0x14091a727
0x14091a70c: mov    r11d,DWORD PTR [rbp-0x6c]
0x14091a710: mov    eax,0x2
0x14091a715: mov    DWORD PTR [rbp+rbx*4+0x9e8],eax
0x14091a71c: inc    edi
0x14091a71e: inc    rbx
0x14091a721: jmp    0x14091a727
0x14091a723: mov    r11d,DWORD PTR [rbp-0x6c]
0x14091a727: mov    r9d,DWORD PTR [rsp+0x68]
0x14091a72c: mov    r8d,DWORD PTR [rsp+0x64]
0x14091a731: cmp    r9d,0x19
0x14091a735: jb     0x14091a769
0x14091a737: cmp    r11d,0x5
0x14091a73b: jl     0x14091a769
0x14091a73d: cmp    DWORD PTR [rbp+0x40],0x5
0x14091a741: jl     0x14091a769
0x14091a743: cmp    r8d,0x5
0x14091a747: jl     0x14091a769
0x14091a749: cmp    DWORD PTR [rbp+0xa2c],r12d
0x14091a750: jl     0x14091a758
0x14091a752: cmp    r11d,0xa
0x14091a756: jge    0x14091a769
0x14091a758: mov    eax,0x3
0x14091a75d: mov    DWORD PTR [rbp+rbx*4+0x9e8],eax
0x14091a764: inc    edi
0x14091a766: inc    rbx
0x14091a769: mov    ecx,DWORD PTR [rbp-0x70]
0x14091a76c: cmp    r9d,0x2d
0x14091a770: jb     0x14091a7a7
0x14091a772: cmp    ecx,0x3
0x14091a775: jl     0x14091a7a7
0x14091a777: cmp    r8d,0x3
0x14091a77b: jl     0x14091a7a7
0x14091a77d: cmp    DWORD PTR [rsp+0x6c],0x0
0x14091a782: jne    0x14091a7a7
0x14091a784: mov    rax,QWORD PTR [rsp+0x58]
0x14091a789: mov    rax,QWORD PTR [rax+0x8]
0x14091a78d: cmp    BYTE PTR [rax+0x3b67],0x0
0x14091a794: je     0x14091a7a7
0x14091a796: mov    DWORD PTR [rbp+rbx*4+0x9e8],0xb
0x14091a7a1: inc    edi
0x14091a7a3: mov    BYTE PTR [rbp-0x48],0x1
0x14091a7a7: cmp    r9d,0xc8
0x14091a7ae: jb     0x14091a805
0x14091a7b0: mov    r10d,DWORD PTR [rbp+0x60]
0x14091a7b4: cmp    DWORD PTR [rbp+0x10],0x1
0x14091a7b8: jl     0x14091a80f
0x14091a7ba: cmp    r8d,0x1
0x14091a7be: jl     0x14091a80f
0x14091a7c0: mov    eax,r10d
0x14091a7c3: cdq
0x14091a7c4: sub    eax,edx
0x14091a7c6: sar    eax,1
0x14091a7c8: cmp    r8d,eax
0x14091a7cb: jl     0x14091a7dd
0x14091a7cd: mov    eax,DWORD PTR [rbp+0x94]
0x14091a7d3: cdq
0x14091a7d4: sub    eax,edx
0x14091a7d6: sar    eax,1
0x14091a7d8: cmp    r9d,eax
0x14091a7db: jge    0x14091a80f
0x14091a7dd: lea    eax,[rsi+r14*1]
0x14091a7e1: add    eax,r15d
0x14091a7e4: cmp    eax,r12d
0x14091a7e7: jl     0x14091a7ef
0x14091a7e9: cmp    r11d,0xa
0x14091a7ed: jge    0x14091a7ff
0x14091a7ef: movsxd rax,edi
0x14091a7f2: mov    DWORD PTR [rbp+rax*4+0x9e8],0xa
0x14091a7fd: inc    edi
0x14091a7ff: mov    BYTE PTR [rbp-0x47],0x1
0x14091a803: jmp    0x14091a80f
0x14091a805: cmp    r9d,0x32
0x14091a809: jb     0x14091a85f
0x14091a80b: mov    r10d,DWORD PTR [rbp+0x60]
0x14091a80f: cmp    DWORD PTR [rbp-0x38],0x1
0x14091a813: jl     0x14091a865
0x14091a815: cmp    r8d,0x1
0x14091a819: jl     0x14091a865
0x14091a81b: mov    eax,r10d
0x14091a81e: cdq
0x14091a81f: sub    eax,edx
0x14091a821: sar    eax,1
0x14091a823: cmp    r8d,eax
0x14091a826: jl     0x14091a838
0x14091a828: mov    eax,DWORD PTR [rbp+0x94]
0x14091a82e: cdq
0x14091a82f: sub    eax,edx
0x14091a831: sar    eax,1
0x14091a833: cmp    r9d,eax
0x14091a836: jge    0x14091a865
0x14091a838: lea    eax,[rsi+r14*1]
0x14091a83c: add    eax,r15d
0x14091a83f: cmp    eax,r12d
0x14091a842: jl     0x14091a84a
0x14091a844: cmp    r11d,0xa
0x14091a848: jge    0x14091a865
0x14091a84a: movsxd rax,edi
0x14091a84d: mov    DWORD PTR [rbp+rax*4+0x9e8],0x9
0x14091a858: inc    edi
0x14091a85a: jmp    0x14091a865
0x14091a85c: mov    ecx,DWORD PTR [rbp-0x70]
0x14091a85f: cmp    r9d,0x5
0x14091a863: jb     0x14091a8b7
0x14091a865: mov    r8d,DWORD PTR [rsp+0x64]
0x14091a86a: cmp    DWORD PTR [rbp-0x20],0x5
0x14091a86e: jl     0x14091a8bc
0x14091a870: cmp    r8d,0x5
0x14091a874: jl     0x14091a8bc
0x14091a876: mov    eax,DWORD PTR [rbp+0x60]
0x14091a879: cdq
0x14091a87a: sub    eax,edx
0x14091a87c: sar    eax,1
0x14091a87e: cmp    r8d,eax
0x14091a881: jl     0x14091a893
0x14091a883: mov    eax,DWORD PTR [rbp+0x94]
0x14091a889: cdq
0x14091a88a: sub    eax,edx
0x14091a88c: sar    eax,1
0x14091a88e: cmp    r9d,eax
0x14091a891: jge    0x14091a8bc
0x14091a893: lea    eax,[rsi+r14*1]
0x14091a897: add    eax,r15d
0x14091a89a: cmp    eax,r12d
0x14091a89d: jl     0x14091a8a5
0x14091a89f: cmp    r11d,0xa
0x14091a8a3: jge    0x14091a8bc
0x14091a8a5: movsxd rax,edi
0x14091a8a8: mov    DWORD PTR [rbp+rax*4+0x9e8],0x8
0x14091a8b3: inc    edi
0x14091a8b5: jmp    0x14091a8bc
0x14091a8b7: mov    r8d,DWORD PTR [rsp+0x64]
0x14091a8bc: mov    ebx,DWORD PTR [rbp+0xa4c]
0x14091a8c2: mov    esi,DWORD PTR [rbp+0xa30]
0x14091a8c8: cmp    r9d,0xa
0x14091a8cc: jb     0x14091a913
0x14091a8ce: mov    rdx,QWORD PTR [rsp+0x58]
0x14091a8d3: cmp    r11d,0x4
0x14091a8d7: jl     0x14091a91e
0x14091a8d9: cmp    r8d,0x4
0x14091a8dd: jl     0x14091a91e
0x14091a8df: cmp    DWORD PTR [rsp+0x6c],0x0
0x14091a8e4: jne    0x14091a91e
0x14091a8e6: mov    rax,QWORD PTR [rdx+0x8]
0x14091a8ea: cmp    BYTE PTR [rax+0x3b67],0x0
0x14091a8f1: je     0x14091a91e
0x14091a8f3: cmp    esi,r12d
0x14091a8f6: jl     0x14091a8fe
0x14091a8f8: cmp    r11d,0xa
0x14091a8fc: jge    0x14091a91e
0x14091a8fe: movsxd rax,edi
0x14091a901: mov    DWORD PTR [rbp+rax*4+0x9e8],0x4
0x14091a90c: inc    edi
0x14091a90e: mov    r14b,0x1
0x14091a911: jmp    0x14091a924
0x14091a913: cmp    r9d,0x5
0x14091a917: jb     0x14091a989
0x14091a919: mov    rdx,QWORD PTR [rsp+0x58]
0x14091a91e: movzx  r14d,BYTE PTR [rsp+0x50]
0x14091a924: mov    r15d,DWORD PTR [rbp-0x68]
0x14091a928: cmp    r11d,0x5
0x14091a92c: jl     0x14091a982
0x14091a92e: cmp    r8d,0x5
0x14091a932: jl     0x14091a982
0x14091a934: cmp    r15d,0x5
0x14091a938: jl     0x14091a982
0x14091a93a: cmp    ecx,0x3
0x14091a93d: jl     0x14091a945
0x14091a93f: cmp    r9d,0x2d
0x14091a943: jae    0x14091a982
0x14091a945: mov    rax,QWORD PTR [rdx+0x8]
0x14091a949: cmp    BYTE PTR [rax+0x3b28],0x0
0x14091a950: je     0x14091a982
0x14091a952: lea    rcx,[rdx+0x130]
0x14091a959: call   0x14006f450
0x14091a95e: test   rax,rax
0x14091a961: je     0x14091a982
0x14091a963: cmp    DWORD PTR [rsp+0x6c],0x0
0x14091a968: jne    0x14091a982
0x14091a96a: test   ebx,ebx
0x14091a96c: jne    0x14091a982
0x14091a96e: movsxd rax,edi
0x14091a971: mov    DWORD PTR [rbp+rax*4+0x9e8],0xc
0x14091a97c: inc    edi
0x14091a97e: mov    al,0x1
0x14091a980: jmp    0x14091a996
0x14091a982: movzx  eax,BYTE PTR [rsp+0x51]
0x14091a987: jmp    0x14091a996
0x14091a989: movzx  eax,BYTE PTR [rsp+0x51]
0x14091a98e: movzx  r14d,al
0x14091a992: mov    r15d,DWORD PTR [rbp-0x68]
0x14091a996: test   r13b,r13b
0x14091a999: je     0x14091a9b2
0x14091a99b: test   r12d,r12d
0x14091a99e: jne    0x14091a9b2
0x14091a9a0: mov    eax,0x1
0x14091a9a5: mov    DWORD PTR [rbp+0x9e8],eax
0x14091a9ab: mov    edi,eax
0x14091a9ad: jmp    0x14091aa59
0x14091a9b2: mov    ecx,DWORD PTR [rsp+0x54]
0x14091a9b6: cmp    BYTE PTR [rbp-0x48],0x0
0x14091a9ba: je     0x14091a9d9
0x14091a9bc: cmp    ecx,0x2
0x14091a9bf: jl     0x14091a9d9
0x14091a9c1: test   ebx,ebx
0x14091a9c3: jne    0x14091a9d9
0x14091a9c5: mov    DWORD PTR [rbp+0x9e8],0xb
0x14091a9cf: mov    edi,0x1
0x14091a9d4: jmp    0x14091aa59
0x14091a9d9: test   al,al
0x14091a9db: je     0x14091a9f9
0x14091a9dd: cmp    ecx,0x2
0x14091a9e0: jl     0x14091a9f9
0x14091a9e2: cmp    DWORD PTR [rbp+0x38],0x0
0x14091a9e6: jne    0x14091a9f9
0x14091a9e8: mov    DWORD PTR [rbp+0x9e8],0xc
0x14091a9f2: mov    edi,0x1
0x14091a9f7: jmp    0x14091aa59
0x14091a9f9: test   r14b,r14b
0x14091a9fc: je     0x14091aa13
0x14091a9fe: test   esi,esi
0x14091aa00: jne    0x14091aa13
0x14091aa02: mov    DWORD PTR [rbp+0x9e8],0x4
0x14091aa0c: mov    edi,0x1
0x14091aa11: jmp    0x14091aa59
0x14091aa13: cmp    BYTE PTR [rbp-0x47],0x0
0x14091aa17: je     0x14091aa31
0x14091aa19: cmp    DWORD PTR [rsp+0x64],0x5
0x14091aa1e: jg     0x14091aa31
0x14091aa20: mov    DWORD PTR [rbp+0x9e8],0xa
0x14091aa2a: mov    edi,0x1
0x14091aa2f: jmp    0x14091aa59
0x14091aa31: cmp    BYTE PTR [rbp-0x46],0x0
0x14091aa35: je     0x14091aa51
0x14091aa37: cmp    DWORD PTR [rbp+0xa38],0x0
0x14091aa3e: jne    0x14091aa51
0x14091aa40: mov    DWORD PTR [rbp+0x9e8],0x6
0x14091aa4a: mov    edi,0x1
0x14091aa4f: jmp    0x14091aa59
0x14091aa51: test   edi,edi
0x14091aa53: je     0x14091da64
0x14091aa59: mov    ecx,edi
0x14091aa5b: call   0x140071f30
0x14091aa60: movsxd r14,eax
0x14091aa63: mov    DWORD PTR [rbp+0x38],r14d
0x14091aa67: lea    rsi,[rbp+0x9e8]
0x14091aa6e: lea    rsi,[rsi+r14*4]
0x14091aa72: mov    rdx,rsi
0x14091aa75: lea    rcx,[rbp+0x600]
0x14091aa7c: call   0x14006f410
0x14091aa81: movsxd rcx,DWORD PTR [rsi]
0x14091aa84: inc    DWORD PTR [rbp+rcx*4+0xa20]
0x14091aa8b: cmp    QWORD PTR [rbp-0x80],0x0
0x14091aa90: jne    0x14091ab21
0x14091aa96: call   0x140121580
0x14091aa9b: mov    r13,rax
0x14091aa9e: mov    QWORD PTR [rbp-0x80],rax
0x14091aaa2: mov    r12,QWORD PTR [rsp+0x58]
0x14091aaa7: lea    rdx,[r12+0x1408]
0x14091aaaf: mov    rcx,rax
0x14091aab2: call   0x1400b9fa0
0x14091aab7: mov    rax,QWORD PTR [rbp-0x58]
0x14091aabb: mov    QWORD PTR [r13+0x60],rax
0x14091aabf: mov    eax,DWORD PTR [rax]
0x14091aac1: mov    DWORD PTR [r13+0x5c],eax
0x14091aac5: mov    DWORD PTR [r13+0x120],0xffff003a
0x14091aad0: mov    r9d,0x20
0x14091aad6: mov    BYTE PTR [rsp+0x20],0x1
0x14091aadb: lea    r8,[r13+0x128]
0x14091aae2: lea    rdx,[r13+0x124]
0x14091aae9: mov    rcx,r12
0x14091aaec: call   0x140aa9ca0
0x14091aaf1: mov    r9d,DWORD PTR [r13+0x128]
0x14091aaf8: movzx  r8d,WORD PTR [r13+0x124]
0x14091ab00: mov    edx,0x1d
0x14091ab05: lea    rcx,[rip+0x1ab69e4]        # 0x1423d14f0
0x14091ab0c: call   0x14145bee0
0x14091ab11: test   al,al
0x14091ab13: je     0x14091ab26
0x14091ab15: mov    WORD PTR [r13+0x120],0x37
0x14091ab1f: jmp    0x14091ab26
0x14091ab21: mov    r12,QWORD PTR [rsp+0x58]
0x14091ab26: xor    edi,edi
0x14091ab28: mov    DWORD PTR [rbp-0x44],edi
0x14091ab2b: mov    r13d,0xffffffff
0x14091ab31: mov    DWORD PTR [rbp-0x10],r13d
0x14091ab35: movsxd rdx,DWORD PTR [rsi]
0x14091ab38: lea    r8,[rip+0xffffffffff6e54c1]        # 0x140000000
0x14091ab3f: cmp    edx,0xc
0x14091ab42: ja     0x14091b48e
0x14091ab48: mov    ecx,DWORD PTR [r8+rdx*4+0x91e170]
0x14091ab50: add    rcx,r8
0x14091ab53: jmp    rcx
0x14091ab55: mov    ecx,DWORD PTR [rbp+0x158]
0x14091ab5b: mov    r13d,ecx
0x14091ab5e: cmp    ecx,DWORD PTR [rsp+0x68]
0x14091ab62: cmovg  r13d,DWORD PTR [rsp+0x68]
0x14091ab68: mov    DWORD PTR [rbp+0x48],0x5
0x14091ab6f: mov    DWORD PTR [rbp+0x4c],0xa
0x14091ab76: mov    DWORD PTR [rbp+0x50],0xf
0x14091ab7d: mov    ecx,DWORD PTR [r8+rdx*4+0x91e1a4]
0x14091ab85: add    rcx,r8
0x14091ab88: jmp    rcx
0x14091ab8a: mov    eax,0x2
0x14091ab8f: mov    DWORD PTR [rbp+0x48],eax
0x14091ab92: mov    DWORD PTR [rbp+0x4c],0x5
0x14091ab99: mov    DWORD PTR [rbp+0x50],0xa
0x14091aba0: jmp    0x14091abde
0x14091aba2: mov    eax,0x3
0x14091aba7: jmp    0x14091ab8f
0x14091aba9: mov    DWORD PTR [rbp+0x48],0xa
0x14091abb0: mov    DWORD PTR [rbp+0x4c],0xf
0x14091abb7: mov    DWORD PTR [rbp+0x50],0x14
0x14091abbe: jmp    0x14091abde
0x14091abc0: mov    DWORD PTR [rbp+0x48],0x4
0x14091abc7: mov    DWORD PTR [rbp+0x4c],0x4
0x14091abce: mov    DWORD PTR [rbp+0x50],0x4
0x14091abd5: jmp    0x14091abde
0x14091abd7: mov    DWORD PTR [rbp+0x48],0x5
0x14091abde: mov    DWORD PTR [rbp+0x10],0x1
0x14091abe5: mov    eax,DWORD PTR [rsp+0x64]
0x14091abe9: mov    esi,eax
0x14091abeb: cmp    DWORD PTR [rbp-0x6c],eax
0x14091abee: cmovl  esi,DWORD PTR [rbp-0x6c]
0x14091abf2: mov    DWORD PTR [rbp-0x70],esi
0x14091abf5: cmp    edx,0x3
0x14091abf8: je     0x14091ac0d
0x14091abfa: cmp    edx,0xc
0x14091abfd: jne    0x14091ac1e
0x14091abff: cmp    r15d,esi
0x14091ac02: jge    0x14091ac1e
0x14091ac04: mov    esi,r15d
0x14091ac07: mov    DWORD PTR [rbp-0x70],r15d
0x14091ac0b: jmp    0x14091ac1e
0x14091ac0d: mov    DWORD PTR [rbp+0x10],0x5
0x14091ac14: cmp    DWORD PTR [rbp+0x40],esi
0x14091ac17: cmovl  esi,DWORD PTR [rbp+0x40]
0x14091ac1b: mov    DWORD PTR [rbp-0x70],esi
0x14091ac1e: lea    rcx,[r12+0x14f8]
0x14091ac26: call   0x14006f450
0x14091ac2b: mov    rbx,rax
0x14091ac2e: test   rax,rax
0x14091ac31: setne  dil
0x14091ac35: add    edi,0x2
0x14091ac38: mov    DWORD PTR [rbp-0x68],edi
0x14091ac3b: lea    rcx,[r12+0x14e0]
0x14091ac43: call   0x14006f450
0x14091ac48: mov    r15d,0x1
0x14091ac4e: test   rax,rax
0x14091ac51: jne    0x14091ac5d
0x14091ac53: test   rbx,rbx
0x14091ac56: cmove  edi,r15d
0x14091ac5a: mov    DWORD PTR [rbp-0x68],edi
0x14091ac5d: lea    rcx,[r12+0x14c8]
0x14091ac65: call   0x14006f450
0x14091ac6a: mov    ecx,DWORD PTR [rbp-0x68]
0x14091ac6d: test   rax,rax
0x14091ac70: jne    0x14091ac81
0x14091ac72: cmp    edi,0x1
0x14091ac75: mov    r10,rax
0x14091ac78: cmove  ecx,r10d
0x14091ac7c: mov    DWORD PTR [rbp-0x68],ecx
0x14091ac7f: jmp    0x14091ac84
0x14091ac81: xor    r10d,r10d
0x14091ac84: cmp    DWORD PTR [rbp+r14*4+0x9e8],0x4
0x14091ac8d: mov    edx,0x3
0x14091ac92: cmovne r15d,edx
0x14091ac96: mov    ebx,r10d
0x14091ac99: mov    r11,r10
0x14091ac9c: mov    r14d,0xffffffff
0x14091aca2: mov    edi,r10d
0x14091aca5: lea    rax,[rbp+0x48]
0x14091aca9: mov    QWORD PTR [rbp-0x38],rax
0x14091acad: mov    QWORD PTR [rbp-0x20],rdx
0x14091acb1: cmp    esi,DWORD PTR [rax]
0x14091acb3: jl     0x14091add0
0x14091acb9: mov    esi,r10d
0x14091acbc: test   ecx,ecx
0x14091acbe: jb     0x14091adcd
0x14091acc4: mov    ecx,DWORD PTR [rbp+0x10]
0x14091acc7: mov    r12d,ecx
0x14091acca: jmp    0x14091acd3
0x14091accc: nop    DWORD PTR [rax+0x0]
0x14091acd0: mov    ecx,DWORD PTR [rbp+0x10]
0x14091acd3: mov    edx,r10d
0x14091acd6: mov    r8d,DWORD PTR [rax]
0x14091acd9: lea    rax,[r11+r11*2]
0x14091acdd: lea    r9,[rbp+0xba4]
0x14091ace4: lea    r9,[r9+rax*4]
0x14091ace8: test   esi,esi
0x14091acea: je     0x14091ad4e
0x14091acec: mov    r10d,r12d
0x14091acef: imul   r10d,r8d
0x14091acf3: mov    ecx,r10d
0x14091acf6: cmp    edx,0x1
0x14091acf9: jne    0x14091ad05
0x14091acfb: lea    eax,[r10+r8*1]
0x14091acff: lea    ecx,[rax+r8*4]
0x14091ad03: jmp    0x14091ad1b
0x14091ad05: cmp    edx,0x2
0x14091ad08: jne    0x14091ad10
0x14091ad0a: imul   eax,r8d,0xf
0x14091ad0e: jmp    0x14091ad19
0x14091ad10: cmp    edx,0x3
0x14091ad13: jne    0x14091ad1b
0x14091ad15: imul   eax,r8d,0x1e
0x14091ad19: add    ecx,eax
0x14091ad1b: cmp    ecx,r13d
0x14091ad1e: jg     0x14091ad45
0x14091ad20: mov    DWORD PTR [r9-0x4],r8d
0x14091ad24: mov    DWORD PTR [r9],edx
0x14091ad27: mov    DWORD PTR [r9+0x4],esi
0x14091ad2b: mov    DWORD PTR [rbp+r11*4+0xaa0],ecx
0x14091ad33: cmp    ecx,edi
0x14091ad35: jle    0x14091ad3c
0x14091ad37: mov    r14d,ebx
0x14091ad3a: mov    edi,ecx
0x14091ad3c: inc    ebx
0x14091ad3e: inc    r11
0x14091ad41: add    r9,0xc
0x14091ad45: inc    edx
0x14091ad47: cmp    edx,r15d
0x14091ad4a: jle    0x14091acf3
0x14091ad4c: jmp    0x14091adae
0x14091ad4e: mov    r10d,ecx
0x14091ad51: imul   r10d,r8d
0x14091ad55: mov    ecx,r10d
0x14091ad58: cmp    edx,0x1
0x14091ad5b: jne    0x14091ad67
0x14091ad5d: lea    eax,[r10+r8*1]
0x14091ad61: lea    ecx,[rax+r8*4]
0x14091ad65: jmp    0x14091ad7d
0x14091ad67: cmp    edx,0x2
0x14091ad6a: jne    0x14091ad72
0x14091ad6c: imul   eax,r8d,0xf
0x14091ad70: jmp    0x14091ad7b
0x14091ad72: cmp    edx,0x3
0x14091ad75: jne    0x14091ad7d
0x14091ad77: imul   eax,r8d,0x1e
0x14091ad7b: add    ecx,eax
0x14091ad7d: cmp    ecx,r13d
0x14091ad80: jg     0x14091ada7
0x14091ad82: mov    DWORD PTR [r9-0x4],r8d
0x14091ad86: mov    DWORD PTR [r9],edx
0x14091ad89: mov    DWORD PTR [r9+0x4],esi
0x14091ad8d: mov    DWORD PTR [rbp+r11*4+0xaa0],ecx
0x14091ad95: cmp    ecx,edi
0x14091ad97: jle    0x14091ad9e
0x14091ad99: mov    r14d,ebx
0x14091ad9c: mov    edi,ecx
0x14091ad9e: inc    ebx
0x14091ada0: inc    r11
0x14091ada3: add    r9,0xc
0x14091ada7: inc    edx
0x14091ada9: cmp    edx,r15d
0x14091adac: jle    0x14091ad55
0x14091adae: inc    esi
0x14091adb0: add    r12d,0x5
0x14091adb4: mov    ecx,DWORD PTR [rbp-0x68]
0x14091adb7: cmp    esi,ecx
0x14091adb9: mov    rax,QWORD PTR [rbp-0x38]
0x14091adbd: mov    r10d,0x0
0x14091adc3: jle    0x14091acd0
0x14091adc9: mov    rdx,QWORD PTR [rbp-0x20]
0x14091adcd: mov    esi,DWORD PTR [rbp-0x70]
0x14091add0: add    rax,0x4
0x14091add4: mov    QWORD PTR [rbp-0x38],rax
0x14091add8: sub    rdx,0x1
0x14091addc: mov    QWORD PTR [rbp-0x20],rdx
0x14091ade0: jne    0x14091acb1
0x14091ade6: test   ebx,ebx
0x14091ade8: jne    0x14091ae0f
0x14091adea: mov    ecx,DWORD PTR [rbp+0x48]
0x14091aded: mov    DWORD PTR [rbp+0xba0],ecx
0x14091adf3: mov    QWORD PTR [rbp+0xba4],0x0
0x14091adfe: mov    eax,DWORD PTR [rbp+0x10]
0x14091ae01: imul   eax,ecx
0x14091ae04: mov    DWORD PTR [rbp+0xaa0],eax
0x14091ae0a: mov    ebx,0x1
0x14091ae0f: mov    ecx,ebx
0x14091ae11: call   0x140071f30
0x14091ae16: mov    edx,eax
0x14091ae18: cmp    r14d,0xffffffff
0x14091ae1c: je     0x14091ae48
0x14091ae1e: movsxd rbx,DWORD PTR [rbp+0x38]
0x14091ae22: cmp    DWORD PTR [rbp+rbx*4+0x9e8],0x6
0x14091ae2a: jne    0x14091ae31
0x14091ae2c: mov    edx,r14d
0x14091ae2f: jmp    0x14091ae4b
0x14091ae31: movsxd rax,r14d
0x14091ae34: mov    ecx,DWORD PTR [rbp+rax*4+0xaa0]
0x14091ae3b: lea    eax,[rcx+rcx*4]
0x14091ae3e: cmp    DWORD PTR [rsp+0x68],eax
0x14091ae42: cmovge edx,r14d
0x14091ae46: jmp    0x14091ae4b
0x14091ae48: mov    ebx,DWORD PTR [rbp+0x38]
0x14091ae4b: movsxd rcx,edx
0x14091ae4e: lea    rax,[rcx+rcx*2]
0x14091ae52: mov    r15d,DWORD PTR [rbp+rax*4+0xba0]
0x14091ae5a: mov    r13d,DWORD PTR [rbp+rax*4+0xba4]
0x14091ae62: mov    r12d,DWORD PTR [rbp+rax*4+0xba8]
0x14091ae6a: mov    eax,DWORD PTR [rsp+0x68]
0x14091ae6e: sub    eax,DWORD PTR [rbp+rcx*4+0xaa0]
0x14091ae75: mov    DWORD PTR [rsp+0x68],eax
0x14091ae79: lea    rcx,[rbp+0x308]
0x14091ae80: call   0x14006ee50
0x14091ae85: test   rax,rax
0x14091ae88: je     0x14091af41
0x14091ae8e: movsxd rax,ebx
0x14091ae91: mov    ecx,DWORD PTR [rbp+rax*4+0x9e8]
0x14091ae98: sub    ecx,0x4
0x14091ae9b: test   ecx,0xfffffff7
0x14091aea1: je     0x14091af41
0x14091aea7: lea    rcx,[rbp+0x308]
0x14091aeae: call   0x14006ee50
0x14091aeb3: mov    rcx,rax
0x14091aeb6: call   0x140071f30
0x14091aebb: movsxd rsi,eax
0x14091aebe: mov    rdx,rsi
0x14091aec1: lea    rcx,[rbp+0x308]
0x14091aec8: call   0x14006f220
0x14091aecd: mov    rbx,QWORD PTR [rax]
0x14091aed0: mov    r8,QWORD PTR [rbx+0x18]
0x14091aed4: mov    rdx,rbx
0x14091aed7: mov    rcx,QWORD PTR [rbp-0x80]
0x14091aedb: call   0x140123990
0x14091aee0: mov    rdi,rax
0x14091aee3: mov    rcx,QWORD PTR [rbx+0x10]
0x14091aee7: add    rcx,0xc8
0x14091aeee: mov    edx,0x1
0x14091aef3: call   0x140071f90
0x14091aef8: test   al,al
0x14091aefa: jne    0x14091af18
0x14091aefc: mov    rcx,QWORD PTR [rbx+0x10]
0x14091af00: call   0x140c0ef40
0x14091af05: mov    rax,QWORD PTR [rbx+0x10]
0x14091af09: mov    rcx,QWORD PTR [rax+0x130]
0x14091af10: mov    rax,QWORD PTR [rcx+0x50]
0x14091af14: mov    DWORD PTR [rax+0x20],r12d
0x14091af18: mov    rax,QWORD PTR [rbp-0x58]
0x14091af1c: mov    eax,DWORD PTR [rax]
0x14091af1e: mov    DWORD PTR [rdi+0x64],eax
0x14091af21: mov    eax,DWORD PTR [rsp+0x54]
0x14091af25: mov    DWORD PTR [rdi+0x68],eax
0x14091af28: mov    rdx,rsi
0x14091af2b: lea    rcx,[rbp+0x308]
0x14091af32: call   0x1400b99a0
0x14091af37: inc    DWORD PTR [rbp-0x44]
0x14091af3a: dec    DWORD PTR [rsp+0x64]
0x14091af3e: dec    r15d
0x14091af41: test   r15d,r15d
0x14091af44: jle    0x14091b481
0x14091af4a: nop    WORD PTR [rax+rax*1+0x0]
0x14091af50: mov    ecx,r15d
0x14091af53: call   0x140071f30
0x14091af58: lea    r14d,[rax+0x1]
0x14091af5c: mov    sil,0x1
0x14091af5f: mov    rax,QWORD PTR [rbp-0x50]
0x14091af63: cmp    QWORD PTR [rax+0x308],0x0
0x14091af6b: je     0x14091afe8
0x14091af6d: lea    rdx,[rbp+0x220]
0x14091af74: lea    rcx,[rbp+0x260]
0x14091af7b: call   0x14006f240
0x14091af80: lea    rdx,[rbp+0x510]
0x14091af87: lea    rcx,[rbp+0x260]
0x14091af8e: call   0x14006f230
0x14091af93: lea    rdx,[rbp+0x510]
0x14091af9a: lea    rcx,[rbp+0x220]
0x14091afa1: call   0x1400b9970
0x14091afa6: test   al,al
0x14091afa8: jne    0x14091b067
0x14091afae: xchg   ax,ax
0x14091afb0: mov    rax,QWORD PTR [rbp+0x220]
0x14091afb7: mov    rcx,QWORD PTR [rax]
0x14091afba: cmp    DWORD PTR [rcx],0x64
0x14091afbd: jge    0x14091b064
0x14091afc3: lea    rcx,[rbp+0x220]
0x14091afca: call   0x14006ee00
0x14091afcf: lea    rdx,[rbp+0x510]
0x14091afd6: lea    rcx,[rbp+0x220]
0x14091afdd: call   0x1400b9970
0x14091afe2: test   al,al
0x14091afe4: je     0x14091afb0
0x14091afe6: jmp    0x14091b067
0x14091afe8: lea    rdx,[rbp+0x228]
0x14091afef: lea    rcx,[rbp+0x2d8]
0x14091aff6: call   0x14006f240
0x14091affb: lea    rdx,[rbp+0x518]
0x14091b002: lea    rcx,[rbp+0x2d8]
0x14091b009: call   0x14006f230
0x14091b00e: lea    rdx,[rbp+0x518]
0x14091b015: lea    rcx,[rbp+0x228]
0x14091b01c: call   0x1400b9970
0x14091b021: test   al,al
0x14091b023: jne    0x14091b067
0x14091b025: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x14091b030: mov    rax,QWORD PTR [rbp+0x228]
0x14091b037: mov    rcx,QWORD PTR [rax]
0x14091b03a: cmp    DWORD PTR [rcx],0x64
0x14091b03d: jge    0x14091b064
0x14091b03f: lea    rcx,[rbp+0x228]
0x14091b046: call   0x14006ee00
0x14091b04b: lea    rdx,[rbp+0x518]
0x14091b052: lea    rcx,[rbp+0x228]
0x14091b059: call   0x1400b9970
0x14091b05e: test   al,al
0x14091b060: je     0x14091b030
0x14091b062: jmp    0x14091b067
0x14091b064: xor    sil,sil
0x14091b067: mov    rdi,QWORD PTR [rbp+0x268]
0x14091b06e: mov    r8,QWORD PTR [rbp+0x260]
0x14091b075: sub    rdi,r8
0x14091b078: sar    rdi,0x3
0x14091b07c: mov    rbx,QWORD PTR [rbp+0x2e0]
0x14091b083: mov    rdx,QWORD PTR [rbp+0x2d8]
0x14091b08a: test   rdi,rdi
0x14091b08d: jne    0x14091b09d
0x14091b08f: mov    rax,rbx
0x14091b092: sub    rax,rdx
0x14091b095: test   rax,0xfffffffffffffff8
0x14091b09b: je     0x14091b0a6
0x14091b09d: test   sil,sil
0x14091b0a0: je     0x14091b128
0x14091b0a6: cmp    BYTE PTR [rsp+0x70],0x0
0x14091b0ab: je     0x14091b128
0x14091b0ad: mov    r14d,r15d
0x14091b0b0: mov    ecx,0x3c
0x14091b0b5: call   0x141539690
0x14091b0ba: mov    QWORD PTR [rbp+0x928],rax
0x14091b0c1: mov    rcx,rax
0x14091b0c4: call   0x1400ff2e0
0x14091b0c9: nop
0x14091b0ca: mov    DWORD PTR [rax],r15d
0x14091b0cd: mov    rdx,QWORD PTR [rsp+0x58]
0x14091b0d2: movsx  ecx,WORD PTR [rdx+0x98]
0x14091b0d9: mov    DWORD PTR [rax+0x4],ecx
0x14091b0dc: mov    ecx,0xffffffff
0x14091b0e1: mov    DWORD PTR [rax+0x8],ecx
0x14091b0e4: mov    QWORD PTR [rax+0x10],0xffffffffffffffff
0x14091b0ec: mov    ecx,DWORD PTR [rdx+0x4]
0x14091b0ef: mov    DWORD PTR [rax+0xc],ecx
0x14091b0f2: mov    DWORD PTR [rax+0x2c],r12d
0x14091b0f6: mov    DWORD PTR [rax+0x28],r13d
0x14091b0fa: mov    rcx,QWORD PTR [rbp-0x58]
0x14091b0fe: mov    ecx,DWORD PTR [rcx]
0x14091b100: mov    DWORD PTR [rax+0x30],ecx
0x14091b103: mov    ecx,DWORD PTR [rsp+0x54]
0x14091b107: mov    DWORD PTR [rax+0x34],ecx
0x14091b10a: mov    rdx,rax
0x14091b10d: mov    rcx,QWORD PTR [rbp-0x80]
0x14091b111: call   0x140124760
0x14091b116: mov    rcx,QWORD PTR [rbp-0x50]
0x14091b11a: mov    eax,DWORD PTR [rcx+0x88]
0x14091b120: mov    DWORD PTR [rbp-0x10],eax
0x14091b123: jmp    0x14091b468
0x14091b128: mov    rax,QWORD PTR [rbp-0x50]
0x14091b12c: cmp    QWORD PTR [rax+0x308],0x0
0x14091b134: je     0x14091b2d1
0x14091b13a: cmp    edi,0x1
0x14091b13d: ja     0x14091b143
0x14091b13f: xor    eax,eax
0x14091b141: jmp    0x14091b182
0x14091b143: call   0x140eb68b0
0x14091b148: mov    r8d,eax
0x14091b14b: mov    eax,0x3
0x14091b150: mul    r8d
0x14091b153: mov    ecx,r8d
0x14091b156: sub    ecx,edx
0x14091b158: shr    ecx,1
0x14091b15a: add    ecx,edx
0x14091b15c: shr    ecx,0x1e
0x14091b15f: imul   ecx,ecx,0x80000001
0x14091b165: add    r8d,ecx
0x14091b168: xor    edx,edx
0x14091b16a: mov    eax,0x7fffffff
0x14091b16f: div    edi
0x14091b171: lea    ecx,[rax+0x1]
0x14091b174: xor    edx,edx
0x14091b176: mov    eax,r8d
0x14091b179: div    ecx
0x14091b17b: mov    r8,QWORD PTR [rbp+0x260]
0x14091b182: mov    esi,eax
0x14091b184: movsxd rcx,eax
0x14091b187: mov    rdi,QWORD PTR [r8+rcx*8]
0x14091b18b: cmp    r14d,DWORD PTR [rdi]
0x14091b18e: cmovg  r14d,DWORD PTR [rdi]
0x14091b192: mov    rbx,QWORD PTR [rbp-0x80]
0x14091b196: lea    r8,[rbx+0x38]
0x14091b19a: mov    rdx,QWORD PTR [rbx+0x38]
0x14091b19e: lea    rcx,[rbp+0x230]
0x14091b1a5: call   0x14006f740
0x14091b1aa: lea    r8,[rbx+0x38]
0x14091b1ae: mov    rdx,QWORD PTR [rbx+0x40]
0x14091b1b2: lea    rcx,[rbp+0x520]
0x14091b1b9: call   0x14006f740
0x14091b1be: xchg   ax,ax
0x14091b1c0: mov    rax,QWORD PTR [rbp+0x230]
0x14091b1c7: cmp    rax,QWORD PTR [rbp+0x520]
0x14091b1ce: je     0x14091b21b
0x14091b1d0: mov    edx,0x1
0x14091b1d5: mov    eax,0xff
0x14091b1da: cmovb  edx,eax
0x14091b1dd: test   dl,dl
0x14091b1df: jns    0x14091b21b
0x14091b1e1: lea    rcx,[rbp+0x230]
0x14091b1e8: call   0x14006ee10
0x14091b1ed: mov    rbx,QWORD PTR [rax]
0x14091b1f0: lea    rcx,[rbx+0x4]
0x14091b1f4: lea    rdx,[rdi+0x4]
0x14091b1f8: mov    rax,QWORD PTR [rsp+0x58]
0x14091b1fd: mov    r8d,DWORD PTR [rax+0x4]
0x14091b201: call   0x1400fdaf0
0x14091b206: test   al,al
0x14091b208: jne    0x14091b218
0x14091b20a: lea    rcx,[rbp+0x230]
0x14091b211: call   0x14006ee00
0x14091b216: jmp    0x14091b1c0
0x14091b218: add    DWORD PTR [rbx],r14d
0x14091b21b: lea    r8,[rbp+0x520]
0x14091b222: lea    rdx,[rbp+0x8b]
0x14091b229: lea    rcx,[rbp+0x230]
0x14091b230: call   0x14006ee20
0x14091b235: xor    edx,edx
0x14091b237: movzx  ecx,BYTE PTR [rax]
0x14091b23a: call   0x140071e60
0x14091b23f: test   al,al
0x14091b241: je     0x14091b2b1
0x14091b243: mov    ecx,0x3c
0x14091b248: call   0x141539690
0x14091b24d: mov    QWORD PTR [rbp+0x920],rax
0x14091b254: mov    rcx,rax
0x14091b257: call   0x1400ff2e0
0x14091b25c: mov    rbx,rax
0x14091b25f: mov    DWORD PTR [rax],r14d
0x14091b262: lea    rcx,[rax+0x4]
0x14091b266: lea    rdx,[rdi+0x4]
0x14091b26a: mov    r8d,0xffffffff
0x14091b270: call   0x1400fda90
0x14091b275: mov    rax,QWORD PTR [rsp+0x58]
0x14091b27a: mov    ecx,DWORD PTR [rax+0x4]
0x14091b27d: mov    DWORD PTR [rbx+0xc],ecx
0x14091b280: mov    DWORD PTR [rbx+0x2c],r12d
0x14091b284: mov    DWORD PTR [rbx+0x28],r13d
0x14091b288: mov    rax,QWORD PTR [rbp-0x58]
0x14091b28c: mov    ecx,DWORD PTR [rax]
0x14091b28e: mov    DWORD PTR [rbx+0x30],ecx
0x14091b291: mov    eax,DWORD PTR [rsp+0x54]
0x14091b295: mov    DWORD PTR [rbx+0x34],eax
0x14091b298: mov    rdx,rbx
0x14091b29b: mov    rcx,QWORD PTR [rbp-0x80]
0x14091b29f: call   0x140124760
0x14091b2a4: mov    rcx,QWORD PTR [rbp-0x50]
0x14091b2a8: mov    eax,DWORD PTR [rcx+0x88]
0x14091b2ae: mov    DWORD PTR [rbp-0x10],eax
0x14091b2b1: sub    DWORD PTR [rdi],r14d
0x14091b2b4: cmp    DWORD PTR [rdi],0x0
0x14091b2b7: jg     0x14091b468
0x14091b2bd: movsxd rdx,esi
0x14091b2c0: lea    rcx,[rbp+0x260]
0x14091b2c7: call   0x1400b99a0
0x14091b2cc: jmp    0x14091b468
0x14091b2d1: sub    rbx,rdx
0x14091b2d4: sar    rbx,0x3
0x14091b2d8: cmp    ebx,0x1
0x14091b2db: ja     0x14091b2e1
0x14091b2dd: xor    eax,eax
0x14091b2df: jmp    0x14091b320
0x14091b2e1: call   0x140eb68b0
0x14091b2e6: mov    r8d,eax
0x14091b2e9: mov    eax,0x3
0x14091b2ee: mul    r8d
0x14091b2f1: mov    ecx,r8d
0x14091b2f4: sub    ecx,edx
0x14091b2f6: shr    ecx,1
0x14091b2f8: add    ecx,edx
0x14091b2fa: shr    ecx,0x1e
0x14091b2fd: imul   ecx,ecx,0x80000001
0x14091b303: add    r8d,ecx
0x14091b306: xor    edx,edx
0x14091b308: mov    eax,0x7fffffff
0x14091b30d: div    ebx
0x14091b30f: lea    ecx,[rax+0x1]
0x14091b312: xor    edx,edx
0x14091b314: mov    eax,r8d
0x14091b317: div    ecx
0x14091b319: mov    rdx,QWORD PTR [rbp+0x2d8]
0x14091b320: mov    esi,eax
0x14091b322: movsxd rcx,eax
0x14091b325: mov    rdi,QWORD PTR [rdx+rcx*8]
0x14091b329: cmp    r14d,DWORD PTR [rdi]
0x14091b32c: cmovg  r14d,DWORD PTR [rdi]
0x14091b330: mov    rbx,QWORD PTR [rbp-0x80]
0x14091b334: lea    r8,[rbx+0x38]
0x14091b338: mov    rdx,QWORD PTR [rbx+0x38]
0x14091b33c: lea    rcx,[rbp+0x238]
0x14091b343: call   0x14006f740
0x14091b348: lea    r8,[rbx+0x38]
0x14091b34c: mov    rdx,QWORD PTR [rbx+0x40]
0x14091b350: lea    rcx,[rbp+0x528]
0x14091b357: call   0x14006f740
0x14091b35c: nop    DWORD PTR [rax+0x0]
0x14091b360: mov    rax,QWORD PTR [rbp+0x238]
0x14091b367: cmp    rax,QWORD PTR [rbp+0x528]
0x14091b36e: je     0x14091b3bb
0x14091b370: mov    edx,0x1
0x14091b375: mov    eax,0xff
0x14091b37a: cmovb  edx,eax
0x14091b37d: test   dl,dl
0x14091b37f: jns    0x14091b3bb
0x14091b381: lea    rcx,[rbp+0x238]
0x14091b388: call   0x14006ee10
0x14091b38d: mov    rbx,QWORD PTR [rax]
0x14091b390: lea    rcx,[rbx+0x4]
0x14091b394: lea    rdx,[rdi+0x4]
0x14091b398: mov    rax,QWORD PTR [rsp+0x58]
0x14091b39d: mov    r8d,DWORD PTR [rax+0x4]
0x14091b3a1: call   0x1400fdaf0
0x14091b3a6: test   al,al
0x14091b3a8: jne    0x14091b3b8
0x14091b3aa: lea    rcx,[rbp+0x238]
0x14091b3b1: call   0x14006ee00
0x14091b3b6: jmp    0x14091b360
0x14091b3b8: add    DWORD PTR [rbx],r14d
0x14091b3bb: lea    r8,[rbp+0x528]
0x14091b3c2: lea    rdx,[rbp+0x8a]
0x14091b3c9: lea    rcx,[rbp+0x238]
0x14091b3d0: call   0x14006ee20
0x14091b3d5: xor    edx,edx
0x14091b3d7: movzx  ecx,BYTE PTR [rax]
0x14091b3da: call   0x140071e60
0x14091b3df: test   al,al
0x14091b3e1: je     0x14091b451
0x14091b3e3: mov    ecx,0x3c
0x14091b3e8: call   0x141539690
0x14091b3ed: mov    QWORD PTR [rbp+0x918],rax
0x14091b3f4: mov    rcx,rax
0x14091b3f7: call   0x1400ff2e0
0x14091b3fc: mov    rbx,rax
0x14091b3ff: mov    DWORD PTR [rax],r14d
0x14091b402: lea    rcx,[rax+0x4]
0x14091b406: lea    rdx,[rdi+0x4]
0x14091b40a: mov    r8d,0xffffffff
0x14091b410: call   0x1400fda90
0x14091b415: mov    rax,QWORD PTR [rsp+0x58]
0x14091b41a: mov    ecx,DWORD PTR [rax+0x4]
0x14091b41d: mov    DWORD PTR [rbx+0xc],ecx
0x14091b420: mov    DWORD PTR [rbx+0x2c],r12d
0x14091b424: mov    DWORD PTR [rbx+0x28],r13d
0x14091b428: mov    rax,QWORD PTR [rbp-0x58]
0x14091b42c: mov    ecx,DWORD PTR [rax]
0x14091b42e: mov    DWORD PTR [rbx+0x30],ecx
0x14091b431: mov    eax,DWORD PTR [rsp+0x54]
0x14091b435: mov    DWORD PTR [rbx+0x34],eax
0x14091b438: mov    rdx,rbx
0x14091b43b: mov    rcx,QWORD PTR [rbp-0x80]
0x14091b43f: call   0x140124760
0x14091b444: mov    rcx,QWORD PTR [rbp-0x50]
0x14091b448: mov    eax,DWORD PTR [rcx+0x88]
0x14091b44e: mov    DWORD PTR [rbp-0x10],eax
0x14091b451: sub    DWORD PTR [rdi],r14d
0x14091b454: cmp    DWORD PTR [rdi],0x0
0x14091b457: jg     0x14091b468
0x14091b459: movsxd rdx,esi
0x14091b45c: lea    rcx,[rbp+0x2d8]
0x14091b463: call   0x1400b99a0
0x14091b468: sub    DWORD PTR [rbp-0x6c],r14d
0x14091b46c: sub    DWORD PTR [rsp+0x64],r14d
0x14091b471: sub    r15d,r14d
0x14091b474: add    DWORD PTR [rbp-0x44],r14d
0x14091b478: test   r15d,r15d
0x14091b47b: jg     0x14091af50
0x14091b481: lea    r8,[rip+0xffffffffff6e4b78]        # 0x140000000
0x14091b488: mov    r13d,0xffffffff
0x14091b48e: xor    r15d,r15d
0x14091b491: mov    ebx,r15d
0x14091b494: mov    edi,r15d
0x14091b497: movsxd rsi,DWORD PTR [rbp+0x38]
0x14091b49b: movsxd rcx,DWORD PTR [rbp+rsi*4+0x9e8]
0x14091b4a3: cmp    ecx,0xc
0x14091b4a6: ja     0x14091c52e
0x14091b4ac: mov    ecx,DWORD PTR [r8+rcx*4+0x91e1d8]
0x14091b4b4: add    rcx,r8
0x14091b4b7: jmp    rcx
0x14091b4b9: mov    r14d,0x3
0x14091b4bf: mov    DWORD PTR [rbp+0x678],r14d
0x14091b4c6: mov    DWORD PTR [rbp+0x67c],0x9
0x14091b4d0: mov    DWORD PTR [rbp+0x680],0xf
0x14091b4da: mov    rbx,rdi
0x14091b4dd: mov    ecx,DWORD PTR [rsp+0x64]
0x14091b4e1: mov    edi,ecx
0x14091b4e3: cmp    DWORD PTR [rbp-0x70],ecx
0x14091b4e6: cmovl  edi,DWORD PTR [rbp-0x70]
0x14091b4ea: mov    esi,DWORD PTR [rsp+0x68]
0x14091b4ee: cmp    esi,0x195
0x14091b4f4: jbe    0x14091b531
0x14091b4f6: mov    ecx,r14d
0x14091b4f9: call   0x140071f30
0x14091b4fe: mov    r15d,0x1
0x14091b504: test   eax,eax
0x14091b506: je     0x14091b537
0x14091b508: cmp    edi,0x9
0x14091b50b: jl     0x14091b537
0x14091b50d: mov    ebx,r15d
0x14091b510: cmp    esi,0x2a3
0x14091b516: jbe    0x14091b537
0x14091b518: mov    ecx,r14d
0x14091b51b: call   0x140071f30
0x14091b520: test   eax,eax
0x14091b522: je     0x14091b537
0x14091b524: cmp    edi,0xf
0x14091b527: mov    eax,0x2
0x14091b52c: cmovge ebx,eax
0x14091b52f: jmp    0x14091b537
0x14091b531: mov    r15d,0x1
0x14091b537: mov    r13d,DWORD PTR [rbp+rbx*4+0x678]
0x14091b53f: imul   eax,r13d,0xfffffff1
0x14091b543: add    esi,eax
0x14091b545: mov    DWORD PTR [rsp+0x68],esi
0x14091b549: lea    rcx,[rbp+0x6e8]
0x14091b550: call   0x140065b00
0x14091b555: nop
0x14091b556: xor    eax,eax
0x14091b558: mov    DWORD PTR [rbp+0x64],eax
0x14091b55b: lea    rcx,[rbp+0x618]
0x14091b562: call   0x14006f370
0x14091b567: mov    ecx,DWORD PTR [rbp+0x64]
0x14091b56a: cmp    ecx,eax
0x14091b56c: jge    0x14091b5aa
0x14091b56e: xchg   ax,ax
0x14091b570: movsxd rdx,ecx
0x14091b573: lea    rcx,[rbp+0x278]
0x14091b57a: call   0x14006f360
0x14091b57f: cmp    DWORD PTR [rax],r13d
0x14091b582: jl     0x14091b594
0x14091b584: lea    rdx,[rbp+0x64]
0x14091b588: lea    rcx,[rbp+0x6e8]
0x14091b58f: call   0x14006f410
0x14091b594: inc    DWORD PTR [rbp+0x64]
0x14091b597: lea    rcx,[rbp+0x618]
0x14091b59e: call   0x14006f370
0x14091b5a3: mov    ecx,DWORD PTR [rbp+0x64]
0x14091b5a6: cmp    ecx,eax
0x14091b5a8: jl     0x14091b570
0x14091b5aa: lea    rcx,[rbp+0x6e8]
0x14091b5b1: call   0x14006f370
0x14091b5b6: test   rax,rax
0x14091b5b9: je     0x14091bac0
0x14091b5bf: lea    rcx,[rbp+0x6e8]
0x14091b5c6: call   0x14006f370
0x14091b5cb: mov    rcx,rax
0x14091b5ce: call   0x140071f30
0x14091b5d3: movsxd rdx,eax
0x14091b5d6: lea    rcx,[rbp+0x6e8]
0x14091b5dd: call   0x14006f360
0x14091b5e2: movsxd rsi,DWORD PTR [rax]
0x14091b5e5: mov    rdx,rsi
0x14091b5e8: lea    rcx,[rbp+0x618]
0x14091b5ef: call   0x14006f360
0x14091b5f4: mov    r14d,DWORD PTR [rax]
0x14091b5f7: mov    DWORD PTR [rbp+0x10],r14d
0x14091b5fb: cmp    r14d,0xffffffff
0x14091b5ff: je     0x14091bac0
0x14091b605: mov    edi,r15d
0x14091b608: movzx  edx,r14w
0x14091b60c: lea    rcx,[rip+0x1bd1435]        # 0x1424eca48
0x14091b613: call   0x1400bba60
0x14091b618: test   rax,rax
0x14091b61b: je     0x14091b6f1
0x14091b621: lea    rbx,[rax+0x178]
0x14091b628: lea    rdx,[rbp+0x240]
0x14091b62f: mov    rcx,rbx
0x14091b632: call   0x14006f240
0x14091b637: lea    rdx,[rbp+0x530]
0x14091b63e: mov    rcx,rbx
0x14091b641: call   0x14006f230
0x14091b646: lea    rdx,[rbp+0x530]
0x14091b64d: lea    rcx,[rbp+0x240]
0x14091b654: call   0x1400b9970
0x14091b659: test   al,al
0x14091b65b: jne    0x14091b6f1
0x14091b661: mov    ebx,edi
0x14091b663: lea    rcx,[rbp+0x240]
0x14091b66a: call   0x14006ee10
0x14091b66f: mov    rcx,QWORD PTR [rax]
0x14091b672: movsx  edi,WORD PTR [rcx+0x490]
0x14091b679: cmp    edi,ebx
0x14091b67b: cmovle edi,ebx
0x14091b67e: lea    rcx,[rbp+0x240]
0x14091b685: call   0x14006ee00
0x14091b68a: lea    rdx,[rbp+0x530]
0x14091b691: lea    rcx,[rbp+0x240]
0x14091b698: call   0x1400b9970
0x14091b69d: test   al,al
0x14091b69f: je     0x14091b661
0x14091b6a1: cmp    edi,0x4
0x14091b6a4: jl     0x14091b6d0
0x14091b6a6: cmp    r13d,0xf
0x14091b6aa: jne    0x14091b6b4
0x14091b6ac: mov    r13d,0x6
0x14091b6b2: jmp    0x14091b6fa
0x14091b6b4: cmp    r13d,0x9
0x14091b6b8: jne    0x14091b6c2
0x14091b6ba: mov    r13d,0x4
0x14091b6c0: jmp    0x14091b6fa
0x14091b6c2: cmp    r13d,0x3
0x14091b6c6: jne    0x14091b6f1
0x14091b6c8: mov    r13d,0x2
0x14091b6ce: jmp    0x14091b6fa
0x14091b6d0: cmp    edi,0x3
0x14091b6d3: jne    0x14091b6f1
0x14091b6d5: cmp    r13d,0xf
0x14091b6d9: jne    0x14091b6e3
0x14091b6db: mov    r13d,0xa
0x14091b6e1: jmp    0x14091b6fa
0x14091b6e3: cmp    r13d,0x9
0x14091b6e7: jne    0x14091b6c2
0x14091b6e9: mov    r13d,0x6
0x14091b6ef: jmp    0x14091b6fa
0x14091b6f1: test   r13d,r13d
0x14091b6f4: jle    0x14091baaf
0x14091b6fa: mov    QWORD PTR [rbp-0x38],rsi
0x14091b6fe: xchg   ax,ax
0x14091b700: cmp    r13d,0x1
0x14091b704: ja     0x14091b70a
0x14091b706: xor    eax,eax
0x14091b708: jmp    0x14091b743
0x14091b70a: call   0x140eb68b0
0x14091b70f: mov    r8d,eax
0x14091b712: mov    eax,0x3
0x14091b717: mul    r8d
0x14091b71a: mov    ecx,r8d
0x14091b71d: sub    ecx,edx
0x14091b71f: shr    ecx,1
0x14091b721: add    ecx,edx
0x14091b723: shr    ecx,0x1e
0x14091b726: imul   ecx,ecx,0x80000001
0x14091b72c: add    r8d,ecx
0x14091b72f: xor    edx,edx
0x14091b731: mov    eax,0x7fffffff
0x14091b736: div    r13d
0x14091b739: lea    ecx,[rax+0x1]
0x14091b73c: xor    edx,edx
0x14091b73e: mov    eax,r8d
0x14091b741: div    ecx
0x14091b743: lea    r15d,[rax+0x1]
0x14091b747: mov    rax,QWORD PTR [rbp-0x50]
0x14091b74b: cmp    QWORD PTR [rax+0x308],0x0
0x14091b753: je     0x14091b8da
0x14091b759: lea    rcx,[rbp+0x810]
0x14091b760: call   0x14006ee50
0x14091b765: mov    rcx,rax
0x14091b768: call   0x140071f30
0x14091b76d: movsxd r14,eax
0x14091b770: mov    rdx,r14
0x14091b773: lea    rcx,[rbp+0x810]
0x14091b77a: call   0x14006f220
0x14091b77f: mov    rsi,QWORD PTR [rax]
0x14091b782: mov    eax,DWORD PTR [rbp+0x10]
0x14091b785: cmp    DWORD PTR [rsi+0x4],eax
0x14091b788: jne    0x14091ba9d
0x14091b78e: cmp    r15d,DWORD PTR [rsi]
0x14091b791: cmovg  r15d,DWORD PTR [rsi]
0x14091b795: mov    rbx,QWORD PTR [rbp-0x80]
0x14091b799: lea    rdx,[rbp+0x148]
0x14091b7a0: lea    rcx,[rbx+0x38]
0x14091b7a4: call   0x14006f240
0x14091b7a9: lea    rdx,[rbp+0x388]
0x14091b7b0: lea    rcx,[rbx+0x38]
0x14091b7b4: call   0x14006f230
0x14091b7b9: lea    r8,[rbp+0x388]
0x14091b7c0: lea    rdx,[rbp-0x8]
0x14091b7c4: lea    rcx,[rbp+0x148]
0x14091b7cb: call   0x14006ee20
0x14091b7d0: xor    edx,edx
0x14091b7d2: movzx  ecx,BYTE PTR [rax]
0x14091b7d5: call   0x1400657b0
0x14091b7da: test   al,al
0x14091b7dc: je     0x14091b836
0x14091b7de: xchg   ax,ax
0x14091b7e0: mov    rax,QWORD PTR [rbp+0x148]
0x14091b7e7: mov    rbx,QWORD PTR [rax]
0x14091b7ea: lea    rcx,[rbx+0x4]
0x14091b7ee: mov    r8d,DWORD PTR [r12+0x4]
0x14091b7f3: lea    rdx,[rsi+0x4]
0x14091b7f7: call   0x1400fdaf0
0x14091b7fc: test   al,al
0x14091b7fe: jne    0x14091b833
0x14091b800: lea    rcx,[rbp+0x148]
0x14091b807: call   0x14006ee00
0x14091b80c: lea    r8,[rbp+0x388]
0x14091b813: lea    rdx,[rbp-0x8]
0x14091b817: lea    rcx,[rbp+0x148]
0x14091b81e: call   0x14006ee20
0x14091b823: xor    edx,edx
0x14091b825: movzx  ecx,BYTE PTR [rax]
0x14091b828: call   0x1400657b0
0x14091b82d: test   al,al
0x14091b82f: jne    0x14091b7e0
0x14091b831: jmp    0x14091b836
0x14091b833: add    DWORD PTR [rbx],r15d
0x14091b836: mov    rax,QWORD PTR [rbp+0x148]
0x14091b83d: cmp    rax,QWORD PTR [rbp+0x388]
0x14091b844: je     0x14091b857
0x14091b846: mov    edx,0x1
0x14091b84b: mov    eax,0xff
0x14091b850: cmovb  edx,eax
0x14091b853: test   dl,dl
0x14091b855: js     0x14091b8ba
0x14091b857: mov    ecx,0x3c
0x14091b85c: call   0x141539690
0x14091b861: mov    QWORD PTR [rbp+0x910],rax
0x14091b868: mov    rcx,rax
0x14091b86b: call   0x1400ff2e0
0x14091b870: mov    rbx,rax
0x14091b873: mov    DWORD PTR [rax],r15d
0x14091b876: lea    rcx,[rax+0x4]
0x14091b87a: lea    rdx,[rsi+0x4]
0x14091b87e: mov    r8d,0xffffffff
0x14091b884: call   0x1400fda90
0x14091b889: mov    ecx,DWORD PTR [r12+0x4]
0x14091b88e: mov    DWORD PTR [rbx+0xc],ecx
0x14091b891: mov    rax,QWORD PTR [rbp-0x58]
0x14091b895: mov    ecx,DWORD PTR [rax]
0x14091b897: mov    DWORD PTR [rbx+0x30],ecx
0x14091b89a: mov    eax,DWORD PTR [rsp+0x54]
0x14091b89e: mov    DWORD PTR [rbx+0x34],eax
0x14091b8a1: mov    rdx,rbx
0x14091b8a4: mov    rcx,QWORD PTR [rbp-0x80]
0x14091b8a8: call   0x140124760
0x14091b8ad: mov    rcx,QWORD PTR [rbp-0x50]
0x14091b8b1: mov    eax,DWORD PTR [rcx+0x88]
0x14091b8b7: mov    DWORD PTR [rbp-0x10],eax
0x14091b8ba: sub    DWORD PTR [rsi],r15d
0x14091b8bd: cmp    DWORD PTR [rsi],0x0
0x14091b8c0: jg     0x14091ba82
0x14091b8c6: mov    rdx,r14
0x14091b8c9: lea    rcx,[rbp+0x810]
0x14091b8d0: call   0x1400b99a0
0x14091b8d5: jmp    0x14091ba82
0x14091b8da: lea    rcx,[rbp+0x7f8]
0x14091b8e1: call   0x14006ee50
0x14091b8e6: mov    rcx,rax
0x14091b8e9: call   0x140071f30
0x14091b8ee: movsxd r12,eax
0x14091b8f1: mov    rdx,r12
0x14091b8f4: lea    rcx,[rbp+0x7f8]
0x14091b8fb: call   0x14006f220
0x14091b900: mov    rdi,QWORD PTR [rax]
0x14091b903: movsx  ecx,WORD PTR [rdi+0x2]
0x14091b907: cmp    ecx,r14d
0x14091b90a: jne    0x14091baa1
0x14091b910: cmp    r15d,DWORD PTR [rdi+0x4]
0x14091b914: cmova  r15d,DWORD PTR [rdi+0x4]
0x14091b919: mov    eax,0xffffffff
0x14091b91e: mov    esi,eax
0x14091b920: mov    r14d,eax
0x14091b923: mov    edx,DWORD PTR [rdi+0x20]
0x14091b926: cmp    edx,eax
0x14091b928: je     0x14091b940
0x14091b92a: lea    rcx,[rip+0x1bcc357]        # 0x1424e7c88
0x14091b931: call   0x140072570
0x14091b936: test   rax,rax
0x14091b939: je     0x14091b94d
0x14091b93b: mov    esi,DWORD PTR [rax+0x4]
0x14091b93e: jmp    0x14091b949
0x14091b940: mov    eax,DWORD PTR [rdi+0x1c]
0x14091b943: cmp    eax,esi
0x14091b945: je     0x14091b94d
0x14091b947: mov    esi,eax
0x14091b949: mov    r14d,DWORD PTR [rdi+0x24]
0x14091b94d: mov    rbx,QWORD PTR [rbp-0x80]
0x14091b951: lea    rdx,[rbp+0x390]
0x14091b958: lea    rcx,[rbx+0x38]
0x14091b95c: call   0x14006f240
0x14091b961: lea    rdx,[rbp+0x5c0]
0x14091b968: lea    rcx,[rbx+0x38]
0x14091b96c: call   0x14006f230
0x14091b971: mov    rcx,QWORD PTR [rbp+0x5c0]
0x14091b978: mov    rax,QWORD PTR [rbp+0x390]
0x14091b97f: mov    r9d,0x1
0x14091b985: mov    r8d,0xff
0x14091b98b: cmp    rax,rcx
0x14091b98e: je     0x14091b9fa
0x14091b990: mov    edx,r9d
0x14091b993: cmovb  edx,r8d
0x14091b997: test   dl,dl
0x14091b999: jns    0x14091b9ea
0x14091b99b: mov    r8,QWORD PTR [rax]
0x14091b99e: movsx  edx,WORD PTR [rdi+0x2]
0x14091b9a2: cmp    DWORD PTR [r8+0x4],edx
0x14091b9a6: jne    0x14091b9c6
0x14091b9a8: mov    edx,DWORD PTR [rdi+0x10]
0x14091b9ab: cmp    DWORD PTR [r8+0xc],edx
0x14091b9af: jne    0x14091b9c6
0x14091b9b1: mov    edx,DWORD PTR [rdi+0x14]
0x14091b9b4: cmp    DWORD PTR [r8+0x10],edx
0x14091b9b8: jne    0x14091b9c6
0x14091b9ba: cmp    DWORD PTR [r8+0x18],esi
0x14091b9be: jne    0x14091b9c6
0x14091b9c0: cmp    DWORD PTR [r8+0x1c],r14d
0x14091b9c4: je     0x14091b9d3
0x14091b9c6: add    rax,0x8
0x14091b9ca: mov    QWORD PTR [rbp+0x390],rax
0x14091b9d1: jmp    0x14091b985
0x14091b9d3: add    DWORD PTR [r8],r15d
0x14091b9d6: mov    rax,QWORD PTR [rbp+0x390]
0x14091b9dd: mov    rcx,QWORD PTR [rbp+0x5c0]
0x14091b9e4: mov    r8d,0xff
0x14091b9ea: cmp    rax,rcx
0x14091b9ed: je     0x14091b9fa
0x14091b9ef: mov    edx,r9d
0x14091b9f2: cmovb  edx,r8d
0x14091b9f6: test   dl,dl
0x14091b9f8: js     0x14091ba5f
0x14091b9fa: mov    ecx,0x3c
0x14091b9ff: call   0x141539690
0x14091ba04: mov    QWORD PTR [rbp+0x908],rax
0x14091ba0b: mov    rcx,rax
0x14091ba0e: call   0x1400ff2e0
0x14091ba13: nop
0x14091ba14: mov    DWORD PTR [rax],r15d
0x14091ba17: movsx  ecx,WORD PTR [rdi+0x2]
0x14091ba1b: mov    DWORD PTR [rax+0x4],ecx
0x14091ba1e: mov    ecx,DWORD PTR [rdi+0x14]
0x14091ba21: mov    DWORD PTR [rax+0x10],ecx
0x14091ba24: mov    rdx,QWORD PTR [rsp+0x58]
0x14091ba29: mov    ecx,DWORD PTR [rdx+0x4]
0x14091ba2c: mov    DWORD PTR [rax+0xc],ecx
0x14091ba2f: mov    DWORD PTR [rax+0x18],esi
0x14091ba32: mov    DWORD PTR [rax+0x1c],r14d
0x14091ba36: mov    rcx,QWORD PTR [rbp-0x58]
0x14091ba3a: mov    ecx,DWORD PTR [rcx]
0x14091ba3c: mov    DWORD PTR [rax+0x30],ecx
0x14091ba3f: mov    ecx,DWORD PTR [rsp+0x54]
0x14091ba43: mov    DWORD PTR [rax+0x34],ecx
0x14091ba46: mov    rdx,rax
0x14091ba49: mov    rcx,QWORD PTR [rbp-0x80]
0x14091ba4d: call   0x140124760
0x14091ba52: mov    rcx,QWORD PTR [rbp-0x50]
0x14091ba56: mov    eax,DWORD PTR [rcx+0x88]
0x14091ba5c: mov    DWORD PTR [rbp-0x10],eax
0x14091ba5f: mov    eax,DWORD PTR [rdi+0x4]
0x14091ba62: cmp    eax,0x989681
0x14091ba67: je     0x14091ba6f
0x14091ba69: sub    eax,r15d
0x14091ba6c: mov    DWORD PTR [rdi+0x4],eax
0x14091ba6f: test   eax,eax
0x14091ba71: jne    0x14091ba82
0x14091ba73: mov    rdx,r12
0x14091ba76: lea    rcx,[rbp+0x7f8]
0x14091ba7d: call   0x1400b99a0
0x14091ba82: mov    rax,QWORD PTR [rbp+0x278]
0x14091ba89: mov    rcx,QWORD PTR [rbp-0x38]
0x14091ba8d: sub    DWORD PTR [rax+rcx*4],r15d
0x14091ba91: sub    DWORD PTR [rsp+0x64],r15d
0x14091ba96: sub    r13d,r15d
0x14091ba99: add    DWORD PTR [rbp-0x44],r15d
0x14091ba9d: mov    r14d,DWORD PTR [rbp+0x10]
0x14091baa1: test   r13d,r13d
0x14091baa4: mov    r12,QWORD PTR [rsp+0x58]
0x14091baa9: jg     0x14091b700
0x14091baaf: lea    rcx,[rbp+0x6e8]
0x14091bab6: call   0x14006f750
0x14091babb: jmp    0x14091b481
0x14091bac0: lea    rcx,[rbp+0x6e8]
0x14091bac7: call   0x140065b20
0x14091bacc: jmp    0x14091b481
0x14091bad1: mov    DWORD PTR [rbp+0xa0],0x5
0x14091badb: mov    r14d,0xa
0x14091bae1: mov    DWORD PTR [rbp+0xa4],r14d
0x14091bae8: mov    r15d,0xf
0x14091baee: mov    DWORD PTR [rbp+0xa8],r15d
0x14091baf5: mov    ecx,edx
0x14091baf7: sub    ecx,0x9
0x14091bafa: mov    rsi,rdi
0x14091bafd: je     0x14091bb86
0x14091bb03: cmp    ecx,0x1
0x14091bb06: je     0x14091bb4a
0x14091bb08: mov    ecx,edx
0x14091bb0a: sub    ecx,0x9
0x14091bb0d: je     0x14091bbac
0x14091bb13: cmp    ecx,0x1
0x14091bb16: je     0x14091bb70
0x14091bb18: mov    ecx,DWORD PTR [rsp+0x64]
0x14091bb1c: mov    ebx,ecx
0x14091bb1e: mov    r8d,0x1
0x14091bb24: mov    edi,r8d
0x14091bb27: sub    edx,0x8
0x14091bb2a: je     0x14091bb3f
0x14091bb2c: sub    edx,r8d
0x14091bb2f: je     0x14091bbb7
0x14091bb35: cmp    edx,r8d
0x14091bb38: je     0x14091bb7b
0x14091bb3a: jmp    0x14091bbbe
0x14091bb3f: mov    eax,DWORD PTR [rbp-0x20]
0x14091bb42: cmp    eax,ecx
0x14091bb44: jge    0x14091bbbe
0x14091bb46: mov    ebx,eax
0x14091bb48: jmp    0x14091bbbe
0x14091bb4a: mov    eax,0x1
0x14091bb4f: mov    DWORD PTR [rbp+0xa0],eax
0x14091bb55: mov    eax,0x3
0x14091bb5a: mov    r14d,eax
0x14091bb5d: mov    DWORD PTR [rbp+0xa4],eax
0x14091bb63: mov    r15d,0x5
0x14091bb69: mov    DWORD PTR [rbp+0xa8],r15d
0x14091bb70: mov    edi,0xc8
0x14091bb75: mov    ecx,DWORD PTR [rsp+0x64]
0x14091bb79: mov    ebx,ecx
0x14091bb7b: mov    eax,DWORD PTR [rbp+0x10]
0x14091bb7e: cmp    eax,ecx
0x14091bb80: jge    0x14091bbbe
0x14091bb82: mov    ebx,eax
0x14091bb84: jmp    0x14091bbbe
0x14091bb86: mov    eax,0x1
0x14091bb8b: mov    DWORD PTR [rbp+0xa0],eax
0x14091bb91: mov    eax,0x3
0x14091bb96: mov    r14d,eax
0x14091bb99: mov    DWORD PTR [rbp+0xa4],eax
0x14091bb9f: mov    r15d,0x5
0x14091bba5: mov    DWORD PTR [rbp+0xa8],r15d
0x14091bbac: mov    edi,0x32
0x14091bbb1: mov    ecx,DWORD PTR [rsp+0x64]
0x14091bbb5: mov    ebx,ecx
0x14091bbb7: cmp    DWORD PTR [rbp-0x38],ecx
0x14091bbba: cmovl  ebx,DWORD PTR [rbp-0x38]
0x14091bbbe: mov    eax,edi
0x14091bbc0: imul   eax,r14d
0x14091bbc4: lea    eax,[rax+rax*2]
0x14091bbc7: mov    r13d,DWORD PTR [rsp+0x68]
0x14091bbcc: cmp    r13d,eax
0x14091bbcf: jle    0x14091bc16
0x14091bbd1: mov    ecx,0x3
0x14091bbd6: call   0x140071f30
0x14091bbdb: test   eax,eax
0x14091bbdd: je     0x14091bc16
0x14091bbdf: cmp    r14d,ebx
0x14091bbe2: mov    r14d,0x1
0x14091bbe8: jg     0x14091bc1c
0x14091bbea: mov    esi,r14d
0x14091bbed: mov    eax,edi
0x14091bbef: imul   eax,r15d
0x14091bbf3: lea    eax,[rax+rax*2]
0x14091bbf6: cmp    r13d,eax
0x14091bbf9: jle    0x14091bc1c
0x14091bbfb: mov    ecx,0x3
0x14091bc00: call   0x140071f30
0x14091bc05: test   eax,eax
0x14091bc07: je     0x14091bc1c
0x14091bc09: cmp    r15d,ebx
0x14091bc0c: mov    eax,0x2
0x14091bc11: cmovle esi,eax
0x14091bc14: jmp    0x14091bc1c
0x14091bc16: mov    r14d,0x1
0x14091bc1c: mov    r13d,DWORD PTR [rbp+rsi*4+0xa0]
0x14091bc24: mov    eax,r13d
0x14091bc27: imul   eax,edi
0x14091bc2a: sub    DWORD PTR [rsp+0x68],eax
0x14091bc2e: lea    rcx,[rbp+0x748]
0x14091bc35: call   0x140065b00
0x14091bc3a: nop
0x14091bc3b: xor    edi,edi
0x14091bc3d: mov    DWORD PTR [rbp+0x70],edi
0x14091bc40: mov    rax,QWORD PTR [rbp+0x168]
0x14091bc47: sub    rax,QWORD PTR [rbp+0x160]
0x14091bc4e: sar    rax,0x2
0x14091bc52: test   eax,eax
0x14091bc54: jle    0x14091bd56
0x14091bc5a: movsxd rbx,DWORD PTR [rbp+0x38]
0x14091bc5e: lea    rsi,[rbp+0x9e8]
0x14091bc65: lea    rsi,[rsi+rbx*4]
0x14091bc69: mov    ecx,edi
0x14091bc6b: nop    DWORD PTR [rax+rax*1+0x0]
0x14091bc70: mov    edi,r14d
0x14091bc73: movsxd rdx,ecx
0x14091bc76: lea    rcx,[rbp+0x160]
0x14091bc7d: call   0x14006f360
0x14091bc82: movzx  edx,WORD PTR [rax]
0x14091bc85: lea    rcx,[rip+0x1bd0dbc]        # 0x1424eca48
0x14091bc8c: call   0x1400bba60
0x14091bc91: test   rax,rax
0x14091bc94: je     0x14091bd08
0x14091bc96: lea    rbx,[rax+0x178]
0x14091bc9d: lea    rdx,[rbp+0x540]
0x14091bca4: mov    rcx,rbx
0x14091bca7: call   0x14006f240
0x14091bcac: lea    rdx,[rbp+0x858]
0x14091bcb3: mov    rcx,rbx
0x14091bcb6: call   0x14006f230
0x14091bcbb: mov    rax,QWORD PTR [rbp+0x540]
0x14091bcc2: mov    rcx,QWORD PTR [rbp+0x858]
0x14091bcc9: cmp    rax,rcx
0x14091bccc: je     0x14091bd08
0x14091bcce: xchg   ax,ax
0x14091bcd0: mov    r8d,edi
0x14091bcd3: mov    rdx,QWORD PTR [rax]
0x14091bcd6: movsx  edi,WORD PTR [rdx+0x490]
0x14091bcdd: cmp    edi,r8d
0x14091bce0: cmovle edi,r8d
0x14091bce4: add    rax,0x8
0x14091bce8: mov    QWORD PTR [rbp+0x540],rax
0x14091bcef: cmp    rax,rcx
0x14091bcf2: jne    0x14091bcd0
0x14091bcf4: cmp    edi,0xa
0x14091bcf7: jl     0x14091bcfe
0x14091bcf9: cmp    DWORD PTR [rsi],0xa
0x14091bcfc: jmp    0x14091bd0b
0x14091bcfe: cmp    edi,0x2
0x14091bd01: jl     0x14091bd08
0x14091bd03: cmp    DWORD PTR [rsi],0x9
0x14091bd06: jmp    0x14091bd0b
0x14091bd08: cmp    DWORD PTR [rsi],0x8
0x14091bd0b: jne    0x14091bd32
0x14091bd0d: movsxd rdx,DWORD PTR [rbp+0x70]
0x14091bd11: lea    rcx,[rbp+0x2f0]
0x14091bd18: call   0x14006f360
0x14091bd1d: cmp    DWORD PTR [rax],r13d
0x14091bd20: jl     0x14091bd32
0x14091bd22: lea    rdx,[rbp+0x70]
0x14091bd26: lea    rcx,[rbp+0x748]
0x14091bd2d: call   0x14006f410
0x14091bd32: mov    ecx,DWORD PTR [rbp+0x70]
0x14091bd35: inc    ecx
0x14091bd37: mov    DWORD PTR [rbp+0x70],ecx
0x14091bd3a: mov    rax,QWORD PTR [rbp+0x168]
0x14091bd41: sub    rax,QWORD PTR [rbp+0x160]
0x14091bd48: sar    rax,0x2
0x14091bd4c: cmp    ecx,eax
0x14091bd4e: jl     0x14091bc70
0x14091bd54: xor    edi,edi
0x14091bd56: lea    rcx,[rbp+0x748]
0x14091bd5d: call   0x14006f370
0x14091bd62: test   rax,rax
0x14091bd65: je     0x14091c183
0x14091bd6b: lea    rcx,[rbp+0x748]
0x14091bd72: call   0x14006f370
0x14091bd77: mov    rcx,rax
0x14091bd7a: call   0x140071f30
0x14091bd7f: movsxd rdx,eax
0x14091bd82: lea    rcx,[rbp+0x748]
0x14091bd89: call   0x14006f360
0x14091bd8e: movsxd rdx,DWORD PTR [rax]
0x14091bd91: mov    QWORD PTR [rbp-0x20],rdx
0x14091bd95: lea    rcx,[rbp+0x160]
0x14091bd9c: call   0x14006f360
0x14091bda1: mov    ebx,DWORD PTR [rax]
0x14091bda3: mov    DWORD PTR [rbp-0x38],ebx
0x14091bda6: cmp    ebx,0xffffffff
0x14091bda9: je     0x14091c183
0x14091bdaf: test   r13d,r13d
0x14091bdb2: jle    0x14091c172
0x14091bdb8: cmp    r13d,0x1
0x14091bdbc: ja     0x14091bdc2
0x14091bdbe: mov    eax,edi
0x14091bdc0: jmp    0x14091bdfb
0x14091bdc2: call   0x140eb68b0
0x14091bdc7: mov    r8d,eax
0x14091bdca: mov    eax,0x3
0x14091bdcf: mul    r8d
0x14091bdd2: mov    ecx,r8d
0x14091bdd5: sub    ecx,edx
0x14091bdd7: shr    ecx,1
0x14091bdd9: add    ecx,edx
0x14091bddb: shr    ecx,0x1e
0x14091bdde: imul   ecx,ecx,0x80000001
0x14091bde4: add    r8d,ecx
0x14091bde7: xor    edx,edx
0x14091bde9: mov    eax,0x7fffffff
0x14091bdee: div    r13d
0x14091bdf1: lea    ecx,[rax+0x1]
0x14091bdf4: xor    edx,edx
0x14091bdf6: mov    eax,r8d
0x14091bdf9: div    ecx
0x14091bdfb: lea    r15d,[rax+0x1]
0x14091bdff: mov    rax,QWORD PTR [rbp-0x50]
0x14091be03: cmp    QWORD PTR [rax+0x308],0x0
0x14091be0b: je     0x14091bf9a
0x14091be11: lea    rcx,[rbp+0x7e0]
0x14091be18: call   0x14006ee50
0x14091be1d: mov    rcx,rax
0x14091be20: call   0x140071f30
0x14091be25: movsxd r14,eax
0x14091be28: mov    rdx,r14
0x14091be2b: lea    rcx,[rbp+0x7e0]
0x14091be32: call   0x14006f220
0x14091be37: mov    rsi,QWORD PTR [rax]
0x14091be3a: cmp    DWORD PTR [rsi+0x4],ebx
0x14091be3d: jne    0x14091c15f
0x14091be43: cmp    r15d,DWORD PTR [rsi]
0x14091be46: cmovg  r15d,DWORD PTR [rsi]
0x14091be4a: mov    rbx,QWORD PTR [rbp-0x80]
0x14091be4e: lea    rdx,[rbp+0x150]
0x14091be55: lea    rcx,[rbx+0x38]
0x14091be59: call   0x14006f240
0x14091be5e: lea    rdx,[rbp+0x398]
0x14091be65: lea    rcx,[rbx+0x38]
0x14091be69: call   0x14006f230
0x14091be6e: lea    r8,[rbp+0x398]
0x14091be75: lea    rdx,[rbp-0x7]
0x14091be79: lea    rcx,[rbp+0x150]
0x14091be80: call   0x14006ee20
0x14091be85: xor    edx,edx
0x14091be87: movzx  ecx,BYTE PTR [rax]
0x14091be8a: call   0x1400657b0
0x14091be8f: test   al,al
0x14091be91: je     0x14091bef6
0x14091be93: nop    DWORD PTR [rax+0x0]
0x14091be97: nop    WORD PTR [rax+rax*1+0x0]
0x14091bea0: mov    rax,QWORD PTR [rbp+0x150]
0x14091bea7: mov    rbx,QWORD PTR [rax]
0x14091beaa: lea    rcx,[rbx+0x4]
0x14091beae: mov    r8d,DWORD PTR [r12+0x4]
0x14091beb3: lea    rdx,[rsi+0x4]
0x14091beb7: call   0x1400fdaf0
0x14091bebc: test   al,al
0x14091bebe: jne    0x14091bef3
0x14091bec0: lea    rcx,[rbp+0x150]
0x14091bec7: call   0x14006ee00
0x14091becc: lea    r8,[rbp+0x398]
0x14091bed3: lea    rdx,[rbp-0x7]
0x14091bed7: lea    rcx,[rbp+0x150]
0x14091bede: call   0x14006ee20
0x14091bee3: xor    edx,edx
0x14091bee5: movzx  ecx,BYTE PTR [rax]
0x14091bee8: call   0x1400657b0
0x14091beed: test   al,al
0x14091beef: jne    0x14091bea0
0x14091bef1: jmp    0x14091bef6
0x14091bef3: add    DWORD PTR [rbx],r15d
0x14091bef6: mov    rax,QWORD PTR [rbp+0x150]
0x14091befd: cmp    rax,QWORD PTR [rbp+0x398]
0x14091bf04: je     0x14091bf17
0x14091bf06: mov    edx,0x1
0x14091bf0b: mov    eax,0xff
0x14091bf10: cmovb  edx,eax
0x14091bf13: test   dl,dl
0x14091bf15: js     0x14091bf7a
0x14091bf17: mov    ecx,0x3c
0x14091bf1c: call   0x141539690
0x14091bf21: mov    QWORD PTR [rbp+0x938],rax
0x14091bf28: mov    rcx,rax
0x14091bf2b: call   0x1400ff2e0
0x14091bf30: mov    rbx,rax
0x14091bf33: mov    DWORD PTR [rax],r15d
0x14091bf36: lea    rcx,[rax+0x4]
0x14091bf3a: lea    rdx,[rsi+0x4]
0x14091bf3e: mov    r8d,0xffffffff
0x14091bf44: call   0x1400fda90
0x14091bf49: mov    ecx,DWORD PTR [r12+0x4]
0x14091bf4e: mov    DWORD PTR [rbx+0xc],ecx
0x14091bf51: mov    rax,QWORD PTR [rbp-0x58]
0x14091bf55: mov    ecx,DWORD PTR [rax]
0x14091bf57: mov    DWORD PTR [rbx+0x30],ecx
0x14091bf5a: mov    eax,DWORD PTR [rsp+0x54]
0x14091bf5e: mov    DWORD PTR [rbx+0x34],eax
0x14091bf61: mov    rdx,rbx
0x14091bf64: mov    rcx,QWORD PTR [rbp-0x80]
0x14091bf68: call   0x140124760
0x14091bf6d: mov    rcx,QWORD PTR [rbp-0x50]
0x14091bf71: mov    eax,DWORD PTR [rcx+0x88]
0x14091bf77: mov    DWORD PTR [rbp-0x10],eax
0x14091bf7a: sub    DWORD PTR [rsi],r15d
0x14091bf7d: cmp    DWORD PTR [rsi],0x0
0x14091bf80: jg     0x14091c141
0x14091bf86: mov    rdx,r14
0x14091bf89: lea    rcx,[rbp+0x7e0]
0x14091bf90: call   0x1400b99a0
0x14091bf95: jmp    0x14091c141
0x14091bf9a: lea    rcx,[rbp+0x7c8]
0x14091bfa1: call   0x14006ee50
0x14091bfa6: mov    rcx,rax
0x14091bfa9: call   0x140071f30
0x14091bfae: movsxd r12,eax
0x14091bfb1: mov    rdx,r12
0x14091bfb4: lea    rcx,[rbp+0x7c8]
0x14091bfbb: call   0x14006f220
0x14091bfc0: mov    rdi,QWORD PTR [rax]
0x14091bfc3: movsx  ecx,WORD PTR [rdi+0x2]
0x14091bfc7: cmp    ecx,ebx
0x14091bfc9: jne    0x14091c15f
0x14091bfcf: cmp    r15d,DWORD PTR [rdi+0x4]
0x14091bfd3: cmova  r15d,DWORD PTR [rdi+0x4]
0x14091bfd8: mov    eax,0xffffffff
0x14091bfdd: mov    esi,eax
0x14091bfdf: mov    r14d,eax
0x14091bfe2: mov    edx,DWORD PTR [rdi+0x20]
0x14091bfe5: cmp    edx,eax
0x14091bfe7: je     0x14091bfff
0x14091bfe9: lea    rcx,[rip+0x1bcbc98]        # 0x1424e7c88
0x14091bff0: call   0x140072570
0x14091bff5: test   rax,rax
0x14091bff8: je     0x14091c00c
0x14091bffa: mov    esi,DWORD PTR [rax+0x4]
0x14091bffd: jmp    0x14091c008
0x14091bfff: mov    eax,DWORD PTR [rdi+0x1c]
0x14091c002: cmp    eax,esi
0x14091c004: je     0x14091c00c
0x14091c006: mov    esi,eax
0x14091c008: mov    r14d,DWORD PTR [rdi+0x24]
0x14091c00c: mov    rbx,QWORD PTR [rbp-0x80]
0x14091c010: lea    rdx,[rbp+0x3a0]
0x14091c017: lea    rcx,[rbx+0x38]
0x14091c01b: call   0x14006f240
0x14091c020: lea    rdx,[rbp+0x548]
0x14091c027: lea    rcx,[rbx+0x38]
0x14091c02b: call   0x14006f230
0x14091c030: mov    rcx,QWORD PTR [rbp+0x548]
0x14091c037: mov    rax,QWORD PTR [rbp+0x3a0]
0x14091c03e: mov    r9d,0x1
0x14091c044: mov    r8d,0xff
0x14091c04a: cmp    rax,rcx
0x14091c04d: je     0x14091c0b9
0x14091c04f: mov    edx,r9d
0x14091c052: cmovb  edx,r8d
0x14091c056: test   dl,dl
0x14091c058: jns    0x14091c0a9
0x14091c05a: mov    r8,QWORD PTR [rax]
0x14091c05d: movsx  edx,WORD PTR [rdi+0x2]
0x14091c061: cmp    DWORD PTR [r8+0x4],edx
0x14091c065: jne    0x14091c085
0x14091c067: mov    edx,DWORD PTR [rdi+0x10]
0x14091c06a: cmp    DWORD PTR [r8+0xc],edx
0x14091c06e: jne    0x14091c085
0x14091c070: mov    edx,DWORD PTR [rdi+0x14]
0x14091c073: cmp    DWORD PTR [r8+0x10],edx
0x14091c077: jne    0x14091c085
0x14091c079: cmp    DWORD PTR [r8+0x18],esi
0x14091c07d: jne    0x14091c085
0x14091c07f: cmp    DWORD PTR [r8+0x1c],r14d
0x14091c083: je     0x14091c092
0x14091c085: add    rax,0x8
0x14091c089: mov    QWORD PTR [rbp+0x3a0],rax
0x14091c090: jmp    0x14091c044
0x14091c092: add    DWORD PTR [r8],r15d
0x14091c095: mov    rax,QWORD PTR [rbp+0x3a0]
0x14091c09c: mov    rcx,QWORD PTR [rbp+0x548]
0x14091c0a3: mov    r8d,0xff
0x14091c0a9: cmp    rax,rcx
0x14091c0ac: je     0x14091c0b9
0x14091c0ae: mov    edx,r9d
0x14091c0b1: cmovb  edx,r8d
0x14091c0b5: test   dl,dl
0x14091c0b7: js     0x14091c11e
0x14091c0b9: mov    ecx,0x3c
0x14091c0be: call   0x141539690
0x14091c0c3: mov    QWORD PTR [rbp+0x900],rax
0x14091c0ca: mov    rcx,rax
0x14091c0cd: call   0x1400ff2e0
0x14091c0d2: nop
0x14091c0d3: mov    DWORD PTR [rax],r15d
0x14091c0d6: movsx  ecx,WORD PTR [rdi+0x2]
0x14091c0da: mov    DWORD PTR [rax+0x4],ecx
0x14091c0dd: mov    ecx,DWORD PTR [rdi+0x14]
0x14091c0e0: mov    DWORD PTR [rax+0x10],ecx
0x14091c0e3: mov    rdx,QWORD PTR [rsp+0x58]
0x14091c0e8: mov    ecx,DWORD PTR [rdx+0x4]
0x14091c0eb: mov    DWORD PTR [rax+0xc],ecx
0x14091c0ee: mov    DWORD PTR [rax+0x18],esi
0x14091c0f1: mov    DWORD PTR [rax+0x1c],r14d
0x14091c0f5: mov    rcx,QWORD PTR [rbp-0x58]
0x14091c0f9: mov    ecx,DWORD PTR [rcx]
0x14091c0fb: mov    DWORD PTR [rax+0x30],ecx
0x14091c0fe: mov    ecx,DWORD PTR [rsp+0x54]
0x14091c102: mov    DWORD PTR [rax+0x34],ecx
0x14091c105: mov    rdx,rax
0x14091c108: mov    rcx,QWORD PTR [rbp-0x80]
0x14091c10c: call   0x140124760
0x14091c111: mov    rcx,QWORD PTR [rbp-0x50]
0x14091c115: mov    eax,DWORD PTR [rcx+0x88]
0x14091c11b: mov    DWORD PTR [rbp-0x10],eax
0x14091c11e: mov    eax,DWORD PTR [rdi+0x4]
0x14091c121: cmp    eax,0x989681
0x14091c126: je     0x14091c12e
0x14091c128: sub    eax,r15d
0x14091c12b: mov    DWORD PTR [rdi+0x4],eax
0x14091c12e: test   eax,eax
0x14091c130: jne    0x14091c141
0x14091c132: mov    rdx,r12
0x14091c135: lea    rcx,[rbp+0x7c8]
0x14091c13c: call   0x1400b99a0
0x14091c141: mov    rax,QWORD PTR [rbp+0x2f0]
0x14091c148: mov    rdi,QWORD PTR [rbp-0x20]
0x14091c14c: sub    DWORD PTR [rax+rdi*4],r15d
0x14091c150: sub    DWORD PTR [rsp+0x64],r15d
0x14091c155: sub    r13d,r15d
0x14091c158: add    DWORD PTR [rbp-0x44],r15d
0x14091c15c: mov    ebx,DWORD PTR [rbp-0x38]
0x14091c15f: test   r13d,r13d
0x14091c162: mov    r12,QWORD PTR [rsp+0x58]
0x14091c167: mov    edi,0x0
0x14091c16c: jg     0x14091bdb8
0x14091c172: lea    rcx,[rbp+0x748]
0x14091c179: call   0x14006f750
0x14091c17e: jmp    0x14091b481
0x14091c183: lea    rcx,[rbp+0x748]
0x14091c18a: call   0x140065b20
0x14091c18f: jmp    0x14091b481
0x14091c194: mov    DWORD PTR [rbp+0x9c0],0x9
0x14091c19e: jmp    0x14091c560
0x14091c1a3: cmp    DWORD PTR [rsp+0x6c],0x4
0x14091c1a8: je     0x14091c54d
0x14091c1ae: mov    r12,QWORD PTR [rsp+0x58]
0x14091c1b3: mov    rcx,QWORD PTR [r12+0x8]
0x14091c1b8: add    rcx,0x3a0
0x14091c1bf: mov    edx,0x6
0x14091c1c4: call   0x140071f90
0x14091c1c9: test   al,al
0x14091c1cb: jne    0x14091c54d
0x14091c1d1: mov    rcx,QWORD PTR [r12+0x8]
0x14091c1d6: add    rcx,0x3a0
0x14091c1dd: mov    edx,0x5
0x14091c1e2: call   0x140071f90
0x14091c1e7: test   al,al
0x14091c1e9: jne    0x14091c4b1
0x14091c1ef: mov    DWORD PTR [rbp+0x9c0],r15d
0x14091c1f6: mov    eax,0x1
0x14091c1fb: mov    DWORD PTR [rbp+0x9c4],eax
0x14091c201: mov    eax,0x2
0x14091c206: mov    DWORD PTR [rbp+0x9c8],eax
0x14091c20c: mov    ebx,0x3
0x14091c211: jmp    0x14091c4e8
0x14091c216: cmp    DWORD PTR [rsp+0x6c],0x4
0x14091c21b: je     0x14091c54d
0x14091c221: mov    r12,QWORD PTR [rsp+0x58]
0x14091c226: mov    rcx,QWORD PTR [r12+0x8]
0x14091c22b: add    rcx,0x3a0
0x14091c232: mov    edx,0x6
0x14091c237: call   0x140071f90
0x14091c23c: test   al,al
0x14091c23e: jne    0x14091c54d
0x14091c244: cmp    DWORD PTR [rbp+0xa68],ebx
0x14091c24a: je     0x14091c556
0x14091c250: mov    rcx,QWORD PTR [r12+0x8]
0x14091c255: add    rcx,0x3a0
0x14091c25c: mov    edx,0x5
0x14091c261: call   0x140071f90
0x14091c266: test   al,al
0x14091c268: jne    0x14091c556
0x14091c26e: mov    DWORD PTR [rbp+0x9c0],r15d
0x14091c275: mov    eax,0x3
0x14091c27a: mov    DWORD PTR [rbp+0x9c4],eax
0x14091c280: mov    DWORD PTR [rbp+0x9c8],0x4
0x14091c28a: mov    ebx,eax
0x14091c28c: jmp    0x14091c4e8
0x14091c291: cmp    DWORD PTR [rsp+0x6c],0x4
0x14091c296: je     0x14091c54d
0x14091c29c: mov    r12,QWORD PTR [rsp+0x58]
0x14091c2a1: mov    rcx,QWORD PTR [r12+0x8]
0x14091c2a6: add    rcx,0x3a0
0x14091c2ad: mov    edx,0x6
0x14091c2b2: call   0x140071f90
0x14091c2b7: test   al,al
0x14091c2b9: jne    0x14091c54d
0x14091c2bf: mov    rcx,QWORD PTR [r12+0x8]
0x14091c2c4: add    rcx,0x3a0
0x14091c2cb: mov    edx,0x5
0x14091c2d0: call   0x140071f90
0x14091c2d5: mov    rdx,QWORD PTR [rbp-0x18]
0x14091c2d9: test   al,al
0x14091c2db: jne    0x14091c4b5
0x14091c2e1: mov    DWORD PTR [rbp+0x9c0],r15d
0x14091c2e8: mov    r8d,0x1
0x14091c2ee: mov    ebx,r8d
0x14091c2f1: mov    eax,r8d
0x14091c2f4: cmp    DWORD PTR [rbp+0xa70],edx
0x14091c2fa: jg     0x14091c313
0x14091c2fc: mov    DWORD PTR [rbp+0x9c4],0x6
0x14091c306: mov    eax,0x2
0x14091c30b: mov    ebx,eax
0x14091c30d: jl     0x14091c4df
0x14091c313: mov    DWORD PTR [rbp+rax*4+0x9c0],0xe
0x14091c31e: jmp    0x14091c4dd
0x14091c323: cmp    DWORD PTR [rsp+0x6c],0x4
0x14091c328: je     0x14091c54d
0x14091c32e: mov    r12,QWORD PTR [rsp+0x58]
0x14091c333: mov    rcx,QWORD PTR [r12+0x8]
0x14091c338: add    rcx,0x3a0
0x14091c33f: mov    edx,0x6
0x14091c344: call   0x140071f90
0x14091c349: test   al,al
0x14091c34b: jne    0x14091c54d
0x14091c351: mov    rcx,QWORD PTR [r12+0x8]
0x14091c356: add    rcx,0x3a0
0x14091c35d: mov    edx,0x5
0x14091c362: call   0x140071f90
0x14091c367: mov    DWORD PTR [rbp+0x9c0],0x5
0x14091c371: mov    r8d,0x1
0x14091c377: mov    rdx,QWORD PTR [rbp-0x18]
0x14091c37b: mov    ebx,r8d
0x14091c37e: test   al,al
0x14091c380: mov    eax,r8d
0x14091c383: jne    0x14091c2f4
0x14091c389: cmp    DWORD PTR [rbp+0xa70],edx
0x14091c38f: jg     0x14091c3a4
0x14091c391: mov    DWORD PTR [rbp+0x9c4],0x6
0x14091c39b: mov    eax,0x2
0x14091c3a0: mov    ebx,eax
0x14091c3a2: jl     0x14091c3b4
0x14091c3a4: mov    DWORD PTR [rbp+rax*4+0x9c0],0xe
0x14091c3af: inc    ebx
0x14091c3b1: inc    rax
0x14091c3b4: mov    DWORD PTR [rbp+rax*4+0x9c0],r15d
0x14091c3bc: jmp    0x14091c4dd
0x14091c3c1: mov    DWORD PTR [rbp+0x9c0],0xb
0x14091c3cb: jmp    0x14091c560
0x14091c3d0: mov    r12,QWORD PTR [rsp+0x58]
0x14091c3d5: mov    rcx,QWORD PTR [r12+0x8]
0x14091c3da: add    rcx,0x3a0
0x14091c3e1: mov    edx,0x6
0x14091c3e6: call   0x140071f90
0x14091c3eb: test   al,al
0x14091c3ed: jne    0x14091c54d
0x14091c3f3: mov    rcx,QWORD PTR [r12+0x8]
0x14091c3f8: add    rcx,0x3a0
0x14091c3ff: mov    edx,0x5
0x14091c404: call   0x140071f90
0x14091c409: mov    ecx,0x1
0x14091c40e: test   al,al
0x14091c410: mov    eax,0x7
0x14091c415: cmovne ecx,eax
0x14091c418: mov    DWORD PTR [rbp+0x9c0],ecx
0x14091c41e: jmp    0x14091c560
0x14091c423: mov    r12,QWORD PTR [rsp+0x58]
0x14091c428: mov    rcx,QWORD PTR [r12+0x8]
0x14091c42d: add    rcx,0x3a0
0x14091c434: mov    edx,0x6
0x14091c439: call   0x140071f90
0x14091c43e: test   al,al
0x14091c440: jne    0x14091c54d
0x14091c446: mov    rcx,QWORD PTR [r12+0x8]
0x14091c44b: add    rcx,0x3a0
0x14091c452: mov    edx,0x5
0x14091c457: call   0x140071f90
0x14091c45c: mov    DWORD PTR [rbp+0x9c0],0x5
0x14091c466: test   al,al
0x14091c468: mov    eax,0x7
0x14091c46d: mov    DWORD PTR [rbp+0x9c4],eax
0x14091c473: je     0x14091c47c
0x14091c475: mov    ebx,0x2
0x14091c47a: jmp    0x14091c4e8
0x14091c47c: mov    eax,0x1
0x14091c481: mov    DWORD PTR [rbp+0x9c8],eax
0x14091c487: mov    ebx,0x3
0x14091c48c: jmp    0x14091c4e8
0x14091c48e: mov    r12,QWORD PTR [rsp+0x58]
0x14091c493: mov    rcx,QWORD PTR [r12+0x8]
0x14091c498: add    rcx,0x3a0
0x14091c49f: mov    edx,0x6
0x14091c4a4: call   0x140071f90
0x14091c4a9: test   al,al
0x14091c4ab: jne    0x14091c54d
0x14091c4b1: mov    rdx,QWORD PTR [rbp-0x18]
0x14091c4b5: cmp    DWORD PTR [rbp+0xa70],edx
0x14091c4bb: jg     0x14091c4d2
0x14091c4bd: mov    ecx,0x1
0x14091c4c2: mov    DWORD PTR [rbp+0x9c0],0x6
0x14091c4cc: mov    ebx,ecx
0x14091c4ce: mov    edi,ecx
0x14091c4d0: jl     0x14091c4df
0x14091c4d2: mov    DWORD PTR [rbp+rdi*4+0x9c0],0xe
0x14091c4dd: inc    ebx
0x14091c4df: test   ebx,ebx
0x14091c4e1: je     0x14091c533
0x14091c4e3: cmp    ebx,0x1
0x14091c4e6: jbe    0x14091c560
0x14091c4e8: call   0x140eb68b0
0x14091c4ed: mov    r8d,eax
0x14091c4f0: mov    eax,0x3
0x14091c4f5: mul    r8d
0x14091c4f8: mov    ecx,r8d
0x14091c4fb: sub    ecx,edx
0x14091c4fd: shr    ecx,1
0x14091c4ff: add    ecx,edx
0x14091c501: shr    ecx,0x1e
0x14091c504: imul   ecx,ecx,0x80000001
0x14091c50a: add    r8d,ecx
0x14091c50d: xor    edx,edx
0x14091c50f: mov    eax,0x7fffffff
0x14091c514: div    ebx
0x14091c516: lea    ecx,[rax+0x1]
0x14091c519: xor    edx,edx
0x14091c51b: mov    eax,r8d
0x14091c51e: div    ecx
0x14091c520: jmp    0x14091c568
0x14091c522: mov    DWORD PTR [rbp+0x9c0],0xa
0x14091c52c: jmp    0x14091c560
0x14091c52e: mov    r12,QWORD PTR [rsp+0x58]
0x14091c533: mov    rax,QWORD PTR [r12+0x8]
0x14091c538: cmp    DWORD PTR [rax+0x3a8],r15d
0x14091c53f: jle    0x14091c556
0x14091c541: mov    rax,QWORD PTR [rax+0x3a0]
0x14091c548: test   BYTE PTR [rax],0x40
0x14091c54b: je     0x14091c556
0x14091c54d: mov    DWORD PTR [rbp+0x9c0],r15d
0x14091c554: jmp    0x14091c560
0x14091c556: mov    DWORD PTR [rbp+0x9c0],0x4
0x14091c560: mov    eax,r15d
0x14091c563: mov    r12,QWORD PTR [rsp+0x58]
0x14091c568: cdqe
0x14091c56a: movsxd rcx,DWORD PTR [rbp+rax*4+0x9c0]
0x14091c572: mov    DWORD PTR [rbp+0x350],ecx
0x14091c578: inc    DWORD PTR [rbp+rcx*4+0xa58]
0x14091c57f: lea    rdx,[rbp+0x350]
0x14091c586: lea    rcx,[rbp+0x700]
0x14091c58d: call   0x140070490
0x14091c592: mov    DWORD PTR [rbp+0x354],r13d
0x14091c599: lea    rdx,[rbp+0x354]
0x14091c5a0: lea    rcx,[rbp+0x718]
0x14091c5a7: call   0x140070490
0x14091c5ac: lea    rdx,[rbp-0x10]
0x14091c5b0: lea    rcx,[rbp+0x730]
0x14091c5b7: call   0x140070490
0x14091c5bc: lea    rdx,[rbp-0x44]
0x14091c5c0: lea    rcx,[rbp+0x458]
0x14091c5c7: call   0x140070490
0x14091c5cc: mov    r14d,DWORD PTR [rsp+0x54]
0x14091c5d1: inc    r14d
0x14091c5d4: mov    DWORD PTR [rsp+0x54],r14d
0x14091c5d9: mov    ecx,DWORD PTR [rbp+rsi*4+0x9e8]
0x14091c5e0: cmp    ecx,0x3
0x14091c5e3: je     0x14091cfec
0x14091c5e9: cmp    ecx,0xc
0x14091c5ec: jne    0x14091da43
0x14091c5f2: lea    rcx,[rbp+0x5d0]
0x14091c5f9: call   0x140065b00
0x14091c5fe: nop
0x14091c5ff: lea    rcx,[rbp+0x688]
0x14091c606: call   0x140065b00
0x14091c60b: nop
0x14091c60c: mov    DWORD PTR [rbp-0x40],r15d
0x14091c610: mov    rax,QWORD PTR [rbp+0x448]
0x14091c617: sub    rax,QWORD PTR [rbp+0x440]
0x14091c61e: sar    rax,0x2
0x14091c622: test   eax,eax
0x14091c624: jle    0x14091c685
0x14091c626: movsxd r15,DWORD PTR [rbp-0x5c]
0x14091c62a: nop    WORD PTR [rax+rax*1+0x0]
0x14091c630: mov    rdx,r15
0x14091c633: lea    rcx,[rbp+0x458]
0x14091c63a: call   0x14006f360
0x14091c63f: mov    ebx,DWORD PTR [rax]
0x14091c641: movsxd rdx,DWORD PTR [rbp-0x40]
0x14091c645: lea    rcx,[rbp+0x2a8]
0x14091c64c: call   0x14006f360
0x14091c651: cmp    DWORD PTR [rax],ebx
0x14091c653: jl     0x14091c665
0x14091c655: lea    rdx,[rbp-0x40]
0x14091c659: lea    rcx,[rbp+0x5d0]
0x14091c660: call   0x14006f410
0x14091c665: mov    ecx,DWORD PTR [rbp-0x40]
0x14091c668: inc    ecx
0x14091c66a: mov    DWORD PTR [rbp-0x40],ecx
0x14091c66d: mov    rax,QWORD PTR [rbp+0x448]
0x14091c674: sub    rax,QWORD PTR [rbp+0x440]
0x14091c67b: sar    rax,0x2
0x14091c67f: cmp    ecx,eax
0x14091c681: jl     0x14091c630
0x14091c683: jmp    0x14091c689
0x14091c685: mov    r15d,DWORD PTR [rbp-0x5c]
0x14091c689: xor    eax,eax
0x14091c68b: mov    DWORD PTR [rbp-0x40],eax
0x14091c68e: lea    rcx,[rbp+0x290]
0x14091c695: call   0x14006f370
0x14091c69a: cmp    DWORD PTR [rbp-0x40],eax
0x14091c69d: jge    0x14091c6f9
0x14091c69f: movsxd rdi,r15d
0x14091c6a2: nop    DWORD PTR [rax+0x0]
0x14091c6a6: data16 nop WORD PTR [rax+rax*1+0x0]
0x14091c6b0: mov    rdx,rdi
0x14091c6b3: lea    rcx,[rbp+0x458]
0x14091c6ba: call   0x14006f360
0x14091c6bf: mov    ebx,DWORD PTR [rax]
0x14091c6c1: movsxd rdx,DWORD PTR [rbp-0x40]
0x14091c6c5: lea    rcx,[rbp+0x178]
0x14091c6cc: call   0x14006f360
0x14091c6d1: cmp    DWORD PTR [rax],ebx
0x14091c6d3: jl     0x14091c6e5
0x14091c6d5: lea    rdx,[rbp-0x40]
0x14091c6d9: lea    rcx,[rbp+0x688]
0x14091c6e0: call   0x14006f410
0x14091c6e5: inc    DWORD PTR [rbp-0x40]
0x14091c6e8: lea    rcx,[rbp+0x290]
0x14091c6ef: call   0x14006f370
0x14091c6f4: cmp    DWORD PTR [rbp-0x40],eax
0x14091c6f7: jl     0x14091c6b0
0x14091c6f9: mov    esi,0xffffffff
0x14091c6fe: mov    edi,esi
0x14091c700: mov    DWORD PTR [rbp-0x38],esi
0x14091c703: mov    DWORD PTR [rbp-0x20],esi
0x14091c706: lea    rcx,[rbp+0x688]
0x14091c70d: call   0x14006f370
0x14091c712: mov    rbx,rax
0x14091c715: lea    rcx,[rbp+0x5d0]
0x14091c71c: call   0x14006f370
0x14091c721: add    rbx,rax
0x14091c724: je     0x14091cfbe
0x14091c72a: lea    rcx,[rbp+0x688]
0x14091c731: call   0x14006f370
0x14091c736: mov    rbx,rax
0x14091c739: lea    rcx,[rbp+0x5d0]
0x14091c740: call   0x14006f370
0x14091c745: lea    ecx,[rax+rbx*1]
0x14091c748: call   0x140071f30
0x14091c74d: mov    ebx,eax
0x14091c74f: lea    rcx,[rbp+0x5d0]
0x14091c756: call   0x14006f370
0x14091c75b: cmp    ebx,eax
0x14091c75d: jge    0x14091c799
0x14091c75f: lea    rcx,[rbp+0x5d0]
0x14091c766: call   0x14006f370
0x14091c76b: mov    rcx,rax
0x14091c76e: call   0x140071f30
0x14091c773: movsxd rdx,eax
0x14091c776: lea    rcx,[rbp+0x5d0]
0x14091c77d: call   0x14006f360
0x14091c782: movsxd rdi,DWORD PTR [rax]
0x14091c785: mov    DWORD PTR [rbp-0x38],edi
0x14091c788: mov    rdx,rdi
0x14091c78b: lea    rcx,[rbp+0x440]
0x14091c792: call   0x14006f360
0x14091c797: jmp    0x14091c7d6
0x14091c799: lea    rcx,[rbp+0x688]
0x14091c7a0: call   0x14006f370
0x14091c7a5: mov    rcx,rax
0x14091c7a8: call   0x140071f30
0x14091c7ad: movsxd rdx,eax
0x14091c7b0: lea    rcx,[rbp+0x688]
0x14091c7b7: call   0x14006f360
0x14091c7bc: movsxd rsi,DWORD PTR [rax]
0x14091c7bf: mov    DWORD PTR [rbp-0x20],esi
0x14091c7c2: mov    rdx,rsi
0x14091c7c5: lea    rcx,[rbp+0x290]
0x14091c7cc: call   0x14006f360
0x14091c7d1: mov    esi,0xffffffff
0x14091c7d6: mov    ebx,DWORD PTR [rax]
0x14091c7d8: mov    DWORD PTR [rbp+0x38],ebx
0x14091c7db: cmp    ebx,0xffffffff
0x14091c7de: je     0x14091cfbe
0x14091c7e4: mov    eax,DWORD PTR [rbp-0x44]
0x14091c7e7: cdq
0x14091c7e8: sub    eax,edx
0x14091c7ea: sar    eax,1
0x14091c7ec: mov    r13d,eax
0x14091c7ef: mov    DWORD PTR [rbp+0x368],eax
0x14091c7f5: test   eax,eax
0x14091c7f7: jle    0x14091cf13
0x14091c7fd: jmp    0x14091c80a
0x14091c7ff: nop
0x14091c800: mov    r12,QWORD PTR [rsp+0x58]
0x14091c805: mov    esi,0xffffffff
0x14091c80a: mov    ecx,r13d
0x14091c80d: call   0x140071f30
0x14091c812: lea    r15d,[rax+0x1]
0x14091c816: mov    rax,QWORD PTR [rbp-0x50]
0x14091c81a: mov    rcx,QWORD PTR [rax+0x308]
0x14091c821: cmp    edi,0xffffffff
0x14091c824: je     0x14091cb9c
0x14091c82a: test   rcx,rcx
0x14091c82d: je     0x14091c9c4
0x14091c833: lea    rcx,[rbp+0x7b0]
0x14091c83a: call   0x14006ee50
0x14091c83f: mov    rcx,rax
0x14091c842: call   0x140071f30
0x14091c847: movsxd r14,eax
0x14091c84a: mov    rdx,r14
0x14091c84d: lea    rcx,[rbp+0x7b0]
0x14091c854: call   0x14006f220
0x14091c859: mov    rsi,QWORD PTR [rax]
0x14091c85c: cmp    DWORD PTR [rsi+0x4],ebx
0x14091c85f: jne    0x14091cf07
0x14091c865: cmp    r15d,DWORD PTR [rsi]
0x14091c868: cmovg  r15d,DWORD PTR [rsi]
0x14091c86c: mov    rbx,QWORD PTR [rbp-0x80]
0x14091c870: lea    rdx,[rbp+0xb0]
0x14091c877: lea    rcx,[rbx+0x38]
0x14091c87b: call   0x14006f240
0x14091c880: lea    rdx,[rbp+0x3a8]
0x14091c887: lea    rcx,[rbx+0x38]
0x14091c88b: call   0x14006f230
0x14091c890: lea    r8,[rbp+0x3a8]
0x14091c897: lea    rdx,[rbp-0x6]
0x14091c89b: lea    rcx,[rbp+0xb0]
0x14091c8a2: call   0x14006ee20
0x14091c8a7: xor    edx,edx
0x14091c8a9: movzx  ecx,BYTE PTR [rax]
0x14091c8ac: call   0x1400657b0
0x14091c8b1: test   al,al
0x14091c8b3: je     0x14091c91b
0x14091c8b5: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x14091c8c0: lea    rcx,[rbp+0xb0]
0x14091c8c7: call   0x14006ee10
0x14091c8cc: mov    rbx,QWORD PTR [rax]
0x14091c8cf: lea    rcx,[rbx+0x4]
0x14091c8d3: mov    r8d,DWORD PTR [r12+0x4]
0x14091c8d8: lea    rdx,[rsi+0x4]
0x14091c8dc: call   0x1400fdaf0
0x14091c8e1: test   al,al
0x14091c8e3: jne    0x14091c918
0x14091c8e5: lea    rcx,[rbp+0xb0]
0x14091c8ec: call   0x14006ee00
0x14091c8f1: lea    r8,[rbp+0x3a8]
0x14091c8f8: lea    rdx,[rbp-0x6]
0x14091c8fc: lea    rcx,[rbp+0xb0]
0x14091c903: call   0x14006ee20
0x14091c908: xor    edx,edx
0x14091c90a: movzx  ecx,BYTE PTR [rax]
0x14091c90d: call   0x1400657b0
0x14091c912: test   al,al
0x14091c914: jne    0x14091c8c0
0x14091c916: jmp    0x14091c91b
0x14091c918: add    DWORD PTR [rbx],r15d
0x14091c91b: lea    r8,[rbp+0x3a8]
0x14091c922: lea    rdx,[rbp+0x89]
0x14091c929: lea    rcx,[rbp+0xb0]
0x14091c930: call   0x14006ee20
0x14091c935: xor    edx,edx
0x14091c937: movzx  ecx,BYTE PTR [rax]
0x14091c93a: call   0x140071e60
0x14091c93f: test   al,al
0x14091c941: je     0x14091c999
0x14091c943: mov    ecx,0x3c
0x14091c948: call   0x141539690
0x14091c94d: mov    QWORD PTR [rbp+0x8f8],rax
0x14091c954: mov    rcx,rax
0x14091c957: call   0x1400ff2e0
0x14091c95c: mov    rbx,rax
0x14091c95f: mov    DWORD PTR [rax],r15d
0x14091c962: lea    rcx,[rax+0x4]
0x14091c966: lea    rdx,[rsi+0x4]
0x14091c96a: mov    r8d,0xffffffff
0x14091c970: call   0x1400fda90
0x14091c975: mov    ecx,DWORD PTR [r12+0x4]
0x14091c97a: mov    DWORD PTR [rbx+0xc],ecx
0x14091c97d: mov    rax,QWORD PTR [rbp-0x58]
0x14091c981: mov    ecx,DWORD PTR [rax]
0x14091c983: mov    DWORD PTR [rbx+0x30],ecx
0x14091c986: mov    eax,DWORD PTR [rsp+0x54]
0x14091c98a: mov    DWORD PTR [rbx+0x34],eax
0x14091c98d: mov    rdx,rbx
0x14091c990: mov    rcx,QWORD PTR [rbp-0x80]
0x14091c994: call   0x140124760
0x14091c999: sub    DWORD PTR [rsi],r15d
0x14091c99c: cmp    DWORD PTR [rsi],0x0
0x14091c99f: jg     0x14091cb8c
0x14091c9a5: mov    rdx,r14
0x14091c9a8: lea    rcx,[rbp+0x7b0]
0x14091c9af: call   0x1400b99a0
0x14091c9b4: movsxd rdx,DWORD PTR [rbp-0x38]
0x14091c9b8: lea    rcx,[rbp+0x2a8]
0x14091c9bf: jmp    0x14091cef9
0x14091c9c4: lea    rcx,[rbp+0x798]
0x14091c9cb: call   0x14006ee50
0x14091c9d0: mov    rcx,rax
0x14091c9d3: call   0x140071f30
0x14091c9d8: movsxd r12,eax
0x14091c9db: mov    rdx,r12
0x14091c9de: lea    rcx,[rbp+0x798]
0x14091c9e5: call   0x14006f220
0x14091c9ea: mov    rdi,QWORD PTR [rax]
0x14091c9ed: movsx  ecx,WORD PTR [rdi+0x2]
0x14091c9f1: cmp    ecx,ebx
0x14091c9f3: jne    0x14091cf07
0x14091c9f9: cmp    r15d,DWORD PTR [rdi+0x4]
0x14091c9fd: cmova  r15d,DWORD PTR [rdi+0x4]
0x14091ca02: mov    r14d,0xffffffff
0x14091ca08: mov    edx,DWORD PTR [rdi+0x20]
0x14091ca0b: cmp    edx,r14d
0x14091ca0e: je     0x14091ca26
0x14091ca10: lea    rcx,[rip+0x1bcb271]        # 0x1424e7c88
0x14091ca17: call   0x140072570
0x14091ca1c: test   rax,rax
0x14091ca1f: je     0x14091ca34
0x14091ca21: mov    esi,DWORD PTR [rax+0x4]
0x14091ca24: jmp    0x14091ca30
0x14091ca26: mov    eax,DWORD PTR [rdi+0x1c]
0x14091ca29: cmp    eax,r14d
0x14091ca2c: je     0x14091ca34
0x14091ca2e: mov    esi,eax
0x14091ca30: mov    r14d,DWORD PTR [rdi+0x24]
0x14091ca34: mov    rbx,QWORD PTR [rbp-0x80]
0x14091ca38: lea    rdx,[rbp+0xb8]
0x14091ca3f: lea    rcx,[rbx+0x38]
0x14091ca43: call   0x14006f240
0x14091ca48: lea    rdx,[rbp+0x3b0]
0x14091ca4f: lea    rcx,[rbx+0x38]
0x14091ca53: call   0x14006f230
0x14091ca58: lea    r8,[rbp+0x3b0]
0x14091ca5f: lea    rdx,[rbp+0x3]
0x14091ca63: lea    rcx,[rbp+0xb8]
0x14091ca6a: call   0x14006ee20
0x14091ca6f: xor    edx,edx
0x14091ca71: movzx  ecx,BYTE PTR [rax]
0x14091ca74: call   0x1400657b0
0x14091ca79: test   al,al
0x14091ca7b: je     0x14091cae9
0x14091ca7d: nop    DWORD PTR [rax]
0x14091ca80: lea    rcx,[rbp+0xb8]
0x14091ca87: call   0x14006ee10
0x14091ca8c: mov    rcx,QWORD PTR [rax]
0x14091ca8f: movsx  eax,WORD PTR [rdi+0x2]
0x14091ca93: cmp    DWORD PTR [rcx+0x4],eax
0x14091ca96: jne    0x14091cab3
0x14091ca98: mov    eax,DWORD PTR [rdi+0x10]
0x14091ca9b: cmp    DWORD PTR [rcx+0xc],eax
0x14091ca9e: jne    0x14091cab3
0x14091caa0: mov    eax,DWORD PTR [rdi+0x14]
0x14091caa3: cmp    DWORD PTR [rcx+0x10],eax
0x14091caa6: jne    0x14091cab3
0x14091caa8: cmp    DWORD PTR [rcx+0x18],esi
0x14091caab: jne    0x14091cab3
0x14091caad: cmp    DWORD PTR [rcx+0x1c],r14d
0x14091cab1: je     0x14091cae6
0x14091cab3: lea    rcx,[rbp+0xb8]
0x14091caba: call   0x14006ee00
0x14091cabf: lea    r8,[rbp+0x3b0]
0x14091cac6: lea    rdx,[rbp+0x3]
0x14091caca: lea    rcx,[rbp+0xb8]
0x14091cad1: call   0x14006ee20
0x14091cad6: xor    edx,edx
0x14091cad8: movzx  ecx,BYTE PTR [rax]
0x14091cadb: call   0x1400657b0
0x14091cae0: test   al,al
0x14091cae2: jne    0x14091ca80
0x14091cae4: jmp    0x14091cae9
0x14091cae6: add    DWORD PTR [rcx],r15d
0x14091cae9: lea    r8,[rbp+0x3b0]
0x14091caf0: lea    rdx,[rbp+0x88]
0x14091caf7: lea    rcx,[rbp+0xb8]
0x14091cafe: call   0x14006ee20
0x14091cb03: xor    edx,edx
0x14091cb05: movzx  ecx,BYTE PTR [rax]
0x14091cb08: call   0x140071e60
0x14091cb0d: test   al,al
0x14091cb0f: je     0x14091cb69
0x14091cb11: mov    ecx,0x3c
0x14091cb16: call   0x141539690
0x14091cb1b: mov    QWORD PTR [rbp+0x8f0],rax
0x14091cb22: mov    rcx,rax
0x14091cb25: call   0x1400ff2e0
0x14091cb2a: nop
0x14091cb2b: mov    DWORD PTR [rax],r15d
0x14091cb2e: movsx  ecx,WORD PTR [rdi+0x2]
0x14091cb32: mov    DWORD PTR [rax+0x4],ecx
0x14091cb35: mov    ecx,DWORD PTR [rdi+0x14]
0x14091cb38: mov    DWORD PTR [rax+0x10],ecx
0x14091cb3b: mov    rdx,QWORD PTR [rsp+0x58]
0x14091cb40: mov    ecx,DWORD PTR [rdx+0x4]
0x14091cb43: mov    DWORD PTR [rax+0xc],ecx
0x14091cb46: mov    DWORD PTR [rax+0x18],esi
0x14091cb49: mov    DWORD PTR [rax+0x1c],r14d
0x14091cb4d: mov    rcx,QWORD PTR [rbp-0x58]
0x14091cb51: mov    ecx,DWORD PTR [rcx]
0x14091cb53: mov    DWORD PTR [rax+0x30],ecx
0x14091cb56: mov    ecx,DWORD PTR [rsp+0x54]
0x14091cb5a: mov    DWORD PTR [rax+0x34],ecx
0x14091cb5d: mov    rdx,rax
0x14091cb60: mov    rcx,QWORD PTR [rbp-0x80]
0x14091cb64: call   0x140124760
0x14091cb69: mov    eax,DWORD PTR [rdi+0x4]
0x14091cb6c: cmp    eax,0x989681
0x14091cb71: je     0x14091cb79
0x14091cb73: sub    eax,r15d
0x14091cb76: mov    DWORD PTR [rdi+0x4],eax
0x14091cb79: test   eax,eax
0x14091cb7b: jne    0x14091cb8c
0x14091cb7d: mov    rdx,r12
0x14091cb80: lea    rcx,[rbp+0x798]
0x14091cb87: call   0x1400b99a0
0x14091cb8c: movsxd rdx,DWORD PTR [rbp-0x38]
0x14091cb90: lea    rcx,[rbp+0x2a8]
0x14091cb97: jmp    0x14091cef9
0x14091cb9c: test   rcx,rcx
0x14091cb9f: je     0x14091cd29
0x14091cba5: lea    rcx,[rbp+0x630]
0x14091cbac: call   0x14006ee50
0x14091cbb1: mov    rcx,rax
0x14091cbb4: call   0x140071f30
0x14091cbb9: movsxd r14,eax
0x14091cbbc: mov    rdx,r14
0x14091cbbf: lea    rcx,[rbp+0x630]
0x14091cbc6: call   0x14006f220
0x14091cbcb: mov    rsi,QWORD PTR [rax]
0x14091cbce: cmp    DWORD PTR [rsi+0x4],ebx
0x14091cbd1: jne    0x14091cf07
0x14091cbd7: cmp    r15d,DWORD PTR [rsi]
0x14091cbda: cmovg  r15d,DWORD PTR [rsi]
0x14091cbde: mov    rbx,QWORD PTR [rbp-0x80]
0x14091cbe2: lea    rdx,[rbp+0xc0]
0x14091cbe9: lea    rcx,[rbx+0x38]
0x14091cbed: call   0x14006f240
0x14091cbf2: lea    rdx,[rbp+0x3b8]
0x14091cbf9: lea    rcx,[rbx+0x38]
0x14091cbfd: call   0x14006f230
0x14091cc02: lea    r8,[rbp+0x3b8]
0x14091cc09: lea    rdx,[rbp-0x4]
0x14091cc0d: lea    rcx,[rbp+0xc0]
0x14091cc14: call   0x14006ee20
0x14091cc19: xor    edx,edx
0x14091cc1b: movzx  ecx,BYTE PTR [rax]
0x14091cc1e: call   0x1400657b0
0x14091cc23: test   al,al
0x14091cc25: je     0x14091cc8b
0x14091cc27: nop    WORD PTR [rax+rax*1+0x0]
0x14091cc30: lea    rcx,[rbp+0xc0]
0x14091cc37: call   0x14006ee10
0x14091cc3c: mov    rbx,QWORD PTR [rax]
0x14091cc3f: lea    rcx,[rbx+0x4]
0x14091cc43: mov    r8d,DWORD PTR [r12+0x4]
0x14091cc48: lea    rdx,[rsi+0x4]
0x14091cc4c: call   0x1400fdaf0
0x14091cc51: test   al,al
0x14091cc53: jne    0x14091cc88
0x14091cc55: lea    rcx,[rbp+0xc0]
0x14091cc5c: call   0x14006ee00
0x14091cc61: lea    r8,[rbp+0x3b8]
0x14091cc68: lea    rdx,[rbp-0x4]
0x14091cc6c: lea    rcx,[rbp+0xc0]
0x14091cc73: call   0x14006ee20
0x14091cc78: xor    edx,edx
0x14091cc7a: movzx  ecx,BYTE PTR [rax]
0x14091cc7d: call   0x1400657b0
0x14091cc82: test   al,al
0x14091cc84: jne    0x14091cc30
0x14091cc86: jmp    0x14091cc8b
0x14091cc88: add    DWORD PTR [rbx],r15d
0x14091cc8b: lea    r8,[rbp+0x3b8]
0x14091cc92: lea    rdx,[rbp+0x99]
0x14091cc99: lea    rcx,[rbp+0xc0]
0x14091cca0: call   0x14006ee20
0x14091cca5: xor    edx,edx
0x14091cca7: movzx  ecx,BYTE PTR [rax]
0x14091ccaa: call   0x140071e60
0x14091ccaf: test   al,al
0x14091ccb1: je     0x14091cd09
0x14091ccb3: mov    ecx,0x3c
0x14091ccb8: call   0x141539690
0x14091ccbd: mov    QWORD PTR [rbp+0x8e8],rax
0x14091ccc4: mov    rcx,rax
0x14091ccc7: call   0x1400ff2e0
0x14091cccc: mov    rbx,rax
0x14091cccf: mov    DWORD PTR [rax],r15d
0x14091ccd2: lea    rcx,[rax+0x4]
0x14091ccd6: lea    rdx,[rsi+0x4]
0x14091ccda: mov    r8d,0xffffffff
0x14091cce0: call   0x1400fda90
0x14091cce5: mov    ecx,DWORD PTR [r12+0x4]
0x14091ccea: mov    DWORD PTR [rbx+0xc],ecx
0x14091cced: mov    rax,QWORD PTR [rbp-0x58]
0x14091ccf1: mov    ecx,DWORD PTR [rax]
0x14091ccf3: mov    DWORD PTR [rbx+0x30],ecx
0x14091ccf6: mov    eax,DWORD PTR [rsp+0x54]
0x14091ccfa: mov    DWORD PTR [rbx+0x34],eax
0x14091ccfd: mov    rdx,rbx
0x14091cd00: mov    rcx,QWORD PTR [rbp-0x80]
0x14091cd04: call   0x140124760
0x14091cd09: sub    DWORD PTR [rsi],r15d
0x14091cd0c: cmp    DWORD PTR [rsi],0x0
0x14091cd0f: jg     0x14091ceee
0x14091cd15: mov    rdx,r14
0x14091cd18: lea    rcx,[rbp+0x630]
0x14091cd1f: call   0x1400b99a0
0x14091cd24: jmp    0x14091ceee
0x14091cd29: lea    rcx,[rbp+0x648]
0x14091cd30: call   0x14006ee50
0x14091cd35: mov    rcx,rax
0x14091cd38: call   0x140071f30
0x14091cd3d: movsxd r12,eax
0x14091cd40: mov    rdx,r12
0x14091cd43: lea    rcx,[rbp+0x648]
0x14091cd4a: call   0x14006f220
0x14091cd4f: mov    rdi,QWORD PTR [rax]
0x14091cd52: movsx  ecx,WORD PTR [rdi+0x2]
0x14091cd56: cmp    ecx,ebx
0x14091cd58: jne    0x14091cf07
0x14091cd5e: cmp    r15d,DWORD PTR [rdi+0x4]
0x14091cd62: cmova  r15d,DWORD PTR [rdi+0x4]
0x14091cd67: mov    r14d,0xffffffff
0x14091cd6d: mov    edx,DWORD PTR [rdi+0x20]
0x14091cd70: cmp    edx,r14d
0x14091cd73: je     0x14091cd8b
0x14091cd75: lea    rcx,[rip+0x1bcaf0c]        # 0x1424e7c88
0x14091cd7c: call   0x140072570
0x14091cd81: test   rax,rax
0x14091cd84: je     0x14091cd99
0x14091cd86: mov    esi,DWORD PTR [rax+0x4]
0x14091cd89: jmp    0x14091cd95
0x14091cd8b: mov    eax,DWORD PTR [rdi+0x1c]
0x14091cd8e: cmp    eax,r14d
0x14091cd91: je     0x14091cd99
0x14091cd93: mov    esi,eax
0x14091cd95: mov    r14d,DWORD PTR [rdi+0x24]
0x14091cd99: mov    rbx,QWORD PTR [rbp-0x80]
0x14091cd9d: lea    rdx,[rbp+0xc8]
0x14091cda4: lea    rcx,[rbx+0x38]
0x14091cda8: call   0x14006f240
0x14091cdad: lea    rdx,[rbp+0x3c0]
0x14091cdb4: lea    rcx,[rbx+0x38]
0x14091cdb8: call   0x14006f230
0x14091cdbd: lea    r8,[rbp+0x3c0]
0x14091cdc4: lea    rdx,[rbp-0x3]
0x14091cdc8: lea    rcx,[rbp+0xc8]
0x14091cdcf: call   0x14006ee20
0x14091cdd4: xor    edx,edx
0x14091cdd6: movzx  ecx,BYTE PTR [rax]
0x14091cdd9: call   0x1400657b0
0x14091cdde: test   al,al
0x14091cde0: je     0x14091ce4b
0x14091cde2: lea    rcx,[rbp+0xc8]
0x14091cde9: call   0x14006ee10
0x14091cdee: mov    rcx,QWORD PTR [rax]
0x14091cdf1: movsx  eax,WORD PTR [rdi+0x2]
0x14091cdf5: cmp    DWORD PTR [rcx+0x4],eax
0x14091cdf8: jne    0x14091ce15
0x14091cdfa: mov    eax,DWORD PTR [rdi+0x10]
0x14091cdfd: cmp    DWORD PTR [rcx+0xc],eax
0x14091ce00: jne    0x14091ce15
0x14091ce02: mov    eax,DWORD PTR [rdi+0x14]
0x14091ce05: cmp    DWORD PTR [rcx+0x10],eax
0x14091ce08: jne    0x14091ce15
0x14091ce0a: cmp    DWORD PTR [rcx+0x18],esi
0x14091ce0d: jne    0x14091ce15
0x14091ce0f: cmp    DWORD PTR [rcx+0x1c],r14d
0x14091ce13: je     0x14091ce48
0x14091ce15: lea    rcx,[rbp+0xc8]
0x14091ce1c: call   0x14006ee00
0x14091ce21: lea    r8,[rbp+0x3c0]
0x14091ce28: lea    rdx,[rbp-0x3]
0x14091ce2c: lea    rcx,[rbp+0xc8]
0x14091ce33: call   0x14006ee20
0x14091ce38: xor    edx,edx
0x14091ce3a: movzx  ecx,BYTE PTR [rax]
0x14091ce3d: call   0x1400657b0
0x14091ce42: test   al,al
0x14091ce44: jne    0x14091cde2
0x14091ce46: jmp    0x14091ce4b
0x14091ce48: add    DWORD PTR [rcx],r15d
0x14091ce4b: lea    r8,[rbp+0x3c0]
0x14091ce52: lea    rdx,[rbp+0x98]
0x14091ce59: lea    rcx,[rbp+0xc8]
0x14091ce60: call   0x14006ee20
0x14091ce65: xor    edx,edx
0x14091ce67: movzx  ecx,BYTE PTR [rax]
0x14091ce6a: call   0x140071e60
0x14091ce6f: test   al,al
0x14091ce71: je     0x14091cecb
0x14091ce73: mov    ecx,0x3c
0x14091ce78: call   0x141539690
0x14091ce7d: mov    QWORD PTR [rbp+0x8e0],rax
0x14091ce84: mov    rcx,rax
0x14091ce87: call   0x1400ff2e0
0x14091ce8c: nop
0x14091ce8d: mov    DWORD PTR [rax],r15d
0x14091ce90: movsx  ecx,WORD PTR [rdi+0x2]
0x14091ce94: mov    DWORD PTR [rax+0x4],ecx
0x14091ce97: mov    ecx,DWORD PTR [rdi+0x14]
0x14091ce9a: mov    DWORD PTR [rax+0x10],ecx
0x14091ce9d: mov    rdx,QWORD PTR [rsp+0x58]
0x14091cea2: mov    ecx,DWORD PTR [rdx+0x4]
0x14091cea5: mov    DWORD PTR [rax+0xc],ecx
0x14091cea8: mov    DWORD PTR [rax+0x18],esi
0x14091ceab: mov    DWORD PTR [rax+0x1c],r14d
0x14091ceaf: mov    rcx,QWORD PTR [rbp-0x58]
0x14091ceb3: mov    ecx,DWORD PTR [rcx]
0x14091ceb5: mov    DWORD PTR [rax+0x30],ecx
0x14091ceb8: mov    ecx,DWORD PTR [rsp+0x54]
0x14091cebc: mov    DWORD PTR [rax+0x34],ecx
0x14091cebf: mov    rdx,rax
0x14091cec2: mov    rcx,QWORD PTR [rbp-0x80]
0x14091cec6: call   0x140124760
0x14091cecb: mov    eax,DWORD PTR [rdi+0x4]
0x14091cece: cmp    eax,0x989681
0x14091ced3: je     0x14091cedb
0x14091ced5: sub    eax,r15d
0x14091ced8: mov    DWORD PTR [rdi+0x4],eax
0x14091cedb: test   eax,eax
0x14091cedd: jne    0x14091ceee
0x14091cedf: mov    rdx,r12
0x14091cee2: lea    rcx,[rbp+0x648]
0x14091cee9: call   0x1400b99a0
0x14091ceee: movsxd rdx,DWORD PTR [rbp-0x20]
0x14091cef2: lea    rcx,[rbp+0x178]
0x14091cef9: call   0x14006f360
0x14091cefe: sub    DWORD PTR [rax],r15d
0x14091cf01: sub    r13d,r15d
0x14091cf04: mov    ebx,DWORD PTR [rbp+0x38]
0x14091cf07: test   r13d,r13d
0x14091cf0a: mov    edi,DWORD PTR [rbp-0x38]
0x14091cf0d: jg     0x14091c800
0x14091cf13: mov    DWORD PTR [rbp+0x358],0xd
0x14091cf1d: lea    rdx,[rbp+0x358]
0x14091cf24: lea    rcx,[rbp+0x600]
0x14091cf2b: call   0x14006f410
0x14091cf30: mov    DWORD PTR [rbp+0x35c],0xd
0x14091cf3a: lea    rdx,[rbp+0x35c]
0x14091cf41: lea    rcx,[rbp+0x700]
0x14091cf48: call   0x14006f410
0x14091cf4d: mov    r14d,DWORD PTR [rbp-0x5c]
0x14091cf51: mov    DWORD PTR [rbp+0x360],r14d
0x14091cf58: lea    rdx,[rbp+0x360]
0x14091cf5f: lea    rcx,[rbp+0x718]
0x14091cf66: call   0x14006f410
0x14091cf6b: mov    eax,0xffffffff
0x14091cf70: mov    DWORD PTR [rbp+0x364],eax
0x14091cf76: lea    rdx,[rbp+0x364]
0x14091cf7d: lea    rcx,[rbp+0x730]
0x14091cf84: call   0x14006f410
0x14091cf89: lea    rdx,[rbp+0x368]
0x14091cf90: lea    rcx,[rbp+0x458]
0x14091cf97: call   0x14006f410
0x14091cf9c: add    r14d,0x2
0x14091cfa0: mov    DWORD PTR [rsp+0x54],r14d
0x14091cfa5: lea    rcx,[rbp+0x688]
0x14091cfac: call   0x140065b20
0x14091cfb1: nop
0x14091cfb2: lea    rcx,[rbp+0x5d0]
0x14091cfb9: jmp    0x14091da3b
0x14091cfbe: movsxd rdx,r15d
0x14091cfc1: lea    rcx,[rbp+0x600]
0x14091cfc8: call   0x14006f360
0x14091cfcd: mov    DWORD PTR [rax],0x1
0x14091cfd3: lea    rcx,[rbp+0x688]
0x14091cfda: call   0x140065b20
0x14091cfdf: nop
0x14091cfe0: lea    rcx,[rbp+0x5d0]
0x14091cfe7: jmp    0x14091da3b
0x14091cfec: lea    rcx,[rbp+0x5e8]
0x14091cff3: call   0x140065b00
0x14091cff8: nop
0x14091cff9: lea    rcx,[rbp+0x6a0]
0x14091d000: call   0x140065b00
0x14091d005: nop
0x14091d006: mov    DWORD PTR [rbp-0x28],r15d
0x14091d00a: mov    rax,QWORD PTR [rbp+0x430]
0x14091d011: sub    rax,QWORD PTR [rbp+0x428]
0x14091d018: sar    rax,0x2
0x14091d01c: test   eax,eax
0x14091d01e: jle    0x14091d085
0x14091d020: movsxd r15,DWORD PTR [rbp-0x5c]
0x14091d024: nop    DWORD PTR [rax+0x0]
0x14091d028: nop    DWORD PTR [rax+rax*1+0x0]
0x14091d030: mov    rdx,r15
0x14091d033: lea    rcx,[rbp+0x458]
0x14091d03a: call   0x14006f360
0x14091d03f: mov    ebx,DWORD PTR [rax]
0x14091d041: movsxd rdx,DWORD PTR [rbp-0x28]
0x14091d045: lea    rcx,[rbp+0x2c0]
0x14091d04c: call   0x14006f360
0x14091d051: cmp    DWORD PTR [rax],ebx
0x14091d053: jl     0x14091d065
0x14091d055: lea    rdx,[rbp-0x28]
0x14091d059: lea    rcx,[rbp+0x5e8]
0x14091d060: call   0x14006f410
0x14091d065: mov    ecx,DWORD PTR [rbp-0x28]
0x14091d068: inc    ecx
0x14091d06a: mov    DWORD PTR [rbp-0x28],ecx
0x14091d06d: mov    rax,QWORD PTR [rbp+0x430]
0x14091d074: sub    rax,QWORD PTR [rbp+0x428]
0x14091d07b: sar    rax,0x2
0x14091d07f: cmp    ecx,eax
0x14091d081: jl     0x14091d030
0x14091d083: jmp    0x14091d089
0x14091d085: mov    r15d,DWORD PTR [rbp-0x5c]
0x14091d089: xor    eax,eax
0x14091d08b: mov    DWORD PTR [rbp-0x28],eax
0x14091d08e: mov    rax,QWORD PTR [rbp+0x298]
0x14091d095: sub    rax,QWORD PTR [rbp+0x290]
0x14091d09c: sar    rax,0x2
0x14091d0a0: test   eax,eax
0x14091d0a2: jle    0x14091d103
0x14091d0a4: movsxd rdi,r15d
0x14091d0a7: nop    WORD PTR [rax+rax*1+0x0]
0x14091d0b0: mov    rdx,rdi
0x14091d0b3: lea    rcx,[rbp+0x458]
0x14091d0ba: call   0x14006f360
0x14091d0bf: mov    ebx,DWORD PTR [rax]
0x14091d0c1: movsxd rdx,DWORD PTR [rbp-0x28]
0x14091d0c5: lea    rcx,[rbp+0x178]
0x14091d0cc: call   0x14006f360
0x14091d0d1: cmp    DWORD PTR [rax],ebx
0x14091d0d3: jl     0x14091d0e5
0x14091d0d5: lea    rdx,[rbp-0x28]
0x14091d0d9: lea    rcx,[rbp+0x6a0]
0x14091d0e0: call   0x14006f410
0x14091d0e5: mov    ecx,DWORD PTR [rbp-0x28]
0x14091d0e8: inc    ecx
0x14091d0ea: mov    DWORD PTR [rbp-0x28],ecx
0x14091d0ed: mov    rax,QWORD PTR [rbp+0x298]
0x14091d0f4: sub    rax,QWORD PTR [rbp+0x290]
0x14091d0fb: sar    rax,0x2
0x14091d0ff: cmp    ecx,eax
0x14091d101: jl     0x14091d0b0
0x14091d103: mov    edi,r13d
0x14091d106: mov    esi,r13d
0x14091d109: lea    rcx,[rbp+0x6a0]
0x14091d110: call   0x14006f370
0x14091d115: mov    rbx,rax
0x14091d118: lea    rcx,[rbp+0x5e8]
0x14091d11f: call   0x14006f370
0x14091d124: add    rbx,rax
0x14091d127: je     0x14091da12
0x14091d12d: lea    rcx,[rbp+0x6a0]
0x14091d134: call   0x14006f370
0x14091d139: mov    rbx,rax
0x14091d13c: lea    rcx,[rbp+0x5e8]
0x14091d143: call   0x14006f370
0x14091d148: lea    ecx,[rax+rbx*1]
0x14091d14b: call   0x140071f30
0x14091d150: mov    ebx,eax
0x14091d152: lea    rcx,[rbp+0x5e8]
0x14091d159: call   0x14006f370
0x14091d15e: cmp    ebx,eax
0x14091d160: jge    0x14091d194
0x14091d162: lea    rcx,[rbp+0x5e8]
0x14091d169: call   0x14006f370
0x14091d16e: mov    rcx,rax
0x14091d171: call   0x140071f30
0x14091d176: movsxd rdx,eax
0x14091d179: lea    rcx,[rbp+0x5e8]
0x14091d180: call   0x14006f360
0x14091d185: movsxd rdi,DWORD PTR [rax]
0x14091d188: mov    rdx,rdi
0x14091d18b: lea    rcx,[rbp+0x428]
0x14091d192: jmp    0x14091d1c4
0x14091d194: lea    rcx,[rbp+0x6a0]
0x14091d19b: call   0x14006f370
0x14091d1a0: mov    rcx,rax
0x14091d1a3: call   0x140071f30
0x14091d1a8: movsxd rdx,eax
0x14091d1ab: lea    rcx,[rbp+0x6a0]
0x14091d1b2: call   0x14006f360
0x14091d1b7: movsxd rsi,DWORD PTR [rax]
0x14091d1ba: mov    rdx,rsi
0x14091d1bd: lea    rcx,[rbp+0x290]
0x14091d1c4: call   0x14006f360
0x14091d1c9: mov    ebx,DWORD PTR [rax]
0x14091d1cb: mov    DWORD PTR [rbp-0x38],ebx
0x14091d1ce: cmp    ebx,0xffffffff
0x14091d1d1: je     0x14091da12
0x14091d1d7: mov    r13d,DWORD PTR [rbp-0x44]
0x14091d1db: mov    DWORD PTR [rbp+0x3f4],r13d
0x14091d1e2: test   r13d,r13d
0x14091d1e5: jle    0x14091d964
0x14091d1eb: movsxd r14,edi
0x14091d1ee: mov    QWORD PTR [rbp-0x18],r14
0x14091d1f2: movsxd rax,esi
0x14091d1f5: mov    QWORD PTR [rbp-0x20],rax
0x14091d1f9: jmp    0x14091d205
0x14091d1fb: nop    DWORD PTR [rax+rax*1+0x0]
0x14091d200: mov    r12,QWORD PTR [rsp+0x58]
0x14091d205: cmp    r13d,0x1
0x14091d209: ja     0x14091d20f
0x14091d20b: xor    eax,eax
0x14091d20d: jmp    0x14091d248
0x14091d20f: call   0x140eb68b0
0x14091d214: mov    r8d,eax
0x14091d217: mov    eax,0x3
0x14091d21c: mul    r8d
0x14091d21f: mov    ecx,r8d
0x14091d222: sub    ecx,edx
0x14091d224: shr    ecx,1
0x14091d226: add    ecx,edx
0x14091d228: shr    ecx,0x1e
0x14091d22b: imul   ecx,ecx,0x80000001
0x14091d231: add    r8d,ecx
0x14091d234: xor    edx,edx
0x14091d236: mov    eax,0x7fffffff
0x14091d23b: div    r13d
0x14091d23e: lea    ecx,[rax+0x1]
0x14091d241: xor    edx,edx
0x14091d243: mov    eax,r8d
0x14091d246: div    ecx
0x14091d248: lea    r15d,[rax+0x1]
0x14091d24c: mov    rax,QWORD PTR [rbp-0x50]
0x14091d250: mov    rax,QWORD PTR [rax+0x308]
0x14091d257: cmp    r14,0xffffffffffffffff
0x14091d25b: je     0x14091d5e6
0x14091d261: test   rax,rax
0x14091d264: je     0x14091d3fe
0x14091d26a: lea    rcx,[rbp+0x780]
0x14091d271: call   0x14006ee50
0x14091d276: mov    rcx,rax
0x14091d279: call   0x140071f30
0x14091d27e: movsxd r14,eax
0x14091d281: mov    rdx,r14
0x14091d284: lea    rcx,[rbp+0x780]
0x14091d28b: call   0x14006f220
0x14091d290: mov    rsi,QWORD PTR [rax]
0x14091d293: cmp    DWORD PTR [rsi+0x4],ebx
0x14091d296: jne    0x14091d957
0x14091d29c: cmp    r15d,DWORD PTR [rsi]
0x14091d29f: cmovg  r15d,DWORD PTR [rsi]
0x14091d2a3: mov    rbx,QWORD PTR [rbp-0x80]
0x14091d2a7: lea    rdx,[rbp+0xd0]
0x14091d2ae: lea    rcx,[rbx+0x38]
0x14091d2b2: call   0x14006f240
0x14091d2b7: lea    rdx,[rbp+0x3c8]
0x14091d2be: lea    rcx,[rbx+0x38]
0x14091d2c2: call   0x14006f230
0x14091d2c7: lea    r8,[rbp+0x3c8]
0x14091d2ce: lea    rdx,[rbp-0x2]
0x14091d2d2: lea    rcx,[rbp+0xd0]
0x14091d2d9: call   0x14006ee20
0x14091d2de: xor    edx,edx
0x14091d2e0: movzx  ecx,BYTE PTR [rax]
0x14091d2e3: call   0x1400657b0
0x14091d2e8: test   al,al
0x14091d2ea: je     0x14091d34b
0x14091d2ec: nop    DWORD PTR [rax+0x0]
0x14091d2f0: lea    rcx,[rbp+0xd0]
0x14091d2f7: call   0x14006ee10
0x14091d2fc: mov    rbx,QWORD PTR [rax]
0x14091d2ff: lea    rcx,[rbx+0x4]
0x14091d303: mov    r8d,DWORD PTR [r12+0x4]
0x14091d308: lea    rdx,[rsi+0x4]
0x14091d30c: call   0x1400fdaf0
0x14091d311: test   al,al
0x14091d313: jne    0x14091d348
0x14091d315: lea    rcx,[rbp+0xd0]
0x14091d31c: call   0x14006ee00
0x14091d321: lea    r8,[rbp+0x3c8]
0x14091d328: lea    rdx,[rbp-0x2]
0x14091d32c: lea    rcx,[rbp+0xd0]
0x14091d333: call   0x14006ee20
0x14091d338: xor    edx,edx
0x14091d33a: movzx  ecx,BYTE PTR [rax]
0x14091d33d: call   0x1400657b0
0x14091d342: test   al,al
0x14091d344: jne    0x14091d2f0
0x14091d346: jmp    0x14091d34b
0x14091d348: add    DWORD PTR [rbx],r15d
0x14091d34b: lea    r8,[rbp+0x3c8]
0x14091d352: lea    rdx,[rbp+0x91]
0x14091d359: lea    rcx,[rbp+0xd0]
0x14091d360: call   0x14006ee20
0x14091d365: xor    edx,edx
0x14091d367: movzx  ecx,BYTE PTR [rax]
0x14091d36a: call   0x140071e60
0x14091d36f: test   al,al
0x14091d371: je     0x14091d3c9
0x14091d373: mov    ecx,0x3c
0x14091d378: call   0x141539690
0x14091d37d: mov    QWORD PTR [rbp+0x8d8],rax
0x14091d384: mov    rcx,rax
0x14091d387: call   0x1400ff2e0
0x14091d38c: mov    rbx,rax
0x14091d38f: mov    DWORD PTR [rax],r15d
0x14091d392: lea    rcx,[rax+0x4]
0x14091d396: lea    rdx,[rsi+0x4]
0x14091d39a: mov    r8d,0xffffffff
0x14091d3a0: call   0x1400fda90
0x14091d3a5: mov    ecx,DWORD PTR [r12+0x4]
0x14091d3aa: mov    DWORD PTR [rbx+0xc],ecx
0x14091d3ad: mov    rax,QWORD PTR [rbp-0x58]
0x14091d3b1: mov    ecx,DWORD PTR [rax]
0x14091d3b3: mov    DWORD PTR [rbx+0x30],ecx
0x14091d3b6: mov    eax,DWORD PTR [rsp+0x54]
0x14091d3ba: mov    DWORD PTR [rbx+0x34],eax
0x14091d3bd: mov    rdx,rbx
0x14091d3c0: mov    rcx,QWORD PTR [rbp-0x80]
0x14091d3c4: call   0x140124760
0x14091d3c9: sub    DWORD PTR [rsi],r15d
0x14091d3cc: cmp    DWORD PTR [rsi],0x0
0x14091d3cf: jg     0x14091d5cc
0x14091d3d5: mov    rdx,r14
0x14091d3d8: lea    rcx,[rbp+0x780]
0x14091d3df: call   0x1400b99a0
0x14091d3e4: mov    rax,QWORD PTR [rbp+0x2c0]
0x14091d3eb: mov    r14,QWORD PTR [rbp-0x18]
0x14091d3ef: sub    DWORD PTR [rax+r14*4],r15d
0x14091d3f3: sub    r13d,r15d
0x14091d3f6: mov    ebx,DWORD PTR [rbp-0x38]
0x14091d3f9: jmp    0x14091d95b
0x14091d3fe: lea    rcx,[rbp+0x768]
0x14091d405: call   0x14006ee50
0x14091d40a: mov    rcx,rax
0x14091d40d: call   0x140071f30
0x14091d412: movsxd r12,eax
0x14091d415: mov    rdx,r12
0x14091d418: lea    rcx,[rbp+0x768]
0x14091d41f: call   0x14006f220
0x14091d424: mov    rdi,QWORD PTR [rax]
0x14091d427: movsx  ecx,WORD PTR [rdi+0x2]
0x14091d42b: cmp    ecx,ebx
0x14091d42d: jne    0x14091d95b
0x14091d433: cmp    r15d,DWORD PTR [rdi+0x4]
0x14091d437: cmova  r15d,DWORD PTR [rdi+0x4]
0x14091d43c: mov    eax,0xffffffff
0x14091d441: mov    esi,eax
0x14091d443: mov    r14d,eax
0x14091d446: mov    edx,DWORD PTR [rdi+0x20]
0x14091d449: cmp    edx,eax
0x14091d44b: je     0x14091d463
0x14091d44d: lea    rcx,[rip+0x1bca834]        # 0x1424e7c88
0x14091d454: call   0x140072570
0x14091d459: test   rax,rax
0x14091d45c: je     0x14091d470
0x14091d45e: mov    esi,DWORD PTR [rax+0x4]
0x14091d461: jmp    0x14091d46c
0x14091d463: mov    eax,DWORD PTR [rdi+0x1c]
0x14091d466: cmp    eax,esi
0x14091d468: je     0x14091d470
0x14091d46a: mov    esi,eax
0x14091d46c: mov    r14d,DWORD PTR [rdi+0x24]
0x14091d470: mov    rbx,QWORD PTR [rbp-0x80]
0x14091d474: lea    rdx,[rbp+0xd8]
0x14091d47b: lea    rcx,[rbx+0x38]
0x14091d47f: call   0x14006f240
0x14091d484: lea    rdx,[rbp+0x3d0]
0x14091d48b: lea    rcx,[rbx+0x38]
0x14091d48f: call   0x14006f230
0x14091d494: lea    r8,[rbp+0x3d0]
0x14091d49b: lea    rdx,[rbp-0x1]
0x14091d49f: lea    rcx,[rbp+0xd8]
0x14091d4a6: call   0x14006ee20
0x14091d4ab: xor    edx,edx
0x14091d4ad: movzx  ecx,BYTE PTR [rax]
0x14091d4b0: call   0x1400657b0
0x14091d4b5: test   al,al
0x14091d4b7: je     0x14091d529
0x14091d4b9: nop    DWORD PTR [rax+0x0]
0x14091d4c0: lea    rcx,[rbp+0xd8]
0x14091d4c7: call   0x14006ee10
0x14091d4cc: mov    rcx,QWORD PTR [rax]
0x14091d4cf: movsx  eax,WORD PTR [rdi+0x2]
0x14091d4d3: cmp    DWORD PTR [rcx+0x4],eax
0x14091d4d6: jne    0x14091d4f3
0x14091d4d8: mov    eax,DWORD PTR [rdi+0x10]
0x14091d4db: cmp    DWORD PTR [rcx+0xc],eax
0x14091d4de: jne    0x14091d4f3
0x14091d4e0: mov    eax,DWORD PTR [rdi+0x14]
0x14091d4e3: cmp    DWORD PTR [rcx+0x10],eax
0x14091d4e6: jne    0x14091d4f3
0x14091d4e8: cmp    DWORD PTR [rcx+0x18],esi
0x14091d4eb: jne    0x14091d4f3
0x14091d4ed: cmp    DWORD PTR [rcx+0x1c],r14d
0x14091d4f1: je     0x14091d526
0x14091d4f3: lea    rcx,[rbp+0xd8]
0x14091d4fa: call   0x14006ee00
0x14091d4ff: lea    r8,[rbp+0x3d0]
0x14091d506: lea    rdx,[rbp-0x1]
0x14091d50a: lea    rcx,[rbp+0xd8]
0x14091d511: call   0x14006ee20
0x14091d516: xor    edx,edx
0x14091d518: movzx  ecx,BYTE PTR [rax]
0x14091d51b: call   0x1400657b0
0x14091d520: test   al,al
0x14091d522: jne    0x14091d4c0
0x14091d524: jmp    0x14091d529
0x14091d526: add    DWORD PTR [rcx],r15d
0x14091d529: lea    r8,[rbp+0x3d0]
0x14091d530: lea    rdx,[rbp+0x90]
0x14091d537: lea    rcx,[rbp+0xd8]
0x14091d53e: call   0x14006ee20
0x14091d543: xor    edx,edx
0x14091d545: movzx  ecx,BYTE PTR [rax]
0x14091d548: call   0x140071e60
0x14091d54d: test   al,al
0x14091d54f: je     0x14091d5a9
0x14091d551: mov    ecx,0x3c
0x14091d556: call   0x141539690
0x14091d55b: mov    QWORD PTR [rbp+0x8d0],rax
0x14091d562: mov    rcx,rax
0x14091d565: call   0x1400ff2e0
0x14091d56a: nop
0x14091d56b: mov    DWORD PTR [rax],r15d
0x14091d56e: movsx  ecx,WORD PTR [rdi+0x2]
0x14091d572: mov    DWORD PTR [rax+0x4],ecx
0x14091d575: mov    ecx,DWORD PTR [rdi+0x14]
0x14091d578: mov    DWORD PTR [rax+0x10],ecx
0x14091d57b: mov    rdx,QWORD PTR [rsp+0x58]
0x14091d580: mov    ecx,DWORD PTR [rdx+0x4]
0x14091d583: mov    DWORD PTR [rax+0xc],ecx
0x14091d586: mov    DWORD PTR [rax+0x18],esi
0x14091d589: mov    DWORD PTR [rax+0x1c],r14d
0x14091d58d: mov    rcx,QWORD PTR [rbp-0x58]
0x14091d591: mov    ecx,DWORD PTR [rcx]
0x14091d593: mov    DWORD PTR [rax+0x30],ecx
0x14091d596: mov    ecx,DWORD PTR [rsp+0x54]
0x14091d59a: mov    DWORD PTR [rax+0x34],ecx
0x14091d59d: mov    rdx,rax
0x14091d5a0: mov    rcx,QWORD PTR [rbp-0x80]
0x14091d5a4: call   0x140124760
0x14091d5a9: mov    eax,DWORD PTR [rdi+0x4]
0x14091d5ac: cmp    eax,0x989681
0x14091d5b1: je     0x14091d5b9
0x14091d5b3: sub    eax,r15d
0x14091d5b6: mov    DWORD PTR [rdi+0x4],eax
0x14091d5b9: test   eax,eax
0x14091d5bb: jne    0x14091d5cc
0x14091d5bd: mov    rdx,r12
0x14091d5c0: lea    rcx,[rbp+0x768]
0x14091d5c7: call   0x1400b99a0
0x14091d5cc: mov    rax,QWORD PTR [rbp+0x2c0]
0x14091d5d3: mov    r14,QWORD PTR [rbp-0x18]
0x14091d5d7: sub    DWORD PTR [rax+r14*4],r15d
0x14091d5db: sub    r13d,r15d
0x14091d5de: mov    ebx,DWORD PTR [rbp-0x38]
0x14091d5e1: jmp    0x14091d95b
0x14091d5e6: test   rax,rax
0x14091d5e9: je     0x14091d76a
0x14091d5ef: lea    rcx,[rbp+0x630]
0x14091d5f6: call   0x14006ee50
0x14091d5fb: mov    rcx,rax
0x14091d5fe: call   0x140071f30
0x14091d603: movsxd r14,eax
0x14091d606: mov    rdx,r14
0x14091d609: lea    rcx,[rbp+0x630]
0x14091d610: call   0x14006f220
0x14091d615: mov    rsi,QWORD PTR [rax]
0x14091d618: cmp    DWORD PTR [rsi+0x4],ebx
0x14091d61b: jne    0x14091d957
0x14091d621: cmp    r15d,DWORD PTR [rsi]
0x14091d624: cmovg  r15d,DWORD PTR [rsi]
0x14091d628: mov    rbx,QWORD PTR [rbp-0x80]
0x14091d62c: lea    rdx,[rbp+0xe0]
0x14091d633: lea    rcx,[rbx+0x38]
0x14091d637: call   0x14006f240
0x14091d63c: lea    rdx,[rbp+0x3d8]
0x14091d643: lea    rcx,[rbx+0x38]
0x14091d647: call   0x14006f230
0x14091d64c: lea    r8,[rbp+0x3d8]
0x14091d653: lea    rdx,[rbp+0x0]
0x14091d657: lea    rcx,[rbp+0xe0]
0x14091d65e: call   0x14006ee20
0x14091d663: xor    edx,edx
0x14091d665: movzx  ecx,BYTE PTR [rax]
0x14091d668: call   0x1400657b0
0x14091d66d: test   al,al
0x14091d66f: je     0x14091d6cc
0x14091d671: lea    rcx,[rbp+0xe0]
0x14091d678: call   0x14006ee10
0x14091d67d: mov    rbx,QWORD PTR [rax]
0x14091d680: lea    rcx,[rbx+0x4]
0x14091d684: mov    r8d,DWORD PTR [r12+0x4]
0x14091d689: lea    rdx,[rsi+0x4]
0x14091d68d: call   0x1400fdaf0
0x14091d692: test   al,al
0x14091d694: jne    0x14091d6c9
0x14091d696: lea    rcx,[rbp+0xe0]
0x14091d69d: call   0x14006ee00
0x14091d6a2: lea    r8,[rbp+0x3d8]
0x14091d6a9: lea    rdx,[rbp+0x0]
0x14091d6ad: lea    rcx,[rbp+0xe0]
0x14091d6b4: call   0x14006ee20
0x14091d6b9: xor    edx,edx
0x14091d6bb: movzx  ecx,BYTE PTR [rax]
0x14091d6be: call   0x1400657b0
0x14091d6c3: test   al,al
0x14091d6c5: jne    0x14091d671
0x14091d6c7: jmp    0x14091d6cc
0x14091d6c9: add    DWORD PTR [rbx],r15d
0x14091d6cc: lea    r8,[rbp+0x3d8]
0x14091d6d3: lea    rdx,[rbp+0x8e]
0x14091d6da: lea    rcx,[rbp+0xe0]
0x14091d6e1: call   0x14006ee20
0x14091d6e6: xor    edx,edx
0x14091d6e8: movzx  ecx,BYTE PTR [rax]
0x14091d6eb: call   0x140071e60
0x14091d6f0: test   al,al
0x14091d6f2: je     0x14091d74a
0x14091d6f4: mov    ecx,0x3c
0x14091d6f9: call   0x141539690
0x14091d6fe: mov    QWORD PTR [rbp+0x8c8],rax
0x14091d705: mov    rcx,rax
0x14091d708: call   0x1400ff2e0
0x14091d70d: mov    rbx,rax
0x14091d710: mov    DWORD PTR [rax],r15d
0x14091d713: lea    rcx,[rax+0x4]
0x14091d717: lea    rdx,[rsi+0x4]
0x14091d71b: mov    r8d,0xffffffff
0x14091d721: call   0x1400fda90
0x14091d726: mov    ecx,DWORD PTR [r12+0x4]
0x14091d72b: mov    DWORD PTR [rbx+0xc],ecx
0x14091d72e: mov    rax,QWORD PTR [rbp-0x58]
0x14091d732: mov    ecx,DWORD PTR [rax]
0x14091d734: mov    DWORD PTR [rbx+0x30],ecx
0x14091d737: mov    eax,DWORD PTR [rsp+0x54]
0x14091d73b: mov    DWORD PTR [rbx+0x34],eax
0x14091d73e: mov    rdx,rbx
0x14091d741: mov    rcx,QWORD PTR [rbp-0x80]
0x14091d745: call   0x140124760
0x14091d74a: sub    DWORD PTR [rsi],r15d
0x14091d74d: cmp    DWORD PTR [rsi],0x0
0x14091d750: jg     0x14091d93c
0x14091d756: mov    rdx,r14
0x14091d759: lea    rcx,[rbp+0x630]
0x14091d760: call   0x1400b99a0
0x14091d765: jmp    0x14091d93c
0x14091d76a: lea    rcx,[rbp+0x648]
0x14091d771: call   0x14006ee50
0x14091d776: mov    rcx,rax
0x14091d779: call   0x140071f30
0x14091d77e: movsxd r12,eax
0x14091d781: mov    rdx,r12
0x14091d784: lea    rcx,[rbp+0x648]
0x14091d78b: call   0x14006f220
0x14091d790: mov    rdi,QWORD PTR [rax]
0x14091d793: movsx  ecx,WORD PTR [rdi+0x2]
0x14091d797: cmp    ecx,ebx
0x14091d799: jne    0x14091d95b
0x14091d79f: cmp    r15d,DWORD PTR [rdi+0x4]
0x14091d7a3: cmova  r15d,DWORD PTR [rdi+0x4]
0x14091d7a8: mov    eax,0xffffffff
0x14091d7ad: mov    esi,eax
0x14091d7af: mov    r14d,eax
0x14091d7b2: mov    edx,DWORD PTR [rdi+0x20]
0x14091d7b5: cmp    edx,eax
0x14091d7b7: je     0x14091d7cf
0x14091d7b9: lea    rcx,[rip+0x1bca4c8]        # 0x1424e7c88
0x14091d7c0: call   0x140072570
0x14091d7c5: test   rax,rax
0x14091d7c8: je     0x14091d7dc
0x14091d7ca: mov    esi,DWORD PTR [rax+0x4]
0x14091d7cd: jmp    0x14091d7d8
0x14091d7cf: mov    eax,DWORD PTR [rdi+0x1c]
0x14091d7d2: cmp    eax,esi
0x14091d7d4: je     0x14091d7dc
0x14091d7d6: mov    esi,eax
0x14091d7d8: mov    r14d,DWORD PTR [rdi+0x24]
0x14091d7dc: mov    rbx,QWORD PTR [rbp-0x80]
0x14091d7e0: lea    rdx,[rbp+0xe8]
0x14091d7e7: lea    rcx,[rbx+0x38]
0x14091d7eb: call   0x14006f240
0x14091d7f0: lea    rdx,[rbp+0x3e0]
0x14091d7f7: lea    rcx,[rbx+0x38]
0x14091d7fb: call   0x14006f230
0x14091d800: lea    r8,[rbp+0x3e0]
0x14091d807: lea    rdx,[rbp+0x1]
0x14091d80b: lea    rcx,[rbp+0xe8]
0x14091d812: call   0x14006ee20
0x14091d817: xor    edx,edx
0x14091d819: movzx  ecx,BYTE PTR [rax]
0x14091d81c: call   0x1400657b0
0x14091d821: test   al,al
0x14091d823: je     0x14091d899
0x14091d825: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x14091d830: lea    rcx,[rbp+0xe8]
0x14091d837: call   0x14006ee10
0x14091d83c: mov    rcx,QWORD PTR [rax]
0x14091d83f: movsx  eax,WORD PTR [rdi+0x2]
0x14091d843: cmp    DWORD PTR [rcx+0x4],eax
0x14091d846: jne    0x14091d863
0x14091d848: mov    eax,DWORD PTR [rdi+0x10]
0x14091d84b: cmp    DWORD PTR [rcx+0xc],eax
0x14091d84e: jne    0x14091d863
0x14091d850: mov    eax,DWORD PTR [rdi+0x14]
0x14091d853: cmp    DWORD PTR [rcx+0x10],eax
0x14091d856: jne    0x14091d863
0x14091d858: cmp    DWORD PTR [rcx+0x18],esi
0x14091d85b: jne    0x14091d863
0x14091d85d: cmp    DWORD PTR [rcx+0x1c],r14d
0x14091d861: je     0x14091d896
0x14091d863: lea    rcx,[rbp+0xe8]
0x14091d86a: call   0x14006ee00
0x14091d86f: lea    r8,[rbp+0x3e0]
0x14091d876: lea    rdx,[rbp+0x1]
0x14091d87a: lea    rcx,[rbp+0xe8]
0x14091d881: call   0x14006ee20
0x14091d886: xor    edx,edx
0x14091d888: movzx  ecx,BYTE PTR [rax]
0x14091d88b: call   0x1400657b0
0x14091d890: test   al,al
0x14091d892: jne    0x14091d830
0x14091d894: jmp    0x14091d899
0x14091d896: add    DWORD PTR [rcx],r15d
0x14091d899: lea    r8,[rbp+0x3e0]
0x14091d8a0: lea    rdx,[rbp+0x8d]
0x14091d8a7: lea    rcx,[rbp+0xe8]
0x14091d8ae: call   0x14006ee20
0x14091d8b3: xor    edx,edx
0x14091d8b5: movzx  ecx,BYTE PTR [rax]
0x14091d8b8: call   0x140071e60
0x14091d8bd: test   al,al
0x14091d8bf: je     0x14091d919
0x14091d8c1: mov    ecx,0x3c
0x14091d8c6: call   0x141539690
0x14091d8cb: mov    QWORD PTR [rbp+0x930],rax
0x14091d8d2: mov    rcx,rax
0x14091d8d5: call   0x1400ff2e0
0x14091d8da: nop
0x14091d8db: mov    DWORD PTR [rax],r15d
0x14091d8de: movsx  ecx,WORD PTR [rdi+0x2]
0x14091d8e2: mov    DWORD PTR [rax+0x4],ecx
0x14091d8e5: mov    ecx,DWORD PTR [rdi+0x14]
0x14091d8e8: mov    DWORD PTR [rax+0x10],ecx
0x14091d8eb: mov    rdx,QWORD PTR [rsp+0x58]
0x14091d8f0: mov    ecx,DWORD PTR [rdx+0x4]
0x14091d8f3: mov    DWORD PTR [rax+0xc],ecx
0x14091d8f6: mov    DWORD PTR [rax+0x18],esi
0x14091d8f9: mov    DWORD PTR [rax+0x1c],r14d
0x14091d8fd: mov    rcx,QWORD PTR [rbp-0x58]
0x14091d901: mov    ecx,DWORD PTR [rcx]
0x14091d903: mov    DWORD PTR [rax+0x30],ecx
0x14091d906: mov    ecx,DWORD PTR [rsp+0x54]
0x14091d90a: mov    DWORD PTR [rax+0x34],ecx
0x14091d90d: mov    rdx,rax
0x14091d910: mov    rcx,QWORD PTR [rbp-0x80]
0x14091d914: call   0x140124760
0x14091d919: mov    eax,DWORD PTR [rdi+0x4]
0x14091d91c: cmp    eax,0x989681
0x14091d921: je     0x14091d929
0x14091d923: sub    eax,r15d
0x14091d926: mov    DWORD PTR [rdi+0x4],eax
0x14091d929: test   eax,eax
0x14091d92b: jne    0x14091d93c
0x14091d92d: mov    rdx,r12
0x14091d930: lea    rcx,[rbp+0x648]
0x14091d937: call   0x1400b99a0
0x14091d93c: mov    rax,QWORD PTR [rbp+0x178]
0x14091d943: mov    rsi,QWORD PTR [rbp-0x20]
0x14091d947: sub    DWORD PTR [rax+rsi*4],r15d
0x14091d94b: mov    r14,QWORD PTR [rbp-0x18]
0x14091d94f: sub    r13d,r15d
0x14091d952: mov    ebx,DWORD PTR [rbp-0x38]
0x14091d955: jmp    0x14091d95b
0x14091d957: mov    r14,QWORD PTR [rbp-0x18]
0x14091d95b: test   r13d,r13d
0x14091d95e: jg     0x14091d200
0x14091d964: mov    eax,0x7
0x14091d969: mov    DWORD PTR [rbp+0x36c],eax
0x14091d96f: lea    rdx,[rbp+0x36c]
0x14091d976: lea    rcx,[rbp+0x600]
0x14091d97d: call   0x140070490
0x14091d982: mov    DWORD PTR [rbp+0x370],0xc
0x14091d98c: lea    rdx,[rbp+0x370]
0x14091d993: lea    rcx,[rbp+0x700]
0x14091d99a: call   0x140070490
0x14091d99f: mov    r14d,DWORD PTR [rbp-0x5c]
0x14091d9a3: mov    DWORD PTR [rbp+0x3fc],r14d
0x14091d9aa: lea    rdx,[rbp+0x3fc]
0x14091d9b1: lea    rcx,[rbp+0x718]
0x14091d9b8: call   0x140070490
0x14091d9bd: mov    eax,0xffffffff
0x14091d9c2: mov    DWORD PTR [rbp+0x410],eax
0x14091d9c8: lea    rdx,[rbp+0x410]
0x14091d9cf: lea    rcx,[rbp+0x730]
0x14091d9d6: call   0x140070490
0x14091d9db: lea    rdx,[rbp+0x3f4]
0x14091d9e2: lea    rcx,[rbp+0x458]
0x14091d9e9: call   0x140070490
0x14091d9ee: add    r14d,0x2
0x14091d9f2: mov    DWORD PTR [rsp+0x54],r14d
0x14091d9f7: lea    rcx,[rbp+0x6a0]
0x14091d9fe: call   0x14006f750
0x14091da03: nop
0x14091da04: lea    rcx,[rbp+0x5e8]
0x14091da0b: call   0x14006f750
0x14091da10: jmp    0x14091da40
0x14091da12: movsxd rdx,r15d
0x14091da15: lea    rcx,[rbp+0x600]
0x14091da1c: call   0x14006f360
0x14091da21: mov    DWORD PTR [rax],0x1
0x14091da27: lea    rcx,[rbp+0x6a0]
0x14091da2e: call   0x140065b20
0x14091da33: nop
0x14091da34: lea    rcx,[rbp+0x5e8]
0x14091da3b: call   0x140065b20
0x14091da40: xor    r15d,r15d
0x14091da43: cmp    DWORD PTR [rsp+0x68],0x0
0x14091da48: jle    0x14091da64
0x14091da4a: mov    rax,QWORD PTR [rbp+0xa50]
0x14091da51: mov    QWORD PTR [rbp+0x38],rax
0x14091da55: mov    eax,DWORD PTR [rbp+0xa90]
0x14091da5b: mov    QWORD PTR [rbp-0x18],rax
0x14091da5f: jmp    0x14091a290
0x14091da64: mov    r12d,0xff
0x14091da6a: mov    r14,QWORD PTR [rbp-0x80]
0x14091da6e: test   r14,r14
0x14091da71: je     0x14091ded3
0x14091da77: mov    r15,QWORD PTR [rbp-0x58]
0x14091da7b: mov    rax,QWORD PTR [r15+0x130]
0x14091da82: mov    DWORD PTR [rax+0x4],0x1
0x14091da89: mov    edx,DWORD PTR [rbp-0x64]
0x14091da8c: cmp    edx,0xffffffff
0x14091da8f: je     0x14091da98
0x14091da91: mov    rax,QWORD PTR [r14+0x60]
0x14091da95: mov    DWORD PTR [rax+0x4c],edx
0x14091da98: mov    rax,QWORD PTR [r14+0x60]
0x14091da9c: mov    rsi,QWORD PTR [rsp+0x58]
0x14091daa1: cmp    DWORD PTR [rax+0x4c],0xffffffff
0x14091daa5: jne    0x14091dab2
0x14091daa7: mov    rdx,r14
0x14091daaa: mov    rcx,rsi
0x14091daad: call   0x1409e3b30
0x14091dab2: lea    rcx,[r15+0xc8]
0x14091dab9: lea    rdx,[rbp+0x600]
0x14091dac0: call   0x140071fd0
0x14091dac5: lea    rcx,[r15+0xe0]
0x14091dacc: lea    rdx,[rbp+0x700]
0x14091dad3: call   0x140071fd0
0x14091dad8: lea    rcx,[r15+0xf8]
0x14091dadf: lea    rdx,[rbp+0x718]
0x14091dae6: call   0x140071fd0
0x14091daeb: lea    rcx,[r15+0x110]
0x14091daf2: lea    rdx,[rbp+0x730]
0x14091daf9: call   0x140071fd0
0x14091dafe: mov    r13,QWORD PTR [rbp-0x50]
0x14091db02: mov    eax,DWORD PTR [r13+0x200]
0x14091db09: add    eax,DWORD PTR [r13+0x1f8]
0x14091db10: sar    eax,1
0x14091db12: lea    edi,[rax*2+0x1]
0x14091db19: add    edi,eax
0x14091db1b: mov    eax,DWORD PTR [r13+0x204]
0x14091db22: add    eax,DWORD PTR [r13+0x1fc]
0x14091db29: sar    eax,1
0x14091db2b: lea    ebx,[rax*2+0x1]
0x14091db32: add    ebx,eax
0x14091db34: xor    r9d,r9d
0x14091db37: movzx  r8d,bx
0x14091db3b: movzx  edx,di
0x14091db3e: mov    rcx,r14
0x14091db41: call   0x140116770
0x14091db46: mov    rax,QWORD PTR [r15+0x130]
0x14091db4d: mov    DWORD PTR [rax+0x5c],edi
0x14091db50: mov    rax,QWORD PTR [r15+0x130]
0x14091db57: mov    DWORD PTR [rax+0x60],ebx
0x14091db5a: mov    edx,DWORD PTR [r15+0x8]
0x14091db5e: mov    rcx,QWORD PTR [rip+0x1bcdff3]        # 0x1424ebb58
0x14091db65: call   0x14007db20
0x14091db6a: mov    rdi,rax
0x14091db6d: test   rax,rax
0x14091db70: je     0x14091dd85
0x14091db76: lea    rcx,[rax+0x90]
0x14091db7d: call   0x14006f370
0x14091db82: lea    rdx,[rbp+0x248]
0x14091db89: lea    rcx,[rdi+0xd8]
0x14091db90: call   0x14006f240
0x14091db95: lea    rdx,[rbp+0x860]
0x14091db9c: lea    rcx,[rdi+0xd8]
0x14091dba3: call   0x14006f230
0x14091dba8: mov    r14d,0x1
0x14091dbae: xchg   ax,ax
0x14091dbb0: mov    rax,QWORD PTR [rbp+0x248]
0x14091dbb7: cmp    rax,QWORD PTR [rbp+0x860]
0x14091dbbe: je     0x14091dbfa
0x14091dbc0: mov    edx,r14d
0x14091dbc3: cmovb  edx,r12d
0x14091dbc7: test   dl,dl
0x14091dbc9: jns    0x14091dbfa
0x14091dbcb: lea    rcx,[rbp+0x248]
0x14091dbd2: call   0x14006ee10
0x14091dbd7: mov    rcx,QWORD PTR [rax]
0x14091dbda: cmp    DWORD PTR [rcx+0xc],0xffffffff
0x14091dbde: jne    0x14091dbec
0x14091dbe0: lea    rcx,[rbp+0x248]
0x14091dbe7: call   0x14006ee10
0x14091dbec: lea    rcx,[rbp+0x248]
0x14091dbf3: call   0x14006ee00
0x14091dbf8: jmp    0x14091dbb0
0x14091dbfa: lea    rdx,[rbp+0x3e8]
0x14091dc01: lea    rcx,[rdi+0x428]
0x14091dc08: call   0x14006f240
0x14091dc0d: lea    rdx,[rbp+0x868]
0x14091dc14: lea    rcx,[rdi+0x428]
0x14091dc1b: call   0x14006f230
0x14091dc20: xor    esi,esi
0x14091dc22: mov    rax,QWORD PTR [rbp+0x3e8]
0x14091dc29: cmp    rax,QWORD PTR [rbp+0x868]
0x14091dc30: je     0x14091dcc7
0x14091dc36: mov    edx,r14d
0x14091dc39: cmovb  edx,r12d
0x14091dc3d: test   dl,dl
0x14091dc3f: jns    0x14091dcc7
0x14091dc45: lea    rcx,[rbp+0x3e8]
0x14091dc4c: call   0x14006ee10
0x14091dc51: mov    rdx,QWORD PTR [rax]
0x14091dc54: test   BYTE PTR [rdx+0x1c],0x8
0x14091dc58: je     0x14091dcb6
0x14091dc5a: lea    r8,[rdx+0x8]
0x14091dc5e: mov    edx,DWORD PTR [rdx+0x4]
0x14091dc61: lea    rcx,[rip+0x1ab3b90]        # 0x1423d17f8
0x14091dc68: call   0x1400bbef0
0x14091dc6d: test   rax,rax
0x14091dc70: je     0x14091dcb6
0x14091dc72: mov    edx,r14d
0x14091dc75: mov    rcx,rax
0x14091dc78: call   0x1409b4e00
0x14091dc7d: test   rax,rax
0x14091dc80: je     0x14091dcb6
0x14091dc82: lea    rdx,[rax+0x88]
0x14091dc89: mov    rcx,QWORD PTR [r15+0x130]
0x14091dc90: add    rcx,0x28
0x14091dc94: call   0x14006f410
0x14091dc99: mov    rcx,QWORD PTR [r15+0x130]
0x14091dca0: add    rcx,0x40
0x14091dca4: mov    DWORD PTR [rbp+0x3f0],esi
0x14091dcaa: lea    rdx,[rbp+0x3f0]
0x14091dcb1: call   0x14006f410
0x14091dcb6: lea    rcx,[rbp+0x3e8]
0x14091dcbd: call   0x14006ee00
0x14091dcc2: jmp    0x14091dc22
0x14091dcc7: cmp    DWORD PTR [rsp+0x6c],0x4
0x14091dccc: mov    rsi,QWORD PTR [rsp+0x58]
0x14091dcd1: jne    0x14091dce2
0x14091dcd3: mov    rax,QWORD PTR [r15+0x130]
0x14091dcda: mov    DWORD PTR [rax],0x4
0x14091dce0: jmp    0x14091dd4b
0x14091dce2: cmp    BYTE PTR [rbp-0x60],0x0
0x14091dce6: jne    0x14091dd40
0x14091dce8: cmp    BYTE PTR [rsp+0x60],0x0
0x14091dced: jne    0x14091dd40
0x14091dcef: mov    ebx,0x2
0x14091dcf4: mov    ecx,ebx
0x14091dcf6: call   0x140071f30
0x14091dcfb: test   eax,eax
0x14091dcfd: je     0x14091dd0b
0x14091dcff: mov    rax,QWORD PTR [r15+0x130]
0x14091dd06: mov    DWORD PTR [rax],r14d
0x14091dd09: jmp    0x14091dd22
0x14091dd0b: mov    ecx,0xa
0x14091dd10: call   0x140071f30
0x14091dd15: mov    rcx,QWORD PTR [r15+0x130]
0x14091dd1c: test   eax,eax
0x14091dd1e: je     0x14091dd3a
0x14091dd20: mov    DWORD PTR [rcx],ebx
0x14091dd22: mov    rax,QWORD PTR [r15+0x130]
0x14091dd29: or     DWORD PTR [rax+0x58],0x8
0x14091dd2d: mov    rax,QWORD PTR [r15+0x130]
0x14091dd34: or     DWORD PTR [rax+0x58],0x10
0x14091dd38: jmp    0x14091dd85
0x14091dd3a: xor    eax,eax
0x14091dd3c: mov    DWORD PTR [rcx],eax
0x14091dd3e: jmp    0x14091dd4b
0x14091dd40: mov    rax,QWORD PTR [r15+0x130]
0x14091dd47: xor    ecx,ecx
0x14091dd49: mov    DWORD PTR [rax],ecx
0x14091dd4b: mov    rax,QWORD PTR [r15+0x130]
0x14091dd52: or     DWORD PTR [rax+0x58],0x8
0x14091dd56: mov    rax,QWORD PTR [r15+0x130]
0x14091dd5d: or     DWORD PTR [rax+0x58],0x10
0x14091dd61: mov    rax,QWORD PTR [r15+0x130]
0x14091dd68: or     DWORD PTR [rax+0x58],0x20
0x14091dd6c: mov    rax,QWORD PTR [r15+0x130]
0x14091dd73: or     DWORD PTR [rax+0x58],0x40
0x14091dd77: mov    rax,QWORD PTR [r15+0x130]
0x14091dd7e: or     DWORD PTR [rax+0x58],0x80
0x14091dd85: lea    rcx,[rbp+0x8b0]
0x14091dd8c: call   0x140065b00
0x14091dd91: nop
0x14091dd92: xor    edx,edx
0x14091dd94: lea    rcx,[rbp+0x888]
0x14091dd9b: call   0x140072c10
0x14091dda0: mov    eax,DWORD PTR [rsi+0x4]
0x14091dda3: mov    DWORD PTR [rbp+0x888],eax
0x14091dda9: mov    eax,DWORD PTR [r15+0x8]
0x14091ddad: mov    DWORD PTR [rbp+0x88c],eax
0x14091ddb3: mov    eax,DWORD PTR [r15+0x48]
0x14091ddb7: mov    DWORD PTR [rbp+0x890],eax
0x14091ddbd: mov    eax,DWORD PTR [r15+0x4c]
0x14091ddc1: mov    DWORD PTR [rbp+0x894],eax
0x14091ddc7: mov    eax,DWORD PTR [rip+0x1a56927]        # 0x1423746f4
0x14091ddcd: mov    DWORD PTR [rbp+0x8a0],eax
0x14091ddd3: mov    eax,DWORD PTR [rip+0x1a6a1eb]        # 0x142387fc4
0x14091ddd9: mov    DWORD PTR [rbp+0x8a4],eax
0x14091dddf: lea    rdx,[rbp+0xf0]
0x14091dde6: lea    rcx,[r13+0x428]
0x14091dded: call   0x14006f240
0x14091ddf2: lea    rdx,[rbp+0x760]
0x14091ddf9: lea    rcx,[r13+0x428]
0x14091de00: call   0x14006f230
0x14091de05: mov    rax,QWORD PTR [rbp+0xf0]
0x14091de0c: nop    DWORD PTR [rax+0x0]
0x14091de10: cmp    rax,QWORD PTR [rbp+0x760]
0x14091de17: je     0x14091dec6
0x14091de1d: mov    edx,0x1
0x14091de22: cmovb  edx,r12d
0x14091de26: test   dl,dl
0x14091de28: jns    0x14091dec6
0x14091de2e: mov    rcx,QWORD PTR [rax]
0x14091de31: test   BYTE PTR [rcx+0x1c],0x1
0x14091de35: je     0x14091deb6
0x14091de3b: lea    rcx,[rbp+0xf0]
0x14091de42: call   0x14006ee10
0x14091de47: mov    rcx,QWORD PTR [rax]
0x14091de4a: mov    edx,DWORD PTR [rcx+0x4]
0x14091de4d: lea    rcx,[rip+0x1ab39a4]        # 0x1423d17f8
0x14091de54: call   0x14007daf0
0x14091de59: test   rax,rax
0x14091de5c: je     0x14091deaf
0x14091de5e: cmp    WORD PTR [rax],0x1
0x14091de62: jne    0x14091deaf
0x14091de64: mov    rcx,rax
0x14091de67: call   0x14093ce30
0x14091de6c: mov    rbx,rax
0x14091de6f: lea    rdx,[rbp+0x8b0]
0x14091de76: mov    ecx,DWORD PTR [rax+0x4]
0x14091de79: call   0x1400b9f70
0x14091de7e: cmp    eax,0xffffffff
0x14091de81: jne    0x14091deaf
0x14091de83: mov    r9d,DWORD PTR [rip+0x1a6a13a]        # 0x142387fc4
0x14091de8a: mov    r8d,DWORD PTR [rip+0x1a56863]        # 0x1423746f4
0x14091de91: lea    rdx,[rbp+0x888]
0x14091de98: mov    rcx,rbx
0x14091de9b: call   0x1409b85f0
0x14091dea0: lea    rdx,[rbp+0x8b0]
0x14091dea7: mov    ecx,DWORD PTR [rbx+0x4]
0x14091deaa: call   0x1400b9e70
0x14091deaf: mov    rax,QWORD PTR [rbp+0xf0]
0x14091deb6: add    rax,0x8
0x14091deba: mov    QWORD PTR [rbp+0xf0],rax
0x14091dec1: jmp    0x14091de10
0x14091dec6: lea    rcx,[rbp+0x8b0]
0x14091decd: call   0x14006f750
0x14091ded2: nop
0x14091ded3: lea    rcx,[rbp+0x730]
0x14091deda: call   0x14006f750
0x14091dedf: nop
0x14091dee0: lea    rcx,[rbp+0x718]
0x14091dee7: call   0x14006f750
0x14091deec: nop
0x14091deed: lea    rcx,[rbp+0x700]
0x14091def4: call   0x14006f750
0x14091def9: nop
0x14091defa: lea    rcx,[rbp+0x600]
0x14091df01: call   0x14006f750
0x14091df06: nop
0x14091df07: lea    rcx,[rbp+0x458]
0x14091df0e: call   0x14006f750
0x14091df13: nop
0x14091df14: lea    rcx,[rbp+0x6b8]
0x14091df1b: call   0x140066b70
0x14091df20: nop
0x14091df21: lea    rcx,[rbp+0x6d0]
0x14091df28: call   0x140066b70
0x14091df2d: nop
0x14091df2e: lea    rcx,[rbp+0x840]
0x14091df35: call   0x140066b70
0x14091df3a: nop
0x14091df3b: lea    rcx,[rbp+0x828]
0x14091df42: call   0x140066b70
0x14091df47: nop
0x14091df48: lea    rcx,[rbp+0x278]
0x14091df4f: call   0x14006f750
0x14091df54: nop
0x14091df55: lea    rcx,[rbp+0x618]
0x14091df5c: call   0x14006f750
0x14091df61: nop
0x14091df62: lea    rcx,[rbp+0x810]
0x14091df69: call   0x140066b70
0x14091df6e: nop
0x14091df6f: lea    rcx,[rbp+0x7f8]
0x14091df76: call   0x140066b70
0x14091df7b: nop
0x14091df7c: lea    rcx,[rbp+0x2f0]
0x14091df83: call   0x14006f750
0x14091df88: nop
0x14091df89: lea    rcx,[rbp+0x160]
0x14091df90: call   0x14006f750
0x14091df95: nop
0x14091df96: lea    rcx,[rbp+0x7e0]
0x14091df9d: call   0x140066b70
0x14091dfa2: nop
0x14091dfa3: lea    rcx,[rbp+0x7c8]
0x14091dfaa: call   0x140066b70
0x14091dfaf: nop
0x14091dfb0: lea    rcx,[rbp+0x178]
0x14091dfb7: call   0x14006f750
0x14091dfbc: nop
0x14091dfbd: lea    rcx,[rbp+0x290]
0x14091dfc4: call   0x14006f750
0x14091dfc9: nop
0x14091dfca: lea    rcx,[rbp+0x630]
0x14091dfd1: call   0x140066b70
0x14091dfd6: nop
0x14091dfd7: lea    rcx,[rbp+0x648]
0x14091dfde: call   0x140066b70
0x14091dfe3: nop
0x14091dfe4: lea    rcx,[rbp+0x2a8]
0x14091dfeb: call   0x14006f750
0x14091dff0: nop
0x14091dff1: lea    rcx,[rbp+0x440]
0x14091dff8: call   0x14006f750
0x14091dffd: nop
0x14091dffe: lea    rcx,[rbp+0x7b0]
0x14091e005: call   0x140066b70
0x14091e00a: nop
0x14091e00b: lea    rcx,[rbp+0x798]
0x14091e012: call   0x140066b70
0x14091e017: nop
0x14091e018: lea    rcx,[rbp+0x2c0]
0x14091e01f: call   0x14006f750
0x14091e024: nop
0x14091e025: lea    rcx,[rbp+0x428]
0x14091e02c: call   0x14006f750
0x14091e031: nop
0x14091e032: lea    rcx,[rbp+0x780]
0x14091e039: call   0x140066b70
0x14091e03e: nop
0x14091e03f: lea    rcx,[rbp+0x768]
0x14091e046: call   0x140066b70
0x14091e04b: nop
0x14091e04c: lea    rcx,[rbp+0x308]
0x14091e053: call   0x140066b70
0x14091e058: nop
0x14091e059: lea    rcx,[rbp+0x260]
0x14091e060: call   0x140066b70
0x14091e065: nop
0x14091e066: lea    rcx,[rbp+0x2d8]
0x14091e06d: call   0x140066b70
0x14091e072: nop
0x14091e073: lea    rcx,[rbp+0x940]
0x14091e07a: call   0x14012f530
0x14091e07f: nop
0x14091e080: lea    rcx,[rbp+0x320]
0x14091e087: call   0x140066b70
0x14091e08c: nop
0x14091e08d: lea    rcx,[rbp+0x870]
0x14091e094: call   0x14006f7b0
0x14091e099: nop
0x14091e09a: lea    rcx,[rbp+0x660]
0x14091e0a1: call   0x14006f7b0
0x14091e0a6: mov    rcx,QWORD PTR [rbp+0xea0]
0x14091e0ad: xor    rcx,rsp
0x14091e0b0: call   0x141539660
0x14091e0b5: lea    r11,[rsp+0xfb0]
0x14091e0bd: mov    rbx,QWORD PTR [r11+0x38]
0x14091e0c1: mov    rsi,QWORD PTR [r11+0x40]
0x14091e0c5: mov    rdi,QWORD PTR [r11+0x48]
0x14091e0c9: mov    rsp,r11
0x14091e0cc: pop    r15
0x14091e0ce: pop    r14
0x14091e0d0: pop    r13
0x14091e0d2: pop    r12
0x14091e0d4: pop    rbp
0x14091e0d5: ret
0x14091e0d6: xchg   ax,ax
0x14091e0d8: rex.X push 0xffffffffffffff91
0x14091e0db: add    BYTE PTR [rcx],dl
0x14091e0dd: push   0xffffffffffffff91
0x14091e0df: add    BYTE PTR [rax],al
0x14091e0e1: add    BYTE PTR [rcx],al
0x14091e0e3: add    BYTE PTR [rax],al
0x14091e0e5: add    BYTE PTR [rax],al
0x14091e0e7: add    DWORD PTR [rcx],eax
0x14091e0e9: add    DWORD PTR [rcx],eax
0x14091e0eb: add    DWORD PTR [rax],eax
0x14091e0ed: add    BYTE PTR [rax],al
0x14091e0ef: add    BYTE PTR [rcx],al
0x14091e0f1: add    DWORD PTR [rcx],eax
0x14091e0f3: add    DWORD PTR [rcx],eax
0x14091e0f5: add    DWORD PTR [rcx],eax
0x14091e0f7: add    DWORD PTR [rcx],eax
0x14091e0f9: add    DWORD PTR [rcx],eax
0x14091e0fb: add    DWORD PTR [rcx],eax
0x14091e0fd: add    DWORD PTR [rcx],eax
0x14091e0ff: add    DWORD PTR [rcx],eax
0x14091e101: add    DWORD PTR [rcx],eax
0x14091e103: add    DWORD PTR [rcx],eax
0x14091e105: add    DWORD PTR [rcx],eax
0x14091e107: add    DWORD PTR [rcx],eax
0x14091e109: add    DWORD PTR [rcx],eax
0x14091e10b: add    DWORD PTR [rcx],eax
0x14091e10d: add    DWORD PTR [rcx],eax
0x14091e10f: add    DWORD PTR [rcx],eax
0x14091e111: add    DWORD PTR [rcx],eax
0x14091e113: add    DWORD PTR [rcx],eax
0x14091e115: add    DWORD PTR [rcx],eax
0x14091e117: add    DWORD PTR [rcx],eax
0x14091e119: add    DWORD PTR [rcx],eax
0x14091e11b: add    DWORD PTR [rcx],eax
0x14091e11d: add    DWORD PTR [rax],eax
0x14091e11f: add    BYTE PTR [rax],al
0x14091e121: add    BYTE PTR [rsi-0x70],ah
0x14091e124: (bad)
0x14091e125: (bad)
0x14091e126: xchg   ecx,eax
0x14091e127: add    BYTE PTR [rip+0x918f],dl        # 0x1409272bc
0x14091e12d: add    BYTE PTR [rcx],al
0x14091e12f: add    BYTE PTR [rax],al
0x14091e131: add    BYTE PTR [rax],al
0x14091e133: add    DWORD PTR [rcx],eax
0x14091e135: add    DWORD PTR [rcx],eax
0x14091e137: add    DWORD PTR [rax],eax
0x14091e139: add    BYTE PTR [rax],al
0x14091e13b: add    BYTE PTR [rcx],al
0x14091e13d: add    DWORD PTR [rcx],eax
0x14091e13f: add    DWORD PTR [rcx],eax
0x14091e141: add    DWORD PTR [rcx],eax
0x14091e143: add    DWORD PTR [rcx],eax
0x14091e145: add    DWORD PTR [rcx],eax
0x14091e147: add    DWORD PTR [rcx],eax
0x14091e149: add    DWORD PTR [rcx],eax
0x14091e14b: add    DWORD PTR [rcx],eax
0x14091e14d: add    DWORD PTR [rcx],eax
0x14091e14f: add    DWORD PTR [rcx],eax
0x14091e151: add    DWORD PTR [rcx],eax
0x14091e153: add    DWORD PTR [rcx],eax
0x14091e155: add    DWORD PTR [rcx],eax
0x14091e157: add    DWORD PTR [rcx],eax
0x14091e159: add    DWORD PTR [rcx],eax
0x14091e15b: add    DWORD PTR [rcx],eax
0x14091e15d: add    DWORD PTR [rcx],eax
0x14091e15f: add    DWORD PTR [rcx],eax
0x14091e161: add    DWORD PTR [rcx],eax
0x14091e163: add    DWORD PTR [rcx],eax
0x14091e165: add    DWORD PTR [rcx],eax
0x14091e167: add    DWORD PTR [rcx],eax
0x14091e169: add    DWORD PTR [rax],eax
0x14091e16b: add    BYTE PTR [rax],al
0x14091e16d: add    BYTE PTR [rsi-0x70],ah
0x14091e170: push   rbp
0x14091e171: stos   DWORD PTR [rdi],eax
0x14091e172: xchg   ecx,eax
0x14091e173: add    BYTE PTR [rbp-0x55],dl
0x14091e176: xchg   ecx,eax
0x14091e177: add    BYTE PTR [rbp-0x55],dl
0x14091e17a: xchg   ecx,eax
0x14091e17b: add    BYTE PTR [rbp-0x55],dl
0x14091e17e: xchg   ecx,eax
0x14091e17f: add    BYTE PTR [rbp-0x55],dl
0x14091e182: xchg   ecx,eax
0x14091e183: add    BYTE PTR [rsi+0x550091b4],cl
0x14091e189: stos   DWORD PTR [rdi],eax
0x14091e18a: xchg   ecx,eax
0x14091e18b: add    BYTE PTR [rsi-0x2eff6e4c],cl
0x14091e191: mov    edx,0xbad10091
0x14091e196: xchg   ecx,eax
0x14091e197: add    cl,dl
0x14091e199: mov    edx,0xb4b90091
0x14091e19e: xchg   ecx,eax
0x14091e19f: add    BYTE PTR [rbp-0x55],dl
0x14091e1a2: xchg   ecx,eax
0x14091e1a3: add    BYTE PTR [rdx-0x56ff6e55],ah
0x14091e1a9: stos   DWORD PTR [rdi],eax
0x14091e1aa: xchg   ecx,eax
0x14091e1ab: add    bh,dl
0x14091e1ad: stos   DWORD PTR [rdi],eax
0x14091e1ae: xchg   ecx,eax
0x14091e1af: add    bh,dl
0x14091e1b1: stos   DWORD PTR [rdi],eax
0x14091e1b2: xchg   ecx,eax
0x14091e1b3: add    al,al
0x14091e1b5: stos   DWORD PTR [rdi],eax
0x14091e1b6: xchg   ecx,eax
0x14091e1b7: add    dh,bl
0x14091e1b9: stos   DWORD PTR [rdi],eax
0x14091e1ba: xchg   ecx,eax
0x14091e1bb: add    BYTE PTR [rdx-0x21ff6e55],cl
0x14091e1c1: stos   DWORD PTR [rdi],eax
0x14091e1c2: xchg   ecx,eax
0x14091e1c3: add    dh,bl
0x14091e1c5: stos   DWORD PTR [rdi],eax
0x14091e1c6: xchg   ecx,eax
0x14091e1c7: add    dh,bl
0x14091e1c9: stos   DWORD PTR [rdi],eax
0x14091e1ca: xchg   ecx,eax
0x14091e1cb: add    dh,bl
0x14091e1cd: stos   DWORD PTR [rdi],eax
0x14091e1ce: xchg   ecx,eax
0x14091e1cf: add    dh,bl
0x14091e1d1: stos   DWORD PTR [rdi],eax
0x14091e1d2: xchg   ecx,eax
0x14091e1d3: add    bh,dl
0x14091e1d5: stos   DWORD PTR [rdi],eax
0x14091e1d6: xchg   ecx,eax
0x14091e1d7: add    BYTE PTR [rbx+0x160091c1],ah
0x14091e1dd: ret    0x91
0x14091e1e0: xchg   ecx,eax
0x14091e1e1: ret    0x91
0x14091e1e4: and    eax,ebx
0x14091e1e6: xchg   ecx,eax
0x14091e1e7: add    BYTE PTR [rdx],ah
0x14091e1e9: (bad)
0x14091e1ec: (bad)
0x14091e1f0: xchg   esp,eax
0x14091e1f1: rcl    DWORD PTR [rcx-0x6e3ad200],0x0
0x14091e1f8: mov    es,esp
0x14091e1fa: xchg   ecx,eax
0x14091e1fb: add    BYTE PTR [rbx],ah
0x14091e1fd: (bad)
0x14091e1fe: xchg   ecx,eax
0x14091e1ff: add    al,dl
0x14091e201: ret
0x14091e202: xchg   ecx,eax
0x14091e203: add    cl,al
0x14091e205: ret
0x14091e206: xchg   ecx,eax
0x14091e207: add    cl,al
0x14091e209: ret
0x14091e20a: xchg   ecx,eax
