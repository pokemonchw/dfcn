# steam PE:6a70a6d9:02711000; reagent-item-filter-description; RVA 0xa2adb0..0xa2c60c
0x00a2adb0: mov    QWORD PTR [rsp+0x20],rbx
0x00a2adb5: push   rbp
0x00a2adb6: push   rsi
0x00a2adb7: push   rdi
0x00a2adb8: push   r12
0x00a2adba: push   r13
0x00a2adbc: push   r14
0x00a2adbe: push   r15
0x00a2adc0: lea    rbp,[rsp-0x27]
0x00a2adc5: sub    rsp,0xc0
0x00a2adcc: mov    rax,QWORD PTR [rip+0xe7126d]        # 0x14189c040
0x00a2add3: xor    rax,rsp
0x00a2add6: mov    QWORD PTR [rbp+0x1f],rax
0x00a2adda: mov    WORD PTR [rbp-0x29],r8w
0x00a2addf: mov    rsi,rdx
0x00a2ade2: mov    r14,rcx
0x00a2ade5: xor    ebx,ebx
0x00a2ade7: mov    QWORD PTR [rdx+0x10],rbx
0x00a2adeb: mov    rax,rdx
0x00a2adee: cmp    QWORD PTR [rdx+0x18],0xf
0x00a2adf3: jbe    0x140a2adf8
0x00a2adf5: mov    rax,QWORD PTR [rdx]
0x00a2adf8: mov    BYTE PTR [rax],bl
0x00a2adfa: lea    rdx,[rip+0xffffffffff5d51ff]        # 0x140000000
0x00a2ae01: mov    edi,0x1
0x00a2ae06: cmp    r8w,di
0x00a2ae0a: jle    0x140a2ae99
0x00a2ae10: movsx  r8d,r8w
0x00a2ae14: movsx  rax,WORD PTR [rcx]
0x00a2ae18: cmp    eax,0x5a
0x00a2ae1b: ja     0x140a2ae7d
0x00a2ae1d: movzx  eax,BYTE PTR [rdx+rax*1+0xa2c548]
0x00a2ae25: mov    ecx,DWORD PTR [rdx+rax*4+0xa2c538]
0x00a2ae2c: add    rcx,rdx
0x00a2ae2f: jmp    rcx
0x00a2ae31: cmp    r8d,0x3a98
0x00a2ae38: jb     0x140a2ae7d
0x00a2ae3a: mov    eax,0x45e7b273
0x00a2ae3f: mul    r8d
0x00a2ae42: mov    r8d,edx
0x00a2ae45: shr    r8d,0xc
0x00a2ae49: jmp    0x140a2ae7d
0x00a2ae4b: cmp    r8d,0x2710
0x00a2ae52: jb     0x140a2ae7d
0x00a2ae54: mov    eax,0xd1b71759
0x00a2ae59: mul    r8d
0x00a2ae5c: mov    r8d,edx
0x00a2ae5f: shr    r8d,0xd
0x00a2ae63: jmp    0x140a2ae7d
0x00a2ae65: cmp    r8d,0x96
0x00a2ae6c: jb     0x140a2ae7d
0x00a2ae6e: mov    eax,0x1b4e81b5
0x00a2ae73: mul    r8d
0x00a2ae76: mov    r8d,edx
0x00a2ae79: shr    r8d,0x4
0x00a2ae7d: cmp    r8d,edi
0x00a2ae80: cmovl  r8d,edi
0x00a2ae84: mov    rdx,rsi
0x00a2ae87: mov    ecx,r8d
0x00a2ae8a: call   0x14052c130
0x00a2ae8f: mov    dl,0x20 ; inline_fragment=" "
0x00a2ae91: mov    rcx,rsi
0x00a2ae94: call   0x1400b9b80
0x00a2ae99: mov    edx,DWORD PTR [r14+0x88]
0x00a2aea0: cmp    edx,edi
0x00a2aea2: jle    0x140a2aee5
0x00a2aea4: movsx  ecx,WORD PTR [r14]
0x00a2aea8: sub    ecx,0x39
0x00a2aeab: je     0x140a2aec8
0x00a2aead: sub    ecx,edi
0x00a2aeaf: je     0x140a2aec0
0x00a2aeb1: cmp    ecx,0x20
0x00a2aeb4: jne    0x140a2aee5
0x00a2aeb6: cmp    edx,0x2710
0x00a2aebc: je     0x140a2aed0
0x00a2aebe: jmp    0x140a2aee5
0x00a2aec0: cmp    edx,0x2710
0x00a2aec6: jmp    0x140a2aece
0x00a2aec8: cmp    edx,0x3a98
0x00a2aece: jne    0x140a2aee5
0x00a2aed0: mov    r8d,0x7
0x00a2aed6: lea    rdx,[rip+0xca0cf3]        # 0x1416cbbd0 ; literal="unused "
0x00a2aedd: mov    rcx,rsi
0x00a2aee0: call   0x14006fa10
0x00a2aee5: test   BYTE PTR [r14+0xc],dil
0x00a2aee9: je     0x140a2af00
0x00a2aeeb: mov    r8d,0xb
0x00a2aef1: lea    rdx,[rip+0xca0ce0]        # 0x1416cbbd8 ; literal="improvable "
0x00a2aef8: mov    rcx,rsi
0x00a2aefb: call   0x14006fa10
0x00a2af00: test   BYTE PTR [r14+0xc],0x2
0x00a2af05: je     0x140a2af1c
0x00a2af07: mov    r8d,0xc
0x00a2af0d: lea    rdx,[rip+0xca0cd4]        # 0x1416cbbe8 ; literal="butcherable "
0x00a2af14: mov    rcx,rsi
0x00a2af17: call   0x14006fa10
0x00a2af1c: test   BYTE PTR [r14+0xc],0x4
0x00a2af21: je     0x140a2af38
0x00a2af23: mov    r8d,0x9
0x00a2af29: lea    rdx,[rip+0xca0cc8]        # 0x1416cbbf8 ; literal="millable "
0x00a2af30: mov    rcx,rsi
0x00a2af33: call   0x14006fa10
0x00a2af38: test   BYTE PTR [r14+0xc],0x8
0x00a2af3d: je     0x140a2af54
0x00a2af3f: mov    r8d,0x12
0x00a2af45: lea    rdx,[rip+0xca0cbc]        # 0x1416cbc08 ; literal="possibly buriable "
0x00a2af4c: mov    rcx,rsi
0x00a2af4f: call   0x14006fa10
0x00a2af54: test   BYTE PTR [r14+0xc],0x10
0x00a2af59: je     0x140a2af70
0x00a2af5b: mov    r8d,0x9
0x00a2af61: lea    rdx,[rip+0xca0cb8]        # 0x1416cbc20 ; literal="unrotten "
0x00a2af68: mov    rcx,rsi
0x00a2af6b: call   0x14006fa10
0x00a2af70: test   BYTE PTR [r14+0xc],0x20
0x00a2af75: je     0x140a2af8c
0x00a2af77: mov    r8d,0xc
0x00a2af7d: lea    rdx,[rip+0xca0cac]        # 0x1416cbc30 ; literal="undisturbed "
0x00a2af84: mov    rcx,rsi
0x00a2af87: call   0x14006fa10
0x00a2af8c: mov    eax,DWORD PTR [r14+0xc]
0x00a2af90: test   al,0x40
0x00a2af92: je     0x140a2afad
0x00a2af94: mov    r8d,0xa
0x00a2af9a: lea    rdx,[rip+0xca0c9f]        # 0x1416cbc40 ; literal="collected "
0x00a2afa1: mov    rcx,rsi
0x00a2afa4: call   0x14006fa10
0x00a2afa9: mov    eax,DWORD PTR [r14+0xc]
0x00a2afad: cmp    DWORD PTR [r14+0x8],0xffffffff
0x00a2afb2: jne    0x140a2afcd
0x00a2afb4: test   al,al
0x00a2afb6: jns    0x140a2afcd
0x00a2afb8: mov    r8d,0xc
0x00a2afbe: lea    rdx,[rip+0xca0b7b]        # 0x1416cbb40 ; literal="sharpenable "
0x00a2afc5: mov    rcx,rsi
0x00a2afc8: call   0x14006fa10
0x00a2afcd: test   DWORD PTR [r14+0xc],0x100
0x00a2afd5: je     0x140a2afec
0x00a2afd7: mov    r8d,0x9
0x00a2afdd: lea    rdx,[rip+0xc3865c]        # 0x141663640 ; literal="murdered "
0x00a2afe4: mov    rcx,rsi
0x00a2afe7: call   0x14006fa10
0x00a2afec: test   DWORD PTR [r14+0xc],0x400
0x00a2aff4: je     0x140a2b00b
0x00a2aff6: mov    r8d,0x6
0x00a2affc: lea    rdx,[rip+0xca0b4d]        # 0x1416cbb50 ; literal="empty "
0x00a2b003: mov    rcx,rsi
0x00a2b006: call   0x14006fa10
0x00a2b00b: test   DWORD PTR [r14+0xc],0x800
0x00a2b013: je     0x140a2b02a
0x00a2b015: mov    r8d,0xc
0x00a2b01b: lea    rdx,[rip+0xca0b36]        # 0x1416cbb58 ; literal="processable "
0x00a2b022: mov    rcx,rsi
0x00a2b025: call   0x14006fa10
0x00a2b02a: test   DWORD PTR [r14+0xc],0x2000
0x00a2b032: je     0x140a2b049
0x00a2b034: mov    r8d,0x9
0x00a2b03a: lea    rdx,[rip+0xca0b27]        # 0x1416cbb68 ; literal="cookable "
0x00a2b041: mov    rcx,rsi
0x00a2b044: call   0x14006fa10
0x00a2b049: test   DWORD PTR [r14+0xc],0x100000
0x00a2b051: je     0x140a2b068
0x00a2b053: mov    r8d,0x6
0x00a2b059: lea    rdx,[rip+0xca0b14]        # 0x1416cbb74 ; literal="solid "
0x00a2b060: mov    rcx,rsi
0x00a2b063: call   0x14006fa10
0x00a2b068: mov    r12d,0x16
0x00a2b06e: test   DWORD PTR [r14+0xc],0x4000
0x00a2b076: je     0x140a2b08a
0x00a2b078: mov    r8d,r12d
0x00a2b07b: lea    rdx,[rip+0xca0afe]        # 0x1416cbb80 ; literal="extract-bearing plant "
0x00a2b082: mov    rcx,rsi
0x00a2b085: call   0x14006fa10
0x00a2b08a: test   DWORD PTR [r14+0xc],0x8000
0x00a2b092: je     0x140a2b0a9
0x00a2b094: mov    r8d,0x15
0x00a2b09a: lea    rdx,[rip+0xca0af7]        # 0x1416cbb98 ; literal="extract-bearing fish "
0x00a2b0a1: mov    rcx,rsi
0x00a2b0a4: call   0x14006fa10
0x00a2b0a9: test   DWORD PTR [r14+0xc],0x10000
0x00a2b0b1: je     0x140a2b0c8
0x00a2b0b3: mov    r8d,0x1f
0x00a2b0b9: lea    rdx,[rip+0xca0af0]        # 0x1416cbbb0 ; literal="extract-bearing small creature "
0x00a2b0c0: mov    rcx,rsi
0x00a2b0c3: call   0x14006fa10
0x00a2b0c8: test   DWORD PTR [r14+0xc],0x20000
0x00a2b0d0: je     0x140a2b0e4
0x00a2b0d2: mov    r8,r12
0x00a2b0d5: lea    rdx,[rip+0xca09cc]        # 0x1416cbaa8 ; literal="processable (to vial) "
0x00a2b0dc: mov    rcx,rsi
0x00a2b0df: call   0x14006fa10
0x00a2b0e4: test   DWORD PTR [r14+0xc],0x80000
0x00a2b0ec: je     0x140a2b103
0x00a2b0ee: mov    r8d,0x18
0x00a2b0f4: lea    rdx,[rip+0xca09c5]        # 0x1416cbac0 ; literal="processable (to barrel) "
0x00a2b0fb: mov    rcx,rsi
0x00a2b0fe: call   0x14006fa10
0x00a2b103: test   DWORD PTR [r14+0xc],0x200000
0x00a2b10b: je     0x140a2b122
0x00a2b10d: mov    r8d,0x18
0x00a2b113: lea    rdx,[rip+0xca09c6]        # 0x1416cbae0 ; literal="tameable small creature "
0x00a2b11a: mov    rcx,rsi
0x00a2b11d: call   0x14006fa10
0x00a2b122: test   DWORD PTR [r14+0xc],0x400000
0x00a2b12a: je     0x140a2b141
0x00a2b12c: mov    r8d,0x7
0x00a2b132: lea    rdx,[rip+0xc276df]        # 0x141652818 ; literal="nearby "
0x00a2b139: mov    rcx,rsi
0x00a2b13c: call   0x14006fa10
0x00a2b141: test   DWORD PTR [r14+0xc],0x800000
0x00a2b149: je     0x140a2b160
0x00a2b14b: mov    r8d,0xd
0x00a2b151: lea    rdx,[rip+0xca09a8]        # 0x1416cbb00 ; literal="sand-bearing "
0x00a2b158: mov    rcx,rsi
0x00a2b15b: call   0x14006fa10
0x00a2b160: test   DWORD PTR [r14+0xc],0x1000000
0x00a2b168: je     0x140a2b17f
0x00a2b16a: mov    r8d,0x6
0x00a2b170: lea    rdx,[rip+0xca0999]        # 0x1416cbb10 ; literal="glass "
0x00a2b177: mov    rcx,rsi
0x00a2b17a: call   0x14006fa10
0x00a2b17f: cmp    DWORD PTR [r14+0xc],ebx
0x00a2b183: jge    0x140a2b19a
0x00a2b185: mov    r8d,0xc
0x00a2b18b: lea    rdx,[rip+0xca0986]        # 0x1416cbb18 ; literal="lye-bearing "
0x00a2b192: mov    rcx,rsi
0x00a2b195: call   0x14006fa10
0x00a2b19a: test   DWORD PTR [r14+0xc],0x2000000
0x00a2b1a2: je     0x140a2b1b9
0x00a2b1a4: mov    r8d,0x5
0x00a2b1aa: lea    rdx,[rip+0xca0977]        # 0x1416cbb28 ; literal="milk "
0x00a2b1b1: mov    rcx,rsi
0x00a2b1b4: call   0x14006fa10
0x00a2b1b9: test   DWORD PTR [r14+0xc],0x4000000
0x00a2b1c1: je     0x140a2b1d8
0x00a2b1c3: mov    r8d,0x9
0x00a2b1c9: lea    rdx,[rip+0xca0960]        # 0x1416cbb30 ; literal="milkable "
0x00a2b1d0: mov    rcx,rsi
0x00a2b1d3: call   0x14006fa10
0x00a2b1d8: test   DWORD PTR [r14+0xc],0x8000000
0x00a2b1e0: je     0x140a2b1f7
0x00a2b1e2: mov    r8d,0xe
0x00a2b1e8: lea    rdx,[rip+0xca0851]        # 0x1416cba40 ; literal="finished good "
0x00a2b1ef: mov    rcx,rsi
0x00a2b1f2: call   0x14006fa10
0x00a2b1f7: test   DWORD PTR [r14+0xc],0x10000000
0x00a2b1ff: je     0x140a2b216
0x00a2b201: mov    r8d,0x5
0x00a2b207: lea    rdx,[rip+0xca0842]        # 0x1416cba50 ; literal="ammo "
0x00a2b20e: mov    rcx,rsi
0x00a2b211: call   0x14006fa10
0x00a2b216: test   DWORD PTR [r14+0xc],0x20000000
0x00a2b21e: je     0x140a2b235
0x00a2b220: mov    r8d,0xa
0x00a2b226: lea    rdx,[rip+0xca082b]        # 0x1416cba58 ; literal="furniture "
0x00a2b22d: mov    rcx,rsi
0x00a2b230: call   0x14006fa10
0x00a2b235: test   BYTE PTR [r14+0x1c],dil
0x00a2b239: je     0x140a2b2a4
0x00a2b23b: movsxd rcx,DWORD PTR [r14+0xac]
0x00a2b242: test   ecx,ecx
0x00a2b244: js     0x140a2b28f
0x00a2b246: mov    rax,QWORD PTR [rip+0x1acbe73]        # 0x1424f70c0
0x00a2b24d: mov    rdx,QWORD PTR [rip+0x1acbe64]        # 0x1424f70b8
0x00a2b254: sub    rax,rdx
0x00a2b257: sar    rax,0x3
0x00a2b25b: cmp    ecx,eax
0x00a2b25d: jge    0x140a2b28f
0x00a2b25f: mov    rdx,QWORD PTR [rdx+rcx*8]
0x00a2b263: add    rdx,0x50
0x00a2b267: mov    r8,QWORD PTR [rdx+0x10]
0x00a2b26b: cmp    QWORD PTR [rdx+0x18],0xf
0x00a2b270: jbe    0x140a2b275
0x00a2b272: mov    rdx,QWORD PTR [rdx]
0x00a2b275: mov    rcx,rsi
0x00a2b278: call   0x14006fa10
0x00a2b27d: mov    r8,rdi
0x00a2b280: lea    rdx,[rip+0xbbd4b5]        # 0x1415e873c ; literal=" "
0x00a2b287: mov    rcx,rsi
0x00a2b28a: call   0x14006fa10
0x00a2b28f: mov    r8d,0x4
0x00a2b295: lea    rdx,[rip+0xca07c8]        # 0x1416cba64 ; literal="dye "
0x00a2b29c: mov    rcx,rsi
0x00a2b29f: call   0x14006fa10
0x00a2b2a4: test   BYTE PTR [r14+0x1c],0x2
0x00a2b2a9: je     0x140a2b2c0
0x00a2b2ab: mov    r8d,0x8
0x00a2b2b1: lea    rdx,[rip+0xca07b8]        # 0x1416cba70 ; literal="dyeable "
0x00a2b2b8: mov    rcx,rsi
0x00a2b2bb: call   0x14006fa10
0x00a2b2c0: test   DWORD PTR [r14+0x1c],0x80000
0x00a2b2c8: je     0x140a2b2df
0x00a2b2ca: mov    r8d,0xa
0x00a2b2d0: lea    rdx,[rip+0xca07a9]        # 0x1416cba80 ; literal="totemable "
0x00a2b2d7: mov    rcx,rsi
0x00a2b2da: call   0x14006fa10
0x00a2b2df: test   BYTE PTR [r14+0x1c],0x10
0x00a2b2e4: je     0x140a2b2fb
0x00a2b2e6: mov    r8d,0xd
0x00a2b2ec: lea    rdx,[rip+0xca079d]        # 0x1416cba90 ; literal="glass-making "
0x00a2b2f3: mov    rcx,rsi
0x00a2b2f6: call   0x14006fa10
0x00a2b2fb: test   BYTE PTR [r14+0x1c],0x4
0x00a2b300: je     0x140a2b317
0x00a2b302: mov    r8d,0x5
0x00a2b308: lea    rdx,[rip+0xca0791]        # 0x1416cbaa0 ; literal="dyed "
0x00a2b30f: mov    rcx,rsi
0x00a2b312: call   0x14006fa10
0x00a2b317: mov    eax,DWORD PTR [r14+0x1c]
0x00a2b31b: bt     eax,0xa
0x00a2b31f: jae    0x140a2b33a
0x00a2b321: mov    r8d,0x10
0x00a2b327: lea    rdx,[rip+0xca068a]        # 0x1416cb9b8 ; literal="melt-designated "
0x00a2b32e: mov    rcx,rsi
0x00a2b331: call   0x14006fa10
0x00a2b336: mov    eax,DWORD PTR [r14+0x1c]
0x00a2b33a: cmp    DWORD PTR [r14+0x8],0xffffffff
0x00a2b33f: jne    0x140a2b35c
0x00a2b341: bt     eax,0x9
0x00a2b345: jae    0x140a2b35c
0x00a2b347: mov    r8d,0xe
0x00a2b34d: lea    rdx,[rip+0xca067c]        # 0x1416cb9d0 ; literal="deep material "
0x00a2b354: mov    rcx,rsi
0x00a2b357: call   0x14006fa10
0x00a2b35c: test   BYTE PTR [r14+0x1c],0x8
0x00a2b361: je     0x140a2b378
0x00a2b363: mov    r8d,0xf
0x00a2b369: lea    rdx,[rip+0xca0670]        # 0x1416cb9e0 ; literal="sewn-imageless "
0x00a2b370: mov    rcx,rsi
0x00a2b373: call   0x14006fa10
0x00a2b378: test   BYTE PTR [r14+0x1c],0x20
0x00a2b37d: je     0x140a2b394
0x00a2b37f: mov    r8d,0x6
0x00a2b385: lea    rdx,[rip+0xca0664]        # 0x1416cb9f0 ; literal="screw "
0x00a2b38c: mov    rcx,rsi
0x00a2b38f: call   0x14006fa10
0x00a2b394: cmp    DWORD PTR [r14+0x8],0xffffffff
0x00a2b399: jne    0x140a2b528
0x00a2b39f: test   BYTE PTR [r14+0x1c],0x80
0x00a2b3a4: je     0x140a2b3bb
0x00a2b3a6: mov    r8d,0xa
0x00a2b3ac: lea    rdx,[rip+0xca0645]        # 0x1416cb9f8 ; literal="fire-safe "
0x00a2b3b3: mov    rcx,rsi
0x00a2b3b6: call   0x14006fa10
0x00a2b3bb: test   DWORD PTR [r14+0x1c],0x100
0x00a2b3c3: je     0x140a2b3da
0x00a2b3c5: mov    r8d,0xb
0x00a2b3cb: lea    rdx,[rip+0xca0636]        # 0x1416cba08 ; literal="magma-safe "
0x00a2b3d2: mov    rcx,rsi
0x00a2b3d5: call   0x14006fa10
0x00a2b3da: test   BYTE PTR [r14+0x1c],0x40
0x00a2b3df: je     0x140a2b3f6
0x00a2b3e1: mov    r8d,0x12
0x00a2b3e7: lea    rdx,[rip+0xca062a]        # 0x1416cba18 ; literal="building material "
0x00a2b3ee: mov    rcx,rsi
0x00a2b3f1: call   0x14006fa10
0x00a2b3f6: test   DWORD PTR [r14+0x1c],0x800
0x00a2b3fe: je     0x140a2b415
0x00a2b400: mov    r8d,0xd
0x00a2b406: lea    rdx,[rip+0xca0623]        # 0x1416cba30 ; literal="non-economic "
0x00a2b40d: mov    rcx,rsi
0x00a2b410: call   0x14006fa10
0x00a2b415: test   DWORD PTR [r14+0x1c],0x4000
0x00a2b41d: je     0x140a2b434
0x00a2b41f: mov    r8d,0x6
0x00a2b425: lea    rdx,[rip+0xca0538]        # 0x1416cb964 ; literal="plant "
0x00a2b42c: mov    rcx,rsi
0x00a2b42f: call   0x14006fa10
0x00a2b434: test   DWORD PTR [r14+0x1c],0x8000
0x00a2b43c: je     0x140a2b453
0x00a2b43e: mov    r8d,0x5
0x00a2b444: lea    rdx,[rip+0xca0521]        # 0x1416cb96c ; literal="silk "
0x00a2b44b: mov    rcx,rsi
0x00a2b44e: call   0x14006fa10
0x00a2b453: cmp    DWORD PTR [r14+0x1c],ebx
0x00a2b457: jge    0x140a2b46e
0x00a2b459: mov    r8d,0x5
0x00a2b45f: lea    rdx,[rip+0xca050e]        # 0x1416cb974 ; literal="yarn "
0x00a2b466: mov    rcx,rsi
0x00a2b469: call   0x14006fa10
0x00a2b46e: test   DWORD PTR [r14+0x1c],0x10000
0x00a2b476: je     0x140a2b48d
0x00a2b478: mov    r8d,0x8
0x00a2b47e: lea    rdx,[rip+0xca04fb]        # 0x1416cb980 ; literal="leather "
0x00a2b485: mov    rcx,rsi
0x00a2b488: call   0x14006fa10
0x00a2b48d: test   DWORD PTR [r14+0x1c],0x20000
0x00a2b495: je     0x140a2b4ac
0x00a2b497: mov    r8d,0x5
0x00a2b49d: lea    rdx,[rip+0xca04e8]        # 0x1416cb98c ; literal="bone "
0x00a2b4a4: mov    rcx,rsi
0x00a2b4a7: call   0x14006fa10
0x00a2b4ac: test   DWORD PTR [r14+0x1c],0x40000000
0x00a2b4b4: je     0x140a2b4cb
0x00a2b4b6: mov    r8d,0xa
0x00a2b4bc: lea    rdx,[rip+0xca04d5]        # 0x1416cb998 ; literal="hair/wool "
0x00a2b4c3: mov    rcx,rsi
0x00a2b4c6: call   0x14006fa10
0x00a2b4cb: test   DWORD PTR [r14+0x1c],0x40000
0x00a2b4d3: je     0x140a2b4ea
0x00a2b4d5: mov    r8d,0x6
0x00a2b4db: lea    rdx,[rip+0xca04c2]        # 0x1416cb9a4 ; literal="shell "
0x00a2b4e2: mov    rcx,rsi
0x00a2b4e5: call   0x14006fa10
0x00a2b4ea: test   DWORD PTR [r14+0x1c],0x100000
0x00a2b4f2: je     0x140a2b509
0x00a2b4f4: mov    r8d,0x5
0x00a2b4fa: lea    rdx,[rip+0xca04ab]        # 0x1416cb9ac ; literal="horn "
0x00a2b501: mov    rcx,rsi
0x00a2b504: call   0x14006fa10
0x00a2b509: test   DWORD PTR [r14+0x1c],0x200000
0x00a2b511: je     0x140a2b528
0x00a2b513: mov    r8d,0x6
0x00a2b519: lea    rdx,[rip+0xca03d8]        # 0x1416cb8f8 ; literal="pearl "
0x00a2b520: mov    rcx,rsi
0x00a2b523: call   0x14006fa10
0x00a2b528: test   DWORD PTR [r14+0x1c],0x400000
0x00a2b530: je     0x140a2b547
0x00a2b532: mov    r8d,0x13
0x00a2b538: lea    rdx,[rip+0xca03c1]        # 0x1416cb900 ; literal="plaster-containing "
0x00a2b53f: mov    rcx,rsi
0x00a2b542: call   0x14006fa10
0x00a2b547: cmp    DWORD PTR [r14+0x8],0xffffffff
0x00a2b54c: jne    0x140a2b58c
0x00a2b54e: test   DWORD PTR [r14+0x1c],0x1000000
0x00a2b556: je     0x140a2b56d
0x00a2b558: mov    r8d,0x5
0x00a2b55e: lea    rdx,[rip+0xca03af]        # 0x1416cb914 ; literal="soap "
0x00a2b565: mov    rcx,rsi
0x00a2b568: call   0x14006fa10
0x00a2b56d: test   DWORD PTR [r14+0x1c],0x4000000
0x00a2b575: je     0x140a2b58c
0x00a2b577: mov    r8d,0xc
0x00a2b57d: lea    rdx,[rip+0xca039c]        # 0x1416cb920 ; literal="ivory/tooth "
0x00a2b584: mov    rcx,rsi
0x00a2b587: call   0x14006fa10
0x00a2b58c: test   DWORD PTR [r14+0x1c],0x8000000
0x00a2b594: je     0x140a2b5ab
0x00a2b596: mov    r8d,0xe
0x00a2b59c: lea    rdx,[rip+0xca038d]        # 0x1416cb930 ; literal="lye/milk-free "
0x00a2b5a3: mov    rcx,rsi
0x00a2b5a6: call   0x14006fa10
0x00a2b5ab: test   DWORD PTR [r14+0x1c],0x10000000
0x00a2b5b3: je     0x140a2b5ca
0x00a2b5b5: mov    r8d,0x6
0x00a2b5bb: lea    rdx,[rip+0xca037e]        # 0x1416cb940 ; literal="blunt "
0x00a2b5c2: mov    rcx,rsi
0x00a2b5c5: call   0x14006fa10
0x00a2b5ca: test   DWORD PTR [r14+0x1c],0x20000000
0x00a2b5d2: je     0x140a2b5e9
0x00a2b5d4: mov    r8d,0xb
0x00a2b5da: lea    rdx,[rip+0xca0367]        # 0x1416cb948 ; literal="unengraved "
0x00a2b5e1: mov    rcx,rsi
0x00a2b5e4: call   0x14006fa10
0x00a2b5e9: test   BYTE PTR [r14+0x24],dil
0x00a2b5ed: je     0x140a2b604
0x00a2b5ef: mov    r8d,0xb
0x00a2b5f5: lea    rdx,[rip+0xca035c]        # 0x1416cb958 ; literal="unimproved "
0x00a2b5fc: mov    rcx,rsi
0x00a2b5ff: call   0x14006fa10
0x00a2b604: test   DWORD PTR [r14+0x24],0x800
0x00a2b60c: je     0x140a2b623
0x00a2b60e: mov    r8d,0xb
0x00a2b614: lea    rdx,[rip+0xca027d]        # 0x1416cb898 ; literal="written-on "
0x00a2b61b: mov    rcx,rsi
0x00a2b61e: call   0x14006fa10
0x00a2b623: test   BYTE PTR [r14+0x24],0x4
0x00a2b628: je     0x140a2b63f
0x00a2b62a: mov    r8d,0xe
0x00a2b630: lea    rdx,[rip+0xca0271]        # 0x1416cb8a8 ; literal="non-absorbent "
0x00a2b637: mov    rcx,rsi
0x00a2b63a: call   0x14006fa10
0x00a2b63f: test   BYTE PTR [r14+0x24],0x80
0x00a2b644: je     0x140a2b65b
0x00a2b646: mov    r8d,0xd
0x00a2b64c: lea    rdx,[rip+0xca0265]        # 0x1416cb8b8 ; literal="food storage "
0x00a2b653: mov    rcx,rsi
0x00a2b656: call   0x14006fa10
0x00a2b65b: test   BYTE PTR [r14+0x24],0x8
0x00a2b660: je     0x140a2b677
0x00a2b662: mov    r8d,0xc
0x00a2b668: lea    rdx,[rip+0xca0259]        # 0x1416cb8c8 ; literal="non-pressed "
0x00a2b66f: mov    rcx,rsi
0x00a2b672: call   0x14006fa10
0x00a2b677: cmp    DWORD PTR [r14+0x8],0xffffffff
0x00a2b67c: jne    0x140a2b6f7
0x00a2b67e: test   DWORD PTR [r14+0x24],0x80000
0x00a2b686: je     0x140a2b69d
0x00a2b688: mov    r8d,0x6
0x00a2b68e: lea    rdx,[rip+0xca0243]        # 0x1416cb8d8 ; literal="woven "
0x00a2b695: mov    rcx,rsi
0x00a2b698: call   0x14006fa10
0x00a2b69d: test   BYTE PTR [r14+0x24],0x40
0x00a2b6a2: je     0x140a2b6b9
0x00a2b6a4: mov    r8d,0x5
0x00a2b6aa: lea    rdx,[rip+0xca022f]        # 0x1416cb8e0 ; literal="hard "
0x00a2b6b1: mov    rcx,rsi
0x00a2b6b4: call   0x14006fa10
0x00a2b6b9: test   DWORD PTR [r14+0x24],0x100
0x00a2b6c1: je     0x140a2b6d8
0x00a2b6c3: mov    r8d,0x6
0x00a2b6c9: lea    rdx,[rip+0xca0218]        # 0x1416cb8e8 ; literal="metal "
0x00a2b6d0: mov    rcx,rsi
0x00a2b6d3: call   0x14006fa10
0x00a2b6d8: test   DWORD PTR [r14+0x24],0x200
0x00a2b6e0: je     0x140a2b6f7
0x00a2b6e2: mov    r8d,0x5
0x00a2b6e8: lea    rdx,[rip+0xca0201]        # 0x1416cb8f0 ; literal="sand "
0x00a2b6ef: mov    rcx,rsi
0x00a2b6f2: call   0x14006fa10
0x00a2b6f7: test   DWORD PTR [r14+0x24],0x1000
0x00a2b6ff: je     0x140a2b716
0x00a2b701: mov    r8d,0x6
0x00a2b707: lea    rdx,[rip+0xca08ba]        # 0x1416cbfc8 ; literal="edged "
0x00a2b70e: mov    rcx,rsi
0x00a2b711: call   0x14006fa10
0x00a2b716: test   DWORD PTR [r14+0x24],0x2000
0x00a2b71e: je     0x140a2b735
0x00a2b720: mov    r8d,0xa
0x00a2b726: lea    rdx,[rip+0xca08a3]        # 0x1416cbfd0 ; literal="on-ground "
0x00a2b72d: mov    rcx,rsi
0x00a2b730: call   0x14006fa10
0x00a2b735: test   DWORD PTR [r14+0x24],0x4000
0x00a2b73d: je     0x140a2b754
0x00a2b73f: mov    r8d,0x7
0x00a2b745: lea    rdx,[rip+0xca0894]        # 0x1416cbfe0 ; literal="divine "
0x00a2b74c: mov    rcx,rsi
0x00a2b74f: call   0x14006fa10
0x00a2b754: test   DWORD PTR [r14+0x24],0x8000
0x00a2b75c: je     0x140a2b773
0x00a2b75e: mov    r8d,0x9
0x00a2b764: lea    rdx,[rip+0xca087d]        # 0x1416cbfe8 ; literal="artifact "
0x00a2b76b: mov    rcx,rsi
0x00a2b76e: call   0x14006fa10
0x00a2b773: test   DWORD PTR [r14+0x24],0x40000
0x00a2b77b: je     0x140a2b792
0x00a2b77d: mov    r8d,0xd
0x00a2b783: lea    rdx,[rip+0xca086e]        # 0x1416cbff8 ; literal="non-artifact "
0x00a2b78a: mov    rcx,rsi
0x00a2b78d: call   0x14006fa10
0x00a2b792: test   DWORD PTR [r14+0x24],0x10000
0x00a2b79a: je     0x140a2b7b1
0x00a2b79c: mov    r8d,0x7
0x00a2b7a2: lea    rdx,[rip+0xca085f]        # 0x1416cc008 ; literal="wooden "
0x00a2b7a9: mov    rcx,rsi
0x00a2b7ac: call   0x14006fa10
0x00a2b7b1: test   DWORD PTR [r14+0x24],0x20000
0x00a2b7b9: je     0x140a2b7d0
0x00a2b7bb: mov    r8d,0x6
0x00a2b7c1: lea    rdx,[rip+0xca0848]        # 0x1416cc010 ; literal="stone "
0x00a2b7c8: mov    rcx,rsi
0x00a2b7cb: call   0x14006fa10
0x00a2b7d0: test   DWORD PTR [r14+0x24],0x100000
0x00a2b7d8: je     0x140a2b7ef
0x00a2b7da: mov    r8d,0x4
0x00a2b7e0: lea    rdx,[rip+0xca0831]        # 0x1416cc018 ; literal="gem "
0x00a2b7e7: mov    rcx,rsi
0x00a2b7ea: call   0x14006fa10
0x00a2b7ef: test   DWORD PTR [r14+0x24],0x400000
0x00a2b7f7: je     0x140a2b80e
0x00a2b7f9: mov    r8d,0x6
0x00a2b7ff: lea    rdx,[rip+0xca074a]        # 0x1416cbf50 ; literal="grown "
0x00a2b806: mov    rcx,rsi
0x00a2b809: call   0x14006fa10
0x00a2b80e: cmp    DWORD PTR [r14+0x8],0xffffffff
0x00a2b813: jne    0x140a2c0ba
0x00a2b819: mov    r8d,DWORD PTR [r14+0x80]
0x00a2b820: movabs r12,0x7fffffffffffffff
0x00a2b82a: cmp    r8d,0xffffffff
0x00a2b82e: je     0x140a2ba13
0x00a2b834: xorps  xmm0,xmm0
0x00a2b837: movups XMMWORD PTR [rbp-0x1],xmm0
0x00a2b83b: mov    QWORD PTR [rbp+0x17],0xf
0x00a2b843: mov    QWORD PTR [rbp+0xf],rbx
0x00a2b847: mov    BYTE PTR [rbp-0x1],0x0
0x00a2b84b: xor    edx,edx
0x00a2b84d: lea    rcx,[rip+0x19a5c9c]        # 0x1423d14f0
0x00a2b854: call   0x1414add70
0x00a2b859: mov    rbx,rax
0x00a2b85c: test   rax,rax
0x00a2b85f: je     0x140a2b8b3
0x00a2b861: cmp    QWORD PTR [rax+0x530],0x0
0x00a2b869: je     0x140a2b89c
0x00a2b86b: lea    rdx,[rax+0x520]
0x00a2b872: mov    r8,QWORD PTR [rdx+0x10]
0x00a2b876: cmp    QWORD PTR [rdx+0x18],0xf
0x00a2b87b: jbe    0x140a2b880
0x00a2b87d: mov    rdx,QWORD PTR [rdx]
0x00a2b880: lea    rcx,[rbp-0x1]
0x00a2b884: call   0x14006fa10
0x00a2b889: mov    r8,rdi
0x00a2b88c: lea    rdx,[rip+0xbbcea9]        # 0x1415e873c ; literal=" "
0x00a2b893: lea    rcx,[rbp-0x1]
0x00a2b897: call   0x14006fa10
0x00a2b89c: lea    rdx,[rbx+0xb8]
0x00a2b8a3: mov    r8,QWORD PTR [rdx+0x10]
0x00a2b8a7: cmp    QWORD PTR [rdx+0x18],0xf
0x00a2b8ac: jbe    0x140a2b8c0
0x00a2b8ae: mov    rdx,QWORD PTR [rdx]
0x00a2b8b1: jmp    0x140a2b8c0
0x00a2b8b3: lea    rdx,[rip+0xd5d84e]        # 0x141789108 ; literal="unknown material"
0x00a2b8ba: mov    r8d,0x10
0x00a2b8c0: lea    rcx,[rbp-0x1]
0x00a2b8c4: call   0x14006fa10
0x00a2b8c9: mov    r13,QWORD PTR [rbp+0xf]
0x00a2b8cd: mov    rax,r12
0x00a2b8d0: sub    rax,r13
0x00a2b8d3: cmp    rax,0x9
0x00a2b8d7: jb     0x140a2c530
0x00a2b8dd: lea    r12,[rbp-0x1]
0x00a2b8e1: cmp    QWORD PTR [rbp+0x17],0xf
0x00a2b8e6: cmova  r12,QWORD PTR [rbp-0x1]
0x00a2b8eb: xorps  xmm0,xmm0
0x00a2b8ee: movups XMMWORD PTR [rbp-0x21],xmm0
0x00a2b8f2: lea    r15,[r13+0x9]
0x00a2b8f6: mov    ebx,0xf
0x00a2b8fb: lea    rdi,[rbp-0x21]
0x00a2b8ff: cmp    r15,rbx
0x00a2b902: jbe    0x140a2b93c
0x00a2b904: mov    rbx,r15
0x00a2b907: or     rbx,0xf
0x00a2b90b: movabs rax,0x7fffffffffffffff
0x00a2b915: cmp    rbx,rax
0x00a2b918: jbe    0x140a2b91f
0x00a2b91a: mov    rbx,rax
0x00a2b91d: jmp    0x140a2b92c
0x00a2b91f: cmp    rbx,0x16
0x00a2b923: mov    eax,0x16
0x00a2b928: cmovb  rbx,rax
0x00a2b92c: lea    rcx,[rbx+0x1]
0x00a2b930: call   0x1400707d0
0x00a2b935: mov    rdi,rax
0x00a2b938: mov    QWORD PTR [rbp-0x21],rax
0x00a2b93c: mov    QWORD PTR [rbp-0x11],r15
0x00a2b940: mov    QWORD PTR [rbp-0x9],rbx
0x00a2b944: mov    r8,r13
0x00a2b947: mov    rdx,r12
0x00a2b94a: mov    rcx,rdi
0x00a2b94d: call   0x14153aa78
0x00a2b952: movsd  xmm0,QWORD PTR [rip+0xca05fe]        # 0x1416cbf58 ; literal="-bearing "
0x00a2b95a: movsd  QWORD PTR [rdi+r13*1],xmm0
0x00a2b960: movzx  eax,BYTE PTR [rip+0xca05f9]        # 0x1416cbf60 ; literal=" "
0x00a2b967: mov    BYTE PTR [rdi+r13*1+0x8],al
0x00a2b96c: mov    BYTE PTR [rdi+r15*1],0x0
0x00a2b971: lea    rdx,[rbp-0x21]
0x00a2b975: cmp    QWORD PTR [rbp-0x9],0xf
0x00a2b97a: cmova  rdx,QWORD PTR [rbp-0x21]
0x00a2b97f: mov    r8,QWORD PTR [rbp-0x11]
0x00a2b983: mov    rcx,rsi
0x00a2b986: call   0x14006fa10
0x00a2b98b: nop
0x00a2b98c: mov    rdx,QWORD PTR [rbp-0x9]
0x00a2b990: cmp    rdx,0xf
0x00a2b994: jbe    0x140a2b9cb
0x00a2b996: inc    rdx
0x00a2b999: mov    rcx,QWORD PTR [rbp-0x21]
0x00a2b99d: mov    rax,rcx
0x00a2b9a0: cmp    rdx,0x1000
0x00a2b9a7: jb     0x140a2b9c5
0x00a2b9a9: add    rdx,0x27
0x00a2b9ad: mov    rcx,QWORD PTR [rcx-0x8]
0x00a2b9b1: sub    rax,rcx
0x00a2b9b4: add    rax,0xfffffffffffffff8
0x00a2b9b8: cmp    rax,0x1f
0x00a2b9bc: jbe    0x140a2b9c5
0x00a2b9be: call   QWORD PTR [rip+0xbba164]        # 0x1415e5b28
0x00a2b9c4: int3
0x00a2b9c5: call   0x141539680
0x00a2b9ca: nop
0x00a2b9cb: mov    rdx,QWORD PTR [rbp+0x17]
0x00a2b9cf: cmp    rdx,0xf
0x00a2b9d3: jbe    0x140a2ba09
0x00a2b9d5: inc    rdx
0x00a2b9d8: mov    rcx,QWORD PTR [rbp-0x1]
0x00a2b9dc: mov    rax,rcx
0x00a2b9df: cmp    rdx,0x1000
0x00a2b9e6: jb     0x140a2ba04
0x00a2b9e8: add    rdx,0x27
0x00a2b9ec: mov    rcx,QWORD PTR [rcx-0x8]
0x00a2b9f0: sub    rax,rcx
0x00a2b9f3: add    rax,0xfffffffffffffff8
0x00a2b9f7: cmp    rax,0x1f
0x00a2b9fb: jbe    0x140a2ba04
0x00a2b9fd: call   QWORD PTR [rip+0xbba125]        # 0x1415e5b28
0x00a2ba03: int3
0x00a2ba04: call   0x141539680
0x00a2ba09: movabs r12,0x7fffffffffffffff
0x00a2ba13: cmp    QWORD PTR [r14+0x50],0x0
0x00a2ba18: je     0x140a2bcad
0x00a2ba1e: lea    rbx,[r14+0x40]
0x00a2ba22: mov    rdi,QWORD PTR [rbx+0x10]
0x00a2ba26: mov    rcx,rbx
0x00a2ba29: mov    r15,QWORD PTR [rbx+0x18]
0x00a2ba2d: cmp    r15,0xf
0x00a2ba31: jbe    0x140a2ba36
0x00a2ba33: mov    rcx,QWORD PTR [rbx]
0x00a2ba36: cmp    rdi,0x11
0x00a2ba3a: jne    0x140a2ba69
0x00a2ba3c: mov    r8,rdi
0x00a2ba3f: lea    rdx,[rip+0xca0522]        # 0x1416cbf68 ; literal="CALCIUM_CARBONATE"
0x00a2ba46: call   0x14153ae14
0x00a2ba4b: test   eax,eax
0x00a2ba4d: jne    0x140a2ba69
0x00a2ba4f: mov    r8d,0x1f
0x00a2ba55: lea    rdx,[rip+0xca0524]        # 0x1416cbf80 ; literal="calcite/limestone/chalk/marble "
0x00a2ba5c: mov    rcx,rsi
0x00a2ba5f: call   0x14006fa10
0x00a2ba64: jmp    0x140a2bcad
0x00a2ba69: cmp    r15,0xf
0x00a2ba6d: jbe    0x140a2ba72
0x00a2ba6f: mov    rbx,QWORD PTR [rbx]
0x00a2ba72: cmp    rdi,0x9
0x00a2ba76: jne    0x140a2baa5
0x00a2ba78: mov    r8,rdi
0x00a2ba7b: lea    rdx,[rip+0xca051e]        # 0x1416cbfa0 ; literal="CAN_GLAZE"
0x00a2ba82: mov    rcx,rbx
0x00a2ba85: call   0x14153ae14
0x00a2ba8a: test   eax,eax
0x00a2ba8c: jne    0x140a2baa5
0x00a2ba8e: mov    r8,rdi
0x00a2ba91: lea    rdx,[rip+0xca0518]        # 0x1416cbfb0 ; literal="glazable "
0x00a2ba98: mov    rcx,rsi
0x00a2ba9b: call   0x14006fa10
0x00a2baa0: jmp    0x140a2bcad
0x00a2baa5: lea    rcx,[r14+0x40]
0x00a2baa9: mov    rbx,QWORD PTR [rcx+0x10]
0x00a2baad: mov    rdi,QWORD PTR [rcx+0x18]
0x00a2bab1: cmp    rdi,0xf
0x00a2bab5: jbe    0x140a2baba
0x00a2bab7: mov    rcx,QWORD PTR [rcx]
0x00a2baba: cmp    rbx,0x3
0x00a2babe: jne    0x140a2baed
0x00a2bac0: mov    r8,rbx
0x00a2bac3: lea    rdx,[rip+0xca04f2]        # 0x1416cbfbc ; literal="FAT"
0x00a2baca: call   0x14153ae14
0x00a2bacf: test   eax,eax
0x00a2bad1: jne    0x140a2baed
0x00a2bad3: mov    r8d,0x4
0x00a2bad9: lea    rdx,[rip+0xca04e0]        # 0x1416cbfc0 ; literal="fat "
0x00a2bae0: mov    rcx,rsi
0x00a2bae3: call   0x14006fa10
0x00a2bae8: jmp    0x140a2bcad
0x00a2baed: lea    rcx,[r14+0x40]
0x00a2baf1: cmp    rdi,0xf
0x00a2baf5: jbe    0x140a2bafa
0x00a2baf7: mov    rcx,QWORD PTR [rcx]
0x00a2bafa: cmp    rbx,0x4
0x00a2bafe: jne    0x140a2bb2d
0x00a2bb00: mov    r8,rbx
0x00a2bb03: lea    rdx,[rip+0xbfdefa]        # 0x141629a04 ; literal="FLUX"
0x00a2bb0a: call   0x14153ae14
0x00a2bb0f: test   eax,eax
0x00a2bb11: jne    0x140a2bb2d
0x00a2bb13: mov    r8d,0x5
0x00a2bb19: lea    rdx,[rip+0xca03e0]        # 0x1416cbf00 ; literal="flux "
0x00a2bb20: mov    rcx,rsi
0x00a2bb23: call   0x14006fa10
0x00a2bb28: jmp    0x140a2bcad
0x00a2bb2d: lea    rcx,[r14+0x40]
0x00a2bb31: mov    rbx,QWORD PTR [rcx+0x10]
0x00a2bb35: mov    rdi,QWORD PTR [rcx+0x18]
0x00a2bb39: cmp    rdi,0xf
0x00a2bb3d: jbe    0x140a2bb42
0x00a2bb3f: mov    rcx,QWORD PTR [rcx]
0x00a2bb42: cmp    rbx,0x6
0x00a2bb46: jne    0x140a2bb75
0x00a2bb48: mov    r8,rbx
0x00a2bb4b: lea    rdx,[rip+0xca03b6]        # 0x1416cbf08 ; literal="GYPSUM"
0x00a2bb52: call   0x14153ae14
0x00a2bb57: test   eax,eax
0x00a2bb59: jne    0x140a2bb75
0x00a2bb5b: mov    r8d,0x7
0x00a2bb61: lea    rdx,[rip+0xca03a8]        # 0x1416cbf10 ; literal="gypsum "
0x00a2bb68: mov    rcx,rsi
0x00a2bb6b: call   0x14006fa10
0x00a2bb70: jmp    0x140a2bcad
0x00a2bb75: lea    rcx,[r14+0x40]
0x00a2bb79: cmp    rdi,0xf
0x00a2bb7d: jbe    0x140a2bb82
0x00a2bb7f: mov    rcx,QWORD PTR [rcx]
0x00a2bb82: cmp    rbx,0xb
0x00a2bb86: jne    0x140a2bbb5
0x00a2bb88: mov    r8,rbx
0x00a2bb8b: lea    rdx,[rip+0xc933c6]        # 0x1416bef58 ; literal="PAPER_PLANT"
0x00a2bb92: call   0x14153ae14
0x00a2bb97: test   eax,eax
0x00a2bb99: jne    0x140a2bbb5
0x00a2bb9b: mov    r8d,0xd
0x00a2bba1: lea    rdx,[rip+0xca0370]        # 0x1416cbf18 ; literal="paper-making "
0x00a2bba8: mov    rcx,rsi
0x00a2bbab: call   0x14006fa10
0x00a2bbb0: jmp    0x140a2bcad
0x00a2bbb5: lea    rcx,[r14+0x40]
0x00a2bbb9: mov    rbx,QWORD PTR [rcx+0x10]
0x00a2bbbd: mov    rdi,QWORD PTR [rcx+0x18]
0x00a2bbc1: cmp    rdi,0xf
0x00a2bbc5: jbe    0x140a2bbca
0x00a2bbc7: mov    rcx,QWORD PTR [rcx]
0x00a2bbca: cmp    rbx,0xc
0x00a2bbce: jne    0x140a2bbfd
0x00a2bbd0: mov    r8,rbx
0x00a2bbd3: lea    rdx,[rip+0xc9336e]        # 0x1416bef48 ; literal="PAPER_SLURRY"
0x00a2bbda: call   0x14153ae14
0x00a2bbdf: test   eax,eax
0x00a2bbe1: jne    0x140a2bbfd
0x00a2bbe3: mov    r8d,0xd
0x00a2bbe9: lea    rdx,[rip+0xca0338]        # 0x1416cbf28 ; literal="paper-slurry "
0x00a2bbf0: mov    rcx,rsi
0x00a2bbf3: call   0x14006fa10
0x00a2bbf8: jmp    0x140a2bcad
0x00a2bbfd: lea    rcx,[r14+0x40]
0x00a2bc01: cmp    rdi,0xf
0x00a2bc05: jbe    0x140a2bc0a
0x00a2bc07: mov    rcx,QWORD PTR [rcx]
0x00a2bc0a: cmp    rbx,0x6
0x00a2bc0e: jne    0x140a2bc3a
0x00a2bc10: mov    r8,rbx
0x00a2bc13: lea    rdx,[rip+0xca031e]        # 0x1416cbf38 ; literal="TALLOW"
0x00a2bc1a: call   0x14153ae14
0x00a2bc1f: test   eax,eax
0x00a2bc21: jne    0x140a2bc3a
0x00a2bc23: mov    r8d,0x7
0x00a2bc29: lea    rdx,[rip+0xca0310]        # 0x1416cbf40 ; literal="tallow "
0x00a2bc30: mov    rcx,rsi
0x00a2bc33: call   0x14006fa10
0x00a2bc38: jmp    0x140a2bcad
0x00a2bc3a: lea    rcx,[r14+0x40]
0x00a2bc3e: mov    r8,QWORD PTR [rcx+0x10]
0x00a2bc42: cmp    QWORD PTR [rcx+0x18],0xf
0x00a2bc47: jbe    0x140a2bc4c
0x00a2bc49: mov    rcx,QWORD PTR [rcx]
0x00a2bc4c: cmp    r8,0x3
0x00a2bc50: jne    0x140a2bc79
0x00a2bc52: lea    rdx,[rip+0xc26cef]        # 0x141652948 ; literal="WAX"
0x00a2bc59: call   0x14153ae14
0x00a2bc5e: test   eax,eax
0x00a2bc60: jne    0x140a2bc79
0x00a2bc62: mov    r8d,0x4
0x00a2bc68: lea    rdx,[rip+0xca02d9]        # 0x1416cbf48 ; literal="wax "
0x00a2bc6f: mov    rcx,rsi
0x00a2bc72: call   0x14006fa10
0x00a2bc77: jmp    0x140a2bcad
0x00a2bc79: lea    rdx,[r14+0x40]
0x00a2bc7d: mov    r8b,0x20 ; inline_fragment=" "
0x00a2bc80: lea    rcx,[rbp-0x21]
0x00a2bc84: call   0x140724a30
0x00a2bc89: nop
0x00a2bc8a: mov    r8,QWORD PTR [rax+0x10]
0x00a2bc8e: cmp    QWORD PTR [rax+0x18],0xf
0x00a2bc93: jbe    0x140a2bc98
0x00a2bc95: mov    rax,QWORD PTR [rax]
0x00a2bc98: mov    rdx,rax
0x00a2bc9b: mov    rcx,rsi
0x00a2bc9e: call   0x14006fa10
0x00a2bca3: nop
0x00a2bca4: lea    rcx,[rbp-0x21]
0x00a2bca8: call   0x14006f850
0x00a2bcad: cmp    QWORD PTR [r14+0x70],0x0
0x00a2bcb2: je     0x140a2c0b4
0x00a2bcb8: lea    rbx,[r14+0x60]
0x00a2bcbc: mov    rdi,QWORD PTR [rbx+0x10]
0x00a2bcc0: mov    rcx,rbx
0x00a2bcc3: mov    r15,QWORD PTR [rbx+0x18]
0x00a2bcc7: cmp    r15,0xf
0x00a2bccb: jbe    0x140a2bcd0
0x00a2bccd: mov    rcx,QWORD PTR [rbx]
0x00a2bcd0: cmp    rdi,0x8
0x00a2bcd4: jne    0x140a2bd03
0x00a2bcd6: mov    r8,rdi
0x00a2bcd9: lea    rdx,[rip+0xca01a0]        # 0x1416cbe80 ; literal="BAG_ITEM"
0x00a2bce0: call   0x14153ae14
0x00a2bce5: test   eax,eax
0x00a2bce7: jne    0x140a2bd03
0x00a2bce9: mov    r8d,0x10
0x00a2bcef: lea    rdx,[rip+0xca019a]        # 0x1416cbe90 ; literal="bag-processable "
0x00a2bcf6: mov    rcx,rsi
0x00a2bcf9: call   0x14006fa10
0x00a2bcfe: jmp    0x140a2c0b4
0x00a2bd03: cmp    r15,0xf
0x00a2bd07: jbe    0x140a2bd0c
0x00a2bd09: mov    rbx,QWORD PTR [rbx]
0x00a2bd0c: cmp    rdi,0x9
0x00a2bd10: jne    0x140a2bd42
0x00a2bd12: mov    r8,rdi
0x00a2bd15: lea    rdx,[rip+0xc114b4]        # 0x14163d1d0 ; literal="DRINK_MAT"
0x00a2bd1c: mov    rcx,rbx
0x00a2bd1f: call   0x14153ae14
0x00a2bd24: test   eax,eax
0x00a2bd26: jne    0x140a2bd42
0x00a2bd28: mov    r8d,0xc
0x00a2bd2e: lea    rdx,[rip+0xca0173]        # 0x1416cbea8 ; literal="fermentable "
0x00a2bd35: mov    rcx,rsi
0x00a2bd38: call   0x14006fa10
0x00a2bd3d: jmp    0x140a2c0b4
0x00a2bd42: lea    rcx,[r14+0x60]
0x00a2bd46: mov    rbx,QWORD PTR [rcx+0x10]
0x00a2bd4a: mov    rdi,QWORD PTR [rcx+0x18]
0x00a2bd4e: cmp    rdi,0xf
0x00a2bd52: jbe    0x140a2bd57
0x00a2bd54: mov    rcx,QWORD PTR [rcx]
0x00a2bd57: cmp    rbx,0x9
0x00a2bd5b: jne    0x140a2bd8a
0x00a2bd5d: mov    r8,rbx
0x00a2bd60: lea    rdx,[rip+0xbfdcf9]        # 0x141629a60 ; literal="FIRED_MAT"
0x00a2bd67: call   0x14153ae14
0x00a2bd6c: test   eax,eax
0x00a2bd6e: jne    0x140a2bd8a
0x00a2bd70: mov    r8d,0x5
0x00a2bd76: lea    rdx,[rip+0xca013b]        # 0x1416cbeb8 ; literal="clay "
0x00a2bd7d: mov    rcx,rsi
0x00a2bd80: call   0x14006fa10
0x00a2bd85: jmp    0x140a2c0b4
0x00a2bd8a: lea    rcx,[r14+0x60]
0x00a2bd8e: cmp    rdi,0xf
0x00a2bd92: jbe    0x140a2bd97
0x00a2bd94: mov    rcx,QWORD PTR [rcx]
0x00a2bd97: cmp    rbx,0x9
0x00a2bd9b: jne    0x140a2bdca
0x00a2bd9d: mov    r8,rbx
0x00a2bda0: lea    rdx,[rip+0xca0119]        # 0x1416cbec0 ; literal="GLAZE_MAT"
0x00a2bda7: call   0x14153ae14
0x00a2bdac: test   eax,eax
0x00a2bdae: jne    0x140a2bdca
0x00a2bdb0: mov    r8d,0x6
0x00a2bdb6: lea    rdx,[rip+0xca010f]        # 0x1416cbecc ; literal="glaze "
0x00a2bdbd: mov    rcx,rsi
0x00a2bdc0: call   0x14006fa10
0x00a2bdc5: jmp    0x140a2c0b4
0x00a2bdca: lea    rcx,[r14+0x60]
0x00a2bdce: mov    rbx,QWORD PTR [rcx+0x10]
0x00a2bdd2: mov    rdi,QWORD PTR [rcx+0x18]
0x00a2bdd6: cmp    rdi,0xf
0x00a2bdda: jbe    0x140a2bddf
0x00a2bddc: mov    rcx,QWORD PTR [rcx]
0x00a2bddf: cmp    rbx,0x13
0x00a2bde3: jne    0x140a2be12
0x00a2bde5: mov    r8,rbx
0x00a2bde8: lea    rdx,[rip+0xca00e9]        # 0x1416cbed8 ; literal="HONEYCOMB_PRESS_MAT"
0x00a2bdef: call   0x14153ae14
0x00a2bdf4: test   eax,eax
0x00a2bdf6: jne    0x140a2be12
0x00a2bdf8: mov    r8d,0xe
0x00a2bdfe: lea    rdx,[rip+0xca00eb]        # 0x1416cbef0 ; literal="honey-bearing "
0x00a2be05: mov    rcx,rsi
0x00a2be08: call   0x14006fa10
0x00a2be0d: jmp    0x140a2c0b4
0x00a2be12: lea    rcx,[r14+0x60]
0x00a2be16: cmp    rdi,0xf
0x00a2be1a: jbe    0x140a2be1f
0x00a2be1c: mov    rcx,QWORD PTR [rcx]
0x00a2be1f: cmp    rbx,0xd
0x00a2be23: jne    0x140a2be52
0x00a2be25: mov    r8,rbx
0x00a2be28: lea    rdx,[rip+0xc9ffb9]        # 0x1416cbde8 ; literal="PARCHMENT_MAT"
0x00a2be2f: call   0x14153ae14
0x00a2be34: test   eax,eax
0x00a2be36: jne    0x140a2be52
0x00a2be38: mov    r8d,0x14
0x00a2be3e: lea    rdx,[rip+0xc9ffb3]        # 0x1416cbdf8 ; literal="parchment-producing "
0x00a2be45: mov    rcx,rsi
0x00a2be48: call   0x14006fa10
0x00a2be4d: jmp    0x140a2c0b4
0x00a2be52: lea    rcx,[r14+0x60]
0x00a2be56: mov    rbx,QWORD PTR [rcx+0x10]
0x00a2be5a: mov    rdi,QWORD PTR [rcx+0x18]
0x00a2be5e: cmp    rdi,0xf
0x00a2be62: jbe    0x140a2be67
0x00a2be64: mov    rcx,QWORD PTR [rcx]
0x00a2be67: cmp    rbx,0x10
0x00a2be6b: jne    0x140a2be9a
0x00a2be6d: mov    r8,rbx
0x00a2be70: lea    rdx,[rip+0xc9ff99]        # 0x1416cbe10 ; literal="PRESS_LIQUID_MAT"
0x00a2be77: call   0x14153ae14
0x00a2be7c: test   eax,eax
0x00a2be7e: jne    0x140a2be9a
0x00a2be80: mov    r8d,0xc
0x00a2be86: lea    rdx,[rip+0xc9ff9b]        # 0x1416cbe28 ; literal="oil-bearing "
0x00a2be8d: mov    rcx,rsi
0x00a2be90: call   0x14006fa10
0x00a2be95: jmp    0x140a2c0b4
0x00a2be9a: lea    rcx,[r14+0x60]
0x00a2be9e: cmp    rdi,0xf
0x00a2bea2: jbe    0x140a2bea7
0x00a2bea4: mov    rcx,QWORD PTR [rcx]
0x00a2bea7: cmp    rbx,0xf
0x00a2beab: jne    0x140a2beda
0x00a2bead: mov    r8,rbx
0x00a2beb0: lea    rdx,[rip+0xc9ff81]        # 0x1416cbe38 ; literal="PRESS_PAPER_MAT"
0x00a2beb7: call   0x14153ae14
0x00a2bebc: test   eax,eax
0x00a2bebe: jne    0x140a2beda
0x00a2bec0: mov    r8d,0x11
0x00a2bec6: lea    rdx,[rip+0xc9ff7b]        # 0x1416cbe48 ; literal="paper-slurryable "
0x00a2becd: mov    rcx,rsi
0x00a2bed0: call   0x14006fa10
0x00a2bed5: jmp    0x140a2c0b4
0x00a2beda: lea    rcx,[r14+0x60]
0x00a2bede: mov    rbx,QWORD PTR [rcx+0x10]
0x00a2bee2: mov    rdi,QWORD PTR [rcx+0x18]
0x00a2bee6: cmp    rdi,0xf
0x00a2beea: jbe    0x140a2beef
0x00a2beec: mov    rcx,QWORD PTR [rcx]
0x00a2beef: cmp    rbx,0xa
0x00a2bef3: jne    0x140a2bf22
0x00a2bef5: mov    r8,rbx
0x00a2bef8: lea    rdx,[rip+0xc9ff61]        # 0x1416cbe60 ; literal="RENDER_MAT"
0x00a2beff: call   0x14153ae14
0x00a2bf04: test   eax,eax
0x00a2bf06: jne    0x140a2bf22
0x00a2bf08: mov    r8d,0xb
0x00a2bf0e: lea    rdx,[rip+0xc9ff5b]        # 0x1416cbe70 ; literal="renderable "
0x00a2bf15: mov    rcx,rsi
0x00a2bf18: call   0x14006fa10
0x00a2bf1d: jmp    0x140a2c0b4
0x00a2bf22: lea    rcx,[r14+0x60]
0x00a2bf26: cmp    rdi,0xf
0x00a2bf2a: jbe    0x140a2bf2f
0x00a2bf2c: mov    rcx,QWORD PTR [rcx]
0x00a2bf2f: cmp    rbx,0x8
0x00a2bf33: jne    0x140a2bf62
0x00a2bf35: mov    r8,rbx
0x00a2bf38: lea    rdx,[rip+0xc9fe39]        # 0x1416cbd78 ; literal="SOAP_MAT"
0x00a2bf3f: call   0x14153ae14
0x00a2bf44: test   eax,eax
0x00a2bf46: jne    0x140a2bf62
0x00a2bf48: mov    r8d,0x6
0x00a2bf4e: lea    rdx,[rip+0xc9fe2f]        # 0x1416cbd84 ; literal="fatty "
0x00a2bf55: mov    rcx,rsi
0x00a2bf58: call   0x14006fa10
0x00a2bf5d: jmp    0x140a2c0b4
0x00a2bf62: lea    rcx,[r14+0x60]
0x00a2bf66: mov    rdi,QWORD PTR [rcx+0x10]
0x00a2bf6a: mov    rbx,QWORD PTR [rcx+0x18]
0x00a2bf6e: cmp    rbx,0xf
0x00a2bf72: jbe    0x140a2bf77
0x00a2bf74: mov    rcx,QWORD PTR [rcx]
0x00a2bf77: cmp    rdi,0x7
0x00a2bf7b: jne    0x140a2bfaa
0x00a2bf7d: mov    r8,rdi
0x00a2bf80: lea    rdx,[rip+0xc25c91]        # 0x141651c18 ; literal="TAN_MAT"
0x00a2bf87: call   0x14153ae14
0x00a2bf8c: test   eax,eax
0x00a2bf8e: jne    0x140a2bfaa
0x00a2bf90: mov    r8d,0x9
0x00a2bf96: lea    rdx,[rip+0xc9fdf3]        # 0x1416cbd90 ; literal="tannable "
0x00a2bf9d: mov    rcx,rsi
0x00a2bfa0: call   0x14006fa10
0x00a2bfa5: jmp    0x140a2c0b4
0x00a2bfaa: lea    r13,[r14+0x60]
0x00a2bfae: mov    rax,r12
0x00a2bfb1: sub    rax,rdi
0x00a2bfb4: cmp    rax,0xb
0x00a2bfb8: jb     0x140a2c52a
0x00a2bfbe: cmp    rbx,0xf
0x00a2bfc2: jbe    0x140a2bfc8
0x00a2bfc4: mov    r13,QWORD PTR [r13+0x0]
0x00a2bfc8: xorps  xmm0,xmm0
0x00a2bfcb: movups XMMWORD PTR [rbp-0x21],xmm0
0x00a2bfcf: lea    r12,[rdi+0xb]
0x00a2bfd3: mov    ebx,0xf
0x00a2bfd8: lea    r15,[rbp-0x21]
0x00a2bfdc: cmp    r12,rbx
0x00a2bfdf: jbe    0x140a2c019
0x00a2bfe1: mov    rbx,r12
0x00a2bfe4: or     rbx,0xf
0x00a2bfe8: movabs rax,0x7fffffffffffffff
0x00a2bff2: cmp    rbx,rax
0x00a2bff5: jbe    0x140a2bffc
0x00a2bff7: mov    rbx,rax
0x00a2bffa: jmp    0x140a2c009
0x00a2bffc: cmp    rbx,0x16
0x00a2c000: mov    eax,0x16
0x00a2c005: cmovb  rbx,rax
0x00a2c009: lea    rcx,[rbx+0x1]
0x00a2c00d: call   0x1400707d0
0x00a2c012: mov    r15,rax
0x00a2c015: mov    QWORD PTR [rbp-0x21],rax
0x00a2c019: mov    QWORD PTR [rbp-0x11],r12
0x00a2c01d: mov    QWORD PTR [rbp-0x9],rbx
0x00a2c021: mov    r8,rdi
0x00a2c024: mov    rdx,r13
0x00a2c027: mov    rcx,r15
0x00a2c02a: call   0x14153aa78
0x00a2c02f: movsd  xmm0,QWORD PTR [rip+0xc9fd69]        # 0x1416cbda0 ; literal="-producing "
0x00a2c037: movsd  QWORD PTR [r15+rdi*1],xmm0
0x00a2c03d: movzx  eax,WORD PTR [rip+0xc9fd64]        # 0x1416cbda8 ; literal="ng "
0x00a2c044: mov    WORD PTR [r15+rdi*1+0x8],ax
0x00a2c04a: movzx  eax,BYTE PTR [rip+0xc9fd59]        # 0x1416cbdaa ; literal=" "
0x00a2c051: mov    BYTE PTR [r15+rdi*1+0xa],al
0x00a2c056: mov    BYTE PTR [r15+r12*1],0x0
0x00a2c05b: lea    rdx,[rbp-0x21]
0x00a2c05f: cmp    QWORD PTR [rbp-0x9],0xf
0x00a2c064: cmova  rdx,QWORD PTR [rbp-0x21]
0x00a2c069: mov    r8,QWORD PTR [rbp-0x11]
0x00a2c06d: mov    rcx,rsi
0x00a2c070: call   0x14006fa10
0x00a2c075: nop
0x00a2c076: mov    rdx,QWORD PTR [rbp-0x9]
0x00a2c07a: cmp    rdx,0xf
0x00a2c07e: jbe    0x140a2c0b4
0x00a2c080: inc    rdx
0x00a2c083: mov    rcx,QWORD PTR [rbp-0x21]
0x00a2c087: mov    rax,rcx
0x00a2c08a: cmp    rdx,0x1000
0x00a2c091: jb     0x140a2c0af
0x00a2c093: add    rdx,0x27
0x00a2c097: mov    rcx,QWORD PTR [rcx-0x8]
0x00a2c09b: sub    rax,rcx
0x00a2c09e: add    rax,0xfffffffffffffff8
0x00a2c0a2: cmp    rax,0x1f
0x00a2c0a6: jbe    0x140a2c0af
0x00a2c0a8: call   QWORD PTR [rip+0xbb9a7a]        # 0x1415e5b28
0x00a2c0ae: int3
0x00a2c0af: call   0x141539680
0x00a2c0b4: mov    r12d,0x16
0x00a2c0ba: movsxd rax,DWORD PTR [r14+0x8c]
0x00a2c0c1: test   eax,eax
0x00a2c0c3: js     0x140a2c145
0x00a2c0c9: mov    rcx,rax
0x00a2c0cc: mov    rax,QWORD PTR [rip+0x1acb19d]        # 0x1424f7270
0x00a2c0d3: mov    rdx,QWORD PTR [rip+0x1acb18e]        # 0x1424f7268
0x00a2c0da: sub    rax,rdx
0x00a2c0dd: sar    rax,0x3
0x00a2c0e1: cmp    rcx,rax
0x00a2c0e4: jae    0x140a2c145
0x00a2c0e6: mov    r15,QWORD PTR [rdx+rcx*8]
0x00a2c0ea: test   r15,r15
0x00a2c0ed: je     0x140a2c145
0x00a2c0ef: mov    rbx,QWORD PTR [r14+0x90]
0x00a2c0f6: mov    rdi,QWORD PTR [r14+0x98]
0x00a2c0fd: nop    DWORD PTR [rax]
0x00a2c100: cmp    rbx,rdi
0x00a2c103: jae    0x140a2c145
0x00a2c105: movsxd rcx,DWORD PTR [rbx]
0x00a2c108: mov    rax,QWORD PTR [r15+0x50]
0x00a2c10c: mov    rdx,QWORD PTR [rax+rcx*8]
0x00a2c110: add    rdx,0x8
0x00a2c114: mov    r8,QWORD PTR [rdx+0x10]
0x00a2c118: cmp    QWORD PTR [rdx+0x18],0xf
0x00a2c11d: jbe    0x140a2c122
0x00a2c11f: mov    rdx,QWORD PTR [rdx]
0x00a2c122: mov    rcx,rsi
0x00a2c125: call   0x14006fa10
0x00a2c12a: mov    r8d,0xc
0x00a2c130: lea    rdx,[rip+0xc9fc79]        # 0x1416cbdb0 ; literal="-containing "
0x00a2c137: mov    rcx,rsi
0x00a2c13a: call   0x14006fa10
0x00a2c13f: add    rbx,0x4
0x00a2c143: jmp    0x140a2c100
0x00a2c145: mov    ecx,DWORD PTR [r14+0xac]
0x00a2c14c: test   ecx,ecx
0x00a2c14e: js     0x140a2c1c7
0x00a2c150: mov    rax,QWORD PTR [rip+0x1acaf69]        # 0x1424f70c0
0x00a2c157: sub    rax,QWORD PTR [rip+0x1acaf5a]        # 0x1424f70b8
0x00a2c15e: sar    rax,0x3
0x00a2c162: cmp    ecx,eax
0x00a2c164: jge    0x140a2c1c7
0x00a2c166: test   BYTE PTR [r14+0x1c],0x1
0x00a2c16b: jne    0x140a2c1c7
0x00a2c16d: mov    r8d,0x6
0x00a2c173: lea    rdx,[rip+0xc9fc46]        # 0x1416cbdc0 ; literal="color "
0x00a2c17a: mov    rcx,rsi
0x00a2c17d: call   0x14006fa10
0x00a2c182: movsxd rcx,DWORD PTR [r14+0xac]
0x00a2c189: mov    rax,QWORD PTR [rip+0x1acaf28]        # 0x1424f70b8
0x00a2c190: mov    rdx,QWORD PTR [rax+rcx*8]
0x00a2c194: add    rdx,0x50
0x00a2c198: mov    r8,QWORD PTR [rdx+0x10]
0x00a2c19c: cmp    QWORD PTR [rdx+0x18],0xf
0x00a2c1a1: jbe    0x140a2c1a6
0x00a2c1a3: mov    rdx,QWORD PTR [rdx]
0x00a2c1a6: mov    rcx,rsi
0x00a2c1a9: call   0x14006fa10
0x00a2c1ae: mov    ebx,0x1
0x00a2c1b3: mov    r8d,ebx
0x00a2c1b6: lea    rdx,[rip+0xbbc57f]        # 0x1415e873c ; literal=" "
0x00a2c1bd: mov    rcx,rsi
0x00a2c1c0: call   0x14006fa10
0x00a2c1c5: jmp    0x140a2c1cc
0x00a2c1c7: mov    ebx,0x1
0x00a2c1cc: movsx  rax,WORD PTR [r14+0xaa]
0x00a2c1d4: cmp    eax,0x19
0x00a2c1d7: ja     0x140a2c3a3
0x00a2c1dd: lea    rdx,[rip+0xffffffffff5d3e1c]        # 0x140000000
0x00a2c1e4: mov    ecx,DWORD PTR [rdx+rax*4+0xa2c5a4]
0x00a2c1eb: add    rcx,rdx
0x00a2c1ee: jmp    rcx
0x00a2c1f0: mov    r8d,0xe
0x00a2c1f6: lea    rdx,[rip+0xc9fbcb]        # 0x1416cbdc8 ; literal="liquid cooking"
0x00a2c1fd: jmp    0x140a2c39b
0x00a2c202: mov    r8d,0xc
0x00a2c208: lea    rdx,[rip+0xc9fbc9]        # 0x1416cbdd8 ; literal="liquid scoop"
0x00a2c20f: jmp    0x140a2c39b
0x00a2c214: mov    r8d,0x1a
0x00a2c21a: lea    rdx,[rip+0xc9fabf]        # 0x1416cbce0 ; literal="powder grinding receptacle"
0x00a2c221: jmp    0x140a2c39b
0x00a2c226: lea    rdx,[rip+0xc9fad3]        # 0x1416cbd00 ; literal="powder grinding"
0x00a2c22d: jmp    0x140a2c395
0x00a2c232: mov    r8d,0xc
0x00a2c238: lea    rdx,[rip+0xc9fad1]        # 0x1416cbd10 ; literal="meat carving"
0x00a2c23f: jmp    0x140a2c39b
0x00a2c244: mov    r8d,0xb
0x00a2c24a: lea    rdx,[rip+0xc9facf]        # 0x1416cbd20 ; literal="meat boning"
0x00a2c251: jmp    0x140a2c39b
0x00a2c256: mov    r8d,0xc
0x00a2c25c: lea    rdx,[rip+0xc9facd]        # 0x1416cbd30 ; literal="meat slicing"
0x00a2c263: jmp    0x140a2c39b
0x00a2c268: mov    r8d,0xd
0x00a2c26e: lea    rdx,[rip+0xc9facb]        # 0x1416cbd40 ; literal="meat cleaving"
0x00a2c275: jmp    0x140a2c39b
0x00a2c27a: mov    r8d,0x13
0x00a2c280: lea    rdx,[rip+0xc9fac9]        # 0x1416cbd50 ; literal="meat-carving holder"
0x00a2c287: jmp    0x140a2c39b
0x00a2c28c: mov    r8d,0xe
0x00a2c292: lea    rdx,[rip+0xc9facf]        # 0x1416cbd68 ; literal="meal container"
0x00a2c299: jmp    0x140a2c39b
0x00a2c29e: mov    r8d,0x10
0x00a2c2a4: lea    rdx,[rip+0xc9f9a5]        # 0x1416cbc50 ; literal="liquid container"
0x00a2c2ab: jmp    0x140a2c39b
0x00a2c2b0: mov    r8d,0xc
0x00a2c2b6: lea    rdx,[rip+0xc9f9ab]        # 0x1416cbc68 ; literal="food storage"
0x00a2c2bd: jmp    0x140a2c39b
0x00a2c2c2: mov    r8d,0x4
0x00a2c2c8: lea    rdx,[rip+0xc9f9a9]        # 0x1416cbc78 ; literal="hive"
0x00a2c2cf: jmp    0x140a2c39b
0x00a2c2d4: mov    r8d,0x8
0x00a2c2da: lea    rdx,[rip+0xc9f99f]        # 0x1416cbc80 ; literal="nest box"
0x00a2c2e1: jmp    0x140a2c39b
0x00a2c2e6: mov    r8,r12
0x00a2c2e9: lea    rdx,[rip+0xc9f9a0]        # 0x1416cbc90 ; literal="small object container"
0x00a2c2f0: jmp    0x140a2c39b
0x00a2c2f5: mov    r8d,0xa
0x00a2c2fb: lea    rdx,[rip+0xc9f9a6]        # 0x1416cbca8 ; literal="track cart"
0x00a2c302: jmp    0x140a2c39b
0x00a2c307: mov    r8d,0x13
0x00a2c30d: lea    rdx,[rip+0xc9f9a4]        # 0x1416cbcb8 ; literal="heavy object hauler"
0x00a2c314: jmp    0x140a2c39b
0x00a2c319: mov    r8d,0xe
0x00a2c31f: lea    rdx,[rip+0xc9f9aa]        # 0x1416cbcd0 ; literal="stand-and-work"
0x00a2c326: jmp    0x140a2c39b
0x00a2c328: mov    r8d,0xc
0x00a2c32e: lea    rdx,[rip+0xc9fd23]        # 0x1416cc058 ; literal="sheet roller"
0x00a2c335: jmp    0x140a2c39b
0x00a2c337: mov    r8,r12
0x00a2c33a: lea    rdx,[rip+0xc9fd27]        # 0x1416cc068 ; literal="folded sheet protector"
0x00a2c341: jmp    0x140a2c39b
0x00a2c343: mov    r8d,0x11
0x00a2c349: lea    rdx,[rip+0xc9fd30]        # 0x1416cc080 ; literal="writing container"
0x00a2c350: jmp    0x140a2c39b
0x00a2c352: mov    r8d,0x8
0x00a2c358: lea    rdx,[rip+0xc9fd39]        # 0x1416cc098 ; literal="bookcase"
0x00a2c35f: jmp    0x140a2c39b
0x00a2c361: mov    r8d,0xe
0x00a2c367: lea    rdx,[rip+0xc9fd3a]        # 0x1416cc0a8 ; literal="display object"
0x00a2c36e: jmp    0x140a2c39b
0x00a2c370: mov    r8d,0x12
0x00a2c376: lea    rdx,[rip+0xc9fd3b]        # 0x1416cc0b8 ; literal="offering placement"
0x00a2c37d: jmp    0x140a2c39b
0x00a2c37f: mov    r8d,0xa
0x00a2c385: lea    rdx,[rip+0xc9fd44]        # 0x1416cc0d0 ; literal="divination"
0x00a2c38c: jmp    0x140a2c39b
0x00a2c38e: lea    rdx,[rip+0xc9fd4b]        # 0x1416cc0e0 ; literal="games of chance"
0x00a2c395: mov    r8d,0xf
0x00a2c39b: mov    rcx,rsi
0x00a2c39e: call   0x14006f8d0
0x00a2c3a3: movzx  eax,WORD PTR [r14+0xaa]
0x00a2c3ab: test   DWORD PTR [r14+0x1c],0x2000000
0x00a2c3b3: je     0x140a2c3e7
0x00a2c3b5: cmp    ax,0xffff
0x00a2c3b9: je     0x140a2c3cd
0x00a2c3bb: mov    r8,rbx
0x00a2c3be: lea    rdx,[rip+0xbbc377]        # 0x1415e873c ; literal=" "
0x00a2c3c5: mov    rcx,rsi
0x00a2c3c8: call   0x14006fa10
0x00a2c3cd: mov    r8d,0x9
0x00a2c3d3: lea    rdx,[rip+0xc54c76]        # 0x141681050 ; literal="body part"
0x00a2c3da: mov    rcx,rsi
0x00a2c3dd: call   0x14006fa10
0x00a2c3e2: jmp    0x140a2c4e4
0x00a2c3e7: cmp    ax,0xffff
0x00a2c3eb: je     0x140a2c421
0x00a2c3ed: cmp    WORD PTR [r14],0x56
0x00a2c3f2: jne    0x140a2c40f
0x00a2c3f4: cmp    WORD PTR [r14+0x2],0xffff
0x00a2c3fa: jne    0x140a2c40f
0x00a2c3fc: cmp    WORD PTR [r14+0x4],0xffff
0x00a2c402: jne    0x140a2c40f
0x00a2c404: cmp    DWORD PTR [r14+0x8],0xffffffff
0x00a2c409: je     0x140a2c4e4
0x00a2c40f: mov    r8,rbx
0x00a2c412: lea    rdx,[rip+0xbbc323]        # 0x1415e873c ; literal=" "
0x00a2c419: mov    rcx,rsi
0x00a2c41c: call   0x14006fa10
0x00a2c421: xorps  xmm0,xmm0
0x00a2c424: movups XMMWORD PTR [rbp-0x21],xmm0
0x00a2c428: xor    ecx,ecx
0x00a2c42a: mov    QWORD PTR [rbp-0x11],rcx
0x00a2c42e: mov    QWORD PTR [rbp-0x9],0xf
0x00a2c436: mov    BYTE PTR [rbp-0x21],cl
0x00a2c439: mov    eax,0xffffffff
0x00a2c43e: cmp    WORD PTR [rbp-0x29],0x1
0x00a2c443: cmovne ebx,eax
0x00a2c446: mov    DWORD PTR [rsp+0x68],ecx
0x00a2c44a: mov    DWORD PTR [rsp+0x60],ecx
0x00a2c44e: mov    BYTE PTR [rsp+0x58],0x1
0x00a2c453: mov    DWORD PTR [rsp+0x50],eax
0x00a2c457: mov    DWORD PTR [rsp+0x48],eax
0x00a2c45b: mov    QWORD PTR [rsp+0x40],rcx
0x00a2c460: mov    BYTE PTR [rsp+0x38],cl
0x00a2c464: mov    DWORD PTR [rsp+0x30],ecx
0x00a2c468: mov    DWORD PTR [rsp+0x28],ebx
0x00a2c46c: mov    eax,DWORD PTR [r14+0x8]
0x00a2c470: mov    DWORD PTR [rsp+0x20],eax
0x00a2c474: movzx  r9d,WORD PTR [r14+0x4]
0x00a2c479: movzx  r8d,WORD PTR [r14+0x2]
0x00a2c47e: movzx  edx,WORD PTR [r14]
0x00a2c482: lea    rcx,[rbp-0x21]
0x00a2c486: call   0x140a82c10
0x00a2c48b: lea    rdx,[rbp-0x21]
0x00a2c48f: cmp    QWORD PTR [rbp-0x9],0xf
0x00a2c494: cmova  rdx,QWORD PTR [rbp-0x21]
0x00a2c499: mov    r8,QWORD PTR [rbp-0x11]
0x00a2c49d: mov    rcx,rsi
0x00a2c4a0: call   0x14006fa10
0x00a2c4a5: nop
0x00a2c4a6: mov    rdx,QWORD PTR [rbp-0x9]
0x00a2c4aa: cmp    rdx,0xf
0x00a2c4ae: jbe    0x140a2c4e4
0x00a2c4b0: inc    rdx
0x00a2c4b3: mov    rcx,QWORD PTR [rbp-0x21]
0x00a2c4b7: mov    rax,rcx
0x00a2c4ba: cmp    rdx,0x1000
0x00a2c4c1: jb     0x140a2c4df
0x00a2c4c3: add    rdx,0x27
0x00a2c4c7: mov    rcx,QWORD PTR [rcx-0x8]
0x00a2c4cb: sub    rax,rcx
0x00a2c4ce: add    rax,0xfffffffffffffff8
0x00a2c4d2: cmp    rax,0x1f
0x00a2c4d6: jbe    0x140a2c4df
0x00a2c4d8: call   QWORD PTR [rip+0xbb964a]        # 0x1415e5b28
0x00a2c4de: int3
0x00a2c4df: call   0x141539680
0x00a2c4e4: test   DWORD PTR [r14+0xc],0x40000000
0x00a2c4ec: je     0x140a2c503
0x00a2c4ee: mov    r8d,0x11
0x00a2c4f4: lea    rdx,[rip+0xc9fb25]        # 0x1416cc020 ; literal=" that isn't a bin"
0x00a2c4fb: mov    rcx,rsi
0x00a2c4fe: call   0x14006fa10
0x00a2c503: mov    rcx,QWORD PTR [rbp+0x1f]
0x00a2c507: xor    rcx,rsp
0x00a2c50a: call   0x141539660
0x00a2c50f: mov    rbx,QWORD PTR [rsp+0x118]
0x00a2c517: add    rsp,0xc0
0x00a2c51e: pop    r15
0x00a2c520: pop    r14
0x00a2c522: pop    r13
0x00a2c524: pop    r12
0x00a2c526: pop    rdi
0x00a2c527: pop    rsi
0x00a2c528: pop    rbp
0x00a2c529: ret
0x00a2c52a: call   0x140065890
0x00a2c52f: nop
0x00a2c530: call   0x140065890
0x00a2c535: nop
0x00a2c536: xchg   ax,ax
0x00a2c538: gs scas al,BYTE PTR [rdi]
0x00a2c53a: movabs ds:0xa2ae4b00a2ae3100,al
0x00a2c543: add    BYTE PTR [rbp-0x52],bh
0x00a2c546: movabs ds:0x303030303030000,al
0x00a2c54f: add    eax,DWORD PTR [rbx]
0x00a2c551: add    eax,DWORD PTR [rbx]
0x00a2c553: add    eax,DWORD PTR [rbx]
0x00a2c555: add    eax,DWORD PTR [rbx]
0x00a2c557: add    eax,DWORD PTR [rbx]
0x00a2c559: add    eax,DWORD PTR [rbx]
0x00a2c55b: add    eax,DWORD PTR [rbx]
0x00a2c55d: add    eax,DWORD PTR [rbx]
0x00a2c55f: add    eax,DWORD PTR [rbx]
0x00a2c561: add    eax,DWORD PTR [rbx]
0x00a2c563: add    eax,DWORD PTR [rbx]
0x00a2c565: add    eax,DWORD PTR [rbx]
0x00a2c567: add    eax,DWORD PTR [rbx]
0x00a2c569: add    eax,DWORD PTR [rbx]
0x00a2c56b: add    eax,DWORD PTR [rbx]
0x00a2c56d: add    eax,DWORD PTR [rbx]
0x00a2c56f: add    eax,DWORD PTR [rbx]
0x00a2c571: add    eax,DWORD PTR [rbx]
0x00a2c573: add    eax,DWORD PTR [rbx]
0x00a2c575: add    eax,DWORD PTR [rbx]
0x00a2c577: add    eax,DWORD PTR [rbx]
0x00a2c579: add    eax,DWORD PTR [rbx]
0x00a2c57b: add    eax,DWORD PTR [rbx]
0x00a2c57d: add    eax,DWORD PTR [rbx]
0x00a2c57f: add    eax,DWORD PTR [rbx]
0x00a2c581: add    DWORD PTR [rdx],eax
0x00a2c583: add    eax,DWORD PTR [rbx]
0x00a2c585: add    eax,DWORD PTR [rbx]
0x00a2c587: add    eax,DWORD PTR [rbx]
0x00a2c589: add    eax,DWORD PTR [rbx]
0x00a2c58b: add    eax,DWORD PTR [rbx]
0x00a2c58d: add    BYTE PTR [rax],al
0x00a2c58f: add    eax,DWORD PTR [rbx]
0x00a2c591: add    BYTE PTR [rbx],al
0x00a2c593: add    eax,DWORD PTR [rbx]
0x00a2c595: add    eax,DWORD PTR [rbx]
0x00a2c597: add    eax,DWORD PTR [rbx]
0x00a2c599: add    eax,DWORD PTR [rbx]
0x00a2c59b: add    eax,DWORD PTR [rbx]
0x00a2c59d: add    eax,DWORD PTR [rbx]
0x00a2c59f: add    eax,DWORD PTR [rbx]
0x00a2c5a1: add    eax,DWORD PTR [rdx]
0x00a2c5a3: nop
0x00a2c5a4: lock shl DWORD PTR [rdx-0x5d3dfe00],0x0
0x00a2c5ac: adc    al,0xc2
0x00a2c5ae: movabs ds:0xa2c23200a2c22600,al
0x00a2c5b7: add    BYTE PTR [rdx+rax*8-0x5e],al
0x00a2c5bb: add    BYTE PTR [rsi-0x3e],dl
0x00a2c5be: movabs ds:0xa2c27a00a2c26800,al
0x00a2c5c7: add    BYTE PTR [rdx+rax*8-0x3d61ff5e],cl
0x00a2c5ce: movabs ds:0xa2c2c200a2c2b000,al
0x00a2c5d7: add    ah,dl
0x00a2c5d9: ret    0xa2
0x00a2c5dc: out    0xc2,al
0x00a2c5de: movabs ds:0xa2c30700a2c2f500,al
0x00a2c5e7: add    BYTE PTR [rcx],bl
0x00a2c5e9: ret
0x00a2c5ea: movabs ds:0xa2c33700a2c32800,al
0x00a2c5f3: add    BYTE PTR [rbx-0x3d],al
0x00a2c5f6: movabs ds:0xa2c36100a2c35200,al
0x00a2c5ff: add    BYTE PTR [rax-0x3d],dh
0x00a2c602: movabs ds:0xa2c38e00a2c37f00,al
