; reference PE:6aea05a1:02734000; reference-description:general_ref_abstract_buildingst; RVA 0xf05290..0xf056fc; code ends 0xf056c4
0x00f05290: mov    QWORD PTR [rsp+0x18],rbx
0x00f05295: push   rbp
0x00f05296: push   rsi
0x00f05297: push   rdi
0x00f05298: push   r14
0x00f0529a: push   r15
0x00f0529c: sub    rsp,0x50
0x00f052a0: mov    rax,QWORD PTR [rip+0x9b8d99]        # 0x1418be040
0x00f052a7: xor    rax,rsp
0x00f052aa: mov    QWORD PTR [rsp+0x40],rax
0x00f052af: mov    esi,r8d
0x00f052b2: mov    rbx,rdx
0x00f052b5: mov    rbp,rcx
0x00f052b8: mov    QWORD PTR [rdx+0x10],0x0
0x00f052c0: mov    rax,rdx
0x00f052c3: cmp    QWORD PTR [rdx+0x18],0xf
0x00f052c8: jbe    0x140f052cd
0x00f052ca: mov    rax,QWORD PTR [rdx]
0x00f052cd: mov    BYTE PTR [rax],0x0
0x00f052d0: mov    edx,DWORD PTR [rcx+0x8]
0x00f052d3: mov    rcx,QWORD PTR [rip+0x1608cfe]        # 0x14250dfd8
0x00f052da: call   0x14007f150
0x00f052df: mov    rdi,rax
0x00f052e2: test   rax,rax
0x00f052e5: je     0x140f056a0
0x00f052eb: lea    rdx,[rax+0x2b0]
0x00f052f2: mov    ecx,DWORD PTR [rbp+0xc]
0x00f052f5: call   0x140071530
0x00f052fa: mov    r14,rax
0x00f052fd: test   rax,rax
0x00f05300: je     0x140f056a0
0x00f05306: mov    rdx,QWORD PTR [rax]
0x00f05309: mov    rcx,rax
0x00f0530c: call   QWORD PTR [rdx+0x10]
0x00f0530f: mov    rbp,rax
0x00f05312: mov    r8d,0x2
0x00f05318: mov    r15d,0x4
0x00f0531e: test   rax,rax
0x00f05321: cmovne r8d,r15d
0x00f05325: lea    rax,[rip+0x6fedd8]        # 0x141604104 ; literal="the "
0x00f0532c: lea    rdx,[rip+0x70356d]        # 0x1416088a0 ; literal="a "
0x00f05333: test   rbp,rbp
0x00f05336: cmovne rdx,rax
0x00f0533a: mov    rcx,rbx
0x00f0533d: call   0x140071040
0x00f05342: mov    rax,QWORD PTR [r14]
0x00f05345: mov    rcx,r14
0x00f05348: call   QWORD PTR [rax]
0x00f0534a: movsx  rcx,ax
0x00f0534e: cmp    ecx,0xd
0x00f05351: ja     0x140f05470
0x00f05357: lea    rdx,[rip+0xffffffffff0faca2]        # 0x140000000
0x00f0535e: mov    ecx,DWORD PTR [rdx+rcx*4+0xf056c4]
0x00f05365: add    rcx,rdx
0x00f05368: jmp    rcx
0x00f0536a: mov    r8d,0xe
0x00f05370: lea    rdx,[rip+0x82d4b9]        # 0x141732830 ; literal="counting house"
0x00f05377: jmp    0x140f05468
0x00f0537c: mov    r8d,0x8
0x00f05382: lea    rdx,[rip+0x82d4d7]        # 0x141732860 ; literal="hospital"
0x00f05389: jmp    0x140f05468
0x00f0538e: mov    r8d,0x9
0x00f05394: lea    rdx,[rip+0x743135]        # 0x1416484d0 ; literal="guildhall"
0x00f0539b: jmp    0x140f05468
0x00f053a0: mov    r8d,0x9
0x00f053a6: lea    rdx,[rip+0x82d4a3]        # 0x141732850 ; literal="mead hall"
0x00f053ad: jmp    0x140f05468
0x00f053b2: mov    r8,r15
0x00f053b5: lea    rdx,[rip+0x82d4bc]        # 0x141732878 ; literal="keep"
0x00f053bc: jmp    0x140f05468
0x00f053c1: mov    r8d,0x6
0x00f053c7: lea    rdx,[rip+0x743012]        # 0x1416483e0 ; literal="temple"
0x00f053ce: jmp    0x140f05468
0x00f053d3: mov    r8d,0x7
0x00f053d9: lea    rdx,[rip+0x82d490]        # 0x141732870 ; literal="library"
0x00f053e0: jmp    0x140f05468
0x00f053e5: mov    r8d,0x6
0x00f053eb: lea    rdx,[rip+0x767bf2]        # 0x14166cfe4 ; literal="tavern"
0x00f053f2: jmp    0x140f05468
0x00f053f4: lea    rdx,[rip+0x858efd]        # 0x14175e2f8 ; literal="spire"
0x00f053fb: jmp    0x140f05462
0x00f053fd: mov    r8d,0x6
0x00f05403: lea    rdx,[rip+0x82d4a6]        # 0x1417328b0 ; literal="market"
0x00f0540a: jmp    0x140f05468
0x00f0540c: mov    r8,r15
0x00f0540f: lea    rdx,[rip+0x74645e]        # 0x14164b874 ; literal="tomb"
0x00f05416: jmp    0x140f05468
0x00f05418: movsx  ecx,WORD PTR [r14+0x130]
0x00f05420: test   ecx,ecx
0x00f05422: je     0x140f0544c
0x00f05424: sub    ecx,0x1
0x00f05427: je     0x140f0543d
0x00f05429: cmp    ecx,0x1
0x00f0542c: jne    0x140f05470
0x00f0542e: mov    r8d,0x9
0x00f05434: lea    rdx,[rip+0x82d47d]        # 0x1417328b8 ; literal="catacombs"
0x00f0543b: jmp    0x140f05468
0x00f0543d: mov    r8d,0x6
0x00f05443: lea    rdx,[rip+0x82d47a]        # 0x1417328c4 ; literal="sewers"
0x00f0544a: jmp    0x140f05468
0x00f0544c: mov    r8d,0x7
0x00f05452: lea    rdx,[rip+0x82d44f]        # 0x1417328a8 ; literal="dungeon"
0x00f05459: jmp    0x140f05468
0x00f0545b: lea    rdx,[rip+0x82d482]        # 0x1417328e4 ; literal="tower"
0x00f05462: mov    r8d,0x5
0x00f05468: mov    rcx,rbx
0x00f0546b: call   0x140071040
0x00f05470: test   rbp,rbp
0x00f05473: je     0x140f0559d
0x00f05479: mov    r8d,0x1
0x00f0547f: lea    rdx,[rip+0x6fe56a]        # 0x1416039f0 ; literal=" "
0x00f05486: mov    rcx,rbx
0x00f05489: call   0x140071040
0x00f0548e: and    esi,0x2
0x00f05491: je     0x140f054ec
0x00f05493: mov    r8d,0xa
0x00f05499: lea    rdx,[rip+0x7ff150]        # 0x1417045f0 ; literal="[LPAGE:AB:"
0x00f054a0: mov    rcx,rbx
0x00f054a3: call   0x140071040
0x00f054a8: mov    rdx,rbx
0x00f054ab: mov    ecx,DWORD PTR [rdi+0x88]
0x00f054b1: call   0x140545610
0x00f054b6: mov    r8d,0x1
0x00f054bc: lea    rdx,[rip+0x72eda9]        # 0x14163426c ; literal=":"
0x00f054c3: mov    rcx,rbx
0x00f054c6: call   0x140071040
0x00f054cb: mov    rdx,rbx
0x00f054ce: mov    ecx,DWORD PTR [r14+0x8]
0x00f054d2: call   0x140545610
0x00f054d7: mov    r8d,0x1
0x00f054dd: lea    rdx,[rip+0x713f24]        # 0x141619408 ; literal="]"
0x00f054e4: mov    rcx,rbx
0x00f054e7: call   0x140071040
0x00f054ec: xorps  xmm0,xmm0
0x00f054ef: movups XMMWORD PTR [rsp+0x20],xmm0
0x00f054f4: mov    QWORD PTR [rsp+0x30],0x0
0x00f054fd: mov    QWORD PTR [rsp+0x38],0xf
0x00f05506: mov    BYTE PTR [rsp+0x20],0x0
0x00f0550b: xor    r9d,r9d
0x00f0550e: mov    r8b,0x1
0x00f05511: lea    rdx,[rsp+0x20]
0x00f05516: mov    rcx,rbp
0x00f05519: call   0x140aae180
0x00f0551e: lea    rdx,[rsp+0x20]
0x00f05523: cmp    QWORD PTR [rsp+0x38],0xf
0x00f05529: cmova  rdx,QWORD PTR [rsp+0x20]
0x00f0552f: mov    r8,QWORD PTR [rsp+0x30]
0x00f05534: mov    rcx,rbx
0x00f05537: call   0x140071040
0x00f0553c: test   esi,esi
0x00f0553e: je     0x140f05556
0x00f05540: mov    r8d,0x8
0x00f05546: lea    rdx,[rip+0x7143cb]        # 0x141619918 ; literal="[/LPAGE]"
0x00f0554d: mov    rcx,rbx
0x00f05550: call   0x140071040
0x00f05555: nop
0x00f05556: mov    rdx,QWORD PTR [rsp+0x38]
0x00f0555b: cmp    rdx,0xf
0x00f0555f: jbe    0x140f056a0
0x00f05565: inc    rdx
0x00f05568: mov    rcx,QWORD PTR [rsp+0x20]
0x00f0556d: mov    rax,rcx
0x00f05570: cmp    rdx,0x1000
0x00f05577: jb     0x140f0569b
0x00f0557d: add    rdx,0x27
0x00f05581: mov    rcx,QWORD PTR [rcx-0x8]
0x00f05585: sub    rax,rcx
0x00f05588: add    rax,0xfffffffffffffff8
0x00f0558c: cmp    rax,0x1f
0x00f05590: jbe    0x140f0569b
0x00f05596: call   QWORD PTR [rip+0x6fb5a4]        # 0x141600b40
0x00f0559c: int3
0x00f0559d: cmp    BYTE PTR [rdi+0x72],0x0
0x00f055a1: je     0x140f056a0
0x00f055a7: mov    r8,r15
0x00f055aa: lea    rdx,[rip+0x702c8b]        # 0x14160823c ; literal=" in "
0x00f055b1: mov    rcx,rbx
0x00f055b4: call   0x140071040
0x00f055b9: and    esi,0x2
0x00f055bc: je     0x140f055f6
0x00f055be: mov    r8d,0xc
0x00f055c4: lea    rdx,[rip+0x7ff245]        # 0x141704810 ; literal="[LPAGE:SITE:"
0x00f055cb: mov    rcx,rbx
0x00f055ce: call   0x140071040
0x00f055d3: mov    rdx,rbx
0x00f055d6: mov    ecx,DWORD PTR [rdi+0x88]
0x00f055dc: call   0x140545610
0x00f055e1: mov    r8d,0x1
0x00f055e7: lea    rdx,[rip+0x713e1a]        # 0x141619408 ; literal="]"
0x00f055ee: mov    rcx,rbx
0x00f055f1: call   0x140071040
0x00f055f6: xorps  xmm0,xmm0
0x00f055f9: movups XMMWORD PTR [rsp+0x20],xmm0
0x00f055fe: mov    QWORD PTR [rsp+0x30],0x0
0x00f05607: mov    QWORD PTR [rsp+0x38],0xf
0x00f05610: mov    BYTE PTR [rsp+0x20],0x0
0x00f05615: xor    r9d,r9d
0x00f05618: mov    r8b,0x1
0x00f0561b: lea    rdx,[rsp+0x20]
0x00f05620: mov    rcx,rdi
0x00f05623: call   0x140aae180
0x00f05628: lea    rdx,[rsp+0x20]
0x00f0562d: cmp    QWORD PTR [rsp+0x38],0xf
0x00f05633: cmova  rdx,QWORD PTR [rsp+0x20]
0x00f05639: mov    r8,QWORD PTR [rsp+0x30]
0x00f0563e: mov    rcx,rbx
0x00f05641: call   0x140071040
0x00f05646: test   esi,esi
0x00f05648: je     0x140f05660
0x00f0564a: mov    r8d,0x8
0x00f05650: lea    rdx,[rip+0x7142c1]        # 0x141619918 ; literal="[/LPAGE]"
0x00f05657: mov    rcx,rbx
0x00f0565a: call   0x140071040
0x00f0565f: nop
0x00f05660: mov    rdx,QWORD PTR [rsp+0x38]
0x00f05665: cmp    rdx,0xf
0x00f05669: jbe    0x140f056a0
0x00f0566b: inc    rdx
0x00f0566e: mov    rcx,QWORD PTR [rsp+0x20]
0x00f05673: mov    rax,rcx
0x00f05676: cmp    rdx,0x1000
0x00f0567d: jb     0x140f0569b
0x00f0567f: add    rdx,0x27
0x00f05683: mov    rcx,QWORD PTR [rcx-0x8]
0x00f05687: sub    rax,rcx
0x00f0568a: add    rax,0xfffffffffffffff8
0x00f0568e: cmp    rax,0x1f
0x00f05692: jbe    0x140f0569b
0x00f05694: call   QWORD PTR [rip+0x6fb4a6]        # 0x141600b40
0x00f0569a: int3
0x00f0569b: call   0x1415530d0
0x00f056a0: mov    rcx,QWORD PTR [rsp+0x40]
0x00f056a5: xor    rcx,rsp
0x00f056a8: call   0x1415530b0
0x00f056ad: mov    rbx,QWORD PTR [rsp+0x90]
0x00f056b5: add    rsp,0x50
0x00f056b9: pop    r15
0x00f056bb: pop    r14
0x00f056bd: pop    rdi
0x00f056be: pop    rsi
0x00f056bf: pop    rbp
0x00f056c0: ret
0x00f056c1: nop    DWORD PTR [rax]
