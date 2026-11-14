0x14092dff0: rex     push rbp
0x14092dff2: push    rbx
0x14092dff3: push    rsi
0x14092dff4: push    rdi
0x14092dff5: push    r12
0x14092dff7: push    r14
0x14092dff9: push    r15
0x14092dffb: lea     rbp,[rsp-0x27]
0x14092e000: sub     rsp,0xc0
0x14092e007: mov     rax,QWORD PTR [rip+0xf90032]        # 0x1418be040
0x14092e00e: xor     rax,rsp
0x14092e011: mov     QWORD PTR [rbp+0x17],rax
0x14092e015: mov     rsi,r9
0x14092e018: movsx   r14,r8w
0x14092e01c: mov     rdi,rcx
0x14092e01f: xorps   xmm0,xmm0
0x14092e022: movups  XMMWORD PTR [rbp-0x29],xmm0
0x14092e026: xor     ebx,ebx
0x14092e028: mov     QWORD PTR [rbp-0x19],rbx
0x14092e02c: mov     r15d,0xf
0x14092e032: mov     QWORD PTR [rbp-0x11],r15
0x14092e036: mov     BYTE PTR [rbp-0x29],bl
0x14092e039: mov     QWORD PTR [r9+0x10],rbx
0x14092e03d: mov     rax,r9
0x14092e040: cmp     QWORD PTR [r9+0x18],r15
0x14092e044: jbe     0x14092e049
0x14092e046: mov     rax,QWORD PTR [r9]
0x14092e049: mov     BYTE PTR [rax],0x0
0x14092e04c: movsx   rax,dx
0x14092e050: cmp     eax,0x3f
0x14092e053: ja      0x14092f2e8
0x14092e059: lea     rdx,[rip+0xffffffffff6d1fa0]        # 0x140000000
0x14092e060: mov     ecx,DWORD PTR [rdx+rax*4+0x92f350]
0x14092e067: add     rcx,rdx
0x14092e06a: jmp     rcx
0x14092e06c: mov     rax,QWORD PTR [rdi+0x730]
0x14092e073: mov     r9d,DWORD PTR [rax+r14*4]
0x14092e077: mov     rax,QWORD PTR [rdi+0x718]
0x14092e07e: mov     edx,0xc
0x14092e083: jmp     0x14092f2a6
0x14092e088: mov     rax,QWORD PTR [rdi+0x418]
0x14092e08f: mov     r9d,DWORD PTR [rax+r14*4]
0x14092e093: mov     rax,QWORD PTR [rdi+0x400]
0x14092e09a: mov     edx,0x37
0x14092e09f: jmp     0x14092f2a6
0x14092e0a4: mov     rax,QWORD PTR [rdi+0x448]
0x14092e0ab: mov     r9d,DWORD PTR [rax+r14*4]
0x14092e0af: mov     rax,QWORD PTR [rdi+0x430]
0x14092e0b6: mov     edx,0x5a
0x14092e0bb: jmp     0x14092f2a6
0x14092e0c0: mov     rax,QWORD PTR [rdi+0x478]
0x14092e0c7: mov     r9d,DWORD PTR [rax+r14*4]
0x14092e0cb: mov     rax,QWORD PTR [rdi+0x460]
0x14092e0d2: mov     edx,0x3a
0x14092e0d7: jmp     0x14092f2a6
0x14092e0dc: mov     rax,QWORD PTR [rdi+0x4a8]
0x14092e0e3: mov     r9d,DWORD PTR [rax+r14*4]
0x14092e0e7: mov     rax,QWORD PTR [rdi+0x490]
0x14092e0ee: mov     edx,0x3a
0x14092e0f3: jmp     0x14092f2a6
0x14092e0f8: mov     rax,QWORD PTR [rdi+0x4d8]
0x14092e0ff: mov     r9d,DWORD PTR [rax+r14*4]
0x14092e103: mov     rax,QWORD PTR [rdi+0x4c0]
0x14092e10a: mov     edx,0x3a
0x14092e10f: jmp     0x14092f2a6
0x14092e114: mov     rcx,r14
0x14092e117: mov     rax,QWORD PTR [rdi+0x730]
0x14092e11e: mov     r14d,DWORD PTR [rax+r14*4]
0x14092e122: mov     rax,QWORD PTR [rdi+0x718]
0x14092e129: movzx   r12d,WORD PTR [rax+rcx*2]
0x14092e12e: mov     QWORD PTR [rbp-0x19],rbx
0x14092e132: lea     rax,[rbp-0x29]
0x14092e136: cmp     QWORD PTR [rbp-0x11],0xf
0x14092e13b: cmova   rax,QWORD PTR [rbp-0x29]
0x14092e140: mov     BYTE PTR [rax],0x0
0x14092e143: mov     ecx,0xdb
0x14092e148: movzx   eax,r12w
0x14092e14c: sub     ax,cx
0x14092e14f: mov     ecx,0xc7
0x14092e154: cmp     ax,cx
0x14092e157: ja      0x14092e2b9
0x14092e15d: mov     r8,QWORD PTR [rip+0x1bee03c]        # 0x14251c1a0
0x14092e164: mov     r10,QWORD PTR [rip+0x1bee02d]        # 0x14251c198
0x14092e16b: sub     r8,r10
0x14092e16e: sar     r8,0x3
0x14092e172: test    r8,r8
0x14092e175: je      0x14092e2b9
0x14092e17b: cmp     r14d,0xffffffff
0x14092e17f: je      0x14092e2b9
0x14092e185: mov     edx,ebx
0x14092e187: sub     r8d,0x1
0x14092e18b: js      0x14092e2b9
0x14092e191: lea     ecx,[r8+rdx*1]
0x14092e195: sar     ecx,1
0x14092e197: movsxd  rax,ecx
0x14092e19a: mov     rdi,QWORD PTR [r10+rax*8]
0x14092e19e: cmp     DWORD PTR [rdi+0xe0],r14d
0x14092e1a5: je      0x14092e1c1
0x14092e1a7: lea     eax,[rcx-0x1]
0x14092e1aa: cmovle  eax,r8d
0x14092e1ae: mov     r8d,eax
0x14092e1b1: lea     eax,[rcx+0x1]
0x14092e1b4: cmovle  edx,eax
0x14092e1b7: cmp     edx,r8d
0x14092e1ba: jle     0x14092e191
0x14092e1bc: jmp     0x14092e2b9
0x14092e1c1: test    rdi,rdi
0x14092e1c4: je      0x14092e2b9
0x14092e1ca: cmp     BYTE PTR [rdi+0xaa],0x0
0x14092e1d1: je      0x14092e2b9
0x14092e1d7: xorps   xmm0,xmm0
0x14092e1da: movups  XMMWORD PTR [rbp-0x9],xmm0
0x14092e1de: mov     QWORD PTR [rbp+0x7],rbx
0x14092e1e2: mov     QWORD PTR [rbp+0xf],r15
0x14092e1e6: mov     BYTE PTR [rbp-0x9],0x0
0x14092e1ea: mov     rax,QWORD PTR [rdi+0x130]
0x14092e1f1: test    rax,rax
0x14092e1f4: je      0x14092e222
0x14092e1f6: mov     rax,QWORD PTR [rax+0x58]
0x14092e1fa: test    rax,rax
0x14092e1fd: je      0x14092e222
0x14092e1ff: mov     edx,DWORD PTR [rax+0x30]
0x14092e202: cmp     edx,0xffffffff
0x14092e205: je      0x14092e222
0x14092e207: lea     rcx,[rip+0x1bdbf5a]        # 0x14250a168
0x14092e20e: call    0x140073ba0
0x14092e213: test    rax,rax
0x14092e216: je      0x14092e222
0x14092e218: mov     rcx,rax
0x14092e21b: call    0x140c521e0
0x14092e220: jmp     0x14092e226
0x14092e222: lea     rax,[rdi+0x38]
0x14092e226: test    rax,rax
0x14092e229: je      0x14092e24b
0x14092e22b: cmp     BYTE PTR [rax+0x72],0x0
0x14092e22f: je      0x14092e24b
0x14092e231: xor     r9d,r9d
0x14092e234: mov     r8b,0x1
0x14092e237: lea     rdx,[rbp-0x9]
0x14092e23b: mov     rcx,rax
0x14092e23e: call    0x140aae180
0x14092e243: mov     r15,QWORD PTR [rbp+0xf]
0x14092e247: mov     rbx,QWORD PTR [rbp+0x7]
0x14092e24b: lea     rdx,[rbp-0x9]
0x14092e24f: cmp     r15,0xf
0x14092e253: cmova   rdx,QWORD PTR [rbp-0x9]
0x14092e258: mov     r8,rbx
0x14092e25b: lea     rcx,[rbp-0x29]
0x14092e25f: call    0x140071040
0x14092e264: mov     r8d,0x3
0x14092e26a: lea     rdx,[rip+0xcdab33]        # 0x141608da4 ; literal="'s "
0x14092e271: lea     rcx,[rbp-0x29]
0x14092e275: call    0x140071040
0x14092e27a: nop     
0x14092e27b: mov     rdx,QWORD PTR [rbp+0xf]
0x14092e27f: cmp     rdx,0xf
0x14092e283: jbe     0x14092e2b9
0x14092e285: inc     rdx
0x14092e288: mov     rcx,QWORD PTR [rbp-0x9]
0x14092e28c: mov     rax,rcx
0x14092e28f: cmp     rdx,0x1000
0x14092e296: jb      0x14092e2b4
0x14092e298: add     rdx,0x27
0x14092e29c: mov     rcx,QWORD PTR [rcx-0x8]
0x14092e2a0: sub     rax,rcx
0x14092e2a3: add     rax,0xfffffffffffffff8
0x14092e2a7: cmp     rax,0x1f
0x14092e2ab: jbe     0x14092e2b4
0x14092e2ad: call    QWORD PTR [rip+0xcd288d]        # 0x141600b40
0x14092e2b3: int3    
0x14092e2b4: call    0x1415530d0
0x14092e2b9: mov     r8d,r14d
0x14092e2bc: movzx   edx,r12w
0x14092e2c0: lea     rcx,[rip+0x1ac56a9]        # 0x1423f3970
0x14092e2c7: call    0x1414c6fe0
0x14092e2cc: mov     rbx,rax
0x14092e2cf: test    rax,rax
0x14092e2d2: je      0x14092e329
0x14092e2d4: cmp     QWORD PTR [rax+0x530],0x0
0x14092e2dc: je      0x14092e312
0x14092e2de: lea     rdx,[rax+0x520]
0x14092e2e5: mov     r8,QWORD PTR [rdx+0x10]
0x14092e2e9: cmp     QWORD PTR [rdx+0x18],0xf
0x14092e2ee: jbe     0x14092e2f3
0x14092e2f0: mov     rdx,QWORD PTR [rdx]
0x14092e2f3: lea     rcx,[rbp-0x29]
0x14092e2f7: call    0x140071040
0x14092e2fc: mov     r8d,0x1
0x14092e302: lea     rdx,[rip+0xcd56e7]        # 0x1416039f0 ; literal=' '
0x14092e309: lea     rcx,[rbp-0x29]
0x14092e30d: call    0x140071040
0x14092e312: lea     rdx,[rbx+0x178]
0x14092e319: mov     r10,QWORD PTR [rdx+0x10]
0x14092e31d: cmp     QWORD PTR [rdx+0x18],0xf
0x14092e322: jbe     0x14092e336
0x14092e324: mov     rdx,QWORD PTR [rdx]
0x14092e327: jmp     0x14092e336
0x14092e329: lea     rdx,[rip+0xe7b558]        # 0x1417a9888 ; literal='unknown material'
0x14092e330: mov     r10d,0x10
0x14092e336: mov     r8,r10
0x14092e339: lea     rcx,[rbp-0x29]
0x14092e33d: call    0x140071040
0x14092e342: lea     rdx,[rbp-0x29]
0x14092e346: cmp     QWORD PTR [rbp-0x11],0xf
0x14092e34b: cmova   rdx,QWORD PTR [rbp-0x29]
0x14092e350: mov     r8,QWORD PTR [rbp-0x19]
0x14092e354: mov     rcx,rsi
0x14092e357: call    0x140071040
0x14092e35c: mov     r8d,0x7
0x14092e362: lea     rdx,[rip+0xdbac77]        # 0x1416e8fe0 ; literal=' Crafts'
0x14092e369: mov     rcx,rsi
0x14092e36c: call    0x140071040
0x14092e371: jmp     0x14092f2e8
0x14092e376: mov     rcx,r14
0x14092e379: mov     rax,QWORD PTR [rdi+0x508]
0x14092e380: mov     r14d,DWORD PTR [rax+r14*4]
0x14092e384: mov     rax,QWORD PTR [rdi+0x4f0]
0x14092e38b: movzx   r12d,WORD PTR [rax+rcx*2]
0x14092e390: mov     QWORD PTR [rbp-0x19],rbx
0x14092e394: lea     rax,[rbp-0x29]
0x14092e398: cmp     QWORD PTR [rbp-0x11],0xf
0x14092e39d: cmova   rax,QWORD PTR [rbp-0x29]
0x14092e3a2: mov     BYTE PTR [rax],0x0
0x14092e3a5: mov     ecx,0xdb
0x14092e3aa: movzx   eax,r12w
0x14092e3ae: sub     ax,cx
0x14092e3b1: mov     ecx,0xc7
0x14092e3b6: cmp     ax,cx
0x14092e3b9: ja      0x14092e51b
0x14092e3bf: mov     r8,QWORD PTR [rip+0x1beddda]        # 0x14251c1a0
0x14092e3c6: mov     r10,QWORD PTR [rip+0x1beddcb]        # 0x14251c198
0x14092e3cd: sub     r8,r10
0x14092e3d0: sar     r8,0x3
0x14092e3d4: test    r8,r8
0x14092e3d7: je      0x14092e51b
0x14092e3dd: cmp     r14d,0xffffffff
0x14092e3e1: je      0x14092e51b
0x14092e3e7: mov     edx,ebx
0x14092e3e9: sub     r8d,0x1
0x14092e3ed: js      0x14092e51b
0x14092e3f3: lea     ecx,[r8+rdx*1]
0x14092e3f7: sar     ecx,1
0x14092e3f9: movsxd  rax,ecx
0x14092e3fc: mov     rdi,QWORD PTR [r10+rax*8]
0x14092e400: cmp     DWORD PTR [rdi+0xe0],r14d
0x14092e407: je      0x14092e423
0x14092e409: lea     eax,[rcx-0x1]
0x14092e40c: cmovle  eax,r8d
0x14092e410: mov     r8d,eax
0x14092e413: lea     eax,[rcx+0x1]
0x14092e416: cmovle  edx,eax
0x14092e419: cmp     edx,r8d
0x14092e41c: jle     0x14092e3f3
0x14092e41e: jmp     0x14092e51b
0x14092e423: test    rdi,rdi
0x14092e426: je      0x14092e51b
0x14092e42c: cmp     BYTE PTR [rdi+0xaa],0x0
0x14092e433: je      0x14092e51b
0x14092e439: xorps   xmm0,xmm0
0x14092e43c: movups  XMMWORD PTR [rbp-0x9],xmm0
0x14092e440: mov     QWORD PTR [rbp+0x7],rbx
0x14092e444: mov     QWORD PTR [rbp+0xf],r15
0x14092e448: mov     BYTE PTR [rbp-0x9],0x0
0x14092e44c: mov     rax,QWORD PTR [rdi+0x130]
0x14092e453: test    rax,rax
0x14092e456: je      0x14092e484
0x14092e458: mov     rax,QWORD PTR [rax+0x58]
0x14092e45c: test    rax,rax
0x14092e45f: je      0x14092e484
0x14092e461: mov     edx,DWORD PTR [rax+0x30]
0x14092e464: cmp     edx,0xffffffff
0x14092e467: je      0x14092e484
0x14092e469: lea     rcx,[rip+0x1bdbcf8]        # 0x14250a168
0x14092e470: call    0x140073ba0
0x14092e475: test    rax,rax
0x14092e478: je      0x14092e484
0x14092e47a: mov     rcx,rax
0x14092e47d: call    0x140c521e0
0x14092e482: jmp     0x14092e488
0x14092e484: lea     rax,[rdi+0x38]
0x14092e488: test    rax,rax
0x14092e48b: je      0x14092e4ad
0x14092e48d: cmp     BYTE PTR [rax+0x72],0x0
0x14092e491: je      0x14092e4ad
0x14092e493: xor     r9d,r9d
0x14092e496: mov     r8b,0x1
0x14092e499: lea     rdx,[rbp-0x9]
0x14092e49d: mov     rcx,rax
0x14092e4a0: call    0x140aae180
0x14092e4a5: mov     r15,QWORD PTR [rbp+0xf]
0x14092e4a9: mov     rbx,QWORD PTR [rbp+0x7]
0x14092e4ad: lea     rdx,[rbp-0x9]
0x14092e4b1: cmp     r15,0xf
0x14092e4b5: cmova   rdx,QWORD PTR [rbp-0x9]
0x14092e4ba: mov     r8,rbx
0x14092e4bd: lea     rcx,[rbp-0x29]
0x14092e4c1: call    0x140071040
0x14092e4c6: mov     r8d,0x3
0x14092e4cc: lea     rdx,[rip+0xcda8d1]        # 0x141608da4 ; literal="'s "
0x14092e4d3: lea     rcx,[rbp-0x29]
0x14092e4d7: call    0x140071040
0x14092e4dc: nop     
0x14092e4dd: mov     rdx,QWORD PTR [rbp+0xf]
0x14092e4e1: cmp     rdx,0xf
0x14092e4e5: jbe     0x14092e51b
0x14092e4e7: inc     rdx
0x14092e4ea: mov     rcx,QWORD PTR [rbp-0x9]
0x14092e4ee: mov     rax,rcx
0x14092e4f1: cmp     rdx,0x1000
0x14092e4f8: jb      0x14092e516
0x14092e4fa: add     rdx,0x27
0x14092e4fe: mov     rcx,QWORD PTR [rcx-0x8]
0x14092e502: sub     rax,rcx
0x14092e505: add     rax,0xfffffffffffffff8
0x14092e509: cmp     rax,0x1f
0x14092e50d: jbe     0x14092e516
0x14092e50f: call    QWORD PTR [rip+0xcd262b]        # 0x141600b40
0x14092e515: int3    
0x14092e516: call    0x1415530d0
0x14092e51b: mov     r8d,r14d
0x14092e51e: movzx   edx,r12w
0x14092e522: lea     rcx,[rip+0x1ac5447]        # 0x1423f3970
0x14092e529: call    0x1414c6fe0
0x14092e52e: mov     rbx,rax
0x14092e531: test    rax,rax
0x14092e534: je      0x14092e58b
0x14092e536: cmp     QWORD PTR [rax+0x530],0x0
0x14092e53e: je      0x14092e574
0x14092e540: lea     rdx,[rax+0x520]
0x14092e547: mov     r8,QWORD PTR [rdx+0x10]
0x14092e54b: cmp     QWORD PTR [rdx+0x18],0xf
0x14092e550: jbe     0x14092e555
0x14092e552: mov     rdx,QWORD PTR [rdx]
0x14092e555: lea     rcx,[rbp-0x29]
0x14092e559: call    0x140071040
0x14092e55e: mov     r8d,0x1
0x14092e564: lea     rdx,[rip+0xcd5485]        # 0x1416039f0 ; literal=' '
0x14092e56b: lea     rcx,[rbp-0x29]
0x14092e56f: call    0x140071040
0x14092e574: lea     rdx,[rbx+0xb8]
0x14092e57b: mov     r10,QWORD PTR [rdx+0x10]
0x14092e57f: cmp     QWORD PTR [rdx+0x18],0xf
0x14092e584: jbe     0x14092e598
0x14092e586: mov     rdx,QWORD PTR [rdx]
0x14092e589: jmp     0x14092e598
0x14092e58b: lea     rdx,[rip+0xe7b2f6]        # 0x1417a9888 ; literal='unknown material'
0x14092e592: mov     r10d,0x10
0x14092e598: mov     r8,r10
0x14092e59b: lea     rcx,[rbp-0x29]
0x14092e59f: call    0x140071040
0x14092e5a4: lea     rdx,[rbp-0x29]
0x14092e5a8: cmp     QWORD PTR [rbp-0x11],0xf
0x14092e5ad: cmova   rdx,QWORD PTR [rbp-0x29]
0x14092e5b2: mov     r8,QWORD PTR [rbp-0x19]
0x14092e5b6: mov     rcx,rsi
0x14092e5b9: call    0x140071040
0x14092e5be: mov     r8d,0x5
0x14092e5c4: lea     rdx,[rip+0xdbaa1d]        # 0x1416e8fe8 ; literal=' Logs'
0x14092e5cb: mov     rcx,rsi
0x14092e5ce: call    0x140071040
0x14092e5d3: jmp     0x14092f2e8
0x14092e5d8: mov     rax,QWORD PTR [rdi+0x520]
0x14092e5df: xor     r9d,r9d
0x14092e5e2: xor     edx,edx
0x14092e5e4: mov     r8d,0xffffffff
0x14092e5ea: mov     DWORD PTR [rsp+0x68],ebx
0x14092e5ee: mov     DWORD PTR [rsp+0x60],ebx
0x14092e5f2: mov     BYTE PTR [rsp+0x58],0x1
0x14092e5f7: mov     DWORD PTR [rsp+0x50],r8d
0x14092e5fc: mov     DWORD PTR [rsp+0x48],r8d
0x14092e601: mov     QWORD PTR [rsp+0x40],rbx
0x14092e606: mov     BYTE PTR [rsp+0x38],dl
0x14092e60a: mov     DWORD PTR [rsp+0x30],ebx
0x14092e60e: mov     DWORD PTR [rsp+0x28],r8d
0x14092e613: mov     eax,DWORD PTR [rax+r14*4]
0x14092e617: mov     DWORD PTR [rsp+0x20],eax
0x14092e61b: jmp     0x14092f2e0
0x14092e620: mov     rax,QWORD PTR [rdi+0x550]
0x14092e627: xor     r9d,r9d
0x14092e62a: mov     edx,0x1
0x14092e62f: mov     r8d,0xffffffff
0x14092e635: mov     DWORD PTR [rsp+0x68],ebx
0x14092e639: mov     DWORD PTR [rsp+0x60],ebx
0x14092e63d: mov     BYTE PTR [rsp+0x58],dl
0x14092e641: mov     DWORD PTR [rsp+0x50],r8d
0x14092e646: mov     DWORD PTR [rsp+0x48],r8d
0x14092e64b: mov     QWORD PTR [rsp+0x40],rbx
0x14092e650: mov     BYTE PTR [rsp+0x38],r9b
0x14092e655: jmp     0x14092e60a
0x14092e657: mov     rax,QWORD PTR [rdi+0x550]
0x14092e65e: mov     edx,0x2c
0x14092e663: xor     r9d,r9d
0x14092e666: mov     r8d,0xffffffff
0x14092e66c: mov     DWORD PTR [rsp+0x68],ebx
0x14092e670: mov     DWORD PTR [rsp+0x60],ebx
0x14092e674: mov     BYTE PTR [rsp+0x58],0x1
0x14092e679: mov     DWORD PTR [rsp+0x50],r8d
0x14092e67e: mov     DWORD PTR [rsp+0x48],r8d
0x14092e683: mov     QWORD PTR [rsp+0x40],rbx
0x14092e688: mov     BYTE PTR [rsp+0x38],r9b
0x14092e68d: jmp     0x14092e60a
0x14092e692: mov     rax,QWORD PTR [rdi+0x538]
0x14092e699: mov     edx,0x2
0x14092e69e: jmp     0x14092e663
0x14092e6a0: mov     rax,QWORD PTR [rdi+0xac0]
0x14092e6a7: mov     r9d,DWORD PTR [rax+r14*4]
0x14092e6ab: mov     rax,QWORD PTR [rdi+0xaa8]
0x14092e6b2: mov     edx,0x35
0x14092e6b7: jmp     0x14092f2a6
0x14092e6bc: mov     rax,QWORD PTR [rdi+0x3e8]
0x14092e6c3: mov     r9d,DWORD PTR [rax+r14*4]
0x14092e6c7: mov     rax,QWORD PTR [rdi+0x3d0]
0x14092e6ce: mov     edx,0x2d
0x14092e6d3: jmp     0x14092f2a6
0x14092e6d8: mov     r8,QWORD PTR [rdi+0x148]
0x14092e6df: mov     edx,0x18
0x14092e6e4: mov     r9d,0xffffffff
0x14092e6ea: mov     DWORD PTR [rsp+0x68],ebx
0x14092e6ee: mov     DWORD PTR [rsp+0x60],ebx
0x14092e6f2: mov     BYTE PTR [rsp+0x58],0x1
0x14092e6f7: mov     DWORD PTR [rsp+0x50],r9d
0x14092e6fc: mov     DWORD PTR [rsp+0x48],r9d
0x14092e701: mov     QWORD PTR [rsp+0x40],rbx
0x14092e706: mov     BYTE PTR [rsp+0x38],0x0
0x14092e70b: mov     DWORD PTR [rsp+0x30],ebx
0x14092e70f: mov     DWORD PTR [rsp+0x28],r9d
0x14092e714: mov     DWORD PTR [rsp+0x20],r9d
0x14092e719: movzx   r8d,WORD PTR [r8+r14*2]
0x14092e71e: jmp     0x14092f2e0
0x14092e723: mov     r8,QWORD PTR [rdi+0x160]
0x14092e72a: jmp     0x14092e6df
0x14092e72c: mov     r8,QWORD PTR [rdi+0x178]
0x14092e733: mov     edx,0x19
0x14092e738: jmp     0x14092e6e4
0x14092e73a: mov     r8,QWORD PTR [rdi+0x190]
0x14092e741: mov     edx,0x27
0x14092e746: jmp     0x14092e6e4
0x14092e748: mov     r8,QWORD PTR [rdi+0x220]
0x14092e74f: mov     edx,0x44
0x14092e754: jmp     0x14092e6e4
0x14092e756: mov     r8,QWORD PTR [rdi+0x130]
0x14092e75d: jmp     0x14092e6df
0x14092e75f: mov     r8,QWORD PTR [rdi+0x1a8]
0x14092e766: mov     edx,0x1c
0x14092e76b: jmp     0x14092e6e4
0x14092e770: mov     r8,QWORD PTR [rdi+0x1c0]
0x14092e777: mov     edx,0x1d
0x14092e77c: jmp     0x14092e6e4
0x14092e781: mov     r8,QWORD PTR [rdi+0x1d8]
0x14092e788: mov     edx,0x1a
0x14092e78d: jmp     0x14092e6e4
0x14092e792: mov     r8,QWORD PTR [rdi+0x1f0]
0x14092e799: mov     edx,0x3c
0x14092e79e: jmp     0x14092e6e4
0x14092e7a3: mov     r8,QWORD PTR [rdi+0x208]
0x14092e7aa: mov     edx,0x1b
0x14092e7af: jmp     0x14092e6e4
0x14092e7b4: mov     r8,QWORD PTR [rdi+0x238]
0x14092e7bb: mov     edx,0xe
0x14092e7c0: jmp     0x14092e6e4
0x14092e7c5: mov     r8,QWORD PTR [rdi+0x280]
0x14092e7cc: mov     edx,0x56
0x14092e7d1: jmp     0x14092e6e4
0x14092e7d6: mov     r8,QWORD PTR [rdi+0x250]
0x14092e7dd: mov     edx,0xd
0x14092e7e2: jmp     0x14092e6e4
0x14092e7e7: mov     rax,QWORD PTR [rdi+0xbe0]
0x14092e7ee: movsx   rdx,WORD PTR [rax+r14*2]
0x14092e7f3: mov     rax,QWORD PTR [rdi+0xb38]
0x14092e7fa: movsx   r15,WORD PTR [rax+r14*4]
0x14092e7ff: mov     QWORD PTR [rbp-0x19],rbx
0x14092e803: lea     rax,[rbp-0x29]
0x14092e807: cmp     QWORD PTR [rbp-0x11],0xf
0x14092e80c: cmova   rax,QWORD PTR [rbp-0x29]
0x14092e811: mov     BYTE PTR [rax],0x0
0x14092e814: cmp     dx,0xffff
0x14092e818: je      0x14092e896
0x14092e81e: test    r15w,r15w
0x14092e822: js      0x14092e8de
0x14092e828: mov     rcx,QWORD PTR [rip+0x1be06b9]        # 0x14250eee8
0x14092e82f: mov     rax,QWORD PTR [rip+0x1be06ba]        # 0x14250eef0
0x14092e836: sub     rax,rcx
0x14092e839: sar     rax,0x3
0x14092e83d: cmp     r15,rax
0x14092e840: jae     0x14092e89c
0x14092e842: test    dx,dx
0x14092e845: js      0x14092e89c
0x14092e847: mov     rax,QWORD PTR [rcx+r15*8]
0x14092e84b: mov     rcx,QWORD PTR [rax+0x178]
0x14092e852: mov     rax,QWORD PTR [rax+0x180]
0x14092e859: sub     rax,rcx
0x14092e85c: sar     rax,0x3
0x14092e860: cmp     rdx,rax
0x14092e863: jae     0x14092e89c
0x14092e865: mov     rdx,QWORD PTR [rcx+rdx*8]
0x14092e869: add     rdx,0x20
0x14092e86d: lea     rax,[rbp-0x29]
0x14092e871: cmp     rax,rdx
0x14092e874: je      0x14092e88d
0x14092e876: mov     r8,QWORD PTR [rdx+0x10]
0x14092e87a: cmp     QWORD PTR [rdx+0x18],0xf
0x14092e87f: jbe     0x14092e884
0x14092e881: mov     rdx,QWORD PTR [rdx]
0x14092e884: lea     rcx,[rbp-0x29]
0x14092e888: call    0x140070f00
0x14092e88d: cmp     QWORD PTR [rbp-0x19],0x0
0x14092e892: jbe     0x14092e89c
0x14092e894: jmp     0x14092e8de
0x14092e896: test    r15w,r15w
0x14092e89a: js      0x14092e8de
0x14092e89c: mov     rdx,QWORD PTR [rip+0x1be0645]        # 0x14250eee8
0x14092e8a3: mov     rax,QWORD PTR [rip+0x1be0646]        # 0x14250eef0
0x14092e8aa: sub     rax,rdx
0x14092e8ad: sar     rax,0x3
0x14092e8b1: cmp     r15,rax
0x14092e8b4: jae     0x14092e8de
0x14092e8b6: mov     rdx,QWORD PTR [rdx+r15*8]
0x14092e8ba: add     rdx,0x20
0x14092e8be: lea     rax,[rbp-0x29]
0x14092e8c2: cmp     rax,rdx
0x14092e8c5: je      0x14092e8de
0x14092e8c7: mov     r8,QWORD PTR [rdx+0x10]
0x14092e8cb: cmp     QWORD PTR [rdx+0x18],0xf
0x14092e8d0: jbe     0x14092e8d5
0x14092e8d2: mov     rdx,QWORD PTR [rdx]
0x14092e8d5: lea     rcx,[rbp-0x29]
0x14092e8d9: call    0x140070f00
0x14092e8de: lea     rdx,[rbp-0x29]
0x14092e8e2: cmp     QWORD PTR [rbp-0x11],0xf
0x14092e8e7: cmova   rdx,QWORD PTR [rbp-0x29]
0x14092e8ec: mov     r8,QWORD PTR [rbp-0x19]
0x14092e8f0: mov     rcx,rsi
0x14092e8f3: call    0x140071040
0x14092e8f8: mov     rax,QWORD PTR [rdi+0xb38]
0x14092e8ff: movsx   r11,WORD PTR [rax+r14*4]
0x14092e904: test    r11w,r11w
0x14092e908: js      0x14092f2e8
0x14092e90e: mov     rdx,QWORD PTR [rip+0x1be05db]        # 0x14250eef0
0x14092e915: mov     r9,QWORD PTR [rip+0x1be05cc]        # 0x14250eee8
0x14092e91c: mov     rax,rdx
0x14092e91f: sub     rax,r9
0x14092e922: sar     rax,0x3
0x14092e926: cmp     r11,rax
0x14092e929: jae     0x14092f2e8
0x14092e92f: mov     r8,QWORD PTR [r9+r11*8]
0x14092e933: cmp     DWORD PTR [r8+0x1b0],0x8
0x14092e93b: jle     0x14092e94e
0x14092e93d: mov     rax,QWORD PTR [r8+0x1a8]
0x14092e944: test    BYTE PTR [rax+0x8],0x4
0x14092e948: je      0x14092e94e
0x14092e94a: mov     al,0x1
0x14092e94c: jmp     0x14092e950
0x14092e94e: xor     al,al
0x14092e950: test    al,al
0x14092e952: je      0x14092f2e8
0x14092e958: mov     rax,QWORD PTR [rdi+0xbe0]
0x14092e95f: movsx   r10,WORD PTR [rax+r14*2]
0x14092e964: sub     rdx,r9
0x14092e967: sar     rdx,0x3
0x14092e96b: cmp     r11,rdx
0x14092e96e: jae     0x14092f2e8
0x14092e974: test    r10w,r10w
0x14092e978: js      0x14092f2e8
0x14092e97e: mov     rcx,QWORD PTR [r8+0x178]
0x14092e985: mov     rax,QWORD PTR [r8+0x180]
0x14092e98c: sub     rax,rcx
0x14092e98f: sar     rax,0x3
0x14092e993: cmp     r10,rax
0x14092e996: jae     0x14092f2e8
0x14092e99c: mov     rax,QWORD PTR [rcx+r10*8]
0x14092e9a0: movzx   ecx,BYTE PTR [rax+0x15b8]
0x14092e9a7: test    cl,cl
0x14092e9a9: jne     0x14092e9cf
0x14092e9ab: mov     r8d,0x2
0x14092e9b1: lea     rdx,[rip+0xcd59dc]        # 0x141604394 ; literal=', '
0x14092e9b8: mov     rcx,rsi
0x14092e9bb: call    0x140071040
0x14092e9c0: mov     dl,0xc
0x14092e9c2: mov     rcx,rsi
0x14092e9c5: call    0x1400bb1b0
0x14092e9ca: jmp     0x14092f2e8
0x14092e9cf: cmp     cl,0x1
0x14092e9d2: jne     0x14092f2e8
0x14092e9d8: mov     r8d,0x2
0x14092e9de: lea     rdx,[rip+0xcd59af]        # 0x141604394 ; literal=', '
0x14092e9e5: mov     rcx,rsi
0x14092e9e8: call    0x140071040
0x14092e9ed: mov     dl,0xb
0x14092e9ef: mov     rcx,rsi
0x14092e9f2: call    0x1400bb1b0
0x14092e9f7: jmp     0x14092f2e8
0x14092e9fc: mov     rax,QWORD PTR [rdi+0x8e0]
0x14092ea03: mov     r9d,DWORD PTR [rax+r14*4]
0x14092ea07: mov     rax,QWORD PTR [rdi+0x8c8]
0x14092ea0e: mov     edx,0x49
0x14092ea13: jmp     0x14092f2a6
0x14092ea18: mov     rax,QWORD PTR [rdi+0x910]
0x14092ea1f: mov     r9d,DWORD PTR [rax+r14*4]
0x14092ea23: mov     rax,QWORD PTR [rdi+0x8f8]
0x14092ea2a: mov     edx,0x47
0x14092ea2f: jmp     0x14092f2a6
0x14092ea34: mov     rax,QWORD PTR [rdi+0x940]
0x14092ea3b: mov     r9d,DWORD PTR [rax+r14*4]
0x14092ea3f: mov     rax,QWORD PTR [rdi+0x928]
0x14092ea46: mov     edx,0x46
0x14092ea4b: jmp     0x14092f2a6
0x14092ea50: mov     rax,QWORD PTR [rdi+0x970]
0x14092ea57: mov     r9d,DWORD PTR [rax+r14*4]
0x14092ea5b: mov     rax,QWORD PTR [rdi+0x958]
0x14092ea62: mov     edx,0x49
0x14092ea67: jmp     0x14092f2a6
0x14092ea6c: mov     rax,QWORD PTR [rdi+0x9d0]
0x14092ea73: movsx   r9d,WORD PTR [rax+r14*2]
0x14092ea78: mov     rax,QWORD PTR [rdi+0x9b8]
0x14092ea7f: mov     edx,0x31
0x14092ea84: movsx   r10d,WORD PTR [rdi+0x98]
0x14092ea8c: mov     r8d,0xffffffff
0x14092ea92: mov     DWORD PTR [rsp+0x68],ebx
0x14092ea96: mov     DWORD PTR [rsp+0x60],ebx
0x14092ea9a: mov     BYTE PTR [rsp+0x58],0x1
0x14092ea9f: mov     DWORD PTR [rsp+0x50],r8d
0x14092eaa4: mov     DWORD PTR [rsp+0x48],r10d
0x14092eaa9: mov     QWORD PTR [rsp+0x40],rbx
0x14092eaae: mov     BYTE PTR [rsp+0x38],0x0
0x14092eab3: mov     DWORD PTR [rsp+0x30],ebx
0x14092eab7: mov     DWORD PTR [rsp+0x28],0x1
0x14092eabf: mov     DWORD PTR [rsp+0x20],r9d
0x14092eac4: movzx   r9d,WORD PTR [rax+r14*4]
0x14092eac9: lea     rcx,[rbp-0x29]
0x14092eacd: call    0x140a9c6b0
0x14092ead2: lea     rdx,[rbp-0x29]
0x14092ead6: cmp     QWORD PTR [rbp-0x11],0xf
0x14092eadb: cmova   rdx,QWORD PTR [rbp-0x29]
0x14092eae0: mov     r8,QWORD PTR [rbp-0x19]
0x14092eae4: mov     rcx,rsi
0x14092eae7: call    0x140071040
0x14092eaec: jmp     0x14092f2e8
0x14092eaf1: mov     rax,QWORD PTR [rdi+0xa00]
0x14092eaf8: movsx   r9d,WORD PTR [rax+r14*2]
0x14092eafd: mov     rax,QWORD PTR [rdi+0x9e8]
0x14092eb04: mov     edx,0x58
0x14092eb09: jmp     0x14092ea84
0x14092eb0e: movsx   r10d,WORD PTR [rdi+0x98]
0x14092eb16: mov     rax,QWORD PTR [rdi+0x9a0]
0x14092eb1d: mov     r9d,DWORD PTR [rax+r14*4]
0x14092eb21: mov     rax,QWORD PTR [rdi+0x988]
0x14092eb28: mov     edx,0x30
0x14092eb2d: mov     r8d,0xffffffff
0x14092eb33: mov     DWORD PTR [rsp+0x68],ebx
0x14092eb37: mov     DWORD PTR [rsp+0x60],ebx
0x14092eb3b: mov     BYTE PTR [rsp+0x58],0x1
0x14092eb40: mov     DWORD PTR [rsp+0x50],r8d
0x14092eb45: mov     DWORD PTR [rsp+0x48],r10d
0x14092eb4a: mov     QWORD PTR [rsp+0x40],rbx
0x14092eb4f: mov     BYTE PTR [rsp+0x38],0x0
0x14092eb54: mov     DWORD PTR [rsp+0x30],ebx
0x14092eb58: mov     DWORD PTR [rsp+0x28],0x1
0x14092eb60: mov     DWORD PTR [rsp+0x20],r9d
0x14092eb65: movzx   r9d,WORD PTR [rax+r14*2]
0x14092eb6a: jmp     0x14092eac9
0x14092eb6f: mov     rax,QWORD PTR [rdi+0xa30]
0x14092eb76: mov     r9d,DWORD PTR [rax+r14*4]
0x14092eb7a: mov     rax,QWORD PTR [rdi+0xa18]
0x14092eb81: mov     edx,0x36
0x14092eb86: jmp     0x14092f2a6
0x14092eb8b: mov     rax,QWORD PTR [rdi+0xa60]
0x14092eb92: movsx   r8,WORD PTR [rax+r14*2]
0x14092eb97: mov     rax,QWORD PTR [rdi+0xa48]
0x14092eb9e: movsxd  rdx,DWORD PTR [rax+r14*4]
0x14092eba2: test    edx,edx
0x14092eba4: js      0x14092f2e8
0x14092ebaa: mov     rcx,rdx
0x14092ebad: mov     rax,QWORD PTR [rip+0x1be01cc]        # 0x14250ed80
0x14092ebb4: mov     rdx,QWORD PTR [rip+0x1be01bd]        # 0x14250ed78
0x14092ebbb: sub     rax,rdx
0x14092ebbe: sar     rax,0x3
0x14092ebc2: cmp     rcx,rax
0x14092ebc5: jae     0x14092f2e8
0x14092ebcb: test    r8w,r8w
0x14092ebcf: js      0x14092f2e8
0x14092ebd5: mov     rax,QWORD PTR [rdx+rcx*8]
0x14092ebd9: mov     rcx,QWORD PTR [rax+0x658]
0x14092ebe0: mov     rax,QWORD PTR [rax+0x660]
0x14092ebe7: sub     rax,rcx
0x14092ebea: sar     rax,0x3
0x14092ebee: cmp     r8,rax
0x14092ebf1: jae     0x14092f2e8
0x14092ebf7: mov     rax,QWORD PTR [rcx+r8*8]
0x14092ebfb: movzx   r9d,WORD PTR [rax+0x104]
0x14092ec03: mov     ecx,DWORD PTR [rax+0x108]
0x14092ec09: cmp     r9w,0xffff
0x14092ec0e: je      0x14092f2e8
0x14092ec14: mov     DWORD PTR [rsp+0x68],ebx
0x14092ec18: mov     DWORD PTR [rsp+0x60],ebx
0x14092ec1c: mov     BYTE PTR [rsp+0x58],0x1
0x14092ec21: mov     DWORD PTR [rsp+0x50],0xffffffff
0x14092ec29: mov     DWORD PTR [rsp+0x48],0xffffffff
0x14092ec31: mov     QWORD PTR [rsp+0x40],rbx
0x14092ec36: mov     BYTE PTR [rsp+0x38],0x0
0x14092ec3b: mov     DWORD PTR [rsp+0x30],ebx
0x14092ec3f: mov     DWORD PTR [rsp+0x28],0xffffffff
0x14092ec47: mov     DWORD PTR [rsp+0x20],ecx
0x14092ec4b: movzx   r8d,WORD PTR [rax+0x102]
0x14092ec53: movzx   edx,WORD PTR [rax+0x100]
0x14092ec5a: jmp     0x14092f2e0
0x14092ec5f: mov     rax,QWORD PTR [rdi+0xa90]
0x14092ec66: movsx   r8,WORD PTR [rax+r14*2]
0x14092ec6b: mov     rax,QWORD PTR [rdi+0xa78]
0x14092ec72: jmp     0x14092eb9e
0x14092ec77: lea     r14,[r14*8+0x0]
0x14092ec7f: mov     rax,QWORD PTR [rdi+0xc88]
0x14092ec86: mov     rdx,QWORD PTR [r14+rax*1]
0x14092ec8a: mov     rax,QWORD PTR [rdx+0x10]
0x14092ec8e: sub     rax,QWORD PTR [rdx+0x8]
0x14092ec92: sar     rax,1
0x14092ec95: je      0x14092ed01
0x14092ec97: mov     rax,QWORD PTR [rdx+0x50]
0x14092ec9b: movsx   ecx,WORD PTR [rax]
0x14092ec9e: mov     rax,QWORD PTR [rdx+0x38]
0x14092eca2: movzx   r9d,WORD PTR [rax]
0x14092eca6: mov     rax,QWORD PTR [rdx+0x20]
0x14092ecaa: mov     r8d,0xffffffff
0x14092ecb0: mov     DWORD PTR [rsp+0x68],ebx
0x14092ecb4: mov     DWORD PTR [rsp+0x60],ebx
0x14092ecb8: mov     BYTE PTR [rsp+0x58],0x1
0x14092ecbd: mov     DWORD PTR [rsp+0x50],r8d
0x14092ecc2: mov     DWORD PTR [rsp+0x48],r8d
0x14092ecc7: mov     QWORD PTR [rsp+0x40],rbx
0x14092eccc: mov     BYTE PTR [rsp+0x38],0x1
0x14092ecd1: mov     DWORD PTR [rsp+0x30],ebx
0x14092ecd5: mov     DWORD PTR [rsp+0x28],0x1
0x14092ecdd: mov     DWORD PTR [rsp+0x20],ecx
0x14092ece1: movzx   edx,WORD PTR [rax]
0x14092ece4: mov     rcx,rsi
0x14092ece7: call    0x140a9c6b0
0x14092ecec: mov     r8d,0x1
0x14092ecf2: lea     rdx,[rip+0xcd4cf7]        # 0x1416039f0 ; literal=' '
0x14092ecf9: mov     rcx,rsi
0x14092ecfc: call    0x140071040
0x14092ed01: mov     rax,QWORD PTR [rdi+0xc88]
0x14092ed08: mov     rcx,QWORD PTR [r14+rax*1]
0x14092ed0c: movzx   r9d,WORD PTR [rcx]
0x14092ed10: mov     rcx,QWORD PTR [rip+0x1be0641]        # 0x14250f358
0x14092ed17: mov     r8,QWORD PTR [rip+0x1be0632]        # 0x14250f350
0x14092ed1e: sub     rcx,r8
0x14092ed21: sar     rcx,0x3
0x14092ed25: sub     ecx,0x1
0x14092ed28: movsxd  rdx,ecx
0x14092ed2b: js      0x14092ed43
0x14092ed2d: nop     DWORD PTR [rax]
0x14092ed30: mov     rax,QWORD PTR [r8+rdx*8]
0x14092ed34: cmp     WORD PTR [rax+0x28],r9w
0x14092ed39: je      0x14092ed80
0x14092ed3b: dec     ecx
0x14092ed3d: sub     rdx,0x1
0x14092ed41: jns     0x14092ed30
0x14092ed43: mov     rdi,QWORD PTR [rbp-0x11]
0x14092ed47: cmp     rdi,0xd
0x14092ed4b: jb      0x14092edb9
0x14092ed4d: lea     rbx,[rbp-0x29]
0x14092ed51: cmp     rdi,0xf
0x14092ed55: cmova   rbx,QWORD PTR [rbp-0x29]
0x14092ed5a: mov     QWORD PTR [rbp-0x19],0xd
0x14092ed62: mov     r8d,0xd
0x14092ed68: lea     rdx,[rip+0xdf2ff9]        # 0x141721d68 ; literal='Prepared Food'
0x14092ed6f: mov     rcx,rbx
0x14092ed72: call    0x14155486a
0x14092ed77: mov     BYTE PTR [rbx+0xd],0x0
0x14092ed7b: jmp     0x14092ead2
0x14092ed80: movsxd  rax,ecx
0x14092ed83: mov     rdx,QWORD PTR [r8+rax*8]
0x14092ed87: test    rdx,rdx
0x14092ed8a: je      0x14092ed43
0x14092ed8c: add     rdx,0x68
0x14092ed90: lea     rax,[rbp-0x29]
0x14092ed94: cmp     rax,rdx
0x14092ed97: je      0x14092ead2
0x14092ed9d: mov     r8,QWORD PTR [rdx+0x10]
0x14092eda1: cmp     QWORD PTR [rdx+0x18],0xf
0x14092eda6: jbe     0x14092edab
0x14092eda8: mov     rdx,QWORD PTR [rdx]
0x14092edab: lea     rcx,[rbp-0x29]
0x14092edaf: call    0x140070f00
0x14092edb4: jmp     0x14092ead2
0x14092edb9: mov     rcx,rdi
0x14092edbc: shr     rcx,1
0x14092edbf: movabs  rbx,0x7fffffffffffffff
0x14092edc9: mov     rax,rbx
0x14092edcc: sub     rax,rcx
0x14092edcf: cmp     rdi,rax
0x14092edd2: ja      0x14092ede2
0x14092edd4: lea     rax,[rdi+rcx*1]
0x14092edd8: mov     rbx,r15
0x14092eddb: cmp     rax,rbx
0x14092edde: cmova   rbx,rax
0x14092ede2: lea     rcx,[rbx+0x1]
0x14092ede6: call    0x140071e00
0x14092edeb: mov     r14,rax
0x14092edee: mov     QWORD PTR [rbp-0x19],0xd
0x14092edf6: mov     QWORD PTR [rbp-0x11],rbx
0x14092edfa: movsd   xmm0,QWORD PTR [rip+0xdf2f66]        # 0x141721d68 ; literal='Prepared Food'
0x14092ee02: movsd   QWORD PTR [rax],xmm0
0x14092ee06: mov     ecx,DWORD PTR [rip+0xdf2f64]        # 0x141721d70 ; literal=' Food'
0x14092ee0c: mov     DWORD PTR [rax+0x8],ecx
0x14092ee0f: movzx   ecx,BYTE PTR [rip+0xdf2f5e]        # 0x141721d74 ; literal='d'
0x14092ee16: mov     BYTE PTR [rax+0xc],cl
0x14092ee19: mov     BYTE PTR [rax+0xd],0x0
0x14092ee1d: cmp     rdi,0xf
0x14092ee21: jbe     0x14092ee55
0x14092ee23: lea     rdx,[rdi+0x1]
0x14092ee27: mov     rcx,QWORD PTR [rbp-0x29]
0x14092ee2b: mov     rax,rcx
0x14092ee2e: cmp     rdx,0x1000
0x14092ee35: jb      0x14092ee50
0x14092ee37: add     rdx,0x27
0x14092ee3b: mov     rcx,QWORD PTR [rcx-0x8]
0x14092ee3f: sub     rax,rcx
0x14092ee42: add     rax,0xfffffffffffffff8
0x14092ee46: cmp     rax,0x1f
0x14092ee4a: ja      0x14092efe4
0x14092ee50: call    0x1415530d0
0x14092ee55: mov     QWORD PTR [rbp-0x29],r14
0x14092ee59: jmp     0x14092ead2
0x14092ee5e: lea     r14,[r14*8+0x0]
0x14092ee66: mov     rax,QWORD PTR [rdi+0xca0]
0x14092ee6d: mov     rdx,QWORD PTR [r14+rax*1]
0x14092ee71: mov     rax,QWORD PTR [rdx+0x10]
0x14092ee75: sub     rax,QWORD PTR [rdx+0x8]
0x14092ee79: sar     rax,1
0x14092ee7c: je      0x14092eee8
0x14092ee7e: mov     rax,QWORD PTR [rdx+0x50]
0x14092ee82: movsx   ecx,WORD PTR [rax]
0x14092ee85: mov     rax,QWORD PTR [rdx+0x38]
0x14092ee89: movzx   r9d,WORD PTR [rax]
0x14092ee8d: mov     rax,QWORD PTR [rdx+0x20]
0x14092ee91: mov     r8d,0xffffffff
0x14092ee97: mov     DWORD PTR [rsp+0x68],ebx
0x14092ee9b: mov     DWORD PTR [rsp+0x60],ebx
0x14092ee9f: mov     BYTE PTR [rsp+0x58],0x1
0x14092eea4: mov     DWORD PTR [rsp+0x50],r8d
0x14092eea9: mov     DWORD PTR [rsp+0x48],r8d
0x14092eeae: mov     QWORD PTR [rsp+0x40],rbx
0x14092eeb3: mov     BYTE PTR [rsp+0x38],0x1
0x14092eeb8: mov     DWORD PTR [rsp+0x30],ebx
0x14092eebc: mov     DWORD PTR [rsp+0x28],0x1
0x14092eec4: mov     DWORD PTR [rsp+0x20],ecx
0x14092eec8: movzx   edx,WORD PTR [rax]
0x14092eecb: mov     rcx,rsi
0x14092eece: call    0x140a9c6b0
0x14092eed3: mov     r8d,0x1
0x14092eed9: lea     rdx,[rip+0xcd4b10]        # 0x1416039f0 ; literal=' '
0x14092eee0: mov     rcx,rsi
0x14092eee3: call    0x140071040
0x14092eee8: mov     rax,QWORD PTR [rdi+0xca0]
0x14092eeef: mov     rcx,QWORD PTR [r14+rax*1]
0x14092eef3: movzx   r9d,WORD PTR [rcx]
0x14092eef7: mov     rcx,QWORD PTR [rip+0x1be045a]        # 0x14250f358
0x14092eefe: mov     r8,QWORD PTR [rip+0x1be044b]        # 0x14250f350
0x14092ef05: sub     rcx,r8
0x14092ef08: sar     rcx,0x3
0x14092ef0c: sub     ecx,0x1
0x14092ef0f: movsxd  rdx,ecx
0x14092ef12: js      0x14092ef37
0x14092ef14: nop     DWORD PTR [rax+0x0]
0x14092ef18: nop     DWORD PTR [rax+rax*1+0x0]
0x14092ef20: mov     rax,QWORD PTR [r8+rdx*8]
0x14092ef24: cmp     WORD PTR [rax+0x28],r9w
0x14092ef29: je      0x14092efeb
0x14092ef2f: dec     ecx
0x14092ef31: sub     rdx,0x1
0x14092ef35: jns     0x14092ef20
0x14092ef37: mov     rdi,QWORD PTR [rbp-0x11]
0x14092ef3b: cmp     rdi,0xd
0x14092ef3f: jae     0x14092ed4d
0x14092ef45: mov     rcx,rdi
0x14092ef48: shr     rcx,1
0x14092ef4b: movabs  rbx,0x7fffffffffffffff
0x14092ef55: mov     rax,rbx
0x14092ef58: sub     rax,rcx
0x14092ef5b: cmp     rdi,rax
0x14092ef5e: ja      0x14092ef6e
0x14092ef60: lea     rax,[rcx+rdi*1]
0x14092ef64: mov     rbx,r15
0x14092ef67: cmp     rax,rbx
0x14092ef6a: cmova   rbx,rax
0x14092ef6e: lea     rcx,[rbx+0x1]
0x14092ef72: call    0x140071e00
0x14092ef77: mov     r14,rax
0x14092ef7a: mov     QWORD PTR [rbp-0x19],0xd
0x14092ef82: mov     QWORD PTR [rbp-0x11],rbx
0x14092ef86: movsd   xmm0,QWORD PTR [rip+0xdf2dda]        # 0x141721d68 ; literal='Prepared Food'
0x14092ef8e: movsd   QWORD PTR [rax],xmm0
0x14092ef92: mov     ecx,DWORD PTR [rip+0xdf2dd8]        # 0x141721d70 ; literal=' Food'
0x14092ef98: mov     DWORD PTR [rax+0x8],ecx
0x14092ef9b: movzx   ecx,BYTE PTR [rip+0xdf2dd2]        # 0x141721d74 ; literal='d'
0x14092efa2: mov     BYTE PTR [rax+0xc],cl
0x14092efa5: mov     BYTE PTR [rax+0xd],0x0
0x14092efa9: cmp     rdi,0xf
0x14092efad: jbe     0x14092ee55
0x14092efb3: lea     rdx,[rdi+0x1]
0x14092efb7: mov     rcx,QWORD PTR [rbp-0x29]
0x14092efbb: mov     rax,rcx
0x14092efbe: cmp     rdx,0x1000
0x14092efc5: jb      0x14092ee50
0x14092efcb: add     rdx,0x27
0x14092efcf: mov     rcx,QWORD PTR [rcx-0x8]
0x14092efd3: sub     rax,rcx
0x14092efd6: add     rax,0xfffffffffffffff8
0x14092efda: cmp     rax,0x1f
0x14092efde: jbe     0x14092ee50
0x14092efe4: call    QWORD PTR [rip+0xcd1b56]        # 0x141600b40
0x14092efea: int3    
0x14092efeb: movsxd  rax,ecx
0x14092efee: mov     rdx,QWORD PTR [r8+rax*8]
0x14092eff2: test    rdx,rdx
0x14092eff5: je      0x14092ef37
0x14092effb: add     rdx,0x68
0x14092efff: lea     rax,[rbp-0x29]
0x14092f003: cmp     rax,rdx
0x14092f006: je      0x14092ead2
0x14092f00c: mov     r8,QWORD PTR [rdx+0x10]
0x14092f010: cmp     QWORD PTR [rdx+0x18],0xf
0x14092f015: jbe     0x14092f01a
0x14092f017: mov     rdx,QWORD PTR [rdx]
0x14092f01a: lea     rcx,[rbp-0x29]
0x14092f01e: call    0x140070f00
0x14092f023: jmp     0x14092ead2
0x14092f028: mov     rax,QWORD PTR [rdi+0x538]
0x14092f02f: mov     edx,0x4
0x14092f034: jmp     0x14092e663
0x14092f039: mov     rax,QWORD PTR [rdi+0x6d0]
0x14092f040: mov     r9d,DWORD PTR [rax+r14*4]
0x14092f044: mov     rax,QWORD PTR [rdi+0x6b8]
0x14092f04b: mov     edx,0x46
0x14092f050: jmp     0x14092f2a6
0x14092f055: mov     rax,QWORD PTR [rdi+0x700]
0x14092f05c: mov     r9d,DWORD PTR [rax+r14*4]
0x14092f060: mov     rax,QWORD PTR [rdi+0x6e8]
0x14092f067: mov     edx,0x4
0x14092f06c: jmp     0x14092f2a6
0x14092f071: mov     rax,QWORD PTR [rdi+0x6a0]
0x14092f078: mov     r9d,DWORD PTR [rax+r14*4]
0x14092f07c: mov     rax,QWORD PTR [rdi+0x688]
0x14092f083: mov     edx,0x3
0x14092f088: jmp     0x14092f2a6
0x14092f08d: mov     rax,QWORD PTR [rdi+0x850]
0x14092f094: mov     r9d,DWORD PTR [rax+r14*4]
0x14092f098: mov     rax,QWORD PTR [rdi+0x838]
0x14092f09f: mov     edx,0x10
0x14092f0a4: jmp     0x14092f2a6
0x14092f0a9: mov     rax,QWORD PTR [rdi+0x418]
0x14092f0b0: mov     r9d,DWORD PTR [rax+r14*4]
0x14092f0b4: mov     rax,QWORD PTR [rdi+0x400]
0x14092f0bb: mov     edx,0x1f
0x14092f0c0: jmp     0x14092f2a6
0x14092f0c5: mov     rax,QWORD PTR [rdi+0x478]
0x14092f0cc: mov     r9d,DWORD PTR [rax+r14*4]
0x14092f0d0: mov     rax,QWORD PTR [rdi+0x460]
0x14092f0d7: mov     edx,0x1f
0x14092f0dc: jmp     0x14092f2a6
0x14092f0e1: mov     rax,QWORD PTR [rdi+0x4a8]
0x14092f0e8: mov     r9d,DWORD PTR [rax+r14*4]
0x14092f0ec: mov     rax,QWORD PTR [rdi+0x490]
0x14092f0f3: mov     edx,0x1f
0x14092f0f8: jmp     0x14092f2a6
0x14092f0fd: mov     rax,QWORD PTR [rdi+0x4d8]
0x14092f104: mov     r9d,DWORD PTR [rax+r14*4]
0x14092f108: mov     rax,QWORD PTR [rdi+0x4c0]
0x14092f10f: mov     edx,0x1f
0x14092f114: jmp     0x14092f2a6
0x14092f119: mov     rax,QWORD PTR [rdi+0x478]
0x14092f120: mov     r9d,DWORD PTR [rax+r14*4]
0x14092f124: mov     rax,QWORD PTR [rdi+0x460]
0x14092f12b: mov     edx,0x39
0x14092f130: jmp     0x14092f2a6
0x14092f135: mov     rax,QWORD PTR [rdi+0x4a8]
0x14092f13c: mov     r9d,DWORD PTR [rax+r14*4]
0x14092f140: mov     rax,QWORD PTR [rdi+0x490]
0x14092f147: mov     edx,0x39
0x14092f14c: jmp     0x14092f2a6
0x14092f151: mov     rax,QWORD PTR [rdi+0x4d8]
0x14092f158: mov     r9d,DWORD PTR [rax+r14*4]
0x14092f15c: mov     rax,QWORD PTR [rdi+0x4c0]
0x14092f163: mov     edx,0x39
0x14092f168: jmp     0x14092f2a6
0x14092f16d: mov     rax,QWORD PTR [rdi+0x478]
0x14092f174: mov     r9d,DWORD PTR [rax+r14*4]
0x14092f178: mov     rax,QWORD PTR [rdi+0x460]
0x14092f17f: mov     edx,0xa
0x14092f184: jmp     0x14092f2a6
0x14092f189: mov     rax,QWORD PTR [rdi+0x4a8]
0x14092f190: mov     r9d,DWORD PTR [rax+r14*4]
0x14092f194: mov     rax,QWORD PTR [rdi+0x490]
0x14092f19b: mov     edx,0xa
0x14092f1a0: jmp     0x14092f2a6
0x14092f1a5: mov     rax,QWORD PTR [rdi+0x4d8]
0x14092f1ac: mov     r9d,DWORD PTR [rax+r14*4]
0x14092f1b0: mov     rax,QWORD PTR [rdi+0x4c0]
0x14092f1b7: mov     edx,0xa
0x14092f1bc: jmp     0x14092f2a6
0x14092f1c1: mov     edx,0x11
0x14092f1c6: jmp     0x14092f294
0x14092f1cb: mov     rax,QWORD PTR [rdi+0xb20]
0x14092f1d2: mov     edx,DWORD PTR [rax+r14*4]
0x14092f1d6: mov     rax,QWORD PTR [rdi+0xb08]
0x14092f1dd: movzx   r9d,WORD PTR [rax+r14*2]
0x14092f1e2: mov     rax,QWORD PTR [rdi+0xaf0]
0x14092f1e9: movzx   r8d,WORD PTR [rax+r14*2]
0x14092f1ee: mov     rax,QWORD PTR [rdi+0xad8]
0x14092f1f5: mov     DWORD PTR [rsp+0x68],ebx
0x14092f1f9: mov     DWORD PTR [rsp+0x60],ebx
0x14092f1fd: mov     BYTE PTR [rsp+0x58],0x1
0x14092f202: mov     DWORD PTR [rsp+0x50],0xffffffff
0x14092f20a: mov     DWORD PTR [rsp+0x48],0xffffffff
0x14092f212: mov     QWORD PTR [rsp+0x40],rbx
0x14092f217: mov     BYTE PTR [rsp+0x38],0x0
0x14092f21c: mov     DWORD PTR [rsp+0x30],ebx
0x14092f220: mov     DWORD PTR [rsp+0x28],0xffffffff
0x14092f228: mov     DWORD PTR [rsp+0x20],edx
0x14092f22c: movzx   edx,WORD PTR [rax+r14*2]
0x14092f231: jmp     0x14092f2e0
0x14092f236: mov     rax,QWORD PTR [rdi+0x7c0]
0x14092f23d: mov     r9d,DWORD PTR [rax+r14*4]
0x14092f241: mov     rax,QWORD PTR [rdi+0x7a8]
0x14092f248: mov     edx,0xb
0x14092f24d: jmp     0x14092f2a6
0x14092f24f: mov     rax,QWORD PTR [rdi+0x7f0]
0x14092f256: mov     r9d,DWORD PTR [rax+r14*4]
0x14092f25a: mov     rax,QWORD PTR [rdi+0x7d8]
0x14092f261: mov     edx,0x3e
0x14092f266: jmp     0x14092f2a6
0x14092f268: mov     rax,QWORD PTR [rdi+0x820]
0x14092f26f: mov     r9d,DWORD PTR [rax+r14*4]
0x14092f273: mov     rax,QWORD PTR [rdi+0x808]
0x14092f27a: mov     edx,0x3d
0x14092f27f: jmp     0x14092f2a6
0x14092f281: mov     edx,0x12
0x14092f286: jmp     0x14092f294
0x14092f288: mov     edx,0x52
0x14092f28d: jmp     0x14092f294
0x14092f28f: mov     edx,0x53
0x14092f294: mov     rax,QWORD PTR [rdi+0x790]
0x14092f29b: mov     r9d,DWORD PTR [rax+r14*4]
0x14092f29f: mov     rax,QWORD PTR [rdi+0x778]
0x14092f2a6: mov     DWORD PTR [rsp+0x68],ebx
0x14092f2aa: mov     DWORD PTR [rsp+0x60],ebx
0x14092f2ae: mov     BYTE PTR [rsp+0x58],0x1
0x14092f2b3: mov     r8d,0xffffffff
0x14092f2b9: mov     DWORD PTR [rsp+0x50],r8d
0x14092f2be: mov     DWORD PTR [rsp+0x48],r8d
0x14092f2c3: mov     QWORD PTR [rsp+0x40],rbx
0x14092f2c8: mov     BYTE PTR [rsp+0x38],0x0
0x14092f2cd: mov     DWORD PTR [rsp+0x30],ebx
0x14092f2d1: mov     DWORD PTR [rsp+0x28],r8d
0x14092f2d6: mov     DWORD PTR [rsp+0x20],r9d
0x14092f2db: movzx   r9d,WORD PTR [rax+r14*2]
0x14092f2e0: mov     rcx,rsi
0x14092f2e3: call    0x140a9c6b0
0x14092f2e8: mov     rcx,rsi
0x14092f2eb: call    0x1405468a0
0x14092f2f0: nop     
0x14092f2f1: mov     rdx,QWORD PTR [rbp-0x11]
0x14092f2f5: cmp     rdx,0xf
0x14092f2f9: jbe     0x14092f32f
0x14092f2fb: inc     rdx
0x14092f2fe: mov     rcx,QWORD PTR [rbp-0x29]
0x14092f302: mov     rax,rcx
0x14092f305: cmp     rdx,0x1000
0x14092f30c: jb      0x14092f32a
0x14092f30e: add     rdx,0x27
0x14092f312: mov     rcx,QWORD PTR [rcx-0x8]
0x14092f316: sub     rax,rcx
0x14092f319: add     rax,0xfffffffffffffff8
0x14092f31d: cmp     rax,0x1f
0x14092f321: jbe     0x14092f32a
0x14092f323: call    QWORD PTR [rip+0xcd1817]        # 0x141600b40
0x14092f329: int3    
0x14092f32a: call    0x1415530d0
0x14092f32f: mov     rcx,QWORD PTR [rbp+0x17]
0x14092f333: xor     rcx,rsp
0x14092f336: call    0x1415530b0
0x14092f33b: add     rsp,0xc0
0x14092f342: pop     r15
0x14092f344: pop     r14
0x14092f346: pop     r12
0x14092f348: pop     rdi
0x14092f349: pop     rsi
0x14092f34a: pop     rbx
0x14092f34b: pop     rbp
0x14092f34c: ret     
0x14092f34d: nop     DWORD PTR [rax]
0x14092f350: mov     al,ah
0x14092f352: xchg    edx,eax
0x14092f353: add     al,al
0x14092f355: loopne  0x14092f2e9
0x14092f357: add     ah,bl
0x14092f359: loopne  0x14092f2ed
0x14092f35b: add     BYTE PTR [rcx+riz*8],dl
0x14092f35e: xchg    edx,eax
0x14092f35f: add     BYTE PTR [rsi-0x1d],dh
0x14092f362: xchg    edx,eax
0x14092f363: add     al,bl
0x14092f365: in      eax,0x92
0x14092f367: add     BYTE PTR [rax],ah
0x14092f369: out     0x92,al
0x14092f36b: add     BYTE PTR [rdi-0x1a],dl
0x14092f36e: xchg    edx,eax
0x14092f36f: add     BYTE PTR [rdx-0x5fff6d1a],dl
0x14092f375: out     0x92,al
0x14092f377: add     BYTE PTR [rsi+riz*8-0x1927ff6e],bh
0x14092f37e: xchg    edx,eax
0x14092f37f: add     BYTE PTR [rbx],ah
0x14092f381: out     0x92,eax
0x14092f383: add     BYTE PTR [rdx],bh
0x14092f385: out     0x92,eax
0x14092f387: add     BYTE PTR [rax-0x19],cl
0x14092f38a: xchg    edx,eax
0x14092f38b: add     BYTE PTR [rsi-0x19],dl
0x14092f38e: xchg    edx,eax
0x14092f38f: add     BYTE PTR [rdi+riz*8],ch
0x14092f392: xchg    edx,eax
0x14092f393: add     BYTE PTR [rdi-0x19],bl
0x14092f396: xchg    edx,eax
0x14092f397: add     BYTE PTR [rax-0x19],dh
0x14092f39a: xchg    edx,eax
0x14092f39b: add     BYTE PTR [rcx-0x6dff6d19],al
0x14092f3a1: out     0x92,eax
0x14092f3a3: add     BYTE PTR [rbx-0x4bff6d19],ah
0x14092f3a9: out     0x92,eax
0x14092f3ab: add     dh,dl
0x14092f3ad: out     0x92,eax
0x14092f3af: add     bh,ah
0x14092f3b1: out     0x92,eax
0x14092f3b3: add     ah,bh
0x14092f3b5: jmp     0x12aaaf44c
0x14092f3ba: xchg    edx,eax
0x14092f3bb: add     BYTE PTR [rdx+rbp*8],dh
0x14092f3be: xchg    edx,eax
0x14092f3bf: add     BYTE PTR [rax-0x16],dl
0x14092f3c2: xchg    edx,eax
0x14092f3c3: add     BYTE PTR [rsi],cl
0x14092f3c5: jmp     0x14092f359
0x14092f3c7: add     BYTE PTR [rdx+rbp*8-0x6e],ch
0x14092f3cb: add     BYTE PTR [rdi-0x15],ch
0x14092f3ce: xchg    edx,eax
0x14092f3cf: add     BYTE PTR [rbx+0x5f0092eb],cl
0x14092f3d5: in      al,dx
0x14092f3d6: xchg    edx,eax
0x14092f3d7: add     BYTE PTR [rdi-0x14],dh
0x14092f3da: xchg    edx,eax
0x14092f3db: add     BYTE PTR [rsi-0x12],bl
0x14092f3de: xchg    edx,eax
0x14092f3df: add     BYTE PTR [rax],ch
0x14092f3e1: lock    xchg edx,eax
0x14092f3e3: add     BYTE PTR [rbp-0x56ff6d10],cl
0x14092f3e9: lock    xchg edx,eax
0x14092f3eb: add     ch,al
0x14092f3ed: lock    xchg edx,eax
0x14092f3ef: add     cl,ah
0x14092f3f1: lock    xchg edx,eax
0x14092f3f3: add     BYTE PTR [rcx],bl
0x14092f3f5: int1    
0x14092f3f6: xchg    edx,eax
0x14092f3f7: add     BYTE PTR [rip+0x6d0092f1],dh        # 0x1ad9386ee
0x14092f3fd: int1    
0x14092f3fe: xchg    edx,eax
0x14092f3ff: add     BYTE PTR [rcx-0x3eff6d0f],cl
0x14092f405: int1    
0x14092f406: xchg    edx,eax
0x14092f407: add     BYTE PTR [rsi],dh
0x14092f409: repnz   xchg edx,eax
0x14092f40b: add     BYTE PTR [rdi-0xe],cl
0x14092f40e: xchg    edx,eax
0x14092f40f: add     BYTE PTR [rax-0xe],ch
0x14092f412: xchg    edx,eax
0x14092f413: add     BYTE PTR [rcx],bh
0x14092f415: lock    xchg edx,eax
0x14092f417: add     BYTE PTR [rcx-0x10],dh
0x14092f41a: xchg    edx,eax
0x14092f41b: add     bl,cl
0x14092f41d: int1    
0x14092f41e: xchg    edx,eax
0x14092f41f: add     BYTE PTR [rcx-0x77ff6d0e],al
0x14092f425: repnz   xchg edx,eax
0x14092f427: add     BYTE PTR [rdi-0xeff6d0e],cl
0x14092f42e: xchg    edx,eax
0x14092f42f: add     ch,bh
0x14092f431: lock    xchg edx,eax
0x14092f433: add     BYTE PTR [rbp-0x7ff6d0f],ah
0x14092f439: loopne  0x14092f3cd
0x14092f43b: add     BYTE PTR [rcx-0xf],dl
0x14092f43e: xchg    edx,eax
0x14092f43f: add     ch,al
0x14092f441: out     0x92,eax
0x14092f443: add     BYTE PTR [rbp-0x10],dl
0x14092f446: xchg    edx,eax
0x14092f447: add     BYTE PTR [rax+riz*8-0x1f93ff6e],ah
0x14092f44e: xchg    edx,eax
