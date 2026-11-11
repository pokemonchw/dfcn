0x140aac2a0: mov    QWORD PTR [rsp+0x8],rbx
0x140aac2a5: push   rdi
0x140aac2a6: sub    rsp,0x30
0x140aac2aa: movsxd rax,DWORD PTR [rsp+0x60]
0x140aac2af: movzx  r11d,r9w
0x140aac2b3: mov    ebx,r8d
0x140aac2b6: mov    rdi,rdx
0x140aac2b9: cmp    eax,0x43
0x140aac2bc: ja     0x140aac2ea
0x140aac2be: lea    r10,[rax+rax*8]
0x140aac2c2: movzx  r8d,r11w
0x140aac2c6: shl    r10,0x5
0x140aac2ca: lea    rax,[rcx+0x4cc8]
0x140aac2d1: lea    r9,[rcx+0x48]
0x140aac2d5: add    rax,r10
0x140aac2d8: add    r9,r10
0x140aac2db: mov    QWORD PTR [rsp+0x20],rax
0x140aac2e0: mov    edx,ebx
0x140aac2e2: mov    rcx,rdi
0x140aac2e5: call   0x140aac300
0x140aac2ea: mov    rbx,QWORD PTR [rsp+0x40]
0x140aac2ef: add    rsp,0x30
0x140aac2f3: pop    rdi
0x140aac2f4: ret
