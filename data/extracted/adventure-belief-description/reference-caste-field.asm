# reference PE:6a70a6d9:02711000; caste-field; RVA 0xaa3770..0xaa3868
0x00aa3770: rex push rdi
0x00aa3772: sub    rsp,0x20
0x00aa3776: mov    QWORD PTR [rdx+0x10],0x0
0x00aa377e: mov    rdi,rdx
0x00aa3781: cmp    QWORD PTR [rdx+0x18],0xf
0x00aa3786: mov    rax,rdx
0x00aa3789: movsx  r10,r8w
0x00aa378d: jbe    0x140aa3792
0x00aa378f: mov    rax,QWORD PTR [rdx]
0x00aa3792: mov    BYTE PTR [rax],0x0
0x00aa3795: mov    r8,QWORD PTR [rip+0x1a492d4]        # 0x1424eca70
0x00aa379c: mov    r9,QWORD PTR [rip+0x1a492c5]        # 0x1424eca68
0x00aa37a3: mov    QWORD PTR [rsp+0x30],rbx
0x00aa37a8: movsx  rbx,cx
0x00aa37ac: cmp    r10w,0xffff
0x00aa37b1: je     0x140aa3829
0x00aa37b3: test   cx,cx
0x00aa37b6: js     0x140aa385d
0x00aa37bc: mov    rax,r8
0x00aa37bf: sub    rax,r9
0x00aa37c2: sar    rax,0x3
0x00aa37c6: cmp    rbx,rax
0x00aa37c9: jae    0x140aa3829
0x00aa37cb: test   r10w,r10w
0x00aa37cf: js     0x140aa382e
0x00aa37d1: mov    rax,QWORD PTR [r9+rbx*8]
0x00aa37d5: mov    rdx,QWORD PTR [rax+0x178]
0x00aa37dc: mov    rax,QWORD PTR [rax+0x180]
0x00aa37e3: sub    rax,rdx
0x00aa37e6: sar    rax,0x3
0x00aa37ea: cmp    r10,rax
0x00aa37ed: jae    0x140aa382e
0x00aa37ef: mov    rdx,QWORD PTR [rdx+r10*8]
0x00aa37f3: add    rdx,0x60
0x00aa37f7: cmp    rdi,rdx
0x00aa37fa: je     0x140aa3820
0x00aa37fc: cmp    QWORD PTR [rdx+0x18],0xf
0x00aa3801: mov    r8,QWORD PTR [rdx+0x10]
0x00aa3805: jbe    0x140aa380a
0x00aa3807: mov    rdx,QWORD PTR [rdx]
0x00aa380a: mov    rcx,rdi
0x00aa380d: call   0x14006f8d0
0x00aa3812: mov    r8,QWORD PTR [rip+0x1a49257]        # 0x1424eca70
0x00aa3819: mov    r9,QWORD PTR [rip+0x1a49248]        # 0x1424eca68
0x00aa3820: cmp    QWORD PTR [rdi+0x10],0x0
0x00aa3825: ja     0x140aa385d
0x00aa3827: jmp    0x140aa382e
0x00aa3829: test   cx,cx
0x00aa382c: js     0x140aa385d
0x00aa382e: sub    r8,r9
0x00aa3831: sar    r8,0x3
0x00aa3835: cmp    rbx,r8
0x00aa3838: jae    0x140aa385d
0x00aa383a: mov    rdx,QWORD PTR [r9+rbx*8]
0x00aa383e: add    rdx,0x60
0x00aa3842: cmp    rdi,rdx
0x00aa3845: je     0x140aa385d
0x00aa3847: cmp    QWORD PTR [rdx+0x18],0xf
0x00aa384c: mov    r8,QWORD PTR [rdx+0x10]
0x00aa3850: jbe    0x140aa3855
0x00aa3852: mov    rdx,QWORD PTR [rdx]
0x00aa3855: mov    rcx,rdi
0x00aa3858: call   0x14006f8d0
0x00aa385d: mov    rbx,QWORD PTR [rsp+0x30]
0x00aa3862: add    rsp,0x20
0x00aa3866: pop    rdi
0x00aa3867: ret
