140994b60: test   r8,r8
140994b63: je     0x140994d45
140994b69: push   rbp
140994b6a: push   rsi
140994b6b: push   r14
140994b6d: sub    rsp,0x40
140994b71: mov    r9,QWORD PTR [rip+0x1b57ef0]        # 0x1424eca68
140994b78: mov    rsi,r8
140994b7b: mov    QWORD PTR [rsp+0x60],rbx
140994b80: mov    r14,rdx
140994b83: mov    QWORD PTR [rsp+0x68],rdi
140994b88: mov    rbp,rcx
140994b8b: movzx  edi,WORD PTR [rsp+0x70]
140994b90: xor    ebx,ebx
140994b92: mov    QWORD PTR [rsp+0x78],r12
140994b97: mov    r10d,0xb
140994b9d: mov    QWORD PTR [rsp+0x38],r13
140994ba2: mov    r12d,0x7
140994ba8: mov    QWORD PTR [rsp+0x30],r15
140994bad: mov    r13d,0x8
140994bb3: lea    r15,[rip+0xffffffffff66b446]        # 0x140000000
140994bba: mov    r11d,0x11
140994bc0: mov    r8d,0xa
140994bc6: movsx  rax,bx
140994bca: mov    edx,0x4
140994bcf: cmp    eax,r8d
140994bd2: ja     0x140994c25
140994bd4: mov    ecx,DWORD PTR [r15+rax*4+0x994d48]
140994bdc: add    rcx,r15
140994bdf: jmp    rcx
140994be1: mov    edi,0x3
140994be6: jmp    0x140994c25
140994be8: movzx  edi,dx
140994beb: jmp    0x140994c25
140994bed: movzx  edi,r12w
140994bf1: jmp    0x140994c25
140994bf3: movzx  edi,r13w
140994bf7: jmp    0x140994c25
140994bf9: movzx  edi,r8w
140994bfd: jmp    0x140994c25
140994bff: movzx  edi,r10w
140994c03: jmp    0x140994c25
140994c05: movzx  edi,r11w
140994c09: jmp    0x140994c25
140994c0b: mov    edi,0x12
140994c10: jmp    0x140994c25
140994c12: mov    edi,0x13
140994c17: jmp    0x140994c25
140994c19: mov    edi,0x14
140994c1e: jmp    0x140994c25
140994c20: mov    edi,0x15
140994c25: cmp    bx,0x4
140994c29: jne    0x140994cbc
140994c2f: mov    eax,DWORD PTR [rsi+0x9c]
140994c35: xor    eax,DWORD PTR [rbp+0x9c]
140994c3b: bt     eax,0x1a
140994c3f: jb     0x140994d0d
140994c45: movsx  rax,WORD PTR [rbp+0x98]
140994c4d: movsx  rdx,WORD PTR [rsi+0x98]
140994c55: cmp    ax,dx
140994c58: je     0x140994cbc
140994c5a: test   ax,ax
140994c5d: js     0x140994d0d
140994c63: mov    rcx,QWORD PTR [rip+0x1b57e06]        # 0x1424eca70
140994c6a: sub    rcx,r9
140994c6d: sar    rcx,0x3
140994c71: cmp    rax,rcx
140994c74: jae    0x140994d0d
140994c7a: mov    rax,QWORD PTR [r9+rax*8]
140994c7e: cmp    DWORD PTR [rax+0x1b0],0xb
140994c85: jle    0x140994d0d
140994c8b: mov    rax,QWORD PTR [rax+0x1a8]
140994c92: test   BYTE PTR [rax+0xb],0x2
140994c96: je     0x140994d0d
140994c98: test   dx,dx
140994c9b: js     0x140994d0d
140994c9d: cmp    rdx,rcx
140994ca0: jae    0x140994d0d
140994ca2: mov    rax,QWORD PTR [r9+rdx*8]
140994ca6: cmp    DWORD PTR [rax+0x1b0],0xb
140994cad: jle    0x140994d0d
140994caf: mov    rax,QWORD PTR [rax+0x1a8]
140994cb6: test   BYTE PTR [rax+0xb],0x2
140994cba: je     0x140994d0d
140994cbc: movsx  rax,di
140994cc0: movzx  edx,WORD PTR [rsi+rax*2+0xcec]
140994cc8: movzx  ecx,WORD PTR [rbp+rax*2+0xcec]
140994cd0: call   0x14075ca70
140994cd5: test   eax,eax
140994cd7: je     0x140994cff
140994cd9: movsx  r8d,di
140994cdd: mov    edx,r12d
140994ce0: mov    rcx,r14
140994ce3: mov    DWORD PTR [rsp+0x20],eax
140994ce7: call   0x1407dcf30
140994cec: mov    r9,QWORD PTR [rip+0x1b57d75]        # 0x1424eca68
140994cf3: mov    r10d,0xb
140994cf9: mov    r11d,0x11
140994cff: inc    bx
140994d02: cmp    bx,0xb
140994d06: jge    0x140994d24
140994d08: jmp    0x140994bc0
140994d0d: movsx  r8d,di
140994d11: mov    edx,r13d
140994d14: mov    rcx,r14
140994d17: mov    DWORD PTR [rsp+0x20],0xffffffec
140994d1f: call   0x1407dcf30
140994d24: mov    r13,QWORD PTR [rsp+0x38]
140994d29: mov    r12,QWORD PTR [rsp+0x78]
140994d2e: mov    rdi,QWORD PTR [rsp+0x68]
140994d33: mov    rbx,QWORD PTR [rsp+0x60]
140994d38: mov    r15,QWORD PTR [rsp+0x30]
140994d3d: add    rsp,0x40
140994d41: pop    r14
140994d43: pop    rsi
140994d44: pop    rbp
140994d45: ret
140994d46: xchg   ax,ax
140994d48: loope  0x140994d95
140994d4a: cdq
140994d4b: add    al,ch
140994d4d: rex.WXB cqo
140994d4f: add    ch,ch
140994d51: rex.WXB cqo
140994d53: add    bl,dh
140994d55: rex.WXB cqo
140994d57: add    cl,bh
140994d59: rex.WXB cqo
140994d5b: add    bh,bh
140994d5d: rex.WXB cqo
140994d5f: add    BYTE PTR [rip+0xb00994c],al        # 0x14b99e6b1
140994d65: rex.WR cqo
140994d67: add    BYTE PTR [rdx],dl
140994d69: rex.WR cqo
140994d6b: add    BYTE PTR [rcx],bl
140994d6d: rex.WR cqo
140994d6f: add    BYTE PTR [rax],ah
140994d71: rex.WR cqo