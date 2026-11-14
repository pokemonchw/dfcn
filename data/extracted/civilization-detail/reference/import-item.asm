0x140a9c6b0: rex     push rbp
0x140a9c6b2: push    rbx
0x140a9c6b3: push    rsi
0x140a9c6b4: push    rdi
0x140a9c6b5: push    r12
0x140a9c6b7: push    r13
0x140a9c6b9: push    r14
0x140a9c6bb: push    r15
0x140a9c6bd: lea     rbp,[rsp-0x178]
0x140a9c6c5: sub     rsp,0x278
0x140a9c6cc: mov     rax,QWORD PTR [rip+0xe2196d]        # 0x1418be040
0x140a9c6d3: xor     rax,rsp
0x140a9c6d6: mov     QWORD PTR [rbp+0x168],rax
0x140a9c6dd: movsx   rdi,r9w
0x140a9c6e1: mov     WORD PTR [rsp+0x4e],di
0x140a9c6e6: movsx   r15d,r8w
0x140a9c6ea: movsx   r10d,dx
0x140a9c6ee: mov     WORD PTR [rsp+0x4a],r10w
0x140a9c6f4: mov     rbx,rcx
0x140a9c6f7: mov     r12d,DWORD PTR [rbp+0x1e8]
0x140a9c6fe: movsxd  rsi,DWORD PTR [rbp+0x1e0]
0x140a9c705: mov     DWORD PTR [rsp+0x54],esi
0x140a9c709: mov     r14d,DWORD PTR [rbp+0x210]
0x140a9c710: mov     DWORD PTR [rsp+0x58],r14d
0x140a9c715: xorps   xmm0,xmm0
0x140a9c718: movups  XMMWORD PTR [rbp-0x78],xmm0
0x140a9c71c: xor     eax,eax
0x140a9c71e: mov     r13d,eax
0x140a9c721: mov     QWORD PTR [rbp-0x68],rax
0x140a9c725: mov     QWORD PTR [rbp-0x60],0xf
0x140a9c72d: mov     BYTE PTR [rbp-0x78],al
0x140a9c730: cmp     BYTE PTR [rbp+0x218],al
0x140a9c736: jne     0x140a9c7fc
0x140a9c73c: mov     ecx,r10d
0x140a9c73f: sub     ecx,0x19
0x140a9c742: je      0x140a9c75c
0x140a9c744: sub     ecx,0x1
0x140a9c747: je      0x140a9c75c
0x140a9c749: sub     ecx,0x2
0x140a9c74c: je      0x140a9c75c
0x140a9c74e: sub     ecx,0x1
0x140a9c751: je      0x140a9c75c
0x140a9c753: cmp     ecx,0x1f
0x140a9c756: jne     0x140a9c7fa
0x140a9c75c: mov     eax,DWORD PTR [rip+0xe21ad6]        # 0x1418be238
0x140a9c762: cmp     eax,0x1
0x140a9c765: jne     0x140a9c794
0x140a9c767: mov     rax,QWORD PTR [rip+0x196ade2]        # 0x142407550
0x140a9c76e: sub     rax,QWORD PTR [rip+0x196add3]        # 0x142407548
0x140a9c775: sar     rax,0x3
0x140a9c779: test    rax,rax
0x140a9c77c: je      0x140a9c7a2
0x140a9c77e: mov     r9,QWORD PTR [rip+0x196ae0b]        # 0x142407590
0x140a9c785: test    r9,r9
0x140a9c788: je      0x140a9c7a2
0x140a9c78a: movzx   r9d,WORD PTR [r9+0xa4]
0x140a9c792: jmp     0x140a9c7a8
0x140a9c794: test    eax,eax
0x140a9c796: jne     0x140a9c7a2
0x140a9c798: movzx   r9d,WORD PTR [rip+0x191935c]        # 0x1423b5afc
0x140a9c7a0: jmp     0x140a9c7a8
0x140a9c7a2: mov     r9d,0xffffffff
0x140a9c7a8: movzx   r8d,WORD PTR [rbp+0x208]
0x140a9c7b0: movzx   edx,r15w
0x140a9c7b4: movzx   ecx,r10w
0x140a9c7b8: call    0x1413797d0
0x140a9c7bd: sub     eax,0x1
0x140a9c7c0: je      0x140a9c7d9
0x140a9c7c2: cmp     eax,0x1
0x140a9c7c5: jne     0x140a9c7fa
0x140a9c7c7: mov     eax,DWORD PTR [rip+0xbc98df]        # 0x1416660ac ; literal='large'
0x140a9c7cd: mov     DWORD PTR [rbp-0x78],eax
0x140a9c7d0: movzx   eax,BYTE PTR [rip+0xbc98d9]        # 0x1416660b0 ; literal='e'
0x140a9c7d7: jmp     0x140a9c7e9
0x140a9c7d9: mov     eax,DWORD PTR [rip+0xc096b1]        # 0x1416a5e90 ; literal='small'
0x140a9c7df: mov     DWORD PTR [rbp-0x78],eax
0x140a9c7e2: movzx   eax,BYTE PTR [rip+0xc096ab]        # 0x1416a5e94 ; literal='l'
0x140a9c7e9: mov     r13d,0x5
0x140a9c7ef: mov     BYTE PTR [rbp-0x73],0x0
0x140a9c7f3: mov     BYTE PTR [rbp-0x74],al
0x140a9c7f6: mov     QWORD PTR [rbp-0x68],r13
0x140a9c7fa: xor     eax,eax
0x140a9c7fc: cmp     BYTE PTR [rbp+0x1f8],0x0
0x140a9c803: jne     0x140a9c81d
0x140a9c805: mov     QWORD PTR [rbx+0x10],rax
0x140a9c809: mov     rax,rbx
0x140a9c80c: cmp     QWORD PTR [rbx+0x18],0xf
0x140a9c811: jbe     0x140a9c816
0x140a9c813: mov     rax,QWORD PTR [rbx]
0x140a9c816: mov     BYTE PTR [rax],0x0
0x140a9c819: mov     r13,QWORD PTR [rbp-0x68]
0x140a9c81d: test    BYTE PTR [rbp+0x228],0x4
0x140a9c824: je      0x140a9c83f
0x140a9c826: mov     r8d,0x6
0x140a9c82c: lea     rdx,[rip+0xc4fa99]        # 0x1416ec2cc ; literal='grown '
0x140a9c833: mov     rcx,rbx
0x140a9c836: call    0x140071040
0x140a9c83b: mov     r13,QWORD PTR [rbp-0x68]
0x140a9c83f: xorps   xmm0,xmm0
0x140a9c842: movups  XMMWORD PTR [rsp+0x68],xmm0
0x140a9c847: xor     r9d,r9d
0x140a9c84a: mov     QWORD PTR [rsp+0x78],r9
0x140a9c84f: mov     ecx,0xf
0x140a9c854: mov     QWORD PTR [rbp-0x80],rcx
0x140a9c858: mov     BYTE PTR [rsp+0x68],r9b
0x140a9c85d: movsx   rax,WORD PTR [rsp+0x4a]
0x140a9c863: mov     r8d,0x1
0x140a9c869: cmp     eax,0x5c
0x140a9c86c: ja      0x140aa1a88
0x140a9c872: lea     rdx,[rip+0xffffffffff563787]        # 0x140000000
0x140a9c879: mov     eax,DWORD PTR [rdx+rax*4+0xaa1b80]
0x140a9c880: add     rax,rdx
0x140a9c883: jmp     rax
0x140a9c885: mov     r14d,DWORD PTR [rbp+0x1f0]
0x140a9c88c: mov     eax,DWORD PTR [rbp+0x220]
0x140a9c892: cmp     di,0xffff
0x140a9c896: jne     0x140a9c89c
0x140a9c898: test    eax,eax
0x140a9c89a: je      0x140a9c8f6
0x140a9c89c: mov     WORD PTR [rsp+0x30],r9w
0x140a9c8a2: mov     BYTE PTR [rsp+0x28],0x0
0x140a9c8a7: mov     DWORD PTR [rsp+0x20],eax
0x140a9c8ab: mov     r9d,esi
0x140a9c8ae: movzx   r8d,di
0x140a9c8b2: lea     rdx,[rsp+0x68]
0x140a9c8b7: lea     rcx,[rip+0x19570b2]        # 0x1423f3970
0x140a9c8be: call    0x1414eab90
0x140a9c8c3: lea     rdx,[rsp+0x68]
0x140a9c8c8: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9c8cd: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9c8d3: mov     r8,QWORD PTR [rsp+0x78]
0x140a9c8d8: mov     rcx,rbx
0x140a9c8db: call    0x140071040
0x140a9c8e0: test    r14b,0x20
0x140a9c8e4: jne     0x140aa1b0b
0x140a9c8ea: mov     dl,0x20
0x140a9c8ec: mov     rcx,rbx
0x140a9c8ef: call    0x1400bb1b0
0x140a9c8f4: jmp     0x140a9c900
0x140a9c8f6: test    r14b,0x20
0x140a9c8fa: jne     0x140aa1b0b
0x140a9c900: mov     r8d,0x4
0x140a9c906: lea     rdx,[rip+0xbffe97]        # 0x14169c7a4 ; literal='logs'
0x140a9c90d: mov     rcx,rbx
0x140a9c910: call    0x140071040
0x140a9c915: jmp     0x140aa1b0b
0x140a9c91a: mov     eax,DWORD PTR [rbp+0x220]
0x140a9c920: cmp     di,0xffff
0x140a9c924: jne     0x140a9c92a
0x140a9c926: test    eax,eax
0x140a9c928: je      0x140a9c978
0x140a9c92a: mov     WORD PTR [rsp+0x30],r9w
0x140a9c930: mov     BYTE PTR [rsp+0x28],0x0
0x140a9c935: mov     DWORD PTR [rsp+0x20],eax
0x140a9c939: mov     r9d,esi
0x140a9c93c: movzx   r8d,di
0x140a9c940: lea     rdx,[rsp+0x68]
0x140a9c945: lea     rcx,[rip+0x1957024]        # 0x1423f3970
0x140a9c94c: call    0x1414eab90
0x140a9c951: lea     rdx,[rsp+0x68]
0x140a9c956: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9c95b: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9c961: mov     r8,QWORD PTR [rsp+0x78]
0x140a9c966: mov     rcx,rbx
0x140a9c969: call    0x140071040
0x140a9c96e: mov     dl,0x20
0x140a9c970: mov     rcx,rbx
0x140a9c973: call    0x1400bb1b0
0x140a9c978: lea     rdx,[rip+0xc53a71]        # 0x1416f03f0 ; literal='branch'
0x140a9c97f: mov     r8d,0x6
0x140a9c985: mov     rcx,rbx
0x140a9c988: call    0x140071040
0x140a9c98d: cmp     r12d,0x1
0x140a9c991: je      0x140aa1b47
0x140a9c997: mov     r8d,0x2
0x140a9c99d: lea     rdx,[rip+0xc53a54]        # 0x1416f03f8 ; literal='es'
0x140a9c9a4: mov     rcx,rbx
0x140a9c9a7: call    0x140071040
0x140a9c9ac: jmp     0x140aa1b0b
0x140a9c9b1: cmp     di,0xffff
0x140a9c9b5: jne     0x140a9c9d1
0x140a9c9b7: mov     r8d,0xa
0x140a9c9bd: lea     rdx,[rip+0xb80574]        # 0x14161cf38 ; literal='rough gems'
0x140a9c9c4: mov     rcx,rbx
0x140a9c9c7: call    0x140071040
0x140a9c9cc: jmp     0x140aa1b0b
0x140a9c9d1: cmp     edi,0x3
0x140a9c9d4: jne     0x140a9c9ea
0x140a9c9d6: lea     rdx,[rip+0xc53a23]        # 0x1416f0400 ; literal='raw green glass'
0x140a9c9dd: mov     rcx,rbx
0x140a9c9e0: call    0x140070b90
0x140a9c9e5: jmp     0x140aa1b0b
0x140a9c9ea: cmp     edi,0x4
0x140a9c9ed: jne     0x140a9ca03
0x140a9c9ef: lea     rdx,[rip+0xc53a1a]        # 0x1416f0410 ; literal='raw clear glass'
0x140a9c9f6: mov     rcx,rbx
0x140a9c9f9: call    0x140070b90
0x140a9c9fe: jmp     0x140aa1b0b
0x140a9ca03: cmp     edi,0x5
0x140a9ca06: jne     0x140a9ca1c
0x140a9ca08: lea     rdx,[rip+0xc539a1]        # 0x1416f03b0 ; literal='raw crystal glass'
0x140a9ca0f: mov     rcx,rbx
0x140a9ca12: call    0x140070b90
0x140a9ca17: jmp     0x140aa1b0b
0x140a9ca1c: cmp     esi,0xffffffff
0x140a9ca1f: jne     0x140a9ca3e
0x140a9ca21: test    di,di
0x140a9ca24: jne     0x140aa1b0b
0x140a9ca2a: lea     rdx,[rip+0xb80507]        # 0x14161cf38 ; literal='rough gems'
0x140a9ca31: mov     rcx,rbx
0x140a9ca34: call    0x140070b90
0x140a9ca39: jmp     0x140aa1b0b
0x140a9ca3e: lea     rcx,[rbp+0x48]
0x140a9ca42: call    0x140070cc0
0x140a9ca47: nop     
0x140a9ca48: lea     rdx,[rip+0xc500b9]        # 0x1416ecb08 ; literal='rough '
0x140a9ca4f: mov     rcx,rbx
0x140a9ca52: call    0x140070b90
0x140a9ca57: mov     BYTE PTR [rsp+0x20],0x1
0x140a9ca5c: mov     r9d,esi
0x140a9ca5f: movzx   r8d,di
0x140a9ca63: lea     rdx,[rbp+0x48]
0x140a9ca67: lea     rcx,[rip+0x1956f02]        # 0x1423f3970
0x140a9ca6e: call    0x1414eaa00
0x140a9ca73: lea     rdx,[rbp+0x48]
0x140a9ca77: mov     rcx,rbx
0x140a9ca7a: call    0x1400bb340
0x140a9ca7f: nop     
0x140a9ca80: lea     rcx,[rbp+0x48]
0x140a9ca84: call    0x140070e80
0x140a9ca89: jmp     0x140aa1b0b
0x140a9ca8e: xor     r14b,r14b
0x140a9ca91: mov     r15d,DWORD PTR [rbp+0x220]
0x140a9ca98: test    di,di
0x140a9ca9b: jne     0x140a9caf8
0x140a9ca9d: test    esi,esi
0x140a9ca9f: js      0x140a9cae1
0x140a9caa1: mov     rax,QWORD PTR [rip+0x1a722a8]        # 0x14250ed50
0x140a9caa8: mov     rdx,QWORD PTR [rip+0x1a72299]        # 0x14250ed48
0x140a9caaf: sub     rax,rdx
0x140a9cab2: sar     rax,0x3
0x140a9cab6: cmp     rsi,rax
0x140a9cab9: jae     0x140a9cae1
0x140a9cabb: mov     rax,QWORD PTR [rdx+rsi*8]
0x140a9cabf: cmp     DWORD PTR [rax+0x40],0x2
0x140a9cac3: jle     0x140a9cad5
0x140a9cac5: mov     rax,QWORD PTR [rax+0x38]
0x140a9cac9: test    BYTE PTR [rax+0x2],0x20
0x140a9cacd: je      0x140a9cad5
0x140a9cacf: movzx   eax,r8b
0x140a9cad3: jmp     0x140a9cad7
0x140a9cad5: xor     al,al
0x140a9cad7: test    al,al
0x140a9cad9: je      0x140a9caf8
0x140a9cadb: movzx   r14d,r8b
0x140a9cadf: jmp     0x140a9cb1f
0x140a9cae1: mov     r8d,0x6
0x140a9cae7: lea     rdx,[rip+0xc09306]        # 0x1416a5df4 ; literal='small '
0x140a9caee: mov     rcx,rbx
0x140a9caf1: call    0x140071040
0x140a9caf6: jmp     0x140a9cb1c
0x140a9caf8: mov     r8d,0x6
0x140a9cafe: lea     rdx,[rip+0xc092ef]        # 0x1416a5df4 ; literal='small '
0x140a9cb05: mov     rcx,rbx
0x140a9cb08: call    0x140071040
0x140a9cb0d: cmp     di,0xffff
0x140a9cb11: jne     0x140a9cb1c
0x140a9cb13: test    r15d,r15d
0x140a9cb16: je      0x140a9cbd8
0x140a9cb1c: xor     r9d,r9d
0x140a9cb1f: xorps   xmm0,xmm0
0x140a9cb22: movups  XMMWORD PTR [rbp-0x38],xmm0
0x140a9cb26: mov     QWORD PTR [rbp-0x28],r9
0x140a9cb2a: mov     QWORD PTR [rbp-0x20],0xf
0x140a9cb32: mov     BYTE PTR [rbp-0x38],0x0
0x140a9cb36: mov     WORD PTR [rsp+0x30],r9w
0x140a9cb3c: mov     BYTE PTR [rsp+0x28],0x0
0x140a9cb41: mov     DWORD PTR [rsp+0x20],r15d
0x140a9cb46: mov     r9d,esi
0x140a9cb49: movzx   r8d,di
0x140a9cb4d: lea     rdx,[rbp-0x38]
0x140a9cb51: lea     rcx,[rip+0x1956e18]        # 0x1423f3970
0x140a9cb58: call    0x1414eab90
0x140a9cb5d: lea     rdx,[rbp-0x38]
0x140a9cb61: cmp     QWORD PTR [rbp-0x20],0xf
0x140a9cb66: cmova   rdx,QWORD PTR [rbp-0x38]
0x140a9cb6b: mov     r8,QWORD PTR [rbp-0x28]
0x140a9cb6f: mov     rcx,rbx
0x140a9cb72: call    0x140071040
0x140a9cb77: test    r14b,r14b
0x140a9cb7a: jne     0x140a9cb87
0x140a9cb7c: mov     dl,0x20
0x140a9cb7e: mov     rcx,rbx
0x140a9cb81: call    0x1400bb1b0
0x140a9cb86: nop     
0x140a9cb87: mov     rdx,QWORD PTR [rbp-0x20]
0x140a9cb8b: cmp     rdx,0xf
0x140a9cb8f: jbe     0x140a9cbc2
0x140a9cb91: inc     rdx
0x140a9cb94: mov     rcx,QWORD PTR [rbp-0x38]
0x140a9cb98: mov     rax,rcx
0x140a9cb9b: cmp     rdx,0x1000
0x140a9cba2: jb      0x140a9cbbd
0x140a9cba4: add     rdx,0x27
0x140a9cba8: mov     rcx,QWORD PTR [rcx-0x8]
0x140a9cbac: sub     rax,rcx
0x140a9cbaf: add     rax,0xfffffffffffffff8
0x140a9cbb3: cmp     rax,0x1f
0x140a9cbb7: ja      0x140aa079e
0x140a9cbbd: call    0x1415530d0
0x140a9cbc2: xor     eax,eax
0x140a9cbc4: mov     QWORD PTR [rbp-0x28],rax
0x140a9cbc8: mov     QWORD PTR [rbp-0x20],0xf
0x140a9cbd0: mov     BYTE PTR [rbp-0x38],al
0x140a9cbd3: test    r14b,r14b
0x140a9cbd6: jne     0x140a9cbed
0x140a9cbd8: mov     r8d,0x4
0x140a9cbde: lea     rdx,[rip+0xc537df]        # 0x1416f03c4 ; literal='rock'
0x140a9cbe5: mov     rcx,rbx
0x140a9cbe8: call    0x140071040
0x140a9cbed: cmp     QWORD PTR [rbx+0x10],0x0
0x140a9cbf2: jne     0x140aa1b0b
0x140a9cbf8: mov     r8d,0xa
0x140a9cbfe: lea     rdx,[rip+0xc537cb]        # 0x1416f03d0 ; literal='small rock'
0x140a9cc05: mov     rcx,rbx
0x140a9cc08: call    0x140070f00
0x140a9cc0d: jmp     0x140aa1b0b
0x140a9cc12: test    di,di
0x140a9cc15: jne     0x140a9cc6b
0x140a9cc17: cmp     esi,0xffffffff
0x140a9cc1a: je      0x140a9cc57
0x140a9cc1c: lea     rcx,[rbp+0x68]
0x140a9cc20: call    0x140070cc0
0x140a9cc25: nop     
0x140a9cc26: xor     r8d,r8d
0x140a9cc29: mov     r9d,esi
0x140a9cc2c: lea     rdx,[rbp+0x68]
0x140a9cc30: lea     rcx,[rip+0x1956d39]        # 0x1423f3970
0x140a9cc37: call    0x1414ea960
0x140a9cc3c: lea     rdx,[rbp+0x68]
0x140a9cc40: mov     rcx,rbx
0x140a9cc43: call    0x1400bb340
0x140a9cc48: nop     
0x140a9cc49: lea     rcx,[rbp+0x68]
0x140a9cc4d: call    0x140070e80
0x140a9cc52: jmp     0x140aa1b0b
0x140a9cc57: lea     rdx,[rip+0xc53782]        # 0x1416f03e0 ; literal='stone boulders'
0x140a9cc5e: mov     rcx,rbx
0x140a9cc61: call    0x140070b90
0x140a9cc66: jmp     0x140aa1b0b
0x140a9cc6b: mov     r14d,DWORD PTR [rbp+0x220]
0x140a9cc72: cmp     di,0xffff
0x140a9cc76: jne     0x140a9cc91
0x140a9cc78: test    r14d,r14d
0x140a9cc7b: jne     0x140a9cc91
0x140a9cc7d: lea     rdx,[rip+0xc536fc]        # 0x1416f0380 ; literal='boulders'
0x140a9cc84: mov     rcx,rbx
0x140a9cc87: call    0x140070b90
0x140a9cc8c: jmp     0x140aa1b0b
0x140a9cc91: lea     rcx,[rbp+0x88]
0x140a9cc98: call    0x140070cc0
0x140a9cc9d: nop     
0x140a9cc9e: xor     eax,eax
0x140a9cca0: mov     WORD PTR [rsp+0x30],ax
0x140a9cca5: mov     BYTE PTR [rsp+0x28],al
0x140a9cca9: mov     DWORD PTR [rsp+0x20],r14d
0x140a9ccae: mov     r9d,esi
0x140a9ccb1: movzx   r8d,di
0x140a9ccb5: lea     rdx,[rbp+0x88]
0x140a9ccbc: lea     rcx,[rip+0x1956cad]        # 0x1423f3970
0x140a9ccc3: call    0x1414eab90
0x140a9ccc8: lea     rdx,[rbp+0x88]
0x140a9cccf: mov     rcx,rbx
0x140a9ccd2: call    0x1400bb340
0x140a9ccd7: nop     
0x140a9ccd8: lea     rcx,[rbp+0x88]
0x140a9ccdf: call    0x140070e80
0x140a9cce4: jmp     0x140aa1b0b
0x140a9cce9: test    di,di
0x140a9ccec: je      0x140a9cda6
0x140a9ccf2: cmp     edi,0x7
0x140a9ccf5: je      0x140a9cd6e
0x140a9ccf7: cmp     di,0xffff
0x140a9ccfb: je      0x140a9cd5a
0x140a9ccfd: lea     rcx,[rbp+0xa8]
0x140a9cd04: call    0x140070cc0
0x140a9cd09: nop     
0x140a9cd0a: xor     eax,eax
0x140a9cd0c: mov     WORD PTR [rsp+0x30],ax
0x140a9cd11: mov     BYTE PTR [rsp+0x28],al
0x140a9cd15: mov     eax,DWORD PTR [rbp+0x220]
0x140a9cd1b: mov     DWORD PTR [rsp+0x20],eax
0x140a9cd1f: mov     r9d,esi
0x140a9cd22: movzx   r8d,di
0x140a9cd26: lea     rdx,[rbp+0xa8]
0x140a9cd2d: lea     rcx,[rip+0x1956c3c]        # 0x1423f3970
0x140a9cd34: call    0x1414eab90
0x140a9cd39: lea     rdx,[rbp+0xa8]
0x140a9cd40: mov     rcx,rbx
0x140a9cd43: call    0x1400bb340
0x140a9cd48: nop     
0x140a9cd49: lea     rcx,[rbp+0xa8]
0x140a9cd50: call    0x140070e80
0x140a9cd55: jmp     0x140aa1b0b
0x140a9cd5a: lea     rdx,[rip+0xc535ff]        # 0x1416f0360 ; literal='bars'
0x140a9cd61: mov     rcx,rbx
0x140a9cd64: call    0x140070b90
0x140a9cd69: jmp     0x140aa1b0b
0x140a9cd6e: cmp     esi,r8d
0x140a9cd71: jne     0x140a9cd87
0x140a9cd73: lea     rdx,[rip+0xc53626]        # 0x1416f03a0 ; literal='charcoal'
0x140a9cd7a: mov     rcx,rbx
0x140a9cd7d: call    0x140070b90
0x140a9cd82: jmp     0x140aa1b0b
0x140a9cd87: test    esi,esi
0x140a9cd89: lea     rdx,[rip+0xc535b8]        # 0x1416f0348 ; literal='coke'
0x140a9cd90: je      0x140a9cd99
0x140a9cd92: lea     rdx,[rip+0xc535b7]        # 0x1416f0350 ; literal='refined coal'
0x140a9cd99: mov     rcx,rbx
0x140a9cd9c: call    0x140070b90
0x140a9cda1: jmp     0x140aa1b0b
0x140a9cda6: cmp     esi,0xffffffff
0x140a9cda9: jne     0x140a9cdce
0x140a9cdab: lea     rdx,[rip+0xbbca36]        # 0x1416597e8 ; literal='metal'
0x140a9cdb2: mov     rcx,rbx
0x140a9cdb5: call    0x140070b90
0x140a9cdba: lea     rdx,[rip+0xc535d7]        # 0x1416f0398 ; literal=' bars'
0x140a9cdc1: mov     rcx,rbx
0x140a9cdc4: call    0x140070b90
0x140a9cdc9: jmp     0x140aa1b0b
0x140a9cdce: lea     rcx,[rbp+0xc8]
0x140a9cdd5: call    0x140070cc0
0x140a9cdda: nop     
0x140a9cddb: xor     eax,eax
0x140a9cddd: mov     WORD PTR [rsp+0x30],ax
0x140a9cde2: mov     BYTE PTR [rsp+0x28],al
0x140a9cde6: mov     eax,DWORD PTR [rbp+0x220]
0x140a9cdec: mov     DWORD PTR [rsp+0x20],eax
0x140a9cdf0: mov     r9d,esi
0x140a9cdf3: movzx   r8d,di
0x140a9cdf7: lea     rdx,[rbp+0xc8]
0x140a9cdfe: lea     rcx,[rip+0x1956b6b]        # 0x1423f3970
0x140a9ce05: call    0x1414eab90
0x140a9ce0a: lea     rdx,[rbp+0xc8]
0x140a9ce11: mov     rcx,rbx
0x140a9ce14: call    0x1400bb340
0x140a9ce19: nop     
0x140a9ce1a: lea     rcx,[rbp+0xc8]
0x140a9ce21: call    0x140070e80
0x140a9ce26: test    esi,esi
0x140a9ce28: js      0x140a9cdba
0x140a9ce2a: mov     rax,QWORD PTR [rip+0x1a71f1f]        # 0x14250ed50
0x140a9ce31: mov     rdx,QWORD PTR [rip+0x1a71f10]        # 0x14250ed48
0x140a9ce38: sub     rax,rdx
0x140a9ce3b: sar     rax,0x3
0x140a9ce3f: cmp     rsi,rax
0x140a9ce42: jae     0x140a9cdba
0x140a9ce48: mov     rax,QWORD PTR [rdx+rsi*8]
0x140a9ce4c: cmp     DWORD PTR [rax+0x40],0x3
0x140a9ce50: jle     0x140a9ce60
0x140a9ce52: mov     rax,QWORD PTR [rax+0x38]
0x140a9ce56: test    BYTE PTR [rax+0x3],0x2
0x140a9ce5a: je      0x140a9ce60
0x140a9ce5c: mov     al,0x1
0x140a9ce5e: jmp     0x140a9ce62
0x140a9ce60: xor     al,al
0x140a9ce62: test    al,al
0x140a9ce64: je      0x140a9cdba
0x140a9ce6a: lea     rdx,[rip+0xc5351f]        # 0x1416f0390 ; literal=' wafers'
0x140a9ce71: mov     rcx,rbx
0x140a9ce74: call    0x140070b90
0x140a9ce79: jmp     0x140aa1b0b
0x140a9ce7e: mov     r13d,0xffffffff
0x140a9ce84: mov     r15d,r13d
0x140a9ce87: cmp     r14d,r13d
0x140a9ce8a: je      0x140a9cef1
0x140a9ce8c: mov     r8,QWORD PTR [rip+0x196aa45]        # 0x1424078d8
0x140a9ce93: mov     r11,QWORD PTR [rip+0x196aa36]        # 0x1424078d0
0x140a9ce9a: sub     r8,r11
0x140a9ce9d: sar     r8,0x3
0x140a9cea1: test    r8d,r8d
0x140a9cea4: je      0x140a9cef1
0x140a9cea6: sub     r8d,0x1
0x140a9ceaa: mov     edx,r9d
0x140a9cead: js      0x140a9ceda
0x140a9ceaf: nop     
0x140a9ceb0: lea     ecx,[rdx+r8*1]
0x140a9ceb4: sar     ecx,1
0x140a9ceb6: movsxd  rax,ecx
0x140a9ceb9: mov     r10,QWORD PTR [r11+rax*8]
0x140a9cebd: cmp     DWORD PTR [r10+0x1c],r14d
0x140a9cec1: je      0x140a9cedd
0x140a9cec3: lea     eax,[rcx+0x1]
0x140a9cec6: cmovle  edx,eax
0x140a9cec9: lea     eax,[rcx-0x1]
0x140a9cecc: cmovle  eax,r8d
0x140a9ced0: mov     r8d,eax
0x140a9ced3: cmp     edx,eax
0x140a9ced5: jle     0x140a9ceb0
0x140a9ced7: xor     r9d,r9d
0x140a9ceda: mov     r10,r9
0x140a9cedd: test    r10,r10
0x140a9cee0: je      0x140a9cef1
0x140a9cee2: mov     rax,QWORD PTR [r10]
0x140a9cee5: mov     rcx,r10
0x140a9cee8: call    QWORD PTR [rax+0x748]
0x140a9ceee: mov     r15d,eax
0x140a9cef1: xorps   xmm0,xmm0
0x140a9cef4: movups  XMMWORD PTR [rbp-0x18],xmm0
0x140a9cef8: xor     r14d,r14d
0x140a9cefb: mov     QWORD PTR [rbp-0x8],r14
0x140a9ceff: mov     QWORD PTR [rbp+0x0],0xf
0x140a9cf07: mov     BYTE PTR [rbp-0x18],r14b
0x140a9cf0b: mov     ecx,DWORD PTR [rbp+0x220]
0x140a9cf11: mov     DWORD PTR [rsp+0x30],ecx
0x140a9cf15: mov     DWORD PTR [rsp+0x28],r13d
0x140a9cf1a: mov     DWORD PTR [rsp+0x20],r15d
0x140a9cf1f: mov     r9d,esi
0x140a9cf22: movzx   r8d,di
0x140a9cf26: lea     rdx,[rbp-0x18]
0x140a9cf2a: call    0x1414fb130
0x140a9cf2f: test    al,al
0x140a9cf31: je      0x140a9cf52
0x140a9cf33: lea     rdx,[rbp-0x18]
0x140a9cf37: cmp     QWORD PTR [rbp+0x0],0xf
0x140a9cf3c: cmova   rdx,QWORD PTR [rbp-0x18]
0x140a9cf41: mov     r8,QWORD PTR [rbp-0x8]
0x140a9cf45: mov     rcx,rbx
0x140a9cf48: call    0x140071040
0x140a9cf4d: jmp     0x140a9d015
0x140a9cf52: cmp     di,0xffff
0x140a9cf56: jne     0x140a9cf6c
0x140a9cf58: lea     rdx,[rip+0xb7ff99]        # 0x14161cef8 ; literal='cut gems'
0x140a9cf5f: mov     rcx,rbx
0x140a9cf62: call    0x140070b90
0x140a9cf67: jmp     0x140a9d015
0x140a9cf6c: cmp     edi,0x3
0x140a9cf6f: jne     0x140a9cf85
0x140a9cf71: lea     rdx,[rip+0xc533f0]        # 0x1416f0368 ; literal='cut green glass gems'
0x140a9cf78: mov     rcx,rbx
0x140a9cf7b: call    0x140070b90
0x140a9cf80: jmp     0x140a9d015
0x140a9cf85: cmp     edi,0x4
0x140a9cf88: jne     0x140a9cf9b
0x140a9cf8a: lea     rdx,[rip+0xc53377]        # 0x1416f0308 ; literal='cut clear glass gems'
0x140a9cf91: mov     rcx,rbx
0x140a9cf94: call    0x140070b90
0x140a9cf99: jmp     0x140a9d015
0x140a9cf9b: cmp     edi,0x5
0x140a9cf9e: jne     0x140a9cfb1
0x140a9cfa0: lea     rdx,[rip+0xc53379]        # 0x1416f0320 ; literal='cut crystal glass gems'
0x140a9cfa7: mov     rcx,rbx
0x140a9cfaa: call    0x140070b90
0x140a9cfaf: jmp     0x140a9d015
0x140a9cfb1: cmp     esi,0xffffffff
0x140a9cfb4: jne     0x140a9cfcc
0x140a9cfb6: test    di,di
0x140a9cfb9: jne     0x140a9d015
0x140a9cfbb: lea     rdx,[rip+0xc53376]        # 0x1416f0338 ; literal='gems'
0x140a9cfc2: mov     rcx,rbx
0x140a9cfc5: call    0x140070b90
0x140a9cfca: jmp     0x140a9d015
0x140a9cfcc: lea     rcx,[rbp+0xe8]
0x140a9cfd3: call    0x140070cc0
0x140a9cfd8: nop     
0x140a9cfd9: mov     BYTE PTR [rsp+0x20],0x1
0x140a9cfde: mov     r9d,esi
0x140a9cfe1: movzx   r8d,di
0x140a9cfe5: lea     rdx,[rbp+0xe8]
0x140a9cfec: lea     rcx,[rip+0x195697d]        # 0x1423f3970
0x140a9cff3: call    0x1414eaa00
0x140a9cff8: lea     rdx,[rbp+0xe8]
0x140a9cfff: mov     rcx,rbx
0x140a9d002: call    0x1400bb340
0x140a9d007: nop     
0x140a9d008: lea     rcx,[rbp+0xe8]
0x140a9d00f: call    0x140070e80
0x140a9d014: nop     
0x140a9d015: mov     rdx,QWORD PTR [rbp+0x0]
0x140a9d019: cmp     rdx,0xf
0x140a9d01d: jbe     0x140a9d050
0x140a9d01f: inc     rdx
0x140a9d022: mov     rcx,QWORD PTR [rbp-0x18]
0x140a9d026: mov     rax,rcx
0x140a9d029: cmp     rdx,0x1000
0x140a9d030: jb      0x140a9d04b
0x140a9d032: add     rdx,0x27
0x140a9d036: mov     rcx,QWORD PTR [rcx-0x8]
0x140a9d03a: sub     rax,rcx
0x140a9d03d: add     rax,0xfffffffffffffff8
0x140a9d041: cmp     rax,0x1f
0x140a9d045: ja      0x140aa079e
0x140a9d04b: call    0x1415530d0
0x140a9d050: mov     QWORD PTR [rbp-0x8],r14
0x140a9d054: mov     QWORD PTR [rbp+0x0],0xf
0x140a9d05c: mov     BYTE PTR [rbp-0x18],0x0
0x140a9d060: jmp     0x140aa1b0b
0x140a9d065: mov     eax,DWORD PTR [rbp+0x220]
0x140a9d06b: cmp     di,0xffff
0x140a9d06f: jne     0x140a9d075
0x140a9d071: test    eax,eax
0x140a9d073: je      0x140a9d0c3
0x140a9d075: mov     WORD PTR [rsp+0x30],r9w
0x140a9d07b: mov     BYTE PTR [rsp+0x28],r8b
0x140a9d080: mov     DWORD PTR [rsp+0x20],eax
0x140a9d084: mov     r9d,esi
0x140a9d087: movzx   r8d,di
0x140a9d08b: lea     rdx,[rsp+0x68]
0x140a9d090: lea     rcx,[rip+0x19568d9]        # 0x1423f3970
0x140a9d097: call    0x1414eab90
0x140a9d09c: lea     rdx,[rsp+0x68]
0x140a9d0a1: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9d0a6: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9d0ac: mov     r8,QWORD PTR [rsp+0x78]
0x140a9d0b1: mov     rcx,rbx
0x140a9d0b4: call    0x140071040
0x140a9d0b9: mov     dl,0x20
0x140a9d0bb: mov     rcx,rbx
0x140a9d0be: call    0x1400bb1b0
0x140a9d0c3: mov     r8d,esi
0x140a9d0c6: movzx   edx,di
0x140a9d0c9: lea     rcx,[rip+0x19568a0]        # 0x1423f3970
0x140a9d0d0: call    0x1414c6fe0
0x140a9d0d5: mov     rcx,rbx
0x140a9d0d8: test    rax,rax
0x140a9d0db: je      0x140a9d109
0x140a9d0dd: cmp     QWORD PTR [rax+0x340],0x0
0x140a9d0e5: je      0x140a9d0f8
0x140a9d0e7: lea     rdx,[rax+0x330]
0x140a9d0ee: call    0x1400bb340
0x140a9d0f3: jmp     0x140aa1b0b
0x140a9d0f8: lea     rdx,[rip+0xc53241]        # 0x1416f0340 ; literal='blocks'
0x140a9d0ff: call    0x140070b90
0x140a9d104: jmp     0x140aa1b0b
0x140a9d109: mov     r8d,0x6
0x140a9d10f: lea     rdx,[rip+0xc5322a]        # 0x1416f0340 ; literal='blocks'
0x140a9d116: call    0x140071040
0x140a9d11b: jmp     0x140aa1b0b
0x140a9d120: mov     eax,DWORD PTR [rbp+0x220]
0x140a9d126: cmp     di,0xffff
0x140a9d12a: jne     0x140a9d130
0x140a9d12c: test    eax,eax
0x140a9d12e: je      0x140a9d17e
0x140a9d130: mov     WORD PTR [rsp+0x30],r9w
0x140a9d136: mov     BYTE PTR [rsp+0x28],r8b
0x140a9d13b: mov     DWORD PTR [rsp+0x20],eax
0x140a9d13f: mov     r9d,esi
0x140a9d142: movzx   r8d,di
0x140a9d146: lea     rdx,[rsp+0x68]
0x140a9d14b: lea     rcx,[rip+0x195681e]        # 0x1423f3970
0x140a9d152: call    0x1414eab90
0x140a9d157: lea     rdx,[rsp+0x68]
0x140a9d15c: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9d161: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9d167: mov     r8,QWORD PTR [rsp+0x78]
0x140a9d16c: mov     rcx,rbx
0x140a9d16f: call    0x140071040
0x140a9d174: mov     dl,0x20
0x140a9d176: mov     rcx,rbx
0x140a9d179: call    0x1400bb1b0
0x140a9d17e: mov     r8d,esi
0x140a9d181: movzx   edx,di
0x140a9d184: lea     rcx,[rip+0x19567e5]        # 0x1423f3970
0x140a9d18b: call    0x1414c6fe0
0x140a9d190: test    rax,rax
0x140a9d193: je      0x140a9d1af
0x140a9d195: cmp     DWORD PTR [rax+0x298],0x6
0x140a9d19c: jle     0x140a9d1af
0x140a9d19e: mov     rax,QWORD PTR [rax+0x290]
0x140a9d1a5: test    BYTE PTR [rax+0x6],0x2
0x140a9d1a9: je      0x140a9d1af
0x140a9d1ab: mov     al,0x1
0x140a9d1ad: jmp     0x140a9d1b1
0x140a9d1af: xor     al,al
0x140a9d1b1: movzx   r8d,al
0x140a9d1b5: lea     r8,[r8*2+0x4]
0x140a9d1bd: lea     rcx,[rip+0xc5311c]        # 0x1416f02e0 ; literal='door'
0x140a9d1c4: lea     rdx,[rip+0xc5310d]        # 0x1416f02d8 ; literal='portal'
0x140a9d1cb: test    al,al
0x140a9d1cd: cmove   rdx,rcx
0x140a9d1d1: jmp     0x140aa1af3
0x140a9d1d6: mov     eax,DWORD PTR [rbp+0x220]
0x140a9d1dc: cmp     di,0xffff
0x140a9d1e0: jne     0x140a9d1e6
0x140a9d1e2: test    eax,eax
0x140a9d1e4: je      0x140a9d234
0x140a9d1e6: mov     WORD PTR [rsp+0x30],r9w
0x140a9d1ec: mov     BYTE PTR [rsp+0x28],r8b
0x140a9d1f1: mov     DWORD PTR [rsp+0x20],eax
0x140a9d1f5: mov     r9d,esi
0x140a9d1f8: movzx   r8d,di
0x140a9d1fc: lea     rdx,[rsp+0x68]
0x140a9d201: lea     rcx,[rip+0x1956768]        # 0x1423f3970
0x140a9d208: call    0x1414eab90
0x140a9d20d: lea     rdx,[rsp+0x68]
0x140a9d212: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9d217: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9d21d: mov     r8,QWORD PTR [rsp+0x78]
0x140a9d222: mov     rcx,rbx
0x140a9d225: call    0x140071040
0x140a9d22a: mov     dl,0x20
0x140a9d22c: mov     rcx,rbx
0x140a9d22f: call    0x1400bb1b0
0x140a9d234: mov     r8d,0x9
0x140a9d23a: lea     rdx,[rip+0xc530a7]        # 0x1416f02e8 ; literal='floodgate'
0x140a9d241: jmp     0x140aa1af3
0x140a9d246: mov     eax,DWORD PTR [rbp+0x220]
0x140a9d24c: cmp     di,0xffff
0x140a9d250: jne     0x140a9d256
0x140a9d252: test    eax,eax
0x140a9d254: je      0x140a9d2a4
0x140a9d256: mov     WORD PTR [rsp+0x30],r9w
0x140a9d25c: mov     BYTE PTR [rsp+0x28],r8b
0x140a9d261: mov     DWORD PTR [rsp+0x20],eax
0x140a9d265: mov     r9d,esi
0x140a9d268: movzx   r8d,di
0x140a9d26c: lea     rdx,[rsp+0x68]
0x140a9d271: lea     rcx,[rip+0x19566f8]        # 0x1423f3970
0x140a9d278: call    0x1414eab90
0x140a9d27d: lea     rdx,[rsp+0x68]
0x140a9d282: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9d287: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9d28d: mov     r8,QWORD PTR [rsp+0x78]
0x140a9d292: mov     rcx,rbx
0x140a9d295: call    0x140071040
0x140a9d29a: mov     dl,0x20
0x140a9d29c: mov     rcx,rbx
0x140a9d29f: call    0x1400bb1b0
0x140a9d2a4: mov     r8d,0xb
0x140a9d2aa: lea     rdx,[rip+0xc53047]        # 0x1416f02f8 ; literal='hatch cover'
0x140a9d2b1: jmp     0x140aa1af3
0x140a9d2b6: mov     eax,DWORD PTR [rbp+0x220]
0x140a9d2bc: cmp     di,0xffff
0x140a9d2c0: jne     0x140a9d2c6
0x140a9d2c2: test    eax,eax
0x140a9d2c4: je      0x140a9d314
0x140a9d2c6: mov     WORD PTR [rsp+0x30],r9w
0x140a9d2cc: mov     BYTE PTR [rsp+0x28],r8b
0x140a9d2d1: mov     DWORD PTR [rsp+0x20],eax
0x140a9d2d5: mov     r9d,esi
0x140a9d2d8: movzx   r8d,di
0x140a9d2dc: lea     rdx,[rsp+0x68]
0x140a9d2e1: lea     rcx,[rip+0x1956688]        # 0x1423f3970
0x140a9d2e8: call    0x1414eab90
0x140a9d2ed: lea     rdx,[rsp+0x68]
0x140a9d2f2: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9d2f7: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9d2fd: mov     r8,QWORD PTR [rsp+0x78]
0x140a9d302: mov     rcx,rbx
0x140a9d305: call    0x140071040
0x140a9d30a: mov     dl,0x20
0x140a9d30c: mov     rcx,rbx
0x140a9d30f: call    0x1400bb1b0
0x140a9d314: mov     r8d,0x5
0x140a9d31a: lea     rdx,[rip+0xc52fa3]        # 0x1416f02c4 ; literal='grate'
0x140a9d321: jmp     0x140aa1af3
0x140a9d326: mov     eax,DWORD PTR [rbp+0x220]
0x140a9d32c: cmp     di,0xffff
0x140a9d330: jne     0x140a9d336
0x140a9d332: test    eax,eax
0x140a9d334: je      0x140a9d384
0x140a9d336: mov     WORD PTR [rsp+0x30],r9w
0x140a9d33c: mov     BYTE PTR [rsp+0x28],r8b
0x140a9d341: mov     DWORD PTR [rsp+0x20],eax
0x140a9d345: mov     r9d,esi
0x140a9d348: movzx   r8d,di
0x140a9d34c: lea     rdx,[rsp+0x68]
0x140a9d351: lea     rcx,[rip+0x1956618]        # 0x1423f3970
0x140a9d358: call    0x1414eab90
0x140a9d35d: lea     rdx,[rsp+0x68]
0x140a9d362: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9d367: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9d36d: mov     r8,QWORD PTR [rsp+0x78]
0x140a9d372: mov     rcx,rbx
0x140a9d375: call    0x140071040
0x140a9d37a: mov     dl,0x20
0x140a9d37c: mov     rcx,rbx
0x140a9d37f: call    0x1400bb1b0
0x140a9d384: mov     r8d,0x5
0x140a9d38a: lea     rdx,[rip+0xbae8b3]        # 0x14164bc44 ; literal='table'
0x140a9d391: jmp     0x140aa1af3
0x140a9d396: mov     eax,DWORD PTR [rbp+0x220]
0x140a9d39c: cmp     di,0xffff
0x140a9d3a0: jne     0x140a9d3a6
0x140a9d3a2: test    eax,eax
0x140a9d3a4: je      0x140a9d3f4
0x140a9d3a6: mov     WORD PTR [rsp+0x30],r9w
0x140a9d3ac: mov     BYTE PTR [rsp+0x28],r8b
0x140a9d3b1: mov     DWORD PTR [rsp+0x20],eax
0x140a9d3b5: mov     r9d,esi
0x140a9d3b8: movzx   r8d,di
0x140a9d3bc: lea     rdx,[rsp+0x68]
0x140a9d3c1: lea     rcx,[rip+0x19565a8]        # 0x1423f3970
0x140a9d3c8: call    0x1414eab90
0x140a9d3cd: lea     rdx,[rsp+0x68]
0x140a9d3d2: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9d3d7: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9d3dd: mov     r8,QWORD PTR [rsp+0x78]
0x140a9d3e2: mov     rcx,rbx
0x140a9d3e5: call    0x140071040
0x140a9d3ea: mov     dl,0x20
0x140a9d3ec: mov     rcx,rbx
0x140a9d3ef: call    0x1400bb1b0
0x140a9d3f4: mov     r8d,0x7
0x140a9d3fa: lea     rdx,[rip+0xbba81f]        # 0x141657c20 ; literal='cabinet'
0x140a9d401: jmp     0x140aa1af3
0x140a9d406: mov     eax,DWORD PTR [rbp+0x220]
0x140a9d40c: cmp     di,0xffff
0x140a9d410: jne     0x140a9d416
0x140a9d412: test    eax,eax
0x140a9d414: je      0x140a9d464
0x140a9d416: mov     WORD PTR [rsp+0x30],r9w
0x140a9d41c: mov     BYTE PTR [rsp+0x28],r8b
0x140a9d421: mov     DWORD PTR [rsp+0x20],eax
0x140a9d425: mov     r9d,esi
0x140a9d428: movzx   r8d,di
0x140a9d42c: lea     rdx,[rsp+0x68]
0x140a9d431: lea     rcx,[rip+0x1956538]        # 0x1423f3970
0x140a9d438: call    0x1414eab90
0x140a9d43d: lea     rdx,[rsp+0x68]
0x140a9d442: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9d447: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9d44d: mov     r8,QWORD PTR [rsp+0x78]
0x140a9d452: mov     rcx,rbx
0x140a9d455: call    0x140071040
0x140a9d45a: mov     dl,0x20
0x140a9d45c: mov     rcx,rbx
0x140a9d45f: call    0x1400bb1b0
0x140a9d464: mov     r8d,0xb
0x140a9d46a: lea     rdx,[rip+0xbba79f]        # 0x141657c10 ; literal='weapon rack'
0x140a9d471: jmp     0x140aa1af3
0x140a9d476: mov     eax,DWORD PTR [rbp+0x220]
0x140a9d47c: cmp     di,0xffff
0x140a9d480: jne     0x140a9d486
0x140a9d482: test    eax,eax
0x140a9d484: je      0x140a9d4d4
0x140a9d486: mov     WORD PTR [rsp+0x30],r9w
0x140a9d48c: mov     BYTE PTR [rsp+0x28],r8b
0x140a9d491: mov     DWORD PTR [rsp+0x20],eax
0x140a9d495: mov     r9d,esi
0x140a9d498: movzx   r8d,di
0x140a9d49c: lea     rdx,[rsp+0x68]
0x140a9d4a1: lea     rcx,[rip+0x19564c8]        # 0x1423f3970
0x140a9d4a8: call    0x1414eab90
0x140a9d4ad: lea     rdx,[rsp+0x68]
0x140a9d4b2: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9d4b7: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9d4bd: mov     r8,QWORD PTR [rsp+0x78]
0x140a9d4c2: mov     rcx,rbx
0x140a9d4c5: call    0x140071040
0x140a9d4ca: mov     dl,0x20
0x140a9d4cc: mov     rcx,rbx
0x140a9d4cf: call    0x1400bb1b0
0x140a9d4d4: mov     r8d,0xb
0x140a9d4da: lea     rdx,[rip+0xbba71f]        # 0x141657c00 ; literal='armor stand'
0x140a9d4e1: jmp     0x140aa1af3
0x140a9d4e6: mov     eax,DWORD PTR [rbp+0x220]
0x140a9d4ec: cmp     di,0xffff
0x140a9d4f0: jne     0x140a9d4f6
0x140a9d4f2: test    eax,eax
0x140a9d4f4: je      0x140a9d544
0x140a9d4f6: mov     WORD PTR [rsp+0x30],r9w
0x140a9d4fc: mov     BYTE PTR [rsp+0x28],r8b
0x140a9d501: mov     DWORD PTR [rsp+0x20],eax
0x140a9d505: mov     r9d,esi
0x140a9d508: movzx   r8d,di
0x140a9d50c: lea     rdx,[rsp+0x68]
0x140a9d511: lea     rcx,[rip+0x1956458]        # 0x1423f3970
0x140a9d518: call    0x1414eab90
0x140a9d51d: lea     rdx,[rsp+0x68]
0x140a9d522: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9d527: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9d52d: mov     r8,QWORD PTR [rsp+0x78]
0x140a9d532: mov     rcx,rbx
0x140a9d535: call    0x140071040
0x140a9d53a: mov     dl,0x20
0x140a9d53c: mov     rcx,rbx
0x140a9d53f: call    0x1400bb1b0
0x140a9d544: mov     r8d,0x3
0x140a9d54a: lea     rdx,[rip+0xc52d7b]        # 0x1416f02cc ; literal='bin'
0x140a9d551: jmp     0x140aa1af3
0x140a9d556: mov     eax,DWORD PTR [rbp+0x220]
0x140a9d55c: cmp     di,0xffff
0x140a9d560: jne     0x140a9d566
0x140a9d562: test    eax,eax
0x140a9d564: je      0x140a9d5b4
0x140a9d566: mov     WORD PTR [rsp+0x30],r9w
0x140a9d56c: mov     BYTE PTR [rsp+0x28],r8b
0x140a9d571: mov     DWORD PTR [rsp+0x20],eax
0x140a9d575: mov     r9d,esi
0x140a9d578: movzx   r8d,di
0x140a9d57c: lea     rdx,[rsp+0x68]
0x140a9d581: lea     rcx,[rip+0x19563e8]        # 0x1423f3970
0x140a9d588: call    0x1414eab90
0x140a9d58d: lea     rdx,[rsp+0x68]
0x140a9d592: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9d597: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9d59d: mov     r8,QWORD PTR [rsp+0x78]
0x140a9d5a2: mov     rcx,rbx
0x140a9d5a5: call    0x140071040
0x140a9d5aa: mov     dl,0x20
0x140a9d5ac: mov     rcx,rbx
0x140a9d5af: call    0x1400bb1b0
0x140a9d5b4: mov     r8d,esi
0x140a9d5b7: movzx   edx,di
0x140a9d5ba: lea     rcx,[rip+0x19563af]        # 0x1423f3970
0x140a9d5c1: call    0x1414c6fe0
0x140a9d5c6: test    rax,rax
0x140a9d5c9: je      0x140a9d613
0x140a9d5cb: cmp     DWORD PTR [rax+0x298],0x6
0x140a9d5d2: jle     0x140a9d5e5
0x140a9d5d4: mov     rax,QWORD PTR [rax+0x290]
0x140a9d5db: test    BYTE PTR [rax+0x6],0x2
0x140a9d5df: je      0x140a9d5e5
0x140a9d5e1: mov     al,0x1
0x140a9d5e3: jmp     0x140a9d5e7
0x140a9d5e5: xor     al,al
0x140a9d5e7: test    al,al
0x140a9d5e9: je      0x140a9d613
0x140a9d5eb: mov     r8d,0x3
0x140a9d5f1: lea     rdx,[rip+0xc52cd8]        # 0x1416f02d0 ; literal='box'
0x140a9d5f8: mov     rcx,rbx
0x140a9d5fb: call    0x140071040
0x140a9d600: cmp     r12d,0x1
0x140a9d604: je      0x140aa1b47
0x140a9d60a: lea     rdx,[rip+0xc52cc3]        # 0x1416f02d4 ; literal='e'
0x140a9d611: jmp     0x140a9d66a
0x140a9d613: test    di,di
0x140a9d616: jne     0x140a9d63c
0x140a9d618: xor     r8d,r8d
0x140a9d61b: mov     r9d,esi
0x140a9d61e: mov     edx,0x2f
0x140a9d623: lea     rcx,[rip+0x1956346]        # 0x1423f3970
0x140a9d62a: call    0x141475150
0x140a9d62f: test    al,al
0x140a9d631: jne     0x140a9d642
0x140a9d633: lea     rdx,[rip+0xc52c6a]        # 0x1416f02a4 ; literal='coffer'
0x140a9d63a: jmp     0x140a9d649
0x140a9d63c: cmp     di,0xffff
0x140a9d640: je      0x140a9d65d
0x140a9d642: lea     rdx,[rip+0xbba5df]        # 0x141657c28 ; literal='chest'
0x140a9d649: mov     rcx,rbx
0x140a9d64c: call    0x140070b90
0x140a9d651: cmp     r12d,0x1
0x140a9d655: je      0x140aa1b47
0x140a9d65b: jmp     0x140a9d672
0x140a9d65d: cmp     r12d,0x1
0x140a9d661: je      0x140a9d68c
0x140a9d663: lea     rdx,[rip+0xc52c42]        # 0x1416f02ac ; literal='boxe'
0x140a9d66a: mov     rcx,rbx
0x140a9d66d: call    0x140070b90
0x140a9d672: mov     r8d,0x1
0x140a9d678: lea     rdx,[rip+0xb66e71]        # 0x1416044f0 ; literal='s'
0x140a9d67f: mov     rcx,rbx
0x140a9d682: call    0x140071040
0x140a9d687: jmp     0x140aa1b0b
0x140a9d68c: lea     rdx,[rip+0xc52c3d]        # 0x1416f02d0 ; literal='box'
0x140a9d693: mov     rcx,rbx
0x140a9d696: call    0x140070b90
0x140a9d69b: jmp     0x140aa1b47
0x140a9d6a0: mov     eax,DWORD PTR [rbp+0x220]
0x140a9d6a6: cmp     di,0xffff
0x140a9d6aa: jne     0x140a9d6b0
0x140a9d6ac: test    eax,eax
0x140a9d6ae: je      0x140a9d6fe
0x140a9d6b0: mov     WORD PTR [rsp+0x30],r9w
0x140a9d6b6: mov     BYTE PTR [rsp+0x28],r8b
0x140a9d6bb: mov     DWORD PTR [rsp+0x20],eax
0x140a9d6bf: mov     r9d,esi
0x140a9d6c2: movzx   r8d,di
0x140a9d6c6: lea     rdx,[rsp+0x68]
0x140a9d6cb: lea     rcx,[rip+0x195629e]        # 0x1423f3970
0x140a9d6d2: call    0x1414eab90
0x140a9d6d7: lea     rdx,[rsp+0x68]
0x140a9d6dc: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9d6e1: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9d6e7: mov     r8,QWORD PTR [rsp+0x78]
0x140a9d6ec: mov     rcx,rbx
0x140a9d6ef: call    0x140071040
0x140a9d6f4: mov     dl,0x20
0x140a9d6f6: mov     rcx,rbx
0x140a9d6f9: call    0x1400bb1b0
0x140a9d6fe: mov     r8d,0x3
0x140a9d704: lea     rdx,[rip+0xc52ba9]        # 0x1416f02b4 ; literal='bag'
0x140a9d70b: jmp     0x140aa1af3
0x140a9d710: test    r13,r13
0x140a9d713: je      0x140a9d73b
0x140a9d715: lea     rdx,[rbp-0x78]
0x140a9d719: cmp     QWORD PTR [rbp-0x60],0xf
0x140a9d71e: cmova   rdx,QWORD PTR [rbp-0x78]
0x140a9d723: mov     r8,r13
0x140a9d726: mov     rcx,rbx
0x140a9d729: call    0x140071040
0x140a9d72e: mov     dl,0x20
0x140a9d730: mov     rcx,rbx
0x140a9d733: call    0x1400bb1b0
0x140a9d738: xor     r9d,r9d
0x140a9d73b: mov     eax,DWORD PTR [rbp+0x220]
0x140a9d741: cmp     di,0xffff
0x140a9d745: jne     0x140a9d74b
0x140a9d747: test    eax,eax
0x140a9d749: je      0x140a9d799
0x140a9d74b: mov     WORD PTR [rsp+0x30],r9w
0x140a9d751: mov     BYTE PTR [rsp+0x28],0x1
0x140a9d756: mov     DWORD PTR [rsp+0x20],eax
0x140a9d75a: mov     r9d,esi
0x140a9d75d: movzx   r8d,di
0x140a9d761: lea     rdx,[rsp+0x68]
0x140a9d766: lea     rcx,[rip+0x1956203]        # 0x1423f3970
0x140a9d76d: call    0x1414eab90
0x140a9d772: lea     rdx,[rsp+0x68]
0x140a9d777: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9d77c: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9d782: mov     r8,QWORD PTR [rsp+0x78]
0x140a9d787: mov     rcx,rbx
0x140a9d78a: call    0x140071040
0x140a9d78f: mov     dl,0x20
0x140a9d791: mov     rcx,rbx
0x140a9d794: call    0x1400bb1b0
0x140a9d799: mov     r8d,0x8
0x140a9d79f: lea     rdx,[rip+0xc52b12]        # 0x1416f02b8 ; literal='backpack'
0x140a9d7a6: jmp     0x140aa1af3
0x140a9d7ab: cmp     r14d,0xffffffff
0x140a9d7af: je      0x140a9d883
0x140a9d7b5: mov     r8,QWORD PTR [rip+0x196a11c]        # 0x1424078d8
0x140a9d7bc: mov     r10,QWORD PTR [rip+0x196a10d]        # 0x1424078d0
0x140a9d7c3: sub     r8,r10
0x140a9d7c6: sar     r8,0x3
0x140a9d7ca: test    r8d,r8d
0x140a9d7cd: je      0x140a9d868
0x140a9d7d3: sub     r8d,0x1
0x140a9d7d7: mov     edx,r9d
0x140a9d7da: js      0x140a9d80a
0x140a9d7dc: nop     DWORD PTR [rax+0x0]
0x140a9d7e0: lea     ecx,[rdx+r8*1]
0x140a9d7e4: sar     ecx,1
0x140a9d7e6: movsxd  rax,ecx
0x140a9d7e9: mov     rdi,QWORD PTR [r10+rax*8]
0x140a9d7ed: cmp     DWORD PTR [rdi+0x1c],r14d
0x140a9d7f1: je      0x140a9d80d
0x140a9d7f3: lea     eax,[rcx+0x1]
0x140a9d7f6: cmovle  edx,eax
0x140a9d7f9: lea     eax,[rcx-0x1]
0x140a9d7fc: cmovle  eax,r8d
0x140a9d800: mov     r8d,eax
0x140a9d803: cmp     edx,eax
0x140a9d805: jle     0x140a9d7e0
0x140a9d807: xor     r9d,r9d
0x140a9d80a: mov     rdi,r9
0x140a9d80d: test    rdi,rdi
0x140a9d810: je      0x140a9d868
0x140a9d812: lea     rdx,[rdi+0x108]
0x140a9d819: mov     rcx,rbx
0x140a9d81c: call    0x1400bb340
0x140a9d821: cmp     QWORD PTR [rdi+0x118],0x0
0x140a9d829: je      0x140a9d835
0x140a9d82b: mov     dl,0x20
0x140a9d82d: mov     rcx,rbx
0x140a9d830: call    0x1400bb1b0
0x140a9d835: lea     rdx,[rdi+0xe8]
0x140a9d83c: mov     rcx,rbx
0x140a9d83f: call    0x1400bb340
0x140a9d844: cmp     QWORD PTR [rdi+0xf8],0x0
0x140a9d84c: je      0x140a9d8e6
0x140a9d852: mov     dl,0x20
0x140a9d854: mov     rcx,rbx
0x140a9d857: call    0x1400bb1b0
0x140a9d85c: lea     rdx,[rip+0xc52a29]        # 0x1416f028c ; literal='cast'
0x140a9d863: jmp     0x140aa1aed
0x140a9d868: lea     rdx,[rip+0xc52a11]        # 0x1416f0280 ; literal='limb/body '
0x140a9d86f: mov     rcx,rbx
0x140a9d872: call    0x140070b90
0x140a9d877: lea     rdx,[rip+0xc52a0e]        # 0x1416f028c ; literal='cast'
0x140a9d87e: jmp     0x140aa1aed
0x140a9d883: mov     eax,DWORD PTR [rbp+0x220]
0x140a9d889: cmp     di,0xffff
0x140a9d88d: jne     0x140a9d893
0x140a9d88f: test    eax,eax
0x140a9d891: je      0x140a9d8d1
0x140a9d893: mov     WORD PTR [rsp+0x30],r9w
0x140a9d899: mov     BYTE PTR [rsp+0x28],r8b
0x140a9d89e: mov     DWORD PTR [rsp+0x20],eax
0x140a9d8a2: mov     r9d,esi
0x140a9d8a5: movzx   r8d,di
0x140a9d8a9: lea     rdx,[rsp+0x68]
0x140a9d8ae: lea     rcx,[rip+0x19560bb]        # 0x1423f3970
0x140a9d8b5: call    0x1414eab90
0x140a9d8ba: lea     rdx,[rsp+0x68]
0x140a9d8bf: mov     rcx,rbx
0x140a9d8c2: call    0x1400bb340
0x140a9d8c7: mov     dl,0x20
0x140a9d8c9: mov     rcx,rbx
0x140a9d8cc: call    0x1400bb1b0
0x140a9d8d1: mov     r8d,0xa
0x140a9d8d7: lea     rdx,[rip+0xc529a2]        # 0x1416f0280 ; literal='limb/body '
0x140a9d8de: mov     rcx,rbx
0x140a9d8e1: call    0x140071040
0x140a9d8e6: lea     rdx,[rip+0xc5299f]        # 0x1416f028c ; literal='cast'
0x140a9d8ed: jmp     0x140aa1aed
0x140a9d8f2: mov     eax,DWORD PTR [rbp+0x220]
0x140a9d8f8: cmp     di,0xffff
0x140a9d8fc: jne     0x140a9d902
0x140a9d8fe: test    eax,eax
0x140a9d900: je      0x140a9d950
0x140a9d902: mov     WORD PTR [rsp+0x30],r9w
0x140a9d908: mov     BYTE PTR [rsp+0x28],r8b
0x140a9d90d: mov     DWORD PTR [rsp+0x20],eax
0x140a9d911: mov     r9d,esi
0x140a9d914: movzx   r8d,di
0x140a9d918: lea     rdx,[rsp+0x68]
0x140a9d91d: lea     rcx,[rip+0x195604c]        # 0x1423f3970
0x140a9d924: call    0x1414eab90
0x140a9d929: lea     rdx,[rsp+0x68]
0x140a9d92e: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9d933: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9d939: mov     r8,QWORD PTR [rsp+0x78]
0x140a9d93e: mov     rcx,rbx
0x140a9d941: call    0x140071040
0x140a9d946: mov     dl,0x20
0x140a9d948: mov     rcx,rbx
0x140a9d94b: call    0x1400bb1b0
0x140a9d950: mov     r8d,0x6
0x140a9d956: lea     rdx,[rip+0xc52937]        # 0x1416f0294 ; literal='splint'
0x140a9d95d: jmp     0x140aa1af3
0x140a9d962: mov     eax,DWORD PTR [rbp+0x220]
0x140a9d968: cmp     di,0xffff
0x140a9d96c: jne     0x140a9d972
0x140a9d96e: test    eax,eax
0x140a9d970: je      0x140a9d9c0
0x140a9d972: mov     WORD PTR [rsp+0x30],r9w
0x140a9d978: mov     BYTE PTR [rsp+0x28],r8b
0x140a9d97d: mov     DWORD PTR [rsp+0x20],eax
0x140a9d981: mov     r9d,esi
0x140a9d984: movzx   r8d,di
0x140a9d988: lea     rdx,[rsp+0x68]
0x140a9d98d: lea     rcx,[rip+0x1955fdc]        # 0x1423f3970
0x140a9d994: call    0x1414eab90
0x140a9d999: lea     rdx,[rsp+0x68]
0x140a9d99e: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9d9a3: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9d9a9: mov     r8,QWORD PTR [rsp+0x78]
0x140a9d9ae: mov     rcx,rbx
0x140a9d9b1: call    0x140071040
0x140a9d9b6: mov     dl,0x20
0x140a9d9b8: mov     rcx,rbx
0x140a9d9bb: call    0x1400bb1b0
0x140a9d9c0: lea     rdx,[rip+0xc528d5]        # 0x1416f029c ; literal='crutch'
0x140a9d9c7: jmp     0x140a9c97f
0x140a9d9cc: test    r13,r13
0x140a9d9cf: je      0x140a9d9f7
0x140a9d9d1: lea     rdx,[rbp-0x78]
0x140a9d9d5: cmp     QWORD PTR [rbp-0x60],0xf
0x140a9d9da: cmova   rdx,QWORD PTR [rbp-0x78]
0x140a9d9df: mov     r8,r13
0x140a9d9e2: mov     rcx,rbx
0x140a9d9e5: call    0x140071040
0x140a9d9ea: mov     dl,0x20
0x140a9d9ec: mov     rcx,rbx
0x140a9d9ef: call    0x1400bb1b0
0x140a9d9f4: xor     r9d,r9d
0x140a9d9f7: mov     eax,DWORD PTR [rbp+0x220]
0x140a9d9fd: cmp     di,0xffff
0x140a9da01: jne     0x140a9da07
0x140a9da03: test    eax,eax
0x140a9da05: je      0x140a9da55
0x140a9da07: mov     WORD PTR [rsp+0x30],r9w
0x140a9da0d: mov     BYTE PTR [rsp+0x28],0x1
0x140a9da12: mov     DWORD PTR [rsp+0x20],eax
0x140a9da16: mov     r9d,esi
0x140a9da19: movzx   r8d,di
0x140a9da1d: lea     rdx,[rsp+0x68]
0x140a9da22: lea     rcx,[rip+0x1955f47]        # 0x1423f3970
0x140a9da29: call    0x1414eab90
0x140a9da2e: lea     rdx,[rsp+0x68]
0x140a9da33: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9da38: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9da3e: mov     r8,QWORD PTR [rsp+0x78]
0x140a9da43: mov     rcx,rbx
0x140a9da46: call    0x140071040
0x140a9da4b: mov     dl,0x20
0x140a9da4d: mov     rcx,rbx
0x140a9da50: call    0x1400bb1b0
0x140a9da55: mov     r8d,0x6
0x140a9da5b: lea     rdx,[rip+0xc527f2]        # 0x1416f0254 ; literal='quiver'
0x140a9da62: jmp     0x140aa1af3
0x140a9da67: mov     eax,DWORD PTR [rbp+0x220]
0x140a9da6d: cmp     di,0xffff
0x140a9da71: jne     0x140a9da77
0x140a9da73: test    eax,eax
0x140a9da75: je      0x140a9daee
0x140a9da77: mov     WORD PTR [rsp+0x30],r9w
0x140a9da7d: mov     BYTE PTR [rsp+0x28],r8b
0x140a9da82: mov     DWORD PTR [rsp+0x20],eax
0x140a9da86: mov     r9d,esi
0x140a9da89: movzx   r8d,di
0x140a9da8d: lea     rdx,[rsp+0x68]
0x140a9da92: lea     rcx,[rip+0x1955ed7]        # 0x1423f3970
0x140a9da99: call    0x1414eab90
0x140a9da9e: lea     rdx,[rsp+0x68]
0x140a9daa3: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9daa8: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9daae: mov     r8,QWORD PTR [rsp+0x78]
0x140a9dab3: mov     rcx,rbx
0x140a9dab6: call    0x140071040
0x140a9dabb: mov     dl,0x20
0x140a9dabd: mov     rcx,rbx
0x140a9dac0: call    0x1400bb1b0
0x140a9dac5: mov     ecx,0x1a3
0x140a9daca: movzx   eax,di
0x140a9dacd: sub     ax,cx
0x140a9dad0: mov     ecx,0xc7
0x140a9dad5: cmp     ax,cx
0x140a9dad8: ja      0x140a9daee
0x140a9dada: lea     rdx,[rip+0xc5277b]        # 0x1416f025c ; literal='casket'
0x140a9dae1: mov     rcx,rbx
0x140a9dae4: call    0x140070b90
0x140a9dae9: jmp     0x140aa1afb
0x140a9daee: mov     r8d,esi
0x140a9daf1: movzx   edx,di
0x140a9daf4: lea     rcx,[rip+0x1955e75]        # 0x1423f3970
0x140a9dafb: call    0x1414c6fe0
0x140a9db00: test    rax,rax
0x140a9db03: je      0x140a9db57
0x140a9db05: cmp     DWORD PTR [rax+0x298],0x5
0x140a9db0c: jle     0x140a9db1f
0x140a9db0e: mov     rax,QWORD PTR [rax+0x290]
0x140a9db15: cmp     BYTE PTR [rax+0x5],0x0
0x140a9db19: jge     0x140a9db1f
0x140a9db1b: mov     al,0x1
0x140a9db1d: jmp     0x140a9db21
0x140a9db1f: xor     al,al
0x140a9db21: test    al,al
0x140a9db23: je      0x140a9db57
0x140a9db25: lea     rdx,[rip+0xc5273c]        # 0x1416f0268 ; literal='sarcophag'
0x140a9db2c: mov     rcx,rbx
0x140a9db2f: call    0x140070b90
0x140a9db34: lea     rax,[rip+0xbc03b5]        # 0x14165def0 ; literal='us'
0x140a9db3b: lea     rdx,[rip+0xc4bcca]        # 0x1416e980c ; literal='i'
0x140a9db42: cmp     r12d,0x1
0x140a9db46: cmove   rdx,rax
0x140a9db4a: mov     rcx,rbx
0x140a9db4d: call    0x140070b90
0x140a9db52: jmp     0x140aa1b0b
0x140a9db57: lea     rdx,[rip+0xbae0da]        # 0x14164bc38 ; literal='coffin'
0x140a9db5e: mov     rcx,rbx
0x140a9db61: call    0x140070b90
0x140a9db66: jmp     0x140aa1afb
0x140a9db6b: mov     r14d,DWORD PTR [rbp+0x220]
0x140a9db72: cmp     di,0xffff
0x140a9db76: jne     0x140a9db7d
0x140a9db78: test    r14d,r14d
0x140a9db7b: je      0x140a9dbcc
0x140a9db7d: mov     WORD PTR [rsp+0x30],r9w
0x140a9db83: mov     BYTE PTR [rsp+0x28],r8b
0x140a9db88: mov     DWORD PTR [rsp+0x20],r14d
0x140a9db8d: mov     r9d,esi
0x140a9db90: movzx   r8d,di
0x140a9db94: lea     rdx,[rsp+0x68]
0x140a9db99: lea     rcx,[rip+0x1955dd0]        # 0x1423f3970
0x140a9dba0: call    0x1414eab90
0x140a9dba5: lea     rdx,[rsp+0x68]
0x140a9dbaa: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9dbaf: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9dbb5: mov     r8,QWORD PTR [rsp+0x78]
0x140a9dbba: mov     rcx,rbx
0x140a9dbbd: call    0x140071040
0x140a9dbc2: mov     dl,0x20
0x140a9dbc4: mov     rcx,rbx
0x140a9dbc7: call    0x1400bb1b0
0x140a9dbcc: mov     r8d,esi
0x140a9dbcf: movzx   edx,di
0x140a9dbd2: lea     rcx,[rip+0x1955d97]        # 0x1423f3970
0x140a9dbd9: call    0x1414c6fe0
0x140a9dbde: test    rax,rax
0x140a9dbe1: je      0x140a9dc07
0x140a9dbe3: cmp     DWORD PTR [rax+0x298],0x3
0x140a9dbea: jle     0x140a9dbfd
0x140a9dbec: mov     rax,QWORD PTR [rax+0x290]
0x140a9dbf3: test    BYTE PTR [rax+0x3],0x1
0x140a9dbf7: je      0x140a9dbfd
0x140a9dbf9: mov     al,0x1
0x140a9dbfb: jmp     0x140a9dbff
0x140a9dbfd: xor     al,al
0x140a9dbff: test    al,al
0x140a9dc01: jne     0x140a9dc88
0x140a9dc07: test    r14b,0x4
0x140a9dc0b: jne     0x140a9dc88
0x140a9dc0d: mov     r9d,esi
0x140a9dc10: movzx   r8d,di
0x140a9dc14: mov     edx,0x1d
0x140a9dc19: lea     rcx,[rip+0x1955d50]        # 0x1423f3970
0x140a9dc20: call    0x141475150
0x140a9dc25: test    al,al
0x140a9dc27: jne     0x140a9dc88
0x140a9dc29: test    r14b,0x10
0x140a9dc2d: jne     0x140a9dc88
0x140a9dc2f: mov     r9d,esi
0x140a9dc32: movzx   r8d,di
0x140a9dc36: mov     edx,0x1e
0x140a9dc3b: lea     rcx,[rip+0x1955d2e]        # 0x1423f3970
0x140a9dc42: call    0x141475150
0x140a9dc47: test    al,al
0x140a9dc49: jne     0x140a9dc88
0x140a9dc4b: test    r14b,0x8
0x140a9dc4f: jne     0x140a9dc88
0x140a9dc51: mov     r9d,esi
0x140a9dc54: movzx   r8d,di
0x140a9dc58: mov     edx,0x3e
0x140a9dc5d: lea     rcx,[rip+0x1955d0c]        # 0x1423f3970
0x140a9dc64: call    0x141475150
0x140a9dc69: test    al,al
0x140a9dc6b: jne     0x140a9dc88
0x140a9dc6d: bt      r14d,0xc
0x140a9dc72: jb      0x140a9dc88
0x140a9dc74: lea     rdx,[rip+0xc52cf9]        # 0x1416f0974 ; literal='chain'
0x140a9dc7b: mov     rcx,rbx
0x140a9dc7e: call    0x140070b90
0x140a9dc83: jmp     0x140aa1afb
0x140a9dc88: lea     rdx,[rip+0xc525e5]        # 0x1416f0274 ; literal='rope'
0x140a9dc8f: jmp     0x140aa1aed
0x140a9dc94: mov     r14d,DWORD PTR [rbp+0x220]
0x140a9dc9b: cmp     di,0xffff
0x140a9dc9f: jne     0x140a9dca6
0x140a9dca1: test    r14d,r14d
0x140a9dca4: je      0x140a9dcf5
0x140a9dca6: mov     WORD PTR [rsp+0x30],r9w
0x140a9dcac: mov     BYTE PTR [rsp+0x28],r8b
0x140a9dcb1: mov     DWORD PTR [rsp+0x20],r14d
0x140a9dcb6: mov     r9d,esi
0x140a9dcb9: movzx   r8d,di
0x140a9dcbd: lea     rdx,[rsp+0x68]
0x140a9dcc2: lea     rcx,[rip+0x1955ca7]        # 0x1423f3970
0x140a9dcc9: call    0x1414eab90
0x140a9dcce: lea     rdx,[rsp+0x68]
0x140a9dcd3: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9dcd8: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9dcde: mov     r8,QWORD PTR [rsp+0x78]
0x140a9dce3: mov     rcx,rbx
0x140a9dce6: call    0x140071040
0x140a9dceb: mov     dl,0x20
0x140a9dced: mov     rcx,rbx
0x140a9dcf0: call    0x1400bb1b0
0x140a9dcf5: mov     r8d,esi
0x140a9dcf8: movzx   edx,di
0x140a9dcfb: lea     rcx,[rip+0x1955c6e]        # 0x1423f3970
0x140a9dd02: call    0x1414c6fe0
0x140a9dd07: test    rax,rax
0x140a9dd0a: je      0x140a9dd30
0x140a9dd0c: cmp     DWORD PTR [rax+0x298],0x3
0x140a9dd13: jle     0x140a9dd26
0x140a9dd15: mov     rax,QWORD PTR [rax+0x290]
0x140a9dd1c: test    BYTE PTR [rax+0x3],0x1
0x140a9dd20: je      0x140a9dd26
0x140a9dd22: mov     al,0x1
0x140a9dd24: jmp     0x140a9dd28
0x140a9dd26: xor     al,al
0x140a9dd28: test    al,al
0x140a9dd2a: jne     0x140a9ddea
0x140a9dd30: test    r14b,0x4
0x140a9dd34: jne     0x140a9ddea
0x140a9dd3a: mov     r9d,esi
0x140a9dd3d: movzx   r8d,di
0x140a9dd41: mov     edx,0x1d
0x140a9dd46: lea     rcx,[rip+0x1955c23]        # 0x1423f3970
0x140a9dd4d: call    0x141475150
0x140a9dd52: test    al,al
0x140a9dd54: jne     0x140a9ddea
0x140a9dd5a: test    r14b,0x10
0x140a9dd5e: jne     0x140a9ddea
0x140a9dd64: mov     r9d,esi
0x140a9dd67: movzx   r8d,di
0x140a9dd6b: mov     edx,0x1e
0x140a9dd70: lea     rcx,[rip+0x1955bf9]        # 0x1423f3970
0x140a9dd77: call    0x141475150
0x140a9dd7c: test    al,al
0x140a9dd7e: jne     0x140a9ddea
0x140a9dd80: test    r14b,0x8
0x140a9dd84: jne     0x140a9ddea
0x140a9dd86: mov     r9d,esi
0x140a9dd89: movzx   r8d,di
0x140a9dd8d: mov     edx,0x3e
0x140a9dd92: lea     rcx,[rip+0x1955bd7]        # 0x1423f3970
0x140a9dd99: call    0x141475150
0x140a9dd9e: test    al,al
0x140a9dda0: jne     0x140a9ddea
0x140a9dda2: bt      r14d,0xc
0x140a9dda7: jb      0x140a9ddea
0x140a9dda9: mov     r9d,esi
0x140a9ddac: movzx   r8d,di
0x140a9ddb0: mov     edx,0x31
0x140a9ddb5: lea     rcx,[rip+0x1955bb4]        # 0x1423f3970
0x140a9ddbc: call    0x141475150
0x140a9ddc1: mov     rcx,rbx
0x140a9ddc4: test    al,al
0x140a9ddc6: je      0x140a9ddd9
0x140a9ddc8: lea     rdx,[rip+0xc52bbd]        # 0x1416f098c ; literal='vial'
0x140a9ddcf: call    0x140070b90
0x140a9ddd4: jmp     0x140aa1afb
0x140a9ddd9: lea     rdx,[rip+0xc52bb4]        # 0x1416f0994 ; literal='flask'
0x140a9dde0: call    0x140070b90
0x140a9dde5: jmp     0x140aa1afb
0x140a9ddea: mov     r8d,0x9
0x140a9ddf0: lea     rdx,[rip+0xc52b89]        # 0x1416f0980 ; literal='waterskin'
0x140a9ddf7: jmp     0x140aa1af3
0x140a9ddfc: mov     eax,DWORD PTR [rbp+0x220]
0x140a9de02: cmp     di,0xffff
0x140a9de06: jne     0x140a9de0c
0x140a9de08: test    eax,eax
0x140a9de0a: je      0x140a9de5a
0x140a9de0c: mov     WORD PTR [rsp+0x30],r9w
0x140a9de12: mov     BYTE PTR [rsp+0x28],r8b
0x140a9de17: mov     DWORD PTR [rsp+0x20],eax
0x140a9de1b: mov     r9d,esi
0x140a9de1e: movzx   r8d,di
0x140a9de22: lea     rdx,[rsp+0x68]
0x140a9de27: lea     rcx,[rip+0x1955b42]        # 0x1423f3970
0x140a9de2e: call    0x1414eab90
0x140a9de33: lea     rdx,[rsp+0x68]
0x140a9de38: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9de3d: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9de43: mov     r8,QWORD PTR [rsp+0x78]
0x140a9de48: mov     rcx,rbx
0x140a9de4b: call    0x140071040
0x140a9de50: mov     dl,0x20
0x140a9de52: mov     rcx,rbx
0x140a9de55: call    0x1400bb1b0
0x140a9de5a: mov     rcx,QWORD PTR [rip+0x1a7141f]        # 0x14250f280
0x140a9de61: mov     r8,QWORD PTR [rip+0x1a71410]        # 0x14250f278
0x140a9de68: sub     rcx,r8
0x140a9de6b: sar     rcx,0x3
0x140a9de6f: sub     ecx,0x1
0x140a9de72: movsxd  rdx,ecx
0x140a9de75: js      0x140a9de93
0x140a9de77: nop     WORD PTR [rax+rax*1+0x0]
0x140a9de80: mov     rax,QWORD PTR [r8+rdx*8]
0x140a9de84: cmp     WORD PTR [rax+0x28],r15w
0x140a9de89: je      0x140a9dea5
0x140a9de8b: dec     ecx
0x140a9de8d: sub     rdx,0x1
0x140a9de91: jns     0x140a9de80
0x140a9de93: mov     r8d,0x12
0x140a9de99: lea     rdx,[rip+0xc52aa8]        # 0x1416f0948 ; literal='musical instrument'
0x140a9dea0: jmp     0x140aa1af3
0x140a9dea5: movsxd  rax,ecx
0x140a9dea8: mov     rcx,QWORD PTR [r8+rax*8]
0x140a9deac: test    rcx,rcx
0x140a9deaf: je      0x140a9de93
0x140a9deb1: mov     edx,0x88
0x140a9deb6: mov     eax,0x68
0x140a9debb: cmp     r12d,0x1
0x140a9debf: cmove   edx,eax
0x140a9dec2: add     rdx,rcx
0x140a9dec5: mov     rcx,rbx
0x140a9dec8: call    0x1400bb340
0x140a9decd: jmp     0x140aa1b0b
0x140a9ded2: mov     rcx,QWORD PTR [rip+0x1a7111f]        # 0x14250eff8
0x140a9ded9: mov     r8,QWORD PTR [rip+0x1a71110]        # 0x14250eff0
0x140a9dee0: sub     rcx,r8
0x140a9dee3: sar     rcx,0x3
0x140a9dee7: sub     ecx,0x1
0x140a9deea: movsxd  rdx,ecx
0x140a9deed: js      0x140a9df07
0x140a9deef: nop     
0x140a9def0: mov     rax,QWORD PTR [r8+rdx*8]
0x140a9def4: cmp     WORD PTR [rax+0x28],r15w
0x140a9def9: je      0x140a9e0b3
0x140a9deff: dec     ecx
0x140a9df01: sub     rdx,0x1
0x140a9df05: jns     0x140a9def0
0x140a9df07: mov     r13,r9
0x140a9df0a: mov     r15d,DWORD PTR [rbp+0x220]
0x140a9df11: cmp     di,0xffff
0x140a9df15: jne     0x140a9df20
0x140a9df17: test    r15d,r15d
0x140a9df1a: je      0x140a9dfda
0x140a9df20: test    r13,r13
0x140a9df23: je      0x140a9df8a
0x140a9df25: lea     rdx,[r13+0xc0]
0x140a9df2c: mov     ecx,0xa
0x140a9df31: call    0x1400ec750
0x140a9df36: cmp     eax,0xffffffff
0x140a9df39: je      0x140a9df8a
0x140a9df3b: mov     r9d,esi
0x140a9df3e: movzx   r8d,di
0x140a9df42: mov     edx,0x41
0x140a9df47: lea     rcx,[rip+0x1955a22]        # 0x1423f3970
0x140a9df4e: call    0x141475150
0x140a9df53: test    al,al
0x140a9df55: je      0x140a9df8a
0x140a9df57: mov     edx,r14d
0x140a9df5a: lea     rcx,[rip+0x196996f]        # 0x1424078d0
0x140a9df61: call    0x140073d10
0x140a9df66: test    rax,rax
0x140a9df69: je      0x140a9df8a
0x140a9df6b: mov     rdx,QWORD PTR [rax]
0x140a9df6e: mov     rcx,rax
0x140a9df71: call    QWORD PTR [rdx+0x728]
0x140a9df77: test    al,al
0x140a9df79: jne     0x140a9df8a
0x140a9df7b: lea     rdx,[rip+0xc529de]        # 0x1416f0960 ; literal='unglazed '
0x140a9df82: mov     rcx,rbx
0x140a9df85: call    0x140070b90
0x140a9df8a: xor     eax,eax
0x140a9df8c: mov     WORD PTR [rsp+0x30],ax
0x140a9df91: mov     BYTE PTR [rsp+0x28],0x1
0x140a9df96: mov     DWORD PTR [rsp+0x20],r15d
0x140a9df9b: mov     r9d,esi
0x140a9df9e: movzx   r8d,di
0x140a9dfa2: lea     rdx,[rsp+0x68]
0x140a9dfa7: lea     rcx,[rip+0x19559c2]        # 0x1423f3970
0x140a9dfae: call    0x1414eab90
0x140a9dfb3: lea     rdx,[rsp+0x68]
0x140a9dfb8: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9dfbd: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9dfc3: mov     r8,QWORD PTR [rsp+0x78]
0x140a9dfc8: mov     rcx,rbx
0x140a9dfcb: call    0x140071040
0x140a9dfd0: mov     dl,0x20
0x140a9dfd2: mov     rcx,rbx
0x140a9dfd5: call    0x1400bb1b0
0x140a9dfda: cmp     r14d,0xffffffff
0x140a9dfde: je      0x140a9e08d
0x140a9dfe4: mov     r8,QWORD PTR [rip+0x19698ed]        # 0x1424078d8
0x140a9dfeb: mov     r11,QWORD PTR [rip+0x19698de]        # 0x1424078d0
0x140a9dff2: sub     r8,r11
0x140a9dff5: sar     r8,0x3
0x140a9dff9: test    r8d,r8d
0x140a9dffc: je      0x140a9e08d
0x140a9e002: xor     edi,edi
0x140a9e004: mov     edx,edi
0x140a9e006: sub     r8d,0x1
0x140a9e00a: js      0x140a9e037
0x140a9e00c: nop     DWORD PTR [rax+0x0]
0x140a9e010: lea     ecx,[rdx+r8*1]
0x140a9e014: sar     ecx,1
0x140a9e016: movsxd  rax,ecx
0x140a9e019: mov     r10,QWORD PTR [r11+rax*8]
0x140a9e01d: cmp     DWORD PTR [r10+0x1c],r14d
0x140a9e021: je      0x140a9e03a
0x140a9e023: lea     eax,[rcx+0x1]
0x140a9e026: cmovle  edx,eax
0x140a9e029: lea     eax,[rcx-0x1]
0x140a9e02c: cmovle  eax,r8d
0x140a9e030: mov     r8d,eax
0x140a9e033: cmp     edx,eax
0x140a9e035: jle     0x140a9e010
0x140a9e037: mov     r10,rdi
0x140a9e03a: test    r10,r10
0x140a9e03d: je      0x140a9e08d
0x140a9e03f: mov     rax,QWORD PTR [r10]
0x140a9e042: mov     rcx,r10
0x140a9e045: call    QWORD PTR [rax+0x748]
0x140a9e04b: cmp     eax,0xffffffff
0x140a9e04e: je      0x140a9e08d
0x140a9e050: movsxd  rcx,eax
0x140a9e053: mov     rax,QWORD PTR [rip+0x1a7b4f6]        # 0x142519550
0x140a9e05a: mov     r8,QWORD PTR [rax+rcx*8]
0x140a9e05e: mov     rdx,QWORD PTR [r8+0x90]
0x140a9e065: mov     rax,QWORD PTR [r8+0x98]
0x140a9e06c: sub     rax,rdx
0x140a9e06f: sar     rax,0x3
0x140a9e073: test    rax,rax
0x140a9e076: je      0x140a9e08d
0x140a9e078: mov     rdx,QWORD PTR [rdx]
0x140a9e07b: mov     rcx,rbx
0x140a9e07e: call    0x1400bb340
0x140a9e083: mov     dl,0x20
0x140a9e085: mov     rcx,rbx
0x140a9e088: call    0x1400bb1b0
0x140a9e08d: mov     rcx,rbx
0x140a9e090: test    r13,r13
0x140a9e093: je      0x140a9e0f7
0x140a9e095: mov     edx,0x88
0x140a9e09a: mov     eax,0x68
0x140a9e09f: cmp     r12d,0x1
0x140a9e0a3: cmove   edx,eax
0x140a9e0a6: add     rdx,r13
0x140a9e0a9: call    0x1400bb340
0x140a9e0ae: jmp     0x140aa1b0b
0x140a9e0b3: movsxd  rax,ecx
0x140a9e0b6: mov     r15,QWORD PTR [r8+rax*8]
0x140a9e0ba: mov     r13,r15
0x140a9e0bd: test    r15,r15
0x140a9e0c0: je      0x140a9df0a
0x140a9e0c6: cmp     QWORD PTR [r15+0xe8],0x0
0x140a9e0ce: je      0x140a9df0a
0x140a9e0d4: lea     rdx,[r15+0xd8]
0x140a9e0db: mov     rcx,rbx
0x140a9e0de: call    0x1400bb340
0x140a9e0e3: lea     rdx,[rip+0xb65906]        # 0x1416039f0 ; literal=' '
0x140a9e0ea: mov     rcx,rbx
0x140a9e0ed: call    0x140070b90
0x140a9e0f2: jmp     0x140a9df0a
0x140a9e0f7: mov     r8d,0x4
0x140a9e0fd: lea     rdx,[rip+0xc4ce20]        # 0x1416eaf24 ; literal='tool'
0x140a9e104: jmp     0x140aa1af6
0x140a9e109: mov     eax,DWORD PTR [rbp+0x220]
0x140a9e10f: cmp     di,0xffff
0x140a9e113: jne     0x140a9e119
0x140a9e115: test    eax,eax
0x140a9e117: je      0x140a9e167
0x140a9e119: mov     WORD PTR [rsp+0x30],r9w
0x140a9e11f: mov     BYTE PTR [rsp+0x28],r8b
0x140a9e124: mov     DWORD PTR [rsp+0x20],eax
0x140a9e128: mov     r9d,esi
0x140a9e12b: movzx   r8d,di
0x140a9e12f: lea     rdx,[rsp+0x68]
0x140a9e134: lea     rcx,[rip+0x1955835]        # 0x1423f3970
0x140a9e13b: call    0x1414eab90
0x140a9e140: lea     rdx,[rsp+0x68]
0x140a9e145: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9e14a: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9e150: mov     r8,QWORD PTR [rsp+0x78]
0x140a9e155: mov     rcx,rbx
0x140a9e158: call    0x140071040
0x140a9e15d: mov     dl,0x20
0x140a9e15f: mov     rcx,rbx
0x140a9e162: call    0x1400bb1b0
0x140a9e167: mov     rcx,QWORD PTR [rip+0x1a70e72]        # 0x14250efe0
0x140a9e16e: mov     r8,QWORD PTR [rip+0x1a70e63]        # 0x14250efd8
0x140a9e175: sub     rcx,r8
0x140a9e178: sar     rcx,0x3
0x140a9e17c: sub     ecx,0x1
0x140a9e17f: movsxd  rdx,ecx
0x140a9e182: js      0x140a9e197
0x140a9e184: mov     rax,QWORD PTR [r8+rdx*8]
0x140a9e188: cmp     WORD PTR [rax+0x28],r15w
0x140a9e18d: je      0x140a9e1a9
0x140a9e18f: dec     ecx
0x140a9e191: sub     rdx,0x1
0x140a9e195: jns     0x140a9e184
0x140a9e197: mov     r8d,0x3
0x140a9e19d: lea     rdx,[rip+0xc4ce58]        # 0x1416eaffc ; literal='toy'
0x140a9e1a4: jmp     0x140aa1af3
0x140a9e1a9: movsxd  rax,ecx
0x140a9e1ac: mov     rcx,QWORD PTR [r8+rax*8]
0x140a9e1b0: test    rcx,rcx
0x140a9e1b3: je      0x140a9e197
0x140a9e1b5: mov     edx,0x88
0x140a9e1ba: mov     eax,0x68
0x140a9e1bf: cmp     r12d,0x1
0x140a9e1c3: cmove   edx,eax
0x140a9e1c6: add     rdx,rcx
0x140a9e1c9: mov     rcx,rbx
0x140a9e1cc: call    0x1400bb340
0x140a9e1d1: jmp     0x140aa1b0b
0x140a9e1d6: mov     eax,DWORD PTR [rbp+0x220]
0x140a9e1dc: cmp     di,0xffff
0x140a9e1e0: jne     0x140a9e1ea
0x140a9e1e2: test    eax,eax
0x140a9e1e4: je      0x140a9e295
0x140a9e1ea: mov     WORD PTR [rsp+0x30],r9w
0x140a9e1f0: mov     BYTE PTR [rsp+0x28],r8b
0x140a9e1f5: mov     DWORD PTR [rsp+0x20],eax
0x140a9e1f9: mov     r9d,esi
0x140a9e1fc: movzx   r8d,di
0x140a9e200: lea     rdx,[rsp+0x68]
0x140a9e205: lea     rcx,[rip+0x1955764]        # 0x1423f3970
0x140a9e20c: call    0x1414eab90
0x140a9e211: lea     rdx,[rsp+0x68]
0x140a9e216: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9e21b: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9e221: mov     r8,QWORD PTR [rsp+0x78]
0x140a9e226: mov     rcx,rbx
0x140a9e229: call    0x140071040
0x140a9e22e: mov     dl,0x20
0x140a9e230: mov     rcx,rbx
0x140a9e233: call    0x1400bb1b0
0x140a9e238: mov     ecx,0x1a3
0x140a9e23d: movzx   eax,di
0x140a9e240: sub     ax,cx
0x140a9e243: mov     ecx,0xc7
0x140a9e248: cmp     ax,cx
0x140a9e24b: ja      0x140a9e261
0x140a9e24d: lea     rdx,[rip+0xc52718]        # 0x1416f096c ; literal='cup'
0x140a9e254: mov     rcx,rbx
0x140a9e257: call    0x140070b90
0x140a9e25c: jmp     0x140aa1afb
0x140a9e261: test    di,di
0x140a9e264: jne     0x140a9e295
0x140a9e266: xor     r8d,r8d
0x140a9e269: mov     r9d,esi
0x140a9e26c: mov     edx,0x2f
0x140a9e271: lea     rcx,[rip+0x19556f8]        # 0x1423f3970
0x140a9e278: call    0x141475150
0x140a9e27d: test    al,al
0x140a9e27f: jne     0x140a9e295
0x140a9e281: lea     rdx,[rip+0xc526e8]        # 0x1416f0970 ; literal='mug'
0x140a9e288: mov     rcx,rbx
0x140a9e28b: call    0x140070b90
0x140a9e290: jmp     0x140aa1afb
0x140a9e295: mov     r8d,0x6
0x140a9e29b: lea     rdx,[rip+0xc5267a]        # 0x1416f091c ; literal='goblet'
0x140a9e2a2: jmp     0x140aa1af3
0x140a9e2a7: mov     eax,DWORD PTR [rbp+0x220]
0x140a9e2ad: cmp     di,0xffff
0x140a9e2b1: jne     0x140a9e2b7
0x140a9e2b3: test    eax,eax
0x140a9e2b5: je      0x140a9e305
0x140a9e2b7: mov     WORD PTR [rsp+0x30],r9w
0x140a9e2bd: mov     BYTE PTR [rsp+0x28],r8b
0x140a9e2c2: mov     DWORD PTR [rsp+0x20],eax
0x140a9e2c6: mov     r9d,esi
0x140a9e2c9: movzx   r8d,di
0x140a9e2cd: lea     rdx,[rsp+0x68]
0x140a9e2d2: lea     rcx,[rip+0x1955697]        # 0x1423f3970
0x140a9e2d9: call    0x1414eab90
0x140a9e2de: lea     rdx,[rsp+0x68]
0x140a9e2e3: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9e2e8: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9e2ee: mov     r8,QWORD PTR [rsp+0x78]
0x140a9e2f3: mov     rcx,rbx
0x140a9e2f6: call    0x140071040
0x140a9e2fb: mov     dl,0x20
0x140a9e2fd: mov     rcx,rbx
0x140a9e300: call    0x1400bb1b0
0x140a9e305: mov     r8d,0x6
0x140a9e30b: lea     rdx,[rip+0xc52612]        # 0x1416f0924 ; literal='window'
0x140a9e312: jmp     0x140aa1af3
0x140a9e317: mov     eax,DWORD PTR [rbp+0x220]
0x140a9e31d: cmp     di,0xffff
0x140a9e321: jne     0x140a9e327
0x140a9e323: test    eax,eax
0x140a9e325: je      0x140a9e375
0x140a9e327: mov     WORD PTR [rsp+0x30],r9w
0x140a9e32d: mov     BYTE PTR [rsp+0x28],r8b
0x140a9e332: mov     DWORD PTR [rsp+0x20],eax
0x140a9e336: mov     r9d,esi
0x140a9e339: movzx   r8d,di
0x140a9e33d: lea     rdx,[rsp+0x68]
0x140a9e342: lea     rcx,[rip+0x1955627]        # 0x1423f3970
0x140a9e349: call    0x1414eab90
0x140a9e34e: lea     rdx,[rsp+0x68]
0x140a9e353: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9e358: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9e35e: mov     r8,QWORD PTR [rsp+0x78]
0x140a9e363: mov     rcx,rbx
0x140a9e366: call    0x140071040
0x140a9e36b: mov     dl,0x20
0x140a9e36d: mov     rcx,rbx
0x140a9e370: call    0x1400bb1b0
0x140a9e375: mov     r8d,esi
0x140a9e378: movzx   edx,di
0x140a9e37b: lea     rcx,[rip+0x19555ee]        # 0x1423f3970
0x140a9e382: call    0x1414c6fe0
0x140a9e387: test    rax,rax
0x140a9e38a: je      0x140a9e3a6
0x140a9e38c: cmp     DWORD PTR [rax+0x298],0x6
0x140a9e393: jle     0x140a9e3a6
0x140a9e395: mov     rax,QWORD PTR [rax+0x290]
0x140a9e39c: test    BYTE PTR [rax+0x6],0x2
0x140a9e3a0: je      0x140a9e3a6
0x140a9e3a2: mov     al,0x1
0x140a9e3a4: jmp     0x140a9e3a8
0x140a9e3a6: xor     al,al
0x140a9e3a8: mov     r8d,0x9
0x140a9e3ae: mov     r15d,0x4
0x140a9e3b4: test    al,al
0x140a9e3b6: cmove   r8d,r15d
0x140a9e3ba: lea     rcx,[rip+0xc5257b]        # 0x1416f093c ; literal='cage'
0x140a9e3c1: lea     rdx,[rip+0xc52568]        # 0x1416f0930 ; literal='terrarium'
0x140a9e3c8: cmove   rdx,rcx
0x140a9e3cc: jmp     0x140aa1af3
0x140a9e3d1: mov     eax,DWORD PTR [rbp+0x220]
0x140a9e3d7: cmp     di,0xffff
0x140a9e3db: jne     0x140a9e3e1
0x140a9e3dd: test    eax,eax
0x140a9e3df: je      0x140a9e42f
0x140a9e3e1: mov     WORD PTR [rsp+0x30],r9w
0x140a9e3e7: mov     BYTE PTR [rsp+0x28],r8b
0x140a9e3ec: mov     DWORD PTR [rsp+0x20],eax
0x140a9e3f0: mov     r9d,esi
0x140a9e3f3: movzx   r8d,di
0x140a9e3f7: lea     rdx,[rsp+0x68]
0x140a9e3fc: lea     rcx,[rip+0x195556d]        # 0x1423f3970
0x140a9e403: call    0x1414eab90
0x140a9e408: lea     rdx,[rsp+0x68]
0x140a9e40d: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9e412: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9e418: mov     r8,QWORD PTR [rsp+0x78]
0x140a9e41d: mov     rcx,rbx
0x140a9e420: call    0x140071040
0x140a9e425: mov     dl,0x20
0x140a9e427: mov     rcx,rbx
0x140a9e42a: call    0x1400bb1b0
0x140a9e42f: mov     r8d,0x6
0x140a9e435: lea     rdx,[rip+0xc524b8]        # 0x1416f08f4 ; literal='barrel'
0x140a9e43c: jmp     0x140aa1af3
0x140a9e441: mov     eax,DWORD PTR [rbp+0x220]
0x140a9e447: cmp     di,0xffff
0x140a9e44b: jne     0x140a9e451
0x140a9e44d: test    eax,eax
0x140a9e44f: je      0x140a9e49f
0x140a9e451: mov     WORD PTR [rsp+0x30],r9w
0x140a9e457: mov     BYTE PTR [rsp+0x28],r8b
0x140a9e45c: mov     DWORD PTR [rsp+0x20],eax
0x140a9e460: mov     r9d,esi
0x140a9e463: movzx   r8d,di
0x140a9e467: lea     rdx,[rsp+0x68]
0x140a9e46c: lea     rcx,[rip+0x19554fd]        # 0x1423f3970
0x140a9e473: call    0x1414eab90
0x140a9e478: lea     rdx,[rsp+0x68]
0x140a9e47d: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9e482: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9e488: mov     r8,QWORD PTR [rsp+0x78]
0x140a9e48d: mov     rcx,rbx
0x140a9e490: call    0x140071040
0x140a9e495: mov     dl,0x20
0x140a9e497: mov     rcx,rbx
0x140a9e49a: call    0x1400bb1b0
0x140a9e49f: mov     r8d,0x6
0x140a9e4a5: lea     rdx,[rip+0xc52450]        # 0x1416f08fc ; literal='bucket'
0x140a9e4ac: jmp     0x140aa1af3
0x140a9e4b1: mov     eax,DWORD PTR [rbp+0x220]
0x140a9e4b7: cmp     di,0xffff
0x140a9e4bb: jne     0x140a9e4c1
0x140a9e4bd: test    eax,eax
0x140a9e4bf: je      0x140a9e50f
0x140a9e4c1: mov     WORD PTR [rsp+0x30],r9w
0x140a9e4c7: mov     BYTE PTR [rsp+0x28],r8b
0x140a9e4cc: mov     DWORD PTR [rsp+0x20],eax
0x140a9e4d0: mov     r9d,esi
0x140a9e4d3: movzx   r8d,di
0x140a9e4d7: lea     rdx,[rsp+0x68]
0x140a9e4dc: lea     rcx,[rip+0x195548d]        # 0x1423f3970
0x140a9e4e3: call    0x1414eab90
0x140a9e4e8: lea     rdx,[rsp+0x68]
0x140a9e4ed: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9e4f2: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9e4f8: mov     r8,QWORD PTR [rsp+0x78]
0x140a9e4fd: mov     rcx,rbx
0x140a9e500: call    0x140071040
0x140a9e505: mov     dl,0x20
0x140a9e507: mov     rcx,rbx
0x140a9e50a: call    0x1400bb1b0
0x140a9e50f: mov     r8d,0xb
0x140a9e515: lea     rdx,[rip+0xc523ec]        # 0x1416f0908 ; literal='animal trap'
0x140a9e51c: jmp     0x140aa1af3
0x140a9e521: mov     eax,DWORD PTR [rbp+0x220]
0x140a9e527: cmp     di,0xffff
0x140a9e52b: jne     0x140a9e531
0x140a9e52d: test    eax,eax
0x140a9e52f: je      0x140a9e5a5
0x140a9e531: mov     WORD PTR [rsp+0x30],r9w
0x140a9e537: mov     BYTE PTR [rsp+0x28],r8b
0x140a9e53c: mov     DWORD PTR [rsp+0x20],eax
0x140a9e540: mov     r9d,esi
0x140a9e543: movzx   r8d,di
0x140a9e547: lea     rdx,[rsp+0x68]
0x140a9e54c: lea     rcx,[rip+0x195541d]        # 0x1423f3970
0x140a9e553: call    0x1414eab90
0x140a9e558: lea     rdx,[rsp+0x68]
0x140a9e55d: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9e562: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9e568: mov     r8,QWORD PTR [rsp+0x78]
0x140a9e56d: mov     rcx,rbx
0x140a9e570: call    0x140071040
0x140a9e575: mov     dl,0x20
0x140a9e577: mov     rcx,rbx
0x140a9e57a: call    0x1400bb1b0
0x140a9e57f: mov     ecx,0x1a3
0x140a9e584: sub     di,cx
0x140a9e587: mov     ecx,0xc7
0x140a9e58c: cmp     di,cx
0x140a9e58f: ja      0x140a9e5a5
0x140a9e591: lea     rdx,[rip+0xbad698]        # 0x14164bc30 ; literal='chair'
0x140a9e598: mov     rcx,rbx
0x140a9e59b: call    0x140070b90
0x140a9e5a0: jmp     0x140aa1afb
0x140a9e5a5: mov     r8d,0x6
0x140a9e5ab: lea     rdx,[rip+0xc52362]        # 0x1416f0914 ; literal='throne'
0x140a9e5b2: jmp     0x140aa1af3
0x140a9e5b7: mov     r14d,DWORD PTR [rbp+0x220]
0x140a9e5be: cmp     di,0xffff
0x140a9e5c2: jne     0x140a9e5c9
0x140a9e5c4: test    r14d,r14d
0x140a9e5c7: je      0x140a9e618
0x140a9e5c9: mov     WORD PTR [rsp+0x30],r9w
0x140a9e5cf: mov     BYTE PTR [rsp+0x28],r8b
0x140a9e5d4: mov     DWORD PTR [rsp+0x20],r14d
0x140a9e5d9: mov     r9d,esi
0x140a9e5dc: movzx   r8d,di
0x140a9e5e0: lea     rdx,[rsp+0x68]
0x140a9e5e5: lea     rcx,[rip+0x1955384]        # 0x1423f3970
0x140a9e5ec: call    0x1414eab90
0x140a9e5f1: lea     rdx,[rsp+0x68]
0x140a9e5f6: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9e5fb: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9e601: mov     r8,QWORD PTR [rsp+0x78]
0x140a9e606: mov     rcx,rbx
0x140a9e609: call    0x140071040
0x140a9e60e: mov     dl,0x20
0x140a9e610: mov     rcx,rbx
0x140a9e613: call    0x1400bb1b0
0x140a9e618: mov     r8d,esi
0x140a9e61b: movzx   edx,di
0x140a9e61e: lea     rcx,[rip+0x195534b]        # 0x1423f3970
0x140a9e625: call    0x1414c6fe0
0x140a9e62a: test    rax,rax
0x140a9e62d: je      0x140a9e64f
0x140a9e62f: cmp     DWORD PTR [rax+0x298],0x3
0x140a9e636: jle     0x140a9e649
0x140a9e638: mov     rax,QWORD PTR [rax+0x290]
0x140a9e63f: test    BYTE PTR [rax+0x3],0x40
0x140a9e643: je      0x140a9e649
0x140a9e645: mov     al,0x1
0x140a9e647: jmp     0x140a9e64b
0x140a9e649: xor     al,al
0x140a9e64b: test    al,al
0x140a9e64d: jne     0x140a9e655
0x140a9e64f: test    r14b,0x8
0x140a9e653: je      0x140a9e675
0x140a9e655: test    DWORD PTR [rbp+0x1f0],0x200
0x140a9e65f: je      0x140a9e675
0x140a9e661: lea     rdx,[rip+0xc52268]        # 0x1416f08d0 ; literal='web'
0x140a9e668: mov     rcx,rbx
0x140a9e66b: call    0x140070b90
0x140a9e670: jmp     0x140aa1afb
0x140a9e675: mov     r8d,esi
0x140a9e678: movzx   edx,di
0x140a9e67b: lea     rcx,[rip+0x19552ee]        # 0x1423f3970
0x140a9e682: call    0x1414c6fe0
0x140a9e687: test    rax,rax
0x140a9e68a: je      0x140a9e6c0
0x140a9e68c: cmp     DWORD PTR [rax+0x298],0x5
0x140a9e693: jle     0x140a9e6a6
0x140a9e695: mov     rax,QWORD PTR [rax+0x290]
0x140a9e69c: cmp     BYTE PTR [rax+0x5],0x0
0x140a9e6a0: jge     0x140a9e6a6
0x140a9e6a2: mov     al,0x1
0x140a9e6a4: jmp     0x140a9e6a8
0x140a9e6a6: xor     al,al
0x140a9e6a8: test    al,al
0x140a9e6aa: je      0x140a9e6c0
0x140a9e6ac: lea     rdx,[rip+0xc52225]        # 0x1416f08d8 ; literal='strands'
0x140a9e6b3: mov     rcx,rbx
0x140a9e6b6: call    0x140070b90
0x140a9e6bb: jmp     0x140aa1b0b
0x140a9e6c0: mov     r9d,esi
0x140a9e6c3: movzx   r8d,di
0x140a9e6c7: mov     edx,0x3e
0x140a9e6cc: lea     rcx,[rip+0x195529d]        # 0x1423f3970
0x140a9e6d3: call    0x141475150
0x140a9e6d8: mov     rcx,rbx
0x140a9e6db: test    al,al
0x140a9e6dd: je      0x140a9e6f0
0x140a9e6df: lea     rdx,[rip+0xb92f7e]        # 0x141631664 ; literal='yarn'
0x140a9e6e6: call    0x140070b90
0x140a9e6eb: jmp     0x140aa1b0b
0x140a9e6f0: lea     rdx,[rip+0xb92f55]        # 0x14163164c ; literal='thread'
0x140a9e6f7: call    0x140070b90
0x140a9e6fc: jmp     0x140aa1b0b
0x140a9e701: mov     eax,DWORD PTR [rbp+0x220]
0x140a9e707: cmp     di,0xffff
0x140a9e70b: jne     0x140a9e711
0x140a9e70d: test    eax,eax
0x140a9e70f: je      0x140a9e75f
0x140a9e711: mov     WORD PTR [rsp+0x30],r9w
0x140a9e717: mov     BYTE PTR [rsp+0x28],r8b
0x140a9e71c: mov     DWORD PTR [rsp+0x20],eax
0x140a9e720: mov     r9d,esi
0x140a9e723: movzx   r8d,di
0x140a9e727: lea     rdx,[rsp+0x68]
0x140a9e72c: lea     rcx,[rip+0x195523d]        # 0x1423f3970
0x140a9e733: call    0x1414eab90
0x140a9e738: lea     rdx,[rsp+0x68]
0x140a9e73d: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9e742: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9e748: mov     r8,QWORD PTR [rsp+0x78]
0x140a9e74d: mov     rcx,rbx
0x140a9e750: call    0x140071040
0x140a9e755: mov     dl,0x20
0x140a9e757: mov     rcx,rbx
0x140a9e75a: call    0x1400bb1b0
0x140a9e75f: mov     r8d,0x5
0x140a9e765: lea     rdx,[rip+0xb92ee8]        # 0x141631654 ; literal='cloth'
0x140a9e76c: mov     rcx,rbx
0x140a9e76f: call    0x140071040
0x140a9e774: jmp     0x140aa1b0b
0x140a9e779: mov     r13d,DWORD PTR [rbp+0x220]
0x140a9e780: cmp     di,0xffff
0x140a9e784: jne     0x140a9e78f
0x140a9e786: test    r13d,r13d
0x140a9e789: je      0x140a9e869
0x140a9e78f: mov     r8,QWORD PTR [rip+0x1969142]        # 0x1424078d8
0x140a9e796: mov     r11,QWORD PTR [rip+0x1969133]        # 0x1424078d0
0x140a9e79d: sub     r8,r11
0x140a9e7a0: sar     r8,0x3
0x140a9e7a4: test    r8d,r8d
0x140a9e7a7: je      0x140a9e816
0x140a9e7a9: cmp     r14d,0xffffffff
0x140a9e7ad: je      0x140a9e816
0x140a9e7af: sub     r8d,0x1
0x140a9e7b3: mov     edx,r9d
0x140a9e7b6: js      0x140a9e7ea
0x140a9e7b8: nop     DWORD PTR [rax+rax*1+0x0]
0x140a9e7c0: lea     ecx,[rdx+r8*1]
0x140a9e7c4: sar     ecx,1
0x140a9e7c6: movsxd  rax,ecx
0x140a9e7c9: mov     r10,QWORD PTR [r11+rax*8]
0x140a9e7cd: cmp     DWORD PTR [r10+0x1c],r14d
0x140a9e7d1: je      0x140a9e805
0x140a9e7d3: lea     eax,[rcx+0x1]
0x140a9e7d6: cmovle  edx,eax
0x140a9e7d9: lea     eax,[rcx-0x1]
0x140a9e7dc: cmovle  eax,r8d
0x140a9e7e0: mov     r8d,eax
0x140a9e7e3: cmp     edx,eax
0x140a9e7e5: jle     0x140a9e7c0
0x140a9e7e7: xor     r9d,r9d
0x140a9e7ea: mov     r10,r9
0x140a9e7ed: test    r10,r10
0x140a9e7f0: je      0x140a9e816
0x140a9e7f2: mov     eax,DWORD PTR [r10+0xec]
0x140a9e7f9: test    al,0x1
0x140a9e7fb: je      0x140a9e80a
0x140a9e7fd: mov     r15d,0x4
0x140a9e803: jmp     0x140a9e81a
0x140a9e805: xor     r9d,r9d
0x140a9e808: jmp     0x140a9e7ed
0x140a9e80a: test    al,0x2
0x140a9e80c: je      0x140a9e816
0x140a9e80e: mov     r15d,0x5
0x140a9e814: jmp     0x140a9e81a
0x140a9e816: movzx   r15d,r9w
0x140a9e81a: mov     WORD PTR [rsp+0x30],r15w
0x140a9e820: mov     BYTE PTR [rsp+0x28],0x1
0x140a9e825: mov     DWORD PTR [rsp+0x20],r13d
0x140a9e82a: mov     r9d,esi
0x140a9e82d: movzx   r8d,di
0x140a9e831: lea     rdx,[rsp+0x68]
0x140a9e836: lea     rcx,[rip+0x1955133]        # 0x1423f3970
0x140a9e83d: call    0x1414eab90
0x140a9e842: lea     rdx,[rsp+0x68]
0x140a9e847: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9e84c: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9e852: mov     r8,QWORD PTR [rsp+0x78]
0x140a9e857: mov     rcx,rbx
0x140a9e85a: call    0x140071040
0x140a9e85f: mov     dl,0x20
0x140a9e861: mov     rcx,rbx
0x140a9e864: call    0x1400bb1b0
0x140a9e869: mov     r8d,0x5
0x140a9e86f: lea     rdx,[rip+0xc5206a]        # 0x1416f08e0 ; literal='sheet'
0x140a9e876: mov     rcx,rbx
0x140a9e879: call    0x140071040
0x140a9e87e: jmp     0x140aa1b0b
0x140a9e883: mov     eax,DWORD PTR [rbp+0x220]
0x140a9e889: cmp     esi,0xffffffff
0x140a9e88c: jne     0x140a9e8a6
0x140a9e88e: test    eax,eax
0x140a9e890: jne     0x140a9e8a6
0x140a9e892: lea     rdx,[rip+0xc5204f]        # 0x1416f08e8 ; literal='tanned hide'
0x140a9e899: mov     rcx,rbx
0x140a9e89c: call    0x140070b90
0x140a9e8a1: jmp     0x140aa1afb
0x140a9e8a6: mov     WORD PTR [rsp+0x30],r9w
0x140a9e8ac: mov     BYTE PTR [rsp+0x28],r8b
0x140a9e8b1: mov     DWORD PTR [rsp+0x20],eax
0x140a9e8b5: mov     r9d,esi
0x140a9e8b8: movzx   r8d,di
0x140a9e8bc: lea     rdx,[rsp+0x68]
0x140a9e8c1: lea     rcx,[rip+0x19550a8]        # 0x1423f3970
0x140a9e8c8: call    0x1414eab90
0x140a9e8cd: lea     rdx,[rsp+0x68]
0x140a9e8d2: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9e8d7: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9e8dd: mov     r8,QWORD PTR [rsp+0x78]
0x140a9e8e2: mov     rcx,rbx
0x140a9e8e5: call    0x140071040
0x140a9e8ea: jmp     0x140aa1b0b
0x140a9e8ef: mov     r8d,0x5
0x140a9e8f5: lea     rdx,[rip+0xc51fb4]        # 0x1416f08b0 ; literal='totem'
0x140a9e8fc: jmp     0x140aa1af3
0x140a9e901: mov     r15d,0x7
0x140a9e907: mov     eax,DWORD PTR [rbp+0x220]
0x140a9e90d: cmp     di,0xffff
0x140a9e911: jne     0x140a9e917
0x140a9e913: test    eax,eax
0x140a9e915: je      0x140a9e96d
0x140a9e917: mov     WORD PTR [rsp+0x30],r9w
0x140a9e91d: mov     BYTE PTR [rsp+0x28],r8b
0x140a9e922: mov     DWORD PTR [rsp+0x20],eax
0x140a9e926: mov     r9d,esi
0x140a9e929: movzx   r8d,di
0x140a9e92d: lea     rdx,[rsp+0x68]
0x140a9e932: lea     rcx,[rip+0x1955037]        # 0x1423f3970
0x140a9e939: call    0x1414eab90
0x140a9e93e: lea     rdx,[rsp+0x68]
0x140a9e943: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9e948: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9e94e: mov     r8,QWORD PTR [rsp+0x78]
0x140a9e953: mov     rcx,rbx
0x140a9e956: call    0x140071040
0x140a9e95b: mov     r8,r15
0x140a9e95e: lea     rdx,[rip+0xc51f53]        # 0x1416f08b8 ; literal='-bound '
0x140a9e965: mov     rcx,rbx
0x140a9e968: call    0x140071040
0x140a9e96d: cmp     r12d,0x1
0x140a9e971: mov     eax,0x5
0x140a9e976: cmove   r15,rax
0x140a9e97a: lea     rax,[rip+0xc51f47]        # 0x1416f08c8 ; literal='codex'
0x140a9e981: lea     rdx,[rip+0xc51f38]        # 0x1416f08c0 ; literal='codices'
0x140a9e988: cmove   rdx,rax
0x140a9e98c: mov     r8,r15
0x140a9e98f: mov     rcx,rbx
0x140a9e992: call    0x140071040
0x140a9e997: jmp     0x140aa1b0b
0x140a9e99c: mov     eax,DWORD PTR [rbp+0x220]
0x140a9e9a2: cmp     di,0xffff
0x140a9e9a6: jne     0x140a9e9ac
0x140a9e9a8: test    eax,eax
0x140a9e9aa: je      0x140a9e9fa
0x140a9e9ac: mov     WORD PTR [rsp+0x30],r9w
0x140a9e9b2: mov     BYTE PTR [rsp+0x28],r8b
0x140a9e9b7: mov     DWORD PTR [rsp+0x20],eax
0x140a9e9bb: mov     r9d,esi
0x140a9e9be: movzx   r8d,di
0x140a9e9c2: lea     rdx,[rsp+0x68]
0x140a9e9c7: lea     rcx,[rip+0x1954fa2]        # 0x1423f3970
0x140a9e9ce: call    0x1414eab90
0x140a9e9d3: lea     rdx,[rsp+0x68]
0x140a9e9d8: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9e9dd: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9e9e3: mov     r8,QWORD PTR [rsp+0x78]
0x140a9e9e8: mov     rcx,rbx
0x140a9e9eb: call    0x140071040
0x140a9e9f0: mov     dl,0x20
0x140a9e9f2: mov     rcx,rbx
0x140a9e9f5: call    0x1400bb1b0
0x140a9e9fa: mov     r8d,0x8
0x140a9ea00: lea     rdx,[rip+0xc51e81]        # 0x1416f0888 ; literal='figurine'
0x140a9ea07: jmp     0x140aa1af3
0x140a9ea0c: test    DWORD PTR [rbp+0x1f0],0x100
0x140a9ea16: je      0x140a9ea33
0x140a9ea18: mov     r8d,0x7
0x140a9ea1e: lea     rdx,[rip+0xc51e73]        # 0x1416f0898 ; literal='rotten '
0x140a9ea25: mov     rcx,rbx
0x140a9ea28: call    0x140071040
0x140a9ea2d: mov     r8d,0x1
0x140a9ea33: mov     eax,DWORD PTR [rbp+0x220]
0x140a9ea39: cmp     di,0xffff
0x140a9ea3d: jne     0x140a9ea57
0x140a9ea3f: test    eax,eax
0x140a9ea41: jne     0x140a9ea57
0x140a9ea43: lea     rdx,[rip+0xbd1c76]        # 0x1416706c0 ; literal='drink'
0x140a9ea4a: mov     rcx,rbx
0x140a9ea4d: call    0x140070b90
0x140a9ea52: jmp     0x140aa1afb
0x140a9ea57: mov     WORD PTR [rsp+0x30],r8w
0x140a9ea5d: mov     BYTE PTR [rsp+0x28],0x0
0x140a9ea62: jmp     0x140a9e8b1
0x140a9ea67: movzx   r13d,r9w
0x140a9ea6b: mov     WORD PTR [rsp+0x4c],r9w
0x140a9ea71: mov     r15d,0x7
0x140a9ea77: test    DWORD PTR [rbp+0x1f0],0x100
0x140a9ea81: je      0x140a9ea98
0x140a9ea83: mov     r8d,r15d
0x140a9ea86: lea     rdx,[rip+0xc51e0b]        # 0x1416f0898 ; literal='rotten '
0x140a9ea8d: mov     rcx,rbx
0x140a9ea90: call    0x140071040
0x140a9ea95: xor     r9d,r9d
0x140a9ea98: cmp     r14d,0xffffffff
0x140a9ea9c: je      0x140a9ed6a
0x140a9eaa2: xor     r11b,r11b
0x140a9eaa5: mov     BYTE PTR [rsp+0x40],r11b
0x140a9eaaa: xor     al,al
0x140a9eaac: mov     BYTE PTR [rsp+0x43],al
0x140a9eab0: mov     BYTE PTR [rsp+0x41],al
0x140a9eab4: xor     cl,cl
0x140a9eab6: mov     BYTE PTR [rsp+0x44],cl
0x140a9eaba: mov     BYTE PTR [rsp+0x45],al
0x140a9eabe: mov     BYTE PTR [rsp+0x42],al
0x140a9eac2: mov     BYTE PTR [rsp+0x46],cl
0x140a9eac6: mov     BYTE PTR [rsp+0x47],al
0x140a9eaca: mov     BYTE PTR [rsp+0x48],cl
0x140a9eace: mov     BYTE PTR [rsp+0x49],al
0x140a9ead2: mov     r10,QWORD PTR [rip+0x1968dff]        # 0x1424078d8
0x140a9ead9: mov     r8,QWORD PTR [rip+0x1968df0]        # 0x1424078d0
0x140a9eae0: sub     r10,r8
0x140a9eae3: sar     r10,0x3
0x140a9eae7: test    r10d,r10d
0x140a9eaea: je      0x140a9ed71
0x140a9eaf0: sub     r10d,0x1
0x140a9eaf4: mov     edx,r9d
0x140a9eaf7: js      0x140a9eb33
0x140a9eaf9: nop     DWORD PTR [rax+0x0]
0x140a9eb00: lea     ecx,[rdx+r10*1]
0x140a9eb04: sar     ecx,1
0x140a9eb06: movsxd  rax,ecx
0x140a9eb09: mov     rax,QWORD PTR [r8+rax*8]
0x140a9eb0d: mov     QWORD PTR [rsp+0x60],rax
0x140a9eb12: cmp     DWORD PTR [rax+0x1c],r14d
0x140a9eb16: je      0x140a9ebed
0x140a9eb1c: lea     eax,[rcx+0x1]
0x140a9eb1f: cmovle  edx,eax
0x140a9eb22: lea     eax,[rcx-0x1]
0x140a9eb25: cmovle  eax,r10d
0x140a9eb29: mov     r10d,eax
0x140a9eb2c: cmp     edx,eax
0x140a9eb2e: jle     0x140a9eb00
0x140a9eb30: xor     r9d,r9d
0x140a9eb33: mov     rax,r9
0x140a9eb36: mov     QWORD PTR [rsp+0x60],rax
0x140a9eb3b: test    rax,rax
0x140a9eb3e: je      0x140a9ed71
0x140a9eb44: mov     rax,QWORD PTR [rax+0x98]
0x140a9eb4b: test    rax,rax
0x140a9eb4e: je      0x140a9ed71
0x140a9eb54: mov     rdx,QWORD PTR [rax]
0x140a9eb57: mov     rax,QWORD PTR [rax+0x8]
0x140a9eb5b: sub     rax,rdx
0x140a9eb5e: sar     rax,0x3
0x140a9eb62: test    rax,rax
0x140a9eb65: je      0x140a9ed71
0x140a9eb6b: mov     rsi,r9
0x140a9eb6e: mov     r12,QWORD PTR [rsp+0x60]
0x140a9eb73: mov     edi,r9d
0x140a9eb76: movzx   r14d,WORD PTR [rsp+0x4a]
0x140a9eb7c: lea     r15,[rip+0xffffffffff56147d]        # 0x140000000
0x140a9eb83: nop     DWORD PTR [rax+0x0]
0x140a9eb87: nop     WORD PTR [rax+rax*1+0x0]
0x140a9eb90: mov     r8,QWORD PTR [rsi+rdx*1]
0x140a9eb94: movsx   edx,WORD PTR [r8]
0x140a9eb98: mov     ecx,edx
0x140a9eb9a: sub     ecx,0xd
0x140a9eb9d: je      0x140a9ec15
0x140a9eb9f: sub     ecx,0x2
0x140a9eba2: je      0x140a9edee
0x140a9eba8: sub     ecx,0x1
0x140a9ebab: je      0x140a9edee
0x140a9ebb1: sub     ecx,0x1
0x140a9ebb4: je      0x140a9ee25
0x140a9ebba: cmp     ecx,0x1
0x140a9ebbd: je      0x140a9ee0a
0x140a9ebc3: mov     r8d,DWORD PTR [r8+0x4]
0x140a9ebc7: lea     rcx,[rip+0x1954da2]        # 0x1423f3970
0x140a9ebce: call    0x1414751b0
0x140a9ebd3: movsx   rcx,ax
0x140a9ebd7: cmp     ecx,0x7
0x140a9ebda: ja      0x140a9edfb
0x140a9ebe0: mov     ecx,DWORD PTR [r15+rcx*4+0xaa1cf4]
0x140a9ebe8: add     rcx,r15
0x140a9ebeb: jmp     rcx
0x140a9ebed: xor     r9d,r9d
0x140a9ebf0: jmp     0x140a9eb3b
0x140a9ebf5: mov     BYTE PTR [rsp+0x49],0x1
0x140a9ebfa: movzx   r11d,BYTE PTR [rsp+0x40]
0x140a9ec00: jmp     0x140a9ec1a
0x140a9ec02: mov     BYTE PTR [rsp+0x44],0x1
0x140a9ec07: movzx   r11d,BYTE PTR [rsp+0x40]
0x140a9ec0d: jmp     0x140a9ec1a
0x140a9ec0f: movzx   r11d,BYTE PTR [rsp+0x40]
0x140a9ec15: mov     BYTE PTR [rsp+0x41],0x1
0x140a9ec1a: inc     edi
0x140a9ec1c: add     rsi,0x8
0x140a9ec20: mov     rax,QWORD PTR [r12+0x98]
0x140a9ec28: mov     rdx,QWORD PTR [rax]
0x140a9ec2b: mov     rcx,QWORD PTR [rax+0x8]
0x140a9ec2f: sub     rcx,rdx
0x140a9ec32: sar     rcx,0x3
0x140a9ec36: movsxd  rax,edi
0x140a9ec39: cmp     rax,rcx
0x140a9ec3c: jb      0x140a9eb90
0x140a9ec42: mov     WORD PTR [rsp+0x4c],r13w
0x140a9ec48: test    r11b,r11b
0x140a9ec4b: movzx   edi,WORD PTR [rsp+0x4e]
0x140a9ec50: mov     esi,DWORD PTR [rsp+0x54]
0x140a9ec54: mov     r14d,DWORD PTR [rsp+0x58]
0x140a9ec59: mov     r12d,DWORD PTR [rbp+0x1e8]
0x140a9ec60: mov     r15d,0x7
0x140a9ec66: je      0x140a9ec7a
0x140a9ec68: mov     r8d,r15d
0x140a9ec6b: lea     rdx,[rip+0xc51c2e]        # 0x1416f08a0 ; literal='filthy '
0x140a9ec72: mov     rcx,rbx
0x140a9ec75: call    0x140071040
0x140a9ec7a: cmp     BYTE PTR [rsp+0x43],0x0
0x140a9ec7f: je      0x140a9ec93
0x140a9ec81: mov     r8,r15
0x140a9ec84: lea     rdx,[rip+0xc51c1d]        # 0x1416f08a8 ; literal='sticky '
0x140a9ec8b: mov     rcx,rbx
0x140a9ec8e: call    0x140071040
0x140a9ec93: mov     r13d,0x9
0x140a9ec99: cmp     BYTE PTR [rsp+0x41],0x0
0x140a9ec9e: je      0x140a9ecb2
0x140a9eca0: mov     r8d,r13d
0x140a9eca3: lea     rdx,[rip+0xc51bb6]        # 0x1416f0860 ; literal='vomitous '
0x140a9ecaa: mov     rcx,rbx
0x140a9ecad: call    0x140071040
0x140a9ecb2: cmp     BYTE PTR [rsp+0x44],0x0
0x140a9ecb7: je      0x140a9ecce
0x140a9ecb9: mov     r8d,0x6
0x140a9ecbf: lea     rdx,[rip+0xc51ba6]        # 0x1416f086c ; literal='slimy '
0x140a9ecc6: mov     rcx,rbx
0x140a9ecc9: call    0x140071040
0x140a9ecce: cmp     BYTE PTR [rsp+0x45],0x0
0x140a9ecd3: je      0x140a9ece7
0x140a9ecd5: mov     r8,r13
0x140a9ecd8: lea     rdx,[rip+0xc3be59]        # 0x1416dab38 ; literal='stagnant '
0x140a9ecdf: mov     rcx,rbx
0x140a9ece2: call    0x140071040
0x140a9ece7: cmp     BYTE PTR [rsp+0x42],0x0
0x140a9ecec: je      0x140a9ed03
0x140a9ecee: mov     r8d,0x6
0x140a9ecf4: lea     rdx,[rip+0xc51b79]        # 0x1416f0874 ; literal='dirty '
0x140a9ecfb: mov     rcx,rbx
0x140a9ecfe: call    0x140071040
0x140a9ed03: cmp     BYTE PTR [rsp+0x46],0x0
0x140a9ed08: je      0x140a9ed1f
0x140a9ed0a: mov     r8d,0x6
0x140a9ed10: lea     rdx,[rip+0xc51b65]        # 0x1416f087c ; literal='gooey '
0x140a9ed17: mov     rcx,rbx
0x140a9ed1a: call    0x140071040
0x140a9ed1f: cmp     BYTE PTR [rsp+0x47],0x0
0x140a9ed24: je      0x140a9ed38
0x140a9ed26: mov     r8,r13
0x140a9ed29: lea     rdx,[rip+0xc51b00]        # 0x1416f0830 ; literal='purulent '
0x140a9ed30: mov     rcx,rbx
0x140a9ed33: call    0x140071040
0x140a9ed38: cmp     BYTE PTR [rsp+0x48],0x0
0x140a9ed3d: je      0x140a9ed51
0x140a9ed3f: mov     r8,r13
0x140a9ed42: lea     rdx,[rip+0xc51af7]        # 0x1416f0840 ; literal='ichorous '
0x140a9ed49: mov     rcx,rbx
0x140a9ed4c: call    0x140071040
0x140a9ed51: cmp     BYTE PTR [rsp+0x49],0x0
0x140a9ed56: je      0x140a9ed6a
0x140a9ed58: mov     r8,r15
0x140a9ed5b: lea     rdx,[rip+0xc51aee]        # 0x1416f0850 ; literal='bloody '
0x140a9ed62: mov     rcx,rbx
0x140a9ed65: call    0x140071040
0x140a9ed6a: mov     r8,QWORD PTR [rip+0x1968b5f]        # 0x1424078d0
0x140a9ed71: movzx   eax,WORD PTR [rsp+0x4a]
0x140a9ed76: cmp     ax,0x49
0x140a9ed7a: jne     0x140a9ef15
0x140a9ed80: mov     r15d,DWORD PTR [rbp+0x220]
0x140a9ed87: cmp     di,0xffff
0x140a9ed8b: jne     0x140a9ee2f
0x140a9ed91: test    r15d,r15d
0x140a9ed94: jne     0x140a9ee2f
0x140a9ed9a: lea     rdx,[rip+0xc279af]        # 0x1416c6750 ; literal='liquid'
0x140a9eda1: mov     rcx,rbx
0x140a9eda4: call    0x140070b90
0x140a9eda9: jmp     0x140a9f015
0x140a9edae: mov     BYTE PTR [rsp+0x48],0x1
0x140a9edb3: movzx   r11d,BYTE PTR [rsp+0x40]
0x140a9edb9: jmp     0x140a9ec1a
0x140a9edbe: mov     BYTE PTR [rsp+0x47],0x1
0x140a9edc3: movzx   r11d,BYTE PTR [rsp+0x40]
0x140a9edc9: jmp     0x140a9ec1a
0x140a9edce: mov     BYTE PTR [rsp+0x46],0x1
0x140a9edd3: movzx   r11d,BYTE PTR [rsp+0x40]
0x140a9edd9: jmp     0x140a9ec1a
0x140a9edde: mov     BYTE PTR [rsp+0x42],0x1
0x140a9ede3: movzx   r11d,BYTE PTR [rsp+0x40]
0x140a9ede9: jmp     0x140a9ec1a
0x140a9edee: mov     r11b,0x1
0x140a9edf1: mov     BYTE PTR [rsp+0x40],r11b
0x140a9edf6: jmp     0x140a9ec1a
0x140a9edfb: inc     r13w
0x140a9edff: movzx   r11d,BYTE PTR [rsp+0x40]
0x140a9ee05: jmp     0x140a9ec1a
0x140a9ee0a: cmp     r14w,0x49
0x140a9ee0f: jne     0x140a9ee1b
0x140a9ee11: mov     BYTE PTR [rsp+0x45],0x1
0x140a9ee16: jmp     0x140a9ec1a
0x140a9ee1b: mov     BYTE PTR [rsp+0x42],0x1
0x140a9ee20: jmp     0x140a9ec1a
0x140a9ee25: mov     BYTE PTR [rsp+0x43],0x1
0x140a9ee2a: jmp     0x140a9ec1a
0x140a9ee2f: cmp     r14d,0xffffffff
0x140a9ee33: je      0x140a9eeff
0x140a9ee39: mov     r9,QWORD PTR [rip+0x1968a98]        # 0x1424078d8
0x140a9ee40: sub     r9,r8
0x140a9ee43: sar     r9,0x3
0x140a9ee47: test    r9d,r9d
0x140a9ee4a: je      0x140a9eeff
0x140a9ee50: xor     r13d,r13d
0x140a9ee53: mov     edx,r13d
0x140a9ee56: sub     r9d,0x1
0x140a9ee5a: js      0x140a9ee87
0x140a9ee5c: nop     DWORD PTR [rax+0x0]
0x140a9ee60: lea     ecx,[rdx+r9*1]
0x140a9ee64: sar     ecx,1
0x140a9ee66: movsxd  rax,ecx
0x140a9ee69: mov     r11,QWORD PTR [r8+rax*8]
0x140a9ee6d: cmp     DWORD PTR [r11+0x1c],r14d
0x140a9ee71: je      0x140a9ee8a
0x140a9ee73: lea     eax,[rcx+0x1]
0x140a9ee76: cmovle  edx,eax
0x140a9ee79: lea     eax,[rcx-0x1]
0x140a9ee7c: cmovle  eax,r9d
0x140a9ee80: mov     r9d,eax
0x140a9ee83: cmp     edx,eax
0x140a9ee85: jle     0x140a9ee60
0x140a9ee87: mov     r11,r13
0x140a9ee8a: test    r11,r11
0x140a9ee8d: je      0x140a9eeff
0x140a9ee8f: test    BYTE PTR [r11+0xc8],0x1
0x140a9ee97: je      0x140a9eeff
0x140a9ee99: lea     eax,[rdi-0x13]
0x140a9ee9c: mov     ecx,0xc7
0x140a9eea1: cmp     ax,cx
0x140a9eea4: ja      0x140a9eeff
0x140a9eea6: lea     rcx,[rbp+0x108]
0x140a9eead: call    0x140070cc0
0x140a9eeb2: nop     
0x140a9eeb3: mov     r9d,0xffffffff
0x140a9eeb9: xor     r8d,r8d
0x140a9eebc: lea     rdx,[rbp+0x108]
0x140a9eec3: movzx   ecx,si
0x140a9eec6: call    0x140abd670
0x140a9eecb: lea     rdx,[rbp+0x108]
0x140a9eed2: lea     rcx,[rsp+0x68]
0x140a9eed7: call    0x140070bd0
0x140a9eedc: lea     rdx,[rip+0xc51975]        # 0x1416f0858 ; literal=' paste'
0x140a9eee3: lea     rcx,[rsp+0x68]
0x140a9eee8: call    0x140070b90
0x140a9eeed: nop     
0x140a9eeee: lea     rcx,[rbp+0x108]
0x140a9eef5: call    0x140070e80
0x140a9eefa: jmp     0x140a9eff8
0x140a9eeff: mov     WORD PTR [rsp+0x30],0x1
0x140a9ef06: mov     BYTE PTR [rsp+0x28],0x0
0x140a9ef0b: mov     DWORD PTR [rsp+0x20],r15d
0x140a9ef10: jmp     0x140a9efe0
0x140a9ef15: cmp     ax,0x4b
0x140a9ef19: jne     0x140a9f01c
0x140a9ef1f: mov     r13d,DWORD PTR [rbp+0x220]
0x140a9ef26: cmp     di,0xffff
0x140a9ef2a: jne     0x140a9ef45
0x140a9ef2c: test    r13d,r13d
0x140a9ef2f: jne     0x140a9ef45
0x140a9ef31: lea     rdx,[rip+0xc518c4]        # 0x1416f07fc ; literal='glob'
0x140a9ef38: mov     rcx,rbx
0x140a9ef3b: call    0x140070b90
0x140a9ef40: jmp     0x140a9f015
0x140a9ef45: mov     r9,QWORD PTR [rip+0x196898c]        # 0x1424078d8
0x140a9ef4c: sub     r9,r8
0x140a9ef4f: sar     r9,0x3
0x140a9ef53: test    r9d,r9d
0x140a9ef56: je      0x140a9efca
0x140a9ef58: cmp     r14d,0xffffffff
0x140a9ef5c: je      0x140a9efca
0x140a9ef5e: xor     ecx,ecx
0x140a9ef60: mov     edx,ecx
0x140a9ef62: sub     r9d,0x1
0x140a9ef66: js      0x140a9ef99
0x140a9ef68: nop     DWORD PTR [rax+rax*1+0x0]
0x140a9ef70: lea     ecx,[rdx+r9*1]
0x140a9ef74: sar     ecx,1
0x140a9ef76: movsxd  rax,ecx
0x140a9ef79: mov     r11,QWORD PTR [r8+rax*8]
0x140a9ef7d: cmp     DWORD PTR [r11+0x1c],r14d
0x140a9ef81: je      0x140a9efb4
0x140a9ef83: lea     eax,[rcx+0x1]
0x140a9ef86: cmovle  edx,eax
0x140a9ef89: lea     eax,[rcx-0x1]
0x140a9ef8c: cmovle  eax,r9d
0x140a9ef90: mov     r9d,eax
0x140a9ef93: cmp     edx,eax
0x140a9ef95: jle     0x140a9ef70
0x140a9ef97: xor     ecx,ecx
0x140a9ef99: mov     r11,rcx
0x140a9ef9c: test    r11,r11
0x140a9ef9f: je      0x140a9efca
0x140a9efa1: mov     eax,DWORD PTR [r11+0xc4]
0x140a9efa8: test    al,0x4
0x140a9efaa: je      0x140a9efb8
0x140a9efac: mov     r15d,0x4
0x140a9efb2: jmp     0x140a9efd0
0x140a9efb4: xor     ecx,ecx
0x140a9efb6: jmp     0x140a9ef9c
0x140a9efb8: test    al,0x2
0x140a9efba: je      0x140a9efc4
0x140a9efbc: mov     r15d,0x5
0x140a9efc2: jmp     0x140a9efd0
0x140a9efc4: movzx   r15d,cx
0x140a9efc8: jmp     0x140a9efd0
0x140a9efca: xor     eax,eax
0x140a9efcc: movzx   r15d,ax
0x140a9efd0: mov     WORD PTR [rsp+0x30],r15w
0x140a9efd6: mov     BYTE PTR [rsp+0x28],0x0
0x140a9efdb: mov     DWORD PTR [rsp+0x20],r13d
0x140a9efe0: mov     r9d,esi
0x140a9efe3: movzx   r8d,di
0x140a9efe7: lea     rdx,[rsp+0x68]
0x140a9efec: lea     rcx,[rip+0x195497d]        # 0x1423f3970
0x140a9eff3: call    0x1414eab90
0x140a9eff8: lea     rdx,[rsp+0x68]
0x140a9effd: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9f002: mov     r8,QWORD PTR [rsp+0x78]
0x140a9f007: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9f00d: mov     rcx,rbx
0x140a9f010: call    0x140071040
0x140a9f015: mov     r8,QWORD PTR [rip+0x19688b4]        # 0x1424078d0
0x140a9f01c: movzx   r13d,WORD PTR [rsp+0x4c]
0x140a9f022: test    r13w,r13w
0x140a9f026: jle     0x140aa1b0b
0x140a9f02c: mov     r9,QWORD PTR [rip+0x19688a5]        # 0x1424078d8
0x140a9f033: sub     r9,r8
0x140a9f036: sar     r9,0x3
0x140a9f03a: test    r9d,r9d
0x140a9f03d: je      0x140aa1b0b
0x140a9f043: cmp     r14d,0xffffffff
0x140a9f047: je      0x140aa1b0b
0x140a9f04d: xor     r11d,r11d
0x140a9f050: mov     edx,r11d
0x140a9f053: sub     r9d,0x1
0x140a9f057: js      0x140a9f087
0x140a9f059: nop     DWORD PTR [rax+0x0]
0x140a9f060: lea     ecx,[rdx+r9*1]
0x140a9f064: sar     ecx,1
0x140a9f066: movsxd  rax,ecx
0x140a9f069: mov     rdi,QWORD PTR [r8+rax*8]
0x140a9f06d: cmp     DWORD PTR [rdi+0x1c],r14d
0x140a9f071: je      0x140a9f08a
0x140a9f073: lea     eax,[rcx+0x1]
0x140a9f076: cmovle  edx,eax
0x140a9f079: lea     eax,[rcx-0x1]
0x140a9f07c: cmovle  eax,r9d
0x140a9f080: mov     r9d,eax
0x140a9f083: cmp     edx,eax
0x140a9f085: jle     0x140a9f060
0x140a9f087: mov     rdi,r11
0x140a9f08a: test    rdi,rdi
0x140a9f08d: je      0x140aa1b0b
0x140a9f093: mov     rax,QWORD PTR [rdi+0x98]
0x140a9f09a: test    rax,rax
0x140a9f09d: je      0x140aa1b0b
0x140a9f0a3: xor     r15b,r15b
0x140a9f0a6: mov     r14d,r11d
0x140a9f0a9: mov     rdx,QWORD PTR [rax]
0x140a9f0ac: mov     rax,QWORD PTR [rax+0x8]
0x140a9f0b0: sub     rax,rdx
0x140a9f0b3: sar     rax,0x3
0x140a9f0b7: test    rax,rax
0x140a9f0ba: je      0x140aa1b0b
0x140a9f0c0: mov     rsi,r11
0x140a9f0c3: lea     r12,[rip+0xffffffffff560f36]        # 0x140000000
0x140a9f0ca: nop     WORD PTR [rax+rax*1+0x0]
0x140a9f0d0: mov     r8,QWORD PTR [rsi+rdx*1]
0x140a9f0d4: movsx   edx,WORD PTR [r8]
0x140a9f0d8: mov     ecx,edx
0x140a9f0da: sub     ecx,0xd
0x140a9f0dd: je      0x140a9f1d5
0x140a9f0e3: sub     ecx,0x2
0x140a9f0e6: je      0x140a9f1d5
0x140a9f0ec: sub     ecx,0x1
0x140a9f0ef: je      0x140a9f1d5
0x140a9f0f5: sub     ecx,0x1
0x140a9f0f8: je      0x140a9f1d5
0x140a9f0fe: cmp     ecx,0x1
0x140a9f101: je      0x140a9f1d5
0x140a9f107: mov     r8d,DWORD PTR [r8+0x4]
0x140a9f10b: lea     rcx,[rip+0x195485e]        # 0x1423f3970
0x140a9f112: call    0x1414751b0
0x140a9f117: movsx   rcx,ax
0x140a9f11b: cmp     ecx,0x7
0x140a9f11e: ja      0x140a9f12d
0x140a9f120: mov     ecx,DWORD PTR [r12+rcx*4+0xaa1d14]
0x140a9f128: add     rcx,r12
0x140a9f12b: jmp     rcx
0x140a9f12d: test    r15b,r15b
0x140a9f130: jne     0x140a9f144
0x140a9f132: lea     rdx,[rip+0xc516cf]        # 0x1416f0808 ; literal=' laced with '
0x140a9f139: mov     rcx,rbx
0x140a9f13c: call    0x140070b90
0x140a9f141: mov     r15b,0x1
0x140a9f144: lea     rcx,[rbp+0x128]
0x140a9f14b: call    0x140070cc0
0x140a9f150: nop     
0x140a9f151: mov     rax,QWORD PTR [rdi+0x98]
0x140a9f158: mov     rcx,QWORD PTR [rax]
0x140a9f15b: mov     rax,QWORD PTR [rsi+rcx*1]
0x140a9f15f: movzx   ecx,WORD PTR [rax+0x8]
0x140a9f163: mov     WORD PTR [rsp+0x30],cx
0x140a9f168: mov     BYTE PTR [rsp+0x28],0x0
0x140a9f16d: mov     DWORD PTR [rsp+0x20],0x0
0x140a9f175: mov     r9d,DWORD PTR [rax+0x4]
0x140a9f179: movzx   r8d,WORD PTR [rax]
0x140a9f17d: lea     rdx,[rbp+0x128]
0x140a9f184: lea     rcx,[rip+0x19547e5]        # 0x1423f3970
0x140a9f18b: call    0x1414eab90
0x140a9f190: lea     rdx,[rbp+0x128]
0x140a9f197: mov     rcx,rbx
0x140a9f19a: call    0x1400bb340
0x140a9f19f: cmp     r13w,0x3
0x140a9f1a4: jl      0x140a9f1af
0x140a9f1a6: lea     rdx,[rip+0xb651e7]        # 0x141604394 ; literal=', '
0x140a9f1ad: jmp     0x140a9f1bd
0x140a9f1af: cmp     r13w,0x2
0x140a9f1b4: jne     0x140a9f1c5
0x140a9f1b6: lea     rdx,[rip+0xb651cf]        # 0x14160438c ; literal=' and '
0x140a9f1bd: mov     rcx,rbx
0x140a9f1c0: call    0x140070b90
0x140a9f1c5: dec     r13w
0x140a9f1c9: lea     rcx,[rbp+0x128]
0x140a9f1d0: call    0x140070e80
0x140a9f1d5: inc     r14d
0x140a9f1d8: add     rsi,0x8
0x140a9f1dc: mov     rax,QWORD PTR [rdi+0x98]
0x140a9f1e3: mov     rdx,QWORD PTR [rax]
0x140a9f1e6: mov     rcx,QWORD PTR [rax+0x8]
0x140a9f1ea: sub     rcx,rdx
0x140a9f1ed: sar     rcx,0x3
0x140a9f1f1: movsxd  rax,r14d
0x140a9f1f4: cmp     rax,rcx
0x140a9f1f7: jb      0x140a9f0d0
0x140a9f1fd: mov     r12d,DWORD PTR [rbp+0x1e8]
0x140a9f204: jmp     0x140aa1b0b
0x140a9f209: test    DWORD PTR [rbp+0x1f0],0x100
0x140a9f213: je      0x140a9f22d
0x140a9f215: mov     r8d,0x7
0x140a9f21b: lea     rdx,[rip+0xc51676]        # 0x1416f0898 ; literal='rotten '
0x140a9f222: mov     rcx,rbx
0x140a9f225: call    0x140071040
0x140a9f22a: xor     r9d,r9d
0x140a9f22d: cmp     r14d,0xffffffff
0x140a9f231: je      0x140a9f2cc
0x140a9f237: mov     r8,QWORD PTR [rip+0x196869a]        # 0x1424078d8
0x140a9f23e: mov     r11,QWORD PTR [rip+0x196868b]        # 0x1424078d0
0x140a9f245: sub     r8,r11
0x140a9f248: sar     r8,0x3
0x140a9f24c: test    r8d,r8d
0x140a9f24f: je      0x140a9f2cc
0x140a9f251: sub     r8d,0x1
0x140a9f255: mov     edx,r9d
0x140a9f258: js      0x140a9f28a
0x140a9f25a: nop     WORD PTR [rax+rax*1+0x0]
0x140a9f260: lea     ecx,[rdx+r8*1]
0x140a9f264: sar     ecx,1
0x140a9f266: movsxd  rax,ecx
0x140a9f269: mov     r10,QWORD PTR [r11+rax*8]
0x140a9f26d: cmp     DWORD PTR [r10+0x1c],r14d
0x140a9f271: je      0x140a9f28d
0x140a9f273: lea     eax,[rcx+0x1]
0x140a9f276: cmovle  edx,eax
0x140a9f279: lea     eax,[rcx-0x1]
0x140a9f27c: cmovle  eax,r8d
0x140a9f280: mov     r8d,eax
0x140a9f283: cmp     edx,eax
0x140a9f285: jle     0x140a9f260
0x140a9f287: xor     r9d,r9d
0x140a9f28a: mov     r10,r9
0x140a9f28d: test    r10,r10
0x140a9f290: je      0x140a9f2cc
0x140a9f292: movsxd  rax,DWORD PTR [r10+0xc8]
0x140a9f299: cmp     eax,0xffffffff
0x140a9f29c: je      0x140a9f2cc
0x140a9f29e: mov     rcx,rax
0x140a9f2a1: mov     rax,QWORD PTR [rip+0x1a7a290]        # 0x142519538
0x140a9f2a8: mov     rdx,QWORD PTR [rax+rcx*8]
0x140a9f2ac: add     rdx,0x50
0x140a9f2b0: mov     rcx,rbx
0x140a9f2b3: call    0x1400bb340
0x140a9f2b8: lea     rdx,[rip+0xc51559]        # 0x1416f0818 ; literal=' dye mix'
0x140a9f2bf: mov     rcx,rbx
0x140a9f2c2: call    0x140070b90
0x140a9f2c7: jmp     0x140aa1b0b
0x140a9f2cc: mov     eax,DWORD PTR [rbp+0x220]
0x140a9f2d2: cmp     di,0xffff
0x140a9f2d6: jne     0x140a9f2f0
0x140a9f2d8: test    eax,eax
0x140a9f2da: jne     0x140a9f2f0
0x140a9f2dc: lea     rdx,[rip+0xc51541]        # 0x1416f0824 ; literal='powder'
0x140a9f2e3: mov     rcx,rbx
0x140a9f2e6: call    0x140070b90
0x140a9f2eb: jmp     0x140aa1b0b
0x140a9f2f0: mov     WORD PTR [rsp+0x30],0x3
0x140a9f2f7: mov     BYTE PTR [rsp+0x28],0x0
0x140a9f2fc: mov     DWORD PTR [rsp+0x20],eax
0x140a9f300: mov     r9d,esi
0x140a9f303: movzx   r8d,di
0x140a9f307: lea     rdx,[rsp+0x68]
0x140a9f30c: lea     rcx,[rip+0x195465d]        # 0x1423f3970
0x140a9f313: call    0x1414eab90
0x140a9f318: lea     rdx,[rsp+0x68]
0x140a9f31d: mov     rcx,rbx
0x140a9f320: call    0x1400bb340
0x140a9f325: jmp     0x140aa1b0b
0x140a9f32a: test    DWORD PTR [rbp+0x1f0],0x100
0x140a9f334: je      0x140a9f348
0x140a9f336: lea     rdx,[rip+0xc5155b]        # 0x1416f0898 ; literal='rotten '
0x140a9f33d: mov     rcx,rbx
0x140a9f340: call    0x140070b90
0x140a9f345: xor     r9d,r9d
0x140a9f348: mov     eax,DWORD PTR [rbp+0x220]
0x140a9f34e: cmp     di,0xffff
0x140a9f352: jne     0x140a9f36c
0x140a9f354: test    eax,eax
0x140a9f356: jne     0x140a9f36c
0x140a9f358: lea     rdx,[rip+0xc51461]        # 0x1416f07c0 ; literal='cheese'
0x140a9f35f: mov     rcx,rbx
0x140a9f362: call    0x140070b90
0x140a9f367: jmp     0x140aa1b0b
0x140a9f36c: mov     WORD PTR [rsp+0x30],r9w
0x140a9f372: mov     BYTE PTR [rsp+0x28],0x0
0x140a9f377: jmp     0x140a9e8b1
0x140a9f37c: mov     eax,DWORD PTR [rbp+0x220]
0x140a9f382: cmp     di,0xffff
0x140a9f386: jne     0x140a9f38c
0x140a9f388: test    eax,eax
0x140a9f38a: je      0x140a9f3da
0x140a9f38c: mov     WORD PTR [rsp+0x30],r9w
0x140a9f392: mov     BYTE PTR [rsp+0x28],r8b
0x140a9f397: mov     DWORD PTR [rsp+0x20],eax
0x140a9f39b: mov     r9d,esi
0x140a9f39e: movzx   r8d,di
0x140a9f3a2: lea     rdx,[rsp+0x68]
0x140a9f3a7: lea     rcx,[rip+0x19545c2]        # 0x1423f3970
0x140a9f3ae: call    0x1414eab90
0x140a9f3b3: lea     rdx,[rsp+0x68]
0x140a9f3b8: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9f3bd: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9f3c3: mov     r8,QWORD PTR [rsp+0x78]
0x140a9f3c8: mov     rcx,rbx
0x140a9f3cb: call    0x140071040
0x140a9f3d0: mov     dl,0x20
0x140a9f3d2: mov     rcx,rbx
0x140a9f3d5: call    0x1400bb1b0
0x140a9f3da: mov     r8d,0xe
0x140a9f3e0: lea     rdx,[rip+0xc513e1]        # 0x1416f07c8 ; literal='catapult parts'
0x140a9f3e7: mov     rcx,rbx
0x140a9f3ea: call    0x140071040
0x140a9f3ef: jmp     0x140aa1b0b
0x140a9f3f4: mov     eax,DWORD PTR [rbp+0x220]
0x140a9f3fa: cmp     di,0xffff
0x140a9f3fe: jne     0x140a9f404
0x140a9f400: test    eax,eax
0x140a9f402: je      0x140a9f452
0x140a9f404: mov     WORD PTR [rsp+0x30],r9w
0x140a9f40a: mov     BYTE PTR [rsp+0x28],r8b
0x140a9f40f: mov     DWORD PTR [rsp+0x20],eax
0x140a9f413: mov     r9d,esi
0x140a9f416: movzx   r8d,di
0x140a9f41a: lea     rdx,[rsp+0x68]
0x140a9f41f: lea     rcx,[rip+0x195454a]        # 0x1423f3970
0x140a9f426: call    0x1414eab90
0x140a9f42b: lea     rdx,[rsp+0x68]
0x140a9f430: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9f435: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9f43b: mov     r8,QWORD PTR [rsp+0x78]
0x140a9f440: mov     rcx,rbx
0x140a9f443: call    0x140071040
0x140a9f448: mov     dl,0x20
0x140a9f44a: mov     rcx,rbx
0x140a9f44d: call    0x1400bb1b0
0x140a9f452: mov     r8d,0x12
0x140a9f458: lea     rdx,[rip+0xc51379]        # 0x1416f07d8 ; literal='bolt thrower parts'
0x140a9f45f: mov     rcx,rbx
0x140a9f462: call    0x140071040
0x140a9f467: jmp     0x140aa1b0b
0x140a9f46c: mov     eax,DWORD PTR [rbp+0x220]
0x140a9f472: cmp     di,0xffff
0x140a9f476: jne     0x140a9f47c
0x140a9f478: test    eax,eax
0x140a9f47a: je      0x140a9f4ca
0x140a9f47c: mov     WORD PTR [rsp+0x30],r9w
0x140a9f482: mov     BYTE PTR [rsp+0x28],r8b
0x140a9f487: mov     DWORD PTR [rsp+0x20],eax
0x140a9f48b: mov     r9d,esi
0x140a9f48e: movzx   r8d,di
0x140a9f492: lea     rdx,[rsp+0x68]
0x140a9f497: lea     rcx,[rip+0x19544d2]        # 0x1423f3970
0x140a9f49e: call    0x1414eab90
0x140a9f4a3: lea     rdx,[rsp+0x68]
0x140a9f4a8: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9f4ad: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9f4b3: mov     r8,QWORD PTR [rsp+0x78]
0x140a9f4b8: mov     rcx,rbx
0x140a9f4bb: call    0x140071040
0x140a9f4c0: mov     dl,0x20
0x140a9f4c2: mov     rcx,rbx
0x140a9f4c5: call    0x1400bb1b0
0x140a9f4ca: mov     r8d,0xa
0x140a9f4d0: lea     rdx,[rip+0xc51319]        # 0x1416f07f0 ; literal='mechanisms'
0x140a9f4d7: mov     rcx,rbx
0x140a9f4da: call    0x140071040
0x140a9f4df: jmp     0x140aa1b0b
0x140a9f4e4: mov     eax,DWORD PTR [rbp+0x220]
0x140a9f4ea: cmp     di,0xffff
0x140a9f4ee: jne     0x140a9f4f4
0x140a9f4f0: test    eax,eax
0x140a9f4f2: je      0x140a9f542
0x140a9f4f4: mov     WORD PTR [rsp+0x30],r9w
0x140a9f4fa: mov     BYTE PTR [rsp+0x28],r8b
0x140a9f4ff: mov     DWORD PTR [rsp+0x20],eax
0x140a9f503: mov     r9d,esi
0x140a9f506: movzx   r8d,di
0x140a9f50a: lea     rdx,[rsp+0x68]
0x140a9f50f: lea     rcx,[rip+0x195445a]        # 0x1423f3970
0x140a9f516: call    0x1414eab90
0x140a9f51b: lea     rdx,[rsp+0x68]
0x140a9f520: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9f525: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9f52b: mov     r8,QWORD PTR [rsp+0x78]
0x140a9f530: mov     rcx,rbx
0x140a9f533: call    0x140071040
0x140a9f538: mov     dl,0x20
0x140a9f53a: mov     rcx,rbx
0x140a9f53d: call    0x1400bb1b0
0x140a9f542: mov     r8d,esi
0x140a9f545: movzx   edx,di
0x140a9f548: lea     rcx,[rip+0x1954421]        # 0x1423f3970
0x140a9f54f: call    0x1414c6fe0
0x140a9f554: test    rax,rax
0x140a9f557: je      0x140a9f593
0x140a9f559: cmp     DWORD PTR [rax+0x298],0x6
0x140a9f560: jle     0x140a9f573
0x140a9f562: mov     rax,QWORD PTR [rax+0x290]
0x140a9f569: test    BYTE PTR [rax+0x6],0x2
0x140a9f56d: je      0x140a9f573
0x140a9f56f: mov     al,0x1
0x140a9f571: jmp     0x140a9f575
0x140a9f573: xor     al,al
0x140a9f575: test    al,al
0x140a9f577: je      0x140a9f593
0x140a9f579: mov     r8d,0x4
0x140a9f57f: lea     rdx,[rip+0xc511fe]        # 0x1416f0784 ; literal='tube'
0x140a9f586: mov     rcx,rbx
0x140a9f589: call    0x140071040
0x140a9f58e: jmp     0x140aa1b0b
0x140a9f593: mov     r8d,0xc
0x140a9f599: lea     rdx,[rip+0xc511f0]        # 0x1416f0790 ; literal='pipe section'
0x140a9f5a0: mov     rcx,rbx
0x140a9f5a3: call    0x140071040
0x140a9f5a8: jmp     0x140aa1b0b
0x140a9f5ad: mov     rcx,QWORD PTR [rip+0x1a6fa14]        # 0x14250efc8
0x140a9f5b4: mov     r8,QWORD PTR [rip+0x1a6fa05]        # 0x14250efc0
0x140a9f5bb: sub     rcx,r8
0x140a9f5be: sar     rcx,0x3
0x140a9f5c2: sub     ecx,0x1
0x140a9f5c5: movsxd  rdx,ecx
0x140a9f5c8: js      0x140a9f5e3
0x140a9f5ca: nop     WORD PTR [rax+rax*1+0x0]
0x140a9f5d0: mov     rax,QWORD PTR [r8+rdx*8]
0x140a9f5d4: cmp     WORD PTR [rax+0x28],r15w
0x140a9f5d9: je      0x140a9f643
0x140a9f5db: dec     ecx
0x140a9f5dd: sub     rdx,0x1
0x140a9f5e1: jns     0x140a9f5d0
0x140a9f5e3: mov     eax,DWORD PTR [rbp+0x220]
0x140a9f5e9: cmp     di,0xffff
0x140a9f5ed: jne     0x140a9f5f3
0x140a9f5ef: test    eax,eax
0x140a9f5f1: je      0x140a9f631
0x140a9f5f3: mov     WORD PTR [rsp+0x30],r9w
0x140a9f5f9: mov     BYTE PTR [rsp+0x28],0x1
0x140a9f5fe: mov     DWORD PTR [rsp+0x20],eax
0x140a9f602: mov     r9d,esi
0x140a9f605: movzx   r8d,di
0x140a9f609: lea     rdx,[rsp+0x68]
0x140a9f60e: lea     rcx,[rip+0x195435b]        # 0x1423f3970
0x140a9f615: call    0x1414eab90
0x140a9f61a: lea     rdx,[rsp+0x68]
0x140a9f61f: mov     rcx,rbx
0x140a9f622: call    0x1400bb340
0x140a9f627: mov     dl,0x20
0x140a9f629: mov     rcx,rbx
0x140a9f62c: call    0x1400bb1b0
0x140a9f631: mov     r8d,0xe
0x140a9f637: lea     rdx,[rip+0xc51162]        # 0x1416f07a0 ; literal='trap component'
0x140a9f63e: jmp     0x140aa1af3
0x140a9f643: movsxd  rax,ecx
0x140a9f646: mov     r14,QWORD PTR [r8+rax*8]
0x140a9f64a: test    r14,r14
0x140a9f64d: je      0x140a9f5e3
0x140a9f64f: cmp     QWORD PTR [r14+0xb8],0x0
0x140a9f657: je      0x140a9f67a
0x140a9f659: lea     rdx,[r14+0xa8]
0x140a9f660: mov     rcx,rbx
0x140a9f663: call    0x1400bb340
0x140a9f668: lea     rdx,[rip+0xb64381]        # 0x1416039f0 ; literal=' '
0x140a9f66f: mov     rcx,rbx
0x140a9f672: call    0x140070b90
0x140a9f677: xor     r9d,r9d
0x140a9f67a: mov     eax,DWORD PTR [rbp+0x220]
0x140a9f680: cmp     di,0xffff
0x140a9f684: jne     0x140a9f68a
0x140a9f686: test    eax,eax
0x140a9f688: je      0x140a9f6c8
0x140a9f68a: mov     WORD PTR [rsp+0x30],r9w
0x140a9f690: mov     BYTE PTR [rsp+0x28],0x1
0x140a9f695: mov     DWORD PTR [rsp+0x20],eax
0x140a9f699: mov     r9d,esi
0x140a9f69c: movzx   r8d,di
0x140a9f6a0: lea     rdx,[rsp+0x68]
0x140a9f6a5: lea     rcx,[rip+0x19542c4]        # 0x1423f3970
0x140a9f6ac: call    0x1414eab90
0x140a9f6b1: lea     rdx,[rsp+0x68]
0x140a9f6b6: mov     rcx,rbx
0x140a9f6b9: call    0x1400bb340
0x140a9f6be: mov     dl,0x20
0x140a9f6c0: mov     rcx,rbx
0x140a9f6c3: call    0x1400bb1b0
0x140a9f6c8: cmp     r12d,0x1
0x140a9f6cc: lea     rdx,[r14+0x88]
0x140a9f6d3: jne     0x140a9f6d9
0x140a9f6d5: lea     rdx,[r14+0x68]
0x140a9f6d9: mov     rcx,rbx
0x140a9f6dc: call    0x1400bb340
0x140a9f6e1: jmp     0x140aa1b0b
0x140a9f6e6: mov     eax,DWORD PTR [rbp+0x220]
0x140a9f6ec: cmp     di,0xffff
0x140a9f6f0: jne     0x140a9f6f6
0x140a9f6f2: test    eax,eax
0x140a9f6f4: je      0x140a9f744
0x140a9f6f6: mov     WORD PTR [rsp+0x30],r9w
0x140a9f6fc: mov     BYTE PTR [rsp+0x28],r8b
0x140a9f701: mov     DWORD PTR [rsp+0x20],eax
0x140a9f705: mov     r9d,esi
0x140a9f708: movzx   r8d,di
0x140a9f70c: lea     rdx,[rsp+0x68]
0x140a9f711: lea     rcx,[rip+0x1954258]        # 0x1423f3970
0x140a9f718: call    0x1414eab90
0x140a9f71d: lea     rdx,[rsp+0x68]
0x140a9f722: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9f727: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9f72d: mov     r8,QWORD PTR [rsp+0x78]
0x140a9f732: mov     rcx,rbx
0x140a9f735: call    0x140071040
0x140a9f73a: mov     dl,0x20
0x140a9f73c: mov     rcx,rbx
0x140a9f73f: call    0x1400bb1b0
0x140a9f744: mov     r8d,0xe
0x140a9f74a: lea     rdx,[rip+0xc5105f]        # 0x1416f07b0 ; literal='ballista parts'
0x140a9f751: mov     rcx,rbx
0x140a9f754: call    0x140071040
0x140a9f759: jmp     0x140aa1b0b
0x140a9f75e: mov     eax,DWORD PTR [rbp+0x220]
0x140a9f764: cmp     di,0xffff
0x140a9f768: jne     0x140a9f76e
0x140a9f76a: test    eax,eax
0x140a9f76c: je      0x140a9f7bc
0x140a9f76e: mov     WORD PTR [rsp+0x30],r9w
0x140a9f774: mov     BYTE PTR [rsp+0x28],r8b
0x140a9f779: mov     DWORD PTR [rsp+0x20],eax
0x140a9f77d: mov     r9d,esi
0x140a9f780: movzx   r8d,di
0x140a9f784: lea     rdx,[rsp+0x68]
0x140a9f789: lea     rcx,[rip+0x19541e0]        # 0x1423f3970
0x140a9f790: call    0x1414eab90
0x140a9f795: lea     rdx,[rsp+0x68]
0x140a9f79a: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9f79f: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9f7a5: mov     r8,QWORD PTR [rsp+0x78]
0x140a9f7aa: mov     rcx,rbx
0x140a9f7ad: call    0x140071040
0x140a9f7b2: mov     dl,0x20
0x140a9f7b4: mov     rcx,rbx
0x140a9f7b7: call    0x1400bb1b0
0x140a9f7bc: mov     r8d,0x5
0x140a9f7c2: lea     rdx,[rip+0xc50f87]        # 0x1416f0750 ; literal='anvil'
0x140a9f7c9: jmp     0x140aa1af3
0x140a9f7ce: mov     eax,DWORD PTR [rbp+0x220]
0x140a9f7d4: cmp     di,0xffff
0x140a9f7d8: jne     0x140a9f7de
0x140a9f7da: test    eax,eax
0x140a9f7dc: je      0x140a9f82c
0x140a9f7de: mov     WORD PTR [rsp+0x30],r9w
0x140a9f7e4: mov     BYTE PTR [rsp+0x28],r8b
0x140a9f7e9: mov     DWORD PTR [rsp+0x20],eax
0x140a9f7ed: mov     r9d,esi
0x140a9f7f0: movzx   r8d,di
0x140a9f7f4: lea     rdx,[rsp+0x68]
0x140a9f7f9: lea     rcx,[rip+0x1954170]        # 0x1423f3970
0x140a9f800: call    0x1414eab90
0x140a9f805: lea     rdx,[rsp+0x68]
0x140a9f80a: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9f80f: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9f815: mov     r8,QWORD PTR [rsp+0x78]
0x140a9f81a: mov     rcx,rbx
0x140a9f81d: call    0x140071040
0x140a9f822: mov     dl,0x20
0x140a9f824: mov     rcx,rbx
0x140a9f827: call    0x1400bb1b0
0x140a9f82c: mov     r8d,0x6
0x140a9f832: lea     rdx,[rip+0xc50f1f]        # 0x1416f0758 ; literal='amulet'
0x140a9f839: jmp     0x140aa1af3
0x140a9f83e: mov     eax,DWORD PTR [rbp+0x220]
0x140a9f844: cmp     di,0xffff
0x140a9f848: jne     0x140a9f84e
0x140a9f84a: test    eax,eax
0x140a9f84c: je      0x140a9f89c
0x140a9f84e: mov     WORD PTR [rsp+0x30],r9w
0x140a9f854: mov     BYTE PTR [rsp+0x28],r8b
0x140a9f859: mov     DWORD PTR [rsp+0x20],eax
0x140a9f85d: mov     r9d,esi
0x140a9f860: movzx   r8d,di
0x140a9f864: lea     rdx,[rsp+0x68]
0x140a9f869: lea     rcx,[rip+0x1954100]        # 0x1423f3970
0x140a9f870: call    0x1414eab90
0x140a9f875: lea     rdx,[rsp+0x68]
0x140a9f87a: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9f87f: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9f885: mov     r8,QWORD PTR [rsp+0x78]
0x140a9f88a: mov     rcx,rbx
0x140a9f88d: call    0x140071040
0x140a9f892: mov     dl,0x20
0x140a9f894: mov     rcx,rbx
0x140a9f897: call    0x1400bb1b0
0x140a9f89c: mov     r8d,0x13
0x140a9f8a2: lea     rdx,[rip+0xc50eb7]        # 0x1416f0760 ; literal='ballista arrow head'
0x140a9f8a9: jmp     0x140aa1af3
0x140a9f8ae: mov     eax,DWORD PTR [rbp+0x220]
0x140a9f8b4: cmp     di,0xffff
0x140a9f8b8: jne     0x140a9f8be
0x140a9f8ba: test    eax,eax
0x140a9f8bc: je      0x140a9f90c
0x140a9f8be: mov     WORD PTR [rsp+0x30],r9w
0x140a9f8c4: mov     BYTE PTR [rsp+0x28],r8b
0x140a9f8c9: mov     DWORD PTR [rsp+0x20],eax
0x140a9f8cd: mov     r9d,esi
0x140a9f8d0: movzx   r8d,di
0x140a9f8d4: lea     rdx,[rsp+0x68]
0x140a9f8d9: lea     rcx,[rip+0x1954090]        # 0x1423f3970
0x140a9f8e0: call    0x1414eab90
0x140a9f8e5: lea     rdx,[rsp+0x68]
0x140a9f8ea: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9f8ef: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9f8f5: mov     r8,QWORD PTR [rsp+0x78]
0x140a9f8fa: mov     rcx,rbx
0x140a9f8fd: call    0x140071040
0x140a9f902: mov     dl,0x20
0x140a9f904: mov     rcx,rbx
0x140a9f907: call    0x1400bb1b0
0x140a9f90c: mov     rcx,QWORD PTR [rip+0x1a6f9b5]        # 0x14250f2c8
0x140a9f913: mov     r8,QWORD PTR [rip+0x1a6f9a6]        # 0x14250f2c0
0x140a9f91a: sub     rcx,r8
0x140a9f91d: sar     rcx,0x3
0x140a9f921: sub     ecx,0x1
0x140a9f924: movsxd  rdx,ecx
0x140a9f927: js      0x140a9f943
0x140a9f929: nop     DWORD PTR [rax+0x0]
0x140a9f930: mov     rax,QWORD PTR [r8+rdx*8]
0x140a9f934: cmp     WORD PTR [rax+0x28],r15w
0x140a9f939: je      0x140a9f95d
0x140a9f93b: dec     ecx
0x140a9f93d: sub     rdx,0x1
0x140a9f941: jns     0x140a9f930
0x140a9f943: mov     r8d,0xa
0x140a9f949: lea     rdx,[rip+0xc50e28]        # 0x1416f0778 ; literal='siege ammo'
0x140a9f950: mov     rcx,rbx
0x140a9f953: call    0x140071040
0x140a9f958: jmp     0x140aa1b0b
0x140a9f95d: movsxd  rax,ecx
0x140a9f960: mov     rcx,QWORD PTR [r8+rax*8]
0x140a9f964: test    rcx,rcx
0x140a9f967: je      0x140a9f943
0x140a9f969: mov     edx,0x88
0x140a9f96e: mov     eax,0x68
0x140a9f973: cmp     r12d,0x1
0x140a9f977: cmove   edx,eax
0x140a9f97a: add     rdx,rcx
0x140a9f97d: mov     rcx,rbx
0x140a9f980: call    0x1400bb340
0x140a9f985: jmp     0x140aa1b0b
0x140a9f98a: mov     rcx,QWORD PTR [rip+0x1a6f91f]        # 0x14250f2b0
0x140a9f991: mov     r8,QWORD PTR [rip+0x1a6f910]        # 0x14250f2a8
0x140a9f998: sub     rcx,r8
0x140a9f99b: sar     rcx,0x3
0x140a9f99f: sub     ecx,0x1
0x140a9f9a2: movsxd  rdx,ecx
0x140a9f9a5: js      0x140a9f9c7
0x140a9f9a7: nop     WORD PTR [rax+rax*1+0x0]
0x140a9f9b0: mov     rax,QWORD PTR [r8+rdx*8]
0x140a9f9b4: cmp     WORD PTR [rax+0x28],r15w
0x140a9f9b9: je      0x140a9fa4b
0x140a9f9bf: dec     ecx
0x140a9f9c1: sub     rdx,0x1
0x140a9f9c5: jns     0x140a9f9b0
0x140a9f9c7: mov     r14,r9
0x140a9f9ca: mov     eax,DWORD PTR [rbp+0x220]
0x140a9f9d0: cmp     di,0xffff
0x140a9f9d4: jne     0x140a9f9da
0x140a9f9d6: test    eax,eax
0x140a9f9d8: je      0x140a9fa28
0x140a9f9da: mov     WORD PTR [rsp+0x30],r9w
0x140a9f9e0: mov     BYTE PTR [rsp+0x28],0x1
0x140a9f9e5: mov     DWORD PTR [rsp+0x20],eax
0x140a9f9e9: mov     r9d,esi
0x140a9f9ec: movzx   r8d,di
0x140a9f9f0: lea     rdx,[rsp+0x68]
0x140a9f9f5: lea     rcx,[rip+0x1953f74]        # 0x1423f3970
0x140a9f9fc: call    0x1414eab90
0x140a9fa01: lea     rdx,[rsp+0x68]
0x140a9fa06: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9fa0b: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9fa11: mov     r8,QWORD PTR [rsp+0x78]
0x140a9fa16: mov     rcx,rbx
0x140a9fa19: call    0x140071040
0x140a9fa1e: mov     dl,0x20
0x140a9fa20: mov     rcx,rbx
0x140a9fa23: call    0x1400bb1b0
0x140a9fa28: test    r14,r14
0x140a9fa2b: je      0x140a9fa8d
0x140a9fa2d: cmp     r12d,0x1
0x140a9fa31: lea     rdx,[r14+0x88]
0x140a9fa38: jne     0x140a9fa3e
0x140a9fa3a: lea     rdx,[r14+0x68]
0x140a9fa3e: mov     rcx,rbx
0x140a9fa41: call    0x1400bb340
0x140a9fa46: jmp     0x140aa1b0b
0x140a9fa4b: movsxd  rax,ecx
0x140a9fa4e: mov     r15,QWORD PTR [r8+rax*8]
0x140a9fa52: mov     r14,r15
0x140a9fa55: test    r15,r15
0x140a9fa58: je      0x140a9f9ca
0x140a9fa5e: cmp     QWORD PTR [r15+0xb8],0x0
0x140a9fa66: je      0x140a9f9ca
0x140a9fa6c: lea     rdx,[r15+0xa8]
0x140a9fa73: mov     rcx,rbx
0x140a9fa76: call    0x1400bb340
0x140a9fa7b: mov     dl,0x20
0x140a9fa7d: mov     rcx,rbx
0x140a9fa80: call    0x1400bb1b0
0x140a9fa85: xor     r9d,r9d
0x140a9fa88: jmp     0x140a9f9ca
0x140a9fa8d: mov     r8d,0xa
0x140a9fa93: lea     rdx,[rip+0xc50c8e]        # 0x1416f0728 ; literal='ammunition'
0x140a9fa9a: mov     rcx,rbx
0x140a9fa9d: call    0x140071040
0x140a9faa2: jmp     0x140aa1b0b
0x140a9faa7: mov     eax,DWORD PTR [rbp+0x220]
0x140a9faad: cmp     di,0xffff
0x140a9fab1: jne     0x140a9fab7
0x140a9fab3: test    eax,eax
0x140a9fab5: je      0x140a9fb05
0x140a9fab7: mov     WORD PTR [rsp+0x30],r9w
0x140a9fabd: mov     BYTE PTR [rsp+0x28],r8b
0x140a9fac2: mov     DWORD PTR [rsp+0x20],eax
0x140a9fac6: mov     r9d,esi
0x140a9fac9: movzx   r8d,di
0x140a9facd: lea     rdx,[rsp+0x68]
0x140a9fad2: lea     rcx,[rip+0x1953e97]        # 0x1423f3970
0x140a9fad9: call    0x1414eab90
0x140a9fade: lea     rdx,[rsp+0x68]
0x140a9fae3: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9fae8: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9faee: mov     r8,QWORD PTR [rsp+0x78]
0x140a9faf3: mov     rcx,rbx
0x140a9faf6: call    0x140071040
0x140a9fafb: mov     dl,0x20
0x140a9fafd: mov     rcx,rbx
0x140a9fb00: call    0x1400bb1b0
0x140a9fb05: mov     r8d,0x7
0x140a9fb0b: lea     rdx,[rip+0xc50c26]        # 0x1416f0738 ; literal='scepter'
0x140a9fb12: jmp     0x140aa1af3
0x140a9fb17: mov     eax,DWORD PTR [rbp+0x220]
0x140a9fb1d: cmp     di,0xffff
0x140a9fb21: jne     0x140a9fb27
0x140a9fb23: test    eax,eax
0x140a9fb25: je      0x140a9fb75
0x140a9fb27: mov     WORD PTR [rsp+0x30],r9w
0x140a9fb2d: mov     BYTE PTR [rsp+0x28],r8b
0x140a9fb32: mov     DWORD PTR [rsp+0x20],eax
0x140a9fb36: mov     r9d,esi
0x140a9fb39: movzx   r8d,di
0x140a9fb3d: lea     rdx,[rsp+0x68]
0x140a9fb42: lea     rcx,[rip+0x1953e27]        # 0x1423f3970
0x140a9fb49: call    0x1414eab90
0x140a9fb4e: lea     rdx,[rsp+0x68]
0x140a9fb53: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9fb58: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9fb5e: mov     r8,QWORD PTR [rsp+0x78]
0x140a9fb63: mov     rcx,rbx
0x140a9fb66: call    0x140071040
0x140a9fb6b: mov     dl,0x20
0x140a9fb6d: mov     rcx,rbx
0x140a9fb70: call    0x1400bb1b0
0x140a9fb75: mov     r8d,0x5
0x140a9fb7b: lea     rdx,[rip+0xc50bbe]        # 0x1416f0740 ; literal='crown'
0x140a9fb82: jmp     0x140aa1af3
0x140a9fb87: mov     eax,DWORD PTR [rbp+0x220]
0x140a9fb8d: cmp     di,0xffff
0x140a9fb91: jne     0x140a9fb97
0x140a9fb93: test    eax,eax
0x140a9fb95: je      0x140a9fbe5
0x140a9fb97: mov     WORD PTR [rsp+0x30],r9w
0x140a9fb9d: mov     BYTE PTR [rsp+0x28],r8b
0x140a9fba2: mov     DWORD PTR [rsp+0x20],eax
0x140a9fba6: mov     r9d,esi
0x140a9fba9: movzx   r8d,di
0x140a9fbad: lea     rdx,[rsp+0x68]
0x140a9fbb2: lea     rcx,[rip+0x1953db7]        # 0x1423f3970
0x140a9fbb9: call    0x1414eab90
0x140a9fbbe: lea     rdx,[rsp+0x68]
0x140a9fbc3: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9fbc8: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9fbce: mov     r8,QWORD PTR [rsp+0x78]
0x140a9fbd3: mov     rcx,rbx
0x140a9fbd6: call    0x140071040
0x140a9fbdb: mov     dl,0x20
0x140a9fbdd: mov     rcx,rbx
0x140a9fbe0: call    0x1400bb1b0
0x140a9fbe5: lea     rdx,[rip+0xc50b5c]        # 0x1416f0748 ; literal='coin'
0x140a9fbec: jmp     0x140aa1aed
0x140a9fbf1: mov     rcx,rbx
0x140a9fbf4: cmp     QWORD PTR [rbp+0x200],0x0
0x140a9fbfc: je      0x140a9fc0d
0x140a9fbfe: mov     r8d,0x8
0x140a9fc04: lea     rdx,[rip+0xc50add]        # 0x1416f06e8 ; literal='perfect '
0x140a9fc0b: jmp     0x140a9fc1a
0x140a9fc0d: mov     r8d,0x6
0x140a9fc13: lea     rdx,[rip+0xbc6806]        # 0x141666420 ; literal='large '
0x140a9fc1a: call    0x140071040
0x140a9fc1f: xor     r15d,r15d
0x140a9fc22: cmp     r14d,0xffffffff
0x140a9fc26: je      0x140a9fc90
0x140a9fc28: mov     r8,QWORD PTR [rip+0x1967ca9]        # 0x1424078d8
0x140a9fc2f: mov     r11,QWORD PTR [rip+0x1967c9a]        # 0x1424078d0
0x140a9fc36: sub     r8,r11
0x140a9fc39: sar     r8,0x3
0x140a9fc3d: test    r8d,r8d
0x140a9fc40: je      0x140a9fc90
0x140a9fc42: mov     edx,r15d
0x140a9fc45: sub     r8d,0x1
0x140a9fc49: js      0x140a9fc77
0x140a9fc4b: nop     DWORD PTR [rax+rax*1+0x0]
0x140a9fc50: lea     ecx,[rdx+r8*1]
0x140a9fc54: sar     ecx,1
0x140a9fc56: movsxd  rax,ecx
0x140a9fc59: mov     r10,QWORD PTR [r11+rax*8]
0x140a9fc5d: cmp     DWORD PTR [r10+0x1c],r14d
0x140a9fc61: je      0x140a9fc7a
0x140a9fc63: lea     eax,[rcx+0x1]
0x140a9fc66: cmovle  edx,eax
0x140a9fc69: lea     eax,[rcx-0x1]
0x140a9fc6c: cmovle  eax,r8d
0x140a9fc70: mov     r8d,eax
0x140a9fc73: cmp     edx,eax
0x140a9fc75: jle     0x140a9fc50
0x140a9fc77: mov     r10,r15
0x140a9fc7a: test    r10,r10
0x140a9fc7d: je      0x140a9fc90
0x140a9fc7f: mov     rax,QWORD PTR [r10]
0x140a9fc82: mov     rcx,r10
0x140a9fc85: call    QWORD PTR [rax+0x748]
0x140a9fc8b: mov     r13d,eax
0x140a9fc8e: jmp     0x140a9fc96
0x140a9fc90: mov     r13d,0xffffffff
0x140a9fc96: xorps   xmm0,xmm0
0x140a9fc99: movups  XMMWORD PTR [rbp+0x8],xmm0
0x140a9fc9d: mov     QWORD PTR [rbp+0x18],r15
0x140a9fca1: mov     QWORD PTR [rbp+0x20],0xf
0x140a9fca9: mov     BYTE PTR [rbp+0x8],0x0
0x140a9fcad: mov     r14d,DWORD PTR [rbp+0x220]
0x140a9fcb4: mov     DWORD PTR [rsp+0x30],r14d
0x140a9fcb9: mov     DWORD PTR [rsp+0x28],r12d
0x140a9fcbe: mov     DWORD PTR [rsp+0x20],r13d
0x140a9fcc3: mov     r9d,esi
0x140a9fcc6: movzx   r8d,di
0x140a9fcca: lea     rdx,[rbp+0x8]
0x140a9fcce: call    0x1414fb130
0x140a9fcd3: test    al,al
0x140a9fcd5: je      0x140a9fcf6
0x140a9fcd7: lea     rdx,[rbp+0x8]
0x140a9fcdb: cmp     QWORD PTR [rbp+0x20],0xf
0x140a9fce0: cmova   rdx,QWORD PTR [rbp+0x8]
0x140a9fce5: mov     r8,QWORD PTR [rbp+0x18]
0x140a9fce9: mov     rcx,rbx
0x140a9fcec: call    0x140071040
0x140a9fcf1: jmp     0x140a9fe28
0x140a9fcf6: cmp     edi,0x3
0x140a9fcf9: jne     0x140a9fd0c
0x140a9fcfb: lea     rdx,[rip+0xc509f6]        # 0x1416f06f8 ; literal='green glass '
0x140a9fd02: mov     rcx,rbx
0x140a9fd05: call    0x140070b90
0x140a9fd0a: jmp     0x140a9fd43
0x140a9fd0c: cmp     edi,0x4
0x140a9fd0f: jne     0x140a9fd22
0x140a9fd11: lea     rdx,[rip+0xc509f0]        # 0x1416f0708 ; literal='clear glass '
0x140a9fd18: mov     rcx,rbx
0x140a9fd1b: call    0x140070b90
0x140a9fd20: jmp     0x140a9fd43
0x140a9fd22: cmp     edi,0x5
0x140a9fd25: jne     0x140a9fd38
0x140a9fd27: lea     rdx,[rip+0xc509ea]        # 0x1416f0718 ; literal='crystal glass '
0x140a9fd2e: mov     rcx,rbx
0x140a9fd31: call    0x140070b90
0x140a9fd36: jmp     0x140a9fd43
0x140a9fd38: cmp     di,0xffff
0x140a9fd3c: jne     0x140a9fd6b
0x140a9fd3e: test    r14d,r14d
0x140a9fd41: jne     0x140a9fdb5
0x140a9fd43: lea     rdx,[rip+0xb91962]        # 0x1416316ac ; literal='gem'
0x140a9fd4a: mov     rcx,rbx
0x140a9fd4d: call    0x140070b90
0x140a9fd52: cmp     r12d,0x1
0x140a9fd56: je      0x140a9fe28
0x140a9fd5c: mov     dl,0x73
0x140a9fd5e: mov     rcx,rbx
0x140a9fd61: call    0x1400bb1b0
0x140a9fd66: jmp     0x140a9fe28
0x140a9fd6b: test    di,di
0x140a9fd6e: jne     0x140a9fdb5
0x140a9fd70: lea     rcx,[rbp+0x28]
0x140a9fd74: call    0x140070cc0
0x140a9fd79: nop     
0x140a9fd7a: xor     r8d,r8d
0x140a9fd7d: mov     r9d,esi
0x140a9fd80: lea     rdx,[rbp+0x28]
0x140a9fd84: lea     rcx,[rip+0x1953be5]        # 0x1423f3970
0x140a9fd8b: cmp     r12d,0x1
0x140a9fd8f: je      0x140a9fd98
0x140a9fd91: mov     BYTE PTR [rsp+0x20],0x1
0x140a9fd96: jmp     0x140a9fd9d
0x140a9fd98: mov     BYTE PTR [rsp+0x20],r8b
0x140a9fd9d: call    0x1414eaa00
0x140a9fda2: lea     rdx,[rbp+0x28]
0x140a9fda6: mov     rcx,rbx
0x140a9fda9: call    0x1400bb340
0x140a9fdae: nop     
0x140a9fdaf: lea     rcx,[rbp+0x28]
0x140a9fdb3: jmp     0x140a9fe22
0x140a9fdb5: lea     rcx,[rbp+0x148]
0x140a9fdbc: call    0x140070cc0
0x140a9fdc1: nop     
0x140a9fdc2: mov     WORD PTR [rsp+0x30],r15w
0x140a9fdc8: mov     BYTE PTR [rsp+0x28],0x1
0x140a9fdcd: mov     DWORD PTR [rsp+0x20],r14d
0x140a9fdd2: mov     r9d,esi
0x140a9fdd5: movzx   r8d,di
0x140a9fdd9: lea     rdx,[rbp+0x148]
0x140a9fde0: lea     rcx,[rip+0x1953b89]        # 0x1423f3970
0x140a9fde7: call    0x1414eab90
0x140a9fdec: lea     rdx,[rbp+0x148]
0x140a9fdf3: mov     rcx,rbx
0x140a9fdf6: call    0x1400bb340
0x140a9fdfb: lea     rdx,[rip+0xc508be]        # 0x1416f06c0 ; literal=' gem'
0x140a9fe02: mov     rcx,rbx
0x140a9fe05: call    0x140070b90
0x140a9fe0a: cmp     r12d,0x1
0x140a9fe0e: je      0x140a9fe1b
0x140a9fe10: mov     dl,0x73
0x140a9fe12: mov     rcx,rbx
0x140a9fe15: call    0x1400bb1b0
0x140a9fe1a: nop     
0x140a9fe1b: lea     rcx,[rbp+0x148]
0x140a9fe22: call    0x140070e80
0x140a9fe27: nop     
0x140a9fe28: mov     rdx,QWORD PTR [rbp+0x20]
0x140a9fe2c: cmp     rdx,0xf
0x140a9fe30: jbe     0x140a9fe63
0x140a9fe32: inc     rdx
0x140a9fe35: mov     rcx,QWORD PTR [rbp+0x8]
0x140a9fe39: mov     rax,rcx
0x140a9fe3c: cmp     rdx,0x1000
0x140a9fe43: jb      0x140a9fe5e
0x140a9fe45: add     rdx,0x27
0x140a9fe49: mov     rcx,QWORD PTR [rcx-0x8]
0x140a9fe4d: sub     rax,rcx
0x140a9fe50: add     rax,0xfffffffffffffff8
0x140a9fe54: cmp     rax,0x1f
0x140a9fe58: ja      0x140aa079e
0x140a9fe5e: call    0x1415530d0
0x140a9fe63: mov     QWORD PTR [rbp+0x18],r15
0x140a9fe67: mov     QWORD PTR [rbp+0x20],0xf
0x140a9fe6f: mov     BYTE PTR [rbp+0x8],0x0
0x140a9fe73: jmp     0x140aa1b0b
0x140a9fe78: mov     eax,DWORD PTR [rbp+0x220]
0x140a9fe7e: cmp     di,0xffff
0x140a9fe82: jne     0x140a9fe88
0x140a9fe84: test    eax,eax
0x140a9fe86: je      0x140a9fed6
0x140a9fe88: mov     WORD PTR [rsp+0x30],r9w
0x140a9fe8e: mov     BYTE PTR [rsp+0x28],r8b
0x140a9fe93: mov     DWORD PTR [rsp+0x20],eax
0x140a9fe97: mov     r9d,esi
0x140a9fe9a: movzx   r8d,di
0x140a9fe9e: lea     rdx,[rsp+0x68]
0x140a9fea3: lea     rcx,[rip+0x1953ac6]        # 0x1423f3970
0x140a9feaa: call    0x1414eab90
0x140a9feaf: lea     rdx,[rsp+0x68]
0x140a9feb4: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9feb9: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9febf: mov     r8,QWORD PTR [rsp+0x78]
0x140a9fec4: mov     rcx,rbx
0x140a9fec7: call    0x140071040
0x140a9fecc: mov     dl,0x20
0x140a9fece: mov     rcx,rbx
0x140a9fed1: call    0x1400bb1b0
0x140a9fed6: lea     rdx,[rip+0xc507eb]        # 0x1416f06c8 ; literal='ring'
0x140a9fedd: jmp     0x140aa1aed
0x140a9fee2: mov     eax,DWORD PTR [rbp+0x220]
0x140a9fee8: cmp     di,0xffff
0x140a9feec: jne     0x140a9fef2
0x140a9feee: test    eax,eax
0x140a9fef0: je      0x140a9ff40
0x140a9fef2: mov     WORD PTR [rsp+0x30],r9w
0x140a9fef8: mov     BYTE PTR [rsp+0x28],r8b
0x140a9fefd: mov     DWORD PTR [rsp+0x20],eax
0x140a9ff01: mov     r9d,esi
0x140a9ff04: movzx   r8d,di
0x140a9ff08: lea     rdx,[rsp+0x68]
0x140a9ff0d: lea     rcx,[rip+0x1953a5c]        # 0x1423f3970
0x140a9ff14: call    0x1414eab90
0x140a9ff19: lea     rdx,[rsp+0x68]
0x140a9ff1e: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9ff23: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9ff29: mov     r8,QWORD PTR [rsp+0x78]
0x140a9ff2e: mov     rcx,rbx
0x140a9ff31: call    0x140071040
0x140a9ff36: mov     dl,0x20
0x140a9ff38: mov     rcx,rbx
0x140a9ff3b: call    0x1400bb1b0
0x140a9ff40: mov     r8d,0x7
0x140a9ff46: lea     rdx,[rip+0xc50783]        # 0x1416f06d0 ; literal='earring'
0x140a9ff4d: jmp     0x140aa1af3
0x140a9ff52: mov     eax,DWORD PTR [rbp+0x220]
0x140a9ff58: cmp     di,0xffff
0x140a9ff5c: jne     0x140a9ff62
0x140a9ff5e: test    eax,eax
0x140a9ff60: je      0x140a9ffb0
0x140a9ff62: mov     WORD PTR [rsp+0x30],r9w
0x140a9ff68: mov     BYTE PTR [rsp+0x28],r8b
0x140a9ff6d: mov     DWORD PTR [rsp+0x20],eax
0x140a9ff71: mov     r9d,esi
0x140a9ff74: movzx   r8d,di
0x140a9ff78: lea     rdx,[rsp+0x68]
0x140a9ff7d: lea     rcx,[rip+0x19539ec]        # 0x1423f3970
0x140a9ff84: call    0x1414eab90
0x140a9ff89: lea     rdx,[rsp+0x68]
0x140a9ff8e: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9ff93: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9ff99: mov     r8,QWORD PTR [rsp+0x78]
0x140a9ff9e: mov     rcx,rbx
0x140a9ffa1: call    0x140071040
0x140a9ffa6: mov     dl,0x20
0x140a9ffa8: mov     rcx,rbx
0x140a9ffab: call    0x1400bb1b0
0x140a9ffb0: mov     r8d,0x8
0x140a9ffb6: lea     rdx,[rip+0xc5071b]        # 0x1416f06d8 ; literal='bracelet'
0x140a9ffbd: jmp     0x140aa1af3
0x140a9ffc2: mov     eax,DWORD PTR [rbp+0x220]
0x140a9ffc8: cmp     di,0xffff
0x140a9ffcc: jne     0x140a9ffd2
0x140a9ffce: test    eax,eax
0x140a9ffd0: je      0x140aa0020
0x140a9ffd2: mov     WORD PTR [rsp+0x30],r9w
0x140a9ffd8: mov     BYTE PTR [rsp+0x28],r8b
0x140a9ffdd: mov     DWORD PTR [rsp+0x20],eax
0x140a9ffe1: mov     r9d,esi
0x140a9ffe4: movzx   r8d,di
0x140a9ffe8: lea     rdx,[rsp+0x68]
0x140a9ffed: lea     rcx,[rip+0x195397c]        # 0x1423f3970
0x140a9fff4: call    0x1414eab90
0x140a9fff9: lea     rdx,[rsp+0x68]
0x140a9fffe: cmp     QWORD PTR [rbp-0x80],0xf
0x140aa0003: cmova   rdx,QWORD PTR [rsp+0x68]
0x140aa0009: mov     r8,QWORD PTR [rsp+0x78]
0x140aa000e: mov     rcx,rbx
0x140aa0011: call    0x140071040
0x140aa0016: mov     dl,0x20
0x140aa0018: mov     rcx,rbx
0x140aa001b: call    0x1400bb1b0
0x140aa0020: mov     r8d,0x3
0x140aa0026: lea     rdx,[rip+0xbabc13]        # 0x14164bc40 ; literal='bed'
0x140aa002d: jmp     0x140aa1af3
0x140aa0032: mov     eax,DWORD PTR [rbp+0x220]
0x140aa0038: cmp     di,0xffff
0x140aa003c: jne     0x140aa0042
0x140aa003e: test    eax,eax
0x140aa0040: je      0x140aa0090
0x140aa0042: mov     WORD PTR [rsp+0x30],r9w
0x140aa0048: mov     BYTE PTR [rsp+0x28],r8b
0x140aa004d: mov     DWORD PTR [rsp+0x20],eax
0x140aa0051: mov     r9d,esi
0x140aa0054: movzx   r8d,di
0x140aa0058: lea     rdx,[rsp+0x68]
0x140aa005d: lea     rcx,[rip+0x195390c]        # 0x1423f3970
0x140aa0064: call    0x1414eab90
0x140aa0069: lea     rdx,[rsp+0x68]
0x140aa006e: cmp     QWORD PTR [rbp-0x80],0xf
0x140aa0073: cmova   rdx,QWORD PTR [rsp+0x68]
0x140aa0079: mov     r8,QWORD PTR [rsp+0x78]
0x140aa007e: mov     rcx,rbx
0x140aa0081: call    0x140071040
0x140aa0086: mov     dl,0x20
0x140aa0088: mov     rcx,rbx
0x140aa008b: call    0x1400bb1b0
0x140aa0090: mov     r8d,0xe
0x140aa0096: lea     rdx,[rip+0xc50d53]        # 0x1416f0df0 ; literal='traction bench'
0x140aa009d: jmp     0x140a9c985
0x140aa00a2: mov     eax,DWORD PTR [rbp+0x220]
0x140aa00a8: cmp     di,0xffff
0x140aa00ac: jne     0x140aa00b2
0x140aa00ae: test    eax,eax
0x140aa00b0: je      0x140aa0100
0x140aa00b2: mov     WORD PTR [rsp+0x30],r9w
0x140aa00b8: mov     BYTE PTR [rsp+0x28],r8b
0x140aa00bd: mov     DWORD PTR [rsp+0x20],eax
0x140aa00c1: mov     r9d,esi
0x140aa00c4: movzx   r8d,di
0x140aa00c8: lea     rdx,[rsp+0x68]
0x140aa00cd: lea     rcx,[rip+0x195389c]        # 0x1423f3970
0x140aa00d4: call    0x1414eab90
0x140aa00d9: lea     rdx,[rsp+0x68]
0x140aa00de: cmp     QWORD PTR [rbp-0x80],0xf
0x140aa00e3: cmova   rdx,QWORD PTR [rsp+0x68]
0x140aa00e9: mov     r8,QWORD PTR [rsp+0x78]
0x140aa00ee: mov     rcx,rbx
0x140aa00f1: call    0x140071040
0x140aa00f6: mov     dl,0x20
0x140aa00f8: mov     rcx,rbx
0x140aa00fb: call    0x1400bb1b0
0x140aa0100: mov     r8d,0x5
0x140aa0106: lea     rdx,[rip+0xc50cf3]        # 0x1416f0e00 ; literal='quern'
0x140aa010d: jmp     0x140aa1af3
0x140aa0112: mov     eax,DWORD PTR [rbp+0x220]
0x140aa0118: cmp     di,0xffff
0x140aa011c: jne     0x140aa0122
0x140aa011e: test    eax,eax
0x140aa0120: je      0x140aa0170
0x140aa0122: mov     WORD PTR [rsp+0x30],r9w
0x140aa0128: mov     BYTE PTR [rsp+0x28],r8b
0x140aa012d: mov     DWORD PTR [rsp+0x20],eax
0x140aa0131: mov     r9d,esi
0x140aa0134: movzx   r8d,di
0x140aa0138: lea     rdx,[rsp+0x68]
0x140aa013d: lea     rcx,[rip+0x195382c]        # 0x1423f3970
0x140aa0144: call    0x1414eab90
0x140aa0149: lea     rdx,[rsp+0x68]
0x140aa014e: cmp     QWORD PTR [rbp-0x80],0xf
0x140aa0153: cmova   rdx,QWORD PTR [rsp+0x68]
0x140aa0159: mov     r8,QWORD PTR [rsp+0x78]
0x140aa015e: mov     rcx,rbx
0x140aa0161: call    0x140071040
0x140aa0166: mov     dl,0x20
0x140aa0168: mov     rcx,rbx
0x140aa016b: call    0x1400bb1b0
0x140aa0170: mov     r8d,0x9
0x140aa0176: lea     rdx,[rip+0xc50c8b]        # 0x1416f0e08 ; literal='millstone'
0x140aa017d: jmp     0x140aa1af3
0x140aa0182: mov     eax,DWORD PTR [rbp+0x220]
0x140aa0188: cmp     di,0xffff
0x140aa018c: jne     0x140aa0192
0x140aa018e: test    eax,eax
0x140aa0190: je      0x140aa01e0
0x140aa0192: mov     WORD PTR [rsp+0x30],r9w
0x140aa0198: mov     BYTE PTR [rsp+0x28],r8b
0x140aa019d: mov     DWORD PTR [rsp+0x20],eax
0x140aa01a1: mov     r9d,esi
0x140aa01a4: movzx   r8d,di
0x140aa01a8: lea     rdx,[rsp+0x68]
0x140aa01ad: lea     rcx,[rip+0x19537bc]        # 0x1423f3970
0x140aa01b4: call    0x1414eab90
0x140aa01b9: lea     rdx,[rsp+0x68]
0x140aa01be: cmp     QWORD PTR [rbp-0x80],0xf
0x140aa01c3: cmova   rdx,QWORD PTR [rsp+0x68]
0x140aa01c9: mov     r8,QWORD PTR [rsp+0x78]
0x140aa01ce: mov     rcx,rbx
0x140aa01d1: call    0x140071040
0x140aa01d6: mov     dl,0x20
0x140aa01d8: mov     rcx,rbx
0x140aa01db: call    0x1400bb1b0
0x140aa01e0: mov     r8d,0x6
0x140aa01e6: lea     rdx,[rip+0xc50c27]        # 0x1416f0e14 ; literal='statue'
0x140aa01ed: jmp     0x140aa1af3
0x140aa01f2: mov     eax,DWORD PTR [rbp+0x220]
0x140aa01f8: cmp     di,0xffff
0x140aa01fc: jne     0x140aa0202
0x140aa01fe: test    eax,eax
0x140aa0200: je      0x140aa0253
0x140aa0202: mov     WORD PTR [rsp+0x30],r9w
0x140aa0208: mov     BYTE PTR [rsp+0x28],r8b
0x140aa020d: mov     DWORD PTR [rsp+0x20],eax
0x140aa0211: mov     r9d,esi
0x140aa0214: movzx   r8d,di
0x140aa0218: lea     rdx,[rsp+0x68]
0x140aa021d: lea     rcx,[rip+0x195374c]        # 0x1423f3970
0x140aa0224: call    0x1414eab90
0x140aa0229: lea     rdx,[rsp+0x68]
0x140aa022e: cmp     QWORD PTR [rbp-0x80],0xf
0x140aa0233: cmova   rdx,QWORD PTR [rsp+0x68]
0x140aa0239: mov     r8,QWORD PTR [rsp+0x78]
0x140aa023e: mov     rcx,rbx
0x140aa0241: call    0x140071040
0x140aa0246: mov     dl,0x20
0x140aa0248: mov     rcx,rbx
0x140aa024b: call    0x1400bb1b0
0x140aa0250: xor     r9d,r9d
0x140aa0253: mov     r8,QWORD PTR [rip+0x196767e]        # 0x1424078d8
0x140aa025a: mov     r11,QWORD PTR [rip+0x196766f]        # 0x1424078d0
0x140aa0261: sub     r8,r11
0x140aa0264: sar     r8,0x3
0x140aa0268: test    r8d,r8d
0x140aa026b: je      0x140aa0496
0x140aa0271: cmp     r14d,0xffffffff
0x140aa0275: je      0x140aa0496
0x140aa027b: sub     r8d,0x1
0x140aa027f: mov     edx,r9d
0x140aa0282: js      0x140aa02ba
0x140aa0284: nop     DWORD PTR [rax+0x0]
0x140aa0288: nop     DWORD PTR [rax+rax*1+0x0]
0x140aa0290: lea     ecx,[rdx+r8*1]
0x140aa0294: sar     ecx,1
0x140aa0296: movsxd  rax,ecx
0x140aa0299: mov     r10,QWORD PTR [r11+rax*8]
0x140aa029d: cmp     DWORD PTR [r10+0x1c],r14d
0x140aa02a1: je      0x140aa02bd
0x140aa02a3: lea     eax,[rcx+0x1]
0x140aa02a6: cmovle  edx,eax
0x140aa02a9: lea     eax,[rcx-0x1]
0x140aa02ac: cmovle  eax,r8d
0x140aa02b0: mov     r8d,eax
0x140aa02b3: cmp     edx,eax
0x140aa02b5: jle     0x140aa0290
0x140aa02b7: xor     r9d,r9d
0x140aa02ba: mov     r10,r9
0x140aa02bd: test    r10,r10
0x140aa02c0: je      0x140aa0496
0x140aa02c6: mov     rax,QWORD PTR [r10]
0x140aa02c9: mov     rcx,r10
0x140aa02cc: call    QWORD PTR [rax+0x718]
0x140aa02d2: movsx   rcx,ax
0x140aa02d6: cmp     ecx,0x19
0x140aa02d9: ja      0x140aa0482
0x140aa02df: lea     rdx,[rip+0xffffffffff55fd1a]        # 0x140000000
0x140aa02e6: mov     ecx,DWORD PTR [rdx+rcx*4+0xaa1d34]
0x140aa02ed: add     rcx,rdx
0x140aa02f0: jmp     rcx
0x140aa02f2: lea     rdx,[rip+0xc50a9f]        # 0x1416f0d98 ; literal='memorial'
0x140aa02f9: mov     rcx,rbx
0x140aa02fc: call    0x140070b90
0x140aa0301: jmp     0x140aa1afb
0x140aa0306: lea     rdx,[rip+0xc50a9b]        # 0x1416f0da8 ; literal='food imports sign'
0x140aa030d: mov     rcx,rbx
0x140aa0310: call    0x140070b90
0x140aa0315: jmp     0x140aa1afb
0x140aa031a: lea     rdx,[rip+0xc50a9f]        # 0x1416f0dc0 ; literal='clothing imports sign'
0x140aa0321: mov     rcx,rbx
0x140aa0324: call    0x140070b90
0x140aa0329: jmp     0x140aa1afb
0x140aa032e: lea     rdx,[rip+0xc50aa3]        # 0x1416f0dd8 ; literal='general imports sign'
0x140aa0335: mov     rcx,rbx
0x140aa0338: call    0x140070b90
0x140aa033d: jmp     0x140aa1afb
0x140aa0342: lea     rdx,[rip+0xc509e7]        # 0x1416f0d30 ; literal='cloth shop sign'
0x140aa0349: mov     rcx,rbx
0x140aa034c: call    0x140070b90
0x140aa0351: jmp     0x140aa1afb
0x140aa0356: lea     rdx,[rip+0xc509e3]        # 0x1416f0d40 ; literal='leather shop sign'
0x140aa035d: mov     rcx,rbx
0x140aa0360: call    0x140070b90
0x140aa0365: jmp     0x140aa1afb
0x140aa036a: lea     rdx,[rip+0xc509e7]        # 0x1416f0d58 ; literal='woven clothing shop sign'
0x140aa0371: mov     rcx,rbx
0x140aa0374: call    0x140070b90
0x140aa0379: jmp     0x140aa1afb
0x140aa037e: lea     rdx,[rip+0xc509f3]        # 0x1416f0d78 ; literal='leather clothing shop sign'
0x140aa0385: mov     rcx,rbx
0x140aa0388: call    0x140070b90
0x140aa038d: jmp     0x140aa1afb
0x140aa0392: lea     rdx,[rip+0xc50937]        # 0x1416f0cd0 ; literal="bone carver's shop sign"
0x140aa0399: mov     rcx,rbx
0x140aa039c: call    0x140070b90
0x140aa03a1: jmp     0x140aa1afb
0x140aa03a6: lea     rdx,[rip+0xc5093b]        # 0x1416f0ce8 ; literal="gem cutter's shop sign"
0x140aa03ad: mov     rcx,rbx
0x140aa03b0: call    0x140070b90
0x140aa03b5: jmp     0x140aa1afb
0x140aa03ba: lea     rdx,[rip+0xc5093f]        # 0x1416f0d00 ; literal="weaponsmith's shop sign"
0x140aa03c1: mov     rcx,rbx
0x140aa03c4: call    0x140070b90
0x140aa03c9: jmp     0x140aa1afb
0x140aa03ce: lea     rdx,[rip+0xc50943]        # 0x1416f0d18 ; literal="bowyer's shop sign"
0x140aa03d5: mov     rcx,rbx
0x140aa03d8: call    0x140070b90
0x140aa03dd: jmp     0x140aa1afb
0x140aa03e2: lea     rdx,[rip+0xc50887]        # 0x1416f0c70 ; literal="blacksmith's shop sign"
0x140aa03e9: mov     rcx,rbx
0x140aa03ec: call    0x140070b90
0x140aa03f1: jmp     0x140aa1afb
0x140aa03f6: lea     rdx,[rip+0xc5088b]        # 0x1416f0c88 ; literal="armorsmith's shop sign"
0x140aa03fd: mov     rcx,rbx
0x140aa0400: call    0x140070b90
0x140aa0405: jmp     0x140aa1afb
0x140aa040a: lea     rdx,[rip+0xc5088f]        # 0x1416f0ca0 ; literal='metal craft shop sign'
0x140aa0411: mov     rcx,rbx
0x140aa0414: call    0x140070b90
0x140aa0419: jmp     0x140aa1afb
0x140aa041e: lea     rdx,[rip+0xc50893]        # 0x1416f0cb8 ; literal='leather goods shop sign'
0x140aa0425: mov     rcx,rbx
0x140aa0428: call    0x140070b90
0x140aa042d: jmp     0x140aa1afb
0x140aa0432: lea     rdx,[rip+0xc507cf]        # 0x1416f0c08 ; literal="carpenter's shop sign"
0x140aa0439: mov     rcx,rbx
0x140aa043c: call    0x140070b90
0x140aa0441: jmp     0x140aa1afb
0x140aa0446: lea     rdx,[rip+0xc507d3]        # 0x1416f0c20 ; literal='stone furniture shop sign'
0x140aa044d: mov     rcx,rbx
0x140aa0450: call    0x140070b90
0x140aa0455: jmp     0x140aa1afb
0x140aa045a: lea     rdx,[rip+0xc507df]        # 0x1416f0c40 ; literal='metal furniture shop sign'
0x140aa0461: mov     rcx,rbx
0x140aa0464: call    0x140070b90
0x140aa0469: jmp     0x140aa1afb
0x140aa046e: lea     rdx,[rip+0xc507eb]        # 0x1416f0c60 ; literal='tavern sign'
0x140aa0475: mov     rcx,rbx
0x140aa0478: call    0x140070b90
0x140aa047d: jmp     0x140aa1afb
0x140aa0482: lea     rdx,[rip+0xc50757]        # 0x1416f0be0 ; literal='slab'
0x140aa0489: mov     rcx,rbx
0x140aa048c: call    0x140070b90
0x140aa0491: jmp     0x140aa1afb
0x140aa0496: lea     rdx,[rip+0xc50743]        # 0x1416f0be0 ; literal='slab'
0x140aa049d: jmp     0x140aa1aed
0x140aa04a2: test    DWORD PTR [rbp+0x1f0],0x100
0x140aa04ac: je      0x140aa04c3
0x140aa04ae: mov     r8d,0x7
0x140aa04b4: lea     rdx,[rip+0xc503dd]        # 0x1416f0898 ; literal='rotten '
0x140aa04bb: mov     rcx,rbx
0x140aa04be: call    0x140071040
0x140aa04c3: mov     r8d,0x6
0x140aa04c9: lea     rdx,[rip+0xc50718]        # 0x1416f0be8 ; literal='corpse'
0x140aa04d0: jmp     0x140aa1af3
0x140aa04d5: test    DWORD PTR [rbp+0x1f0],0x100
0x140aa04df: je      0x140aa04f6
0x140aa04e1: mov     r8d,0x7
0x140aa04e7: lea     rdx,[rip+0xc503aa]        # 0x1416f0898 ; literal='rotten '
0x140aa04ee: mov     rcx,rbx
0x140aa04f1: call    0x140071040
0x140aa04f6: mov     eax,DWORD PTR [rbp+0x220]
0x140aa04fc: bt      eax,0x9
0x140aa0500: jae     0x140aa052d
0x140aa0502: mov     rcx,rbx
0x140aa0505: cmp     r12d,0x1
0x140aa0509: jne     0x140aa051c
0x140aa050b: lea     rdx,[rip+0xb9116a]        # 0x14163167c ; literal='tooth'
0x140aa0512: call    0x140070b90
0x140aa0517: jmp     0x140aa1b47
0x140aa051c: lea     rdx,[rip+0xc506cd]        # 0x1416f0bf0 ; literal='teeth'
0x140aa0523: call    0x140070b90
0x140aa0528: jmp     0x140aa1b0b
0x140aa052d: test    al,0x20
0x140aa052f: je      0x140aa0545
0x140aa0531: lea     rdx,[rip+0xb9113c]        # 0x141631674 ; literal='bone'
0x140aa0538: mov     rcx,rbx
0x140aa053b: call    0x140070b90
0x140aa0540: jmp     0x140aa1afb
0x140aa0545: test    al,0x40
0x140aa0547: je      0x140aa055d
0x140aa0549: lea     rdx,[rip+0xb9111c]        # 0x14163166c ; literal='shell'
0x140aa0550: mov     rcx,rbx
0x140aa0553: call    0x140070b90
0x140aa0558: jmp     0x140aa1afb
0x140aa055d: test    al,0x1
0x140aa055f: je      0x140aa0575
0x140aa0561: lea     rdx,[rip+0xc50690]        # 0x1416f0bf8 ; literal='plant part'
0x140aa0568: mov     rcx,rbx
0x140aa056b: call    0x140070b90
0x140aa0570: jmp     0x140aa1afb
0x140aa0575: test    al,0x8
0x140aa0577: je      0x140aa058d
0x140aa0579: lea     rdx,[rip+0xc50610]        # 0x1416f0b90 ; literal='silk body part'
0x140aa0580: mov     rcx,rbx
0x140aa0583: call    0x140070b90
0x140aa0588: jmp     0x140aa1afb
0x140aa058d: test    al,0x10
0x140aa058f: je      0x140aa05a5
0x140aa0591: lea     rdx,[rip+0xc50608]        # 0x1416f0ba0 ; literal='leather body part'
0x140aa0598: mov     rcx,rbx
0x140aa059b: call    0x140070b90
0x140aa05a0: jmp     0x140aa1afb
0x140aa05a5: test    al,al
0x140aa05a7: jns     0x140aa05bd
0x140aa05a9: lea     rdx,[rip+0xc50608]        # 0x1416f0bb8 ; literal='wooden body part'
0x140aa05b0: mov     rcx,rbx
0x140aa05b3: call    0x140070b90
0x140aa05b8: jmp     0x140aa1afb
0x140aa05bd: bt      eax,0x8
0x140aa05c1: jae     0x140aa05d7
0x140aa05c3: lea     rdx,[rip+0xc50606]        # 0x1416f0bd0 ; literal='soap body part'
0x140aa05ca: mov     rcx,rbx
0x140aa05cd: call    0x140070b90
0x140aa05d2: jmp     0x140aa1afb
0x140aa05d7: bt      eax,0xa
0x140aa05db: jae     0x140aa05f1
0x140aa05dd: lea     rdx,[rip+0xb910b0]        # 0x141631694 ; literal='horn'
0x140aa05e4: mov     rcx,rbx
0x140aa05e7: call    0x140070b90
0x140aa05ec: jmp     0x140aa1afb
0x140aa05f1: bt      eax,0xb
0x140aa05f5: jae     0x140aa060b
0x140aa05f7: lea     rdx,[rip+0xb9108e]        # 0x14163168c ; literal='pearl'
0x140aa05fe: mov     rcx,rbx
0x140aa0601: call    0x140070b90
0x140aa0606: jmp     0x140aa1afb
0x140aa060b: bt      eax,0xc
0x140aa060f: jae     0x140aa0625
0x140aa0611: lea     rdx,[rip+0xc50540]        # 0x1416f0b58 ; literal='yarn body part'
0x140aa0618: mov     rcx,rbx
0x140aa061b: call    0x140070b90
0x140aa0620: jmp     0x140aa1afb
0x140aa0625: bt      eax,0xd
0x140aa0629: lea     rdx,[rip+0xc50538]        # 0x1416f0b68 ; literal='strand body part'
0x140aa0630: jb      0x140aa0639
0x140aa0632: lea     rdx,[rip+0xc00487]        # 0x1416a0ac0 ; literal='body part'
0x140aa0639: mov     rcx,rbx
0x140aa063c: call    0x140070b90
0x140aa0641: jmp     0x140aa1afb
0x140aa0646: mov     r15d,0x7
0x140aa064c: test    DWORD PTR [rbp+0x1f0],0x100
0x140aa0656: je      0x140aa0671
0x140aa0658: mov     r8d,r15d
0x140aa065b: lea     rdx,[rip+0xc5051e]        # 0x1416f0b80 ; literal='Rotten '
0x140aa0662: mov     rcx,rbx
0x140aa0665: call    0x140071040
0x140aa066a: mov     rcx,QWORD PTR [rbp-0x80]
0x140aa066e: xor     r9d,r9d
0x140aa0671: cmp     di,0xffff
0x140aa0675: je      0x140aa07bf
0x140aa067b: mov     QWORD PTR [rsp+0x78],r9
0x140aa0680: lea     rax,[rsp+0x68]
0x140aa0685: cmp     rcx,0xf
0x140aa0689: cmova   rax,QWORD PTR [rsp+0x68]
0x140aa068f: mov     BYTE PTR [rax],0x0
0x140aa0692: test    di,di
0x140aa0695: js      0x140aa06db
0x140aa0697: mov     rdx,QWORD PTR [rip+0x1a6e84a]        # 0x14250eee8
0x140aa069e: mov     rax,QWORD PTR [rip+0x1a6e84b]        # 0x14250eef0
0x140aa06a5: sub     rax,rdx
0x140aa06a8: sar     rax,0x3
0x140aa06ac: cmp     rdi,rax
0x140aa06af: jae     0x140aa06db
0x140aa06b1: mov     rdx,QWORD PTR [rdx+rdi*8]
0x140aa06b5: add     rdx,0x20
0x140aa06b9: lea     rax,[rsp+0x68]
0x140aa06be: cmp     rax,rdx
0x140aa06c1: je      0x140aa06db
0x140aa06c3: mov     r8,QWORD PTR [rdx+0x10]
0x140aa06c7: cmp     QWORD PTR [rdx+0x18],0xf
0x140aa06cc: jbe     0x140aa06d1
0x140aa06ce: mov     rdx,QWORD PTR [rdx]
0x140aa06d1: lea     rcx,[rsp+0x68]
0x140aa06d6: call    0x140070f00
0x140aa06db: lea     rdx,[rsp+0x68]
0x140aa06e0: cmp     QWORD PTR [rbp-0x80],0xf
0x140aa06e5: cmova   rdx,QWORD PTR [rsp+0x68]
0x140aa06eb: mov     r8,QWORD PTR [rsp+0x78]
0x140aa06f0: mov     rcx,rbx
0x140aa06f3: call    0x140071040
0x140aa06f8: mov     dl,0x20
0x140aa06fa: mov     rcx,rbx
0x140aa06fd: call    0x1400bb1b0
0x140aa0702: xorps   xmm0,xmm0
0x140aa0705: movups  XMMWORD PTR [rbp-0x58],xmm0
0x140aa0709: xor     r14d,r14d
0x140aa070c: mov     QWORD PTR [rbp-0x48],r14
0x140aa0710: mov     QWORD PTR [rbp-0x40],0xf
0x140aa0718: mov     BYTE PTR [rbp-0x58],r14b
0x140aa071c: mov     BYTE PTR [rsp+0x28],0x1
0x140aa0721: movzx   r9d,si
0x140aa0725: movzx   r8d,di
0x140aa0729: lea     rdx,[rbp-0x58]
0x140aa072d: lea     rcx,[rip+0x1a6e794]        # 0x14250eec8
0x140aa0734: cmp     r12d,0x1
0x140aa0738: je      0x140aa0744
0x140aa073a: mov     DWORD PTR [rsp+0x20],0x10
0x140aa0742: jmp     0x140aa074c
0x140aa0744: mov     DWORD PTR [rsp+0x20],0xf
0x140aa074c: call    0x140146540
0x140aa0751: lea     rdx,[rbp-0x58]
0x140aa0755: cmp     QWORD PTR [rbp-0x40],0xf
0x140aa075a: cmova   rdx,QWORD PTR [rbp-0x58]
0x140aa075f: mov     r8,QWORD PTR [rbp-0x48]
0x140aa0763: mov     rcx,rbx
0x140aa0766: call    0x140071040
0x140aa076b: nop     
0x140aa076c: mov     rdx,QWORD PTR [rbp-0x40]
0x140aa0770: cmp     rdx,0xf
0x140aa0774: jbe     0x140aa07aa
0x140aa0776: inc     rdx
0x140aa0779: mov     rcx,QWORD PTR [rbp-0x58]
0x140aa077d: mov     rax,rcx
0x140aa0780: cmp     rdx,0x1000
0x140aa0787: jb      0x140aa07a5
0x140aa0789: add     rdx,0x27
0x140aa078d: mov     rcx,QWORD PTR [rcx-0x8]
0x140aa0791: sub     rax,rcx
0x140aa0794: add     rax,0xfffffffffffffff8
0x140aa0798: cmp     rax,0x1f
0x140aa079c: jbe     0x140aa07a5
0x140aa079e: call    QWORD PTR [rip+0xb6039c]        # 0x141600b40
0x140aa07a4: int3    
0x140aa07a5: call    0x1415530d0
0x140aa07aa: mov     QWORD PTR [rbp-0x48],r14
0x140aa07ae: mov     QWORD PTR [rbp-0x40],0xf
0x140aa07b6: mov     BYTE PTR [rbp-0x58],0x0
0x140aa07ba: jmp     0x140aa1b0b
0x140aa07bf: mov     r8,r15
0x140aa07c2: lea     rdx,[rip+0xbfe407]        # 0x14169ebd0 ; literal='remains'
0x140aa07c9: mov     rcx,rbx
0x140aa07cc: call    0x140071040
0x140aa07d1: jmp     0x140aa1b0b
0x140aa07d6: mov     ecx,0x1a3
0x140aa07db: movzx   eax,di
0x140aa07de: sub     ax,cx
0x140aa07e1: mov     ecx,0xc7
0x140aa07e6: cmp     ax,cx
0x140aa07e9: ja      0x140aa0811
0x140aa07eb: mov     r8d,esi
0x140aa07ee: lea     rdx,[rsp+0x68]
0x140aa07f3: lea     rcx,[rip+0x1a6e57e]        # 0x14250ed78
0x140aa07fa: call    0x140a7e760
0x140aa07ff: lea     rdx,[rsp+0x68]
0x140aa0804: mov     rcx,rbx
0x140aa0807: call    0x1400bb340
0x140aa080c: jmp     0x140aa1b0b
0x140aa0811: mov     eax,DWORD PTR [rbp+0x220]
0x140aa0817: cmp     di,0xffff
0x140aa081b: jne     0x140aa0835
0x140aa081d: test    eax,eax
0x140aa081f: jne     0x140aa0835
0x140aa0821: lea     rdx,[rip+0xc50360]        # 0x1416f0b88 ; literal='seeds'
0x140aa0828: mov     rcx,rbx
0x140aa082b: call    0x140070b90
0x140aa0830: jmp     0x140aa1b0b
0x140aa0835: mov     WORD PTR [rsp+0x30],r9w
0x140aa083b: mov     BYTE PTR [rsp+0x28],r8b
0x140aa0840: mov     DWORD PTR [rsp+0x20],eax
0x140aa0844: mov     r9d,esi
0x140aa0847: movzx   r8d,di
0x140aa084b: lea     rdx,[rsp+0x68]
0x140aa0850: lea     rcx,[rip+0x1953119]        # 0x1423f3970
0x140aa0857: call    0x1414eab90
0x140aa085c: lea     rdx,[rsp+0x68]
0x140aa0861: cmp     QWORD PTR [rbp-0x80],0xf
0x140aa0866: cmova   rdx,QWORD PTR [rsp+0x68]
0x140aa086c: mov     r8,QWORD PTR [rsp+0x78]
0x140aa0871: mov     rcx,rbx
0x140aa0874: call    0x140071040
0x140aa0879: mov     dl,0x20
0x140aa087b: jmp     0x140aa1b03
0x140aa0880: test    DWORD PTR [rbp+0x1f0],0x100
0x140aa088a: je      0x140aa08a4
0x140aa088c: mov     r8d,0x9
0x140aa0892: lea     rdx,[rip+0xc5027f]        # 0x1416f0b18 ; literal='withered '
0x140aa0899: mov     rcx,rbx
0x140aa089c: call    0x140071040
0x140aa08a1: xor     r9d,r9d
0x140aa08a4: mov     ecx,0x1a3
0x140aa08a9: movzx   eax,di
0x140aa08ac: sub     ax,cx
0x140aa08af: mov     ecx,0xc7
0x140aa08b4: cmp     ax,cx
0x140aa08b7: ja      0x140aa08ed
0x140aa08b9: cmp     r12d,0x1
0x140aa08bd: setne   al
0x140aa08c0: mov     r9d,r15d
0x140aa08c3: mov     BYTE PTR [rsp+0x20],al
0x140aa08c7: mov     r8d,esi
0x140aa08ca: lea     rdx,[rsp+0x68]
0x140aa08cf: lea     rcx,[rip+0x1a6e4a2]        # 0x14250ed78
0x140aa08d6: call    0x140a7e7b0
0x140aa08db: lea     rdx,[rsp+0x68]
0x140aa08e0: mov     rcx,rbx
0x140aa08e3: call    0x1400bb340
0x140aa08e8: jmp     0x140aa1b0b
0x140aa08ed: mov     eax,DWORD PTR [rbp+0x220]
0x140aa08f3: cmp     di,0xffff
0x140aa08f7: jne     0x140aa0928
0x140aa08f9: test    eax,eax
0x140aa08fb: jne     0x140aa0928
0x140aa08fd: mov     rcx,rbx
0x140aa0900: cmp     r12d,0x1
0x140aa0904: je      0x140aa0917
0x140aa0906: lea     rdx,[rip+0xc5021b]        # 0x1416f0b28 ; literal='leaves and fruit'
0x140aa090d: call    0x140070b90
0x140aa0912: jmp     0x140aa1b0b
0x140aa0917: lea     rdx,[rip+0xc50222]        # 0x1416f0b40 ; literal='leaf or fruit'
0x140aa091e: call    0x140070b90
0x140aa0923: jmp     0x140aa1b47
0x140aa0928: mov     WORD PTR [rsp+0x30],r9w
0x140aa092e: mov     BYTE PTR [rsp+0x28],0x1
0x140aa0933: jmp     0x140a9e8b1
0x140aa0938: test    DWORD PTR [rbp+0x1f0],0x100
0x140aa0942: je      0x140aa0959
0x140aa0944: mov     r8d,0x9
0x140aa094a: lea     rdx,[rip+0xc501c7]        # 0x1416f0b18 ; literal='withered '
0x140aa0951: mov     rcx,rbx
0x140aa0954: call    0x140071040
0x140aa0959: cmp     di,0xffff
0x140aa095d: je      0x140aa0997
0x140aa095f: cmp     esi,0xffffffff
0x140aa0962: je      0x140aa0997
0x140aa0964: cmp     r12d,0x1
0x140aa0968: setne   al
0x140aa096b: mov     BYTE PTR [rsp+0x20],al
0x140aa096f: xor     r9d,r9d
0x140aa0972: lea     r8,[rsp+0x68]
0x140aa0977: mov     edx,esi
0x140aa0979: lea     rcx,[rip+0x1a6e3f8]        # 0x14250ed78
0x140aa0980: call    0x140146430
0x140aa0985: lea     rdx,[rsp+0x68]
0x140aa098a: mov     rcx,rbx
0x140aa098d: call    0x1400bb340
0x140aa0992: jmp     0x140aa1b0b
0x140aa0997: mov     r8d,0x5
0x140aa099d: lea     rdx,[rip+0xb90160]        # 0x141630b04 ; literal='plant'
0x140aa09a4: mov     rcx,rbx
0x140aa09a7: call    0x140071040
0x140aa09ac: cmp     r12d,0x1
0x140aa09b0: je      0x140aa1b47
0x140aa09b6: lea     rdx,[rip+0xb63b33]        # 0x1416044f0 ; literal='s'
0x140aa09bd: mov     rcx,rbx
0x140aa09c0: call    0x140070b90
0x140aa09c5: jmp     0x140aa1b0b
0x140aa09ca: test    DWORD PTR [rbp+0x1f0],0x100
0x140aa09d4: je      0x140aa09eb
0x140aa09d6: mov     r8d,0x7
0x140aa09dc: lea     rdx,[rip+0xc4feb5]        # 0x1416f0898 ; literal='rotten '
0x140aa09e3: mov     rcx,rbx
0x140aa09e6: call    0x140071040
0x140aa09eb: mov     r15d,0x4
0x140aa09f1: mov     r8d,r15d
0x140aa09f4: lea     rdx,[rip+0xc50155]        # 0x1416f0b50 ; literal='raw '
0x140aa09fb: mov     rcx,rbx
0x140aa09fe: call    0x140071040
0x140aa0a03: cmp     di,0xffff
0x140aa0a07: je      0x140aa0ba1
0x140aa0a0d: xor     eax,eax
0x140aa0a0f: mov     QWORD PTR [rsp+0x78],rax
0x140aa0a14: lea     rax,[rsp+0x68]
0x140aa0a19: cmp     QWORD PTR [rbp-0x80],0xf
0x140aa0a1e: cmova   rax,QWORD PTR [rsp+0x68]
0x140aa0a24: mov     BYTE PTR [rax],0x0
0x140aa0a27: cmp     si,0xffff
0x140aa0a2b: je      0x140aa0aab
0x140aa0a2d: test    di,di
0x140aa0a30: js      0x140aa0af4
0x140aa0a36: mov     rcx,QWORD PTR [rip+0x1a6e4ab]        # 0x14250eee8
0x140aa0a3d: mov     rax,QWORD PTR [rip+0x1a6e4ac]        # 0x14250eef0
0x140aa0a44: sub     rax,rcx
0x140aa0a47: sar     rax,0x3
0x140aa0a4b: cmp     rdi,rax
0x140aa0a4e: jae     0x140aa0ab0
0x140aa0a50: test    si,si
0x140aa0a53: js      0x140aa0ab0
0x140aa0a55: mov     rax,QWORD PTR [rcx+rdi*8]
0x140aa0a59: mov     rdx,QWORD PTR [rax+0x178]
0x140aa0a60: movsx   rcx,si
0x140aa0a64: mov     rax,QWORD PTR [rax+0x180]
0x140aa0a6b: sub     rax,rdx
0x140aa0a6e: sar     rax,0x3
0x140aa0a72: cmp     rcx,rax
0x140aa0a75: jae     0x140aa0ab0
0x140aa0a77: mov     rdx,QWORD PTR [rdx+rcx*8]
0x140aa0a7b: add     rdx,0x20
0x140aa0a7f: lea     rax,[rsp+0x68]
0x140aa0a84: cmp     rax,rdx
0x140aa0a87: je      0x140aa0aa1
0x140aa0a89: mov     r8,QWORD PTR [rdx+0x10]
0x140aa0a8d: cmp     QWORD PTR [rdx+0x18],0xf
0x140aa0a92: jbe     0x140aa0a97
0x140aa0a94: mov     rdx,QWORD PTR [rdx]
0x140aa0a97: lea     rcx,[rsp+0x68]
0x140aa0a9c: call    0x140070f00
0x140aa0aa1: cmp     QWORD PTR [rsp+0x78],0x0
0x140aa0aa7: jbe     0x140aa0ab0
0x140aa0aa9: jmp     0x140aa0af4
0x140aa0aab: test    di,di
0x140aa0aae: js      0x140aa0af4
0x140aa0ab0: mov     rdx,QWORD PTR [rip+0x1a6e431]        # 0x14250eee8
0x140aa0ab7: mov     rax,QWORD PTR [rip+0x1a6e432]        # 0x14250eef0
0x140aa0abe: sub     rax,rdx
0x140aa0ac1: sar     rax,0x3
0x140aa0ac5: cmp     rdi,rax
0x140aa0ac8: jae     0x140aa0af4
0x140aa0aca: mov     rdx,QWORD PTR [rdx+rdi*8]
0x140aa0ace: add     rdx,0x20
0x140aa0ad2: lea     rax,[rsp+0x68]
0x140aa0ad7: cmp     rax,rdx
0x140aa0ada: je      0x140aa0af4
0x140aa0adc: mov     r8,QWORD PTR [rdx+0x10]
0x140aa0ae0: cmp     QWORD PTR [rdx+0x18],0xf
0x140aa0ae5: jbe     0x140aa0aea
0x140aa0ae7: mov     rdx,QWORD PTR [rdx]
0x140aa0aea: lea     rcx,[rsp+0x68]
0x140aa0aef: call    0x140070f00
0x140aa0af4: lea     rdx,[rsp+0x68]
0x140aa0af9: cmp     QWORD PTR [rbp-0x80],0xf
0x140aa0afe: cmova   rdx,QWORD PTR [rsp+0x68]
0x140aa0b04: mov     r8,QWORD PTR [rsp+0x78]
0x140aa0b09: mov     rcx,rbx
0x140aa0b0c: call    0x140071040
0x140aa0b11: test    di,di
0x140aa0b14: js      0x140aa0b63
0x140aa0b16: mov     rcx,QWORD PTR [rip+0x1a6e3cb]        # 0x14250eee8
0x140aa0b1d: mov     rax,QWORD PTR [rip+0x1a6e3cc]        # 0x14250eef0
0x140aa0b24: sub     rax,rcx
0x140aa0b27: sar     rax,0x3
0x140aa0b2b: cmp     rdi,rax
0x140aa0b2e: jae     0x140aa0b63
0x140aa0b30: test    si,si
0x140aa0b33: js      0x140aa0b63
0x140aa0b35: mov     rax,QWORD PTR [rcx+rdi*8]
0x140aa0b39: mov     rcx,QWORD PTR [rax+0x178]
0x140aa0b40: movzx   edx,si
0x140aa0b43: mov     rax,QWORD PTR [rax+0x180]
0x140aa0b4a: sub     rax,rcx
0x140aa0b4d: sar     rax,0x3
0x140aa0b51: cmp     rdx,rax
0x140aa0b54: jae     0x140aa0b63
0x140aa0b56: mov     rax,QWORD PTR [rcx+rdx*8]
0x140aa0b5a: movzx   ecx,BYTE PTR [rax+0x15b8]
0x140aa0b61: jmp     0x140aa0b65
0x140aa0b63: mov     cl,0xff
0x140aa0b65: movsx   ecx,cl
0x140aa0b68: test    ecx,ecx
0x140aa0b6a: je      0x140aa0b8b
0x140aa0b6c: cmp     ecx,0x1
0x140aa0b6f: jne     0x140aa1b0b
0x140aa0b75: lea     rdx,[rip+0xb63818]        # 0x141604394 ; literal=', '
0x140aa0b7c: mov     rcx,rbx
0x140aa0b7f: call    0x140070b90
0x140aa0b84: mov     dl,0xb
0x140aa0b86: jmp     0x140aa1b03
0x140aa0b8b: lea     rdx,[rip+0xb63802]        # 0x141604394 ; literal=', '
0x140aa0b92: mov     rcx,rbx
0x140aa0b95: call    0x140070b90
0x140aa0b9a: mov     dl,0xc
0x140aa0b9c: jmp     0x140aa1b03
0x140aa0ba1: mov     r8,r15
0x140aa0ba4: lea     rdx,[rip+0xc20df5]        # 0x1416c19a0 ; literal='fish'
0x140aa0bab: mov     rcx,rbx
0x140aa0bae: call    0x140071040
0x140aa0bb3: jmp     0x140aa1b0b
0x140aa0bb8: test    DWORD PTR [rbp+0x1f0],0x100
0x140aa0bc2: je      0x140aa0be0
0x140aa0bc4: mov     r8d,0x7
0x140aa0bca: lea     rdx,[rip+0xc4fcc7]        # 0x1416f0898 ; literal='rotten '
0x140aa0bd1: mov     rcx,rbx
0x140aa0bd4: call    0x140071040
0x140aa0bd9: mov     rcx,QWORD PTR [rbp-0x80]
0x140aa0bdd: xor     r9d,r9d
0x140aa0be0: cmp     di,0xffff
0x140aa0be4: je      0x140aa0d00
0x140aa0bea: mov     QWORD PTR [rsp+0x78],r9
0x140aa0bef: lea     rax,[rsp+0x68]
0x140aa0bf4: cmp     rcx,0xf
0x140aa0bf8: cmova   rax,QWORD PTR [rsp+0x68]
0x140aa0bfe: mov     BYTE PTR [rax],0x0
0x140aa0c01: cmp     si,0xffff
0x140aa0c05: je      0x140aa0c85
0x140aa0c07: test    di,di
0x140aa0c0a: js      0x140aa0cce
0x140aa0c10: mov     rcx,QWORD PTR [rip+0x1a6e2d1]        # 0x14250eee8
0x140aa0c17: mov     rax,QWORD PTR [rip+0x1a6e2d2]        # 0x14250eef0
0x140aa0c1e: sub     rax,rcx
0x140aa0c21: sar     rax,0x3
0x140aa0c25: cmp     rdi,rax
0x140aa0c28: jae     0x140aa0c8a
0x140aa0c2a: test    si,si
0x140aa0c2d: js      0x140aa0c8a
0x140aa0c2f: mov     rax,QWORD PTR [rcx+rdi*8]
0x140aa0c33: mov     rdx,QWORD PTR [rax+0x178]
0x140aa0c3a: movsx   rcx,si
0x140aa0c3e: mov     rax,QWORD PTR [rax+0x180]
0x140aa0c45: sub     rax,rdx
0x140aa0c48: sar     rax,0x3
0x140aa0c4c: cmp     rcx,rax
0x140aa0c4f: jae     0x140aa0c8a
0x140aa0c51: mov     rdx,QWORD PTR [rdx+rcx*8]
0x140aa0c55: add     rdx,0x20
0x140aa0c59: lea     rax,[rsp+0x68]
0x140aa0c5e: cmp     rax,rdx
0x140aa0c61: je      0x140aa0c7b
0x140aa0c63: mov     r8,QWORD PTR [rdx+0x10]
0x140aa0c67: cmp     QWORD PTR [rdx+0x18],0xf
0x140aa0c6c: jbe     0x140aa0c71
0x140aa0c6e: mov     rdx,QWORD PTR [rdx]
0x140aa0c71: lea     rcx,[rsp+0x68]
0x140aa0c76: call    0x140070f00
0x140aa0c7b: cmp     QWORD PTR [rsp+0x78],0x0
0x140aa0c81: jbe     0x140aa0c8a
0x140aa0c83: jmp     0x140aa0cce
0x140aa0c85: test    di,di
0x140aa0c88: js      0x140aa0cce
0x140aa0c8a: mov     rdx,QWORD PTR [rip+0x1a6e257]        # 0x14250eee8
0x140aa0c91: mov     rax,QWORD PTR [rip+0x1a6e258]        # 0x14250eef0
0x140aa0c98: sub     rax,rdx
0x140aa0c9b: sar     rax,0x3
0x140aa0c9f: cmp     rdi,rax
0x140aa0ca2: jae     0x140aa0cce
0x140aa0ca4: mov     rdx,QWORD PTR [rdx+rdi*8]
0x140aa0ca8: add     rdx,0x20
0x140aa0cac: lea     rax,[rsp+0x68]
0x140aa0cb1: cmp     rax,rdx
0x140aa0cb4: je      0x140aa0cce
0x140aa0cb6: mov     r8,QWORD PTR [rdx+0x10]
0x140aa0cba: cmp     QWORD PTR [rdx+0x18],0xf
0x140aa0cbf: jbe     0x140aa0cc4
0x140aa0cc1: mov     rdx,QWORD PTR [rdx]
0x140aa0cc4: lea     rcx,[rsp+0x68]
0x140aa0cc9: call    0x140070f00
0x140aa0cce: lea     rdx,[rsp+0x68]
0x140aa0cd3: cmp     QWORD PTR [rbp-0x80],0xf
0x140aa0cd8: cmova   rdx,QWORD PTR [rsp+0x68]
0x140aa0cde: mov     r8,QWORD PTR [rsp+0x78]
0x140aa0ce3: mov     rcx,rbx
0x140aa0ce6: call    0x140071040
0x140aa0ceb: mov     r8d,0x1
0x140aa0cf1: lea     rdx,[rip+0xb62cf8]        # 0x1416039f0 ; literal=' '
0x140aa0cf8: mov     rcx,rbx
0x140aa0cfb: call    0x140071040
0x140aa0d00: mov     r8d,0x3
0x140aa0d06: lea     rdx,[rip+0xc4fddf]        # 0x1416f0aec ; literal='egg'
0x140aa0d0d: mov     rcx,rbx
0x140aa0d10: call    0x140071040
0x140aa0d15: jmp     0x140aa1b0b
0x140aa0d1a: test    DWORD PTR [rbp+0x1f0],0x100
0x140aa0d24: je      0x140aa0d42
0x140aa0d26: mov     r8d,0x7
0x140aa0d2c: lea     rdx,[rip+0xc4fb65]        # 0x1416f0898 ; literal='rotten '
0x140aa0d33: mov     rcx,rbx
0x140aa0d36: call    0x140071040
0x140aa0d3b: mov     rcx,QWORD PTR [rbp-0x80]
0x140aa0d3f: xor     r9d,r9d
0x140aa0d42: cmp     di,0xffff
0x140aa0d46: je      0x140aa0e2b
0x140aa0d4c: mov     QWORD PTR [rsp+0x78],r9
0x140aa0d51: lea     rax,[rsp+0x68]
0x140aa0d56: cmp     rcx,0xf
0x140aa0d5a: cmova   rax,QWORD PTR [rsp+0x68]
0x140aa0d60: mov     BYTE PTR [rax],0x0
0x140aa0d63: cmp     si,0xffff
0x140aa0d67: je      0x140aa0de1
0x140aa0d69: test    di,di
0x140aa0d6c: js      0x140aa0de1
0x140aa0d6e: mov     rcx,QWORD PTR [rip+0x1a6e173]        # 0x14250eee8
0x140aa0d75: mov     rax,QWORD PTR [rip+0x1a6e174]        # 0x14250eef0
0x140aa0d7c: sub     rax,rcx
0x140aa0d7f: sar     rax,0x3
0x140aa0d83: cmp     rdi,rax
0x140aa0d86: jae     0x140aa0de1
0x140aa0d88: test    si,si
0x140aa0d8b: js      0x140aa0de1
0x140aa0d8d: mov     rax,QWORD PTR [rcx+rdi*8]
0x140aa0d91: mov     rdx,QWORD PTR [rax+0x178]
0x140aa0d98: movsx   rcx,si
0x140aa0d9c: mov     rax,QWORD PTR [rax+0x180]
0x140aa0da3: sub     rax,rdx
0x140aa0da6: sar     rax,0x3
0x140aa0daa: cmp     rcx,rax
0x140aa0dad: jae     0x140aa0de1
0x140aa0daf: mov     rdx,QWORD PTR [rdx+rcx*8]
0x140aa0db3: add     rdx,0x20
0x140aa0db7: lea     rax,[rsp+0x68]
0x140aa0dbc: cmp     rax,rdx
0x140aa0dbf: je      0x140aa0dd9
0x140aa0dc1: mov     r8,QWORD PTR [rdx+0x10]
0x140aa0dc5: cmp     QWORD PTR [rdx+0x18],0xf
0x140aa0dca: jbe     0x140aa0dcf
0x140aa0dcc: mov     rdx,QWORD PTR [rdx]
0x140aa0dcf: lea     rcx,[rsp+0x68]
0x140aa0dd4: call    0x140070f00
0x140aa0dd9: cmp     QWORD PTR [rsp+0x78],0x0
0x140aa0ddf: ja      0x140aa0e01
0x140aa0de1: mov     BYTE PTR [rsp+0x20],0x0
0x140aa0de6: mov     r9d,0x1
0x140aa0dec: movzx   r8d,di
0x140aa0df0: lea     rdx,[rsp+0x68]
0x140aa0df5: lea     rcx,[rip+0x1a6e0cc]        # 0x14250eec8
0x140aa0dfc: call    0x14025a490
0x140aa0e01: lea     rdx,[rsp+0x68]
0x140aa0e06: mov     rcx,rbx
0x140aa0e09: call    0x1400bb340
0x140aa0e0e: movzx   r8d,si
0x140aa0e12: movzx   edx,di
0x140aa0e15: lea     rcx,[rip+0x1a6e0ac]        # 0x14250eec8
0x140aa0e1c: call    0x1400f3d20
0x140aa0e21: movsx   ecx,al
0x140aa0e24: test    al,al
0x140aa0e26: jmp     0x140aa0b6a
0x140aa0e2b: lea     rdx,[rip+0xc20b6e]        # 0x1416c19a0 ; literal='fish'
0x140aa0e32: mov     rcx,rbx
0x140aa0e35: call    0x140070b90
0x140aa0e3a: jmp     0x140aa1b0b
0x140aa0e3f: mov     rcx,rbx
0x140aa0e42: cmp     di,0xffff
0x140aa0e46: je      0x140aa0e81
0x140aa0e48: lea     rdx,[rip+0xc4fca1]        # 0x1416f0af0 ; literal='live '
0x140aa0e4f: call    0x140070b90
0x140aa0e54: mov     r9d,0xffffffff
0x140aa0e5a: cmp     r12d,0x1
0x140aa0e5e: setne   r8b
0x140aa0e62: lea     rdx,[rsp+0x68]
0x140aa0e67: movzx   ecx,di
0x140aa0e6a: call    0x140abd670
0x140aa0e6f: lea     rdx,[rsp+0x68]
0x140aa0e74: mov     rcx,rbx
0x140aa0e77: call    0x1400bb340
0x140aa0e7c: jmp     0x140aa1b0b
0x140aa0e81: lea     rdx,[rip+0xc4fc70]        # 0x1416f0af8 ; literal='small live animal'
0x140aa0e88: call    0x140070b90
0x140aa0e8d: jmp     0x140aa1afb
0x140aa0e92: mov     rcx,rbx
0x140aa0e95: cmp     di,0xffff
0x140aa0e99: je      0x140aa0ea4
0x140aa0e9b: lea     rdx,[rip+0xc4fc6a]        # 0x1416f0b0c ; literal='tame '
0x140aa0ea2: jmp     0x140aa0e4f
0x140aa0ea4: lea     rdx,[rip+0xc4fc05]        # 0x1416f0ab0 ; literal='small tame animal'
0x140aa0eab: call    0x140070b90
0x140aa0eb0: jmp     0x140aa1afb
0x140aa0eb5: mov     r8d,0xd
0x140aa0ebb: lea     rdx,[rip+0xc4fc06]        # 0x1416f0ac8 ; literal='prepared meal'
0x140aa0ec2: jmp     0x140aa1af3
0x140aa0ec7: mov     r14d,DWORD PTR [rbp+0x1f0]
0x140aa0ece: bt      r14d,0x8
0x140aa0ed3: jae     0x140aa0ee4
0x140aa0ed5: lea     rdx,[rip+0xc4f9bc]        # 0x1416f0898 ; literal='rotten '
0x140aa0edc: mov     rcx,rbx
0x140aa0edf: call    0x140070b90
0x140aa0ee4: test    r14b,0x4
0x140aa0ee8: je      0x140aa0ef9
0x140aa0eea: lea     rdx,[rip+0xc4fbe7]        # 0x1416f0ad8 ; literal='preserved '
0x140aa0ef1: mov     rcx,rbx
0x140aa0ef4: call    0x140070b90
0x140aa0ef9: cmp     di,0xffff
0x140aa0efd: je      0x140aa100a
0x140aa0f03: cmp     esi,0xffffffff
0x140aa0f06: je      0x140aa100a
0x140aa0f0c: mov     r8d,esi
0x140aa0f0f: movzx   edx,di
0x140aa0f12: lea     rcx,[rip+0x1952a57]        # 0x1423f3970
0x140aa0f19: call    0x1414c6fe0
0x140aa0f1e: mov     r14,rax
0x140aa0f21: test    rax,rax
0x140aa0f24: je      0x140aa0ff6
0x140aa0f2a: cmp     QWORD PTR [rax+0x2f8],0x0
0x140aa0f32: je      0x140aa0f4d
0x140aa0f34: lea     rdx,[rax+0x2e8]
0x140aa0f3b: mov     rcx,rbx
0x140aa0f3e: call    0x1400bb340
0x140aa0f43: mov     dl,0x20
0x140aa0f45: mov     rcx,rbx
0x140aa0f48: call    0x1400bb1b0
0x140aa0f4d: mov     r8d,esi
0x140aa0f50: movzx   edx,di
0x140aa0f53: call    0x14071b3a0
0x140aa0f58: cmp     eax,0xffffffff
0x140aa0f5b: je      0x140aa0f8a
0x140aa0f5d: mov     r9d,0xffffffff
0x140aa0f63: xor     r8d,r8d
0x140aa0f66: lea     rdx,[rsp+0x68]
0x140aa0f6b: movzx   ecx,ax
0x140aa0f6e: call    0x140abd670
0x140aa0f73: lea     rdx,[rsp+0x68]
0x140aa0f78: mov     rcx,rbx
0x140aa0f7b: call    0x1400bb340
0x140aa0f80: mov     dl,0x20
0x140aa0f82: mov     rcx,rbx
0x140aa0f85: call    0x1400bb1b0
0x140aa0f8a: mov     rcx,rbx
0x140aa0f8d: cmp     QWORD PTR [r14+0x2b8],0x0
0x140aa0f95: jne     0x140aa0fce
0x140aa0f97: lea     rdx,[r14+0xb8]
0x140aa0f9e: call    0x1400bb340
0x140aa0fa3: mov     rcx,rbx
0x140aa0fa6: cmp     r12d,0x1
0x140aa0faa: jle     0x140aa0fbd
0x140aa0fac: lea     rdx,[rip+0xc4fb31]        # 0x1416f0ae4 ; literal=' chops'
0x140aa0fb3: call    0x140070b90
0x140aa0fb8: jmp     0x140aa1b11
0x140aa0fbd: lea     rdx,[rip+0xc4fac0]        # 0x1416f0a84 ; literal=' chop'
0x140aa0fc4: call    0x140070b90
0x140aa0fc9: jmp     0x140aa1b47
0x140aa0fce: cmp     r12d,0x1
0x140aa0fd2: jne     0x140aa0fe5
0x140aa0fd4: lea     rdx,[r14+0x2a8]
0x140aa0fdb: call    0x1400bb340
0x140aa0fe0: jmp     0x140aa1b47
0x140aa0fe5: lea     rdx,[r14+0x2c8]
0x140aa0fec: call    0x1400bb340
0x140aa0ff1: jmp     0x140aa1b0b
0x140aa0ff6: lea     rdx,[rip+0xc4fa8f]        # 0x1416f0a8c ; literal='meat'
0x140aa0ffd: mov     rcx,rbx
0x140aa1000: call    0x140070b90
0x140aa1005: jmp     0x140aa1b0b
0x140aa100a: mov     r8d,0x4
0x140aa1010: lea     rdx,[rip+0xc4fa75]        # 0x1416f0a8c ; literal='meat'
0x140aa1017: mov     rcx,rbx
0x140aa101a: call    0x140071040
0x140aa101f: jmp     0x140aa1b0b
0x140aa1024: mov     rcx,QWORD PTR [rip+0x1a6df85]        # 0x14250efb0
0x140aa102b: mov     r8,QWORD PTR [rip+0x1a6df76]        # 0x14250efa8
0x140aa1032: sub     rcx,r8
0x140aa1035: sar     rcx,0x3
0x140aa1039: sub     ecx,0x1
0x140aa103c: movsxd  rdx,ecx
0x140aa103f: js      0x140aa1054
0x140aa1041: mov     rax,QWORD PTR [r8+rdx*8]
0x140aa1045: cmp     WORD PTR [rax+0x28],r15w
0x140aa104a: je      0x140aa10b6
0x140aa104c: dec     ecx
0x140aa104e: sub     rdx,0x1
0x140aa1052: jns     0x140aa1041
0x140aa1054: mov     eax,DWORD PTR [rbp+0x220]
0x140aa105a: cmp     di,0xffff
0x140aa105e: jne     0x140aa1064
0x140aa1060: test    eax,eax
0x140aa1062: je      0x140aa10a2
0x140aa1064: mov     WORD PTR [rsp+0x30],r9w
0x140aa106a: mov     BYTE PTR [rsp+0x28],0x1
0x140aa106f: mov     DWORD PTR [rsp+0x20],eax
0x140aa1073: mov     r9d,esi
0x140aa1076: movzx   r8d,di
0x140aa107a: lea     rdx,[rsp+0x68]
0x140aa107f: lea     rcx,[rip+0x19528ea]        # 0x1423f3970
0x140aa1086: call    0x1414eab90
0x140aa108b: lea     rdx,[rsp+0x68]
0x140aa1090: mov     rcx,rbx
0x140aa1093: call    0x1400bb340
0x140aa1098: mov     dl,0x20
0x140aa109a: mov     rcx,rbx
0x140aa109d: call    0x1400bb1b0
0x140aa10a2: lea     rdx,[rip+0xc49fab]        # 0x1416eb054 ; literal='weapon'
0x140aa10a9: mov     rcx,rbx
0x140aa10ac: call    0x140070b90
0x140aa10b1: jmp     0x140aa1afb
0x140aa10b6: movsxd  rax,ecx
0x140aa10b9: mov     r14,QWORD PTR [r8+rax*8]
0x140aa10bd: test    r14,r14
0x140aa10c0: je      0x140aa1054
0x140aa10c2: cmp     QWORD PTR [r14+0xb8],0x0
0x140aa10ca: je      0x140aa10ed
0x140aa10cc: lea     rdx,[r14+0xa8]
0x140aa10d3: mov     rcx,rbx
0x140aa10d6: call    0x1400bb340
0x140aa10db: lea     rdx,[rip+0xb6290e]        # 0x1416039f0 ; literal=' '
0x140aa10e2: mov     rcx,rbx
0x140aa10e5: call    0x140070b90
0x140aa10ea: xor     r9d,r9d
0x140aa10ed: cmp     di,0xffff
0x140aa10f1: mov     eax,DWORD PTR [rbp+0x220]
0x140aa10f7: jne     0x140aa10fd
0x140aa10f9: test    eax,eax
0x140aa10fb: je      0x140aa113b
0x140aa10fd: mov     WORD PTR [rsp+0x30],r9w
0x140aa1103: mov     BYTE PTR [rsp+0x28],0x1
0x140aa1108: mov     DWORD PTR [rsp+0x20],eax
0x140aa110c: mov     r9d,esi
0x140aa110f: movzx   r8d,di
0x140aa1113: lea     rdx,[rsp+0x68]
0x140aa1118: lea     rcx,[rip+0x1952851]        # 0x1423f3970
0x140aa111f: call    0x1414eab90
0x140aa1124: lea     rdx,[rsp+0x68]
0x140aa1129: mov     rcx,rbx
0x140aa112c: call    0x1400bb340
0x140aa1131: mov     dl,0x20
0x140aa1133: mov     rcx,rbx
0x140aa1136: call    0x1400bb1b0
0x140aa113b: cmp     r12d,0x1
0x140aa113f: lea     rdx,[r14+0x88]
0x140aa1146: jne     0x140aa0e74
0x140aa114c: lea     rdx,[r14+0x68]
0x140aa1150: mov     rcx,rbx
0x140aa1153: call    0x1400bb340
0x140aa1158: jmp     0x140aa1b0b
0x140aa115d: test    r13,r13
0x140aa1160: je      0x140aa117b
0x140aa1162: lea     rdx,[rbp-0x78]
0x140aa1166: mov     rcx,rbx
0x140aa1169: call    0x1400bb340
0x140aa116e: mov     dl,0x20
0x140aa1170: mov     rcx,rbx
0x140aa1173: call    0x1400bb1b0
0x140aa1178: xor     r9d,r9d
0x140aa117b: mov     rcx,QWORD PTR [rip+0x1a6e116]        # 0x14250f298
0x140aa1182: mov     r14,QWORD PTR [rip+0x1a6e107]        # 0x14250f290
0x140aa1189: sub     rcx,r14
0x140aa118c: sar     rcx,0x3
0x140aa1190: sub     ecx,0x1
0x140aa1193: movsxd  rdx,ecx
0x140aa1196: js      0x140aa11b3
0x140aa1198: nop     DWORD PTR [rax+rax*1+0x0]
0x140aa11a0: mov     rax,QWORD PTR [r14+rdx*8]
0x140aa11a4: cmp     WORD PTR [rax+0x28],r15w
0x140aa11a9: je      0x140aa122a
0x140aa11ab: dec     ecx
0x140aa11ad: sub     rdx,0x1
0x140aa11b1: jns     0x140aa11a0
0x140aa11b3: mov     eax,DWORD PTR [rbp+0x220]
0x140aa11b9: cmp     di,0xffff
0x140aa11bd: jne     0x140aa11c3
0x140aa11bf: test    eax,eax
0x140aa11c1: je      0x140aa1201
0x140aa11c3: mov     WORD PTR [rsp+0x30],r9w
0x140aa11c9: mov     BYTE PTR [rsp+0x28],0x1
0x140aa11ce: mov     DWORD PTR [rsp+0x20],eax
0x140aa11d2: mov     r9d,esi
0x140aa11d5: movzx   r8d,di
0x140aa11d9: lea     rdx,[rsp+0x68]
0x140aa11de: lea     rcx,[rip+0x195278b]        # 0x1423f3970
0x140aa11e5: call    0x1414eab90
0x140aa11ea: lea     rdx,[rsp+0x68]
0x140aa11ef: mov     rcx,rbx
0x140aa11f2: call    0x1400bb340
0x140aa11f7: mov     dl,0x20
0x140aa11f9: mov     rcx,rbx
0x140aa11fc: call    0x1400bb1b0
0x140aa1201: cmp     r12d,0x1
0x140aa1205: jle     0x140aa1216
0x140aa1207: lea     rdx,[rip+0xc4f892]        # 0x1416f0aa0 ; literal='suits of '
0x140aa120e: mov     rcx,rbx
0x140aa1211: call    0x140070b90
0x140aa1216: lea     rdx,[rip+0xc49e3f]        # 0x1416eb05c ; literal='armor'
0x140aa121d: mov     rcx,rbx
0x140aa1220: call    0x140070b90
0x140aa1225: jmp     0x140aa1b0b
0x140aa122a: movsxd  rax,ecx
0x140aa122d: mov     r14,QWORD PTR [r14+rax*8]
0x140aa1231: test    r14,r14
0x140aa1234: je      0x140aa11b3
0x140aa123a: cmp     r12d,0x1
0x140aa123e: jle     0x140aa1263
0x140aa1240: cmp     QWORD PTR [r14+0xb8],0x0
0x140aa1248: je      0x140aa1263
0x140aa124a: lea     rdx,[r14+0xa8]
0x140aa1251: mov     rcx,rbx
0x140aa1254: call    0x1400bb340
0x140aa1259: mov     dl,0x20
0x140aa125b: mov     rcx,rbx
0x140aa125e: call    0x1400bb1b0
0x140aa1263: cmp     QWORD PTR [r14+0xf8],0x0
0x140aa126b: je      0x140aa128b
0x140aa126d: lea     rdx,[r14+0xe8]
0x140aa1274: mov     rcx,rbx
0x140aa1277: call    0x1400bb340
0x140aa127c: lea     rdx,[rip+0xb6276d]        # 0x1416039f0 ; literal=' '
0x140aa1283: mov     rcx,rbx
0x140aa1286: call    0x140070b90
0x140aa128b: mov     eax,DWORD PTR [rbp+0x220]
0x140aa1291: cmp     di,0xffff
0x140aa1295: jne     0x140aa12ae
0x140aa1297: test    eax,eax
0x140aa1299: jne     0x140aa12ae
0x140aa129b: cmp     QWORD PTR [r14+0xd8],0x0
0x140aa12a3: je      0x140aa12ed
0x140aa12a5: lea     rdx,[r14+0xc8]
0x140aa12ac: jmp     0x140aa12db
0x140aa12ae: xor     ecx,ecx
0x140aa12b0: mov     WORD PTR [rsp+0x30],cx
0x140aa12b5: mov     BYTE PTR [rsp+0x28],0x1
0x140aa12ba: mov     DWORD PTR [rsp+0x20],eax
0x140aa12be: mov     r9d,esi
0x140aa12c1: movzx   r8d,di
0x140aa12c5: lea     rdx,[rsp+0x68]
0x140aa12ca: lea     rcx,[rip+0x195269f]        # 0x1423f3970
0x140aa12d1: call    0x1414eab90
0x140aa12d6: lea     rdx,[rsp+0x68]
0x140aa12db: mov     rcx,rbx
0x140aa12de: call    0x1400bb340
0x140aa12e3: mov     dl,0x20
0x140aa12e5: mov     rcx,rbx
0x140aa12e8: call    0x1400bb1b0
0x140aa12ed: mov     r9d,esi
0x140aa12f0: movzx   r8d,di
0x140aa12f4: mov     edx,0x2f
0x140aa12f9: lea     rcx,[rip+0x1952670]        # 0x1423f3970
0x140aa1300: call    0x141475150
0x140aa1305: test    al,al
0x140aa1307: je      0x140aa113b
0x140aa130d: lea     rcx,[r14+0x118]
0x140aa1314: mov     edx,0x7
0x140aa1319: call    0x1400735c0
0x140aa131e: test    al,al
0x140aa1320: je      0x140aa113b
0x140aa1326: lea     rdx,[rip+0xc4f767]        # 0x1416f0a94 ; literal='chain '
0x140aa132d: mov     rcx,rbx
0x140aa1330: call    0x140070b90
0x140aa1335: jmp     0x140aa113b
0x140aa133a: test    r13,r13
0x140aa133d: je      0x140aa1358
0x140aa133f: lea     rdx,[rbp-0x78]
0x140aa1343: mov     rcx,rbx
0x140aa1346: call    0x1400bb340
0x140aa134b: mov     dl,0x20
0x140aa134d: mov     rcx,rbx
0x140aa1350: call    0x1400bb1b0
0x140aa1355: xor     r9d,r9d
0x140aa1358: mov     rcx,QWORD PTR [rip+0x1a6df81]        # 0x14250f2e0
0x140aa135f: mov     r8,QWORD PTR [rip+0x1a6df72]        # 0x14250f2d8
0x140aa1366: sub     rcx,r8
0x140aa1369: sar     rcx,0x3
0x140aa136d: sub     ecx,0x1
0x140aa1370: movsxd  rdx,ecx
0x140aa1373: js      0x140aa1397
0x140aa1375: data16  data16 nop WORD PTR [rax+rax*1+0x0]
0x140aa1380: mov     rax,QWORD PTR [r8+rdx*8]
0x140aa1384: cmp     WORD PTR [rax+0x28],r15w
0x140aa1389: je      0x140aa14cf
0x140aa138f: dec     ecx
0x140aa1391: sub     rdx,0x1
0x140aa1395: jns     0x140aa1380
0x140aa1397: mov     r13,r9
0x140aa139a: mov     eax,DWORD PTR [rbp+0x220]
0x140aa13a0: cmp     di,0xffff
0x140aa13a4: jne     0x140aa13aa
0x140aa13a6: test    eax,eax
0x140aa13a8: je      0x140aa13f9
0x140aa13aa: xor     ecx,ecx
0x140aa13ac: mov     WORD PTR [rsp+0x30],cx
0x140aa13b1: mov     BYTE PTR [rsp+0x28],0x1
0x140aa13b6: mov     DWORD PTR [rsp+0x20],eax
0x140aa13ba: mov     r9d,esi
0x140aa13bd: movzx   r8d,di
0x140aa13c1: lea     rdx,[rsp+0x68]
0x140aa13c6: lea     rcx,[rip+0x19525a3]        # 0x1423f3970
0x140aa13cd: call    0x1414eab90
0x140aa13d2: lea     rdx,[rsp+0x68]
0x140aa13d7: cmp     QWORD PTR [rbp-0x80],0xf
0x140aa13dc: cmova   rdx,QWORD PTR [rsp+0x68]
0x140aa13e2: mov     r8,QWORD PTR [rsp+0x78]
0x140aa13e7: mov     rcx,rbx
0x140aa13ea: call    0x140071040
0x140aa13ef: mov     dl,0x20
0x140aa13f1: mov     rcx,rbx
0x140aa13f4: call    0x1400bb1b0
0x140aa13f9: cmp     r14d,0xffffffff
0x140aa13fd: je      0x140aa1464
0x140aa13ff: mov     edx,r14d
0x140aa1402: lea     rcx,[rip+0x19664c7]        # 0x1424078d0
0x140aa1409: call    0x140073d10
0x140aa140e: test    rax,rax
0x140aa1411: je      0x140aa1464
0x140aa1413: mov     rdx,QWORD PTR [rax]
0x140aa1416: mov     rcx,rax
0x140aa1419: call    QWORD PTR [rdx+0x208]
0x140aa141f: mov     r14,rax
0x140aa1422: test    rax,rax
0x140aa1425: je      0x140aa1464
0x140aa1427: xor     edx,edx
0x140aa1429: mov     rcx,rax
0x140aa142c: call    0x1400735c0
0x140aa1431: test    al,al
0x140aa1433: je      0x140aa1444
0x140aa1435: lea     rdx,[rip+0xbb4e08]        # 0x141656244 ; literal='right '
0x140aa143c: mov     rcx,rbx
0x140aa143f: call    0x140070b90
0x140aa1444: mov     edx,0x1
0x140aa1449: mov     rcx,r14
0x140aa144c: call    0x1400735c0
0x140aa1451: test    al,al
0x140aa1453: je      0x140aa1464
0x140aa1455: lea     rdx,[rip+0xbb4d84]        # 0x1416561e0 ; literal='left '
0x140aa145c: mov     rcx,rbx
0x140aa145f: call    0x140070b90
0x140aa1464: test    r13,r13
0x140aa1467: je      0x140aa1513
0x140aa146d: mov     r9d,esi
0x140aa1470: movzx   r8d,di
0x140aa1474: mov     edx,0x2f
0x140aa1479: lea     rcx,[rip+0x19524f0]        # 0x1423f3970
0x140aa1480: call    0x141475150
0x140aa1485: test    al,al
0x140aa1487: je      0x140aa14ad
0x140aa1489: lea     rcx,[r13+0xe8]
0x140aa1490: mov     edx,0x7
0x140aa1495: call    0x1400735c0
0x140aa149a: test    al,al
0x140aa149c: je      0x140aa14ad
0x140aa149e: lea     rdx,[rip+0xc4f5ef]        # 0x1416f0a94 ; literal='chain '
0x140aa14a5: mov     rcx,rbx
0x140aa14a8: call    0x140070b90
0x140aa14ad: cmp     r12d,0x1
0x140aa14b1: lea     rdx,[r13+0x88]
0x140aa14b8: jne     0x140aa0e74
0x140aa14be: lea     rdx,[r13+0x68]
0x140aa14c2: mov     rcx,rbx
0x140aa14c5: call    0x1400bb340
0x140aa14ca: jmp     0x140aa1b0b
0x140aa14cf: movsxd  rax,ecx
0x140aa14d2: mov     r15,QWORD PTR [r8+rax*8]
0x140aa14d6: mov     r13,r15
0x140aa14d9: test    r15,r15
0x140aa14dc: je      0x140aa139a
0x140aa14e2: cmp     QWORD PTR [r15+0xb8],0x0
0x140aa14ea: je      0x140aa139a
0x140aa14f0: lea     rdx,[r15+0xa8]
0x140aa14f7: mov     rcx,rbx
0x140aa14fa: call    0x1400bb340
0x140aa14ff: lea     rdx,[rip+0xb624ea]        # 0x1416039f0 ; literal=' '
0x140aa1506: mov     rcx,rbx
0x140aa1509: call    0x140070b90
0x140aa150e: jmp     0x140aa139a
0x140aa1513: lea     rdx,[rip+0xc4f52e]        # 0x1416f0a48 ; literal='handwear'
0x140aa151a: mov     rcx,rbx
0x140aa151d: call    0x140070b90
0x140aa1522: jmp     0x140aa1b0b
0x140aa1527: mov     rcx,QWORD PTR [rip+0x1a6dde2]        # 0x14250f310
0x140aa152e: mov     r8,QWORD PTR [rip+0x1a6ddd3]        # 0x14250f308
0x140aa1535: sub     rcx,r8
0x140aa1538: sar     rcx,0x3
0x140aa153c: sub     ecx,0x1
0x140aa153f: movsxd  rdx,ecx
0x140aa1542: js      0x140aa1569
0x140aa1544: mov     rax,QWORD PTR [r8+rdx*8]
0x140aa1548: cmp     WORD PTR [rax+0x28],r15w
0x140aa154d: je      0x140aa1559
0x140aa154f: dec     ecx
0x140aa1551: sub     rdx,0x1
0x140aa1555: jns     0x140aa1544
0x140aa1557: jmp     0x140aa1569
0x140aa1559: movsxd  rax,ecx
0x140aa155c: mov     r14,QWORD PTR [r8+rax*8]
0x140aa1560: test    r14,r14
0x140aa1563: jne     0x140aa10c2
0x140aa1569: mov     eax,DWORD PTR [rbp+0x220]
0x140aa156f: cmp     di,0xffff
0x140aa1573: jne     0x140aa1579
0x140aa1575: test    eax,eax
0x140aa1577: je      0x140aa15b7
0x140aa1579: mov     WORD PTR [rsp+0x30],r9w
0x140aa157f: mov     BYTE PTR [rsp+0x28],0x1
0x140aa1584: mov     DWORD PTR [rsp+0x20],eax
0x140aa1588: mov     r9d,esi
0x140aa158b: movzx   r8d,di
0x140aa158f: lea     rdx,[rsp+0x68]
0x140aa1594: lea     rcx,[rip+0x19523d5]        # 0x1423f3970
0x140aa159b: call    0x1414eab90
0x140aa15a0: lea     rdx,[rsp+0x68]
0x140aa15a5: mov     rcx,rbx
0x140aa15a8: call    0x1400bb340
0x140aa15ad: mov     dl,0x20
0x140aa15af: mov     rcx,rbx
0x140aa15b2: call    0x1400bb1b0
0x140aa15b7: lea     rdx,[rip+0xc49a26]        # 0x1416eafe4 ; literal='shield'
0x140aa15be: mov     rcx,rbx
0x140aa15c1: call    0x140070b90
0x140aa15c6: mov     rcx,rbx
0x140aa15c9: cmp     r12d,0x1
0x140aa15cd: je      0x140aa15ea
0x140aa15cf: mov     dl,0x73
0x140aa15d1: call    0x1400bb1b0
0x140aa15d6: lea     rdx,[rip+0xc4f47b]        # 0x1416f0a58 ; literal='/buckler'
0x140aa15dd: mov     rcx,rbx
0x140aa15e0: call    0x140070b90
0x140aa15e5: jmp     0x140aa1b01
0x140aa15ea: lea     rdx,[rip+0xc4f467]        # 0x1416f0a58 ; literal='/buckler'
0x140aa15f1: call    0x140070b90
0x140aa15f6: jmp     0x140aa1b47
0x140aa15fb: test    r13,r13
0x140aa15fe: je      0x140aa1619
0x140aa1600: lea     rdx,[rbp-0x78]
0x140aa1604: mov     rcx,rbx
0x140aa1607: call    0x1400bb340
0x140aa160c: mov     dl,0x20
0x140aa160e: mov     rcx,rbx
0x140aa1611: call    0x1400bb1b0
0x140aa1616: xor     r9d,r9d
0x140aa1619: mov     rcx,QWORD PTR [rip+0x1a6dcd8]        # 0x14250f2f8
0x140aa1620: mov     r8,QWORD PTR [rip+0x1a6dcc9]        # 0x14250f2f0
0x140aa1627: sub     rcx,r8
0x140aa162a: sar     rcx,0x3
0x140aa162e: sub     ecx,0x1
0x140aa1631: movsxd  rdx,ecx
0x140aa1634: js      0x140aa1657
0x140aa1636: data16  nop WORD PTR [rax+rax*1+0x0]
0x140aa1640: mov     rax,QWORD PTR [r8+rdx*8]
0x140aa1644: cmp     WORD PTR [rax+0x28],r15w
0x140aa1649: je      0x140aa16f7
0x140aa164f: dec     ecx
0x140aa1651: sub     rdx,0x1
0x140aa1655: jns     0x140aa1640
0x140aa1657: mov     r14,r9
0x140aa165a: mov     eax,DWORD PTR [rbp+0x220]
0x140aa1660: cmp     di,0xffff
0x140aa1664: jne     0x140aa166a
0x140aa1666: test    eax,eax
0x140aa1668: je      0x140aa16b9
0x140aa166a: xor     ecx,ecx
0x140aa166c: mov     WORD PTR [rsp+0x30],cx
0x140aa1671: mov     BYTE PTR [rsp+0x28],0x1
0x140aa1676: mov     DWORD PTR [rsp+0x20],eax
0x140aa167a: mov     r9d,esi
0x140aa167d: movzx   r8d,di
0x140aa1681: lea     rdx,[rsp+0x68]
0x140aa1686: lea     rcx,[rip+0x19522e3]        # 0x1423f3970
0x140aa168d: call    0x1414eab90
0x140aa1692: lea     rdx,[rsp+0x68]
0x140aa1697: cmp     QWORD PTR [rbp-0x80],0xf
0x140aa169c: cmova   rdx,QWORD PTR [rsp+0x68]
0x140aa16a2: mov     r8,QWORD PTR [rsp+0x78]
0x140aa16a7: mov     rcx,rbx
0x140aa16aa: call    0x140071040
0x140aa16af: mov     dl,0x20
0x140aa16b1: mov     rcx,rbx
0x140aa16b4: call    0x1400bb1b0
0x140aa16b9: test    r14,r14
0x140aa16bc: je      0x140aa1751
0x140aa16c2: mov     r8d,esi
0x140aa16c5: movzx   edx,di
0x140aa16c8: lea     rcx,[rip+0x19522a1]        # 0x1423f3970
0x140aa16cf: call    0x1414c6fe0
0x140aa16d4: test    rax,rax
0x140aa16d7: je      0x140aa113b
0x140aa16dd: cmp     DWORD PTR [rax+0x298],0x5
0x140aa16e4: jle     0x140aa173b
0x140aa16e6: mov     rax,QWORD PTR [rax+0x290]
0x140aa16ed: cmp     BYTE PTR [rax+0x5],0x0
0x140aa16f1: jge     0x140aa173b
0x140aa16f3: mov     al,0x1
0x140aa16f5: jmp     0x140aa173d
0x140aa16f7: movsxd  rax,ecx
0x140aa16fa: mov     r15,QWORD PTR [r8+rax*8]
0x140aa16fe: mov     r14,r15
0x140aa1701: test    r15,r15
0x140aa1704: je      0x140aa165a
0x140aa170a: cmp     QWORD PTR [r15+0xb8],0x0
0x140aa1712: je      0x140aa165a
0x140aa1718: lea     rdx,[r15+0xa8]
0x140aa171f: mov     rcx,rbx
0x140aa1722: call    0x1400bb340
0x140aa1727: lea     rdx,[rip+0xb622c2]        # 0x1416039f0 ; literal=' '
0x140aa172e: mov     rcx,rbx
0x140aa1731: call    0x140070b90
0x140aa1736: jmp     0x140aa165a
0x140aa173b: xor     al,al
0x140aa173d: test    al,al
0x140aa173f: je      0x140aa113b
0x140aa1745: lea     rcx,[r14+0xe8]
0x140aa174c: jmp     0x140aa1314
0x140aa1751: mov     r8d,0x8
0x140aa1757: lea     rdx,[rip+0xc4f30a]        # 0x1416f0a68 ; literal='footwear'
0x140aa175e: mov     rcx,rbx
0x140aa1761: call    0x140071040
0x140aa1766: jmp     0x140aa1b0b
0x140aa176b: test    r13,r13
0x140aa176e: je      0x140aa1796
0x140aa1770: lea     rdx,[rbp-0x78]
0x140aa1774: cmp     QWORD PTR [rbp-0x60],0xf
0x140aa1779: cmova   rdx,QWORD PTR [rbp-0x78]
0x140aa177e: mov     r8,r13
0x140aa1781: mov     rcx,rbx
0x140aa1784: call    0x140071040
0x140aa1789: mov     dl,0x20
0x140aa178b: mov     rcx,rbx
0x140aa178e: call    0x1400bb1b0
0x140aa1793: xor     r9d,r9d
0x140aa1796: mov     rcx,QWORD PTR [rip+0x1a6db8b]        # 0x14250f328
0x140aa179d: mov     r8,QWORD PTR [rip+0x1a6db7c]        # 0x14250f320
0x140aa17a4: sub     rcx,r8
0x140aa17a7: sar     rcx,0x3
0x140aa17ab: sub     ecx,0x1
0x140aa17ae: movsxd  rdx,ecx
0x140aa17b1: js      0x140aa17d7
0x140aa17b3: nop     DWORD PTR [rax+0x0]
0x140aa17b7: nop     WORD PTR [rax+rax*1+0x0]
0x140aa17c0: mov     rax,QWORD PTR [r8+rdx*8]
0x140aa17c4: cmp     WORD PTR [rax+0x28],r15w
0x140aa17c9: je      0x140aa185c
0x140aa17cf: dec     ecx
0x140aa17d1: sub     rdx,0x1
0x140aa17d5: jns     0x140aa17c0
0x140aa17d7: mov     r14,r9
0x140aa17da: mov     eax,DWORD PTR [rbp+0x220]
0x140aa17e0: cmp     di,0xffff
0x140aa17e4: jne     0x140aa17ea
0x140aa17e6: test    eax,eax
0x140aa17e8: je      0x140aa1839
0x140aa17ea: xor     ecx,ecx
0x140aa17ec: mov     WORD PTR [rsp+0x30],cx
0x140aa17f1: mov     BYTE PTR [rsp+0x28],0x1
0x140aa17f6: mov     DWORD PTR [rsp+0x20],eax
0x140aa17fa: mov     r9d,esi
0x140aa17fd: movzx   r8d,di
0x140aa1801: lea     rdx,[rsp+0x68]
0x140aa1806: lea     rcx,[rip+0x1952163]        # 0x1423f3970
0x140aa180d: call    0x1414eab90
0x140aa1812: lea     rdx,[rsp+0x68]
0x140aa1817: cmp     QWORD PTR [rbp-0x80],0xf
0x140aa181c: cmova   rdx,QWORD PTR [rsp+0x68]
0x140aa1822: mov     r8,QWORD PTR [rsp+0x78]
0x140aa1827: mov     rcx,rbx
0x140aa182a: call    0x140071040
0x140aa182f: mov     dl,0x20
0x140aa1831: mov     rcx,rbx
0x140aa1834: call    0x1400bb1b0
0x140aa1839: test    r14,r14
0x140aa183c: jne     0x140aa16c2
0x140aa1842: mov     r8d,0x8
0x140aa1848: lea     rdx,[rip+0xc4f229]        # 0x1416f0a78 ; literal='headwear'
0x140aa184f: mov     rcx,rbx
0x140aa1852: call    0x140071040
0x140aa1857: jmp     0x140aa1b0b
0x140aa185c: movsxd  rax,ecx
0x140aa185f: mov     r15,QWORD PTR [r8+rax*8]
0x140aa1863: mov     r14,r15
0x140aa1866: test    r15,r15
0x140aa1869: je      0x140aa17da
0x140aa186f: cmp     QWORD PTR [r15+0xb8],0x0
0x140aa1877: je      0x140aa17da
0x140aa187d: lea     rdx,[r15+0xa8]
0x140aa1884: mov     rcx,rbx
0x140aa1887: call    0x1400bb340
0x140aa188c: lea     rdx,[rip+0xb6215d]        # 0x1416039f0 ; literal=' '
0x140aa1893: mov     rcx,rbx
0x140aa1896: call    0x140070b90
0x140aa189b: jmp     0x140aa17da
0x140aa18a0: mov     rcx,QWORD PTR [rip+0x1a6da99]        # 0x14250f340
0x140aa18a7: mov     r14,QWORD PTR [rip+0x1a6da8a]        # 0x14250f338
0x140aa18ae: sub     rcx,r14
0x140aa18b1: sar     rcx,0x3
0x140aa18b5: sub     ecx,r8d
0x140aa18b8: movsxd  rdx,ecx
0x140aa18bb: js      0x140aa18d6
0x140aa18bd: nop     DWORD PTR [rax]
0x140aa18c0: mov     rax,QWORD PTR [r14+rdx*8]
0x140aa18c4: cmp     WORD PTR [rax+0x28],r15w
0x140aa18c9: je      0x140aa195c
0x140aa18cf: dec     ecx
0x140aa18d1: sub     rdx,r8
0x140aa18d4: jns     0x140aa18c0
0x140aa18d6: test    r13,r13
0x140aa18d9: je      0x140aa18f4
0x140aa18db: lea     rdx,[rbp-0x78]
0x140aa18df: mov     rcx,rbx
0x140aa18e2: call    0x1400bb340
0x140aa18e7: mov     dl,0x20
0x140aa18e9: mov     rcx,rbx
0x140aa18ec: call    0x1400bb1b0
0x140aa18f1: xor     r9d,r9d
0x140aa18f4: mov     eax,DWORD PTR [rbp+0x220]
0x140aa18fa: cmp     di,0xffff
0x140aa18fe: jne     0x140aa1904
0x140aa1900: test    eax,eax
0x140aa1902: je      0x140aa1942
0x140aa1904: mov     WORD PTR [rsp+0x30],r9w
0x140aa190a: mov     BYTE PTR [rsp+0x28],0x1
0x140aa190f: mov     DWORD PTR [rsp+0x20],eax
0x140aa1913: mov     r9d,esi
0x140aa1916: movzx   r8d,di
0x140aa191a: lea     rdx,[rsp+0x68]
0x140aa191f: lea     rcx,[rip+0x195204a]        # 0x1423f3970
0x140aa1926: call    0x1414eab90
0x140aa192b: lea     rdx,[rsp+0x68]
0x140aa1930: mov     rcx,rbx
0x140aa1933: call    0x1400bb340
0x140aa1938: mov     dl,0x20
0x140aa193a: mov     rcx,rbx
0x140aa193d: call    0x1400bb1b0
0x140aa1942: mov     r8d,0x7
0x140aa1948: lea     rdx,[rip+0xc4f0a9]        # 0x1416f09f8 ; literal='legwear'
0x140aa194f: mov     rcx,rbx
0x140aa1952: call    0x140071040
0x140aa1957: jmp     0x140aa1b0b
0x140aa195c: movsxd  rax,ecx
0x140aa195f: mov     r14,QWORD PTR [r14+rax*8]
0x140aa1963: test    r14,r14
0x140aa1966: je      0x140aa18d6
0x140aa196c: cmp     r12d,r8d
0x140aa196f: jle     0x140aa1998
0x140aa1971: cmp     QWORD PTR [r14+0xb8],0x0
0x140aa1979: je      0x140aa1998
0x140aa197b: lea     rdx,[r14+0xa8]
0x140aa1982: mov     rcx,rbx
0x140aa1985: call    0x1400bb340
0x140aa198a: mov     dl,0x20
0x140aa198c: mov     rcx,rbx
0x140aa198f: call    0x1400bb1b0
0x140aa1994: mov     r13,QWORD PTR [rbp-0x68]
0x140aa1998: test    r13,r13
0x140aa199b: je      0x140aa19b3
0x140aa199d: lea     rdx,[rbp-0x78]
0x140aa19a1: mov     rcx,rbx
0x140aa19a4: call    0x1400bb340
0x140aa19a9: mov     dl,0x20
0x140aa19ab: mov     rcx,rbx
0x140aa19ae: call    0x1400bb1b0
0x140aa19b3: cmp     QWORD PTR [r14+0xf8],0x0
0x140aa19bb: je      0x140aa19db
0x140aa19bd: lea     rdx,[r14+0xe8]
0x140aa19c4: mov     rcx,rbx
0x140aa19c7: call    0x1400bb340
0x140aa19cc: lea     rdx,[rip+0xb6201d]        # 0x1416039f0 ; literal=' '
0x140aa19d3: mov     rcx,rbx
0x140aa19d6: call    0x140070b90
0x140aa19db: mov     eax,DWORD PTR [rbp+0x220]
0x140aa19e1: cmp     di,0xffff
0x140aa19e5: jne     0x140aa19fe
0x140aa19e7: test    eax,eax
0x140aa19e9: jne     0x140aa19fe
0x140aa19eb: cmp     QWORD PTR [r14+0xd8],0x0
0x140aa19f3: je      0x140aa1a3d
0x140aa19f5: lea     rdx,[r14+0xc8]
0x140aa19fc: jmp     0x140aa1a2b
0x140aa19fe: xor     ecx,ecx
0x140aa1a00: mov     WORD PTR [rsp+0x30],cx
0x140aa1a05: mov     BYTE PTR [rsp+0x28],0x1
0x140aa1a0a: mov     DWORD PTR [rsp+0x20],eax
0x140aa1a0e: mov     r9d,esi
0x140aa1a11: movzx   r8d,di
0x140aa1a15: lea     rdx,[rsp+0x68]
0x140aa1a1a: lea     rcx,[rip+0x1951f4f]        # 0x1423f3970
0x140aa1a21: call    0x1414eab90
0x140aa1a26: lea     rdx,[rsp+0x68]
0x140aa1a2b: mov     rcx,rbx
0x140aa1a2e: call    0x1400bb340
0x140aa1a33: mov     dl,0x20
0x140aa1a35: mov     rcx,rbx
0x140aa1a38: call    0x1400bb1b0
0x140aa1a3d: mov     r8d,esi
0x140aa1a40: movzx   edx,di
0x140aa1a43: lea     rcx,[rip+0x1951f26]        # 0x1423f3970
0x140aa1a4a: call    0x1414c6fe0
0x140aa1a4f: test    rax,rax
0x140aa1a52: je      0x140aa113b
0x140aa1a58: cmp     DWORD PTR [rax+0x298],0x5
0x140aa1a5f: jle     0x140aa1a72
0x140aa1a61: mov     rax,QWORD PTR [rax+0x290]
0x140aa1a68: cmp     BYTE PTR [rax+0x5],0x0
0x140aa1a6c: jge     0x140aa1a72
0x140aa1a6e: mov     al,0x1
0x140aa1a70: jmp     0x140aa1a74
0x140aa1a72: xor     al,al
0x140aa1a74: test    al,al
0x140aa1a76: je      0x140aa113b
0x140aa1a7c: lea     rcx,[r14+0x128]
0x140aa1a83: jmp     0x140aa1314
0x140aa1a88: mov     eax,DWORD PTR [rbp+0x220]
0x140aa1a8e: cmp     di,0xffff
0x140aa1a92: jne     0x140aa1a98
0x140aa1a94: test    eax,eax
0x140aa1a96: je      0x140aa1ae6
0x140aa1a98: mov     WORD PTR [rsp+0x30],r9w
0x140aa1a9e: mov     BYTE PTR [rsp+0x28],r8b
0x140aa1aa3: mov     DWORD PTR [rsp+0x20],eax
0x140aa1aa7: mov     r9d,esi
0x140aa1aaa: movzx   r8d,di
0x140aa1aae: lea     rdx,[rsp+0x68]
0x140aa1ab3: lea     rcx,[rip+0x1951eb6]        # 0x1423f3970
0x140aa1aba: call    0x1414eab90
0x140aa1abf: lea     rdx,[rsp+0x68]
0x140aa1ac4: cmp     QWORD PTR [rbp-0x80],0xf
0x140aa1ac9: cmova   rdx,QWORD PTR [rsp+0x68]
0x140aa1acf: mov     r8,QWORD PTR [rsp+0x78]
0x140aa1ad4: mov     rcx,rbx
0x140aa1ad7: call    0x140071040
0x140aa1adc: mov     dl,0x20
0x140aa1ade: mov     rcx,rbx
0x140aa1ae1: call    0x1400bb1b0
0x140aa1ae6: lea     rdx,[rip+0xb7725b]        # 0x141618d48 ; literal='item'
0x140aa1aed: mov     r8d,0x4
0x140aa1af3: mov     rcx,rbx
0x140aa1af6: call    0x140071040
0x140aa1afb: cmp     r12d,0x1
0x140aa1aff: je      0x140aa1b47
0x140aa1b01: mov     dl,0x73
0x140aa1b03: mov     rcx,rbx
0x140aa1b06: call    0x1400bb1b0
0x140aa1b0b: cmp     r12d,0x1
0x140aa1b0f: jle     0x140aa1b47
0x140aa1b11: mov     r8d,0x2
0x140aa1b17: lea     rdx,[rip+0xb9614e]        # 0x141637c6c ; literal=' ['
0x140aa1b1e: mov     rcx,rbx
0x140aa1b21: call    0x140071040
0x140aa1b26: mov     rdx,rbx
0x140aa1b29: mov     ecx,r12d
0x140aa1b2c: call    0x140545610
0x140aa1b31: mov     r8d,0x1
0x140aa1b37: lea     rdx,[rip+0xb778ca]        # 0x141619408 ; literal=']'
0x140aa1b3e: mov     rcx,rbx
0x140aa1b41: call    0x140071040
0x140aa1b46: nop     
0x140aa1b47: lea     rcx,[rsp+0x68]
0x140aa1b4c: call    0x140070e80
0x140aa1b51: nop     
0x140aa1b52: lea     rcx,[rbp-0x78]
0x140aa1b56: call    0x140070e80
0x140aa1b5b: mov     rcx,QWORD PTR [rbp+0x168]
0x140aa1b62: xor     rcx,rsp
0x140aa1b65: call    0x1415530b0
0x140aa1b6a: add     rsp,0x278
0x140aa1b71: pop     r15
0x140aa1b73: pop     r14
0x140aa1b75: pop     r13
0x140aa1b77: pop     r12
0x140aa1b79: pop     rdi
0x140aa1b7a: pop     rsi
0x140aa1b7b: pop     rbx
0x140aa1b7c: pop     rbp
0x140aa1b7d: ret     
0x140aa1b7e: xchg    ax,ax
0x140aa1b80: jmp     0x1beaac551
0x140aa1b86: test    eax,0xa9d06500
0x140aa1b8b: add     BYTE PTR [rcx+0x1200a9c9],dh
0x140aa1b91: int3    
0x140aa1b92: test    eax,0xa9c88500
0x140aa1b97: add     BYTE PTR [rax],ah
0x140aa1b99: shr     DWORD PTR [rcx-0x562e2a00],1
0x140aa1b9f: add     dl,al
0x140aa1ba1: jmp     FWORD PTR [rcx-0x561adf00]
0x140aa1ba7: add     BYTE PTR [rbx-0x25],ch
0x140aa1baa: test    eax,0xa9dc9400
0x140aa1baf: add     dh,dl
0x140aa1bb1: loope   0x140aa1b5c
0x140aa1bb3: add     ah,bh
0x140aa1bb5: a9      (bad) [rcx-0x561ef700]
0x140aa1bbb: add     BYTE PTR [rdi+0x1700a9e2],ah
0x140aa1bc1: jrcxz   0x140aa1b6c
0x140aa1bc3: add     cl,dl
0x140aa1bc5: jrcxz   0x140aa1b70
0x140aa1bc7: add     BYTE PTR [rcx-0x1c],al
0x140aa1bca: test    eax,0xa9e4b100
0x140aa1bcf: add     BYTE PTR [rsi],ah
0x140aa1bd1: shr     DWORD PTR [rcx-0x56259900],cl
0x140aa1bd7: add     BYTE PTR [rdx-0x5dff55ff],al
0x140aa1bdd: add     al,0xaa
0x140aa1bdf: add     BYTE PTR [rax+rdx*1],ah
0x140aa1be2: stos    BYTE PTR [rdi],al
0x140aa1be3: add     BYTE PTR [rbp+0x11],bl
0x140aa1be6: stos    BYTE PTR [rdi],al
0x140aa1be7: add     bl,bh
0x140aa1be9: adc     eax,0x152700aa
0x140aa1bee: stos    BYTE PTR [rdi],al
0x140aa1bef: add     BYTE PTR [rbx+0x17],ch
0x140aa1bf2: stos    BYTE PTR [rdi],al
0x140aa1bf3: add     BYTE PTR [rdx],bh
0x140aa1bf5: adc     ebp,DWORD PTR [rdx-0x562aaa00]
0x140aa1bfb: add     BYTE PTR [rax-0x19ff562a],ah
0x140aa1c02: test    eax,0xa9d47600
0x140aa1c07: add     BYTE PTR [rsi],al
0x140aa1c0a: test    eax,0xa9d39600
0x140aa1c0f: add     BYTE PTR [rcx+rbp*8-0x831ff57],bl
0x140aa1c16: test    eax,0xa9faa700
0x140aa1c1b: add     BYTE PTR [rdx+0x1700a9f9],cl
0x140aa1c21: sti     
0x140aa1c22: test    eax,0xa9fe7800
0x140aa1c27: add     dl,ah
0x140aa1c2a: test    eax,0xa9ff5200
0x140aa1c2f: add     cl,dh
0x140aa1c31: sti     
0x140aa1c32: test    eax,0xa9f75e00
0x140aa1c37: add     ch,dl
0x140aa1c39: add     al,0xaa
0x140aa1c3b: add     BYTE PTR [rsi+0x6],al
0x140aa1c3e: stos    BYTE PTR [rdi],al
0x140aa1c3f: add     bh,al
0x140aa1c42: stos    BYTE PTR [rdi],al
0x140aa1c43: add     BYTE PTR [rdx],bl
0x140aa1c45: or      eax,0x9ca00aa
0x140aa1c4a: stos    BYTE PTR [rdi],al
0x140aa1c4b: add     BYTE PTR [rdi],bh
0x140aa1c4e: stos    BYTE PTR [rdi],al
0x140aa1c4f: add     BYTE PTR [rdx-0x29ff55f2],dl
0x140aa1c56: stos    BYTE PTR [rdi],al
0x140aa1c57: add     BYTE PTR [rax],bh
0x140aa1c59: or      DWORD PTR [rdx-0x56177d00],ebp
0x140aa1c5f: add     BYTE PTR [rax-0x48ff55f8],al
0x140aa1c65: in      eax,0xa9
0x140aa1c67: add     BYTE PTR [rcx],al
0x140aa1c69: out     0xa9,eax
0x140aa1c6b: add     bh,ch
0x140aa1c6d: call    0x1594a1d1b
0x140aa1c72: stos    BYTE PTR [rdi],al
0x140aa1c73: add     BYTE PTR [rax],dl
0x140aa1c75: xlat    BYTE PTR [rbx]
0x140aa1c76: test    eax,0xa9d9cc00
0x140aa1c7b: add     BYTE PTR [rbx+rsi*8-0x57],bh
0x140aa1c7f: add     dh,ah
0x140aa1c81: imul    BYTE PTR [rcx-0x56075200]
0x140aa1c87: add     BYTE PTR [rsi],bh
0x140aa1c89: clc     
0x140aa1c8a: test    eax,0xa9f46c00
0x140aa1c8f: add     BYTE PTR [rbp+0xc00a9f5],ch
0x140aa1c96: test    eax,0xa9f20900
0x140aa1c9b: add     BYTE PTR [rdx],ch
0x140aa1c9d: repz    test eax,0xaa0eb500
0x140aa1ca3: add     BYTE PTR [rdi-0x16],ah
0x140aa1ca6: test    eax,0xa9fb8700
0x140aa1cab: add     BYTE PTR [rdi-0x16],ah
0x140aa1cae: test    eax,0xa9ca8e00
0x140aa1cb3: add     ah,ah
0x140aa1cb5: hlt     
0x140aa1cb6: test    eax,0xa9d24600
0x140aa1cbb: add     BYTE PTR [rsi-0x5dff562e],dh
0x140aa1cc1: add     BYTE PTR [rdx-0x55feee00],ch
0x140aa1cc7: add     dl,dh
0x140aa1cc9: fsubr   DWORD PTR [rcx-0x56269e00]
0x140aa1ccf: add     BYTE PTR [rdx],dh
0x140aa1cd1: add     BYTE PTR [rdx-0x56285500],ch
0x140aa1cd7: add     dl,dl
0x140aa1cd9: fisubr  WORD PTR [rcx-0x55fe0e00]
0x140aa1cdf: add     BYTE PTR [rax+0x100aa0b],bh
0x140aa1ce5: jmp     0x128231d93
0x140aa1cea: test    eax,0xa9c91a00
0x140aa1cef: add     ah,dh
0x140aa1cf1: repz    test eax,0xa9ebf500
0x140aa1cf7: add     BYTE PTR [rdx],al
0x140aa1cf9: in      al,dx
0x140aa1cfa: test    eax,0xa9ec0f00
0x140aa1cff: add     BYTE PTR [rsi-0x41ff5613],ch
0x140aa1d05: in      eax,dx
0x140aa1d06: test    eax,0xa9edce00
0x140aa1d0b: add     dh,bl
0x140aa1d0d: in      eax,dx
0x140aa1d0e: test    eax,0xa9edee00
0x140aa1d13: add     ch,dl
0x140aa1d15: int1    
0x140aa1d16: test    eax,0xa9f1d500
0x140aa1d1b: add     ch,dl
0x140aa1d1d: int1    
0x140aa1d1e: test    eax,0xa9f1d500
0x140aa1d23: add     ch,dl
0x140aa1d25: int1    
0x140aa1d26: test    eax,0xa9f1d500
0x140aa1d2b: add     ch,dl
0x140aa1d2d: int1    
0x140aa1d2e: test    eax,0xa9f1d500
0x140aa1d33: add     dl,dh
0x140aa1d35: add     ch,BYTE PTR [rdx-0x55fb7e00]
0x140aa1d3b: add     BYTE PTR [rdx-0x7dff55fc],al
0x140aa1d41: add     al,0xaa
0x140aa1d43: add     BYTE PTR [rdx-0x7dff55fc],al
0x140aa1d49: add     al,0xaa
0x140aa1d4b: add     BYTE PTR [rdx+0x600aa04],al
0x140aa1d51: add     ebp,DWORD PTR [rdx-0x55fce600]
0x140aa1d57: add     BYTE PTR [rsi],ch
0x140aa1d59: add     ebp,DWORD PTR [rdx-0x55fcbe00]
0x140aa1d5f: add     BYTE PTR [rsi+0x3],dl
0x140aa1d62: stos    BYTE PTR [rdi],al
0x140aa1d63: add     BYTE PTR [rdx+0x3],ch
0x140aa1d66: stos    BYTE PTR [rdi],al
0x140aa1d67: add     BYTE PTR [rsi+0x3],bh
0x140aa1d6a: stos    BYTE PTR [rdi],al
0x140aa1d6b: add     BYTE PTR [rdx-0x59ff55fd],dl
0x140aa1d71: add     ebp,DWORD PTR [rdx-0x55fc4600]
0x140aa1d77: add     dh,cl
0x140aa1d79: add     ebp,DWORD PTR [rdx-0x55fc1e00]
0x140aa1d7f: add     dh,dh
0x140aa1d81: add     ebp,DWORD PTR [rdx-0x55fbf600]
0x140aa1d87: add     BYTE PTR [rsi],bl
0x140aa1d89: add     al,0xaa
0x140aa1d8b: add     BYTE PTR [rdx],dh
0x140aa1d8d: add     al,0xaa
0x140aa1d8f: add     BYTE PTR [rsi+0x4],al
0x140aa1d92: stos    BYTE PTR [rdi],al
0x140aa1d93: add     BYTE PTR [rdx+0x4],bl
0x140aa1d96: stos    BYTE PTR [rdi],al
0x140aa1d97: add     BYTE PTR [rsi+0x4],ch
0x140aa1d9a: stos    BYTE PTR [rdi],al
