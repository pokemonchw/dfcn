# steam PE:6a70a6d9:02711000; has-continuable-action; RVA 0x7eeb70..0x7eed14
0x007eeb70: mov    QWORD PTR [rsp+0x8],rbx
0x007eeb75: mov    QWORD PTR [rsp+0x10],rbp
0x007eeb7a: mov    QWORD PTR [rsp+0x18],rsi
0x007eeb7f: mov    QWORD PTR [rsp+0x20],rdi
0x007eeb84: push   r14
0x007eeb86: sub    rsp,0x20
0x007eeb8a: movsx  edx,WORD PTR [rcx+0xc6]
0x007eeb91: sub    edx,0xd6
0x007eeb97: je     0x1407eecbe
0x007eeb9d: cmp    edx,0x1
0x007eeba0: je     0x1407eecbe
0x007eeba6: mov    r10,QWORD PTR [rip+0x1bf650b]        # 0x1423e50b8
0x007eebad: mov    rbx,QWORD PTR [rip+0x1bf64fc]        # 0x1423e50b0
0x007eebb4: mov    rax,QWORD PTR [rip+0x1bf6555]        # 0x1423e5110
0x007eebbb: sub    r10,rbx
0x007eebbe: sar    r10,0x3
0x007eebc2: mov    r11d,DWORD PTR [rax+0x3dc]
0x007eebc9: test   r10d,r10d
0x007eebcc: je     0x1407eec25
0x007eebce: cmp    r11d,0xffffffff
0x007eebd2: je     0x1407eec25
0x007eebd4: xor    r8d,r8d
0x007eebd7: sub    r10d,0x1
0x007eebdb: js     0x1407eec0c
0x007eebdd: nop    DWORD PTR [rax]
0x007eebe0: lea    edx,[r8+r10*1]
0x007eebe4: sar    edx,1
0x007eebe6: movsxd rax,edx
0x007eebe9: mov    rcx,QWORD PTR [rbx+rax*8]
0x007eebed: cmp    DWORD PTR [rcx+0x130],r11d
0x007eebf4: je     0x1407eec0e
0x007eebf6: lea    eax,[rdx+0x1]
0x007eebf9: cmovle r8d,eax
0x007eebfd: lea    eax,[rdx-0x1]
0x007eec00: cmovle eax,r10d
0x007eec04: mov    r10d,eax
0x007eec07: cmp    r8d,eax
0x007eec0a: jle    0x1407eebe0
0x007eec0c: xor    ecx,ecx
0x007eec0e: test   rcx,rcx
0x007eec11: je     0x1407eec25
0x007eec13: mov    eax,0xd0
0x007eec18: cmp    WORD PTR [rcx+0xc6],ax
0x007eec1f: je     0x1407eecbe
0x007eec25: mov    rsi,QWORD PTR [rip+0x1cf4bf4]        # 0x1424e3820
0x007eec2c: mov    rbp,QWORD PTR [rip+0x1cf4bf5]        # 0x1424e3828
0x007eec33: cmp    rsi,rbp
0x007eec36: je     0x1407eecba
0x007eec3c: nop    DWORD PTR [rax+0x0]
0x007eec40: mov    rdi,QWORD PTR [rsi]
0x007eec43: mov    rbx,QWORD PTR [rdi+0x8]
0x007eec47: mov    rdi,QWORD PTR [rdi+0x10]
0x007eec4b: cmp    rbx,rdi
0x007eec4e: je     0x1407eecb1
0x007eec50: mov    rcx,QWORD PTR [rbx]
0x007eec53: mov    rax,QWORD PTR [rcx]
0x007eec56: call   QWORD PTR [rax]
0x007eec58: cmp    ax,0xe
0x007eec5c: jne    0x1407eeca8
0x007eec5e: mov    r14,QWORD PTR [rbx]
0x007eec61: test   BYTE PTR [r14+0x14],0x1
0x007eec66: jne    0x1407eeca8
0x007eec68: mov    rax,QWORD PTR [r14]
0x007eec6b: mov    rcx,r14
0x007eec6e: call   QWORD PTR [rax+0x20]
0x007eec71: test   al,al
0x007eec73: jne    0x1407eeca8
0x007eec75: mov    rax,QWORD PTR [r14+0xe0]
0x007eec7c: mov    rcx,QWORD PTR [r14+0xe8]
0x007eec83: cmp    rax,rcx
0x007eec86: je     0x1407eeca8
0x007eec88: mov    rdx,QWORD PTR [rip+0x1bf6481]        # 0x1423e5110
0x007eec8f: mov    r8d,DWORD PTR [rdx+0x130]
0x007eec96: mov    rdx,QWORD PTR [rax]
0x007eec99: cmp    DWORD PTR [rdx+0x8],r8d
0x007eec9d: je     0x1407eecf7
0x007eec9f: add    rax,0x8
0x007eeca3: cmp    rax,rcx
0x007eeca6: jne    0x1407eec96
0x007eeca8: add    rbx,0x8
0x007eecac: cmp    rbx,rdi
0x007eecaf: jne    0x1407eec50
0x007eecb1: add    rsi,0x8
0x007eecb5: cmp    rsi,rbp
0x007eecb8: jne    0x1407eec40
0x007eecba: xor    al,al
0x007eecbc: jmp    0x1407eecf9
0x007eecbe: movzx  eax,WORD PTR [rcx+0xc0]
0x007eecc5: cmp    WORD PTR [rcx+0xa8],ax
0x007eeccc: jne    0x1407eecf7
0x007eecce: movzx  eax,WORD PTR [rcx+0xc2]
0x007eecd5: cmp    WORD PTR [rcx+0xaa],ax
0x007eecdc: jne    0x1407eecf7
0x007eecde: movzx  eax,WORD PTR [rcx+0xc4]
0x007eece5: cmp    WORD PTR [rcx+0xac],ax
0x007eecec: jne    0x1407eecf7
0x007eecee: call   0x140073a60
0x007eecf3: xor    al,al
0x007eecf5: jmp    0x1407eecf9
0x007eecf7: mov    al,0x1
0x007eecf9: mov    rbx,QWORD PTR [rsp+0x30]
0x007eecfe: mov    rbp,QWORD PTR [rsp+0x38]
0x007eed03: mov    rsi,QWORD PTR [rsp+0x40]
0x007eed08: mov    rdi,QWORD PTR [rsp+0x48]
0x007eed0d: add    rsp,0x20
0x007eed11: pop    r14
0x007eed13: ret
