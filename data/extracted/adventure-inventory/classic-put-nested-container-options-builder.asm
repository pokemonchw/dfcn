# classic PE:6a70b91c:0270a000; put-nested-container-options-builder; RVA 0x897490..0x89764f
0x00897490: mov    r11,rsp
0x00897493: mov    QWORD PTR [r11+0x20],r9
0x00897497: mov    QWORD PTR [r11+0x8],rcx
0x0089749b: push   rbx
0x0089749c: push   r14
0x0089749e: push   r15
0x008974a0: sub    rsp,0x60
0x008974a4: test   BYTE PTR [r9+0x10],0x40
0x008974a9: mov    rbx,r9
0x008974ac: mov    r15,r8
0x008974af: mov    r14,rdx
0x008974b2: je     0x140897659
0x008974b8: mov    rdx,QWORD PTR [r9+0x38]
0x008974bc: mov    rax,QWORD PTR [r9+0x40]
0x008974c0: sub    rax,rdx
0x008974c3: mov    QWORD PTR [r11-0x28],rdi
0x008974c7: mov    QWORD PTR [r11-0x30],r12
0x008974cb: xor    r12d,r12d
0x008974ce: sar    rax,0x3
0x008974d2: mov    edi,r12d
0x008974d5: mov    DWORD PTR [rsp+0x30],r12d
0x008974da: test   rax,rax
0x008974dd: je     0x14089764f
0x008974e3: mov    QWORD PTR [r11+0x10],rbp
0x008974e7: mov    QWORD PTR [r11-0x38],r13
0x008974eb: mov    r13d,r12d
0x008974ee: mov    QWORD PTR [r11-0x20],rsi
0x008974f2: mov    rcx,QWORD PTR [rdx+r13*1]
0x008974f6: mov    rax,QWORD PTR [rcx]
0x008974f9: call   QWORD PTR [rax+0x10]
0x008974fc: cmp    eax,0xa
0x008974ff: jne    0x140897618
0x00897505: mov    rax,QWORD PTR [rbx+0x38]
0x00897509: mov    rcx,QWORD PTR [rax+r13*1]
0x0089750d: mov    rax,QWORD PTR [rcx]
0x00897510: call   QWORD PTR [rax+0x18]
0x00897513: mov    rsi,rax
0x00897516: test   rax,rax
0x00897519: je     0x140897618
0x0089751f: mov    ebp,DWORD PTR [r15+0x1c]
0x00897523: cmp    rax,r15
0x00897526: mov    rbx,QWORD PTR [rax+0x38]
0x0089752a: mov    rdi,QWORD PTR [rax+0x40]
0x0089752e: setne  r12b
0x00897532: cmp    rbx,rdi
0x00897535: jae    0x14089755b
0x00897537: mov    rcx,QWORD PTR [rbx]
0x0089753a: mov    rax,QWORD PTR [rcx]
0x0089753d: call   QWORD PTR [rax+0x10]
0x00897540: cmp    eax,0xa
0x00897543: jne    0x140897552
0x00897545: mov    rcx,QWORD PTR [rbx]
0x00897548: mov    rax,QWORD PTR [rcx]
0x0089754b: call   QWORD PTR [rax+0x60]
0x0089754e: cmp    eax,ebp
0x00897550: je     0x140897558
0x00897552: add    rbx,0x8
0x00897556: jmp    0x140897532
0x00897558: xor    r12b,r12b
0x0089755b: mov    rax,QWORD PTR [r15]
0x0089755e: mov    rcx,r15
0x00897561: call   QWORD PTR [rax+0x2c0]
0x00897567: xor    edx,edx
0x00897569: mov    rcx,rsi
0x0089756c: mov    ebx,eax
0x0089756e: call   0x140c875c0
0x00897573: cmp    eax,ebx
0x00897575: jl     0x1408975e9
0x00897577: test   r12b,r12b
0x0089757a: je     0x1408975e9
0x0089757c: mov    ecx,0x30
0x00897581: call   0x141534600
0x00897586: mov    QWORD PTR [rsp+0x38],rax
0x0089758b: lea    rcx,[rip+0xe1aaee]        # 0x1416b2080
0x00897592: mov    QWORD PTR [rsp+0x38],rax
0x00897597: mov    QWORD PTR [rax],rcx
0x0089759a: mov    ecx,DWORD PTR [rsp+0xa0]
0x008975a1: mov    DWORD PTR [rax+0x8],ecx
0x008975a4: mov    DWORD PTR [rax+0xc],0xffffffff
0x008975ab: mov    DWORD PTR [rax+0x10],0x8ad08ad0
0x008975b2: mov    DWORD PTR [rax+0x14],0x8ad08ad0
0x008975b9: mov    DWORD PTR [rax+0x18],0x8ad08ad0
0x008975c0: mov    QWORD PTR [rax+0x20],r15
0x008975c4: mov    QWORD PTR [rax+0x28],rsi
0x008975c8: mov    rdx,QWORD PTR [r14+0x8]
0x008975cc: cmp    rdx,QWORD PTR [r14+0x10]
0x008975d0: je     0x1408975dc
0x008975d2: mov    QWORD PTR [rdx],rax
0x008975d5: add    QWORD PTR [r14+0x8],0x8
0x008975da: jmp    0x1408975e9
0x008975dc: lea    r8,[rsp+0x38]
0x008975e1: mov    rcx,r14
0x008975e4: call   0x1400bacc0
0x008975e9: mov    eax,DWORD PTR [rsp+0xa0]
0x008975f0: mov    r9,rsi
0x008975f3: mov    rcx,QWORD PTR [rsp+0x80]
0x008975fb: inc    eax
0x008975fd: mov    r8,r15
0x00897600: mov    DWORD PTR [rsp+0x20],eax
0x00897604: mov    rdx,r14
0x00897607: call   0x140897490
0x0089760c: mov    rbx,QWORD PTR [rsp+0x98]
0x00897614: mov    edi,DWORD PTR [rsp+0x30]
0x00897618: mov    rdx,QWORD PTR [rbx+0x38]
0x0089761c: inc    edi
0x0089761e: mov    rcx,QWORD PTR [rbx+0x40]
0x00897622: add    r13,0x8
0x00897626: sub    rcx,rdx
0x00897629: movsxd rax,edi
0x0089762c: sar    rcx,0x3
0x00897630: mov    DWORD PTR [rsp+0x30],edi
0x00897634: cmp    rax,rcx
0x00897637: jb     0x1408974f2
0x0089763d: mov    r13,QWORD PTR [rsp+0x40]
0x00897642: mov    rsi,QWORD PTR [rsp+0x58]
0x00897647: mov    rbp,QWORD PTR [rsp+0x88]
