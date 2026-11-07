14091e6a0: mov    DWORD PTR [rsp+0x10],edx
14091e6a4: mov    QWORD PTR [rsp+0x8],rcx
14091e6a9: push   rbx
14091e6aa: push   rbp
14091e6ab: push   rdi
14091e6ac: push   r13
14091e6ae: push   r15
14091e6b0: sub    rsp,0x30
14091e6b4: mov    ebx,edx
14091e6b6: mov    rbp,rcx
14091e6b9: lea    rdx,[rcx+0x1028]
14091e6c0: xor    edi,edi
14091e6c2: mov    ecx,ebx
14091e6c4: mov    DWORD PTR [r8],edi
14091e6c7: mov    r15,r8
14091e6ca: call   0x1400b9dc0
14091e6cf: mov    r13,rax
14091e6d2: test   rax,rax
14091e6d5: je     0x14091e9bb
14091e6db: mov    rax,QWORD PTR [rax+0x18]
14091e6df: sub    rax,QWORD PTR [r13+0x10]
14091e6e3: sar    rax,0x2
14091e6e7: sub    eax,0x1
14091e6ea: mov    QWORD PTR [rsp+0x28],r12
14091e6ef: movsxd r12,eax
14091e6f2: js     0x14091e9a8
14091e6f8: mov    QWORD PTR [rsp+0x70],rsi
14091e6fd: mov    QWORD PTR [rsp+0x20],r14
14091e702: nop    DWORD PTR [rax+0x0]
14091e706: data16 nop WORD PTR [rax+rax*1+0x0]
14091e710: mov    rdx,QWORD PTR [r13+0x10]
14091e714: lea    rcx,[rip+0x1bdb59d]        # 0x1424f9cb8
14091e71b: mov    edx,DWORD PTR [rdx+r12*4]
14091e71f: call   0x14007da30
14091e724: mov    rsi,rax
14091e727: test   rax,rax
14091e72a: je     0x14091e994
14091e730: mov    rax,QWORD PTR [rax]
14091e733: mov    r8d,ebx
14091e736: mov    edx,DWORD PTR [rbp+0x4]
14091e739: mov    rcx,rsi
14091e73c: call   QWORD PTR [rax+0x18]
14091e73f: mov    ebx,eax
14091e741: mov    rcx,rsi
14091e744: mov    rax,QWORD PTR [rsi]
14091e747: call   QWORD PTR [rax]
14091e749: cmp    ax,0xa
14091e74d: jne    0x14091e807
14091e753: cmp    WORD PTR [rsi+0x28],0x10
14091e758: jne    0x14091e807
14091e75e: mov    eax,DWORD PTR [rip+0x1a55f90]        # 0x1423746f4
14091e764: sub    eax,DWORD PTR [rsi+0x8]
14091e767: imul   r14d,eax,0x62700
14091e76e: sub    r14d,DWORD PTR [rsi+0xc]
14091e772: add    r14d,DWORD PTR [rip+0x1a6984b]        # 0x142387fc4
14091e779: cmp    r14d,0x24ea00
14091e780: jge    0x14091e807
14091e786: mov    ecx,DWORD PTR [rsi+0x20]
14091e789: lea    rdx,[rip+0x1bdb810]        # 0x1424f9fa0
14091e790: mov    ebp,0x1
14091e795: call   0x1400b9dc0
14091e79a: test   rax,rax
14091e79d: je     0x14091e7ab
14091e79f: mov    rax,QWORD PTR [rax+0x8]
14091e7a3: mov    ecx,DWORD PTR [rax+0x24]
14091e7a6: test   ecx,ecx
14091e7a8: cmovg  ebp,ecx
14091e7ab: mov    eax,ebp
14091e7ad: lea    ecx,[r14-0x1ec300]
14091e7b4: cdq
14091e7b5: and    edx,0x3
14091e7b8: lea    r8d,[rdx+rax*1]
14091e7bc: sar    r8d,0x2
14091e7c0: cmp    ecx,0x62700
14091e7c6: lea    ecx,[r14-0x189c00]
14091e7cd: cmovae r8d,ebp
14091e7d1: mov    eax,r8d
14091e7d4: cdq
14091e7d5: sub    eax,edx
14091e7d7: sar    eax,1
14091e7d9: cmp    ecx,0x62700
14091e7df: mov    edx,eax
14091e7e1: lea    eax,[r14-0x127500]
14091e7e8: cmovae edx,r8d
14091e7ec: cmp    eax,0x62700
14091e7f1: jae    0x14091e804
14091e7f3: lea    ecx,[rdx+rdx*1]
14091e7f6: mov    eax,0x55555556
14091e7fb: imul   ecx
14091e7fd: mov    eax,edx
14091e7ff: shr    eax,0x1f
14091e802: add    edx,eax
14091e804: add    DWORD PTR [r15],edx
14091e807: mov    rax,QWORD PTR [rsi]
14091e80a: mov    rcx,rsi
14091e80d: call   QWORD PTR [rax]
14091e80f: cmp    ax,0x9
14091e813: jne    0x14091e8cd
14091e819: cmp    WORD PTR [rsi+0x28],0x10
14091e81e: jne    0x14091e8cd
14091e824: mov    eax,DWORD PTR [rip+0x1a55eca]        # 0x1423746f4
14091e82a: sub    eax,DWORD PTR [rsi+0x8]
14091e82d: imul   r14d,eax,0x62700
14091e834: sub    r14d,DWORD PTR [rsi+0xc]
14091e838: add    r14d,DWORD PTR [rip+0x1a69785]        # 0x142387fc4
14091e83f: cmp    r14d,0x24ea00
14091e846: jge    0x14091e8cd
14091e84c: mov    ecx,DWORD PTR [rsi+0x20]
14091e84f: lea    rdx,[rip+0x1bdb74a]        # 0x1424f9fa0
14091e856: mov    ebp,0x1
14091e85b: call   0x1400b9dc0
14091e860: test   rax,rax
14091e863: je     0x14091e871
14091e865: mov    rax,QWORD PTR [rax+0x8]
14091e869: mov    ecx,DWORD PTR [rax+0x24]
14091e86c: test   ecx,ecx
14091e86e: cmovs  ebp,ecx
14091e871: mov    eax,ebp
14091e873: lea    ecx,[r14-0x1ec300]
14091e87a: cdq
14091e87b: and    edx,0x3
14091e87e: lea    r8d,[rdx+rax*1]
14091e882: sar    r8d,0x2
14091e886: cmp    ecx,0x62700
14091e88c: lea    ecx,[r14-0x189c00]
14091e893: cmovae r8d,ebp
14091e897: mov    eax,r8d
14091e89a: cdq
14091e89b: sub    eax,edx
14091e89d: sar    eax,1
14091e89f: cmp    ecx,0x62700
14091e8a5: mov    edx,eax
14091e8a7: lea    eax,[r14-0x127500]
14091e8ae: cmovae edx,r8d
14091e8b2: cmp    eax,0x62700
14091e8b7: jae    0x14091e8ca
14091e8b9: lea    ecx,[rdx+rdx*1]
14091e8bc: mov    eax,0x55555556
14091e8c1: imul   ecx
14091e8c3: mov    eax,edx
14091e8c5: shr    eax,0x1f
14091e8c8: add    edx,eax
14091e8ca: add    DWORD PTR [r15],edx
14091e8cd: test   ebx,ebx
14091e8cf: je     0x14091e98b
14091e8d5: mov    eax,DWORD PTR [rip+0x1a55e19]        # 0x1423746f4
14091e8db: sub    eax,DWORD PTR [rsi+0x8]
14091e8de: imul   edx,eax,0x62700
14091e8e4: sub    edx,DWORD PTR [rsi+0xc]
14091e8e7: add    edx,DWORD PTR [rip+0x1a696d7]        # 0x142387fc4
14091e8ed: lea    eax,[rdx-0x375f00]
14091e8f3: cmp    eax,0x62700
14091e8f8: jae    0x14091e902
14091e8fa: sar    ebx,0x3
14091e8fd: jmp    0x14091e989
14091e902: lea    eax,[rdx-0x313800]
14091e908: cmp    eax,0x62700
14091e90d: jae    0x14091e914
14091e90f: sar    ebx,0x2
14091e912: jmp    0x14091e989
14091e914: lea    eax,[rdx-0x2b1100]
14091e91a: cmp    eax,0x62700
14091e91f: jae    0x14091e92b
14091e921: lea    eax,[rbx+rbx*2]
14091e924: sar    eax,0x3
14091e927: add    edi,eax
14091e929: jmp    0x14091e98b
14091e92b: lea    eax,[rdx-0x24ea00]
14091e931: cmp    eax,0x62700
14091e936: jae    0x14091e93c
14091e938: sar    ebx,1
14091e93a: jmp    0x14091e989
14091e93c: lea    eax,[rdx-0x1ec300]
14091e942: cmp    eax,0x62700
14091e947: jae    0x14091e953
14091e949: lea    eax,[rbx+rbx*4]
14091e94c: sar    eax,0x3
14091e94f: add    edi,eax
14091e951: jmp    0x14091e98b
14091e953: lea    eax,[rdx-0x189c00]
14091e959: cmp    eax,0x62700
14091e95e: jae    0x14091e96a
14091e960: lea    eax,[rbx+rbx*2]
14091e963: sar    eax,0x2
14091e966: add    edi,eax
14091e968: jmp    0x14091e98b
14091e96a: lea    eax,[rdx-0x127500]
14091e970: cmp    eax,0x62700
14091e975: jae    0x14091e981
14091e977: imul   eax,ebx,0x7
14091e97a: sar    eax,0x3
14091e97d: add    edi,eax
14091e97f: jmp    0x14091e98b
14091e981: cmp    edx,0x127500
14091e987: jge    0x14091e98b
14091e989: add    edi,ebx
14091e98b: mov    rbp,QWORD PTR [rsp+0x60]
14091e990: mov    ebx,DWORD PTR [rsp+0x68]
14091e994: sub    r12,0x1
14091e998: jns    0x14091e710
14091e99e: mov    r14,QWORD PTR [rsp+0x20]
14091e9a3: mov    rsi,QWORD PTR [rsp+0x70]
14091e9a8: mov    r12,QWORD PTR [rsp+0x28]
14091e9ad: mov    eax,edi
14091e9af: add    rsp,0x30
14091e9b3: pop    r15
14091e9b5: pop    r13
14091e9b7: pop    rdi
14091e9b8: pop    rbp
14091e9b9: pop    rbx
14091e9ba: ret
14091e9bb: mov    eax,edi
14091e9bd: add    rsp,0x30
14091e9c1: pop    r15
14091e9c3: pop    r13
14091e9c5: pop    rdi
14091e9c6: pop    rbp
14091e9c7: pop    rbx
14091e9c8: ret