# reference PE:6a70a6d9:02711000; intelligence-refresh; RVA 0x46faa0..0x471eae
0x0046faa0: mov    QWORD PTR [rsp+0x10],rbx
0x0046faa5: mov    QWORD PTR [rsp+0x18],rsi
0x0046faaa: mov    QWORD PTR [rsp+0x20],rdi
0x0046faaf: push   rbp
0x0046fab0: push   r12
0x0046fab2: push   r13
0x0046fab4: push   r14
0x0046fab6: push   r15
0x0046fab8: lea    rbp,[rsp-0x220]
0x0046fac0: sub    rsp,0x320
0x0046fac7: mov    rax,QWORD PTR [rip+0x142c572]        # 0x14189c040
0x0046face: xor    rax,rsp
0x0046fad1: mov    QWORD PTR [rbp+0x218],rax
0x0046fad8: mov    r12,rcx
0x0046fadb: mov    QWORD PTR [rsp+0x30],rcx
0x0046fae0: xor    r13d,r13d
0x0046fae3: mov    DWORD PTR [rsp+0x38],r13d
0x0046fae8: call   0x1403110d0
0x0046faed: call   0x140e52290
0x0046faf2: movsx  ecx,ax
0x0046faf5: mov    DWORD PTR [r12+0x17c],ecx
0x0046fafd: call   0x140e52370
0x0046fb02: movsx  ecx,ax
0x0046fb05: mov    DWORD PTR [r12+0x180],ecx
0x0046fb0d: xorps  xmm0,xmm0
0x0046fb10: movups XMMWORD PTR [rbp+0x160],xmm0
0x0046fb17: mov    esi,0x4
0x0046fb1c: mov    QWORD PTR [rbp+0x170],rsi
0x0046fb23: mov    QWORD PTR [rbp+0x178],0xf
0x0046fb2e: mov    eax,DWORD PTR [rip+0x118760c]        # 0x1415f7140 ; literal="Tabs"
0x0046fb34: mov    DWORD PTR [rbp+0x160],eax
0x0046fb3a: mov    BYTE PTR [rbp+0x164],r13b
0x0046fb41: lea    r8,[rbp+0x160]
0x0046fb48: lea    rdx,[rbp-0x70]
0x0046fb4c: mov    rcx,r12
0x0046fb4f: call   0x1400f0000
0x0046fb54: nop
0x0046fb55: mov    rdx,QWORD PTR [rbp+0x178]
0x0046fb5c: cmp    rdx,0xf
0x0046fb60: jbe    0x14046fb99
0x0046fb62: inc    rdx
0x0046fb65: mov    rcx,QWORD PTR [rbp+0x160]
0x0046fb6c: mov    rax,rcx
0x0046fb6f: cmp    rdx,0x1000
0x0046fb76: jb     0x14046fb94
0x0046fb78: add    rdx,0x27
0x0046fb7c: mov    rcx,QWORD PTR [rcx-0x8]
0x0046fb80: sub    rax,rcx
0x0046fb83: add    rax,0xfffffffffffffff8
0x0046fb87: cmp    rax,0x1f
0x0046fb8b: jbe    0x14046fb94
0x0046fb8d: call   QWORD PTR [rip+0x1175f95]        # 0x1415e5b28
0x0046fb93: int3
0x0046fb94: call   0x141539680
0x0046fb99: mov    rbx,QWORD PTR [rbp-0x70]
0x0046fb9d: mov    rax,QWORD PTR [rbx]
0x0046fba0: mov    rcx,rbx
0x0046fba3: call   QWORD PTR [rax+0x30]
0x0046fba6: mov    DWORD PTR [rbx+0x1b0],0x2
0x0046fbb0: mov    dl,0xd
0x0046fbb2: mov    rcx,rbx
0x0046fbb5: call   0x141410380
0x0046fbba: mov    dl,0xd
0x0046fbbc: mov    rcx,r12
0x0046fbbf: call   0x141410380
0x0046fbc4: lea    r8,[rip+0x11cf19d]        # 0x14163ed68 ; literal="Open cases"
0x0046fbcb: lea    rdx,[rbp-0x20]
0x0046fbcf: mov    rcx,rbx
0x0046fbd2: call   0x1404849f0
0x0046fbd7: nop
0x0046fbd8: xorps  xmm0,xmm0
0x0046fbdb: movups XMMWORD PTR [rbp+0x160],xmm0
0x0046fbe2: mov    QWORD PTR [rbp+0x170],0xb
0x0046fbed: mov    QWORD PTR [rbp+0x178],0xf
0x0046fbf8: movsd  xmm0,QWORD PTR [rip+0x11cd3d8]        # 0x14163cfd8 ; literal="Right panel"
0x0046fc00: movsd  QWORD PTR [rbp+0x160],xmm0
0x0046fc08: movzx  eax,WORD PTR [rip+0x11cd3d1]        # 0x14163cfe0 ; literal="nel"
0x0046fc0f: mov    WORD PTR [rbp+0x168],ax
0x0046fc16: movzx  eax,BYTE PTR [rip+0x11cd3c5]        # 0x14163cfe2 ; literal="l"
0x0046fc1d: mov    BYTE PTR [rbp+0x16a],al
0x0046fc23: mov    BYTE PTR [rbp+0x16b],0x0
0x0046fc2a: lea    r8,[rbp+0x160]
0x0046fc31: lea    rdx,[rsp+0x70]
0x0046fc36: mov    rcx,QWORD PTR [rbp-0x20]
0x0046fc3a: call   0x1403c8ca0
0x0046fc3f: nop
0x0046fc40: mov    rdx,QWORD PTR [rbp+0x178]
0x0046fc47: cmp    rdx,0xf
0x0046fc4b: jbe    0x14046fc84
0x0046fc4d: inc    rdx
0x0046fc50: mov    rcx,QWORD PTR [rbp+0x160]
0x0046fc57: mov    rax,rcx
0x0046fc5a: cmp    rdx,0x1000
0x0046fc61: jb     0x14046fc7f
0x0046fc63: add    rdx,0x27
0x0046fc67: mov    rcx,QWORD PTR [rcx-0x8]
0x0046fc6b: sub    rax,rcx
0x0046fc6e: add    rax,0xfffffffffffffff8
0x0046fc72: cmp    rax,0x1f
0x0046fc76: jbe    0x14046fc7f
0x0046fc78: call   QWORD PTR [rip+0x1175eaa]        # 0x1415e5b28
0x0046fc7e: int3
0x0046fc7f: call   0x141539680
0x0046fc84: mov    dl,0xf
0x0046fc86: mov    rbx,QWORD PTR [rsp+0x70]
0x0046fc8b: mov    rcx,rbx
0x0046fc8e: call   0x141410630
0x0046fc93: mov    DWORD PTR [rbx+0xa8],0x3
0x0046fc9d: mov    r14d,0xffffffff
0x0046fca3: mov    rcx,QWORD PTR [rsp+0x78]
0x0046fca8: test   rcx,rcx
0x0046fcab: je     0x14046fcdf
0x0046fcad: mov    eax,r14d
0x0046fcb0: lock xadd DWORD PTR [rcx+0x8],eax
0x0046fcb5: cmp    eax,0x1
0x0046fcb8: jne    0x14046fcdf
0x0046fcba: mov    rbx,QWORD PTR [rsp+0x78]
0x0046fcbf: mov    rax,QWORD PTR [rbx]
0x0046fcc2: mov    rcx,rbx
0x0046fcc5: call   QWORD PTR [rax]
0x0046fcc7: mov    eax,r14d
0x0046fcca: lock xadd DWORD PTR [rbx+0xc],eax
0x0046fccf: cmp    eax,0x1
0x0046fcd2: jne    0x14046fcdf
0x0046fcd4: mov    rcx,QWORD PTR [rsp+0x78]
0x0046fcd9: mov    rax,QWORD PTR [rcx]
0x0046fcdc: call   QWORD PTR [rax+0x8]
0x0046fcdf: xorps  xmm0,xmm0
0x0046fce2: movups XMMWORD PTR [rbp+0x160],xmm0
0x0046fce9: mov    QWORD PTR [rbp+0x170],0x5
0x0046fcf4: mov    QWORD PTR [rbp+0x178],0xf
0x0046fcff: mov    eax,DWORD PTR [rip+0x11cf057]        # 0x14163ed5c ; literal="Cases"
0x0046fd05: mov    DWORD PTR [rbp+0x160],eax
0x0046fd0b: movzx  eax,BYTE PTR [rip+0x11cf04e]        # 0x14163ed60 ; literal="s"
0x0046fd12: mov    BYTE PTR [rbp+0x164],al
0x0046fd18: mov    BYTE PTR [rbp+0x165],0x0
0x0046fd1f: lea    r8,[rbp+0x160]
0x0046fd26: lea    rdx,[rsp+0x70]
0x0046fd2b: mov    rcx,QWORD PTR [rbp-0x20]
0x0046fd2f: call   0x140465000
0x0046fd34: nop
0x0046fd35: mov    rdx,QWORD PTR [rbp+0x178]
0x0046fd3c: cmp    rdx,0xf
0x0046fd40: jbe    0x14046fd79
0x0046fd42: inc    rdx
0x0046fd45: mov    rcx,QWORD PTR [rbp+0x160]
0x0046fd4c: mov    rax,rcx
0x0046fd4f: cmp    rdx,0x1000
0x0046fd56: jb     0x14046fd74
0x0046fd58: add    rdx,0x27
0x0046fd5c: mov    rcx,QWORD PTR [rcx-0x8]
0x0046fd60: sub    rax,rcx
0x0046fd63: add    rax,0xfffffffffffffff8
0x0046fd67: cmp    rax,0x1f
0x0046fd6b: jbe    0x14046fd74
0x0046fd6d: call   QWORD PTR [rip+0x1175db5]        # 0x1415e5b28
0x0046fd73: int3
0x0046fd74: call   0x141539680
0x0046fd79: mov    dl,0xe
0x0046fd7b: mov    rcx,QWORD PTR [rsp+0x70]
0x0046fd80: call   0x141410630
0x0046fd85: lea    r8,[rip+0x11ceef4]        # 0x14163ec80 ; literal="Closed cases"
0x0046fd8c: lea    rdx,[rbp-0x50]
0x0046fd90: mov    rcx,QWORD PTR [rbp-0x70]
0x0046fd94: call   0x1404849f0
0x0046fd99: nop
0x0046fd9a: xorps  xmm0,xmm0
0x0046fd9d: movups XMMWORD PTR [rbp+0x160],xmm0
0x0046fda4: mov    QWORD PTR [rbp+0x170],0xb
0x0046fdaf: mov    QWORD PTR [rbp+0x178],0xf
0x0046fdba: movsd  xmm0,QWORD PTR [rip+0x11cd216]        # 0x14163cfd8 ; literal="Right panel"
0x0046fdc2: movsd  QWORD PTR [rbp+0x160],xmm0
0x0046fdca: movzx  eax,WORD PTR [rip+0x11cd20f]        # 0x14163cfe0 ; literal="nel"
0x0046fdd1: mov    WORD PTR [rbp+0x168],ax
0x0046fdd8: movzx  eax,BYTE PTR [rip+0x11cd203]        # 0x14163cfe2 ; literal="l"
0x0046fddf: mov    BYTE PTR [rbp+0x16a],al
0x0046fde5: mov    BYTE PTR [rbp+0x16b],0x0
0x0046fdec: lea    r8,[rbp+0x160]
0x0046fdf3: lea    rdx,[rsp+0x60]
0x0046fdf8: mov    rcx,QWORD PTR [rbp-0x50]
0x0046fdfc: call   0x1403c8ca0
0x0046fe01: nop
0x0046fe02: mov    rdx,QWORD PTR [rbp+0x178]
0x0046fe09: cmp    rdx,0xf
0x0046fe0d: jbe    0x14046fe46
0x0046fe0f: inc    rdx
0x0046fe12: mov    rcx,QWORD PTR [rbp+0x160]
0x0046fe19: mov    rax,rcx
0x0046fe1c: cmp    rdx,0x1000
0x0046fe23: jb     0x14046fe41
0x0046fe25: add    rdx,0x27
0x0046fe29: mov    rcx,QWORD PTR [rcx-0x8]
0x0046fe2d: sub    rax,rcx
0x0046fe30: add    rax,0xfffffffffffffff8
0x0046fe34: cmp    rax,0x1f
0x0046fe38: jbe    0x14046fe41
0x0046fe3a: call   QWORD PTR [rip+0x1175ce8]        # 0x1415e5b28
0x0046fe40: int3
0x0046fe41: call   0x141539680
0x0046fe46: mov    dl,0xf
0x0046fe48: mov    rbx,QWORD PTR [rsp+0x60]
0x0046fe4d: mov    rcx,rbx
0x0046fe50: call   0x141410630
0x0046fe55: mov    DWORD PTR [rbx+0xa8],0x3
0x0046fe5f: mov    rcx,QWORD PTR [rsp+0x68]
0x0046fe64: test   rcx,rcx
0x0046fe67: je     0x14046fe9b
0x0046fe69: mov    eax,r14d
0x0046fe6c: lock xadd DWORD PTR [rcx+0x8],eax
0x0046fe71: cmp    eax,0x1
0x0046fe74: jne    0x14046fe9b
0x0046fe76: mov    rbx,QWORD PTR [rsp+0x68]
0x0046fe7b: mov    rax,QWORD PTR [rbx]
0x0046fe7e: mov    rcx,rbx
0x0046fe81: call   QWORD PTR [rax]
0x0046fe83: mov    eax,r14d
0x0046fe86: lock xadd DWORD PTR [rbx+0xc],eax
0x0046fe8b: cmp    eax,0x1
0x0046fe8e: jne    0x14046fe9b
0x0046fe90: mov    rcx,QWORD PTR [rsp+0x68]
0x0046fe95: mov    rax,QWORD PTR [rcx]
0x0046fe98: call   QWORD PTR [rax+0x8]
0x0046fe9b: xorps  xmm0,xmm0
0x0046fe9e: movups XMMWORD PTR [rbp+0x160],xmm0
0x0046fea5: mov    QWORD PTR [rbp+0x170],0x5
0x0046feb0: mov    QWORD PTR [rbp+0x178],0xf
0x0046febb: mov    eax,DWORD PTR [rip+0x11cee9b]        # 0x14163ed5c ; literal="Cases"
0x0046fec1: mov    DWORD PTR [rbp+0x160],eax
0x0046fec7: movzx  eax,BYTE PTR [rip+0x11cee92]        # 0x14163ed60 ; literal="s"
0x0046fece: mov    BYTE PTR [rbp+0x164],al
0x0046fed4: mov    BYTE PTR [rbp+0x165],0x0
0x0046fedb: lea    r8,[rbp+0x160]
0x0046fee2: lea    rdx,[rbp-0x30]
0x0046fee6: mov    rcx,QWORD PTR [rbp-0x50]
0x0046feea: call   0x140465000
0x0046feef: nop
0x0046fef0: mov    rdx,QWORD PTR [rbp+0x178]
0x0046fef7: cmp    rdx,0xf
0x0046fefb: jbe    0x14046ff34
0x0046fefd: inc    rdx
0x0046ff00: mov    rcx,QWORD PTR [rbp+0x160]
0x0046ff07: mov    rax,rcx
0x0046ff0a: cmp    rdx,0x1000
0x0046ff11: jb     0x14046ff2f
0x0046ff13: add    rdx,0x27
0x0046ff17: mov    rcx,QWORD PTR [rcx-0x8]
0x0046ff1b: sub    rax,rcx
0x0046ff1e: add    rax,0xfffffffffffffff8
0x0046ff22: cmp    rax,0x1f
0x0046ff26: jbe    0x14046ff2f
0x0046ff28: call   QWORD PTR [rip+0x1175bfa]        # 0x1415e5b28
0x0046ff2e: int3
0x0046ff2f: call   0x141539680
0x0046ff34: mov    dl,0xe
0x0046ff36: mov    rcx,QWORD PTR [rbp-0x30]
0x0046ff3a: call   0x141410630
0x0046ff3f: lea    r8,[rip+0x11ced2a]        # 0x14163ec70 ; literal="Cold cases"
0x0046ff46: lea    rdx,[rbp-0x40]
0x0046ff4a: mov    rcx,QWORD PTR [rbp-0x70]
0x0046ff4e: call   0x1404849f0
0x0046ff53: nop
0x0046ff54: xorps  xmm0,xmm0
0x0046ff57: movups XMMWORD PTR [rbp+0x160],xmm0
0x0046ff5e: mov    QWORD PTR [rbp+0x170],0xb
0x0046ff69: mov    QWORD PTR [rbp+0x178],0xf
0x0046ff74: movsd  xmm0,QWORD PTR [rip+0x11cd05c]        # 0x14163cfd8 ; literal="Right panel"
0x0046ff7c: movsd  QWORD PTR [rbp+0x160],xmm0
0x0046ff84: movzx  eax,WORD PTR [rip+0x11cd055]        # 0x14163cfe0 ; literal="nel"
0x0046ff8b: mov    WORD PTR [rbp+0x168],ax
0x0046ff92: movzx  eax,BYTE PTR [rip+0x11cd049]        # 0x14163cfe2 ; literal="l"
0x0046ff99: mov    BYTE PTR [rbp+0x16a],al
0x0046ff9f: mov    BYTE PTR [rbp+0x16b],0x0
0x0046ffa6: lea    r8,[rbp+0x160]
0x0046ffad: lea    rdx,[rsp+0x60]
0x0046ffb2: mov    rcx,QWORD PTR [rbp-0x40]
0x0046ffb6: call   0x1403c8ca0
0x0046ffbb: nop
0x0046ffbc: mov    rdx,QWORD PTR [rbp+0x178]
0x0046ffc3: cmp    rdx,0xf
0x0046ffc7: jbe    0x140470000
0x0046ffc9: inc    rdx
0x0046ffcc: mov    rcx,QWORD PTR [rbp+0x160]
0x0046ffd3: mov    rax,rcx
0x0046ffd6: cmp    rdx,0x1000
0x0046ffdd: jb     0x14046fffb
0x0046ffdf: add    rdx,0x27
0x0046ffe3: mov    rcx,QWORD PTR [rcx-0x8]
0x0046ffe7: sub    rax,rcx
0x0046ffea: add    rax,0xfffffffffffffff8
0x0046ffee: cmp    rax,0x1f
0x0046fff2: jbe    0x14046fffb
0x0046fff4: call   QWORD PTR [rip+0x1175b2e]        # 0x1415e5b28
0x0046fffa: int3
0x0046fffb: call   0x141539680
0x00470000: mov    dl,0xf
0x00470002: mov    rbx,QWORD PTR [rsp+0x60]
0x00470007: mov    rcx,rbx
0x0047000a: call   0x141410630
0x0047000f: mov    DWORD PTR [rbx+0xa8],0x3
0x00470019: mov    rcx,QWORD PTR [rsp+0x68]
0x0047001e: test   rcx,rcx
0x00470021: je     0x140470055
0x00470023: mov    eax,r14d
0x00470026: lock xadd DWORD PTR [rcx+0x8],eax
0x0047002b: cmp    eax,0x1
0x0047002e: jne    0x140470055
0x00470030: mov    rbx,QWORD PTR [rsp+0x68]
0x00470035: mov    rax,QWORD PTR [rbx]
0x00470038: mov    rcx,rbx
0x0047003b: call   QWORD PTR [rax]
0x0047003d: mov    eax,r14d
0x00470040: lock xadd DWORD PTR [rbx+0xc],eax
0x00470045: cmp    eax,0x1
0x00470048: jne    0x140470055
0x0047004a: mov    rcx,QWORD PTR [rsp+0x68]
0x0047004f: mov    rax,QWORD PTR [rcx]
0x00470052: call   QWORD PTR [rax+0x8]
0x00470055: xorps  xmm0,xmm0
0x00470058: movups XMMWORD PTR [rbp+0x160],xmm0
0x0047005f: mov    QWORD PTR [rbp+0x170],0x5
0x0047006a: mov    QWORD PTR [rbp+0x178],0xf
0x00470075: mov    eax,DWORD PTR [rip+0x11cece1]        # 0x14163ed5c ; literal="Cases"
0x0047007b: mov    DWORD PTR [rbp+0x160],eax
0x00470081: movzx  eax,BYTE PTR [rip+0x11cecd8]        # 0x14163ed60 ; literal="s"
0x00470088: mov    BYTE PTR [rbp+0x164],al
0x0047008e: mov    BYTE PTR [rbp+0x165],0x0
0x00470095: lea    r8,[rbp+0x160]
0x0047009c: lea    rdx,[rsp+0x60]
0x004700a1: mov    rcx,QWORD PTR [rbp-0x40]
0x004700a5: call   0x140465000
0x004700aa: nop
0x004700ab: mov    rdx,QWORD PTR [rbp+0x178]
0x004700b2: cmp    rdx,0xf
0x004700b6: jbe    0x1404700ef
0x004700b8: inc    rdx
0x004700bb: mov    rcx,QWORD PTR [rbp+0x160]
0x004700c2: mov    rax,rcx
0x004700c5: cmp    rdx,0x1000
0x004700cc: jb     0x1404700ea
0x004700ce: add    rdx,0x27
0x004700d2: mov    rcx,QWORD PTR [rcx-0x8]
0x004700d6: sub    rax,rcx
0x004700d9: add    rax,0xfffffffffffffff8
0x004700dd: cmp    rax,0x1f
0x004700e1: jbe    0x1404700ea
0x004700e3: call   QWORD PTR [rip+0x1175a3f]        # 0x1415e5b28
0x004700e9: int3
0x004700ea: call   0x141539680
0x004700ef: mov    dl,0xe
0x004700f1: mov    rcx,QWORD PTR [rsp+0x60]
0x004700f6: call   0x141410630
0x004700fb: lea    r8,[rip+0x11ceb5e]        # 0x14163ec60 ; literal="Fortress guard"
0x00470102: lea    rdx,[rbp+0x30]
0x00470106: mov    rcx,QWORD PTR [rbp-0x70]
0x0047010a: call   0x1404849f0
0x0047010f: nop
0x00470110: mov    dl,0xd
0x00470112: mov    r15,QWORD PTR [rbp+0x30]
0x00470116: mov    rcx,r15
0x00470119: call   0x141410630
0x0047011e: mov    BYTE PTR [rbp+0x16f],0x0
0x00470125: mov    QWORD PTR [rbp+0x170],0xf
0x00470130: mov    QWORD PTR [rbp+0x178],0xf
0x0047013b: movsd  xmm0,QWORD PTR [rip+0x11ceb0d]        # 0x14163ec50 ; literal="Cage/Chain Reqs"
0x00470143: movsd  QWORD PTR [rbp+0x160],xmm0
0x0047014b: mov    eax,DWORD PTR [rip+0x11ceb07]        # 0x14163ec58 ; literal="in Reqs"
0x00470151: mov    DWORD PTR [rbp+0x168],eax
0x00470157: movzx  eax,WORD PTR [rip+0x11ceafe]        # 0x14163ec5c ; literal="eqs"
0x0047015e: mov    WORD PTR [rbp+0x16c],ax
0x00470165: movzx  eax,BYTE PTR [rip+0x11ceaf2]        # 0x14163ec5e ; literal="s"
0x0047016c: mov    BYTE PTR [rbp+0x16e],al
0x00470172: mov    BYTE PTR [rbp+0x16f],0x0
0x00470179: lea    r8,[rbp+0x160]
0x00470180: lea    rdx,[rbp+0x20]
0x00470184: mov    rcx,r15
0x00470187: call   0x140465400
0x0047018c: nop
0x0047018d: mov    rdx,QWORD PTR [rbp+0x178]
0x00470194: cmp    rdx,0xf
0x00470198: jbe    0x1404701d1
0x0047019a: inc    rdx
0x0047019d: mov    rcx,QWORD PTR [rbp+0x160]
0x004701a4: mov    rax,rcx
0x004701a7: cmp    rdx,0x1000
0x004701ae: jb     0x1404701cc
0x004701b0: add    rdx,0x27
0x004701b4: mov    rcx,QWORD PTR [rcx-0x8]
0x004701b8: sub    rax,rcx
0x004701bb: add    rax,0xfffffffffffffff8
0x004701bf: cmp    rax,0x1f
0x004701c3: jbe    0x1404701cc
0x004701c5: call   QWORD PTR [rip+0x117595d]        # 0x1415e5b28
0x004701cb: int3
0x004701cc: call   0x141539680
0x004701d1: call   0x140e52290
0x004701d6: movsx  edi,ax
0x004701d9: call   0x140e52370
0x004701de: movsx  ebx,ax
0x004701e1: xorps  xmm0,xmm0
0x004701e4: movups XMMWORD PTR [rbp+0x160],xmm0
0x004701eb: mov    QWORD PTR [rbp+0x170],r13
0x004701f2: mov    QWORD PTR [rbp+0x178],r13
0x004701f9: mov    ecx,0x30
0x004701fe: call   0x1400707d0
0x00470203: mov    rcx,rax
0x00470206: mov    QWORD PTR [rbp+0x160],rax
0x0047020d: mov    QWORD PTR [rbp+0x170],0x2c
0x00470218: mov    QWORD PTR [rbp+0x178],0x2f
0x00470223: movups xmm0,XMMWORD PTR [rip+0x11cea96]        # 0x14163ecc0 ; literal="Desired metal cages and chains in dungeons: "
0x0047022a: movups XMMWORD PTR [rax],xmm0
0x0047022d: movups xmm1,XMMWORD PTR [rip+0x11cea9c]        # 0x14163ecd0 ; literal="ges and chains in dungeons: "
0x00470234: movups XMMWORD PTR [rax+0x10],xmm1
0x00470238: movsd  xmm0,QWORD PTR [rip+0x11ceaa0]        # 0x14163ece0 ; literal="n dungeons: "
0x00470240: movsd  QWORD PTR [rax+0x20],xmm0
0x00470245: mov    eax,DWORD PTR [rip+0x11cea9d]        # 0x14163ece8 ; literal="ns: "
0x0047024b: mov    DWORD PTR [rcx+0x28],eax
0x0047024e: mov    BYTE PTR [rcx+0x2c],0x0
0x00470252: mov    ecx,ebx
0x00470254: lea    rdx,[rbp+0x160]
0x0047025b: call   0x14052c130
0x00470260: mov    r8,rsi
0x00470263: lea    rdx,[rip+0x117b2ae]        # 0x1415eb518 ; literal=" of "
0x0047026a: lea    rcx,[rbp+0x160]
0x00470271: call   0x14006fa10
0x00470276: mov    ecx,edi
0x00470278: lea    rdx,[rbp+0x160]
0x0047027f: call   0x14052c130
0x00470284: mov    rsi,QWORD PTR [rbp+0x20]
0x00470288: mov    rax,QWORD PTR [rsi]
0x0047028b: lea    rdx,[rbp+0x160]
0x00470292: mov    rcx,rsi
0x00470295: call   QWORD PTR [rax+0x48]
0x00470298: mov    BYTE PTR [rsi+0x174],0x1
0x0047029f: cmp    bx,di
0x004702a2: mov    ebx,0x2
0x004702a7: jl     0x1404702b1
0x004702a9: mov    DWORD PTR [rsi+0x170],ebx
0x004702af: jmp    0x1404702bb
0x004702b1: mov    DWORD PTR [rsi+0x170],0x4
0x004702bb: lea    rcx,[rbp+0x160]
0x004702c2: call   0x14006f850
0x004702c7: xorps  xmm0,xmm0
0x004702ca: movups XMMWORD PTR [rbp+0x160],xmm0
0x004702d1: mov    QWORD PTR [rbp+0x170],0xb
0x004702dc: mov    QWORD PTR [rbp+0x178],0xf
0x004702e7: movsd  xmm0,QWORD PTR [rip+0x11ce9c1]        # 0x14163ecb0 ; literal="Guards List"
0x004702ef: movsd  QWORD PTR [rbp+0x160],xmm0
0x004702f7: movzx  eax,WORD PTR [rip+0x11ce9ba]        # 0x14163ecb8 ; literal="ist"
0x004702fe: mov    WORD PTR [rbp+0x168],ax
0x00470305: movzx  eax,BYTE PTR [rip+0x11ce9ae]        # 0x14163ecba ; literal="t"
0x0047030c: mov    BYTE PTR [rbp+0x16a],al
0x00470312: mov    BYTE PTR [rbp+0x16b],0x0
0x00470319: lea    r8,[rbp+0x160]
0x00470320: lea    rdx,[rbp-0x60]
0x00470324: mov    rcx,r15
0x00470327: call   0x1403c8250
0x0047032c: nop
0x0047032d: mov    rdx,QWORD PTR [rbp+0x178]
0x00470334: cmp    rdx,0xf
0x00470338: jbe    0x140470371
0x0047033a: inc    rdx
0x0047033d: mov    rcx,QWORD PTR [rbp+0x160]
0x00470344: mov    rax,rcx
0x00470347: cmp    rdx,0x1000
0x0047034e: jb     0x14047036c
0x00470350: add    rdx,0x27
0x00470354: mov    rcx,QWORD PTR [rcx-0x8]
0x00470358: sub    rax,rcx
0x0047035b: add    rax,0xfffffffffffffff8
0x0047035f: cmp    rax,0x1f
0x00470363: jbe    0x14047036c
0x00470365: call   QWORD PTR [rip+0x11757bd]        # 0x1415e5b28
0x0047036b: int3
0x0047036c: call   0x141539680
0x00470371: mov    dl,0xd
0x00470373: mov    rdi,QWORD PTR [rbp-0x60]
0x00470377: mov    rcx,rdi
0x0047037a: call   0x141410630
0x0047037f: mov    DWORD PTR [rdi+0xb0],ebx
0x00470385: lea    r8,[rip+0x11ce914]        # 0x14163eca0 ; literal="Convicts"
0x0047038c: lea    rdx,[rbp+0x10]
0x00470390: mov    rcx,QWORD PTR [rbp-0x70]
0x00470394: call   0x1404849f0
0x00470399: nop
0x0047039a: mov    dl,0xd
0x0047039c: mov    rbx,QWORD PTR [rbp+0x10]
0x004703a0: mov    rcx,rbx
0x004703a3: call   0x141410380
0x004703a8: xor    r15d,r15d
0x004703ab: mov    DWORD PTR [rbp+0x16c],r15d
0x004703b2: mov    QWORD PTR [rbp+0x170],0xc
0x004703bd: mov    QWORD PTR [rbp+0x178],0xf
0x004703c8: movsd  xmm0,QWORD PTR [rip+0x11ce8c0]        # 0x14163ec90 ; literal="Convict list"
0x004703d0: movsd  QWORD PTR [rbp+0x160],xmm0
0x004703d8: mov    eax,DWORD PTR [rip+0x11ce8ba]        # 0x14163ec98 ; literal="list"
0x004703de: mov    DWORD PTR [rbp+0x168],eax
0x004703e4: mov    BYTE PTR [rbp+0x16c],r15b
0x004703eb: lea    r8,[rbp+0x160]
0x004703f2: lea    rdx,[rbp-0x80]
0x004703f6: call   0x1403c8250
0x004703fb: nop
0x004703fc: mov    rdx,QWORD PTR [rbp+0x178]
0x00470403: cmp    rdx,0xf
0x00470407: jbe    0x140470440
0x00470409: inc    rdx
0x0047040c: mov    rcx,QWORD PTR [rbp+0x160]
0x00470413: mov    rax,rcx
0x00470416: cmp    rdx,0x1000
0x0047041d: jb     0x14047043b
0x0047041f: add    rdx,0x27
0x00470423: mov    rcx,QWORD PTR [rcx-0x8]
0x00470427: sub    rax,rcx
0x0047042a: add    rax,0xfffffffffffffff8
0x0047042e: cmp    rax,0x1f
0x00470432: jbe    0x14047043b
0x00470434: call   QWORD PTR [rip+0x11756ee]        # 0x1415e5b28
0x0047043a: int3
0x0047043b: call   0x141539680
0x00470440: mov    dl,0xe
0x00470442: mov    rcx,QWORD PTR [rbp-0x80]
0x00470446: call   0x141410630
0x0047044b: xorps  xmm0,xmm0
0x0047044e: movups XMMWORD PTR [rbp+0x160],xmm0
0x00470455: mov    QWORD PTR [rbp+0x170],0xb
0x00470460: mov    QWORD PTR [rbp+0x178],0xf
0x0047046b: movsd  xmm0,QWORD PTR [rip+0x11ccb65]        # 0x14163cfd8 ; literal="Right panel"
0x00470473: movsd  QWORD PTR [rbp+0x160],xmm0
0x0047047b: movzx  eax,WORD PTR [rip+0x11ccb5e]        # 0x14163cfe0 ; literal="nel"
0x00470482: mov    WORD PTR [rbp+0x168],ax
0x00470489: movzx  eax,BYTE PTR [rip+0x11ccb52]        # 0x14163cfe2 ; literal="l"
0x00470490: mov    BYTE PTR [rbp+0x16a],al
0x00470496: mov    BYTE PTR [rbp+0x16b],0x0
0x0047049d: lea    r8,[rbp+0x160]
0x004704a4: lea    rdx,[rsp+0x50]
0x004704a9: mov    rcx,rbx
0x004704ac: call   0x140484c40
0x004704b1: nop
0x004704b2: mov    rdx,QWORD PTR [rbp+0x178]
0x004704b9: cmp    rdx,0xf
0x004704bd: jbe    0x1404704f6
0x004704bf: inc    rdx
0x004704c2: mov    rcx,QWORD PTR [rbp+0x160]
0x004704c9: mov    rax,rcx
0x004704cc: cmp    rdx,0x1000
0x004704d3: jb     0x1404704f1
0x004704d5: add    rdx,0x27
0x004704d9: mov    rcx,QWORD PTR [rcx-0x8]
0x004704dd: sub    rax,rcx
0x004704e0: add    rax,0xfffffffffffffff8
0x004704e4: cmp    rax,0x1f
0x004704e8: jbe    0x1404704f1
0x004704ea: call   QWORD PTR [rip+0x1175638]        # 0x1415e5b28
0x004704f0: int3
0x004704f1: call   0x141539680
0x004704f6: mov    dl,0xf
0x004704f8: mov    rbx,QWORD PTR [rsp+0x50]
0x004704fd: mov    rcx,rbx
0x00470500: call   0x141410630
0x00470505: mov    DWORD PTR [rbx+0xa8],0x4
0x0047050f: xorps  xmm2,xmm2
0x00470512: movdqa XMMWORD PTR [rsp+0x20],xmm2
0x00470518: mov    rcx,QWORD PTR [rsp+0x58]
0x0047051d: test   rcx,rcx
0x00470520: je     0x140470537
0x00470522: movaps xmm0,XMMWORD PTR [rsp+0x50]
0x00470527: movdqa XMMWORD PTR [rsp+0x20],xmm0
0x0047052d: lock inc DWORD PTR [rcx+0xc]
0x00470531: movdqa xmm2,XMMWORD PTR [rsp+0x20]
0x00470537: mov    r9,QWORD PTR [rbp-0x80]
0x0047053b: xorps  xmm0,xmm0
0x0047053e: movdqa XMMWORD PTR [rbp+0x180],xmm0
0x00470546: movdqa xmm1,xmm2
0x0047054a: psrldq xmm1,0x8
0x0047054f: movq   rbx,xmm1
0x00470554: test   rbx,rbx
0x00470557: je     0x14047056a
0x00470559: movdqa XMMWORD PTR [rbp+0x180],xmm2
0x00470561: lock inc DWORD PTR [rbx+0xc]
0x00470565: mov    rbx,QWORD PTR [rsp+0x28]
0x0047056a: mov    rdx,QWORD PTR [r9+0x240]
0x00470571: cmp    rdx,QWORD PTR [r9+0x248]
0x00470578: je     0x1404705b2
0x0047057a: lea    rax,[rip+0x11d11ef]        # 0x141641770
0x00470581: mov    QWORD PTR [rdx],rax
0x00470584: mov    rax,QWORD PTR [rbp+0x180]
0x0047058b: mov    QWORD PTR [rdx+0x8],rax
0x0047058f: mov    rax,QWORD PTR [rbp+0x188]
0x00470596: mov    QWORD PTR [rdx+0x10],rax
0x0047059a: mov    rcx,r15
0x0047059d: mov    QWORD PTR [rbp+0x188],rcx
0x004705a4: mov    QWORD PTR [rdx+0x38],rdx
0x004705a8: add    QWORD PTR [r9+0x240],0x40
0x004705b0: jmp    0x1404705cc
0x004705b2: lea    r8,[rbp+0x180]
0x004705b9: lea    rcx,[r9+0x238]
0x004705c0: call   0x140485f60
0x004705c5: mov    rcx,QWORD PTR [rbp+0x188]
0x004705cc: test   rcx,rcx
0x004705cf: je     0x1404705f0
0x004705d1: mov    eax,r14d
0x004705d4: lock xadd DWORD PTR [rcx+0xc],eax
0x004705d9: cmp    eax,0x1
0x004705dc: jne    0x1404705eb
0x004705de: mov    rcx,QWORD PTR [rbp+0x188]
0x004705e5: mov    rax,QWORD PTR [rcx]
0x004705e8: call   QWORD PTR [rax+0x8]
0x004705eb: mov    rbx,QWORD PTR [rsp+0x28]
0x004705f0: test   rbx,rbx
0x004705f3: je     0x14047060e
0x004705f5: mov    eax,r14d
0x004705f8: lock xadd DWORD PTR [rbx+0xc],eax
0x004705fd: cmp    eax,0x1
0x00470600: jne    0x14047060e
0x00470602: mov    rcx,QWORD PTR [rsp+0x28]
0x00470607: mov    rax,QWORD PTR [rcx]
0x0047060a: call   QWORD PTR [rax+0x8]
0x0047060d: nop
0x0047060e: mov    rcx,QWORD PTR [rsp+0x58]
0x00470613: test   rcx,rcx
0x00470616: je     0x14047064a
0x00470618: mov    eax,r14d
0x0047061b: lock xadd DWORD PTR [rcx+0x8],eax
0x00470620: cmp    eax,0x1
0x00470623: jne    0x14047064a
0x00470625: mov    rbx,QWORD PTR [rsp+0x58]
0x0047062a: mov    rax,QWORD PTR [rbx]
0x0047062d: mov    rcx,rbx
0x00470630: call   QWORD PTR [rax]
0x00470632: mov    eax,r14d
0x00470635: lock xadd DWORD PTR [rbx+0xc],eax
0x0047063a: cmp    eax,0x1
0x0047063d: jne    0x14047064a
0x0047063f: mov    rcx,QWORD PTR [rsp+0x58]
0x00470644: mov    rax,QWORD PTR [rcx]
0x00470647: call   QWORD PTR [rax+0x8]
0x0047064a: lea    rdx,[rbp+0x0]
0x0047064e: mov    rcx,QWORD PTR [rbp-0x70]
0x00470652: call   0x140484f10
0x00470657: nop
0x00470658: mov    dl,0xd
0x0047065a: mov    rcx,QWORD PTR [rbp+0x0]
0x0047065e: call   0x141410380
0x00470663: movdqa xmm0,XMMWORD PTR [rip+0x131b0d5]        # 0x14178b740
0x0047066b: movdqu XMMWORD PTR [rbp+0x160],xmm0
0x00470673: mov    DWORD PTR [rbp+0x170],0xd
0x0047067d: mov    DWORD PTR [rbp+0x174],0xf
0x00470687: xorps  xmm0,xmm0
0x0047068a: movdqu XMMWORD PTR [rbp+0x1a0],xmm0
0x00470692: mov    ecx,0x18
0x00470697: call   0x1400707d0
0x0047069c: mov    rbx,rax
0x0047069f: mov    QWORD PTR [rbp+0x1a0],rax
0x004706a6: lea    rcx,[rax+0x18]
0x004706aa: mov    QWORD PTR [rbp+0x1b0],rcx
0x004706b1: mov    r8d,0x18
0x004706b7: lea    rdx,[rbp+0x160]
0x004706be: mov    rcx,rax
0x004706c1: call   0x14153ae1a
0x004706c6: lea    rax,[rbx+0x18]
0x004706ca: mov    QWORD PTR [rbp+0x1a8],rax
0x004706d1: lea    rdx,[rbp+0x1a0]
0x004706d8: mov    rcx,QWORD PTR [rbp-0x80]
0x004706dc: call   0x141425200
0x004706e1: nop
0x004706e2: mov    rcx,QWORD PTR [rbp+0x1a0]
0x004706e9: test   rcx,rcx
0x004706ec: je     0x140470731
0x004706ee: mov    rax,QWORD PTR [rbp+0x1b0]
0x004706f5: sub    rax,rcx
0x004706f8: sar    rax,0x2
0x004706fc: lea    rdx,[rax*4+0x0]
0x00470704: mov    rax,rcx
0x00470707: cmp    rdx,0x1000
0x0047070e: jb     0x14047072c
0x00470710: add    rdx,0x27
0x00470714: mov    rcx,QWORD PTR [rcx-0x8]
0x00470718: sub    rax,rcx
0x0047071b: add    rax,0xfffffffffffffff8
0x0047071f: cmp    rax,0x1f
0x00470723: jbe    0x14047072c
0x00470725: call   QWORD PTR [rip+0x11753fd]        # 0x1415e5b28
0x0047072b: int3
0x0047072c: call   0x141539680
0x00470731: mov    r13,QWORD PTR [rbp-0x80]
0x00470735: add    r13,0x2d8
0x0047073c: mov    rax,QWORD PTR [r13+0x0]
0x00470740: cmp    rax,QWORD PTR [r13+0x8]
0x00470744: je     0x14047074a
0x00470746: mov    QWORD PTR [r13+0x8],rax
0x0047074a: lea    rcx,[rbp+0xe0]
0x00470751: call   0x1400ec3b0
0x00470756: nop
0x00470757: mov    rbx,QWORD PTR [rip+0x20775ea]        # 0x1424e7d48
0x0047075e: mov    rdi,QWORD PTR [rip+0x20775eb]        # 0x1424e7d50
0x00470765: cmp    rbx,rdi
0x00470768: je     0x140470d67
0x0047076e: lea    r12,[rip+0x11d106b]        # 0x1416417e0
0x00470775: mov    r9,QWORD PTR [rbx]
0x00470778: test   BYTE PTR [r9+0xa0],0x2
0x00470780: je     0x140470d55
0x00470786: mov    eax,DWORD PTR [rip+0x1f22ee8]        # 0x142393674
0x0047078c: cmp    DWORD PTR [r9+0xb8],eax
0x00470793: jne    0x140470d55
0x00470799: mov    eax,DWORD PTR [rip+0x1f22ed9]        # 0x142393678
0x0047079f: cmp    DWORD PTR [r9+0xbc],eax
0x004707a6: jne    0x140470d55
0x004707ac: mov    r9d,DWORD PTR [r9+0x40]
0x004707b0: mov    rax,QWORD PTR [rip+0x1f74901]        # 0x1423e50b8
0x004707b7: mov    rsi,QWORD PTR [rip+0x1f748f2]        # 0x1423e50b0
0x004707be: sub    rax,rsi
0x004707c1: sar    rax,0x3
0x004707c5: test   eax,eax
0x004707c7: je     0x140470830
0x004707c9: cmp    r9d,0xffffffff
0x004707cd: je     0x140470830
0x004707cf: sub    eax,0x1
0x004707d2: mov    edx,r15d
0x004707d5: js     0x140470809
0x004707d7: nop    WORD PTR [rax+rax*1+0x0]
0x004707e0: mov    r11d,eax
0x004707e3: lea    ecx,[rdx+rax*1]
0x004707e6: sar    ecx,1
0x004707e8: movsxd rax,ecx
0x004707eb: mov    r10,QWORD PTR [rsi+rax*8]
0x004707ef: cmp    DWORD PTR [r10+0x130],r9d
0x004707f6: je     0x14047080c
0x004707f8: lea    eax,[rcx+0x1]
0x004707fb: cmovle edx,eax
0x004707fe: lea    eax,[rcx-0x1]
0x00470801: cmovle eax,r11d
0x00470805: cmp    edx,eax
0x00470807: jle    0x1404707e0
0x00470809: mov    r10,r15
0x0047080c: mov    QWORD PTR [rsp+0x38],r10
0x00470811: test   r10,r10
0x00470814: je     0x140470835
0x00470816: lea    r8,[rsp+0x38]
0x0047081b: lea    rdx,[rbp+0x1a0]
0x00470822: lea    rcx,[rbp+0xe0]
0x00470829: call   0x1400ec980
0x0047082e: jmp    0x140470835
0x00470830: mov    QWORD PTR [rsp+0x38],r15
0x00470835: mov    rdx,QWORD PTR [rbx]
0x00470838: lea    rcx,[rbp+0x1f8]
0x0047083f: call   0x14046d660
0x00470844: nop
0x00470845: mov    r15,QWORD PTR [rbx]
0x00470848: test   BYTE PTR [r15+0xa0],0x4
0x00470850: je     0x140470da6
0x00470856: mov    r9d,DWORD PTR [r15+0x40]
0x0047085a: mov    rax,QWORD PTR [rip+0x1f74857]        # 0x1423e50b8
0x00470861: mov    rsi,QWORD PTR [rip+0x1f74848]        # 0x1423e50b0
0x00470868: sub    rax,rsi
0x0047086b: sar    rax,0x3
0x0047086f: test   eax,eax
0x00470871: je     0x140470ac8
0x00470877: cmp    r9d,0xffffffff
0x0047087b: je     0x140470ac8
0x00470881: xor    edx,edx
0x00470883: sub    eax,0x1
0x00470886: js     0x1404708b9
0x00470888: nop    DWORD PTR [rax+rax*1+0x0]
0x00470890: mov    r11d,eax
0x00470893: lea    ecx,[rdx+rax*1]
0x00470896: sar    ecx,1
0x00470898: movsxd rax,ecx
0x0047089b: mov    r10,QWORD PTR [rsi+rax*8]
0x0047089f: cmp    DWORD PTR [r10+0x130],r9d
0x004708a6: je     0x1404708bc
0x004708a8: lea    eax,[rcx+0x1]
0x004708ab: cmovle edx,eax
0x004708ae: lea    eax,[rcx-0x1]
0x004708b1: cmovle eax,r11d
0x004708b5: cmp    edx,eax
0x004708b7: jle    0x140470890
0x004708b9: xor    r10d,r10d
0x004708bc: test   r10,r10
0x004708bf: je     0x140470ac8
0x004708c5: xorps  xmm0,xmm0
0x004708c8: movups XMMWORD PTR [rbp+0x160],xmm0
0x004708cf: mov    QWORD PTR [rbp+0x170],0xb
0x004708da: mov    QWORD PTR [rbp+0x178],0xf
0x004708e5: movsd  xmm0,QWORD PTR [rip+0x11cc6eb]        # 0x14163cfd8 ; literal="Right panel"
0x004708ed: movsd  QWORD PTR [rbp+0x160],xmm0
0x004708f5: movzx  eax,WORD PTR [rip+0x11cc6e4]        # 0x14163cfe0 ; literal="nel"
0x004708fc: mov    WORD PTR [rbp+0x168],ax
0x00470903: movzx  eax,BYTE PTR [rip+0x11cc6d8]        # 0x14163cfe2 ; literal="l"
0x0047090a: mov    BYTE PTR [rbp+0x16a],al
0x00470910: mov    BYTE PTR [rbp+0x16b],0x0
0x00470917: lea    r8,[rbp+0x160]
0x0047091e: lea    rdx,[rbp-0x10]
0x00470922: mov    rcx,QWORD PTR [rbp-0x50]
0x00470926: call   0x1403c8ca0
0x0047092b: xorps  xmm0,xmm0
0x0047092e: movdqu XMMWORD PTR [rsp+0x20],xmm0
0x00470934: mov    rcx,QWORD PTR [rax+0x8]
0x00470938: test   rcx,rcx
0x0047093b: je     0x14047094e
0x0047093d: mov    rax,QWORD PTR [rax]
0x00470940: mov    QWORD PTR [rsp+0x20],rax
0x00470945: mov    QWORD PTR [rsp+0x28],rcx
0x0047094a: lock inc DWORD PTR [rcx+0xc]
0x0047094e: mov    rsi,QWORD PTR [rbp-0x8]
0x00470952: test   rsi,rsi
0x00470955: je     0x140470983
0x00470957: mov    eax,r14d
0x0047095a: lock xadd DWORD PTR [rsi+0x8],eax
0x0047095f: cmp    eax,0x1
0x00470962: jne    0x140470983
0x00470964: mov    rax,QWORD PTR [rsi]
0x00470967: mov    rcx,rsi
0x0047096a: call   QWORD PTR [rax]
0x0047096c: mov    eax,r14d
0x0047096f: lock xadd DWORD PTR [rsi+0xc],eax
0x00470974: cmp    eax,0x1
0x00470977: jne    0x140470983
0x00470979: mov    rax,QWORD PTR [rsi]
0x0047097c: mov    rcx,rsi
0x0047097f: call   QWORD PTR [rax+0x8]
0x00470982: nop
0x00470983: mov    rdx,QWORD PTR [rbp+0x178]
0x0047098a: cmp    rdx,0xf
0x0047098e: jbe    0x1404709c4
0x00470990: inc    rdx
0x00470993: mov    rcx,QWORD PTR [rbp+0x160]
0x0047099a: mov    rax,rcx
0x0047099d: cmp    rdx,0x1000
0x004709a4: jb     0x1404709bf
0x004709a6: add    rdx,0x27
0x004709aa: mov    rcx,QWORD PTR [rcx-0x8]
0x004709ae: sub    rax,rcx
0x004709b1: add    rax,0xfffffffffffffff8
0x004709b5: cmp    rax,0x1f
0x004709b9: ja     0x140470f7e
0x004709bf: call   0x141539680
0x004709c4: mov    rax,QWORD PTR [rbx]
0x004709c7: mov    QWORD PTR [rbp+0x160],rax
0x004709ce: xorps  xmm0,xmm0
0x004709d1: movdqu XMMWORD PTR [rbp+0x168],xmm0
0x004709d9: mov    rsi,QWORD PTR [rsp+0x28]
0x004709de: test   rsi,rsi
0x004709e1: je     0x140470a06
0x004709e3: mov    rax,QWORD PTR [rsp+0x20]
0x004709e8: mov    QWORD PTR [rbp+0x168],rax
0x004709ef: mov    QWORD PTR [rbp+0x170],rsi
0x004709f6: lock inc DWORD PTR [rsi+0xc]
0x004709fa: mov    rsi,QWORD PTR [rsp+0x28]
0x004709ff: mov    rax,QWORD PTR [rbp+0x160]
0x00470a06: mov    QWORD PTR [rbp+0x1b8],r12
0x00470a0d: mov    QWORD PTR [rbp+0x1c0],rax
0x00470a14: mov    rax,QWORD PTR [rbp+0x168]
0x00470a1b: mov    QWORD PTR [rbp+0x1c8],rax
0x00470a22: mov    rax,QWORD PTR [rbp+0x170]
0x00470a29: mov    QWORD PTR [rbp+0x1d0],rax
0x00470a30: movdqu XMMWORD PTR [rbp+0x168],xmm0
0x00470a38: lea    rax,[rbp+0x1b8]
0x00470a3f: mov    QWORD PTR [rbp+0x1f0],rax
0x00470a46: lea    r9,[rbp+0x1b8]
0x00470a4d: lea    r8,[rbp+0x1f8]
0x00470a54: lea    rdx,[rsp+0x50]
0x00470a59: mov    rcx,QWORD PTR [rbp-0x30]
0x00470a5d: call   0x141416040
0x00470a62: mov    r15,QWORD PTR [rsp+0x58]
0x00470a67: test   r15,r15
0x00470a6a: je     0x140470a9e
0x00470a6c: mov    eax,r14d
0x00470a6f: lock xadd DWORD PTR [r15+0x8],eax
0x00470a75: cmp    eax,0x1
0x00470a78: jne    0x140470a99
0x00470a7a: mov    rax,QWORD PTR [r15]
0x00470a7d: mov    rcx,r15
0x00470a80: call   QWORD PTR [rax]
0x00470a82: mov    eax,r14d
0x00470a85: lock xadd DWORD PTR [r15+0xc],eax
0x00470a8b: cmp    eax,0x1
0x00470a8e: jne    0x140470a99
0x00470a90: mov    rax,QWORD PTR [r15]
0x00470a93: mov    rcx,r15
0x00470a96: call   QWORD PTR [rax+0x8]
0x00470a99: mov    rsi,QWORD PTR [rsp+0x28]
0x00470a9e: test   rsi,rsi
0x00470aa1: je     0x140470d46
0x00470aa7: mov    eax,r14d
0x00470aaa: lock xadd DWORD PTR [rsi+0xc],eax
0x00470aaf: cmp    eax,0x1
0x00470ab2: jne    0x140470d46
0x00470ab8: mov    rcx,QWORD PTR [rsp+0x28]
0x00470abd: mov    rax,QWORD PTR [rcx]
0x00470ac0: call   QWORD PTR [rax+0x8]
0x00470ac3: jmp    0x140470d46
0x00470ac8: xor    r12b,r12b
0x00470acb: mov    eax,DWORD PTR [r15+0xb0]
0x00470ad2: cmp    eax,0xffffffff
0x00470ad5: je     0x140470b02
0x00470ad7: inc    eax
0x00470ad9: cmp    eax,DWORD PTR [rip+0x1f03c15]        # 0x1423746f4
0x00470adf: jge    0x140470ae6
0x00470ae1: mov    r12b,0x1
0x00470ae4: jmp    0x140470b02
0x00470ae6: jne    0x140470b02
0x00470ae8: movzx  r12d,r12b
0x00470aec: mov    eax,DWORD PTR [r15+0xb4]
0x00470af3: cmp    DWORD PTR [rip+0x1f174cb],eax        # 0x142387fc4
0x00470af9: mov    eax,0x1
0x00470afe: cmovge r12d,eax
0x00470b02: xorps  xmm0,xmm0
0x00470b05: movdqa XMMWORD PTR [rsp+0x20],xmm0
0x00470b0b: test   r12b,r12b
0x00470b0e: je     0x140470bb7
0x00470b14: lea    rdx,[rip+0x11cc4bd]        # 0x14163cfd8 ; literal="Right panel"
0x00470b1b: lea    rcx,[rbp+0x1b8]
0x00470b22: call   0x140068150
0x00470b27: nop
0x00470b28: lea    r8,[rbp+0x1b8]
0x00470b2f: lea    rdx,[rbp+0xc0]
0x00470b36: mov    rcx,QWORD PTR [rbp-0x40]
0x00470b3a: call   0x1403c8ca0
0x00470b3f: xorps  xmm0,xmm0
0x00470b42: movdqa XMMWORD PTR [rbp+0x180],xmm0
0x00470b4a: mov    rcx,QWORD PTR [rax+0x8]
0x00470b4e: test   rcx,rcx
0x00470b51: je     0x140470b70
0x00470b53: mov    rax,QWORD PTR [rax]
0x00470b56: mov    QWORD PTR [rbp+0x180],rax
0x00470b5d: mov    QWORD PTR [rbp+0x188],rcx
0x00470b64: lock inc DWORD PTR [rcx+0xc]
0x00470b68: movdqa xmm0,XMMWORD PTR [rbp+0x180]
0x00470b70: movdqa XMMWORD PTR [rsp+0x20],xmm0
0x00470b76: mov    rsi,QWORD PTR [rbp+0xc8]
0x00470b7d: test   rsi,rsi
0x00470b80: je     0x140470bae
0x00470b82: mov    eax,r14d
0x00470b85: lock xadd DWORD PTR [rsi+0x8],eax
0x00470b8a: cmp    eax,0x1
0x00470b8d: jne    0x140470bae
0x00470b8f: mov    rax,QWORD PTR [rsi]
0x00470b92: mov    rcx,rsi
0x00470b95: call   QWORD PTR [rax]
0x00470b97: mov    eax,r14d
0x00470b9a: lock xadd DWORD PTR [rsi+0xc],eax
0x00470b9f: cmp    eax,0x1
0x00470ba2: jne    0x140470bae
0x00470ba4: mov    rax,QWORD PTR [rsi]
0x00470ba7: mov    rcx,rsi
0x00470baa: call   QWORD PTR [rax+0x8]
0x00470bad: nop
0x00470bae: lea    rcx,[rbp+0x1b8]
0x00470bb5: jmp    0x140470c15
0x00470bb7: lea    rcx,[rbp+0x180]
0x00470bbe: call   0x140068190
0x00470bc3: mov    r8d,0xb
0x00470bc9: lea    rdx,[rip+0x11cc408]        # 0x14163cfd8 ; literal="Right panel"
0x00470bd0: lea    rcx,[rbp+0x180]
0x00470bd7: call   0x1400681f0
0x00470bdc: nop
0x00470bdd: lea    r8,[rbp+0x180]
0x00470be4: lea    rdx,[rbp+0xd0]
0x00470beb: mov    rcx,QWORD PTR [rbp-0x20]
0x00470bef: call   0x1403c8ca0
0x00470bf4: mov    rdx,rax
0x00470bf7: lea    rcx,[rsp+0x20]
0x00470bfc: call   0x140485230
0x00470c01: lea    rcx,[rbp+0xd0]
0x00470c08: call   0x1400e10e0
0x00470c0d: nop
0x00470c0e: lea    rcx,[rbp+0x180]
0x00470c15: call   0x14006f850
0x00470c1a: xorps  xmm0,xmm0
0x00470c1d: movdqu XMMWORD PTR [rbp+0x160],xmm0
0x00470c25: mov    r15,QWORD PTR [rsp+0x28]
0x00470c2a: test   r15,r15
0x00470c2d: je     0x140470c4c
0x00470c2f: mov    rax,QWORD PTR [rsp+0x20]
0x00470c34: mov    QWORD PTR [rbp+0x160],rax
0x00470c3b: mov    QWORD PTR [rbp+0x168],r15
0x00470c42: lock inc DWORD PTR [r15+0xc]
0x00470c47: mov    r15,QWORD PTR [rsp+0x28]
0x00470c4c: mov    rax,QWORD PTR [rbx]
0x00470c4f: mov    QWORD PTR [rbp+0x170],rax
0x00470c56: lea    rax,[rbp+0x120]
0x00470c5d: lea    rdx,[rbp+0x160]
0x00470c64: lea    rcx,[rbp+0x120]
0x00470c6b: mov    QWORD PTR [rbp+0x180],rax
0x00470c72: call   0x140485770
0x00470c77: mov    rsi,rax
0x00470c7a: test   r12b,r12b
0x00470c7d: je     0x140470cb5
0x00470c7f: mov    rdx,QWORD PTR [rbx]
0x00470c82: lea    rcx,[rbp+0x1b8]
0x00470c89: call   0x14046d660
0x00470c8e: nop
0x00470c8f: mov    r9,rsi
0x00470c92: mov    r8,rax
0x00470c95: lea    rdx,[rbp+0x90]
0x00470c9c: mov    rcx,QWORD PTR [rsp+0x60]
0x00470ca1: call   0x141416040
0x00470ca6: lea    rcx,[rbp+0x90]
0x00470cad: call   0x1400e10e0
0x00470cb2: nop
0x00470cb3: jmp    0x140470ce9
0x00470cb5: mov    rdx,QWORD PTR [rbx]
0x00470cb8: lea    rcx,[rbp+0x1b8]
0x00470cbf: call   0x14046d660
0x00470cc4: nop
0x00470cc5: mov    r9,rsi
0x00470cc8: mov    r8,rax
0x00470ccb: lea    rdx,[rbp+0xa0]
0x00470cd2: mov    rcx,QWORD PTR [rsp+0x70]
0x00470cd7: call   0x141416040
0x00470cdc: lea    rcx,[rbp+0xa0]
0x00470ce3: call   0x1400e10e0
0x00470ce8: nop
0x00470ce9: lea    rcx,[rbp+0x1b8]
0x00470cf0: call   0x14006f850
0x00470cf5: nop
0x00470cf6: mov    rcx,QWORD PTR [rbp+0x168]
0x00470cfd: test   rcx,rcx
0x00470d00: je     0x140470d21
0x00470d02: mov    eax,r14d
0x00470d05: lock xadd DWORD PTR [rcx+0xc],eax
0x00470d0a: cmp    eax,0x1
0x00470d0d: jne    0x140470d1c
0x00470d0f: mov    rcx,QWORD PTR [rbp+0x168]
0x00470d16: mov    rax,QWORD PTR [rcx]
0x00470d19: call   QWORD PTR [rax+0x8]
0x00470d1c: mov    r15,QWORD PTR [rsp+0x28]
0x00470d21: test   r15,r15
0x00470d24: je     0x140470d3f
0x00470d26: mov    eax,r14d
0x00470d29: lock xadd DWORD PTR [r15+0xc],eax
0x00470d2f: cmp    eax,0x1
0x00470d32: jne    0x140470d3f
0x00470d34: mov    rcx,QWORD PTR [rsp+0x28]
0x00470d39: mov    rax,QWORD PTR [rcx]
0x00470d3c: call   QWORD PTR [rax+0x8]
0x00470d3f: lea    r12,[rip+0x11d0a9a]        # 0x1416417e0
0x00470d46: lea    rcx,[rbp+0x1f8]
0x00470d4d: call   0x14006f850
0x00470d52: xor    r15d,r15d
0x00470d55: add    rbx,0x8
0x00470d59: cmp    rbx,rdi
0x00470d5c: jne    0x140470775
0x00470d62: mov    r12,QWORD PTR [rsp+0x30]
0x00470d67: mov    rdi,QWORD PTR [rbp+0xe8]
0x00470d6e: mov    rbx,QWORD PTR [rdi]
0x00470d71: cmp    rbx,rdi
0x00470d74: je     0x140470f99
0x00470d7a: nop    WORD PTR [rax+rax*1+0x0]
0x00470d80: lea    r8,[rbx+0x10]
0x00470d84: mov    rdx,QWORD PTR [r13+0x8]
0x00470d88: cmp    rdx,QWORD PTR [r13+0x10]
0x00470d8c: je     0x140470f85
0x00470d92: mov    rax,QWORD PTR [r8]
0x00470d95: mov    QWORD PTR [rdx],rax
0x00470d98: mov    BYTE PTR [rdx+0x8],0x0
0x00470d9c: add    QWORD PTR [r13+0x8],0x10
0x00470da1: jmp    0x140470f8d
0x00470da6: xorps  xmm0,xmm0
0x00470da9: movups XMMWORD PTR [rbp+0x160],xmm0
0x00470db0: mov    QWORD PTR [rbp+0x170],0xb
0x00470dbb: mov    QWORD PTR [rbp+0x178],0xf
0x00470dc6: movsd  xmm0,QWORD PTR [rip+0x11cc20a]        # 0x14163cfd8 ; literal="Right panel"
0x00470dce: movsd  QWORD PTR [rbp+0x160],xmm0
0x00470dd6: movzx  eax,WORD PTR [rip+0x11cc203]        # 0x14163cfe0 ; literal="nel"
0x00470ddd: mov    WORD PTR [rbp+0x168],ax
0x00470de4: movzx  eax,BYTE PTR [rip+0x11cc1f7]        # 0x14163cfe2 ; literal="l"
0x00470deb: mov    BYTE PTR [rbp+0x16a],al
0x00470df1: mov    BYTE PTR [rbp+0x16b],0x0
0x00470df8: lea    r8,[rbp+0x160]
0x00470dff: lea    rdx,[rbp+0xb0]
0x00470e06: mov    rcx,QWORD PTR [rbp-0x50]
0x00470e0a: call   0x1403c8ca0
0x00470e0f: xorps  xmm0,xmm0
0x00470e12: movdqu XMMWORD PTR [rsp+0x20],xmm0
0x00470e18: mov    rcx,QWORD PTR [rax+0x8]
0x00470e1c: test   rcx,rcx
0x00470e1f: je     0x140470e32
0x00470e21: mov    rax,QWORD PTR [rax]
0x00470e24: mov    QWORD PTR [rsp+0x20],rax
0x00470e29: mov    QWORD PTR [rsp+0x28],rcx
0x00470e2e: lock inc DWORD PTR [rcx+0xc]
0x00470e32: mov    rsi,QWORD PTR [rbp+0xb8]
0x00470e39: test   rsi,rsi
0x00470e3c: je     0x140470e6a
0x00470e3e: mov    eax,r14d
0x00470e41: lock xadd DWORD PTR [rsi+0x8],eax
0x00470e46: cmp    eax,0x1
0x00470e49: jne    0x140470e6a
0x00470e4b: mov    rax,QWORD PTR [rsi]
0x00470e4e: mov    rcx,rsi
0x00470e51: call   QWORD PTR [rax]
0x00470e53: mov    eax,r14d
0x00470e56: lock xadd DWORD PTR [rsi+0xc],eax
0x00470e5b: cmp    eax,0x1
0x00470e5e: jne    0x140470e6a
0x00470e60: mov    rax,QWORD PTR [rsi]
0x00470e63: mov    rcx,rsi
0x00470e66: call   QWORD PTR [rax+0x8]
0x00470e69: nop
0x00470e6a: lea    rcx,[rbp+0x160]
0x00470e71: call   0x14006f850
0x00470e76: xorps  xmm0,xmm0
0x00470e79: movdqu XMMWORD PTR [rbp+0x160],xmm0
0x00470e81: mov    rsi,QWORD PTR [rsp+0x28]
0x00470e86: test   rsi,rsi
0x00470e89: je     0x140470ea7
0x00470e8b: mov    rax,QWORD PTR [rsp+0x20]
0x00470e90: mov    QWORD PTR [rbp+0x160],rax
0x00470e97: mov    QWORD PTR [rbp+0x168],rsi
0x00470e9e: lock inc DWORD PTR [rsi+0xc]
0x00470ea2: mov    rsi,QWORD PTR [rsp+0x28]
0x00470ea7: mov    rcx,QWORD PTR [rbx]
0x00470eaa: mov    QWORD PTR [rbp+0x170],rcx
0x00470eb1: lea    rax,[rip+0x11d09d0]        # 0x141641888
0x00470eb8: mov    QWORD PTR [rbp+0x1b8],rax
0x00470ebf: mov    rax,QWORD PTR [rbp+0x160]
0x00470ec6: mov    QWORD PTR [rbp+0x1c0],rax
0x00470ecd: mov    rax,QWORD PTR [rbp+0x168]
0x00470ed4: mov    QWORD PTR [rbp+0x1c8],rax
0x00470edb: movdqu XMMWORD PTR [rbp+0x160],xmm0
0x00470ee3: mov    QWORD PTR [rbp+0x1d0],rcx
0x00470eea: lea    rax,[rbp+0x1b8]
0x00470ef1: mov    QWORD PTR [rbp+0x1f0],rax
0x00470ef8: lea    r9,[rbp+0x1b8]
0x00470eff: lea    r8,[rbp+0x1f8]
0x00470f06: lea    rdx,[rbp+0x80]
0x00470f0d: mov    rcx,QWORD PTR [rbp-0x30]
0x00470f11: call   0x141416040
0x00470f16: mov    r15,QWORD PTR [rbp+0x88]
0x00470f1d: test   r15,r15
0x00470f20: je     0x140470f54
0x00470f22: mov    eax,r14d
0x00470f25: lock xadd DWORD PTR [r15+0x8],eax
0x00470f2b: cmp    eax,0x1
0x00470f2e: jne    0x140470f4f
0x00470f30: mov    rax,QWORD PTR [r15]
0x00470f33: mov    rcx,r15
0x00470f36: call   QWORD PTR [rax]
0x00470f38: mov    eax,r14d
0x00470f3b: lock xadd DWORD PTR [r15+0xc],eax
0x00470f41: cmp    eax,0x1
0x00470f44: jne    0x140470f4f
0x00470f46: mov    rax,QWORD PTR [r15]
0x00470f49: mov    rcx,r15
0x00470f4c: call   QWORD PTR [rax+0x8]
0x00470f4f: mov    rsi,QWORD PTR [rsp+0x28]
0x00470f54: test   rsi,rsi
0x00470f57: je     0x140470d46
0x00470f5d: mov    eax,r14d
0x00470f60: lock xadd DWORD PTR [rsi+0xc],eax
0x00470f65: cmp    eax,0x1
0x00470f68: jne    0x140470d46
0x00470f6e: mov    rcx,QWORD PTR [rsp+0x28]
0x00470f73: mov    rax,QWORD PTR [rcx]
0x00470f76: call   QWORD PTR [rax+0x8]
0x00470f79: jmp    0x140470d46
0x00470f7e: call   QWORD PTR [rip+0x1174ba4]        # 0x1415e5b28
0x00470f84: nop
0x00470f85: mov    rcx,r13
0x00470f88: call   0x1403cb800
0x00470f8d: mov    rbx,QWORD PTR [rbx]
0x00470f90: cmp    rbx,rdi
0x00470f93: jne    0x140470d80
0x00470f99: mov    rcx,QWORD PTR [rbp-0x80]
0x00470f9d: call   0x14142cd90
0x00470fa2: lea    r8,[rip+0x143eddf]        # 0x1418afd88 ; literal="Unit List"
0x00470fa9: lea    rdx,[rbp+0x180]
0x00470fb0: mov    rcx,QWORD PTR [rbp-0x80]
0x00470fb4: call   0x1403c74a0
0x00470fb9: mov    DWORD PTR [rsp+0x38],0x10
0x00470fc1: mov    dl,0xb
0x00470fc3: mov    rcx,QWORD PTR [rbp+0x180]
0x00470fca: call   0x141410380
0x00470fcf: mov    rax,QWORD PTR [rbp+0x180]
0x00470fd6: mov    DWORD PTR [rax+0xa8],0xfffffffe
0x00470fe0: mov    rax,QWORD PTR [rbp+0x180]
0x00470fe7: mov    rcx,QWORD PTR [rax+0x188]
0x00470fee: mov    DWORD PTR [rcx+0x178],r15d
0x00470ff5: mov    rax,QWORD PTR [rbp+0x180]
0x00470ffc: mov    rcx,QWORD PTR [rax+0x178]
0x00471003: mov    r13d,0x1
0x00471009: mov    DWORD PTR [rcx+0x178],r13d
0x00471010: mov    rax,QWORD PTR [rbp+0x180]
0x00471017: mov    BYTE PTR [rax+0x1b0],0x0
0x0047101e: mov    rax,QWORD PTR [rbp+0x180]
0x00471025: mov    rcx,QWORD PTR [rax+0x188]
0x0047102c: mov    rdi,QWORD PTR [rcx+0x160]
0x00471033: mov    rsi,QWORD PTR [rcx+0x168]
0x0047103a: mov    rbx,QWORD PTR [rbp+0x188]
0x00471041: test   rbx,rbx
0x00471044: je     0x140471071
0x00471046: mov    eax,r14d
0x00471049: lock xadd DWORD PTR [rbx+0x8],eax
0x0047104e: cmp    eax,r13d
0x00471051: jne    0x140471071
0x00471053: mov    rax,QWORD PTR [rbx]
0x00471056: mov    rcx,rbx
0x00471059: call   QWORD PTR [rax]
0x0047105b: mov    eax,r14d
0x0047105e: lock xadd DWORD PTR [rbx+0xc],eax
0x00471063: cmp    eax,r13d
0x00471066: jne    0x140471071
0x00471068: mov    rax,QWORD PTR [rbx]
0x0047106b: mov    rcx,rbx
0x0047106e: call   QWORD PTR [rax+0x8]
0x00471071: cmp    rdi,rsi
0x00471074: je     0x14047116e
0x0047107a: lea    r8,[rip+0x143ed07]        # 0x1418afd88 ; literal="Unit List"
0x00471081: lea    rdx,[rbp+0x180]
0x00471088: mov    rcx,QWORD PTR [rbp-0x80]
0x0047108c: call   0x1403c74a0
0x00471091: mov    DWORD PTR [rsp+0x38],0x30
0x00471099: mov    dl,0xb
0x0047109b: mov    rcx,QWORD PTR [rbp+0x180]
0x004710a2: call   0x141410380
0x004710a7: mov    rcx,QWORD PTR [rbp+0x180]
0x004710ae: mov    DWORD PTR [rcx+0xa8],0xfffffffe
0x004710b8: mov    rax,QWORD PTR [rbp+0x180]
0x004710bf: mov    rcx,QWORD PTR [rax+0x188]
0x004710c6: mov    DWORD PTR [rcx+0x178],r15d
0x004710cd: mov    rax,QWORD PTR [rbp+0x180]
0x004710d4: mov    rcx,QWORD PTR [rax+0x178]
0x004710db: mov    DWORD PTR [rcx+0x178],r13d
0x004710e2: mov    rax,QWORD PTR [rbp+0x180]
0x004710e9: mov    BYTE PTR [rax+0x1b0],0x0
0x004710f0: mov    rax,QWORD PTR [rbp+0x180]
0x004710f7: mov    rax,QWORD PTR [rax+0x188]
0x004710fe: mov    rax,QWORD PTR [rax+0x160]
0x00471105: mov    rdi,QWORD PTR [rax]
0x00471108: mov    rbx,QWORD PTR [rdi+0x68]
0x0047110c: mov    rsi,QWORD PTR [rdi+0x70]
0x00471110: cmp    rbx,rsi
0x00471113: je     0x140471137
0x00471115: mov    rcx,QWORD PTR [rbx+0x38]
0x00471119: test   rcx,rcx
0x0047111c: je     0x14047112e
0x0047111e: mov    QWORD PTR [rsp+0x50],rdi
0x00471123: mov    rax,QWORD PTR [rcx]
0x00471126: lea    rdx,[rsp+0x50]
0x0047112b: call   QWORD PTR [rax+0x10]
0x0047112e: add    rbx,0x40
0x00471132: cmp    rbx,rsi
0x00471135: jne    0x140471115
0x00471137: mov    rbx,QWORD PTR [rbp+0x188]
0x0047113e: test   rbx,rbx
0x00471141: je     0x14047116e
0x00471143: mov    eax,r14d
0x00471146: lock xadd DWORD PTR [rbx+0x8],eax
0x0047114b: cmp    eax,0x1
0x0047114e: jne    0x14047116e
0x00471150: mov    rax,QWORD PTR [rbx]
0x00471153: mov    rcx,rbx
0x00471156: call   QWORD PTR [rax]
0x00471158: mov    eax,r14d
0x0047115b: lock xadd DWORD PTR [rbx+0xc],eax
0x00471160: cmp    eax,0x1
0x00471163: jne    0x14047116e
0x00471165: mov    rax,QWORD PTR [rbx]
0x00471168: mov    rcx,rbx
0x0047116b: call   QWORD PTR [rax+0x8]
0x0047116e: movdqa xmm0,XMMWORD PTR [rip+0x131a5ca]        # 0x14178b740
0x00471176: movdqu XMMWORD PTR [rbp+0x1a0],xmm0
0x0047117e: mov    DWORD PTR [rbp+0x1b0],0xd
0x00471188: xorps  xmm0,xmm0
0x0047118b: movdqu XMMWORD PTR [rbp+0x160],xmm0
0x00471193: mov    ecx,0x14
0x00471198: call   0x1400707d0
0x0047119d: mov    rbx,rax
0x004711a0: mov    QWORD PTR [rbp+0x160],rax
0x004711a7: lea    rcx,[rax+0x14]
0x004711ab: mov    QWORD PTR [rbp+0x170],rcx
0x004711b2: mov    r8d,0x14
0x004711b8: lea    rdx,[rbp+0x1a0]
0x004711bf: mov    rcx,rax
0x004711c2: call   0x14153ae1a
0x004711c7: lea    rax,[rbx+0x14]
0x004711cb: mov    QWORD PTR [rbp+0x168],rax
0x004711d2: lea    rdx,[rbp+0x160]
0x004711d9: mov    rdi,QWORD PTR [rbp-0x60]
0x004711dd: mov    rcx,rdi
0x004711e0: call   0x141425200
0x004711e5: nop
0x004711e6: lea    rcx,[rbp+0x160]
0x004711ed: call   0x14006f750
0x004711f2: lea    r8,[rip+0x143eb8f]        # 0x1418afd88 ; literal="Unit List"
0x004711f9: lea    rdx,[rsp+0x50]
0x004711fe: mov    rcx,rdi
0x00471201: call   0x1403c74a0
0x00471206: or     DWORD PTR [rsp+0x38],0x1
0x0047120b: mov    dl,0xb
0x0047120d: mov    rcx,QWORD PTR [rsp+0x50]
0x00471212: call   0x141410380
0x00471217: mov    rcx,QWORD PTR [rsp+0x50]
0x0047121c: mov    DWORD PTR [rcx+0xa8],0xfffffffe
0x00471226: mov    rax,QWORD PTR [rsp+0x50]
0x0047122b: mov    rcx,QWORD PTR [rax+0x188]
0x00471232: mov    DWORD PTR [rcx+0x178],r15d
0x00471239: mov    rax,QWORD PTR [rsp+0x50]
0x0047123e: mov    rcx,QWORD PTR [rax+0x178]
0x00471245: mov    DWORD PTR [rcx+0x178],r13d
0x0047124c: mov    rax,QWORD PTR [rsp+0x50]
0x00471251: mov    BYTE PTR [rax+0x1b0],0x0
0x00471258: mov    rax,QWORD PTR [rsp+0x50]
0x0047125d: mov    rsi,QWORD PTR [rax+0x178]
0x00471264: mov    ecx,0x1b0
0x00471269: call   0x141539690
0x0047126e: mov    r15,rax
0x00471271: mov    QWORD PTR [rbp+0x180],rax
0x00471278: xorps  xmm0,xmm0
0x0047127b: movups XMMWORD PTR [rax],xmm0
0x0047127e: mov    DWORD PTR [rax+0x8],r13d
0x00471282: mov    DWORD PTR [rax+0xc],r13d
0x00471286: lea    rax,[rip+0x11bd15b]        # 0x14162e3e8
0x0047128d: mov    QWORD PTR [r15],rax
0x00471290: lea    rbx,[r15+0x10]
0x00471294: lea    rax,[rip+0x11d09cd]        # 0x141641c68
0x0047129b: mov    QWORD PTR [rbp+0x1b8],rax
0x004712a2: lea    rax,[rbp+0x1b8]
0x004712a9: mov    QWORD PTR [rbp+0x1f0],rax
0x004712b0: lea    r8,[rbp+0x1b8]
0x004712b7: mov    rdx,rdi
0x004712ba: mov    rcx,rbx
0x004712bd: call   0x1403d4660
0x004712c2: nop
0x004712c3: mov    QWORD PTR [rbp-0x10],rbx
0x004712c7: mov    QWORD PTR [rbp-0x8],r15
0x004712cb: or     DWORD PTR [rsp+0x38],0xc
0x004712d0: mov    QWORD PTR [rbx+0x8],rsi
0x004712d4: lock inc DWORD PTR [r15+0x8]
0x004712d9: mov    rcx,QWORD PTR [rbp-0x10]
0x004712dd: mov    QWORD PTR [rsp+0x20],rcx
0x004712e2: mov    QWORD PTR [rsp+0x28],r15
0x004712e7: mov    rdx,QWORD PTR [rsi+0x168]
0x004712ee: cmp    rdx,QWORD PTR [rsi+0x170]
0x004712f5: je     0x14047130f
0x004712f7: mov    QWORD PTR [rdx],rcx
0x004712fa: mov    QWORD PTR [rdx+0x8],r15
0x004712fe: xor    ecx,ecx
0x00471300: mov    QWORD PTR [rsp+0x28],rcx
0x00471305: add    QWORD PTR [rsi+0x168],0x10
0x0047130d: jmp    0x140471325
0x0047130f: lea    r8,[rsp+0x20]
0x00471314: lea    rcx,[rsi+0x160]
0x0047131b: call   0x1400f20b0
0x00471320: mov    rcx,QWORD PTR [rsp+0x28]
0x00471325: test   rcx,rcx
0x00471328: je     0x14047135c
0x0047132a: mov    eax,r14d
0x0047132d: lock xadd DWORD PTR [rcx+0x8],eax
0x00471332: cmp    eax,0x1
0x00471335: jne    0x14047135c
0x00471337: mov    rbx,QWORD PTR [rsp+0x28]
0x0047133c: mov    rax,QWORD PTR [rbx]
0x0047133f: mov    rcx,rbx
0x00471342: call   QWORD PTR [rax]
0x00471344: mov    eax,r14d
0x00471347: lock xadd DWORD PTR [rbx+0xc],eax
0x0047134c: cmp    eax,0x1
0x0047134f: jne    0x14047135c
0x00471351: mov    rcx,QWORD PTR [rsp+0x28]
0x00471356: mov    rax,QWORD PTR [rcx]
0x00471359: call   QWORD PTR [rax+0x8]
0x0047135c: mov    rax,QWORD PTR [rsi]
0x0047135f: mov    rcx,rsi
0x00471362: call   QWORD PTR [rax+0x20]
0x00471365: nop
0x00471366: mov    rbx,QWORD PTR [rsp+0x58]
0x0047136b: test   rbx,rbx
0x0047136e: je     0x14047139b
0x00471370: mov    eax,r14d
0x00471373: lock xadd DWORD PTR [rbx+0x8],eax
0x00471378: cmp    eax,0x1
0x0047137b: jne    0x14047139b
0x0047137d: mov    rax,QWORD PTR [rbx]
0x00471380: mov    rcx,rbx
0x00471383: call   QWORD PTR [rax]
0x00471385: mov    eax,r14d
0x00471388: lock xadd DWORD PTR [rbx+0xc],eax
0x0047138d: cmp    eax,0x1
0x00471390: jne    0x14047139b
0x00471392: mov    rax,QWORD PTR [rbx]
0x00471395: mov    rcx,rbx
0x00471398: call   QWORD PTR [rax+0x8]
0x0047139b: lea    rcx,[rbp+0x40]
0x0047139f: call   0x1400ec3b0
0x004713a4: nop
0x004713a5: mov    rax,QWORD PTR [rip+0x1f28e3c]        # 0x14239a1e8
0x004713ac: mov    rcx,QWORD PTR [rax+0x18d8]
0x004713b3: sub    rcx,QWORD PTR [rax+0x18d0]
0x004713ba: sar    rcx,0x3
0x004713be: sub    ecx,0x1
0x004713c1: movsxd rdi,ecx
0x004713c4: mov    rbx,QWORD PTR [rbp+0x58]
0x004713c8: js     0x140471589
0x004713ce: mov    r14,QWORD PTR [rbp-0x60]
0x004713d2: mov    rax,QWORD PTR [rip+0x1f28e0f]        # 0x14239a1e8
0x004713d9: mov    rax,QWORD PTR [rax+0x18d0]
0x004713e0: mov    rcx,QWORD PTR [rax+rdi*8]
0x004713e4: mov    edx,DWORD PTR [rcx+0x4]
0x004713e7: cmp    edx,0xffffffff
0x004713ea: je     0x140471579
0x004713f0: lea    rcx,[rip+0x1f73cb9]        # 0x1423e50b0
0x004713f7: call   0x1413cc4d0
0x004713fc: mov    r10,rax
0x004713ff: mov    QWORD PTR [rsp+0x40],rax
0x00471404: mov    r11,rax
0x00471407: shr    r11,0x38
0x0047140b: mov    rsi,rax
0x0047140e: shr    rsi,0x30
0x00471412: mov    r15,rax
0x00471415: shr    r15,0x28
0x00471419: mov    r12,rax
0x0047141c: shr    r12,0x20
0x00471420: mov    r13,rax
0x00471423: shr    r13,0x18
0x00471427: shr    rax,0x10
0x0047142b: mov    QWORD PTR [rsp+0x38],rax
0x00471430: mov    rax,r10
0x00471433: shr    rax,0x8
0x00471437: mov    QWORD PTR [rsp+0x50],rax
0x0047143c: test   r10,r10
0x0047143f: je     0x140471574
0x00471445: test   BYTE PTR [r10+0x110],0x2
0x0047144d: jne    0x140471574
0x00471453: mov    rcx,r10
0x00471456: call   0x14138ed20
0x0047145b: test   al,al
0x0047145d: je     0x140471574
0x00471463: movzx  edx,r10b
0x00471467: movabs rax,0xcbf29ce484222325
0x00471471: xor    rdx,rax
0x00471474: movabs r8,0x100000001b3
0x0047147e: imul   rdx,r8
0x00471482: movzx  eax,BYTE PTR [rsp+0x50]
0x00471487: xor    rdx,rax
0x0047148a: imul   rdx,r8
0x0047148e: movzx  eax,BYTE PTR [rsp+0x38]
0x00471493: xor    rdx,rax
0x00471496: imul   rdx,r8
0x0047149a: movzx  eax,r13b
0x0047149e: xor    rdx,rax
0x004714a1: imul   rdx,r8
0x004714a5: movzx  eax,r12b
0x004714a9: xor    rdx,rax
0x004714ac: imul   rdx,r8
0x004714b0: movzx  eax,r15b
0x004714b4: xor    rdx,rax
0x004714b7: imul   rdx,r8
0x004714bb: movzx  eax,sil
0x004714bf: xor    rdx,rax
0x004714c2: imul   rdx,r8
0x004714c6: xor    rdx,r11
0x004714c9: imul   rdx,r8
0x004714cd: and    rdx,QWORD PTR [rbp+0x70]
0x004714d1: mov    rax,rdx
0x004714d4: add    rax,rax
0x004714d7: mov    rcx,QWORD PTR [rbx+rax*8+0x8]
0x004714dc: cmp    rcx,QWORD PTR [rbp+0x48]
0x004714e0: je     0x140471501
0x004714e2: add    rdx,rdx
0x004714e5: mov    rax,QWORD PTR [rbx+rdx*8]
0x004714e9: cmp    r10,QWORD PTR [rcx+0x10]
0x004714ed: je     0x140471503
0x004714ef: nop
0x004714f0: cmp    rcx,rax
0x004714f3: je     0x140471501
0x004714f5: mov    rcx,QWORD PTR [rcx+0x8]
0x004714f9: cmp    r10,QWORD PTR [rcx+0x10]
0x004714fd: jne    0x1404714f0
0x004714ff: jmp    0x140471503
0x00471501: xor    ecx,ecx
0x00471503: test   rcx,rcx
0x00471506: jne    0x140471574
0x00471508: lea    rcx,[r14+0x2d8]
0x0047150f: mov    rdx,QWORD PTR [rcx+0x8]
0x00471513: cmp    rdx,QWORD PTR [rcx+0x10]
0x00471517: je     0x140471527
0x00471519: mov    QWORD PTR [rdx],r10
0x0047151c: mov    BYTE PTR [rdx+0x8],0x0
0x00471520: add    QWORD PTR [rcx+0x8],0x10
0x00471525: jmp    0x140471531
0x00471527: lea    r8,[rsp+0x40]
0x0047152c: call   0x1403cb800
0x00471531: mov    r12,QWORD PTR [rsp+0x30]
0x00471536: lea    rcx,[r12+0x3e0]
0x0047153e: lea    r8,[rsp+0x40]
0x00471543: lea    rdx,[rbp+0x1a0]
0x0047154a: call   0x1404857c0
0x0047154f: mov    rcx,QWORD PTR [rax]
0x00471552: mov    DWORD PTR [rcx+0x18],0xf4240
0x00471559: lea    r8,[rsp+0x40]
0x0047155e: lea    rdx,[rbp+0x80]
0x00471565: lea    rcx,[rbp+0x40]
0x00471569: call   0x1400ec980
0x0047156e: mov    rbx,QWORD PTR [rbp+0x58]
0x00471572: jmp    0x140471579
0x00471574: mov    r12,QWORD PTR [rsp+0x30]
0x00471579: sub    rdi,0x1
0x0047157d: jns    0x1404713d2
0x00471583: mov    r14d,0xffffffff
0x00471589: mov    rax,QWORD PTR [rip+0x1f28c58]        # 0x14239a1e8
0x00471590: mov    rcx,QWORD PTR [rax+0x17b8]
0x00471597: sub    rcx,QWORD PTR [rax+0x17b0]
0x0047159e: sar    rcx,0x3
0x004715a2: sub    ecx,0x1
0x004715a5: movsxd rdx,ecx
0x004715a8: mov    QWORD PTR [rsp+0x38],rdx
0x004715ad: js     0x140471a15
0x004715b3: mov    r15,QWORD PTR [rip+0x2072206]        # 0x1424e37c0
0x004715ba: nop    WORD PTR [rax+rax*1+0x0]
0x004715c0: mov    rax,QWORD PTR [rip+0x1f28c21]        # 0x14239a1e8
0x004715c7: mov    rax,QWORD PTR [rax+0x17b0]
0x004715ce: mov    rax,QWORD PTR [rax+rdx*8]
0x004715d2: mov    QWORD PTR [rsp+0x50],rax
0x004715d7: mov    edx,DWORD PTR [rax+0x4]
0x004715da: cmp    edx,0xffffffff
0x004715dd: je     0x1404719fb
0x004715e3: mov    r9d,DWORD PTR [rax+0x28]
0x004715e7: cmp    r9d,0xffffffff
0x004715eb: je     0x140471864
0x004715f1: mov    rax,QWORD PTR [rip+0x20721d0]        # 0x1424e37c8
0x004715f8: sub    rax,r15
0x004715fb: sar    rax,0x3
0x004715ff: test   rax,rax
0x00471602: je     0x1404719fb
0x00471608: xor    edx,edx
0x0047160a: sub    eax,0x1
0x0047160d: js     0x140471635
0x0047160f: nop
0x00471610: mov    r10d,eax
0x00471613: lea    ecx,[rdx+rax*1]
0x00471616: sar    ecx,1
0x00471618: movsxd rax,ecx
0x0047161b: mov    rdi,QWORD PTR [r15+rax*8]
0x0047161f: cmp    DWORD PTR [rdi],r9d
0x00471622: je     0x140471637
0x00471624: lea    eax,[rcx+0x1]
0x00471627: cmovle edx,eax
0x0047162a: lea    eax,[rcx-0x1]
0x0047162d: cmovle eax,r10d
0x00471631: cmp    edx,eax
0x00471633: jle    0x140471610
0x00471635: xor    edi,edi
0x00471637: test   rdi,rdi
0x0047163a: je     0x1404719fb
0x00471640: mov    rax,QWORD PTR [rdi+0xa8]
0x00471647: sub    rax,QWORD PTR [rdi+0xa0]
0x0047164e: sar    rax,0x3
0x00471652: sub    eax,0x1
0x00471655: movsxd rsi,eax
0x00471658: js     0x1404719fb
0x0047165e: mov    r14,QWORD PTR [rsp+0x50]
0x00471663: nop    DWORD PTR [rax+0x0]
0x00471667: nop    WORD PTR [rax+rax*1+0x0]
0x00471670: mov    rax,QWORD PTR [rdi+0xa0]
0x00471677: mov    rcx,QWORD PTR [rax+rsi*8]
0x0047167b: mov    edx,DWORD PTR [rcx]
0x0047167d: cmp    edx,0xffffffff
0x00471680: je     0x14047184e
0x00471686: lea    rcx,[rip+0x1f73a23]        # 0x1423e50b0
0x0047168d: call   0x1413cc4d0
0x00471692: mov    rcx,rax
0x00471695: mov    QWORD PTR [rsp+0x40],rax
0x0047169a: mov    r10,rax
0x0047169d: shr    r10,0x38
0x004716a1: mov    r11,rax
0x004716a4: shr    r11,0x30
0x004716a8: mov    r15,rax
0x004716ab: shr    r15,0x28
0x004716af: mov    r12,rax
0x004716b2: shr    r12,0x20
0x004716b6: mov    r13,rax
0x004716b9: shr    r13,0x18
0x004716bd: shr    rax,0x10
0x004716c1: mov    QWORD PTR [rsp+0x20],rax
0x004716c6: mov    rax,rcx
0x004716c9: shr    rax,0x8
0x004716cd: mov    QWORD PTR [rsp+0x50],rax
0x004716d2: test   rcx,rcx
0x004716d5: je     0x140471849
0x004716db: test   BYTE PTR [rcx+0x110],0x2
0x004716e2: jne    0x140471849
0x004716e8: call   0x14138ed20
0x004716ed: test   al,al
0x004716ef: je     0x140471849
0x004716f5: movzx  edx,cl
0x004716f8: movabs rax,0xcbf29ce484222325
0x00471702: xor    rdx,rax
0x00471705: movabs r8,0x100000001b3
0x0047170f: imul   rdx,r8
0x00471713: movzx  eax,BYTE PTR [rsp+0x50]
0x00471718: xor    rdx,rax
0x0047171b: imul   rdx,r8
0x0047171f: movzx  eax,BYTE PTR [rsp+0x20]
0x00471724: xor    rdx,rax
0x00471727: imul   rdx,r8
0x0047172b: movzx  eax,r13b
0x0047172f: xor    rdx,rax
0x00471732: imul   rdx,r8
0x00471736: movzx  eax,r12b
0x0047173a: xor    rdx,rax
0x0047173d: imul   rdx,r8
0x00471741: movzx  eax,r15b
0x00471745: xor    rdx,rax
0x00471748: imul   rdx,r8
0x0047174c: movzx  eax,r11b
0x00471750: xor    rdx,rax
0x00471753: imul   rdx,r8
0x00471757: xor    rdx,r10
0x0047175a: imul   rdx,r8
0x0047175e: and    rdx,QWORD PTR [rbp+0x70]
0x00471762: mov    rax,rdx
0x00471765: add    rax,rax
0x00471768: mov    rax,QWORD PTR [rbx+rax*8+0x8]
0x0047176d: cmp    rax,QWORD PTR [rbp+0x48]
0x00471771: je     0x140471791
0x00471773: add    rdx,rdx
0x00471776: mov    r8,QWORD PTR [rbx+rdx*8]
0x0047177a: cmp    rcx,QWORD PTR [rax+0x10]
0x0047177e: je     0x140471793
0x00471780: cmp    rax,r8
0x00471783: je     0x140471791
0x00471785: mov    rax,QWORD PTR [rax+0x8]
0x00471789: cmp    rcx,QWORD PTR [rax+0x10]
0x0047178d: jne    0x140471780
0x0047178f: jmp    0x140471793
0x00471791: xor    eax,eax
0x00471793: test   rax,rax
0x00471796: jne    0x140471849
0x0047179c: mov    rax,QWORD PTR [rbp-0x60]
0x004717a0: mov    rdx,QWORD PTR [rax+0x2e0]
0x004717a7: cmp    rdx,QWORD PTR [rax+0x2e8]
0x004717ae: je     0x1404717c1
0x004717b0: mov    QWORD PTR [rdx],rcx
0x004717b3: mov    BYTE PTR [rdx+0x8],0x0
0x004717b7: add    QWORD PTR [rax+0x2e0],0x10
0x004717bf: jmp    0x1404717d2
0x004717c1: lea    r8,[rsp+0x40]
0x004717c6: lea    rcx,[rax+0x2d8]
0x004717cd: call   0x1403cb800
0x004717d2: mov    r12,QWORD PTR [rsp+0x30]
0x004717d7: lea    r8,[rsp+0x40]
0x004717dc: lea    rdx,[rbp+0x1a0]
0x004717e3: lea    rcx,[r12+0x3e0]
0x004717eb: call   0x1404857c0
0x004717f0: mov    rcx,QWORD PTR [rax]
0x004717f3: mov    DWORD PTR [rcx+0x18],0x3e8
0x004717fa: lea    r8,[rsp+0x40]
0x004717ff: lea    rdx,[rbp+0x80]
0x00471806: lea    rcx,[rbp+0x40]
0x0047180a: call   0x1400ec980
0x0047180f: mov    ecx,DWORD PTR [r14+0x4]
0x00471813: mov    rax,QWORD PTR [rsp+0x40]
0x00471818: cmp    DWORD PTR [rax+0xc30],ecx
0x0047181e: jne    0x140471843
0x00471820: lea    r8,[rsp+0x40]
0x00471825: lea    rdx,[rbp+0xb0]
0x0047182c: lea    rcx,[r12+0x3e0]
0x00471834: call   0x1404857c0
0x00471839: mov    rcx,QWORD PTR [rax]
0x0047183c: add    DWORD PTR [rcx+0x18],0x3e8
0x00471843: mov    rbx,QWORD PTR [rbp+0x58]
0x00471847: jmp    0x14047184e
0x00471849: mov    r12,QWORD PTR [rsp+0x30]
0x0047184e: sub    rsi,0x1
0x00471852: jns    0x140471670
0x00471858: mov    r15,QWORD PTR [rip+0x2071f61]        # 0x1424e37c0
0x0047185f: jmp    0x1404719fb
0x00471864: lea    rcx,[rip+0x1f73845]        # 0x1423e50b0
0x0047186b: call   0x1413cc4d0
0x00471870: mov    r10,rax
0x00471873: mov    QWORD PTR [rsp+0x40],rax
0x00471878: mov    r11,rax
0x0047187b: shr    r11,0x38
0x0047187f: mov    rdi,rax
0x00471882: shr    rdi,0x30
0x00471886: mov    rsi,rax
0x00471889: shr    rsi,0x28
0x0047188d: mov    r12,rax
0x00471890: shr    r12,0x20
0x00471894: mov    r13,rax
0x00471897: shr    r13,0x18
0x0047189b: shr    rax,0x10
0x0047189f: mov    QWORD PTR [rsp+0x50],rax
0x004718a4: mov    rax,r10
0x004718a7: shr    rax,0x8
0x004718ab: mov    QWORD PTR [rsp+0x20],rax
0x004718b0: test   r10,r10
0x004718b3: je     0x1404719f6
0x004718b9: test   BYTE PTR [r10+0x110],0x2
0x004718c1: jne    0x1404719f6
0x004718c7: mov    rcx,r10
0x004718ca: call   0x14138ed20
0x004718cf: test   al,al
0x004718d1: je     0x1404719f6
0x004718d7: movzx  edx,r10b
0x004718db: movabs rax,0xcbf29ce484222325
0x004718e5: xor    rdx,rax
0x004718e8: movabs r8,0x100000001b3
0x004718f2: imul   rdx,r8
0x004718f6: movzx  eax,BYTE PTR [rsp+0x20]
0x004718fb: xor    rdx,rax
0x004718fe: imul   rdx,r8
0x00471902: movzx  eax,BYTE PTR [rsp+0x50]
0x00471907: xor    rdx,rax
0x0047190a: imul   rdx,r8
0x0047190e: movzx  eax,r13b
0x00471912: xor    rdx,rax
0x00471915: imul   rdx,r8
0x00471919: movzx  eax,r12b
0x0047191d: xor    rdx,rax
0x00471920: imul   rdx,r8
0x00471924: movzx  eax,sil
0x00471928: xor    rdx,rax
0x0047192b: imul   rdx,r8
0x0047192f: movzx  eax,dil
0x00471933: xor    rdx,rax
0x00471936: imul   rdx,r8
0x0047193a: xor    rdx,r11
0x0047193d: imul   rdx,r8
0x00471941: and    rdx,QWORD PTR [rbp+0x70]
0x00471945: mov    rax,rdx
0x00471948: add    rax,rax
0x0047194b: mov    rcx,QWORD PTR [rbx+rax*8+0x8]
0x00471950: cmp    rcx,QWORD PTR [rbp+0x48]
0x00471954: je     0x140471974
0x00471956: add    rdx,rdx
0x00471959: mov    rax,QWORD PTR [rbx+rdx*8]
0x0047195d: cmp    r10,QWORD PTR [rcx+0x10]
0x00471961: je     0x140471976
0x00471963: cmp    rcx,rax
0x00471966: je     0x140471974
0x00471968: mov    rcx,QWORD PTR [rcx+0x8]
0x0047196c: cmp    r10,QWORD PTR [rcx+0x10]
0x00471970: jne    0x140471963
0x00471972: jmp    0x140471976
0x00471974: xor    ecx,ecx
0x00471976: test   rcx,rcx
0x00471979: jne    0x1404719f6
0x0047197f: mov    rcx,QWORD PTR [rbp-0x60]
0x00471983: add    rcx,0x2d8
0x0047198a: mov    rdx,QWORD PTR [rcx+0x8]
0x0047198e: cmp    rdx,QWORD PTR [rcx+0x10]
0x00471992: je     0x1404719a2
0x00471994: mov    QWORD PTR [rdx],r10
0x00471997: mov    BYTE PTR [rdx+0x8],0x0
0x0047199b: add    QWORD PTR [rcx+0x8],0x10
0x004719a0: jmp    0x1404719ac
0x004719a2: lea    r8,[rsp+0x40]
0x004719a7: call   0x1403cb800
0x004719ac: mov    r12,QWORD PTR [rsp+0x30]
0x004719b1: lea    rcx,[r12+0x3e0]
0x004719b9: lea    r8,[rsp+0x40]
0x004719be: lea    rdx,[rbp+0xa0]
0x004719c5: call   0x1404857c0
0x004719ca: mov    rcx,QWORD PTR [rax]
0x004719cd: mov    DWORD PTR [rcx+0x18],0x2710
0x004719d4: lea    r8,[rsp+0x40]
0x004719d9: lea    rdx,[rbp+0x90]
0x004719e0: lea    rcx,[rbp+0x40]
0x004719e4: call   0x1400ec980
0x004719e9: mov    r15,QWORD PTR [rip+0x2071dd0]        # 0x1424e37c0
0x004719f0: mov    rbx,QWORD PTR [rbp+0x58]
0x004719f4: jmp    0x1404719fb
0x004719f6: mov    r12,QWORD PTR [rsp+0x30]
0x004719fb: mov    rdx,QWORD PTR [rsp+0x38]
0x00471a00: sub    rdx,0x1
0x00471a04: mov    QWORD PTR [rsp+0x38],rdx
0x00471a09: jns    0x1404715c0
0x00471a0f: mov    r14d,0xffffffff
0x00471a15: xor    ebx,ebx
0x00471a17: mov    DWORD PTR [r12+0x290],ebx
0x00471a1f: lea    rcx,[r12+0x218]
0x00471a27: lea    rax,[rip+0x2071f0a]        # 0x1424e3938
0x00471a2e: cmp    rcx,rax
0x00471a31: je     0x140471a4d
0x00471a33: mov    r8,QWORD PTR [rip+0x2071f06]        # 0x1424e3940
0x00471a3a: mov    rdx,QWORD PTR [rip+0x2071ef7]        # 0x1424e3938
0x00471a41: sub    r8,rdx
0x00471a44: sar    r8,0x3
0x00471a48: call   0x1400e16b0
0x00471a4d: mov    rax,QWORD PTR [rip+0x1f28794]        # 0x14239a1e8
0x00471a54: test   rax,rax
0x00471a57: je     0x140471a73
0x00471a59: cmp    QWORD PTR [rax+0x1358],rbx
0x00471a60: je     0x140471a73
0x00471a62: mov    r8,r12
0x00471a65: xor    edx,edx
0x00471a67: lea    rcx,[rip+0x1f5fa82]        # 0x1423d14f0
0x00471a6e: call   0x1402b6760
0x00471a73: lea    rax,[r12+0x298]
0x00471a7b: mov    QWORD PTR [rax+0x10],rbx
0x00471a7f: cmp    QWORD PTR [rax+0x18],0xf
0x00471a84: jbe    0x140471a89
0x00471a86: mov    rax,QWORD PTR [rax]
0x00471a89: mov    BYTE PTR [rax],bl
0x00471a8b: mov    DWORD PTR [r12+0x294],ebx
0x00471a93: mov    QWORD PTR [r12+0x2c0],rbx
0x00471a9b: mov    DWORD PTR [r12+0x2c8],ebx
0x00471aa3: mov    BYTE PTR [r12+0x2cc],bl
0x00471aab: mov    QWORD PTR [r12+0x230],rbx
0x00471ab3: mov    DWORD PTR [r12+0x238],ebx
0x00471abb: mov    BYTE PTR [r12+0x23c],bl
0x00471ac3: mov    DWORD PTR [r12+0x240],ebx
0x00471acb: mov    BYTE PTR [r12+0x244],bl
0x00471ad3: mov    rcx,r12
0x00471ad6: call   0x140479330
0x00471adb: cmp    BYTE PTR [rip+0x1435ad7],bl        # 0x1418a75b8
0x00471ae1: jne    0x140471b29
0x00471ae3: mov    r8d,0x12
0x00471ae9: lea    rdx,[rip+0x1f27fc8]        # 0x142399ab8
0x00471af0: lea    rcx,[rsp+0x20]
0x00471af5: call   0x1400babe0
0x00471afa: mov    DWORD PTR [rsp+0x30],r14d
0x00471aff: mov    DWORD PTR [rsp+0x34],ebx
0x00471b03: mov    rax,QWORD PTR [rsp+0x30]
0x00471b08: cmp    BYTE PTR [rsp+0x28],bl
0x00471b0c: cmovne rax,QWORD PTR [rsp+0x20]
0x00471b12: cmp    eax,0xffffffff
0x00471b15: jne    0x140471b29
0x00471b17: mov    edx,0x12
0x00471b1c: lea    rcx,[rip+0x1435a95]        # 0x1418a75b8
0x00471b23: call   0x1401f2310
0x00471b28: nop
0x00471b29: lea    rcx,[rbp+0x58]
0x00471b2d: call   0x140066b70
0x00471b32: lea    rcx,[rbp+0x48]
0x00471b36: call   0x1400ec4d0
0x00471b3b: nop
0x00471b3c: mov    eax,r14d
0x00471b3f: mov    rbx,QWORD PTR [rbp+0x180]
0x00471b46: lock xadd DWORD PTR [rbx+0x8],eax
0x00471b4b: cmp    eax,0x1
0x00471b4e: jne    0x140471b6f
0x00471b50: mov    rax,QWORD PTR [rbx]
0x00471b53: mov    rcx,rbx
0x00471b56: call   QWORD PTR [rax]
0x00471b58: mov    eax,r14d
0x00471b5b: lock xadd DWORD PTR [rbx+0xc],eax
0x00471b60: cmp    eax,0x1
0x00471b63: jne    0x140471b6f
0x00471b65: mov    rax,QWORD PTR [rbx]
0x00471b68: mov    rcx,rbx
0x00471b6b: call   QWORD PTR [rax+0x8]
0x00471b6e: nop
0x00471b6f: lea    rcx,[rbp+0xf8]
0x00471b76: call   0x140066b70
0x00471b7b: lea    rcx,[rbp+0xe8]
0x00471b82: call   0x1400ec4d0
0x00471b87: nop
0x00471b88: mov    rcx,QWORD PTR [rbp+0x8]
0x00471b8c: test   rcx,rcx
0x00471b8f: je     0x140471bc2
0x00471b91: mov    eax,r14d
0x00471b94: lock xadd DWORD PTR [rcx+0x8],eax
0x00471b99: cmp    eax,0x1
0x00471b9c: jne    0x140471bc2
0x00471b9e: mov    rbx,QWORD PTR [rbp+0x8]
0x00471ba2: mov    rax,QWORD PTR [rbx]
0x00471ba5: mov    rcx,rbx
0x00471ba8: call   QWORD PTR [rax]
0x00471baa: mov    eax,r14d
0x00471bad: lock xadd DWORD PTR [rbx+0xc],eax
0x00471bb2: cmp    eax,0x1
0x00471bb5: jne    0x140471bc2
0x00471bb7: mov    rcx,QWORD PTR [rbp+0x8]
0x00471bbb: mov    rax,QWORD PTR [rcx]
0x00471bbe: call   QWORD PTR [rax+0x8]
0x00471bc1: nop
0x00471bc2: mov    rcx,QWORD PTR [rbp-0x78]
0x00471bc6: test   rcx,rcx
0x00471bc9: je     0x140471bfc
0x00471bcb: mov    eax,r14d
0x00471bce: lock xadd DWORD PTR [rcx+0x8],eax
0x00471bd3: cmp    eax,0x1
0x00471bd6: jne    0x140471bfc
0x00471bd8: mov    rbx,QWORD PTR [rbp-0x78]
0x00471bdc: mov    rax,QWORD PTR [rbx]
0x00471bdf: mov    rcx,rbx
0x00471be2: call   QWORD PTR [rax]
0x00471be4: mov    eax,r14d
0x00471be7: lock xadd DWORD PTR [rbx+0xc],eax
0x00471bec: cmp    eax,0x1
0x00471bef: jne    0x140471bfc
0x00471bf1: mov    rcx,QWORD PTR [rbp-0x78]
0x00471bf5: mov    rax,QWORD PTR [rcx]
0x00471bf8: call   QWORD PTR [rax+0x8]
0x00471bfb: nop
0x00471bfc: mov    rcx,QWORD PTR [rbp+0x18]
0x00471c00: test   rcx,rcx
0x00471c03: je     0x140471c36
0x00471c05: mov    eax,r14d
0x00471c08: lock xadd DWORD PTR [rcx+0x8],eax
0x00471c0d: cmp    eax,0x1
0x00471c10: jne    0x140471c36
0x00471c12: mov    rbx,QWORD PTR [rbp+0x18]
0x00471c16: mov    rax,QWORD PTR [rbx]
0x00471c19: mov    rcx,rbx
0x00471c1c: call   QWORD PTR [rax]
0x00471c1e: mov    eax,r14d
0x00471c21: lock xadd DWORD PTR [rbx+0xc],eax
0x00471c26: cmp    eax,0x1
0x00471c29: jne    0x140471c36
0x00471c2b: mov    rcx,QWORD PTR [rbp+0x18]
0x00471c2f: mov    rax,QWORD PTR [rcx]
0x00471c32: call   QWORD PTR [rax+0x8]
0x00471c35: nop
0x00471c36: mov    rcx,QWORD PTR [rbp-0x58]
0x00471c3a: test   rcx,rcx
0x00471c3d: je     0x140471c70
0x00471c3f: mov    eax,r14d
0x00471c42: lock xadd DWORD PTR [rcx+0x8],eax
0x00471c47: cmp    eax,0x1
0x00471c4a: jne    0x140471c70
0x00471c4c: mov    rbx,QWORD PTR [rbp-0x58]
0x00471c50: mov    rax,QWORD PTR [rbx]
0x00471c53: mov    rcx,rbx
0x00471c56: call   QWORD PTR [rax]
0x00471c58: mov    eax,r14d
0x00471c5b: lock xadd DWORD PTR [rbx+0xc],eax
0x00471c60: cmp    eax,0x1
0x00471c63: jne    0x140471c70
0x00471c65: mov    rcx,QWORD PTR [rbp-0x58]
0x00471c69: mov    rax,QWORD PTR [rcx]
0x00471c6c: call   QWORD PTR [rax+0x8]
0x00471c6f: nop
0x00471c70: mov    rcx,QWORD PTR [rbp+0x28]
0x00471c74: test   rcx,rcx
0x00471c77: je     0x140471caa
0x00471c79: mov    eax,r14d
0x00471c7c: lock xadd DWORD PTR [rcx+0x8],eax
0x00471c81: cmp    eax,0x1
0x00471c84: jne    0x140471caa
0x00471c86: mov    rbx,QWORD PTR [rbp+0x28]
0x00471c8a: mov    rax,QWORD PTR [rbx]
0x00471c8d: mov    rcx,rbx
0x00471c90: call   QWORD PTR [rax]
0x00471c92: mov    eax,r14d
0x00471c95: lock xadd DWORD PTR [rbx+0xc],eax
0x00471c9a: cmp    eax,0x1
0x00471c9d: jne    0x140471caa
0x00471c9f: mov    rcx,QWORD PTR [rbp+0x28]
0x00471ca3: mov    rax,QWORD PTR [rcx]
0x00471ca6: call   QWORD PTR [rax+0x8]
0x00471ca9: nop
0x00471caa: mov    rcx,QWORD PTR [rbp+0x38]
0x00471cae: test   rcx,rcx
0x00471cb1: je     0x140471ce4
0x00471cb3: mov    eax,r14d
0x00471cb6: lock xadd DWORD PTR [rcx+0x8],eax
0x00471cbb: cmp    eax,0x1
0x00471cbe: jne    0x140471ce4
0x00471cc0: mov    rbx,QWORD PTR [rbp+0x38]
0x00471cc4: mov    rax,QWORD PTR [rbx]
0x00471cc7: mov    rcx,rbx
0x00471cca: call   QWORD PTR [rax]
0x00471ccc: mov    eax,r14d
0x00471ccf: lock xadd DWORD PTR [rbx+0xc],eax
0x00471cd4: cmp    eax,0x1
0x00471cd7: jne    0x140471ce4
0x00471cd9: mov    rcx,QWORD PTR [rbp+0x38]
0x00471cdd: mov    rax,QWORD PTR [rcx]
0x00471ce0: call   QWORD PTR [rax+0x8]
0x00471ce3: nop
0x00471ce4: mov    rcx,QWORD PTR [rsp+0x68]
0x00471ce9: test   rcx,rcx
0x00471cec: je     0x140471d21
0x00471cee: mov    eax,r14d
0x00471cf1: lock xadd DWORD PTR [rcx+0x8],eax
0x00471cf6: cmp    eax,0x1
0x00471cf9: jne    0x140471d21
0x00471cfb: mov    rbx,QWORD PTR [rsp+0x68]
0x00471d00: mov    rax,QWORD PTR [rbx]
0x00471d03: mov    rcx,rbx
0x00471d06: call   QWORD PTR [rax]
0x00471d08: mov    eax,r14d
0x00471d0b: lock xadd DWORD PTR [rbx+0xc],eax
0x00471d10: cmp    eax,0x1
0x00471d13: jne    0x140471d21
0x00471d15: mov    rcx,QWORD PTR [rsp+0x68]
0x00471d1a: mov    rax,QWORD PTR [rcx]
0x00471d1d: call   QWORD PTR [rax+0x8]
0x00471d20: nop
0x00471d21: mov    rcx,QWORD PTR [rbp-0x38]
0x00471d25: test   rcx,rcx
0x00471d28: je     0x140471d5b
0x00471d2a: mov    eax,r14d
0x00471d2d: lock xadd DWORD PTR [rcx+0x8],eax
0x00471d32: cmp    eax,0x1
0x00471d35: jne    0x140471d5b
0x00471d37: mov    rbx,QWORD PTR [rbp-0x38]
0x00471d3b: mov    rax,QWORD PTR [rbx]
0x00471d3e: mov    rcx,rbx
0x00471d41: call   QWORD PTR [rax]
0x00471d43: mov    eax,r14d
0x00471d46: lock xadd DWORD PTR [rbx+0xc],eax
0x00471d4b: cmp    eax,0x1
0x00471d4e: jne    0x140471d5b
0x00471d50: mov    rcx,QWORD PTR [rbp-0x38]
0x00471d54: mov    rax,QWORD PTR [rcx]
0x00471d57: call   QWORD PTR [rax+0x8]
0x00471d5a: nop
0x00471d5b: mov    rcx,QWORD PTR [rbp-0x28]
0x00471d5f: test   rcx,rcx
0x00471d62: je     0x140471d95
0x00471d64: mov    eax,r14d
0x00471d67: lock xadd DWORD PTR [rcx+0x8],eax
0x00471d6c: cmp    eax,0x1
0x00471d6f: jne    0x140471d95
0x00471d71: mov    rbx,QWORD PTR [rbp-0x28]
0x00471d75: mov    rax,QWORD PTR [rbx]
0x00471d78: mov    rcx,rbx
0x00471d7b: call   QWORD PTR [rax]
0x00471d7d: mov    eax,r14d
0x00471d80: lock xadd DWORD PTR [rbx+0xc],eax
0x00471d85: cmp    eax,0x1
0x00471d88: jne    0x140471d95
0x00471d8a: mov    rcx,QWORD PTR [rbp-0x28]
0x00471d8e: mov    rax,QWORD PTR [rcx]
0x00471d91: call   QWORD PTR [rax+0x8]
0x00471d94: nop
0x00471d95: mov    rcx,QWORD PTR [rbp-0x48]
0x00471d99: test   rcx,rcx
0x00471d9c: je     0x140471dcf
0x00471d9e: mov    eax,r14d
0x00471da1: lock xadd DWORD PTR [rcx+0x8],eax
0x00471da6: cmp    eax,0x1
0x00471da9: jne    0x140471dcf
0x00471dab: mov    rbx,QWORD PTR [rbp-0x48]
0x00471daf: mov    rax,QWORD PTR [rbx]
0x00471db2: mov    rcx,rbx
0x00471db5: call   QWORD PTR [rax]
0x00471db7: mov    eax,r14d
0x00471dba: lock xadd DWORD PTR [rbx+0xc],eax
0x00471dbf: cmp    eax,0x1
0x00471dc2: jne    0x140471dcf
0x00471dc4: mov    rcx,QWORD PTR [rbp-0x48]
0x00471dc8: mov    rax,QWORD PTR [rcx]
0x00471dcb: call   QWORD PTR [rax+0x8]
0x00471dce: nop
0x00471dcf: mov    rcx,QWORD PTR [rsp+0x78]
0x00471dd4: test   rcx,rcx
0x00471dd7: je     0x140471e0c
0x00471dd9: mov    eax,r14d
0x00471ddc: lock xadd DWORD PTR [rcx+0x8],eax
0x00471de1: cmp    eax,0x1
0x00471de4: jne    0x140471e0c
0x00471de6: mov    rbx,QWORD PTR [rsp+0x78]
0x00471deb: mov    rax,QWORD PTR [rbx]
0x00471dee: mov    rcx,rbx
0x00471df1: call   QWORD PTR [rax]
0x00471df3: mov    eax,r14d
0x00471df6: lock xadd DWORD PTR [rbx+0xc],eax
0x00471dfb: cmp    eax,0x1
0x00471dfe: jne    0x140471e0c
0x00471e00: mov    rcx,QWORD PTR [rsp+0x78]
0x00471e05: mov    rax,QWORD PTR [rcx]
0x00471e08: call   QWORD PTR [rax+0x8]
0x00471e0b: nop
0x00471e0c: mov    rcx,QWORD PTR [rbp-0x18]
0x00471e10: test   rcx,rcx
0x00471e13: je     0x140471e46
0x00471e15: mov    eax,r14d
0x00471e18: lock xadd DWORD PTR [rcx+0x8],eax
0x00471e1d: cmp    eax,0x1
0x00471e20: jne    0x140471e46
0x00471e22: mov    rbx,QWORD PTR [rbp-0x18]
0x00471e26: mov    rax,QWORD PTR [rbx]
0x00471e29: mov    rcx,rbx
0x00471e2c: call   QWORD PTR [rax]
0x00471e2e: mov    eax,r14d
0x00471e31: lock xadd DWORD PTR [rbx+0xc],eax
0x00471e36: cmp    eax,0x1
0x00471e39: jne    0x140471e46
0x00471e3b: mov    rcx,QWORD PTR [rbp-0x18]
0x00471e3f: mov    rax,QWORD PTR [rcx]
0x00471e42: call   QWORD PTR [rax+0x8]
0x00471e45: nop
0x00471e46: mov    rcx,QWORD PTR [rbp-0x68]
0x00471e4a: test   rcx,rcx
0x00471e4d: je     0x140471e7e
0x00471e4f: mov    eax,r14d
0x00471e52: lock xadd DWORD PTR [rcx+0x8],eax
0x00471e57: cmp    eax,0x1
0x00471e5a: jne    0x140471e7e
0x00471e5c: mov    rbx,QWORD PTR [rbp-0x68]
0x00471e60: mov    rax,QWORD PTR [rbx]
0x00471e63: mov    rcx,rbx
0x00471e66: call   QWORD PTR [rax]
0x00471e68: lock xadd DWORD PTR [rbx+0xc],r14d
0x00471e6e: cmp    r14d,0x1
0x00471e72: jne    0x140471e7e
0x00471e74: mov    rcx,QWORD PTR [rbp-0x68]
0x00471e78: mov    rax,QWORD PTR [rcx]
0x00471e7b: call   QWORD PTR [rax+0x8]
0x00471e7e: mov    rcx,QWORD PTR [rbp+0x218]
0x00471e85: xor    rcx,rsp
0x00471e88: call   0x141539660
0x00471e8d: lea    r11,[rsp+0x320]
0x00471e95: mov    rbx,QWORD PTR [r11+0x38]
0x00471e99: mov    rsi,QWORD PTR [r11+0x40]
0x00471e9d: mov    rdi,QWORD PTR [r11+0x48]
0x00471ea1: mov    rsp,r11
0x00471ea4: pop    r15
0x00471ea6: pop    r14
0x00471ea8: pop    r13
0x00471eaa: pop    r12
0x00471eac: pop    rbp
0x00471ead: ret
