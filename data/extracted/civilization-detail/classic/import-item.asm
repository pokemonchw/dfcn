0x140a99510: rex     push rbp
0x140a99512: push    rbx
0x140a99513: push    rsi
0x140a99514: push    rdi
0x140a99515: push    r12
0x140a99517: push    r13
0x140a99519: push    r14
0x140a9951b: push    r15
0x140a9951d: lea     rbp,[rsp-0x178]
0x140a99525: sub     rsp,0x278
0x140a9952c: mov     rax,QWORD PTR [rip+0xe1eb0d]        # 0x1418b8040
0x140a99533: xor     rax,rsp
0x140a99536: mov     QWORD PTR [rbp+0x168],rax
0x140a9953d: movsx   rdi,r9w
0x140a99541: mov     WORD PTR [rsp+0x4e],di
0x140a99546: movsx   r15d,r8w
0x140a9954a: movsx   r10d,dx
0x140a9954e: mov     WORD PTR [rsp+0x4a],r10w
0x140a99554: mov     rbx,rcx
0x140a99557: mov     r12d,DWORD PTR [rbp+0x1e8]
0x140a9955e: movsxd  rsi,DWORD PTR [rbp+0x1e0]
0x140a99565: mov     DWORD PTR [rsp+0x54],esi
0x140a99569: mov     r14d,DWORD PTR [rbp+0x210]
0x140a99570: mov     DWORD PTR [rsp+0x58],r14d
0x140a99575: xorps   xmm0,xmm0
0x140a99578: movups  XMMWORD PTR [rbp-0x78],xmm0
0x140a9957c: xor     eax,eax
0x140a9957e: mov     r13d,eax
0x140a99581: mov     QWORD PTR [rbp-0x68],rax
0x140a99585: mov     QWORD PTR [rbp-0x60],0xf
0x140a9958d: mov     BYTE PTR [rbp-0x78],al
0x140a99590: cmp     BYTE PTR [rbp+0x218],al
0x140a99596: jne     0x140a9965c
0x140a9959c: mov     ecx,r10d
0x140a9959f: sub     ecx,0x19
0x140a995a2: je      0x140a995bc
0x140a995a4: sub     ecx,0x1
0x140a995a7: je      0x140a995bc
0x140a995a9: sub     ecx,0x2
0x140a995ac: je      0x140a995bc
0x140a995ae: sub     ecx,0x1
0x140a995b1: je      0x140a995bc
0x140a995b3: cmp     ecx,0x1f
0x140a995b6: jne     0x140a9965a
0x140a995bc: mov     eax,DWORD PTR [rip+0xe1ec5a]        # 0x1418b821c
0x140a995c2: cmp     eax,0x1
0x140a995c5: jne     0x140a995f4
0x140a995c7: mov     rax,QWORD PTR [rip+0x1967e82]        # 0x142401450
0x140a995ce: sub     rax,QWORD PTR [rip+0x1967e73]        # 0x142401448
0x140a995d5: sar     rax,0x3
0x140a995d9: test    rax,rax
0x140a995dc: je      0x140a99602
0x140a995de: mov     r9,QWORD PTR [rip+0x1967eab]        # 0x142401490
0x140a995e5: test    r9,r9
0x140a995e8: je      0x140a99602
0x140a995ea: movzx   r9d,WORD PTR [r9+0xa4]
0x140a995f2: jmp     0x140a99608
0x140a995f4: test    eax,eax
0x140a995f6: jne     0x140a99602
0x140a995f8: movzx   r9d,WORD PTR [rip+0x19163fc]        # 0x1423af9fc
0x140a99600: jmp     0x140a99608
0x140a99602: mov     r9d,0xffffffff
0x140a99608: movzx   r8d,WORD PTR [rbp+0x208]
0x140a99610: movzx   edx,r15w
0x140a99614: movzx   ecx,r10w
0x140a99618: call    0x141374520
0x140a9961d: sub     eax,0x1
0x140a99620: je      0x140a99639
0x140a99622: cmp     eax,0x1
0x140a99625: jne     0x140a9965a
0x140a99627: mov     eax,DWORD PTR [rip+0xbc74df]        # 0x141660b0c ; literal='large'
0x140a9962d: mov     DWORD PTR [rbp-0x78],eax
0x140a99630: movzx   eax,BYTE PTR [rip+0xbc74d9]        # 0x141660b10 ; literal='e'
0x140a99637: jmp     0x140a99649
0x140a99639: mov     eax,DWORD PTR [rip+0xc075bd]        # 0x1416a0bfc ; literal='small'
0x140a9963f: mov     DWORD PTR [rbp-0x78],eax
0x140a99642: movzx   eax,BYTE PTR [rip+0xc075b7]        # 0x1416a0c00 ; literal='l'
0x140a99649: mov     r13d,0x5
0x140a9964f: mov     BYTE PTR [rbp-0x73],0x0
0x140a99653: mov     BYTE PTR [rbp-0x74],al
0x140a99656: mov     QWORD PTR [rbp-0x68],r13
0x140a9965a: xor     eax,eax
0x140a9965c: cmp     BYTE PTR [rbp+0x1f8],0x0
0x140a99663: jne     0x140a9967d
0x140a99665: mov     QWORD PTR [rbx+0x10],rax
0x140a99669: mov     rax,rbx
0x140a9966c: cmp     QWORD PTR [rbx+0x18],0xf
0x140a99671: jbe     0x140a99676
0x140a99673: mov     rax,QWORD PTR [rbx]
0x140a99676: mov     BYTE PTR [rax],0x0
0x140a99679: mov     r13,QWORD PTR [rbp-0x68]
0x140a9967d: test    BYTE PTR [rbp+0x228],0x4
0x140a99684: je      0x140a9969f
0x140a99686: mov     r8d,0x6
0x140a9968c: lea     rdx,[rip+0xc4db89]        # 0x1416e721c ; literal='grown '
0x140a99693: mov     rcx,rbx
0x140a99696: call    0x140070fd0
0x140a9969b: mov     r13,QWORD PTR [rbp-0x68]
0x140a9969f: xorps   xmm0,xmm0
0x140a996a2: movups  XMMWORD PTR [rsp+0x68],xmm0
0x140a996a7: xor     r9d,r9d
0x140a996aa: mov     QWORD PTR [rsp+0x78],r9
0x140a996af: mov     ecx,0xf
0x140a996b4: mov     QWORD PTR [rbp-0x80],rcx
0x140a996b8: mov     BYTE PTR [rsp+0x68],r9b
0x140a996bd: movsx   rax,WORD PTR [rsp+0x4a]
0x140a996c3: mov     r8d,0x1
0x140a996c9: cmp     eax,0x5c
0x140a996cc: ja      0x140a9e8e8
0x140a996d2: lea     rdx,[rip+0xffffffffff566927]        # 0x140000000
0x140a996d9: mov     eax,DWORD PTR [rdx+rax*4+0xa9e9e0]
0x140a996e0: add     rax,rdx
0x140a996e3: jmp     rax
0x140a996e5: mov     r14d,DWORD PTR [rbp+0x1f0]
0x140a996ec: mov     eax,DWORD PTR [rbp+0x220]
0x140a996f2: cmp     di,0xffff
0x140a996f6: jne     0x140a996fc
0x140a996f8: test    eax,eax
0x140a996fa: je      0x140a99756
0x140a996fc: mov     WORD PTR [rsp+0x30],r9w
0x140a99702: mov     BYTE PTR [rsp+0x28],0x0
0x140a99707: mov     DWORD PTR [rsp+0x20],eax
0x140a9970b: mov     r9d,esi
0x140a9970e: movzx   r8d,di
0x140a99712: lea     rdx,[rsp+0x68]
0x140a99717: lea     rcx,[rip+0x1954152]        # 0x1423ed870
0x140a9971e: call    0x1414e58e0
0x140a99723: lea     rdx,[rsp+0x68]
0x140a99728: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9972d: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a99733: mov     r8,QWORD PTR [rsp+0x78]
0x140a99738: mov     rcx,rbx
0x140a9973b: call    0x140070fd0
0x140a99740: test    r14b,0x20
0x140a99744: jne     0x140a9e96b
0x140a9974a: mov     dl,0x20
0x140a9974c: mov     rcx,rbx
0x140a9974f: call    0x1400bb140
0x140a99754: jmp     0x140a99760
0x140a99756: test    r14b,0x20
0x140a9975a: jne     0x140a9e96b
0x140a99760: mov     r8d,0x4
0x140a99766: lea     rdx,[rip+0xbfe05b]        # 0x1416977c8 ; literal='logs'
0x140a9976d: mov     rcx,rbx
0x140a99770: call    0x140070fd0
0x140a99775: jmp     0x140a9e96b
0x140a9977a: mov     eax,DWORD PTR [rbp+0x220]
0x140a99780: cmp     di,0xffff
0x140a99784: jne     0x140a9978a
0x140a99786: test    eax,eax
0x140a99788: je      0x140a997d8
0x140a9978a: mov     WORD PTR [rsp+0x30],r9w
0x140a99790: mov     BYTE PTR [rsp+0x28],0x0
0x140a99795: mov     DWORD PTR [rsp+0x20],eax
0x140a99799: mov     r9d,esi
0x140a9979c: movzx   r8d,di
0x140a997a0: lea     rdx,[rsp+0x68]
0x140a997a5: lea     rcx,[rip+0x19540c4]        # 0x1423ed870
0x140a997ac: call    0x1414e58e0
0x140a997b1: lea     rdx,[rsp+0x68]
0x140a997b6: cmp     QWORD PTR [rbp-0x80],0xf
0x140a997bb: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a997c1: mov     r8,QWORD PTR [rsp+0x78]
0x140a997c6: mov     rcx,rbx
0x140a997c9: call    0x140070fd0
0x140a997ce: mov     dl,0x20
0x140a997d0: mov     rcx,rbx
0x140a997d3: call    0x1400bb140
0x140a997d8: lea     rdx,[rip+0xc511a9]        # 0x1416ea988 ; literal='branch'
0x140a997df: mov     r8d,0x6
0x140a997e5: mov     rcx,rbx
0x140a997e8: call    0x140070fd0
0x140a997ed: cmp     r12d,0x1
0x140a997f1: je      0x140a9e9a7
0x140a997f7: mov     r8d,0x2
0x140a997fd: lea     rdx,[rip+0xc510e8]        # 0x1416ea8ec ; literal='es'
0x140a99804: mov     rcx,rbx
0x140a99807: call    0x140070fd0
0x140a9980c: jmp     0x140a9e96b
0x140a99811: cmp     di,0xffff
0x140a99815: jne     0x140a99831
0x140a99817: mov     r8d,0xa
0x140a9981d: lea     rdx,[rip+0xb7e574]        # 0x141617d98 ; literal='rough gems'
0x140a99824: mov     rcx,rbx
0x140a99827: call    0x140070fd0
0x140a9982c: jmp     0x140a9e96b
0x140a99831: cmp     edi,0x3
0x140a99834: jne     0x140a9984a
0x140a99836: lea     rdx,[rip+0xc510b3]        # 0x1416ea8f0 ; literal='raw green glass'
0x140a9983d: mov     rcx,rbx
0x140a99840: call    0x140070b20
0x140a99845: jmp     0x140a9e96b
0x140a9984a: cmp     edi,0x4
0x140a9984d: jne     0x140a99863
0x140a9984f: lea     rdx,[rip+0xc510aa]        # 0x1416ea900 ; literal='raw clear glass'
0x140a99856: mov     rcx,rbx
0x140a99859: call    0x140070b20
0x140a9985e: jmp     0x140a9e96b
0x140a99863: cmp     edi,0x5
0x140a99866: jne     0x140a9987c
0x140a99868: lea     rdx,[rip+0xc510a1]        # 0x1416ea910 ; literal='raw crystal glass'
0x140a9986f: mov     rcx,rbx
0x140a99872: call    0x140070b20
0x140a99877: jmp     0x140a9e96b
0x140a9987c: cmp     esi,0xffffffff
0x140a9987f: jne     0x140a9989e
0x140a99881: test    di,di
0x140a99884: jne     0x140a9e96b
0x140a9988a: lea     rdx,[rip+0xb7e507]        # 0x141617d98 ; literal='rough gems'
0x140a99891: mov     rcx,rbx
0x140a99894: call    0x140070b20
0x140a99899: jmp     0x140a9e96b
0x140a9989e: lea     rcx,[rbp+0x48]
0x140a998a2: call    0x140070c50
0x140a998a7: nop     
0x140a998a8: lea     rdx,[rip+0xc4e0e9]        # 0x1416e7998 ; literal='rough '
0x140a998af: mov     rcx,rbx
0x140a998b2: call    0x140070b20
0x140a998b7: mov     BYTE PTR [rsp+0x20],0x1
0x140a998bc: mov     r9d,esi
0x140a998bf: movzx   r8d,di
0x140a998c3: lea     rdx,[rbp+0x48]
0x140a998c7: lea     rcx,[rip+0x1953fa2]        # 0x1423ed870
0x140a998ce: call    0x1414e5750
0x140a998d3: lea     rdx,[rbp+0x48]
0x140a998d7: mov     rcx,rbx
0x140a998da: call    0x1400bb2d0
0x140a998df: nop     
0x140a998e0: lea     rcx,[rbp+0x48]
0x140a998e4: call    0x140070e10
0x140a998e9: jmp     0x140a9e96b
0x140a998ee: xor     r14b,r14b
0x140a998f1: mov     r15d,DWORD PTR [rbp+0x220]
0x140a998f8: test    di,di
0x140a998fb: jne     0x140a99958
0x140a998fd: test    esi,esi
0x140a998ff: js      0x140a99941
0x140a99901: mov     rax,QWORD PTR [rip+0x1a6f348]        # 0x142508c50
0x140a99908: mov     rdx,QWORD PTR [rip+0x1a6f339]        # 0x142508c48
0x140a9990f: sub     rax,rdx
0x140a99912: sar     rax,0x3
0x140a99916: cmp     rsi,rax
0x140a99919: jae     0x140a99941
0x140a9991b: mov     rax,QWORD PTR [rdx+rsi*8]
0x140a9991f: cmp     DWORD PTR [rax+0x40],0x2
0x140a99923: jle     0x140a99935
0x140a99925: mov     rax,QWORD PTR [rax+0x38]
0x140a99929: test    BYTE PTR [rax+0x2],0x20
0x140a9992d: je      0x140a99935
0x140a9992f: movzx   eax,r8b
0x140a99933: jmp     0x140a99937
0x140a99935: xor     al,al
0x140a99937: test    al,al
0x140a99939: je      0x140a99958
0x140a9993b: movzx   r14d,r8b
0x140a9993f: jmp     0x140a9997f
0x140a99941: mov     r8d,0x6
0x140a99947: lea     rdx,[rip+0xc06ee6]        # 0x1416a0834 ; literal='small '
0x140a9994e: mov     rcx,rbx
0x140a99951: call    0x140070fd0
0x140a99956: jmp     0x140a9997c
0x140a99958: mov     r8d,0x6
0x140a9995e: lea     rdx,[rip+0xc06ecf]        # 0x1416a0834 ; literal='small '
0x140a99965: mov     rcx,rbx
0x140a99968: call    0x140070fd0
0x140a9996d: cmp     di,0xffff
0x140a99971: jne     0x140a9997c
0x140a99973: test    r15d,r15d
0x140a99976: je      0x140a99a38
0x140a9997c: xor     r9d,r9d
0x140a9997f: xorps   xmm0,xmm0
0x140a99982: movups  XMMWORD PTR [rbp-0x38],xmm0
0x140a99986: mov     QWORD PTR [rbp-0x28],r9
0x140a9998a: mov     QWORD PTR [rbp-0x20],0xf
0x140a99992: mov     BYTE PTR [rbp-0x38],0x0
0x140a99996: mov     WORD PTR [rsp+0x30],r9w
0x140a9999c: mov     BYTE PTR [rsp+0x28],0x0
0x140a999a1: mov     DWORD PTR [rsp+0x20],r15d
0x140a999a6: mov     r9d,esi
0x140a999a9: movzx   r8d,di
0x140a999ad: lea     rdx,[rbp-0x38]
0x140a999b1: lea     rcx,[rip+0x1953eb8]        # 0x1423ed870
0x140a999b8: call    0x1414e58e0
0x140a999bd: lea     rdx,[rbp-0x38]
0x140a999c1: cmp     QWORD PTR [rbp-0x20],0xf
0x140a999c6: cmova   rdx,QWORD PTR [rbp-0x38]
0x140a999cb: mov     r8,QWORD PTR [rbp-0x28]
0x140a999cf: mov     rcx,rbx
0x140a999d2: call    0x140070fd0
0x140a999d7: test    r14b,r14b
0x140a999da: jne     0x140a999e7
0x140a999dc: mov     dl,0x20
0x140a999de: mov     rcx,rbx
0x140a999e1: call    0x1400bb140
0x140a999e6: nop     
0x140a999e7: mov     rdx,QWORD PTR [rbp-0x20]
0x140a999eb: cmp     rdx,0xf
0x140a999ef: jbe     0x140a99a22
0x140a999f1: inc     rdx
0x140a999f4: mov     rcx,QWORD PTR [rbp-0x38]
0x140a999f8: mov     rax,rcx
0x140a999fb: cmp     rdx,0x1000
0x140a99a02: jb      0x140a99a1d
0x140a99a04: add     rdx,0x27
0x140a99a08: mov     rcx,QWORD PTR [rcx-0x8]
0x140a99a0c: sub     rax,rcx
0x140a99a0f: add     rax,0xfffffffffffffff8
0x140a99a13: cmp     rax,0x1f
0x140a99a17: ja      0x140a9d5fe
0x140a99a1d: call    0x14154de20
0x140a99a22: xor     eax,eax
0x140a99a24: mov     QWORD PTR [rbp-0x28],rax
0x140a99a28: mov     QWORD PTR [rbp-0x20],0xf
0x140a99a30: mov     BYTE PTR [rbp-0x38],al
0x140a99a33: test    r14b,r14b
0x140a99a36: jne     0x140a99a4d
0x140a99a38: mov     r8d,0x4
0x140a99a3e: lea     rdx,[rip+0xc50e6f]        # 0x1416ea8b4 ; literal='rock'
0x140a99a45: mov     rcx,rbx
0x140a99a48: call    0x140070fd0
0x140a99a4d: cmp     QWORD PTR [rbx+0x10],0x0
0x140a99a52: jne     0x140a9e96b
0x140a99a58: mov     r8d,0xa
0x140a99a5e: lea     rdx,[rip+0xc50e5b]        # 0x1416ea8c0 ; literal='small rock'
0x140a99a65: mov     rcx,rbx
0x140a99a68: call    0x140070e90
0x140a99a6d: jmp     0x140a9e96b
0x140a99a72: test    di,di
0x140a99a75: jne     0x140a99acb
0x140a99a77: cmp     esi,0xffffffff
0x140a99a7a: je      0x140a99ab7
0x140a99a7c: lea     rcx,[rbp+0x68]
0x140a99a80: call    0x140070c50
0x140a99a85: nop     
0x140a99a86: xor     r8d,r8d
0x140a99a89: mov     r9d,esi
0x140a99a8c: lea     rdx,[rbp+0x68]
0x140a99a90: lea     rcx,[rip+0x1953dd9]        # 0x1423ed870
0x140a99a97: call    0x1414e56b0
0x140a99a9c: lea     rdx,[rbp+0x68]
0x140a99aa0: mov     rcx,rbx
0x140a99aa3: call    0x1400bb2d0
0x140a99aa8: nop     
0x140a99aa9: lea     rcx,[rbp+0x68]
0x140a99aad: call    0x140070e10
0x140a99ab2: jmp     0x140a9e96b
0x140a99ab7: lea     rdx,[rip+0xc50e12]        # 0x1416ea8d0 ; literal='stone boulders'
0x140a99abe: mov     rcx,rbx
0x140a99ac1: call    0x140070b20
0x140a99ac6: jmp     0x140a9e96b
0x140a99acb: mov     r14d,DWORD PTR [rbp+0x220]
0x140a99ad2: cmp     di,0xffff
0x140a99ad6: jne     0x140a99af1
0x140a99ad8: test    r14d,r14d
0x140a99adb: jne     0x140a99af1
0x140a99add: lea     rdx,[rip+0xc50dfc]        # 0x1416ea8e0 ; literal='boulders'
0x140a99ae4: mov     rcx,rbx
0x140a99ae7: call    0x140070b20
0x140a99aec: jmp     0x140a9e96b
0x140a99af1: lea     rcx,[rbp+0x88]
0x140a99af8: call    0x140070c50
0x140a99afd: nop     
0x140a99afe: xor     eax,eax
0x140a99b00: mov     WORD PTR [rsp+0x30],ax
0x140a99b05: mov     BYTE PTR [rsp+0x28],al
0x140a99b09: mov     DWORD PTR [rsp+0x20],r14d
0x140a99b0e: mov     r9d,esi
0x140a99b11: movzx   r8d,di
0x140a99b15: lea     rdx,[rbp+0x88]
0x140a99b1c: lea     rcx,[rip+0x1953d4d]        # 0x1423ed870
0x140a99b23: call    0x1414e58e0
0x140a99b28: lea     rdx,[rbp+0x88]
0x140a99b2f: mov     rcx,rbx
0x140a99b32: call    0x1400bb2d0
0x140a99b37: nop     
0x140a99b38: lea     rcx,[rbp+0x88]
0x140a99b3f: call    0x140070e10
0x140a99b44: jmp     0x140a9e96b
0x140a99b49: test    di,di
0x140a99b4c: je      0x140a99c06
0x140a99b52: cmp     edi,0x7
0x140a99b55: je      0x140a99bce
0x140a99b57: cmp     di,0xffff
0x140a99b5b: je      0x140a99bba
0x140a99b5d: lea     rcx,[rbp+0xa8]
0x140a99b64: call    0x140070c50
0x140a99b69: nop     
0x140a99b6a: xor     eax,eax
0x140a99b6c: mov     WORD PTR [rsp+0x30],ax
0x140a99b71: mov     BYTE PTR [rsp+0x28],al
0x140a99b75: mov     eax,DWORD PTR [rbp+0x220]
0x140a99b7b: mov     DWORD PTR [rsp+0x20],eax
0x140a99b7f: mov     r9d,esi
0x140a99b82: movzx   r8d,di
0x140a99b86: lea     rdx,[rbp+0xa8]
0x140a99b8d: lea     rcx,[rip+0x1953cdc]        # 0x1423ed870
0x140a99b94: call    0x1414e58e0
0x140a99b99: lea     rdx,[rbp+0xa8]
0x140a99ba0: mov     rcx,rbx
0x140a99ba3: call    0x1400bb2d0
0x140a99ba8: nop     
0x140a99ba9: lea     rcx,[rbp+0xa8]
0x140a99bb0: call    0x140070e10
0x140a99bb5: jmp     0x140a9e96b
0x140a99bba: lea     rdx,[rip+0xc50c97]        # 0x1416ea858 ; literal='bars'
0x140a99bc1: mov     rcx,rbx
0x140a99bc4: call    0x140070b20
0x140a99bc9: jmp     0x140a9e96b
0x140a99bce: cmp     esi,r8d
0x140a99bd1: jne     0x140a99be7
0x140a99bd3: lea     rdx,[rip+0xc50cc6]        # 0x1416ea8a0 ; literal='charcoal'
0x140a99bda: mov     rcx,rbx
0x140a99bdd: call    0x140070b20
0x140a99be2: jmp     0x140a9e96b
0x140a99be7: test    esi,esi
0x140a99be9: lea     rdx,[rip+0xc50cbc]        # 0x1416ea8ac ; literal='coke'
0x140a99bf0: je      0x140a99bf9
0x140a99bf2: lea     rdx,[rip+0xc50c4f]        # 0x1416ea848 ; literal='refined coal'
0x140a99bf9: mov     rcx,rbx
0x140a99bfc: call    0x140070b20
0x140a99c01: jmp     0x140a9e96b
0x140a99c06: cmp     esi,0xffffffff
0x140a99c09: jne     0x140a99c2e
0x140a99c0b: lea     rdx,[rip+0xbba806]        # 0x141654418 ; literal='metal'
0x140a99c12: mov     rcx,rbx
0x140a99c15: call    0x140070b20
0x140a99c1a: lea     rdx,[rip+0xc50c77]        # 0x1416ea898 ; literal=' bars'
0x140a99c21: mov     rcx,rbx
0x140a99c24: call    0x140070b20
0x140a99c29: jmp     0x140a9e96b
0x140a99c2e: lea     rcx,[rbp+0xc8]
0x140a99c35: call    0x140070c50
0x140a99c3a: nop     
0x140a99c3b: xor     eax,eax
0x140a99c3d: mov     WORD PTR [rsp+0x30],ax
0x140a99c42: mov     BYTE PTR [rsp+0x28],al
0x140a99c46: mov     eax,DWORD PTR [rbp+0x220]
0x140a99c4c: mov     DWORD PTR [rsp+0x20],eax
0x140a99c50: mov     r9d,esi
0x140a99c53: movzx   r8d,di
0x140a99c57: lea     rdx,[rbp+0xc8]
0x140a99c5e: lea     rcx,[rip+0x1953c0b]        # 0x1423ed870
0x140a99c65: call    0x1414e58e0
0x140a99c6a: lea     rdx,[rbp+0xc8]
0x140a99c71: mov     rcx,rbx
0x140a99c74: call    0x1400bb2d0
0x140a99c79: nop     
0x140a99c7a: lea     rcx,[rbp+0xc8]
0x140a99c81: call    0x140070e10
0x140a99c86: test    esi,esi
0x140a99c88: js      0x140a99c1a
0x140a99c8a: mov     rax,QWORD PTR [rip+0x1a6efbf]        # 0x142508c50
0x140a99c91: mov     rdx,QWORD PTR [rip+0x1a6efb0]        # 0x142508c48
0x140a99c98: sub     rax,rdx
0x140a99c9b: sar     rax,0x3
0x140a99c9f: cmp     rsi,rax
0x140a99ca2: jae     0x140a99c1a
0x140a99ca8: mov     rax,QWORD PTR [rdx+rsi*8]
0x140a99cac: cmp     DWORD PTR [rax+0x40],0x3
0x140a99cb0: jle     0x140a99cc0
0x140a99cb2: mov     rax,QWORD PTR [rax+0x38]
0x140a99cb6: test    BYTE PTR [rax+0x3],0x2
0x140a99cba: je      0x140a99cc0
0x140a99cbc: mov     al,0x1
0x140a99cbe: jmp     0x140a99cc2
0x140a99cc0: xor     al,al
0x140a99cc2: test    al,al
0x140a99cc4: je      0x140a99c1a
0x140a99cca: lea     rdx,[rip+0xc50bbf]        # 0x1416ea890 ; literal=' wafers'
0x140a99cd1: mov     rcx,rbx
0x140a99cd4: call    0x140070b20
0x140a99cd9: jmp     0x140a9e96b
0x140a99cde: mov     r13d,0xffffffff
0x140a99ce4: mov     r15d,r13d
0x140a99ce7: cmp     r14d,r13d
0x140a99cea: je      0x140a99d51
0x140a99cec: mov     r8,QWORD PTR [rip+0x1967ae5]        # 0x1424017d8
0x140a99cf3: mov     r11,QWORD PTR [rip+0x1967ad6]        # 0x1424017d0
0x140a99cfa: sub     r8,r11
0x140a99cfd: sar     r8,0x3
0x140a99d01: test    r8d,r8d
0x140a99d04: je      0x140a99d51
0x140a99d06: sub     r8d,0x1
0x140a99d0a: mov     edx,r9d
0x140a99d0d: js      0x140a99d3a
0x140a99d0f: nop     
0x140a99d10: lea     ecx,[rdx+r8*1]
0x140a99d14: sar     ecx,1
0x140a99d16: movsxd  rax,ecx
0x140a99d19: mov     r10,QWORD PTR [r11+rax*8]
0x140a99d1d: cmp     DWORD PTR [r10+0x1c],r14d
0x140a99d21: je      0x140a99d3d
0x140a99d23: lea     eax,[rcx+0x1]
0x140a99d26: cmovle  edx,eax
0x140a99d29: lea     eax,[rcx-0x1]
0x140a99d2c: cmovle  eax,r8d
0x140a99d30: mov     r8d,eax
0x140a99d33: cmp     edx,eax
0x140a99d35: jle     0x140a99d10
0x140a99d37: xor     r9d,r9d
0x140a99d3a: mov     r10,r9
0x140a99d3d: test    r10,r10
0x140a99d40: je      0x140a99d51
0x140a99d42: mov     rax,QWORD PTR [r10]
0x140a99d45: mov     rcx,r10
0x140a99d48: call    QWORD PTR [rax+0x748]
0x140a99d4e: mov     r15d,eax
0x140a99d51: xorps   xmm0,xmm0
0x140a99d54: movups  XMMWORD PTR [rbp-0x18],xmm0
0x140a99d58: xor     r14d,r14d
0x140a99d5b: mov     QWORD PTR [rbp-0x8],r14
0x140a99d5f: mov     QWORD PTR [rbp+0x0],0xf
0x140a99d67: mov     BYTE PTR [rbp-0x18],r14b
0x140a99d6b: mov     ecx,DWORD PTR [rbp+0x220]
0x140a99d71: mov     DWORD PTR [rsp+0x30],ecx
0x140a99d75: mov     DWORD PTR [rsp+0x28],r13d
0x140a99d7a: mov     DWORD PTR [rsp+0x20],r15d
0x140a99d7f: mov     r9d,esi
0x140a99d82: movzx   r8d,di
0x140a99d86: lea     rdx,[rbp-0x18]
0x140a99d8a: call    0x1414f5e80
0x140a99d8f: test    al,al
0x140a99d91: je      0x140a99db2
0x140a99d93: lea     rdx,[rbp-0x18]
0x140a99d97: cmp     QWORD PTR [rbp+0x0],0xf
0x140a99d9c: cmova   rdx,QWORD PTR [rbp-0x18]
0x140a99da1: mov     r8,QWORD PTR [rbp-0x8]
0x140a99da5: mov     rcx,rbx
0x140a99da8: call    0x140070fd0
0x140a99dad: jmp     0x140a99e75
0x140a99db2: cmp     di,0xffff
0x140a99db6: jne     0x140a99dcc
0x140a99db8: lea     rdx,[rip+0xb7e1f9]        # 0x141617fb8 ; literal='cut gems'
0x140a99dbf: mov     rcx,rbx
0x140a99dc2: call    0x140070b20
0x140a99dc7: jmp     0x140a99e75
0x140a99dcc: cmp     edi,0x3
0x140a99dcf: jne     0x140a99de5
0x140a99dd1: lea     rdx,[rip+0xc50a88]        # 0x1416ea860 ; literal='cut green glass gems'
0x140a99dd8: mov     rcx,rbx
0x140a99ddb: call    0x140070b20
0x140a99de0: jmp     0x140a99e75
0x140a99de5: cmp     edi,0x4
0x140a99de8: jne     0x140a99dfb
0x140a99dea: lea     rdx,[rip+0xc50a87]        # 0x1416ea878 ; literal='cut clear glass gems'
0x140a99df1: mov     rcx,rbx
0x140a99df4: call    0x140070b20
0x140a99df9: jmp     0x140a99e75
0x140a99dfb: cmp     edi,0x5
0x140a99dfe: jne     0x140a99e11
0x140a99e00: lea     rdx,[rip+0xc51849]        # 0x1416eb650 ; literal='cut crystal glass gems'
0x140a99e07: mov     rcx,rbx
0x140a99e0a: call    0x140070b20
0x140a99e0f: jmp     0x140a99e75
0x140a99e11: cmp     esi,0xffffffff
0x140a99e14: jne     0x140a99e2c
0x140a99e16: test    di,di
0x140a99e19: jne     0x140a99e75
0x140a99e1b: lea     rdx,[rip+0xc51846]        # 0x1416eb668 ; literal='gems'
0x140a99e22: mov     rcx,rbx
0x140a99e25: call    0x140070b20
0x140a99e2a: jmp     0x140a99e75
0x140a99e2c: lea     rcx,[rbp+0xe8]
0x140a99e33: call    0x140070c50
0x140a99e38: nop     
0x140a99e39: mov     BYTE PTR [rsp+0x20],0x1
0x140a99e3e: mov     r9d,esi
0x140a99e41: movzx   r8d,di
0x140a99e45: lea     rdx,[rbp+0xe8]
0x140a99e4c: lea     rcx,[rip+0x1953a1d]        # 0x1423ed870
0x140a99e53: call    0x1414e5750
0x140a99e58: lea     rdx,[rbp+0xe8]
0x140a99e5f: mov     rcx,rbx
0x140a99e62: call    0x1400bb2d0
0x140a99e67: nop     
0x140a99e68: lea     rcx,[rbp+0xe8]
0x140a99e6f: call    0x140070e10
0x140a99e74: nop     
0x140a99e75: mov     rdx,QWORD PTR [rbp+0x0]
0x140a99e79: cmp     rdx,0xf
0x140a99e7d: jbe     0x140a99eb0
0x140a99e7f: inc     rdx
0x140a99e82: mov     rcx,QWORD PTR [rbp-0x18]
0x140a99e86: mov     rax,rcx
0x140a99e89: cmp     rdx,0x1000
0x140a99e90: jb      0x140a99eab
0x140a99e92: add     rdx,0x27
0x140a99e96: mov     rcx,QWORD PTR [rcx-0x8]
0x140a99e9a: sub     rax,rcx
0x140a99e9d: add     rax,0xfffffffffffffff8
0x140a99ea1: cmp     rax,0x1f
0x140a99ea5: ja      0x140a9d5fe
0x140a99eab: call    0x14154de20
0x140a99eb0: mov     QWORD PTR [rbp-0x8],r14
0x140a99eb4: mov     QWORD PTR [rbp+0x0],0xf
0x140a99ebc: mov     BYTE PTR [rbp-0x18],0x0
0x140a99ec0: jmp     0x140a9e96b
0x140a99ec5: mov     eax,DWORD PTR [rbp+0x220]
0x140a99ecb: cmp     di,0xffff
0x140a99ecf: jne     0x140a99ed5
0x140a99ed1: test    eax,eax
0x140a99ed3: je      0x140a99f23
0x140a99ed5: mov     WORD PTR [rsp+0x30],r9w
0x140a99edb: mov     BYTE PTR [rsp+0x28],r8b
0x140a99ee0: mov     DWORD PTR [rsp+0x20],eax
0x140a99ee4: mov     r9d,esi
0x140a99ee7: movzx   r8d,di
0x140a99eeb: lea     rdx,[rsp+0x68]
0x140a99ef0: lea     rcx,[rip+0x1953979]        # 0x1423ed870
0x140a99ef7: call    0x1414e58e0
0x140a99efc: lea     rdx,[rsp+0x68]
0x140a99f01: cmp     QWORD PTR [rbp-0x80],0xf
0x140a99f06: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a99f0c: mov     r8,QWORD PTR [rsp+0x78]
0x140a99f11: mov     rcx,rbx
0x140a99f14: call    0x140070fd0
0x140a99f19: mov     dl,0x20
0x140a99f1b: mov     rcx,rbx
0x140a99f1e: call    0x1400bb140
0x140a99f23: mov     r8d,esi
0x140a99f26: movzx   edx,di
0x140a99f29: lea     rcx,[rip+0x1953940]        # 0x1423ed870
0x140a99f30: call    0x1414c1d30
0x140a99f35: mov     rcx,rbx
0x140a99f38: test    rax,rax
0x140a99f3b: je      0x140a99f69
0x140a99f3d: cmp     QWORD PTR [rax+0x340],0x0
0x140a99f45: je      0x140a99f58
0x140a99f47: lea     rdx,[rax+0x330]
0x140a99f4e: call    0x1400bb2d0
0x140a99f53: jmp     0x140a9e96b
0x140a99f58: lea     rdx,[rip+0xc51711]        # 0x1416eb670 ; literal='blocks'
0x140a99f5f: call    0x140070b20
0x140a99f64: jmp     0x140a9e96b
0x140a99f69: mov     r8d,0x6
0x140a99f6f: lea     rdx,[rip+0xc516fa]        # 0x1416eb670 ; literal='blocks'
0x140a99f76: call    0x140070fd0
0x140a99f7b: jmp     0x140a9e96b
0x140a99f80: mov     eax,DWORD PTR [rbp+0x220]
0x140a99f86: cmp     di,0xffff
0x140a99f8a: jne     0x140a99f90
0x140a99f8c: test    eax,eax
0x140a99f8e: je      0x140a99fde
0x140a99f90: mov     WORD PTR [rsp+0x30],r9w
0x140a99f96: mov     BYTE PTR [rsp+0x28],r8b
0x140a99f9b: mov     DWORD PTR [rsp+0x20],eax
0x140a99f9f: mov     r9d,esi
0x140a99fa2: movzx   r8d,di
0x140a99fa6: lea     rdx,[rsp+0x68]
0x140a99fab: lea     rcx,[rip+0x19538be]        # 0x1423ed870
0x140a99fb2: call    0x1414e58e0
0x140a99fb7: lea     rdx,[rsp+0x68]
0x140a99fbc: cmp     QWORD PTR [rbp-0x80],0xf
0x140a99fc1: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a99fc7: mov     r8,QWORD PTR [rsp+0x78]
0x140a99fcc: mov     rcx,rbx
0x140a99fcf: call    0x140070fd0
0x140a99fd4: mov     dl,0x20
0x140a99fd6: mov     rcx,rbx
0x140a99fd9: call    0x1400bb140
0x140a99fde: mov     r8d,esi
0x140a99fe1: movzx   edx,di
0x140a99fe4: lea     rcx,[rip+0x1953885]        # 0x1423ed870
0x140a99feb: call    0x1414c1d30
0x140a99ff0: test    rax,rax
0x140a99ff3: je      0x140a9a00f
0x140a99ff5: cmp     DWORD PTR [rax+0x298],0x6
0x140a99ffc: jle     0x140a9a00f
0x140a99ffe: mov     rax,QWORD PTR [rax+0x290]
0x140a9a005: test    BYTE PTR [rax+0x6],0x2
0x140a9a009: je      0x140a9a00f
0x140a9a00b: mov     al,0x1
0x140a9a00d: jmp     0x140a9a011
0x140a9a00f: xor     al,al
0x140a9a011: movzx   r8d,al
0x140a9a015: lea     r8,[r8*2+0x4]
0x140a9a01d: lea     rcx,[rip+0xc515fc]        # 0x1416eb620 ; literal='door'
0x140a9a024: lea     rdx,[rip+0xc5164d]        # 0x1416eb678 ; literal='portal'
0x140a9a02b: test    al,al
0x140a9a02d: cmove   rdx,rcx
0x140a9a031: jmp     0x140a9e953
0x140a9a036: mov     eax,DWORD PTR [rbp+0x220]
0x140a9a03c: cmp     di,0xffff
0x140a9a040: jne     0x140a9a046
0x140a9a042: test    eax,eax
0x140a9a044: je      0x140a9a094
0x140a9a046: mov     WORD PTR [rsp+0x30],r9w
0x140a9a04c: mov     BYTE PTR [rsp+0x28],r8b
0x140a9a051: mov     DWORD PTR [rsp+0x20],eax
0x140a9a055: mov     r9d,esi
0x140a9a058: movzx   r8d,di
0x140a9a05c: lea     rdx,[rsp+0x68]
0x140a9a061: lea     rcx,[rip+0x1953808]        # 0x1423ed870
0x140a9a068: call    0x1414e58e0
0x140a9a06d: lea     rdx,[rsp+0x68]
0x140a9a072: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9a077: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9a07d: mov     r8,QWORD PTR [rsp+0x78]
0x140a9a082: mov     rcx,rbx
0x140a9a085: call    0x140070fd0
0x140a9a08a: mov     dl,0x20
0x140a9a08c: mov     rcx,rbx
0x140a9a08f: call    0x1400bb140
0x140a9a094: mov     r8d,0x9
0x140a9a09a: lea     rdx,[rip+0xc51587]        # 0x1416eb628 ; literal='floodgate'
0x140a9a0a1: jmp     0x140a9e953
0x140a9a0a6: mov     eax,DWORD PTR [rbp+0x220]
0x140a9a0ac: cmp     di,0xffff
0x140a9a0b0: jne     0x140a9a0b6
0x140a9a0b2: test    eax,eax
0x140a9a0b4: je      0x140a9a104
0x140a9a0b6: mov     WORD PTR [rsp+0x30],r9w
0x140a9a0bc: mov     BYTE PTR [rsp+0x28],r8b
0x140a9a0c1: mov     DWORD PTR [rsp+0x20],eax
0x140a9a0c5: mov     r9d,esi
0x140a9a0c8: movzx   r8d,di
0x140a9a0cc: lea     rdx,[rsp+0x68]
0x140a9a0d1: lea     rcx,[rip+0x1953798]        # 0x1423ed870
0x140a9a0d8: call    0x1414e58e0
0x140a9a0dd: lea     rdx,[rsp+0x68]
0x140a9a0e2: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9a0e7: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9a0ed: mov     r8,QWORD PTR [rsp+0x78]
0x140a9a0f2: mov     rcx,rbx
0x140a9a0f5: call    0x140070fd0
0x140a9a0fa: mov     dl,0x20
0x140a9a0fc: mov     rcx,rbx
0x140a9a0ff: call    0x1400bb140
0x140a9a104: mov     r8d,0xb
0x140a9a10a: lea     rdx,[rip+0xc51527]        # 0x1416eb638 ; literal='hatch cover'
0x140a9a111: jmp     0x140a9e953
0x140a9a116: mov     eax,DWORD PTR [rbp+0x220]
0x140a9a11c: cmp     di,0xffff
0x140a9a120: jne     0x140a9a126
0x140a9a122: test    eax,eax
0x140a9a124: je      0x140a9a174
0x140a9a126: mov     WORD PTR [rsp+0x30],r9w
0x140a9a12c: mov     BYTE PTR [rsp+0x28],r8b
0x140a9a131: mov     DWORD PTR [rsp+0x20],eax
0x140a9a135: mov     r9d,esi
0x140a9a138: movzx   r8d,di
0x140a9a13c: lea     rdx,[rsp+0x68]
0x140a9a141: lea     rcx,[rip+0x1953728]        # 0x1423ed870
0x140a9a148: call    0x1414e58e0
0x140a9a14d: lea     rdx,[rsp+0x68]
0x140a9a152: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9a157: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9a15d: mov     r8,QWORD PTR [rsp+0x78]
0x140a9a162: mov     rcx,rbx
0x140a9a165: call    0x140070fd0
0x140a9a16a: mov     dl,0x20
0x140a9a16c: mov     rcx,rbx
0x140a9a16f: call    0x1400bb140
0x140a9a174: mov     r8d,0x5
0x140a9a17a: lea     rdx,[rip+0xc514c3]        # 0x1416eb644 ; literal='grate'
0x140a9a181: jmp     0x140a9e953
0x140a9a186: mov     eax,DWORD PTR [rbp+0x220]
0x140a9a18c: cmp     di,0xffff
0x140a9a190: jne     0x140a9a196
0x140a9a192: test    eax,eax
0x140a9a194: je      0x140a9a1e4
0x140a9a196: mov     WORD PTR [rsp+0x30],r9w
0x140a9a19c: mov     BYTE PTR [rsp+0x28],r8b
0x140a9a1a1: mov     DWORD PTR [rsp+0x20],eax
0x140a9a1a5: mov     r9d,esi
0x140a9a1a8: movzx   r8d,di
0x140a9a1ac: lea     rdx,[rsp+0x68]
0x140a9a1b1: lea     rcx,[rip+0x19536b8]        # 0x1423ed870
0x140a9a1b8: call    0x1414e58e0
0x140a9a1bd: lea     rdx,[rsp+0x68]
0x140a9a1c2: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9a1c7: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9a1cd: mov     r8,QWORD PTR [rsp+0x78]
0x140a9a1d2: mov     rcx,rbx
0x140a9a1d5: call    0x140070fd0
0x140a9a1da: mov     dl,0x20
0x140a9a1dc: mov     rcx,rbx
0x140a9a1df: call    0x1400bb140
0x140a9a1e4: mov     r8d,0x5
0x140a9a1ea: lea     rdx,[rip+0xbac6e3]        # 0x1416468d4 ; literal='table'
0x140a9a1f1: jmp     0x140a9e953
0x140a9a1f6: mov     eax,DWORD PTR [rbp+0x220]
0x140a9a1fc: cmp     di,0xffff
0x140a9a200: jne     0x140a9a206
0x140a9a202: test    eax,eax
0x140a9a204: je      0x140a9a254
0x140a9a206: mov     WORD PTR [rsp+0x30],r9w
0x140a9a20c: mov     BYTE PTR [rsp+0x28],r8b
0x140a9a211: mov     DWORD PTR [rsp+0x20],eax
0x140a9a215: mov     r9d,esi
0x140a9a218: movzx   r8d,di
0x140a9a21c: lea     rdx,[rsp+0x68]
0x140a9a221: lea     rcx,[rip+0x1953648]        # 0x1423ed870
0x140a9a228: call    0x1414e58e0
0x140a9a22d: lea     rdx,[rsp+0x68]
0x140a9a232: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9a237: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9a23d: mov     r8,QWORD PTR [rsp+0x78]
0x140a9a242: mov     rcx,rbx
0x140a9a245: call    0x140070fd0
0x140a9a24a: mov     dl,0x20
0x140a9a24c: mov     rcx,rbx
0x140a9a24f: call    0x1400bb140
0x140a9a254: mov     r8d,0x7
0x140a9a25a: lea     rdx,[rip+0xbb8ab7]        # 0x141652d18 ; literal='cabinet'
0x140a9a261: jmp     0x140a9e953
0x140a9a266: mov     eax,DWORD PTR [rbp+0x220]
0x140a9a26c: cmp     di,0xffff
0x140a9a270: jne     0x140a9a276
0x140a9a272: test    eax,eax
0x140a9a274: je      0x140a9a2c4
0x140a9a276: mov     WORD PTR [rsp+0x30],r9w
0x140a9a27c: mov     BYTE PTR [rsp+0x28],r8b
0x140a9a281: mov     DWORD PTR [rsp+0x20],eax
0x140a9a285: mov     r9d,esi
0x140a9a288: movzx   r8d,di
0x140a9a28c: lea     rdx,[rsp+0x68]
0x140a9a291: lea     rcx,[rip+0x19535d8]        # 0x1423ed870
0x140a9a298: call    0x1414e58e0
0x140a9a29d: lea     rdx,[rsp+0x68]
0x140a9a2a2: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9a2a7: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9a2ad: mov     r8,QWORD PTR [rsp+0x78]
0x140a9a2b2: mov     rcx,rbx
0x140a9a2b5: call    0x140070fd0
0x140a9a2ba: mov     dl,0x20
0x140a9a2bc: mov     rcx,rbx
0x140a9a2bf: call    0x1400bb140
0x140a9a2c4: mov     r8d,0xb
0x140a9a2ca: lea     rdx,[rip+0xbb8a37]        # 0x141652d08 ; literal='weapon rack'
0x140a9a2d1: jmp     0x140a9e953
0x140a9a2d6: mov     eax,DWORD PTR [rbp+0x220]
0x140a9a2dc: cmp     di,0xffff
0x140a9a2e0: jne     0x140a9a2e6
0x140a9a2e2: test    eax,eax
0x140a9a2e4: je      0x140a9a334
0x140a9a2e6: mov     WORD PTR [rsp+0x30],r9w
0x140a9a2ec: mov     BYTE PTR [rsp+0x28],r8b
0x140a9a2f1: mov     DWORD PTR [rsp+0x20],eax
0x140a9a2f5: mov     r9d,esi
0x140a9a2f8: movzx   r8d,di
0x140a9a2fc: lea     rdx,[rsp+0x68]
0x140a9a301: lea     rcx,[rip+0x1953568]        # 0x1423ed870
0x140a9a308: call    0x1414e58e0
0x140a9a30d: lea     rdx,[rsp+0x68]
0x140a9a312: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9a317: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9a31d: mov     r8,QWORD PTR [rsp+0x78]
0x140a9a322: mov     rcx,rbx
0x140a9a325: call    0x140070fd0
0x140a9a32a: mov     dl,0x20
0x140a9a32c: mov     rcx,rbx
0x140a9a32f: call    0x1400bb140
0x140a9a334: mov     r8d,0xb
0x140a9a33a: lea     rdx,[rip+0xbb89b7]        # 0x141652cf8 ; literal='armor stand'
0x140a9a341: jmp     0x140a9e953
0x140a9a346: mov     eax,DWORD PTR [rbp+0x220]
0x140a9a34c: cmp     di,0xffff
0x140a9a350: jne     0x140a9a356
0x140a9a352: test    eax,eax
0x140a9a354: je      0x140a9a3a4
0x140a9a356: mov     WORD PTR [rsp+0x30],r9w
0x140a9a35c: mov     BYTE PTR [rsp+0x28],r8b
0x140a9a361: mov     DWORD PTR [rsp+0x20],eax
0x140a9a365: mov     r9d,esi
0x140a9a368: movzx   r8d,di
0x140a9a36c: lea     rdx,[rsp+0x68]
0x140a9a371: lea     rcx,[rip+0x19534f8]        # 0x1423ed870
0x140a9a378: call    0x1414e58e0
0x140a9a37d: lea     rdx,[rsp+0x68]
0x140a9a382: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9a387: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9a38d: mov     r8,QWORD PTR [rsp+0x78]
0x140a9a392: mov     rcx,rbx
0x140a9a395: call    0x140070fd0
0x140a9a39a: mov     dl,0x20
0x140a9a39c: mov     rcx,rbx
0x140a9a39f: call    0x1400bb140
0x140a9a3a4: mov     r8d,0x3
0x140a9a3aa: lea     rdx,[rip+0xc5125b]        # 0x1416eb60c ; literal='bin'
0x140a9a3b1: jmp     0x140a9e953
0x140a9a3b6: mov     eax,DWORD PTR [rbp+0x220]
0x140a9a3bc: cmp     di,0xffff
0x140a9a3c0: jne     0x140a9a3c6
0x140a9a3c2: test    eax,eax
0x140a9a3c4: je      0x140a9a414
0x140a9a3c6: mov     WORD PTR [rsp+0x30],r9w
0x140a9a3cc: mov     BYTE PTR [rsp+0x28],r8b
0x140a9a3d1: mov     DWORD PTR [rsp+0x20],eax
0x140a9a3d5: mov     r9d,esi
0x140a9a3d8: movzx   r8d,di
0x140a9a3dc: lea     rdx,[rsp+0x68]
0x140a9a3e1: lea     rcx,[rip+0x1953488]        # 0x1423ed870
0x140a9a3e8: call    0x1414e58e0
0x140a9a3ed: lea     rdx,[rsp+0x68]
0x140a9a3f2: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9a3f7: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9a3fd: mov     r8,QWORD PTR [rsp+0x78]
0x140a9a402: mov     rcx,rbx
0x140a9a405: call    0x140070fd0
0x140a9a40a: mov     dl,0x20
0x140a9a40c: mov     rcx,rbx
0x140a9a40f: call    0x1400bb140
0x140a9a414: mov     r8d,esi
0x140a9a417: movzx   edx,di
0x140a9a41a: lea     rcx,[rip+0x195344f]        # 0x1423ed870
0x140a9a421: call    0x1414c1d30
0x140a9a426: test    rax,rax
0x140a9a429: je      0x140a9a473
0x140a9a42b: cmp     DWORD PTR [rax+0x298],0x6
0x140a9a432: jle     0x140a9a445
0x140a9a434: mov     rax,QWORD PTR [rax+0x290]
0x140a9a43b: test    BYTE PTR [rax+0x6],0x2
0x140a9a43f: je      0x140a9a445
0x140a9a441: mov     al,0x1
0x140a9a443: jmp     0x140a9a447
0x140a9a445: xor     al,al
0x140a9a447: test    al,al
0x140a9a449: je      0x140a9a473
0x140a9a44b: mov     r8d,0x3
0x140a9a451: lea     rdx,[rip+0xc511b8]        # 0x1416eb610 ; literal='box'
0x140a9a458: mov     rcx,rbx
0x140a9a45b: call    0x140070fd0
0x140a9a460: cmp     r12d,0x1
0x140a9a464: je      0x140a9e9a7
0x140a9a46a: lea     rdx,[rip+0xc511a3]        # 0x1416eb614 ; literal='e'
0x140a9a471: jmp     0x140a9a4ca
0x140a9a473: test    di,di
0x140a9a476: jne     0x140a9a49c
0x140a9a478: xor     r8d,r8d
0x140a9a47b: mov     r9d,esi
0x140a9a47e: mov     edx,0x2f
0x140a9a483: lea     rcx,[rip+0x19533e6]        # 0x1423ed870
0x140a9a48a: call    0x14146fea0
0x140a9a48f: test    al,al
0x140a9a491: jne     0x140a9a4a2
0x140a9a493: lea     rdx,[rip+0xc5117e]        # 0x1416eb618 ; literal='coffer'
0x140a9a49a: jmp     0x140a9a4a9
0x140a9a49c: cmp     di,0xffff
0x140a9a4a0: je      0x140a9a4bd
0x140a9a4a2: lea     rdx,[rip+0xbb845b]        # 0x141652904 ; literal='chest'
0x140a9a4a9: mov     rcx,rbx
0x140a9a4ac: call    0x140070b20
0x140a9a4b1: cmp     r12d,0x1
0x140a9a4b5: je      0x140a9e9a7
0x140a9a4bb: jmp     0x140a9a4d2
0x140a9a4bd: cmp     r12d,0x1
0x140a9a4c1: je      0x140a9a4ec
0x140a9a4c3: lea     rdx,[rip+0xc5111a]        # 0x1416eb5e4 ; literal='boxe'
0x140a9a4ca: mov     rcx,rbx
0x140a9a4cd: call    0x140070b20
0x140a9a4d2: mov     r8d,0x1
0x140a9a4d8: lea     rdx,[rip+0xb64fe9]        # 0x1415ff4c8 ; literal='s'
0x140a9a4df: mov     rcx,rbx
0x140a9a4e2: call    0x140070fd0
0x140a9a4e7: jmp     0x140a9e96b
0x140a9a4ec: lea     rdx,[rip+0xc5111d]        # 0x1416eb610 ; literal='box'
0x140a9a4f3: mov     rcx,rbx
0x140a9a4f6: call    0x140070b20
0x140a9a4fb: jmp     0x140a9e9a7
0x140a9a500: mov     eax,DWORD PTR [rbp+0x220]
0x140a9a506: cmp     di,0xffff
0x140a9a50a: jne     0x140a9a510
0x140a9a50c: test    eax,eax
0x140a9a50e: je      0x140a9a55e
0x140a9a510: mov     WORD PTR [rsp+0x30],r9w
0x140a9a516: mov     BYTE PTR [rsp+0x28],r8b
0x140a9a51b: mov     DWORD PTR [rsp+0x20],eax
0x140a9a51f: mov     r9d,esi
0x140a9a522: movzx   r8d,di
0x140a9a526: lea     rdx,[rsp+0x68]
0x140a9a52b: lea     rcx,[rip+0x195333e]        # 0x1423ed870
0x140a9a532: call    0x1414e58e0
0x140a9a537: lea     rdx,[rsp+0x68]
0x140a9a53c: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9a541: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9a547: mov     r8,QWORD PTR [rsp+0x78]
0x140a9a54c: mov     rcx,rbx
0x140a9a54f: call    0x140070fd0
0x140a9a554: mov     dl,0x20
0x140a9a556: mov     rcx,rbx
0x140a9a559: call    0x1400bb140
0x140a9a55e: mov     r8d,0x3
0x140a9a564: lea     rdx,[rip+0xc51081]        # 0x1416eb5ec ; literal='bag'
0x140a9a56b: jmp     0x140a9e953
0x140a9a570: test    r13,r13
0x140a9a573: je      0x140a9a59b
0x140a9a575: lea     rdx,[rbp-0x78]
0x140a9a579: cmp     QWORD PTR [rbp-0x60],0xf
0x140a9a57e: cmova   rdx,QWORD PTR [rbp-0x78]
0x140a9a583: mov     r8,r13
0x140a9a586: mov     rcx,rbx
0x140a9a589: call    0x140070fd0
0x140a9a58e: mov     dl,0x20
0x140a9a590: mov     rcx,rbx
0x140a9a593: call    0x1400bb140
0x140a9a598: xor     r9d,r9d
0x140a9a59b: mov     eax,DWORD PTR [rbp+0x220]
0x140a9a5a1: cmp     di,0xffff
0x140a9a5a5: jne     0x140a9a5ab
0x140a9a5a7: test    eax,eax
0x140a9a5a9: je      0x140a9a5f9
0x140a9a5ab: mov     WORD PTR [rsp+0x30],r9w
0x140a9a5b1: mov     BYTE PTR [rsp+0x28],0x1
0x140a9a5b6: mov     DWORD PTR [rsp+0x20],eax
0x140a9a5ba: mov     r9d,esi
0x140a9a5bd: movzx   r8d,di
0x140a9a5c1: lea     rdx,[rsp+0x68]
0x140a9a5c6: lea     rcx,[rip+0x19532a3]        # 0x1423ed870
0x140a9a5cd: call    0x1414e58e0
0x140a9a5d2: lea     rdx,[rsp+0x68]
0x140a9a5d7: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9a5dc: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9a5e2: mov     r8,QWORD PTR [rsp+0x78]
0x140a9a5e7: mov     rcx,rbx
0x140a9a5ea: call    0x140070fd0
0x140a9a5ef: mov     dl,0x20
0x140a9a5f1: mov     rcx,rbx
0x140a9a5f4: call    0x1400bb140
0x140a9a5f9: mov     r8d,0x8
0x140a9a5ff: lea     rdx,[rip+0xc50fea]        # 0x1416eb5f0 ; literal='backpack'
0x140a9a606: jmp     0x140a9e953
0x140a9a60b: cmp     r14d,0xffffffff
0x140a9a60f: je      0x140a9a6e3
0x140a9a615: mov     r8,QWORD PTR [rip+0x19671bc]        # 0x1424017d8
0x140a9a61c: mov     r10,QWORD PTR [rip+0x19671ad]        # 0x1424017d0
0x140a9a623: sub     r8,r10
0x140a9a626: sar     r8,0x3
0x140a9a62a: test    r8d,r8d
0x140a9a62d: je      0x140a9a6c8
0x140a9a633: sub     r8d,0x1
0x140a9a637: mov     edx,r9d
0x140a9a63a: js      0x140a9a66a
0x140a9a63c: nop     DWORD PTR [rax+0x0]
0x140a9a640: lea     ecx,[rdx+r8*1]
0x140a9a644: sar     ecx,1
0x140a9a646: movsxd  rax,ecx
0x140a9a649: mov     rdi,QWORD PTR [r10+rax*8]
0x140a9a64d: cmp     DWORD PTR [rdi+0x1c],r14d
0x140a9a651: je      0x140a9a66d
0x140a9a653: lea     eax,[rcx+0x1]
0x140a9a656: cmovle  edx,eax
0x140a9a659: lea     eax,[rcx-0x1]
0x140a9a65c: cmovle  eax,r8d
0x140a9a660: mov     r8d,eax
0x140a9a663: cmp     edx,eax
0x140a9a665: jle     0x140a9a640
0x140a9a667: xor     r9d,r9d
0x140a9a66a: mov     rdi,r9
0x140a9a66d: test    rdi,rdi
0x140a9a670: je      0x140a9a6c8
0x140a9a672: lea     rdx,[rdi+0x108]
0x140a9a679: mov     rcx,rbx
0x140a9a67c: call    0x1400bb2d0
0x140a9a681: cmp     QWORD PTR [rdi+0x118],0x0
0x140a9a689: je      0x140a9a695
0x140a9a68b: mov     dl,0x20
0x140a9a68d: mov     rcx,rbx
0x140a9a690: call    0x1400bb140
0x140a9a695: lea     rdx,[rdi+0xe8]
0x140a9a69c: mov     rcx,rbx
0x140a9a69f: call    0x1400bb2d0
0x140a9a6a4: cmp     QWORD PTR [rdi+0xf8],0x0
0x140a9a6ac: je      0x140a9a746
0x140a9a6b2: mov     dl,0x20
0x140a9a6b4: mov     rcx,rbx
0x140a9a6b7: call    0x1400bb140
0x140a9a6bc: lea     rdx,[rip+0xc50f01]        # 0x1416eb5c4 ; literal='cast'
0x140a9a6c3: jmp     0x140a9e94d
0x140a9a6c8: lea     rdx,[rip+0xc50f31]        # 0x1416eb600 ; literal='limb/body '
0x140a9a6cf: mov     rcx,rbx
0x140a9a6d2: call    0x140070b20
0x140a9a6d7: lea     rdx,[rip+0xc50ee6]        # 0x1416eb5c4 ; literal='cast'
0x140a9a6de: jmp     0x140a9e94d
0x140a9a6e3: mov     eax,DWORD PTR [rbp+0x220]
0x140a9a6e9: cmp     di,0xffff
0x140a9a6ed: jne     0x140a9a6f3
0x140a9a6ef: test    eax,eax
0x140a9a6f1: je      0x140a9a731
0x140a9a6f3: mov     WORD PTR [rsp+0x30],r9w
0x140a9a6f9: mov     BYTE PTR [rsp+0x28],r8b
0x140a9a6fe: mov     DWORD PTR [rsp+0x20],eax
0x140a9a702: mov     r9d,esi
0x140a9a705: movzx   r8d,di
0x140a9a709: lea     rdx,[rsp+0x68]
0x140a9a70e: lea     rcx,[rip+0x195315b]        # 0x1423ed870
0x140a9a715: call    0x1414e58e0
0x140a9a71a: lea     rdx,[rsp+0x68]
0x140a9a71f: mov     rcx,rbx
0x140a9a722: call    0x1400bb2d0
0x140a9a727: mov     dl,0x20
0x140a9a729: mov     rcx,rbx
0x140a9a72c: call    0x1400bb140
0x140a9a731: mov     r8d,0xa
0x140a9a737: lea     rdx,[rip+0xc50ec2]        # 0x1416eb600 ; literal='limb/body '
0x140a9a73e: mov     rcx,rbx
0x140a9a741: call    0x140070fd0
0x140a9a746: lea     rdx,[rip+0xc50e77]        # 0x1416eb5c4 ; literal='cast'
0x140a9a74d: jmp     0x140a9e94d
0x140a9a752: mov     eax,DWORD PTR [rbp+0x220]
0x140a9a758: cmp     di,0xffff
0x140a9a75c: jne     0x140a9a762
0x140a9a75e: test    eax,eax
0x140a9a760: je      0x140a9a7b0
0x140a9a762: mov     WORD PTR [rsp+0x30],r9w
0x140a9a768: mov     BYTE PTR [rsp+0x28],r8b
0x140a9a76d: mov     DWORD PTR [rsp+0x20],eax
0x140a9a771: mov     r9d,esi
0x140a9a774: movzx   r8d,di
0x140a9a778: lea     rdx,[rsp+0x68]
0x140a9a77d: lea     rcx,[rip+0x19530ec]        # 0x1423ed870
0x140a9a784: call    0x1414e58e0
0x140a9a789: lea     rdx,[rsp+0x68]
0x140a9a78e: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9a793: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9a799: mov     r8,QWORD PTR [rsp+0x78]
0x140a9a79e: mov     rcx,rbx
0x140a9a7a1: call    0x140070fd0
0x140a9a7a6: mov     dl,0x20
0x140a9a7a8: mov     rcx,rbx
0x140a9a7ab: call    0x1400bb140
0x140a9a7b0: mov     r8d,0x6
0x140a9a7b6: lea     rdx,[rip+0xc50e0f]        # 0x1416eb5cc ; literal='splint'
0x140a9a7bd: jmp     0x140a9e953
0x140a9a7c2: mov     eax,DWORD PTR [rbp+0x220]
0x140a9a7c8: cmp     di,0xffff
0x140a9a7cc: jne     0x140a9a7d2
0x140a9a7ce: test    eax,eax
0x140a9a7d0: je      0x140a9a820
0x140a9a7d2: mov     WORD PTR [rsp+0x30],r9w
0x140a9a7d8: mov     BYTE PTR [rsp+0x28],r8b
0x140a9a7dd: mov     DWORD PTR [rsp+0x20],eax
0x140a9a7e1: mov     r9d,esi
0x140a9a7e4: movzx   r8d,di
0x140a9a7e8: lea     rdx,[rsp+0x68]
0x140a9a7ed: lea     rcx,[rip+0x195307c]        # 0x1423ed870
0x140a9a7f4: call    0x1414e58e0
0x140a9a7f9: lea     rdx,[rsp+0x68]
0x140a9a7fe: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9a803: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9a809: mov     r8,QWORD PTR [rsp+0x78]
0x140a9a80e: mov     rcx,rbx
0x140a9a811: call    0x140070fd0
0x140a9a816: mov     dl,0x20
0x140a9a818: mov     rcx,rbx
0x140a9a81b: call    0x1400bb140
0x140a9a820: lea     rdx,[rip+0xc50dad]        # 0x1416eb5d4 ; literal='crutch'
0x140a9a827: jmp     0x140a997df
0x140a9a82c: test    r13,r13
0x140a9a82f: je      0x140a9a857
0x140a9a831: lea     rdx,[rbp-0x78]
0x140a9a835: cmp     QWORD PTR [rbp-0x60],0xf
0x140a9a83a: cmova   rdx,QWORD PTR [rbp-0x78]
0x140a9a83f: mov     r8,r13
0x140a9a842: mov     rcx,rbx
0x140a9a845: call    0x140070fd0
0x140a9a84a: mov     dl,0x20
0x140a9a84c: mov     rcx,rbx
0x140a9a84f: call    0x1400bb140
0x140a9a854: xor     r9d,r9d
0x140a9a857: mov     eax,DWORD PTR [rbp+0x220]
0x140a9a85d: cmp     di,0xffff
0x140a9a861: jne     0x140a9a867
0x140a9a863: test    eax,eax
0x140a9a865: je      0x140a9a8b5
0x140a9a867: mov     WORD PTR [rsp+0x30],r9w
0x140a9a86d: mov     BYTE PTR [rsp+0x28],0x1
0x140a9a872: mov     DWORD PTR [rsp+0x20],eax
0x140a9a876: mov     r9d,esi
0x140a9a879: movzx   r8d,di
0x140a9a87d: lea     rdx,[rsp+0x68]
0x140a9a882: lea     rcx,[rip+0x1952fe7]        # 0x1423ed870
0x140a9a889: call    0x1414e58e0
0x140a9a88e: lea     rdx,[rsp+0x68]
0x140a9a893: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9a898: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9a89e: mov     r8,QWORD PTR [rsp+0x78]
0x140a9a8a3: mov     rcx,rbx
0x140a9a8a6: call    0x140070fd0
0x140a9a8ab: mov     dl,0x20
0x140a9a8ad: mov     rcx,rbx
0x140a9a8b0: call    0x1400bb140
0x140a9a8b5: mov     r8d,0x6
0x140a9a8bb: lea     rdx,[rip+0xc50d1a]        # 0x1416eb5dc ; literal='quiver'
0x140a9a8c2: jmp     0x140a9e953
0x140a9a8c7: mov     eax,DWORD PTR [rbp+0x220]
0x140a9a8cd: cmp     di,0xffff
0x140a9a8d1: jne     0x140a9a8d7
0x140a9a8d3: test    eax,eax
0x140a9a8d5: je      0x140a9a94e
0x140a9a8d7: mov     WORD PTR [rsp+0x30],r9w
0x140a9a8dd: mov     BYTE PTR [rsp+0x28],r8b
0x140a9a8e2: mov     DWORD PTR [rsp+0x20],eax
0x140a9a8e6: mov     r9d,esi
0x140a9a8e9: movzx   r8d,di
0x140a9a8ed: lea     rdx,[rsp+0x68]
0x140a9a8f2: lea     rcx,[rip+0x1952f77]        # 0x1423ed870
0x140a9a8f9: call    0x1414e58e0
0x140a9a8fe: lea     rdx,[rsp+0x68]
0x140a9a903: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9a908: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9a90e: mov     r8,QWORD PTR [rsp+0x78]
0x140a9a913: mov     rcx,rbx
0x140a9a916: call    0x140070fd0
0x140a9a91b: mov     dl,0x20
0x140a9a91d: mov     rcx,rbx
0x140a9a920: call    0x1400bb140
0x140a9a925: mov     ecx,0x1a3
0x140a9a92a: movzx   eax,di
0x140a9a92d: sub     ax,cx
0x140a9a930: mov     ecx,0xc7
0x140a9a935: cmp     ax,cx
0x140a9a938: ja      0x140a9a94e
0x140a9a93a: lea     rdx,[rip+0xc50c5b]        # 0x1416eb59c ; literal='casket'
0x140a9a941: mov     rcx,rbx
0x140a9a944: call    0x140070b20
0x140a9a949: jmp     0x140a9e95b
0x140a9a94e: mov     r8d,esi
0x140a9a951: movzx   edx,di
0x140a9a954: lea     rcx,[rip+0x1952f15]        # 0x1423ed870
0x140a9a95b: call    0x1414c1d30
0x140a9a960: test    rax,rax
0x140a9a963: je      0x140a9a9b7
0x140a9a965: cmp     DWORD PTR [rax+0x298],0x5
0x140a9a96c: jle     0x140a9a97f
0x140a9a96e: mov     rax,QWORD PTR [rax+0x290]
0x140a9a975: cmp     BYTE PTR [rax+0x5],0x0
0x140a9a979: jge     0x140a9a97f
0x140a9a97b: mov     al,0x1
0x140a9a97d: jmp     0x140a9a981
0x140a9a97f: xor     al,al
0x140a9a981: test    al,al
0x140a9a983: je      0x140a9a9b7
0x140a9a985: lea     rdx,[rip+0xc50c1c]        # 0x1416eb5a8 ; literal='sarcophag'
0x140a9a98c: mov     rcx,rbx
0x140a9a98f: call    0x140070b20
0x140a9a994: lea     rax,[rip+0xbbe365]        # 0x141658d00 ; literal='us'
0x140a9a99b: lea     rdx,[rip+0xc49fa2]        # 0x1416e4944 ; literal='i'
0x140a9a9a2: cmp     r12d,0x1
0x140a9a9a6: cmove   rdx,rax
0x140a9a9aa: mov     rcx,rbx
0x140a9a9ad: call    0x140070b20
0x140a9a9b2: jmp     0x140a9e96b
0x140a9a9b7: lea     rdx,[rip+0xbabef2]        # 0x1416468b0 ; literal='coffin'
0x140a9a9be: mov     rcx,rbx
0x140a9a9c1: call    0x140070b20
0x140a9a9c6: jmp     0x140a9e95b
0x140a9a9cb: mov     r14d,DWORD PTR [rbp+0x220]
0x140a9a9d2: cmp     di,0xffff
0x140a9a9d6: jne     0x140a9a9dd
0x140a9a9d8: test    r14d,r14d
0x140a9a9db: je      0x140a9aa2c
0x140a9a9dd: mov     WORD PTR [rsp+0x30],r9w
0x140a9a9e3: mov     BYTE PTR [rsp+0x28],r8b
0x140a9a9e8: mov     DWORD PTR [rsp+0x20],r14d
0x140a9a9ed: mov     r9d,esi
0x140a9a9f0: movzx   r8d,di
0x140a9a9f4: lea     rdx,[rsp+0x68]
0x140a9a9f9: lea     rcx,[rip+0x1952e70]        # 0x1423ed870
0x140a9aa00: call    0x1414e58e0
0x140a9aa05: lea     rdx,[rsp+0x68]
0x140a9aa0a: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9aa0f: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9aa15: mov     r8,QWORD PTR [rsp+0x78]
0x140a9aa1a: mov     rcx,rbx
0x140a9aa1d: call    0x140070fd0
0x140a9aa22: mov     dl,0x20
0x140a9aa24: mov     rcx,rbx
0x140a9aa27: call    0x1400bb140
0x140a9aa2c: mov     r8d,esi
0x140a9aa2f: movzx   edx,di
0x140a9aa32: lea     rcx,[rip+0x1952e37]        # 0x1423ed870
0x140a9aa39: call    0x1414c1d30
0x140a9aa3e: test    rax,rax
0x140a9aa41: je      0x140a9aa67
0x140a9aa43: cmp     DWORD PTR [rax+0x298],0x3
0x140a9aa4a: jle     0x140a9aa5d
0x140a9aa4c: mov     rax,QWORD PTR [rax+0x290]
0x140a9aa53: test    BYTE PTR [rax+0x3],0x1
0x140a9aa57: je      0x140a9aa5d
0x140a9aa59: mov     al,0x1
0x140a9aa5b: jmp     0x140a9aa5f
0x140a9aa5d: xor     al,al
0x140a9aa5f: test    al,al
0x140a9aa61: jne     0x140a9aae8
0x140a9aa67: test    r14b,0x4
0x140a9aa6b: jne     0x140a9aae8
0x140a9aa6d: mov     r9d,esi
0x140a9aa70: movzx   r8d,di
0x140a9aa74: mov     edx,0x1d
0x140a9aa79: lea     rcx,[rip+0x1952df0]        # 0x1423ed870
0x140a9aa80: call    0x14146fea0
0x140a9aa85: test    al,al
0x140a9aa87: jne     0x140a9aae8
0x140a9aa89: test    r14b,0x10
0x140a9aa8d: jne     0x140a9aae8
0x140a9aa8f: mov     r9d,esi
0x140a9aa92: movzx   r8d,di
0x140a9aa96: mov     edx,0x1e
0x140a9aa9b: lea     rcx,[rip+0x1952dce]        # 0x1423ed870
0x140a9aaa2: call    0x14146fea0
0x140a9aaa7: test    al,al
0x140a9aaa9: jne     0x140a9aae8
0x140a9aaab: test    r14b,0x8
0x140a9aaaf: jne     0x140a9aae8
0x140a9aab1: mov     r9d,esi
0x140a9aab4: movzx   r8d,di
0x140a9aab8: mov     edx,0x3e
0x140a9aabd: lea     rcx,[rip+0x1952dac]        # 0x1423ed870
0x140a9aac4: call    0x14146fea0
0x140a9aac9: test    al,al
0x140a9aacb: jne     0x140a9aae8
0x140a9aacd: bt      r14d,0xc
0x140a9aad2: jb      0x140a9aae8
0x140a9aad4: lea     rdx,[rip+0xc50ae1]        # 0x1416eb5bc ; literal='chain'
0x140a9aadb: mov     rcx,rbx
0x140a9aade: call    0x140070b20
0x140a9aae3: jmp     0x140a9e95b
0x140a9aae8: lea     rdx,[rip+0xc50ac5]        # 0x1416eb5b4 ; literal='rope'
0x140a9aaef: jmp     0x140a9e94d
0x140a9aaf4: mov     r14d,DWORD PTR [rbp+0x220]
0x140a9aafb: cmp     di,0xffff
0x140a9aaff: jne     0x140a9ab06
0x140a9ab01: test    r14d,r14d
0x140a9ab04: je      0x140a9ab55
0x140a9ab06: mov     WORD PTR [rsp+0x30],r9w
0x140a9ab0c: mov     BYTE PTR [rsp+0x28],r8b
0x140a9ab11: mov     DWORD PTR [rsp+0x20],r14d
0x140a9ab16: mov     r9d,esi
0x140a9ab19: movzx   r8d,di
0x140a9ab1d: lea     rdx,[rsp+0x68]
0x140a9ab22: lea     rcx,[rip+0x1952d47]        # 0x1423ed870
0x140a9ab29: call    0x1414e58e0
0x140a9ab2e: lea     rdx,[rsp+0x68]
0x140a9ab33: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9ab38: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9ab3e: mov     r8,QWORD PTR [rsp+0x78]
0x140a9ab43: mov     rcx,rbx
0x140a9ab46: call    0x140070fd0
0x140a9ab4b: mov     dl,0x20
0x140a9ab4d: mov     rcx,rbx
0x140a9ab50: call    0x1400bb140
0x140a9ab55: mov     r8d,esi
0x140a9ab58: movzx   edx,di
0x140a9ab5b: lea     rcx,[rip+0x1952d0e]        # 0x1423ed870
0x140a9ab62: call    0x1414c1d30
0x140a9ab67: test    rax,rax
0x140a9ab6a: je      0x140a9ab90
0x140a9ab6c: cmp     DWORD PTR [rax+0x298],0x3
0x140a9ab73: jle     0x140a9ab86
0x140a9ab75: mov     rax,QWORD PTR [rax+0x290]
0x140a9ab7c: test    BYTE PTR [rax+0x3],0x1
0x140a9ab80: je      0x140a9ab86
0x140a9ab82: mov     al,0x1
0x140a9ab84: jmp     0x140a9ab88
0x140a9ab86: xor     al,al
0x140a9ab88: test    al,al
0x140a9ab8a: jne     0x140a9ac4a
0x140a9ab90: test    r14b,0x4
0x140a9ab94: jne     0x140a9ac4a
0x140a9ab9a: mov     r9d,esi
0x140a9ab9d: movzx   r8d,di
0x140a9aba1: mov     edx,0x1d
0x140a9aba6: lea     rcx,[rip+0x1952cc3]        # 0x1423ed870
0x140a9abad: call    0x14146fea0
0x140a9abb2: test    al,al
0x140a9abb4: jne     0x140a9ac4a
0x140a9abba: test    r14b,0x10
0x140a9abbe: jne     0x140a9ac4a
0x140a9abc4: mov     r9d,esi
0x140a9abc7: movzx   r8d,di
0x140a9abcb: mov     edx,0x1e
0x140a9abd0: lea     rcx,[rip+0x1952c99]        # 0x1423ed870
0x140a9abd7: call    0x14146fea0
0x140a9abdc: test    al,al
0x140a9abde: jne     0x140a9ac4a
0x140a9abe0: test    r14b,0x8
0x140a9abe4: jne     0x140a9ac4a
0x140a9abe6: mov     r9d,esi
0x140a9abe9: movzx   r8d,di
0x140a9abed: mov     edx,0x3e
0x140a9abf2: lea     rcx,[rip+0x1952c77]        # 0x1423ed870
0x140a9abf9: call    0x14146fea0
0x140a9abfe: test    al,al
0x140a9ac00: jne     0x140a9ac4a
0x140a9ac02: bt      r14d,0xc
0x140a9ac07: jb      0x140a9ac4a
0x140a9ac09: mov     r9d,esi
0x140a9ac0c: movzx   r8d,di
0x140a9ac10: mov     edx,0x31
0x140a9ac15: lea     rcx,[rip+0x1952c54]        # 0x1423ed870
0x140a9ac1c: call    0x14146fea0
0x140a9ac21: mov     rcx,rbx
0x140a9ac24: test    al,al
0x140a9ac26: je      0x140a9ac39
0x140a9ac28: lea     rdx,[rip+0xc50945]        # 0x1416eb574 ; literal='vial'
0x140a9ac2f: call    0x140070b20
0x140a9ac34: jmp     0x140a9e95b
0x140a9ac39: lea     rdx,[rip+0xc5093c]        # 0x1416eb57c ; literal='flask'
0x140a9ac40: call    0x140070b20
0x140a9ac45: jmp     0x140a9e95b
0x140a9ac4a: mov     r8d,0x9
0x140a9ac50: lea     rdx,[rip+0xc50911]        # 0x1416eb568 ; literal='waterskin'
0x140a9ac57: jmp     0x140a9e953
0x140a9ac5c: mov     eax,DWORD PTR [rbp+0x220]
0x140a9ac62: cmp     di,0xffff
0x140a9ac66: jne     0x140a9ac6c
0x140a9ac68: test    eax,eax
0x140a9ac6a: je      0x140a9acba
0x140a9ac6c: mov     WORD PTR [rsp+0x30],r9w
0x140a9ac72: mov     BYTE PTR [rsp+0x28],r8b
0x140a9ac77: mov     DWORD PTR [rsp+0x20],eax
0x140a9ac7b: mov     r9d,esi
0x140a9ac7e: movzx   r8d,di
0x140a9ac82: lea     rdx,[rsp+0x68]
0x140a9ac87: lea     rcx,[rip+0x1952be2]        # 0x1423ed870
0x140a9ac8e: call    0x1414e58e0
0x140a9ac93: lea     rdx,[rsp+0x68]
0x140a9ac98: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9ac9d: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9aca3: mov     r8,QWORD PTR [rsp+0x78]
0x140a9aca8: mov     rcx,rbx
0x140a9acab: call    0x140070fd0
0x140a9acb0: mov     dl,0x20
0x140a9acb2: mov     rcx,rbx
0x140a9acb5: call    0x1400bb140
0x140a9acba: mov     rcx,QWORD PTR [rip+0x1a6e4bf]        # 0x142509180
0x140a9acc1: mov     r8,QWORD PTR [rip+0x1a6e4b0]        # 0x142509178
0x140a9acc8: sub     rcx,r8
0x140a9accb: sar     rcx,0x3
0x140a9accf: sub     ecx,0x1
0x140a9acd2: movsxd  rdx,ecx
0x140a9acd5: js      0x140a9acf3
0x140a9acd7: nop     WORD PTR [rax+rax*1+0x0]
0x140a9ace0: mov     rax,QWORD PTR [r8+rdx*8]
0x140a9ace4: cmp     WORD PTR [rax+0x28],r15w
0x140a9ace9: je      0x140a9ad05
0x140a9aceb: dec     ecx
0x140a9aced: sub     rdx,0x1
0x140a9acf1: jns     0x140a9ace0
0x140a9acf3: mov     r8d,0x12
0x140a9acf9: lea     rdx,[rip+0xc50888]        # 0x1416eb588 ; literal='musical instrument'
0x140a9ad00: jmp     0x140a9e953
0x140a9ad05: movsxd  rax,ecx
0x140a9ad08: mov     rcx,QWORD PTR [r8+rax*8]
0x140a9ad0c: test    rcx,rcx
0x140a9ad0f: je      0x140a9acf3
0x140a9ad11: mov     edx,0x88
0x140a9ad16: mov     eax,0x68
0x140a9ad1b: cmp     r12d,0x1
0x140a9ad1f: cmove   edx,eax
0x140a9ad22: add     rdx,rcx
0x140a9ad25: mov     rcx,rbx
0x140a9ad28: call    0x1400bb2d0
0x140a9ad2d: jmp     0x140a9e96b
0x140a9ad32: mov     rcx,QWORD PTR [rip+0x1a6e1bf]        # 0x142508ef8
0x140a9ad39: mov     r8,QWORD PTR [rip+0x1a6e1b0]        # 0x142508ef0
0x140a9ad40: sub     rcx,r8
0x140a9ad43: sar     rcx,0x3
0x140a9ad47: sub     ecx,0x1
0x140a9ad4a: movsxd  rdx,ecx
0x140a9ad4d: js      0x140a9ad67
0x140a9ad4f: nop     
0x140a9ad50: mov     rax,QWORD PTR [r8+rdx*8]
0x140a9ad54: cmp     WORD PTR [rax+0x28],r15w
0x140a9ad59: je      0x140a9af13
0x140a9ad5f: dec     ecx
0x140a9ad61: sub     rdx,0x1
0x140a9ad65: jns     0x140a9ad50
0x140a9ad67: mov     r13,r9
0x140a9ad6a: mov     r15d,DWORD PTR [rbp+0x220]
0x140a9ad71: cmp     di,0xffff
0x140a9ad75: jne     0x140a9ad80
0x140a9ad77: test    r15d,r15d
0x140a9ad7a: je      0x140a9ae3a
0x140a9ad80: test    r13,r13
0x140a9ad83: je      0x140a9adea
0x140a9ad85: lea     rdx,[r13+0xc0]
0x140a9ad8c: mov     ecx,0xa
0x140a9ad91: call    0x1400ec6e0
0x140a9ad96: cmp     eax,0xffffffff
0x140a9ad99: je      0x140a9adea
0x140a9ad9b: mov     r9d,esi
0x140a9ad9e: movzx   r8d,di
0x140a9ada2: mov     edx,0x41
0x140a9ada7: lea     rcx,[rip+0x1952ac2]        # 0x1423ed870
0x140a9adae: call    0x14146fea0
0x140a9adb3: test    al,al
0x140a9adb5: je      0x140a9adea
0x140a9adb7: mov     edx,r14d
0x140a9adba: lea     rcx,[rip+0x1966a0f]        # 0x1424017d0
0x140a9adc1: call    0x140073ca0
0x140a9adc6: test    rax,rax
0x140a9adc9: je      0x140a9adea
0x140a9adcb: mov     rdx,QWORD PTR [rax]
0x140a9adce: mov     rcx,rax
0x140a9add1: call    QWORD PTR [rdx+0x728]
0x140a9add7: test    al,al
0x140a9add9: jne     0x140a9adea
0x140a9addb: lea     rdx,[rip+0xc50766]        # 0x1416eb548 ; literal='unglazed '
0x140a9ade2: mov     rcx,rbx
0x140a9ade5: call    0x140070b20
0x140a9adea: xor     eax,eax
0x140a9adec: mov     WORD PTR [rsp+0x30],ax
0x140a9adf1: mov     BYTE PTR [rsp+0x28],0x1
0x140a9adf6: mov     DWORD PTR [rsp+0x20],r15d
0x140a9adfb: mov     r9d,esi
0x140a9adfe: movzx   r8d,di
0x140a9ae02: lea     rdx,[rsp+0x68]
0x140a9ae07: lea     rcx,[rip+0x1952a62]        # 0x1423ed870
0x140a9ae0e: call    0x1414e58e0
0x140a9ae13: lea     rdx,[rsp+0x68]
0x140a9ae18: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9ae1d: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9ae23: mov     r8,QWORD PTR [rsp+0x78]
0x140a9ae28: mov     rcx,rbx
0x140a9ae2b: call    0x140070fd0
0x140a9ae30: mov     dl,0x20
0x140a9ae32: mov     rcx,rbx
0x140a9ae35: call    0x1400bb140
0x140a9ae3a: cmp     r14d,0xffffffff
0x140a9ae3e: je      0x140a9aeed
0x140a9ae44: mov     r8,QWORD PTR [rip+0x196698d]        # 0x1424017d8
0x140a9ae4b: mov     r11,QWORD PTR [rip+0x196697e]        # 0x1424017d0
0x140a9ae52: sub     r8,r11
0x140a9ae55: sar     r8,0x3
0x140a9ae59: test    r8d,r8d
0x140a9ae5c: je      0x140a9aeed
0x140a9ae62: xor     edi,edi
0x140a9ae64: mov     edx,edi
0x140a9ae66: sub     r8d,0x1
0x140a9ae6a: js      0x140a9ae97
0x140a9ae6c: nop     DWORD PTR [rax+0x0]
0x140a9ae70: lea     ecx,[rdx+r8*1]
0x140a9ae74: sar     ecx,1
0x140a9ae76: movsxd  rax,ecx
0x140a9ae79: mov     r10,QWORD PTR [r11+rax*8]
0x140a9ae7d: cmp     DWORD PTR [r10+0x1c],r14d
0x140a9ae81: je      0x140a9ae9a
0x140a9ae83: lea     eax,[rcx+0x1]
0x140a9ae86: cmovle  edx,eax
0x140a9ae89: lea     eax,[rcx-0x1]
0x140a9ae8c: cmovle  eax,r8d
0x140a9ae90: mov     r8d,eax
0x140a9ae93: cmp     edx,eax
0x140a9ae95: jle     0x140a9ae70
0x140a9ae97: mov     r10,rdi
0x140a9ae9a: test    r10,r10
0x140a9ae9d: je      0x140a9aeed
0x140a9ae9f: mov     rax,QWORD PTR [r10]
0x140a9aea2: mov     rcx,r10
0x140a9aea5: call    QWORD PTR [rax+0x748]
0x140a9aeab: cmp     eax,0xffffffff
0x140a9aeae: je      0x140a9aeed
0x140a9aeb0: movsxd  rcx,eax
0x140a9aeb3: mov     rax,QWORD PTR [rip+0x1a78596]        # 0x142513450
0x140a9aeba: mov     r8,QWORD PTR [rax+rcx*8]
0x140a9aebe: mov     rdx,QWORD PTR [r8+0x90]
0x140a9aec5: mov     rax,QWORD PTR [r8+0x98]
0x140a9aecc: sub     rax,rdx
0x140a9aecf: sar     rax,0x3
0x140a9aed3: test    rax,rax
0x140a9aed6: je      0x140a9aeed
0x140a9aed8: mov     rdx,QWORD PTR [rdx]
0x140a9aedb: mov     rcx,rbx
0x140a9aede: call    0x1400bb2d0
0x140a9aee3: mov     dl,0x20
0x140a9aee5: mov     rcx,rbx
0x140a9aee8: call    0x1400bb140
0x140a9aeed: mov     rcx,rbx
0x140a9aef0: test    r13,r13
0x140a9aef3: je      0x140a9af57
0x140a9aef5: mov     edx,0x88
0x140a9aefa: mov     eax,0x68
0x140a9aeff: cmp     r12d,0x1
0x140a9af03: cmove   edx,eax
0x140a9af06: add     rdx,r13
0x140a9af09: call    0x1400bb2d0
0x140a9af0e: jmp     0x140a9e96b
0x140a9af13: movsxd  rax,ecx
0x140a9af16: mov     r15,QWORD PTR [r8+rax*8]
0x140a9af1a: mov     r13,r15
0x140a9af1d: test    r15,r15
0x140a9af20: je      0x140a9ad6a
0x140a9af26: cmp     QWORD PTR [r15+0xe8],0x0
0x140a9af2e: je      0x140a9ad6a
0x140a9af34: lea     rdx,[r15+0xd8]
0x140a9af3b: mov     rcx,rbx
0x140a9af3e: call    0x1400bb2d0
0x140a9af43: lea     rdx,[rip+0xb63a22]        # 0x1415fe96c ; literal=' '
0x140a9af4a: mov     rcx,rbx
0x140a9af4d: call    0x140070b20
0x140a9af52: jmp     0x140a9ad6a
0x140a9af57: mov     r8d,0x4
0x140a9af5d: lea     rdx,[rip+0xc4b080]        # 0x1416e5fe4 ; literal='tool'
0x140a9af64: jmp     0x140a9e956
0x140a9af69: mov     eax,DWORD PTR [rbp+0x220]
0x140a9af6f: cmp     di,0xffff
0x140a9af73: jne     0x140a9af79
0x140a9af75: test    eax,eax
0x140a9af77: je      0x140a9afc7
0x140a9af79: mov     WORD PTR [rsp+0x30],r9w
0x140a9af7f: mov     BYTE PTR [rsp+0x28],r8b
0x140a9af84: mov     DWORD PTR [rsp+0x20],eax
0x140a9af88: mov     r9d,esi
0x140a9af8b: movzx   r8d,di
0x140a9af8f: lea     rdx,[rsp+0x68]
0x140a9af94: lea     rcx,[rip+0x19528d5]        # 0x1423ed870
0x140a9af9b: call    0x1414e58e0
0x140a9afa0: lea     rdx,[rsp+0x68]
0x140a9afa5: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9afaa: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9afb0: mov     r8,QWORD PTR [rsp+0x78]
0x140a9afb5: mov     rcx,rbx
0x140a9afb8: call    0x140070fd0
0x140a9afbd: mov     dl,0x20
0x140a9afbf: mov     rcx,rbx
0x140a9afc2: call    0x1400bb140
0x140a9afc7: mov     rcx,QWORD PTR [rip+0x1a6df12]        # 0x142508ee0
0x140a9afce: mov     r8,QWORD PTR [rip+0x1a6df03]        # 0x142508ed8
0x140a9afd5: sub     rcx,r8
0x140a9afd8: sar     rcx,0x3
0x140a9afdc: sub     ecx,0x1
0x140a9afdf: movsxd  rdx,ecx
0x140a9afe2: js      0x140a9aff7
0x140a9afe4: mov     rax,QWORD PTR [r8+rdx*8]
0x140a9afe8: cmp     WORD PTR [rax+0x28],r15w
0x140a9afed: je      0x140a9b009
0x140a9afef: dec     ecx
0x140a9aff1: sub     rdx,0x1
0x140a9aff5: jns     0x140a9afe4
0x140a9aff7: mov     r8d,0x3
0x140a9affd: lea     rdx,[rip+0xc4afd0]        # 0x1416e5fd4 ; literal='toy'
0x140a9b004: jmp     0x140a9e953
0x140a9b009: movsxd  rax,ecx
0x140a9b00c: mov     rcx,QWORD PTR [r8+rax*8]
0x140a9b010: test    rcx,rcx
0x140a9b013: je      0x140a9aff7
0x140a9b015: mov     edx,0x88
0x140a9b01a: mov     eax,0x68
0x140a9b01f: cmp     r12d,0x1
0x140a9b023: cmove   edx,eax
0x140a9b026: add     rdx,rcx
0x140a9b029: mov     rcx,rbx
0x140a9b02c: call    0x1400bb2d0
0x140a9b031: jmp     0x140a9e96b
0x140a9b036: mov     eax,DWORD PTR [rbp+0x220]
0x140a9b03c: cmp     di,0xffff
0x140a9b040: jne     0x140a9b04a
0x140a9b042: test    eax,eax
0x140a9b044: je      0x140a9b0f5
0x140a9b04a: mov     WORD PTR [rsp+0x30],r9w
0x140a9b050: mov     BYTE PTR [rsp+0x28],r8b
0x140a9b055: mov     DWORD PTR [rsp+0x20],eax
0x140a9b059: mov     r9d,esi
0x140a9b05c: movzx   r8d,di
0x140a9b060: lea     rdx,[rsp+0x68]
0x140a9b065: lea     rcx,[rip+0x1952804]        # 0x1423ed870
0x140a9b06c: call    0x1414e58e0
0x140a9b071: lea     rdx,[rsp+0x68]
0x140a9b076: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9b07b: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9b081: mov     r8,QWORD PTR [rsp+0x78]
0x140a9b086: mov     rcx,rbx
0x140a9b089: call    0x140070fd0
0x140a9b08e: mov     dl,0x20
0x140a9b090: mov     rcx,rbx
0x140a9b093: call    0x1400bb140
0x140a9b098: mov     ecx,0x1a3
0x140a9b09d: movzx   eax,di
0x140a9b0a0: sub     ax,cx
0x140a9b0a3: mov     ecx,0xc7
0x140a9b0a8: cmp     ax,cx
0x140a9b0ab: ja      0x140a9b0c1
0x140a9b0ad: lea     rdx,[rip+0xc504a0]        # 0x1416eb554 ; literal='cup'
0x140a9b0b4: mov     rcx,rbx
0x140a9b0b7: call    0x140070b20
0x140a9b0bc: jmp     0x140a9e95b
0x140a9b0c1: test    di,di
0x140a9b0c4: jne     0x140a9b0f5
0x140a9b0c6: xor     r8d,r8d
0x140a9b0c9: mov     r9d,esi
0x140a9b0cc: mov     edx,0x2f
0x140a9b0d1: lea     rcx,[rip+0x1952798]        # 0x1423ed870
0x140a9b0d8: call    0x14146fea0
0x140a9b0dd: test    al,al
0x140a9b0df: jne     0x140a9b0f5
0x140a9b0e1: lea     rdx,[rip+0xc50470]        # 0x1416eb558 ; literal='mug'
0x140a9b0e8: mov     rcx,rbx
0x140a9b0eb: call    0x140070b20
0x140a9b0f0: jmp     0x140a9e95b
0x140a9b0f5: mov     r8d,0x6
0x140a9b0fb: lea     rdx,[rip+0xc5045a]        # 0x1416eb55c ; literal='goblet'
0x140a9b102: jmp     0x140a9e953
0x140a9b107: mov     eax,DWORD PTR [rbp+0x220]
0x140a9b10d: cmp     di,0xffff
0x140a9b111: jne     0x140a9b117
0x140a9b113: test    eax,eax
0x140a9b115: je      0x140a9b165
0x140a9b117: mov     WORD PTR [rsp+0x30],r9w
0x140a9b11d: mov     BYTE PTR [rsp+0x28],r8b
0x140a9b122: mov     DWORD PTR [rsp+0x20],eax
0x140a9b126: mov     r9d,esi
0x140a9b129: movzx   r8d,di
0x140a9b12d: lea     rdx,[rsp+0x68]
0x140a9b132: lea     rcx,[rip+0x1952737]        # 0x1423ed870
0x140a9b139: call    0x1414e58e0
0x140a9b13e: lea     rdx,[rsp+0x68]
0x140a9b143: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9b148: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9b14e: mov     r8,QWORD PTR [rsp+0x78]
0x140a9b153: mov     rcx,rbx
0x140a9b156: call    0x140070fd0
0x140a9b15b: mov     dl,0x20
0x140a9b15d: mov     rcx,rbx
0x140a9b160: call    0x1400bb140
0x140a9b165: mov     r8d,0x6
0x140a9b16b: lea     rdx,[rip+0xc503ae]        # 0x1416eb520 ; literal='window'
0x140a9b172: jmp     0x140a9e953
0x140a9b177: mov     eax,DWORD PTR [rbp+0x220]
0x140a9b17d: cmp     di,0xffff
0x140a9b181: jne     0x140a9b187
0x140a9b183: test    eax,eax
0x140a9b185: je      0x140a9b1d5
0x140a9b187: mov     WORD PTR [rsp+0x30],r9w
0x140a9b18d: mov     BYTE PTR [rsp+0x28],r8b
0x140a9b192: mov     DWORD PTR [rsp+0x20],eax
0x140a9b196: mov     r9d,esi
0x140a9b199: movzx   r8d,di
0x140a9b19d: lea     rdx,[rsp+0x68]
0x140a9b1a2: lea     rcx,[rip+0x19526c7]        # 0x1423ed870
0x140a9b1a9: call    0x1414e58e0
0x140a9b1ae: lea     rdx,[rsp+0x68]
0x140a9b1b3: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9b1b8: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9b1be: mov     r8,QWORD PTR [rsp+0x78]
0x140a9b1c3: mov     rcx,rbx
0x140a9b1c6: call    0x140070fd0
0x140a9b1cb: mov     dl,0x20
0x140a9b1cd: mov     rcx,rbx
0x140a9b1d0: call    0x1400bb140
0x140a9b1d5: mov     r8d,esi
0x140a9b1d8: movzx   edx,di
0x140a9b1db: lea     rcx,[rip+0x195268e]        # 0x1423ed870
0x140a9b1e2: call    0x1414c1d30
0x140a9b1e7: test    rax,rax
0x140a9b1ea: je      0x140a9b206
0x140a9b1ec: cmp     DWORD PTR [rax+0x298],0x6
0x140a9b1f3: jle     0x140a9b206
0x140a9b1f5: mov     rax,QWORD PTR [rax+0x290]
0x140a9b1fc: test    BYTE PTR [rax+0x6],0x2
0x140a9b200: je      0x140a9b206
0x140a9b202: mov     al,0x1
0x140a9b204: jmp     0x140a9b208
0x140a9b206: xor     al,al
0x140a9b208: mov     r8d,0x9
0x140a9b20e: mov     r15d,0x4
0x140a9b214: test    al,al
0x140a9b216: cmove   r8d,r15d
0x140a9b21a: lea     rcx,[rip+0xc50313]        # 0x1416eb534 ; literal='cage'
0x140a9b221: lea     rdx,[rip+0xc50300]        # 0x1416eb528 ; literal='terrarium'
0x140a9b228: cmove   rdx,rcx
0x140a9b22c: jmp     0x140a9e953
0x140a9b231: mov     eax,DWORD PTR [rbp+0x220]
0x140a9b237: cmp     di,0xffff
0x140a9b23b: jne     0x140a9b241
0x140a9b23d: test    eax,eax
0x140a9b23f: je      0x140a9b28f
0x140a9b241: mov     WORD PTR [rsp+0x30],r9w
0x140a9b247: mov     BYTE PTR [rsp+0x28],r8b
0x140a9b24c: mov     DWORD PTR [rsp+0x20],eax
0x140a9b250: mov     r9d,esi
0x140a9b253: movzx   r8d,di
0x140a9b257: lea     rdx,[rsp+0x68]
0x140a9b25c: lea     rcx,[rip+0x195260d]        # 0x1423ed870
0x140a9b263: call    0x1414e58e0
0x140a9b268: lea     rdx,[rsp+0x68]
0x140a9b26d: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9b272: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9b278: mov     r8,QWORD PTR [rsp+0x78]
0x140a9b27d: mov     rcx,rbx
0x140a9b280: call    0x140070fd0
0x140a9b285: mov     dl,0x20
0x140a9b287: mov     rcx,rbx
0x140a9b28a: call    0x1400bb140
0x140a9b28f: mov     r8d,0x6
0x140a9b295: lea     rdx,[rip+0xc502a0]        # 0x1416eb53c ; literal='barrel'
0x140a9b29c: jmp     0x140a9e953
0x140a9b2a1: mov     eax,DWORD PTR [rbp+0x220]
0x140a9b2a7: cmp     di,0xffff
0x140a9b2ab: jne     0x140a9b2b1
0x140a9b2ad: test    eax,eax
0x140a9b2af: je      0x140a9b2ff
0x140a9b2b1: mov     WORD PTR [rsp+0x30],r9w
0x140a9b2b7: mov     BYTE PTR [rsp+0x28],r8b
0x140a9b2bc: mov     DWORD PTR [rsp+0x20],eax
0x140a9b2c0: mov     r9d,esi
0x140a9b2c3: movzx   r8d,di
0x140a9b2c7: lea     rdx,[rsp+0x68]
0x140a9b2cc: lea     rcx,[rip+0x195259d]        # 0x1423ed870
0x140a9b2d3: call    0x1414e58e0
0x140a9b2d8: lea     rdx,[rsp+0x68]
0x140a9b2dd: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9b2e2: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9b2e8: mov     r8,QWORD PTR [rsp+0x78]
0x140a9b2ed: mov     rcx,rbx
0x140a9b2f0: call    0x140070fd0
0x140a9b2f5: mov     dl,0x20
0x140a9b2f7: mov     rcx,rbx
0x140a9b2fa: call    0x1400bb140
0x140a9b2ff: mov     r8d,0x6
0x140a9b305: lea     rdx,[rip+0xc501f0]        # 0x1416eb4fc ; literal='bucket'
0x140a9b30c: jmp     0x140a9e953
0x140a9b311: mov     eax,DWORD PTR [rbp+0x220]
0x140a9b317: cmp     di,0xffff
0x140a9b31b: jne     0x140a9b321
0x140a9b31d: test    eax,eax
0x140a9b31f: je      0x140a9b36f
0x140a9b321: mov     WORD PTR [rsp+0x30],r9w
0x140a9b327: mov     BYTE PTR [rsp+0x28],r8b
0x140a9b32c: mov     DWORD PTR [rsp+0x20],eax
0x140a9b330: mov     r9d,esi
0x140a9b333: movzx   r8d,di
0x140a9b337: lea     rdx,[rsp+0x68]
0x140a9b33c: lea     rcx,[rip+0x195252d]        # 0x1423ed870
0x140a9b343: call    0x1414e58e0
0x140a9b348: lea     rdx,[rsp+0x68]
0x140a9b34d: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9b352: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9b358: mov     r8,QWORD PTR [rsp+0x78]
0x140a9b35d: mov     rcx,rbx
0x140a9b360: call    0x140070fd0
0x140a9b365: mov     dl,0x20
0x140a9b367: mov     rcx,rbx
0x140a9b36a: call    0x1400bb140
0x140a9b36f: mov     r8d,0xb
0x140a9b375: lea     rdx,[rip+0xc5018c]        # 0x1416eb508 ; literal='animal trap'
0x140a9b37c: jmp     0x140a9e953
0x140a9b381: mov     eax,DWORD PTR [rbp+0x220]
0x140a9b387: cmp     di,0xffff
0x140a9b38b: jne     0x140a9b391
0x140a9b38d: test    eax,eax
0x140a9b38f: je      0x140a9b405
0x140a9b391: mov     WORD PTR [rsp+0x30],r9w
0x140a9b397: mov     BYTE PTR [rsp+0x28],r8b
0x140a9b39c: mov     DWORD PTR [rsp+0x20],eax
0x140a9b3a0: mov     r9d,esi
0x140a9b3a3: movzx   r8d,di
0x140a9b3a7: lea     rdx,[rsp+0x68]
0x140a9b3ac: lea     rcx,[rip+0x19524bd]        # 0x1423ed870
0x140a9b3b3: call    0x1414e58e0
0x140a9b3b8: lea     rdx,[rsp+0x68]
0x140a9b3bd: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9b3c2: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9b3c8: mov     r8,QWORD PTR [rsp+0x78]
0x140a9b3cd: mov     rcx,rbx
0x140a9b3d0: call    0x140070fd0
0x140a9b3d5: mov     dl,0x20
0x140a9b3d7: mov     rcx,rbx
0x140a9b3da: call    0x1400bb140
0x140a9b3df: mov     ecx,0x1a3
0x140a9b3e4: sub     di,cx
0x140a9b3e7: mov     ecx,0xc7
0x140a9b3ec: cmp     di,cx
0x140a9b3ef: ja      0x140a9b405
0x140a9b3f1: lea     rdx,[rip+0xbab4e4]        # 0x1416468dc ; literal='chair'
0x140a9b3f8: mov     rcx,rbx
0x140a9b3fb: call    0x140070b20
0x140a9b400: jmp     0x140a9e95b
0x140a9b405: mov     r8d,0x6
0x140a9b40b: lea     rdx,[rip+0xc50102]        # 0x1416eb514 ; literal='throne'
0x140a9b412: jmp     0x140a9e953
0x140a9b417: mov     r14d,DWORD PTR [rbp+0x220]
0x140a9b41e: cmp     di,0xffff
0x140a9b422: jne     0x140a9b429
0x140a9b424: test    r14d,r14d
0x140a9b427: je      0x140a9b478
0x140a9b429: mov     WORD PTR [rsp+0x30],r9w
0x140a9b42f: mov     BYTE PTR [rsp+0x28],r8b
0x140a9b434: mov     DWORD PTR [rsp+0x20],r14d
0x140a9b439: mov     r9d,esi
0x140a9b43c: movzx   r8d,di
0x140a9b440: lea     rdx,[rsp+0x68]
0x140a9b445: lea     rcx,[rip+0x1952424]        # 0x1423ed870
0x140a9b44c: call    0x1414e58e0
0x140a9b451: lea     rdx,[rsp+0x68]
0x140a9b456: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9b45b: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9b461: mov     r8,QWORD PTR [rsp+0x78]
0x140a9b466: mov     rcx,rbx
0x140a9b469: call    0x140070fd0
0x140a9b46e: mov     dl,0x20
0x140a9b470: mov     rcx,rbx
0x140a9b473: call    0x1400bb140
0x140a9b478: mov     r8d,esi
0x140a9b47b: movzx   edx,di
0x140a9b47e: lea     rcx,[rip+0x19523eb]        # 0x1423ed870
0x140a9b485: call    0x1414c1d30
0x140a9b48a: test    rax,rax
0x140a9b48d: je      0x140a9b4af
0x140a9b48f: cmp     DWORD PTR [rax+0x298],0x3
0x140a9b496: jle     0x140a9b4a9
0x140a9b498: mov     rax,QWORD PTR [rax+0x290]
0x140a9b49f: test    BYTE PTR [rax+0x3],0x40
0x140a9b4a3: je      0x140a9b4a9
0x140a9b4a5: mov     al,0x1
0x140a9b4a7: jmp     0x140a9b4ab
0x140a9b4a9: xor     al,al
0x140a9b4ab: test    al,al
0x140a9b4ad: jne     0x140a9b4b5
0x140a9b4af: test    r14b,0x8
0x140a9b4b3: je      0x140a9b4d5
0x140a9b4b5: test    DWORD PTR [rbp+0x1f0],0x200
0x140a9b4bf: je      0x140a9b4d5
0x140a9b4c1: lea     rdx,[rip+0xc50054]        # 0x1416eb51c ; literal='web'
0x140a9b4c8: mov     rcx,rbx
0x140a9b4cb: call    0x140070b20
0x140a9b4d0: jmp     0x140a9e95b
0x140a9b4d5: mov     r8d,esi
0x140a9b4d8: movzx   edx,di
0x140a9b4db: lea     rcx,[rip+0x195238e]        # 0x1423ed870
0x140a9b4e2: call    0x1414c1d30
0x140a9b4e7: test    rax,rax
0x140a9b4ea: je      0x140a9b520
0x140a9b4ec: cmp     DWORD PTR [rax+0x298],0x5
0x140a9b4f3: jle     0x140a9b506
0x140a9b4f5: mov     rax,QWORD PTR [rax+0x290]
0x140a9b4fc: cmp     BYTE PTR [rax+0x5],0x0
0x140a9b500: jge     0x140a9b506
0x140a9b502: mov     al,0x1
0x140a9b504: jmp     0x140a9b508
0x140a9b506: xor     al,al
0x140a9b508: test    al,al
0x140a9b50a: je      0x140a9b520
0x140a9b50c: lea     rdx,[rip+0xc4ffc5]        # 0x1416eb4d8 ; literal='strands'
0x140a9b513: mov     rcx,rbx
0x140a9b516: call    0x140070b20
0x140a9b51b: jmp     0x140a9e96b
0x140a9b520: mov     r9d,esi
0x140a9b523: movzx   r8d,di
0x140a9b527: mov     edx,0x3e
0x140a9b52c: lea     rcx,[rip+0x195233d]        # 0x1423ed870
0x140a9b533: call    0x14146fea0
0x140a9b538: mov     rcx,rbx
0x140a9b53b: test    al,al
0x140a9b53d: je      0x140a9b550
0x140a9b53f: lea     rdx,[rip+0xb90eca]        # 0x14162c410 ; literal='yarn'
0x140a9b546: call    0x140070b20
0x140a9b54b: jmp     0x140a9e96b
0x140a9b550: lea     rdx,[rip+0xb90ea1]        # 0x14162c3f8 ; literal='thread'
0x140a9b557: call    0x140070b20
0x140a9b55c: jmp     0x140a9e96b
0x140a9b561: mov     eax,DWORD PTR [rbp+0x220]
0x140a9b567: cmp     di,0xffff
0x140a9b56b: jne     0x140a9b571
0x140a9b56d: test    eax,eax
0x140a9b56f: je      0x140a9b5bf
0x140a9b571: mov     WORD PTR [rsp+0x30],r9w
0x140a9b577: mov     BYTE PTR [rsp+0x28],r8b
0x140a9b57c: mov     DWORD PTR [rsp+0x20],eax
0x140a9b580: mov     r9d,esi
0x140a9b583: movzx   r8d,di
0x140a9b587: lea     rdx,[rsp+0x68]
0x140a9b58c: lea     rcx,[rip+0x19522dd]        # 0x1423ed870
0x140a9b593: call    0x1414e58e0
0x140a9b598: lea     rdx,[rsp+0x68]
0x140a9b59d: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9b5a2: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9b5a8: mov     r8,QWORD PTR [rsp+0x78]
0x140a9b5ad: mov     rcx,rbx
0x140a9b5b0: call    0x140070fd0
0x140a9b5b5: mov     dl,0x20
0x140a9b5b7: mov     rcx,rbx
0x140a9b5ba: call    0x1400bb140
0x140a9b5bf: mov     r8d,0x5
0x140a9b5c5: lea     rdx,[rip+0xb90e34]        # 0x14162c400 ; literal='cloth'
0x140a9b5cc: mov     rcx,rbx
0x140a9b5cf: call    0x140070fd0
0x140a9b5d4: jmp     0x140a9e96b
0x140a9b5d9: mov     r13d,DWORD PTR [rbp+0x220]
0x140a9b5e0: cmp     di,0xffff
0x140a9b5e4: jne     0x140a9b5ef
0x140a9b5e6: test    r13d,r13d
0x140a9b5e9: je      0x140a9b6c9
0x140a9b5ef: mov     r8,QWORD PTR [rip+0x19661e2]        # 0x1424017d8
0x140a9b5f6: mov     r11,QWORD PTR [rip+0x19661d3]        # 0x1424017d0
0x140a9b5fd: sub     r8,r11
0x140a9b600: sar     r8,0x3
0x140a9b604: test    r8d,r8d
0x140a9b607: je      0x140a9b676
0x140a9b609: cmp     r14d,0xffffffff
0x140a9b60d: je      0x140a9b676
0x140a9b60f: sub     r8d,0x1
0x140a9b613: mov     edx,r9d
0x140a9b616: js      0x140a9b64a
0x140a9b618: nop     DWORD PTR [rax+rax*1+0x0]
0x140a9b620: lea     ecx,[rdx+r8*1]
0x140a9b624: sar     ecx,1
0x140a9b626: movsxd  rax,ecx
0x140a9b629: mov     r10,QWORD PTR [r11+rax*8]
0x140a9b62d: cmp     DWORD PTR [r10+0x1c],r14d
0x140a9b631: je      0x140a9b665
0x140a9b633: lea     eax,[rcx+0x1]
0x140a9b636: cmovle  edx,eax
0x140a9b639: lea     eax,[rcx-0x1]
0x140a9b63c: cmovle  eax,r8d
0x140a9b640: mov     r8d,eax
0x140a9b643: cmp     edx,eax
0x140a9b645: jle     0x140a9b620
0x140a9b647: xor     r9d,r9d
0x140a9b64a: mov     r10,r9
0x140a9b64d: test    r10,r10
0x140a9b650: je      0x140a9b676
0x140a9b652: mov     eax,DWORD PTR [r10+0xec]
0x140a9b659: test    al,0x1
0x140a9b65b: je      0x140a9b66a
0x140a9b65d: mov     r15d,0x4
0x140a9b663: jmp     0x140a9b67a
0x140a9b665: xor     r9d,r9d
0x140a9b668: jmp     0x140a9b64d
0x140a9b66a: test    al,0x2
0x140a9b66c: je      0x140a9b676
0x140a9b66e: mov     r15d,0x5
0x140a9b674: jmp     0x140a9b67a
0x140a9b676: movzx   r15d,r9w
0x140a9b67a: mov     WORD PTR [rsp+0x30],r15w
0x140a9b680: mov     BYTE PTR [rsp+0x28],0x1
0x140a9b685: mov     DWORD PTR [rsp+0x20],r13d
0x140a9b68a: mov     r9d,esi
0x140a9b68d: movzx   r8d,di
0x140a9b691: lea     rdx,[rsp+0x68]
0x140a9b696: lea     rcx,[rip+0x19521d3]        # 0x1423ed870
0x140a9b69d: call    0x1414e58e0
0x140a9b6a2: lea     rdx,[rsp+0x68]
0x140a9b6a7: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9b6ac: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9b6b2: mov     r8,QWORD PTR [rsp+0x78]
0x140a9b6b7: mov     rcx,rbx
0x140a9b6ba: call    0x140070fd0
0x140a9b6bf: mov     dl,0x20
0x140a9b6c1: mov     rcx,rbx
0x140a9b6c4: call    0x1400bb140
0x140a9b6c9: mov     r8d,0x5
0x140a9b6cf: lea     rdx,[rip+0xc4fe0a]        # 0x1416eb4e0 ; literal='sheet'
0x140a9b6d6: mov     rcx,rbx
0x140a9b6d9: call    0x140070fd0
0x140a9b6de: jmp     0x140a9e96b
0x140a9b6e3: mov     eax,DWORD PTR [rbp+0x220]
0x140a9b6e9: cmp     esi,0xffffffff
0x140a9b6ec: jne     0x140a9b706
0x140a9b6ee: test    eax,eax
0x140a9b6f0: jne     0x140a9b706
0x140a9b6f2: lea     rdx,[rip+0xc4fdef]        # 0x1416eb4e8 ; literal='tanned hide'
0x140a9b6f9: mov     rcx,rbx
0x140a9b6fc: call    0x140070b20
0x140a9b701: jmp     0x140a9e95b
0x140a9b706: mov     WORD PTR [rsp+0x30],r9w
0x140a9b70c: mov     BYTE PTR [rsp+0x28],r8b
0x140a9b711: mov     DWORD PTR [rsp+0x20],eax
0x140a9b715: mov     r9d,esi
0x140a9b718: movzx   r8d,di
0x140a9b71c: lea     rdx,[rsp+0x68]
0x140a9b721: lea     rcx,[rip+0x1952148]        # 0x1423ed870
0x140a9b728: call    0x1414e58e0
0x140a9b72d: lea     rdx,[rsp+0x68]
0x140a9b732: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9b737: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9b73d: mov     r8,QWORD PTR [rsp+0x78]
0x140a9b742: mov     rcx,rbx
0x140a9b745: call    0x140070fd0
0x140a9b74a: jmp     0x140a9e96b
0x140a9b74f: mov     r8d,0x5
0x140a9b755: lea     rdx,[rip+0xc4fd98]        # 0x1416eb4f4 ; literal='totem'
0x140a9b75c: jmp     0x140a9e953
0x140a9b761: mov     r15d,0x7
0x140a9b767: mov     eax,DWORD PTR [rbp+0x220]
0x140a9b76d: cmp     di,0xffff
0x140a9b771: jne     0x140a9b777
0x140a9b773: test    eax,eax
0x140a9b775: je      0x140a9b7cd
0x140a9b777: mov     WORD PTR [rsp+0x30],r9w
0x140a9b77d: mov     BYTE PTR [rsp+0x28],r8b
0x140a9b782: mov     DWORD PTR [rsp+0x20],eax
0x140a9b786: mov     r9d,esi
0x140a9b789: movzx   r8d,di
0x140a9b78d: lea     rdx,[rsp+0x68]
0x140a9b792: lea     rcx,[rip+0x19520d7]        # 0x1423ed870
0x140a9b799: call    0x1414e58e0
0x140a9b79e: lea     rdx,[rsp+0x68]
0x140a9b7a3: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9b7a8: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9b7ae: mov     r8,QWORD PTR [rsp+0x78]
0x140a9b7b3: mov     rcx,rbx
0x140a9b7b6: call    0x140070fd0
0x140a9b7bb: mov     r8,r15
0x140a9b7be: lea     rdx,[rip+0xc4fceb]        # 0x1416eb4b0 ; literal='-bound '
0x140a9b7c5: mov     rcx,rbx
0x140a9b7c8: call    0x140070fd0
0x140a9b7cd: cmp     r12d,0x1
0x140a9b7d1: mov     eax,0x5
0x140a9b7d6: cmove   r15,rax
0x140a9b7da: lea     rax,[rip+0xc4fcdf]        # 0x1416eb4c0 ; literal='codex'
0x140a9b7e1: lea     rdx,[rip+0xc4fcd0]        # 0x1416eb4b8 ; literal='codices'
0x140a9b7e8: cmove   rdx,rax
0x140a9b7ec: mov     r8,r15
0x140a9b7ef: mov     rcx,rbx
0x140a9b7f2: call    0x140070fd0
0x140a9b7f7: jmp     0x140a9e96b
0x140a9b7fc: mov     eax,DWORD PTR [rbp+0x220]
0x140a9b802: cmp     di,0xffff
0x140a9b806: jne     0x140a9b80c
0x140a9b808: test    eax,eax
0x140a9b80a: je      0x140a9b85a
0x140a9b80c: mov     WORD PTR [rsp+0x30],r9w
0x140a9b812: mov     BYTE PTR [rsp+0x28],r8b
0x140a9b817: mov     DWORD PTR [rsp+0x20],eax
0x140a9b81b: mov     r9d,esi
0x140a9b81e: movzx   r8d,di
0x140a9b822: lea     rdx,[rsp+0x68]
0x140a9b827: lea     rcx,[rip+0x1952042]        # 0x1423ed870
0x140a9b82e: call    0x1414e58e0
0x140a9b833: lea     rdx,[rsp+0x68]
0x140a9b838: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9b83d: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9b843: mov     r8,QWORD PTR [rsp+0x78]
0x140a9b848: mov     rcx,rbx
0x140a9b84b: call    0x140070fd0
0x140a9b850: mov     dl,0x20
0x140a9b852: mov     rcx,rbx
0x140a9b855: call    0x1400bb140
0x140a9b85a: mov     r8d,0x8
0x140a9b860: lea     rdx,[rip+0xc4fc61]        # 0x1416eb4c8 ; literal='figurine'
0x140a9b867: jmp     0x140a9e953
0x140a9b86c: test    DWORD PTR [rbp+0x1f0],0x100
0x140a9b876: je      0x140a9b893
0x140a9b878: mov     r8d,0x7
0x140a9b87e: lea     rdx,[rip+0xc4fc03]        # 0x1416eb488 ; literal='rotten '
0x140a9b885: mov     rcx,rbx
0x140a9b888: call    0x140070fd0
0x140a9b88d: mov     r8d,0x1
0x140a9b893: mov     eax,DWORD PTR [rbp+0x220]
0x140a9b899: cmp     di,0xffff
0x140a9b89d: jne     0x140a9b8b7
0x140a9b89f: test    eax,eax
0x140a9b8a1: jne     0x140a9b8b7
0x140a9b8a3: lea     rdx,[rip+0xbcfbfa]        # 0x14166b4a4 ; literal='drink'
0x140a9b8aa: mov     rcx,rbx
0x140a9b8ad: call    0x140070b20
0x140a9b8b2: jmp     0x140a9e95b
0x140a9b8b7: mov     WORD PTR [rsp+0x30],r8w
0x140a9b8bd: mov     BYTE PTR [rsp+0x28],0x0
0x140a9b8c2: jmp     0x140a9b711
0x140a9b8c7: movzx   r13d,r9w
0x140a9b8cb: mov     WORD PTR [rsp+0x4c],r9w
0x140a9b8d1: mov     r15d,0x7
0x140a9b8d7: test    DWORD PTR [rbp+0x1f0],0x100
0x140a9b8e1: je      0x140a9b8f8
0x140a9b8e3: mov     r8d,r15d
0x140a9b8e6: lea     rdx,[rip+0xc4fb9b]        # 0x1416eb488 ; literal='rotten '
0x140a9b8ed: mov     rcx,rbx
0x140a9b8f0: call    0x140070fd0
0x140a9b8f5: xor     r9d,r9d
0x140a9b8f8: cmp     r14d,0xffffffff
0x140a9b8fc: je      0x140a9bbca
0x140a9b902: xor     r11b,r11b
0x140a9b905: mov     BYTE PTR [rsp+0x40],r11b
0x140a9b90a: xor     al,al
0x140a9b90c: mov     BYTE PTR [rsp+0x43],al
0x140a9b910: mov     BYTE PTR [rsp+0x41],al
0x140a9b914: xor     cl,cl
0x140a9b916: mov     BYTE PTR [rsp+0x44],cl
0x140a9b91a: mov     BYTE PTR [rsp+0x45],al
0x140a9b91e: mov     BYTE PTR [rsp+0x42],al
0x140a9b922: mov     BYTE PTR [rsp+0x46],cl
0x140a9b926: mov     BYTE PTR [rsp+0x47],al
0x140a9b92a: mov     BYTE PTR [rsp+0x48],cl
0x140a9b92e: mov     BYTE PTR [rsp+0x49],al
0x140a9b932: mov     r10,QWORD PTR [rip+0x1965e9f]        # 0x1424017d8
0x140a9b939: mov     r8,QWORD PTR [rip+0x1965e90]        # 0x1424017d0
0x140a9b940: sub     r10,r8
0x140a9b943: sar     r10,0x3
0x140a9b947: test    r10d,r10d
0x140a9b94a: je      0x140a9bbd1
0x140a9b950: sub     r10d,0x1
0x140a9b954: mov     edx,r9d
0x140a9b957: js      0x140a9b993
0x140a9b959: nop     DWORD PTR [rax+0x0]
0x140a9b960: lea     ecx,[rdx+r10*1]
0x140a9b964: sar     ecx,1
0x140a9b966: movsxd  rax,ecx
0x140a9b969: mov     rax,QWORD PTR [r8+rax*8]
0x140a9b96d: mov     QWORD PTR [rsp+0x60],rax
0x140a9b972: cmp     DWORD PTR [rax+0x1c],r14d
0x140a9b976: je      0x140a9ba4d
0x140a9b97c: lea     eax,[rcx+0x1]
0x140a9b97f: cmovle  edx,eax
0x140a9b982: lea     eax,[rcx-0x1]
0x140a9b985: cmovle  eax,r10d
0x140a9b989: mov     r10d,eax
0x140a9b98c: cmp     edx,eax
0x140a9b98e: jle     0x140a9b960
0x140a9b990: xor     r9d,r9d
0x140a9b993: mov     rax,r9
0x140a9b996: mov     QWORD PTR [rsp+0x60],rax
0x140a9b99b: test    rax,rax
0x140a9b99e: je      0x140a9bbd1
0x140a9b9a4: mov     rax,QWORD PTR [rax+0x98]
0x140a9b9ab: test    rax,rax
0x140a9b9ae: je      0x140a9bbd1
0x140a9b9b4: mov     rdx,QWORD PTR [rax]
0x140a9b9b7: mov     rax,QWORD PTR [rax+0x8]
0x140a9b9bb: sub     rax,rdx
0x140a9b9be: sar     rax,0x3
0x140a9b9c2: test    rax,rax
0x140a9b9c5: je      0x140a9bbd1
0x140a9b9cb: mov     rsi,r9
0x140a9b9ce: mov     r12,QWORD PTR [rsp+0x60]
0x140a9b9d3: mov     edi,r9d
0x140a9b9d6: movzx   r14d,WORD PTR [rsp+0x4a]
0x140a9b9dc: lea     r15,[rip+0xffffffffff56461d]        # 0x140000000
0x140a9b9e3: nop     DWORD PTR [rax+0x0]
0x140a9b9e7: nop     WORD PTR [rax+rax*1+0x0]
0x140a9b9f0: mov     r8,QWORD PTR [rsi+rdx*1]
0x140a9b9f4: movsx   edx,WORD PTR [r8]
0x140a9b9f8: mov     ecx,edx
0x140a9b9fa: sub     ecx,0xd
0x140a9b9fd: je      0x140a9ba75
0x140a9b9ff: sub     ecx,0x2
0x140a9ba02: je      0x140a9bc4e
0x140a9ba08: sub     ecx,0x1
0x140a9ba0b: je      0x140a9bc4e
0x140a9ba11: sub     ecx,0x1
0x140a9ba14: je      0x140a9bc85
0x140a9ba1a: cmp     ecx,0x1
0x140a9ba1d: je      0x140a9bc6a
0x140a9ba23: mov     r8d,DWORD PTR [r8+0x4]
0x140a9ba27: lea     rcx,[rip+0x1951e42]        # 0x1423ed870
0x140a9ba2e: call    0x14146ff00
0x140a9ba33: movsx   rcx,ax
0x140a9ba37: cmp     ecx,0x7
0x140a9ba3a: ja      0x140a9bc5b
0x140a9ba40: mov     ecx,DWORD PTR [r15+rcx*4+0xa9eb54]
0x140a9ba48: add     rcx,r15
0x140a9ba4b: jmp     rcx
0x140a9ba4d: xor     r9d,r9d
0x140a9ba50: jmp     0x140a9b99b
0x140a9ba55: mov     BYTE PTR [rsp+0x49],0x1
0x140a9ba5a: movzx   r11d,BYTE PTR [rsp+0x40]
0x140a9ba60: jmp     0x140a9ba7a
0x140a9ba62: mov     BYTE PTR [rsp+0x44],0x1
0x140a9ba67: movzx   r11d,BYTE PTR [rsp+0x40]
0x140a9ba6d: jmp     0x140a9ba7a
0x140a9ba6f: movzx   r11d,BYTE PTR [rsp+0x40]
0x140a9ba75: mov     BYTE PTR [rsp+0x41],0x1
0x140a9ba7a: inc     edi
0x140a9ba7c: add     rsi,0x8
0x140a9ba80: mov     rax,QWORD PTR [r12+0x98]
0x140a9ba88: mov     rdx,QWORD PTR [rax]
0x140a9ba8b: mov     rcx,QWORD PTR [rax+0x8]
0x140a9ba8f: sub     rcx,rdx
0x140a9ba92: sar     rcx,0x3
0x140a9ba96: movsxd  rax,edi
0x140a9ba99: cmp     rax,rcx
0x140a9ba9c: jb      0x140a9b9f0
0x140a9baa2: mov     WORD PTR [rsp+0x4c],r13w
0x140a9baa8: test    r11b,r11b
0x140a9baab: movzx   edi,WORD PTR [rsp+0x4e]
0x140a9bab0: mov     esi,DWORD PTR [rsp+0x54]
0x140a9bab4: mov     r14d,DWORD PTR [rsp+0x58]
0x140a9bab9: mov     r12d,DWORD PTR [rbp+0x1e8]
0x140a9bac0: mov     r15d,0x7
0x140a9bac6: je      0x140a9bada
0x140a9bac8: mov     r8d,r15d
0x140a9bacb: lea     rdx,[rip+0xc4f9be]        # 0x1416eb490 ; literal='filthy '
0x140a9bad2: mov     rcx,rbx
0x140a9bad5: call    0x140070fd0
0x140a9bada: cmp     BYTE PTR [rsp+0x43],0x0
0x140a9badf: je      0x140a9baf3
0x140a9bae1: mov     r8,r15
0x140a9bae4: lea     rdx,[rip+0xc4f9ad]        # 0x1416eb498 ; literal='sticky '
0x140a9baeb: mov     rcx,rbx
0x140a9baee: call    0x140070fd0
0x140a9baf3: mov     r13d,0x9
0x140a9baf9: cmp     BYTE PTR [rsp+0x41],0x0
0x140a9bafe: je      0x140a9bb12
0x140a9bb00: mov     r8d,r13d
0x140a9bb03: lea     rdx,[rip+0xc4f996]        # 0x1416eb4a0 ; literal='vomitous '
0x140a9bb0a: mov     rcx,rbx
0x140a9bb0d: call    0x140070fd0
0x140a9bb12: cmp     BYTE PTR [rsp+0x44],0x0
0x140a9bb17: je      0x140a9bb2e
0x140a9bb19: mov     r8d,0x6
0x140a9bb1f: lea     rdx,[rip+0xc4f93a]        # 0x1416eb460 ; literal='slimy '
0x140a9bb26: mov     rcx,rbx
0x140a9bb29: call    0x140070fd0
0x140a9bb2e: cmp     BYTE PTR [rsp+0x45],0x0
0x140a9bb33: je      0x140a9bb47
0x140a9bb35: mov     r8,r13
0x140a9bb38: lea     rdx,[rip+0xc3a139]        # 0x1416d5c78 ; literal='stagnant '
0x140a9bb3f: mov     rcx,rbx
0x140a9bb42: call    0x140070fd0
0x140a9bb47: cmp     BYTE PTR [rsp+0x42],0x0
0x140a9bb4c: je      0x140a9bb63
0x140a9bb4e: mov     r8d,0x6
0x140a9bb54: lea     rdx,[rip+0xc4f90d]        # 0x1416eb468 ; literal='dirty '
0x140a9bb5b: mov     rcx,rbx
0x140a9bb5e: call    0x140070fd0
0x140a9bb63: cmp     BYTE PTR [rsp+0x46],0x0
0x140a9bb68: je      0x140a9bb7f
0x140a9bb6a: mov     r8d,0x6
0x140a9bb70: lea     rdx,[rip+0xc4f8f9]        # 0x1416eb470 ; literal='gooey '
0x140a9bb77: mov     rcx,rbx
0x140a9bb7a: call    0x140070fd0
0x140a9bb7f: cmp     BYTE PTR [rsp+0x47],0x0
0x140a9bb84: je      0x140a9bb98
0x140a9bb86: mov     r8,r13
0x140a9bb89: lea     rdx,[rip+0xc4f8e8]        # 0x1416eb478 ; literal='purulent '
0x140a9bb90: mov     rcx,rbx
0x140a9bb93: call    0x140070fd0
0x140a9bb98: cmp     BYTE PTR [rsp+0x48],0x0
0x140a9bb9d: je      0x140a9bbb1
0x140a9bb9f: mov     r8,r13
0x140a9bba2: lea     rdx,[rip+0xc4f88f]        # 0x1416eb438 ; literal='ichorous '
0x140a9bba9: mov     rcx,rbx
0x140a9bbac: call    0x140070fd0
0x140a9bbb1: cmp     BYTE PTR [rsp+0x49],0x0
0x140a9bbb6: je      0x140a9bbca
0x140a9bbb8: mov     r8,r15
0x140a9bbbb: lea     rdx,[rip+0xc4f886]        # 0x1416eb448 ; literal='bloody '
0x140a9bbc2: mov     rcx,rbx
0x140a9bbc5: call    0x140070fd0
0x140a9bbca: mov     r8,QWORD PTR [rip+0x1965bff]        # 0x1424017d0
0x140a9bbd1: movzx   eax,WORD PTR [rsp+0x4a]
0x140a9bbd6: cmp     ax,0x49
0x140a9bbda: jne     0x140a9bd75
0x140a9bbe0: mov     r15d,DWORD PTR [rbp+0x220]
0x140a9bbe7: cmp     di,0xffff
0x140a9bbeb: jne     0x140a9bc8f
0x140a9bbf1: test    r15d,r15d
0x140a9bbf4: jne     0x140a9bc8f
0x140a9bbfa: lea     rdx,[rip+0xc25c07]        # 0x1416c1808 ; literal='liquid'
0x140a9bc01: mov     rcx,rbx
0x140a9bc04: call    0x140070b20
0x140a9bc09: jmp     0x140a9be75
0x140a9bc0e: mov     BYTE PTR [rsp+0x48],0x1
0x140a9bc13: movzx   r11d,BYTE PTR [rsp+0x40]
0x140a9bc19: jmp     0x140a9ba7a
0x140a9bc1e: mov     BYTE PTR [rsp+0x47],0x1
0x140a9bc23: movzx   r11d,BYTE PTR [rsp+0x40]
0x140a9bc29: jmp     0x140a9ba7a
0x140a9bc2e: mov     BYTE PTR [rsp+0x46],0x1
0x140a9bc33: movzx   r11d,BYTE PTR [rsp+0x40]
0x140a9bc39: jmp     0x140a9ba7a
0x140a9bc3e: mov     BYTE PTR [rsp+0x42],0x1
0x140a9bc43: movzx   r11d,BYTE PTR [rsp+0x40]
0x140a9bc49: jmp     0x140a9ba7a
0x140a9bc4e: mov     r11b,0x1
0x140a9bc51: mov     BYTE PTR [rsp+0x40],r11b
0x140a9bc56: jmp     0x140a9ba7a
0x140a9bc5b: inc     r13w
0x140a9bc5f: movzx   r11d,BYTE PTR [rsp+0x40]
0x140a9bc65: jmp     0x140a9ba7a
0x140a9bc6a: cmp     r14w,0x49
0x140a9bc6f: jne     0x140a9bc7b
0x140a9bc71: mov     BYTE PTR [rsp+0x45],0x1
0x140a9bc76: jmp     0x140a9ba7a
0x140a9bc7b: mov     BYTE PTR [rsp+0x42],0x1
0x140a9bc80: jmp     0x140a9ba7a
0x140a9bc85: mov     BYTE PTR [rsp+0x43],0x1
0x140a9bc8a: jmp     0x140a9ba7a
0x140a9bc8f: cmp     r14d,0xffffffff
0x140a9bc93: je      0x140a9bd5f
0x140a9bc99: mov     r9,QWORD PTR [rip+0x1965b38]        # 0x1424017d8
0x140a9bca0: sub     r9,r8
0x140a9bca3: sar     r9,0x3
0x140a9bca7: test    r9d,r9d
0x140a9bcaa: je      0x140a9bd5f
0x140a9bcb0: xor     r13d,r13d
0x140a9bcb3: mov     edx,r13d
0x140a9bcb6: sub     r9d,0x1
0x140a9bcba: js      0x140a9bce7
0x140a9bcbc: nop     DWORD PTR [rax+0x0]
0x140a9bcc0: lea     ecx,[rdx+r9*1]
0x140a9bcc4: sar     ecx,1
0x140a9bcc6: movsxd  rax,ecx
0x140a9bcc9: mov     r11,QWORD PTR [r8+rax*8]
0x140a9bccd: cmp     DWORD PTR [r11+0x1c],r14d
0x140a9bcd1: je      0x140a9bcea
0x140a9bcd3: lea     eax,[rcx+0x1]
0x140a9bcd6: cmovle  edx,eax
0x140a9bcd9: lea     eax,[rcx-0x1]
0x140a9bcdc: cmovle  eax,r9d
0x140a9bce0: mov     r9d,eax
0x140a9bce3: cmp     edx,eax
0x140a9bce5: jle     0x140a9bcc0
0x140a9bce7: mov     r11,r13
0x140a9bcea: test    r11,r11
0x140a9bced: je      0x140a9bd5f
0x140a9bcef: test    BYTE PTR [r11+0xc8],0x1
0x140a9bcf7: je      0x140a9bd5f
0x140a9bcf9: lea     eax,[rdi-0x13]
0x140a9bcfc: mov     ecx,0xc7
0x140a9bd01: cmp     ax,cx
0x140a9bd04: ja      0x140a9bd5f
0x140a9bd06: lea     rcx,[rbp+0x108]
0x140a9bd0d: call    0x140070c50
0x140a9bd12: nop     
0x140a9bd13: mov     r9d,0xffffffff
0x140a9bd19: xor     r8d,r8d
0x140a9bd1c: lea     rdx,[rbp+0x108]
0x140a9bd23: movzx   ecx,si
0x140a9bd26: call    0x140aba4d0
0x140a9bd2b: lea     rdx,[rbp+0x108]
0x140a9bd32: lea     rcx,[rsp+0x68]
0x140a9bd37: call    0x140070b60
0x140a9bd3c: lea     rdx,[rip+0xc4f70d]        # 0x1416eb450 ; literal=' paste'
0x140a9bd43: lea     rcx,[rsp+0x68]
0x140a9bd48: call    0x140070b20
0x140a9bd4d: nop     
0x140a9bd4e: lea     rcx,[rbp+0x108]
0x140a9bd55: call    0x140070e10
0x140a9bd5a: jmp     0x140a9be58
0x140a9bd5f: mov     WORD PTR [rsp+0x30],0x1
0x140a9bd66: mov     BYTE PTR [rsp+0x28],0x0
0x140a9bd6b: mov     DWORD PTR [rsp+0x20],r15d
0x140a9bd70: jmp     0x140a9be40
0x140a9bd75: cmp     ax,0x4b
0x140a9bd79: jne     0x140a9be7c
0x140a9bd7f: mov     r13d,DWORD PTR [rbp+0x220]
0x140a9bd86: cmp     di,0xffff
0x140a9bd8a: jne     0x140a9bda5
0x140a9bd8c: test    r13d,r13d
0x140a9bd8f: jne     0x140a9bda5
0x140a9bd91: lea     rdx,[rip+0xc4f6c0]        # 0x1416eb458 ; literal='glob'
0x140a9bd98: mov     rcx,rbx
0x140a9bd9b: call    0x140070b20
0x140a9bda0: jmp     0x140a9be75
0x140a9bda5: mov     r9,QWORD PTR [rip+0x1965a2c]        # 0x1424017d8
0x140a9bdac: sub     r9,r8
0x140a9bdaf: sar     r9,0x3
0x140a9bdb3: test    r9d,r9d
0x140a9bdb6: je      0x140a9be2a
0x140a9bdb8: cmp     r14d,0xffffffff
0x140a9bdbc: je      0x140a9be2a
0x140a9bdbe: xor     ecx,ecx
0x140a9bdc0: mov     edx,ecx
0x140a9bdc2: sub     r9d,0x1
0x140a9bdc6: js      0x140a9bdf9
0x140a9bdc8: nop     DWORD PTR [rax+rax*1+0x0]
0x140a9bdd0: lea     ecx,[rdx+r9*1]
0x140a9bdd4: sar     ecx,1
0x140a9bdd6: movsxd  rax,ecx
0x140a9bdd9: mov     r11,QWORD PTR [r8+rax*8]
0x140a9bddd: cmp     DWORD PTR [r11+0x1c],r14d
0x140a9bde1: je      0x140a9be14
0x140a9bde3: lea     eax,[rcx+0x1]
0x140a9bde6: cmovle  edx,eax
0x140a9bde9: lea     eax,[rcx-0x1]
0x140a9bdec: cmovle  eax,r9d
0x140a9bdf0: mov     r9d,eax
0x140a9bdf3: cmp     edx,eax
0x140a9bdf5: jle     0x140a9bdd0
0x140a9bdf7: xor     ecx,ecx
0x140a9bdf9: mov     r11,rcx
0x140a9bdfc: test    r11,r11
0x140a9bdff: je      0x140a9be2a
0x140a9be01: mov     eax,DWORD PTR [r11+0xc4]
0x140a9be08: test    al,0x4
0x140a9be0a: je      0x140a9be18
0x140a9be0c: mov     r15d,0x4
0x140a9be12: jmp     0x140a9be30
0x140a9be14: xor     ecx,ecx
0x140a9be16: jmp     0x140a9bdfc
0x140a9be18: test    al,0x2
0x140a9be1a: je      0x140a9be24
0x140a9be1c: mov     r15d,0x5
0x140a9be22: jmp     0x140a9be30
0x140a9be24: movzx   r15d,cx
0x140a9be28: jmp     0x140a9be30
0x140a9be2a: xor     eax,eax
0x140a9be2c: movzx   r15d,ax
0x140a9be30: mov     WORD PTR [rsp+0x30],r15w
0x140a9be36: mov     BYTE PTR [rsp+0x28],0x0
0x140a9be3b: mov     DWORD PTR [rsp+0x20],r13d
0x140a9be40: mov     r9d,esi
0x140a9be43: movzx   r8d,di
0x140a9be47: lea     rdx,[rsp+0x68]
0x140a9be4c: lea     rcx,[rip+0x1951a1d]        # 0x1423ed870
0x140a9be53: call    0x1414e58e0
0x140a9be58: lea     rdx,[rsp+0x68]
0x140a9be5d: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9be62: mov     r8,QWORD PTR [rsp+0x78]
0x140a9be67: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9be6d: mov     rcx,rbx
0x140a9be70: call    0x140070fd0
0x140a9be75: mov     r8,QWORD PTR [rip+0x1965954]        # 0x1424017d0
0x140a9be7c: movzx   r13d,WORD PTR [rsp+0x4c]
0x140a9be82: test    r13w,r13w
0x140a9be86: jle     0x140a9e96b
0x140a9be8c: mov     r9,QWORD PTR [rip+0x1965945]        # 0x1424017d8
0x140a9be93: sub     r9,r8
0x140a9be96: sar     r9,0x3
0x140a9be9a: test    r9d,r9d
0x140a9be9d: je      0x140a9e96b
0x140a9bea3: cmp     r14d,0xffffffff
0x140a9bea7: je      0x140a9e96b
0x140a9bead: xor     r11d,r11d
0x140a9beb0: mov     edx,r11d
0x140a9beb3: sub     r9d,0x1
0x140a9beb7: js      0x140a9bee7
0x140a9beb9: nop     DWORD PTR [rax+0x0]
0x140a9bec0: lea     ecx,[rdx+r9*1]
0x140a9bec4: sar     ecx,1
0x140a9bec6: movsxd  rax,ecx
0x140a9bec9: mov     rdi,QWORD PTR [r8+rax*8]
0x140a9becd: cmp     DWORD PTR [rdi+0x1c],r14d
0x140a9bed1: je      0x140a9beea
0x140a9bed3: lea     eax,[rcx+0x1]
0x140a9bed6: cmovle  edx,eax
0x140a9bed9: lea     eax,[rcx-0x1]
0x140a9bedc: cmovle  eax,r9d
0x140a9bee0: mov     r9d,eax
0x140a9bee3: cmp     edx,eax
0x140a9bee5: jle     0x140a9bec0
0x140a9bee7: mov     rdi,r11
0x140a9beea: test    rdi,rdi
0x140a9beed: je      0x140a9e96b
0x140a9bef3: mov     rax,QWORD PTR [rdi+0x98]
0x140a9befa: test    rax,rax
0x140a9befd: je      0x140a9e96b
0x140a9bf03: xor     r15b,r15b
0x140a9bf06: mov     r14d,r11d
0x140a9bf09: mov     rdx,QWORD PTR [rax]
0x140a9bf0c: mov     rax,QWORD PTR [rax+0x8]
0x140a9bf10: sub     rax,rdx
0x140a9bf13: sar     rax,0x3
0x140a9bf17: test    rax,rax
0x140a9bf1a: je      0x140a9e96b
0x140a9bf20: mov     rsi,r11
0x140a9bf23: lea     r12,[rip+0xffffffffff5640d6]        # 0x140000000
0x140a9bf2a: nop     WORD PTR [rax+rax*1+0x0]
0x140a9bf30: mov     r8,QWORD PTR [rsi+rdx*1]
0x140a9bf34: movsx   edx,WORD PTR [r8]
0x140a9bf38: mov     ecx,edx
0x140a9bf3a: sub     ecx,0xd
0x140a9bf3d: je      0x140a9c035
0x140a9bf43: sub     ecx,0x2
0x140a9bf46: je      0x140a9c035
0x140a9bf4c: sub     ecx,0x1
0x140a9bf4f: je      0x140a9c035
0x140a9bf55: sub     ecx,0x1
0x140a9bf58: je      0x140a9c035
0x140a9bf5e: cmp     ecx,0x1
0x140a9bf61: je      0x140a9c035
0x140a9bf67: mov     r8d,DWORD PTR [r8+0x4]
0x140a9bf6b: lea     rcx,[rip+0x19518fe]        # 0x1423ed870
0x140a9bf72: call    0x14146ff00
0x140a9bf77: movsx   rcx,ax
0x140a9bf7b: cmp     ecx,0x7
0x140a9bf7e: ja      0x140a9bf8d
0x140a9bf80: mov     ecx,DWORD PTR [r12+rcx*4+0xa9eb74]
0x140a9bf88: add     rcx,r12
0x140a9bf8b: jmp     rcx
0x140a9bf8d: test    r15b,r15b
0x140a9bf90: jne     0x140a9bfa4
0x140a9bf92: lea     rdx,[rip+0xc4f46f]        # 0x1416eb408 ; literal=' laced with '
0x140a9bf99: mov     rcx,rbx
0x140a9bf9c: call    0x140070b20
0x140a9bfa1: mov     r15b,0x1
0x140a9bfa4: lea     rcx,[rbp+0x128]
0x140a9bfab: call    0x140070c50
0x140a9bfb0: nop     
0x140a9bfb1: mov     rax,QWORD PTR [rdi+0x98]
0x140a9bfb8: mov     rcx,QWORD PTR [rax]
0x140a9bfbb: mov     rax,QWORD PTR [rsi+rcx*1]
0x140a9bfbf: movzx   ecx,WORD PTR [rax+0x8]
0x140a9bfc3: mov     WORD PTR [rsp+0x30],cx
0x140a9bfc8: mov     BYTE PTR [rsp+0x28],0x0
0x140a9bfcd: mov     DWORD PTR [rsp+0x20],0x0
0x140a9bfd5: mov     r9d,DWORD PTR [rax+0x4]
0x140a9bfd9: movzx   r8d,WORD PTR [rax]
0x140a9bfdd: lea     rdx,[rbp+0x128]
0x140a9bfe4: lea     rcx,[rip+0x1951885]        # 0x1423ed870
0x140a9bfeb: call    0x1414e58e0
0x140a9bff0: lea     rdx,[rbp+0x128]
0x140a9bff7: mov     rcx,rbx
0x140a9bffa: call    0x1400bb2d0
0x140a9bfff: cmp     r13w,0x3
0x140a9c004: jl      0x140a9c00f
0x140a9c006: lea     rdx,[rip+0xb632fb]        # 0x1415ff308 ; literal=', '
0x140a9c00d: jmp     0x140a9c01d
0x140a9c00f: cmp     r13w,0x2
0x140a9c014: jne     0x140a9c025
0x140a9c016: lea     rdx,[rip+0xb63323]        # 0x1415ff340 ; literal=' and '
0x140a9c01d: mov     rcx,rbx
0x140a9c020: call    0x140070b20
0x140a9c025: dec     r13w
0x140a9c029: lea     rcx,[rbp+0x128]
0x140a9c030: call    0x140070e10
0x140a9c035: inc     r14d
0x140a9c038: add     rsi,0x8
0x140a9c03c: mov     rax,QWORD PTR [rdi+0x98]
0x140a9c043: mov     rdx,QWORD PTR [rax]
0x140a9c046: mov     rcx,QWORD PTR [rax+0x8]
0x140a9c04a: sub     rcx,rdx
0x140a9c04d: sar     rcx,0x3
0x140a9c051: movsxd  rax,r14d
0x140a9c054: cmp     rax,rcx
0x140a9c057: jb      0x140a9bf30
0x140a9c05d: mov     r12d,DWORD PTR [rbp+0x1e8]
0x140a9c064: jmp     0x140a9e96b
0x140a9c069: test    DWORD PTR [rbp+0x1f0],0x100
0x140a9c073: je      0x140a9c08d
0x140a9c075: mov     r8d,0x7
0x140a9c07b: lea     rdx,[rip+0xc4f406]        # 0x1416eb488 ; literal='rotten '
0x140a9c082: mov     rcx,rbx
0x140a9c085: call    0x140070fd0
0x140a9c08a: xor     r9d,r9d
0x140a9c08d: cmp     r14d,0xffffffff
0x140a9c091: je      0x140a9c12c
0x140a9c097: mov     r8,QWORD PTR [rip+0x196573a]        # 0x1424017d8
0x140a9c09e: mov     r11,QWORD PTR [rip+0x196572b]        # 0x1424017d0
0x140a9c0a5: sub     r8,r11
0x140a9c0a8: sar     r8,0x3
0x140a9c0ac: test    r8d,r8d
0x140a9c0af: je      0x140a9c12c
0x140a9c0b1: sub     r8d,0x1
0x140a9c0b5: mov     edx,r9d
0x140a9c0b8: js      0x140a9c0ea
0x140a9c0ba: nop     WORD PTR [rax+rax*1+0x0]
0x140a9c0c0: lea     ecx,[rdx+r8*1]
0x140a9c0c4: sar     ecx,1
0x140a9c0c6: movsxd  rax,ecx
0x140a9c0c9: mov     r10,QWORD PTR [r11+rax*8]
0x140a9c0cd: cmp     DWORD PTR [r10+0x1c],r14d
0x140a9c0d1: je      0x140a9c0ed
0x140a9c0d3: lea     eax,[rcx+0x1]
0x140a9c0d6: cmovle  edx,eax
0x140a9c0d9: lea     eax,[rcx-0x1]
0x140a9c0dc: cmovle  eax,r8d
0x140a9c0e0: mov     r8d,eax
0x140a9c0e3: cmp     edx,eax
0x140a9c0e5: jle     0x140a9c0c0
0x140a9c0e7: xor     r9d,r9d
0x140a9c0ea: mov     r10,r9
0x140a9c0ed: test    r10,r10
0x140a9c0f0: je      0x140a9c12c
0x140a9c0f2: movsxd  rax,DWORD PTR [r10+0xc8]
0x140a9c0f9: cmp     eax,0xffffffff
0x140a9c0fc: je      0x140a9c12c
0x140a9c0fe: mov     rcx,rax
0x140a9c101: mov     rax,QWORD PTR [rip+0x1a77330]        # 0x142513438
0x140a9c108: mov     rdx,QWORD PTR [rax+rcx*8]
0x140a9c10c: add     rdx,0x50
0x140a9c110: mov     rcx,rbx
0x140a9c113: call    0x1400bb2d0
0x140a9c118: lea     rdx,[rip+0xc4f2f9]        # 0x1416eb418 ; literal=' dye mix'
0x140a9c11f: mov     rcx,rbx
0x140a9c122: call    0x140070b20
0x140a9c127: jmp     0x140a9e96b
0x140a9c12c: mov     eax,DWORD PTR [rbp+0x220]
0x140a9c132: cmp     di,0xffff
0x140a9c136: jne     0x140a9c150
0x140a9c138: test    eax,eax
0x140a9c13a: jne     0x140a9c150
0x140a9c13c: lea     rdx,[rip+0xc4f2e1]        # 0x1416eb424 ; literal='powder'
0x140a9c143: mov     rcx,rbx
0x140a9c146: call    0x140070b20
0x140a9c14b: jmp     0x140a9e96b
0x140a9c150: mov     WORD PTR [rsp+0x30],0x3
0x140a9c157: mov     BYTE PTR [rsp+0x28],0x0
0x140a9c15c: mov     DWORD PTR [rsp+0x20],eax
0x140a9c160: mov     r9d,esi
0x140a9c163: movzx   r8d,di
0x140a9c167: lea     rdx,[rsp+0x68]
0x140a9c16c: lea     rcx,[rip+0x19516fd]        # 0x1423ed870
0x140a9c173: call    0x1414e58e0
0x140a9c178: lea     rdx,[rsp+0x68]
0x140a9c17d: mov     rcx,rbx
0x140a9c180: call    0x1400bb2d0
0x140a9c185: jmp     0x140a9e96b
0x140a9c18a: test    DWORD PTR [rbp+0x1f0],0x100
0x140a9c194: je      0x140a9c1a8
0x140a9c196: lea     rdx,[rip+0xc4f2eb]        # 0x1416eb488 ; literal='rotten '
0x140a9c19d: mov     rcx,rbx
0x140a9c1a0: call    0x140070b20
0x140a9c1a5: xor     r9d,r9d
0x140a9c1a8: mov     eax,DWORD PTR [rbp+0x220]
0x140a9c1ae: cmp     di,0xffff
0x140a9c1b2: jne     0x140a9c1cc
0x140a9c1b4: test    eax,eax
0x140a9c1b6: jne     0x140a9c1cc
0x140a9c1b8: lea     rdx,[rip+0xc4f26d]        # 0x1416eb42c ; literal='cheese'
0x140a9c1bf: mov     rcx,rbx
0x140a9c1c2: call    0x140070b20
0x140a9c1c7: jmp     0x140a9e96b
0x140a9c1cc: mov     WORD PTR [rsp+0x30],r9w
0x140a9c1d2: mov     BYTE PTR [rsp+0x28],0x0
0x140a9c1d7: jmp     0x140a9b711
0x140a9c1dc: mov     eax,DWORD PTR [rbp+0x220]
0x140a9c1e2: cmp     di,0xffff
0x140a9c1e6: jne     0x140a9c1ec
0x140a9c1e8: test    eax,eax
0x140a9c1ea: je      0x140a9c23a
0x140a9c1ec: mov     WORD PTR [rsp+0x30],r9w
0x140a9c1f2: mov     BYTE PTR [rsp+0x28],r8b
0x140a9c1f7: mov     DWORD PTR [rsp+0x20],eax
0x140a9c1fb: mov     r9d,esi
0x140a9c1fe: movzx   r8d,di
0x140a9c202: lea     rdx,[rsp+0x68]
0x140a9c207: lea     rcx,[rip+0x1951662]        # 0x1423ed870
0x140a9c20e: call    0x1414e58e0
0x140a9c213: lea     rdx,[rsp+0x68]
0x140a9c218: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9c21d: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9c223: mov     r8,QWORD PTR [rsp+0x78]
0x140a9c228: mov     rcx,rbx
0x140a9c22b: call    0x140070fd0
0x140a9c230: mov     dl,0x20
0x140a9c232: mov     rcx,rbx
0x140a9c235: call    0x1400bb140
0x140a9c23a: mov     r8d,0xe
0x140a9c240: lea     rdx,[rip+0xc4f841]        # 0x1416eba88 ; literal='catapult parts'
0x140a9c247: mov     rcx,rbx
0x140a9c24a: call    0x140070fd0
0x140a9c24f: jmp     0x140a9e96b
0x140a9c254: mov     eax,DWORD PTR [rbp+0x220]
0x140a9c25a: cmp     di,0xffff
0x140a9c25e: jne     0x140a9c264
0x140a9c260: test    eax,eax
0x140a9c262: je      0x140a9c2b2
0x140a9c264: mov     WORD PTR [rsp+0x30],r9w
0x140a9c26a: mov     BYTE PTR [rsp+0x28],r8b
0x140a9c26f: mov     DWORD PTR [rsp+0x20],eax
0x140a9c273: mov     r9d,esi
0x140a9c276: movzx   r8d,di
0x140a9c27a: lea     rdx,[rsp+0x68]
0x140a9c27f: lea     rcx,[rip+0x19515ea]        # 0x1423ed870
0x140a9c286: call    0x1414e58e0
0x140a9c28b: lea     rdx,[rsp+0x68]
0x140a9c290: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9c295: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9c29b: mov     r8,QWORD PTR [rsp+0x78]
0x140a9c2a0: mov     rcx,rbx
0x140a9c2a3: call    0x140070fd0
0x140a9c2a8: mov     dl,0x20
0x140a9c2aa: mov     rcx,rbx
0x140a9c2ad: call    0x1400bb140
0x140a9c2b2: mov     r8d,0x12
0x140a9c2b8: lea     rdx,[rip+0xc4f7d9]        # 0x1416eba98 ; literal='bolt thrower parts'
0x140a9c2bf: mov     rcx,rbx
0x140a9c2c2: call    0x140070fd0
0x140a9c2c7: jmp     0x140a9e96b
0x140a9c2cc: mov     eax,DWORD PTR [rbp+0x220]
0x140a9c2d2: cmp     di,0xffff
0x140a9c2d6: jne     0x140a9c2dc
0x140a9c2d8: test    eax,eax
0x140a9c2da: je      0x140a9c32a
0x140a9c2dc: mov     WORD PTR [rsp+0x30],r9w
0x140a9c2e2: mov     BYTE PTR [rsp+0x28],r8b
0x140a9c2e7: mov     DWORD PTR [rsp+0x20],eax
0x140a9c2eb: mov     r9d,esi
0x140a9c2ee: movzx   r8d,di
0x140a9c2f2: lea     rdx,[rsp+0x68]
0x140a9c2f7: lea     rcx,[rip+0x1951572]        # 0x1423ed870
0x140a9c2fe: call    0x1414e58e0
0x140a9c303: lea     rdx,[rsp+0x68]
0x140a9c308: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9c30d: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9c313: mov     r8,QWORD PTR [rsp+0x78]
0x140a9c318: mov     rcx,rbx
0x140a9c31b: call    0x140070fd0
0x140a9c320: mov     dl,0x20
0x140a9c322: mov     rcx,rbx
0x140a9c325: call    0x1400bb140
0x140a9c32a: mov     r8d,0xa
0x140a9c330: lea     rdx,[rip+0xc4f779]        # 0x1416ebab0 ; literal='mechanisms'
0x140a9c337: mov     rcx,rbx
0x140a9c33a: call    0x140070fd0
0x140a9c33f: jmp     0x140a9e96b
0x140a9c344: mov     eax,DWORD PTR [rbp+0x220]
0x140a9c34a: cmp     di,0xffff
0x140a9c34e: jne     0x140a9c354
0x140a9c350: test    eax,eax
0x140a9c352: je      0x140a9c3a2
0x140a9c354: mov     WORD PTR [rsp+0x30],r9w
0x140a9c35a: mov     BYTE PTR [rsp+0x28],r8b
0x140a9c35f: mov     DWORD PTR [rsp+0x20],eax
0x140a9c363: mov     r9d,esi
0x140a9c366: movzx   r8d,di
0x140a9c36a: lea     rdx,[rsp+0x68]
0x140a9c36f: lea     rcx,[rip+0x19514fa]        # 0x1423ed870
0x140a9c376: call    0x1414e58e0
0x140a9c37b: lea     rdx,[rsp+0x68]
0x140a9c380: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9c385: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9c38b: mov     r8,QWORD PTR [rsp+0x78]
0x140a9c390: mov     rcx,rbx
0x140a9c393: call    0x140070fd0
0x140a9c398: mov     dl,0x20
0x140a9c39a: mov     rcx,rbx
0x140a9c39d: call    0x1400bb140
0x140a9c3a2: mov     r8d,esi
0x140a9c3a5: movzx   edx,di
0x140a9c3a8: lea     rcx,[rip+0x19514c1]        # 0x1423ed870
0x140a9c3af: call    0x1414c1d30
0x140a9c3b4: test    rax,rax
0x140a9c3b7: je      0x140a9c3f3
0x140a9c3b9: cmp     DWORD PTR [rax+0x298],0x6
0x140a9c3c0: jle     0x140a9c3d3
0x140a9c3c2: mov     rax,QWORD PTR [rax+0x290]
0x140a9c3c9: test    BYTE PTR [rax+0x6],0x2
0x140a9c3cd: je      0x140a9c3d3
0x140a9c3cf: mov     al,0x1
0x140a9c3d1: jmp     0x140a9c3d5
0x140a9c3d3: xor     al,al
0x140a9c3d5: test    al,al
0x140a9c3d7: je      0x140a9c3f3
0x140a9c3d9: mov     r8d,0x4
0x140a9c3df: lea     rdx,[rip+0xc4f6d6]        # 0x1416ebabc ; literal='tube'
0x140a9c3e6: mov     rcx,rbx
0x140a9c3e9: call    0x140070fd0
0x140a9c3ee: jmp     0x140a9e96b
0x140a9c3f3: mov     r8d,0xc
0x140a9c3f9: lea     rdx,[rip+0xc4f650]        # 0x1416eba50 ; literal='pipe section'
0x140a9c400: mov     rcx,rbx
0x140a9c403: call    0x140070fd0
0x140a9c408: jmp     0x140a9e96b
0x140a9c40d: mov     rcx,QWORD PTR [rip+0x1a6cab4]        # 0x142508ec8
0x140a9c414: mov     r8,QWORD PTR [rip+0x1a6caa5]        # 0x142508ec0
0x140a9c41b: sub     rcx,r8
0x140a9c41e: sar     rcx,0x3
0x140a9c422: sub     ecx,0x1
0x140a9c425: movsxd  rdx,ecx
0x140a9c428: js      0x140a9c443
0x140a9c42a: nop     WORD PTR [rax+rax*1+0x0]
0x140a9c430: mov     rax,QWORD PTR [r8+rdx*8]
0x140a9c434: cmp     WORD PTR [rax+0x28],r15w
0x140a9c439: je      0x140a9c4a3
0x140a9c43b: dec     ecx
0x140a9c43d: sub     rdx,0x1
0x140a9c441: jns     0x140a9c430
0x140a9c443: mov     eax,DWORD PTR [rbp+0x220]
0x140a9c449: cmp     di,0xffff
0x140a9c44d: jne     0x140a9c453
0x140a9c44f: test    eax,eax
0x140a9c451: je      0x140a9c491
0x140a9c453: mov     WORD PTR [rsp+0x30],r9w
0x140a9c459: mov     BYTE PTR [rsp+0x28],0x1
0x140a9c45e: mov     DWORD PTR [rsp+0x20],eax
0x140a9c462: mov     r9d,esi
0x140a9c465: movzx   r8d,di
0x140a9c469: lea     rdx,[rsp+0x68]
0x140a9c46e: lea     rcx,[rip+0x19513fb]        # 0x1423ed870
0x140a9c475: call    0x1414e58e0
0x140a9c47a: lea     rdx,[rsp+0x68]
0x140a9c47f: mov     rcx,rbx
0x140a9c482: call    0x1400bb2d0
0x140a9c487: mov     dl,0x20
0x140a9c489: mov     rcx,rbx
0x140a9c48c: call    0x1400bb140
0x140a9c491: mov     r8d,0xe
0x140a9c497: lea     rdx,[rip+0xc4f5c2]        # 0x1416eba60 ; literal='trap component'
0x140a9c49e: jmp     0x140a9e953
0x140a9c4a3: movsxd  rax,ecx
0x140a9c4a6: mov     r14,QWORD PTR [r8+rax*8]
0x140a9c4aa: test    r14,r14
0x140a9c4ad: je      0x140a9c443
0x140a9c4af: cmp     QWORD PTR [r14+0xb8],0x0
0x140a9c4b7: je      0x140a9c4da
0x140a9c4b9: lea     rdx,[r14+0xa8]
0x140a9c4c0: mov     rcx,rbx
0x140a9c4c3: call    0x1400bb2d0
0x140a9c4c8: lea     rdx,[rip+0xb6249d]        # 0x1415fe96c ; literal=' '
0x140a9c4cf: mov     rcx,rbx
0x140a9c4d2: call    0x140070b20
0x140a9c4d7: xor     r9d,r9d
0x140a9c4da: mov     eax,DWORD PTR [rbp+0x220]
0x140a9c4e0: cmp     di,0xffff
0x140a9c4e4: jne     0x140a9c4ea
0x140a9c4e6: test    eax,eax
0x140a9c4e8: je      0x140a9c528
0x140a9c4ea: mov     WORD PTR [rsp+0x30],r9w
0x140a9c4f0: mov     BYTE PTR [rsp+0x28],0x1
0x140a9c4f5: mov     DWORD PTR [rsp+0x20],eax
0x140a9c4f9: mov     r9d,esi
0x140a9c4fc: movzx   r8d,di
0x140a9c500: lea     rdx,[rsp+0x68]
0x140a9c505: lea     rcx,[rip+0x1951364]        # 0x1423ed870
0x140a9c50c: call    0x1414e58e0
0x140a9c511: lea     rdx,[rsp+0x68]
0x140a9c516: mov     rcx,rbx
0x140a9c519: call    0x1400bb2d0
0x140a9c51e: mov     dl,0x20
0x140a9c520: mov     rcx,rbx
0x140a9c523: call    0x1400bb140
0x140a9c528: cmp     r12d,0x1
0x140a9c52c: lea     rdx,[r14+0x88]
0x140a9c533: jne     0x140a9c539
0x140a9c535: lea     rdx,[r14+0x68]
0x140a9c539: mov     rcx,rbx
0x140a9c53c: call    0x1400bb2d0
0x140a9c541: jmp     0x140a9e96b
0x140a9c546: mov     eax,DWORD PTR [rbp+0x220]
0x140a9c54c: cmp     di,0xffff
0x140a9c550: jne     0x140a9c556
0x140a9c552: test    eax,eax
0x140a9c554: je      0x140a9c5a4
0x140a9c556: mov     WORD PTR [rsp+0x30],r9w
0x140a9c55c: mov     BYTE PTR [rsp+0x28],r8b
0x140a9c561: mov     DWORD PTR [rsp+0x20],eax
0x140a9c565: mov     r9d,esi
0x140a9c568: movzx   r8d,di
0x140a9c56c: lea     rdx,[rsp+0x68]
0x140a9c571: lea     rcx,[rip+0x19512f8]        # 0x1423ed870
0x140a9c578: call    0x1414e58e0
0x140a9c57d: lea     rdx,[rsp+0x68]
0x140a9c582: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9c587: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9c58d: mov     r8,QWORD PTR [rsp+0x78]
0x140a9c592: mov     rcx,rbx
0x140a9c595: call    0x140070fd0
0x140a9c59a: mov     dl,0x20
0x140a9c59c: mov     rcx,rbx
0x140a9c59f: call    0x1400bb140
0x140a9c5a4: mov     r8d,0xe
0x140a9c5aa: lea     rdx,[rip+0xc4f4bf]        # 0x1416eba70 ; literal='ballista parts'
0x140a9c5b1: mov     rcx,rbx
0x140a9c5b4: call    0x140070fd0
0x140a9c5b9: jmp     0x140a9e96b
0x140a9c5be: mov     eax,DWORD PTR [rbp+0x220]
0x140a9c5c4: cmp     di,0xffff
0x140a9c5c8: jne     0x140a9c5ce
0x140a9c5ca: test    eax,eax
0x140a9c5cc: je      0x140a9c61c
0x140a9c5ce: mov     WORD PTR [rsp+0x30],r9w
0x140a9c5d4: mov     BYTE PTR [rsp+0x28],r8b
0x140a9c5d9: mov     DWORD PTR [rsp+0x20],eax
0x140a9c5dd: mov     r9d,esi
0x140a9c5e0: movzx   r8d,di
0x140a9c5e4: lea     rdx,[rsp+0x68]
0x140a9c5e9: lea     rcx,[rip+0x1951280]        # 0x1423ed870
0x140a9c5f0: call    0x1414e58e0
0x140a9c5f5: lea     rdx,[rsp+0x68]
0x140a9c5fa: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9c5ff: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9c605: mov     r8,QWORD PTR [rsp+0x78]
0x140a9c60a: mov     rcx,rbx
0x140a9c60d: call    0x140070fd0
0x140a9c612: mov     dl,0x20
0x140a9c614: mov     rcx,rbx
0x140a9c617: call    0x1400bb140
0x140a9c61c: mov     r8d,0x5
0x140a9c622: lea     rdx,[rip+0xc4f457]        # 0x1416eba80 ; literal='anvil'
0x140a9c629: jmp     0x140a9e953
0x140a9c62e: mov     eax,DWORD PTR [rbp+0x220]
0x140a9c634: cmp     di,0xffff
0x140a9c638: jne     0x140a9c63e
0x140a9c63a: test    eax,eax
0x140a9c63c: je      0x140a9c68c
0x140a9c63e: mov     WORD PTR [rsp+0x30],r9w
0x140a9c644: mov     BYTE PTR [rsp+0x28],r8b
0x140a9c649: mov     DWORD PTR [rsp+0x20],eax
0x140a9c64d: mov     r9d,esi
0x140a9c650: movzx   r8d,di
0x140a9c654: lea     rdx,[rsp+0x68]
0x140a9c659: lea     rcx,[rip+0x1951210]        # 0x1423ed870
0x140a9c660: call    0x1414e58e0
0x140a9c665: lea     rdx,[rsp+0x68]
0x140a9c66a: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9c66f: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9c675: mov     r8,QWORD PTR [rsp+0x78]
0x140a9c67a: mov     rcx,rbx
0x140a9c67d: call    0x140070fd0
0x140a9c682: mov     dl,0x20
0x140a9c684: mov     rcx,rbx
0x140a9c687: call    0x1400bb140
0x140a9c68c: mov     r8d,0x6
0x140a9c692: lea     rdx,[rip+0xc4f373]        # 0x1416eba0c ; literal='amulet'
0x140a9c699: jmp     0x140a9e953
0x140a9c69e: mov     eax,DWORD PTR [rbp+0x220]
0x140a9c6a4: cmp     di,0xffff
0x140a9c6a8: jne     0x140a9c6ae
0x140a9c6aa: test    eax,eax
0x140a9c6ac: je      0x140a9c6fc
0x140a9c6ae: mov     WORD PTR [rsp+0x30],r9w
0x140a9c6b4: mov     BYTE PTR [rsp+0x28],r8b
0x140a9c6b9: mov     DWORD PTR [rsp+0x20],eax
0x140a9c6bd: mov     r9d,esi
0x140a9c6c0: movzx   r8d,di
0x140a9c6c4: lea     rdx,[rsp+0x68]
0x140a9c6c9: lea     rcx,[rip+0x19511a0]        # 0x1423ed870
0x140a9c6d0: call    0x1414e58e0
0x140a9c6d5: lea     rdx,[rsp+0x68]
0x140a9c6da: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9c6df: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9c6e5: mov     r8,QWORD PTR [rsp+0x78]
0x140a9c6ea: mov     rcx,rbx
0x140a9c6ed: call    0x140070fd0
0x140a9c6f2: mov     dl,0x20
0x140a9c6f4: mov     rcx,rbx
0x140a9c6f7: call    0x1400bb140
0x140a9c6fc: mov     r8d,0x13
0x140a9c702: lea     rdx,[rip+0xc4f30f]        # 0x1416eba18 ; literal='ballista arrow head'
0x140a9c709: jmp     0x140a9e953
0x140a9c70e: mov     eax,DWORD PTR [rbp+0x220]
0x140a9c714: cmp     di,0xffff
0x140a9c718: jne     0x140a9c71e
0x140a9c71a: test    eax,eax
0x140a9c71c: je      0x140a9c76c
0x140a9c71e: mov     WORD PTR [rsp+0x30],r9w
0x140a9c724: mov     BYTE PTR [rsp+0x28],r8b
0x140a9c729: mov     DWORD PTR [rsp+0x20],eax
0x140a9c72d: mov     r9d,esi
0x140a9c730: movzx   r8d,di
0x140a9c734: lea     rdx,[rsp+0x68]
0x140a9c739: lea     rcx,[rip+0x1951130]        # 0x1423ed870
0x140a9c740: call    0x1414e58e0
0x140a9c745: lea     rdx,[rsp+0x68]
0x140a9c74a: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9c74f: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9c755: mov     r8,QWORD PTR [rsp+0x78]
0x140a9c75a: mov     rcx,rbx
0x140a9c75d: call    0x140070fd0
0x140a9c762: mov     dl,0x20
0x140a9c764: mov     rcx,rbx
0x140a9c767: call    0x1400bb140
0x140a9c76c: mov     rcx,QWORD PTR [rip+0x1a6ca55]        # 0x1425091c8
0x140a9c773: mov     r8,QWORD PTR [rip+0x1a6ca46]        # 0x1425091c0
0x140a9c77a: sub     rcx,r8
0x140a9c77d: sar     rcx,0x3
0x140a9c781: sub     ecx,0x1
0x140a9c784: movsxd  rdx,ecx
0x140a9c787: js      0x140a9c7a3
0x140a9c789: nop     DWORD PTR [rax+0x0]
0x140a9c790: mov     rax,QWORD PTR [r8+rdx*8]
0x140a9c794: cmp     WORD PTR [rax+0x28],r15w
0x140a9c799: je      0x140a9c7bd
0x140a9c79b: dec     ecx
0x140a9c79d: sub     rdx,0x1
0x140a9c7a1: jns     0x140a9c790
0x140a9c7a3: mov     r8d,0xa
0x140a9c7a9: lea     rdx,[rip+0xc4f280]        # 0x1416eba30 ; literal='siege ammo'
0x140a9c7b0: mov     rcx,rbx
0x140a9c7b3: call    0x140070fd0
0x140a9c7b8: jmp     0x140a9e96b
0x140a9c7bd: movsxd  rax,ecx
0x140a9c7c0: mov     rcx,QWORD PTR [r8+rax*8]
0x140a9c7c4: test    rcx,rcx
0x140a9c7c7: je      0x140a9c7a3
0x140a9c7c9: mov     edx,0x88
0x140a9c7ce: mov     eax,0x68
0x140a9c7d3: cmp     r12d,0x1
0x140a9c7d7: cmove   edx,eax
0x140a9c7da: add     rdx,rcx
0x140a9c7dd: mov     rcx,rbx
0x140a9c7e0: call    0x1400bb2d0
0x140a9c7e5: jmp     0x140a9e96b
0x140a9c7ea: mov     rcx,QWORD PTR [rip+0x1a6c9bf]        # 0x1425091b0
0x140a9c7f1: mov     r8,QWORD PTR [rip+0x1a6c9b0]        # 0x1425091a8
0x140a9c7f8: sub     rcx,r8
0x140a9c7fb: sar     rcx,0x3
0x140a9c7ff: sub     ecx,0x1
0x140a9c802: movsxd  rdx,ecx
0x140a9c805: js      0x140a9c827
0x140a9c807: nop     WORD PTR [rax+rax*1+0x0]
0x140a9c810: mov     rax,QWORD PTR [r8+rdx*8]
0x140a9c814: cmp     WORD PTR [rax+0x28],r15w
0x140a9c819: je      0x140a9c8ab
0x140a9c81f: dec     ecx
0x140a9c821: sub     rdx,0x1
0x140a9c825: jns     0x140a9c810
0x140a9c827: mov     r14,r9
0x140a9c82a: mov     eax,DWORD PTR [rbp+0x220]
0x140a9c830: cmp     di,0xffff
0x140a9c834: jne     0x140a9c83a
0x140a9c836: test    eax,eax
0x140a9c838: je      0x140a9c888
0x140a9c83a: mov     WORD PTR [rsp+0x30],r9w
0x140a9c840: mov     BYTE PTR [rsp+0x28],0x1
0x140a9c845: mov     DWORD PTR [rsp+0x20],eax
0x140a9c849: mov     r9d,esi
0x140a9c84c: movzx   r8d,di
0x140a9c850: lea     rdx,[rsp+0x68]
0x140a9c855: lea     rcx,[rip+0x1951014]        # 0x1423ed870
0x140a9c85c: call    0x1414e58e0
0x140a9c861: lea     rdx,[rsp+0x68]
0x140a9c866: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9c86b: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9c871: mov     r8,QWORD PTR [rsp+0x78]
0x140a9c876: mov     rcx,rbx
0x140a9c879: call    0x140070fd0
0x140a9c87e: mov     dl,0x20
0x140a9c880: mov     rcx,rbx
0x140a9c883: call    0x1400bb140
0x140a9c888: test    r14,r14
0x140a9c88b: je      0x140a9c8ed
0x140a9c88d: cmp     r12d,0x1
0x140a9c891: lea     rdx,[r14+0x88]
0x140a9c898: jne     0x140a9c89e
0x140a9c89a: lea     rdx,[r14+0x68]
0x140a9c89e: mov     rcx,rbx
0x140a9c8a1: call    0x1400bb2d0
0x140a9c8a6: jmp     0x140a9e96b
0x140a9c8ab: movsxd  rax,ecx
0x140a9c8ae: mov     r15,QWORD PTR [r8+rax*8]
0x140a9c8b2: mov     r14,r15
0x140a9c8b5: test    r15,r15
0x140a9c8b8: je      0x140a9c82a
0x140a9c8be: cmp     QWORD PTR [r15+0xb8],0x0
0x140a9c8c6: je      0x140a9c82a
0x140a9c8cc: lea     rdx,[r15+0xa8]
0x140a9c8d3: mov     rcx,rbx
0x140a9c8d6: call    0x1400bb2d0
0x140a9c8db: mov     dl,0x20
0x140a9c8dd: mov     rcx,rbx
0x140a9c8e0: call    0x1400bb140
0x140a9c8e5: xor     r9d,r9d
0x140a9c8e8: jmp     0x140a9c82a
0x140a9c8ed: mov     r8d,0xa
0x140a9c8f3: lea     rdx,[rip+0xc4f146]        # 0x1416eba40 ; literal='ammunition'
0x140a9c8fa: mov     rcx,rbx
0x140a9c8fd: call    0x140070fd0
0x140a9c902: jmp     0x140a9e96b
0x140a9c907: mov     eax,DWORD PTR [rbp+0x220]
0x140a9c90d: cmp     di,0xffff
0x140a9c911: jne     0x140a9c917
0x140a9c913: test    eax,eax
0x140a9c915: je      0x140a9c965
0x140a9c917: mov     WORD PTR [rsp+0x30],r9w
0x140a9c91d: mov     BYTE PTR [rsp+0x28],r8b
0x140a9c922: mov     DWORD PTR [rsp+0x20],eax
0x140a9c926: mov     r9d,esi
0x140a9c929: movzx   r8d,di
0x140a9c92d: lea     rdx,[rsp+0x68]
0x140a9c932: lea     rcx,[rip+0x1950f37]        # 0x1423ed870
0x140a9c939: call    0x1414e58e0
0x140a9c93e: lea     rdx,[rsp+0x68]
0x140a9c943: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9c948: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9c94e: mov     r8,QWORD PTR [rsp+0x78]
0x140a9c953: mov     rcx,rbx
0x140a9c956: call    0x140070fd0
0x140a9c95b: mov     dl,0x20
0x140a9c95d: mov     rcx,rbx
0x140a9c960: call    0x1400bb140
0x140a9c965: mov     r8d,0x7
0x140a9c96b: lea     rdx,[rip+0xc4f076]        # 0x1416eb9e8 ; literal='scepter'
0x140a9c972: jmp     0x140a9e953
0x140a9c977: mov     eax,DWORD PTR [rbp+0x220]
0x140a9c97d: cmp     di,0xffff
0x140a9c981: jne     0x140a9c987
0x140a9c983: test    eax,eax
0x140a9c985: je      0x140a9c9d5
0x140a9c987: mov     WORD PTR [rsp+0x30],r9w
0x140a9c98d: mov     BYTE PTR [rsp+0x28],r8b
0x140a9c992: mov     DWORD PTR [rsp+0x20],eax
0x140a9c996: mov     r9d,esi
0x140a9c999: movzx   r8d,di
0x140a9c99d: lea     rdx,[rsp+0x68]
0x140a9c9a2: lea     rcx,[rip+0x1950ec7]        # 0x1423ed870
0x140a9c9a9: call    0x1414e58e0
0x140a9c9ae: lea     rdx,[rsp+0x68]
0x140a9c9b3: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9c9b8: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9c9be: mov     r8,QWORD PTR [rsp+0x78]
0x140a9c9c3: mov     rcx,rbx
0x140a9c9c6: call    0x140070fd0
0x140a9c9cb: mov     dl,0x20
0x140a9c9cd: mov     rcx,rbx
0x140a9c9d0: call    0x1400bb140
0x140a9c9d5: mov     r8d,0x5
0x140a9c9db: lea     rdx,[rip+0xc4f00e]        # 0x1416eb9f0 ; literal='crown'
0x140a9c9e2: jmp     0x140a9e953
0x140a9c9e7: mov     eax,DWORD PTR [rbp+0x220]
0x140a9c9ed: cmp     di,0xffff
0x140a9c9f1: jne     0x140a9c9f7
0x140a9c9f3: test    eax,eax
0x140a9c9f5: je      0x140a9ca45
0x140a9c9f7: mov     WORD PTR [rsp+0x30],r9w
0x140a9c9fd: mov     BYTE PTR [rsp+0x28],r8b
0x140a9ca02: mov     DWORD PTR [rsp+0x20],eax
0x140a9ca06: mov     r9d,esi
0x140a9ca09: movzx   r8d,di
0x140a9ca0d: lea     rdx,[rsp+0x68]
0x140a9ca12: lea     rcx,[rip+0x1950e57]        # 0x1423ed870
0x140a9ca19: call    0x1414e58e0
0x140a9ca1e: lea     rdx,[rsp+0x68]
0x140a9ca23: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9ca28: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9ca2e: mov     r8,QWORD PTR [rsp+0x78]
0x140a9ca33: mov     rcx,rbx
0x140a9ca36: call    0x140070fd0
0x140a9ca3b: mov     dl,0x20
0x140a9ca3d: mov     rcx,rbx
0x140a9ca40: call    0x1400bb140
0x140a9ca45: lea     rdx,[rip+0xc4efac]        # 0x1416eb9f8 ; literal='coin'
0x140a9ca4c: jmp     0x140a9e94d
0x140a9ca51: mov     rcx,rbx
0x140a9ca54: cmp     QWORD PTR [rbp+0x200],0x0
0x140a9ca5c: je      0x140a9ca6d
0x140a9ca5e: mov     r8d,0x8
0x140a9ca64: lea     rdx,[rip+0xc4ef95]        # 0x1416eba00 ; literal='perfect '
0x140a9ca6b: jmp     0x140a9ca7a
0x140a9ca6d: mov     r8d,0x6
0x140a9ca73: lea     rdx,[rip+0xbc476e]        # 0x1416611e8 ; literal='large '
0x140a9ca7a: call    0x140070fd0
0x140a9ca7f: xor     r15d,r15d
0x140a9ca82: cmp     r14d,0xffffffff
0x140a9ca86: je      0x140a9caf0
0x140a9ca88: mov     r8,QWORD PTR [rip+0x1964d49]        # 0x1424017d8
0x140a9ca8f: mov     r11,QWORD PTR [rip+0x1964d3a]        # 0x1424017d0
0x140a9ca96: sub     r8,r11
0x140a9ca99: sar     r8,0x3
0x140a9ca9d: test    r8d,r8d
0x140a9caa0: je      0x140a9caf0
0x140a9caa2: mov     edx,r15d
0x140a9caa5: sub     r8d,0x1
0x140a9caa9: js      0x140a9cad7
0x140a9caab: nop     DWORD PTR [rax+rax*1+0x0]
0x140a9cab0: lea     ecx,[rdx+r8*1]
0x140a9cab4: sar     ecx,1
0x140a9cab6: movsxd  rax,ecx
0x140a9cab9: mov     r10,QWORD PTR [r11+rax*8]
0x140a9cabd: cmp     DWORD PTR [r10+0x1c],r14d
0x140a9cac1: je      0x140a9cada
0x140a9cac3: lea     eax,[rcx+0x1]
0x140a9cac6: cmovle  edx,eax
0x140a9cac9: lea     eax,[rcx-0x1]
0x140a9cacc: cmovle  eax,r8d
0x140a9cad0: mov     r8d,eax
0x140a9cad3: cmp     edx,eax
0x140a9cad5: jle     0x140a9cab0
0x140a9cad7: mov     r10,r15
0x140a9cada: test    r10,r10
0x140a9cadd: je      0x140a9caf0
0x140a9cadf: mov     rax,QWORD PTR [r10]
0x140a9cae2: mov     rcx,r10
0x140a9cae5: call    QWORD PTR [rax+0x748]
0x140a9caeb: mov     r13d,eax
0x140a9caee: jmp     0x140a9caf6
0x140a9caf0: mov     r13d,0xffffffff
0x140a9caf6: xorps   xmm0,xmm0
0x140a9caf9: movups  XMMWORD PTR [rbp+0x8],xmm0
0x140a9cafd: mov     QWORD PTR [rbp+0x18],r15
0x140a9cb01: mov     QWORD PTR [rbp+0x20],0xf
0x140a9cb09: mov     BYTE PTR [rbp+0x8],0x0
0x140a9cb0d: mov     r14d,DWORD PTR [rbp+0x220]
0x140a9cb14: mov     DWORD PTR [rsp+0x30],r14d
0x140a9cb19: mov     DWORD PTR [rsp+0x28],r12d
0x140a9cb1e: mov     DWORD PTR [rsp+0x20],r13d
0x140a9cb23: mov     r9d,esi
0x140a9cb26: movzx   r8d,di
0x140a9cb2a: lea     rdx,[rbp+0x8]
0x140a9cb2e: call    0x1414f5e80
0x140a9cb33: test    al,al
0x140a9cb35: je      0x140a9cb56
0x140a9cb37: lea     rdx,[rbp+0x8]
0x140a9cb3b: cmp     QWORD PTR [rbp+0x20],0xf
0x140a9cb40: cmova   rdx,QWORD PTR [rbp+0x8]
0x140a9cb45: mov     r8,QWORD PTR [rbp+0x18]
0x140a9cb49: mov     rcx,rbx
0x140a9cb4c: call    0x140070fd0
0x140a9cb51: jmp     0x140a9cc88
0x140a9cb56: cmp     edi,0x3
0x140a9cb59: jne     0x140a9cb6c
0x140a9cb5b: lea     rdx,[rip+0xc4ee4e]        # 0x1416eb9b0 ; literal='green glass '
0x140a9cb62: mov     rcx,rbx
0x140a9cb65: call    0x140070b20
0x140a9cb6a: jmp     0x140a9cba3
0x140a9cb6c: cmp     edi,0x4
0x140a9cb6f: jne     0x140a9cb82
0x140a9cb71: lea     rdx,[rip+0xc4ee48]        # 0x1416eb9c0 ; literal='clear glass '
0x140a9cb78: mov     rcx,rbx
0x140a9cb7b: call    0x140070b20
0x140a9cb80: jmp     0x140a9cba3
0x140a9cb82: cmp     edi,0x5
0x140a9cb85: jne     0x140a9cb98
0x140a9cb87: lea     rdx,[rip+0xc4ee42]        # 0x1416eb9d0 ; literal='crystal glass '
0x140a9cb8e: mov     rcx,rbx
0x140a9cb91: call    0x140070b20
0x140a9cb96: jmp     0x140a9cba3
0x140a9cb98: cmp     di,0xffff
0x140a9cb9c: jne     0x140a9cbcb
0x140a9cb9e: test    r14d,r14d
0x140a9cba1: jne     0x140a9cc15
0x140a9cba3: lea     rdx,[rip+0xb8f8aa]        # 0x14162c454 ; literal='gem'
0x140a9cbaa: mov     rcx,rbx
0x140a9cbad: call    0x140070b20
0x140a9cbb2: cmp     r12d,0x1
0x140a9cbb6: je      0x140a9cc88
0x140a9cbbc: mov     dl,0x73
0x140a9cbbe: mov     rcx,rbx
0x140a9cbc1: call    0x1400bb140
0x140a9cbc6: jmp     0x140a9cc88
0x140a9cbcb: test    di,di
0x140a9cbce: jne     0x140a9cc15
0x140a9cbd0: lea     rcx,[rbp+0x28]
0x140a9cbd4: call    0x140070c50
0x140a9cbd9: nop     
0x140a9cbda: xor     r8d,r8d
0x140a9cbdd: mov     r9d,esi
0x140a9cbe0: lea     rdx,[rbp+0x28]
0x140a9cbe4: lea     rcx,[rip+0x1950c85]        # 0x1423ed870
0x140a9cbeb: cmp     r12d,0x1
0x140a9cbef: je      0x140a9cbf8
0x140a9cbf1: mov     BYTE PTR [rsp+0x20],0x1
0x140a9cbf6: jmp     0x140a9cbfd
0x140a9cbf8: mov     BYTE PTR [rsp+0x20],r8b
0x140a9cbfd: call    0x1414e5750
0x140a9cc02: lea     rdx,[rbp+0x28]
0x140a9cc06: mov     rcx,rbx
0x140a9cc09: call    0x1400bb2d0
0x140a9cc0e: nop     
0x140a9cc0f: lea     rcx,[rbp+0x28]
0x140a9cc13: jmp     0x140a9cc82
0x140a9cc15: lea     rcx,[rbp+0x148]
0x140a9cc1c: call    0x140070c50
0x140a9cc21: nop     
0x140a9cc22: mov     WORD PTR [rsp+0x30],r15w
0x140a9cc28: mov     BYTE PTR [rsp+0x28],0x1
0x140a9cc2d: mov     DWORD PTR [rsp+0x20],r14d
0x140a9cc32: mov     r9d,esi
0x140a9cc35: movzx   r8d,di
0x140a9cc39: lea     rdx,[rbp+0x148]
0x140a9cc40: lea     rcx,[rip+0x1950c29]        # 0x1423ed870
0x140a9cc47: call    0x1414e58e0
0x140a9cc4c: lea     rdx,[rbp+0x148]
0x140a9cc53: mov     rcx,rbx
0x140a9cc56: call    0x1400bb2d0
0x140a9cc5b: lea     rdx,[rip+0xc4ed7e]        # 0x1416eb9e0 ; literal=' gem'
0x140a9cc62: mov     rcx,rbx
0x140a9cc65: call    0x140070b20
0x140a9cc6a: cmp     r12d,0x1
0x140a9cc6e: je      0x140a9cc7b
0x140a9cc70: mov     dl,0x73
0x140a9cc72: mov     rcx,rbx
0x140a9cc75: call    0x1400bb140
0x140a9cc7a: nop     
0x140a9cc7b: lea     rcx,[rbp+0x148]
0x140a9cc82: call    0x140070e10
0x140a9cc87: nop     
0x140a9cc88: mov     rdx,QWORD PTR [rbp+0x20]
0x140a9cc8c: cmp     rdx,0xf
0x140a9cc90: jbe     0x140a9ccc3
0x140a9cc92: inc     rdx
0x140a9cc95: mov     rcx,QWORD PTR [rbp+0x8]
0x140a9cc99: mov     rax,rcx
0x140a9cc9c: cmp     rdx,0x1000
0x140a9cca3: jb      0x140a9ccbe
0x140a9cca5: add     rdx,0x27
0x140a9cca9: mov     rcx,QWORD PTR [rcx-0x8]
0x140a9ccad: sub     rax,rcx
0x140a9ccb0: add     rax,0xfffffffffffffff8
0x140a9ccb4: cmp     rax,0x1f
0x140a9ccb8: ja      0x140a9d5fe
0x140a9ccbe: call    0x14154de20
0x140a9ccc3: mov     QWORD PTR [rbp+0x18],r15
0x140a9ccc7: mov     QWORD PTR [rbp+0x20],0xf
0x140a9cccf: mov     BYTE PTR [rbp+0x8],0x0
0x140a9ccd3: jmp     0x140a9e96b
0x140a9ccd8: mov     eax,DWORD PTR [rbp+0x220]
0x140a9ccde: cmp     di,0xffff
0x140a9cce2: jne     0x140a9cce8
0x140a9cce4: test    eax,eax
0x140a9cce6: je      0x140a9cd36
0x140a9cce8: mov     WORD PTR [rsp+0x30],r9w
0x140a9ccee: mov     BYTE PTR [rsp+0x28],r8b
0x140a9ccf3: mov     DWORD PTR [rsp+0x20],eax
0x140a9ccf7: mov     r9d,esi
0x140a9ccfa: movzx   r8d,di
0x140a9ccfe: lea     rdx,[rsp+0x68]
0x140a9cd03: lea     rcx,[rip+0x1950b66]        # 0x1423ed870
0x140a9cd0a: call    0x1414e58e0
0x140a9cd0f: lea     rdx,[rsp+0x68]
0x140a9cd14: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9cd19: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9cd1f: mov     r8,QWORD PTR [rsp+0x78]
0x140a9cd24: mov     rcx,rbx
0x140a9cd27: call    0x140070fd0
0x140a9cd2c: mov     dl,0x20
0x140a9cd2e: mov     rcx,rbx
0x140a9cd31: call    0x1400bb140
0x140a9cd36: lea     rdx,[rip+0xc4ec3f]        # 0x1416eb97c ; literal='ring'
0x140a9cd3d: jmp     0x140a9e94d
0x140a9cd42: mov     eax,DWORD PTR [rbp+0x220]
0x140a9cd48: cmp     di,0xffff
0x140a9cd4c: jne     0x140a9cd52
0x140a9cd4e: test    eax,eax
0x140a9cd50: je      0x140a9cda0
0x140a9cd52: mov     WORD PTR [rsp+0x30],r9w
0x140a9cd58: mov     BYTE PTR [rsp+0x28],r8b
0x140a9cd5d: mov     DWORD PTR [rsp+0x20],eax
0x140a9cd61: mov     r9d,esi
0x140a9cd64: movzx   r8d,di
0x140a9cd68: lea     rdx,[rsp+0x68]
0x140a9cd6d: lea     rcx,[rip+0x1950afc]        # 0x1423ed870
0x140a9cd74: call    0x1414e58e0
0x140a9cd79: lea     rdx,[rsp+0x68]
0x140a9cd7e: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9cd83: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9cd89: mov     r8,QWORD PTR [rsp+0x78]
0x140a9cd8e: mov     rcx,rbx
0x140a9cd91: call    0x140070fd0
0x140a9cd96: mov     dl,0x20
0x140a9cd98: mov     rcx,rbx
0x140a9cd9b: call    0x1400bb140
0x140a9cda0: mov     r8d,0x7
0x140a9cda6: lea     rdx,[rip+0xc4ebdb]        # 0x1416eb988 ; literal='earring'
0x140a9cdad: jmp     0x140a9e953
0x140a9cdb2: mov     eax,DWORD PTR [rbp+0x220]
0x140a9cdb8: cmp     di,0xffff
0x140a9cdbc: jne     0x140a9cdc2
0x140a9cdbe: test    eax,eax
0x140a9cdc0: je      0x140a9ce10
0x140a9cdc2: mov     WORD PTR [rsp+0x30],r9w
0x140a9cdc8: mov     BYTE PTR [rsp+0x28],r8b
0x140a9cdcd: mov     DWORD PTR [rsp+0x20],eax
0x140a9cdd1: mov     r9d,esi
0x140a9cdd4: movzx   r8d,di
0x140a9cdd8: lea     rdx,[rsp+0x68]
0x140a9cddd: lea     rcx,[rip+0x1950a8c]        # 0x1423ed870
0x140a9cde4: call    0x1414e58e0
0x140a9cde9: lea     rdx,[rsp+0x68]
0x140a9cdee: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9cdf3: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9cdf9: mov     r8,QWORD PTR [rsp+0x78]
0x140a9cdfe: mov     rcx,rbx
0x140a9ce01: call    0x140070fd0
0x140a9ce06: mov     dl,0x20
0x140a9ce08: mov     rcx,rbx
0x140a9ce0b: call    0x1400bb140
0x140a9ce10: mov     r8d,0x8
0x140a9ce16: lea     rdx,[rip+0xc4eb73]        # 0x1416eb990 ; literal='bracelet'
0x140a9ce1d: jmp     0x140a9e953
0x140a9ce22: mov     eax,DWORD PTR [rbp+0x220]
0x140a9ce28: cmp     di,0xffff
0x140a9ce2c: jne     0x140a9ce32
0x140a9ce2e: test    eax,eax
0x140a9ce30: je      0x140a9ce80
0x140a9ce32: mov     WORD PTR [rsp+0x30],r9w
0x140a9ce38: mov     BYTE PTR [rsp+0x28],r8b
0x140a9ce3d: mov     DWORD PTR [rsp+0x20],eax
0x140a9ce41: mov     r9d,esi
0x140a9ce44: movzx   r8d,di
0x140a9ce48: lea     rdx,[rsp+0x68]
0x140a9ce4d: lea     rcx,[rip+0x1950a1c]        # 0x1423ed870
0x140a9ce54: call    0x1414e58e0
0x140a9ce59: lea     rdx,[rsp+0x68]
0x140a9ce5e: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9ce63: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9ce69: mov     r8,QWORD PTR [rsp+0x78]
0x140a9ce6e: mov     rcx,rbx
0x140a9ce71: call    0x140070fd0
0x140a9ce76: mov     dl,0x20
0x140a9ce78: mov     rcx,rbx
0x140a9ce7b: call    0x1400bb140
0x140a9ce80: mov     r8d,0x3
0x140a9ce86: lea     rdx,[rip+0xba9a0b]        # 0x141646898 ; literal='bed'
0x140a9ce8d: jmp     0x140a9e953
0x140a9ce92: mov     eax,DWORD PTR [rbp+0x220]
0x140a9ce98: cmp     di,0xffff
0x140a9ce9c: jne     0x140a9cea2
0x140a9ce9e: test    eax,eax
0x140a9cea0: je      0x140a9cef0
0x140a9cea2: mov     WORD PTR [rsp+0x30],r9w
0x140a9cea8: mov     BYTE PTR [rsp+0x28],r8b
0x140a9cead: mov     DWORD PTR [rsp+0x20],eax
0x140a9ceb1: mov     r9d,esi
0x140a9ceb4: movzx   r8d,di
0x140a9ceb8: lea     rdx,[rsp+0x68]
0x140a9cebd: lea     rcx,[rip+0x19509ac]        # 0x1423ed870
0x140a9cec4: call    0x1414e58e0
0x140a9cec9: lea     rdx,[rsp+0x68]
0x140a9cece: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9ced3: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9ced9: mov     r8,QWORD PTR [rsp+0x78]
0x140a9cede: mov     rcx,rbx
0x140a9cee1: call    0x140070fd0
0x140a9cee6: mov     dl,0x20
0x140a9cee8: mov     rcx,rbx
0x140a9ceeb: call    0x1400bb140
0x140a9cef0: mov     r8d,0xe
0x140a9cef6: lea     rdx,[rip+0xc4eaa3]        # 0x1416eb9a0 ; literal='traction bench'
0x140a9cefd: jmp     0x140a997e5
0x140a9cf02: mov     eax,DWORD PTR [rbp+0x220]
0x140a9cf08: cmp     di,0xffff
0x140a9cf0c: jne     0x140a9cf12
0x140a9cf0e: test    eax,eax
0x140a9cf10: je      0x140a9cf60
0x140a9cf12: mov     WORD PTR [rsp+0x30],r9w
0x140a9cf18: mov     BYTE PTR [rsp+0x28],r8b
0x140a9cf1d: mov     DWORD PTR [rsp+0x20],eax
0x140a9cf21: mov     r9d,esi
0x140a9cf24: movzx   r8d,di
0x140a9cf28: lea     rdx,[rsp+0x68]
0x140a9cf2d: lea     rcx,[rip+0x195093c]        # 0x1423ed870
0x140a9cf34: call    0x1414e58e0
0x140a9cf39: lea     rdx,[rsp+0x68]
0x140a9cf3e: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9cf43: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9cf49: mov     r8,QWORD PTR [rsp+0x78]
0x140a9cf4e: mov     rcx,rbx
0x140a9cf51: call    0x140070fd0
0x140a9cf56: mov     dl,0x20
0x140a9cf58: mov     rcx,rbx
0x140a9cf5b: call    0x1400bb140
0x140a9cf60: mov     r8d,0x5
0x140a9cf66: lea     rdx,[rip+0xc4e9e3]        # 0x1416eb950 ; literal='quern'
0x140a9cf6d: jmp     0x140a9e953
0x140a9cf72: mov     eax,DWORD PTR [rbp+0x220]
0x140a9cf78: cmp     di,0xffff
0x140a9cf7c: jne     0x140a9cf82
0x140a9cf7e: test    eax,eax
0x140a9cf80: je      0x140a9cfd0
0x140a9cf82: mov     WORD PTR [rsp+0x30],r9w
0x140a9cf88: mov     BYTE PTR [rsp+0x28],r8b
0x140a9cf8d: mov     DWORD PTR [rsp+0x20],eax
0x140a9cf91: mov     r9d,esi
0x140a9cf94: movzx   r8d,di
0x140a9cf98: lea     rdx,[rsp+0x68]
0x140a9cf9d: lea     rcx,[rip+0x19508cc]        # 0x1423ed870
0x140a9cfa4: call    0x1414e58e0
0x140a9cfa9: lea     rdx,[rsp+0x68]
0x140a9cfae: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9cfb3: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9cfb9: mov     r8,QWORD PTR [rsp+0x78]
0x140a9cfbe: mov     rcx,rbx
0x140a9cfc1: call    0x140070fd0
0x140a9cfc6: mov     dl,0x20
0x140a9cfc8: mov     rcx,rbx
0x140a9cfcb: call    0x1400bb140
0x140a9cfd0: mov     r8d,0x9
0x140a9cfd6: lea     rdx,[rip+0xc4e97b]        # 0x1416eb958 ; literal='millstone'
0x140a9cfdd: jmp     0x140a9e953
0x140a9cfe2: mov     eax,DWORD PTR [rbp+0x220]
0x140a9cfe8: cmp     di,0xffff
0x140a9cfec: jne     0x140a9cff2
0x140a9cfee: test    eax,eax
0x140a9cff0: je      0x140a9d040
0x140a9cff2: mov     WORD PTR [rsp+0x30],r9w
0x140a9cff8: mov     BYTE PTR [rsp+0x28],r8b
0x140a9cffd: mov     DWORD PTR [rsp+0x20],eax
0x140a9d001: mov     r9d,esi
0x140a9d004: movzx   r8d,di
0x140a9d008: lea     rdx,[rsp+0x68]
0x140a9d00d: lea     rcx,[rip+0x195085c]        # 0x1423ed870
0x140a9d014: call    0x1414e58e0
0x140a9d019: lea     rdx,[rsp+0x68]
0x140a9d01e: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9d023: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9d029: mov     r8,QWORD PTR [rsp+0x78]
0x140a9d02e: mov     rcx,rbx
0x140a9d031: call    0x140070fd0
0x140a9d036: mov     dl,0x20
0x140a9d038: mov     rcx,rbx
0x140a9d03b: call    0x1400bb140
0x140a9d040: mov     r8d,0x6
0x140a9d046: lea     rdx,[rip+0xc4e917]        # 0x1416eb964 ; literal='statue'
0x140a9d04d: jmp     0x140a9e953
0x140a9d052: mov     eax,DWORD PTR [rbp+0x220]
0x140a9d058: cmp     di,0xffff
0x140a9d05c: jne     0x140a9d062
0x140a9d05e: test    eax,eax
0x140a9d060: je      0x140a9d0b3
0x140a9d062: mov     WORD PTR [rsp+0x30],r9w
0x140a9d068: mov     BYTE PTR [rsp+0x28],r8b
0x140a9d06d: mov     DWORD PTR [rsp+0x20],eax
0x140a9d071: mov     r9d,esi
0x140a9d074: movzx   r8d,di
0x140a9d078: lea     rdx,[rsp+0x68]
0x140a9d07d: lea     rcx,[rip+0x19507ec]        # 0x1423ed870
0x140a9d084: call    0x1414e58e0
0x140a9d089: lea     rdx,[rsp+0x68]
0x140a9d08e: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9d093: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9d099: mov     r8,QWORD PTR [rsp+0x78]
0x140a9d09e: mov     rcx,rbx
0x140a9d0a1: call    0x140070fd0
0x140a9d0a6: mov     dl,0x20
0x140a9d0a8: mov     rcx,rbx
0x140a9d0ab: call    0x1400bb140
0x140a9d0b0: xor     r9d,r9d
0x140a9d0b3: mov     r8,QWORD PTR [rip+0x196471e]        # 0x1424017d8
0x140a9d0ba: mov     r11,QWORD PTR [rip+0x196470f]        # 0x1424017d0
0x140a9d0c1: sub     r8,r11
0x140a9d0c4: sar     r8,0x3
0x140a9d0c8: test    r8d,r8d
0x140a9d0cb: je      0x140a9d2f6
0x140a9d0d1: cmp     r14d,0xffffffff
0x140a9d0d5: je      0x140a9d2f6
0x140a9d0db: sub     r8d,0x1
0x140a9d0df: mov     edx,r9d
0x140a9d0e2: js      0x140a9d11a
0x140a9d0e4: nop     DWORD PTR [rax+0x0]
0x140a9d0e8: nop     DWORD PTR [rax+rax*1+0x0]
0x140a9d0f0: lea     ecx,[rdx+r8*1]
0x140a9d0f4: sar     ecx,1
0x140a9d0f6: movsxd  rax,ecx
0x140a9d0f9: mov     r10,QWORD PTR [r11+rax*8]
0x140a9d0fd: cmp     DWORD PTR [r10+0x1c],r14d
0x140a9d101: je      0x140a9d11d
0x140a9d103: lea     eax,[rcx+0x1]
0x140a9d106: cmovle  edx,eax
0x140a9d109: lea     eax,[rcx-0x1]
0x140a9d10c: cmovle  eax,r8d
0x140a9d110: mov     r8d,eax
0x140a9d113: cmp     edx,eax
0x140a9d115: jle     0x140a9d0f0
0x140a9d117: xor     r9d,r9d
0x140a9d11a: mov     r10,r9
0x140a9d11d: test    r10,r10
0x140a9d120: je      0x140a9d2f6
0x140a9d126: mov     rax,QWORD PTR [r10]
0x140a9d129: mov     rcx,r10
0x140a9d12c: call    QWORD PTR [rax+0x718]
0x140a9d132: movsx   rcx,ax
0x140a9d136: cmp     ecx,0x19
0x140a9d139: ja      0x140a9d2e2
0x140a9d13f: lea     rdx,[rip+0xffffffffff562eba]        # 0x140000000
0x140a9d146: mov     ecx,DWORD PTR [rdx+rcx*4+0xa9eb94]
0x140a9d14d: add     rcx,rdx
0x140a9d150: jmp     rcx
0x140a9d152: lea     rdx,[rip+0xc4e817]        # 0x1416eb970 ; literal='memorial'
0x140a9d159: mov     rcx,rbx
0x140a9d15c: call    0x140070b20
0x140a9d161: jmp     0x140a9e95b
0x140a9d166: lea     rdx,[rip+0xc4e78b]        # 0x1416eb8f8 ; literal='food imports sign'
0x140a9d16d: mov     rcx,rbx
0x140a9d170: call    0x140070b20
0x140a9d175: jmp     0x140a9e95b
0x140a9d17a: lea     rdx,[rip+0xc4e78f]        # 0x1416eb910 ; literal='clothing imports sign'
0x140a9d181: mov     rcx,rbx
0x140a9d184: call    0x140070b20
0x140a9d189: jmp     0x140a9e95b
0x140a9d18e: lea     rdx,[rip+0xc4e793]        # 0x1416eb928 ; literal='general imports sign'
0x140a9d195: mov     rcx,rbx
0x140a9d198: call    0x140070b20
0x140a9d19d: jmp     0x140a9e95b
0x140a9d1a2: lea     rdx,[rip+0xc4e797]        # 0x1416eb940 ; literal='cloth shop sign'
0x140a9d1a9: mov     rcx,rbx
0x140a9d1ac: call    0x140070b20
0x140a9d1b1: jmp     0x140a9e95b
0x140a9d1b6: lea     rdx,[rip+0xc4e6cb]        # 0x1416eb888 ; literal='leather shop sign'
0x140a9d1bd: mov     rcx,rbx
0x140a9d1c0: call    0x140070b20
0x140a9d1c5: jmp     0x140a9e95b
0x140a9d1ca: lea     rdx,[rip+0xc4e6cf]        # 0x1416eb8a0 ; literal='woven clothing shop sign'
0x140a9d1d1: mov     rcx,rbx
0x140a9d1d4: call    0x140070b20
0x140a9d1d9: jmp     0x140a9e95b
0x140a9d1de: lea     rdx,[rip+0xc4e6db]        # 0x1416eb8c0 ; literal='leather clothing shop sign'
0x140a9d1e5: mov     rcx,rbx
0x140a9d1e8: call    0x140070b20
0x140a9d1ed: jmp     0x140a9e95b
0x140a9d1f2: lea     rdx,[rip+0xc4e6e7]        # 0x1416eb8e0 ; literal="bone carver's shop sign"
0x140a9d1f9: mov     rcx,rbx
0x140a9d1fc: call    0x140070b20
0x140a9d201: jmp     0x140a9e95b
0x140a9d206: lea     rdx,[rip+0xc4e61b]        # 0x1416eb828 ; literal="gem cutter's shop sign"
0x140a9d20d: mov     rcx,rbx
0x140a9d210: call    0x140070b20
0x140a9d215: jmp     0x140a9e95b
0x140a9d21a: lea     rdx,[rip+0xc4e61f]        # 0x1416eb840 ; literal="weaponsmith's shop sign"
0x140a9d221: mov     rcx,rbx
0x140a9d224: call    0x140070b20
0x140a9d229: jmp     0x140a9e95b
0x140a9d22e: lea     rdx,[rip+0xc4e623]        # 0x1416eb858 ; literal="bowyer's shop sign"
0x140a9d235: mov     rcx,rbx
0x140a9d238: call    0x140070b20
0x140a9d23d: jmp     0x140a9e95b
0x140a9d242: lea     rdx,[rip+0xc4e627]        # 0x1416eb870 ; literal="blacksmith's shop sign"
0x140a9d249: mov     rcx,rbx
0x140a9d24c: call    0x140070b20
0x140a9d251: jmp     0x140a9e95b
0x140a9d256: lea     rdx,[rip+0xc4e56b]        # 0x1416eb7c8 ; literal="armorsmith's shop sign"
0x140a9d25d: mov     rcx,rbx
0x140a9d260: call    0x140070b20
0x140a9d265: jmp     0x140a9e95b
0x140a9d26a: lea     rdx,[rip+0xc4e56f]        # 0x1416eb7e0 ; literal='metal craft shop sign'
0x140a9d271: mov     rcx,rbx
0x140a9d274: call    0x140070b20
0x140a9d279: jmp     0x140a9e95b
0x140a9d27e: lea     rdx,[rip+0xc4e573]        # 0x1416eb7f8 ; literal='leather goods shop sign'
0x140a9d285: mov     rcx,rbx
0x140a9d288: call    0x140070b20
0x140a9d28d: jmp     0x140a9e95b
0x140a9d292: lea     rdx,[rip+0xc4e577]        # 0x1416eb810 ; literal="carpenter's shop sign"
0x140a9d299: mov     rcx,rbx
0x140a9d29c: call    0x140070b20
0x140a9d2a1: jmp     0x140a9e95b
0x140a9d2a6: lea     rdx,[rip+0xc4e4c3]        # 0x1416eb770 ; literal='stone furniture shop sign'
0x140a9d2ad: mov     rcx,rbx
0x140a9d2b0: call    0x140070b20
0x140a9d2b5: jmp     0x140a9e95b
0x140a9d2ba: lea     rdx,[rip+0xc4e4cf]        # 0x1416eb790 ; literal='metal furniture shop sign'
0x140a9d2c1: mov     rcx,rbx
0x140a9d2c4: call    0x140070b20
0x140a9d2c9: jmp     0x140a9e95b
0x140a9d2ce: lea     rdx,[rip+0xc4e4db]        # 0x1416eb7b0 ; literal='tavern sign'
0x140a9d2d5: mov     rcx,rbx
0x140a9d2d8: call    0x140070b20
0x140a9d2dd: jmp     0x140a9e95b
0x140a9d2e2: lea     rdx,[rip+0xc4e4d3]        # 0x1416eb7bc ; literal='slab'
0x140a9d2e9: mov     rcx,rbx
0x140a9d2ec: call    0x140070b20
0x140a9d2f1: jmp     0x140a9e95b
0x140a9d2f6: lea     rdx,[rip+0xc4e4bf]        # 0x1416eb7bc ; literal='slab'
0x140a9d2fd: jmp     0x140a9e94d
0x140a9d302: test    DWORD PTR [rbp+0x1f0],0x100
0x140a9d30c: je      0x140a9d323
0x140a9d30e: mov     r8d,0x7
0x140a9d314: lea     rdx,[rip+0xc4e16d]        # 0x1416eb488 ; literal='rotten '
0x140a9d31b: mov     rcx,rbx
0x140a9d31e: call    0x140070fd0
0x140a9d323: mov     r8d,0x6
0x140a9d329: lea     rdx,[rip+0xc4e410]        # 0x1416eb740 ; literal='corpse'
0x140a9d330: jmp     0x140a9e953
0x140a9d335: test    DWORD PTR [rbp+0x1f0],0x100
0x140a9d33f: je      0x140a9d356
0x140a9d341: mov     r8d,0x7
0x140a9d347: lea     rdx,[rip+0xc4e13a]        # 0x1416eb488 ; literal='rotten '
0x140a9d34e: mov     rcx,rbx
0x140a9d351: call    0x140070fd0
0x140a9d356: mov     eax,DWORD PTR [rbp+0x220]
0x140a9d35c: bt      eax,0x9
0x140a9d360: jae     0x140a9d38d
0x140a9d362: mov     rcx,rbx
0x140a9d365: cmp     r12d,0x1
0x140a9d369: jne     0x140a9d37c
0x140a9d36b: lea     rdx,[rip+0xb8f0b6]        # 0x14162c428 ; literal='tooth'
0x140a9d372: call    0x140070b20
0x140a9d377: jmp     0x140a9e9a7
0x140a9d37c: lea     rdx,[rip+0xc4e3c5]        # 0x1416eb748 ; literal='teeth'
0x140a9d383: call    0x140070b20
0x140a9d388: jmp     0x140a9e96b
0x140a9d38d: test    al,0x20
0x140a9d38f: je      0x140a9d3a5
0x140a9d391: lea     rdx,[rip+0xb8f088]        # 0x14162c420 ; literal='bone'
0x140a9d398: mov     rcx,rbx
0x140a9d39b: call    0x140070b20
0x140a9d3a0: jmp     0x140a9e95b
0x140a9d3a5: test    al,0x40
0x140a9d3a7: je      0x140a9d3bd
0x140a9d3a9: lea     rdx,[rip+0xb8f068]        # 0x14162c418 ; literal='shell'
0x140a9d3b0: mov     rcx,rbx
0x140a9d3b3: call    0x140070b20
0x140a9d3b8: jmp     0x140a9e95b
0x140a9d3bd: test    al,0x1
0x140a9d3bf: je      0x140a9d3d5
0x140a9d3c1: lea     rdx,[rip+0xc4e388]        # 0x1416eb750 ; literal='plant part'
0x140a9d3c8: mov     rcx,rbx
0x140a9d3cb: call    0x140070b20
0x140a9d3d0: jmp     0x140a9e95b
0x140a9d3d5: test    al,0x8
0x140a9d3d7: je      0x140a9d3ed
0x140a9d3d9: lea     rdx,[rip+0xc4e380]        # 0x1416eb760 ; literal='silk body part'
0x140a9d3e0: mov     rcx,rbx
0x140a9d3e3: call    0x140070b20
0x140a9d3e8: jmp     0x140a9e95b
0x140a9d3ed: test    al,0x10
0x140a9d3ef: je      0x140a9d405
0x140a9d3f1: lea     rdx,[rip+0xc4e2f8]        # 0x1416eb6f0 ; literal='leather body part'
0x140a9d3f8: mov     rcx,rbx
0x140a9d3fb: call    0x140070b20
0x140a9d400: jmp     0x140a9e95b
0x140a9d405: test    al,al
0x140a9d407: jns     0x140a9d41d
0x140a9d409: lea     rdx,[rip+0xc4e2f8]        # 0x1416eb708 ; literal='wooden body part'
0x140a9d410: mov     rcx,rbx
0x140a9d413: call    0x140070b20
0x140a9d418: jmp     0x140a9e95b
0x140a9d41d: bt      eax,0x8
0x140a9d421: jae     0x140a9d437
0x140a9d423: lea     rdx,[rip+0xc4e2f6]        # 0x1416eb720 ; literal='soap body part'
0x140a9d42a: mov     rcx,rbx
0x140a9d42d: call    0x140070b20
0x140a9d432: jmp     0x140a9e95b
0x140a9d437: bt      eax,0xa
0x140a9d43b: jae     0x140a9d451
0x140a9d43d: lea     rdx,[rip+0xb8effc]        # 0x14162c440 ; literal='horn'
0x140a9d444: mov     rcx,rbx
0x140a9d447: call    0x140070b20
0x140a9d44c: jmp     0x140a9e95b
0x140a9d451: bt      eax,0xb
0x140a9d455: jae     0x140a9d46b
0x140a9d457: lea     rdx,[rip+0xb8efda]        # 0x14162c438 ; literal='pearl'
0x140a9d45e: mov     rcx,rbx
0x140a9d461: call    0x140070b20
0x140a9d466: jmp     0x140a9e95b
0x140a9d46b: bt      eax,0xc
0x140a9d46f: jae     0x140a9d485
0x140a9d471: lea     rdx,[rip+0xc4e2b8]        # 0x1416eb730 ; literal='yarn body part'
0x140a9d478: mov     rcx,rbx
0x140a9d47b: call    0x140070b20
0x140a9d480: jmp     0x140a9e95b
0x140a9d485: bt      eax,0xd
0x140a9d489: lea     rdx,[rip+0xc4e228]        # 0x1416eb6b8 ; literal='strand body part'
0x140a9d490: jb      0x140a9d499
0x140a9d492: lea     rdx,[rip+0xbfe3e7]        # 0x14169b880 ; literal='body part'
0x140a9d499: mov     rcx,rbx
0x140a9d49c: call    0x140070b20
0x140a9d4a1: jmp     0x140a9e95b
0x140a9d4a6: mov     r15d,0x7
0x140a9d4ac: test    DWORD PTR [rbp+0x1f0],0x100
0x140a9d4b6: je      0x140a9d4d1
0x140a9d4b8: mov     r8d,r15d
0x140a9d4bb: lea     rdx,[rip+0xc4e20e]        # 0x1416eb6d0 ; literal='Rotten '
0x140a9d4c2: mov     rcx,rbx
0x140a9d4c5: call    0x140070fd0
0x140a9d4ca: mov     rcx,QWORD PTR [rbp-0x80]
0x140a9d4ce: xor     r9d,r9d
0x140a9d4d1: cmp     di,0xffff
0x140a9d4d5: je      0x140a9d61f
0x140a9d4db: mov     QWORD PTR [rsp+0x78],r9
0x140a9d4e0: lea     rax,[rsp+0x68]
0x140a9d4e5: cmp     rcx,0xf
0x140a9d4e9: cmova   rax,QWORD PTR [rsp+0x68]
0x140a9d4ef: mov     BYTE PTR [rax],0x0
0x140a9d4f2: test    di,di
0x140a9d4f5: js      0x140a9d53b
0x140a9d4f7: mov     rdx,QWORD PTR [rip+0x1a6b8ea]        # 0x142508de8
0x140a9d4fe: mov     rax,QWORD PTR [rip+0x1a6b8eb]        # 0x142508df0
0x140a9d505: sub     rax,rdx
0x140a9d508: sar     rax,0x3
0x140a9d50c: cmp     rdi,rax
0x140a9d50f: jae     0x140a9d53b
0x140a9d511: mov     rdx,QWORD PTR [rdx+rdi*8]
0x140a9d515: add     rdx,0x20
0x140a9d519: lea     rax,[rsp+0x68]
0x140a9d51e: cmp     rax,rdx
0x140a9d521: je      0x140a9d53b
0x140a9d523: mov     r8,QWORD PTR [rdx+0x10]
0x140a9d527: cmp     QWORD PTR [rdx+0x18],0xf
0x140a9d52c: jbe     0x140a9d531
0x140a9d52e: mov     rdx,QWORD PTR [rdx]
0x140a9d531: lea     rcx,[rsp+0x68]
0x140a9d536: call    0x140070e90
0x140a9d53b: lea     rdx,[rsp+0x68]
0x140a9d540: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9d545: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9d54b: mov     r8,QWORD PTR [rsp+0x78]
0x140a9d550: mov     rcx,rbx
0x140a9d553: call    0x140070fd0
0x140a9d558: mov     dl,0x20
0x140a9d55a: mov     rcx,rbx
0x140a9d55d: call    0x1400bb140
0x140a9d562: xorps   xmm0,xmm0
0x140a9d565: movups  XMMWORD PTR [rbp-0x58],xmm0
0x140a9d569: xor     r14d,r14d
0x140a9d56c: mov     QWORD PTR [rbp-0x48],r14
0x140a9d570: mov     QWORD PTR [rbp-0x40],0xf
0x140a9d578: mov     BYTE PTR [rbp-0x58],r14b
0x140a9d57c: mov     BYTE PTR [rsp+0x28],0x1
0x140a9d581: movzx   r9d,si
0x140a9d585: movzx   r8d,di
0x140a9d589: lea     rdx,[rbp-0x58]
0x140a9d58d: lea     rcx,[rip+0x1a6b834]        # 0x142508dc8
0x140a9d594: cmp     r12d,0x1
0x140a9d598: je      0x140a9d5a4
0x140a9d59a: mov     DWORD PTR [rsp+0x20],0x10
0x140a9d5a2: jmp     0x140a9d5ac
0x140a9d5a4: mov     DWORD PTR [rsp+0x20],0xf
0x140a9d5ac: call    0x1401464d0
0x140a9d5b1: lea     rdx,[rbp-0x58]
0x140a9d5b5: cmp     QWORD PTR [rbp-0x40],0xf
0x140a9d5ba: cmova   rdx,QWORD PTR [rbp-0x58]
0x140a9d5bf: mov     r8,QWORD PTR [rbp-0x48]
0x140a9d5c3: mov     rcx,rbx
0x140a9d5c6: call    0x140070fd0
0x140a9d5cb: nop     
0x140a9d5cc: mov     rdx,QWORD PTR [rbp-0x40]
0x140a9d5d0: cmp     rdx,0xf
0x140a9d5d4: jbe     0x140a9d60a
0x140a9d5d6: inc     rdx
0x140a9d5d9: mov     rcx,QWORD PTR [rbp-0x58]
0x140a9d5dd: mov     rax,rcx
0x140a9d5e0: cmp     rdx,0x1000
0x140a9d5e7: jb      0x140a9d605
0x140a9d5e9: add     rdx,0x27
0x140a9d5ed: mov     rcx,QWORD PTR [rcx-0x8]
0x140a9d5f1: sub     rax,rcx
0x140a9d5f4: add     rax,0xfffffffffffffff8
0x140a9d5f8: cmp     rax,0x1f
0x140a9d5fc: jbe     0x140a9d605
0x140a9d5fe: call    QWORD PTR [rip+0xb5e4c4]        # 0x1415fbac8
0x140a9d604: int3    
0x140a9d605: call    0x14154de20
0x140a9d60a: mov     QWORD PTR [rbp-0x48],r14
0x140a9d60e: mov     QWORD PTR [rbp-0x40],0xf
0x140a9d616: mov     BYTE PTR [rbp-0x58],0x0
0x140a9d61a: jmp     0x140a9e96b
0x140a9d61f: mov     r8,r15
0x140a9d622: lea     rdx,[rip+0xbfc38f]        # 0x1416999b8 ; literal='remains'
0x140a9d629: mov     rcx,rbx
0x140a9d62c: call    0x140070fd0
0x140a9d631: jmp     0x140a9e96b
0x140a9d636: mov     ecx,0x1a3
0x140a9d63b: movzx   eax,di
0x140a9d63e: sub     ax,cx
0x140a9d641: mov     ecx,0xc7
0x140a9d646: cmp     ax,cx
0x140a9d649: ja      0x140a9d671
0x140a9d64b: mov     r8d,esi
0x140a9d64e: lea     rdx,[rsp+0x68]
0x140a9d653: lea     rcx,[rip+0x1a6b61e]        # 0x142508c78
0x140a9d65a: call    0x140a7b670
0x140a9d65f: lea     rdx,[rsp+0x68]
0x140a9d664: mov     rcx,rbx
0x140a9d667: call    0x1400bb2d0
0x140a9d66c: jmp     0x140a9e96b
0x140a9d671: mov     eax,DWORD PTR [rbp+0x220]
0x140a9d677: cmp     di,0xffff
0x140a9d67b: jne     0x140a9d695
0x140a9d67d: test    eax,eax
0x140a9d67f: jne     0x140a9d695
0x140a9d681: lea     rdx,[rip+0xc4e050]        # 0x1416eb6d8 ; literal='seeds'
0x140a9d688: mov     rcx,rbx
0x140a9d68b: call    0x140070b20
0x140a9d690: jmp     0x140a9e96b
0x140a9d695: mov     WORD PTR [rsp+0x30],r9w
0x140a9d69b: mov     BYTE PTR [rsp+0x28],r8b
0x140a9d6a0: mov     DWORD PTR [rsp+0x20],eax
0x140a9d6a4: mov     r9d,esi
0x140a9d6a7: movzx   r8d,di
0x140a9d6ab: lea     rdx,[rsp+0x68]
0x140a9d6b0: lea     rcx,[rip+0x19501b9]        # 0x1423ed870
0x140a9d6b7: call    0x1414e58e0
0x140a9d6bc: lea     rdx,[rsp+0x68]
0x140a9d6c1: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9d6c6: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9d6cc: mov     r8,QWORD PTR [rsp+0x78]
0x140a9d6d1: mov     rcx,rbx
0x140a9d6d4: call    0x140070fd0
0x140a9d6d9: mov     dl,0x20
0x140a9d6db: jmp     0x140a9e963
0x140a9d6e0: test    DWORD PTR [rbp+0x1f0],0x100
0x140a9d6ea: je      0x140a9d704
0x140a9d6ec: mov     r8d,0x9
0x140a9d6f2: lea     rdx,[rip+0xc4dfe7]        # 0x1416eb6e0 ; literal='withered '
0x140a9d6f9: mov     rcx,rbx
0x140a9d6fc: call    0x140070fd0
0x140a9d701: xor     r9d,r9d
0x140a9d704: mov     ecx,0x1a3
0x140a9d709: movzx   eax,di
0x140a9d70c: sub     ax,cx
0x140a9d70f: mov     ecx,0xc7
0x140a9d714: cmp     ax,cx
0x140a9d717: ja      0x140a9d74d
0x140a9d719: cmp     r12d,0x1
0x140a9d71d: setne   al
0x140a9d720: mov     r9d,r15d
0x140a9d723: mov     BYTE PTR [rsp+0x20],al
0x140a9d727: mov     r8d,esi
0x140a9d72a: lea     rdx,[rsp+0x68]
0x140a9d72f: lea     rcx,[rip+0x1a6b542]        # 0x142508c78
0x140a9d736: call    0x140a7b6c0
0x140a9d73b: lea     rdx,[rsp+0x68]
0x140a9d740: mov     rcx,rbx
0x140a9d743: call    0x1400bb2d0
0x140a9d748: jmp     0x140a9e96b
0x140a9d74d: mov     eax,DWORD PTR [rbp+0x220]
0x140a9d753: cmp     di,0xffff
0x140a9d757: jne     0x140a9d788
0x140a9d759: test    eax,eax
0x140a9d75b: jne     0x140a9d788
0x140a9d75d: mov     rcx,rbx
0x140a9d760: cmp     r12d,0x1
0x140a9d764: je      0x140a9d777
0x140a9d766: lea     rdx,[rip+0xc4df13]        # 0x1416eb680 ; literal='leaves and fruit'
0x140a9d76d: call    0x140070b20
0x140a9d772: jmp     0x140a9e96b
0x140a9d777: lea     rdx,[rip+0xc4df1a]        # 0x1416eb698 ; literal='leaf or fruit'
0x140a9d77e: call    0x140070b20
0x140a9d783: jmp     0x140a9e9a7
0x140a9d788: mov     WORD PTR [rsp+0x30],r9w
0x140a9d78e: mov     BYTE PTR [rsp+0x28],0x1
0x140a9d793: jmp     0x140a9b711
0x140a9d798: test    DWORD PTR [rbp+0x1f0],0x100
0x140a9d7a2: je      0x140a9d7b9
0x140a9d7a4: mov     r8d,0x9
0x140a9d7aa: lea     rdx,[rip+0xc4df2f]        # 0x1416eb6e0 ; literal='withered '
0x140a9d7b1: mov     rcx,rbx
0x140a9d7b4: call    0x140070fd0
0x140a9d7b9: cmp     di,0xffff
0x140a9d7bd: je      0x140a9d7f7
0x140a9d7bf: cmp     esi,0xffffffff
0x140a9d7c2: je      0x140a9d7f7
0x140a9d7c4: cmp     r12d,0x1
0x140a9d7c8: setne   al
0x140a9d7cb: mov     BYTE PTR [rsp+0x20],al
0x140a9d7cf: xor     r9d,r9d
0x140a9d7d2: lea     r8,[rsp+0x68]
0x140a9d7d7: mov     edx,esi
0x140a9d7d9: lea     rcx,[rip+0x1a6b498]        # 0x142508c78
0x140a9d7e0: call    0x1401463c0
0x140a9d7e5: lea     rdx,[rsp+0x68]
0x140a9d7ea: mov     rcx,rbx
0x140a9d7ed: call    0x1400bb2d0
0x140a9d7f2: jmp     0x140a9e96b
0x140a9d7f7: mov     r8d,0x5
0x140a9d7fd: lea     rdx,[rip+0xb8e268]        # 0x14162ba6c ; literal='plant'
0x140a9d804: mov     rcx,rbx
0x140a9d807: call    0x140070fd0
0x140a9d80c: cmp     r12d,0x1
0x140a9d810: je      0x140a9e9a7
0x140a9d816: lea     rdx,[rip+0xb61cab]        # 0x1415ff4c8 ; literal='s'
0x140a9d81d: mov     rcx,rbx
0x140a9d820: call    0x140070b20
0x140a9d825: jmp     0x140a9e96b
0x140a9d82a: test    DWORD PTR [rbp+0x1f0],0x100
0x140a9d834: je      0x140a9d84b
0x140a9d836: mov     r8d,0x7
0x140a9d83c: lea     rdx,[rip+0xc4dc45]        # 0x1416eb488 ; literal='rotten '
0x140a9d843: mov     rcx,rbx
0x140a9d846: call    0x140070fd0
0x140a9d84b: mov     r15d,0x4
0x140a9d851: mov     r8d,r15d
0x140a9d854: lea     rdx,[rip+0xc4de4d]        # 0x1416eb6a8 ; literal='raw '
0x140a9d85b: mov     rcx,rbx
0x140a9d85e: call    0x140070fd0
0x140a9d863: cmp     di,0xffff
0x140a9d867: je      0x140a9da01
0x140a9d86d: xor     eax,eax
0x140a9d86f: mov     QWORD PTR [rsp+0x78],rax
0x140a9d874: lea     rax,[rsp+0x68]
0x140a9d879: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9d87e: cmova   rax,QWORD PTR [rsp+0x68]
0x140a9d884: mov     BYTE PTR [rax],0x0
0x140a9d887: cmp     si,0xffff
0x140a9d88b: je      0x140a9d90b
0x140a9d88d: test    di,di
0x140a9d890: js      0x140a9d954
0x140a9d896: mov     rcx,QWORD PTR [rip+0x1a6b54b]        # 0x142508de8
0x140a9d89d: mov     rax,QWORD PTR [rip+0x1a6b54c]        # 0x142508df0
0x140a9d8a4: sub     rax,rcx
0x140a9d8a7: sar     rax,0x3
0x140a9d8ab: cmp     rdi,rax
0x140a9d8ae: jae     0x140a9d910
0x140a9d8b0: test    si,si
0x140a9d8b3: js      0x140a9d910
0x140a9d8b5: mov     rax,QWORD PTR [rcx+rdi*8]
0x140a9d8b9: mov     rdx,QWORD PTR [rax+0x178]
0x140a9d8c0: movsx   rcx,si
0x140a9d8c4: mov     rax,QWORD PTR [rax+0x180]
0x140a9d8cb: sub     rax,rdx
0x140a9d8ce: sar     rax,0x3
0x140a9d8d2: cmp     rcx,rax
0x140a9d8d5: jae     0x140a9d910
0x140a9d8d7: mov     rdx,QWORD PTR [rdx+rcx*8]
0x140a9d8db: add     rdx,0x20
0x140a9d8df: lea     rax,[rsp+0x68]
0x140a9d8e4: cmp     rax,rdx
0x140a9d8e7: je      0x140a9d901
0x140a9d8e9: mov     r8,QWORD PTR [rdx+0x10]
0x140a9d8ed: cmp     QWORD PTR [rdx+0x18],0xf
0x140a9d8f2: jbe     0x140a9d8f7
0x140a9d8f4: mov     rdx,QWORD PTR [rdx]
0x140a9d8f7: lea     rcx,[rsp+0x68]
0x140a9d8fc: call    0x140070e90
0x140a9d901: cmp     QWORD PTR [rsp+0x78],0x0
0x140a9d907: jbe     0x140a9d910
0x140a9d909: jmp     0x140a9d954
0x140a9d90b: test    di,di
0x140a9d90e: js      0x140a9d954
0x140a9d910: mov     rdx,QWORD PTR [rip+0x1a6b4d1]        # 0x142508de8
0x140a9d917: mov     rax,QWORD PTR [rip+0x1a6b4d2]        # 0x142508df0
0x140a9d91e: sub     rax,rdx
0x140a9d921: sar     rax,0x3
0x140a9d925: cmp     rdi,rax
0x140a9d928: jae     0x140a9d954
0x140a9d92a: mov     rdx,QWORD PTR [rdx+rdi*8]
0x140a9d92e: add     rdx,0x20
0x140a9d932: lea     rax,[rsp+0x68]
0x140a9d937: cmp     rax,rdx
0x140a9d93a: je      0x140a9d954
0x140a9d93c: mov     r8,QWORD PTR [rdx+0x10]
0x140a9d940: cmp     QWORD PTR [rdx+0x18],0xf
0x140a9d945: jbe     0x140a9d94a
0x140a9d947: mov     rdx,QWORD PTR [rdx]
0x140a9d94a: lea     rcx,[rsp+0x68]
0x140a9d94f: call    0x140070e90
0x140a9d954: lea     rdx,[rsp+0x68]
0x140a9d959: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9d95e: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9d964: mov     r8,QWORD PTR [rsp+0x78]
0x140a9d969: mov     rcx,rbx
0x140a9d96c: call    0x140070fd0
0x140a9d971: test    di,di
0x140a9d974: js      0x140a9d9c3
0x140a9d976: mov     rcx,QWORD PTR [rip+0x1a6b46b]        # 0x142508de8
0x140a9d97d: mov     rax,QWORD PTR [rip+0x1a6b46c]        # 0x142508df0
0x140a9d984: sub     rax,rcx
0x140a9d987: sar     rax,0x3
0x140a9d98b: cmp     rdi,rax
0x140a9d98e: jae     0x140a9d9c3
0x140a9d990: test    si,si
0x140a9d993: js      0x140a9d9c3
0x140a9d995: mov     rax,QWORD PTR [rcx+rdi*8]
0x140a9d999: mov     rcx,QWORD PTR [rax+0x178]
0x140a9d9a0: movzx   edx,si
0x140a9d9a3: mov     rax,QWORD PTR [rax+0x180]
0x140a9d9aa: sub     rax,rcx
0x140a9d9ad: sar     rax,0x3
0x140a9d9b1: cmp     rdx,rax
0x140a9d9b4: jae     0x140a9d9c3
0x140a9d9b6: mov     rax,QWORD PTR [rcx+rdx*8]
0x140a9d9ba: movzx   ecx,BYTE PTR [rax+0x15b8]
0x140a9d9c1: jmp     0x140a9d9c5
0x140a9d9c3: mov     cl,0xff
0x140a9d9c5: movsx   ecx,cl
0x140a9d9c8: test    ecx,ecx
0x140a9d9ca: je      0x140a9d9eb
0x140a9d9cc: cmp     ecx,0x1
0x140a9d9cf: jne     0x140a9e96b
0x140a9d9d5: lea     rdx,[rip+0xb6192c]        # 0x1415ff308 ; literal=', '
0x140a9d9dc: mov     rcx,rbx
0x140a9d9df: call    0x140070b20
0x140a9d9e4: mov     dl,0xb
0x140a9d9e6: jmp     0x140a9e963
0x140a9d9eb: lea     rdx,[rip+0xb61916]        # 0x1415ff308 ; literal=', '
0x140a9d9f2: mov     rcx,rbx
0x140a9d9f5: call    0x140070b20
0x140a9d9fa: mov     dl,0xc
0x140a9d9fc: jmp     0x140a9e963
0x140a9da01: mov     r8,r15
0x140a9da04: lea     rdx,[rip+0xc1ed61]        # 0x1416bc76c ; literal='fish'
0x140a9da0b: mov     rcx,rbx
0x140a9da0e: call    0x140070fd0
0x140a9da13: jmp     0x140a9e96b
0x140a9da18: test    DWORD PTR [rbp+0x1f0],0x100
0x140a9da22: je      0x140a9da40
0x140a9da24: mov     r8d,0x7
0x140a9da2a: lea     rdx,[rip+0xc4da57]        # 0x1416eb488 ; literal='rotten '
0x140a9da31: mov     rcx,rbx
0x140a9da34: call    0x140070fd0
0x140a9da39: mov     rcx,QWORD PTR [rbp-0x80]
0x140a9da3d: xor     r9d,r9d
0x140a9da40: cmp     di,0xffff
0x140a9da44: je      0x140a9db60
0x140a9da4a: mov     QWORD PTR [rsp+0x78],r9
0x140a9da4f: lea     rax,[rsp+0x68]
0x140a9da54: cmp     rcx,0xf
0x140a9da58: cmova   rax,QWORD PTR [rsp+0x68]
0x140a9da5e: mov     BYTE PTR [rax],0x0
0x140a9da61: cmp     si,0xffff
0x140a9da65: je      0x140a9dae5
0x140a9da67: test    di,di
0x140a9da6a: js      0x140a9db2e
0x140a9da70: mov     rcx,QWORD PTR [rip+0x1a6b371]        # 0x142508de8
0x140a9da77: mov     rax,QWORD PTR [rip+0x1a6b372]        # 0x142508df0
0x140a9da7e: sub     rax,rcx
0x140a9da81: sar     rax,0x3
0x140a9da85: cmp     rdi,rax
0x140a9da88: jae     0x140a9daea
0x140a9da8a: test    si,si
0x140a9da8d: js      0x140a9daea
0x140a9da8f: mov     rax,QWORD PTR [rcx+rdi*8]
0x140a9da93: mov     rdx,QWORD PTR [rax+0x178]
0x140a9da9a: movsx   rcx,si
0x140a9da9e: mov     rax,QWORD PTR [rax+0x180]
0x140a9daa5: sub     rax,rdx
0x140a9daa8: sar     rax,0x3
0x140a9daac: cmp     rcx,rax
0x140a9daaf: jae     0x140a9daea
0x140a9dab1: mov     rdx,QWORD PTR [rdx+rcx*8]
0x140a9dab5: add     rdx,0x20
0x140a9dab9: lea     rax,[rsp+0x68]
0x140a9dabe: cmp     rax,rdx
0x140a9dac1: je      0x140a9dadb
0x140a9dac3: mov     r8,QWORD PTR [rdx+0x10]
0x140a9dac7: cmp     QWORD PTR [rdx+0x18],0xf
0x140a9dacc: jbe     0x140a9dad1
0x140a9dace: mov     rdx,QWORD PTR [rdx]
0x140a9dad1: lea     rcx,[rsp+0x68]
0x140a9dad6: call    0x140070e90
0x140a9dadb: cmp     QWORD PTR [rsp+0x78],0x0
0x140a9dae1: jbe     0x140a9daea
0x140a9dae3: jmp     0x140a9db2e
0x140a9dae5: test    di,di
0x140a9dae8: js      0x140a9db2e
0x140a9daea: mov     rdx,QWORD PTR [rip+0x1a6b2f7]        # 0x142508de8
0x140a9daf1: mov     rax,QWORD PTR [rip+0x1a6b2f8]        # 0x142508df0
0x140a9daf8: sub     rax,rdx
0x140a9dafb: sar     rax,0x3
0x140a9daff: cmp     rdi,rax
0x140a9db02: jae     0x140a9db2e
0x140a9db04: mov     rdx,QWORD PTR [rdx+rdi*8]
0x140a9db08: add     rdx,0x20
0x140a9db0c: lea     rax,[rsp+0x68]
0x140a9db11: cmp     rax,rdx
0x140a9db14: je      0x140a9db2e
0x140a9db16: mov     r8,QWORD PTR [rdx+0x10]
0x140a9db1a: cmp     QWORD PTR [rdx+0x18],0xf
0x140a9db1f: jbe     0x140a9db24
0x140a9db21: mov     rdx,QWORD PTR [rdx]
0x140a9db24: lea     rcx,[rsp+0x68]
0x140a9db29: call    0x140070e90
0x140a9db2e: lea     rdx,[rsp+0x68]
0x140a9db33: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9db38: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9db3e: mov     r8,QWORD PTR [rsp+0x78]
0x140a9db43: mov     rcx,rbx
0x140a9db46: call    0x140070fd0
0x140a9db4b: mov     r8d,0x1
0x140a9db51: lea     rdx,[rip+0xb60e14]        # 0x1415fe96c ; literal=' '
0x140a9db58: mov     rcx,rbx
0x140a9db5b: call    0x140070fd0
0x140a9db60: mov     r8d,0x3
0x140a9db66: lea     rdx,[rip+0xc4db43]        # 0x1416eb6b0 ; literal='egg'
0x140a9db6d: mov     rcx,rbx
0x140a9db70: call    0x140070fd0
0x140a9db75: jmp     0x140a9e96b
0x140a9db7a: test    DWORD PTR [rbp+0x1f0],0x100
0x140a9db84: je      0x140a9dba2
0x140a9db86: mov     r8d,0x7
0x140a9db8c: lea     rdx,[rip+0xc4d8f5]        # 0x1416eb488 ; literal='rotten '
0x140a9db93: mov     rcx,rbx
0x140a9db96: call    0x140070fd0
0x140a9db9b: mov     rcx,QWORD PTR [rbp-0x80]
0x140a9db9f: xor     r9d,r9d
0x140a9dba2: cmp     di,0xffff
0x140a9dba6: je      0x140a9dc8b
0x140a9dbac: mov     QWORD PTR [rsp+0x78],r9
0x140a9dbb1: lea     rax,[rsp+0x68]
0x140a9dbb6: cmp     rcx,0xf
0x140a9dbba: cmova   rax,QWORD PTR [rsp+0x68]
0x140a9dbc0: mov     BYTE PTR [rax],0x0
0x140a9dbc3: cmp     si,0xffff
0x140a9dbc7: je      0x140a9dc41
0x140a9dbc9: test    di,di
0x140a9dbcc: js      0x140a9dc41
0x140a9dbce: mov     rcx,QWORD PTR [rip+0x1a6b213]        # 0x142508de8
0x140a9dbd5: mov     rax,QWORD PTR [rip+0x1a6b214]        # 0x142508df0
0x140a9dbdc: sub     rax,rcx
0x140a9dbdf: sar     rax,0x3
0x140a9dbe3: cmp     rdi,rax
0x140a9dbe6: jae     0x140a9dc41
0x140a9dbe8: test    si,si
0x140a9dbeb: js      0x140a9dc41
0x140a9dbed: mov     rax,QWORD PTR [rcx+rdi*8]
0x140a9dbf1: mov     rdx,QWORD PTR [rax+0x178]
0x140a9dbf8: movsx   rcx,si
0x140a9dbfc: mov     rax,QWORD PTR [rax+0x180]
0x140a9dc03: sub     rax,rdx
0x140a9dc06: sar     rax,0x3
0x140a9dc0a: cmp     rcx,rax
0x140a9dc0d: jae     0x140a9dc41
0x140a9dc0f: mov     rdx,QWORD PTR [rdx+rcx*8]
0x140a9dc13: add     rdx,0x20
0x140a9dc17: lea     rax,[rsp+0x68]
0x140a9dc1c: cmp     rax,rdx
0x140a9dc1f: je      0x140a9dc39
0x140a9dc21: mov     r8,QWORD PTR [rdx+0x10]
0x140a9dc25: cmp     QWORD PTR [rdx+0x18],0xf
0x140a9dc2a: jbe     0x140a9dc2f
0x140a9dc2c: mov     rdx,QWORD PTR [rdx]
0x140a9dc2f: lea     rcx,[rsp+0x68]
0x140a9dc34: call    0x140070e90
0x140a9dc39: cmp     QWORD PTR [rsp+0x78],0x0
0x140a9dc3f: ja      0x140a9dc61
0x140a9dc41: mov     BYTE PTR [rsp+0x20],0x0
0x140a9dc46: mov     r9d,0x1
0x140a9dc4c: movzx   r8d,di
0x140a9dc50: lea     rdx,[rsp+0x68]
0x140a9dc55: lea     rcx,[rip+0x1a6b16c]        # 0x142508dc8
0x140a9dc5c: call    0x14025a330
0x140a9dc61: lea     rdx,[rsp+0x68]
0x140a9dc66: mov     rcx,rbx
0x140a9dc69: call    0x1400bb2d0
0x140a9dc6e: movzx   r8d,si
0x140a9dc72: movzx   edx,di
0x140a9dc75: lea     rcx,[rip+0x1a6b14c]        # 0x142508dc8
0x140a9dc7c: call    0x1400f3cb0
0x140a9dc81: movsx   ecx,al
0x140a9dc84: test    al,al
0x140a9dc86: jmp     0x140a9d9ca
0x140a9dc8b: lea     rdx,[rip+0xc1eada]        # 0x1416bc76c ; literal='fish'
0x140a9dc92: mov     rcx,rbx
0x140a9dc95: call    0x140070b20
0x140a9dc9a: jmp     0x140a9e96b
0x140a9dc9f: mov     rcx,rbx
0x140a9dca2: cmp     di,0xffff
0x140a9dca6: je      0x140a9dce1
0x140a9dca8: lea     rdx,[rip+0xc4e18d]        # 0x1416ebe3c ; literal='live '
0x140a9dcaf: call    0x140070b20
0x140a9dcb4: mov     r9d,0xffffffff
0x140a9dcba: cmp     r12d,0x1
0x140a9dcbe: setne   r8b
0x140a9dcc2: lea     rdx,[rsp+0x68]
0x140a9dcc7: movzx   ecx,di
0x140a9dcca: call    0x140aba4d0
0x140a9dccf: lea     rdx,[rsp+0x68]
0x140a9dcd4: mov     rcx,rbx
0x140a9dcd7: call    0x1400bb2d0
0x140a9dcdc: jmp     0x140a9e96b
0x140a9dce1: lea     rdx,[rip+0xc4e160]        # 0x1416ebe48 ; literal='small live animal'
0x140a9dce8: call    0x140070b20
0x140a9dced: jmp     0x140a9e95b
0x140a9dcf2: mov     rcx,rbx
0x140a9dcf5: cmp     di,0xffff
0x140a9dcf9: je      0x140a9dd04
0x140a9dcfb: lea     rdx,[rip+0xc4e15a]        # 0x1416ebe5c ; literal='tame '
0x140a9dd02: jmp     0x140a9dcaf
0x140a9dd04: lea     rdx,[rip+0xc4e15d]        # 0x1416ebe68 ; literal='small tame animal'
0x140a9dd0b: call    0x140070b20
0x140a9dd10: jmp     0x140a9e95b
0x140a9dd15: mov     r8d,0xd
0x140a9dd1b: lea     rdx,[rip+0xc4e0ee]        # 0x1416ebe10 ; literal='prepared meal'
0x140a9dd22: jmp     0x140a9e953
0x140a9dd27: mov     r14d,DWORD PTR [rbp+0x1f0]
0x140a9dd2e: bt      r14d,0x8
0x140a9dd33: jae     0x140a9dd44
0x140a9dd35: lea     rdx,[rip+0xc4d74c]        # 0x1416eb488 ; literal='rotten '
0x140a9dd3c: mov     rcx,rbx
0x140a9dd3f: call    0x140070b20
0x140a9dd44: test    r14b,0x4
0x140a9dd48: je      0x140a9dd59
0x140a9dd4a: lea     rdx,[rip+0xc4e0cf]        # 0x1416ebe20 ; literal='preserved '
0x140a9dd51: mov     rcx,rbx
0x140a9dd54: call    0x140070b20
0x140a9dd59: cmp     di,0xffff
0x140a9dd5d: je      0x140a9de6a
0x140a9dd63: cmp     esi,0xffffffff
0x140a9dd66: je      0x140a9de6a
0x140a9dd6c: mov     r8d,esi
0x140a9dd6f: movzx   edx,di
0x140a9dd72: lea     rcx,[rip+0x194faf7]        # 0x1423ed870
0x140a9dd79: call    0x1414c1d30
0x140a9dd7e: mov     r14,rax
0x140a9dd81: test    rax,rax
0x140a9dd84: je      0x140a9de56
0x140a9dd8a: cmp     QWORD PTR [rax+0x2f8],0x0
0x140a9dd92: je      0x140a9ddad
0x140a9dd94: lea     rdx,[rax+0x2e8]
0x140a9dd9b: mov     rcx,rbx
0x140a9dd9e: call    0x1400bb2d0
0x140a9dda3: mov     dl,0x20
0x140a9dda5: mov     rcx,rbx
0x140a9dda8: call    0x1400bb140
0x140a9ddad: mov     r8d,esi
0x140a9ddb0: movzx   edx,di
0x140a9ddb3: call    0x140718ba0
0x140a9ddb8: cmp     eax,0xffffffff
0x140a9ddbb: je      0x140a9ddea
0x140a9ddbd: mov     r9d,0xffffffff
0x140a9ddc3: xor     r8d,r8d
0x140a9ddc6: lea     rdx,[rsp+0x68]
0x140a9ddcb: movzx   ecx,ax
0x140a9ddce: call    0x140aba4d0
0x140a9ddd3: lea     rdx,[rsp+0x68]
0x140a9ddd8: mov     rcx,rbx
0x140a9dddb: call    0x1400bb2d0
0x140a9dde0: mov     dl,0x20
0x140a9dde2: mov     rcx,rbx
0x140a9dde5: call    0x1400bb140
0x140a9ddea: mov     rcx,rbx
0x140a9dded: cmp     QWORD PTR [r14+0x2b8],0x0
0x140a9ddf5: jne     0x140a9de2e
0x140a9ddf7: lea     rdx,[r14+0xb8]
0x140a9ddfe: call    0x1400bb2d0
0x140a9de03: mov     rcx,rbx
0x140a9de06: cmp     r12d,0x1
0x140a9de0a: jle     0x140a9de1d
0x140a9de0c: lea     rdx,[rip+0xc4e019]        # 0x1416ebe2c ; literal=' chops'
0x140a9de13: call    0x140070b20
0x140a9de18: jmp     0x140a9e971
0x140a9de1d: lea     rdx,[rip+0xc4e010]        # 0x1416ebe34 ; literal=' chop'
0x140a9de24: call    0x140070b20
0x140a9de29: jmp     0x140a9e9a7
0x140a9de2e: cmp     r12d,0x1
0x140a9de32: jne     0x140a9de45
0x140a9de34: lea     rdx,[r14+0x2a8]
0x140a9de3b: call    0x1400bb2d0
0x140a9de40: jmp     0x140a9e9a7
0x140a9de45: lea     rdx,[r14+0x2c8]
0x140a9de4c: call    0x1400bb2d0
0x140a9de51: jmp     0x140a9e96b
0x140a9de56: lea     rdx,[rip+0xc4df83]        # 0x1416ebde0 ; literal='meat'
0x140a9de5d: mov     rcx,rbx
0x140a9de60: call    0x140070b20
0x140a9de65: jmp     0x140a9e96b
0x140a9de6a: mov     r8d,0x4
0x140a9de70: lea     rdx,[rip+0xc4df69]        # 0x1416ebde0 ; literal='meat'
0x140a9de77: mov     rcx,rbx
0x140a9de7a: call    0x140070fd0
0x140a9de7f: jmp     0x140a9e96b
0x140a9de84: mov     rcx,QWORD PTR [rip+0x1a6b025]        # 0x142508eb0
0x140a9de8b: mov     r8,QWORD PTR [rip+0x1a6b016]        # 0x142508ea8
0x140a9de92: sub     rcx,r8
0x140a9de95: sar     rcx,0x3
0x140a9de99: sub     ecx,0x1
0x140a9de9c: movsxd  rdx,ecx
0x140a9de9f: js      0x140a9deb4
0x140a9dea1: mov     rax,QWORD PTR [r8+rdx*8]
0x140a9dea5: cmp     WORD PTR [rax+0x28],r15w
0x140a9deaa: je      0x140a9df16
0x140a9deac: dec     ecx
0x140a9deae: sub     rdx,0x1
0x140a9deb2: jns     0x140a9dea1
0x140a9deb4: mov     eax,DWORD PTR [rbp+0x220]
0x140a9deba: cmp     di,0xffff
0x140a9debe: jne     0x140a9dec4
0x140a9dec0: test    eax,eax
0x140a9dec2: je      0x140a9df02
0x140a9dec4: mov     WORD PTR [rsp+0x30],r9w
0x140a9deca: mov     BYTE PTR [rsp+0x28],0x1
0x140a9decf: mov     DWORD PTR [rsp+0x20],eax
0x140a9ded3: mov     r9d,esi
0x140a9ded6: movzx   r8d,di
0x140a9deda: lea     rdx,[rsp+0x68]
0x140a9dedf: lea     rcx,[rip+0x194f98a]        # 0x1423ed870
0x140a9dee6: call    0x1414e58e0
0x140a9deeb: lea     rdx,[rsp+0x68]
0x140a9def0: mov     rcx,rbx
0x140a9def3: call    0x1400bb2d0
0x140a9def8: mov     dl,0x20
0x140a9defa: mov     rcx,rbx
0x140a9defd: call    0x1400bb140
0x140a9df02: lea     rdx,[rip+0xc48123]        # 0x1416e602c ; literal='weapon'
0x140a9df09: mov     rcx,rbx
0x140a9df0c: call    0x140070b20
0x140a9df11: jmp     0x140a9e95b
0x140a9df16: movsxd  rax,ecx
0x140a9df19: mov     r14,QWORD PTR [r8+rax*8]
0x140a9df1d: test    r14,r14
0x140a9df20: je      0x140a9deb4
0x140a9df22: cmp     QWORD PTR [r14+0xb8],0x0
0x140a9df2a: je      0x140a9df4d
0x140a9df2c: lea     rdx,[r14+0xa8]
0x140a9df33: mov     rcx,rbx
0x140a9df36: call    0x1400bb2d0
0x140a9df3b: lea     rdx,[rip+0xb60a2a]        # 0x1415fe96c ; literal=' '
0x140a9df42: mov     rcx,rbx
0x140a9df45: call    0x140070b20
0x140a9df4a: xor     r9d,r9d
0x140a9df4d: cmp     di,0xffff
0x140a9df51: mov     eax,DWORD PTR [rbp+0x220]
0x140a9df57: jne     0x140a9df5d
0x140a9df59: test    eax,eax
0x140a9df5b: je      0x140a9df9b
0x140a9df5d: mov     WORD PTR [rsp+0x30],r9w
0x140a9df63: mov     BYTE PTR [rsp+0x28],0x1
0x140a9df68: mov     DWORD PTR [rsp+0x20],eax
0x140a9df6c: mov     r9d,esi
0x140a9df6f: movzx   r8d,di
0x140a9df73: lea     rdx,[rsp+0x68]
0x140a9df78: lea     rcx,[rip+0x194f8f1]        # 0x1423ed870
0x140a9df7f: call    0x1414e58e0
0x140a9df84: lea     rdx,[rsp+0x68]
0x140a9df89: mov     rcx,rbx
0x140a9df8c: call    0x1400bb2d0
0x140a9df91: mov     dl,0x20
0x140a9df93: mov     rcx,rbx
0x140a9df96: call    0x1400bb140
0x140a9df9b: cmp     r12d,0x1
0x140a9df9f: lea     rdx,[r14+0x88]
0x140a9dfa6: jne     0x140a9dcd4
0x140a9dfac: lea     rdx,[r14+0x68]
0x140a9dfb0: mov     rcx,rbx
0x140a9dfb3: call    0x1400bb2d0
0x140a9dfb8: jmp     0x140a9e96b
0x140a9dfbd: test    r13,r13
0x140a9dfc0: je      0x140a9dfdb
0x140a9dfc2: lea     rdx,[rbp-0x78]
0x140a9dfc6: mov     rcx,rbx
0x140a9dfc9: call    0x1400bb2d0
0x140a9dfce: mov     dl,0x20
0x140a9dfd0: mov     rcx,rbx
0x140a9dfd3: call    0x1400bb140
0x140a9dfd8: xor     r9d,r9d
0x140a9dfdb: mov     rcx,QWORD PTR [rip+0x1a6b1b6]        # 0x142509198
0x140a9dfe2: mov     r14,QWORD PTR [rip+0x1a6b1a7]        # 0x142509190
0x140a9dfe9: sub     rcx,r14
0x140a9dfec: sar     rcx,0x3
0x140a9dff0: sub     ecx,0x1
0x140a9dff3: movsxd  rdx,ecx
0x140a9dff6: js      0x140a9e013
0x140a9dff8: nop     DWORD PTR [rax+rax*1+0x0]
0x140a9e000: mov     rax,QWORD PTR [r14+rdx*8]
0x140a9e004: cmp     WORD PTR [rax+0x28],r15w
0x140a9e009: je      0x140a9e08a
0x140a9e00b: dec     ecx
0x140a9e00d: sub     rdx,0x1
0x140a9e011: jns     0x140a9e000
0x140a9e013: mov     eax,DWORD PTR [rbp+0x220]
0x140a9e019: cmp     di,0xffff
0x140a9e01d: jne     0x140a9e023
0x140a9e01f: test    eax,eax
0x140a9e021: je      0x140a9e061
0x140a9e023: mov     WORD PTR [rsp+0x30],r9w
0x140a9e029: mov     BYTE PTR [rsp+0x28],0x1
0x140a9e02e: mov     DWORD PTR [rsp+0x20],eax
0x140a9e032: mov     r9d,esi
0x140a9e035: movzx   r8d,di
0x140a9e039: lea     rdx,[rsp+0x68]
0x140a9e03e: lea     rcx,[rip+0x194f82b]        # 0x1423ed870
0x140a9e045: call    0x1414e58e0
0x140a9e04a: lea     rdx,[rsp+0x68]
0x140a9e04f: mov     rcx,rbx
0x140a9e052: call    0x1400bb2d0
0x140a9e057: mov     dl,0x20
0x140a9e059: mov     rcx,rbx
0x140a9e05c: call    0x1400bb140
0x140a9e061: cmp     r12d,0x1
0x140a9e065: jle     0x140a9e076
0x140a9e067: lea     rdx,[rip+0xc4dd82]        # 0x1416ebdf0 ; literal='suits of '
0x140a9e06e: mov     rcx,rbx
0x140a9e071: call    0x140070b20
0x140a9e076: lea     rdx,[rip+0xc47fb7]        # 0x1416e6034 ; literal='armor'
0x140a9e07d: mov     rcx,rbx
0x140a9e080: call    0x140070b20
0x140a9e085: jmp     0x140a9e96b
0x140a9e08a: movsxd  rax,ecx
0x140a9e08d: mov     r14,QWORD PTR [r14+rax*8]
0x140a9e091: test    r14,r14
0x140a9e094: je      0x140a9e013
0x140a9e09a: cmp     r12d,0x1
0x140a9e09e: jle     0x140a9e0c3
0x140a9e0a0: cmp     QWORD PTR [r14+0xb8],0x0
0x140a9e0a8: je      0x140a9e0c3
0x140a9e0aa: lea     rdx,[r14+0xa8]
0x140a9e0b1: mov     rcx,rbx
0x140a9e0b4: call    0x1400bb2d0
0x140a9e0b9: mov     dl,0x20
0x140a9e0bb: mov     rcx,rbx
0x140a9e0be: call    0x1400bb140
0x140a9e0c3: cmp     QWORD PTR [r14+0xf8],0x0
0x140a9e0cb: je      0x140a9e0eb
0x140a9e0cd: lea     rdx,[r14+0xe8]
0x140a9e0d4: mov     rcx,rbx
0x140a9e0d7: call    0x1400bb2d0
0x140a9e0dc: lea     rdx,[rip+0xb60889]        # 0x1415fe96c ; literal=' '
0x140a9e0e3: mov     rcx,rbx
0x140a9e0e6: call    0x140070b20
0x140a9e0eb: mov     eax,DWORD PTR [rbp+0x220]
0x140a9e0f1: cmp     di,0xffff
0x140a9e0f5: jne     0x140a9e10e
0x140a9e0f7: test    eax,eax
0x140a9e0f9: jne     0x140a9e10e
0x140a9e0fb: cmp     QWORD PTR [r14+0xd8],0x0
0x140a9e103: je      0x140a9e14d
0x140a9e105: lea     rdx,[r14+0xc8]
0x140a9e10c: jmp     0x140a9e13b
0x140a9e10e: xor     ecx,ecx
0x140a9e110: mov     WORD PTR [rsp+0x30],cx
0x140a9e115: mov     BYTE PTR [rsp+0x28],0x1
0x140a9e11a: mov     DWORD PTR [rsp+0x20],eax
0x140a9e11e: mov     r9d,esi
0x140a9e121: movzx   r8d,di
0x140a9e125: lea     rdx,[rsp+0x68]
0x140a9e12a: lea     rcx,[rip+0x194f73f]        # 0x1423ed870
0x140a9e131: call    0x1414e58e0
0x140a9e136: lea     rdx,[rsp+0x68]
0x140a9e13b: mov     rcx,rbx
0x140a9e13e: call    0x1400bb2d0
0x140a9e143: mov     dl,0x20
0x140a9e145: mov     rcx,rbx
0x140a9e148: call    0x1400bb140
0x140a9e14d: mov     r9d,esi
0x140a9e150: movzx   r8d,di
0x140a9e154: mov     edx,0x2f
0x140a9e159: lea     rcx,[rip+0x194f710]        # 0x1423ed870
0x140a9e160: call    0x14146fea0
0x140a9e165: test    al,al
0x140a9e167: je      0x140a9df9b
0x140a9e16d: lea     rcx,[r14+0x118]
0x140a9e174: mov     edx,0x7
0x140a9e179: call    0x140073550
0x140a9e17e: test    al,al
0x140a9e180: je      0x140a9df9b
0x140a9e186: lea     rdx,[rip+0xc4dc5b]        # 0x1416ebde8 ; literal='chain '
0x140a9e18d: mov     rcx,rbx
0x140a9e190: call    0x140070b20
0x140a9e195: jmp     0x140a9df9b
0x140a9e19a: test    r13,r13
0x140a9e19d: je      0x140a9e1b8
0x140a9e19f: lea     rdx,[rbp-0x78]
0x140a9e1a3: mov     rcx,rbx
0x140a9e1a6: call    0x1400bb2d0
0x140a9e1ab: mov     dl,0x20
0x140a9e1ad: mov     rcx,rbx
0x140a9e1b0: call    0x1400bb140
0x140a9e1b5: xor     r9d,r9d
0x140a9e1b8: mov     rcx,QWORD PTR [rip+0x1a6b021]        # 0x1425091e0
0x140a9e1bf: mov     r8,QWORD PTR [rip+0x1a6b012]        # 0x1425091d8
0x140a9e1c6: sub     rcx,r8
0x140a9e1c9: sar     rcx,0x3
0x140a9e1cd: sub     ecx,0x1
0x140a9e1d0: movsxd  rdx,ecx
0x140a9e1d3: js      0x140a9e1f7
0x140a9e1d5: data16  data16 nop WORD PTR [rax+rax*1+0x0]
0x140a9e1e0: mov     rax,QWORD PTR [r8+rdx*8]
0x140a9e1e4: cmp     WORD PTR [rax+0x28],r15w
0x140a9e1e9: je      0x140a9e32f
0x140a9e1ef: dec     ecx
0x140a9e1f1: sub     rdx,0x1
0x140a9e1f5: jns     0x140a9e1e0
0x140a9e1f7: mov     r13,r9
0x140a9e1fa: mov     eax,DWORD PTR [rbp+0x220]
0x140a9e200: cmp     di,0xffff
0x140a9e204: jne     0x140a9e20a
0x140a9e206: test    eax,eax
0x140a9e208: je      0x140a9e259
0x140a9e20a: xor     ecx,ecx
0x140a9e20c: mov     WORD PTR [rsp+0x30],cx
0x140a9e211: mov     BYTE PTR [rsp+0x28],0x1
0x140a9e216: mov     DWORD PTR [rsp+0x20],eax
0x140a9e21a: mov     r9d,esi
0x140a9e21d: movzx   r8d,di
0x140a9e221: lea     rdx,[rsp+0x68]
0x140a9e226: lea     rcx,[rip+0x194f643]        # 0x1423ed870
0x140a9e22d: call    0x1414e58e0
0x140a9e232: lea     rdx,[rsp+0x68]
0x140a9e237: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9e23c: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9e242: mov     r8,QWORD PTR [rsp+0x78]
0x140a9e247: mov     rcx,rbx
0x140a9e24a: call    0x140070fd0
0x140a9e24f: mov     dl,0x20
0x140a9e251: mov     rcx,rbx
0x140a9e254: call    0x1400bb140
0x140a9e259: cmp     r14d,0xffffffff
0x140a9e25d: je      0x140a9e2c4
0x140a9e25f: mov     edx,r14d
0x140a9e262: lea     rcx,[rip+0x1963567]        # 0x1424017d0
0x140a9e269: call    0x140073ca0
0x140a9e26e: test    rax,rax
0x140a9e271: je      0x140a9e2c4
0x140a9e273: mov     rdx,QWORD PTR [rax]
0x140a9e276: mov     rcx,rax
0x140a9e279: call    QWORD PTR [rdx+0x208]
0x140a9e27f: mov     r14,rax
0x140a9e282: test    rax,rax
0x140a9e285: je      0x140a9e2c4
0x140a9e287: xor     edx,edx
0x140a9e289: mov     rcx,rax
0x140a9e28c: call    0x140073550
0x140a9e291: test    al,al
0x140a9e293: je      0x140a9e2a4
0x140a9e295: lea     rdx,[rip+0xbb31fc]        # 0x141651498 ; literal='right '
0x140a9e29c: mov     rcx,rbx
0x140a9e29f: call    0x140070b20
0x140a9e2a4: mov     edx,0x1
0x140a9e2a9: mov     rcx,r14
0x140a9e2ac: call    0x140073550
0x140a9e2b1: test    al,al
0x140a9e2b3: je      0x140a9e2c4
0x140a9e2b5: lea     rdx,[rip+0xbb31e4]        # 0x1416514a0 ; literal='left '
0x140a9e2bc: mov     rcx,rbx
0x140a9e2bf: call    0x140070b20
0x140a9e2c4: test    r13,r13
0x140a9e2c7: je      0x140a9e373
0x140a9e2cd: mov     r9d,esi
0x140a9e2d0: movzx   r8d,di
0x140a9e2d4: mov     edx,0x2f
0x140a9e2d9: lea     rcx,[rip+0x194f590]        # 0x1423ed870
0x140a9e2e0: call    0x14146fea0
0x140a9e2e5: test    al,al
0x140a9e2e7: je      0x140a9e30d
0x140a9e2e9: lea     rcx,[r13+0xe8]
0x140a9e2f0: mov     edx,0x7
0x140a9e2f5: call    0x140073550
0x140a9e2fa: test    al,al
0x140a9e2fc: je      0x140a9e30d
0x140a9e2fe: lea     rdx,[rip+0xc4dae3]        # 0x1416ebde8 ; literal='chain '
0x140a9e305: mov     rcx,rbx
0x140a9e308: call    0x140070b20
0x140a9e30d: cmp     r12d,0x1
0x140a9e311: lea     rdx,[r13+0x88]
0x140a9e318: jne     0x140a9dcd4
0x140a9e31e: lea     rdx,[r13+0x68]
0x140a9e322: mov     rcx,rbx
0x140a9e325: call    0x1400bb2d0
0x140a9e32a: jmp     0x140a9e96b
0x140a9e32f: movsxd  rax,ecx
0x140a9e332: mov     r15,QWORD PTR [r8+rax*8]
0x140a9e336: mov     r13,r15
0x140a9e339: test    r15,r15
0x140a9e33c: je      0x140a9e1fa
0x140a9e342: cmp     QWORD PTR [r15+0xb8],0x0
0x140a9e34a: je      0x140a9e1fa
0x140a9e350: lea     rdx,[r15+0xa8]
0x140a9e357: mov     rcx,rbx
0x140a9e35a: call    0x1400bb2d0
0x140a9e35f: lea     rdx,[rip+0xb60606]        # 0x1415fe96c ; literal=' '
0x140a9e366: mov     rcx,rbx
0x140a9e369: call    0x140070b20
0x140a9e36e: jmp     0x140a9e1fa
0x140a9e373: lea     rdx,[rip+0xc4da86]        # 0x1416ebe00 ; literal='handwear'
0x140a9e37a: mov     rcx,rbx
0x140a9e37d: call    0x140070b20
0x140a9e382: jmp     0x140a9e96b
0x140a9e387: mov     rcx,QWORD PTR [rip+0x1a6ae82]        # 0x142509210
0x140a9e38e: mov     r8,QWORD PTR [rip+0x1a6ae73]        # 0x142509208
0x140a9e395: sub     rcx,r8
0x140a9e398: sar     rcx,0x3
0x140a9e39c: sub     ecx,0x1
0x140a9e39f: movsxd  rdx,ecx
0x140a9e3a2: js      0x140a9e3c9
0x140a9e3a4: mov     rax,QWORD PTR [r8+rdx*8]
0x140a9e3a8: cmp     WORD PTR [rax+0x28],r15w
0x140a9e3ad: je      0x140a9e3b9
0x140a9e3af: dec     ecx
0x140a9e3b1: sub     rdx,0x1
0x140a9e3b5: jns     0x140a9e3a4
0x140a9e3b7: jmp     0x140a9e3c9
0x140a9e3b9: movsxd  rax,ecx
0x140a9e3bc: mov     r14,QWORD PTR [r8+rax*8]
0x140a9e3c0: test    r14,r14
0x140a9e3c3: jne     0x140a9df22
0x140a9e3c9: mov     eax,DWORD PTR [rbp+0x220]
0x140a9e3cf: cmp     di,0xffff
0x140a9e3d3: jne     0x140a9e3d9
0x140a9e3d5: test    eax,eax
0x140a9e3d7: je      0x140a9e417
0x140a9e3d9: mov     WORD PTR [rsp+0x30],r9w
0x140a9e3df: mov     BYTE PTR [rsp+0x28],0x1
0x140a9e3e4: mov     DWORD PTR [rsp+0x20],eax
0x140a9e3e8: mov     r9d,esi
0x140a9e3eb: movzx   r8d,di
0x140a9e3ef: lea     rdx,[rsp+0x68]
0x140a9e3f4: lea     rcx,[rip+0x194f475]        # 0x1423ed870
0x140a9e3fb: call    0x1414e58e0
0x140a9e400: lea     rdx,[rsp+0x68]
0x140a9e405: mov     rcx,rbx
0x140a9e408: call    0x1400bb2d0
0x140a9e40d: mov     dl,0x20
0x140a9e40f: mov     rcx,rbx
0x140a9e412: call    0x1400bb140
0x140a9e417: lea     rdx,[rip+0xc47b9e]        # 0x1416e5fbc ; literal='shield'
0x140a9e41e: mov     rcx,rbx
0x140a9e421: call    0x140070b20
0x140a9e426: mov     rcx,rbx
0x140a9e429: cmp     r12d,0x1
0x140a9e42d: je      0x140a9e44a
0x140a9e42f: mov     dl,0x73
0x140a9e431: call    0x1400bb140
0x140a9e436: lea     rdx,[rip+0xc4d96b]        # 0x1416ebda8 ; literal='/buckler'
0x140a9e43d: mov     rcx,rbx
0x140a9e440: call    0x140070b20
0x140a9e445: jmp     0x140a9e961
0x140a9e44a: lea     rdx,[rip+0xc4d957]        # 0x1416ebda8 ; literal='/buckler'
0x140a9e451: call    0x140070b20
0x140a9e456: jmp     0x140a9e9a7
0x140a9e45b: test    r13,r13
0x140a9e45e: je      0x140a9e479
0x140a9e460: lea     rdx,[rbp-0x78]
0x140a9e464: mov     rcx,rbx
0x140a9e467: call    0x1400bb2d0
0x140a9e46c: mov     dl,0x20
0x140a9e46e: mov     rcx,rbx
0x140a9e471: call    0x1400bb140
0x140a9e476: xor     r9d,r9d
0x140a9e479: mov     rcx,QWORD PTR [rip+0x1a6ad78]        # 0x1425091f8
0x140a9e480: mov     r8,QWORD PTR [rip+0x1a6ad69]        # 0x1425091f0
0x140a9e487: sub     rcx,r8
0x140a9e48a: sar     rcx,0x3
0x140a9e48e: sub     ecx,0x1
0x140a9e491: movsxd  rdx,ecx
0x140a9e494: js      0x140a9e4b7
0x140a9e496: data16  nop WORD PTR [rax+rax*1+0x0]
0x140a9e4a0: mov     rax,QWORD PTR [r8+rdx*8]
0x140a9e4a4: cmp     WORD PTR [rax+0x28],r15w
0x140a9e4a9: je      0x140a9e557
0x140a9e4af: dec     ecx
0x140a9e4b1: sub     rdx,0x1
0x140a9e4b5: jns     0x140a9e4a0
0x140a9e4b7: mov     r14,r9
0x140a9e4ba: mov     eax,DWORD PTR [rbp+0x220]
0x140a9e4c0: cmp     di,0xffff
0x140a9e4c4: jne     0x140a9e4ca
0x140a9e4c6: test    eax,eax
0x140a9e4c8: je      0x140a9e519
0x140a9e4ca: xor     ecx,ecx
0x140a9e4cc: mov     WORD PTR [rsp+0x30],cx
0x140a9e4d1: mov     BYTE PTR [rsp+0x28],0x1
0x140a9e4d6: mov     DWORD PTR [rsp+0x20],eax
0x140a9e4da: mov     r9d,esi
0x140a9e4dd: movzx   r8d,di
0x140a9e4e1: lea     rdx,[rsp+0x68]
0x140a9e4e6: lea     rcx,[rip+0x194f383]        # 0x1423ed870
0x140a9e4ed: call    0x1414e58e0
0x140a9e4f2: lea     rdx,[rsp+0x68]
0x140a9e4f7: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9e4fc: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9e502: mov     r8,QWORD PTR [rsp+0x78]
0x140a9e507: mov     rcx,rbx
0x140a9e50a: call    0x140070fd0
0x140a9e50f: mov     dl,0x20
0x140a9e511: mov     rcx,rbx
0x140a9e514: call    0x1400bb140
0x140a9e519: test    r14,r14
0x140a9e51c: je      0x140a9e5b1
0x140a9e522: mov     r8d,esi
0x140a9e525: movzx   edx,di
0x140a9e528: lea     rcx,[rip+0x194f341]        # 0x1423ed870
0x140a9e52f: call    0x1414c1d30
0x140a9e534: test    rax,rax
0x140a9e537: je      0x140a9df9b
0x140a9e53d: cmp     DWORD PTR [rax+0x298],0x5
0x140a9e544: jle     0x140a9e59b
0x140a9e546: mov     rax,QWORD PTR [rax+0x290]
0x140a9e54d: cmp     BYTE PTR [rax+0x5],0x0
0x140a9e551: jge     0x140a9e59b
0x140a9e553: mov     al,0x1
0x140a9e555: jmp     0x140a9e59d
0x140a9e557: movsxd  rax,ecx
0x140a9e55a: mov     r15,QWORD PTR [r8+rax*8]
0x140a9e55e: mov     r14,r15
0x140a9e561: test    r15,r15
0x140a9e564: je      0x140a9e4ba
0x140a9e56a: cmp     QWORD PTR [r15+0xb8],0x0
0x140a9e572: je      0x140a9e4ba
0x140a9e578: lea     rdx,[r15+0xa8]
0x140a9e57f: mov     rcx,rbx
0x140a9e582: call    0x1400bb2d0
0x140a9e587: lea     rdx,[rip+0xb603de]        # 0x1415fe96c ; literal=' '
0x140a9e58e: mov     rcx,rbx
0x140a9e591: call    0x140070b20
0x140a9e596: jmp     0x140a9e4ba
0x140a9e59b: xor     al,al
0x140a9e59d: test    al,al
0x140a9e59f: je      0x140a9df9b
0x140a9e5a5: lea     rcx,[r14+0xe8]
0x140a9e5ac: jmp     0x140a9e174
0x140a9e5b1: mov     r8d,0x8
0x140a9e5b7: lea     rdx,[rip+0xc4d7fa]        # 0x1416ebdb8 ; literal='footwear'
0x140a9e5be: mov     rcx,rbx
0x140a9e5c1: call    0x140070fd0
0x140a9e5c6: jmp     0x140a9e96b
0x140a9e5cb: test    r13,r13
0x140a9e5ce: je      0x140a9e5f6
0x140a9e5d0: lea     rdx,[rbp-0x78]
0x140a9e5d4: cmp     QWORD PTR [rbp-0x60],0xf
0x140a9e5d9: cmova   rdx,QWORD PTR [rbp-0x78]
0x140a9e5de: mov     r8,r13
0x140a9e5e1: mov     rcx,rbx
0x140a9e5e4: call    0x140070fd0
0x140a9e5e9: mov     dl,0x20
0x140a9e5eb: mov     rcx,rbx
0x140a9e5ee: call    0x1400bb140
0x140a9e5f3: xor     r9d,r9d
0x140a9e5f6: mov     rcx,QWORD PTR [rip+0x1a6ac2b]        # 0x142509228
0x140a9e5fd: mov     r8,QWORD PTR [rip+0x1a6ac1c]        # 0x142509220
0x140a9e604: sub     rcx,r8
0x140a9e607: sar     rcx,0x3
0x140a9e60b: sub     ecx,0x1
0x140a9e60e: movsxd  rdx,ecx
0x140a9e611: js      0x140a9e637
0x140a9e613: nop     DWORD PTR [rax+0x0]
0x140a9e617: nop     WORD PTR [rax+rax*1+0x0]
0x140a9e620: mov     rax,QWORD PTR [r8+rdx*8]
0x140a9e624: cmp     WORD PTR [rax+0x28],r15w
0x140a9e629: je      0x140a9e6bc
0x140a9e62f: dec     ecx
0x140a9e631: sub     rdx,0x1
0x140a9e635: jns     0x140a9e620
0x140a9e637: mov     r14,r9
0x140a9e63a: mov     eax,DWORD PTR [rbp+0x220]
0x140a9e640: cmp     di,0xffff
0x140a9e644: jne     0x140a9e64a
0x140a9e646: test    eax,eax
0x140a9e648: je      0x140a9e699
0x140a9e64a: xor     ecx,ecx
0x140a9e64c: mov     WORD PTR [rsp+0x30],cx
0x140a9e651: mov     BYTE PTR [rsp+0x28],0x1
0x140a9e656: mov     DWORD PTR [rsp+0x20],eax
0x140a9e65a: mov     r9d,esi
0x140a9e65d: movzx   r8d,di
0x140a9e661: lea     rdx,[rsp+0x68]
0x140a9e666: lea     rcx,[rip+0x194f203]        # 0x1423ed870
0x140a9e66d: call    0x1414e58e0
0x140a9e672: lea     rdx,[rsp+0x68]
0x140a9e677: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9e67c: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9e682: mov     r8,QWORD PTR [rsp+0x78]
0x140a9e687: mov     rcx,rbx
0x140a9e68a: call    0x140070fd0
0x140a9e68f: mov     dl,0x20
0x140a9e691: mov     rcx,rbx
0x140a9e694: call    0x1400bb140
0x140a9e699: test    r14,r14
0x140a9e69c: jne     0x140a9e522
0x140a9e6a2: mov     r8d,0x8
0x140a9e6a8: lea     rdx,[rip+0xc4d719]        # 0x1416ebdc8 ; literal='headwear'
0x140a9e6af: mov     rcx,rbx
0x140a9e6b2: call    0x140070fd0
0x140a9e6b7: jmp     0x140a9e96b
0x140a9e6bc: movsxd  rax,ecx
0x140a9e6bf: mov     r15,QWORD PTR [r8+rax*8]
0x140a9e6c3: mov     r14,r15
0x140a9e6c6: test    r15,r15
0x140a9e6c9: je      0x140a9e63a
0x140a9e6cf: cmp     QWORD PTR [r15+0xb8],0x0
0x140a9e6d7: je      0x140a9e63a
0x140a9e6dd: lea     rdx,[r15+0xa8]
0x140a9e6e4: mov     rcx,rbx
0x140a9e6e7: call    0x1400bb2d0
0x140a9e6ec: lea     rdx,[rip+0xb60279]        # 0x1415fe96c ; literal=' '
0x140a9e6f3: mov     rcx,rbx
0x140a9e6f6: call    0x140070b20
0x140a9e6fb: jmp     0x140a9e63a
0x140a9e700: mov     rcx,QWORD PTR [rip+0x1a6ab39]        # 0x142509240
0x140a9e707: mov     r14,QWORD PTR [rip+0x1a6ab2a]        # 0x142509238
0x140a9e70e: sub     rcx,r14
0x140a9e711: sar     rcx,0x3
0x140a9e715: sub     ecx,r8d
0x140a9e718: movsxd  rdx,ecx
0x140a9e71b: js      0x140a9e736
0x140a9e71d: nop     DWORD PTR [rax]
0x140a9e720: mov     rax,QWORD PTR [r14+rdx*8]
0x140a9e724: cmp     WORD PTR [rax+0x28],r15w
0x140a9e729: je      0x140a9e7bc
0x140a9e72f: dec     ecx
0x140a9e731: sub     rdx,r8
0x140a9e734: jns     0x140a9e720
0x140a9e736: test    r13,r13
0x140a9e739: je      0x140a9e754
0x140a9e73b: lea     rdx,[rbp-0x78]
0x140a9e73f: mov     rcx,rbx
0x140a9e742: call    0x1400bb2d0
0x140a9e747: mov     dl,0x20
0x140a9e749: mov     rcx,rbx
0x140a9e74c: call    0x1400bb140
0x140a9e751: xor     r9d,r9d
0x140a9e754: mov     eax,DWORD PTR [rbp+0x220]
0x140a9e75a: cmp     di,0xffff
0x140a9e75e: jne     0x140a9e764
0x140a9e760: test    eax,eax
0x140a9e762: je      0x140a9e7a2
0x140a9e764: mov     WORD PTR [rsp+0x30],r9w
0x140a9e76a: mov     BYTE PTR [rsp+0x28],0x1
0x140a9e76f: mov     DWORD PTR [rsp+0x20],eax
0x140a9e773: mov     r9d,esi
0x140a9e776: movzx   r8d,di
0x140a9e77a: lea     rdx,[rsp+0x68]
0x140a9e77f: lea     rcx,[rip+0x194f0ea]        # 0x1423ed870
0x140a9e786: call    0x1414e58e0
0x140a9e78b: lea     rdx,[rsp+0x68]
0x140a9e790: mov     rcx,rbx
0x140a9e793: call    0x1400bb2d0
0x140a9e798: mov     dl,0x20
0x140a9e79a: mov     rcx,rbx
0x140a9e79d: call    0x1400bb140
0x140a9e7a2: mov     r8d,0x7
0x140a9e7a8: lea     rdx,[rip+0xc4d629]        # 0x1416ebdd8 ; literal='legwear'
0x140a9e7af: mov     rcx,rbx
0x140a9e7b2: call    0x140070fd0
0x140a9e7b7: jmp     0x140a9e96b
0x140a9e7bc: movsxd  rax,ecx
0x140a9e7bf: mov     r14,QWORD PTR [r14+rax*8]
0x140a9e7c3: test    r14,r14
0x140a9e7c6: je      0x140a9e736
0x140a9e7cc: cmp     r12d,r8d
0x140a9e7cf: jle     0x140a9e7f8
0x140a9e7d1: cmp     QWORD PTR [r14+0xb8],0x0
0x140a9e7d9: je      0x140a9e7f8
0x140a9e7db: lea     rdx,[r14+0xa8]
0x140a9e7e2: mov     rcx,rbx
0x140a9e7e5: call    0x1400bb2d0
0x140a9e7ea: mov     dl,0x20
0x140a9e7ec: mov     rcx,rbx
0x140a9e7ef: call    0x1400bb140
0x140a9e7f4: mov     r13,QWORD PTR [rbp-0x68]
0x140a9e7f8: test    r13,r13
0x140a9e7fb: je      0x140a9e813
0x140a9e7fd: lea     rdx,[rbp-0x78]
0x140a9e801: mov     rcx,rbx
0x140a9e804: call    0x1400bb2d0
0x140a9e809: mov     dl,0x20
0x140a9e80b: mov     rcx,rbx
0x140a9e80e: call    0x1400bb140
0x140a9e813: cmp     QWORD PTR [r14+0xf8],0x0
0x140a9e81b: je      0x140a9e83b
0x140a9e81d: lea     rdx,[r14+0xe8]
0x140a9e824: mov     rcx,rbx
0x140a9e827: call    0x1400bb2d0
0x140a9e82c: lea     rdx,[rip+0xb60139]        # 0x1415fe96c ; literal=' '
0x140a9e833: mov     rcx,rbx
0x140a9e836: call    0x140070b20
0x140a9e83b: mov     eax,DWORD PTR [rbp+0x220]
0x140a9e841: cmp     di,0xffff
0x140a9e845: jne     0x140a9e85e
0x140a9e847: test    eax,eax
0x140a9e849: jne     0x140a9e85e
0x140a9e84b: cmp     QWORD PTR [r14+0xd8],0x0
0x140a9e853: je      0x140a9e89d
0x140a9e855: lea     rdx,[r14+0xc8]
0x140a9e85c: jmp     0x140a9e88b
0x140a9e85e: xor     ecx,ecx
0x140a9e860: mov     WORD PTR [rsp+0x30],cx
0x140a9e865: mov     BYTE PTR [rsp+0x28],0x1
0x140a9e86a: mov     DWORD PTR [rsp+0x20],eax
0x140a9e86e: mov     r9d,esi
0x140a9e871: movzx   r8d,di
0x140a9e875: lea     rdx,[rsp+0x68]
0x140a9e87a: lea     rcx,[rip+0x194efef]        # 0x1423ed870
0x140a9e881: call    0x1414e58e0
0x140a9e886: lea     rdx,[rsp+0x68]
0x140a9e88b: mov     rcx,rbx
0x140a9e88e: call    0x1400bb2d0
0x140a9e893: mov     dl,0x20
0x140a9e895: mov     rcx,rbx
0x140a9e898: call    0x1400bb140
0x140a9e89d: mov     r8d,esi
0x140a9e8a0: movzx   edx,di
0x140a9e8a3: lea     rcx,[rip+0x194efc6]        # 0x1423ed870
0x140a9e8aa: call    0x1414c1d30
0x140a9e8af: test    rax,rax
0x140a9e8b2: je      0x140a9df9b
0x140a9e8b8: cmp     DWORD PTR [rax+0x298],0x5
0x140a9e8bf: jle     0x140a9e8d2
0x140a9e8c1: mov     rax,QWORD PTR [rax+0x290]
0x140a9e8c8: cmp     BYTE PTR [rax+0x5],0x0
0x140a9e8cc: jge     0x140a9e8d2
0x140a9e8ce: mov     al,0x1
0x140a9e8d0: jmp     0x140a9e8d4
0x140a9e8d2: xor     al,al
0x140a9e8d4: test    al,al
0x140a9e8d6: je      0x140a9df9b
0x140a9e8dc: lea     rcx,[r14+0x128]
0x140a9e8e3: jmp     0x140a9e174
0x140a9e8e8: mov     eax,DWORD PTR [rbp+0x220]
0x140a9e8ee: cmp     di,0xffff
0x140a9e8f2: jne     0x140a9e8f8
0x140a9e8f4: test    eax,eax
0x140a9e8f6: je      0x140a9e946
0x140a9e8f8: mov     WORD PTR [rsp+0x30],r9w
0x140a9e8fe: mov     BYTE PTR [rsp+0x28],r8b
0x140a9e903: mov     DWORD PTR [rsp+0x20],eax
0x140a9e907: mov     r9d,esi
0x140a9e90a: movzx   r8d,di
0x140a9e90e: lea     rdx,[rsp+0x68]
0x140a9e913: lea     rcx,[rip+0x194ef56]        # 0x1423ed870
0x140a9e91a: call    0x1414e58e0
0x140a9e91f: lea     rdx,[rsp+0x68]
0x140a9e924: cmp     QWORD PTR [rbp-0x80],0xf
0x140a9e929: cmova   rdx,QWORD PTR [rsp+0x68]
0x140a9e92f: mov     r8,QWORD PTR [rsp+0x78]
0x140a9e934: mov     rcx,rbx
0x140a9e937: call    0x140070fd0
0x140a9e93c: mov     dl,0x20
0x140a9e93e: mov     rcx,rbx
0x140a9e941: call    0x1400bb140
0x140a9e946: lea     rdx,[rip+0xb7539b]        # 0x141613ce8 ; literal='item'
0x140a9e94d: mov     r8d,0x4
0x140a9e953: mov     rcx,rbx
0x140a9e956: call    0x140070fd0
0x140a9e95b: cmp     r12d,0x1
0x140a9e95f: je      0x140a9e9a7
0x140a9e961: mov     dl,0x73
0x140a9e963: mov     rcx,rbx
0x140a9e966: call    0x1400bb140
0x140a9e96b: cmp     r12d,0x1
0x140a9e96f: jle     0x140a9e9a7
0x140a9e971: mov     r8d,0x2
0x140a9e977: lea     rdx,[rip+0xb94156]        # 0x141632ad4 ; literal=' ['
0x140a9e97e: mov     rcx,rbx
0x140a9e981: call    0x140070fd0
0x140a9e986: mov     rdx,rbx
0x140a9e989: mov     ecx,r12d
0x140a9e98c: call    0x140542fb0
0x140a9e991: mov     r8d,0x1
0x140a9e997: lea     rdx,[rip+0xb759fa]        # 0x141614398 ; literal=']'
0x140a9e99e: mov     rcx,rbx
0x140a9e9a1: call    0x140070fd0
0x140a9e9a6: nop     
0x140a9e9a7: lea     rcx,[rsp+0x68]
0x140a9e9ac: call    0x140070e10
0x140a9e9b1: nop     
0x140a9e9b2: lea     rcx,[rbp-0x78]
0x140a9e9b6: call    0x140070e10
0x140a9e9bb: mov     rcx,QWORD PTR [rbp+0x168]
0x140a9e9c2: xor     rcx,rsp
0x140a9e9c5: call    0x14154de00
0x140a9e9ca: add     rsp,0x278
0x140a9e9d1: pop     r15
0x140a9e9d3: pop     r14
0x140a9e9d5: pop     r13
0x140a9e9d7: pop     r12
0x140a9e9d9: pop     rdi
0x140a9e9da: pop     rsi
0x140a9e9db: pop     rbx
0x140a9e9dc: pop     rbp
0x140a9e9dd: ret     
0x140a9e9de: xchg    ax,ax
0x140a9e9e0: rex     .WB
0x140a9e9e1: fwait   
0x140a9e9e2: test    eax,0xa99cde00
0x140a9e9e7: add     ch,al
0x140a9e9e9: sahf    
0x140a9e9ea: test    eax,0xa9981100
0x140a9e9ef: add     BYTE PTR [rdx-0x66],dh
0x140a9e9f2: test    eax,0xa996e500
0x140a9e9f7: add     BYTE PTR [rax+0x3600a99f],al
0x140a9e9fd: movabs  al,ds:0xb38100a9ce2200a9
0x140a9ea06: test    eax,0xa9a9cb00
0x140a9ea0b: add     ah,dh
0x140a9ea0d: stos    BYTE PTR [rdi],al
0x140a9ea0e: test    eax,0xa9b03600
0x140a9ea13: add     BYTE PTR [rsp+rbp*4-0x57],bl
0x140a9ea17: add     BYTE PTR [rcx-0x51],ch
0x140a9ea1a: test    eax,0xa9b10700
0x140a9ea1f: add     BYTE PTR [rdi-0x4f],dh
0x140a9ea22: test    eax,0xa9b23100
0x140a9ea27: add     BYTE PTR [rcx+0x1100a9b2],ah
0x140a9ea2d: mov     bl,0xa9
0x140a9ea2f: add     BYTE PTR [rsi-0x38ff565f],al
0x140a9ea35: test    al,0xa9
0x140a9ea37: add     dl,ah
0x140a9ea39: iret    
0x140a9ea3a: test    eax,0xa9d30200
0x140a9ea3f: add     BYTE PTR [rsi+rbx*8-0x2042ff57],al
0x140a9ea46: test    eax,0xa9e45b00
0x140a9ea4b: add     BYTE PTR [rdi-0x34ff561d],al
0x140a9ea51: in      eax,0xa9
0x140a9ea53: add     BYTE PTR [rdx-0x49ff561f],bl
0x140a9ea59: movabs  ds:0xa34600a9a50000a9,eax
0x140a9ea62: test    eax,0xa9a2d600
0x140a9ea67: add     BYTE PTR [rsi-0x5e],ah
0x140a9ea6a: test    eax,0xa9a1f600
0x140a9ea6f: add     ah,bh
0x140a9ea71: mov     bh,0xa9
0x140a9ea73: add     BYTE PTR [rsi],ch
0x140a9ea76: test    eax,0xa9c90700
0x140a9ea7b: add     dl,ch
0x140a9ea7e: test    eax,0xa9c97700
0x140a9ea83: add     al,bl
0x140a9ea85: int3    
0x140a9ea86: test    eax,0xa9cd4200
0x140a9ea8b: add     BYTE PTR [rdx+0x5100a9cd],dh
0x140a9ea91: retf    0xa9
0x140a9ea94: mov     esi,0x3500a9c5
0x140a9ea99: shr     DWORD PTR [rcx-0x562b5a00],cl
0x140a9ea9f: add     BYTE PTR [rdi],ah
0x140a9eaa1: a9      (bad) [rcx-0x56248600]
0x140a9eaa7: add     BYTE PTR [rdx],ch
0x140a9eaa9: fsubr   DWORD PTR [rcx-0x56236100]
0x140a9eaaf: add     dl,dh
0x140a9eab1: fsubr   QWORD PTR [rcx-0x5629ca00]
0x140a9eab7: add     BYTE PTR [rax-0x1cff5629],bl
0x140a9eabd: mov     dh,0xa9
0x140a9eabf: add     al,ah
0x140a9eac1: udb     
0x140a9eac2: test    eax,0xa9b41700
0x140a9eac7: add     BYTE PTR [rcx-0x4b],ah
0x140a9eaca: test    eax,0xa9b74f00
0x140a9eacf: add     BYTE PTR [rax],al
0x140a9ead1: out     0xa9,eax
0x140a9ead3: add     BYTE PTR [rax-0x5b],dh
0x140a9ead6: test    eax,0xa9a82c00
0x140a9eadb: add     ah,bl
0x140a9eadd: shr     DWORD PTR [rcx-0x563aba00],0x0
0x140a9eae6: test    eax,0xa9c69e00
0x140a9eaeb: add     ah,cl
0x140a9eaed: ret     0xa9
0x140a9eaf0: or      eax,0x6c00a9c4
0x140a9eaf5: mov     eax,0xc06900a9
0x140a9eafa: test    eax,0xa9c18a00
0x140a9eaff: add     BYTE PTR [rip+0xffffffffc700a9dd],dl        # 0x107aa94e2
0x140a9eb05: mov     eax,0xc9e700a9
0x140a9eb0a: test    eax,0xa9b8c700
0x140a9eb0f: add     dh,ch
0x140a9eb11: cwde    
0x140a9eb12: test    eax,0xa9c34400
0x140a9eb17: add     BYTE PTR [rsi+0x1600a9a0],ah
0x140a9eb1d: movabs  eax,ds:0xcf7200a9cf0200a9
0x140a9eb26: test    eax,0xa9a75200
0x140a9eb2b: add     dl,al
0x140a9eb2d: cmps    DWORD PTR [rsi],DWORD PTR [rdi]
0x140a9eb2e: test    eax,0xa9ce9200
0x140a9eb33: add     BYTE PTR [rbx],cl
0x140a9eb35: cmps    BYTE PTR [rsi],BYTE PTR [rdi]
0x140a9eb36: test    eax,0xa9ad3200
0x140a9eb3b: add     BYTE PTR [rdx-0x30],dl
0x140a9eb3e: test    eax,0xa9da1800
0x140a9eb43: add     BYTE PTR [rcx-0x49],ah
0x140a9eb46: test    eax,0xa9b5d900
0x140a9eb4b: add     BYTE PTR [rdx-0x69],bh
0x140a9eb4e: test    eax,0xa9c25400
0x140a9eb53: add     BYTE PTR [rbp-0x46],dl
0x140a9eb56: test    eax,0xa9ba6200
0x140a9eb5b: add     BYTE PTR [rdi-0x46],ch
0x140a9eb5e: test    eax,0xa9bc0e00
0x140a9eb63: add     BYTE PTR [rsi],bl
0x140a9eb65: mov     esp,0xbc2e00a9
0x140a9eb6a: test    eax,0xa9bc3e00
0x140a9eb6f: add     BYTE PTR [rsi-0x44],cl
0x140a9eb72: test    eax,0xa9c03500
0x140a9eb77: add     BYTE PTR [rip+0x3500a9c0],dh        # 0x175aa953d
0x140a9eb7d: shr     BYTE PTR [rcx-0x563fcb00],0x0
0x140a9eb84: xor     eax,0x3500a9c0
0x140a9eb89: shr     BYTE PTR [rcx-0x563fcb00],0x0
0x140a9eb90: xor     eax,0x5200a9c0
0x140a9eb95: shr     DWORD PTR [rcx-0x562d1e00],1
0x140a9eb9b: add     dl,ah
0x140a9eb9d: shr     BYTE PTR [rcx-0x562d1e00],cl
0x140a9eba3: add     dl,ah
0x140a9eba5: shr     BYTE PTR [rcx-0x562d1e00],cl
0x140a9ebab: add     dl,ah
0x140a9ebad: shr     BYTE PTR [rcx-0x562e9a00],cl
0x140a9ebb3: add     BYTE PTR [rdx-0x2f],bh
0x140a9ebb6: test    eax,0xa9d18e00
0x140a9ebbb: add     BYTE PTR [rdx-0x49ff562f],ah
0x140a9ebc1: shr     DWORD PTR [rcx-0x562e3600],1
0x140a9ebc7: add     dh,bl
0x140a9ebc9: shr     DWORD PTR [rcx-0x562e0e00],1
0x140a9ebcf: add     BYTE PTR [rsi],al
0x140a9ebd1: shr     BYTE PTR [rcx-0x562de600],cl
0x140a9ebd7: add     BYTE PTR [rsi],ch
0x140a9ebd9: shr     BYTE PTR [rcx-0x562dbe00],cl
0x140a9ebdf: add     BYTE PTR [rsi-0x2e],dl
0x140a9ebe2: test    eax,0xa9d26a00
0x140a9ebe7: add     BYTE PTR [rsi-0x2e],bh
0x140a9ebea: test    eax,0xa9d29200
0x140a9ebef: add     BYTE PTR [rsi-0x45ff562e],ah
0x140a9ebf5: shr     BYTE PTR [rcx-0x562d3200],cl
