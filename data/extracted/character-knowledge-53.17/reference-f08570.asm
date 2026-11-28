; reference PE:6aea05a1:02734000; reference-description:general_ref_historical_figurest; RVA 0xf08570..0xf0896e; code ends 0xf0896e
0x00f08570: mov    QWORD PTR [rsp+0x8],rbx
0x00f08575: mov    QWORD PTR [rsp+0x18],rbp
0x00f0857a: push   rsi
0x00f0857b: push   rdi
0x00f0857c: push   r14
0x00f0857e: sub    rsp,0x60
0x00f08582: mov    rax,QWORD PTR [rip+0x9b5ab7]        # 0x1418be040
0x00f08589: xor    rax,rsp
0x00f0858c: mov    QWORD PTR [rsp+0x50],rax
0x00f08591: mov    ebp,r8d
0x00f08594: mov    rdi,rdx
0x00f08597: mov    QWORD PTR [rdx+0x10],0x0
0x00f0859f: mov    rax,rdx
0x00f085a2: cmp    QWORD PTR [rdx+0x18],0xf
0x00f085a7: jbe    0x140f085ac
0x00f085a9: mov    rax,QWORD PTR [rdx]
0x00f085ac: mov    BYTE PTR [rax],0x0
0x00f085af: mov    r10d,DWORD PTR [rcx+0x8]
0x00f085b3: mov    r11,QWORD PTR [rip+0x1613be6]        # 0x14251c1a0
0x00f085ba: mov    r14,QWORD PTR [rip+0x1613bd7]        # 0x14251c198
0x00f085c1: sub    r11,r14
0x00f085c4: sar    r11,0x3
0x00f085c8: test   r11,r11
0x00f085cb: je     0x140f0894c
0x00f085d1: cmp    r10d,0xffffffff
0x00f085d5: je     0x140f0894c
0x00f085db: xor    edx,edx
0x00f085dd: lea    r8d,[r11-0x1]
0x00f085e1: test   r8d,r8d
0x00f085e4: js     0x140f0894c
0x00f085ea: nop    WORD PTR [rax+rax*1+0x0]
0x00f085f0: lea    ecx,[r8+rdx*1]
0x00f085f4: sar    ecx,1
0x00f085f6: movsxd rax,ecx
0x00f085f9: mov    rbx,QWORD PTR [r14+rax*8]
0x00f085fd: cmp    DWORD PTR [rbx+0xe0],r10d
0x00f08604: je     0x140f08620
0x00f08606: lea    eax,[rcx-0x1]
0x00f08609: cmovle eax,r8d
0x00f0860d: mov    r8d,eax
0x00f08610: lea    eax,[rcx+0x1]
0x00f08613: cmovle edx,eax
0x00f08616: cmp    edx,r8d
0x00f08619: jle    0x140f085f0
0x00f0861b: jmp    0x140f0894c
0x00f08620: test   rbx,rbx
0x00f08623: je     0x140f0894c
0x00f08629: cmp    DWORD PTR [rbx+0xd0],0x0
0x00f08630: jle    0x140f086cf
0x00f08636: mov    rax,QWORD PTR [rbx+0xc8]
0x00f0863d: test   BYTE PTR [rax],0x4
0x00f08640: je     0x140f08686
0x00f08642: movzx  eax,BYTE PTR [rbx+0xaa]
0x00f08649: mov    ecx,0x2
0x00f0864e: mov    r8d,0x4
0x00f08654: test   al,al
0x00f08656: cmove  r8d,ecx
0x00f0865a: lea    rcx,[rip+0x70023f]        # 0x1416088a0 ; literal="a "
0x00f08661: lea    rdx,[rip+0x6fba9c]        # 0x141604104 ; literal="the "
0x00f08668: cmove  rdx,rcx
0x00f0866c: mov    rcx,rdi
0x00f0866f: call   0x140070f00
0x00f08674: mov    r8d,0x5
0x00f0867a: lea    rdx,[rip+0x77a1db]        # 0x14168285c ; literal="deity"
0x00f08681: jmp    0x140f0883a
0x00f08686: test   BYTE PTR [rax],0x8
0x00f08689: je     0x140f086cf
0x00f0868b: movzx  eax,BYTE PTR [rbx+0xaa]
0x00f08692: mov    ecx,0x2
0x00f08697: mov    r8d,0x4
0x00f0869d: test   al,al
0x00f0869f: cmove  r8d,ecx
0x00f086a3: lea    rcx,[rip+0x7001f6]        # 0x1416088a0 ; literal="a "
0x00f086aa: lea    rdx,[rip+0x6fba53]        # 0x141604104 ; literal="the "
0x00f086b1: cmove  rdx,rcx
0x00f086b5: mov    rcx,rdi
0x00f086b8: call   0x140070f00
0x00f086bd: mov    r8d,0x5
0x00f086c3: lea    rdx,[rip+0x785c8a]        # 0x14168e354 ; literal="force"
0x00f086ca: jmp    0x140f0883a
0x00f086cf: mov    rsi,QWORD PTR [rbx+0x130]
0x00f086d6: test   rsi,rsi
0x00f086d9: je     0x140f0877a
0x00f086df: mov    rcx,QWORD PTR [rsi+0x48]
0x00f086e3: xor    eax,eax
0x00f086e5: test   rcx,rcx
0x00f086e8: je     0x140f086f4
0x00f086ea: cmp    DWORD PTR [rcx+0x144],0xffffffff
0x00f086f1: setne  al
0x00f086f4: mov    rsi,rcx
0x00f086f7: test   eax,eax
0x00f086f9: je     0x140f0877a
0x00f086fb: mov    r10d,DWORD PTR [rcx+0x140]
0x00f08702: cmp    r10d,0xffffffff
0x00f08706: je     0x140f0873c
0x00f08708: xor    r8d,r8d
0x00f0870b: dec    r11d
0x00f0870e: xchg   ax,ax
0x00f08710: lea    edx,[r11+r8*1]
0x00f08714: sar    edx,1
0x00f08716: movsxd rax,edx
0x00f08719: mov    rcx,QWORD PTR [r14+rax*8]
0x00f0871d: cmp    DWORD PTR [rcx+0xe0],r10d
0x00f08724: je     0x140f0876e
0x00f08726: lea    eax,[rdx-0x1]
0x00f08729: cmovle eax,r11d
0x00f0872d: mov    r11d,eax
0x00f08730: lea    eax,[rdx+0x1]
0x00f08733: cmovle r8d,eax
0x00f08737: cmp    r8d,r11d
0x00f0873a: jle    0x140f08710
0x00f0873c: movzx  eax,BYTE PTR [rbx+0xaa]
0x00f08743: mov    ecx,0x2
0x00f08748: mov    r8d,0x4
0x00f0874e: test   al,al
0x00f08750: cmove  r8d,ecx
0x00f08754: lea    rcx,[rip+0x700145]        # 0x1416088a0 ; literal="a "
0x00f0875b: lea    rdx,[rip+0x6fb9a2]        # 0x141604104 ; literal="the "
0x00f08762: cmove  rdx,rcx
0x00f08766: mov    rcx,rdi
0x00f08769: call   0x140070f00
0x00f0876e: lea    rdx,[rsi+0x150]
0x00f08775: jmp    0x140f0882c
0x00f0877a: movzx  eax,BYTE PTR [rbx+0xaa]
0x00f08781: mov    ecx,0x2
0x00f08786: mov    r8d,0x4
0x00f0878c: test   al,al
0x00f0878e: cmove  r8d,ecx
0x00f08792: lea    rcx,[rip+0x700107]        # 0x1416088a0 ; literal="a "
0x00f08799: lea    rdx,[rip+0x6fb964]        # 0x141604104 ; literal="the "
0x00f087a0: cmove  rdx,rcx
0x00f087a4: mov    rcx,rdi
0x00f087a7: call   0x140070f00
0x00f087ac: cmp    DWORD PTR [rbx+0xd0],0x0
0x00f087b3: jle    0x140f087e4
0x00f087b5: mov    rax,QWORD PTR [rbx+0xc8]
0x00f087bc: cmp    BYTE PTR [rax],0x0
0x00f087bf: jge    0x140f087e4
0x00f087c1: test   rsi,rsi
0x00f087c4: je     0x140f087cf
0x00f087c6: cmp    BYTE PTR [rsi+0x88],0x0
0x00f087cd: jne    0x140f087e4
0x00f087cf: mov    r8d,0x8
0x00f087d5: lea    rdx,[rip+0x711154]        # 0x141619930 ; literal="ghostly "
0x00f087dc: mov    rcx,rdi
0x00f087df: call   0x140071040
0x00f087e4: movsx  r8d,WORD PTR [rbx+0x2]
0x00f087e9: mov    BYTE PTR [rsp+0x28],0x0
0x00f087ee: movzx  eax,WORD PTR [rbx+0x4]
0x00f087f2: mov    WORD PTR [rsp+0x20],ax
0x00f087f7: xor    r9d,r9d
0x00f087fa: mov    rdx,rdi
0x00f087fd: call   0x140bacb90
0x00f08802: test   rsi,rsi
0x00f08805: je     0x140f08842
0x00f08807: cmp    BYTE PTR [rsi+0x88],0x0
0x00f0880e: je     0x140f08842
0x00f08810: mov    r8d,0x1
0x00f08816: lea    rdx,[rip+0x6fb1d3]        # 0x1416039f0 ; literal=" "
0x00f0881d: mov    rcx,rdi
0x00f08820: call   0x140071040
0x00f08825: lea    rdx,[rsi+0x90]
0x00f0882c: cmp    QWORD PTR [rdx+0x18],0xf
0x00f08831: mov    r8,QWORD PTR [rdx+0x10]
0x00f08835: jbe    0x140f0883a
0x00f08837: mov    rdx,QWORD PTR [rdx]
0x00f0883a: mov    rcx,rdi
0x00f0883d: call   0x140071040
0x00f08842: cmp    BYTE PTR [rbx+0xaa],0x0
0x00f08849: je     0x140f0894c
0x00f0884f: mov    r8d,0x1
0x00f08855: lea    rdx,[rip+0x6fb194]        # 0x1416039f0 ; literal=" "
0x00f0885c: mov    rcx,rdi
0x00f0885f: call   0x140071040
0x00f08864: and    ebp,0x2
0x00f08867: je     0x140f088a1
0x00f08869: mov    r8d,0xa
0x00f0886f: lea    rdx,[rip+0x711092]        # 0x141619908 ; literal="[LPAGE:HF:"
0x00f08876: mov    rcx,rdi
0x00f08879: call   0x140071040
0x00f0887e: mov    rdx,rdi
0x00f08881: mov    ecx,DWORD PTR [rbx+0xe0]
0x00f08887: call   0x140545610
0x00f0888c: mov    r8d,0x1
0x00f08892: lea    rdx,[rip+0x710b6f]        # 0x141619408 ; literal="]"
0x00f08899: mov    rcx,rdi
0x00f0889c: call   0x140071040
0x00f088a1: xorps  xmm0,xmm0
0x00f088a4: movups XMMWORD PTR [rsp+0x30],xmm0
0x00f088a9: mov    QWORD PTR [rsp+0x40],0x0
0x00f088b2: mov    QWORD PTR [rsp+0x48],0xf
0x00f088bb: mov    BYTE PTR [rsp+0x30],0x0
0x00f088c0: lea    rcx,[rbx+0x38]
0x00f088c4: xor    r9d,r9d
0x00f088c7: mov    r8b,0x1
0x00f088ca: lea    rdx,[rsp+0x30]
0x00f088cf: call   0x140aae180
0x00f088d4: lea    rdx,[rsp+0x30]
0x00f088d9: cmp    QWORD PTR [rsp+0x48],0xf
0x00f088df: cmova  rdx,QWORD PTR [rsp+0x30]
0x00f088e5: mov    r8,QWORD PTR [rsp+0x40]
0x00f088ea: mov    rcx,rdi
0x00f088ed: call   0x140071040
0x00f088f2: test   ebp,ebp
0x00f088f4: je     0x140f0890c
0x00f088f6: mov    r8d,0x8
0x00f088fc: lea    rdx,[rip+0x711015]        # 0x141619918 ; literal="[/LPAGE]"
0x00f08903: mov    rcx,rdi
0x00f08906: call   0x140071040
0x00f0890b: nop
0x00f0890c: mov    rdx,QWORD PTR [rsp+0x48]
0x00f08911: cmp    rdx,0xf
0x00f08915: jbe    0x140f0894c
0x00f08917: inc    rdx
0x00f0891a: mov    rcx,QWORD PTR [rsp+0x30]
0x00f0891f: mov    rax,rcx
0x00f08922: cmp    rdx,0x1000
0x00f08929: jb     0x140f08947
0x00f0892b: add    rdx,0x27
0x00f0892f: mov    rcx,QWORD PTR [rcx-0x8]
0x00f08933: sub    rax,rcx
0x00f08936: add    rax,0xfffffffffffffff8
0x00f0893a: cmp    rax,0x1f
0x00f0893e: jbe    0x140f08947
0x00f08940: call   QWORD PTR [rip+0x6f81fa]        # 0x141600b40
0x00f08946: int3
0x00f08947: call   0x1415530d0
0x00f0894c: mov    rcx,QWORD PTR [rsp+0x50]
0x00f08951: xor    rcx,rsp
0x00f08954: call   0x1415530b0
0x00f08959: lea    r11,[rsp+0x60]
0x00f0895e: mov    rbx,QWORD PTR [r11+0x20]
0x00f08962: mov    rbp,QWORD PTR [r11+0x30]
0x00f08966: mov    rsp,r11
0x00f08969: pop    r14
0x00f0896b: pop    rdi
0x00f0896c: pop    rsi
0x00f0896d: ret
