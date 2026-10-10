# classic PE:6a70b91c:0270a000; reaction-class-token-space; RVA 0x722450..0x722529
0x00722450: mov    QWORD PTR [rsp+0x20],rbp
0x00722455: push   rsi
0x00722456: push   rdi
0x00722457: push   r12
0x00722459: sub    rsp,0x30
0x0072245d: mov    rbp,QWORD PTR [rdx+0x10]
0x00722461: mov    rdi,rcx
0x00722464: xor    ecx,ecx
0x00722466: movabs rax,0x7fffffffffffffff
0x00722470: movzx  r12d,r8b
0x00722474: mov    rsi,rdx
0x00722477: cmp    rbp,rax
0x0072247a: je     0x140722523
0x00722480: cmp    QWORD PTR [rdx+0x18],0xf
0x00722485: mov    QWORD PTR [rsp+0x50],rbx
0x0072248a: mov    QWORD PTR [rsp+0x58],r14
0x0072248f: mov    QWORD PTR [rsp+0x60],r15
0x00722494: jbe    0x140722499
0x00722496: mov    rsi,QWORD PTR [rdx]
0x00722499: xorps  xmm0,xmm0
0x0072249c: lea    r15,[rbp+0x1]
0x007224a0: movups XMMWORD PTR [rdi],xmm0
0x007224a3: mov    ebx,0xf
0x007224a8: mov    QWORD PTR [rdi+0x10],rcx
0x007224ac: mov    QWORD PTR [rdi+0x18],rcx
0x007224b0: mov    r14,rdi
0x007224b3: cmp    r15,rbx
0x007224b6: jbe    0x1407224e4
0x007224b8: mov    rbx,r15
0x007224bb: or     rbx,0xf
0x007224bf: cmp    rbx,rax
0x007224c2: jbe    0x1407224c9
0x007224c4: mov    rbx,rax
0x007224c7: jmp    0x1407224d5
0x007224c9: mov    eax,0x16
0x007224ce: cmp    rbx,rax
0x007224d1: cmovb  rbx,rax
0x007224d5: lea    rcx,[rbx+0x1]
0x007224d9: call   0x140070760
0x007224de: mov    r14,rax
0x007224e1: mov    QWORD PTR [rdi],rax
0x007224e4: mov    r8,rbp
0x007224e7: mov    QWORD PTR [rdi+0x10],r15
0x007224eb: mov    rdx,rsi
0x007224ee: mov    QWORD PTR [rdi+0x18],rbx
0x007224f2: mov    rcx,r14
0x007224f5: call   0x1415359e8
0x007224fa: mov    rbx,QWORD PTR [rsp+0x50]
0x007224ff: mov    rax,rdi
0x00722502: mov    BYTE PTR [r14+rbp*1],r12b
0x00722506: mov    rbp,QWORD PTR [rsp+0x68]
0x0072250b: mov    BYTE PTR [r14+r15*1],0x0
0x00722510: mov    r15,QWORD PTR [rsp+0x60]
0x00722515: mov    r14,QWORD PTR [rsp+0x58]
0x0072251a: add    rsp,0x30
0x0072251e: pop    r12
0x00722520: pop    rdi
0x00722521: pop    rsi
0x00722522: ret
0x00722523: call   0x140065820
0x00722528: int3
