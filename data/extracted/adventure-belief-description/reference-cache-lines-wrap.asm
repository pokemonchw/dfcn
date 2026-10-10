# reference PE:6a70a6d9:02711000; cache-lines-wrap; RVA 0x8e7440..0x8e7716
0x008e7440: test   r8d,r8d
0x008e7443: jle    0x1408e7715
0x008e7449: mov    QWORD PTR [rsp+0x18],rbx
0x008e744e: push   rbp
0x008e744f: push   rsi
0x008e7450: push   rdi
0x008e7451: push   r12
0x008e7453: push   r13
0x008e7455: push   r14
0x008e7457: push   r15
0x008e7459: mov    rbp,rsp
0x008e745c: sub    rsp,0x60
0x008e7460: mov    rax,QWORD PTR [rip+0xfb4bd9]        # 0x14189c040
0x008e7467: xor    rax,rsp
0x008e746a: mov    QWORD PTR [rbp-0x10],rax
0x008e746e: mov    DWORD PTR [rbp-0x3c],r8d
0x008e7472: mov    r13,rdx
0x008e7475: mov    r15,rcx
0x008e7478: xor    bl,bl
0x008e747a: xorps  xmm0,xmm0
0x008e747d: movups XMMWORD PTR [rbp-0x30],xmm0
0x008e7481: xor    esi,esi
0x008e7483: mov    QWORD PTR [rbp-0x20],rsi
0x008e7487: mov    QWORD PTR [rbp-0x18],0xf
0x008e748f: mov    BYTE PTR [rbp-0x30],bl
0x008e7492: xor    r8d,r8d
0x008e7495: mov    DWORD PTR [rbp-0x40],r8d
0x008e7499: mov    rdx,QWORD PTR [rdx]
0x008e749c: mov    rax,QWORD PTR [r13+0x8]
0x008e74a0: sub    rax,rdx
0x008e74a3: sar    rax,0x3
0x008e74a7: test   rax,rax
0x008e74aa: je     0x1408e76e9
0x008e74b0: xor    r12d,r12d
0x008e74b3: xor    r14d,r14d
0x008e74b6: xor    edi,edi
0x008e74b8: mov    rax,QWORD PTR [rdx+r12*1]
0x008e74bc: cmp    QWORD PTR [rax+0x10],rdi
0x008e74c0: jbe    0x1408e7655
0x008e74c6: test   bl,bl
0x008e74c8: je     0x1408e74e4
0x008e74ca: mov    rax,QWORD PTR [rdx+r12*1]
0x008e74ce: cmp    QWORD PTR [rax+0x18],0xf
0x008e74d3: jbe    0x1408e74d8
0x008e74d5: mov    rax,QWORD PTR [rax]
0x008e74d8: cmp    BYTE PTR [rdi+rax*1],0x20
0x008e74dc: je     0x1408e7636
0x008e74e2: xor    bl,bl
0x008e74e4: mov    rdx,QWORD PTR [rdx+r12*1]
0x008e74e8: cmp    QWORD PTR [rdx+0x18],0xf
0x008e74ed: jbe    0x1408e74f2
0x008e74ef: mov    rdx,QWORD PTR [rdx]
0x008e74f2: movzx  edx,BYTE PTR [rdi+rdx*1]
0x008e74f6: lea    rcx,[rbp-0x30]
0x008e74fa: call   0x1400b9b80
0x008e74ff: movsxd rax,DWORD PTR [rbp-0x3c]
0x008e7503: mov    rsi,QWORD PTR [rbp-0x20]
0x008e7507: cmp    rsi,rax
0x008e750a: jbe    0x1408e7636
0x008e7510: mov    r10d,r14d
0x008e7513: xor    edx,edx
0x008e7515: xor    r8d,r8d
0x008e7518: mov    rax,QWORD PTR [r13+0x0]
0x008e751c: mov    rcx,QWORD PTR [r12+rax*1]
0x008e7520: mov    r9,QWORD PTR [rcx+0x18]
0x008e7524: nop    DWORD PTR [rax+0x0]
0x008e7528: nop    DWORD PTR [rax+rax*1+0x0]
0x008e7530: dec    r14d
0x008e7533: dec    rdi
0x008e7536: inc    edx
0x008e7538: inc    r8
0x008e753b: mov    rax,rcx
0x008e753e: cmp    r9,0xf
0x008e7542: jbe    0x1408e7547
0x008e7544: mov    rax,QWORD PTR [rcx]
0x008e7547: cmp    BYTE PTR [rdi+rax*1],0x20
0x008e754b: je     0x1408e7552
0x008e754d: test   rdi,rdi
0x008e7550: jg     0x1408e7530
0x008e7552: movsxd rax,edx
0x008e7555: cmp    rax,rsi
0x008e7558: jne    0x1408e7578
0x008e755a: lea    eax,[r10-0x1]
0x008e755e: movsxd rdx,eax
0x008e7561: mov    r9d,0x1
0x008e7567: lea    r8,[rip+0xd011ce]        # 0x1415e873c ; literal=" "
0x008e756e: call   0x1404f0930
0x008e7573: jmp    0x1408e7619
0x008e7578: mov    rdx,rsi
0x008e757b: sub    rdx,r8
0x008e757e: cmp    rdx,rsi
0x008e7581: ja     0x1408e759b
0x008e7583: mov    QWORD PTR [rbp-0x20],rdx
0x008e7587: lea    rax,[rbp-0x30]
0x008e758b: cmp    QWORD PTR [rbp-0x18],0xf
0x008e7590: cmova  rax,QWORD PTR [rbp-0x30]
0x008e7595: mov    BYTE PTR [rax+rdx*1],0x0
0x008e7599: jmp    0x1408e75aa
0x008e759b: sub    rdx,rsi
0x008e759e: xor    r8d,r8d
0x008e75a1: lea    rcx,[rbp-0x30]
0x008e75a5: call   0x1400e12b0
0x008e75aa: mov    ecx,0x20
0x008e75af: call   0x141539690
0x008e75b4: mov    rbx,rax
0x008e75b7: xorps  xmm0,xmm0
0x008e75ba: movups XMMWORD PTR [rax],xmm0
0x008e75bd: mov    QWORD PTR [rax+0x10],0x0
0x008e75c5: mov    QWORD PTR [rax+0x18],0xf
0x008e75cd: mov    BYTE PTR [rax],0x0
0x008e75d0: mov    QWORD PTR [rbp-0x38],rax
0x008e75d4: lea    rax,[rbp-0x30]
0x008e75d8: cmp    rbx,rax
0x008e75db: je     0x1408e75f7
0x008e75dd: lea    rdx,[rbp-0x30]
0x008e75e1: cmp    QWORD PTR [rbp-0x18],0xf
0x008e75e6: cmova  rdx,QWORD PTR [rbp-0x30]
0x008e75eb: mov    r8,QWORD PTR [rbp-0x20]
0x008e75ef: mov    rcx,rbx
0x008e75f2: call   0x14006f8d0
0x008e75f7: mov    rdx,QWORD PTR [r15+0x8]
0x008e75fb: cmp    rdx,QWORD PTR [r15+0x10]
0x008e75ff: je     0x1408e760b
0x008e7601: mov    QWORD PTR [rdx],rbx
0x008e7604: add    QWORD PTR [r15+0x8],0x8
0x008e7609: jmp    0x1408e7617
0x008e760b: lea    r8,[rbp-0x38]
0x008e760f: mov    rcx,r15
0x008e7612: call   0x1400bad30
0x008e7617: mov    bl,0x1
0x008e7619: mov    QWORD PTR [rbp-0x20],0x0
0x008e7621: lea    rax,[rbp-0x30]
0x008e7625: cmp    QWORD PTR [rbp-0x18],0xf
0x008e762a: cmova  rax,QWORD PTR [rbp-0x30]
0x008e762f: mov    BYTE PTR [rax],0x0
0x008e7632: mov    rsi,QWORD PTR [rbp-0x20]
0x008e7636: inc    r14d
0x008e7639: inc    rdi
0x008e763c: mov    rdx,QWORD PTR [r13+0x0]
0x008e7640: mov    rcx,QWORD PTR [rdx+r12*1]
0x008e7644: movsxd rax,r14d
0x008e7647: cmp    rax,QWORD PTR [rcx+0x10]
0x008e764b: jb     0x1408e74c6
0x008e7651: mov    r8d,DWORD PTR [rbp-0x40]
0x008e7655: inc    r8d
0x008e7658: mov    DWORD PTR [rbp-0x40],r8d
0x008e765c: add    r12,0x8
0x008e7660: mov    rcx,QWORD PTR [r13+0x8]
0x008e7664: sub    rcx,rdx
0x008e7667: sar    rcx,0x3
0x008e766b: movsxd rax,r8d
0x008e766e: cmp    rax,rcx
0x008e7671: jb     0x1408e74b3
0x008e7677: test   rsi,rsi
0x008e767a: je     0x1408e76e9
0x008e767c: mov    ecx,0x20
0x008e7681: call   0x141539690
0x008e7686: mov    rbx,rax
0x008e7689: xorps  xmm0,xmm0
0x008e768c: movups XMMWORD PTR [rax],xmm0
0x008e768f: mov    QWORD PTR [rax+0x10],0x0
0x008e7697: mov    QWORD PTR [rax+0x18],0xf
0x008e769f: mov    BYTE PTR [rax],0x0
0x008e76a2: mov    QWORD PTR [rbp-0x38],rax
0x008e76a6: lea    rax,[rbp-0x30]
0x008e76aa: cmp    rbx,rax
0x008e76ad: je     0x1408e76c8
0x008e76af: lea    rdx,[rbp-0x30]
0x008e76b3: cmp    QWORD PTR [rbp-0x18],0xf
0x008e76b8: cmova  rdx,QWORD PTR [rbp-0x30]
0x008e76bd: mov    r8,rsi
0x008e76c0: mov    rcx,rbx
0x008e76c3: call   0x14006f8d0
0x008e76c8: mov    rdx,QWORD PTR [r15+0x8]
0x008e76cc: cmp    rdx,QWORD PTR [r15+0x10]
0x008e76d0: je     0x1408e76dc
0x008e76d2: mov    QWORD PTR [rdx],rbx
0x008e76d5: add    QWORD PTR [r15+0x8],0x8
0x008e76da: jmp    0x1408e76e9
0x008e76dc: lea    r8,[rbp-0x38]
0x008e76e0: mov    rcx,r15
0x008e76e3: call   0x1400bad30
0x008e76e8: nop
0x008e76e9: lea    rcx,[rbp-0x30]
0x008e76ed: call   0x14006f850
0x008e76f2: mov    rcx,QWORD PTR [rbp-0x10]
0x008e76f6: xor    rcx,rsp
0x008e76f9: call   0x141539660
0x008e76fe: mov    rbx,QWORD PTR [rsp+0xb0]
0x008e7706: add    rsp,0x60
0x008e770a: pop    r15
0x008e770c: pop    r14
0x008e770e: pop    r13
0x008e7710: pop    r12
0x008e7712: pop    rdi
0x008e7713: pop    rsi
0x008e7714: pop    rbp
0x008e7715: ret
