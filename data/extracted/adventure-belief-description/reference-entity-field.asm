# reference PE:6a70a6d9:02711000; entity-field; RVA 0xb92900..0xb92a78
0x00b92900: mov    QWORD PTR [rsp+0x8],rbx
0x00b92905: mov    QWORD PTR [rsp+0x20],rsi
0x00b9290a: push   rdi
0x00b9290b: sub    rsp,0x50
0x00b9290f: mov    rax,QWORD PTR [rip+0xd0972a]        # 0x14189c040
0x00b92916: xor    rax,rsp
0x00b92919: mov    QWORD PTR [rsp+0x40],rax
0x00b9291e: mov    esi,r9d
0x00b92921: mov    rbx,rdx
0x00b92924: mov    rax,QWORD PTR [rip+0x183eed5]        # 0x1423d1800
0x00b9292b: sub    rax,QWORD PTR [rip+0x183eec6]        # 0x1423d17f8
0x00b92932: test   rax,0xfffffffffffffff8
0x00b92938: je     0x140b92954
0x00b9293a: cmp    r8d,0xffffffff
0x00b9293e: je     0x140b92954
0x00b92940: lea    rdx,[rip+0x183eeb1]        # 0x1423d17f8
0x00b92947: mov    ecx,r8d
0x00b9294a: call   0x1400ba0a0
0x00b9294f: mov    rdi,rax
0x00b92952: jmp    0x140b92956
0x00b92954: xor    edi,edi
0x00b92956: test   rdi,rdi
0x00b92959: je     0x140b92a46
0x00b9295f: and    esi,0x2
0x00b92962: je     0x140b92999
0x00b92964: mov    r8d,0xb
0x00b9296a: lea    rdx,[rip+0xacbac7]        # 0x14165e438 ; literal="[LPAGE:ENT:"
0x00b92971: mov    rcx,rbx
0x00b92974: call   0x14006fa10
0x00b92979: mov    rdx,rbx
0x00b9297c: mov    ecx,DWORD PTR [rdi+0x4]
0x00b9297f: call   0x14052c130
0x00b92984: mov    r8d,0x1
0x00b9298a: lea    rdx,[rip+0xa6acff]        # 0x1415fd690 ; literal="]"
0x00b92991: mov    rcx,rbx
0x00b92994: call   0x14006fa10
0x00b92999: xorps  xmm0,xmm0
0x00b9299c: movups XMMWORD PTR [rsp+0x20],xmm0
0x00b929a1: mov    QWORD PTR [rsp+0x30],0x0
0x00b929aa: mov    QWORD PTR [rsp+0x38],0xf
0x00b929b3: mov    BYTE PTR [rsp+0x20],0x0
0x00b929b8: lea    rcx,[rdi+0x20]
0x00b929bc: xor    r9d,r9d
0x00b929bf: mov    r8b,0x1
0x00b929c2: lea    rdx,[rsp+0x20]
0x00b929c7: call   0x140a946e0
0x00b929cc: lea    rdx,[rsp+0x20]
0x00b929d1: cmp    QWORD PTR [rsp+0x38],0xf
0x00b929d7: cmova  rdx,QWORD PTR [rsp+0x20]
0x00b929dd: mov    r8,QWORD PTR [rsp+0x30]
0x00b929e2: mov    rcx,rbx
0x00b929e5: call   0x14006fa10
0x00b929ea: test   esi,esi
0x00b929ec: je     0x140b92a04
0x00b929ee: mov    r8d,0x8
0x00b929f4: lea    rdx,[rip+0xa6b08d]        # 0x1415fda88 ; literal="[/LPAGE]"
0x00b929fb: mov    rcx,rbx
0x00b929fe: call   0x14006fa10
0x00b92a03: nop
0x00b92a04: mov    rdx,QWORD PTR [rsp+0x38]
0x00b92a09: cmp    rdx,0xf
0x00b92a0d: jbe    0x140b92a5b
0x00b92a0f: inc    rdx
0x00b92a12: mov    rcx,QWORD PTR [rsp+0x20]
0x00b92a17: mov    rax,rcx
0x00b92a1a: cmp    rdx,0x1000
0x00b92a21: jb     0x140b92a3f
0x00b92a23: add    rdx,0x27
0x00b92a27: mov    rcx,QWORD PTR [rcx-0x8]
0x00b92a2b: sub    rax,rcx
0x00b92a2e: add    rax,0xfffffffffffffff8
0x00b92a32: cmp    rax,0x1f
0x00b92a36: jbe    0x140b92a3f
0x00b92a38: call   QWORD PTR [rip+0xa530ea]        # 0x1415e5b28
0x00b92a3e: int3
0x00b92a3f: call   0x141539680
0x00b92a44: jmp    0x140b92a5b
0x00b92a46: mov    r8d,0x17
0x00b92a4c: lea    rdx,[rip+0xb4ceed]        # 0x1416df940 ; literal="an unknown civilization"
0x00b92a53: mov    rcx,rbx
0x00b92a56: call   0x14006fa10
0x00b92a5b: mov    rcx,QWORD PTR [rsp+0x40]
0x00b92a60: xor    rcx,rsp
0x00b92a63: call   0x141539660
0x00b92a68: mov    rbx,QWORD PTR [rsp+0x60]
0x00b92a6d: mov    rsi,QWORD PTR [rsp+0x78]
0x00b92a72: add    rsp,0x50
0x00b92a76: pop    rdi
0x00b92a77: ret
