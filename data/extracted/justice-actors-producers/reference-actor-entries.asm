# reference PE:6a70a6d9:02711000; actor-entries; RVA 0x2b6760..0x2b9040
0x002b6760: mov    QWORD PTR [rsp+0x8],rbx
0x002b6765: push   rbp
0x002b6766: push   rsi
0x002b6767: push   rdi
0x002b6768: push   r12
0x002b676a: push   r13
0x002b676c: push   r14
0x002b676e: push   r15
0x002b6770: lea    rbp,[rsp-0x200]
0x002b6778: sub    rsp,0x300
0x002b677f: movaps XMMWORD PTR [rsp+0x2f0],xmm6
0x002b6787: mov    rax,QWORD PTR [rip+0x15e58b2]        # 0x14189c040
0x002b678e: xor    rax,rsp
0x002b6791: mov    QWORD PTR [rbp+0x1e0],rax
0x002b6798: mov    QWORD PTR [rbp+0x48],r8
0x002b679c: mov    r15,rdx
0x002b679f: mov    QWORD PTR [rbp-0x18],rdx
0x002b67a3: test   r8,r8
0x002b67a6: je     0x1402b67b8
0x002b67a8: mov    rax,QWORD PTR [rip+0x20e3a39]        # 0x14239a1e8
0x002b67af: mov    r12,QWORD PTR [rax+0x1358]
0x002b67b6: jmp    0x1402b67c8
0x002b67b8: test   rdx,rdx
0x002b67bb: je     0x1402b8f13
0x002b67c1: lea    r12,[rdx+0x1e0]
0x002b67c8: mov    QWORD PTR [rbp-0x28],r12
0x002b67cc: test   r12,r12
0x002b67cf: je     0x1402b8f13
0x002b67d5: test   r8,r8
0x002b67d8: je     0x1402b67f1
0x002b67da: lea    rcx,[r8+0x248]
0x002b67e1: lea    r13,[r8+0x278]
0x002b67e8: lea    rax,[r8+0x260]
0x002b67ef: jmp    0x1402b680f
0x002b67f1: test   rdx,rdx
0x002b67f4: je     0x1402b8f13
0x002b67fa: lea    rcx,[rdx+0x198]
0x002b6801: lea    r13,[rdx+0x1c8]
0x002b6808: lea    rax,[rdx+0x1b0]
0x002b680f: mov    QWORD PTR [rbp+0x68],r13
0x002b6813: mov    QWORD PTR [rbp+0x0],rcx
0x002b6817: test   rcx,rcx
0x002b681a: je     0x1402b8f13
0x002b6820: test   r13,r13
0x002b6823: je     0x1402b8f13
0x002b6829: test   rax,rax
0x002b682c: je     0x1402b8f13
0x002b6832: mov    rbx,QWORD PTR [r12]
0x002b6836: mov    rdi,QWORD PTR [r12+0x8]
0x002b683b: xor    r13d,r13d
0x002b683e: xchg   ax,ax
0x002b6840: cmp    rbx,rdi
0x002b6843: jae    0x1402b6a09
0x002b6849: mov    r15,QWORD PTR [rbx]
0x002b684c: mov    DWORD PTR [r15+0x98],r13d
0x002b6853: mov    r10d,DWORD PTR [r15]
0x002b6856: mov    rcx,QWORD PTR [rip+0x22434c3]        # 0x1424f9d20
0x002b685d: mov    rsi,QWORD PTR [rip+0x22434b4]        # 0x1424f9d18
0x002b6864: sub    rcx,rsi
0x002b6867: sar    rcx,0x3
0x002b686b: test   rcx,rcx
0x002b686e: je     0x1402b68ad
0x002b6870: cmp    r10d,0xffffffff
0x002b6874: je     0x1402b68ad
0x002b6876: mov    edx,r13d
0x002b6879: sub    ecx,0x1
0x002b687c: js     0x1402b68ad
0x002b687e: xchg   ax,ax
0x002b6880: mov    r11d,ecx
0x002b6883: lea    r8d,[rcx+rdx*1]
0x002b6887: sar    r8d,1
0x002b688a: movsxd rax,r8d
0x002b688d: mov    r14,QWORD PTR [rsi+rax*8]
0x002b6891: cmp    DWORD PTR [r14+0xe0],r10d
0x002b6898: je     0x1402b68b7
0x002b689a: lea    ecx,[r8-0x1]
0x002b689e: cmovle ecx,r11d
0x002b68a2: lea    eax,[r8+0x1]
0x002b68a6: cmovle edx,eax
0x002b68a9: cmp    edx,ecx
0x002b68ab: jle    0x1402b6880
0x002b68ad: mov    r15,QWORD PTR [rbp-0x18]
0x002b68b1: add    rbx,0x8
0x002b68b5: jmp    0x1402b6840
0x002b68b7: test   r14,r14
0x002b68ba: je     0x1402b68ad
0x002b68bc: mov    ecx,0xf8
0x002b68c1: call   0x141539690
0x002b68c6: mov    QWORD PTR [rbp+0x90],rax
0x002b68cd: mov    rcx,rax
0x002b68d0: call   0x1402b66a0
0x002b68d5: mov    rsi,rax
0x002b68d8: mov    QWORD PTR [rax],r14
0x002b68db: test   BYTE PTR [r15+0x4],0x8
0x002b68e0: je     0x1402b691e
0x002b68e2: cmp    BYTE PTR [r14+0xaa],r13b
0x002b68e9: je     0x1402b690e
0x002b68eb: lea    rcx,[r14+0x38]
0x002b68ef: xor    r9d,r9d
0x002b68f2: mov    r8b,0x1
0x002b68f5: lea    rdx,[rax+0x18]
0x002b68f9: call   0x140a946e0
0x002b68fe: mov    rax,QWORD PTR [rsi]
0x002b6901: add    rax,0x38
0x002b6905: mov    QWORD PTR [rsi+0x10],rax
0x002b6909: jmp    0x1402b69af
0x002b690e: lea    rdx,[rip+0x13727db]        # 0x1416290f0 ; literal="Nameless"
0x002b6915: lea    rcx,[rax+0x18]
0x002b6919: jmp    0x1402b69aa
0x002b691e: mov    rdx,QWORD PTR [r15+0x80]
0x002b6925: mov    rax,QWORD PTR [r15+0x88]
0x002b692c: sub    rax,rdx
0x002b692f: sar    rax,0x2
0x002b6933: test   rax,rax
0x002b6936: je     0x1402b699f
0x002b6938: mov    edx,DWORD PTR [rdx]
0x002b693a: lea    rcx,[rip+0x22313a7]        # 0x1424e7ce8
0x002b6941: call   0x140072570
0x002b6946: mov    r12,rax
0x002b6949: test   rax,rax
0x002b694c: je     0x1402b6996
0x002b694e: mov    rcx,rax
0x002b6951: call   0x140c3a4f0
0x002b6956: mov    r14,rax
0x002b6959: test   rax,rax
0x002b695c: je     0x1402b6980
0x002b695e: cmp    BYTE PTR [rax+0x72],r13b
0x002b6962: je     0x1402b6980
0x002b6964: lea    rdx,[rsi+0x18]
0x002b6968: xor    r9d,r9d
0x002b696b: mov    r8b,0x1
0x002b696e: mov    rcx,rax
0x002b6971: call   0x140a946e0
0x002b6976: mov    QWORD PTR [rsi+0x10],r14
0x002b697a: mov    QWORD PTR [rsi+0x8],r12
0x002b697e: jmp    0x1402b69af
0x002b6980: lea    rcx,[rsi+0x18]
0x002b6984: lea    rdx,[rip+0x1372765]        # 0x1416290f0 ; literal="Nameless"
0x002b698b: call   0x14006f580
0x002b6990: mov    QWORD PTR [rsi+0x8],r12
0x002b6994: jmp    0x1402b69af
0x002b6996: lea    rdx,[rip+0x1372753]        # 0x1416290f0 ; literal="Nameless"
0x002b699d: jmp    0x1402b69a6
0x002b699f: lea    rdx,[rip+0x137273a]        # 0x1416290e0 ; literal="Unidentified"
0x002b69a6: lea    rcx,[rsi+0x18]
0x002b69aa: call   0x14006f580
0x002b69af: mov    eax,0x80
0x002b69b4: lea    rdx,[rax+r15*1]
0x002b69b8: mov    rax,QWORD PTR [rdx+0x8]
0x002b69bc: sub    rax,QWORD PTR [rdx]
0x002b69bf: sar    rax,0x2
0x002b69c3: test   rax,rax
0x002b69c6: je     0x1402b69d4
0x002b69c8: lea    rcx,[rsi+0xa0]
0x002b69cf: call   0x140071fd0
0x002b69d4: mov    r14,QWORD PTR [rbp+0x48]
0x002b69d8: test   r14,r14
0x002b69db: je     0x1402b69e8
0x002b69dd: mov    rdx,rsi
0x002b69e0: mov    rcx,r14
0x002b69e3: call   0x140479a20
0x002b69e8: mov    r15,QWORD PTR [rbp-0x18]
0x002b69ec: test   r15,r15
0x002b69ef: je     0x1402b68b1
0x002b69f5: mov    rdx,rsi
0x002b69f8: mov    rcx,r15
0x002b69fb: call   0x1400cce90
0x002b6a00: add    rbx,0x8
0x002b6a04: jmp    0x1402b6840
0x002b6a09: mov    r12,QWORD PTR [rbp-0x28]
0x002b6a0d: mov    rbx,QWORD PTR [r12+0x18]
0x002b6a12: mov    rax,QWORD PTR [r12+0x20]
0x002b6a17: mov    QWORD PTR [rbp+0x40],rax
0x002b6a1b: mov    rdi,QWORD PTR [rip+0x2231476]        # 0x1424e7e98
0x002b6a22: mov    QWORD PTR [rbp+0x38],rbx
0x002b6a26: cmp    rbx,rax
0x002b6a29: jae    0x1402b76a4
0x002b6a2f: mov    esi,DWORD PTR [rbx]
0x002b6a31: mov    r11,QWORD PTR [rip+0x2231468]        # 0x1424e7ea0
0x002b6a38: sub    r11,rdi
0x002b6a3b: sar    r11,0x3
0x002b6a3f: test   r11d,r11d
0x002b6a42: jne    0x1402b6a4e
0x002b6a44: mov    ecx,0xffffffff
0x002b6a49: mov    r10d,ecx
0x002b6a4c: jmp    0x1402b6a87
0x002b6a4e: mov    r10d,r13d
0x002b6a51: cmp    r11d,0x40
0x002b6a55: jle    0x1402b6a83
0x002b6a57: nop    WORD PTR [rax+rax*1+0x0]
0x002b6a60: mov    r9d,r11d
0x002b6a63: shr    r9d,1
0x002b6a66: lea    r8d,[r9+r10*1]
0x002b6a6a: movsxd rcx,r8d
0x002b6a6d: mov    rdx,QWORD PTR [rdi+rcx*8]
0x002b6a71: cmp    esi,DWORD PTR [rdx]
0x002b6a73: cmovl  r8d,r10d
0x002b6a77: mov    r10d,r8d
0x002b6a7a: sub    r11d,r9d
0x002b6a7d: cmp    r11d,0x40
0x002b6a81: jg     0x1402b6a60
0x002b6a83: lea    ecx,[r10+r11*1]
0x002b6a87: cmp    ecx,0xffffffff
0x002b6a8a: je     0x1402b6aaa
0x002b6a8c: cmp    r10d,ecx
0x002b6a8f: jge    0x1402b6aaa
0x002b6a91: movsxd rdx,r10d
0x002b6a94: movsxd r8,ecx
0x002b6a97: mov    rcx,QWORD PTR [rdi+rdx*8]
0x002b6a9b: cmp    esi,DWORD PTR [rcx]
0x002b6a9d: je     0x1402b6ac7
0x002b6a9f: inc    r10d
0x002b6aa2: inc    rdx
0x002b6aa5: cmp    rdx,r8
0x002b6aa8: jl     0x1402b6a97
0x002b6aaa: mov    QWORD PTR [rbp+0x58],r13
0x002b6aae: mov    DWORD PTR [rbp+0x50],0xffffffff
0x002b6ab5: movaps xmm0,XMMWORD PTR [rbp+0x50]
0x002b6ab9: movdqa XMMWORD PTR [rbp-0x70],xmm0
0x002b6abe: add    rbx,0x4
0x002b6ac2: jmp    0x1402b6a22
0x002b6ac7: mov    DWORD PTR [rbp+0x70],r10d
0x002b6acb: movsxd rcx,r10d
0x002b6ace: mov    r14,QWORD PTR [rdi+rcx*8]
0x002b6ad2: mov    QWORD PTR [rbp+0x78],r14
0x002b6ad6: mov    DWORD PTR [rbp+0x50],0xffffffff
0x002b6add: mov    QWORD PTR [rbp+0x58],r13
0x002b6ae1: movaps xmm6,XMMWORD PTR [rbp+0x70]
0x002b6ae5: test   r14,r14
0x002b6ae8: je     0x1402b6abe
0x002b6aea: mov    ecx,0x90
0x002b6aef: call   0x141539690
0x002b6af4: mov    r13,rax
0x002b6af7: mov    QWORD PTR [rbp+0x30],rax
0x002b6afb: xorps  xmm0,xmm0
0x002b6afe: movups XMMWORD PTR [rax],xmm0
0x002b6b01: xor    edi,edi
0x002b6b03: mov    QWORD PTR [rax+0x10],rdi
0x002b6b07: mov    QWORD PTR [rax+0x18],0xf
0x002b6b0f: mov    BYTE PTR [rax],dil
0x002b6b12: movups XMMWORD PTR [rax+0x20],xmm0
0x002b6b16: mov    QWORD PTR [rax+0x30],rdi
0x002b6b1a: mov    QWORD PTR [rax+0x38],0xf
0x002b6b22: mov    BYTE PTR [rax+0x20],dil
0x002b6b26: movups XMMWORD PTR [rax+0x40],xmm0
0x002b6b2a: mov    QWORD PTR [rax+0x50],rdi
0x002b6b2e: mov    QWORD PTR [rax+0x58],0xf
0x002b6b36: mov    BYTE PTR [rax+0x40],dil
0x002b6b3a: movups XMMWORD PTR [rax+0x70],xmm0
0x002b6b3e: mov    QWORD PTR [rax+0x80],rdi
0x002b6b45: mov    QWORD PTR [rax+0x88],0xf
0x002b6b50: mov    BYTE PTR [rax+0x70],dil
0x002b6b54: mov    DWORD PTR [rax+0x68],0xffffffff
0x002b6b5b: mov    QWORD PTR [rbp-0x50],rax
0x002b6b5f: psrldq xmm6,0x8
0x002b6b64: movq   QWORD PTR [rax+0x60],xmm6
0x002b6b69: mov    r8d,0x6
0x002b6b6f: lea    rdx,[rip+0x137255e]        # 0x1416290d4 ; literal="A plot"
0x002b6b76: mov    rcx,rax
0x002b6b79: call   0x14006f8d0
0x002b6b7e: mov    rcx,QWORD PTR [r14+0x28]
0x002b6b82: mov    rax,QWORD PTR [r14+0x30]
0x002b6b86: sub    rax,rcx
0x002b6b89: sar    rax,0x3
0x002b6b8d: test   rax,rax
0x002b6b90: je     0x1402b6fbe
0x002b6b96: mov    rdx,QWORD PTR [rcx]
0x002b6b99: mov    eax,DWORD PTR [rdx+0x18]
0x002b6b9c: add    eax,0xfffffffb
0x002b6b9f: cmp    eax,0xa
0x002b6ba2: ja     0x1402b6fbe
0x002b6ba8: cdqe
0x002b6baa: lea    r8,[rip+0xffffffffffd4944f]        # 0x140000000
0x002b6bb1: mov    ecx,DWORD PTR [r8+rax*4+0x2b8f48]
0x002b6bb9: add    rcx,r8
0x002b6bbc: jmp    rcx
0x002b6bbe: lea    rdx,[rip+0x1372503]        # 0x1416290c8 ; literal="Sabotage"
0x002b6bc5: mov    rcx,r13
0x002b6bc8: call   0x14006f580
0x002b6bcd: mov    rax,QWORD PTR [r14+0x28]
0x002b6bd1: mov    rcx,QWORD PTR [rax]
0x002b6bd4: mov    rax,QWORD PTR [rcx+0x10]
0x002b6bd8: cmp    DWORD PTR [rax+0x10],0xffffffff
0x002b6bdc: je     0x1402b6c1b
0x002b6bde: lea    rdx,[rip+0x1331b57]        # 0x1415e873c ; literal=" "
0x002b6be5: mov    rcx,r13
0x002b6be8: call   0x14006f560
0x002b6bed: mov    rax,QWORD PTR [r14+0x28]
0x002b6bf1: mov    rcx,QWORD PTR [rax]
0x002b6bf4: mov    rax,QWORD PTR [rcx+0x10]
0x002b6bf8: mov    r8d,DWORD PTR [rax+0x10]
0x002b6bfc: jmp    0x1402b6f92
0x002b6c01: lea    rdx,[rip+0x137255c]        # 0x141629164 ; literal="Abduct"
0x002b6c08: mov    rcx,r13
0x002b6c0b: call   0x14006f580
0x002b6c10: mov    rax,QWORD PTR [r14+0x28]
0x002b6c14: mov    rcx,QWORD PTR [rax]
0x002b6c17: mov    rax,QWORD PTR [rcx+0x10]
0x002b6c1b: cmp    DWORD PTR [rax+0xc],0xffffffff
0x002b6c1f: je     0x1402b6f9d
0x002b6c25: lea    rdx,[rip+0x1331b10]        # 0x1415e873c ; literal=" "
0x002b6c2c: mov    rcx,r13
0x002b6c2f: call   0x14006f560
0x002b6c34: lea    rcx,[rbp+0xf0]
0x002b6c3b: call   0x140072080
0x002b6c40: mov    rax,QWORD PTR [r14+0x28]
0x002b6c44: mov    rcx,QWORD PTR [rax]
0x002b6c47: mov    rax,QWORD PTR [rcx+0x10]
0x002b6c4b: mov    r8d,DWORD PTR [rax+0xc]
0x002b6c4f: mov    ecx,0x1
0x002b6c54: mov    WORD PTR [rsp+0x28],cx
0x002b6c59: lea    r9,[rbp+0xf0]
0x002b6c60: mov    WORD PTR [rsp+0x20],cx
0x002b6c65: mov    rdx,r13
0x002b6c68: lea    rcx,[rip+0x2243049]        # 0x1424f9cb8
0x002b6c6f: call   0x140b92f10
0x002b6c74: jmp    0x1402b6f9d
0x002b6c79: lea    rdx,[rip+0x13724d8]        # 0x141629158 ; literal="Assassinate"
0x002b6c80: jmp    0x1402b6c08
0x002b6c82: lea    rdx,[rip+0x13724c7]        # 0x141629150 ; literal="Steal"
0x002b6c89: mov    rcx,r13
0x002b6c8c: call   0x14006f580
0x002b6c91: mov    rax,QWORD PTR [r14+0x28]
0x002b6c95: mov    rcx,QWORD PTR [rax]
0x002b6c98: mov    rax,QWORD PTR [rcx+0x10]
0x002b6c9c: cmp    DWORD PTR [rax+0xc],0xffffffff
0x002b6ca0: je     0x1402b6f9d
0x002b6ca6: lea    rdx,[rip+0x1331a8f]        # 0x1415e873c ; literal=" "
0x002b6cad: mov    rcx,r13
0x002b6cb0: call   0x14006f560
0x002b6cb5: mov    rax,QWORD PTR [r14+0x28]
0x002b6cb9: mov    rcx,QWORD PTR [rax]
0x002b6cbc: mov    rax,QWORD PTR [rcx+0x10]
0x002b6cc0: xor    r9d,r9d
0x002b6cc3: mov    r8d,DWORD PTR [rax+0xc]
0x002b6cc7: mov    rdx,r13
0x002b6cca: call   0x140b94400
0x002b6ccf: jmp    0x1402b6f9d
0x002b6cd4: lea    rdx,[rip+0x137246d]        # 0x141629148 ; literal="Corrupt"
0x002b6cdb: mov    rcx,r13
0x002b6cde: call   0x14006f580
0x002b6ce3: mov    rax,QWORD PTR [r14+0x28]
0x002b6ce7: mov    rcx,QWORD PTR [rax]
0x002b6cea: mov    rax,QWORD PTR [rcx+0x10]
0x002b6cee: cmp    DWORD PTR [rax+0x14],0xffffffff
0x002b6cf2: je     0x1402b6f9d
0x002b6cf8: cmp    DWORD PTR [rax+0x10],0xffffffff
0x002b6cfc: je     0x1402b6f9d
0x002b6d02: lea    rdx,[rip+0x1331a33]        # 0x1415e873c ; literal=" "
0x002b6d09: mov    rcx,r13
0x002b6d0c: call   0x14006f560
0x002b6d11: mov    rax,QWORD PTR [r14+0x28]
0x002b6d15: mov    rcx,QWORD PTR [rax]
0x002b6d18: mov    rdi,QWORD PTR [rcx+0x10]
0x002b6d1c: mov    edx,DWORD PTR [rdi+0x10]
0x002b6d1f: lea    rcx,[rip+0x211aad2]        # 0x1423d17f8
0x002b6d26: call   0x14007daf0
0x002b6d2b: mov    rbx,rax
0x002b6d2e: test   rax,rax
0x002b6d31: je     0x1402b6dae
0x002b6d33: lea    rdx,[rax+0x1110]
0x002b6d3a: mov    ecx,DWORD PTR [rdi+0x14]
0x002b6d3d: call   0x1400b9dc0
0x002b6d42: test   rax,rax
0x002b6d45: je     0x1402b6dae
0x002b6d47: mov    rdx,rax
0x002b6d4a: mov    rcx,rbx
0x002b6d4d: call   0x1400bbe40
0x002b6d52: test   rax,rax
0x002b6d55: je     0x1402b6dae
0x002b6d57: xor    r9d,r9d
0x002b6d5a: xor    r8d,r8d
0x002b6d5d: mov    dl,0xff
0x002b6d5f: mov    rcx,rax
0x002b6d62: call   0x14099a3c0
0x002b6d67: mov    rdx,rax
0x002b6d6a: lea    rcx,[rbp+0x1c0]
0x002b6d71: call   0x14006f5d0
0x002b6d76: nop
0x002b6d77: lea    rcx,[rbp+0x1c0]
0x002b6d7e: call   0x14052d3c0
0x002b6d83: lea    rdx,[rbp+0x1c0]
0x002b6d8a: mov    rcx,r13
0x002b6d8d: call   0x1400b9d10
0x002b6d92: lea    rdx,[rip+0x137220f]        # 0x141628fa8 ; literal=" of"
0x002b6d99: mov    rcx,r13
0x002b6d9c: call   0x14006f560
0x002b6da1: nop
0x002b6da2: lea    rcx,[rbp+0x1c0]
0x002b6da9: call   0x14006f850
0x002b6dae: lea    rdx,[rip+0x1331987]        # 0x1415e873c ; literal=" "
0x002b6db5: mov    rcx,r13
0x002b6db8: call   0x14006f560
0x002b6dbd: mov    rax,QWORD PTR [r14+0x28]
0x002b6dc1: mov    rcx,QWORD PTR [rax]
0x002b6dc4: mov    rax,QWORD PTR [rcx+0x10]
0x002b6dc8: xor    r9d,r9d
0x002b6dcb: mov    r8d,DWORD PTR [rax+0x10]
0x002b6dcf: mov    rdx,r13
0x002b6dd2: call   0x140b92900
0x002b6dd7: xor    edi,edi
0x002b6dd9: jmp    0x1402b6f9d
0x002b6dde: lea    rdx,[rip+0x137234b]        # 0x141629130 ; literal="Provide Position"
0x002b6de5: mov    rcx,r13
0x002b6de8: call   0x14006f580
0x002b6ded: mov    rax,QWORD PTR [r14+0x28]
0x002b6df1: mov    rcx,QWORD PTR [rax]
0x002b6df4: mov    rax,QWORD PTR [rcx+0x10]
0x002b6df8: cmp    DWORD PTR [rax+0x28],0xffffffff
0x002b6dfc: je     0x1402b6f9d
0x002b6e02: lea    rdx,[rip+0x13361ab]        # 0x1415ecfb4 ; literal=" in "
0x002b6e09: mov    rcx,r13
0x002b6e0c: call   0x14006f560
0x002b6e11: mov    rax,QWORD PTR [r14+0x28]
0x002b6e15: mov    rcx,QWORD PTR [rax]
0x002b6e18: mov    rax,QWORD PTR [rcx+0x10]
0x002b6e1c: mov    r8d,DWORD PTR [rax+0x28]
0x002b6e20: jmp    0x1402b6f92
0x002b6e25: mov    rcx,QWORD PTR [rdx+0x10]
0x002b6e29: mov    edx,DWORD PTR [rcx+0x18]
0x002b6e2c: test   edx,edx
0x002b6e2e: je     0x1402b6e70
0x002b6e30: sub    edx,0x2
0x002b6e33: je     0x1402b6e55
0x002b6e35: cmp    edx,0x1
0x002b6e38: jne    0x1402b6e7f
0x002b6e3a: lea    rdx,[rip+0x137220f]        # 0x141629050 ; literal="Attempted Embezzlement"
0x002b6e41: mov    rcx,r13
0x002b6e44: call   0x14006f580
0x002b6e49: lea    rdx,[rip+0x1336164]        # 0x1415ecfb4 ; literal=" in "
0x002b6e50: jmp    0x1402b6fa4
0x002b6e55: lea    rdx,[rip+0x13722a4]        # 0x141629100 ; literal="Attempted Espionage"
0x002b6e5c: mov    rcx,r13
0x002b6e5f: call   0x14006f580
0x002b6e64: lea    rdx,[rip+0x1336149]        # 0x1415ecfb4 ; literal=" in "
0x002b6e6b: jmp    0x1402b6fa4
0x002b6e70: lea    rdx,[rip+0x13722a1]        # 0x141629118 ; literal="Attempted Bribery"
0x002b6e77: mov    rcx,r13
0x002b6e7a: call   0x14006f580
0x002b6e7f: lea    rdx,[rip+0x133612e]        # 0x1415ecfb4 ; literal=" in "
0x002b6e86: jmp    0x1402b6fa4
0x002b6e8b: lea    rdx,[rip+0x13721ae]        # 0x141629040 ; literal="Infiltrate"
0x002b6e92: mov    rcx,r13
0x002b6e95: call   0x14006f580
0x002b6e9a: mov    rax,QWORD PTR [r14+0x28]
0x002b6e9e: mov    rcx,QWORD PTR [rax]
0x002b6ea1: mov    rax,QWORD PTR [rcx+0x10]
0x002b6ea5: cmp    DWORD PTR [rax+0x8],0xffffffff
0x002b6ea9: je     0x1402b6f9d
0x002b6eaf: lea    rdx,[rip+0x1331886]        # 0x1415e873c ; literal=" "
0x002b6eb6: mov    rcx,r13
0x002b6eb9: call   0x14006f560
0x002b6ebe: mov    rax,QWORD PTR [r14+0x28]
0x002b6ec2: mov    rcx,QWORD PTR [rax]
0x002b6ec5: mov    rax,QWORD PTR [rcx+0x10]
0x002b6ec9: mov    r8d,DWORD PTR [rax+0x8]
0x002b6ecd: jmp    0x1402b6f92
0x002b6ed2: lea    rdx,[rip+0x137215b]        # 0x141629034 ; literal="Frame"
0x002b6ed9: mov    rcx,r13
0x002b6edc: call   0x14006f580
0x002b6ee1: mov    rax,QWORD PTR [r14+0x28]
0x002b6ee5: mov    rcx,QWORD PTR [rax]
0x002b6ee8: mov    rax,QWORD PTR [rcx+0x10]
0x002b6eec: cmp    DWORD PTR [rax+0x8],0xffffffff
0x002b6ef0: je     0x1402b6f9d
0x002b6ef6: lea    rdx,[rip+0x133183f]        # 0x1415e873c ; literal=" "
0x002b6efd: mov    rcx,r13
0x002b6f00: call   0x14006f560
0x002b6f05: lea    rcx,[rbp+0xf0]
0x002b6f0c: call   0x140072080
0x002b6f11: mov    rax,QWORD PTR [r14+0x28]
0x002b6f15: mov    rcx,QWORD PTR [rax]
0x002b6f18: mov    rax,QWORD PTR [rcx+0x10]
0x002b6f1c: mov    r8d,DWORD PTR [rax+0x8]
0x002b6f20: jmp    0x1402b6c4f
0x002b6f25: lea    rdx,[rip+0x13720fc]        # 0x141629028 ; literal="Start War"
0x002b6f2c: mov    rcx,r13
0x002b6f2f: call   0x14006f580
0x002b6f34: mov    rax,QWORD PTR [r14+0x28]
0x002b6f38: mov    rcx,QWORD PTR [rax]
0x002b6f3b: mov    rax,QWORD PTR [rcx+0x10]
0x002b6f3f: cmp    DWORD PTR [rax+0x8],0xffffffff
0x002b6f43: je     0x1402b6f9d
0x002b6f45: cmp    DWORD PTR [rax+0xc],0xffffffff
0x002b6f49: je     0x1402b6f9d
0x002b6f4b: lea    rdx,[rip+0x13720c6]        # 0x141629018 ; literal=" between "
0x002b6f52: mov    rcx,r13
0x002b6f55: call   0x14006f560
0x002b6f5a: mov    rax,QWORD PTR [r14+0x28]
0x002b6f5e: mov    rcx,QWORD PTR [rax]
0x002b6f61: mov    rax,QWORD PTR [rcx+0x10]
0x002b6f65: xor    r9d,r9d
0x002b6f68: mov    r8d,DWORD PTR [rax+0x8]
0x002b6f6c: mov    rdx,r13
0x002b6f6f: call   0x140b92900
0x002b6f74: lea    rdx,[rip+0x1332195]        # 0x1415e9110 ; literal=" and "
0x002b6f7b: mov    rcx,r13
0x002b6f7e: call   0x14006f560
0x002b6f83: mov    rax,QWORD PTR [r14+0x28]
0x002b6f87: mov    rcx,QWORD PTR [rax]
0x002b6f8a: mov    rax,QWORD PTR [rcx+0x10]
0x002b6f8e: mov    r8d,DWORD PTR [rax+0xc]
0x002b6f92: xor    r9d,r9d
0x002b6f95: mov    rdx,r13
0x002b6f98: call   0x140b92900
0x002b6f9d: lea    rdx,[rip+0x13721cc]        # 0x141629170 ; literal=", agreed in "
0x002b6fa4: mov    rcx,r13
0x002b6fa7: call   0x14006f560
0x002b6fac: mov    rax,QWORD PTR [r14+0x28]
0x002b6fb0: mov    rcx,QWORD PTR [rax]
0x002b6fb3: mov    rdx,r13
0x002b6fb6: mov    ecx,DWORD PTR [rcx+0x4]
0x002b6fb9: call   0x14052c130
0x002b6fbe: mov    rax,QWORD PTR [rbp+0x48]
0x002b6fc2: test   rax,rax
0x002b6fc5: je     0x1402b6fd2
0x002b6fc7: mov    rdx,r13
0x002b6fca: mov    rcx,rax
0x002b6fcd: call   0x140479d60
0x002b6fd2: test   r15,r15
0x002b6fd5: je     0x1402b6fe2
0x002b6fd7: mov    rdx,r13
0x002b6fda: mov    rcx,r15
0x002b6fdd: call   0x1400cd1d0
0x002b6fe2: xorps  xmm0,xmm0
0x002b6fe5: movdqu XMMWORD PTR [rbp+0x10],xmm0
0x002b6fea: mov    QWORD PTR [rbp+0x20],rdi
0x002b6fee: movdqu XMMWORD PTR [rsp+0x68],xmm0
0x002b6ff4: mov    QWORD PTR [rsp+0x78],rdi
0x002b6ff9: movdqu XMMWORD PTR [rbp-0x70],xmm0
0x002b6ffe: mov    QWORD PTR [rbp-0x60],rdi
0x002b7002: mov    rsi,QWORD PTR [r14+0x28]
0x002b7006: mov    r14,QWORD PTR [r14+0x30]
0x002b700a: mov    r9,QWORD PTR [rsp+0x70]
0x002b700f: mov    QWORD PTR [rsp+0x48],r9
0x002b7014: mov    r10,QWORD PTR [rbp-0x68]
0x002b7018: mov    QWORD PTR [rsp+0x30],r10
0x002b701d: lea    r12,[rip+0xffffffffffd48fdc]        # 0x140000000
0x002b7024: cmp    rsi,r14
0x002b7027: jae    0x1402b72bd
0x002b702d: mov    rdx,QWORD PTR [rsi]
0x002b7030: mov    eax,DWORD PTR [rdx+0x18]
0x002b7033: add    eax,0xfffffffb
0x002b7036: cmp    eax,0xa
0x002b7039: ja     0x1402b7110
0x002b703f: cdqe
0x002b7041: mov    ecx,DWORD PTR [r12+rax*4+0x2b8f74]
0x002b7049: add    rcx,r12
0x002b704c: jmp    rcx
0x002b704e: mov    rbx,QWORD PTR [rdx+0x10]
0x002b7052: lea    rdx,[rbx+0x4]
0x002b7056: cmp    DWORD PTR [rdx],0xffffffff
0x002b7059: je     0x1402b7064
0x002b705b: lea    rcx,[rbp+0x10]
0x002b705f: call   0x14006f410
0x002b7064: lea    rdx,[rbx+0x8]
0x002b7068: cmp    DWORD PTR [rdx],0xffffffff
0x002b706b: je     0x1402b7081
0x002b706d: lea    rcx,[rsp+0x68]
0x002b7072: call   0x14006f410
0x002b7077: mov    rax,QWORD PTR [rsp+0x70]
0x002b707c: mov    QWORD PTR [rsp+0x48],rax
0x002b7081: cmp    DWORD PTR [rbx],0xffffffff
0x002b7084: je     0x1402b710b
0x002b708a: mov    rdx,rbx
0x002b708d: lea    rcx,[rbp-0x70]
0x002b7091: call   0x14006f410
0x002b7096: mov    r10,QWORD PTR [rbp-0x68]
0x002b709a: mov    QWORD PTR [rsp+0x30],r10
0x002b709f: add    rsi,0x8
0x002b70a3: mov    r9,QWORD PTR [rsp+0x48]
0x002b70a8: jmp    0x1402b7024
0x002b70ad: mov    rbx,QWORD PTR [rdx+0x10]
0x002b70b1: lea    rdx,[rbx+0x4]
0x002b70b5: cmp    DWORD PTR [rdx],0xffffffff
0x002b70b8: je     0x1402b70c8
0x002b70ba: lea    rcx,[rbp+0x10]
0x002b70be: call   0x14006f410
0x002b70c3: mov    r10,QWORD PTR [rsp+0x30]
0x002b70c8: cmp    DWORD PTR [rbx],0xffffffff
0x002b70cb: je     0x1402b7110
0x002b70cd: jmp    0x1402b708a
0x002b70cf: mov    rbx,QWORD PTR [rdx+0x10]
0x002b70d3: lea    rdx,[rbx+0x8]
0x002b70d7: cmp    DWORD PTR [rdx],0xffffffff
0x002b70da: je     0x1402b70e5
0x002b70dc: lea    rcx,[rbp+0x10]
0x002b70e0: call   0x14006f410
0x002b70e5: lea    rdx,[rbx+0xc]
0x002b70e9: cmp    DWORD PTR [rdx],0xffffffff
0x002b70ec: je     0x1402b7102
0x002b70ee: lea    rcx,[rsp+0x68]
0x002b70f3: call   0x14006f410
0x002b70f8: mov    rax,QWORD PTR [rsp+0x70]
0x002b70fd: mov    QWORD PTR [rsp+0x48],rax
0x002b7102: lea    rdx,[rbx+0x4]
0x002b7106: cmp    DWORD PTR [rdx],0xffffffff
0x002b7109: jne    0x1402b708d
0x002b710b: mov    r10,QWORD PTR [rsp+0x30]
0x002b7110: add    rsi,0x8
0x002b7114: mov    r9,QWORD PTR [rsp+0x48]
0x002b7119: jmp    0x1402b7024
0x002b711e: mov    r15,QWORD PTR [rdx+0x10]
0x002b7122: lea    rdx,[r15+0xc]
0x002b7126: cmp    DWORD PTR [rdx],0xffffffff
0x002b7129: je     0x1402b7139
0x002b712b: lea    rcx,[rbp+0x10]
0x002b712f: call   0x14006f410
0x002b7134: mov    r9,QWORD PTR [rsp+0x48]
0x002b7139: mov    rbx,QWORD PTR [r15+0x10]
0x002b713d: mov    rdi,QWORD PTR [r15+0x18]
0x002b7141: cmp    rbx,rdi
0x002b7144: jae    0x1402b717c
0x002b7146: cmp    r9,QWORD PTR [rsp+0x78]
0x002b714b: je     0x1402b7161
0x002b714d: mov    eax,DWORD PTR [rbx]
0x002b714f: mov    DWORD PTR [r9],eax
0x002b7152: add    r9,0x4
0x002b7156: mov    QWORD PTR [rsp+0x70],r9
0x002b715b: add    rbx,0x4
0x002b715f: jmp    0x1402b7141
0x002b7161: mov    r8,rbx
0x002b7164: mov    rdx,r9
0x002b7167: lea    rcx,[rsp+0x68]
0x002b716c: call   0x140070e20
0x002b7171: mov    r9,QWORD PTR [rsp+0x70]
0x002b7176: add    rbx,0x4
0x002b717a: jmp    0x1402b7141
0x002b717c: mov    QWORD PTR [rsp+0x48],r9
0x002b7181: lea    r8,[r15+0x8]
0x002b7185: mov    eax,DWORD PTR [r8]
0x002b7188: mov    r10,QWORD PTR [rsp+0x30]
0x002b718d: cmp    eax,0xffffffff
0x002b7190: je     0x1402b71ba
0x002b7192: cmp    r10,QWORD PTR [rbp-0x60]
0x002b7196: je     0x1402b71a5
0x002b7198: mov    DWORD PTR [r10],eax
0x002b719b: add    r10,0x4
0x002b719f: mov    QWORD PTR [rbp-0x68],r10
0x002b71a3: jmp    0x1402b71b5
0x002b71a5: mov    rdx,r10
0x002b71a8: lea    rcx,[rbp-0x70]
0x002b71ac: call   0x140070e20
0x002b71b1: mov    r10,QWORD PTR [rbp-0x68]
0x002b71b5: mov    QWORD PTR [rsp+0x30],r10
0x002b71ba: lea    r8,[r15+0x4]
0x002b71be: mov    eax,DWORD PTR [r8]
0x002b71c1: cmp    eax,0xffffffff
0x002b71c4: je     0x1402b71ee
0x002b71c6: cmp    r10,QWORD PTR [rbp-0x60]
0x002b71ca: je     0x1402b71d9
0x002b71cc: mov    DWORD PTR [r10],eax
0x002b71cf: add    r10,0x4
0x002b71d3: mov    QWORD PTR [rbp-0x68],r10
0x002b71d7: jmp    0x1402b71e9
0x002b71d9: mov    rdx,r10
0x002b71dc: lea    rcx,[rbp-0x70]
0x002b71e0: call   0x140070e20
0x002b71e5: mov    r10,QWORD PTR [rbp-0x68]
0x002b71e9: mov    QWORD PTR [rsp+0x30],r10
0x002b71ee: mov    eax,DWORD PTR [r15]
0x002b71f1: cmp    eax,0xffffffff
0x002b71f4: je     0x1402b7110
0x002b71fa: cmp    r10,QWORD PTR [rbp-0x60]
0x002b71fe: je     0x1402b721e
0x002b7200: mov    DWORD PTR [r10],eax
0x002b7203: add    r10,0x4
0x002b7207: mov    QWORD PTR [rsp+0x30],r10
0x002b720c: mov    QWORD PTR [rbp-0x68],r10
0x002b7210: add    rsi,0x8
0x002b7214: mov    r9,QWORD PTR [rsp+0x48]
0x002b7219: jmp    0x1402b7024
0x002b721e: mov    r8,r15
0x002b7221: mov    rdx,r10
0x002b7224: lea    rcx,[rbp-0x70]
0x002b7228: call   0x140070e20
0x002b722d: jmp    0x1402b7096
0x002b7232: mov    rdi,QWORD PTR [rdx+0x10]
0x002b7236: mov    rbx,QWORD PTR [rdi]
0x002b7239: mov    rdi,QWORD PTR [rdi+0x8]
0x002b723d: nop    DWORD PTR [rax]
0x002b7240: cmp    rbx,rdi
0x002b7243: jae    0x1402b7110
0x002b7249: cmp    r10,QWORD PTR [rbp-0x60]
0x002b724d: je     0x1402b7267
0x002b724f: mov    eax,DWORD PTR [rbx]
0x002b7251: mov    DWORD PTR [r10],eax
0x002b7254: add    r10,0x4
0x002b7258: mov    QWORD PTR [rbp-0x68],r10
0x002b725c: mov    QWORD PTR [rsp+0x30],r10
0x002b7261: add    rbx,0x4
0x002b7265: jmp    0x1402b7240
0x002b7267: mov    r8,rbx
0x002b726a: mov    rdx,r10
0x002b726d: lea    rcx,[rbp-0x70]
0x002b7271: call   0x140070e20
0x002b7276: mov    r10,QWORD PTR [rbp-0x68]
0x002b727a: mov    QWORD PTR [rsp+0x30],r10
0x002b727f: add    rbx,0x4
0x002b7283: jmp    0x1402b7240
0x002b7285: mov    rdi,QWORD PTR [rdx+0x10]
0x002b7289: cmp    DWORD PTR [rdi+0x4],0xffffffff
0x002b728d: je     0x1402b72a1
0x002b728f: lea    rdx,[rdi+0x4]
0x002b7293: lea    rcx,[rbp+0x10]
0x002b7297: call   0x14006f410
0x002b729c: mov    r10,QWORD PTR [rsp+0x30]
0x002b72a1: mov    eax,DWORD PTR [rdi]
0x002b72a3: cmp    eax,0xffffffff
0x002b72a6: je     0x1402b7110
0x002b72ac: cmp    eax,DWORD PTR [rdi+0x4]
0x002b72af: je     0x1402b7110
0x002b72b5: mov    rdx,rdi
0x002b72b8: jmp    0x1402b708d
0x002b72bd: mov    rcx,QWORD PTR [rbp+0x18]
0x002b72c1: mov    r14,rcx
0x002b72c4: mov    r15,QWORD PTR [rbp+0x10]
0x002b72c8: sub    r14,r15
0x002b72cb: sar    r14,0x2
0x002b72cf: test   r14,r14
0x002b72d2: mov    r12,QWORD PTR [rbp-0x28]
0x002b72d6: movq   rbx,xmm6
0x002b72db: je     0x1402b7339
0x002b72dd: mov    rsi,r15
0x002b72e0: cmp    rsi,rcx
0x002b72e3: jae    0x1402b732f
0x002b72e5: lea    rdx,[rbx+0x8]
0x002b72e9: mov    ecx,DWORD PTR [rsi]
0x002b72eb: call   0x1400b9dc0
0x002b72f0: test   rax,rax
0x002b72f3: je     0x1402b7325
0x002b72f5: mov    rbx,QWORD PTR [rax+0x8]
0x002b72f9: mov    rdi,QWORD PTR [rax+0x10]
0x002b72fd: nop    DWORD PTR [rax]
0x002b7300: cmp    rbx,rdi
0x002b7303: jae    0x1402b7320
0x002b7305: mov    rdx,r12
0x002b7308: mov    ecx,DWORD PTR [rbx]
0x002b730a: call   0x1400b9dc0
0x002b730f: test   rax,rax
0x002b7312: jne    0x1402b731a
0x002b7314: add    rbx,0x4
0x002b7318: jmp    0x1402b7300
0x002b731a: mov    eax,DWORD PTR [rax]
0x002b731c: mov    DWORD PTR [r13+0x68],eax
0x002b7320: movq   rbx,xmm6
0x002b7325: add    rsi,0x4
0x002b7329: mov    rcx,QWORD PTR [rbp+0x18]
0x002b732d: jmp    0x1402b72e0
0x002b732f: mov    r9,QWORD PTR [rsp+0x48]
0x002b7334: mov    r10,QWORD PTR [rsp+0x30]
0x002b7339: mov    r12,QWORD PTR [rsp+0x68]
0x002b733e: mov    QWORD PTR [rbp-0x30],r12
0x002b7342: cmp    DWORD PTR [r13+0x68],0xffffffff
0x002b7347: jne    0x1402b73ba
0x002b7349: mov    rax,r9
0x002b734c: sub    rax,r12
0x002b734f: sar    rax,0x2
0x002b7353: test   rax,rax
0x002b7356: je     0x1402b73ba
0x002b7358: mov    rsi,r12
0x002b735b: nop    DWORD PTR [rax+rax*1+0x0]
0x002b7360: cmp    rsi,r9
0x002b7363: jae    0x1402b73b1
0x002b7365: lea    rdx,[rbx+0x8]
0x002b7369: mov    ecx,DWORD PTR [rsi]
0x002b736b: call   0x1400b9dc0
0x002b7370: test   rax,rax
0x002b7373: je     0x1402b73a6
0x002b7375: mov    rbx,QWORD PTR [rax+0x8]
0x002b7379: mov    rdi,QWORD PTR [rax+0x10]
0x002b737d: nop    DWORD PTR [rax]
0x002b7380: cmp    rbx,rdi
0x002b7383: jae    0x1402b73a1
0x002b7385: mov    rdx,QWORD PTR [rbp-0x28]
0x002b7389: mov    ecx,DWORD PTR [rbx]
0x002b738b: call   0x1400b9dc0
0x002b7390: test   rax,rax
0x002b7393: jne    0x1402b739b
0x002b7395: add    rbx,0x4
0x002b7399: jmp    0x1402b7380
0x002b739b: mov    eax,DWORD PTR [rax]
0x002b739d: mov    DWORD PTR [r13+0x68],eax
0x002b73a1: movq   rbx,xmm6
0x002b73a6: add    rsi,0x4
0x002b73aa: mov    r9,QWORD PTR [rsp+0x48]
0x002b73af: jmp    0x1402b7360
0x002b73b1: mov    rcx,QWORD PTR [rbp+0x18]
0x002b73b5: mov    r10,QWORD PTR [rsp+0x30]
0x002b73ba: test   r14,r14
0x002b73bd: jne    0x1402b73d2
0x002b73bf: mov    rax,r9
0x002b73c2: sub    rax,r12
0x002b73c5: sar    rax,0x2
0x002b73c9: test   rax,rax
0x002b73cc: je     0x1402b7663
0x002b73d2: mov    rax,r10
0x002b73d5: mov    r13,QWORD PTR [rbp-0x70]
0x002b73d9: mov    QWORD PTR [rbp-0x20],r13
0x002b73dd: sub    rax,r13
0x002b73e0: sar    rax,0x2
0x002b73e4: test   rax,rax
0x002b73e7: je     0x1402b7663
0x002b73ed: xor    al,al
0x002b73ef: mov    BYTE PTR [rsp+0x40],al
0x002b73f3: mov    r12,QWORD PTR [rbp-0x28]
0x002b73f7: cmp    r15,rcx
0x002b73fa: jae    0x1402b74b0
0x002b7400: lea    rdx,[rbx+0x8]
0x002b7404: mov    ecx,DWORD PTR [r15]
0x002b7407: call   0x1400b9dc0
0x002b740c: test   rax,rax
0x002b740f: je     0x1402b74a3
0x002b7415: mov    rsi,QWORD PTR [rax+0x8]
0x002b7419: mov    r14,QWORD PTR [rax+0x10]
0x002b741d: mov    QWORD PTR [rbp-0x8],r14
0x002b7421: mov    r13,QWORD PTR [rbp+0x0]
0x002b7425: cmp    rsi,r14
0x002b7428: jae    0x1402b749e
0x002b742a: mov    rdx,r12
0x002b742d: mov    ecx,DWORD PTR [rsi]
0x002b742f: call   0x1400b9dc0
0x002b7434: test   rax,rax
0x002b7437: je     0x1402b7498
0x002b7439: or     DWORD PTR [rax+0x98],0x2
0x002b7440: mov    BYTE PTR [rsp+0x40],0x1
0x002b7445: mov    rbx,QWORD PTR [r13+0x0]
0x002b7449: mov    rdi,QWORD PTR [r13+0x8]
0x002b744d: mov    r14,QWORD PTR [rbp+0x30]
0x002b7451: cmp    rbx,rdi
0x002b7454: jae    0x1402b7494
0x002b7456: mov    rdx,QWORD PTR [rbx]
0x002b7459: mov    rcx,QWORD PTR [rdx]
0x002b745c: mov    eax,DWORD PTR [rsi]
0x002b745e: cmp    DWORD PTR [rcx+0xe0],eax
0x002b7464: jne    0x1402b748e
0x002b7466: lea    rcx,[rdx+0xd8]
0x002b746d: mov    rdx,QWORD PTR [rcx+0x8]
0x002b7471: cmp    rdx,QWORD PTR [rcx+0x10]
0x002b7475: je     0x1402b7485
0x002b7477: mov    QWORD PTR [rdx],r14
0x002b747a: add    QWORD PTR [rcx+0x8],0x8
0x002b747f: add    rbx,0x8
0x002b7483: jmp    0x1402b7451
0x002b7485: lea    r8,[rbp-0x50]
0x002b7489: call   0x140070bd0
0x002b748e: add    rbx,0x8
0x002b7492: jmp    0x1402b7451
0x002b7494: mov    r14,QWORD PTR [rbp-0x8]
0x002b7498: add    rsi,0x4
0x002b749c: jmp    0x1402b7425
0x002b749e: movq   rbx,xmm6
0x002b74a3: add    r15,0x4
0x002b74a7: mov    rcx,QWORD PTR [rbp+0x18]
0x002b74ab: jmp    0x1402b73f7
0x002b74b0: mov    r12,QWORD PTR [rbp-0x30]
0x002b74b4: mov    r13,QWORD PTR [rbp+0x0]
0x002b74b8: nop    DWORD PTR [rax+rax*1+0x0]
0x002b74c0: cmp    r12,QWORD PTR [rsp+0x48]
0x002b74c5: jae    0x1402b7596
0x002b74cb: lea    rdx,[rbx+0x8]
0x002b74cf: mov    ecx,DWORD PTR [r12]
0x002b74d3: call   0x1400b9dc0
0x002b74d8: test   rax,rax
0x002b74db: je     0x1402b7589
0x002b74e1: mov    rsi,QWORD PTR [rax+0x8]
0x002b74e5: mov    r14,QWORD PTR [rax+0x10]
0x002b74e9: mov    QWORD PTR [rbp-0x8],r14
0x002b74ed: mov    r12,QWORD PTR [rbp-0x28]
0x002b74f1: cmp    rsi,r14
0x002b74f4: jae    0x1402b7580
0x002b74fa: mov    rdx,r12
0x002b74fd: mov    ecx,DWORD PTR [rsi]
0x002b74ff: call   0x1400b9dc0
0x002b7504: test   rax,rax
0x002b7507: je     0x1402b7577
0x002b7509: lea    rcx,[rax+0x98]
0x002b7510: mov    eax,DWORD PTR [rcx]
0x002b7512: cmp    BYTE PTR [rsp+0x40],0x0
0x002b7517: je     0x1402b751e
0x002b7519: or     eax,0x1
0x002b751c: jmp    0x1402b7521
0x002b751e: or     eax,0x2
0x002b7521: mov    DWORD PTR [rcx],eax
0x002b7523: mov    rbx,QWORD PTR [r13+0x0]
0x002b7527: mov    rdi,QWORD PTR [r13+0x8]
0x002b752b: mov    r14,QWORD PTR [rbp+0x30]
0x002b752f: nop
0x002b7530: cmp    rbx,rdi
0x002b7533: jae    0x1402b7573
0x002b7535: mov    rdx,QWORD PTR [rbx]
0x002b7538: mov    rcx,QWORD PTR [rdx]
0x002b753b: mov    eax,DWORD PTR [rsi]
0x002b753d: cmp    DWORD PTR [rcx+0xe0],eax
0x002b7543: jne    0x1402b756d
0x002b7545: lea    rcx,[rdx+0xd8]
0x002b754c: mov    rdx,QWORD PTR [rcx+0x8]
0x002b7550: cmp    rdx,QWORD PTR [rcx+0x10]
0x002b7554: je     0x1402b7564
0x002b7556: mov    QWORD PTR [rdx],r14
0x002b7559: add    QWORD PTR [rcx+0x8],0x8
0x002b755e: add    rbx,0x8
0x002b7562: jmp    0x1402b7530
0x002b7564: lea    r8,[rbp-0x50]
0x002b7568: call   0x140070bd0
0x002b756d: add    rbx,0x8
0x002b7571: jmp    0x1402b7530
0x002b7573: mov    r14,QWORD PTR [rbp-0x8]
0x002b7577: add    rsi,0x4
0x002b757b: jmp    0x1402b74f1
0x002b7580: mov    r12,QWORD PTR [rbp-0x30]
0x002b7584: movq   rbx,xmm6
0x002b7589: add    r12,0x4
0x002b758d: mov    QWORD PTR [rbp-0x30],r12
0x002b7591: jmp    0x1402b74c0
0x002b7596: mov    r13,QWORD PTR [rbp-0x20]
0x002b759a: nop    WORD PTR [rax+rax*1+0x0]
0x002b75a0: cmp    r13,QWORD PTR [rsp+0x30]
0x002b75a5: jae    0x1402b7663
0x002b75ab: lea    rdx,[rbx+0x8]
0x002b75af: mov    ecx,DWORD PTR [r13+0x0]
0x002b75b3: call   0x1400b9dc0
0x002b75b8: test   rax,rax
0x002b75bb: je     0x1402b7656
0x002b75c1: mov    rsi,QWORD PTR [rax+0x8]
0x002b75c5: mov    r14,QWORD PTR [rax+0x10]
0x002b75c9: mov    QWORD PTR [rbp-0x8],r14
0x002b75cd: mov    r13,QWORD PTR [rbp+0x0]
0x002b75d1: cmp    rsi,r14
0x002b75d4: jae    0x1402b764d
0x002b75d6: mov    rdx,QWORD PTR [rbp-0x28]
0x002b75da: mov    ecx,DWORD PTR [rsi]
0x002b75dc: call   0x1400b9dc0
0x002b75e1: test   rax,rax
0x002b75e4: je     0x1402b7647
0x002b75e6: or     DWORD PTR [rax+0x98],0x1
0x002b75ed: mov    rbx,QWORD PTR [r13+0x0]
0x002b75f1: mov    rdi,QWORD PTR [r13+0x8]
0x002b75f5: mov    r14,QWORD PTR [rbp+0x30]
0x002b75f9: nop    DWORD PTR [rax+0x0]
0x002b7600: cmp    rbx,rdi
0x002b7603: jae    0x1402b7643
0x002b7605: mov    rdx,QWORD PTR [rbx]
0x002b7608: mov    rcx,QWORD PTR [rdx]
0x002b760b: mov    eax,DWORD PTR [rsi]
0x002b760d: cmp    DWORD PTR [rcx+0xe0],eax
0x002b7613: jne    0x1402b763d
0x002b7615: lea    rcx,[rdx+0xd8]
0x002b761c: mov    rdx,QWORD PTR [rcx+0x8]
0x002b7620: cmp    rdx,QWORD PTR [rcx+0x10]
0x002b7624: je     0x1402b7634
0x002b7626: mov    QWORD PTR [rdx],r14
0x002b7629: add    QWORD PTR [rcx+0x8],0x8
0x002b762e: add    rbx,0x8
0x002b7632: jmp    0x1402b7600
0x002b7634: lea    r8,[rbp-0x50]
0x002b7638: call   0x140070bd0
0x002b763d: add    rbx,0x8
0x002b7641: jmp    0x1402b7600
0x002b7643: mov    r14,QWORD PTR [rbp-0x8]
0x002b7647: add    rsi,0x4
0x002b764b: jmp    0x1402b75d1
0x002b764d: mov    r13,QWORD PTR [rbp-0x20]
0x002b7651: movq   rbx,xmm6
0x002b7656: add    r13,0x4
0x002b765a: mov    QWORD PTR [rbp-0x20],r13
0x002b765e: jmp    0x1402b75a0
0x002b7663: lea    rcx,[rbp-0x70]
0x002b7667: call   0x14006f750
0x002b766c: nop
0x002b766d: lea    rcx,[rsp+0x68]
0x002b7672: call   0x14006f750
0x002b7677: nop
0x002b7678: lea    rcx,[rbp+0x10]
0x002b767c: call   0x14006f750
0x002b7681: mov    rdi,QWORD PTR [rip+0x2230810]        # 0x1424e7e98
0x002b7688: mov    rbx,QWORD PTR [rbp+0x38]
0x002b768c: mov    rax,QWORD PTR [rbp+0x40]
0x002b7690: mov    r12,QWORD PTR [rbp-0x28]
0x002b7694: mov    r15,QWORD PTR [rbp-0x18]
0x002b7698: xor    r13d,r13d
0x002b769b: add    rbx,0x4
0x002b769f: jmp    0x1402b6a22
0x002b76a4: mov    DWORD PTR [rbp+0x30],r13d
0x002b76a8: mov    rcx,QWORD PTR [rbp+0x0]
0x002b76ac: mov    rsi,QWORD PTR [rcx]
0x002b76af: mov    rax,QWORD PTR [rcx+0x8]
0x002b76b3: mov    QWORD PTR [rbp+0x90],rax
0x002b76ba: mov    QWORD PTR [rbp-0x8],rsi
0x002b76be: cmp    rsi,rax
0x002b76c1: jae    0x1402b8d8d
0x002b76c7: mov    r15,QWORD PTR [rsi]
0x002b76ca: mov    rcx,QWORD PTR [r15]
0x002b76cd: mov    rdx,r12
0x002b76d0: mov    ecx,DWORD PTR [rcx+0xe0]
0x002b76d6: call   0x1400b9dc0
0x002b76db: mov    r14,rax
0x002b76de: test   rax,rax
0x002b76e1: je     0x1402b8d6f
0x002b76e7: mov    ecx,DWORD PTR [rax+0x98]
0x002b76ed: test   cl,0x1
0x002b76f0: jne    0x1402b8d6f
0x002b76f6: test   cl,0x2
0x002b76f9: je     0x1402b8d6f
0x002b76ff: mov    ecx,0xa0
0x002b7704: call   0x141539690
0x002b7709: mov    r12,rax
0x002b770c: mov    QWORD PTR [rbp-0x20],rax
0x002b7710: mov    QWORD PTR [rax],r13
0x002b7713: mov    QWORD PTR [rax+0x8],r13
0x002b7717: mov    QWORD PTR [rax+0x10],r13
0x002b771b: xorps  xmm0,xmm0
0x002b771e: movups XMMWORD PTR [rax+0x18],xmm0
0x002b7722: mov    QWORD PTR [rax+0x28],r13
0x002b7726: mov    QWORD PTR [rax+0x30],0xf
0x002b772e: mov    BYTE PTR [rax+0x18],0x0
0x002b7732: movups XMMWORD PTR [rax+0x38],xmm0
0x002b7736: mov    QWORD PTR [rax+0x48],r13
0x002b773a: mov    QWORD PTR [rax+0x50],0xf
0x002b7742: mov    BYTE PTR [rax+0x38],0x0
0x002b7746: movups XMMWORD PTR [rax+0x58],xmm0
0x002b774a: mov    QWORD PTR [rax+0x68],r13
0x002b774e: mov    QWORD PTR [rax+0x70],0xf
0x002b7756: mov    BYTE PTR [rax+0x58],0x0
0x002b775a: mov    QWORD PTR [rax+0x78],r13
0x002b775e: mov    QWORD PTR [rax+0x80],r13
0x002b7765: mov    QWORD PTR [rax+0x88],r13
0x002b776c: mov    QWORD PTR [rax+0x90],r13
0x002b7773: mov    DWORD PTR [rax+0x98],r13d
0x002b777a: mov    QWORD PTR [rbp+0xd0],rax
0x002b7781: mov    ecx,0x88
0x002b7786: call   0x141539690
0x002b778b: mov    rbx,rax
0x002b778e: mov    QWORD PTR [rbp+0x88],rax
0x002b7795: lea    rcx,[rax+0x20]
0x002b7799: xorps  xmm0,xmm0
0x002b779c: movups XMMWORD PTR [rcx],xmm0
0x002b779f: mov    QWORD PTR [rcx+0x10],r13
0x002b77a3: mov    QWORD PTR [rcx+0x18],0xf
0x002b77ab: mov    BYTE PTR [rcx],0x0
0x002b77ae: lea    rdi,[rax+0x48]
0x002b77b2: movups XMMWORD PTR [rdi],xmm0
0x002b77b5: mov    QWORD PTR [rdi+0x10],r13
0x002b77b9: mov    QWORD PTR [rdi+0x18],0xf
0x002b77c1: mov    BYTE PTR [rdi],0x0
0x002b77c4: movups XMMWORD PTR [rax+0x68],xmm0
0x002b77c8: mov    QWORD PTR [rax+0x78],r13
0x002b77cc: mov    QWORD PTR [rax+0x80],0xf
0x002b77d7: mov    BYTE PTR [rax+0x68],0x0
0x002b77db: mov    QWORD PTR [rax+0x8],r13
0x002b77df: mov    DWORD PTR [rax+0x10],r13d
0x002b77e3: mov    eax,0x1
0x002b77e8: mov    QWORD PTR [rbx+0x14],rax
0x002b77ec: mov    QWORD PTR [rbx+0x18],0x0
0x002b77f4: mov    QWORD PTR [rbp+0x40],rbx
0x002b77f8: mov    QWORD PTR [rbx],r15
0x002b77fb: mov    QWORD PTR [rbx+0x8],r13
0x002b77ff: mov    DWORD PTR [rbx+0x14],eax
0x002b7802: mov    r8d,0x4
0x002b7808: lea    rdx,[rip+0x1371801]        # 0x141629010 ; literal="Boss"
0x002b780f: call   0x14006f8d0
0x002b7814: mov    DWORD PTR [rbx+0x40],0x5
0x002b781b: mov    BYTE PTR [rbx+0x44],0x1
0x002b781f: mov    rdx,QWORD PTR [r15+0x10]
0x002b7823: test   rdx,rdx
0x002b7826: je     0x1402b7976
0x002b782c: cmp    QWORD PTR [rdx+0x10],0x0
0x002b7831: je     0x1402b7848
0x002b7833: cmp    QWORD PTR [rdx+0x18],0xf
0x002b7838: jbe    0x1402b783d
0x002b783a: mov    rdx,QWORD PTR [rdx]
0x002b783d: movzx  edx,BYTE PTR [rdx]
0x002b7840: mov    rcx,rdi
0x002b7843: call   0x1400b9b80
0x002b7848: mov    rax,QWORD PTR [r15+0x10]
0x002b784c: mov    edx,DWORD PTR [rax+0x40]
0x002b784f: cmp    edx,0xffffffff
0x002b7852: jne    0x1402b785d
0x002b7854: cmp    DWORD PTR [rax+0x44],edx
0x002b7857: je     0x1402b7935
0x002b785d: xorps  xmm0,xmm0
0x002b7860: movups XMMWORD PTR [rbp+0x1c0],xmm0
0x002b7867: mov    QWORD PTR [rbp+0x1d0],r13
0x002b786e: mov    QWORD PTR [rbp+0x1d8],0xf
0x002b7879: mov    BYTE PTR [rbp+0x1c0],0x0
0x002b7880: movsx  eax,WORD PTR [rax+0x5c]
0x002b7884: mov    DWORD PTR [rsp+0x20],eax
0x002b7888: lea    r8,[rbp+0x1c0]
0x002b788f: call   0x140d2cb50
0x002b7894: mov    rdx,QWORD PTR [r15+0x10]
0x002b7898: movsx  eax,WORD PTR [rdx+0x5e]
0x002b789c: mov    DWORD PTR [rsp+0x20],eax
0x002b78a0: lea    r8,[rbp+0x1c0]
0x002b78a7: mov    edx,DWORD PTR [rdx+0x44]
0x002b78aa: call   0x140d2cb50
0x002b78af: cmp    QWORD PTR [rbp+0x1d0],0x0
0x002b78b7: je     0x1402b78f4
0x002b78b9: cmp    QWORD PTR [rbx+0x58],0x0
0x002b78be: je     0x1402b78d0
0x002b78c0: lea    rcx,[rbx+0x48]
0x002b78c4: lea    rdx,[rip+0x1330e71]        # 0x1415e873c ; literal=" "
0x002b78cb: call   0x14006f560
0x002b78d0: lea    rdx,[rbp+0x1c0]
0x002b78d7: cmp    QWORD PTR [rbp+0x1d8],0xf
0x002b78df: cmova  rdx,QWORD PTR [rbp+0x1c0]
0x002b78e7: lea    rcx,[rbx+0x48]
0x002b78eb: movzx  edx,BYTE PTR [rdx]
0x002b78ee: call   0x1400b9b80
0x002b78f3: nop
0x002b78f4: mov    rdx,QWORD PTR [rbp+0x1d8]
0x002b78fb: cmp    rdx,0xf
0x002b78ff: jbe    0x1402b7935
0x002b7901: inc    rdx
0x002b7904: mov    rcx,QWORD PTR [rbp+0x1c0]
0x002b790b: mov    rax,rcx
0x002b790e: cmp    rdx,0x1000
0x002b7915: jb     0x1402b7930
0x002b7917: add    rdx,0x27
0x002b791b: mov    rcx,QWORD PTR [rcx-0x8]
0x002b791f: sub    rax,rcx
0x002b7922: add    rax,0xfffffffffffffff8
0x002b7926: cmp    rax,0x1f
0x002b792a: ja     0x1402b8d7f
0x002b7930: call   0x141539680
0x002b7935: mov    esi,0x3
0x002b793a: lea    rcx,[rbx+0x48]
0x002b793e: call   0x14052d3c0
0x002b7943: mov    rcx,QWORD PTR [r15]
0x002b7946: cmp    DWORD PTR [rcx+0x30],0xffffffff
0x002b794a: je     0x1402b795f
0x002b794c: lea    rcx,[rbx+0x68]
0x002b7950: mov    r8,rsi
0x002b7953: lea    rdx,[rip+0x13716b2]        # 0x14162900c ; literal="RIP"
0x002b795a: call   0x14006f8d0
0x002b795f: mov    rdx,QWORD PTR [r12+0x8]
0x002b7964: cmp    rdx,QWORD PTR [r12+0x10]
0x002b7969: je     0x1402b79d7
0x002b796b: mov    QWORD PTR [rdx],rbx
0x002b796e: add    QWORD PTR [r12+0x8],0x8
0x002b7974: jmp    0x1402b79e3
0x002b7976: lea    rdx,[r15+0x18]
0x002b797a: cmp    rdi,rdx
0x002b797d: je     0x1402b7995
0x002b797f: mov    r8,QWORD PTR [rdx+0x10]
0x002b7983: cmp    QWORD PTR [rdx+0x18],0xf
0x002b7988: jbe    0x1402b798d
0x002b798a: mov    rdx,QWORD PTR [rdx]
0x002b798d: mov    rcx,rdi
0x002b7990: call   0x14006f8d0
0x002b7995: cmp    QWORD PTR [rbx+0x58],0x4
0x002b799a: jb     0x1402b7935
0x002b799c: mov    rax,QWORD PTR [rdi+0x10]
0x002b79a0: mov    esi,0x3
0x002b79a5: cmp    rax,rsi
0x002b79a8: jb     0x1402b79c1
0x002b79aa: mov    QWORD PTR [rdi+0x10],rsi
0x002b79ae: cmp    QWORD PTR [rdi+0x18],0xf
0x002b79b3: jbe    0x1402b79b8
0x002b79b5: mov    rdi,QWORD PTR [rdi]
0x002b79b8: mov    BYTE PTR [rdi+0x3],0x0
0x002b79bc: jmp    0x1402b793a
0x002b79c1: mov    rdx,rsi
0x002b79c4: sub    rdx,rax
0x002b79c7: xor    r8d,r8d
0x002b79ca: mov    rcx,rdi
0x002b79cd: call   0x1400e12b0
0x002b79d2: jmp    0x1402b793a
0x002b79d7: lea    r8,[rbp+0x40]
0x002b79db: mov    rcx,r12
0x002b79de: call   0x140070bd0
0x002b79e3: test   BYTE PTR [r14+0x4],0x8
0x002b79e8: je     0x1402b7a1e
0x002b79ea: mov    rcx,QWORD PTR [r15]
0x002b79ed: cmp    BYTE PTR [rcx+0xaa],0x0
0x002b79f4: je     0x1402b7a0f
0x002b79f6: lea    rdx,[r12+0x18]
0x002b79fb: add    rcx,0x38
0x002b79ff: xor    r9d,r9d
0x002b7a02: mov    r8b,0x1
0x002b7a05: call   0x140a946e0
0x002b7a0a: jmp    0x1402b7a9d
0x002b7a0f: mov    r8d,0x8
0x002b7a15: lea    rdx,[rip+0x13716d4]        # 0x1416290f0 ; literal="Nameless"
0x002b7a1c: jmp    0x1402b7a93
0x002b7a1e: mov    rdx,QWORD PTR [r14+0x80]
0x002b7a25: mov    rax,QWORD PTR [r14+0x88]
0x002b7a2c: sub    rax,rdx
0x002b7a2f: sar    rax,0x2
0x002b7a33: test   rax,rax
0x002b7a36: je     0x1402b7a86
0x002b7a38: mov    edx,DWORD PTR [rdx]
0x002b7a3a: lea    rcx,[rip+0x22302a7]        # 0x1424e7ce8
0x002b7a41: call   0x140072570
0x002b7a46: test   rax,rax
0x002b7a49: je     0x1402b7a73
0x002b7a4b: mov    rcx,rax
0x002b7a4e: call   0x140c3a4f0
0x002b7a53: test   rax,rax
0x002b7a56: je     0x1402b7a73
0x002b7a58: cmp    BYTE PTR [rax+0x72],0x0
0x002b7a5c: je     0x1402b7a73
0x002b7a5e: lea    rdx,[r12+0x18]
0x002b7a63: xor    r9d,r9d
0x002b7a66: mov    r8b,0x1
0x002b7a69: mov    rcx,rax
0x002b7a6c: call   0x140a946e0
0x002b7a71: jmp    0x1402b7a9d
0x002b7a73: lea    rcx,[r12+0x18]
0x002b7a78: lea    rdx,[rip+0x1371671]        # 0x1416290f0 ; literal="Nameless"
0x002b7a7f: call   0x14006f580
0x002b7a84: jmp    0x1402b7a9d
0x002b7a86: mov    r8d,0xc
0x002b7a8c: lea    rdx,[rip+0x137164d]        # 0x1416290e0 ; literal="Unidentified"
0x002b7a93: lea    rcx,[r12+0x18]
0x002b7a98: call   0x14006f8d0
0x002b7a9d: mov    QWORD PTR [r12+0x90],r15
0x002b7aa5: mov    QWORD PTR [r15+0xb8],r12
0x002b7aac: mov    r14,QWORD PTR [rbp+0x48]
0x002b7ab0: test   r14,r14
0x002b7ab3: je     0x1402b7ac0
0x002b7ab5: mov    rdx,r12
0x002b7ab8: mov    rcx,r14
0x002b7abb: call   0x140479bc0
0x002b7ac0: mov    rax,QWORD PTR [rbp-0x18]
0x002b7ac4: test   rax,rax
0x002b7ac7: je     0x1402b7ad4
0x002b7ac9: mov    rdx,r12
0x002b7acc: mov    rcx,rax
0x002b7acf: call   0x1400cd030
0x002b7ad4: mov    r13,QWORD PTR [rbp+0x68]
0x002b7ad8: mov    rbx,QWORD PTR [r13+0x0]
0x002b7adc: mov    rdi,QWORD PTR [r13+0x8]
0x002b7ae0: lea    rsi,[r12+0x18]
0x002b7ae5: cmp    rbx,rdi
0x002b7ae8: jae    0x1402b7b82
0x002b7aee: mov    rdx,QWORD PTR [rbx]
0x002b7af1: mov    rax,QWORD PTR [r15]
0x002b7af4: mov    ecx,DWORD PTR [rax+0xe0]
0x002b7afa: cmp    DWORD PTR [rdx+0x68],ecx
0x002b7afd: jne    0x1402b7b79
0x002b7aff: lea    rcx,[rdx+0x70]
0x002b7b03: cmp    rcx,rsi
0x002b7b06: je     0x1402b7b1e
0x002b7b08: mov    rdx,rsi
0x002b7b0b: cmp    QWORD PTR [rsi+0x18],0xf
0x002b7b10: jbe    0x1402b7b15
0x002b7b12: mov    rdx,QWORD PTR [rsi]
0x002b7b15: mov    r8,QWORD PTR [rsi+0x10]
0x002b7b19: call   0x14006f8d0
0x002b7b1e: mov    eax,DWORD PTR [rip+0x2115c60]        # 0x1423cd784
0x002b7b24: lea    ecx,[rax-0x17]
0x002b7b27: cmp    DWORD PTR [rip+0x15e476a],0x0        # 0x14189c298
0x002b7b2e: jne    0x1402b7b33
0x002b7b30: lea    ecx,[rax-0x4]
0x002b7b33: mov    rax,QWORD PTR [rbx]
0x002b7b36: movsxd rdx,ecx
0x002b7b39: sub    rdx,0x5
0x002b7b3d: cmp    QWORD PTR [rax+0x80],rdx
0x002b7b44: jbe    0x1402b7b79
0x002b7b46: lea    rcx,[rax+0x70]
0x002b7b4a: mov    rax,QWORD PTR [rcx+0x10]
0x002b7b4e: cmp    rdx,rax
0x002b7b51: ja     0x1402b7b6e
0x002b7b53: mov    QWORD PTR [rcx+0x10],rdx
0x002b7b57: cmp    QWORD PTR [rcx+0x18],0xf
0x002b7b5c: jbe    0x1402b7b61
0x002b7b5e: mov    rcx,QWORD PTR [rcx]
0x002b7b61: mov    BYTE PTR [rcx+rdx*1],0x0
0x002b7b65: add    rbx,0x8
0x002b7b69: jmp    0x1402b7ae5
0x002b7b6e: sub    rdx,rax
0x002b7b71: xor    r8d,r8d
0x002b7b74: call   0x1400e12b0
0x002b7b79: add    rbx,0x8
0x002b7b7d: jmp    0x1402b7ae5
0x002b7b82: mov    rcx,QWORD PTR [rbp+0x0]
0x002b7b86: mov    rax,QWORD PTR [rcx]
0x002b7b89: mov    rcx,QWORD PTR [rcx+0x8]
0x002b7b8d: nop    DWORD PTR [rax]
0x002b7b90: cmp    rax,rcx
0x002b7b93: jae    0x1402b7ba5
0x002b7b95: mov    rdx,QWORD PTR [rax]
0x002b7b98: and    DWORD PTR [rdx+0xf0],0xfffffffe
0x002b7b9f: add    rax,0x8
0x002b7ba3: jmp    0x1402b7b90
0x002b7ba5: or     DWORD PTR [r15+0xf0],0x1
0x002b7bad: mov    edx,0x1
0x002b7bb2: mov    DWORD PTR [rbp-0x80],edx
0x002b7bb5: xor    al,al
0x002b7bb7: mov    BYTE PTR [rsp+0x40],al
0x002b7bbb: xorps  xmm0,xmm0
0x002b7bbe: movdqu XMMWORD PTR [rbp+0xa8],xmm0
0x002b7bc6: xor    r8d,r8d
0x002b7bc9: mov    QWORD PTR [rbp+0xb8],r8
0x002b7bd0: mov    r13,QWORD PTR [r12]
0x002b7bd4: mov    rax,QWORD PTR [r12+0x8]
0x002b7bd9: mov    QWORD PTR [rbp+0x40],rax
0x002b7bdd: mov    r11,QWORD PTR [rip+0x22302b4]        # 0x1424e7e98
0x002b7be4: mov    QWORD PTR [rbp+0x38],r13
0x002b7be8: cmp    r13,rax
0x002b7beb: jae    0x1402b8d01
0x002b7bf1: mov    rcx,QWORD PTR [r13+0x0]
0x002b7bf5: mov    QWORD PTR [rbp+0x60],rcx
0x002b7bf9: cmp    DWORD PTR [rcx+0x14],edx
0x002b7bfc: jne    0x1402b8cf8
0x002b7c02: mov    rax,QWORD PTR [rbp-0x28]
0x002b7c06: mov    r15,QWORD PTR [rax+0x18]
0x002b7c0a: mov    r12,QWORD PTR [rax+0x20]
0x002b7c0e: mov    QWORD PTR [rbp+0x88],r12
0x002b7c15: mov    QWORD PTR [rbp-0x10],r15
0x002b7c19: cmp    r15,r12
0x002b7c1c: jae    0x1402b8cf1
0x002b7c22: mov    ebx,DWORD PTR [r15]
0x002b7c25: mov    r10,QWORD PTR [rip+0x2230274]        # 0x1424e7ea0
0x002b7c2c: sub    r10,r11
0x002b7c2f: sar    r10,0x3
0x002b7c33: test   r10d,r10d
0x002b7c36: jne    0x1402b7c42
0x002b7c38: mov    eax,0xffffffff
0x002b7c3d: mov    r9d,eax
0x002b7c40: jmp    0x1402b7c7a
0x002b7c42: mov    r9d,r8d
0x002b7c45: cmp    r10d,0x40
0x002b7c49: jle    0x1402b7c76
0x002b7c4b: nop    DWORD PTR [rax+rax*1+0x0]
0x002b7c50: mov    r8d,r10d
0x002b7c53: shr    r8d,1
0x002b7c56: lea    edx,[r8+r9*1]
0x002b7c5a: movsxd rax,edx
0x002b7c5d: mov    rcx,QWORD PTR [r11+rax*8]
0x002b7c61: cmp    ebx,DWORD PTR [rcx]
0x002b7c63: cmovl  edx,r9d
0x002b7c67: mov    r9d,edx
0x002b7c6a: sub    r10d,r8d
0x002b7c6d: cmp    r10d,0x40
0x002b7c71: jg     0x1402b7c50
0x002b7c73: xor    r8d,r8d
0x002b7c76: lea    eax,[r9+r10*1]
0x002b7c7a: cmp    eax,0xffffffff
0x002b7c7d: je     0x1402b7ca3
0x002b7c7f: cmp    r9d,eax
0x002b7c82: jge    0x1402b7ca3
0x002b7c84: movsxd rcx,r9d
0x002b7c87: movsxd rdx,eax
0x002b7c8a: nop    WORD PTR [rax+rax*1+0x0]
0x002b7c90: mov    rax,QWORD PTR [r11+rcx*8]
0x002b7c94: cmp    ebx,DWORD PTR [rax]
0x002b7c96: je     0x1402b7cc0
0x002b7c98: inc    r9d
0x002b7c9b: inc    rcx
0x002b7c9e: cmp    rcx,rdx
0x002b7ca1: jl     0x1402b7c90
0x002b7ca3: mov    QWORD PTR [rbp+0x18],r8
0x002b7ca7: mov    DWORD PTR [rbp+0x10],0xffffffff
0x002b7cae: movaps xmm0,XMMWORD PTR [rbp+0x10]
0x002b7cb2: movdqa XMMWORD PTR [rbp+0x70],xmm0
0x002b7cb7: add    r15,0x4
0x002b7cbb: jmp    0x1402b7c15
0x002b7cc0: mov    DWORD PTR [rbp-0x70],r9d
0x002b7cc4: movsxd rax,r9d
0x002b7cc7: mov    r9,QWORD PTR [r11+rax*8]
0x002b7ccb: mov    QWORD PTR [rsp+0x30],r9
0x002b7cd0: mov    QWORD PTR [rbp-0x68],r9
0x002b7cd4: mov    DWORD PTR [rbp+0x10],0xffffffff
0x002b7cdb: mov    QWORD PTR [rbp+0x18],r8
0x002b7cdf: movaps xmm0,XMMWORD PTR [rbp-0x70]
0x002b7ce3: movdqa XMMWORD PTR [rbp+0x70],xmm0
0x002b7ce8: test   r9,r9
0x002b7ceb: je     0x1402b7cb7
0x002b7ced: mov    r14,QWORD PTR [r9+0x30]
0x002b7cf1: mov    rsi,QWORD PTR [r9+0x28]
0x002b7cf5: mov    rax,r14
0x002b7cf8: sub    rax,rsi
0x002b7cfb: test   rax,0xfffffffffffffff8
0x002b7d01: je     0x1402b7cb7
0x002b7d03: xorps  xmm0,xmm0
0x002b7d06: movdqu XMMWORD PTR [rsp+0x68],xmm0
0x002b7d0c: mov    r10,r8
0x002b7d0f: mov    QWORD PTR [rsp+0x78],r8
0x002b7d14: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x002b7d19: mov    r11,r8
0x002b7d1c: mov    QWORD PTR [rbp-0x38],r8
0x002b7d20: movdqu XMMWORD PTR [rsp+0x50],xmm0
0x002b7d26: mov    r15,r8
0x002b7d29: mov    QWORD PTR [rsp+0x60],r8
0x002b7d2e: mov    r13,QWORD PTR [rbp-0x40]
0x002b7d32: mov    QWORD PTR [rsp+0x48],r13
0x002b7d37: mov    rdx,QWORD PTR [rsp+0x58]
0x002b7d3c: mov    QWORD PTR [rsp+0x38],rdx
0x002b7d41: mov    r12,QWORD PTR [rsp+0x70]
0x002b7d46: data16 nop WORD PTR [rax+rax*1+0x0]
0x002b7d50: mov    rdi,r9
0x002b7d53: mov    QWORD PTR [rsp+0x48],r9
0x002b7d58: cmp    rsi,r14
0x002b7d5b: jae    0x1402b8392
0x002b7d61: mov    r8,QWORD PTR [rsi]
0x002b7d64: mov    eax,DWORD PTR [r8+0x18]
0x002b7d68: add    eax,0xfffffffb
0x002b7d6b: mov    QWORD PTR [rsp+0x30],r9
0x002b7d70: cmp    eax,0xa
0x002b7d73: ja     0x1402b8100
0x002b7d79: mov    QWORD PTR [rsp+0x30],r9
0x002b7d7e: cdqe
0x002b7d80: lea    rbx,[rip+0xffffffffffd48279]        # 0x140000000
0x002b7d87: mov    ecx,DWORD PTR [rbx+rax*4+0x2b8fa0]
0x002b7d8e: add    rcx,rbx
0x002b7d91: jmp    rcx
0x002b7d93: mov    rbx,QWORD PTR [r8+0x10]
0x002b7d97: lea    r8,[rbx+0x4]
0x002b7d9b: mov    eax,DWORD PTR [r8]
0x002b7d9e: cmp    eax,0xffffffff
0x002b7da1: je     0x1402b7dcd
0x002b7da3: cmp    r12,r10
0x002b7da6: je     0x1402b7db7
0x002b7da8: mov    DWORD PTR [r12],eax
0x002b7dac: add    r12,0x4
0x002b7db0: mov    QWORD PTR [rsp+0x70],r12
0x002b7db5: jmp    0x1402b7dcd
0x002b7db7: mov    rdx,r12
0x002b7dba: lea    rcx,[rsp+0x68]
0x002b7dbf: call   0x140070e20
0x002b7dc4: mov    r12,QWORD PTR [rsp+0x70]
0x002b7dc9: mov    r11,QWORD PTR [rbp-0x38]
0x002b7dcd: lea    r8,[rbx+0x8]
0x002b7dd1: mov    eax,DWORD PTR [r8]
0x002b7dd4: cmp    eax,0xffffffff
0x002b7dd7: je     0x1402b7dfc
0x002b7dd9: cmp    r13,r11
0x002b7ddc: je     0x1402b7dec
0x002b7dde: mov    DWORD PTR [r13+0x0],eax
0x002b7de2: add    r13,0x4
0x002b7de6: mov    QWORD PTR [rbp-0x40],r13
0x002b7dea: jmp    0x1402b7dfc
0x002b7dec: mov    rdx,r13
0x002b7def: lea    rcx,[rbp-0x48]
0x002b7df3: call   0x140070e20
0x002b7df8: mov    r13,QWORD PTR [rbp-0x40]
0x002b7dfc: mov    ecx,DWORD PTR [rbx]
0x002b7dfe: cmp    ecx,0xffffffff
0x002b7e01: je     0x1402b7e59
0x002b7e03: mov    rax,QWORD PTR [rsp+0x38]
0x002b7e08: cmp    rax,r15
0x002b7e0b: je     0x1402b7e3a
0x002b7e0d: mov    DWORD PTR [rax],ecx
0x002b7e0f: add    rax,0x4
0x002b7e13: mov    QWORD PTR [rsp+0x58],rax
0x002b7e18: mov    QWORD PTR [rsp+0x38],rax
0x002b7e1d: mov    r9,rdi
0x002b7e20: mov    QWORD PTR [rsp+0x30],rdi
0x002b7e25: mov    rdx,rax
0x002b7e28: add    rsi,0x8
0x002b7e2c: mov    r10,QWORD PTR [rsp+0x78]
0x002b7e31: mov    r11,QWORD PTR [rbp-0x38]
0x002b7e35: jmp    0x1402b7d50
0x002b7e3a: mov    r8,rbx
0x002b7e3d: mov    rdx,rax
0x002b7e40: lea    rcx,[rsp+0x50]
0x002b7e45: call   0x140070e20
0x002b7e4a: mov    rax,QWORD PTR [rsp+0x58]
0x002b7e4f: mov    r15,QWORD PTR [rsp+0x60]
0x002b7e54: mov    QWORD PTR [rsp+0x38],rax
0x002b7e59: mov    r9,rdi
0x002b7e5c: mov    QWORD PTR [rsp+0x30],rdi
0x002b7e61: mov    rdx,QWORD PTR [rsp+0x38]
0x002b7e66: add    rsi,0x8
0x002b7e6a: mov    r10,QWORD PTR [rsp+0x78]
0x002b7e6f: mov    r11,QWORD PTR [rbp-0x38]
0x002b7e73: jmp    0x1402b7d50
0x002b7e78: mov    rbx,QWORD PTR [r8+0x10]
0x002b7e7c: lea    r8,[rbx+0x4]
0x002b7e80: mov    eax,DWORD PTR [r8]
0x002b7e83: cmp    eax,0xffffffff
0x002b7e86: je     0x1402b7eb3
0x002b7e88: cmp    r12,r10
0x002b7e8b: je     0x1402b7e9c
0x002b7e8d: mov    DWORD PTR [r12],eax
0x002b7e91: add    r12,0x4
0x002b7e95: mov    QWORD PTR [rsp+0x70],r12
0x002b7e9a: jmp    0x1402b7eb3
0x002b7e9c: mov    rdx,r12
0x002b7e9f: lea    rcx,[rsp+0x68]
0x002b7ea4: call   0x140070e20
0x002b7ea9: mov    rdx,QWORD PTR [rsp+0x38]
0x002b7eae: mov    r12,QWORD PTR [rsp+0x70]
0x002b7eb3: mov    eax,DWORD PTR [rbx]
0x002b7eb5: cmp    eax,0xffffffff
0x002b7eb8: je     0x1402b7f05
0x002b7eba: cmp    rdx,r15
0x002b7ebd: je     0x1402b7ee9
0x002b7ebf: mov    DWORD PTR [rdx],eax
0x002b7ec1: add    rdx,0x4
0x002b7ec5: mov    QWORD PTR [rsp+0x58],rdx
0x002b7eca: mov    QWORD PTR [rsp+0x38],rdx
0x002b7ecf: mov    r9,rdi
0x002b7ed2: mov    QWORD PTR [rsp+0x30],rdi
0x002b7ed7: add    rsi,0x8
0x002b7edb: mov    r10,QWORD PTR [rsp+0x78]
0x002b7ee0: mov    r11,QWORD PTR [rbp-0x38]
0x002b7ee4: jmp    0x1402b7d50
0x002b7ee9: mov    r8,rbx
0x002b7eec: lea    rcx,[rsp+0x50]
0x002b7ef1: call   0x140070e20
0x002b7ef6: mov    rdx,QWORD PTR [rsp+0x58]
0x002b7efb: mov    r15,QWORD PTR [rsp+0x60]
0x002b7f00: mov    QWORD PTR [rsp+0x38],rdx
0x002b7f05: mov    r9,rdi
0x002b7f08: mov    QWORD PTR [rsp+0x30],rdi
0x002b7f0d: add    rsi,0x8
0x002b7f11: mov    r10,QWORD PTR [rsp+0x78]
0x002b7f16: mov    r11,QWORD PTR [rbp-0x38]
0x002b7f1a: jmp    0x1402b7d50
0x002b7f1f: mov    rbx,QWORD PTR [r8+0x10]
0x002b7f23: lea    r8,[rbx+0x8]
0x002b7f27: mov    eax,DWORD PTR [r8]
0x002b7f2a: cmp    eax,0xffffffff
0x002b7f2d: je     0x1402b7f59
0x002b7f2f: cmp    r12,r10
0x002b7f32: je     0x1402b7f43
0x002b7f34: mov    DWORD PTR [r12],eax
0x002b7f38: add    r12,0x4
0x002b7f3c: mov    QWORD PTR [rsp+0x70],r12
0x002b7f41: jmp    0x1402b7f59
0x002b7f43: mov    rdx,r12
0x002b7f46: lea    rcx,[rsp+0x68]
0x002b7f4b: call   0x140070e20
0x002b7f50: mov    r12,QWORD PTR [rsp+0x70]
0x002b7f55: mov    r11,QWORD PTR [rbp-0x38]
0x002b7f59: lea    r8,[rbx+0xc]
0x002b7f5d: mov    eax,DWORD PTR [r8]
0x002b7f60: cmp    eax,0xffffffff
0x002b7f63: je     0x1402b7f88
0x002b7f65: cmp    r13,r11
0x002b7f68: je     0x1402b7f78
0x002b7f6a: mov    DWORD PTR [r13+0x0],eax
0x002b7f6e: add    r13,0x4
0x002b7f72: mov    QWORD PTR [rbp-0x40],r13
0x002b7f76: jmp    0x1402b7f88
0x002b7f78: mov    rdx,r13
0x002b7f7b: lea    rcx,[rbp-0x48]
0x002b7f7f: call   0x140070e20
0x002b7f84: mov    r13,QWORD PTR [rbp-0x40]
0x002b7f88: lea    r8,[rbx+0x4]
0x002b7f8c: mov    ecx,DWORD PTR [r8]
0x002b7f8f: cmp    ecx,0xffffffff
0x002b7f92: je     0x1402b7e59
0x002b7f98: mov    rax,QWORD PTR [rsp+0x38]
0x002b7f9d: cmp    rax,r15
0x002b7fa0: je     0x1402b7e3d
0x002b7fa6: mov    DWORD PTR [rax],ecx
0x002b7fa8: add    rax,0x4
0x002b7fac: mov    QWORD PTR [rsp+0x58],rax
0x002b7fb1: jmp    0x1402b7e54
0x002b7fb6: mov    rcx,QWORD PTR [r8+0x10]
0x002b7fba: mov    QWORD PTR [rbp-0x30],rcx
0x002b7fbe: lea    r8,[rcx+0xc]
0x002b7fc2: mov    eax,DWORD PTR [r8]
0x002b7fc5: cmp    eax,0xffffffff
0x002b7fc8: je     0x1402b7ff8
0x002b7fca: cmp    r12,r10
0x002b7fcd: je     0x1402b7fde
0x002b7fcf: mov    DWORD PTR [r12],eax
0x002b7fd3: add    r12,0x4
0x002b7fd7: mov    QWORD PTR [rsp+0x70],r12
0x002b7fdc: jmp    0x1402b7ff8
0x002b7fde: mov    rdx,r12
0x002b7fe1: lea    rcx,[rsp+0x68]
0x002b7fe6: call   0x140070e20
0x002b7feb: mov    r12,QWORD PTR [rsp+0x70]
0x002b7ff0: mov    rcx,QWORD PTR [rbp-0x30]
0x002b7ff4: mov    r11,QWORD PTR [rbp-0x38]
0x002b7ff8: mov    rbx,QWORD PTR [rcx+0x10]
0x002b7ffc: mov    rdi,QWORD PTR [rcx+0x18]
0x002b8000: mov    rax,QWORD PTR [rsp+0x48]
0x002b8005: mov    QWORD PTR [rsp+0x30],rax
0x002b800a: mov    QWORD PTR [rsp+0x48],rax
0x002b800f: cmp    rbx,rdi
0x002b8012: je     0x1402b805b
0x002b8014: mov    QWORD PTR [rsp+0x30],rax
0x002b8019: jae    0x1402b805b
0x002b801b: cmp    r13,r11
0x002b801e: je     0x1402b8039
0x002b8020: mov    eax,DWORD PTR [rbx]
0x002b8022: mov    DWORD PTR [r13+0x0],eax
0x002b8026: add    r13,0x4
0x002b802a: mov    QWORD PTR [rbp-0x40],r13
0x002b802e: add    rbx,0x4
0x002b8032: mov    rax,QWORD PTR [rsp+0x48]
0x002b8037: jmp    0x1402b8005
0x002b8039: mov    r8,rbx
0x002b803c: mov    rdx,r13
0x002b803f: lea    rcx,[rbp-0x48]
0x002b8043: call   0x140070e20
0x002b8048: mov    r13,QWORD PTR [rbp-0x40]
0x002b804c: mov    r11,QWORD PTR [rbp-0x38]
0x002b8050: add    rbx,0x4
0x002b8054: mov    rax,QWORD PTR [rsp+0x48]
0x002b8059: jmp    0x1402b8005
0x002b805b: mov    QWORD PTR [rsp+0x48],r13
0x002b8060: mov    rcx,QWORD PTR [rbp-0x30]
0x002b8064: lea    r8,[rcx+0x8]
0x002b8068: mov    eax,DWORD PTR [r8]
0x002b806b: mov    rdx,QWORD PTR [rsp+0x38]
0x002b8070: cmp    eax,0xffffffff
0x002b8073: je     0x1402b80a4
0x002b8075: cmp    rdx,r15
0x002b8078: je     0x1402b8087
0x002b807a: mov    DWORD PTR [rdx],eax
0x002b807c: add    rdx,0x4
0x002b8080: mov    QWORD PTR [rsp+0x58],rdx
0x002b8085: jmp    0x1402b809f
0x002b8087: lea    rcx,[rsp+0x50]
0x002b808c: call   0x140070e20
0x002b8091: mov    rdx,QWORD PTR [rsp+0x58]
0x002b8096: mov    rcx,QWORD PTR [rbp-0x30]
0x002b809a: mov    r15,QWORD PTR [rsp+0x60]
0x002b809f: mov    QWORD PTR [rsp+0x38],rdx
0x002b80a4: lea    r8,[rcx+0x4]
0x002b80a8: mov    eax,DWORD PTR [r8]
0x002b80ab: cmp    eax,0xffffffff
0x002b80ae: je     0x1402b80df
0x002b80b0: cmp    rdx,r15
0x002b80b3: je     0x1402b80c2
0x002b80b5: mov    DWORD PTR [rdx],eax
0x002b80b7: add    rdx,0x4
0x002b80bb: mov    QWORD PTR [rsp+0x58],rdx
0x002b80c0: jmp    0x1402b80da
0x002b80c2: lea    rcx,[rsp+0x50]
0x002b80c7: call   0x140070e20
0x002b80cc: mov    rdx,QWORD PTR [rsp+0x58]
0x002b80d1: mov    rcx,QWORD PTR [rbp-0x30]
0x002b80d5: mov    r15,QWORD PTR [rsp+0x60]
0x002b80da: mov    QWORD PTR [rsp+0x38],rdx
0x002b80df: mov    eax,DWORD PTR [rcx]
0x002b80e1: cmp    eax,0xffffffff
0x002b80e4: je     0x1402b80fb
0x002b80e6: cmp    rdx,r15
0x002b80e9: je     0x1402b8112
0x002b80eb: mov    DWORD PTR [rdx],eax
0x002b80ed: add    rdx,0x4
0x002b80f1: mov    QWORD PTR [rsp+0x38],rdx
0x002b80f6: mov    QWORD PTR [rsp+0x58],rdx
0x002b80fb: mov    r9,QWORD PTR [rsp+0x30]
0x002b8100: add    rsi,0x8
0x002b8104: mov    r10,QWORD PTR [rsp+0x78]
0x002b8109: mov    r11,QWORD PTR [rbp-0x38]
0x002b810d: jmp    0x1402b7d50
0x002b8112: mov    r8,rcx
0x002b8115: lea    rcx,[rsp+0x50]
0x002b811a: call   0x140070e20
0x002b811f: mov    rdx,QWORD PTR [rsp+0x58]
0x002b8124: mov    QWORD PTR [rsp+0x38],rdx
0x002b8129: mov    r15,QWORD PTR [rsp+0x60]
0x002b812e: jmp    0x1402b80fb
0x002b8130: mov    rbx,QWORD PTR [r8+0x10]
0x002b8134: lea    r8,[rbx+0x4]
0x002b8138: mov    eax,DWORD PTR [r8]
0x002b813b: cmp    eax,0xffffffff
0x002b813e: je     0x1402b816a
0x002b8140: cmp    r12,r10
0x002b8143: je     0x1402b8154
0x002b8145: mov    DWORD PTR [r12],eax
0x002b8149: add    r12,0x4
0x002b814d: mov    QWORD PTR [rsp+0x70],r12
0x002b8152: jmp    0x1402b816a
0x002b8154: mov    rdx,r12
0x002b8157: lea    rcx,[rsp+0x68]
0x002b815c: call   0x140070e20
0x002b8161: mov    r12,QWORD PTR [rsp+0x70]
0x002b8166: mov    r11,QWORD PTR [rbp-0x38]
0x002b816a: lea    r8,[rbx+0x8]
0x002b816e: mov    eax,DWORD PTR [r8]
0x002b8171: cmp    eax,0xffffffff
0x002b8174: je     0x1402b8199
0x002b8176: cmp    r13,r11
0x002b8179: je     0x1402b8189
0x002b817b: mov    DWORD PTR [r13+0x0],eax
0x002b817f: add    r13,0x4
0x002b8183: mov    QWORD PTR [rbp-0x40],r13
0x002b8187: jmp    0x1402b8199
0x002b8189: mov    rdx,r13
0x002b818c: lea    rcx,[rbp-0x48]
0x002b8190: call   0x140070e20
0x002b8195: mov    r13,QWORD PTR [rbp-0x40]
0x002b8199: mov    eax,DWORD PTR [rbx]
0x002b819b: mov    rdx,QWORD PTR [rsp+0x38]
0x002b81a0: cmp    eax,0xffffffff
0x002b81a3: je     0x1402b7f05
0x002b81a9: cmp    rdx,r15
0x002b81ac: je     0x1402b7ee9
0x002b81b2: mov    DWORD PTR [rdx],eax
0x002b81b4: add    rdx,0x4
0x002b81b8: mov    QWORD PTR [rsp+0x58],rdx
0x002b81bd: jmp    0x1402b7f00
0x002b81c2: mov    rdi,QWORD PTR [r8+0x10]
0x002b81c6: mov    rbx,QWORD PTR [rdi]
0x002b81c9: mov    rdi,QWORD PTR [rdi+0x8]
0x002b81cd: mov    QWORD PTR [rsp+0x30],r9
0x002b81d2: mov    rax,r9
0x002b81d5: mov    QWORD PTR [rsp+0x48],rax
0x002b81da: cmp    rbx,rdi
0x002b81dd: je     0x1402b8100
0x002b81e3: mov    QWORD PTR [rsp+0x30],rax
0x002b81e8: jae    0x1402b8100
0x002b81ee: cmp    rdx,r15
0x002b81f1: je     0x1402b820b
0x002b81f3: mov    eax,DWORD PTR [rbx]
0x002b81f5: mov    DWORD PTR [rdx],eax
0x002b81f7: add    rdx,0x4
0x002b81fb: mov    QWORD PTR [rsp+0x58],rdx
0x002b8200: mov    QWORD PTR [rsp+0x38],rdx
0x002b8205: add    rbx,0x4
0x002b8209: jmp    0x1402b81cd
0x002b820b: mov    r8,rbx
0x002b820e: lea    rcx,[rsp+0x50]
0x002b8213: call   0x140070e20
0x002b8218: mov    rdx,QWORD PTR [rsp+0x58]
0x002b821d: mov    r15,QWORD PTR [rsp+0x60]
0x002b8222: mov    QWORD PTR [rsp+0x38],rdx
0x002b8227: add    rbx,0x4
0x002b822b: mov    r9,QWORD PTR [rsp+0x48]
0x002b8230: jmp    0x1402b81cd
0x002b8232: mov    rdi,QWORD PTR [r8+0x10]
0x002b8236: mov    eax,DWORD PTR [rdi+0x4]
0x002b8239: cmp    eax,0xffffffff
0x002b823c: je     0x1402b826d
0x002b823e: cmp    r12,r10
0x002b8241: je     0x1402b8252
0x002b8243: mov    DWORD PTR [r12],eax
0x002b8247: add    r12,0x4
0x002b824b: mov    QWORD PTR [rsp+0x70],r12
0x002b8250: jmp    0x1402b826d
0x002b8252: lea    r8,[rdi+0x4]
0x002b8256: mov    rdx,r12
0x002b8259: lea    rcx,[rsp+0x68]
0x002b825e: call   0x140070e20
0x002b8263: mov    rdx,QWORD PTR [rsp+0x38]
0x002b8268: mov    r12,QWORD PTR [rsp+0x70]
0x002b826d: mov    eax,DWORD PTR [rdi]
0x002b826f: cmp    eax,0xffffffff
0x002b8272: je     0x1402b82c6
0x002b8274: cmp    eax,DWORD PTR [rdi+0x4]
0x002b8277: je     0x1402b82c6
0x002b8279: cmp    rdx,r15
0x002b827c: je     0x1402b82aa
0x002b827e: mov    DWORD PTR [rdx],eax
0x002b8280: add    rdx,0x4
0x002b8284: mov    QWORD PTR [rsp+0x58],rdx
0x002b8289: mov    QWORD PTR [rsp+0x38],rdx
0x002b828e: mov    r9,QWORD PTR [rsp+0x48]
0x002b8293: mov    QWORD PTR [rsp+0x30],r9
0x002b8298: add    rsi,0x8
0x002b829c: mov    r10,QWORD PTR [rsp+0x78]
0x002b82a1: mov    r11,QWORD PTR [rbp-0x38]
0x002b82a5: jmp    0x1402b7d50
0x002b82aa: mov    r8,rdi
0x002b82ad: lea    rcx,[rsp+0x50]
0x002b82b2: call   0x140070e20
0x002b82b7: mov    rdx,QWORD PTR [rsp+0x58]
0x002b82bc: mov    r15,QWORD PTR [rsp+0x60]
0x002b82c1: mov    QWORD PTR [rsp+0x38],rdx
0x002b82c6: mov    r9,QWORD PTR [rsp+0x48]
0x002b82cb: mov    QWORD PTR [rsp+0x30],r9
0x002b82d0: add    rsi,0x8
0x002b82d4: mov    r10,QWORD PTR [rsp+0x78]
0x002b82d9: mov    r11,QWORD PTR [rbp-0x38]
0x002b82dd: jmp    0x1402b7d50
0x002b82e2: mov    rbx,QWORD PTR [r8+0x10]
0x002b82e6: lea    r8,[rbx+0x4]
0x002b82ea: mov    eax,DWORD PTR [r8]
0x002b82ed: cmp    eax,0xffffffff
0x002b82f0: je     0x1402b831d
0x002b82f2: cmp    r12,r10
0x002b82f5: je     0x1402b8306
0x002b82f7: mov    DWORD PTR [r12],eax
0x002b82fb: add    r12,0x4
0x002b82ff: mov    QWORD PTR [rsp+0x70],r12
0x002b8304: jmp    0x1402b831d
0x002b8306: mov    rdx,r12
0x002b8309: lea    rcx,[rsp+0x68]
0x002b830e: call   0x140070e20
0x002b8313: mov    rdx,QWORD PTR [rsp+0x38]
0x002b8318: mov    r12,QWORD PTR [rsp+0x70]
0x002b831d: mov    eax,DWORD PTR [rbx]
0x002b831f: mov    r9,rdi
0x002b8322: mov    QWORD PTR [rsp+0x30],rdi
0x002b8327: cmp    eax,0xffffffff
0x002b832a: je     0x1402b8100
0x002b8330: cmp    rdx,r15
0x002b8333: je     0x1402b835c
0x002b8335: mov    DWORD PTR [rdx],eax
0x002b8337: add    rdx,0x4
0x002b833b: mov    QWORD PTR [rsp+0x38],rdx
0x002b8340: mov    QWORD PTR [rsp+0x58],rdx
0x002b8345: mov    QWORD PTR [rsp+0x30],rdi
0x002b834a: add    rsi,0x8
0x002b834e: mov    r10,QWORD PTR [rsp+0x78]
0x002b8353: mov    r11,QWORD PTR [rbp-0x38]
0x002b8357: jmp    0x1402b7d50
0x002b835c: mov    r8,rbx
0x002b835f: lea    rcx,[rsp+0x50]
0x002b8364: call   0x140070e20
0x002b8369: mov    r9,rdi
0x002b836c: mov    QWORD PTR [rsp+0x30],rdi
0x002b8371: mov    rdx,QWORD PTR [rsp+0x58]
0x002b8376: mov    QWORD PTR [rsp+0x38],rdx
0x002b837b: mov    r15,QWORD PTR [rsp+0x60]
0x002b8380: add    rsi,0x8
0x002b8384: mov    r10,QWORD PTR [rsp+0x78]
0x002b8389: mov    r11,QWORD PTR [rbp-0x38]
0x002b838d: jmp    0x1402b7d50
0x002b8392: mov    QWORD PTR [rsp+0x48],r13
0x002b8397: xor    sil,sil
0x002b839a: mov    DWORD PTR [rbp-0x50],esi
0x002b839d: xor    r14b,r14b
0x002b83a0: mov    DWORD PTR [rbp-0x30],r14d
0x002b83a4: mov    rbx,QWORD PTR [rsp+0x68]
0x002b83a9: mov    rdi,QWORD PTR [rsp+0x70]
0x002b83ae: mov    r12,QWORD PTR [rbp+0x78]
0x002b83b2: mov    r14,QWORD PTR [rbp+0x60]
0x002b83b6: cmp    rbx,rdi
0x002b83b9: jae    0x1402b8446
0x002b83bf: lea    rdx,[r12+0x8]
0x002b83c4: mov    ecx,DWORD PTR [rbx]
0x002b83c6: call   0x1400b9dc0
0x002b83cb: test   rax,rax
0x002b83ce: je     0x1402b8433
0x002b83d0: lea    rdx,[rax+0x8]
0x002b83d4: mov    rax,QWORD PTR [rdx+0x8]
0x002b83d8: sub    rax,QWORD PTR [rdx]
0x002b83db: test   rax,0xfffffffffffffffc
0x002b83e1: je     0x1402b8433
0x002b83e3: mov    rax,QWORD PTR [r14]
0x002b83e6: mov    r8,QWORD PTR [rax]
0x002b83e9: mov    r8d,DWORD PTR [r8+0xe0]
0x002b83f0: lea    rcx,[rbp+0xd8]
0x002b83f7: call   0x1400babe0
0x002b83fc: mov    DWORD PTR [rbp+0xa0],0xffffffff
0x002b8406: xor    eax,eax
0x002b8408: mov    DWORD PTR [rbp+0xa4],eax
0x002b840e: mov    rax,QWORD PTR [rbp+0xa0]
0x002b8415: cmp    BYTE PTR [rbp+0xe0],0x0
0x002b841c: cmovne rax,QWORD PTR [rbp+0xd8]
0x002b8424: movzx  esi,sil
0x002b8428: cmp    eax,0xffffffff
0x002b842b: mov    eax,0x1
0x002b8430: cmovne esi,eax
0x002b8433: add    rbx,0x4
0x002b8437: mov    r9,QWORD PTR [rsp+0x30]
0x002b843c: mov    QWORD PTR [rsp+0x30],r9
0x002b8441: jmp    0x1402b83b6
0x002b8446: mov    DWORD PTR [rbp-0x50],esi
0x002b8449: mov    rbx,QWORD PTR [rbp-0x48]
0x002b844d: mov    r14d,DWORD PTR [rbp-0x30]
0x002b8451: mov    rdi,QWORD PTR [rsp+0x48]
0x002b8456: mov    r13,QWORD PTR [rbp+0x78]
0x002b845a: mov    r15,QWORD PTR [rbp+0x60]
0x002b845e: xor    r12d,r12d
0x002b8461: mov    esi,0x1
0x002b8466: cmp    rbx,rdi
0x002b8469: jae    0x1402b84f0
0x002b846f: lea    rdx,[r13+0x8]
0x002b8473: mov    ecx,DWORD PTR [rbx]
0x002b8475: call   0x1400b9dc0
0x002b847a: test   rax,rax
0x002b847d: je     0x1402b84dd
0x002b847f: lea    rdx,[rax+0x8]
0x002b8483: mov    rax,QWORD PTR [rdx+0x8]
0x002b8487: sub    rax,QWORD PTR [rdx]
0x002b848a: test   rax,0xfffffffffffffffc
0x002b8490: je     0x1402b84dd
0x002b8492: mov    rax,QWORD PTR [r15]
0x002b8495: mov    r8,QWORD PTR [rax]
0x002b8498: mov    r8d,DWORD PTR [r8+0xe0]
0x002b849f: lea    rcx,[rbp+0xc0]
0x002b84a6: call   0x1400babe0
0x002b84ab: mov    DWORD PTR [rbp+0x80],0xffffffff
0x002b84b5: mov    DWORD PTR [rbp+0x84],r12d
0x002b84bc: mov    rax,QWORD PTR [rbp+0x80]
0x002b84c3: cmp    BYTE PTR [rbp+0xc8],r12b
0x002b84ca: cmovne rax,QWORD PTR [rbp+0xc0]
0x002b84d2: movzx  r14d,r14b
0x002b84d6: cmp    eax,0xffffffff
0x002b84d9: cmovne r14d,esi
0x002b84dd: add    rbx,0x4
0x002b84e1: mov    r9,QWORD PTR [rsp+0x30]
0x002b84e6: mov    QWORD PTR [rsp+0x30],r9
0x002b84eb: jmp    0x1402b8466
0x002b84f0: cmp    BYTE PTR [rbp-0x50],r12b
0x002b84f4: mov    r15,QWORD PTR [rbp-0x10]
0x002b84f8: mov    r12,QWORD PTR [rbp+0x88]
0x002b84ff: mov    r13,QWORD PTR [rbp+0x38]
0x002b8503: je     0x1402b8518
0x002b8505: sub    rdi,QWORD PTR [rbp-0x48]
0x002b8509: sar    rdi,0x2
0x002b850d: test   rdi,rdi
0x002b8510: je     0x1402b8521
0x002b8512: lea    rdx,[rbp-0x48]
0x002b8516: jmp    0x1402b853d
0x002b8518: test   r14b,r14b
0x002b851b: je     0x1402b8cbf
0x002b8521: mov    rax,QWORD PTR [rsp+0x38]
0x002b8526: sub    rax,QWORD PTR [rsp+0x50]
0x002b852b: sar    rax,0x2
0x002b852f: test   rax,rax
0x002b8532: je     0x1402b8cbf
0x002b8538: lea    rdx,[rsp+0x50]
0x002b853d: mov    QWORD PTR [rsp+0x48],rdx
0x002b8542: mov    r8,QWORD PTR [rbp+0x0]
0x002b8546: mov    rsi,QWORD PTR [r8]
0x002b8549: mov    r14,QWORD PTR [r8+0x8]
0x002b854d: nop    DWORD PTR [rax]
0x002b8550: cmp    rsi,r14
0x002b8553: jae    0x1402b8cbf
0x002b8559: mov    rcx,QWORD PTR [rsi]
0x002b855c: test   BYTE PTR [rcx+0xf0],0x1
0x002b8563: jne    0x1402b8cb1
0x002b8569: xor    cl,cl
0x002b856b: mov    DWORD PTR [rbp-0x50],ecx
0x002b856e: mov    rbx,QWORD PTR [rdx]
0x002b8571: mov    rdi,QWORD PTR [rdx+0x8]
0x002b8575: mov    QWORD PTR [rsp+0x30],r9
0x002b857a: cmp    rbx,rdi
0x002b857d: jae    0x1402b8615
0x002b8583: mov    rdx,QWORD PTR [rbp+0x78]
0x002b8587: add    rdx,0x8
0x002b858b: mov    ecx,DWORD PTR [rbx]
0x002b858d: call   0x1400b9dc0
0x002b8592: test   rax,rax
0x002b8595: je     0x1402b8604
0x002b8597: lea    rdx,[rax+0x8]
0x002b859b: mov    rax,QWORD PTR [rdx+0x8]
0x002b859f: sub    rax,QWORD PTR [rdx]
0x002b85a2: test   rax,0xfffffffffffffffc
0x002b85a8: je     0x1402b8604
0x002b85aa: mov    rax,QWORD PTR [rsi]
0x002b85ad: mov    r8,QWORD PTR [rax]
0x002b85b0: mov    r8d,DWORD PTR [r8+0xe0]
0x002b85b7: lea    rcx,[rbp+0x50]
0x002b85bb: call   0x1400babe0
0x002b85c0: mov    DWORD PTR [rbp+0x98],0xffffffff
0x002b85ca: xor    eax,eax
0x002b85cc: mov    DWORD PTR [rbp+0x9c],eax
0x002b85d2: mov    rax,QWORD PTR [rbp+0x98]
0x002b85d9: cmp    BYTE PTR [rbp+0x58],0x0
0x002b85dd: cmovne rax,QWORD PTR [rbp+0x50]
0x002b85e2: mov    ecx,DWORD PTR [rbp-0x50]
0x002b85e5: movzx  ecx,cl
0x002b85e8: cmp    eax,0xffffffff
0x002b85eb: mov    eax,0x1
0x002b85f0: cmovne ecx,eax
0x002b85f3: mov    DWORD PTR [rbp-0x50],ecx
0x002b85f6: add    rbx,0x4
0x002b85fa: mov    r9,QWORD PTR [rsp+0x30]
0x002b85ff: jmp    0x1402b8575
0x002b8604: mov    ecx,DWORD PTR [rbp-0x50]
0x002b8607: add    rbx,0x4
0x002b860b: mov    r9,QWORD PTR [rsp+0x30]
0x002b8610: jmp    0x1402b8575
0x002b8615: test   cl,cl
0x002b8617: je     0x1402b8cb1
0x002b861d: mov    rax,QWORD PTR [rsi]
0x002b8620: mov    QWORD PTR [rsp+0x38],rax
0x002b8625: mov    ecx,0x88
0x002b862a: call   0x141539690
0x002b862f: mov    rbx,rax
0x002b8632: mov    QWORD PTR [rbp-0x10],rax
0x002b8636: xorps  xmm0,xmm0
0x002b8639: movups XMMWORD PTR [rax+0x20],xmm0
0x002b863d: xor    ecx,ecx
0x002b863f: mov    QWORD PTR [rax+0x30],rcx
0x002b8643: mov    QWORD PTR [rax+0x38],0xf
0x002b864b: mov    BYTE PTR [rax+0x20],cl
0x002b864e: movups XMMWORD PTR [rax+0x48],xmm0
0x002b8652: mov    QWORD PTR [rax+0x58],rcx
0x002b8656: mov    QWORD PTR [rax+0x60],0xf
0x002b865e: mov    BYTE PTR [rax+0x48],cl
0x002b8661: movups XMMWORD PTR [rax+0x68],xmm0
0x002b8665: mov    QWORD PTR [rax+0x78],rcx
0x002b8669: mov    QWORD PTR [rax+0x80],0xf
0x002b8674: mov    BYTE PTR [rax+0x68],cl
0x002b8677: mov    QWORD PTR [rax+0x8],rcx
0x002b867b: mov    DWORD PTR [rax+0x10],ecx
0x002b867e: mov    QWORD PTR [rax+0x14],0x1
0x002b8686: mov    DWORD PTR [rax+0x1c],ecx
0x002b8689: mov    QWORD PTR [rbp-0x10],rax
0x002b868d: mov    rax,QWORD PTR [rsp+0x38]
0x002b8692: mov    QWORD PTR [rbx],rax
0x002b8695: mov    rax,QWORD PTR [rbp+0x60]
0x002b8699: mov    QWORD PTR [rbx+0x8],rax
0x002b869d: mov    eax,DWORD PTR [rbp-0x80]
0x002b86a0: inc    eax
0x002b86a2: mov    DWORD PTR [rbx+0x14],eax
0x002b86a5: mov    eax,DWORD PTR [rbp+0x30]
0x002b86a8: mov    DWORD PTR [rbx+0x10],eax
0x002b86ab: inc    eax
0x002b86ad: mov    DWORD PTR [rbp+0x30],eax
0x002b86b0: mov    r8d,0x5
0x002b86b6: lea    rdx,[rip+0x1370947]        # 0x141629004 ; literal="Membr"
0x002b86bd: lea    rcx,[rbx+0x20]
0x002b86c1: call   0x14006f8d0
0x002b86c6: mov    DWORD PTR [rbx+0x40],0x6
0x002b86cd: mov    BYTE PTR [rbx+0x44],0x1
0x002b86d1: mov    rax,QWORD PTR [rsp+0x30]
0x002b86d6: mov    rax,QWORD PTR [rax+0x28]
0x002b86da: mov    rcx,QWORD PTR [rax]
0x002b86dd: mov    eax,DWORD PTR [rcx+0x18]
0x002b86e0: add    eax,0xfffffffb
0x002b86e3: cmp    eax,0xa
0x002b86e6: ja     0x1402b8827
0x002b86ec: cdqe
0x002b86ee: lea    rdx,[rip+0xffffffffffd4790b]        # 0x140000000
0x002b86f5: mov    ecx,DWORD PTR [rdx+rax*4+0x2b8fcc]
0x002b86fc: add    rcx,rdx
0x002b86ff: jmp    rcx
0x002b8701: lea    rax,[rsp+0x50]
0x002b8706: cmp    QWORD PTR [rsp+0x48],rax
0x002b870b: jne    0x1402b8827
0x002b8711: lea    rdx,[rip+0x1347c14]        # 0x14160032c ; literal="Thief"
0x002b8718: mov    r8d,0x5
0x002b871e: lea    rcx,[rbx+0x20]
0x002b8722: call   0x14006f8d0
0x002b8727: mov    DWORD PTR [rbx+0x40],0x7
0x002b872e: jmp    0x1402b8823
0x002b8733: lea    rax,[rsp+0x50]
0x002b8738: cmp    QWORD PTR [rsp+0x48],rax
0x002b873d: jne    0x1402b8827
0x002b8743: mov    r8d,0x5
0x002b8749: lea    rdx,[rip+0x1370968]        # 0x1416290b8 ; literal="Crrpt"
0x002b8750: lea    rcx,[rbx+0x20]
0x002b8754: call   0x14006f8d0
0x002b8759: mov    DWORD PTR [rbx+0x40],0x3
0x002b8760: mov    BYTE PTR [rbx+0x44],0x0
0x002b8764: jmp    0x1402b8827
0x002b8769: lea    rax,[rsp+0x50]
0x002b876e: cmp    QWORD PTR [rsp+0x48],rax
0x002b8773: jne    0x1402b8827
0x002b8779: mov    r8d,0x5
0x002b877f: lea    rdx,[rip+0x137092a]        # 0x1416290b0 ; literal="Assas"
0x002b8786: lea    rcx,[rbx+0x20]
0x002b878a: call   0x14006f8d0
0x002b878f: mov    DWORD PTR [rbx+0x40],0x5
0x002b8796: mov    BYTE PTR [rbx+0x44],0x0
0x002b879a: jmp    0x1402b8827
0x002b879f: lea    rax,[rsp+0x50]
0x002b87a4: cmp    QWORD PTR [rsp+0x48],rax
0x002b87a9: jne    0x1402b8827
0x002b87ab: mov    r8d,0x5
0x002b87b1: lea    rdx,[rip+0x13708f0]        # 0x1416290a8 ; literal="Snatc"
0x002b87b8: lea    rcx,[rbx+0x20]
0x002b87bc: call   0x14006f8d0
0x002b87c1: mov    DWORD PTR [rbx+0x40],0x1
0x002b87c8: jmp    0x1402b8823
0x002b87ca: lea    rax,[rsp+0x50]
0x002b87cf: cmp    QWORD PTR [rsp+0x48],rax
0x002b87d4: jne    0x1402b8827
0x002b87d6: lea    rdx,[rip+0x13708c3]        # 0x1416290a0 ; literal="Sabtr"
0x002b87dd: jmp    0x1402b8718
0x002b87e2: lea    rax,[rsp+0x50]
0x002b87e7: cmp    QWORD PTR [rsp+0x48],rax
0x002b87ec: jne    0x1402b8827
0x002b87ee: lea    rdx,[rip+0x13708a3]        # 0x141629098 ; literal="Framr"
0x002b87f5: jmp    0x1402b8718
0x002b87fa: lea    rax,[rsp+0x50]
0x002b87ff: cmp    QWORD PTR [rsp+0x48],rax
0x002b8804: jne    0x1402b8827
0x002b8806: mov    r8d,0x5
0x002b880c: lea    rdx,[rip+0x13708ad]        # 0x1416290c0 ; literal="Asset"
0x002b8813: lea    rcx,[rbx+0x20]
0x002b8817: call   0x14006f8d0
0x002b881c: mov    DWORD PTR [rbx+0x40],0x3
0x002b8823: mov    BYTE PTR [rbx+0x44],0x1
0x002b8827: mov    rdi,QWORD PTR [rsp+0x38]
0x002b882c: mov    rdx,QWORD PTR [rdi+0x10]
0x002b8830: test   rdx,rdx
0x002b8833: je     0x1402b8ac7
0x002b8839: cmp    QWORD PTR [rdx+0x10],0x0
0x002b883e: je     0x1402b8856
0x002b8840: cmp    QWORD PTR [rdx+0x18],0xf
0x002b8845: jbe    0x1402b884a
0x002b8847: mov    rdx,QWORD PTR [rdx]
0x002b884a: lea    rcx,[rbx+0x48]
0x002b884e: movzx  edx,BYTE PTR [rdx]
0x002b8851: call   0x1400b9b80
0x002b8856: mov    rax,QWORD PTR [rdi+0x10]
0x002b885a: movsxd rcx,DWORD PTR [rax+0x40]
0x002b885e: cmp    ecx,0xffffffff
0x002b8861: jne    0x1402b886c
0x002b8863: cmp    DWORD PTR [rax+0x44],ecx
0x002b8866: je     0x1402b8b25
0x002b886c: xorps  xmm0,xmm0
0x002b886f: movups XMMWORD PTR [rbp+0x1c0],xmm0
0x002b8876: mov    QWORD PTR [rbp+0x1d0],0x0
0x002b8881: mov    QWORD PTR [rbp+0x1d8],0xf
0x002b888c: mov    BYTE PTR [rbp+0x1c0],0x0
0x002b8893: movsx  r9,WORD PTR [rax+0x5c]
0x002b8898: mov    rdx,QWORD PTR [rip+0x2234ed1]        # 0x1424ed770
0x002b889f: lea    r10,[rip+0xffffffffffd4775a]        # 0x140000000
0x002b88a6: test   ecx,ecx
0x002b88a8: js     0x1402b896e
0x002b88ae: mov    r8,rcx
0x002b88b1: mov    rax,QWORD PTR [rip+0x2234ec0]        # 0x1424ed778
0x002b88b8: sub    rax,rdx
0x002b88bb: sar    rax,0x3
0x002b88bf: cmp    rcx,rax
0x002b88c2: jae    0x1402b896e
0x002b88c8: cmp    r9d,0x8
0x002b88cc: ja     0x1402b896e
0x002b88d2: mov    ecx,DWORD PTR [r10+r9*4+0x2b8ff8]
0x002b88da: add    rcx,r10
0x002b88dd: jmp    rcx
0x002b88df: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b88e3: add    rdx,0x20
0x002b88e7: jmp    0x1402b8946
0x002b88e9: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b88ed: add    rdx,0x40
0x002b88f1: jmp    0x1402b8946
0x002b88f3: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b88f7: sub    rdx,0xffffffffffffff80
0x002b88fb: jmp    0x1402b8946
0x002b88fd: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b8901: add    rdx,0x60
0x002b8905: jmp    0x1402b8946
0x002b8907: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b890b: add    rdx,0xa0
0x002b8912: jmp    0x1402b8946
0x002b8914: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b8918: add    rdx,0xc0
0x002b891f: jmp    0x1402b8946
0x002b8921: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b8925: add    rdx,0xe0
0x002b892c: jmp    0x1402b8946
0x002b892e: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b8932: add    rdx,0x100
0x002b8939: jmp    0x1402b8946
0x002b893b: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b893f: add    rdx,0x120
0x002b8946: mov    r8,QWORD PTR [rdx+0x10]
0x002b894a: cmp    QWORD PTR [rdx+0x18],0xf
0x002b894f: jbe    0x1402b8954
0x002b8951: mov    rdx,QWORD PTR [rdx]
0x002b8954: lea    rcx,[rbp+0x1c0]
0x002b895b: call   0x14006fa10
0x002b8960: lea    r10,[rip+0xffffffffffd47699]        # 0x140000000
0x002b8967: mov    rdx,QWORD PTR [rip+0x2234e02]        # 0x1424ed770
0x002b896e: mov    rax,QWORD PTR [rdi+0x10]
0x002b8972: movsx  r9,WORD PTR [rax+0x5e]
0x002b8977: movsxd rcx,DWORD PTR [rax+0x44]
0x002b897b: test   ecx,ecx
0x002b897d: js     0x1402b8a35
0x002b8983: mov    r8,rcx
0x002b8986: mov    rax,QWORD PTR [rip+0x2234deb]        # 0x1424ed778
0x002b898d: sub    rax,rdx
0x002b8990: sar    rax,0x3
0x002b8994: cmp    rcx,rax
0x002b8997: jae    0x1402b8a35
0x002b899d: cmp    r9d,0x8
0x002b89a1: ja     0x1402b8a35
0x002b89a7: mov    ecx,DWORD PTR [r10+r9*4+0x2b901c]
0x002b89af: add    rcx,r10
0x002b89b2: jmp    rcx
0x002b89b4: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b89b8: add    rdx,0x20
0x002b89bc: jmp    0x1402b8a1b
0x002b89be: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b89c2: add    rdx,0x40
0x002b89c6: jmp    0x1402b8a1b
0x002b89c8: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b89cc: sub    rdx,0xffffffffffffff80
0x002b89d0: jmp    0x1402b8a1b
0x002b89d2: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b89d6: add    rdx,0x60
0x002b89da: jmp    0x1402b8a1b
0x002b89dc: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b89e0: add    rdx,0xa0
0x002b89e7: jmp    0x1402b8a1b
0x002b89e9: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b89ed: add    rdx,0xc0
0x002b89f4: jmp    0x1402b8a1b
0x002b89f6: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b89fa: add    rdx,0xe0
0x002b8a01: jmp    0x1402b8a1b
0x002b8a03: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b8a07: add    rdx,0x100
0x002b8a0e: jmp    0x1402b8a1b
0x002b8a10: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b8a14: add    rdx,0x120
0x002b8a1b: mov    r8,QWORD PTR [rdx+0x10]
0x002b8a1f: cmp    QWORD PTR [rdx+0x18],0xf
0x002b8a24: jbe    0x1402b8a29
0x002b8a26: mov    rdx,QWORD PTR [rdx]
0x002b8a29: lea    rcx,[rbp+0x1c0]
0x002b8a30: call   0x14006fa10
0x002b8a35: cmp    QWORD PTR [rbp+0x1d0],0x0
0x002b8a3d: je     0x1402b8a80
0x002b8a3f: cmp    QWORD PTR [rbx+0x58],0x0
0x002b8a44: je     0x1402b8a5c
0x002b8a46: lea    rcx,[rbx+0x48]
0x002b8a4a: mov    r8d,0x1
0x002b8a50: lea    rdx,[rip+0x132fce5]        # 0x1415e873c ; literal=" "
0x002b8a57: call   0x14006fa10
0x002b8a5c: lea    rdx,[rbp+0x1c0]
0x002b8a63: cmp    QWORD PTR [rbp+0x1d8],0xf
0x002b8a6b: cmova  rdx,QWORD PTR [rbp+0x1c0]
0x002b8a73: lea    rcx,[rbx+0x48]
0x002b8a77: movzx  edx,BYTE PTR [rdx]
0x002b8a7a: call   0x1400b9b80
0x002b8a7f: nop
0x002b8a80: mov    rdx,QWORD PTR [rbp+0x1d8]
0x002b8a87: cmp    rdx,0xf
0x002b8a8b: jbe    0x1402b8b25
0x002b8a91: inc    rdx
0x002b8a94: mov    rcx,QWORD PTR [rbp+0x1c0]
0x002b8a9b: mov    rax,rcx
0x002b8a9e: cmp    rdx,0x1000
0x002b8aa5: jb     0x1402b8ac0
0x002b8aa7: add    rdx,0x27
0x002b8aab: mov    rcx,QWORD PTR [rcx-0x8]
0x002b8aaf: sub    rax,rcx
0x002b8ab2: add    rax,0xfffffffffffffff8
0x002b8ab6: cmp    rax,0x1f
0x002b8aba: ja     0x1402b8d86
0x002b8ac0: call   0x141539680
0x002b8ac5: jmp    0x1402b8b25
0x002b8ac7: lea    rdx,[rdi+0x18]
0x002b8acb: lea    rcx,[rbx+0x48]
0x002b8acf: cmp    rcx,rdx
0x002b8ad2: je     0x1402b8ae7
0x002b8ad4: mov    r8,QWORD PTR [rdx+0x10]
0x002b8ad8: cmp    QWORD PTR [rdx+0x18],0xf
0x002b8add: jbe    0x1402b8ae2
0x002b8adf: mov    rdx,QWORD PTR [rdx]
0x002b8ae2: call   0x14006f8d0
0x002b8ae7: cmp    QWORD PTR [rbx+0x58],0x4
0x002b8aec: jb     0x1402b8b25
0x002b8aee: lea    rcx,[rbx+0x48]
0x002b8af2: mov    rax,QWORD PTR [rcx+0x10]
0x002b8af6: cmp    rax,0x3
0x002b8afa: jb     0x1402b8b15
0x002b8afc: mov    eax,0x3
0x002b8b01: mov    QWORD PTR [rcx+0x10],rax
0x002b8b05: cmp    QWORD PTR [rcx+0x18],0xf
0x002b8b0a: jbe    0x1402b8b0f
0x002b8b0c: mov    rcx,QWORD PTR [rcx]
0x002b8b0f: mov    BYTE PTR [rcx+0x3],0x0
0x002b8b13: jmp    0x1402b8b25
0x002b8b15: mov    edx,0x3
0x002b8b1a: sub    rdx,rax
0x002b8b1d: xor    r8d,r8d
0x002b8b20: call   0x1400e12b0
0x002b8b25: lea    rcx,[rbx+0x48]
0x002b8b29: call   0x14052d3c0
0x002b8b2e: mov    rcx,QWORD PTR [rdi]
0x002b8b31: cmp    DWORD PTR [rcx+0x30],0xffffffff
0x002b8b35: je     0x1402b8b4d
0x002b8b37: lea    rcx,[rbx+0x68]
0x002b8b3b: mov    r8d,0x3
0x002b8b41: lea    rdx,[rip+0x13704c4]        # 0x14162900c ; literal="RIP"
0x002b8b48: call   0x14006f8d0
0x002b8b4d: mov    rax,QWORD PTR [rbp+0xb0]
0x002b8b54: cmp    rax,QWORD PTR [rbp+0xb8]
0x002b8b5b: je     0x1402b8b6d
0x002b8b5d: mov    QWORD PTR [rax],rbx
0x002b8b60: add    rax,0x8
0x002b8b64: mov    QWORD PTR [rbp+0xb0],rax
0x002b8b6b: jmp    0x1402b8b80
0x002b8b6d: lea    r8,[rbp-0x10]
0x002b8b71: mov    rdx,rax
0x002b8b74: lea    rcx,[rbp+0xa8]
0x002b8b7b: call   0x140070bd0
0x002b8b80: mov    r8,QWORD PTR [rbp-0x20]
0x002b8b84: cmp    QWORD PTR [rdi+0xb8],0x0
0x002b8b8c: jne    0x1402b8b95
0x002b8b8e: mov    QWORD PTR [rdi+0xb8],r8
0x002b8b95: or     DWORD PTR [rdi+0xf0],0x1
0x002b8b9c: lea    rcx,[rdi+0xc0]
0x002b8ba3: mov    rdx,QWORD PTR [rcx+0x8]
0x002b8ba7: cmp    rdx,QWORD PTR [rcx+0x10]
0x002b8bab: je     0x1402b8bb7
0x002b8bad: mov    QWORD PTR [rdx],r8
0x002b8bb0: add    QWORD PTR [rcx+0x8],0x8
0x002b8bb5: jmp    0x1402b8bc7
0x002b8bb7: lea    r8,[rbp+0xd0]
0x002b8bbe: call   0x140070bd0
0x002b8bc3: mov    r8,QWORD PTR [rbp-0x20]
0x002b8bc7: mov    rax,QWORD PTR [rbp+0x68]
0x002b8bcb: mov    rbx,QWORD PTR [rax]
0x002b8bce: mov    rdi,QWORD PTR [rax+0x8]
0x002b8bd2: mov    r9,QWORD PTR [rsp+0x30]
0x002b8bd7: nop    WORD PTR [rax+rax*1+0x0]
0x002b8be0: mov    QWORD PTR [rbp-0x10],r9
0x002b8be4: cmp    rbx,rdi
0x002b8be7: jae    0x1402b8cac
0x002b8bed: mov    rdx,QWORD PTR [rbx]
0x002b8bf0: cmp    QWORD PTR [rdx+0x80],0x0
0x002b8bf8: jne    0x1402b8c9b
0x002b8bfe: mov    rax,QWORD PTR [rsp+0x38]
0x002b8c03: mov    rax,QWORD PTR [rax]
0x002b8c06: mov    ecx,DWORD PTR [rax+0xe0]
0x002b8c0c: cmp    DWORD PTR [rdx+0x68],ecx
0x002b8c0f: jne    0x1402b8c9b
0x002b8c15: lea    rcx,[rdx+0x70]
0x002b8c19: lea    rax,[r8+0x18]
0x002b8c1d: cmp    rcx,rax
0x002b8c20: je     0x1402b8c38
0x002b8c22: mov    rdx,rax
0x002b8c25: cmp    QWORD PTR [rax+0x18],0xf
0x002b8c2a: jbe    0x1402b8c2f
0x002b8c2c: mov    rdx,QWORD PTR [rax]
0x002b8c2f: mov    r8,QWORD PTR [rax+0x10]
0x002b8c33: call   0x14006f8d0
0x002b8c38: mov    eax,DWORD PTR [rip+0x2114b46]        # 0x1423cd784
0x002b8c3e: lea    ecx,[rax-0x17]
0x002b8c41: cmp    DWORD PTR [rip+0x15e3650],0x0        # 0x14189c298
0x002b8c48: jne    0x1402b8c4d
0x002b8c4a: lea    ecx,[rax-0x4]
0x002b8c4d: mov    rax,QWORD PTR [rbx]
0x002b8c50: movsxd rdx,ecx
0x002b8c53: sub    rdx,0x5
0x002b8c57: cmp    QWORD PTR [rax+0x80],rdx
0x002b8c5e: jbe    0x1402b8c9b
0x002b8c60: lea    rcx,[rax+0x70]
0x002b8c64: mov    rax,QWORD PTR [rcx+0x10]
0x002b8c68: cmp    rdx,rax
0x002b8c6b: ja     0x1402b8c90
0x002b8c6d: mov    QWORD PTR [rcx+0x10],rdx
0x002b8c71: cmp    QWORD PTR [rcx+0x18],0xf
0x002b8c76: jbe    0x1402b8c7b
0x002b8c78: mov    rcx,QWORD PTR [rcx]
0x002b8c7b: mov    BYTE PTR [rcx+rdx*1],0x0
0x002b8c7f: add    rbx,0x8
0x002b8c83: mov    r9,QWORD PTR [rbp-0x10]
0x002b8c87: mov    r8,QWORD PTR [rbp-0x20]
0x002b8c8b: jmp    0x1402b8be0
0x002b8c90: sub    rdx,rax
0x002b8c93: xor    r8d,r8d
0x002b8c96: call   0x1400e12b0
0x002b8c9b: add    rbx,0x8
0x002b8c9f: mov    r9,QWORD PTR [rbp-0x10]
0x002b8ca3: mov    r8,QWORD PTR [rbp-0x20]
0x002b8ca7: jmp    0x1402b8be0
0x002b8cac: mov    BYTE PTR [rsp+0x40],0x1
0x002b8cb1: add    rsi,0x8
0x002b8cb5: mov    rdx,QWORD PTR [rsp+0x48]
0x002b8cba: jmp    0x1402b8550
0x002b8cbf: lea    rcx,[rsp+0x50]
0x002b8cc4: call   0x14006f750
0x002b8cc9: nop
0x002b8cca: lea    rcx,[rbp-0x48]
0x002b8cce: call   0x14006f750
0x002b8cd3: nop
0x002b8cd4: lea    rcx,[rsp+0x68]
0x002b8cd9: call   0x14006f750
0x002b8cde: mov    r11,QWORD PTR [rip+0x222f1b3]        # 0x1424e7e98
0x002b8ce5: xor    r8d,r8d
0x002b8ce8: add    r15,0x4
0x002b8cec: jmp    0x1402b7c15
0x002b8cf1: mov    edx,DWORD PTR [rbp-0x80]
0x002b8cf4: mov    rax,QWORD PTR [rbp+0x40]
0x002b8cf8: add    r13,0x8
0x002b8cfc: jmp    0x1402b7be4
0x002b8d01: mov    rbx,QWORD PTR [rbp+0xa8]
0x002b8d08: mov    rdi,QWORD PTR [rbp+0xb0]
0x002b8d0f: mov    r12,QWORD PTR [rbp-0x20]
0x002b8d13: cmp    rbx,rdi
0x002b8d16: jae    0x1402b8d47
0x002b8d18: mov    rdx,QWORD PTR [r12+0x8]
0x002b8d1d: cmp    rdx,QWORD PTR [r12+0x10]
0x002b8d22: je     0x1402b8d36
0x002b8d24: mov    rax,QWORD PTR [rbx]
0x002b8d27: mov    QWORD PTR [rdx],rax
0x002b8d2a: add    QWORD PTR [r12+0x8],0x8
0x002b8d30: add    rbx,0x8
0x002b8d34: jmp    0x1402b8d13
0x002b8d36: mov    r8,rbx
0x002b8d39: mov    rcx,r12
0x002b8d3c: call   0x140070bd0
0x002b8d41: add    rbx,0x8
0x002b8d45: jmp    0x1402b8d13
0x002b8d47: inc    DWORD PTR [rbp-0x80]
0x002b8d4a: lea    rcx,[rbp+0xa8]
0x002b8d51: call   0x140066b70
0x002b8d56: cmp    BYTE PTR [rsp+0x40],0x0
0x002b8d5b: mov    edx,DWORD PTR [rbp-0x80]
0x002b8d5e: jne    0x1402b7bb5
0x002b8d64: mov    rsi,QWORD PTR [rbp-0x8]
0x002b8d68: mov    r12,QWORD PTR [rbp-0x28]
0x002b8d6c: xor    r13d,r13d
0x002b8d6f: add    rsi,0x8
0x002b8d73: mov    rax,QWORD PTR [rbp+0x90]
0x002b8d7a: jmp    0x1402b76ba
0x002b8d7f: call   QWORD PTR [rip+0x132cda3]        # 0x1415e5b28
0x002b8d85: nop
0x002b8d86: call   QWORD PTR [rip+0x132cd9c]        # 0x1415e5b28
0x002b8d8c: nop
0x002b8d8d: mov    r15,QWORD PTR [rbp-0x18]
0x002b8d91: test   r15,r15
0x002b8d94: je     0x1402b8e11
0x002b8d96: mov    rbx,QWORD PTR [r15+0x1a0]
0x002b8d9d: sub    rbx,QWORD PTR [r15+0x198]
0x002b8da4: sar    rbx,0x3
0x002b8da8: sub    ebx,0x1
0x002b8dab: js     0x1402b8e11
0x002b8dad: movsxd rax,ebx
0x002b8db0: lea    rdi,[rax*8+0x0]
0x002b8db8: mov    rsi,rdi
0x002b8dbb: nop    DWORD PTR [rax+rax*1+0x0]
0x002b8dc0: mov    rax,QWORD PTR [r15+0x198]
0x002b8dc7: mov    rcx,QWORD PTR [rdi+rax*1]
0x002b8dcb: cmp    QWORD PTR [rcx+0xb8],0x0
0x002b8dd3: jne    0x1402b8e04
0x002b8dd5: test   rcx,rcx
0x002b8dd8: je     0x1402b8ddf
0x002b8dda: call   0x1400bc130
0x002b8ddf: mov    rcx,QWORD PTR [r15+0x198]
0x002b8de6: add    rcx,rsi
0x002b8de9: mov    r8,QWORD PTR [r15+0x1a0]
0x002b8df0: lea    rdx,[rcx+0x8]
0x002b8df4: sub    r8,rdx
0x002b8df7: call   0x14153ae1a
0x002b8dfc: add    QWORD PTR [r15+0x1a0],0xfffffffffffffff8
0x002b8e04: sub    rsi,0x8
0x002b8e08: sub    rdi,0x8
0x002b8e0c: sub    ebx,0x1
0x002b8e0f: jns    0x1402b8dc0
0x002b8e11: mov    r14,QWORD PTR [rbp+0x48]
0x002b8e15: test   r14,r14
0x002b8e18: je     0x1402b8efe
0x002b8e1e: cmp    DWORD PTR [r14+0x294],0xffffffff
0x002b8e26: je     0x1402b8e9a
0x002b8e28: lea    r8,[r14+0x248]
0x002b8e2f: lea    rcx,[r14+0x2d0]
0x002b8e36: cmp    rcx,r8
0x002b8e39: je     0x1402b8e4e
0x002b8e3b: mov    rdx,QWORD PTR [r8]
0x002b8e3e: mov    r8,QWORD PTR [r8+0x8]
0x002b8e42: sub    r8,rdx
0x002b8e45: sar    r8,0x3
0x002b8e49: call   0x1400e16b0
0x002b8e4e: lea    r8,[r14+0x260]
0x002b8e55: lea    rcx,[r14+0x2e8]
0x002b8e5c: cmp    rcx,r8
0x002b8e5f: je     0x1402b8e74
0x002b8e61: mov    rdx,QWORD PTR [r8]
0x002b8e64: mov    r8,QWORD PTR [r8+0x8]
0x002b8e68: sub    r8,rdx
0x002b8e6b: sar    r8,0x3
0x002b8e6f: call   0x1400e16b0
0x002b8e74: lea    r8,[r14+0x278]
0x002b8e7b: lea    rcx,[r14+0x300]
0x002b8e82: cmp    rcx,r8
0x002b8e85: je     0x1402b8e9a
0x002b8e87: mov    rdx,QWORD PTR [r8]
0x002b8e8a: mov    r8,QWORD PTR [r8+0x8]
0x002b8e8e: sub    r8,rdx
0x002b8e91: sar    r8,0x3
0x002b8e95: call   0x1400e16b0
0x002b8e9a: lea    rax,[r14+0x298]
0x002b8ea1: mov    QWORD PTR [rax+0x10],r13
0x002b8ea5: cmp    QWORD PTR [rax+0x18],0xf
0x002b8eaa: jbe    0x1402b8eaf
0x002b8eac: mov    rax,QWORD PTR [rax]
0x002b8eaf: mov    BYTE PTR [rax],0x0
0x002b8eb2: mov    DWORD PTR [r14+0x294],r13d
0x002b8eb9: mov    QWORD PTR [r14+0x2c0],r13
0x002b8ec0: mov    DWORD PTR [r14+0x2c8],r13d
0x002b8ec7: mov    BYTE PTR [r14+0x2cc],0x0
0x002b8ecf: mov    QWORD PTR [r14+0x230],r13
0x002b8ed6: mov    DWORD PTR [r14+0x238],r13d
0x002b8edd: mov    BYTE PTR [r14+0x23c],0x0
0x002b8ee5: mov    DWORD PTR [r14+0x240],r13d
0x002b8eec: mov    BYTE PTR [r14+0x244],0x0
0x002b8ef4: mov    rcx,r14
0x002b8ef7: call   0x140479330
0x002b8efc: jmp    0x1402b8f13
0x002b8efe: test   r15,r15
0x002b8f01: je     0x1402b8f13
0x002b8f03: mov    rcx,r15
0x002b8f06: call   0x1400bfe90
0x002b8f0b: mov    rcx,r15
0x002b8f0e: call   0x1400be410
0x002b8f13: mov    rcx,QWORD PTR [rbp+0x1e0]
0x002b8f1a: xor    rcx,rsp
0x002b8f1d: call   0x141539660
0x002b8f22: mov    rbx,QWORD PTR [rsp+0x340]
0x002b8f2a: movaps xmm6,XMMWORD PTR [rsp+0x2f0]
0x002b8f32: add    rsp,0x300
0x002b8f39: pop    r15
0x002b8f3b: pop    r14
0x002b8f3d: pop    r13
0x002b8f3f: pop    r12
0x002b8f41: pop    rdi
0x002b8f42: pop    rsi
0x002b8f43: pop    rbp
0x002b8f44: ret
0x002b8f45: nop    DWORD PTR [rax]
0x002b8f48: (bad)
0x002b8f49: ins    BYTE PTR [rdi],dx
0x002b8f4a: sub    eax,DWORD PTR [rax]
0x002b8f4c: (bad)
0x002b8f4d: ins    BYTE PTR [rdi],dx
0x002b8f4e: sub    eax,DWORD PTR [rax]
0x002b8f50: fisubr WORD PTR [rbp+0x2b]
0x002b8f53: add    BYTE PTR [rcx+0x6c],bh
0x002b8f56: sub    eax,DWORD PTR [rax]
0x002b8f58: add    DWORD PTR [rbx+rbp*1+0x0],ebp
0x002b8f5c: mov    esi,0x25002b6b
0x002b8f61: outs   dx,BYTE PTR [rsi]
0x002b8f62: sub    eax,DWORD PTR [rax]
0x002b8f64: mov    esi,0x8b002b6f
0x002b8f69: outs   dx,BYTE PTR [rsi]
0x002b8f6a: sub    eax,DWORD PTR [rax]
0x002b8f6c: shr    BYTE PTR [rsi+0x2b],cl
0x002b8f6f: add    BYTE PTR [rip+0xffffffffcf002b6f],ah        # 0x10f2bbae4
0x002b8f75: jo     0x1402b8fa2
0x002b8f77: add    BYTE PTR [rsi+0x70],cl
0x002b8f7a: sub    eax,DWORD PTR [rax]
0x002b8f7c: (bad)
0x002b8f7d: jno    0x1402b8faa
0x002b8f7f: add    BYTE PTR [rsi+0x70],cl
0x002b8f82: sub    eax,DWORD PTR [rax]
0x002b8f84: rex.WRX jo 0x1402b8fb2
0x002b8f87: add    BYTE PTR [rsi+0x70],cl
0x002b8f8a: sub    eax,DWORD PTR [rax]
0x002b8f8c: xor    dh,BYTE PTR [rdx+0x2b]
0x002b8f8f: add    BYTE PTR [rax],dl
0x002b8f91: jno    0x1402b8fbe
0x002b8f93: add    BYTE PTR [rbp-0x7affd490],ch
0x002b8f99: jb     0x1402b8fc6
0x002b8f9b: add    BYTE PTR [rbp+0x1f002b70],ch
0x002b8fa1: jg     0x1402b8fce
0x002b8fa3: add    BYTE PTR [rbx-0x49ffd483],dl
0x002b8fa9: jg     0x1402b8fd6
0x002b8fab: add    BYTE PTR [rax],dh
0x002b8fad: sub    DWORD PTR [rbx],0x2b813000
0x002b8fb3: add    BYTE PTR [rax],dh
0x002b8fb5: sub    DWORD PTR [rbx],0x2b81c200
0x002b8fbb: add    BYTE PTR [rax],al
0x002b8fbd: sub    DWORD PTR [rbx],0x2b7e7800
0x002b8fc3: add    BYTE PTR [rdx],dh
0x002b8fc5: (bad)
0x002b8fc6: sub    eax,DWORD PTR [rax]
0x002b8fc8: loop   0x1402b8f4c
0x002b8fca: sub    eax,DWORD PTR [rax]
0x002b8fcc: cli
0x002b8fcd: xchg   DWORD PTR [rbx],ebp
0x002b8fcf: add    BYTE PTR [rcx],al
0x002b8fd1: xchg   DWORD PTR [rbx],ebp
0x002b8fd3: add    BYTE PTR [rbx],dh
0x002b8fd5: xchg   DWORD PTR [rbx],ebp
0x002b8fd7: add    BYTE PTR [rcx-0x79],ch
0x002b8fda: sub    eax,DWORD PTR [rax]
0x002b8fdc: lahf
0x002b8fdd: xchg   DWORD PTR [rbx],ebp
0x002b8fdf: add    dl,cl
0x002b8fe1: xchg   DWORD PTR [rbx],ebp
0x002b8fe3: add    BYTE PTR [rbx],dh
0x002b8fe5: xchg   DWORD PTR [rbx],ebp
0x002b8fe7: add    BYTE PTR [rdi],ah
0x002b8fe9: mov    BYTE PTR [rbx],ch
0x002b8feb: add    BYTE PTR [rdi],ah
0x002b8fed: mov    BYTE PTR [rbx],ch
0x002b8fef: add    dl,ah
0x002b8ff1: xchg   DWORD PTR [rbx],ebp
0x002b8ff3: add    dl,bh
0x002b8ff5: xchg   DWORD PTR [rbx],ebp
0x002b8ff7: add    bh,bl
0x002b8ff9: mov    BYTE PTR [rbx],ch
0x002b8ffb: add    cl,ch
0x002b8ffd: mov    BYTE PTR [rbx],ch
0x002b8fff: add    ch,bh
0x002b9001: mov    BYTE PTR [rbx],ch
0x002b9003: add    bl,dh
0x002b9005: mov    BYTE PTR [rbx],ch
0x002b9007: add    BYTE PTR [rdi],al
0x002b9009: mov    DWORD PTR [rbx],ebp
0x002b900b: add    BYTE PTR [rcx+rcx*4],dl
0x002b900e: sub    eax,DWORD PTR [rax]
0x002b9010: and    DWORD PTR [rcx-0x76d1ffd5],ecx
0x002b9016: sub    eax,DWORD PTR [rax]
0x002b9018: cmp    ecx,DWORD PTR [rcx-0x764bffd5]
0x002b901e: sub    eax,DWORD PTR [rax]
0x002b9020: mov    esi,0xd2002b89
0x002b9025: mov    DWORD PTR [rbx],ebp
0x002b9027: add    al,cl
0x002b9029: mov    DWORD PTR [rbx],ebp
0x002b902b: add    ah,bl
0x002b902d: mov    DWORD PTR [rbx],ebp
0x002b902f: add    cl,ch
0x002b9031: mov    DWORD PTR [rbx],ebp
0x002b9033: add    dh,dh
0x002b9035: mov    DWORD PTR [rbx],ebp
0x002b9037: add    BYTE PTR [rbx],al
0x002b9039: mov    ch,BYTE PTR [rbx]
0x002b903b: add    BYTE PTR [rax],dl
0x002b903d: mov    ch,BYTE PTR [rbx]
