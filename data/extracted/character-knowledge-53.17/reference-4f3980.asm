; reference PE:6aea05a1:02734000; dance-movement-description; RVA 0x4f3980..0x4f47a4; code ends 0x4f4664
0x004f3980: mov    QWORD PTR [rsp+0x18],rbx
0x004f3985: push   rbp
0x004f3986: push   rsi
0x004f3987: push   rdi
0x004f3988: push   r12
0x004f398a: push   r13
0x004f398c: push   r14
0x004f398e: push   r15
0x004f3990: sub    rsp,0xa0
0x004f3997: mov    rax,QWORD PTR [rip+0x13ca6a2]        # 0x1418be040
0x004f399e: xor    rax,rsp
0x004f39a1: mov    QWORD PTR [rsp+0x90],rax
0x004f39a9: mov    ebx,r9d
0x004f39ac: mov    edi,r8d
0x004f39af: mov    r14,rdx
0x004f39b2: mov    rsi,rcx
0x004f39b5: mov    eax,DWORD PTR [rdx+0x80]
0x004f39bb: test   al,0x1
0x004f39bd: je     0x1404f39fc
0x004f39bf: mov    r8d,0xb
0x004f39c5: lea    rdx,[rip+0x1171844]        # 0x141665210 ; literal="called the "
0x004f39cc: call   0x140071040
0x004f39d1: mov    rdx,r14
0x004f39d4: cmp    QWORD PTR [r14+0x18],0xf
0x004f39d9: jbe    0x1404f39de
0x004f39db: mov    rdx,QWORD PTR [r14]
0x004f39de: mov    r8,QWORD PTR [r14+0x10]
0x004f39e2: mov    rcx,rsi
0x004f39e5: call   0x140071040
0x004f39ea: mov    r8d,0x3
0x004f39f0: lea    rdx,[rip+0x1125ba1]        # 0x141619598 ; literal=".  "
0x004f39f7: jmp    0x1404f3aa1
0x004f39fc: test   al,0x4
0x004f39fe: je     0x1404f3a51
0x004f3a00: mov    r8d,0x4
0x004f3a06: lea    rdx,[rip+0x111522f]        # 0x141608c3c ; literal="The "
0x004f3a0d: call   0x140071040
0x004f3a12: mov    rdx,r14
0x004f3a15: cmp    QWORD PTR [r14+0x18],0xf
0x004f3a1a: jbe    0x1404f3a1f
0x004f3a1c: mov    rdx,QWORD PTR [r14]
0x004f3a1f: mov    r8,QWORD PTR [r14+0x10]
0x004f3a23: mov    rcx,rsi
0x004f3a26: call   0x140071040
0x004f3a2b: mov    eax,0x29
0x004f3a30: mov    r8d,0x1e
0x004f3a36: cmp    ebx,0x1
0x004f3a39: cmovg  r8d,eax
0x004f3a3d: lea    rax,[rip+0x11717fc]        # 0x141665240 ; literal=" is one of the fundamental dance moves.  "
0x004f3a44: lea    rdx,[rip+0x11717d5]        # 0x141665220 ; literal=" the fundamental dance move.  "
0x004f3a4b: cmovg  rdx,rax
0x004f3a4f: jmp    0x1404f3aa1
0x004f3a51: test   al,0x2
0x004f3a53: je     0x1404f3aa9
0x004f3a55: mov    r8d,0x4
0x004f3a5b: lea    rdx,[rip+0x11151da]        # 0x141608c3c ; literal="The "
0x004f3a62: call   0x140071040
0x004f3a67: mov    rdx,r14
0x004f3a6a: cmp    QWORD PTR [r14+0x18],0xf
0x004f3a6f: jbe    0x1404f3a74
0x004f3a71: mov    rdx,QWORD PTR [r14]
0x004f3a74: mov    r8,QWORD PTR [r14+0x10]
0x004f3a78: mov    rcx,rsi
0x004f3a7b: call   0x140071040
0x004f3a80: cmp    edi,0x1
0x004f3a83: jg     0x1404f3a94
0x004f3a85: mov    r8d,0x22
0x004f3a8b: lea    rdx,[rip+0x11717de]        # 0x141665270 ; literal=" the fundamental dance position.  "
0x004f3a92: jmp    0x1404f3aa1
0x004f3a94: mov    r8d,0x2d
0x004f3a9a: lea    rdx,[rip+0x11717f7]        # 0x141665298 ; literal=" is one of the fundamental dance positions.  "
0x004f3aa1: mov    rcx,rsi
0x004f3aa4: call   0x140071040
0x004f3aa9: mov    r8d,0x1
0x004f3aaf: xor    r9d,r9d
0x004f3ab2: mov    DWORD PTR [rsp+0x68],r9d
0x004f3ab7: mov    edx,r9d
0x004f3aba: mov    rax,QWORD PTR [r14+0x68]
0x004f3abe: mov    rcx,QWORD PTR [r14+0x70]
0x004f3ac2: mov    r13d,r8d
0x004f3ac5: cmp    rax,rcx
0x004f3ac8: jae    0x1404f3ae2
0x004f3aca: test   BYTE PTR [rax],0x2
0x004f3acd: je     0x1404f3ada
0x004f3acf: mov    DWORD PTR [rsp+r13*4+0x68],edx
0x004f3ad4: inc    r8d
0x004f3ad7: inc    r13
0x004f3ada: add    rax,0x4
0x004f3ade: inc    edx
0x004f3ae0: jmp    0x1404f3ac5
0x004f3ae2: mov    DWORD PTR [rsp+0x24],r8d
0x004f3ae7: movsxd rax,r8d
0x004f3aea: mov    DWORD PTR [rsp+rax*4+0x68],edx
0x004f3aee: mov    ecx,r9d
0x004f3af1: mov    DWORD PTR [rsp+0x20],ecx
0x004f3af5: test   r13,r13
0x004f3af8: jle    0x1404f4639
0x004f3afe: mov    rbx,r9
0x004f3b01: lea    r9,[rip+0x116ed8c]        # 0x141662894 ; literal="there"
0x004f3b08: mov    ebp,DWORD PTR [rsp+0x28]
0x004f3b0c: nop    DWORD PTR [rax+0x0]
0x004f3b10: cmp    r13,0x2
0x004f3b14: jl     0x1404f3b63
0x004f3b16: test   rbx,rbx
0x004f3b19: jne    0x1404f3b2a
0x004f3b1b: mov    r8d,0x7
0x004f3b21: lea    rdx,[rip+0x11717a0]        # 0x1416652c8 ; literal="First, "
0x004f3b28: jmp    0x1404f3b54
0x004f3b2a: cmp    r13,0x2
0x004f3b2e: je     0x1404f3b47
0x004f3b30: lea    eax,[r8-0x1]
0x004f3b34: cmp    ecx,eax
0x004f3b36: jl     0x1404f3b47
0x004f3b38: mov    r8d,0x9
0x004f3b3e: lea    rdx,[rip+0x1171793]        # 0x1416652d8 ; literal="Finally, "
0x004f3b45: jmp    0x1404f3b54
0x004f3b47: mov    r8d,0x5
0x004f3b4d: lea    rdx,[rip+0x117177c]        # 0x1416652d0 ; literal="Then "
0x004f3b54: mov    rcx,rsi
0x004f3b57: call   0x140071040
0x004f3b5c: lea    r9,[rip+0x116ed31]        # 0x141662894 ; literal="there"
0x004f3b63: movsxd rdx,DWORD PTR [rsp+rbx*4+0x68]
0x004f3b68: mov    DWORD PTR [rsp+0x2c],edx
0x004f3b6c: lea    rax,[rbx+0x1]
0x004f3b70: mov    rbx,rax
0x004f3b73: mov    QWORD PTR [rsp+0x40],rax
0x004f3b78: mov    ecx,DWORD PTR [rsp+rax*4+0x68]
0x004f3b7c: dec    ecx
0x004f3b7e: mov    DWORD PTR [rsp+0x28],ecx
0x004f3b82: mov    r12d,edx
0x004f3b85: mov    r15,rdx
0x004f3b88: mov    rax,rdx
0x004f3b8b: mov    QWORD PTR [rsp+0x38],rdx
0x004f3b90: movsxd rdi,ecx
0x004f3b93: mov    QWORD PTR [rsp+0x30],rdi
0x004f3b98: cmp    rdx,rdi
0x004f3b9b: jg     0x1404f4605
0x004f3ba1: xor    bl,bl
0x004f3ba3: cmp    r15,rax
0x004f3ba6: jne    0x1404f3bf3
0x004f3ba8: lea    rdx,[rip+0x1171735]        # 0x1416652e4 ; literal="There"
0x004f3baf: cmp    r13,0x1
0x004f3bb3: cmovne rdx,r9
0x004f3bb7: mov    r8d,0x5
0x004f3bbd: mov    rcx,rsi
0x004f3bc0: call   0x140071040
0x004f3bc5: mov    rcx,rsi
0x004f3bc8: test   BYTE PTR [r14+0x80],0x2
0x004f3bd0: je     0x1404f3be1
0x004f3bd2: mov    r8d,0xa
0x004f3bd8: lea    rdx,[rip+0x1171711]        # 0x1416652f0 ; literal=" should be"
0x004f3bdf: jmp    0x1404f3bee
0x004f3be1: mov    r8d,0x3
0x004f3be7: lea    rdx,[rip+0x111625e]        # 0x141609e4c ; literal=" is"
0x004f3bee: call   0x140071040
0x004f3bf3: mov    rax,QWORD PTR [r14+0x20]
0x004f3bf7: movsxd rcx,DWORD PTR [rax+r15*4]
0x004f3bfb: cmp    ecx,0x21
0x004f3bfe: ja     0x1404f3c10
0x004f3c00: movabs rax,0x30400001f
0x004f3c0a: bt     rax,rcx
0x004f3c0e: jb     0x1404f3c27
0x004f3c10: mov    r8d,0x2
0x004f3c16: lea    rdx,[rip+0x11716df]        # 0x1416652fc ; literal=" a"
0x004f3c1d: mov    rcx,rsi
0x004f3c20: call   0x140071040
0x004f3c25: mov    bl,0x1
0x004f3c27: mov    rcx,QWORD PTR [r14+0x20]
0x004f3c2b: mov    edx,DWORD PTR [rcx+r15*4]
0x004f3c2f: test   edx,edx
0x004f3c31: je     0x1404f3c47
0x004f3c33: sub    edx,0x1
0x004f3c36: je     0x1404f3c47
0x004f3c38: sub    edx,0x1
0x004f3c3b: je     0x1404f3c47
0x004f3c3d: sub    edx,0x1
0x004f3c40: je     0x1404f3c47
0x004f3c42: cmp    edx,0x1
0x004f3c45: jne    0x1404f3cb7
0x004f3c47: mov    r8d,0xd
0x004f3c4d: lea    rdx,[rip+0x11716ac]        # 0x141665300 ; literal=" a series of "
0x004f3c54: mov    rcx,rsi
0x004f3c57: call   0x140071040
0x004f3c5c: xorps  xmm0,xmm0
0x004f3c5f: movups XMMWORD PTR [rsp+0x48],xmm0
0x004f3c64: mov    QWORD PTR [rsp+0x58],0x0
0x004f3c6d: mov    QWORD PTR [rsp+0x60],0xf
0x004f3c76: mov    BYTE PTR [rsp+0x48],0x0
0x004f3c7b: mov    rcx,QWORD PTR [r14+0x50]
0x004f3c7f: lea    rdx,[rsp+0x48]
0x004f3c84: mov    ecx,DWORD PTR [rcx+r15*4]
0x004f3c88: call   0x140547840
0x004f3c8d: lea    rdx,[rsp+0x48]
0x004f3c92: cmp    QWORD PTR [rsp+0x60],0xf
0x004f3c98: cmova  rdx,QWORD PTR [rsp+0x48]
0x004f3c9e: mov    r8,QWORD PTR [rsp+0x58]
0x004f3ca3: mov    rcx,rsi
0x004f3ca6: call   0x140071040
0x004f3cab: xor    bl,bl
0x004f3cad: lea    rcx,[rsp+0x48]
0x004f3cb2: call   0x140070e80
0x004f3cb7: mov    rax,QWORD PTR [r14+0x38]
0x004f3cbb: movsxd rcx,DWORD PTR [rax+r15*4]
0x004f3cbf: lea    rdi,[rip+0xffffffffffb0c33a]        # 0x140000000
0x004f3cc6: cmp    ecx,0x2d
0x004f3cc9: ja     0x1404f409d
0x004f3ccf: mov    ecx,DWORD PTR [rdi+rcx*4+0x4f4664]
0x004f3cd6: add    rcx,rdi
0x004f3cd9: jmp    rcx
0x004f3cdb: mov    r8d,0x9
0x004f3ce1: lea    rdx,[rip+0x1171628]        # 0x141665310 ; literal=" graceful"
0x004f3ce8: jmp    0x1404f4095
0x004f3ced: mov    r8d,0x7
0x004f3cf3: lea    rdx,[rip+0x1171626]        # 0x141665320 ; literal=" serene"
0x004f3cfa: jmp    0x1404f4095
0x004f3cff: mov    r8d,0x5
0x004f3d05: lea    rdx,[rip+0x117161c]        # 0x141665328 ; literal=" calm"
0x004f3d0c: jmp    0x1404f4095
0x004f3d11: mov    r8d,0xa
0x004f3d17: lea    rdx,[rip+0x1171612]        # 0x141665330 ; literal=" grotesque"
0x004f3d1e: jmp    0x1404f4095
0x004f3d23: mov    r8d,0x6
0x004f3d29: lea    rdx,[rip+0x117160c]        # 0x14166533c ; literal=" crude"
0x004f3d30: jmp    0x1404f4095
0x004f3d35: lea    rdx,[rip+0x117160c]        # 0x141665348 ; literal=" refined"
0x004f3d3c: jmp    0x1404f408f
0x004f3d41: test   bl,bl
0x004f3d43: je     0x1404f3d5a
0x004f3d45: mov    r8d,0x1
0x004f3d4b: lea    rdx,[rip+0x1171602]        # 0x141665354 ; literal="n"
0x004f3d52: mov    rcx,rsi
0x004f3d55: call   0x140071040
0x004f3d5a: mov    r8d,0xc
0x004f3d60: lea    rdx,[rip+0x11715f1]        # 0x141665358 ; literal=" understated"
0x004f3d67: jmp    0x1404f4095
0x004f3d6c: mov    r8d,0x9
0x004f3d72: lea    rdx,[rip+0x11715ef]        # 0x141665368 ; literal=" delicate"
0x004f3d79: jmp    0x1404f4095
0x004f3d7e: test   bl,bl
0x004f3d80: je     0x1404f3d97
0x004f3d82: mov    r8d,0x1
0x004f3d88: lea    rdx,[rip+0x11715c5]        # 0x141665354 ; literal="n"
0x004f3d8f: mov    rcx,rsi
0x004f3d92: call   0x140071040
0x004f3d97: mov    r8d,0xa
0x004f3d9d: lea    rdx,[rip+0x11715d4]        # 0x141665378 ; literal=" elaborate"
0x004f3da4: jmp    0x1404f4095
0x004f3da9: test   bl,bl
0x004f3dab: je     0x1404f3dc2
0x004f3dad: mov    r8d,0x1
0x004f3db3: lea    rdx,[rip+0x117159a]        # 0x141665354 ; literal="n"
0x004f3dba: mov    rcx,rsi
0x004f3dbd: call   0x140071040
0x004f3dc2: mov    r8d,0xb
0x004f3dc8: lea    rdx,[rip+0x11715b9]        # 0x141665388 ; literal=" expressive"
0x004f3dcf: jmp    0x1404f4095
0x004f3dd4: mov    r8d,0x7
0x004f3dda: lea    rdx,[rip+0x11715b7]        # 0x141665398 ; literal=" strong"
0x004f3de1: jmp    0x1404f4095
0x004f3de6: mov    r8d,0x6
0x004f3dec: lea    rdx,[rip+0x117124d]        # 0x141665040 ; literal=" large"
0x004f3df3: jmp    0x1404f4095
0x004f3df8: mov    r8d,0xb
0x004f3dfe: lea    rdx,[rip+0x1171243]        # 0x141665048 ; literal=" weightless"
0x004f3e05: jmp    0x1404f4095
0x004f3e0a: mov    r8d,0x6
0x004f3e10: lea    rdx,[rip+0x117123d]        # 0x141665054 ; literal=" fluid"
0x004f3e17: jmp    0x1404f4095
0x004f3e1c: test   bl,bl
0x004f3e1e: je     0x1404f3e35
0x004f3e20: mov    r8d,0x1
0x004f3e26: lea    rdx,[rip+0x1171527]        # 0x141665354 ; literal="n"
0x004f3e2d: mov    rcx,rsi
0x004f3e30: call   0x140071040
0x004f3e35: mov    r8d,0xb
0x004f3e3b: lea    rdx,[rip+0x117121e]        # 0x141665060 ; literal=" undulating"
0x004f3e42: jmp    0x1404f4095
0x004f3e47: mov    r8d,0x5
0x004f3e4d: lea    rdx,[rip+0x1171218]        # 0x14166506c ; literal=" soft"
0x004f3e54: jmp    0x1404f4095
0x004f3e59: lea    rdx,[rip+0x1171218]        # 0x141665078 ; literal=" jerking"
0x004f3e60: jmp    0x1404f408f
0x004f3e65: mov    r8d,0xc
0x004f3e6b: lea    rdx,[rip+0x1171216]        # 0x141665088 ; literal=" sharp-edged"
0x004f3e72: jmp    0x1404f4095
0x004f3e77: mov    r8d,0xf
0x004f3e7d: lea    rdx,[rip+0x1171214]        # 0x141665098 ; literal=" straight-lined"
0x004f3e84: jmp    0x1404f4095
0x004f3e89: mov    r8d,0x5
0x004f3e8f: lea    rdx,[rip+0x1171212]        # 0x1416650a8 ; literal=" high"
0x004f3e96: jmp    0x1404f4095
0x004f3e9b: mov    r8d,0x4
0x004f3ea1: lea    rdx,[rip+0x1171208]        # 0x1416650b0 ; literal=" low"
0x004f3ea8: jmp    0x1404f4095
0x004f3ead: mov    r8d,0x12
0x004f3eb3: lea    rdx,[rip+0x11711fe]        # 0x1416650b8 ; literal=" loudly percussive"
0x004f3eba: jmp    0x1404f4095
0x004f3ebf: mov    r8d,0x12
0x004f3ec5: lea    rdx,[rip+0x1171204]        # 0x1416650d0 ; literal=" softly percussive"
0x004f3ecc: jmp    0x1404f4095
0x004f3ed1: test   bl,bl
0x004f3ed3: je     0x1404f3eea
0x004f3ed5: mov    r8d,0x1
0x004f3edb: lea    rdx,[rip+0x1171472]        # 0x141665354 ; literal="n"
0x004f3ee2: mov    rcx,rsi
0x004f3ee5: call   0x140071040
0x004f3eea: lea    rdx,[rip+0x11711f7]        # 0x1416650e8 ; literal=" aborted"
0x004f3ef1: jmp    0x1404f408f
0x004f3ef6: mov    r8d,0x13
0x004f3efc: lea    rdx,[rip+0x11711f5]        # 0x1416650f8 ; literal=" partially realized"
0x004f3f03: jmp    0x1404f4095
0x004f3f08: test   bl,bl
0x004f3f0a: je     0x1404f3f21
0x004f3f0c: mov    r8d,0x1
0x004f3f12: lea    rdx,[rip+0x117143b]        # 0x141665354 ; literal="n"
0x004f3f19: mov    rcx,rsi
0x004f3f1c: call   0x140071040
0x004f3f21: mov    r8d,0xa
0x004f3f27: lea    rdx,[rip+0x11711e2]        # 0x141665110 ; literal=" energetic"
0x004f3f2e: jmp    0x1404f4095
0x004f3f33: mov    r8d,0xb
0x004f3f39: lea    rdx,[rip+0x11711e0]        # 0x141665120 ; literal=" passionate"
0x004f3f40: jmp    0x1404f4095
0x004f3f45: mov    r8d,0xa
0x004f3f4b: lea    rdx,[rip+0x11711de]        # 0x141665130 ; literal=" vivacious"
0x004f3f52: jmp    0x1404f4095
0x004f3f57: mov    r8d,0x7
0x004f3f5d: lea    rdx,[rip+0x11711dc]        # 0x141665140 ; literal=" joyous"
0x004f3f64: jmp    0x1404f4095
0x004f3f69: mov    r8d,0x6
0x004f3f6f: lea    rdx,[rip+0x11711d2]        # 0x141665148 ; literal=" proud"
0x004f3f76: jmp    0x1404f4095
0x004f3f7b: mov    r8d,0xb
0x004f3f81: lea    rdx,[rip+0x11711c8]        # 0x141665150 ; literal=" flamboyant"
0x004f3f88: jmp    0x1404f4095
0x004f3f8d: mov    r8d,0x7
0x004f3f93: lea    rdx,[rip+0x11711c6]        # 0x141665160 ; literal=" lively"
0x004f3f9a: jmp    0x1404f4095
0x004f3f9f: mov    r8d,0x9
0x004f3fa5: lea    rdx,[rip+0x11711bc]        # 0x141665168 ; literal=" spirited"
0x004f3fac: jmp    0x1404f4095
0x004f3fb1: mov    r8d,0x9
0x004f3fb7: lea    rdx,[rip+0x11711ba]        # 0x141665178 ; literal=" vigorous"
0x004f3fbe: jmp    0x1404f4095
0x004f3fc3: test   bl,bl
0x004f3fc5: je     0x1404f3fdc
0x004f3fc7: mov    r8d,0x1
0x004f3fcd: lea    rdx,[rip+0x1171380]        # 0x141665354 ; literal="n"
0x004f3fd4: mov    rcx,rsi
0x004f3fd7: call   0x140071040
0x004f3fdc: lea    rdx,[rip+0x11711a5]        # 0x141665188 ; literal=" intense"
0x004f3fe3: jmp    0x1404f408f
0x004f3fe8: test   bl,bl
0x004f3fea: je     0x1404f4001
0x004f3fec: mov    r8d,0x1
0x004f3ff2: lea    rdx,[rip+0x117135b]        # 0x141665354 ; literal="n"
0x004f3ff9: mov    rcx,rsi
0x004f3ffc: call   0x140071040
0x004f4001: mov    r8d,0xb
0x004f4007: lea    rdx,[rip+0x117118a]        # 0x141665198 ; literal=" aggressive"
0x004f400e: jmp    0x1404f4095
0x004f4013: mov    r8d,0x9
0x004f4019: lea    rdx,[rip+0x1171188]        # 0x1416651a8 ; literal=" powerful"
0x004f4020: jmp    0x1404f4095
0x004f4022: mov    r8d,0x9
0x004f4028: lea    rdx,[rip+0x1171189]        # 0x1416651b8 ; literal=" sluggish"
0x004f402f: jmp    0x1404f4095
0x004f4031: lea    rdx,[rip+0x1171190]        # 0x1416651c8 ; literal=" relaxed"
0x004f4038: jmp    0x1404f408f
0x004f403a: lea    rdx,[rip+0x1171197]        # 0x1416651d8 ; literal=" passive"
0x004f4041: jmp    0x1404f408f
0x004f4043: mov    r8d,0x7
0x004f4049: lea    rdx,[rip+0x1171198]        # 0x1416651e8 ; literal=" subtle"
0x004f4050: jmp    0x1404f4095
0x004f4052: lea    rdx,[rip+0x1171197]        # 0x1416651f0 ; literal=" sensual"
0x004f4059: jmp    0x1404f408f
0x004f405b: mov    r8d,0xa
0x004f4061: lea    rdx,[rip+0x1171198]        # 0x141665200 ; literal=" debauched"
0x004f4068: jmp    0x1404f4095
0x004f406a: mov    r8d,0x9
0x004f4070: lea    rdx,[rip+0x1171529]        # 0x1416655a0 ; literal=" twisting"
0x004f4077: jmp    0x1404f4095
0x004f4079: mov    r8d,0xa
0x004f407f: lea    rdx,[rip+0x117152a]        # 0x1416655b0 ; literal=" sprightly"
0x004f4086: jmp    0x1404f4095
0x004f4088: lea    rdx,[rip+0x1171531]        # 0x1416655c0 ; literal=" sinuous"
0x004f408f: mov    r8d,0x8
0x004f4095: mov    rcx,rsi
0x004f4098: call   0x140071040
0x004f409d: mov    rax,QWORD PTR [r14+0x38]
0x004f40a1: movzx  r8d,bl
0x004f40a5: cmp    DWORD PTR [rax+r15*4],0xffffffff
0x004f40aa: mov    ebx,0x0
0x004f40af: cmovne r8d,ebx
0x004f40b3: mov    rcx,QWORD PTR [r14+0x20]
0x004f40b7: mov    edx,DWORD PTR [rcx+r15*4]
0x004f40bb: sub    edx,0x6
0x004f40be: je     0x1404f40f4
0x004f40c0: sub    edx,0x7
0x004f40c3: je     0x1404f40d3
0x004f40c5: sub    edx,0x1
0x004f40c8: je     0x1404f40d3
0x004f40ca: cmp    edx,0x1
0x004f40cd: jne    0x1404f41d0
0x004f40d3: mov    rax,QWORD PTR [r14+0x50]
0x004f40d7: cmp    DWORD PTR [rax+r15*4],0x2
0x004f40dc: jne    0x1404f41d0
0x004f40e2: mov    r8d,0x9
0x004f40e8: lea    rdx,[rip+0x1171529]        # 0x141665618 ; literal=" repeated"
0x004f40ef: jmp    0x1404f41c8
0x004f40f4: mov    rax,QWORD PTR [r14+0x50]
0x004f40f8: cmp    DWORD PTR [rax+r15*4],ebx
0x004f40fc: jge    0x1404f4116
0x004f40fe: mov    r8d,0x11
0x004f4104: lea    rdx,[rip+0x11714c5]        # 0x1416655d0 ; literal=" counterclockwise"
0x004f410b: mov    rcx,rsi
0x004f410e: call   0x140071040
0x004f4113: xor    r8b,r8b
0x004f4116: mov    rax,QWORD PTR [r14+0x50]
0x004f411a: cmp    DWORD PTR [rax+r15*4],ebx
0x004f411e: jle    0x1404f4138
0x004f4120: mov    r8d,0xa
0x004f4126: lea    rdx,[rip+0x11714bb]        # 0x1416655e8 ; literal=" clockwise"
0x004f412d: mov    rcx,rsi
0x004f4130: call   0x140071040
0x004f4135: xor    r8b,r8b
0x004f4138: mov    rax,QWORD PTR [r14+0x50]
0x004f413c: mov    ecx,DWORD PTR [rax+r15*4]
0x004f4140: neg    ecx
0x004f4142: cmovs  ecx,DWORD PTR [rax+r15*4]
0x004f4147: cmp    ecx,0x2d
0x004f414a: jne    0x1404f4166
0x004f414c: test   r8b,r8b
0x004f414f: je     0x1404f4166
0x004f4151: mov    r8d,0x1
0x004f4157: lea    rdx,[rip+0x11711f6]        # 0x141665354 ; literal="n"
0x004f415e: mov    rcx,rsi
0x004f4161: call   0x140071040
0x004f4166: mov    r8d,0x7
0x004f416c: lea    rdx,[rip+0x1171485]        # 0x1416655f8 ; literal=" eighth"
0x004f4173: mov    rcx,rsi
0x004f4176: call   0x140071040
0x004f417b: mov    rax,QWORD PTR [r14+0x50]
0x004f417f: mov    ecx,DWORD PTR [rax+r15*4]
0x004f4183: neg    ecx
0x004f4185: cmovs  ecx,DWORD PTR [rax+r15*4]
0x004f418a: cmp    ecx,0x5a
0x004f418d: jne    0x1404f41a4
0x004f418f: mov    r8d,0x8
0x004f4195: lea    rdx,[rip+0x1171464]        # 0x141665600 ; literal=" quarter"
0x004f419c: mov    rcx,rsi
0x004f419f: call   0x140071040
0x004f41a4: mov    rax,QWORD PTR [r14+0x50]
0x004f41a8: mov    ecx,DWORD PTR [rax+r15*4]
0x004f41ac: neg    ecx
0x004f41ae: cmovs  ecx,DWORD PTR [rax+r15*4]
0x004f41b3: cmp    ecx,0xb4
0x004f41b9: jne    0x1404f41d0
0x004f41bb: mov    r8d,0x5
0x004f41c1: lea    rdx,[rip+0x1171444]        # 0x14166560c ; literal=" half"
0x004f41c8: mov    rcx,rsi
0x004f41cb: call   0x140071040
0x004f41d0: mov    rax,QWORD PTR [r14+0x20]
0x004f41d4: movsxd rcx,DWORD PTR [rax+r15*4]
0x004f41d8: cmp    ecx,0x21
0x004f41db: ja     0x1404f443c
0x004f41e1: mov    ecx,DWORD PTR [rdi+rcx*4+0x4f471c]
0x004f41e8: add    rcx,rdi
0x004f41eb: jmp    rcx
0x004f41ed: mov    r8d,0x1a
0x004f41f3: lea    rdx,[rip+0x117142e]        # 0x141665628 ; literal=" steps in a square pattern"
0x004f41fa: jmp    0x1404f4434
0x004f41ff: mov    r8d,0x1c
0x004f4205: lea    rdx,[rip+0x117143c]        # 0x141665648 ; literal=" steps in a circular pattern"
0x004f420c: jmp    0x1404f4434
0x004f4211: mov    r8d,0x1c
0x004f4217: lea    rdx,[rip+0x117144a]        # 0x141665668 ; literal=" steps in a triangle pattern"
0x004f421e: jmp    0x1404f4434
0x004f4223: mov    r8d,0x20
0x004f4229: lea    rdx,[rip+0x1171458]        # 0x141665688 ; literal=" steps in a figure-eight pattern"
0x004f4230: jmp    0x1404f4434
0x004f4235: mov    r8d,0x1e
0x004f423b: lea    rdx,[rip+0x117146e]        # 0x1416656b0 ; literal=" steps in an intricate pattern"
0x004f4242: jmp    0x1404f4434
0x004f4247: mov    r8d,0x5
0x004f424d: lea    rdx,[rip+0x117147c]        # 0x1416656d0 ; literal=" move"
0x004f4254: jmp    0x1404f4434
0x004f4259: mov    r8d,0x5
0x004f425f: lea    rdx,[rip+0x1171472]        # 0x1416656d8 ; literal=" turn"
0x004f4266: jmp    0x1404f4434
0x004f426b: mov    r8d,0x12
0x004f4271: lea    rdx,[rip+0x1171468]        # 0x1416656e0 ; literal=" facial expression"
0x004f4278: jmp    0x1404f4434
0x004f427d: mov    r8d,0xd
0x004f4283: lea    rdx,[rip+0x117146e]        # 0x1416656f8 ; literal=" hand gesture"
0x004f428a: jmp    0x1404f4434
0x004f428f: mov    r8d,0xe
0x004f4295: lea    rdx,[rip+0x117146c]        # 0x141665708 ; literal=" straight walk"
0x004f429c: jmp    0x1404f4434
0x004f42a1: mov    r8d,0xc
0x004f42a7: lea    rdx,[rip+0x117146a]        # 0x141665718 ; literal=" curved walk"
0x004f42ae: jmp    0x1404f4434
0x004f42b3: mov    r8d,0x4
0x004f42b9: lea    rdx,[rip+0x1171468]        # 0x141665728 ; literal=" run"
0x004f42c0: jmp    0x1404f4434
0x004f42c5: mov    r8d,0x5
0x004f42cb: lea    rdx,[rip+0x117145e]        # 0x141665730 ; literal=" leap"
0x004f42d2: jmp    0x1404f4434
0x004f42d7: mov    r8d,0x5
0x004f42dd: lea    rdx,[rip+0x1171454]        # 0x141665738 ; literal=" kick"
0x004f42e4: jmp    0x1404f4434
0x004f42e9: mov    r8d,0xa
0x004f42ef: lea    rdx,[rip+0x117144a]        # 0x141665740 ; literal=" left kick"
0x004f42f6: jmp    0x1404f4434
0x004f42fb: mov    r8d,0xb
0x004f4301: lea    rdx,[rip+0x1171448]        # 0x141665750 ; literal=" right kick"
0x004f4308: jmp    0x1404f4434
0x004f430d: mov    r8d,0x9
0x004f4313: lea    rdx,[rip+0x1171446]        # 0x141665760 ; literal=" leg lift"
0x004f431a: jmp    0x1404f4434
0x004f431f: mov    r8d,0xe
0x004f4325: lea    rdx,[rip+0x1171444]        # 0x141665770 ; literal=" left leg lift"
0x004f432c: jmp    0x1404f4434
0x004f4331: mov    r8d,0xf
0x004f4337: lea    rdx,[rip+0x1171442]        # 0x141665780 ; literal=" right leg lift"
0x004f433e: jmp    0x1404f4434
0x004f4343: mov    r8d,0xb
0x004f4349: lea    rdx,[rip+0x1171440]        # 0x141665790 ; literal=" body level"
0x004f4350: jmp    0x1404f4434
0x004f4355: mov    r8d,0x12
0x004f435b: lea    rdx,[rip+0x117143e]        # 0x1416657a0 ; literal=" body level change"
0x004f4362: jmp    0x1404f4434
0x004f4367: mov    r8d,0xd
0x004f436d: lea    rdx,[rip+0x1171444]        # 0x1416657b8 ; literal=" arm carriage"
0x004f4374: jmp    0x1404f4434
0x004f4379: mov    r8d,0x10
0x004f437f: lea    rdx,[rip+0x1171442]        # 0x1416657c8 ; literal=" raised left arm"
0x004f4386: jmp    0x1404f4434
0x004f438b: mov    r8d,0x11
0x004f4391: lea    rdx,[rip+0x1171008]        # 0x1416653a0 ; literal=" raised right arm"
0x004f4398: jmp    0x1404f4434
0x004f439d: mov    r8d,0xb
0x004f43a3: lea    rdx,[rip+0x117100e]        # 0x1416653b8 ; literal=" raised arm"
0x004f43aa: jmp    0x1404f4434
0x004f43af: mov    r8d,0x5
0x004f43b5: lea    rdx,[rip+0x1171008]        # 0x1416653c4 ; literal=" spin"
0x004f43bc: jmp    0x1404f4434
0x004f43be: mov    r8d,0x1a
0x004f43c4: lea    rdx,[rip+0x1171005]        # 0x1416653d0 ; literal=" independent body movement"
0x004f43cb: jmp    0x1404f4434
0x004f43cd: mov    r8d,0x5
0x004f43d3: lea    rdx,[rip+0x1171012]        # 0x1416653ec ; literal=" sway"
0x004f43da: jmp    0x1404f4434
0x004f43dc: mov    r8d,0xd
0x004f43e2: lea    rdx,[rip+0x117100f]        # 0x1416653f8 ; literal=" forward bend"
0x004f43e9: jmp    0x1404f4434
0x004f43eb: mov    r8d,0xe
0x004f43f1: lea    rdx,[rip+0x1171010]        # 0x141665408 ; literal=" backward bend"
0x004f43f8: jmp    0x1404f4434
0x004f43fa: mov    r8d,0xe
0x004f4400: lea    rdx,[rip+0x1171011]        # 0x141665418 ; literal=" leftward bend"
0x004f4407: jmp    0x1404f4434
0x004f4409: mov    r8d,0xf
0x004f440f: lea    rdx,[rip+0x1171012]        # 0x141665428 ; literal=" rightward bend"
0x004f4416: jmp    0x1404f4434
0x004f4418: mov    r8d,0x9
0x004f441e: lea    rdx,[rip+0x1171013]        # 0x141665438 ; literal=" footwork"
0x004f4425: jmp    0x1404f4434
0x004f4427: mov    r8d,0x21
0x004f442d: lea    rdx,[rip+0x1171014]        # 0x141665448 ; literal=" movement along the line of dance"
0x004f4434: mov    rcx,rsi
0x004f4437: call   0x140071040
0x004f443c: mov    rax,QWORD PTR [r14+0x68]
0x004f4440: mov    edx,DWORD PTR [rax+r15*4]
0x004f4444: mov    ecx,edx
0x004f4446: shr    ecx,0x2
0x004f4449: and    ecx,0x1
0x004f444c: test   dl,0x8
0x004f444f: lea    eax,[rcx+0x1]
0x004f4452: cmove  eax,ecx
0x004f4455: test   dl,0x10
0x004f4458: lea    ecx,[rax+0x1]
0x004f445b: cmove  ecx,eax
0x004f445e: test   dl,0x20
0x004f4461: lea    edi,[rcx+0x1]
0x004f4464: cmove  edi,ecx
0x004f4467: test   edi,edi
0x004f4469: je     0x1404f454d
0x004f446f: nop
0x004f4470: mov    eax,ebx
0x004f4472: test   ebx,ebx
0x004f4474: je     0x1404f449a
0x004f4476: sub    eax,0x1
0x004f4479: je     0x1404f4493
0x004f447b: sub    eax,0x1
0x004f447e: je     0x1404f448c
0x004f4480: cmp    eax,0x1
0x004f4483: jne    0x1404f449f
0x004f4485: mov    ebp,0x20
0x004f448a: jmp    0x1404f449f
0x004f448c: mov    ebp,0x10
0x004f4491: jmp    0x1404f449f
0x004f4493: mov    ebp,0x8
0x004f4498: jmp    0x1404f449f
0x004f449a: mov    ebp,0x4
0x004f449f: mov    rax,QWORD PTR [r14+0x68]
0x004f44a3: test   DWORD PTR [rax+r15*4],ebp
0x004f44a7: je     0x1404f452d
0x004f44ad: dec    edi
0x004f44af: cmp    ebp,0x4
0x004f44b2: je     0x1404f44ea
0x004f44b4: cmp    ebp,0x8
0x004f44b7: je     0x1404f44db
0x004f44b9: cmp    ebp,0x10
0x004f44bc: je     0x1404f44cc
0x004f44be: cmp    ebp,0x20
0x004f44c1: jne    0x1404f44ff
0x004f44c3: lea    rdx,[rip+0x1170ff6]        # 0x1416654c0 ; literal=" shadowed"
0x004f44ca: jmp    0x1404f44f1
0x004f44cc: mov    r8d,0x18
0x004f44d2: lea    rdx,[rip+0x1170fc7]        # 0x1416654a0 ; literal=" performed in succession"
0x004f44d9: jmp    0x1404f44f7
0x004f44db: mov    r8d,0x18
0x004f44e1: lea    rdx,[rip+0x1170f98]        # 0x141665480 ; literal=" performed in retrograde"
0x004f44e8: jmp    0x1404f44f7
0x004f44ea: lea    rdx,[rip+0x1170f7f]        # 0x141665470 ; literal=" mirrored"
0x004f44f1: mov    r8d,0x9
0x004f44f7: mov    rcx,rsi
0x004f44fa: call   0x140071040
0x004f44ff: cmp    edi,0x2
0x004f4502: jl     0x1404f4513
0x004f4504: mov    r8d,0x1
0x004f450a: lea    rdx,[rip+0x1124e53]        # 0x141619364 ; literal=","
0x004f4511: jmp    0x1404f4525
0x004f4513: cmp    edi,0x1
0x004f4516: jne    0x1404f452d
0x004f4518: mov    r8d,0x4
0x004f451e: lea    rdx,[rip+0x11155c7]        # 0x141609aec ; literal=" and"
0x004f4525: mov    rcx,rsi
0x004f4528: call   0x140071040
0x004f452d: inc    ebx
0x004f452f: cmp    ebx,0x4
0x004f4532: jl     0x1404f4470
0x004f4538: mov    r8d,0x11
0x004f453e: lea    rdx,[rip+0x1170f8b]        # 0x1416654d0 ; literal=" by group members"
0x004f4545: mov    rcx,rsi
0x004f4548: call   0x140071040
0x004f454d: mov    rax,QWORD PTR [r14+0x68]
0x004f4551: mov    ecx,DWORD PTR [rax+r15*4]
0x004f4555: test   cl,0x40
0x004f4558: je     0x1404f4569
0x004f455a: mov    r8d,0xe
0x004f4560: lea    rdx,[rip+0x1170f81]        # 0x1416654e8 ; literal=" from the lead"
0x004f4567: jmp    0x1404f457a
0x004f4569: test   cl,cl
0x004f456b: jns    0x1404f4582
0x004f456d: mov    r8d,0x12
0x004f4573: lea    rdx,[rip+0x1170f7e]        # 0x1416654f8 ; literal=" from the follower"
0x004f457a: mov    rcx,rsi
0x004f457d: call   0x140071040
0x004f4582: mov    rdi,QWORD PTR [rsp+0x30]
0x004f4587: cmp    r15,QWORD PTR [rsp+0x38]
0x004f458c: jne    0x1404f45a2
0x004f458e: cmp    r15,rdi
0x004f4591: je     0x1404f45a2
0x004f4593: mov    r8d,0x5
0x004f4599: lea    rdx,[rip+0x1170f6c]        # 0x14166550c ; literal=" with"
0x004f45a0: jmp    0x1404f45dd
0x004f45a2: mov    eax,DWORD PTR [rsp+0x2c]
0x004f45a6: inc    eax
0x004f45a8: cmp    r12d,eax
0x004f45ab: jl     0x1404f45e5
0x004f45ad: mov    ecx,DWORD PTR [rsp+0x28]
0x004f45b1: lea    eax,[rcx-0x2]
0x004f45b4: cmp    r12d,eax
0x004f45b7: jg     0x1404f45c8
0x004f45b9: mov    r8d,0x1
0x004f45bf: lea    rdx,[rip+0x1124d9e]        # 0x141619364 ; literal=","
0x004f45c6: jmp    0x1404f45dd
0x004f45c8: lea    eax,[rcx-0x1]
0x004f45cb: cmp    r12d,eax
0x004f45ce: jne    0x1404f45e5
0x004f45d0: mov    r8d,0x4
0x004f45d6: lea    rdx,[rip+0x111550f]        # 0x141609aec ; literal=" and"
0x004f45dd: mov    rcx,rsi
0x004f45e0: call   0x140071040
0x004f45e5: inc    r12d
0x004f45e8: inc    r15
0x004f45eb: cmp    r15,rdi
0x004f45ee: mov    rax,QWORD PTR [rsp+0x38]
0x004f45f3: lea    r9,[rip+0x116e29a]        # 0x141662894 ; literal="there"
0x004f45fa: jle    0x1404f3ba1
0x004f4600: mov    rbx,QWORD PTR [rsp+0x40]
0x004f4605: mov    r8d,0x3
0x004f460b: lea    rdx,[rip+0x1124f86]        # 0x141619598 ; literal=".  "
0x004f4612: mov    rcx,rsi
0x004f4615: call   0x140071040
0x004f461a: mov    ecx,DWORD PTR [rsp+0x20]
0x004f461e: inc    ecx
0x004f4620: mov    DWORD PTR [rsp+0x20],ecx
0x004f4624: cmp    rbx,r13
0x004f4627: mov    r8d,DWORD PTR [rsp+0x24]
0x004f462c: lea    r9,[rip+0x116e261]        # 0x141662894 ; literal="there"
0x004f4633: jl     0x1404f3b10
0x004f4639: mov    rcx,QWORD PTR [rsp+0x90]
0x004f4641: xor    rcx,rsp
0x004f4644: call   0x1415530b0
0x004f4649: mov    rbx,QWORD PTR [rsp+0xf0]
0x004f4651: add    rsp,0xa0
0x004f4658: pop    r15
0x004f465a: pop    r14
0x004f465c: pop    r13
0x004f465e: pop    r12
0x004f4660: pop    rdi
0x004f4661: pop    rsi
0x004f4662: pop    rbp
0x004f4663: ret
