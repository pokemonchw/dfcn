; reference PE:6aea05a1:02734000; knowledge-dance-form; RVA 0x4f47b0..0x4f8a98; code ends 0x4f8564
0x004f47b0: mov    QWORD PTR [rsp+0x18],rbx
0x004f47b5: push   rbp
0x004f47b6: push   rsi
0x004f47b7: push   rdi
0x004f47b8: push   r12
0x004f47ba: push   r13
0x004f47bc: push   r14
0x004f47be: push   r15
0x004f47c0: lea    rbp,[rsp-0x150]
0x004f47c8: sub    rsp,0x250
0x004f47cf: mov    rax,QWORD PTR [rip+0x13c986a]        # 0x1418be040
0x004f47d6: xor    rax,rsp
0x004f47d9: mov    QWORD PTR [rbp+0x140],rax
0x004f47e0: mov    r13,rdx
0x004f47e3: mov    QWORD PTR [rbp+0xc0],rdx
0x004f47ea: mov    r12,rcx
0x004f47ed: mov    QWORD PTR [rsp+0x50],rcx
0x004f47f2: lea    rcx,[rbp+0x120]
0x004f47f9: call   0x140070cc0
0x004f47fe: nop
0x004f47ff: lea    rcx,[r12+0x8]
0x004f4804: xor    r9d,r9d
0x004f4807: mov    r8b,0x1
0x004f480a: lea    rdx,[rbp+0x120]
0x004f4811: call   0x140aae180
0x004f4816: lea    rdx,[rbp+0x120]
0x004f481d: mov    rcx,r13
0x004f4820: call   0x1400bb340
0x004f4825: lea    rdx,[rip+0x1170ce8]        # 0x141665514 ; literal=" is a "
0x004f482c: mov    rcx,r13
0x004f482f: call   0x140070b90
0x004f4834: movsxd rax,DWORD PTR [r12+0x88]
0x004f483c: lea    r15,[rip+0xffffffffffb0b7bd]        # 0x140000000
0x004f4843: cmp    eax,0x5
0x004f4846: ja     0x1404f496a
0x004f484c: mov    ecx,DWORD PTR [r15+rax*4+0x4f8564]
0x004f4854: add    rcx,r15
0x004f4857: jmp    rcx
0x004f4859: lea    rdx,[rip+0x1170cbc]        # 0x14166551c ; literal="sacred"
0x004f4860: mov    rcx,r13
0x004f4863: call   0x140070b90
0x004f4868: mov    eax,DWORD PTR [r12+0x98]
0x004f4870: test   eax,eax
0x004f4872: je     0x1404f4889
0x004f4874: cmp    eax,0x2
0x004f4877: jne    0x1404f496a
0x004f487d: lea    rdx,[rip+0x1170ca8]        # 0x14166552c ; literal=" group"
0x004f4884: jmp    0x1404f4962
0x004f4889: lea    rdx,[rip+0x1170c94]        # 0x141665524 ; literal=" solo"
0x004f4890: jmp    0x1404f4962
0x004f4895: mov    eax,DWORD PTR [r12+0x98]
0x004f489d: test   eax,eax
0x004f489f: je     0x1404f48c1
0x004f48a1: cmp    eax,0x2
0x004f48a4: jne    0x1404f48d0
0x004f48a6: lea    rdx,[rip+0x1170c8f]        # 0x14166553c ; literal="group "
0x004f48ad: mov    rcx,r13
0x004f48b0: call   0x140070b90
0x004f48b5: lea    rdx,[rip+0x1170c8c]        # 0x141665548 ; literal="celebration"
0x004f48bc: jmp    0x1404f4962
0x004f48c1: lea    rdx,[rip+0x1170c6c]        # 0x141665534 ; literal="solo "
0x004f48c8: mov    rcx,r13
0x004f48cb: call   0x140070b90
0x004f48d0: lea    rdx,[rip+0x1170c71]        # 0x141665548 ; literal="celebration"
0x004f48d7: jmp    0x1404f4962
0x004f48dc: lea    rdx,[rip+0x1170c75]        # 0x141665558 ; literal="participation"
0x004f48e3: jmp    0x1404f4962
0x004f48e5: lea    rdx,[rip+0x1170c7c]        # 0x141665568 ; literal="social"
0x004f48ec: mov    rcx,r13
0x004f48ef: call   0x140070b90
0x004f48f4: mov    ecx,DWORD PTR [r12+0x98]
0x004f48fc: sub    ecx,0x1
0x004f48ff: je     0x1404f4952
0x004f4901: cmp    ecx,0x1
0x004f4904: jne    0x1404f496a
0x004f4906: lea    rdx,[rip+0x1170c1f]        # 0x14166552c ; literal=" group"
0x004f490d: jmp    0x1404f4962
0x004f490f: mov    eax,DWORD PTR [r12+0x98]
0x004f4917: test   eax,eax
0x004f4919: je     0x1404f4929
0x004f491b: cmp    eax,0x2
0x004f491e: jne    0x1404f4938
0x004f4920: lea    rdx,[rip+0x1170c15]        # 0x14166553c ; literal="group "
0x004f4927: jmp    0x1404f4930
0x004f4929: lea    rdx,[rip+0x1170c04]        # 0x141665534 ; literal="solo "
0x004f4930: mov    rcx,r13
0x004f4933: call   0x140070b90
0x004f4938: lea    rdx,[rip+0x11148d1]        # 0x141609210 ; literal="performance"
0x004f493f: mov    rcx,r13
0x004f4942: call   0x140070b90
0x004f4947: cmp    DWORD PTR [r12+0x98],0x1
0x004f4950: jne    0x1404f496a
0x004f4952: lea    rdx,[rip+0x1170c17]        # 0x141665570 ; literal=" partner"
0x004f4959: jmp    0x1404f4962
0x004f495b: lea    rdx,[rip+0x1170c1a]        # 0x14166557c ; literal="war"
0x004f4962: mov    rcx,r13
0x004f4965: call   0x140070b90
0x004f496a: lea    rdx,[rip+0x110fffb]        # 0x14160496c ; literal=" dance"
0x004f4971: mov    rcx,r13
0x004f4974: call   0x140070b90
0x004f4979: cmp    DWORD PTR [r12+0x98],0x1
0x004f4982: jne    0x1404f499b
0x004f4984: cmp    DWORD PTR [r12+0xa0],0x1
0x004f498d: jne    0x1404f499b
0x004f498f: lea    rdx,[rip+0x1170bea]        # 0x141665580 ; literal=" for a single pair"
0x004f4996: jmp    0x1404f4a64
0x004f499b: cmp    DWORD PTR [r12+0xa0],0x2
0x004f49a4: jl     0x1404f4a6c
0x004f49aa: lea    rdx,[rip+0x114fac3]        # 0x141644474 ; literal=" for "
0x004f49b1: mov    rcx,r13
0x004f49b4: call   0x140070b90
0x004f49b9: lea    rcx,[rbp+0xa0]
0x004f49c0: call   0x140070cc0
0x004f49c5: nop
0x004f49c6: lea    rdx,[rbp+0xa0]
0x004f49cd: mov    ecx,DWORD PTR [r12+0x9c]
0x004f49d5: call   0x140547840
0x004f49da: lea    rdx,[rbp+0xa0]
0x004f49e1: mov    rcx,r13
0x004f49e4: call   0x1400bb340
0x004f49e9: nop
0x004f49ea: lea    rcx,[rbp+0xa0]
0x004f49f1: call   0x140070e80
0x004f49f6: lea    rdx,[rip+0x1113e37]        # 0x141608834 ; literal=" to "
0x004f49fd: mov    rcx,r13
0x004f4a00: call   0x140070b90
0x004f4a05: lea    rcx,[rbp+0xa0]
0x004f4a0c: call   0x140070cc0
0x004f4a11: nop
0x004f4a12: lea    rdx,[rbp+0xa0]
0x004f4a19: mov    ecx,DWORD PTR [r12+0xa0]
0x004f4a21: call   0x140547840
0x004f4a26: lea    rdx,[rbp+0xa0]
0x004f4a2d: mov    rcx,r13
0x004f4a30: call   0x1400bb340
0x004f4a35: nop
0x004f4a36: lea    rcx,[rbp+0xa0]
0x004f4a3d: call   0x140070e80
0x004f4a42: mov    ecx,DWORD PTR [r12+0x98]
0x004f4a4a: sub    ecx,0x1
0x004f4a4d: je     0x1404f4a5d
0x004f4a4f: cmp    ecx,0x1
0x004f4a52: jne    0x1404f4a6c
0x004f4a54: lea    rdx,[rip+0x11710c5]        # 0x141665b20 ; literal=" dancers"
0x004f4a5b: jmp    0x1404f4a64
0x004f4a5d: lea    rdx,[rip+0x1170b30]        # 0x141665594 ; literal=" pairs"
0x004f4a64: mov    rcx,r13
0x004f4a67: call   0x140070b90
0x004f4a6c: mov    edx,DWORD PTR [r12+0x8c]
0x004f4a74: xor    r14d,r14d
0x004f4a77: cmp    edx,0xffffffff
0x004f4a7a: je     0x1404f4ac8
0x004f4a7c: lea    rcx,[rip+0x1eff1f5]        # 0x1423f3c78
0x004f4a83: call   0x14007f120
0x004f4a88: mov    ecx,r14d
0x004f4a8b: test   rax,rax
0x004f4a8e: je     0x1404f4a97
0x004f4a90: cmp    WORD PTR [rax],0x8
0x004f4a94: sete   cl
0x004f4a97: lea    rax,[rip+0x11710ba]        # 0x141665b58 ; literal=" originating in "
0x004f4a9e: lea    rdx,[rip+0x117108b]        # 0x141665b30 ; literal=" which grew out of the performances of "
0x004f4aa5: test   ecx,ecx
0x004f4aa7: cmove  rdx,rax
0x004f4aab: mov    rcx,r13
0x004f4aae: call   0x140070b90
0x004f4ab3: xor    r9d,r9d
0x004f4ab6: mov    r8d,DWORD PTR [r12+0x8c]
0x004f4abe: mov    rdx,r13
0x004f4ac1: call   0x140baa5c0
0x004f4ac6: jmp    0x1404f4b13
0x004f4ac8: cmp    DWORD PTR [r12+0x90],0xffffffff
0x004f4ad1: je     0x1404f4b13
0x004f4ad3: lea    rcx,[rbp-0x30]
0x004f4ad7: call   0x1400736b0
0x004f4adc: lea    rdx,[rip+0x117108d]        # 0x141665b70 ; literal=" originally devised by "
0x004f4ae3: mov    rcx,r13
0x004f4ae6: call   0x140070b90
0x004f4aeb: mov    WORD PTR [rsp+0x28],r14w
0x004f4af1: mov    WORD PTR [rsp+0x20],0x1
0x004f4af8: lea    r9,[rbp-0x30]
0x004f4afc: mov    r8d,DWORD PTR [r12+0x90]
0x004f4b04: mov    rdx,r13
0x004f4b07: lea    rcx,[rip+0x202762a]        # 0x14251c138
0x004f4b0e: call   0x140baabd0
0x004f4b13: lea    rdx,[rip+0x1124a7e]        # 0x141619598 ; literal=".  "
0x004f4b1a: mov    rcx,r13
0x004f4b1d: call   0x140070b90
0x004f4b22: test   BYTE PTR [r12+0x94],0x1
0x004f4b2b: lea    rax,[rip+0x11710ce]        # 0x141665c00 ; literal="The form guides dancers during improvised performances.  "
0x004f4b32: lea    rdx,[rip+0x1171057]        # 0x141665b90 ; literal="The rules of the form are applied by choreographers to produce individual dances which can be performed.  "
0x004f4b39: cmove  rdx,rax
0x004f4b3d: mov    rcx,r13
0x004f4b40: call   0x140070b90
0x004f4b45: mov    rsi,r14
0x004f4b48: mov    QWORD PTR [rbp-0x60],r14
0x004f4b4c: mov    edx,DWORD PTR [r12+0x84]
0x004f4b54: lea    rdi,[rip+0x1171125]        # 0x141665c80 ; literal=" as the dancers act out "
0x004f4b5b: cmp    edx,0xffffffff
0x004f4b5e: je     0x1404f4c70
0x004f4b64: lea    rcx,[rip+0x20155cd]        # 0x14250a138
0x004f4b6b: call   0x140073ba0
0x004f4b70: mov    rbx,rax
0x004f4b73: test   rax,rax
0x004f4b76: je     0x1404f4dd2
0x004f4b7c: cmp    DWORD PTR [rax+0x68],0xc
0x004f4b80: jne    0x1404f4dd2
0x004f4b86: mov    edx,DWORD PTR [rax+0x6c]
0x004f4b89: lea    rcx,[rip+0x20157e8]        # 0x14250a378
0x004f4b90: call   0x140073ba0
0x004f4b95: mov    rsi,rax
0x004f4b98: mov    QWORD PTR [rbp-0x60],rax
0x004f4b9c: test   rax,rax
0x004f4b9f: je     0x1404f4dd2
0x004f4ba5: lea    rdx,[rip+0x1171094]        # 0x141665c40 ; literal="The dance is accompanied by "
0x004f4bac: mov    rcx,r13
0x004f4baf: call   0x140070b90
0x004f4bb4: lea    rdx,[rbx+0x8]
0x004f4bb8: mov    rcx,r13
0x004f4bbb: call   0x1400bb340
0x004f4bc0: test   BYTE PTR [r12+0xd8],0x1
0x004f4bc9: je     0x1404f4dd2
0x004f4bcf: lea    rdx,[rip+0x117108a]        # 0x141665c60 ; literal=" as the dancer acts out "
0x004f4bd6: cmp    DWORD PTR [r12+0x98],r14d
0x004f4bde: cmovne rdx,rdi
0x004f4be2: mov    rcx,r13
0x004f4be5: call   0x140070b90
0x004f4bea: mov    edx,DWORD PTR [rsi+0xf8]
0x004f4bf0: cmp    edx,0xffffffff
0x004f4bf3: jne    0x1404f4d39
0x004f4bf9: mov    edx,DWORD PTR [rsi+0xf4]
0x004f4bff: cmp    edx,0xffffffff
0x004f4c02: je     0x1404f4dd2
0x004f4c08: lea    rcx,[rip+0x2015739]        # 0x14250a348
0x004f4c0f: call   0x140073ba0
0x004f4c14: mov    rbx,rax
0x004f4c17: test   rax,rax
0x004f4c1a: je     0x1404f4dd2
0x004f4c20: test   BYTE PTR [rax+0x8c],0x2
0x004f4c27: je     0x1404f4c38
0x004f4c29: lea    rdx,[rip+0x1171070]        # 0x141665ca0 ; literal="a composition of "
0x004f4c30: mov    rcx,r13
0x004f4c33: call   0x140070b90
0x004f4c38: lea    rcx,[rbp+0xa0]
0x004f4c3f: call   0x140070cc0
0x004f4c44: nop
0x004f4c45: lea    rcx,[rbx+0x8]
0x004f4c49: xor    r9d,r9d
0x004f4c4c: mov    r8b,0x1
0x004f4c4f: lea    rdx,[rbp+0xa0]
0x004f4c56: call   0x140aae180
0x004f4c5b: lea    rdx,[rbp+0xa0]
0x004f4c62: mov    rcx,r13
0x004f4c65: call   0x1400bb340
0x004f4c6a: nop
0x004f4c6b: jmp    0x1404f4dc6
0x004f4c70: mov    edx,DWORD PTR [r12+0x80]
0x004f4c78: cmp    edx,0xffffffff
0x004f4c7b: je     0x1404f4dd2
0x004f4c81: lea    rcx,[rip+0x20156f0]        # 0x14250a378
0x004f4c88: call   0x140073ba0
0x004f4c8d: mov    rsi,rax
0x004f4c90: mov    QWORD PTR [rbp-0x60],rax
0x004f4c94: test   rax,rax
0x004f4c97: je     0x1404f4dd2
0x004f4c9d: lea    rdx,[rip+0x1170f9c]        # 0x141665c40 ; literal="The dance is accompanied by "
0x004f4ca4: mov    rcx,r13
0x004f4ca7: call   0x140070b90
0x004f4cac: test   BYTE PTR [rsi+0x120],0x1
0x004f4cb3: je     0x1404f4cc4
0x004f4cb5: lea    rdx,[rip+0x1170fe4]        # 0x141665ca0 ; literal="a composition of "
0x004f4cbc: mov    rcx,r13
0x004f4cbf: call   0x140070b90
0x004f4cc4: lea    rcx,[rbp+0xa0]
0x004f4ccb: call   0x140070cc0
0x004f4cd0: nop
0x004f4cd1: lea    rcx,[rsi+0x8]
0x004f4cd5: xor    r9d,r9d
0x004f4cd8: mov    r8b,0x1
0x004f4cdb: lea    rdx,[rbp+0xa0]
0x004f4ce2: call   0x140aae180
0x004f4ce7: lea    rdx,[rbp+0xa0]
0x004f4cee: mov    rcx,r13
0x004f4cf1: call   0x1400bb340
0x004f4cf6: nop
0x004f4cf7: lea    rcx,[rbp+0xa0]
0x004f4cfe: call   0x140070e80
0x004f4d03: test   BYTE PTR [r12+0xd8],0x1
0x004f4d0c: je     0x1404f4dd2
0x004f4d12: lea    rdx,[rip+0x1170f47]        # 0x141665c60 ; literal=" as the dancer acts out "
0x004f4d19: cmp    DWORD PTR [r12+0x98],0x0
0x004f4d22: cmovne rdx,rdi
0x004f4d26: mov    rcx,r13
0x004f4d29: call   0x140070b90
0x004f4d2e: mov    edx,DWORD PTR [rsi+0xf8]
0x004f4d34: cmp    edx,0xffffffff
0x004f4d37: je     0x1404f4d5c
0x004f4d39: lea    rcx,[rip+0x20153f8]        # 0x14250a138
0x004f4d40: call   0x140073ba0
0x004f4d45: test   rax,rax
0x004f4d48: je     0x1404f4dd2
0x004f4d4e: lea    rdx,[rax+0x8]
0x004f4d52: mov    rcx,r13
0x004f4d55: call   0x1400bb340
0x004f4d5a: jmp    0x1404f4dd2
0x004f4d5c: mov    edx,DWORD PTR [rsi+0xf4]
0x004f4d62: cmp    edx,0xffffffff
0x004f4d65: je     0x1404f4dd2
0x004f4d67: lea    rcx,[rip+0x20155da]        # 0x14250a348
0x004f4d6e: call   0x140073ba0
0x004f4d73: mov    rbx,rax
0x004f4d76: test   rax,rax
0x004f4d79: je     0x1404f4dd2
0x004f4d7b: test   BYTE PTR [rax+0x8c],0x2
0x004f4d82: je     0x1404f4d93
0x004f4d84: lea    rdx,[rip+0x1170f15]        # 0x141665ca0 ; literal="a composition of "
0x004f4d8b: mov    rcx,r13
0x004f4d8e: call   0x140070b90
0x004f4d93: lea    rcx,[rbp+0xa0]
0x004f4d9a: call   0x140070cc0
0x004f4d9f: nop
0x004f4da0: lea    rcx,[rbx+0x8]
0x004f4da4: xor    r9d,r9d
0x004f4da7: mov    r8b,0x1
0x004f4daa: lea    rdx,[rbp+0xa0]
0x004f4db1: call   0x140aae180
0x004f4db6: lea    rdx,[rbp+0xa0]
0x004f4dbd: mov    rcx,r13
0x004f4dc0: call   0x1400bb340
0x004f4dc5: nop
0x004f4dc6: lea    rcx,[rbp+0xa0]
0x004f4dcd: call   0x140070e80
0x004f4dd2: cmp    DWORD PTR [r12+0xdc],0xffffffff
0x004f4ddb: jne    0x1404f4de8
0x004f4ddd: cmp    DWORD PTR [r12+0xe0],0xffffffff
0x004f4de6: je     0x1404f4e05
0x004f4de8: mov    rcx,r13
0x004f4deb: cmp    DWORD PTR [r12+0x98],0x0
0x004f4df4: lea    rdx,[rip+0x1170e65]        # 0x141665c60 ; literal=" as the dancer acts out "
0x004f4dfb: je     0x1404f4e00
0x004f4dfd: mov    rdx,rdi
0x004f4e00: call   0x140070b90
0x004f4e05: mov    edx,DWORD PTR [r12+0xdc]
0x004f4e0d: cmp    edx,0xffffffff
0x004f4e10: je     0x1404f4f56
0x004f4e16: lea    rcx,[rip+0x202731b]        # 0x14251c138
0x004f4e1d: call   0x14007f060
0x004f4e22: mov    rbx,rax
0x004f4e25: test   rax,rax
0x004f4e28: je     0x1404f4e7f
0x004f4e2a: lea    rcx,[rbp+0xa0]
0x004f4e31: call   0x140070cc0
0x004f4e36: nop
0x004f4e37: lea    rcx,[rbp-0x30]
0x004f4e3b: call   0x1400736b0
0x004f4e40: mov    rcx,QWORD PTR [rbx]
0x004f4e43: mov    r10,QWORD PTR [rcx+0xd8]
0x004f4e4a: mov    BYTE PTR [rsp+0x20],0x0
0x004f4e4f: mov    r9b,0x1
0x004f4e52: lea    r8,[rbp-0x30]
0x004f4e56: lea    rdx,[rbp+0xa0]
0x004f4e5d: mov    rcx,rbx
0x004f4e60: call   r10
0x004f4e63: lea    rdx,[rbp+0xa0]
0x004f4e6a: mov    rcx,r13
0x004f4e6d: call   0x1400bb340
0x004f4e72: nop
0x004f4e73: lea    rcx,[rbp+0xa0]
0x004f4e7a: call   0x140070e80
0x004f4e7f: mov    edi,0x1
0x004f4e84: lea    rdx,[rip+0x112470d]        # 0x141619598 ; literal=".  "
0x004f4e8b: mov    rcx,r13
0x004f4e8e: call   0x140070b90
0x004f4e93: xor    dl,dl
0x004f4e95: lea    r8,[rip+0x1170e34]        # 0x141665cd0 ; literal="The dancers perform "
0x004f4e9c: lea    rbx,[rip+0x1170f05]        # 0x141665da8 ; literal="turning counterclockwise"
0x004f4ea3: cmp    DWORD PTR [r12+0xa4],0xffffffff
0x004f4eac: jne    0x1404f4f05
0x004f4eae: cmp    DWORD PTR [r12+0xa8],0xffffffff
0x004f4eb7: jne    0x1404f4f05
0x004f4eb9: test   rsi,rsi
0x004f4ebc: je     0x1404f51cd
0x004f4ec2: mov    ecx,DWORD PTR [rsi+0xe8]
0x004f4ec8: lea    eax,[rcx+0x1]
0x004f4ecb: cmp    eax,0x1
0x004f4ece: jbe    0x1404f4ed8
0x004f4ed0: cmp    ecx,0x4
0x004f4ed3: mov    ecx,r14d
0x004f4ed6: jne    0x1404f4eda
0x004f4ed8: mov    ecx,edi
0x004f4eda: movzx  eax,dl
0x004f4edd: test   ecx,ecx
0x004f4edf: cmovne eax,edi
0x004f4ee2: cmp    DWORD PTR [rsi+0x104],0xffffffff
0x004f4ee9: jne    0x1404f4ef4
0x004f4eeb: cmp    DWORD PTR [rsi+0xe8],0xffffffff
0x004f4ef2: je     0x1404f4efa
0x004f4ef4: test   al,al
0x004f4ef6: mov    eax,edi
0x004f4ef8: je     0x1404f4efd
0x004f4efa: mov    eax,r14d
0x004f4efd: test   eax,eax
0x004f4eff: je     0x1404f51cd
0x004f4f05: lea    rdx,[rip+0x1170dac]        # 0x141665cb8 ; literal="The dancer performs "
0x004f4f0c: cmp    DWORD PTR [r12+0x98],0x0
0x004f4f15: cmovne rdx,r8
0x004f4f19: mov    rcx,r13
0x004f4f1c: call   0x140070b90
0x004f4f21: mov    ecx,DWORD PTR [r12+0xa4]
0x004f4f29: test   ecx,ecx
0x004f4f2b: je     0x1404f4fc8
0x004f4f31: sub    ecx,0x1
0x004f4f34: je     0x1404f4fbf
0x004f4f3a: sub    ecx,0x1
0x004f4f3d: je     0x1404f4fb6
0x004f4f3f: sub    ecx,0x1
0x004f4f42: je     0x1404f4fad
0x004f4f44: cmp    ecx,0x1
0x004f4f47: jne    0x1404f4fd7
0x004f4f4d: lea    rdx,[rip+0x1170dec]        # 0x141665d40 ; literal="loosely mingled"
0x004f4f54: jmp    0x1404f4fcf
0x004f4f56: cmp    DWORD PTR [r12+0xe0],0xffffffff
0x004f4f5f: je     0x1404f4e7f
0x004f4f65: lea    rdx,[rip+0x110f05c]        # 0x141603fc8 ; literal="the story of "
0x004f4f6c: mov    rcx,r13
0x004f4f6f: call   0x140070b90
0x004f4f74: lea    rcx,[rbp-0x30]
0x004f4f78: call   0x1400736b0
0x004f4f7d: mov    WORD PTR [rsp+0x28],r14w
0x004f4f83: mov    edi,0x1
0x004f4f88: mov    WORD PTR [rsp+0x20],di
0x004f4f8d: lea    r9,[rbp-0x30]
0x004f4f91: mov    r8d,DWORD PTR [r12+0xe0]
0x004f4f99: mov    rdx,r13
0x004f4f9c: lea    rcx,[rip+0x2027195]        # 0x14251c138
0x004f4fa3: call   0x140baabd0
0x004f4fa8: jmp    0x1404f4e84
0x004f4fad: lea    rdx,[rip+0x1170d74]        # 0x141665d28 ; literal="in a double circle"
0x004f4fb4: jmp    0x1404f4fcf
0x004f4fb6: lea    rdx,[rip+0x1170d5b]        # 0x141665d18 ; literal="in a circle"
0x004f4fbd: jmp    0x1404f4fcf
0x004f4fbf: lea    rdx,[rip+0x1170d3a]        # 0x141665d00 ; literal="in several lines"
0x004f4fc6: jmp    0x1404f4fcf
0x004f4fc8: lea    rdx,[rip+0x1170d19]        # 0x141665ce8 ; literal="in a single line"
0x004f4fcf: mov    rcx,r13
0x004f4fd2: call   0x140070b90
0x004f4fd7: cmp    DWORD PTR [r12+0xa8],0xffffffff
0x004f4fe0: je     0x1404f5060
0x004f4fe2: cmp    DWORD PTR [r12+0xa4],0xffffffff
0x004f4feb: je     0x1404f4ffc
0x004f4fed: lea    rdx,[rip+0x110e9fc]        # 0x1416039f0 ; literal=" "
0x004f4ff4: mov    rcx,r13
0x004f4ff7: call   0x140070b90
0x004f4ffc: mov    ecx,DWORD PTR [r12+0xa8]
0x004f5004: test   ecx,ecx
0x004f5006: je     0x1404f503f
0x004f5008: sub    ecx,0x1
0x004f500b: je     0x1404f5029
0x004f500d: sub    ecx,0x1
0x004f5010: je     0x1404f5020
0x004f5012: cmp    ecx,0x1
0x004f5015: jne    0x1404f5060
0x004f5017: lea    rdx,[rip+0x1170dca]        # 0x141665de8 ; literal="along an intricate path"
0x004f501e: jmp    0x1404f5058
0x004f5020: lea    rdx,[rip+0x1170da1]        # 0x141665dc8 ; literal="along an improvised path"
0x004f5027: jmp    0x1404f5058
0x004f5029: lea    rdx,[rip+0x1170d58]        # 0x141665d88 ; literal="along a counterclockwise circle"
0x004f5030: cmp    DWORD PTR [r12+0x98],0x0
0x004f5039: cmovne rdx,rbx
0x004f503d: jmp    0x1404f5058
0x004f503f: cmp    DWORD PTR [r12+0x98],0x0
0x004f5048: lea    rdx,[rip+0x1170d01]        # 0x141665d50 ; literal="along a clockwise circle"
0x004f504f: je     0x1404f5058
0x004f5051: lea    rdx,[rip+0x1170d18]        # 0x141665d70 ; literal="turning clockwise"
0x004f5058: mov    rcx,r13
0x004f505b: call   0x140070b90
0x004f5060: test   rsi,rsi
0x004f5063: je     0x1404f51be
0x004f5069: cmp    DWORD PTR [rsi+0x104],0xffffffff
0x004f5070: jne    0x1404f507e
0x004f5072: cmp    DWORD PTR [rsi+0xe8],0xffffffff
0x004f5079: mov    eax,r14d
0x004f507c: je     0x1404f5080
0x004f507e: mov    eax,edi
0x004f5080: test   eax,eax
0x004f5082: je     0x1404f51be
0x004f5088: cmp    DWORD PTR [r12+0xa4],0xffffffff
0x004f5091: jne    0x1404f509e
0x004f5093: cmp    DWORD PTR [r12+0xa8],0xffffffff
0x004f509c: je     0x1404f50ad
0x004f509e: lea    rdx,[rip+0x1170d5b]        # 0x141665e00 ; literal=", moving "
0x004f50a5: mov    rcx,r13
0x004f50a8: call   0x140070b90
0x004f50ad: mov    eax,DWORD PTR [rsi+0xe8]
0x004f50b3: dec    eax
0x004f50b5: cmp    eax,0x20
0x004f50b8: ja     0x1404f510e
0x004f50ba: cdqe
0x004f50bc: movzx  eax,BYTE PTR [r15+rax*1+0x4f8598]
0x004f50c5: mov    ecx,DWORD PTR [r15+rax*4+0x4f857c]
0x004f50cd: add    rcx,r15
0x004f50d0: jmp    rcx
0x004f50d2: lea    rdx,[rip+0x1170d37]        # 0x141665e10 ; literal="very slowly "
0x004f50d9: jmp    0x1404f5106
0x004f50db: lea    rdx,[rip+0x1170d3e]        # 0x141665e20 ; literal="slowly "
0x004f50e2: jmp    0x1404f5106
0x004f50e4: lea    rdx,[rip+0x1170d3d]        # 0x141665e28 ; literal="slower and slower "
0x004f50eb: jmp    0x1404f5106
0x004f50ed: lea    rdx,[rip+0x1170d4c]        # 0x141665e40 ; literal="faster and faster "
0x004f50f4: jmp    0x1404f5106
0x004f50f6: lea    rdx,[rip+0x1170d5b]        # 0x141665e58 ; literal="quickly "
0x004f50fd: jmp    0x1404f5106
0x004f50ff: lea    rdx,[rip+0x1170d62]        # 0x141665e68 ; literal="very quickly "
0x004f5106: mov    rcx,r13
0x004f5109: call   0x140070b90
0x004f510e: mov    edx,DWORD PTR [rsi+0x104]
0x004f5114: lea    rcx,[rip+0x20152ed]        # 0x14250a408
0x004f511b: call   0x140073ba0
0x004f5120: mov    rbx,rax
0x004f5123: test   rax,rax
0x004f5126: je     0x1404f51af
0x004f512c: movsxd rax,DWORD PTR [rsi+0x108]
0x004f5133: test   eax,eax
0x004f5135: js     0x1404f5177
0x004f5137: mov    rcx,QWORD PTR [rbx+0x28]
0x004f513b: sub    rcx,QWORD PTR [rbx+0x20]
0x004f513f: sar    rcx,0x3
0x004f5143: cmp    rax,rcx
0x004f5146: jae    0x1404f5177
0x004f5148: lea    rdx,[rip+0x1170691]        # 0x1416657e0 ; literal="to the music's "
0x004f514f: mov    rcx,r13
0x004f5152: call   0x140070b90
0x004f5157: movsxd rax,DWORD PTR [rsi+0x108]
0x004f515e: mov    rdx,QWORD PTR [rbx+0x20]
0x004f5162: mov    rdx,QWORD PTR [rdx+rax*8]
0x004f5166: mov    rcx,r13
0x004f5169: call   0x1400bb340
0x004f516e: lea    rdx,[rip+0x117067b]        # 0x1416657f0 ; literal=" rhythm"
0x004f5175: jmp    0x1404f51b6
0x004f5177: movsxd rax,DWORD PTR [rsi+0x10c]
0x004f517e: test   eax,eax
0x004f5180: js     0x1404f51af
0x004f5182: mov    rcx,QWORD PTR [rbx+0x10]
0x004f5186: sub    rcx,QWORD PTR [rbx+0x8]
0x004f518a: sar    rcx,0x3
0x004f518e: cmp    rax,rcx
0x004f5191: jae    0x1404f51af
0x004f5193: lea    rdx,[rip+0x1170646]        # 0x1416657e0 ; literal="to the music's "
0x004f519a: mov    rcx,r13
0x004f519d: call   0x140070b90
0x004f51a2: movsxd rax,DWORD PTR [rsi+0x10c]
0x004f51a9: mov    rdx,QWORD PTR [rbx+0x8]
0x004f51ad: jmp    0x1404f5162
0x004f51af: lea    rdx,[rip+0x1170642]        # 0x1416657f8 ; literal="with the music"
0x004f51b6: mov    rcx,r13
0x004f51b9: call   0x140070b90
0x004f51be: lea    rdx,[rip+0x11243d3]        # 0x141619598 ; literal=".  "
0x004f51c5: mov    rcx,r13
0x004f51c8: call   0x140070b90
0x004f51cd: cmp    DWORD PTR [r12+0xb0],0xffffffff
0x004f51d6: je     0x1404f53a8
0x004f51dc: lea    rdx,[rip+0x1170625]        # 0x141665808 ; literal="The partners "
0x004f51e3: mov    rcx,r13
0x004f51e6: call   0x140070b90
0x004f51eb: mov    ecx,DWORD PTR [r12+0xb0]
0x004f51f3: test   ecx,ecx
0x004f51f5: je     0x1404f5213
0x004f51f7: sub    ecx,0x1
0x004f51fa: je     0x1404f520a
0x004f51fc: cmp    ecx,0x1
0x004f51ff: jne    0x1404f5222
0x004f5201: lea    rdx,[rip+0x1170638]        # 0x141665840 ; literal="rarely make contact"
0x004f5208: jmp    0x1404f521a
0x004f520a: lea    rdx,[rip+0x1170617]        # 0x141665828 ; literal="maintain open contact"
0x004f5211: jmp    0x1404f521a
0x004f5213: lea    rdx,[rip+0x11705fe]        # 0x141665818 ; literal="dance closely"
0x004f521a: mov    rcx,r13
0x004f521d: call   0x140070b90
0x004f5222: lea    rdx,[rip+0x117062f]        # 0x141665858 ; literal=", communicating intent "
0x004f5229: mov    rcx,r13
0x004f522c: call   0x140070b90
0x004f5231: movsxd rax,DWORD PTR [r12+0xb4]
0x004f5239: cmp    eax,0x5
0x004f523c: ja     0x1404f5399
0x004f5242: mov    ecx,DWORD PTR [r15+rax*4+0x4f85bc]
0x004f524a: add    rcx,r15
0x004f524d: jmp    rcx
0x004f524f: lea    rdx,[rip+0x117061a]        # 0x141665870 ; literal="by pushing together"
0x004f5256: mov    rcx,r13
0x004f5259: call   0x140070b90
0x004f525e: cmp    DWORD PTR [r12+0xb8],0x0
0x004f5267: jne    0x1404f5278
0x004f5269: lea    rdx,[rip+0x1170618]        # 0x141665888 ; literal=" constantly"
0x004f5270: mov    rcx,r13
0x004f5273: call   0x140070b90
0x004f5278: cmp    DWORD PTR [r12+0xb8],0x1
0x004f5281: jne    0x1404f5399
0x004f5287: lea    rdx,[rip+0x117060a]        # 0x141665898 ; literal=" briefly"
0x004f528e: jmp    0x1404f5391
0x004f5293: lea    rdx,[rip+0x117060e]        # 0x1416658a8 ; literal="by pulling away"
0x004f529a: jmp    0x1404f5256
0x004f529c: cmp    DWORD PTR [r12+0xb8],0x0
0x004f52a5: jne    0x1404f52b6
0x004f52a7: lea    rdx,[rip+0x117060a]        # 0x1416658b8 ; literal="constantly "
0x004f52ae: mov    rcx,r13
0x004f52b1: call   0x140070b90
0x004f52b6: cmp    DWORD PTR [r12+0xb8],0x1
0x004f52bf: jne    0x1404f52d0
0x004f52c1: lea    rdx,[rip+0x1170600]        # 0x1416658c8 ; literal="briefly "
0x004f52c8: mov    rcx,r13
0x004f52cb: call   0x140070b90
0x004f52d0: lea    rdx,[rip+0x1170601]        # 0x1416658d8 ; literal="through touch"
0x004f52d7: jmp    0x1404f5391
0x004f52dc: cmp    DWORD PTR [r12+0xb8],0x0
0x004f52e5: jne    0x1404f52f6
0x004f52e7: lea    rdx,[rip+0x11705ca]        # 0x1416658b8 ; literal="constantly "
0x004f52ee: mov    rcx,r13
0x004f52f1: call   0x140070b90
0x004f52f6: cmp    DWORD PTR [r12+0xb8],0x1
0x004f52ff: jne    0x1404f5310
0x004f5301: lea    rdx,[rip+0x11705c0]        # 0x1416658c8 ; literal="briefly "
0x004f5308: mov    rcx,r13
0x004f530b: call   0x140070b90
0x004f5310: lea    rdx,[rip+0x11705d1]        # 0x1416658e8 ; literal="through a light touch"
0x004f5317: jmp    0x1404f5391
0x004f5319: cmp    DWORD PTR [r12+0xb8],0x0
0x004f5322: jne    0x1404f5333
0x004f5324: lea    rdx,[rip+0x117058d]        # 0x1416658b8 ; literal="constantly "
0x004f532b: mov    rcx,r13
0x004f532e: call   0x140070b90
0x004f5333: cmp    DWORD PTR [r12+0xb8],0x1
0x004f533c: jne    0x1404f534d
0x004f533e: lea    rdx,[rip+0x1170583]        # 0x1416658c8 ; literal="briefly "
0x004f5345: mov    rcx,r13
0x004f5348: call   0x140070b90
0x004f534d: lea    rdx,[rip+0x11705ac]        # 0x141665900 ; literal="through visual cues"
0x004f5354: jmp    0x1404f5391
0x004f5356: cmp    DWORD PTR [r12+0xb8],0x0
0x004f535f: jne    0x1404f5370
0x004f5361: lea    rdx,[rip+0x1170550]        # 0x1416658b8 ; literal="constantly "
0x004f5368: mov    rcx,r13
0x004f536b: call   0x140070b90
0x004f5370: cmp    DWORD PTR [r12+0xb8],0x1
0x004f5379: jne    0x1404f538a
0x004f537b: lea    rdx,[rip+0x1170546]        # 0x1416658c8 ; literal="briefly "
0x004f5382: mov    rcx,r13
0x004f5385: call   0x140070b90
0x004f538a: lea    rdx,[rip+0x1170587]        # 0x141665918 ; literal="through spoken cues"
0x004f5391: mov    rcx,r13
0x004f5394: call   0x140070b90
0x004f5399: lea    rdx,[rip+0x11241f8]        # 0x141619598 ; literal=".  "
0x004f53a0: mov    rcx,r13
0x004f53a3: call   0x140070b90
0x004f53a8: mov    rcx,QWORD PTR [r12+0xc8]
0x004f53b0: mov    r10,QWORD PTR [r12+0xc0]
0x004f53b8: mov    rax,rcx
0x004f53bb: sub    rax,r10
0x004f53be: sar    rax,0x2
0x004f53c2: test   rax,rax
0x004f53c5: je     0x1404f553e
0x004f53cb: mov    edi,r14d
0x004f53ce: mov    QWORD PTR [rsp+0x40],r10
0x004f53d3: mov    QWORD PTR [rsp+0x48],rcx
0x004f53d8: lea    r8,[rsp+0x48]
0x004f53dd: lea    rdx,[rsp+0x30]
0x004f53e2: lea    rcx,[rsp+0x40]
0x004f53e7: call   0x140070450
0x004f53ec: cmp    BYTE PTR [rax],dil
0x004f53ef: jge    0x1404f553e
0x004f53f5: mov    rdx,r10
0x004f53f8: mov    r8,r10
0x004f53fb: nop    DWORD PTR [rax+rax*1+0x0]
0x004f5400: mov    ecx,DWORD PTR [r10]
0x004f5403: test   ecx,ecx
0x004f5405: je     0x1404f5416
0x004f5407: sub    ecx,0x1
0x004f540a: je     0x1404f5416
0x004f540c: sub    ecx,0x1
0x004f540f: je     0x1404f5416
0x004f5411: cmp    ecx,0x1
0x004f5414: jne    0x1404f541b
0x004f5416: inc    edi
0x004f5418: mov    rdx,r8
0x004f541b: lea    r10,[rdx+0x4]
0x004f541f: mov    QWORD PTR [rsp+0x40],r10
0x004f5424: lea    r8,[rsp+0x48]
0x004f5429: lea    rdx,[rsp+0x30]
0x004f542e: lea    rcx,[rsp+0x40]
0x004f5433: call   0x140070450
0x004f5438: mov    rdx,r10
0x004f543b: mov    r8,r10
0x004f543e: cmp    BYTE PTR [rax],0x0
0x004f5441: jl     0x1404f5400
0x004f5443: test   edi,edi
0x004f5445: jle    0x1404f553e
0x004f544b: lea    rdx,[rip+0x11704de]        # 0x141665930 ; literal="There are partner changes throughout the dance "
0x004f5452: mov    rcx,r13
0x004f5455: call   0x140070b90
0x004f545a: mov    rbx,QWORD PTR [r12+0xc0]
0x004f5462: mov    QWORD PTR [rsp+0x40],rbx
0x004f5467: mov    rax,QWORD PTR [r12+0xc8]
0x004f546f: mov    QWORD PTR [rsp+0x48],rax
0x004f5474: lea    r8,[rsp+0x48]
0x004f5479: lea    rdx,[rsp+0x30]
0x004f547e: lea    rcx,[rsp+0x40]
0x004f5483: call   0x140070450
0x004f5488: cmp    BYTE PTR [rax],0x0
0x004f548b: jge    0x1404f552f
0x004f5491: mov    ecx,DWORD PTR [rbx]
0x004f5493: mov    edx,ecx
0x004f5495: test   ecx,ecx
0x004f5497: je     0x1404f54a8
0x004f5499: sub    edx,0x1
0x004f549c: je     0x1404f54a8
0x004f549e: sub    edx,0x1
0x004f54a1: je     0x1404f54a8
0x004f54a3: cmp    edx,0x1
0x004f54a6: jne    0x1404f5509
0x004f54a8: dec    edi
0x004f54aa: test   ecx,ecx
0x004f54ac: je     0x1404f54d8
0x004f54ae: sub    ecx,0x1
0x004f54b1: je     0x1404f54cf
0x004f54b3: sub    ecx,0x1
0x004f54b6: je     0x1404f54c6
0x004f54b8: cmp    ecx,0x1
0x004f54bb: jne    0x1404f54e7
0x004f54bd: lea    rdx,[rip+0x1170534]        # 0x1416659f8 ; literal="with the lead turning out counterclockwise"
0x004f54c4: jmp    0x1404f54df
0x004f54c6: lea    rdx,[rip+0x1170503]        # 0x1416659d0 ; literal="with the lead turning out clockwise"
0x004f54cd: jmp    0x1404f54df
0x004f54cf: lea    rdx,[rip+0x11704c2]        # 0x141665998 ; literal="with the lead advancing against the main line of motion"
0x004f54d6: jmp    0x1404f54df
0x004f54d8: lea    rdx,[rip+0x1170481]        # 0x141665960 ; literal="with the lead advancing along the main line of motion"
0x004f54df: mov    rcx,r13
0x004f54e2: call   0x140070b90
0x004f54e7: cmp    edi,0x2
0x004f54ea: jl     0x1404f54f5
0x004f54ec: lea    rdx,[rip+0x1123e71]        # 0x141619364 ; literal=","
0x004f54f3: jmp    0x1404f5501
0x004f54f5: cmp    edi,0x1
0x004f54f8: jne    0x1404f5509
0x004f54fa: lea    rdx,[rip+0x110ee8b]        # 0x14160438c ; literal=" and "
0x004f5501: mov    rcx,r13
0x004f5504: call   0x140070b90
0x004f5509: add    rbx,0x4
0x004f550d: mov    QWORD PTR [rsp+0x40],rbx
0x004f5512: lea    r8,[rsp+0x48]
0x004f5517: lea    rdx,[rsp+0x30]
0x004f551c: lea    rcx,[rsp+0x40]
0x004f5521: call   0x140070450
0x004f5526: cmp    BYTE PTR [rax],0x0
0x004f5529: jl     0x1404f5491
0x004f552f: lea    rdx,[rip+0x1124062]        # 0x141619598 ; literal=".  "
0x004f5536: mov    rcx,r13
0x004f5539: call   0x140070b90
0x004f553e: xorps  xmm0,xmm0
0x004f5541: movdqu XMMWORD PTR [rbp+0xa0],xmm0
0x004f5549: mov    QWORD PTR [rbp+0xb0],r14
0x004f5550: movdqu XMMWORD PTR [rbp-0x80],xmm0
0x004f5555: mov    QWORD PTR [rbp-0x70],r14
0x004f5559: mov    r10,QWORD PTR [r12+0x160]
0x004f5561: mov    QWORD PTR [rsp+0x40],r10
0x004f5566: mov    rax,QWORD PTR [r12+0x168]
0x004f556e: mov    QWORD PTR [rsp+0x48],rax
0x004f5573: lea    r8,[rsp+0x48]
0x004f5578: lea    rdx,[rsp+0x30]
0x004f557d: lea    rcx,[rsp+0x40]
0x004f5582: call   0x140070450
0x004f5587: cmp    BYTE PTR [rax],0x0
0x004f558a: jge    0x1404f5601
0x004f558c: mov    rdx,r10
0x004f558f: mov    rbx,r10
0x004f5592: mov    rdi,r10
0x004f5595: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x004f55a0: mov    rax,QWORD PTR [r10]
0x004f55a3: mov    ecx,DWORD PTR [rax+0x80]
0x004f55a9: test   cl,0x2
0x004f55ac: je     0x1404f55bf
0x004f55ae: mov    rdx,r10
0x004f55b1: lea    rcx,[rbp+0xa0]
0x004f55b8: call   0x1400bafb0
0x004f55bd: jmp    0x1404f55d6
0x004f55bf: mov    rbx,rdx
0x004f55c2: test   cl,0x4
0x004f55c5: je     0x1404f55d6
0x004f55c7: mov    rdx,r10
0x004f55ca: lea    rcx,[rbp-0x80]
0x004f55ce: call   0x1400bafb0
0x004f55d3: mov    rbx,rdi
0x004f55d6: lea    r10,[rbx+0x8]
0x004f55da: mov    QWORD PTR [rsp+0x40],r10
0x004f55df: lea    r8,[rsp+0x48]
0x004f55e4: lea    rdx,[rsp+0x30]
0x004f55e9: lea    rcx,[rsp+0x40]
0x004f55ee: call   0x140070450
0x004f55f3: mov    rdx,r10
0x004f55f6: mov    rbx,r10
0x004f55f9: mov    rdi,r10
0x004f55fc: cmp    BYTE PTR [rax],0x0
0x004f55ff: jl     0x1404f55a0
0x004f5601: mov    rdi,QWORD PTR [rbp+0xa8]
0x004f5608: mov    rax,rdi
0x004f560b: mov    rbx,QWORD PTR [rbp+0xa0]
0x004f5612: sub    rax,rbx
0x004f5615: sar    rax,0x3
0x004f5619: mov    ecx,0xffffffff
0x004f561e: mov    rdx,QWORD PTR [rbp-0x78]
0x004f5622: mov    r15,QWORD PTR [rbp-0x80]
0x004f5626: test   rax,rax
0x004f5629: jne    0x1404f566b
0x004f562b: mov    rax,rdx
0x004f562e: sub    rax,r15
0x004f5631: sar    rax,0x3
0x004f5635: test   rax,rax
0x004f5638: jne    0x1404f566b
0x004f563a: mov    rax,QWORD PTR [r12+0xf0]
0x004f5642: sub    rax,QWORD PTR [r12+0xe8]
0x004f564a: sar    rax,0x2
0x004f564e: test   rax,rax
0x004f5651: jne    0x1404f566b
0x004f5653: cmp    DWORD PTR [r12+0xac],ecx
0x004f565b: jne    0x1404f566b
0x004f565d: cmp    DWORD PTR [r12+0xe4],ecx
0x004f5665: je     0x1404f6550
0x004f566b: cmp    DWORD PTR [r12+0xe4],ecx
0x004f5673: je     0x1404f56b6
0x004f5675: lea    rdx,[rip+0x11703ac]        # 0x141665a28 ; literal="The dancers imitate the movement of the "
0x004f567c: mov    rcx,r13
0x004f567f: call   0x140070b90
0x004f5684: mov    BYTE PTR [rsp+0x28],0x0
0x004f5689: mov    WORD PTR [rsp+0x20],0xffff
0x004f5690: xor    r9d,r9d
0x004f5693: mov    r8d,DWORD PTR [r12+0xe4]
0x004f569b: mov    rdx,r13
0x004f569e: call   0x140bacb90
0x004f56a3: lea    rdx,[rip+0x1123eee]        # 0x141619598 ; literal=".  "
0x004f56aa: mov    rcx,r13
0x004f56ad: call   0x140070b90
0x004f56b2: mov    rdx,QWORD PTR [rbp-0x78]
0x004f56b6: mov    rax,rdi
0x004f56b9: sub    rax,rbx
0x004f56bc: sar    rax,0x3
0x004f56c0: test   rax,rax
0x004f56c3: jne    0x1404f56d8
0x004f56c5: mov    rax,rdx
0x004f56c8: sub    rax,r15
0x004f56cb: sar    rax,0x3
0x004f56cf: test   rax,rax
0x004f56d2: je     0x1404f5811
0x004f56d8: lea    rdx,[rip+0x1170379]        # 0x141665a58 ; literal="This dance is a refined artform, with "
0x004f56df: mov    rcx,r13
0x004f56e2: call   0x140070b90
0x004f56e7: mov    rax,rdi
0x004f56ea: sub    rax,rbx
0x004f56ed: sar    rax,0x3
0x004f56f1: test   rax,rax
0x004f56f4: je     0x1404f578b
0x004f56fa: lea    rcx,[rbp+0x100]
0x004f5701: call   0x140070cc0
0x004f5706: nop
0x004f5707: mov    rcx,rdi
0x004f570a: sub    rcx,rbx
0x004f570d: sar    rcx,0x3
0x004f5711: lea    rdx,[rbp+0x100]
0x004f5718: call   0x140547840
0x004f571d: lea    rdx,[rbp+0x100]
0x004f5724: mov    rcx,r13
0x004f5727: call   0x1400bb340
0x004f572c: lea    rdx,[rip+0x117034d]        # 0x141665a80 ; literal=" special position"
0x004f5733: mov    rcx,r13
0x004f5736: call   0x140070b90
0x004f573b: mov    rax,rdi
0x004f573e: sub    rax,rbx
0x004f5741: sar    rax,0x3
0x004f5745: cmp    rax,0x2
0x004f5749: jb     0x1404f575a
0x004f574b: lea    rdx,[rip+0x110ed9e]        # 0x1416044f0 ; literal="s"
0x004f5752: mov    rcx,r13
0x004f5755: call   0x140070b90
0x004f575a: mov    r14,QWORD PTR [rbp-0x78]
0x004f575e: mov    rax,r14
0x004f5761: sub    rax,r15
0x004f5764: sar    rax,0x3
0x004f5768: test   rax,rax
0x004f576b: je     0x1404f577d
0x004f576d: lea    rdx,[rip+0x110ec18]        # 0x14160438c ; literal=" and "
0x004f5774: mov    rcx,r13
0x004f5777: call   0x140070b90
0x004f577c: nop
0x004f577d: lea    rcx,[rbp+0x100]
0x004f5784: call   0x140070e80
0x004f5789: jmp    0x1404f578f
0x004f578b: mov    r14,QWORD PTR [rbp-0x78]
0x004f578f: mov    rbx,r14
0x004f5792: sub    rbx,r15
0x004f5795: sar    rbx,0x3
0x004f5799: test   rbx,rbx
0x004f579c: je     0x1404f57f9
0x004f579e: lea    rcx,[rbp+0x100]
0x004f57a5: call   0x140070cc0
0x004f57aa: nop
0x004f57ab: lea    rdx,[rbp+0x100]
0x004f57b2: mov    ecx,ebx
0x004f57b4: call   0x140547840
0x004f57b9: lea    rdx,[rbp+0x100]
0x004f57c0: mov    rcx,r13
0x004f57c3: call   0x1400bb340
0x004f57c8: lea    rdx,[rip+0x11702c9]        # 0x141665a98 ; literal=" specific move"
0x004f57cf: mov    rcx,r13
0x004f57d2: call   0x140070b90
0x004f57d7: cmp    rbx,0x2
0x004f57db: jb     0x1404f57ed
0x004f57dd: lea    rdx,[rip+0x110ed0c]        # 0x1416044f0 ; literal="s"
0x004f57e4: mov    rcx,r13
0x004f57e7: call   0x140070b90
0x004f57ec: nop
0x004f57ed: lea    rcx,[rbp+0x100]
0x004f57f4: call   0x140070e80
0x004f57f9: lea    rdx,[rip+0x11702a8]        # 0x141665aa8 ; literal=" to be mastered.  "
0x004f5800: mov    rcx,r13
0x004f5803: call   0x140070b90
0x004f5808: mov    rbx,QWORD PTR [rbp+0xa0]
0x004f580f: jmp    0x1404f5815
0x004f5811: mov    r14,QWORD PTR [rbp-0x78]
0x004f5815: cmp    DWORD PTR [r12+0xac],0xffffffff
0x004f581e: je     0x1404f585f
0x004f5820: lea    rdx,[rip+0x1170299]        # 0x141665ac0 ; literal="The entire dance has a basic movement "
0x004f5827: mov    rcx,r13
0x004f582a: call   0x140070b90
0x004f582f: movsxd rcx,DWORD PTR [r12+0xac]
0x004f5837: mov    rax,QWORD PTR [r12+0x160]
0x004f583f: mov    r9,r14
0x004f5842: sub    r9,r15
0x004f5845: sar    r9,0x3
0x004f5849: mov    r8,rdi
0x004f584c: sub    r8,rbx
0x004f584f: sar    r8,0x3
0x004f5853: mov    rdx,QWORD PTR [rax+rcx*8]
0x004f5857: mov    rcx,r13
0x004f585a: call   0x1404f3980
0x004f585f: mov    r10,QWORD PTR [r12+0xe8]
0x004f5867: mov    r9,QWORD PTR [r12+0xf0]
0x004f586f: sub    r9,r10
0x004f5872: sar    r9,0x2
0x004f5876: test   r9,r9
0x004f5879: je     0x1404f6544
0x004f587f: xor    r12d,r12d
0x004f5882: xor    esi,esi
0x004f5884: xor    r14d,r14d
0x004f5887: xor    r13d,r13d
0x004f588a: xor    r8d,r8d
0x004f588d: mov    rcx,r10
0x004f5890: xor    edx,edx
0x004f5892: mov    r11,QWORD PTR [rsp+0x50]
0x004f5897: lea    r15,[rip+0xffffffffffb0a762]        # 0x140000000
0x004f589e: xchg   ax,ax
0x004f58a0: cmp    DWORD PTR [rcx+rdx*1],0x5
0x004f58a4: jne    0x1404f58df
0x004f58a6: mov    rax,QWORD PTR [r11+0x100]
0x004f58ad: movsxd rcx,DWORD PTR [rdx+rax*1]
0x004f58b1: cmp    ecx,0xffffffff
0x004f58b4: je     0x1404f58da
0x004f58b6: cmp    ecx,0x2d
0x004f58b9: ja     0x1404f58d5
0x004f58bb: movzx  eax,BYTE PTR [r15+rcx*1+0x4f85e0]
0x004f58c4: mov    ecx,DWORD PTR [r15+rax*4+0x4f85d4]
0x004f58cc: add    rcx,r15
0x004f58cf: jmp    rcx
0x004f58d1: inc    esi
0x004f58d3: jmp    0x1404f58e2
0x004f58d5: inc    r14d
0x004f58d8: jmp    0x1404f58e2
0x004f58da: inc    r13d
0x004f58dd: jmp    0x1404f58e2
0x004f58df: inc    r12d
0x004f58e2: inc    r8d
0x004f58e5: add    rdx,0x4
0x004f58e9: mov    rcx,r10
0x004f58ec: movsxd rax,r8d
0x004f58ef: cmp    rax,r9
0x004f58f2: jb     0x1404f58a0
0x004f58f4: mov    DWORD PTR [rsp+0x34],r13d
0x004f58f9: mov    DWORD PTR [rsp+0x5c],r14d
0x004f58fe: mov    DWORD PTR [rsp+0x60],r12d
0x004f5903: test   r12d,r12d
0x004f5906: mov    r15,QWORD PTR [rbp-0x80]
0x004f590a: jg     0x1404f591e
0x004f590c: test   r13d,r13d
0x004f590f: jg     0x1404f591e
0x004f5911: test   r14d,r14d
0x004f5914: jg     0x1404f591e
0x004f5916: test   esi,esi
0x004f5918: jle    0x1404f6536
0x004f591e: lea    rdx,[rip+0x11701c3]        # 0x141665ae8 ; literal="The"
0x004f5925: mov    rbx,QWORD PTR [rbp+0xc0]
0x004f592c: mov    rcx,rbx
0x004f592f: call   0x140070b90
0x004f5934: test   r12d,r12d
0x004f5937: jne    0x1404f5952
0x004f5939: test   r13d,r13d
0x004f593c: jne    0x1404f5952
0x004f593e: test   r14d,r14d
0x004f5941: jne    0x1404f5952
0x004f5943: lea    rdx,[rip+0x11701a6]        # 0x141665af0 ; literal=" dance is"
0x004f594a: mov    rcx,rbx
0x004f594d: call   0x140070b90
0x004f5952: xor    edi,edi
0x004f5954: mov    rcx,QWORD PTR [rsp+0x50]
0x004f5959: mov    rdx,QWORD PTR [rcx+0xe8]
0x004f5960: mov    rax,QWORD PTR [rcx+0xf0]
0x004f5967: sub    rax,rdx
0x004f596a: sar    rax,0x2
0x004f596e: test   rax,rax
0x004f5971: je     0x1404f5bcf
0x004f5977: xor    ebx,ebx
0x004f5979: mov    r15,QWORD PTR [rbp+0xc0]
0x004f5980: cmp    DWORD PTR [rdx+rbx*1],0x5
0x004f5984: jne    0x1404f5b9a
0x004f598a: mov    rax,QWORD PTR [rcx+0x100]
0x004f5991: movsxd rcx,DWORD PTR [rbx+rax*1]
0x004f5995: cmp    ecx,0xffffffff
0x004f5998: je     0x1404f5b9a
0x004f599e: cmp    ecx,0x2d
0x004f59a1: ja     0x1404f5b9a
0x004f59a7: lea    rdx,[rip+0xffffffffffb0a652]        # 0x140000000
0x004f59ae: mov    ecx,DWORD PTR [rdx+rcx*4+0x4f8610]
0x004f59b5: add    rcx,rdx
0x004f59b8: jmp    rcx
0x004f59ba: lea    rdx,[rip+0x116f94f]        # 0x141665310 ; literal=" graceful"
0x004f59c1: jmp    0x1404f5b5f
0x004f59c6: lea    rdx,[rip+0x116f953]        # 0x141665320 ; literal=" serene"
0x004f59cd: jmp    0x1404f5b5f
0x004f59d2: lea    rdx,[rip+0x116f94f]        # 0x141665328 ; literal=" calm"
0x004f59d9: jmp    0x1404f5b5f
0x004f59de: lea    rdx,[rip+0x116f94b]        # 0x141665330 ; literal=" grotesque"
0x004f59e5: jmp    0x1404f5b5f
0x004f59ea: lea    rdx,[rip+0x116f94b]        # 0x14166533c ; literal=" crude"
0x004f59f1: jmp    0x1404f5b5f
0x004f59f6: lea    rdx,[rip+0x116f94b]        # 0x141665348 ; literal=" refined"
0x004f59fd: jmp    0x1404f5b5f
0x004f5a02: lea    rdx,[rip+0x116f94f]        # 0x141665358 ; literal=" understated"
0x004f5a09: jmp    0x1404f5b5f
0x004f5a0e: lea    rdx,[rip+0x116f953]        # 0x141665368 ; literal=" delicate"
0x004f5a15: jmp    0x1404f5b5f
0x004f5a1a: lea    rdx,[rip+0x116f957]        # 0x141665378 ; literal=" elaborate"
0x004f5a21: jmp    0x1404f5b5f
0x004f5a26: lea    rdx,[rip+0x116f95b]        # 0x141665388 ; literal=" expressive"
0x004f5a2d: jmp    0x1404f5b5f
0x004f5a32: lea    rdx,[rip+0x116f95f]        # 0x141665398 ; literal=" strong"
0x004f5a39: jmp    0x1404f5b5f
0x004f5a3e: lea    rdx,[rip+0x116f603]        # 0x141665048 ; literal=" weightless"
0x004f5a45: jmp    0x1404f5b5f
0x004f5a4a: lea    rdx,[rip+0x116f603]        # 0x141665054 ; literal=" fluid"
0x004f5a51: jmp    0x1404f5b5f
0x004f5a56: lea    rdx,[rip+0x116f603]        # 0x141665060 ; literal=" undulating"
0x004f5a5d: jmp    0x1404f5b5f
0x004f5a62: lea    rdx,[rip+0x116f603]        # 0x14166506c ; literal=" soft"
0x004f5a69: jmp    0x1404f5b5f
0x004f5a6e: lea    rdx,[rip+0x116f603]        # 0x141665078 ; literal=" jerking"
0x004f5a75: jmp    0x1404f5b5f
0x004f5a7a: lea    rdx,[rip+0x116f607]        # 0x141665088 ; literal=" sharp-edged"
0x004f5a81: jmp    0x1404f5b5f
0x004f5a86: lea    rdx,[rip+0x116f60b]        # 0x141665098 ; literal=" straight-lined"
0x004f5a8d: jmp    0x1404f5b5f
0x004f5a92: lea    rdx,[rip+0x116f677]        # 0x141665110 ; literal=" energetic"
0x004f5a99: jmp    0x1404f5b5f
0x004f5a9e: lea    rdx,[rip+0x116f67b]        # 0x141665120 ; literal=" passionate"
0x004f5aa5: jmp    0x1404f5b5f
0x004f5aaa: lea    rdx,[rip+0x116f67f]        # 0x141665130 ; literal=" vivacious"
0x004f5ab1: jmp    0x1404f5b5f
0x004f5ab6: lea    rdx,[rip+0x116f683]        # 0x141665140 ; literal=" joyous"
0x004f5abd: jmp    0x1404f5b5f
0x004f5ac2: lea    rdx,[rip+0x116f67f]        # 0x141665148 ; literal=" proud"
0x004f5ac9: jmp    0x1404f5b5f
0x004f5ace: lea    rdx,[rip+0x116f67b]        # 0x141665150 ; literal=" flamboyant"
0x004f5ad5: jmp    0x1404f5b5f
0x004f5ada: lea    rdx,[rip+0x116f67f]        # 0x141665160 ; literal=" lively"
0x004f5ae1: jmp    0x1404f5b5f
0x004f5ae3: lea    rdx,[rip+0x116f67e]        # 0x141665168 ; literal=" spirited"
0x004f5aea: jmp    0x1404f5b5f
0x004f5aec: lea    rdx,[rip+0x116f685]        # 0x141665178 ; literal=" vigorous"
0x004f5af3: jmp    0x1404f5b5f
0x004f5af5: lea    rdx,[rip+0x116f68c]        # 0x141665188 ; literal=" intense"
0x004f5afc: jmp    0x1404f5b5f
0x004f5afe: lea    rdx,[rip+0x116f693]        # 0x141665198 ; literal=" aggressive"
0x004f5b05: jmp    0x1404f5b5f
0x004f5b07: lea    rdx,[rip+0x116f69a]        # 0x1416651a8 ; literal=" powerful"
0x004f5b0e: jmp    0x1404f5b5f
0x004f5b10: lea    rdx,[rip+0x116f6a1]        # 0x1416651b8 ; literal=" sluggish"
0x004f5b17: jmp    0x1404f5b5f
0x004f5b19: lea    rdx,[rip+0x116f6a8]        # 0x1416651c8 ; literal=" relaxed"
0x004f5b20: jmp    0x1404f5b5f
0x004f5b22: lea    rdx,[rip+0x116f6af]        # 0x1416651d8 ; literal=" passive"
0x004f5b29: jmp    0x1404f5b5f
0x004f5b2b: lea    rdx,[rip+0x116f6b6]        # 0x1416651e8 ; literal=" subtle"
0x004f5b32: jmp    0x1404f5b5f
0x004f5b34: lea    rdx,[rip+0x116f6b5]        # 0x1416651f0 ; literal=" sensual"
0x004f5b3b: jmp    0x1404f5b5f
0x004f5b3d: lea    rdx,[rip+0x116f6bc]        # 0x141665200 ; literal=" debauched"
0x004f5b44: jmp    0x1404f5b5f
0x004f5b46: lea    rdx,[rip+0x116fa53]        # 0x1416655a0 ; literal=" twisting"
0x004f5b4d: jmp    0x1404f5b5f
0x004f5b4f: lea    rdx,[rip+0x116fa5a]        # 0x1416655b0 ; literal=" sprightly"
0x004f5b56: jmp    0x1404f5b5f
0x004f5b58: lea    rdx,[rip+0x116fa61]        # 0x1416655c0 ; literal=" sinuous"
0x004f5b5f: mov    rcx,r15
0x004f5b62: call   0x140070b90
0x004f5b67: test   r12d,r12d
0x004f5b6a: jne    0x1404f5b9a
0x004f5b6c: test   r13d,r13d
0x004f5b6f: jne    0x1404f5b9a
0x004f5b71: test   r14d,r14d
0x004f5b74: jne    0x1404f5b9a
0x004f5b76: cmp    esi,0x3
0x004f5b79: jl     0x1404f5b84
0x004f5b7b: lea    rdx,[rip+0x11237e2]        # 0x141619364 ; literal=","
0x004f5b82: jmp    0x1404f5b90
0x004f5b84: cmp    esi,0x2
0x004f5b87: jne    0x1404f5b98
0x004f5b89: lea    rdx,[rip+0x1113f5c]        # 0x141609aec ; literal=" and"
0x004f5b90: mov    rcx,r15
0x004f5b93: call   0x140070b90
0x004f5b98: dec    esi
0x004f5b9a: inc    edi
0x004f5b9c: add    rbx,0x4
0x004f5ba0: mov    rax,QWORD PTR [rsp+0x50]
0x004f5ba5: mov    rdx,QWORD PTR [rax+0xe8]
0x004f5bac: mov    rcx,QWORD PTR [rax+0xf0]
0x004f5bb3: sub    rcx,rdx
0x004f5bb6: sar    rcx,0x2
0x004f5bba: movsxd rax,edi
0x004f5bbd: cmp    rax,rcx
0x004f5bc0: mov    rcx,QWORD PTR [rsp+0x50]
0x004f5bc5: jb     0x1404f5980
0x004f5bcb: mov    r15,QWORD PTR [rbp-0x80]
0x004f5bcf: test   r12d,r12d
0x004f5bd2: jg     0x1404f5be2
0x004f5bd4: test   r13d,r13d
0x004f5bd7: jg     0x1404f5be2
0x004f5bd9: test   r14d,r14d
0x004f5bdc: jle    0x1404f650c
0x004f5be2: lea    rdx,[rip+0x116ff17]        # 0x141665b00 ; literal=" dance is punctuated by "
0x004f5be9: mov    rdi,QWORD PTR [rbp+0xc0]
0x004f5bf0: mov    rcx,rdi
0x004f5bf3: call   0x140070b90
0x004f5bf8: xor    r13d,r13d
0x004f5bfb: mov    DWORD PTR [rsp+0x48],r13d
0x004f5c00: mov    rax,QWORD PTR [rsp+0x50]
0x004f5c05: mov    rdx,QWORD PTR [rax+0xe8]
0x004f5c0c: mov    rax,QWORD PTR [rax+0xf0]
0x004f5c13: sub    rax,rdx
0x004f5c16: sar    rax,0x2
0x004f5c1a: test   rax,rax
0x004f5c1d: je     0x1404f6293
0x004f5c23: xor    r14d,r14d
0x004f5c26: mov    ebx,DWORD PTR [rbp+0xc0]
0x004f5c2c: mov    r15,QWORD PTR [rsp+0x50]
0x004f5c31: cmp    DWORD PTR [rdx+r14*4],0x5
0x004f5c36: je     0x1404f6259
0x004f5c3c: dec    r12d
0x004f5c3f: mov    rax,QWORD PTR [r15+0x130]
0x004f5c46: test   BYTE PTR [rax+r14*4],0xc0
0x004f5c4b: je     0x1404f5c5c
0x004f5c4d: lea    rdx,[rip+0x110e4b0]        # 0x141604104 ; literal="the "
0x004f5c54: mov    rcx,rdi
0x004f5c57: call   0x140070b90
0x004f5c5c: mov    rax,QWORD PTR [r15+0x100]
0x004f5c63: movsxd rcx,DWORD PTR [rax+r14*4]
0x004f5c67: lea    rsi,[rip+0xffffffffffb0a392]        # 0x140000000
0x004f5c6e: cmp    ecx,0x2d
0x004f5c71: ja     0x1404f5e84
0x004f5c77: mov    ecx,DWORD PTR [rsi+rcx*4+0x4f86c8]
0x004f5c7e: add    rcx,rsi
0x004f5c81: jmp    rcx
0x004f5c83: lea    rdx,[rip+0x117039e]        # 0x141666028 ; literal="graceful"
0x004f5c8a: jmp    0x1404f5e7c
0x004f5c8f: lea    rdx,[rip+0x117039e]        # 0x141666034 ; literal="serene"
0x004f5c96: jmp    0x1404f5e7c
0x004f5c9b: lea    rdx,[rip+0x117039a]        # 0x14166603c ; literal="calm"
0x004f5ca2: jmp    0x1404f5e7c
0x004f5ca7: lea    rdx,[rip+0x117039a]        # 0x141666048 ; literal="grotesque"
0x004f5cae: jmp    0x1404f5e7c
0x004f5cb3: lea    rdx,[rip+0x117039a]        # 0x141666054 ; literal="crude"
0x004f5cba: jmp    0x1404f5e7c
0x004f5cbf: lea    rdx,[rip+0x117039a]        # 0x141666060 ; literal="refined"
0x004f5cc6: jmp    0x1404f5e7c
0x004f5ccb: lea    rdx,[rip+0x1170396]        # 0x141666068 ; literal="understated"
0x004f5cd2: jmp    0x1404f5e7c
0x004f5cd7: lea    rdx,[rip+0x117039a]        # 0x141666078 ; literal="delicate"
0x004f5cde: jmp    0x1404f5e7c
0x004f5ce3: lea    rdx,[rip+0x117039e]        # 0x141666088 ; literal="elaborate"
0x004f5cea: jmp    0x1404f5e7c
0x004f5cef: lea    rdx,[rip+0x11703a2]        # 0x141666098 ; literal="expressive"
0x004f5cf6: jmp    0x1404f5e7c
0x004f5cfb: lea    rdx,[rip+0x11703a2]        # 0x1416660a4 ; literal="strong"
0x004f5d02: jmp    0x1404f5e7c
0x004f5d07: lea    rdx,[rip+0x117039e]        # 0x1416660ac ; literal="large"
0x004f5d0e: jmp    0x1404f5e7c
0x004f5d13: lea    rdx,[rip+0x117039e]        # 0x1416660b8 ; literal="weightless"
0x004f5d1a: jmp    0x1404f5e7c
0x004f5d1f: lea    rdx,[rip+0x117039e]        # 0x1416660c4 ; literal="fluid"
0x004f5d26: jmp    0x1404f5e7c
0x004f5d2b: lea    rdx,[rip+0x117039e]        # 0x1416660d0 ; literal="undulating"
0x004f5d32: jmp    0x1404f5e7c
0x004f5d37: lea    rdx,[rip+0x117039e]        # 0x1416660dc ; literal="soft"
0x004f5d3e: jmp    0x1404f5e7c
0x004f5d43: lea    rdx,[rip+0x117039e]        # 0x1416660e8 ; literal="jerking"
0x004f5d4a: jmp    0x1404f5e7c
0x004f5d4f: lea    rdx,[rip+0x117039a]        # 0x1416660f0 ; literal="sharp-edged"
0x004f5d56: jmp    0x1404f5e7c
0x004f5d5b: lea    rdx,[rip+0x117039e]        # 0x141666100 ; literal="straight-lined"
0x004f5d62: jmp    0x1404f5e7c
0x004f5d67: lea    rdx,[rip+0x11703a2]        # 0x141666110 ; literal="high"
0x004f5d6e: jmp    0x1404f5e7c
0x004f5d73: lea    rdx,[rip+0x117039e]        # 0x141666118 ; literal="low"
0x004f5d7a: jmp    0x1404f5e7c
0x004f5d7f: lea    rdx,[rip+0x117039a]        # 0x141666120 ; literal="loudly percussive"
0x004f5d86: jmp    0x1404f5e7c
0x004f5d8b: lea    rdx,[rip+0x11703a6]        # 0x141666138 ; literal="softly percussive"
0x004f5d92: jmp    0x1404f5e7c
0x004f5d97: lea    rdx,[rip+0x11703b2]        # 0x141666150 ; literal="aborted"
0x004f5d9e: jmp    0x1404f5e7c
0x004f5da3: lea    rdx,[rip+0x11703ae]        # 0x141666158 ; literal="partially realized"
0x004f5daa: jmp    0x1404f5e7c
0x004f5daf: lea    rdx,[rip+0x11703ba]        # 0x141666170 ; literal="energetic"
0x004f5db6: jmp    0x1404f5e7c
0x004f5dbb: lea    rdx,[rip+0x112891e]        # 0x14161e6e0 ; literal="passionate"
0x004f5dc2: jmp    0x1404f5e7c
0x004f5dc7: lea    rdx,[rip+0x11703b2]        # 0x141666180 ; literal="vivacious"
0x004f5dce: jmp    0x1404f5e7c
0x004f5dd3: lea    rdx,[rip+0x11703b2]        # 0x14166618c ; literal="joyous"
0x004f5dda: jmp    0x1404f5e7c
0x004f5ddf: lea    rdx,[rip+0x11288de]        # 0x14161e6c4 ; literal="proud"
0x004f5de6: jmp    0x1404f5e7c
0x004f5deb: lea    rdx,[rip+0x11703a6]        # 0x141666198 ; literal="flamboyant"
0x004f5df2: jmp    0x1404f5e7c
0x004f5df7: lea    rdx,[rip+0x11703a6]        # 0x1416661a4 ; literal="lively"
0x004f5dfe: jmp    0x1404f5e7c
0x004f5e00: lea    rdx,[rip+0x11703a9]        # 0x1416661b0 ; literal="spirited"
0x004f5e07: jmp    0x1404f5e7c
0x004f5e09: lea    rdx,[rip+0x11703b0]        # 0x1416661c0 ; literal="vigorous"
0x004f5e10: jmp    0x1404f5e7c
0x004f5e12: lea    rdx,[rip+0x117005f]        # 0x141665e78 ; literal="intense"
0x004f5e19: jmp    0x1404f5e7c
0x004f5e1b: lea    rdx,[rip+0x117005e]        # 0x141665e80 ; literal="aggressive"
0x004f5e22: jmp    0x1404f5e7c
0x004f5e24: lea    rdx,[rip+0x1170065]        # 0x141665e90 ; literal="powerful"
0x004f5e2b: jmp    0x1404f5e7c
0x004f5e2d: lea    rdx,[rip+0x117006c]        # 0x141665ea0 ; literal="sluggish"
0x004f5e34: jmp    0x1404f5e7c
0x004f5e36: lea    rdx,[rip+0x1170073]        # 0x141665eb0 ; literal="relaxed"
0x004f5e3d: jmp    0x1404f5e7c
0x004f5e3f: lea    rdx,[rip+0x1170072]        # 0x141665eb8 ; literal="passive"
0x004f5e46: jmp    0x1404f5e7c
0x004f5e48: lea    rdx,[rip+0x1170071]        # 0x141665ec0 ; literal="subtle"
0x004f5e4f: jmp    0x1404f5e7c
0x004f5e51: lea    rdx,[rip+0x1170070]        # 0x141665ec8 ; literal="sensual"
0x004f5e58: jmp    0x1404f5e7c
0x004f5e5a: lea    rdx,[rip+0x117006f]        # 0x141665ed0 ; literal="debauched"
0x004f5e61: jmp    0x1404f5e7c
0x004f5e63: lea    rdx,[rip+0x1170076]        # 0x141665ee0 ; literal="twisting"
0x004f5e6a: jmp    0x1404f5e7c
0x004f5e6c: lea    rdx,[rip+0x117007d]        # 0x141665ef0 ; literal="sprightly"
0x004f5e73: jmp    0x1404f5e7c
0x004f5e75: lea    rdx,[rip+0x1170084]        # 0x141665f00 ; literal="sinuous"
0x004f5e7c: mov    rcx,rdi
0x004f5e7f: call   0x140070b90
0x004f5e84: mov    rax,QWORD PTR [r15+0x100]
0x004f5e8b: cmp    DWORD PTR [rax+r14*4],0xffffffff
0x004f5e90: je     0x1404f5ea1
0x004f5e92: lea    rdx,[rip+0x110db57]        # 0x1416039f0 ; literal=" "
0x004f5e99: mov    rcx,rdi
0x004f5e9c: call   0x140070b90
0x004f5ea1: mov    rcx,QWORD PTR [r15+0xe8]
0x004f5ea8: mov    edx,DWORD PTR [rcx+r14*4]
0x004f5eac: sub    edx,0x6
0x004f5eaf: je     0x1404f5ee2
0x004f5eb1: sub    edx,0x7
0x004f5eb4: je     0x1404f5ec4
0x004f5eb6: sub    edx,0x1
0x004f5eb9: je     0x1404f5ec4
0x004f5ebb: cmp    edx,0x1
0x004f5ebe: jne    0x1404f5f91
0x004f5ec4: mov    rax,QWORD PTR [r15+0x118]
0x004f5ecb: cmp    DWORD PTR [rax+r14*4],0x2
0x004f5ed0: jne    0x1404f5f91
0x004f5ed6: lea    rdx,[rip+0x1170073]        # 0x141665f50 ; literal="repeated "
0x004f5edd: jmp    0x1404f5f89
0x004f5ee2: mov    rax,QWORD PTR [r15+0x118]
0x004f5ee9: cmp    DWORD PTR [rax+r14*4],0x0
0x004f5eee: jge    0x1404f5eff
0x004f5ef0: lea    rdx,[rip+0x1170011]        # 0x141665f08 ; literal="counterclockwise "
0x004f5ef7: mov    rcx,rdi
0x004f5efa: call   0x140070b90
0x004f5eff: mov    rax,QWORD PTR [r15+0x118]
0x004f5f06: cmp    DWORD PTR [rax+r14*4],0x0
0x004f5f0b: jle    0x1404f5f1c
0x004f5f0d: lea    rdx,[rip+0x117000c]        # 0x141665f20 ; literal="clockwise "
0x004f5f14: mov    rcx,rdi
0x004f5f17: call   0x140070b90
0x004f5f1c: mov    rax,QWORD PTR [r15+0x118]
0x004f5f23: mov    ecx,DWORD PTR [rax+r14*4]
0x004f5f27: neg    ecx
0x004f5f29: cmovs  ecx,DWORD PTR [rax+r14*4]
0x004f5f2e: cmp    ecx,0x2d
0x004f5f31: jne    0x1404f5f42
0x004f5f33: lea    rdx,[rip+0x116fff6]        # 0x141665f30 ; literal="eighth "
0x004f5f3a: mov    rcx,rdi
0x004f5f3d: call   0x140070b90
0x004f5f42: mov    rax,QWORD PTR [r15+0x118]
0x004f5f49: mov    ecx,DWORD PTR [rax+r14*4]
0x004f5f4d: neg    ecx
0x004f5f4f: cmovs  ecx,DWORD PTR [rax+r14*4]
0x004f5f54: cmp    ecx,0x5a
0x004f5f57: jne    0x1404f5f68
0x004f5f59: lea    rdx,[rip+0x116ffd8]        # 0x141665f38 ; literal="quarter "
0x004f5f60: mov    rcx,rdi
0x004f5f63: call   0x140070b90
0x004f5f68: mov    rax,QWORD PTR [r15+0x118]
0x004f5f6f: mov    ecx,DWORD PTR [rax+r14*4]
0x004f5f73: neg    ecx
0x004f5f75: cmovs  ecx,DWORD PTR [rax+r14*4]
0x004f5f7a: cmp    ecx,0xb4
0x004f5f80: jne    0x1404f5f91
0x004f5f82: lea    rdx,[rip+0x116ffbb]        # 0x141665f44 ; literal="half "
0x004f5f89: mov    rcx,rdi
0x004f5f8c: call   0x140070b90
0x004f5f91: mov    rax,QWORD PTR [r15+0xe8]
0x004f5f98: mov    ecx,DWORD PTR [rax+r14*4]
0x004f5f9c: add    ecx,0xfffffffa
0x004f5f9f: cmp    ecx,0x1b
0x004f5fa2: ja     0x1404f60e0
0x004f5fa8: movsxd rax,ecx
0x004f5fab: mov    ecx,DWORD PTR [rsi+rax*4+0x4f8780]
0x004f5fb2: add    rcx,rsi
0x004f5fb5: jmp    rcx
0x004f5fb7: lea    rdx,[rip+0x116ff9e]        # 0x141665f5c ; literal="turns"
0x004f5fbe: jmp    0x1404f60d8
0x004f5fc3: lea    rdx,[rip+0x116ff9e]        # 0x141665f68 ; literal="facial expressions"
0x004f5fca: jmp    0x1404f60d8
0x004f5fcf: lea    rdx,[rip+0x116ffaa]        # 0x141665f80 ; literal="hand gestures"
0x004f5fd6: jmp    0x1404f60d8
0x004f5fdb: lea    rdx,[rip+0x116ffae]        # 0x141665f90 ; literal="straight walks"
0x004f5fe2: jmp    0x1404f60d8
0x004f5fe7: lea    rdx,[rip+0x116ffb2]        # 0x141665fa0 ; literal="curved walks"
0x004f5fee: jmp    0x1404f60d8
0x004f5ff3: lea    rdx,[rip+0x116ffb6]        # 0x141665fb0 ; literal="runs"
0x004f5ffa: jmp    0x1404f60d8
0x004f5fff: lea    rdx,[rip+0x116ffb2]        # 0x141665fb8 ; literal="leaps"
0x004f6006: jmp    0x1404f60d8
0x004f600b: lea    rdx,[rip+0x116ffae]        # 0x141665fc0 ; literal="kicks"
0x004f6012: jmp    0x1404f60d8
0x004f6017: lea    rdx,[rip+0x116ffaa]        # 0x141665fc8 ; literal="left kicks"
0x004f601e: jmp    0x1404f60d8
0x004f6023: lea    rdx,[rip+0x116ffae]        # 0x141665fd8 ; literal="right kicks"
0x004f602a: jmp    0x1404f60d8
0x004f602f: lea    rdx,[rip+0x116ffb2]        # 0x141665fe8 ; literal="leg lifts"
0x004f6036: jmp    0x1404f60d8
0x004f603b: lea    rdx,[rip+0x116ffb6]        # 0x141665ff8 ; literal="left leg lifts"
0x004f6042: jmp    0x1404f60d8
0x004f6047: lea    rdx,[rip+0x116ffba]        # 0x141666008 ; literal="right leg lifts"
0x004f604e: jmp    0x1404f60d8
0x004f6053: lea    rdx,[rip+0x116ffbe]        # 0x141666018 ; literal="body level"
0x004f605a: jmp    0x1404f60d8
0x004f605c: lea    rdx,[rip+0x117027d]        # 0x1416662e0 ; literal="body level changes"
0x004f6063: jmp    0x1404f60d8
0x004f6065: lea    rdx,[rip+0x117028c]        # 0x1416662f8 ; literal="arm carriage"
0x004f606c: jmp    0x1404f60d8
0x004f606e: lea    rdx,[rip+0x1170293]        # 0x141666308 ; literal="raised left arms"
0x004f6075: jmp    0x1404f60d8
0x004f6077: lea    rdx,[rip+0x11702a2]        # 0x141666320 ; literal="raised right arms"
0x004f607e: jmp    0x1404f60d8
0x004f6080: lea    rdx,[rip+0x11702b1]        # 0x141666338 ; literal="raised arms"
0x004f6087: jmp    0x1404f60d8
0x004f6089: lea    rdx,[rip+0x11702b4]        # 0x141666344 ; literal="spins"
0x004f6090: jmp    0x1404f60d8
0x004f6092: lea    rdx,[rip+0x11702b7]        # 0x141666350 ; literal="independent body movement"
0x004f6099: jmp    0x1404f60d8
0x004f609b: lea    rdx,[rip+0x11702ca]        # 0x14166636c ; literal="sway"
0x004f60a2: jmp    0x1404f60d8
0x004f60a4: lea    rdx,[rip+0x11702cd]        # 0x141666378 ; literal="forward bends"
0x004f60ab: jmp    0x1404f60d8
0x004f60ad: lea    rdx,[rip+0x11702d4]        # 0x141666388 ; literal="backward bends"
0x004f60b4: jmp    0x1404f60d8
0x004f60b6: lea    rdx,[rip+0x11702db]        # 0x141666398 ; literal="leftward bends"
0x004f60bd: jmp    0x1404f60d8
0x004f60bf: lea    rdx,[rip+0x11702e2]        # 0x1416663a8 ; literal="rightward bends"
0x004f60c6: jmp    0x1404f60d8
0x004f60c8: lea    rdx,[rip+0x11702e9]        # 0x1416663b8 ; literal="footwork"
0x004f60cf: jmp    0x1404f60d8
0x004f60d1: lea    rdx,[rip+0x11702f0]        # 0x1416663c8 ; literal="movement along the line of dance"
0x004f60d8: mov    rcx,rdi
0x004f60db: call   0x140070b90
0x004f60e0: mov    rax,QWORD PTR [r15+0x130]
0x004f60e7: mov    edx,DWORD PTR [rax+r14*4]
0x004f60eb: mov    ecx,edx
0x004f60ed: shr    ecx,0x2
0x004f60f0: and    ecx,0x1
0x004f60f3: test   dl,0x8
0x004f60f6: lea    eax,[rcx+0x1]
0x004f60f9: cmove  eax,ecx
0x004f60fc: test   dl,0x10
0x004f60ff: lea    ecx,[rax+0x1]
0x004f6102: cmove  ecx,eax
0x004f6105: test   dl,0x20
0x004f6108: lea    esi,[rcx+0x1]
0x004f610b: cmove  esi,ecx
0x004f610e: test   esi,esi
0x004f6110: je     0x1404f61ef
0x004f6116: xor    edi,edi
0x004f6118: mov    r15,QWORD PTR [rbp+0xc0]
0x004f611f: mov    r13,QWORD PTR [rsp+0x50]
0x004f6124: mov    ecx,edi
0x004f6126: test   edi,edi
0x004f6128: je     0x1404f614e
0x004f612a: sub    ecx,0x1
0x004f612d: je     0x1404f6147
0x004f612f: sub    ecx,0x1
0x004f6132: je     0x1404f6140
0x004f6134: cmp    ecx,0x1
0x004f6137: jne    0x1404f6153
0x004f6139: mov    ebx,0x20
0x004f613e: jmp    0x1404f6153
0x004f6140: mov    ebx,0x10
0x004f6145: jmp    0x1404f6153
0x004f6147: mov    ebx,0x8
0x004f614c: jmp    0x1404f6153
0x004f614e: mov    ebx,0x4
0x004f6153: mov    rax,QWORD PTR [r13+0x130]
0x004f615a: test   DWORD PTR [rax+r14*4],ebx
0x004f615e: je     0x1404f61c2
0x004f6160: dec    esi
0x004f6162: cmp    ebx,0x4
0x004f6165: je     0x1404f6191
0x004f6167: cmp    ebx,0x8
0x004f616a: je     0x1404f6188
0x004f616c: cmp    ebx,0x10
0x004f616f: je     0x1404f617f
0x004f6171: cmp    ebx,0x20
0x004f6174: jne    0x1404f61a0
0x004f6176: lea    rdx,[rip+0x116f343]        # 0x1416654c0 ; literal=" shadowed"
0x004f617d: jmp    0x1404f6198
0x004f617f: lea    rdx,[rip+0x116f31a]        # 0x1416654a0 ; literal=" performed in succession"
0x004f6186: jmp    0x1404f6198
0x004f6188: lea    rdx,[rip+0x116f2f1]        # 0x141665480 ; literal=" performed in retrograde"
0x004f618f: jmp    0x1404f6198
0x004f6191: lea    rdx,[rip+0x116f2d8]        # 0x141665470 ; literal=" mirrored"
0x004f6198: mov    rcx,r15
0x004f619b: call   0x140070b90
0x004f61a0: cmp    esi,0x2
0x004f61a3: jl     0x1404f61ae
0x004f61a5: lea    rdx,[rip+0x11231b8]        # 0x141619364 ; literal=","
0x004f61ac: jmp    0x1404f61ba
0x004f61ae: cmp    esi,0x1
0x004f61b1: jne    0x1404f61c2
0x004f61b3: lea    rdx,[rip+0x1113932]        # 0x141609aec ; literal=" and"
0x004f61ba: mov    rcx,r15
0x004f61bd: call   0x140070b90
0x004f61c2: inc    edi
0x004f61c4: cmp    edi,0x4
0x004f61c7: jl     0x1404f6124
0x004f61cd: mov    r8d,0x11
0x004f61d3: lea    rdx,[rip+0x116f2f6]        # 0x1416654d0 ; literal=" by group members"
0x004f61da: mov    rdi,r15
0x004f61dd: mov    rcx,r15
0x004f61e0: call   0x140071040
0x004f61e5: mov    r13d,DWORD PTR [rsp+0x48]
0x004f61ea: mov    r15,QWORD PTR [rsp+0x50]
0x004f61ef: mov    rax,QWORD PTR [r15+0x130]
0x004f61f6: mov    ecx,DWORD PTR [rax+r14*4]
0x004f61fa: test   cl,0x40
0x004f61fd: je     0x1404f6216
0x004f61ff: mov    r8d,0xc
0x004f6205: lea    rdx,[rip+0x11701e4]        # 0x1416663f0 ; literal=" of the lead"
0x004f620c: mov    rcx,rdi
0x004f620f: call   0x140071040
0x004f6214: jmp    0x1404f6229
0x004f6216: test   cl,cl
0x004f6218: jns    0x1404f6229
0x004f621a: lea    rdx,[rip+0x11701df]        # 0x141666400 ; literal=" of the follower"
0x004f6221: mov    rcx,rdi
0x004f6224: call   0x140070b90
0x004f6229: cmp    r12d,0x2
0x004f622d: jl     0x1404f623e
0x004f622f: mov    r8d,0x2
0x004f6235: lea    rdx,[rip+0x110e158]        # 0x141604394 ; literal=", "
0x004f623c: jmp    0x1404f6251
0x004f623e: cmp    r12d,0x1
0x004f6242: jne    0x1404f6259
0x004f6244: mov    r8d,0x5
0x004f624a: lea    rdx,[rip+0x110e13b]        # 0x14160438c ; literal=" and "
0x004f6251: mov    rcx,rdi
0x004f6254: call   0x140071040
0x004f6259: inc    r13d
0x004f625c: mov    DWORD PTR [rsp+0x48],r13d
0x004f6261: inc    r14
0x004f6264: mov    rdx,QWORD PTR [r15+0xe8]
0x004f626b: mov    rcx,QWORD PTR [r15+0xf0]
0x004f6272: sub    rcx,rdx
0x004f6275: sar    rcx,0x2
0x004f6279: movsxd rax,r13d
0x004f627c: cmp    rax,rcx
0x004f627f: jb     0x1404f5c31
0x004f6285: mov    r15,QWORD PTR [rbp-0x80]
0x004f6289: mov    r12d,DWORD PTR [rsp+0x60]
0x004f628e: mov    r14d,DWORD PTR [rsp+0x5c]
0x004f6293: mov    esi,DWORD PTR [rsp+0x34]
0x004f6297: test   r14d,r14d
0x004f629a: jg     0x1404f62a4
0x004f629c: test   esi,esi
0x004f629e: jle    0x1404f650c
0x004f62a4: test   r12d,r12d
0x004f62a7: jle    0x1404f62be
0x004f62a9: mov    r8d,0x7
0x004f62af: lea    rdx,[rip+0x1170162]        # 0x141666418 ; literal=", with "
0x004f62b6: mov    rcx,rdi
0x004f62b9: call   0x140071040
0x004f62be: mov    r13,QWORD PTR [rsp+0x50]
0x004f62c3: test   r14d,r14d
0x004f62c6: jle    0x1404f6379
0x004f62cc: xor    edi,edi
0x004f62ce: mov    rdx,QWORD PTR [r13+0xe8]
0x004f62d5: mov    rax,QWORD PTR [r13+0xf0]
0x004f62dc: sub    rax,rdx
0x004f62df: sar    rax,0x2
0x004f62e3: test   rax,rax
0x004f62e6: je     0x1404f635d
0x004f62e8: xor    ebx,ebx
0x004f62ea: mov    rsi,QWORD PTR [rbp+0xc0]
0x004f62f1: cmp    DWORD PTR [rdx+rbx*1],0x5
0x004f62f5: jne    0x1404f6336
0x004f62f7: mov    rax,QWORD PTR [r13+0x100]
0x004f62fe: mov    ecx,DWORD PTR [rbx+rax*1]
0x004f6301: cmp    ecx,0xffffffff
0x004f6304: je     0x1404f6336
0x004f6306: sub    ecx,0xb
0x004f6309: je     0x1404f6327
0x004f630b: sub    ecx,0xc
0x004f630e: je     0x1404f631e
0x004f6310: cmp    ecx,0x1
0x004f6313: jne    0x1404f6336
0x004f6315: lea    rdx,[rip+0x117011c]        # 0x141666438 ; literal="partially realized "
0x004f631c: jmp    0x1404f632e
0x004f631e: lea    rdx,[rip+0x1170103]        # 0x141666428 ; literal="aborted "
0x004f6325: jmp    0x1404f632e
0x004f6327: lea    rdx,[rip+0x11700f2]        # 0x141666420 ; literal="large "
0x004f632e: mov    rcx,rsi
0x004f6331: call   0x140070b90
0x004f6336: inc    edi
0x004f6338: add    rbx,0x4
0x004f633c: mov    rdx,QWORD PTR [r13+0xe8]
0x004f6343: mov    rcx,QWORD PTR [r13+0xf0]
0x004f634a: sub    rcx,rdx
0x004f634d: sar    rcx,0x2
0x004f6351: movsxd rax,edi
0x004f6354: cmp    rax,rcx
0x004f6357: jb     0x1404f62f1
0x004f6359: mov    esi,DWORD PTR [rsp+0x34]
0x004f635d: mov    r8d,0x5
0x004f6363: lea    rdx,[rip+0x11700e2]        # 0x14166644c ; literal="moves"
0x004f636a: mov    rdi,QWORD PTR [rbp+0xc0]
0x004f6371: mov    rcx,rdi
0x004f6374: call   0x140071040
0x004f6379: test   esi,esi
0x004f637b: jle    0x1404f650c
0x004f6381: test   r14d,r14d
0x004f6384: jle    0x1404f639b
0x004f6386: mov    r8d,0x5
0x004f638c: lea    rdx,[rip+0x110dff9]        # 0x14160438c ; literal=" and "
0x004f6393: mov    rcx,rdi
0x004f6396: call   0x140071040
0x004f639b: mov    r8d,0x9
0x004f63a1: lea    rdx,[rip+0x11700b0]        # 0x141666458 ; literal="movement "
0x004f63a8: mov    rcx,rdi
0x004f63ab: call   0x140071040
0x004f63b0: xor    r14d,r14d
0x004f63b3: xor    edx,edx
0x004f63b5: mov    r9,QWORD PTR [r13+0xe8]
0x004f63bc: mov    r8,QWORD PTR [r13+0xf0]
0x004f63c3: sub    r8,r9
0x004f63c6: sar    r8,0x2
0x004f63ca: test   r8,r8
0x004f63cd: je     0x1404f63f1
0x004f63cf: xor    ecx,ecx
0x004f63d1: cmp    DWORD PTR [r9+rcx*1],0x5
0x004f63d6: jne    0x1404f63e3
0x004f63d8: mov    rax,QWORD PTR [r13+0x130]
0x004f63df: or     r14d,DWORD PTR [rcx+rax*1]
0x004f63e3: inc    edx
0x004f63e5: add    rcx,0x4
0x004f63e9: movsxd rax,edx
0x004f63ec: cmp    rax,r8
0x004f63ef: jb     0x1404f63d1
0x004f63f1: mov    ecx,r14d
0x004f63f4: shr    ecx,0x2
0x004f63f7: and    ecx,0x1
0x004f63fa: test   r14b,0x8
0x004f63fe: lea    eax,[rcx+0x1]
0x004f6401: cmove  eax,ecx
0x004f6404: test   r14b,0x10
0x004f6408: lea    ecx,[rax+0x1]
0x004f640b: cmove  ecx,eax
0x004f640e: test   r14b,0x20
0x004f6412: lea    esi,[rcx+0x1]
0x004f6415: cmove  esi,ecx
0x004f6418: test   esi,esi
0x004f641a: je     0x1404f650c
0x004f6420: xor    edi,edi
0x004f6422: mov    ebx,DWORD PTR [rbp+0xc0]
0x004f6428: mov    r15,QWORD PTR [rbp+0xc0]
0x004f642f: nop
0x004f6430: mov    ecx,edi
0x004f6432: test   edi,edi
0x004f6434: je     0x1404f645a
0x004f6436: sub    ecx,0x1
0x004f6439: je     0x1404f6453
0x004f643b: sub    ecx,0x1
0x004f643e: je     0x1404f644c
0x004f6440: cmp    ecx,0x1
0x004f6443: jne    0x1404f645f
0x004f6445: mov    ebx,0x20
0x004f644a: jmp    0x1404f645f
0x004f644c: mov    ebx,0x10
0x004f6451: jmp    0x1404f645f
0x004f6453: mov    ebx,0x8
0x004f6458: jmp    0x1404f645f
0x004f645a: mov    ebx,0x4
0x004f645f: test   r14d,ebx
0x004f6462: je     0x1404f64e8
0x004f6468: dec    esi
0x004f646a: cmp    ebx,0x4
0x004f646d: je     0x1404f64a5
0x004f646f: cmp    ebx,0x8
0x004f6472: je     0x1404f6496
0x004f6474: cmp    ebx,0x10
0x004f6477: je     0x1404f6487
0x004f6479: cmp    ebx,0x20
0x004f647c: jne    0x1404f64ba
0x004f647e: lea    rdx,[rip+0x1170023]        # 0x1416664a8 ; literal="shadowed"
0x004f6485: jmp    0x1404f64ac
0x004f6487: mov    r8d,0x17
0x004f648d: lea    rdx,[rip+0x116fffc]        # 0x141666490 ; literal="performed in succession"
0x004f6494: jmp    0x1404f64b2
0x004f6496: mov    r8d,0x17
0x004f649c: lea    rdx,[rip+0x116ffd5]        # 0x141666478 ; literal="performed in retrograde"
0x004f64a3: jmp    0x1404f64b2
0x004f64a5: lea    rdx,[rip+0x116ffbc]        # 0x141666468 ; literal="mirrored"
0x004f64ac: mov    r8d,0x8
0x004f64b2: mov    rcx,r15
0x004f64b5: call   0x140071040
0x004f64ba: cmp    esi,0x2
0x004f64bd: jl     0x1404f64ce
0x004f64bf: mov    r8d,0x2
0x004f64c5: lea    rdx,[rip+0x110dec8]        # 0x141604394 ; literal=", "
0x004f64cc: jmp    0x1404f64e0
0x004f64ce: cmp    esi,0x1
0x004f64d1: jne    0x1404f64e8
0x004f64d3: mov    r8d,0x5
0x004f64d9: lea    rdx,[rip+0x110deac]        # 0x14160438c ; literal=" and "
0x004f64e0: mov    rcx,r15
0x004f64e3: call   0x140071040
0x004f64e8: inc    edi
0x004f64ea: cmp    edi,0x4
0x004f64ed: jl     0x1404f6430
0x004f64f3: mov    r8d,0x11
0x004f64f9: lea    rdx,[rip+0x116efd0]        # 0x1416654d0 ; literal=" by group members"
0x004f6500: mov    rcx,r15
0x004f6503: call   0x140071040
0x004f6508: mov    r15,QWORD PTR [rbp-0x80]
0x004f650c: mov    r8d,0x3
0x004f6512: lea    rdx,[rip+0x112307f]        # 0x141619598 ; literal=".  "
0x004f6519: mov    r13,QWORD PTR [rbp+0xc0]
0x004f6520: mov    rcx,r13
0x004f6523: call   0x140071040
0x004f6528: mov    r12,QWORD PTR [rsp+0x50]
0x004f652d: mov    rdi,QWORD PTR [rbp+0xa8]
0x004f6534: jmp    0x1404f6540
0x004f6536: mov    r13,QWORD PTR [rbp+0xc0]
0x004f653d: mov    r12,r11
0x004f6540: mov    rsi,QWORD PTR [rbp-0x60]
0x004f6544: mov    rdx,QWORD PTR [rbp-0x78]
0x004f6548: xor    r14d,r14d
0x004f654b: mov    ecx,0xffffffff
0x004f6550: mov    rax,QWORD PTR [r12+0x150]
0x004f6558: sub    rax,QWORD PTR [r12+0x148]
0x004f6560: sar    rax,0x3
0x004f6564: test   rax,rax
0x004f6567: je     0x1404f8440
0x004f656d: mov    r10d,r14d
0x004f6570: mov    DWORD PTR [rsp+0x68],r14d
0x004f6575: mov    DWORD PTR [rbp-0x68],r14d
0x004f6579: mov    DWORD PTR [rsp+0x5c],r14d
0x004f657e: mov    DWORD PTR [rsp+0x60],r14d
0x004f6583: mov    DWORD PTR [rsp+0x48],r14d
0x004f6588: mov    r9d,ecx
0x004f658b: mov    DWORD PTR [rsp+0x58],ecx
0x004f658f: mov    ebx,ecx
0x004f6591: mov    DWORD PTR [rsp+0x34],ecx
0x004f6595: test   rsi,rsi
0x004f6598: je     0x1404f65f4
0x004f659a: mov    r8d,r14d
0x004f659d: mov    rax,QWORD PTR [rsi+0x88]
0x004f65a4: mov    rcx,QWORD PTR [rsi+0x90]
0x004f65ab: nop    DWORD PTR [rax+rax*1+0x0]
0x004f65b0: cmp    rax,rcx
0x004f65b3: jae    0x1404f65e2
0x004f65b5: mov    rdx,QWORD PTR [rax]
0x004f65b8: cmp    DWORD PTR [rdx],0xa
0x004f65bb: jne    0x1404f65d9
0x004f65bd: inc    r10d
0x004f65c0: cmp    r9d,0xffffffff
0x004f65c4: jne    0x1404f65d2
0x004f65c6: mov    r9d,r8d
0x004f65c9: add    rax,0x8
0x004f65cd: inc    r8d
0x004f65d0: jmp    0x1404f65b0
0x004f65d2: cmp    ebx,0xffffffff
0x004f65d5: cmove  ebx,r8d
0x004f65d9: add    rax,0x8
0x004f65dd: inc    r8d
0x004f65e0: jmp    0x1404f65b0
0x004f65e2: mov    DWORD PTR [rsp+0x68],r10d
0x004f65e7: mov    DWORD PTR [rsp+0x58],r9d
0x004f65ec: mov    DWORD PTR [rsp+0x34],ebx
0x004f65f0: mov    rdx,QWORD PTR [rbp-0x78]
0x004f65f4: mov    DWORD PTR [rsp+0x78],r14d
0x004f65f9: mov    rsi,QWORD PTR [r12+0x148]
0x004f6601: mov    r14,QWORD PTR [r12+0x150]
0x004f6609: mov    QWORD PTR [rsp+0x40],r14
0x004f660e: mov    rax,rdx
0x004f6611: sub    rax,r15
0x004f6614: sar    rax,0x3
0x004f6618: mov    QWORD PTR [rbp-0x40],rax
0x004f661c: mov    rax,rdi
0x004f661f: sub    rax,QWORD PTR [rbp+0xa0]
0x004f6626: sar    rax,0x3
0x004f662a: mov    QWORD PTR [rbp-0x38],rax
0x004f662e: xchg   ax,ax
0x004f6630: cmp    rsi,r14
0x004f6633: jae    0x1404f843c
0x004f6639: mov    r9,QWORD PTR [rsi]
0x004f663c: mov    r10,QWORD PTR [r9+0x58]
0x004f6640: sub    r10,QWORD PTR [r9+0x50]
0x004f6644: sar    r10,0x2
0x004f6648: mov    r8,QWORD PTR [r9+0x30]
0x004f664c: sub    r8,QWORD PTR [r9+0x28]
0x004f6650: sar    r8,0x2
0x004f6654: cmp    DWORD PTR [r9+0x10],0xffffffff
0x004f6659: sete   al
0x004f665c: xor    edi,edi
0x004f665e: mov    edx,edi
0x004f6660: movzx  ecx,al
0x004f6663: cmp    DWORD PTR [r9+0x18],0xffffffff
0x004f6668: cmove  edx,ecx
0x004f666b: mov    ecx,edi
0x004f666d: movzx  eax,dl
0x004f6670: test   r8,r8
0x004f6673: cmove  ecx,eax
0x004f6676: mov    edx,edi
0x004f6678: movzx  eax,cl
0x004f667b: cmp    DWORD PTR [r9+0x14],0xffffffff
0x004f6680: cmove  edx,eax
0x004f6683: mov    r8d,edi
0x004f6686: movzx  eax,dl
0x004f6689: test   r10,r10
0x004f668c: cmove  r8d,eax
0x004f6690: mov    ecx,edi
0x004f6692: movzx  eax,r8b
0x004f6696: cmp    DWORD PTR [r9+0x4c],0xffffffff
0x004f669b: cmove  ecx,eax
0x004f669e: test   cl,cl
0x004f66a0: jne    0x1404f8423
0x004f66a6: mov    r8d,0x3
0x004f66ac: lea    rdx,[rip+0x112281d]        # 0x141618ed0 ; literal="[B]"
0x004f66b3: mov    rcx,r13
0x004f66b6: call   0x140071040
0x004f66bb: mov    rdx,QWORD PTR [rbp-0x60]
0x004f66bf: test   rdx,rdx
0x004f66c2: je     0x1404f6a30
0x004f66c8: mov    rax,QWORD PTR [rsi]
0x004f66cb: movsxd rcx,DWORD PTR [rax+0xb0]
0x004f66d2: cmp    ecx,0xffffffff
0x004f66d5: je     0x1404f6a30
0x004f66db: mov    rax,QWORD PTR [rdx+0x88]
0x004f66e2: mov    rdi,QWORD PTR [rax+rcx*8]
0x004f66e6: mov    rcx,r13
0x004f66e9: cmp    DWORD PTR [rsp+0x78],0x0
0x004f66ee: jne    0x1404f66ff
0x004f66f0: mov    r8d,0x1a
0x004f66f6: lea    rdx,[rip+0x116fdbb]        # 0x1416664b8 ; literal="The dance begins with the "
0x004f66fd: jmp    0x1404f670c
0x004f66ff: mov    r8d,0x28
0x004f6705: lea    rdx,[rip+0x116fdcc]        # 0x1416664d8 ; literal="The dance enters a new section with the "
0x004f670c: call   0x140071040
0x004f6711: cmp    DWORD PTR [rdi],0x0
0x004f6714: jne    0x1404f6731
0x004f6716: cmp    DWORD PTR [rbp-0x68],0x1
0x004f671a: jl     0x1404f6731
0x004f671c: mov    r8d,0x5
0x004f6722: lea    rdx,[rip+0x116fddb]        # 0x141666504 ; literal="next "
0x004f6729: mov    rcx,r13
0x004f672c: call   0x140071040
0x004f6731: cmp    DWORD PTR [rdi],0x5
0x004f6734: jne    0x1404f6752
0x004f6736: cmp    DWORD PTR [rsp+0x5c],0x1
0x004f673b: jl     0x1404f6752
0x004f673d: mov    r8d,0x5
0x004f6743: lea    rdx,[rip+0x116fdba]        # 0x141666504 ; literal="next "
0x004f674a: mov    rcx,r13
0x004f674d: call   0x140071040
0x004f6752: cmp    DWORD PTR [rdi],0x6
0x004f6755: jne    0x1404f6773
0x004f6757: cmp    DWORD PTR [rsp+0x60],0x1
0x004f675c: jl     0x1404f6773
0x004f675e: mov    r8d,0x5
0x004f6764: lea    rdx,[rip+0x116fd99]        # 0x141666504 ; literal="next "
0x004f676b: mov    rcx,r13
0x004f676e: call   0x140071040
0x004f6773: cmp    DWORD PTR [rdi],0x9
0x004f6776: jne    0x1404f6794
0x004f6778: cmp    DWORD PTR [rsp+0x48],0x1
0x004f677d: jl     0x1404f6794
0x004f677f: mov    r8d,0x5
0x004f6785: lea    rdx,[rip+0x116fd78]        # 0x141666504 ; literal="next "
0x004f678c: mov    rcx,r13
0x004f678f: call   0x140071040
0x004f6794: movsxd rax,DWORD PTR [rdi]
0x004f6797: cmp    eax,0xb
0x004f679a: ja     0x1404f6a16
0x004f67a0: lea    rdx,[rip+0xffffffffffb09859]        # 0x140000000
0x004f67a7: mov    ecx,DWORD PTR [rdx+rax*4+0x4f87f0]
0x004f67ae: add    rcx,rdx
0x004f67b1: jmp    rcx
0x004f67b3: mov    r8d,0x7
0x004f67b9: lea    rdx,[rip+0x116fd50]        # 0x141666510 ; literal="passage"
0x004f67c0: mov    rcx,r13
0x004f67c3: call   0x140071040
0x004f67c8: cmp    DWORD PTR [rdi+0x10],0x2
0x004f67cc: jl     0x1404f67dd
0x004f67ce: lea    rdx,[rip+0x110dd1b]        # 0x1416044f0 ; literal="s"
0x004f67d5: mov    rcx,r13
0x004f67d8: call   0x140070b90
0x004f67dd: inc    DWORD PTR [rbp-0x68]
0x004f67e0: jmp    0x1404f6a16
0x004f67e5: mov    r8d,0xc
0x004f67eb: lea    rdx,[rip+0x116fd26]        # 0x141666518 ; literal="introduction"
0x004f67f2: mov    rcx,r13
0x004f67f5: call   0x140071040
0x004f67fa: jmp    0x1404f6a16
0x004f67ff: mov    r8d,0xa
0x004f6805: lea    rdx,[rip+0x116fd1c]        # 0x141666528 ; literal="exposition"
0x004f680c: mov    rcx,r13
0x004f680f: call   0x140071040
0x004f6814: mov    eax,DWORD PTR [rdi+0x4]
0x004f6817: cmp    eax,DWORD PTR [rsp+0x58]
0x004f681b: jne    0x1404f683f
0x004f681d: mov    rcx,r13
0x004f6820: cmp    DWORD PTR [rsp+0x68],0x1
0x004f6825: jne    0x1404f6833
0x004f6827: lea    rdx,[rip+0x110da02]        # 0x141604230 ; literal=" of the theme"
0x004f682e: jmp    0x1404f6a11
0x004f6833: lea    rdx,[rip+0x110d9de]        # 0x141604218 ; literal=" of the first theme"
0x004f683a: jmp    0x1404f6a11
0x004f683f: cmp    eax,ebx
0x004f6841: jne    0x1404f6a16
0x004f6847: lea    rdx,[rip+0x110da12]        # 0x141604260 ; literal=" of the second theme"
0x004f684e: jmp    0x1404f6a0e
0x004f6853: mov    r8d,0xe
0x004f6859: lea    rdx,[rip+0x116f970]        # 0x1416661d0 ; literal="recapitulation"
0x004f6860: mov    rcx,r13
0x004f6863: call   0x140071040
0x004f6868: mov    eax,DWORD PTR [rdi+0x4]
0x004f686b: cmp    eax,DWORD PTR [rsp+0x58]
0x004f686f: jne    0x1404f683f
0x004f6871: mov    rcx,r13
0x004f6874: cmp    DWORD PTR [rsp+0x68],0x1
0x004f6879: jne    0x1404f6833
0x004f687b: lea    rdx,[rip+0x110d9ae]        # 0x141604230 ; literal=" of the theme"
0x004f6882: jmp    0x1404f6a11
0x004f6887: mov    r8d,0x9
0x004f688d: lea    rdx,[rip+0x116f94c]        # 0x1416661e0 ; literal="synthesis"
0x004f6894: mov    rcx,r13
0x004f6897: call   0x140071040
0x004f689c: mov    eax,DWORD PTR [rdi+0x4]
0x004f689f: cmp    eax,DWORD PTR [rsp+0x58]
0x004f68a3: jne    0x1404f6a16
0x004f68a9: cmp    eax,ebx
0x004f68ab: jne    0x1404f6a16
0x004f68b1: lea    rdx,[rip+0x110da00]        # 0x1416042b8 ; literal=" of the two themes"
0x004f68b8: jmp    0x1404f6a0e
0x004f68bd: mov    r8d,0x5
0x004f68c3: lea    rdx,[rip+0x116f922]        # 0x1416661ec ; literal="verse"
0x004f68ca: mov    rcx,r13
0x004f68cd: call   0x140071040
0x004f68d2: cmp    DWORD PTR [rdi+0x10],0x2
0x004f68d6: jl     0x1404f68e7
0x004f68d8: lea    rdx,[rip+0x110dc11]        # 0x1416044f0 ; literal="s"
0x004f68df: mov    rcx,r13
0x004f68e2: call   0x140070b90
0x004f68e7: inc    DWORD PTR [rsp+0x5c]
0x004f68eb: jmp    0x1404f6a16
0x004f68f0: mov    r8d,0x6
0x004f68f6: lea    rdx,[rip+0x116f8f7]        # 0x1416661f4 ; literal="chorus"
0x004f68fd: mov    rcx,r13
0x004f6900: call   0x140071040
0x004f6905: inc    DWORD PTR [rsp+0x60]
0x004f6909: jmp    0x1404f6a16
0x004f690e: mov    r8d,0x6
0x004f6914: lea    rdx,[rip+0x116f8e1]        # 0x1416661fc ; literal="finale"
0x004f691b: mov    rcx,r13
0x004f691e: call   0x140071040
0x004f6923: jmp    0x1404f6a16
0x004f6928: mov    r8d,0x4
0x004f692e: lea    rdx,[rip+0x116f8cf]        # 0x141666204 ; literal="coda"
0x004f6935: mov    rcx,r13
0x004f6938: call   0x140071040
0x004f693d: jmp    0x1404f6a16
0x004f6942: mov    r8d,0xe
0x004f6948: lea    rdx,[rip+0x116f8c1]        # 0x141666210 ; literal="bridge-passage"
0x004f694f: mov    rcx,r13
0x004f6952: call   0x140071040
0x004f6957: cmp    DWORD PTR [rdi+0x10],0x2
0x004f695b: jl     0x1404f696c
0x004f695d: lea    rdx,[rip+0x110db8c]        # 0x1416044f0 ; literal="s"
0x004f6964: mov    rcx,r13
0x004f6967: call   0x140070b90
0x004f696c: inc    DWORD PTR [rsp+0x48]
0x004f6970: jmp    0x1404f6a16
0x004f6975: cmp    ebx,0xffffffff
0x004f6978: je     0x1404f69a5
0x004f697a: mov    rax,QWORD PTR [rsi]
0x004f697d: mov    ecx,DWORD PTR [rax+0xb0]
0x004f6983: cmp    ecx,DWORD PTR [rsp+0x58]
0x004f6987: jne    0x1404f6992
0x004f6989: lea    rdx,[rip+0x110d974]        # 0x141604304 ; literal="first "
0x004f6990: jmp    0x1404f699d
0x004f6992: cmp    ecx,ebx
0x004f6994: jne    0x1404f69a5
0x004f6996: lea    rdx,[rip+0x110d993]        # 0x141604330 ; literal="second "
0x004f699d: mov    rcx,r13
0x004f69a0: call   0x140070b90
0x004f69a5: mov    r8d,0x5
0x004f69ab: lea    rdx,[rip+0x110d972]        # 0x141604324 ; literal="theme"
0x004f69b2: mov    rcx,r13
0x004f69b5: call   0x140071040
0x004f69ba: cmp    DWORD PTR [rdi+0x10],0x2
0x004f69be: jl     0x1404f6a16
0x004f69c0: lea    rdx,[rip+0x110db29]        # 0x1416044f0 ; literal="s"
0x004f69c7: jmp    0x1404f6a0e
0x004f69c9: mov    r8d,0xa
0x004f69cf: lea    rdx,[rip+0x116f84a]        # 0x141666220 ; literal="variations"
0x004f69d6: mov    rcx,r13
0x004f69d9: call   0x140071040
0x004f69de: mov    eax,DWORD PTR [rdi+0x4]
0x004f69e1: cmp    eax,DWORD PTR [rsp+0x58]
0x004f69e5: jne    0x1404f6a03
0x004f69e7: mov    rcx,r13
0x004f69ea: cmp    DWORD PTR [rsp+0x68],0x1
0x004f69ef: jne    0x1404f69fa
0x004f69f1: lea    rdx,[rip+0x110d940]        # 0x141604338 ; literal=" on the theme"
0x004f69f8: jmp    0x1404f6a11
0x004f69fa: lea    rdx,[rip+0x110d977]        # 0x141604378 ; literal=" on the first theme"
0x004f6a01: jmp    0x1404f6a11
0x004f6a03: cmp    eax,ebx
0x004f6a05: jne    0x1404f6a16
0x004f6a07: lea    rdx,[rip+0x110d952]        # 0x141604360 ; literal=" on the second theme"
0x004f6a0e: mov    rcx,r13
0x004f6a11: call   0x140070b90
0x004f6a16: mov    r8d,0x10
0x004f6a1c: lea    rdx,[rip+0x116f80d]        # 0x141666230 ; literal=" of the music.  "
0x004f6a23: mov    rcx,r13
0x004f6a26: call   0x140071040
0x004f6a2b: jmp    0x1404f6ad1
0x004f6a30: xorps  xmm0,xmm0
0x004f6a33: movups XMMWORD PTR [rbp+0xc0],xmm0
0x004f6a3a: mov    QWORD PTR [rbp+0xd0],rdi
0x004f6a41: mov    QWORD PTR [rbp+0xd8],0xf
0x004f6a4c: mov    BYTE PTR [rbp+0xc0],dil
0x004f6a53: mov    ecx,DWORD PTR [rsp+0x78]
0x004f6a57: inc    ecx
0x004f6a59: xor    r8d,r8d
0x004f6a5c: lea    rdx,[rbp+0xc0]
0x004f6a63: call   0x140548050
0x004f6a68: lea    rcx,[rbp+0xc0]
0x004f6a6f: call   0x140546560
0x004f6a74: mov    r8d,0x4
0x004f6a7a: lea    rdx,[rip+0x11121bb]        # 0x141608c3c ; literal="The "
0x004f6a81: mov    rcx,r13
0x004f6a84: call   0x140071040
0x004f6a89: lea    rdx,[rbp+0xc0]
0x004f6a90: cmp    QWORD PTR [rbp+0xd8],0xf
0x004f6a98: cmova  rdx,QWORD PTR [rbp+0xc0]
0x004f6aa0: mov    r8,QWORD PTR [rbp+0xd0]
0x004f6aa7: mov    rcx,r13
0x004f6aaa: call   0x140071040
0x004f6aaf: mov    r8d,0x17
0x004f6ab5: lea    rdx,[rip+0x116f78c]        # 0x141666248 ; literal=" section is distinct.  "
0x004f6abc: mov    rcx,r13
0x004f6abf: call   0x140071040
0x004f6ac4: nop
0x004f6ac5: lea    rcx,[rbp+0xc0]
0x004f6acc: call   0x140070e80
0x004f6ad1: mov    rax,QWORD PTR [rsi]
0x004f6ad4: cmp    DWORD PTR [rax+0xc],0xffffffff
0x004f6ad8: jne    0x1404f6b13
0x004f6ada: cmp    DWORD PTR [rax+0x10],0xffffffff
0x004f6ade: jne    0x1404f6b13
0x004f6ae0: test   rdi,rdi
0x004f6ae3: je     0x1404f6e0e
0x004f6ae9: cmp    DWORD PTR [rdi+0x24],0xffffffff
0x004f6aed: jne    0x1404f6b06
0x004f6aef: mov    ecx,DWORD PTR [rdi+0xa8]
0x004f6af5: lea    eax,[rcx+0x1]
0x004f6af8: cmp    eax,0x1
0x004f6afb: jbe    0x1404f6b02
0x004f6afd: cmp    ecx,0x4
0x004f6b00: jne    0x1404f6b06
0x004f6b02: xor    eax,eax
0x004f6b04: jmp    0x1404f6b0b
0x004f6b06: mov    eax,0x1
0x004f6b0b: test   eax,eax
0x004f6b0d: je     0x1404f6e0e
0x004f6b13: mov    r8d,0x14
0x004f6b19: mov    rcx,r13
0x004f6b1c: cmp    DWORD PTR [r12+0x98],0x0
0x004f6b25: lea    rdx,[rip+0x116f18c]        # 0x141665cb8 ; literal="The dancer performs "
0x004f6b2c: je     0x1404f6b35
0x004f6b2e: lea    rdx,[rip+0x116f19b]        # 0x141665cd0 ; literal="The dancers perform "
0x004f6b35: call   0x140071040
0x004f6b3a: mov    rcx,QWORD PTR [rsi]
0x004f6b3d: mov    edx,DWORD PTR [rcx+0xc]
0x004f6b40: test   edx,edx
0x004f6b42: je     0x1404f6b8e
0x004f6b44: sub    edx,0x1
0x004f6b47: je     0x1404f6b85
0x004f6b49: sub    edx,0x1
0x004f6b4c: je     0x1404f6b76
0x004f6b4e: sub    edx,0x1
0x004f6b51: je     0x1404f6b67
0x004f6b53: cmp    edx,0x1
0x004f6b56: jne    0x1404f6ba3
0x004f6b58: mov    r8d,0xf
0x004f6b5e: lea    rdx,[rip+0x116f1db]        # 0x141665d40 ; literal="loosely mingled"
0x004f6b65: jmp    0x1404f6b9b
0x004f6b67: mov    r8d,0x12
0x004f6b6d: lea    rdx,[rip+0x116f1b4]        # 0x141665d28 ; literal="in a double circle"
0x004f6b74: jmp    0x1404f6b9b
0x004f6b76: mov    r8d,0xb
0x004f6b7c: lea    rdx,[rip+0x116f195]        # 0x141665d18 ; literal="in a circle"
0x004f6b83: jmp    0x1404f6b9b
0x004f6b85: lea    rdx,[rip+0x116f174]        # 0x141665d00 ; literal="in several lines"
0x004f6b8c: jmp    0x1404f6b95
0x004f6b8e: lea    rdx,[rip+0x116f153]        # 0x141665ce8 ; literal="in a single line"
0x004f6b95: mov    r8d,0x10
0x004f6b9b: mov    rcx,r13
0x004f6b9e: call   0x140071040
0x004f6ba3: mov    rax,QWORD PTR [rsi]
0x004f6ba6: cmp    DWORD PTR [rax+0x10],0xffffffff
0x004f6baa: je     0x1404f6c5d
0x004f6bb0: cmp    DWORD PTR [rax+0xc],0xffffffff
0x004f6bb4: je     0x1404f6bcb
0x004f6bb6: mov    r8d,0x1
0x004f6bbc: lea    rdx,[rip+0x110ce2d]        # 0x1416039f0 ; literal=" "
0x004f6bc3: mov    rcx,r13
0x004f6bc6: call   0x140071040
0x004f6bcb: mov    rcx,QWORD PTR [rsi]
0x004f6bce: mov    edx,DWORD PTR [rcx+0x10]
0x004f6bd1: test   edx,edx
0x004f6bd3: je     0x1404f6c2e
0x004f6bd5: sub    edx,0x1
0x004f6bd8: je     0x1404f6c02
0x004f6bda: sub    edx,0x1
0x004f6bdd: je     0x1404f6bf3
0x004f6bdf: cmp    edx,0x1
0x004f6be2: jne    0x1404f6c5d
0x004f6be4: mov    r8d,0x17
0x004f6bea: lea    rdx,[rip+0x116f1f7]        # 0x141665de8 ; literal="along an intricate path"
0x004f6bf1: jmp    0x1404f6c55
0x004f6bf3: mov    r8d,0x18
0x004f6bf9: lea    rdx,[rip+0x116f1c8]        # 0x141665dc8 ; literal="along an improvised path"
0x004f6c00: jmp    0x1404f6c55
0x004f6c02: mov    rcx,r13
0x004f6c05: cmp    DWORD PTR [r12+0x98],0x0
0x004f6c0e: jne    0x1404f6c1f
0x004f6c10: mov    r8d,0x1f
0x004f6c16: lea    rdx,[rip+0x116f16b]        # 0x141665d88 ; literal="along a counterclockwise circle"
0x004f6c1d: jmp    0x1404f6c58
0x004f6c1f: mov    r8d,0x18
0x004f6c25: lea    rdx,[rip+0x116f17c]        # 0x141665da8 ; literal="turning counterclockwise"
0x004f6c2c: jmp    0x1404f6c58
0x004f6c2e: cmp    DWORD PTR [r12+0x98],0x0
0x004f6c37: jne    0x1404f6c48
0x004f6c39: mov    r8d,0x18
0x004f6c3f: lea    rdx,[rip+0x116f10a]        # 0x141665d50 ; literal="along a clockwise circle"
0x004f6c46: jmp    0x1404f6c55
0x004f6c48: mov    r8d,0x11
0x004f6c4e: lea    rdx,[rip+0x116f11b]        # 0x141665d70 ; literal="turning clockwise"
0x004f6c55: mov    rcx,r13
0x004f6c58: call   0x140071040
0x004f6c5d: test   rdi,rdi
0x004f6c60: je     0x1404f6df9
0x004f6c66: cmp    DWORD PTR [rdi+0x24],0xffffffff
0x004f6c6a: jne    0x1404f6c83
0x004f6c6c: mov    ecx,DWORD PTR [rdi+0xa8]
0x004f6c72: lea    eax,[rcx+0x1]
0x004f6c75: cmp    eax,0x1
0x004f6c78: jbe    0x1404f6c7f
0x004f6c7a: cmp    ecx,0x4
0x004f6c7d: jne    0x1404f6c83
0x004f6c7f: xor    eax,eax
0x004f6c81: jmp    0x1404f6c88
0x004f6c83: mov    eax,0x1
0x004f6c88: test   eax,eax
0x004f6c8a: je     0x1404f6df9
0x004f6c90: mov    rax,QWORD PTR [rsi]
0x004f6c93: cmp    DWORD PTR [rax+0xc],0xffffffff
0x004f6c97: jne    0x1404f6c9f
0x004f6c99: cmp    DWORD PTR [rax+0x10],0xffffffff
0x004f6c9d: je     0x1404f6cb4
0x004f6c9f: mov    r8d,0x9
0x004f6ca5: lea    rdx,[rip+0x116f154]        # 0x141665e00 ; literal=", moving "
0x004f6cac: mov    rcx,r13
0x004f6caf: call   0x140071040
0x004f6cb4: mov    eax,DWORD PTR [rdi+0xa8]
0x004f6cba: dec    eax
0x004f6cbc: cmp    eax,0x20
0x004f6cbf: ja     0x1404f6d3e
0x004f6cc1: cdqe
0x004f6cc3: lea    rdx,[rip+0xffffffffffb09336]        # 0x140000000
0x004f6cca: movzx  eax,BYTE PTR [rdx+rax*1+0x4f883c]
0x004f6cd2: mov    ecx,DWORD PTR [rdx+rax*4+0x4f8820]
0x004f6cd9: add    rcx,rdx
0x004f6cdc: jmp    rcx
0x004f6cde: mov    r8d,0xc
0x004f6ce4: lea    rdx,[rip+0x116f125]        # 0x141665e10 ; literal="very slowly "
0x004f6ceb: jmp    0x1404f6d36
0x004f6ced: mov    r8d,0x7
0x004f6cf3: lea    rdx,[rip+0x116f126]        # 0x141665e20 ; literal="slowly "
0x004f6cfa: jmp    0x1404f6d36
0x004f6cfc: mov    r8d,0x12
0x004f6d02: lea    rdx,[rip+0x116f11f]        # 0x141665e28 ; literal="slower and slower "
0x004f6d09: jmp    0x1404f6d36
0x004f6d0b: mov    r8d,0x12
0x004f6d11: lea    rdx,[rip+0x116f128]        # 0x141665e40 ; literal="faster and faster "
0x004f6d18: jmp    0x1404f6d36
0x004f6d1a: mov    r8d,0x8
0x004f6d20: lea    rdx,[rip+0x116f131]        # 0x141665e58 ; literal="quickly "
0x004f6d27: jmp    0x1404f6d36
0x004f6d29: mov    r8d,0xd
0x004f6d2f: lea    rdx,[rip+0x116f132]        # 0x141665e68 ; literal="very quickly "
0x004f6d36: mov    rcx,r13
0x004f6d39: call   0x140071040
0x004f6d3e: mov    r11d,DWORD PTR [rdi+0x24]
0x004f6d42: mov    r9,QWORD PTR [rip+0x20136c7]        # 0x14250a410
0x004f6d49: mov    rbx,QWORD PTR [rip+0x20136b8]        # 0x14250a408
0x004f6d50: sub    r9,rbx
0x004f6d53: sar    r9,0x3
0x004f6d57: test   r9d,r9d
0x004f6d5a: je     0x1404f6dc8
0x004f6d5c: xor    r10d,r10d
0x004f6d5f: cmp    r9d,0x40
0x004f6d63: jle    0x1404f6d94
0x004f6d65: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x004f6d70: mov    r8d,r9d
0x004f6d73: shr    r8d,1
0x004f6d76: lea    edx,[r8+r10*1]
0x004f6d7a: movsxd rax,edx
0x004f6d7d: mov    rcx,QWORD PTR [rbx+rax*8]
0x004f6d81: cmp    r11d,DWORD PTR [rcx]
0x004f6d84: cmovl  edx,r10d
0x004f6d88: mov    r10d,edx
0x004f6d8b: sub    r9d,r8d
0x004f6d8e: cmp    r9d,0x40
0x004f6d92: jg     0x1404f6d70
0x004f6d94: lea    eax,[r10+r9*1]
0x004f6d98: cmp    eax,0xffffffff
0x004f6d9b: je     0x1404f6dc8
0x004f6d9d: cmp    r10d,eax
0x004f6da0: jge    0x1404f6dc8
0x004f6da2: movsxd rcx,r10d
0x004f6da5: movsxd rdx,eax
0x004f6da8: nop    DWORD PTR [rax+rax*1+0x0]
0x004f6db0: mov    rax,QWORD PTR [rbx+rcx*8]
0x004f6db4: cmp    r11d,DWORD PTR [rax]
0x004f6db7: je     0x1404f6e62
0x004f6dbd: inc    r10d
0x004f6dc0: inc    rcx
0x004f6dc3: cmp    rcx,rdx
0x004f6dc6: jl     0x1404f6db0
0x004f6dc8: mov    eax,0xffffffff
0x004f6dcd: mov    QWORD PTR [rbp-0x48],0x0
0x004f6dd5: mov    DWORD PTR [rbp-0x50],eax
0x004f6dd8: movaps xmm0,XMMWORD PTR [rbp-0x50]
0x004f6ddc: movdqa XMMWORD PTR [rbp+0xc0],xmm0
0x004f6de4: lea    rdx,[rip+0x116ea0d]        # 0x1416657f8 ; literal="with the music"
0x004f6deb: mov    r8d,0xe
0x004f6df1: mov    rcx,r13
0x004f6df4: call   0x140071040
0x004f6df9: mov    r8d,0x3
0x004f6dff: lea    rdx,[rip+0x1122792]        # 0x141619598 ; literal=".  "
0x004f6e06: mov    rcx,r13
0x004f6e09: call   0x140071040
0x004f6e0e: mov    rax,QWORD PTR [rsi]
0x004f6e11: cmp    DWORD PTR [rax+0x18],0xffffffff
0x004f6e15: je     0x1404f717f
0x004f6e1b: mov    r8d,0xd
0x004f6e21: lea    rdx,[rip+0x116e9e0]        # 0x141665808 ; literal="The partners "
0x004f6e28: mov    rcx,r13
0x004f6e2b: call   0x140071040
0x004f6e30: mov    rcx,QWORD PTR [rsi]
0x004f6e33: mov    edx,DWORD PTR [rcx+0x18]
0x004f6e36: test   edx,edx
0x004f6e38: je     0x1404f6f52
0x004f6e3e: sub    edx,0x1
0x004f6e41: je     0x1404f6f43
0x004f6e47: cmp    edx,0x1
0x004f6e4a: jne    0x1404f6f67
0x004f6e50: mov    r8d,0x13
0x004f6e56: lea    rdx,[rip+0x116e9e3]        # 0x141665840 ; literal="rarely make contact"
0x004f6e5d: jmp    0x1404f6f5f
0x004f6e62: mov    DWORD PTR [rbp+0x100],r10d
0x004f6e69: movsxd rax,r10d
0x004f6e6c: mov    rbx,QWORD PTR [rbx+rax*8]
0x004f6e70: mov    QWORD PTR [rbp+0x108],rbx
0x004f6e77: mov    eax,0xffffffff
0x004f6e7c: mov    DWORD PTR [rbp-0x50],eax
0x004f6e7f: mov    QWORD PTR [rbp-0x48],0x0
0x004f6e87: movaps xmm0,XMMWORD PTR [rbp+0x100]
0x004f6e8e: test   rbx,rbx
0x004f6e91: je     0x1404f6de4
0x004f6e97: movsxd rax,DWORD PTR [rdi+0x28]
0x004f6e9b: test   eax,eax
0x004f6e9d: js     0x1404f6ef9
0x004f6e9f: mov    rcx,QWORD PTR [rbx+0x28]
0x004f6ea3: sub    rcx,QWORD PTR [rbx+0x20]
0x004f6ea7: sar    rcx,0x3
0x004f6eab: cmp    rax,rcx
0x004f6eae: jae    0x1404f6ef9
0x004f6eb0: mov    r8d,0x7
0x004f6eb6: lea    rdx,[rip+0x116f3a3]        # 0x141666260 ; literal="to the "
0x004f6ebd: mov    rcx,r13
0x004f6ec0: call   0x140071040
0x004f6ec5: movsxd rcx,DWORD PTR [rdi+0x28]
0x004f6ec9: mov    rax,QWORD PTR [rbx+0x20]
0x004f6ecd: mov    rdx,QWORD PTR [rax+rcx*8]
0x004f6ed1: cmp    QWORD PTR [rdx+0x18],0xf
0x004f6ed6: mov    r8,QWORD PTR [rdx+0x10]
0x004f6eda: jbe    0x1404f6edf
0x004f6edc: mov    rdx,QWORD PTR [rdx]
0x004f6edf: mov    rcx,r13
0x004f6ee2: call   0x140071040
0x004f6ee7: mov    r8d,0x7
0x004f6eed: lea    rdx,[rip+0x116e8fc]        # 0x1416657f0 ; literal=" rhythm"
0x004f6ef4: jmp    0x1404f6df1
0x004f6ef9: movsxd rax,DWORD PTR [rdi+0x2c]
0x004f6efd: test   eax,eax
0x004f6eff: js     0x1404f6de4
0x004f6f05: psrldq xmm0,0x8
0x004f6f0a: movq   rbx,xmm0
0x004f6f0f: mov    rcx,QWORD PTR [rbx+0x10]
0x004f6f13: sub    rcx,QWORD PTR [rbx+0x8]
0x004f6f17: sar    rcx,0x3
0x004f6f1b: cmp    rax,rcx
0x004f6f1e: jae    0x1404f6de4
0x004f6f24: mov    r8d,0x7
0x004f6f2a: lea    rdx,[rip+0x116f32f]        # 0x141666260 ; literal="to the "
0x004f6f31: mov    rcx,r13
0x004f6f34: call   0x140071040
0x004f6f39: movsxd rcx,DWORD PTR [rdi+0x2c]
0x004f6f3d: mov    rax,QWORD PTR [rbx+0x8]
0x004f6f41: jmp    0x1404f6ecd
0x004f6f43: mov    r8d,0x15
0x004f6f49: lea    rdx,[rip+0x116e8d8]        # 0x141665828 ; literal="maintain open contact"
0x004f6f50: jmp    0x1404f6f5f
0x004f6f52: mov    r8d,0xd
0x004f6f58: lea    rdx,[rip+0x116e8b9]        # 0x141665818 ; literal="dance closely"
0x004f6f5f: mov    rcx,r13
0x004f6f62: call   0x140071040
0x004f6f67: mov    r8d,0x17
0x004f6f6d: lea    rdx,[rip+0x116e8e4]        # 0x141665858 ; literal=", communicating intent "
0x004f6f74: mov    rcx,r13
0x004f6f77: call   0x140071040
0x004f6f7c: mov    rdx,QWORD PTR [rsi]
0x004f6f7f: movsxd rax,DWORD PTR [rdx+0x1c]
0x004f6f83: cmp    eax,0x5
0x004f6f86: ja     0x1404f716a
0x004f6f8c: lea    r8,[rip+0xffffffffffb0906d]        # 0x140000000
0x004f6f93: mov    ecx,DWORD PTR [r8+rax*4+0x4f8860]
0x004f6f9b: add    rcx,r8
0x004f6f9e: jmp    rcx
0x004f6fa0: mov    r8d,0x13
0x004f6fa6: lea    rdx,[rip+0x116e8c3]        # 0x141665870 ; literal="by pushing together"
0x004f6fad: mov    rcx,r13
0x004f6fb0: call   0x140071040
0x004f6fb5: mov    rax,QWORD PTR [rsi]
0x004f6fb8: cmp    DWORD PTR [rax+0x20],0x0
0x004f6fbc: jne    0x1404f6fd3
0x004f6fbe: mov    r8d,0xb
0x004f6fc4: lea    rdx,[rip+0x116e8bd]        # 0x141665888 ; literal=" constantly"
0x004f6fcb: mov    rcx,r13
0x004f6fce: call   0x140071040
0x004f6fd3: mov    rax,QWORD PTR [rsi]
0x004f6fd6: cmp    DWORD PTR [rax+0x20],0x1
0x004f6fda: jne    0x1404f716a
0x004f6fe0: mov    r8d,0x8
0x004f6fe6: lea    rdx,[rip+0x116e8ab]        # 0x141665898 ; literal=" briefly"
0x004f6fed: jmp    0x1404f7162
0x004f6ff2: mov    r8d,0xf
0x004f6ff8: lea    rdx,[rip+0x116e8a9]        # 0x1416658a8 ; literal="by pulling away"
0x004f6fff: mov    rcx,r13
0x004f7002: call   0x140071040
0x004f7007: mov    rax,QWORD PTR [rsi]
0x004f700a: cmp    DWORD PTR [rax+0x20],0x0
0x004f700e: jne    0x1404f7025
0x004f7010: mov    r8d,0xb
0x004f7016: lea    rdx,[rip+0x116e86b]        # 0x141665888 ; literal=" constantly"
0x004f701d: mov    rcx,r13
0x004f7020: call   0x140071040
0x004f7025: mov    rax,QWORD PTR [rsi]
0x004f7028: cmp    DWORD PTR [rax+0x20],0x1
0x004f702c: jne    0x1404f716a
0x004f7032: mov    r8d,0x8
0x004f7038: lea    rdx,[rip+0x116e859]        # 0x141665898 ; literal=" briefly"
0x004f703f: jmp    0x1404f7162
0x004f7044: cmp    DWORD PTR [rdx+0x20],0x0
0x004f7048: jne    0x1404f705f
0x004f704a: mov    r8d,0xb
0x004f7050: lea    rdx,[rip+0x116e861]        # 0x1416658b8 ; literal="constantly "
0x004f7057: mov    rcx,r13
0x004f705a: call   0x140071040
0x004f705f: mov    rax,QWORD PTR [rsi]
0x004f7062: cmp    DWORD PTR [rax+0x20],0x1
0x004f7066: jne    0x1404f707d
0x004f7068: mov    r8d,0x8
0x004f706e: lea    rdx,[rip+0x116e853]        # 0x1416658c8 ; literal="briefly "
0x004f7075: mov    rcx,r13
0x004f7078: call   0x140071040
0x004f707d: mov    r8d,0xd
0x004f7083: lea    rdx,[rip+0x116e84e]        # 0x1416658d8 ; literal="through touch"
0x004f708a: jmp    0x1404f7162
0x004f708f: cmp    DWORD PTR [rdx+0x20],0x0
0x004f7093: jne    0x1404f70aa
0x004f7095: mov    r8d,0xb
0x004f709b: lea    rdx,[rip+0x116e816]        # 0x1416658b8 ; literal="constantly "
0x004f70a2: mov    rcx,r13
0x004f70a5: call   0x140071040
0x004f70aa: mov    rax,QWORD PTR [rsi]
0x004f70ad: cmp    DWORD PTR [rax+0x20],0x1
0x004f70b1: jne    0x1404f70c8
0x004f70b3: mov    r8d,0x8
0x004f70b9: lea    rdx,[rip+0x116e808]        # 0x1416658c8 ; literal="briefly "
0x004f70c0: mov    rcx,r13
0x004f70c3: call   0x140071040
0x004f70c8: mov    r8d,0x15
0x004f70ce: lea    rdx,[rip+0x116e813]        # 0x1416658e8 ; literal="through a light touch"
0x004f70d5: jmp    0x1404f7162
0x004f70da: cmp    DWORD PTR [rdx+0x20],0x0
0x004f70de: jne    0x1404f70f5
0x004f70e0: mov    r8d,0xb
0x004f70e6: lea    rdx,[rip+0x116e7cb]        # 0x1416658b8 ; literal="constantly "
0x004f70ed: mov    rcx,r13
0x004f70f0: call   0x140071040
0x004f70f5: mov    rax,QWORD PTR [rsi]
0x004f70f8: cmp    DWORD PTR [rax+0x20],0x1
0x004f70fc: jne    0x1404f7113
0x004f70fe: mov    r8d,0x8
0x004f7104: lea    rdx,[rip+0x116e7bd]        # 0x1416658c8 ; literal="briefly "
0x004f710b: mov    rcx,r13
0x004f710e: call   0x140071040
0x004f7113: lea    rdx,[rip+0x116e7e6]        # 0x141665900 ; literal="through visual cues"
0x004f711a: jmp    0x1404f715c
0x004f711c: cmp    DWORD PTR [rdx+0x20],0x0
0x004f7120: jne    0x1404f7137
0x004f7122: mov    r8d,0xb
0x004f7128: lea    rdx,[rip+0x116e789]        # 0x1416658b8 ; literal="constantly "
0x004f712f: mov    rcx,r13
0x004f7132: call   0x140071040
0x004f7137: mov    rax,QWORD PTR [rsi]
0x004f713a: cmp    DWORD PTR [rax+0x20],0x1
0x004f713e: jne    0x1404f7155
0x004f7140: mov    r8d,0x8
0x004f7146: lea    rdx,[rip+0x116e77b]        # 0x1416658c8 ; literal="briefly "
0x004f714d: mov    rcx,r13
0x004f7150: call   0x140071040
0x004f7155: lea    rdx,[rip+0x116e7bc]        # 0x141665918 ; literal="through spoken cues"
0x004f715c: mov    r8d,0x13
0x004f7162: mov    rcx,r13
0x004f7165: call   0x140071040
0x004f716a: mov    r8d,0x3
0x004f7170: lea    rdx,[rip+0x1122421]        # 0x141619598 ; literal=".  "
0x004f7177: mov    rcx,r13
0x004f717a: call   0x140071040
0x004f717f: mov    rax,QWORD PTR [rsi]
0x004f7182: cmp    DWORD PTR [rax+0x4c],0xffffffff
0x004f7186: je     0x1404f72cb
0x004f718c: mov    r8d,0x28
0x004f7192: lea    rdx,[rip+0x116e88f]        # 0x141665a28 ; literal="The dancers imitate the movement of the "
0x004f7199: mov    rcx,r13
0x004f719c: call   0x140071040
0x004f71a1: mov    rax,QWORD PTR [rsi]
0x004f71a4: movsxd rcx,DWORD PTR [rax+0x4c]
0x004f71a8: test   ecx,ecx
0x004f71aa: js     0x1404f72a1
0x004f71b0: mov    rax,QWORD PTR [rip+0x2017d39]        # 0x14250eef0
0x004f71b7: mov    r10,QWORD PTR [rip+0x2017d2a]        # 0x14250eee8
0x004f71be: sub    rax,r10
0x004f71c1: sar    rax,0x3
0x004f71c5: cmp    ecx,eax
0x004f71c7: jge    0x1404f72a1
0x004f71cd: xorps  xmm0,xmm0
0x004f71d0: movups XMMWORD PTR [rbp+0xe0],xmm0
0x004f71d7: mov    r8d,0xf
0x004f71dd: mov    QWORD PTR [rbp+0xf8],r8
0x004f71e4: xor    r9d,r9d
0x004f71e7: mov    QWORD PTR [rbp+0xf0],r9
0x004f71ee: mov    BYTE PTR [rbp+0xe0],r9b
0x004f71f5: test   cx,cx
0x004f71f8: js     0x1404f723f
0x004f71fa: movsx  rdx,cx
0x004f71fe: cmp    rdx,rax
0x004f7201: jae    0x1404f723f
0x004f7203: mov    rdx,QWORD PTR [r10+rdx*8]
0x004f7207: add    rdx,0x20
0x004f720b: lea    rax,[rbp+0xe0]
0x004f7212: cmp    rax,rdx
0x004f7215: je     0x1404f723f
0x004f7217: mov    r8,QWORD PTR [rdx+0x10]
0x004f721b: cmp    QWORD PTR [rdx+0x18],0xf
0x004f7220: jbe    0x1404f7225
0x004f7222: mov    rdx,QWORD PTR [rdx]
0x004f7225: lea    rcx,[rbp+0xe0]
0x004f722c: call   0x140070f00
0x004f7231: mov    r8,QWORD PTR [rbp+0xf8]
0x004f7238: mov    r9,QWORD PTR [rbp+0xf0]
0x004f723f: lea    rdx,[rbp+0xe0]
0x004f7246: cmp    r8,0xf
0x004f724a: cmova  rdx,QWORD PTR [rbp+0xe0]
0x004f7252: mov    r8,r9
0x004f7255: mov    rcx,r13
0x004f7258: call   0x140071040
0x004f725d: nop
0x004f725e: mov    rdx,QWORD PTR [rbp+0xf8]
0x004f7265: cmp    rdx,0xf
0x004f7269: jbe    0x1404f72b6
0x004f726b: inc    rdx
0x004f726e: mov    rcx,QWORD PTR [rbp+0xe0]
0x004f7275: mov    rax,rcx
0x004f7278: cmp    rdx,0x1000
0x004f727f: jb     0x1404f729a
0x004f7281: add    rdx,0x27
0x004f7285: mov    rcx,QWORD PTR [rcx-0x8]
0x004f7289: sub    rax,rcx
0x004f728c: add    rax,0xfffffffffffffff8
0x004f7290: cmp    rax,0x1f
0x004f7294: ja     0x1404f8435
0x004f729a: call   0x1415530d0
0x004f729f: jmp    0x1404f72b6
0x004f72a1: mov    r8d,0x8
0x004f72a7: lea    rdx,[rip+0x119d16a]        # 0x141694418 ; literal="creature"
0x004f72ae: mov    rcx,r13
0x004f72b1: call   0x140071040
0x004f72b6: mov    r8d,0x3
0x004f72bc: lea    rdx,[rip+0x11222d5]        # 0x141619598 ; literal=".  "
0x004f72c3: mov    rcx,r13
0x004f72c6: call   0x140071040
0x004f72cb: mov    rdx,QWORD PTR [rsi]
0x004f72ce: mov    rax,QWORD PTR [rdx+0x28]
0x004f72d2: mov    rcx,QWORD PTR [rdx+0x30]
0x004f72d6: sub    rcx,rax
0x004f72d9: sar    rcx,0x2
0x004f72dd: xor    edi,edi
0x004f72df: test   rcx,rcx
0x004f72e2: je     0x1404f7421
0x004f72e8: mov    r12d,edi
0x004f72eb: mov    rcx,QWORD PTR [rdx+0x30]
0x004f72ef: nop
0x004f72f0: cmp    rax,rcx
0x004f72f3: jae    0x1404f7318
0x004f72f5: mov    r8d,DWORD PTR [rax]
0x004f72f8: test   r8d,r8d
0x004f72fb: je     0x1404f730f
0x004f72fd: sub    r8d,0x1
0x004f7301: je     0x1404f730f
0x004f7303: sub    r8d,0x1
0x004f7307: je     0x1404f730f
0x004f7309: cmp    r8d,0x1
0x004f730d: jne    0x1404f7312
0x004f730f: inc    r12d
0x004f7312: add    rax,0x4
0x004f7316: jmp    0x1404f72f0
0x004f7318: test   r12d,r12d
0x004f731b: jle    0x1404f741c
0x004f7321: mov    r8d,0x1a
0x004f7327: lea    rdx,[rip+0x116ef3a]        # 0x141666268 ; literal="There are partner changes "
0x004f732e: mov    rcx,r13
0x004f7331: call   0x140071040
0x004f7336: mov    rdi,QWORD PTR [rsi]
0x004f7339: mov    rbx,QWORD PTR [rdi+0x28]
0x004f733d: mov    rdi,QWORD PTR [rdi+0x30]
0x004f7341: cmp    rbx,rdi
0x004f7344: jae    0x1404f7405
0x004f734a: mov    edx,DWORD PTR [rbx]
0x004f734c: mov    ecx,edx
0x004f734e: test   edx,edx
0x004f7350: je     0x1404f7365
0x004f7352: sub    ecx,0x1
0x004f7355: je     0x1404f7365
0x004f7357: sub    ecx,0x1
0x004f735a: je     0x1404f7365
0x004f735c: cmp    ecx,0x1
0x004f735f: jne    0x1404f73fc
0x004f7365: dec    r12d
0x004f7368: test   edx,edx
0x004f736a: je     0x1404f73a8
0x004f736c: sub    edx,0x1
0x004f736f: je     0x1404f7399
0x004f7371: sub    edx,0x1
0x004f7374: je     0x1404f738a
0x004f7376: cmp    edx,0x1
0x004f7379: jne    0x1404f73bd
0x004f737b: mov    r8d,0x2a
0x004f7381: lea    rdx,[rip+0x116e670]        # 0x1416659f8 ; literal="with the lead turning out counterclockwise"
0x004f7388: jmp    0x1404f73b5
0x004f738a: mov    r8d,0x23
0x004f7390: lea    rdx,[rip+0x116e639]        # 0x1416659d0 ; literal="with the lead turning out clockwise"
0x004f7397: jmp    0x1404f73b5
0x004f7399: mov    r8d,0x37
0x004f739f: lea    rdx,[rip+0x116e5f2]        # 0x141665998 ; literal="with the lead advancing against the main line of motion"
0x004f73a6: jmp    0x1404f73b5
0x004f73a8: mov    r8d,0x35
0x004f73ae: lea    rdx,[rip+0x116e5ab]        # 0x141665960 ; literal="with the lead advancing along the main line of motion"
0x004f73b5: mov    rcx,r13
0x004f73b8: call   0x140071040
0x004f73bd: cmp    r12d,0x2
0x004f73c1: jl     0x1404f73e1
0x004f73c3: mov    r8d,0x1
0x004f73c9: lea    rdx,[rip+0x1121f94]        # 0x141619364 ; literal=","
0x004f73d0: mov    rcx,r13
0x004f73d3: call   0x140071040
0x004f73d8: add    rbx,0x4
0x004f73dc: jmp    0x1404f7341
0x004f73e1: cmp    r12d,0x1
0x004f73e5: jne    0x1404f73fc
0x004f73e7: mov    r8d,0x5
0x004f73ed: lea    rdx,[rip+0x110cf98]        # 0x14160438c ; literal=" and "
0x004f73f4: mov    rcx,r13
0x004f73f7: call   0x140071040
0x004f73fc: add    rbx,0x4
0x004f7400: jmp    0x1404f7341
0x004f7405: mov    r8d,0x3
0x004f740b: lea    rdx,[rip+0x1122186]        # 0x141619598 ; literal=".  "
0x004f7412: mov    rcx,r13
0x004f7415: call   0x140071040
0x004f741a: xor    edi,edi
0x004f741c: mov    r12,QWORD PTR [rsp+0x50]
0x004f7421: mov    rcx,QWORD PTR [rsi]
0x004f7424: mov    rax,QWORD PTR [rcx+0x58]
0x004f7428: sub    rax,QWORD PTR [rcx+0x50]
0x004f742c: sar    rax,0x2
0x004f7430: test   rax,rax
0x004f7433: jne    0x1404f7441
0x004f7435: cmp    DWORD PTR [rcx+0x14],0xffffffff
0x004f7439: je     0x1404f841f
0x004f743f: jmp    0x1404f7447
0x004f7441: cmp    DWORD PTR [rcx+0x14],0xffffffff
0x004f7445: je     0x1404f747f
0x004f7447: mov    r8d,0x1a
0x004f744d: lea    rdx,[rip+0x116ee34]        # 0x141666288 ; literal="There is a basic movement "
0x004f7454: mov    rcx,r13
0x004f7457: call   0x140071040
0x004f745c: mov    rax,QWORD PTR [rsi]
0x004f745f: movsxd rcx,DWORD PTR [rax+0x14]
0x004f7463: mov    rdx,QWORD PTR [r12+0x160]
0x004f746b: mov    r9d,DWORD PTR [rbp-0x40]
0x004f746f: mov    r8d,DWORD PTR [rbp-0x38]
0x004f7473: mov    rdx,QWORD PTR [rdx+rcx*8]
0x004f7477: mov    rcx,r13
0x004f747a: call   0x1404f3980
0x004f747f: mov    r10,QWORD PTR [rsi]
0x004f7482: mov    r11,QWORD PTR [r10+0x50]
0x004f7486: mov    r9,QWORD PTR [r10+0x58]
0x004f748a: sub    r9,r11
0x004f748d: sar    r9,0x2
0x004f7491: test   r9,r9
0x004f7494: je     0x1404f841f
0x004f749a: mov    ebx,edi
0x004f749c: mov    r12d,edi
0x004f749f: xor    ecx,ecx
0x004f74a1: mov    DWORD PTR [rsp+0x38],ecx
0x004f74a5: xor    r8d,r8d
0x004f74a8: xor    edx,edx
0x004f74aa: lea    r14,[rip+0xffffffffffb08b4f]        # 0x140000000
0x004f74b1: cmp    DWORD PTR [r11+rdx*1],0x5
0x004f74b6: jne    0x1404f74fd
0x004f74b8: mov    rax,QWORD PTR [r10+0x68]
0x004f74bc: movsxd rcx,DWORD PTR [rdx+rax*1]
0x004f74c0: cmp    ecx,0xffffffff
0x004f74c3: je     0x1404f74f1
0x004f74c5: cmp    ecx,0x2d
0x004f74c8: ja     0x1404f74e9
0x004f74ca: movzx  eax,BYTE PTR [r14+rcx*1+0x4f8884]
0x004f74d3: mov    ecx,DWORD PTR [r14+rax*4+0x4f8878]
0x004f74db: add    rcx,r14
0x004f74de: jmp    rcx
0x004f74e0: inc    r12d
0x004f74e3: mov    ecx,DWORD PTR [rsp+0x38]
0x004f74e7: jmp    0x1404f74ff
0x004f74e9: inc    edi
0x004f74eb: mov    ecx,DWORD PTR [rsp+0x38]
0x004f74ef: jmp    0x1404f74ff
0x004f74f1: mov    ecx,DWORD PTR [rsp+0x38]
0x004f74f5: inc    ecx
0x004f74f7: mov    DWORD PTR [rsp+0x38],ecx
0x004f74fb: jmp    0x1404f74ff
0x004f74fd: inc    ebx
0x004f74ff: inc    r8d
0x004f7502: add    rdx,0x4
0x004f7506: movsxd rax,r8d
0x004f7509: cmp    rax,r9
0x004f750c: jb     0x1404f74b1
0x004f750e: mov    DWORD PTR [rsp+0x64],edi
0x004f7512: mov    DWORD PTR [rsp+0x70],ebx
0x004f7516: test   ebx,ebx
0x004f7518: mov    r14,QWORD PTR [rsp+0x40]
0x004f751d: jg     0x1404f7530
0x004f751f: test   ecx,ecx
0x004f7521: jg     0x1404f7530
0x004f7523: test   edi,edi
0x004f7525: jg     0x1404f7530
0x004f7527: test   r12d,r12d
0x004f752a: jle    0x1404f841f
0x004f7530: mov    r8d,0x4
0x004f7536: lea    rdx,[rip+0x116ed67]        # 0x1416662a4 ; literal="This"
0x004f753d: mov    rcx,r13
0x004f7540: call   0x140071040
0x004f7545: test   ebx,ebx
0x004f7547: jne    0x1404f7568
0x004f7549: cmp    DWORD PTR [rsp+0x38],ebx
0x004f754d: jne    0x1404f7568
0x004f754f: test   edi,edi
0x004f7551: jne    0x1404f7568
0x004f7553: mov    r8d,0xb
0x004f7559: lea    rdx,[rip+0x116ed50]        # 0x1416662b0 ; literal=" section is"
0x004f7560: mov    rcx,r13
0x004f7563: call   0x140071040
0x004f7568: xor    edi,edi
0x004f756a: mov    rdx,QWORD PTR [rsi]
0x004f756d: mov    rax,QWORD PTR [rdx+0x58]
0x004f7571: sub    rax,QWORD PTR [rdx+0x50]
0x004f7575: sar    rax,0x2
0x004f7579: test   rax,rax
0x004f757c: je     0x1404f78bf
0x004f7582: xor    ebx,ebx
0x004f7584: mov    r14d,DWORD PTR [rsp+0x70]
0x004f7589: mov    r15d,DWORD PTR [rsp+0x64]
0x004f758e: xchg   ax,ax
0x004f7590: mov    rax,QWORD PTR [rdx+0x50]
0x004f7594: cmp    DWORD PTR [rbx+rax*1],0x5
0x004f7598: jne    0x1404f7891
0x004f759e: mov    rax,QWORD PTR [rdx+0x68]
0x004f75a2: movsxd rcx,DWORD PTR [rbx+rax*1]
0x004f75a6: cmp    ecx,0xffffffff
0x004f75a9: je     0x1404f7891
0x004f75af: cmp    ecx,0x2d
0x004f75b2: ja     0x1404f7891
0x004f75b8: lea    rdx,[rip+0xffffffffffb08a41]        # 0x140000000
0x004f75bf: mov    ecx,DWORD PTR [rdx+rcx*4+0x4f88b4]
0x004f75c6: add    rcx,rdx
0x004f75c9: jmp    rcx
0x004f75cb: mov    r8d,0x9
0x004f75d1: lea    rdx,[rip+0x116dd38]        # 0x141665310 ; literal=" graceful"
0x004f75d8: jmp    0x1404f7845
0x004f75dd: mov    r8d,0x7
0x004f75e3: lea    rdx,[rip+0x116dd36]        # 0x141665320 ; literal=" serene"
0x004f75ea: jmp    0x1404f7845
0x004f75ef: mov    r8d,0x5
0x004f75f5: lea    rdx,[rip+0x116dd2c]        # 0x141665328 ; literal=" calm"
0x004f75fc: jmp    0x1404f7845
0x004f7601: mov    r8d,0xa
0x004f7607: lea    rdx,[rip+0x116dd22]        # 0x141665330 ; literal=" grotesque"
0x004f760e: jmp    0x1404f7845
0x004f7613: mov    r8d,0x6
0x004f7619: lea    rdx,[rip+0x116dd1c]        # 0x14166533c ; literal=" crude"
0x004f7620: jmp    0x1404f7845
0x004f7625: lea    rdx,[rip+0x116dd1c]        # 0x141665348 ; literal=" refined"
0x004f762c: jmp    0x1404f783f
0x004f7631: mov    r8d,0xc
0x004f7637: lea    rdx,[rip+0x116dd1a]        # 0x141665358 ; literal=" understated"
0x004f763e: jmp    0x1404f7845
0x004f7643: mov    r8d,0x9
0x004f7649: lea    rdx,[rip+0x116dd18]        # 0x141665368 ; literal=" delicate"
0x004f7650: jmp    0x1404f7845
0x004f7655: mov    r8d,0xa
0x004f765b: lea    rdx,[rip+0x116dd16]        # 0x141665378 ; literal=" elaborate"
0x004f7662: jmp    0x1404f7845
0x004f7667: mov    r8d,0xb
0x004f766d: lea    rdx,[rip+0x116dd14]        # 0x141665388 ; literal=" expressive"
0x004f7674: jmp    0x1404f7845
0x004f7679: mov    r8d,0x7
0x004f767f: lea    rdx,[rip+0x116dd12]        # 0x141665398 ; literal=" strong"
0x004f7686: jmp    0x1404f7845
0x004f768b: mov    r8d,0xb
0x004f7691: lea    rdx,[rip+0x116d9b0]        # 0x141665048 ; literal=" weightless"
0x004f7698: jmp    0x1404f7845
0x004f769d: mov    r8d,0x6
0x004f76a3: lea    rdx,[rip+0x116d9aa]        # 0x141665054 ; literal=" fluid"
0x004f76aa: jmp    0x1404f7845
0x004f76af: mov    r8d,0xb
0x004f76b5: lea    rdx,[rip+0x116d9a4]        # 0x141665060 ; literal=" undulating"
0x004f76bc: jmp    0x1404f7845
0x004f76c1: mov    r8d,0x5
0x004f76c7: lea    rdx,[rip+0x116d99e]        # 0x14166506c ; literal=" soft"
0x004f76ce: jmp    0x1404f7845
0x004f76d3: lea    rdx,[rip+0x116d99e]        # 0x141665078 ; literal=" jerking"
0x004f76da: jmp    0x1404f783f
0x004f76df: mov    r8d,0xc
0x004f76e5: lea    rdx,[rip+0x116d99c]        # 0x141665088 ; literal=" sharp-edged"
0x004f76ec: jmp    0x1404f7845
0x004f76f1: mov    r8d,0xf
0x004f76f7: lea    rdx,[rip+0x116d99a]        # 0x141665098 ; literal=" straight-lined"
0x004f76fe: jmp    0x1404f7845
0x004f7703: mov    r8d,0xa
0x004f7709: lea    rdx,[rip+0x116da00]        # 0x141665110 ; literal=" energetic"
0x004f7710: jmp    0x1404f7845
0x004f7715: mov    r8d,0xb
0x004f771b: lea    rdx,[rip+0x116d9fe]        # 0x141665120 ; literal=" passionate"
0x004f7722: jmp    0x1404f7845
0x004f7727: mov    r8d,0xa
0x004f772d: lea    rdx,[rip+0x116d9fc]        # 0x141665130 ; literal=" vivacious"
0x004f7734: jmp    0x1404f7845
0x004f7739: mov    r8d,0x7
0x004f773f: lea    rdx,[rip+0x116d9fa]        # 0x141665140 ; literal=" joyous"
0x004f7746: jmp    0x1404f7845
0x004f774b: mov    r8d,0x6
0x004f7751: lea    rdx,[rip+0x116d9f0]        # 0x141665148 ; literal=" proud"
0x004f7758: jmp    0x1404f7845
0x004f775d: mov    r8d,0xb
0x004f7763: lea    rdx,[rip+0x116d9e6]        # 0x141665150 ; literal=" flamboyant"
0x004f776a: jmp    0x1404f7845
0x004f776f: mov    r8d,0x7
0x004f7775: lea    rdx,[rip+0x116d9e4]        # 0x141665160 ; literal=" lively"
0x004f777c: jmp    0x1404f7845
0x004f7781: mov    r8d,0x9
0x004f7787: lea    rdx,[rip+0x116d9da]        # 0x141665168 ; literal=" spirited"
0x004f778e: jmp    0x1404f7845
0x004f7793: mov    r8d,0x9
0x004f7799: lea    rdx,[rip+0x116d9d8]        # 0x141665178 ; literal=" vigorous"
0x004f77a0: jmp    0x1404f7845
0x004f77a5: lea    rdx,[rip+0x116d9dc]        # 0x141665188 ; literal=" intense"
0x004f77ac: jmp    0x1404f783f
0x004f77b1: mov    r8d,0xb
0x004f77b7: lea    rdx,[rip+0x116d9da]        # 0x141665198 ; literal=" aggressive"
0x004f77be: jmp    0x1404f7845
0x004f77c3: mov    r8d,0x9
0x004f77c9: lea    rdx,[rip+0x116d9d8]        # 0x1416651a8 ; literal=" powerful"
0x004f77d0: jmp    0x1404f7845
0x004f77d2: mov    r8d,0x9
0x004f77d8: lea    rdx,[rip+0x116d9d9]        # 0x1416651b8 ; literal=" sluggish"
0x004f77df: jmp    0x1404f7845
0x004f77e1: lea    rdx,[rip+0x116d9e0]        # 0x1416651c8 ; literal=" relaxed"
0x004f77e8: jmp    0x1404f783f
0x004f77ea: lea    rdx,[rip+0x116d9e7]        # 0x1416651d8 ; literal=" passive"
0x004f77f1: jmp    0x1404f783f
0x004f77f3: mov    r8d,0x7
0x004f77f9: lea    rdx,[rip+0x116d9e8]        # 0x1416651e8 ; literal=" subtle"
0x004f7800: jmp    0x1404f7845
0x004f7802: lea    rdx,[rip+0x116d9e7]        # 0x1416651f0 ; literal=" sensual"
0x004f7809: jmp    0x1404f783f
0x004f780b: mov    r8d,0xa
0x004f7811: lea    rdx,[rip+0x116d9e8]        # 0x141665200 ; literal=" debauched"
0x004f7818: jmp    0x1404f7845
0x004f781a: mov    r8d,0x9
0x004f7820: lea    rdx,[rip+0x116dd79]        # 0x1416655a0 ; literal=" twisting"
0x004f7827: jmp    0x1404f7845
0x004f7829: mov    r8d,0xa
0x004f782f: lea    rdx,[rip+0x116dd7a]        # 0x1416655b0 ; literal=" sprightly"
0x004f7836: jmp    0x1404f7845
0x004f7838: lea    rdx,[rip+0x116dd81]        # 0x1416655c0 ; literal=" sinuous"
0x004f783f: mov    r8d,0x8
0x004f7845: mov    rcx,r13
0x004f7848: call   0x140071040
0x004f784d: test   r14d,r14d
0x004f7850: jne    0x1404f7891
0x004f7852: cmp    DWORD PTR [rsp+0x38],r14d
0x004f7857: jne    0x1404f7891
0x004f7859: test   r15d,r15d
0x004f785c: jne    0x1404f7891
0x004f785e: cmp    r12d,0x3
0x004f7862: jl     0x1404f7873
0x004f7864: mov    r8d,0x1
0x004f786a: lea    rdx,[rip+0x1121af3]        # 0x141619364 ; literal=","
0x004f7871: jmp    0x1404f7886
0x004f7873: cmp    r12d,0x2
0x004f7877: jne    0x1404f788e
0x004f7879: mov    r8d,0x4
0x004f787f: lea    rdx,[rip+0x1112266]        # 0x141609aec ; literal=" and"
0x004f7886: mov    rcx,r13
0x004f7889: call   0x140071040
0x004f788e: dec    r12d
0x004f7891: inc    edi
0x004f7893: add    rbx,0x4
0x004f7897: mov    rdx,QWORD PTR [rsi]
0x004f789a: mov    rcx,QWORD PTR [rdx+0x58]
0x004f789e: sub    rcx,QWORD PTR [rdx+0x50]
0x004f78a2: sar    rcx,0x2
0x004f78a6: movsxd rax,edi
0x004f78a9: cmp    rax,rcx
0x004f78ac: jb     0x1404f7590
0x004f78b2: mov    r14,QWORD PTR [rsp+0x40]
0x004f78b7: mov    r15,QWORD PTR [rbp-0x80]
0x004f78bb: mov    ebx,DWORD PTR [rsp+0x70]
0x004f78bf: test   ebx,ebx
0x004f78c1: jg     0x1404f78d5
0x004f78c3: cmp    DWORD PTR [rsp+0x38],0x0
0x004f78c8: jg     0x1404f78d5
0x004f78ca: cmp    DWORD PTR [rsp+0x64],0x0
0x004f78cf: jle    0x1404f840a
0x004f78d5: mov    r8d,0x1a
0x004f78db: lea    rdx,[rip+0x116e9de]        # 0x1416662c0 ; literal=" section is punctuated by "
0x004f78e2: mov    rcx,r13
0x004f78e5: call   0x140071040
0x004f78ea: xor    r12d,r12d
0x004f78ed: mov    rdx,QWORD PTR [rsi]
0x004f78f0: mov    rax,QWORD PTR [rdx+0x58]
0x004f78f4: sub    rax,QWORD PTR [rdx+0x50]
0x004f78f8: sar    rax,0x2
0x004f78fc: test   rax,rax
0x004f78ff: je     0x1404f818e
0x004f7905: mov    edi,ebx
0x004f7907: mov    r15d,r12d
0x004f790a: mov    r14d,DWORD PTR [rsp+0x6c]
0x004f790f: nop
0x004f7910: mov    rax,QWORD PTR [rdx+0x50]
0x004f7914: cmp    DWORD PTR [rax+r12*4],0x5
0x004f7919: je     0x1404f8160
0x004f791f: dec    edi
0x004f7921: mov    DWORD PTR [rbp+0xc0],edi
0x004f7927: mov    rax,QWORD PTR [rdx+0x98]
0x004f792e: test   BYTE PTR [rax+r12*4],0xc0
0x004f7933: je     0x1404f794a
0x004f7935: mov    r8d,0x4
0x004f793b: lea    rdx,[rip+0x110c7c2]        # 0x141604104 ; literal="the "
0x004f7942: mov    rcx,r13
0x004f7945: call   0x140071040
0x004f794a: mov    rax,QWORD PTR [rsi]
0x004f794d: mov    rcx,QWORD PTR [rax+0x68]
0x004f7951: movsxd rax,DWORD PTR [rcx+r12*4]
0x004f7955: lea    rbx,[rip+0xffffffffffb086a4]        # 0x140000000
0x004f795c: cmp    eax,0x2d
0x004f795f: ja     0x1404f7c6b
0x004f7965: mov    ecx,DWORD PTR [rbx+rax*4+0x4f896c]
0x004f796c: add    rcx,rbx
0x004f796f: jmp    rcx
0x004f7971: mov    r8d,0x8
0x004f7977: lea    rdx,[rip+0x116e6aa]        # 0x141666028 ; literal="graceful"
0x004f797e: jmp    0x1404f7c63
0x004f7983: mov    r8d,0x6
0x004f7989: lea    rdx,[rip+0x116e6a4]        # 0x141666034 ; literal="serene"
0x004f7990: jmp    0x1404f7c63
0x004f7995: mov    r8d,0x4
0x004f799b: lea    rdx,[rip+0x116e69a]        # 0x14166603c ; literal="calm"
0x004f79a2: jmp    0x1404f7c63
0x004f79a7: mov    r8d,0x9
0x004f79ad: lea    rdx,[rip+0x116e694]        # 0x141666048 ; literal="grotesque"
0x004f79b4: jmp    0x1404f7c63
0x004f79b9: mov    r8d,0x5
0x004f79bf: lea    rdx,[rip+0x116e68e]        # 0x141666054 ; literal="crude"
0x004f79c6: jmp    0x1404f7c63
0x004f79cb: lea    rdx,[rip+0x116e68e]        # 0x141666060 ; literal="refined"
0x004f79d2: jmp    0x1404f7c5d
0x004f79d7: mov    r8d,0xb
0x004f79dd: lea    rdx,[rip+0x116e684]        # 0x141666068 ; literal="understated"
0x004f79e4: jmp    0x1404f7c63
0x004f79e9: mov    r8d,0x8
0x004f79ef: lea    rdx,[rip+0x116e682]        # 0x141666078 ; literal="delicate"
0x004f79f6: jmp    0x1404f7c63
0x004f79fb: mov    r8d,0x9
0x004f7a01: lea    rdx,[rip+0x116e680]        # 0x141666088 ; literal="elaborate"
0x004f7a08: jmp    0x1404f7c63
0x004f7a0d: mov    r8d,0xa
0x004f7a13: lea    rdx,[rip+0x116e67e]        # 0x141666098 ; literal="expressive"
0x004f7a1a: jmp    0x1404f7c63
0x004f7a1f: mov    r8d,0x6
0x004f7a25: lea    rdx,[rip+0x116e678]        # 0x1416660a4 ; literal="strong"
0x004f7a2c: jmp    0x1404f7c63
0x004f7a31: mov    r8d,0x5
0x004f7a37: lea    rdx,[rip+0x116e66e]        # 0x1416660ac ; literal="large"
0x004f7a3e: jmp    0x1404f7c63
0x004f7a43: mov    r8d,0xa
0x004f7a49: lea    rdx,[rip+0x116e668]        # 0x1416660b8 ; literal="weightless"
0x004f7a50: jmp    0x1404f7c63
0x004f7a55: mov    r8d,0x5
0x004f7a5b: lea    rdx,[rip+0x116e662]        # 0x1416660c4 ; literal="fluid"
0x004f7a62: jmp    0x1404f7c63
0x004f7a67: mov    r8d,0xa
0x004f7a6d: lea    rdx,[rip+0x116e65c]        # 0x1416660d0 ; literal="undulating"
0x004f7a74: jmp    0x1404f7c63
0x004f7a79: mov    r8d,0x4
0x004f7a7f: lea    rdx,[rip+0x116e656]        # 0x1416660dc ; literal="soft"
0x004f7a86: jmp    0x1404f7c63
0x004f7a8b: lea    rdx,[rip+0x116e656]        # 0x1416660e8 ; literal="jerking"
0x004f7a92: jmp    0x1404f7c5d
0x004f7a97: mov    r8d,0xb
0x004f7a9d: lea    rdx,[rip+0x116e64c]        # 0x1416660f0 ; literal="sharp-edged"
0x004f7aa4: jmp    0x1404f7c63
0x004f7aa9: mov    r8d,0xe
0x004f7aaf: lea    rdx,[rip+0x116e64a]        # 0x141666100 ; literal="straight-lined"
0x004f7ab6: jmp    0x1404f7c63
0x004f7abb: mov    r8d,0x4
0x004f7ac1: lea    rdx,[rip+0x116e648]        # 0x141666110 ; literal="high"
0x004f7ac8: jmp    0x1404f7c63
0x004f7acd: mov    r8d,0x3
0x004f7ad3: lea    rdx,[rip+0x116e63e]        # 0x141666118 ; literal="low"
0x004f7ada: jmp    0x1404f7c63
0x004f7adf: mov    r8d,0x11
0x004f7ae5: lea    rdx,[rip+0x116e634]        # 0x141666120 ; literal="loudly percussive"
0x004f7aec: jmp    0x1404f7c63
0x004f7af1: mov    r8d,0x11
0x004f7af7: lea    rdx,[rip+0x116e63a]        # 0x141666138 ; literal="softly percussive"
0x004f7afe: jmp    0x1404f7c63
0x004f7b03: lea    rdx,[rip+0x116e646]        # 0x141666150 ; literal="aborted"
0x004f7b0a: jmp    0x1404f7c5d
0x004f7b0f: mov    r8d,0x12
0x004f7b15: lea    rdx,[rip+0x116e63c]        # 0x141666158 ; literal="partially realized"
0x004f7b1c: jmp    0x1404f7c63
0x004f7b21: mov    r8d,0x9
0x004f7b27: lea    rdx,[rip+0x116e642]        # 0x141666170 ; literal="energetic"
0x004f7b2e: jmp    0x1404f7c63
0x004f7b33: mov    r8d,0xa
0x004f7b39: lea    rdx,[rip+0x1126ba0]        # 0x14161e6e0 ; literal="passionate"
0x004f7b40: jmp    0x1404f7c63
0x004f7b45: mov    r8d,0x9
0x004f7b4b: lea    rdx,[rip+0x116e62e]        # 0x141666180 ; literal="vivacious"
0x004f7b52: jmp    0x1404f7c63
0x004f7b57: mov    r8d,0x6
0x004f7b5d: lea    rdx,[rip+0x116e628]        # 0x14166618c ; literal="joyous"
0x004f7b64: jmp    0x1404f7c63
0x004f7b69: mov    r8d,0x5
0x004f7b6f: lea    rdx,[rip+0x1126b4e]        # 0x14161e6c4 ; literal="proud"
0x004f7b76: jmp    0x1404f7c63
0x004f7b7b: mov    r8d,0xa
0x004f7b81: lea    rdx,[rip+0x116e610]        # 0x141666198 ; literal="flamboyant"
0x004f7b88: jmp    0x1404f7c63
0x004f7b8d: mov    r8d,0x6
0x004f7b93: lea    rdx,[rip+0x116e60a]        # 0x1416661a4 ; literal="lively"
0x004f7b9a: jmp    0x1404f7c63
0x004f7b9f: mov    r8d,0x8
0x004f7ba5: lea    rdx,[rip+0x116e604]        # 0x1416661b0 ; literal="spirited"
0x004f7bac: jmp    0x1404f7c63
0x004f7bb1: mov    r8d,0x8
0x004f7bb7: lea    rdx,[rip+0x116e602]        # 0x1416661c0 ; literal="vigorous"
0x004f7bbe: jmp    0x1404f7c63
0x004f7bc3: lea    rdx,[rip+0x116e2ae]        # 0x141665e78 ; literal="intense"
0x004f7bca: jmp    0x1404f7c5d
0x004f7bcf: mov    r8d,0xa
0x004f7bd5: lea    rdx,[rip+0x116e2a4]        # 0x141665e80 ; literal="aggressive"
0x004f7bdc: jmp    0x1404f7c63
0x004f7be1: mov    r8d,0x8
0x004f7be7: lea    rdx,[rip+0x116e2a2]        # 0x141665e90 ; literal="powerful"
0x004f7bee: jmp    0x1404f7c63
0x004f7bf0: mov    r8d,0x8
0x004f7bf6: lea    rdx,[rip+0x116e2a3]        # 0x141665ea0 ; literal="sluggish"
0x004f7bfd: jmp    0x1404f7c63
0x004f7bff: lea    rdx,[rip+0x116e2aa]        # 0x141665eb0 ; literal="relaxed"
0x004f7c06: jmp    0x1404f7c5d
0x004f7c08: lea    rdx,[rip+0x116e2a9]        # 0x141665eb8 ; literal="passive"
0x004f7c0f: jmp    0x1404f7c5d
0x004f7c11: mov    r8d,0x6
0x004f7c17: lea    rdx,[rip+0x116e2a2]        # 0x141665ec0 ; literal="subtle"
0x004f7c1e: jmp    0x1404f7c63
0x004f7c20: lea    rdx,[rip+0x116e2a1]        # 0x141665ec8 ; literal="sensual"
0x004f7c27: jmp    0x1404f7c5d
0x004f7c29: mov    r8d,0x9
0x004f7c2f: lea    rdx,[rip+0x116e29a]        # 0x141665ed0 ; literal="debauched"
0x004f7c36: jmp    0x1404f7c63
0x004f7c38: mov    r8d,0x8
0x004f7c3e: lea    rdx,[rip+0x116e29b]        # 0x141665ee0 ; literal="twisting"
0x004f7c45: jmp    0x1404f7c63
0x004f7c47: mov    r8d,0x9
0x004f7c4d: lea    rdx,[rip+0x116e29c]        # 0x141665ef0 ; literal="sprightly"
0x004f7c54: jmp    0x1404f7c63
0x004f7c56: lea    rdx,[rip+0x116e2a3]        # 0x141665f00 ; literal="sinuous"
0x004f7c5d: mov    r8d,0x7
0x004f7c63: mov    rcx,r13
0x004f7c66: call   0x140071040
0x004f7c6b: mov    rax,QWORD PTR [rsi]
0x004f7c6e: mov    rcx,QWORD PTR [rax+0x68]
0x004f7c72: cmp    DWORD PTR [rcx+r12*4],0xffffffff
0x004f7c77: je     0x1404f7c8e
0x004f7c79: mov    r8d,0x1
0x004f7c7f: lea    rdx,[rip+0x110bd6a]        # 0x1416039f0 ; literal=" "
0x004f7c86: mov    rcx,r13
0x004f7c89: call   0x140071040
0x004f7c8e: mov    r8,QWORD PTR [rsi]
0x004f7c91: mov    rcx,QWORD PTR [r8+0x50]
0x004f7c95: mov    edx,DWORD PTR [rcx+r12*4]
0x004f7c99: sub    edx,0x6
0x004f7c9c: je     0x1404f7cd5
0x004f7c9e: sub    edx,0x7
0x004f7ca1: je     0x1404f7cb1
0x004f7ca3: sub    edx,0x1
0x004f7ca6: je     0x1404f7cb1
0x004f7ca8: cmp    edx,0x1
0x004f7cab: jne    0x1404f7dad
0x004f7cb1: mov    rax,QWORD PTR [r8+0x80]
0x004f7cb8: cmp    DWORD PTR [rax+r12*4],0x2
0x004f7cbd: jne    0x1404f7dad
0x004f7cc3: mov    r8d,0x9
0x004f7cc9: lea    rdx,[rip+0x116e280]        # 0x141665f50 ; literal="repeated "
0x004f7cd0: jmp    0x1404f7da5
0x004f7cd5: mov    rax,QWORD PTR [r8+0x80]
0x004f7cdc: cmp    DWORD PTR [rax+r12*4],0x0
0x004f7ce1: jge    0x1404f7cf8
0x004f7ce3: mov    r8d,0x11
0x004f7ce9: lea    rdx,[rip+0x116e218]        # 0x141665f08 ; literal="counterclockwise "
0x004f7cf0: mov    rcx,r13
0x004f7cf3: call   0x140071040
0x004f7cf8: mov    rax,QWORD PTR [rsi]
0x004f7cfb: mov    rcx,QWORD PTR [rax+0x80]
0x004f7d02: cmp    DWORD PTR [rcx+r12*4],0x0
0x004f7d07: jle    0x1404f7d1e
0x004f7d09: mov    r8d,0xa
0x004f7d0f: lea    rdx,[rip+0x116e20a]        # 0x141665f20 ; literal="clockwise "
0x004f7d16: mov    rcx,r13
0x004f7d19: call   0x140071040
0x004f7d1e: mov    rax,QWORD PTR [rsi]
0x004f7d21: mov    rcx,QWORD PTR [rax+0x80]
0x004f7d28: mov    eax,DWORD PTR [rcx+r12*4]
0x004f7d2c: neg    eax
0x004f7d2e: cmovs  eax,DWORD PTR [rcx+r12*4]
0x004f7d33: cmp    eax,0x2d
0x004f7d36: jne    0x1404f7d4d
0x004f7d38: mov    r8d,0x7
0x004f7d3e: lea    rdx,[rip+0x116e1eb]        # 0x141665f30 ; literal="eighth "
0x004f7d45: mov    rcx,r13
0x004f7d48: call   0x140071040
0x004f7d4d: mov    rax,QWORD PTR [rsi]
0x004f7d50: mov    rcx,QWORD PTR [rax+0x80]
0x004f7d57: mov    eax,DWORD PTR [rcx+r12*4]
0x004f7d5b: neg    eax
0x004f7d5d: cmovs  eax,DWORD PTR [rcx+r12*4]
0x004f7d62: cmp    eax,0x5a
0x004f7d65: jne    0x1404f7d7c
0x004f7d67: mov    r8d,0x8
0x004f7d6d: lea    rdx,[rip+0x116e1c4]        # 0x141665f38 ; literal="quarter "
0x004f7d74: mov    rcx,r13
0x004f7d77: call   0x140071040
0x004f7d7c: mov    rax,QWORD PTR [rsi]
0x004f7d7f: mov    rcx,QWORD PTR [rax+0x80]
0x004f7d86: mov    eax,DWORD PTR [rcx+r12*4]
0x004f7d8a: neg    eax
0x004f7d8c: cmovs  eax,DWORD PTR [rcx+r12*4]
0x004f7d91: cmp    eax,0xb4
0x004f7d96: jne    0x1404f7dad
0x004f7d98: mov    r8d,0x5
0x004f7d9e: lea    rdx,[rip+0x116e19f]        # 0x141665f44 ; literal="half "
0x004f7da5: mov    rcx,r13
0x004f7da8: call   0x140071040
0x004f7dad: mov    rax,QWORD PTR [rsi]
0x004f7db0: mov    rcx,QWORD PTR [rax+0x50]
0x004f7db4: mov    eax,DWORD PTR [rcx+r12*4]
0x004f7db8: add    eax,0xfffffffb
0x004f7dbb: cmp    eax,0x1c
0x004f7dbe: ja     0x1404f7fc7
0x004f7dc4: cdqe
0x004f7dc6: mov    ecx,DWORD PTR [rbx+rax*4+0x4f8a24]
0x004f7dcd: add    rcx,rbx
0x004f7dd0: jmp    rcx
0x004f7dd2: mov    r8d,0x5
0x004f7dd8: lea    rdx,[rip+0x116e66d]        # 0x14166644c ; literal="moves"
0x004f7ddf: jmp    0x1404f7fbf
0x004f7de4: mov    r8d,0x5
0x004f7dea: lea    rdx,[rip+0x116e16b]        # 0x141665f5c ; literal="turns"
0x004f7df1: jmp    0x1404f7fbf
0x004f7df6: mov    r8d,0x12
0x004f7dfc: lea    rdx,[rip+0x116e165]        # 0x141665f68 ; literal="facial expressions"
0x004f7e03: jmp    0x1404f7fbf
0x004f7e08: mov    r8d,0xd
0x004f7e0e: lea    rdx,[rip+0x116e16b]        # 0x141665f80 ; literal="hand gestures"
0x004f7e15: jmp    0x1404f7fbf
0x004f7e1a: mov    r8d,0xe
0x004f7e20: lea    rdx,[rip+0x116e169]        # 0x141665f90 ; literal="straight walks"
0x004f7e27: jmp    0x1404f7fbf
0x004f7e2c: mov    r8d,0xc
0x004f7e32: lea    rdx,[rip+0x116e167]        # 0x141665fa0 ; literal="curved walks"
0x004f7e39: jmp    0x1404f7fbf
0x004f7e3e: mov    r8d,0x4
0x004f7e44: lea    rdx,[rip+0x116e165]        # 0x141665fb0 ; literal="runs"
0x004f7e4b: jmp    0x1404f7fbf
0x004f7e50: mov    r8d,0x5
0x004f7e56: lea    rdx,[rip+0x116e15b]        # 0x141665fb8 ; literal="leaps"
0x004f7e5d: jmp    0x1404f7fbf
0x004f7e62: mov    r8d,0x5
0x004f7e68: lea    rdx,[rip+0x116e151]        # 0x141665fc0 ; literal="kicks"
0x004f7e6f: jmp    0x1404f7fbf
0x004f7e74: mov    r8d,0xa
0x004f7e7a: lea    rdx,[rip+0x116e147]        # 0x141665fc8 ; literal="left kicks"
0x004f7e81: jmp    0x1404f7fbf
0x004f7e86: mov    r8d,0xb
0x004f7e8c: lea    rdx,[rip+0x116e145]        # 0x141665fd8 ; literal="right kicks"
0x004f7e93: jmp    0x1404f7fbf
0x004f7e98: mov    r8d,0x9
0x004f7e9e: lea    rdx,[rip+0x116e143]        # 0x141665fe8 ; literal="leg lifts"
0x004f7ea5: jmp    0x1404f7fbf
0x004f7eaa: mov    r8d,0xe
0x004f7eb0: lea    rdx,[rip+0x116e141]        # 0x141665ff8 ; literal="left leg lifts"
0x004f7eb7: jmp    0x1404f7fbf
0x004f7ebc: mov    r8d,0xf
0x004f7ec2: lea    rdx,[rip+0x116e13f]        # 0x141666008 ; literal="right leg lifts"
0x004f7ec9: jmp    0x1404f7fbf
0x004f7ece: mov    r8d,0xa
0x004f7ed4: lea    rdx,[rip+0x116e13d]        # 0x141666018 ; literal="body level"
0x004f7edb: jmp    0x1404f7fbf
0x004f7ee0: mov    r8d,0x12
0x004f7ee6: lea    rdx,[rip+0x116e3f3]        # 0x1416662e0 ; literal="body level changes"
0x004f7eed: jmp    0x1404f7fbf
0x004f7ef2: mov    r8d,0xc
0x004f7ef8: lea    rdx,[rip+0x116e3f9]        # 0x1416662f8 ; literal="arm carriage"
0x004f7eff: jmp    0x1404f7fbf
0x004f7f04: mov    r8d,0x10
0x004f7f0a: lea    rdx,[rip+0x116e3f7]        # 0x141666308 ; literal="raised left arms"
0x004f7f11: jmp    0x1404f7fbf
0x004f7f16: mov    r8d,0x11
0x004f7f1c: lea    rdx,[rip+0x116e3fd]        # 0x141666320 ; literal="raised right arms"
0x004f7f23: jmp    0x1404f7fbf
0x004f7f28: mov    r8d,0xb
0x004f7f2e: lea    rdx,[rip+0x116e403]        # 0x141666338 ; literal="raised arms"
0x004f7f35: jmp    0x1404f7fbf
0x004f7f3a: mov    r8d,0x5
0x004f7f40: lea    rdx,[rip+0x116e3fd]        # 0x141666344 ; literal="spins"
0x004f7f47: jmp    0x1404f7fbf
0x004f7f49: mov    r8d,0x19
0x004f7f4f: lea    rdx,[rip+0x116e3fa]        # 0x141666350 ; literal="independent body movement"
0x004f7f56: jmp    0x1404f7fbf
0x004f7f58: mov    r8d,0x4
0x004f7f5e: lea    rdx,[rip+0x116e407]        # 0x14166636c ; literal="sway"
0x004f7f65: jmp    0x1404f7fbf
0x004f7f67: mov    r8d,0xd
0x004f7f6d: lea    rdx,[rip+0x116e404]        # 0x141666378 ; literal="forward bends"
0x004f7f74: jmp    0x1404f7fbf
0x004f7f76: mov    r8d,0xe
0x004f7f7c: lea    rdx,[rip+0x116e405]        # 0x141666388 ; literal="backward bends"
0x004f7f83: jmp    0x1404f7fbf
0x004f7f85: mov    r8d,0xe
0x004f7f8b: lea    rdx,[rip+0x116e406]        # 0x141666398 ; literal="leftward bends"
0x004f7f92: jmp    0x1404f7fbf
0x004f7f94: mov    r8d,0xf
0x004f7f9a: lea    rdx,[rip+0x116e407]        # 0x1416663a8 ; literal="rightward bends"
0x004f7fa1: jmp    0x1404f7fbf
0x004f7fa3: mov    r8d,0x8
0x004f7fa9: lea    rdx,[rip+0x116e408]        # 0x1416663b8 ; literal="footwork"
0x004f7fb0: jmp    0x1404f7fbf
0x004f7fb2: mov    r8d,0x20
0x004f7fb8: lea    rdx,[rip+0x116e409]        # 0x1416663c8 ; literal="movement along the line of dance"
0x004f7fbf: mov    rcx,r13
0x004f7fc2: call   0x140071040
0x004f7fc7: mov    rax,QWORD PTR [rsi]
0x004f7fca: mov    rcx,QWORD PTR [rax+0x98]
0x004f7fd1: mov    edx,DWORD PTR [rcx+r12*4]
0x004f7fd5: mov    ecx,edx
0x004f7fd7: shr    ecx,0x2
0x004f7fda: and    ecx,0x1
0x004f7fdd: test   dl,0x8
0x004f7fe0: lea    eax,[rcx+0x1]
0x004f7fe3: cmove  eax,ecx
0x004f7fe6: test   dl,0x10
0x004f7fe9: lea    ecx,[rax+0x1]
0x004f7fec: cmove  ecx,eax
0x004f7fef: test   dl,0x20
0x004f7ff2: lea    ebx,[rcx+0x1]
0x004f7ff5: cmove  ebx,ecx
0x004f7ff8: test   ebx,ebx
0x004f7ffa: je     0x1404f80f8
0x004f8000: xor    edi,edi
0x004f8002: mov    ecx,edi
0x004f8004: test   edi,edi
0x004f8006: je     0x1404f802f
0x004f8008: sub    ecx,0x1
0x004f800b: je     0x1404f8027
0x004f800d: sub    ecx,0x1
0x004f8010: je     0x1404f801f
0x004f8012: cmp    ecx,0x1
0x004f8015: jne    0x1404f8035
0x004f8017: mov    r14d,0x20
0x004f801d: jmp    0x1404f8035
0x004f801f: mov    r14d,0x10
0x004f8025: jmp    0x1404f8035
0x004f8027: mov    r14d,0x8
0x004f802d: jmp    0x1404f8035
0x004f802f: mov    r14d,0x4
0x004f8035: mov    rax,QWORD PTR [rsi]
0x004f8038: mov    rcx,QWORD PTR [rax+0x98]
0x004f803f: test   DWORD PTR [rcx+r12*4],r14d
0x004f8043: je     0x1404f80cd
0x004f8049: dec    ebx
0x004f804b: cmp    r14d,0x4
0x004f804f: je     0x1404f808a
0x004f8051: cmp    r14d,0x8
0x004f8055: je     0x1404f807b
0x004f8057: cmp    r14d,0x10
0x004f805b: je     0x1404f806c
0x004f805d: cmp    r14d,0x20
0x004f8061: jne    0x1404f809f
0x004f8063: lea    rdx,[rip+0x116d456]        # 0x1416654c0 ; literal=" shadowed"
0x004f806a: jmp    0x1404f8091
0x004f806c: mov    r8d,0x18
0x004f8072: lea    rdx,[rip+0x116d427]        # 0x1416654a0 ; literal=" performed in succession"
0x004f8079: jmp    0x1404f8097
0x004f807b: mov    r8d,0x18
0x004f8081: lea    rdx,[rip+0x116d3f8]        # 0x141665480 ; literal=" performed in retrograde"
0x004f8088: jmp    0x1404f8097
0x004f808a: lea    rdx,[rip+0x116d3df]        # 0x141665470 ; literal=" mirrored"
0x004f8091: mov    r8d,0x9
0x004f8097: mov    rcx,r13
0x004f809a: call   0x140071040
0x004f809f: cmp    ebx,0x2
0x004f80a2: jl     0x1404f80b3
0x004f80a4: mov    r8d,0x1
0x004f80aa: lea    rdx,[rip+0x11212b3]        # 0x141619364 ; literal=","
0x004f80b1: jmp    0x1404f80c5
0x004f80b3: cmp    ebx,0x1
0x004f80b6: jne    0x1404f80cd
0x004f80b8: mov    r8d,0x4
0x004f80be: lea    rdx,[rip+0x1111a27]        # 0x141609aec ; literal=" and"
0x004f80c5: mov    rcx,r13
0x004f80c8: call   0x140071040
0x004f80cd: inc    edi
0x004f80cf: cmp    edi,0x4
0x004f80d2: jl     0x1404f8002
0x004f80d8: mov    DWORD PTR [rsp+0x6c],r14d
0x004f80dd: mov    r8d,0x11
0x004f80e3: lea    rdx,[rip+0x116d3e6]        # 0x1416654d0 ; literal=" by group members"
0x004f80ea: mov    rcx,r13
0x004f80ed: call   0x140071040
0x004f80f2: mov    edi,DWORD PTR [rbp+0xc0]
0x004f80f8: mov    rax,QWORD PTR [rsi]
0x004f80fb: mov    rcx,QWORD PTR [rax+0x98]
0x004f8102: mov    eax,DWORD PTR [rcx+r12*4]
0x004f8106: test   al,0x40
0x004f8108: je     0x1404f8119
0x004f810a: mov    r8d,0xc
0x004f8110: lea    rdx,[rip+0x116e2d9]        # 0x1416663f0 ; literal=" of the lead"
0x004f8117: jmp    0x1404f812a
0x004f8119: test   al,al
0x004f811b: jns    0x1404f8132
0x004f811d: mov    r8d,0x10
0x004f8123: lea    rdx,[rip+0x116e2d6]        # 0x141666400 ; literal=" of the follower"
0x004f812a: mov    rcx,r13
0x004f812d: call   0x140071040
0x004f8132: cmp    edi,0x2
0x004f8135: jl     0x1404f8146
0x004f8137: mov    r8d,0x2
0x004f813d: lea    rdx,[rip+0x110c250]        # 0x141604394 ; literal=", "
0x004f8144: jmp    0x1404f8158
0x004f8146: cmp    edi,0x1
0x004f8149: jne    0x1404f8160
0x004f814b: mov    r8d,0x5
0x004f8151: lea    rdx,[rip+0x110c234]        # 0x14160438c ; literal=" and "
0x004f8158: mov    rcx,r13
0x004f815b: call   0x140071040
0x004f8160: inc    r15d
0x004f8163: inc    r12
0x004f8166: mov    rdx,QWORD PTR [rsi]
0x004f8169: mov    rcx,QWORD PTR [rdx+0x58]
0x004f816d: sub    rcx,QWORD PTR [rdx+0x50]
0x004f8171: sar    rcx,0x2
0x004f8175: movsxd rax,r15d
0x004f8178: cmp    rax,rcx
0x004f817b: jb     0x1404f7910
0x004f8181: mov    r14,QWORD PTR [rsp+0x40]
0x004f8186: mov    r15,QWORD PTR [rbp-0x80]
0x004f818a: mov    ebx,DWORD PTR [rsp+0x70]
0x004f818e: mov    edi,DWORD PTR [rsp+0x64]
0x004f8192: mov    r12d,DWORD PTR [rsp+0x38]
0x004f8197: test   edi,edi
0x004f8199: jg     0x1404f81a4
0x004f819b: test   r12d,r12d
0x004f819e: jle    0x1404f840a
0x004f81a4: test   ebx,ebx
0x004f81a6: jle    0x1404f81bd
0x004f81a8: mov    r8d,0x7
0x004f81ae: lea    rdx,[rip+0x116e263]        # 0x141666418 ; literal=", with "
0x004f81b5: mov    rcx,r13
0x004f81b8: call   0x140071040
0x004f81bd: test   edi,edi
0x004f81bf: jle    0x1404f826f
0x004f81c5: xor    edi,edi
0x004f81c7: mov    rdx,QWORD PTR [rsi]
0x004f81ca: mov    rax,QWORD PTR [rdx+0x58]
0x004f81ce: sub    rax,QWORD PTR [rdx+0x50]
0x004f81d2: sar    rax,0x2
0x004f81d6: test   rax,rax
0x004f81d9: je     0x1404f8256
0x004f81df: xor    ebx,ebx
0x004f81e1: mov    rax,QWORD PTR [rdx+0x50]
0x004f81e5: cmp    DWORD PTR [rbx+rax*1],0x5
0x004f81e9: jne    0x1404f8239
0x004f81eb: mov    rax,QWORD PTR [rdx+0x68]
0x004f81ef: mov    ecx,DWORD PTR [rbx+rax*1]
0x004f81f2: cmp    ecx,0xffffffff
0x004f81f5: je     0x1404f8239
0x004f81f7: sub    ecx,0xb
0x004f81fa: je     0x1404f8224
0x004f81fc: sub    ecx,0xc
0x004f81ff: je     0x1404f8215
0x004f8201: cmp    ecx,0x1
0x004f8204: jne    0x1404f8239
0x004f8206: mov    r8d,0x13
0x004f820c: lea    rdx,[rip+0x116e225]        # 0x141666438 ; literal="partially realized "
0x004f8213: jmp    0x1404f8231
0x004f8215: mov    r8d,0x8
0x004f821b: lea    rdx,[rip+0x116e206]        # 0x141666428 ; literal="aborted "
0x004f8222: jmp    0x1404f8231
0x004f8224: mov    r8d,0x6
0x004f822a: lea    rdx,[rip+0x116e1ef]        # 0x141666420 ; literal="large "
0x004f8231: mov    rcx,r13
0x004f8234: call   0x140071040
0x004f8239: inc    edi
0x004f823b: add    rbx,0x4
0x004f823f: mov    rdx,QWORD PTR [rsi]
0x004f8242: mov    rcx,QWORD PTR [rdx+0x58]
0x004f8246: sub    rcx,QWORD PTR [rdx+0x50]
0x004f824a: sar    rcx,0x2
0x004f824e: movsxd rax,edi
0x004f8251: cmp    rax,rcx
0x004f8254: jb     0x1404f81e1
0x004f8256: mov    r8d,0x5
0x004f825c: lea    rdx,[rip+0x116e1e9]        # 0x14166644c ; literal="moves"
0x004f8263: mov    rcx,r13
0x004f8266: call   0x140071040
0x004f826b: mov    edi,DWORD PTR [rsp+0x64]
0x004f826f: test   r12d,r12d
0x004f8272: jle    0x1404f840a
0x004f8278: test   edi,edi
0x004f827a: jle    0x1404f8291
0x004f827c: mov    r8d,0x5
0x004f8282: lea    rdx,[rip+0x110c103]        # 0x14160438c ; literal=" and "
0x004f8289: mov    rcx,r13
0x004f828c: call   0x140071040
0x004f8291: mov    r8d,0x9
0x004f8297: lea    rdx,[rip+0x116e1ba]        # 0x141666458 ; literal="movement "
0x004f829e: mov    rcx,r13
0x004f82a1: call   0x140071040
0x004f82a6: xor    edi,edi
0x004f82a8: mov    r12d,edi
0x004f82ab: mov    edx,edi
0x004f82ad: mov    r9,QWORD PTR [rsi]
0x004f82b0: mov    r10,QWORD PTR [r9+0x50]
0x004f82b4: mov    r8,QWORD PTR [r9+0x58]
0x004f82b8: sub    r8,r10
0x004f82bb: sar    r8,0x2
0x004f82bf: test   r8,r8
0x004f82c2: je     0x1404f82e6
0x004f82c4: mov    ecx,edi
0x004f82c6: cmp    DWORD PTR [rcx+r10*1],0x5
0x004f82cb: jne    0x1404f82d8
0x004f82cd: mov    rax,QWORD PTR [r9+0x98]
0x004f82d4: or     r12d,DWORD PTR [rcx+rax*1]
0x004f82d8: inc    edx
0x004f82da: add    rcx,0x4
0x004f82de: movsxd rax,edx
0x004f82e1: cmp    rax,r8
0x004f82e4: jb     0x1404f82c6
0x004f82e6: mov    ecx,r12d
0x004f82e9: shr    ecx,0x2
0x004f82ec: and    ecx,0x1
0x004f82ef: test   r12b,0x8
0x004f82f3: lea    eax,[rcx+0x1]
0x004f82f6: cmove  eax,ecx
0x004f82f9: test   r12b,0x10
0x004f82fd: lea    ecx,[rax+0x1]
0x004f8300: cmove  ecx,eax
0x004f8303: test   r12b,0x20
0x004f8307: lea    ebx,[rcx+0x1]
0x004f830a: cmove  ebx,ecx
0x004f830d: test   ebx,ebx
0x004f830f: je     0x1404f840a
0x004f8315: mov    r14d,DWORD PTR [rsp+0x74]
0x004f831a: nop    WORD PTR [rax+rax*1+0x0]
0x004f8320: mov    ecx,edi
0x004f8322: test   edi,edi
0x004f8324: je     0x1404f834d
0x004f8326: sub    ecx,0x1
0x004f8329: je     0x1404f8345
0x004f832b: sub    ecx,0x1
0x004f832e: je     0x1404f833d
0x004f8330: cmp    ecx,0x1
0x004f8333: jne    0x1404f8353
0x004f8335: mov    r14d,0x20
0x004f833b: jmp    0x1404f8353
0x004f833d: mov    r14d,0x10
0x004f8343: jmp    0x1404f8353
0x004f8345: mov    r14d,0x8
0x004f834b: jmp    0x1404f8353
0x004f834d: mov    r14d,0x4
0x004f8353: test   r12d,r14d
0x004f8356: je     0x1404f83e0
0x004f835c: dec    ebx
0x004f835e: cmp    r14d,0x4
0x004f8362: je     0x1404f839d
0x004f8364: cmp    r14d,0x8
0x004f8368: je     0x1404f838e
0x004f836a: cmp    r14d,0x10
0x004f836e: je     0x1404f837f
0x004f8370: cmp    r14d,0x20
0x004f8374: jne    0x1404f83b2
0x004f8376: lea    rdx,[rip+0x116e12b]        # 0x1416664a8 ; literal="shadowed"
0x004f837d: jmp    0x1404f83a4
0x004f837f: mov    r8d,0x17
0x004f8385: lea    rdx,[rip+0x116e104]        # 0x141666490 ; literal="performed in succession"
0x004f838c: jmp    0x1404f83aa
0x004f838e: mov    r8d,0x17
0x004f8394: lea    rdx,[rip+0x116e0dd]        # 0x141666478 ; literal="performed in retrograde"
0x004f839b: jmp    0x1404f83aa
0x004f839d: lea    rdx,[rip+0x116e0c4]        # 0x141666468 ; literal="mirrored"
0x004f83a4: mov    r8d,0x8
0x004f83aa: mov    rcx,r13
0x004f83ad: call   0x140071040
0x004f83b2: cmp    ebx,0x2
0x004f83b5: jl     0x1404f83c6
0x004f83b7: mov    r8d,0x2
0x004f83bd: lea    rdx,[rip+0x110bfd0]        # 0x141604394 ; literal=", "
0x004f83c4: jmp    0x1404f83d8
0x004f83c6: cmp    ebx,0x1
0x004f83c9: jne    0x1404f83e0
0x004f83cb: mov    r8d,0x5
0x004f83d1: lea    rdx,[rip+0x110bfb4]        # 0x14160438c ; literal=" and "
0x004f83d8: mov    rcx,r13
0x004f83db: call   0x140071040
0x004f83e0: inc    edi
0x004f83e2: cmp    edi,0x4
0x004f83e5: jl     0x1404f8320
0x004f83eb: mov    DWORD PTR [rsp+0x74],r14d
0x004f83f0: mov    r8d,0x11
0x004f83f6: lea    rdx,[rip+0x116d0d3]        # 0x1416654d0 ; literal=" by group members"
0x004f83fd: mov    rcx,r13
0x004f8400: call   0x140071040
0x004f8405: mov    r14,QWORD PTR [rsp+0x40]
0x004f840a: mov    r8d,0x3
0x004f8410: lea    rdx,[rip+0x1121181]        # 0x141619598 ; literal=".  "
0x004f8417: mov    rcx,r13
0x004f841a: call   0x140071040
0x004f841f: mov    ebx,DWORD PTR [rsp+0x34]
0x004f8423: add    rsi,0x8
0x004f8427: inc    DWORD PTR [rsp+0x78]
0x004f842b: mov    r12,QWORD PTR [rsp+0x50]
0x004f8430: jmp    0x1404f6630
0x004f8435: call   QWORD PTR [rip+0x1108705]        # 0x141600b40
0x004f843b: int3
0x004f843c: mov    rdx,QWORD PTR [rbp-0x78]
0x004f8440: mov    r14,QWORD PTR [rbp+0xa0]
0x004f8447: mov    rbx,r14
0x004f844a: mov    rdi,rdx
0x004f844d: sub    rdi,r15
0x004f8450: sar    rdi,0x3
0x004f8454: mov    r15,QWORD PTR [rbp+0xa8]
0x004f845b: mov    rsi,r15
0x004f845e: sub    rsi,r14
0x004f8461: sar    rsi,0x3
0x004f8465: mov    r12d,0xff
0x004f846b: nop    DWORD PTR [rax+rax*1+0x0]
0x004f8470: mov    ecx,0x1
0x004f8475: cmp    rbx,r15
0x004f8478: je     0x1404f84b0
0x004f847a: mov    eax,ecx
0x004f847c: cmovb  eax,r12d
0x004f8480: test   al,al
0x004f8482: jns    0x1404f84b0
0x004f8484: mov    r8d,0x3
0x004f848a: lea    rdx,[rip+0x1120a3f]        # 0x141618ed0 ; literal="[B]"
0x004f8491: mov    rcx,r13
0x004f8494: call   0x140071040
0x004f8499: mov    r9d,edi
0x004f849c: mov    r8d,esi
0x004f849f: mov    rdx,QWORD PTR [rbx]
0x004f84a2: mov    rcx,r13
0x004f84a5: call   0x1404f3980
0x004f84aa: add    rbx,0x8
0x004f84ae: jmp    0x1404f8470
0x004f84b0: mov    rdx,QWORD PTR [rbp-0x78]
0x004f84b4: mov    rbx,rdx
0x004f84b7: mov    r15,QWORD PTR [rbp-0x80]
0x004f84bb: sub    rbx,r15
0x004f84be: sar    rbx,0x3
0x004f84c2: mov    rdi,QWORD PTR [rbp+0xa8]
0x004f84c9: sub    rdi,r14
0x004f84cc: sar    rdi,0x3
0x004f84d0: cmp    r15,rdx
0x004f84d3: je     0x1404f8514
0x004f84d5: mov    eax,ecx
0x004f84d7: cmovb  eax,r12d
0x004f84db: test   al,al
0x004f84dd: jns    0x1404f8514
0x004f84df: mov    r8d,0x3
0x004f84e5: lea    rdx,[rip+0x11209e4]        # 0x141618ed0 ; literal="[B]"
0x004f84ec: mov    rcx,r13
0x004f84ef: call   0x140071040
0x004f84f4: mov    r9d,ebx
0x004f84f7: mov    r8d,edi
0x004f84fa: mov    rdx,QWORD PTR [r15]
0x004f84fd: mov    rcx,r13
0x004f8500: call   0x1404f3980
0x004f8505: add    r15,0x8
0x004f8509: mov    rdx,QWORD PTR [rbp-0x78]
0x004f850d: mov    ecx,0x1
0x004f8512: jmp    0x1404f84d0
0x004f8514: lea    rcx,[rbp-0x80]
0x004f8518: call   0x1400681a0
0x004f851d: nop
0x004f851e: lea    rcx,[rbp+0xa0]
0x004f8525: call   0x1400681a0
0x004f852a: nop
0x004f852b: lea    rcx,[rbp+0x120]
0x004f8532: call   0x140070e80
0x004f8537: mov    rcx,QWORD PTR [rbp+0x140]
0x004f853e: xor    rcx,rsp
0x004f8541: call   0x1415530b0
0x004f8546: mov    rbx,QWORD PTR [rsp+0x2a0]
0x004f854e: add    rsp,0x250
0x004f8555: pop    r15
0x004f8557: pop    r14
0x004f8559: pop    r13
0x004f855b: pop    r12
0x004f855d: pop    rdi
0x004f855e: pop    rsi
0x004f855f: pop    rbp
0x004f8560: ret
0x004f8561: nop    DWORD PTR [rax]
