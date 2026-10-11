# steam PE:6a70a6d9:02711000; D:\program\steam\steamapps\common\Dwarf Fortress\Dwarf Fortress.exe; RVA 0xb94400..0xb94710
0x00b94400: mov    QWORD PTR [rsp+0x8],rbx
0x00b94405: mov    QWORD PTR [rsp+0x18],rbp
0x00b9440a: push   rsi
0x00b9440b: push   rdi
0x00b9440c: push   r14
0x00b9440e: sub    rsp,0x50
0x00b94412: mov    rax,QWORD PTR [rip+0xd07c27]        # 0x14189c040
0x00b94419: xor    rax,rsp
0x00b9441c: mov    QWORD PTR [rsp+0x40],rax
0x00b94421: mov    r14d,r9d
0x00b94424: mov    rbp,rdx
0x00b94427: mov    r9,QWORD PTR [rip+0x1851d5a]        # 0x1423e6188
0x00b9442e: mov    r11,QWORD PTR [rip+0x1851d4b]        # 0x1423e6180
0x00b94435: sub    r9,r11
0x00b94438: sar    r9,0x3
0x00b9443c: test   r9d,r9d
0x00b9443f: je     0x140b94476
0x00b94441: cmp    r8d,0xffffffff
0x00b94445: je     0x140b94476
0x00b94447: xor    edx,edx
0x00b94449: sub    r9d,0x1
0x00b9444d: js     0x140b94476
0x00b9444f: nop
0x00b94450: lea    ecx,[rdx+r9*1]
0x00b94454: sar    ecx,1
0x00b94456: movsxd rax,ecx
0x00b94459: mov    rbx,QWORD PTR [r11+rax*8]
0x00b9445d: cmp    DWORD PTR [rbx],r8d
0x00b94460: je     0x140b94478
0x00b94462: lea    eax,[rcx+0x1]
0x00b94465: cmovle edx,eax
0x00b94468: lea    eax,[rcx-0x1]
0x00b9446b: cmovle eax,r9d
0x00b9446f: mov    r9d,eax
0x00b94472: cmp    edx,eax
0x00b94474: jle    0x140b94450
0x00b94476: xor    ebx,ebx
0x00b94478: test   rbx,rbx
0x00b9447b: je     0x140b946d8
0x00b94481: and    r14d,0x2
0x00b94485: lea    rdi,[rbx+0x90]
0x00b9448c: je     0x140b94502
0x00b9448e: mov    rcx,QWORD PTR [rdi]
0x00b94491: mov    rax,QWORD PTR [rcx]
0x00b94494: call   QWORD PTR [rax]
0x00b94496: cmp    ax,0x59
0x00b9449a: je     0x140b944ce
0x00b9449c: mov    rcx,QWORD PTR [rdi]
0x00b9449f: mov    rax,QWORD PTR [rcx]
0x00b944a2: mov    edx,0x14
0x00b944a7: call   QWORD PTR [rax+0xe0]
0x00b944ad: test   al,al
0x00b944af: jne    0x140b944ce
0x00b944b1: mov    rcx,QWORD PTR [rdi]
0x00b944b4: mov    rax,QWORD PTR [rcx]
0x00b944b7: call   QWORD PTR [rax]
0x00b944b9: cmp    ax,0x57
0x00b944bd: je     0x140b944ce
0x00b944bf: lea    rdx,[rip+0xa695e2]        # 0x1415fdaa8 ; literal="[LPAGE:ARTIFACT:"
0x00b944c6: mov    r8d,0x10
0x00b944cc: jmp    0x140b944db
0x00b944ce: lea    rdx,[rip+0xb4b243]        # 0x1416df718 ; literal="[LPAGE:BOOK:"
0x00b944d5: mov    r8d,0xc
0x00b944db: mov    rcx,rbp
0x00b944de: call   0x14006fa10
0x00b944e3: mov    rdx,rbp
0x00b944e6: mov    ecx,DWORD PTR [rbx]
0x00b944e8: call   0x14052c130
0x00b944ed: mov    r8d,0x1
0x00b944f3: lea    rdx,[rip+0xa69196]        # 0x1415fd690 ; literal="]"
0x00b944fa: mov    rcx,rbp
0x00b944fd: call   0x14006fa10
0x00b94502: xorps  xmm0,xmm0
0x00b94505: movups XMMWORD PTR [rsp+0x20],xmm0
0x00b9450a: mov    QWORD PTR [rsp+0x30],0x0
0x00b94513: mov    QWORD PTR [rsp+0x38],0xf
0x00b9451c: mov    BYTE PTR [rsp+0x20],0x0
0x00b94521: lea    rcx,[rbx+0x8]
0x00b94525: xor    r9d,r9d
0x00b94528: mov    r8b,0x1
0x00b9452b: lea    rdx,[rsp+0x20]
0x00b94530: call   0x140a946e0
0x00b94535: cmp    QWORD PTR [rsp+0x30],0x0
0x00b9453b: jne    0x140b9465d
0x00b94541: mov    rcx,QWORD PTR [rdi]
0x00b94544: mov    rax,QWORD PTR [rcx]
0x00b94547: call   QWORD PTR [rax]
0x00b94549: cmp    ax,0x59
0x00b9454d: je     0x140b9458d
0x00b9454f: mov    rcx,QWORD PTR [rdi]
0x00b94552: mov    rax,QWORD PTR [rcx]
0x00b94555: mov    edx,0x14
0x00b9455a: call   QWORD PTR [rax+0xe0]
0x00b94560: test   al,al
0x00b94562: jne    0x140b9458d
0x00b94564: mov    rcx,QWORD PTR [rdi]
0x00b94567: mov    rax,QWORD PTR [rcx]
0x00b9456a: call   QWORD PTR [rax]
0x00b9456c: cmp    ax,0x57
0x00b94570: je     0x140b9458d
0x00b94572: mov    r9d,0x1
0x00b94578: xor    r8d,r8d
0x00b9457b: lea    rdx,[rsp+0x20]
0x00b94580: mov    rcx,QWORD PTR [rdi]
0x00b94583: call   0x140c65450
0x00b94588: jmp    0x140b9465d
0x00b9458d: mov    rbx,QWORD PTR [rsp+0x38]
0x00b94592: cmp    rbx,0x8
0x00b94596: jb     0x140b945c6
0x00b94598: lea    rax,[rsp+0x20]
0x00b9459d: cmp    rbx,0xf
0x00b945a1: cmova  rax,QWORD PTR [rsp+0x20]
0x00b945a7: mov    QWORD PTR [rsp+0x30],0x8
0x00b945b0: movabs rcx,0x64656c7469746e55
0x00b945ba: mov    QWORD PTR [rax],rcx
0x00b945bd: mov    BYTE PTR [rax+0x8],0x0
0x00b945c1: jmp    0x140b9465d
0x00b945c6: mov    rcx,rbx
0x00b945c9: shr    rcx,1
0x00b945cc: movabs rdi,0x7fffffffffffffff
0x00b945d6: mov    rax,rdi
0x00b945d9: sub    rax,rcx
0x00b945dc: cmp    rbx,rax
0x00b945df: ja     0x140b945f1
0x00b945e1: lea    rax,[rcx+rbx*1]
0x00b945e5: mov    edi,0xf
0x00b945ea: cmp    rax,rdi
0x00b945ed: cmova  rdi,rax
0x00b945f1: lea    rcx,[rdi+0x1]
0x00b945f5: call   0x1400707d0
0x00b945fa: mov    rsi,rax
0x00b945fd: mov    QWORD PTR [rsp+0x30],0x8
0x00b94606: mov    QWORD PTR [rsp+0x38],rdi
0x00b9460b: movabs rcx,0x64656c7469746e55
0x00b94615: mov    QWORD PTR [rax],rcx
0x00b94618: mov    BYTE PTR [rax+0x8],0x0
0x00b9461c: cmp    rbx,0xf
0x00b94620: jbe    0x140b94658
0x00b94622: lea    rdx,[rbx+0x1]
0x00b94626: mov    rcx,QWORD PTR [rsp+0x20]
0x00b9462b: mov    rax,rcx
0x00b9462e: cmp    rdx,0x1000
0x00b94635: jb     0x140b94653
0x00b94637: add    rdx,0x27
0x00b9463b: mov    rcx,QWORD PTR [rcx-0x8]
0x00b9463f: sub    rax,rcx
0x00b94642: add    rax,0xfffffffffffffff8
0x00b94646: cmp    rax,0x1f
0x00b9464a: jbe    0x140b94653
0x00b9464c: call   QWORD PTR [rip+0xa514d6]        # 0x1415e5b28
0x00b94652: int3
0x00b94653: call   0x141539680
0x00b94658: mov    QWORD PTR [rsp+0x20],rsi
0x00b9465d: lea    rdx,[rsp+0x20]
0x00b94662: cmp    QWORD PTR [rsp+0x38],0xf
0x00b94668: cmova  rdx,QWORD PTR [rsp+0x20]
0x00b9466e: mov    r8,QWORD PTR [rsp+0x30]
0x00b94673: mov    rcx,rbp
0x00b94676: call   0x14006fa10
0x00b9467b: test   r14d,r14d
0x00b9467e: je     0x140b94696
0x00b94680: mov    r8d,0x8
0x00b94686: lea    rdx,[rip+0xa693fb]        # 0x1415fda88 ; literal="[/LPAGE]"
0x00b9468d: mov    rcx,rbp
0x00b94690: call   0x14006fa10
0x00b94695: nop
0x00b94696: mov    rdx,QWORD PTR [rsp+0x38]
0x00b9469b: cmp    rdx,0xf
0x00b9469f: jbe    0x140b946ed
0x00b946a1: inc    rdx
0x00b946a4: mov    rcx,QWORD PTR [rsp+0x20]
0x00b946a9: mov    rax,rcx
0x00b946ac: cmp    rdx,0x1000
0x00b946b3: jb     0x140b946d1
0x00b946b5: add    rdx,0x27
0x00b946b9: mov    rcx,QWORD PTR [rcx-0x8]
0x00b946bd: sub    rax,rcx
0x00b946c0: add    rax,0xfffffffffffffff8
0x00b946c4: cmp    rax,0x1f
0x00b946c8: jbe    0x140b946d1
0x00b946ca: call   QWORD PTR [rip+0xa51458]        # 0x1415e5b28
0x00b946d0: int3
0x00b946d1: call   0x141539680
0x00b946d6: jmp    0x140b946ed
0x00b946d8: mov    r8d,0x13
0x00b946de: lea    rdx,[rip+0xb4b01b]        # 0x1416df700 ; literal="an unknown artifact"
0x00b946e5: mov    rcx,rbp
0x00b946e8: call   0x14006fa10
0x00b946ed: mov    rcx,QWORD PTR [rsp+0x40]
0x00b946f2: xor    rcx,rsp
0x00b946f5: call   0x141539660
0x00b946fa: mov    rbx,QWORD PTR [rsp+0x70]
0x00b946ff: mov    rbp,QWORD PTR [rsp+0x80]
0x00b94707: add    rsp,0x50
0x00b9470b: pop    r14
0x00b9470d: pop    rdi
0x00b9470e: pop    rsi
0x00b9470f: ret
