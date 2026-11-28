; classic PE:6aea11a5:0272d000; reference-description:general_ref_written_contentst; RVA 0xef2da0..0xef2eda; code ends 0xef2eda
0x00ef2da0: mov    QWORD PTR [rsp+0x8],rbx
0x00ef2da5: push   rdi
0x00ef2da6: sub    rsp,0x20
0x00ef2daa: mov    r11,QWORD PTR [rip+0x1611287]        # 0x142504038
0x00ef2db1: mov    rbx,rdx
0x00ef2db4: mov    r10,QWORD PTR [rip+0x1611285]        # 0x142504040
0x00ef2dbb: mov    edi,DWORD PTR [rcx+0x8]
0x00ef2dbe: sub    r10,r11
0x00ef2dc1: sar    r10,0x3
0x00ef2dc5: test   r10d,r10d
0x00ef2dc8: je     0x140ef2ecf
0x00ef2dce: xor    r9d,r9d
0x00ef2dd1: cmp    r10d,0x40
0x00ef2dd5: jle    0x140ef2e03
0x00ef2dd7: nop    WORD PTR [rax+rax*1+0x0]
0x00ef2de0: mov    r8d,r10d
0x00ef2de3: shr    r8d,1
0x00ef2de6: lea    edx,[r8+r9*1]
0x00ef2dea: movsxd rax,edx
0x00ef2ded: mov    rcx,QWORD PTR [r11+rax*8]
0x00ef2df1: cmp    edi,DWORD PTR [rcx]
0x00ef2df3: cmovl  edx,r9d
0x00ef2df7: sub    r10d,r8d
0x00ef2dfa: mov    r9d,edx
0x00ef2dfd: cmp    r10d,0x40
0x00ef2e01: jg     0x140ef2de0
0x00ef2e03: lea    eax,[r9+r10*1]
0x00ef2e07: cmp    eax,0xffffffff
0x00ef2e0a: je     0x140ef2ecf
0x00ef2e10: cmp    r9d,eax
0x00ef2e13: jge    0x140ef2ecf
0x00ef2e19: movsxd rcx,r9d
0x00ef2e1c: movsxd rdx,eax
0x00ef2e1f: nop
0x00ef2e20: mov    rax,QWORD PTR [r11+rcx*8]
0x00ef2e24: cmp    edi,DWORD PTR [rax]
0x00ef2e26: je     0x140ef2e3e
0x00ef2e28: inc    r9d
0x00ef2e2b: inc    rcx
0x00ef2e2e: cmp    rcx,rdx
0x00ef2e31: jl     0x140ef2e20
0x00ef2e33: mov    rbx,QWORD PTR [rsp+0x30]
0x00ef2e38: add    rsp,0x20
0x00ef2e3c: pop    rdi
0x00ef2e3d: ret
0x00ef2e3e: movsxd rax,r9d
0x00ef2e41: mov    rdx,QWORD PTR [r11+rax*8]
0x00ef2e45: test   rdx,rdx
0x00ef2e48: je     0x140ef2ecf
0x00ef2e4e: add    rdx,0x8
0x00ef2e52: cmp    rbx,rdx
0x00ef2e55: je     0x140ef2e6d
0x00ef2e57: cmp    QWORD PTR [rdx+0x18],0xf
0x00ef2e5c: mov    r8,QWORD PTR [rdx+0x10]
0x00ef2e60: jbe    0x140ef2e65
0x00ef2e62: mov    rdx,QWORD PTR [rdx]
0x00ef2e65: mov    rcx,rbx
0x00ef2e68: call   0x140070e90
0x00ef2e6d: cmp    QWORD PTR [rbx+0x10],0x4
0x00ef2e72: jb     0x140ef2ecf
0x00ef2e74: mov    rax,QWORD PTR [rbx+0x18]
0x00ef2e78: mov    rcx,rbx
0x00ef2e7b: cmp    rax,0xf
0x00ef2e7f: jbe    0x140ef2e84
0x00ef2e81: mov    rcx,QWORD PTR [rbx]
0x00ef2e84: cmp    BYTE PTR [rcx],0x54
0x00ef2e87: jne    0x140ef2ecf
0x00ef2e89: mov    rcx,rbx
0x00ef2e8c: cmp    rax,0xf
0x00ef2e90: jbe    0x140ef2e95
0x00ef2e92: mov    rcx,QWORD PTR [rbx]
0x00ef2e95: cmp    BYTE PTR [rcx+0x1],0x68
0x00ef2e99: jne    0x140ef2ecf
0x00ef2e9b: mov    rcx,rbx
0x00ef2e9e: cmp    rax,0xf
0x00ef2ea2: jbe    0x140ef2ea7
0x00ef2ea4: mov    rcx,QWORD PTR [rbx]
0x00ef2ea7: cmp    BYTE PTR [rcx+0x2],0x65
0x00ef2eab: jne    0x140ef2ecf
0x00ef2ead: mov    rcx,QWORD PTR [rbx+0x18]
0x00ef2eb1: mov    rax,rbx
0x00ef2eb4: cmp    rcx,0xf
0x00ef2eb8: jbe    0x140ef2ebd
0x00ef2eba: mov    rax,QWORD PTR [rbx]
0x00ef2ebd: cmp    BYTE PTR [rax+0x3],0x20
0x00ef2ec1: jne    0x140ef2ecf
0x00ef2ec3: cmp    rcx,0xf
0x00ef2ec7: jbe    0x140ef2ecc
0x00ef2ec9: mov    rbx,QWORD PTR [rbx]
0x00ef2ecc: mov    BYTE PTR [rbx],0x74
0x00ef2ecf: mov    rbx,QWORD PTR [rsp+0x30]
0x00ef2ed4: add    rsp,0x20
0x00ef2ed8: pop    rdi
0x00ef2ed9: ret
