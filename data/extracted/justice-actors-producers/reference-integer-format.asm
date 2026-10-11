# reference PE:6a70a6d9:02711000; integer-format; RVA 0x52c2b0..0x52c388
0x0052c2b0: mov    QWORD PTR [rsp+0x18],rbx
0x0052c2b5: push   rdi
0x0052c2b6: sub    rsp,0x150
0x0052c2bd: mov    rax,QWORD PTR [rip+0x136fd7c]        # 0x14189c040
0x0052c2c4: xor    rax,rsp
0x0052c2c7: mov    QWORD PTR [rsp+0x140],rax
0x0052c2cf: mov    rdi,rdx
0x0052c2d2: mov    ebx,ecx
0x0052c2d4: lea    rcx,[rsp+0x30]
0x0052c2d9: call   0x140244550
0x0052c2de: nop
0x0052c2df: mov    edx,ebx
0x0052c2e1: lea    rcx,[rsp+0x30]
0x0052c2e6: call   QWORD PTR [rip+0x10b9174]        # 0x1415e5460
0x0052c2ec: lea    rdx,[rsp+0x120]
0x0052c2f4: lea    rcx,[rsp+0x38]
0x0052c2f9: call   0x140244820
0x0052c2fe: lea    rdx,[rsp+0x120]
0x0052c306: mov    rcx,rdi
0x0052c309: call   0x1401f9bd0
0x0052c30e: lea    rcx,[rsp+0x120]
0x0052c316: call   0x14006f850
0x0052c31b: nop
0x0052c31c: mov    rax,QWORD PTR [rsp+0x30]
0x0052c321: movsxd rcx,DWORD PTR [rax+0x4]
0x0052c325: lea    rax,[rip+0x10e97b4]        # 0x141615ae0
0x0052c32c: mov    QWORD PTR [rsp+rcx*1+0x30],rax
0x0052c331: mov    rax,QWORD PTR [rsp+0x30]
0x0052c336: movsxd rcx,DWORD PTR [rax+0x4]
0x0052c33a: lea    edx,[rcx-0x88]
0x0052c340: mov    DWORD PTR [rsp+rcx*1+0x2c],edx
0x0052c344: lea    rcx,[rsp+0x38]
0x0052c349: call   0x140244460
0x0052c34e: lea    rcx,[rsp+0x40]
0x0052c353: call   QWORD PTR [rip+0x10b923f]        # 0x1415e5598
0x0052c359: lea    rcx,[rsp+0xb8]
0x0052c361: call   QWORD PTR [rip+0x10b91a9]        # 0x1415e5510
0x0052c367: mov    rcx,QWORD PTR [rsp+0x140]
0x0052c36f: xor    rcx,rsp
0x0052c372: call   0x141539660
0x0052c377: mov    rbx,QWORD PTR [rsp+0x170]
0x0052c37f: add    rsp,0x150
0x0052c386: pop    rdi
0x0052c387: ret
