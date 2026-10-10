# classic PE:6a70b91c:0270a000; reaction-completion; RVA 0x27e070..0x27ec51
0x0027e070: mov    QWORD PTR [rsp+0x10],rbx
0x0027e075: mov    QWORD PTR [rsp+0x18],rsi
0x0027e07a: mov    QWORD PTR [rsp+0x20],rdi
0x0027e07f: push   rbp
0x0027e080: push   r12
0x0027e082: push   r13
0x0027e084: push   r14
0x0027e086: push   r15
0x0027e088: lea    rbp,[rsp-0x80]
0x0027e08d: sub    rsp,0x180
0x0027e094: mov    rax,QWORD PTR [rip+0x1617fa5]        # 0x141896040
0x0027e09b: xor    rax,rsp
0x0027e09e: mov    QWORD PTR [rbp+0x78],rax
0x0027e0a2: mov    r13,rcx
0x0027e0a5: mov    r15,QWORD PTR [rip+0x2160f54]        # 0x1423df000
0x0027e0ac: or     DWORD PTR [rip+0x2263a4d],0x5        # 0x1424e1b00
0x0027e0b3: xorps  xmm0,xmm0
0x0027e0b6: movdqu XMMWORD PTR [rbp-0x10],xmm0
0x0027e0bb: xor    r12d,r12d
0x0027e0be: mov    QWORD PTR [rbp+0x0],r12
0x0027e0c2: movdqu XMMWORD PTR [rbp-0x40],xmm0
0x0027e0c7: mov    QWORD PTR [rbp-0x30],r12
0x0027e0cb: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x0027e0d0: mov    QWORD PTR [rbp-0x18],r12
0x0027e0d4: mov    rcx,QWORD PTR [rcx+0xc0]
0x0027e0db: lea    rax,[r13+0xd0]
0x0027e0e2: lea    r8,[r13+0xa8]
0x0027e0e9: lea    rdx,[r13+0x90]
0x0027e0f0: lea    r9,[rbp-0x28]
0x0027e0f4: mov    QWORD PTR [rsp+0x50],r9
0x0027e0f9: mov    QWORD PTR [rsp+0x48],rax
0x0027e0fe: mov    QWORD PTR [rsp+0x40],r12
0x0027e103: mov    QWORD PTR [rsp+0x38],r12
0x0027e108: movzx  eax,WORD PTR [rcx+0x80]
0x0027e10f: mov    WORD PTR [rsp+0x30],ax
0x0027e114: mov    QWORD PTR [rsp+0x28],r15
0x0027e119: lea    rax,[rbp-0x40]
0x0027e11d: mov    QWORD PTR [rsp+0x20],rax
0x0027e122: lea    r9,[rbp-0x10]
0x0027e126: call   0x140ed45a0
0x0027e12b: mov    BYTE PTR [rsp+0x68],r12b
0x0027e130: mov    rsi,QWORD PTR [rbp-0x38]
0x0027e134: mov    rax,rsi
0x0027e137: mov    rbx,QWORD PTR [rbp-0x40]
0x0027e13b: sub    rax,rbx
0x0027e13e: sar    rax,0x3
0x0027e142: test   rax,rax
0x0027e145: je     0x14027e53d
0x0027e14b: xorps  xmm0,xmm0
0x0027e14e: movdqu XMMWORD PTR [rbp+0x38],xmm0
0x0027e153: mov    edi,r12d
0x0027e156: mov    QWORD PTR [rbp+0x48],r12
0x0027e15a: mov    r14,QWORD PTR [rbp+0x40]
0x0027e15e: xchg   ax,ax
0x0027e160: cmp    rbx,rsi
0x0027e163: jae    0x14027e1ad
0x0027e165: mov    rcx,QWORD PTR [rbx]
0x0027e168: mov    rax,QWORD PTR [rcx]
0x0027e16b: call   QWORD PTR [rax+0x508]
0x0027e171: cmp    ax,0x4
0x0027e175: jg     0x14027e1a7
0x0027e177: cmp    r14,rdi
0x0027e17a: je     0x14027e190
0x0027e17c: mov    rax,QWORD PTR [rbx]
0x0027e17f: mov    QWORD PTR [r14],rax
0x0027e182: add    r14,0x8
0x0027e186: mov    QWORD PTR [rbp+0x40],r14
0x0027e18a: add    rbx,0x8
0x0027e18e: jmp    0x14027e160
0x0027e190: mov    r8,rbx
0x0027e193: mov    rdx,r14
0x0027e196: lea    rcx,[rbp+0x38]
0x0027e19a: call   0x1400bacc0
0x0027e19f: mov    rdi,QWORD PTR [rbp+0x48]
0x0027e1a3: mov    r14,QWORD PTR [rbp+0x40]
0x0027e1a7: add    rbx,0x8
0x0027e1ab: jmp    0x14027e160
0x0027e1ad: mov    rsi,QWORD PTR [rbp+0x38]
0x0027e1b1: sub    r14,rsi
0x0027e1b4: sar    r14,0x3
0x0027e1b8: test   r14,r14
0x0027e1bb: je     0x14027e45d
0x0027e1c1: mov    ecx,0xffff8ad0
0x0027e1c6: mov    WORD PTR [rsp+0x68],cx
0x0027e1cb: test   DWORD PTR [r15+0x110],0x2000000
0x0027e1d6: je     0x14027e22b
0x0027e1d8: mov    rbx,QWORD PTR [r15+0x1d8]
0x0027e1df: mov    rdi,QWORD PTR [r15+0x1e0]
0x0027e1e6: cmp    rbx,rdi
0x0027e1e9: jae    0x14027e224
0x0027e1eb: mov    rcx,QWORD PTR [rbx]
0x0027e1ee: mov    rax,QWORD PTR [rcx]
0x0027e1f1: call   QWORD PTR [rax+0x10]
0x0027e1f4: cmp    eax,0xb
0x0027e1f7: jne    0x14027e207
0x0027e1f9: mov    rcx,QWORD PTR [rbx]
0x0027e1fc: mov    rax,QWORD PTR [rcx]
0x0027e1ff: call   QWORD PTR [rax+0x18]
0x0027e202: test   rax,rax
0x0027e205: jne    0x14027e20d
0x0027e207: add    rbx,0x8
0x0027e20b: jmp    0x14027e1e6
0x0027e20d: lea    r9,[rsp+0x64]
0x0027e212: lea    r8,[rsp+0x60]
0x0027e217: lea    rdx,[rsp+0x68]
0x0027e21c: mov    rcx,rax
0x0027e21f: call   0x140c88ae0
0x0027e224: mov    ecx,0xffff8ad0
0x0027e229: jmp    0x14027e252
0x0027e22b: movzx  eax,WORD PTR [r15+0xa8]
0x0027e233: mov    WORD PTR [rsp+0x68],ax
0x0027e238: movzx  eax,WORD PTR [r15+0xaa]
0x0027e240: mov    WORD PTR [rsp+0x60],ax
0x0027e245: movzx  eax,WORD PTR [r15+0xac]
0x0027e24d: mov    WORD PTR [rsp+0x64],ax
0x0027e252: mov    DWORD PTR [rsp+0x7c],r12d
0x0027e257: mov    DWORD PTR [rbp-0x80],0x8ad08ad0
0x0027e25e: mov    WORD PTR [rbp-0x7c],cx
0x0027e262: mov    DWORD PTR [rbp-0x78],r12d
0x0027e266: xorps  xmm0,xmm0
0x0027e269: movdqa XMMWORD PTR [rbp-0x70],xmm0
0x0027e26e: mov    QWORD PTR [rbp-0x60],0xffffffffffffffff
0x0027e276: mov    DWORD PTR [rbp-0x58],0xffffffff
0x0027e27d: mov    DWORD PTR [rbp-0x54],r12d
0x0027e281: mov    DWORD PTR [rbp-0x50],0xffffffff
0x0027e288: mov    DWORD PTR [rsp+0x70],0x60087
0x0027e290: mov    BYTE PTR [rsp+0x74],0x1
0x0027e295: mov    WORD PTR [rbp-0x74],r12w
0x0027e29a: movzx  eax,WORD PTR [rsp+0x68]
0x0027e29f: mov    WORD PTR [rsp+0x76],ax
0x0027e2a4: movzx  eax,WORD PTR [rsp+0x60]
0x0027e2a9: mov    WORD PTR [rsp+0x78],ax
0x0027e2ae: movzx  eax,WORD PTR [rsp+0x64]
0x0027e2b3: mov    WORD PTR [rsp+0x7a],ax
0x0027e2b8: movups XMMWORD PTR [rbp+0x58],xmm0
0x0027e2bc: movdqa xmm1,XMMWORD PTR [rip+0x15077ec]        # 0x141785ab0
0x0027e2c4: movdqu XMMWORD PTR [rbp+0x68],xmm1
0x0027e2c9: movsd  xmm0,QWORD PTR [rip+0x1398da7]        # 0x141617078 ; literal="You make "
0x0027e2d1: movsd  QWORD PTR [rbp+0x58],xmm0
0x0027e2d6: movzx  eax,BYTE PTR [rip+0x1398da3]        # 0x141617080 ; literal=" "
0x0027e2dd: mov    BYTE PTR [rbp+0x60],al
0x0027e2e0: mov    BYTE PTR [rbp+0x61],0x0
0x0027e2e4: xorps  xmm0,xmm0
0x0027e2e7: movups XMMWORD PTR [rbp+0x8],xmm0
0x0027e2eb: mov    QWORD PTR [rbp+0x18],r12
0x0027e2ef: mov    QWORD PTR [rbp+0x20],0xf
0x0027e2f7: mov    BYTE PTR [rbp+0x8],0x0
0x0027e2fb: xor    r9d,r9d
0x0027e2fe: xor    r8d,r8d
0x0027e301: lea    rdx,[rbp+0x8]
0x0027e305: mov    rcx,QWORD PTR [rsi]
0x0027e308: call   0x140c62490
0x0027e30d: lea    rdx,[rbp+0x8]
0x0027e311: cmp    QWORD PTR [rbp+0x20],0xf
0x0027e316: cmova  rdx,QWORD PTR [rbp+0x8]
0x0027e31b: mov    r8,QWORD PTR [rbp+0x18]
0x0027e31f: lea    rcx,[rbp+0x58]
0x0027e323: call   0x14006f9a0
0x0027e328: nop
0x0027e329: lea    rcx,[rbp+0x8]
0x0027e32d: call   0x14006f7e0
0x0027e332: cmp    r14,0x2
0x0027e336: jbe    0x14027e353
0x0027e338: mov    r8d,0x9
0x0027e33e: lea    rdx,[rip+0x1398d43]        # 0x141617088 ; literal=" and more"
0x0027e345: lea    rcx,[rbp+0x58]
0x0027e349: call   0x14006f9a0
0x0027e34e: jmp    0x14027e3f3
0x0027e353: jne    0x14027e3f3
0x0027e359: mov    r8d,0x5
0x0027e35f: lea    rdx,[rip+0x1365d56]        # 0x1415e40bc ; literal=" and "
0x0027e366: lea    rcx,[rbp+0x58]
0x0027e36a: call   0x14006f9a0
0x0027e36f: xorps  xmm0,xmm0
0x0027e372: movups XMMWORD PTR [rbp+0x8],xmm0
0x0027e376: mov    QWORD PTR [rbp+0x18],r12
0x0027e37a: mov    QWORD PTR [rbp+0x20],0xf
0x0027e382: mov    BYTE PTR [rbp+0x8],0x0
0x0027e386: xor    r9d,r9d
0x0027e389: xor    r8d,r8d
0x0027e38c: lea    rdx,[rbp+0x8]
0x0027e390: mov    rcx,QWORD PTR [rsi+0x8]
0x0027e394: call   0x140c62490
0x0027e399: lea    rdx,[rbp+0x8]
0x0027e39d: cmp    QWORD PTR [rbp+0x20],0xf
0x0027e3a2: cmova  rdx,QWORD PTR [rbp+0x8]
0x0027e3a7: mov    r8,QWORD PTR [rbp+0x18]
0x0027e3ab: lea    rcx,[rbp+0x58]
0x0027e3af: call   0x14006f9a0
0x0027e3b4: nop
0x0027e3b5: mov    rdx,QWORD PTR [rbp+0x20]
0x0027e3b9: cmp    rdx,0xf
0x0027e3bd: jbe    0x14027e3f3
0x0027e3bf: inc    rdx
0x0027e3c2: mov    rcx,QWORD PTR [rbp+0x8]
0x0027e3c6: mov    rax,rcx
0x0027e3c9: cmp    rdx,0x1000
0x0027e3d0: jb     0x14027e3ee
0x0027e3d2: add    rdx,0x27
0x0027e3d6: mov    rcx,QWORD PTR [rcx-0x8]
0x0027e3da: sub    rax,rcx
0x0027e3dd: add    rax,0xfffffffffffffff8
0x0027e3e1: cmp    rax,0x1f
0x0027e3e5: jbe    0x14027e3ee
0x0027e3e7: call   QWORD PTR [rip+0x13626b3]        # 0x1415e0aa0
0x0027e3ed: int3
0x0027e3ee: call   0x1415345f0
0x0027e3f3: mov    r8d,0x1
0x0027e3f9: lea    rdx,[rip+0x1365174]        # 0x1415e3574 ; literal="."
0x0027e400: lea    rcx,[rbp+0x58]
0x0027e404: call   0x14006f9a0
0x0027e409: lea    r8,[rsp+0x70]
0x0027e40e: lea    rdx,[rbp+0x58]
0x0027e412: lea    rcx,[rip+0x225f327]        # 0x1424dd740
0x0027e419: call   0x1400e3bb0
0x0027e41e: nop
0x0027e41f: mov    rdx,QWORD PTR [rbp+0x70]
0x0027e423: cmp    rdx,0xf
0x0027e427: jbe    0x14027e45d
0x0027e429: inc    rdx
0x0027e42c: mov    rcx,QWORD PTR [rbp+0x58]
0x0027e430: mov    rax,rcx
0x0027e433: cmp    rdx,0x1000
0x0027e43a: jb     0x14027e458
0x0027e43c: add    rdx,0x27
0x0027e440: mov    rcx,QWORD PTR [rcx-0x8]
0x0027e444: sub    rax,rcx
0x0027e447: add    rax,0xfffffffffffffff8
0x0027e44b: cmp    rax,0x1f
0x0027e44f: jbe    0x14027e458
0x0027e451: call   QWORD PTR [rip+0x1362649]        # 0x1415e0aa0
0x0027e457: int3
0x0027e458: call   0x1415345f0
0x0027e45d: mov    QWORD PTR [rbp+0xc],0xd1
0x0027e465: mov    QWORD PTR [rbp+0x14],0x32 ; inline_fragment="2"
0x0027e46d: xorps  xmm0,xmm0
0x0027e470: movdqu XMMWORD PTR [rbp+0x20],xmm0
0x0027e475: mov    QWORD PTR [rbp+0x30],r12
0x0027e479: mov    DWORD PTR [rbp+0x8],0x70 ; inline_fragment="p"
0x0027e480: mov    rcx,QWORD PTR [r15+0xa98]
0x0027e487: test   rcx,rcx
0x0027e48a: je     0x14027e527
0x0027e490: mov    eax,DWORD PTR [r15+0x110]
0x0027e497: and    eax,0x502
0x0027e49c: cmp    eax,0x2
0x0027e49f: je     0x14027e527
0x0027e4a5: mov    eax,DWORD PTR [r15+0x118]
0x0027e4ac: bt     eax,0xc
0x0027e4b0: jb     0x14027e527
0x0027e4b2: add    rcx,0x248
0x0027e4b9: shr    eax,0xa
0x0027e4bc: test   al,0x1
0x0027e4be: je     0x14027e4c5
0x0027e4c0: xor    r8b,r8b
0x0027e4c3: jmp    0x14027e51e
0x0027e4c5: cmp    QWORD PTR [r15+0xd80],0x0
0x0027e4cd: je     0x14027e4d4
0x0027e4cf: xor    r8b,r8b
0x0027e4d2: jmp    0x14027e51e
0x0027e4d4: cmp    DWORD PTR [r15+0x1280],0x8
0x0027e4dc: jle    0x14027e4fc
0x0027e4de: mov    rax,QWORD PTR [r15+0x1278]
0x0027e4e5: cmp    BYTE PTR [rax+0x8],0x0
0x0027e4e9: jge    0x14027e4fc
0x0027e4eb: mov    r8d,DWORD PTR [r15+0x82c]
0x0027e4f2: shr    r8d,0xc
0x0027e4f6: and    r8b,0x1
0x0027e4fa: jmp    0x14027e51e
0x0027e4fc: test   DWORD PTR [r15+0x82c],0x1000
0x0027e507: jne    0x14027e51b
0x0027e509: test   DWORD PTR [r15+0x828],0x1000
0x0027e514: je     0x14027e51b
0x0027e516: xor    r8b,r8b
0x0027e519: jmp    0x14027e51e
0x0027e51b: mov    r8b,0x1
0x0027e51e: lea    rdx,[rbp+0x8]
0x0027e522: call   0x140e14850
0x0027e527: mov    BYTE PTR [rsp+0x68],0x1
0x0027e52c: lea    rcx,[rbp+0x38]
0x0027e530: call   0x140066b00
0x0027e535: mov    rsi,QWORD PTR [rbp-0x38]
0x0027e539: mov    rbx,QWORD PTR [rbp-0x40]
0x0027e53d: mov    r12,QWORD PTR [rbp-0x20]
0x0027e541: mov    rax,r12
0x0027e544: mov    rdi,QWORD PTR [rbp-0x28]
0x0027e548: sub    rax,rdi
0x0027e54b: sar    rax,0x3
0x0027e54f: test   rax,rax
0x0027e552: je     0x14027e958
0x0027e558: xorps  xmm0,xmm0
0x0027e55b: movdqu XMMWORD PTR [rbp+0x38],xmm0
0x0027e560: xor    r14d,r14d
0x0027e563: mov    r8d,r14d
0x0027e566: mov    QWORD PTR [rbp+0x48],r14
0x0027e56a: mov    r9d,0xff
0x0027e570: mov    r14,QWORD PTR [rbp+0x40]
0x0027e574: cmp    rdi,r12
0x0027e577: jae    0x14027e5f8
0x0027e57d: mov    rdx,QWORD PTR [rdi]
0x0027e580: mov    rax,rbx
0x0027e583: cmp    rax,rsi
0x0027e586: je     0x14027e5ac
0x0027e588: mov    ecx,0x1
0x0027e58d: cmovb  ecx,r9d
0x0027e591: test   cl,cl
0x0027e593: jns    0x14027e5ac
0x0027e595: cmp    QWORD PTR [rax],rdx
0x0027e598: je     0x14027e5a0
0x0027e59a: add    rax,0x8
0x0027e59e: jmp    0x14027e583
0x0027e5a0: sub    rax,rbx
0x0027e5a3: sar    rax,0x3
0x0027e5a7: cmp    eax,0xffffffff
0x0027e5aa: jne    0x14027e5ef
0x0027e5ac: cmp    r14,r8
0x0027e5af: je     0x14027e5ca
0x0027e5b1: mov    QWORD PTR [r14],rdx
0x0027e5b4: add    r14,0x8
0x0027e5b8: mov    QWORD PTR [rbp+0x40],r14
0x0027e5bc: mov    rbx,QWORD PTR [rbp-0x40]
0x0027e5c0: mov    rsi,QWORD PTR [rbp-0x38]
0x0027e5c4: add    rdi,0x8
0x0027e5c8: jmp    0x14027e574
0x0027e5ca: mov    r8,rdi
0x0027e5cd: mov    rdx,r14
0x0027e5d0: lea    rcx,[rbp+0x38]
0x0027e5d4: call   0x1400bacc0
0x0027e5d9: mov    r8,QWORD PTR [rbp+0x48]
0x0027e5dd: mov    r14,QWORD PTR [rbp+0x40]
0x0027e5e1: mov    r9d,0xff
0x0027e5e7: mov    rbx,QWORD PTR [rbp-0x40]
0x0027e5eb: mov    rsi,QWORD PTR [rbp-0x38]
0x0027e5ef: add    rdi,0x8
0x0027e5f3: jmp    0x14027e574
0x0027e5f8: mov    rsi,QWORD PTR [rbp+0x38]
0x0027e5fc: sub    r14,rsi
0x0027e5ff: sar    r14,0x3
0x0027e603: test   r14,r14
0x0027e606: je     0x14027e867
0x0027e60c: mov    ecx,0xffff8ad0
0x0027e611: mov    WORD PTR [rsp+0x60],cx
0x0027e616: test   DWORD PTR [r15+0x110],0x2000000
0x0027e621: je     0x14027e676
0x0027e623: mov    rbx,QWORD PTR [r15+0x1d8]
0x0027e62a: mov    rdi,QWORD PTR [r15+0x1e0]
0x0027e631: cmp    rbx,rdi
0x0027e634: jae    0x14027e66f
0x0027e636: mov    rcx,QWORD PTR [rbx]
0x0027e639: mov    rax,QWORD PTR [rcx]
0x0027e63c: call   QWORD PTR [rax+0x10]
0x0027e63f: cmp    eax,0xb
0x0027e642: jne    0x14027e652
0x0027e644: mov    rcx,QWORD PTR [rbx]
0x0027e647: mov    rax,QWORD PTR [rcx]
0x0027e64a: call   QWORD PTR [rax+0x18]
0x0027e64d: test   rax,rax
0x0027e650: jne    0x14027e658
0x0027e652: add    rbx,0x8
0x0027e656: jmp    0x14027e631
0x0027e658: lea    r9,[rsp+0x6c]
0x0027e65d: lea    r8,[rsp+0x64]
0x0027e662: lea    rdx,[rsp+0x60]
0x0027e667: mov    rcx,rax
0x0027e66a: call   0x140c88ae0
0x0027e66f: mov    ecx,0xffff8ad0
0x0027e674: jmp    0x14027e69d
0x0027e676: movzx  eax,WORD PTR [r15+0xa8]
0x0027e67e: mov    WORD PTR [rsp+0x60],ax
0x0027e683: movzx  eax,WORD PTR [r15+0xaa]
0x0027e68b: mov    WORD PTR [rsp+0x64],ax
0x0027e690: movzx  eax,WORD PTR [r15+0xac]
0x0027e698: mov    WORD PTR [rsp+0x6c],ax
0x0027e69d: xor    ebx,ebx
0x0027e69f: mov    DWORD PTR [rsp+0x7c],ebx
0x0027e6a3: mov    DWORD PTR [rbp-0x80],0x8ad08ad0
0x0027e6aa: mov    WORD PTR [rbp-0x7c],cx
0x0027e6ae: mov    DWORD PTR [rbp-0x78],ebx
0x0027e6b1: xorps  xmm0,xmm0
0x0027e6b4: movdqa XMMWORD PTR [rbp-0x70],xmm0
0x0027e6b9: mov    QWORD PTR [rbp-0x60],0xffffffffffffffff
0x0027e6c1: mov    DWORD PTR [rbp-0x58],0xffffffff
0x0027e6c8: mov    DWORD PTR [rbp-0x54],ebx
0x0027e6cb: mov    DWORD PTR [rbp-0x50],0xffffffff
0x0027e6d2: mov    DWORD PTR [rsp+0x70],0x60087
0x0027e6da: mov    BYTE PTR [rsp+0x74],0x1
0x0027e6df: mov    WORD PTR [rbp-0x74],bx
0x0027e6e3: movzx  eax,WORD PTR [rsp+0x60]
0x0027e6e8: mov    WORD PTR [rsp+0x76],ax
0x0027e6ed: movzx  eax,WORD PTR [rsp+0x64]
0x0027e6f2: mov    WORD PTR [rsp+0x78],ax
0x0027e6f7: movzx  eax,WORD PTR [rsp+0x6c]
0x0027e6fc: mov    WORD PTR [rsp+0x7a],ax
0x0027e701: movups XMMWORD PTR [rbp+0x8],xmm0
0x0027e705: xorps  xmm1,xmm1
0x0027e708: movdqu XMMWORD PTR [rbp+0x18],xmm1
0x0027e70d: mov    ecx,0x20 ; inline_fragment=" "
0x0027e712: call   0x140070760
0x0027e717: mov    rdx,rax
0x0027e71a: mov    QWORD PTR [rbp+0x8],rax
0x0027e71e: movdqa xmm0,XMMWORD PTR [rip+0x15074ca]        # 0x141785bf0
0x0027e726: movdqu XMMWORD PTR [rbp+0x18],xmm0
0x0027e72b: movups xmm0,XMMWORD PTR [rip+0x13988a6]        # 0x141616fd8 ; literal="You have finished working on "
0x0027e732: movups XMMWORD PTR [rax],xmm0
0x0027e735: movsd  xmm0,QWORD PTR [rip+0x13988ab]        # 0x141616fe8 ; literal="d working on "
0x0027e73d: movsd  QWORD PTR [rax+0x10],xmm0
0x0027e742: mov    ecx,DWORD PTR [rip+0x13988a8]        # 0x141616ff0 ; literal="g on "
0x0027e748: mov    DWORD PTR [rax+0x18],ecx
0x0027e74b: movzx  eax,BYTE PTR [rip+0x13988a2]        # 0x141616ff4 ; literal=" "
0x0027e752: mov    BYTE PTR [rdx+0x1c],al
0x0027e755: mov    BYTE PTR [rdx+0x1d],bl
0x0027e758: xorps  xmm0,xmm0
0x0027e75b: movups XMMWORD PTR [rbp+0x58],xmm0
0x0027e75f: mov    QWORD PTR [rbp+0x68],rbx
0x0027e763: mov    QWORD PTR [rbp+0x70],0xf
0x0027e76b: mov    BYTE PTR [rbp+0x58],bl
0x0027e76e: mov    r9d,0x1
0x0027e774: xor    r8d,r8d
0x0027e777: lea    rdx,[rbp+0x58]
0x0027e77b: mov    rcx,QWORD PTR [rsi]
0x0027e77e: call   0x140c62490
0x0027e783: lea    rdx,[rbp+0x58]
0x0027e787: cmp    QWORD PTR [rbp+0x70],0xf
0x0027e78c: cmova  rdx,QWORD PTR [rbp+0x58]
0x0027e791: mov    r8,QWORD PTR [rbp+0x68]
0x0027e795: lea    rcx,[rbp+0x8]
0x0027e799: call   0x14006f9a0
0x0027e79e: nop
0x0027e79f: lea    rcx,[rbp+0x58]
0x0027e7a3: call   0x14006f7e0
0x0027e7a8: cmp    r14,0x2
0x0027e7ac: jbe    0x14027e7c6
0x0027e7ae: mov    r8d,0x9
0x0027e7b4: lea    rdx,[rip+0x13988cd]        # 0x141617088 ; literal=" and more"
0x0027e7bb: lea    rcx,[rbp+0x8]
0x0027e7bf: call   0x14006f9a0
0x0027e7c4: jmp    0x14027e830
0x0027e7c6: jne    0x14027e830
0x0027e7c8: mov    r8d,0x5
0x0027e7ce: lea    rdx,[rip+0x13658e7]        # 0x1415e40bc ; literal=" and "
0x0027e7d5: lea    rcx,[rbp+0x8]
0x0027e7d9: call   0x14006f9a0
0x0027e7de: xorps  xmm0,xmm0
0x0027e7e1: movups XMMWORD PTR [rbp+0x58],xmm0
0x0027e7e5: mov    QWORD PTR [rbp+0x68],rbx
0x0027e7e9: mov    QWORD PTR [rbp+0x70],0xf
0x0027e7f1: mov    BYTE PTR [rbp+0x58],0x0
0x0027e7f5: mov    r9d,0x1
0x0027e7fb: xor    r8d,r8d
0x0027e7fe: lea    rdx,[rbp+0x58]
0x0027e802: mov    rcx,QWORD PTR [rsi+0x8]
0x0027e806: call   0x140c62490
0x0027e80b: lea    rdx,[rbp+0x58]
0x0027e80f: cmp    QWORD PTR [rbp+0x70],0xf
0x0027e814: cmova  rdx,QWORD PTR [rbp+0x58]
0x0027e819: mov    r8,QWORD PTR [rbp+0x68]
0x0027e81d: lea    rcx,[rbp+0x8]
0x0027e821: call   0x14006f9a0
0x0027e826: nop
0x0027e827: lea    rcx,[rbp+0x58]
0x0027e82b: call   0x14006f7e0
0x0027e830: mov    r8d,0x1
0x0027e836: lea    rdx,[rip+0x1364d37]        # 0x1415e3574 ; literal="."
0x0027e83d: lea    rcx,[rbp+0x8]
0x0027e841: call   0x14006f9a0
0x0027e846: lea    r8,[rsp+0x70]
0x0027e84b: lea    rdx,[rbp+0x8]
0x0027e84f: lea    rcx,[rip+0x225eeea]        # 0x1424dd740
0x0027e856: call   0x1400e3bb0
0x0027e85b: nop
0x0027e85c: lea    rcx,[rbp+0x8]
0x0027e860: call   0x14006f7e0
0x0027e865: jmp    0x14027e869
0x0027e867: xor    ebx,ebx
0x0027e869: cmp    BYTE PTR [rsp+0x68],0x0
0x0027e86e: jne    0x14027e93f
0x0027e874: mov    QWORD PTR [rbp+0xc],0xd1
0x0027e87c: mov    QWORD PTR [rbp+0x14],0x32 ; inline_fragment="2"
0x0027e884: xorps  xmm0,xmm0
0x0027e887: movdqu XMMWORD PTR [rbp+0x20],xmm0
0x0027e88c: mov    QWORD PTR [rbp+0x30],rbx
0x0027e890: mov    DWORD PTR [rbp+0x8],0x70 ; inline_fragment="p"
0x0027e897: mov    rcx,QWORD PTR [r15+0xa98]
0x0027e89e: test   rcx,rcx
0x0027e8a1: je     0x14027e93f
0x0027e8a7: mov    eax,DWORD PTR [r15+0x110]
0x0027e8ae: and    eax,0x502
0x0027e8b3: cmp    eax,0x2
0x0027e8b6: je     0x14027e93f
0x0027e8bc: mov    eax,DWORD PTR [r15+0x118]
0x0027e8c3: bt     eax,0xc
0x0027e8c7: jb     0x14027e93f
0x0027e8c9: add    rcx,0x248
0x0027e8d0: shr    eax,0xa
0x0027e8d3: test   al,0x1
0x0027e8d5: je     0x14027e8dc
0x0027e8d7: xor    r8b,r8b
0x0027e8da: jmp    0x14027e935
0x0027e8dc: cmp    QWORD PTR [r15+0xd80],0x0
0x0027e8e4: je     0x14027e8eb
0x0027e8e6: xor    r8b,r8b
0x0027e8e9: jmp    0x14027e935
0x0027e8eb: cmp    DWORD PTR [r15+0x1280],0x8
0x0027e8f3: jle    0x14027e913
0x0027e8f5: mov    rax,QWORD PTR [r15+0x1278]
0x0027e8fc: cmp    BYTE PTR [rax+0x8],0x0
0x0027e900: jge    0x14027e913
0x0027e902: mov    r8d,DWORD PTR [r15+0x82c]
0x0027e909: shr    r8d,0xc
0x0027e90d: and    r8b,0x1
0x0027e911: jmp    0x14027e935
0x0027e913: test   DWORD PTR [r15+0x82c],0x1000
0x0027e91e: jne    0x14027e932
0x0027e920: test   DWORD PTR [r15+0x828],0x1000
0x0027e92b: je     0x14027e932
0x0027e92d: xor    r8b,r8b
0x0027e930: jmp    0x14027e935
0x0027e932: mov    r8b,0x1
0x0027e935: lea    rdx,[rbp+0x8]
0x0027e939: call   0x140e14850
0x0027e93e: nop
0x0027e93f: lea    rcx,[rbp+0x38]
0x0027e943: call   0x140066b00
0x0027e948: mov    rsi,QWORD PTR [rbp-0x38]
0x0027e94c: mov    rbx,QWORD PTR [rbp-0x40]
0x0027e950: mov    r12,QWORD PTR [rbp-0x20]
0x0027e954: mov    rdi,QWORD PTR [rbp-0x28]
0x0027e958: sub    rsi,rbx
0x0027e95b: test   rsi,0xfffffffffffffff8
0x0027e962: jne    0x14027ebba
0x0027e968: sub    r12,rdi
0x0027e96b: test   r12,0xfffffffffffffff8
0x0027e972: jne    0x14027ebba
0x0027e978: mov    esi,0xffff8ad0
0x0027e97d: mov    WORD PTR [rsp+0x60],si
0x0027e982: test   DWORD PTR [r15+0x110],0x2000000
0x0027e98d: je     0x14027e9e0
0x0027e98f: mov    rbx,QWORD PTR [r15+0x1d8]
0x0027e996: mov    rdi,QWORD PTR [r15+0x1e0]
0x0027e99d: nop    DWORD PTR [rax]
0x0027e9a0: cmp    rbx,rdi
0x0027e9a3: jae    0x14027ea07
0x0027e9a5: mov    rcx,QWORD PTR [rbx]
0x0027e9a8: mov    rax,QWORD PTR [rcx]
0x0027e9ab: call   QWORD PTR [rax+0x10]
0x0027e9ae: cmp    eax,0xb
0x0027e9b1: jne    0x14027e9c1
0x0027e9b3: mov    rcx,QWORD PTR [rbx]
0x0027e9b6: mov    rax,QWORD PTR [rcx]
0x0027e9b9: call   QWORD PTR [rax+0x18]
0x0027e9bc: test   rax,rax
0x0027e9bf: jne    0x14027e9c7
0x0027e9c1: add    rbx,0x8
0x0027e9c5: jmp    0x14027e9a0
0x0027e9c7: lea    r9,[rsp+0x64]
0x0027e9cc: lea    r8,[rsp+0x6c]
0x0027e9d1: lea    rdx,[rsp+0x60]
0x0027e9d6: mov    rcx,rax
0x0027e9d9: call   0x140c88ae0
0x0027e9de: jmp    0x14027ea07
0x0027e9e0: movzx  eax,WORD PTR [r15+0xa8]
0x0027e9e8: mov    WORD PTR [rsp+0x60],ax
0x0027e9ed: movzx  eax,WORD PTR [r15+0xaa]
0x0027e9f5: mov    WORD PTR [rsp+0x6c],ax
0x0027e9fa: movzx  eax,WORD PTR [r15+0xac]
0x0027ea02: mov    WORD PTR [rsp+0x64],ax
0x0027ea07: xor    r14d,r14d
0x0027ea0a: mov    DWORD PTR [rsp+0x7c],r14d
0x0027ea0f: mov    DWORD PTR [rbp-0x80],0x8ad08ad0
0x0027ea16: mov    WORD PTR [rbp-0x7c],si
0x0027ea1a: mov    DWORD PTR [rbp-0x78],r14d
0x0027ea1e: xorps  xmm0,xmm0
0x0027ea21: movdqa XMMWORD PTR [rbp-0x70],xmm0
0x0027ea26: mov    QWORD PTR [rbp-0x60],0xffffffffffffffff
0x0027ea2e: mov    DWORD PTR [rbp-0x58],0xffffffff
0x0027ea35: mov    DWORD PTR [rbp-0x54],r14d
0x0027ea39: mov    DWORD PTR [rbp-0x50],0xffffffff
0x0027ea40: mov    DWORD PTR [rsp+0x70],0x60087
0x0027ea48: mov    BYTE PTR [rsp+0x74],r14b
0x0027ea4d: mov    WORD PTR [rbp-0x74],r14w
0x0027ea52: movzx  eax,WORD PTR [rsp+0x60]
0x0027ea57: mov    WORD PTR [rsp+0x76],ax
0x0027ea5c: movzx  eax,WORD PTR [rsp+0x6c]
0x0027ea61: mov    WORD PTR [rsp+0x78],ax
0x0027ea66: movzx  eax,WORD PTR [rsp+0x64]
0x0027ea6b: mov    WORD PTR [rsp+0x7a],ax
0x0027ea70: movups XMMWORD PTR [rbp+0x38],xmm0
0x0027ea74: mov    QWORD PTR [rbp+0x48],r14
0x0027ea78: mov    QWORD PTR [rbp+0x50],0xf
0x0027ea80: mov    BYTE PTR [rbp+0x38],r14b
0x0027ea84: mov    rax,QWORD PTR [r13+0xc0]
0x0027ea8b: mov    ecx,0x20 ; inline_fragment=" "
0x0027ea90: cmp    WORD PTR [rax+0x80],0xffff
0x0027ea98: je     0x14027eb6a
0x0027ea9e: call   0x140070760
0x0027eaa3: mov    QWORD PTR [rbp+0x48],0x12
0x0027eaab: mov    QWORD PTR [rbp+0x50],0x1f
0x0027eab3: movups xmm0,XMMWORD PTR [rip+0x139853e]        # 0x141616ff8 ; literal="You practice your "
0x0027eaba: movups XMMWORD PTR [rax],xmm0
0x0027eabd: movzx  ecx,WORD PTR [rip+0x1398544]        # 0x141617008 ; literal="r "
0x0027eac4: mov    WORD PTR [rax+0x10],cx
0x0027eac8: mov    BYTE PTR [rax+0x12],r14b
0x0027eacc: mov    QWORD PTR [rbp+0x38],rax
0x0027ead0: xorps  xmm0,xmm0
0x0027ead3: movups XMMWORD PTR [rbp+0x8],xmm0
0x0027ead7: mov    QWORD PTR [rbp+0x18],r14
0x0027eadb: mov    QWORD PTR [rbp+0x20],0xf
0x0027eae3: mov    BYTE PTR [rbp+0x8],r14b
0x0027eae7: mov    rdx,QWORD PTR [r13+0xc0]
0x0027eaee: movzx  edx,WORD PTR [rdx+0x80]
0x0027eaf5: lea    rcx,[rbp+0x8]
0x0027eaf9: call   0x1407713b0
0x0027eafe: lea    rcx,[rbp+0x8]
0x0027eb02: call   0x14052aaa0
0x0027eb07: lea    rdx,[rbp+0x8]
0x0027eb0b: cmp    QWORD PTR [rbp+0x20],0xf
0x0027eb10: cmova  rdx,QWORD PTR [rbp+0x8]
0x0027eb15: mov    r8,QWORD PTR [rbp+0x18]
0x0027eb19: lea    rcx,[rbp+0x38]
0x0027eb1d: call   0x14006f9a0
0x0027eb22: mov    rcx,QWORD PTR [r13+0xc0]
0x0027eb29: mov    rax,QWORD PTR [rcx+0x70]
0x0027eb2d: sub    rax,QWORD PTR [rcx+0x68]
0x0027eb31: lea    rcx,[rbp+0x38]
0x0027eb35: test   rax,0xfffffffffffffff8
0x0027eb3b: jne    0x14027eb4c
0x0027eb3d: mov    r8d,0x1
0x0027eb43: lea    rdx,[rip+0x1364a2a]        # 0x1415e3574 ; literal="."
0x0027eb4a: jmp    0x14027eb59
0x0027eb4c: mov    r8d,0x1a
0x0027eb52: lea    rdx,[rip+0x13984b7]        # 0x141617010 ; literal=" but make nothing of note."
0x0027eb59: call   0x14006f9a0
0x0027eb5e: nop
0x0027eb5f: lea    rcx,[rbp+0x8]
0x0027eb63: call   0x14006f7e0
0x0027eb68: jmp    0x14027eb9b
0x0027eb6a: call   0x140070760
0x0027eb6f: mov    QWORD PTR [rbp+0x48],0x11
0x0027eb77: mov    QWORD PTR [rbp+0x50],0x1f
0x0027eb7f: movups xmm0,XMMWORD PTR [rip+0x13984aa]        # 0x141617030 ; literal="You make nothing."
0x0027eb86: movups XMMWORD PTR [rax],xmm0
0x0027eb89: movzx  edx,BYTE PTR [rip+0x13984b0]        # 0x141617040 ; literal="."
0x0027eb90: mov    BYTE PTR [rax+0x10],dl
0x0027eb93: mov    BYTE PTR [rax+0x11],0x0
0x0027eb97: mov    QWORD PTR [rbp+0x38],rax
0x0027eb9b: lea    r8,[rsp+0x70]
0x0027eba0: lea    rdx,[rbp+0x38]
0x0027eba4: lea    rcx,[rip+0x225eb95]        # 0x1424dd740
0x0027ebab: call   0x1400e3bb0
0x0027ebb0: nop
0x0027ebb1: lea    rcx,[rbp+0x38]
0x0027ebb5: call   0x14006f7e0
0x0027ebba: mov    rbx,QWORD PTR [r13+0xd0]
0x0027ebc1: mov    rdi,QWORD PTR [r13+0xd8]
0x0027ebc8: cmp    rbx,rdi
0x0027ebcb: jae    0x14027ebf0
0x0027ebcd: mov    rsi,QWORD PTR [rbx]
0x0027ebd0: test   rsi,rsi
0x0027ebd3: je     0x14027ebea
0x0027ebd5: mov    rcx,rsi
0x0027ebd8: call   0x14006f7e0
0x0027ebdd: mov    edx,0x30 ; inline_fragment="0"
0x0027ebe2: mov    rcx,rsi
0x0027ebe5: call   0x1415345f0
0x0027ebea: add    rbx,0x8
0x0027ebee: jmp    0x14027ebc8
0x0027ebf0: mov    rax,QWORD PTR [r13+0xd0]
0x0027ebf7: cmp    rax,QWORD PTR [r13+0xd8]
0x0027ebfe: je     0x14027ec07
0x0027ec00: mov    QWORD PTR [r13+0xd8],rax
0x0027ec07: lea    rcx,[rbp-0x28]
0x0027ec0b: call   0x140066b00
0x0027ec10: nop
0x0027ec11: lea    rcx,[rbp-0x40]
0x0027ec15: call   0x140066b00
0x0027ec1a: nop
0x0027ec1b: lea    rcx,[rbp-0x10]
0x0027ec1f: call   0x140066b00
0x0027ec24: mov    rcx,QWORD PTR [rbp+0x78]
0x0027ec28: xor    rcx,rsp
0x0027ec2b: call   0x1415345d0
0x0027ec30: lea    r11,[rsp+0x180]
0x0027ec38: mov    rbx,QWORD PTR [r11+0x38]
0x0027ec3c: mov    rsi,QWORD PTR [r11+0x40]
0x0027ec40: mov    rdi,QWORD PTR [r11+0x48]
0x0027ec44: mov    rsp,r11
0x0027ec47: pop    r15
0x0027ec49: pop    r14
0x0027ec4b: pop    r13
0x0027ec4d: pop    r12
0x0027ec4f: pop    rbp
0x0027ec50: ret
