0x140ebf110: mov    QWORD PTR [rsp+0x10],rbx
0x140ebf115: mov    QWORD PTR [rsp+0x18],rbp
0x140ebf11a: mov    QWORD PTR [rsp+0x20],rsi
0x140ebf11f: push   rdi
0x140ebf120: sub    rsp,0x20
0x140ebf124: xor    ebp,ebp
0x140ebf126: mov    QWORD PTR [rcx+0x5c],0xffffffffffffffff
0x140ebf12e: lea    rax,[rip+0x7ba373]        # 0x1416794a8
0x140ebf135: mov    DWORD PTR [rcx+0x48],ebp
0x140ebf138: mov    QWORD PTR [rcx],rax
0x140ebf13b: movzx  esi,dl
0x140ebf13e: mov    eax,0xffffffff
0x140ebf143: mov    QWORD PTR [rcx+0x50],rbp
0x140ebf147: mov    WORD PTR [rcx+0x6c],ax
0x140ebf14b: mov    rbx,rcx
0x140ebf14e: mov    DWORD PTR [rcx+0x58],ebp
0x140ebf151: mov    QWORD PTR [rcx+0x64],0xffffffffffffffff
0x140ebf159: mov    QWORD PTR [rcx+0x18],rbp
0x140ebf15d: mov    QWORD PTR [rcx+0x74],rbp
0x140ebf161: mov    QWORD PTR [rcx+0x7c],rbp
0x140ebf165: mov    QWORD PTR [rcx+0x84],rbp
0x140ebf16c: mov    QWORD PTR [rcx+0x8c],rbp
0x140ebf173: mov    DWORD PTR [rcx+0x94],ebp
0x140ebf179: mov    DWORD PTR [rcx+0x70],ebp
0x140ebf17c: mov    rdi,QWORD PTR [rip+0x15511fd]        # 0x142410380
0x140ebf183: test   rdi,rdi
0x140ebf186: jne    0x140ebf1cd
0x140ebf188: mov    ecx,0x18
0x140ebf18d: call   0x1415530e0
0x140ebf192: lea    rcx,[rip+0x15511d7]        # 0x142410370
0x140ebf199: mov    QWORD PTR [rsp+0x30],rax
0x140ebf19e: mov    QWORD PTR [rax+0x10],rbp
0x140ebf1a2: mov    QWORD PTR [rax],rbx
0x140ebf1a5: mov    QWORD PTR [rax+0x8],rcx
0x140ebf1a9: mov    rcx,QWORD PTR [rip+0x15511d0]        # 0x142410380
0x140ebf1b0: mov    QWORD PTR [rax+0x10],rcx
0x140ebf1b4: mov    rcx,QWORD PTR [rip+0x15511c5]        # 0x142410380
0x140ebf1bb: test   rcx,rcx
0x140ebf1be: je     0x140ebf1c4
0x140ebf1c0: mov    QWORD PTR [rcx+0x8],rax
0x140ebf1c4: mov    QWORD PTR [rip+0x15511b5],rax        # 0x142410380
0x140ebf1cb: jmp    0x140ebf20a
0x140ebf1cd: mov    rax,QWORD PTR [rdi+0x10]
0x140ebf1d1: test   rax,rax
0x140ebf1d4: je     0x140ebf1ec
0x140ebf1d6: data16 nop WORD PTR [rax+rax*1+0x0]
0x140ebf1e0: mov    rdi,rax
0x140ebf1e3: mov    rax,QWORD PTR [rax+0x10]
0x140ebf1e7: test   rax,rax
0x140ebf1ea: jne    0x140ebf1e0
0x140ebf1ec: mov    ecx,0x18
0x140ebf1f1: call   0x1415530e0
0x140ebf1f6: mov    QWORD PTR [rsp+0x30],rax
0x140ebf1fb: mov    QWORD PTR [rax+0x10],rbp
0x140ebf1ff: mov    QWORD PTR [rax],rbx
0x140ebf202: mov    QWORD PTR [rax+0x8],rdi
0x140ebf206: mov    QWORD PTR [rdi+0x10],rax
0x140ebf20a: mov    QWORD PTR [rbx+0x8],rax
0x140ebf20e: test   sil,sil
0x140ebf211: jne    0x140ebf222
0x140ebf213: mov    eax,DWORD PTR [rip+0x14d0bef]        # 0x14238fe08
0x140ebf219: mov    DWORD PTR [rbx+0x10],eax
0x140ebf21c: inc    DWORD PTR [rip+0x14d0be6]        # 0x14238fe08
0x140ebf222: mov    rbp,QWORD PTR [rsp+0x40]
0x140ebf227: mov    rax,rbx
0x140ebf22a: mov    rbx,QWORD PTR [rsp+0x38]
0x140ebf22f: mov    rsi,QWORD PTR [rsp+0x48]
0x140ebf234: add    rsp,0x20
0x140ebf238: pop    rdi
0x140ebf239: ret
