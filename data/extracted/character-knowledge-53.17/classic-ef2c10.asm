; classic PE:6aea11a5:0272d000; reference-description:general_ref_dance_formst; RVA 0xef2c10..0xef2d91; code ends 0xef2d91
0x00ef2c10: mov    QWORD PTR [rsp+0x8],rbx
0x00ef2c15: push   rdi
0x00ef2c16: sub    rsp,0x50
0x00ef2c1a: mov    rax,QWORD PTR [rip+0x9c541f]        # 0x1418b8040
0x00ef2c21: xor    rax,rsp
0x00ef2c24: mov    QWORD PTR [rsp+0x40],rax
0x00ef2c29: mov    rdi,rdx
0x00ef2c2c: mov    ebx,DWORD PTR [rcx+0x8]
0x00ef2c2f: mov    r11,QWORD PTR [rip+0x1611672]        # 0x1425042a8
0x00ef2c36: mov    r10,QWORD PTR [rip+0x1611673]        # 0x1425042b0
0x00ef2c3d: sub    r10,r11
0x00ef2c40: sar    r10,0x3
0x00ef2c44: test   r10d,r10d
0x00ef2c47: je     0x140ef2d79
0x00ef2c4d: xor    r9d,r9d
0x00ef2c50: cmp    r10d,0x40
0x00ef2c54: jle    0x140ef2c83
0x00ef2c56: data16 nop WORD PTR [rax+rax*1+0x0]
0x00ef2c60: mov    r8d,r10d
0x00ef2c63: shr    r8d,1
0x00ef2c66: lea    edx,[r8+r9*1]
0x00ef2c6a: movsxd rax,edx
0x00ef2c6d: mov    rcx,QWORD PTR [r11+rax*8]
0x00ef2c71: cmp    ebx,DWORD PTR [rcx]
0x00ef2c73: cmovl  edx,r9d
0x00ef2c77: mov    r9d,edx
0x00ef2c7a: sub    r10d,r8d
0x00ef2c7d: cmp    r10d,0x40
0x00ef2c81: jg     0x140ef2c60
0x00ef2c83: lea    eax,[r9+r10*1]
0x00ef2c87: cmp    eax,0xffffffff
0x00ef2c8a: je     0x140ef2d79
0x00ef2c90: cmp    r9d,eax
0x00ef2c93: jge    0x140ef2d79
0x00ef2c99: movsxd rcx,r9d
0x00ef2c9c: movsxd rdx,eax
0x00ef2c9f: nop
0x00ef2ca0: mov    rax,QWORD PTR [r11+rcx*8]
0x00ef2ca4: cmp    ebx,DWORD PTR [rax]
0x00ef2ca6: je     0x140ef2cb8
0x00ef2ca8: inc    r9d
0x00ef2cab: inc    rcx
0x00ef2cae: cmp    rcx,rdx
0x00ef2cb1: jl     0x140ef2ca0
0x00ef2cb3: jmp    0x140ef2d79
0x00ef2cb8: movsxd rax,r9d
0x00ef2cbb: mov    rcx,QWORD PTR [r11+rax*8]
0x00ef2cbf: test   rcx,rcx
0x00ef2cc2: je     0x140ef2d79
0x00ef2cc8: xorps  xmm0,xmm0
0x00ef2ccb: movups XMMWORD PTR [rsp+0x20],xmm0
0x00ef2cd0: mov    QWORD PTR [rsp+0x30],0x0
0x00ef2cd9: mov    QWORD PTR [rsp+0x38],0xf
0x00ef2ce2: mov    BYTE PTR [rsp+0x20],0x0
0x00ef2ce7: add    rcx,0x8
0x00ef2ceb: xor    r9d,r9d
0x00ef2cee: mov    r8b,0x1
0x00ef2cf1: lea    rdx,[rsp+0x20]
0x00ef2cf6: call   0x140aaafe0
0x00ef2cfb: lea    rax,[rsp+0x20]
0x00ef2d00: cmp    rdi,rax
0x00ef2d03: je     0x140ef2d23
0x00ef2d05: lea    rdx,[rsp+0x20]
0x00ef2d0a: cmp    QWORD PTR [rsp+0x38],0xf
0x00ef2d10: cmova  rdx,QWORD PTR [rsp+0x20]
0x00ef2d16: mov    r8,QWORD PTR [rsp+0x30]
0x00ef2d1b: mov    rcx,rdi
0x00ef2d1e: call   0x140070e90
0x00ef2d23: mov    r8d,0x10
0x00ef2d29: lea    rdx,[rip+0x860360]        # 0x141753090 ; literal=" as a dance form"
0x00ef2d30: mov    rcx,rdi
0x00ef2d33: call   0x140070fd0
0x00ef2d38: nop
0x00ef2d39: mov    rdx,QWORD PTR [rsp+0x38]
0x00ef2d3e: cmp    rdx,0xf
0x00ef2d42: jbe    0x140ef2d79
0x00ef2d44: inc    rdx
0x00ef2d47: mov    rcx,QWORD PTR [rsp+0x20]
0x00ef2d4c: mov    rax,rcx
0x00ef2d4f: cmp    rdx,0x1000
0x00ef2d56: jb     0x140ef2d74
0x00ef2d58: add    rdx,0x27
0x00ef2d5c: mov    rcx,QWORD PTR [rcx-0x8]
0x00ef2d60: sub    rax,rcx
0x00ef2d63: add    rax,0xfffffffffffffff8
0x00ef2d67: cmp    rax,0x1f
0x00ef2d6b: jbe    0x140ef2d74
0x00ef2d6d: call   QWORD PTR [rip+0x708d55]        # 0x1415fbac8
0x00ef2d73: int3
0x00ef2d74: call   0x14154de20
0x00ef2d79: mov    rcx,QWORD PTR [rsp+0x40]
0x00ef2d7e: xor    rcx,rsp
0x00ef2d81: call   0x14154de00
0x00ef2d86: mov    rbx,QWORD PTR [rsp+0x60]
0x00ef2d8b: add    rsp,0x50
0x00ef2d8f: pop    rdi
0x00ef2d90: ret
