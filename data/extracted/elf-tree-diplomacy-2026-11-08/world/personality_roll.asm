; Original disk PE PE:6a70a6d9:02711000; D:\program\steam\steamapps\common\Dwarf Fortress\Dwarf Fortress.exe; VA 0x140e11b00..0x140e11bab
0x140e11b00: mov    QWORD PTR [rsp+0x10],rbx
0x140e11b05: push   rdi
0x140e11b06: sub    rsp,0x20
0x140e11b0a: mov    ebx,r8d
0x140e11b0d: movsxd r8,edx
0x140e11b10: mov    rdx,QWORD PTR [rcx+0x158]
0x140e11b17: movzx  eax,WORD PTR [rcx+r8*2+0x80]
0x140e11b20: test   rdx,rdx
0x140e11b23: je     0x140e11b3b
0x140e11b25: add    ax,WORD PTR [rdx+r8*2]
0x140e11b2a: jns    0x140e11b30
0x140e11b2c: xor    eax,eax
0x140e11b2e: jmp    0x140e11b3b
0x140e11b30: cmp    ax,0x64
0x140e11b34: jle    0x140e11b3b
0x140e11b36: mov    eax,0x64
0x140e11b3b: xor    edi,edi
0x140e11b3d: test   ebx,ebx
0x140e11b3f: jle    0x140e11b9e
0x140e11b41: mov    QWORD PTR [rsp+0x30],rsi
0x140e11b46: movsx  esi,ax
0x140e11b49: inc    esi
0x140e11b4b: nop    DWORD PTR [rax+rax*1+0x0]
0x140e11b50: cmp    esi,0x1
0x140e11b53: ja     0x140e11b59
0x140e11b55: xor    eax,eax
0x140e11b57: jmp    0x140e11b91
0x140e11b59: call   0x140eb68b0
0x140e11b5e: mov    r8d,eax
0x140e11b61: mov    eax,0x3
0x140e11b66: mul    r8d
0x140e11b69: mov    eax,r8d
0x140e11b6c: sub    eax,edx
0x140e11b6e: shr    eax,1
0x140e11b70: add    eax,edx
0x140e11b72: xor    edx,edx
0x140e11b74: shr    eax,0x1e
0x140e11b77: imul   eax,eax,0x7fffffff
0x140e11b7d: sub    r8d,eax
0x140e11b80: mov    eax,0x7fffffff
0x140e11b85: div    esi
0x140e11b87: xor    edx,edx
0x140e11b89: lea    ecx,[rax+0x1]
0x140e11b8c: mov    eax,r8d
0x140e11b8f: div    ecx
0x140e11b91: add    edi,eax
0x140e11b93: dec    ebx
0x140e11b95: test   ebx,ebx
0x140e11b97: jg     0x140e11b50
0x140e11b99: mov    rsi,QWORD PTR [rsp+0x30]
0x140e11b9e: mov    rbx,QWORD PTR [rsp+0x38]
0x140e11ba3: mov    eax,edi
0x140e11ba5: add    rsp,0x20
0x140e11ba9: pop    rdi
0x140e11baa: ret
