0x14092b600: rex     push rbp
0x14092b602: push    rbx
0x14092b603: push    rsi
0x14092b604: push    rdi
0x14092b605: push    r12
0x14092b607: push    r14
0x14092b609: push    r15
0x14092b60b: lea     rbp,[rsp-0x27]
0x14092b610: sub     rsp,0xc0
0x14092b617: mov     rax,QWORD PTR [rip+0xf8ca22]        # 0x1418b8040
0x14092b61e: xor     rax,rsp
0x14092b621: mov     QWORD PTR [rbp+0x17],rax
0x14092b625: mov     rsi,r9
0x14092b628: movsx   r14,r8w
0x14092b62c: mov     rdi,rcx
0x14092b62f: xorps   xmm0,xmm0
0x14092b632: movups  XMMWORD PTR [rbp-0x29],xmm0
0x14092b636: xor     ebx,ebx
0x14092b638: mov     QWORD PTR [rbp-0x19],rbx
0x14092b63c: mov     r15d,0xf
0x14092b642: mov     QWORD PTR [rbp-0x11],r15
0x14092b646: mov     BYTE PTR [rbp-0x29],bl
0x14092b649: mov     QWORD PTR [r9+0x10],rbx
0x14092b64d: mov     rax,r9
0x14092b650: cmp     QWORD PTR [r9+0x18],r15
0x14092b654: jbe     0x14092b659
0x14092b656: mov     rax,QWORD PTR [r9]
0x14092b659: mov     BYTE PTR [rax],0x0
0x14092b65c: movsx   rax,dx
0x14092b660: cmp     eax,0x3f
0x14092b663: ja      0x14092c8f8
0x14092b669: lea     rdx,[rip+0xffffffffff6d4990]        # 0x140000000
0x14092b670: mov     ecx,DWORD PTR [rdx+rax*4+0x92c960]
0x14092b677: add     rcx,rdx
0x14092b67a: jmp     rcx
0x14092b67c: mov     rax,QWORD PTR [rdi+0x730]
0x14092b683: mov     r9d,DWORD PTR [rax+r14*4]
0x14092b687: mov     rax,QWORD PTR [rdi+0x718]
0x14092b68e: mov     edx,0xc
0x14092b693: jmp     0x14092c8b6
0x14092b698: mov     rax,QWORD PTR [rdi+0x418]
0x14092b69f: mov     r9d,DWORD PTR [rax+r14*4]
0x14092b6a3: mov     rax,QWORD PTR [rdi+0x400]
0x14092b6aa: mov     edx,0x37
0x14092b6af: jmp     0x14092c8b6
0x14092b6b4: mov     rax,QWORD PTR [rdi+0x448]
0x14092b6bb: mov     r9d,DWORD PTR [rax+r14*4]
0x14092b6bf: mov     rax,QWORD PTR [rdi+0x430]
0x14092b6c6: mov     edx,0x5a
0x14092b6cb: jmp     0x14092c8b6
0x14092b6d0: mov     rax,QWORD PTR [rdi+0x478]
0x14092b6d7: mov     r9d,DWORD PTR [rax+r14*4]
0x14092b6db: mov     rax,QWORD PTR [rdi+0x460]
0x14092b6e2: mov     edx,0x3a
0x14092b6e7: jmp     0x14092c8b6
0x14092b6ec: mov     rax,QWORD PTR [rdi+0x4a8]
0x14092b6f3: mov     r9d,DWORD PTR [rax+r14*4]
0x14092b6f7: mov     rax,QWORD PTR [rdi+0x490]
0x14092b6fe: mov     edx,0x3a
0x14092b703: jmp     0x14092c8b6
0x14092b708: mov     rax,QWORD PTR [rdi+0x4d8]
0x14092b70f: mov     r9d,DWORD PTR [rax+r14*4]
0x14092b713: mov     rax,QWORD PTR [rdi+0x4c0]
0x14092b71a: mov     edx,0x3a
0x14092b71f: jmp     0x14092c8b6
0x14092b724: mov     rcx,r14
0x14092b727: mov     rax,QWORD PTR [rdi+0x730]
0x14092b72e: mov     r14d,DWORD PTR [rax+r14*4]
0x14092b732: mov     rax,QWORD PTR [rdi+0x718]
0x14092b739: movzx   r12d,WORD PTR [rax+rcx*2]
0x14092b73e: mov     QWORD PTR [rbp-0x19],rbx
0x14092b742: lea     rax,[rbp-0x29]
0x14092b746: cmp     QWORD PTR [rbp-0x11],0xf
0x14092b74b: cmova   rax,QWORD PTR [rbp-0x29]
0x14092b750: mov     BYTE PTR [rax],0x0
0x14092b753: mov     ecx,0xdb
0x14092b758: movzx   eax,r12w
0x14092b75c: sub     ax,cx
0x14092b75f: mov     ecx,0xc7
0x14092b764: cmp     ax,cx
0x14092b767: ja      0x14092b8c9
0x14092b76d: mov     r8,QWORD PTR [rip+0x1bea92c]        # 0x1425160a0
0x14092b774: mov     r10,QWORD PTR [rip+0x1bea91d]        # 0x142516098
0x14092b77b: sub     r8,r10
0x14092b77e: sar     r8,0x3
0x14092b782: test    r8,r8
0x14092b785: je      0x14092b8c9
0x14092b78b: cmp     r14d,0xffffffff
0x14092b78f: je      0x14092b8c9
0x14092b795: mov     edx,ebx
0x14092b797: sub     r8d,0x1
0x14092b79b: js      0x14092b8c9
0x14092b7a1: lea     ecx,[r8+rdx*1]
0x14092b7a5: sar     ecx,1
0x14092b7a7: movsxd  rax,ecx
0x14092b7aa: mov     rdi,QWORD PTR [r10+rax*8]
0x14092b7ae: cmp     DWORD PTR [rdi+0xe0],r14d
0x14092b7b5: je      0x14092b7d1
0x14092b7b7: lea     eax,[rcx-0x1]
0x14092b7ba: cmovle  eax,r8d
0x14092b7be: mov     r8d,eax
0x14092b7c1: lea     eax,[rcx+0x1]
0x14092b7c4: cmovle  edx,eax
0x14092b7c7: cmp     edx,r8d
0x14092b7ca: jle     0x14092b7a1
0x14092b7cc: jmp     0x14092b8c9
0x14092b7d1: test    rdi,rdi
0x14092b7d4: je      0x14092b8c9
0x14092b7da: cmp     BYTE PTR [rdi+0xaa],0x0
0x14092b7e1: je      0x14092b8c9
0x14092b7e7: xorps   xmm0,xmm0
0x14092b7ea: movups  XMMWORD PTR [rbp-0x9],xmm0
0x14092b7ee: mov     QWORD PTR [rbp+0x7],rbx
0x14092b7f2: mov     QWORD PTR [rbp+0xf],r15
0x14092b7f6: mov     BYTE PTR [rbp-0x9],0x0
0x14092b7fa: mov     rax,QWORD PTR [rdi+0x130]
0x14092b801: test    rax,rax
0x14092b804: je      0x14092b832
0x14092b806: mov     rax,QWORD PTR [rax+0x58]
0x14092b80a: test    rax,rax
0x14092b80d: je      0x14092b832
0x14092b80f: mov     edx,DWORD PTR [rax+0x30]
0x14092b812: cmp     edx,0xffffffff
0x14092b815: je      0x14092b832
0x14092b817: lea     rcx,[rip+0x1bd884a]        # 0x142504068
0x14092b81e: call    0x140073b30
0x14092b823: test    rax,rax
0x14092b826: je      0x14092b832
0x14092b828: mov     rcx,rax
0x14092b82b: call    0x140c4f000
0x14092b830: jmp     0x14092b836
0x14092b832: lea     rax,[rdi+0x38]
0x14092b836: test    rax,rax
0x14092b839: je      0x14092b85b
0x14092b83b: cmp     BYTE PTR [rax+0x72],0x0
0x14092b83f: je      0x14092b85b
0x14092b841: xor     r9d,r9d
0x14092b844: mov     r8b,0x1
0x14092b847: lea     rdx,[rbp-0x9]
0x14092b84b: mov     rcx,rax
0x14092b84e: call    0x140aaafe0
0x14092b853: mov     r15,QWORD PTR [rbp+0xf]
0x14092b857: mov     rbx,QWORD PTR [rbp+0x7]
0x14092b85b: lea     rdx,[rbp-0x9]
0x14092b85f: cmp     r15,0xf
0x14092b863: cmova   rdx,QWORD PTR [rbp-0x9]
0x14092b868: mov     r8,rbx
0x14092b86b: lea     rcx,[rbp-0x29]
0x14092b86f: call    0x140070fd0
0x14092b874: mov     r8d,0x3
0x14092b87a: lea     rdx,[rip+0xcd8547]        # 0x141603dc8 ; literal="'s "
0x14092b881: lea     rcx,[rbp-0x29]
0x14092b885: call    0x140070fd0
0x14092b88a: nop     
0x14092b88b: mov     rdx,QWORD PTR [rbp+0xf]
0x14092b88f: cmp     rdx,0xf
0x14092b893: jbe     0x14092b8c9
0x14092b895: inc     rdx
0x14092b898: mov     rcx,QWORD PTR [rbp-0x9]
0x14092b89c: mov     rax,rcx
0x14092b89f: cmp     rdx,0x1000
0x14092b8a6: jb      0x14092b8c4
0x14092b8a8: add     rdx,0x27
0x14092b8ac: mov     rcx,QWORD PTR [rcx-0x8]
0x14092b8b0: sub     rax,rcx
0x14092b8b3: add     rax,0xfffffffffffffff8
0x14092b8b7: cmp     rax,0x1f
0x14092b8bb: jbe     0x14092b8c4
0x14092b8bd: call    QWORD PTR [rip+0xcd0205]        # 0x1415fbac8
0x14092b8c3: int3    
0x14092b8c4: call    0x14154de20
0x14092b8c9: mov     r8d,r14d
0x14092b8cc: movzx   edx,r12w
0x14092b8d0: lea     rcx,[rip+0x1ac1f99]        # 0x1423ed870
0x14092b8d7: call    0x1414c1d30
0x14092b8dc: mov     rbx,rax
0x14092b8df: test    rax,rax
0x14092b8e2: je      0x14092b939
0x14092b8e4: cmp     QWORD PTR [rax+0x530],0x0
0x14092b8ec: je      0x14092b922
0x14092b8ee: lea     rdx,[rax+0x520]
0x14092b8f5: mov     r8,QWORD PTR [rdx+0x10]
0x14092b8f9: cmp     QWORD PTR [rdx+0x18],0xf
0x14092b8fe: jbe     0x14092b903
0x14092b900: mov     rdx,QWORD PTR [rdx]
0x14092b903: lea     rcx,[rbp-0x29]
0x14092b907: call    0x140070fd0
0x14092b90c: mov     r8d,0x1
0x14092b912: lea     rdx,[rip+0xcd3053]        # 0x1415fe96c ; literal=' '
0x14092b919: lea     rcx,[rbp-0x29]
0x14092b91d: call    0x140070fd0
0x14092b922: lea     rdx,[rbx+0x178]
0x14092b929: mov     r10,QWORD PTR [rdx+0x10]
0x14092b92d: cmp     QWORD PTR [rdx+0x18],0xf
0x14092b932: jbe     0x14092b946
0x14092b934: mov     rdx,QWORD PTR [rdx]
0x14092b937: jmp     0x14092b946
0x14092b939: lea     rdx,[rip+0xe77ad8]        # 0x1417a3418 ; literal='unknown material'
0x14092b940: mov     r10d,0x10
0x14092b946: mov     r8,r10
0x14092b949: lea     rcx,[rbp-0x29]
0x14092b94d: call    0x140070fd0
0x14092b952: lea     rdx,[rbp-0x29]
0x14092b956: cmp     QWORD PTR [rbp-0x11],0xf
0x14092b95b: cmova   rdx,QWORD PTR [rbp-0x29]
0x14092b960: mov     r8,QWORD PTR [rbp-0x19]
0x14092b964: mov     rcx,rsi
0x14092b967: call    0x140070fd0
0x14092b96c: mov     r8d,0x7
0x14092b972: lea     rdx,[rip+0xdb869f]        # 0x1416e4018 ; literal=' Crafts'
0x14092b979: mov     rcx,rsi
0x14092b97c: call    0x140070fd0
0x14092b981: jmp     0x14092c8f8
0x14092b986: mov     rcx,r14
0x14092b989: mov     rax,QWORD PTR [rdi+0x508]
0x14092b990: mov     r14d,DWORD PTR [rax+r14*4]
0x14092b994: mov     rax,QWORD PTR [rdi+0x4f0]
0x14092b99b: movzx   r12d,WORD PTR [rax+rcx*2]
0x14092b9a0: mov     QWORD PTR [rbp-0x19],rbx
0x14092b9a4: lea     rax,[rbp-0x29]
0x14092b9a8: cmp     QWORD PTR [rbp-0x11],0xf
0x14092b9ad: cmova   rax,QWORD PTR [rbp-0x29]
0x14092b9b2: mov     BYTE PTR [rax],0x0
0x14092b9b5: mov     ecx,0xdb
0x14092b9ba: movzx   eax,r12w
0x14092b9be: sub     ax,cx
0x14092b9c1: mov     ecx,0xc7
0x14092b9c6: cmp     ax,cx
0x14092b9c9: ja      0x14092bb2b
0x14092b9cf: mov     r8,QWORD PTR [rip+0x1bea6ca]        # 0x1425160a0
0x14092b9d6: mov     r10,QWORD PTR [rip+0x1bea6bb]        # 0x142516098
0x14092b9dd: sub     r8,r10
0x14092b9e0: sar     r8,0x3
0x14092b9e4: test    r8,r8
0x14092b9e7: je      0x14092bb2b
0x14092b9ed: cmp     r14d,0xffffffff
0x14092b9f1: je      0x14092bb2b
0x14092b9f7: mov     edx,ebx
0x14092b9f9: sub     r8d,0x1
0x14092b9fd: js      0x14092bb2b
0x14092ba03: lea     ecx,[r8+rdx*1]
0x14092ba07: sar     ecx,1
0x14092ba09: movsxd  rax,ecx
0x14092ba0c: mov     rdi,QWORD PTR [r10+rax*8]
0x14092ba10: cmp     DWORD PTR [rdi+0xe0],r14d
0x14092ba17: je      0x14092ba33
0x14092ba19: lea     eax,[rcx-0x1]
0x14092ba1c: cmovle  eax,r8d
0x14092ba20: mov     r8d,eax
0x14092ba23: lea     eax,[rcx+0x1]
0x14092ba26: cmovle  edx,eax
0x14092ba29: cmp     edx,r8d
0x14092ba2c: jle     0x14092ba03
0x14092ba2e: jmp     0x14092bb2b
0x14092ba33: test    rdi,rdi
0x14092ba36: je      0x14092bb2b
0x14092ba3c: cmp     BYTE PTR [rdi+0xaa],0x0
0x14092ba43: je      0x14092bb2b
0x14092ba49: xorps   xmm0,xmm0
0x14092ba4c: movups  XMMWORD PTR [rbp-0x9],xmm0
0x14092ba50: mov     QWORD PTR [rbp+0x7],rbx
0x14092ba54: mov     QWORD PTR [rbp+0xf],r15
0x14092ba58: mov     BYTE PTR [rbp-0x9],0x0
0x14092ba5c: mov     rax,QWORD PTR [rdi+0x130]
0x14092ba63: test    rax,rax
0x14092ba66: je      0x14092ba94
0x14092ba68: mov     rax,QWORD PTR [rax+0x58]
0x14092ba6c: test    rax,rax
0x14092ba6f: je      0x14092ba94
0x14092ba71: mov     edx,DWORD PTR [rax+0x30]
0x14092ba74: cmp     edx,0xffffffff
0x14092ba77: je      0x14092ba94
0x14092ba79: lea     rcx,[rip+0x1bd85e8]        # 0x142504068
0x14092ba80: call    0x140073b30
0x14092ba85: test    rax,rax
0x14092ba88: je      0x14092ba94
0x14092ba8a: mov     rcx,rax
0x14092ba8d: call    0x140c4f000
0x14092ba92: jmp     0x14092ba98
0x14092ba94: lea     rax,[rdi+0x38]
0x14092ba98: test    rax,rax
0x14092ba9b: je      0x14092babd
0x14092ba9d: cmp     BYTE PTR [rax+0x72],0x0
0x14092baa1: je      0x14092babd
0x14092baa3: xor     r9d,r9d
0x14092baa6: mov     r8b,0x1
0x14092baa9: lea     rdx,[rbp-0x9]
0x14092baad: mov     rcx,rax
0x14092bab0: call    0x140aaafe0
0x14092bab5: mov     r15,QWORD PTR [rbp+0xf]
0x14092bab9: mov     rbx,QWORD PTR [rbp+0x7]
0x14092babd: lea     rdx,[rbp-0x9]
0x14092bac1: cmp     r15,0xf
0x14092bac5: cmova   rdx,QWORD PTR [rbp-0x9]
0x14092baca: mov     r8,rbx
0x14092bacd: lea     rcx,[rbp-0x29]
0x14092bad1: call    0x140070fd0
0x14092bad6: mov     r8d,0x3
0x14092badc: lea     rdx,[rip+0xcd82e5]        # 0x141603dc8 ; literal="'s "
0x14092bae3: lea     rcx,[rbp-0x29]
0x14092bae7: call    0x140070fd0
0x14092baec: nop     
0x14092baed: mov     rdx,QWORD PTR [rbp+0xf]
0x14092baf1: cmp     rdx,0xf
0x14092baf5: jbe     0x14092bb2b
0x14092baf7: inc     rdx
0x14092bafa: mov     rcx,QWORD PTR [rbp-0x9]
0x14092bafe: mov     rax,rcx
0x14092bb01: cmp     rdx,0x1000
0x14092bb08: jb      0x14092bb26
0x14092bb0a: add     rdx,0x27
0x14092bb0e: mov     rcx,QWORD PTR [rcx-0x8]
0x14092bb12: sub     rax,rcx
0x14092bb15: add     rax,0xfffffffffffffff8
0x14092bb19: cmp     rax,0x1f
0x14092bb1d: jbe     0x14092bb26
0x14092bb1f: call    QWORD PTR [rip+0xccffa3]        # 0x1415fbac8
0x14092bb25: int3    
0x14092bb26: call    0x14154de20
0x14092bb2b: mov     r8d,r14d
0x14092bb2e: movzx   edx,r12w
0x14092bb32: lea     rcx,[rip+0x1ac1d37]        # 0x1423ed870
0x14092bb39: call    0x1414c1d30
0x14092bb3e: mov     rbx,rax
0x14092bb41: test    rax,rax
0x14092bb44: je      0x14092bb9b
0x14092bb46: cmp     QWORD PTR [rax+0x530],0x0
0x14092bb4e: je      0x14092bb84
0x14092bb50: lea     rdx,[rax+0x520]
0x14092bb57: mov     r8,QWORD PTR [rdx+0x10]
0x14092bb5b: cmp     QWORD PTR [rdx+0x18],0xf
0x14092bb60: jbe     0x14092bb65
0x14092bb62: mov     rdx,QWORD PTR [rdx]
0x14092bb65: lea     rcx,[rbp-0x29]
0x14092bb69: call    0x140070fd0
0x14092bb6e: mov     r8d,0x1
0x14092bb74: lea     rdx,[rip+0xcd2df1]        # 0x1415fe96c ; literal=' '
0x14092bb7b: lea     rcx,[rbp-0x29]
0x14092bb7f: call    0x140070fd0
0x14092bb84: lea     rdx,[rbx+0xb8]
0x14092bb8b: mov     r10,QWORD PTR [rdx+0x10]
0x14092bb8f: cmp     QWORD PTR [rdx+0x18],0xf
0x14092bb94: jbe     0x14092bba8
0x14092bb96: mov     rdx,QWORD PTR [rdx]
0x14092bb99: jmp     0x14092bba8
0x14092bb9b: lea     rdx,[rip+0xe77876]        # 0x1417a3418 ; literal='unknown material'
0x14092bba2: mov     r10d,0x10
0x14092bba8: mov     r8,r10
0x14092bbab: lea     rcx,[rbp-0x29]
0x14092bbaf: call    0x140070fd0
0x14092bbb4: lea     rdx,[rbp-0x29]
0x14092bbb8: cmp     QWORD PTR [rbp-0x11],0xf
0x14092bbbd: cmova   rdx,QWORD PTR [rbp-0x29]
0x14092bbc2: mov     r8,QWORD PTR [rbp-0x19]
0x14092bbc6: mov     rcx,rsi
0x14092bbc9: call    0x140070fd0
0x14092bbce: mov     r8d,0x5
0x14092bbd4: lea     rdx,[rip+0xdb8445]        # 0x1416e4020 ; literal=' Logs'
0x14092bbdb: mov     rcx,rsi
0x14092bbde: call    0x140070fd0
0x14092bbe3: jmp     0x14092c8f8
0x14092bbe8: mov     rax,QWORD PTR [rdi+0x520]
0x14092bbef: xor     r9d,r9d
0x14092bbf2: xor     edx,edx
0x14092bbf4: mov     r8d,0xffffffff
0x14092bbfa: mov     DWORD PTR [rsp+0x68],ebx
0x14092bbfe: mov     DWORD PTR [rsp+0x60],ebx
0x14092bc02: mov     BYTE PTR [rsp+0x58],0x1
0x14092bc07: mov     DWORD PTR [rsp+0x50],r8d
0x14092bc0c: mov     DWORD PTR [rsp+0x48],r8d
0x14092bc11: mov     QWORD PTR [rsp+0x40],rbx
0x14092bc16: mov     BYTE PTR [rsp+0x38],dl
0x14092bc1a: mov     DWORD PTR [rsp+0x30],ebx
0x14092bc1e: mov     DWORD PTR [rsp+0x28],r8d
0x14092bc23: mov     eax,DWORD PTR [rax+r14*4]
0x14092bc27: mov     DWORD PTR [rsp+0x20],eax
0x14092bc2b: jmp     0x14092c8f0
0x14092bc30: mov     rax,QWORD PTR [rdi+0x550]
0x14092bc37: xor     r9d,r9d
0x14092bc3a: mov     edx,0x1
0x14092bc3f: mov     r8d,0xffffffff
0x14092bc45: mov     DWORD PTR [rsp+0x68],ebx
0x14092bc49: mov     DWORD PTR [rsp+0x60],ebx
0x14092bc4d: mov     BYTE PTR [rsp+0x58],dl
0x14092bc51: mov     DWORD PTR [rsp+0x50],r8d
0x14092bc56: mov     DWORD PTR [rsp+0x48],r8d
0x14092bc5b: mov     QWORD PTR [rsp+0x40],rbx
0x14092bc60: mov     BYTE PTR [rsp+0x38],r9b
0x14092bc65: jmp     0x14092bc1a
0x14092bc67: mov     rax,QWORD PTR [rdi+0x550]
0x14092bc6e: mov     edx,0x2c
0x14092bc73: xor     r9d,r9d
0x14092bc76: mov     r8d,0xffffffff
0x14092bc7c: mov     DWORD PTR [rsp+0x68],ebx
0x14092bc80: mov     DWORD PTR [rsp+0x60],ebx
0x14092bc84: mov     BYTE PTR [rsp+0x58],0x1
0x14092bc89: mov     DWORD PTR [rsp+0x50],r8d
0x14092bc8e: mov     DWORD PTR [rsp+0x48],r8d
0x14092bc93: mov     QWORD PTR [rsp+0x40],rbx
0x14092bc98: mov     BYTE PTR [rsp+0x38],r9b
0x14092bc9d: jmp     0x14092bc1a
0x14092bca2: mov     rax,QWORD PTR [rdi+0x538]
0x14092bca9: mov     edx,0x2
0x14092bcae: jmp     0x14092bc73
0x14092bcb0: mov     rax,QWORD PTR [rdi+0xac0]
0x14092bcb7: mov     r9d,DWORD PTR [rax+r14*4]
0x14092bcbb: mov     rax,QWORD PTR [rdi+0xaa8]
0x14092bcc2: mov     edx,0x35
0x14092bcc7: jmp     0x14092c8b6
0x14092bccc: mov     rax,QWORD PTR [rdi+0x3e8]
0x14092bcd3: mov     r9d,DWORD PTR [rax+r14*4]
0x14092bcd7: mov     rax,QWORD PTR [rdi+0x3d0]
0x14092bcde: mov     edx,0x2d
0x14092bce3: jmp     0x14092c8b6
0x14092bce8: mov     r8,QWORD PTR [rdi+0x148]
0x14092bcef: mov     edx,0x18
0x14092bcf4: mov     r9d,0xffffffff
0x14092bcfa: mov     DWORD PTR [rsp+0x68],ebx
0x14092bcfe: mov     DWORD PTR [rsp+0x60],ebx
0x14092bd02: mov     BYTE PTR [rsp+0x58],0x1
0x14092bd07: mov     DWORD PTR [rsp+0x50],r9d
0x14092bd0c: mov     DWORD PTR [rsp+0x48],r9d
0x14092bd11: mov     QWORD PTR [rsp+0x40],rbx
0x14092bd16: mov     BYTE PTR [rsp+0x38],0x0
0x14092bd1b: mov     DWORD PTR [rsp+0x30],ebx
0x14092bd1f: mov     DWORD PTR [rsp+0x28],r9d
0x14092bd24: mov     DWORD PTR [rsp+0x20],r9d
0x14092bd29: movzx   r8d,WORD PTR [r8+r14*2]
0x14092bd2e: jmp     0x14092c8f0
0x14092bd33: mov     r8,QWORD PTR [rdi+0x160]
0x14092bd3a: jmp     0x14092bcef
0x14092bd3c: mov     r8,QWORD PTR [rdi+0x178]
0x14092bd43: mov     edx,0x19
0x14092bd48: jmp     0x14092bcf4
0x14092bd4a: mov     r8,QWORD PTR [rdi+0x190]
0x14092bd51: mov     edx,0x27
0x14092bd56: jmp     0x14092bcf4
0x14092bd58: mov     r8,QWORD PTR [rdi+0x220]
0x14092bd5f: mov     edx,0x44
0x14092bd64: jmp     0x14092bcf4
0x14092bd66: mov     r8,QWORD PTR [rdi+0x130]
0x14092bd6d: jmp     0x14092bcef
0x14092bd6f: mov     r8,QWORD PTR [rdi+0x1a8]
0x14092bd76: mov     edx,0x1c
0x14092bd7b: jmp     0x14092bcf4
0x14092bd80: mov     r8,QWORD PTR [rdi+0x1c0]
0x14092bd87: mov     edx,0x1d
0x14092bd8c: jmp     0x14092bcf4
0x14092bd91: mov     r8,QWORD PTR [rdi+0x1d8]
0x14092bd98: mov     edx,0x1a
0x14092bd9d: jmp     0x14092bcf4
0x14092bda2: mov     r8,QWORD PTR [rdi+0x1f0]
0x14092bda9: mov     edx,0x3c
0x14092bdae: jmp     0x14092bcf4
0x14092bdb3: mov     r8,QWORD PTR [rdi+0x208]
0x14092bdba: mov     edx,0x1b
0x14092bdbf: jmp     0x14092bcf4
0x14092bdc4: mov     r8,QWORD PTR [rdi+0x238]
0x14092bdcb: mov     edx,0xe
0x14092bdd0: jmp     0x14092bcf4
0x14092bdd5: mov     r8,QWORD PTR [rdi+0x280]
0x14092bddc: mov     edx,0x56
0x14092bde1: jmp     0x14092bcf4
0x14092bde6: mov     r8,QWORD PTR [rdi+0x250]
0x14092bded: mov     edx,0xd
0x14092bdf2: jmp     0x14092bcf4
0x14092bdf7: mov     rax,QWORD PTR [rdi+0xbe0]
0x14092bdfe: movsx   rdx,WORD PTR [rax+r14*2]
0x14092be03: mov     rax,QWORD PTR [rdi+0xb38]
0x14092be0a: movsx   r15,WORD PTR [rax+r14*4]
0x14092be0f: mov     QWORD PTR [rbp-0x19],rbx
0x14092be13: lea     rax,[rbp-0x29]
0x14092be17: cmp     QWORD PTR [rbp-0x11],0xf
0x14092be1c: cmova   rax,QWORD PTR [rbp-0x29]
0x14092be21: mov     BYTE PTR [rax],0x0
0x14092be24: cmp     dx,0xffff
0x14092be28: je      0x14092bea6
0x14092be2e: test    r15w,r15w
0x14092be32: js      0x14092beee
0x14092be38: mov     rcx,QWORD PTR [rip+0x1bdcfa9]        # 0x142508de8
0x14092be3f: mov     rax,QWORD PTR [rip+0x1bdcfaa]        # 0x142508df0
0x14092be46: sub     rax,rcx
0x14092be49: sar     rax,0x3
0x14092be4d: cmp     r15,rax
0x14092be50: jae     0x14092beac
0x14092be52: test    dx,dx
0x14092be55: js      0x14092beac
0x14092be57: mov     rax,QWORD PTR [rcx+r15*8]
0x14092be5b: mov     rcx,QWORD PTR [rax+0x178]
0x14092be62: mov     rax,QWORD PTR [rax+0x180]
0x14092be69: sub     rax,rcx
0x14092be6c: sar     rax,0x3
0x14092be70: cmp     rdx,rax
0x14092be73: jae     0x14092beac
0x14092be75: mov     rdx,QWORD PTR [rcx+rdx*8]
0x14092be79: add     rdx,0x20
0x14092be7d: lea     rax,[rbp-0x29]
0x14092be81: cmp     rax,rdx
0x14092be84: je      0x14092be9d
0x14092be86: mov     r8,QWORD PTR [rdx+0x10]
0x14092be8a: cmp     QWORD PTR [rdx+0x18],0xf
0x14092be8f: jbe     0x14092be94
0x14092be91: mov     rdx,QWORD PTR [rdx]
0x14092be94: lea     rcx,[rbp-0x29]
0x14092be98: call    0x140070e90
0x14092be9d: cmp     QWORD PTR [rbp-0x19],0x0
0x14092bea2: jbe     0x14092beac
0x14092bea4: jmp     0x14092beee
0x14092bea6: test    r15w,r15w
0x14092beaa: js      0x14092beee
0x14092beac: mov     rdx,QWORD PTR [rip+0x1bdcf35]        # 0x142508de8
0x14092beb3: mov     rax,QWORD PTR [rip+0x1bdcf36]        # 0x142508df0
0x14092beba: sub     rax,rdx
0x14092bebd: sar     rax,0x3
0x14092bec1: cmp     r15,rax
0x14092bec4: jae     0x14092beee
0x14092bec6: mov     rdx,QWORD PTR [rdx+r15*8]
0x14092beca: add     rdx,0x20
0x14092bece: lea     rax,[rbp-0x29]
0x14092bed2: cmp     rax,rdx
0x14092bed5: je      0x14092beee
0x14092bed7: mov     r8,QWORD PTR [rdx+0x10]
0x14092bedb: cmp     QWORD PTR [rdx+0x18],0xf
0x14092bee0: jbe     0x14092bee5
0x14092bee2: mov     rdx,QWORD PTR [rdx]
0x14092bee5: lea     rcx,[rbp-0x29]
0x14092bee9: call    0x140070e90
0x14092beee: lea     rdx,[rbp-0x29]
0x14092bef2: cmp     QWORD PTR [rbp-0x11],0xf
0x14092bef7: cmova   rdx,QWORD PTR [rbp-0x29]
0x14092befc: mov     r8,QWORD PTR [rbp-0x19]
0x14092bf00: mov     rcx,rsi
0x14092bf03: call    0x140070fd0
0x14092bf08: mov     rax,QWORD PTR [rdi+0xb38]
0x14092bf0f: movsx   r11,WORD PTR [rax+r14*4]
0x14092bf14: test    r11w,r11w
0x14092bf18: js      0x14092c8f8
0x14092bf1e: mov     rdx,QWORD PTR [rip+0x1bdcecb]        # 0x142508df0
0x14092bf25: mov     r9,QWORD PTR [rip+0x1bdcebc]        # 0x142508de8
0x14092bf2c: mov     rax,rdx
0x14092bf2f: sub     rax,r9
0x14092bf32: sar     rax,0x3
0x14092bf36: cmp     r11,rax
0x14092bf39: jae     0x14092c8f8
0x14092bf3f: mov     r8,QWORD PTR [r9+r11*8]
0x14092bf43: cmp     DWORD PTR [r8+0x1b0],0x8
0x14092bf4b: jle     0x14092bf5e
0x14092bf4d: mov     rax,QWORD PTR [r8+0x1a8]
0x14092bf54: test    BYTE PTR [rax+0x8],0x4
0x14092bf58: je      0x14092bf5e
0x14092bf5a: mov     al,0x1
0x14092bf5c: jmp     0x14092bf60
0x14092bf5e: xor     al,al
0x14092bf60: test    al,al
0x14092bf62: je      0x14092c8f8
0x14092bf68: mov     rax,QWORD PTR [rdi+0xbe0]
0x14092bf6f: movsx   r10,WORD PTR [rax+r14*2]
0x14092bf74: sub     rdx,r9
0x14092bf77: sar     rdx,0x3
0x14092bf7b: cmp     r11,rdx
0x14092bf7e: jae     0x14092c8f8
0x14092bf84: test    r10w,r10w
0x14092bf88: js      0x14092c8f8
0x14092bf8e: mov     rcx,QWORD PTR [r8+0x178]
0x14092bf95: mov     rax,QWORD PTR [r8+0x180]
0x14092bf9c: sub     rax,rcx
0x14092bf9f: sar     rax,0x3
0x14092bfa3: cmp     r10,rax
0x14092bfa6: jae     0x14092c8f8
0x14092bfac: mov     rax,QWORD PTR [rcx+r10*8]
0x14092bfb0: movzx   ecx,BYTE PTR [rax+0x15b8]
0x14092bfb7: test    cl,cl
0x14092bfb9: jne     0x14092bfdf
0x14092bfbb: mov     r8d,0x2
0x14092bfc1: lea     rdx,[rip+0xcd3340]        # 0x1415ff308 ; literal=', '
0x14092bfc8: mov     rcx,rsi
0x14092bfcb: call    0x140070fd0
0x14092bfd0: mov     dl,0xc
0x14092bfd2: mov     rcx,rsi
0x14092bfd5: call    0x1400bb140
0x14092bfda: jmp     0x14092c8f8
0x14092bfdf: cmp     cl,0x1
0x14092bfe2: jne     0x14092c8f8
0x14092bfe8: mov     r8d,0x2
0x14092bfee: lea     rdx,[rip+0xcd3313]        # 0x1415ff308 ; literal=', '
0x14092bff5: mov     rcx,rsi
0x14092bff8: call    0x140070fd0
0x14092bffd: mov     dl,0xb
0x14092bfff: mov     rcx,rsi
0x14092c002: call    0x1400bb140
0x14092c007: jmp     0x14092c8f8
0x14092c00c: mov     rax,QWORD PTR [rdi+0x8e0]
0x14092c013: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c017: mov     rax,QWORD PTR [rdi+0x8c8]
0x14092c01e: mov     edx,0x49
0x14092c023: jmp     0x14092c8b6
0x14092c028: mov     rax,QWORD PTR [rdi+0x910]
0x14092c02f: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c033: mov     rax,QWORD PTR [rdi+0x8f8]
0x14092c03a: mov     edx,0x47
0x14092c03f: jmp     0x14092c8b6
0x14092c044: mov     rax,QWORD PTR [rdi+0x940]
0x14092c04b: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c04f: mov     rax,QWORD PTR [rdi+0x928]
0x14092c056: mov     edx,0x46
0x14092c05b: jmp     0x14092c8b6
0x14092c060: mov     rax,QWORD PTR [rdi+0x970]
0x14092c067: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c06b: mov     rax,QWORD PTR [rdi+0x958]
0x14092c072: mov     edx,0x49
0x14092c077: jmp     0x14092c8b6
0x14092c07c: mov     rax,QWORD PTR [rdi+0x9d0]
0x14092c083: movsx   r9d,WORD PTR [rax+r14*2]
0x14092c088: mov     rax,QWORD PTR [rdi+0x9b8]
0x14092c08f: mov     edx,0x31
0x14092c094: movsx   r10d,WORD PTR [rdi+0x98]
0x14092c09c: mov     r8d,0xffffffff
0x14092c0a2: mov     DWORD PTR [rsp+0x68],ebx
0x14092c0a6: mov     DWORD PTR [rsp+0x60],ebx
0x14092c0aa: mov     BYTE PTR [rsp+0x58],0x1
0x14092c0af: mov     DWORD PTR [rsp+0x50],r8d
0x14092c0b4: mov     DWORD PTR [rsp+0x48],r10d
0x14092c0b9: mov     QWORD PTR [rsp+0x40],rbx
0x14092c0be: mov     BYTE PTR [rsp+0x38],0x0
0x14092c0c3: mov     DWORD PTR [rsp+0x30],ebx
0x14092c0c7: mov     DWORD PTR [rsp+0x28],0x1
0x14092c0cf: mov     DWORD PTR [rsp+0x20],r9d
0x14092c0d4: movzx   r9d,WORD PTR [rax+r14*4]
0x14092c0d9: lea     rcx,[rbp-0x29]
0x14092c0dd: call    0x140a99510
0x14092c0e2: lea     rdx,[rbp-0x29]
0x14092c0e6: cmp     QWORD PTR [rbp-0x11],0xf
0x14092c0eb: cmova   rdx,QWORD PTR [rbp-0x29]
0x14092c0f0: mov     r8,QWORD PTR [rbp-0x19]
0x14092c0f4: mov     rcx,rsi
0x14092c0f7: call    0x140070fd0
0x14092c0fc: jmp     0x14092c8f8
0x14092c101: mov     rax,QWORD PTR [rdi+0xa00]
0x14092c108: movsx   r9d,WORD PTR [rax+r14*2]
0x14092c10d: mov     rax,QWORD PTR [rdi+0x9e8]
0x14092c114: mov     edx,0x58
0x14092c119: jmp     0x14092c094
0x14092c11e: movsx   r10d,WORD PTR [rdi+0x98]
0x14092c126: mov     rax,QWORD PTR [rdi+0x9a0]
0x14092c12d: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c131: mov     rax,QWORD PTR [rdi+0x988]
0x14092c138: mov     edx,0x30
0x14092c13d: mov     r8d,0xffffffff
0x14092c143: mov     DWORD PTR [rsp+0x68],ebx
0x14092c147: mov     DWORD PTR [rsp+0x60],ebx
0x14092c14b: mov     BYTE PTR [rsp+0x58],0x1
0x14092c150: mov     DWORD PTR [rsp+0x50],r8d
0x14092c155: mov     DWORD PTR [rsp+0x48],r10d
0x14092c15a: mov     QWORD PTR [rsp+0x40],rbx
0x14092c15f: mov     BYTE PTR [rsp+0x38],0x0
0x14092c164: mov     DWORD PTR [rsp+0x30],ebx
0x14092c168: mov     DWORD PTR [rsp+0x28],0x1
0x14092c170: mov     DWORD PTR [rsp+0x20],r9d
0x14092c175: movzx   r9d,WORD PTR [rax+r14*2]
0x14092c17a: jmp     0x14092c0d9
0x14092c17f: mov     rax,QWORD PTR [rdi+0xa30]
0x14092c186: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c18a: mov     rax,QWORD PTR [rdi+0xa18]
0x14092c191: mov     edx,0x36
0x14092c196: jmp     0x14092c8b6
0x14092c19b: mov     rax,QWORD PTR [rdi+0xa60]
0x14092c1a2: movsx   r8,WORD PTR [rax+r14*2]
0x14092c1a7: mov     rax,QWORD PTR [rdi+0xa48]
0x14092c1ae: movsxd  rdx,DWORD PTR [rax+r14*4]
0x14092c1b2: test    edx,edx
0x14092c1b4: js      0x14092c8f8
0x14092c1ba: mov     rcx,rdx
0x14092c1bd: mov     rax,QWORD PTR [rip+0x1bdcabc]        # 0x142508c80
0x14092c1c4: mov     rdx,QWORD PTR [rip+0x1bdcaad]        # 0x142508c78
0x14092c1cb: sub     rax,rdx
0x14092c1ce: sar     rax,0x3
0x14092c1d2: cmp     rcx,rax
0x14092c1d5: jae     0x14092c8f8
0x14092c1db: test    r8w,r8w
0x14092c1df: js      0x14092c8f8
0x14092c1e5: mov     rax,QWORD PTR [rdx+rcx*8]
0x14092c1e9: mov     rcx,QWORD PTR [rax+0x658]
0x14092c1f0: mov     rax,QWORD PTR [rax+0x660]
0x14092c1f7: sub     rax,rcx
0x14092c1fa: sar     rax,0x3
0x14092c1fe: cmp     r8,rax
0x14092c201: jae     0x14092c8f8
0x14092c207: mov     rax,QWORD PTR [rcx+r8*8]
0x14092c20b: movzx   r9d,WORD PTR [rax+0x104]
0x14092c213: mov     ecx,DWORD PTR [rax+0x108]
0x14092c219: cmp     r9w,0xffff
0x14092c21e: je      0x14092c8f8
0x14092c224: mov     DWORD PTR [rsp+0x68],ebx
0x14092c228: mov     DWORD PTR [rsp+0x60],ebx
0x14092c22c: mov     BYTE PTR [rsp+0x58],0x1
0x14092c231: mov     DWORD PTR [rsp+0x50],0xffffffff
0x14092c239: mov     DWORD PTR [rsp+0x48],0xffffffff
0x14092c241: mov     QWORD PTR [rsp+0x40],rbx
0x14092c246: mov     BYTE PTR [rsp+0x38],0x0
0x14092c24b: mov     DWORD PTR [rsp+0x30],ebx
0x14092c24f: mov     DWORD PTR [rsp+0x28],0xffffffff
0x14092c257: mov     DWORD PTR [rsp+0x20],ecx
0x14092c25b: movzx   r8d,WORD PTR [rax+0x102]
0x14092c263: movzx   edx,WORD PTR [rax+0x100]
0x14092c26a: jmp     0x14092c8f0
0x14092c26f: mov     rax,QWORD PTR [rdi+0xa90]
0x14092c276: movsx   r8,WORD PTR [rax+r14*2]
0x14092c27b: mov     rax,QWORD PTR [rdi+0xa78]
0x14092c282: jmp     0x14092c1ae
0x14092c287: lea     r14,[r14*8+0x0]
0x14092c28f: mov     rax,QWORD PTR [rdi+0xc88]
0x14092c296: mov     rdx,QWORD PTR [r14+rax*1]
0x14092c29a: mov     rax,QWORD PTR [rdx+0x10]
0x14092c29e: sub     rax,QWORD PTR [rdx+0x8]
0x14092c2a2: sar     rax,1
0x14092c2a5: je      0x14092c311
0x14092c2a7: mov     rax,QWORD PTR [rdx+0x50]
0x14092c2ab: movsx   ecx,WORD PTR [rax]
0x14092c2ae: mov     rax,QWORD PTR [rdx+0x38]
0x14092c2b2: movzx   r9d,WORD PTR [rax]
0x14092c2b6: mov     rax,QWORD PTR [rdx+0x20]
0x14092c2ba: mov     r8d,0xffffffff
0x14092c2c0: mov     DWORD PTR [rsp+0x68],ebx
0x14092c2c4: mov     DWORD PTR [rsp+0x60],ebx
0x14092c2c8: mov     BYTE PTR [rsp+0x58],0x1
0x14092c2cd: mov     DWORD PTR [rsp+0x50],r8d
0x14092c2d2: mov     DWORD PTR [rsp+0x48],r8d
0x14092c2d7: mov     QWORD PTR [rsp+0x40],rbx
0x14092c2dc: mov     BYTE PTR [rsp+0x38],0x1
0x14092c2e1: mov     DWORD PTR [rsp+0x30],ebx
0x14092c2e5: mov     DWORD PTR [rsp+0x28],0x1
0x14092c2ed: mov     DWORD PTR [rsp+0x20],ecx
0x14092c2f1: movzx   edx,WORD PTR [rax]
0x14092c2f4: mov     rcx,rsi
0x14092c2f7: call    0x140a99510
0x14092c2fc: mov     r8d,0x1
0x14092c302: lea     rdx,[rip+0xcd2663]        # 0x1415fe96c ; literal=' '
0x14092c309: mov     rcx,rsi
0x14092c30c: call    0x140070fd0
0x14092c311: mov     rax,QWORD PTR [rdi+0xc88]
0x14092c318: mov     rcx,QWORD PTR [r14+rax*1]
0x14092c31c: movzx   r9d,WORD PTR [rcx]
0x14092c320: mov     rcx,QWORD PTR [rip+0x1bdcf31]        # 0x142509258
0x14092c327: mov     r8,QWORD PTR [rip+0x1bdcf22]        # 0x142509250
0x14092c32e: sub     rcx,r8
0x14092c331: sar     rcx,0x3
0x14092c335: sub     ecx,0x1
0x14092c338: movsxd  rdx,ecx
0x14092c33b: js      0x14092c353
0x14092c33d: nop     DWORD PTR [rax]
0x14092c340: mov     rax,QWORD PTR [r8+rdx*8]
0x14092c344: cmp     WORD PTR [rax+0x28],r9w
0x14092c349: je      0x14092c390
0x14092c34b: dec     ecx
0x14092c34d: sub     rdx,0x1
0x14092c351: jns     0x14092c340
0x14092c353: mov     rdi,QWORD PTR [rbp-0x11]
0x14092c357: cmp     rdi,0xd
0x14092c35b: jb      0x14092c3c9
0x14092c35d: lea     rbx,[rbp-0x29]
0x14092c361: cmp     rdi,0xf
0x14092c365: cmova   rbx,QWORD PTR [rbp-0x29]
0x14092c36a: mov     QWORD PTR [rbp-0x19],0xd
0x14092c372: mov     r8d,0xd
0x14092c378: lea     rdx,[rip+0xdf07a9]        # 0x14171cb28 ; literal='Prepared Food'
0x14092c37f: mov     rcx,rbx
0x14092c382: call    0x14154f5ba
0x14092c387: mov     BYTE PTR [rbx+0xd],0x0
0x14092c38b: jmp     0x14092c0e2
0x14092c390: movsxd  rax,ecx
0x14092c393: mov     rdx,QWORD PTR [r8+rax*8]
0x14092c397: test    rdx,rdx
0x14092c39a: je      0x14092c353
0x14092c39c: add     rdx,0x68
0x14092c3a0: lea     rax,[rbp-0x29]
0x14092c3a4: cmp     rax,rdx
0x14092c3a7: je      0x14092c0e2
0x14092c3ad: mov     r8,QWORD PTR [rdx+0x10]
0x14092c3b1: cmp     QWORD PTR [rdx+0x18],0xf
0x14092c3b6: jbe     0x14092c3bb
0x14092c3b8: mov     rdx,QWORD PTR [rdx]
0x14092c3bb: lea     rcx,[rbp-0x29]
0x14092c3bf: call    0x140070e90
0x14092c3c4: jmp     0x14092c0e2
0x14092c3c9: mov     rcx,rdi
0x14092c3cc: shr     rcx,1
0x14092c3cf: movabs  rbx,0x7fffffffffffffff
0x14092c3d9: mov     rax,rbx
0x14092c3dc: sub     rax,rcx
0x14092c3df: cmp     rdi,rax
0x14092c3e2: ja      0x14092c3f2
0x14092c3e4: lea     rax,[rdi+rcx*1]
0x14092c3e8: mov     rbx,r15
0x14092c3eb: cmp     rax,rbx
0x14092c3ee: cmova   rbx,rax
0x14092c3f2: lea     rcx,[rbx+0x1]
0x14092c3f6: call    0x140071d90
0x14092c3fb: mov     r14,rax
0x14092c3fe: mov     QWORD PTR [rbp-0x19],0xd
0x14092c406: mov     QWORD PTR [rbp-0x11],rbx
0x14092c40a: movsd   xmm0,QWORD PTR [rip+0xdf0716]        # 0x14171cb28 ; literal='Prepared Food'
0x14092c412: movsd   QWORD PTR [rax],xmm0
0x14092c416: mov     ecx,DWORD PTR [rip+0xdf0714]        # 0x14171cb30 ; literal=' Food'
0x14092c41c: mov     DWORD PTR [rax+0x8],ecx
0x14092c41f: movzx   ecx,BYTE PTR [rip+0xdf070e]        # 0x14171cb34 ; literal='d'
0x14092c426: mov     BYTE PTR [rax+0xc],cl
0x14092c429: mov     BYTE PTR [rax+0xd],0x0
0x14092c42d: cmp     rdi,0xf
0x14092c431: jbe     0x14092c465
0x14092c433: lea     rdx,[rdi+0x1]
0x14092c437: mov     rcx,QWORD PTR [rbp-0x29]
0x14092c43b: mov     rax,rcx
0x14092c43e: cmp     rdx,0x1000
0x14092c445: jb      0x14092c460
0x14092c447: add     rdx,0x27
0x14092c44b: mov     rcx,QWORD PTR [rcx-0x8]
0x14092c44f: sub     rax,rcx
0x14092c452: add     rax,0xfffffffffffffff8
0x14092c456: cmp     rax,0x1f
0x14092c45a: ja      0x14092c5f4
0x14092c460: call    0x14154de20
0x14092c465: mov     QWORD PTR [rbp-0x29],r14
0x14092c469: jmp     0x14092c0e2
0x14092c46e: lea     r14,[r14*8+0x0]
0x14092c476: mov     rax,QWORD PTR [rdi+0xca0]
0x14092c47d: mov     rdx,QWORD PTR [r14+rax*1]
0x14092c481: mov     rax,QWORD PTR [rdx+0x10]
0x14092c485: sub     rax,QWORD PTR [rdx+0x8]
0x14092c489: sar     rax,1
0x14092c48c: je      0x14092c4f8
0x14092c48e: mov     rax,QWORD PTR [rdx+0x50]
0x14092c492: movsx   ecx,WORD PTR [rax]
0x14092c495: mov     rax,QWORD PTR [rdx+0x38]
0x14092c499: movzx   r9d,WORD PTR [rax]
0x14092c49d: mov     rax,QWORD PTR [rdx+0x20]
0x14092c4a1: mov     r8d,0xffffffff
0x14092c4a7: mov     DWORD PTR [rsp+0x68],ebx
0x14092c4ab: mov     DWORD PTR [rsp+0x60],ebx
0x14092c4af: mov     BYTE PTR [rsp+0x58],0x1
0x14092c4b4: mov     DWORD PTR [rsp+0x50],r8d
0x14092c4b9: mov     DWORD PTR [rsp+0x48],r8d
0x14092c4be: mov     QWORD PTR [rsp+0x40],rbx
0x14092c4c3: mov     BYTE PTR [rsp+0x38],0x1
0x14092c4c8: mov     DWORD PTR [rsp+0x30],ebx
0x14092c4cc: mov     DWORD PTR [rsp+0x28],0x1
0x14092c4d4: mov     DWORD PTR [rsp+0x20],ecx
0x14092c4d8: movzx   edx,WORD PTR [rax]
0x14092c4db: mov     rcx,rsi
0x14092c4de: call    0x140a99510
0x14092c4e3: mov     r8d,0x1
0x14092c4e9: lea     rdx,[rip+0xcd247c]        # 0x1415fe96c ; literal=' '
0x14092c4f0: mov     rcx,rsi
0x14092c4f3: call    0x140070fd0
0x14092c4f8: mov     rax,QWORD PTR [rdi+0xca0]
0x14092c4ff: mov     rcx,QWORD PTR [r14+rax*1]
0x14092c503: movzx   r9d,WORD PTR [rcx]
0x14092c507: mov     rcx,QWORD PTR [rip+0x1bdcd4a]        # 0x142509258
0x14092c50e: mov     r8,QWORD PTR [rip+0x1bdcd3b]        # 0x142509250
0x14092c515: sub     rcx,r8
0x14092c518: sar     rcx,0x3
0x14092c51c: sub     ecx,0x1
0x14092c51f: movsxd  rdx,ecx
0x14092c522: js      0x14092c547
0x14092c524: nop     DWORD PTR [rax+0x0]
0x14092c528: nop     DWORD PTR [rax+rax*1+0x0]
0x14092c530: mov     rax,QWORD PTR [r8+rdx*8]
0x14092c534: cmp     WORD PTR [rax+0x28],r9w
0x14092c539: je      0x14092c5fb
0x14092c53f: dec     ecx
0x14092c541: sub     rdx,0x1
0x14092c545: jns     0x14092c530
0x14092c547: mov     rdi,QWORD PTR [rbp-0x11]
0x14092c54b: cmp     rdi,0xd
0x14092c54f: jae     0x14092c35d
0x14092c555: mov     rcx,rdi
0x14092c558: shr     rcx,1
0x14092c55b: movabs  rbx,0x7fffffffffffffff
0x14092c565: mov     rax,rbx
0x14092c568: sub     rax,rcx
0x14092c56b: cmp     rdi,rax
0x14092c56e: ja      0x14092c57e
0x14092c570: lea     rax,[rcx+rdi*1]
0x14092c574: mov     rbx,r15
0x14092c577: cmp     rax,rbx
0x14092c57a: cmova   rbx,rax
0x14092c57e: lea     rcx,[rbx+0x1]
0x14092c582: call    0x140071d90
0x14092c587: mov     r14,rax
0x14092c58a: mov     QWORD PTR [rbp-0x19],0xd
0x14092c592: mov     QWORD PTR [rbp-0x11],rbx
0x14092c596: movsd   xmm0,QWORD PTR [rip+0xdf058a]        # 0x14171cb28 ; literal='Prepared Food'
0x14092c59e: movsd   QWORD PTR [rax],xmm0
0x14092c5a2: mov     ecx,DWORD PTR [rip+0xdf0588]        # 0x14171cb30 ; literal=' Food'
0x14092c5a8: mov     DWORD PTR [rax+0x8],ecx
0x14092c5ab: movzx   ecx,BYTE PTR [rip+0xdf0582]        # 0x14171cb34 ; literal='d'
0x14092c5b2: mov     BYTE PTR [rax+0xc],cl
0x14092c5b5: mov     BYTE PTR [rax+0xd],0x0
0x14092c5b9: cmp     rdi,0xf
0x14092c5bd: jbe     0x14092c465
0x14092c5c3: lea     rdx,[rdi+0x1]
0x14092c5c7: mov     rcx,QWORD PTR [rbp-0x29]
0x14092c5cb: mov     rax,rcx
0x14092c5ce: cmp     rdx,0x1000
0x14092c5d5: jb      0x14092c460
0x14092c5db: add     rdx,0x27
0x14092c5df: mov     rcx,QWORD PTR [rcx-0x8]
0x14092c5e3: sub     rax,rcx
0x14092c5e6: add     rax,0xfffffffffffffff8
0x14092c5ea: cmp     rax,0x1f
0x14092c5ee: jbe     0x14092c460
0x14092c5f4: call    QWORD PTR [rip+0xccf4ce]        # 0x1415fbac8
0x14092c5fa: int3    
0x14092c5fb: movsxd  rax,ecx
0x14092c5fe: mov     rdx,QWORD PTR [r8+rax*8]
0x14092c602: test    rdx,rdx
0x14092c605: je      0x14092c547
0x14092c60b: add     rdx,0x68
0x14092c60f: lea     rax,[rbp-0x29]
0x14092c613: cmp     rax,rdx
0x14092c616: je      0x14092c0e2
0x14092c61c: mov     r8,QWORD PTR [rdx+0x10]
0x14092c620: cmp     QWORD PTR [rdx+0x18],0xf
0x14092c625: jbe     0x14092c62a
0x14092c627: mov     rdx,QWORD PTR [rdx]
0x14092c62a: lea     rcx,[rbp-0x29]
0x14092c62e: call    0x140070e90
0x14092c633: jmp     0x14092c0e2
0x14092c638: mov     rax,QWORD PTR [rdi+0x538]
0x14092c63f: mov     edx,0x4
0x14092c644: jmp     0x14092bc73
0x14092c649: mov     rax,QWORD PTR [rdi+0x6d0]
0x14092c650: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c654: mov     rax,QWORD PTR [rdi+0x6b8]
0x14092c65b: mov     edx,0x46
0x14092c660: jmp     0x14092c8b6
0x14092c665: mov     rax,QWORD PTR [rdi+0x700]
0x14092c66c: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c670: mov     rax,QWORD PTR [rdi+0x6e8]
0x14092c677: mov     edx,0x4
0x14092c67c: jmp     0x14092c8b6
0x14092c681: mov     rax,QWORD PTR [rdi+0x6a0]
0x14092c688: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c68c: mov     rax,QWORD PTR [rdi+0x688]
0x14092c693: mov     edx,0x3
0x14092c698: jmp     0x14092c8b6
0x14092c69d: mov     rax,QWORD PTR [rdi+0x850]
0x14092c6a4: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c6a8: mov     rax,QWORD PTR [rdi+0x838]
0x14092c6af: mov     edx,0x10
0x14092c6b4: jmp     0x14092c8b6
0x14092c6b9: mov     rax,QWORD PTR [rdi+0x418]
0x14092c6c0: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c6c4: mov     rax,QWORD PTR [rdi+0x400]
0x14092c6cb: mov     edx,0x1f
0x14092c6d0: jmp     0x14092c8b6
0x14092c6d5: mov     rax,QWORD PTR [rdi+0x478]
0x14092c6dc: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c6e0: mov     rax,QWORD PTR [rdi+0x460]
0x14092c6e7: mov     edx,0x1f
0x14092c6ec: jmp     0x14092c8b6
0x14092c6f1: mov     rax,QWORD PTR [rdi+0x4a8]
0x14092c6f8: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c6fc: mov     rax,QWORD PTR [rdi+0x490]
0x14092c703: mov     edx,0x1f
0x14092c708: jmp     0x14092c8b6
0x14092c70d: mov     rax,QWORD PTR [rdi+0x4d8]
0x14092c714: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c718: mov     rax,QWORD PTR [rdi+0x4c0]
0x14092c71f: mov     edx,0x1f
0x14092c724: jmp     0x14092c8b6
0x14092c729: mov     rax,QWORD PTR [rdi+0x478]
0x14092c730: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c734: mov     rax,QWORD PTR [rdi+0x460]
0x14092c73b: mov     edx,0x39
0x14092c740: jmp     0x14092c8b6
0x14092c745: mov     rax,QWORD PTR [rdi+0x4a8]
0x14092c74c: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c750: mov     rax,QWORD PTR [rdi+0x490]
0x14092c757: mov     edx,0x39
0x14092c75c: jmp     0x14092c8b6
0x14092c761: mov     rax,QWORD PTR [rdi+0x4d8]
0x14092c768: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c76c: mov     rax,QWORD PTR [rdi+0x4c0]
0x14092c773: mov     edx,0x39
0x14092c778: jmp     0x14092c8b6
0x14092c77d: mov     rax,QWORD PTR [rdi+0x478]
0x14092c784: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c788: mov     rax,QWORD PTR [rdi+0x460]
0x14092c78f: mov     edx,0xa
0x14092c794: jmp     0x14092c8b6
0x14092c799: mov     rax,QWORD PTR [rdi+0x4a8]
0x14092c7a0: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c7a4: mov     rax,QWORD PTR [rdi+0x490]
0x14092c7ab: mov     edx,0xa
0x14092c7b0: jmp     0x14092c8b6
0x14092c7b5: mov     rax,QWORD PTR [rdi+0x4d8]
0x14092c7bc: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c7c0: mov     rax,QWORD PTR [rdi+0x4c0]
0x14092c7c7: mov     edx,0xa
0x14092c7cc: jmp     0x14092c8b6
0x14092c7d1: mov     edx,0x11
0x14092c7d6: jmp     0x14092c8a4
0x14092c7db: mov     rax,QWORD PTR [rdi+0xb20]
0x14092c7e2: mov     edx,DWORD PTR [rax+r14*4]
0x14092c7e6: mov     rax,QWORD PTR [rdi+0xb08]
0x14092c7ed: movzx   r9d,WORD PTR [rax+r14*2]
0x14092c7f2: mov     rax,QWORD PTR [rdi+0xaf0]
0x14092c7f9: movzx   r8d,WORD PTR [rax+r14*2]
0x14092c7fe: mov     rax,QWORD PTR [rdi+0xad8]
0x14092c805: mov     DWORD PTR [rsp+0x68],ebx
0x14092c809: mov     DWORD PTR [rsp+0x60],ebx
0x14092c80d: mov     BYTE PTR [rsp+0x58],0x1
0x14092c812: mov     DWORD PTR [rsp+0x50],0xffffffff
0x14092c81a: mov     DWORD PTR [rsp+0x48],0xffffffff
0x14092c822: mov     QWORD PTR [rsp+0x40],rbx
0x14092c827: mov     BYTE PTR [rsp+0x38],0x0
0x14092c82c: mov     DWORD PTR [rsp+0x30],ebx
0x14092c830: mov     DWORD PTR [rsp+0x28],0xffffffff
0x14092c838: mov     DWORD PTR [rsp+0x20],edx
0x14092c83c: movzx   edx,WORD PTR [rax+r14*2]
0x14092c841: jmp     0x14092c8f0
0x14092c846: mov     rax,QWORD PTR [rdi+0x7c0]
0x14092c84d: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c851: mov     rax,QWORD PTR [rdi+0x7a8]
0x14092c858: mov     edx,0xb
0x14092c85d: jmp     0x14092c8b6
0x14092c85f: mov     rax,QWORD PTR [rdi+0x7f0]
0x14092c866: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c86a: mov     rax,QWORD PTR [rdi+0x7d8]
0x14092c871: mov     edx,0x3e
0x14092c876: jmp     0x14092c8b6
0x14092c878: mov     rax,QWORD PTR [rdi+0x820]
0x14092c87f: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c883: mov     rax,QWORD PTR [rdi+0x808]
0x14092c88a: mov     edx,0x3d
0x14092c88f: jmp     0x14092c8b6
0x14092c891: mov     edx,0x12
0x14092c896: jmp     0x14092c8a4
0x14092c898: mov     edx,0x52
0x14092c89d: jmp     0x14092c8a4
0x14092c89f: mov     edx,0x53
0x14092c8a4: mov     rax,QWORD PTR [rdi+0x790]
0x14092c8ab: mov     r9d,DWORD PTR [rax+r14*4]
0x14092c8af: mov     rax,QWORD PTR [rdi+0x778]
0x14092c8b6: mov     DWORD PTR [rsp+0x68],ebx
0x14092c8ba: mov     DWORD PTR [rsp+0x60],ebx
0x14092c8be: mov     BYTE PTR [rsp+0x58],0x1
0x14092c8c3: mov     r8d,0xffffffff
0x14092c8c9: mov     DWORD PTR [rsp+0x50],r8d
0x14092c8ce: mov     DWORD PTR [rsp+0x48],r8d
0x14092c8d3: mov     QWORD PTR [rsp+0x40],rbx
0x14092c8d8: mov     BYTE PTR [rsp+0x38],0x0
0x14092c8dd: mov     DWORD PTR [rsp+0x30],ebx
0x14092c8e1: mov     DWORD PTR [rsp+0x28],r8d
0x14092c8e6: mov     DWORD PTR [rsp+0x20],r9d
0x14092c8eb: movzx   r9d,WORD PTR [rax+r14*2]
0x14092c8f0: mov     rcx,rsi
0x14092c8f3: call    0x140a99510
0x14092c8f8: mov     rcx,rsi
0x14092c8fb: call    0x1405440a0
0x14092c900: nop     
0x14092c901: mov     rdx,QWORD PTR [rbp-0x11]
0x14092c905: cmp     rdx,0xf
0x14092c909: jbe     0x14092c93f
0x14092c90b: inc     rdx
0x14092c90e: mov     rcx,QWORD PTR [rbp-0x29]
0x14092c912: mov     rax,rcx
0x14092c915: cmp     rdx,0x1000
0x14092c91c: jb      0x14092c93a
0x14092c91e: add     rdx,0x27
0x14092c922: mov     rcx,QWORD PTR [rcx-0x8]
0x14092c926: sub     rax,rcx
0x14092c929: add     rax,0xfffffffffffffff8
0x14092c92d: cmp     rax,0x1f
0x14092c931: jbe     0x14092c93a
0x14092c933: call    QWORD PTR [rip+0xccf18f]        # 0x1415fbac8
0x14092c939: int3    
0x14092c93a: call    0x14154de20
0x14092c93f: mov     rcx,QWORD PTR [rbp+0x17]
0x14092c943: xor     rcx,rsp
0x14092c946: call    0x14154de00
0x14092c94b: add     rsp,0xc0
0x14092c952: pop     r15
0x14092c954: pop     r14
0x14092c956: pop     r12
0x14092c958: pop     rdi
0x14092c959: pop     rsi
0x14092c95a: pop     rbx
0x14092c95b: pop     rbp
0x14092c95c: ret     
0x14092c95d: nop     DWORD PTR [rax]
0x14092c960: cwde    
0x14092c961: mov     dh,0x92
0x14092c963: add     al,dl
0x14092c965: mov     dh,0x92
0x14092c967: add     ah,ch
0x14092c969: mov     dh,0x92
0x14092c96b: add     BYTE PTR [rdi+rsi*4],ah
0x14092c96e: xchg    edx,eax
0x14092c96f: add     BYTE PTR [rsi-0x17ff6d47],al
0x14092c975: mov     ebx,0xbc300092
0x14092c97a: xchg    edx,eax
0x14092c97b: add     BYTE PTR [rdi-0x44],ah
0x14092c97e: xchg    edx,eax
0x14092c97f: add     BYTE PTR [rdx-0x4fff6d44],ah
0x14092c985: mov     esp,0xbccc0092
0x14092c98a: xchg    edx,eax
0x14092c98b: add     al,ch
0x14092c98d: mov     esp,0xbd330092
0x14092c992: xchg    edx,eax
0x14092c993: add     BYTE PTR [rdx-0x43],cl
0x14092c996: xchg    edx,eax
0x14092c997: add     BYTE PTR [rax-0x43],bl
0x14092c99a: xchg    edx,eax
0x14092c99b: add     BYTE PTR [rsi-0x43],ah
0x14092c99e: xchg    edx,eax
0x14092c99f: add     BYTE PTR [rdi*4-0x4290ff6e],bh
0x14092c9a6: xchg    edx,eax
0x14092c9a7: add     BYTE PTR [rax-0x6eff6d43],al
0x14092c9ad: mov     ebp,0xbda20092
0x14092c9b2: xchg    edx,eax
0x14092c9b3: add     BYTE PTR [rbx-0x3bff6d43],dh
0x14092c9b9: mov     ebp,0xbde60092
0x14092c9be: xchg    edx,eax
0x14092c9bf: add     bh,dh
0x14092c9c1: mov     ebp,0xc00c0092
0x14092c9c6: xchg    edx,eax
0x14092c9c7: add     BYTE PTR [rax],ch
0x14092c9c9: rcl     BYTE PTR [rdx-0x6d3fbc00],0x0
0x14092c9d1: rcl     BYTE PTR [rdx-0x6d3ee200],0x0
0x14092c9d8: jl      0x14092c99a
0x14092c9da: xchg    edx,eax
0x14092c9db: add     BYTE PTR [rdi-0x3f],bh
0x14092c9de: xchg    edx,eax
0x14092c9df: add     BYTE PTR [rbx+0x6f0092c1],bl
0x14092c9e5: ret     0x92
0x14092c9e8: xchg    edx,eax
0x14092c9ea: xchg    edx,eax
0x14092c9eb: add     BYTE PTR [rsi-0x3c],ch
0x14092c9ee: xchg    edx,eax
0x14092c9ef: add     BYTE PTR [rax],bh
0x14092c9f2: xchg    edx,eax
0x14092c9f3: add     BYTE PTR [rbp-0x46ff6d3a],bl
0x14092c9fa: xchg    edx,eax
0x14092c9fb: add     ch,dl
0x14092c9fe: xchg    edx,eax
0x14092c9ff: add     cl,dh
0x14092ca02: xchg    edx,eax
0x14092ca03: add     BYTE PTR [rcx],ch
0x14092ca06: xchg    edx,eax
0x14092ca07: add     BYTE PTR [rbp-0x39],al
0x14092ca0a: xchg    edx,eax
0x14092ca0b: add     BYTE PTR [rbp-0x39],bh
0x14092ca0e: xchg    edx,eax
0x14092ca0f: add     BYTE PTR [rcx-0x2eff6d39],bl
0x14092ca16: xchg    edx,eax
0x14092ca17: add     BYTE PTR [rsi-0x38],al
0x14092ca1a: xchg    edx,eax
0x14092ca1b: add     BYTE PTR [rdi-0x38],bl
0x14092ca1e: xchg    edx,eax
0x14092ca1f: add     BYTE PTR [rax-0x38],bh
0x14092ca22: xchg    edx,eax
0x14092ca23: add     BYTE PTR [rcx-0x3a],cl
0x14092ca26: xchg    edx,eax
0x14092ca27: add     BYTE PTR [rcx-0x24ff6d3a],al
0x14092ca2e: xchg    edx,eax
0x14092ca2f: add     BYTE PTR [rcx-0x67ff6d38],dl
0x14092ca35: enter   0x92,0x9f
0x14092ca39: enter   0x92,0x1
0x14092ca3d: rcl     DWORD PTR [rdx-0x6d38f300],0x0
0x14092ca44: mov     ch,0xc7
0x14092ca46: xchg    edx,eax
0x14092ca47: add     BYTE PTR [rax],cl
0x14092ca49: mov     bh,0x92
0x14092ca4b: add     BYTE PTR [rcx-0x39],ah
0x14092ca4e: xchg    edx,eax
0x14092ca4f: add     ch,dl
0x14092ca51: mov     ebp,0xc6650092
0x14092ca56: xchg    edx,eax
0x14092ca57: add     BYTE PTR [rsi+rsi*4-0x4983ff6e],dh
0x14092ca5e: xchg    edx,eax
