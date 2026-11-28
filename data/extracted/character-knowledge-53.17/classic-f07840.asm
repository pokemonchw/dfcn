; classic PE:6aea11a5:0272d000; reference-description:general_ref_creaturest; RVA 0xf07840..0xf078f6; code ends 0xf078f6
0x00f07840: mov    QWORD PTR [rsp+0x8],rbx
0x00f07845: push   rdi
0x00f07846: sub    rsp,0x30
0x00f0784a: mov    QWORD PTR [rdx+0x10],0x0
0x00f07852: mov    rbx,rdx
0x00f07855: cmp    QWORD PTR [rdx+0x18],0xf
0x00f0785a: mov    rdi,rcx
0x00f0785d: mov    rax,rdx
0x00f07860: jbe    0x140f07865
0x00f07862: mov    rax,QWORD PTR [rdx]
0x00f07865: mov    r8d,0x2
0x00f0786b: mov    BYTE PTR [rax],0x0
0x00f0786e: lea    rdx,[rip+0x6fc013]        # 0x141603888 ; literal="a "
0x00f07875: mov    rcx,rbx
0x00f07878: call   0x140070e90
0x00f0787d: test   BYTE PTR [rdi+0x18],0x2
0x00f07881: je     0x140f07898
0x00f07883: mov    r8d,0x8
0x00f07889: lea    rdx,[rip+0x70cfc0]        # 0x141614850 ; literal="ghostly "
0x00f07890: mov    rcx,rbx
0x00f07893: call   0x140070fd0
0x00f07898: test   BYTE PTR [rdi+0x18],0x1
0x00f0789c: je     0x140f078b3
0x00f0789e: mov    r8d,0x9
0x00f078a4: lea    rdx,[rip+0x7f1f65]        # 0x1416f9810 ; literal="animated "
0x00f078ab: mov    rcx,rbx
0x00f078ae: call   0x140070fd0
0x00f078b3: movzx  eax,WORD PTR [rdi+0xc]
0x00f078b7: xor    r9d,r9d
0x00f078ba: mov    r8d,DWORD PTR [rdi+0x8]
0x00f078be: mov    rdx,rbx
0x00f078c1: mov    BYTE PTR [rsp+0x28],0x0
0x00f078c6: mov    WORD PTR [rsp+0x20],ax
0x00f078cb: call   0x140ba99b0
0x00f078d0: test   BYTE PTR [rdi+0x18],0x1
0x00f078d4: je     0x140f078eb
0x00f078d6: mov    r8d,0x7
0x00f078dc: lea    rdx,[rip+0x852245]        # 0x141759b28 ; literal=" corpse"
0x00f078e3: mov    rcx,rbx
0x00f078e6: call   0x140070fd0
0x00f078eb: mov    rbx,QWORD PTR [rsp+0x40]
0x00f078f0: add    rsp,0x30
0x00f078f4: pop    rdi
0x00f078f5: ret
