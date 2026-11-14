; reference PE:6aea05a1:02734000; mod-load-dialog; complete PE unwind owner RVA 0x7e0450..0x7e1318
0x7e0450: mov    QWORD PTR [rsp+0x10],rbx
0x7e0455: mov    QWORD PTR [rsp+0x18],rsi
0x7e045a: mov    QWORD PTR [rsp+0x20],rdi
0x7e045f: push   rbp
0x7e0460: push   r12
0x7e0462: push   r13
0x7e0464: push   r14
0x7e0466: push   r15
0x7e0468: lea    rbp,[rsp-0x37]
0x7e046d: sub    rsp,0xc0
0x7e0474: mov    rax,QWORD PTR [rip+0x10ddbc5]        # 0x1418be040
0x7e047b: xor    rax,rsp
0x7e047e: mov    QWORD PTR [rbp+0x27],rax
0x7e0482: mov    r14d,r9d
0x7e0485: mov    ebx,r8d
0x7e0488: mov    edi,edx
0x7e048a: mov    rsi,rcx
0x7e048d: mov    QWORD PTR [rbp-0x41],rcx
0x7e0491: movsxd r10,DWORD PTR [rcx+0x8]
0x7e0495: test   r10d,r10d
0x7e0498: js     0x1407e12eb
0x7e049e: mov    rax,QWORD PTR [rip+0x1e80a43]        # 0x142660ee8
0x7e04a5: sub    rax,QWORD PTR [rip+0x1e80a34]        # 0x142660ee0
0x7e04ac: sar    rax,0x3
0x7e04b0: cmp    r10d,eax
0x7e04b3: jge    0x1407e12eb
0x7e04b9: mov    rdx,QWORD PTR [rip+0x1e80aa0]        # 0x142660f60
0x7e04c0: mov    rdx,QWORD PTR [rdx+r10*8]
0x7e04c4: lea    rcx,[rbp+0x7]
0x7e04c8: call   0x140070c00
0x7e04cd: nop
0x7e04ce: movsxd rax,DWORD PTR [rsi+0x8]
0x7e04d2: mov    rdx,QWORD PTR [rip+0x1e80a9f]        # 0x142660f78
0x7e04d9: mov    rdx,QWORD PTR [rdx+rax*8]
0x7e04dd: lea    rcx,[rbp-0x19]
0x7e04e1: call   0x140070c00
0x7e04e6: nop
0x7e04e7: cmp    BYTE PTR [rsi+0xc],0x0
0x7e04eb: je     0x1407e0ed8
0x7e04f1: lea    eax,[rdi+rbx*1]
0x7e04f4: cdq
0x7e04f5: sub    eax,edx
0x7e04f7: sar    eax,1
0x7e04f9: lea    edi,[rax-0x2a]
0x7e04fc: lea    ebx,[rdi+0x54]
0x7e04ff: lea    eax,[r14-0xf]
0x7e0503: mov    DWORD PTR [rbp-0x69],eax
0x7e0506: lea    r13d,[r14-0x7]
0x7e050a: lea    r15d,[rdi+0x2]
0x7e050e: lea    r14d,[r15+0x9]
0x7e0512: lea    ecx,[r14+0x2]
0x7e0516: mov    DWORD PTR [rbp-0x65],ecx
0x7e0519: lea    r12d,[rcx+0xd]
0x7e051d: lea    ecx,[r12+0x2]
0x7e0522: mov    DWORD PTR [rbp-0x61],ecx
0x7e0525: add    ecx,0xf
0x7e0528: mov    DWORD PTR [rbp-0x49],ecx
0x7e052b: add    ecx,0x2
0x7e052e: mov    DWORD PTR [rbp-0x5d],ecx
0x7e0531: add    ecx,0x13
0x7e0534: mov    DWORD PTR [rbp-0x45],ecx
0x7e0537: add    ecx,0x2
0x7e053a: mov    DWORD PTR [rbp-0x59],ecx
0x7e053d: add    ecx,0x10
0x7e0540: mov    DWORD PTR [rbp-0x55],ecx
0x7e0543: lea    ecx,[r13-0x3]
0x7e0547: mov    DWORD PTR [rbp-0x51],ecx
0x7e054a: lea    ecx,[r13-0x1]
0x7e054e: mov    DWORD PTR [rbp-0x4d],ecx
0x7e0551: mov    DWORD PTR [rip+0x1e8c3a1],0x1000006        # 0x14266c8fc
0x7e055b: mov    esi,eax
0x7e055d: cmp    eax,r13d
0x7e0560: jg     0x1407e0631
0x7e0566: mov    r14d,eax
0x7e0569: nop    DWORD PTR [rax+0x0]
0x7e0570: mov    r11d,edi
0x7e0573: cmp    edi,ebx
0x7e0575: jg     0x1407e061f
0x7e057b: nop    DWORD PTR [rax+rax*1+0x0]
0x7e0580: mov    DWORD PTR [rip+0x1e8c36d],r11d        # 0x14266c8f4
0x7e0587: mov    DWORD PTR [rip+0x1e8c36b],esi        # 0x14266c8f8
0x7e058d: cmp    esi,r14d
0x7e0590: jne    0x1407e05bb
0x7e0592: cmp    r11d,edi
0x7e0595: jne    0x1407e059f
0x7e0597: mov    edx,DWORD PTR [rip+0x1c12b8f]        # 0x1423f312c
0x7e059d: jmp    0x1407e0607
0x7e059f: lea    rcx,[rip+0x1e8c2ca]        # 0x14266c870
0x7e05a6: cmp    r11d,ebx
0x7e05a9: jne    0x1407e05b3
0x7e05ab: mov    edx,DWORD PTR [rip+0x1c12b83]        # 0x1423f3134
0x7e05b1: jmp    0x1407e060e
0x7e05b3: mov    edx,DWORD PTR [rip+0x1c12b77]        # 0x1423f3130
0x7e05b9: jmp    0x1407e060e
0x7e05bb: cmp    esi,r13d
0x7e05be: jne    0x1407e05e9
0x7e05c0: cmp    r11d,edi
0x7e05c3: jne    0x1407e05cd
0x7e05c5: mov    edx,DWORD PTR [rip+0x1c12b79]        # 0x1423f3144
0x7e05cb: jmp    0x1407e0607
0x7e05cd: lea    rcx,[rip+0x1e8c29c]        # 0x14266c870
0x7e05d4: cmp    r11d,ebx
0x7e05d7: jne    0x1407e05e1
0x7e05d9: mov    edx,DWORD PTR [rip+0x1c12b6d]        # 0x1423f314c
0x7e05df: jmp    0x1407e060e
0x7e05e1: mov    edx,DWORD PTR [rip+0x1c12b61]        # 0x1423f3148
0x7e05e7: jmp    0x1407e060e
0x7e05e9: cmp    r11d,edi
0x7e05ec: jne    0x1407e05f6
0x7e05ee: mov    edx,DWORD PTR [rip+0x1c12b44]        # 0x1423f3138
0x7e05f4: jmp    0x1407e0607
0x7e05f6: cmp    r11d,ebx
0x7e05f9: mov    edx,DWORD PTR [rip+0x1c12b41]        # 0x1423f3140
0x7e05ff: je     0x1407e0607
0x7e0601: mov    edx,DWORD PTR [rip+0x1c12b35]        # 0x1423f313c
0x7e0607: lea    rcx,[rip+0x1e8c262]        # 0x14266c870
0x7e060e: call   0x140af4570
0x7e0613: inc    r11d
0x7e0616: cmp    r11d,ebx
0x7e0619: jle    0x1407e0580
0x7e061f: inc    esi
0x7e0621: cmp    esi,r13d
0x7e0624: jle    0x1407e0570
0x7e062a: lea    r14d,[r15+0x9]
0x7e062e: mov    eax,DWORD PTR [rbp-0x69]
0x7e0631: mov    DWORD PTR [rip+0x1e8c2c1],0x1010007        # 0x14266c8fc
0x7e063b: mov    DWORD PTR [rip+0x1e8c2b2],r15d        # 0x14266c8f4
0x7e0642: add    eax,0x2
0x7e0645: mov    DWORD PTR [rip+0x1e8c2ad],eax        # 0x14266c8f8
0x7e064b: xorps  xmm0,xmm0
0x7e064e: movups XMMWORD PTR [rbp-0x39],xmm0
0x7e0652: mov    ecx,0x30
0x7e0657: call   0x140071e00
0x7e065c: mov    rcx,rax
0x7e065f: mov    QWORD PTR [rbp-0x39],rax
0x7e0663: movdqa xmm0,XMMWORD PTR [rip+0xfcb5f5]        # 0x1417abc60
0x7e066b: movdqu XMMWORD PTR [rbp-0x29],xmm0
0x7e0670: movups xmm0,XMMWORD PTR [rip+0xeecfc1]        # 0x1416cd638 ; vector='Newer compatible'
0x7e0677: movups XMMWORD PTR [rax],xmm0
0x7e067a: movups xmm1,XMMWORD PTR [rip+0xeecfc7]        # 0x1416cd648 ; vector=' version of mod '
0x7e0681: movups XMMWORD PTR [rax+0x10],xmm1
0x7e0685: movsd  xmm0,QWORD PTR [rip+0xeecfcb]        # 0x1416cd658 ; cstring='detected:'
0x7e068d: movsd  QWORD PTR [rax+0x20],xmm0
0x7e0692: movzx  eax,BYTE PTR [rip+0xeecfc7]        # 0x1416cd660 ; cstring=':'
0x7e0699: mov    BYTE PTR [rcx+0x28],al
0x7e069c: mov    BYTE PTR [rcx+0x29],0x0
0x7e06a0: xor    r9d,r9d
0x7e06a3: lea    rdx,[rbp-0x39]
0x7e06a7: lea    rcx,[rip+0x1e8c1c2]        # 0x14266c870
0x7e06ae: call   0x140af3400
0x7e06b3: nop
0x7e06b4: mov    rdx,QWORD PTR [rbp-0x21]
0x7e06b8: cmp    rdx,0xf
0x7e06bc: jbe    0x1407e06ef
0x7e06be: inc    rdx
0x7e06c1: mov    rcx,QWORD PTR [rbp-0x39]
0x7e06c5: mov    rax,rcx
0x7e06c8: cmp    rdx,0x1000
0x7e06cf: jb     0x1407e06ea
0x7e06d1: add    rdx,0x27
0x7e06d5: mov    rcx,QWORD PTR [rcx-0x8]
0x7e06d9: sub    rax,rcx
0x7e06dc: add    rax,0xfffffffffffffff8
0x7e06e0: cmp    rax,0x1f
0x7e06e4: ja     0x1407e12cb
0x7e06ea: call   0x1415530d0
0x7e06ef: mov    DWORD PTR [rip+0x1e8c1fe],r15d        # 0x14266c8f4
0x7e06f6: mov    eax,DWORD PTR [rbp-0x69]
0x7e06f9: add    eax,0x3
0x7e06fc: mov    DWORD PTR [rip+0x1e8c1f6],eax        # 0x14266c8f8
0x7e0702: xor    r9d,r9d
0x7e0705: lea    rdx,[rbp+0x7]
0x7e0709: lea    rcx,[rip+0x1e8c160]        # 0x14266c870
0x7e0710: call   0x140af3400
0x7e0715: xorps  xmm0,xmm0
0x7e0718: movups XMMWORD PTR [rbp-0x39],xmm0
0x7e071c: movdqa xmm1,XMMWORD PTR [rip+0xfcb2bc]        # 0x1417ab9e0
0x7e0724: movdqu XMMWORD PTR [rbp-0x29],xmm1
0x7e0729: mov    WORD PTR [rbp-0x39],0x20
0x7e072f: xor    r9d,r9d
0x7e0732: lea    rdx,[rbp-0x39]
0x7e0736: lea    rcx,[rip+0x1e8c133]        # 0x14266c870
0x7e073d: call   0x140af3400
0x7e0742: nop
0x7e0743: lea    rcx,[rbp-0x39]
0x7e0747: call   0x140070e80
0x7e074c: mov    rsi,QWORD PTR [rbp-0x41]
0x7e0750: mov    rdx,QWORD PTR [rsi+0x18]
0x7e0754: test   rdx,rdx
0x7e0757: je     0x1407e0899
0x7e075d: add    rdx,0x68
0x7e0761: xor    r9d,r9d
0x7e0764: lea    rcx,[rip+0x1e8c105]        # 0x14266c870
0x7e076b: call   0x140af3400
0x7e0770: xorps  xmm0,xmm0
0x7e0773: movups XMMWORD PTR [rbp-0x39],xmm0
0x7e0777: movdqa xmm1,XMMWORD PTR [rip+0xfcb311]        # 0x1417aba90
0x7e077f: movdqu XMMWORD PTR [rbp-0x29],xmm1
0x7e0784: movsd  xmm0,QWORD PTR [rip+0xeecedc]        # 0x1416cd668 ; cstring=' (save uses '
0x7e078c: movsd  QWORD PTR [rbp-0x39],xmm0
0x7e0791: mov    eax,DWORD PTR [rip+0xeeced9]        # 0x1416cd670 ; cstring='ses '
0x7e0797: mov    DWORD PTR [rbp-0x31],eax
0x7e079a: mov    BYTE PTR [rbp-0x2d],0x0
0x7e079e: xor    r9d,r9d
0x7e07a1: lea    rdx,[rbp-0x39]
0x7e07a5: lea    rcx,[rip+0x1e8c0c4]        # 0x14266c870
0x7e07ac: call   0x140af3400
0x7e07b1: nop
0x7e07b2: lea    rcx,[rbp-0x39]
0x7e07b6: call   0x140070e80
0x7e07bb: xor    r9d,r9d
0x7e07be: lea    rdx,[rbp-0x19]
0x7e07c2: lea    rcx,[rip+0x1e8c0a7]        # 0x14266c870
0x7e07c9: call   0x140af3400
0x7e07ce: cmp    QWORD PTR [rsi+0x20],0x0
0x7e07d3: jne    0x1407e0862
0x7e07d9: xorps  xmm0,xmm0
0x7e07dc: movups XMMWORD PTR [rbp-0x39],xmm0
0x7e07e0: movdqa xmm1,XMMWORD PTR [rip+0xfcb298]        # 0x1417aba80
0x7e07e8: movdqu XMMWORD PTR [rbp-0x29],xmm1
0x7e07ed: movsd  xmm0,QWORD PTR [rip+0xeece2b]        # 0x1416cd620 ; cstring=', not found'
0x7e07f5: movsd  QWORD PTR [rbp-0x39],xmm0
0x7e07fa: movzx  eax,WORD PTR [rip+0xeece27]        # 0x1416cd628 ; cstring='und'
0x7e0801: mov    WORD PTR [rbp-0x31],ax
0x7e0805: movzx  eax,BYTE PTR [rip+0xeece1e]        # 0x1416cd62a ; cstring='d'
0x7e080c: mov    BYTE PTR [rbp-0x2f],al
0x7e080f: mov    BYTE PTR [rbp-0x2e],0x0
0x7e0813: xor    r9d,r9d
0x7e0816: lea    rdx,[rbp-0x39]
0x7e081a: lea    rcx,[rip+0x1e8c04f]        # 0x14266c870
0x7e0821: call   0x140af3400
0x7e0826: nop
0x7e0827: mov    rdx,QWORD PTR [rbp-0x21]
0x7e082b: cmp    rdx,0xf
0x7e082f: jbe    0x1407e0862
0x7e0831: inc    rdx
0x7e0834: mov    rcx,QWORD PTR [rbp-0x39]
0x7e0838: mov    rax,rcx
0x7e083b: cmp    rdx,0x1000
0x7e0842: jb     0x1407e085d
0x7e0844: add    rdx,0x27
0x7e0848: mov    rcx,QWORD PTR [rcx-0x8]
0x7e084c: sub    rax,rcx
0x7e084f: add    rax,0xfffffffffffffff8
0x7e0853: cmp    rax,0x1f
0x7e0857: ja     0x1407e12cb
0x7e085d: call   0x1415530d0
0x7e0862: xorps  xmm0,xmm0
0x7e0865: movups XMMWORD PTR [rbp-0x39],xmm0
0x7e0869: movdqa xmm1,XMMWORD PTR [rip+0xfcb16f]        # 0x1417ab9e0
0x7e0871: movdqu XMMWORD PTR [rbp-0x29],xmm1
0x7e0876: mov    WORD PTR [rbp-0x39],0x29
0x7e087c: xor    r9d,r9d
0x7e087f: lea    rdx,[rbp-0x39]
0x7e0883: lea    rcx,[rip+0x1e8bfe6]        # 0x14266c870
0x7e088a: call   0x140af3400
0x7e088f: nop
0x7e0890: lea    rcx,[rbp-0x39]
0x7e0894: call   0x140070e80
0x7e0899: mov    r13d,DWORD PTR [rbp-0x51]
0x7e089d: mov    ebx,r13d
0x7e08a0: mov    edi,DWORD PTR [rbp-0x4d]
0x7e08a3: cmp    r13d,edi
0x7e08a6: jg     0x1407e0968
0x7e08ac: nop    DWORD PTR [rax+0x0]
0x7e08b0: mov    r11d,r15d
0x7e08b3: cmp    r15d,r14d
0x7e08b6: jg     0x1407e095e
0x7e08bc: nop    DWORD PTR [rax+0x0]
0x7e08c0: mov    DWORD PTR [rip+0x1e8c02d],r11d        # 0x14266c8f4
0x7e08c7: mov    DWORD PTR [rip+0x1e8c02b],ebx        # 0x14266c8f8
0x7e08cd: cmp    ebx,r13d
0x7e08d0: jne    0x1407e08fb
0x7e08d2: cmp    r11d,r15d
0x7e08d5: jne    0x1407e08df
0x7e08d7: mov    edx,DWORD PTR [rip+0x1c1264b]        # 0x1423f2f28
0x7e08dd: jmp    0x1407e0946
0x7e08df: lea    rcx,[rip+0x1e8bf8a]        # 0x14266c870
0x7e08e6: cmp    r11d,r14d
0x7e08e9: jne    0x1407e08f3
0x7e08eb: mov    edx,DWORD PTR [rip+0x1c1263f]        # 0x1423f2f30
0x7e08f1: jmp    0x1407e094d
0x7e08f3: mov    edx,DWORD PTR [rip+0x1c12633]        # 0x1423f2f2c
0x7e08f9: jmp    0x1407e094d
0x7e08fb: cmp    ebx,edi
0x7e08fd: jne    0x1407e0928
0x7e08ff: cmp    r11d,r15d
0x7e0902: jne    0x1407e090c
0x7e0904: mov    edx,DWORD PTR [rip+0x1c12636]        # 0x1423f2f40
0x7e090a: jmp    0x1407e0946
0x7e090c: lea    rcx,[rip+0x1e8bf5d]        # 0x14266c870
0x7e0913: cmp    r11d,r14d
0x7e0916: jne    0x1407e0920
0x7e0918: mov    edx,DWORD PTR [rip+0x1c1262a]        # 0x1423f2f48
0x7e091e: jmp    0x1407e094d
0x7e0920: mov    edx,DWORD PTR [rip+0x1c1261e]        # 0x1423f2f44
0x7e0926: jmp    0x1407e094d
0x7e0928: cmp    r11d,r15d
0x7e092b: jne    0x1407e0935
0x7e092d: mov    edx,DWORD PTR [rip+0x1c12601]        # 0x1423f2f34
0x7e0933: jmp    0x1407e0946
0x7e0935: cmp    r11d,r14d
0x7e0938: mov    edx,DWORD PTR [rip+0x1c125fe]        # 0x1423f2f3c
0x7e093e: je     0x1407e0946
0x7e0940: mov    edx,DWORD PTR [rip+0x1c125f2]        # 0x1423f2f38
0x7e0946: lea    rcx,[rip+0x1e8bf23]        # 0x14266c870
0x7e094d: call   0x140af4570
0x7e0952: inc    r11d
0x7e0955: cmp    r11d,r14d
0x7e0958: jle    0x1407e08c0
0x7e095e: inc    ebx
0x7e0960: cmp    ebx,edi
0x7e0962: jle    0x1407e08b0
0x7e0968: lea    eax,[r15+0x2]
0x7e096c: mov    DWORD PTR [rip+0x1e8bf82],eax        # 0x14266c8f4
0x7e0972: lea    r14d,[r13+0x1]
0x7e0976: mov    DWORD PTR [rip+0x1e8bf7b],r14d        # 0x14266c8f8
0x7e097d: xorps  xmm0,xmm0
0x7e0980: movups XMMWORD PTR [rbp-0x39],xmm0
0x7e0984: movdqa xmm1,XMMWORD PTR [rip+0xfcb0a4]        # 0x1417aba30
0x7e098c: movdqu XMMWORD PTR [rbp-0x29],xmm1
0x7e0991: mov    eax,DWORD PTR [rip+0xeecc95]        # 0x1416cd62c ; cstring='Update'
0x7e0997: mov    DWORD PTR [rbp-0x39],eax
0x7e099a: movzx  eax,WORD PTR [rip+0xeecc8f]        # 0x1416cd630 ; cstring='te'
0x7e09a1: mov    WORD PTR [rbp-0x35],ax
0x7e09a5: mov    BYTE PTR [rbp-0x33],0x0
0x7e09a9: xor    r9d,r9d
0x7e09ac: lea    rdx,[rbp-0x39]
0x7e09b0: lea    rcx,[rip+0x1e8beb9]        # 0x14266c870
0x7e09b7: call   0x140af3400
0x7e09bc: nop
0x7e09bd: lea    rcx,[rbp-0x39]
0x7e09c1: call   0x140070e80
0x7e09c6: mov    ebx,r13d
0x7e09c9: cmp    r13d,edi
0x7e09cc: jg     0x1407e0a9b
0x7e09d2: mov    eax,DWORD PTR [rbp-0x65]
0x7e09d5: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x7e09e0: mov    r11d,eax
0x7e09e3: cmp    eax,r12d
0x7e09e6: jg     0x1407e0a91
0x7e09ec: nop    DWORD PTR [rax+0x0]
0x7e09f0: mov    DWORD PTR [rip+0x1e8befd],r11d        # 0x14266c8f4
0x7e09f7: mov    DWORD PTR [rip+0x1e8befb],ebx        # 0x14266c8f8
0x7e09fd: cmp    ebx,r13d
0x7e0a00: jne    0x1407e0a2b
0x7e0a02: cmp    r11d,eax
0x7e0a05: jne    0x1407e0a0f
0x7e0a07: mov    edx,DWORD PTR [rip+0x1c1251b]        # 0x1423f2f28
0x7e0a0d: jmp    0x1407e0a76
0x7e0a0f: lea    rcx,[rip+0x1e8be5a]        # 0x14266c870
0x7e0a16: cmp    r11d,r12d
0x7e0a19: jne    0x1407e0a23
0x7e0a1b: mov    edx,DWORD PTR [rip+0x1c1250f]        # 0x1423f2f30
0x7e0a21: jmp    0x1407e0a7d
0x7e0a23: mov    edx,DWORD PTR [rip+0x1c12503]        # 0x1423f2f2c
0x7e0a29: jmp    0x1407e0a7d
0x7e0a2b: cmp    ebx,edi
0x7e0a2d: jne    0x1407e0a58
0x7e0a2f: cmp    r11d,eax
0x7e0a32: jne    0x1407e0a3c
0x7e0a34: mov    edx,DWORD PTR [rip+0x1c12506]        # 0x1423f2f40
0x7e0a3a: jmp    0x1407e0a76
0x7e0a3c: lea    rcx,[rip+0x1e8be2d]        # 0x14266c870
0x7e0a43: cmp    r11d,r12d
0x7e0a46: jne    0x1407e0a50
0x7e0a48: mov    edx,DWORD PTR [rip+0x1c124fa]        # 0x1423f2f48
0x7e0a4e: jmp    0x1407e0a7d
0x7e0a50: mov    edx,DWORD PTR [rip+0x1c124ee]        # 0x1423f2f44
0x7e0a56: jmp    0x1407e0a7d
0x7e0a58: cmp    r11d,eax
0x7e0a5b: jne    0x1407e0a65
0x7e0a5d: mov    edx,DWORD PTR [rip+0x1c124d1]        # 0x1423f2f34
0x7e0a63: jmp    0x1407e0a76
0x7e0a65: cmp    r11d,r12d
0x7e0a68: mov    edx,DWORD PTR [rip+0x1c124ce]        # 0x1423f2f3c
0x7e0a6e: je     0x1407e0a76
0x7e0a70: mov    edx,DWORD PTR [rip+0x1c124c2]        # 0x1423f2f38
0x7e0a76: lea    rcx,[rip+0x1e8bdf3]        # 0x14266c870
0x7e0a7d: call   0x140af4570
0x7e0a82: inc    r11d
0x7e0a85: cmp    r11d,r12d
0x7e0a88: mov    eax,DWORD PTR [rbp-0x65]
0x7e0a8b: jle    0x1407e09f0
0x7e0a91: inc    ebx
0x7e0a93: cmp    ebx,edi
0x7e0a95: jle    0x1407e09e0
0x7e0a9b: mov    eax,DWORD PTR [rbp-0x65]
0x7e0a9e: add    eax,0x2
0x7e0aa1: mov    DWORD PTR [rip+0x1e8be4d],eax        # 0x14266c8f4
0x7e0aa7: mov    DWORD PTR [rip+0x1e8be4a],r14d        # 0x14266c8f8
0x7e0aae: xorps  xmm0,xmm0
0x7e0ab1: movups XMMWORD PTR [rbp-0x39],xmm0
0x7e0ab5: movdqa xmm1,XMMWORD PTR [rip+0xfcafb3]        # 0x1417aba70
0x7e0abd: movdqu XMMWORD PTR [rbp-0x29],xmm1
0x7e0ac2: movsd  xmm0,QWORD PTR [rip+0xeecbd6]        # 0x1416cd6a0 ; cstring='Update all'
0x7e0aca: movsd  QWORD PTR [rbp-0x39],xmm0
0x7e0acf: movzx  eax,WORD PTR [rip+0xeecbd2]        # 0x1416cd6a8 ; cstring='ll'
0x7e0ad6: mov    WORD PTR [rbp-0x31],ax
0x7e0ada: mov    BYTE PTR [rbp-0x2f],0x0
0x7e0ade: xor    r9d,r9d
0x7e0ae1: lea    rdx,[rbp-0x39]
0x7e0ae5: lea    rcx,[rip+0x1e8bd84]        # 0x14266c870
0x7e0aec: call   0x140af3400
0x7e0af1: nop
0x7e0af2: lea    rcx,[rbp-0x39]
0x7e0af6: call   0x140070e80
0x7e0afb: cmp    QWORD PTR [rsi+0x20],0x0
0x7e0b00: je     0x1407e0d9d
0x7e0b06: mov    ebx,r13d
0x7e0b09: cmp    r13d,edi
0x7e0b0c: jg     0x1407e0bdb
0x7e0b12: mov    esi,DWORD PTR [rbp-0x49]
0x7e0b15: mov    eax,DWORD PTR [rbp-0x61]
0x7e0b18: nop    DWORD PTR [rax+rax*1+0x0]
0x7e0b20: mov    r11d,eax
0x7e0b23: cmp    eax,esi
0x7e0b25: jg     0x1407e0bd1
0x7e0b2b: nop    DWORD PTR [rax+rax*1+0x0]
0x7e0b30: mov    DWORD PTR [rip+0x1e8bdbd],r11d        # 0x14266c8f4
0x7e0b37: mov    DWORD PTR [rip+0x1e8bdbb],ebx        # 0x14266c8f8
0x7e0b3d: cmp    ebx,r13d
0x7e0b40: jne    0x1407e0b6b
0x7e0b42: cmp    r11d,eax
0x7e0b45: jne    0x1407e0b4f
0x7e0b47: mov    edx,DWORD PTR [rip+0x1c123b7]        # 0x1423f2f04
0x7e0b4d: jmp    0x1407e0bb6
0x7e0b4f: lea    rcx,[rip+0x1e8bd1a]        # 0x14266c870
0x7e0b56: cmp    r11d,esi
0x7e0b59: jne    0x1407e0b63
0x7e0b5b: mov    edx,DWORD PTR [rip+0x1c123ab]        # 0x1423f2f0c
0x7e0b61: jmp    0x1407e0bbd
0x7e0b63: mov    edx,DWORD PTR [rip+0x1c1239f]        # 0x1423f2f08
0x7e0b69: jmp    0x1407e0bbd
0x7e0b6b: cmp    ebx,edi
0x7e0b6d: jne    0x1407e0b98
0x7e0b6f: cmp    r11d,eax
0x7e0b72: jne    0x1407e0b7c
0x7e0b74: mov    edx,DWORD PTR [rip+0x1c123a2]        # 0x1423f2f1c
0x7e0b7a: jmp    0x1407e0bb6
0x7e0b7c: lea    rcx,[rip+0x1e8bced]        # 0x14266c870
0x7e0b83: cmp    r11d,esi
0x7e0b86: jne    0x1407e0b90
0x7e0b88: mov    edx,DWORD PTR [rip+0x1c12396]        # 0x1423f2f24
0x7e0b8e: jmp    0x1407e0bbd
0x7e0b90: mov    edx,DWORD PTR [rip+0x1c1238a]        # 0x1423f2f20
0x7e0b96: jmp    0x1407e0bbd
0x7e0b98: cmp    r11d,eax
0x7e0b9b: jne    0x1407e0ba5
0x7e0b9d: mov    edx,DWORD PTR [rip+0x1c1236d]        # 0x1423f2f10
0x7e0ba3: jmp    0x1407e0bb6
0x7e0ba5: cmp    r11d,esi
0x7e0ba8: mov    edx,DWORD PTR [rip+0x1c1236a]        # 0x1423f2f18
0x7e0bae: je     0x1407e0bb6
0x7e0bb0: mov    edx,DWORD PTR [rip+0x1c1235e]        # 0x1423f2f14
0x7e0bb6: lea    rcx,[rip+0x1e8bcb3]        # 0x14266c870
0x7e0bbd: call   0x140af4570
0x7e0bc2: inc    r11d
0x7e0bc5: cmp    r11d,esi
0x7e0bc8: mov    eax,DWORD PTR [rbp-0x61]
0x7e0bcb: jle    0x1407e0b30
0x7e0bd1: inc    ebx
0x7e0bd3: cmp    ebx,edi
0x7e0bd5: jle    0x1407e0b20
0x7e0bdb: mov    eax,DWORD PTR [rbp-0x61]
0x7e0bde: add    eax,0x2
0x7e0be1: mov    DWORD PTR [rip+0x1e8bd0d],eax        # 0x14266c8f4
0x7e0be7: mov    DWORD PTR [rip+0x1e8bd0a],r14d        # 0x14266c8f8
0x7e0bee: xorps  xmm0,xmm0
0x7e0bf1: movups XMMWORD PTR [rbp-0x39],xmm0
0x7e0bf5: movdqa xmm1,XMMWORD PTR [rip+0xfcae93]        # 0x1417aba90
0x7e0bfd: movdqu XMMWORD PTR [rbp-0x29],xmm1
0x7e0c02: movsd  xmm0,QWORD PTR [rip+0xeecaa6]        # 0x1416cd6b0 ; cstring="Don't update"
0x7e0c0a: movsd  QWORD PTR [rbp-0x39],xmm0
0x7e0c0f: mov    eax,DWORD PTR [rip+0xeecaa3]        # 0x1416cd6b8 ; cstring='date'
0x7e0c15: mov    DWORD PTR [rbp-0x31],eax
0x7e0c18: mov    BYTE PTR [rbp-0x2d],0x0
0x7e0c1c: xor    r9d,r9d
0x7e0c1f: lea    rdx,[rbp-0x39]
0x7e0c23: lea    rcx,[rip+0x1e8bc46]        # 0x14266c870
0x7e0c2a: call   0x140af3400
0x7e0c2f: nop
0x7e0c30: lea    rcx,[rbp-0x39]
0x7e0c34: call   0x140070e80
0x7e0c39: mov    ebx,r13d
0x7e0c3c: cmp    r13d,edi
0x7e0c3f: jg     0x1407e0d0b
0x7e0c45: mov    esi,DWORD PTR [rbp-0x45]
0x7e0c48: mov    eax,DWORD PTR [rbp-0x5d]
0x7e0c4b: nop    DWORD PTR [rax+rax*1+0x0]
0x7e0c50: mov    r11d,eax
0x7e0c53: cmp    eax,esi
0x7e0c55: jg     0x1407e0d01
0x7e0c5b: nop    DWORD PTR [rax+rax*1+0x0]
0x7e0c60: mov    DWORD PTR [rip+0x1e8bc8d],r11d        # 0x14266c8f4
0x7e0c67: mov    DWORD PTR [rip+0x1e8bc8b],ebx        # 0x14266c8f8
0x7e0c6d: cmp    ebx,r13d
0x7e0c70: jne    0x1407e0c9b
0x7e0c72: cmp    r11d,eax
0x7e0c75: jne    0x1407e0c7f
0x7e0c77: mov    edx,DWORD PTR [rip+0x1c12287]        # 0x1423f2f04
0x7e0c7d: jmp    0x1407e0ce6
0x7e0c7f: lea    rcx,[rip+0x1e8bbea]        # 0x14266c870
0x7e0c86: cmp    r11d,esi
0x7e0c89: jne    0x1407e0c93
0x7e0c8b: mov    edx,DWORD PTR [rip+0x1c1227b]        # 0x1423f2f0c
0x7e0c91: jmp    0x1407e0ced
0x7e0c93: mov    edx,DWORD PTR [rip+0x1c1226f]        # 0x1423f2f08
0x7e0c99: jmp    0x1407e0ced
0x7e0c9b: cmp    ebx,edi
0x7e0c9d: jne    0x1407e0cc8
0x7e0c9f: cmp    r11d,eax
0x7e0ca2: jne    0x1407e0cac
0x7e0ca4: mov    edx,DWORD PTR [rip+0x1c12272]        # 0x1423f2f1c
0x7e0caa: jmp    0x1407e0ce6
0x7e0cac: lea    rcx,[rip+0x1e8bbbd]        # 0x14266c870
0x7e0cb3: cmp    r11d,esi
0x7e0cb6: jne    0x1407e0cc0
0x7e0cb8: mov    edx,DWORD PTR [rip+0x1c12266]        # 0x1423f2f24
0x7e0cbe: jmp    0x1407e0ced
0x7e0cc0: mov    edx,DWORD PTR [rip+0x1c1225a]        # 0x1423f2f20
0x7e0cc6: jmp    0x1407e0ced
0x7e0cc8: cmp    r11d,eax
0x7e0ccb: jne    0x1407e0cd5
0x7e0ccd: mov    edx,DWORD PTR [rip+0x1c1223d]        # 0x1423f2f10
0x7e0cd3: jmp    0x1407e0ce6
0x7e0cd5: cmp    r11d,esi
0x7e0cd8: mov    edx,DWORD PTR [rip+0x1c1223a]        # 0x1423f2f18
0x7e0cde: je     0x1407e0ce6
0x7e0ce0: mov    edx,DWORD PTR [rip+0x1c1222e]        # 0x1423f2f14
0x7e0ce6: lea    rcx,[rip+0x1e8bb83]        # 0x14266c870
0x7e0ced: call   0x140af4570
0x7e0cf2: inc    r11d
0x7e0cf5: cmp    r11d,esi
0x7e0cf8: mov    eax,DWORD PTR [rbp-0x5d]
0x7e0cfb: jle    0x1407e0c60
0x7e0d01: inc    ebx
0x7e0d03: cmp    ebx,edi
0x7e0d05: jle    0x1407e0c50
0x7e0d0b: mov    eax,DWORD PTR [rbp-0x5d]
0x7e0d0e: add    eax,0x2
0x7e0d11: mov    DWORD PTR [rip+0x1e8bbdd],eax        # 0x14266c8f4
0x7e0d17: mov    DWORD PTR [rip+0x1e8bbda],r14d        # 0x14266c8f8
0x7e0d1e: xorps  xmm0,xmm0
0x7e0d21: movups XMMWORD PTR [rbp-0x39],xmm0
0x7e0d25: mov    ecx,0x20
0x7e0d2a: call   0x140071e00
0x7e0d2f: mov    QWORD PTR [rbp-0x39],rax
0x7e0d33: movdqa xmm0,XMMWORD PTR [rip+0xfcad95]        # 0x1417abad0
0x7e0d3b: movdqu XMMWORD PTR [rbp-0x29],xmm0
0x7e0d40: movups xmm0,XMMWORD PTR [rip+0xeec931]        # 0x1416cd678 ; vector="Don't update any"
0x7e0d47: movups XMMWORD PTR [rax],xmm0
0x7e0d4a: mov    BYTE PTR [rax+0x10],0x0
0x7e0d4e: xor    r9d,r9d
0x7e0d51: lea    rdx,[rbp-0x39]
0x7e0d55: lea    rcx,[rip+0x1e8bb14]        # 0x14266c870
0x7e0d5c: call   0x140af3400
0x7e0d61: nop
0x7e0d62: mov    rdx,QWORD PTR [rbp-0x21]
0x7e0d66: cmp    rdx,0xf
0x7e0d6a: jbe    0x1407e0d9d
0x7e0d6c: inc    rdx
0x7e0d6f: mov    rcx,QWORD PTR [rbp-0x39]
0x7e0d73: mov    rax,rcx
0x7e0d76: cmp    rdx,0x1000
0x7e0d7d: jb     0x1407e0d98
0x7e0d7f: add    rdx,0x27
0x7e0d83: mov    rcx,QWORD PTR [rcx-0x8]
0x7e0d87: sub    rax,rcx
0x7e0d8a: add    rax,0xfffffffffffffff8
0x7e0d8e: cmp    rax,0x1f
0x7e0d92: ja     0x1407e12cb
0x7e0d98: call   0x1415530d0
0x7e0d9d: mov    ebx,r13d
0x7e0da0: cmp    r13d,edi
0x7e0da3: jg     0x1407e0e6b
0x7e0da9: mov    esi,DWORD PTR [rbp-0x55]
0x7e0dac: mov    eax,DWORD PTR [rbp-0x59]
0x7e0daf: nop
0x7e0db0: mov    r11d,eax
0x7e0db3: cmp    eax,esi
0x7e0db5: jg     0x1407e0e61
0x7e0dbb: nop    DWORD PTR [rax+rax*1+0x0]
0x7e0dc0: mov    DWORD PTR [rip+0x1e8bb2d],r11d        # 0x14266c8f4
0x7e0dc7: mov    DWORD PTR [rip+0x1e8bb2b],ebx        # 0x14266c8f8
0x7e0dcd: cmp    ebx,r13d
0x7e0dd0: jne    0x1407e0dfb
0x7e0dd2: cmp    r11d,eax
0x7e0dd5: jne    0x1407e0ddf
0x7e0dd7: mov    edx,DWORD PTR [rip+0x1c1216f]        # 0x1423f2f4c
0x7e0ddd: jmp    0x1407e0e46
0x7e0ddf: lea    rcx,[rip+0x1e8ba8a]        # 0x14266c870
0x7e0de6: cmp    r11d,esi
0x7e0de9: jne    0x1407e0df3
0x7e0deb: mov    edx,DWORD PTR [rip+0x1c12163]        # 0x1423f2f54
0x7e0df1: jmp    0x1407e0e4d
0x7e0df3: mov    edx,DWORD PTR [rip+0x1c12157]        # 0x1423f2f50
0x7e0df9: jmp    0x1407e0e4d
0x7e0dfb: cmp    ebx,edi
0x7e0dfd: jne    0x1407e0e28
0x7e0dff: cmp    r11d,eax
0x7e0e02: jne    0x1407e0e0c
0x7e0e04: mov    edx,DWORD PTR [rip+0x1c1215a]        # 0x1423f2f64
0x7e0e0a: jmp    0x1407e0e46
0x7e0e0c: lea    rcx,[rip+0x1e8ba5d]        # 0x14266c870
0x7e0e13: cmp    r11d,esi
0x7e0e16: jne    0x1407e0e20
0x7e0e18: mov    edx,DWORD PTR [rip+0x1c1214e]        # 0x1423f2f6c
0x7e0e1e: jmp    0x1407e0e4d
0x7e0e20: mov    edx,DWORD PTR [rip+0x1c12142]        # 0x1423f2f68
0x7e0e26: jmp    0x1407e0e4d
0x7e0e28: cmp    r11d,eax
0x7e0e2b: jne    0x1407e0e35
0x7e0e2d: mov    edx,DWORD PTR [rip+0x1c12125]        # 0x1423f2f58
0x7e0e33: jmp    0x1407e0e46
0x7e0e35: cmp    r11d,esi
0x7e0e38: mov    edx,DWORD PTR [rip+0x1c12122]        # 0x1423f2f60
0x7e0e3e: je     0x1407e0e46
0x7e0e40: mov    edx,DWORD PTR [rip+0x1c12116]        # 0x1423f2f5c
0x7e0e46: lea    rcx,[rip+0x1e8ba23]        # 0x14266c870
0x7e0e4d: call   0x140af4570
0x7e0e52: inc    r11d
0x7e0e55: cmp    r11d,esi
0x7e0e58: mov    eax,DWORD PTR [rbp-0x59]
0x7e0e5b: jle    0x1407e0dc0
0x7e0e61: inc    ebx
0x7e0e63: cmp    ebx,edi
0x7e0e65: jle    0x1407e0db0
0x7e0e6b: mov    eax,DWORD PTR [rbp-0x59]
0x7e0e6e: add    eax,0x2
0x7e0e71: mov    DWORD PTR [rip+0x1e8ba7d],eax        # 0x14266c8f4
0x7e0e77: mov    DWORD PTR [rip+0x1e8ba7a],r14d        # 0x14266c8f8
0x7e0e7e: xorps  xmm0,xmm0
0x7e0e81: movups XMMWORD PTR [rbp-0x39],xmm0
0x7e0e85: movdqa xmm1,XMMWORD PTR [rip+0xfcac13]        # 0x1417abaa0
0x7e0e8d: movdqu XMMWORD PTR [rbp-0x29],xmm1
0x7e0e92: movsd  xmm0,QWORD PTR [rip+0xeec7f6]        # 0x1416cd690 ; cstring='Back to title'
0x7e0e9a: movsd  QWORD PTR [rbp-0x39],xmm0
0x7e0e9f: mov    eax,DWORD PTR [rip+0xeec7f3]        # 0x1416cd698 ; cstring='title'
0x7e0ea5: mov    DWORD PTR [rbp-0x31],eax
0x7e0ea8: movzx  eax,BYTE PTR [rip+0xeec7ed]        # 0x1416cd69c ; cstring='e'
0x7e0eaf: mov    BYTE PTR [rbp-0x2d],al
0x7e0eb2: mov    BYTE PTR [rbp-0x2c],0x0
0x7e0eb6: xor    r9d,r9d
0x7e0eb9: lea    rdx,[rbp-0x39]
0x7e0ebd: lea    rcx,[rip+0x1e8b9ac]        # 0x14266c870
0x7e0ec4: call   0x140af3400
0x7e0ec9: nop
0x7e0eca: lea    rcx,[rbp-0x39]
0x7e0ece: call   0x140070e80
0x7e0ed3: jmp    0x1407e12d8
0x7e0ed8: cmp    BYTE PTR [rsi+0xd],0x0
0x7e0edc: je     0x1407e12d8
0x7e0ee2: lea    eax,[rdi+rbx*1]
0x7e0ee5: cdq
0x7e0ee6: sub    eax,edx
0x7e0ee8: sar    eax,1
0x7e0eea: lea    esi,[rax-0x23]
0x7e0eed: lea    ebx,[rsi+0x46]
0x7e0ef0: lea    r12d,[r14-0xf]
0x7e0ef4: lea    r13d,[r14-0x7]
0x7e0ef8: lea    eax,[rbx+rsi*1]
0x7e0efb: cdq
0x7e0efc: sub    eax,edx
0x7e0efe: sar    eax,1
0x7e0f00: lea    r15d,[rax-0x8]
0x7e0f04: lea    edi,[r15+0x10]
0x7e0f08: lea    eax,[r13-0x3]
0x7e0f0c: mov    DWORD PTR [rbp-0x69],eax
0x7e0f0f: lea    eax,[r13-0x1]
0x7e0f13: mov    DWORD PTR [rbp-0x55],eax
0x7e0f16: mov    DWORD PTR [rip+0x1e8b9dc],0x1000006        # 0x14266c8fc
0x7e0f20: mov    r14d,r12d
0x7e0f23: cmp    r12d,r13d
0x7e0f26: jg     0x1407e0fec
0x7e0f2c: nop    DWORD PTR [rax+0x0]
0x7e0f30: mov    r11d,esi
0x7e0f33: cmp    esi,ebx
0x7e0f35: jg     0x1407e0fe0
0x7e0f3b: nop    DWORD PTR [rax+rax*1+0x0]
0x7e0f40: mov    DWORD PTR [rip+0x1e8b9ad],r11d        # 0x14266c8f4
0x7e0f47: mov    DWORD PTR [rip+0x1e8b9aa],r14d        # 0x14266c8f8
0x7e0f4e: cmp    r14d,r12d
0x7e0f51: jne    0x1407e0f7c
0x7e0f53: cmp    r11d,esi
0x7e0f56: jne    0x1407e0f60
0x7e0f58: mov    edx,DWORD PTR [rip+0x1c121ce]        # 0x1423f312c
0x7e0f5e: jmp    0x1407e0fc8
0x7e0f60: lea    rcx,[rip+0x1e8b909]        # 0x14266c870
0x7e0f67: cmp    r11d,ebx
0x7e0f6a: jne    0x1407e0f74
0x7e0f6c: mov    edx,DWORD PTR [rip+0x1c121c2]        # 0x1423f3134
0x7e0f72: jmp    0x1407e0fcf
0x7e0f74: mov    edx,DWORD PTR [rip+0x1c121b6]        # 0x1423f3130
0x7e0f7a: jmp    0x1407e0fcf
0x7e0f7c: cmp    r14d,r13d
0x7e0f7f: jne    0x1407e0faa
0x7e0f81: cmp    r11d,esi
0x7e0f84: jne    0x1407e0f8e
0x7e0f86: mov    edx,DWORD PTR [rip+0x1c121b8]        # 0x1423f3144
0x7e0f8c: jmp    0x1407e0fc8
0x7e0f8e: lea    rcx,[rip+0x1e8b8db]        # 0x14266c870
0x7e0f95: cmp    r11d,ebx
0x7e0f98: jne    0x1407e0fa2
0x7e0f9a: mov    edx,DWORD PTR [rip+0x1c121ac]        # 0x1423f314c
0x7e0fa0: jmp    0x1407e0fcf
0x7e0fa2: mov    edx,DWORD PTR [rip+0x1c121a0]        # 0x1423f3148
0x7e0fa8: jmp    0x1407e0fcf
0x7e0faa: cmp    r11d,esi
0x7e0fad: jne    0x1407e0fb7
0x7e0faf: mov    edx,DWORD PTR [rip+0x1c12183]        # 0x1423f3138
0x7e0fb5: jmp    0x1407e0fc8
0x7e0fb7: cmp    r11d,ebx
0x7e0fba: mov    edx,DWORD PTR [rip+0x1c12180]        # 0x1423f3140
0x7e0fc0: je     0x1407e0fc8
0x7e0fc2: mov    edx,DWORD PTR [rip+0x1c12174]        # 0x1423f313c
0x7e0fc8: lea    rcx,[rip+0x1e8b8a1]        # 0x14266c870
0x7e0fcf: call   0x140af4570
0x7e0fd4: inc    r11d
0x7e0fd7: cmp    r11d,ebx
0x7e0fda: jle    0x1407e0f40
0x7e0fe0: inc    r14d
0x7e0fe3: cmp    r14d,r13d
0x7e0fe6: jle    0x1407e0f30
0x7e0fec: mov    DWORD PTR [rip+0x1e8b906],0x1010007        # 0x14266c8fc
0x7e0ff6: add    esi,0x2
0x7e0ff9: mov    DWORD PTR [rip+0x1e8b8f5],esi        # 0x14266c8f4
0x7e0fff: lea    eax,[r12+0x2]
0x7e1004: mov    DWORD PTR [rip+0x1e8b8ee],eax        # 0x14266c8f8
0x7e100a: mov    rax,QWORD PTR [rbp-0x41]
0x7e100e: xorps  xmm0,xmm0
0x7e1011: mov    ecx,0x20
0x7e1016: movups XMMWORD PTR [rbp-0x39],xmm0
0x7e101a: cmp    DWORD PTR [rax+0x10],0x0
0x7e101e: je     0x1407e107e
0x7e1020: call   0x140071e00
0x7e1025: mov    rdx,rax
0x7e1028: mov    QWORD PTR [rbp-0x39],rax
0x7e102c: movdqa xmm0,XMMWORD PTR [rip+0xfcab7c]        # 0x1417abbb0
0x7e1034: movdqu XMMWORD PTR [rbp-0x29],xmm0
0x7e1039: movups xmm0,XMMWORD PTR [rip+0xeec698]        # 0x1416cd6d8 ; vector='Failed to find c'
0x7e1040: movups XMMWORD PTR [rax],xmm0
0x7e1043: movsd  xmm0,QWORD PTR [rip+0xeec69d]        # 0x1416cd6e8 ; cstring='ompatible mod:'
0x7e104b: movsd  QWORD PTR [rax+0x10],xmm0
0x7e1050: mov    ecx,DWORD PTR [rip+0xeec69a]        # 0x1416cd6f0 ; cstring='e mod:'
0x7e1056: mov    DWORD PTR [rax+0x18],ecx
0x7e1059: movzx  eax,WORD PTR [rip+0xeec694]        # 0x1416cd6f4 ; cstring='d:'
0x7e1060: mov    WORD PTR [rdx+0x1c],ax
0x7e1064: mov    BYTE PTR [rdx+0x1e],0x0
0x7e1068: xor    r9d,r9d
0x7e106b: lea    rdx,[rbp-0x39]
0x7e106f: lea    rcx,[rip+0x1e8b7fa]        # 0x14266c870
0x7e1076: call   0x140af3400
0x7e107b: nop
0x7e107c: jmp    0x1407e10ca
0x7e107e: call   0x140071e00
0x7e1083: mov    QWORD PTR [rbp-0x39],rax
0x7e1087: movdqa xmm0,XMMWORD PTR [rip+0xfcaaa1]        # 0x1417abb30
0x7e108f: movdqu XMMWORD PTR [rbp-0x29],xmm0
0x7e1094: movups xmm0,XMMWORD PTR [rip+0xeec625]        # 0x1416cd6c0 ; vector='Failed to instal'
0x7e109b: movups XMMWORD PTR [rax],xmm0
0x7e109e: mov    ecx,DWORD PTR [rip+0xeec62c]        # 0x1416cd6d0 ; cstring='l mod:'
0x7e10a4: mov    DWORD PTR [rax+0x10],ecx
0x7e10a7: movzx  ecx,WORD PTR [rip+0xeec626]        # 0x1416cd6d4 ; cstring='d:'
0x7e10ae: mov    WORD PTR [rax+0x14],cx
0x7e10b2: mov    BYTE PTR [rax+0x16],0x0
0x7e10b6: xor    r9d,r9d
0x7e10b9: lea    rdx,[rbp-0x39]
0x7e10bd: lea    rcx,[rip+0x1e8b7ac]        # 0x14266c870
0x7e10c4: call   0x140af3400
0x7e10c9: nop
0x7e10ca: mov    rdx,QWORD PTR [rbp-0x21]
0x7e10ce: cmp    rdx,0xf
0x7e10d2: jbe    0x1407e1105
0x7e10d4: inc    rdx
0x7e10d7: mov    rcx,QWORD PTR [rbp-0x39]
0x7e10db: cmp    rdx,0x1000
0x7e10e2: mov    rax,rcx
0x7e10e5: jb     0x1407e1100
0x7e10e7: mov    rcx,QWORD PTR [rcx-0x8]
0x7e10eb: sub    rax,rcx
0x7e10ee: add    rdx,0x27
0x7e10f2: add    rax,0xfffffffffffffff8
0x7e10f6: cmp    rax,0x1f
0x7e10fa: ja     0x1407e12cb
0x7e1100: call   0x1415530d0
0x7e1105: mov    DWORD PTR [rip+0x1e8b7e9],esi        # 0x14266c8f4
0x7e110b: lea    eax,[r12+0x3]
0x7e1110: mov    DWORD PTR [rip+0x1e8b7e2],eax        # 0x14266c8f8
0x7e1116: xor    r9d,r9d
0x7e1119: lea    rdx,[rbp+0x7]
0x7e111d: lea    rcx,[rip+0x1e8b74c]        # 0x14266c870
0x7e1124: call   0x140af3400
0x7e1129: xorps  xmm0,xmm0
0x7e112c: movups XMMWORD PTR [rbp-0x39],xmm0
0x7e1130: movdqa xmm1,XMMWORD PTR [rip+0xfca8a8]        # 0x1417ab9e0
0x7e1138: movdqu XMMWORD PTR [rbp-0x29],xmm1
0x7e113d: mov    WORD PTR [rbp-0x39],0x20
0x7e1143: xor    r9d,r9d
0x7e1146: lea    rdx,[rbp-0x39]
0x7e114a: lea    rcx,[rip+0x1e8b71f]        # 0x14266c870
0x7e1151: call   0x140af3400
0x7e1156: nop
0x7e1157: lea    rcx,[rbp-0x39]
0x7e115b: call   0x140070e80
0x7e1160: xor    r9d,r9d
0x7e1163: lea    rdx,[rbp-0x19]
0x7e1167: lea    rcx,[rip+0x1e8b702]        # 0x14266c870
0x7e116e: call   0x140af3400
0x7e1173: mov    ecx,DWORD PTR [rbp-0x69]
0x7e1176: mov    ebx,ecx
0x7e1178: mov    esi,DWORD PTR [rbp-0x55]
0x7e117b: cmp    ecx,esi
0x7e117d: jg     0x1407e123a
0x7e1183: mov    r11d,r15d
0x7e1186: cmp    r15d,edi
0x7e1189: jg     0x1407e1230
0x7e118f: nop
0x7e1190: mov    DWORD PTR [rip+0x1e8b75d],r11d        # 0x14266c8f4
0x7e1197: mov    DWORD PTR [rip+0x1e8b75b],ebx        # 0x14266c8f8
0x7e119d: cmp    ebx,ecx
0x7e119f: jne    0x1407e11ca
0x7e11a1: cmp    r11d,r15d
0x7e11a4: jne    0x1407e11ae
0x7e11a6: mov    edx,DWORD PTR [rip+0x1c11da0]        # 0x1423f2f4c
0x7e11ac: jmp    0x1407e1215
0x7e11ae: lea    rcx,[rip+0x1e8b6bb]        # 0x14266c870
0x7e11b5: cmp    r11d,edi
0x7e11b8: jne    0x1407e11c2
0x7e11ba: mov    edx,DWORD PTR [rip+0x1c11d94]        # 0x1423f2f54
0x7e11c0: jmp    0x1407e121c
0x7e11c2: mov    edx,DWORD PTR [rip+0x1c11d88]        # 0x1423f2f50
0x7e11c8: jmp    0x1407e121c
0x7e11ca: cmp    ebx,esi
0x7e11cc: jne    0x1407e11f7
0x7e11ce: cmp    r11d,r15d
0x7e11d1: jne    0x1407e11db
0x7e11d3: mov    edx,DWORD PTR [rip+0x1c11d8b]        # 0x1423f2f64
0x7e11d9: jmp    0x1407e1215
0x7e11db: lea    rcx,[rip+0x1e8b68e]        # 0x14266c870
0x7e11e2: cmp    r11d,edi
0x7e11e5: jne    0x1407e11ef
0x7e11e7: mov    edx,DWORD PTR [rip+0x1c11d7f]        # 0x1423f2f6c
0x7e11ed: jmp    0x1407e121c
0x7e11ef: mov    edx,DWORD PTR [rip+0x1c11d73]        # 0x1423f2f68
0x7e11f5: jmp    0x1407e121c
0x7e11f7: cmp    r11d,r15d
0x7e11fa: jne    0x1407e1204
0x7e11fc: mov    edx,DWORD PTR [rip+0x1c11d56]        # 0x1423f2f58
0x7e1202: jmp    0x1407e1215
0x7e1204: cmp    r11d,edi
0x7e1207: mov    edx,DWORD PTR [rip+0x1c11d53]        # 0x1423f2f60
0x7e120d: je     0x1407e1215
0x7e120f: mov    edx,DWORD PTR [rip+0x1c11d47]        # 0x1423f2f5c
0x7e1215: lea    rcx,[rip+0x1e8b654]        # 0x14266c870
0x7e121c: call   0x140af4570
0x7e1221: inc    r11d
0x7e1224: cmp    r11d,edi
0x7e1227: mov    ecx,DWORD PTR [rbp-0x69]
0x7e122a: jle    0x1407e1190
0x7e1230: inc    ebx
0x7e1232: cmp    ebx,esi
0x7e1234: jle    0x1407e1183
0x7e123a: lea    eax,[r15+0x2]
0x7e123e: mov    DWORD PTR [rip+0x1e8b6b0],eax        # 0x14266c8f4
0x7e1244: lea    eax,[rcx+0x1]
0x7e1247: mov    DWORD PTR [rip+0x1e8b6ab],eax        # 0x14266c8f8
0x7e124d: xorps  xmm0,xmm0
0x7e1250: movups XMMWORD PTR [rbp-0x39],xmm0
0x7e1254: movdqa xmm1,XMMWORD PTR [rip+0xfca844]        # 0x1417abaa0
0x7e125c: movdqu XMMWORD PTR [rbp-0x29],xmm1
0x7e1261: movsd  xmm0,QWORD PTR [rip+0xeec427]        # 0x1416cd690 ; cstring='Back to title'
0x7e1269: movsd  QWORD PTR [rbp-0x39],xmm0
0x7e126e: mov    eax,DWORD PTR [rip+0xeec424]        # 0x1416cd698 ; cstring='title'
0x7e1274: mov    DWORD PTR [rbp-0x31],eax
0x7e1277: movzx  eax,BYTE PTR [rip+0xeec41e]        # 0x1416cd69c ; cstring='e'
0x7e127e: mov    BYTE PTR [rbp-0x2d],al
0x7e1281: mov    BYTE PTR [rbp-0x2c],0x0
0x7e1285: xor    r9d,r9d
0x7e1288: lea    rdx,[rbp-0x39]
0x7e128c: lea    rcx,[rip+0x1e8b5dd]        # 0x14266c870
0x7e1293: call   0x140af3400
0x7e1298: nop
0x7e1299: mov    rdx,QWORD PTR [rbp-0x21]
0x7e129d: cmp    rdx,0xf
0x7e12a1: jbe    0x1407e12d8
0x7e12a3: inc    rdx
0x7e12a6: mov    rcx,QWORD PTR [rbp-0x39]
0x7e12aa: mov    rax,rcx
0x7e12ad: cmp    rdx,0x1000
0x7e12b4: jb     0x1407e12d2
0x7e12b6: add    rdx,0x27
0x7e12ba: mov    rcx,QWORD PTR [rcx-0x8]
0x7e12be: sub    rax,rcx
0x7e12c1: add    rax,0xfffffffffffffff8
0x7e12c5: cmp    rax,0x1f
0x7e12c9: jbe    0x1407e12d2
0x7e12cb: call   QWORD PTR [rip+0xe1f86f]        # 0x141600b40
0x7e12d1: int3
0x7e12d2: call   0x1415530d0
0x7e12d7: nop
0x7e12d8: lea    rcx,[rbp-0x19]
0x7e12dc: call   0x140070e80
0x7e12e1: nop
0x7e12e2: lea    rcx,[rbp+0x7]
0x7e12e6: call   0x140070e80
0x7e12eb: mov    rcx,QWORD PTR [rbp+0x27]
0x7e12ef: xor    rcx,rsp
0x7e12f2: call   0x1415530b0
0x7e12f7: lea    r11,[rsp+0xc0]
0x7e12ff: mov    rbx,QWORD PTR [r11+0x38]
0x7e1303: mov    rsi,QWORD PTR [r11+0x40]
0x7e1307: mov    rdi,QWORD PTR [r11+0x48]
0x7e130b: mov    rsp,r11
0x7e130e: pop    r15
0x7e1310: pop    r14
0x7e1312: pop    r13
0x7e1314: pop    r12
0x7e1316: pop    rbp
0x7e1317: ret
