# steam PE:6a70a6d9:02711000; category-tree-builder; RVA 0x27f590..0x27ffa1
0x0027f590: mov    QWORD PTR [rsp+0x8],rcx
0x0027f595: push   rdi
0x0027f596: push   r12
0x0027f598: push   r14
0x0027f59a: sub    rsp,0x70
0x0027f59e: lea    r12,[rcx+0x28]
0x0027f5a2: mov    QWORD PTR [rcx+0xc0],0x0
0x0027f5ad: mov    rax,QWORD PTR [r12]
0x0027f5b1: mov    rdi,rcx
0x0027f5b4: mov    QWORD PTR [rsp+0x20],r12
0x0027f5b9: cmp    rax,QWORD PTR [r12+0x8]
0x0027f5be: je     0x14027f5c5
0x0027f5c0: mov    QWORD PTR [r12+0x8],rax
0x0027f5c5: mov    QWORD PTR [rsp+0x68],rbx
0x0027f5ca: lea    r14,[rcx+0x40]
0x0027f5ce: mov    QWORD PTR [rsp+0x60],rbp
0x0027f5d3: mov    rcx,r14
0x0027f5d6: mov    QWORD PTR [rsp+0x58],rsi
0x0027f5db: mov    QWORD PTR [rsp+0x50],r13
0x0027f5e0: mov    QWORD PTR [rsp+0x48],r15
0x0027f5e5: mov    QWORD PTR [rsp+0x28],r14
0x0027f5ea: call   0x1400bb9b0
0x0027f5ef: cmp    QWORD PTR [rdi+0x68],0x0
0x0027f5f4: jne    0x14027faf8
0x0027f5fa: mov    rdx,QWORD PTR [r12+0x8]
0x0027f5ff: mov    QWORD PTR [rsp+0x98],0x0
0x0027f60b: cmp    rdx,QWORD PTR [r12+0x10]
0x0027f610: je     0x14027f621
0x0027f612: mov    QWORD PTR [rdx],0x0
0x0027f619: add    QWORD PTR [r12+0x8],0x8
0x0027f61f: jmp    0x14027f631
0x0027f621: lea    r8,[rsp+0x98]
0x0027f629: mov    rcx,r12
0x0027f62c: call   0x1400bad30
0x0027f631: mov    ecx,0x20 ; inline_fragment=" "
0x0027f636: call   0x141539690
0x0027f63b: xorps  xmm0,xmm0
0x0027f63e: mov    QWORD PTR [rsp+0x98],rax
0x0027f646: xor    r8d,r8d
0x0027f649: lea    rdx,[rip+0x136bea8]        # 0x1415eb4f8
0x0027f650: mov    rcx,rax
0x0027f653: mov    rbx,rax
0x0027f656: movups XMMWORD PTR [rax],xmm0
0x0027f659: mov    QWORD PTR [rax+0x10],0x0
0x0027f661: mov    QWORD PTR [rax+0x18],0xf
0x0027f669: mov    BYTE PTR [rax],0x0
0x0027f66c: call   0x14006f8d0
0x0027f671: mov    rdx,QWORD PTR [r14+0x8]
0x0027f675: cmp    rdx,QWORD PTR [r14+0x10]
0x0027f679: je     0x14027f685
0x0027f67b: mov    QWORD PTR [rdx],rbx
0x0027f67e: add    QWORD PTR [r14+0x8],0x8
0x0027f683: jmp    0x14027f695
0x0027f685: lea    r8,[rsp+0x98]
0x0027f68d: mov    rcx,r14
0x0027f690: call   0x1400bad30
0x0027f695: mov    rax,QWORD PTR [rip+0x2277bd4]        # 0x1424f7270
0x0027f69c: xor    ecx,ecx
0x0027f69e: sub    rax,QWORD PTR [rip+0x2277bc3]        # 0x1424f7268
0x0027f6a5: sar    rax,0x3
0x0027f6a9: cdqe
0x0027f6ab: mov    QWORD PTR [rsp+0xa8],rcx
0x0027f6b3: mov    QWORD PTR [rsp+0x38],rax
0x0027f6b8: test   rax,rax
0x0027f6bb: jle    0x14027feda
0x0027f6c1: nop    DWORD PTR [rax+0x0]
0x0027f6c5: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x0027f6d0: mov    rax,QWORD PTR [rip+0x2277b91]        # 0x1424f7268
0x0027f6d7: mov    r13,QWORD PTR [rax+rcx*8]
0x0027f6db: mov    QWORD PTR [rsp+0x30],r13
0x0027f6e0: cmp    DWORD PTR [r13+0x48],0x0
0x0027f6e5: jle    0x14027fa34
0x0027f6eb: mov    rax,QWORD PTR [r13+0x40]
0x0027f6ef: test   BYTE PTR [rax],0x4
0x0027f6f2: je     0x14027fa34
0x0027f6f8: mov    rax,QWORD PTR [r13+0xc0]
0x0027f6ff: sub    rax,QWORD PTR [r13+0xb8]
0x0027f706: sar    rax,0x2
0x0027f70a: test   rax,rax
0x0027f70d: je     0x14027f883
0x0027f713: mov    BYTE PTR [rsp+0x98],0x0
0x0027f71b: xor    r12d,r12d
0x0027f71e: mov    DWORD PTR [rsp+0xa0],0x0
0x0027f729: nop    DWORD PTR [rax+0x0]
0x0027f730: mov    rbx,QWORD PTR [rip+0x216e7f1]        # 0x1423edf28
0x0027f737: mov    rdi,QWORD PTR [rip+0x216e7f2]        # 0x1423edf30
0x0027f73e: xchg   ax,ax
0x0027f740: cmp    rbx,rdi
0x0027f743: jae    0x14027f830
0x0027f749: mov    rcx,QWORD PTR [rbx]
0x0027f74c: mov    rsi,QWORD PTR [r13+0xb8]
0x0027f753: mov    rax,QWORD PTR [rcx]
0x0027f756: call   QWORD PTR [rax+0xd0]
0x0027f75c: cmp    eax,DWORD PTR [rsi+r12*1]
0x0027f760: jne    0x14027f827
0x0027f766: mov    rcx,QWORD PTR [rbx]
0x0027f769: mov    rsi,QWORD PTR [r13+0xd0]
0x0027f770: mov    rax,QWORD PTR [rcx]
0x0027f773: call   QWORD PTR [rax+0xd8]
0x0027f779: movsx  ecx,ax
0x0027f77c: cmp    ecx,DWORD PTR [rsi+r12*1]
0x0027f780: jne    0x14027f827
0x0027f786: mov    rcx,QWORD PTR [rbx]
0x0027f789: mov    rsi,QWORD PTR [r13+0xe8]
0x0027f790: mov    rax,QWORD PTR [rcx]
0x0027f793: call   QWORD PTR [rax]
0x0027f795: cmp    eax,DWORD PTR [rsi+r12*1]
0x0027f799: jne    0x14027f827
0x0027f79f: mov    rax,QWORD PTR [rip+0x216596a]        # 0x1423e5110
0x0027f7a6: mov    rsi,QWORD PTR [rbx]
0x0027f7a9: mov    rcx,rsi
0x0027f7ac: movsx  ebp,WORD PTR [rax+0xac]
0x0027f7b3: movsx  r15d,WORD PTR [rax+0xaa]
0x0027f7bb: movsx  r14d,WORD PTR [rax+0xa8]
0x0027f7c3: mov    rax,QWORD PTR [rsi]
0x0027f7c6: call   QWORD PTR [rax+0x130]
0x0027f7cc: test   al,al
0x0027f7ce: je     0x14027f827
0x0027f7d0: cmp    ebp,DWORD PTR [rsi+0x20]
0x0027f7d3: jne    0x14027f827
0x0027f7d5: mov    rax,QWORD PTR [rsi]
0x0027f7d8: mov    rcx,rsi
0x0027f7db: call   QWORD PTR [rax+0x140]
0x0027f7e1: test   al,al
0x0027f7e3: je     0x14027f80f
0x0027f7e5: cmp    QWORD PTR [rsi+0x30],0x0
0x0027f7ea: je     0x14027f80f
0x0027f7ec: movzx  r9d,bp
0x0027f7f0: movzx  r8d,r15w
0x0027f7f4: movzx  edx,r14w
0x0027f7f8: mov    rcx,rsi
0x0027f7fb: call   0x1405587b0
0x0027f800: test   al,al
0x0027f802: je     0x14027f827
0x0027f804: mov    dl,0x1
0x0027f806: mov    BYTE PTR [rsp+0x98],dl
0x0027f80d: jmp    0x14027f838
0x0027f80f: cmp    r14d,DWORD PTR [rsi+0x8]
0x0027f813: jl     0x14027f827
0x0027f815: cmp    r14d,DWORD PTR [rsi+0x14]
0x0027f819: jg     0x14027f827
0x0027f81b: cmp    r15d,DWORD PTR [rsi+0xc]
0x0027f81f: jl     0x14027f827
0x0027f821: cmp    r15d,DWORD PTR [rsi+0x18]
0x0027f825: jle    0x14027f804
0x0027f827: add    rbx,0x8
0x0027f82b: jmp    0x14027f740
0x0027f830: movzx  edx,BYTE PTR [rsp+0x98]
0x0027f838: mov    eax,DWORD PTR [rsp+0xa0]
0x0027f83f: add    r12,0x4
0x0027f843: mov    rcx,QWORD PTR [r13+0xc0]
0x0027f84a: inc    eax
0x0027f84c: sub    rcx,QWORD PTR [r13+0xb8]
0x0027f853: mov    DWORD PTR [rsp+0xa0],eax
0x0027f85a: cdqe
0x0027f85c: sar    rcx,0x2
0x0027f860: cmp    rax,rcx
0x0027f863: jb     0x14027f730
0x0027f869: mov    r14,QWORD PTR [rsp+0x28]
0x0027f86e: test   dl,dl
0x0027f870: je     0x14027fa2c
0x0027f876: mov    r12,QWORD PTR [rsp+0x20]
0x0027f87b: mov    rdi,QWORD PTR [rsp+0x90]
0x0027f883: cmp    QWORD PTR [r13+0x150],0x0
0x0027f88b: jne    0x14027f921
0x0027f891: mov    rdx,QWORD PTR [r12+0x8]
0x0027f896: cmp    rdx,QWORD PTR [r12+0x10]
0x0027f89b: je     0x14027f8a8
0x0027f89d: mov    QWORD PTR [rdx],r13
0x0027f8a0: add    QWORD PTR [r12+0x8],0x8
0x0027f8a6: jmp    0x14027f8b5
0x0027f8a8: lea    r8,[rsp+0x30]
0x0027f8ad: mov    rcx,r12
0x0027f8b0: call   0x1400bad30
0x0027f8b5: mov    ecx,0x20 ; inline_fragment=" "
0x0027f8ba: call   0x141539690
0x0027f8bf: xorps  xmm0,xmm0
0x0027f8c2: mov    QWORD PTR [rsp+0x98],rax
0x0027f8ca: xor    r8d,r8d
0x0027f8cd: lea    rdx,[rip+0x136bc24]        # 0x1415eb4f8
0x0027f8d4: mov    rcx,rax
0x0027f8d7: mov    rbx,rax
0x0027f8da: movups XMMWORD PTR [rax],xmm0
0x0027f8dd: mov    QWORD PTR [rax+0x10],0x0
0x0027f8e5: mov    QWORD PTR [rax+0x18],0xf
0x0027f8ed: mov    BYTE PTR [rax],0x0
0x0027f8f0: call   0x14006f8d0
0x0027f8f5: mov    rdx,QWORD PTR [r14+0x8]
0x0027f8f9: cmp    rdx,QWORD PTR [r14+0x10]
0x0027f8fd: je     0x14027f90c
0x0027f8ff: mov    QWORD PTR [rdx],rbx
0x0027f902: add    QWORD PTR [r14+0x8],0x8
0x0027f907: jmp    0x14027fa2c
0x0027f90c: lea    r8,[rsp+0x98]
0x0027f914: mov    rcx,r14
0x0027f917: call   0x1400bad30
0x0027f91c: jmp    0x14027fa2c
0x0027f921: mov    rsi,QWORD PTR [r14]
0x0027f924: mov    rbp,QWORD PTR [rdi+0x48]
0x0027f928: mov    rbx,rsi
0x0027f92b: nop    DWORD PTR [rax+rax*1+0x0]
0x0027f930: cmp    rbx,rbp
0x0027f933: jae    0x14027f973
0x0027f935: mov    rcx,QWORD PTR [rbx]
0x0027f938: lea    rdx,[r13+0x140]
0x0027f93f: cmp    QWORD PTR [rdx+0x18],0xf
0x0027f944: mov    rax,QWORD PTR [rdx+0x10]
0x0027f948: jbe    0x14027f94d
0x0027f94a: mov    rdx,QWORD PTR [rdx]
0x0027f94d: cmp    QWORD PTR [rcx+0x18],0xf
0x0027f952: mov    r8,QWORD PTR [rcx+0x10]
0x0027f956: jbe    0x14027f95b
0x0027f958: mov    rcx,QWORD PTR [rcx]
0x0027f95b: cmp    r8,rax
0x0027f95e: jne    0x14027f96d
0x0027f960: call   0x14153ae14
0x0027f965: test   eax,eax
0x0027f967: je     0x14027fa2c
0x0027f96d: add    rbx,0x8
0x0027f971: jmp    0x14027f930
0x0027f973: mov    rbx,QWORD PTR [rip+0x2277906]        # 0x1424f7280
0x0027f97a: mov    rdi,QWORD PTR [rip+0x2277907]        # 0x1424f7288
0x0027f981: cmp    rbx,rdi
0x0027f984: jae    0x14027fa2c
0x0027f98a: mov    r15,QWORD PTR [rbx]
0x0027f98d: lea    rdx,[r13+0x140]
0x0027f994: cmp    QWORD PTR [rdx+0x18],0xf
0x0027f999: mov    rax,QWORD PTR [rdx+0x10]
0x0027f99d: jbe    0x14027f9a2
0x0027f99f: mov    rdx,QWORD PTR [rdx]
0x0027f9a2: cmp    QWORD PTR [r15+0x18],0xf
0x0027f9a7: mov    rcx,r15
0x0027f9aa: mov    r8,QWORD PTR [r15+0x10]
0x0027f9ae: jbe    0x14027f9b3
0x0027f9b0: mov    rcx,QWORD PTR [r15]
0x0027f9b3: cmp    r8,rax
0x0027f9b6: jne    0x14027f9c1
0x0027f9b8: call   0x14153ae14
0x0027f9bd: test   eax,eax
0x0027f9bf: je     0x14027f9c7
0x0027f9c1: add    rbx,0x8
0x0027f9c5: jmp    0x14027f981
0x0027f9c7: test   r15,r15
0x0027f9ca: je     0x14027fa2c
0x0027f9cc: mov    rdi,QWORD PTR [rip+0x22778b5]        # 0x1424f7288
0x0027f9d3: mov    rbx,QWORD PTR [rip+0x22778a6]        # 0x1424f7280
0x0027f9da: nop    WORD PTR [rax+rax*1+0x0]
0x0027f9e0: cmp    rbx,rdi
0x0027f9e3: jae    0x14027fa5c
0x0027f9e5: cmp    QWORD PTR [r15+0x38],0xf
0x0027f9ea: lea    rdx,[r15+0x20]
0x0027f9ee: mov    r14,QWORD PTR [rbx]
0x0027f9f1: mov    rax,QWORD PTR [rdx+0x10]
0x0027f9f5: jbe    0x14027f9fa
0x0027f9f7: mov    rdx,QWORD PTR [rdx]
0x0027f9fa: cmp    QWORD PTR [r14+0x18],0xf
0x0027f9ff: mov    rcx,r14
0x0027fa02: mov    r8,QWORD PTR [r14+0x10]
0x0027fa06: jbe    0x14027fa0b
0x0027fa08: mov    rcx,QWORD PTR [r14]
0x0027fa0b: cmp    r8,rax
0x0027fa0e: jne    0x14027fa19
0x0027fa10: call   0x14153ae14
0x0027fa15: test   eax,eax
0x0027fa17: je     0x14027fa1f
0x0027fa19: add    rbx,0x8
0x0027fa1d: jmp    0x14027f9e0
0x0027fa1f: mov    r15,r14
0x0027fa22: test   r14,r14
0x0027fa25: jne    0x14027f9d3
0x0027fa27: mov    r14,QWORD PTR [rsp+0x28]
0x0027fa2c: mov    rcx,QWORD PTR [rsp+0xa8]
0x0027fa34: mov    r12,QWORD PTR [rsp+0x20]
0x0027fa39: inc    rcx
0x0027fa3c: mov    rdi,QWORD PTR [rsp+0x90]
0x0027fa44: mov    QWORD PTR [rsp+0xa8],rcx
0x0027fa4c: cmp    rcx,QWORD PTR [rsp+0x38]
0x0027fa51: jl     0x14027f6d0
0x0027fa57: jmp    0x14027feda
0x0027fa5c: test   r15,r15
0x0027fa5f: je     0x14027fa27
0x0027fa61: cmp    rsi,rbp
0x0027fa64: jae    0x14027fa99
0x0027fa66: cmp    QWORD PTR [r15+0x18],0xf
0x0027fa6b: mov    rdx,r15
0x0027fa6e: mov    rcx,QWORD PTR [rsi]
0x0027fa71: jbe    0x14027fa76
0x0027fa73: mov    rdx,QWORD PTR [r15]
0x0027fa76: cmp    QWORD PTR [rcx+0x18],0xf
0x0027fa7b: mov    r8,QWORD PTR [rcx+0x10]
0x0027fa7f: jbe    0x14027fa84
0x0027fa81: mov    rcx,QWORD PTR [rcx]
0x0027fa84: cmp    r8,QWORD PTR [r15+0x10]
0x0027fa88: jne    0x14027fa93
0x0027fa8a: call   0x14153ae14
0x0027fa8f: test   eax,eax
0x0027fa91: je     0x14027fa27
0x0027fa93: add    rsi,0x8
0x0027fa97: jmp    0x14027fa61
0x0027fa99: mov    rdx,QWORD PTR [r12+0x8]
0x0027fa9e: mov    QWORD PTR [rsp+0x98],0x0
0x0027faaa: cmp    rdx,QWORD PTR [r12+0x10]
0x0027faaf: je     0x14027fad3
0x0027fab1: mov    r14,QWORD PTR [rsp+0x28]
0x0027fab6: mov    QWORD PTR [rdx],0x0
0x0027fabd: mov    rcx,r14
0x0027fac0: add    QWORD PTR [r12+0x8],0x8
0x0027fac6: mov    rdx,r15
0x0027fac9: call   0x1400bb770
0x0027face: jmp    0x14027fa2c
0x0027fad3: lea    r8,[rsp+0x98]
0x0027fadb: mov    rcx,r12
0x0027fade: call   0x1400bad30
0x0027fae3: mov    r14,QWORD PTR [rsp+0x28]
0x0027fae8: mov    rdx,r15
0x0027faeb: mov    rcx,r14
0x0027faee: call   0x1400bb770
0x0027faf3: jmp    0x14027fa2c
0x0027faf8: mov    rax,QWORD PTR [rip+0x2277771]        # 0x1424f7270
0x0027faff: xor    edi,edi
0x0027fb01: sub    rax,QWORD PTR [rip+0x2277760]        # 0x1424f7268
0x0027fb08: sar    rax,0x3
0x0027fb0c: cdqe
0x0027fb0e: mov    QWORD PTR [rsp+0xa8],rdi
0x0027fb16: mov    QWORD PTR [rsp+0x30],rax
0x0027fb1b: test   rax,rax
0x0027fb1e: jle    0x14027feda
0x0027fb24: nop    DWORD PTR [rax+0x0]
0x0027fb28: nop    DWORD PTR [rax+rax*1+0x0]
0x0027fb30: mov    rax,QWORD PTR [rip+0x2277731]        # 0x1424f7268
0x0027fb37: mov    r13,QWORD PTR [rax+rdi*8]
0x0027fb3b: mov    QWORD PTR [rsp+0x38],r13
0x0027fb40: cmp    DWORD PTR [r13+0x48],0x0
0x0027fb45: jle    0x14027fec4
0x0027fb4b: mov    rax,QWORD PTR [r13+0x40]
0x0027fb4f: test   BYTE PTR [rax],0x4
0x0027fb52: je     0x14027fec4
0x0027fb58: mov    rax,QWORD PTR [r13+0xc0]
0x0027fb5f: sub    rax,QWORD PTR [r13+0xb8]
0x0027fb66: sar    rax,0x2
0x0027fb6a: test   rax,rax
0x0027fb6d: je     0x14027fcde
0x0027fb73: mov    BYTE PTR [rsp+0x98],0x0
0x0027fb7b: xor    r12d,r12d
0x0027fb7e: mov    DWORD PTR [rsp+0xa0],0x0
0x0027fb89: nop    DWORD PTR [rax+0x0]
0x0027fb90: mov    rbx,QWORD PTR [rip+0x216e391]        # 0x1423edf28
0x0027fb97: mov    rdi,QWORD PTR [rip+0x216e392]        # 0x1423edf30
0x0027fb9e: xchg   ax,ax
0x0027fba0: cmp    rbx,rdi
0x0027fba3: jae    0x14027fc90
0x0027fba9: mov    rcx,QWORD PTR [rbx]
0x0027fbac: mov    rsi,QWORD PTR [r13+0xb8]
0x0027fbb3: mov    rax,QWORD PTR [rcx]
0x0027fbb6: call   QWORD PTR [rax+0xd0]
0x0027fbbc: cmp    eax,DWORD PTR [rsi+r12*1]
0x0027fbc0: jne    0x14027fc87
0x0027fbc6: mov    rcx,QWORD PTR [rbx]
0x0027fbc9: mov    rsi,QWORD PTR [r13+0xd0]
0x0027fbd0: mov    rax,QWORD PTR [rcx]
0x0027fbd3: call   QWORD PTR [rax+0xd8]
0x0027fbd9: movsx  ecx,ax
0x0027fbdc: cmp    ecx,DWORD PTR [rsi+r12*1]
0x0027fbe0: jne    0x14027fc87
0x0027fbe6: mov    rcx,QWORD PTR [rbx]
0x0027fbe9: mov    rsi,QWORD PTR [r13+0xe8]
0x0027fbf0: mov    rax,QWORD PTR [rcx]
0x0027fbf3: call   QWORD PTR [rax]
0x0027fbf5: cmp    eax,DWORD PTR [rsi+r12*1]
0x0027fbf9: jne    0x14027fc87
0x0027fbff: mov    rax,QWORD PTR [rip+0x216550a]        # 0x1423e5110
0x0027fc06: mov    rsi,QWORD PTR [rbx]
0x0027fc09: mov    rcx,rsi
0x0027fc0c: movsx  ebp,WORD PTR [rax+0xac]
0x0027fc13: movsx  r15d,WORD PTR [rax+0xaa]
0x0027fc1b: movsx  r14d,WORD PTR [rax+0xa8]
0x0027fc23: mov    rax,QWORD PTR [rsi]
0x0027fc26: call   QWORD PTR [rax+0x130]
0x0027fc2c: test   al,al
0x0027fc2e: je     0x14027fc87
0x0027fc30: cmp    ebp,DWORD PTR [rsi+0x20]
0x0027fc33: jne    0x14027fc87
0x0027fc35: mov    rax,QWORD PTR [rsi]
0x0027fc38: mov    rcx,rsi
0x0027fc3b: call   QWORD PTR [rax+0x140]
0x0027fc41: test   al,al
0x0027fc43: je     0x14027fc6f
0x0027fc45: cmp    QWORD PTR [rsi+0x30],0x0
0x0027fc4a: je     0x14027fc6f
0x0027fc4c: movzx  r9d,bp
0x0027fc50: movzx  r8d,r15w
0x0027fc54: movzx  edx,r14w
0x0027fc58: mov    rcx,rsi
0x0027fc5b: call   0x1405587b0
0x0027fc60: test   al,al
0x0027fc62: je     0x14027fc87
0x0027fc64: mov    dl,0x1
0x0027fc66: mov    BYTE PTR [rsp+0x98],dl
0x0027fc6d: jmp    0x14027fc98
0x0027fc6f: cmp    r14d,DWORD PTR [rsi+0x8]
0x0027fc73: jl     0x14027fc87
0x0027fc75: cmp    r14d,DWORD PTR [rsi+0x14]
0x0027fc79: jg     0x14027fc87
0x0027fc7b: cmp    r15d,DWORD PTR [rsi+0xc]
0x0027fc7f: jl     0x14027fc87
0x0027fc81: cmp    r15d,DWORD PTR [rsi+0x18]
0x0027fc85: jle    0x14027fc64
0x0027fc87: add    rbx,0x8
0x0027fc8b: jmp    0x14027fba0
0x0027fc90: movzx  edx,BYTE PTR [rsp+0x98]
0x0027fc98: mov    eax,DWORD PTR [rsp+0xa0]
0x0027fc9f: add    r12,0x4
0x0027fca3: mov    rcx,QWORD PTR [r13+0xc0]
0x0027fcaa: inc    eax
0x0027fcac: sub    rcx,QWORD PTR [r13+0xb8]
0x0027fcb3: mov    DWORD PTR [rsp+0xa0],eax
0x0027fcba: cdqe
0x0027fcbc: sar    rcx,0x2
0x0027fcc0: cmp    rax,rcx
0x0027fcc3: jb     0x14027fb90
0x0027fcc9: mov    rdi,QWORD PTR [rsp+0xa8]
0x0027fcd1: mov    r12,QWORD PTR [rsp+0x20]
0x0027fcd6: test   dl,dl
0x0027fcd8: je     0x14027fec4
0x0027fcde: mov    rdx,QWORD PTR [rsp+0x90]
0x0027fce6: lea    r14,[r13+0x140]
0x0027fced: add    rdx,0x58
0x0027fcf1: cmp    QWORD PTR [rdx+0x18],0xf
0x0027fcf6: mov    rax,QWORD PTR [rdx+0x10]
0x0027fcfa: jbe    0x14027fcff
0x0027fcfc: mov    rdx,QWORD PTR [rdx]
0x0027fcff: mov    r15,QWORD PTR [r14+0x18]
0x0027fd03: mov    rcx,r14
0x0027fd06: mov    rbp,QWORD PTR [r14+0x10]
0x0027fd0a: cmp    r15,0xf
0x0027fd0e: jbe    0x14027fd13
0x0027fd10: mov    rcx,QWORD PTR [r14]
0x0027fd13: cmp    rbp,rax
0x0027fd16: jne    0x14027fdc1
0x0027fd1c: mov    r8,rbp
0x0027fd1f: call   0x14153ae14
0x0027fd24: test   eax,eax
0x0027fd26: jne    0x14027fdc1
0x0027fd2c: mov    rdx,QWORD PTR [r12+0x8]
0x0027fd31: cmp    rdx,QWORD PTR [r12+0x10]
0x0027fd36: je     0x14027fd43
0x0027fd38: mov    QWORD PTR [rdx],r13
0x0027fd3b: add    QWORD PTR [r12+0x8],0x8
0x0027fd41: jmp    0x14027fd50
0x0027fd43: lea    r8,[rsp+0x38]
0x0027fd48: mov    rcx,r12
0x0027fd4b: call   0x1400bad30
0x0027fd50: mov    ecx,0x20 ; inline_fragment=" "
0x0027fd55: call   0x141539690
0x0027fd5a: xorps  xmm0,xmm0
0x0027fd5d: mov    QWORD PTR [rsp+0x98],rax
0x0027fd65: xor    r8d,r8d
0x0027fd68: lea    rdx,[rip+0x136b789]        # 0x1415eb4f8
0x0027fd6f: mov    rcx,rax
0x0027fd72: mov    rbx,rax
0x0027fd75: movups XMMWORD PTR [rax],xmm0
0x0027fd78: mov    QWORD PTR [rax+0x10],0x0
0x0027fd80: mov    QWORD PTR [rax+0x18],0xf
0x0027fd88: mov    BYTE PTR [rax],0x0
0x0027fd8b: call   0x14006f8d0
0x0027fd90: mov    r14,QWORD PTR [rsp+0x28]
0x0027fd95: mov    rdx,QWORD PTR [r14+0x8]
0x0027fd99: cmp    rdx,QWORD PTR [r14+0x10]
0x0027fd9d: je     0x14027fdac
0x0027fd9f: mov    QWORD PTR [rdx],rbx
0x0027fda2: add    QWORD PTR [r14+0x8],0x8
0x0027fda7: jmp    0x14027fec4
0x0027fdac: lea    r8,[rsp+0x98]
0x0027fdb4: mov    rcx,r14
0x0027fdb7: call   0x1400bad30
0x0027fdbc: jmp    0x14027fec4
0x0027fdc1: mov    rbx,QWORD PTR [rip+0x22774b8]        # 0x1424f7280
0x0027fdc8: mov    rdi,QWORD PTR [rip+0x22774b9]        # 0x1424f7288
0x0027fdcf: nop
0x0027fdd0: cmp    rbx,rdi
0x0027fdd3: jae    0x14027febc
0x0027fdd9: mov    rcx,QWORD PTR [rbx]
0x0027fddc: mov    rdx,r14
0x0027fddf: mov    rax,rcx
0x0027fde2: cmp    r15,0xf
0x0027fde6: jbe    0x14027fdeb
0x0027fde8: mov    rdx,QWORD PTR [r14]
0x0027fdeb: cmp    QWORD PTR [rcx+0x18],0xf
0x0027fdf0: mov    rsi,rcx
0x0027fdf3: mov    r8,QWORD PTR [rcx+0x10]
0x0027fdf7: jbe    0x14027fdff
0x0027fdf9: mov    rcx,QWORD PTR [rcx]
0x0027fdfc: mov    rsi,rax
0x0027fdff: cmp    r8,rbp
0x0027fe02: jne    0x14027fe0d
0x0027fe04: call   0x14153ae14
0x0027fe09: test   eax,eax
0x0027fe0b: je     0x14027fe13
0x0027fe0d: add    rbx,0x8
0x0027fe11: jmp    0x14027fdd0
0x0027fe13: test   rsi,rsi
0x0027fe16: je     0x14027febc
0x0027fe1c: mov    r15,QWORD PTR [rsp+0x90]
0x0027fe24: mov    rbp,QWORD PTR [r15+0x68]
0x0027fe28: mov    r12,QWORD PTR [r15+0x70]
0x0027fe2c: nop    DWORD PTR [rax+0x0]
0x0027fe30: lea    r14,[rsi+0x20]
0x0027fe34: lea    rdx,[r15+0x58]
0x0027fe38: cmp    r12,0xf
0x0027fe3c: jbe    0x14027fe42
0x0027fe3e: mov    rdx,QWORD PTR [r15+0x58]
0x0027fe42: cmp    QWORD PTR [r14+0x18],0xf
0x0027fe47: mov    rcx,r14
0x0027fe4a: mov    r8,QWORD PTR [r14+0x10]
0x0027fe4e: jbe    0x14027fe53
0x0027fe50: mov    rcx,QWORD PTR [r14]
0x0027fe53: cmp    r8,rbp
0x0027fe56: jne    0x14027fe65
0x0027fe58: call   0x14153ae14
0x0027fe5d: test   eax,eax
0x0027fe5f: je     0x14027fefd
0x0027fe65: mov    rbx,QWORD PTR [rip+0x2277414]        # 0x1424f7280
0x0027fe6c: mov    rdi,QWORD PTR [rip+0x2277415]        # 0x1424f7288
0x0027fe73: cmp    rbx,rdi
0x0027fe76: jae    0x14027feb7
0x0027fe78: cmp    QWORD PTR [r14+0x18],0xf
0x0027fe7d: mov    rdx,r14
0x0027fe80: mov    rsi,QWORD PTR [rbx]
0x0027fe83: jbe    0x14027fe88
0x0027fe85: mov    rdx,QWORD PTR [r14]
0x0027fe88: cmp    QWORD PTR [rsi+0x18],0xf
0x0027fe8d: mov    rcx,rsi
0x0027fe90: mov    r8,QWORD PTR [rsi+0x10]
0x0027fe94: jbe    0x14027fe99
0x0027fe96: mov    rcx,QWORD PTR [rsi]
0x0027fe99: cmp    r8,QWORD PTR [r14+0x10]
0x0027fe9d: jne    0x14027fea8
0x0027fe9f: call   0x14153ae14
0x0027fea4: test   eax,eax
0x0027fea6: je     0x14027feae
0x0027fea8: add    rbx,0x8
0x0027feac: jmp    0x14027fe73
0x0027feae: test   rsi,rsi
0x0027feb1: jne    0x14027fe30
0x0027feb7: mov    r12,QWORD PTR [rsp+0x20]
0x0027febc: mov    rdi,QWORD PTR [rsp+0xa8]
0x0027fec4: inc    rdi
0x0027fec7: mov    QWORD PTR [rsp+0xa8],rdi
0x0027fecf: cmp    rdi,QWORD PTR [rsp+0x30]
0x0027fed4: jl     0x14027fb30
0x0027feda: mov    r15,QWORD PTR [rsp+0x48]
0x0027fedf: mov    r13,QWORD PTR [rsp+0x50]
0x0027fee4: mov    rsi,QWORD PTR [rsp+0x58]
0x0027fee9: mov    rbp,QWORD PTR [rsp+0x60]
0x0027feee: mov    rbx,QWORD PTR [rsp+0x68]
0x0027fef3: add    rsp,0x70
0x0027fef7: pop    r14
0x0027fef9: pop    r12
0x0027fefb: pop    rdi
0x0027fefc: ret
0x0027fefd: mov    r14,QWORD PTR [rsp+0x28]
0x0027ff02: mov    rax,QWORD PTR [rsp+0x90]
0x0027ff0a: mov    rbx,QWORD PTR [r14]
0x0027ff0d: mov    rdi,QWORD PTR [rax+0x48]
0x0027ff11: cmp    rbx,rdi
0x0027ff14: jae    0x14027ff4d
0x0027ff16: cmp    QWORD PTR [rsi+0x18],0xf
0x0027ff1b: mov    rdx,rsi
0x0027ff1e: mov    rcx,QWORD PTR [rbx]
0x0027ff21: jbe    0x14027ff26
0x0027ff23: mov    rdx,QWORD PTR [rsi]
0x0027ff26: cmp    QWORD PTR [rcx+0x18],0xf
0x0027ff2b: mov    r8,QWORD PTR [rcx+0x10]
0x0027ff2f: jbe    0x14027ff34
0x0027ff31: mov    rcx,QWORD PTR [rcx]
0x0027ff34: cmp    r8,QWORD PTR [rsi+0x10]
0x0027ff38: jne    0x14027ff47
0x0027ff3a: call   0x14153ae14
0x0027ff3f: test   eax,eax
0x0027ff41: je     0x14027feb7
0x0027ff47: add    rbx,0x8
0x0027ff4b: jmp    0x14027ff11
0x0027ff4d: mov    r12,QWORD PTR [rsp+0x20]
0x0027ff52: xor    eax,eax
0x0027ff54: mov    QWORD PTR [rsp+0x98],rax
0x0027ff5c: mov    rdx,QWORD PTR [r12+0x8]
0x0027ff61: cmp    rdx,QWORD PTR [r12+0x10]
0x0027ff66: je     0x14027ff81
0x0027ff68: mov    QWORD PTR [rdx],rax
0x0027ff6b: mov    rcx,r14
0x0027ff6e: add    QWORD PTR [r12+0x8],0x8
0x0027ff74: mov    rdx,rsi
0x0027ff77: call   0x1400bb770
0x0027ff7c: jmp    0x14027febc
0x0027ff81: lea    r8,[rsp+0x98]
0x0027ff89: mov    rcx,r12
0x0027ff8c: call   0x1400bad30
0x0027ff91: mov    rdx,rsi
0x0027ff94: mov    rcx,r14
0x0027ff97: call   0x1400bb770
0x0027ff9c: jmp    0x14027febc
