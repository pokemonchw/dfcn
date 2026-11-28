; reference PE:6aea05a1:02734000; reference-description:general_ref_musical_formst; RVA 0xef7d30..0xef7eb1; code ends 0xef7eb1
0x00ef7d30: mov    QWORD PTR [rsp+0x8],rbx
0x00ef7d35: push   rdi
0x00ef7d36: sub    rsp,0x50
0x00ef7d3a: mov    rax,QWORD PTR [rip+0x9c62ff]        # 0x1418be040
0x00ef7d41: xor    rax,rsp
0x00ef7d44: mov    QWORD PTR [rsp+0x40],rax
0x00ef7d49: mov    rdi,rdx
0x00ef7d4c: mov    ebx,DWORD PTR [rcx+0x8]
0x00ef7d4f: mov    r11,QWORD PTR [rip+0x1612622]        # 0x14250a378
0x00ef7d56: mov    r10,QWORD PTR [rip+0x1612623]        # 0x14250a380
0x00ef7d5d: sub    r10,r11
0x00ef7d60: sar    r10,0x3
0x00ef7d64: test   r10d,r10d
0x00ef7d67: je     0x140ef7e99
0x00ef7d6d: xor    r9d,r9d
0x00ef7d70: cmp    r10d,0x40
0x00ef7d74: jle    0x140ef7da3
0x00ef7d76: data16 nop WORD PTR [rax+rax*1+0x0]
0x00ef7d80: mov    r8d,r10d
0x00ef7d83: shr    r8d,1
0x00ef7d86: lea    edx,[r8+r9*1]
0x00ef7d8a: movsxd rax,edx
0x00ef7d8d: mov    rcx,QWORD PTR [r11+rax*8]
0x00ef7d91: cmp    ebx,DWORD PTR [rcx]
0x00ef7d93: cmovl  edx,r9d
0x00ef7d97: mov    r9d,edx
0x00ef7d9a: sub    r10d,r8d
0x00ef7d9d: cmp    r10d,0x40
0x00ef7da1: jg     0x140ef7d80
0x00ef7da3: lea    eax,[r9+r10*1]
0x00ef7da7: cmp    eax,0xffffffff
0x00ef7daa: je     0x140ef7e99
0x00ef7db0: cmp    r9d,eax
0x00ef7db3: jge    0x140ef7e99
0x00ef7db9: movsxd rcx,r9d
0x00ef7dbc: movsxd rdx,eax
0x00ef7dbf: nop
0x00ef7dc0: mov    rax,QWORD PTR [r11+rcx*8]
0x00ef7dc4: cmp    ebx,DWORD PTR [rax]
0x00ef7dc6: je     0x140ef7dd8
0x00ef7dc8: inc    r9d
0x00ef7dcb: inc    rcx
0x00ef7dce: cmp    rcx,rdx
0x00ef7dd1: jl     0x140ef7dc0
0x00ef7dd3: jmp    0x140ef7e99
0x00ef7dd8: movsxd rax,r9d
0x00ef7ddb: mov    rcx,QWORD PTR [r11+rax*8]
0x00ef7ddf: test   rcx,rcx
0x00ef7de2: je     0x140ef7e99
0x00ef7de8: xorps  xmm0,xmm0
0x00ef7deb: movups XMMWORD PTR [rsp+0x20],xmm0
0x00ef7df0: mov    QWORD PTR [rsp+0x30],0x0
0x00ef7df9: mov    QWORD PTR [rsp+0x38],0xf
0x00ef7e02: mov    BYTE PTR [rsp+0x20],0x0
0x00ef7e07: add    rcx,0x8
0x00ef7e0b: xor    r9d,r9d
0x00ef7e0e: mov    r8b,0x1
0x00ef7e11: lea    rdx,[rsp+0x20]
0x00ef7e16: call   0x140aae180
0x00ef7e1b: lea    rax,[rsp+0x20]
0x00ef7e20: cmp    rdi,rax
0x00ef7e23: je     0x140ef7e43
0x00ef7e25: lea    rdx,[rsp+0x20]
0x00ef7e2a: cmp    QWORD PTR [rsp+0x38],0xf
0x00ef7e30: cmova  rdx,QWORD PTR [rsp+0x20]
0x00ef7e36: mov    r8,QWORD PTR [rsp+0x30]
0x00ef7e3b: mov    rcx,rdi
0x00ef7e3e: call   0x140070f00
0x00ef7e43: mov    r8d,0x12
0x00ef7e49: lea    rdx,[rip+0x861058]        # 0x141758ea8 ; literal=" as a musical form"
0x00ef7e50: mov    rcx,rdi
0x00ef7e53: call   0x140071040
0x00ef7e58: nop
0x00ef7e59: mov    rdx,QWORD PTR [rsp+0x38]
0x00ef7e5e: cmp    rdx,0xf
0x00ef7e62: jbe    0x140ef7e99
0x00ef7e64: inc    rdx
0x00ef7e67: mov    rcx,QWORD PTR [rsp+0x20]
0x00ef7e6c: mov    rax,rcx
0x00ef7e6f: cmp    rdx,0x1000
0x00ef7e76: jb     0x140ef7e94
0x00ef7e78: add    rdx,0x27
0x00ef7e7c: mov    rcx,QWORD PTR [rcx-0x8]
0x00ef7e80: sub    rax,rcx
0x00ef7e83: add    rax,0xfffffffffffffff8
0x00ef7e87: cmp    rax,0x1f
0x00ef7e8b: jbe    0x140ef7e94
0x00ef7e8d: call   QWORD PTR [rip+0x708cad]        # 0x141600b40
0x00ef7e93: int3
0x00ef7e94: call   0x1415530d0
0x00ef7e99: mov    rcx,QWORD PTR [rsp+0x40]
0x00ef7e9e: xor    rcx,rsp
0x00ef7ea1: call   0x1415530b0
0x00ef7ea6: mov    rbx,QWORD PTR [rsp+0x60]
0x00ef7eab: add    rsp,0x50
0x00ef7eaf: pop    rdi
0x00ef7eb0: ret
