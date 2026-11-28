; classic PE:6aea11a5:0272d000; reference-description:general_ref_musical_formst; RVA 0xef2a80..0xef2c01; code ends 0xef2c01
0x00ef2a80: mov    QWORD PTR [rsp+0x8],rbx
0x00ef2a85: push   rdi
0x00ef2a86: sub    rsp,0x50
0x00ef2a8a: mov    rax,QWORD PTR [rip+0x9c55af]        # 0x1418b8040
0x00ef2a91: xor    rax,rsp
0x00ef2a94: mov    QWORD PTR [rsp+0x40],rax
0x00ef2a99: mov    rdi,rdx
0x00ef2a9c: mov    ebx,DWORD PTR [rcx+0x8]
0x00ef2a9f: mov    r11,QWORD PTR [rip+0x16117d2]        # 0x142504278
0x00ef2aa6: mov    r10,QWORD PTR [rip+0x16117d3]        # 0x142504280
0x00ef2aad: sub    r10,r11
0x00ef2ab0: sar    r10,0x3
0x00ef2ab4: test   r10d,r10d
0x00ef2ab7: je     0x140ef2be9
0x00ef2abd: xor    r9d,r9d
0x00ef2ac0: cmp    r10d,0x40
0x00ef2ac4: jle    0x140ef2af3
0x00ef2ac6: data16 nop WORD PTR [rax+rax*1+0x0]
0x00ef2ad0: mov    r8d,r10d
0x00ef2ad3: shr    r8d,1
0x00ef2ad6: lea    edx,[r8+r9*1]
0x00ef2ada: movsxd rax,edx
0x00ef2add: mov    rcx,QWORD PTR [r11+rax*8]
0x00ef2ae1: cmp    ebx,DWORD PTR [rcx]
0x00ef2ae3: cmovl  edx,r9d
0x00ef2ae7: mov    r9d,edx
0x00ef2aea: sub    r10d,r8d
0x00ef2aed: cmp    r10d,0x40
0x00ef2af1: jg     0x140ef2ad0
0x00ef2af3: lea    eax,[r9+r10*1]
0x00ef2af7: cmp    eax,0xffffffff
0x00ef2afa: je     0x140ef2be9
0x00ef2b00: cmp    r9d,eax
0x00ef2b03: jge    0x140ef2be9
0x00ef2b09: movsxd rcx,r9d
0x00ef2b0c: movsxd rdx,eax
0x00ef2b0f: nop
0x00ef2b10: mov    rax,QWORD PTR [r11+rcx*8]
0x00ef2b14: cmp    ebx,DWORD PTR [rax]
0x00ef2b16: je     0x140ef2b28
0x00ef2b18: inc    r9d
0x00ef2b1b: inc    rcx
0x00ef2b1e: cmp    rcx,rdx
0x00ef2b21: jl     0x140ef2b10
0x00ef2b23: jmp    0x140ef2be9
0x00ef2b28: movsxd rax,r9d
0x00ef2b2b: mov    rcx,QWORD PTR [r11+rax*8]
0x00ef2b2f: test   rcx,rcx
0x00ef2b32: je     0x140ef2be9
0x00ef2b38: xorps  xmm0,xmm0
0x00ef2b3b: movups XMMWORD PTR [rsp+0x20],xmm0
0x00ef2b40: mov    QWORD PTR [rsp+0x30],0x0
0x00ef2b49: mov    QWORD PTR [rsp+0x38],0xf
0x00ef2b52: mov    BYTE PTR [rsp+0x20],0x0
0x00ef2b57: add    rcx,0x8
0x00ef2b5b: xor    r9d,r9d
0x00ef2b5e: mov    r8b,0x1
0x00ef2b61: lea    rdx,[rsp+0x20]
0x00ef2b66: call   0x140aaafe0
0x00ef2b6b: lea    rax,[rsp+0x20]
0x00ef2b70: cmp    rdi,rax
0x00ef2b73: je     0x140ef2b93
0x00ef2b75: lea    rdx,[rsp+0x20]
0x00ef2b7a: cmp    QWORD PTR [rsp+0x38],0xf
0x00ef2b80: cmova  rdx,QWORD PTR [rsp+0x20]
0x00ef2b86: mov    r8,QWORD PTR [rsp+0x30]
0x00ef2b8b: mov    rcx,rdi
0x00ef2b8e: call   0x140070e90
0x00ef2b93: mov    r8d,0x12
0x00ef2b99: lea    rdx,[rip+0x860530]        # 0x1417530d0 ; literal=" as a musical form"
0x00ef2ba0: mov    rcx,rdi
0x00ef2ba3: call   0x140070fd0
0x00ef2ba8: nop
0x00ef2ba9: mov    rdx,QWORD PTR [rsp+0x38]
0x00ef2bae: cmp    rdx,0xf
0x00ef2bb2: jbe    0x140ef2be9
0x00ef2bb4: inc    rdx
0x00ef2bb7: mov    rcx,QWORD PTR [rsp+0x20]
0x00ef2bbc: mov    rax,rcx
0x00ef2bbf: cmp    rdx,0x1000
0x00ef2bc6: jb     0x140ef2be4
0x00ef2bc8: add    rdx,0x27
0x00ef2bcc: mov    rcx,QWORD PTR [rcx-0x8]
0x00ef2bd0: sub    rax,rcx
0x00ef2bd3: add    rax,0xfffffffffffffff8
0x00ef2bd7: cmp    rax,0x1f
0x00ef2bdb: jbe    0x140ef2be4
0x00ef2bdd: call   QWORD PTR [rip+0x708ee5]        # 0x1415fbac8
0x00ef2be3: int3
0x00ef2be4: call   0x14154de20
0x00ef2be9: mov    rcx,QWORD PTR [rsp+0x40]
0x00ef2bee: xor    rcx,rsp
0x00ef2bf1: call   0x14154de00
0x00ef2bf6: mov    rbx,QWORD PTR [rsp+0x60]
0x00ef2bfb: add    rsp,0x50
0x00ef2bff: pop    rdi
0x00ef2c00: ret
