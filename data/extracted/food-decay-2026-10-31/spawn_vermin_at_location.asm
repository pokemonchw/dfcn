1414c6320: mov    WORD PTR [rsp+0x20],r9w
1414c6326: mov    WORD PTR [rsp+0x18],r8w
1414c632c: mov    WORD PTR [rsp+0x10],dx
1414c6331: mov    QWORD PTR [rsp+0x8],rcx
1414c6336: push   rbx
1414c6337: push   rbp
1414c6338: push   rsi
1414c6339: push   rdi
1414c633a: push   r12
1414c633c: push   r13
1414c633e: push   r14
1414c6340: push   r15
1414c6342: sub    rsp,0x58
1414c6346: movsx  rbx,dx
1414c634a: mov    rdi,rcx
1414c634d: add    rcx,0x11b558
1414c6354: movzx  edx,bx
1414c6357: call   0x140a48750
1414c635c: movsx  r12d,ax
1414c6360: mov    r11,QWORD PTR [rsp+0xd8]
1414c6368: test   r11,r11
1414c636b: je     0x1414c6379
1414c636d: mov    r10d,DWORD PTR [r11+0x4]
1414c6371: cmp    r12d,r10d
1414c6374: cmova  r12w,r10w
1414c6379: test   r12w,r12w
1414c637d: jle    0x1414c6836
1414c6383: test   r11,r11
1414c6386: je     0x1414c639e
1414c6388: mov    ecx,DWORD PTR [r11+0x4]
1414c638c: cmp    ecx,0x989681
1414c6392: je     0x1414c639e
1414c6394: movsx  eax,r12w
1414c6398: sub    ecx,eax
1414c639a: mov    DWORD PTR [r11+0x4],ecx
1414c639e: mov    r8d,0x1
1414c63a4: test   bx,bx
1414c63a7: js     0x1414c63ff
1414c63a9: mov    rcx,QWORD PTR [rdi+0x11b578]
1414c63b0: mov    rax,QWORD PTR [rdi+0x11b580]
1414c63b7: sub    rax,rcx
1414c63ba: sar    rax,0x3
1414c63be: cmp    rbx,rax
1414c63c1: jae    0x1414c63ff
1414c63c3: mov    rax,QWORD PTR [rcx+rbx*8]
1414c63c7: cmp    DWORD PTR [rax+0x1b0],0xa
1414c63ce: jle    0x1414c63e3
1414c63d0: mov    rax,QWORD PTR [rax+0x1a8]
1414c63d7: test   BYTE PTR [rax+0xa],0x2
1414c63db: je     0x1414c63e3
1414c63dd: movzx  ecx,r8b
1414c63e1: jmp    0x1414c63e5
1414c63e3: xor    cl,cl
1414c63e5: mov    BYTE PTR [rsp+0xd8],cl
1414c63ec: test   cl,cl
1414c63ee: je     0x1414c6407
1414c63f0: mov    WORD PTR [rsp+0x22],r8w
1414c63f6: mov    BYTE PTR [rsp+0xd8],cl
1414c63fd: jmp    0x1414c640d
1414c63ff: mov    BYTE PTR [rsp+0xd8],0x0
1414c6407: mov    WORD PTR [rsp+0x22],r12w
1414c640d: xor    al,al
1414c640f: mov    BYTE PTR [rsp+0x20],al
1414c6413: xorps  xmm0,xmm0
1414c6416: movdqu XMMWORD PTR [rsp+0x30],xmm0
1414c641c: xor    ebp,ebp
1414c641e: mov    QWORD PTR [rsp+0x28],rbp
1414c6423: mov    QWORD PTR [rsp+0x40],rbp
1414c6428: test   r11,r11
1414c642b: je     0x1414c65f4
1414c6431: mov    r15,QWORD PTR [rsp+0xd0]
1414c6439: movzx  r15d,WORD PTR [r15]
1414c643d: movsx  rax,WORD PTR [r11+0x2]
1414c6442: cmp    DWORD PTR [rsp+0xc8],0x2
1414c644a: jne    0x1414c6512
1414c6450: test   ax,ax
1414c6453: js     0x1414c65f4
1414c6459: mov    rsi,QWORD PTR [rdi+0x11b578]
1414c6460: mov    rcx,rax
1414c6463: mov    rax,QWORD PTR [rdi+0x11b580]
1414c646a: sub    rax,rsi
1414c646d: sar    rax,0x3
1414c6471: cmp    rcx,rax
1414c6474: jae    0x1414c65f4
1414c647a: mov    rsi,QWORD PTR [rsi+rcx*8]
1414c647e: mov    ebx,DWORD PTR [rsi+0x180]
1414c6484: sub    ebx,DWORD PTR [rsi+0x178]
1414c648a: sar    rbx,0x3
1414c648e: sub    bx,0x1
1414c6492: mov    WORD PTR [rsp+0x24],bx
1414c6497: js     0x1414c65f4
1414c649d: movzx  eax,bx
1414c64a0: mov    rdi,QWORD PTR [rsp+0x38]
1414c64a5: data16 data16 nop WORD PTR [rax+rax*1+0x0]
1414c64b0: movzx  ecx,ax
1414c64b3: mov    rax,QWORD PTR [rsi+0x178]
1414c64ba: movzx  edx,r15w
1414c64be: mov    rcx,QWORD PTR [rax+rcx*8]
1414c64c2: call   0x140702630
1414c64c7: test   al,al
1414c64c9: jne    0x1414c64fa
1414c64cb: cmp    rdi,rbp
1414c64ce: je     0x1414c64de
1414c64d0: mov    WORD PTR [rdi],bx
1414c64d3: add    rdi,0x2
1414c64d7: mov    QWORD PTR [rsp+0x38],rdi
1414c64dc: jmp    0x1414c64fa
1414c64de: lea    r8,[rsp+0x24]
1414c64e3: mov    rdx,rdi
1414c64e6: lea    rcx,[rsp+0x30]
1414c64eb: call   0x140071040
1414c64f0: mov    rbp,QWORD PTR [rsp+0x40]
1414c64f5: mov    rdi,QWORD PTR [rsp+0x38]
1414c64fa: sub    bx,0x1
1414c64fe: mov    WORD PTR [rsp+0x24],bx
1414c6503: movzx  eax,bx
1414c6506: jns    0x1414c64b0
1414c6508: mov    QWORD PTR [rsp+0x28],rbp
1414c650d: jmp    0x1414c65f9
1414c6512: test   ax,ax
1414c6515: js     0x1414c65f4
1414c651b: mov    r13,QWORD PTR [rdi+0x11b578]
1414c6522: mov    rcx,rax
1414c6525: mov    rax,QWORD PTR [rdi+0x11b580]
1414c652c: sub    rax,r13
1414c652f: sar    rax,0x3
1414c6533: cmp    rcx,rax
1414c6536: jae    0x1414c65f4
1414c653c: mov    r13,QWORD PTR [r13+rcx*8+0x0]
1414c6541: mov    ebx,DWORD PTR [r13+0x180]
1414c6548: sub    ebx,DWORD PTR [r13+0x178]
1414c654f: sar    rbx,0x3
1414c6553: sub    bx,0x1
1414c6557: mov    WORD PTR [rsp+0x24],bx
1414c655c: js     0x1414c65f4
1414c6562: movzx  eax,bx
1414c6565: movzx  r14d,bx
1414c6569: mov    rdi,QWORD PTR [rsp+0x38]
1414c656e: xchg   ax,ax
1414c6570: mov    rsi,QWORD PTR [r13+0x178]
1414c6577: movzx  eax,ax
1414c657a: movzx  edx,r15w
1414c657e: mov    rcx,QWORD PTR [rsi+rax*8]
1414c6582: call   0x140702630
1414c6587: test   al,al
1414c6589: jne    0x1414c65d8
1414c658b: movzx  eax,r14w
1414c658f: mov    rax,QWORD PTR [rsi+rax*8]
1414c6593: cmp    DWORD PTR [rax+0x6b0],0x4
1414c659a: jle    0x1414c65a9
1414c659c: mov    rax,QWORD PTR [rax+0x6a8]
1414c65a3: test   BYTE PTR [rax+0x4],0x8
1414c65a7: jne    0x1414c65d8
1414c65a9: cmp    rdi,rbp
1414c65ac: je     0x1414c65bc
1414c65ae: mov    WORD PTR [rdi],bx
1414c65b1: add    rdi,0x2
1414c65b5: mov    QWORD PTR [rsp+0x38],rdi
1414c65ba: jmp    0x1414c65d8
1414c65bc: lea    r8,[rsp+0x24]
1414c65c1: mov    rdx,rdi
1414c65c4: lea    rcx,[rsp+0x30]
1414c65c9: call   0x140071040
1414c65ce: mov    rbp,QWORD PTR [rsp+0x40]
1414c65d3: mov    rdi,QWORD PTR [rsp+0x38]
1414c65d8: movzx  eax,bx
1414c65db: sub    ax,0x1
1414c65df: movzx  ebx,ax
1414c65e2: mov    WORD PTR [rsp+0x24],ax
1414c65e7: movzx  r14d,ax
1414c65eb: jns    0x1414c6570
1414c65ed: mov    QWORD PTR [rsp+0x28],rbp
1414c65f2: jmp    0x1414c65f9
1414c65f4: mov    rdi,QWORD PTR [rsp+0x38]
1414c65f9: mov    r14,QWORD PTR [rsp+0x30]
1414c65fe: movsx  rbp,WORD PTR [rsp+0xa8]
1414c6607: mov    r15,QWORD PTR [rsp+0xa0]
1414c660f: movzx  r13d,BYTE PTR [rsp+0xd8]
1414c6618: call   0x1405c1410
1414c661d: mov    rbx,rax
1414c6620: movzx  eax,WORD PTR [rsp+0xb0]
1414c6628: mov    WORD PTR [rbx+0x4],ax
1414c662c: movzx  eax,WORD PTR [rsp+0xb8]
1414c6634: mov    WORD PTR [rbx+0x6],ax
1414c6638: movzx  eax,WORD PTR [rsp+0xc0]
1414c6640: mov    WORD PTR [rbx+0x8],ax
1414c6644: mov    WORD PTR [rbx],bp
1414c6647: mov    rsi,rdi
1414c664a: sub    rsi,r14
1414c664d: sar    rsi,1
1414c6650: je     0x1414c66a6
1414c6652: cmp    esi,0x1
1414c6655: ja     0x1414c6665
1414c6657: xor    eax,eax
1414c6659: cdqe
1414c665b: movzx  eax,WORD PTR [r14+rax*2]
1414c6660: jmp    0x1414c671c
1414c6665: call   0x140eb68b0
1414c666a: mov    r8d,eax
1414c666d: mov    eax,0x3
1414c6672: mul    r8d
1414c6675: mov    ecx,r8d
1414c6678: sub    ecx,edx
1414c667a: shr    ecx,1
1414c667c: add    ecx,edx
1414c667e: shr    ecx,0x1e
1414c6681: imul   ecx,ecx,0x80000001
1414c6687: add    r8d,ecx
1414c668a: xor    edx,edx
1414c668c: mov    eax,0x7fffffff
1414c6691: div    esi
1414c6693: lea    ecx,[rax+0x1]
1414c6696: xor    edx,edx
1414c6698: mov    eax,r8d
1414c669b: div    ecx
1414c669d: cdqe
1414c669f: movzx  eax,WORD PTR [r14+rax*2]
1414c66a4: jmp    0x1414c671c
1414c66a6: test   bp,bp
1414c66a9: js     0x1414c671a
1414c66ab: mov    rcx,QWORD PTR [r15+0x11b578]
1414c66b2: mov    rax,QWORD PTR [r15+0x11b580]
1414c66b9: sub    rax,rcx
1414c66bc: sar    rax,0x3
1414c66c0: cmp    rbp,rax
1414c66c3: jae    0x1414c671a
1414c66c5: mov    rax,QWORD PTR [rcx+rbp*8]
1414c66c9: mov    rsi,QWORD PTR [rax+0x180]
1414c66d0: sub    rsi,QWORD PTR [rax+0x178]
1414c66d7: sar    rsi,0x3
1414c66db: cmp    esi,0x1
1414c66de: jbe    0x1414c671a
1414c66e0: call   0x140eb68b0
1414c66e5: mov    r8d,eax
1414c66e8: mov    eax,0x3
1414c66ed: mul    r8d
1414c66f0: mov    ecx,r8d
1414c66f3: sub    ecx,edx
1414c66f5: shr    ecx,1
1414c66f7: add    ecx,edx
1414c66f9: shr    ecx,0x1e
1414c66fc: imul   ecx,ecx,0x80000001
1414c6702: add    r8d,ecx
1414c6705: xor    edx,edx
1414c6707: mov    eax,0x7fffffff
1414c670c: div    esi
1414c670e: lea    ecx,[rax+0x1]
1414c6711: xor    edx,edx
1414c6713: mov    eax,r8d
1414c6716: div    ecx
1414c6718: jmp    0x1414c671c
1414c671a: xor    eax,eax
1414c671c: mov    WORD PTR [rbx+0x2],ax
1414c6720: mov    BYTE PTR [rbx+0xa],0x1
1414c6724: mov    r11,rbx
1414c6727: mov    esi,0xc
1414c672c: mov    rcx,rbx
1414c672f: call   0x140a45370
1414c6734: mov    r10d,eax
1414c6737: cmp    DWORD PTR [rsp+0xc8],0x7
1414c673f: mov    eax,0x4e20
1414c6744: je     0x1414c674b
1414c6746: mov    eax,0x2328
1414c674b: cdq
1414c674c: idiv   r10d
1414c674f: mov    WORD PTR [rsi+r11*1],ax
1414c6754: mov    rax,QWORD PTR [rsp+0xd0]
1414c675c: movups xmm0,XMMWORD PTR [rax]
1414c675f: movups XMMWORD PTR [rbx+0x20],xmm0
1414c6763: movsd  xmm1,QWORD PTR [rax+0x10]
1414c6768: movsd  QWORD PTR [rbx+0x30],xmm1
1414c676d: mov    eax,DWORD PTR [rsp+0xc8]
1414c6774: mov    WORD PTR [rbx+0x38],ax
1414c6778: test   r13b,r13b
1414c677b: movsx  eax,r12w
1414c677f: jne    0x1414c6786
1414c6781: mov    eax,0x1
1414c6786: mov    DWORD PTR [rbx+0x1c],eax
1414c6789: cmp    BYTE PTR [rsp+0x20],0x0
1414c678e: jne    0x1414c6797
1414c6790: mov    BYTE PTR [rsp+0x20],0x1
1414c6795: jmp    0x1414c679b
1414c6797: or     DWORD PTR [rbx+0x18],0x8
1414c679b: test   BYTE PTR [rbx+0x18],0x2
1414c679f: je     0x1414c67da
1414c67a1: mov    QWORD PTR [rsp+0xa0],rbx
1414c67a9: mov    rdx,QWORD PTR [rip+0xf0adf0]        # 0x1423d15a0
1414c67b0: cmp    rdx,QWORD PTR [rip+0xf0adf1]        # 0x1423d15a8
1414c67b7: je     0x1414c67c6
1414c67b9: mov    QWORD PTR [rdx],rbx
1414c67bc: add    QWORD PTR [rip+0xf0addc],0x8        # 0x1423d15a0
1414c67c4: jmp    0x1414c67da
1414c67c6: lea    r8,[rsp+0xa0]
1414c67ce: lea    rcx,[rip+0xf0adc3]        # 0x1423d1598
1414c67d5: call   0x140070bd0
1414c67da: movzx  eax,WORD PTR [rsp+0x22]
1414c67df: dec    ax
1414c67e2: mov    WORD PTR [rsp+0x22],ax
1414c67e7: test   ax,ax
1414c67ea: jg     0x1414c6618
1414c67f0: test   r14,r14
1414c67f3: mov    rbp,QWORD PTR [rsp+0x28]
1414c67f8: je     0x1414c6836
1414c67fa: sub    rbp,r14
1414c67fd: sar    rbp,1
1414c6800: add    rbp,rbp
1414c6803: mov    rax,r14
1414c6806: cmp    rbp,0x1000
1414c680d: jb     0x1414c682b
1414c680f: add    rbp,0x27
1414c6813: mov    r14,QWORD PTR [r14-0x8]
1414c6817: sub    rax,r14
1414c681a: add    rax,0xfffffffffffffff8
1414c681e: cmp    rax,0x1f
1414c6822: jbe    0x1414c682b
1414c6824: call   QWORD PTR [rip+0x11f2fe]        # 0x1415e5b28
1414c682a: int3
1414c682b: mov    rdx,rbp
1414c682e: mov    rcx,r14
1414c6831: call   0x141539680
1414c6836: add    rsp,0x58
1414c683a: pop    r15
1414c683c: pop    r14
1414c683e: pop    r13
1414c6840: pop    r12
1414c6842: pop    rdi
1414c6843: pop    rsi
1414c6844: pop    rbp
1414c6845: pop    rbx
1414c6846: ret
