0x140d7f5e0: rex push rbx
0x140d7f5e2: sub    rsp,0x60
0x140d7f5e6: mov    rbx,QWORD PTR [rcx]
0x140d7f5e9: mov    r10,rcx
0x140d7f5ec: mov    QWORD PTR [rcx+0x98],0x0
0x140d7f5f7: mov    QWORD PTR [rcx+0xa8],0x0
0x140d7f602: mov    QWORD PTR [rcx+0xb8],0x0
0x140d7f60d: mov    QWORD PTR [rcx+0xa0],0x0
0x140d7f618: mov    QWORD PTR [rcx+0xb0],0x0
0x140d7f623: mov    QWORD PTR [rcx+0xc0],0x0
0x140d7f62e: mov    QWORD PTR [rcx+0xc8],0x0
0x140d7f639: mov    QWORD PTR [rcx+0xd8],0x0
0x140d7f644: mov    QWORD PTR [rcx+0xe8],0x0
0x140d7f64f: mov    QWORD PTR [rcx+0xd0],0x0
0x140d7f65a: mov    QWORD PTR [rcx+0xe0],0x0
0x140d7f665: mov    QWORD PTR [rcx+0xf0],0x0
0x140d7f670: test   rbx,rbx
0x140d7f673: je     0x140d8014b
0x140d7f679: mov    r8,QWORD PTR [rcx+0x8]
0x140d7f67d: test   r8,r8
0x140d7f680: je     0x140d8014b
0x140d7f686: mov    QWORD PTR [rsp+0x38],r13
0x140d7f68b: mov    r13,QWORD PTR [rcx+0x60]
0x140d7f68f: mov    QWORD PTR [rsp+0x80],r13
0x140d7f697: test   r13,r13
0x140d7f69a: jle    0x140d80146
0x140d7f6a0: mov    rax,QWORD PTR [rcx+0x68]
0x140d7f6a4: mov    QWORD PTR [rsp+0x58],rbp
0x140d7f6a9: mov    ebp,0x1
0x140d7f6ae: mov    QWORD PTR [rsp+0x50],rsi
0x140d7f6b3: mov    QWORD PTR [rsp+0x40],r12
0x140d7f6b8: lea    rcx,[rax*2+0x3e8]
0x140d7f6c0: mov    QWORD PTR [rsp+0x30],r14
0x140d7f6c5: mov    eax,0x7d0
0x140d7f6ca: mov    QWORD PTR [rsp+0x28],r15
0x140d7f6cf: cmp    rcx,rax
0x140d7f6d2: jge    0x140d7f6de
0x140d7f6d4: cmp    rcx,rbp
0x140d7f6d7: mov    rax,rcx
0x140d7f6da: cmovl  rax,rbp
0x140d7f6de: mov    rcx,QWORD PTR [r10+0x78]
0x140d7f6e2: cmp    rcx,rbp
0x140d7f6e5: je     0x140d7f6eb
0x140d7f6e7: imul   rax,rcx
0x140d7f6eb: mov    rcx,QWORD PTR [r10+0x70]
0x140d7f6ef: cmp    rcx,rbp
0x140d7f6f2: jbe    0x140d7f6f9
0x140d7f6f4: cqo
0x140d7f6f6: idiv   rcx
0x140d7f6f9: mov    r12d,0x186a0
0x140d7f6ff: mov    QWORD PTR [rsp+0x8],r12
0x140d7f704: cmp    rax,r12
0x140d7f707: jge    0x140d7f718
0x140d7f709: cmp    rax,rbp
0x140d7f70c: mov    r12,rax
0x140d7f70f: cmovl  r12,rbp
0x140d7f713: mov    QWORD PTR [rsp+0x8],r12
0x140d7f718: mov    rsi,QWORD PTR [r10+0x10]
0x140d7f71c: mov    r15,0xffffffffffffffff
0x140d7f723: mov    eax,DWORD PTR [r10+0x94]
0x140d7f72a: mov    ecx,0xc350
0x140d7f72f: mov    QWORD PTR [rsp+0x48],rdi
0x140d7f734: movabs r14,0x20c49ba5e353f7cf
0x140d7f73e: mov    QWORD PTR [rsp+0x88],rsi
0x140d7f746: mov    DWORD PTR [rsp+0x70],eax
0x140d7f74a: mov    QWORD PTR [rsp+0x78],r15
0x140d7f74f: test   rsi,rsi
0x140d7f752: jle    0x140d7fb2e
0x140d7f758: test   eax,eax
0x140d7f75a: jle    0x140d7fb2e
0x140d7f760: mov    esi,DWORD PTR [r8+0x240]
0x140d7f767: xor    edx,edx
0x140d7f769: mov    r11d,DWORD PTR [r8+0x258]
0x140d7f770: xor    ebp,ebp
0x140d7f772: cmp    BYTE PTR [r10+0x93],dl
0x140d7f779: je     0x140d7f791
0x140d7f77b: mov    eax,0x4e20
0x140d7f780: cmp    esi,eax
0x140d7f782: cmovge esi,eax
0x140d7f785: mov    eax,0x7530
0x140d7f78a: cmp    r11d,eax
0x140d7f78d: cmovge r11d,eax
0x140d7f791: movsxd rdi,DWORD PTR [r8+0x270]
0x140d7f798: cmp    BYTE PTR [r10+0x91],dl
0x140d7f79f: je     0x140d7f7a8
0x140d7f7a1: cmp    rdi,rcx
0x140d7f7a4: cmovl  rdi,rcx
0x140d7f7a8: movsxd r9,DWORD PTR [rbx+0x240]
0x140d7f7af: mov    r8d,0x3e8
0x140d7f7b5: cmp    esi,r9d
0x140d7f7b8: jl     0x140d7f7d8
0x140d7f7ba: mov    ecx,esi
0x140d7f7bc: mov    eax,0x66666667
0x140d7f7c1: sub    ecx,r9d
0x140d7f7c4: imul   ecx
0x140d7f7c6: sar    edx,0x2
0x140d7f7c9: mov    eax,edx
0x140d7f7cb: shr    eax,0x1f
0x140d7f7ce: add    edx,eax
0x140d7f7d0: movsxd rcx,edx
0x140d7f7d3: add    rcx,r8
0x140d7f7d6: jmp    0x140d7f821
0x140d7f7d8: test   r9d,r9d
0x140d7f7db: jle    0x140d7f839
0x140d7f7dd: mov    rax,r8
0x140d7f7e0: cmp    esi,0x1
0x140d7f7e3: jl     0x140d7f803
0x140d7f7e5: movsxd rax,esi
0x140d7f7e8: imul   rax,rax,0x3e8
0x140d7f7ef: cqo
0x140d7f7f1: idiv   r9
0x140d7f7f4: mov    r9d,0x1
0x140d7f7fa: test   rax,rax
0x140d7f7fd: cmovle rax,r9
0x140d7f801: jmp    0x140d7f809
0x140d7f803: mov    r9d,0x1
0x140d7f809: lea    rax,[rax+rax*4]
0x140d7f80d: cqo
0x140d7f80f: idiv   QWORD PTR [rsp+0x88]
0x140d7f817: test   rax,rax
0x140d7f81a: mov    rcx,rax
0x140d7f81d: cmovle rcx,r9
0x140d7f821: imul   rcx,r12
0x140d7f825: mov    rax,r14
0x140d7f828: imul   rcx
0x140d7f82b: sar    rdx,0x7
0x140d7f82f: mov    rax,rdx
0x140d7f832: shr    rax,0x3f
0x140d7f836: add    rdx,rax
0x140d7f839: movsxd r9,DWORD PTR [rbx+0x258]
0x140d7f840: xor    r15d,r15d
0x140d7f843: test   rdx,rdx
0x140d7f846: cmovns r15,rdx
0x140d7f84a: mov    QWORD PTR [rsp+0x78],r15
0x140d7f84f: cmp    r11d,r9d
0x140d7f852: jl     0x140d7f8e3
0x140d7f858: mov    ecx,r11d
0x140d7f85b: mov    eax,0x66666667
0x140d7f860: sub    ecx,r9d
0x140d7f863: xor    ebx,ebx
0x140d7f865: imul   ecx
0x140d7f867: sar    edx,0x2
0x140d7f86a: mov    eax,edx
0x140d7f86c: shr    eax,0x1f
0x140d7f86f: add    edx,eax
0x140d7f871: mov    rax,r14
0x140d7f874: movsxd rcx,edx
0x140d7f877: add    rcx,r8
0x140d7f87a: imul   rcx,r12
0x140d7f87e: imul   rcx
0x140d7f881: mov    rcx,QWORD PTR [r10+0x28]
0x140d7f885: sar    rdx,0x7
0x140d7f889: mov    rax,rdx
0x140d7f88c: shr    rax,0x3f
0x140d7f890: add    rdx,rax
0x140d7f893: cmovns rbx,rdx
0x140d7f897: test   rcx,rcx
0x140d7f89a: jle    0x140d7f8a3
0x140d7f89c: imul   r8,rcx,0x3e8
0x140d7f8a3: mov    ecx,r11d
0x140d7f8a6: mov    eax,0x66666667
0x140d7f8ab: sub    ecx,r9d
0x140d7f8ae: imul   ecx
0x140d7f8b0: sar    edx,0x2
0x140d7f8b3: mov    eax,edx
0x140d7f8b5: shr    eax,0x1f
0x140d7f8b8: add    edx,eax
0x140d7f8ba: mov    rax,r14
0x140d7f8bd: movsxd rcx,edx
0x140d7f8c0: mov    r14,rbx
0x140d7f8c3: add    rcx,r8
0x140d7f8c6: imul   rcx,r12
0x140d7f8ca: imul   rcx
0x140d7f8cd: mov    rbp,rdx
0x140d7f8d0: sar    rbp,0x7
0x140d7f8d4: mov    rax,rbp
0x140d7f8d7: shr    rax,0x3f
0x140d7f8db: add    rbp,rax
0x140d7f8de: jmp    0x140d7f9b8
0x140d7f8e3: test   r9d,r9d
0x140d7f8e6: jle    0x140d7f9b3
0x140d7f8ec: mov    ebp,0x1
0x140d7f8f1: cmp    r11d,ebp
0x140d7f8f4: jl     0x140d7f90f
0x140d7f8f6: movsxd rax,r11d
0x140d7f8f9: imul   rax,rax,0x3e8
0x140d7f900: cqo
0x140d7f902: idiv   r9
0x140d7f905: test   rax,rax
0x140d7f908: mov    r8,rax
0x140d7f90b: cmovle r8,rbp
0x140d7f90f: lea    rax,[r8+r8*4]
0x140d7f913: mov    r8,QWORD PTR [rsp+0x88]
0x140d7f91b: cqo
0x140d7f91d: idiv   r8
0x140d7f920: test   rax,rax
0x140d7f923: mov    rcx,rax
0x140d7f926: mov    rax,r14
0x140d7f929: cmovle rcx,rbp
0x140d7f92d: xor    ebx,ebx
0x140d7f92f: imul   rcx,r12
0x140d7f933: imul   rcx
0x140d7f936: sar    rdx,0x7
0x140d7f93a: mov    rax,rdx
0x140d7f93d: shr    rax,0x3f
0x140d7f941: add    rdx,rax
0x140d7f944: mov    rax,QWORD PTR [r10+0x28]
0x140d7f948: cmovns rbx,rdx
0x140d7f94c: mov    r14,rbx
0x140d7f94f: test   rax,rax
0x140d7f952: jle    0x140d7f95d
0x140d7f954: imul   rcx,rax,0x3e8
0x140d7f95b: jmp    0x140d7f960
0x140d7f95d: mov    rcx,rbp
0x140d7f960: cmp    r11d,0x1
0x140d7f964: jl     0x140d7f975
0x140d7f966: movsxd rax,r11d
0x140d7f969: imul   rax,rcx
0x140d7f96d: cqo
0x140d7f96f: idiv   r9
0x140d7f972: mov    rcx,rax
0x140d7f975: test   rcx,rcx
0x140d7f978: cmovle rcx,rbp
0x140d7f97c: lea    rax,[rcx+rcx*4]
0x140d7f980: cqo
0x140d7f982: idiv   r8
0x140d7f985: test   rax,rax
0x140d7f988: mov    rcx,rax
0x140d7f98b: movabs rax,0x20c49ba5e353f7cf
0x140d7f995: cmovle rcx,rbp
0x140d7f999: imul   rcx,r12
0x140d7f99d: imul   rcx
0x140d7f9a0: mov    rbp,rdx
0x140d7f9a3: sar    rbp,0x7
0x140d7f9a7: mov    rax,rbp
0x140d7f9aa: shr    rax,0x3f
0x140d7f9ae: add    rbp,rax
0x140d7f9b1: jmp    0x140d7f9b8
0x140d7f9b3: xor    ebx,ebx
0x140d7f9b5: xor    r14d,r14d
0x140d7f9b8: xor    r9d,r9d
0x140d7f9bb: test   rbp,rbp
0x140d7f9be: cmovns r9,rbp
0x140d7f9c2: mov    ebp,0x1
0x140d7f9c7: cmp    r13,r15
0x140d7f9ca: jl     0x140d7fa89
0x140d7f9d0: mov    r8,r13
0x140d7f9d3: movsxd rcx,esi
0x140d7f9d6: sub    r8,r15
0x140d7f9d9: movsxd rax,r11d
0x140d7f9dc: test   esi,esi
0x140d7f9de: mov    QWORD PTR [r10+0x60],r8
0x140d7f9e2: mov    QWORD PTR [r10+0xa0],rdi
0x140d7f9e9: cmovle rcx,rbp
0x140d7f9ed: imul   rax,rdi
0x140d7f9f1: cqo
0x140d7f9f3: idiv   rcx
0x140d7f9f6: mov    rcx,rax
0x140d7f9f9: mov    eax,0x5f5e100
0x140d7f9fe: cmp    rcx,rax
0x140d7fa01: cmovg  rcx,rax
0x140d7fa05: cmp    r8,rbx
0x140d7fa08: jl     0x140d7fa5c
0x140d7fa0a: sub    r8,rbx
0x140d7fa0d: movsxd rax,ecx
0x140d7fa10: mov    QWORD PTR [r10+0x60],r8
0x140d7fa14: mov    QWORD PTR [r10+0xb0],rax
0x140d7fa1b: cmp    r8,r9
0x140d7fa1e: jl     0x140d7fa33
0x140d7fa20: mov    QWORD PTR [r10+0xc0],0x64
0x140d7fa2b: sub    r8,r9
0x140d7fa2e: jmp    0x140d7fac3
0x140d7fa33: cmp    r9,rbp
0x140d7fa36: cmovl  r9,rbp
0x140d7fa3a: imul   rax,r8,0x64
0x140d7fa3e: cqo
0x140d7fa40: idiv   r9
0x140d7fa43: mov    QWORD PTR [r10+0xc0],rax
0x140d7fa4a: test   rax,rax
0x140d7fa4d: jg     0x140d7fab8
0x140d7fa4f: mov    QWORD PTR [r10+0xc0],0x0
0x140d7fa5a: jmp    0x140d7fab8
0x140d7fa5c: cmp    r14,rbp
0x140d7fa5f: cmovl  rbx,rbp
0x140d7fa63: imul   r8,rcx
0x140d7fa67: mov    rax,r8
0x140d7fa6a: cqo
0x140d7fa6c: idiv   rbx
0x140d7fa6f: mov    QWORD PTR [r10+0xb0],rax
0x140d7fa76: test   rax,rax
0x140d7fa79: jg     0x140d7fab8
0x140d7fa7b: test   rcx,rcx
0x140d7fa7e: jle    0x140d7fab8
0x140d7fa80: mov    QWORD PTR [r10+0xb0],rbp
0x140d7fa87: jmp    0x140d7fab8
0x140d7fa89: cmp    r15,0x1
0x140d7fa8d: mov    rcx,r15
0x140d7fa90: mov    rax,r13
0x140d7fa93: cmovl  rcx,rbp
0x140d7fa97: imul   rax,rdi
0x140d7fa9b: cqo
0x140d7fa9d: idiv   rcx
0x140d7faa0: mov    QWORD PTR [r10+0xa0],rax
0x140d7faa7: test   rax,rax
0x140d7faaa: jg     0x140d7fab8
0x140d7faac: test   rdi,rdi
0x140d7faaf: jle    0x140d7fab8
0x140d7fab1: mov    QWORD PTR [r10+0xa0],rbp
0x140d7fab8: mov    QWORD PTR [r10+0x10],0x0
0x140d7fac0: xor    r8d,r8d
0x140d7fac3: mov    QWORD PTR [r10+0x60],r8
0x140d7fac7: mov    r8,QWORD PTR [r10+0xc0]
0x140d7face: test   r8,r8
0x140d7fad1: jle    0x140d7fb1b
0x140d7fad3: mov    rcx,QWORD PTR [r10+0x38]
0x140d7fad7: test   rcx,rcx
0x140d7fada: jle    0x140d7fb1b
0x140d7fadc: movsxd rax,DWORD PTR [r10+0x94]
0x140d7fae3: mov    rdx,rax
0x140d7fae6: cmp    rax,rcx
0x140d7fae9: jge    0x140d7fb0c
0x140d7faeb: imul   rax,rdx,0x64
0x140d7faef: cqo
0x140d7faf1: idiv   rcx
0x140d7faf4: cmp    eax,0x1
0x140d7faf7: cmovl  eax,ebp
0x140d7fafa: mov    ecx,eax
0x140d7fafc: cmp    r8,rcx
0x140d7faff: jle    0x140d7fb08
0x140d7fb01: mov    QWORD PTR [r10+0xc0],rcx
0x140d7fb08: xor    eax,eax
0x140d7fb0a: jmp    0x140d7fb0e
0x140d7fb0c: sub    eax,ecx
0x140d7fb0e: mov    ecx,0x94
0x140d7fb13: mov    rdx,r10
0x140d7fb16: mov    DWORD PTR [rdx+rcx*1],eax
0x140d7fb19: jmp    0x140d7fb26
0x140d7fb1b: mov    DWORD PTR [r10+0x94],0x0
0x140d7fb26: mov    rsi,QWORD PTR [rsp+0x88]
0x140d7fb2e: cmp    QWORD PTR [r10+0xc0],0x64
0x140d7fb36: movabs rbp,0x29f16b11c6d1e109
0x140d7fb40: jge    0x140d80008
0x140d7fb46: mov    rax,QWORD PTR [r10+0x58]
0x140d7fb4a: lea    r14,[rsp+0x10]
0x140d7fb4f: sub    r14,r10
0x140d7fb52: mov    QWORD PTR [rsp+0x10],rax
0x140d7fb57: xor    r12d,r12d
0x140d7fb5a: mov    QWORD PTR [rsp+0x18],r13
0x140d7fb5f: lea    rdi,[r10+0x90]
0x140d7fb66: sub    r14,0xe8
0x140d7fb6d: mov    QWORD PTR [rsp],rdi
0x140d7fb71: lea    rcx,[r10+0xe8]
0x140d7fb78: nop    DWORD PTR [rax+rax*1+0x0]
0x140d7fb80: mov    rbx,QWORD PTR [rcx-0xe8]
0x140d7fb87: xor    r8d,r8d
0x140d7fb8a: mov    r9d,0x0
0x140d7fb90: movsxd rdx,DWORD PTR [rbx+0x248]
0x140d7fb97: movsxd rax,DWORD PTR [rbx+0x260]
0x140d7fb9e: test   edx,edx
0x140d7fba0: cmovns r8,rdx
0x140d7fba4: sub    rax,r8
0x140d7fba7: cmovns r9,rax
0x140d7fbab: cmp    r12d,0x1
0x140d7fbaf: jne    0x140d7fbf9
0x140d7fbb1: imul   r8,QWORD PTR [rsp+0x8]
0x140d7fbb7: imul   r9,QWORD PTR [rsp+0x8]
0x140d7fbbd: movabs rax,0x20c49ba5e353f7cf
0x140d7fbc7: imul   r8
0x140d7fbca: mov    r8,rdx
0x140d7fbcd: sar    r8,0x7
0x140d7fbd1: mov    rax,r8
0x140d7fbd4: shr    rax,0x3f
0x140d7fbd8: add    r8,rax
0x140d7fbdb: movabs rax,0x20c49ba5e353f7cf
0x140d7fbe5: imul   r9
0x140d7fbe8: mov    r9,rdx
0x140d7fbeb: sar    r9,0x7
0x140d7fbef: mov    rax,r9
0x140d7fbf2: shr    rax,0x3f
0x140d7fbf6: add    r9,rax
0x140d7fbf9: mov    r11,QWORD PTR [rcx-0xc8]
0x140d7fc00: test   r11,r11
0x140d7fc03: jle    0x140d7fc40
0x140d7fc05: mov    rdx,r11
0x140d7fc08: mov    rax,rbp
0x140d7fc0b: imul   rdx,r8
0x140d7fc0f: imul   r11,r9
0x140d7fc13: imul   rdx
0x140d7fc16: mov    r8,rdx
0x140d7fc19: sar    r8,0xd
0x140d7fc1d: mov    rax,r8
0x140d7fc20: shr    rax,0x3f
0x140d7fc24: add    r8,rax
0x140d7fc27: mov    rax,rbp
0x140d7fc2a: imul   r11
0x140d7fc2d: mov    r11,rdx
0x140d7fc30: sar    r11,0xd
0x140d7fc34: mov    rax,r11
0x140d7fc37: shr    rax,0x3f
0x140d7fc3b: add    r11,rax
0x140d7fc3e: jmp    0x140d7fc46
0x140d7fc40: xor    r8d,r8d
0x140d7fc43: xor    r11d,r11d
0x140d7fc46: cmp    r12d,0x1
0x140d7fc4a: jne    0x140d7fc5f
0x140d7fc4c: cmp    r15,r8
0x140d7fc4f: jg     0x140d7fc57
0x140d7fc51: cmp    r15,0xffffffffffffffff
0x140d7fc55: jne    0x140d7fc5f
0x140d7fc57: mov    r15,r8
0x140d7fc5a: mov    QWORD PTR [rsp+0x78],r8
0x140d7fc5f: cmp    BYTE PTR [rdi],0x0
0x140d7fc62: mov    eax,0xc350
0x140d7fc67: movsxd rbp,DWORD PTR [rbx+0x278]
0x140d7fc6e: je     0x140d7fc77
0x140d7fc70: cmp    rbp,rax
0x140d7fc73: cmovl  rbp,rax
0x140d7fc77: mov    r9,QWORD PTR [r14+rcx*1]
0x140d7fc7b: cmp    r9,r8
0x140d7fc7e: jl     0x140d7fd7b
0x140d7fc84: sub    r9,r8
0x140d7fc87: mov    QWORD PTR [rcx-0x20],rbp
0x140d7fc8b: mov    QWORD PTR [r14+rcx*1],r9
0x140d7fc8f: cmp    rbp,rax
0x140d7fc92: jge    0x140d7fdae
0x140d7fc98: movsxd r8,DWORD PTR [rbx+0x248]
0x140d7fc9f: movsxd rax,DWORD PTR [rbx+0x260]
0x140d7fca6: cmp    r8,0x1
0x140d7fcaa: mov    ebx,0x1
0x140d7fcaf: cmovl  r8,rbx
0x140d7fcb3: imul   rax,rbp
0x140d7fcb7: cqo
0x140d7fcb9: idiv   r8
0x140d7fcbc: mov    r8,rax
0x140d7fcbf: mov    eax,0x5f5e100
0x140d7fcc4: cmp    r8,rax
0x140d7fcc7: cmovg  r8,rax
0x140d7fccb: cmp    r9,r11
0x140d7fcce: jl     0x140d7fd54
0x140d7fcd4: sub    r9,r11
0x140d7fcd7: movsxd rax,r8d
0x140d7fcda: mov    QWORD PTR [rcx-0x10],rax
0x140d7fcde: cmp    r9,r11
0x140d7fce1: jl     0x140d7fd37
0x140d7fce3: sub    r9,r11
0x140d7fce6: mov    QWORD PTR [rcx],0x64
0x140d7fced: mov    QWORD PTR [r14+rcx*1],r9
0x140d7fcf1: cmp    r12d,ebx
0x140d7fcf4: jne    0x140d7ffdd
0x140d7fcfa: cmp    QWORD PTR [r10+0x10],0x0
0x140d7fcff: jne    0x140d7fdb8
0x140d7fd05: test   rsi,rsi
0x140d7fd08: jle    0x140d7fdb8
0x140d7fd0e: mov    eax,DWORD PTR [rsp+0x70]
0x140d7fd12: sub    eax,DWORD PTR [r10+0x38]
0x140d7fd16: mov    DWORD PTR [r10+0x94],eax
0x140d7fd1d: mov    QWORD PTR [r10+0x10],rsi
0x140d7fd21: jns    0x140d7fdb8
0x140d7fd27: mov    DWORD PTR [r10+0x94],0x0
0x140d7fd32: jmp    0x140d7fdb8
0x140d7fd37: cmp    r11,rbx
0x140d7fd3a: cmovl  r11,rbx
0x140d7fd3e: imul   rax,r9,0x64
0x140d7fd42: cqo
0x140d7fd44: idiv   r11
0x140d7fd47: mov    QWORD PTR [rcx],rax
0x140d7fd4a: test   rax,rax
0x140d7fd4d: jg     0x140d7fda6
0x140d7fd4f: mov    QWORD PTR [rcx],rbx
0x140d7fd52: jmp    0x140d7fda6
0x140d7fd54: cmp    r11,rbx
0x140d7fd57: cmovl  r11,rbx
0x140d7fd5b: imul   r9,r8
0x140d7fd5f: mov    rax,r9
0x140d7fd62: cqo
0x140d7fd64: idiv   r11
0x140d7fd67: mov    QWORD PTR [rcx-0x10],rax
0x140d7fd6b: test   rax,rax
0x140d7fd6e: jg     0x140d7fda6
0x140d7fd70: test   r8,r8
0x140d7fd73: jle    0x140d7fda6
0x140d7fd75: mov    QWORD PTR [rcx-0x10],rbx
0x140d7fd79: jmp    0x140d7fda6
0x140d7fd7b: cmp    r8,0x1
0x140d7fd7f: mov    ebx,0x1
0x140d7fd84: cmovl  r8,rbx
0x140d7fd88: imul   r9,rbp
0x140d7fd8c: mov    rax,r9
0x140d7fd8f: cqo
0x140d7fd91: idiv   r8
0x140d7fd94: mov    QWORD PTR [rcx-0x20],rax
0x140d7fd98: test   rax,rax
0x140d7fd9b: jg     0x140d7fda6
0x140d7fd9d: test   rbp,rbp
0x140d7fda0: jle    0x140d7fda6
0x140d7fda2: mov    QWORD PTR [rcx-0x20],rbx
0x140d7fda6: mov    QWORD PTR [r14+rcx*1],0x0
0x140d7fdae: cmp    r12d,0x1
0x140d7fdb2: jne    0x140d7ffdd
0x140d7fdb8: mov    rsi,QWORD PTR [rcx]
0x140d7fdbb: cmp    rsi,0x64
0x140d7fdbf: jge    0x140d7ffdd
0x140d7fdc5: mov    rdi,QWORD PTR [r10+0x20]
0x140d7fdc9: mov    r15,QWORD PTR [r10+0x28]
0x140d7fdcd: cmp    rdi,r15
0x140d7fdd0: jge    0x140d7ffd8
0x140d7fdd6: mov    r13,QWORD PTR [rcx-0xe8]
0x140d7fddd: xor    r8d,r8d
0x140d7fde0: movabs rax,0x20c49ba5e353f7cf
0x140d7fdea: movsxd rdx,DWORD PTR [r13+0x248]
0x140d7fdf1: movsxd r9,DWORD PTR [r13+0x260]
0x140d7fdf8: test   edx,edx
0x140d7fdfa: cmovns r8,rdx
0x140d7fdfe: sub    r9,r8
0x140d7fe01: imul   r8,QWORD PTR [rsp+0x8]
0x140d7fe07: imul   r8
0x140d7fe0a: xor    r8d,r8d
0x140d7fe0d: mov    r11,rdx
0x140d7fe10: sar    r11,0x7
0x140d7fe14: mov    rax,r11
0x140d7fe17: shr    rax,0x3f
0x140d7fe1b: add    r11,rax
0x140d7fe1e: movabs rax,0x20c49ba5e353f7cf
0x140d7fe28: test   r9,r9
0x140d7fe2b: cmovns r8,r9
0x140d7fe2f: imul   r8,QWORD PTR [rsp+0x8]
0x140d7fe35: imul   r8
0x140d7fe38: mov    r9,rdx
0x140d7fe3b: sar    r9,0x7
0x140d7fe3f: mov    rax,r9
0x140d7fe42: shr    rax,0x3f
0x140d7fe46: add    r9,rax
0x140d7fe49: cmp    QWORD PTR [rcx-0xc8],0x0
0x140d7fe51: jle    0x140d7fe9b
0x140d7fe53: mov    r8,rdi
0x140d7fe56: imul   r8,r11
0x140d7fe5a: movabs r11,0x29f16b11c6d1e109
0x140d7fe64: mov    rax,r11
0x140d7fe67: imul   r8
0x140d7fe6a: mov    r8,rdi
0x140d7fe6d: imul   r8,r9
0x140d7fe71: mov    rbx,rdx
0x140d7fe74: sar    rbx,0xd
0x140d7fe78: mov    rax,rbx
0x140d7fe7b: shr    rax,0x3f
0x140d7fe7f: add    rbx,rax
0x140d7fe82: mov    rax,r11
0x140d7fe85: imul   r8
0x140d7fe88: mov    r11,rdx
0x140d7fe8b: sar    r11,0xd
0x140d7fe8f: mov    rax,r11
0x140d7fe92: shr    rax,0x3f
0x140d7fe96: add    r11,rax
0x140d7fe99: jmp    0x140d7fea0
0x140d7fe9b: xor    ebx,ebx
0x140d7fe9d: xor    r11d,r11d
0x140d7fea0: mov    rax,QWORD PTR [rsp+0x78]
0x140d7fea5: cmp    rax,rbx
0x140d7fea8: jg     0x140d7feb0
0x140d7feaa: cmp    rax,0xffffffffffffffff
0x140d7feae: jne    0x140d7feb5
0x140d7feb0: mov    QWORD PTR [rsp+0x78],rbx
0x140d7feb5: movsxd rax,DWORD PTR [r13+0x278]
0x140d7febc: imul   rax,rdi
0x140d7fec0: cqo
0x140d7fec2: idiv   r15
0x140d7fec5: mov    rdi,rax
0x140d7fec8: mov    rax,QWORD PTR [rsp]
0x140d7fecc: cmp    BYTE PTR [rax],0x0
0x140d7fecf: mov    eax,0xc350
0x140d7fed4: je     0x140d7fedd
0x140d7fed6: cmp    rdi,rax
0x140d7fed9: cmovl  rdi,rax
0x140d7fedd: mov    r9,QWORD PTR [rsp+0x80]
0x140d7fee5: cmp    r9,rbx
0x140d7fee8: jl     0x140d800fe
0x140d7feee: sub    r9,rbx
0x140d7fef1: mov    QWORD PTR [r14+rcx*1],r9
0x140d7fef5: cmp    rdi,QWORD PTR [rcx-0x20]
0x140d7fef9: jle    0x140d7feff
0x140d7fefb: mov    QWORD PTR [rcx-0x20],rdi
0x140d7feff: cmp    rbp,rax
0x140d7ff02: jge    0x140d7ffd0
0x140d7ff08: movsxd r8,DWORD PTR [r13+0x248]
0x140d7ff0f: mov    ebp,0x1
0x140d7ff14: movsxd rax,DWORD PTR [r13+0x260]
0x140d7ff1b: cmp    r8,0x1
0x140d7ff1f: cmovl  r8,rbp
0x140d7ff23: imul   rax,rdi
0x140d7ff27: cqo
0x140d7ff29: idiv   r8
0x140d7ff2c: imul   rax,QWORD PTR [r10+0x20]
0x140d7ff31: cqo
0x140d7ff33: idiv   QWORD PTR [r10+0x28]
0x140d7ff37: mov    r8,rax
0x140d7ff3a: mov    eax,0x5f5e100
0x140d7ff3f: cmp    r8,rax
0x140d7ff42: cmovg  r8,rax
0x140d7ff46: cmp    r9,r11
0x140d7ff49: jl     0x140d800cc
0x140d7ff4f: sub    r9,r11
0x140d7ff52: cmp    r8,QWORD PTR [rcx-0x10]
0x140d7ff56: jle    0x140d7ff5f
0x140d7ff58: movsxd rax,r8d
0x140d7ff5b: mov    QWORD PTR [rcx-0x10],rax
0x140d7ff5f: imul   rax,QWORD PTR [r10+0x20],0x64
0x140d7ff64: cqo
0x140d7ff66: idiv   QWORD PTR [r10+0x28]
0x140d7ff6a: mov    edx,0x63
0x140d7ff6f: cmp    rax,0x64
0x140d7ff73: cmovge rax,rdx
0x140d7ff77: cmp    r9,r11
0x140d7ff7a: jl     0x140d7ffa5
0x140d7ff7c: sub    r9,r11
0x140d7ff7f: mov    QWORD PTR [r14+rcx*1],r9
0x140d7ff83: cmp    rax,rsi
0x140d7ff86: jle    0x140d7ff8e
0x140d7ff88: mov    rsi,rax
0x140d7ff8b: mov    QWORD PTR [rcx],rax
0x140d7ff8e: mov    r15,QWORD PTR [rsp+0x78]
0x140d7ff93: mov    r13,QWORD PTR [rsp+0x80]
0x140d7ff9b: test   rsi,rsi
0x140d7ff9e: jg     0x140d7ffdd
0x140d7ffa0: mov    QWORD PTR [rcx],rbp
0x140d7ffa3: jmp    0x140d7ffdd
0x140d7ffa5: cmp    r11,rbp
0x140d7ffa8: cmovl  r11,rbp
0x140d7ffac: imul   rax,r9
0x140d7ffb0: cqo
0x140d7ffb2: idiv   r11
0x140d7ffb5: cmp    rax,rsi
0x140d7ffb8: jle    0x140d7ffc0
0x140d7ffba: mov    rsi,rax
0x140d7ffbd: mov    QWORD PTR [rcx],rax
0x140d7ffc0: test   rsi,rsi
0x140d7ffc3: jg     0x140d7ffc8
0x140d7ffc5: mov    QWORD PTR [rcx],rbp
0x140d7ffc8: mov    QWORD PTR [r14+rcx*1],0x0
0x140d7ffd0: mov    r13,QWORD PTR [rsp+0x80]
0x140d7ffd8: mov    r15,QWORD PTR [rsp+0x78]
0x140d7ffdd: inc    QWORD PTR [rsp]
0x140d7ffe1: inc    r12d
0x140d7ffe4: mov    rdi,QWORD PTR [rsp]
0x140d7ffe8: add    rcx,0x8
0x140d7ffec: mov    rsi,QWORD PTR [rsp+0x88]
0x140d7fff4: movabs rbp,0x29f16b11c6d1e109
0x140d7fffe: cmp    r12d,0x2
0x140d80002: jl     0x140d7fb80
0x140d80008: mov    r14,QWORD PTR [rsp+0x30]
0x140d8000d: mov    r12,QWORD PTR [rsp+0x40]
0x140d80012: mov    rdi,QWORD PTR [rsp+0x48]
0x140d80017: mov    rsi,QWORD PTR [rsp+0x50]
0x140d8001c: mov    QWORD PTR [r10+0x60],r13
0x140d80020: test   r15,r15
0x140d80023: jle    0x140d80054
0x140d80025: movabs rax,0x6666666666666667
0x140d8002f: imul   r15
0x140d80032: sar    rdx,0x2
0x140d80036: mov    rax,rdx
0x140d80039: shr    rax,0x3f
0x140d8003d: add    rdx,rax
0x140d80040: sub    r13,rdx
0x140d80043: mov    QWORD PTR [r10+0x60],r13
0x140d80047: jns    0x140d80054
0x140d80049: mov    QWORD PTR [r10+0x60],0x0
0x140d80051: xor    r13d,r13d
0x140d80054: mov    rax,QWORD PTR [r10+0xa0]
0x140d8005b: mov    rcx,QWORD PTR [r10+0xd0]
0x140d80062: mov    r15,QWORD PTR [rsp+0x28]
0x140d80067: cmp    rax,rcx
0x140d8006a: cmovge rcx,rax
0x140d8006e: cmp    QWORD PTR [r10+0xc0],0x64
0x140d80076: jge    0x140d80141
0x140d8007c: cmp    QWORD PTR [r10+0xf0],0x64
0x140d80084: jge    0x140d80141
0x140d8008a: cmp    rcx,0xc350
0x140d80091: jge    0x140d80141
0x140d80097: test   rcx,rcx
0x140d8009a: jle    0x140d80139
0x140d800a0: imul   rcx,r13
0x140d800a4: mov    r13,QWORD PTR [rsp+0x38]
0x140d800a9: mov    rax,rbp
0x140d800ac: mov    rbp,QWORD PTR [rsp+0x58]
0x140d800b1: imul   rcx
0x140d800b4: sar    rdx,0xd
0x140d800b8: mov    rax,rdx
0x140d800bb: shr    rax,0x3f
0x140d800bf: add    rdx,rax
0x140d800c2: mov    QWORD PTR [r10+0x60],rdx
0x140d800c6: add    rsp,0x60
0x140d800ca: pop    rbx
0x140d800cb: ret
0x140d800cc: cmp    r11,rbp
0x140d800cf: cmovl  r11,rbp
0x140d800d3: imul   r9,r8
0x140d800d7: mov    rax,r9
0x140d800da: cqo
0x140d800dc: idiv   r11
0x140d800df: mov    QWORD PTR [rcx-0x10],rax
0x140d800e3: test   rax,rax
0x140d800e6: jg     0x140d7ffc8
0x140d800ec: test   r8,r8
0x140d800ef: jle    0x140d7ffc8
0x140d800f5: mov    QWORD PTR [rcx-0x10],rbp
0x140d800f9: jmp    0x140d7ffc8
0x140d800fe: cmp    rbx,0x1
0x140d80102: mov    ebp,0x1
0x140d80107: mov    rax,rdi
0x140d8010a: mov    r13,r9
0x140d8010d: cmovl  rbx,rbp
0x140d80111: imul   rax,r13
0x140d80115: cqo
0x140d80117: idiv   rbx
0x140d8011a: mov    QWORD PTR [rcx-0x20],rax
0x140d8011e: test   rax,rax
0x140d80121: jg     0x140d8012c
0x140d80123: test   rdi,rdi
0x140d80126: jle    0x140d8012c
0x140d80128: mov    QWORD PTR [rcx-0x20],rbp
0x140d8012c: mov    QWORD PTR [r14+rcx*1],0x0
0x140d80134: jmp    0x140d7ffd8
0x140d80139: mov    QWORD PTR [r10+0x60],0x0
0x140d80141: mov    rbp,QWORD PTR [rsp+0x58]
0x140d80146: mov    r13,QWORD PTR [rsp+0x38]
0x140d8014b: add    rsp,0x60
0x140d8014f: pop    rbx
0x140d80150: ret
