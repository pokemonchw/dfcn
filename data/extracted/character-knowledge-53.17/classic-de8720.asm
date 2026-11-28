; classic PE:6aea11a5:0272d000; knowledge-musical-form; RVA 0xde8720..0xdefea4; code ends 0xdef744
0x00de8720: mov    QWORD PTR [rsp+0x18],rbx
0x00de8725: push   rbp
0x00de8726: push   rsi
0x00de8727: push   rdi
0x00de8728: push   r12
0x00de872a: push   r13
0x00de872c: push   r14
0x00de872e: push   r15
0x00de8730: lea    rbp,[rsp-0x280]
0x00de8738: sub    rsp,0x380
0x00de873f: mov    rax,QWORD PTR [rip+0xacf8fa]        # 0x1418b8040
0x00de8746: xor    rax,rsp
0x00de8749: mov    QWORD PTR [rbp+0x270],rax
0x00de8750: mov    rdi,rdx
0x00de8753: mov    QWORD PTR [rbp-0x28],rdx
0x00de8757: mov    r13,rcx
0x00de875a: mov    QWORD PTR [rbp-0x38],rcx
0x00de875e: lea    rcx,[rbp+0x1f0]
0x00de8765: call   0x140070c50
0x00de876a: nop
0x00de876b: lea    rcx,[r13+0x8]
0x00de876f: xor    r9d,r9d
0x00de8772: mov    r8b,0x1
0x00de8775: lea    rdx,[rbp+0x1f0]
0x00de877c: call   0x140aaafe0
0x00de8781: lea    rdx,[rbp+0x1f0]
0x00de8788: mov    rcx,rdi
0x00de878b: call   0x1400bb2d0
0x00de8790: lea    rdx,[rip+0x877c35]        # 0x1416603cc ; literal=" is a "
0x00de8797: mov    rcx,rdi
0x00de879a: call   0x140070b20
0x00de879f: mov    ecx,DWORD PTR [r13+0x118]
0x00de87a6: xor    ebx,ebx
0x00de87a8: mov    esi,0x1
0x00de87ad: test   ecx,ecx
0x00de87af: je     0x140de882c
0x00de87b1: sub    ecx,esi
0x00de87b3: je     0x140de8823
0x00de87b5: sub    ecx,esi
0x00de87b7: je     0x140de87c6
0x00de87b9: cmp    ecx,esi
0x00de87bb: jne    0x140de883b
0x00de87bd: lea    rdx,[rip+0x94cce4]        # 0x1417354a8 ; literal="form of music used during marches and military engagements"
0x00de87c4: jmp    0x140de8833
0x00de87c6: lea    rdx,[rip+0x94cbf3]        # 0x1417353c0 ; literal="devotional form of music"
0x00de87cd: mov    rcx,rdi
0x00de87d0: call   0x140070b20
0x00de87d5: cmp    DWORD PTR [r13+0x11c],0xffffffff
0x00de87dd: je     0x140de883b
0x00de87df: lea    rdx,[rip+0x94cbfa]        # 0x1417353e0 ; literal=" directed toward the worship of "
0x00de87e6: mov    rcx,rdi
0x00de87e9: call   0x140070b20
0x00de87ee: lea    rcx,[rbp+0xc0]
0x00de87f5: call   0x140073640
0x00de87fa: mov    WORD PTR [rsp+0x28],bx
0x00de87ff: mov    WORD PTR [rsp+0x20],si
0x00de8804: lea    r9,[rbp+0xc0]
0x00de880b: mov    r8d,DWORD PTR [r13+0x11c]
0x00de8812: mov    rdx,rdi
0x00de8815: lea    rcx,[rip+0x172d81c]        # 0x142516038
0x00de881c: call   0x140ba79f0
0x00de8821: jmp    0x140de883b
0x00de8823: lea    rdx,[rip+0x94cb5e]        # 0x141735388 ; literal="form of music used to commemorate important events"
0x00de882a: jmp    0x140de8833
0x00de882c: lea    rdx,[rip+0x94cc4d]        # 0x141735480 ; literal="form of music used for entertainment"
0x00de8833: mov    rcx,rdi
0x00de8836: call   0x140070b20
0x00de883b: mov    edx,DWORD PTR [r13+0x80]
0x00de8842: cmp    edx,0xffffffff
0x00de8845: je     0x140de8898
0x00de8847: lea    rcx,[rip+0x160532a]        # 0x1423edb78
0x00de884e: call   0x14007f0b0
0x00de8853: mov    ecx,ebx
0x00de8855: test   rax,rax
0x00de8858: je     0x140de8861
0x00de885a: cmp    WORD PTR [rax],0x8
0x00de885e: sete   cl
0x00de8861: lea    rax,[rip+0x877c28]        # 0x141660490 ; literal=" originating in "
0x00de8868: lea    rdx,[rip+0x877bf9]        # 0x141660468 ; literal=" which grew out of the performances of "
0x00de886f: test   ecx,ecx
0x00de8871: cmove  rdx,rax
0x00de8875: mov    rcx,rdi
0x00de8878: call   0x140070b20
0x00de887d: xor    r9d,r9d
0x00de8880: mov    r8d,DWORD PTR [r13+0x80]
0x00de8887: mov    rdx,rdi
0x00de888a: lea    rcx,[rip+0x172d7a7]        # 0x142516038
0x00de8891: call   0x140ba73e0
0x00de8896: jmp    0x140de88e4
0x00de8898: cmp    DWORD PTR [r13+0x84],0xffffffff
0x00de88a0: je     0x140de88e4
0x00de88a2: lea    rcx,[rbp+0xc0]
0x00de88a9: call   0x140073640
0x00de88ae: lea    rdx,[rip+0x877bf3]        # 0x1416604a8 ; literal=" originally devised by "
0x00de88b5: mov    rcx,rdi
0x00de88b8: call   0x140070b20
0x00de88bd: mov    WORD PTR [rsp+0x28],bx
0x00de88c2: mov    WORD PTR [rsp+0x20],si
0x00de88c7: lea    r9,[rbp+0xc0]
0x00de88ce: mov    r8d,DWORD PTR [r13+0x84]
0x00de88d5: mov    rdx,rdi
0x00de88d8: lea    rcx,[rip+0x172d759]        # 0x142516038
0x00de88df: call   0x140ba79f0
0x00de88e4: lea    rdx,[rip+0x82bd95]        # 0x141614680 ; literal=".  "
0x00de88eb: mov    rcx,rdi
0x00de88ee: call   0x140070b20
0x00de88f3: test   BYTE PTR [r13+0x120],sil
0x00de88fa: lea    rax,[rip+0x94cc1f]        # 0x141735520 ; literal="The form guides musicians during improvised performances.  "
0x00de8901: lea    rdx,[rip+0x94cb08]        # 0x141735410 ; literal="The rules of the form are applied by composers to produce individual pieces of music which can be performed.  "
0x00de8908: cmove  rdx,rax
0x00de890c: mov    rcx,rdi
0x00de890f: call   0x140070b20
0x00de8914: xor    r15b,r15b
0x00de8917: lea    r12,[r13+0xa0]
0x00de891e: mov    rcx,r12
0x00de8921: call   0x140070410
0x00de8926: mov    rsi,rax
0x00de8929: lea    rdx,[rsp+0x40]
0x00de892e: mov    rcx,r12
0x00de8931: call   0x140070800
0x00de8936: lea    rdx,[rbp+0x30]
0x00de893a: mov    rcx,r12
0x00de893d: call   0x1400707f0
0x00de8942: lea    r8,[rbp+0x30]
0x00de8946: lea    rdx,[rsp+0x30]
0x00de894b: lea    rcx,[rsp+0x40]
0x00de8950: call   0x1400703e0
0x00de8955: xor    edx,edx
0x00de8957: movzx  ecx,BYTE PTR [rax]
0x00de895a: call   0x140066d70
0x00de895f: test   al,al
0x00de8961: je     0x140de8e8f
0x00de8967: lea    r14,[rip+0x94cb82]        # 0x1417354f0 ; literal="recites"
0x00de896e: lea    rbx,[rip+0x94d3e3]        # 0x141735d58 ; literal="while the"
0x00de8975: lea    rcx,[rsp+0x40]
0x00de897a: call   0x1400703d0
0x00de897f: mov    rcx,QWORD PTR [rax]
0x00de8982: test   BYTE PTR [rcx+0x4],0x7
0x00de8986: lea    rcx,[rsp+0x40]
0x00de898b: je     0x140de8ca6
0x00de8991: call   0x1400703d0
0x00de8996: movsxd rbx,esi
0x00de8999: mov    rax,QWORD PTR [rax]
0x00de899c: cmp    DWORD PTR [rax+0x10],0x1
0x00de89a0: jne    0x140de89cc
0x00de89a2: mov    rcx,r12
0x00de89a5: call   0x140070410
0x00de89aa: lea    rdx,[rip+0x89ea03]        # 0x1416873b4 ; literal="A"
0x00de89b1: cmp    rbx,rax
0x00de89b4: lea    rax,[rip+0x830f6d]        # 0x141619928 ; literal="a"
0x00de89bb: cmovne rdx,rax
0x00de89bf: mov    rcx,rdi
0x00de89c2: call   0x140070b20
0x00de89c7: jmp    0x140de8aa0
0x00de89cc: lea    rcx,[rbp+0x1b0]
0x00de89d3: call   0x140070c50
0x00de89d8: nop
0x00de89d9: lea    rcx,[rsp+0x40]
0x00de89de: call   0x1400703d0
0x00de89e3: mov    rcx,QWORD PTR [rax]
0x00de89e6: lea    rdx,[rbp+0x1b0]
0x00de89ed: mov    ecx,DWORD PTR [rcx+0xc]
0x00de89f0: call   0x140545040
0x00de89f5: mov    rcx,r12
0x00de89f8: call   0x140070410
0x00de89fd: cmp    rbx,rax
0x00de8a00: jne    0x140de8a0e
0x00de8a02: lea    rcx,[rbp+0x1b0]
0x00de8a09: call   0x140544330
0x00de8a0e: lea    rdx,[rbp+0x1b0]
0x00de8a15: mov    rcx,rdi
0x00de8a18: call   0x1400bb2d0
0x00de8a1d: nop
0x00de8a1e: lea    rcx,[rbp+0x1b0]
0x00de8a25: call   0x1400693f0
0x00de8a2a: lea    rcx,[rsp+0x40]
0x00de8a2f: call   0x1400703d0
0x00de8a34: mov    rbx,QWORD PTR [rax]
0x00de8a37: lea    rcx,[rsp+0x40]
0x00de8a3c: call   0x1400703d0
0x00de8a41: mov    rcx,QWORD PTR [rax]
0x00de8a44: mov    eax,DWORD PTR [rcx+0xc]
0x00de8a47: cmp    DWORD PTR [rbx+0x10],eax
0x00de8a4a: jle    0x140de8aa0
0x00de8a4c: lea    rdx,[rip+0x81ad41]        # 0x141603794 ; literal=" to "
0x00de8a53: mov    rcx,rdi
0x00de8a56: call   0x140070b20
0x00de8a5b: lea    rcx,[rbp+0x190]
0x00de8a62: call   0x140070c50
0x00de8a67: nop
0x00de8a68: lea    rcx,[rsp+0x40]
0x00de8a6d: call   0x1400703d0
0x00de8a72: mov    rcx,QWORD PTR [rax]
0x00de8a75: lea    rdx,[rbp+0x190]
0x00de8a7c: mov    ecx,DWORD PTR [rcx+0x10]
0x00de8a7f: call   0x140545040
0x00de8a84: lea    rdx,[rbp+0x190]
0x00de8a8b: mov    rcx,rdi
0x00de8a8e: call   0x1400bb2d0
0x00de8a93: nop
0x00de8a94: lea    rcx,[rbp+0x190]
0x00de8a9b: call   0x1400693f0
0x00de8aa0: lea    rdx,[rip+0x815ec5]        # 0x1415fe96c ; literal=" "
0x00de8aa7: mov    rcx,rdi
0x00de8aaa: call   0x140070b20
0x00de8aaf: lea    rcx,[rsp+0x40]
0x00de8ab4: call   0x1400703d0
0x00de8ab9: mov    rcx,QWORD PTR [rax]
0x00de8abc: test   BYTE PTR [rcx+0x4],0x1
0x00de8ac0: je     0x140de8acb
0x00de8ac2: lea    rdx,[rip+0x94ca93]        # 0x14173555c ; literal="singer"
0x00de8ac9: jmp    0x140de8b01
0x00de8acb: lea    rcx,[rsp+0x40]
0x00de8ad0: call   0x1400703d0
0x00de8ad5: mov    rcx,QWORD PTR [rax]
0x00de8ad8: test   BYTE PTR [rcx+0x4],0x2
0x00de8adc: je     0x140de8ae7
0x00de8ade: lea    rdx,[rip+0x94ca83]        # 0x141735568 ; literal="speaker"
0x00de8ae5: jmp    0x140de8b01
0x00de8ae7: lea    rcx,[rsp+0x40]
0x00de8aec: call   0x1400703d0
0x00de8af1: mov    rcx,QWORD PTR [rax]
0x00de8af4: test   BYTE PTR [rcx+0x4],0x4
0x00de8af8: je     0x140de8b09
0x00de8afa: lea    rdx,[rip+0x94ca6f]        # 0x141735570 ; literal="chanter"
0x00de8b01: mov    rcx,rdi
0x00de8b04: call   0x140070b20
0x00de8b09: lea    rcx,[rsp+0x40]
0x00de8b0e: call   0x1400703d0
0x00de8b13: mov    rcx,QWORD PTR [rax]
0x00de8b16: cmp    DWORD PTR [rcx+0x10],0x2
0x00de8b1a: jl     0x140de8b2b
0x00de8b1c: lea    rdx,[rip+0x8169a5]        # 0x1415ff4c8 ; literal="s"
0x00de8b23: mov    rcx,rdi
0x00de8b26: call   0x140070b20
0x00de8b2b: lea    rdx,[rip+0x815e3a]        # 0x1415fe96c ; literal=" "
0x00de8b32: mov    rcx,rdi
0x00de8b35: call   0x140070b20
0x00de8b3a: mov    edx,DWORD PTR [r13+0xf8]
0x00de8b41: cmp    edx,0xffffffff
0x00de8b44: je     0x140de8ba2
0x00de8b46: lea    rcx,[rip+0x171b4eb]        # 0x142504038
0x00de8b4d: call   0x140073b30
0x00de8b52: mov    rbx,rax
0x00de8b55: test   rax,rax
0x00de8b58: je     0x140de8c89
0x00de8b5e: lea    rcx,[rsp+0x40]
0x00de8b63: call   0x1400703d0
0x00de8b68: mov    rcx,QWORD PTR [rax]
0x00de8b6b: lea    rdx,[rip+0x94c972]        # 0x1417354e4 ; literal="recite"
0x00de8b72: cmp    DWORD PTR [rcx+0x10],0x2
0x00de8b76: cmovl  rdx,r14
0x00de8b7a: mov    rcx,rdi
0x00de8b7d: call   0x140070b20
0x00de8b82: lea    rdx,[rip+0x94c96f]        # 0x1417354f8 ; literal=" the words of "
0x00de8b89: mov    rcx,rdi
0x00de8b8c: call   0x140070b20
0x00de8b91: lea    rdx,[rbx+0x8]
0x00de8b95: mov    rcx,rdi
0x00de8b98: call   0x1400bb2d0
0x00de8b9d: jmp    0x140de8c89
0x00de8ba2: mov    edx,DWORD PTR [r13+0xf4]
0x00de8ba9: cmp    edx,0xffffffff
0x00de8bac: je     0x140de8c56
0x00de8bb2: lea    rcx,[rip+0x171b68f]        # 0x142504248
0x00de8bb9: call   0x140073b30
0x00de8bbe: mov    rbx,rax
0x00de8bc1: test   rax,rax
0x00de8bc4: je     0x140de8c89
0x00de8bca: lea    rcx,[rsp+0x40]
0x00de8bcf: call   0x1400703d0
0x00de8bd4: mov    rcx,QWORD PTR [rax]
0x00de8bd7: lea    rdx,[rip+0x94c906]        # 0x1417354e4 ; literal="recite"
0x00de8bde: cmp    DWORD PTR [rcx+0x10],0x2
0x00de8be2: cmovl  rdx,r14
0x00de8be6: mov    rcx,rdi
0x00de8be9: call   0x140070b20
0x00de8bee: test   BYTE PTR [rbx+0x8c],0x2
0x00de8bf5: je     0x140de8c06
0x00de8bf7: lea    rdx,[rip+0x94c90a]        # 0x141735508 ; literal=" a composition of"
0x00de8bfe: mov    rcx,rdi
0x00de8c01: call   0x140070b20
0x00de8c06: lea    rdx,[rip+0x815d5f]        # 0x1415fe96c ; literal=" "
0x00de8c0d: mov    rcx,rdi
0x00de8c10: call   0x140070b20
0x00de8c15: lea    rcx,[rbp+0x190]
0x00de8c1c: call   0x140070c50
0x00de8c21: nop
0x00de8c22: lea    rcx,[rbx+0x8]
0x00de8c26: xor    r9d,r9d
0x00de8c29: mov    r8b,0x1
0x00de8c2c: lea    rdx,[rbp+0x190]
0x00de8c33: call   0x140aaafe0
0x00de8c38: lea    rdx,[rbp+0x190]
0x00de8c3f: mov    rcx,rdi
0x00de8c42: call   0x1400bb2d0
0x00de8c47: nop
0x00de8c48: lea    rcx,[rbp+0x190]
0x00de8c4f: call   0x1400693f0
0x00de8c54: jmp    0x140de8c89
0x00de8c56: lea    rcx,[rsp+0x40]
0x00de8c5b: call   0x1400703d0
0x00de8c60: mov    rcx,QWORD PTR [rax]
0x00de8c63: lea    rdx,[rip+0x94c87a]        # 0x1417354e4 ; literal="recite"
0x00de8c6a: cmp    DWORD PTR [rcx+0x10],0x2
0x00de8c6e: cmovl  rdx,r14
0x00de8c72: mov    rcx,rdi
0x00de8c75: call   0x140070b20
0x00de8c7a: lea    rdx,[rip+0x94d0b7]        # 0x141735d38 ; literal=" nonsensical words and sounds"
0x00de8c81: mov    rcx,rdi
0x00de8c84: call   0x140070b20
0x00de8c89: cmp    esi,0x2
0x00de8c8c: jl     0x140de8e57
0x00de8c92: lea    rdx,[rip+0x815cd3]        # 0x1415fe96c ; literal=" "
0x00de8c99: mov    rcx,rdi
0x00de8c9c: call   0x140070b20
0x00de8ca1: jmp    0x140de8e57
0x00de8ca6: call   0x1400703d0
0x00de8cab: mov    rcx,QWORD PTR [rax]
0x00de8cae: cmp    DWORD PTR [rcx],0xffffffff
0x00de8cb1: je     0x140de8e57
0x00de8cb7: lea    rcx,[rsp+0x40]
0x00de8cbc: call   0x1400703d0
0x00de8cc1: mov    rcx,QWORD PTR [rax]
0x00de8cc4: movsxd rdx,DWORD PTR [rcx]
0x00de8cc7: lea    rcx,[rip+0x17204aa]        # 0x142509178
0x00de8cce: call   0x1400707e0
0x00de8cd3: mov    r14,QWORD PTR [rax]
0x00de8cd6: test   r14,r14
0x00de8cd9: je     0x140de8e2e
0x00de8cdf: test   r15b,r15b
0x00de8ce2: jne    0x140de8d17
0x00de8ce4: mov    rcx,r12
0x00de8ce7: call   0x140070410
0x00de8cec: movsxd rcx,esi
0x00de8cef: lea    rdx,[rip+0x877d5a]        # 0x141660a50 ; literal="The"
0x00de8cf6: cmp    rcx,rax
0x00de8cf9: cmovne rdx,rbx
0x00de8cfd: mov    rcx,rdi
0x00de8d00: call   0x140070b20
0x00de8d05: lea    rdx,[rip+0x94d05c]        # 0x141735d68 ; literal=" music is played on "
0x00de8d0c: mov    rcx,rdi
0x00de8d0f: call   0x140070b20
0x00de8d14: mov    r15b,0x1
0x00de8d17: lea    rcx,[rsp+0x40]
0x00de8d1c: call   0x1400703d0
0x00de8d21: mov    rcx,QWORD PTR [rax]
0x00de8d24: cmp    DWORD PTR [rcx+0x10],0x1
0x00de8d28: jne    0x140de8d3e
0x00de8d2a: lea    rdx,[rip+0x830bf7]        # 0x141619928 ; literal="a"
0x00de8d31: mov    rcx,rdi
0x00de8d34: call   0x140070b20
0x00de8d39: jmp    0x140de8df9
0x00de8d3e: lea    rcx,[rbp+0x190]
0x00de8d45: call   0x140070c50
0x00de8d4a: nop
0x00de8d4b: lea    rcx,[rsp+0x40]
0x00de8d50: call   0x1400703d0
0x00de8d55: mov    rcx,QWORD PTR [rax]
0x00de8d58: lea    rdx,[rbp+0x190]
0x00de8d5f: mov    ecx,DWORD PTR [rcx+0xc]
0x00de8d62: call   0x140545040
0x00de8d67: lea    rdx,[rbp+0x190]
0x00de8d6e: mov    rcx,rdi
0x00de8d71: call   0x1400bb2d0
0x00de8d76: nop
0x00de8d77: lea    rcx,[rbp+0x190]
0x00de8d7e: call   0x1400693f0
0x00de8d83: lea    rcx,[rsp+0x40]
0x00de8d88: call   0x1400703d0
0x00de8d8d: mov    rbx,QWORD PTR [rax]
0x00de8d90: lea    rcx,[rsp+0x40]
0x00de8d95: call   0x1400703d0
0x00de8d9a: mov    rcx,QWORD PTR [rax]
0x00de8d9d: mov    eax,DWORD PTR [rcx+0xc]
0x00de8da0: cmp    DWORD PTR [rbx+0x10],eax
0x00de8da3: jle    0x140de8df9
0x00de8da5: lea    rdx,[rip+0x81a9e8]        # 0x141603794 ; literal=" to "
0x00de8dac: mov    rcx,rdi
0x00de8daf: call   0x140070b20
0x00de8db4: lea    rcx,[rbp+0x190]
0x00de8dbb: call   0x140070c50
0x00de8dc0: nop
0x00de8dc1: lea    rcx,[rsp+0x40]
0x00de8dc6: call   0x1400703d0
0x00de8dcb: mov    rcx,QWORD PTR [rax]
0x00de8dce: lea    rdx,[rbp+0x190]
0x00de8dd5: mov    ecx,DWORD PTR [rcx+0x10]
0x00de8dd8: call   0x140545040
0x00de8ddd: lea    rdx,[rbp+0x190]
0x00de8de4: mov    rcx,rdi
0x00de8de7: call   0x1400bb2d0
0x00de8dec: nop
0x00de8ded: lea    rcx,[rbp+0x190]
0x00de8df4: call   0x1400693f0
0x00de8df9: lea    rdx,[rip+0x815b6c]        # 0x1415fe96c ; literal=" "
0x00de8e00: mov    rcx,rdi
0x00de8e03: call   0x140070b20
0x00de8e08: lea    rcx,[rsp+0x40]
0x00de8e0d: call   0x1400703d0
0x00de8e12: mov    rcx,QWORD PTR [rax]
0x00de8e15: cmp    DWORD PTR [rcx+0x10],0x2
0x00de8e19: mov    rcx,rdi
0x00de8e1c: lea    rdx,[r14+0x88]
0x00de8e23: jge    0x140de8e29
0x00de8e25: lea    rdx,[r14+0x68]
0x00de8e29: call   0x1400bb2d0
0x00de8e2e: cmp    esi,0x3
0x00de8e31: jl     0x140de8e3c
0x00de8e33: lea    rdx,[rip+0x8164ce]        # 0x1415ff308 ; literal=", "
0x00de8e3a: jmp    0x140de8e48
0x00de8e3c: cmp    esi,0x2
0x00de8e3f: jne    0x140de8e50
0x00de8e41: lea    rdx,[rip+0x8164f8]        # 0x1415ff340 ; literal=" and "
0x00de8e48: mov    rcx,rdi
0x00de8e4b: call   0x140070b20
0x00de8e50: lea    r14,[rip+0x94c699]        # 0x1417354f0 ; literal="recites"
0x00de8e57: lea    rcx,[rsp+0x40]
0x00de8e5c: call   0x1400703c0
0x00de8e61: dec    esi
0x00de8e63: lea    r8,[rbp+0x30]
0x00de8e67: lea    rdx,[rsp+0x30]
0x00de8e6c: lea    rcx,[rsp+0x40]
0x00de8e71: call   0x1400703e0
0x00de8e76: xor    edx,edx
0x00de8e78: movzx  ecx,BYTE PTR [rax]
0x00de8e7b: call   0x140066d70
0x00de8e80: test   al,al
0x00de8e82: lea    rbx,[rip+0x94cecf]        # 0x141735d58 ; literal="while the"
0x00de8e89: jne    0x140de8975
0x00de8e8f: lea    rdx,[rip+0x82b7ea]        # 0x141614680 ; literal=".  "
0x00de8e96: mov    rcx,rdi
0x00de8e99: call   0x140070b20
0x00de8e9e: xor    sil,sil
0x00de8ea1: xor    r15b,r15b
0x00de8ea4: xor    bl,bl
0x00de8ea6: xor    r14b,r14b
0x00de8ea9: add    r13,0x88
0x00de8eb0: lea    rdx,[rsp+0x58]
0x00de8eb5: mov    rcx,r13
0x00de8eb8: call   0x140070800
0x00de8ebd: lea    rdx,[rbp-0x78]
0x00de8ec1: mov    rcx,r13
0x00de8ec4: call   0x1400707f0
0x00de8ec9: lea    r8,[rbp-0x78]
0x00de8ecd: lea    rdx,[rsp+0x34]
0x00de8ed2: lea    rcx,[rsp+0x58]
0x00de8ed7: call   0x1400703e0
0x00de8edc: xor    edx,edx
0x00de8ede: movzx  ecx,BYTE PTR [rax]
0x00de8ee1: call   0x140066d70
0x00de8ee6: test   al,al
0x00de8ee8: je     0x140de9098
0x00de8eee: xchg   ax,ax
0x00de8ef0: lea    rcx,[rsp+0x58]
0x00de8ef5: call   0x1400703d0
0x00de8efa: mov    rcx,QWORD PTR [rax]
0x00de8efd: add    rcx,0x48
0x00de8f01: lea    rdx,[rbp-0x68]
0x00de8f05: call   0x140070800
0x00de8f0a: lea    rcx,[rsp+0x58]
0x00de8f0f: call   0x1400703d0
0x00de8f14: mov    rcx,QWORD PTR [rax]
0x00de8f17: add    rcx,0x48
0x00de8f1b: lea    rdx,[rsp+0x78]
0x00de8f20: call   0x1400707f0
0x00de8f25: lea    r8,[rsp+0x78]
0x00de8f2a: lea    rdx,[rsp+0x30]
0x00de8f2f: lea    rcx,[rbp-0x68]
0x00de8f33: call   0x1400703e0
0x00de8f38: xor    edx,edx
0x00de8f3a: movzx  ecx,BYTE PTR [rax]
0x00de8f3d: call   0x140066d70
0x00de8f42: test   al,al
0x00de8f44: je     0x140de8fa0
0x00de8f46: lea    rcx,[rbp-0x68]
0x00de8f4a: call   0x1400703d0
0x00de8f4f: mov    edx,DWORD PTR [rax]
0x00de8f51: test   edx,edx
0x00de8f53: je     0x140de8f73
0x00de8f55: sub    edx,0x1
0x00de8f58: je     0x140de8f6e
0x00de8f5a: sub    edx,0x1
0x00de8f5d: je     0x140de8f6a
0x00de8f5f: cmp    edx,0x1
0x00de8f62: jne    0x140de8f76
0x00de8f64: movzx  r14d,dl
0x00de8f68: jmp    0x140de8f76
0x00de8f6a: mov    bl,0x1
0x00de8f6c: jmp    0x140de8f76
0x00de8f6e: mov    r15b,0x1
0x00de8f71: jmp    0x140de8f76
0x00de8f73: mov    sil,0x1
0x00de8f76: lea    rcx,[rbp-0x68]
0x00de8f7a: call   0x140070910
0x00de8f7f: lea    r8,[rsp+0x78]
0x00de8f84: lea    rdx,[rsp+0x30]
0x00de8f89: lea    rcx,[rbp-0x68]
0x00de8f8d: call   0x1400703e0
0x00de8f92: xor    edx,edx
0x00de8f94: movzx  ecx,BYTE PTR [rax]
0x00de8f97: call   0x140066d70
0x00de8f9c: test   al,al
0x00de8f9e: jne    0x140de8f46
0x00de8fa0: lea    rcx,[rsp+0x58]
0x00de8fa5: call   0x1400703c0
0x00de8faa: lea    r8,[rbp-0x78]
0x00de8fae: lea    rdx,[rsp+0x34]
0x00de8fb3: lea    rcx,[rsp+0x58]
0x00de8fb8: call   0x1400703e0
0x00de8fbd: xor    edx,edx
0x00de8fbf: movzx  ecx,BYTE PTR [rax]
0x00de8fc2: call   0x140066d70
0x00de8fc7: test   al,al
0x00de8fc9: jne    0x140de8ef0
0x00de8fcf: test   sil,sil
0x00de8fd2: jne    0x140de8fdd
0x00de8fd4: test   r14b,r14b
0x00de8fd7: je     0x140de9098
0x00de8fdd: mov    rcx,r12
0x00de8fe0: call   0x140070410
0x00de8fe5: cmp    rax,0x2
0x00de8fe9: jb     0x140de9098
0x00de8fef: test   sil,sil
0x00de8ff2: je     0x140de907a
0x00de8ff8: mov    rcx,rdi
0x00de8ffb: test   r14b,r14b
0x00de8ffe: je     0x140de903d
0x00de9000: lea    rdx,[rip+0x94cd79]        # 0x141735d80 ; literal="The music"
0x00de9007: call   0x140070b20
0x00de900c: test   r15b,r15b
0x00de900f: je     0x140de9027
0x00de9011: lea    rdx,[rip+0x94cc58]        # 0x141735c70 ; literal="al voices join in melody and counterpoint, harmony and rhythm"
0x00de9018: lea    rax,[rip+0x94cc91]        # 0x141735cb0 ; literal="al voices bring melody, counterpoint and rhythm"
0x00de901f: test   bl,bl
0x00de9021: cmove  rdx,rax
0x00de9025: jmp    0x140de9081
0x00de9027: lea    rdx,[rip+0x94ccb2]        # 0x141735ce0 ; literal="al voices cover melody, harmony and rhythm"
0x00de902e: lea    rax,[rip+0x94ccdb]        # 0x141735d10 ; literal=" is melody and rhythm without harmony"
0x00de9035: test   bl,bl
0x00de9037: cmove  rdx,rax
0x00de903b: jmp    0x140de9081
0x00de903d: lea    rdx,[rip+0x94cdac]        # 0x141735df0 ; literal="The musical voices "
0x00de9044: call   0x140070b20
0x00de9049: test   r15b,r15b
0x00de904c: je     0x140de9064
0x00de904e: lea    rdx,[rip+0x94cdb3]        # 0x141735e08 ; literal="join in melody, counterpoint and harmony"
0x00de9055: lea    rax,[rip+0x94cddc]        # 0x141735e38 ; literal="bring melody and counterpoint"
0x00de905c: test   bl,bl
0x00de905e: cmove  rdx,rax
0x00de9062: jmp    0x140de9081
0x00de9064: lea    rdx,[rip+0x94cded]        # 0x141735e58 ; literal="bring melody with harmony"
0x00de906b: lea    rax,[rip+0x94cd1e]        # 0x141735d90 ; literal="are joined in melody"
0x00de9072: test   bl,bl
0x00de9074: cmove  rdx,rax
0x00de9078: jmp    0x140de9081
0x00de907a: lea    rdx,[rip+0x94cd27]        # 0x141735da8 ; literal="The musical voices are purely rhythmic"
0x00de9081: mov    rcx,rdi
0x00de9084: call   0x140070b20
0x00de9089: lea    rdx,[rip+0x82b5f0]        # 0x141614680 ; literal=".  "
0x00de9090: mov    rcx,rdi
0x00de9093: call   0x140070b20
0x00de9098: lea    rbx,[rip+0xffffffffff216f61]        # 0x140000000
0x00de909f: mov    r12,QWORD PTR [rbp-0x38]
0x00de90a3: cmp    DWORD PTR [r12+0xe8],0xffffffff
0x00de90ac: jne    0x140de90c8
0x00de90ae: cmp    DWORD PTR [r12+0xec],0xffffffff
0x00de90b7: jne    0x140de90c8
0x00de90b9: cmp    DWORD PTR [r12+0xf0],0xffffffff
0x00de90c2: je     0x140de9483
0x00de90c8: lea    rdx,[rip+0x94cd01]        # 0x141735dd0 ; literal="The entire performance "
0x00de90cf: mov    rcx,rdi
0x00de90d2: call   0x140070b20
0x00de90d7: cmp    DWORD PTR [r12+0xf0],0xffffffff
0x00de90e0: je     0x140de92b8
0x00de90e6: lea    rdx,[rip+0x94ccfb]        # 0x141735de8 ; literal="should "
0x00de90ed: mov    rcx,rdi
0x00de90f0: call   0x140070b20
0x00de90f5: mov    eax,DWORD PTR [r12+0xf0]
0x00de90fd: add    eax,0xffffffde
0x00de9100: cmp    eax,0x26
0x00de9103: ja     0x140de92b8
0x00de9109: cdqe
0x00de910b: mov    ecx,DWORD PTR [rbx+rax*4+0xdef744]
0x00de9112: add    rcx,rbx
0x00de9115: jmp    rcx
0x00de9117: lea    rdx,[rip+0x94cda2]        # 0x141735ec0 ; literal="stress the rhythm"
0x00de911e: jmp    0x140de92b0
0x00de9123: lea    rdx,[rip+0x94cdae]        # 0x141735ed8 ; literal="be stately"
0x00de912a: jmp    0x140de92b0
0x00de912f: lea    rdx,[rip+0x94cdb2]        # 0x141735ee8 ; literal="be bright"
0x00de9136: jmp    0x140de92b0
0x00de913b: lea    rdx,[rip+0x94cdb6]        # 0x141735ef8 ; literal="be lively"
0x00de9142: jmp    0x140de92b0
0x00de9147: lea    rdx,[rip+0x94cd2a]        # 0x141735e78 ; literal="be made with skill"
0x00de914e: jmp    0x140de92b0
0x00de9153: lea    rdx,[rip+0x94cd36]        # 0x141735e90 ; literal="be vigorous"
0x00de915a: jmp    0x140de92b0
0x00de915f: lea    rdx,[rip+0x94cd3a]        # 0x141735ea0 ; literal="be spirited"
0x00de9166: jmp    0x140de92b0
0x00de916b: lea    rdx,[rip+0x94cd3e]        # 0x141735eb0 ; literal="be delicate"
0x00de9172: jmp    0x140de92b0
0x00de9177: lea    rdx,[rip+0x94cdd2]        # 0x141735f50 ; literal="bring a sense of motion"
0x00de917e: jmp    0x140de92b0
0x00de9183: lea    rdx,[rip+0x94cdb6]        # 0x141735f40 ; literal="be fiery"
0x00de918a: jmp    0x140de92b0
0x00de918f: lea    rdx,[rip+0x94cdd2]        # 0x141735f68 ; literal="be made with feeling"
0x00de9196: jmp    0x140de92b0
0x00de919b: lea    rdx,[rip+0x94cdde]        # 0x141735f80 ; literal="feel agitated"
0x00de91a2: jmp    0x140de92b0
0x00de91a7: lea    rdx,[rip+0x94cd5a]        # 0x141735f08 ; literal="be passionate"
0x00de91ae: jmp    0x140de92b0
0x00de91b3: lea    rdx,[rip+0x94cd5e]        # 0x141735f18 ; literal="sparkle"
0x00de91ba: jmp    0x140de92b0
0x00de91bf: lea    rdx,[rip+0x94cd5a]        # 0x141735f20 ; literal="be broad"
0x00de91c6: jmp    0x140de92b0
0x00de91cb: lea    rdx,[rip+0x94cd5e]        # 0x141735f30 ; literal="be made sweetly"
0x00de91d2: jmp    0x140de92b0
0x00de91d7: lea    rdx,[rip+0x94cdfa]        # 0x141735fd8 ; literal="be strong"
0x00de91de: jmp    0x140de92b0
0x00de91e3: lea    rdx,[rip+0x94cdfe]        # 0x141735fe8 ; literal="be energetic"
0x00de91ea: jmp    0x140de92b0
0x00de91ef: lea    rdx,[rip+0x94ce02]        # 0x141735ff8 ; literal="be forceful"
0x00de91f6: jmp    0x140de92b0
0x00de91fb: lea    rdx,[rip+0x94ce06]        # 0x141736008 ; literal="feel heroic"
0x00de9202: jmp    0x140de92b0
0x00de9207: lea    rdx,[rip+0x94cd82]        # 0x141735f90 ; literal="be made expressively"
0x00de920e: jmp    0x140de92b0
0x00de9213: lea    rdx,[rip+0x94cd8e]        # 0x141735fa8 ; literal="feel furious"
0x00de921a: jmp    0x140de92b0
0x00de921f: lea    rdx,[rip+0x94cd92]        # 0x141735fb8 ; literal="be joyful"
0x00de9226: jmp    0x140de92b0
0x00de922b: lea    rdx,[rip+0x94cd96]        # 0x141735fc8 ; literal="be grand"
0x00de9232: jmp    0x140de92b0
0x00de9234: lea    rdx,[rip+0x94ce2d]        # 0x141736068 ; literal="be merry"
0x00de923b: jmp    0x140de92b0
0x00de923d: lea    rdx,[rip+0x94ce34]        # 0x141736078 ; literal="be graceful"
0x00de9244: jmp    0x140de92b0
0x00de9246: lea    rdx,[rip+0x94ce3b]        # 0x141736088 ; literal="build as it proceeds"
0x00de924d: jmp    0x140de92b0
0x00de924f: lea    rdx,[rip+0x94ce4a]        # 0x1417360a0 ; literal="evoke tears"
0x00de9256: jmp    0x140de92b0
0x00de9258: lea    rdx,[rip+0x94cdb9]        # 0x141736018 ; literal="be melancholic"
0x00de925f: jmp    0x140de92b0
0x00de9261: lea    rdx,[rip+0x94cdc0]        # 0x141736028 ; literal="feel mournful"
0x00de9268: jmp    0x140de92b0
0x00de926a: lea    rdx,[rip+0x94cdc7]        # 0x141736038 ; literal="be made with a light touch"
0x00de9271: jmp    0x140de92b0
0x00de9273: lea    rdx,[rip+0x94cdde]        # 0x141736058 ; literal="feel heavy"
0x00de927a: jmp    0x140de92b0
0x00de927c: lea    rdx,[rip+0x94ce75]        # 0x1417360f8 ; literal="feel mysterious"
0x00de9283: jmp    0x140de92b0
0x00de9285: lea    rdx,[rip+0x94ce7c]        # 0x141736108 ; literal="be jumpy"
0x00de928c: jmp    0x140de92b0
0x00de928e: lea    rdx,[rip+0x94ce83]        # 0x141736118 ; literal="feel playful"
0x00de9295: jmp    0x140de92b0
0x00de9297: lea    rdx,[rip+0x94ce8a]        # 0x141736128 ; literal="feel tender"
0x00de929e: jmp    0x140de92b0
0x00de92a0: lea    rdx,[rip+0x94ce09]        # 0x1417360b0 ; literal="feel calm"
0x00de92a7: jmp    0x140de92b0
0x00de92a9: lea    rdx,[rip+0x94ce10]        # 0x1417360c0 ; literal="be triumphant"
0x00de92b0: mov    rcx,rdi
0x00de92b3: call   0x140070b20
0x00de92b8: cmp    DWORD PTR [r12+0xe8],0xffffffff
0x00de92c1: je     0x140de93a3
0x00de92c7: cmp    DWORD PTR [r12+0xf0],0xffffffff
0x00de92d0: je     0x140de92e1
0x00de92d2: lea    rdx,[rip+0x816067]        # 0x1415ff340 ; literal=" and "
0x00de92d9: mov    rcx,rdi
0x00de92dc: call   0x140070b20
0x00de92e1: movsxd rax,DWORD PTR [r12+0xe8]
0x00de92e9: cmp    eax,0x21
0x00de92ec: ja     0x140de93a3
0x00de92f2: mov    ecx,DWORD PTR [rbx+rax*4+0xdef7e0]
0x00de92f9: add    rcx,rbx
0x00de92fc: jmp    rcx
0x00de92fe: lea    rdx,[rip+0x94cdcb]        # 0x1417360d0 ; literal="is at a free tempo"
0x00de9305: jmp    0x140de939b
0x00de930a: lea    rdx,[rip+0x94cdd7]        # 0x1417360e8 ; literal="is very slow"
0x00de9311: jmp    0x140de939b
0x00de9316: lea    rdx,[rip+0x94ce6b]        # 0x141736188 ; literal="is slow"
0x00de931d: jmp    0x140de939b
0x00de931f: lea    rdx,[rip+0x94ce6a]        # 0x141736190 ; literal="is at a walking pace"
0x00de9326: jmp    0x140de939b
0x00de9328: lea    rdx,[rip+0x94ce79]        # 0x1417361a8 ; literal="is moderately paced"
0x00de932f: jmp    0x140de939b
0x00de9331: lea    rdx,[rip+0x94ce88]        # 0x1417361c0 ; literal="is moderately fast"
0x00de9338: jmp    0x140de939b
0x00de933a: lea    rdx,[rip+0x94cdf7]        # 0x141736138 ; literal="is fast"
0x00de9341: jmp    0x140de939b
0x00de9343: lea    rdx,[rip+0x94cdf6]        # 0x141736140 ; literal="is very fast"
0x00de934a: jmp    0x140de939b
0x00de934c: lea    rdx,[rip+0x94cdfd]        # 0x141736150 ; literal="is extremely fast"
0x00de9353: jmp    0x140de939b
0x00de9355: lea    rdx,[rip+0x94ce0c]        # 0x141736168 ; literal="accelerates as it proceeds"
0x00de935c: jmp    0x140de939b
0x00de935e: lea    rdx,[rip+0x94c293]        # 0x1417355f8 ; literal="slows and broadens"
0x00de9365: jmp    0x140de939b
0x00de9367: lea    rdx,[rip+0x94c2a2]        # 0x141735610 ; literal="is consistently slowing"
0x00de936e: jmp    0x140de939b
0x00de9370: lea    rdx,[rip+0x94c2b1]        # 0x141735628 ; literal="is at a hurried pace"
0x00de9377: jmp    0x140de939b
0x00de9379: lea    rdx,[rip+0x94c2c0]        # 0x141735640 ; literal="gradually slows as it comes to an end"
0x00de9380: jmp    0x140de939b
0x00de9382: lea    rdx,[rip+0x94c1ef]        # 0x141735578 ; literal="slows down and dies away as it draws to a close"
0x00de9389: jmp    0x140de939b
0x00de938b: lea    rdx,[rip+0x94c216]        # 0x1417355a8 ; literal="becomes calmer as the end is approached"
0x00de9392: jmp    0x140de939b
0x00de9394: lea    rdx,[rip+0x94c235]        # 0x1417355d0 ; literal="becomes frenzied as it proceeds"
0x00de939b: mov    rcx,rdi
0x00de939e: call   0x140070b20
0x00de93a3: cmp    DWORD PTR [r12+0xec],0xffffffff
0x00de93ac: je     0x140de9474
0x00de93b2: cmp    DWORD PTR [r12+0xe8],0xffffffff
0x00de93bb: jne    0x140de93cf
0x00de93bd: cmp    DWORD PTR [r12+0xf0],0xffffffff
0x00de93c6: lea    rdx,[rip+0x94c223]        # 0x1417355f0 ; literal="is to"
0x00de93cd: je     0x140de93d6
0x00de93cf: lea    rdx,[rip+0x94c2da]        # 0x1417356b0 ; literal=", and it is to"
0x00de93d6: mov    rcx,rdi
0x00de93d9: call   0x140070b20
0x00de93de: lea    rdx,[rip+0x815587]        # 0x1415fe96c ; literal=" "
0x00de93e5: mov    rcx,rdi
0x00de93e8: call   0x140070b20
0x00de93ed: mov    eax,DWORD PTR [r12+0xec]
0x00de93f5: add    eax,0xffffffec
0x00de93f8: cmp    eax,0xa
0x00de93fb: ja     0x140de9474
0x00de93fd: cdqe
0x00de93ff: mov    ecx,DWORD PTR [rbx+rax*4+0xdef868]
0x00de9406: add    rcx,rbx
0x00de9409: jmp    rcx
0x00de940b: lea    rdx,[rip+0x94c2ae]        # 0x1417356c0 ; literal="be in whispered undertones"
0x00de9412: jmp    0x140de946c
0x00de9414: lea    rdx,[rip+0x94c2c5]        # 0x1417356e0 ; literal="be very soft"
0x00de941b: jmp    0x140de946c
0x00de941d: lea    rdx,[rip+0x94c2cc]        # 0x1417356f0 ; literal="be soft"
0x00de9424: jmp    0x140de946c
0x00de9426: lea    rdx,[rip+0x94c23b]        # 0x141735668 ; literal="be moderately soft"
0x00de942d: jmp    0x140de946c
0x00de942f: lea    rdx,[rip+0x94c24a]        # 0x141735680 ; literal="be moderately loud"
0x00de9436: jmp    0x140de946c
0x00de9438: lea    rdx,[rip+0x94c259]        # 0x141735698 ; literal="be loud"
0x00de943f: jmp    0x140de946c
0x00de9441: lea    rdx,[rip+0x94c258]        # 0x1417356a0 ; literal="be very loud"
0x00de9448: jmp    0x140de946c
0x00de944a: lea    rdx,[rip+0x94c307]        # 0x141735758 ; literal="become louder and louder"
0x00de9451: jmp    0x140de946c
0x00de9453: lea    rdx,[rip+0x94c31e]        # 0x141735778 ; literal="become softer and softer"
0x00de945a: jmp    0x140de946c
0x00de945c: lea    rdx,[rip+0x94c335]        # 0x141735798 ; literal="fade into silence"
0x00de9463: jmp    0x140de946c
0x00de9465: lea    rdx,[rip+0x94c344]        # 0x1417357b0 ; literal="start loud then be immediately soft"
0x00de946c: mov    rcx,rdi
0x00de946f: call   0x140070b20
0x00de9474: lea    rdx,[rip+0x82b205]        # 0x141614680 ; literal=".  "
0x00de947b: mov    rcx,rdi
0x00de947e: call   0x140070b20
0x00de9483: mov    r14d,0xffffffff
0x00de9489: mov    ebx,r14d
0x00de948c: mov    DWORD PTR [rbp-0x80],ebx
0x00de948f: mov    esi,r14d
0x00de9492: mov    DWORD PTR [rbp+0x28],r14d
0x00de9496: lea    rdx,[rsp+0x68]
0x00de949b: mov    rcx,r13
0x00de949e: call   0x140070800
0x00de94a3: lea    rdx,[rbp-0x78]
0x00de94a7: mov    rcx,r13
0x00de94aa: call   0x1400707f0
0x00de94af: lea    r8,[rbp-0x78]
0x00de94b3: lea    rdx,[rsp+0x34]
0x00de94b8: lea    rcx,[rsp+0x68]
0x00de94bd: call   0x1400703e0
0x00de94c2: xor    edx,edx
0x00de94c4: movzx  ecx,BYTE PTR [rax]
0x00de94c7: call   0x140066d70
0x00de94cc: test   al,al
0x00de94ce: je     0x140de975c
0x00de94d4: lea    rcx,[rsp+0x68]
0x00de94d9: call   0x1400703d0
0x00de94de: mov    rcx,QWORD PTR [rax]
0x00de94e1: add    rcx,0x48
0x00de94e5: lea    rdx,[rsp+0x70]
0x00de94ea: call   0x140070800
0x00de94ef: lea    rcx,[rsp+0x68]
0x00de94f4: call   0x1400703d0
0x00de94f9: mov    rcx,QWORD PTR [rax]
0x00de94fc: add    rcx,0x48
0x00de9500: lea    rdx,[rsp+0x78]
0x00de9505: call   0x1400707f0
0x00de950a: lea    rcx,[rsp+0x68]
0x00de950f: call   0x1400703d0
0x00de9514: mov    rcx,QWORD PTR [rax]
0x00de9517: add    rcx,0x60
0x00de951b: lea    rdx,[rsp+0x58]
0x00de9520: call   0x140070800
0x00de9525: lea    rcx,[rsp+0x68]
0x00de952a: call   0x1400703d0
0x00de952f: mov    rcx,QWORD PTR [rax]
0x00de9532: add    rcx,0x60
0x00de9536: lea    rdx,[rbp-0x18]
0x00de953a: call   0x1400707f0
0x00de953f: lea    r8,[rsp+0x78]
0x00de9544: lea    rdx,[rsp+0x30]
0x00de9549: lea    rcx,[rsp+0x70]
0x00de954e: call   0x1400703e0
0x00de9553: xor    edx,edx
0x00de9555: movzx  ecx,BYTE PTR [rax]
0x00de9558: call   0x140066d70
0x00de955d: test   al,al
0x00de955f: je     0x140de9609
0x00de9565: lea    rcx,[rsp+0x70]
0x00de956a: call   0x1400703d0
0x00de956f: cmp    DWORD PTR [rax],0x0
0x00de9572: jne    0x140de959a
0x00de9574: lea    rcx,[rsp+0x58]
0x00de9579: call   0x1400703d0
0x00de957e: cmp    ebx,DWORD PTR [rax]
0x00de9580: je     0x140de959a
0x00de9582: cmp    ebx,r14d
0x00de9585: jne    0x140de9595
0x00de9587: lea    rcx,[rsp+0x58]
0x00de958c: call   0x1400703d0
0x00de9591: mov    ebx,DWORD PTR [rax]
0x00de9593: jmp    0x140de959a
0x00de9595: mov    ebx,0xfffffffe
0x00de959a: lea    rcx,[rsp+0x70]
0x00de959f: call   0x1400703d0
0x00de95a4: cmp    DWORD PTR [rax],0x1
0x00de95a7: jne    0x140de95cf
0x00de95a9: lea    rcx,[rsp+0x58]
0x00de95ae: call   0x1400703d0
0x00de95b3: cmp    esi,DWORD PTR [rax]
0x00de95b5: je     0x140de95cf
0x00de95b7: cmp    esi,r14d
0x00de95ba: jne    0x140de95ca
0x00de95bc: lea    rcx,[rsp+0x58]
0x00de95c1: call   0x1400703d0
0x00de95c6: mov    esi,DWORD PTR [rax]
0x00de95c8: jmp    0x140de95cf
0x00de95ca: mov    esi,0xfffffffe
0x00de95cf: lea    rcx,[rsp+0x70]
0x00de95d4: call   0x140070910
0x00de95d9: lea    rcx,[rsp+0x58]
0x00de95de: call   0x140070910
0x00de95e3: lea    r8,[rsp+0x78]
0x00de95e8: lea    rdx,[rsp+0x30]
0x00de95ed: lea    rcx,[rsp+0x70]
0x00de95f2: call   0x1400703e0
0x00de95f7: xor    edx,edx
0x00de95f9: movzx  ecx,BYTE PTR [rax]
0x00de95fc: call   0x140066d70
0x00de9601: test   al,al
0x00de9603: jne    0x140de9565
0x00de9609: lea    rcx,[rsp+0x68]
0x00de960e: call   0x1400703c0
0x00de9613: lea    r8,[rbp-0x78]
0x00de9617: lea    rdx,[rsp+0x34]
0x00de961c: lea    rcx,[rsp+0x68]
0x00de9621: call   0x1400703e0
0x00de9626: xor    edx,edx
0x00de9628: movzx  ecx,BYTE PTR [rax]
0x00de962b: call   0x140066d70
0x00de9630: test   al,al
0x00de9632: jne    0x140de94d4
0x00de9638: cmp    ebx,0xfffffffe
0x00de963b: cmove  ebx,r14d
0x00de963f: mov    DWORD PTR [rbp-0x80],ebx
0x00de9642: cmp    esi,0xfffffffe
0x00de9645: cmove  esi,r14d
0x00de9649: mov    DWORD PTR [rbp+0x28],esi
0x00de964c: cmp    ebx,r14d
0x00de964f: je     0x140de9721
0x00de9655: mov    rcx,rdi
0x00de9658: cmp    esi,r14d
0x00de965b: je     0x140de9715
0x00de9661: cmp    ebx,esi
0x00de9663: jne    0x140de96b2
0x00de9665: lea    rdx,[rip+0x94c08c]        # 0x1417356f8 ; literal="The melody and counterpoint both have "
0x00de966c: call   0x140070b20
0x00de9671: test   ebx,ebx
0x00de9673: mov    ecx,ebx
0x00de9675: je     0x140de973e
0x00de967b: sub    ecx,0x1
0x00de967e: je     0x140de96a6
0x00de9680: sub    ecx,0x1
0x00de9683: je     0x140de969a
0x00de9685: cmp    ecx,0x1
0x00de9688: jne    0x140de974d
0x00de968e: lea    rdx,[rip+0x94c21b]        # 0x1417358b0 ; literal="phrases of varied length"
0x00de9695: jmp    0x140de9745
0x00de969a: lea    rdx,[rip+0x94c0a7]        # 0x141735748 ; literal="long phrases"
0x00de96a1: jmp    0x140de9745
0x00de96a6: lea    rdx,[rip+0x94c083]        # 0x141735730 ; literal="mid-length phrases"
0x00de96ad: jmp    0x140de9745
0x00de96b2: lea    rdx,[rip+0x94c217]        # 0x1417358d0 ; literal="The melody has "
0x00de96b9: call   0x140070b20
0x00de96be: mov    ecx,ebx
0x00de96c0: test   ebx,ebx
0x00de96c2: je     0x140de96ee
0x00de96c4: sub    ecx,0x1
0x00de96c7: je     0x140de96e5
0x00de96c9: sub    ecx,0x1
0x00de96cc: je     0x140de96dc
0x00de96ce: cmp    ecx,0x1
0x00de96d1: jne    0x140de96fd
0x00de96d3: lea    rdx,[rip+0x94c1d6]        # 0x1417358b0 ; literal="phrases of varied length"
0x00de96da: jmp    0x140de96f5
0x00de96dc: lea    rdx,[rip+0x94c065]        # 0x141735748 ; literal="long phrases"
0x00de96e3: jmp    0x140de96f5
0x00de96e5: lea    rdx,[rip+0x94c044]        # 0x141735730 ; literal="mid-length phrases"
0x00de96ec: jmp    0x140de96f5
0x00de96ee: lea    rdx,[rip+0x94c02b]        # 0x141735720 ; literal="short phrases"
0x00de96f5: mov    rcx,rdi
0x00de96f8: call   0x140070b20
0x00de96fd: lea    rdx,[rip+0x94c1dc]        # 0x1417358e0 ; literal=", while the counterpoint has "
0x00de9704: mov    rcx,rdi
0x00de9707: call   0x140070b20
0x00de970c: mov    ecx,esi
0x00de970e: test   esi,esi
0x00de9710: jmp    0x140de9675
0x00de9715: lea    rdx,[rip+0x94c1b4]        # 0x1417358d0 ; literal="The melody has "
0x00de971c: jmp    0x140de966c
0x00de9721: cmp    esi,r14d
0x00de9724: je     0x140de975c
0x00de9726: lea    rdx,[rip+0x94c0ab]        # 0x1417357d8 ; literal="The counterpoint melody has "
0x00de972d: mov    rcx,rdi
0x00de9730: call   0x140070b20
0x00de9735: mov    ecx,esi
0x00de9737: test   esi,esi
0x00de9739: jmp    0x140de9675
0x00de973e: lea    rdx,[rip+0x94bfdb]        # 0x141735720 ; literal="short phrases"
0x00de9745: mov    rcx,rdi
0x00de9748: call   0x140070b20
0x00de974d: lea    rdx,[rip+0x94c1ac]        # 0x141735900 ; literal=" throughout the form.  "
0x00de9754: mov    rcx,rdi
0x00de9757: call   0x140070b20
0x00de975c: mov    ecx,DWORD PTR [r12+0x114]
0x00de9764: test   ecx,ecx
0x00de9766: je     0x140de97a0
0x00de9768: sub    ecx,0x1
0x00de976b: je     0x140de9797
0x00de976d: sub    ecx,0x1
0x00de9770: je     0x140de978e
0x00de9772: sub    ecx,0x1
0x00de9775: je     0x140de9785
0x00de9777: cmp    ecx,0x1
0x00de977a: jne    0x140de97af
0x00de977c: lea    rdx,[rip+0x94c22d]        # 0x1417359b0 ; literal="The music is broadly layered with chords spanning the range.  "
0x00de9783: jmp    0x140de97a7
0x00de9785: lea    rdx,[rip+0x94c1d4]        # 0x141735960 ; literal="Pitches are densely packed in clusters as music moves from chord to chord.  "
0x00de978c: jmp    0x140de97a7
0x00de978e: lea    rdx,[rip+0x94c0cb]        # 0x141735860 ; literal="Chords, seldom-used, are sparse -- intervals and single pitches are favored.  "
0x00de9795: jmp    0x140de97a7
0x00de9797: lea    rdx,[rip+0x94c08a]        # 0x141735828 ; literal="Never more than an interval sounds at once.  "
0x00de979e: jmp    0x140de97a7
0x00de97a0: lea    rdx,[rip+0x94c051]        # 0x1417357f8 ; literal="Only one pitch is ever played at a time.  "
0x00de97a7: mov    rcx,rdi
0x00de97aa: call   0x140070b20
0x00de97af: test   BYTE PTR [r12+0x120],0x2
0x00de97b8: je     0x140de97c9
0x00de97ba: lea    rdx,[rip+0x94c22f]        # 0x1417359f0 ; literal="The music repeats for as long as necessary.  "
0x00de97c1: mov    rcx,rdi
0x00de97c4: call   0x140070b20
0x00de97c9: xor    r14b,r14b
0x00de97cc: xor    bl,bl
0x00de97ce: xor    sil,sil
0x00de97d1: lea    rdx,[rbp+0x20]
0x00de97d5: mov    rcx,r13
0x00de97d8: call   0x140070800
0x00de97dd: lea    rdx,[rbp+0x48]
0x00de97e1: mov    rcx,r13
0x00de97e4: call   0x1400707f0
0x00de97e9: lea    r8,[rbp+0x48]
0x00de97ed: lea    rdx,[rsp+0x30]
0x00de97f2: lea    rcx,[rbp+0x20]
0x00de97f6: call   0x1400703e0
0x00de97fb: xor    edx,edx
0x00de97fd: movzx  ecx,BYTE PTR [rax]
0x00de9800: call   0x140066d70
0x00de9805: test   al,al
0x00de9807: je     0x140de9868
0x00de9809: mov    r15d,0x1
0x00de980f: nop
0x00de9810: lea    rcx,[rbp+0x20]
0x00de9814: call   0x1400703d0
0x00de9819: mov    rcx,QWORD PTR [rax]
0x00de981c: movzx  ebx,bl
0x00de981f: cmp    DWORD PTR [rcx+0x1c],0xffffffff
0x00de9823: cmovne ebx,r15d
0x00de9827: lea    rcx,[rbp+0x20]
0x00de982b: call   0x1400703d0
0x00de9830: mov    rcx,QWORD PTR [rax]
0x00de9833: movzx  esi,sil
0x00de9837: cmp    DWORD PTR [rcx+0x24],0xffffffff
0x00de983b: cmovne esi,r15d
0x00de983f: lea    rcx,[rbp+0x20]
0x00de9843: call   0x1400703c0
0x00de9848: lea    r8,[rbp+0x48]
0x00de984c: lea    rdx,[rsp+0x30]
0x00de9851: lea    rcx,[rbp+0x20]
0x00de9855: call   0x1400703e0
0x00de985a: xor    edx,edx
0x00de985c: movzx  ecx,BYTE PTR [rax]
0x00de985f: call   0x140066d70
0x00de9864: test   al,al
0x00de9866: jne    0x140de9810
0x00de9868: mov    edx,DWORD PTR [r12+0xfc]
0x00de9870: cmp    edx,0xffffffff
0x00de9873: jne    0x140de9898
0x00de9875: test   bl,bl
0x00de9877: jne    0x140de991f
0x00de987d: lea    rdx,[rip+0x94c19c]        # 0x141735a20 ; literal="It is performed "
0x00de9884: mov    rcx,rdi
0x00de9887: call   0x140070b20
0x00de988c: mov    r14b,0x1
0x00de988f: lea    rdx,[rip+0x94c082]        # 0x141735918 ; literal="without preference for a scale"
0x00de9896: jmp    0x140de9917
0x00de9898: lea    rcx,[rip+0x171aa39]        # 0x1425042d8
0x00de989f: call   0x140073b30
0x00de98a4: test   rax,rax
0x00de98a7: je     0x140de991f
0x00de98a9: cmp    DWORD PTR [r12+0x100],0x0
0x00de98b2: jl     0x140de991f
0x00de98b4: lea    r15,[rax+0x90]
0x00de98bb: mov    rcx,r15
0x00de98be: call   0x140070410
0x00de98c3: movsxd rdx,DWORD PTR [r12+0x100]
0x00de98cb: cmp    rdx,rax
0x00de98ce: jae    0x140de991f
0x00de98d0: lea    rdx,[rip+0x94c149]        # 0x141735a20 ; literal="It is performed "
0x00de98d7: mov    rcx,rdi
0x00de98da: call   0x140070b20
0x00de98df: mov    r14b,0x1
0x00de98e2: lea    rdx,[rip+0x94c04f]        # 0x141735938 ; literal="using the "
0x00de98e9: mov    rcx,rdi
0x00de98ec: call   0x140070b20
0x00de98f1: movsxd rdx,DWORD PTR [r12+0x100]
0x00de98f9: mov    rcx,r15
0x00de98fc: call   0x1400707e0
0x00de9901: mov    rdx,QWORD PTR [rax]
0x00de9904: add    rdx,0x8
0x00de9908: mov    rcx,rdi
0x00de990b: call   0x1400bb2d0
0x00de9910: lea    rdx,[rip+0x94c02d]        # 0x141735944 ; literal=" scale"
0x00de9917: mov    rcx,rdi
0x00de991a: call   0x140070b20
0x00de991f: cmp    DWORD PTR [r12+0x104],0xffffffff
0x00de9928: jne    0x140de9933
0x00de992a: test   sil,sil
0x00de992d: jne    0x140de9a32
0x00de9933: test   r14b,r14b
0x00de9936: jne    0x140de994a
0x00de9938: lea    rdx,[rip+0x94c0e1]        # 0x141735a20 ; literal="It is performed "
0x00de993f: mov    rcx,rdi
0x00de9942: call   0x140070b20
0x00de9947: mov    r14b,0x1
0x00de994a: cmp    DWORD PTR [r12+0xfc],0xffffffff
0x00de9953: jne    0x140de9960
0x00de9955: test   bl,bl
0x00de9957: lea    rdx,[rip+0x8198c6]        # 0x141603224 ; literal="in "
0x00de995e: jne    0x140de9967
0x00de9960: lea    rdx,[rip+0x94bfe9]        # 0x141735950 ; literal=" and in "
0x00de9967: mov    rcx,rdi
0x00de996a: call   0x140070b20
0x00de996f: cmp    DWORD PTR [r12+0x104],0xffffffff
0x00de9978: jne    0x140de998f
0x00de997a: test   sil,sil
0x00de997d: jne    0x140de9a32
0x00de9983: lea    rdx,[rip+0x94c0ee]        # 0x141735a78 ; literal="free rhythm"
0x00de998a: jmp    0x140de9a2a
0x00de998f: lea    rdx,[rip+0x8156e2]        # 0x1415ff078 ; literal="the "
0x00de9996: mov    rcx,rdi
0x00de9999: call   0x140070b20
0x00de999e: mov    edx,DWORD PTR [r12+0x104]
0x00de99a6: lea    rcx,[rip+0x171a95b]        # 0x142504308
0x00de99ad: call   0x140073b30
0x00de99b2: mov    rbx,rax
0x00de99b5: test   rax,rax
0x00de99b8: je     0x140de9a23
0x00de99ba: cmp    DWORD PTR [r12+0x108],0x0
0x00de99c3: jl     0x140de99e9
0x00de99c5: movsxd rsi,DWORD PTR [r12+0x108]
0x00de99cd: lea    rcx,[rax+0x20]
0x00de99d1: call   0x140070410
0x00de99d6: cmp    rsi,rax
0x00de99d9: jae    0x140de99e9
0x00de99db: mov    rdx,rsi
0x00de99de: lea    rcx,[rbx+0x20]
0x00de99e2: call   0x1400707e0
0x00de99e7: jmp    0x140de9a18
0x00de99e9: cmp    DWORD PTR [r12+0x10c],0x0
0x00de99f2: jl     0x140de9a23
0x00de99f4: lea    rsi,[rbx+0x8]
0x00de99f8: movsxd rbx,DWORD PTR [r12+0x10c]
0x00de9a00: mov    rcx,rsi
0x00de9a03: call   0x140070410
0x00de9a08: cmp    rbx,rax
0x00de9a0b: jae    0x140de9a23
0x00de9a0d: mov    rdx,rbx
0x00de9a10: mov    rcx,rsi
0x00de9a13: call   0x1400707e0
0x00de9a18: mov    rdx,QWORD PTR [rax]
0x00de9a1b: mov    rcx,rdi
0x00de9a1e: call   0x1400bb2d0
0x00de9a23: lea    rdx,[rip+0x8772b6]        # 0x141660ce0 ; literal=" rhythm"
0x00de9a2a: mov    rcx,rdi
0x00de9a2d: call   0x140070b20
0x00de9a32: test   r14b,r14b
0x00de9a35: je     0x140de9a46
0x00de9a37: lea    rdx,[rip+0x82ac42]        # 0x141614680 ; literal=".  "
0x00de9a3e: mov    rcx,rdi
0x00de9a41: call   0x140070b20
0x00de9a46: cmp    DWORD PTR [r12+0x110],0x0
0x00de9a4f: je     0x140de9d35
0x00de9a55: mov    rcx,rdi
0x00de9a58: test   BYTE PTR [r12+0x120],0x1
0x00de9a61: lea    rdx,[rip+0x94c020]        # 0x141735a88 ; literal="Throughout, when possible, composers and performers are to "
0x00de9a68: jne    0x140de9a71
0x00de9a6a: lea    rdx,[rip+0x94c057]        # 0x141735ac8 ; literal="Throughout, when possible, performers are to "
0x00de9a71: call   0x140070b20
0x00de9a76: xor    r13d,r13d
0x00de9a79: mov    esi,r13d
0x00de9a7c: mov    r8d,r13d
0x00de9a7f: mov    r9d,DWORD PTR [r12+0x110]
0x00de9a87: mov    edx,DWORD PTR [rsp+0x50]
0x00de9a8b: lea    rdi,[rip+0xffffffffff21656e]        # 0x140000000
0x00de9a92: mov    r13d,0x1
0x00de9a98: cmp    r8d,0xf
0x00de9a9c: ja     0x140de9b19
0x00de9a9e: movsxd rax,r8d
0x00de9aa1: mov    ecx,DWORD PTR [rdi+rax*4+0xdef894]
0x00de9aa8: add    rcx,rdi
0x00de9aab: jmp    rcx
0x00de9aad: mov    edx,r13d
0x00de9ab0: jmp    0x140de9b19
0x00de9ab2: mov    edx,0x2
0x00de9ab7: jmp    0x140de9b19
0x00de9ab9: mov    edx,0x4
0x00de9abe: jmp    0x140de9b19
0x00de9ac0: mov    edx,0x8
0x00de9ac5: jmp    0x140de9b19
0x00de9ac7: mov    edx,0x10
0x00de9acc: jmp    0x140de9b19
0x00de9ace: mov    edx,0x80
0x00de9ad3: jmp    0x140de9b19
0x00de9ad5: mov    edx,0x100
0x00de9ada: jmp    0x140de9b19
0x00de9adc: mov    edx,0x200
0x00de9ae1: jmp    0x140de9b19
0x00de9ae3: mov    edx,0x400
0x00de9ae8: jmp    0x140de9b19
0x00de9aea: mov    edx,0x800
0x00de9aef: jmp    0x140de9b19
0x00de9af1: mov    edx,0x1000
0x00de9af6: jmp    0x140de9b19
0x00de9af8: mov    edx,0x2000
0x00de9afd: jmp    0x140de9b19
0x00de9aff: mov    edx,0x4000
0x00de9b04: jmp    0x140de9b19
0x00de9b06: mov    edx,0x8000
0x00de9b0b: jmp    0x140de9b19
0x00de9b0d: mov    edx,0x20
0x00de9b12: jmp    0x140de9b19
0x00de9b14: mov    edx,0x40
0x00de9b19: test   r9d,edx
0x00de9b1c: je     0x140de9b20
0x00de9b1e: inc    esi
0x00de9b20: inc    r8d
0x00de9b23: cmp    r8d,0x10
0x00de9b27: jl     0x140de9a98
0x00de9b2d: xor    r13d,r13d
0x00de9b30: mov    r14d,r13d
0x00de9b33: mov    ebx,DWORD PTR [rsp+0x50]
0x00de9b37: mov    rdi,QWORD PTR [rbp-0x28]
0x00de9b3b: mov    r13d,0x1
0x00de9b41: lea    rdx,[rip+0xffffffffff2164b8]        # 0x140000000
0x00de9b48: cmp    r14d,0xf
0x00de9b4c: ja     0x140de9bcd
0x00de9b52: movsxd rax,r14d
0x00de9b55: mov    ecx,DWORD PTR [rdx+rax*4+0xdef8d4]
0x00de9b5c: add    rcx,rdx
0x00de9b5f: jmp    rcx
0x00de9b61: mov    ebx,r13d
0x00de9b64: jmp    0x140de9bcd
0x00de9b66: mov    ebx,0x2
0x00de9b6b: jmp    0x140de9bcd
0x00de9b6d: mov    ebx,0x4
0x00de9b72: jmp    0x140de9bcd
0x00de9b74: mov    ebx,0x8
0x00de9b79: jmp    0x140de9bcd
0x00de9b7b: mov    ebx,0x10
0x00de9b80: jmp    0x140de9bcd
0x00de9b82: mov    ebx,0x80
0x00de9b87: jmp    0x140de9bcd
0x00de9b89: mov    ebx,0x100
0x00de9b8e: jmp    0x140de9bcd
0x00de9b90: mov    ebx,0x200
0x00de9b95: jmp    0x140de9bcd
0x00de9b97: mov    ebx,0x400
0x00de9b9c: jmp    0x140de9bcd
0x00de9b9e: mov    ebx,0x800
0x00de9ba3: jmp    0x140de9bcd
0x00de9ba5: mov    ebx,0x1000
0x00de9baa: jmp    0x140de9bcd
0x00de9bac: mov    ebx,0x2000
0x00de9bb1: jmp    0x140de9bcd
0x00de9bb3: mov    ebx,0x4000
0x00de9bb8: jmp    0x140de9bcd
0x00de9bba: mov    ebx,0x8000
0x00de9bbf: jmp    0x140de9bcd
0x00de9bc1: mov    ebx,0x20
0x00de9bc6: jmp    0x140de9bcd
0x00de9bc8: mov    ebx,0x40
0x00de9bcd: test   DWORD PTR [r12+0x110],ebx
0x00de9bd5: je     0x140de9d19
0x00de9bdb: cmp    ebx,0x100
0x00de9be1: ja     0x140de9c76
0x00de9be7: je     0x140de9c6d
0x00de9bed: lea    eax,[rbx-0x1]
0x00de9bf0: cmp    eax,0x7f
0x00de9bf3: ja     0x140de9cf5
0x00de9bf9: movzx  eax,BYTE PTR [rdx+rax*1+0xdef938]
0x00de9c01: mov    ecx,DWORD PTR [rdx+rax*4+0xdef914]
0x00de9c08: add    rcx,rdx
0x00de9c0b: jmp    rcx
0x00de9c0d: lea    rdx,[rip+0x94bee4]        # 0x141735af8 ; literal="glide from note to note"
0x00de9c14: jmp    0x140de9ced
0x00de9c19: lea    rdx,[rip+0x94be18]        # 0x141735a38 ; literal="use grace notes"
0x00de9c20: jmp    0x140de9ced
0x00de9c25: lea    rdx,[rip+0x94be1c]        # 0x141735a48 ; literal="use mordents"
0x00de9c2c: jmp    0x140de9ced
0x00de9c31: lea    rdx,[rip+0x94be20]        # 0x141735a58 ; literal="make trills"
0x00de9c38: jmp    0x140de9ced
0x00de9c3d: lea    rdx,[rip+0x94be24]        # 0x141735a68 ; literal="play rapid runs"
0x00de9c44: jmp    0x140de9ced
0x00de9c49: lea    rdx,[rip+0x94bf08]        # 0x141735b58 ; literal="locally improvise"
0x00de9c50: jmp    0x140de9ced
0x00de9c55: lea    rdx,[rip+0x94bfa4]        # 0x141735c00 ; literal="spread syllables over many notes"
0x00de9c5c: jmp    0x140de9ced
0x00de9c61: lea    rdx,[rip+0x94bfc0]        # 0x141735c28 ; literal="match notes and syllables"
0x00de9c68: jmp    0x140de9ced
0x00de9c6d: lea    rdx,[rip+0x94befc]        # 0x141735b70 ; literal="syncopate"
0x00de9c74: jmp    0x140de9ced
0x00de9c76: cmp    ebx,0x1000
0x00de9c7c: ja     0x140de9cbc
0x00de9c7e: je     0x140de9cb3
0x00de9c80: cmp    ebx,0x200
0x00de9c86: je     0x140de9caa
0x00de9c88: cmp    ebx,0x400
0x00de9c8e: je     0x140de9ca1
0x00de9c90: cmp    ebx,0x800
0x00de9c96: jne    0x140de9cf5
0x00de9c98: lea    rdx,[rip+0x94be71]        # 0x141735b10 ; literal="modulate frequently"
0x00de9c9f: jmp    0x140de9ced
0x00de9ca1: lea    rdx,[rip+0x94bee8]        # 0x141735b90 ; literal="alternate tension and repose"
0x00de9ca8: jmp    0x140de9ced
0x00de9caa: lea    rdx,[rip+0x94becf]        # 0x141735b80 ; literal="add fills"
0x00de9cb1: jmp    0x140de9ced
0x00de9cb3: lea    rdx,[rip+0x94be6e]        # 0x141735b28 ; literal="play arpeggios"
0x00de9cba: jmp    0x140de9ced
0x00de9cbc: cmp    ebx,0x2000
0x00de9cc2: je     0x140de9ce6
0x00de9cc4: cmp    ebx,0x4000
0x00de9cca: je     0x140de9cdd
0x00de9ccc: cmp    ebx,0x8000
0x00de9cd2: jne    0x140de9cf5
0x00de9cd4: lea    rdx,[rip+0x94bf0d]        # 0x141735be8 ; literal="freely adjust the beats"
0x00de9cdb: jmp    0x140de9ced
0x00de9cdd: lea    rdx,[rip+0x94be64]        # 0x141735b48 ; literal="play legato"
0x00de9ce4: jmp    0x140de9ced
0x00de9ce6: lea    rdx,[rip+0x94be4b]        # 0x141735b38 ; literal="play staccato"
0x00de9ced: mov    rcx,rdi
0x00de9cf0: call   0x140070b20
0x00de9cf5: cmp    esi,0x3
0x00de9cf8: jl     0x140de9d03
0x00de9cfa: lea    rdx,[rip+0x815607]        # 0x1415ff308 ; literal=", "
0x00de9d01: jmp    0x140de9d0f
0x00de9d03: cmp    esi,0x2
0x00de9d06: jne    0x140de9d17
0x00de9d08: lea    rdx,[rip+0x815631]        # 0x1415ff340 ; literal=" and "
0x00de9d0f: mov    rcx,rdi
0x00de9d12: call   0x140070b20
0x00de9d17: dec    esi
0x00de9d19: inc    r14d
0x00de9d1c: cmp    r14d,0x10
0x00de9d20: jl     0x140de9b41
0x00de9d26: lea    rdx,[rip+0x82a953]        # 0x141614680 ; literal=".  "
0x00de9d2d: mov    rcx,rdi
0x00de9d30: call   0x140070b20
0x00de9d35: xor    r13d,r13d
0x00de9d38: lea    rbx,[r12+0xb8]
0x00de9d40: mov    rcx,rbx
0x00de9d43: call   0x140070410
0x00de9d48: test   rax,rax
0x00de9d4b: je     0x140dea2ec
0x00de9d51: lea    rdx,[rip+0x94bef0]        # 0x141735c48 ; literal="From beginning to end, when improvising"
0x00de9d58: mov    rcx,rdi
0x00de9d5b: call   0x140070b20
0x00de9d60: test   BYTE PTR [r12+0x120],0x1
0x00de9d69: je     0x140de9d7a
0x00de9d6b: lea    rdx,[rip+0x94be3e]        # 0x141735bb0 ; literal=" or composing"
0x00de9d72: mov    rcx,rdi
0x00de9d75: call   0x140070b20
0x00de9d7a: lea    rdx,[rip+0x94be3f]        # 0x141735bc0 ; literal=", artists should "
0x00de9d81: mov    rcx,rdi
0x00de9d84: call   0x140070b20
0x00de9d89: mov    rcx,rbx
0x00de9d8c: call   0x140070410
0x00de9d91: mov    r12,rax
0x00de9d94: mov    QWORD PTR [rbp-0x78],rax
0x00de9d98: lea    rdx,[rsp+0x50]
0x00de9d9d: mov    rcx,rbx
0x00de9da0: call   0x140070800
0x00de9da5: lea    rdx,[rbp-0x50]
0x00de9da9: mov    rcx,rbx
0x00de9dac: call   0x1400707f0
0x00de9db1: lea    r8,[rbp-0x50]
0x00de9db5: lea    rdx,[rsp+0x34]
0x00de9dba: lea    rcx,[rsp+0x50]
0x00de9dbf: call   0x1400703e0
0x00de9dc4: xor    edx,edx
0x00de9dc6: movzx  ecx,BYTE PTR [rax]
0x00de9dc9: call   0x140066d70
0x00de9dce: test   al,al
0x00de9dd0: je     0x140dea2d9
0x00de9dd6: mov    r15d,DWORD PTR [rsp+0x50]
0x00de9ddb: mov    esi,DWORD PTR [rsp+0x50]
0x00de9ddf: nop
0x00de9de0: lea    rcx,[rsp+0x50]
0x00de9de5: call   0x1400703d0
0x00de9dea: mov    rcx,QWORD PTR [rax]
0x00de9ded: mov    edx,DWORD PTR [rcx+0x4]
0x00de9df0: test   edx,edx
0x00de9df2: je     0x140de9e10
0x00de9df4: sub    edx,0x1
0x00de9df7: je     0x140de9e07
0x00de9df9: cmp    edx,0x1
0x00de9dfc: jne    0x140de9e1f
0x00de9dfe: lea    rdx,[rip+0x94ca4b]        # 0x141736850 ; literal="sometimes"
0x00de9e05: jmp    0x140de9e17
0x00de9e07: lea    rdx,[rip+0x94bdce]        # 0x141735bdc ; literal="often"
0x00de9e0e: jmp    0x140de9e17
0x00de9e10: lea    rdx,[rip+0x94bdbd]        # 0x141735bd4 ; literal="always"
0x00de9e17: mov    rcx,rdi
0x00de9e1a: call   0x140070b20
0x00de9e1f: lea    rdx,[rip+0x94ca3a]        # 0x141736860 ; literal=" include a "
0x00de9e26: mov    rcx,rdi
0x00de9e29: call   0x140070b20
0x00de9e2e: lea    rcx,[rsp+0x50]
0x00de9e33: call   0x1400703d0
0x00de9e38: mov    rcx,QWORD PTR [rax]
0x00de9e3b: mov    edx,DWORD PTR [rcx]
0x00de9e3d: test   edx,edx
0x00de9e3f: je     0x140de9e6b
0x00de9e41: sub    edx,0x1
0x00de9e44: je     0x140de9e62
0x00de9e46: sub    edx,0x1
0x00de9e49: je     0x140de9e59
0x00de9e4b: cmp    edx,0x1
0x00de9e4e: jne    0x140de9e7a
0x00de9e50: lea    rdx,[rip+0x94c9c1]        # 0x141736818 ; literal="falling-rising"
0x00de9e57: jmp    0x140de9e72
0x00de9e59: lea    rdx,[rip+0x94ca18]        # 0x141736878 ; literal="rising-falling"
0x00de9e60: jmp    0x140de9e72
0x00de9e62: lea    rdx,[rip+0x82a75f]        # 0x1416145c8 ; literal="falling"
0x00de9e69: jmp    0x140de9e72
0x00de9e6b: lea    rdx,[rip+0x94c9fa]        # 0x14173686c ; literal="rising"
0x00de9e72: mov    rcx,rdi
0x00de9e75: call   0x140070b20
0x00de9e7a: lea    rdx,[rip+0x94c9a7]        # 0x141736828 ; literal=" melody pattern"
0x00de9e81: mov    rcx,rdi
0x00de9e84: call   0x140070b20
0x00de9e89: lea    rcx,[rsp+0x50]
0x00de9e8e: call   0x1400703d0
0x00de9e93: mov    rcx,QWORD PTR [rax]
0x00de9e96: add    rcx,0x8
0x00de9e9a: call   0x140070410
0x00de9e9f: test   rax,rax
0x00de9ea2: je     0x140dea086
0x00de9ea8: lea    rdx,[rip+0x81a939]        # 0x1416047e8 ; literal=" with "
0x00de9eaf: mov    rcx,rdi
0x00de9eb2: call   0x140070b20
0x00de9eb7: lea    rcx,[rsp+0x50]
0x00de9ebc: call   0x1400703d0
0x00de9ec1: mov    rcx,QWORD PTR [rax]
0x00de9ec4: add    rcx,0x8
0x00de9ec8: call   0x140070410
0x00de9ecd: mov    rbx,rax
0x00de9ed0: lea    rcx,[rsp+0x50]
0x00de9ed5: call   0x1400703d0
0x00de9eda: mov    rcx,QWORD PTR [rax]
0x00de9edd: add    rcx,0x8
0x00de9ee1: lea    rdx,[rsp+0x68]
0x00de9ee6: call   0x140070800
0x00de9eeb: lea    rcx,[rsp+0x50]
0x00de9ef0: call   0x1400703d0
0x00de9ef5: mov    rcx,QWORD PTR [rax]
0x00de9ef8: add    rcx,0x8
0x00de9efc: lea    rdx,[rsp+0x78]
0x00de9f01: call   0x1400707f0
0x00de9f06: lea    r8,[rsp+0x78]
0x00de9f0b: lea    rdx,[rsp+0x30]
0x00de9f10: lea    rcx,[rsp+0x68]
0x00de9f15: call   0x1400703e0
0x00de9f1a: xor    edx,edx
0x00de9f1c: movzx  ecx,BYTE PTR [rax]
0x00de9f1f: call   0x140066d70
0x00de9f24: test   al,al
0x00de9f26: je     0x140dea086
0x00de9f2c: nop    DWORD PTR [rax+0x0]
0x00de9f30: lea    rcx,[rsp+0x68]
0x00de9f35: call   0x1400703d0
0x00de9f3a: mov    rcx,QWORD PTR [rax]
0x00de9f3d: test   BYTE PTR [rcx+0x4],0x2
0x00de9f41: je     0x140de9f52
0x00de9f43: lea    rdx,[rip+0x8b6136]        # 0x1416a0080 ; literal="flattened"
0x00de9f4a: mov    rcx,rdi
0x00de9f4d: call   0x140070b20
0x00de9f52: lea    rcx,[rsp+0x68]
0x00de9f57: call   0x1400703d0
0x00de9f5c: mov    rcx,QWORD PTR [rax]
0x00de9f5f: test   BYTE PTR [rcx+0x4],0x4
0x00de9f63: je     0x140de9f74
0x00de9f65: lea    rdx,[rip+0x94c8cc]        # 0x141736838 ; literal="sharpened"
0x00de9f6c: mov    rcx,rdi
0x00de9f6f: call   0x140070b20
0x00de9f74: lea    rdx,[rip+0x8149f1]        # 0x1415fe96c ; literal=" "
0x00de9f7b: mov    rcx,rdi
0x00de9f7e: call   0x140070b20
0x00de9f83: lea    rcx,[rbp+0x1b0]
0x00de9f8a: call   0x140070c50
0x00de9f8f: nop
0x00de9f90: lea    rcx,[rsp+0x68]
0x00de9f95: call   0x1400703d0
0x00de9f9a: mov    rcx,QWORD PTR [rax]
0x00de9f9d: xor    r8d,r8d
0x00de9fa0: lea    rdx,[rbp+0x1b0]
0x00de9fa7: mov    ecx,DWORD PTR [rcx]
0x00de9fa9: call   0x140545850
0x00de9fae: lea    rcx,[rbp+0x1b0]
0x00de9fb5: call   0x140543d60
0x00de9fba: lea    rdx,[rbp+0x1b0]
0x00de9fc1: mov    rcx,rdi
0x00de9fc4: call   0x1400bb2d0
0x00de9fc9: lea    rdx,[rip+0x94c878]        # 0x141736848 ; literal=" degree"
0x00de9fd0: mov    rcx,rdi
0x00de9fd3: call   0x140070b20
0x00de9fd8: lea    rcx,[rsp+0x50]
0x00de9fdd: call   0x1400703d0
0x00de9fe2: mov    rcx,QWORD PTR [rax]
0x00de9fe5: cmp    DWORD PTR [rcx],0x2
0x00de9fe8: je     0x140de9ffc
0x00de9fea: lea    rcx,[rsp+0x50]
0x00de9fef: call   0x1400703d0
0x00de9ff4: mov    rcx,QWORD PTR [rax]
0x00de9ff7: cmp    DWORD PTR [rcx],0x3
0x00de9ffa: jne    0x140dea025
0x00de9ffc: lea    rcx,[rsp+0x68]
0x00dea001: call   0x1400703d0
0x00dea006: mov    rcx,QWORD PTR [rax]
0x00dea009: test   BYTE PTR [rcx+0x4],0x1
0x00dea00d: mov    rcx,rdi
0x00dea010: lea    rdx,[rip+0x94c8a9]        # 0x1417368c0 ; literal=" on the rise"
0x00dea017: jne    0x140dea020
0x00dea019: lea    rdx,[rip+0x94c8b0]        # 0x1417368d0 ; literal=" on the fall"
0x00dea020: call   0x140070b20
0x00dea025: cmp    ebx,0x3
0x00dea028: jl     0x140dea033
0x00dea02a: lea    rdx,[rip+0x8152d7]        # 0x1415ff308 ; literal=", "
0x00dea031: jmp    0x140dea03f
0x00dea033: cmp    ebx,0x2
0x00dea036: jne    0x140dea048
0x00dea038: lea    rdx,[rip+0x815301]        # 0x1415ff340 ; literal=" and "
0x00dea03f: mov    rcx,rdi
0x00dea042: call   0x140070b20
0x00dea047: nop
0x00dea048: lea    rcx,[rbp+0x1b0]
0x00dea04f: call   0x1400693f0
0x00dea054: lea    rcx,[rsp+0x68]
0x00dea059: call   0x1400703c0
0x00dea05e: dec    ebx
0x00dea060: lea    r8,[rsp+0x78]
0x00dea065: lea    rdx,[rsp+0x30]
0x00dea06a: lea    rcx,[rsp+0x68]
0x00dea06f: call   0x1400703e0
0x00dea074: xor    edx,edx
0x00dea076: movzx  ecx,BYTE PTR [rax]
0x00dea079: call   0x140066d70
0x00dea07e: test   al,al
0x00dea080: jne    0x140de9f30
0x00dea086: lea    rcx,[rsp+0x50]
0x00dea08b: call   0x1400703d0
0x00dea090: mov    rcx,QWORD PTR [rax]
0x00dea093: cmp    DWORD PTR [rcx+0x20],0x0
0x00dea097: je     0x140dea27f
0x00dea09d: lea    rcx,[rsp+0x50]
0x00dea0a2: call   0x1400703d0
0x00dea0a7: mov    rcx,QWORD PTR [rax]
0x00dea0aa: add    rcx,0x8
0x00dea0ae: call   0x140070410
0x00dea0b3: mov    rcx,rdi
0x00dea0b6: test   rax,rax
0x00dea0b9: lea    rdx,[rip+0x94c820]        # 0x1417368e0 ; literal=" as well as "
0x00dea0c0: jne    0x140dea0c9
0x00dea0c2: lea    rdx,[rip+0x81a71f]        # 0x1416047e8 ; literal=" with "
0x00dea0c9: call   0x140070b20
0x00dea0ce: mov    r14d,r13d
0x00dea0d1: mov    ebx,r13d
0x00dea0d4: lea    rdi,[rip+0xffffffffff215f25]        # 0x140000000
0x00dea0db: mov    r13d,0x1
0x00dea0e1: cmp    ebx,0x7
0x00dea0e4: ja     0x140dea130
0x00dea0e6: movsxd rax,ebx
0x00dea0e9: mov    ecx,DWORD PTR [rdi+rax*4+0xdef9b8]
0x00dea0f0: add    rcx,rdi
0x00dea0f3: jmp    rcx
0x00dea0f5: mov    r15d,r13d
0x00dea0f8: jmp    0x140dea130
0x00dea0fa: mov    r15d,0x2
0x00dea100: jmp    0x140dea130
0x00dea102: mov    r15d,0x4
0x00dea108: jmp    0x140dea130
0x00dea10a: mov    r15d,0x8
0x00dea110: jmp    0x140dea130
0x00dea112: mov    r15d,0x10
0x00dea118: jmp    0x140dea130
0x00dea11a: mov    r15d,0x1000
0x00dea120: jmp    0x140dea130
0x00dea122: mov    r15d,0x2000
0x00dea128: jmp    0x140dea130
0x00dea12a: mov    r15d,0x4000
0x00dea130: lea    rcx,[rsp+0x50]
0x00dea135: call   0x1400703d0
0x00dea13a: mov    rcx,QWORD PTR [rax]
0x00dea13d: test   DWORD PTR [rcx+0x20],r15d
0x00dea141: je     0x140dea146
0x00dea143: inc    r14d
0x00dea146: inc    ebx
0x00dea148: cmp    ebx,0x8
0x00dea14b: jl     0x140dea0e1
0x00dea14d: xor    r13d,r13d
0x00dea150: mov    ebx,r13d
0x00dea153: mov    rdi,QWORD PTR [rbp-0x28]
0x00dea157: lea    r12,[rip+0xffffffffff215ea2]        # 0x140000000
0x00dea15e: mov    r13d,0x1
0x00dea164: cmp    ebx,0x7
0x00dea167: ja     0x140dea1ad
0x00dea169: movsxd rax,ebx
0x00dea16c: mov    ecx,DWORD PTR [r12+rax*4+0xdef9d8]
0x00dea174: add    rcx,r12
0x00dea177: jmp    rcx
0x00dea179: mov    esi,r13d
0x00dea17c: jmp    0x140dea1ad
0x00dea17e: mov    esi,0x2
0x00dea183: jmp    0x140dea1ad
0x00dea185: mov    esi,0x4
0x00dea18a: jmp    0x140dea1ad
0x00dea18c: mov    esi,0x8
0x00dea191: jmp    0x140dea1ad
0x00dea193: mov    esi,0x10
0x00dea198: jmp    0x140dea1ad
0x00dea19a: mov    esi,0x1000
0x00dea19f: jmp    0x140dea1ad
0x00dea1a1: mov    esi,0x2000
0x00dea1a6: jmp    0x140dea1ad
0x00dea1a8: mov    esi,0x4000
0x00dea1ad: lea    rcx,[rsp+0x50]
0x00dea1b2: call   0x1400703d0
0x00dea1b7: mov    rcx,QWORD PTR [rax]
0x00dea1ba: test   DWORD PTR [rcx+0x20],esi
0x00dea1bd: je     0x140dea26d
0x00dea1c3: cmp    esi,0x10
0x00dea1c6: ja     0x140dea20d
0x00dea1c8: je     0x140dea204
0x00dea1ca: mov    eax,esi
0x00dea1cc: sub    eax,r13d
0x00dea1cf: je     0x140dea1fb
0x00dea1d1: sub    eax,r13d
0x00dea1d4: je     0x140dea1f2
0x00dea1d6: sub    eax,0x2
0x00dea1d9: je     0x140dea1e9
0x00dea1db: cmp    eax,0x4
0x00dea1de: jne    0x140dea246
0x00dea1e0: lea    rdx,[rip+0x94c6bd]        # 0x1417368a4 ; literal="trills"
0x00dea1e7: jmp    0x140dea23e
0x00dea1e9: lea    rdx,[rip+0x94c6a8]        # 0x141736898 ; literal="mordents"
0x00dea1f0: jmp    0x140dea23e
0x00dea1f2: lea    rdx,[rip+0x94c68f]        # 0x141736888 ; literal="grace notes"
0x00dea1f9: jmp    0x140dea23e
0x00dea1fb: lea    rdx,[rip+0x94c6ee]        # 0x1417368f0 ; literal="glides"
0x00dea202: jmp    0x140dea23e
0x00dea204: lea    rdx,[rip+0x94c6a5]        # 0x1417368b0 ; literal="rapid runs"
0x00dea20b: jmp    0x140dea23e
0x00dea20d: cmp    esi,0x1000
0x00dea213: je     0x140dea237
0x00dea215: cmp    esi,0x2000
0x00dea21b: je     0x140dea22e
0x00dea21d: cmp    esi,0x4000
0x00dea223: jne    0x140dea246
0x00dea225: lea    rdx,[rip+0x94c740]        # 0x14173696c ; literal="legato"
0x00dea22c: jmp    0x140dea23e
0x00dea22e: lea    rdx,[rip+0x94c72b]        # 0x141736960 ; literal="staccato"
0x00dea235: jmp    0x140dea23e
0x00dea237: lea    rdx,[rip+0x94c712]        # 0x141736950 ; literal="arpeggios"
0x00dea23e: mov    rcx,rdi
0x00dea241: call   0x140070b20
0x00dea246: cmp    r14d,0x3
0x00dea24a: jl     0x140dea255
0x00dea24c: lea    rdx,[rip+0x8150b5]        # 0x1415ff308 ; literal=", "
0x00dea253: jmp    0x140dea262
0x00dea255: cmp    r14d,0x2
0x00dea259: jne    0x140dea26a
0x00dea25b: lea    rdx,[rip+0x8150de]        # 0x1415ff340 ; literal=" and "
0x00dea262: mov    rcx,rdi
0x00dea265: call   0x140070b20
0x00dea26a: dec    r14d
0x00dea26d: inc    ebx
0x00dea26f: cmp    ebx,0x8
0x00dea272: jl     0x140dea164
0x00dea278: mov    r12,QWORD PTR [rbp-0x78]
0x00dea27c: xor    r13d,r13d
0x00dea27f: cmp    r12d,0x3
0x00dea283: jl     0x140dea28e
0x00dea285: lea    rdx,[rip+0x81507c]        # 0x1415ff308 ; literal=", "
0x00dea28c: jmp    0x140dea29b
0x00dea28e: cmp    r12d,0x2
0x00dea292: jne    0x140dea2a3
0x00dea294: lea    rdx,[rip+0x8150a5]        # 0x1415ff340 ; literal=" and "
0x00dea29b: mov    rcx,rdi
0x00dea29e: call   0x140070b20
0x00dea2a3: lea    rcx,[rsp+0x50]
0x00dea2a8: call   0x1400703c0
0x00dea2ad: dec    r12d
0x00dea2b0: mov    QWORD PTR [rbp-0x78],r12
0x00dea2b4: lea    r8,[rbp-0x50]
0x00dea2b8: lea    rdx,[rsp+0x34]
0x00dea2bd: lea    rcx,[rsp+0x50]
0x00dea2c2: call   0x1400703e0
0x00dea2c7: xor    edx,edx
0x00dea2c9: movzx  ecx,BYTE PTR [rax]
0x00dea2cc: call   0x140066d70
0x00dea2d1: test   al,al
0x00dea2d3: jne    0x140de9de0
0x00dea2d9: lea    rdx,[rip+0x82a3a0]        # 0x141614680 ; literal=".  "
0x00dea2e0: mov    rcx,rdi
0x00dea2e3: call   0x140070b20
0x00dea2e8: mov    r12,QWORD PTR [rbp-0x38]
0x00dea2ec: mov    BYTE PTR [rsp+0x34],0x1
0x00dea2f1: mov    BYTE PTR [rbp-0x60],0x1
0x00dea2f5: mov    r14d,r13d
0x00dea2f8: mov    DWORD PTR [rsp+0x64],r13d
0x00dea2fd: lea    rcx,[r12+0xa0]
0x00dea305: lea    rdx,[rbp-0x18]
0x00dea309: call   0x140070800
0x00dea30e: mov    rcx,QWORD PTR [rax]
0x00dea311: mov    QWORD PTR [rsp+0x40],rcx
0x00dea316: lea    r8,[rbp+0x30]
0x00dea31a: lea    rdx,[rsp+0x35]
0x00dea31f: lea    rcx,[rsp+0x40]
0x00dea324: call   0x1400703e0
0x00dea329: xor    edx,edx
0x00dea32b: movzx  ecx,BYTE PTR [rax]
0x00dea32e: call   0x140066d70
0x00dea333: test   al,al
0x00dea335: je     0x140deb39b
0x00dea33b: lea    rbx,[r12+0x88]
0x00dea343: mov    QWORD PTR [rbp-0x78],rbx
0x00dea347: nop    WORD PTR [rax+rax*1+0x0]
0x00dea350: mov    r12b,0x1
0x00dea353: mov    BYTE PTR [rsp+0x33],r12b
0x00dea358: mov    r15d,0xffffffff
0x00dea35e: lea    rdx,[rsp+0x50]
0x00dea363: mov    rcx,rbx
0x00dea366: call   0x140070800
0x00dea36b: lea    rdx,[rsp+0x68]
0x00dea370: mov    rcx,rbx
0x00dea373: call   0x1400707f0
0x00dea378: lea    r8,[rsp+0x68]
0x00dea37d: lea    rdx,[rsp+0x32]
0x00dea382: lea    rcx,[rsp+0x50]
0x00dea387: call   0x1400703e0
0x00dea38c: xor    edx,edx
0x00dea38e: movzx  ecx,BYTE PTR [rax]
0x00dea391: call   0x140066d70
0x00dea396: test   al,al
0x00dea398: je     0x140dea4ee
0x00dea39e: xchg   ax,ax
0x00dea3a0: lea    rcx,[rsp+0x50]
0x00dea3a5: call   0x1400703d0
0x00dea3aa: mov    rcx,QWORD PTR [rax]
0x00dea3ad: add    rcx,0x30
0x00dea3b1: lea    rdx,[rsp+0x58]
0x00dea3b6: call   0x140070800
0x00dea3bb: lea    rcx,[rsp+0x50]
0x00dea3c0: call   0x1400703d0
0x00dea3c5: mov    rcx,QWORD PTR [rax]
0x00dea3c8: add    rcx,0x30
0x00dea3cc: lea    rdx,[rbp+0x0]
0x00dea3d0: call   0x1400707f0
0x00dea3d5: lea    rcx,[rsp+0x50]
0x00dea3da: call   0x1400703d0
0x00dea3df: mov    rcx,QWORD PTR [rax]
0x00dea3e2: add    rcx,0x48
0x00dea3e6: lea    rdx,[rbp-0x50]
0x00dea3ea: call   0x140070800
0x00dea3ef: lea    rcx,[rsp+0x50]
0x00dea3f4: call   0x1400703d0
0x00dea3f9: mov    rcx,QWORD PTR [rax]
0x00dea3fc: add    rcx,0x48
0x00dea400: lea    rdx,[rbp-0x18]
0x00dea404: call   0x1400707f0
0x00dea409: lea    r8,[rbp+0x0]
0x00dea40d: lea    rdx,[rsp+0x30]
0x00dea412: lea    rcx,[rsp+0x58]
0x00dea417: call   0x1400703e0
0x00dea41c: xor    edx,edx
0x00dea41e: movzx  ecx,BYTE PTR [rax]
0x00dea421: call   0x140066d70
0x00dea426: test   al,al
0x00dea428: je     0x140dea48e
0x00dea42a: nop    WORD PTR [rax+rax*1+0x0]
0x00dea430: lea    rcx,[rsp+0x58]
0x00dea435: call   0x1400703d0
0x00dea43a: cmp    DWORD PTR [rax],r14d
0x00dea43d: je     0x140dea475
0x00dea43f: lea    rcx,[rsp+0x58]
0x00dea444: call   0x140070910
0x00dea449: lea    rcx,[rbp-0x50]
0x00dea44d: call   0x140070910
0x00dea452: lea    r8,[rbp+0x0]
0x00dea456: lea    rdx,[rsp+0x30]
0x00dea45b: lea    rcx,[rsp+0x58]
0x00dea460: call   0x1400703e0
0x00dea465: xor    edx,edx
0x00dea467: movzx  ecx,BYTE PTR [rax]
0x00dea46a: call   0x140066d70
0x00dea46f: test   al,al
0x00dea471: jne    0x140dea430
0x00dea473: jmp    0x140dea48e
0x00dea475: lea    rcx,[rbp-0x50]
0x00dea479: call   0x1400703d0
0x00dea47e: cmp    r15d,0xffffffff
0x00dea482: jne    0x140dea489
0x00dea484: mov    r15d,DWORD PTR [rax]
0x00dea487: jmp    0x140dea48e
0x00dea489: cmp    r15d,DWORD PTR [rax]
0x00dea48c: jne    0x140dea4e1
0x00dea48e: lea    r8,[rbp+0x0]
0x00dea492: lea    rdx,[rsp+0x4a]
0x00dea497: lea    rcx,[rsp+0x58]
0x00dea49c: call   0x1400703e0
0x00dea4a1: xor    edx,edx
0x00dea4a3: movzx  ecx,BYTE PTR [rax]
0x00dea4a6: call   0x140073420
0x00dea4ab: test   al,al
0x00dea4ad: jne    0x140dea4e1
0x00dea4af: lea    rcx,[rsp+0x50]
0x00dea4b4: call   0x1400703c0
0x00dea4b9: lea    r8,[rsp+0x68]
0x00dea4be: lea    rdx,[rsp+0x32]
0x00dea4c3: lea    rcx,[rsp+0x50]
0x00dea4c8: call   0x1400703e0
0x00dea4cd: xor    edx,edx
0x00dea4cf: movzx  ecx,BYTE PTR [rax]
0x00dea4d2: call   0x140066d70
0x00dea4d7: test   al,al
0x00dea4d9: jne    0x140dea3a0
0x00dea4df: jmp    0x140dea4ee
0x00dea4e1: xor    r12b,r12b
0x00dea4e4: mov    BYTE PTR [rsp+0x33],r12b
0x00dea4e9: mov    BYTE PTR [rsp+0x34],r12b
0x00dea4ee: mov    sil,0x1
0x00dea4f1: mov    BYTE PTR [rsp+0x31],sil
0x00dea4f6: mov    r13d,0xfffffffe
0x00dea4fc: mov    DWORD PTR [rsp+0x3c],r13d
0x00dea501: mov    ebx,r13d
0x00dea504: mov    DWORD PTR [rsp+0x60],ebx
0x00dea508: lea    rdx,[rbp+0x40]
0x00dea50c: mov    rcx,QWORD PTR [rbp-0x78]
0x00dea510: call   0x140070800
0x00dea515: mov    rcx,QWORD PTR [rax]
0x00dea518: mov    QWORD PTR [rsp+0x50],rcx
0x00dea51d: lea    r8,[rsp+0x68]
0x00dea522: lea    rdx,[rsp+0x49]
0x00dea527: lea    rcx,[rsp+0x50]
0x00dea52c: call   0x1400703e0
0x00dea531: xor    edx,edx
0x00dea533: movzx  ecx,BYTE PTR [rax]
0x00dea536: call   0x140066d70
0x00dea53b: test   al,al
0x00dea53d: je     0x140dea6eb
0x00dea543: lea    rcx,[rsp+0x50]
0x00dea548: call   0x1400703d0
0x00dea54d: mov    rcx,QWORD PTR [rax]
0x00dea550: add    rcx,0x30
0x00dea554: lea    rdx,[rbp-0x68]
0x00dea558: call   0x140070800
0x00dea55d: lea    rcx,[rsp+0x50]
0x00dea562: call   0x1400703d0
0x00dea567: mov    rcx,QWORD PTR [rax]
0x00dea56a: add    rcx,0x30
0x00dea56e: lea    rdx,[rsp+0x78]
0x00dea573: call   0x1400707f0
0x00dea578: lea    rcx,[rsp+0x50]
0x00dea57d: call   0x1400703d0
0x00dea582: mov    rcx,QWORD PTR [rax]
0x00dea585: add    rcx,0x78
0x00dea589: lea    rdx,[rbp-0x8]
0x00dea58d: call   0x140070800
0x00dea592: lea    rcx,[rsp+0x50]
0x00dea597: call   0x1400703d0
0x00dea59c: mov    rcx,QWORD PTR [rax]
0x00dea59f: add    rcx,0x78
0x00dea5a3: lea    rdx,[rbp-0x20]
0x00dea5a7: call   0x1400707f0
0x00dea5ac: lea    rcx,[rsp+0x50]
0x00dea5b1: call   0x1400703d0
0x00dea5b6: mov    rcx,QWORD PTR [rax]
0x00dea5b9: add    rcx,0x90
0x00dea5c0: lea    rdx,[rbp-0x10]
0x00dea5c4: call   0x140070800
0x00dea5c9: lea    rcx,[rsp+0x50]
0x00dea5ce: call   0x1400703d0
0x00dea5d3: mov    rcx,QWORD PTR [rax]
0x00dea5d6: add    rcx,0x90
0x00dea5dd: lea    rdx,[rbp+0x8]
0x00dea5e1: call   0x1400707f0
0x00dea5e6: lea    r8,[rsp+0x78]
0x00dea5eb: lea    rdx,[rsp+0x48]
0x00dea5f0: lea    rcx,[rbp-0x68]
0x00dea5f4: call   0x1400703e0
0x00dea5f9: xor    edx,edx
0x00dea5fb: movzx  ecx,BYTE PTR [rax]
0x00dea5fe: call   0x140066d70
0x00dea603: test   al,al
0x00dea605: je     0x140dea6a2
0x00dea60b: nop    DWORD PTR [rax+rax*1+0x0]
0x00dea610: lea    rcx,[rbp-0x68]
0x00dea614: call   0x1400703d0
0x00dea619: cmp    DWORD PTR [rax],r14d
0x00dea61c: jne    0x140dea658
0x00dea61e: lea    rcx,[rbp-0x8]
0x00dea622: call   0x1400703d0
0x00dea627: cmp    r13d,0xfffffffe
0x00dea62b: jne    0x140dea646
0x00dea62d: mov    r13d,DWORD PTR [rax]
0x00dea630: mov    DWORD PTR [rsp+0x3c],r13d
0x00dea635: lea    rcx,[rbp-0x10]
0x00dea639: call   0x1400703d0
0x00dea63e: mov    ebx,DWORD PTR [rax]
0x00dea640: mov    DWORD PTR [rsp+0x60],ebx
0x00dea644: jmp    0x140dea658
0x00dea646: cmp    r13d,DWORD PTR [rax]
0x00dea649: jne    0x140dea69f
0x00dea64b: lea    rcx,[rbp-0x10]
0x00dea64f: call   0x1400703d0
0x00dea654: cmp    ebx,DWORD PTR [rax]
0x00dea656: jne    0x140dea69f
0x00dea658: test   sil,sil
0x00dea65b: je     0x140dea6a2
0x00dea65d: lea    rcx,[rbp-0x68]
0x00dea661: call   0x140070910
0x00dea666: lea    rcx,[rbp-0x8]
0x00dea66a: call   0x140070910
0x00dea66f: lea    rcx,[rbp-0x10]
0x00dea673: call   0x140070910
0x00dea678: lea    r8,[rsp+0x78]
0x00dea67d: lea    rdx,[rsp+0x48]
0x00dea682: lea    rcx,[rbp-0x68]
0x00dea686: call   0x1400703e0
0x00dea68b: xor    edx,edx
0x00dea68d: movzx  ecx,BYTE PTR [rax]
0x00dea690: call   0x140066d70
0x00dea695: test   al,al
0x00dea697: jne    0x140dea610
0x00dea69d: jmp    0x140dea6a2
0x00dea69f: xor    sil,sil
0x00dea6a2: lea    rcx,[rsp+0x50]
0x00dea6a7: call   0x1400703c0
0x00dea6ac: lea    r8,[rsp+0x68]
0x00dea6b1: lea    rdx,[rsp+0x49]
0x00dea6b6: lea    rcx,[rsp+0x50]
0x00dea6bb: call   0x1400703e0
0x00dea6c0: xor    edx,edx
0x00dea6c2: movzx  ecx,BYTE PTR [rax]
0x00dea6c5: call   0x140066d70
0x00dea6ca: test   al,al
0x00dea6cc: jne    0x140dea543
0x00dea6d2: mov    BYTE PTR [rsp+0x31],sil
0x00dea6d7: mov    eax,DWORD PTR [rbp-0x60]
0x00dea6da: movzx  eax,al
0x00dea6dd: test   sil,sil
0x00dea6e0: mov    ecx,0x0
0x00dea6e5: cmove  eax,ecx
0x00dea6e8: mov    DWORD PTR [rbp-0x60],eax
0x00dea6eb: lea    rcx,[rsp+0x40]
0x00dea6f0: call   0x1400703d0
0x00dea6f5: mov    rcx,QWORD PTR [rax]
0x00dea6f8: cmp    DWORD PTR [rcx+0x8],0x0
0x00dea6fc: jne    0x140dea737
0x00dea6fe: lea    rcx,[rsp+0x40]
0x00dea703: call   0x1400703d0
0x00dea708: mov    rcx,QWORD PTR [rax]
0x00dea70b: cmp    DWORD PTR [rcx+0x14],0xffffffff
0x00dea70f: jne    0x140dea737
0x00dea711: lea    rcx,[rsp+0x40]
0x00dea716: call   0x1400703d0
0x00dea71b: mov    rcx,QWORD PTR [rax]
0x00dea71e: cmp    DWORD PTR [rcx+0x18],0xffffffff
0x00dea722: jne    0x140dea737
0x00dea724: test   r12b,r12b
0x00dea727: je     0x140deaed2
0x00dea72d: cmp    r15d,0x4
0x00dea731: je     0x140deaed2
0x00dea737: lea    rdx,[rip+0x82996e]        # 0x1416140ac ; literal="[B]"
0x00dea73e: mov    rcx,rdi
0x00dea741: call   0x140070b20
0x00dea746: lea    rcx,[rsp+0x40]
0x00dea74b: call   0x1400703d0
0x00dea750: mov    rcx,QWORD PTR [rax]
0x00dea753: cmp    DWORD PTR [rcx+0x10],0x2
0x00dea757: mov    rcx,rdi
0x00dea75a: lea    rdx,[rip+0x94c213]        # 0x141736974 ; literal="Each "
0x00dea761: jge    0x140dea76a
0x00dea763: lea    rdx,[rip+0x8194ca]        # 0x141603c34 ; literal="The "
0x00dea76a: call   0x140070b20
0x00dea76f: lea    rcx,[rsp+0x40]
0x00dea774: call   0x1400703d0
0x00dea779: mov    rcx,QWORD PTR [rax]
0x00dea77c: test   BYTE PTR [rcx+0x4],0x1
0x00dea780: je     0x140dea791
0x00dea782: lea    rdx,[rip+0x94add3]        # 0x14173555c ; literal="singer"
0x00dea789: mov    rcx,rdi
0x00dea78c: call   0x140070b20
0x00dea791: lea    rcx,[rsp+0x40]
0x00dea796: call   0x1400703d0
0x00dea79b: mov    rcx,QWORD PTR [rax]
0x00dea79e: test   BYTE PTR [rcx+0x4],0x2
0x00dea7a2: je     0x140dea7b3
0x00dea7a4: lea    rdx,[rip+0x94adbd]        # 0x141735568 ; literal="speaker"
0x00dea7ab: mov    rcx,rdi
0x00dea7ae: call   0x140070b20
0x00dea7b3: lea    rcx,[rsp+0x40]
0x00dea7b8: call   0x1400703d0
0x00dea7bd: mov    rcx,QWORD PTR [rax]
0x00dea7c0: test   BYTE PTR [rcx+0x4],0x4
0x00dea7c4: je     0x140dea7d5
0x00dea7c6: lea    rdx,[rip+0x94ada3]        # 0x141735570 ; literal="chanter"
0x00dea7cd: mov    rcx,rdi
0x00dea7d0: call   0x140070b20
0x00dea7d5: lea    rcx,[rsp+0x40]
0x00dea7da: call   0x1400703d0
0x00dea7df: mov    rcx,QWORD PTR [rax]
0x00dea7e2: cmp    DWORD PTR [rcx],0xffffffff
0x00dea7e5: je     0x140dea831
0x00dea7e7: lea    rcx,[rsp+0x40]
0x00dea7ec: call   0x1400703d0
0x00dea7f1: mov    rcx,QWORD PTR [rax]
0x00dea7f4: movsxd rdx,DWORD PTR [rcx]
0x00dea7f7: lea    rcx,[rip+0x171e97a]        # 0x142509178
0x00dea7fe: call   0x1400707e0
0x00dea803: mov    rbx,QWORD PTR [rax]
0x00dea806: test   rbx,rbx
0x00dea809: je     0x140dea831
0x00dea80b: lea    rcx,[rsp+0x40]
0x00dea810: call   0x1400703d0
0x00dea815: mov    rcx,QWORD PTR [rax]
0x00dea818: cmp    DWORD PTR [rcx+0x10],0x2
0x00dea81c: mov    rcx,rdi
0x00dea81f: lea    rdx,[rbx+0x88]
0x00dea826: jge    0x140dea82c
0x00dea828: lea    rdx,[rbx+0x68]
0x00dea82c: call   0x1400bb2d0
0x00dea831: xor    r14d,r14d
0x00dea834: mov    esi,r14d
0x00dea837: test   r12b,r12b
0x00dea83a: je     0x140dea848
0x00dea83c: cmp    r15d,0x4
0x00dea840: mov    eax,0x1
0x00dea845: cmovne esi,eax
0x00dea848: lea    rcx,[rsp+0x40]
0x00dea84d: call   0x1400703d0
0x00dea852: mov    rcx,QWORD PTR [rax]
0x00dea855: lea    ebx,[rsi+0x1]
0x00dea858: cmp    DWORD PTR [rcx+0x18],0xffffffff
0x00dea85c: cmove  ebx,esi
0x00dea85f: lea    rcx,[rsp+0x40]
0x00dea864: call   0x1400703d0
0x00dea869: mov    esi,r14d
0x00dea86c: mov    rax,QWORD PTR [rax]
0x00dea86f: lea    r14d,[rbx+0x1]
0x00dea873: cmp    DWORD PTR [rax+0x14],0xffffffff
0x00dea877: cmove  r14d,ebx
0x00dea87b: mov    edi,DWORD PTR [rsp+0x38]
0x00dea87f: lea    r12,[rip+0xffffffffff21577a]        # 0x140000000
0x00dea886: mov    r13d,0x1
0x00dea88c: nop    DWORD PTR [rax+0x0]
0x00dea890: cmp    esi,0xd
0x00dea893: ja     0x140dea903
0x00dea895: movsxd rax,esi
0x00dea898: mov    ecx,DWORD PTR [r12+rax*4+0xdef9f8]
0x00dea8a0: add    rcx,r12
0x00dea8a3: jmp    rcx
0x00dea8a5: mov    edi,r13d
0x00dea8a8: jmp    0x140dea903
0x00dea8aa: mov    edi,0x2
0x00dea8af: jmp    0x140dea903
0x00dea8b1: mov    edi,0x4
0x00dea8b6: jmp    0x140dea903
0x00dea8b8: mov    edi,0x8
0x00dea8bd: jmp    0x140dea903
0x00dea8bf: mov    edi,0x10
0x00dea8c4: jmp    0x140dea903
0x00dea8c6: mov    edi,0x20
0x00dea8cb: jmp    0x140dea903
0x00dea8cd: mov    edi,0x40
0x00dea8d2: jmp    0x140dea903
0x00dea8d4: mov    edi,0x80
0x00dea8d9: jmp    0x140dea903
0x00dea8db: mov    edi,0x800
0x00dea8e0: jmp    0x140dea903
0x00dea8e2: mov    edi,0x1000
0x00dea8e7: jmp    0x140dea903
0x00dea8e9: mov    edi,0x100
0x00dea8ee: jmp    0x140dea903
0x00dea8f0: mov    edi,0x200
0x00dea8f5: jmp    0x140dea903
0x00dea8f7: mov    edi,0x2000
0x00dea8fc: jmp    0x140dea903
0x00dea8fe: mov    edi,0x4000
0x00dea903: lea    rcx,[rsp+0x40]
0x00dea908: call   0x1400703d0
0x00dea90d: mov    rcx,QWORD PTR [rax]
0x00dea910: test   DWORD PTR [rcx+0x8],edi
0x00dea913: je     0x140dea918
0x00dea915: inc    r14d
0x00dea918: inc    esi
0x00dea91a: cmp    esi,0xe
0x00dea91d: jl     0x140dea890
0x00dea923: mov    DWORD PTR [rsp+0x38],edi
0x00dea927: lea    rdx,[rip+0x94bfca]        # 0x1417368f8 ; literal=" always "
0x00dea92e: mov    rdi,QWORD PTR [rbp-0x28]
0x00dea932: mov    rcx,rdi
0x00dea935: call   0x140070b20
0x00dea93a: cmp    BYTE PTR [rsp+0x33],0x0
0x00dea93f: mov    r13d,DWORD PTR [rsp+0x3c]
0x00dea944: je     0x140dea9b4
0x00dea946: cmp    r15d,0x4
0x00dea94a: je     0x140dea9b4
0x00dea94c: test   r15d,r15d
0x00dea94f: je     0x140dea97e
0x00dea951: sub    r15d,0x1
0x00dea955: je     0x140dea975
0x00dea957: sub    r15d,0x1
0x00dea95b: je     0x140dea96c
0x00dea95d: cmp    r15d,0x1
0x00dea961: jne    0x140dea98d
0x00dea963: lea    rdx,[rip+0x94c07e]        # 0x1417369e8 ; literal="provides the rhythm"
0x00dea96a: jmp    0x140dea985
0x00dea96c: lea    rdx,[rip+0x94bfcd]        # 0x141736940 ; literal="does harmony"
0x00dea973: jmp    0x140dea985
0x00dea975: lea    rdx,[rip+0x94bfa4]        # 0x141736920 ; literal="does the counterpoint melody"
0x00dea97c: jmp    0x140dea985
0x00dea97e: lea    rdx,[rip+0x94bf83]        # 0x141736908 ; literal="does the main melody"
0x00dea985: mov    rcx,rdi
0x00dea988: call   0x140070b20
0x00dea98d: cmp    r14d,0x3
0x00dea991: jl     0x140dea99c
0x00dea993: lea    rdx,[rip+0x81496e]        # 0x1415ff308 ; literal=", "
0x00dea99a: jmp    0x140dea9a9
0x00dea99c: cmp    r14d,0x2
0x00dea9a0: jne    0x140dea9b1
0x00dea9a2: lea    rdx,[rip+0x814997]        # 0x1415ff340 ; literal=" and "
0x00dea9a9: mov    rcx,rdi
0x00dea9ac: call   0x140070b20
0x00dea9b1: dec    r14d
0x00dea9b4: lea    rcx,[rsp+0x40]
0x00dea9b9: call   0x1400703d0
0x00dea9be: mov    rcx,QWORD PTR [rax]
0x00dea9c1: cmp    DWORD PTR [rcx+0x18],0xffffffff
0x00dea9c5: je     0x140deabe0
0x00dea9cb: lea    rdx,[rip+0x94b416]        # 0x141735de8 ; literal="should "
0x00dea9d2: mov    rcx,rdi
0x00dea9d5: call   0x140070b20
0x00dea9da: lea    rcx,[rsp+0x40]
0x00dea9df: call   0x1400703d0
0x00dea9e4: mov    rcx,QWORD PTR [rax]
0x00dea9e7: mov    eax,DWORD PTR [rcx+0x18]
0x00dea9ea: add    eax,0xffffffde
0x00dea9ed: lea    rbx,[rip+0xffffffffff21560c]        # 0x140000000
0x00dea9f4: cmp    eax,0x26
0x00dea9f7: ja     0x140deabac
0x00dea9fd: cdqe
0x00dea9ff: mov    ecx,DWORD PTR [rbx+rax*4+0xdefa30]
0x00deaa06: add    rcx,rbx
0x00deaa09: jmp    rcx
0x00deaa0b: lea    rdx,[rip+0x94b4ae]        # 0x141735ec0 ; literal="stress the rhythm"
0x00deaa12: jmp    0x140deaba4
0x00deaa17: lea    rdx,[rip+0x94b4ba]        # 0x141735ed8 ; literal="be stately"
0x00deaa1e: jmp    0x140deaba4
0x00deaa23: lea    rdx,[rip+0x94b4be]        # 0x141735ee8 ; literal="be bright"
0x00deaa2a: jmp    0x140deaba4
0x00deaa2f: lea    rdx,[rip+0x94b4c2]        # 0x141735ef8 ; literal="be lively"
0x00deaa36: jmp    0x140deaba4
0x00deaa3b: lea    rdx,[rip+0x94bfbe]        # 0x141736a00 ; literal="perform with skill"
0x00deaa42: jmp    0x140deaba4
0x00deaa47: lea    rdx,[rip+0x94b442]        # 0x141735e90 ; literal="be vigorous"
0x00deaa4e: jmp    0x140deaba4
0x00deaa53: lea    rdx,[rip+0x94b446]        # 0x141735ea0 ; literal="be spirited"
0x00deaa5a: jmp    0x140deaba4
0x00deaa5f: lea    rdx,[rip+0x94b44a]        # 0x141735eb0 ; literal="be delicate"
0x00deaa66: jmp    0x140deaba4
0x00deaa6b: lea    rdx,[rip+0x94b4de]        # 0x141735f50 ; literal="bring a sense of motion"
0x00deaa72: jmp    0x140deaba4
0x00deaa77: lea    rdx,[rip+0x94b4c2]        # 0x141735f40 ; literal="be fiery"
0x00deaa7e: jmp    0x140deaba4
0x00deaa83: lea    rdx,[rip+0x94bf8e]        # 0x141736a18 ; literal="perform with feeling"
0x00deaa8a: jmp    0x140deaba4
0x00deaa8f: lea    rdx,[rip+0x94b4ea]        # 0x141735f80 ; literal="feel agitated"
0x00deaa96: jmp    0x140deaba4
0x00deaa9b: lea    rdx,[rip+0x94b466]        # 0x141735f08 ; literal="be passionate"
0x00deaaa2: jmp    0x140deaba4
0x00deaaa7: lea    rdx,[rip+0x94b46a]        # 0x141735f18 ; literal="sparkle"
0x00deaaae: jmp    0x140deaba4
0x00deaab3: lea    rdx,[rip+0x94b466]        # 0x141735f20 ; literal="be broad"
0x00deaaba: jmp    0x140deaba4
0x00deaabf: lea    rdx,[rip+0x94bf6a]        # 0x141736a30 ; literal="perform sweetly"
0x00deaac6: jmp    0x140deaba4
0x00deaacb: lea    rdx,[rip+0x94b506]        # 0x141735fd8 ; literal="be strong"
0x00deaad2: jmp    0x140deaba4
0x00deaad7: lea    rdx,[rip+0x94b50a]        # 0x141735fe8 ; literal="be energetic"
0x00deaade: jmp    0x140deaba4
0x00deaae3: lea    rdx,[rip+0x94b50e]        # 0x141735ff8 ; literal="be forceful"
0x00deaaea: jmp    0x140deaba4
0x00deaaef: lea    rdx,[rip+0x94b512]        # 0x141736008 ; literal="feel heroic"
0x00deaaf6: jmp    0x140deaba4
0x00deaafb: lea    rdx,[rip+0x94be7e]        # 0x141736980 ; literal="perform expressively"
0x00deab02: jmp    0x140deaba4
0x00deab07: lea    rdx,[rip+0x94b49a]        # 0x141735fa8 ; literal="feel furious"
0x00deab0e: jmp    0x140deaba4
0x00deab13: lea    rdx,[rip+0x94b49e]        # 0x141735fb8 ; literal="be joyful"
0x00deab1a: jmp    0x140deaba4
0x00deab1f: lea    rdx,[rip+0x94b4a2]        # 0x141735fc8 ; literal="be grand"
0x00deab26: jmp    0x140deaba4
0x00deab28: lea    rdx,[rip+0x94b539]        # 0x141736068 ; literal="be merry"
0x00deab2f: jmp    0x140deaba4
0x00deab31: lea    rdx,[rip+0x94b540]        # 0x141736078 ; literal="be graceful"
0x00deab38: jmp    0x140deaba4
0x00deab3a: lea    rdx,[rip+0x94be57]        # 0x141736998 ; literal="build as the performance proceeds"
0x00deab41: jmp    0x140deaba4
0x00deab43: lea    rdx,[rip+0x94b556]        # 0x1417360a0 ; literal="evoke tears"
0x00deab4a: jmp    0x140deaba4
0x00deab4c: lea    rdx,[rip+0x94b4c5]        # 0x141736018 ; literal="be melancholic"
0x00deab53: jmp    0x140deaba4
0x00deab55: lea    rdx,[rip+0x94b4cc]        # 0x141736028 ; literal="feel mournful"
0x00deab5c: jmp    0x140deaba4
0x00deab5e: lea    rdx,[rip+0x94be5b]        # 0x1417369c0 ; literal="perform with a light touch"
0x00deab65: jmp    0x140deaba4
0x00deab67: lea    rdx,[rip+0x94b4ea]        # 0x141736058 ; literal="feel heavy"
0x00deab6e: jmp    0x140deaba4
0x00deab70: lea    rdx,[rip+0x94b581]        # 0x1417360f8 ; literal="feel mysterious"
0x00deab77: jmp    0x140deaba4
0x00deab79: lea    rdx,[rip+0x94b588]        # 0x141736108 ; literal="be jumpy"
0x00deab80: jmp    0x140deaba4
0x00deab82: lea    rdx,[rip+0x94b58f]        # 0x141736118 ; literal="feel playful"
0x00deab89: jmp    0x140deaba4
0x00deab8b: lea    rdx,[rip+0x94b596]        # 0x141736128 ; literal="feel tender"
0x00deab92: jmp    0x140deaba4
0x00deab94: lea    rdx,[rip+0x94b515]        # 0x1417360b0 ; literal="feel calm"
0x00deab9b: jmp    0x140deaba4
0x00deab9d: lea    rdx,[rip+0x94b51c]        # 0x1417360c0 ; literal="be triumphant"
0x00deaba4: mov    rcx,rdi
0x00deaba7: call   0x140070b20
0x00deabac: cmp    r14d,0x3
0x00deabb0: jl     0x140deabc6
0x00deabb2: lea    rdx,[rip+0x81474f]        # 0x1415ff308 ; literal=", "
0x00deabb9: mov    rcx,rdi
0x00deabbc: call   0x140070b20
0x00deabc1: dec    r14d
0x00deabc4: jmp    0x140deabe7
0x00deabc6: cmp    r14d,0x2
0x00deabca: jne    0x140deabdb
0x00deabcc: lea    rdx,[rip+0x81476d]        # 0x1415ff340 ; literal=" and "
0x00deabd3: mov    rcx,rdi
0x00deabd6: call   0x140070b20
0x00deabdb: dec    r14d
0x00deabde: jmp    0x140deabe7
0x00deabe0: lea    rbx,[rip+0xffffffffff215419]        # 0x140000000
0x00deabe7: lea    rcx,[rsp+0x40]
0x00deabec: call   0x1400703d0
0x00deabf1: mov    rcx,QWORD PTR [rax]
0x00deabf4: cmp    DWORD PTR [rcx+0x14],0xffffffff
0x00deabf8: je     0x140deacc3
0x00deabfe: lea    rdx,[rip+0x94bdd7]        # 0x1417369dc ; literal="is to "
0x00deac05: mov    rcx,rdi
0x00deac08: call   0x140070b20
0x00deac0d: lea    rcx,[rsp+0x40]
0x00deac12: call   0x1400703d0
0x00deac17: mov    rcx,QWORD PTR [rax]
0x00deac1a: mov    eax,DWORD PTR [rcx+0x14]
0x00deac1d: add    eax,0xffffffec
0x00deac20: cmp    eax,0xa
0x00deac23: ja     0x140deac9c
0x00deac25: cdqe
0x00deac27: mov    ecx,DWORD PTR [rbx+rax*4+0xdefacc]
0x00deac2e: add    rcx,rbx
0x00deac31: jmp    rcx
0x00deac33: lea    rdx,[rip+0x94aa86]        # 0x1417356c0 ; literal="be in whispered undertones"
0x00deac3a: jmp    0x140deac94
0x00deac3c: lea    rdx,[rip+0x94aa9d]        # 0x1417356e0 ; literal="be very soft"
0x00deac43: jmp    0x140deac94
0x00deac45: lea    rdx,[rip+0x94aaa4]        # 0x1417356f0 ; literal="be soft"
0x00deac4c: jmp    0x140deac94
0x00deac4e: lea    rdx,[rip+0x94aa13]        # 0x141735668 ; literal="be moderately soft"
0x00deac55: jmp    0x140deac94
0x00deac57: lea    rdx,[rip+0x94aa22]        # 0x141735680 ; literal="be moderately loud"
0x00deac5e: jmp    0x140deac94
0x00deac60: lea    rdx,[rip+0x94aa31]        # 0x141735698 ; literal="be loud"
0x00deac67: jmp    0x140deac94
0x00deac69: lea    rdx,[rip+0x94aa30]        # 0x1417356a0 ; literal="be very loud"
0x00deac70: jmp    0x140deac94
0x00deac72: lea    rdx,[rip+0x94aadf]        # 0x141735758 ; literal="become louder and louder"
0x00deac79: jmp    0x140deac94
0x00deac7b: lea    rdx,[rip+0x94aaf6]        # 0x141735778 ; literal="become softer and softer"
0x00deac82: jmp    0x140deac94
0x00deac84: lea    rdx,[rip+0x94ab0d]        # 0x141735798 ; literal="fade into silence"
0x00deac8b: jmp    0x140deac94
0x00deac8d: lea    rdx,[rip+0x94ab1c]        # 0x1417357b0 ; literal="start loud then be immediately soft"
0x00deac94: mov    rcx,rdi
0x00deac97: call   0x140070b20
0x00deac9c: cmp    r14d,0x3
0x00deaca0: jl     0x140deacab
0x00deaca2: lea    rdx,[rip+0x81465f]        # 0x1415ff308 ; literal=", "
0x00deaca9: jmp    0x140deacb8
0x00deacab: cmp    r14d,0x2
0x00deacaf: jne    0x140deacc0
0x00deacb1: lea    rdx,[rip+0x814688]        # 0x1415ff340 ; literal=" and "
0x00deacb8: mov    rcx,rdi
0x00deacbb: call   0x140070b20
0x00deacc0: dec    r14d
0x00deacc3: lea    rcx,[rsp+0x40]
0x00deacc8: call   0x1400703d0
0x00deaccd: mov    rcx,QWORD PTR [rax]
0x00deacd0: cmp    DWORD PTR [rcx+0x8],0x0
0x00deacd4: je     0x140deaeb9
0x00deacda: xor    eax,eax
0x00deacdc: mov    ebx,eax
0x00deacde: mov    r13d,DWORD PTR [rsp+0x38]
0x00deace3: lea    rsi,[rip+0xffffffffff215316]        # 0x140000000
0x00deacea: cmp    ebx,0xd
0x00deaced: ja     0x140dead6c
0x00deacef: movsxd rax,ebx
0x00deacf2: mov    ecx,DWORD PTR [rsi+rax*4+0xdefaf8]
0x00deacf9: add    rcx,rsi
0x00deacfc: jmp    rcx
0x00deacfe: mov    r13d,0x1
0x00dead04: jmp    0x140dead6c
0x00dead06: mov    r13d,0x2
0x00dead0c: jmp    0x140dead6c
0x00dead0e: mov    r13d,0x4
0x00dead14: jmp    0x140dead6c
0x00dead16: mov    r13d,0x8
0x00dead1c: jmp    0x140dead6c
0x00dead1e: mov    r13d,0x10
0x00dead24: jmp    0x140dead6c
0x00dead26: mov    r13d,0x20
0x00dead2c: jmp    0x140dead6c
0x00dead2e: mov    r13d,0x40
0x00dead34: jmp    0x140dead6c
0x00dead36: mov    r13d,0x80
0x00dead3c: jmp    0x140dead6c
0x00dead3e: mov    r13d,0x800
0x00dead44: jmp    0x140dead6c
0x00dead46: mov    r13d,0x1000
0x00dead4c: jmp    0x140dead6c
0x00dead4e: mov    r13d,0x100
0x00dead54: jmp    0x140dead6c
0x00dead56: mov    r13d,0x200
0x00dead5c: jmp    0x140dead6c
0x00dead5e: mov    r13d,0x2000
0x00dead64: jmp    0x140dead6c
0x00dead66: mov    r13d,0x4000
0x00dead6c: lea    rcx,[rsp+0x40]
0x00dead71: call   0x1400703d0
0x00dead76: mov    rcx,QWORD PTR [rax]
0x00dead79: test   DWORD PTR [rcx+0x8],r13d
0x00dead7d: je     0x140deaea4
0x00dead83: cmp    r13d,0x80
0x00dead8a: ja     0x140deae09
0x00dead8c: je     0x140deae00
0x00dead8e: lea    eax,[r13-0x1]
0x00dead92: cmp    eax,0x3f
0x00dead95: ja     0x140deae7d
0x00dead9b: movzx  eax,BYTE PTR [rsi+rax*1+0xdefb50]
0x00deada3: mov    ecx,DWORD PTR [rsi+rax*4+0xdefb30]
0x00deadaa: add    rcx,rsi
0x00deadad: jmp    rcx
0x00deadaf: lea    rdx,[rip+0x94bcda]        # 0x141736a90 ; literal="glides from note to note"
0x00deadb6: jmp    0x140deae75
0x00deadbb: lea    rdx,[rip+0x94bcee]        # 0x141736ab0 ; literal="uses grace notes"
0x00deadc2: jmp    0x140deae75
0x00deadc7: lea    rdx,[rip+0x94bcfa]        # 0x141736ac8 ; literal="uses mordents"
0x00deadce: jmp    0x140deae75
0x00deadd3: lea    rdx,[rip+0x94bcfe]        # 0x141736ad8 ; literal="makes trills"
0x00deadda: jmp    0x140deae75
0x00deaddf: lea    rdx,[rip+0x94bc5a]        # 0x141736a40 ; literal="plays rapid runs"
0x00deade6: jmp    0x140deae75
0x00deadeb: lea    rdx,[rip+0x94bcf6]        # 0x141736ae8 ; literal="spreads syllables over many notes"
0x00deadf2: jmp    0x140deae75
0x00deadf7: lea    rdx,[rip+0x94bd12]        # 0x141736b10 ; literal="matches notes and syllables"
0x00deadfe: jmp    0x140deae75
0x00deae00: lea    rdx,[rip+0x94bc51]        # 0x141736a58 ; literal="locally improvises"
0x00deae07: jmp    0x140deae75
0x00deae09: cmp    r13d,0x1000
0x00deae10: ja     0x140deae53
0x00deae12: je     0x140deae4a
0x00deae14: cmp    r13d,0x100
0x00deae1b: je     0x140deae41
0x00deae1d: cmp    r13d,0x200
0x00deae24: je     0x140deae38
0x00deae26: cmp    r13d,0x800
0x00deae2d: jne    0x140deae7d
0x00deae2f: lea    rdx,[rip+0x94bd1a]        # 0x141736b50 ; literal="modulates frequently"
0x00deae36: jmp    0x140deae75
0x00deae38: lea    rdx,[rip+0x94bc41]        # 0x141736a80 ; literal="adds fills"
0x00deae3f: jmp    0x140deae75
0x00deae41: lea    rdx,[rip+0x94bc28]        # 0x141736a70 ; literal="syncopates"
0x00deae48: jmp    0x140deae75
0x00deae4a: lea    rdx,[rip+0x94bd17]        # 0x141736b68 ; literal="plays arpeggios"
0x00deae51: jmp    0x140deae75
0x00deae53: cmp    r13d,0x2000
0x00deae5a: je     0x140deae6e
0x00deae5c: cmp    r13d,0x4000
0x00deae63: jne    0x140deae7d
0x00deae65: lea    rdx,[rip+0x94bd1c]        # 0x141736b88 ; literal="plays legato"
0x00deae6c: jmp    0x140deae75
0x00deae6e: lea    rdx,[rip+0x94bd03]        # 0x141736b78 ; literal="plays staccato"
0x00deae75: mov    rcx,rdi
0x00deae78: call   0x140070b20
0x00deae7d: cmp    r14d,0x3
0x00deae81: jl     0x140deae8c
0x00deae83: lea    rdx,[rip+0x81447e]        # 0x1415ff308 ; literal=", "
0x00deae8a: jmp    0x140deae99
0x00deae8c: cmp    r14d,0x2
0x00deae90: jne    0x140deaea1
0x00deae92: lea    rdx,[rip+0x8144a7]        # 0x1415ff340 ; literal=" and "
0x00deae99: mov    rcx,rdi
0x00deae9c: call   0x140070b20
0x00deaea1: dec    r14d
0x00deaea4: inc    ebx
0x00deaea6: cmp    ebx,0xe
0x00deaea9: jl     0x140deace3
0x00deaeaf: mov    DWORD PTR [rsp+0x38],r13d
0x00deaeb4: mov    r13d,DWORD PTR [rsp+0x3c]
0x00deaeb9: lea    rdx,[rip+0x8297c0]        # 0x141614680 ; literal=".  "
0x00deaec0: mov    rcx,rdi
0x00deaec3: call   0x140070b20
0x00deaec8: movzx  esi,BYTE PTR [rsp+0x31]
0x00deaecd: mov    r14d,DWORD PTR [rsp+0x64]
0x00deaed2: test   sil,sil
0x00deaed5: je     0x140deb359
0x00deaedb: test   r13d,r13d
0x00deaede: js     0x140deb359
0x00deaee4: lea    rcx,[rsp+0x40]
0x00deaee9: call   0x1400703d0
0x00deaeee: mov    rbx,QWORD PTR [rax]
0x00deaef1: movsxd rax,DWORD PTR [rbx]
0x00deaef4: cmp    eax,0xffffffff
0x00deaef7: jne    0x140deaff2
0x00deaefd: mov    ebx,DWORD PTR [rsp+0x60]
0x00deaf01: cmp    r13d,ebx
0x00deaf04: jne    0x140deaf46
0x00deaf06: lea    rdx,[rip+0x94bc23]        # 0x141736b30 ; literal="The voice stays in the "
0x00deaf0d: mov    rcx,rdi
0x00deaf10: call   0x140070b20
0x00deaf15: test   r13d,r13d
0x00deaf18: je     0x140deafcf
0x00deaf1e: sub    r13d,0x1
0x00deaf22: je     0x140deaf3a
0x00deaf24: cmp    r13d,0x1
0x00deaf28: jne    0x140deafde
0x00deaf2e: lea    rdx,[rip+0x8760bb]        # 0x141660ff0 ; literal="high"
0x00deaf35: jmp    0x140deafd6
0x00deaf3a: lea    rdx,[rip+0x94bc07]        # 0x141736b48 ; literal="middle"
0x00deaf41: jmp    0x140deafd6
0x00deaf46: test   r13d,r13d
0x00deaf49: jne    0x140deaf64
0x00deaf4b: cmp    ebx,0x2
0x00deaf4e: jne    0x140deaf64
0x00deaf50: lea    rdx,[rip+0x94bcb1]        # 0x141736c08 ; literal="The voice uses its entire range.  "
0x00deaf57: mov    rcx,rdi
0x00deaf5a: call   0x140070b20
0x00deaf5f: jmp    0x140deb359
0x00deaf64: lea    rdx,[rip+0x94bcc5]        # 0x141736c30 ; literal="The voice ranges from the "
0x00deaf6b: mov    rcx,rdi
0x00deaf6e: call   0x140070b20
0x00deaf73: test   r13d,r13d
0x00deaf76: je     0x140deaf96
0x00deaf78: sub    r13d,0x1
0x00deaf7c: je     0x140deaf8d
0x00deaf7e: cmp    r13d,0x1
0x00deaf82: jne    0x140deafa5
0x00deaf84: lea    rdx,[rip+0x876065]        # 0x141660ff0 ; literal="high"
0x00deaf8b: jmp    0x140deaf9d
0x00deaf8d: lea    rdx,[rip+0x94bbb4]        # 0x141736b48 ; literal="middle"
0x00deaf94: jmp    0x140deaf9d
0x00deaf96: lea    rdx,[rip+0x87605b]        # 0x141660ff8 ; literal="low"
0x00deaf9d: mov    rcx,rdi
0x00deafa0: call   0x140070b20
0x00deafa5: lea    rdx,[rip+0x94bca4]        # 0x141736c50 ; literal=" register to the "
0x00deafac: mov    rcx,rdi
0x00deafaf: call   0x140070b20
0x00deafb4: test   ebx,ebx
0x00deafb6: je     0x140deafcf
0x00deafb8: sub    ebx,0x1
0x00deafbb: je     0x140deaf3a
0x00deafc1: cmp    ebx,0x1
0x00deafc4: jne    0x140deafde
0x00deafc6: lea    rdx,[rip+0x876023]        # 0x141660ff0 ; literal="high"
0x00deafcd: jmp    0x140deafd6
0x00deafcf: lea    rdx,[rip+0x876022]        # 0x141660ff8 ; literal="low"
0x00deafd6: mov    rcx,rdi
0x00deafd9: call   0x140070b20
0x00deafde: lea    rdx,[rip+0x94bc13]        # 0x141736bf8 ; literal=" register.  "
0x00deafe5: mov    rcx,rdi
0x00deafe8: call   0x140070b20
0x00deafed: jmp    0x140deb359
0x00deaff2: mov    rdx,rax
0x00deaff5: lea    rcx,[rip+0x171e17c]        # 0x142509178
0x00deaffc: call   0x1400707e0
0x00deb001: mov    rcx,QWORD PTR [rax]
0x00deb004: add    rcx,0x248
0x00deb00b: call   0x140070410
0x00deb010: mov    r15,rax
0x00deb013: movsxd r14,DWORD PTR [rsp+0x60]
0x00deb018: cmp    r13d,r14d
0x00deb01b: jne    0x140deb0d0
0x00deb021: mov    rcx,rdi
0x00deb024: cmp    r15d,0x4
0x00deb028: lea    rdx,[rip+0x94bb69]        # 0x141736b98 ; literal="The voice is confined to the "
0x00deb02f: jge    0x140deb038
0x00deb031: lea    rdx,[rip+0x94baf8]        # 0x141736b30 ; literal="The voice stays in the "
0x00deb038: call   0x140070b20
0x00deb03d: movsxd rdx,DWORD PTR [rbx]
0x00deb040: lea    rcx,[rip+0x171e131]        # 0x142509178
0x00deb047: call   0x1400707e0
0x00deb04c: mov    rcx,QWORD PTR [rax]
0x00deb04f: add    rcx,0x248
0x00deb056: movsxd rdx,r13d
0x00deb059: call   0x1400707e0
0x00deb05e: mov    rcx,QWORD PTR [rax]
0x00deb061: call   0x140de77f0
0x00deb066: cmp    eax,0xffffffff
0x00deb069: je     0x140deb084
0x00deb06b: mov    rdx,rdi
0x00deb06e: mov    ecx,eax
0x00deb070: call   0x140793d10
0x00deb075: lea    rdx,[rip+0x8138f0]        # 0x1415fe96c ; literal=" "
0x00deb07c: mov    rcx,rdi
0x00deb07f: call   0x140070b20
0x00deb084: test   r13d,r13d
0x00deb087: jne    0x140deb095
0x00deb089: lea    rdx,[rip+0x875f68]        # 0x141660ff8 ; literal="low"
0x00deb090: jmp    0x140deb33d
0x00deb095: cmp    r13d,0x1
0x00deb099: jne    0x140deb0ad
0x00deb09b: cmp    r15d,0x3
0x00deb09f: jl     0x140deb0ad
0x00deb0a1: lea    rdx,[rip+0x94baa0]        # 0x141736b48 ; literal="middle"
0x00deb0a8: jmp    0x140deb33d
0x00deb0ad: lea    eax,[r15-0x1]
0x00deb0b1: cmp    r13d,eax
0x00deb0b4: jne    0x140deb336
0x00deb0ba: cmp    r15d,0x4
0x00deb0be: jl     0x140deb336
0x00deb0c4: lea    rdx,[rip+0x94baed]        # 0x141736bb8 ; literal="top"
0x00deb0cb: jmp    0x140deb33d
0x00deb0d0: movsxd rdx,DWORD PTR [rbx]
0x00deb0d3: lea    rcx,[rip+0x171e09e]        # 0x142509178
0x00deb0da: call   0x1400707e0
0x00deb0df: mov    rcx,QWORD PTR [rax]
0x00deb0e2: add    rcx,0x248
0x00deb0e9: movsxd rdx,r13d
0x00deb0ec: call   0x1400707e0
0x00deb0f1: mov    rcx,QWORD PTR [rax]
0x00deb0f4: call   0x140de77f0
0x00deb0f9: mov    esi,eax
0x00deb0fb: movsxd rdx,DWORD PTR [rbx]
0x00deb0fe: lea    rcx,[rip+0x171e073]        # 0x142509178
0x00deb105: call   0x1400707e0
0x00deb10a: mov    rcx,QWORD PTR [rax]
0x00deb10d: add    rcx,0x248
0x00deb114: mov    rdx,r14
0x00deb117: call   0x1400707e0
0x00deb11c: mov    rcx,QWORD PTR [rax]
0x00deb11f: call   0x140de77f0
0x00deb124: mov    r12d,eax
0x00deb127: lea    ebx,[r15-0x1]
0x00deb12b: test   r13d,r13d
0x00deb12e: jne    0x140deb17d
0x00deb130: cmp    r14d,ebx
0x00deb133: jne    0x140deb17d
0x00deb135: cmp    esi,0xffffffff
0x00deb138: jne    0x140deb14a
0x00deb13a: cmp    eax,esi
0x00deb13c: jne    0x140deb14a
0x00deb13e: lea    rdx,[rip+0x94bac3]        # 0x141736c08 ; literal="The voice uses its entire range.  "
0x00deb145: jmp    0x140deb34c
0x00deb14a: cmp    r14d,ebx
0x00deb14d: jne    0x140deb17d
0x00deb14f: cmp    esi,r12d
0x00deb152: jne    0x140deb23f
0x00deb158: lea    rdx,[rip+0x818ad5]        # 0x141603c34 ; literal="The "
0x00deb15f: mov    rcx,rdi
0x00deb162: call   0x140070b20
0x00deb167: mov    rdx,rdi
0x00deb16a: mov    ecx,esi
0x00deb16c: call   0x140793d10
0x00deb171: lea    rdx,[rip+0x94ba48]        # 0x141736bc0 ; literal=" voice uses its entire range.  "
0x00deb178: jmp    0x140deb34c
0x00deb17d: cmp    esi,r12d
0x00deb180: jne    0x140deb23a
0x00deb186: lea    rdx,[rip+0x818aa7]        # 0x141603c34 ; literal="The "
0x00deb18d: mov    rcx,rdi
0x00deb190: call   0x140070b20
0x00deb195: mov    rdx,rdi
0x00deb198: mov    ecx,esi
0x00deb19a: call   0x140793d10
0x00deb19f: lea    rdx,[rip+0x94ba3a]        # 0x141736be0 ; literal=" voice ranges from the "
0x00deb1a6: mov    rcx,rdi
0x00deb1a9: call   0x140070b20
0x00deb1ae: test   r13d,r13d
0x00deb1b1: jne    0x140deb1bc
0x00deb1b3: lea    rdx,[rip+0x875e3e]        # 0x141660ff8 ; literal="low"
0x00deb1ba: jmp    0x140deb1ee
0x00deb1bc: cmp    r13d,0x1
0x00deb1c0: jne    0x140deb1d1
0x00deb1c2: cmp    r15d,0x3
0x00deb1c6: jl     0x140deb1d1
0x00deb1c8: lea    rdx,[rip+0x94b979]        # 0x141736b48 ; literal="middle"
0x00deb1cf: jmp    0x140deb1ee
0x00deb1d1: lea    eax,[r15-0x1]
0x00deb1d5: cmp    r13d,eax
0x00deb1d8: jne    0x140deb1e7
0x00deb1da: cmp    r15d,0x4
0x00deb1de: lea    rdx,[rip+0x94b9d3]        # 0x141736bb8 ; literal="top"
0x00deb1e5: jge    0x140deb1ee
0x00deb1e7: lea    rdx,[rip+0x875e02]        # 0x141660ff0 ; literal="high"
0x00deb1ee: mov    rcx,rdi
0x00deb1f1: call   0x140070b20
0x00deb1f6: lea    rdx,[rip+0x94ba53]        # 0x141736c50 ; literal=" register to the "
0x00deb1fd: mov    rcx,rdi
0x00deb200: call   0x140070b20
0x00deb205: test   r14d,r14d
0x00deb208: jne    0x140deb216
0x00deb20a: lea    rdx,[rip+0x875de7]        # 0x141660ff8 ; literal="low"
0x00deb211: jmp    0x140deb33d
0x00deb216: cmp    r14d,0x1
0x00deb21a: jne    0x140deb22e
0x00deb21c: cmp    r15d,0x3
0x00deb220: jl     0x140deb22e
0x00deb222: lea    rdx,[rip+0x94b91f]        # 0x141736b48 ; literal="middle"
0x00deb229: jmp    0x140deb33d
0x00deb22e: lea    eax,[r15-0x1]
0x00deb232: cmp    r14d,eax
0x00deb235: jmp    0x140deb0b4
0x00deb23a: test   r13d,r13d
0x00deb23d: jne    0x140deb259
0x00deb23f: mov    r14d,ebx
0x00deb242: cmp    DWORD PTR [rsp+0x60],ebx
0x00deb246: jne    0x140deb259
0x00deb248: lea    rdx,[rip+0x94ba51]        # 0x141736ca0 ; literal="The voice uses its entire range from the "
0x00deb24f: mov    rcx,rdi
0x00deb252: call   0x140070b20
0x00deb257: jmp    0x140deb26b
0x00deb259: lea    rdx,[rip+0x94b9d0]        # 0x141736c30 ; literal="The voice ranges from the "
0x00deb260: mov    rcx,rdi
0x00deb263: call   0x140070b20
0x00deb268: mov    r14d,ebx
0x00deb26b: cmp    esi,0xffffffff
0x00deb26e: je     0x140deb289
0x00deb270: mov    rdx,rdi
0x00deb273: mov    ecx,esi
0x00deb275: call   0x140793d10
0x00deb27a: lea    rdx,[rip+0x8136eb]        # 0x1415fe96c ; literal=" "
0x00deb281: mov    rcx,rdi
0x00deb284: call   0x140070b20
0x00deb289: test   r13d,r13d
0x00deb28c: jne    0x140deb297
0x00deb28e: lea    rdx,[rip+0x875d63]        # 0x141660ff8 ; literal="low"
0x00deb295: jmp    0x140deb2c5
0x00deb297: cmp    r13d,0x1
0x00deb29b: jne    0x140deb2ac
0x00deb29d: cmp    r15d,0x3
0x00deb2a1: jl     0x140deb2ac
0x00deb2a3: lea    rdx,[rip+0x94b89e]        # 0x141736b48 ; literal="middle"
0x00deb2aa: jmp    0x140deb2c5
0x00deb2ac: cmp    r13d,r14d
0x00deb2af: jne    0x140deb2be
0x00deb2b1: cmp    r15d,0x4
0x00deb2b5: lea    rdx,[rip+0x94b8fc]        # 0x141736bb8 ; literal="top"
0x00deb2bc: jge    0x140deb2c5
0x00deb2be: lea    rdx,[rip+0x875d2b]        # 0x141660ff0 ; literal="high"
0x00deb2c5: mov    rcx,rdi
0x00deb2c8: call   0x140070b20
0x00deb2cd: lea    rdx,[rip+0x94b97c]        # 0x141736c50 ; literal=" register to the "
0x00deb2d4: mov    rcx,rdi
0x00deb2d7: call   0x140070b20
0x00deb2dc: cmp    r12d,0xffffffff
0x00deb2e0: je     0x140deb2fc
0x00deb2e2: mov    rdx,rdi
0x00deb2e5: mov    ecx,r12d
0x00deb2e8: call   0x140793d10
0x00deb2ed: lea    rdx,[rip+0x813678]        # 0x1415fe96c ; literal=" "
0x00deb2f4: mov    rcx,rdi
0x00deb2f7: call   0x140070b20
0x00deb2fc: mov    ecx,DWORD PTR [rsp+0x60]
0x00deb300: test   ecx,ecx
0x00deb302: jne    0x140deb30d
0x00deb304: lea    rdx,[rip+0x875ced]        # 0x141660ff8 ; literal="low"
0x00deb30b: jmp    0x140deb33d
0x00deb30d: cmp    ecx,0x1
0x00deb310: jne    0x140deb321
0x00deb312: cmp    r15d,0x3
0x00deb316: jl     0x140deb321
0x00deb318: lea    rdx,[rip+0x94b829]        # 0x141736b48 ; literal="middle"
0x00deb31f: jmp    0x140deb33d
0x00deb321: lea    eax,[r15-0x1]
0x00deb325: cmp    ecx,eax
0x00deb327: jne    0x140deb336
0x00deb329: cmp    r15d,0x4
0x00deb32d: lea    rdx,[rip+0x94b884]        # 0x141736bb8 ; literal="top"
0x00deb334: jge    0x140deb33d
0x00deb336: lea    rdx,[rip+0x875cb3]        # 0x141660ff0 ; literal="high"
0x00deb33d: mov    rcx,rdi
0x00deb340: call   0x140070b20
0x00deb345: lea    rdx,[rip+0x94b8ac]        # 0x141736bf8 ; literal=" register.  "
0x00deb34c: mov    rcx,rdi
0x00deb34f: call   0x140070b20
0x00deb354: mov    r14d,DWORD PTR [rsp+0x64]
0x00deb359: lea    rcx,[rsp+0x40]
0x00deb35e: call   0x1400703c0
0x00deb363: inc    r14d
0x00deb366: mov    DWORD PTR [rsp+0x64],r14d
0x00deb36b: lea    r8,[rbp+0x30]
0x00deb36f: lea    rdx,[rsp+0x35]
0x00deb374: lea    rcx,[rsp+0x40]
0x00deb379: call   0x1400703e0
0x00deb37e: xor    edx,edx
0x00deb380: movzx  ecx,BYTE PTR [rax]
0x00deb383: call   0x140066d70
0x00deb388: test   al,al
0x00deb38a: mov    rbx,QWORD PTR [rbp-0x78]
0x00deb38e: jne    0x140dea350
0x00deb394: mov    r12,QWORD PTR [rbp-0x38]
0x00deb398: xor    r13d,r13d
0x00deb39b: mov    r15d,r13d
0x00deb39e: mov    DWORD PTR [rbp-0x48],r13d
0x00deb3a2: mov    r14d,r13d
0x00deb3a5: mov    DWORD PTR [rsp+0x64],r13d
0x00deb3aa: mov    esi,0xffffffff
0x00deb3af: mov    DWORD PTR [rsp+0x60],esi
0x00deb3b3: xor    eax,eax
0x00deb3b5: mov    r13d,esi
0x00deb3b8: mov    ebx,eax
0x00deb3ba: lea    rcx,[r12+0x88]
0x00deb3c2: lea    rdx,[rsp+0x58]
0x00deb3c7: call   0x140070800
0x00deb3cc: lea    rcx,[r12+0x88]
0x00deb3d4: lea    rdx,[rsp+0x78]
0x00deb3d9: call   0x1400707f0
0x00deb3de: lea    r8,[rsp+0x78]
0x00deb3e3: lea    rdx,[rsp+0x35]
0x00deb3e8: lea    rcx,[rsp+0x58]
0x00deb3ed: call   0x1400703e0
0x00deb3f2: xor    edx,edx
0x00deb3f4: movzx  ecx,BYTE PTR [rax]
0x00deb3f7: call   0x140066d70
0x00deb3fc: test   al,al
0x00deb3fe: je     0x140deb480
0x00deb404: lea    rcx,[rsp+0x58]
0x00deb409: call   0x1400703d0
0x00deb40e: mov    rcx,QWORD PTR [rax]
0x00deb411: lea    eax,[r15+0x1]
0x00deb415: cmp    DWORD PTR [rcx],0x0
0x00deb418: cmovne eax,r15d
0x00deb41c: mov    r15d,eax
0x00deb41f: lea    rcx,[rsp+0x58]
0x00deb424: call   0x1400703d0
0x00deb429: mov    rcx,QWORD PTR [rax]
0x00deb42c: cmp    DWORD PTR [rcx],0xa
0x00deb42f: jne    0x140deb445
0x00deb431: inc    r14d
0x00deb434: cmp    esi,0xffffffff
0x00deb437: jne    0x140deb43d
0x00deb439: mov    esi,ebx
0x00deb43b: jmp    0x140deb445
0x00deb43d: cmp    r13d,0xffffffff
0x00deb441: cmove  r13d,ebx
0x00deb445: lea    rcx,[rsp+0x58]
0x00deb44a: call   0x1400703c0
0x00deb44f: inc    ebx
0x00deb451: lea    r8,[rsp+0x78]
0x00deb456: lea    rdx,[rsp+0x35]
0x00deb45b: lea    rcx,[rsp+0x58]
0x00deb460: call   0x1400703e0
0x00deb465: xor    edx,edx
0x00deb467: movzx  ecx,BYTE PTR [rax]
0x00deb46a: call   0x140066d70
0x00deb46f: test   al,al
0x00deb471: jne    0x140deb404
0x00deb473: mov    DWORD PTR [rsp+0x64],r14d
0x00deb478: mov    DWORD PTR [rsp+0x60],esi
0x00deb47c: mov    DWORD PTR [rbp-0x48],r15d
0x00deb480: lea    rdx,[rip+0x828c25]        # 0x1416140ac ; literal="[B]"
0x00deb487: mov    rcx,rdi
0x00deb48a: call   0x140070b20
0x00deb48f: lea    rcx,[rbp+0x1b0]
0x00deb496: call   0x140070c50
0x00deb49b: nop
0x00deb49c: lea    rcx,[r12+0x8]
0x00deb4a1: xor    r9d,r9d
0x00deb4a4: mov    r8b,0x1
0x00deb4a7: lea    rdx,[rbp+0x1b0]
0x00deb4ae: call   0x140aaafe0
0x00deb4b3: lea    rcx,[rbp+0x1b0]
0x00deb4ba: call   0x140544330
0x00deb4bf: lea    rdx,[rbp+0x1b0]
0x00deb4c6: mov    rcx,rdi
0x00deb4c9: call   0x1400bb2d0
0x00deb4ce: nop
0x00deb4cf: lea    rcx,[rbp+0x1b0]
0x00deb4d6: call   0x1400693f0
0x00deb4db: lea    rcx,[r12+0x88]
0x00deb4e3: call   0x140070410
0x00deb4e8: cmp    rax,0x1
0x00deb4ec: jne    0x140deb4f7
0x00deb4ee: lea    rdx,[rip+0x94b7db]        # 0x141736cd0 ; literal=" has a simple structure: "
0x00deb4f5: jmp    0x140deb518
0x00deb4f7: lea    rcx,[r12+0x88]
0x00deb4ff: call   0x140070410
0x00deb504: cmp    rax,0x2
0x00deb508: lea    rdx,[rip+0x94b7e1]        # 0x141736cf0 ; literal=" has the following structure: "
0x00deb50f: je     0x140deb518
0x00deb511: lea    rdx,[rip+0x94b7f8]        # 0x141736d10 ; literal=" has a well-defined multi-passage structure: "
0x00deb518: mov    rcx,rdi
0x00deb51b: call   0x140070b20
0x00deb520: xor    r15d,r15d
0x00deb523: mov    DWORD PTR [rsp+0x3c],r15d
0x00deb528: lea    rcx,[r12+0xd0]
0x00deb530: call   0x140070410
0x00deb535: mov    rsi,rax
0x00deb538: mov    QWORD PTR [rsp+0x78],rax
0x00deb53d: lea    rdx,[rbp-0x70]
0x00deb541: lea    rcx,[r12+0xd0]
0x00deb549: call   0x140070800
0x00deb54e: lea    rdx,[rbp+0x50]
0x00deb552: lea    rcx,[r12+0xd0]
0x00deb55a: call   0x1400707f0
0x00deb55f: lea    r8,[rbp+0x50]
0x00deb563: lea    rdx,[rsp+0x35]
0x00deb568: lea    rcx,[rbp-0x70]
0x00deb56c: call   0x1400703e0
0x00deb571: xor    edx,edx
0x00deb573: movzx  ecx,BYTE PTR [rax]
0x00deb576: call   0x140066d70
0x00deb57b: test   al,al
0x00deb57d: je     0x140debd28
0x00deb583: lea    rbx,[r12+0x88]
0x00deb58b: mov    QWORD PTR [rbp-0x78],rbx
0x00deb58f: nop
0x00deb590: lea    rcx,[rbp-0x70]
0x00deb594: call   0x1400703d0
0x00deb599: mov    rcx,QWORD PTR [rax]
0x00deb59c: mov    r14d,DWORD PTR [rcx+0xc]
0x00deb5a0: mov    r12d,r15d
0x00deb5a3: lea    rcx,[rbp-0x70]
0x00deb5a7: call   0x1400703d0
0x00deb5ac: mov    rcx,QWORD PTR [rax]
0x00deb5af: cmp    DWORD PTR [rcx+0xc],0x0
0x00deb5b3: jle    0x140deba6a
0x00deb5b9: nop    DWORD PTR [rax+0x0]
0x00deb5c0: lea    rcx,[rbp-0x70]
0x00deb5c4: call   0x1400703d0
0x00deb5c9: mov    rcx,QWORD PTR [rax]
0x00deb5cc: movsxd rdx,DWORD PTR [r15+rcx*1]
0x00deb5d0: mov    rcx,rbx
0x00deb5d3: call   0x1400707e0
0x00deb5d8: mov    rbx,QWORD PTR [rax]
0x00deb5db: xor    sil,sil
0x00deb5de: cmp    DWORD PTR [rbx],0x0
0x00deb5e1: jne    0x140deb6cd
0x00deb5e7: cmp    DWORD PTR [rsp+0x3c],0x1
0x00deb5ec: jl     0x140deb6cd
0x00deb5f2: mov    eax,DWORD PTR [rbx+0x10]
0x00deb5f5: mov    rcx,rdi
0x00deb5f8: cmp    eax,0x1
0x00deb5fb: jne    0x140deb60e
0x00deb5fd: lea    rdx,[rip+0x94b664]        # 0x141736c68 ; literal="an additional"
0x00deb604: call   0x140070b20
0x00deb609: jmp    0x140deb797
0x00deb60e: lea    rdx,[rip+0x94b663]        # 0x141736c78 ; literal="another "
0x00deb615: cmp    DWORD PTR [rbx+0xc],eax
0x00deb618: jne    0x140deb650
0x00deb61a: call   0x140070b20
0x00deb61f: lea    rcx,[rbp+0x190]
0x00deb626: call   0x140070c50
0x00deb62b: nop
0x00deb62c: lea    rdx,[rbp+0x190]
0x00deb633: mov    ecx,DWORD PTR [rbx+0xc]
0x00deb636: call   0x140545040
0x00deb63b: lea    rdx,[rbp+0x190]
0x00deb642: mov    rcx,rdi
0x00deb645: call   0x1400bb2d0
0x00deb64a: nop
0x00deb64b: jmp    0x140deb78b
0x00deb650: call   0x140070b20
0x00deb655: lea    rcx,[rbp+0x190]
0x00deb65c: call   0x140070c50
0x00deb661: nop
0x00deb662: lea    rdx,[rbp+0x190]
0x00deb669: mov    ecx,DWORD PTR [rbx+0xc]
0x00deb66c: call   0x140545040
0x00deb671: lea    rdx,[rbp+0x190]
0x00deb678: mov    rcx,rdi
0x00deb67b: call   0x1400bb2d0
0x00deb680: nop
0x00deb681: lea    rcx,[rbp+0x190]
0x00deb688: call   0x1400693f0
0x00deb68d: lea    rdx,[rip+0x818100]        # 0x141603794 ; literal=" to "
0x00deb694: mov    rcx,rdi
0x00deb697: call   0x140070b20
0x00deb69c: lea    rcx,[rbp+0x190]
0x00deb6a3: call   0x140070c50
0x00deb6a8: nop
0x00deb6a9: lea    rdx,[rbp+0x190]
0x00deb6b0: mov    ecx,DWORD PTR [rbx+0x10]
0x00deb6b3: call   0x140545040
0x00deb6b8: lea    rdx,[rbp+0x190]
0x00deb6bf: mov    rcx,rdi
0x00deb6c2: call   0x1400bb2d0
0x00deb6c7: nop
0x00deb6c8: jmp    0x140deb78b
0x00deb6cd: mov    eax,DWORD PTR [rbx+0x10]
0x00deb6d0: cmp    eax,0x1
0x00deb6d3: jne    0x140deb6ec
0x00deb6d5: lea    rdx,[rip+0x82e24c]        # 0x141619928 ; literal="a"
0x00deb6dc: mov    rcx,rdi
0x00deb6df: call   0x140070b20
0x00deb6e4: mov    sil,0x1
0x00deb6e7: jmp    0x140deb797
0x00deb6ec: lea    rcx,[rbp+0x190]
0x00deb6f3: cmp    DWORD PTR [rbx+0xc],eax
0x00deb6f6: jne    0x140deb71f
0x00deb6f8: call   0x140070c50
0x00deb6fd: nop
0x00deb6fe: lea    rdx,[rbp+0x190]
0x00deb705: mov    ecx,DWORD PTR [rbx+0xc]
0x00deb708: call   0x140545040
0x00deb70d: lea    rdx,[rbp+0x190]
0x00deb714: mov    rcx,rdi
0x00deb717: call   0x1400bb2d0
0x00deb71c: nop
0x00deb71d: jmp    0x140deb78b
0x00deb71f: call   0x140070c50
0x00deb724: nop
0x00deb725: lea    rdx,[rbp+0x190]
0x00deb72c: mov    ecx,DWORD PTR [rbx+0xc]
0x00deb72f: call   0x140545040
0x00deb734: lea    rdx,[rbp+0x190]
0x00deb73b: mov    rcx,rdi
0x00deb73e: call   0x1400bb2d0
0x00deb743: nop
0x00deb744: lea    rcx,[rbp+0x190]
0x00deb74b: call   0x1400693f0
0x00deb750: lea    rdx,[rip+0x81803d]        # 0x141603794 ; literal=" to "
0x00deb757: mov    rcx,rdi
0x00deb75a: call   0x140070b20
0x00deb75f: lea    rcx,[rbp+0x190]
0x00deb766: call   0x140070c50
0x00deb76b: nop
0x00deb76c: lea    rdx,[rbp+0x190]
0x00deb773: mov    ecx,DWORD PTR [rbx+0x10]
0x00deb776: call   0x140545040
0x00deb77b: lea    rdx,[rbp+0x190]
0x00deb782: mov    rcx,rdi
0x00deb785: call   0x1400bb2d0
0x00deb78a: nop
0x00deb78b: lea    rcx,[rbp+0x190]
0x00deb792: call   0x1400693f0
0x00deb797: mov    eax,DWORD PTR [rbx+0xd8]
0x00deb79d: cmp    eax,0xffffffff
0x00deb7a0: je     0x140deb7c7
0x00deb7a2: cmp    eax,0x14
0x00deb7a5: jl     0x140deb7b0
0x00deb7a7: lea    rdx,[rip+0x94b4da]        # 0x141736c88 ; literal=" lengthy"
0x00deb7ae: jmp    0x140deb7bc
0x00deb7b0: cmp    eax,0x4
0x00deb7b3: jg     0x140deb7c7
0x00deb7b5: lea    rdx,[rip+0x94b4d8]        # 0x141736c94 ; literal=" brief"
0x00deb7bc: mov    rcx,rdi
0x00deb7bf: call   0x140070b20
0x00deb7c4: xor    sil,sil
0x00deb7c7: movsxd rax,DWORD PTR [rbx]
0x00deb7ca: cmp    eax,0xb
0x00deb7cd: ja     0x140deba1a
0x00deb7d3: lea    rdx,[rip+0xffffffffff214826]        # 0x140000000
0x00deb7da: mov    ecx,DWORD PTR [rdx+rax*4+0xdefb90]
0x00deb7e1: add    rcx,rdx
0x00deb7e4: jmp    rcx
0x00deb7e6: cmp    DWORD PTR [rbp-0x48],0x1
0x00deb7ea: jne    0x140deb801
0x00deb7ec: cmp    DWORD PTR [rbx+0x10],0x2
0x00deb7f0: jl     0x140deb801
0x00deb7f2: lea    rdx,[rip+0x94aa0f]        # 0x141736208 ; literal=" unrelated"
0x00deb7f9: mov    rcx,rdi
0x00deb7fc: call   0x140070b20
0x00deb801: lea    rdx,[rip+0x94aa10]        # 0x141736218 ; literal=" passage"
0x00deb808: mov    rcx,rdi
0x00deb80b: call   0x140070b20
0x00deb810: cmp    DWORD PTR [rbx+0x10],0x2
0x00deb814: jl     0x140deb825
0x00deb816: lea    rdx,[rip+0x813cab]        # 0x1415ff4c8 ; literal="s"
0x00deb81d: mov    rcx,rdi
0x00deb820: call   0x140070b20
0x00deb825: inc    DWORD PTR [rsp+0x3c]
0x00deb829: jmp    0x140deba1a
0x00deb82e: test   sil,sil
0x00deb831: je     0x140deb842
0x00deb833: lea    rdx,[rip+0x874a1a]        # 0x141660254 ; literal="n"
0x00deb83a: mov    rcx,rdi
0x00deb83d: call   0x140070b20
0x00deb842: lea    rdx,[rip+0x94a9df]        # 0x141736228 ; literal=" introduction"
0x00deb849: jmp    0x140deba12
0x00deb84e: test   sil,sil
0x00deb851: je     0x140deb862
0x00deb853: lea    rdx,[rip+0x8749fa]        # 0x141660254 ; literal="n"
0x00deb85a: mov    rcx,rdi
0x00deb85d: call   0x140070b20
0x00deb862: lea    rdx,[rip+0x94a9cf]        # 0x141736238 ; literal=" exposition"
0x00deb869: mov    rcx,rdi
0x00deb86c: call   0x140070b20
0x00deb871: mov    eax,DWORD PTR [rbx+0x4]
0x00deb874: cmp    eax,DWORD PTR [rsp+0x60]
0x00deb878: jne    0x140deb89c
0x00deb87a: mov    rcx,rdi
0x00deb87d: cmp    DWORD PTR [rsp+0x64],0x1
0x00deb882: jne    0x140deb890
0x00deb884: lea    rdx,[rip+0x81390d]        # 0x1415ff198 ; literal=" of the theme"
0x00deb88b: jmp    0x140deba15
0x00deb890: lea    rdx,[rip+0x813939]        # 0x1415ff1d0 ; literal=" of the first theme"
0x00deb897: jmp    0x140deba15
0x00deb89c: mov    rcx,rdi
0x00deb89f: cmp    eax,r13d
0x00deb8a2: jne    0x140deb8b0
0x00deb8a4: lea    rdx,[rip+0x81390d]        # 0x1415ff1b8 ; literal=" of the second theme"
0x00deb8ab: jmp    0x140deba15
0x00deb8b0: lea    rdx,[rip+0x813949]        # 0x1415ff200 ; literal=" of the previous passage"
0x00deb8b7: jmp    0x140deba15
0x00deb8bc: lea    rdx,[rip+0x94a915]        # 0x1417361d8 ; literal=" recapitulation"
0x00deb8c3: mov    rcx,rdi
0x00deb8c6: call   0x140070b20
0x00deb8cb: mov    eax,DWORD PTR [rbx+0x4]
0x00deb8ce: cmp    eax,DWORD PTR [rsp+0x60]
0x00deb8d2: jne    0x140deb89c
0x00deb8d4: mov    rcx,rdi
0x00deb8d7: cmp    DWORD PTR [rsp+0x64],0x1
0x00deb8dc: jne    0x140deb890
0x00deb8de: lea    rdx,[rip+0x8138b3]        # 0x1415ff198 ; literal=" of the theme"
0x00deb8e5: jmp    0x140deba15
0x00deb8ea: lea    rdx,[rip+0x94a8f7]        # 0x1417361e8 ; literal=" synthesis"
0x00deb8f1: mov    rcx,rdi
0x00deb8f4: call   0x140070b20
0x00deb8f9: mov    eax,DWORD PTR [rbx+0x4]
0x00deb8fc: cmp    eax,DWORD PTR [rsp+0x60]
0x00deb900: jne    0x140deb913
0x00deb902: cmp    eax,r13d
0x00deb905: jne    0x140deb913
0x00deb907: lea    rdx,[rip+0x813912]        # 0x1415ff220 ; literal=" of the two themes"
0x00deb90e: jmp    0x140deba12
0x00deb913: lea    rdx,[rip+0x813936]        # 0x1415ff250 ; literal=" of previous passages"
0x00deb91a: jmp    0x140deba12
0x00deb91f: lea    rdx,[rip+0x94a8ce]        # 0x1417361f4 ; literal=" verse"
0x00deb926: mov    rcx,rdi
0x00deb929: call   0x140070b20
0x00deb92e: cmp    DWORD PTR [rbx+0x10],0x2
0x00deb932: jl     0x140deba1a
0x00deb938: lea    rdx,[rip+0x813b89]        # 0x1415ff4c8 ; literal="s"
0x00deb93f: jmp    0x140deba12
0x00deb944: lea    rdx,[rip+0x94a8b5]        # 0x141736200 ; literal=" chorus"
0x00deb94b: jmp    0x140deba12
0x00deb950: lea    rdx,[rip+0x94a929]        # 0x141736280 ; literal=" finale"
0x00deb957: jmp    0x140deba12
0x00deb95c: lea    rdx,[rip+0x94a925]        # 0x141736288 ; literal=" coda"
0x00deb963: jmp    0x140deba12
0x00deb968: lea    rdx,[rip+0x94a921]        # 0x141736290 ; literal=" bridge-passage"
0x00deb96f: jmp    0x140deb926
0x00deb971: cmp    r13d,0xffffffff
0x00deb975: je     0x140deb9c6
0x00deb977: lea    rcx,[rbp-0x70]
0x00deb97b: call   0x1400703d0
0x00deb980: mov    rcx,QWORD PTR [rax]
0x00deb983: mov    eax,DWORD PTR [rsp+0x60]
0x00deb987: cmp    DWORD PTR [r15+rcx*1],eax
0x00deb98b: jne    0x140deb9a5
0x00deb98d: lea    rdx,[rip+0x94a90c]        # 0x1417362a0 ; literal=" first"
0x00deb994: mov    rcx,rdi
0x00deb997: call   0x140070b20
0x00deb99c: lea    rdx,[rip+0x94a8ad]        # 0x141736250 ; literal=" theme"
0x00deb9a3: jmp    0x140deb926
0x00deb9a5: lea    rcx,[rbp-0x70]
0x00deb9a9: call   0x1400703d0
0x00deb9ae: mov    rcx,QWORD PTR [rax]
0x00deb9b1: cmp    DWORD PTR [r15+rcx*1],r13d
0x00deb9b5: jne    0x140deb9c6
0x00deb9b7: lea    rdx,[rip+0x94a88a]        # 0x141736248 ; literal=" second"
0x00deb9be: mov    rcx,rdi
0x00deb9c1: call   0x140070b20
0x00deb9c6: lea    rdx,[rip+0x94a883]        # 0x141736250 ; literal=" theme"
0x00deb9cd: jmp    0x140deb926
0x00deb9d2: lea    rdx,[rip+0x94a87f]        # 0x141736258 ; literal=" series of variations"
0x00deb9d9: mov    rcx,rdi
0x00deb9dc: call   0x140070b20
0x00deb9e1: mov    eax,DWORD PTR [rbx+0x4]
0x00deb9e4: cmp    eax,DWORD PTR [rsp+0x60]
0x00deb9e8: jne    0x140deba06
0x00deb9ea: mov    rcx,rdi
0x00deb9ed: cmp    DWORD PTR [rsp+0x64],0x1
0x00deb9f2: jne    0x140deb9fd
0x00deb9f4: lea    rdx,[rip+0x8138fd]        # 0x1415ff2f8 ; literal=" on the theme"
0x00deb9fb: jmp    0x140deba15
0x00deb9fd: lea    rdx,[rip+0x8138dc]        # 0x1415ff2e0 ; literal=" on the first theme"
0x00deba04: jmp    0x140deba15
0x00deba06: cmp    eax,r13d
0x00deba09: jne    0x140deba1a
0x00deba0b: lea    rdx,[rip+0x8138fe]        # 0x1415ff310 ; literal=" on the second theme"
0x00deba12: mov    rcx,rdi
0x00deba15: call   0x140070b20
0x00deba1a: cmp    r14d,0x3
0x00deba1e: jl     0x140deba29
0x00deba20: lea    rdx,[rip+0x8138e1]        # 0x1415ff308 ; literal=", "
0x00deba27: jmp    0x140deba36
0x00deba29: cmp    r14d,0x2
0x00deba2d: jne    0x140deba3e
0x00deba2f: lea    rdx,[rip+0x81390a]        # 0x1415ff340 ; literal=" and "
0x00deba36: mov    rcx,rdi
0x00deba39: call   0x140070b20
0x00deba3e: dec    r14d
0x00deba41: inc    r12d
0x00deba44: add    r15,0x4
0x00deba48: lea    rcx,[rbp-0x70]
0x00deba4c: call   0x1400703d0
0x00deba51: mov    rcx,QWORD PTR [rax]
0x00deba54: cmp    r12d,DWORD PTR [rcx+0xc]
0x00deba58: mov    rbx,QWORD PTR [rbp-0x78]
0x00deba5c: jl     0x140deb5c0
0x00deba62: mov    rsi,QWORD PTR [rsp+0x78]
0x00deba67: xor    r15d,r15d
0x00deba6a: lea    rcx,[rbp-0x70]
0x00deba6e: call   0x1400703d0
0x00deba73: mov    rcx,QWORD PTR [rax]
0x00deba76: cmp    DWORD PTR [rcx+0x14],0x2
0x00deba7a: jl     0x140debcca
0x00deba80: lea    rdx,[rip+0x812ee5]        # 0x1415fe96c ; literal=" "
0x00deba87: mov    rcx,rdi
0x00deba8a: call   0x140070b20
0x00deba8f: lea    rcx,[rbp-0x70]
0x00deba93: call   0x1400703d0
0x00deba98: mov    rcx,QWORD PTR [rax]
0x00deba9b: cmp    DWORD PTR [rcx+0x10],0x1
0x00deba9f: jne    0x140debac2
0x00debaa1: lea    rcx,[rbp-0x70]
0x00debaa5: call   0x1400703d0
0x00debaaa: mov    rcx,QWORD PTR [rax]
0x00debaad: cmp    DWORD PTR [rcx+0x14],0x2
0x00debab1: jne    0x140debac2
0x00debab3: lea    rdx,[rip+0x94a7b6]        # 0x141736270 ; literal="possibly "
0x00debaba: mov    rcx,rdi
0x00debabd: call   0x140070b20
0x00debac2: lea    rcx,[rbp-0x70]
0x00debac6: call   0x1400703d0
0x00debacb: mov    rcx,QWORD PTR [rax]
0x00debace: cmp    DWORD PTR [rcx+0xc],0x2
0x00debad2: mov    rcx,rdi
0x00debad5: lea    rdx,[rip+0x94a814]        # 0x1417362f0 ; literal="all repeated"
0x00debadc: jge    0x140debae5
0x00debade: lea    rdx,[rip+0x94a81b]        # 0x141736300 ; literal="repeated"
0x00debae5: call   0x140070b20
0x00debaea: lea    rcx,[rbp-0x70]
0x00debaee: call   0x1400703d0
0x00debaf3: mov    rcx,QWORD PTR [rax]
0x00debaf6: cmp    DWORD PTR [rcx+0x10],0x1
0x00debafa: jne    0x140debb72
0x00debafc: lea    rcx,[rbp-0x70]
0x00debb00: call   0x1400703d0
0x00debb05: mov    rcx,QWORD PTR [rax]
0x00debb08: cmp    DWORD PTR [rcx+0x14],0x3
0x00debb0c: jl     0x140debb72
0x00debb0e: lea    rdx,[rip+0x94a7fb]        # 0x141736310 ; literal=" up to "
0x00debb15: mov    rcx,rdi
0x00debb18: call   0x140070b20
0x00debb1d: lea    rcx,[rbp+0x190]
0x00debb24: call   0x140070c50
0x00debb29: nop
0x00debb2a: lea    rcx,[rbp-0x70]
0x00debb2e: call   0x1400703d0
0x00debb33: mov    rcx,QWORD PTR [rax]
0x00debb36: mov    ecx,DWORD PTR [rcx+0x14]
0x00debb39: dec    ecx
0x00debb3b: lea    rdx,[rbp+0x190]
0x00debb42: call   0x140545040
0x00debb47: lea    rdx,[rbp+0x190]
0x00debb4e: mov    rcx,rdi
0x00debb51: call   0x1400bb2d0
0x00debb56: lea    rdx,[rip+0x94a7bb]        # 0x141736318 ; literal=" times"
0x00debb5d: mov    rcx,rdi
0x00debb60: call   0x140070b20
0x00debb65: nop
0x00debb66: lea    rcx,[rbp+0x190]
0x00debb6d: call   0x1400693f0
0x00debb72: lea    rcx,[rbp-0x70]
0x00debb76: call   0x1400703d0
0x00debb7b: mov    rbx,QWORD PTR [rax]
0x00debb7e: lea    rcx,[rbp-0x70]
0x00debb82: call   0x1400703d0
0x00debb87: mov    rcx,QWORD PTR [rax]
0x00debb8a: mov    eax,DWORD PTR [rbx+0x14]
0x00debb8d: cmp    DWORD PTR [rcx+0x10],eax
0x00debb90: jne    0x140debbfb
0x00debb92: lea    rdx,[rip+0x812dd3]        # 0x1415fe96c ; literal=" "
0x00debb99: mov    rcx,rdi
0x00debb9c: call   0x140070b20
0x00debba1: lea    rcx,[rbp+0x190]
0x00debba8: call   0x140070c50
0x00debbad: nop
0x00debbae: lea    rcx,[rbp-0x70]
0x00debbb2: call   0x1400703d0
0x00debbb7: mov    rcx,QWORD PTR [rax]
0x00debbba: mov    ecx,DWORD PTR [rcx+0x14]
0x00debbbd: dec    ecx
0x00debbbf: lea    rdx,[rbp+0x190]
0x00debbc6: call   0x140545040
0x00debbcb: lea    rdx,[rbp+0x190]
0x00debbd2: mov    rcx,rdi
0x00debbd5: call   0x1400bb2d0
0x00debbda: lea    rdx,[rip+0x94a737]        # 0x141736318 ; literal=" times"
0x00debbe1: mov    rcx,rdi
0x00debbe4: call   0x140070b20
0x00debbe9: nop
0x00debbea: lea    rcx,[rbp+0x190]
0x00debbf1: call   0x1400693f0
0x00debbf6: jmp    0x140debcca
0x00debbfb: lea    rcx,[rbp-0x70]
0x00debbff: call   0x1400703d0
0x00debc04: mov    rcx,QWORD PTR [rax]
0x00debc07: cmp    DWORD PTR [rcx+0x10],0x2
0x00debc0b: jl     0x140debcca
0x00debc11: lea    rdx,[rip+0x812d54]        # 0x1415fe96c ; literal=" "
0x00debc18: mov    rcx,rdi
0x00debc1b: call   0x140070b20
0x00debc20: lea    rcx,[rbp+0x190]
0x00debc27: call   0x140070c50
0x00debc2c: nop
0x00debc2d: lea    rcx,[rbp-0x70]
0x00debc31: call   0x1400703d0
0x00debc36: mov    rcx,QWORD PTR [rax]
0x00debc39: mov    ecx,DWORD PTR [rcx+0x10]
0x00debc3c: dec    ecx
0x00debc3e: lea    rdx,[rbp+0x190]
0x00debc45: call   0x140545040
0x00debc4a: lea    rdx,[rbp+0x190]
0x00debc51: mov    rcx,rdi
0x00debc54: call   0x1400bb2d0
0x00debc59: nop
0x00debc5a: lea    rcx,[rbp+0x190]
0x00debc61: call   0x1400693f0
0x00debc66: lea    rdx,[rip+0x817b27]        # 0x141603794 ; literal=" to "
0x00debc6d: mov    rcx,rdi
0x00debc70: call   0x140070b20
0x00debc75: lea    rcx,[rbp+0x190]
0x00debc7c: call   0x140070c50
0x00debc81: nop
0x00debc82: lea    rcx,[rbp-0x70]
0x00debc86: call   0x1400703d0
0x00debc8b: mov    rcx,QWORD PTR [rax]
0x00debc8e: mov    ecx,DWORD PTR [rcx+0x14]
0x00debc91: dec    ecx
0x00debc93: lea    rdx,[rbp+0x190]
0x00debc9a: call   0x140545040
0x00debc9f: lea    rdx,[rbp+0x190]
0x00debca6: mov    rcx,rdi
0x00debca9: call   0x1400bb2d0
0x00debcae: nop
0x00debcaf: lea    rcx,[rbp+0x190]
0x00debcb6: call   0x1400693f0
0x00debcbb: lea    rdx,[rip+0x94a656]        # 0x141736318 ; literal=" times"
0x00debcc2: mov    rcx,rdi
0x00debcc5: call   0x140070b20
0x00debcca: cmp    esi,0x3
0x00debccd: jl     0x140debcd8
0x00debccf: lea    rdx,[rip+0x813632]        # 0x1415ff308 ; literal=", "
0x00debcd6: jmp    0x140debce4
0x00debcd8: cmp    esi,0x2
0x00debcdb: jne    0x140debcec
0x00debcdd: lea    rdx,[rip+0x81365c]        # 0x1415ff340 ; literal=" and "
0x00debce4: mov    rcx,rdi
0x00debce7: call   0x140070b20
0x00debcec: dec    esi
0x00debcee: mov    QWORD PTR [rsp+0x78],rsi
0x00debcf3: lea    rcx,[rbp-0x70]
0x00debcf7: call   0x1400703c0
0x00debcfc: lea    r8,[rbp+0x50]
0x00debd00: lea    rdx,[rsp+0x35]
0x00debd05: lea    rcx,[rbp-0x70]
0x00debd09: call   0x1400703e0
0x00debd0e: xor    edx,edx
0x00debd10: movzx  ecx,BYTE PTR [rax]
0x00debd13: call   0x140066d70
0x00debd18: test   al,al
0x00debd1a: mov    rbx,QWORD PTR [rbp-0x78]
0x00debd1e: jne    0x140deb590
0x00debd24: mov    r12,QWORD PTR [rbp-0x38]
0x00debd28: lea    rdx,[rip+0x828951]        # 0x141614680 ; literal=".  "
0x00debd2f: mov    rcx,rdi
0x00debd32: call   0x140070b20
0x00debd37: mov    bl,0x1
0x00debd39: mov    BYTE PTR [rsp+0x33],bl
0x00debd3d: movzx  esi,bl
0x00debd40: mov    BYTE PTR [rsp+0x31],bl
0x00debd44: xorps  xmm0,xmm0
0x00debd47: movups XMMWORD PTR [rbp+0x210],xmm0
0x00debd4e: movups XMMWORD PTR [rbp+0x220],xmm0
0x00debd55: movups XMMWORD PTR [rbp+0x230],xmm0
0x00debd5c: xorps  xmm1,xmm1
0x00debd5f: movups XMMWORD PTR [rbp+0x240],xmm1
0x00debd66: movups XMMWORD PTR [rbp+0x250],xmm1
0x00debd6d: movups XMMWORD PTR [rbp+0x260],xmm1
0x00debd74: lea    rcx,[r12+0x88]
0x00debd7c: lea    rdx,[rbp-0x30]
0x00debd80: call   0x140070800
0x00debd85: lea    rcx,[r12+0x88]
0x00debd8d: lea    rdx,[rbp-0x78]
0x00debd91: call   0x1400707f0
0x00debd96: lea    r8,[rbp-0x78]
0x00debd9a: lea    rdx,[rsp+0x35]
0x00debd9f: lea    rcx,[rbp-0x30]
0x00debda3: call   0x1400703e0
0x00debda8: xor    edx,edx
0x00debdaa: movzx  ecx,BYTE PTR [rax]
0x00debdad: call   0x140066d70
0x00debdb2: test   al,al
0x00debdb4: je     0x140debe41
0x00debdba: nop    WORD PTR [rax+rax*1+0x0]
0x00debdc0: lea    rcx,[rbp-0x30]
0x00debdc4: call   0x1400703d0
0x00debdc9: mov    rcx,QWORD PTR [rax]
0x00debdcc: movsxd rax,DWORD PTR [rcx]
0x00debdcf: inc    DWORD PTR [rbp+rax*4+0x210]
0x00debdd6: lea    rcx,[rbp-0x30]
0x00debdda: call   0x1400703d0
0x00debddf: mov    rcx,QWORD PTR [rax]
0x00debde2: mov    edx,r15d
0x00debde5: movzx  eax,bl
0x00debde8: cmp    DWORD PTR [rcx+0x1c],0xffffffff
0x00debdec: cmove  edx,eax
0x00debdef: movzx  ebx,dl
0x00debdf2: lea    rcx,[rbp-0x30]
0x00debdf6: call   0x1400703d0
0x00debdfb: mov    rcx,QWORD PTR [rax]
0x00debdfe: mov    edx,r15d
0x00debe01: movzx  eax,sil
0x00debe05: cmp    DWORD PTR [rcx+0x24],0xffffffff
0x00debe09: cmove  edx,eax
0x00debe0c: movzx  esi,dl
0x00debe0f: lea    rcx,[rbp-0x30]
0x00debe13: call   0x1400703c0
0x00debe18: lea    r8,[rbp-0x78]
0x00debe1c: lea    rdx,[rsp+0x35]
0x00debe21: lea    rcx,[rbp-0x30]
0x00debe25: call   0x1400703e0
0x00debe2a: xor    edx,edx
0x00debe2c: movzx  ecx,BYTE PTR [rax]
0x00debe2f: call   0x140066d70
0x00debe34: test   al,al
0x00debe36: jne    0x140debdc0
0x00debe38: mov    BYTE PTR [rsp+0x33],bl
0x00debe3c: mov    BYTE PTR [rsp+0x31],sil
0x00debe41: lea    rcx,[r12+0x88]
0x00debe49: lea    rdx,[rbp-0x18]
0x00debe4d: call   0x140070800
0x00debe52: mov    rcx,QWORD PTR [rax]
0x00debe55: lea    rax,[r12+0xa0]
0x00debe5d: mov    QWORD PTR [rbp+0x8],rax
0x00debe61: movzx  ebx,BYTE PTR [rsp+0x31]
0x00debe66: mov    r8d,0xff
0x00debe6c: movsxd r13,DWORD PTR [rbp-0x80]
0x00debe70: mov    QWORD PTR [rbp-0x30],rcx
0x00debe74: cmp    rcx,QWORD PTR [rbp-0x78]
0x00debe78: jne    0x140debe7e
0x00debe7a: xor    dl,dl
0x00debe7c: jmp    0x140debe87
0x00debe7e: mov    edx,0x1
0x00debe83: cmovb  edx,r8d
0x00debe87: test   dl,dl
0x00debe89: jns    0x140dee0f4
0x00debe8f: lea    rcx,[rbp-0x30]
0x00debe93: call   0x1400703d0
0x00debe98: mov    r12,QWORD PTR [rax]
0x00debe9b: mov    QWORD PTR [rbp-0x50],r12
0x00debe9f: mov    r14d,0xffffffff
0x00debea5: mov    DWORD PTR [rsp+0x50],r14d
0x00debeaa: mov    r15d,r14d
0x00debead: mov    DWORD PTR [rbp-0x48],r14d
0x00debeb1: lea    rdx,[rbp-0x68]
0x00debeb5: lea    rcx,[r12+0x48]
0x00debeba: call   0x140070800
0x00debebf: lea    rdx,[rbp+0x58]
0x00debec3: lea    rcx,[r12+0x48]
0x00debec8: call   0x1400707f0
0x00debecd: lea    rdx,[rsp+0x78]
0x00debed2: lea    rcx,[r12+0x60]
0x00debed7: call   0x140070800
0x00debedc: lea    rdx,[rbp+0xa0]
0x00debee3: lea    rcx,[r12+0x60]
0x00debee8: call   0x1400707f0
0x00debeed: lea    r8,[rbp+0x58]
0x00debef1: lea    rdx,[rsp+0x35]
0x00debef6: lea    rcx,[rbp-0x68]
0x00debefa: call   0x1400703e0
0x00debeff: xor    edx,edx
0x00debf01: movzx  ecx,BYTE PTR [rax]
0x00debf04: call   0x140066d70
0x00debf09: test   al,al
0x00debf0b: je     0x140debf98
0x00debf11: movsxd rbx,DWORD PTR [rbp+0x28]
0x00debf15: lea    rcx,[rbp-0x68]
0x00debf19: call   0x1400703d0
0x00debf1e: cmp    DWORD PTR [rax],0x0
0x00debf21: jne    0x140debf36
0x00debf23: cmp    r13,0xffffffffffffffff
0x00debf27: jne    0x140debf36
0x00debf29: lea    rcx,[rsp+0x78]
0x00debf2e: call   0x1400703d0
0x00debf33: mov    r14d,DWORD PTR [rax]
0x00debf36: lea    rcx,[rbp-0x68]
0x00debf3a: call   0x1400703d0
0x00debf3f: cmp    DWORD PTR [rax],0x1
0x00debf42: jne    0x140debf57
0x00debf44: cmp    rbx,0xffffffffffffffff
0x00debf48: jne    0x140debf57
0x00debf4a: lea    rcx,[rsp+0x78]
0x00debf4f: call   0x1400703d0
0x00debf54: mov    r15d,DWORD PTR [rax]
0x00debf57: lea    rcx,[rbp-0x68]
0x00debf5b: call   0x140070910
0x00debf60: lea    rcx,[rsp+0x78]
0x00debf65: call   0x140070910
0x00debf6a: lea    r8,[rbp+0x58]
0x00debf6e: lea    rdx,[rsp+0x35]
0x00debf73: lea    rcx,[rbp-0x68]
0x00debf77: call   0x1400703e0
0x00debf7c: xor    edx,edx
0x00debf7e: movzx  ecx,BYTE PTR [rax]
0x00debf81: call   0x140066d70
0x00debf86: test   al,al
0x00debf88: jne    0x140debf15
0x00debf8a: mov    DWORD PTR [rbp-0x48],r15d
0x00debf8e: mov    DWORD PTR [rsp+0x50],r14d
0x00debf93: movzx  ebx,BYTE PTR [rsp+0x31]
0x00debf98: lea    rcx,[r12+0x30]
0x00debf9d: call   0x140070930
0x00debfa2: mov    r13,rax
0x00debfa5: mov    QWORD PTR [rbp-0x40],rax
0x00debfa9: lea    rdx,[rsp+0x68]
0x00debfae: lea    rcx,[r12+0x78]
0x00debfb3: call   0x140070800
0x00debfb8: lea    rdx,[rbp+0x38]
0x00debfbc: lea    rcx,[r12+0x78]
0x00debfc1: call   0x1400707f0
0x00debfc6: lea    rdx,[rbp-0x8]
0x00debfca: lea    rcx,[r12+0x90]
0x00debfd2: call   0x140070800
0x00debfd7: lea    rdx,[rbp+0xa8]
0x00debfde: lea    rcx,[r12+0x90]
0x00debfe6: call   0x1400707f0
0x00debfeb: lea    r8,[rbp+0x38]
0x00debfef: lea    rdx,[rsp+0x49]
0x00debff4: lea    rcx,[rsp+0x68]
0x00debff9: call   0x1400703e0
0x00debffe: xor    edx,edx
0x00dec000: movzx  ecx,BYTE PTR [rax]
0x00dec003: call   0x140066d70
0x00dec008: test   al,al
0x00dec00a: je     0x140dec060
0x00dec00c: nop    DWORD PTR [rax+0x0]
0x00dec010: lea    rcx,[rsp+0x68]
0x00dec015: call   0x1400703d0
0x00dec01a: lea    esi,[r13-0x1]
0x00dec01e: cmp    DWORD PTR [rax],0xffffffff
0x00dec021: cmovne esi,r13d
0x00dec025: lea    rcx,[rsp+0x68]
0x00dec02a: call   0x140070910
0x00dec02f: lea    rcx,[rbp-0x8]
0x00dec033: call   0x140070910
0x00dec038: lea    r8,[rbp+0x38]
0x00dec03c: lea    rdx,[rsp+0x49]
0x00dec041: lea    rcx,[rsp+0x68]
0x00dec046: call   0x1400703e0
0x00dec04b: mov    r13d,esi
0x00dec04e: xor    edx,edx
0x00dec050: movzx  ecx,BYTE PTR [rax]
0x00dec053: call   0x140066d70
0x00dec058: test   al,al
0x00dec05a: jne    0x140dec010
0x00dec05c: mov    QWORD PTR [rbp-0x40],r13
0x00dec060: movzx  esi,BYTE PTR [rsp+0x34]
0x00dec065: test   sil,sil
0x00dec068: je     0x140dec0f7
0x00dec06e: cmp    BYTE PTR [rbp-0x60],0x0
0x00dec072: jne    0x140dec079
0x00dec074: test   r13d,r13d
0x00dec077: jg     0x140dec0f7
0x00dec079: cmp    r14d,0xffffffff
0x00dec07d: jne    0x140dec0f7
0x00dec07f: cmp    r15d,r14d
0x00dec082: jne    0x140dec0f7
0x00dec084: cmp    DWORD PTR [r12+0x18],r14d
0x00dec089: jne    0x140dec0f7
0x00dec08b: cmp    DWORD PTR [r12+0x14],r14d
0x00dec090: jne    0x140dec0f7
0x00dec092: cmp    DWORD PTR [r12+0xa8],r14d
0x00dec09a: jne    0x140dec0f7
0x00dec09c: cmp    DWORD PTR [r12+0xac],r14d
0x00dec0a4: jne    0x140dec0f7
0x00dec0a6: cmp    DWORD PTR [r12+0xb0],r14d
0x00dec0ae: jne    0x140dec0f7
0x00dec0b0: cmp    DWORD PTR [r12+0x1c],r14d
0x00dec0b5: jne    0x140dec0f7
0x00dec0b7: cmp    BYTE PTR [rsp+0x33],0x0
0x00dec0bc: je     0x140dec0f7
0x00dec0be: cmp    DWORD PTR [r12+0x24],r14d
0x00dec0c3: jne    0x140dec0f7
0x00dec0c5: cmp    BYTE PTR [rsp+0x31],0x0
0x00dec0ca: je     0x140dec0f7
0x00dec0cc: cmp    DWORD PTR [r12+0xb8],r14d
0x00dec0d4: jne    0x140dec0f7
0x00dec0d6: cmp    DWORD PTR [r12+0xb4],0x0
0x00dec0df: jne    0x140dec0f7
0x00dec0e1: lea    rcx,[r12+0xc0]
0x00dec0e9: call   0x140070410
0x00dec0ee: test   rax,rax
0x00dec0f1: je     0x140dee0e7
0x00dec0f7: lea    rdx,[rip+0x827fae]        # 0x1416140ac ; literal="[B]"
0x00dec0fe: mov    rcx,rdi
0x00dec101: call   0x140070b20
0x00dec106: lea    rcx,[rbp+0x1b0]
0x00dec10d: call   0x140070c50
0x00dec112: nop
0x00dec113: lea    rcx,[rbp+0x1b0]
0x00dec11a: cmp    DWORD PTR [r12+0x10],0x2
0x00dec120: lea    rdx,[rip+0x94a181]        # 0x1417362a8 ; literal="Each of the "
0x00dec127: jge    0x140dec130
0x00dec129: lea    rdx,[rip+0x817b04]        # 0x141603c34 ; literal="The "
0x00dec130: call   0x140070b20
0x00dec135: movsxd rax,DWORD PTR [r12]
0x00dec139: cmp    DWORD PTR [rbp+rax*4+0x210],0x2
0x00dec141: jl     0x140dec1ab
0x00dec143: lea    rcx,[rbp+0x1d0]
0x00dec14a: call   0x140070c50
0x00dec14f: nop
0x00dec150: movsxd rax,DWORD PTR [r12]
0x00dec154: mov    ecx,DWORD PTR [rbp+rax*4+0x240]
0x00dec15b: inc    ecx
0x00dec15d: xor    r8d,r8d
0x00dec160: lea    rdx,[rbp+0x1d0]
0x00dec167: call   0x140545850
0x00dec16c: lea    rcx,[rbp+0x1d0]
0x00dec173: call   0x140543d60
0x00dec178: lea    rdx,[rbp+0x1d0]
0x00dec17f: lea    rcx,[rbp+0x1b0]
0x00dec186: call   0x1400bb2d0
0x00dec18b: lea    rdx,[rip+0x8127da]        # 0x1415fe96c ; literal=" "
0x00dec192: lea    rcx,[rbp+0x1b0]
0x00dec199: call   0x140070b20
0x00dec19e: nop
0x00dec19f: lea    rcx,[rbp+0x1d0]
0x00dec1a6: call   0x1400693f0
0x00dec1ab: movsxd rax,DWORD PTR [r12]
0x00dec1af: cmp    eax,0xb
0x00dec1b2: ja     0x140dec25c
0x00dec1b8: lea    rdx,[rip+0xffffffffff213e41]        # 0x140000000
0x00dec1bf: mov    ecx,DWORD PTR [rdx+rax*4+0xdefbc0]
0x00dec1c6: add    rcx,rdx
0x00dec1c9: jmp    rcx
0x00dec1cb: lea    rdx,[rip+0x94a0e6]        # 0x1417362b8 ; literal="simple passage"
0x00dec1d2: lea    rcx,[rbp+0x1b0]
0x00dec1d9: call   0x140070b20
0x00dec1de: cmp    DWORD PTR [r12+0x10],0x2
0x00dec1e4: jl     0x140dec25c
0x00dec1e6: lea    rdx,[rip+0x8132db]        # 0x1415ff4c8 ; literal="s"
0x00dec1ed: jmp    0x140dec250
0x00dec1ef: lea    rdx,[rip+0x8750ea]        # 0x1416612e0 ; literal="introduction"
0x00dec1f6: jmp    0x140dec1d2
0x00dec1f8: lea    rdx,[rip+0x8750f1]        # 0x1416612f0 ; literal="exposition"
0x00dec1ff: jmp    0x140dec1d2
0x00dec201: lea    rdx,[rip+0x8750f8]        # 0x141661300 ; literal="recapitulation"
0x00dec208: jmp    0x140dec1d2
0x00dec20a: lea    rdx,[rip+0x8750ff]        # 0x141661310 ; literal="synthesis"
0x00dec211: jmp    0x140dec250
0x00dec213: lea    rdx,[rip+0x875102]        # 0x14166131c ; literal="verse"
0x00dec21a: jmp    0x140dec1d2
0x00dec21c: lea    rdx,[rip+0x875101]        # 0x141661324 ; literal="chorus"
0x00dec223: jmp    0x140dec250
0x00dec225: lea    rdx,[rip+0x875100]        # 0x14166132c ; literal="finale"
0x00dec22c: jmp    0x140dec250
0x00dec22e: lea    rdx,[rip+0x8750ff]        # 0x141661334 ; literal="coda"
0x00dec235: jmp    0x140dec250
0x00dec237: lea    rdx,[rip+0x875102]        # 0x141661340 ; literal="bridge-passage"
0x00dec23e: jmp    0x140dec1d2
0x00dec240: lea    rdx,[rip+0x813091]        # 0x1415ff2d8 ; literal="theme"
0x00dec247: jmp    0x140dec1d2
0x00dec249: lea    rdx,[rip+0x94a078]        # 0x1417362c8 ; literal="series of variations"
0x00dec250: lea    rcx,[rbp+0x1b0]
0x00dec257: call   0x140070b20
0x00dec25c: movsxd rax,DWORD PTR [r12]
0x00dec260: inc    DWORD PTR [rbp+rax*4+0x240]
0x00dec267: xor    r14b,r14b
0x00dec26a: mov    BYTE PTR [rsp+0x32],r14b
0x00dec26f: test   sil,sil
0x00dec272: jne    0x140dec5e6
0x00dec278: lea    rdx,[rbp+0x1b0]
0x00dec27f: mov    rcx,rdi
0x00dec282: call   0x1400bb2d0
0x00dec287: mov    r14b,0x1
0x00dec28a: mov    BYTE PTR [rsp+0x32],r14b
0x00dec28f: lea    rdx,[rip+0x94a0f2]        # 0x141736388 ; literal=" is voiced by "
0x00dec296: mov    rcx,rdi
0x00dec299: call   0x140070b20
0x00dec29e: lea    rcx,[r12+0x30]
0x00dec2a3: call   0x140070930
0x00dec2a8: mov    r12,rax
0x00dec2ab: mov    rsi,QWORD PTR [rbp-0x50]
0x00dec2af: lea    rcx,[rsi+0x30]
0x00dec2b3: lea    rdx,[rbp-0x10]
0x00dec2b7: call   0x140070800
0x00dec2bc: lea    rcx,[rsi+0x30]
0x00dec2c0: lea    rdx,[rbp+0x18]
0x00dec2c4: call   0x1400707f0
0x00dec2c9: lea    rcx,[rsi+0x48]
0x00dec2cd: lea    rdx,[rbp+0x10]
0x00dec2d1: call   0x140070800
0x00dec2d6: lea    rcx,[rsi+0x48]
0x00dec2da: lea    rdx,[rbp+0xb0]
0x00dec2e1: call   0x1400707f0
0x00dec2e6: lea    r8,[rbp+0x18]
0x00dec2ea: lea    rdx,[rsp+0x48]
0x00dec2ef: lea    rcx,[rbp-0x10]
0x00dec2f3: call   0x1400703e0
0x00dec2f8: xor    edx,edx
0x00dec2fa: movzx  ecx,BYTE PTR [rax]
0x00dec2fd: call   0x140066d70
0x00dec302: test   al,al
0x00dec304: je     0x140dec5d3
0x00dec30a: mov    rbx,QWORD PTR [rbp+0x8]
0x00dec30e: mov    r13,QWORD PTR [rbp-0x38]
0x00dec312: lea    rcx,[rbp+0x10]
0x00dec316: call   0x1400703d0
0x00dec31b: mov    edx,DWORD PTR [rax]
0x00dec31d: test   edx,edx
0x00dec31f: je     0x140dec359
0x00dec321: sub    edx,0x1
0x00dec324: je     0x140dec350
0x00dec326: sub    edx,0x1
0x00dec329: je     0x140dec347
0x00dec32b: sub    edx,0x1
0x00dec32e: je     0x140dec33e
0x00dec330: cmp    edx,0x1
0x00dec333: jne    0x140dec368
0x00dec335: lea    rdx,[rip+0x893208]        # 0x14167f544 ; literal="the"
0x00dec33c: jmp    0x140dec360
0x00dec33e: lea    rdx,[rip+0x949ff3]        # 0x141736338 ; literal="the rhythm of the"
0x00dec345: jmp    0x140dec360
0x00dec347: lea    rdx,[rip+0x949fd2]        # 0x141736320 ; literal="the harmony of the"
0x00dec34e: jmp    0x140dec360
0x00dec350: lea    rdx,[rip+0x94a059]        # 0x1417363b0 ; literal="the counterpoint of the"
0x00dec357: jmp    0x140dec360
0x00dec359: lea    rdx,[rip+0x94a038]        # 0x141736398 ; literal="the melody of the"
0x00dec360: mov    rcx,rdi
0x00dec363: call   0x140070b20
0x00dec368: lea    rdx,[rip+0x8125fd]        # 0x1415fe96c ; literal=" "
0x00dec36f: mov    rcx,rdi
0x00dec372: call   0x140070b20
0x00dec377: xor    r14b,r14b
0x00dec37a: lea    rcx,[rbp-0x10]
0x00dec37e: call   0x1400703d0
0x00dec383: movsxd rdx,DWORD PTR [rax]
0x00dec386: mov    rcx,rbx
0x00dec389: call   0x1400707e0
0x00dec38e: mov    r15,QWORD PTR [rax]
0x00dec391: test   BYTE PTR [r15+0x4],0x1
0x00dec396: je     0x140dec3c0
0x00dec398: lea    rdx,[rip+0x9491bd]        # 0x14173555c ; literal="singer"
0x00dec39f: mov    rcx,rdi
0x00dec3a2: call   0x140070b20
0x00dec3a7: cmp    DWORD PTR [r15+0x10],0x2
0x00dec3ac: jl     0x140dec3bd
0x00dec3ae: lea    rdx,[rip+0x813113]        # 0x1415ff4c8 ; literal="s"
0x00dec3b5: mov    rcx,rdi
0x00dec3b8: call   0x140070b20
0x00dec3bd: mov    r14b,0x1
0x00dec3c0: test   BYTE PTR [r15+0x4],0x2
0x00dec3c5: je     0x140dec3ef
0x00dec3c7: lea    rdx,[rip+0x94919a]        # 0x141735568 ; literal="speaker"
0x00dec3ce: mov    rcx,rdi
0x00dec3d1: call   0x140070b20
0x00dec3d6: cmp    DWORD PTR [r15+0x10],0x2
0x00dec3db: jl     0x140dec3ec
0x00dec3dd: lea    rdx,[rip+0x8130e4]        # 0x1415ff4c8 ; literal="s"
0x00dec3e4: mov    rcx,rdi
0x00dec3e7: call   0x140070b20
0x00dec3ec: mov    r14b,0x1
0x00dec3ef: test   BYTE PTR [r15+0x4],0x4
0x00dec3f4: je     0x140dec41e
0x00dec3f6: lea    rdx,[rip+0x949173]        # 0x141735570 ; literal="chanter"
0x00dec3fd: mov    rcx,rdi
0x00dec400: call   0x140070b20
0x00dec405: cmp    DWORD PTR [r15+0x10],0x2
0x00dec40a: jl     0x140dec41b
0x00dec40c: lea    rdx,[rip+0x8130b5]        # 0x1415ff4c8 ; literal="s"
0x00dec413: mov    rcx,rdi
0x00dec416: call   0x140070b20
0x00dec41b: mov    r14b,0x1
0x00dec41e: movsxd rax,DWORD PTR [r15]
0x00dec421: cmp    eax,0xffffffff
0x00dec424: je     0x140dec45c
0x00dec426: mov    rdx,rax
0x00dec429: lea    rcx,[rip+0x171cd48]        # 0x142509178
0x00dec430: cmp    DWORD PTR [r15+0x10],0x2
0x00dec435: jl     0x140dec448
0x00dec437: call   0x1400707e0
0x00dec43c: mov    rdx,QWORD PTR [rax]
0x00dec43f: add    rdx,0x88
0x00dec446: jmp    0x140dec454
0x00dec448: call   0x1400707e0
0x00dec44d: mov    rdx,QWORD PTR [rax]
0x00dec450: add    rdx,0x68
0x00dec454: mov    rcx,rdi
0x00dec457: call   0x1400bb2d0
0x00dec45c: test   r14b,r14b
0x00dec45f: je     0x140dec567
0x00dec465: mov    rsi,QWORD PTR [rbp-0x50]
0x00dec469: mov    edx,DWORD PTR [rsi+0x18]
0x00dec46c: cmp    edx,0xffffffff
0x00dec46f: je     0x140dec4a9
0x00dec471: lea    rcx,[rip+0x1717bc0]        # 0x142504038
0x00dec478: call   0x140073b30
0x00dec47d: mov    rsi,rax
0x00dec480: test   rax,rax
0x00dec483: je     0x140dec567
0x00dec489: lea    rdx,[rip+0x949ec0]        # 0x141736350 ; literal=" reciting the words of "
0x00dec490: mov    rcx,rdi
0x00dec493: call   0x140070b20
0x00dec498: lea    rdx,[rsi+0x8]
0x00dec49c: mov    rcx,rdi
0x00dec49f: call   0x1400bb2d0
0x00dec4a4: jmp    0x140dec567
0x00dec4a9: mov    edx,DWORD PTR [rsi+0x14]
0x00dec4ac: cmp    edx,0xffffffff
0x00dec4af: je     0x140dec544
0x00dec4b5: lea    rcx,[rip+0x1717d8c]        # 0x142504248
0x00dec4bc: call   0x140073b30
0x00dec4c1: mov    rsi,rax
0x00dec4c4: test   rax,rax
0x00dec4c7: je     0x140dec567
0x00dec4cd: lea    rdx,[rip+0x949e94]        # 0x141736368 ; literal=" reciting"
0x00dec4d4: mov    rcx,rdi
0x00dec4d7: call   0x140070b20
0x00dec4dc: test   BYTE PTR [rsi+0x8c],0x2
0x00dec4e3: je     0x140dec4f4
0x00dec4e5: lea    rdx,[rip+0x94901c]        # 0x141735508 ; literal=" a composition of"
0x00dec4ec: mov    rcx,rdi
0x00dec4ef: call   0x140070b20
0x00dec4f4: lea    rdx,[rip+0x812471]        # 0x1415fe96c ; literal=" "
0x00dec4fb: mov    rcx,rdi
0x00dec4fe: call   0x140070b20
0x00dec503: lea    rcx,[rbp+0x190]
0x00dec50a: call   0x140070c50
0x00dec50f: nop
0x00dec510: lea    rcx,[rsi+0x8]
0x00dec514: xor    r9d,r9d
0x00dec517: mov    r8b,0x1
0x00dec51a: lea    rdx,[rbp+0x190]
0x00dec521: call   0x140aaafe0
0x00dec526: lea    rdx,[rbp+0x190]
0x00dec52d: mov    rcx,rdi
0x00dec530: call   0x1400bb2d0
0x00dec535: nop
0x00dec536: lea    rcx,[rbp+0x190]
0x00dec53d: call   0x1400693f0
0x00dec542: jmp    0x140dec567
0x00dec544: cmp    DWORD PTR [r13+0xf4],0xffffffff
0x00dec54c: jne    0x140dec567
0x00dec54e: cmp    DWORD PTR [r13+0xf8],0xffffffff
0x00dec556: jne    0x140dec567
0x00dec558: lea    rdx,[rip+0x949ed9]        # 0x141736438 ; literal=" reciting nonsensical words and sounds"
0x00dec55f: mov    rcx,rdi
0x00dec562: call   0x140070b20
0x00dec567: cmp    r12d,0x3
0x00dec56b: jl     0x140dec576
0x00dec56d: lea    rdx,[rip+0x812d94]        # 0x1415ff308 ; literal=", "
0x00dec574: jmp    0x140dec583
0x00dec576: cmp    r12d,0x2
0x00dec57a: jne    0x140dec58b
0x00dec57c: lea    rdx,[rip+0x812dbd]        # 0x1415ff340 ; literal=" and "
0x00dec583: mov    rcx,rdi
0x00dec586: call   0x140070b20
0x00dec58b: lea    rcx,[rbp-0x10]
0x00dec58f: call   0x140070910
0x00dec594: lea    rcx,[rbp+0x10]
0x00dec598: call   0x140070910
0x00dec59d: dec    r12d
0x00dec5a0: lea    r8,[rbp+0x18]
0x00dec5a4: lea    rdx,[rsp+0x48]
0x00dec5a9: lea    rcx,[rbp-0x10]
0x00dec5ad: call   0x1400703e0
0x00dec5b2: xor    edx,edx
0x00dec5b4: movzx  ecx,BYTE PTR [rax]
0x00dec5b7: call   0x140066d70
0x00dec5bc: test   al,al
0x00dec5be: jne    0x140dec312
0x00dec5c4: movzx  ebx,BYTE PTR [rsp+0x31]
0x00dec5c9: mov    r13,QWORD PTR [rbp-0x40]
0x00dec5cd: movzx  r14d,BYTE PTR [rsp+0x32]
0x00dec5d3: lea    rdx,[rip+0x8280a6]        # 0x141614680 ; literal=".  "
0x00dec5da: mov    rcx,rdi
0x00dec5dd: call   0x140070b20
0x00dec5e2: mov    r12,QWORD PTR [rbp-0x50]
0x00dec5e6: cmp    DWORD PTR [r12+0xa8],0xffffffff
0x00dec5ef: jne    0x140dec60b
0x00dec5f1: cmp    DWORD PTR [r12+0xac],0xffffffff
0x00dec5fa: jne    0x140dec60b
0x00dec5fc: cmp    DWORD PTR [r12+0xb0],0xffffffff
0x00dec605: je     0x140decb9e
0x00dec60b: mov    rcx,rdi
0x00dec60e: test   r14b,r14b
0x00dec611: je     0x140dec637
0x00dec613: cmp    DWORD PTR [r12+0x10],0x2
0x00dec619: jl     0x140dec629
0x00dec61b: lea    rdx,[rip+0x949cbe]        # 0x1417362e0 ; literal="Each passage"
0x00dec622: call   0x140070b20
0x00dec627: jmp    0x140dec64b
0x00dec629: lea    rdx,[rip+0x949d48]        # 0x141736378 ; literal="The passage"
0x00dec630: call   0x140070b20
0x00dec635: jmp    0x140dec64b
0x00dec637: lea    rdx,[rbp+0x1b0]
0x00dec63e: call   0x1400bb2d0
0x00dec643: mov    r14b,0x1
0x00dec646: mov    BYTE PTR [rsp+0x32],r14b
0x00dec64b: lea    rdx,[rip+0x81231a]        # 0x1415fe96c ; literal=" "
0x00dec652: mov    rcx,rdi
0x00dec655: call   0x140070b20
0x00dec65a: cmp    DWORD PTR [r12+0xb0],0xffffffff
0x00dec663: je     0x140dec984
0x00dec669: lea    rdx,[rip+0x949778]        # 0x141735de8 ; literal="should "
0x00dec670: mov    rcx,rdi
0x00dec673: call   0x140070b20
0x00dec678: mov    eax,DWORD PTR [r12+0xb0]
0x00dec680: add    eax,0xffffffde
0x00dec683: lea    rsi,[rip+0xffffffffff213976]        # 0x140000000
0x00dec68a: cmp    eax,0x26
0x00dec68d: ja     0x140dec98b
0x00dec693: cdqe
0x00dec695: mov    ecx,DWORD PTR [rsi+rax*4+0xdefbf0]
0x00dec69c: add    rcx,rsi
0x00dec69f: jmp    rcx
0x00dec6a1: lea    rdx,[rip+0x949818]        # 0x141735ec0 ; literal="stress the rhythm"
0x00dec6a8: mov    rcx,rdi
0x00dec6ab: call   0x140070b20
0x00dec6b0: jmp    0x140dec98b
0x00dec6b5: lea    rdx,[rip+0x94981c]        # 0x141735ed8 ; literal="be stately"
0x00dec6bc: mov    rcx,rdi
0x00dec6bf: call   0x140070b20
0x00dec6c4: jmp    0x140dec98b
0x00dec6c9: lea    rdx,[rip+0x949818]        # 0x141735ee8 ; literal="be bright"
0x00dec6d0: mov    rcx,rdi
0x00dec6d3: call   0x140070b20
0x00dec6d8: jmp    0x140dec98b
0x00dec6dd: lea    rdx,[rip+0x949814]        # 0x141735ef8 ; literal="be lively"
0x00dec6e4: mov    rcx,rdi
0x00dec6e7: call   0x140070b20
0x00dec6ec: jmp    0x140dec98b
0x00dec6f1: lea    rdx,[rip+0x949780]        # 0x141735e78 ; literal="be made with skill"
0x00dec6f8: mov    rcx,rdi
0x00dec6fb: call   0x140070b20
0x00dec700: jmp    0x140dec98b
0x00dec705: lea    rdx,[rip+0x949784]        # 0x141735e90 ; literal="be vigorous"
0x00dec70c: mov    rcx,rdi
0x00dec70f: call   0x140070b20
0x00dec714: jmp    0x140dec98b
0x00dec719: lea    rdx,[rip+0x949780]        # 0x141735ea0 ; literal="be spirited"
0x00dec720: mov    rcx,rdi
0x00dec723: call   0x140070b20
0x00dec728: jmp    0x140dec98b
0x00dec72d: lea    rdx,[rip+0x94977c]        # 0x141735eb0 ; literal="be delicate"
0x00dec734: mov    rcx,rdi
0x00dec737: call   0x140070b20
0x00dec73c: jmp    0x140dec98b
0x00dec741: lea    rdx,[rip+0x949808]        # 0x141735f50 ; literal="bring a sense of motion"
0x00dec748: mov    rcx,rdi
0x00dec74b: call   0x140070b20
0x00dec750: jmp    0x140dec98b
0x00dec755: lea    rdx,[rip+0x9497e4]        # 0x141735f40 ; literal="be fiery"
0x00dec75c: mov    rcx,rdi
0x00dec75f: call   0x140070b20
0x00dec764: jmp    0x140dec98b
0x00dec769: lea    rdx,[rip+0x9497f8]        # 0x141735f68 ; literal="be made with feeling"
0x00dec770: mov    rcx,rdi
0x00dec773: call   0x140070b20
0x00dec778: jmp    0x140dec98b
0x00dec77d: lea    rdx,[rip+0x9497fc]        # 0x141735f80 ; literal="feel agitated"
0x00dec784: mov    rcx,rdi
0x00dec787: call   0x140070b20
0x00dec78c: jmp    0x140dec98b
0x00dec791: lea    rdx,[rip+0x949770]        # 0x141735f08 ; literal="be passionate"
0x00dec798: mov    rcx,rdi
0x00dec79b: call   0x140070b20
0x00dec7a0: jmp    0x140dec98b
0x00dec7a5: lea    rdx,[rip+0x94976c]        # 0x141735f18 ; literal="sparkle"
0x00dec7ac: mov    rcx,rdi
0x00dec7af: call   0x140070b20
0x00dec7b4: jmp    0x140dec98b
0x00dec7b9: lea    rdx,[rip+0x949760]        # 0x141735f20 ; literal="be broad"
0x00dec7c0: mov    rcx,rdi
0x00dec7c3: call   0x140070b20
0x00dec7c8: jmp    0x140dec98b
0x00dec7cd: lea    rdx,[rip+0x94975c]        # 0x141735f30 ; literal="be made sweetly"
0x00dec7d4: mov    rcx,rdi
0x00dec7d7: call   0x140070b20
0x00dec7dc: jmp    0x140dec98b
0x00dec7e1: lea    rdx,[rip+0x9497f0]        # 0x141735fd8 ; literal="be strong"
0x00dec7e8: mov    rcx,rdi
0x00dec7eb: call   0x140070b20
0x00dec7f0: jmp    0x140dec98b
0x00dec7f5: lea    rdx,[rip+0x9497ec]        # 0x141735fe8 ; literal="be energetic"
0x00dec7fc: mov    rcx,rdi
0x00dec7ff: call   0x140070b20
0x00dec804: jmp    0x140dec98b
0x00dec809: lea    rdx,[rip+0x9497e8]        # 0x141735ff8 ; literal="be forceful"
0x00dec810: mov    rcx,rdi
0x00dec813: call   0x140070b20
0x00dec818: jmp    0x140dec98b
0x00dec81d: lea    rdx,[rip+0x9497e4]        # 0x141736008 ; literal="feel heroic"
0x00dec824: mov    rcx,rdi
0x00dec827: call   0x140070b20
0x00dec82c: jmp    0x140dec98b
0x00dec831: lea    rdx,[rip+0x949758]        # 0x141735f90 ; literal="be made expressively"
0x00dec838: mov    rcx,rdi
0x00dec83b: call   0x140070b20
0x00dec840: jmp    0x140dec98b
0x00dec845: lea    rdx,[rip+0x94975c]        # 0x141735fa8 ; literal="feel furious"
0x00dec84c: mov    rcx,rdi
0x00dec84f: call   0x140070b20
0x00dec854: jmp    0x140dec98b
0x00dec859: lea    rdx,[rip+0x949758]        # 0x141735fb8 ; literal="be joyful"
0x00dec860: mov    rcx,rdi
0x00dec863: call   0x140070b20
0x00dec868: jmp    0x140dec98b
0x00dec86d: lea    rdx,[rip+0x949754]        # 0x141735fc8 ; literal="be grand"
0x00dec874: mov    rcx,rdi
0x00dec877: call   0x140070b20
0x00dec87c: jmp    0x140dec98b
0x00dec881: lea    rdx,[rip+0x9497e0]        # 0x141736068 ; literal="be merry"
0x00dec888: mov    rcx,rdi
0x00dec88b: call   0x140070b20
0x00dec890: jmp    0x140dec98b
0x00dec895: lea    rdx,[rip+0x9497dc]        # 0x141736078 ; literal="be graceful"
0x00dec89c: mov    rcx,rdi
0x00dec89f: call   0x140070b20
0x00dec8a4: jmp    0x140dec98b
0x00dec8a9: lea    rdx,[rip+0x9497d8]        # 0x141736088 ; literal="build as it proceeds"
0x00dec8b0: mov    rcx,rdi
0x00dec8b3: call   0x140070b20
0x00dec8b8: jmp    0x140dec98b
0x00dec8bd: lea    rdx,[rip+0x9497dc]        # 0x1417360a0 ; literal="evoke tears"
0x00dec8c4: mov    rcx,rdi
0x00dec8c7: call   0x140070b20
0x00dec8cc: jmp    0x140dec98b
0x00dec8d1: lea    rdx,[rip+0x949740]        # 0x141736018 ; literal="be melancholic"
0x00dec8d8: mov    rcx,rdi
0x00dec8db: call   0x140070b20
0x00dec8e0: jmp    0x140dec98b
0x00dec8e5: lea    rdx,[rip+0x94973c]        # 0x141736028 ; literal="feel mournful"
0x00dec8ec: mov    rcx,rdi
0x00dec8ef: call   0x140070b20
0x00dec8f4: jmp    0x140dec98b
0x00dec8f9: lea    rdx,[rip+0x949738]        # 0x141736038 ; literal="be made with a light touch"
0x00dec900: mov    rcx,rdi
0x00dec903: call   0x140070b20
0x00dec908: jmp    0x140dec98b
0x00dec90d: lea    rdx,[rip+0x949744]        # 0x141736058 ; literal="feel heavy"
0x00dec914: mov    rcx,rdi
0x00dec917: call   0x140070b20
0x00dec91c: jmp    0x140dec98b
0x00dec91e: lea    rdx,[rip+0x9497d3]        # 0x1417360f8 ; literal="feel mysterious"
0x00dec925: mov    rcx,rdi
0x00dec928: call   0x140070b20
0x00dec92d: jmp    0x140dec98b
0x00dec92f: lea    rdx,[rip+0x9497d2]        # 0x141736108 ; literal="be jumpy"
0x00dec936: mov    rcx,rdi
0x00dec939: call   0x140070b20
0x00dec93e: jmp    0x140dec98b
0x00dec940: lea    rdx,[rip+0x9497d1]        # 0x141736118 ; literal="feel playful"
0x00dec947: mov    rcx,rdi
0x00dec94a: call   0x140070b20
0x00dec94f: jmp    0x140dec98b
0x00dec951: lea    rdx,[rip+0x9497d0]        # 0x141736128 ; literal="feel tender"
0x00dec958: mov    rcx,rdi
0x00dec95b: call   0x140070b20
0x00dec960: jmp    0x140dec98b
0x00dec962: lea    rdx,[rip+0x949747]        # 0x1417360b0 ; literal="feel calm"
0x00dec969: mov    rcx,rdi
0x00dec96c: call   0x140070b20
0x00dec971: jmp    0x140dec98b
0x00dec973: lea    rdx,[rip+0x949746]        # 0x1417360c0 ; literal="be triumphant"
0x00dec97a: mov    rcx,rdi
0x00dec97d: call   0x140070b20
0x00dec982: jmp    0x140dec98b
0x00dec984: lea    rsi,[rip+0xffffffffff213675]        # 0x140000000
0x00dec98b: cmp    DWORD PTR [r12+0xa8],0xffffffff
0x00dec994: je     0x140decabe
0x00dec99a: cmp    DWORD PTR [r12+0xb0],0xffffffff
0x00dec9a3: je     0x140dec9b4
0x00dec9a5: lea    rdx,[rip+0x812994]        # 0x1415ff340 ; literal=" and "
0x00dec9ac: mov    rcx,rdi
0x00dec9af: call   0x140070b20
0x00dec9b4: movsxd rax,DWORD PTR [r12+0xa8]
0x00dec9bc: cmp    eax,0x21
0x00dec9bf: ja     0x140decabe
0x00dec9c5: mov    ecx,DWORD PTR [rsi+rax*4+0xdefc8c]
0x00dec9cc: add    rcx,rsi
0x00dec9cf: jmp    rcx
0x00dec9d1: lea    rdx,[rip+0x949a88]        # 0x141736460 ; literal="is twice the tempo of the last passage"
0x00dec9d8: jmp    0x140decab6
0x00dec9dd: lea    rdx,[rip+0x949aa4]        # 0x141736488 ; literal="is half the tempo of the last passage"
0x00dec9e4: jmp    0x140decab6
0x00dec9e9: lea    rdx,[rip+0x949ac0]        # 0x1417364b0 ; literal="moves more quickly than the last passage"
0x00dec9f0: jmp    0x140decab6
0x00dec9f5: lea    rdx,[rip+0x9499cc]        # 0x1417363c8 ; literal="is slower than the last passage"
0x00dec9fc: jmp    0x140decab6
0x00deca01: lea    rdx,[rip+0x9499e0]        # 0x1417363e8 ; literal="resumes the previous tempo"
0x00deca08: jmp    0x140decab6
0x00deca0d: lea    rdx,[rip+0x9499f4]        # 0x141736408 ; literal="resumes the original tempo"
0x00deca14: jmp    0x140decab6
0x00deca19: lea    rdx,[rip+0x9496b0]        # 0x1417360d0 ; literal="is at a free tempo"
0x00deca20: jmp    0x140decab6
0x00deca25: lea    rdx,[rip+0x9496bc]        # 0x1417360e8 ; literal="is very slow"
0x00deca2c: jmp    0x140decab6
0x00deca31: lea    rdx,[rip+0x949750]        # 0x141736188 ; literal="is slow"
0x00deca38: jmp    0x140decab6
0x00deca3a: lea    rdx,[rip+0x94974f]        # 0x141736190 ; literal="is at a walking pace"
0x00deca41: jmp    0x140decab6
0x00deca43: lea    rdx,[rip+0x94975e]        # 0x1417361a8 ; literal="is moderately paced"
0x00deca4a: jmp    0x140decab6
0x00deca4c: lea    rdx,[rip+0x94976d]        # 0x1417361c0 ; literal="is moderately fast"
0x00deca53: jmp    0x140decab6
0x00deca55: lea    rdx,[rip+0x9496dc]        # 0x141736138 ; literal="is fast"
0x00deca5c: jmp    0x140decab6
0x00deca5e: lea    rdx,[rip+0x9496db]        # 0x141736140 ; literal="is very fast"
0x00deca65: jmp    0x140decab6
0x00deca67: lea    rdx,[rip+0x9496e2]        # 0x141736150 ; literal="is extremely fast"
0x00deca6e: jmp    0x140decab6
0x00deca70: lea    rdx,[rip+0x9496f1]        # 0x141736168 ; literal="accelerates as it proceeds"
0x00deca77: jmp    0x140decab6
0x00deca79: lea    rdx,[rip+0x948b78]        # 0x1417355f8 ; literal="slows and broadens"
0x00deca80: jmp    0x140decab6
0x00deca82: lea    rdx,[rip+0x948b87]        # 0x141735610 ; literal="is consistently slowing"
0x00deca89: jmp    0x140decab6
0x00deca8b: lea    rdx,[rip+0x948b96]        # 0x141735628 ; literal="is at a hurried pace"
0x00deca92: jmp    0x140decab6
0x00deca94: lea    rdx,[rip+0x948ba5]        # 0x141735640 ; literal="gradually slows as it comes to an end"
0x00deca9b: jmp    0x140decab6
0x00deca9d: lea    rdx,[rip+0x948ad4]        # 0x141735578 ; literal="slows down and dies away as it draws to a close"
0x00decaa4: jmp    0x140decab6
0x00decaa6: lea    rdx,[rip+0x948afb]        # 0x1417355a8 ; literal="becomes calmer as the end is approached"
0x00decaad: jmp    0x140decab6
0x00decaaf: lea    rdx,[rip+0x948b1a]        # 0x1417355d0 ; literal="becomes frenzied as it proceeds"
0x00decab6: mov    rcx,rdi
0x00decab9: call   0x140070b20
0x00decabe: cmp    DWORD PTR [r12+0xac],0xffffffff
0x00decac7: je     0x140decb8f
0x00decacd: cmp    DWORD PTR [r12+0xa8],0xffffffff
0x00decad6: jne    0x140decaea
0x00decad8: cmp    DWORD PTR [r12+0xb0],0xffffffff
0x00decae1: lea    rdx,[rip+0x948b08]        # 0x1417355f0 ; literal="is to"
0x00decae8: je     0x140decaf1
0x00decaea: lea    rdx,[rip+0x948bbf]        # 0x1417356b0 ; literal=", and it is to"
0x00decaf1: mov    rcx,rdi
0x00decaf4: call   0x140070b20
0x00decaf9: lea    rdx,[rip+0x811e6c]        # 0x1415fe96c ; literal=" "
0x00decb00: mov    rcx,rdi
0x00decb03: call   0x140070b20
0x00decb08: mov    eax,DWORD PTR [r12+0xac]
0x00decb10: add    eax,0xffffffec
0x00decb13: cmp    eax,0xa
0x00decb16: ja     0x140decb8f
0x00decb18: cdqe
0x00decb1a: mov    ecx,DWORD PTR [rsi+rax*4+0xdefd14]
0x00decb21: add    rcx,rsi
0x00decb24: jmp    rcx
0x00decb26: lea    rdx,[rip+0x948b93]        # 0x1417356c0 ; literal="be in whispered undertones"
0x00decb2d: jmp    0x140decb87
0x00decb2f: lea    rdx,[rip+0x948baa]        # 0x1417356e0 ; literal="be very soft"
0x00decb36: jmp    0x140decb87
0x00decb38: lea    rdx,[rip+0x948bb1]        # 0x1417356f0 ; literal="be soft"
0x00decb3f: jmp    0x140decb87
0x00decb41: lea    rdx,[rip+0x948b20]        # 0x141735668 ; literal="be moderately soft"
0x00decb48: jmp    0x140decb87
0x00decb4a: lea    rdx,[rip+0x948b2f]        # 0x141735680 ; literal="be moderately loud"
0x00decb51: jmp    0x140decb87
0x00decb53: lea    rdx,[rip+0x948b3e]        # 0x141735698 ; literal="be loud"
0x00decb5a: jmp    0x140decb87
0x00decb5c: lea    rdx,[rip+0x948b3d]        # 0x1417356a0 ; literal="be very loud"
0x00decb63: jmp    0x140decb87
0x00decb65: lea    rdx,[rip+0x948bec]        # 0x141735758 ; literal="become louder and louder"
0x00decb6c: jmp    0x140decb87
0x00decb6e: lea    rdx,[rip+0x948c03]        # 0x141735778 ; literal="become softer and softer"
0x00decb75: jmp    0x140decb87
0x00decb77: lea    rdx,[rip+0x948c1a]        # 0x141735798 ; literal="fade into silence"
0x00decb7e: jmp    0x140decb87
0x00decb80: lea    rdx,[rip+0x948c29]        # 0x1417357b0 ; literal="start loud then be immediately soft"
0x00decb87: mov    rcx,rdi
0x00decb8a: call   0x140070b20
0x00decb8f: lea    rdx,[rip+0x827aea]        # 0x141614680 ; literal=".  "
0x00decb96: mov    rcx,rdi
0x00decb99: call   0x140070b20
0x00decb9e: cmp    BYTE PTR [rbp-0x60],0x0
0x00decba2: jne    0x140ded328
0x00decba8: test   r13d,r13d
0x00decbab: jle    0x140ded328
0x00decbb1: mov    BYTE PTR [rsp+0x30],0x1
0x00decbb6: test   r14b,r14b
0x00decbb9: jne    0x140decbff
0x00decbbb: lea    rcx,[rbp+0x1b0]
0x00decbc2: call   0x140543d60
0x00decbc7: lea    rdx,[rip+0x8281e2]        # 0x141614db0 ; literal="In "
0x00decbce: mov    rcx,rdi
0x00decbd1: call   0x140070b20
0x00decbd6: lea    rdx,[rbp+0x1b0]
0x00decbdd: mov    rcx,rdi
0x00decbe0: call   0x1400bb2d0
0x00decbe5: lea    rdx,[rip+0x81271c]        # 0x1415ff308 ; literal=", "
0x00decbec: mov    rcx,rdi
0x00decbef: call   0x140070b20
0x00decbf4: xor    al,al
0x00decbf6: mov    BYTE PTR [rsp+0x30],al
0x00decbfa: mov    BYTE PTR [rsp+0x32],0x1
0x00decbff: lea    rcx,[r12+0x30]
0x00decc04: lea    rdx,[rbp+0x0]
0x00decc08: call   0x140070800
0x00decc0d: lea    rcx,[r12+0x30]
0x00decc12: lea    rdx,[rbp-0x20]
0x00decc16: call   0x1400707f0
0x00decc1b: lea    rcx,[r12+0x78]
0x00decc20: lea    rdx,[rbp+0x60]
0x00decc24: call   0x140070800
0x00decc29: mov    rcx,QWORD PTR [rax]
0x00decc2c: mov    QWORD PTR [rsp+0x68],rcx
0x00decc31: lea    rcx,[r12+0x90]
0x00decc39: lea    rdx,[rbp+0x68]
0x00decc3d: call   0x140070800
0x00decc42: mov    rcx,QWORD PTR [rax]
0x00decc45: mov    QWORD PTR [rbp-0x8],rcx
0x00decc49: lea    r8,[rbp-0x20]
0x00decc4d: lea    rdx,[rsp+0x4a]
0x00decc52: lea    rcx,[rbp+0x0]
0x00decc56: call   0x1400703e0
0x00decc5b: xor    edx,edx
0x00decc5d: movzx  ecx,BYTE PTR [rax]
0x00decc60: call   0x140066d70
0x00decc65: test   al,al
0x00decc67: je     0x140ded319
0x00decc6d: movzx  ebx,BYTE PTR [rsp+0x30]
0x00decc72: lea    rcx,[rsp+0x68]
0x00decc77: call   0x1400703d0
0x00decc7c: cmp    DWORD PTR [rax],0xffffffff
0x00decc7f: je     0x140ded2d0
0x00decc85: lea    rcx,[rbp+0x0]
0x00decc89: call   0x1400703d0
0x00decc8e: movsxd rdx,DWORD PTR [rax]
0x00decc91: mov    rcx,QWORD PTR [rbp+0x8]
0x00decc95: call   0x1400707e0
0x00decc9a: mov    r14,QWORD PTR [rax]
0x00decc9d: mov    eax,DWORD PTR [r14+0x10]
0x00decca1: mov    rcx,rdi
0x00decca4: test   bl,bl
0x00decca6: je     0x140deccc4
0x00decca8: cmp    eax,0x2
0x00deccab: lea    rdx,[rip+0x9495f6]        # 0x1417362a8 ; literal="Each of the "
0x00deccb2: jge    0x140deccbb
0x00deccb4: lea    rdx,[rip+0x816f79]        # 0x141603c34 ; literal="The "
0x00deccbb: call   0x140070b20
0x00deccc0: xor    bl,bl
0x00deccc2: jmp    0x140deccdc
0x00deccc4: cmp    eax,0x2
0x00deccc7: lea    rdx,[rip+0x94975a]        # 0x141736428 ; literal="each of the "
0x00deccce: jge    0x140deccd7
0x00deccd0: lea    rdx,[rip+0x8123a1]        # 0x1415ff078 ; literal="the "
0x00deccd7: call   0x140070b20
0x00deccdc: test   BYTE PTR [r14+0x4],0x1
0x00decce1: je     0x140decd34
0x00decce3: lea    rdx,[rip+0x948872]        # 0x14173555c ; literal="singer"
0x00deccea: mov    rcx,rdi
0x00decced: call   0x140070b20
0x00deccf2: mov    rcx,rdi
0x00deccf5: cmp    DWORD PTR [r14+0x10],0x2
0x00deccfa: lea    rdx,[rip+0x94984b]        # 0x14173654c ; literal="s'"
0x00decd01: jge    0x140decd0a
0x00decd03: lea    rdx,[rip+0x812786]        # 0x1415ff490 ; literal="'s"
0x00decd0a: call   0x140070b20
0x00decd0f: lea    rdx,[rip+0x94983a]        # 0x141736550 ; literal=" voice"
0x00decd16: mov    rcx,rdi
0x00decd19: call   0x140070b20
0x00decd1e: cmp    DWORD PTR [r14+0x10],0x2
0x00decd23: jl     0x140decd34
0x00decd25: lea    rdx,[rip+0x81279c]        # 0x1415ff4c8 ; literal="s"
0x00decd2c: mov    rcx,rdi
0x00decd2f: call   0x140070b20
0x00decd34: test   BYTE PTR [r14+0x4],0x2
0x00decd39: je     0x140decd8c
0x00decd3b: lea    rdx,[rip+0x948826]        # 0x141735568 ; literal="speaker"
0x00decd42: mov    rcx,rdi
0x00decd45: call   0x140070b20
0x00decd4a: mov    rcx,rdi
0x00decd4d: cmp    DWORD PTR [r14+0x10],0x2
0x00decd52: lea    rdx,[rip+0x9497f3]        # 0x14173654c ; literal="s'"
0x00decd59: jge    0x140decd62
0x00decd5b: lea    rdx,[rip+0x81272e]        # 0x1415ff490 ; literal="'s"
0x00decd62: call   0x140070b20
0x00decd67: lea    rdx,[rip+0x9497e2]        # 0x141736550 ; literal=" voice"
0x00decd6e: mov    rcx,rdi
0x00decd71: call   0x140070b20
0x00decd76: cmp    DWORD PTR [r14+0x10],0x2
0x00decd7b: jl     0x140decd8c
0x00decd7d: lea    rdx,[rip+0x812744]        # 0x1415ff4c8 ; literal="s"
0x00decd84: mov    rcx,rdi
0x00decd87: call   0x140070b20
0x00decd8c: test   BYTE PTR [r14+0x4],0x4
0x00decd91: je     0x140decde4
0x00decd93: lea    rdx,[rip+0x9487d6]        # 0x141735570 ; literal="chanter"
0x00decd9a: mov    rcx,rdi
0x00decd9d: call   0x140070b20
0x00decda2: mov    rcx,rdi
0x00decda5: cmp    DWORD PTR [r14+0x10],0x2
0x00decdaa: lea    rdx,[rip+0x94979b]        # 0x14173654c ; literal="s'"
0x00decdb1: jge    0x140decdba
0x00decdb3: lea    rdx,[rip+0x8126d6]        # 0x1415ff490 ; literal="'s"
0x00decdba: call   0x140070b20
0x00decdbf: lea    rdx,[rip+0x94978a]        # 0x141736550 ; literal=" voice"
0x00decdc6: mov    rcx,rdi
0x00decdc9: call   0x140070b20
0x00decdce: cmp    DWORD PTR [r14+0x10],0x2
0x00decdd3: jl     0x140decde4
0x00decdd5: lea    rdx,[rip+0x8126ec]        # 0x1415ff4c8 ; literal="s"
0x00decddc: mov    rcx,rdi
0x00decddf: call   0x140070b20
0x00decde4: movsxd rax,DWORD PTR [r14]
0x00decde7: cmp    eax,0xffffffff
0x00decdea: je     0x140dece22
0x00decdec: mov    rdx,rax
0x00decdef: lea    rcx,[rip+0x171c382]        # 0x142509178
0x00decdf6: cmp    DWORD PTR [r14+0x10],0x2
0x00decdfb: jl     0x140dece0e
0x00decdfd: call   0x1400707e0
0x00dece02: mov    rdx,QWORD PTR [rax]
0x00dece05: add    rdx,0x88
0x00dece0c: jmp    0x140dece1a
0x00dece0e: call   0x1400707e0
0x00dece13: mov    rdx,QWORD PTR [rax]
0x00dece16: add    rdx,0x68
0x00dece1a: mov    rcx,rdi
0x00dece1d: call   0x1400bb2d0
0x00dece22: lea    rdx,[rip+0x811b43]        # 0x1415fe96c ; literal=" "
0x00dece29: mov    rcx,rdi
0x00dece2c: call   0x140070b20
0x00dece31: lea    rcx,[rsp+0x68]
0x00dece36: call   0x1400703d0
0x00dece3b: movsxd rsi,DWORD PTR [rax]
0x00dece3e: lea    rcx,[rbp-0x8]
0x00dece42: call   0x1400703d0
0x00dece47: movsxd r15,DWORD PTR [rax]
0x00dece4a: mov    DWORD PTR [rbp-0x5c],r15d
0x00dece4e: movsxd rax,DWORD PTR [r14]
0x00dece51: cmp    eax,0xffffffff
0x00dece54: jne    0x140decf40
0x00dece5a: cmp    esi,r15d
0x00dece5d: jne    0x140deceac
0x00dece5f: lea    rdx,[rip+0x9496f2]        # 0x141736558 ; literal="stays in the "
0x00dece66: mov    rcx,rdi
0x00dece69: call   0x140070b20
0x00dece6e: test   esi,esi
0x00dece70: je     0x140decfd6
0x00dece76: sub    esi,0x1
0x00dece79: je     0x140dece98
0x00dece7b: cmp    esi,0x1
0x00dece7e: jne    0x140ded296
0x00dece84: lea    rdx,[rip+0x874165]        # 0x141660ff0 ; literal="high"
0x00dece8b: mov    rcx,rdi
0x00dece8e: call   0x140070b20
0x00dece93: jmp    0x140ded296
0x00dece98: lea    rdx,[rip+0x949ca9]        # 0x141736b48 ; literal="middle"
0x00dece9f: mov    rcx,rdi
0x00decea2: call   0x140070b20
0x00decea7: jmp    0x140ded296
0x00deceac: test   esi,esi
0x00deceae: jne    0x140decec2
0x00deceb0: cmp    r15d,0x2
0x00deceb4: jne    0x140decec2
0x00deceb6: lea    rdx,[rip+0x949623]        # 0x1417364e0 ; literal="covers its entire range"
0x00decebd: jmp    0x140ded29d
0x00decec2: lea    rdx,[rip+0x94962f]        # 0x1417364f8 ; literal="ranges from the "
0x00decec9: mov    rcx,rdi
0x00dececc: call   0x140070b20
0x00deced1: test   esi,esi
0x00deced3: je     0x140decef1
0x00deced5: sub    esi,0x1
0x00deced8: je     0x140decee8
0x00deceda: cmp    esi,0x1
0x00decedd: jne    0x140decf00
0x00decedf: lea    rdx,[rip+0x87410a]        # 0x141660ff0 ; literal="high"
0x00decee6: jmp    0x140decef8
0x00decee8: lea    rdx,[rip+0x949c59]        # 0x141736b48 ; literal="middle"
0x00deceef: jmp    0x140decef8
0x00decef1: lea    rdx,[rip+0x874100]        # 0x141660ff8 ; literal="low"
0x00decef8: mov    rcx,rdi
0x00decefb: call   0x140070b20
0x00decf00: lea    rdx,[rip+0x949d49]        # 0x141736c50 ; literal=" register to the "
0x00decf07: mov    rcx,rdi
0x00decf0a: call   0x140070b20
0x00decf0f: test   r15d,r15d
0x00decf12: je     0x140decfd6
0x00decf18: sub    r15d,0x1
0x00decf1c: je     0x140dece98
0x00decf22: cmp    r15d,0x1
0x00decf26: jne    0x140ded296
0x00decf2c: lea    rdx,[rip+0x8740bd]        # 0x141660ff0 ; literal="high"
0x00decf33: mov    rcx,rdi
0x00decf36: call   0x140070b20
0x00decf3b: jmp    0x140ded296
0x00decf40: mov    rdx,rax
0x00decf43: lea    rcx,[rip+0x171c22e]        # 0x142509178
0x00decf4a: call   0x1400707e0
0x00decf4f: mov    rcx,QWORD PTR [rax]
0x00decf52: add    rcx,0x248
0x00decf59: call   0x140070410
0x00decf5e: mov    r12,rax
0x00decf61: mov    QWORD PTR [rsp+0x70],rax
0x00decf66: cmp    esi,r15d
0x00decf69: jne    0x140ded040
0x00decf6f: mov    rcx,rdi
0x00decf72: cmp    r12d,0x4
0x00decf76: lea    rdx,[rip+0x949593]        # 0x141736510 ; literal="is confined to the "
0x00decf7d: jge    0x140decf86
0x00decf7f: lea    rdx,[rip+0x9495d2]        # 0x141736558 ; literal="stays in the "
0x00decf86: call   0x140070b20
0x00decf8b: movsxd rdx,DWORD PTR [r14]
0x00decf8e: lea    rcx,[rip+0x171c1e3]        # 0x142509178
0x00decf95: call   0x1400707e0
0x00decf9a: mov    rcx,QWORD PTR [rax]
0x00decf9d: add    rcx,0x248
0x00decfa4: mov    rdx,rsi
0x00decfa7: call   0x1400707e0
0x00decfac: mov    rcx,QWORD PTR [rax]
0x00decfaf: call   0x140de77f0
0x00decfb4: cmp    eax,0xffffffff
0x00decfb7: je     0x140decfd2
0x00decfb9: mov    rdx,rdi
0x00decfbc: mov    ecx,eax
0x00decfbe: call   0x140793d10
0x00decfc3: lea    rdx,[rip+0x8119a2]        # 0x1415fe96c ; literal=" "
0x00decfca: mov    rcx,rdi
0x00decfcd: call   0x140070b20
0x00decfd2: test   esi,esi
0x00decfd4: jne    0x140decfea
0x00decfd6: lea    rdx,[rip+0x87401b]        # 0x141660ff8 ; literal="low"
0x00decfdd: mov    rcx,rdi
0x00decfe0: call   0x140070b20
0x00decfe5: jmp    0x140ded296
0x00decfea: cmp    esi,0x1
0x00decfed: jne    0x140ded009
0x00decfef: cmp    r12d,0x3
0x00decff3: jl     0x140ded009
0x00decff5: lea    rdx,[rip+0x949b4c]        # 0x141736b48 ; literal="middle"
0x00decffc: mov    rcx,rdi
0x00decfff: call   0x140070b20
0x00ded004: jmp    0x140ded296
0x00ded009: lea    eax,[r12-0x1]
0x00ded00e: cmp    esi,eax
0x00ded010: jne    0x140ded02c
0x00ded012: cmp    r12d,0x4
0x00ded016: jl     0x140ded02c
0x00ded018: lea    rdx,[rip+0x949b99]        # 0x141736bb8 ; literal="top"
0x00ded01f: mov    rcx,rdi
0x00ded022: call   0x140070b20
0x00ded027: jmp    0x140ded296
0x00ded02c: lea    rdx,[rip+0x873fbd]        # 0x141660ff0 ; literal="high"
0x00ded033: mov    rcx,rdi
0x00ded036: call   0x140070b20
0x00ded03b: jmp    0x140ded296
0x00ded040: movsxd rdx,DWORD PTR [r14]
0x00ded043: lea    rcx,[rip+0x171c12e]        # 0x142509178
0x00ded04a: call   0x1400707e0
0x00ded04f: mov    rcx,QWORD PTR [rax]
0x00ded052: add    rcx,0x248
0x00ded059: mov    rdx,rsi
0x00ded05c: call   0x1400707e0
0x00ded061: mov    rcx,QWORD PTR [rax]
0x00ded064: call   0x140de77f0
0x00ded069: mov    r12d,eax
0x00ded06c: movsxd rdx,DWORD PTR [r14]
0x00ded06f: lea    rcx,[rip+0x171c102]        # 0x142509178
0x00ded076: call   0x1400707e0
0x00ded07b: mov    rcx,QWORD PTR [rax]
0x00ded07e: add    rcx,0x248
0x00ded085: mov    rdx,r15
0x00ded088: call   0x1400707e0
0x00ded08d: mov    rcx,QWORD PTR [rax]
0x00ded090: call   0x140de77f0
0x00ded095: mov    r13d,eax
0x00ded098: mov    r14,QWORD PTR [rsp+0x70]
0x00ded09d: dec    r14d
0x00ded0a0: test   esi,esi
0x00ded0a2: jne    0x140ded0ca
0x00ded0a4: cmp    r15d,r14d
0x00ded0a7: jne    0x140ded0ca
0x00ded0a9: cmp    r12d,eax
0x00ded0ac: jne    0x140ded188
0x00ded0b2: lea    rdx,[rip+0x949427]        # 0x1417364e0 ; literal="covers its entire range"
0x00ded0b9: mov    rcx,rdi
0x00ded0bc: call   0x140070b20
0x00ded0c1: mov    r13,QWORD PTR [rbp-0x40]
0x00ded0c5: jmp    0x140ded2a5
0x00ded0ca: cmp    r12d,r13d
0x00ded0cd: jne    0x140ded184
0x00ded0d3: lea    rdx,[rip+0x94941e]        # 0x1417364f8 ; literal="ranges from the "
0x00ded0da: mov    rcx,rdi
0x00ded0dd: call   0x140070b20
0x00ded0e2: test   esi,esi
0x00ded0e4: jne    0x140ded0ef
0x00ded0e6: lea    rdx,[rip+0x873f0b]        # 0x141660ff8 ; literal="low"
0x00ded0ed: jmp    0x140ded11f
0x00ded0ef: mov    rax,QWORD PTR [rsp+0x70]
0x00ded0f4: cmp    esi,0x1
0x00ded0f7: jne    0x140ded107
0x00ded0f9: cmp    eax,0x3
0x00ded0fc: jl     0x140ded107
0x00ded0fe: lea    rdx,[rip+0x949a43]        # 0x141736b48 ; literal="middle"
0x00ded105: jmp    0x140ded11f
0x00ded107: cmp    esi,r14d
0x00ded10a: jne    0x140ded118
0x00ded10c: cmp    eax,0x4
0x00ded10f: lea    rdx,[rip+0x949aa2]        # 0x141736bb8 ; literal="top"
0x00ded116: jge    0x140ded11f
0x00ded118: lea    rdx,[rip+0x873ed1]        # 0x141660ff0 ; literal="high"
0x00ded11f: mov    rcx,rdi
0x00ded122: call   0x140070b20
0x00ded127: lea    rdx,[rip+0x949b22]        # 0x141736c50 ; literal=" register to the "
0x00ded12e: mov    rcx,rdi
0x00ded131: call   0x140070b20
0x00ded136: test   r15d,r15d
0x00ded139: jne    0x140ded147
0x00ded13b: lea    rdx,[rip+0x873eb6]        # 0x141660ff8 ; literal="low"
0x00ded142: jmp    0x140ded28a
0x00ded147: mov    rcx,QWORD PTR [rsp+0x70]
0x00ded14c: cmp    r15d,0x1
0x00ded150: jne    0x140ded163
0x00ded152: cmp    ecx,0x3
0x00ded155: jl     0x140ded163
0x00ded157: lea    rdx,[rip+0x9499ea]        # 0x141736b48 ; literal="middle"
0x00ded15e: jmp    0x140ded28a
0x00ded163: lea    eax,[rcx-0x1]
0x00ded166: cmp    r15d,eax
0x00ded169: jne    0x140ded283
0x00ded16f: cmp    ecx,0x4
0x00ded172: jl     0x140ded283
0x00ded178: lea    rdx,[rip+0x949a39]        # 0x141736bb8 ; literal="top"
0x00ded17f: jmp    0x140ded28a
0x00ded184: test   esi,esi
0x00ded186: jne    0x140ded1a2
0x00ded188: mov    r15d,r14d
0x00ded18b: cmp    DWORD PTR [rbp-0x5c],r14d
0x00ded18f: jne    0x140ded1a2
0x00ded191: lea    rdx,[rip+0x949390]        # 0x141736528 ; literal="covers its entire range from the "
0x00ded198: mov    rcx,rdi
0x00ded19b: call   0x140070b20
0x00ded1a0: jmp    0x140ded1b4
0x00ded1a2: lea    rdx,[rip+0x94934f]        # 0x1417364f8 ; literal="ranges from the "
0x00ded1a9: mov    rcx,rdi
0x00ded1ac: call   0x140070b20
0x00ded1b1: mov    r15d,r14d
0x00ded1b4: cmp    r12d,0xffffffff
0x00ded1b8: je     0x140ded1d4
0x00ded1ba: mov    rdx,rdi
0x00ded1bd: mov    ecx,r12d
0x00ded1c0: call   0x140793d10
0x00ded1c5: lea    rdx,[rip+0x8117a0]        # 0x1415fe96c ; literal=" "
0x00ded1cc: mov    rcx,rdi
0x00ded1cf: call   0x140070b20
0x00ded1d4: test   esi,esi
0x00ded1d6: jne    0x140ded1e1
0x00ded1d8: lea    rdx,[rip+0x873e19]        # 0x141660ff8 ; literal="low"
0x00ded1df: jmp    0x140ded211
0x00ded1e1: mov    rax,QWORD PTR [rsp+0x70]
0x00ded1e6: cmp    esi,0x1
0x00ded1e9: jne    0x140ded1f9
0x00ded1eb: cmp    eax,0x3
0x00ded1ee: jl     0x140ded1f9
0x00ded1f0: lea    rdx,[rip+0x949951]        # 0x141736b48 ; literal="middle"
0x00ded1f7: jmp    0x140ded211
0x00ded1f9: cmp    esi,r15d
0x00ded1fc: jne    0x140ded20a
0x00ded1fe: cmp    eax,0x4
0x00ded201: lea    rdx,[rip+0x9499b0]        # 0x141736bb8 ; literal="top"
0x00ded208: jge    0x140ded211
0x00ded20a: lea    rdx,[rip+0x873ddf]        # 0x141660ff0 ; literal="high"
0x00ded211: mov    rcx,rdi
0x00ded214: call   0x140070b20
0x00ded219: lea    rdx,[rip+0x949a30]        # 0x141736c50 ; literal=" register to the "
0x00ded220: mov    rcx,rdi
0x00ded223: call   0x140070b20
0x00ded228: cmp    r13d,0xffffffff
0x00ded22c: je     0x140ded248
0x00ded22e: mov    rdx,rdi
0x00ded231: mov    ecx,r13d
0x00ded234: call   0x140793d10
0x00ded239: lea    rdx,[rip+0x81172c]        # 0x1415fe96c ; literal=" "
0x00ded240: mov    rcx,rdi
0x00ded243: call   0x140070b20
0x00ded248: mov    ecx,DWORD PTR [rbp-0x5c]
0x00ded24b: test   ecx,ecx
0x00ded24d: jne    0x140ded258
0x00ded24f: lea    rdx,[rip+0x873da2]        # 0x141660ff8 ; literal="low"
0x00ded256: jmp    0x140ded28a
0x00ded258: mov    rdx,QWORD PTR [rsp+0x70]
0x00ded25d: cmp    ecx,0x1
0x00ded260: jne    0x140ded270
0x00ded262: cmp    edx,0x3
0x00ded265: jl     0x140ded270
0x00ded267: lea    rdx,[rip+0x9498da]        # 0x141736b48 ; literal="middle"
0x00ded26e: jmp    0x140ded28a
0x00ded270: lea    eax,[rdx-0x1]
0x00ded273: cmp    ecx,eax
0x00ded275: jne    0x140ded283
0x00ded277: cmp    edx,0x4
0x00ded27a: lea    rdx,[rip+0x949937]        # 0x141736bb8 ; literal="top"
0x00ded281: jge    0x140ded28a
0x00ded283: lea    rdx,[rip+0x873d66]        # 0x141660ff0 ; literal="high"
0x00ded28a: mov    rcx,rdi
0x00ded28d: call   0x140070b20
0x00ded292: mov    r13,QWORD PTR [rbp-0x40]
0x00ded296: lea    rdx,[rip+0x9492cb]        # 0x141736568 ; literal=" register"
0x00ded29d: mov    rcx,rdi
0x00ded2a0: call   0x140070b20
0x00ded2a5: cmp    r13d,0x3
0x00ded2a9: jl     0x140ded2b4
0x00ded2ab: lea    rdx,[rip+0x812056]        # 0x1415ff308 ; literal=", "
0x00ded2b2: jmp    0x140ded2c1
0x00ded2b4: cmp    r13d,0x2
0x00ded2b8: jne    0x140ded2c9
0x00ded2ba: lea    rdx,[rip+0x81207f]        # 0x1415ff340 ; literal=" and "
0x00ded2c1: mov    rcx,rdi
0x00ded2c4: call   0x140070b20
0x00ded2c9: dec    r13d
0x00ded2cc: mov    QWORD PTR [rbp-0x40],r13
0x00ded2d0: lea    rcx,[rbp+0x0]
0x00ded2d4: call   0x140070910
0x00ded2d9: lea    rcx,[rsp+0x68]
0x00ded2de: call   0x140070910
0x00ded2e3: lea    rcx,[rbp-0x8]
0x00ded2e7: call   0x140070910
0x00ded2ec: lea    r8,[rbp-0x20]
0x00ded2f0: lea    rdx,[rsp+0x4a]
0x00ded2f5: lea    rcx,[rbp+0x0]
0x00ded2f9: call   0x1400703e0
0x00ded2fe: xor    edx,edx
0x00ded300: movzx  ecx,BYTE PTR [rax]
0x00ded303: call   0x140066d70
0x00ded308: test   al,al
0x00ded30a: jne    0x140decc72
0x00ded310: movzx  ebx,BYTE PTR [rsp+0x31]
0x00ded315: mov    r12,QWORD PTR [rbp-0x50]
0x00ded319: lea    rdx,[rip+0x827360]        # 0x141614680 ; literal=".  "
0x00ded320: mov    rcx,rdi
0x00ded323: call   0x140070b20
0x00ded328: mov    esi,DWORD PTR [rsp+0x50]
0x00ded32c: mov    r14d,DWORD PTR [rbp-0x48]
0x00ded330: cmp    esi,0xffffffff
0x00ded333: jne    0x140ded33e
0x00ded335: cmp    r14d,esi
0x00ded338: je     0x140ded583
0x00ded33e: movzx  r13d,BYTE PTR [rsp+0x32]
0x00ded344: mov    rcx,rdi
0x00ded347: test   r13b,r13b
0x00ded34a: je     0x140ded370
0x00ded34c: cmp    DWORD PTR [r12+0x10],0x2
0x00ded352: jl     0x140ded362
0x00ded354: lea    rdx,[rip+0x948f85]        # 0x1417362e0 ; literal="Each passage"
0x00ded35b: call   0x140070b20
0x00ded360: jmp    0x140ded387
0x00ded362: lea    rdx,[rip+0x94900f]        # 0x141736378 ; literal="The passage"
0x00ded369: call   0x140070b20
0x00ded36e: jmp    0x140ded387
0x00ded370: lea    rdx,[rbp+0x1b0]
0x00ded377: call   0x1400bb2d0
0x00ded37c: mov    BYTE PTR [rsp+0x32],0x1
0x00ded381: movzx  r13d,BYTE PTR [rsp+0x32]
0x00ded387: cmp    esi,0xffffffff
0x00ded38a: je     0x140ded51c
0x00ded390: lea    rdx,[rip+0x8a02e1]        # 0x14168d678 ; literal=" has "
0x00ded397: mov    rcx,rdi
0x00ded39a: call   0x140070b20
0x00ded39f: cmp    r14d,0xffffffff
0x00ded3a3: je     0x140ded4ce
0x00ded3a9: cmp    esi,r14d
0x00ded3ac: jne    0x140ded42d
0x00ded3ae: test   esi,esi
0x00ded3b0: je     0x140ded412
0x00ded3b2: sub    esi,0x1
0x00ded3b5: je     0x140ded3f7
0x00ded3b7: sub    esi,0x1
0x00ded3ba: je     0x140ded3dc
0x00ded3bc: cmp    esi,0x1
0x00ded3bf: jne    0x140ded421
0x00ded3c1: lea    rdx,[rip+0x9484e8]        # 0x1417358b0 ; literal="phrases of varied length"
0x00ded3c8: mov    rcx,rdi
0x00ded3cb: call   0x140070b20
0x00ded3d0: lea    rdx,[rip+0x9492a1]        # 0x141736678 ; literal=" in the melody and counterpoint"
0x00ded3d7: jmp    0x140ded4b2
0x00ded3dc: lea    rdx,[rip+0x948365]        # 0x141735748 ; literal="long phrases"
0x00ded3e3: mov    rcx,rdi
0x00ded3e6: call   0x140070b20
0x00ded3eb: lea    rdx,[rip+0x949286]        # 0x141736678 ; literal=" in the melody and counterpoint"
0x00ded3f2: jmp    0x140ded4b2
0x00ded3f7: lea    rdx,[rip+0x948332]        # 0x141735730 ; literal="mid-length phrases"
0x00ded3fe: mov    rcx,rdi
0x00ded401: call   0x140070b20
0x00ded406: lea    rdx,[rip+0x94926b]        # 0x141736678 ; literal=" in the melody and counterpoint"
0x00ded40d: jmp    0x140ded4b2
0x00ded412: lea    rdx,[rip+0x948307]        # 0x141735720 ; literal="short phrases"
0x00ded419: mov    rcx,rdi
0x00ded41c: call   0x140070b20
0x00ded421: lea    rdx,[rip+0x949250]        # 0x141736678 ; literal=" in the melody and counterpoint"
0x00ded428: jmp    0x140ded4b2
0x00ded42d: test   esi,esi
0x00ded42f: je     0x140ded45b
0x00ded431: sub    esi,0x1
0x00ded434: je     0x140ded452
0x00ded436: sub    esi,0x1
0x00ded439: je     0x140ded449
0x00ded43b: cmp    esi,0x1
0x00ded43e: jne    0x140ded46a
0x00ded440: lea    rdx,[rip+0x948469]        # 0x1417358b0 ; literal="phrases of varied length"
0x00ded447: jmp    0x140ded462
0x00ded449: lea    rdx,[rip+0x9482f8]        # 0x141735748 ; literal="long phrases"
0x00ded450: jmp    0x140ded462
0x00ded452: lea    rdx,[rip+0x9482d7]        # 0x141735730 ; literal="mid-length phrases"
0x00ded459: jmp    0x140ded462
0x00ded45b: lea    rdx,[rip+0x9482be]        # 0x141735720 ; literal="short phrases"
0x00ded462: mov    rcx,rdi
0x00ded465: call   0x140070b20
0x00ded46a: lea    rdx,[rip+0x949227]        # 0x141736698 ; literal=" in the melody, while the counterpoint has "
0x00ded471: mov    rcx,rdi
0x00ded474: call   0x140070b20
0x00ded479: test   r14d,r14d
0x00ded47c: je     0x140ded4ab
0x00ded47e: sub    r14d,0x1
0x00ded482: je     0x140ded4a2
0x00ded484: sub    r14d,0x1
0x00ded488: je     0x140ded499
0x00ded48a: cmp    r14d,0x1
0x00ded48e: jne    0x140ded4ba
0x00ded490: lea    rdx,[rip+0x948419]        # 0x1417358b0 ; literal="phrases of varied length"
0x00ded497: jmp    0x140ded4b2
0x00ded499: lea    rdx,[rip+0x9482a8]        # 0x141735748 ; literal="long phrases"
0x00ded4a0: jmp    0x140ded4b2
0x00ded4a2: lea    rdx,[rip+0x948287]        # 0x141735730 ; literal="mid-length phrases"
0x00ded4a9: jmp    0x140ded4b2
0x00ded4ab: lea    rdx,[rip+0x94826e]        # 0x141735720 ; literal="short phrases"
0x00ded4b2: mov    rcx,rdi
0x00ded4b5: call   0x140070b20
0x00ded4ba: lea    rdx,[rip+0x8271bf]        # 0x141614680 ; literal=".  "
0x00ded4c1: mov    rcx,rdi
0x00ded4c4: call   0x140070b20
0x00ded4c9: jmp    0x140ded589
0x00ded4ce: test   esi,esi
0x00ded4d0: je     0x140ded4fc
0x00ded4d2: sub    esi,0x1
0x00ded4d5: je     0x140ded4f3
0x00ded4d7: sub    esi,0x1
0x00ded4da: je     0x140ded4ea
0x00ded4dc: cmp    esi,0x1
0x00ded4df: jne    0x140ded50b
0x00ded4e1: lea    rdx,[rip+0x9483c8]        # 0x1417358b0 ; literal="phrases of varied length"
0x00ded4e8: jmp    0x140ded503
0x00ded4ea: lea    rdx,[rip+0x948257]        # 0x141735748 ; literal="long phrases"
0x00ded4f1: jmp    0x140ded503
0x00ded4f3: lea    rdx,[rip+0x948236]        # 0x141735730 ; literal="mid-length phrases"
0x00ded4fa: jmp    0x140ded503
0x00ded4fc: lea    rdx,[rip+0x94821d]        # 0x141735720 ; literal="short phrases"
0x00ded503: mov    rcx,rdi
0x00ded506: call   0x140070b20
0x00ded50b: lea    rdx,[rip+0x9491b6]        # 0x1417366c8 ; literal=" in the melody.  "
0x00ded512: mov    rcx,rdi
0x00ded515: call   0x140070b20
0x00ded51a: jmp    0x140ded589
0x00ded51c: cmp    r14d,0xffffffff
0x00ded520: je     0x140ded589
0x00ded522: lea    rdx,[rip+0x8a014f]        # 0x14168d678 ; literal=" has "
0x00ded529: mov    rcx,rdi
0x00ded52c: call   0x140070b20
0x00ded531: test   r14d,r14d
0x00ded534: je     0x140ded563
0x00ded536: sub    r14d,0x1
0x00ded53a: je     0x140ded55a
0x00ded53c: sub    r14d,0x1
0x00ded540: je     0x140ded551
0x00ded542: cmp    r14d,0x1
0x00ded546: jne    0x140ded572
0x00ded548: lea    rdx,[rip+0x948361]        # 0x1417358b0 ; literal="phrases of varied length"
0x00ded54f: jmp    0x140ded56a
0x00ded551: lea    rdx,[rip+0x9481f0]        # 0x141735748 ; literal="long phrases"
0x00ded558: jmp    0x140ded56a
0x00ded55a: lea    rdx,[rip+0x9481cf]        # 0x141735730 ; literal="mid-length phrases"
0x00ded561: jmp    0x140ded56a
0x00ded563: lea    rdx,[rip+0x9481b6]        # 0x141735720 ; literal="short phrases"
0x00ded56a: mov    rcx,rdi
0x00ded56d: call   0x140070b20
0x00ded572: lea    rdx,[rip+0x949167]        # 0x1417366e0 ; literal=" in the counterpoint melody.  "
0x00ded579: mov    rcx,rdi
0x00ded57c: call   0x140070b20
0x00ded581: jmp    0x140ded589
0x00ded583: movzx  r13d,BYTE PTR [rsp+0x32]
0x00ded589: mov    ecx,DWORD PTR [r12+0xb8]
0x00ded591: test   ecx,ecx
0x00ded593: je     0x140ded5cd
0x00ded595: sub    ecx,0x1
0x00ded598: je     0x140ded5c4
0x00ded59a: sub    ecx,0x1
0x00ded59d: je     0x140ded5bb
0x00ded59f: sub    ecx,0x1
0x00ded5a2: je     0x140ded5b2
0x00ded5a4: cmp    ecx,0x1
0x00ded5a7: jne    0x140ded5dc
0x00ded5a9: lea    rdx,[rip+0x9491b0]        # 0x141736760 ; literal="This passage is richly layered with full chords making use of the available range.  "
0x00ded5b0: jmp    0x140ded5d4
0x00ded5b2: lea    rdx,[rip+0x949077]        # 0x141736630 ; literal="Chords are packed close together in dense clusters in this passage.  "
0x00ded5b9: jmp    0x140ded5d4
0x00ded5bb: lea    rdx,[rip+0x949036]        # 0x1417365f8 ; literal="This passage typically has some sparse chords.  "
0x00ded5c2: jmp    0x140ded5d4
0x00ded5c4: lea    rdx,[rip+0x948fed]        # 0x1417365b8 ; literal="This passage features only melodic tones and intervals.  "
0x00ded5cb: jmp    0x140ded5d4
0x00ded5cd: lea    rdx,[rip+0x948fa4]        # 0x141736578 ; literal="Only one pitch is ever played at a time in this passage.  "
0x00ded5d4: mov    rcx,rdi
0x00ded5d7: call   0x140070b20
0x00ded5dc: movzx  r14d,BYTE PTR [rsp+0x33]
0x00ded5e2: movzx  r15d,BYTE PTR [rsp+0x31]
0x00ded5e8: cmp    DWORD PTR [r12+0x1c],0xffffffff
0x00ded5ee: jne    0x140ded606
0x00ded5f0: test   r14b,r14b
0x00ded5f3: je     0x140ded606
0x00ded5f5: cmp    DWORD PTR [r12+0x24],0xffffffff
0x00ded5fb: jne    0x140ded606
0x00ded5fd: test   r15b,r15b
0x00ded600: jne    0x140ded7ce
0x00ded606: mov    rcx,rdi
0x00ded609: test   r13b,r13b
0x00ded60c: je     0x140ded632
0x00ded60e: cmp    DWORD PTR [r12+0x10],0x2
0x00ded614: jl     0x140ded624
0x00ded616: lea    rdx,[rip+0x948cc3]        # 0x1417362e0 ; literal="Each passage"
0x00ded61d: call   0x140070b20
0x00ded622: jmp    0x140ded649
0x00ded624: lea    rdx,[rip+0x948d4d]        # 0x141736378 ; literal="The passage"
0x00ded62b: call   0x140070b20
0x00ded630: jmp    0x140ded649
0x00ded632: lea    rdx,[rbp+0x1b0]
0x00ded639: call   0x1400bb2d0
0x00ded63e: mov    BYTE PTR [rsp+0x32],0x1
0x00ded643: movzx  r13d,BYTE PTR [rsp+0x32]
0x00ded649: lea    rdx,[rip+0x949168]        # 0x1417367b8 ; literal=" is performed "
0x00ded650: mov    rcx,rdi
0x00ded653: call   0x140070b20
0x00ded658: mov    edx,DWORD PTR [r12+0x1c]
0x00ded65d: cmp    edx,0xffffffff
0x00ded660: jne    0x140ded670
0x00ded662: test   r14b,r14b
0x00ded665: jne    0x140ded6dc
0x00ded667: lea    rdx,[rip+0x9482aa]        # 0x141735918 ; literal="without preference for a scale"
0x00ded66e: jmp    0x140ded6d4
0x00ded670: lea    rcx,[rip+0x1716c61]        # 0x1425042d8
0x00ded677: call   0x140073b30
0x00ded67c: test   rax,rax
0x00ded67f: je     0x140ded6dc
0x00ded681: cmp    DWORD PTR [r12+0x20],0x0
0x00ded687: jl     0x140ded6dc
0x00ded689: lea    rsi,[rax+0x90]
0x00ded690: mov    rcx,rsi
0x00ded693: call   0x140070410
0x00ded698: movsxd rdx,DWORD PTR [r12+0x20]
0x00ded69d: cmp    rdx,rax
0x00ded6a0: jae    0x140ded6dc
0x00ded6a2: lea    rdx,[rip+0x94828f]        # 0x141735938 ; literal="using the "
0x00ded6a9: mov    rcx,rdi
0x00ded6ac: call   0x140070b20
0x00ded6b1: movsxd rdx,DWORD PTR [r12+0x20]
0x00ded6b6: mov    rcx,rsi
0x00ded6b9: call   0x1400707e0
0x00ded6be: mov    rdx,QWORD PTR [rax]
0x00ded6c1: add    rdx,0x8
0x00ded6c5: mov    rcx,rdi
0x00ded6c8: call   0x1400bb2d0
0x00ded6cd: lea    rdx,[rip+0x948270]        # 0x141735944 ; literal=" scale"
0x00ded6d4: mov    rcx,rdi
0x00ded6d7: call   0x140070b20
0x00ded6dc: cmp    DWORD PTR [r12+0x24],0xffffffff
0x00ded6e2: jne    0x140ded6ed
0x00ded6e4: test   r15b,r15b
0x00ded6e7: jne    0x140ded7bf
0x00ded6ed: cmp    DWORD PTR [r12+0x1c],0xffffffff
0x00ded6f3: jne    0x140ded701
0x00ded6f5: test   r14b,r14b
0x00ded6f8: lea    rdx,[rip+0x815b25]        # 0x141603224 ; literal="in "
0x00ded6ff: jne    0x140ded708
0x00ded701: lea    rdx,[rip+0x948248]        # 0x141735950 ; literal=" and in "
0x00ded708: mov    rcx,rdi
0x00ded70b: call   0x140070b20
0x00ded710: cmp    DWORD PTR [r12+0x24],0xffffffff
0x00ded716: jne    0x140ded72d
0x00ded718: test   r15b,r15b
0x00ded71b: jne    0x140ded7bf
0x00ded721: lea    rdx,[rip+0x948350]        # 0x141735a78 ; literal="free rhythm"
0x00ded728: jmp    0x140ded7b7
0x00ded72d: lea    rdx,[rip+0x811944]        # 0x1415ff078 ; literal="the "
0x00ded734: mov    rcx,rdi
0x00ded737: call   0x140070b20
0x00ded73c: mov    edx,DWORD PTR [r12+0x24]
0x00ded741: lea    rcx,[rip+0x1716bc0]        # 0x142504308
0x00ded748: call   0x140073b30
0x00ded74d: mov    r15,rax
0x00ded750: test   rax,rax
0x00ded753: je     0x140ded7b0
0x00ded755: cmp    DWORD PTR [r12+0x28],0x0
0x00ded75b: jl     0x140ded77e
0x00ded75d: movsxd rsi,DWORD PTR [r12+0x28]
0x00ded762: lea    rcx,[rax+0x20]
0x00ded766: call   0x140070410
0x00ded76b: cmp    rsi,rax
0x00ded76e: jae    0x140ded77e
0x00ded770: mov    rdx,rsi
0x00ded773: lea    rcx,[r15+0x20]
0x00ded777: call   0x1400707e0
0x00ded77c: jmp    0x140ded7a5
0x00ded77e: cmp    DWORD PTR [r12+0x2c],0x0
0x00ded784: jl     0x140ded7b0
0x00ded786: movsxd rsi,DWORD PTR [r12+0x2c]
0x00ded78b: lea    rcx,[r15+0x8]
0x00ded78f: call   0x140070410
0x00ded794: cmp    rsi,rax
0x00ded797: jae    0x140ded7b0
0x00ded799: mov    rdx,rsi
0x00ded79c: lea    rcx,[r15+0x8]
0x00ded7a0: call   0x1400707e0
0x00ded7a5: mov    rdx,QWORD PTR [rax]
0x00ded7a8: mov    rcx,rdi
0x00ded7ab: call   0x1400bb2d0
0x00ded7b0: lea    rdx,[rip+0x873529]        # 0x141660ce0 ; literal=" rhythm"
0x00ded7b7: mov    rcx,rdi
0x00ded7ba: call   0x140070b20
0x00ded7bf: lea    rdx,[rip+0x826eba]        # 0x141614680 ; literal=".  "
0x00ded7c6: mov    rcx,rdi
0x00ded7c9: call   0x140070b20
0x00ded7ce: cmp    DWORD PTR [r12+0xb4],0x0
0x00ded7d7: je     0x140dedb61
0x00ded7dd: mov    rcx,rdi
0x00ded7e0: test   r13b,r13b
0x00ded7e3: je     0x140ded809
0x00ded7e5: cmp    DWORD PTR [r12+0x10],0x2
0x00ded7eb: jl     0x140ded7fb
0x00ded7ed: lea    rdx,[rip+0x948aec]        # 0x1417362e0 ; literal="Each passage"
0x00ded7f4: call   0x140070b20
0x00ded7f9: jmp    0x140ded81a
0x00ded7fb: lea    rdx,[rip+0x948b76]        # 0x141736378 ; literal="The passage"
0x00ded802: call   0x140070b20
0x00ded807: jmp    0x140ded81a
0x00ded809: lea    rdx,[rbp+0x1b0]
0x00ded810: call   0x1400bb2d0
0x00ded815: mov    BYTE PTR [rsp+0x32],0x1
0x00ded81a: mov    rax,QWORD PTR [rbp-0x38]
0x00ded81e: mov    rcx,rdi
0x00ded821: test   BYTE PTR [rax+0x120],0x1
0x00ded828: lea    rdx,[rip+0x948f99]        # 0x1417367c8 ; literal=" should be composed and performed using "
0x00ded82f: jne    0x140ded838
0x00ded831: lea    rdx,[rip+0x948fc0]        # 0x1417367f8 ; literal=" should be performed using "
0x00ded838: call   0x140070b20
0x00ded83d: xor    r9d,r9d
0x00ded840: mov    r14d,r9d
0x00ded843: mov    edx,r9d
0x00ded846: mov    r8d,DWORD PTR [r12+0xb4]
0x00ded84e: mov    eax,DWORD PTR [rsp+0x38]
0x00ded852: lea    r13,[rip+0xffffffffff2127a7]        # 0x140000000
0x00ded859: mov    r9d,0x1
0x00ded85f: nop
0x00ded860: cmp    edx,0xf
0x00ded863: ja     0x140ded937
0x00ded869: movsxd rax,edx
0x00ded86c: mov    ecx,DWORD PTR [r13+rax*4+0xdefd40]
0x00ded874: add    rcx,r13
0x00ded877: jmp    rcx
0x00ded879: mov    eax,r9d
0x00ded87c: mov    DWORD PTR [rsp+0x38],eax
0x00ded880: jmp    0x140ded937
0x00ded885: mov    eax,0x2
0x00ded88a: mov    DWORD PTR [rsp+0x38],eax
0x00ded88e: jmp    0x140ded937
0x00ded893: mov    eax,0x4
0x00ded898: mov    DWORD PTR [rsp+0x38],eax
0x00ded89c: jmp    0x140ded937
0x00ded8a1: mov    eax,0x8
0x00ded8a6: mov    DWORD PTR [rsp+0x38],eax
0x00ded8aa: jmp    0x140ded937
0x00ded8af: mov    eax,0x10
0x00ded8b4: mov    DWORD PTR [rsp+0x38],eax
0x00ded8b8: jmp    0x140ded937
0x00ded8ba: mov    eax,0x80
0x00ded8bf: mov    DWORD PTR [rsp+0x38],eax
0x00ded8c3: jmp    0x140ded937
0x00ded8c5: mov    eax,0x100
0x00ded8ca: mov    DWORD PTR [rsp+0x38],eax
0x00ded8ce: jmp    0x140ded937
0x00ded8d0: mov    eax,0x200
0x00ded8d5: mov    DWORD PTR [rsp+0x38],eax
0x00ded8d9: jmp    0x140ded937
0x00ded8db: mov    eax,0x400
0x00ded8e0: mov    DWORD PTR [rsp+0x38],eax
0x00ded8e4: jmp    0x140ded937
0x00ded8e6: mov    eax,0x800
0x00ded8eb: mov    DWORD PTR [rsp+0x38],eax
0x00ded8ef: jmp    0x140ded937
0x00ded8f1: mov    eax,0x1000
0x00ded8f6: mov    DWORD PTR [rsp+0x38],eax
0x00ded8fa: jmp    0x140ded937
0x00ded8fc: mov    eax,0x2000
0x00ded901: mov    DWORD PTR [rsp+0x38],eax
0x00ded905: jmp    0x140ded937
0x00ded907: mov    eax,0x4000
0x00ded90c: mov    DWORD PTR [rsp+0x38],eax
0x00ded910: jmp    0x140ded937
0x00ded912: mov    eax,0x8000
0x00ded917: mov    DWORD PTR [rsp+0x38],eax
0x00ded91b: jmp    0x140ded937
0x00ded91d: mov    eax,0x20
0x00ded922: mov    DWORD PTR [rsp+0x38],eax
0x00ded926: jmp    0x140ded937
0x00ded928: mov    eax,0x40
0x00ded92d: mov    DWORD PTR [rsp+0x38],eax
0x00ded931: jmp    0x140ded937
0x00ded933: mov    eax,DWORD PTR [rsp+0x38]
0x00ded937: test   r8d,eax
0x00ded93a: je     0x140ded93f
0x00ded93c: inc    r14d
0x00ded93f: inc    edx
0x00ded941: cmp    edx,0x10
0x00ded944: jl     0x140ded860
0x00ded94a: xor    r9d,r9d
0x00ded94d: mov    esi,r9d
0x00ded950: movzx  r13d,BYTE PTR [rsp+0x32]
0x00ded956: mov    ebx,DWORD PTR [rsp+0x3c]
0x00ded95a: nop    WORD PTR [rax+rax*1+0x0]
0x00ded960: lea    rdx,[rip+0xffffffffff212699]        # 0x140000000
0x00ded967: cmp    esi,0xf
0x00ded96a: ja     0x140ded9e9
0x00ded96c: movsxd rax,esi
0x00ded96f: mov    ecx,DWORD PTR [rdx+rax*4+0xdefd80]
0x00ded976: add    rcx,rdx
0x00ded979: jmp    rcx
0x00ded97b: mov    ebx,0x1
0x00ded980: jmp    0x140ded9e9
0x00ded982: mov    ebx,0x2
0x00ded987: jmp    0x140ded9e9
0x00ded989: mov    ebx,0x4
0x00ded98e: jmp    0x140ded9e9
0x00ded990: mov    ebx,0x8
0x00ded995: jmp    0x140ded9e9
0x00ded997: mov    ebx,0x10
0x00ded99c: jmp    0x140ded9e9
0x00ded99e: mov    ebx,0x80
0x00ded9a3: jmp    0x140ded9e9
0x00ded9a5: mov    ebx,0x100
0x00ded9aa: jmp    0x140ded9e9
0x00ded9ac: mov    ebx,0x200
0x00ded9b1: jmp    0x140ded9e9
0x00ded9b3: mov    ebx,0x400
0x00ded9b8: jmp    0x140ded9e9
0x00ded9ba: mov    ebx,0x800
0x00ded9bf: jmp    0x140ded9e9
0x00ded9c1: mov    ebx,0x1000
0x00ded9c6: jmp    0x140ded9e9
0x00ded9c8: mov    ebx,0x2000
0x00ded9cd: jmp    0x140ded9e9
0x00ded9cf: mov    ebx,0x4000
0x00ded9d4: jmp    0x140ded9e9
0x00ded9d6: mov    ebx,0x8000
0x00ded9db: jmp    0x140ded9e9
0x00ded9dd: mov    ebx,0x20
0x00ded9e2: jmp    0x140ded9e9
0x00ded9e4: mov    ebx,0x40
0x00ded9e9: test   DWORD PTR [r12+0xb4],ebx
0x00ded9f1: je     0x140dedb38
0x00ded9f7: cmp    ebx,0x100
0x00ded9fd: ja     0x140deda92
0x00deda03: je     0x140deda89
0x00deda09: lea    eax,[rbx-0x1]
0x00deda0c: cmp    eax,0x7f
0x00deda0f: ja     0x140dedb11
0x00deda15: movzx  eax,BYTE PTR [rdx+rax*1+0xdefde4]
0x00deda1d: mov    ecx,DWORD PTR [rdx+rax*4+0xdefdc0]
0x00deda24: add    rcx,rdx
0x00deda27: jmp    rcx
0x00deda29: lea    rdx,[rip+0x948ec0]        # 0x1417368f0 ; literal="glides"
0x00deda30: jmp    0x140dedb09
0x00deda35: lea    rdx,[rip+0x948e4c]        # 0x141736888 ; literal="grace notes"
0x00deda3c: jmp    0x140dedb09
0x00deda41: lea    rdx,[rip+0x948e50]        # 0x141736898 ; literal="mordents"
0x00deda48: jmp    0x140dedb09
0x00deda4d: lea    rdx,[rip+0x948e50]        # 0x1417368a4 ; literal="trills"
0x00deda54: jmp    0x140dedb09
0x00deda59: lea    rdx,[rip+0x948e50]        # 0x1417368b0 ; literal="rapid runs"
0x00deda60: jmp    0x140dedb09
0x00deda65: lea    rdx,[rip+0x948c94]        # 0x141736700 ; literal="locally improvisation"
0x00deda6c: jmp    0x140dedb09
0x00deda71: lea    rdx,[rip+0x949400]        # 0x141736e78 ; literal="melismatic phrasing"
0x00deda78: jmp    0x140dedb09
0x00deda7d: lea    rdx,[rip+0x94940c]        # 0x141736e90 ; literal="syllabic phrasing"
0x00deda84: jmp    0x140dedb09
0x00deda89: lea    rdx,[rip+0x948c88]        # 0x141736718 ; literal="syncopation"
0x00deda90: jmp    0x140dedb09
0x00deda92: cmp    ebx,0x1000
0x00deda98: ja     0x140dedad8
0x00deda9a: je     0x140dedacf
0x00deda9c: cmp    ebx,0x200
0x00dedaa2: je     0x140dedac6
0x00dedaa4: cmp    ebx,0x400
0x00dedaaa: je     0x140dedabd
0x00dedaac: cmp    ebx,0x800
0x00dedab2: jne    0x140dedb11
0x00dedab4: lea    rdx,[rip+0x949385]        # 0x141736e40 ; literal="frequent modulation"
0x00dedabb: jmp    0x140dedb09
0x00dedabd: lea    rdx,[rip+0x948c6c]        # 0x141736730 ; literal="alternation between tension and repose"
0x00dedac4: jmp    0x140dedb09
0x00dedac6: lea    rdx,[rip+0x948c57]        # 0x141736724 ; literal="fills"
0x00dedacd: jmp    0x140dedb09
0x00dedacf: lea    rdx,[rip+0x948e7a]        # 0x141736950 ; literal="arpeggios"
0x00dedad6: jmp    0x140dedb09
0x00dedad8: cmp    ebx,0x2000
0x00dedade: je     0x140dedb02
0x00dedae0: cmp    ebx,0x4000
0x00dedae6: je     0x140dedaf9
0x00dedae8: cmp    ebx,0x8000
0x00dedaee: jne    0x140dedb11
0x00dedaf0: lea    rdx,[rip+0x949361]        # 0x141736e58 ; literal="free adjustment of the beats"
0x00dedaf7: jmp    0x140dedb09
0x00dedaf9: lea    rdx,[rip+0x948e6c]        # 0x14173696c ; literal="legato"
0x00dedb00: jmp    0x140dedb09
0x00dedb02: lea    rdx,[rip+0x948e57]        # 0x141736960 ; literal="staccato"
0x00dedb09: mov    rcx,rdi
0x00dedb0c: call   0x140070b20
0x00dedb11: cmp    r14d,0x3
0x00dedb15: jl     0x140dedb20
0x00dedb17: lea    rdx,[rip+0x8117ea]        # 0x1415ff308 ; literal=", "
0x00dedb1e: jmp    0x140dedb2d
0x00dedb20: cmp    r14d,0x2
0x00dedb24: jne    0x140dedb35
0x00dedb26: lea    rdx,[rip+0x811813]        # 0x1415ff340 ; literal=" and "
0x00dedb2d: mov    rcx,rdi
0x00dedb30: call   0x140070b20
0x00dedb35: dec    r14d
0x00dedb38: inc    esi
0x00dedb3a: cmp    esi,0x10
0x00dedb3d: jl     0x140ded960
0x00dedb43: mov    DWORD PTR [rsp+0x3c],ebx
0x00dedb47: mov    r8d,0x3
0x00dedb4d: lea    rdx,[rip+0x826b2c]        # 0x141614680 ; literal=".  "
0x00dedb54: mov    rcx,rdi
0x00dedb57: call   0x140070fd0
0x00dedb5c: movzx  ebx,BYTE PTR [rsp+0x31]
0x00dedb61: mov    rax,QWORD PTR [r12+0xc8]
0x00dedb69: sub    rax,QWORD PTR [r12+0xc0]
0x00dedb71: sar    rax,0x3
0x00dedb75: test   rax,rax
0x00dedb78: je     0x140dee0db
0x00dedb7e: mov    rcx,rdi
0x00dedb81: test   r13b,r13b
0x00dedb84: je     0x140dedbaa
0x00dedb86: cmp    DWORD PTR [r12+0x10],0x2
0x00dedb8c: jl     0x140dedb9c
0x00dedb8e: lea    rdx,[rip+0x94874b]        # 0x1417362e0 ; literal="Each passage"
0x00dedb95: call   0x140070b20
0x00dedb9a: jmp    0x140dedbb6
0x00dedb9c: lea    rdx,[rip+0x9487d5]        # 0x141736378 ; literal="The passage"
0x00dedba3: call   0x140070b20
0x00dedba8: jmp    0x140dedbb6
0x00dedbaa: lea    rdx,[rbp+0x1b0]
0x00dedbb1: call   0x1400bb2d0
0x00dedbb6: lea    rdx,[rip+0x949203]        # 0x141736dc0 ; literal=" should "
0x00dedbbd: mov    rcx,rdi
0x00dedbc0: call   0x140070b20
0x00dedbc5: lea    rcx,[r12+0xc0]
0x00dedbcd: call   0x140070410
0x00dedbd2: mov    r15,rax
0x00dedbd5: mov    QWORD PTR [rbp-0x50],rax
0x00dedbd9: lea    rdx,[rbp-0x58]
0x00dedbdd: lea    rcx,[r12+0xc0]
0x00dedbe5: call   0x140070800
0x00dedbea: lea    rdx,[rbp+0x40]
0x00dedbee: lea    rcx,[r12+0xc0]
0x00dedbf6: call   0x1400707f0
0x00dedbfb: mov    r13d,0x1
0x00dedc01: mov    rcx,QWORD PTR [rbp-0x58]
0x00dedc05: cmp    rcx,QWORD PTR [rbp+0x40]
0x00dedc09: je     0x140dee0cb
0x00dedc0f: mov    eax,r13d
0x00dedc12: mov    r14d,0xff
0x00dedc18: cmovb  eax,r14d
0x00dedc1c: test   al,al
0x00dedc1e: jns    0x140dee0cb
0x00dedc24: lea    rcx,[rbp-0x58]
0x00dedc28: call   0x1400703d0
0x00dedc2d: mov    rcx,QWORD PTR [rax]
0x00dedc30: mov    edx,DWORD PTR [rcx+0x4]
0x00dedc33: test   edx,edx
0x00dedc35: je     0x140dedc53
0x00dedc37: sub    edx,0x1
0x00dedc3a: je     0x140dedc4a
0x00dedc3c: cmp    edx,0x1
0x00dedc3f: jne    0x140dedc62
0x00dedc41: lea    rdx,[rip+0x948c08]        # 0x141736850 ; literal="sometimes"
0x00dedc48: jmp    0x140dedc5a
0x00dedc4a: lea    rdx,[rip+0x947f8b]        # 0x141735bdc ; literal="often"
0x00dedc51: jmp    0x140dedc5a
0x00dedc53: lea    rdx,[rip+0x947f7a]        # 0x141735bd4 ; literal="always"
0x00dedc5a: mov    rcx,rdi
0x00dedc5d: call   0x140070b20
0x00dedc62: lea    rdx,[rip+0x948bf7]        # 0x141736860 ; literal=" include a "
0x00dedc69: mov    rcx,rdi
0x00dedc6c: call   0x140070b20
0x00dedc71: lea    rcx,[rbp-0x58]
0x00dedc75: call   0x1400703d0
0x00dedc7a: mov    rcx,QWORD PTR [rax]
0x00dedc7d: mov    edx,DWORD PTR [rcx]
0x00dedc7f: test   edx,edx
0x00dedc81: je     0x140dedcad
0x00dedc83: sub    edx,0x1
0x00dedc86: je     0x140dedca4
0x00dedc88: sub    edx,0x1
0x00dedc8b: je     0x140dedc9b
0x00dedc8d: cmp    edx,0x1
0x00dedc90: jne    0x140dedcbc
0x00dedc92: lea    rdx,[rip+0x948b7f]        # 0x141736818 ; literal="falling-rising"
0x00dedc99: jmp    0x140dedcb4
0x00dedc9b: lea    rdx,[rip+0x948bd6]        # 0x141736878 ; literal="rising-falling"
0x00dedca2: jmp    0x140dedcb4
0x00dedca4: lea    rdx,[rip+0x82691d]        # 0x1416145c8 ; literal="falling"
0x00dedcab: jmp    0x140dedcb4
0x00dedcad: lea    rdx,[rip+0x948bb8]        # 0x14173686c ; literal="rising"
0x00dedcb4: mov    rcx,rdi
0x00dedcb7: call   0x140070b20
0x00dedcbc: lea    rdx,[rip+0x948b65]        # 0x141736828 ; literal=" melody pattern"
0x00dedcc3: mov    rcx,rdi
0x00dedcc6: call   0x140070b20
0x00dedccb: lea    rcx,[rbp-0x58]
0x00dedccf: call   0x1400703d0
0x00dedcd4: mov    rcx,QWORD PTR [rax]
0x00dedcd7: add    rcx,0x8
0x00dedcdb: call   0x140070410
0x00dedce0: test   rax,rax
0x00dedce3: je     0x140dedea3
0x00dedce9: lea    rdx,[rip+0x816af8]        # 0x1416047e8 ; literal=" with "
0x00dedcf0: mov    rcx,rdi
0x00dedcf3: call   0x140070b20
0x00dedcf8: lea    rcx,[rbp-0x58]
0x00dedcfc: call   0x1400703d0
0x00dedd01: mov    rcx,QWORD PTR [rax]
0x00dedd04: add    rcx,0x8
0x00dedd08: call   0x140070410
0x00dedd0d: mov    rsi,rax
0x00dedd10: lea    rcx,[rbp-0x58]
0x00dedd14: call   0x1400703d0
0x00dedd19: mov    rcx,QWORD PTR [rax]
0x00dedd1c: add    rcx,0x8
0x00dedd20: lea    rdx,[rsp+0x58]
0x00dedd25: call   0x140070800
0x00dedd2a: lea    rcx,[rbp-0x58]
0x00dedd2e: call   0x1400703d0
0x00dedd33: mov    rcx,QWORD PTR [rax]
0x00dedd36: add    rcx,0x8
0x00dedd3a: lea    rdx,[rbp-0x18]
0x00dedd3e: call   0x1400707f0
0x00dedd43: mov    rax,QWORD PTR [rsp+0x58]
0x00dedd48: cmp    rax,QWORD PTR [rbp-0x18]
0x00dedd4c: jne    0x140dedd52
0x00dedd4e: xor    dl,dl
0x00dedd50: jmp    0x140dedd59
0x00dedd52: mov    edx,r13d
0x00dedd55: cmovb  edx,r14d
0x00dedd59: test   dl,dl
0x00dedd5b: jns    0x140dedea3
0x00dedd61: lea    rcx,[rsp+0x58]
0x00dedd66: call   0x1400703d0
0x00dedd6b: mov    rcx,QWORD PTR [rax]
0x00dedd6e: test   BYTE PTR [rcx+0x4],0x2
0x00dedd72: je     0x140dedd83
0x00dedd74: lea    rdx,[rip+0x8b2305]        # 0x1416a0080 ; literal="flattened"
0x00dedd7b: mov    rcx,rdi
0x00dedd7e: call   0x140070b20
0x00dedd83: lea    rcx,[rsp+0x58]
0x00dedd88: call   0x1400703d0
0x00dedd8d: mov    rcx,QWORD PTR [rax]
0x00dedd90: test   BYTE PTR [rcx+0x4],0x4
0x00dedd94: je     0x140dedda5
0x00dedd96: lea    rdx,[rip+0x948a9b]        # 0x141736838 ; literal="sharpened"
0x00dedd9d: mov    rcx,rdi
0x00dedda0: call   0x140070b20
0x00dedda5: lea    rdx,[rip+0x810bc0]        # 0x1415fe96c ; literal=" "
0x00deddac: mov    rcx,rdi
0x00deddaf: call   0x140070b20
0x00deddb4: nop
0x00deddb5: movzx  edx,bl
0x00deddb8: lea    rcx,[rbp+0x1d0]
0x00deddbf: call   0x140069750
0x00deddc4: lea    rcx,[rbp+0x1d0]
0x00deddcb: call   0x140071140
0x00deddd0: nop
0x00deddd1: mov    rax,QWORD PTR [rsp+0x58]
0x00deddd6: mov    rcx,QWORD PTR [rax]
0x00deddd9: xor    r8d,r8d
0x00dedddc: lea    rdx,[rbp+0x1d0]
0x00dedde3: mov    ecx,DWORD PTR [rcx]
0x00dedde5: call   0x140545850
0x00deddea: lea    rcx,[rbp+0x1d0]
0x00deddf1: call   0x140543d60
0x00deddf6: lea    rdx,[rbp+0x1d0]
0x00deddfd: mov    rcx,rdi
0x00dede00: call   0x1400bb2d0
0x00dede05: lea    rdx,[rip+0x948a3c]        # 0x141736848 ; literal=" degree"
0x00dede0c: mov    rcx,rdi
0x00dede0f: call   0x140070b20
0x00dede14: lea    rcx,[rbp-0x58]
0x00dede18: call   0x1400703d0
0x00dede1d: mov    rcx,QWORD PTR [rax]
0x00dede20: cmp    DWORD PTR [rcx],0x2
0x00dede23: je     0x140dede36
0x00dede25: lea    rcx,[rbp-0x58]
0x00dede29: call   0x1400703d0
0x00dede2e: mov    rcx,QWORD PTR [rax]
0x00dede31: cmp    DWORD PTR [rcx],0x3
0x00dede34: jne    0x140dede5f
0x00dede36: lea    rcx,[rsp+0x58]
0x00dede3b: call   0x1400703d0
0x00dede40: mov    rcx,QWORD PTR [rax]
0x00dede43: test   BYTE PTR [rcx+0x4],0x1
0x00dede47: mov    rcx,rdi
0x00dede4a: lea    rdx,[rip+0x948a6f]        # 0x1417368c0 ; literal=" on the rise"
0x00dede51: jne    0x140dede5a
0x00dede53: lea    rdx,[rip+0x948a76]        # 0x1417368d0 ; literal=" on the fall"
0x00dede5a: call   0x140070b20
0x00dede5f: cmp    esi,0x3
0x00dede62: jl     0x140dede6d
0x00dede64: lea    rdx,[rip+0x81149d]        # 0x1415ff308 ; literal=", "
0x00dede6b: jmp    0x140dede79
0x00dede6d: cmp    esi,0x2
0x00dede70: jne    0x140dede82
0x00dede72: lea    rdx,[rip+0x8114c7]        # 0x1415ff340 ; literal=" and "
0x00dede79: mov    rcx,rdi
0x00dede7c: call   0x140070b20
0x00dede81: nop
0x00dede82: lea    rcx,[rbp+0x1d0]
0x00dede89: call   0x1400693f0
0x00dede8e: mov    rax,QWORD PTR [rsp+0x58]
0x00dede93: add    rax,0x8
0x00dede97: mov    QWORD PTR [rsp+0x58],rax
0x00dede9c: dec    esi
0x00dede9e: jmp    0x140dedd48
0x00dedea3: mov    rax,QWORD PTR [rbp-0x58]
0x00dedea7: mov    rcx,QWORD PTR [rax]
0x00dedeaa: cmp    DWORD PTR [rcx+0x20],0x0
0x00dedeae: je     0x140dee092
0x00dedeb4: lea    rcx,[rbp-0x58]
0x00dedeb8: call   0x1400703d0
0x00dedebd: mov    rcx,QWORD PTR [rax]
0x00dedec0: add    rcx,0x8
0x00dedec4: call   0x140070410
0x00dedec9: mov    rcx,rdi
0x00dedecc: test   rax,rax
0x00dedecf: lea    rdx,[rip+0x948a0a]        # 0x1417368e0 ; literal=" as well as "
0x00deded6: jne    0x140dededf
0x00deded8: lea    rdx,[rip+0x816909]        # 0x1416047e8 ; literal=" with "
0x00dededf: call   0x140070b20
0x00dedee4: xor    r12d,r12d
0x00dedee7: mov    r14d,r12d
0x00dedeea: mov    esi,r12d
0x00dedeed: mov    edi,DWORD PTR [rsp+0x64]
0x00dedef1: lea    r15,[rip+0xffffffffff212108]        # 0x140000000
0x00dedef8: cmp    esi,0x7
0x00dedefb: ja     0x140dedf41
0x00dedefd: movsxd rax,esi
0x00dedf00: mov    ecx,DWORD PTR [r15+rax*4+0xdefe64]
0x00dedf08: add    rcx,r15
0x00dedf0b: jmp    rcx
0x00dedf0d: mov    edi,r13d
0x00dedf10: jmp    0x140dedf41
0x00dedf12: mov    edi,0x2
0x00dedf17: jmp    0x140dedf41
0x00dedf19: mov    edi,0x4
0x00dedf1e: jmp    0x140dedf41
0x00dedf20: mov    edi,0x8
0x00dedf25: jmp    0x140dedf41
0x00dedf27: mov    edi,0x10
0x00dedf2c: jmp    0x140dedf41
0x00dedf2e: mov    edi,0x1000
0x00dedf33: jmp    0x140dedf41
0x00dedf35: mov    edi,0x2000
0x00dedf3a: jmp    0x140dedf41
0x00dedf3c: mov    edi,0x4000
0x00dedf41: lea    rcx,[rbp-0x58]
0x00dedf45: call   0x1400703d0
0x00dedf4a: mov    rcx,QWORD PTR [rax]
0x00dedf4d: test   DWORD PTR [rcx+0x20],edi
0x00dedf50: je     0x140dedf55
0x00dedf52: inc    r14d
0x00dedf55: inc    esi
0x00dedf57: cmp    esi,0x8
0x00dedf5a: jl     0x140dedef8
0x00dedf5c: mov    DWORD PTR [rsp+0x64],edi
0x00dedf60: mov    esi,r12d
0x00dedf63: mov    rdi,QWORD PTR [rbp-0x28]
0x00dedf67: mov    r15,QWORD PTR [rbp-0x50]
0x00dedf6b: mov    ebx,DWORD PTR [rsp+0x60]
0x00dedf6f: nop
0x00dedf70: cmp    esi,0x7
0x00dedf73: ja     0x140dedfbf
0x00dedf75: movsxd rax,esi
0x00dedf78: lea    rdx,[rip+0xffffffffff212081]        # 0x140000000
0x00dedf7f: mov    ecx,DWORD PTR [rdx+rax*4+0xdefe84]
0x00dedf86: add    rcx,rdx
0x00dedf89: jmp    rcx
0x00dedf8b: mov    ebx,r13d
0x00dedf8e: jmp    0x140dedfbf
0x00dedf90: mov    ebx,0x2
0x00dedf95: jmp    0x140dedfbf
0x00dedf97: mov    ebx,0x4
0x00dedf9c: jmp    0x140dedfbf
0x00dedf9e: mov    ebx,0x8
0x00dedfa3: jmp    0x140dedfbf
0x00dedfa5: mov    ebx,0x10
0x00dedfaa: jmp    0x140dedfbf
0x00dedfac: mov    ebx,0x1000
0x00dedfb1: jmp    0x140dedfbf
0x00dedfb3: mov    ebx,0x2000
0x00dedfb8: jmp    0x140dedfbf
0x00dedfba: mov    ebx,0x4000
0x00dedfbf: lea    rcx,[rbp-0x58]
0x00dedfc3: call   0x1400703d0
0x00dedfc8: mov    rcx,QWORD PTR [rax]
0x00dedfcb: test   DWORD PTR [rcx+0x20],ebx
0x00dedfce: je     0x140dee07e
0x00dedfd4: cmp    ebx,0x10
0x00dedfd7: ja     0x140dee01e
0x00dedfd9: je     0x140dee015
0x00dedfdb: mov    eax,ebx
0x00dedfdd: sub    eax,0x1
0x00dedfe0: je     0x140dee00c
0x00dedfe2: sub    eax,0x1
0x00dedfe5: je     0x140dee003
0x00dedfe7: sub    eax,0x2
0x00dedfea: je     0x140dedffa
0x00dedfec: cmp    eax,0x4
0x00dedfef: jne    0x140dee057
0x00dedff1: lea    rdx,[rip+0x9488ac]        # 0x1417368a4 ; literal="trills"
0x00dedff8: jmp    0x140dee04f
0x00dedffa: lea    rdx,[rip+0x948897]        # 0x141736898 ; literal="mordents"
0x00dee001: jmp    0x140dee04f
0x00dee003: lea    rdx,[rip+0x94887e]        # 0x141736888 ; literal="grace notes"
0x00dee00a: jmp    0x140dee04f
0x00dee00c: lea    rdx,[rip+0x9488dd]        # 0x1417368f0 ; literal="glides"
0x00dee013: jmp    0x140dee04f
0x00dee015: lea    rdx,[rip+0x948894]        # 0x1417368b0 ; literal="rapid runs"
0x00dee01c: jmp    0x140dee04f
0x00dee01e: cmp    ebx,0x1000
0x00dee024: je     0x140dee048
0x00dee026: cmp    ebx,0x2000
0x00dee02c: je     0x140dee03f
0x00dee02e: cmp    ebx,0x4000
0x00dee034: jne    0x140dee057
0x00dee036: lea    rdx,[rip+0x94892f]        # 0x14173696c ; literal="legato"
0x00dee03d: jmp    0x140dee04f
0x00dee03f: lea    rdx,[rip+0x94891a]        # 0x141736960 ; literal="staccato"
0x00dee046: jmp    0x140dee04f
0x00dee048: lea    rdx,[rip+0x948901]        # 0x141736950 ; literal="arpeggios"
0x00dee04f: mov    rcx,rdi
0x00dee052: call   0x140070b20
0x00dee057: cmp    r14d,0x3
0x00dee05b: jl     0x140dee066
0x00dee05d: lea    rdx,[rip+0x8112a4]        # 0x1415ff308 ; literal=", "
0x00dee064: jmp    0x140dee073
0x00dee066: cmp    r14d,0x2
0x00dee06a: jne    0x140dee07b
0x00dee06c: lea    rdx,[rip+0x8112cd]        # 0x1415ff340 ; literal=" and "
0x00dee073: mov    rcx,rdi
0x00dee076: call   0x140070b20
0x00dee07b: dec    r14d
0x00dee07e: inc    esi
0x00dee080: cmp    esi,0x8
0x00dee083: jl     0x140dedf70
0x00dee089: mov    DWORD PTR [rsp+0x60],ebx
0x00dee08d: movzx  ebx,BYTE PTR [rsp+0x31]
0x00dee092: cmp    r15d,0x3
0x00dee096: jl     0x140dee0a1
0x00dee098: lea    rdx,[rip+0x811269]        # 0x1415ff308 ; literal=", "
0x00dee09f: jmp    0x140dee0ae
0x00dee0a1: cmp    r15d,0x2
0x00dee0a5: jne    0x140dee0b6
0x00dee0a7: lea    rdx,[rip+0x811292]        # 0x1415ff340 ; literal=" and "
0x00dee0ae: mov    rcx,rdi
0x00dee0b1: call   0x140070b20
0x00dee0b6: lea    rcx,[rbp-0x58]
0x00dee0ba: call   0x1400703c0
0x00dee0bf: dec    r15d
0x00dee0c2: mov    QWORD PTR [rbp-0x50],r15
0x00dee0c6: jmp    0x140dedc01
0x00dee0cb: lea    rdx,[rip+0x8265ae]        # 0x141614680 ; literal=".  "
0x00dee0d2: mov    rcx,rdi
0x00dee0d5: call   0x140070b20
0x00dee0da: nop
0x00dee0db: lea    rcx,[rbp+0x1b0]
0x00dee0e2: call   0x140070e10
0x00dee0e7: mov    rcx,QWORD PTR [rbp-0x30]
0x00dee0eb: add    rcx,0x8
0x00dee0ef: jmp    0x140debe66
0x00dee0f4: lea    rcx,[rbp+0x88]
0x00dee0fb: call   0x1400670c0
0x00dee100: nop
0x00dee101: mov    esi,0xffffffff
0x00dee106: mov    DWORD PTR [rbp-0x5c],esi
0x00dee109: mov    r12,QWORD PTR [rbp-0x38]
0x00dee10d: lea    rcx,[r12+0x88]
0x00dee115: call   0x140070410
0x00dee11a: cmp    eax,esi
0x00dee11c: jle    0x140deebc0
0x00dee122: lea    r14,[r12+0x88]
0x00dee12a: mov    QWORD PTR [rbp-0x20],r14
0x00dee12e: movzx  ebx,BYTE PTR [rsp+0x4a]
0x00dee133: cmp    esi,0xffffffff
0x00dee136: jne    0x140dee142
0x00dee138: mov    r12d,DWORD PTR [r12+0xfc]
0x00dee140: jmp    0x140dee154
0x00dee142: movsxd rdx,esi
0x00dee145: mov    rcx,r14
0x00dee148: call   0x1400707e0
0x00dee14d: mov    rcx,QWORD PTR [rax]
0x00dee150: mov    r12d,DWORD PTR [rcx+0x1c]
0x00dee154: mov    DWORD PTR [rbp-0x80],r12d
0x00dee158: cmp    r12d,0xffffffff
0x00dee15c: je     0x140deeba7
0x00dee162: lea    rdx,[rbp+0x88]
0x00dee169: mov    ecx,r12d
0x00dee16c: call   0x1400bb530
0x00dee171: cmp    eax,0xffffffff
0x00dee174: jne    0x140deeba7
0x00dee17a: lea    rdx,[rbp+0x88]
0x00dee181: mov    ecx,r12d
0x00dee184: call   0x1400bb430
0x00dee189: mov    edx,r12d
0x00dee18c: lea    rcx,[rip+0x1716145]        # 0x1425042d8
0x00dee193: call   0x140073b30
0x00dee198: mov    r15,rax
0x00dee19b: test   rax,rax
0x00dee19e: je     0x140deeba7
0x00dee1a4: lea    rdx,[rip+0x825f01]        # 0x1416140ac ; literal="[B]"
0x00dee1ab: mov    rcx,rdi
0x00dee1ae: call   0x140070b20
0x00dee1b3: mov    eax,DWORD PTR [r15+0x8]
0x00dee1b7: test   eax,eax
0x00dee1b9: je     0x140dee31d
0x00dee1bf: sub    eax,0x1
0x00dee1c2: je     0x140dee224
0x00dee1c4: cmp    eax,0x1
0x00dee1c7: jne    0x140dee374
0x00dee1cd: lea    rdx,[rip+0x948e3c]        # 0x141737010 ; literal="Scales are conceived of as two chords built using a division of the perfect fourth interval into "
0x00dee1d4: mov    rcx,rdi
0x00dee1d7: call   0x140070b20
0x00dee1dc: lea    rcx,[rbp+0x190]
0x00dee1e3: call   0x140070c50
0x00dee1e8: nop
0x00dee1e9: lea    rdx,[rbp+0x190]
0x00dee1f0: mov    ecx,DWORD PTR [r15+0x70]
0x00dee1f4: call   0x140545040
0x00dee1f9: lea    rdx,[rbp+0x190]
0x00dee200: mov    rcx,rdi
0x00dee203: call   0x1400bb2d0
0x00dee208: lea    rdx,[rip+0x948e69]        # 0x141737078 ; literal=" notes.  "
0x00dee20f: mov    rcx,rdi
0x00dee212: call   0x140070b20
0x00dee217: nop
0x00dee218: lea    rcx,[rbp+0x190]
0x00dee21f: jmp    0x140dee36f
0x00dee224: lea    rdx,[rip+0x948ba5]        # 0x141736dd0 ; literal="Scales are constructed from "
0x00dee22b: mov    rcx,rdi
0x00dee22e: call   0x140070b20
0x00dee233: lea    rcx,[rbp+0x210]
0x00dee23a: call   0x140070c50
0x00dee23f: nop
0x00dee240: lea    rdx,[rbp+0x210]
0x00dee247: mov    ecx,DWORD PTR [r15+0x70]
0x00dee24b: call   0x140545040
0x00dee250: lea    rdx,[rbp+0x210]
0x00dee257: mov    rcx,rdi
0x00dee25a: call   0x1400bb2d0
0x00dee25f: lea    rdx,[rip+0x948bba]        # 0x141736e20 ; literal=" notes dividing the octave.  "
0x00dee266: mov    rcx,rdi
0x00dee269: call   0x140070b20
0x00dee26e: lea    rdx,[rip+0x948d13]        # 0x141736f88 ; literal="In quartertones, their spacing is roughly "
0x00dee275: mov    rcx,rdi
0x00dee278: call   0x140070b20
0x00dee27d: movdqa xmm0,XMMWORD PTR [rip+0x9b906b]        # 0x1417a72f0
0x00dee285: movups XMMWORD PTR [rbp+0x240],xmm0
0x00dee28c: movq   QWORD PTR [rbp+0x250],xmm0
0x00dee294: mov    BYTE PTR [rbp+0x240],0x31
0x00dee29b: mov    BYTE PTR [rbp+0x258],0x4f
0x00dee2a2: movsxd rdx,DWORD PTR [r15+0x70]
0x00dee2a6: cmp    rdx,0x1
0x00dee2aa: jle    0x140dee2d5
0x00dee2ac: lea    rcx,[r15+0x10]
0x00dee2b0: dec    rdx
0x00dee2b3: nop    DWORD PTR [rax+0x0]
0x00dee2b7: nop    WORD PTR [rax+rax*1+0x0]
0x00dee2c0: movsxd rax,DWORD PTR [rcx]
0x00dee2c3: mov    BYTE PTR [rbp+rax*1+0x240],0x78
0x00dee2cb: lea    rcx,[rcx+0x4]
0x00dee2cf: sub    rdx,0x1
0x00dee2d3: jne    0x140dee2c0
0x00dee2d5: xor    r13d,r13d
0x00dee2d8: mov    esi,r13d
0x00dee2db: nop    DWORD PTR [rax+rax*1+0x0]
0x00dee2e0: movzx  edx,BYTE PTR [rbp+rsi*1+0x240]
0x00dee2e8: mov    rcx,rdi
0x00dee2eb: call   0x1400bb140
0x00dee2f0: inc    rsi
0x00dee2f3: cmp    rsi,0x19
0x00dee2f7: jl     0x140dee2e0
0x00dee2f9: mov    r8d,0x45
0x00dee2ff: lea    rdx,[rip+0x948cba]        # 0x141736fc0 ; literal=", where 1 is the tonic, O marks the octave and x marks other notes.  "
0x00dee306: mov    rcx,rdi
0x00dee309: call   0x140070fd0
0x00dee30e: nop
0x00dee30f: lea    rcx,[rbp+0x210]
0x00dee316: call   0x140070e10
0x00dee31b: jmp    0x140dee377
0x00dee31d: lea    rdx,[rip+0x948aac]        # 0x141736dd0 ; literal="Scales are constructed from "
0x00dee324: mov    rcx,rdi
0x00dee327: call   0x140070b20
0x00dee32c: lea    rcx,[rbp+0x210]
0x00dee333: call   0x140070c50
0x00dee338: nop
0x00dee339: lea    rdx,[rbp+0x210]
0x00dee340: mov    ecx,DWORD PTR [r15+0x70]
0x00dee344: call   0x140545040
0x00dee349: lea    rdx,[rbp+0x210]
0x00dee350: mov    rcx,rdi
0x00dee353: call   0x1400bb2d0
0x00dee358: lea    rdx,[rip+0x948a91]        # 0x141736df0 ; literal=" notes spaced evenly throughout the octave.  "
0x00dee35f: mov    rcx,rdi
0x00dee362: call   0x140070b20
0x00dee367: nop
0x00dee368: lea    rcx,[rbp+0x210]
0x00dee36f: call   0x1400693f0
0x00dee374: xor    r13d,r13d
0x00dee377: mov    rcx,rdi
0x00dee37a: test   BYTE PTR [r15+0x4],0x1
0x00dee37f: lea    rdx,[rip+0x948b22]        # 0x141736ea8 ; literal="The tonic note is fixed only at the time of performance.  "
0x00dee386: jne    0x140dee38f
0x00dee388: lea    rdx,[rip+0x948b61]        # 0x141736ef0 ; literal="The tonic note is a fixed tone passed from teacher to student.  "
0x00dee38f: call   0x140070b20
0x00dee394: mov    ecx,DWORD PTR [r15+0xa8]
0x00dee39b: cmp    ecx,0xffffffff
0x00dee39e: je     0x140dee555
0x00dee3a4: mov    edx,DWORD PTR [r15+0x754]
0x00dee3ab: test   edx,edx
0x00dee3ad: jle    0x140dee555
0x00dee3b3: test   ecx,ecx
0x00dee3b5: je     0x140dee3f2
0x00dee3b7: sub    ecx,0x1
0x00dee3ba: je     0x140dee3d8
0x00dee3bc: sub    ecx,0x1
0x00dee3bf: je     0x140dee3cf
0x00dee3c1: cmp    ecx,0x1
0x00dee3c4: jne    0x140dee401
0x00dee3c6: lea    rdx,[rip+0x948d83]        # 0x141737150 ; literal="After a scale is constructed, the root note of chords are named.  "
0x00dee3cd: jmp    0x140dee3f9
0x00dee3cf: lea    rdx,[rip+0x948d2a]        # 0x141737100 ; literal="After a scale is constructed, notes are named according to degree.  "
0x00dee3d6: jmp    0x140dee3f9
0x00dee3d8: mov    rcx,rdi
0x00dee3db: cmp    edx,0x1
0x00dee3de: jne    0x140dee3e9
0x00dee3e0: lea    rdx,[rip+0x948b69]        # 0x141736f50 ; literal="A single note in the fundamental scale is named.  "
0x00dee3e7: jmp    0x140dee3fc
0x00dee3e9: lea    rdx,[rip+0x948cd0]        # 0x1417370c0 ; literal="Preferred notes in the fundamental scale are named.  "
0x00dee3f0: jmp    0x140dee3fc
0x00dee3f2: lea    rdx,[rip+0x948b3f]        # 0x141736f38 ; literal="Every note is named.  "
0x00dee3f9: mov    rcx,rdi
0x00dee3fc: call   0x140070b20
0x00dee401: mov    rcx,rdi
0x00dee404: cmp    DWORD PTR [r15+0x754],0x1
0x00dee40c: lea    rdx,[rip+0x948d85]        # 0x141737198 ; literal="It is called "
0x00dee413: je     0x140dee41c
0x00dee415: lea    rdx,[rip+0x948c6c]        # 0x141737088 ; literal="The names are "
0x00dee41c: call   0x140070b20
0x00dee421: mov    esi,r13d
0x00dee424: cmp    DWORD PTR [r15+0x754],0x0
0x00dee42c: jle    0x140dee546
0x00dee432: lea    r12,[r15+0x6f0]
0x00dee439: nop    DWORD PTR [rax+0x0]
0x00dee440: movsxd r14,esi
0x00dee443: shl    r14,0x5
0x00dee447: lea    rdx,[r14+0xb0]
0x00dee44e: add    rdx,r15
0x00dee451: mov    rcx,rdi
0x00dee454: call   0x1400bb2d0
0x00dee459: lea    rdx,[rip+0x83db90]        # 0x14162bff0 ; literal=" ("
0x00dee460: mov    rcx,rdi
0x00dee463: call   0x140070b20
0x00dee468: test   esi,esi
0x00dee46a: jne    0x140dee47b
0x00dee46c: lea    rdx,[rip+0x948c25]        # 0x141737098 ; literal="spoken "
0x00dee473: mov    rcx,rdi
0x00dee476: call   0x140070b20
0x00dee47b: lea    rdx,[r15+0x3d0]
0x00dee482: add    rdx,r14
0x00dee485: mov    rcx,rdi
0x00dee488: call   0x1400bb2d0
0x00dee48d: cmp    DWORD PTR [r15+0xa8],0x1
0x00dee495: jne    0x140dee4e2
0x00dee497: lea    rdx,[rip+0x810e6a]        # 0x1415ff308 ; literal=", "
0x00dee49e: mov    rcx,rdi
0x00dee4a1: call   0x140070b20
0x00dee4a6: lea    rcx,[rbp+0x210]
0x00dee4ad: call   0x140070c50
0x00dee4b2: nop
0x00dee4b3: mov    r8b,0x1
0x00dee4b6: lea    rdx,[rbp+0x210]
0x00dee4bd: mov    ecx,DWORD PTR [r12]
0x00dee4c1: call   0x140545850
0x00dee4c6: lea    rdx,[rbp+0x210]
0x00dee4cd: mov    rcx,rdi
0x00dee4d0: call   0x1400bb2d0
0x00dee4d5: nop
0x00dee4d6: lea    rcx,[rbp+0x210]
0x00dee4dd: call   0x1400693f0
0x00dee4e2: lea    rdx,[rip+0x83db47]        # 0x14162c030 ; literal=")"
0x00dee4e9: mov    rcx,rdi
0x00dee4ec: call   0x140070b20
0x00dee4f1: mov    eax,DWORD PTR [r15+0x754]
0x00dee4f8: sub    eax,0x3
0x00dee4fb: cmp    esi,eax
0x00dee4fd: jg     0x140dee50e
0x00dee4ff: lea    rdx,[rip+0x810e02]        # 0x1415ff308 ; literal=", "
0x00dee506: mov    rcx,rdi
0x00dee509: call   0x140070b20
0x00dee50e: mov    eax,DWORD PTR [r15+0x754]
0x00dee515: sub    eax,0x2
0x00dee518: cmp    esi,eax
0x00dee51a: jne    0x140dee52b
0x00dee51c: lea    rdx,[rip+0x810e1d]        # 0x1415ff340 ; literal=" and "
0x00dee523: mov    rcx,rdi
0x00dee526: call   0x140070b20
0x00dee52b: inc    esi
0x00dee52d: add    r12,0x4
0x00dee531: cmp    esi,DWORD PTR [r15+0x754]
0x00dee538: jl     0x140dee440
0x00dee53e: mov    r14,QWORD PTR [rbp-0x20]
0x00dee542: mov    r12d,DWORD PTR [rbp-0x80]
0x00dee546: lea    rdx,[rip+0x826133]        # 0x141614680 ; literal=".  "
0x00dee54d: mov    rcx,rdi
0x00dee550: call   0x140070b20
0x00dee555: lea    rcx,[rbp+0x1b0]
0x00dee55c: call   0x1400670c0
0x00dee561: nop
0x00dee562: lea    rcx,[rbp+0x1d0]
0x00dee569: call   0x1400670c0
0x00dee56e: nop
0x00dee56f: mov    r13d,0xffffffff
0x00dee575: mov    DWORD PTR [rsp+0x50],r13d
0x00dee57a: mov    rax,QWORD PTR [r14+0x8]
0x00dee57e: sub    rax,QWORD PTR [r14]
0x00dee581: sar    rax,0x3
0x00dee585: cmp    eax,r13d
0x00dee588: jle    0x140deeb8b
0x00dee58e: xchg   ax,ax
0x00dee590: cmp    r13d,0xffffffff
0x00dee594: jne    0x140dee5af
0x00dee596: mov    rax,QWORD PTR [rbp-0x38]
0x00dee59a: cmp    DWORD PTR [rax+0xfc],r12d
0x00dee5a1: jne    0x140deeb6f
0x00dee5a7: mov    esi,DWORD PTR [rax+0x100]
0x00dee5ad: jmp    0x140dee5db
0x00dee5af: movsxd rsi,r13d
0x00dee5b2: mov    rdx,rsi
0x00dee5b5: mov    rcx,r14
0x00dee5b8: call   0x1400707e0
0x00dee5bd: mov    rcx,QWORD PTR [rax]
0x00dee5c0: cmp    DWORD PTR [rcx+0x1c],r12d
0x00dee5c4: jne    0x140deeb6f
0x00dee5ca: mov    rdx,rsi
0x00dee5cd: mov    rcx,r14
0x00dee5d0: call   0x1400707e0
0x00dee5d5: mov    rcx,QWORD PTR [rax]
0x00dee5d8: mov    esi,DWORD PTR [rcx+0x20]
0x00dee5db: cmp    esi,0xffffffff
0x00dee5de: je     0x140deeb6f
0x00dee5e4: lea    rdx,[rbp+0x1b0]
0x00dee5eb: mov    ecx,esi
0x00dee5ed: call   0x1400bb530
0x00dee5f2: cmp    eax,0xffffffff
0x00dee5f5: jne    0x140deeb6f
0x00dee5fb: lea    rdx,[rbp+0x1b0]
0x00dee602: mov    ecx,esi
0x00dee604: call   0x1400bb430
0x00dee609: lea    rcx,[r15+0x90]
0x00dee610: movsxd rdx,esi
0x00dee613: call   0x1400707e0
0x00dee618: mov    r14,QWORD PTR [rax]
0x00dee61b: lea    rdx,[rip+0x825a8a]        # 0x1416140ac ; literal="[B]"
0x00dee622: mov    rcx,rdi
0x00dee625: call   0x140070b20
0x00dee62a: mov    rcx,rdi
0x00dee62d: cmp    DWORD PTR [r15+0x8],0x2
0x00dee632: lea    rdx,[rip+0x948a67]        # 0x1417370a0 ; literal="As always, the "
0x00dee639: je     0x140dee642
0x00dee63b: lea    rdx,[rip+0x8155f2]        # 0x141603c34 ; literal="The "
0x00dee642: call   0x140070b20
0x00dee647: lea    rdx,[r14+0x8]
0x00dee64b: mov    rcx,rdi
0x00dee64e: call   0x1400bb2d0
0x00dee653: cmp    DWORD PTR [r14],0x0
0x00dee657: jne    0x140dee65f
0x00dee659: mov    r12d,DWORD PTR [r14+0x44]
0x00dee65d: jmp    0x140dee6a7
0x00dee65f: movsxd rax,DWORD PTR [r14+0x48]
0x00dee663: cmp    eax,0xffffffff
0x00dee666: je     0x140dee6dc
0x00dee668: cmp    DWORD PTR [r14+0x4c],0xffffffff
0x00dee66d: je     0x140dee6dc
0x00dee66f: mov    rdx,rax
0x00dee672: lea    rcx,[r15+0x78]
0x00dee676: call   0x1400707e0
0x00dee67b: mov    rdx,QWORD PTR [rax]
0x00dee67e: mov    r12d,DWORD PTR [rdx+0x34]
0x00dee682: movsxd rdx,DWORD PTR [r14+0x4c]
0x00dee686: lea    rcx,[r15+0x78]
0x00dee68a: call   0x1400707e0
0x00dee68f: xor    ecx,ecx
0x00dee691: mov    edx,ecx
0x00dee693: cmp    DWORD PTR [r14],0x1
0x00dee697: sete   dl
0x00dee69a: inc    edx
0x00dee69c: mov    rax,QWORD PTR [rax]
0x00dee69f: mov    ecx,DWORD PTR [rax+0x34]
0x00dee6a2: sub    ecx,edx
0x00dee6a4: add    r12d,ecx
0x00dee6a7: lea    rdx,[rip+0x8102be]        # 0x1415fe96c ; literal=" "
0x00dee6ae: mov    rcx,rdi
0x00dee6b1: call   0x140070b20
0x00dee6b6: sub    r12d,0x5
0x00dee6ba: je     0x140dee6d3
0x00dee6bc: sub    r12d,0x1
0x00dee6c0: je     0x140dee6ca
0x00dee6c2: cmp    r12d,0x1
0x00dee6c6: je     0x140dee6eb
0x00dee6c8: jmp    0x140dee6fa
0x00dee6ca: lea    rdx,[rip+0x948c2f]        # 0x141737300 ; literal="hexatonic"
0x00dee6d1: jmp    0x140dee6f2
0x00dee6d3: lea    rdx,[rip+0x9489d6]        # 0x1417370b0 ; literal="pentatonic"
0x00dee6da: jmp    0x140dee6f2
0x00dee6dc: lea    rdx,[rip+0x810289]        # 0x1415fe96c ; literal=" "
0x00dee6e3: mov    rcx,rdi
0x00dee6e6: call   0x140070b20
0x00dee6eb: lea    rdx,[rip+0x948c1e]        # 0x141737310 ; literal="heptatonic"
0x00dee6f2: mov    rcx,rdi
0x00dee6f5: call   0x140070b20
0x00dee6fa: lea    rdx,[rip+0x948c1f]        # 0x141737320 ; literal=" scale is "
0x00dee701: mov    rcx,rdi
0x00dee704: call   0x140070b20
0x00dee709: mov    ecx,DWORD PTR [r14]
0x00dee70c: test   ecx,ecx
0x00dee70e: je     0x140dee794
0x00dee714: sub    ecx,0x1
0x00dee717: je     0x140dee780
0x00dee719: sub    ecx,0x1
0x00dee71c: je     0x140dee76c
0x00dee71e: sub    ecx,0x1
0x00dee721: je     0x140dee758
0x00dee723: cmp    ecx,0x1
0x00dee726: jne    0x140dee851
0x00dee72c: mov    rcx,rdi
0x00dee72f: cmp    DWORD PTR [r15+0x8],0x2
0x00dee734: jne    0x140dee747
0x00dee736: lea    rdx,[rip+0x948b63]        # 0x1417372a0 ; literal="thought of as two disjoint chords drawn from the fundamental division of the perfect fourth"
0x00dee73d: call   0x140070b20
0x00dee742: jmp    0x140dee851
0x00dee747: lea    rdx,[rip+0x948caa]        # 0x1417373f8 ; literal="thought of as two disjoint chords spanning two perfect fourths"
0x00dee74e: call   0x140070b20
0x00dee753: jmp    0x140dee851
0x00dee758: lea    rdx,[rip+0x948af1]        # 0x141737250 ; literal="thought of as two disjoint chords spanning a tritone and a perfect fourth"
0x00dee75f: mov    rcx,rdi
0x00dee762: call   0x140070b20
0x00dee767: jmp    0x140dee851
0x00dee76c: lea    rdx,[rip+0x948a8d]        # 0x141737200 ; literal="thought of as two disjoint chords spanning a perfect fifth and a major third"
0x00dee773: mov    rcx,rdi
0x00dee776: call   0x140070b20
0x00dee77b: jmp    0x140dee851
0x00dee780: lea    rdx,[rip+0x948a29]        # 0x1417371b0 ; literal="thought of as joined chords spanning a perfect fifth and a perfect fourth"
0x00dee787: mov    rcx,rdi
0x00dee78a: call   0x140070b20
0x00dee78f: jmp    0x140dee851
0x00dee794: lea    rdx,[rip+0x948b95]        # 0x141737330 ; literal="constructed by selection of degrees from the fundamental scale.  The degrees selected are "
0x00dee79b: mov    rcx,rdi
0x00dee79e: call   0x140070b20
0x00dee7a3: xor    eax,eax
0x00dee7a5: mov    esi,eax
0x00dee7a7: cmp    DWORD PTR [r14+0x44],eax
0x00dee7ab: jle    0x140dee851
0x00dee7b1: lea    r12,[r14+0x28]
0x00dee7b5: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x00dee7c0: lea    rdx,[rip+0x8108b1]        # 0x1415ff078 ; literal="the "
0x00dee7c7: mov    rcx,rdi
0x00dee7ca: call   0x140070b20
0x00dee7cf: lea    rcx,[rbp+0x210]
0x00dee7d6: call   0x140070c50
0x00dee7db: nop
0x00dee7dc: mov    ecx,DWORD PTR [r12]
0x00dee7e0: inc    ecx
0x00dee7e2: mov    r8b,0x1
0x00dee7e5: lea    rdx,[rbp+0x210]
0x00dee7ec: call   0x140545850
0x00dee7f1: lea    rdx,[rbp+0x210]
0x00dee7f8: mov    rcx,rdi
0x00dee7fb: call   0x1400bb2d0
0x00dee800: mov    eax,DWORD PTR [r14+0x44]
0x00dee804: sub    eax,0x3
0x00dee807: cmp    esi,eax
0x00dee809: jg     0x140dee81a
0x00dee80b: lea    rdx,[rip+0x810af6]        # 0x1415ff308 ; literal=", "
0x00dee812: mov    rcx,rdi
0x00dee815: call   0x140070b20
0x00dee81a: mov    eax,DWORD PTR [r14+0x44]
0x00dee81e: sub    eax,0x2
0x00dee821: cmp    esi,eax
0x00dee823: jne    0x140dee835
0x00dee825: lea    rdx,[rip+0x810b14]        # 0x1415ff340 ; literal=" and "
0x00dee82c: mov    rcx,rdi
0x00dee82f: call   0x140070b20
0x00dee834: nop
0x00dee835: lea    rcx,[rbp+0x210]
0x00dee83c: call   0x1400693f0
0x00dee841: inc    esi
0x00dee843: add    r12,0x4
0x00dee847: cmp    esi,DWORD PTR [r14+0x44]
0x00dee84b: jl     0x140dee7c0
0x00dee851: lea    rdx,[rip+0x825e28]        # 0x141614680 ; literal=".  "
0x00dee858: mov    rcx,rdi
0x00dee85b: call   0x140070b20
0x00dee860: cmp    DWORD PTR [r14+0x48],0xffffffff
0x00dee865: je     0x140dee8cb
0x00dee867: cmp    DWORD PTR [r14+0x4c],0xffffffff
0x00dee86c: je     0x140dee8cb
0x00dee86e: lea    rdx,[rip+0x948bc3]        # 0x141737438 ; literal="These chords are named "
0x00dee875: mov    rcx,rdi
0x00dee878: call   0x140070b20
0x00dee87d: movsxd rdx,DWORD PTR [r14+0x48]
0x00dee881: lea    rcx,[r15+0x78]
0x00dee885: call   0x1400707e0
0x00dee88a: mov    rdx,QWORD PTR [rax]
0x00dee88d: mov    rcx,rdi
0x00dee890: call   0x1400bb2d0
0x00dee895: lea    rdx,[rip+0x810aa4]        # 0x1415ff340 ; literal=" and "
0x00dee89c: mov    rcx,rdi
0x00dee89f: call   0x140070b20
0x00dee8a4: movsxd rdx,DWORD PTR [r14+0x4c]
0x00dee8a8: lea    rcx,[r15+0x78]
0x00dee8ac: call   0x1400707e0
0x00dee8b1: mov    rdx,QWORD PTR [rax]
0x00dee8b4: mov    rcx,rdi
0x00dee8b7: call   0x1400bb2d0
0x00dee8bc: lea    rdx,[rip+0x825dbd]        # 0x141614680 ; literal=".  "
0x00dee8c3: mov    rcx,rdi
0x00dee8c6: call   0x140070b20
0x00dee8cb: lea    rcx,[rbp+0x240]
0x00dee8d2: call   0x1400670c0
0x00dee8d7: nop
0x00dee8d8: cmp    DWORD PTR [r14+0x48],0xffffffff
0x00dee8dd: je     0x140dee8ef
0x00dee8df: lea    rdx,[r14+0x48]
0x00dee8e3: lea    rcx,[rbp+0x240]
0x00dee8ea: call   0x1400709d0
0x00dee8ef: lea    rdx,[r14+0x4c]
0x00dee8f3: cmp    DWORD PTR [rdx],0xffffffff
0x00dee8f6: je     0x140dee904
0x00dee8f8: lea    rcx,[rbp+0x240]
0x00dee8ff: call   0x1400709d0
0x00dee904: lea    rdx,[rsp+0x58]
0x00dee909: lea    rcx,[rbp+0x240]
0x00dee910: call   0x140070800
0x00dee915: lea    rdx,[rbp-0x18]
0x00dee919: lea    rcx,[rbp+0x240]
0x00dee920: call   0x1400707f0
0x00dee925: mov    rax,QWORD PTR [rsp+0x58]
0x00dee92a: mov    r12d,0x1
0x00dee930: cmp    rax,QWORD PTR [rbp-0x18]
0x00dee934: je     0x140deeb56
0x00dee93a: mov    edx,r12d
0x00dee93d: mov    eax,0xff
0x00dee942: cmovb  edx,eax
0x00dee945: test   dl,dl
0x00dee947: jns    0x140deeb56
0x00dee94d: lea    rcx,[rsp+0x58]
0x00dee952: call   0x1400703d0
0x00dee957: lea    rdx,[rbp+0x1d0]
0x00dee95e: mov    ecx,DWORD PTR [rax]
0x00dee960: call   0x1400bb530
0x00dee965: cmp    eax,0xffffffff
0x00dee968: jne    0x140deeb43
0x00dee96e: lea    rcx,[rsp+0x58]
0x00dee973: call   0x1400703d0
0x00dee978: lea    rdx,[rbp+0x1d0]
0x00dee97f: mov    ecx,DWORD PTR [rax]
0x00dee981: call   0x1400bb430
0x00dee986: lea    rcx,[rsp+0x58]
0x00dee98b: call   0x1400703d0
0x00dee990: movsxd rdx,DWORD PTR [rax]
0x00dee993: lea    rcx,[r15+0x78]
0x00dee997: call   0x1400707e0
0x00dee99c: mov    r13,QWORD PTR [rax]
0x00dee99f: lea    rdx,[rip+0x948aaa]        # 0x141737450 ; literal="[B]The "
0x00dee9a6: mov    rcx,rdi
0x00dee9a9: call   0x140070b20
0x00dee9ae: mov    rdx,r13
0x00dee9b1: mov    rcx,rdi
0x00dee9b4: call   0x1400bb2d0
0x00dee9b9: lea    rdx,[rip+0x80ffac]        # 0x1415fe96c ; literal=" "
0x00dee9c0: mov    rcx,rdi
0x00dee9c3: call   0x140070b20
0x00dee9c8: mov    ecx,DWORD PTR [r13+0x34]
0x00dee9cc: sub    ecx,0x3
0x00dee9cf: je     0x140dee9ed
0x00dee9d1: sub    ecx,0x1
0x00dee9d4: je     0x140dee9e4
0x00dee9d6: cmp    ecx,0x1
0x00dee9d9: jne    0x140dee9fc
0x00dee9db: lea    rdx,[rip+0x9489be]        # 0x1417373a0 ; literal="pentachord"
0x00dee9e2: jmp    0x140dee9f4
0x00dee9e4: lea    rdx,[rip+0x9489a5]        # 0x141737390 ; literal="tetrachord"
0x00dee9eb: jmp    0x140dee9f4
0x00dee9ed: lea    rdx,[rip+0x948a64]        # 0x141737458 ; literal="trichord"
0x00dee9f4: mov    rcx,rdi
0x00dee9f7: call   0x140070b20
0x00dee9fc: lea    rdx,[rip+0x81f4e9]        # 0x14160deec ; literal=" is "
0x00deea03: mov    rcx,rdi
0x00deea06: call   0x140070b20
0x00deea0b: xor    eax,eax
0x00deea0d: mov    esi,eax
0x00deea0f: cmp    DWORD PTR [r13+0x34],eax
0x00deea13: jle    0x140deeadb
0x00deea19: lea    r14,[r13+0x20]
0x00deea1d: nop    DWORD PTR [rax]
0x00deea20: mov    r8d,0x4
0x00deea26: lea    rdx,[rip+0x81064b]        # 0x1415ff078 ; literal="the "
0x00deea2d: mov    rcx,rdi
0x00deea30: call   0x140070fd0
0x00deea35: nop
0x00deea36: movzx  edx,bl
0x00deea39: lea    rcx,[rbp+0x190]
0x00deea40: call   0x140069750
0x00deea45: lea    rcx,[rbp+0x190]
0x00deea4c: call   0x140071140
0x00deea51: nop
0x00deea52: mov    ecx,DWORD PTR [r14]
0x00deea55: inc    ecx
0x00deea57: mov    r8b,0x1
0x00deea5a: lea    rdx,[rbp+0x190]
0x00deea61: call   0x140545850
0x00deea66: lea    rdx,[rbp+0x190]
0x00deea6d: mov    rcx,rdi
0x00deea70: call   0x1400bb2d0
0x00deea75: cmp    DWORD PTR [r15+0x8],0x0
0x00deea7a: jne    0x140deea94
0x00deea7c: mov    eax,DWORD PTR [r15+0x70]
0x00deea80: cmp    DWORD PTR [r14],eax
0x00deea83: jne    0x140deea94
0x00deea85: lea    rdx,[rip+0x948924]        # 0x1417373b0 ; literal=" (completing the octave)"
0x00deea8c: mov    rcx,rdi
0x00deea8f: call   0x140070b20
0x00deea94: mov    ecx,DWORD PTR [r13+0x34]
0x00deea98: lea    eax,[rcx-0x3]
0x00deea9b: cmp    esi,eax
0x00deea9d: jg     0x140deeaa8
0x00deea9f: lea    rdx,[rip+0x810862]        # 0x1415ff308 ; literal=", "
0x00deeaa6: jmp    0x140deeab6
0x00deeaa8: lea    eax,[rcx-0x2]
0x00deeaab: cmp    esi,eax
0x00deeaad: jne    0x140deeabf
0x00deeaaf: lea    rdx,[rip+0x81088a]        # 0x1415ff340 ; literal=" and "
0x00deeab6: mov    rcx,rdi
0x00deeab9: call   0x140070b20
0x00deeabe: nop
0x00deeabf: lea    rcx,[rbp+0x190]
0x00deeac6: call   0x140070e10
0x00deeacb: inc    esi
0x00deeacd: add    r14,0x4
0x00deead1: cmp    esi,DWORD PTR [r13+0x34]
0x00deead5: jl     0x140deea20
0x00deeadb: mov    r8,r12
0x00deeade: lea    rdx,[rip+0x80fe87]        # 0x1415fe96c ; literal=" "
0x00deeae5: mov    rcx,rdi
0x00deeae8: call   0x140070fd0
0x00deeaed: mov    ecx,DWORD PTR [r15+0x8]
0x00deeaf1: test   ecx,ecx
0x00deeaf3: je     0x140deeb11
0x00deeaf5: sub    ecx,0x1
0x00deeaf8: je     0x140deeb08
0x00deeafa: cmp    ecx,0x1
0x00deeafd: jne    0x140deeb2e
0x00deeaff: lea    rdx,[rip+0x948b52]        # 0x141737658 ; literal="degrees of the fundamental perfect fourth division"
0x00deeb06: jmp    0x140deeb26
0x00deeb08: lea    rdx,[rip+0x948b29]        # 0x141737638 ; literal="degrees of the octave scale"
0x00deeb0f: jmp    0x140deeb26
0x00deeb11: cmp    DWORD PTR [r15+0x70],0xc
0x00deeb16: lea    rdx,[rip+0x9488b3]        # 0x1417373d0 ; literal="degrees of the semitone octave scale"
0x00deeb1d: je     0x140deeb26
0x00deeb1f: lea    rdx,[rip+0x948aea]        # 0x141737610 ; literal="degrees of the quartertone octave scale"
0x00deeb26: mov    rcx,rdi
0x00deeb29: call   0x140070b20
0x00deeb2e: mov    r8d,0x3
0x00deeb34: lea    rdx,[rip+0x825b45]        # 0x141614680 ; literal=".  "
0x00deeb3b: mov    rcx,rdi
0x00deeb3e: call   0x140070fd0
0x00deeb43: mov    rax,QWORD PTR [rsp+0x58]
0x00deeb48: add    rax,0x4
0x00deeb4c: mov    QWORD PTR [rsp+0x58],rax
0x00deeb51: jmp    0x140dee930
0x00deeb56: lea    rcx,[rbp+0x240]
0x00deeb5d: call   0x1400670e0
0x00deeb62: mov    r13d,DWORD PTR [rsp+0x50]
0x00deeb67: mov    r14,QWORD PTR [rbp-0x20]
0x00deeb6b: mov    r12d,DWORD PTR [rbp-0x80]
0x00deeb6f: inc    r13d
0x00deeb72: mov    DWORD PTR [rsp+0x50],r13d
0x00deeb77: mov    rax,QWORD PTR [r14+0x8]
0x00deeb7b: sub    rax,QWORD PTR [r14]
0x00deeb7e: sar    rax,0x3
0x00deeb82: cmp    r13d,eax
0x00deeb85: jl     0x140dee590
0x00deeb8b: lea    rcx,[rbp+0x1d0]
0x00deeb92: call   0x1400670e0
0x00deeb97: nop
0x00deeb98: lea    rcx,[rbp+0x1b0]
0x00deeb9f: call   0x1400670e0
0x00deeba4: mov    esi,DWORD PTR [rbp-0x5c]
0x00deeba7: inc    esi
0x00deeba9: mov    DWORD PTR [rbp-0x5c],esi
0x00deebac: mov    rcx,r14
0x00deebaf: call   0x140070410
0x00deebb4: cmp    esi,eax
0x00deebb6: mov    r12,QWORD PTR [rbp-0x38]
0x00deebba: jl     0x140dee133
0x00deebc0: lea    rcx,[rbp+0x70]
0x00deebc4: call   0x1400670c0
0x00deebc9: nop
0x00deebca: mov    r13d,0xffffffff
0x00deebd0: mov    DWORD PTR [rbp-0x5c],r13d
0x00deebd4: lea    rcx,[r12+0x88]
0x00deebdc: call   0x140070410
0x00deebe1: cmp    eax,r13d
0x00deebe4: jle    0x140def6ea
0x00deebea: add    r12,0x88
0x00deebf1: mov    QWORD PTR [rbp+0x38],r12
0x00deebf5: movzx  ebx,BYTE PTR [rsp+0x30]
0x00deebfa: nop    WORD PTR [rax+rax*1+0x0]
0x00deec00: cmp    r13d,0xffffffff
0x00deec04: jne    0x140deec12
0x00deec06: mov    rax,QWORD PTR [rbp-0x38]
0x00deec0a: mov    esi,DWORD PTR [rax+0x104]
0x00deec10: jmp    0x140deec23
0x00deec12: movsxd rdx,r13d
0x00deec15: mov    rcx,r12
0x00deec18: call   0x1400707e0
0x00deec1d: mov    rcx,QWORD PTR [rax]
0x00deec20: mov    esi,DWORD PTR [rcx+0x24]
0x00deec23: mov    DWORD PTR [rbp-0x80],esi
0x00deec26: cmp    esi,0xffffffff
0x00deec29: je     0x140def6d2
0x00deec2f: lea    rdx,[rbp+0x70]
0x00deec33: mov    ecx,esi
0x00deec35: call   0x1400bb530
0x00deec3a: cmp    eax,0xffffffff
0x00deec3d: jne    0x140def6d2
0x00deec43: lea    rdx,[rbp+0x70]
0x00deec47: mov    ecx,esi
0x00deec49: call   0x1400bb430
0x00deec4e: mov    edx,esi
0x00deec50: lea    rcx,[rip+0x17156b1]        # 0x142504308
0x00deec57: call   0x140073b30
0x00deec5c: mov    r15,rax
0x00deec5f: mov    QWORD PTR [rbp-0x68],rax
0x00deec63: test   rax,rax
0x00deec66: je     0x140def6d2
0x00deec6c: test   BYTE PTR [rax+0x38],0x1
0x00deec70: je     0x140deec81
0x00deec72: lea    rdx,[rip+0x948a17]        # 0x141737690 ; literal="[B]The rhythm system is fundamentally polyrhythmic.  There are always multiple rhythm lines, and each of their bars is played over the same period of time, regardless of the number of beats.  The rhythm lines are thought of as one, without a primary-subordinate relationship, though individual lines can be named.  "
0x00deec79: mov    rcx,rdi
0x00deec7c: call   0x140070b20
0x00deec81: test   BYTE PTR [r15+0x38],0x2
0x00deec86: je     0x140deec97
0x00deec88: lea    rdx,[rip+0x9487e1]        # 0x141737470 ; literal="[B]The rhythm system is fundamentally polymetric.  There are always multiple rhythm lines, and the beats are always played together, even if one rhythm line completes (and then repeats) before the other is finished.  The rhythm lines are thought of as one, without a primary-subordinate relationship, though individual lines can be named.  "
0x00deec8f: mov    rcx,rdi
0x00deec92: call   0x140070b20
0x00deec97: lea    rcx,[rbp+0x1d0]
0x00deec9e: call   0x1400670c0
0x00deeca3: nop
0x00deeca4: lea    rcx,[rbp+0x1b0]
0x00deecab: call   0x1400670c0
0x00deecb0: nop
0x00deecb1: mov    r14d,0xffffffff
0x00deecb7: mov    DWORD PTR [rbp-0x60],r14d
0x00deecbb: mov    rcx,r12
0x00deecbe: call   0x140070410
0x00deecc3: cmp    eax,r14d
0x00deecc6: jle    0x140def6b9
0x00deeccc: nop    DWORD PTR [rax+0x0]
0x00deecd0: cmp    r14d,0xffffffff
0x00deecd4: jne    0x140deecf4
0x00deecd6: mov    rax,QWORD PTR [rbp-0x38]
0x00deecda: cmp    DWORD PTR [rax+0x104],esi
0x00deece0: jne    0x140def69d
0x00deece6: mov    esi,DWORD PTR [rax+0x108]
0x00deecec: mov    eax,DWORD PTR [rax+0x10c]
0x00deecf2: jmp    0x140deed34
0x00deecf4: movsxd r14,r14d
0x00deecf7: mov    rdx,r14
0x00deecfa: mov    rcx,r12
0x00deecfd: call   0x1400707e0
0x00deed02: mov    rcx,QWORD PTR [rax]
0x00deed05: cmp    DWORD PTR [rcx+0x24],esi
0x00deed08: jne    0x140def737
0x00deed0e: mov    rdx,r14
0x00deed11: mov    rcx,r12
0x00deed14: call   0x1400707e0
0x00deed19: mov    rcx,QWORD PTR [rax]
0x00deed1c: mov    esi,DWORD PTR [rcx+0x28]
0x00deed1f: mov    rdx,r14
0x00deed22: mov    rcx,r12
0x00deed25: call   0x1400707e0
0x00deed2a: mov    rcx,QWORD PTR [rax]
0x00deed2d: mov    eax,DWORD PTR [rcx+0x2c]
0x00deed30: mov    r14d,DWORD PTR [rbp-0x60]
0x00deed34: mov    DWORD PTR [rsp+0x50],eax
0x00deed38: cmp    esi,0xffffffff
0x00deed3b: je     0x140deed62
0x00deed3d: lea    rdx,[rbp+0x1d0]
0x00deed44: mov    ecx,esi
0x00deed46: call   0x1400bb530
0x00deed4b: cmp    eax,0xffffffff
0x00deed4e: jne    0x140def69a
0x00deed54: lea    rdx,[rbp+0x1d0]
0x00deed5b: mov    ecx,esi
0x00deed5d: call   0x1400bb430
0x00deed62: lea    rcx,[rbp+0x240]
0x00deed69: call   0x1400670c0
0x00deed6e: nop
0x00deed6f: cmp    DWORD PTR [rsp+0x50],0xffffffff
0x00deed74: je     0x140deed87
0x00deed76: lea    rdx,[rsp+0x50]
0x00deed7b: lea    rcx,[rbp+0x240]
0x00deed82: call   0x1400709d0
0x00deed87: cmp    esi,0xffffffff
0x00deed8a: je     0x140def083
0x00deed90: lea    rcx,[r15+0x20]
0x00deed94: movsxd rdx,esi
0x00deed97: call   0x1400707e0
0x00deed9c: mov    r13,QWORD PTR [rax]
0x00deed9f: mov    QWORD PTR [rbp-0x18],r13
0x00deeda3: lea    rdx,[rip+0x9486a6]        # 0x141737450 ; literal="[B]The "
0x00deedaa: mov    rcx,rdi
0x00deedad: call   0x140070b20
0x00deedb2: mov    rdx,r13
0x00deedb5: mov    rcx,rdi
0x00deedb8: call   0x1400bb2d0
0x00deedbd: lea    rdx,[rip+0x948804]        # 0x1417375c8 ; literal=" rhythm is made from "
0x00deedc4: mov    rcx,rdi
0x00deedc7: call   0x140070b20
0x00deedcc: lea    rcx,[rbp+0x210]
0x00deedd3: call   0x140070c50
0x00deedd8: nop
0x00deedd9: lea    rcx,[r13+0x20]
0x00deeddd: call   0x140070930
0x00deede2: mov    rcx,rax
0x00deede5: lea    rdx,[rbp+0x210]
0x00deedec: call   0x140545040
0x00deedf1: lea    rdx,[rbp+0x210]
0x00deedf8: mov    rcx,rdi
0x00deedfb: call   0x1400bb2d0
0x00deee00: nop
0x00deee01: lea    rcx,[rbp+0x210]
0x00deee08: call   0x1400693f0
0x00deee0d: lea    rdx,[rip+0x9487cc]        # 0x1417375e0 ; literal=" patterns: "
0x00deee14: mov    rcx,rdi
0x00deee17: call   0x140070b20
0x00deee1c: xor    r14b,r14b
0x00deee1f: mov    r12d,0xffffffff
0x00deee25: lea    rcx,[r13+0x20]
0x00deee29: call   0x140070930
0x00deee2e: mov    r15,rax
0x00deee31: lea    rdx,[rsp+0x58]
0x00deee36: lea    rcx,[r13+0x20]
0x00deee3a: call   0x140070800
0x00deee3f: lea    rdx,[rbp+0x18]
0x00deee43: lea    rcx,[r13+0x20]
0x00deee47: call   0x1400707f0
0x00deee4c: lea    rdx,[rbp+0x8]
0x00deee50: lea    rcx,[r13+0x38]
0x00deee54: call   0x140070800
0x00deee59: lea    rdx,[rbp+0x68]
0x00deee5d: lea    rcx,[r13+0x38]
0x00deee61: call   0x1400707f0
0x00deee66: lea    r8,[rbp+0x18]
0x00deee6a: lea    rdx,[rsp+0x35]
0x00deee6f: lea    rcx,[rsp+0x58]
0x00deee74: call   0x1400703e0
0x00deee79: xor    edx,edx
0x00deee7b: movzx  ecx,BYTE PTR [rax]
0x00deee7e: call   0x140066d70
0x00deee83: test   al,al
0x00deee85: je     0x140def030
0x00deee8b: mov    r13,QWORD PTR [rbp-0x68]
0x00deee8f: add    r13,0x8
0x00deee93: xor    ebx,ebx
0x00deee95: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x00deeea0: lea    rdx,[rip+0x8101d1]        # 0x1415ff078 ; literal="the "
0x00deeea7: mov    rcx,rdi
0x00deeeaa: call   0x140070b20
0x00deeeaf: lea    rcx,[rsp+0x58]
0x00deeeb4: call   0x1400703d0
0x00deeeb9: movsxd rdx,DWORD PTR [rax]
0x00deeebc: mov    rcx,r13
0x00deeebf: call   0x1400707e0
0x00deeec4: mov    rdx,QWORD PTR [rax]
0x00deeec7: mov    rcx,rdi
0x00deeeca: call   0x1400bb2d0
0x00deeecf: lea    rcx,[rbp+0x8]
0x00deeed3: call   0x1400703d0
0x00deeed8: test   BYTE PTR [rax],0x1
0x00deeedb: je     0x140deeeec
0x00deeedd: lea    rdx,[rip+0x94870c]        # 0x1417375f0 ; literal=" (considered the primary)"
0x00deeee4: mov    rcx,rdi
0x00deeee7: call   0x140070b20
0x00deeeec: cmp    r15d,0x3
0x00deeef0: jl     0x140deeefb
0x00deeef2: lea    rdx,[rip+0x81040f]        # 0x1415ff308 ; literal=", "
0x00deeef9: jmp    0x140deef08
0x00deeefb: cmp    r15d,0x2
0x00deeeff: jne    0x140deef10
0x00deef01: lea    rdx,[rip+0x810438]        # 0x1415ff340 ; literal=" and "
0x00deef08: mov    rcx,rdi
0x00deef0b: call   0x140070b20
0x00deef10: mov    esi,ebx
0x00deef12: lea    rcx,[rsp+0x58]
0x00deef17: call   0x1400703d0
0x00deef1c: movsxd rdx,DWORD PTR [rax]
0x00deef1f: mov    rcx,r13
0x00deef22: call   0x1400707e0
0x00deef27: mov    rcx,QWORD PTR [rax]
0x00deef2a: add    rcx,0x20
0x00deef2e: lea    rdx,[rbp-0x28]
0x00deef32: call   0x140070800
0x00deef37: lea    rcx,[rsp+0x58]
0x00deef3c: call   0x1400703d0
0x00deef41: movsxd rdx,DWORD PTR [rax]
0x00deef44: mov    rcx,r13
0x00deef47: call   0x1400707e0
0x00deef4c: mov    rcx,QWORD PTR [rax]
0x00deef4f: add    rcx,0x20
0x00deef53: lea    rdx,[rbp-0x20]
0x00deef57: call   0x1400707f0
0x00deef5c: lea    r8,[rbp-0x20]
0x00deef60: lea    rdx,[rsp+0x4a]
0x00deef65: lea    rcx,[rbp-0x28]
0x00deef69: call   0x1400703e0
0x00deef6e: xor    edx,edx
0x00deef70: movzx  ecx,BYTE PTR [rax]
0x00deef73: call   0x140066d70
0x00deef78: test   al,al
0x00deef7a: je     0x140deefb8
0x00deef7c: nop    DWORD PTR [rax+0x0]
0x00deef80: lea    rcx,[rbp-0x28]
0x00deef84: call   0x1400703d0
0x00deef89: mov    rcx,QWORD PTR [rax]
0x00deef8c: add    esi,DWORD PTR [rcx+0x8]
0x00deef8f: lea    rcx,[rbp-0x28]
0x00deef93: call   0x1400703c0
0x00deef98: lea    r8,[rbp-0x20]
0x00deef9c: lea    rdx,[rsp+0x4a]
0x00deefa1: lea    rcx,[rbp-0x28]
0x00deefa5: call   0x1400703e0
0x00deefaa: xor    edx,edx
0x00deefac: movzx  ecx,BYTE PTR [rax]
0x00deefaf: call   0x140066d70
0x00deefb4: test   al,al
0x00deefb6: jne    0x140deef80
0x00deefb8: cmp    r12d,0xffffffff
0x00deefbc: jne    0x140deefc3
0x00deefbe: mov    r12d,esi
0x00deefc1: jmp    0x140deefd3
0x00deefc3: movzx  r14d,r14b
0x00deefc7: cmp    r12d,esi
0x00deefca: mov    eax,0x1
0x00deefcf: cmovne r14d,eax
0x00deefd3: lea    rcx,[rsp+0x58]
0x00deefd8: call   0x1400703d0
0x00deefdd: mov    rdx,rax
0x00deefe0: lea    rcx,[rbp+0x240]
0x00deefe7: call   0x1400709d0
0x00deefec: lea    rcx,[rsp+0x58]
0x00deeff1: call   0x140070910
0x00deeff6: lea    rcx,[rbp+0x8]
0x00deeffa: call   0x140070910
0x00deefff: dec    r15d
0x00def002: lea    r8,[rbp+0x18]
0x00def006: lea    rdx,[rsp+0x35]
0x00def00b: lea    rcx,[rsp+0x58]
0x00def010: call   0x1400703e0
0x00def015: xor    edx,edx
0x00def017: movzx  ecx,BYTE PTR [rax]
0x00def01a: call   0x140066d70
0x00def01f: test   al,al
0x00def021: jne    0x140deeea0
0x00def027: movzx  ebx,BYTE PTR [rsp+0x30]
0x00def02c: mov    r13,QWORD PTR [rbp-0x18]
0x00def030: lea    rdx,[rip+0x825649]        # 0x141614680 ; literal=".  "
0x00def037: mov    rcx,rdi
0x00def03a: call   0x140070b20
0x00def03f: mov    r15,QWORD PTR [rbp-0x68]
0x00def043: test   r14b,r14b
0x00def046: je     0x140def083
0x00def048: mov    eax,DWORD PTR [r15+0x38]
0x00def04c: mov    rcx,rdi
0x00def04f: test   al,0x1
0x00def051: je     0x140def05c
0x00def053: lea    rdx,[rip+0x9487be]        # 0x141737818 ; literal="As stated above, they are to be played in polyrhythm.  "
0x00def05a: jmp    0x140def07e
0x00def05c: test   al,0x2
0x00def05e: je     0x140def069
0x00def060: lea    rdx,[rip+0x9487e9]        # 0x141737850 ; literal="As stated above, they are to be played in polymeter.  "
0x00def067: jmp    0x140def07e
0x00def069: test   BYTE PTR [r13+0x50],0x1
0x00def06e: lea    rdx,[rip+0x94881b]        # 0x141737890 ; literal="The patterns are to be played in the same beat, allowing one to repeat before the other is concluded.  "
0x00def075: jne    0x140def07e
0x00def077: lea    rdx,[rip+0x948882]        # 0x141737900 ; literal="The patterns are to be played over the same period of time, concluding together regardless of beat number.  "
0x00def07e: call   0x140070b20
0x00def083: lea    rdx,[rsp+0x68]
0x00def088: lea    rcx,[rbp+0x240]
0x00def08f: call   0x140070800
0x00def094: lea    rdx,[rbp+0x10]
0x00def098: lea    rcx,[rbp+0x240]
0x00def09f: call   0x1400707f0
0x00def0a4: lea    r8,[rbp+0x10]
0x00def0a8: lea    rdx,[rsp+0x48]
0x00def0ad: lea    rcx,[rsp+0x68]
0x00def0b2: call   0x1400703e0
0x00def0b7: xor    edx,edx
0x00def0b9: movzx  ecx,BYTE PTR [rax]
0x00def0bc: call   0x140066d70
0x00def0c1: test   al,al
0x00def0c3: je     0x140def682
0x00def0c9: nop    DWORD PTR [rax+0x0]
0x00def0d0: lea    rcx,[rsp+0x68]
0x00def0d5: call   0x1400703d0
0x00def0da: lea    rdx,[rbp+0x1b0]
0x00def0e1: mov    ecx,DWORD PTR [rax]
0x00def0e3: call   0x1400bb530
0x00def0e8: cmp    eax,0xffffffff
0x00def0eb: jne    0x140def64f
0x00def0f1: lea    rcx,[rsp+0x68]
0x00def0f6: call   0x1400703d0
0x00def0fb: lea    rdx,[rbp+0x1b0]
0x00def102: mov    ecx,DWORD PTR [rax]
0x00def104: call   0x1400bb430
0x00def109: lea    rcx,[rsp+0x68]
0x00def10e: call   0x1400703d0
0x00def113: movsxd rdx,DWORD PTR [rax]
0x00def116: lea    rcx,[r15+0x8]
0x00def11a: call   0x1400707e0
0x00def11f: mov    r14,QWORD PTR [rax]
0x00def122: xor    r13d,r13d
0x00def125: mov    r15d,r13d
0x00def128: lea    rdx,[rsp+0x70]
0x00def12d: lea    rcx,[r14+0x20]
0x00def131: call   0x140070800
0x00def136: lea    rdx,[rbp-0x78]
0x00def13a: lea    rcx,[r14+0x20]
0x00def13e: call   0x1400707f0
0x00def143: mov    rcx,QWORD PTR [rbp-0x78]
0x00def147: mov    rax,QWORD PTR [rsp+0x70]
0x00def14c: mov    r12d,0xff
0x00def152: mov    r13d,0x1
0x00def158: cmp    rax,rcx
0x00def15b: je     0x140def17a
0x00def15d: mov    edx,r13d
0x00def160: cmovb  edx,r12d
0x00def164: test   dl,dl
0x00def166: jns    0x140def17a
0x00def168: mov    rdx,QWORD PTR [rax]
0x00def16b: add    r15d,DWORD PTR [rdx+0x8]
0x00def16f: add    rax,0x8
0x00def173: mov    QWORD PTR [rsp+0x70],rax
0x00def178: jmp    0x140def158
0x00def17a: mov    r8d,0x7
0x00def180: lea    rdx,[rip+0x9482c9]        # 0x141737450 ; literal="[B]The "
0x00def187: mov    rcx,rdi
0x00def18a: call   0x140070fd0
0x00def18f: mov    rdx,r14
0x00def192: mov    rcx,rdi
0x00def195: call   0x1400bb2d0
0x00def19a: mov    r8d,0x1e
0x00def1a0: lea    rdx,[rip+0x948629]        # 0x1417377d0 ; literal=" rhythm is a single line with "
0x00def1a7: mov    rcx,rdi
0x00def1aa: call   0x140070fd0
0x00def1af: nop
0x00def1b0: movzx  edx,bl
0x00def1b3: lea    rcx,[rbp+0x190]
0x00def1ba: call   0x140069750
0x00def1bf: lea    rcx,[rbp+0x190]
0x00def1c6: call   0x140071140
0x00def1cb: nop
0x00def1cc: lea    rdx,[rbp+0x190]
0x00def1d3: mov    ecx,r15d
0x00def1d6: call   0x140545040
0x00def1db: lea    rdx,[rbp+0x190]
0x00def1e2: mov    rcx,rdi
0x00def1e5: call   0x1400bb2d0
0x00def1ea: nop
0x00def1eb: lea    rcx,[rbp+0x190]
0x00def1f2: call   0x140070e10
0x00def1f7: mov    r8d,0x6
0x00def1fd: lea    rdx,[rip+0x9485ec]        # 0x1417377f0 ; literal=" beats"
0x00def204: mov    rcx,rdi
0x00def207: call   0x140070fd0
0x00def20c: mov    rax,QWORD PTR [r14+0x28]
0x00def210: sub    rax,QWORD PTR [r14+0x20]
0x00def214: sar    rax,0x3
0x00def218: cmp    rax,0x2
0x00def21c: mov    r13d,0x0
0x00def222: jb     0x140def321
0x00def228: lea    rdx,[rip+0x9485c9]        # 0x1417377f8 ; literal=" divided into "
0x00def22f: mov    rcx,rdi
0x00def232: call   0x140070b20
0x00def237: lea    rcx,[rbp+0x210]
0x00def23e: call   0x140070c50
0x00def243: nop
0x00def244: lea    rcx,[r14+0x20]
0x00def248: call   0x140070410
0x00def24d: mov    rcx,rax
0x00def250: lea    rdx,[rbp+0x210]
0x00def257: call   0x140545040
0x00def25c: lea    rdx,[rbp+0x210]
0x00def263: mov    rcx,rdi
0x00def266: call   0x1400bb2d0
0x00def26b: nop
0x00def26c: lea    rcx,[rbp+0x210]
0x00def273: call   0x1400693f0
0x00def278: lea    rdx,[rip+0x948589]        # 0x141737808 ; literal=" bars in a "
0x00def27f: mov    rcx,rdi
0x00def282: call   0x140070b20
0x00def287: mov    esi,r13d
0x00def28a: lea    rcx,[r14+0x20]
0x00def28e: lea    rdx,[rsp+0x78]
0x00def293: call   0x140070800
0x00def298: lea    rcx,[r14+0x20]
0x00def29c: lea    rdx,[rbp+0x40]
0x00def2a0: call   0x1400707f0
0x00def2a5: mov    r13d,0x1
0x00def2ab: nop    DWORD PTR [rax+rax*1+0x0]
0x00def2b0: mov    rax,QWORD PTR [rsp+0x78]
0x00def2b5: cmp    rax,QWORD PTR [rbp+0x40]
0x00def2b9: je     0x140def30f
0x00def2bb: mov    edx,r13d
0x00def2be: cmovb  edx,r12d
0x00def2c2: test   dl,dl
0x00def2c4: jns    0x140def30f
0x00def2c6: lea    rcx,[rsp+0x78]
0x00def2cb: call   0x1400703d0
0x00def2d0: mov    rcx,QWORD PTR [rax]
0x00def2d3: mov    rdx,rdi
0x00def2d6: mov    ecx,DWORD PTR [rcx+0x8]
0x00def2d9: call   0x140542fb0
0x00def2de: lea    rcx,[r14+0x20]
0x00def2e2: call   0x140070410
0x00def2e7: dec    rax
0x00def2ea: movsxd rcx,esi
0x00def2ed: cmp    rcx,rax
0x00def2f0: je     0x140def301
0x00def2f2: lea    rdx,[rip+0x8752c3]        # 0x1416645bc ; literal="-"
0x00def2f9: mov    rcx,rdi
0x00def2fc: call   0x140070b20
0x00def301: lea    rcx,[rsp+0x78]
0x00def306: call   0x1400703c0
0x00def30b: inc    esi
0x00def30d: jmp    0x140def2b0
0x00def30f: lea    rdx,[rip+0x9486b2]        # 0x1417379c8 ; literal=" pattern"
0x00def316: mov    rcx,rdi
0x00def319: call   0x140070b20
0x00def31e: xor    r13d,r13d
0x00def321: mov    r8d,0x3
0x00def327: lea    rdx,[rip+0x825352]        # 0x141614680 ; literal=".  "
0x00def32e: mov    rcx,rdi
0x00def331: call   0x140070fd0
0x00def336: cmp    DWORD PTR [r14+0x48],0x0
0x00def33b: jle    0x140def3f6
0x00def341: lea    rdx,[rip+0x948690]        # 0x1417379d8 ; literal="The beats are named "
0x00def348: mov    rcx,rdi
0x00def34b: call   0x140070b20
0x00def350: mov    esi,r13d
0x00def353: cmp    DWORD PTR [r14+0x48],0x0
0x00def358: jle    0x140def3e7
0x00def35e: xchg   ax,ax
0x00def360: movsxd r15,esi
0x00def363: shl    r15,0x5
0x00def367: mov    rdx,QWORD PTR [r14+0x38]
0x00def36b: add    rdx,r15
0x00def36e: mov    rcx,rdi
0x00def371: call   0x1400bb2d0
0x00def376: lea    rdx,[rip+0x83cc73]        # 0x14162bff0 ; literal=" ("
0x00def37d: mov    rcx,rdi
0x00def380: call   0x140070b20
0x00def385: test   esi,esi
0x00def387: jne    0x140def398
0x00def389: lea    rdx,[rip+0x947d08]        # 0x141737098 ; literal="spoken "
0x00def390: mov    rcx,rdi
0x00def393: call   0x140070b20
0x00def398: mov    rdx,QWORD PTR [r14+0x40]
0x00def39c: add    rdx,r15
0x00def39f: mov    rcx,rdi
0x00def3a2: call   0x1400bb2d0
0x00def3a7: lea    rdx,[rip+0x83cc82]        # 0x14162c030 ; literal=")"
0x00def3ae: mov    rcx,rdi
0x00def3b1: call   0x140070b20
0x00def3b6: mov    eax,DWORD PTR [r14+0x48]
0x00def3ba: add    eax,0xfffffffe
0x00def3bd: cmp    esi,eax
0x00def3bf: jge    0x140def3ca
0x00def3c1: lea    rdx,[rip+0x80ff40]        # 0x1415ff308 ; literal=", "
0x00def3c8: jmp    0x140def3d3
0x00def3ca: jne    0x140def3db
0x00def3cc: lea    rdx,[rip+0x80ff6d]        # 0x1415ff340 ; literal=" and "
0x00def3d3: mov    rcx,rdi
0x00def3d6: call   0x140070b20
0x00def3db: inc    esi
0x00def3dd: cmp    esi,DWORD PTR [r14+0x48]
0x00def3e1: jl     0x140def360
0x00def3e7: lea    rdx,[rip+0x825292]        # 0x141614680 ; literal=".  "
0x00def3ee: mov    rcx,rdi
0x00def3f1: call   0x140070b20
0x00def3f6: lea    rdx,[rip+0x9485f3]        # 0x1417379f0 ; literal="The beat is stressed as follows:"
0x00def3fd: mov    rcx,rdi
0x00def400: call   0x140070b20
0x00def405: lea    rdx,[rip+0x824ca0]        # 0x1416140ac ; literal="[B]"
0x00def40c: mov    rcx,rdi
0x00def40f: call   0x140070b20
0x00def414: xor    r12b,r12b
0x00def417: xor    r13b,r13b
0x00def41a: xor    sil,sil
0x00def41d: mov    BYTE PTR [rsp+0x33],sil
0x00def422: xor    r15b,r15b
0x00def425: mov    BYTE PTR [rsp+0x30],r15b
0x00def42a: mov    BYTE PTR [rsp+0x34],sil
0x00def42f: lea    rdx,[rip+0x9485de]        # 0x141737a14 ; literal="| "
0x00def436: mov    rcx,rdi
0x00def439: call   0x140070b20
0x00def43e: lea    rcx,[r14+0x20]
0x00def442: lea    rdx,[rbp+0x60]
0x00def446: call   0x140070800
0x00def44b: mov    rcx,QWORD PTR [rax]
0x00def44e: mov    QWORD PTR [rsp+0x70],rcx
0x00def453: lea    r8,[rbp-0x78]
0x00def457: lea    rdx,[rsp+0x49]
0x00def45c: lea    rcx,[rsp+0x70]
0x00def461: call   0x1400703e0
0x00def466: xor    edx,edx
0x00def468: movzx  ecx,BYTE PTR [rax]
0x00def46b: call   0x140066d70
0x00def470: test   al,al
0x00def472: je     0x140def5bc
0x00def478: xor    ebx,ebx
0x00def47a: nop    WORD PTR [rax+rax*1+0x0]
0x00def480: mov    r15d,ebx
0x00def483: lea    rcx,[rsp+0x70]
0x00def488: call   0x1400703d0
0x00def48d: mov    rcx,QWORD PTR [rax]
0x00def490: cmp    DWORD PTR [rcx+0x8],ebx
0x00def493: jle    0x140def573
0x00def499: mov    r14,rbx
0x00def49c: nop    DWORD PTR [rax+0x0]
0x00def4a0: lea    rcx,[rsp+0x70]
0x00def4a5: call   0x1400703d0
0x00def4aa: mov    rcx,QWORD PTR [rax]
0x00def4ad: mov    rax,QWORD PTR [rcx]
0x00def4b0: mov    esi,DWORD PTR [r14+rax*1]
0x00def4b4: mov    eax,esi
0x00def4b6: and    eax,0x3
0x00def4b9: mov    rcx,rdi
0x00def4bc: cmp    eax,0x3
0x00def4bf: jne    0x140def4d2
0x00def4c1: lea    rdx,[rip+0x8151d4]        # 0x14160469c ; literal="!"
0x00def4c8: call   0x140070b20
0x00def4cd: mov    r12b,0x1
0x00def4d0: jmp    0x140def50c
0x00def4d2: cmp    eax,0x1
0x00def4d5: jne    0x140def4e8
0x00def4d7: lea    rdx,[rip+0x8eb8ea]        # 0x1416dadc8 ; literal="X"
0x00def4de: call   0x140070b20
0x00def4e3: mov    r13b,0x1
0x00def4e6: jmp    0x140def50c
0x00def4e8: cmp    eax,0x2
0x00def4eb: jne    0x140def4fb
0x00def4ed: lea    rdx,[rip+0x825f10]        # 0x141615404 ; literal="x"
0x00def4f4: call   0x140070b20
0x00def4f9: jmp    0x140def50c
0x00def4fb: lea    rdx,[rip+0x8750ba]        # 0x1416645bc ; literal="-"
0x00def502: call   0x140070b20
0x00def507: mov    BYTE PTR [rsp+0x34],0x1
0x00def50c: mov    rcx,rdi
0x00def50f: test   sil,0x4
0x00def513: je     0x140def52b
0x00def515: lea    rdx,[rip+0x948454]        # 0x141737970 ; literal="`"
0x00def51c: call   0x140070b20
0x00def521: mov    sil,0x1
0x00def524: mov    BYTE PTR [rsp+0x33],sil
0x00def529: jmp    0x140def555
0x00def52b: test   sil,0x8
0x00def52f: je     0x140def544
0x00def531: lea    rdx,[rip+0x87b2bc]        # 0x14166a7f4 ; literal="'"
0x00def538: call   0x140070b20
0x00def53d: mov    BYTE PTR [rsp+0x30],0x1
0x00def542: jmp    0x140def550
0x00def544: lea    rdx,[rip+0x80f421]        # 0x1415fe96c ; literal=" "
0x00def54b: call   0x140070b20
0x00def550: movzx  esi,BYTE PTR [rsp+0x33]
0x00def555: inc    r15d
0x00def558: add    r14,0x4
0x00def55c: lea    rcx,[rsp+0x70]
0x00def561: call   0x1400703d0
0x00def566: mov    rcx,QWORD PTR [rax]
0x00def569: cmp    r15d,DWORD PTR [rcx+0x8]
0x00def56d: jl     0x140def4a0
0x00def573: lea    rdx,[rip+0x94849a]        # 0x141737a14 ; literal="| "
0x00def57a: mov    rcx,rdi
0x00def57d: call   0x140070b20
0x00def582: lea    rcx,[rsp+0x70]
0x00def587: call   0x1400703c0
0x00def58c: lea    r8,[rbp-0x78]
0x00def590: lea    rdx,[rsp+0x49]
0x00def595: lea    rcx,[rsp+0x70]
0x00def59a: call   0x1400703e0
0x00def59f: xor    edx,edx
0x00def5a1: movzx  ecx,BYTE PTR [rax]
0x00def5a4: call   0x140066d70
0x00def5a9: test   al,al
0x00def5ab: jne    0x140def480
0x00def5b1: movzx  ebx,BYTE PTR [rsp+0x30]
0x00def5b6: movzx  r15d,BYTE PTR [rsp+0x30]
0x00def5bc: lea    rdx,[rip+0x9483b5]        # 0x141737978 ; literal="[B]where "
0x00def5c3: mov    rcx,rdi
0x00def5c6: call   0x140070b20
0x00def5cb: test   r12b,r12b
0x00def5ce: je     0x140def5df
0x00def5d0: lea    rdx,[rip+0x9483b1]        # 0x141737988 ; literal="! marks the primary accent, "
0x00def5d7: mov    rcx,rdi
0x00def5da: call   0x140070b20
0x00def5df: test   r13b,r13b
0x00def5e2: je     0x140def5f3
0x00def5e4: lea    rdx,[rip+0x9483bd]        # 0x1417379a8 ; literal="X marks an accented beat, "
0x00def5eb: mov    rcx,rdi
0x00def5ee: call   0x140070b20
0x00def5f3: test   sil,sil
0x00def5f6: je     0x140def607
0x00def5f8: lea    rdx,[rip+0x947761]        # 0x141736d60 ; literal="` marks a beat as early, "
0x00def5ff: mov    rcx,rdi
0x00def602: call   0x140070b20
0x00def607: test   r15b,r15b
0x00def60a: je     0x140def61b
0x00def60c: lea    rdx,[rip+0x94776d]        # 0x141736d80 ; literal="' marks a beat as late, "
0x00def613: mov    rcx,rdi
0x00def616: call   0x140070b20
0x00def61b: lea    rdx,[rip+0x94777e]        # 0x141736da0 ; literal="x is a beat"
0x00def622: mov    rcx,rdi
0x00def625: call   0x140070b20
0x00def62a: cmp    BYTE PTR [rsp+0x34],0x0
0x00def62f: je     0x140def640
0x00def631: lea    rdx,[rip+0x947778]        # 0x141736db0 ; literal=", - is silent"
0x00def638: mov    rcx,rdi
0x00def63b: call   0x140070b20
0x00def640: lea    rdx,[rip+0x9476f9]        # 0x141736d40 ; literal=" and | indicates a bar.  "
0x00def647: mov    rcx,rdi
0x00def64a: call   0x140070b20
0x00def64f: lea    rcx,[rsp+0x68]
0x00def654: call   0x140070910
0x00def659: lea    r8,[rbp+0x10]
0x00def65d: lea    rdx,[rsp+0x48]
0x00def662: lea    rcx,[rsp+0x68]
0x00def667: call   0x1400703e0
0x00def66c: xor    edx,edx
0x00def66e: movzx  ecx,BYTE PTR [rax]
0x00def671: call   0x140066d70
0x00def676: test   al,al
0x00def678: mov    r15,QWORD PTR [rbp-0x68]
0x00def67c: jne    0x140def0d0
0x00def682: lea    rcx,[rbp+0x240]
0x00def689: call   0x1400670e0
0x00def68e: mov    r15,QWORD PTR [rbp-0x68]
0x00def692: mov    r14d,DWORD PTR [rbp-0x60]
0x00def696: mov    r12,QWORD PTR [rbp+0x38]
0x00def69a: mov    esi,DWORD PTR [rbp-0x80]
0x00def69d: inc    r14d
0x00def6a0: mov    DWORD PTR [rbp-0x60],r14d
0x00def6a4: mov    rcx,r12
0x00def6a7: call   0x140070410
0x00def6ac: cmp    r14d,eax
0x00def6af: jl     0x140deecd0
0x00def6b5: mov    r13d,DWORD PTR [rbp-0x5c]
0x00def6b9: lea    rcx,[rbp+0x1b0]
0x00def6c0: call   0x1400670e0
0x00def6c5: nop
0x00def6c6: lea    rcx,[rbp+0x1d0]
0x00def6cd: call   0x1400670e0
0x00def6d2: inc    r13d
0x00def6d5: mov    DWORD PTR [rbp-0x5c],r13d
0x00def6d9: mov    rcx,r12
0x00def6dc: call   0x140070410
0x00def6e1: cmp    r13d,eax
0x00def6e4: jl     0x140deec00
0x00def6ea: lea    rcx,[rbp+0x70]
0x00def6ee: call   0x1400670e0
0x00def6f3: nop
0x00def6f4: lea    rcx,[rbp+0x88]
0x00def6fb: call   0x1400670e0
0x00def700: nop
0x00def701: lea    rcx,[rbp+0x1f0]
0x00def708: call   0x1400693f0
0x00def70d: mov    rcx,QWORD PTR [rbp+0x270]
0x00def714: xor    rcx,rsp
0x00def717: call   0x14154de00
0x00def71c: mov    rbx,QWORD PTR [rsp+0x3d0]
0x00def724: add    rsp,0x380
0x00def72b: pop    r15
0x00def72d: pop    r14
0x00def72f: pop    r13
0x00def731: pop    r12
0x00def733: pop    rdi
0x00def734: pop    rsi
0x00def735: pop    rbp
0x00def736: ret
0x00def737: mov    r14d,DWORD PTR [rbp-0x60]
0x00def73b: jmp    0x140def69d
0x00def740: int3
0x00def741: nop    DWORD PTR [rax]
