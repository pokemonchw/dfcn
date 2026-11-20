0x1413d49d0: rex push rbp
0x1413d49d2: push   rbx
0x1413d49d3: push   rsi
0x1413d49d4: push   rdi
0x1413d49d5: push   r12
0x1413d49d7: push   r13
0x1413d49d9: push   r14
0x1413d49db: push   r15
0x1413d49dd: lea    rbp,[rsp-0x1b8]
0x1413d49e5: sub    rsp,0x2b8
0x1413d49ec: movaps XMMWORD PTR [rsp+0x2a0],xmm6
0x1413d49f4: mov    rax,QWORD PTR [rip+0x4e9645]        # 0x1418be040
0x1413d49fb: xor    rax,rsp
0x1413d49fe: mov    QWORD PTR [rbp+0x190],rax
0x1413d4a05: mov    QWORD PTR [rbp-0x48],r9
0x1413d4a09: mov    r13,r8
0x1413d4a0c: movsx  rsi,dx
0x1413d4a10: mov    WORD PTR [rsp+0x60],si
0x1413d4a15: mov    r12,rcx
0x1413d4a18: mov    QWORD PTR [rbp-0x78],rcx
0x1413d4a1c: mov    r8,QWORD PTR [rbp+0x220]
0x1413d4a23: mov    QWORD PTR [rbp-0x70],r8
0x1413d4a27: mov    rax,QWORD PTR [rbp+0x228]
0x1413d4a2e: mov    QWORD PTR [rbp-0x50],rax
0x1413d4a32: mov    r14,QWORD PTR [rbp+0x230]
0x1413d4a39: mov    r15,QWORD PTR [rbp+0x248]
0x1413d4a40: mov    QWORD PTR [rbp-0x60],r15
0x1413d4a44: mov    ebx,0x1
0x1413d4a49: mov    DWORD PTR [r8],ebx
0x1413d4a4c: xor    edi,edi
0x1413d4a4e: mov    DWORD PTR [rax],edi
0x1413d4a50: mov    QWORD PTR [r14],rdi
0x1413d4a53: mov    rcx,QWORD PTR [rcx+0x4f0]
0x1413d4a5a: mov    rax,QWORD PTR [r12+0x4f8]
0x1413d4a62: sub    rax,rcx
0x1413d4a65: sar    rax,0x2
0x1413d4a69: cmp    rax,rsi
0x1413d4a6c: jbe    0x1413d5eb6
0x1413d4a72: test   BYTE PTR [rcx+rsi*4],0x2
0x1413d4a76: jne    0x1413d5eb6
0x1413d4a7c: cmp    DWORD PTR [r13+0x0],edi
0x1413d4a80: jle    0x1413d5eaf
0x1413d4a86: cmp    DWORD PTR [r13+0x98],ebx
0x1413d4a8d: jle    0x1413d4aa0
0x1413d4a8f: mov    rax,QWORD PTR [r13+0x90]
0x1413d4a96: test   BYTE PTR [rax+0x1],0x2
0x1413d4a9a: jne    0x1413d5eaf
0x1413d4aa0: lea    rax,[rip+0xfffffffffec949b9]        # 0x140069460
0x1413d4aa7: mov    QWORD PTR [rsp+0x20],rax
0x1413d4aac: lea    r9,[rip+0xfffffffffec9c20d]        # 0x140070cc0
0x1413d4ab3: mov    edx,0x20
0x1413d4ab8: mov    r8d,0x4
0x1413d4abe: lea    rcx,[rbp+0x100]
0x1413d4ac5: call   0x141553708
0x1413d4aca: mov    DWORD PTR [rbp+0x180],edi
0x1413d4ad0: mov    DWORD PTR [rsp+0x64],edi
0x1413d4ad4: cmp    DWORD PTR [rip+0x4e975d],0x1        # 0x1418be238
0x1413d4adb: jne    0x1413d4b2e
0x1413d4add: test   r12,r12
0x1413d4ae0: je     0x1413d4b2e
0x1413d4ae2: mov    rax,QWORD PTR [rip+0x1032a67]        # 0x142407550
0x1413d4ae9: sub    rax,QWORD PTR [rip+0x1032a58]        # 0x142407548
0x1413d4af0: sar    rax,0x3
0x1413d4af4: test   rax,rax
0x1413d4af7: je     0x1413d4b2e
0x1413d4af9: mov    rax,QWORD PTR [rip+0x1032a90]        # 0x142407590
0x1413d4b00: test   rax,rax
0x1413d4b03: je     0x1413d4b2e
0x1413d4b05: cmp    BYTE PTR [rip+0x128e576],0x0        # 0x142663082
0x1413d4b0c: je     0x1413d4b2e
0x1413d4b0e: cmp    DWORD PTR [r12+0x978],0x64
0x1413d4b17: jge    0x1413d4b2e
0x1413d4b19: cmp    r12,rax
0x1413d4b1c: jne    0x1413d4b2e
0x1413d4b1e: mov    WORD PTR [r12+0xbe0],bx
0x1413d4b27: mov    BYTE PTR [rip+0x128e555],0x1        # 0x142663083
0x1413d4b2e: xorps  xmm0,xmm0
0x1413d4b31: movdqa XMMWORD PTR [rbp-0x20],xmm0
0x1413d4b36: mov    QWORD PTR [rbp+0x78],rdi
0x1413d4b3a: mov    QWORD PTR [rbp+0x88],rdi
0x1413d4b41: mov    QWORD PTR [rbp+0x98],rdi
0x1413d4b48: mov    QWORD PTR [rbp+0x80],rdi
0x1413d4b4f: mov    QWORD PTR [rbp+0x90],rdi
0x1413d4b56: movdqa XMMWORD PTR [rbp+0xa0],xmm0
0x1413d4b5e: mov    QWORD PTR [rbp+0xb8],rdi
0x1413d4b65: mov    QWORD PTR [rbp+0xc8],rdi
0x1413d4b6c: mov    QWORD PTR [rbp+0xb0],rdi
0x1413d4b73: mov    QWORD PTR [rbp+0xc0],rdi
0x1413d4b7a: mov    QWORD PTR [rbp+0xd0],rdi
0x1413d4b81: mov    BYTE PTR [rbp+0x70],0x0
0x1413d4b85: mov    BYTE PTR [rbp+0x72],0x0
0x1413d4b89: mov    rcx,QWORD PTR [r13+0x38]
0x1413d4b8d: test   rcx,rcx
0x1413d4b90: je     0x1413d4c6a
0x1413d4b96: mov    rax,QWORD PTR [rcx]
0x1413d4b99: call   QWORD PTR [rax+0x40]
0x1413d4b9c: mov    ebx,eax
0x1413d4b9e: mov    rcx,QWORD PTR [r13+0x38]
0x1413d4ba2: mov    rdx,QWORD PTR [rcx]
0x1413d4ba5: call   QWORD PTR [rdx+0x38]
0x1413d4ba8: mov    r8d,ebx
0x1413d4bab: movzx  edx,ax
0x1413d4bae: lea    rcx,[rip+0x101edbb]        # 0x1423f3970
0x1413d4bb5: call   0x1414c6fe0
0x1413d4bba: mov    QWORD PTR [rbp-0x20],rax
0x1413d4bbe: test   rax,rax
0x1413d4bc1: je     0x1413d5e8b
0x1413d4bc7: mov    rcx,QWORD PTR [r13+0x38]
0x1413d4bcb: mov    rax,QWORD PTR [rcx]
0x1413d4bce: call   QWORD PTR [rax+0x2c0]
0x1413d4bd4: movsxd rcx,eax
0x1413d4bd7: mov    QWORD PTR [rbp+0x0],rcx
0x1413d4bdb: mov    QWORD PTR [rbp+0x10],rcx
0x1413d4bdf: mov    rcx,QWORD PTR [r13+0x38]
0x1413d4be3: mov    rax,QWORD PTR [rcx]
0x1413d4be6: call   QWORD PTR [rax+0x168]
0x1413d4bec: movsxd rcx,eax
0x1413d4bef: mov    QWORD PTR [rbp+0x20],rcx
0x1413d4bf3: mov    rbx,QWORD PTR [r13+0x38]
0x1413d4bf7: test   DWORD PTR [rbx+0x10],0x20000000
0x1413d4bfe: jne    0x1413d4c08
0x1413d4c00: mov    rcx,rbx
0x1413d4c03: call   0x140c7dc00
0x1413d4c08: mov    esi,DWORD PTR [rbx+0x74]
0x1413d4c0b: mov    rbx,QWORD PTR [r13+0x38]
0x1413d4c0f: test   DWORD PTR [rbx+0x10],0x20000000
0x1413d4c16: jne    0x1413d4c20
0x1413d4c18: mov    rcx,rbx
0x1413d4c1b: call   0x140c7dc00
0x1413d4c20: mov    eax,0x10624dd3
0x1413d4c25: imul   DWORD PTR [rbx+0x78]
0x1413d4c28: sar    edx,0x6
0x1413d4c2b: mov    eax,edx
0x1413d4c2d: shr    eax,0x1f
0x1413d4c30: add    edx,eax
0x1413d4c32: imul   eax,esi,0x3e8
0x1413d4c38: add    edx,eax
0x1413d4c3a: movsxd r8,edx
0x1413d4c3d: mov    QWORD PTR [rbp+0x30],r8
0x1413d4c41: test   edx,edx
0x1413d4c43: jg     0x1413d4c58
0x1413d4c45: cmp    QWORD PTR [rbp+0x20],0x0
0x1413d4c4a: jle    0x1413d4c58
0x1413d4c4c: mov    ecx,0x1
0x1413d4c51: mov    r8d,ecx
0x1413d4c54: mov    QWORD PTR [rbp+0x30],rcx
0x1413d4c58: movsxd rcx,DWORD PTR [r13+0x0]
0x1413d4c5c: imul   rcx,r8
0x1413d4c60: movzx  esi,WORD PTR [rsp+0x60]
0x1413d4c65: jmp    0x1413d4d54
0x1413d4c6a: movzx  edx,WORD PTR [r13+0x140]
0x1413d4c72: cmp    dx,0xffff
0x1413d4c76: je     0x1413d5e8b
0x1413d4c7c: mov    r8d,DWORD PTR [r13+0x144]
0x1413d4c83: lea    rcx,[rip+0x101ece6]        # 0x1423f3970
0x1413d4c8a: call   0x1414c6fe0
0x1413d4c8f: mov    rdx,rax
0x1413d4c92: mov    QWORD PTR [rbp-0x20],rax
0x1413d4c96: test   rax,rax
0x1413d4c99: je     0x1413d5e8b
0x1413d4c9f: movsxd r9,DWORD PTR [r13+0x13c]
0x1413d4ca6: mov    QWORD PTR [rbp+0x0],r9
0x1413d4caa: mov    QWORD PTR [rbp+0x10],r9
0x1413d4cae: movsx  rax,WORD PTR [r13+0x148]
0x1413d4cb6: cmp    eax,0x5
0x1413d4cb9: ja     0x1413d4d09
0x1413d4cbb: lea    r8,[rip+0xfffffffffec2b33e]        # 0x140000000
0x1413d4cc2: mov    eax,DWORD PTR [r8+rax*4+0x13d5ee4]
0x1413d4cca: add    rax,r8
0x1413d4ccd: jmp    rax
0x1413d4ccf: movsxd r8,DWORD PTR [rdx+0x90]
0x1413d4cd6: mov    QWORD PTR [rbp+0x20],r8
0x1413d4cda: jmp    0x1413d4d0d
0x1413d4cdc: movsxd r8,DWORD PTR [rdx+0x94]
0x1413d4ce3: mov    QWORD PTR [rbp+0x20],r8
0x1413d4ce7: jmp    0x1413d4d0d
0x1413d4ce9: mov    eax,0x10624dd3
0x1413d4cee: imul   DWORD PTR [rdx+0x98]
0x1413d4cf4: sar    edx,0x6
0x1413d4cf7: mov    eax,edx
0x1413d4cf9: shr    eax,0x1f
0x1413d4cfc: inc    eax
0x1413d4cfe: add    eax,edx
0x1413d4d00: movsxd r8,eax
0x1413d4d03: mov    QWORD PTR [rbp+0x20],r8
0x1413d4d07: jmp    0x1413d4d0d
0x1413d4d09: mov    r8,QWORD PTR [rbp+0x20]
0x1413d4d0d: mov    rcx,r8
0x1413d4d10: imul   rcx,r9
0x1413d4d14: movabs rax,0xa3d70a3d70a3d70b
0x1413d4d1e: imul   rcx
0x1413d4d21: add    rdx,rcx
0x1413d4d24: sar    rdx,0x6
0x1413d4d28: mov    rax,rdx
0x1413d4d2b: shr    rax,0x3f
0x1413d4d2f: add    rdx,rax
0x1413d4d32: mov    QWORD PTR [rbp+0x30],rdx
0x1413d4d36: test   rdx,rdx
0x1413d4d39: jg     0x1413d4d4c
0x1413d4d3b: test   r9,r9
0x1413d4d3e: jle    0x1413d4d4c
0x1413d4d40: test   r8,r8
0x1413d4d43: jle    0x1413d4d4c
0x1413d4d45: mov    rdx,rbx
0x1413d4d48: mov    QWORD PTR [rbp+0x30],rbx
0x1413d4d4c: movsxd rcx,DWORD PTR [r13+0x0]
0x1413d4d50: imul   rcx,rdx
0x1413d4d54: movsxd rax,DWORD PTR [r13+0x130]
0x1413d4d5b: mov    QWORD PTR [rbp-0x10],rax
0x1413d4d5f: movsxd rax,DWORD PTR [r13+0x134]
0x1413d4d66: mov    QWORD PTR [rbp+0x60],rax
0x1413d4d6a: mov    eax,DWORD PTR [r13+0x138]
0x1413d4d71: mov    DWORD PTR [rbp+0x74],eax
0x1413d4d74: movabs rax,0x20c49ba5e353f7cf
0x1413d4d7e: imul   rcx
0x1413d4d81: sar    rdx,0x7
0x1413d4d85: mov    rcx,rdx
0x1413d4d88: shr    rcx,0x3f
0x1413d4d8c: inc    rcx
0x1413d4d8f: add    rcx,rdx
0x1413d4d92: mov    QWORD PTR [rbp+0x40],rcx
0x1413d4d96: mov    QWORD PTR [r14],rcx
0x1413d4d99: test   DWORD PTR [r12+0x110],0x8000
0x1413d4da5: je     0x1413d4dc5
0x1413d4da7: cmp    DWORD PTR [r13+0x98],0x0
0x1413d4daf: jle    0x1413d4dbd
0x1413d4db1: mov    rax,QWORD PTR [r13+0x90]
0x1413d4db8: test   BYTE PTR [rax],0x10
0x1413d4dbb: jne    0x1413d4dc5
0x1413d4dbd: lea    rax,[rcx+rcx*1]
0x1413d4dc1: mov    QWORD PTR [rbp+0x40],rax
0x1413d4dc5: xorps  xmm0,xmm0
0x1413d4dc8: movdqu XMMWORD PTR [rbp-0x40],xmm0
0x1413d4dcd: mov    QWORD PTR [rbp-0x30],rdi
0x1413d4dd1: lea    r8,[rbp-0x40]
0x1413d4dd5: movzx  edx,si
0x1413d4dd8: mov    rcx,r12
0x1413d4ddb: call   0x1413db080
0x1413d4de0: mov    rax,QWORD PTR [rbp-0x38]
0x1413d4de4: mov    rcx,QWORD PTR [rbp-0x40]
0x1413d4de8: sub    rax,rcx
0x1413d4deb: sar    rax,1
0x1413d4dee: je     0x1413d4df8
0x1413d4df0: movzx  esi,WORD PTR [rcx]
0x1413d4df3: mov    WORD PTR [rsp+0x60],si
0x1413d4df8: test   rcx,rcx
0x1413d4dfb: je     0x1413d4e38
0x1413d4dfd: mov    rax,QWORD PTR [rbp-0x30]
0x1413d4e01: sub    rax,rcx
0x1413d4e04: sar    rax,1
0x1413d4e07: lea    rdx,[rax+rax*1]
0x1413d4e0b: mov    rax,rcx
0x1413d4e0e: cmp    rdx,0x1000
0x1413d4e15: jb     0x1413d4e33
0x1413d4e17: add    rdx,0x27
0x1413d4e1b: mov    rcx,QWORD PTR [rcx-0x8]
0x1413d4e1f: sub    rax,rcx
0x1413d4e22: add    rax,0xfffffffffffffff8
0x1413d4e26: cmp    rax,0x1f
0x1413d4e2a: jbe    0x1413d4e33
0x1413d4e2c: call   QWORD PTR [rip+0x22bd0e]        # 0x141600b40
0x1413d4e32: int3
0x1413d4e33: call   0x1415530d0
0x1413d4e38: mov    edx,0x2
0x1413d4e3d: mov    r14,0xffffffffffffffff
0x1413d4e44: mov    DWORD PTR [rsp+0x50],r14d
0x1413d4e49: mov    WORD PTR [rsp+0x48],r14w
0x1413d4e4f: mov    DWORD PTR [rsp+0x40],0x3
0x1413d4e57: mov    QWORD PTR [rsp+0x38],rdi
0x1413d4e5c: mov    QWORD PTR [rsp+0x30],rdi
0x1413d4e61: mov    DWORD PTR [rsp+0x28],0x3
0x1413d4e69: mov    DWORD PTR [rsp+0x20],0x32
0x1413d4e71: mov    r9d,0x5
0x1413d4e77: mov    r8d,0x65
0x1413d4e7d: mov    rcx,r12
0x1413d4e80: call   0x1413812a0
0x1413d4e85: mov    ecx,eax
0x1413d4e87: mov    DWORD PTR [rbp-0x80],eax
0x1413d4e8a: mov    eax,0x66666667
0x1413d4e8f: imul   ecx
0x1413d4e91: mov    ebx,edx
0x1413d4e93: sar    ebx,0x2
0x1413d4e96: mov    ecx,ebx
0x1413d4e98: shr    ecx,0x1f
0x1413d4e9b: add    ebx,ecx
0x1413d4e9d: cmp    ebx,DWORD PTR [rbp+0x240]
0x1413d4ea3: cmovl  ebx,DWORD PTR [rbp+0x240]
0x1413d4eaa: mov    eax,0x14
0x1413d4eaf: test   ebx,ebx
0x1413d4eb1: jg     0x1413d4ebb
0x1413d4eb3: mov    DWORD PTR [r15],eax
0x1413d4eb6: mov    r9d,eax
0x1413d4eb9: jmp    0x1413d4ef0
0x1413d4ebb: mov    r9d,DWORD PTR [r13+0x14c]
0x1413d4ec2: mov    ecx,r9d
0x1413d4ec5: sub    ecx,ebx
0x1413d4ec7: mov    eax,0x55555556
0x1413d4ecc: imul   ecx
0x1413d4ece: mov    r8d,edx
0x1413d4ed1: shr    r8d,0x1f
0x1413d4ed5: add    r8d,edx
0x1413d4ed8: mov    eax,r9d
0x1413d4edb: cdq
0x1413d4edc: idiv   ebx
0x1413d4ede: lea    r9d,[r8+rax*1]
0x1413d4ee2: mov    DWORD PTR [r15],r9d
0x1413d4ee5: test   r9d,r9d
0x1413d4ee8: jns    0x1413d4ef0
0x1413d4eea: mov    DWORD PTR [r15],edi
0x1413d4eed: mov    r9d,edi
0x1413d4ef0: lea    ecx,[rbx+0x32]
0x1413d4ef3: cmp    ecx,0x64
0x1413d4ef6: jl     0x1413d4f19
0x1413d4ef8: mov    eax,0x51eb851f
0x1413d4efd: imul   ecx
0x1413d4eff: mov    r8d,edx
0x1413d4f02: sar    r8d,0x4
0x1413d4f06: mov    ecx,r8d
0x1413d4f09: shr    ecx,0x1f
0x1413d4f0c: add    r8d,ecx
0x1413d4f0f: mov    eax,r9d
0x1413d4f12: cdq
0x1413d4f13: idiv   r8d
0x1413d4f16: mov    DWORD PTR [r15],eax
0x1413d4f19: call   0x140ece790
0x1413d4f1e: mov    r8d,eax
0x1413d4f21: mov    eax,0x3
0x1413d4f26: mul    r8d
0x1413d4f29: mov    ecx,r8d
0x1413d4f2c: sub    ecx,edx
0x1413d4f2e: shr    ecx,1
0x1413d4f30: add    ecx,edx
0x1413d4f32: shr    ecx,0x1e
0x1413d4f35: imul   ecx,ecx,0x7fffffff
0x1413d4f3b: sub    r8d,ecx
0x1413d4f3e: cmp    r8d,0x2aaaaaab
0x1413d4f45: jae    0x1413d4fdf
0x1413d4f4b: call   0x140ece790
0x1413d4f50: mov    r8d,eax
0x1413d4f53: mov    eax,0x3
0x1413d4f58: mul    r8d
0x1413d4f5b: mov    ecx,r8d
0x1413d4f5e: sub    ecx,edx
0x1413d4f60: shr    ecx,1
0x1413d4f62: add    ecx,edx
0x1413d4f64: shr    ecx,0x1e
0x1413d4f67: imul   ecx,ecx,0x7fffffff
0x1413d4f6d: sub    r8d,ecx
0x1413d4f70: mov    eax,0x2bfffffd
0x1413d4f75: mul    r8d
0x1413d4f78: shr    edx,0x19
0x1413d4f7b: add    DWORD PTR [r15],edx
0x1413d4f7e: call   0x140ece790
0x1413d4f83: mov    r8d,eax
0x1413d4f86: mov    eax,0x3
0x1413d4f8b: mul    r8d
0x1413d4f8e: mov    ecx,r8d
0x1413d4f91: sub    ecx,edx
0x1413d4f93: shr    ecx,1
0x1413d4f95: add    ecx,edx
0x1413d4f97: shr    ecx,0x1e
0x1413d4f9a: imul   ecx,ecx,0x80000001
0x1413d4fa0: add    r8d,ecx
0x1413d4fa3: cmp    r8d,0x20000000
0x1413d4faa: jae    0x1413d4fdf
0x1413d4fac: call   0x140ece790
0x1413d4fb1: mov    r8d,eax
0x1413d4fb4: mov    eax,0x3
0x1413d4fb9: mul    r8d
0x1413d4fbc: mov    ecx,r8d
0x1413d4fbf: sub    ecx,edx
0x1413d4fc1: shr    ecx,1
0x1413d4fc3: add    ecx,edx
0x1413d4fc5: shr    ecx,0x1e
0x1413d4fc8: imul   ecx,ecx,0x80000001
0x1413d4fce: add    r8d,ecx
0x1413d4fd1: mov    eax,0x2bfffffd
0x1413d4fd6: mul    r8d
0x1413d4fd9: shr    edx,0x19
0x1413d4fdc: add    DWORD PTR [r15],edx
0x1413d4fdf: mov    eax,DWORD PTR [r15]
0x1413d4fe2: test   eax,eax
0x1413d4fe4: jns    0x1413d5005
0x1413d4fe6: mov    DWORD PTR [r15],edi
0x1413d4fe9: mov    eax,edi
0x1413d4feb: mov    r8d,0x14
0x1413d4ff1: test   ebx,ebx
0x1413d4ff3: jle    0x1413d506d
0x1413d4ff5: mov    ecx,DWORD PTR [rbp+0x250]
0x1413d4ffb: cmp    ecx,0xfffffffd
0x1413d4ffe: jg     0x1413d5018
0x1413d5000: mov    DWORD PTR [r15],edi
0x1413d5003: jmp    0x1413d506d
0x1413d5005: cmp    eax,0x14
0x1413d5008: jle    0x1413d4feb
0x1413d500a: mov    r8d,0x14
0x1413d5010: mov    DWORD PTR [r15],r8d
0x1413d5013: mov    eax,r8d
0x1413d5016: jmp    0x1413d4ff1
0x1413d5018: cmp    ecx,0xfffffffe
0x1413d501b: jne    0x1413d502b
0x1413d501d: cdq
0x1413d501e: and    edx,0x3
0x1413d5021: add    eax,edx
0x1413d5023: sar    eax,0x2
0x1413d5026: mov    DWORD PTR [r15],eax
0x1413d5029: jmp    0x1413d505c
0x1413d502b: cmp    ecx,r14d
0x1413d502e: jne    0x1413d503a
0x1413d5030: cdq
0x1413d5031: sub    eax,edx
0x1413d5033: sar    eax,1
0x1413d5035: mov    DWORD PTR [r15],eax
0x1413d5038: jmp    0x1413d505c
0x1413d503a: cmp    ecx,0x1
0x1413d503d: jne    0x1413d5046
0x1413d503f: add    eax,eax
0x1413d5041: mov    DWORD PTR [r15],eax
0x1413d5044: jmp    0x1413d505c
0x1413d5046: cmp    ecx,0x2
0x1413d5049: jne    0x1413d5057
0x1413d504b: lea    eax,[rax*4+0x0]
0x1413d5052: mov    DWORD PTR [r15],eax
0x1413d5055: jmp    0x1413d505c
0x1413d5057: cmp    ecx,0x3
0x1413d505a: jge    0x1413d506a
0x1413d505c: test   eax,eax
0x1413d505e: jns    0x1413d5065
0x1413d5060: mov    DWORD PTR [r15],edi
0x1413d5063: jmp    0x1413d506d
0x1413d5065: cmp    eax,0x14
0x1413d5068: jle    0x1413d506d
0x1413d506a: mov    DWORD PTR [r15],r8d
0x1413d506d: mov    DWORD PTR [rsp+0x68],r14d
0x1413d5072: mov    QWORD PTR [rbp-0x68],r14
0x1413d5076: mov    rax,QWORD PTR [r12+0x410]
0x1413d507e: sub    rax,QWORD PTR [r12+0x408]
0x1413d5086: sar    rax,0x3
0x1413d508a: movdqa xmm6,XMMWORD PTR [rip+0x3d691e]        # 0x1417ab9b0
0x1413d5092: sub    eax,0x1
0x1413d5095: js     0x1413d5bae
0x1413d509b: cdqe
0x1413d509d: mov    QWORD PTR [rsp+0x70],rax
0x1413d50a2: nop    DWORD PTR [rax+0x0]
0x1413d50a6: data16 nop WORD PTR [rax+rax*1+0x0]
0x1413d50b0: mov    rdx,QWORD PTR [r12+0x408]
0x1413d50b8: mov    rcx,QWORD PTR [rdx+rax*8]
0x1413d50bc: movzx  eax,WORD PTR [rcx+0x8]
0x1413d50c0: cmp    ax,0x2
0x1413d50c4: je     0x1413d50fc
0x1413d50c6: cmp    ax,0x5
0x1413d50ca: je     0x1413d50fc
0x1413d50cc: mov    rcx,QWORD PTR [rcx]
0x1413d50cf: mov    rax,QWORD PTR [rcx]
0x1413d50d2: call   QWORD PTR [rax]
0x1413d50d4: cmp    ax,0x1b
0x1413d50d8: jne    0x1413d5988
0x1413d50de: mov    rdx,QWORD PTR [r12+0x408]
0x1413d50e6: mov    rbx,QWORD PTR [rsp+0x70]
0x1413d50eb: mov    rax,QWORD PTR [rdx+rbx*8]
0x1413d50ef: cmp    WORD PTR [rax+0x8],0x1
0x1413d50f4: jne    0x1413d5988
0x1413d50fa: jmp    0x1413d5101
0x1413d50fc: mov    rbx,QWORD PTR [rsp+0x70]
0x1413d5101: movzx  r8d,si
0x1413d5105: mov    rdx,QWORD PTR [rdx+rbx*8]
0x1413d5109: mov    rcx,r12
0x1413d510c: call   0x14139fa70
0x1413d5111: test   al,al
0x1413d5113: je     0x1413d5988
0x1413d5119: mov    rax,QWORD PTR [r12+0x408]
0x1413d5121: mov    rcx,QWORD PTR [rax+rbx*8]
0x1413d5125: mov    rsi,QWORD PTR [rcx]
0x1413d5128: call   0x140ece790
0x1413d512d: mov    r8d,eax
0x1413d5130: mov    eax,0x3
0x1413d5135: mul    r8d
0x1413d5138: mov    ecx,r8d
0x1413d513b: sub    ecx,edx
0x1413d513d: shr    ecx,1
0x1413d513f: add    ecx,edx
0x1413d5141: shr    ecx,0x1e
0x1413d5144: imul   ecx,ecx,0x80000001
0x1413d514a: add    r8d,ecx
0x1413d514d: mov    eax,0xc7ffffaf
0x1413d5152: mul    r8d
0x1413d5155: mov    r14d,edx
0x1413d5158: shr    r14d,0x18
0x1413d515c: mov    rax,QWORD PTR [rsi]
0x1413d515f: mov    rcx,rsi
0x1413d5162: call   QWORD PTR [rax+0x8]
0x1413d5165: movsx  rbx,ax
0x1413d5169: mov    r8,QWORD PTR [rsi]
0x1413d516c: mov    rcx,rsi
0x1413d516f: call   QWORD PTR [r8]
0x1413d5172: movsx  ecx,ax
0x1413d5175: add    ecx,0xffffffe7
0x1413d5178: lea    r15,[rip+0xfffffffffec2ae81]        # 0x140000000
0x1413d517f: cmp    ecx,0x3c
0x1413d5182: ja     0x1413d52be
0x1413d5188: movsxd rcx,ecx
0x1413d518b: movzx  ecx,BYTE PTR [r15+rcx*1+0x13d5f28]
0x1413d5194: mov    edx,DWORD PTR [r15+rcx*4+0x13d5efc]
0x1413d519c: add    rdx,r15
0x1413d519f: jmp    rdx
0x1413d51a1: test   bx,bx
0x1413d51a4: js     0x1413d52be
0x1413d51aa: mov    rax,QWORD PTR [rip+0x113a0e7]        # 0x14250f298
0x1413d51b1: mov    rdx,QWORD PTR [rip+0x113a0d8]        # 0x14250f290
0x1413d51b8: sub    rax,rdx
0x1413d51bb: sar    rax,0x3
0x1413d51bf: cmp    rbx,rax
0x1413d51c2: jae    0x1413d52be
0x1413d51c8: mov    rax,QWORD PTR [rdx+rbx*8]
0x1413d51cc: movzx  ecx,WORD PTR [rax+0x130]
0x1413d51d3: jmp    0x1413d52c1
0x1413d51d8: test   bx,bx
0x1413d51db: js     0x1413d52be
0x1413d51e1: mov    rax,QWORD PTR [rip+0x113a158]        # 0x14250f340
0x1413d51e8: mov    rdx,QWORD PTR [rip+0x113a149]        # 0x14250f338
0x1413d51ef: sub    rax,rdx
0x1413d51f2: sar    rax,0x3
0x1413d51f6: cmp    rbx,rax
0x1413d51f9: jae    0x1413d52be
0x1413d51ff: mov    rax,QWORD PTR [rdx+rbx*8]
0x1413d5203: movzx  ecx,WORD PTR [rax+0x140]
0x1413d520a: jmp    0x1413d52c1
0x1413d520f: test   bx,bx
0x1413d5212: js     0x1413d52be
0x1413d5218: mov    rax,QWORD PTR [rip+0x113a0c1]        # 0x14250f2e0
0x1413d521f: mov    rdx,QWORD PTR [rip+0x113a0b2]        # 0x14250f2d8
0x1413d5226: sub    rax,rdx
0x1413d5229: sar    rax,0x3
0x1413d522d: cmp    rbx,rax
0x1413d5230: jae    0x1413d52be
0x1413d5236: mov    rax,QWORD PTR [rdx+rbx*8]
0x1413d523a: movzx  ecx,WORD PTR [rax+0x100]
0x1413d5241: jmp    0x1413d52c1
0x1413d5243: test   bx,bx
0x1413d5246: js     0x1413d52be
0x1413d5248: mov    rax,QWORD PTR [rip+0x113a0a9]        # 0x14250f2f8
0x1413d524f: mov    rdx,QWORD PTR [rip+0x113a09a]        # 0x14250f2f0
0x1413d5256: sub    rax,rdx
0x1413d5259: sar    rax,0x3
0x1413d525d: cmp    rbx,rax
0x1413d5260: jae    0x1413d52be
0x1413d5262: mov    rax,QWORD PTR [rdx+rbx*8]
0x1413d5266: movzx  ecx,WORD PTR [rax+0x100]
0x1413d526d: jmp    0x1413d52c1
0x1413d526f: test   bx,bx
0x1413d5272: js     0x1413d52be
0x1413d5274: mov    rax,QWORD PTR [rip+0x113a0ad]        # 0x14250f328
0x1413d527b: mov    rdx,QWORD PTR [rip+0x113a09e]        # 0x14250f320
0x1413d5282: sub    rax,rdx
0x1413d5285: sar    rax,0x3
0x1413d5289: cmp    rbx,rax
0x1413d528c: jae    0x1413d52be
0x1413d528e: mov    rax,QWORD PTR [rdx+rbx*8]
0x1413d5292: movzx  ecx,WORD PTR [rax+0x100]
0x1413d5299: jmp    0x1413d52c1
0x1413d529b: mov    ecx,0x1
0x1413d52a0: jmp    0x1413d52c1
0x1413d52a2: mov    ecx,0x14
0x1413d52a7: jmp    0x1413d52c1
0x1413d52a9: mov    ecx,0x32
0x1413d52ae: jmp    0x1413d52c1
0x1413d52b0: mov    ecx,0x1e
0x1413d52b5: jmp    0x1413d52c1
0x1413d52b7: mov    ecx,0x64
0x1413d52bc: jmp    0x1413d52c1
0x1413d52be: movzx  ecx,di
0x1413d52c1: movsx  eax,cx
0x1413d52c4: cmp    r14d,eax
0x1413d52c7: jge    0x1413d5988
0x1413d52cd: mov    r14d,DWORD PTR [rbp-0x80]
0x1413d52d1: mov    ebx,r14d
0x1413d52d4: mov    rax,QWORD PTR [rsi]
0x1413d52d7: mov    rcx,rsi
0x1413d52da: call   QWORD PTR [rax+0x508]
0x1413d52e0: lea    edx,[rax+0x5]
0x1413d52e3: test   DWORD PTR [rsi+0x10],0x8000000
0x1413d52ea: cmove  dx,ax
0x1413d52ee: movsx  eax,dx
0x1413d52f1: dec    eax
0x1413d52f3: cmp    eax,0x9
0x1413d52f6: ja     0x1413d535c
0x1413d52f8: cdqe
0x1413d52fa: mov    ecx,DWORD PTR [r15+rax*4+0x13d5f68]
0x1413d5302: add    rcx,r15
0x1413d5305: jmp    rcx
0x1413d5307: lea    ebx,[r14+r14*2]
0x1413d530b: jmp    0x1413d535c
0x1413d530d: imul   ecx,r14d,0xe
0x1413d5311: jmp    0x1413d534a
0x1413d5313: imul   ecx,r14d,0xd
0x1413d5317: jmp    0x1413d534a
0x1413d5319: lea    ecx,[r14+r14*2]
0x1413d531d: shl    ecx,0x2
0x1413d5320: jmp    0x1413d534a
0x1413d5322: imul   ecx,r14d,0xb
0x1413d5326: jmp    0x1413d534a
0x1413d5328: lea    ebx,[r14+r14*1]
0x1413d532c: jmp    0x1413d535c
0x1413d532e: lea    ecx,[r14+r14*8]
0x1413d5332: jmp    0x1413d534a
0x1413d5334: lea    ecx,[r14*8+0x0]
0x1413d533c: jmp    0x1413d534a
0x1413d533e: imul   ecx,r14d,0x7
0x1413d5342: jmp    0x1413d534a
0x1413d5344: lea    ecx,[r14+r14*2]
0x1413d5348: add    ecx,ecx
0x1413d534a: mov    eax,0x66666667
0x1413d534f: imul   ecx
0x1413d5351: mov    ebx,edx
0x1413d5353: sar    ebx,1
0x1413d5355: mov    eax,ebx
0x1413d5357: shr    eax,0x1f
0x1413d535a: add    ebx,eax
0x1413d535c: lea    rdx,[r12+0xd50]
0x1413d5364: mov    ecx,DWORD PTR [rsi+0x1c]
0x1413d5367: call   0x1400bb3f0
0x1413d536c: mov    r8,rax
0x1413d536f: test   rax,rax
0x1413d5372: jne    0x1413d5378
0x1413d5374: mov    eax,edi
0x1413d5376: jmp    0x1413d53b3
0x1413d5378: mov    eax,0x51eb851f
0x1413d537d: imul   DWORD PTR [r8+0xc]
0x1413d5381: mov    ecx,edx
0x1413d5383: sar    ecx,0x5
0x1413d5386: mov    eax,ecx
0x1413d5388: shr    eax,0x1f
0x1413d538b: add    ecx,eax
0x1413d538d: mov    eax,0x6ef5de4d
0x1413d5392: imul   DWORD PTR [r8+0x4]
0x1413d5396: sar    edx,0x13
0x1413d5399: mov    eax,edx
0x1413d539b: shr    eax,0x1f
0x1413d539e: add    edx,ecx
0x1413d53a0: add    eax,edx
0x1413d53a2: jns    0x1413d53a8
0x1413d53a4: mov    eax,edi
0x1413d53a6: jmp    0x1413d53b3
0x1413d53a8: cmp    eax,0x64
0x1413d53ab: mov    ecx,0x64
0x1413d53b0: cmovg  eax,ecx
0x1413d53b3: lea    ecx,[rax+0x64]
0x1413d53b6: imul   ecx,ebx
0x1413d53b9: mov    eax,0x51eb851f
0x1413d53be: imul   ecx
0x1413d53c0: mov    r14d,edx
0x1413d53c3: sar    r14d,0x5
0x1413d53c7: mov    eax,r14d
0x1413d53ca: shr    eax,0x1f
0x1413d53cd: add    r14d,eax
0x1413d53d0: mov    rax,QWORD PTR [rsi]
0x1413d53d3: mov    rcx,rsi
0x1413d53d6: call   QWORD PTR [rax+0x708]
0x1413d53dc: lea    rdx,[r12+0xd50]
0x1413d53e4: mov    ecx,DWORD PTR [rsi+0x1c]
0x1413d53e7: call   0x1400bb3f0
0x1413d53ec: mov    rbx,rax
0x1413d53ef: test   rax,rax
0x1413d53f2: jne    0x1413d5427
0x1413d53f4: mov    ecx,0x10
0x1413d53f9: call   0x1415530e0
0x1413d53fe: mov    rbx,rax
0x1413d5401: mov    QWORD PTR [rbp-0x28],rax
0x1413d5405: mov    DWORD PTR [rax],0xffffffff
0x1413d540b: mov    QWORD PTR [rax+0x4],rdi
0x1413d540f: mov    DWORD PTR [rax+0xc],edi
0x1413d5412: mov    eax,DWORD PTR [rsi+0x1c]
0x1413d5415: mov    DWORD PTR [rbx],eax
0x1413d5417: lea    rdx,[r12+0xd50]
0x1413d541f: mov    rcx,rbx
0x1413d5422: call   0x1400bb5d0
0x1413d5427: inc    DWORD PTR [rbx+0xc]
0x1413d542a: movsxd rax,r14d
0x1413d542d: mov    QWORD PTR [rbp+0x48],rax
0x1413d5431: movdqa XMMWORD PTR [rbp+0x50],xmm6
0x1413d5436: mov    QWORD PTR [rbp-0x8],rdi
0x1413d543a: mov    rax,QWORD PTR [rsi]
0x1413d543d: mov    rcx,rsi
0x1413d5440: call   QWORD PTR [rax+0x2c0]
0x1413d5446: movsxd rcx,eax
0x1413d5449: mov    QWORD PTR [rbp+0x68],rcx
0x1413d544d: mov    rax,QWORD PTR [rbp+0x60]
0x1413d5451: cmp    rcx,rax
0x1413d5454: jle    0x1413d545a
0x1413d5456: mov    QWORD PTR [rbp+0x68],rax
0x1413d545a: mov    rax,QWORD PTR [rsi]
0x1413d545d: mov    rcx,rsi
0x1413d5460: call   QWORD PTR [rax+0x40]
0x1413d5463: mov    ebx,eax
0x1413d5465: mov    rdx,QWORD PTR [rsi]
0x1413d5468: mov    rcx,rsi
0x1413d546b: call   QWORD PTR [rdx+0x38]
0x1413d546e: mov    r8d,ebx
0x1413d5471: movzx  edx,ax
0x1413d5474: lea    rcx,[rip+0x101e4f5]        # 0x1423f3970
0x1413d547b: call   0x1414c6fe0
0x1413d5480: mov    QWORD PTR [rbp-0x18],rax
0x1413d5484: test   rax,rax
0x1413d5487: je     0x1413d5988
0x1413d548d: mov    rax,QWORD PTR [rsi]
0x1413d5490: mov    r9d,DWORD PTR [rbp+0x60]
0x1413d5494: movzx  r8d,WORD PTR [r12+0x12c]
0x1413d549d: mov    edx,DWORD PTR [r12+0xa4]
0x1413d54a5: mov    rcx,rsi
0x1413d54a8: call   QWORD PTR [rax+0x6e0]
0x1413d54ae: movsxd r8,eax
0x1413d54b1: mov    QWORD PTR [rbp+0x8],r8
0x1413d54b5: mov    QWORD PTR [rbp+0x18],0x5
0x1413d54bd: mov    rax,QWORD PTR [rbp-0x18]
0x1413d54c1: movsxd r9,DWORD PTR [rax+0x90]
0x1413d54c8: mov    QWORD PTR [rbp+0x28],r9
0x1413d54cc: mov    rcx,r8
0x1413d54cf: imul   rcx,r9
0x1413d54d3: movabs rax,0x20c49ba5e353f7cf
0x1413d54dd: imul   rcx
0x1413d54e0: sar    rdx,0x7
0x1413d54e4: mov    rax,rdx
0x1413d54e7: shr    rax,0x3f
0x1413d54eb: add    rdx,rax
0x1413d54ee: mov    QWORD PTR [rbp+0x38],rdx
0x1413d54f2: test   rdx,rdx
0x1413d54f5: jg     0x1413d550a
0x1413d54f7: test   r8,r8
0x1413d54fa: jle    0x1413d550a
0x1413d54fc: test   r9,r9
0x1413d54ff: jle    0x1413d550a
0x1413d5501: mov    eax,0x1
0x1413d5506: mov    QWORD PTR [rbp+0x38],rax
0x1413d550a: mov    rax,QWORD PTR [rsi]
0x1413d550d: mov    rcx,rsi
0x1413d5510: call   QWORD PTR [rax+0x6e8]
0x1413d5516: mov    BYTE PTR [rbp+0x71],al
0x1413d5519: mov    rax,QWORD PTR [rsi]
0x1413d551c: mov    rcx,rsi
0x1413d551f: call   QWORD PTR [rax+0x6f0]
0x1413d5525: mov    BYTE PTR [rbp+0x73],al
0x1413d5528: mov    rbx,QWORD PTR [rbp+0x40]
0x1413d552c: lea    rcx,[rbp-0x20]
0x1413d5530: call   0x140d7f5e0
0x1413d5535: mov    rax,QWORD PTR [rbp-0x70]
0x1413d5539: and    DWORD PTR [rax],0xfffffffe
0x1413d553c: sub    rbx,QWORD PTR [rbp+0x40]
0x1413d5540: mov    rdx,QWORD PTR [rbp-0x68]
0x1413d5544: cmp    rbx,rdx
0x1413d5547: jg     0x1413d554f
0x1413d5549: cmp    rdx,0xffffffffffffffff
0x1413d554d: jne    0x1413d555a
0x1413d554f: mov    QWORD PTR [rbp-0x68],rbx
0x1413d5553: mov    eax,DWORD PTR [rsi+0x1c]
0x1413d5556: mov    DWORD PTR [rsp+0x68],eax
0x1413d555a: mov    r12,QWORD PTR [rbp+0xc8]
0x1413d5561: mov    r14,QWORD PTR [rbp+0xb8]
0x1413d5568: lea    rax,[r12+r14*1]
0x1413d556c: mov    rcx,QWORD PTR [rbp+0x98]
0x1413d5573: add    rax,rcx
0x1413d5576: mov    r15,QWORD PTR [rbp+0x88]
0x1413d557d: add    rax,r15
0x1413d5580: test   rax,rax
0x1413d5583: jle    0x1413d567b
0x1413d5589: mov    r8,QWORD PTR [r13+0x38]
0x1413d558d: test   r8,r8
0x1413d5590: je     0x1413d567b
0x1413d5596: mov    ebx,edi
0x1413d5598: movabs r10,0x6666666666666667
0x1413d55a2: test   rcx,rcx
0x1413d55a5: jle    0x1413d55c6
0x1413d55a7: imul   rcx,rcx,0x9d80
0x1413d55ae: mov    rax,r10
0x1413d55b1: imul   rcx
0x1413d55b4: sar    rdx,1
0x1413d55b7: mov    rax,rdx
0x1413d55ba: shr    rax,0x3f
0x1413d55be: add    rdx,rax
0x1413d55c1: test   edx,edx
0x1413d55c3: cmovg  ebx,edx
0x1413d55c6: mov    r9d,0xc4e00
0x1413d55cc: test   r15,r15
0x1413d55cf: jle    0x1413d55e5
0x1413d55d1: lea    eax,[r15*4+0x0]
0x1413d55d9: cmp    eax,r9d
0x1413d55dc: cmovg  eax,r9d
0x1413d55e0: cmp    ebx,eax
0x1413d55e2: cmovl  ebx,eax
0x1413d55e5: test   r12,r12
0x1413d55e8: jle    0x1413d5609
0x1413d55ea: imul   rcx,r12,0x9d80
0x1413d55f1: mov    rax,r10
0x1413d55f4: imul   rcx
0x1413d55f7: sar    rdx,1
0x1413d55fa: mov    rax,rdx
0x1413d55fd: shr    rax,0x3f
0x1413d5601: add    rdx,rax
0x1413d5604: cmp    ebx,edx
0x1413d5606: cmovl  ebx,edx
0x1413d5609: test   r14,r14
0x1413d560c: jle    0x1413d5622
0x1413d560e: lea    eax,[r14*4+0x0]
0x1413d5616: cmp    eax,r9d
0x1413d5619: cmovg  eax,r9d
0x1413d561d: cmp    ebx,eax
0x1413d561f: cmovl  ebx,eax
0x1413d5622: test   ebx,ebx
0x1413d5624: jle    0x1413d567b
0x1413d5626: mov    rax,QWORD PTR [r8]
0x1413d5629: mov    rcx,r8
0x1413d562c: call   QWORD PTR [rax]
0x1413d562e: cmp    ax,0x18
0x1413d5632: jne    0x1413d5651
0x1413d5634: mov    eax,0x51eb851f
0x1413d5639: imul   ebx
0x1413d563b: mov    ebx,edx
0x1413d563d: sar    ebx,0x5
0x1413d5640: mov    eax,ebx
0x1413d5642: shr    eax,0x1f
0x1413d5645: add    ebx,eax
0x1413d5647: test   ebx,ebx
0x1413d5649: mov    eax,0x1
0x1413d564e: cmovle ebx,eax
0x1413d5651: mov    rcx,QWORD PTR [r13+0x38]
0x1413d5655: mov    rax,QWORD PTR [rcx]
0x1413d5658: xor    r9d,r9d
0x1413d565b: xor    r8d,r8d
0x1413d565e: mov    edx,ebx
0x1413d5660: call   QWORD PTR [rax+0x3d8]
0x1413d5666: mov    r12,QWORD PTR [rbp+0xc8]
0x1413d566d: mov    r14,QWORD PTR [rbp+0xb8]
0x1413d5674: mov    r15,QWORD PTR [rbp+0x88]
0x1413d567b: mov    r9,QWORD PTR [rbp+0xd0]
0x1413d5682: mov    r11,QWORD PTR [rbp+0xc0]
0x1413d5689: lea    rax,[r9+r11*1]
0x1413d568d: mov    rcx,QWORD PTR [rbp+0xa0]
0x1413d5694: add    rax,rcx
0x1413d5697: mov    r8,QWORD PTR [rbp+0x90]
0x1413d569e: add    rax,r8
0x1413d56a1: test   rax,rax
0x1413d56a4: jle    0x1413d5775
0x1413d56aa: mov    r10d,edi
0x1413d56ad: movabs rbx,0x6666666666666667
0x1413d56b7: test   rcx,rcx
0x1413d56ba: jle    0x1413d56dc
0x1413d56bc: imul   rcx,rcx,0x9d80
0x1413d56c3: mov    rax,rbx
0x1413d56c6: imul   rcx
0x1413d56c9: sar    rdx,1
0x1413d56cc: mov    rax,rdx
0x1413d56cf: shr    rax,0x3f
0x1413d56d3: add    rdx,rax
0x1413d56d6: test   edx,edx
0x1413d56d8: cmovg  r10d,edx
0x1413d56dc: test   r8,r8
0x1413d56df: jle    0x1413d56ff
0x1413d56e1: lea    eax,[r8*4+0x0]
0x1413d56e9: mov    r8d,0xc4e00
0x1413d56ef: cmp    eax,r8d
0x1413d56f2: cmovg  eax,r8d
0x1413d56f6: cmp    r10d,eax
0x1413d56f9: cmovl  r10d,eax
0x1413d56fd: jmp    0x1413d5705
0x1413d56ff: mov    r8d,0xc4e00
0x1413d5705: test   r9,r9
0x1413d5708: jle    0x1413d572b
0x1413d570a: imul   rcx,r9,0x9d80
0x1413d5711: mov    rax,rbx
0x1413d5714: imul   rcx
0x1413d5717: sar    rdx,1
0x1413d571a: mov    rax,rdx
0x1413d571d: shr    rax,0x3f
0x1413d5721: add    rdx,rax
0x1413d5724: cmp    r10d,edx
0x1413d5727: cmovl  r10d,edx
0x1413d572b: test   r11,r11
0x1413d572e: jle    0x1413d5746
0x1413d5730: lea    eax,[r11*4+0x0]
0x1413d5738: cmp    eax,r8d
0x1413d573b: cmovg  eax,r8d
0x1413d573f: cmp    r10d,eax
0x1413d5742: cmovl  r10d,eax
0x1413d5746: test   r10d,r10d
0x1413d5749: jle    0x1413d5775
0x1413d574b: mov    rax,QWORD PTR [rsi]
0x1413d574e: xor    r9d,r9d
0x1413d5751: xor    r8d,r8d
0x1413d5754: mov    edx,r10d
0x1413d5757: mov    rcx,rsi
0x1413d575a: call   QWORD PTR [rax+0x3d8]
0x1413d5760: mov    r12,QWORD PTR [rbp+0xc8]
0x1413d5767: mov    r14,QWORD PTR [rbp+0xb8]
0x1413d576e: mov    r15,QWORD PTR [rbp+0x88]
0x1413d5775: lea    rax,[r12+r14*1]
0x1413d5779: add    rax,QWORD PTR [rbp+0x98]
0x1413d5780: add    rax,r15
0x1413d5783: test   rax,rax
0x1413d5786: jle    0x1413d5793
0x1413d5788: cmp    QWORD PTR [r13+0x38],0x0
0x1413d578d: je     0x1413d59a6
0x1413d5793: cmp    QWORD PTR [rbp+0x40],0x0
0x1413d5798: jle    0x1413d59a6
0x1413d579e: mov    DWORD PTR [rbp+0x180],edi
0x1413d57a4: mov    WORD PTR [rbp+0xe0],di
0x1413d57ab: mov    eax,DWORD PTR [rsi+0x1c]
0x1413d57ae: mov    DWORD PTR [rbp+0xe4],eax
0x1413d57b4: movsx  rcx,WORD PTR [rip+0x11348d0]        # 0x14250a08c
0x1413d57bc: lea    rbx,[rip+0x1130645]        # 0x142505e08
0x1413d57c3: cmp    ecx,0x64
0x1413d57c6: jge    0x1413d5839
0x1413d57c8: imul   rcx,rcx,0xa8
0x1413d57cf: add    rcx,rbx
0x1413d57d2: lea    rdx,[rbp+0xe0]
0x1413d57d9: call   0x14065bb60
0x1413d57de: movsx  rax,WORD PTR [rbp+0xe0]
0x1413d57e6: cmp    ax,0x25
0x1413d57ea: ja     0x1413d5828
0x1413d57ec: lea    rcx,[rax+rax*1]
0x1413d57f0: lea    rdx,[rip+0x101e179]        # 0x1423f3970
0x1413d57f7: inc    WORD PTR [rcx+rdx*1+0x116638]
0x1413d57ff: cmp    WORD PTR [rcx+rdx*1+0x116684],0xffff
0x1413d5808: jne    0x1413d5819
0x1413d580a: movzx  eax,WORD PTR [rip+0x113487b]        # 0x14250a08c
0x1413d5811: mov    WORD PTR [rcx+rdx*1+0x116684],ax
0x1413d5819: movzx  eax,WORD PTR [rip+0x113486c]        # 0x14250a08c
0x1413d5820: mov    WORD PTR [rcx+rdx*1+0x1166d0],ax
0x1413d5828: movzx  ecx,WORD PTR [rip+0x113485d]        # 0x14250a08c
0x1413d582f: inc    cx
0x1413d5832: mov    WORD PTR [rip+0x1134853],cx        # 0x14250a08c
0x1413d5839: mov    rax,QWORD PTR [r13+0x38]
0x1413d583d: mov    r14d,0x25
0x1413d5843: test   rax,rax
0x1413d5846: je     0x1413d58eb
0x1413d584c: test   DWORD PTR [rax+0x10],0x20000
0x1413d5853: je     0x1413d58eb
0x1413d5859: mov    DWORD PTR [rbp+0x180],edi
0x1413d585f: mov    WORD PTR [rbp+0xe0],r14w
0x1413d5867: mov    eax,DWORD PTR [rax+0x1c]
0x1413d586a: mov    DWORD PTR [rbp+0xe4],eax
0x1413d5870: cmp    cx,0x64
0x1413d5874: jge    0x1413d58eb
0x1413d5876: movsx  rax,cx
0x1413d587a: imul   rcx,rax,0xa8
0x1413d5881: add    rcx,rbx
0x1413d5884: lea    rdx,[rbp+0xe0]
0x1413d588b: call   0x14065bb60
0x1413d5890: movsx  rax,WORD PTR [rbp+0xe0]
0x1413d5898: cmp    ax,r14w
0x1413d589c: ja     0x1413d58da
0x1413d589e: lea    rcx,[rax+rax*1]
0x1413d58a2: lea    rdx,[rip+0x101e0c7]        # 0x1423f3970
0x1413d58a9: inc    WORD PTR [rcx+rdx*1+0x116638]
0x1413d58b1: cmp    WORD PTR [rdx+rcx*1+0x116684],0xffff
0x1413d58ba: jne    0x1413d58cb
0x1413d58bc: movzx  eax,WORD PTR [rip+0x11347c9]        # 0x14250a08c
0x1413d58c3: mov    WORD PTR [rdx+rcx*1+0x116684],ax
0x1413d58cb: movzx  eax,WORD PTR [rip+0x11347ba]        # 0x14250a08c
0x1413d58d2: mov    WORD PTR [rdx+rcx*1+0x1166d0],ax
0x1413d58da: movzx  ecx,WORD PTR [rip+0x11347ab]        # 0x14250a08c
0x1413d58e1: inc    cx
0x1413d58e4: mov    WORD PTR [rip+0x11347a1],cx        # 0x14250a08c
0x1413d58eb: test   DWORD PTR [rsi+0x10],0x20000
0x1413d58f2: je     0x1413d5984
0x1413d58f8: mov    DWORD PTR [rbp+0x180],edi
0x1413d58fe: mov    WORD PTR [rbp+0xe0],r14w
0x1413d5906: mov    eax,DWORD PTR [rsi+0x1c]
0x1413d5909: mov    DWORD PTR [rbp+0xe4],eax
0x1413d590f: cmp    cx,0x64
0x1413d5913: jge    0x1413d5984
0x1413d5915: movsx  rax,cx
0x1413d5919: imul   rcx,rax,0xa8
0x1413d5920: add    rcx,rbx
0x1413d5923: lea    rdx,[rbp+0xe0]
0x1413d592a: call   0x14065bb60
0x1413d592f: movsx  rax,WORD PTR [rbp+0xe0]
0x1413d5937: cmp    ax,0x25
0x1413d593b: ja     0x1413d597d
0x1413d593d: lea    rcx,[rax+rax*1]
0x1413d5941: lea    r15,[rip+0x101e028]        # 0x1423f3970
0x1413d5948: inc    WORD PTR [rcx+r15*1+0x116638]
0x1413d5951: cmp    WORD PTR [rcx+r15*1+0x116684],0xffff
0x1413d595b: jne    0x1413d596d
0x1413d595d: movzx  eax,WORD PTR [rip+0x1134728]        # 0x14250a08c
0x1413d5964: mov    WORD PTR [rcx+r15*1+0x116684],ax
0x1413d596d: movzx  eax,WORD PTR [rip+0x1134718]        # 0x14250a08c
0x1413d5974: mov    WORD PTR [rcx+r15*1+0x1166d0],ax
0x1413d597d: inc    WORD PTR [rip+0x1134708]        # 0x14250a08c
0x1413d5984: mov    r12,QWORD PTR [rbp-0x78]
0x1413d5988: mov    rax,QWORD PTR [rsp+0x70]
0x1413d598d: sub    rax,0x1
0x1413d5991: mov    QWORD PTR [rsp+0x70],rax
0x1413d5996: js     0x1413d5ba3
0x1413d599c: movzx  esi,WORD PTR [rsp+0x60]
0x1413d59a1: jmp    0x1413d50b0
0x1413d59a6: mov    QWORD PTR [rbp+0x40],rdi
0x1413d59aa: mov    eax,DWORD PTR [rsp+0x68]
0x1413d59ae: cmp    eax,0xffffffff
0x1413d59b1: jne    0x1413d59b6
0x1413d59b3: mov    eax,DWORD PTR [rsi+0x1c]
0x1413d59b6: mov    DWORD PTR [rbp+0x180],edi
0x1413d59bc: mov    ecx,0x1
0x1413d59c1: mov    WORD PTR [rbp+0xe0],cx
0x1413d59c8: mov    DWORD PTR [rbp+0xe4],eax
0x1413d59ce: movsx  rcx,WORD PTR [rip+0x11346b6]        # 0x14250a08c
0x1413d59d6: lea    rbx,[rip+0x113042b]        # 0x142505e08
0x1413d59dd: cmp    ecx,0x64
0x1413d59e0: jge    0x1413d5a53
0x1413d59e2: imul   rcx,rcx,0xa8
0x1413d59e9: add    rcx,rbx
0x1413d59ec: lea    rdx,[rbp+0xe0]
0x1413d59f3: call   0x14065bb60
0x1413d59f8: movsx  rax,WORD PTR [rbp+0xe0]
0x1413d5a00: cmp    ax,0x25
0x1413d5a04: ja     0x1413d5a42
0x1413d5a06: lea    rcx,[rax+rax*1]
0x1413d5a0a: lea    rdx,[rip+0x101df5f]        # 0x1423f3970
0x1413d5a11: inc    WORD PTR [rcx+rdx*1+0x116638]
0x1413d5a19: cmp    WORD PTR [rcx+rdx*1+0x116684],0xffff
0x1413d5a22: jne    0x1413d5a33
0x1413d5a24: movzx  eax,WORD PTR [rip+0x1134661]        # 0x14250a08c
0x1413d5a2b: mov    WORD PTR [rcx+rdx*1+0x116684],ax
0x1413d5a33: movzx  eax,WORD PTR [rip+0x1134652]        # 0x14250a08c
0x1413d5a3a: mov    WORD PTR [rcx+rdx*1+0x1166d0],ax
0x1413d5a42: movzx  ecx,WORD PTR [rip+0x1134643]        # 0x14250a08c
0x1413d5a49: inc    cx
0x1413d5a4c: mov    WORD PTR [rip+0x1134639],cx        # 0x14250a08c
0x1413d5a53: mov    rax,QWORD PTR [r13+0x38]
0x1413d5a57: mov    r14d,0x25
0x1413d5a5d: test   rax,rax
0x1413d5a60: je     0x1413d5b05
0x1413d5a66: test   DWORD PTR [rax+0x10],0x20000
0x1413d5a6d: je     0x1413d5b05
0x1413d5a73: mov    DWORD PTR [rbp+0x180],edi
0x1413d5a79: mov    WORD PTR [rbp+0xe0],r14w
0x1413d5a81: mov    eax,DWORD PTR [rax+0x1c]
0x1413d5a84: mov    DWORD PTR [rbp+0xe4],eax
0x1413d5a8a: cmp    cx,0x64
0x1413d5a8e: jge    0x1413d5b05
0x1413d5a90: movsx  rax,cx
0x1413d5a94: imul   rcx,rax,0xa8
0x1413d5a9b: add    rcx,rbx
0x1413d5a9e: lea    rdx,[rbp+0xe0]
0x1413d5aa5: call   0x14065bb60
0x1413d5aaa: movsx  rax,WORD PTR [rbp+0xe0]
0x1413d5ab2: cmp    ax,r14w
0x1413d5ab6: ja     0x1413d5af4
0x1413d5ab8: lea    rcx,[rax+rax*1]
0x1413d5abc: lea    rdx,[rip+0x101dead]        # 0x1423f3970
0x1413d5ac3: inc    WORD PTR [rcx+rdx*1+0x116638]
0x1413d5acb: cmp    WORD PTR [rcx+rdx*1+0x116684],0xffff
0x1413d5ad4: jne    0x1413d5ae5
0x1413d5ad6: movzx  eax,WORD PTR [rip+0x11345af]        # 0x14250a08c
0x1413d5add: mov    WORD PTR [rcx+rdx*1+0x116684],ax
0x1413d5ae5: movzx  eax,WORD PTR [rip+0x11345a0]        # 0x14250a08c
0x1413d5aec: mov    WORD PTR [rcx+rdx*1+0x1166d0],ax
0x1413d5af4: movzx  ecx,WORD PTR [rip+0x1134591]        # 0x14250a08c
0x1413d5afb: inc    cx
0x1413d5afe: mov    WORD PTR [rip+0x1134587],cx        # 0x14250a08c
0x1413d5b05: test   DWORD PTR [rsi+0x10],0x20000
0x1413d5b0c: je     0x1413d5e8b
0x1413d5b12: mov    DWORD PTR [rbp+0x180],edi
0x1413d5b18: mov    WORD PTR [rbp+0xe0],r14w
0x1413d5b20: mov    eax,DWORD PTR [rsi+0x1c]
0x1413d5b23: mov    DWORD PTR [rbp+0xe4],eax
0x1413d5b29: cmp    cx,0x64
0x1413d5b2d: jge    0x1413d5e8b
0x1413d5b33: movsx  rax,cx
0x1413d5b37: imul   rcx,rax,0xa8
0x1413d5b3e: add    rcx,rbx
0x1413d5b41: lea    rdx,[rbp+0xe0]
0x1413d5b48: call   0x14065bb60
0x1413d5b4d: movsx  rax,WORD PTR [rbp+0xe0]
0x1413d5b55: cmp    ax,0x25
0x1413d5b59: ja     0x1413d5b97
0x1413d5b5b: lea    rcx,[rax+rax*1]
0x1413d5b5f: lea    rdx,[rip+0x101de0a]        # 0x1423f3970
0x1413d5b66: inc    WORD PTR [rcx+rdx*1+0x116638]
0x1413d5b6e: cmp    WORD PTR [rcx+rdx*1+0x116684],0xffff
0x1413d5b77: jne    0x1413d5b88
0x1413d5b79: movzx  eax,WORD PTR [rip+0x113450c]        # 0x14250a08c
0x1413d5b80: mov    WORD PTR [rcx+rdx*1+0x116684],ax
0x1413d5b88: movzx  eax,WORD PTR [rip+0x11344fd]        # 0x14250a08c
0x1413d5b8f: mov    WORD PTR [rcx+rdx*1+0x1166d0],ax
0x1413d5b97: inc    WORD PTR [rip+0x11344ee]        # 0x14250a08c
0x1413d5b9e: jmp    0x1413d5e8b
0x1413d5ba3: mov    r15,QWORD PTR [rbp-0x60]
0x1413d5ba7: mov    r14,0xffffffffffffffff
0x1413d5bae: mov    edx,0x1
0x1413d5bb3: mov    DWORD PTR [rsp+0x50],r14d
0x1413d5bb8: mov    WORD PTR [rsp+0x48],r14w
0x1413d5bbe: mov    DWORD PTR [rsp+0x40],0x3
0x1413d5bc6: mov    QWORD PTR [rsp+0x38],rdi
0x1413d5bcb: mov    QWORD PTR [rsp+0x30],rdi
0x1413d5bd0: mov    DWORD PTR [rsp+0x28],0x3
0x1413d5bd8: mov    DWORD PTR [rsp+0x20],0x32
0x1413d5be0: mov    r9d,0x5
0x1413d5be6: mov    r8d,0x65
0x1413d5bec: mov    rcx,r12
0x1413d5bef: call   0x1413812a0
0x1413d5bf4: movsxd rcx,eax
0x1413d5bf7: mov    QWORD PTR [rbp+0x48],rcx
0x1413d5bfb: movdqa XMMWORD PTR [rbp+0x50],xmm6
0x1413d5c00: mov    DWORD PTR [rsp+0x6c],edi
0x1413d5c04: mov    QWORD PTR [rsp+0x78],rdi
0x1413d5c09: mov    QWORD PTR [rbp-0x58],rdi
0x1413d5c0d: mov    eax,DWORD PTR [r15]
0x1413d5c10: mov    DWORD PTR [rsp+0x58],eax
0x1413d5c14: lea    rax,[rbp-0x58]
0x1413d5c18: mov    QWORD PTR [rsp+0x50],rax
0x1413d5c1d: mov    r15,QWORD PTR [rbp-0x50]
0x1413d5c21: mov    QWORD PTR [rsp+0x48],r15
0x1413d5c26: lea    rax,[rsp+0x6c]
0x1413d5c2b: mov    QWORD PTR [rsp+0x40],rax
0x1413d5c30: lea    rax,[rsp+0x78]
0x1413d5c35: mov    QWORD PTR [rsp+0x38],rax
0x1413d5c3a: lea    rax,[rsp+0x64]
0x1413d5c3f: mov    QWORD PTR [rsp+0x30],rax
0x1413d5c44: mov    BYTE PTR [rsp+0x28],0x1
0x1413d5c49: lea    rax,[rbp-0x20]
0x1413d5c4d: mov    QWORD PTR [rsp+0x20],rax
0x1413d5c52: mov    r14,QWORD PTR [rbp-0x48]
0x1413d5c56: mov    r9,r14
0x1413d5c59: mov    r8,r13
0x1413d5c5c: movzx  esi,WORD PTR [rsp+0x60]
0x1413d5c61: movzx  edx,si
0x1413d5c64: mov    rcx,r12
0x1413d5c67: call   0x1413d5f90
0x1413d5c6c: mov    eax,DWORD PTR [rsp+0x6c]
0x1413d5c70: mov    rcx,QWORD PTR [rbp-0x70]
0x1413d5c74: test   al,0x1
0x1413d5c76: jne    0x1413d5c7b
0x1413d5c78: and    DWORD PTR [rcx],0xfffffffe
0x1413d5c7b: test   al,0x2
0x1413d5c7d: je     0x1413d5c82
0x1413d5c7f: or     DWORD PTR [rcx],0x2
0x1413d5c82: mov    edx,DWORD PTR [rsp+0x64]
0x1413d5c86: mov    rcx,r12
0x1413d5c89: call   0x1400e4d60
0x1413d5c8e: mov    ecx,DWORD PTR [rsp+0x64]
0x1413d5c92: lea    ebx,[rcx+rcx*4]
0x1413d5c95: add    ebx,ebx
0x1413d5c97: mov    rcx,QWORD PTR [r12+0xa98]
0x1413d5c9f: test   rcx,rcx
0x1413d5ca2: je     0x1413d5db0
0x1413d5ca8: test   ebx,ebx
0x1413d5caa: jle    0x1413d5db0
0x1413d5cb0: add    rcx,0x248
0x1413d5cb7: mov    BYTE PTR [rsp+0x30],0x0
0x1413d5cbc: xor    r9d,r9d
0x1413d5cbf: mov    edx,0x1
0x1413d5cc4: mov    r8,0xffffffffffffffff
0x1413d5ccb: call   0x1405d9c50
0x1413d5cd0: mov    r9,rax
0x1413d5cd3: mov    edx,DWORD PTR [rax+0x4]
0x1413d5cd6: add    edx,ebx
0x1413d5cd8: mov    DWORD PTR [rax+0x4],edx
0x1413d5cdb: mov    r10d,0x64
0x1413d5ce1: cmp    edx,r10d
0x1413d5ce4: jle    0x1413d5cea
0x1413d5ce6: mov    DWORD PTR [rax+0x4],r10d
0x1413d5cea: mov    rcx,r12
0x1413d5ced: call   0x14137f2c0
0x1413d5cf2: test   al,al
0x1413d5cf4: je     0x1413d5da5
0x1413d5cfa: mov    DWORD PTR [r9],0x40
0x1413d5d01: mov    rax,QWORD PTR [r12+0xa98]
0x1413d5d09: movzx  ecx,WORD PTR [rax+0x2ec]
0x1413d5d10: mov    rdx,QWORD PTR [rax+0x3a0]
0x1413d5d17: test   rdx,rdx
0x1413d5d1a: je     0x1413d5d28
0x1413d5d1c: add    cx,WORD PTR [rdx+0x24]
0x1413d5d20: js     0x1413d5d64
0x1413d5d22: cmp    cx,0x64
0x1413d5d26: jg     0x1413d5d2e
0x1413d5d28: cmp    cx,0x5a
0x1413d5d2c: jle    0x1413d5d32
0x1413d5d2e: mov    ebx,edi
0x1413d5d30: jmp    0x1413d5d90
0x1413d5d32: cmp    cx,0x4b
0x1413d5d36: jle    0x1413d5d4d
0x1413d5d38: mov    eax,0x66666667
0x1413d5d3d: imul   ebx
0x1413d5d3f: mov    ebx,edx
0x1413d5d41: sar    ebx,0x2
0x1413d5d44: mov    eax,ebx
0x1413d5d46: shr    eax,0x1f
0x1413d5d49: add    ebx,eax
0x1413d5d4b: jmp    0x1413d5d90
0x1413d5d4d: cmp    cx,0x3c
0x1413d5d51: jle    0x1413d5d5e
0x1413d5d53: mov    eax,ebx
0x1413d5d55: cdq
0x1413d5d56: sub    eax,edx
0x1413d5d58: sar    eax,1
0x1413d5d5a: mov    ebx,eax
0x1413d5d5c: jmp    0x1413d5d90
0x1413d5d5e: cmp    cx,0xa
0x1413d5d62: jge    0x1413d5d69
0x1413d5d64: mov    ebx,r10d
0x1413d5d67: jmp    0x1413d5d90
0x1413d5d69: cmp    cx,0x19
0x1413d5d6d: jge    0x1413d5d7e
0x1413d5d6f: lea    ebx,[rbx+rbx*4]
0x1413d5d72: add    ebx,ebx
0x1413d5d74: cmp    ebx,0x64
0x1413d5d77: jle    0x1413d5d90
0x1413d5d79: mov    ebx,r10d
0x1413d5d7c: jmp    0x1413d5d90
0x1413d5d7e: cmp    cx,0x28
0x1413d5d82: jge    0x1413d5d90
0x1413d5d84: lea    eax,[rbx+rbx*1]
0x1413d5d87: mov    ebx,eax
0x1413d5d89: cmp    eax,0x64
0x1413d5d8c: cmovg  ebx,r10d
0x1413d5d90: mov    ecx,DWORD PTR [r9+0x8]
0x1413d5d94: add    ecx,ebx
0x1413d5d96: mov    DWORD PTR [r9+0x8],ecx
0x1413d5d9a: cmp    ecx,0x64
0x1413d5d9d: jle    0x1413d5db0
0x1413d5d9f: mov    DWORD PTR [r9+0x8],r10d
0x1413d5da3: jmp    0x1413d5db0
0x1413d5da5: mov    DWORD PTR [r9],0xffffffff
0x1413d5dac: mov    DWORD PTR [r9+0x8],edi
0x1413d5db0: mov    r8,QWORD PTR [rsp+0x78]
0x1413d5db5: mov    rcx,QWORD PTR [r13+0x38]
0x1413d5db9: test   r8,r8
0x1413d5dbc: je     0x1413d5e2c
0x1413d5dbe: cmp    DWORD PTR [r15],0x32
0x1413d5dc2: setl   dil
0x1413d5dc6: inc    edi
0x1413d5dc8: test   rcx,rcx
0x1413d5dcb: je     0x1413d5de7
0x1413d5dcd: cmp    si,0xffff
0x1413d5dd1: je     0x1413d5de7
0x1413d5dd3: mov    rax,QWORD PTR [rcx]
0x1413d5dd6: mov    WORD PTR [rsp+0x20],si
0x1413d5ddb: mov    r9d,edi
0x1413d5dde: mov    rdx,r12
0x1413d5de1: call   QWORD PTR [rax+0x420]
0x1413d5de7: test   r14,r14
0x1413d5dea: je     0x1413d5e7d
0x1413d5df0: mov    rax,QWORD PTR [r13+0x10]
0x1413d5df4: sub    rax,QWORD PTR [r13+0x8]
0x1413d5df8: sar    rax,1
0x1413d5dfb: sub    eax,0x1
0x1413d5dfe: movsxd rbx,eax
0x1413d5e01: js     0x1413d5e7d
0x1413d5e03: mov    rax,QWORD PTR [r13+0x8]
0x1413d5e07: mov    WORD PTR [rsp+0x28],si
0x1413d5e0c: mov    DWORD PTR [rsp+0x20],edi
0x1413d5e10: mov    r9,QWORD PTR [rsp+0x78]
0x1413d5e15: mov    r8,r12
0x1413d5e18: movzx  edx,WORD PTR [rax+rbx*2]
0x1413d5e1c: mov    rcx,r14
0x1413d5e1f: call   0x1413e36d0
0x1413d5e24: sub    rbx,0x1
0x1413d5e28: jns    0x1413d5e03
0x1413d5e2a: jmp    0x1413d5e7d
0x1413d5e2c: test   rcx,rcx
0x1413d5e2f: je     0x1413d5e47
0x1413d5e31: cmp    si,0xffff
0x1413d5e35: je     0x1413d5e47
0x1413d5e37: mov    rax,QWORD PTR [rcx]
0x1413d5e3a: movzx  r8d,si
0x1413d5e3e: mov    rdx,r12
0x1413d5e41: call   QWORD PTR [rax+0x408]
0x1413d5e47: test   r14,r14
0x1413d5e4a: je     0x1413d5e7d
0x1413d5e4c: mov    rax,QWORD PTR [r13+0x10]
0x1413d5e50: sub    rax,QWORD PTR [r13+0x8]
0x1413d5e54: sar    rax,1
0x1413d5e57: sub    eax,0x1
0x1413d5e5a: movsxd rbx,eax
0x1413d5e5d: js     0x1413d5e7d
0x1413d5e5f: nop
0x1413d5e60: mov    rdx,QWORD PTR [r13+0x8]
0x1413d5e64: movzx  r9d,si
0x1413d5e68: mov    r8,r12
0x1413d5e6b: movzx  edx,WORD PTR [rdx+rbx*2]
0x1413d5e6f: mov    rcx,r14
0x1413d5e72: call   0x1413e3a20
0x1413d5e77: sub    rbx,0x1
0x1413d5e7b: jns    0x1413d5e60
0x1413d5e7d: and    DWORD PTR [r12+0x114],0xffffffcf
0x1413d5e86: mov    rdi,QWORD PTR [rsp+0x78]
0x1413d5e8b: lea    r9,[rip+0xfffffffffec935ce]        # 0x140069460
0x1413d5e92: mov    edx,0x20
0x1413d5e97: mov    r8d,0x4
0x1413d5e9d: lea    rcx,[rbp+0x100]
0x1413d5ea4: call   0x14155311c
0x1413d5ea9: nop
0x1413d5eaa: mov    rax,rdi
0x1413d5ead: jmp    0x1413d5eb8
0x1413d5eaf: mov    DWORD PTR [r8],0x4
0x1413d5eb6: xor    eax,eax
0x1413d5eb8: mov    rcx,QWORD PTR [rbp+0x190]
0x1413d5ebf: xor    rcx,rsp
0x1413d5ec2: call   0x1415530b0
0x1413d5ec7: movaps xmm6,XMMWORD PTR [rsp+0x2a0]
0x1413d5ecf: add    rsp,0x2b8
0x1413d5ed6: pop    r15
0x1413d5ed8: pop    r14
0x1413d5eda: pop    r13
0x1413d5edc: pop    r12
0x1413d5ede: pop    rdi
0x1413d5edf: pop    rsi
0x1413d5ee0: pop    rbx
0x1413d5ee1: pop    rbp
0x1413d5ee2: ret
0x1413d5ee3: nop
0x1413d5ee4: iret
0x1413d5ee5: rex.WR cmp rax,0x3d4cdc01
0x1413d5eeb: add    ecx,ebp
0x1413d5eed: rex.WR cmp rax,0x3d4ccf01
0x1413d5ef3: add    edi,ecx
0x1413d5ef5: rex.WR cmp rax,0x3d4ccf01
0x1413d5efb: add    DWORD PTR [rcx+0x43013d51],esp
0x1413d5f01: push   rdx
0x1413d5f02: cmp    eax,0x3d526f01
0x1413d5f07: add    DWORD PTR [rdi],ecx
0x1413d5f09: push   rdx
0x1413d5f0a: cmp    eax,0x3d529b01
0x1413d5f0f: add    DWORD PTR [rdx-0x27fec2ae],esp
0x1413d5f15: push   rcx
0x1413d5f16: cmp    eax,0x3d52a901
0x1413d5f1b: add    DWORD PTR [rax-0x48fec2ae],esi
0x1413d5f21: push   rdx
0x1413d5f22: cmp    eax,0x3d52be01
0x1413d5f27: add    DWORD PTR [rax],eax
0x1413d5f29: add    DWORD PTR [rdx],ecx
0x1413d5f2b: add    al,BYTE PTR [rbx]
0x1413d5f2d: or     cl,BYTE PTR [rdx]
0x1413d5f2f: or     cl,BYTE PTR [rdx]
0x1413d5f31: or     cl,BYTE PTR [rdx]
0x1413d5f33: or     al,BYTE PTR [rdx+rcx*1]
0x1413d5f36: or     al,BYTE PTR [rip+0xa040404]        # 0x14b416340
0x1413d5f3c: or     cl,BYTE PTR [rdx]
0x1413d5f3e: or     cl,BYTE PTR [rdx]
0x1413d5f40: or     cl,BYTE PTR [rdx]
0x1413d5f42: or     cl,BYTE PTR [rdx]
0x1413d5f44: or     cl,BYTE PTR [rdx]
0x1413d5f46: or     cl,BYTE PTR [rdx]
0x1413d5f48: or     cl,BYTE PTR [rdx]
0x1413d5f4a: or     al,BYTE PTR [rsi]
0x1413d5f4c: (bad)
0x1413d5f4d: or     BYTE PTR [rdx],cl
0x1413d5f4f: or     cl,BYTE PTR [rdx]
0x1413d5f51: or     cl,BYTE PTR [rdx]
0x1413d5f53: or     cl,BYTE PTR [rdx]
0x1413d5f55: or     cl,BYTE PTR [rdx]
0x1413d5f57: or     cl,BYTE PTR [rdx]
0x1413d5f59: or     cl,BYTE PTR [rdx]
0x1413d5f5b: or     cl,BYTE PTR [rdx]
0x1413d5f5d: or     cl,BYTE PTR [rdx]
0x1413d5f5f: or     cl,BYTE PTR [rdx]
0x1413d5f61: (bad)
0x1413d5f62: or     cl,BYTE PTR [rdx]
0x1413d5f64: or     DWORD PTR [rdi],ecx
0x1413d5f66: (bad)
0x1413d5f67: add    BYTE PTR [rbx+rdx*2+0x3d],al
0x1413d5f6b: add    DWORD PTR [rsi],edi
0x1413d5f6d: push   rbx
0x1413d5f6e: cmp    eax,0x3d533401
0x1413d5f73: add    DWORD PTR [rsi],ebp
0x1413d5f75: push   rbx
0x1413d5f76: cmp    eax,0x3d532801
0x1413d5f7b: add    DWORD PTR [rdx],esp
0x1413d5f7d: push   rbx
0x1413d5f7e: cmp    eax,0x3d531901
0x1413d5f83: add    DWORD PTR [rbx],edx
0x1413d5f85: push   rbx
0x1413d5f86: cmp    eax,0x3d530d01
0x1413d5f8b: add    DWORD PTR [rdi],eax
0x1413d5f8d: push   rbx
0x1413d5f8e: .byte 0x3d
0x1413d5f8f: .byte 0x1
