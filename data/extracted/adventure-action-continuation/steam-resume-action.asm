# steam PE:6a70a6d9:02711000; resume-action; RVA 0x7f6c30..0x7f6d60
0x007f6c30: mov    QWORD PTR [rsp+0x10],rbx
0x007f6c35: push   rdi
0x007f6c36: sub    rsp,0x20
0x007f6c3a: mov    rbx,rcx
0x007f6c3d: mov    rdi,rdx
0x007f6c40: mov    rcx,QWORD PTR [rip+0x1bee4c9]        # 0x1423e5110
0x007f6c47: call   0x1407e4e90
0x007f6c4c: test   al,al
0x007f6c4e: je     0x1407f6d53
0x007f6c54: mov    QWORD PTR [rsp+0x30],rsi
0x007f6c59: xor    esi,esi
0x007f6c5b: test   BYTE PTR [rip+0x1cf0fae],0x4        # 0x1424e7c10
0x007f6c62: jne    0x1407f6cbb
0x007f6c64: mov    rax,QWORD PTR [rip+0x1cecc05]        # 0x1424e3870
0x007f6c6b: mov    r9d,esi
0x007f6c6e: mov    rdx,QWORD PTR [rip+0x1cecbf3]        # 0x1424e3868
0x007f6c75: sub    rax,rdx
0x007f6c78: sar    rax,0x3
0x007f6c7c: test   rax,rax
0x007f6c7f: je     0x1407f6cbb
0x007f6c81: mov    r8d,esi
0x007f6c84: nop    DWORD PTR [rax+0x0]
0x007f6c88: nop    DWORD PTR [rax+rax*1+0x0]
0x007f6c90: mov    rax,QWORD PTR [r8+rdx*1]
0x007f6c94: lea    r8,[r8+0x8]
0x007f6c98: inc    r9d
0x007f6c9b: mov    DWORD PTR [rax+0x2c],esi
0x007f6c9e: mov    rcx,QWORD PTR [rip+0x1cecbcb]        # 0x1424e3870
0x007f6ca5: mov    rdx,QWORD PTR [rip+0x1cecbbc]        # 0x1424e3868
0x007f6cac: sub    rcx,rdx
0x007f6caf: movsxd rax,r9d
0x007f6cb2: sar    rcx,0x3
0x007f6cb6: cmp    rax,rcx
0x007f6cb9: jb     0x1407f6c90
0x007f6cbb: mov    rcx,rdi
0x007f6cbe: call   0x1400e1170
0x007f6cc3: mov    rax,QWORD PTR [rip+0x1bee446]        # 0x1423e5110
0x007f6cca: movsx  ecx,WORD PTR [rax+0xa8]
0x007f6cd1: mov    DWORD PTR [rbx+0x198],ecx
0x007f6cd7: mov    rax,QWORD PTR [rip+0x1bee432]        # 0x1423e5110
0x007f6cde: movsx  ecx,WORD PTR [rax+0xaa]
0x007f6ce5: mov    DWORD PTR [rbx+0x19c],ecx
0x007f6ceb: mov    rax,QWORD PTR [rip+0x1bee41e]        # 0x1423e5110
0x007f6cf2: movsx  ecx,WORD PTR [rax+0xac]
0x007f6cf9: mov    DWORD PTR [rbx+0x1a0],ecx
0x007f6cff: mov    eax,DWORD PTR [rip+0x1b7d9ef]        # 0x1423746f4
0x007f6d05: or     DWORD PTR [rip+0x1b998bc],0x2        # 0x1423905c8
0x007f6d0c: mov    DWORD PTR [rip+0x1e5353e],eax        # 0x14264a250
0x007f6d12: mov    eax,DWORD PTR [rip+0x1b912ac]        # 0x142387fc4
0x007f6d18: mov    DWORD PTR [rip+0x1e53536],eax        # 0x14264a254
0x007f6d1e: mov    eax,DWORD PTR [rip+0x1b7da10]        # 0x142374734
0x007f6d24: mov    DWORD PTR [rip+0x1e5352e],eax        # 0x14264a258
0x007f6d2a: mov    al,0x1
0x007f6d2c: mov    DWORD PTR [rip+0x1e528ce],esi        # 0x142649600
0x007f6d32: mov    BYTE PTR [rip+0x1e527ff],sil        # 0x142649538
0x007f6d39: mov    rsi,QWORD PTR [rsp+0x30]
0x007f6d3e: mov    DWORD PTR [rip+0x1e527ec],0x1        # 0x142649534
0x007f6d48: mov    rbx,QWORD PTR [rsp+0x38]
0x007f6d4d: add    rsp,0x20
0x007f6d51: pop    rdi
0x007f6d52: ret
0x007f6d53: mov    rbx,QWORD PTR [rsp+0x38]
0x007f6d58: xor    al,al
0x007f6d5a: add    rsp,0x20
0x007f6d5e: pop    rdi
0x007f6d5f: ret
