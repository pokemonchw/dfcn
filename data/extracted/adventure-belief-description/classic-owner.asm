# classic PE:6a70b91c:0270a000; owner; RVA 0x63b7b0..0x63cae8
0x0063b7b0: mov    QWORD PTR [rsp+0x10],rbx
0x0063b7b5: mov    QWORD PTR [rsp+0x18],rsi
0x0063b7ba: mov    QWORD PTR [rsp+0x20],rdi
0x0063b7bf: push   rbp
0x0063b7c0: push   r12
0x0063b7c2: push   r13
0x0063b7c4: push   r14
0x0063b7c6: push   r15
0x0063b7c8: lea    rbp,[rsp-0x37]
0x0063b7cd: sub    rsp,0xd0
0x0063b7d4: mov    rax,QWORD PTR [rip+0x125a865]        # 0x141896040
0x0063b7db: xor    rax,rsp
0x0063b7de: mov    QWORD PTR [rbp+0x2f],rax
0x0063b7e2: mov    rsi,rcx
0x0063b7e5: mov    QWORD PTR [rbp-0x69],rcx
0x0063b7e9: cmp    DWORD PTR [rcx+0x1348],edx
0x0063b7ef: jne    0x14063b807
0x0063b7f1: cmp    DWORD PTR [rcx+0x134c],0xffffffff
0x0063b7f8: jne    0x14063b807
0x0063b7fa: cmp    DWORD PTR [rcx+0x1350],r9d
0x0063b801: je     0x14063cab5
0x0063b807: mov    DWORD PTR [rcx+0x1348],edx
0x0063b80d: mov    DWORD PTR [rcx+0x134c],0xffffffff
0x0063b817: mov    DWORD PTR [rcx+0x1350],r9d
0x0063b81e: add    rcx,0x1330
0x0063b825: call   0x1400bb940
0x0063b82a: xorps  xmm0,xmm0
0x0063b82d: movups XMMWORD PTR [rbp-0x51],xmm0
0x0063b831: mov    QWORD PTR [rbp-0x41],0x0
0x0063b839: mov    QWORD PTR [rbp-0x39],0xf
0x0063b841: mov    BYTE PTR [rbp-0x51],0x0
0x0063b845: mov    r13d,0x6
0x0063b84b: lea    rbx,[rip+0x1008da2]        # 0x1416445f4 ; literal=" is a "
0x0063b852: mov    r12d,0x4
0x0063b858: movabs r14,0x7fffffffffffffff
0x0063b862: mov    r15d,0x3
0x0063b868: cmp    DWORD PTR [rsi+0x1298],0x0
0x0063b86f: jne    0x14063be1b
0x0063b875: mov    rcx,QWORD PTR [rsi+0x1280]
0x0063b87c: mov    rax,QWORD PTR [rsi+0x1288]
0x0063b883: sub    rax,rcx
0x0063b886: sar    rax,0x3
0x0063b88a: test   rax,rax
0x0063b88d: je     0x14063be1b
0x0063b893: movsxd rax,DWORD PTR [rsi+0x1348]
0x0063b89a: mov    r13,QWORD PTR [rcx+rax*8]
0x0063b89e: movups XMMWORD PTR [rbp-0x31],xmm0
0x0063b8a2: mov    QWORD PTR [rbp-0x21],0x0
0x0063b8aa: mov    QWORD PTR [rbp-0x19],0xf
0x0063b8b2: mov    BYTE PTR [rbp-0x31],0x0
0x0063b8b6: xor    r9d,r9d
0x0063b8b9: mov    r8b,0x1
0x0063b8bc: lea    rdx,[rbp-0x31]
0x0063b8c0: mov    rcx,r13
0x0063b8c3: call   0x140a91760
0x0063b8c8: lea    rdx,[rbp-0x31]
0x0063b8cc: cmp    QWORD PTR [rbp-0x19],0xf
0x0063b8d1: cmova  rdx,QWORD PTR [rbp-0x31]
0x0063b8d6: mov    r8,QWORD PTR [rbp-0x21]
0x0063b8da: lea    rcx,[rbp-0x51]
0x0063b8de: call   0x14006f9a0
0x0063b8e3: mov    r8d,0x6
0x0063b8e9: mov    rdx,rbx
0x0063b8ec: lea    rcx,[rbp-0x51]
0x0063b8f0: call   0x14006f9a0
0x0063b8f5: mov    QWORD PTR [rbp-0x21],0x0
0x0063b8fd: lea    rax,[rbp-0x31]
0x0063b901: cmp    QWORD PTR [rbp-0x19],0xf
0x0063b906: cmova  rax,QWORD PTR [rbp-0x31]
0x0063b90b: mov    BYTE PTR [rax],0x0
0x0063b90e: cmp    WORD PTR [r13+0x80],0x1
0x0063b917: jne    0x14063b9ca
0x0063b91d: mov    rbx,QWORD PTR [rbp-0x19]
0x0063b921: cmp    rbx,r12
0x0063b924: jb     0x14063b948
0x0063b926: lea    rcx,[rbp-0x31]
0x0063b92a: cmp    rbx,0xf
0x0063b92e: cmova  rcx,QWORD PTR [rbp-0x31]
0x0063b933: mov    QWORD PTR [rbp-0x21],r12
0x0063b937: mov    eax,DWORD PTR [rip+0x10607db]        # 0x14169c118 ; literal="dark"
0x0063b93d: mov    DWORD PTR [rcx],eax
0x0063b93f: mov    BYTE PTR [rcx+0x4],0x0
0x0063b943: jmp    0x14063b9ca
0x0063b948: mov    rcx,rbx
0x0063b94b: shr    rcx,1
0x0063b94e: mov    rax,r14
0x0063b951: sub    rax,rcx
0x0063b954: cmp    rbx,rax
0x0063b957: jbe    0x14063b95e
0x0063b959: mov    rdi,r14
0x0063b95c: jmp    0x14063b96e
0x0063b95e: lea    rax,[rbx+rcx*1]
0x0063b962: mov    edi,0xf
0x0063b967: cmp    rax,rdi
0x0063b96a: cmova  rdi,rax
0x0063b96e: lea    rcx,[rdi+0x1]
0x0063b972: call   0x140070760
0x0063b977: mov    rsi,rax
0x0063b97a: mov    QWORD PTR [rbp-0x21],r12
0x0063b97e: mov    QWORD PTR [rbp-0x19],rdi
0x0063b982: mov    ecx,DWORD PTR [rip+0x1060790]        # 0x14169c118 ; literal="dark"
0x0063b988: mov    DWORD PTR [rax],ecx
0x0063b98a: mov    BYTE PTR [rax+0x4],0x0
0x0063b98e: cmp    rbx,0xf
0x0063b992: jbe    0x14063b9c6
0x0063b994: lea    rdx,[rbx+0x1]
0x0063b998: mov    rcx,QWORD PTR [rbp-0x31]
0x0063b99c: mov    rax,rcx
0x0063b99f: cmp    rdx,0x1000
0x0063b9a6: jb     0x14063b9c1
0x0063b9a8: add    rdx,0x27
0x0063b9ac: mov    rcx,QWORD PTR [rcx-0x8]
0x0063b9b0: sub    rax,rcx
0x0063b9b3: add    rax,0xfffffffffffffff8
0x0063b9b7: cmp    rax,0x1f
0x0063b9bb: ja     0x14063bbf4
0x0063b9c1: call   0x1415345f0
0x0063b9c6: mov    QWORD PTR [rbp-0x31],rsi
0x0063b9ca: mov    r8,QWORD PTR [rbp-0x21]
0x0063b9ce: test   r8,r8
0x0063b9d1: je     0x14063ba00
0x0063b9d3: lea    rdx,[rbp-0x31]
0x0063b9d7: cmp    QWORD PTR [rbp-0x19],0xf
0x0063b9dc: cmova  rdx,QWORD PTR [rbp-0x31]
0x0063b9e1: lea    rcx,[rbp-0x51]
0x0063b9e5: call   0x14006f9a0
0x0063b9ea: mov    r8d,0x1
0x0063b9f0: lea    rdx,[rip+0xfa7d29]        # 0x1415e3720 ; literal=" "
0x0063b9f7: lea    rcx,[rbp-0x51]
0x0063b9fb: call   0x14006f9a0
0x0063ba00: cmp    WORD PTR [r13+0x80],0xa
0x0063ba09: je     0x14063bc00
0x0063ba0f: mov    rcx,r13
0x0063ba12: call   0x1409b26a0
0x0063ba17: test   rax,rax
0x0063ba1a: je     0x14063bc00
0x0063ba20: mov    rcx,rax
0x0063ba23: call   0x14093a660
0x0063ba28: test   rax,rax
0x0063ba2b: je     0x14063bc00
0x0063ba31: mov    ecx,DWORD PTR [rax+0x9c]
0x0063ba37: shr    ecx,0xa
0x0063ba3a: not    ecx
0x0063ba3c: test   cl,0x1
0x0063ba3f: je     0x14063bc00
0x0063ba45: xorps  xmm0,xmm0
0x0063ba48: movups XMMWORD PTR [rbp-0x11],xmm0
0x0063ba4c: mov    ecx,0xf
0x0063ba51: mov    QWORD PTR [rbp+0x7],rcx
0x0063ba55: movsx  rdx,WORD PTR [rax+0x98]
0x0063ba5d: xor    r8d,r8d
0x0063ba60: mov    QWORD PTR [rbp-0x1],r8
0x0063ba64: mov    BYTE PTR [rbp-0x11],r8b
0x0063ba68: test   dx,dx
0x0063ba6b: js     0x14063bab6
0x0063ba6d: mov    rax,QWORD PTR [rip+0x1eaaeec]        # 0x1424e6960
0x0063ba74: mov    r9,QWORD PTR [rip+0x1eaaedd]        # 0x1424e6958
0x0063ba7b: sub    rax,r9
0x0063ba7e: sar    rax,0x3
0x0063ba82: cmp    rdx,rax
0x0063ba85: jae    0x14063bab6
0x0063ba87: mov    rdx,QWORD PTR [r9+rdx*8]
0x0063ba8b: add    rdx,0x60
0x0063ba8f: lea    rax,[rbp-0x11]
0x0063ba93: cmp    rax,rdx
0x0063ba96: je     0x14063bab6
0x0063ba98: mov    r8,QWORD PTR [rdx+0x10]
0x0063ba9c: cmp    QWORD PTR [rdx+0x18],rcx
0x0063baa0: jbe    0x14063baa5
0x0063baa2: mov    rdx,QWORD PTR [rdx]
0x0063baa5: lea    rcx,[rbp-0x11]
0x0063baa9: call   0x14006f860
0x0063baae: mov    rcx,QWORD PTR [rbp+0x7]
0x0063bab2: mov    r8,QWORD PTR [rbp-0x1]
0x0063bab6: lea    rdx,[rbp-0x11]
0x0063baba: cmp    rcx,0xf
0x0063babe: cmova  rdx,QWORD PTR [rbp-0x11]
0x0063bac3: lea    rcx,[rbp-0x51]
0x0063bac7: call   0x14006f9a0
0x0063bacc: mov    rdi,QWORD PTR [rbp-0x41]
0x0063bad0: mov    rsi,QWORD PTR [rbp-0x39]
0x0063bad4: cmp    rdi,rsi
0x0063bad7: jae    0x14063baf9
0x0063bad9: lea    rax,[rdi+0x1]
0x0063badd: mov    QWORD PTR [rbp-0x41],rax
0x0063bae1: lea    rax,[rbp-0x51]
0x0063bae5: cmp    rsi,0xf
0x0063bae9: cmova  rax,QWORD PTR [rbp-0x51]
0x0063baee: mov    WORD PTR [rax+rdi*1],0x20
0x0063baf4: jmp    0x14063bbc2
0x0063baf9: mov    rax,r14
0x0063bafc: sub    rax,rdi
0x0063baff: cmp    rax,0x1
0x0063bb03: jb     0x14063cae2
0x0063bb09: lea    r15,[rdi+0x1]
0x0063bb0d: mov    rbx,r15
0x0063bb10: or     rbx,0xf
0x0063bb14: cmp    rbx,r14
0x0063bb17: jbe    0x14063bb1e
0x0063bb19: mov    rbx,r14
0x0063bb1c: jmp    0x14063bb3f
0x0063bb1e: mov    rcx,rsi
0x0063bb21: shr    rcx,1
0x0063bb24: mov    rax,r14
0x0063bb27: sub    rax,rcx
0x0063bb2a: cmp    rsi,rax
0x0063bb2d: jbe    0x14063bb34
0x0063bb2f: mov    rbx,r14
0x0063bb32: jmp    0x14063bb3f
0x0063bb34: lea    rax,[rsi+rcx*1]
0x0063bb38: cmp    rbx,rax
0x0063bb3b: cmovb  rbx,rax
0x0063bb3f: lea    rcx,[rbx+0x1]
0x0063bb43: call   0x140070760
0x0063bb48: mov    r14,rax
0x0063bb4b: mov    QWORD PTR [rbp-0x41],r15
0x0063bb4f: mov    QWORD PTR [rbp-0x39],rbx
0x0063bb53: mov    r8,rdi
0x0063bb56: mov    rcx,rax
0x0063bb59: cmp    rsi,0xf
0x0063bb5d: jbe    0x14063bba8
0x0063bb5f: mov    rbx,QWORD PTR [rbp-0x51]
0x0063bb63: mov    rdx,rbx
0x0063bb66: call   0x1415359e8
0x0063bb6b: mov    WORD PTR [r14+rdi*1],0x20
0x0063bb72: lea    rdx,[rsi+0x1]
0x0063bb76: cmp    rdx,0x1000
0x0063bb7d: jb     0x14063bb97
0x0063bb7f: add    rdx,0x27
0x0063bb83: mov    rcx,QWORD PTR [rbx-0x8]
0x0063bb87: sub    rbx,rcx
0x0063bb8a: lea    rax,[rbx-0x8]
0x0063bb8e: cmp    rax,0x1f
0x0063bb92: ja     0x14063bba1
0x0063bb94: mov    rbx,rcx
0x0063bb97: mov    rcx,rbx
0x0063bb9a: call   0x1415345f0
0x0063bb9f: jmp    0x14063bbb8
0x0063bba1: call   QWORD PTR [rip+0xfa4ef9]        # 0x1415e0aa0
0x0063bba7: int3
0x0063bba8: lea    rdx,[rbp-0x51]
0x0063bbac: call   0x1415359e8
0x0063bbb1: mov    WORD PTR [r14+rdi*1],0x20
0x0063bbb8: mov    r15d,0x3
0x0063bbbe: mov    QWORD PTR [rbp-0x51],r14
0x0063bbc2: mov    rdx,QWORD PTR [rbp+0x7]
0x0063bbc6: cmp    rdx,0xf
0x0063bbca: jbe    0x14063bc00
0x0063bbcc: inc    rdx
0x0063bbcf: mov    rcx,QWORD PTR [rbp-0x11]
0x0063bbd3: mov    rax,rcx
0x0063bbd6: cmp    rdx,0x1000
0x0063bbdd: jb     0x14063bbfb
0x0063bbdf: add    rdx,0x27
0x0063bbe3: mov    rcx,QWORD PTR [rcx-0x8]
0x0063bbe7: sub    rax,rcx
0x0063bbea: add    rax,0xfffffffffffffff8
0x0063bbee: cmp    rax,0x1f
0x0063bbf2: jbe    0x14063bbfb
0x0063bbf4: call   QWORD PTR [rip+0xfa4ea6]        # 0x1415e0aa0
0x0063bbfa: int3
0x0063bbfb: call   0x1415345f0
0x0063bc00: lea    rdx,[rbp-0x31]
0x0063bc04: mov    rcx,r13
0x0063bc07: call   0x1410c6dc0
0x0063bc0c: lea    rdx,[rbp-0x31]
0x0063bc10: cmp    QWORD PTR [rbp-0x19],0xf
0x0063bc15: cmova  rdx,QWORD PTR [rbp-0x31]
0x0063bc1a: mov    r8,QWORD PTR [rbp-0x21]
0x0063bc1e: lea    rcx,[rbp-0x51]
0x0063bc22: call   0x14006f9a0
0x0063bc27: mov    r8,r15
0x0063bc2a: lea    rdx,[rip+0xfbcc1f]        # 0x1415f8850 ; literal=".  "
0x0063bc31: lea    rcx,[rbp-0x51]
0x0063bc35: call   0x14006f9a0
0x0063bc3a: mov    r8,QWORD PTR [r13+0x98]
0x0063bc41: sub    r8,QWORD PTR [r13+0x90]
0x0063bc48: sar    r8,0x2
0x0063bc4c: mov    rax,QWORD PTR [r13+0x110]
0x0063bc53: sub    rax,QWORD PTR [r13+0x108]
0x0063bc5a: sar    rax,0x2
0x0063bc5e: add    r8d,eax
0x0063bc61: mov    rax,QWORD PTR [r13+0xd8]
0x0063bc68: mov    rcx,QWORD PTR [r13+0xe0]
0x0063bc6f: nop
0x0063bc70: cmp    rax,rcx
0x0063bc73: jae    0x14063bc81
0x0063bc75: mov    rdx,QWORD PTR [rax]
0x0063bc78: add    r8d,DWORD PTR [rdx]
0x0063bc7b: add    rax,0x8
0x0063bc7f: jmp    0x14063bc70
0x0063bc81: test   r8d,r8d
0x0063bc84: jg     0x14063bc98
0x0063bc86: lea    rdx,[rip+0x102181b]        # 0x14165d4a8 ; literal="Nobody lives there"
0x0063bc8d: mov    r8d,0x12
0x0063bc93: jmp    0x14063bd7d
0x0063bc98: cmp    r8d,0xa
0x0063bc9c: jge    0x14063bcb0
0x0063bc9e: lea    rdx,[rip+0x102181b]        # 0x14165d4c0 ; literal="Few live there"
0x0063bca5: mov    r8d,0xe
0x0063bcab: jmp    0x14063bd7d
0x0063bcb0: cmp    r8d,0x18
0x0063bcb4: jg     0x14063bcc8
0x0063bcb6: lea    rdx,[rip+0x1021813]        # 0x14165d4d0 ; literal="A few dozen or less live there"
0x0063bcbd: mov    r8d,0x1e
0x0063bcc3: jmp    0x14063bd7d
0x0063bcc8: cmp    r8d,0x50
0x0063bccc: jge    0x14063bce0
0x0063bcce: lea    rdx,[rip+0x102181b]        # 0x14165d4f0 ; literal="Some dozens live there"
0x0063bcd5: mov    r8d,0x16
0x0063bcdb: jmp    0x14063bd7d
0x0063bce0: cmp    r8d,0x78
0x0063bce4: jge    0x14063bcf8
0x0063bce6: lea    rdx,[rip+0x102173b]        # 0x14165d428 ; literal="Roughly a hundred live there"
0x0063bced: mov    r8d,0x1c
0x0063bcf3: jmp    0x14063bd7d
0x0063bcf8: cmp    r8d,0xaf
0x0063bcff: jge    0x14063bd10
0x0063bd01: lea    rdx,[rip+0x1021740]        # 0x14165d448 ; literal="Well over a hundred live there"
0x0063bd08: mov    r8d,0x1e
0x0063bd0e: jmp    0x14063bd7d
0x0063bd10: cmp    r8d,0xfa
0x0063bd17: jge    0x14063bd28
0x0063bd19: lea    rdx,[rip+0x1021748]        # 0x14165d468 ; literal="A few hundred live there"
0x0063bd20: mov    r8d,0x18
0x0063bd26: jmp    0x14063bd7d
0x0063bd28: cmp    r8d,0x2ee
0x0063bd2f: jge    0x14063bd40
0x0063bd31: lea    rdx,[rip+0x1021750]        # 0x14165d488 ; literal="Several hundred live there"
0x0063bd38: mov    r8d,0x1a
0x0063bd3e: jmp    0x14063bd7d
0x0063bd40: cmp    r8d,0x5dc
0x0063bd47: jge    0x14063bd58
0x0063bd49: lea    rdx,[rip+0x1021318]        # 0x14165d068 ; literal="A thousand live there"
0x0063bd50: mov    r8d,0x15
0x0063bd56: jmp    0x14063bd7d
0x0063bd58: cmp    r8d,0x9c4
0x0063bd5f: jge    0x14063bd70
0x0063bd61: lea    rdx,[rip+0x1021318]        # 0x14165d080 ; literal="A few thousand live there"
0x0063bd68: mov    r8d,0x19
0x0063bd6e: jmp    0x14063bd7d
0x0063bd70: lea    rdx,[rip+0x1021329]        # 0x14165d0a0 ; literal="Thousands live there"
0x0063bd77: mov    r8d,0x14
0x0063bd7d: lea    rcx,[rbp-0x51]
0x0063bd81: call   0x14006f9a0
0x0063bd86: mov    rcx,r13
0x0063bd89: call   0x1409b26a0
0x0063bd8e: mov    rbx,rax
0x0063bd91: test   rax,rax
0x0063bd94: je     0x14063bdbc
0x0063bd96: mov    r8d,0x19
0x0063bd9c: lea    rdx,[rip+0x1021315]        # 0x14165d0b8 ; literal=" and it is controlled by "
0x0063bda3: lea    rcx,[rbp-0x51]
0x0063bda7: call   0x14006f9a0
0x0063bdac: xor    r9d,r9d
0x0063bdaf: mov    r8d,DWORD PTR [rbx+0x4]
0x0063bdb3: lea    rdx,[rbp-0x51]
0x0063bdb7: call   0x140b8f940
0x0063bdbc: mov    r8d,0x1
0x0063bdc2: lea    rdx,[rip+0xfa77ab]        # 0x1415e3574 ; literal="."
0x0063bdc9: lea    rcx,[rbp-0x51]
0x0063bdcd: call   0x14006f9a0
0x0063bdd2: nop
0x0063bdd3: mov    rdx,QWORD PTR [rbp-0x19]
0x0063bdd7: cmp    rdx,0xf
0x0063bddb: jbe    0x14063be11
0x0063bddd: inc    rdx
0x0063bde0: mov    rcx,QWORD PTR [rbp-0x31]
0x0063bde4: mov    rax,rcx
0x0063bde7: cmp    rdx,0x1000
0x0063bdee: jb     0x14063be0c
0x0063bdf0: add    rdx,0x27
0x0063bdf4: mov    rcx,QWORD PTR [rcx-0x8]
0x0063bdf8: sub    rax,rcx
0x0063bdfb: add    rax,0xfffffffffffffff8
0x0063bdff: cmp    rax,0x1f
0x0063be03: jbe    0x14063be0c
0x0063be05: call   QWORD PTR [rip+0xfa4c95]        # 0x1415e0aa0
0x0063be0b: int3
0x0063be0c: call   0x1415345f0
0x0063be11: mov    r13d,0x6
0x0063be17: mov    rsi,QWORD PTR [rbp-0x69]
0x0063be1b: cmp    DWORD PTR [rsi+0x1298],0x2
0x0063be22: jne    0x14063ca95
0x0063be28: mov    rcx,QWORD PTR [rsi+0x12e8]
0x0063be2f: mov    rax,QWORD PTR [rsi+0x12f0]
0x0063be36: sub    rax,rcx
0x0063be39: sar    rax,0x2
0x0063be3d: test   rax,rax
0x0063be40: je     0x14063ca95
0x0063be46: xor    r14d,r14d
0x0063be49: mov    r15d,r14d
0x0063be4c: movsxd rax,DWORD PTR [rsi+0x1350]
0x0063be53: lea    r10,[rax*4+0x0]
0x0063be5b: mov    ecx,DWORD PTR [rcx+r10*1]
0x0063be5f: test   ecx,ecx
0x0063be61: je     0x14063bf92
0x0063be67: cmp    ecx,0x1
0x0063be6a: jne    0x14063c4d5
0x0063be70: mov    r8,QWORD PTR [rsi+0x1300]
0x0063be77: xor    r9d,r9d
0x0063be7a: mov    r8d,DWORD PTR [r10+r8*1]
0x0063be7e: lea    rdx,[rbp-0x51]
0x0063be82: call   0x140b8f940
0x0063be87: mov    r8d,0xe
0x0063be8d: lea    rdx,[rip+0x1021184]        # 0x14165d018 ; literal=" is a religion"
0x0063be94: lea    rcx,[rbp-0x51]
0x0063be98: call   0x14006f9a0
0x0063be9d: movsxd rcx,DWORD PTR [rsi+0x1350]
0x0063bea4: mov    rax,QWORD PTR [rsi+0x1300]
0x0063beab: mov    ecx,DWORD PTR [rax+rcx*4]
0x0063beae: mov    rax,QWORD PTR [rip+0x1d8f83b]        # 0x1423cb6f0
0x0063beb5: sub    rax,QWORD PTR [rip+0x1d8f82c]        # 0x1423cb6e8
0x0063bebc: test   rax,0xfffffffffffffff8
0x0063bec2: je     0x14063c4d5
0x0063bec8: cmp    ecx,0xffffffff
0x0063becb: je     0x14063c4d5
0x0063bed1: lea    rdx,[rip+0x1d8f810]        # 0x1423cb6e8
0x0063bed8: call   0x1400ba030
0x0063bedd: mov    r15,rax
0x0063bee0: test   rax,rax
0x0063bee3: je     0x14063c4d5
0x0063bee9: mov    r10,QWORD PTR [rax+0xfc8]
0x0063bef0: mov    rcx,QWORD PTR [rax+0xfd0]
0x0063bef7: sub    rcx,r10
0x0063befa: sar    rcx,0x2
0x0063befe: test   rcx,rcx
0x0063bf01: je     0x14063c4d5
0x0063bf07: mov    r10d,DWORD PTR [r10]
0x0063bf0a: mov    rcx,QWORD PTR [rip+0x1eb7cff]        # 0x1424f3c10
0x0063bf11: mov    rbx,QWORD PTR [rip+0x1eb7cf0]        # 0x1424f3c08
0x0063bf18: sub    rcx,rbx
0x0063bf1b: sar    rcx,0x3
0x0063bf1f: test   rcx,rcx
0x0063bf22: je     0x14063c4d5
0x0063bf28: cmp    r10d,0xffffffff
0x0063bf2c: je     0x14063c4d5
0x0063bf32: mov    r8d,r14d
0x0063bf35: sub    ecx,0x1
0x0063bf38: js     0x14063c4d5
0x0063bf3e: xchg   ax,ax
0x0063bf40: mov    r11d,ecx
0x0063bf43: lea    edx,[rcx+r8*1]
0x0063bf47: sar    edx,1
0x0063bf49: movsxd rax,edx
0x0063bf4c: mov    rdi,QWORD PTR [rbx+rax*8]
0x0063bf50: cmp    DWORD PTR [rdi+0xe0],r10d
0x0063bf57: je     0x14063bf71
0x0063bf59: lea    ecx,[rdx-0x1]
0x0063bf5c: cmovle ecx,r11d
0x0063bf60: lea    eax,[rdx+0x1]
0x0063bf63: cmovle r8d,eax
0x0063bf67: cmp    r8d,ecx
0x0063bf6a: jle    0x14063bf40
0x0063bf6c: jmp    0x14063c4d5
0x0063bf71: test   rdi,rdi
0x0063bf74: je     0x14063c4d5
0x0063bf7a: mov    r8d,0x19
0x0063bf80: lea    rdx,[rip+0x10210a1]        # 0x14165d028 ; literal=" whose adherents worship "
0x0063bf87: lea    rcx,[rbp-0x51]
0x0063bf8b: call   0x14006f9a0
0x0063bf90: jmp    0x14063bfff
0x0063bf92: mov    rax,QWORD PTR [rsi+0x1300]
0x0063bf99: mov    r10d,DWORD PTR [r10+rax*1]
0x0063bf9d: mov    rcx,QWORD PTR [rip+0x1eb7c6c]        # 0x1424f3c10
0x0063bfa4: mov    rbx,QWORD PTR [rip+0x1eb7c5d]        # 0x1424f3c08
0x0063bfab: sub    rcx,rbx
0x0063bfae: sar    rcx,0x3
0x0063bfb2: test   rcx,rcx
0x0063bfb5: je     0x14063bffc
0x0063bfb7: cmp    r10d,0xffffffff
0x0063bfbb: je     0x14063bffc
0x0063bfbd: mov    r8d,r14d
0x0063bfc0: sub    ecx,0x1
0x0063bfc3: js     0x14063bffc
0x0063bfc5: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x0063bfd0: mov    r11d,ecx
0x0063bfd3: lea    edx,[rcx+r8*1]
0x0063bfd7: sar    edx,1
0x0063bfd9: movsxd rax,edx
0x0063bfdc: mov    rdi,QWORD PTR [rbx+rax*8]
0x0063bfe0: cmp    DWORD PTR [rdi+0xe0],r10d
0x0063bfe7: je     0x14063bfff
0x0063bfe9: lea    ecx,[rdx-0x1]
0x0063bfec: cmovle ecx,r11d
0x0063bff0: lea    eax,[rdx+0x1]
0x0063bff3: cmovle r8d,eax
0x0063bff7: cmp    r8d,ecx
0x0063bffa: jle    0x14063bfd0
0x0063bffc: mov    rdi,r14
0x0063bfff: test   rdi,rdi
0x0063c002: je     0x14063c4d5
0x0063c008: xorps  xmm0,xmm0
0x0063c00b: movups XMMWORD PTR [rbp+0xf],xmm0
0x0063c00f: mov    QWORD PTR [rbp+0x1f],r14
0x0063c013: mov    QWORD PTR [rbp+0x27],0xf
0x0063c01b: mov    BYTE PTR [rbp+0xf],r14b
0x0063c01f: lea    rcx,[rdi+0x38]
0x0063c023: xor    r9d,r9d
0x0063c026: mov    r8b,0x1
0x0063c029: lea    rdx,[rbp+0xf]
0x0063c02d: call   0x140a91760
0x0063c032: lea    rdx,[rbp+0xf]
0x0063c036: cmp    QWORD PTR [rbp+0x27],0xf
0x0063c03b: cmova  rdx,QWORD PTR [rbp+0xf]
0x0063c040: mov    r8,QWORD PTR [rbp+0x1f]
0x0063c044: lea    rcx,[rbp-0x51]
0x0063c048: call   0x14006f9a0
0x0063c04d: cmp    DWORD PTR [rdi+0xd0],0x0
0x0063c054: jle    0x14063c339
0x0063c05a: mov    rax,QWORD PTR [rdi+0xc8]
0x0063c061: test   BYTE PTR [rax],0x4
0x0063c064: jne    0x14063c15e
0x0063c06a: test   BYTE PTR [rax],0x8
0x0063c06d: je     0x14063c339
0x0063c073: mov    r8d,0xb
0x0063c079: test   r15,r15
0x0063c07c: mov    eax,0xd
0x0063c081: cmove  r8d,eax
0x0063c085: lea    rax,[rip+0x1020fcc]        # 0x14165d058 ; literal=" is the force"
0x0063c08c: lea    rdx,[rip+0x102147d]        # 0x14165d510 ; literal=", the force"
0x0063c093: cmove  rdx,rax
0x0063c097: lea    rcx,[rbp-0x51]
0x0063c09b: call   0x14006f9a0
0x0063c0a0: mov    edx,DWORD PTR [rdi+0xe0]
0x0063c0a6: mov    rcx,QWORD PTR [rip+0x1ea999b]        # 0x1424e5a48
0x0063c0ad: call   0x1405c1180
0x0063c0b2: mov    rbx,rax
0x0063c0b5: test   rax,rax
0x0063c0b8: je     0x14063c4b5
0x0063c0be: mov    r8d,0x11
0x0063c0c4: lea    rdx,[rip+0x1021455]        # 0x14165d520 ; literal=" which permeates "
0x0063c0cb: lea    rcx,[rbp-0x51]
0x0063c0cf: call   0x14006f9a0
0x0063c0d4: xorps  xmm0,xmm0
0x0063c0d7: movups XMMWORD PTR [rbp-0x31],xmm0
0x0063c0db: mov    QWORD PTR [rbp-0x21],r14
0x0063c0df: mov    QWORD PTR [rbp-0x19],0xf
0x0063c0e7: mov    BYTE PTR [rbp-0x31],0x0
0x0063c0eb: xor    r9d,r9d
0x0063c0ee: mov    r8b,0x1
0x0063c0f1: lea    rdx,[rbp-0x31]
0x0063c0f5: mov    rcx,rbx
0x0063c0f8: call   0x140a91760
0x0063c0fd: lea    rdx,[rbp-0x31]
0x0063c101: cmp    QWORD PTR [rbp-0x19],0xf
0x0063c106: cmova  rdx,QWORD PTR [rbp-0x31]
0x0063c10b: mov    r8,QWORD PTR [rbp-0x21]
0x0063c10f: lea    rcx,[rbp-0x51]
0x0063c113: call   0x14006f9a0
0x0063c118: nop
0x0063c119: mov    rdx,QWORD PTR [rbp-0x19]
0x0063c11d: cmp    rdx,0xf
0x0063c121: jbe    0x14063c4b5
0x0063c127: inc    rdx
0x0063c12a: mov    rcx,QWORD PTR [rbp-0x31]
0x0063c12e: mov    rax,rcx
0x0063c131: cmp    rdx,0x1000
0x0063c138: jb     0x14063c4b0
0x0063c13e: add    rdx,0x27
0x0063c142: mov    rcx,QWORD PTR [rcx-0x8]
0x0063c146: sub    rax,rcx
0x0063c149: add    rax,0xfffffffffffffff8
0x0063c14d: cmp    rax,0x1f
0x0063c151: jbe    0x14063c4b0
0x0063c157: call   QWORD PTR [rip+0xfa4943]        # 0x1415e0aa0
0x0063c15d: int3
0x0063c15e: lea    rbx,[rbp-0x51]
0x0063c162: mov    eax,0x8
0x0063c167: test   r15,r15
0x0063c16a: cmove  r13,rax
0x0063c16e: lea    rax,[rip+0x1020ed3]        # 0x14165d048 ; literal=" is the "
0x0063c175: lea    rdx,[rip+0x10213e4]        # 0x14165d560 ; literal=", the "
0x0063c17c: cmove  rdx,rax
0x0063c180: mov    r8,r13
0x0063c183: mov    rcx,rbx
0x0063c186: call   0x14006f9a0
0x0063c18b: movzx  ecx,WORD PTR [rdi+0x2]
0x0063c18f: cmp    cx,0xffff
0x0063c193: je     0x14063c1fb
0x0063c195: cmp    cx,WORD PTR [rsi+0x78]
0x0063c199: je     0x14063c1fb
0x0063c19b: xorps  xmm0,xmm0
0x0063c19e: movups XMMWORD PTR [rbp-0x31],xmm0
0x0063c1a2: mov    QWORD PTR [rbp-0x21],r14
0x0063c1a6: mov    QWORD PTR [rbp-0x19],0xf
0x0063c1ae: mov    BYTE PTR [rbp-0x31],0x0
0x0063c1b2: movzx  r8d,WORD PTR [rdi+0x4]
0x0063c1b7: lea    rdx,[rbp-0x31]
0x0063c1bb: call   0x140aa07f0
0x0063c1c0: lea    rdx,[rbp-0x31]
0x0063c1c4: cmp    QWORD PTR [rbp-0x19],0xf
0x0063c1c9: cmova  rdx,QWORD PTR [rbp-0x31]
0x0063c1ce: mov    r8,QWORD PTR [rbp-0x21]
0x0063c1d2: lea    rcx,[rbp-0x51]
0x0063c1d6: call   0x14006f9a0
0x0063c1db: mov    r8d,0x1
0x0063c1e1: lea    rdx,[rip+0xfa7538]        # 0x1415e3720 ; literal=" "
0x0063c1e8: lea    rcx,[rbp-0x51]
0x0063c1ec: call   0x14006f9a0
0x0063c1f1: nop
0x0063c1f2: lea    rcx,[rbp-0x31]
0x0063c1f6: call   0x14006f7e0
0x0063c1fb: movzx  eax,BYTE PTR [rdi+0x6]
0x0063c1ff: test   al,al
0x0063c201: jne    0x14063c212
0x0063c203: lea    rdx,[rip+0x102135e]        # 0x14165d568 ; literal="goddess"
0x0063c20a: mov    r8d,0x7
0x0063c210: jmp    0x14063c232
0x0063c212: cmp    al,0x1
0x0063c214: jne    0x14063c225
0x0063c216: lea    rdx,[rip+0x1021353]        # 0x14165d570 ; literal="god"
0x0063c21d: mov    r8d,0x3
0x0063c223: jmp    0x14063c232
0x0063c225: lea    rdx,[rip+0x10212dc]        # 0x14165d508 ; literal="deity"
0x0063c22c: mov    r8d,0x5
0x0063c232: mov    rcx,rbx
0x0063c235: call   0x14006f9a0
0x0063c23a: mov    rcx,QWORD PTR [rdi+0x130]
0x0063c241: test   rcx,rcx
0x0063c244: je     0x14063c4b5
0x0063c24a: mov    rcx,QWORD PTR [rcx]
0x0063c24d: test   rcx,rcx
0x0063c250: je     0x14063c4b5
0x0063c256: mov    rax,QWORD PTR [rcx+0x8]
0x0063c25a: sub    rax,QWORD PTR [rcx]
0x0063c25d: sar    rax,1
0x0063c260: je     0x14063c4b5
0x0063c266: mov    r8,r12
0x0063c269: lea    rdx,[rip+0xfaa260]        # 0x1415e64d0 ; literal=" of "
0x0063c270: lea    rcx,[rbp-0x51]
0x0063c274: call   0x14006f9a0
0x0063c279: xorps  xmm0,xmm0
0x0063c27c: movups XMMWORD PTR [rbp-0x31],xmm0
0x0063c280: mov    QWORD PTR [rbp-0x21],r14
0x0063c284: mov    QWORD PTR [rbp-0x19],0xf
0x0063c28c: mov    BYTE PTR [rbp-0x31],0x0
0x0063c290: mov    rax,QWORD PTR [rdi+0x130]
0x0063c297: mov    rcx,QWORD PTR [rax]
0x0063c29a: mov    rax,QWORD PTR [rcx+0x8]
0x0063c29e: sub    rax,QWORD PTR [rcx]
0x0063c2a1: sar    rax,1
0x0063c2a4: sub    eax,0x1
0x0063c2a7: movsxd rbx,eax
0x0063c2aa: js     0x14063c307
0x0063c2ac: nop    DWORD PTR [rax+0x0]
0x0063c2b0: mov    rax,QWORD PTR [rdi+0x130]
0x0063c2b7: mov    rcx,QWORD PTR [rax]
0x0063c2ba: mov    rcx,QWORD PTR [rcx]
0x0063c2bd: lea    rdx,[rbp-0x31]
0x0063c2c1: movzx  ecx,WORD PTR [rcx+rbx*2]
0x0063c2c5: call   0x140753f20
0x0063c2ca: lea    rdx,[rbp-0x31]
0x0063c2ce: cmp    QWORD PTR [rbp-0x19],0xf
0x0063c2d3: cmova  rdx,QWORD PTR [rbp-0x31]
0x0063c2d8: mov    r8,QWORD PTR [rbp-0x21]
0x0063c2dc: lea    rcx,[rbp-0x51]
0x0063c2e0: call   0x14006f9a0
0x0063c2e5: cmp    rbx,0x2
0x0063c2e9: jl     0x14063c315
0x0063c2eb: mov    r8d,0x2
0x0063c2f1: lea    rdx,[rip+0xfa7dcc]        # 0x1415e40c4 ; literal=", "
0x0063c2f8: lea    rcx,[rbp-0x51]
0x0063c2fc: call   0x14006f9a0
0x0063c301: sub    rbx,0x1
0x0063c305: jns    0x14063c2b0
0x0063c307: lea    rcx,[rbp-0x31]
0x0063c30b: call   0x14006f7e0
0x0063c310: jmp    0x14063c4b5
0x0063c315: cmp    rbx,0x1
0x0063c319: jne    0x14063c301
0x0063c31b: mov    r8d,0x5
0x0063c321: lea    rdx,[rip+0xfa7d94]        # 0x1415e40bc ; literal=" and "
0x0063c328: lea    rcx,[rbp-0x51]
0x0063c32c: call   0x14006f9a0
0x0063c331: dec    rbx
0x0063c334: jmp    0x14063c2b0
0x0063c339: cmp    WORD PTR [rdi+0x2],0xffff
0x0063c33e: je     0x14063c4b5
0x0063c344: test   r15,r15
0x0063c347: cmove  r12,r13
0x0063c34b: lea    rdx,[rip+0xfbbed6]        # 0x1415f8228 ; literal=", a "
0x0063c352: lea    rax,[rip+0x100829b]        # 0x1416445f4 ; literal=" is a "
0x0063c359: cmove  rdx,rax
0x0063c35d: mov    r8,r12
0x0063c360: lea    rcx,[rbp-0x51]
0x0063c364: call   0x14006f9a0
0x0063c369: xorps  xmm0,xmm0
0x0063c36c: movups XMMWORD PTR [rbp-0x31],xmm0
0x0063c370: mov    QWORD PTR [rbp-0x21],r14
0x0063c374: mov    QWORD PTR [rbp-0x19],0xf
0x0063c37c: mov    BYTE PTR [rbp-0x31],0x0
0x0063c380: movsx  rdx,WORD PTR [rdi+0x4]
0x0063c385: movsx  rbx,WORD PTR [rdi+0x2]
0x0063c38a: mov    QWORD PTR [rbp-0x41],r14
0x0063c38e: lea    rax,[rbp-0x51]
0x0063c392: cmp    QWORD PTR [rbp-0x39],0xf
0x0063c397: cmova  rax,QWORD PTR [rbp-0x51]
0x0063c39c: mov    BYTE PTR [rax],0x0
0x0063c39f: cmp    dx,0xffff
0x0063c3a3: je     0x14063c41f
0x0063c3a5: test   bx,bx
0x0063c3a8: js     0x14063c41f
0x0063c3aa: mov    rax,QWORD PTR [rip+0x1eaa5af]        # 0x1424e6960
0x0063c3b1: mov    rcx,QWORD PTR [rip+0x1eaa5a0]        # 0x1424e6958
0x0063c3b8: sub    rax,rcx
0x0063c3bb: sar    rax,0x3
0x0063c3bf: cmp    rbx,rax
0x0063c3c2: jae    0x14063c42b
0x0063c3c4: test   dx,dx
0x0063c3c7: js     0x14063c42b
0x0063c3c9: mov    rax,QWORD PTR [rcx+rbx*8]
0x0063c3cd: mov    r8,QWORD PTR [rax+0x178]
0x0063c3d4: mov    rax,QWORD PTR [rax+0x180]
0x0063c3db: sub    rax,r8
0x0063c3de: sar    rax,0x3
0x0063c3e2: cmp    rdx,rax
0x0063c3e5: jae    0x14063c42b
0x0063c3e7: mov    rdx,QWORD PTR [r8+rdx*8]
0x0063c3eb: add    rdx,0x20
0x0063c3ef: lea    rax,[rbp-0x51]
0x0063c3f3: cmp    rax,rdx
0x0063c3f6: je     0x14063c416
0x0063c3f8: mov    r8,QWORD PTR [rdx+0x10]
0x0063c3fc: cmp    QWORD PTR [rdx+0x18],0xf
0x0063c401: jbe    0x14063c406
0x0063c403: mov    rdx,QWORD PTR [rdx]
0x0063c406: lea    rcx,[rbp-0x51]
0x0063c40a: call   0x14006f860
0x0063c40f: mov    rcx,QWORD PTR [rip+0x1eaa542]        # 0x1424e6958
0x0063c416: cmp    QWORD PTR [rbp-0x41],0x0
0x0063c41b: ja     0x14063c466
0x0063c41d: jmp    0x14063c426
0x0063c41f: mov    rcx,QWORD PTR [rip+0x1eaa532]        # 0x1424e6958
0x0063c426: test   bx,bx
0x0063c429: js     0x14063c466
0x0063c42b: mov    rax,QWORD PTR [rip+0x1eaa52e]        # 0x1424e6960
0x0063c432: sub    rax,rcx
0x0063c435: sar    rax,0x3
0x0063c439: cmp    rbx,rax
0x0063c43c: jae    0x14063c466
0x0063c43e: mov    rdx,QWORD PTR [rcx+rbx*8]
0x0063c442: add    rdx,0x20
0x0063c446: lea    rax,[rbp-0x51]
0x0063c44a: cmp    rax,rdx
0x0063c44d: je     0x14063c466
0x0063c44f: mov    r8,QWORD PTR [rdx+0x10]
0x0063c453: cmp    QWORD PTR [rdx+0x18],0xf
0x0063c458: jbe    0x14063c45d
0x0063c45a: mov    rdx,QWORD PTR [rdx]
0x0063c45d: lea    rcx,[rbp-0x51]
0x0063c461: call   0x14006f860
0x0063c466: xor    r8d,r8d
0x0063c469: lea    rdx,[rbp-0x31]
0x0063c46d: lea    rcx,[rbp-0x51]
0x0063c471: call   0x14006f9a0
0x0063c476: nop
0x0063c477: mov    rdx,QWORD PTR [rbp-0x19]
0x0063c47b: cmp    rdx,0xf
0x0063c47f: jbe    0x14063c4b5
0x0063c481: inc    rdx
0x0063c484: mov    rcx,QWORD PTR [rbp-0x31]
0x0063c488: mov    rax,rcx
0x0063c48b: cmp    rdx,0x1000
0x0063c492: jb     0x14063c4b0
0x0063c494: add    rdx,0x27
0x0063c498: mov    rcx,QWORD PTR [rcx-0x8]
0x0063c49c: sub    rax,rcx
0x0063c49f: add    rax,0xfffffffffffffff8
0x0063c4a3: cmp    rax,0x1f
0x0063c4a7: jbe    0x14063c4b0
0x0063c4a9: call   QWORD PTR [rip+0xfa45f1]        # 0x1415e0aa0
0x0063c4af: int3
0x0063c4b0: call   0x1415345f0
0x0063c4b5: mov    r8d,0x1
0x0063c4bb: lea    rdx,[rip+0xfa70b2]        # 0x1415e3574 ; literal="."
0x0063c4c2: lea    rcx,[rbp-0x51]
0x0063c4c6: call   0x14006f9a0
0x0063c4cb: nop
0x0063c4cc: lea    rcx,[rbp+0xf]
0x0063c4d0: call   0x14006f7e0
0x0063c4d5: mov    rcx,QWORD PTR [rsi+0x1288]
0x0063c4dc: mov    rax,QWORD PTR [rsi+0x1280]
0x0063c4e3: mov    rdx,rcx
0x0063c4e6: sub    rdx,rax
0x0063c4e9: sar    rdx,0x3
0x0063c4ed: test   rdx,rdx
0x0063c4f0: je     0x14063ca95
0x0063c4f6: test   r15,r15
0x0063c4f9: je     0x14063ca95
0x0063c4ff: cmp    rax,rcx
0x0063c502: je     0x14063ca95
0x0063c508: mov    edx,DWORD PTR [rsi+0x340]
0x0063c50e: xchg   ax,ax
0x0063c510: mov    r13,QWORD PTR [rax]
0x0063c513: cmp    DWORD PTR [r13+0x88],edx
0x0063c51a: je     0x14063c52a
0x0063c51c: add    rax,0x8
0x0063c520: cmp    rax,rcx
0x0063c523: jne    0x14063c510
0x0063c525: jmp    0x14063ca95
0x0063c52a: mov    r12,r14
0x0063c52d: mov    QWORD PTR [rbp-0x59],r14
0x0063c531: mov    rbx,QWORD PTR [r13+0x2b0]
0x0063c538: mov    rdi,QWORD PTR [r13+0x2b8]
0x0063c53f: nop
0x0063c540: cmp    rbx,rdi
0x0063c543: jae    0x14063c5ae
0x0063c545: mov    rcx,QWORD PTR [rbx]
0x0063c548: mov    edx,DWORD PTR [rcx+0x30]
0x0063c54b: test   edx,edx
0x0063c54d: jle    0x14063c562
0x0063c54f: mov    rax,QWORD PTR [rcx+0x28]
0x0063c553: test   BYTE PTR [rax],0x2
0x0063c556: jne    0x14063c59e
0x0063c558: test   BYTE PTR [rax],0x1
0x0063c55b: je     0x14063c562
0x0063c55d: mov    sil,0x1
0x0063c560: jmp    0x14063c569
0x0063c562: xor    sil,sil
0x0063c565: test   edx,edx
0x0063c567: jle    0x14063c575
0x0063c569: mov    rax,QWORD PTR [rcx+0x28]
0x0063c56d: test   BYTE PTR [rax],0x8
0x0063c570: je     0x14063c575
0x0063c572: mov    sil,0x1
0x0063c575: mov    rax,QWORD PTR [rcx]
0x0063c578: call   QWORD PTR [rax]
0x0063c57a: cmp    ax,0x2
0x0063c57e: jne    0x14063c59e
0x0063c580: mov    r14,QWORD PTR [rbx]
0x0063c583: mov    rax,QWORD PTR [r14]
0x0063c586: mov    rcx,r14
0x0063c589: call   QWORD PTR [rax+0x38]
0x0063c58c: cmp    eax,DWORD PTR [r15+0x4]
0x0063c590: jne    0x14063c59a
0x0063c592: test   sil,sil
0x0063c595: je     0x14063c5a4
0x0063c597: mov    r12,r14
0x0063c59a: mov    r14,QWORD PTR [rbp-0x59]
0x0063c59e: add    rbx,0x8
0x0063c5a2: jmp    0x14063c540
0x0063c5a4: mov    QWORD PTR [rbp-0x59],r14
0x0063c5a8: add    rbx,0x8
0x0063c5ac: jmp    0x14063c540
0x0063c5ae: test   r14,r14
0x0063c5b1: je     0x14063c814
0x0063c5b7: mov    rbx,QWORD PTR [rbp-0x69]
0x0063c5bb: xorps  xmm0,xmm0
0x0063c5be: movdqu XMMWORD PTR [rbp-0x31],xmm0
0x0063c5c3: xor    r12d,r12d
0x0063c5c6: mov    QWORD PTR [rbp-0x21],r12
0x0063c5ca: mov    ecx,0x20
0x0063c5cf: call   0x141534600
0x0063c5d4: xorps  xmm0,xmm0
0x0063c5d7: movups XMMWORD PTR [rax],xmm0
0x0063c5da: mov    QWORD PTR [rax+0x10],r12
0x0063c5de: mov    QWORD PTR [rax+0x18],0xf
0x0063c5e6: mov    BYTE PTR [rax],r12b
0x0063c5e9: mov    QWORD PTR [rbp-0x61],rax
0x0063c5ed: lea    rcx,[rbp-0x51]
0x0063c5f1: cmp    rax,rcx
0x0063c5f4: je     0x14063c610
0x0063c5f6: lea    rdx,[rbp-0x51]
0x0063c5fa: cmp    QWORD PTR [rbp-0x39],0xf
0x0063c5ff: cmova  rdx,QWORD PTR [rbp-0x51]
0x0063c604: mov    r8,QWORD PTR [rbp-0x41]
0x0063c608: mov    rcx,rax
0x0063c60b: call   0x14006f860
0x0063c610: lea    r8,[rbp-0x61]
0x0063c614: xor    edx,edx
0x0063c616: lea    rcx,[rbp-0x31]
0x0063c61a: call   0x1400bacc0
0x0063c61f: mov    r8d,0x1b
0x0063c625: lea    rdx,[rbp-0x31]
0x0063c629: lea    rcx,[rbx+0x1330]
0x0063c630: call   0x1408e4cb0
0x0063c635: nop
0x0063c636: mov    rbx,QWORD PTR [rbp-0x29]
0x0063c63a: mov    rax,rbx
0x0063c63d: mov    rsi,QWORD PTR [rbp-0x31]
0x0063c641: sub    rax,rsi
0x0063c644: sar    rax,0x3
0x0063c648: test   rax,rax
0x0063c64b: je     0x14063c69e
0x0063c64d: lea    r14,[rsi+0x8]
0x0063c651: mov    r15,rsi
0x0063c654: neg    r15
0x0063c657: mov    rdi,QWORD PTR [rsi]
0x0063c65a: test   rdi,rdi
0x0063c65d: je     0x14063c674
0x0063c65f: mov    rcx,rdi
0x0063c662: call   0x14006f7e0
0x0063c667: mov    edx,0x20
0x0063c66c: mov    rcx,rdi
0x0063c66f: call   0x1415345f0
0x0063c674: mov    r8,rbx
0x0063c677: sub    r8,r14
0x0063c67a: mov    rdx,r14
0x0063c67d: mov    rcx,rsi
0x0063c680: call   0x141535d8a
0x0063c685: sub    rbx,0x8
0x0063c689: lea    rax,[r15+rbx*1]
0x0063c68d: sar    rax,0x3
0x0063c691: test   rax,rax
0x0063c694: jne    0x14063c657
0x0063c696: mov    QWORD PTR [rbp-0x29],rbx
0x0063c69a: mov    r14,QWORD PTR [rbp-0x59]
0x0063c69e: lea    rcx,[rbp-0x31]
0x0063c6a2: call   0x140066b00
0x0063c6a7: mov    rsi,QWORD PTR [rbp-0x69]
0x0063c6ab: mov    ecx,0x20
0x0063c6b0: call   0x141534600
0x0063c6b5: mov    rbx,rax
0x0063c6b8: xorps  xmm0,xmm0
0x0063c6bb: movups XMMWORD PTR [rax],xmm0
0x0063c6be: mov    QWORD PTR [rax+0x10],r12
0x0063c6c2: mov    QWORD PTR [rax+0x18],0xf
0x0063c6ca: mov    BYTE PTR [rax],0x0
0x0063c6cd: mov    QWORD PTR [rbp-0x61],rax
0x0063c6d1: xor    r8d,r8d
0x0063c6d4: lea    rdx,[rip+0xfa9dd5]        # 0x1415e64b0
0x0063c6db: mov    rcx,rax
0x0063c6de: call   0x14006f860
0x0063c6e3: mov    rdx,QWORD PTR [rsi+0x1338]
0x0063c6ea: cmp    rdx,QWORD PTR [rsi+0x1340]
0x0063c6f1: je     0x14063c700
0x0063c6f3: mov    QWORD PTR [rdx],rbx
0x0063c6f6: add    QWORD PTR [rsi+0x1338],0x8
0x0063c6fe: jmp    0x14063c710
0x0063c700: lea    r8,[rbp-0x61]
0x0063c704: lea    rcx,[rsi+0x1330]
0x0063c70b: call   0x1400bacc0
0x0063c710: mov    rdi,QWORD PTR [rbp-0x39]
0x0063c714: cmp    rdi,0x10
0x0063c718: jb     0x14063c74d
0x0063c71a: lea    rbx,[rbp-0x51]
0x0063c71e: cmp    rdi,0xf
0x0063c722: cmova  rbx,QWORD PTR [rbp-0x51]
0x0063c727: mov    QWORD PTR [rbp-0x41],0x10
0x0063c72f: mov    r8d,0x10
0x0063c735: lea    rdx,[rip+0x1020894]        # 0x14165cfd0 ; literal="They worship at "
0x0063c73c: mov    rcx,rbx
0x0063c73f: call   0x141535d8a
0x0063c744: mov    BYTE PTR [rbx+0x10],0x0
0x0063c748: jmp    0x14063c7db
0x0063c74d: mov    rcx,rdi
0x0063c750: shr    rcx,1
0x0063c753: movabs r15,0x7fffffffffffffff
0x0063c75d: mov    rax,r15
0x0063c760: sub    rax,rcx
0x0063c763: cmp    rdi,rax
0x0063c766: ja     0x14063c779
0x0063c768: lea    rax,[rcx+rdi*1]
0x0063c76c: mov    r15d,0x1f
0x0063c772: cmp    rax,r15
0x0063c775: cmova  r15,rax
0x0063c779: lea    rcx,[r15+0x1]
0x0063c77d: call   0x140070760
0x0063c782: mov    rbx,rax
0x0063c785: mov    QWORD PTR [rbp-0x41],0x10
0x0063c78d: mov    QWORD PTR [rbp-0x39],r15
0x0063c791: movups xmm0,XMMWORD PTR [rip+0x1020838]        # 0x14165cfd0 ; literal="They worship at "
0x0063c798: movups XMMWORD PTR [rax],xmm0
0x0063c79b: mov    BYTE PTR [rax+0x10],0x0
0x0063c79f: cmp    rdi,0xf
0x0063c7a3: jbe    0x14063c7d7
0x0063c7a5: lea    rdx,[rdi+0x1]
0x0063c7a9: mov    rcx,QWORD PTR [rbp-0x51]
0x0063c7ad: mov    rax,rcx
0x0063c7b0: cmp    rdx,0x1000
0x0063c7b7: jb     0x14063c7d2
0x0063c7b9: add    rdx,0x27
0x0063c7bd: mov    rcx,QWORD PTR [rcx-0x8]
0x0063c7c1: sub    rax,rcx
0x0063c7c4: add    rax,0xfffffffffffffff8
0x0063c7c8: cmp    rax,0x1f
0x0063c7cc: ja     0x14063ca4a
0x0063c7d2: call   0x1415345f0
0x0063c7d7: mov    QWORD PTR [rbp-0x51],rbx
0x0063c7db: mov    DWORD PTR [rsp+0x28],r12d
0x0063c7e0: mov    BYTE PTR [rsp+0x20],0x1
0x0063c7e5: mov    r9d,DWORD PTR [r14+0x8]
0x0063c7e9: mov    r8d,DWORD PTR [r13+0x88]
0x0063c7f0: lea    rdx,[rbp-0x51]
0x0063c7f4: call   0x140b910d0
0x0063c7f9: mov    r8d,0x1
0x0063c7ff: lea    rdx,[rip+0xfa6d6e]        # 0x1415e3574 ; literal="."
0x0063c806: lea    rcx,[rbp-0x51]
0x0063c80a: call   0x14006f9a0
0x0063c80f: jmp    0x14063ca95
0x0063c814: test   r12,r12
0x0063c817: je     0x14063ca91
0x0063c81d: mov    rbx,QWORD PTR [rbp-0x69]
0x0063c821: xorps  xmm0,xmm0
0x0063c824: movdqu XMMWORD PTR [rbp-0x31],xmm0
0x0063c829: xor    r14d,r14d
0x0063c82c: mov    QWORD PTR [rbp-0x21],r14
0x0063c830: mov    ecx,0x20
0x0063c835: call   0x141534600
0x0063c83a: xorps  xmm0,xmm0
0x0063c83d: movups XMMWORD PTR [rax],xmm0
0x0063c840: mov    QWORD PTR [rax+0x10],r14
0x0063c844: mov    QWORD PTR [rax+0x18],0xf
0x0063c84c: mov    BYTE PTR [rax],r14b
0x0063c84f: mov    QWORD PTR [rbp-0x61],rax
0x0063c853: lea    rcx,[rbp-0x51]
0x0063c857: cmp    rax,rcx
0x0063c85a: je     0x14063c876
0x0063c85c: lea    rdx,[rbp-0x51]
0x0063c860: cmp    QWORD PTR [rbp-0x39],0xf
0x0063c865: cmova  rdx,QWORD PTR [rbp-0x51]
0x0063c86a: mov    r8,QWORD PTR [rbp-0x41]
0x0063c86e: mov    rcx,rax
0x0063c871: call   0x14006f860
0x0063c876: lea    r8,[rbp-0x61]
0x0063c87a: xor    edx,edx
0x0063c87c: lea    rcx,[rbp-0x31]
0x0063c880: call   0x1400bacc0
0x0063c885: mov    r8d,0x1b
0x0063c88b: lea    rdx,[rbp-0x31]
0x0063c88f: lea    rcx,[rbx+0x1330]
0x0063c896: call   0x1408e4cb0
0x0063c89b: nop
0x0063c89c: mov    rbx,QWORD PTR [rbp-0x29]
0x0063c8a0: mov    rax,rbx
0x0063c8a3: mov    rsi,QWORD PTR [rbp-0x31]
0x0063c8a7: sub    rax,rsi
0x0063c8aa: sar    rax,0x3
0x0063c8ae: test   rax,rax
0x0063c8b1: je     0x14063c906
0x0063c8b3: lea    r14,[rsi+0x8]
0x0063c8b7: mov    r15,rsi
0x0063c8ba: neg    r15
0x0063c8bd: nop    DWORD PTR [rax]
0x0063c8c0: mov    rdi,QWORD PTR [rsi]
0x0063c8c3: test   rdi,rdi
0x0063c8c6: je     0x14063c8dd
0x0063c8c8: mov    rcx,rdi
0x0063c8cb: call   0x14006f7e0
0x0063c8d0: mov    edx,0x20
0x0063c8d5: mov    rcx,rdi
0x0063c8d8: call   0x1415345f0
0x0063c8dd: mov    r8,rbx
0x0063c8e0: sub    r8,r14
0x0063c8e3: mov    rdx,r14
0x0063c8e6: mov    rcx,rsi
0x0063c8e9: call   0x141535d8a
0x0063c8ee: sub    rbx,0x8
0x0063c8f2: lea    rax,[r15+rbx*1]
0x0063c8f6: sar    rax,0x3
0x0063c8fa: test   rax,rax
0x0063c8fd: jne    0x14063c8c0
0x0063c8ff: mov    QWORD PTR [rbp-0x29],rbx
0x0063c903: xor    r14d,r14d
0x0063c906: lea    rcx,[rbp-0x31]
0x0063c90a: call   0x140066b00
0x0063c90f: mov    rsi,QWORD PTR [rbp-0x69]
0x0063c913: mov    ecx,0x20
0x0063c918: call   0x141534600
0x0063c91d: mov    rbx,rax
0x0063c920: xorps  xmm0,xmm0
0x0063c923: movups XMMWORD PTR [rax],xmm0
0x0063c926: mov    QWORD PTR [rax+0x10],r14
0x0063c92a: mov    QWORD PTR [rax+0x18],0xf
0x0063c932: mov    BYTE PTR [rax],0x0
0x0063c935: mov    QWORD PTR [rbp-0x61],rax
0x0063c939: xor    r8d,r8d
0x0063c93c: lea    rdx,[rip+0xfa9b6d]        # 0x1415e64b0
0x0063c943: mov    rcx,rax
0x0063c946: call   0x14006f860
0x0063c94b: mov    rdx,QWORD PTR [rsi+0x1338]
0x0063c952: cmp    rdx,QWORD PTR [rsi+0x1340]
0x0063c959: je     0x14063c968
0x0063c95b: mov    QWORD PTR [rdx],rbx
0x0063c95e: add    QWORD PTR [rsi+0x1338],0x8
0x0063c966: jmp    0x14063c978
0x0063c968: lea    r8,[rbp-0x61]
0x0063c96c: lea    rcx,[rsi+0x1330]
0x0063c973: call   0x1400bacc0
0x0063c978: mov    rdi,QWORD PTR [rbp-0x39]
0x0063c97c: cmp    rdi,0xd
0x0063c980: jb     0x14063c9b3
0x0063c982: lea    rbx,[rbp-0x51]
0x0063c986: cmp    rdi,0xf
0x0063c98a: cmova  rbx,QWORD PTR [rbp-0x51]
0x0063c98f: mov    eax,0xd
0x0063c994: mov    QWORD PTR [rbp-0x41],rax
0x0063c998: mov    r8d,eax
0x0063c99b: lea    rdx,[rip+0x1020646]        # 0x14165cfe8 ; literal="Their temple "
0x0063c9a2: mov    rcx,rbx
0x0063c9a5: call   0x141535d8a
0x0063c9aa: mov    BYTE PTR [rbx+0xd],0x0
0x0063c9ae: jmp    0x14063ca5a
0x0063c9b3: mov    rcx,rdi
0x0063c9b6: shr    rcx,1
0x0063c9b9: movabs r15,0x7fffffffffffffff
0x0063c9c3: mov    rax,r15
0x0063c9c6: sub    rax,rcx
0x0063c9c9: cmp    rdi,rax
0x0063c9cc: ja     0x14063c9df
0x0063c9ce: lea    rax,[rcx+rdi*1]
0x0063c9d2: mov    r15d,0xf
0x0063c9d8: cmp    rax,r15
0x0063c9db: cmova  r15,rax
0x0063c9df: lea    rcx,[r15+0x1]
0x0063c9e3: call   0x140070760
0x0063c9e8: mov    rbx,rax
0x0063c9eb: mov    eax,0xd
0x0063c9f0: mov    QWORD PTR [rbp-0x41],rax
0x0063c9f4: mov    QWORD PTR [rbp-0x39],r15
0x0063c9f8: movsd  xmm0,QWORD PTR [rip+0x10205e8]        # 0x14165cfe8 ; literal="Their temple "
0x0063ca00: movsd  QWORD PTR [rbx],xmm0
0x0063ca04: mov    ecx,DWORD PTR [rip+0x10205e6]        # 0x14165cff0 ; literal="mple "
0x0063ca0a: mov    DWORD PTR [rbx+0x8],ecx
0x0063ca0d: movzx  ecx,BYTE PTR [rip+0x10205e0]        # 0x14165cff4 ; literal=" "
0x0063ca14: mov    BYTE PTR [rbx+0xc],cl
0x0063ca17: mov    BYTE PTR [rbx+0xd],0x0
0x0063ca1b: cmp    rdi,0xf
0x0063ca1f: jbe    0x14063ca56
0x0063ca21: lea    rdx,[rdi+0x1]
0x0063ca25: mov    rcx,QWORD PTR [rbp-0x51]
0x0063ca29: mov    rax,rcx
0x0063ca2c: cmp    rdx,0x1000
0x0063ca33: jb     0x14063ca51
0x0063ca35: add    rdx,0x27
0x0063ca39: mov    rcx,QWORD PTR [rcx-0x8]
0x0063ca3d: sub    rax,rcx
0x0063ca40: add    rax,0xfffffffffffffff8
0x0063ca44: cmp    rax,0x1f
0x0063ca48: jbe    0x14063ca51
0x0063ca4a: call   QWORD PTR [rip+0xfa4050]        # 0x1415e0aa0
0x0063ca50: int3
0x0063ca51: call   0x1415345f0
0x0063ca56: mov    QWORD PTR [rbp-0x51],rbx
0x0063ca5a: mov    DWORD PTR [rsp+0x28],r14d
0x0063ca5f: mov    BYTE PTR [rsp+0x20],0x1
0x0063ca64: mov    r9d,DWORD PTR [r12+0x8]
0x0063ca69: mov    r8d,DWORD PTR [r13+0x88]
0x0063ca70: lea    rdx,[rbp-0x51]
0x0063ca74: call   0x140b910d0
0x0063ca79: mov    r8d,0xb
0x0063ca7f: lea    rdx,[rip+0x1020572]        # 0x14165cff8 ; literal=" is ruined."
0x0063ca86: lea    rcx,[rbp-0x51]
0x0063ca8a: call   0x14006f9a0
0x0063ca8f: jmp    0x14063ca95
0x0063ca91: mov    rsi,QWORD PTR [rbp-0x69]
0x0063ca95: lea    rcx,[rsi+0x1330]
0x0063ca9c: mov    r8d,0x1b
0x0063caa2: lea    rdx,[rbp-0x51]
0x0063caa6: call   0x1408e4b80
0x0063caab: nop
0x0063caac: lea    rcx,[rbp-0x51]
0x0063cab0: call   0x14006f7e0
0x0063cab5: mov    rcx,QWORD PTR [rbp+0x2f]
0x0063cab9: xor    rcx,rsp
0x0063cabc: call   0x1415345d0
0x0063cac1: lea    r11,[rsp+0xd0]
0x0063cac9: mov    rbx,QWORD PTR [r11+0x38]
0x0063cacd: mov    rsi,QWORD PTR [r11+0x40]
0x0063cad1: mov    rdi,QWORD PTR [r11+0x48]
0x0063cad5: mov    rsp,r11
0x0063cad8: pop    r15
0x0063cada: pop    r14
0x0063cadc: pop    r13
0x0063cade: pop    r12
0x0063cae0: pop    rbp
0x0063cae1: ret
0x0063cae2: call   0x140065820
0x0063cae7: nop
