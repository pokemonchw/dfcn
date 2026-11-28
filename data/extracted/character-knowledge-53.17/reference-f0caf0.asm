; reference PE:6aea05a1:02734000; reference-description:general_ref_creaturest; RVA 0xf0caf0..0xf0cba6; code ends 0xf0cba6
0x00f0caf0: mov    QWORD PTR [rsp+0x8],rbx
0x00f0caf5: push   rdi
0x00f0caf6: sub    rsp,0x30
0x00f0cafa: mov    QWORD PTR [rdx+0x10],0x0
0x00f0cb02: mov    rbx,rdx
0x00f0cb05: cmp    QWORD PTR [rdx+0x18],0xf
0x00f0cb0a: mov    rdi,rcx
0x00f0cb0d: mov    rax,rdx
0x00f0cb10: jbe    0x140f0cb15
0x00f0cb12: mov    rax,QWORD PTR [rdx]
0x00f0cb15: mov    r8d,0x2
0x00f0cb1b: mov    BYTE PTR [rax],0x0
0x00f0cb1e: lea    rdx,[rip+0x6fbd7b]        # 0x1416088a0 ; literal="a "
0x00f0cb25: mov    rcx,rbx
0x00f0cb28: call   0x140070f00
0x00f0cb2d: test   BYTE PTR [rdi+0x18],0x2
0x00f0cb31: je     0x140f0cb48
0x00f0cb33: mov    r8d,0x8
0x00f0cb39: lea    rdx,[rip+0x70cdf0]        # 0x141619930 ; literal="ghostly "
0x00f0cb40: mov    rcx,rbx
0x00f0cb43: call   0x140071040
0x00f0cb48: test   BYTE PTR [rdi+0x18],0x1
0x00f0cb4c: je     0x140f0cb63
0x00f0cb4e: mov    r8d,0x9
0x00f0cb54: lea    rdx,[rip+0x7f1ecd]        # 0x1416fea28 ; literal="animated "
0x00f0cb5b: mov    rcx,rbx
0x00f0cb5e: call   0x140071040
0x00f0cb63: movzx  eax,WORD PTR [rdi+0xc]
0x00f0cb67: xor    r9d,r9d
0x00f0cb6a: mov    r8d,DWORD PTR [rdi+0x8]
0x00f0cb6e: mov    rdx,rbx
0x00f0cb71: mov    BYTE PTR [rsp+0x28],0x0
0x00f0cb76: mov    WORD PTR [rsp+0x20],ax
0x00f0cb7b: call   0x140bacb90
0x00f0cb80: test   BYTE PTR [rdi+0x18],0x1
0x00f0cb84: je     0x140f0cb9b
0x00f0cb86: mov    r8d,0x7
0x00f0cb8c: lea    rdx,[rip+0x85340d]        # 0x14175ffa0 ; literal=" corpse"
0x00f0cb93: mov    rcx,rbx
0x00f0cb96: call   0x140071040
0x00f0cb9b: mov    rbx,QWORD PTR [rsp+0x40]
0x00f0cba0: add    rsp,0x30
0x00f0cba4: pop    rdi
0x00f0cba5: ret
