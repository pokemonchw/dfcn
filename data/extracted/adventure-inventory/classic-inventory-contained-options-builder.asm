# classic PE:6a70b91c:0270a000; inventory-contained-options-builder; RVA 0x85f740..0x85fe5c
0x0085f740: mov    QWORD PTR [rsp+0x8],rbx
0x0085f745: mov    DWORD PTR [rsp+0x20],r9d
0x0085f74a: mov    DWORD PTR [rsp+0x18],r8d
0x0085f74f: mov    QWORD PTR [rsp+0x10],rdx
0x0085f754: push   rbp
0x0085f755: push   rsi
0x0085f756: push   rdi
0x0085f757: push   r12
0x0085f759: push   r13
0x0085f75b: push   r14
0x0085f75d: push   r15
0x0085f75f: lea    rbp,[rsp-0x7]
0x0085f764: sub    rsp,0xa0
0x0085f76b: mov    ebx,r9d
0x0085f76e: mov    rdi,rdx
0x0085f771: mov    rsi,rcx
0x0085f774: test   BYTE PTR [rdx+0x10],0x40
0x0085f778: je     0x14085fe39
0x0085f77e: xor    r13d,r13d
0x0085f781: mov    r15d,r13d
0x0085f784: mov    DWORD PTR [rbp-0x3d],r13d
0x0085f788: mov    rdx,QWORD PTR [rdx+0x38]
0x0085f78c: mov    rax,QWORD PTR [rdi+0x40]
0x0085f790: sub    rax,rdx
0x0085f793: sar    rax,0x3
0x0085f797: test   rax,rax
0x0085f79a: je     0x14085fe39
0x0085f7a0: mov    r14d,r13d
0x0085f7a3: mov    QWORD PTR [rbp-0x1],r13
0x0085f7a7: nop    WORD PTR [rax+rax*1+0x0]
0x0085f7b0: mov    rcx,QWORD PTR [rdx+r14*1]
0x0085f7b4: mov    rax,QWORD PTR [rcx]
0x0085f7b7: call   QWORD PTR [rax+0x10]
0x0085f7ba: cmp    eax,0xa
0x0085f7bd: jne    0x14085fe0f
0x0085f7c3: mov    rax,QWORD PTR [rdi+0x38]
0x0085f7c7: mov    rcx,QWORD PTR [r14+rax*1]
0x0085f7cb: mov    rax,QWORD PTR [rcx]
0x0085f7ce: call   QWORD PTR [rax+0x18]
0x0085f7d1: mov    r12,rax
0x0085f7d4: test   rax,rax
0x0085f7d7: je     0x14085fe0f
0x0085f7dd: cmp    ebx,0x3
0x0085f7e0: jne    0x14085f8b1
0x0085f7e6: mov    r13,QWORD PTR [rip+0x1b7f813]        # 0x1423df000
0x0085f7ed: movzx  edx,WORD PTR [r13+0xa4]
0x0085f7f5: mov    rcx,rax
0x0085f7f8: call   0x14135bdc0
0x0085f7fd: test   eax,eax
0x0085f7ff: jne    0x14085fdc8
0x0085f805: mov    rax,QWORD PTR [r12]
0x0085f809: mov    rcx,r12
0x0085f80c: call   QWORD PTR [rax+0x1d8]
0x0085f812: movzx  r15d,ax
0x0085f816: mov    rdx,QWORD PTR [r12]
0x0085f81a: mov    rcx,r12
0x0085f81d: call   QWORD PTR [rdx+0x5a0]
0x0085f823: movzx  r14d,al
0x0085f827: mov    rdx,QWORD PTR [r12]
0x0085f82b: mov    rcx,r12
0x0085f82e: call   QWORD PTR [rdx+0x198]
0x0085f834: mov    edi,eax
0x0085f836: mov    rdx,QWORD PTR [r12]
0x0085f83a: mov    rcx,r12
0x0085f83d: call   QWORD PTR [rdx+0x8]
0x0085f840: movzx  ebx,ax
0x0085f843: mov    rdx,QWORD PTR [r12]
0x0085f847: mov    rcx,r12
0x0085f84a: call   QWORD PTR [rdx]
0x0085f84c: mov    BYTE PTR [rsp+0x48],0x0
0x0085f851: lea    rcx,[rbp-0x39]
0x0085f855: mov    QWORD PTR [rsp+0x40],rcx
0x0085f85a: lea    rcx,[rbp-0x35]
0x0085f85e: mov    QWORD PTR [rsp+0x38],rcx
0x0085f863: lea    rcx,[rbp-0x41]
0x0085f867: mov    QWORD PTR [rsp+0x30],rcx
0x0085f86c: mov    BYTE PTR [rsp+0x28],r15b
0x0085f871: mov    BYTE PTR [rsp+0x20],r14b
0x0085f876: mov    r9d,edi
0x0085f879: movzx  r8d,bx
0x0085f87d: movzx  edx,ax
0x0085f880: mov    rcx,r13
0x0085f883: call   0x14138fd90
0x0085f888: mov    ebx,DWORD PTR [rbp+0x5f]
0x0085f88b: xor    r13d,r13d
0x0085f88e: test   al,al
0x0085f890: je     0x14085fdcb
0x0085f896: movzx  ecx,WORD PTR [rbp-0x41]
0x0085f89a: lea    eax,[rcx-0x2]
0x0085f89d: cmp    ax,0x3
0x0085f8a1: jbe    0x14085f9d0
0x0085f8a7: cmp    cx,0xa
0x0085f8ab: jne    0x14085fdcb
0x0085f8b1: cmp    ebx,0x8
0x0085f8b4: ja     0x14085fdcb
0x0085f8ba: movsxd rax,ebx
0x0085f8bd: lea    rdx,[rip+0xffffffffff7a073c]        # 0x140000000
0x0085f8c4: mov    ecx,DWORD PTR [rdx+rax*4+0x85fe5c]
0x0085f8cb: add    rcx,rdx
0x0085f8ce: jmp    rcx
0x0085f8d0: mov    ecx,0x28
0x0085f8d5: call   0x141534600
0x0085f8da: mov    QWORD PTR [rbp-0x49],rax
0x0085f8de: mov    DWORD PTR [rax+0xc],0xffffffff
0x0085f8e5: lea    rcx,[rip+0xe552fc]        # 0x1416b4be8
0x0085f8ec: mov    QWORD PTR [rax],rcx
0x0085f8ef: mov    DWORD PTR [rax+0x20],r13d
0x0085f8f3: mov    QWORD PTR [rax+0x10],r12
0x0085f8f7: mov    QWORD PTR [rax+0x18],r13
0x0085f8fb: mov    r14d,DWORD PTR [rbp+0x57]
0x0085f8ff: mov    DWORD PTR [rax+0x8],r14d
0x0085f903: lea    rcx,[rsi+0x30]
0x0085f907: mov    QWORD PTR [rbp-0x49],rax
0x0085f90b: mov    rdx,QWORD PTR [rsi+0x38]
0x0085f90f: cmp    rdx,QWORD PTR [rsi+0x40]
0x0085f913: je     0x14085f922
0x0085f915: mov    QWORD PTR [rdx],rax
0x0085f918: add    QWORD PTR [rsi+0x38],0x8
0x0085f91d: jmp    0x14085fdcb
0x0085f922: lea    r8,[rbp-0x49]
0x0085f926: call   0x1400bacc0
0x0085f92b: jmp    0x14085fdcb
0x0085f930: mov    ecx,0x20
0x0085f935: call   0x141534600
0x0085f93a: mov    QWORD PTR [rbp-0x49],rax
0x0085f93e: mov    DWORD PTR [rax+0xc],0xffffffff
0x0085f945: lea    rcx,[rip+0xe5285c]        # 0x1416b21a8
0x0085f94c: mov    QWORD PTR [rax],rcx
0x0085f94f: mov    QWORD PTR [rax+0x10],r12
0x0085f953: mov    QWORD PTR [rax+0x18],r13
0x0085f957: mov    r14d,DWORD PTR [rbp+0x57]
0x0085f95b: mov    DWORD PTR [rax+0x8],r14d
0x0085f95f: lea    rcx,[rsi+0x48]
0x0085f963: mov    QWORD PTR [rbp-0x49],rax
0x0085f967: mov    rdx,QWORD PTR [rsi+0x50]
0x0085f96b: cmp    rdx,QWORD PTR [rsi+0x58]
0x0085f96f: je     0x14085f922
0x0085f971: mov    QWORD PTR [rdx],rax
0x0085f974: add    QWORD PTR [rsi+0x50],0x8
0x0085f979: jmp    0x14085fdcb
0x0085f97e: mov    ecx,0x20
0x0085f983: call   0x141534600
0x0085f988: mov    QWORD PTR [rbp-0x49],rax
0x0085f98c: mov    DWORD PTR [rax+0xc],0xffffffff
0x0085f993: lea    rcx,[rip+0xe58fee]        # 0x1416b8988
0x0085f99a: mov    QWORD PTR [rax],rcx
0x0085f99d: mov    QWORD PTR [rax+0x10],r12
0x0085f9a1: mov    QWORD PTR [rax+0x18],r13
0x0085f9a5: mov    r14d,DWORD PTR [rbp+0x57]
0x0085f9a9: mov    DWORD PTR [rax+0x8],r14d
0x0085f9ad: lea    rcx,[rsi+0x60]
0x0085f9b1: mov    QWORD PTR [rbp-0x49],rax
0x0085f9b5: mov    rdx,QWORD PTR [rsi+0x68]
0x0085f9b9: cmp    rdx,QWORD PTR [rsi+0x70]
0x0085f9bd: je     0x14085f922
0x0085f9c3: mov    QWORD PTR [rdx],rax
0x0085f9c6: add    QWORD PTR [rsi+0x68],0x8
0x0085f9cb: jmp    0x14085fdcb
0x0085f9d0: mov    ecx,0x20
0x0085f9d5: call   0x141534600
0x0085f9da: mov    QWORD PTR [rbp-0x49],rax
0x0085f9de: mov    DWORD PTR [rax+0xc],0xffffffff
0x0085f9e5: lea    rcx,[rip+0xe533f4]        # 0x1416b2de0
0x0085f9ec: mov    QWORD PTR [rax],rcx
0x0085f9ef: mov    QWORD PTR [rax+0x10],r12
0x0085f9f3: mov    QWORD PTR [rax+0x18],r13
0x0085f9f7: mov    r14d,DWORD PTR [rbp+0x57]
0x0085f9fb: mov    DWORD PTR [rax+0x8],r14d
0x0085f9ff: lea    rcx,[rsi+0x78]
0x0085fa03: mov    QWORD PTR [rbp-0x49],rax
0x0085fa07: mov    rdx,QWORD PTR [rsi+0x80]
0x0085fa0e: cmp    rdx,QWORD PTR [rsi+0x88]
0x0085fa15: je     0x14085f922
0x0085fa1b: mov    QWORD PTR [rdx],rax
0x0085fa1e: add    QWORD PTR [rsi+0x80],0x8
0x0085fa26: jmp    0x14085fdcb
0x0085fa2b: mov    ecx,0x20
0x0085fa30: call   0x141534600
0x0085fa35: mov    QWORD PTR [rbp-0x49],rax
0x0085fa39: mov    DWORD PTR [rax+0xc],0xffffffff
0x0085fa40: lea    rcx,[rip+0xe540e1]        # 0x1416b3b28
0x0085fa47: mov    QWORD PTR [rax],rcx
0x0085fa4a: mov    QWORD PTR [rax+0x10],r12
0x0085fa4e: mov    QWORD PTR [rax+0x18],r13
0x0085fa52: mov    r14d,DWORD PTR [rbp+0x57]
0x0085fa56: mov    DWORD PTR [rax+0x8],r14d
0x0085fa5a: lea    rcx,[rsi+0x90]
0x0085fa61: mov    QWORD PTR [rbp-0x49],rax
0x0085fa65: mov    rdx,QWORD PTR [rsi+0x98]
0x0085fa6c: cmp    rdx,QWORD PTR [rsi+0xa0]
0x0085fa73: je     0x14085f922
0x0085fa79: mov    QWORD PTR [rdx],rax
0x0085fa7c: add    QWORD PTR [rsi+0x98],0x8
0x0085fa84: jmp    0x14085fdcb
0x0085fa89: xorps  xmm0,xmm0
0x0085fa8c: movdqu XMMWORD PTR [rbp-0x19],xmm0
0x0085fa91: mov    QWORD PTR [rbp-0x9],r13
0x0085fa95: mov    r8,r12
0x0085fa98: lea    rdx,[rbp-0x19]
0x0085fa9c: mov    rcx,rsi
0x0085fa9f: call   0x140896bf0
0x0085faa4: mov    rax,QWORD PTR [rbp-0x11]
0x0085faa8: mov    rcx,QWORD PTR [rbp-0x19]
0x0085faac: sub    rax,rcx
0x0085faaf: sar    rax,0x3
0x0085fab3: test   rax,rax
0x0085fab6: je     0x14085fb56
0x0085fabc: mov    ecx,0x38
0x0085fac1: call   0x141534600
0x0085fac6: mov    rbx,rax
0x0085fac9: mov    QWORD PTR [rbp-0x49],rax
0x0085facd: mov    DWORD PTR [rax+0x8],r13d
0x0085fad1: mov    DWORD PTR [rax+0xc],0xffffffff
0x0085fad8: lea    rax,[rip+0xe55981]        # 0x1416b5460
0x0085fadf: mov    QWORD PTR [rbx],rax
0x0085fae2: lea    rcx,[rbx+0x20]
0x0085fae6: mov    QWORD PTR [rcx],r13
0x0085fae9: mov    QWORD PTR [rcx+0x8],r13
0x0085faed: mov    QWORD PTR [rcx+0x10],r13
0x0085faf1: mov    QWORD PTR [rbx+0x10],r12
0x0085faf5: mov    QWORD PTR [rbx+0x18],r13
0x0085faf9: mov    r14d,DWORD PTR [rbp+0x57]
0x0085fafd: mov    DWORD PTR [rbx+0x8],r14d
0x0085fb01: lea    rax,[rbp-0x19]
0x0085fb05: cmp    rcx,rax
0x0085fb08: je     0x14085fb1e
0x0085fb0a: mov    r8,QWORD PTR [rbp-0x11]
0x0085fb0e: mov    rdx,QWORD PTR [rbp-0x19]
0x0085fb12: sub    r8,rdx
0x0085fb15: sar    r8,0x3
0x0085fb19: call   0x1400e1640
0x0085fb1e: lea    rcx,[rsi+0xa8]
0x0085fb25: mov    QWORD PTR [rbp-0x49],rbx
0x0085fb29: mov    rdx,QWORD PTR [rsi+0xb0]
0x0085fb30: cmp    rdx,QWORD PTR [rsi+0xb8]
0x0085fb37: je     0x14085fb46
0x0085fb39: mov    QWORD PTR [rdx],rbx
0x0085fb3c: add    QWORD PTR [rsi+0xb0],0x8
0x0085fb44: jmp    0x14085fb4f
0x0085fb46: lea    r8,[rbp-0x49]
0x0085fb4a: call   0x1400bacc0
0x0085fb4f: mov    ebx,DWORD PTR [rbp+0x5f]
0x0085fb52: mov    rcx,QWORD PTR [rbp-0x19]
0x0085fb56: test   rcx,rcx
0x0085fb59: je     0x14085fdcb
0x0085fb5f: mov    rdx,QWORD PTR [rbp-0x9]
0x0085fb63: sub    rdx,rcx
0x0085fb66: and    rdx,0xfffffffffffffff8
0x0085fb6a: mov    rax,rcx
0x0085fb6d: cmp    rdx,0x1000
0x0085fb74: jb     0x14085fb8f
0x0085fb76: add    rdx,0x27
0x0085fb7a: mov    rcx,QWORD PTR [rcx-0x8]
0x0085fb7e: sub    rax,rcx
0x0085fb81: add    rax,0xfffffffffffffff8
0x0085fb85: cmp    rax,0x1f
0x0085fb89: ja     0x14085fe54
0x0085fb8f: call   0x1415345f0
0x0085fb94: jmp    0x14085fdcb
0x0085fb99: mov    ecx,0x20
0x0085fb9e: call   0x141534600
0x0085fba3: mov    QWORD PTR [rbp-0x49],rax
0x0085fba7: mov    DWORD PTR [rax+0xc],0xffffffff
0x0085fbae: lea    rcx,[rip+0xe58243]        # 0x1416b7df8
0x0085fbb5: mov    QWORD PTR [rax],rcx
0x0085fbb8: mov    QWORD PTR [rax+0x10],r12
0x0085fbbc: mov    QWORD PTR [rax+0x18],r13
0x0085fbc0: mov    r14d,DWORD PTR [rbp+0x57]
0x0085fbc4: mov    DWORD PTR [rax+0x8],r14d
0x0085fbc8: lea    rcx,[rsi+0xc0]
0x0085fbcf: mov    QWORD PTR [rbp-0x49],rax
0x0085fbd3: mov    rdx,QWORD PTR [rsi+0xc8]
0x0085fbda: cmp    rdx,QWORD PTR [rsi+0xd0]
0x0085fbe1: je     0x14085f922
0x0085fbe7: mov    QWORD PTR [rdx],rax
0x0085fbea: add    QWORD PTR [rsi+0xc8],0x8
0x0085fbf2: jmp    0x14085fdcb
0x0085fbf7: xorps  xmm0,xmm0
0x0085fbfa: movdqu XMMWORD PTR [rbp-0x31],xmm0
0x0085fbff: mov    QWORD PTR [rbp-0x21],r13
0x0085fc03: movzx  eax,WORD PTR [rbp+0x7f]
0x0085fc07: mov    WORD PTR [rsp+0x40],ax
0x0085fc0c: movzx  eax,WORD PTR [rbp+0x77]
0x0085fc10: mov    WORD PTR [rsp+0x38],ax
0x0085fc15: movzx  eax,WORD PTR [rbp+0x6f]
0x0085fc19: mov    WORD PTR [rsp+0x30],ax
0x0085fc1e: movzx  r15d,BYTE PTR [rbp+0x67]
0x0085fc23: mov    BYTE PTR [rsp+0x28],r15b
0x0085fc28: mov    r14d,DWORD PTR [rbp+0x57]
0x0085fc2c: mov    DWORD PTR [rsp+0x20],r14d
0x0085fc31: xor    r9d,r9d
0x0085fc34: mov    r8,r12
0x0085fc37: lea    rdx,[rbp-0x31]
0x0085fc3b: mov    rcx,rsi
0x0085fc3e: call   0x1408950a0
0x0085fc43: mov    rdi,QWORD PTR [rbp-0x29]
0x0085fc47: mov    rax,rdi
0x0085fc4a: mov    rbx,QWORD PTR [rbp-0x31]
0x0085fc4e: sub    rax,rbx
0x0085fc51: sar    rax,0x3
0x0085fc55: test   rax,rax
0x0085fc58: je     0x14085fd5f
0x0085fc5e: test   r15b,r15b
0x0085fc61: je     0x14085fccf
0x0085fc63: mov    rdx,QWORD PTR [rip+0x10426e6]        # 0x1418a2350
0x0085fc6a: nop    WORD PTR [rax+rax*1+0x0]
0x0085fc70: cmp    rbx,rdi
0x0085fc73: jae    0x14085fcb8
0x0085fc75: cmp    rdx,QWORD PTR [rip+0x10426dc]        # 0x1418a2358
0x0085fc7c: je     0x14085fc9c
0x0085fc7e: mov    rax,QWORD PTR [rbx]
0x0085fc81: mov    QWORD PTR [rdx],rax
0x0085fc84: mov    rdx,QWORD PTR [rip+0x10426c5]        # 0x1418a2350
0x0085fc8b: add    rdx,0x8
0x0085fc8f: mov    QWORD PTR [rip+0x10426ba],rdx        # 0x1418a2350
0x0085fc96: add    rbx,0x8
0x0085fc9a: jmp    0x14085fc70
0x0085fc9c: mov    r8,rbx
0x0085fc9f: lea    rcx,[rip+0x10426a2]        # 0x1418a2348
0x0085fca6: call   0x1400bacc0
0x0085fcab: mov    rdx,QWORD PTR [rip+0x104269e]        # 0x1418a2350
0x0085fcb2: add    rbx,0x8
0x0085fcb6: jmp    0x14085fc70
0x0085fcb8: mov    rax,QWORD PTR [rbp-0x31]
0x0085fcbc: cmp    rax,QWORD PTR [rbp-0x29]
0x0085fcc0: je     0x14085fd5f
0x0085fcc6: mov    QWORD PTR [rbp-0x29],rax
0x0085fcca: jmp    0x14085fd5f
0x0085fccf: mov    ecx,0x38
0x0085fcd4: call   0x141534600
0x0085fcd9: mov    rbx,rax
0x0085fcdc: mov    QWORD PTR [rbp-0x49],rax
0x0085fce0: mov    DWORD PTR [rax+0x8],r13d
0x0085fce4: mov    DWORD PTR [rax+0xc],0xffffffff
0x0085fceb: lea    rax,[rip+0xe57576]        # 0x1416b7268
0x0085fcf2: mov    QWORD PTR [rbx],rax
0x0085fcf5: lea    rcx,[rbx+0x20]
0x0085fcf9: mov    QWORD PTR [rcx],r13
0x0085fcfc: mov    QWORD PTR [rcx+0x8],r13
0x0085fd00: mov    QWORD PTR [rcx+0x10],r13
0x0085fd04: mov    QWORD PTR [rbx+0x10],r12
0x0085fd08: mov    QWORD PTR [rbx+0x18],r13
0x0085fd0c: mov    DWORD PTR [rbx+0x8],r14d
0x0085fd10: lea    rax,[rbp-0x31]
0x0085fd14: cmp    rcx,rax
0x0085fd17: je     0x14085fd2d
0x0085fd19: mov    r8,QWORD PTR [rbp-0x29]
0x0085fd1d: mov    rdx,QWORD PTR [rbp-0x31]
0x0085fd21: sub    r8,rdx
0x0085fd24: sar    r8,0x3
0x0085fd28: call   0x1400e1640
0x0085fd2d: lea    rcx,[rsi+0xd8]
0x0085fd34: mov    QWORD PTR [rbp-0x49],rbx
0x0085fd38: mov    rdx,QWORD PTR [rsi+0xe0]
0x0085fd3f: cmp    rdx,QWORD PTR [rsi+0xe8]
0x0085fd46: je     0x14085fd55
0x0085fd48: mov    QWORD PTR [rdx],rbx
0x0085fd4b: add    QWORD PTR [rsi+0xe0],0x8
0x0085fd53: jmp    0x14085fd5f
0x0085fd55: lea    r8,[rbp-0x49]
0x0085fd59: call   0x1400bacc0
0x0085fd5e: nop
0x0085fd5f: lea    rcx,[rbp-0x31]
0x0085fd63: call   0x140066b00
0x0085fd68: mov    ebx,DWORD PTR [rbp+0x5f]
0x0085fd6b: jmp    0x14085fdcb
0x0085fd6d: mov    ecx,0x20
0x0085fd72: call   0x141534600
0x0085fd77: mov    QWORD PTR [rbp-0x49],rax
0x0085fd7b: mov    DWORD PTR [rax+0xc],0xffffffff
0x0085fd82: lea    rcx,[rip+0xe5535f]        # 0x1416b50e8
0x0085fd89: mov    QWORD PTR [rax],rcx
0x0085fd8c: mov    QWORD PTR [rax+0x10],r12
0x0085fd90: mov    QWORD PTR [rax+0x18],r13
0x0085fd94: mov    r14d,DWORD PTR [rbp+0x57]
0x0085fd98: mov    DWORD PTR [rax+0x8],r14d
0x0085fd9c: lea    rcx,[rsi+0xf0]
0x0085fda3: mov    QWORD PTR [rbp-0x49],rax
0x0085fda7: mov    rdx,QWORD PTR [rsi+0xf8]
0x0085fdae: cmp    rdx,QWORD PTR [rsi+0x100]
0x0085fdb5: je     0x14085f922
0x0085fdbb: mov    QWORD PTR [rdx],rax
0x0085fdbe: add    QWORD PTR [rsi+0xf8],0x8
0x0085fdc6: jmp    0x14085fdcb
0x0085fdc8: xor    r13d,r13d
0x0085fdcb: mov    r8d,DWORD PTR [rbp+0x57]
0x0085fdcf: inc    r8d
0x0085fdd2: movzx  eax,WORD PTR [rbp+0x7f]
0x0085fdd6: mov    WORD PTR [rsp+0x38],ax
0x0085fddb: movzx  eax,WORD PTR [rbp+0x77]
0x0085fddf: mov    WORD PTR [rsp+0x30],ax
0x0085fde4: movzx  eax,WORD PTR [rbp+0x6f]
0x0085fde8: mov    WORD PTR [rsp+0x28],ax
0x0085fded: movzx  eax,BYTE PTR [rbp+0x67]
0x0085fdf1: mov    BYTE PTR [rsp+0x20],al
0x0085fdf5: mov    r9d,ebx
0x0085fdf8: mov    rdx,r12
0x0085fdfb: mov    rcx,rsi
0x0085fdfe: call   0x14085f740
0x0085fe03: mov    rdi,QWORD PTR [rbp+0x4f]
0x0085fe07: mov    r14,QWORD PTR [rbp-0x1]
0x0085fe0b: mov    r15d,DWORD PTR [rbp-0x3d]
0x0085fe0f: inc    r15d
0x0085fe12: mov    DWORD PTR [rbp-0x3d],r15d
0x0085fe16: add    r14,0x8
0x0085fe1a: mov    QWORD PTR [rbp-0x1],r14
0x0085fe1e: mov    rdx,QWORD PTR [rdi+0x38]
0x0085fe22: mov    rcx,QWORD PTR [rdi+0x40]
0x0085fe26: sub    rcx,rdx
0x0085fe29: sar    rcx,0x3
0x0085fe2d: movsxd rax,r15d
0x0085fe30: cmp    rax,rcx
0x0085fe33: jb     0x14085f7b0
0x0085fe39: mov    rbx,QWORD PTR [rsp+0xe0]
0x0085fe41: add    rsp,0xa0
0x0085fe48: pop    r15
0x0085fe4a: pop    r14
0x0085fe4c: pop    r13
0x0085fe4e: pop    r12
0x0085fe50: pop    rdi
0x0085fe51: pop    rsi
0x0085fe52: pop    rbp
0x0085fe53: ret
0x0085fe54: call   QWORD PTR [rip+0xd80c46]        # 0x1415e0aa0
0x0085fe5a: int3
0x0085fe5b: nop
