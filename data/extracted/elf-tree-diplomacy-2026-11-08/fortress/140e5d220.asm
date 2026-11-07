; Original current disk PE PE:6a70a6d9:02711000
0x140e5d220: rex push rbx
0x140e5d222: sub    rsp,0x20
0x140e5d226: mov    eax,DWORD PTR [rcx+0x13c8]
0x140e5d22c: mov    rbx,rcx
0x140e5d22f: add    DWORD PTR [rcx+0x13cc],eax
0x140e5d235: mov    DWORD PTR [rcx+0x13c8],0x0
0x140e5d23f: call   0x1409159a0
0x140e5d244: test   al,al
0x140e5d246: je     0x140e5d27b
0x140e5d248: mov    edx,DWORD PTR [rip+0x1536422]        # 0x142393670
0x140e5d24e: mov    rcx,rbx
0x140e5d251: call   0x140915c70
0x140e5d256: cmp    eax,0xa
0x140e5d259: jge    0x140e5d26e
0x140e5d25b: mov    edx,DWORD PTR [rip+0x1536417]        # 0x142393678
0x140e5d261: mov    rcx,rbx
0x140e5d264: call   0x140915c70
0x140e5d269: cmp    eax,0xa
0x140e5d26c: jl     0x140e5d27b
0x140e5d26e: mov    rcx,rbx
0x140e5d271: add    rsp,0x20
0x140e5d275: pop    rbx
0x140e5d276: jmp    0x140e5f890
0x140e5d27b: mov    r8,QWORD PTR [rip+0x183e8fe]        # 0x14269bb80
0x140e5d282: xor    edx,edx
0x140e5d284: mov    rcx,QWORD PTR [rip+0x183e8ed]        # 0x14269bb78
0x140e5d28b: sub    r8,rcx
0x140e5d28e: sar    r8,0x3
0x140e5d292: test   r8,r8
0x140e5d295: je     0x140e5d2b8
0x140e5d297: mov    rax,QWORD PTR [rcx]
0x140e5d29a: cmp    WORD PTR [rax],0x2
0x140e5d29e: jne    0x140e5d2aa
0x140e5d2a0: cmp    QWORD PTR [rax+0x8],rbx
0x140e5d2a4: je     0x140e5d3a0
0x140e5d2aa: inc    edx
0x140e5d2ac: add    rcx,0x8
0x140e5d2b0: movsxd rax,edx
0x140e5d2b3: cmp    rax,r8
0x140e5d2b6: jb     0x140e5d297
0x140e5d2b8: mov    edx,DWORD PTR [rip+0x15363b2]        # 0x142393670
0x140e5d2be: mov    rcx,rbx
0x140e5d2c1: call   0x140915c70
0x140e5d2c6: sub    eax,0x14
0x140e5d2c9: cmp    eax,0xa
0x140e5d2cc: jge    0x140e5d3a0
0x140e5d2d2: mov    edx,DWORD PTR [rip+0x15363a0]        # 0x142393678
0x140e5d2d8: mov    rcx,rbx
0x140e5d2db: call   0x140915c70
0x140e5d2e0: sub    eax,0x14
0x140e5d2e3: cmp    eax,0xa
0x140e5d2e6: jge    0x140e5d3a0
0x140e5d2ec: mov    ecx,0x20
0x140e5d2f1: mov    QWORD PTR [rsp+0x38],rdi
0x140e5d2f6: call   0x141539690
0x140e5d2fb: mov    QWORD PTR [rsp+0x30],rax
0x140e5d300: mov    rdi,rax
0x140e5d303: mov    QWORD PTR [rsp+0x30],rdi
0x140e5d308: mov    QWORD PTR [rax+0x8],0x0
0x140e5d310: mov    eax,0xffffffff
0x140e5d315: mov    WORD PTR [rdi+0x10],ax
0x140e5d319: mov    DWORD PTR [rdi+0x14],eax
0x140e5d31c: mov    WORD PTR [rdi],0x2
0x140e5d321: movzx  ecx,BYTE PTR [rip+0xa79be6]        # 0x1418d6f0e
0x140e5d328: mov    BYTE PTR [rdi+0x2],cl
0x140e5d32b: call   0x140eb68b0
0x140e5d330: mov    r8d,eax
0x140e5d333: mov    eax,0x3
0x140e5d338: mul    r8d
0x140e5d33b: mov    ecx,r8d
0x140e5d33e: mov    eax,0x7d1ffd5d
0x140e5d343: sub    ecx,edx
0x140e5d345: shr    ecx,1
0x140e5d347: add    ecx,edx
0x140e5d349: shr    ecx,0x1e
0x140e5d34c: imul   ecx,ecx,0x7fffffff
0x140e5d352: sub    r8d,ecx
0x140e5d355: mul    r8d
0x140e5d358: mov    eax,0x3e8
0x140e5d35d: shr    edx,0x14
0x140e5d360: add    dx,ax
0x140e5d363: mov    WORD PTR [rdi+0x4],dx
0x140e5d367: mov    QWORD PTR [rdi+0x8],rbx
0x140e5d36b: mov    rdx,QWORD PTR [rip+0x183e80e]        # 0x14269bb80
0x140e5d372: cmp    rdx,QWORD PTR [rip+0x183e80f]        # 0x14269bb88
0x140e5d379: je     0x140e5d391
0x140e5d37b: mov    QWORD PTR [rdx],rdi
0x140e5d37e: add    QWORD PTR [rip+0x183e7fa],0x8        # 0x14269bb80
0x140e5d386: mov    rdi,QWORD PTR [rsp+0x38]
0x140e5d38b: add    rsp,0x20
0x140e5d38f: pop    rbx
0x140e5d390: ret
0x140e5d391: lea    r8,[rsp+0x30]
0x140e5d396: call   0x1409e5130
0x140e5d39b: mov    rdi,QWORD PTR [rsp+0x38]
0x140e5d3a0: add    rsp,0x20
0x140e5d3a4: pop    rbx
0x140e5d3a5: ret
