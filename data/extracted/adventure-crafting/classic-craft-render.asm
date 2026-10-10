# classic PE:6a70b91c:0270a000; craft-render; RVA 0x279930..0x27ae6b
0x00279930: rex push rbp
0x00279932: push   rbx
0x00279933: push   rsi
0x00279934: push   rdi
0x00279935: push   r12
0x00279937: push   r13
0x00279939: push   r14
0x0027993b: push   r15
0x0027993d: lea    rbp,[rsp-0x68]
0x00279942: sub    rsp,0x168
0x00279949: mov    rax,QWORD PTR [rip+0x161c6f0]        # 0x141896040
0x00279950: xor    rax,rsp
0x00279953: mov    QWORD PTR [rbp+0x50],rax
0x00279957: mov    DWORD PTR [rsp+0x64],edx
0x0027995b: mov    QWORD PTR [rsp+0x50],rcx
0x00279960: mov    eax,DWORD PTR [rcx+0x4]
0x00279963: sub    eax,0x4
0x00279966: cmp    eax,0x1
0x00279969: jbe    0x14027ae45
0x0027996f: mov    rax,QWORD PTR [rip+0x216568a]        # 0x1423df000
0x00279976: mov    QWORD PTR [rbp-0x60],rax
0x0027997a: mov    DWORD PTR [rsp+0x78],0xffffffff
0x00279982: mov    DWORD PTR [rsp+0x74],0xffffffff
0x0027998a: cmp    BYTE PTR [rip+0x2110b34],0x0        # 0x14238a4c5
0x00279991: je     0x1402799a7
0x00279993: mov    eax,DWORD PTR [rip+0x23cab07]        # 0x1426444a0
0x00279999: mov    DWORD PTR [rsp+0x78],eax
0x0027999d: mov    eax,DWORD PTR [rip+0x23cab01]        # 0x1426444a4
0x002799a3: mov    DWORD PTR [rsp+0x74],eax
0x002799a7: lea    eax,[r9+r8*1]
0x002799ab: cdq
0x002799ac: sub    eax,edx
0x002799ae: sar    eax,1
0x002799b0: lea    r14d,[rax-0x32]
0x002799b4: lea    edi,[rax+0x32]
0x002799b7: mov    r13d,0x14
0x002799bd: mov    r12d,DWORD PTR [rip+0x214dcb4]        # 0x1423c7678
0x002799c4: add    r12d,0xfffffffb
0x002799c8: mov    DWORD PTR [rsp+0x60],r12d
0x002799cd: call   0x14027db70
0x002799d2: mov    DWORD PTR [rsp+0x6c],eax
0x002799d6: mov    r8d,0x27 ; inline_fragment="'"
0x002799dc: lea    ecx,[rax+0x2]
0x002799df: lea    edx,[rcx+rcx*2]
0x002799e2: cmp    edx,r8d
0x002799e5: cmovl  r8d,edx
0x002799e9: lea    ecx,[r12-0x13]
0x002799ee: cmp    ecx,r8d
0x002799f1: jle    0x1402799fc
0x002799f3: mov    r13d,r12d
0x002799f6: sub    r13d,r8d
0x002799f9: inc    r13d
0x002799fc: mov    esi,r13d
0x002799ff: cmp    r13d,r12d
0x00279a02: jg     0x140279ad5
0x00279a08: nop    DWORD PTR [rax+rax*1+0x0]
0x00279a10: mov    ebx,r14d
0x00279a13: cmp    r14d,edi
0x00279a16: jg     0x140279aca
0x00279a1c: nop    DWORD PTR [rax+0x0]
0x00279a20: mov    DWORD PTR [rip+0x23ca93e],ebx        # 0x142644364
0x00279a26: mov    DWORD PTR [rip+0x23ca93c],esi        # 0x142644368
0x00279a2c: xor    r8d,r8d
0x00279a2f: xor    edx,edx
0x00279a31: lea    rcx,[rip+0x23ca8a8]        # 0x1426442e0
0x00279a38: call   0x1400bb120
0x00279a3d: cmp    esi,r13d
0x00279a40: jne    0x140279a6a
0x00279a42: cmp    ebx,r14d
0x00279a45: jne    0x140279a4f
0x00279a47: mov    edx,DWORD PTR [rip+0x23cc1b7]        # 0x142645c04
0x00279a4d: jmp    0x140279ab4
0x00279a4f: lea    rcx,[rip+0x23ca88a]        # 0x1426442e0
0x00279a56: cmp    ebx,edi
0x00279a58: jne    0x140279a62
0x00279a5a: mov    edx,DWORD PTR [rip+0x23cc1bc]        # 0x142645c1c
0x00279a60: jmp    0x140279abb
0x00279a62: mov    edx,DWORD PTR [rip+0x23cc1a8]        # 0x142645c10
0x00279a68: jmp    0x140279abb
0x00279a6a: cmp    esi,r12d
0x00279a6d: jne    0x140279a97
0x00279a6f: cmp    ebx,r14d
0x00279a72: jne    0x140279a7c
0x00279a74: mov    edx,DWORD PTR [rip+0x23cc192]        # 0x142645c0c
0x00279a7a: jmp    0x140279ab4
0x00279a7c: lea    rcx,[rip+0x23ca85d]        # 0x1426442e0
0x00279a83: cmp    ebx,edi
0x00279a85: jne    0x140279a8f
0x00279a87: mov    edx,DWORD PTR [rip+0x23cc197]        # 0x142645c24
0x00279a8d: jmp    0x140279abb
0x00279a8f: mov    edx,DWORD PTR [rip+0x23cc183]        # 0x142645c18
0x00279a95: jmp    0x140279abb
0x00279a97: cmp    ebx,r14d
0x00279a9a: jne    0x140279aa4
0x00279a9c: mov    edx,DWORD PTR [rip+0x23cc166]        # 0x142645c08
0x00279aa2: jmp    0x140279ab4
0x00279aa4: cmp    ebx,edi
0x00279aa6: mov    edx,DWORD PTR [rip+0x23cc174]        # 0x142645c20
0x00279aac: je     0x140279ab4
0x00279aae: mov    edx,DWORD PTR [rip+0x23cc160]        # 0x142645c14
0x00279ab4: lea    rcx,[rip+0x23ca825]        # 0x1426442e0
0x00279abb: call   0x140ad7b10
0x00279ac0: inc    ebx
0x00279ac2: cmp    ebx,edi
0x00279ac4: jle    0x140279a20
0x00279aca: inc    esi
0x00279acc: cmp    esi,r12d
0x00279acf: jle    0x140279a10
0x00279ad5: xor    esi,esi
0x00279ad7: nop    WORD PTR [rax+rax*1+0x0]
0x00279ae0: lea    r15d,[rdi-0xc]
0x00279ae4: add    r15d,esi
0x00279ae7: lea    r11,[rip+0x23d4fea]        # 0x14264ead8
0x00279aee: lea    ebx,[r13+0x1]
0x00279af2: nop    DWORD PTR [rax+0x0]
0x00279af6: data16 nop WORD PTR [rax+rax*1+0x0]
0x00279b00: mov    DWORD PTR [rip+0x23ca85d],r15d        # 0x142644364
0x00279b07: mov    DWORD PTR [rip+0x23ca85b],ebx        # 0x142644368
0x00279b0d: test   esi,esi
0x00279b0f: jne    0x140279b17
0x00279b11: mov    edx,DWORD PTR [r11-0x18]
0x00279b15: jmp    0x140279b25
0x00279b17: cmp    esi,0xb
0x00279b1a: jne    0x140279b21
0x00279b1c: mov    edx,DWORD PTR [r11]
0x00279b1f: jmp    0x140279b25
0x00279b21: mov    edx,DWORD PTR [r11-0xc]
0x00279b25: lea    rcx,[rip+0x23ca7b4]        # 0x1426442e0
0x00279b2c: call   0x140ad7b10
0x00279b31: inc    ebx
0x00279b33: add    r11,0x4
0x00279b37: lea    rax,[rip+0x23d4fa6]        # 0x14264eae4
0x00279b3e: cmp    r11,rax
0x00279b41: jl     0x140279b00
0x00279b43: inc    esi
0x00279b45: cmp    esi,0xc
0x00279b48: jl     0x140279ae0
0x00279b4a: mov    DWORD PTR [rip+0x23ca818],0x1010007        # 0x14264436c
0x00279b54: lea    eax,[rdi-0x9]
0x00279b57: mov    DWORD PTR [rip+0x23ca807],eax        # 0x142644364
0x00279b5d: add    r13d,0x2
0x00279b61: mov    DWORD PTR [rip+0x23ca800],r13d        # 0x142644368
0x00279b68: xorps  xmm0,xmm0
0x00279b6b: movups XMMWORD PTR [rbp-0x50],xmm0
0x00279b6f: movdqa xmm1,XMMWORD PTR [rip+0x150bf09]        # 0x141785a80
0x00279b77: movdqu XMMWORD PTR [rbp-0x40],xmm1
0x00279b7c: mov    eax,DWORD PTR [rip+0x137fa1a]        # 0x1415f959c ; literal="Cancel"
0x00279b82: mov    DWORD PTR [rbp-0x50],eax
0x00279b85: movzx  eax,WORD PTR [rip+0x137fa14]        # 0x1415f95a0 ; literal="el"
0x00279b8c: mov    WORD PTR [rbp-0x4c],ax
0x00279b90: mov    BYTE PTR [rbp-0x4a],0x0
0x00279b94: xor    r9d,r9d
0x00279b97: lea    rdx,[rbp-0x50]
0x00279b9b: lea    rcx,[rip+0x23ca73e]        # 0x1426442e0
0x00279ba2: call   0x140ad69a0
0x00279ba7: nop
0x00279ba8: mov    rdx,QWORD PTR [rbp-0x38]
0x00279bac: cmp    rdx,0xf
0x00279bb0: mov    r12d,DWORD PTR [rsp+0x60]
0x00279bb5: jbe    0x140279be8
0x00279bb7: inc    rdx
0x00279bba: mov    rcx,QWORD PTR [rbp-0x50]
0x00279bbe: mov    rax,rcx
0x00279bc1: cmp    rdx,0x1000
0x00279bc8: jb     0x140279be3
0x00279bca: add    rdx,0x27
0x00279bce: mov    rcx,QWORD PTR [rcx-0x8]
0x00279bd2: sub    rax,rcx
0x00279bd5: add    rax,0xfffffffffffffff8
0x00279bd9: cmp    rax,0x1f
0x00279bdd: ja     0x14027a143
0x00279be3: call   0x1415345f0
0x00279be8: mov    DWORD PTR [rip+0x23ca77a],0x1010007        # 0x14264436c
0x00279bf2: lea    eax,[r14+0x2]
0x00279bf6: mov    DWORD PTR [rip+0x23ca768],eax        # 0x142644364
0x00279bfc: mov    DWORD PTR [rip+0x23ca765],r13d        # 0x142644368
0x00279c03: mov    rsi,QWORD PTR [rsp+0x50]
0x00279c08: mov    ecx,DWORD PTR [rsi+0x4]
0x00279c0b: test   ecx,ecx
0x00279c0d: je     0x140279f82
0x00279c13: sub    ecx,0x1
0x00279c16: je     0x140279f26
0x00279c1c: sub    ecx,0x1
0x00279c1f: je     0x140279eb3
0x00279c25: cmp    ecx,0x1
0x00279c28: jne    0x14027a02f
0x00279c2e: mov    r15,QWORD PTR [rsi+0xc0]
0x00279c35: test   r15,r15
0x00279c38: je     0x14027a02f
0x00279c3e: add    r15,0x20
0x00279c42: xorps  xmm0,xmm0
0x00279c45: movups XMMWORD PTR [rbp-0x30],xmm0
0x00279c49: xorps  xmm1,xmm1
0x00279c4c: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x00279c51: mov    rsi,QWORD PTR [r15+0x10]
0x00279c55: cmp    QWORD PTR [r15+0x18],0xf
0x00279c5a: jbe    0x140279c5f
0x00279c5c: mov    r15,QWORD PTR [r15]
0x00279c5f: movabs rbx,0x7fffffffffffffff
0x00279c69: cmp    rsi,rbx
0x00279c6c: ja     0x14027ae65
0x00279c72: cmp    rsi,0xf
0x00279c76: ja     0x140279c8e
0x00279c78: mov    QWORD PTR [rbp-0x20],rsi
0x00279c7c: mov    QWORD PTR [rbp-0x18],0xf
0x00279c84: movups xmm0,XMMWORD PTR [r15]
0x00279c88: movups XMMWORD PTR [rbp-0x30],xmm0
0x00279c8c: jmp    0x140279cce
0x00279c8e: mov    rax,rsi
0x00279c91: or     rax,0xf
0x00279c95: cmp    rax,rbx
0x00279c98: ja     0x140279ca9
0x00279c9a: mov    rbx,rax
0x00279c9d: mov    ecx,0x16
0x00279ca2: cmp    rax,rcx
0x00279ca5: cmovb  rbx,rcx
0x00279ca9: lea    rcx,[rbx+0x1]
0x00279cad: call   0x140070760
0x00279cb2: mov    QWORD PTR [rbp-0x30],rax
0x00279cb6: mov    QWORD PTR [rbp-0x20],rsi
0x00279cba: mov    QWORD PTR [rbp-0x18],rbx
0x00279cbe: lea    r8,[rsi+0x1]
0x00279cc2: mov    rdx,r15
0x00279cc5: mov    rcx,rax
0x00279cc8: call   0x1415359e8
0x00279ccd: nop
0x00279cce: mov    rsi,QWORD PTR [rsp+0x50]
0x00279cd3: movsxd rdx,DWORD PTR [rsi+0xc8]
0x00279cda: test   edx,edx
0x00279cdc: js     0x140279e72
0x00279ce2: mov    rax,QWORD PTR [rsi+0xc0]
0x00279ce9: mov    rcx,QWORD PTR [rax+0x58]
0x00279ced: sub    rcx,QWORD PTR [rax+0x50]
0x00279cf1: sar    rcx,0x3
0x00279cf5: cmp    rdx,rcx
0x00279cf8: jae    0x140279e72
0x00279cfe: mov    r8d,0x9
0x00279d04: lea    rdx,[rip+0x139ce8d]        # 0x141616b98 ; literal=": select "
0x00279d0b: lea    rcx,[rbp-0x30]
0x00279d0f: call   0x14006f9a0
0x00279d14: mov    rax,QWORD PTR [rsi+0xc0]
0x00279d1b: movsxd rcx,DWORD PTR [rsi+0xc8]
0x00279d22: mov    rax,QWORD PTR [rax+0x50]
0x00279d26: mov    rdx,QWORD PTR [rax+rcx*8]
0x00279d2a: add    rdx,0x8
0x00279d2e: mov    r8,QWORD PTR [rdx+0x10]
0x00279d32: cmp    QWORD PTR [rdx+0x18],0xf
0x00279d37: jbe    0x140279d3c
0x00279d39: mov    rdx,QWORD PTR [rdx]
0x00279d3c: lea    rcx,[rbp-0x30]
0x00279d40: call   0x14006f9a0
0x00279d45: mov    r8d,0x2
0x00279d4b: lea    rdx,[rip+0x1396546]        # 0x141610298 ; literal=" ("
0x00279d52: lea    rcx,[rbp-0x30]
0x00279d56: call   0x14006f9a0
0x00279d5b: xorps  xmm0,xmm0
0x00279d5e: movups XMMWORD PTR [rbp-0x50],xmm0
0x00279d62: mov    QWORD PTR [rbp-0x40],0x0
0x00279d6a: mov    QWORD PTR [rbp-0x38],0xf
0x00279d72: mov    BYTE PTR [rbp-0x50],0x0
0x00279d76: mov    r8,QWORD PTR [rsi+0xc0]
0x00279d7d: movsxd rcx,DWORD PTR [rsi+0xc8]
0x00279d84: mov    rax,QWORD PTR [r8+0x50]
0x00279d88: mov    rcx,QWORD PTR [rax+rcx*8]
0x00279d8c: mov    rax,QWORD PTR [rcx]
0x00279d8f: mov    r8d,DWORD PTR [r8+0x118]
0x00279d96: lea    rdx,[rbp-0x50]
0x00279d9a: call   QWORD PTR [rax+0x38]
0x00279d9d: lea    rdx,[rbp-0x50]
0x00279da1: cmp    QWORD PTR [rbp-0x38],0xf
0x00279da6: cmova  rdx,QWORD PTR [rbp-0x50]
0x00279dab: mov    r8,QWORD PTR [rbp-0x40]
0x00279daf: lea    rcx,[rbp-0x30]
0x00279db3: call   0x14006f9a0
0x00279db8: mov    rax,QWORD PTR [rsi+0xc0]
0x00279dbf: movsxd rcx,DWORD PTR [rsi+0xc8]
0x00279dc6: mov    rax,QWORD PTR [rax+0x50]
0x00279dca: mov    rcx,QWORD PTR [rax+rcx*8]
0x00279dce: cmp    DWORD PTR [rcx+0x28],0x1
0x00279dd2: jle    0x140279e0f
0x00279dd4: mov    r8d,0x2
0x00279dda: lea    rdx,[rip+0x136a2e3]        # 0x1415e40c4 ; literal=", "
0x00279de1: lea    rcx,[rbp-0x30]
0x00279de5: call   0x14006f9a0
0x00279dea: lea    rdx,[rbp-0x30]
0x00279dee: mov    ecx,DWORD PTR [rsi+0xcc]
0x00279df4: call   0x140529cf0
0x00279df9: mov    r8d,0x5
0x00279dff: lea    rdx,[rip+0x139ccc6]        # 0x141616acc ; literal=" left"
0x00279e06: lea    rcx,[rbp-0x30]
0x00279e0a: call   0x14006f9a0
0x00279e0f: mov    rax,QWORD PTR [rsi+0xc0]
0x00279e16: movsxd rcx,DWORD PTR [rsi+0xc8]
0x00279e1d: mov    rax,QWORD PTR [rax+0x50]
0x00279e21: mov    rcx,QWORD PTR [rax+rcx*8]
0x00279e25: mov    eax,DWORD PTR [rcx+0x2c]
0x00279e28: and    eax,0x1
0x00279e2b: mov    ecx,eax
0x00279e2d: lea    r8,[rax*4+0xa]
0x00279e35: lea    rax,[rip+0x139ccac]        # 0x141616ae8 ; literal=", consumed"
0x00279e3c: lea    rdx,[rip+0x139cc95]        # 0x141616ad8 ; literal=", not consumed"
0x00279e43: test   ecx,ecx
0x00279e45: cmove  rdx,rax
0x00279e49: lea    rcx,[rbp-0x30]
0x00279e4d: call   0x14006f9a0
0x00279e52: mov    r8d,0x1
0x00279e58: lea    rdx,[rip+0x1396479]        # 0x1416102d8 ; literal=")"
0x00279e5f: lea    rcx,[rbp-0x30]
0x00279e63: call   0x14006f9a0
0x00279e68: nop
0x00279e69: lea    rcx,[rbp-0x50]
0x00279e6d: call   0x14006f7e0
0x00279e72: mov    r8d,0x1
0x00279e78: lea    rdx,[rip+0x13696f5]        # 0x1415e3574 ; literal="."
0x00279e7f: lea    rcx,[rbp-0x30]
0x00279e83: call   0x14006f9a0
0x00279e88: lea    rcx,[rbp-0x30]
0x00279e8c: call   0x14052b070
0x00279e91: xor    r9d,r9d
0x00279e94: lea    rdx,[rbp-0x30]
0x00279e98: lea    rcx,[rip+0x23ca441]        # 0x1426442e0
0x00279e9f: call   0x140ad69a0
0x00279ea4: nop
0x00279ea5: lea    rcx,[rbp-0x30]
0x00279ea9: call   0x14006f7e0
0x00279eae: jmp    0x14027a02f
0x00279eb3: xorps  xmm0,xmm0
0x00279eb6: movups XMMWORD PTR [rbp-0x50],xmm0
0x00279eba: mov    ecx,0x20 ; inline_fragment=" "
0x00279ebf: call   0x140070760
0x00279ec4: mov    rdx,rax
0x00279ec7: mov    QWORD PTR [rbp-0x50],rax
0x00279ecb: movdqa xmm0,XMMWORD PTR [rip+0x150bcbd]        # 0x141785b90
0x00279ed3: movdqu XMMWORD PTR [rbp-0x40],xmm0
0x00279ed8: movups xmm0,XMMWORD PTR [rip+0x139cca1]        # 0x141616b80 ; literal="Select a butchery tool."
0x00279edf: movups XMMWORD PTR [rax],xmm0
0x00279ee2: mov    ecx,DWORD PTR [rip+0x139cca8]        # 0x141616b90 ; literal="y tool."
0x00279ee8: mov    DWORD PTR [rax+0x10],ecx
0x00279eeb: movzx  ecx,WORD PTR [rip+0x139cca2]        # 0x141616b94 ; literal="ol."
0x00279ef2: mov    WORD PTR [rax+0x14],cx
0x00279ef6: movzx  eax,BYTE PTR [rip+0x139cc99]        # 0x141616b96 ; literal="."
0x00279efd: mov    BYTE PTR [rdx+0x16],al
0x00279f00: mov    BYTE PTR [rdx+0x17],0x0
0x00279f04: xor    r9d,r9d
0x00279f07: lea    rdx,[rbp-0x50]
0x00279f0b: lea    rcx,[rip+0x23ca3ce]        # 0x1426442e0
0x00279f12: call   0x140ad69a0
0x00279f17: nop
0x00279f18: lea    rcx,[rbp-0x50]
0x00279f1c: call   0x14006f7e0
0x00279f21: jmp    0x14027a02f
0x00279f26: xorps  xmm0,xmm0
0x00279f29: movups XMMWORD PTR [rbp-0x50],xmm0
0x00279f2d: mov    ecx,0x20 ; inline_fragment=" "
0x00279f32: call   0x140070760
0x00279f37: mov    QWORD PTR [rbp-0x50],rax
0x00279f3b: movdqa xmm0,XMMWORD PTR [rip+0x150bc9d]        # 0x141785be0
0x00279f43: movdqu XMMWORD PTR [rbp-0x40],xmm0
0x00279f48: movups xmm0,XMMWORD PTR [rip+0x139cc11]        # 0x141616b60 ; literal="What do you want to butcher?"
0x00279f4f: movups XMMWORD PTR [rax],xmm0
0x00279f52: movsd  xmm0,QWORD PTR [rip+0x139cc16]        # 0x141616b70 ; literal=" to butcher?"
0x00279f5a: movsd  QWORD PTR [rax+0x10],xmm0
0x00279f5f: mov    ecx,DWORD PTR [rip+0x139cc13]        # 0x141616b78 ; literal="her?"
0x00279f65: mov    DWORD PTR [rax+0x18],ecx
0x00279f68: mov    BYTE PTR [rax+0x1c],0x0
0x00279f6c: xor    r9d,r9d
0x00279f6f: lea    rdx,[rbp-0x50]
0x00279f73: lea    rcx,[rip+0x23ca366]        # 0x1426442e0
0x00279f7a: call   0x140ad69a0
0x00279f7f: nop
0x00279f80: jmp    0x140279ff4
0x00279f82: xorps  xmm0,xmm0
0x00279f85: movups XMMWORD PTR [rbp-0x50],xmm0
0x00279f89: mov    ecx,0x50 ; inline_fragment="P"
0x00279f8e: call   0x140070760
0x00279f93: mov    QWORD PTR [rbp-0x50],rax
0x00279f97: movdqa xmm0,XMMWORD PTR [rip+0x150bec1]        # 0x141785e60 ; literal="H"
0x00279f9f: movdqu XMMWORD PTR [rbp-0x40],xmm0
0x00279fa4: movaps xmm0,XMMWORD PTR [rip+0x139cb65]        # 0x141616b10 ; literal="What do you want to do?  Items must be in a grasp or on the ground here."
0x00279fab: movups XMMWORD PTR [rax],xmm0
0x00279fae: movaps xmm1,XMMWORD PTR [rip+0x139cb6b]        # 0x141616b20 ; literal=" to do?  Items must be in a grasp or on the ground here."
0x00279fb5: movups XMMWORD PTR [rax+0x10],xmm1
0x00279fb9: movaps xmm0,XMMWORD PTR [rip+0x139cb70]        # 0x141616b30 ; literal="ust be in a grasp or on the ground here."
0x00279fc0: movups XMMWORD PTR [rax+0x20],xmm0
0x00279fc4: movaps xmm1,XMMWORD PTR [rip+0x139cb75]        # 0x141616b40 ; literal="p or on the ground here."
0x00279fcb: movups XMMWORD PTR [rax+0x30],xmm1
0x00279fcf: movsd  xmm0,QWORD PTR [rip+0x139cb79]        # 0x141616b50 ; literal="nd here."
0x00279fd7: movsd  QWORD PTR [rax+0x40],xmm0
0x00279fdc: mov    BYTE PTR [rax+0x48],0x0
0x00279fe0: xor    r9d,r9d
0x00279fe3: lea    rdx,[rbp-0x50]
0x00279fe7: lea    rcx,[rip+0x23ca2f2]        # 0x1426442e0
0x00279fee: call   0x140ad69a0
0x00279ff3: nop
0x00279ff4: mov    rdx,QWORD PTR [rbp-0x38]
0x00279ff8: cmp    rdx,0xf
0x00279ffc: jbe    0x14027a02f
0x00279ffe: inc    rdx
0x0027a001: mov    rcx,QWORD PTR [rbp-0x50]
0x0027a005: cmp    rdx,0x1000
0x0027a00c: mov    rax,rcx
0x0027a00f: jb     0x14027a02a
0x0027a011: mov    rcx,QWORD PTR [rcx-0x8]
0x0027a015: sub    rax,rcx
0x0027a018: add    rdx,0x27
0x0027a01c: add    rax,0xfffffffffffffff8
0x0027a020: cmp    rax,0x1f
0x0027a024: ja     0x14027a143
0x0027a02a: call   0x1415345f0
0x0027a02f: inc    r14d
0x0027a032: mov    DWORD PTR [rsp+0x44],r14d
0x0027a037: lea    eax,[rdi-0x1]
0x0027a03a: mov    DWORD PTR [rsp+0x4c],eax
0x0027a03e: lea    r15d,[r13+0x2]
0x0027a042: mov    DWORD PTR [rsp+0x60],r15d
0x0027a047: lea    ecx,[r12-0x1]
0x0027a04c: sub    ecx,r15d
0x0027a04f: inc    ecx
0x0027a051: mov    eax,0x55555556 ; inline_fragment="VUUU"
0x0027a056: imul   ecx
0x0027a058: mov    ebx,edx
0x0027a05a: shr    ebx,0x1f
0x0027a05d: add    ebx,edx
0x0027a05f: mov    DWORD PTR [rbp-0x70],ebx
0x0027a062: movsxd r13,DWORD PTR [rsp+0x6c]
0x0027a067: cmp    r13d,ebx
0x0027a06a: jle    0x14027a077
0x0027a06c: lea    r12d,[rdi-0x3]
0x0027a070: mov    DWORD PTR [rsp+0x4c],r12d
0x0027a075: jmp    0x14027a07c
0x0027a077: mov    r12d,DWORD PTR [rsp+0x4c]
0x0027a07c: test   r13d,r13d
0x0027a07f: jne    0x14027a21f
0x0027a085: lea    eax,[r14+0x1]
0x0027a089: mov    DWORD PTR [rip+0x23ca2d5],eax        # 0x142644364
0x0027a08f: mov    DWORD PTR [rip+0x23ca2d2],r15d        # 0x142644368
0x0027a096: mov    DWORD PTR [rip+0x23ca2cc],0x1000004        # 0x14264436c
0x0027a0a0: mov    ecx,DWORD PTR [rsi+0x4]
0x0027a0a3: sub    ecx,0x1
0x0027a0a6: je     0x14027a1bf
0x0027a0ac: sub    ecx,0x1
0x0027a0af: je     0x14027a154
0x0027a0b5: cmp    ecx,0x1
0x0027a0b8: jne    0x14027a21f
0x0027a0be: xorps  xmm0,xmm0
0x0027a0c1: movups XMMWORD PTR [rbp-0x50],xmm0
0x0027a0c5: mov    ecx,0x20 ; inline_fragment=" "
0x0027a0ca: call   0x140070760
0x0027a0cf: mov    QWORD PTR [rbp-0x50],rax
0x0027a0d3: movdqa xmm0,XMMWORD PTR [rip+0x150ba65]        # 0x141785b40
0x0027a0db: movdqu XMMWORD PTR [rbp-0x40],xmm0
0x0027a0e0: movups xmm0,XMMWORD PTR [rip+0x139cec9]        # 0x141616fb0 ; literal="No available item."
0x0027a0e7: movups XMMWORD PTR [rax],xmm0
0x0027a0ea: movzx  ecx,WORD PTR [rip+0x139cecf]        # 0x141616fc0 ; literal="m."
0x0027a0f1: mov    WORD PTR [rax+0x10],cx
0x0027a0f5: mov    BYTE PTR [rax+0x12],r13b
0x0027a0f9: xor    r9d,r9d
0x0027a0fc: lea    rdx,[rbp-0x50]
0x0027a100: lea    rcx,[rip+0x23ca1d9]        # 0x1426442e0
0x0027a107: call   0x140ad69a0
0x0027a10c: nop
0x0027a10d: mov    rdx,QWORD PTR [rbp-0x38]
0x0027a111: cmp    rdx,0xf
0x0027a115: jbe    0x14027a21f
0x0027a11b: inc    rdx
0x0027a11e: mov    rcx,QWORD PTR [rbp-0x50]
0x0027a122: mov    rax,rcx
0x0027a125: cmp    rdx,0x1000
0x0027a12c: jb     0x14027a14a
0x0027a12e: add    rdx,0x27
0x0027a132: mov    rcx,QWORD PTR [rcx-0x8]
0x0027a136: sub    rax,rcx
0x0027a139: add    rax,0xfffffffffffffff8
0x0027a13d: cmp    rax,0x1f
0x0027a141: jbe    0x14027a14a
0x0027a143: call   QWORD PTR [rip+0x1366957]        # 0x1415e0aa0
0x0027a149: int3
0x0027a14a: call   0x1415345f0
0x0027a14f: jmp    0x14027a21f
0x0027a154: xorps  xmm0,xmm0
0x0027a157: movups XMMWORD PTR [rbp-0x50],xmm0
0x0027a15b: mov    ecx,0x20 ; inline_fragment=" "
0x0027a160: call   0x140070760
0x0027a165: mov    rdx,rax
0x0027a168: mov    QWORD PTR [rbp-0x50],rax
0x0027a16c: movdqa xmm0,XMMWORD PTR [rip+0x150ba5c]        # 0x141785bd0
0x0027a174: movdqu XMMWORD PTR [rbp-0x40],xmm0
0x0027a179: movups xmm0,XMMWORD PTR [rip+0x139ce10]        # 0x141616f90 ; literal="No butchery tool available."
0x0027a180: movups XMMWORD PTR [rax],xmm0
0x0027a183: movsd  xmm0,QWORD PTR [rip+0x139ce15]        # 0x141616fa0 ; literal=" available."
0x0027a18b: movsd  QWORD PTR [rax+0x10],xmm0
0x0027a190: movzx  ecx,WORD PTR [rip+0x139ce11]        # 0x141616fa8 ; literal="le."
0x0027a197: mov    WORD PTR [rax+0x18],cx
0x0027a19b: movzx  eax,BYTE PTR [rip+0x139ce08]        # 0x141616faa ; literal="."
0x0027a1a2: mov    BYTE PTR [rdx+0x1a],al
0x0027a1a5: mov    BYTE PTR [rdx+0x1b],0x0
0x0027a1a9: xor    r9d,r9d
0x0027a1ac: lea    rdx,[rbp-0x50]
0x0027a1b0: lea    rcx,[rip+0x23ca129]        # 0x1426442e0
0x0027a1b7: call   0x140ad69a0
0x0027a1bc: nop
0x0027a1bd: jmp    0x14027a216
0x0027a1bf: xorps  xmm0,xmm0
0x0027a1c2: movups XMMWORD PTR [rbp-0x50],xmm0
0x0027a1c6: mov    ecx,0x20 ; inline_fragment=" "
0x0027a1cb: call   0x140070760
0x0027a1d0: mov    QWORD PTR [rbp-0x50],rax
0x0027a1d4: movdqa xmm0,XMMWORD PTR [rip+0x150b994]        # 0x141785b70
0x0027a1dc: movdqu XMMWORD PTR [rbp-0x40],xmm0
0x0027a1e1: movups xmm0,XMMWORD PTR [rip+0x139c910]        # 0x141616af8 ; literal="No carcass available."
0x0027a1e8: movups XMMWORD PTR [rax],xmm0
0x0027a1eb: mov    ecx,DWORD PTR [rip+0x139c917]        # 0x141616b08 ; literal="able."
0x0027a1f1: mov    DWORD PTR [rax+0x10],ecx
0x0027a1f4: movzx  ecx,BYTE PTR [rip+0x139c911]        # 0x141616b0c ; literal="."
0x0027a1fb: mov    BYTE PTR [rax+0x14],cl
0x0027a1fe: mov    BYTE PTR [rax+0x15],0x0
0x0027a202: xor    r9d,r9d
0x0027a205: lea    rdx,[rbp-0x50]
0x0027a209: lea    rcx,[rip+0x23ca0d0]        # 0x1426442e0
0x0027a210: call   0x140ad69a0
0x0027a215: nop
0x0027a216: lea    rcx,[rbp-0x50]
0x0027a21a: call   0x14006f7e0
0x0027a21f: mov    edi,r15d
0x0027a222: mov    DWORD PTR [rsp+0x48],r15d
0x0027a227: mov    ecx,r13d
0x0027a22a: sub    ecx,ebx
0x0027a22c: cmp    DWORD PTR [rsi+0x24],ecx
0x0027a22f: cmovle ecx,DWORD PTR [rsi+0x24]
0x0027a233: xor    eax,eax
0x0027a235: test   ecx,ecx
0x0027a237: cmovns eax,ecx
0x0027a23a: mov    DWORD PTR [rsp+0x70],eax
0x0027a23e: movsxd rdx,eax
0x0027a241: mov    DWORD PTR [rsp+0x68],edx
0x0027a245: add    eax,ebx
0x0027a247: cmp    edx,eax
0x0027a249: jge    0x14027addb
0x0027a24f: mov    r8,rdx
0x0027a252: mov    QWORD PTR [rsp+0x58],rdx
0x0027a257: movsxd rax,r12d
0x0027a25a: mov    QWORD PTR [rbp-0x68],rax
0x0027a25e: movsxd rcx,r14d
0x0027a261: mov    QWORD PTR [rbp-0x78],rcx
0x0027a265: mov    rax,r13
0x0027a268: mov    QWORD PTR [rbp-0x58],rax
0x0027a26c: nop    DWORD PTR [rax+0x0]
0x0027a270: cmp    r8,rax
0x0027a273: jge    0x14027add1
0x0027a279: xor    r13d,r13d
0x0027a27c: mov    DWORD PTR [rsp+0x40],r13d
0x0027a281: mov    ecx,DWORD PTR [rsi+0x4]
0x0027a284: sub    ecx,0x1
0x0027a287: je     0x14027a2a2
0x0027a289: sub    ecx,0x1
0x0027a28c: je     0x14027a299
0x0027a28e: cmp    ecx,0x1
0x0027a291: jne    0x14027a2bd
0x0027a293: mov    rax,QWORD PTR [rsi+0x78]
0x0027a297: jmp    0x14027a2a9
0x0027a299: mov    rax,QWORD PTR [rsi+0x110]
0x0027a2a0: jmp    0x14027a2a9
0x0027a2a2: mov    rax,QWORD PTR [rsi+0xf8]
0x0027a2a9: mov    edx,DWORD PTR [rsp+0x64]
0x0027a2ad: mov    rcx,QWORD PTR [rax+r8*8]
0x0027a2b1: call   0x140c79c00
0x0027a2b6: mov    r13d,eax
0x0027a2b9: mov    DWORD PTR [rsp+0x40],eax
0x0027a2bd: mov    DWORD PTR [rip+0x23ca0a5],0x1010007        # 0x14264436c
0x0027a2c7: mov    esi,r14d
0x0027a2ca: cmp    r14d,r12d
0x0027a2cd: jg     0x14027a3d2
0x0027a2d3: lea    r14d,[rdi+0x3]
0x0027a2d7: mov    r13,QWORD PTR [rbp-0x78]
0x0027a2db: mov    r15,r13
0x0027a2de: xchg   ax,ax
0x0027a2e0: mov    ebx,edi
0x0027a2e2: cmp    edi,r14d
0x0027a2e5: jge    0x14027a3ba
0x0027a2eb: cmp    esi,r12d
0x0027a2ee: jne    0x14027a358
0x0027a2f0: lea    rdi,[rip+0x23cb9a9]        # 0x142645ca0
0x0027a2f7: nop    WORD PTR [rax+rax*1+0x0]
0x0027a300: mov    DWORD PTR [rip+0x23ca05e],esi        # 0x142644364
0x0027a306: mov    DWORD PTR [rip+0x23ca05c],ebx        # 0x142644368
0x0027a30c: lea    rdx,[rdi-0x18]
0x0027a310: cmp    r15,r13
0x0027a313: cmovne rdx,rdi
0x0027a317: mov    edx,DWORD PTR [rdx]
0x0027a319: lea    rcx,[rip+0x23c9fc0]        # 0x1426442e0
0x0027a320: call   0x140ad7b10
0x0027a325: cmp    DWORD PTR [rip+0x214d33c],0x0        # 0x1423c7668
0x0027a32c: jle    0x14027a34b
0x0027a32e: mov    rax,QWORD PTR [rip+0x214d32b]        # 0x1423c7660
0x0027a335: test   BYTE PTR [rax],0x1
0x0027a338: je     0x14027a34b
0x0027a33a: mov    r8b,0x1
0x0027a33d: xor    edx,edx
0x0027a33f: lea    rcx,[rip+0x23c9f9a]        # 0x1426442e0
0x0027a346: call   0x1400bb120
0x0027a34b: inc    ebx
0x0027a34d: add    rdi,0x4
0x0027a351: cmp    ebx,r14d
0x0027a354: jl     0x14027a300
0x0027a356: jmp    0x14027a3b6
0x0027a358: lea    rdi,[rip+0x23cb935]        # 0x142645c94
0x0027a35f: nop
0x0027a360: mov    DWORD PTR [rip+0x23c9ffe],esi        # 0x142644364
0x0027a366: mov    DWORD PTR [rip+0x23c9ffc],ebx        # 0x142644368
0x0027a36c: lea    rdx,[rdi-0xc]
0x0027a370: cmp    r15,r13
0x0027a373: cmovne rdx,rdi
0x0027a377: mov    edx,DWORD PTR [rdx]
0x0027a379: lea    rcx,[rip+0x23c9f60]        # 0x1426442e0
0x0027a380: call   0x140ad7b10
0x0027a385: cmp    DWORD PTR [rip+0x214d2dc],0x0        # 0x1423c7668
0x0027a38c: jle    0x14027a3ab
0x0027a38e: mov    rax,QWORD PTR [rip+0x214d2cb]        # 0x1423c7660
0x0027a395: test   BYTE PTR [rax],0x1
0x0027a398: je     0x14027a3ab
0x0027a39a: mov    r8b,0x1
0x0027a39d: xor    edx,edx
0x0027a39f: lea    rcx,[rip+0x23c9f3a]        # 0x1426442e0
0x0027a3a6: call   0x1400bb120
0x0027a3ab: inc    ebx
0x0027a3ad: add    rdi,0x4
0x0027a3b1: cmp    ebx,r14d
0x0027a3b4: jl     0x14027a360
0x0027a3b6: mov    edi,DWORD PTR [rsp+0x48]
0x0027a3ba: inc    esi
0x0027a3bc: inc    r15
0x0027a3bf: cmp    esi,r12d
0x0027a3c2: jle    0x14027a2e0
0x0027a3c8: mov    r13d,DWORD PTR [rsp+0x40]
0x0027a3cd: mov    r14d,DWORD PTR [rsp+0x44]
0x0027a3d2: cmp    DWORD PTR [rip+0x214d28f],0x0        # 0x1423c7668
0x0027a3d9: jle    0x14027a42b
0x0027a3db: mov    rax,QWORD PTR [rip+0x214d27e]        # 0x1423c7660
0x0027a3e2: test   BYTE PTR [rax],0x1
0x0027a3e5: je     0x14027a42b
0x0027a3e7: test   r13d,r13d
0x0027a3ea: je     0x14027a42b
0x0027a3ec: mov    DWORD PTR [rip+0x23c9f71],r14d        # 0x142644364
0x0027a3f3: mov    DWORD PTR [rip+0x23c9f6f],edi        # 0x142644368
0x0027a3f9: mov    BYTE PTR [rsp+0x30],0x0
0x0027a3fe: mov    DWORD PTR [rsp+0x28],0x3
0x0027a406: mov    DWORD PTR [rsp+0x20],0x5
0x0027a40e: mov    r9d,0x2
0x0027a414: mov    r8d,r9d
0x0027a417: mov    edx,r13d
0x0027a41a: lea    rcx,[rip+0x23c9ebf]        # 0x1426442e0
0x0027a421: call   0x140ad7db0
0x0027a426: xor    r12d,r12d
0x0027a429: jmp    0x14027a442
0x0027a42b: xor    r12d,r12d
0x0027a42e: mov    DWORD PTR [rsp+0x40],r12d
0x0027a433: mov    QWORD PTR [rbp-0x80],r12
0x0027a437: test   r13d,r13d
0x0027a43a: jne    0x14027a44b
0x0027a43c: mov    r12d,0x5
0x0027a442: mov    QWORD PTR [rbp-0x80],r12
0x0027a446: mov    DWORD PTR [rsp+0x40],r12d
0x0027a44b: mov    edi,r14d
0x0027a44e: sub    edi,r12d
0x0027a451: lea    eax,[rdi+0x7]
0x0027a454: mov    DWORD PTR [rip+0x23c9f0a],eax        # 0x142644364
0x0027a45a: mov    r15d,DWORD PTR [rsp+0x48]
0x0027a45f: lea    ebx,[r15+0x1]
0x0027a463: mov    DWORD PTR [rip+0x23c9eff],ebx        # 0x142644368
0x0027a469: mov    edx,DWORD PTR [rsp+0x68]
0x0027a46d: sub    edx,DWORD PTR [rsp+0x70]
0x0027a471: add    edx,0x52
0x0027a474: call   0x140c364f0
0x0027a479: lea    eax,[rdi+0x9]
0x0027a47c: mov    DWORD PTR [rip+0x23c9ee2],eax        # 0x142644364
0x0027a482: mov    DWORD PTR [rip+0x23c9ee0],ebx        # 0x142644368
0x0027a488: mov    DWORD PTR [rip+0x23c9eda],0x1010007        # 0x14264436c
0x0027a492: xorps  xmm0,xmm0
0x0027a495: movups XMMWORD PTR [rbp-0x10],xmm0
0x0027a499: mov    QWORD PTR [rbp+0x0],0x0
0x0027a4a1: mov    QWORD PTR [rbp+0x8],0xf
0x0027a4a9: mov    BYTE PTR [rbp-0x10],0x0
0x0027a4ad: mov    rsi,QWORD PTR [rsp+0x50]
0x0027a4b2: mov    ecx,DWORD PTR [rsi+0x4]
0x0027a4b5: test   ecx,ecx
0x0027a4b7: je     0x14027a52b
0x0027a4b9: sub    ecx,0x1
0x0027a4bc: mov    rdi,QWORD PTR [rsp+0x58]
0x0027a4c1: je     0x14027a502
0x0027a4c3: sub    ecx,0x1
0x0027a4c6: je     0x14027a4d7
0x0027a4c8: cmp    ecx,0x1
0x0027a4cb: jne    0x14027a62b
0x0027a4d1: mov    rax,QWORD PTR [rsi+0x78]
0x0027a4d5: jmp    0x14027a4de
0x0027a4d7: mov    rax,QWORD PTR [rsi+0x110]
0x0027a4de: lea    rdx,[rbp-0x10]
0x0027a4e2: xor    r8d,r8d
0x0027a4e5: mov    r9d,0xffffffff
0x0027a4eb: mov    rcx,QWORD PTR [rax+rdi*8]
0x0027a4ef: call   0x140c62490
0x0027a4f4: lea    rcx,[rbp-0x10]
0x0027a4f8: call   0x14052b070
0x0027a4fd: jmp    0x14027a62b
0x0027a502: mov    rax,QWORD PTR [rsi+0xf8]
0x0027a509: mov    rcx,QWORD PTR [rax+rdi*8]
0x0027a50d: mov    rax,QWORD PTR [rcx]
0x0027a510: xor    r8d,r8d
0x0027a513: lea    rdx,[rbp-0x10]
0x0027a517: call   QWORD PTR [rax+0x5e8]
0x0027a51d: lea    rcx,[rbp-0x10]
0x0027a521: call   0x14052b070
0x0027a526: jmp    0x14027a62b
0x0027a52b: mov    rax,QWORD PTR [rsi+0x28]
0x0027a52f: mov    rcx,QWORD PTR [rsp+0x58]
0x0027a534: mov    rdx,QWORD PTR [rax+rcx*8]
0x0027a538: test   rdx,rdx
0x0027a53b: jne    0x14027a698
0x0027a541: mov    r14,QWORD PTR [rsi+0x40]
0x0027a545: mov    rax,QWORD PTR [r14+rcx*8]
0x0027a549: cmp    QWORD PTR [rax+0x10],rdx
0x0027a54d: jne    0x14027a57e
0x0027a54f: mov    QWORD PTR [rbp+0x0],0x7
0x0027a557: mov    rax,QWORD PTR [rip+0x139ca6a]        # 0x141616fc8 ; literal="Butcher"
0x0027a55e: mov    DWORD PTR [rbp-0x10],eax
0x0027a561: movzx  eax,WORD PTR [rip+0x139ca64]        # 0x141616fcc ; literal="her"
0x0027a568: mov    WORD PTR [rbp-0xc],ax
0x0027a56c: movzx  eax,BYTE PTR [rip+0x139ca5b]        # 0x141616fce ; literal="r"
0x0027a573: mov    BYTE PTR [rbp-0xa],al
0x0027a576: mov    BYTE PTR [rbp-0x9],dl
0x0027a579: jmp    0x14027a618
0x0027a57e: mov    rbx,QWORD PTR [rip+0x2276beb]        # 0x1424f1170
0x0027a585: mov    rdi,QWORD PTR [rip+0x2276bec]        # 0x1424f1178
0x0027a58c: nop    DWORD PTR [rax+0x0]
0x0027a590: cmp    rbx,rdi
0x0027a593: jae    0x14027a609
0x0027a595: mov    r15,QWORD PTR [r14+rcx*8]
0x0027a599: mov    rsi,QWORD PTR [rbx]
0x0027a59c: mov    r12,QWORD PTR [r15+0x10]
0x0027a5a0: mov    rdx,r15
0x0027a5a3: mov    r13,QWORD PTR [r15+0x18]
0x0027a5a7: cmp    r13,0xf
0x0027a5ab: jbe    0x14027a5b0
0x0027a5ad: mov    rdx,QWORD PTR [r15]
0x0027a5b0: mov    r8,QWORD PTR [rsi+0x10]
0x0027a5b4: mov    rcx,rsi
0x0027a5b7: cmp    QWORD PTR [rsi+0x18],0xf
0x0027a5bc: jbe    0x14027a5c1
0x0027a5be: mov    rcx,QWORD PTR [rsi]
0x0027a5c1: cmp    r8,r12
0x0027a5c4: jne    0x14027a5cf
0x0027a5c6: call   0x141535d84
0x0027a5cb: test   eax,eax
0x0027a5cd: je     0x14027a5da
0x0027a5cf: add    rbx,0x8
0x0027a5d3: mov    rcx,QWORD PTR [rsp+0x58]
0x0027a5d8: jmp    0x14027a590
0x0027a5da: lea    rax,[rbp-0x10]
0x0027a5de: cmp    QWORD PTR [rsi+0x50],0x0
0x0027a5e3: je     0x14027a67f
0x0027a5e9: lea    rdx,[rsi+0x40]
0x0027a5ed: cmp    rax,rdx
0x0027a5f0: je     0x14027a609
0x0027a5f2: mov    r8,QWORD PTR [rdx+0x10]
0x0027a5f6: cmp    QWORD PTR [rdx+0x18],0xf
0x0027a5fb: jbe    0x14027a600
0x0027a5fd: mov    rdx,QWORD PTR [rdx]
0x0027a600: lea    rcx,[rbp-0x10]
0x0027a604: call   0x14006f860
0x0027a609: mov    r15d,DWORD PTR [rsp+0x48]
0x0027a60e: mov    rsi,QWORD PTR [rsp+0x50]
0x0027a613: mov    r12d,DWORD PTR [rsp+0x40]
0x0027a618: mov    r14d,DWORD PTR [rsp+0x44]
0x0027a61d: lea    rcx,[rbp-0x10]
0x0027a621: call   0x14052b070
0x0027a626: mov    rdi,QWORD PTR [rsp+0x58]
0x0027a62b: mov    eax,r12d
0x0027a62e: sub    eax,r14d
0x0027a631: mov    ecx,DWORD PTR [rsp+0x4c]
0x0027a635: add    ecx,0xfffffff2
0x0027a638: add    eax,ecx
0x0027a63a: movsxd rcx,eax
0x0027a63d: mov    rdx,QWORD PTR [rbp+0x0]
0x0027a641: mov    r14,QWORD PTR [rbp-0x78]
0x0027a645: mov    r13,QWORD PTR [rbp-0x80]
0x0027a649: cmp    rdx,rcx
0x0027a64c: jb     0x14027a717
0x0027a652: mov    rax,QWORD PTR [rbp-0x68]
0x0027a656: sub    rax,r14
0x0027a659: lea    rbx,[r13-0xd]
0x0027a65d: add    rbx,rax
0x0027a660: js     0x14027a6d8
0x0027a662: cmp    rbx,rdx
0x0027a665: ja     0x14027a6c5
0x0027a667: mov    QWORD PTR [rbp+0x0],rbx
0x0027a66b: lea    rax,[rbp-0x10]
0x0027a66f: cmp    QWORD PTR [rbp+0x8],0xf
0x0027a674: cmova  rax,QWORD PTR [rbp-0x10]
0x0027a679: mov    BYTE PTR [rax+rbx*1],0x0
0x0027a67d: jmp    0x14027a6d8
0x0027a67f: cmp    rax,r15
0x0027a682: je     0x14027a609
0x0027a684: cmp    r13,0xf
0x0027a688: jbe    0x14027a68d
0x0027a68a: mov    r15,QWORD PTR [r15]
0x0027a68d: mov    r8,r12
0x0027a690: mov    rdx,r15
0x0027a693: jmp    0x14027a600
0x0027a698: add    rdx,0x20
0x0027a69c: lea    rax,[rbp-0x10]
0x0027a6a0: cmp    rax,rdx
0x0027a6a3: je     0x14027a61d
0x0027a6a9: mov    r8,QWORD PTR [rdx+0x10]
0x0027a6ad: cmp    QWORD PTR [rdx+0x18],0xf
0x0027a6b2: jbe    0x14027a6b7
0x0027a6b4: mov    rdx,QWORD PTR [rdx]
0x0027a6b7: lea    rcx,[rbp-0x10]
0x0027a6bb: call   0x14006f860
0x0027a6c0: jmp    0x14027a61d
0x0027a6c5: mov    rdx,rbx
0x0027a6c8: sub    rdx,QWORD PTR [rbp+0x0]
0x0027a6cc: xor    r8d,r8d
0x0027a6cf: lea    rcx,[rbp-0x10]
0x0027a6d3: call   0x1400e1240
0x0027a6d8: cmp    rbx,0x3
0x0027a6dc: jle    0x14027a717
0x0027a6de: lea    rax,[rbp-0x10]
0x0027a6e2: cmp    QWORD PTR [rbp+0x8],0xf
0x0027a6e7: cmova  rax,QWORD PTR [rbp-0x10]
0x0027a6ec: mov    BYTE PTR [rax+rbx*1-0x3],0x2e ; inline_fragment="."
0x0027a6f1: lea    rax,[rbp-0x10]
0x0027a6f5: cmp    QWORD PTR [rbp+0x8],0xf
0x0027a6fa: cmova  rax,QWORD PTR [rbp-0x10]
0x0027a6ff: mov    BYTE PTR [rax+rbx*1-0x2],0x2e ; inline_fragment="."
0x0027a704: lea    rax,[rbp-0x10]
0x0027a708: cmp    QWORD PTR [rbp+0x8],0xf
0x0027a70d: cmova  rax,QWORD PTR [rbp-0x10]
0x0027a712: mov    BYTE PTR [rax+rbx*1-0x1],0x2e ; inline_fragment="."
0x0027a717: xor    r9d,r9d
0x0027a71a: lea    rdx,[rbp-0x10]
0x0027a71e: lea    rcx,[rip+0x23c9bbb]        # 0x1426442e0
0x0027a725: call   0x140ad69a0
0x0027a72a: mov    eax,DWORD PTR [rsp+0x44]
0x0027a72e: sub    eax,r12d
0x0027a731: add    eax,0xa
0x0027a734: mov    DWORD PTR [rip+0x23c9c2a],eax        # 0x142644364
0x0027a73a: lea    eax,[r15+0x2]
0x0027a73e: mov    DWORD PTR [rip+0x23c9c24],eax        # 0x142644368
0x0027a744: mov    ecx,DWORD PTR [rsi+0x4]
0x0027a747: test   ecx,ecx
0x0027a749: je     0x14027a7e7
0x0027a74f: cmp    ecx,0x1
0x0027a752: jne    0x14027ad71
0x0027a758: mov    rax,QWORD PTR [rsi+0xf8]
0x0027a75f: mov    rcx,QWORD PTR [rbp-0x60]
0x0027a763: cmp    DWORD PTR [rcx+0x988],0x278d00
0x0027a76d: setge  r8b
0x0027a771: xor    edx,edx
0x0027a773: mov    rcx,QWORD PTR [rax+rdi*8]
0x0027a777: call   0x140c70270
0x0027a77c: test   al,al
0x0027a77e: jne    0x14027ad71
0x0027a784: mov    DWORD PTR [rip+0x23c9bde],0x1000004        # 0x14264436c
0x0027a78e: xorps  xmm0,xmm0
0x0027a791: movups XMMWORD PTR [rbp-0x50],xmm0
0x0027a795: mov    ecx,0x20 ; inline_fragment=" "
0x0027a79a: call   0x140070760
0x0027a79f: mov    QWORD PTR [rbp-0x50],rax
0x0027a7a3: mov    QWORD PTR [rbp-0x40],0x18
0x0027a7ab: mov    QWORD PTR [rbp-0x38],0x1f
0x0027a7b3: movups xmm0,XMMWORD PTR [rip+0x139c88e]        # 0x141617048 ; literal="You are not that hungry."
0x0027a7ba: movups XMMWORD PTR [rax],xmm0
0x0027a7bd: movsd  xmm0,QWORD PTR [rip+0x139c893]        # 0x141617058 ; literal=" hungry."
0x0027a7c5: movsd  QWORD PTR [rax+0x10],xmm0
0x0027a7ca: mov    BYTE PTR [rax+0x18],0x0
0x0027a7ce: xor    r9d,r9d
0x0027a7d1: lea    rdx,[rbp-0x50]
0x0027a7d5: lea    rcx,[rip+0x23c9b04]        # 0x1426442e0
0x0027a7dc: call   0x140ad69a0
0x0027a7e1: nop
0x0027a7e2: jmp    0x14027a940
0x0027a7e7: mov    rax,QWORD PTR [rsi+0x28]
0x0027a7eb: mov    rdx,QWORD PTR [rsp+0x58]
0x0027a7f0: mov    rbx,QWORD PTR [rax+rdx*8]
0x0027a7f4: test   rbx,rbx
0x0027a7f7: jne    0x14027aaa4
0x0027a7fd: mov    rax,QWORD PTR [rsi+0x40]
0x0027a801: mov    rcx,QWORD PTR [rax+rdx*8]
0x0027a805: cmp    QWORD PTR [rcx+0x10],rbx
0x0027a809: jne    0x14027a984
0x0027a80f: mov    r8,QWORD PTR [rsi+0xf8]
0x0027a816: mov    rax,QWORD PTR [rsi+0x100]
0x0027a81d: sub    rax,r8
0x0027a820: sar    rax,0x3
0x0027a824: test   rax,rax
0x0027a827: jne    0x14027a891
0x0027a829: mov    DWORD PTR [rip+0x23c9b39],0x1000004        # 0x14264436c
0x0027a833: xorps  xmm0,xmm0
0x0027a836: movups XMMWORD PTR [rbp-0x50],xmm0
0x0027a83a: mov    ecx,0x20 ; inline_fragment=" "
0x0027a83f: call   0x140070760
0x0027a844: mov    QWORD PTR [rbp-0x50],rax
0x0027a848: mov    QWORD PTR [rbp-0x40],0x15
0x0027a850: mov    QWORD PTR [rbp-0x38],0x1f
0x0027a858: movups xmm0,XMMWORD PTR [rip+0x139c299]        # 0x141616af8 ; literal="No carcass available."
0x0027a85f: movups XMMWORD PTR [rax],xmm0
0x0027a862: mov    ecx,DWORD PTR [rip+0x139c2a0]        # 0x141616b08 ; literal="able."
0x0027a868: mov    DWORD PTR [rax+0x10],ecx
0x0027a86b: movzx  ecx,BYTE PTR [rip+0x139c29a]        # 0x141616b0c ; literal="."
0x0027a872: mov    BYTE PTR [rax+0x14],cl
0x0027a875: mov    BYTE PTR [rax+0x15],bl
0x0027a878: xor    r9d,r9d
0x0027a87b: lea    rdx,[rbp-0x50]
0x0027a87f: lea    rcx,[rip+0x23c9a5a]        # 0x1426442e0
0x0027a886: call   0x140ad69a0
0x0027a88b: nop
0x0027a88c: jmp    0x14027a940
0x0027a891: mov    rdx,QWORD PTR [rsi+0x110]
0x0027a898: mov    rcx,QWORD PTR [rsi+0x118]
0x0027a89f: sub    rcx,rdx
0x0027a8a2: sar    rcx,0x3
0x0027a8a6: test   rcx,rcx
0x0027a8a9: je     0x14027a8ca
0x0027a8ab: cmp    rax,0x1
0x0027a8af: jne    0x14027ad71
0x0027a8b5: cmp    rcx,rax
0x0027a8b8: jne    0x14027ad71
0x0027a8be: mov    rax,QWORD PTR [rdx]
0x0027a8c1: cmp    QWORD PTR [r8],rax
0x0027a8c4: jne    0x14027ad71
0x0027a8ca: mov    DWORD PTR [rip+0x23c9a98],0x1000004        # 0x14264436c
0x0027a8d4: xorps  xmm0,xmm0
0x0027a8d7: movups XMMWORD PTR [rbp-0x50],xmm0
0x0027a8db: mov    ecx,0x20 ; inline_fragment=" "
0x0027a8e0: call   0x140070760
0x0027a8e5: mov    rdx,rax
0x0027a8e8: mov    QWORD PTR [rbp-0x50],rax
0x0027a8ec: mov    QWORD PTR [rbp-0x40],0x1b
0x0027a8f4: mov    QWORD PTR [rbp-0x38],0x1f
0x0027a8fc: movups xmm0,XMMWORD PTR [rip+0x139c68d]        # 0x141616f90 ; literal="No butchery tool available."
0x0027a903: movups XMMWORD PTR [rax],xmm0
0x0027a906: movsd  xmm0,QWORD PTR [rip+0x139c692]        # 0x141616fa0 ; literal=" available."
0x0027a90e: movsd  QWORD PTR [rax+0x10],xmm0
0x0027a913: movzx  ecx,WORD PTR [rip+0x139c68e]        # 0x141616fa8 ; literal="le."
0x0027a91a: mov    WORD PTR [rax+0x18],cx
0x0027a91e: movzx  eax,BYTE PTR [rip+0x139c685]        # 0x141616faa ; literal="."
0x0027a925: mov    BYTE PTR [rdx+0x1a],al
0x0027a928: mov    BYTE PTR [rdx+0x1b],0x0
0x0027a92c: xor    r9d,r9d
0x0027a92f: lea    rdx,[rbp-0x50]
0x0027a933: lea    rcx,[rip+0x23c99a6]        # 0x1426442e0
0x0027a93a: call   0x140ad69a0
0x0027a93f: nop
0x0027a940: mov    rdx,QWORD PTR [rbp-0x38]
0x0027a944: cmp    rdx,0xf
0x0027a948: jbe    0x14027ad71
0x0027a94e: mov    rcx,QWORD PTR [rbp-0x50]
0x0027a952: inc    rdx
0x0027a955: mov    rax,rcx
0x0027a958: cmp    rdx,0x1000
0x0027a95f: jb     0x14027a97a
0x0027a961: add    rdx,0x27
0x0027a965: mov    rcx,QWORD PTR [rcx-0x8]
0x0027a969: sub    rax,rcx
0x0027a96c: add    rax,0xfffffffffffffff8
0x0027a970: cmp    rax,0x1f
0x0027a974: ja     0x14027adbc
0x0027a97a: call   0x1415345f0
0x0027a97f: jmp    0x14027ad71
0x0027a984: xorps  xmm0,xmm0
0x0027a987: movups XMMWORD PTR [rbp+0x10],xmm0
0x0027a98b: xor    r14d,r14d
0x0027a98e: mov    QWORD PTR [rbp+0x20],r14
0x0027a992: mov    r15d,0xf
0x0027a998: mov    QWORD PTR [rbp+0x28],r15
0x0027a99c: mov    BYTE PTR [rbp+0x10],r14b
0x0027a9a0: mov    DWORD PTR [rip+0x23c99c2],0x1000007        # 0x14264436c
0x0027a9aa: mov    rbx,QWORD PTR [rip+0x22767bf]        # 0x1424f1170
0x0027a9b1: mov    rdi,QWORD PTR [rip+0x22767c0]        # 0x1424f1178
0x0027a9b8: cmp    rbx,rdi
0x0027a9bb: jae    0x14027aa36
0x0027a9bd: mov    rax,QWORD PTR [rsi+0x40]
0x0027a9c1: mov    rdx,QWORD PTR [rax+rdx*8]
0x0027a9c5: mov    rsi,QWORD PTR [rbx]
0x0027a9c8: mov    rax,QWORD PTR [rdx+0x10]
0x0027a9cc: cmp    QWORD PTR [rdx+0x18],0xf
0x0027a9d1: jbe    0x14027a9d6
0x0027a9d3: mov    rdx,QWORD PTR [rdx]
0x0027a9d6: mov    r8,QWORD PTR [rsi+0x10]
0x0027a9da: mov    rcx,rsi
0x0027a9dd: cmp    QWORD PTR [rsi+0x18],0xf
0x0027a9e2: jbe    0x14027a9e7
0x0027a9e4: mov    rcx,QWORD PTR [rsi]
0x0027a9e7: cmp    r8,rax
0x0027a9ea: jne    0x14027a9f5
0x0027a9ec: call   0x141535d84
0x0027a9f1: test   eax,eax
0x0027a9f3: je     0x14027aa05
0x0027a9f5: add    rbx,0x8
0x0027a9f9: mov    rsi,QWORD PTR [rsp+0x50]
0x0027a9fe: mov    rdx,QWORD PTR [rsp+0x58]
0x0027aa03: jmp    0x14027a9b8
0x0027aa05: lea    rdx,[rsi+0x68]
0x0027aa09: lea    rax,[rbp+0x10]
0x0027aa0d: cmp    rax,rdx
0x0027aa10: je     0x14027aa31
0x0027aa12: mov    r8,QWORD PTR [rdx+0x10]
0x0027aa16: cmp    QWORD PTR [rdx+0x18],0xf
0x0027aa1b: jbe    0x14027aa20
0x0027aa1d: mov    rdx,QWORD PTR [rdx]
0x0027aa20: lea    rcx,[rbp+0x10]
0x0027aa24: call   0x14006f860
0x0027aa29: mov    r15,QWORD PTR [rbp+0x28]
0x0027aa2d: mov    r14,QWORD PTR [rbp+0x20]
0x0027aa31: mov    rsi,QWORD PTR [rsp+0x50]
0x0027aa36: sub    r12d,DWORD PTR [rsp+0x44]
0x0027aa3b: mov    eax,DWORD PTR [rsp+0x4c]
0x0027aa3f: add    eax,0xfffffff6
0x0027aa42: add    eax,r12d
0x0027aa45: movsxd rcx,eax
0x0027aa48: cmp    r14,rcx
0x0027aa4b: jbe    0x14027aa87
0x0027aa4d: mov    rdx,QWORD PTR [rbp-0x68]
0x0027aa51: sub    rdx,QWORD PTR [rbp-0x78]
0x0027aa55: add    rdx,0xfffffffffffffff6
0x0027aa59: add    rdx,r13
0x0027aa5c: cmp    rdx,r14
0x0027aa5f: ja     0x14027aa78
0x0027aa61: mov    QWORD PTR [rbp+0x20],rdx
0x0027aa65: lea    rax,[rbp+0x10]
0x0027aa69: cmp    r15,0xf
0x0027aa6d: cmova  rax,QWORD PTR [rbp+0x10]
0x0027aa72: mov    BYTE PTR [rax+rdx*1],0x0
0x0027aa76: jmp    0x14027aa87
0x0027aa78: sub    rdx,r14
0x0027aa7b: xor    r8d,r8d
0x0027aa7e: lea    rcx,[rbp+0x10]
0x0027aa82: call   0x1400e1240
0x0027aa87: xor    r9d,r9d
0x0027aa8a: lea    rdx,[rbp+0x10]
0x0027aa8e: lea    rcx,[rip+0x23c984b]        # 0x1426442e0
0x0027aa95: call   0x140ad69a0
0x0027aa9a: nop
0x0027aa9b: lea    rcx,[rbp+0x10]
0x0027aa9f: jmp    0x14027ad6c
0x0027aaa4: mov    DWORD PTR [rip+0x23c98be],0x1000007        # 0x14264436c
0x0027aaae: xorps  xmm0,xmm0
0x0027aab1: movups XMMWORD PTR [rbp-0x30],xmm0
0x0027aab5: mov    r8d,0x7
0x0027aabb: mov    QWORD PTR [rbp-0x20],r8
0x0027aabf: mov    QWORD PTR [rbp-0x18],0xf
0x0027aac7: mov    rax,QWORD PTR [rip+0x139c502]        # 0x141616fd0 ; literal="Needs: "
0x0027aace: mov    DWORD PTR [rbp-0x30],eax
0x0027aad1: movzx  eax,WORD PTR [rip+0x139c4fc]        # 0x141616fd4 ; literal="s: "
0x0027aad8: mov    WORD PTR [rbp-0x2c],ax
0x0027aadc: movzx  eax,BYTE PTR [rip+0x139c4f3]        # 0x141616fd6 ; literal=" "
0x0027aae3: mov    BYTE PTR [rbp-0x2a],al
0x0027aae6: mov    BYTE PTR [rbp-0x29],0x0
0x0027aaea: mov    rdx,QWORD PTR [rbx+0x50]
0x0027aaee: mov    rax,QWORD PTR [rbx+0x58]
0x0027aaf2: sub    rax,rdx
0x0027aaf5: sar    rax,0x3
0x0027aaf9: test   rax,rax
0x0027aafc: jne    0x14027ab19
0x0027aafe: mov    r8d,0x8
0x0027ab04: lea    rdx,[rip+0x139c455]        # 0x141616f60 ; literal="nothing."
0x0027ab0b: lea    rcx,[rbp-0x30]
0x0027ab0f: call   0x14006f9a0
0x0027ab14: jmp    0x14027acff
0x0027ab19: xor    r15d,r15d
0x0027ab1c: mov    edi,r15d
0x0027ab1f: test   rax,rax
0x0027ab22: je     0x14027ad03
0x0027ab28: mov    esi,r15d
0x0027ab2b: nop    DWORD PTR [rax+rax*1+0x0]
0x0027ab30: xorps  xmm0,xmm0
0x0027ab33: movups XMMWORD PTR [rbp-0x50],xmm0
0x0027ab37: mov    QWORD PTR [rbp-0x40],r15
0x0027ab3b: mov    QWORD PTR [rbp-0x38],0xf
0x0027ab43: mov    BYTE PTR [rbp-0x50],0x0
0x0027ab47: mov    rcx,QWORD PTR [rdx+rsi*1]
0x0027ab4b: mov    rax,QWORD PTR [rcx]
0x0027ab4e: mov    r8d,DWORD PTR [rbx+0x118]
0x0027ab55: lea    rdx,[rbp-0x50]
0x0027ab59: call   QWORD PTR [rax+0x38]
0x0027ab5c: lea    rdx,[rbp-0x50]
0x0027ab60: cmp    QWORD PTR [rbp-0x38],0xf
0x0027ab65: cmova  rdx,QWORD PTR [rbp-0x50]
0x0027ab6a: mov    r8,QWORD PTR [rbp-0x40]
0x0027ab6e: lea    rcx,[rbp-0x30]
0x0027ab72: call   0x14006f9a0
0x0027ab77: mov    r8d,0x2
0x0027ab7d: lea    rdx,[rip+0x139c3e8]        # 0x141616f6c ; literal=" ["
0x0027ab84: lea    rcx,[rbp-0x30]
0x0027ab88: call   0x14006f9a0
0x0027ab8d: mov    rax,QWORD PTR [rbx+0x50]
0x0027ab91: mov    rcx,QWORD PTR [rax+rsi*1]
0x0027ab95: mov    ecx,DWORD PTR [rcx+0x28]
0x0027ab98: cmp    ecx,0x1
0x0027ab9b: jle    0x14027ac2e
0x0027aba1: xorps  xmm0,xmm0
0x0027aba4: movups XMMWORD PTR [rbp+0x30],xmm0
0x0027aba8: mov    QWORD PTR [rbp+0x40],r15
0x0027abac: mov    QWORD PTR [rbp+0x48],0xf
0x0027abb4: mov    BYTE PTR [rbp+0x30],0x0
0x0027abb8: lea    rdx,[rbp+0x30]
0x0027abbc: call   0x140529db0
0x0027abc1: lea    rdx,[rbp+0x30]
0x0027abc5: cmp    QWORD PTR [rbp+0x48],0xf
0x0027abca: cmova  rdx,QWORD PTR [rbp+0x30]
0x0027abcf: mov    r8,QWORD PTR [rbp+0x40]
0x0027abd3: lea    rcx,[rbp-0x30]
0x0027abd7: call   0x14006f9a0
0x0027abdc: nop
0x0027abdd: mov    rdx,QWORD PTR [rbp+0x48]
0x0027abe1: cmp    rdx,0xf
0x0027abe5: jbe    0x14027ac18
0x0027abe7: inc    rdx
0x0027abea: mov    rcx,QWORD PTR [rbp+0x30]
0x0027abee: mov    rax,rcx
0x0027abf1: cmp    rdx,0x1000
0x0027abf8: jb     0x14027ac13
0x0027abfa: add    rdx,0x27
0x0027abfe: mov    rcx,QWORD PTR [rcx-0x8]
0x0027ac02: sub    rax,rcx
0x0027ac05: add    rax,0xfffffffffffffff8
0x0027ac09: cmp    rax,0x1f
0x0027ac0d: ja     0x14027adc3
0x0027ac13: call   0x1415345f0
0x0027ac18: mov    r8d,0x1
0x0027ac1e: lea    rdx,[rip+0x136b8a7]        # 0x1415e64cc ; literal="/"
0x0027ac25: lea    rcx,[rbp-0x30]
0x0027ac29: call   0x14006f9a0
0x0027ac2e: mov    rax,QWORD PTR [rbx+0x50]
0x0027ac32: mov    rcx,QWORD PTR [rsi+rax*1]
0x0027ac36: mov    eax,DWORD PTR [rcx+0x2c]
0x0027ac39: and    eax,0x1
0x0027ac3c: lea    r8,[rax*4+0x8]
0x0027ac44: lea    rdx,[rip+0x139c325]        # 0x141616f70 ; literal="not consumed"
0x0027ac4b: lea    rax,[rip+0x139c32e]        # 0x141616f80 ; literal="consumed"
0x0027ac52: cmove  rdx,rax
0x0027ac56: lea    rcx,[rbp-0x30]
0x0027ac5a: call   0x14006f9a0
0x0027ac5f: mov    r8d,0x1
0x0027ac65: lea    rdx,[rip+0x137d9f8]        # 0x1415f8664 ; literal="]"
0x0027ac6c: lea    rcx,[rbp-0x30]
0x0027ac70: call   0x14006f9a0
0x0027ac75: mov    rax,QWORD PTR [rbx+0x58]
0x0027ac79: sub    rax,QWORD PTR [rbx+0x50]
0x0027ac7d: sar    rax,0x3
0x0027ac81: dec    eax
0x0027ac83: cmp    edi,eax
0x0027ac85: je     0x14027ac9e
0x0027ac87: mov    r8d,0x2
0x0027ac8d: lea    rdx,[rip+0x1369430]        # 0x1415e40c4 ; literal=", "
0x0027ac94: lea    rcx,[rbp-0x30]
0x0027ac98: call   0x14006f9a0
0x0027ac9d: nop
0x0027ac9e: mov    rdx,QWORD PTR [rbp-0x38]
0x0027aca2: cmp    rdx,0xf
0x0027aca6: jbe    0x14027acd9
0x0027aca8: inc    rdx
0x0027acab: mov    rcx,QWORD PTR [rbp-0x50]
0x0027acaf: mov    rax,rcx
0x0027acb2: cmp    rdx,0x1000
0x0027acb9: jb     0x14027acd4
0x0027acbb: add    rdx,0x27
0x0027acbf: mov    rcx,QWORD PTR [rcx-0x8]
0x0027acc3: sub    rax,rcx
0x0027acc6: add    rax,0xfffffffffffffff8
0x0027acca: cmp    rax,0x1f
0x0027acce: ja     0x14027adca
0x0027acd4: call   0x1415345f0
0x0027acd9: inc    edi
0x0027acdb: add    rsi,0x8
0x0027acdf: mov    rdx,QWORD PTR [rbx+0x50]
0x0027ace3: mov    rcx,QWORD PTR [rbx+0x58]
0x0027ace7: sub    rcx,rdx
0x0027acea: sar    rcx,0x3
0x0027acee: movsxd rax,edi
0x0027acf1: cmp    rax,rcx
0x0027acf4: jb     0x14027ab30
0x0027acfa: mov    rsi,QWORD PTR [rsp+0x50]
0x0027acff: mov    r8,QWORD PTR [rbp-0x20]
0x0027ad03: sub    r12d,DWORD PTR [rsp+0x44]
0x0027ad08: mov    eax,DWORD PTR [rsp+0x4c]
0x0027ad0c: add    eax,0xfffffff6
0x0027ad0f: add    eax,r12d
0x0027ad12: movsxd rcx,eax
0x0027ad15: cmp    r8,rcx
0x0027ad18: jbe    0x14027ad54
0x0027ad1a: mov    rdx,QWORD PTR [rbp-0x68]
0x0027ad1e: sub    rdx,r14
0x0027ad21: add    rdx,0xfffffffffffffff6
0x0027ad25: add    rdx,r13
0x0027ad28: cmp    rdx,r8
0x0027ad2b: ja     0x14027ad45
0x0027ad2d: mov    QWORD PTR [rbp-0x20],rdx
0x0027ad31: lea    rax,[rbp-0x30]
0x0027ad35: cmp    QWORD PTR [rbp-0x18],0xf
0x0027ad3a: cmova  rax,QWORD PTR [rbp-0x30]
0x0027ad3f: mov    BYTE PTR [rax+rdx*1],0x0
0x0027ad43: jmp    0x14027ad54
0x0027ad45: sub    rdx,r8
0x0027ad48: xor    r8d,r8d
0x0027ad4b: lea    rcx,[rbp-0x30]
0x0027ad4f: call   0x1400e1240
0x0027ad54: xor    r9d,r9d
0x0027ad57: lea    rdx,[rbp-0x30]
0x0027ad5b: lea    rcx,[rip+0x23c957e]        # 0x1426442e0
0x0027ad62: call   0x140ad69a0
0x0027ad67: nop
0x0027ad68: lea    rcx,[rbp-0x30]
0x0027ad6c: call   0x14006f7e0
0x0027ad71: mov    edi,DWORD PTR [rsp+0x48]
0x0027ad75: add    edi,0x3
0x0027ad78: mov    DWORD PTR [rsp+0x48],edi
0x0027ad7c: lea    rcx,[rbp-0x10]
0x0027ad80: call   0x14006f7e0
0x0027ad85: mov    edx,DWORD PTR [rsp+0x68]
0x0027ad89: inc    edx
0x0027ad8b: mov    DWORD PTR [rsp+0x68],edx
0x0027ad8f: mov    r8,QWORD PTR [rsp+0x58]
0x0027ad94: inc    r8
0x0027ad97: mov    QWORD PTR [rsp+0x58],r8
0x0027ad9c: mov    ebx,DWORD PTR [rbp-0x70]
0x0027ad9f: mov    eax,DWORD PTR [rsp+0x70]
0x0027ada3: add    eax,ebx
0x0027ada5: cmp    edx,eax
0x0027ada7: jge    0x14027add1
0x0027ada9: mov    r12d,DWORD PTR [rsp+0x4c]
0x0027adae: mov    r14d,DWORD PTR [rsp+0x44]
0x0027adb3: mov    rax,QWORD PTR [rbp-0x58]
0x0027adb7: jmp    0x14027a270
0x0027adbc: call   QWORD PTR [rip+0x1365cde]        # 0x1415e0aa0
0x0027adc2: nop
0x0027adc3: call   QWORD PTR [rip+0x1365cd7]        # 0x1415e0aa0
0x0027adc9: nop
0x0027adca: call   QWORD PTR [rip+0x1365cd0]        # 0x1415e0aa0
0x0027add0: nop
0x0027add1: mov    r13d,DWORD PTR [rsp+0x6c]
0x0027add6: mov    r15d,DWORD PTR [rsp+0x60]
0x0027addb: cmp    r13d,ebx
0x0027adde: jle    0x14027ae45
0x0027ade0: mov    QWORD PTR [rbp-0x38],0x0
0x0027ade8: mov    eax,DWORD PTR [rsi+0x24]
0x0027adeb: mov    DWORD PTR [rbp-0x50],eax
0x0027adee: mov    DWORD PTR [rbp-0x4c],0x0
0x0027adf5: lea    eax,[r13-0x1]
0x0027adf9: mov    DWORD PTR [rbp-0x48],eax
0x0027adfc: lea    eax,[r15+0x1]
0x0027ae00: mov    DWORD PTR [rbp-0x40],eax
0x0027ae03: lea    ecx,[rbx-0x1]
0x0027ae06: lea    ecx,[r15+rcx*2]
0x0027ae0a: add    ecx,ebx
0x0027ae0c: mov    DWORD PTR [rbp-0x3c],ecx
0x0027ae0f: mov    DWORD PTR [rbp-0x44],ebx
0x0027ae12: lea    rcx,[rbp-0x50]
0x0027ae16: call   0x1400bb340
0x0027ae1b: mov    r9d,DWORD PTR [rsp+0x4c]
0x0027ae20: inc    r9d
0x0027ae23: mov    DWORD PTR [rsp+0x28],0x0
0x0027ae2b: movzx  eax,BYTE PTR [rsi+0x20]
0x0027ae2f: mov    BYTE PTR [rsp+0x20],al
0x0027ae33: mov    r8d,DWORD PTR [rsp+0x74]
0x0027ae38: mov    edx,DWORD PTR [rsp+0x78]
0x0027ae3c: lea    rcx,[rbp-0x50]
0x0027ae40: call   0x14140a440
0x0027ae45: mov    rcx,QWORD PTR [rbp+0x50]
0x0027ae49: xor    rcx,rsp
0x0027ae4c: call   0x1415345d0
0x0027ae51: add    rsp,0x168
0x0027ae58: pop    r15
0x0027ae5a: pop    r14
0x0027ae5c: pop    r13
0x0027ae5e: pop    r12
0x0027ae60: pop    rdi
0x0027ae61: pop    rsi
0x0027ae62: pop    rbx
0x0027ae63: pop    rbp
0x0027ae64: ret
0x0027ae65: call   0x140065820
0x0027ae6a: int3
