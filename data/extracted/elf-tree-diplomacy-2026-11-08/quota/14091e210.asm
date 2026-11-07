; Original disk PE PE:6a70a6d9:02711000; D:\program\steam\steamapps\common\Dwarf Fortress\Dwarf Fortress.exe; VA 0x14091e210..0x14091e3c0
0x14091e210: mov    QWORD PTR [rsp+0x18],rbx
0x14091e215: mov    QWORD PTR [rsp+0x20],rsi
0x14091e21a: push   r14
0x14091e21c: sub    rsp,0x20
0x14091e220: movsxd rax,edx
0x14091e223: mov    rsi,rcx
0x14091e226: mov    rbx,r8
0x14091e229: lea    r14,[rax*8+0x0]
0x14091e231: mov    rax,QWORD PTR [rcx+0x1398]
0x14091e238: mov    rcx,QWORD PTR [r14+rax*1]
0x14091e23c: cmp    WORD PTR [rcx],0x0
0x14091e240: jne    0x14091e3af
0x14091e246: cmp    WORD PTR [rcx+0x2],0x2
0x14091e24b: jne    0x14091e3af
0x14091e251: mov    eax,DWORD PTR [rcx+0x38]
0x14091e254: mov    edx,eax
0x14091e256: mov    ecx,DWORD PTR [rcx+0x3c]
0x14091e259: sar    edx,1
0x14091e25b: mov    QWORD PTR [rsp+0x30],rdi
0x14091e260: cmp    ecx,edx
0x14091e262: jl     0x14091e26b
0x14091e264: mov    edi,0x2
0x14091e269: jmp    0x14091e2a2
0x14091e26b: sar    eax,0x2
0x14091e26e: cmp    ecx,eax
0x14091e270: jl     0x14091e279
0x14091e272: mov    edi,0x1
0x14091e277: jmp    0x14091e2a2
0x14091e279: test   ecx,ecx
0x14091e27b: js     0x14091e281
0x14091e27d: xor    edi,edi
0x14091e27f: jmp    0x14091e2a2
0x14091e281: neg    eax
0x14091e283: cmp    ecx,eax
0x14091e285: jl     0x14091e28e
0x14091e287: mov    edi,0xffffffff
0x14091e28c: jmp    0x14091e2a2
0x14091e28e: neg    edx
0x14091e290: mov    edi,0xfffffffd
0x14091e295: cmp    ecx,edx
0x14091e297: mov    r8d,0xfffffffe
0x14091e29d: cmovge di,r8w
0x14091e2a2: mov    rdx,QWORD PTR [rbx+0xe0]
0x14091e2a9: lea    rcx,[rbx+0xd8]
0x14091e2b0: lea    r8,[rsi+0x4]
0x14091e2b4: cmp    rdx,QWORD PTR [rbx+0xe8]
0x14091e2bb: je     0x14091e2cc
0x14091e2bd: mov    eax,DWORD PTR [r8]
0x14091e2c0: mov    DWORD PTR [rdx],eax
0x14091e2c2: add    QWORD PTR [rbx+0xe0],0x4
0x14091e2ca: jmp    0x14091e2d1
0x14091e2cc: call   0x140070e20
0x14091e2d1: mov    rax,QWORD PTR [rsi+0x1398]
0x14091e2d8: lea    rcx,[rbx+0xf0]
0x14091e2df: mov    rdx,QWORD PTR [rbx+0xf8]
0x14091e2e6: mov    r8,QWORD PTR [r14+rax*1]
0x14091e2ea: add    r8,0x2
0x14091e2ee: cmp    rdx,QWORD PTR [rbx+0x100]
0x14091e2f5: je     0x14091e308
0x14091e2f7: movzx  eax,WORD PTR [r8]
0x14091e2fb: mov    WORD PTR [rdx],ax
0x14091e2fe: add    QWORD PTR [rbx+0xf8],0x2
0x14091e306: jmp    0x14091e30d
0x14091e308: call   0x140071040
0x14091e30d: mov    rdx,QWORD PTR [rbx+0x110]
0x14091e314: lea    rcx,[rbx+0x108]
0x14091e31b: cmp    rdx,QWORD PTR [rbx+0x118]
0x14091e322: je     0x14091e336
0x14091e324: mov    eax,DWORD PTR [rip+0x1a563ca]        # 0x1423746f4
0x14091e32a: mov    DWORD PTR [rdx],eax
0x14091e32c: add    QWORD PTR [rbx+0x110],0x4
0x14091e334: jmp    0x14091e342
0x14091e336: lea    r8,[rip+0x1a563b7]        # 0x1423746f4
0x14091e33d: call   0x140070e20
0x14091e342: mov    rdx,QWORD PTR [rbx+0x128]
0x14091e349: lea    rcx,[rbx+0x120]
0x14091e350: cmp    rdx,QWORD PTR [rbx+0x130]
0x14091e357: je     0x14091e36b
0x14091e359: mov    eax,DWORD PTR [rip+0x1a69c65]        # 0x142387fc4
0x14091e35f: mov    DWORD PTR [rdx],eax
0x14091e361: add    QWORD PTR [rbx+0x128],0x4
0x14091e369: jmp    0x14091e377
0x14091e36b: lea    r8,[rip+0x1a69c52]        # 0x142387fc4
0x14091e372: call   0x140070e20
0x14091e377: mov    rdx,QWORD PTR [rbx+0x140]
0x14091e37e: lea    rcx,[rbx+0x138]
0x14091e385: mov    WORD PTR [rsp+0x38],di
0x14091e38a: cmp    rdx,QWORD PTR [rbx+0x148]
0x14091e391: je     0x14091e3a0
0x14091e393: mov    WORD PTR [rdx],di
0x14091e396: add    QWORD PTR [rbx+0x140],0x2
0x14091e39e: jmp    0x14091e3aa
0x14091e3a0: lea    r8,[rsp+0x38]
0x14091e3a5: call   0x140071040
0x14091e3aa: mov    rdi,QWORD PTR [rsp+0x30]
0x14091e3af: mov    rbx,QWORD PTR [rsp+0x40]
0x14091e3b4: mov    rsi,QWORD PTR [rsp+0x48]
0x14091e3b9: add    rsp,0x20
0x14091e3bd: pop    r14
0x14091e3bf: ret
