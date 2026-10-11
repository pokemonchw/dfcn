# classic PE:6a70b91c:0270a000; artifact-name; RVA 0xb91440..0xb91750
0x00b91440: mov    QWORD PTR [rsp+0x8],rbx
0x00b91445: mov    QWORD PTR [rsp+0x18],rbp
0x00b9144a: push   rsi
0x00b9144b: push   rdi
0x00b9144c: push   r14
0x00b9144e: sub    rsp,0x50
0x00b91452: mov    rax,QWORD PTR [rip+0xd04be7]        # 0x141896040
0x00b91459: xor    rax,rsp
0x00b9145c: mov    QWORD PTR [rsp+0x40],rax
0x00b91461: mov    r14d,r9d
0x00b91464: mov    rbp,rdx
0x00b91467: mov    r9,QWORD PTR [rip+0x184ec0a]        # 0x1423e0078
0x00b9146e: mov    r11,QWORD PTR [rip+0x184ebfb]        # 0x1423e0070
0x00b91475: sub    r9,r11
0x00b91478: sar    r9,0x3
0x00b9147c: test   r9d,r9d
0x00b9147f: je     0x140b914b6
0x00b91481: cmp    r8d,0xffffffff
0x00b91485: je     0x140b914b6
0x00b91487: xor    edx,edx
0x00b91489: sub    r9d,0x1
0x00b9148d: js     0x140b914b6
0x00b9148f: nop
0x00b91490: lea    ecx,[rdx+r9*1]
0x00b91494: sar    ecx,1
0x00b91496: movsxd rax,ecx
0x00b91499: mov    rbx,QWORD PTR [r11+rax*8]
0x00b9149d: cmp    DWORD PTR [rbx],r8d
0x00b914a0: je     0x140b914b8
0x00b914a2: lea    eax,[rcx+0x1]
0x00b914a5: cmovle edx,eax
0x00b914a8: lea    eax,[rcx-0x1]
0x00b914ab: cmovle eax,r9d
0x00b914af: mov    r9d,eax
0x00b914b2: cmp    edx,eax
0x00b914b4: jle    0x140b91490
0x00b914b6: xor    ebx,ebx
0x00b914b8: test   rbx,rbx
0x00b914bb: je     0x140b91718
0x00b914c1: and    r14d,0x2
0x00b914c5: lea    rdi,[rbx+0x90]
0x00b914cc: je     0x140b91542
0x00b914ce: mov    rcx,QWORD PTR [rdi]
0x00b914d1: mov    rax,QWORD PTR [rcx]
0x00b914d4: call   QWORD PTR [rax]
0x00b914d6: cmp    ax,0x59
0x00b914da: je     0x140b9150e
0x00b914dc: mov    rcx,QWORD PTR [rdi]
0x00b914df: mov    rax,QWORD PTR [rcx]
0x00b914e2: mov    edx,0x14
0x00b914e7: call   QWORD PTR [rax+0xe0]
0x00b914ed: test   al,al
0x00b914ef: jne    0x140b9150e
0x00b914f1: mov    rcx,QWORD PTR [rdi]
0x00b914f4: mov    rax,QWORD PTR [rcx]
0x00b914f7: call   QWORD PTR [rax]
0x00b914f9: cmp    ax,0x57
0x00b914fd: je     0x140b9150e
0x00b914ff: lea    rdx,[rip+0xa6751a]        # 0x1415f8a20 ; literal="[LPAGE:ARTIFACT:"
0x00b91506: mov    r8d,0x10
0x00b9150c: jmp    0x140b9151b
0x00b9150e: lea    rdx,[rip+0xb48fd3]        # 0x1416da4e8 ; literal="[LPAGE:BOOK:"
0x00b91515: mov    r8d,0xc
0x00b9151b: mov    rcx,rbp
0x00b9151e: call   0x14006f9a0
0x00b91523: mov    rdx,rbp
0x00b91526: mov    ecx,DWORD PTR [rbx]
0x00b91528: call   0x140529cf0
0x00b9152d: mov    r8d,0x1
0x00b91533: lea    rdx,[rip+0xa6712a]        # 0x1415f8664 ; literal="]"
0x00b9153a: mov    rcx,rbp
0x00b9153d: call   0x14006f9a0
0x00b91542: xorps  xmm0,xmm0
0x00b91545: movups XMMWORD PTR [rsp+0x20],xmm0
0x00b9154a: mov    QWORD PTR [rsp+0x30],0x0
0x00b91553: mov    QWORD PTR [rsp+0x38],0xf
0x00b9155c: mov    BYTE PTR [rsp+0x20],0x0
0x00b91561: lea    rcx,[rbx+0x8]
0x00b91565: xor    r9d,r9d
0x00b91568: mov    r8b,0x1
0x00b9156b: lea    rdx,[rsp+0x20]
0x00b91570: call   0x140a91760
0x00b91575: cmp    QWORD PTR [rsp+0x30],0x0
0x00b9157b: jne    0x140b9169d
0x00b91581: mov    rcx,QWORD PTR [rdi]
0x00b91584: mov    rax,QWORD PTR [rcx]
0x00b91587: call   QWORD PTR [rax]
0x00b91589: cmp    ax,0x59
0x00b9158d: je     0x140b915cd
0x00b9158f: mov    rcx,QWORD PTR [rdi]
0x00b91592: mov    rax,QWORD PTR [rcx]
0x00b91595: mov    edx,0x14
0x00b9159a: call   QWORD PTR [rax+0xe0]
0x00b915a0: test   al,al
0x00b915a2: jne    0x140b915cd
0x00b915a4: mov    rcx,QWORD PTR [rdi]
0x00b915a7: mov    rax,QWORD PTR [rcx]
0x00b915aa: call   QWORD PTR [rax]
0x00b915ac: cmp    ax,0x57
0x00b915b0: je     0x140b915cd
0x00b915b2: mov    r9d,0x1
0x00b915b8: xor    r8d,r8d
0x00b915bb: lea    rdx,[rsp+0x20]
0x00b915c0: mov    rcx,QWORD PTR [rdi]
0x00b915c3: call   0x140c62490
0x00b915c8: jmp    0x140b9169d
0x00b915cd: mov    rbx,QWORD PTR [rsp+0x38]
0x00b915d2: cmp    rbx,0x8
0x00b915d6: jb     0x140b91606
0x00b915d8: lea    rax,[rsp+0x20]
0x00b915dd: cmp    rbx,0xf
0x00b915e1: cmova  rax,QWORD PTR [rsp+0x20]
0x00b915e7: mov    QWORD PTR [rsp+0x30],0x8
0x00b915f0: movabs rcx,0x64656c7469746e55 ; inline="Untitled"
0x00b915fa: mov    QWORD PTR [rax],rcx
0x00b915fd: mov    BYTE PTR [rax+0x8],0x0
0x00b91601: jmp    0x140b9169d
0x00b91606: mov    rcx,rbx
0x00b91609: shr    rcx,1
0x00b9160c: movabs rdi,0x7fffffffffffffff
0x00b91616: mov    rax,rdi
0x00b91619: sub    rax,rcx
0x00b9161c: cmp    rbx,rax
0x00b9161f: ja     0x140b91631
0x00b91621: lea    rax,[rcx+rbx*1]
0x00b91625: mov    edi,0xf
0x00b9162a: cmp    rax,rdi
0x00b9162d: cmova  rdi,rax
0x00b91631: lea    rcx,[rdi+0x1]
0x00b91635: call   0x140070760
0x00b9163a: mov    rsi,rax
0x00b9163d: mov    QWORD PTR [rsp+0x30],0x8
0x00b91646: mov    QWORD PTR [rsp+0x38],rdi
0x00b9164b: movabs rcx,0x64656c7469746e55 ; inline="Untitled"
0x00b91655: mov    QWORD PTR [rax],rcx
0x00b91658: mov    BYTE PTR [rax+0x8],0x0
0x00b9165c: cmp    rbx,0xf
0x00b91660: jbe    0x140b91698
0x00b91662: lea    rdx,[rbx+0x1]
0x00b91666: mov    rcx,QWORD PTR [rsp+0x20]
0x00b9166b: mov    rax,rcx
0x00b9166e: cmp    rdx,0x1000
0x00b91675: jb     0x140b91693
0x00b91677: add    rdx,0x27
0x00b9167b: mov    rcx,QWORD PTR [rcx-0x8]
0x00b9167f: sub    rax,rcx
0x00b91682: add    rax,0xfffffffffffffff8
0x00b91686: cmp    rax,0x1f
0x00b9168a: jbe    0x140b91693
0x00b9168c: call   QWORD PTR [rip+0xa4f40e]        # 0x1415e0aa0
0x00b91692: int3
0x00b91693: call   0x1415345f0
0x00b91698: mov    QWORD PTR [rsp+0x20],rsi
0x00b9169d: lea    rdx,[rsp+0x20]
0x00b916a2: cmp    QWORD PTR [rsp+0x38],0xf
0x00b916a8: cmova  rdx,QWORD PTR [rsp+0x20]
0x00b916ae: mov    r8,QWORD PTR [rsp+0x30]
0x00b916b3: mov    rcx,rbp
0x00b916b6: call   0x14006f9a0
0x00b916bb: test   r14d,r14d
0x00b916be: je     0x140b916d6
0x00b916c0: mov    r8d,0x8
0x00b916c6: lea    rdx,[rip+0xa67483]        # 0x1415f8b50 ; literal="[/LPAGE]"
0x00b916cd: mov    rcx,rbp
0x00b916d0: call   0x14006f9a0
0x00b916d5: nop
0x00b916d6: mov    rdx,QWORD PTR [rsp+0x38]
0x00b916db: cmp    rdx,0xf
0x00b916df: jbe    0x140b9172d
0x00b916e1: inc    rdx
0x00b916e4: mov    rcx,QWORD PTR [rsp+0x20]
0x00b916e9: mov    rax,rcx
0x00b916ec: cmp    rdx,0x1000
0x00b916f3: jb     0x140b91711
0x00b916f5: add    rdx,0x27
0x00b916f9: mov    rcx,QWORD PTR [rcx-0x8]
0x00b916fd: sub    rax,rcx
0x00b91700: add    rax,0xfffffffffffffff8
0x00b91704: cmp    rax,0x1f
0x00b91708: jbe    0x140b91711
0x00b9170a: call   QWORD PTR [rip+0xa4f390]        # 0x1415e0aa0
0x00b91710: int3
0x00b91711: call   0x1415345f0
0x00b91716: jmp    0x140b9172d
0x00b91718: mov    r8d,0x13
0x00b9171e: lea    rdx,[rip+0xb48dab]        # 0x1416da4d0 ; literal="an unknown artifact"
0x00b91725: mov    rcx,rbp
0x00b91728: call   0x14006f9a0
0x00b9172d: mov    rcx,QWORD PTR [rsp+0x40]
0x00b91732: xor    rcx,rsp
0x00b91735: call   0x1415345d0
0x00b9173a: mov    rbx,QWORD PTR [rsp+0x70]
0x00b9173f: mov    rbp,QWORD PTR [rsp+0x80]
0x00b91747: add    rsp,0x50
0x00b9174b: pop    r14
0x00b9174d: pop    rdi
0x00b9174e: pop    rsi
0x00b9174f: ret
