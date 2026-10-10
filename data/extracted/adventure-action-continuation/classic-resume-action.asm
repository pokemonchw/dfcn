# classic PE:6a70b91c:0270a000; resume-action; RVA 0x7f44b0..0x7f45e0
0x007f44b0: mov    QWORD PTR [rsp+0x10],rbx
0x007f44b5: push   rdi
0x007f44b6: sub    rsp,0x20
0x007f44ba: mov    rbx,rcx
0x007f44bd: mov    rdi,rdx
0x007f44c0: mov    rcx,QWORD PTR [rip+0x1beab39]        # 0x1423df000
0x007f44c7: call   0x1407e2710
0x007f44cc: test   al,al
0x007f44ce: je     0x1407f45d3
0x007f44d4: mov    QWORD PTR [rsp+0x30],rsi
0x007f44d9: xor    esi,esi
0x007f44db: test   BYTE PTR [rip+0x1ced61e],0x4        # 0x1424e1b00
0x007f44e2: jne    0x1407f453b
0x007f44e4: mov    rax,QWORD PTR [rip+0x1ce9275]        # 0x1424dd760
0x007f44eb: mov    r9d,esi
0x007f44ee: mov    rdx,QWORD PTR [rip+0x1ce9263]        # 0x1424dd758
0x007f44f5: sub    rax,rdx
0x007f44f8: sar    rax,0x3
0x007f44fc: test   rax,rax
0x007f44ff: je     0x1407f453b
0x007f4501: mov    r8d,esi
0x007f4504: nop    DWORD PTR [rax+0x0]
0x007f4508: nop    DWORD PTR [rax+rax*1+0x0]
0x007f4510: mov    rax,QWORD PTR [r8+rdx*1]
0x007f4514: lea    r8,[r8+0x8]
0x007f4518: inc    r9d
0x007f451b: mov    DWORD PTR [rax+0x2c],esi
0x007f451e: mov    rcx,QWORD PTR [rip+0x1ce923b]        # 0x1424dd760
0x007f4525: mov    rdx,QWORD PTR [rip+0x1ce922c]        # 0x1424dd758
0x007f452c: sub    rcx,rdx
0x007f452f: movsxd rax,r9d
0x007f4532: sar    rcx,0x3
0x007f4536: cmp    rax,rcx
0x007f4539: jb     0x1407f4510
0x007f453b: mov    rcx,rdi
0x007f453e: call   0x1400e1100
0x007f4543: mov    rax,QWORD PTR [rip+0x1beaab6]        # 0x1423df000
0x007f454a: movsx  ecx,WORD PTR [rax+0xa8]
0x007f4551: mov    DWORD PTR [rbx+0x198],ecx
0x007f4557: mov    rax,QWORD PTR [rip+0x1beaaa2]        # 0x1423df000
0x007f455e: movsx  ecx,WORD PTR [rax+0xaa]
0x007f4565: mov    DWORD PTR [rbx+0x19c],ecx
0x007f456b: mov    rax,QWORD PTR [rip+0x1beaa8e]        # 0x1423df000
0x007f4572: movsx  ecx,WORD PTR [rax+0xac]
0x007f4579: mov    DWORD PTR [rbx+0x1a0],ecx
0x007f457f: mov    eax,DWORD PTR [rip+0x1b7a07f]        # 0x14236e604
0x007f4585: or     DWORD PTR [rip+0x1b95f2c],0x2        # 0x14238a4b8
0x007f458c: mov    DWORD PTR [rip+0x1e4fbae],eax        # 0x142644140
0x007f4592: mov    eax,DWORD PTR [rip+0x1b8d94c]        # 0x142381ee4
0x007f4598: mov    DWORD PTR [rip+0x1e4fba6],eax        # 0x142644144
0x007f459e: mov    eax,DWORD PTR [rip+0x1b7a0a8]        # 0x14236e64c
0x007f45a4: mov    DWORD PTR [rip+0x1e4fb9e],eax        # 0x142644148
0x007f45aa: mov    al,0x1
0x007f45ac: mov    DWORD PTR [rip+0x1e4ef3e],esi        # 0x1426434f0
0x007f45b2: mov    BYTE PTR [rip+0x1e4ee6f],sil        # 0x142643428
0x007f45b9: mov    rsi,QWORD PTR [rsp+0x30]
0x007f45be: mov    DWORD PTR [rip+0x1e4ee5c],0x1        # 0x142643424
0x007f45c8: mov    rbx,QWORD PTR [rsp+0x38]
0x007f45cd: add    rsp,0x20
0x007f45d1: pop    rdi
0x007f45d2: ret
0x007f45d3: mov    rbx,QWORD PTR [rsp+0x38]
0x007f45d8: xor    al,al
0x007f45da: add    rsp,0x20
0x007f45de: pop    rdi
0x007f45df: ret
