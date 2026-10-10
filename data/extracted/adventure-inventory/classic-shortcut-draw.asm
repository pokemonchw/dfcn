# classic PE:6a70b91c:0270a000; shortcut-draw; RVA 0xc364f0..0xc365f5
0x00c364f0: mov    QWORD PTR [rsp+0x8],rbx
0x00c364f5: mov    QWORD PTR [rsp+0x10],rbp
0x00c364fa: mov    QWORD PTR [rsp+0x18],rsi
0x00c364ff: mov    QWORD PTR [rsp+0x20],rdi
0x00c36504: push   r12
0x00c36506: push   r14
0x00c36508: push   r15
0x00c3650a: sub    rsp,0x50
0x00c3650e: mov    rax,QWORD PTR [rip+0xc5fb2b]        # 0x141896040
0x00c36515: xor    rax,rsp
0x00c36518: mov    QWORD PTR [rsp+0x40],rax
0x00c3651d: movsx  r14d,BYTE PTR [rip+0x1a0de47]        # 0x14264436c
0x00c36525: movsx  r15d,BYTE PTR [rip+0x1a0de40]        # 0x14264436d
0x00c3652d: movsx  r12d,BYTE PTR [rip+0x1a0de39]        # 0x14264436e
0x00c36535: cmp    BYTE PTR [rip+0x1a0de34],0x0        # 0x142644370
0x00c3653c: setne  bpl
0x00c36540: cmp    BYTE PTR [rip+0x1a0de2a],0x0        # 0x142644371
0x00c36547: setne  sil
0x00c3654b: cmp    BYTE PTR [rip+0x1a0de20],0x0        # 0x142644372
0x00c36552: setne  bl
0x00c36555: movzx  edi,BYTE PTR [rip+0x1a0de13]        # 0x14264436f
0x00c3655c: mov    DWORD PTR [rip+0x1a0de06],0x1010002        # 0x14264436c
0x00c36566: mov    r8d,edx
0x00c36569: lea    rdx,[rsp+0x20]
0x00c3656e: lea    rcx,[rip+0x1753c0b]        # 0x14238a180
0x00c36575: call   0x1408ea360
0x00c3657a: nop
0x00c3657b: xor    r9d,r9d
0x00c3657e: lea    rdx,[rsp+0x20]
0x00c36583: lea    rcx,[rip+0x1a0dd56]        # 0x1426442e0
0x00c3658a: call   0x140ad69a0
0x00c3658f: mov    BYTE PTR [rip+0x1a0ddd6],r14b        # 0x14264436c
0x00c36596: mov    BYTE PTR [rip+0x1a0ddd0],r15b        # 0x14264436d
0x00c3659d: mov    BYTE PTR [rip+0x1a0ddca],r12b        # 0x14264436e
0x00c365a4: mov    BYTE PTR [rip+0x1a0ddc5],bpl        # 0x142644370
0x00c365ab: mov    BYTE PTR [rip+0x1a0ddbf],sil        # 0x142644371
0x00c365b2: mov    BYTE PTR [rip+0x1a0ddba],bl        # 0x142644372
0x00c365b8: mov    BYTE PTR [rip+0x1a0ddb0],dil        # 0x14264436f
0x00c365bf: lea    rcx,[rsp+0x20]
0x00c365c4: call   0x14006f7e0
0x00c365c9: mov    rcx,QWORD PTR [rsp+0x40]
0x00c365ce: xor    rcx,rsp
0x00c365d1: call   0x1415345d0
0x00c365d6: lea    r11,[rsp+0x50]
0x00c365db: mov    rbx,QWORD PTR [r11+0x20]
0x00c365df: mov    rbp,QWORD PTR [r11+0x28]
0x00c365e3: mov    rsi,QWORD PTR [r11+0x30]
0x00c365e7: mov    rdi,QWORD PTR [r11+0x38]
0x00c365eb: mov    rsp,r11
0x00c365ee: pop    r15
0x00c365f0: pop    r14
0x00c365f2: pop    r12
0x00c365f4: ret
