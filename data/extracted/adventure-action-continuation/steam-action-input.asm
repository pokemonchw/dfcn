# steam PE:6a70a6d9:02711000; action-input; RVA 0x7f6d60..0x7f7016
0x007f6d60: mov    QWORD PTR [rsp+0x8],rbx
0x007f6d65: mov    QWORD PTR [rsp+0x10],rbp
0x007f6d6a: mov    QWORD PTR [rsp+0x18],rsi
0x007f6d6f: mov    QWORD PTR [rsp+0x20],rdi
0x007f6d74: push   r12
0x007f6d76: push   r14
0x007f6d78: push   r15
0x007f6d7a: sub    rsp,0x20
0x007f6d7e: mov    ebx,DWORD PTR [rip+0x1bd6a04]        # 0x1423cd788
0x007f6d84: lea    eax,[r8+r9*1]
0x007f6d88: add    r8d,0x1c
0x007f6d8c: mov    r14,rdx
0x007f6d8f: cdq
0x007f6d90: xor    r11b,r11b
0x007f6d93: sub    eax,edx
0x007f6d95: xor    r10b,r10b
0x007f6d98: sar    eax,1
0x007f6d9a: lea    edi,[rbx-0x5]
0x007f6d9d: xor    r15b,r15b
0x007f6da0: lea    esi,[rbx-0x4]
0x007f6da3: mov    r12,rcx
0x007f6da6: lea    ebp,[rbx-0x2]
0x007f6da9: mov    ecx,DWORD PTR [rip+0x1e53805]        # 0x14264a5b4
0x007f6daf: lea    r9d,[rax-0x18]
0x007f6db3: mov    eax,r9d
0x007f6db6: sub    eax,r8d
0x007f6db9: add    r8d,0xc
0x007f6dbd: cmp    eax,0xc
0x007f6dc0: mov    eax,DWORD PTR [rip+0x1e537ea]        # 0x14264a5b0
0x007f6dc6: cmovge r8d,r9d
0x007f6dca: cmp    BYTE PTR [rip+0x1b99804],r10b        # 0x1423905d5
0x007f6dd1: lea    r9d,[rbx-0x7]
0x007f6dd5: lea    edx,[r8+0x2e]
0x007f6dd9: je     0x1407f6e2a
0x007f6ddb: cmp    BYTE PTR [rip+0x1b997ea],r10b        # 0x1423905cc
0x007f6de2: je     0x1407f6e2a
0x007f6de4: cmp    eax,r8d
0x007f6de7: jl     0x1407f6e2a
0x007f6de9: cmp    eax,edx
0x007f6deb: jg     0x1407f6e2a
0x007f6ded: lea    eax,[rbx-0xa]
0x007f6df0: cmp    ecx,eax
0x007f6df2: jl     0x1407f6e05
0x007f6df4: lea    eax,[rbx-0x8]
0x007f6df7: cmp    ecx,eax
0x007f6df9: jg     0x1407f6e05
0x007f6dfb: mov    BYTE PTR [rip+0x1b997ca],r10b        # 0x1423905cc
0x007f6e02: mov    r11b,0x1
0x007f6e05: cmp    ecx,r9d
0x007f6e08: jl     0x1407f6e18
0x007f6e0a: cmp    ecx,edi
0x007f6e0c: jg     0x1407f6e18
0x007f6e0e: mov    BYTE PTR [rip+0x1b997b7],r10b        # 0x1423905cc
0x007f6e15: mov    r10b,0x1
0x007f6e18: cmp    ecx,esi
0x007f6e1a: jl     0x1407f6e2a
0x007f6e1c: cmp    ecx,ebp
0x007f6e1e: jg     0x1407f6e2a
0x007f6e20: mov    BYTE PTR [rip+0x1b997a5],r15b        # 0x1423905cc
0x007f6e27: mov    r15b,0x1
0x007f6e2a: mov    rdx,QWORD PTR [r14]
0x007f6e2d: mov    r8,rdx
0x007f6e30: mov    rax,QWORD PTR [rdx+0x8]
0x007f6e34: movzx  r9d,BYTE PTR [rax+0x19]
0x007f6e39: test   r9b,r9b
0x007f6e3c: jne    0x1407f6e59
0x007f6e3e: mov    rcx,rax
0x007f6e41: cmp    DWORD PTR [rcx+0x1c],0x52
0x007f6e45: jge    0x1407f6e4d
0x007f6e47: mov    rcx,QWORD PTR [rcx+0x10]
0x007f6e4b: jmp    0x1407f6e53
0x007f6e4d: mov    r8,rcx
0x007f6e50: mov    rcx,QWORD PTR [rcx]
0x007f6e53: cmp    BYTE PTR [rcx+0x19],0x0
0x007f6e57: je     0x1407f6e41
0x007f6e59: cmp    BYTE PTR [r8+0x19],0x0
0x007f6e5e: mov    ebx,0x1
0x007f6e63: jne    0x1407f6e72
0x007f6e65: cmp    DWORD PTR [r8+0x1c],0x52
0x007f6e6a: movzx  r11d,r11b
0x007f6e6e: cmovle r11d,ebx
0x007f6e72: mov    r8,rdx
0x007f6e75: test   r9b,r9b
0x007f6e78: jne    0x1407f6e98
0x007f6e7a: mov    rcx,rax
0x007f6e7d: nop    DWORD PTR [rax]
0x007f6e80: cmp    DWORD PTR [rcx+0x1c],0x53
0x007f6e84: jge    0x1407f6e8c
0x007f6e86: mov    rcx,QWORD PTR [rcx+0x10]
0x007f6e8a: jmp    0x1407f6e92
0x007f6e8c: mov    r8,rcx
0x007f6e8f: mov    rcx,QWORD PTR [rcx]
0x007f6e92: cmp    BYTE PTR [rcx+0x19],0x0
0x007f6e96: je     0x1407f6e80
0x007f6e98: cmp    BYTE PTR [r8+0x19],0x0
0x007f6e9d: jne    0x1407f6eac
0x007f6e9f: cmp    DWORD PTR [r8+0x1c],0x53
0x007f6ea4: movzx  r10d,r10b
0x007f6ea8: cmovle r10d,ebx
0x007f6eac: test   r9b,r9b
0x007f6eaf: jne    0x1407f6ec9
0x007f6eb1: cmp    DWORD PTR [rax+0x1c],0x54
0x007f6eb5: jge    0x1407f6ebd
0x007f6eb7: mov    rax,QWORD PTR [rax+0x10]
0x007f6ebb: jmp    0x1407f6ec3
0x007f6ebd: mov    rdx,rax
0x007f6ec0: mov    rax,QWORD PTR [rax]
0x007f6ec3: cmp    BYTE PTR [rax+0x19],0x0
0x007f6ec7: je     0x1407f6eb1
0x007f6ec9: cmp    BYTE PTR [rdx+0x19],0x0
0x007f6ecd: jne    0x1407f6ed5
0x007f6ecf: cmp    DWORD PTR [rdx+0x1c],0x54
0x007f6ed3: jle    0x1407f6eda
0x007f6ed5: test   r15b,r15b
0x007f6ed8: je     0x1407f6f30
0x007f6eda: mov    rax,QWORD PTR [rip+0x1bee22f]        # 0x1423e5110
0x007f6ee1: mov    rdx,r14
0x007f6ee4: mov    rcx,r12
0x007f6ee7: mov    WORD PTR [rax+0xbe0],bx
0x007f6eee: call   0x1407f6c30
0x007f6ef3: mov    rax,QWORD PTR [rip+0x1bee216]        # 0x1423e5110
0x007f6efa: cmp    BYTE PTR [rax+0x143c],bl
0x007f6f00: jne    0x1407f6f23
0x007f6f02: mov    rcx,rax
0x007f6f05: call   0x140643e00
0x007f6f0a: test   al,al
0x007f6f0c: mov    rax,QWORD PTR [rip+0x1bee1fd]        # 0x1423e5110
0x007f6f13: je     0x1407f6f23
0x007f6f15: mov    BYTE PTR [rax+0x143c],0x2
0x007f6f1c: mov    al,0x1
0x007f6f1e: jmp    0x1407f6ff7
0x007f6f23: mov    BYTE PTR [rax+0x143c],bl
0x007f6f29: mov    al,0x1
0x007f6f2b: jmp    0x1407f6ff7
0x007f6f30: test   r11b,r11b
0x007f6f33: je     0x1407f6f56
0x007f6f35: mov    rax,QWORD PTR [rip+0x1bee1d4]        # 0x1423e5110
0x007f6f3c: mov    rdx,r14
0x007f6f3f: mov    rcx,r12
0x007f6f42: mov    WORD PTR [rax+0xbe0],bx
0x007f6f49: call   0x1407f6c30
0x007f6f4e: movzx  eax,bl
0x007f6f51: jmp    0x1407f6ff7
0x007f6f56: test   r10b,r10b
0x007f6f59: je     0x1407f6ff5
0x007f6f5f: mov    rbx,QWORD PTR [rip+0x1bee1aa]        # 0x1423e5110
0x007f6f66: mov    rcx,rbx
0x007f6f69: call   0x140a40d90
0x007f6f6e: mov    rcx,rbx
0x007f6f71: call   0x140073a60
0x007f6f76: mov    r8,QWORD PTR [rip+0x1bee13b]        # 0x1423e50b8
0x007f6f7d: mov    r11,QWORD PTR [rip+0x1bee12c]        # 0x1423e50b0
0x007f6f84: mov    rcx,QWORD PTR [rip+0x1bee185]        # 0x1423e5110
0x007f6f8b: sub    r8,r11
0x007f6f8e: sar    r8,0x3
0x007f6f92: mov    r10d,DWORD PTR [rcx+0x3dc]
0x007f6f99: test   r8d,r8d
0x007f6f9c: je     0x1407f6ff1
0x007f6f9e: cmp    r10d,0xffffffff
0x007f6fa2: je     0x1407f6ff1
0x007f6fa4: xor    edx,edx
0x007f6fa6: sub    r8d,0x1
0x007f6faa: js     0x1407f6fda
0x007f6fac: nop    DWORD PTR [rax+0x0]
0x007f6fb0: lea    ecx,[rdx+r8*1]
0x007f6fb4: sar    ecx,1
0x007f6fb6: movsxd rax,ecx
0x007f6fb9: mov    rbx,QWORD PTR [r11+rax*8]
0x007f6fbd: cmp    DWORD PTR [rbx+0x130],r10d
0x007f6fc4: je     0x1407f6fdc
0x007f6fc6: lea    eax,[rcx+0x1]
0x007f6fc9: cmovle edx,eax
0x007f6fcc: lea    eax,[rcx-0x1]
0x007f6fcf: cmovle eax,r8d
0x007f6fd3: mov    r8d,eax
0x007f6fd6: cmp    edx,eax
0x007f6fd8: jle    0x1407f6fb0
0x007f6fda: xor    ebx,ebx
0x007f6fdc: test   rbx,rbx
0x007f6fdf: je     0x1407f6ff1
0x007f6fe1: mov    rcx,rbx
0x007f6fe4: call   0x140a40d90
0x007f6fe9: mov    rcx,rbx
0x007f6fec: call   0x140073a60
0x007f6ff1: mov    al,0x1
0x007f6ff3: jmp    0x1407f6ff7
0x007f6ff5: xor    al,al
0x007f6ff7: mov    rbx,QWORD PTR [rsp+0x40]
0x007f6ffc: mov    rbp,QWORD PTR [rsp+0x48]
0x007f7001: mov    rsi,QWORD PTR [rsp+0x50]
0x007f7006: mov    rdi,QWORD PTR [rsp+0x58]
0x007f700b: add    rsp,0x20
0x007f700f: pop    r15
0x007f7011: pop    r14
0x007f7013: pop    r12
0x007f7015: ret
