1414d1d80: mov    QWORD PTR [rsp+0x8],rbx
1414d1d85: push   rdi
1414d1d86: sub    rsp,0x20
1414d1d8a: movsx  ebx,dx
1414d1d8d: lea    rcx,[rip+0xeff75c]        # 0x1423d14f0
1414d1d94: movzx  edx,bx
1414d1d97: mov    edi,r8d
1414d1d9a: call   0x1414add70
1414d1d9f: test   rax,rax
1414d1da2: je     0x1414d1dc8
1414d1da4: cmp    DWORD PTR [rax+0x298],0x2
1414d1dab: jle    0x1414d1dbe
1414d1dad: mov    rax,QWORD PTR [rax+0x290]
1414d1db4: cmp    BYTE PTR [rax+0x2],0x0
1414d1db8: jge    0x1414d1dbe
1414d1dba: mov    al,0x1
1414d1dbc: jmp    0x1414d1dc0
1414d1dbe: xor    al,al
1414d1dc0: test   al,al
1414d1dc2: jne    0x1414d1ed1
1414d1dc8: mov    r8d,edi
1414d1dcb: lea    rcx,[rip+0xeff71e]        # 0x1423d14f0
1414d1dd2: movzx  edx,bx
1414d1dd5: call   0x1414add70
1414d1dda: test   rax,rax
1414d1ddd: je     0x1414d1e03
1414d1ddf: cmp    DWORD PTR [rax+0x298],0x3
1414d1de6: jle    0x1414d1df9
1414d1de8: mov    rax,QWORD PTR [rax+0x290]
1414d1def: test   BYTE PTR [rax+0x3],0x20
1414d1df3: je     0x1414d1df9
1414d1df5: mov    al,0x1
1414d1df7: jmp    0x1414d1dfb
1414d1df9: xor    al,al
1414d1dfb: test   al,al
1414d1dfd: jne    0x1414d1ed1
1414d1e03: mov    r8d,edi
1414d1e06: lea    rcx,[rip+0xeff6e3]        # 0x1423d14f0
1414d1e0d: movzx  edx,bx
1414d1e10: call   0x1414add70
1414d1e15: test   rax,rax
1414d1e18: je     0x1414d1e3a
1414d1e1a: cmp    DWORD PTR [rax+0x298],0x3
1414d1e21: jle    0x1414d1e34
1414d1e23: mov    rax,QWORD PTR [rax+0x290]
1414d1e2a: test   BYTE PTR [rax+0x3],0x40
1414d1e2e: je     0x1414d1e34
1414d1e30: mov    al,0x1
1414d1e32: jmp    0x1414d1e36
1414d1e34: xor    al,al
1414d1e36: test   al,al
1414d1e38: jne    0x1414d1ea8
1414d1e3a: mov    r8d,edi
1414d1e3d: lea    rcx,[rip+0xeff6ac]        # 0x1423d14f0
1414d1e44: movzx  edx,bx
1414d1e47: call   0x1414add70
1414d1e4c: test   rax,rax
1414d1e4f: je     0x1414d1e71
1414d1e51: cmp    DWORD PTR [rax+0x298],0x7
1414d1e58: jle    0x1414d1e6b
1414d1e5a: mov    rax,QWORD PTR [rax+0x290]
1414d1e61: test   BYTE PTR [rax+0x7],0x40
1414d1e65: je     0x1414d1e6b
1414d1e67: mov    al,0x1
1414d1e69: jmp    0x1414d1e6d
1414d1e6b: xor    al,al
1414d1e6d: test   al,al
1414d1e6f: jne    0x1414d1ea8
1414d1e71: mov    r8d,edi
1414d1e74: lea    rcx,[rip+0xeff675]        # 0x1423d14f0
1414d1e7b: movzx  edx,bx
1414d1e7e: call   0x1414add70
1414d1e83: test   rax,rax
1414d1e86: je     0x1414d1eb8
1414d1e88: cmp    DWORD PTR [rax+0x298],0x3
1414d1e8f: jle    0x1414d1ea2
1414d1e91: mov    rax,QWORD PTR [rax+0x290]
1414d1e98: test   BYTE PTR [rax+0x3],0x1
1414d1e9c: je     0x1414d1ea2
1414d1e9e: mov    al,0x1
1414d1ea0: jmp    0x1414d1ea4
1414d1ea2: xor    al,al
1414d1ea4: test   al,al
1414d1ea6: je     0x1414d1eb8
1414d1ea8: mov    eax,0xa
1414d1ead: mov    rbx,QWORD PTR [rsp+0x30]
1414d1eb2: add    rsp,0x20
1414d1eb6: pop    rdi
1414d1eb7: ret
1414d1eb8: mov    ecx,ebx
1414d1eba: sub    ecx,0x1
1414d1ebd: je     0x1414d1ed1
1414d1ebf: cmp    ecx,0x1
1414d1ec2: je     0x1414d1ed1
1414d1ec4: xor    eax,eax
1414d1ec6: mov    rbx,QWORD PTR [rsp+0x30]
1414d1ecb: add    rsp,0x20
1414d1ecf: pop    rdi
1414d1ed0: ret
1414d1ed1: mov    rbx,QWORD PTR [rsp+0x30]
1414d1ed6: mov    eax,0x5
1414d1edb: add    rsp,0x20
1414d1edf: pop    rdi
1414d1ee0: ret