# steam PE:6a70a6d9:02711000; put-item-modal-action; RVA 0x895f20..0x895fc5
0x00895f20: rex push rbx
0x00895f22: sub    rsp,0x20
0x00895f26: mov    rax,QWORD PTR [rip+0x1c4d943]        # 0x1424e3870
0x00895f2d: xor    ebx,ebx
0x00895f2f: mov    r8,QWORD PTR [rip+0x1c4d932]        # 0x1424e3868
0x00895f36: mov    r10,rcx
0x00895f39: sub    rax,r8
0x00895f3c: mov    r9d,ebx
0x00895f3f: sar    rax,0x3
0x00895f43: test   rax,rax
0x00895f46: je     0x140895f7b
0x00895f48: mov    edx,ebx
0x00895f4a: nop    WORD PTR [rax+rax*1+0x0]
0x00895f50: mov    rax,QWORD PTR [rdx+r8*1]
0x00895f54: lea    rdx,[rdx+0x8]
0x00895f58: inc    r9d
0x00895f5b: mov    DWORD PTR [rax+0x2c],ebx
0x00895f5e: mov    rcx,QWORD PTR [rip+0x1c4d90b]        # 0x1424e3870
0x00895f65: mov    r8,QWORD PTR [rip+0x1c4d8fc]        # 0x1424e3868
0x00895f6c: sub    rcx,r8
0x00895f6f: movsxd rax,r9d
0x00895f72: sar    rcx,0x3
0x00895f76: cmp    rax,rcx
0x00895f79: jb     0x140895f50
0x00895f7b: mov    DWORD PTR [rip+0x101244f],0x7        # 0x1418a83d4
0x00895f85: lea    r8,[r10+0x20]
0x00895f89: mov    rax,QWORD PTR [r10+0x10]
0x00895f8d: lea    rcx,[rip+0x1012454]        # 0x1418a83e8
0x00895f94: mov    QWORD PTR [rip+0x101243d],rax        # 0x1418a83d8
0x00895f9b: cmp    rcx,r8
0x00895f9e: je     0x140895fb3
0x00895fa0: mov    rdx,QWORD PTR [r8]
0x00895fa3: mov    r8,QWORD PTR [r8+0x8]
0x00895fa7: sub    r8,rdx
0x00895faa: sar    r8,0x3
0x00895fae: call   0x1400e16b0
0x00895fb3: mov    DWORD PTR [rip+0x1012523],ebx        # 0x1418a84dc
0x00895fb9: mov    BYTE PTR [rip+0x1012519],bl        # 0x1418a84d8
0x00895fbf: add    rsp,0x20
0x00895fc3: pop    rbx
0x00895fc4: ret
