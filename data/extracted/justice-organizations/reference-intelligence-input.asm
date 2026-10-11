# reference PE:6a70a6d9:02711000; intelligence-input; RVA 0x4751a0..0x4769cd
0x004751a0: mov    QWORD PTR [rsp+0x18],rbx
0x004751a5: push   rbp
0x004751a6: push   rsi
0x004751a7: push   rdi
0x004751a8: push   r12
0x004751aa: push   r13
0x004751ac: push   r14
0x004751ae: push   r15
0x004751b0: lea    rbp,[rsp-0x17]
0x004751b5: sub    rsp,0xd0
0x004751bc: mov    rax,QWORD PTR [rip+0x1426e7d]        # 0x14189c040
0x004751c3: xor    rax,rsp
0x004751c6: mov    QWORD PTR [rbp+0x7],rax
0x004751ca: movsxd r14,r9d
0x004751cd: mov    DWORD PTR [rbp-0x49],r14d
0x004751d1: mov    r12d,r8d
0x004751d4: mov    r8,rdx
0x004751d7: mov    QWORD PTR [rbp-0x41],rdx
0x004751db: mov    rsi,rcx
0x004751de: xor    r15d,r15d
0x004751e1: mov    r13d,DWORD PTR [rbp+0x77]
0x004751e5: add    r13d,0x4
0x004751e9: mov    DWORD PTR [rbp-0x4d],r13d
0x004751ed: mov    ecx,DWORD PTR [rbp+0x7f]
0x004751f0: add    ecx,0xffffffe4
0x004751f3: mov    DWORD PTR [rbp-0x6d],ecx
0x004751f6: mov    eax,DWORD PTR [rip+0x1f5858c]        # 0x1423cd788
0x004751fc: add    eax,0xfffffffc
0x004751ff: mov    DWORD PTR [rbp-0x65],eax
0x00475202: dec    ecx
0x00475204: lea    eax,[r13+0x79]
0x00475208: mov    edx,0xa
0x0047520d: mov    r9d,0x8
0x00475213: cmp    eax,ecx
0x00475215: cmovle edx,r9d
0x00475219: mov    DWORD PTR [rbp-0x79],edx
0x0047521c: lea    eax,[r13+0x5d]
0x00475220: cmp    eax,ecx
0x00475222: jle    0x14047522a
0x00475224: add    edx,0x2
0x00475227: mov    DWORD PTR [rbp-0x79],edx
0x0047522a: mov    rdx,r8
0x0047522d: mov    rcx,rsi
0x00475230: call   0x141414b30
0x00475235: xorps  xmm0,xmm0
0x00475238: movups XMMWORD PTR [rbp-0x19],xmm0
0x0047523c: mov    QWORD PTR [rbp-0x9],0x4
0x00475244: mov    QWORD PTR [rbp-0x1],0xf
0x0047524c: mov    eax,DWORD PTR [rip+0x1181eee]        # 0x1415f7140 ; literal="Tabs"
0x00475252: mov    DWORD PTR [rbp-0x19],eax
0x00475255: mov    BYTE PTR [rbp-0x15],r15b
0x00475259: lea    r8,[rbp-0x19]
0x0047525d: lea    rdx,[rsp+0x20]
0x00475262: mov    rcx,rsi
0x00475265: call   0x1400f0000
0x0047526a: nop
0x0047526b: mov    rdx,QWORD PTR [rax]
0x0047526e: mov    rcx,QWORD PTR [rdx+0x180]
0x00475275: mov    rax,QWORD PTR [rdx+0x188]
0x0047527c: sub    rax,rcx
0x0047527f: test   rax,0xffffffffffffffe0
0x00475285: jne    0x1404752a4
0x00475287: xorps  xmm0,xmm0
0x0047528a: movups XMMWORD PTR [rbp-0x39],xmm0
0x0047528e: mov    r8,r15
0x00475291: mov    QWORD PTR [rbp-0x29],r15
0x00475295: mov    ebx,0xf
0x0047529a: mov    QWORD PTR [rbp-0x21],rbx
0x0047529e: mov    BYTE PTR [rbp-0x39],r8b
0x004752a2: jmp    0x1404752c3
0x004752a4: mov    rdx,QWORD PTR [rdx+0x178]
0x004752ab: shl    rdx,0x5
0x004752af: add    rdx,rcx
0x004752b2: lea    rcx,[rbp-0x39]
0x004752b6: call   0x14006f5d0
0x004752bb: mov    rbx,QWORD PTR [rbp-0x21]
0x004752bf: mov    r8,QWORD PTR [rbp-0x29]
0x004752c3: lea    rcx,[rbp-0x39]
0x004752c7: mov    rdi,QWORD PTR [rbp-0x39]
0x004752cb: cmp    rbx,0xf
0x004752cf: cmova  rcx,rdi
0x004752d3: cmp    r8,0xc
0x004752d7: jne    0x1404752ed
0x004752d9: lea    rdx,[rip+0x11c9ea8]        # 0x14163f188 ; literal="Intelligence"
0x004752e0: call   0x14153ae14
0x004752e5: test   eax,eax
0x004752e7: mov    BYTE PTR [rbp-0x69],0x1
0x004752eb: je     0x1404752f1
0x004752ed: mov    BYTE PTR [rbp-0x69],0x0
0x004752f1: cmp    rbx,0xf
0x004752f5: jbe    0x14047532c
0x004752f7: lea    rdx,[rbx+0x1]
0x004752fb: mov    rax,rdi
0x004752fe: cmp    rdx,0x1000
0x00475305: jb     0x140475323
0x00475307: add    rdx,0x27
0x0047530b: mov    rdi,QWORD PTR [rdi-0x8]
0x0047530f: sub    rax,rdi
0x00475312: add    rax,0xfffffffffffffff8
0x00475316: cmp    rax,0x1f
0x0047531a: jbe    0x140475323
0x0047531c: call   QWORD PTR [rip+0x1170806]        # 0x1415e5b28
0x00475322: int3
0x00475323: mov    rcx,rdi
0x00475326: call   0x141539680
0x0047532b: nop
0x0047532c: mov    rbx,QWORD PTR [rsp+0x28]
0x00475331: test   rbx,rbx
0x00475334: je     0x140475366
0x00475336: mov    eax,0xffffffff
0x0047533b: lock xadd DWORD PTR [rbx+0x8],eax
0x00475340: cmp    eax,0x1
0x00475343: jne    0x140475366
0x00475345: mov    rax,QWORD PTR [rbx]
0x00475348: mov    rcx,rbx
0x0047534b: call   QWORD PTR [rax]
0x0047534d: mov    eax,0xffffffff
0x00475352: lock xadd DWORD PTR [rbx+0xc],eax
0x00475357: cmp    eax,0x1
0x0047535a: jne    0x140475366
0x0047535c: mov    rax,QWORD PTR [rbx]
0x0047535f: mov    rcx,rbx
0x00475362: call   QWORD PTR [rax+0x8]
0x00475365: nop
0x00475366: mov    rdx,QWORD PTR [rbp-0x1]
0x0047536a: cmp    rdx,0xf
0x0047536e: jbe    0x1404753a4
0x00475370: inc    rdx
0x00475373: mov    rcx,QWORD PTR [rbp-0x19]
0x00475377: mov    rax,rcx
0x0047537a: cmp    rdx,0x1000
0x00475381: jb     0x14047539f
0x00475383: add    rdx,0x27
0x00475387: mov    rcx,QWORD PTR [rcx-0x8]
0x0047538b: sub    rax,rcx
0x0047538e: add    rax,0xfffffffffffffff8
0x00475392: cmp    rax,0x1f
0x00475396: jbe    0x14047539f
0x00475398: call   QWORD PTR [rip+0x117078a]        # 0x1415e5b28
0x0047539e: int3
0x0047539f: call   0x141539680
0x004753a4: cmp    BYTE PTR [rbp-0x69],0x0
0x004753a8: je     0x1404769a4
0x004753ae: mov    rbx,QWORD PTR [rip+0x206e58b]        # 0x1424e3940
0x004753b5: sub    rbx,QWORD PTR [rip+0x206e57c]        # 0x1424e3938
0x004753bc: sar    rbx,0x3
0x004753c0: test   rbx,rbx
0x004753c3: jne    0x14047540b
0x004753c5: mov    rax,QWORD PTR [rsi+0x250]
0x004753cc: sub    rax,QWORD PTR [rsi+0x248]
0x004753d3: test   rax,0xfffffffffffffff8
0x004753d9: jne    0x14047540b
0x004753db: mov    rax,QWORD PTR [rsi+0x268]
0x004753e2: sub    rax,QWORD PTR [rsi+0x260]
0x004753e9: test   rax,0xfffffffffffffff8
0x004753ef: jne    0x14047540b
0x004753f1: mov    rax,QWORD PTR [rsi+0x280]
0x004753f8: sub    rax,QWORD PTR [rsi+0x278]
0x004753ff: test   rax,0xfffffffffffffff8
0x00475405: je     0x1404769a4
0x0047540b: mov    edi,DWORD PTR [rbp-0x79]
0x0047540e: inc    edi
0x00475410: mov    r10d,r15d
0x00475413: mov    r11d,DWORD PTR [rsi+0x290]
0x0047541a: mov    eax,edi
0x0047541c: mov    QWORD PTR [rbp-0x59],rax
0x00475420: movzx  r9d,BYTE PTR [rip+0x1f1b1ad]        # 0x1423905d5
0x00475428: mov    edx,DWORD PTR [rbp-0x59]
0x0047542b: mov    r8d,DWORD PTR [rbp-0x59]
0x0047542f: nop
0x00475430: cmp    r10d,r11d
0x00475433: je     0x140475517
0x00475439: mov    ecx,r10d
0x0047543c: test   r10d,r10d
0x0047543f: je     0x1404754d6
0x00475445: sub    ecx,0x1
0x00475448: je     0x1404754ac
0x0047544a: sub    ecx,0x1
0x0047544d: je     0x140475482
0x0047544f: cmp    ecx,0x1
0x00475452: jne    0x1404754ed
0x00475458: mov    rax,QWORD PTR [rsi+0x280]
0x0047545f: sub    rax,QWORD PTR [rsi+0x278]
0x00475466: test   rax,0xfffffffffffffff8
0x0047546c: jne    0x140475478
0x0047546e: mov    edx,0xffffffff
0x00475473: mov    r8d,edx
0x00475476: jmp    0x1404754ed
0x00475478: lea    edx,[r13+0x2f]
0x0047547c: lea    r8d,[r13+0x37]
0x00475480: jmp    0x1404754ed
0x00475482: mov    rax,QWORD PTR [rsi+0x268]
0x00475489: sub    rax,QWORD PTR [rsi+0x260]
0x00475490: test   rax,0xfffffffffffffff8
0x00475496: jne    0x1404754a2
0x00475498: mov    edx,0xffffffff
0x0047549d: mov    r8d,edx
0x004754a0: jmp    0x1404754ed
0x004754a2: lea    edx,[r13+0x1d]
0x004754a6: lea    r8d,[r13+0x2e]
0x004754aa: jmp    0x1404754ed
0x004754ac: mov    rax,QWORD PTR [rsi+0x250]
0x004754b3: sub    rax,QWORD PTR [rsi+0x248]
0x004754ba: test   rax,0xfffffffffffffff8
0x004754c0: jne    0x1404754cc
0x004754c2: mov    edx,0xffffffff
0x004754c7: mov    r8d,edx
0x004754ca: jmp    0x1404754ed
0x004754cc: lea    edx,[r13+0x13]
0x004754d0: lea    r8d,[r13+0x1c]
0x004754d4: jmp    0x1404754ed
0x004754d6: test   rbx,rbx
0x004754d9: jne    0x1404754e5
0x004754db: mov    edx,0xffffffff
0x004754e0: mov    r8d,edx
0x004754e3: jmp    0x1404754ed
0x004754e5: lea    edx,[r13+0x1]
0x004754e9: lea    r8d,[r13+0x12]
0x004754ed: lea    eax,[rdi+0x1]
0x004754f0: test   r9b,r9b
0x004754f3: je     0x140475517
0x004754f5: cmp    BYTE PTR [rip+0x1f1b0d0],0x0        # 0x1423905cc
0x004754fc: je     0x140475517
0x004754fe: cmp    r12d,edx
0x00475501: jl     0x140475517
0x00475503: cmp    r12d,r8d
0x00475506: jg     0x140475517
0x00475508: cmp    r14,QWORD PTR [rbp-0x59]
0x0047550c: jl     0x140475517
0x0047550e: cmp    r14d,eax
0x00475511: jle    0x140475699
0x00475517: inc    r10d
0x0047551a: cmp    r10d,0x4
0x0047551e: jl     0x140475430
0x00475524: test   r11d,r11d
0x00475527: je     0x1404761a6
0x0047552d: sub    r11d,0x1
0x00475531: je     0x140475e50
0x00475537: sub    r11d,0x1
0x0047553b: je     0x1404758c2
0x00475541: cmp    r11d,0x1
0x00475545: jne    0x1404769a4
0x0047554b: lea    r10d,[r13+0x2]
0x0047554f: mov    DWORD PTR [rbp-0x71],r10d
0x00475553: mov    r8d,DWORD PTR [rbp-0x6d]
0x00475557: lea    eax,[r8-0x2]
0x0047555b: mov    DWORD PTR [rbp-0x75],eax
0x0047555e: mov    edi,DWORD PTR [rbp-0x79]
0x00475561: add    edi,0x4
0x00475564: mov    ebx,DWORD PTR [rbp-0x65]
0x00475567: mov    ecx,ebx
0x00475569: sub    ecx,edi
0x0047556b: dec    ecx
0x0047556d: mov    DWORD PTR [rbp-0x49],ecx
0x00475570: mov    rax,QWORD PTR [rsi+0x350]
0x00475577: sub    rax,QWORD PTR [rsi+0x348]
0x0047557e: sar    rax,0x3
0x00475582: lea    edx,[rax+rax*4]
0x00475585: mov    DWORD PTR [rbp-0x61],edx
0x00475588: cmp    edx,ecx
0x0047558a: jle    0x140475593
0x0047558c: lea    eax,[r8-0x4]
0x00475590: mov    DWORD PTR [rbp-0x75],eax
0x00475593: test   r9b,r9b
0x00475596: je     0x140475627
0x0047559c: cmp    edx,ecx
0x0047559e: jle    0x140475627
0x004755a4: cmp    r12d,r13d
0x004755a7: jl     0x140475627
0x004755a9: cmp    r12d,r8d
0x004755ac: jg     0x140475627
0x004755ae: cmp    r14d,edi
0x004755b1: jl     0x140475627
0x004755b3: cmp    r14d,ebx
0x004755b6: jg     0x140475627
0x004755b8: mov    QWORD PTR [rsp+0x38],r15
0x004755bd: mov    eax,DWORD PTR [rsi+0x2c8]
0x004755c3: mov    DWORD PTR [rsp+0x20],eax
0x004755c7: mov    DWORD PTR [rsp+0x24],r15d
0x004755cc: lea    eax,[rdx-0x1]
0x004755cf: mov    DWORD PTR [rsp+0x28],eax
0x004755d3: lea    eax,[rdi+0x1]
0x004755d6: mov    DWORD PTR [rsp+0x30],eax
0x004755da: lea    eax,[rdi-0x2]
0x004755dd: add    eax,ecx
0x004755df: mov    DWORD PTR [rsp+0x34],eax
0x004755e3: mov    DWORD PTR [rsp+0x2c],ecx
0x004755e7: lea    rcx,[rsp+0x20]
0x004755ec: call   0x1400bb3b0
0x004755f1: lea    r9,[rsi+0x2cc]
0x004755f8: lea    r8,[rsi+0x2c8]
0x004755ff: mov    rdx,QWORD PTR [rbp-0x41]
0x00475603: lea    rcx,[rsp+0x20]
0x00475608: call   0x14140f2b0
0x0047560d: test   al,al
0x0047560f: jne    0x1404769a4
0x00475615: movzx  r9d,BYTE PTR [rip+0x1f1afb8]        # 0x1423905d5
0x0047561d: mov    ecx,DWORD PTR [rbp-0x49]
0x00475620: mov    edx,DWORD PTR [rbp-0x61]
0x00475623: mov    r10d,DWORD PTR [rbp-0x71]
0x00475627: cmp    BYTE PTR [rsi+0x2cc],0x0
0x0047562e: je     0x14047573e
0x00475634: test   r9b,r9b
0x00475637: je     0x140475fde
0x0047563d: cmp    BYTE PTR [rip+0x1f1af8a],0x0        # 0x1423905ce
0x00475644: je     0x140475fde
0x0047564a: mov    QWORD PTR [rsp+0x38],r15
0x0047564f: mov    eax,DWORD PTR [rsi+0x2c8]
0x00475655: mov    DWORD PTR [rsp+0x20],eax
0x00475659: mov    DWORD PTR [rsp+0x24],r15d
0x0047565e: lea    eax,[rdx-0x1]
0x00475661: mov    DWORD PTR [rsp+0x28],eax
0x00475665: lea    eax,[rdi+0x1]
0x00475668: mov    DWORD PTR [rsp+0x30],eax
0x0047566c: lea    eax,[rdi-0x2]
0x0047566f: add    eax,ecx
0x00475671: mov    DWORD PTR [rsp+0x34],eax
0x00475675: mov    DWORD PTR [rsp+0x2c],ecx
0x00475679: lea    rcx,[rsp+0x20]
0x0047567e: call   0x1400bb3b0
0x00475683: mov    eax,DWORD PTR [rsp+0x30]
0x00475687: cmp    r14d,eax
0x0047568a: jg     0x1404756b6
0x0047568c: mov    eax,DWORD PTR [rsp+0x24]
0x00475690: mov    DWORD PTR [rsp+0x20],eax
0x00475694: jmp    0x140475725
0x00475699: mov    BYTE PTR [rip+0x1f1af2c],0x0        # 0x1423905cc
0x004756a0: mov    DWORD PTR [rsi+0x290],r10d
0x004756a7: mov    rcx,rsi
0x004756aa: call   0x1404792d0
0x004756af: mov    al,0x1
0x004756b1: jmp    0x1404769a6
0x004756b6: mov    r10d,DWORD PTR [rsp+0x34]
0x004756bb: cmp    r14d,r10d
0x004756be: jl     0x1404756d8
0x004756c0: mov    eax,DWORD PTR [rsp+0x28]
0x004756c4: sub    eax,DWORD PTR [rsp+0x2c]
0x004756c8: inc    eax
0x004756ca: mov    DWORD PTR [rsp+0x20],eax
0x004756ce: mov    ecx,DWORD PTR [rsp+0x24]
0x004756d2: cmp    eax,ecx
0x004756d4: jge    0x140475725
0x004756d6: jmp    0x140475721
0x004756d8: cmp    r10d,eax
0x004756db: jle    0x140475725
0x004756dd: mov    r8d,DWORD PTR [rsp+0x28]
0x004756e2: sub    r8d,DWORD PTR [rsp+0x2c]
0x004756e7: mov    ecx,r8d
0x004756ea: mov    r9d,DWORD PTR [rsp+0x24]
0x004756ef: sub    ecx,r9d
0x004756f2: add    ecx,0x1
0x004756f5: cmovns r15d,ecx
0x004756f9: sub    r14d,eax
0x004756fc: imul   r15d,r14d
0x00475700: sub    r10d,eax
0x00475703: inc    r10d
0x00475706: mov    eax,r15d
0x00475709: cdq
0x0047570a: idiv   r10d
0x0047570d: lea    ecx,[rax+r9*1]
0x00475711: lea    eax,[r8+0x1]
0x00475715: cmp    ecx,eax
0x00475717: cmovg  ecx,eax
0x0047571a: cmp    ecx,r9d
0x0047571d: cmovl  ecx,r9d
0x00475721: mov    DWORD PTR [rsp+0x20],ecx
0x00475725: lea    rcx,[rsp+0x20]
0x0047572a: call   0x1400bb3b0
0x0047572f: mov    eax,DWORD PTR [rsp+0x20]
0x00475733: mov    DWORD PTR [rsi+0x2c8],eax
0x00475739: jmp    0x1404769a4
0x0047573e: test   r9b,r9b
0x00475741: je     0x1404769a4
0x00475747: cmp    BYTE PTR [rip+0x1f1ae7e],0x0        # 0x1423905cc
0x0047574e: je     0x1404769a4
0x00475754: mov    r8d,DWORD PTR [rbp-0x75]
0x00475758: cmp    edx,ecx
0x0047575a: jle    0x140475855
0x00475760: lea    eax,[r8+0x1]
0x00475764: cmp    r12d,eax
0x00475767: jl     0x140475855
0x0047576d: inc    eax
0x0047576f: cmp    r12d,eax
0x00475772: jg     0x140475855
0x00475778: cmp    r14d,edi
0x0047577b: jl     0x140475855
0x00475781: lea    r9d,[rcx+rdi*1]
0x00475785: lea    eax,[r9-0x1]
0x00475789: cmp    r14d,eax
0x0047578c: jg     0x140475855
0x00475792: mov    BYTE PTR [rip+0x1f1ae33],0x0        # 0x1423905cc
0x00475799: mov    QWORD PTR [rsp+0x38],r15
0x0047579e: mov    eax,DWORD PTR [rsi+0x2c8]
0x004757a4: mov    DWORD PTR [rsp+0x20],eax
0x004757a8: mov    DWORD PTR [rsp+0x24],r15d
0x004757ad: lea    eax,[rdx-0x1]
0x004757b0: mov    DWORD PTR [rsp+0x28],eax
0x004757b4: lea    eax,[rdi+0x1]
0x004757b7: mov    DWORD PTR [rsp+0x30],eax
0x004757bb: lea    eax,[r9-0x2]
0x004757bf: mov    DWORD PTR [rsp+0x34],eax
0x004757c3: mov    DWORD PTR [rsp+0x2c],ecx
0x004757c7: lea    rcx,[rsp+0x20]
0x004757cc: call   0x1400bb3b0
0x004757d1: mov    BYTE PTR [rsi+0x2cc],0x0
0x004757d8: mov    eax,DWORD PTR [rsp+0x30]
0x004757dc: dec    eax
0x004757de: cmp    r14d,eax
0x004757e1: jne    0x1404757ff
0x004757e3: mov    ecx,DWORD PTR [rsp+0x20]
0x004757e7: dec    ecx
0x004757e9: cmp    ecx,DWORD PTR [rsp+0x24]
0x004757ed: cmovl  ecx,DWORD PTR [rsp+0x24]
0x004757f2: mov    DWORD PTR [rsi+0x2c8],ecx
0x004757f8: mov    al,0x1
0x004757fa: jmp    0x1404769a6
0x004757ff: mov    eax,DWORD PTR [rsp+0x34]
0x00475803: inc    eax
0x00475805: cmp    r14d,eax
0x00475808: jne    0x14047582c
0x0047580a: mov    ecx,DWORD PTR [rsp+0x20]
0x0047580e: inc    ecx
0x00475810: mov    eax,DWORD PTR [rsp+0x28]
0x00475814: sub    eax,DWORD PTR [rsp+0x2c]
0x00475818: inc    eax
0x0047581a: cmp    ecx,eax
0x0047581c: cmovg  ecx,eax
0x0047581f: mov    DWORD PTR [rsi+0x2c8],ecx
0x00475825: mov    al,0x1
0x00475827: jmp    0x1404769a6
0x0047582c: cmp    r14d,DWORD PTR [rsp+0x38]
0x00475831: jge    0x1404760aa
0x00475837: mov    ecx,DWORD PTR [rsp+0x20]
0x0047583b: sub    ecx,DWORD PTR [rsp+0x2c]
0x0047583f: cmp    ecx,DWORD PTR [rsp+0x24]
0x00475843: cmovl  ecx,DWORD PTR [rsp+0x24]
0x00475848: mov    DWORD PTR [rsi+0x2c8],ecx
0x0047584e: mov    al,0x1
0x00475850: jmp    0x1404769a6
0x00475855: mov    eax,DWORD PTR [rsi+0x2c8]
0x0047585b: sub    edx,ecx
0x0047585d: cmp    eax,edx
0x0047585f: cmovle edx,eax
0x00475862: mov    eax,r15d
0x00475865: test   edx,edx
0x00475867: cmovns eax,edx
0x0047586a: sub    edi,eax
0x0047586c: mov    rcx,QWORD PTR [rsi+0x350]
0x00475873: sub    rcx,QWORD PTR [rsi+0x348]
0x0047587a: sar    rcx,0x3
0x0047587e: test   ecx,ecx
0x00475880: jle    0x1404769a4
0x00475886: cmp    r12d,r10d
0x00475889: jl     0x14047589d
0x0047588b: cmp    r12d,r8d
0x0047588e: jg     0x14047589d
0x00475890: cmp    r14d,edi
0x00475893: jl     0x14047589d
0x00475895: lea    eax,[rdi+0x4]
0x00475898: cmp    r14d,eax
0x0047589b: jle    0x1404758ad
0x0047589d: add    edi,0x5
0x004758a0: inc    r15d
0x004758a3: cmp    r15d,ecx
0x004758a6: jl     0x140475886
0x004758a8: jmp    0x1404769a4
0x004758ad: mov    BYTE PTR [rip+0x1f1ad18],0x0        # 0x1423905cc
0x004758b4: mov    DWORD PTR [rsi+0x294],r15d
0x004758bb: mov    al,0x1
0x004758bd: jmp    0x1404769a6
0x004758c2: lea    eax,[r13+0x2]
0x004758c6: mov    DWORD PTR [rbp-0x71],eax
0x004758c9: mov    r8d,DWORD PTR [rbp-0x6d]
0x004758cd: lea    r11d,[r8-0x2]
0x004758d1: mov    DWORD PTR [rbp-0x51],r11d
0x004758d5: mov    edi,DWORD PTR [rbp-0x79]
0x004758d8: add    edi,0x4
0x004758db: mov    r10d,DWORD PTR [rbp-0x65]
0x004758df: lea    eax,[r10-0x2]
0x004758e3: mov    DWORD PTR [rbp-0x79],eax
0x004758e6: mov    rbx,QWORD PTR [rsi+0x330]
0x004758ed: mov    rax,QWORD PTR [rsi+0x338]
0x004758f4: sub    rax,rbx
0x004758f7: sar    rax,0x3
0x004758fb: lea    ecx,[rax+rax*4]
0x004758fe: mov    DWORD PTR [rbp-0x75],ecx
0x00475901: movsxd rdx,DWORD PTR [rsi+0x294]
0x00475908: test   edx,edx
0x0047590a: js     0x140475967
0x0047590c: mov    rax,QWORD PTR [rsi+0x320]
0x00475913: sub    rax,QWORD PTR [rsi+0x318]
0x0047591a: sar    rax,0x3
0x0047591e: cmp    edx,eax
0x00475920: jge    0x140475967
0x00475922: mov    rbx,QWORD PTR [rbx+rdx*8]
0x00475926: mov    rcx,rbx
0x00475929: call   0x1400d1650
0x0047592e: mov    rax,QWORD PTR [rbx+0x8]
0x00475932: sub    rax,QWORD PTR [rbx]
0x00475935: sar    rax,0x3
0x00475939: mov    edx,DWORD PTR [rbp-0x79]
0x0047593c: mov    ecx,DWORD PTR [rbp-0x75]
0x0047593f: movzx  r9d,BYTE PTR [rip+0x1f1ac8e]        # 0x1423905d5
0x00475947: mov    r8d,DWORD PTR [rbp-0x6d]
0x0047594b: mov    r10d,DWORD PTR [rbp-0x65]
0x0047594f: mov    r11d,DWORD PTR [rbp-0x51]
0x00475953: cmp    rax,0x1
0x00475957: jb     0x14047596a
0x00475959: mov    eax,edx
0x0047595b: sub    eax,edi
0x0047595d: add    ecx,0xfffffff5
0x00475960: add    ecx,eax
0x00475962: mov    DWORD PTR [rbp-0x75],ecx
0x00475965: jmp    0x14047596a
0x00475967: mov    edx,DWORD PTR [rbp-0x79]
0x0047596a: mov    eax,edx
0x0047596c: sub    eax,edi
0x0047596e: mov    DWORD PTR [rbp-0x4d],eax
0x00475971: lea    edx,[rax+0x1]
0x00475974: mov    DWORD PTR [rbp-0x61],edx
0x00475977: cmp    ecx,edx
0x00475979: jle    0x140475983
0x0047597b: sub    r11d,0x2
0x0047597f: mov    DWORD PTR [rbp-0x51],r11d
0x00475983: test   r9b,r9b
0x00475986: je     0x140475a0f
0x0047598c: cmp    ecx,edx
0x0047598e: jle    0x140475a0f
0x00475990: cmp    r12d,r13d
0x00475993: jl     0x140475a0f
0x00475995: cmp    r12d,r8d
0x00475998: jg     0x140475a0f
0x0047599a: cmp    r14d,edi
0x0047599d: jl     0x140475a0f
0x0047599f: cmp    r14d,r10d
0x004759a2: jg     0x140475a0f
0x004759a4: mov    QWORD PTR [rsp+0x38],r15
0x004759a9: mov    eax,DWORD PTR [rsi+0x2c8]
0x004759af: mov    DWORD PTR [rsp+0x20],eax
0x004759b3: mov    DWORD PTR [rsp+0x24],r15d
0x004759b8: lea    eax,[rcx-0x1]
0x004759bb: mov    DWORD PTR [rsp+0x28],eax
0x004759bf: lea    eax,[rdi+0x1]
0x004759c2: mov    DWORD PTR [rsp+0x30],eax
0x004759c6: lea    eax,[rdi-0x2]
0x004759c9: add    eax,edx
0x004759cb: mov    DWORD PTR [rsp+0x34],eax
0x004759cf: mov    DWORD PTR [rsp+0x2c],edx
0x004759d3: lea    rcx,[rsp+0x20]
0x004759d8: call   0x1400bb3b0
0x004759dd: lea    r9,[rsi+0x2cc]
0x004759e4: lea    r8,[rsi+0x2c8]
0x004759eb: mov    rdx,QWORD PTR [rbp-0x41]
0x004759ef: lea    rcx,[rsp+0x20]
0x004759f4: call   0x14140f2b0
0x004759f9: test   al,al
0x004759fb: jne    0x1404769a4
0x00475a01: movzx  r9d,BYTE PTR [rip+0x1f1abcc]        # 0x1423905d5
0x00475a09: mov    ecx,DWORD PTR [rbp-0x75]
0x00475a0c: mov    edx,DWORD PTR [rbp-0x61]
0x00475a0f: cmp    BYTE PTR [rsi+0x2cc],0x0
0x00475a16: je     0x140475b01
0x00475a1c: test   r9b,r9b
0x00475a1f: je     0x140475fde
0x00475a25: cmp    BYTE PTR [rip+0x1f1aba2],0x0        # 0x1423905ce
0x00475a2c: je     0x140475fde
0x00475a32: mov    QWORD PTR [rsp+0x38],r15
0x00475a37: mov    eax,DWORD PTR [rsi+0x2c8]
0x00475a3d: mov    DWORD PTR [rsp+0x20],eax
0x00475a41: mov    DWORD PTR [rsp+0x24],r15d
0x00475a46: lea    eax,[rcx-0x1]
0x00475a49: mov    DWORD PTR [rsp+0x28],eax
0x00475a4d: lea    eax,[rdi+0x1]
0x00475a50: mov    DWORD PTR [rsp+0x30],eax
0x00475a54: lea    eax,[rdi-0x2]
0x00475a57: add    eax,edx
0x00475a59: mov    DWORD PTR [rsp+0x34],eax
0x00475a5d: mov    DWORD PTR [rsp+0x2c],edx
0x00475a61: lea    rcx,[rsp+0x20]
0x00475a66: call   0x1400bb3b0
0x00475a6b: mov    edx,DWORD PTR [rsp+0x30]
0x00475a6f: cmp    r14d,edx
0x00475a72: jg     0x140475a7e
0x00475a74: mov    eax,DWORD PTR [rsp+0x24]
0x00475a78: mov    DWORD PTR [rsp+0x20],eax
0x00475a7c: jmp    0x140475ae8
0x00475a7e: mov    ecx,DWORD PTR [rsp+0x34]
0x00475a82: cmp    r14d,ecx
0x00475a85: jl     0x140475a9f
0x00475a87: mov    eax,DWORD PTR [rsp+0x28]
0x00475a8b: sub    eax,DWORD PTR [rsp+0x2c]
0x00475a8f: inc    eax
0x00475a91: mov    DWORD PTR [rsp+0x20],eax
0x00475a95: mov    ecx,DWORD PTR [rsp+0x24]
0x00475a99: cmp    eax,ecx
0x00475a9b: jge    0x140475ae8
0x00475a9d: jmp    0x140475ae4
0x00475a9f: cmp    ecx,edx
0x00475aa1: jle    0x140475ae8
0x00475aa3: mov    r8d,DWORD PTR [rsp+0x28]
0x00475aa8: sub    r8d,DWORD PTR [rsp+0x2c]
0x00475aad: mov    eax,r8d
0x00475ab0: mov    r9d,DWORD PTR [rsp+0x24]
0x00475ab5: sub    eax,r9d
0x00475ab8: add    eax,0x1
0x00475abb: cmovns r15d,eax
0x00475abf: sub    r14d,edx
0x00475ac2: imul   r15d,r14d
0x00475ac6: sub    ecx,edx
0x00475ac8: inc    ecx
0x00475aca: mov    eax,r15d
0x00475acd: cdq
0x00475ace: idiv   ecx
0x00475ad0: lea    ecx,[rax+r9*1]
0x00475ad4: lea    eax,[r8+0x1]
0x00475ad8: cmp    ecx,eax
0x00475ada: cmovg  ecx,eax
0x00475add: cmp    ecx,r9d
0x00475ae0: cmovl  ecx,r9d
0x00475ae4: mov    DWORD PTR [rsp+0x20],ecx
0x00475ae8: lea    rcx,[rsp+0x20]
0x00475aed: call   0x1400bb3b0
0x00475af2: mov    eax,DWORD PTR [rsp+0x20]
0x00475af6: mov    DWORD PTR [rsi+0x2c8],eax
0x00475afc: jmp    0x1404769a4
0x00475b01: test   r9b,r9b
0x00475b04: je     0x1404769a4
0x00475b0a: cmp    BYTE PTR [rip+0x1f1aabb],0x0        # 0x1423905cc
0x00475b11: je     0x1404769a4
0x00475b17: cmp    ecx,edx
0x00475b19: jle    0x140475b67
0x00475b1b: mov    eax,DWORD PTR [rbp-0x51]
0x00475b1e: inc    eax
0x00475b20: cmp    r12d,eax
0x00475b23: jl     0x140475b67
0x00475b25: inc    eax
0x00475b27: cmp    r12d,eax
0x00475b2a: jg     0x140475b67
0x00475b2c: cmp    r14d,edi
0x00475b2f: jl     0x140475b67
0x00475b31: lea    r8d,[rdx-0x2]
0x00475b35: cmp    r14d,DWORD PTR [rbp-0x79]
0x00475b39: jg     0x140475b67
0x00475b3b: mov    BYTE PTR [rip+0x1f1aa8a],0x0        # 0x1423905cc
0x00475b42: mov    eax,DWORD PTR [rsi+0x2c8]
0x00475b48: mov    DWORD PTR [rsp+0x20],eax
0x00475b4c: lea    eax,[rcx-0x1]
0x00475b4f: mov    DWORD PTR [rsp+0x28],eax
0x00475b53: lea    eax,[rdi+0x1]
0x00475b56: mov    DWORD PTR [rsp+0x30],eax
0x00475b5a: lea    eax,[r8+rdi*1]
0x00475b5e: mov    DWORD PTR [rsp+0x2c],edx
0x00475b62: jmp    0x140476062
0x00475b67: mov    eax,DWORD PTR [rsi+0x2c8]
0x00475b6d: sub    ecx,edx
0x00475b6f: cmp    eax,ecx
0x00475b71: cmovle ecx,eax
0x00475b74: mov    eax,r15d
0x00475b77: test   ecx,ecx
0x00475b79: cmovns eax,ecx
0x00475b7c: sub    edi,eax
0x00475b7e: mov    rax,QWORD PTR [rsi+0x338]
0x00475b85: sub    rax,QWORD PTR [rsi+0x330]
0x00475b8c: sar    rax,0x3
0x00475b90: mov    DWORD PTR [rbp-0x79],r15d
0x00475b94: test   eax,eax
0x00475b96: jle    0x1404769a4
0x00475b9c: mov    r13,r15
0x00475b9f: mov    QWORD PTR [rbp-0x41],r15
0x00475ba3: cdqe
0x00475ba5: mov    QWORD PTR [rsp+0x20],rax
0x00475baa: nop    WORD PTR [rax+rax*1+0x0]
0x00475bb0: mov    rax,QWORD PTR [rsi+0x330]
0x00475bb7: mov    rbx,QWORD PTR [rax+r13*8]
0x00475bbb: mov    rcx,rbx
0x00475bbe: call   0x1400d1650
0x00475bc3: mov    ecx,DWORD PTR [rbp-0x79]
0x00475bc6: cmp    ecx,DWORD PTR [rsi+0x294]
0x00475bcc: jne    0x140475dcb
0x00475bd2: mov    r11d,DWORD PTR [rbp-0x4d]
0x00475bd6: add    r11d,0xfffffff8
0x00475bda: mov    DWORD PTR [rbp-0x61],r11d
0x00475bde: mov    r9d,DWORD PTR [rbp-0x71]
0x00475be2: lea    eax,[r9+0x2]
0x00475be6: cmp    r12d,eax
0x00475be9: jl     0x140475dc3
0x00475bef: mov    edx,DWORD PTR [rbp-0x51]
0x00475bf2: lea    eax,[rdx-0x2]
0x00475bf5: cmp    r12d,eax
0x00475bf8: jg     0x140475dc3
0x00475bfe: lea    eax,[rdi+0x1]
0x00475c01: cmp    r14d,eax
0x00475c04: jl     0x140475dc3
0x00475c0a: lea    eax,[r11+rdi*1]
0x00475c0e: cmp    r14d,eax
0x00475c11: jg     0x140475dc3
0x00475c17: sub    edx,r9d
0x00475c1a: sub    edx,0x3
0x00475c1d: mov    DWORD PTR [rbp-0x65],edx
0x00475c20: mov    r13d,r15d
0x00475c23: mov    r11d,r15d
0x00475c26: mov    r14d,r15d
0x00475c29: mov    r10d,r15d
0x00475c2c: mov    DWORD PTR [rbp-0x75],r15d
0x00475c30: mov    rcx,QWORD PTR [rbx]
0x00475c33: mov    rax,rcx
0x00475c36: mov    r8,QWORD PTR [rbx+0x8]
0x00475c3a: nop    WORD PTR [rax+rax*1+0x0]
0x00475c40: cmp    rax,r8
0x00475c43: jae    0x140475c88
0x00475c45: mov    rdx,QWORD PTR [rax]
0x00475c48: mov    r9d,DWORD PTR [rdx+0x18]
0x00475c4c: mov    edx,DWORD PTR [rdx+0x14]
0x00475c4f: lea    r10d,[rdx+rdx*2]
0x00475c53: add    r10d,r10d
0x00475c56: cmp    r13d,r9d
0x00475c59: cmovg  r13d,r9d
0x00475c5d: cmp    r14d,r10d
0x00475c60: cmovg  r14d,r10d
0x00475c64: lea    edx,[r9+0x4]
0x00475c68: cmp    r11d,edx
0x00475c6b: cmovl  r11d,edx
0x00475c6f: lea    edx,[r10+0x4]
0x00475c73: mov    r10d,DWORD PTR [rbp-0x75]
0x00475c77: cmp    r10d,edx
0x00475c7a: cmovl  r10d,edx
0x00475c7e: mov    DWORD PTR [rbp-0x75],r10d
0x00475c82: add    rax,0x8
0x00475c86: jmp    0x140475c40
0x00475c88: mov    DWORD PTR [rbp-0x6d],r14d
0x00475c8c: mov    eax,DWORD PTR [rbp-0x65]
0x00475c8f: cdq
0x00475c90: sub    eax,edx
0x00475c92: sar    eax,1
0x00475c94: mov    ebx,eax
0x00475c96: mov    r9d,DWORD PTR [rbp-0x71]
0x00475c9a: dec    r9d
0x00475c9d: add    r9d,eax
0x00475ca0: mov    DWORD PTR [rbp-0x75],r9d
0x00475ca4: cmp    QWORD PTR [rsi+0x2c0],0x0
0x00475cac: mov    r14d,DWORD PTR [rbp-0x49]
0x00475cb0: je     0x140475d70
0x00475cb6: mov    r9d,r11d
0x00475cb9: sub    r9d,r13d
0x00475cbc: inc    r9d
0x00475cbf: mov    edx,DWORD PTR [rbp-0x65]
0x00475cc2: add    edx,0xfffffffe
0x00475cc5: cmp    r9d,edx
0x00475cc8: jl     0x140475d1d
0x00475cca: mov    r9,QWORD PTR [rsi+0x2c0]
0x00475cd1: mov    r9d,DWORD PTR [r9+0x18]
0x00475cd5: mov    edx,r9d
0x00475cd8: neg    edx
0x00475cda: lea    eax,[r9-0x2]
0x00475cde: add    eax,ebx
0x00475ce0: cmp    eax,r11d
0x00475ce3: jle    0x140475cfa
0x00475ce5: mov    edx,ebx
0x00475ce7: sub    edx,r11d
0x00475cea: sub    edx,0x2
0x00475ced: mov    r9d,DWORD PTR [rbp-0x75]
0x00475cf1: add    r9d,edx
0x00475cf4: mov    DWORD PTR [rbp-0x75],r9d
0x00475cf8: jmp    0x140475d21
0x00475cfa: sub    r9d,ebx
0x00475cfd: add    r9d,0x2
0x00475d01: cmp    r9d,r13d
0x00475d04: jge    0x140475d10
0x00475d06: mov    edx,0x2
0x00475d0b: sub    edx,r13d
0x00475d0e: sub    edx,ebx
0x00475d10: mov    r9d,DWORD PTR [rbp-0x75]
0x00475d14: add    r9d,edx
0x00475d17: mov    DWORD PTR [rbp-0x75],r9d
0x00475d1b: jmp    0x140475d21
0x00475d1d: mov    r9d,DWORD PTR [rbp-0x75]
0x00475d21: mov    edx,r10d
0x00475d24: sub    edx,DWORD PTR [rbp-0x6d]
0x00475d27: inc    edx
0x00475d29: mov    r11d,DWORD PTR [rbp-0x61]
0x00475d2d: lea    eax,[r11-0x2]
0x00475d31: cmp    edx,eax
0x00475d33: jl     0x140475d74
0x00475d35: mov    rax,QWORD PTR [rsi+0x2c0]
0x00475d3c: mov    edx,DWORD PTR [rax+0x14]
0x00475d3f: lea    eax,[rdx+rdx*2]
0x00475d42: add    eax,eax
0x00475d44: mov    r9d,0x6
0x00475d4a: sub    r9d,eax
0x00475d4d: lea    edx,[rdx+rdx*2]
0x00475d50: lea    edx,[rdx-0x4]
0x00475d53: lea    edx,[r11+rdx*2]
0x00475d57: cmp    edx,r10d
0x00475d5a: jle    0x140475d66
0x00475d5c: mov    r9d,r11d
0x00475d5f: sub    r9d,r10d
0x00475d62: sub    r9d,0x2
0x00475d66: lea    r10d,[r9+rdi*1]
0x00475d6a: mov    r9d,DWORD PTR [rbp-0x75]
0x00475d6e: jmp    0x140475d77
0x00475d70: mov    r11d,DWORD PTR [rbp-0x61]
0x00475d74: mov    r10d,edi
0x00475d77: cmp    rcx,r8
0x00475d7a: jae    0x140475dbc
0x00475d7c: mov    rdx,QWORD PTR [rcx]
0x00475d7f: cmp    rdx,QWORD PTR [rsi+0x2c0]
0x00475d86: je     0x140475db6
0x00475d88: mov    eax,DWORD PTR [rdx+0x18]
0x00475d8b: add    eax,r9d
0x00475d8e: cmp    r12d,eax
0x00475d91: jl     0x140475db6
0x00475d93: add    eax,0x4
0x00475d96: cmp    r12d,eax
0x00475d99: jg     0x140475db6
0x00475d9b: mov    eax,DWORD PTR [rdx+0x14]
0x00475d9e: lea    edx,[rax+rax*2]
0x00475da1: lea    eax,[r10+rdx*2]
0x00475da5: cmp    r14d,eax
0x00475da8: jl     0x140475db6
0x00475daa: add    eax,0x4
0x00475dad: cmp    r14d,eax
0x00475db0: jle    0x140475e38
0x00475db6: add    rcx,0x8
0x00475dba: jmp    0x140475d77
0x00475dbc: mov    ecx,DWORD PTR [rbp-0x79]
0x00475dbf: mov    r13,QWORD PTR [rbp-0x41]
0x00475dc3: add    edi,0x2
0x00475dc6: add    edi,r11d
0x00475dc9: jmp    0x140475e1c
0x00475dcb: cmp    r12d,DWORD PTR [rbp-0x71]
0x00475dcf: jl     0x140475e19
0x00475dd1: cmp    r12d,DWORD PTR [rbp-0x51]
0x00475dd5: jg     0x140475e19
0x00475dd7: cmp    r14d,edi
0x00475dda: jl     0x140475e19
0x00475ddc: lea    eax,[rdi+0x4]
0x00475ddf: cmp    r14d,eax
0x00475de2: jg     0x140475e19
0x00475de4: mov    DWORD PTR [rsi+0x294],ecx
0x00475dea: mov    rcx,rbx
0x00475ded: call   0x1400d1650
0x00475df2: mov    QWORD PTR [rsi+0x2c0],r15
0x00475df9: mov    rcx,QWORD PTR [rbx]
0x00475dfc: mov    rax,QWORD PTR [rbx+0x8]
0x00475e00: sub    rax,rcx
0x00475e03: sar    rax,0x3
0x00475e07: test   rax,rax
0x00475e0a: je     0x140475e16
0x00475e0c: mov    rax,QWORD PTR [rcx]
0x00475e0f: mov    QWORD PTR [rsi+0x2c0],rax
0x00475e16: mov    ecx,DWORD PTR [rbp-0x79]
0x00475e19: add    edi,0x5
0x00475e1c: inc    ecx
0x00475e1e: mov    DWORD PTR [rbp-0x79],ecx
0x00475e21: inc    r13
0x00475e24: mov    QWORD PTR [rbp-0x41],r13
0x00475e28: cmp    r13,QWORD PTR [rsp+0x20]
0x00475e2d: jl     0x140475bb0
0x00475e33: jmp    0x1404769a4
0x00475e38: mov    BYTE PTR [rip+0x1f1a78d],0x0        # 0x1423905cc
0x00475e3f: mov    rax,QWORD PTR [rcx]
0x00475e42: mov    QWORD PTR [rsi+0x2c0],rax
0x00475e49: mov    al,0x1
0x00475e4b: jmp    0x1404769a6
0x00475e50: mov    rbx,QWORD PTR [rsi+0x318]
0x00475e57: mov    rax,QWORD PTR [rsi+0x320]
0x00475e5e: sub    rax,rbx
0x00475e61: sar    rax,0x3
0x00475e65: lea    edx,[rax+rax*4]
0x00475e68: mov    DWORD PTR [rbp-0x71],edx
0x00475e6b: movsxd rcx,DWORD PTR [rsi+0x294]
0x00475e72: mov    edi,0x3
0x00475e77: test   ecx,ecx
0x00475e79: js     0x140475eb1
0x00475e7b: cmp    ecx,eax
0x00475e7d: jge    0x140475eb1
0x00475e7f: mov    rbx,QWORD PTR [rbx+rcx*8]
0x00475e83: mov    rcx,rbx
0x00475e86: call   0x1400d1840
0x00475e8b: mov    rax,QWORD PTR [rbx+0x80]
0x00475e92: sub    rax,QWORD PTR [rbx+0x78]
0x00475e96: sar    rax,0x3
0x00475e9a: cmp    eax,edi
0x00475e9c: cmovl  eax,edi
0x00475e9f: mov    edx,DWORD PTR [rbp-0x71]
0x00475ea2: dec    edx
0x00475ea4: add    edx,eax
0x00475ea6: mov    DWORD PTR [rbp-0x71],edx
0x00475ea9: movzx  r9d,BYTE PTR [rip+0x1f1a724]        # 0x1423905d5
0x00475eb1: lea    eax,[r13+0x2]
0x00475eb5: mov    DWORD PTR [rbp-0x4d],eax
0x00475eb8: mov    r8d,DWORD PTR [rbp-0x6d]
0x00475ebc: lea    eax,[r8-0x2]
0x00475ec0: mov    DWORD PTR [rbp-0x75],eax
0x00475ec3: mov    edi,DWORD PTR [rbp-0x79]
0x00475ec6: add    edi,0x4
0x00475ec9: mov    eax,DWORD PTR [rbp-0x65]
0x00475ecc: mov    ecx,eax
0x00475ece: sub    ecx,edi
0x00475ed0: dec    ecx
0x00475ed2: mov    DWORD PTR [rbp-0x59],ecx
0x00475ed5: cmp    edx,ecx
0x00475ed7: jle    0x140475ee3
0x00475ed9: lea    eax,[r8-0x4]
0x00475edd: mov    DWORD PTR [rbp-0x75],eax
0x00475ee0: mov    eax,DWORD PTR [rbp-0x65]
0x00475ee3: test   r9b,r9b
0x00475ee6: je     0x140475f6f
0x00475eec: cmp    edx,ecx
0x00475eee: jle    0x140475f6f
0x00475ef0: cmp    r12d,r13d
0x00475ef3: jl     0x140475f6f
0x00475ef5: cmp    r12d,r8d
0x00475ef8: jg     0x140475f6f
0x00475efa: cmp    r14d,edi
0x00475efd: jl     0x140475f6f
0x00475eff: cmp    r14d,eax
0x00475f02: jg     0x140475f6f
0x00475f04: mov    QWORD PTR [rsp+0x38],r15
0x00475f09: mov    eax,DWORD PTR [rsi+0x2c8]
0x00475f0f: mov    DWORD PTR [rsp+0x20],eax
0x00475f13: mov    DWORD PTR [rsp+0x24],r15d
0x00475f18: lea    eax,[rdx-0x1]
0x00475f1b: mov    DWORD PTR [rsp+0x28],eax
0x00475f1f: lea    eax,[rdi+0x1]
0x00475f22: mov    DWORD PTR [rsp+0x30],eax
0x00475f26: lea    eax,[rdi-0x2]
0x00475f29: add    eax,ecx
0x00475f2b: mov    DWORD PTR [rsp+0x34],eax
0x00475f2f: mov    DWORD PTR [rsp+0x2c],ecx
0x00475f33: lea    rcx,[rsp+0x20]
0x00475f38: call   0x1400bb3b0
0x00475f3d: lea    r9,[rsi+0x2cc]
0x00475f44: lea    r8,[rsi+0x2c8]
0x00475f4b: mov    rdx,QWORD PTR [rbp-0x41]
0x00475f4f: lea    rcx,[rsp+0x20]
0x00475f54: call   0x14140f2b0
0x00475f59: test   al,al
0x00475f5b: jne    0x1404769a4
0x00475f61: movzx  r9d,BYTE PTR [rip+0x1f1a66c]        # 0x1423905d5
0x00475f69: mov    ecx,DWORD PTR [rbp-0x59]
0x00475f6c: mov    edx,DWORD PTR [rbp-0x71]
0x00475f6f: cmp    BYTE PTR [rsi+0x2cc],0x0
0x00475f76: je     0x140475fea
0x00475f78: test   r9b,r9b
0x00475f7b: je     0x140475fde
0x00475f7d: cmp    BYTE PTR [rip+0x1f1a64a],0x0        # 0x1423905ce
0x00475f84: je     0x140475fde
0x00475f86: mov    QWORD PTR [rsp+0x38],r15
0x00475f8b: mov    eax,DWORD PTR [rsi+0x2c8]
0x00475f91: mov    DWORD PTR [rsp+0x20],eax
0x00475f95: mov    DWORD PTR [rsp+0x24],r15d
0x00475f9a: lea    eax,[rdx-0x1]
0x00475f9d: mov    DWORD PTR [rsp+0x28],eax
0x00475fa1: lea    eax,[rdi+0x1]
0x00475fa4: mov    DWORD PTR [rsp+0x30],eax
0x00475fa8: lea    eax,[rdi-0x2]
0x00475fab: add    eax,ecx
0x00475fad: mov    DWORD PTR [rsp+0x34],eax
0x00475fb1: mov    DWORD PTR [rsp+0x2c],ecx
0x00475fb5: lea    rcx,[rsp+0x20]
0x00475fba: call   0x1400bb3b0
0x00475fbf: mov    edx,DWORD PTR [rsp+0x30]
0x00475fc3: cmp    r14d,edx
0x00475fc6: jle    0x140475a74
0x00475fcc: mov    ecx,DWORD PTR [rsp+0x34]
0x00475fd0: cmp    r14d,ecx
0x00475fd3: jge    0x140475a87
0x00475fd9: jmp    0x140475a9f
0x00475fde: mov    BYTE PTR [rsi+0x2cc],0x0
0x00475fe5: jmp    0x1404769a4
0x00475fea: test   r9b,r9b
0x00475fed: je     0x1404769a4
0x00475ff3: cmp    BYTE PTR [rip+0x1f1a5d2],0x0        # 0x1423905cc
0x00475ffa: je     0x1404769a4
0x00476000: cmp    edx,ecx
0x00476002: jle    0x1404760e2
0x00476008: mov    eax,DWORD PTR [rbp-0x75]
0x0047600b: inc    eax
0x0047600d: cmp    r12d,eax
0x00476010: jl     0x1404760e2
0x00476016: inc    eax
0x00476018: cmp    r12d,eax
0x0047601b: jg     0x1404760e2
0x00476021: cmp    r14d,edi
0x00476024: jl     0x1404760e2
0x0047602a: lea    r8d,[rcx+rdi*1]
0x0047602e: lea    eax,[r8-0x1]
0x00476032: cmp    r14d,eax
0x00476035: jg     0x1404760e2
0x0047603b: mov    BYTE PTR [rip+0x1f1a58a],0x0        # 0x1423905cc
0x00476042: mov    eax,DWORD PTR [rsi+0x2c8]
0x00476048: mov    DWORD PTR [rsp+0x20],eax
0x0047604c: lea    eax,[rdx-0x1]
0x0047604f: mov    DWORD PTR [rsp+0x28],eax
0x00476053: lea    eax,[rdi+0x1]
0x00476056: mov    DWORD PTR [rsp+0x30],eax
0x0047605a: lea    eax,[r8-0x2]
0x0047605e: mov    DWORD PTR [rsp+0x2c],ecx
0x00476062: mov    QWORD PTR [rsp+0x38],r15
0x00476067: mov    DWORD PTR [rsp+0x24],r15d
0x0047606c: mov    DWORD PTR [rsp+0x34],eax
0x00476070: lea    rcx,[rsp+0x20]
0x00476075: call   0x1400bb3b0
0x0047607a: mov    eax,DWORD PTR [rsp+0x30]
0x0047607e: dec    eax
0x00476080: cmp    r14d,eax
0x00476083: mov    BYTE PTR [rsi+0x2cc],0x0
0x0047608a: je     0x1404757e3
0x00476090: mov    eax,DWORD PTR [rsp+0x34]
0x00476094: inc    eax
0x00476096: cmp    r14d,eax
0x00476099: je     0x14047580a
0x0047609f: cmp    r14d,DWORD PTR [rsp+0x38]
0x004760a4: jl     0x140475837
0x004760aa: cmp    r14d,DWORD PTR [rbp-0x7d]
0x004760ae: jg     0x1404760be
0x004760b0: mov    BYTE PTR [rsi+0x2cc],0x1
0x004760b7: mov    al,0x1
0x004760b9: jmp    0x1404769a6
0x004760be: mov    edx,DWORD PTR [rsp+0x20]
0x004760c2: add    edx,DWORD PTR [rsp+0x2c]
0x004760c6: mov    ecx,DWORD PTR [rsp+0x28]
0x004760ca: sub    ecx,DWORD PTR [rsp+0x2c]
0x004760ce: inc    ecx
0x004760d0: cmp    edx,ecx
0x004760d2: cmovg  edx,ecx
0x004760d5: mov    DWORD PTR [rsi+0x2c8],edx
0x004760db: mov    al,0x1
0x004760dd: jmp    0x1404769a6
0x004760e2: mov    eax,DWORD PTR [rsi+0x2c8]
0x004760e8: sub    edx,ecx
0x004760ea: cmp    eax,edx
0x004760ec: cmovle edx,eax
0x004760ef: mov    eax,r15d
0x004760f2: test   edx,edx
0x004760f4: cmovns eax,edx
0x004760f7: sub    edi,eax
0x004760f9: mov    rax,QWORD PTR [rsi+0x320]
0x00476100: sub    rax,QWORD PTR [rsi+0x318]
0x00476107: sar    rax,0x3
0x0047610b: test   eax,eax
0x0047610d: jle    0x1404769a4
0x00476113: mov    rbx,r15
0x00476116: cdqe
0x00476118: mov    QWORD PTR [rsp+0x20],rax
0x0047611d: nop    DWORD PTR [rax]
0x00476120: mov    rax,QWORD PTR [rsi+0x318]
0x00476127: mov    r13,QWORD PTR [rax+rbx*8]
0x0047612b: mov    rcx,r13
0x0047612e: call   0x1400d1840
0x00476133: mov    eax,0x3
0x00476138: mov    ecx,eax
0x0047613a: cmp    r15d,DWORD PTR [rsi+0x294]
0x00476141: jne    0x140476157
0x00476143: mov    rcx,QWORD PTR [r13+0x80]
0x0047614a: sub    rcx,QWORD PTR [r13+0x78]
0x0047614e: sar    rcx,0x3
0x00476152: cmp    ecx,eax
0x00476154: cmovl  ecx,eax
0x00476157: cmp    r12d,DWORD PTR [rbp-0x4d]
0x0047615b: jl     0x140476172
0x0047615d: cmp    r12d,DWORD PTR [rbp-0x75]
0x00476161: jg     0x140476172
0x00476163: cmp    r14d,edi
0x00476166: jl     0x140476172
0x00476168: lea    eax,[rdi+0x1]
0x0047616b: add    eax,ecx
0x0047616d: cmp    r14d,eax
0x00476170: jle    0x140476189
0x00476172: add    edi,0x2
0x00476175: add    edi,ecx
0x00476177: inc    r15d
0x0047617a: inc    rbx
0x0047617d: cmp    rbx,QWORD PTR [rsp+0x20]
0x00476182: jl     0x140476120
0x00476184: jmp    0x1404769a4
0x00476189: mov    BYTE PTR [rip+0x1f1a43c],0x0        # 0x1423905cc
0x00476190: mov    DWORD PTR [rsi+0x294],r15d
0x00476197: mov    rcx,r13
0x0047619a: call   0x1400d1840
0x0047619f: mov    al,0x1
0x004761a1: jmp    0x1404769a6
0x004761a6: lea    r10d,[r13+0x2]
0x004761aa: mov    DWORD PTR [rbp-0x61],r10d
0x004761ae: cmp    QWORD PTR [rsi+0x230],0x0
0x004761b6: je     0x140476605
0x004761bc: mov    r8d,DWORD PTR [rbp-0x6d]
0x004761c0: lea    ebx,[r8-0x4]
0x004761c4: sub    ebx,r10d
0x004761c7: inc    ebx
0x004761c9: mov    DWORD PTR [rbp-0x59],ebx
0x004761cc: cmp    DWORD PTR [rsi+0x210],ebx
0x004761d2: je     0x140476314
0x004761d8: lea    r13,[rsi+0x1f8]
0x004761df: mov    rcx,r13
0x004761e2: call   0x1400bb9b0
0x004761e7: mov    DWORD PTR [rsi+0x210],ebx
0x004761ed: mov    r8d,ebx
0x004761f0: mov    rdx,QWORD PTR [rsi+0x230]
0x004761f7: mov    rcx,r13
0x004761fa: call   0x1408e7310
0x004761ff: mov    rdx,QWORD PTR [rsi+0x230]
0x00476206: add    rdx,0x28
0x0047620a: mov    r8d,ebx
0x0047620d: mov    rcx,r13
0x00476210: call   0x1408e7310
0x00476215: mov    ecx,0x20
0x0047621a: call   0x141539690
0x0047621f: mov    rbx,rax
0x00476222: xorps  xmm0,xmm0
0x00476225: movups XMMWORD PTR [rax],xmm0
0x00476228: mov    QWORD PTR [rax+0x10],r15
0x0047622c: mov    QWORD PTR [rax+0x18],0xf
0x00476234: mov    BYTE PTR [rax],0x0
0x00476237: mov    QWORD PTR [rsp+0x20],rax
0x0047623c: xor    r8d,r8d
0x0047623f: lea    rdx,[rip+0x11752b2]        # 0x1415eb4f8
0x00476246: mov    rcx,rax
0x00476249: call   0x14006f8d0
0x0047624e: mov    rdx,QWORD PTR [r13+0x8]
0x00476252: cmp    rdx,QWORD PTR [r13+0x10]
0x00476256: je     0x140476262
0x00476258: mov    QWORD PTR [rdx],rbx
0x0047625b: add    QWORD PTR [r13+0x8],0x8
0x00476260: jmp    0x14047626f
0x00476262: lea    r8,[rsp+0x20]
0x00476267: mov    rcx,r13
0x0047626a: call   0x1400bad30
0x0047626f: mov    rdi,QWORD PTR [rsi+0x230]
0x00476276: mov    rbx,QWORD PTR [rdi+0x110]
0x0047627d: mov    rdi,QWORD PTR [rdi+0x118]
0x00476284: mov    r14d,DWORD PTR [rbp-0x59]
0x00476288: cmp    rbx,rdi
0x0047628b: jae    0x140476300
0x0047628d: mov    ecx,0x20
0x00476292: call   0x141539690
0x00476297: mov    QWORD PTR [rsp+0x20],rax
0x0047629c: xorps  xmm0,xmm0
0x0047629f: movups XMMWORD PTR [rax],xmm0
0x004762a2: mov    QWORD PTR [rax+0x10],r15
0x004762a6: mov    QWORD PTR [rax+0x18],0xf
0x004762ae: mov    BYTE PTR [rax],0x0
0x004762b1: mov    QWORD PTR [rbp-0x59],rax
0x004762b5: xor    r8d,r8d
0x004762b8: lea    rdx,[rip+0x1175239]        # 0x1415eb4f8
0x004762bf: mov    rcx,rax
0x004762c2: call   0x14006f8d0
0x004762c7: mov    rdx,QWORD PTR [r13+0x8]
0x004762cb: cmp    rdx,QWORD PTR [r13+0x10]
0x004762cf: je     0x1404762e0
0x004762d1: mov    rax,QWORD PTR [rsp+0x20]
0x004762d6: mov    QWORD PTR [rdx],rax
0x004762d9: add    QWORD PTR [r13+0x8],0x8
0x004762de: jmp    0x1404762ec
0x004762e0: lea    r8,[rbp-0x59]
0x004762e4: mov    rcx,r13
0x004762e7: call   0x1400bad30
0x004762ec: mov    r8d,r14d
0x004762ef: mov    rdx,QWORD PTR [rbx]
0x004762f2: mov    rcx,r13
0x004762f5: call   0x1408e7310
0x004762fa: add    rbx,0x8
0x004762fe: jmp    0x140476288
0x00476300: movzx  r9d,BYTE PTR [rip+0x1f1a2cd]        # 0x1423905d5
0x00476308: mov    r14d,DWORD PTR [rbp-0x49]
0x0047630c: mov    r13d,DWORD PTR [rbp-0x4d]
0x00476310: mov    r8d,DWORD PTR [rbp-0x6d]
0x00476314: mov    ecx,DWORD PTR [rbp-0x79]
0x00476317: add    ecx,0x4
0x0047631a: mov    DWORD PTR [rbp-0x59],ecx
0x0047631d: mov    eax,DWORD PTR [rbp-0x65]
0x00476320: mov    edi,eax
0x00476322: sub    edi,ecx
0x00476324: dec    edi
0x00476326: mov    rdx,QWORD PTR [rsi+0x200]
0x0047632d: sub    rdx,QWORD PTR [rsi+0x1f8]
0x00476334: sar    rdx,0x3
0x00476338: mov    QWORD PTR [rsp+0x20],rdx
0x0047633d: test   r9b,r9b
0x00476340: je     0x1404763be
0x00476342: cmp    edx,edi
0x00476344: jle    0x1404763be
0x00476346: cmp    r12d,r13d
0x00476349: jl     0x1404763be
0x0047634b: cmp    r12d,r8d
0x0047634e: jg     0x1404763be
0x00476350: cmp    r14d,ecx
0x00476353: jl     0x1404763be
0x00476355: cmp    r14d,eax
0x00476358: jg     0x1404763be
0x0047635a: mov    QWORD PTR [rbp-0x21],r15
0x0047635e: mov    eax,DWORD PTR [rsi+0x240]
0x00476364: mov    DWORD PTR [rbp-0x39],eax
0x00476367: mov    DWORD PTR [rbp-0x35],r15d
0x0047636b: lea    eax,[rdx-0x1]
0x0047636e: mov    DWORD PTR [rbp-0x31],eax
0x00476371: lea    eax,[rcx+0x1]
0x00476374: mov    DWORD PTR [rbp-0x29],eax
0x00476377: lea    eax,[rcx-0x2]
0x0047637a: add    eax,edi
0x0047637c: mov    DWORD PTR [rbp-0x25],eax
0x0047637f: mov    DWORD PTR [rbp-0x2d],edi
0x00476382: lea    rcx,[rbp-0x39]
0x00476386: call   0x1400bb3b0
0x0047638b: lea    r9,[rsi+0x244]
0x00476392: lea    r8,[rsi+0x240]
0x00476399: mov    rdx,QWORD PTR [rbp-0x41]
0x0047639d: lea    rcx,[rbp-0x39]
0x004763a1: call   0x14140f2b0
0x004763a6: test   al,al
0x004763a8: jne    0x1404769a4
0x004763ae: movzx  r9d,BYTE PTR [rip+0x1f1a21f]        # 0x1423905d5
0x004763b6: mov    ecx,DWORD PTR [rbp-0x59]
0x004763b9: mov    rdx,QWORD PTR [rsp+0x20]
0x004763be: cmp    BYTE PTR [rsi+0x244],0x0
0x004763c5: je     0x1404764bc
0x004763cb: test   r9b,r9b
0x004763ce: je     0x1404764b0
0x004763d4: cmp    BYTE PTR [rip+0x1f1a1f3],0x0        # 0x1423905ce
0x004763db: je     0x1404764b0
0x004763e1: mov    QWORD PTR [rsp+0x38],r15
0x004763e6: mov    eax,DWORD PTR [rsi+0x240]
0x004763ec: mov    DWORD PTR [rsp+0x20],eax
0x004763f0: mov    DWORD PTR [rsp+0x24],r15d
0x004763f5: lea    eax,[rdx-0x1]
0x004763f8: mov    DWORD PTR [rsp+0x28],eax
0x004763fc: lea    eax,[rcx+0x1]
0x004763ff: mov    DWORD PTR [rsp+0x30],eax
0x00476403: lea    eax,[rdi-0x2]
0x00476406: add    eax,ecx
0x00476408: mov    DWORD PTR [rsp+0x34],eax
0x0047640c: mov    DWORD PTR [rsp+0x2c],edi
0x00476410: lea    rcx,[rsp+0x20]
0x00476415: call   0x1400bb3b0
0x0047641a: mov    edx,DWORD PTR [rsp+0x30]
0x0047641e: cmp    r14d,edx
0x00476421: jg     0x14047642d
0x00476423: mov    eax,DWORD PTR [rsp+0x24]
0x00476427: mov    DWORD PTR [rsp+0x20],eax
0x0047642b: jmp    0x140476497
0x0047642d: mov    ecx,DWORD PTR [rsp+0x34]
0x00476431: cmp    r14d,ecx
0x00476434: jl     0x14047644e
0x00476436: mov    eax,DWORD PTR [rsp+0x28]
0x0047643a: sub    eax,DWORD PTR [rsp+0x2c]
0x0047643e: inc    eax
0x00476440: mov    DWORD PTR [rsp+0x20],eax
0x00476444: mov    ecx,DWORD PTR [rsp+0x24]
0x00476448: cmp    eax,ecx
0x0047644a: jge    0x140476497
0x0047644c: jmp    0x140476493
0x0047644e: cmp    ecx,edx
0x00476450: jle    0x140476497
0x00476452: mov    r8d,DWORD PTR [rsp+0x28]
0x00476457: sub    r8d,DWORD PTR [rsp+0x2c]
0x0047645c: mov    eax,r8d
0x0047645f: mov    r9d,DWORD PTR [rsp+0x24]
0x00476464: sub    eax,r9d
0x00476467: add    eax,0x1
0x0047646a: cmovns r15d,eax
0x0047646e: sub    r14d,edx
0x00476471: imul   r15d,r14d
0x00476475: sub    ecx,edx
0x00476477: inc    ecx
0x00476479: mov    eax,r15d
0x0047647c: cdq
0x0047647d: idiv   ecx
0x0047647f: lea    ecx,[rax+r9*1]
0x00476483: lea    eax,[r8+0x1]
0x00476487: cmp    ecx,eax
0x00476489: cmovg  ecx,eax
0x0047648c: cmp    ecx,r9d
0x0047648f: cmovl  ecx,r9d
0x00476493: mov    DWORD PTR [rsp+0x20],ecx
0x00476497: lea    rcx,[rsp+0x20]
0x0047649c: call   0x1400bb3b0
0x004764a1: mov    eax,DWORD PTR [rsp+0x20]
0x004764a5: mov    DWORD PTR [rsi+0x240],eax
0x004764ab: jmp    0x1404769a4
0x004764b0: mov    BYTE PTR [rsi+0x244],0x0
0x004764b7: jmp    0x1404769a4
0x004764bc: test   r9b,r9b
0x004764bf: je     0x1404769a4
0x004764c5: cmp    BYTE PTR [rip+0x1f1a100],0x0        # 0x1423905cc
0x004764cc: je     0x1404769a4
0x004764d2: cmp    edx,edi
0x004764d4: jle    0x1404769a4
0x004764da: mov    eax,DWORD PTR [rbp-0x6d]
0x004764dd: add    eax,0xfffffffd
0x004764e0: cmp    r12d,eax
0x004764e3: jl     0x1404769a4
0x004764e9: inc    eax
0x004764eb: cmp    r12d,eax
0x004764ee: jg     0x1404769a4
0x004764f4: cmp    r14d,ecx
0x004764f7: jl     0x1404769a4
0x004764fd: lea    r8d,[rcx+rdi*1]
0x00476501: lea    eax,[r8-0x1]
0x00476505: cmp    r14d,eax
0x00476508: jg     0x1404769a4
0x0047650e: mov    BYTE PTR [rip+0x1f1a0b7],0x0        # 0x1423905cc
0x00476515: mov    QWORD PTR [rsp+0x38],r15
0x0047651a: mov    eax,DWORD PTR [rsi+0x240]
0x00476520: mov    DWORD PTR [rsp+0x20],eax
0x00476524: mov    DWORD PTR [rsp+0x24],r15d
0x00476529: lea    eax,[rdx-0x1]
0x0047652c: mov    DWORD PTR [rsp+0x28],eax
0x00476530: lea    eax,[rcx+0x1]
0x00476533: mov    DWORD PTR [rsp+0x30],eax
0x00476537: lea    eax,[r8-0x2]
0x0047653b: mov    DWORD PTR [rsp+0x34],eax
0x0047653f: mov    DWORD PTR [rsp+0x2c],edi
0x00476543: lea    rcx,[rsp+0x20]
0x00476548: call   0x1400bb3b0
0x0047654d: mov    BYTE PTR [rsi+0x244],0x0
0x00476554: mov    eax,DWORD PTR [rsp+0x30]
0x00476558: dec    eax
0x0047655a: cmp    r14d,eax
0x0047655d: jne    0x14047657b
0x0047655f: mov    ecx,DWORD PTR [rsp+0x20]
0x00476563: dec    ecx
0x00476565: cmp    ecx,DWORD PTR [rsp+0x24]
0x00476569: cmovl  ecx,DWORD PTR [rsp+0x24]
0x0047656e: mov    DWORD PTR [rsi+0x240],ecx
0x00476574: mov    al,0x1
0x00476576: jmp    0x1404769a6
0x0047657b: mov    eax,DWORD PTR [rsp+0x34]
0x0047657f: inc    eax
0x00476581: cmp    r14d,eax
0x00476584: jne    0x1404765a8
0x00476586: mov    ecx,DWORD PTR [rsp+0x20]
0x0047658a: inc    ecx
0x0047658c: mov    eax,DWORD PTR [rsp+0x28]
0x00476590: sub    eax,DWORD PTR [rsp+0x2c]
0x00476594: inc    eax
0x00476596: cmp    ecx,eax
0x00476598: cmovg  ecx,eax
0x0047659b: mov    DWORD PTR [rsi+0x240],ecx
0x004765a1: mov    al,0x1
0x004765a3: jmp    0x1404769a6
0x004765a8: cmp    r14d,DWORD PTR [rsp+0x38]
0x004765ad: jl     0x1404765e7
0x004765af: cmp    r14d,DWORD PTR [rbp-0x7d]
0x004765b3: jg     0x1404765c3
0x004765b5: mov    BYTE PTR [rsi+0x244],0x1
0x004765bc: mov    al,0x1
0x004765be: jmp    0x1404769a6
0x004765c3: mov    edx,DWORD PTR [rsp+0x20]
0x004765c7: add    edx,DWORD PTR [rsp+0x2c]
0x004765cb: mov    ecx,DWORD PTR [rsp+0x28]
0x004765cf: sub    ecx,DWORD PTR [rsp+0x2c]
0x004765d3: inc    ecx
0x004765d5: cmp    edx,ecx
0x004765d7: cmovg  edx,ecx
0x004765da: mov    DWORD PTR [rsi+0x240],edx
0x004765e0: mov    al,0x1
0x004765e2: jmp    0x1404769a6
0x004765e7: mov    ecx,DWORD PTR [rsp+0x20]
0x004765eb: sub    ecx,DWORD PTR [rsp+0x2c]
0x004765ef: cmp    ecx,DWORD PTR [rsp+0x24]
0x004765f3: cmovl  ecx,DWORD PTR [rsp+0x24]
0x004765f8: mov    DWORD PTR [rsi+0x240],ecx
0x004765fe: mov    al,0x1
0x00476600: jmp    0x1404769a6
0x00476605: mov    r11d,DWORD PTR [rbp-0x6d]
0x00476609: lea    eax,[r11-0x2]
0x0047660d: mov    DWORD PTR [rbp-0x71],eax
0x00476610: mov    edi,DWORD PTR [rbp-0x79]
0x00476613: add    edi,0x4
0x00476616: mov    ebx,DWORD PTR [rbp-0x65]
0x00476619: mov    ecx,ebx
0x0047661b: sub    ecx,edi
0x0047661d: dec    ecx
0x0047661f: mov    eax,0x55555556
0x00476624: imul   ecx
0x00476626: mov    eax,edx
0x00476628: shr    eax,0x1f
0x0047662b: add    edx,eax
0x0047662d: mov    DWORD PTR [rbp-0x59],edx
0x00476630: mov    r8,QWORD PTR [rsi+0x220]
0x00476637: sub    r8,QWORD PTR [rsi+0x218]
0x0047663e: sar    r8,0x3
0x00476642: mov    QWORD PTR [rsp+0x20],r8
0x00476647: cmp    r8d,edx
0x0047664a: jle    0x140476653
0x0047664c: lea    eax,[r11-0x4]
0x00476650: mov    DWORD PTR [rbp-0x71],eax
0x00476653: test   r9b,r9b
0x00476656: je     0x1404766e5
0x0047665c: cmp    r8d,edx
0x0047665f: jle    0x1404766e5
0x00476665: cmp    r12d,r13d
0x00476668: jl     0x1404766e5
0x0047666a: cmp    r12d,r11d
0x0047666d: jg     0x1404766e5
0x0047666f: cmp    r14d,edi
0x00476672: jl     0x1404766e5
0x00476674: cmp    r14d,ebx
0x00476677: jg     0x1404766e5
0x00476679: mov    QWORD PTR [rbp-0x21],r15
0x0047667d: mov    eax,DWORD PTR [rsi+0x238]
0x00476683: mov    DWORD PTR [rbp-0x39],eax
0x00476686: mov    DWORD PTR [rbp-0x35],r15d
0x0047668a: lea    eax,[r8-0x1]
0x0047668e: mov    DWORD PTR [rbp-0x31],eax
0x00476691: lea    eax,[rdi+0x1]
0x00476694: mov    DWORD PTR [rbp-0x29],eax
0x00476697: lea    ecx,[rdi-0x2]
0x0047669a: lea    ecx,[rcx+rdx*2]
0x0047669d: add    ecx,edx
0x0047669f: mov    DWORD PTR [rbp-0x25],ecx
0x004766a2: mov    DWORD PTR [rbp-0x2d],edx
0x004766a5: lea    rcx,[rbp-0x39]
0x004766a9: call   0x1400bb3b0
0x004766ae: lea    r9,[rsi+0x23c]
0x004766b5: lea    r8,[rsi+0x238]
0x004766bc: mov    rdx,QWORD PTR [rbp-0x41]
0x004766c0: lea    rcx,[rbp-0x39]
0x004766c4: call   0x14140f2b0
0x004766c9: test   al,al
0x004766cb: jne    0x1404769a4
0x004766d1: movzx  r9d,BYTE PTR [rip+0x1f19efc]        # 0x1423905d5
0x004766d9: mov    edx,DWORD PTR [rbp-0x59]
0x004766dc: mov    r8,QWORD PTR [rsp+0x20]
0x004766e1: mov    r10d,DWORD PTR [rbp-0x61]
0x004766e5: cmp    BYTE PTR [rsi+0x23c],0x0
0x004766ec: je     0x1404767e7
0x004766f2: test   r9b,r9b
0x004766f5: je     0x1404767db
0x004766fb: cmp    BYTE PTR [rip+0x1f19ecc],0x0        # 0x1423905ce
0x00476702: je     0x1404767db
0x00476708: mov    QWORD PTR [rsp+0x38],r15
0x0047670d: mov    eax,DWORD PTR [rsi+0x238]
0x00476713: mov    DWORD PTR [rsp+0x20],eax
0x00476717: mov    DWORD PTR [rsp+0x24],r15d
0x0047671c: lea    eax,[r8-0x1]
0x00476720: mov    DWORD PTR [rsp+0x28],eax
0x00476724: lea    eax,[rdi+0x1]
0x00476727: mov    DWORD PTR [rsp+0x30],eax
0x0047672b: lea    ecx,[rdi-0x2]
0x0047672e: lea    ecx,[rcx+rdx*2]
0x00476731: add    ecx,edx
0x00476733: mov    DWORD PTR [rsp+0x34],ecx
0x00476737: mov    DWORD PTR [rsp+0x2c],edx
0x0047673b: lea    rcx,[rsp+0x20]
0x00476740: call   0x1400bb3b0
0x00476745: mov    edx,DWORD PTR [rsp+0x30]
0x00476749: cmp    r14d,edx
0x0047674c: jg     0x140476758
0x0047674e: mov    eax,DWORD PTR [rsp+0x24]
0x00476752: mov    DWORD PTR [rsp+0x20],eax
0x00476756: jmp    0x1404767c2
0x00476758: mov    ecx,DWORD PTR [rsp+0x34]
0x0047675c: cmp    r14d,ecx
0x0047675f: jl     0x140476779
0x00476761: mov    eax,DWORD PTR [rsp+0x28]
0x00476765: sub    eax,DWORD PTR [rsp+0x2c]
0x00476769: inc    eax
0x0047676b: mov    DWORD PTR [rsp+0x20],eax
0x0047676f: mov    ecx,DWORD PTR [rsp+0x24]
0x00476773: cmp    eax,ecx
0x00476775: jge    0x1404767c2
0x00476777: jmp    0x1404767be
0x00476779: cmp    ecx,edx
0x0047677b: jle    0x1404767c2
0x0047677d: mov    r8d,DWORD PTR [rsp+0x28]
0x00476782: sub    r8d,DWORD PTR [rsp+0x2c]
0x00476787: mov    eax,r8d
0x0047678a: mov    r9d,DWORD PTR [rsp+0x24]
0x0047678f: sub    eax,r9d
0x00476792: add    eax,0x1
0x00476795: cmovns r15d,eax
0x00476799: sub    r14d,edx
0x0047679c: imul   r15d,r14d
0x004767a0: sub    ecx,edx
0x004767a2: inc    ecx
0x004767a4: mov    eax,r15d
0x004767a7: cdq
0x004767a8: idiv   ecx
0x004767aa: lea    ecx,[rax+r9*1]
0x004767ae: lea    eax,[r8+0x1]
0x004767b2: cmp    ecx,eax
0x004767b4: cmovg  ecx,eax
0x004767b7: cmp    ecx,r9d
0x004767ba: cmovl  ecx,r9d
0x004767be: mov    DWORD PTR [rsp+0x20],ecx
0x004767c2: lea    rcx,[rsp+0x20]
0x004767c7: call   0x1400bb3b0
0x004767cc: mov    eax,DWORD PTR [rsp+0x20]
0x004767d0: mov    DWORD PTR [rsi+0x238],eax
0x004767d6: jmp    0x1404769a4
0x004767db: mov    BYTE PTR [rsi+0x23c],0x0
0x004767e2: jmp    0x1404769a4
0x004767e7: test   r9b,r9b
0x004767ea: je     0x1404769a4
0x004767f0: cmp    BYTE PTR [rip+0x1f19dd5],0x0        # 0x1423905cc
0x004767f7: je     0x1404769a4
0x004767fd: mov    r9d,DWORD PTR [rbp-0x71]
0x00476801: cmp    r8d,edx
0x00476804: jle    0x140476921
0x0047680a: lea    eax,[r9+0x1]
0x0047680e: cmp    r12d,eax
0x00476811: jl     0x140476921
0x00476817: inc    eax
0x00476819: cmp    r12d,eax
0x0047681c: jg     0x140476921
0x00476822: cmp    r14d,edi
0x00476825: jl     0x140476921
0x0047682b: lea    ecx,[rdi+rdx*2]
0x0047682e: lea    eax,[rcx-0x1]
0x00476831: add    eax,edx
0x00476833: cmp    r14d,eax
0x00476836: jg     0x140476921
0x0047683c: mov    BYTE PTR [rip+0x1f19d89],0x0        # 0x1423905cc
0x00476843: mov    QWORD PTR [rsp+0x38],r15
0x00476848: mov    eax,DWORD PTR [rsi+0x238]
0x0047684e: mov    DWORD PTR [rsp+0x20],eax
0x00476852: mov    DWORD PTR [rsp+0x24],r15d
0x00476857: lea    eax,[r8-0x1]
0x0047685b: mov    DWORD PTR [rsp+0x28],eax
0x0047685f: lea    eax,[rdi+0x1]
0x00476862: mov    DWORD PTR [rsp+0x30],eax
0x00476866: lea    eax,[rcx-0x2]
0x00476869: add    eax,edx
0x0047686b: mov    DWORD PTR [rsp+0x34],eax
0x0047686f: mov    DWORD PTR [rsp+0x2c],edx
0x00476873: lea    rcx,[rsp+0x20]
0x00476878: call   0x1400bb3b0
0x0047687d: mov    BYTE PTR [rsi+0x23c],0x0
0x00476884: mov    eax,DWORD PTR [rsp+0x30]
0x00476888: dec    eax
0x0047688a: cmp    r14d,eax
0x0047688d: jne    0x140476897
0x0047688f: mov    ecx,DWORD PTR [rsp+0x20]
0x00476893: dec    ecx
0x00476895: jmp    0x14047690b
0x00476897: mov    eax,DWORD PTR [rsp+0x34]
0x0047689b: inc    eax
0x0047689d: cmp    r14d,eax
0x004768a0: jne    0x1404768c4
0x004768a2: mov    ecx,DWORD PTR [rsp+0x20]
0x004768a6: inc    ecx
0x004768a8: mov    eax,DWORD PTR [rsp+0x28]
0x004768ac: sub    eax,DWORD PTR [rsp+0x2c]
0x004768b0: inc    eax
0x004768b2: cmp    ecx,eax
0x004768b4: cmovg  ecx,eax
0x004768b7: mov    DWORD PTR [rsi+0x238],ecx
0x004768bd: mov    al,0x1
0x004768bf: jmp    0x1404769a6
0x004768c4: cmp    r14d,DWORD PTR [rsp+0x38]
0x004768c9: jl     0x140476903
0x004768cb: cmp    r14d,DWORD PTR [rbp-0x7d]
0x004768cf: jg     0x1404768df
0x004768d1: mov    BYTE PTR [rsi+0x23c],0x1
0x004768d8: mov    al,0x1
0x004768da: jmp    0x1404769a6
0x004768df: mov    edx,DWORD PTR [rsp+0x20]
0x004768e3: add    edx,DWORD PTR [rsp+0x2c]
0x004768e7: mov    ecx,DWORD PTR [rsp+0x28]
0x004768eb: sub    ecx,DWORD PTR [rsp+0x2c]
0x004768ef: inc    ecx
0x004768f1: cmp    edx,ecx
0x004768f3: cmovg  edx,ecx
0x004768f6: mov    DWORD PTR [rsi+0x238],edx
0x004768fc: mov    al,0x1
0x004768fe: jmp    0x1404769a6
0x00476903: mov    ecx,DWORD PTR [rsp+0x20]
0x00476907: sub    ecx,DWORD PTR [rsp+0x2c]
0x0047690b: cmp    ecx,DWORD PTR [rsp+0x24]
0x0047690f: cmovl  ecx,DWORD PTR [rsp+0x24]
0x00476914: mov    DWORD PTR [rsi+0x238],ecx
0x0047691a: mov    al,0x1
0x0047691c: jmp    0x1404769a6
0x00476921: mov    eax,DWORD PTR [rsi+0x238]
0x00476927: mov    ecx,r8d
0x0047692a: sub    ecx,edx
0x0047692c: cmp    eax,ecx
0x0047692e: cmovle ecx,eax
0x00476931: mov    ebx,r15d
0x00476934: test   ecx,ecx
0x00476936: cmovns ebx,ecx
0x00476939: lea    ecx,[rbx+rdx*1]
0x0047693c: cmp    ebx,ecx
0x0047693e: jge    0x1404769a4
0x00476940: cmp    ebx,r8d
0x00476943: jge    0x1404769a4
0x00476945: cmp    r12d,r10d
0x00476948: jl     0x14047695c
0x0047694a: cmp    r12d,r9d
0x0047694d: jg     0x14047695c
0x0047694f: cmp    r14d,edi
0x00476952: jl     0x14047695c
0x00476954: lea    eax,[rdi+0x2]
0x00476957: cmp    r14d,eax
0x0047695a: jle    0x140476967
0x0047695c: add    edi,0x3
0x0047695f: inc    ebx
0x00476961: cmp    ebx,ecx
0x00476963: jl     0x140476940
0x00476965: jmp    0x1404769a4
0x00476967: mov    BYTE PTR [rip+0x1f19c5e],0x0        # 0x1423905cc
0x0047696e: lea    rcx,[rsi+0x1f8]
0x00476975: call   0x1400bb9b0
0x0047697a: mov    DWORD PTR [rsi+0x210],r15d
0x00476981: mov    DWORD PTR [rsi+0x240],r15d
0x00476988: mov    BYTE PTR [rsi+0x244],0x0
0x0047698f: movsxd rcx,ebx
0x00476992: mov    rax,QWORD PTR [rsi+0x218]
0x00476999: mov    rcx,QWORD PTR [rax+rcx*8]
0x0047699d: mov    QWORD PTR [rsi+0x230],rcx
0x004769a4: xor    al,al
0x004769a6: mov    rcx,QWORD PTR [rbp+0x7]
0x004769aa: xor    rcx,rsp
0x004769ad: call   0x141539660
0x004769b2: mov    rbx,QWORD PTR [rsp+0x120]
0x004769ba: add    rsp,0xd0
0x004769c1: pop    r15
0x004769c3: pop    r14
0x004769c5: pop    r13
0x004769c7: pop    r12
0x004769c9: pop    rdi
0x004769ca: pop    rsi
0x004769cb: pop    rbp
0x004769cc: ret
