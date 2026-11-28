; classic PE:6aea11a5:0272d000; reference-description:general_ref_historical_figurest; RVA 0xf032c0..0xf036be; code ends 0xf036be
0x00f032c0: mov    QWORD PTR [rsp+0x8],rbx
0x00f032c5: mov    QWORD PTR [rsp+0x18],rbp
0x00f032ca: push   rsi
0x00f032cb: push   rdi
0x00f032cc: push   r14
0x00f032ce: sub    rsp,0x60
0x00f032d2: mov    rax,QWORD PTR [rip+0x9b4d67]        # 0x1418b8040
0x00f032d9: xor    rax,rsp
0x00f032dc: mov    QWORD PTR [rsp+0x50],rax
0x00f032e1: mov    ebp,r8d
0x00f032e4: mov    rdi,rdx
0x00f032e7: mov    QWORD PTR [rdx+0x10],0x0
0x00f032ef: mov    rax,rdx
0x00f032f2: cmp    QWORD PTR [rdx+0x18],0xf
0x00f032f7: jbe    0x140f032fc
0x00f032f9: mov    rax,QWORD PTR [rdx]
0x00f032fc: mov    BYTE PTR [rax],0x0
0x00f032ff: mov    r10d,DWORD PTR [rcx+0x8]
0x00f03303: mov    r11,QWORD PTR [rip+0x1612d96]        # 0x1425160a0
0x00f0330a: mov    r14,QWORD PTR [rip+0x1612d87]        # 0x142516098
0x00f03311: sub    r11,r14
0x00f03314: sar    r11,0x3
0x00f03318: test   r11,r11
0x00f0331b: je     0x140f0369c
0x00f03321: cmp    r10d,0xffffffff
0x00f03325: je     0x140f0369c
0x00f0332b: xor    edx,edx
0x00f0332d: lea    r8d,[r11-0x1]
0x00f03331: test   r8d,r8d
0x00f03334: js     0x140f0369c
0x00f0333a: nop    WORD PTR [rax+rax*1+0x0]
0x00f03340: lea    ecx,[r8+rdx*1]
0x00f03344: sar    ecx,1
0x00f03346: movsxd rax,ecx
0x00f03349: mov    rbx,QWORD PTR [r14+rax*8]
0x00f0334d: cmp    DWORD PTR [rbx+0xe0],r10d
0x00f03354: je     0x140f03370
0x00f03356: lea    eax,[rcx-0x1]
0x00f03359: cmovle eax,r8d
0x00f0335d: mov    r8d,eax
0x00f03360: lea    eax,[rcx+0x1]
0x00f03363: cmovle edx,eax
0x00f03366: cmp    edx,r8d
0x00f03369: jle    0x140f03340
0x00f0336b: jmp    0x140f0369c
0x00f03370: test   rbx,rbx
0x00f03373: je     0x140f0369c
0x00f03379: cmp    DWORD PTR [rbx+0xd0],0x0
0x00f03380: jle    0x140f0341f
0x00f03386: mov    rax,QWORD PTR [rbx+0xc8]
0x00f0338d: test   BYTE PTR [rax],0x4
0x00f03390: je     0x140f033d6
0x00f03392: movzx  eax,BYTE PTR [rbx+0xaa]
0x00f03399: mov    ecx,0x2
0x00f0339e: mov    r8d,0x4
0x00f033a4: test   al,al
0x00f033a6: cmove  r8d,ecx
0x00f033aa: lea    rcx,[rip+0x7004d7]        # 0x141603888 ; literal="a "
0x00f033b1: lea    rdx,[rip+0x6fbcc0]        # 0x1415ff078 ; literal="the "
0x00f033b8: cmove  rdx,rcx
0x00f033bc: mov    rcx,rdi
0x00f033bf: call   0x140070e90
0x00f033c4: mov    r8d,0x5
0x00f033ca: lea    rdx,[rip+0x77a9e7]        # 0x14167ddb8 ; literal="deity"
0x00f033d1: jmp    0x140f0358a
0x00f033d6: test   BYTE PTR [rax],0x8
0x00f033d9: je     0x140f0341f
0x00f033db: movzx  eax,BYTE PTR [rbx+0xaa]
0x00f033e2: mov    ecx,0x2
0x00f033e7: mov    r8d,0x4
0x00f033ed: test   al,al
0x00f033ef: cmove  r8d,ecx
0x00f033f3: lea    rcx,[rip+0x70048e]        # 0x141603888 ; literal="a "
0x00f033fa: lea    rdx,[rip+0x6fbc77]        # 0x1415ff078 ; literal="the "
0x00f03401: cmove  rdx,rcx
0x00f03405: mov    rcx,rdi
0x00f03408: call   0x140070e90
0x00f0340d: mov    r8d,0x5
0x00f03413: lea    rdx,[rip+0x78de4a]        # 0x141691264 ; literal="force"
0x00f0341a: jmp    0x140f0358a
0x00f0341f: mov    rsi,QWORD PTR [rbx+0x130]
0x00f03426: test   rsi,rsi
0x00f03429: je     0x140f034ca
0x00f0342f: mov    rcx,QWORD PTR [rsi+0x48]
0x00f03433: xor    eax,eax
0x00f03435: test   rcx,rcx
0x00f03438: je     0x140f03444
0x00f0343a: cmp    DWORD PTR [rcx+0x144],0xffffffff
0x00f03441: setne  al
0x00f03444: mov    rsi,rcx
0x00f03447: test   eax,eax
0x00f03449: je     0x140f034ca
0x00f0344b: mov    r10d,DWORD PTR [rcx+0x140]
0x00f03452: cmp    r10d,0xffffffff
0x00f03456: je     0x140f0348c
0x00f03458: xor    r8d,r8d
0x00f0345b: dec    r11d
0x00f0345e: xchg   ax,ax
0x00f03460: lea    edx,[r11+r8*1]
0x00f03464: sar    edx,1
0x00f03466: movsxd rax,edx
0x00f03469: mov    rcx,QWORD PTR [r14+rax*8]
0x00f0346d: cmp    DWORD PTR [rcx+0xe0],r10d
0x00f03474: je     0x140f034be
0x00f03476: lea    eax,[rdx-0x1]
0x00f03479: cmovle eax,r11d
0x00f0347d: mov    r11d,eax
0x00f03480: lea    eax,[rdx+0x1]
0x00f03483: cmovle r8d,eax
0x00f03487: cmp    r8d,r11d
0x00f0348a: jle    0x140f03460
0x00f0348c: movzx  eax,BYTE PTR [rbx+0xaa]
0x00f03493: mov    ecx,0x2
0x00f03498: mov    r8d,0x4
0x00f0349e: test   al,al
0x00f034a0: cmove  r8d,ecx
0x00f034a4: lea    rcx,[rip+0x7003dd]        # 0x141603888 ; literal="a "
0x00f034ab: lea    rdx,[rip+0x6fbbc6]        # 0x1415ff078 ; literal="the "
0x00f034b2: cmove  rdx,rcx
0x00f034b6: mov    rcx,rdi
0x00f034b9: call   0x140070e90
0x00f034be: lea    rdx,[rsi+0x150]
0x00f034c5: jmp    0x140f0357c
0x00f034ca: movzx  eax,BYTE PTR [rbx+0xaa]
0x00f034d1: mov    ecx,0x2
0x00f034d6: mov    r8d,0x4
0x00f034dc: test   al,al
0x00f034de: cmove  r8d,ecx
0x00f034e2: lea    rcx,[rip+0x70039f]        # 0x141603888 ; literal="a "
0x00f034e9: lea    rdx,[rip+0x6fbb88]        # 0x1415ff078 ; literal="the "
0x00f034f0: cmove  rdx,rcx
0x00f034f4: mov    rcx,rdi
0x00f034f7: call   0x140070e90
0x00f034fc: cmp    DWORD PTR [rbx+0xd0],0x0
0x00f03503: jle    0x140f03534
0x00f03505: mov    rax,QWORD PTR [rbx+0xc8]
0x00f0350c: cmp    BYTE PTR [rax],0x0
0x00f0350f: jge    0x140f03534
0x00f03511: test   rsi,rsi
0x00f03514: je     0x140f0351f
0x00f03516: cmp    BYTE PTR [rsi+0x88],0x0
0x00f0351d: jne    0x140f03534
0x00f0351f: mov    r8d,0x8
0x00f03525: lea    rdx,[rip+0x711324]        # 0x141614850 ; literal="ghostly "
0x00f0352c: mov    rcx,rdi
0x00f0352f: call   0x140070fd0
0x00f03534: movsx  r8d,WORD PTR [rbx+0x2]
0x00f03539: mov    BYTE PTR [rsp+0x28],0x0
0x00f0353e: movzx  eax,WORD PTR [rbx+0x4]
0x00f03542: mov    WORD PTR [rsp+0x20],ax
0x00f03547: xor    r9d,r9d
0x00f0354a: mov    rdx,rdi
0x00f0354d: call   0x140ba99b0
0x00f03552: test   rsi,rsi
0x00f03555: je     0x140f03592
0x00f03557: cmp    BYTE PTR [rsi+0x88],0x0
0x00f0355e: je     0x140f03592
0x00f03560: mov    r8d,0x1
0x00f03566: lea    rdx,[rip+0x6fb3ff]        # 0x1415fe96c ; literal=" "
0x00f0356d: mov    rcx,rdi
0x00f03570: call   0x140070fd0
0x00f03575: lea    rdx,[rsi+0x90]
0x00f0357c: cmp    QWORD PTR [rdx+0x18],0xf
0x00f03581: mov    r8,QWORD PTR [rdx+0x10]
0x00f03585: jbe    0x140f0358a
0x00f03587: mov    rdx,QWORD PTR [rdx]
0x00f0358a: mov    rcx,rdi
0x00f0358d: call   0x140070fd0
0x00f03592: cmp    BYTE PTR [rbx+0xaa],0x0
0x00f03599: je     0x140f0369c
0x00f0359f: mov    r8d,0x1
0x00f035a5: lea    rdx,[rip+0x6fb3c0]        # 0x1415fe96c ; literal=" "
0x00f035ac: mov    rcx,rdi
0x00f035af: call   0x140070fd0
0x00f035b4: and    ebp,0x2
0x00f035b7: je     0x140f035f1
0x00f035b9: mov    r8d,0xa
0x00f035bf: lea    rdx,[rip+0x7112e2]        # 0x1416148a8 ; literal="[LPAGE:HF:"
0x00f035c6: mov    rcx,rdi
0x00f035c9: call   0x140070fd0
0x00f035ce: mov    rdx,rdi
0x00f035d1: mov    ecx,DWORD PTR [rbx+0xe0]
0x00f035d7: call   0x140542fb0
0x00f035dc: mov    r8d,0x1
0x00f035e2: lea    rdx,[rip+0x710daf]        # 0x141614398 ; literal="]"
0x00f035e9: mov    rcx,rdi
0x00f035ec: call   0x140070fd0
0x00f035f1: xorps  xmm0,xmm0
0x00f035f4: movups XMMWORD PTR [rsp+0x30],xmm0
0x00f035f9: mov    QWORD PTR [rsp+0x40],0x0
0x00f03602: mov    QWORD PTR [rsp+0x48],0xf
0x00f0360b: mov    BYTE PTR [rsp+0x30],0x0
0x00f03610: lea    rcx,[rbx+0x38]
0x00f03614: xor    r9d,r9d
0x00f03617: mov    r8b,0x1
0x00f0361a: lea    rdx,[rsp+0x30]
0x00f0361f: call   0x140aaafe0
0x00f03624: lea    rdx,[rsp+0x30]
0x00f03629: cmp    QWORD PTR [rsp+0x48],0xf
0x00f0362f: cmova  rdx,QWORD PTR [rsp+0x30]
0x00f03635: mov    r8,QWORD PTR [rsp+0x40]
0x00f0363a: mov    rcx,rdi
0x00f0363d: call   0x140070fd0
0x00f03642: test   ebp,ebp
0x00f03644: je     0x140f0365c
0x00f03646: mov    r8d,0x8
0x00f0364c: lea    rdx,[rip+0x711265]        # 0x1416148b8 ; literal="[/LPAGE]"
0x00f03653: mov    rcx,rdi
0x00f03656: call   0x140070fd0
0x00f0365b: nop
0x00f0365c: mov    rdx,QWORD PTR [rsp+0x48]
0x00f03661: cmp    rdx,0xf
0x00f03665: jbe    0x140f0369c
0x00f03667: inc    rdx
0x00f0366a: mov    rcx,QWORD PTR [rsp+0x30]
0x00f0366f: mov    rax,rcx
0x00f03672: cmp    rdx,0x1000
0x00f03679: jb     0x140f03697
0x00f0367b: add    rdx,0x27
0x00f0367f: mov    rcx,QWORD PTR [rcx-0x8]
0x00f03683: sub    rax,rcx
0x00f03686: add    rax,0xfffffffffffffff8
0x00f0368a: cmp    rax,0x1f
0x00f0368e: jbe    0x140f03697
0x00f03690: call   QWORD PTR [rip+0x6f8432]        # 0x1415fbac8
0x00f03696: int3
0x00f03697: call   0x14154de20
0x00f0369c: mov    rcx,QWORD PTR [rsp+0x50]
0x00f036a1: xor    rcx,rsp
0x00f036a4: call   0x14154de00
0x00f036a9: lea    r11,[rsp+0x60]
0x00f036ae: mov    rbx,QWORD PTR [r11+0x20]
0x00f036b2: mov    rbp,QWORD PTR [r11+0x30]
0x00f036b6: mov    rsp,r11
0x00f036b9: pop    r14
0x00f036bb: pop    rdi
0x00f036bc: pop    rsi
0x00f036bd: ret
