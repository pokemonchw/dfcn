; classic; PE:6a70b91c:0270a000; look vector 0x2695b10; owner 0x4061b0..0x407dd4
0x004061b0: mov    WORD PTR [rsp+0x20],r9w
0x004061b6: mov    WORD PTR [rsp+0x18],r8w
0x004061bc: mov    WORD PTR [rsp+0x10],dx
0x004061c1: mov    QWORD PTR [rsp+0x8],rcx
0x004061c6: push   rbp
0x004061c7: push   rbx
0x004061c8: push   r12
0x004061ca: push   r13
0x004061cc: push   r14
0x004061ce: push   r15
0x004061d0: lea    rbp,[rsp-0x2f]
0x004061d5: sub    rsp,0x88
0x004061dc: lea    r14,[rcx+0x134b90]
0x004061e3: movsx  r13d,r8w
0x004061e7: mov    r15,rcx
0x004061ea: movzx  r12d,dx
0x004061ee: mov    rcx,r14
0x004061f1: call   0x140e80370
0x004061f6: xor    ebx,ebx
0x004061f8: mov    DWORD PTR [rip+0x1f68432],ebx        # 0x14236e630
0x004061fe: call   0x1408bc8e0
0x00406203: movzx  r9d,WORD PTR [rbp+0x7f]
0x00406208: movzx  r8d,r13w
0x0040620c: movzx  edx,r12w
0x00406210: mov    rcx,r15
0x00406213: call   0x140067f10
0x00406218: test   ax,ax
0x0040621b: je     0x140407d89
0x00406221: cmp    DWORD PTR [rip+0x1490040],0x1        # 0x141896268
0x00406228: mov    QWORD PTR [rsp+0x80],rsi
0x00406230: mov    QWORD PTR [rsp+0x78],rdi
0x00406235: jne    0x1404067e9
0x0040623b: mov    QWORD PTR [rsp+0x38],r14
0x00406240: movzx  r8d,r13w
0x00406244: mov    BYTE PTR [rsp+0x30],0x1
0x00406249: movzx  edx,r12w
0x0040624d: mov    BYTE PTR [rsp+0x28],0x1
0x00406252: mov    BYTE PTR [rsp+0x20],0x1
0x00406257: call   0x140e7fb30
0x0040625c: test   al,al
0x0040625e: jne    0x1404067e9
0x00406264: movzx  r8d,r13w
0x00406268: lea    rcx,[rip+0x1fc5171]        # 0x1423cb3e0
0x0040626f: movzx  edx,r12w
0x00406273: call   0x14007dbd0
0x00406278: shr    eax,0x3
0x0040627b: not    al
0x0040627d: test   al,0x1
0x0040627f: je     0x140407d7c
0x00406285: cmp    QWORD PTR [rip+0x1fd8d74],rbx        # 0x1423df000
0x0040628c: je     0x140407d7c
0x00406292: mov    edi,DWORD PTR [rip+0x223de78]        # 0x142644110
0x00406298: lea    r15,[rip+0x223d381]        # 0x142643620
0x0040629f: inc    edi
0x004062a1: mov    eax,0x51eb851f
0x004062a6: imul   edi
0x004062a8: mov    esi,0x64
0x004062ad: sar    edx,0x5
0x004062b0: mov    eax,edx
0x004062b2: shr    eax,0x1f
0x004062b5: add    edx,eax
0x004062b7: imul   eax,edx,0x64
0x004062ba: sub    edi,eax
0x004062bc: nop    DWORD PTR [rax+0x0]
0x004062c0: movsxd rax,edi
0x004062c3: imul   rbx,rax,0x1c
0x004062c7: add    rbx,r15
0x004062ca: cmp    DWORD PTR [rbx],0xffffffff
0x004062cd: je     0x14040633b
0x004062cf: test   BYTE PTR [rbx+0x18],0x2
0x004062d3: je     0x14040633b
0x004062d5: cmp    DWORD PTR [rbx+0x14],0x0
0x004062d9: jle    0x14040633b
0x004062db: cmp    WORD PTR [rbx+0xa],r12w
0x004062e0: jne    0x14040633b
0x004062e2: cmp    WORD PTR [rbx+0xc],r13w
0x004062e7: jne    0x14040633b
0x004062e9: cmp    WORD PTR [rbx+0xe],r9w
0x004062ee: jne    0x14040633b
0x004062f0: mov    ecx,0x50
0x004062f5: call   0x141534600
0x004062fa: mov    rcx,rax
0x004062fd: call   0x140407de0
0x00406302: mov    rcx,rax
0x00406305: mov    QWORD PTR [rbp+0x67],rax
0x00406309: mov    edx,0xd
0x0040630e: call   0x1403d4420
0x00406313: mov    r9d,DWORD PTR [rbx]
0x00406316: mov    DWORD PTR [rcx+0x4],r9d
0x0040631a: mov    eax,DWORD PTR [rbx+0x14]
0x0040631d: mov    DWORD PTR [rcx+0xc],eax
0x00406320: movzx  eax,WORD PTR [rbx+0x10]
0x00406324: mov    WORD PTR [rcx+0x8],ax
0x00406328: call   0x140404420
0x0040632d: lea    rdx,[rbp+0x67]
0x00406331: call   0x14041e9d0
0x00406336: movzx  r9d,WORD PTR [rbp+0x7f]
0x0040633b: inc    edi
0x0040633d: mov    eax,0x51eb851f
0x00406342: imul   edi
0x00406344: sar    edx,0x5
0x00406347: mov    eax,edx
0x00406349: shr    eax,0x1f
0x0040634c: add    edx,eax
0x0040634e: imul   eax,edx,0x64
0x00406351: sub    edi,eax
0x00406353: sub    rsi,0x1
0x00406357: jne    0x1404062c0
0x0040635d: mov    QWORD PTR [rsp+0x38],r14
0x00406362: movzx  r8d,r13w
0x00406366: mov    BYTE PTR [rsp+0x30],sil
0x0040636b: movzx  edx,r12w
0x0040636f: mov    BYTE PTR [rsp+0x28],0x1
0x00406374: mov    BYTE PTR [rsp+0x20],sil
0x00406379: call   0x140e7fb30
0x0040637e: test   al,al
0x00406380: je     0x140407d7c
0x00406386: mov    rax,QWORD PTR [rip+0x1fd8c33]        # 0x1423defc0
0x0040638d: xor    r15d,r15d
0x00406390: sub    rax,QWORD PTR [rip+0x1fd8c21]        # 0x1423defb8
0x00406397: mov    r14d,r15d
0x0040639a: sar    rax,0x3
0x0040639e: mov    esi,0x2
0x004063a3: movsxd rdi,eax
0x004063a6: mov    QWORD PTR [rbp+0x7],rdi
0x004063aa: mov    QWORD PTR [rbp-0x1],r15
0x004063ae: test   eax,eax
0x004063b0: jle    0x140406595
0x004063b6: data16 nop WORD PTR [rax+rax*1+0x0]
0x004063c0: mov    rax,QWORD PTR [rip+0x1fd8bf1]        # 0x1423defb8
0x004063c7: mov    rbx,QWORD PTR [rax+r14*8]
0x004063cb: test   DWORD PTR [rbx+0x110],0x2000002
0x004063d5: jne    0x140406578
0x004063db: mov    rcx,QWORD PTR [rip+0x1fd8c1e]        # 0x1423df000
0x004063e2: lea    rax,[rbp-0x19]
0x004063e6: mov    QWORD PTR [rsp+0x28],rax
0x004063eb: lea    r9,[rbp-0x11]
0x004063ef: lea    rax,[rbp-0x15]
0x004063f3: mov    rdx,rbx
0x004063f6: lea    r8,[rbp+0x67]
0x004063fa: mov    QWORD PTR [rsp+0x20],rax
0x004063ff: call   0x1413e55d0
0x00406404: test   al,al
0x00406406: je     0x140406573
0x0040640c: mov    eax,DWORD PTR [rbx+0x118]
0x00406412: shr    eax,0xa
0x00406415: test   al,0x1
0x00406417: jne    0x140406573
0x0040641d: test   DWORD PTR [rbx+0x110],0x200
0x00406427: je     0x140406431
0x00406429: mov    rcx,rbx
0x0040642c: call   0x14134a250
0x00406431: test   DWORD PTR [rbx+0x114],0x4000
0x0040643b: movzx  r15d,WORD PTR [rbp-0x19]
0x00406440: movzx  r12d,WORD PTR [rbp-0x15]
0x00406445: movzx  r13d,WORD PTR [rbp-0x11]
0x0040644a: je     0x140406503
0x00406450: movzx  r14d,BYTE PTR [rbp+0x67]
0x00406455: lea    rdi,[rbx+0x808]
0x0040645c: nop    DWORD PTR [rax+0x0]
0x00406460: movsx  eax,WORD PTR [rbx+0xa8]
0x00406467: movsx  r8d,WORD PTR [rdi-0x2]
0x0040646c: movsx  edx,WORD PTR [rdi]
0x0040646f: mov    ecx,r8d
0x00406472: sub    ecx,eax
0x00406474: mov    eax,ecx
0x00406476: neg    eax
0x00406478: cmovs  eax,ecx
0x0040647b: cmp    eax,0x1
0x0040647e: jg     0x1404064e8
0x00406480: movsx  eax,WORD PTR [rbx+0xaa]
0x00406487: mov    ecx,edx
0x00406489: sub    ecx,eax
0x0040648b: mov    eax,ecx
0x0040648d: neg    eax
0x0040648f: cmovs  eax,ecx
0x00406492: cmp    eax,0x1
0x00406495: jg     0x1404064e8
0x00406497: cmp    r8w,WORD PTR [rbp+0x6f]
0x0040649c: jne    0x1404064e8
0x0040649e: cmp    dx,WORD PTR [rbp+0x77]
0x004064a2: jne    0x1404064e8
0x004064a4: mov    ecx,0x50
0x004064a9: call   0x141534600
0x004064ae: mov    rcx,rax
0x004064b1: call   0x140407de0
0x004064b6: mov    rcx,rax
0x004064b9: mov    QWORD PTR [rbp-0x9],rax
0x004064bd: mov    edx,0xf
0x004064c2: call   0x1403d4420
0x004064c7: mov    BYTE PTR [rcx+0x4],r14b
0x004064cb: mov    WORD PTR [rcx+0x6],r13w
0x004064d0: mov    WORD PTR [rcx+0x8],r12w
0x004064d5: mov    WORD PTR [rcx+0xa],r15w
0x004064da: call   0x140404420
0x004064df: lea    rdx,[rbp-0x9]
0x004064e3: call   0x14041e9d0
0x004064e8: add    rdi,0x6
0x004064ec: sub    rsi,0x1
0x004064f0: jne    0x140406460
0x004064f6: mov    r14,QWORD PTR [rbp-0x1]
0x004064fa: mov    esi,0x2
0x004064ff: mov    rdi,QWORD PTR [rbp+0x7]
0x00406503: movzx  eax,WORD PTR [rbp+0x6f]
0x00406507: movzx  r9d,WORD PTR [rbp+0x7f]
0x0040650c: cmp    WORD PTR [rbx+0xa8],ax
0x00406513: jne    0x140406578
0x00406515: movzx  eax,WORD PTR [rbp+0x77]
0x00406519: cmp    WORD PTR [rbx+0xaa],ax
0x00406520: jne    0x140406578
0x00406522: cmp    WORD PTR [rbx+0xac],r9w
0x0040652a: jne    0x140406578
0x0040652c: mov    ecx,0x50
0x00406531: call   0x141534600
0x00406536: mov    rcx,rax
0x00406539: call   0x140407de0
0x0040653e: mov    rcx,rax
0x00406541: mov    QWORD PTR [rbp-0x1],rax
0x00406545: mov    edx,0xf
0x0040654a: call   0x1403d4420
0x0040654f: movzx  eax,BYTE PTR [rbp+0x67]
0x00406553: mov    BYTE PTR [rcx+0x4],al
0x00406556: mov    WORD PTR [rcx+0x6],r13w
0x0040655b: mov    WORD PTR [rcx+0x8],r12w
0x00406560: mov    WORD PTR [rcx+0xa],r15w
0x00406565: call   0x140404420
0x0040656a: lea    rdx,[rbp-0x1]
0x0040656e: call   0x14041e9d0
0x00406573: movzx  r9d,WORD PTR [rbp+0x7f]
0x00406578: inc    r14
0x0040657b: mov    QWORD PTR [rbp-0x1],r14
0x0040657f: cmp    r14,rdi
0x00406582: jl     0x1404063c0
0x00406588: movzx  r13d,WORD PTR [rbp+0x77]
0x0040658d: xor    r15d,r15d
0x00406590: movzx  r12d,WORD PTR [rbp+0x6f]
0x00406595: movzx  r8d,r13w
0x00406599: lea    rcx,[rip+0x1fc4e40]        # 0x1423cb3e0
0x004065a0: movzx  edx,r12w
0x004065a4: call   0x14007dbd0
0x004065a9: mov    edi,eax
0x004065ab: mov    esi,0xffff8ad0
0x004065b0: test   al,al
0x004065b2: jns    0x14040661c
0x004065b4: mov    ecx,0x50
0x004065b9: call   0x141534600
0x004065be: xorps  xmm0,xmm0
0x004065c1: mov    QWORD PTR [rbp+0x67],rax
0x004065c5: mov    rcx,rax
0x004065c8: mov    rbx,rax
0x004065cb: movups XMMWORD PTR [rax+0x28],xmm0
0x004065cf: mov    QWORD PTR [rax+0x38],r15
0x004065d3: mov    QWORD PTR [rax+0x40],0xf
0x004065db: mov    BYTE PTR [rax+0x28],0x0
0x004065df: mov    QWORD PTR [rax],0xe
0x004065e6: mov    DWORD PTR [rax+0x1c],0x8ad08ad0
0x004065ed: mov    WORD PTR [rax+0x20],si
0x004065f1: call   0x140404420
0x004065f6: mov    rdx,QWORD PTR [rip+0x228f51b]        # 0x142695b18
0x004065fd: cmp    rdx,QWORD PTR [rip+0x228f51c]        # 0x142695b20
0x00406604: je     0x140406613
0x00406606: mov    QWORD PTR [rdx],rbx
0x00406609: add    QWORD PTR [rip+0x228f507],0x8        # 0x142695b18
0x00406611: jmp    0x14040661c
0x00406613: lea    r8,[rbp+0x67]
0x00406617: call   0x14041ea00
0x0040661c: test   dil,0x40
0x00406620: je     0x140406690
0x00406622: mov    ecx,0x50
0x00406627: call   0x141534600
0x0040662c: xorps  xmm0,xmm0
0x0040662f: mov    QWORD PTR [rbp+0x67],rax
0x00406633: mov    rcx,rax
0x00406636: mov    rbx,rax
0x00406639: movups XMMWORD PTR [rax+0x28],xmm0
0x0040663d: mov    QWORD PTR [rax+0x38],r15
0x00406641: mov    QWORD PTR [rax+0x40],0xf
0x00406649: mov    BYTE PTR [rax+0x28],0x0
0x0040664d: mov    DWORD PTR [rax],0xe
0x00406653: mov    DWORD PTR [rax+0x1c],0x8ad08ad0
0x0040665a: mov    WORD PTR [rax+0x20],si
0x0040665e: mov    DWORD PTR [rax+0x4],0x1
0x00406665: call   0x140404420
0x0040666a: mov    rdx,QWORD PTR [rip+0x228f4a7]        # 0x142695b18
0x00406671: cmp    rdx,QWORD PTR [rip+0x228f4a8]        # 0x142695b20
0x00406678: je     0x140406687
0x0040667a: mov    QWORD PTR [rdx],rbx
0x0040667d: add    QWORD PTR [rip+0x228f493],0x8        # 0x142695b18
0x00406685: jmp    0x140406690
0x00406687: lea    r8,[rbp+0x67]
0x0040668b: call   0x14041ea00
0x00406690: test   dil,0x20
0x00406694: je     0x140406704
0x00406696: mov    ecx,0x50
0x0040669b: call   0x141534600
0x004066a0: xorps  xmm0,xmm0
0x004066a3: mov    QWORD PTR [rbp+0x67],rax
0x004066a7: mov    rcx,rax
0x004066aa: mov    rbx,rax
0x004066ad: movups XMMWORD PTR [rax+0x28],xmm0
0x004066b1: mov    QWORD PTR [rax+0x38],r15
0x004066b5: mov    QWORD PTR [rax+0x40],0xf
0x004066bd: mov    BYTE PTR [rax+0x28],0x0
0x004066c1: mov    DWORD PTR [rax],0xe
0x004066c7: mov    DWORD PTR [rax+0x1c],0x8ad08ad0
0x004066ce: mov    WORD PTR [rax+0x20],si
0x004066d2: mov    DWORD PTR [rax+0x4],0x2
0x004066d9: call   0x140404420
0x004066de: mov    rdx,QWORD PTR [rip+0x228f433]        # 0x142695b18
0x004066e5: cmp    rdx,QWORD PTR [rip+0x228f434]        # 0x142695b20
0x004066ec: je     0x1404066fb
0x004066ee: mov    QWORD PTR [rdx],rbx
0x004066f1: add    QWORD PTR [rip+0x228f41f],0x8        # 0x142695b18
0x004066f9: jmp    0x140406704
0x004066fb: lea    r8,[rbp+0x67]
0x004066ff: call   0x14041ea00
0x00406704: movzx  r9d,WORD PTR [rbp+0x7f]
0x00406709: lea    rcx,[rip+0x1fc4cd0]        # 0x1423cb3e0
0x00406710: movzx  r8d,r13w
0x00406714: movzx  edx,r12w
0x00406718: call   0x1403d42f0
0x0040671d: cmp    al,0xdb
0x0040671f: jne    0x140406728
0x00406721: mov    edi,0x3
0x00406726: jmp    0x140406777
0x00406728: cmp    al,0x3c
0x0040672a: jne    0x140406733
0x0040672c: mov    edi,0x4
0x00406731: jmp    0x140406777
0x00406733: cmp    al,0x3e
0x00406735: jne    0x14040673e
0x00406737: mov    edi,0x5
0x0040673c: jmp    0x140406777
0x0040673e: cmp    al,0x58
0x00406740: jne    0x140406749
0x00406742: mov    edi,0x6
0x00406747: jmp    0x140406777
0x00406749: cmp    al,0x1e
0x0040674b: jne    0x140406754
0x0040674d: mov    edi,0x7
0x00406752: jmp    0x140406777
0x00406754: cmp    al,0x1f
0x00406756: jne    0x14040675f
0x00406758: mov    edi,0x8
0x0040675d: jmp    0x140406777
0x0040675f: cmp    al,0x2e
0x00406761: jne    0x14040676a
0x00406763: mov    edi,0x9
0x00406768: jmp    0x140406777
0x0040676a: cmp    al,0x20
0x0040676c: jne    0x140407d7c
0x00406772: mov    edi,0xa
0x00406777: mov    ecx,0x50
0x0040677c: call   0x141534600
0x00406781: xorps  xmm0,xmm0
0x00406784: mov    QWORD PTR [rbp+0x67],rax
0x00406788: mov    rcx,rax
0x0040678b: mov    rbx,rax
0x0040678e: movups XMMWORD PTR [rax+0x28],xmm0
0x00406792: mov    QWORD PTR [rax+0x38],r15
0x00406796: mov    QWORD PTR [rax+0x40],0xf
0x0040679e: mov    BYTE PTR [rax+0x28],0x0
0x004067a2: mov    DWORD PTR [rax],0xe
0x004067a8: mov    DWORD PTR [rax+0x1c],0x8ad08ad0
0x004067af: mov    WORD PTR [rax+0x20],si
0x004067b3: mov    DWORD PTR [rax+0x4],edi
0x004067b6: call   0x140404420
0x004067bb: mov    rdx,QWORD PTR [rip+0x228f356]        # 0x142695b18
0x004067c2: cmp    rdx,QWORD PTR [rip+0x228f357]        # 0x142695b20
0x004067c9: je     0x1404067db
0x004067cb: mov    QWORD PTR [rdx],rbx
0x004067ce: add    QWORD PTR [rip+0x228f342],0x8        # 0x142695b18
0x004067d6: jmp    0x140407d7c
0x004067db: lea    r8,[rbp+0x67]
0x004067df: call   0x14041ea00
0x004067e4: jmp    0x140407d7c
0x004067e9: movzx  r8d,r13w
0x004067ed: movzx  edx,r12w
0x004067f1: mov    rcx,r15
0x004067f4: call   0x14007dbd0
0x004067f9: bt     eax,0x9
0x004067fd: jb     0x140407d7c
0x00406803: mov    rdx,QWORD PTR [r15+0x13bd8]
0x0040680a: mov    esi,ebx
0x0040680c: mov    rax,QWORD PTR [r15+0x13be0]
0x00406813: sub    rax,rdx
0x00406816: sar    rax,0x3
0x0040681a: test   rax,rax
0x0040681d: je     0x140406928
0x00406823: movzx  r14d,WORD PTR [rbp+0x7f]
0x00406828: mov    rdi,rbx
0x0040682b: nop    DWORD PTR [rax+rax*1+0x0]
0x00406830: mov    rax,QWORD PTR [rdi+rdx*1]
0x00406834: test   BYTE PTR [rax+0x110],0x2
0x0040683b: jne    0x1404068fc
0x00406841: test   DWORD PTR [rax+0x110],0x2000000
0x0040684b: mov    rcx,rax
0x0040684e: jne    0x1404068fc
0x00406854: call   0x141376cc0
0x00406859: test   al,al
0x0040685b: jne    0x1404068fc
0x00406861: mov    rax,QWORD PTR [r15+0x13bd8]
0x00406868: movzx  r9d,r14w
0x0040686c: movzx  r8d,r13w
0x00406870: movzx  edx,r12w
0x00406874: mov    rcx,QWORD PTR [rdi+rax*1]
0x00406878: call   0x14014d9b0
0x0040687d: test   al,al
0x0040687f: je     0x1404068fc
0x00406881: mov    ecx,0x50
0x00406886: call   0x141534600
0x0040688b: xorps  xmm0,xmm0
0x0040688e: mov    QWORD PTR [rbp-0x9],rax
0x00406892: mov    edx,0x2
0x00406897: mov    rcx,rax
0x0040689a: mov    rbx,rax
0x0040689d: movups XMMWORD PTR [rax+0x28],xmm0
0x004068a1: mov    QWORD PTR [rax+0x38],0x0
0x004068a9: mov    QWORD PTR [rax+0x40],0xf
0x004068b1: mov    BYTE PTR [rax+0x28],0x0
0x004068b5: call   0x1403d4420
0x004068ba: mov    rcx,QWORD PTR [r15+0x13bd8]
0x004068c1: mov    rdx,QWORD PTR [rdi+rcx*1]
0x004068c5: mov    ecx,DWORD PTR [rdx+0x130]
0x004068cb: mov    DWORD PTR [rbx+0x4],ecx
0x004068ce: mov    rcx,rbx
0x004068d1: call   0x140404420
0x004068d6: mov    rdx,QWORD PTR [rip+0x228f23b]        # 0x142695b18
0x004068dd: cmp    rdx,QWORD PTR [rip+0x228f23c]        # 0x142695b20
0x004068e4: je     0x1404068f3
0x004068e6: mov    QWORD PTR [rdx],rbx
0x004068e9: add    QWORD PTR [rip+0x228f227],0x8        # 0x142695b18
0x004068f1: jmp    0x1404068fc
0x004068f3: lea    r8,[rbp-0x9]
0x004068f7: call   0x14041ea00
0x004068fc: mov    rdx,QWORD PTR [r15+0x13bd8]
0x00406903: inc    esi
0x00406905: mov    rcx,QWORD PTR [r15+0x13be0]
0x0040690c: add    rdi,0x8
0x00406910: sub    rcx,rdx
0x00406913: movsxd rax,esi
0x00406916: sar    rcx,0x3
0x0040691a: cmp    rax,rcx
0x0040691d: jb     0x140406830
0x00406923: movzx  r9d,WORD PTR [rbp+0x7f]
0x00406928: mov    rbx,QWORD PTR [r15+0x90]
0x0040692f: mov    r12d,0xffff8ad0
0x00406935: mov    rdi,QWORD PTR [r15+0x98]
0x0040693c: movzx  r15d,WORD PTR [rbp+0x6f]
0x00406941: cmp    rbx,rdi
0x00406944: jae    0x140406a3c
0x0040694a: mov    r14,QWORD PTR [rbx]
0x0040694d: cmp    BYTE PTR [r14+0xa],0x0
0x00406952: je     0x140406a2e
0x00406958: cmp    WORD PTR [r14+0x4],r15w
0x0040695d: jne    0x140406a2e
0x00406963: cmp    WORD PTR [r14+0x6],r13w
0x00406968: jne    0x140406a2e
0x0040696e: cmp    WORD PTR [r14+0x8],r9w
0x00406973: jne    0x140406a2e
0x00406979: mov    ecx,0x50
0x0040697e: call   0x141534600
0x00406983: mov    rsi,rax
0x00406986: xorps  xmm0,xmm0
0x00406989: mov    QWORD PTR [rbp-0x9],rsi
0x0040698d: movups XMMWORD PTR [rax+0x28],xmm0
0x00406991: mov    QWORD PTR [rsi+0x40],0xf
0x00406999: xor    eax,eax
0x0040699b: mov    QWORD PTR [rsi+0x38],rax
0x0040699f: mov    BYTE PTR [rsi+0x28],al
0x004069a2: mov    QWORD PTR [rsi],0x4
0x004069a9: mov    DWORD PTR [rsi+0x8],0xffffffff
0x004069b0: mov    DWORD PTR [rsi+0xc],eax
0x004069b3: mov    DWORD PTR [rsi+0x10],0x1
0x004069ba: mov    DWORD PTR [rsi+0x1c],0x8ad08ad0
0x004069c1: mov    WORD PTR [rsi+0x20],r12w
0x004069c6: mov    rax,QWORD PTR [r14+0x10]
0x004069ca: test   rax,rax
0x004069cd: je     0x1404069d5
0x004069cf: mov    eax,DWORD PTR [rax+0x1c]
0x004069d2: mov    DWORD PTR [rsi+0x8],eax
0x004069d5: movzx  eax,WORD PTR [r14]
0x004069d9: mov    rcx,rsi
0x004069dc: mov    WORD PTR [rsi+0x4],ax
0x004069e0: movzx  eax,WORD PTR [r14+0x2]
0x004069e5: mov    WORD PTR [rsi+0x6],ax
0x004069e9: mov    eax,DWORD PTR [r14+0x18]
0x004069ed: mov    DWORD PTR [rsi+0xc],eax
0x004069f0: mov    eax,DWORD PTR [r14+0x1c]
0x004069f4: mov    DWORD PTR [rsi+0x10],eax
0x004069f7: call   0x140404420
0x004069fc: mov    rdx,QWORD PTR [rip+0x228f115]        # 0x142695b18
0x00406a03: cmp    rdx,QWORD PTR [rip+0x228f116]        # 0x142695b20
0x00406a0a: je     0x140406a25
0x00406a0c: movzx  r9d,WORD PTR [rbp+0x7f]
0x00406a11: mov    QWORD PTR [rdx],rsi
0x00406a14: add    QWORD PTR [rip+0x228f0fc],0x8        # 0x142695b18
0x00406a1c: add    rbx,0x8
0x00406a20: jmp    0x140406941
0x00406a25: lea    r8,[rbp-0x9]
0x00406a29: call   0x14041ea00
0x00406a2e: movzx  r9d,WORD PTR [rbp+0x7f]
0x00406a33: add    rbx,0x8
0x00406a37: jmp    0x140406941
0x00406a3c: movsx  rsi,WORD PTR [rbp+0x6f]
0x00406a41: mov    r15,QWORD PTR [rbp+0x67]
0x00406a45: test   si,si
0x00406a48: js     0x140406a89
0x00406a4a: cmp    esi,DWORD PTR [r15+0x116bec]
0x00406a51: jge    0x140406a89
0x00406a53: test   r13w,r13w
0x00406a57: js     0x140406a89
0x00406a59: cmp    r13d,DWORD PTR [r15+0x116bf0]
0x00406a60: jge    0x140406a89
0x00406a62: test   r9w,r9w
0x00406a66: js     0x140406a89
0x00406a68: movsx  eax,r9w
0x00406a6c: cmp    eax,DWORD PTR [r15+0x116bf4]
0x00406a73: jge    0x140406a89
0x00406a75: mov    r8,QWORD PTR [r15+0x116bb8]
0x00406a7c: movzx  ecx,r13w
0x00406a80: shr    cx,0x4
0x00406a84: test   r8,r8
0x00406a87: jne    0x140406a95
0x00406a89: xor    r12d,r12d
0x00406a8c: mov    QWORD PTR [rbp-0x1],r12
0x00406a90: jmp    0x140406c44
0x00406a95: mov    rax,rsi
0x00406a98: movzx  edx,cx
0x00406a9b: shr    rax,0x4
0x00406a9f: movsx  rcx,r9w
0x00406aa3: mov    rax,QWORD PTR [r8+rax*8]
0x00406aa7: mov    rax,QWORD PTR [rax+rdx*8]
0x00406aab: mov    rsi,QWORD PTR [rax+rcx*8]
0x00406aaf: mov    QWORD PTR [rbp-0x1],rsi
0x00406ab3: test   rsi,rsi
0x00406ab6: je     0x140406c34
0x00406abc: mov    rdx,QWORD PTR [rsi+0x50]
0x00406ac0: xor    r12d,r12d
0x00406ac3: mov    rax,QWORD PTR [rsi+0x58]
0x00406ac7: sub    rax,rdx
0x00406aca: mov    DWORD PTR [rbp-0x11],r12d
0x00406ace: sar    rax,0x2
0x00406ad2: mov    QWORD PTR [rbp-0x1],rsi
0x00406ad6: test   rax,rax
0x00406ad9: je     0x140406c40
0x00406adf: mov    QWORD PTR [rbp-0x1],rsi
0x00406ae3: mov    r14d,0xffff8ad0
0x00406ae9: nop    DWORD PTR [rax+0x0]
0x00406af0: mov    r10d,DWORD PTR [r12+rdx*1]
0x00406af4: mov    rdx,QWORD PTR [r15+0x13f68]
0x00406afb: mov    rdi,QWORD PTR [r15+0x13f60]
0x00406b02: sub    rdx,rdi
0x00406b05: sar    rdx,0x3
0x00406b09: test   edx,edx
0x00406b0b: je     0x140406c05
0x00406b11: cmp    r10d,0xffffffff
0x00406b15: je     0x140406c05
0x00406b1b: xor    eax,eax
0x00406b1d: sub    edx,0x1
0x00406b20: mov    r8d,eax
0x00406b23: js     0x140406b5b
0x00406b25: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x00406b30: lea    ecx,[r8+rdx*1]
0x00406b34: mov    r11d,edx
0x00406b37: sar    ecx,1
0x00406b39: movsxd rax,ecx
0x00406b3c: mov    rbx,QWORD PTR [rdi+rax*8]
0x00406b40: cmp    DWORD PTR [rbx+0x1c],r10d
0x00406b44: je     0x140406b5e
0x00406b46: lea    edx,[rcx-0x1]
0x00406b49: lea    eax,[rcx+0x1]
0x00406b4c: cmovle edx,r11d
0x00406b50: cmovle r8d,eax
0x00406b54: cmp    r8d,edx
0x00406b57: jle    0x140406b30
0x00406b59: xor    eax,eax
0x00406b5b: mov    rbx,rax
0x00406b5e: test   rbx,rbx
0x00406b61: je     0x140406c05
0x00406b67: test   DWORD PTR [rbx+0x10],0x1000000
0x00406b6e: jne    0x140406c05
0x00406b74: movzx  eax,WORD PTR [rbp+0x6f]
0x00406b78: cmp    WORD PTR [rbx+0x8],ax
0x00406b7c: jne    0x140406c05
0x00406b82: cmp    WORD PTR [rbx+0xa],r13w
0x00406b87: jne    0x140406c05
0x00406b89: movzx  eax,WORD PTR [rbp+0x7f]
0x00406b8d: cmp    WORD PTR [rbx+0xc],ax
0x00406b91: jne    0x140406c05
0x00406b93: mov    ecx,0x50
0x00406b98: call   0x141534600
0x00406b9d: mov    rdi,rax
0x00406ba0: xorps  xmm0,xmm0
0x00406ba3: mov    rcx,rdi
0x00406ba6: mov    QWORD PTR [rbp-0x9],rdi
0x00406baa: movups XMMWORD PTR [rax+0x28],xmm0
0x00406bae: mov    QWORD PTR [rdi+0x40],0xf
0x00406bb6: xor    eax,eax
0x00406bb8: mov    QWORD PTR [rdi+0x38],rax
0x00406bbc: mov    BYTE PTR [rdi+0x28],al
0x00406bbf: mov    DWORD PTR [rdi+0x4],0xffffffff
0x00406bc6: mov    DWORD PTR [rdi],eax
0x00406bc8: mov    DWORD PTR [rdi+0x1c],0x8ad08ad0
0x00406bcf: mov    WORD PTR [rdi+0x20],r14w
0x00406bd4: mov    eax,DWORD PTR [rbx+0x1c]
0x00406bd7: mov    DWORD PTR [rdi+0x4],eax
0x00406bda: call   0x140404420
0x00406bdf: mov    rdx,QWORD PTR [rip+0x228ef32]        # 0x142695b18
0x00406be6: cmp    rdx,QWORD PTR [rip+0x228ef33]        # 0x142695b20
0x00406bed: je     0x140406bfc
0x00406bef: mov    QWORD PTR [rdx],rdi
0x00406bf2: add    QWORD PTR [rip+0x228ef1e],0x8        # 0x142695b18
0x00406bfa: jmp    0x140406c05
0x00406bfc: lea    r8,[rbp-0x9]
0x00406c00: call   0x14041ea00
0x00406c05: mov    eax,DWORD PTR [rbp-0x11]
0x00406c08: add    r12,0x4
0x00406c0c: mov    rdx,QWORD PTR [rsi+0x50]
0x00406c10: inc    eax
0x00406c12: mov    rcx,QWORD PTR [rsi+0x58]
0x00406c16: sub    rcx,rdx
0x00406c19: mov    DWORD PTR [rbp-0x11],eax
0x00406c1c: cdqe
0x00406c1e: sar    rcx,0x2
0x00406c22: cmp    rax,rcx
0x00406c25: jb     0x140406af0
0x00406c2b: movzx  esi,WORD PTR [rbp+0x6f]
0x00406c2f: xor    r12d,r12d
0x00406c32: jmp    0x140406c4a
0x00406c34: movzx  esi,WORD PTR [rbp+0x6f]
0x00406c38: mov    r14d,r12d
0x00406c3b: xor    r12d,r12d
0x00406c3e: jmp    0x140406c4a
0x00406c40: movzx  esi,WORD PTR [rbp+0x6f]
0x00406c44: mov    r14d,0xffff8ad0
0x00406c4a: mov    rdi,QWORD PTR [r15+0x1ca10]
0x00406c51: test   rdi,rdi
0x00406c54: je     0x140406d2b
0x00406c5a: movzx  r15d,WORD PTR [rbp+0x7f]
0x00406c5f: nop
0x00406c60: mov    rcx,QWORD PTR [rdi]
0x00406c63: test   BYTE PTR [rcx+0x48],0x20
0x00406c67: jne    0x140406d15
0x00406c6d: mov    rax,QWORD PTR [rcx]
0x00406c70: call   QWORD PTR [rax]
0x00406c72: test   eax,eax
0x00406c74: jne    0x140406d15
0x00406c7a: mov    rax,QWORD PTR [rdi]
0x00406c7d: cmp    WORD PTR [rax+0x2c],si
0x00406c81: jne    0x140406d15
0x00406c87: cmp    WORD PTR [rax+0x2e],r13w
0x00406c8c: jne    0x140406d15
0x00406c92: cmp    WORD PTR [rax+0x30],r15w
0x00406c97: jne    0x140406d15
0x00406c99: mov    ecx,0x50
0x00406c9e: call   0x141534600
0x00406ca3: mov    rbx,rax
0x00406ca6: mov    QWORD PTR [rbp-0x9],rax
0x00406caa: xorps  xmm0,xmm0
0x00406cad: movups XMMWORD PTR [rax+0x28],xmm0
0x00406cb1: mov    QWORD PTR [rax+0x38],r12
0x00406cb5: mov    QWORD PTR [rax+0x40],0xf
0x00406cbd: mov    BYTE PTR [rax+0x28],0x0
0x00406cc1: mov    DWORD PTR [rax+0x4],0xffffffff
0x00406cc8: mov    DWORD PTR [rax],r12d
0x00406ccb: mov    DWORD PTR [rax+0x1c],0x8ad08ad0
0x00406cd2: mov    WORD PTR [rax+0x20],r14w
0x00406cd7: mov    rax,QWORD PTR [rdi]
0x00406cda: mov    rcx,QWORD PTR [rax+0x98]
0x00406ce1: mov    eax,DWORD PTR [rcx+0x1c]
0x00406ce4: mov    rcx,rbx
0x00406ce7: mov    DWORD PTR [rbx+0x4],eax
0x00406cea: call   0x140404420
0x00406cef: mov    rdx,QWORD PTR [rip+0x228ee22]        # 0x142695b18
0x00406cf6: cmp    rdx,QWORD PTR [rip+0x228ee23]        # 0x142695b20
0x00406cfd: je     0x140406d0c
0x00406cff: mov    QWORD PTR [rdx],rbx
0x00406d02: add    QWORD PTR [rip+0x228ee0e],0x8        # 0x142695b18
0x00406d0a: jmp    0x140406d15
0x00406d0c: lea    r8,[rbp-0x9]
0x00406d10: call   0x14041ea00
0x00406d15: mov    eax,0x10
0x00406d1a: mov    rdi,QWORD PTR [rdi+rax*1]
0x00406d1e: test   rdi,rdi
0x00406d21: jne    0x140406c60
0x00406d27: mov    r15,QWORD PTR [rbp+0x67]
0x00406d2b: mov    rdx,QWORD PTR [r15+0x1ca38]
0x00406d32: mov    rax,QWORD PTR [r15+0x1ca40]
0x00406d39: sub    rax,rdx
0x00406d3c: mov    DWORD PTR [rbp-0x15],r12d
0x00406d40: sar    rax,0x3
0x00406d44: mov    DWORD PTR [rbp-0x11],0x3
0x00406d4b: test   rax,rax
0x00406d4e: je     0x140406fc6
0x00406d54: nop    DWORD PTR [rax+0x0]
0x00406d58: nop    DWORD PTR [rax+rax*1+0x0]
0x00406d60: mov    rcx,QWORD PTR [r12+rdx*1]
0x00406d64: mov    rax,QWORD PTR [rcx]
0x00406d67: call   QWORD PTR [rax+0x270]
0x00406d6d: test   al,al
0x00406d6f: je     0x140406f96
0x00406d75: mov    rax,QWORD PTR [r15+0x1ca38]
0x00406d7c: mov    rbx,QWORD PTR [r12+rax*1]
0x00406d80: mov    rcx,rbx
0x00406d83: mov    rax,QWORD PTR [rbx]
0x00406d86: call   QWORD PTR [rax+0x130]
0x00406d8c: test   al,al
0x00406d8e: je     0x140406f96
0x00406d94: movsx  edi,WORD PTR [rbp+0x7f]
0x00406d98: cmp    edi,DWORD PTR [rbx+0x20]
0x00406d9b: jne    0x140406f96
0x00406da1: mov    rax,QWORD PTR [rbx]
0x00406da4: mov    rcx,rbx
0x00406da7: call   QWORD PTR [rax+0x140]
0x00406dad: test   al,al
0x00406daf: je     0x140406dd4
0x00406db1: cmp    QWORD PTR [rbx+0x30],0x0
0x00406db6: je     0x140406dd4
0x00406db8: movzx  r9d,di
0x00406dbc: movzx  r8d,r13w
0x00406dc0: movzx  edx,si
0x00406dc3: mov    rcx,rbx
0x00406dc6: call   0x1405561d0
0x00406dcb: test   al,al
0x00406dcd: jne    0x140406dff
0x00406dcf: jmp    0x140406f96
0x00406dd4: movsx  eax,si
0x00406dd7: cmp    eax,DWORD PTR [rbx+0x8]
0x00406dda: jl     0x140406f96
0x00406de0: cmp    eax,DWORD PTR [rbx+0x14]
0x00406de3: jg     0x140406f96
0x00406de9: movsx  eax,r13w
0x00406ded: cmp    eax,DWORD PTR [rbx+0xc]
0x00406df0: jl     0x140406f96
0x00406df6: cmp    eax,DWORD PTR [rbx+0x18]
0x00406df9: jg     0x140406f96
0x00406dff: mov    ecx,0x50
0x00406e04: call   0x141534600
0x00406e09: mov    rbx,rax
0x00406e0c: xorps  xmm0,xmm0
0x00406e0f: mov    QWORD PTR [rbp-0x9],rbx
0x00406e13: movups XMMWORD PTR [rax+0x28],xmm0
0x00406e17: mov    QWORD PTR [rbx+0x40],0xf
0x00406e1f: xor    eax,eax
0x00406e21: mov    QWORD PTR [rbx+0x38],rax
0x00406e25: mov    BYTE PTR [rbx+0x28],al
0x00406e28: mov    eax,DWORD PTR [rbp-0x11]
0x00406e2b: mov    DWORD PTR [rbx+0x4],0xffffffff
0x00406e32: mov    DWORD PTR [rbx],eax
0x00406e34: mov    DWORD PTR [rbx+0x1c],0x8ad08ad0
0x00406e3b: mov    WORD PTR [rbx+0x20],r14w
0x00406e40: mov    rax,QWORD PTR [r15+0x1ca38]
0x00406e47: mov    rcx,QWORD PTR [r12+rax*1]
0x00406e4b: mov    eax,DWORD PTR [rcx+0x50]
0x00406e4e: mov    rcx,rbx
0x00406e51: mov    DWORD PTR [rbx+0x4],eax
0x00406e54: call   0x140404420
0x00406e59: mov    rdx,QWORD PTR [rip+0x228ecb8]        # 0x142695b18
0x00406e60: cmp    rdx,QWORD PTR [rip+0x228ecb9]        # 0x142695b20
0x00406e67: je     0x140406e76
0x00406e69: mov    QWORD PTR [rdx],rbx
0x00406e6c: add    QWORD PTR [rip+0x228eca4],0x8        # 0x142695b18
0x00406e74: jmp    0x140406e7f
0x00406e76: lea    r8,[rbp-0x9]
0x00406e7a: call   0x14041ea00
0x00406e7f: cmp    DWORD PTR [rip+0x148f3e2],0x1        # 0x141896268
0x00406e86: jne    0x140406f96
0x00406e8c: mov    rax,QWORD PTR [r15+0x1ca38]
0x00406e93: mov    rcx,QWORD PTR [r12+rax*1]
0x00406e97: mov    rax,QWORD PTR [rcx]
0x00406e9a: call   QWORD PTR [rax+0xe8]
0x00406ea0: test   al,al
0x00406ea2: je     0x140406f96
0x00406ea8: mov    rax,QWORD PTR [r15+0x1ca38]
0x00406eaf: xor    ecx,ecx
0x00406eb1: mov    esi,ecx
0x00406eb3: mov    rdi,QWORD PTR [r12+rax*1]
0x00406eb7: mov    rax,QWORD PTR [rdi+0x130]
0x00406ebe: sub    rax,QWORD PTR [rdi+0x128]
0x00406ec5: sar    rax,0x3
0x00406ec9: test   rax,rax
0x00406ecc: je     0x140406f96
0x00406ed2: mov    r14d,ecx
0x00406ed5: mov    r13d,0xffff8ad0
0x00406edb: xor    r15d,r15d
0x00406ede: xchg   ax,ax
0x00406ee0: mov    ecx,0x50
0x00406ee5: call   0x141534600
0x00406eea: mov    rbx,rax
0x00406eed: mov    QWORD PTR [rbp-0x9],rax
0x00406ef1: xorps  xmm0,xmm0
0x00406ef4: movups XMMWORD PTR [rax+0x28],xmm0
0x00406ef8: mov    QWORD PTR [rax+0x38],r15
0x00406efc: mov    QWORD PTR [rax+0x40],0xf
0x00406f04: mov    BYTE PTR [rax+0x28],r15b
0x00406f08: mov    DWORD PTR [rax+0x4],0xffffffff
0x00406f0f: mov    DWORD PTR [rax],0x8
0x00406f15: mov    DWORD PTR [rax+0x1c],0x8ad08ad0
0x00406f1c: mov    WORD PTR [rax+0x20],r13w
0x00406f21: mov    rax,QWORD PTR [rdi+0x128]
0x00406f28: mov    rcx,QWORD PTR [r14+rax*1]
0x00406f2c: mov    rax,QWORD PTR [rcx]
0x00406f2f: mov    ecx,DWORD PTR [rax+0x1c]
0x00406f32: mov    DWORD PTR [rbx+0x4],ecx
0x00406f35: mov    rcx,rbx
0x00406f38: call   0x140404420
0x00406f3d: mov    rdx,QWORD PTR [rip+0x228ebd4]        # 0x142695b18
0x00406f44: cmp    rdx,QWORD PTR [rip+0x228ebd5]        # 0x142695b20
0x00406f4b: je     0x140406f5a
0x00406f4d: mov    QWORD PTR [rdx],rbx
0x00406f50: add    QWORD PTR [rip+0x228ebc0],0x8        # 0x142695b18
0x00406f58: jmp    0x140406f63
0x00406f5a: lea    r8,[rbp-0x9]
0x00406f5e: call   0x14041ea00
0x00406f63: mov    rcx,QWORD PTR [rdi+0x130]
0x00406f6a: inc    esi
0x00406f6c: sub    rcx,QWORD PTR [rdi+0x128]
0x00406f73: add    r14,0x8
0x00406f77: sar    rcx,0x3
0x00406f7b: movsxd rax,esi
0x00406f7e: cmp    rax,rcx
0x00406f81: jb     0x140406ee0
0x00406f87: mov    r15,QWORD PTR [rbp+0x67]
0x00406f8b: mov    r14d,0xffff8ad0
0x00406f91: movzx  r13d,WORD PTR [rbp+0x77]
0x00406f96: mov    eax,DWORD PTR [rbp-0x15]
0x00406f99: add    r12,0x8
0x00406f9d: mov    rdx,QWORD PTR [r15+0x1ca38]
0x00406fa4: inc    eax
0x00406fa6: mov    rcx,QWORD PTR [r15+0x1ca40]
0x00406fad: movzx  esi,WORD PTR [rbp+0x6f]
0x00406fb1: sub    rcx,rdx
0x00406fb4: mov    DWORD PTR [rbp-0x15],eax
0x00406fb7: cdqe
0x00406fb9: sar    rcx,0x3
0x00406fbd: cmp    rax,rcx
0x00406fc0: jb     0x140406d60
0x00406fc6: movzx  r11d,WORD PTR [rbp+0x6f]
0x00406fcb: lea    rax,[rbp+0x7]
0x00406fcf: movzx  r9d,WORD PTR [rbp+0x7f]
0x00406fd4: lea    rcx,[r15+0x11b3b8]
0x00406fdb: mov    QWORD PTR [rsp+0x28],rax
0x00406fe0: movzx  r8d,r13w
0x00406fe4: lea    rax,[rbp-0x9]
0x00406fe8: movzx  edx,r11w
0x00406fec: mov    QWORD PTR [rsp+0x20],rax
0x00406ff1: call   0x140a50860
0x00406ff6: mov    r12,rax
0x00406ff9: xor    eax,eax
0x00406ffb: mov    r14d,eax
0x00406ffe: mov    rdx,QWORD PTR [r12]
0x00407002: mov    rcx,QWORD PTR [r12+0x8]
0x00407007: sub    rcx,rdx
0x0040700a: sar    rcx,0x3
0x0040700e: test   rcx,rcx
0x00407011: je     0x1404071cb
0x00407017: mov    esi,eax
0x00407019: lea    r8,[rip+0xffffffffffbf8fe0]        # 0x140000000
0x00407020: mov    r15d,0xffff8ad0
0x00407026: data16 nop WORD PTR [rax+rax*1+0x0]
0x00407030: mov    rbx,QWORD PTR [rdx+rsi*1]
0x00407034: test   BYTE PTR [rbx+0x17],0x1
0x00407038: jne    0x1404071a4
0x0040703e: movsx  rax,WORD PTR [rbx]
0x00407042: cmp    eax,0xd
0x00407045: ja     0x1404071a4
0x0040704b: mov    ecx,DWORD PTR [r8+rax*4+0x407d9c]
0x00407053: add    rcx,r8
0x00407056: jmp    rcx
0x00407058: cmp    WORD PTR [rbx+0xa],r11w
0x0040705d: jne    0x1404071a4
0x00407063: cmp    WORD PTR [rbx+0xc],r13w
0x00407068: jne    0x1404071a4
0x0040706e: cmp    WORD PTR [rbx+0xe],r9w
0x00407073: jne    0x1404071a4
0x00407079: mov    ecx,0x50
0x0040707e: call   0x141534600
0x00407083: movsx  r9d,WORD PTR [rbp+0x6f]
0x00407088: mov    rdi,rax
0x0040708b: xorps  xmm0,xmm0
0x0040708e: mov    QWORD PTR [rbp-0x9],rdi
0x00407092: movups XMMWORD PTR [rax+0x28],xmm0
0x00407096: mov    QWORD PTR [rdi+0x40],0xf
0x0040709e: xor    eax,eax
0x004070a0: mov    QWORD PTR [rdi+0x38],rax
0x004070a4: mov    BYTE PTR [rdi+0x28],al
0x004070a7: mov    DWORD PTR [rdi],0x5
0x004070ad: mov    DWORD PTR [rdi+0x10],eax
0x004070b0: mov    DWORD PTR [rdi+0x1c],0x8ad08ad0
0x004070b7: mov    WORD PTR [rdi+0x20],r15w
0x004070bc: movzx  eax,WORD PTR [rbx]
0x004070bf: mov    WORD PTR [rdi+0x4],ax
0x004070c3: movzx  eax,WORD PTR [rbx+0x2]
0x004070c7: mov    WORD PTR [rdi+0x6],ax
0x004070cb: mov    eax,DWORD PTR [rbx+0x4]
0x004070ce: mov    DWORD PTR [rdi+0x8],eax
0x004070d1: mov    eax,DWORD PTR [rbx+0x18]
0x004070d4: mov    DWORD PTR [rdi+0xc],eax
0x004070d7: test   r9w,r9w
0x004070db: js     0x140407165
0x004070e1: cmp    r9d,DWORD PTR [rip+0x20daee4]        # 0x1424e1fcc
0x004070e8: jge    0x140407165
0x004070ea: test   r13w,r13w
0x004070ee: js     0x140407165
0x004070f0: movsx  eax,r13w
0x004070f4: cmp    eax,DWORD PTR [rip+0x20daed6]        # 0x1424e1fd0
0x004070fa: mov    r8d,eax
0x004070fd: jge    0x140407165
0x004070ff: movsx  r10,WORD PTR [rbp+0x7f]
0x00407104: test   r10w,r10w
0x00407108: js     0x140407165
0x0040710a: cmp    r10d,DWORD PTR [rip+0x20daec3]        # 0x1424e1fd4
0x00407111: jge    0x140407165
0x00407113: mov    rcx,QWORD PTR [rip+0x20dae7e]        # 0x1424e1f98
0x0040711a: movzx  eax,r9w
0x0040711e: shr    ax,0x4
0x00407122: test   rcx,rcx
0x00407125: je     0x140407165
0x00407127: movzx  eax,ax
0x0040712a: movsx  rdx,r13w
0x0040712e: shr    rdx,0x4
0x00407132: mov    rax,QWORD PTR [rcx+rax*8]
0x00407136: mov    rax,QWORD PTR [rax+rdx*8]
0x0040713a: mov    rdx,QWORD PTR [rax+r10*8]
0x0040713e: test   rdx,rdx
0x00407141: je     0x140407165
0x00407143: mov    ecx,r9d
0x00407146: and    r8d,0xf
0x0040714a: and    ecx,0xf
0x0040714d: shl    rcx,0x4
0x00407151: add    rcx,r8
0x00407154: test   DWORD PTR [rdx+rcx*4+0x2a0],0x8000
0x0040715f: je     0x140407165
0x00407161: or     DWORD PTR [rdi+0x10],0x1
0x00407165: mov    rcx,rdi
0x00407168: call   0x140404420
0x0040716d: mov    rdx,QWORD PTR [rip+0x228e9a4]        # 0x142695b18
0x00407174: cmp    rdx,QWORD PTR [rip+0x228e9a5]        # 0x142695b20
0x0040717b: je     0x14040718a
0x0040717d: mov    QWORD PTR [rdx],rdi
0x00407180: add    QWORD PTR [rip+0x228e990],0x8        # 0x142695b18
0x00407188: jmp    0x140407193
0x0040718a: lea    r8,[rbp-0x9]
0x0040718e: call   0x14041ea00
0x00407193: movzx  r9d,WORD PTR [rbp+0x7f]
0x00407198: lea    r8,[rip+0xffffffffffbf8e61]        # 0x140000000
0x0040719f: movzx  r11d,WORD PTR [rbp+0x6f]
0x004071a4: mov    rdx,QWORD PTR [r12]
0x004071a8: inc    r14d
0x004071ab: mov    rcx,QWORD PTR [r12+0x8]
0x004071b0: add    rsi,0x8
0x004071b4: sub    rcx,rdx
0x004071b7: movsxd rax,r14d
0x004071ba: sar    rcx,0x3
0x004071be: cmp    rax,rcx
0x004071c1: jb     0x140407030
0x004071c7: mov    r15,QWORD PTR [rbp+0x67]
0x004071cb: mov    rdx,QWORD PTR [r15+0x108]
0x004071d2: xor    r12d,r12d
0x004071d5: mov    rax,QWORD PTR [r15+0x110]
0x004071dc: mov    esi,r12d
0x004071df: movzx  r14d,WORD PTR [rbp+0x6f]
0x004071e4: sub    rax,rdx
0x004071e7: sar    rax,0x3
0x004071eb: test   rax,rax
0x004071ee: je     0x1404072b0
0x004071f4: mov    edi,r12d
0x004071f7: nop    WORD PTR [rax+rax*1+0x0]
0x00407200: mov    rax,QWORD PTR [rdx+rdi*1]
0x00407204: cmp    WORD PTR [rax],r14w
0x00407208: jne    0x140407284
0x0040720a: cmp    WORD PTR [rax+0x2],r13w
0x0040720f: jne    0x140407284
0x00407211: cmp    WORD PTR [rax+0x4],r9w
0x00407216: jne    0x140407284
0x00407218: mov    ecx,0x50
0x0040721d: call   0x141534600
0x00407222: mov    rbx,rax
0x00407225: mov    QWORD PTR [rbp-0x9],rax
0x00407229: xorps  xmm0,xmm0
0x0040722c: mov    rcx,rbx
0x0040722f: movups XMMWORD PTR [rax+0x28],xmm0
0x00407233: mov    QWORD PTR [rax+0x38],r12
0x00407237: mov    QWORD PTR [rax+0x40],0xf
0x0040723f: mov    BYTE PTR [rax+0x28],r12b
0x00407243: mov    DWORD PTR [rax],0x9
0x00407249: mov    eax,0xffff8ad0
0x0040724e: mov    WORD PTR [rbx+0x20],ax
0x00407252: mov    DWORD PTR [rbx+0x1c],0x8ad08ad0
0x00407259: call   0x140404420
0x0040725e: mov    rdx,QWORD PTR [rip+0x228e8b3]        # 0x142695b18
0x00407265: cmp    rdx,QWORD PTR [rip+0x228e8b4]        # 0x142695b20
0x0040726c: je     0x14040727b
0x0040726e: mov    QWORD PTR [rdx],rbx
0x00407271: add    QWORD PTR [rip+0x228e89f],0x8        # 0x142695b18
0x00407279: jmp    0x140407284
0x0040727b: lea    r8,[rbp-0x9]
0x0040727f: call   0x14041ea00
0x00407284: mov    rdx,QWORD PTR [r15+0x108]
0x0040728b: inc    esi
0x0040728d: mov    rcx,QWORD PTR [r15+0x110]
0x00407294: add    rdi,0x8
0x00407298: movzx  r9d,WORD PTR [rbp+0x7f]
0x0040729d: sub    rcx,rdx
0x004072a0: sar    rcx,0x3
0x004072a4: movsxd rax,esi
0x004072a7: cmp    rax,rcx
0x004072aa: jb     0x140407200
0x004072b0: mov    rdx,QWORD PTR [r15+0xd8]
0x004072b7: mov    esi,r12d
0x004072ba: mov    rax,QWORD PTR [r15+0xe0]
0x004072c1: sub    rax,rdx
0x004072c4: sar    rax,0x3
0x004072c8: test   rax,rax
0x004072cb: je     0x140407382
0x004072d1: mov    rdi,r12
0x004072d4: mov    rax,QWORD PTR [rdx+rdi*1]
0x004072d8: cmp    WORD PTR [rax],r14w
0x004072dc: jne    0x14040735b
0x004072de: cmp    WORD PTR [rax+0x2],r13w
0x004072e3: jne    0x14040735b
0x004072e5: movzx  ecx,WORD PTR [rbp+0x7f]
0x004072e9: cmp    WORD PTR [rax+0x4],cx
0x004072ed: jne    0x14040735b
0x004072ef: mov    ecx,0x50
0x004072f4: call   0x141534600
0x004072f9: mov    rbx,rax
0x004072fc: mov    QWORD PTR [rbp-0x9],rax
0x00407300: xorps  xmm0,xmm0
0x00407303: mov    rcx,rbx
0x00407306: movups XMMWORD PTR [rax+0x28],xmm0
0x0040730a: mov    QWORD PTR [rax+0x38],r12
0x0040730e: mov    QWORD PTR [rax+0x40],0xf
0x00407316: mov    BYTE PTR [rax+0x28],r12b
0x0040731a: mov    DWORD PTR [rax],0x6
0x00407320: mov    eax,0xffff8ad0
0x00407325: mov    WORD PTR [rbx+0x20],ax
0x00407329: mov    DWORD PTR [rbx+0x1c],0x8ad08ad0
0x00407330: call   0x140404420
0x00407335: mov    rdx,QWORD PTR [rip+0x228e7dc]        # 0x142695b18
0x0040733c: cmp    rdx,QWORD PTR [rip+0x228e7dd]        # 0x142695b20
0x00407343: je     0x140407352
0x00407345: mov    QWORD PTR [rdx],rbx
0x00407348: add    QWORD PTR [rip+0x228e7c8],0x8        # 0x142695b18
0x00407350: jmp    0x14040735b
0x00407352: lea    r8,[rbp-0x9]
0x00407356: call   0x14041ea00
0x0040735b: mov    rdx,QWORD PTR [r15+0xd8]
0x00407362: inc    esi
0x00407364: mov    rcx,QWORD PTR [r15+0xe0]
0x0040736b: add    rdi,0x8
0x0040736f: sub    rcx,rdx
0x00407372: movsxd rax,esi
0x00407375: sar    rcx,0x3
0x00407379: cmp    rax,rcx
0x0040737c: jb     0x1404072d4
0x00407382: mov    ecx,0x50
0x00407387: call   0x141534600
0x0040738c: xorps  xmm0,xmm0
0x0040738f: mov    QWORD PTR [rbp-0x9],rax
0x00407393: mov    rcx,rax
0x00407396: mov    rbx,rax
0x00407399: movups XMMWORD PTR [rax+0x28],xmm0
0x0040739d: mov    QWORD PTR [rax+0x38],r12
0x004073a1: mov    QWORD PTR [rax+0x40],0xf
0x004073a9: mov    BYTE PTR [rax+0x28],r12b
0x004073ad: movsx  r12,WORD PTR [rbp+0x7f]
0x004073b2: mov    WORD PTR [rax+0x20],r12w
0x004073b7: mov    DWORD PTR [rax],0x1
0x004073bd: mov    WORD PTR [rax+0x1c],r14w
0x004073c2: mov    WORD PTR [rax+0x1e],r13w
0x004073c7: call   0x140404420
0x004073cc: mov    rdx,QWORD PTR [rip+0x228e745]        # 0x142695b18
0x004073d3: cmp    rdx,QWORD PTR [rip+0x228e746]        # 0x142695b20
0x004073da: je     0x1404073e9
0x004073dc: mov    QWORD PTR [rdx],rbx
0x004073df: add    QWORD PTR [rip+0x228e731],0x8        # 0x142695b18
0x004073e7: jmp    0x1404073f2
0x004073e9: lea    r8,[rbp-0x9]
0x004073ed: call   0x14041ea00
0x004073f2: movzx  r9d,r12w
0x004073f6: movzx  r8d,r13w
0x004073fa: movzx  edx,r14w
0x004073fe: mov    rcx,r15
0x00407401: call   0x1401418b0
0x00407406: test   al,al
0x00407408: jle    0x140407736
0x0040740e: test   r14w,r14w
0x00407412: js     0x140407593
0x00407418: movsx  eax,r14w
0x0040741c: cmp    eax,DWORD PTR [r15+0x116bec]
0x00407423: jge    0x140407593
0x00407429: test   r13w,r13w
0x0040742d: js     0x140407593
0x00407433: movsx  eax,r13w
0x00407437: mov    edi,eax
0x00407439: cmp    eax,DWORD PTR [r15+0x116bf0]
0x00407440: jge    0x140407593
0x00407446: test   r12w,r12w
0x0040744a: js     0x140407593
0x00407450: cmp    r12d,DWORD PTR [r15+0x116bf4]
0x00407457: jge    0x140407593
0x0040745d: mov    rcx,QWORD PTR [r15+0x116bb8]
0x00407464: test   rcx,rcx
0x00407467: je     0x140407597
0x0040746d: movsx  rax,r14w
0x00407471: shr    rax,0x4
0x00407475: movsx  rdx,r13w
0x00407479: shr    rdx,0x4
0x0040747d: mov    rax,QWORD PTR [rcx+rax*8]
0x00407481: mov    rax,QWORD PTR [rax+rdx*8]
0x00407485: mov    rdx,QWORD PTR [rax+r12*8]
0x00407489: test   rdx,rdx
0x0040748c: je     0x140407597
0x00407492: mov    eax,edi
0x00407494: movsx  esi,r14w
0x00407498: mov    ecx,esi
0x0040749a: and    eax,0xf
0x0040749d: and    ecx,0xf
0x004074a0: shl    rcx,0x4
0x004074a4: add    rcx,rax
0x004074a7: test   DWORD PTR [rdx+rcx*4+0x2a0],0x200000
0x004074b2: je     0x14040759b
0x004074b8: mov    ecx,0x50
0x004074bd: call   0x141534600
0x004074c2: xor    ecx,ecx
0x004074c4: mov    QWORD PTR [rbp-0x9],rax
0x004074c8: mov    rbx,rax
0x004074cb: xorps  xmm0,xmm0
0x004074ce: movups XMMWORD PTR [rax+0x28],xmm0
0x004074d2: mov    QWORD PTR [rax+0x38],rcx
0x004074d6: mov    QWORD PTR [rax+0x40],0xf
0x004074de: mov    BYTE PTR [rax+0x28],cl
0x004074e1: mov    QWORD PTR [rax],0xb
0x004074e8: mov    WORD PTR [rax+0x8],0x1
0x004074ee: mov    eax,0xffff8ad0
0x004074f3: mov    WORD PTR [rbx+0x20],ax
0x004074f7: mov    DWORD PTR [rbx+0x1c],0x8ad08ad0
0x004074fe: cmp    esi,DWORD PTR [rip+0x20daac8]        # 0x1424e1fcc
0x00407504: jge    0x140407573
0x00407506: movsx  eax,r13w
0x0040750a: cmp    eax,DWORD PTR [rip+0x20daac0]        # 0x1424e1fd0
0x00407510: mov    r8d,eax
0x00407513: jge    0x140407573
0x00407515: cmp    r12d,DWORD PTR [rip+0x20daab8]        # 0x1424e1fd4
0x0040751c: jge    0x140407573
0x0040751e: mov    r9,QWORD PTR [rip+0x20daa73]        # 0x1424e1f98
0x00407525: movzx  eax,r14w
0x00407529: movzx  ecx,r13w
0x0040752d: shr    ax,0x4
0x00407531: shr    cx,0x4
0x00407535: test   r9,r9
0x00407538: je     0x140407573
0x0040753a: movzx  eax,ax
0x0040753d: movzx  edx,cx
0x00407540: mov    rax,QWORD PTR [r9+rax*8]
0x00407544: mov    rax,QWORD PTR [rax+rdx*8]
0x00407548: mov    rdx,QWORD PTR [rax+r12*8]
0x0040754c: test   rdx,rdx
0x0040754f: je     0x140407573
0x00407551: mov    ecx,r14d
0x00407554: and    r8d,0xf
0x00407558: and    ecx,0xf
0x0040755b: shl    rcx,0x4
0x0040755f: add    rcx,r8
0x00407562: test   DWORD PTR [rdx+rcx*4+0x2a0],0x8000
0x0040756d: je     0x140407573
0x0040756f: or     DWORD PTR [rbx+0x4],0x1
0x00407573: movzx  r9d,r12w
0x00407577: movzx  r8d,r13w
0x0040757b: movzx  edx,r14w
0x0040757f: mov    rcx,r15
0x00407582: call   0x1401418b0
0x00407587: movsx  ecx,al
0x0040758a: mov    WORD PTR [rbx+0x8],cx
0x0040758e: jmp    0x140407708
0x00407593: movsx  edi,r13w
0x00407597: movsx  esi,r14w
0x0040759b: mov    ecx,0x50
0x004075a0: call   0x141534600
0x004075a5: xor    ecx,ecx
0x004075a7: mov    QWORD PTR [rbp-0x9],rax
0x004075ab: mov    rbx,rax
0x004075ae: xorps  xmm0,xmm0
0x004075b1: movzx  r9d,r12w
0x004075b5: movzx  r8d,r13w
0x004075b9: movups XMMWORD PTR [rax+0x28],xmm0
0x004075bd: mov    QWORD PTR [rax+0x38],rcx
0x004075c1: movzx  edx,r14w
0x004075c5: mov    QWORD PTR [rax+0x40],0xf
0x004075cd: mov    BYTE PTR [rax+0x28],cl
0x004075d0: mov    rcx,r15
0x004075d3: mov    QWORD PTR [rax],0xa
0x004075da: mov    WORD PTR [rax+0x8],0x1
0x004075e0: mov    eax,0xffff8ad0
0x004075e5: mov    WORD PTR [rbx+0x20],ax
0x004075e9: mov    DWORD PTR [rbx+0x1c],0x8ad08ad0
0x004075f0: call   0x1401418b0
0x004075f5: movsx  ecx,al
0x004075f8: mov    WORD PTR [rbx+0x8],cx
0x004075fc: test   r14w,r14w
0x00407600: js     0x140407681
0x00407602: cmp    esi,DWORD PTR [r15+0x116bec]
0x00407609: jge    0x140407681
0x0040760b: test   r13w,r13w
0x0040760f: js     0x140407681
0x00407611: cmp    edi,DWORD PTR [r15+0x116bf0]
0x00407618: jge    0x140407681
0x0040761a: test   r12w,r12w
0x0040761e: js     0x140407681
0x00407620: cmp    r12d,DWORD PTR [r15+0x116bf4]
0x00407627: jge    0x140407681
0x00407629: mov    rcx,QWORD PTR [r15+0x116bb8]
0x00407630: test   rcx,rcx
0x00407633: je     0x140407681
0x00407635: movsx  rax,r14w
0x00407639: shr    rax,0x4
0x0040763d: movsx  rdx,r13w
0x00407641: shr    rdx,0x4
0x00407645: mov    rax,QWORD PTR [rcx+rax*8]
0x00407649: mov    rax,QWORD PTR [rax+rdx*8]
0x0040764d: mov    r9,QWORD PTR [rax+r12*8]
0x00407651: test   r9,r9
0x00407654: je     0x140407681
0x00407656: movsx  edx,r14w
0x0040765a: mov    ecx,edx
0x0040765c: movsx  r8d,r13w
0x00407660: and    ecx,0xf
0x00407663: mov    eax,r8d
0x00407666: shl    rcx,0x4
0x0040766a: and    eax,0xf
0x0040766d: add    rcx,rax
0x00407670: cmp    DWORD PTR [r9+rcx*4+0x2a0],0x0
0x00407679: jge    0x14040768f
0x0040767b: or     DWORD PTR [rbx+0x4],0x2
0x0040767f: jmp    0x14040768f
0x00407681: movsx  edx,r14w
0x00407685: movsx  r8d,r13w
0x00407689: test   r14w,r14w
0x0040768d: js     0x140407708
0x0040768f: cmp    edx,DWORD PTR [r15+0x116bec]
0x00407696: jge    0x140407708
0x00407698: test   r13w,r13w
0x0040769c: js     0x140407708
0x0040769e: cmp    r8d,DWORD PTR [r15+0x116bf0]
0x004076a5: jge    0x140407708
0x004076a7: test   r12w,r12w
0x004076ab: js     0x140407708
0x004076ad: cmp    r12d,DWORD PTR [r15+0x116bf4]
0x004076b4: jge    0x140407708
0x004076b6: mov    rcx,QWORD PTR [r15+0x116bb8]
0x004076bd: test   rcx,rcx
0x004076c0: je     0x140407708
0x004076c2: movsx  rax,r14w
0x004076c6: shr    rax,0x4
0x004076ca: movsx  rdx,r13w
0x004076ce: shr    rdx,0x4
0x004076d2: mov    rax,QWORD PTR [rcx+rax*8]
0x004076d6: mov    rax,QWORD PTR [rax+rdx*8]
0x004076da: mov    r8,QWORD PTR [rax+r12*8]
0x004076de: test   r8,r8
0x004076e1: je     0x140407708
0x004076e3: mov    edx,r14d
0x004076e6: mov    ecx,r13d
0x004076e9: and    edx,0xf
0x004076ec: and    ecx,0xf
0x004076ef: shl    rdx,0x4
0x004076f3: add    rdx,rcx
0x004076f6: test   DWORD PTR [r8+rdx*4+0x2a0],0x40000000
0x00407702: je     0x140407708
0x00407704: or     DWORD PTR [rbx+0x4],0x1
0x00407708: mov    rcx,rbx
0x0040770b: call   0x140404420
0x00407710: mov    rdx,QWORD PTR [rip+0x228e401]        # 0x142695b18
0x00407717: cmp    rdx,QWORD PTR [rip+0x228e402]        # 0x142695b20
0x0040771e: je     0x14040772d
0x00407720: mov    QWORD PTR [rdx],rbx
0x00407723: add    QWORD PTR [rip+0x228e3ed],0x8        # 0x142695b18
0x0040772b: jmp    0x140407736
0x0040772d: lea    r8,[rbp-0x9]
0x00407731: call   0x14041ea00
0x00407736: mov    rbx,QWORD PTR [rbp-0x1]
0x0040773a: test   rbx,rbx
0x0040773d: je     0x1404079a8
0x00407743: movsx  r13d,r14w
0x00407747: and    r13d,0x8000000f
0x0040774e: jge    0x14040775a
0x00407750: dec    r13d
0x00407753: or     r13d,0xfffffff0
0x00407757: inc    r13d
0x0040775a: movsx  eax,WORD PTR [rbp+0x77]
0x0040775e: and    eax,0x8000000f
0x00407763: mov    DWORD PTR [rbp-0x15],eax
0x00407766: jge    0x140407772
0x00407768: dec    eax
0x0040776a: or     eax,0xfffffff0
0x0040776d: inc    eax
0x0040776f: mov    DWORD PTR [rbp-0x15],eax
0x00407772: mov    r12d,DWORD PTR [rbx+0x10]
0x00407776: sub    r12d,DWORD PTR [rbx+0x8]
0x0040777a: sar    r12,0x3
0x0040777e: sub    r12w,0x1
0x00407783: js     0x14040799e
0x00407789: movsxd r15,DWORD PTR [rbp-0x15]
0x0040778d: movsx  rdi,r12w
0x00407791: shl    rdi,0x3
0x00407795: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x004077a0: mov    rax,QWORD PTR [rbx+0x8]
0x004077a4: mov    rcx,QWORD PTR [rdi+rax*1]
0x004077a8: mov    rax,QWORD PTR [rcx]
0x004077ab: call   QWORD PTR [rax]
0x004077ad: cmp    ax,0x3
0x004077b1: jne    0x14040788d
0x004077b7: mov    rax,QWORD PTR [rbx+0x8]
0x004077bb: movsx  r14,r15w
0x004077bf: mov    rsi,QWORD PTR [rdi+rax*1]
0x004077c3: movsx  rax,r13w
0x004077c7: shl    rax,0x4
0x004077cb: add    rax,rsi
0x004077ce: add    r14,rax
0x004077d1: cmp    BYTE PTR [r14+0x12],0x0
0x004077d6: jbe    0x14040788d
0x004077dc: mov    ecx,0x50
0x004077e1: call   0x141534600
0x004077e6: mov    rbx,rax
0x004077e9: xorps  xmm0,xmm0
0x004077ec: mov    QWORD PTR [rbp-0x9],rbx
0x004077f0: movups XMMWORD PTR [rax+0x28],xmm0
0x004077f4: mov    QWORD PTR [rbx+0x40],0xf
0x004077fc: xor    eax,eax
0x004077fe: mov    QWORD PTR [rbx+0x38],rax
0x00407802: mov    BYTE PTR [rbx+0x28],al
0x00407805: mov    eax,0xffff8ad0
0x0040780a: mov    DWORD PTR [rbx],0x7
0x00407810: mov    QWORD PTR [rbx+0x4],0xffffffffffffffff
0x00407818: mov    DWORD PTR [rbx+0x1c],0x8ad08ad0
0x0040781f: mov    WORD PTR [rbx+0x20],ax
0x00407823: movsx  eax,WORD PTR [rsi+0x8]
0x00407827: mov    DWORD PTR [rbx+0xc],eax
0x0040782a: mov    eax,DWORD PTR [rsi+0xc]
0x0040782d: mov    DWORD PTR [rbx+0x10],eax
0x00407830: movsx  eax,WORD PTR [rsi+0x10]
0x00407834: mov    DWORD PTR [rbx+0x14],eax
0x00407837: movzx  eax,BYTE PTR [r14+0x12]
0x0040783c: cmp    al,0x64
0x0040783e: jb     0x140407849
0x00407840: mov    eax,DWORD PTR [rbp-0x11]
0x00407843: mov    WORD PTR [rbx+0x18],ax
0x00407847: jmp    0x14040785b
0x00407849: cmp    al,0x32
0x0040784b: jb     0x140407855
0x0040784d: mov    WORD PTR [rbx+0x18],0x2
0x00407853: jmp    0x14040785b
0x00407855: mov    WORD PTR [rbx+0x18],0x1
0x0040785b: mov    rcx,rbx
0x0040785e: call   0x140404420
0x00407863: mov    rdx,QWORD PTR [rip+0x228e2ae]        # 0x142695b18
0x0040786a: cmp    rdx,QWORD PTR [rip+0x228e2af]        # 0x142695b20
0x00407871: je     0x140407880
0x00407873: mov    QWORD PTR [rdx],rbx
0x00407876: add    QWORD PTR [rip+0x228e29a],0x8        # 0x142695b18
0x0040787e: jmp    0x140407889
0x00407880: lea    r8,[rbp-0x9]
0x00407884: call   0x14041ea00
0x00407889: mov    rbx,QWORD PTR [rbp-0x1]
0x0040788d: mov    rax,QWORD PTR [rbx+0x8]
0x00407891: mov    rcx,QWORD PTR [rdi+rax*1]
0x00407895: mov    rax,QWORD PTR [rcx]
0x00407898: call   QWORD PTR [rax]
0x0040789a: cmp    ax,0x6
0x0040789e: jne    0x140407986
0x004078a4: mov    rax,QWORD PTR [rbx+0x8]
0x004078a8: movsx  rcx,r13w
0x004078ac: shl    rcx,0x4
0x004078b0: mov    rsi,QWORD PTR [rdi+rax*1]
0x004078b4: movsx  rax,r15w
0x004078b8: add    rcx,rax
0x004078bb: cmp    DWORD PTR [rsi+rcx*4+0x18],0x0
0x004078c0: lea    r14,[rsi+rcx*4]
0x004078c4: jle    0x140407986
0x004078ca: mov    ecx,0x50
0x004078cf: call   0x141534600
0x004078d4: mov    rbx,rax
0x004078d7: mov    QWORD PTR [rbp-0x9],rax
0x004078db: xor    ecx,ecx
0x004078dd: xorps  xmm0,xmm0
0x004078e0: movups XMMWORD PTR [rax+0x28],xmm0
0x004078e4: mov    QWORD PTR [rax+0x38],rcx
0x004078e8: mov    QWORD PTR [rax+0x40],0xf
0x004078f0: mov    BYTE PTR [rax+0x28],cl
0x004078f3: mov    DWORD PTR [rax],0x7
0x004078f9: mov    QWORD PTR [rax+0x4],0xffffffffffffffff
0x00407901: mov    eax,0xffff8ad0
0x00407906: mov    WORD PTR [rbx+0x20],ax
0x0040790a: mov    DWORD PTR [rbx+0x1c],0x8ad08ad0
0x00407911: movsx  eax,WORD PTR [rsi+0x8]
0x00407915: mov    DWORD PTR [rbx+0x4],eax
0x00407918: movsx  eax,WORD PTR [rsi+0xa]
0x0040791c: mov    DWORD PTR [rbx+0x8],eax
0x0040791f: movsx  eax,WORD PTR [rsi+0xc]
0x00407923: mov    DWORD PTR [rbx+0xc],eax
0x00407926: mov    eax,DWORD PTR [rsi+0x10]
0x00407929: mov    DWORD PTR [rbx+0x10],eax
0x0040792c: mov    DWORD PTR [rbx+0x14],ecx
0x0040792f: mov    eax,DWORD PTR [r14+0x18]
0x00407933: cmp    eax,0x64
0x00407936: jl     0x140407941
0x00407938: mov    eax,DWORD PTR [rbp-0x11]
0x0040793b: mov    WORD PTR [rbx+0x18],ax
0x0040793f: jmp    0x140407954
0x00407941: cmp    eax,0x32
0x00407944: jl     0x14040794e
0x00407946: mov    WORD PTR [rbx+0x18],0x2
0x0040794c: jmp    0x140407954
0x0040794e: mov    WORD PTR [rbx+0x18],0x1
0x00407954: mov    rcx,rbx
0x00407957: call   0x140404420
0x0040795c: mov    rdx,QWORD PTR [rip+0x228e1b5]        # 0x142695b18
0x00407963: cmp    rdx,QWORD PTR [rip+0x228e1b6]        # 0x142695b20
0x0040796a: je     0x140407979
0x0040796c: mov    QWORD PTR [rdx],rbx
0x0040796f: add    QWORD PTR [rip+0x228e1a1],0x8        # 0x142695b18
0x00407977: jmp    0x140407982
0x00407979: lea    r8,[rbp-0x9]
0x0040797d: call   0x14041ea00
0x00407982: mov    rbx,QWORD PTR [rbp-0x1]
0x00407986: sub    rdi,0x8
0x0040798a: sub    r12w,0x1
0x0040798f: jns    0x1404077a0
0x00407995: mov    r15,QWORD PTR [rbp+0x67]
0x00407999: movzx  r14d,WORD PTR [rbp+0x6f]
0x0040799e: movzx  r12d,WORD PTR [rbp+0x7f]
0x004079a3: movzx  r13d,WORD PTR [rbp+0x77]
0x004079a8: test   r14w,r14w
0x004079ac: js     0x140407b08
0x004079b2: movsx  eax,r14w
0x004079b6: cmp    eax,DWORD PTR [r15+0x116bec]
0x004079bd: jge    0x140407b08
0x004079c3: test   r13w,r13w
0x004079c7: js     0x140407b08
0x004079cd: movsx  eax,r13w
0x004079d1: mov    r8d,eax
0x004079d4: cmp    eax,DWORD PTR [r15+0x116bf0]
0x004079db: jge    0x140407b08
0x004079e1: test   r12w,r12w
0x004079e5: js     0x140407b08
0x004079eb: movsx  eax,r12w
0x004079ef: cmp    eax,DWORD PTR [r15+0x116bf4]
0x004079f6: jge    0x140407b08
0x004079fc: mov    r9,QWORD PTR [r15+0x116bb8]
0x00407a03: movzx  eax,r14w
0x00407a07: movzx  ecx,r13w
0x00407a0b: shr    ax,0x4
0x00407a0f: shr    cx,0x4
0x00407a13: test   r9,r9
0x00407a16: je     0x140407b08
0x00407a1c: movzx  edx,cx
0x00407a1f: movzx  eax,ax
0x00407a22: movsx  rcx,r12w
0x00407a26: mov    rax,QWORD PTR [r9+rax*8]
0x00407a2a: mov    rax,QWORD PTR [rax+rdx*8]
0x00407a2e: mov    rdx,QWORD PTR [rax+rcx*8]
0x00407a32: test   rdx,rdx
0x00407a35: je     0x140407b08
0x00407a3b: mov    ecx,r14d
0x00407a3e: and    r8d,0xf
0x00407a42: and    ecx,0xf
0x00407a45: shl    rcx,0x4
0x00407a49: add    rcx,r8
0x00407a4c: test   BYTE PTR [rdx+rcx*4+0x2a0],0x8
0x00407a54: je     0x140407b08
0x00407a5a: movzx  r8d,r13w
0x00407a5e: movzx  ecx,r14w
0x00407a62: shr    rcx,0x4
0x00407a66: and    r8w,0xf
0x00407a6b: movzx  edx,r13w
0x00407a6f: shr    rdx,0x4
0x00407a73: movsx  esi,r14w
0x00407a77: mov    rax,QWORD PTR [r9+rcx*8]
0x00407a7b: movsx  rcx,r12w
0x00407a7f: mov    rax,QWORD PTR [rax+rdx*8]
0x00407a83: movzx  edx,si
0x00407a86: and    dx,0xf
0x00407a8a: mov    rcx,QWORD PTR [rax+rcx*8]
0x00407a8e: call   0x14052f210
0x00407a93: mov    r14,rax
0x00407a96: test   rax,rax
0x00407a99: je     0x140407b08
0x00407a9b: mov    ecx,DWORD PTR [rip+0x20da537]        # 0x1424e1fd8
0x00407aa1: lea    r11,[rip+0x223505c]        # 0x14263cb04
0x00407aa8: mov    r10d,DWORD PTR [rip+0x20da531]        # 0x1424e1fe0
0x00407aaf: lea    r8d,[rcx+rcx*2]
0x00407ab3: mov    ecx,DWORD PTR [rip+0x20da523]        # 0x1424e1fdc
0x00407ab9: shl    r8d,0x4
0x00407abd: lea    r9d,[rcx+rcx*2]
0x00407ac1: shl    r9d,0x4
0x00407ac5: lea    rcx,[rip+0x2234098]        # 0x14263bb64
0x00407acc: nop    DWORD PTR [rax+0x0]
0x00407ad0: mov    edi,DWORD PTR [rcx-0xfa0]
0x00407ad6: mov    ebx,DWORD PTR [rcx]
0x00407ad8: sub    edi,r8d
0x00407adb: mov    edx,DWORD PTR [rcx+0xfa0]
0x00407ae1: sub    ebx,r9d
0x00407ae4: sub    edx,r10d
0x00407ae7: cmp    esi,edi
0x00407ae9: jne    0x140407aff
0x00407aeb: movsx  eax,r13w
0x00407aef: cmp    eax,ebx
0x00407af1: jne    0x140407aff
0x00407af3: movsx  eax,r12w
0x00407af7: cmp    eax,edx
0x00407af9: je     0x140407c54
0x00407aff: add    rcx,0x4
0x00407b03: cmp    rcx,r11
0x00407b06: jl     0x140407ad0
0x00407b08: movzx  edi,WORD PTR [rbp+0x6f]
0x00407b0c: mov    r12d,0xffff8ad0
0x00407b12: mov    rax,QWORD PTR [rbp-0x1]
0x00407b16: test   rax,rax
0x00407b19: je     0x140407d7c
0x00407b1f: mov    rdx,QWORD PTR [rax+0x50]
0x00407b23: xor    ecx,ecx
0x00407b25: mov    rax,QWORD PTR [rax+0x58]
0x00407b29: mov    r14d,ecx
0x00407b2c: sub    rax,rdx
0x00407b2f: sar    rax,0x2
0x00407b33: test   rax,rax
0x00407b36: je     0x140407d7c
0x00407b3c: mov    esi,ecx
0x00407b3e: xchg   ax,ax
0x00407b40: mov    r11,QWORD PTR [r15+0x13f60]
0x00407b47: mov    rax,QWORD PTR [r15+0x13f68]
0x00407b4e: mov    r9d,DWORD PTR [rdx+rsi*1]
0x00407b52: sub    rax,r11
0x00407b55: sar    rax,0x3
0x00407b59: test   eax,eax
0x00407b5b: je     0x140407d4d
0x00407b61: cmp    r9d,0xffffffff
0x00407b65: je     0x140407d4d
0x00407b6b: sub    eax,0x1
0x00407b6e: mov    edx,ecx
0x00407b70: js     0x140407ba8
0x00407b72: nop    DWORD PTR [rax+0x0]
0x00407b76: data16 nop WORD PTR [rax+rax*1+0x0]
0x00407b80: lea    ecx,[rdx+rax*1]
0x00407b83: mov    r10d,eax
0x00407b86: sar    ecx,1
0x00407b88: movsxd rax,ecx
0x00407b8b: mov    rbx,QWORD PTR [r11+rax*8]
0x00407b8f: cmp    DWORD PTR [rbx+0x1c],r9d
0x00407b93: je     0x140407bab
0x00407b95: lea    eax,[rcx+0x1]
0x00407b98: cmovle edx,eax
0x00407b9b: lea    eax,[rcx-0x1]
0x00407b9e: cmovle eax,r10d
0x00407ba2: cmp    edx,eax
0x00407ba4: jle    0x140407b80
0x00407ba6: xor    ecx,ecx
0x00407ba8: mov    rbx,rcx
0x00407bab: test   rbx,rbx
0x00407bae: je     0x140407d4d
0x00407bb4: test   DWORD PTR [rbx+0x10],0x1000000
0x00407bbb: je     0x140407d4d
0x00407bc1: cmp    WORD PTR [rbx+0x8],di
0x00407bc5: jne    0x140407d4d
0x00407bcb: cmp    WORD PTR [rbx+0xa],r13w
0x00407bd0: jne    0x140407d4d
0x00407bd6: movzx  eax,WORD PTR [rbp+0x7f]
0x00407bda: cmp    WORD PTR [rbx+0xc],ax
0x00407bde: jne    0x140407d4d
0x00407be4: mov    ecx,0x50
0x00407be9: call   0x141534600
0x00407bee: mov    rdi,rax
0x00407bf1: xorps  xmm0,xmm0
0x00407bf4: mov    rcx,rdi
0x00407bf7: mov    QWORD PTR [rbp-0x9],rdi
0x00407bfb: movups XMMWORD PTR [rax+0x28],xmm0
0x00407bff: mov    QWORD PTR [rdi+0x40],0xf
0x00407c07: xor    eax,eax
0x00407c09: mov    QWORD PTR [rdi+0x38],rax
0x00407c0d: mov    BYTE PTR [rdi+0x28],al
0x00407c10: mov    DWORD PTR [rdi+0x4],0xffffffff
0x00407c17: mov    DWORD PTR [rdi],eax
0x00407c19: mov    DWORD PTR [rdi+0x1c],0x8ad08ad0
0x00407c20: mov    WORD PTR [rdi+0x20],r12w
0x00407c25: mov    eax,DWORD PTR [rbx+0x1c]
0x00407c28: mov    DWORD PTR [rdi+0x4],eax
0x00407c2b: call   0x140404420
0x00407c30: mov    rdx,QWORD PTR [rip+0x228dee1]        # 0x142695b18
0x00407c37: cmp    rdx,QWORD PTR [rip+0x228dee2]        # 0x142695b20
0x00407c3e: je     0x140407d44
0x00407c44: mov    QWORD PTR [rdx],rdi
0x00407c47: add    QWORD PTR [rip+0x228dec9],0x8        # 0x142695b18
0x00407c4f: jmp    0x140407d4d
0x00407c54: and    edi,0x8000000f
0x00407c5a: jge    0x140407c63
0x00407c5c: dec    edi
0x00407c5e: or     edi,0xfffffff0
0x00407c61: inc    edi
0x00407c63: and    ebx,0x8000000f
0x00407c69: jge    0x140407c72
0x00407c6b: dec    ebx
0x00407c6d: or     ebx,0xfffffff0
0x00407c70: inc    ebx
0x00407c72: mov    ecx,0x50
0x00407c77: call   0x141534600
0x00407c7c: mov    rsi,rax
0x00407c7f: movsx  rdx,di
0x00407c83: movzx  edi,WORD PTR [rbp+0x6f]
0x00407c87: xorps  xmm0,xmm0
0x00407c8a: shl    rdx,0x4
0x00407c8e: mov    r12d,0xffff8ad0
0x00407c94: movups XMMWORD PTR [rax+0x28],xmm0
0x00407c98: mov    QWORD PTR [rsi+0x40],0xf
0x00407ca0: xor    eax,eax
0x00407ca2: mov    QWORD PTR [rsi+0x38],rax
0x00407ca6: mov    rcx,rsi
0x00407ca9: mov    BYTE PTR [rsi+0x28],al
0x00407cac: mov    DWORD PTR [rsi],0xc
0x00407cb2: mov    DWORD PTR [rsi+0x1c],0x8ad08ad0
0x00407cb9: mov    WORD PTR [rsi+0x20],r12w
0x00407cbe: movsx  rax,bx
0x00407cc2: add    rdx,rax
0x00407cc5: mov    QWORD PTR [rbp-0x9],rsi
0x00407cc9: movzx  eax,WORD PTR [r14+rdx*2+0x8]
0x00407ccf: mov    WORD PTR [rsi+0x4],ax
0x00407cd3: movzx  eax,BYTE PTR [r14+rdx*1+0x208]
0x00407cdc: mov    BYTE PTR [rsi+0x6],al
0x00407cdf: mov    eax,DWORD PTR [r14+rdx*4+0x308]
0x00407ce7: mov    DWORD PTR [rsi+0x8],eax
0x00407cea: mov    eax,DWORD PTR [r14+rdx*4+0x708]
0x00407cf2: mov    DWORD PTR [rsi+0xc],eax
0x00407cf5: mov    eax,DWORD PTR [r14+rdx*4+0xb08]
0x00407cfd: mov    DWORD PTR [rsi+0x10],eax
0x00407d00: movzx  eax,WORD PTR [rbp+0x7f]
0x00407d04: mov    WORD PTR [rsi+0x1c],di
0x00407d08: mov    WORD PTR [rsi+0x1e],r13w
0x00407d0d: mov    WORD PTR [rsi+0x20],ax
0x00407d11: call   0x140404420
0x00407d16: mov    rdx,QWORD PTR [rip+0x228ddfb]        # 0x142695b18
0x00407d1d: cmp    rdx,QWORD PTR [rip+0x228ddfc]        # 0x142695b20
0x00407d24: je     0x140407d36
0x00407d26: mov    QWORD PTR [rdx],rsi
0x00407d29: add    QWORD PTR [rip+0x228dde7],0x8        # 0x142695b18
0x00407d31: jmp    0x140407b12
0x00407d36: lea    r8,[rbp-0x9]
0x00407d3a: call   0x14041ea00
0x00407d3f: jmp    0x140407b12
0x00407d44: lea    r8,[rbp-0x9]
0x00407d48: call   0x14041ea00
0x00407d4d: mov    rax,QWORD PTR [rbp-0x1]
0x00407d51: inc    r14d
0x00407d54: movzx  edi,WORD PTR [rbp+0x6f]
0x00407d58: add    rsi,0x4
0x00407d5c: mov    rdx,QWORD PTR [rax+0x50]
0x00407d60: mov    rcx,QWORD PTR [rax+0x58]
0x00407d64: sub    rcx,rdx
0x00407d67: movsxd rax,r14d
0x00407d6a: sar    rcx,0x2
0x00407d6e: cmp    rax,rcx
0x00407d71: mov    ecx,0x0
0x00407d76: jb     0x140407b40
0x00407d7c: mov    rsi,QWORD PTR [rsp+0x80]
0x00407d84: mov    rdi,QWORD PTR [rsp+0x78]
0x00407d89: add    rsp,0x88
0x00407d90: pop    r15
0x00407d92: pop    r14
0x00407d94: pop    r13
0x00407d96: pop    r12
0x00407d98: pop    rbx
0x00407d99: pop    rbp
0x00407d9a: ret
0x00407d9b: nop
0x00407d9c: pop    rax
0x00407d9d: jo     0x140407ddf
0x00407d9f: add    BYTE PTR [rax+0x70],bl
0x00407da2: rex add BYTE PTR [rax+0x70],bl
0x00407da6: rex add BYTE PTR [rax+0x70],bl
0x00407daa: rex add BYTE PTR [rax+0x70],bl
0x00407dae: rex add BYTE PTR [rax+0x70],bl
0x00407db2: rex add BYTE PTR [rax+0x70],bl
0x00407db6: rex add BYTE PTR [rax+0x70],bl
0x00407dba: rex add BYTE PTR [rax+0x70],bl
0x00407dbe: rex add BYTE PTR [rax+0x70],bl
0x00407dc2: rex add BYTE PTR [rax+0x70],bl
0x00407dc6: rex add BYTE PTR [rax+0x70],bl
0x00407dca: rex add BYTE PTR [rax+0x70],bl
0x00407dce: rex add BYTE PTR [rax+0x70],bl
0x00407dd2: rex
