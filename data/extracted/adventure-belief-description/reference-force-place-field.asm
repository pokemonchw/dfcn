# reference PE:6a70a6d9:02711000; force-place-field; RVA 0x5c3760..0x5c3821
0x005c3760: mov    QWORD PTR [rsp+0x10],rbx
0x005c3765: mov    QWORD PTR [rsp+0x18],rbp
0x005c376a: mov    QWORD PTR [rsp+0x20],rsi
0x005c376f: push   rdi
0x005c3770: push   r14
0x005c3772: push   r15
0x005c3774: sub    rsp,0x30
0x005c3778: mov    rax,QWORD PTR [rcx+0x238]
0x005c377f: mov    r15d,edx
0x005c3782: mov    rdi,QWORD PTR [rcx+0x240]
0x005c3789: mov    rbp,rcx
0x005c378c: sub    rdi,rax
0x005c378f: sar    rdi,0x3
0x005c3793: sub    edi,0x1
0x005c3796: js     0x1405c37f6
0x005c3798: movsxd rsi,edi
0x005c379b: mov    DWORD PTR [rsp+0x50],0xffffffff
0x005c37a3: mov    DWORD PTR [rsp+0x54],0x0
0x005c37ab: mov    rbx,QWORD PTR [rsp+0x50]
0x005c37b0: lea    r14,[rax+rsi*8]
0x005c37b4: nop    DWORD PTR [rax+0x0]
0x005c37b8: nop    DWORD PTR [rax+rax*1+0x0]
0x005c37c0: mov    rdx,QWORD PTR [r14]
0x005c37c3: lea    rcx,[rsp+0x20]
0x005c37c8: add    rdx,0x250
0x005c37cf: mov    r8d,r15d
0x005c37d2: call   0x1400babe0
0x005c37d7: cmp    BYTE PTR [rsp+0x28],0x0
0x005c37dc: mov    rax,rbx
0x005c37df: cmovne rax,QWORD PTR [rsp+0x20]
0x005c37e5: cmp    eax,0xffffffff
0x005c37e8: jne    0x1405c3811
0x005c37ea: dec    edi
0x005c37ec: sub    r14,0x8
0x005c37f0: sub    rsi,0x1
0x005c37f4: jns    0x1405c37c0
0x005c37f6: xor    eax,eax
0x005c37f8: mov    rbx,QWORD PTR [rsp+0x58]
0x005c37fd: mov    rbp,QWORD PTR [rsp+0x60]
0x005c3802: mov    rsi,QWORD PTR [rsp+0x68]
0x005c3807: add    rsp,0x30
0x005c380b: pop    r15
0x005c380d: pop    r14
0x005c380f: pop    rdi
0x005c3810: ret
0x005c3811: mov    rax,QWORD PTR [rbp+0x238]
0x005c3818: movsxd rcx,edi
0x005c381b: mov    rax,QWORD PTR [rax+rcx*8]
0x005c381f: jmp    0x1405c37f8
