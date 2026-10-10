# steam PE:6a70a6d9:02711000; current-key-draw; RVA 0xc394b0..0xc395b5
0x00c394b0: mov    QWORD PTR [rsp+0x8],rbx
0x00c394b5: mov    QWORD PTR [rsp+0x10],rbp
0x00c394ba: mov    QWORD PTR [rsp+0x18],rsi
0x00c394bf: mov    QWORD PTR [rsp+0x20],rdi
0x00c394c4: push   r12
0x00c394c6: push   r14
0x00c394c8: push   r15
0x00c394ca: sub    rsp,0x50
0x00c394ce: mov    rax,QWORD PTR [rip+0xc62b6b]        # 0x14189c040
0x00c394d5: xor    rax,rsp
0x00c394d8: mov    QWORD PTR [rsp+0x40],rax
0x00c394dd: movsx  r14d,BYTE PTR [rip+0x1a10f97]        # 0x14264a47c
0x00c394e5: movsx  r15d,BYTE PTR [rip+0x1a10f90]        # 0x14264a47d
0x00c394ed: movsx  r12d,BYTE PTR [rip+0x1a10f89]        # 0x14264a47e
0x00c394f5: cmp    BYTE PTR [rip+0x1a10f84],0x0        # 0x14264a480
0x00c394fc: setne  bpl
0x00c39500: cmp    BYTE PTR [rip+0x1a10f7a],0x0        # 0x14264a481
0x00c39507: setne  sil
0x00c3950b: cmp    BYTE PTR [rip+0x1a10f70],0x0        # 0x14264a482
0x00c39512: setne  bl
0x00c39515: movzx  edi,BYTE PTR [rip+0x1a10f63]        # 0x14264a47f
0x00c3951c: mov    DWORD PTR [rip+0x1a10f56],0x1010002        # 0x14264a47c
0x00c39526: mov    r8d,edx
0x00c39529: lea    rdx,[rsp+0x20]
0x00c3952e: lea    rcx,[rip+0x1756d5b]        # 0x142390290
0x00c39535: call   0x1408ecb30
0x00c3953a: nop
0x00c3953b: xor    r9d,r9d
0x00c3953e: lea    rdx,[rsp+0x20]
0x00c39543: lea    rcx,[rip+0x1a10ea6]        # 0x14264a3f0
0x00c3954a: call   0x140ad9960
0x00c3954f: mov    BYTE PTR [rip+0x1a10f26],r14b        # 0x14264a47c
0x00c39556: mov    BYTE PTR [rip+0x1a10f20],r15b        # 0x14264a47d
0x00c3955d: mov    BYTE PTR [rip+0x1a10f1a],r12b        # 0x14264a47e
0x00c39564: mov    BYTE PTR [rip+0x1a10f15],bpl        # 0x14264a480
0x00c3956b: mov    BYTE PTR [rip+0x1a10f0f],sil        # 0x14264a481
0x00c39572: mov    BYTE PTR [rip+0x1a10f0a],bl        # 0x14264a482
0x00c39578: mov    BYTE PTR [rip+0x1a10f00],dil        # 0x14264a47f
0x00c3957f: lea    rcx,[rsp+0x20]
0x00c39584: call   0x14006f850
0x00c39589: mov    rcx,QWORD PTR [rsp+0x40]
0x00c3958e: xor    rcx,rsp
0x00c39591: call   0x141539660
0x00c39596: lea    r11,[rsp+0x50]
0x00c3959b: mov    rbx,QWORD PTR [r11+0x20]
0x00c3959f: mov    rbp,QWORD PTR [r11+0x28]
0x00c395a3: mov    rsi,QWORD PTR [r11+0x30]
0x00c395a7: mov    rdi,QWORD PTR [r11+0x38]
0x00c395ab: mov    rsp,r11
0x00c395ae: pop    r15
0x00c395b0: pop    r14
0x00c395b2: pop    r12
0x00c395b4: ret
