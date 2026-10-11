# reference; PE:6a70a6d9:02711000; plot-insertion; RVA 0x479d60..0x479ef5; PE disassembly
0x00479d60: mov    QWORD PTR [rsp+0x10],rdx
0x00479d65: push   rsi
0x00479d66: push   rdi
0x00479d67: push   r12
0x00479d69: push   r13
0x00479d6b: push   r15
0x00479d6d: sub    rsp,0x30
0x00479d71: lea    r12,[rdx+0x20]
0x00479d75: mov    r13,rdx
0x00479d78: mov    rdi,rcx
0x00479d7b: cmp    r12,rdx
0x00479d7e: je     0x140479d96
0x00479d80: cmp    QWORD PTR [rdx+0x18],0xf
0x00479d85: jbe    0x140479d8a
0x00479d87: mov    rdx,QWORD PTR [rdx]
0x00479d8a: mov    r8,QWORD PTR [r13+0x10]
0x00479d8e: mov    rcx,r12
0x00479d91: call   0x14006f8d0
0x00479d96: mov    rcx,r12
0x00479d99: call   0x14052cee0
0x00479d9e: lea    rsi,[rdi+0x278]
0x00479da5: mov    r15,QWORD PTR [rsi+0x8]
0x00479da9: mov    rcx,QWORD PTR [rsi]
0x00479dac: mov    rax,r15
0x00479daf: sub    rax,rcx
0x00479db2: test   rax,0xfffffffffffffff8
0x00479db8: jne    0x140479df2
0x00479dba: cmp    r15,QWORD PTR [rsi+0x10]
0x00479dbe: je     0x140479dd5
0x00479dc0: mov    QWORD PTR [r15],r13
0x00479dc3: add    QWORD PTR [rsi+0x8],0x8
0x00479dc8: add    rsp,0x30
0x00479dcc: pop    r15
0x00479dce: pop    r13
0x00479dd0: pop    r12
0x00479dd2: pop    rdi
0x00479dd3: pop    rsi
0x00479dd4: ret
0x00479dd5: lea    r8,[rsp+0x68]
0x00479dda: mov    rdx,r15
0x00479ddd: mov    rcx,rsi
0x00479de0: call   0x140070bd0
0x00479de5: add    rsp,0x30
0x00479de9: pop    r15
0x00479deb: pop    r13
0x00479ded: pop    r12
0x00479def: pop    rdi
0x00479df0: pop    rsi
0x00479df1: ret
0x00479df2: mov    rdi,QWORD PTR [rdi+0x280]
0x00479df9: xor    eax,eax
0x00479dfb: mov    QWORD PTR [rsp+0x70],rbx
0x00479e00: mov    rbx,rcx
0x00479e03: mov    QWORD PTR [rsp+0x28],rbp
0x00479e08: mov    DWORD PTR [rsp+0x60],eax
0x00479e0c: mov    QWORD PTR [rsp+0x20],r14
0x00479e11: cmp    rbx,rdi
0x00479e14: jae    0x140479eb9
0x00479e1a: mov    rcx,QWORD PTR [rbx]
0x00479e1d: mov    rdx,r12
0x00479e20: mov    r14,QWORD PTR [r12+0x10]
0x00479e25: add    rcx,0x20
0x00479e29: cmp    QWORD PTR [r12+0x18],0xf
0x00479e2f: jbe    0x140479e35
0x00479e31: mov    rdx,QWORD PTR [r12]
0x00479e35: cmp    QWORD PTR [rcx+0x18],0xf
0x00479e3a: mov    rbp,QWORD PTR [rcx+0x10]
0x00479e3e: jbe    0x140479e43
0x00479e40: mov    rcx,QWORD PTR [rcx]
0x00479e43: cmp    r14,rbp
0x00479e46: mov    r8,rbp
0x00479e49: cmovb  r8,r14
0x00479e4d: call   0x14153ae14
0x00479e52: test   eax,eax
0x00479e54: je     0x140479e5c
0x00479e56: jns    0x140479e67
0x00479e58: mov    al,0xff
0x00479e5a: jmp    0x140479e69
0x00479e5c: cmp    rbp,r14
0x00479e5f: jae    0x140479e65
0x00479e61: mov    al,0xff
0x00479e63: jmp    0x140479e69
0x00479e65: jbe    0x140479e6d
0x00479e67: mov    al,0x1
0x00479e69: test   al,al
0x00479e6b: jg     0x140479e77
0x00479e6d: add    rbx,0x8
0x00479e71: inc    DWORD PTR [rsp+0x60]
0x00479e75: jmp    0x140479e11
0x00479e77: movsxd rax,DWORD PTR [rsp+0x60]
0x00479e7c: mov    rcx,QWORD PTR [rsi]
0x00479e7f: lea    rbx,[rcx+rax*8]
0x00479e83: cmp    r15,QWORD PTR [rsi+0x10]
0x00479e87: je     0x140479eb4
0x00479e89: cmp    rbx,r15
0x00479e8c: je     0x140479ebf
0x00479e8e: mov    rax,QWORD PTR [r15-0x8]
0x00479e92: lea    r8,[r15-0x8]
0x00479e96: mov    QWORD PTR [r15],rax
0x00479e99: sub    r8,rbx
0x00479e9c: add    QWORD PTR [rsi+0x8],0x8
0x00479ea1: sub    r15,r8
0x00479ea4: mov    rcx,r15
0x00479ea7: mov    rdx,rbx
0x00479eaa: call   0x14153ae1a
0x00479eaf: mov    QWORD PTR [rbx],r13
0x00479eb2: jmp    0x140479ed9
0x00479eb4: mov    rdx,rbx
0x00479eb7: jmp    0x140479ecc
0x00479eb9: cmp    r15,QWORD PTR [rsi+0x10]
0x00479ebd: je     0x140479ec9
0x00479ebf: mov    QWORD PTR [r15],r13
0x00479ec2: add    QWORD PTR [rsi+0x8],0x8
0x00479ec7: jmp    0x140479ed9
0x00479ec9: mov    rdx,r15
0x00479ecc: lea    r8,[rsp+0x68]
0x00479ed1: mov    rcx,rsi
0x00479ed4: call   0x140070bd0
0x00479ed9: mov    rbp,QWORD PTR [rsp+0x28]
0x00479ede: mov    r14,QWORD PTR [rsp+0x20]
0x00479ee3: mov    rbx,QWORD PTR [rsp+0x70]
0x00479ee8: add    rsp,0x30
0x00479eec: pop    r15
0x00479eee: pop    r13
0x00479ef0: pop    r12
0x00479ef2: pop    rdi
0x00479ef3: pop    rsi
0x00479ef4: ret
