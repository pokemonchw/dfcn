14014ba60: mov    QWORD PTR [rsp+0x8],rbx
14014ba65: mov    QWORD PTR [rsp+0x18],rbp
14014ba6a: mov    QWORD PTR [rsp+0x20],rsi
14014ba6f: push   rdi
14014ba70: sub    rsp,0x40
14014ba74: mov    rbx,rcx
14014ba77: test   dx,dx
14014ba7a: js     0x14014bb9f
14014ba80: movsx  r10d,dx
14014ba84: cmp    r10d,DWORD PTR [rcx+0x116bbc]
14014ba8b: jge    0x14014bb9f
14014ba91: test   r8w,r8w
14014ba95: js     0x14014bb9f
14014ba9b: movsx  r11d,r8w
14014ba9f: cmp    r11d,DWORD PTR [rcx+0x116bc0]
14014baa6: jge    0x14014bb9f
14014baac: test   r9w,r9w
14014bab0: js     0x14014bb9f
14014bab6: movsx  eax,r9w
14014baba: cmp    eax,DWORD PTR [rcx+0x116bc4]
14014bac0: jge    0x14014bb9f
14014bac6: mov    rcx,QWORD PTR [rcx+0x116b88]
14014bacd: test   rcx,rcx
14014bad0: je     0x14014bb9f
14014bad6: movsx  rax,dx
14014bada: shr    rax,0x4
14014bade: movsx  rdx,r8w
14014bae2: shr    rdx,0x4
14014bae6: mov    rax,QWORD PTR [rcx+rax*8]
14014baea: movsx  rcx,r9w
14014baee: mov    rax,QWORD PTR [rax+rdx*8]
14014baf2: mov    rsi,QWORD PTR [rax+rcx*8]
14014baf6: test   rsi,rsi
14014baf9: je     0x14014bb9f
14014baff: and    r10w,0xf
14014bb04: lea    r8,[rsp+0x58]
14014bb09: and    r11w,0xf
14014bb0e: movzx  r9d,r10w
14014bb12: movzx  edx,r11w
14014bb16: mov    eax,r9d
14014bb19: shl    rax,0x4
14014bb1d: add    rax,rdx
14014bb20: mov    WORD PTR [rsp+0x20],dx
14014bb25: lea    rdx,[rsp+0x30]
14014bb2a: mov    ebp,DWORD PTR [rsi+rax*4+0x2a0]
14014bb31: mov    ecx,ebp
14014bb33: shr    ecx,0xa
14014bb36: and    ecx,0x1
14014bb39: bt     ebp,0xb
14014bb3d: lea    eax,[rcx+0x2]
14014bb40: cmovae eax,ecx
14014bb43: bt     ebp,0xc
14014bb47: mov    rcx,rsi
14014bb4a: lea    edi,[rax+0x4]
14014bb4d: cmovae edi,eax
14014bb50: and    ebp,0x2000
14014bb56: call   0x140528f20
14014bb5b: movsx  r8d,WORD PTR [rsp+0x58]
14014bb61: movsx  edx,WORD PTR [rsp+0x30]
14014bb66: mov    rcx,QWORD PTR [rbx+0x11a638]
14014bb6d: call   0x14014b930
14014bb72: test   rax,rax
14014bb75: je     0x14014bb9f
14014bb77: mov    rdx,QWORD PTR [rax+0x8]
14014bb7b: lea    ecx,[rdi+0x8]
14014bb7e: mov    rax,QWORD PTR [rax+0x10]
14014bb82: test   ebp,ebp
14014bb84: cmove  ecx,edi
14014bb87: sub    rax,rdx
14014bb8a: sar    rax,0x3
14014bb8e: mov    r8d,ecx
14014bb91: cmp    r8,rax
14014bb94: jae    0x14014bb9f
14014bb96: mov    rax,QWORD PTR [rdx+rcx*8]
14014bb9a: mov    eax,DWORD PTR [rax+0x4]
14014bb9d: jmp    0x14014bbf2
14014bb9f: mov    rdi,QWORD PTR [rbx+0x11b3b0]
14014bba6: sub    rdi,QWORD PTR [rbx+0x11b3a8]
14014bbad: sar    rdi,0x3
14014bbb1: cmp    edi,0x1
14014bbb4: ja     0x14014bbba
14014bbb6: xor    eax,eax
14014bbb8: jmp    0x14014bbf2
14014bbba: call   0x140e5e1e0
14014bbbf: mov    r8d,eax
14014bbc2: mov    eax,0x3
14014bbc7: mul    r8d
14014bbca: mov    ecx,r8d
14014bbcd: mov    eax,0x7fffffff
14014bbd2: sub    ecx,edx
14014bbd4: shr    ecx,1
14014bbd6: add    ecx,edx
14014bbd8: xor    edx,edx
14014bbda: div    edi
14014bbdc: shr    ecx,0x1e
14014bbdf: xor    edx,edx
14014bbe1: imul   ecx,ecx,0x7fffffff
14014bbe7: sub    r8d,ecx
14014bbea: lea    ecx,[rax+0x1]
14014bbed: mov    eax,r8d
14014bbf0: div    ecx
14014bbf2: mov    rbx,QWORD PTR [rsp+0x50]
14014bbf7: mov    rbp,QWORD PTR [rsp+0x60]
14014bbfc: mov    rsi,QWORD PTR [rsp+0x68]
14014bc01: add    rsp,0x40
14014bc05: pop    rdi
14014bc06: ret
