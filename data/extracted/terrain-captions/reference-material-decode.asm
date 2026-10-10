; reference; PE:6a70a6d9:02711000; material-decode; RVA 0x14d0c70..0x14d112f
0x014d0c70: mov    QWORD PTR [rsp+0x18],rbx
0x014d0c75: push   rbp
0x014d0c76: push   rsi
0x014d0c77: push   rdi
0x014d0c78: push   r13
0x014d0c7a: push   r15
0x014d0c7c: sub    rsp,0x40
0x014d0c80: movsx  esi,r8w
0x014d0c84: movzx  ebp,r9w
0x014d0c88: movsx  edi,dx
0x014d0c8b: movzx  r8d,si
0x014d0c8f: movzx  edx,di
0x014d0c92: mov    rbx,rcx
0x014d0c95: call   0x140067f80
0x014d0c9a: movzx  r15d,ax
0x014d0c9e: xor    r13d,r13d
0x014d0ca1: mov    ecx,r15d
0x014d0ca4: mov    r8d,0x3
0x014d0caa: cmp    r15d,0x15c
0x014d0cb1: ja     0x1414d0ce5
0x014d0cb3: je     0x1414d0d06
0x014d0cb5: sub    ecx,0x27
0x014d0cb8: cmp    ecx,0xe0
0x014d0cbe: ja     0x1414d0d0c
0x014d0cc0: movsxd rax,ecx
0x014d0cc3: lea    rdx,[rip+0xfffffffffeb2f336]        # 0x140000000
0x014d0cca: movzx  eax,BYTE PTR [rdx+rax*1+0x14d113c]
0x014d0cd2: mov    ecx,DWORD PTR [rdx+rax*4+0x14d1130]
0x014d0cd9: add    rcx,rdx
0x014d0cdc: jmp    rcx
0x014d0cde: mov    ecx,0x1
0x014d0ce3: jmp    0x1414d0d10
0x014d0ce5: sub    ecx,0x15d
0x014d0ceb: cmp    ecx,0x6
0x014d0cee: ja     0x1414d0d0c
0x014d0cf0: lea    rdx,[rip+0xfffffffffeb2f309]        # 0x140000000
0x014d0cf7: movsxd rax,ecx
0x014d0cfa: mov    eax,DWORD PTR [rdx+rax*4+0x14d1220]
0x014d0d01: add    rax,rdx
0x014d0d04: jmp    rax
0x014d0d06: movzx  ecx,r8w
0x014d0d0a: jmp    0x1414d0d10
0x014d0d0c: movzx  ecx,r13w
0x014d0d10: mov    rax,QWORD PTR [rsp+0xb0]
0x014d0d18: mov    WORD PTR [rax],cx
0x014d0d1b: movzx  ecx,r15w
0x014d0d1f: call   0x140247210
0x014d0d24: test   al,al
0x014d0d26: je     0x1414d0d98
0x014d0d28: mov    rax,QWORD PTR [rbx+0x158]
0x014d0d2f: movzx  r8d,si
0x014d0d33: sub    rax,QWORD PTR [rbx+0x150]
0x014d0d3a: movzx  edx,di
0x014d0d3d: sar    rax,0x3
0x014d0d41: mov    rcx,rbx
0x014d0d44: dec    eax
0x014d0d46: mov    DWORD PTR [rsp+0x28],eax
0x014d0d4a: mov    DWORD PTR [rsp+0x20],r13d
0x014d0d4f: call   0x140a46d90
0x014d0d54: test   rax,rax
0x014d0d57: je     0x1414d0d98
0x014d0d59: movzx  edx,WORD PTR [rax+0x6]
0x014d0d5d: mov    rcx,QWORD PTR [rsp+0x90]
0x014d0d65: mov    WORD PTR [rcx],dx
0x014d0d68: movzx  edx,WORD PTR [rax+0x8]
0x014d0d6c: mov    rcx,QWORD PTR [rsp+0x98]
0x014d0d74: mov    WORD PTR [rcx],dx
0x014d0d77: movzx  edx,WORD PTR [rax+0xa]
0x014d0d7b: mov    rcx,QWORD PTR [rsp+0xa0]
0x014d0d83: mov    WORD PTR [rcx],dx
0x014d0d86: mov    ecx,DWORD PTR [rax+0xc]
0x014d0d89: mov    rax,QWORD PTR [rsp+0xa8]
0x014d0d91: mov    DWORD PTR [rax],ecx
0x014d0d93: jmp    0x1414d111b
0x014d0d98: mov    rax,QWORD PTR [rsp+0x90]
0x014d0da0: mov    r8d,0xffffffff
0x014d0da6: mov    QWORD PTR [rsp+0x70],r12
0x014d0dab: movzx  ecx,r15w
0x014d0daf: mov    r12,QWORD PTR [rsp+0xa0]
0x014d0db7: mov    QWORD PTR [rsp+0x78],r14
0x014d0dbc: mov    WORD PTR [rax],0x4
0x014d0dc1: mov    rax,QWORD PTR [rsp+0x98]
0x014d0dc9: mov    WORD PTR [rax],r8w
0x014d0dcd: mov    WORD PTR [r12],r13w
0x014d0dd2: call   0x140247330
0x014d0dd7: mov    r14,QWORD PTR [rsp+0xa8]
0x014d0ddf: test   al,al
0x014d0de1: je     0x1414d0e72
0x014d0de7: movzx  r8d,si
0x014d0deb: movzx  edx,di
0x014d0dee: mov    rcx,rbx
0x014d0df1: call   0x1414d12c0
0x014d0df6: mov    r8,rax
0x014d0df9: test   rax,rax
0x014d0dfc: je     0x1414d0e62
0x014d0dfe: mov    ecx,edi
0x014d0e00: and    ecx,0x8000000f
0x014d0e06: jge    0x1414d0e0f
0x014d0e08: dec    ecx
0x014d0e0a: or     ecx,0xfffffff0
0x014d0e0d: inc    ecx
0x014d0e0f: movsxd rdx,ecx
0x014d0e12: mov    eax,esi
0x014d0e14: add    rdx,rdx
0x014d0e17: and    eax,0x8000000f
0x014d0e1c: jge    0x1414d0e25
0x014d0e1e: dec    eax
0x014d0e20: or     eax,0xfffffff0
0x014d0e23: inc    eax
0x014d0e25: movsxd rcx,eax
0x014d0e28: lea    rax,[r8+rdx*8]
0x014d0e2c: movzx  edx,BYTE PTR [rcx+rax*1+0x208]
0x014d0e34: shl    edx,0x15
0x014d0e37: test   edx,edx
0x014d0e39: je     0x1414d0e62
0x014d0e3b: cmp    edx,0x200000
0x014d0e41: jne    0x1414d0ee1
0x014d0e47: movzx  r9d,bp
0x014d0e4b: movzx  r8d,si
0x014d0e4f: movzx  edx,di
0x014d0e52: mov    rcx,rbx
0x014d0e55: call   0x1414d0be0
0x014d0e5a: movsx  ecx,ax
0x014d0e5d: mov    DWORD PTR [r14],ecx
0x014d0e60: jmp    0x1414d0ee1
0x014d0e62: mov    WORD PTR [r12],0x6
0x014d0e69: mov    DWORD PTR [r14],0xffffffff
0x014d0e70: jmp    0x1414d0ee1
0x014d0e72: movzx  ecx,r15w
0x014d0e76: call   0x140288ab0
0x014d0e7b: test   al,al
0x014d0e7d: jne    0x1414d0e4b
0x014d0e7f: movzx  ecx,r15w
0x014d0e83: call   0x140288d60
0x014d0e88: test   al,al
0x014d0e8a: je     0x1414d0eba
0x014d0e8c: mov    WORD PTR [r12],r8w
0x014d0e91: movzx  edx,di
0x014d0e94: mov    DWORD PTR [r14],r8d
0x014d0e97: mov    rcx,rbx
0x014d0e9a: movzx  r8d,si
0x014d0e9e: call   0x1414a2970
0x014d0ea3: test   rax,rax
0x014d0ea6: je     0x1414d0ee1
0x014d0ea8: mov    r9,QWORD PTR [rax]
0x014d0eab: mov    r8,r14
0x014d0eae: mov    rdx,r12
0x014d0eb1: mov    rcx,rax
0x014d0eb4: call   QWORD PTR [r9+0x40]
0x014d0eb8: jmp    0x1414d0ee1
0x014d0eba: movzx  ecx,r15w
0x014d0ebe: call   0x140288ef0
0x014d0ec3: movzx  r8d,si
0x014d0ec7: movzx  edx,di
0x014d0eca: mov    rcx,rbx
0x014d0ecd: test   al,al
0x014d0ecf: je     0x1414d0f4f
0x014d0ed1: call   0x1414d1240
0x014d0ed6: test   rax,rax
0x014d0ed9: je     0x1414d0f3a
0x014d0edb: mov    eax,DWORD PTR [rax+0x8]
0x014d0ede: mov    DWORD PTR [r14],eax
0x014d0ee1: mov    esi,0x3
0x014d0ee6: mov    rbx,QWORD PTR [rsp+0x90]
0x014d0eee: cmp    WORD PTR [rbx],0x4
0x014d0ef2: jne    0x1414d1111
0x014d0ef8: mov    r8d,DWORD PTR [r14]
0x014d0efb: lea    rcx,[rip+0xf005ee]        # 0x1423d14f0
0x014d0f02: movzx  edx,WORD PTR [r12]
0x014d0f07: call   0x1414add70
0x014d0f0c: test   rax,rax
0x014d0f0f: je     0x1414d1111
0x014d0f15: cmp    DWORD PTR [rax+0x298],0x6
0x014d0f1c: jle    0x1414d1108
0x014d0f22: mov    rax,QWORD PTR [rax+0x290]
0x014d0f29: test   BYTE PTR [rax+0x6],0x1
0x014d0f2d: je     0x1414d1108
0x014d0f33: mov    al,0x1
0x014d0f35: jmp    0x1414d110a
0x014d0f3a: movzx  r9d,bp
0x014d0f3e: movzx  r8d,si
0x014d0f42: movzx  edx,di
0x014d0f45: mov    rcx,rbx
0x014d0f48: call   0x14014e100
0x014d0f4d: jmp    0x1414d0ede
0x014d0f4f: call   0x14014e100
0x014d0f54: mov    DWORD PTR [r14],eax
0x014d0f57: test   eax,eax
0x014d0f59: js     0x1414d0fc2
0x014d0f5b: mov    rcx,QWORD PTR [rbx+0x11b3d8]
0x014d0f62: movsxd rdx,eax
0x014d0f65: mov    rax,QWORD PTR [rbx+0x11b3e0]
0x014d0f6c: sub    rax,rcx
0x014d0f6f: sar    rax,0x3
0x014d0f73: cmp    rdx,rax
0x014d0f76: jae    0x1414d0fc2
0x014d0f78: mov    rax,QWORD PTR [rcx+rdx*8]
0x014d0f7c: cmp    DWORD PTR [rax+0x40],0x1
0x014d0f80: jle    0x1414d0f91
0x014d0f82: mov    rax,QWORD PTR [rax+0x38]
0x014d0f86: test   BYTE PTR [rax+0x1],0x8
0x014d0f8a: je     0x1414d0f91
0x014d0f8c: mov    r8b,0x1
0x014d0f8f: jmp    0x1414d0f94
0x014d0f91: xor    r8b,r8b
0x014d0f94: movzx  ecx,r15w
0x014d0f98: call   0x140065d30
0x014d0f9d: test   r8b,r8b
0x014d0fa0: je     0x1414d0fcb
0x014d0fa2: test   al,al
0x014d0fa4: je     0x1414d0ee1
0x014d0faa: movzx  r9d,bp
0x014d0fae: movzx  r8d,si
0x014d0fb2: movzx  edx,di
0x014d0fb5: mov    rcx,rbx
0x014d0fb8: call   0x14149dce0
0x014d0fbd: jmp    0x1414d0ede
0x014d0fc2: movzx  ecx,r15w
0x014d0fc6: call   0x140065d30
0x014d0fcb: test   al,al
0x014d0fcd: jne    0x1414d0ee1
0x014d0fd3: mov    WORD PTR [rsp+0x28],bp
0x014d0fd8: lea    r8,[rsp+0xb0]
0x014d0fe0: movzx  r9d,di
0x014d0fe4: mov    WORD PTR [rsp+0x20],si
0x014d0fe9: lea    rdx,[rsp+0x30]
0x014d0fee: mov    rcx,rbx
0x014d0ff1: call   0x14007dcd0
0x014d0ff6: movsx  r8d,WORD PTR [rsp+0xb0]
0x014d0fff: movsx  edx,WORD PTR [rsp+0x30]
0x014d1004: mov    rcx,QWORD PTR [rbx+0x11a668]
0x014d100b: call   0x14014dfd0
0x014d1010: mov    rdi,rax
0x014d1013: test   rax,rax
0x014d1016: je     0x1414d1083
0x014d1018: mov    r8,QWORD PTR [rax+0x8]
0x014d101c: mov    rcx,QWORD PTR [rax+0x10]
0x014d1020: sub    rcx,r8
0x014d1023: sar    rcx,0x3
0x014d1027: sub    ecx,0x1
0x014d102a: js     0x1414d1083
0x014d102c: movsxd rdx,ecx
0x014d102f: lea    r8,[r8+rdx*8]
0x014d1033: mov    rax,QWORD PTR [r8]
0x014d1036: movsxd r9,DWORD PTR [rax+0x4]
0x014d103a: test   r9d,r9d
0x014d103d: js     0x1414d1077
0x014d103f: mov    r10,QWORD PTR [rbx+0x11b3d8]
0x014d1046: mov    rax,QWORD PTR [rbx+0x11b3e0]
0x014d104d: sub    rax,r10
0x014d1050: sar    rax,0x3
0x014d1054: cmp    r9,rax
0x014d1057: jae    0x1414d1077
0x014d1059: mov    rax,QWORD PTR [r10+r9*8]
0x014d105d: cmp    DWORD PTR [rax+0x40],0x1
0x014d1061: jle    0x1414d1071
0x014d1063: mov    rax,QWORD PTR [rax+0x38]
0x014d1067: test   BYTE PTR [rax+0x1],0x8
0x014d106b: je     0x1414d1071
0x014d106d: mov    al,0x1
0x014d106f: jmp    0x1414d1073
0x014d1071: xor    al,al
0x014d1073: test   al,al
0x014d1075: jne    0x1414d10a7
0x014d1077: dec    ecx
0x014d1079: sub    r8,0x8
0x014d107d: sub    rdx,0x1
0x014d1081: jns    0x1414d1033
0x014d1083: mov    rdi,QWORD PTR [rbx+0x11b3e0]
0x014d108a: sub    rdi,QWORD PTR [rbx+0x11b3d8]
0x014d1091: sar    rdi,0x3
0x014d1095: cmp    edi,0x1
0x014d1098: ja     0x1414d10c3
0x014d109a: mov    esi,0x3
0x014d109f: mov    DWORD PTR [r14],r13d
0x014d10a2: jmp    0x1414d0ee6
0x014d10a7: mov    rax,QWORD PTR [rdi+0x8]
0x014d10ab: mov    esi,0x3
0x014d10b0: movsxd rcx,ecx
0x014d10b3: mov    rcx,QWORD PTR [rax+rcx*8]
0x014d10b7: mov    r13d,DWORD PTR [rcx+0x4]
0x014d10bb: mov    DWORD PTR [r14],r13d
0x014d10be: jmp    0x1414d0ee6
0x014d10c3: call   0x140eb68b0
0x014d10c8: mov    r8d,eax
0x014d10cb: mov    esi,0x3
0x014d10d0: mov    ecx,r8d
0x014d10d3: mov    eax,esi
0x014d10d5: mul    r8d
0x014d10d8: mov    eax,0x7fffffff
0x014d10dd: sub    ecx,edx
0x014d10df: shr    ecx,1
0x014d10e1: add    ecx,edx
0x014d10e3: xor    edx,edx
0x014d10e5: div    edi
0x014d10e7: shr    ecx,0x1e
0x014d10ea: xor    edx,edx
0x014d10ec: imul   ecx,ecx,0x7fffffff
0x014d10f2: sub    r8d,ecx
0x014d10f5: lea    ecx,[rax+0x1]
0x014d10f8: mov    eax,r8d
0x014d10fb: div    ecx
0x014d10fd: mov    r13d,eax
0x014d1100: mov    DWORD PTR [r14],eax
0x014d1103: jmp    0x1414d0ee6
0x014d1108: xor    al,al
0x014d110a: test   al,al
0x014d110c: je     0x1414d1111
0x014d110e: mov    WORD PTR [rbx],si
0x014d1111: mov    r12,QWORD PTR [rsp+0x70]
0x014d1116: mov    r14,QWORD PTR [rsp+0x78]
0x014d111b: mov    rbx,QWORD PTR [rsp+0x80]
0x014d1123: add    rsp,0x40
0x014d1127: pop    r15
0x014d1129: pop    r13
0x014d112b: pop    rdi
0x014d112c: pop    rsi
0x014d112d: pop    rbp
0x014d112e: ret
