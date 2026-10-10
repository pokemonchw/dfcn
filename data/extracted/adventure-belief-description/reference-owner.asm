# reference PE:6a70a6d9:02711000; owner; RVA 0x63dd90..0x63f0c8
0x0063dd90: mov    QWORD PTR [rsp+0x10],rbx
0x0063dd95: mov    QWORD PTR [rsp+0x18],rsi
0x0063dd9a: mov    QWORD PTR [rsp+0x20],rdi
0x0063dd9f: push   rbp
0x0063dda0: push   r12
0x0063dda2: push   r13
0x0063dda4: push   r14
0x0063dda6: push   r15
0x0063dda8: lea    rbp,[rsp-0x37]
0x0063ddad: sub    rsp,0xd0
0x0063ddb4: mov    rax,QWORD PTR [rip+0x125e285]        # 0x14189c040
0x0063ddbb: xor    rax,rsp
0x0063ddbe: mov    QWORD PTR [rbp+0x2f],rax
0x0063ddc2: mov    rsi,rcx
0x0063ddc5: mov    QWORD PTR [rbp-0x69],rcx
0x0063ddc9: cmp    DWORD PTR [rcx+0x1348],edx
0x0063ddcf: jne    0x14063dde7
0x0063ddd1: cmp    DWORD PTR [rcx+0x134c],0xffffffff
0x0063ddd8: jne    0x14063dde7
0x0063ddda: cmp    DWORD PTR [rcx+0x1350],r9d
0x0063dde1: je     0x14063f095
0x0063dde7: mov    DWORD PTR [rcx+0x1348],edx
0x0063dded: mov    DWORD PTR [rcx+0x134c],0xffffffff
0x0063ddf7: mov    DWORD PTR [rcx+0x1350],r9d
0x0063ddfe: add    rcx,0x1330
0x0063de05: call   0x1400bb9b0
0x0063de0a: xorps  xmm0,xmm0
0x0063de0d: movups XMMWORD PTR [rbp-0x51],xmm0
0x0063de11: mov    QWORD PTR [rbp-0x41],0x0
0x0063de19: mov    QWORD PTR [rbp-0x39],0xf
0x0063de21: mov    BYTE PTR [rbp-0x51],0x0
0x0063de25: mov    r13d,0x6
0x0063de2b: lea    rbx,[rip+0x100bd4a]        # 0x141649b7c ; literal=" is a "
0x0063de32: mov    r12d,0x4
0x0063de38: movabs r14,0x7fffffffffffffff
0x0063de42: mov    r15d,0x3
0x0063de48: cmp    DWORD PTR [rsi+0x1298],0x0
0x0063de4f: jne    0x14063e3fb
0x0063de55: mov    rcx,QWORD PTR [rsi+0x1280]
0x0063de5c: mov    rax,QWORD PTR [rsi+0x1288]
0x0063de63: sub    rax,rcx
0x0063de66: sar    rax,0x3
0x0063de6a: test   rax,rax
0x0063de6d: je     0x14063e3fb
0x0063de73: movsxd rax,DWORD PTR [rsi+0x1348]
0x0063de7a: mov    r13,QWORD PTR [rcx+rax*8]
0x0063de7e: movups XMMWORD PTR [rbp-0x31],xmm0
0x0063de82: mov    QWORD PTR [rbp-0x21],0x0
0x0063de8a: mov    QWORD PTR [rbp-0x19],0xf
0x0063de92: mov    BYTE PTR [rbp-0x31],0x0
0x0063de96: xor    r9d,r9d
0x0063de99: mov    r8b,0x1
0x0063de9c: lea    rdx,[rbp-0x31]
0x0063dea0: mov    rcx,r13
0x0063dea3: call   0x140a946e0
0x0063dea8: lea    rdx,[rbp-0x31]
0x0063deac: cmp    QWORD PTR [rbp-0x19],0xf
0x0063deb1: cmova  rdx,QWORD PTR [rbp-0x31]
0x0063deb6: mov    r8,QWORD PTR [rbp-0x21]
0x0063deba: lea    rcx,[rbp-0x51]
0x0063debe: call   0x14006fa10
0x0063dec3: mov    r8d,0x6
0x0063dec9: mov    rdx,rbx
0x0063decc: lea    rcx,[rbp-0x51]
0x0063ded0: call   0x14006fa10
0x0063ded5: mov    QWORD PTR [rbp-0x21],0x0
0x0063dedd: lea    rax,[rbp-0x31]
0x0063dee1: cmp    QWORD PTR [rbp-0x19],0xf
0x0063dee6: cmova  rax,QWORD PTR [rbp-0x31]
0x0063deeb: mov    BYTE PTR [rax],0x0
0x0063deee: cmp    WORD PTR [r13+0x80],0x1
0x0063def7: jne    0x14063dfaa
0x0063defd: mov    rbx,QWORD PTR [rbp-0x19]
0x0063df01: cmp    rbx,r12
0x0063df04: jb     0x14063df28
0x0063df06: lea    rcx,[rbp-0x31]
0x0063df0a: cmp    rbx,0xf
0x0063df0e: cmova  rcx,QWORD PTR [rbp-0x31]
0x0063df13: mov    QWORD PTR [rbp-0x21],r12
0x0063df17: mov    eax,DWORD PTR [rip+0x1063303]        # 0x1416a1220 ; literal="dark"
0x0063df1d: mov    DWORD PTR [rcx],eax
0x0063df1f: mov    BYTE PTR [rcx+0x4],0x0
0x0063df23: jmp    0x14063dfaa
0x0063df28: mov    rcx,rbx
0x0063df2b: shr    rcx,1
0x0063df2e: mov    rax,r14
0x0063df31: sub    rax,rcx
0x0063df34: cmp    rbx,rax
0x0063df37: jbe    0x14063df3e
0x0063df39: mov    rdi,r14
0x0063df3c: jmp    0x14063df4e
0x0063df3e: lea    rax,[rbx+rcx*1]
0x0063df42: mov    edi,0xf
0x0063df47: cmp    rax,rdi
0x0063df4a: cmova  rdi,rax
0x0063df4e: lea    rcx,[rdi+0x1]
0x0063df52: call   0x1400707d0
0x0063df57: mov    rsi,rax
0x0063df5a: mov    QWORD PTR [rbp-0x21],r12
0x0063df5e: mov    QWORD PTR [rbp-0x19],rdi
0x0063df62: mov    ecx,DWORD PTR [rip+0x10632b8]        # 0x1416a1220 ; literal="dark"
0x0063df68: mov    DWORD PTR [rax],ecx
0x0063df6a: mov    BYTE PTR [rax+0x4],0x0
0x0063df6e: cmp    rbx,0xf
0x0063df72: jbe    0x14063dfa6
0x0063df74: lea    rdx,[rbx+0x1]
0x0063df78: mov    rcx,QWORD PTR [rbp-0x31]
0x0063df7c: mov    rax,rcx
0x0063df7f: cmp    rdx,0x1000
0x0063df86: jb     0x14063dfa1
0x0063df88: add    rdx,0x27
0x0063df8c: mov    rcx,QWORD PTR [rcx-0x8]
0x0063df90: sub    rax,rcx
0x0063df93: add    rax,0xfffffffffffffff8
0x0063df97: cmp    rax,0x1f
0x0063df9b: ja     0x14063e1d4
0x0063dfa1: call   0x141539680
0x0063dfa6: mov    QWORD PTR [rbp-0x31],rsi
0x0063dfaa: mov    r8,QWORD PTR [rbp-0x21]
0x0063dfae: test   r8,r8
0x0063dfb1: je     0x14063dfe0
0x0063dfb3: lea    rdx,[rbp-0x31]
0x0063dfb7: cmp    QWORD PTR [rbp-0x19],0xf
0x0063dfbc: cmova  rdx,QWORD PTR [rbp-0x31]
0x0063dfc1: lea    rcx,[rbp-0x51]
0x0063dfc5: call   0x14006fa10
0x0063dfca: mov    r8d,0x1
0x0063dfd0: lea    rdx,[rip+0xfaa765]        # 0x1415e873c ; literal=" "
0x0063dfd7: lea    rcx,[rbp-0x51]
0x0063dfdb: call   0x14006fa10
0x0063dfe0: cmp    WORD PTR [r13+0x80],0xa
0x0063dfe9: je     0x14063e1e0
0x0063dfef: mov    rcx,r13
0x0063dff2: call   0x1409b4e70
0x0063dff7: test   rax,rax
0x0063dffa: je     0x14063e1e0
0x0063e000: mov    rcx,rax
0x0063e003: call   0x14093ce30
0x0063e008: test   rax,rax
0x0063e00b: je     0x14063e1e0
0x0063e011: mov    ecx,DWORD PTR [rax+0x9c]
0x0063e017: shr    ecx,0xa
0x0063e01a: not    ecx
0x0063e01c: test   cl,0x1
0x0063e01f: je     0x14063e1e0
0x0063e025: xorps  xmm0,xmm0
0x0063e028: movups XMMWORD PTR [rbp-0x11],xmm0
0x0063e02c: mov    ecx,0xf
0x0063e031: mov    QWORD PTR [rbp+0x7],rcx
0x0063e035: movsx  rdx,WORD PTR [rax+0x98]
0x0063e03d: xor    r8d,r8d
0x0063e040: mov    QWORD PTR [rbp-0x1],r8
0x0063e044: mov    BYTE PTR [rbp-0x11],r8b
0x0063e048: test   dx,dx
0x0063e04b: js     0x14063e096
0x0063e04d: mov    rax,QWORD PTR [rip+0x1eaea1c]        # 0x1424eca70
0x0063e054: mov    r9,QWORD PTR [rip+0x1eaea0d]        # 0x1424eca68
0x0063e05b: sub    rax,r9
0x0063e05e: sar    rax,0x3
0x0063e062: cmp    rdx,rax
0x0063e065: jae    0x14063e096
0x0063e067: mov    rdx,QWORD PTR [r9+rdx*8]
0x0063e06b: add    rdx,0x60
0x0063e06f: lea    rax,[rbp-0x11]
0x0063e073: cmp    rax,rdx
0x0063e076: je     0x14063e096
0x0063e078: mov    r8,QWORD PTR [rdx+0x10]
0x0063e07c: cmp    QWORD PTR [rdx+0x18],rcx
0x0063e080: jbe    0x14063e085
0x0063e082: mov    rdx,QWORD PTR [rdx]
0x0063e085: lea    rcx,[rbp-0x11]
0x0063e089: call   0x14006f8d0
0x0063e08e: mov    rcx,QWORD PTR [rbp+0x7]
0x0063e092: mov    r8,QWORD PTR [rbp-0x1]
0x0063e096: lea    rdx,[rbp-0x11]
0x0063e09a: cmp    rcx,0xf
0x0063e09e: cmova  rdx,QWORD PTR [rbp-0x11]
0x0063e0a3: lea    rcx,[rbp-0x51]
0x0063e0a7: call   0x14006fa10
0x0063e0ac: mov    rdi,QWORD PTR [rbp-0x41]
0x0063e0b0: mov    rsi,QWORD PTR [rbp-0x39]
0x0063e0b4: cmp    rdi,rsi
0x0063e0b7: jae    0x14063e0d9
0x0063e0b9: lea    rax,[rdi+0x1]
0x0063e0bd: mov    QWORD PTR [rbp-0x41],rax
0x0063e0c1: lea    rax,[rbp-0x51]
0x0063e0c5: cmp    rsi,0xf
0x0063e0c9: cmova  rax,QWORD PTR [rbp-0x51]
0x0063e0ce: mov    WORD PTR [rax+rdi*1],0x20
0x0063e0d4: jmp    0x14063e1a2
0x0063e0d9: mov    rax,r14
0x0063e0dc: sub    rax,rdi
0x0063e0df: cmp    rax,0x1
0x0063e0e3: jb     0x14063f0c2
0x0063e0e9: lea    r15,[rdi+0x1]
0x0063e0ed: mov    rbx,r15
0x0063e0f0: or     rbx,0xf
0x0063e0f4: cmp    rbx,r14
0x0063e0f7: jbe    0x14063e0fe
0x0063e0f9: mov    rbx,r14
0x0063e0fc: jmp    0x14063e11f
0x0063e0fe: mov    rcx,rsi
0x0063e101: shr    rcx,1
0x0063e104: mov    rax,r14
0x0063e107: sub    rax,rcx
0x0063e10a: cmp    rsi,rax
0x0063e10d: jbe    0x14063e114
0x0063e10f: mov    rbx,r14
0x0063e112: jmp    0x14063e11f
0x0063e114: lea    rax,[rsi+rcx*1]
0x0063e118: cmp    rbx,rax
0x0063e11b: cmovb  rbx,rax
0x0063e11f: lea    rcx,[rbx+0x1]
0x0063e123: call   0x1400707d0
0x0063e128: mov    r14,rax
0x0063e12b: mov    QWORD PTR [rbp-0x41],r15
0x0063e12f: mov    QWORD PTR [rbp-0x39],rbx
0x0063e133: mov    r8,rdi
0x0063e136: mov    rcx,rax
0x0063e139: cmp    rsi,0xf
0x0063e13d: jbe    0x14063e188
0x0063e13f: mov    rbx,QWORD PTR [rbp-0x51]
0x0063e143: mov    rdx,rbx
0x0063e146: call   0x14153aa78
0x0063e14b: mov    WORD PTR [r14+rdi*1],0x20
0x0063e152: lea    rdx,[rsi+0x1]
0x0063e156: cmp    rdx,0x1000
0x0063e15d: jb     0x14063e177
0x0063e15f: add    rdx,0x27
0x0063e163: mov    rcx,QWORD PTR [rbx-0x8]
0x0063e167: sub    rbx,rcx
0x0063e16a: lea    rax,[rbx-0x8]
0x0063e16e: cmp    rax,0x1f
0x0063e172: ja     0x14063e181
0x0063e174: mov    rbx,rcx
0x0063e177: mov    rcx,rbx
0x0063e17a: call   0x141539680
0x0063e17f: jmp    0x14063e198
0x0063e181: call   QWORD PTR [rip+0xfa79a1]        # 0x1415e5b28
0x0063e187: int3
0x0063e188: lea    rdx,[rbp-0x51]
0x0063e18c: call   0x14153aa78
0x0063e191: mov    WORD PTR [r14+rdi*1],0x20
0x0063e198: mov    r15d,0x3
0x0063e19e: mov    QWORD PTR [rbp-0x51],r14
0x0063e1a2: mov    rdx,QWORD PTR [rbp+0x7]
0x0063e1a6: cmp    rdx,0xf
0x0063e1aa: jbe    0x14063e1e0
0x0063e1ac: inc    rdx
0x0063e1af: mov    rcx,QWORD PTR [rbp-0x11]
0x0063e1b3: mov    rax,rcx
0x0063e1b6: cmp    rdx,0x1000
0x0063e1bd: jb     0x14063e1db
0x0063e1bf: add    rdx,0x27
0x0063e1c3: mov    rcx,QWORD PTR [rcx-0x8]
0x0063e1c7: sub    rax,rcx
0x0063e1ca: add    rax,0xfffffffffffffff8
0x0063e1ce: cmp    rax,0x1f
0x0063e1d2: jbe    0x14063e1db
0x0063e1d4: call   QWORD PTR [rip+0xfa794e]        # 0x1415e5b28
0x0063e1da: int3
0x0063e1db: call   0x141539680
0x0063e1e0: lea    rdx,[rbp-0x31]
0x0063e1e4: mov    rcx,r13
0x0063e1e7: call   0x1410cbe50
0x0063e1ec: lea    rdx,[rbp-0x31]
0x0063e1f0: cmp    QWORD PTR [rbp-0x19],0xf
0x0063e1f5: cmova  rdx,QWORD PTR [rbp-0x31]
0x0063e1fa: mov    r8,QWORD PTR [rbp-0x21]
0x0063e1fe: lea    rcx,[rbp-0x51]
0x0063e202: call   0x14006fa10
0x0063e207: mov    r8,r15
0x0063e20a: lea    rdx,[rip+0xfbf757]        # 0x1415fd968 ; literal=".  "
0x0063e211: lea    rcx,[rbp-0x51]
0x0063e215: call   0x14006fa10
0x0063e21a: mov    r8,QWORD PTR [r13+0x98]
0x0063e221: sub    r8,QWORD PTR [r13+0x90]
0x0063e228: sar    r8,0x2
0x0063e22c: mov    rax,QWORD PTR [r13+0x110]
0x0063e233: sub    rax,QWORD PTR [r13+0x108]
0x0063e23a: sar    rax,0x2
0x0063e23e: add    r8d,eax
0x0063e241: mov    rax,QWORD PTR [r13+0xd8]
0x0063e248: mov    rcx,QWORD PTR [r13+0xe0]
0x0063e24f: nop
0x0063e250: cmp    rax,rcx
0x0063e253: jae    0x14063e261
0x0063e255: mov    rdx,QWORD PTR [rax]
0x0063e258: add    r8d,DWORD PTR [rdx]
0x0063e25b: add    rax,0x8
0x0063e25f: jmp    0x14063e250
0x0063e261: test   r8d,r8d
0x0063e264: jg     0x14063e278
0x0063e266: lea    rdx,[rip+0x1023ceb]        # 0x141661f58 ; literal="Nobody lives there"
0x0063e26d: mov    r8d,0x12
0x0063e273: jmp    0x14063e35d
0x0063e278: cmp    r8d,0xa
0x0063e27c: jge    0x14063e290
0x0063e27e: lea    rdx,[rip+0x1023ceb]        # 0x141661f70 ; literal="Few live there"
0x0063e285: mov    r8d,0xe
0x0063e28b: jmp    0x14063e35d
0x0063e290: cmp    r8d,0x18
0x0063e294: jg     0x14063e2a8
0x0063e296: lea    rdx,[rip+0x1023ce3]        # 0x141661f80 ; literal="A few dozen or less live there"
0x0063e29d: mov    r8d,0x1e
0x0063e2a3: jmp    0x14063e35d
0x0063e2a8: cmp    r8d,0x50
0x0063e2ac: jge    0x14063e2c0
0x0063e2ae: lea    rdx,[rip+0x1023c13]        # 0x141661ec8 ; literal="Some dozens live there"
0x0063e2b5: mov    r8d,0x16
0x0063e2bb: jmp    0x14063e35d
0x0063e2c0: cmp    r8d,0x78
0x0063e2c4: jge    0x14063e2d8
0x0063e2c6: lea    rdx,[rip+0x1023c13]        # 0x141661ee0 ; literal="Roughly a hundred live there"
0x0063e2cd: mov    r8d,0x1c
0x0063e2d3: jmp    0x14063e35d
0x0063e2d8: cmp    r8d,0xaf
0x0063e2df: jge    0x14063e2f0
0x0063e2e1: lea    rdx,[rip+0x1023c18]        # 0x141661f00 ; literal="Well over a hundred live there"
0x0063e2e8: mov    r8d,0x1e
0x0063e2ee: jmp    0x14063e35d
0x0063e2f0: cmp    r8d,0xfa
0x0063e2f7: jge    0x14063e308
0x0063e2f9: lea    rdx,[rip+0x1023c20]        # 0x141661f20 ; literal="A few hundred live there"
0x0063e300: mov    r8d,0x18
0x0063e306: jmp    0x14063e35d
0x0063e308: cmp    r8d,0x2ee
0x0063e30f: jge    0x14063e320
0x0063e311: lea    rdx,[rip+0x1023b40]        # 0x141661e58 ; literal="Several hundred live there"
0x0063e318: mov    r8d,0x1a
0x0063e31e: jmp    0x14063e35d
0x0063e320: cmp    r8d,0x5dc
0x0063e327: jge    0x14063e338
0x0063e329: lea    rdx,[rip+0x1023b48]        # 0x141661e78 ; literal="A thousand live there"
0x0063e330: mov    r8d,0x15
0x0063e336: jmp    0x14063e35d
0x0063e338: cmp    r8d,0x9c4
0x0063e33f: jge    0x14063e350
0x0063e341: lea    rdx,[rip+0x1023b48]        # 0x141661e90 ; literal="A few thousand live there"
0x0063e348: mov    r8d,0x19
0x0063e34e: jmp    0x14063e35d
0x0063e350: lea    rdx,[rip+0x1023b59]        # 0x141661eb0 ; literal="Thousands live there"
0x0063e357: mov    r8d,0x14
0x0063e35d: lea    rcx,[rbp-0x51]
0x0063e361: call   0x14006fa10
0x0063e366: mov    rcx,r13
0x0063e369: call   0x1409b4e70
0x0063e36e: mov    rbx,rax
0x0063e371: test   rax,rax
0x0063e374: je     0x14063e39c
0x0063e376: mov    r8d,0x19
0x0063e37c: lea    rdx,[rip+0x1023d15]        # 0x141662098 ; literal=" and it is controlled by "
0x0063e383: lea    rcx,[rbp-0x51]
0x0063e387: call   0x14006fa10
0x0063e38c: xor    r9d,r9d
0x0063e38f: mov    r8d,DWORD PTR [rbx+0x4]
0x0063e393: lea    rdx,[rbp-0x51]
0x0063e397: call   0x140b92900
0x0063e39c: mov    r8d,0x1
0x0063e3a2: lea    rdx,[rip+0xfaa20b]        # 0x1415e85b4 ; literal="."
0x0063e3a9: lea    rcx,[rbp-0x51]
0x0063e3ad: call   0x14006fa10
0x0063e3b2: nop
0x0063e3b3: mov    rdx,QWORD PTR [rbp-0x19]
0x0063e3b7: cmp    rdx,0xf
0x0063e3bb: jbe    0x14063e3f1
0x0063e3bd: inc    rdx
0x0063e3c0: mov    rcx,QWORD PTR [rbp-0x31]
0x0063e3c4: mov    rax,rcx
0x0063e3c7: cmp    rdx,0x1000
0x0063e3ce: jb     0x14063e3ec
0x0063e3d0: add    rdx,0x27
0x0063e3d4: mov    rcx,QWORD PTR [rcx-0x8]
0x0063e3d8: sub    rax,rcx
0x0063e3db: add    rax,0xfffffffffffffff8
0x0063e3df: cmp    rax,0x1f
0x0063e3e3: jbe    0x14063e3ec
0x0063e3e5: call   QWORD PTR [rip+0xfa773d]        # 0x1415e5b28
0x0063e3eb: int3
0x0063e3ec: call   0x141539680
0x0063e3f1: mov    r13d,0x6
0x0063e3f7: mov    rsi,QWORD PTR [rbp-0x69]
0x0063e3fb: cmp    DWORD PTR [rsi+0x1298],0x2
0x0063e402: jne    0x14063f075
0x0063e408: mov    rcx,QWORD PTR [rsi+0x12e8]
0x0063e40f: mov    rax,QWORD PTR [rsi+0x12f0]
0x0063e416: sub    rax,rcx
0x0063e419: sar    rax,0x2
0x0063e41d: test   rax,rax
0x0063e420: je     0x14063f075
0x0063e426: xor    r14d,r14d
0x0063e429: mov    r15d,r14d
0x0063e42c: movsxd rax,DWORD PTR [rsi+0x1350]
0x0063e433: lea    r10,[rax*4+0x0]
0x0063e43b: mov    ecx,DWORD PTR [rcx+r10*1]
0x0063e43f: test   ecx,ecx
0x0063e441: je     0x14063e572
0x0063e447: cmp    ecx,0x1
0x0063e44a: jne    0x14063eab5
0x0063e450: mov    r8,QWORD PTR [rsi+0x1300]
0x0063e457: xor    r9d,r9d
0x0063e45a: mov    r8d,DWORD PTR [r10+r8*1]
0x0063e45e: lea    rdx,[rbp-0x51]
0x0063e462: call   0x140b92900
0x0063e467: mov    r8d,0xe
0x0063e46d: lea    rdx,[rip+0x1023c44]        # 0x1416620b8 ; literal=" is a religion"
0x0063e474: lea    rcx,[rbp-0x51]
0x0063e478: call   0x14006fa10
0x0063e47d: movsxd rcx,DWORD PTR [rsi+0x1350]
0x0063e484: mov    rax,QWORD PTR [rsi+0x1300]
0x0063e48b: mov    ecx,DWORD PTR [rax+rcx*4]
0x0063e48e: mov    rax,QWORD PTR [rip+0x1d9336b]        # 0x1423d1800
0x0063e495: sub    rax,QWORD PTR [rip+0x1d9335c]        # 0x1423d17f8
0x0063e49c: test   rax,0xfffffffffffffff8
0x0063e4a2: je     0x14063eab5
0x0063e4a8: cmp    ecx,0xffffffff
0x0063e4ab: je     0x14063eab5
0x0063e4b1: lea    rdx,[rip+0x1d93340]        # 0x1423d17f8
0x0063e4b8: call   0x1400ba0a0
0x0063e4bd: mov    r15,rax
0x0063e4c0: test   rax,rax
0x0063e4c3: je     0x14063eab5
0x0063e4c9: mov    r10,QWORD PTR [rax+0xfc8]
0x0063e4d0: mov    rcx,QWORD PTR [rax+0xfd0]
0x0063e4d7: sub    rcx,r10
0x0063e4da: sar    rcx,0x2
0x0063e4de: test   rcx,rcx
0x0063e4e1: je     0x14063eab5
0x0063e4e7: mov    r10d,DWORD PTR [r10]
0x0063e4ea: mov    rcx,QWORD PTR [rip+0x1ebb82f]        # 0x1424f9d20
0x0063e4f1: mov    rbx,QWORD PTR [rip+0x1ebb820]        # 0x1424f9d18
0x0063e4f8: sub    rcx,rbx
0x0063e4fb: sar    rcx,0x3
0x0063e4ff: test   rcx,rcx
0x0063e502: je     0x14063eab5
0x0063e508: cmp    r10d,0xffffffff
0x0063e50c: je     0x14063eab5
0x0063e512: mov    r8d,r14d
0x0063e515: sub    ecx,0x1
0x0063e518: js     0x14063eab5
0x0063e51e: xchg   ax,ax
0x0063e520: mov    r11d,ecx
0x0063e523: lea    edx,[rcx+r8*1]
0x0063e527: sar    edx,1
0x0063e529: movsxd rax,edx
0x0063e52c: mov    rdi,QWORD PTR [rbx+rax*8]
0x0063e530: cmp    DWORD PTR [rdi+0xe0],r10d
0x0063e537: je     0x14063e551
0x0063e539: lea    ecx,[rdx-0x1]
0x0063e53c: cmovle ecx,r11d
0x0063e540: lea    eax,[rdx+0x1]
0x0063e543: cmovle r8d,eax
0x0063e547: cmp    r8d,ecx
0x0063e54a: jle    0x14063e520
0x0063e54c: jmp    0x14063eab5
0x0063e551: test   rdi,rdi
0x0063e554: je     0x14063eab5
0x0063e55a: mov    r8d,0x19
0x0063e560: lea    rdx,[rip+0x1023b61]        # 0x1416620c8 ; literal=" whose adherents worship "
0x0063e567: lea    rcx,[rbp-0x51]
0x0063e56b: call   0x14006fa10
0x0063e570: jmp    0x14063e5df
0x0063e572: mov    rax,QWORD PTR [rsi+0x1300]
0x0063e579: mov    r10d,DWORD PTR [r10+rax*1]
0x0063e57d: mov    rcx,QWORD PTR [rip+0x1ebb79c]        # 0x1424f9d20
0x0063e584: mov    rbx,QWORD PTR [rip+0x1ebb78d]        # 0x1424f9d18
0x0063e58b: sub    rcx,rbx
0x0063e58e: sar    rcx,0x3
0x0063e592: test   rcx,rcx
0x0063e595: je     0x14063e5dc
0x0063e597: cmp    r10d,0xffffffff
0x0063e59b: je     0x14063e5dc
0x0063e59d: mov    r8d,r14d
0x0063e5a0: sub    ecx,0x1
0x0063e5a3: js     0x14063e5dc
0x0063e5a5: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x0063e5b0: mov    r11d,ecx
0x0063e5b3: lea    edx,[rcx+r8*1]
0x0063e5b7: sar    edx,1
0x0063e5b9: movsxd rax,edx
0x0063e5bc: mov    rdi,QWORD PTR [rbx+rax*8]
0x0063e5c0: cmp    DWORD PTR [rdi+0xe0],r10d
0x0063e5c7: je     0x14063e5df
0x0063e5c9: lea    ecx,[rdx-0x1]
0x0063e5cc: cmovle ecx,r11d
0x0063e5d0: lea    eax,[rdx+0x1]
0x0063e5d3: cmovle r8d,eax
0x0063e5d7: cmp    r8d,ecx
0x0063e5da: jle    0x14063e5b0
0x0063e5dc: mov    rdi,r14
0x0063e5df: test   rdi,rdi
0x0063e5e2: je     0x14063eab5
0x0063e5e8: xorps  xmm0,xmm0
0x0063e5eb: movups XMMWORD PTR [rbp+0xf],xmm0
0x0063e5ef: mov    QWORD PTR [rbp+0x1f],r14
0x0063e5f3: mov    QWORD PTR [rbp+0x27],0xf
0x0063e5fb: mov    BYTE PTR [rbp+0xf],r14b
0x0063e5ff: lea    rcx,[rdi+0x38]
0x0063e603: xor    r9d,r9d
0x0063e606: mov    r8b,0x1
0x0063e609: lea    rdx,[rbp+0xf]
0x0063e60d: call   0x140a946e0
0x0063e612: lea    rdx,[rbp+0xf]
0x0063e616: cmp    QWORD PTR [rbp+0x27],0xf
0x0063e61b: cmova  rdx,QWORD PTR [rbp+0xf]
0x0063e620: mov    r8,QWORD PTR [rbp+0x1f]
0x0063e624: lea    rcx,[rbp-0x51]
0x0063e628: call   0x14006fa10
0x0063e62d: cmp    DWORD PTR [rdi+0xd0],0x0
0x0063e634: jle    0x14063e919
0x0063e63a: mov    rax,QWORD PTR [rdi+0xc8]
0x0063e641: test   BYTE PTR [rax],0x4
0x0063e644: jne    0x14063e73e
0x0063e64a: test   BYTE PTR [rax],0x8
0x0063e64d: je     0x14063e919
0x0063e653: mov    r8d,0xb
0x0063e659: test   r15,r15
0x0063e65c: mov    eax,0xd
0x0063e661: cmove  r8d,eax
0x0063e665: lea    rax,[rip+0x10239e4]        # 0x141662050 ; literal=" is the force"
0x0063e66c: lea    rdx,[rip+0x102393d]        # 0x141661fb0 ; literal=", the force"
0x0063e673: cmove  rdx,rax
0x0063e677: lea    rcx,[rbp-0x51]
0x0063e67b: call   0x14006fa10
0x0063e680: mov    edx,DWORD PTR [rdi+0xe0]
0x0063e686: mov    rcx,QWORD PTR [rip+0x1ead4cb]        # 0x1424ebb58
0x0063e68d: call   0x1405c3760
0x0063e692: mov    rbx,rax
0x0063e695: test   rax,rax
0x0063e698: je     0x14063ea95
0x0063e69e: mov    r8d,0x11
0x0063e6a4: lea    rdx,[rip+0x1023915]        # 0x141661fc0 ; literal=" which permeates "
0x0063e6ab: lea    rcx,[rbp-0x51]
0x0063e6af: call   0x14006fa10
0x0063e6b4: xorps  xmm0,xmm0
0x0063e6b7: movups XMMWORD PTR [rbp-0x31],xmm0
0x0063e6bb: mov    QWORD PTR [rbp-0x21],r14
0x0063e6bf: mov    QWORD PTR [rbp-0x19],0xf
0x0063e6c7: mov    BYTE PTR [rbp-0x31],0x0
0x0063e6cb: xor    r9d,r9d
0x0063e6ce: mov    r8b,0x1
0x0063e6d1: lea    rdx,[rbp-0x31]
0x0063e6d5: mov    rcx,rbx
0x0063e6d8: call   0x140a946e0
0x0063e6dd: lea    rdx,[rbp-0x31]
0x0063e6e1: cmp    QWORD PTR [rbp-0x19],0xf
0x0063e6e6: cmova  rdx,QWORD PTR [rbp-0x31]
0x0063e6eb: mov    r8,QWORD PTR [rbp-0x21]
0x0063e6ef: lea    rcx,[rbp-0x51]
0x0063e6f3: call   0x14006fa10
0x0063e6f8: nop
0x0063e6f9: mov    rdx,QWORD PTR [rbp-0x19]
0x0063e6fd: cmp    rdx,0xf
0x0063e701: jbe    0x14063ea95
0x0063e707: inc    rdx
0x0063e70a: mov    rcx,QWORD PTR [rbp-0x31]
0x0063e70e: mov    rax,rcx
0x0063e711: cmp    rdx,0x1000
0x0063e718: jb     0x14063ea90
0x0063e71e: add    rdx,0x27
0x0063e722: mov    rcx,QWORD PTR [rcx-0x8]
0x0063e726: sub    rax,rcx
0x0063e729: add    rax,0xfffffffffffffff8
0x0063e72d: cmp    rax,0x1f
0x0063e731: jbe    0x14063ea90
0x0063e737: call   QWORD PTR [rip+0xfa73eb]        # 0x1415e5b28
0x0063e73d: int3
0x0063e73e: lea    rbx,[rbp-0x51]
0x0063e742: mov    eax,0x8
0x0063e747: test   r15,r15
0x0063e74a: cmove  r13,rax
0x0063e74e: lea    rax,[rip+0x1023993]        # 0x1416620e8 ; literal=" is the "
0x0063e755: lea    rdx,[rip+0x1023cdc]        # 0x141662438 ; literal=", the "
0x0063e75c: cmove  rdx,rax
0x0063e760: mov    r8,r13
0x0063e763: mov    rcx,rbx
0x0063e766: call   0x14006fa10
0x0063e76b: movzx  ecx,WORD PTR [rdi+0x2]
0x0063e76f: cmp    cx,0xffff
0x0063e773: je     0x14063e7db
0x0063e775: cmp    cx,WORD PTR [rsi+0x78]
0x0063e779: je     0x14063e7db
0x0063e77b: xorps  xmm0,xmm0
0x0063e77e: movups XMMWORD PTR [rbp-0x31],xmm0
0x0063e782: mov    QWORD PTR [rbp-0x21],r14
0x0063e786: mov    QWORD PTR [rbp-0x19],0xf
0x0063e78e: mov    BYTE PTR [rbp-0x31],0x0
0x0063e792: movzx  r8d,WORD PTR [rdi+0x4]
0x0063e797: lea    rdx,[rbp-0x31]
0x0063e79b: call   0x140aa3770
0x0063e7a0: lea    rdx,[rbp-0x31]
0x0063e7a4: cmp    QWORD PTR [rbp-0x19],0xf
0x0063e7a9: cmova  rdx,QWORD PTR [rbp-0x31]
0x0063e7ae: mov    r8,QWORD PTR [rbp-0x21]
0x0063e7b2: lea    rcx,[rbp-0x51]
0x0063e7b6: call   0x14006fa10
0x0063e7bb: mov    r8d,0x1
0x0063e7c1: lea    rdx,[rip+0xfa9f74]        # 0x1415e873c ; literal=" "
0x0063e7c8: lea    rcx,[rbp-0x51]
0x0063e7cc: call   0x14006fa10
0x0063e7d1: nop
0x0063e7d2: lea    rcx,[rbp-0x31]
0x0063e7d6: call   0x14006f850
0x0063e7db: movzx  eax,BYTE PTR [rdi+0x6]
0x0063e7df: test   al,al
0x0063e7e1: jne    0x14063e7f2
0x0063e7e3: lea    rdx,[rip+0x1023c56]        # 0x141662440 ; literal="goddess"
0x0063e7ea: mov    r8d,0x7
0x0063e7f0: jmp    0x14063e812
0x0063e7f2: cmp    al,0x1
0x0063e7f4: jne    0x14063e805
0x0063e7f6: lea    rdx,[rip+0x10237a3]        # 0x141661fa0 ; literal="god"
0x0063e7fd: mov    r8d,0x3
0x0063e803: jmp    0x14063e812
0x0063e805: lea    rdx,[rip+0x1023798]        # 0x141661fa4 ; literal="deity"
0x0063e80c: mov    r8d,0x5
0x0063e812: mov    rcx,rbx
0x0063e815: call   0x14006fa10
0x0063e81a: mov    rcx,QWORD PTR [rdi+0x130]
0x0063e821: test   rcx,rcx
0x0063e824: je     0x14063ea95
0x0063e82a: mov    rcx,QWORD PTR [rcx]
0x0063e82d: test   rcx,rcx
0x0063e830: je     0x14063ea95
0x0063e836: mov    rax,QWORD PTR [rcx+0x8]
0x0063e83a: sub    rax,QWORD PTR [rcx]
0x0063e83d: sar    rax,1
0x0063e840: je     0x14063ea95
0x0063e846: mov    r8,r12
0x0063e849: lea    rdx,[rip+0xfaccc8]        # 0x1415eb518 ; literal=" of "
0x0063e850: lea    rcx,[rbp-0x51]
0x0063e854: call   0x14006fa10
0x0063e859: xorps  xmm0,xmm0
0x0063e85c: movups XMMWORD PTR [rbp-0x31],xmm0
0x0063e860: mov    QWORD PTR [rbp-0x21],r14
0x0063e864: mov    QWORD PTR [rbp-0x19],0xf
0x0063e86c: mov    BYTE PTR [rbp-0x31],0x0
0x0063e870: mov    rax,QWORD PTR [rdi+0x130]
0x0063e877: mov    rcx,QWORD PTR [rax]
0x0063e87a: mov    rax,QWORD PTR [rcx+0x8]
0x0063e87e: sub    rax,QWORD PTR [rcx]
0x0063e881: sar    rax,1
0x0063e884: sub    eax,0x1
0x0063e887: movsxd rbx,eax
0x0063e88a: js     0x14063e8e7
0x0063e88c: nop    DWORD PTR [rax+0x0]
0x0063e890: mov    rax,QWORD PTR [rdi+0x130]
0x0063e897: mov    rcx,QWORD PTR [rax]
0x0063e89a: mov    rcx,QWORD PTR [rcx]
0x0063e89d: lea    rdx,[rbp-0x31]
0x0063e8a1: movzx  ecx,WORD PTR [rcx+rbx*2]
0x0063e8a5: call   0x140756500
0x0063e8aa: lea    rdx,[rbp-0x31]
0x0063e8ae: cmp    QWORD PTR [rbp-0x19],0xf
0x0063e8b3: cmova  rdx,QWORD PTR [rbp-0x31]
0x0063e8b8: mov    r8,QWORD PTR [rbp-0x21]
0x0063e8bc: lea    rcx,[rbp-0x51]
0x0063e8c0: call   0x14006fa10
0x0063e8c5: cmp    rbx,0x2
0x0063e8c9: jl     0x14063e8f5
0x0063e8cb: mov    r8d,0x2
0x0063e8d1: lea    rdx,[rip+0xfaa800]        # 0x1415e90d8 ; literal=", "
0x0063e8d8: lea    rcx,[rbp-0x51]
0x0063e8dc: call   0x14006fa10
0x0063e8e1: sub    rbx,0x1
0x0063e8e5: jns    0x14063e890
0x0063e8e7: lea    rcx,[rbp-0x31]
0x0063e8eb: call   0x14006f850
0x0063e8f0: jmp    0x14063ea95
0x0063e8f5: cmp    rbx,0x1
0x0063e8f9: jne    0x14063e8e1
0x0063e8fb: mov    r8d,0x5
0x0063e901: lea    rdx,[rip+0xfaa808]        # 0x1415e9110 ; literal=" and "
0x0063e908: lea    rcx,[rbp-0x51]
0x0063e90c: call   0x14006fa10
0x0063e911: dec    rbx
0x0063e914: jmp    0x14063e890
0x0063e919: cmp    WORD PTR [rdi+0x2],0xffff
0x0063e91e: je     0x14063ea95
0x0063e924: test   r15,r15
0x0063e927: cmove  r12,r13
0x0063e92b: lea    rdx,[rip+0xfbeb3e]        # 0x1415fd470 ; literal=", a "
0x0063e932: lea    rax,[rip+0x100b243]        # 0x141649b7c ; literal=" is a "
0x0063e939: cmove  rdx,rax
0x0063e93d: mov    r8,r12
0x0063e940: lea    rcx,[rbp-0x51]
0x0063e944: call   0x14006fa10
0x0063e949: xorps  xmm0,xmm0
0x0063e94c: movups XMMWORD PTR [rbp-0x31],xmm0
0x0063e950: mov    QWORD PTR [rbp-0x21],r14
0x0063e954: mov    QWORD PTR [rbp-0x19],0xf
0x0063e95c: mov    BYTE PTR [rbp-0x31],0x0
0x0063e960: movsx  rdx,WORD PTR [rdi+0x4]
0x0063e965: movsx  rbx,WORD PTR [rdi+0x2]
0x0063e96a: mov    QWORD PTR [rbp-0x41],r14
0x0063e96e: lea    rax,[rbp-0x51]
0x0063e972: cmp    QWORD PTR [rbp-0x39],0xf
0x0063e977: cmova  rax,QWORD PTR [rbp-0x51]
0x0063e97c: mov    BYTE PTR [rax],0x0
0x0063e97f: cmp    dx,0xffff
0x0063e983: je     0x14063e9ff
0x0063e985: test   bx,bx
0x0063e988: js     0x14063e9ff
0x0063e98a: mov    rax,QWORD PTR [rip+0x1eae0df]        # 0x1424eca70
0x0063e991: mov    rcx,QWORD PTR [rip+0x1eae0d0]        # 0x1424eca68
0x0063e998: sub    rax,rcx
0x0063e99b: sar    rax,0x3
0x0063e99f: cmp    rbx,rax
0x0063e9a2: jae    0x14063ea0b
0x0063e9a4: test   dx,dx
0x0063e9a7: js     0x14063ea0b
0x0063e9a9: mov    rax,QWORD PTR [rcx+rbx*8]
0x0063e9ad: mov    r8,QWORD PTR [rax+0x178]
0x0063e9b4: mov    rax,QWORD PTR [rax+0x180]
0x0063e9bb: sub    rax,r8
0x0063e9be: sar    rax,0x3
0x0063e9c2: cmp    rdx,rax
0x0063e9c5: jae    0x14063ea0b
0x0063e9c7: mov    rdx,QWORD PTR [r8+rdx*8]
0x0063e9cb: add    rdx,0x20
0x0063e9cf: lea    rax,[rbp-0x51]
0x0063e9d3: cmp    rax,rdx
0x0063e9d6: je     0x14063e9f6
0x0063e9d8: mov    r8,QWORD PTR [rdx+0x10]
0x0063e9dc: cmp    QWORD PTR [rdx+0x18],0xf
0x0063e9e1: jbe    0x14063e9e6
0x0063e9e3: mov    rdx,QWORD PTR [rdx]
0x0063e9e6: lea    rcx,[rbp-0x51]
0x0063e9ea: call   0x14006f8d0
0x0063e9ef: mov    rcx,QWORD PTR [rip+0x1eae072]        # 0x1424eca68
0x0063e9f6: cmp    QWORD PTR [rbp-0x41],0x0
0x0063e9fb: ja     0x14063ea46
0x0063e9fd: jmp    0x14063ea06
0x0063e9ff: mov    rcx,QWORD PTR [rip+0x1eae062]        # 0x1424eca68
0x0063ea06: test   bx,bx
0x0063ea09: js     0x14063ea46
0x0063ea0b: mov    rax,QWORD PTR [rip+0x1eae05e]        # 0x1424eca70
0x0063ea12: sub    rax,rcx
0x0063ea15: sar    rax,0x3
0x0063ea19: cmp    rbx,rax
0x0063ea1c: jae    0x14063ea46
0x0063ea1e: mov    rdx,QWORD PTR [rcx+rbx*8]
0x0063ea22: add    rdx,0x20
0x0063ea26: lea    rax,[rbp-0x51]
0x0063ea2a: cmp    rax,rdx
0x0063ea2d: je     0x14063ea46
0x0063ea2f: mov    r8,QWORD PTR [rdx+0x10]
0x0063ea33: cmp    QWORD PTR [rdx+0x18],0xf
0x0063ea38: jbe    0x14063ea3d
0x0063ea3a: mov    rdx,QWORD PTR [rdx]
0x0063ea3d: lea    rcx,[rbp-0x51]
0x0063ea41: call   0x14006f8d0
0x0063ea46: xor    r8d,r8d
0x0063ea49: lea    rdx,[rbp-0x31]
0x0063ea4d: lea    rcx,[rbp-0x51]
0x0063ea51: call   0x14006fa10
0x0063ea56: nop
0x0063ea57: mov    rdx,QWORD PTR [rbp-0x19]
0x0063ea5b: cmp    rdx,0xf
0x0063ea5f: jbe    0x14063ea95
0x0063ea61: inc    rdx
0x0063ea64: mov    rcx,QWORD PTR [rbp-0x31]
0x0063ea68: mov    rax,rcx
0x0063ea6b: cmp    rdx,0x1000
0x0063ea72: jb     0x14063ea90
0x0063ea74: add    rdx,0x27
0x0063ea78: mov    rcx,QWORD PTR [rcx-0x8]
0x0063ea7c: sub    rax,rcx
0x0063ea7f: add    rax,0xfffffffffffffff8
0x0063ea83: cmp    rax,0x1f
0x0063ea87: jbe    0x14063ea90
0x0063ea89: call   QWORD PTR [rip+0xfa7099]        # 0x1415e5b28
0x0063ea8f: int3
0x0063ea90: call   0x141539680
0x0063ea95: mov    r8d,0x1
0x0063ea9b: lea    rdx,[rip+0xfa9b12]        # 0x1415e85b4 ; literal="."
0x0063eaa2: lea    rcx,[rbp-0x51]
0x0063eaa6: call   0x14006fa10
0x0063eaab: nop
0x0063eaac: lea    rcx,[rbp+0xf]
0x0063eab0: call   0x14006f850
0x0063eab5: mov    rcx,QWORD PTR [rsi+0x1288]
0x0063eabc: mov    rax,QWORD PTR [rsi+0x1280]
0x0063eac3: mov    rdx,rcx
0x0063eac6: sub    rdx,rax
0x0063eac9: sar    rdx,0x3
0x0063eacd: test   rdx,rdx
0x0063ead0: je     0x14063f075
0x0063ead6: test   r15,r15
0x0063ead9: je     0x14063f075
0x0063eadf: cmp    rax,rcx
0x0063eae2: je     0x14063f075
0x0063eae8: mov    edx,DWORD PTR [rsi+0x340]
0x0063eaee: xchg   ax,ax
0x0063eaf0: mov    r13,QWORD PTR [rax]
0x0063eaf3: cmp    DWORD PTR [r13+0x88],edx
0x0063eafa: je     0x14063eb0a
0x0063eafc: add    rax,0x8
0x0063eb00: cmp    rax,rcx
0x0063eb03: jne    0x14063eaf0
0x0063eb05: jmp    0x14063f075
0x0063eb0a: mov    r12,r14
0x0063eb0d: mov    QWORD PTR [rbp-0x59],r14
0x0063eb11: mov    rbx,QWORD PTR [r13+0x2b0]
0x0063eb18: mov    rdi,QWORD PTR [r13+0x2b8]
0x0063eb1f: nop
0x0063eb20: cmp    rbx,rdi
0x0063eb23: jae    0x14063eb8e
0x0063eb25: mov    rcx,QWORD PTR [rbx]
0x0063eb28: mov    edx,DWORD PTR [rcx+0x30]
0x0063eb2b: test   edx,edx
0x0063eb2d: jle    0x14063eb42
0x0063eb2f: mov    rax,QWORD PTR [rcx+0x28]
0x0063eb33: test   BYTE PTR [rax],0x2
0x0063eb36: jne    0x14063eb7e
0x0063eb38: test   BYTE PTR [rax],0x1
0x0063eb3b: je     0x14063eb42
0x0063eb3d: mov    sil,0x1
0x0063eb40: jmp    0x14063eb49
0x0063eb42: xor    sil,sil
0x0063eb45: test   edx,edx
0x0063eb47: jle    0x14063eb55
0x0063eb49: mov    rax,QWORD PTR [rcx+0x28]
0x0063eb4d: test   BYTE PTR [rax],0x8
0x0063eb50: je     0x14063eb55
0x0063eb52: mov    sil,0x1
0x0063eb55: mov    rax,QWORD PTR [rcx]
0x0063eb58: call   QWORD PTR [rax]
0x0063eb5a: cmp    ax,0x2
0x0063eb5e: jne    0x14063eb7e
0x0063eb60: mov    r14,QWORD PTR [rbx]
0x0063eb63: mov    rax,QWORD PTR [r14]
0x0063eb66: mov    rcx,r14
0x0063eb69: call   QWORD PTR [rax+0x38]
0x0063eb6c: cmp    eax,DWORD PTR [r15+0x4]
0x0063eb70: jne    0x14063eb7a
0x0063eb72: test   sil,sil
0x0063eb75: je     0x14063eb84
0x0063eb77: mov    r12,r14
0x0063eb7a: mov    r14,QWORD PTR [rbp-0x59]
0x0063eb7e: add    rbx,0x8
0x0063eb82: jmp    0x14063eb20
0x0063eb84: mov    QWORD PTR [rbp-0x59],r14
0x0063eb88: add    rbx,0x8
0x0063eb8c: jmp    0x14063eb20
0x0063eb8e: test   r14,r14
0x0063eb91: je     0x14063edf4
0x0063eb97: mov    rbx,QWORD PTR [rbp-0x69]
0x0063eb9b: xorps  xmm0,xmm0
0x0063eb9e: movdqu XMMWORD PTR [rbp-0x31],xmm0
0x0063eba3: xor    r12d,r12d
0x0063eba6: mov    QWORD PTR [rbp-0x21],r12
0x0063ebaa: mov    ecx,0x20
0x0063ebaf: call   0x141539690
0x0063ebb4: xorps  xmm0,xmm0
0x0063ebb7: movups XMMWORD PTR [rax],xmm0
0x0063ebba: mov    QWORD PTR [rax+0x10],r12
0x0063ebbe: mov    QWORD PTR [rax+0x18],0xf
0x0063ebc6: mov    BYTE PTR [rax],r12b
0x0063ebc9: mov    QWORD PTR [rbp-0x61],rax
0x0063ebcd: lea    rcx,[rbp-0x51]
0x0063ebd1: cmp    rax,rcx
0x0063ebd4: je     0x14063ebf0
0x0063ebd6: lea    rdx,[rbp-0x51]
0x0063ebda: cmp    QWORD PTR [rbp-0x39],0xf
0x0063ebdf: cmova  rdx,QWORD PTR [rbp-0x51]
0x0063ebe4: mov    r8,QWORD PTR [rbp-0x41]
0x0063ebe8: mov    rcx,rax
0x0063ebeb: call   0x14006f8d0
0x0063ebf0: lea    r8,[rbp-0x61]
0x0063ebf4: xor    edx,edx
0x0063ebf6: lea    rcx,[rbp-0x31]
0x0063ebfa: call   0x1400bad30
0x0063ebff: mov    r8d,0x1b
0x0063ec05: lea    rdx,[rbp-0x31]
0x0063ec09: lea    rcx,[rbx+0x1330]
0x0063ec10: call   0x1408e7440
0x0063ec15: nop
0x0063ec16: mov    rbx,QWORD PTR [rbp-0x29]
0x0063ec1a: mov    rax,rbx
0x0063ec1d: mov    rsi,QWORD PTR [rbp-0x31]
0x0063ec21: sub    rax,rsi
0x0063ec24: sar    rax,0x3
0x0063ec28: test   rax,rax
0x0063ec2b: je     0x14063ec7e
0x0063ec2d: lea    r14,[rsi+0x8]
0x0063ec31: mov    r15,rsi
0x0063ec34: neg    r15
0x0063ec37: mov    rdi,QWORD PTR [rsi]
0x0063ec3a: test   rdi,rdi
0x0063ec3d: je     0x14063ec54
0x0063ec3f: mov    rcx,rdi
0x0063ec42: call   0x14006f850
0x0063ec47: mov    edx,0x20
0x0063ec4c: mov    rcx,rdi
0x0063ec4f: call   0x141539680
0x0063ec54: mov    r8,rbx
0x0063ec57: sub    r8,r14
0x0063ec5a: mov    rdx,r14
0x0063ec5d: mov    rcx,rsi
0x0063ec60: call   0x14153ae1a
0x0063ec65: sub    rbx,0x8
0x0063ec69: lea    rax,[r15+rbx*1]
0x0063ec6d: sar    rax,0x3
0x0063ec71: test   rax,rax
0x0063ec74: jne    0x14063ec37
0x0063ec76: mov    QWORD PTR [rbp-0x29],rbx
0x0063ec7a: mov    r14,QWORD PTR [rbp-0x59]
0x0063ec7e: lea    rcx,[rbp-0x31]
0x0063ec82: call   0x140066b70
0x0063ec87: mov    rsi,QWORD PTR [rbp-0x69]
0x0063ec8b: mov    ecx,0x20
0x0063ec90: call   0x141539690
0x0063ec95: mov    rbx,rax
0x0063ec98: xorps  xmm0,xmm0
0x0063ec9b: movups XMMWORD PTR [rax],xmm0
0x0063ec9e: mov    QWORD PTR [rax+0x10],r12
0x0063eca2: mov    QWORD PTR [rax+0x18],0xf
0x0063ecaa: mov    BYTE PTR [rax],0x0
0x0063ecad: mov    QWORD PTR [rbp-0x61],rax
0x0063ecb1: xor    r8d,r8d
0x0063ecb4: lea    rdx,[rip+0xfac83d]        # 0x1415eb4f8
0x0063ecbb: mov    rcx,rax
0x0063ecbe: call   0x14006f8d0
0x0063ecc3: mov    rdx,QWORD PTR [rsi+0x1338]
0x0063ecca: cmp    rdx,QWORD PTR [rsi+0x1340]
0x0063ecd1: je     0x14063ece0
0x0063ecd3: mov    QWORD PTR [rdx],rbx
0x0063ecd6: add    QWORD PTR [rsi+0x1338],0x8
0x0063ecde: jmp    0x14063ecf0
0x0063ece0: lea    r8,[rbp-0x61]
0x0063ece4: lea    rcx,[rsi+0x1330]
0x0063eceb: call   0x1400bad30
0x0063ecf0: mov    rdi,QWORD PTR [rbp-0x39]
0x0063ecf4: cmp    rdi,0x10
0x0063ecf8: jb     0x14063ed2d
0x0063ecfa: lea    rbx,[rbp-0x51]
0x0063ecfe: cmp    rdi,0xf
0x0063ed02: cmova  rbx,QWORD PTR [rbp-0x51]
0x0063ed07: mov    QWORD PTR [rbp-0x41],0x10
0x0063ed0f: mov    r8d,0x10
0x0063ed15: lea    rdx,[rip+0x1023344]        # 0x141662060 ; literal="They worship at "
0x0063ed1c: mov    rcx,rbx
0x0063ed1f: call   0x14153ae1a
0x0063ed24: mov    BYTE PTR [rbx+0x10],0x0
0x0063ed28: jmp    0x14063edbb
0x0063ed2d: mov    rcx,rdi
0x0063ed30: shr    rcx,1
0x0063ed33: movabs r15,0x7fffffffffffffff
0x0063ed3d: mov    rax,r15
0x0063ed40: sub    rax,rcx
0x0063ed43: cmp    rdi,rax
0x0063ed46: ja     0x14063ed59
0x0063ed48: lea    rax,[rcx+rdi*1]
0x0063ed4c: mov    r15d,0x1f
0x0063ed52: cmp    rax,r15
0x0063ed55: cmova  r15,rax
0x0063ed59: lea    rcx,[r15+0x1]
0x0063ed5d: call   0x1400707d0
0x0063ed62: mov    rbx,rax
0x0063ed65: mov    QWORD PTR [rbp-0x41],0x10
0x0063ed6d: mov    QWORD PTR [rbp-0x39],r15
0x0063ed71: movups xmm0,XMMWORD PTR [rip+0x10232e8]        # 0x141662060 ; literal="They worship at "
0x0063ed78: movups XMMWORD PTR [rax],xmm0
0x0063ed7b: mov    BYTE PTR [rax+0x10],0x0
0x0063ed7f: cmp    rdi,0xf
0x0063ed83: jbe    0x14063edb7
0x0063ed85: lea    rdx,[rdi+0x1]
0x0063ed89: mov    rcx,QWORD PTR [rbp-0x51]
0x0063ed8d: mov    rax,rcx
0x0063ed90: cmp    rdx,0x1000
0x0063ed97: jb     0x14063edb2
0x0063ed99: add    rdx,0x27
0x0063ed9d: mov    rcx,QWORD PTR [rcx-0x8]
0x0063eda1: sub    rax,rcx
0x0063eda4: add    rax,0xfffffffffffffff8
0x0063eda8: cmp    rax,0x1f
0x0063edac: ja     0x14063f02a
0x0063edb2: call   0x141539680
0x0063edb7: mov    QWORD PTR [rbp-0x51],rbx
0x0063edbb: mov    DWORD PTR [rsp+0x28],r12d
0x0063edc0: mov    BYTE PTR [rsp+0x20],0x1
0x0063edc5: mov    r9d,DWORD PTR [r14+0x8]
0x0063edc9: mov    r8d,DWORD PTR [r13+0x88]
0x0063edd0: lea    rdx,[rbp-0x51]
0x0063edd4: call   0x140b94090
0x0063edd9: mov    r8d,0x1
0x0063eddf: lea    rdx,[rip+0xfa97ce]        # 0x1415e85b4 ; literal="."
0x0063ede6: lea    rcx,[rbp-0x51]
0x0063edea: call   0x14006fa10
0x0063edef: jmp    0x14063f075
0x0063edf4: test   r12,r12
0x0063edf7: je     0x14063f071
0x0063edfd: mov    rbx,QWORD PTR [rbp-0x69]
0x0063ee01: xorps  xmm0,xmm0
0x0063ee04: movdqu XMMWORD PTR [rbp-0x31],xmm0
0x0063ee09: xor    r14d,r14d
0x0063ee0c: mov    QWORD PTR [rbp-0x21],r14
0x0063ee10: mov    ecx,0x20
0x0063ee15: call   0x141539690
0x0063ee1a: xorps  xmm0,xmm0
0x0063ee1d: movups XMMWORD PTR [rax],xmm0
0x0063ee20: mov    QWORD PTR [rax+0x10],r14
0x0063ee24: mov    QWORD PTR [rax+0x18],0xf
0x0063ee2c: mov    BYTE PTR [rax],r14b
0x0063ee2f: mov    QWORD PTR [rbp-0x61],rax
0x0063ee33: lea    rcx,[rbp-0x51]
0x0063ee37: cmp    rax,rcx
0x0063ee3a: je     0x14063ee56
0x0063ee3c: lea    rdx,[rbp-0x51]
0x0063ee40: cmp    QWORD PTR [rbp-0x39],0xf
0x0063ee45: cmova  rdx,QWORD PTR [rbp-0x51]
0x0063ee4a: mov    r8,QWORD PTR [rbp-0x41]
0x0063ee4e: mov    rcx,rax
0x0063ee51: call   0x14006f8d0
0x0063ee56: lea    r8,[rbp-0x61]
0x0063ee5a: xor    edx,edx
0x0063ee5c: lea    rcx,[rbp-0x31]
0x0063ee60: call   0x1400bad30
0x0063ee65: mov    r8d,0x1b
0x0063ee6b: lea    rdx,[rbp-0x31]
0x0063ee6f: lea    rcx,[rbx+0x1330]
0x0063ee76: call   0x1408e7440
0x0063ee7b: nop
0x0063ee7c: mov    rbx,QWORD PTR [rbp-0x29]
0x0063ee80: mov    rax,rbx
0x0063ee83: mov    rsi,QWORD PTR [rbp-0x31]
0x0063ee87: sub    rax,rsi
0x0063ee8a: sar    rax,0x3
0x0063ee8e: test   rax,rax
0x0063ee91: je     0x14063eee6
0x0063ee93: lea    r14,[rsi+0x8]
0x0063ee97: mov    r15,rsi
0x0063ee9a: neg    r15
0x0063ee9d: nop    DWORD PTR [rax]
0x0063eea0: mov    rdi,QWORD PTR [rsi]
0x0063eea3: test   rdi,rdi
0x0063eea6: je     0x14063eebd
0x0063eea8: mov    rcx,rdi
0x0063eeab: call   0x14006f850
0x0063eeb0: mov    edx,0x20
0x0063eeb5: mov    rcx,rdi
0x0063eeb8: call   0x141539680
0x0063eebd: mov    r8,rbx
0x0063eec0: sub    r8,r14
0x0063eec3: mov    rdx,r14
0x0063eec6: mov    rcx,rsi
0x0063eec9: call   0x14153ae1a
0x0063eece: sub    rbx,0x8
0x0063eed2: lea    rax,[r15+rbx*1]
0x0063eed6: sar    rax,0x3
0x0063eeda: test   rax,rax
0x0063eedd: jne    0x14063eea0
0x0063eedf: mov    QWORD PTR [rbp-0x29],rbx
0x0063eee3: xor    r14d,r14d
0x0063eee6: lea    rcx,[rbp-0x31]
0x0063eeea: call   0x140066b70
0x0063eeef: mov    rsi,QWORD PTR [rbp-0x69]
0x0063eef3: mov    ecx,0x20
0x0063eef8: call   0x141539690
0x0063eefd: mov    rbx,rax
0x0063ef00: xorps  xmm0,xmm0
0x0063ef03: movups XMMWORD PTR [rax],xmm0
0x0063ef06: mov    QWORD PTR [rax+0x10],r14
0x0063ef0a: mov    QWORD PTR [rax+0x18],0xf
0x0063ef12: mov    BYTE PTR [rax],0x0
0x0063ef15: mov    QWORD PTR [rbp-0x61],rax
0x0063ef19: xor    r8d,r8d
0x0063ef1c: lea    rdx,[rip+0xfac5d5]        # 0x1415eb4f8
0x0063ef23: mov    rcx,rax
0x0063ef26: call   0x14006f8d0
0x0063ef2b: mov    rdx,QWORD PTR [rsi+0x1338]
0x0063ef32: cmp    rdx,QWORD PTR [rsi+0x1340]
0x0063ef39: je     0x14063ef48
0x0063ef3b: mov    QWORD PTR [rdx],rbx
0x0063ef3e: add    QWORD PTR [rsi+0x1338],0x8
0x0063ef46: jmp    0x14063ef58
0x0063ef48: lea    r8,[rbp-0x61]
0x0063ef4c: lea    rcx,[rsi+0x1330]
0x0063ef53: call   0x1400bad30
0x0063ef58: mov    rdi,QWORD PTR [rbp-0x39]
0x0063ef5c: cmp    rdi,0xd
0x0063ef60: jb     0x14063ef93
0x0063ef62: lea    rbx,[rbp-0x51]
0x0063ef66: cmp    rdi,0xf
0x0063ef6a: cmova  rbx,QWORD PTR [rbp-0x51]
0x0063ef6f: mov    eax,0xd
0x0063ef74: mov    QWORD PTR [rbp-0x41],rax
0x0063ef78: mov    r8d,eax
0x0063ef7b: lea    rdx,[rip+0x10230f6]        # 0x141662078 ; literal="Their temple "
0x0063ef82: mov    rcx,rbx
0x0063ef85: call   0x14153ae1a
0x0063ef8a: mov    BYTE PTR [rbx+0xd],0x0
0x0063ef8e: jmp    0x14063f03a
0x0063ef93: mov    rcx,rdi
0x0063ef96: shr    rcx,1
0x0063ef99: movabs r15,0x7fffffffffffffff
0x0063efa3: mov    rax,r15
0x0063efa6: sub    rax,rcx
0x0063efa9: cmp    rdi,rax
0x0063efac: ja     0x14063efbf
0x0063efae: lea    rax,[rcx+rdi*1]
0x0063efb2: mov    r15d,0xf
0x0063efb8: cmp    rax,r15
0x0063efbb: cmova  r15,rax
0x0063efbf: lea    rcx,[r15+0x1]
0x0063efc3: call   0x1400707d0
0x0063efc8: mov    rbx,rax
0x0063efcb: mov    eax,0xd
0x0063efd0: mov    QWORD PTR [rbp-0x41],rax
0x0063efd4: mov    QWORD PTR [rbp-0x39],r15
0x0063efd8: movsd  xmm0,QWORD PTR [rip+0x1023098]        # 0x141662078 ; literal="Their temple "
0x0063efe0: movsd  QWORD PTR [rbx],xmm0
0x0063efe4: mov    ecx,DWORD PTR [rip+0x1023096]        # 0x141662080 ; literal="mple "
0x0063efea: mov    DWORD PTR [rbx+0x8],ecx
0x0063efed: movzx  ecx,BYTE PTR [rip+0x1023090]        # 0x141662084 ; literal=" "
0x0063eff4: mov    BYTE PTR [rbx+0xc],cl
0x0063eff7: mov    BYTE PTR [rbx+0xd],0x0
0x0063effb: cmp    rdi,0xf
0x0063efff: jbe    0x14063f036
0x0063f001: lea    rdx,[rdi+0x1]
0x0063f005: mov    rcx,QWORD PTR [rbp-0x51]
0x0063f009: mov    rax,rcx
0x0063f00c: cmp    rdx,0x1000
0x0063f013: jb     0x14063f031
0x0063f015: add    rdx,0x27
0x0063f019: mov    rcx,QWORD PTR [rcx-0x8]
0x0063f01d: sub    rax,rcx
0x0063f020: add    rax,0xfffffffffffffff8
0x0063f024: cmp    rax,0x1f
0x0063f028: jbe    0x14063f031
0x0063f02a: call   QWORD PTR [rip+0xfa6af8]        # 0x1415e5b28
0x0063f030: int3
0x0063f031: call   0x141539680
0x0063f036: mov    QWORD PTR [rbp-0x51],rbx
0x0063f03a: mov    DWORD PTR [rsp+0x28],r14d
0x0063f03f: mov    BYTE PTR [rsp+0x20],0x1
0x0063f044: mov    r9d,DWORD PTR [r12+0x8]
0x0063f049: mov    r8d,DWORD PTR [r13+0x88]
0x0063f050: lea    rdx,[rbp-0x51]
0x0063f054: call   0x140b94090
0x0063f059: mov    r8d,0xb
0x0063f05f: lea    rdx,[rip+0x1023022]        # 0x141662088 ; literal=" is ruined."
0x0063f066: lea    rcx,[rbp-0x51]
0x0063f06a: call   0x14006fa10
0x0063f06f: jmp    0x14063f075
0x0063f071: mov    rsi,QWORD PTR [rbp-0x69]
0x0063f075: lea    rcx,[rsi+0x1330]
0x0063f07c: mov    r8d,0x1b
0x0063f082: lea    rdx,[rbp-0x51]
0x0063f086: call   0x1408e7310
0x0063f08b: nop
0x0063f08c: lea    rcx,[rbp-0x51]
0x0063f090: call   0x14006f850
0x0063f095: mov    rcx,QWORD PTR [rbp+0x2f]
0x0063f099: xor    rcx,rsp
0x0063f09c: call   0x141539660
0x0063f0a1: lea    r11,[rsp+0xd0]
0x0063f0a9: mov    rbx,QWORD PTR [r11+0x38]
0x0063f0ad: mov    rsi,QWORD PTR [r11+0x40]
0x0063f0b1: mov    rdi,QWORD PTR [r11+0x48]
0x0063f0b5: mov    rsp,r11
0x0063f0b8: pop    r15
0x0063f0ba: pop    r14
0x0063f0bc: pop    r13
0x0063f0be: pop    r12
0x0063f0c0: pop    rbp
0x0063f0c1: ret
0x0063f0c2: call   0x140065890
0x0063f0c7: nop
