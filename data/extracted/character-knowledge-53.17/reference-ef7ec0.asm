; reference PE:6aea05a1:02734000; reference-description:general_ref_dance_formst; RVA 0xef7ec0..0xef8041; code ends 0xef8041
0x00ef7ec0: mov    QWORD PTR [rsp+0x8],rbx
0x00ef7ec5: push   rdi
0x00ef7ec6: sub    rsp,0x50
0x00ef7eca: mov    rax,QWORD PTR [rip+0x9c616f]        # 0x1418be040
0x00ef7ed1: xor    rax,rsp
0x00ef7ed4: mov    QWORD PTR [rsp+0x40],rax
0x00ef7ed9: mov    rdi,rdx
0x00ef7edc: mov    ebx,DWORD PTR [rcx+0x8]
0x00ef7edf: mov    r11,QWORD PTR [rip+0x16124c2]        # 0x14250a3a8
0x00ef7ee6: mov    r10,QWORD PTR [rip+0x16124c3]        # 0x14250a3b0
0x00ef7eed: sub    r10,r11
0x00ef7ef0: sar    r10,0x3
0x00ef7ef4: test   r10d,r10d
0x00ef7ef7: je     0x140ef8029
0x00ef7efd: xor    r9d,r9d
0x00ef7f00: cmp    r10d,0x40
0x00ef7f04: jle    0x140ef7f33
0x00ef7f06: data16 nop WORD PTR [rax+rax*1+0x0]
0x00ef7f10: mov    r8d,r10d
0x00ef7f13: shr    r8d,1
0x00ef7f16: lea    edx,[r8+r9*1]
0x00ef7f1a: movsxd rax,edx
0x00ef7f1d: mov    rcx,QWORD PTR [r11+rax*8]
0x00ef7f21: cmp    ebx,DWORD PTR [rcx]
0x00ef7f23: cmovl  edx,r9d
0x00ef7f27: mov    r9d,edx
0x00ef7f2a: sub    r10d,r8d
0x00ef7f2d: cmp    r10d,0x40
0x00ef7f31: jg     0x140ef7f10
0x00ef7f33: lea    eax,[r9+r10*1]
0x00ef7f37: cmp    eax,0xffffffff
0x00ef7f3a: je     0x140ef8029
0x00ef7f40: cmp    r9d,eax
0x00ef7f43: jge    0x140ef8029
0x00ef7f49: movsxd rcx,r9d
0x00ef7f4c: movsxd rdx,eax
0x00ef7f4f: nop
0x00ef7f50: mov    rax,QWORD PTR [r11+rcx*8]
0x00ef7f54: cmp    ebx,DWORD PTR [rax]
0x00ef7f56: je     0x140ef7f68
0x00ef7f58: inc    r9d
0x00ef7f5b: inc    rcx
0x00ef7f5e: cmp    rcx,rdx
0x00ef7f61: jl     0x140ef7f50
0x00ef7f63: jmp    0x140ef8029
0x00ef7f68: movsxd rax,r9d
0x00ef7f6b: mov    rcx,QWORD PTR [r11+rax*8]
0x00ef7f6f: test   rcx,rcx
0x00ef7f72: je     0x140ef8029
0x00ef7f78: xorps  xmm0,xmm0
0x00ef7f7b: movups XMMWORD PTR [rsp+0x20],xmm0
0x00ef7f80: mov    QWORD PTR [rsp+0x30],0x0
0x00ef7f89: mov    QWORD PTR [rsp+0x38],0xf
0x00ef7f92: mov    BYTE PTR [rsp+0x20],0x0
0x00ef7f97: add    rcx,0x8
0x00ef7f9b: xor    r9d,r9d
0x00ef7f9e: mov    r8b,0x1
0x00ef7fa1: lea    rdx,[rsp+0x20]
0x00ef7fa6: call   0x140aae180
0x00ef7fab: lea    rax,[rsp+0x20]
0x00ef7fb0: cmp    rdi,rax
0x00ef7fb3: je     0x140ef7fd3
0x00ef7fb5: lea    rdx,[rsp+0x20]
0x00ef7fba: cmp    QWORD PTR [rsp+0x38],0xf
0x00ef7fc0: cmova  rdx,QWORD PTR [rsp+0x20]
0x00ef7fc6: mov    r8,QWORD PTR [rsp+0x30]
0x00ef7fcb: mov    rcx,rdi
0x00ef7fce: call   0x140070f00
0x00ef7fd3: mov    r8d,0x10
0x00ef7fd9: lea    rdx,[rip+0x860ee0]        # 0x141758ec0 ; literal=" as a dance form"
0x00ef7fe0: mov    rcx,rdi
0x00ef7fe3: call   0x140071040
0x00ef7fe8: nop
0x00ef7fe9: mov    rdx,QWORD PTR [rsp+0x38]
0x00ef7fee: cmp    rdx,0xf
0x00ef7ff2: jbe    0x140ef8029
0x00ef7ff4: inc    rdx
0x00ef7ff7: mov    rcx,QWORD PTR [rsp+0x20]
0x00ef7ffc: mov    rax,rcx
0x00ef7fff: cmp    rdx,0x1000
0x00ef8006: jb     0x140ef8024
0x00ef8008: add    rdx,0x27
0x00ef800c: mov    rcx,QWORD PTR [rcx-0x8]
0x00ef8010: sub    rax,rcx
0x00ef8013: add    rax,0xfffffffffffffff8
0x00ef8017: cmp    rax,0x1f
0x00ef801b: jbe    0x140ef8024
0x00ef801d: call   QWORD PTR [rip+0x708b1d]        # 0x141600b40
0x00ef8023: int3
0x00ef8024: call   0x1415530d0
0x00ef8029: mov    rcx,QWORD PTR [rsp+0x40]
0x00ef802e: xor    rcx,rsp
0x00ef8031: call   0x1415530b0
0x00ef8036: mov    rbx,QWORD PTR [rsp+0x60]
0x00ef803b: add    rsp,0x50
0x00ef803f: pop    rdi
0x00ef8040: ret
