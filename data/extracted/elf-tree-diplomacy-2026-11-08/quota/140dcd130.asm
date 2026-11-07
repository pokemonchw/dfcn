; Original disk PE PE:6a70a6d9:02711000; D:\program\steam\steamapps\common\Dwarf Fortress\Dwarf Fortress.exe; VA 0x140dcd130..0x140dcdbe4
0x140dcd130: mov    WORD PTR [rsp+0x18],r8w
0x140dcd136: push   rbx
0x140dcd137: push   rbp
0x140dcd138: push   rsi
0x140dcd139: push   rdi
0x140dcd13a: push   r12
0x140dcd13c: push   r13
0x140dcd13e: push   r14
0x140dcd140: push   r15
0x140dcd142: sub    rsp,0x68
0x140dcd146: movzx  r14d,r9w
0x140dcd14a: mov    DWORD PTR [rsp+0x40],r14d
0x140dcd14f: movzx  eax,r9w
0x140dcd153: sub    ax,cx
0x140dcd156: mov    WORD PTR [rsp+0x36],ax
0x140dcd15b: movzx  r15d,WORD PTR [rsp+0xd0]
0x140dcd164: movzx  eax,r15w
0x140dcd168: sub    ax,dx
0x140dcd16b: mov    WORD PTR [rsp+0x38],ax
0x140dcd170: mov    eax,0xffff8ad0
0x140dcd175: mov    WORD PTR [rsp+0xc8],ax
0x140dcd17d: movzx  r12d,WORD PTR [rsp+0xd8]
0x140dcd186: movzx  r9d,r12w
0x140dcd18a: movzx  r8d,r15w
0x140dcd18e: movzx  edx,r14w
0x140dcd192: call   0x1413ffaf0
0x140dcd197: mov    r13,rax
0x140dcd19a: xor    esi,esi
0x140dcd19c: test   rax,rax
0x140dcd19f: je     0x140dcd7d6
0x140dcd1a5: mov    r8,QWORD PTR [rax+0x40]
0x140dcd1a9: test   r8,r8
0x140dcd1ac: je     0x140dcd7d6
0x140dcd1b2: mov    ecx,DWORD PTR [r8+0x2c]
0x140dcd1b6: mov    eax,ecx
0x140dcd1b8: cdq
0x140dcd1b9: sub    eax,edx
0x140dcd1bb: sar    eax,1
0x140dcd1bd: movzx  r12d,WORD PTR [r13+0x4]
0x140dcd1c2: sub    r12w,ax
0x140dcd1c6: mov    WORD PTR [rsp+0xc8],r12w
0x140dcd1cf: mov    r9d,DWORD PTR [r8+0x30]
0x140dcd1d3: mov    eax,r9d
0x140dcd1d6: cdq
0x140dcd1d7: sub    eax,edx
0x140dcd1d9: sar    eax,1
0x140dcd1db: movzx  edi,WORD PTR [r13+0x6]
0x140dcd1e0: sub    di,ax
0x140dcd1e3: mov    WORD PTR [rsp+0xc0],di
0x140dcd1eb: lea    esi,[rcx-0x1]
0x140dcd1ee: add    si,r12w
0x140dcd1f2: mov    WORD PTR [rsp+0x30],si
0x140dcd1f7: dec    r9w
0x140dcd1fb: add    r9w,di
0x140dcd1ff: mov    DWORD PTR [rsp+0x50],r9d
0x140dcd204: movzx  eax,WORD PTR [r13+0x8]
0x140dcd209: mov    WORD PTR [rsp+0x34],ax
0x140dcd20e: dec    ax
0x140dcd211: add    ax,WORD PTR [r8+0x28]
0x140dcd216: mov    WORD PTR [rsp+0x32],ax
0x140dcd21b: xor    esi,esi
0x140dcd21d: movzx  ebx,si
0x140dcd220: mov    WORD PTR [rsp+0xb8],bx
0x140dcd228: test   ecx,ecx
0x140dcd22a: jle    0x140dcd637
0x140dcd230: mov    r9d,esi
0x140dcd233: mov    DWORD PTR [rsp+0x3c],esi
0x140dcd237: lea    rdi,[rip+0xffffffffff232dc2]        # 0x140000000
0x140dcd23e: mov    r10,QWORD PTR [rip+0x171f6b3]        # 0x1424ec8f8
0x140dcd245: mov    r11,QWORD PTR [rip+0x171ae5c]        # 0x1424e80a8
0x140dcd24c: nop    DWORD PTR [rax+0x0]
0x140dcd250: mov    rbp,r8
0x140dcd253: mov    ecx,DWORD PTR [r8+0x30]
0x140dcd257: mov    eax,ecx
0x140dcd259: cdq
0x140dcd25a: sub    eax,edx
0x140dcd25c: sar    eax,1
0x140dcd25e: movzx  r14d,WORD PTR [r13+0x6]
0x140dcd263: sub    r14w,ax
0x140dcd267: movzx  edx,si
0x140dcd26a: mov    WORD PTR [rsp+0xb0],dx
0x140dcd272: test   ecx,ecx
0x140dcd274: jle    0x140dcd607
0x140dcd27a: xor    ebx,ebx
0x140dcd27c: mov    eax,ebx
0x140dcd27e: mov    DWORD PTR [rsp+0x48],ebx
0x140dcd282: nop    DWORD PTR [rax+0x0]
0x140dcd286: data16 nop WORD PTR [rax+rax*1+0x0]
0x140dcd290: movzx  ebp,WORD PTR [rbp+0x28]
0x140dcd294: lea    esi,[rbp-0x1]
0x140dcd297: add    si,WORD PTR [r13+0x8]
0x140dcd29c: sub    bp,0x1
0x140dcd2a0: js     0x140dcd5d6
0x140dcd2a6: movsx  r15,bp
0x140dcd2aa: shl    r15,0x3
0x140dcd2ae: xchg   ax,ax
0x140dcd2b0: mov    rcx,QWORD PTR [r13+0x40]
0x140dcd2b4: imul   eax,DWORD PTR [rcx+0x2c]
0x140dcd2b8: add    eax,r9d
0x140dcd2bb: movsxd rdx,eax
0x140dcd2be: mov    rax,QWORD PTR [rcx]
0x140dcd2c1: mov    rcx,QWORD PTR [rax+r15*1]
0x140dcd2c5: movzx  eax,WORD PTR [rcx+rdx*2]
0x140dcd2c9: test   ax,ax
0x140dcd2cc: je     0x140dcd5b4
0x140dcd2d2: mov    ecx,0x80
0x140dcd2d7: cmp    ax,cx
0x140dcd2da: je     0x140dcd5b4
0x140dcd2e0: test   al,0x1
0x140dcd2e2: jne    0x140dcd3c5
0x140dcd2e8: test   al,0x10
0x140dcd2ea: je     0x140dcd5b4
0x140dcd2f0: test   r12w,r12w
0x140dcd2f4: js     0x140dcd39c
0x140dcd2fa: movsx  eax,r12w
0x140dcd2fe: cmp    eax,DWORD PTR [rip+0x171add8]        # 0x1424e80dc
0x140dcd304: jge    0x140dcd39c
0x140dcd30a: test   r14w,r14w
0x140dcd30e: js     0x140dcd39c
0x140dcd314: movsx  r9d,r14w
0x140dcd318: cmp    r9d,DWORD PTR [rip+0x171adc1]        # 0x1424e80e0
0x140dcd31f: jge    0x140dcd39c
0x140dcd321: test   si,si
0x140dcd324: js     0x140dcd39c
0x140dcd326: movsx  ecx,si
0x140dcd329: cmp    ecx,DWORD PTR [rip+0x171adb5]        # 0x1424e80e4
0x140dcd32f: jge    0x140dcd39c
0x140dcd331: movzx  ecx,r12w
0x140dcd335: sar    cx,0x4
0x140dcd339: movzx  edx,r14w
0x140dcd33d: sar    dx,0x4
0x140dcd341: test   r11,r11
0x140dcd344: je     0x140dcd39c
0x140dcd346: movsx  rcx,cx
0x140dcd34a: movsx  r8,dx
0x140dcd34e: mov    rcx,QWORD PTR [r11+rcx*8]
0x140dcd352: movsx  rdx,si
0x140dcd356: mov    rcx,QWORD PTR [rcx+r8*8]
0x140dcd35a: mov    r8,QWORD PTR [rcx+rdx*8]
0x140dcd35e: test   r8,r8
0x140dcd361: je     0x140dcd39c
0x140dcd363: and    eax,0x8000000f
0x140dcd368: jge    0x140dcd371
0x140dcd36a: dec    eax
0x140dcd36c: or     eax,0xfffffff0
0x140dcd36f: inc    eax
0x140dcd371: movsxd rcx,eax
0x140dcd374: add    rcx,0x5
0x140dcd378: shl    rcx,0x4
0x140dcd37c: and    r9d,0x8000000f
0x140dcd383: jge    0x140dcd38f
0x140dcd385: dec    r9d
0x140dcd388: or     r9d,0xfffffff0
0x140dcd38c: inc    r9d
0x140dcd38f: movsxd rax,r9d
0x140dcd392: add    rcx,rax
0x140dcd395: movzx  eax,WORD PTR [r8+rcx*2]
0x140dcd39a: jmp    0x140dcd39e
0x140dcd39c: mov    eax,ebx
0x140dcd39e: movzx  eax,ax
0x140dcd3a1: add    eax,0xfffffff9
0x140dcd3a4: cmp    eax,0xdb
0x140dcd3a9: ja     0x140dcd5b4
0x140dcd3af: cdqe
0x140dcd3b1: movzx  eax,BYTE PTR [rdi+rax*1+0xdcdb08]
0x140dcd3b9: mov    ecx,DWORD PTR [rdi+rax*4+0xdcdb00]
0x140dcd3c0: add    rcx,rdi
0x140dcd3c3: jmp    rcx
0x140dcd3c5: movsx  rax,WORD PTR [r13+0x2]
0x140dcd3ca: test   ax,ax
0x140dcd3cd: js     0x140dcd5b4
0x140dcd3d3: mov    rcx,rax
0x140dcd3d6: mov    rax,QWORD PTR [rip+0x171f523]        # 0x1424ec900
0x140dcd3dd: sub    rax,r10
0x140dcd3e0: sar    rax,0x3
0x140dcd3e4: cmp    rcx,rax
0x140dcd3e7: jae    0x140dcd5b4
0x140dcd3ed: mov    rax,QWORD PTR [r10+rcx*8]
0x140dcd3f1: movzx  ebx,WORD PTR [rax+0x2ba]
0x140dcd3f8: mov    edi,DWORD PTR [rax+0x2d0]
0x140dcd3fe: cmp    bx,0xffff
0x140dcd402: je     0x140dcd5ab
0x140dcd408: mov    edx,0xffffffff
0x140dcd40d: mov    ecx,0x5
0x140dcd412: mov    r8d,edx
0x140dcd415: mov    BYTE PTR [rsp+0x20],0x0
0x140dcd41a: mov    r9d,edx
0x140dcd41d: call   0x140aa3870
0x140dcd422: mov    edx,0xffffffff
0x140dcd427: mov    ecx,0x5
0x140dcd42c: mov    BYTE PTR [rsp+0x20],0x1
0x140dcd431: mov    r9d,edi
0x140dcd434: movzx  r8d,bx
0x140dcd438: call   0x140aa3870
0x140dcd43d: mov    edx,0xffffffff
0x140dcd442: mov    ecx,0x5
0x140dcd447: mov    BYTE PTR [rsp+0x28],0x1
0x140dcd44c: mov    DWORD PTR [rsp+0x20],edx
0x140dcd450: mov    r9d,edi
0x140dcd453: movzx  r8d,bx
0x140dcd457: call   0x140c9a510
0x140dcd45c: mov    rdi,rax
0x140dcd45f: mov    rcx,QWORD PTR [rax]
0x140dcd462: mov    r8,QWORD PTR [rcx+0x328]
0x140dcd469: mov    dl,0x1
0x140dcd46b: mov    rcx,rax
0x140dcd46e: call   r8
0x140dcd471: mov    dl,0x2
0x140dcd473: mov    rcx,rdi
0x140dcd476: call   0x140c634f0
0x140dcd47b: mov    WORD PTR [rdi+0x8],r12w
0x140dcd480: mov    WORD PTR [rdi+0xa],r14w
0x140dcd485: mov    WORD PTR [rdi+0xc],si
0x140dcd489: mov    ecx,0xa0
0x140dcd48e: call   0x141539690
0x140dcd493: mov    rbx,rax
0x140dcd496: mov    QWORD PTR [rsp+0x58],rax
0x140dcd49b: xor    edx,edx
0x140dcd49d: mov    rcx,rax
0x140dcd4a0: call   0x140ea7230
0x140dcd4a5: lea    rax,[rip+0x88b4e4]        # 0x141658990
0x140dcd4ac: mov    QWORD PTR [rbx],rax
0x140dcd4af: mov    WORD PTR [rbx+0x20],r12w
0x140dcd4b4: mov    WORD PTR [rbx+0x22],r14w
0x140dcd4b9: mov    WORD PTR [rbx+0x24],si
0x140dcd4bd: mov    WORD PTR [rbx+0x32],r12w
0x140dcd4c2: mov    WORD PTR [rbx+0x34],r14w
0x140dcd4c7: mov    WORD PTR [rbx+0x36],si
0x140dcd4cb: mov    QWORD PTR [rbx+0x98],rdi
0x140dcd4d2: mov    WORD PTR [rbx+0x2c],r12w
0x140dcd4d7: mov    WORD PTR [rbx+0x2e],r14w
0x140dcd4dc: mov    WORD PTR [rbx+0x30],si
0x140dcd4e0: mov    r8d,DWORD PTR [rbx+0x10]
0x140dcd4e4: mov    edx,0xc
0x140dcd4e9: mov    rcx,rdi
0x140dcd4ec: call   0x140072660
0x140dcd4f1: mov    rax,QWORD PTR [rsp+0xe0]
0x140dcd4f9: mov    QWORD PTR [rbx+0x18],rax
0x140dcd4fd: mov    eax,DWORD PTR [rbx+0x48]
0x140dcd500: or     eax,0x804
0x140dcd505: or     eax,0x10
0x140dcd508: bts    eax,0x9
0x140dcd50c: or     eax,0x1
0x140dcd50f: bts    eax,0x8
0x140dcd513: mov    DWORD PTR [rbx+0x48],eax
0x140dcd516: xor    edx,edx
0x140dcd518: mov    QWORD PTR [rbx+0x74],rdx
0x140dcd51c: mov    DWORD PTR [rbx+0x7c],edx
0x140dcd51f: movsx  eax,WORD PTR [rsp+0x36]
0x140dcd524: imul   ecx,eax,0x2710
0x140dcd52a: mov    DWORD PTR [rbx+0x80],ecx
0x140dcd530: movsx  eax,WORD PTR [rsp+0x38]
0x140dcd535: imul   ecx,eax,0x2710
0x140dcd53b: mov    DWORD PTR [rbx+0x84],ecx
0x140dcd541: mov    QWORD PTR [rbx+0x88],rdx
0x140dcd548: mov    QWORD PTR [rbx+0x90],rdx
0x140dcd54f: call   0x140eb68b0
0x140dcd554: mov    r8d,eax
0x140dcd557: mov    eax,0x3
0x140dcd55c: mul    r8d
0x140dcd55f: mov    ecx,r8d
0x140dcd562: sub    ecx,edx
0x140dcd564: shr    ecx,1
0x140dcd566: add    ecx,edx
0x140dcd568: shr    ecx,0x1e
0x140dcd56b: imul   ecx,ecx,0x7fffffff
0x140dcd571: sub    r8d,ecx
0x140dcd574: mov    eax,0x2bfffffd
0x140dcd579: mul    r8d
0x140dcd57c: shr    edx,0x19
0x140dcd57f: mov    DWORD PTR [rbx+0x50],edx
0x140dcd582: or     DWORD PTR [rdi+0x10],0x2
0x140dcd586: or     DWORD PTR [rbx+0x48],0x1
0x140dcd58a: mov    rax,QWORD PTR [rdi]
0x140dcd58d: mov    r8b,0x1
0x140dcd590: movzx  edx,r8b
0x140dcd594: mov    rcx,rdi
0x140dcd597: call   QWORD PTR [rax+0x4a8]
0x140dcd59d: mov    r10,QWORD PTR [rip+0x171f354]        # 0x1424ec8f8
0x140dcd5a4: mov    r11,QWORD PTR [rip+0x171aafd]        # 0x1424e80a8
0x140dcd5ab: xor    ebx,ebx
0x140dcd5ad: lea    rdi,[rip+0xffffffffff232a4c]        # 0x140000000
0x140dcd5b4: dec    si
0x140dcd5b7: sub    r15,0x8
0x140dcd5bb: sub    bp,0x1
0x140dcd5bf: mov    eax,DWORD PTR [rsp+0x48]
0x140dcd5c3: mov    r9d,DWORD PTR [rsp+0x3c]
0x140dcd5c8: jns    0x140dcd2b0
0x140dcd5ce: movzx  edx,WORD PTR [rsp+0xb0]
0x140dcd5d6: inc    r14w
0x140dcd5da: inc    dx
0x140dcd5dd: mov    WORD PTR [rsp+0xb0],dx
0x140dcd5e5: mov    r8,QWORD PTR [r13+0x40]
0x140dcd5e9: movsx  eax,dx
0x140dcd5ec: mov    DWORD PTR [rsp+0x48],eax
0x140dcd5f0: mov    rbp,r8
0x140dcd5f3: cmp    eax,DWORD PTR [r8+0x30]
0x140dcd5f7: jl     0x140dcd290
0x140dcd5fd: movzx  ebx,WORD PTR [rsp+0xb8]
0x140dcd605: xor    esi,esi
0x140dcd607: inc    r12w
0x140dcd60b: inc    bx
0x140dcd60e: mov    WORD PTR [rsp+0xb8],bx
0x140dcd616: movsx  r9d,bx
0x140dcd61a: mov    DWORD PTR [rsp+0x3c],r9d
0x140dcd61f: cmp    r9d,DWORD PTR [r8+0x2c]
0x140dcd623: jl     0x140dcd250
0x140dcd629: mov    r14d,DWORD PTR [rsp+0x40]
0x140dcd62e: movzx  r15d,WORD PTR [rsp+0xd0]
0x140dcd637: movzx  r12d,WORD PTR [rsp+0xd8]
0x140dcd640: mov    DWORD PTR [rsp+0x28],esi
0x140dcd644: mov    BYTE PTR [rsp+0x20],0x1
0x140dcd649: movzx  r9d,r12w
0x140dcd64d: movzx  r8d,r15w
0x140dcd651: movzx  edx,r14w
0x140dcd655: lea    rcx,[rip+0x1603e94]        # 0x1423d14f0
0x140dcd65c: call   0x1414c45a0
0x140dcd661: cmp    DWORD PTR [rip+0xacec30],0x0        # 0x14189c298
0x140dcd668: jne    0x140dcd8a5
0x140dcd66e: xor    r11d,r11d
0x140dcd671: mov    r8d,r11d
0x140dcd674: mov    DWORD PTR [rsp+0xb0],r11d
0x140dcd67c: mov    rax,QWORD PTR [rip+0x160417d]        # 0x1423d1800
0x140dcd683: mov    r13,QWORD PTR [rip+0x160416e]        # 0x1423d17f8
0x140dcd68a: sub    rax,r13
0x140dcd68d: sar    rax,0x3
0x140dcd691: test   rax,rax
0x140dcd694: je     0x140dcd8a5
0x140dcd69a: mov    edi,r11d
0x140dcd69d: mov    QWORD PTR [rsp+0x48],r11
0x140dcd6a2: mov    r10d,r11d
0x140dcd6a5: mov    r9,r11
0x140dcd6a8: mov    rax,QWORD PTR [rdi+r13*1]
0x140dcd6ac: mov    rdx,QWORD PTR [rax+0x13a0]
0x140dcd6b3: mov    rbx,QWORD PTR [rax+0x1398]
0x140dcd6ba: mov    rax,rdx
0x140dcd6bd: sub    rax,rbx
0x140dcd6c0: sar    rax,0x3
0x140dcd6c4: test   rax,rax
0x140dcd6c7: je     0x140dcd718
0x140dcd6c9: nop    DWORD PTR [rax+0x0]
0x140dcd6d0: mov    r11,QWORD PTR [rbx+r9*8]
0x140dcd6d4: cmp    WORD PTR [r11],0x0
0x140dcd6d9: jne    0x140dcd6f5
0x140dcd6db: mov    rax,QWORD PTR [rdi+r13*1]
0x140dcd6df: mov    rcx,QWORD PTR [rax+0x1398]
0x140dcd6e6: mov    rax,QWORD PTR [rcx+r9*8]
0x140dcd6ea: cmp    WORD PTR [rax+0x2],0x2
0x140dcd6ef: je     0x140dcd820
0x140dcd6f5: inc    r10d
0x140dcd6f8: inc    r9
0x140dcd6fb: mov    rcx,rdx
0x140dcd6fe: sub    rcx,rbx
0x140dcd701: sar    rcx,0x3
0x140dcd705: movsxd rax,r10d
0x140dcd708: cmp    rax,rcx
0x140dcd70b: jb     0x140dcd6d0
0x140dcd70d: mov    r8d,DWORD PTR [rsp+0xb0]
0x140dcd715: xor    r11d,r11d
0x140dcd718: mov    ebp,r11d
0x140dcd71b: mov    r15,r11
0x140dcd71e: mov    r14,QWORD PTR [rip+0x15c5e03]        # 0x142393528
0x140dcd725: mov    rcx,QWORD PTR [rip+0x15c5df4]        # 0x142393520
0x140dcd72c: sub    r14,rcx
0x140dcd72f: sar    r14,0x3
0x140dcd733: test   r14,r14
0x140dcd736: je     0x140dcd85a
0x140dcd73c: mov    rax,QWORD PTR [rdi+r13*1]
0x140dcd740: mov    r12d,DWORD PTR [rax+0x4]
0x140dcd744: mov    rsi,rcx
0x140dcd747: mov    rdi,QWORD PTR [rsi]
0x140dcd74a: cmp    DWORD PTR [rdi],r12d
0x140dcd74d: jne    0x140dcd7bf
0x140dcd74f: mov    r10d,r11d
0x140dcd752: mov    r9,r11
0x140dcd755: mov    r8,QWORD PTR [rdi+0xc8]
0x140dcd75c: mov    rdi,QWORD PTR [rdi+0xc0]
0x140dcd763: mov    rax,r8
0x140dcd766: sub    rax,rdi
0x140dcd769: sar    rax,0x3
0x140dcd76d: test   rax,rax
0x140dcd770: je     0x140dcd7bf
0x140dcd772: mov    rdx,rdi
0x140dcd775: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x140dcd780: lea    r11,[r9*8+0x0]
0x140dcd788: mov    rax,QWORD PTR [r11+rdi*1]
0x140dcd78c: cmp    WORD PTR [rax],0x0
0x140dcd790: jne    0x140dcd7a4
0x140dcd792: mov    rax,QWORD PTR [r11+rdx*1]
0x140dcd796: cmp    WORD PTR [rax+0x2],0x2
0x140dcd79b: je     0x140dcd82d
0x140dcd7a1: mov    rdi,rdx
0x140dcd7a4: inc    r10d
0x140dcd7a7: inc    r9
0x140dcd7aa: mov    rcx,r8
0x140dcd7ad: sub    rcx,rdx
0x140dcd7b0: sar    rcx,0x3
0x140dcd7b4: movsxd rax,r10d
0x140dcd7b7: cmp    rax,rcx
0x140dcd7ba: jb     0x140dcd780
0x140dcd7bc: xor    r11d,r11d
0x140dcd7bf: inc    ebp
0x140dcd7c1: inc    r15
0x140dcd7c4: add    rsi,0x8
0x140dcd7c8: movsxd rax,ebp
0x140dcd7cb: cmp    rax,r14
0x140dcd7ce: jb     0x140dcd747
0x140dcd7d4: jmp    0x140dcd84d
0x140dcd7d6: movzx  eax,WORD PTR [rsp+0xd0]
0x140dcd7de: mov    WORD PTR [rsp+0xc0],ax
0x140dcd7e6: movzx  ecx,WORD PTR [rsp+0xd0]
0x140dcd7ee: mov    WORD PTR [rsp+0x30],cx
0x140dcd7f3: movzx  r9d,WORD PTR [rsp+0xd0]
0x140dcd7fc: mov    DWORD PTR [rsp+0x50],r9d
0x140dcd801: movzx  eax,WORD PTR [rsp+0xd0]
0x140dcd809: mov    WORD PTR [rsp+0x34],ax
0x140dcd80e: movzx  eax,WORD PTR [rsp+0xd0]
0x140dcd816: mov    WORD PTR [rsp+0x32],ax
0x140dcd81b: jmp    0x140dcd640
0x140dcd820: dec    DWORD PTR [r11+0x3c]
0x140dcd824: mov    r13,QWORD PTR [rip+0x1603fcd]        # 0x1423d17f8
0x140dcd82b: jmp    0x140dcd852
0x140dcd82d: mov    rax,QWORD PTR [rip+0x15c5cec]        # 0x142393520
0x140dcd834: mov    rax,QWORD PTR [rax+r15*8]
0x140dcd838: mov    rcx,QWORD PTR [rax+0xc0]
0x140dcd83f: mov    rax,QWORD PTR [rcx+r11*1]
0x140dcd843: dec    DWORD PTR [rax+0x3c]
0x140dcd846: mov    r13,QWORD PTR [rip+0x1603fab]        # 0x1423d17f8
0x140dcd84d: mov    rdi,QWORD PTR [rsp+0x48]
0x140dcd852: mov    r8d,DWORD PTR [rsp+0xb0]
0x140dcd85a: inc    r8d
0x140dcd85d: mov    DWORD PTR [rsp+0xb0],r8d
0x140dcd865: add    rdi,0x8
0x140dcd869: mov    QWORD PTR [rsp+0x48],rdi
0x140dcd86e: mov    rcx,QWORD PTR [rip+0x1603f8b]        # 0x1423d1800
0x140dcd875: sub    rcx,r13
0x140dcd878: sar    rcx,0x3
0x140dcd87c: movsxd rax,r8d
0x140dcd87f: cmp    rax,rcx
0x140dcd882: mov    r11d,0x0
0x140dcd888: jb     0x140dcd6a2
0x140dcd88e: mov    r14d,DWORD PTR [rsp+0x40]
0x140dcd893: movzx  r15d,WORD PTR [rsp+0xd0]
0x140dcd89c: movzx  r12d,WORD PTR [rsp+0xd8]
0x140dcd8a5: mov    BYTE PTR [rsp+0x20],0x0
0x140dcd8aa: movzx  r9d,r12w
0x140dcd8ae: movzx  r8d,r15w
0x140dcd8b2: movzx  edx,r14w
0x140dcd8b6: lea    rcx,[rip+0x1603c33]        # 0x1423d14f0
0x140dcd8bd: call   0x14103fa70
0x140dcd8c2: movzx  r9d,r12w
0x140dcd8c6: movzx  r8d,r15w
0x140dcd8ca: movzx  edx,r14w
0x140dcd8ce: lea    rcx,[rip+0x1603c1b]        # 0x1423d14f0
0x140dcd8d5: call   0x14145d7f0
0x140dcd8da: movzx  esi,WORD PTR [rsp+0xc8]
0x140dcd8e2: mov    eax,0xffff8ad0
0x140dcd8e7: cmp    si,ax
0x140dcd8ea: je     0x140dcd969
0x140dcd8ec: movzx  r13d,WORD PTR [rsp+0x30]
0x140dcd8f2: cmp    si,r13w
0x140dcd8f6: jg     0x140dcd969
0x140dcd8f8: mov    r14d,DWORD PTR [rsp+0x50]
0x140dcd8fd: movzx  eax,WORD PTR [rsp+0xc0]
0x140dcd905: movzx  edi,ax
0x140dcd908: cmp    ax,r14w
0x140dcd90c: jg     0x140dcd95b
0x140dcd90e: movzx  ebp,WORD PTR [rsp+0x32]
0x140dcd913: mov    r9b,0x1
0x140dcd916: movzx  r8d,di
0x140dcd91a: movzx  edx,si
0x140dcd91d: lea    rcx,[rip+0x1603bcc]        # 0x1423d14f0
0x140dcd924: call   0x1414b3050
0x140dcd929: movzx  ebx,WORD PTR [rsp+0x34]
0x140dcd92e: cmp    bx,bp
0x140dcd931: jg     0x140dcd94a
0x140dcd933: inc    bx
0x140dcd936: movzx  r8d,bx
0x140dcd93a: movzx  edx,di
0x140dcd93d: movzx  ecx,si
0x140dcd940: call   0x140a81160
0x140dcd945: cmp    bx,bp
0x140dcd948: jle    0x140dcd933
0x140dcd94a: inc    di
0x140dcd94d: cmp    di,r14w
0x140dcd951: jle    0x140dcd913
0x140dcd953: movzx  eax,WORD PTR [rsp+0xc0]
0x140dcd95b: inc    si
0x140dcd95e: cmp    si,r13w
0x140dcd962: jle    0x140dcd905
0x140dcd964: mov    r14d,DWORD PTR [rsp+0x40]
0x140dcd969: mov    ebp,DWORD PTR [rip+0x171a775]        # 0x1424e80e4
0x140dcd96f: mov    esi,DWORD PTR [rip+0x171a76b]        # 0x1424e80e0
0x140dcd975: mov    edi,DWORD PTR [rip+0x171a761]        # 0x1424e80dc
0x140dcd97b: mov    rbx,QWORD PTR [rip+0x171a726]        # 0x1424e80a8
0x140dcd982: cmp    DWORD PTR [rip+0xace90f],0x0        # 0x14189c298
0x140dcd989: jne    0x140dcda07
0x140dcd98b: test   r14w,r14w
0x140dcd98f: js     0x140dcda01
0x140dcd991: movsx  eax,r14w
0x140dcd995: cmp    eax,edi
0x140dcd997: jge    0x140dcda01
0x140dcd999: test   r15w,r15w
0x140dcd99d: js     0x140dcda01
0x140dcd99f: movsx  eax,r15w
0x140dcd9a3: mov    r8d,eax
0x140dcd9a6: cmp    eax,esi
0x140dcd9a8: jge    0x140dcda01
0x140dcd9aa: test   r12w,r12w
0x140dcd9ae: js     0x140dcda01
0x140dcd9b0: movsx  eax,r12w
0x140dcd9b4: cmp    eax,ebp
0x140dcd9b6: jge    0x140dcda01
0x140dcd9b8: test   rbx,rbx
0x140dcd9bb: je     0x140dcda01
0x140dcd9bd: movsx  rax,r14w
0x140dcd9c1: shr    rax,0x4
0x140dcd9c5: movsx  rdx,r15w
0x140dcd9c9: shr    rdx,0x4
0x140dcd9cd: mov    rax,QWORD PTR [rbx+rax*8]
0x140dcd9d1: movsx  rcx,r12w
0x140dcd9d5: mov    rax,QWORD PTR [rax+rdx*8]
0x140dcd9d9: mov    r9,QWORD PTR [rax+rcx*8]
0x140dcd9dd: test   r9,r9
0x140dcd9e0: je     0x140dcda01
0x140dcd9e2: mov    edx,r14d
0x140dcd9e5: and    edx,0xf
0x140dcd9e8: shl    rdx,0x4
0x140dcd9ec: and    r8d,0xf
0x140dcd9f0: add    rdx,r8
0x140dcd9f3: test   DWORD PTR [r9+rdx*4+0x2a0],0x8000
0x140dcd9ff: jne    0x140dcda07
0x140dcda01: inc    DWORD PTR [rip+0x15c3a29]        # 0x142391430
0x140dcda07: movzx  r9d,r12w
0x140dcda0b: movzx  r8d,r15w
0x140dcda0f: movzx  edx,r14w
0x140dcda13: lea    rcx,[rip+0x1603ad6]        # 0x1423d14f0
0x140dcda1a: call   0x1414a2970
0x140dcda1f: test   rax,rax
0x140dcda22: je     0x140dcda57
0x140dcda24: mov    rdx,QWORD PTR [rax]
0x140dcda27: mov    rcx,rax
0x140dcda2a: call   QWORD PTR [rdx+0x30]
0x140dcda2d: test   rax,rax
0x140dcda30: je     0x140dcdaed
0x140dcda36: mov    ecx,DWORD PTR [rax+0x20]
0x140dcda39: add    ecx,0x64
0x140dcda3c: mov    DWORD PTR [rax+0x20],ecx
0x140dcda3f: cmp    ecx,0x186a0
0x140dcda45: jle    0x140dcdaed
0x140dcda4b: mov    DWORD PTR [rax+0x20],0x186a0
0x140dcda52: jmp    0x140dcdaed
0x140dcda57: test   r14w,r14w
0x140dcda5b: js     0x140dcdacd
0x140dcda5d: movsx  eax,r14w
0x140dcda61: cmp    eax,edi
0x140dcda63: jge    0x140dcdacd
0x140dcda65: test   r15w,r15w
0x140dcda69: js     0x140dcdacd
0x140dcda6b: movsx  eax,r15w
0x140dcda6f: mov    r8d,eax
0x140dcda72: cmp    eax,esi
0x140dcda74: jge    0x140dcdacd
0x140dcda76: test   r12w,r12w
0x140dcda7a: js     0x140dcdacd
0x140dcda7c: movsx  eax,r12w
0x140dcda80: cmp    eax,ebp
0x140dcda82: jge    0x140dcdacd
0x140dcda84: test   rbx,rbx
0x140dcda87: je     0x140dcdacd
0x140dcda89: movsx  rax,r14w
0x140dcda8d: shr    rax,0x4
0x140dcda91: movsx  rdx,r15w
0x140dcda95: shr    rdx,0x4
0x140dcda99: mov    rax,QWORD PTR [rbx+rax*8]
0x140dcda9d: movsx  rcx,r12w
0x140dcdaa1: mov    rax,QWORD PTR [rax+rdx*8]
0x140dcdaa5: mov    rdx,QWORD PTR [rax+rcx*8]
0x140dcdaa9: test   rdx,rdx
0x140dcdaac: je     0x140dcdacd
0x140dcdaae: and    r14d,0xf
0x140dcdab2: mov    eax,r14d
0x140dcdab5: shl    rax,0x4
0x140dcdab9: and    r8d,0xf
0x140dcdabd: add    rax,r8
0x140dcdac0: test   DWORD PTR [rdx+rax*4+0x2a0],0x8000
0x140dcdacb: jne    0x140dcdaed
0x140dcdacd: mov    eax,DWORD PTR [rip+0x15c3961]        # 0x142391434
0x140dcdad3: add    eax,0x64
0x140dcdad6: mov    DWORD PTR [rip+0x15c3958],eax        # 0x142391434
0x140dcdadc: cmp    eax,0x186a0
0x140dcdae1: jle    0x140dcdaed
0x140dcdae3: mov    DWORD PTR [rip+0x15c3947],0x186a0        # 0x142391434
0x140dcdaed: add    rsp,0x68
0x140dcdaf1: pop    r15
0x140dcdaf3: pop    r14
0x140dcdaf5: pop    r13
0x140dcdaf7: pop    r12
0x140dcdaf9: pop    rdi
0x140dcdafa: pop    rsi
0x140dcdafb: pop    rbp
0x140dcdafc: pop    rbx
0x140dcdafd: ret
0x140dcdafe: xchg   ax,ax
0x140dcdb00: (bad)
0x140dcdb03: add    BYTE PTR [rbp+rdx*8+0xdc],dh
0x140dcdb12: add    BYTE PTR [rax],al
0x140dcdb14: add    DWORD PTR [rax],eax
0x140dcdb16: add    BYTE PTR [rax],al
0x140dcdb18: add    BYTE PTR [rcx],al
0x140dcdb1a: add    DWORD PTR [rcx],eax
0x140dcdb1c: add    DWORD PTR [rcx],eax
0x140dcdb1e: add    DWORD PTR [rcx],eax
0x140dcdb20: add    BYTE PTR [rcx],al
0x140dcdb22: add    BYTE PTR [rcx],al
0x140dcdb24: add    DWORD PTR [rcx],eax
0x140dcdb26: add    DWORD PTR [rcx],eax
0x140dcdb28: add    DWORD PTR [rcx],eax
0x140dcdb2a: add    DWORD PTR [rcx],eax
0x140dcdb2c: add    DWORD PTR [rcx],eax
0x140dcdb2e: add    DWORD PTR [rcx],eax
0x140dcdb30: add    DWORD PTR [rax],eax
0x140dcdb32: add    DWORD PTR [rcx],eax
0x140dcdb34: add    DWORD PTR [rcx],eax
0x140dcdb36: add    DWORD PTR [rcx],eax
0x140dcdb38: add    DWORD PTR [rcx],eax
0x140dcdb3a: add    DWORD PTR [rcx],eax
0x140dcdb3c: add    DWORD PTR [rcx],eax
0x140dcdb3e: add    DWORD PTR [rcx],eax
0x140dcdb40: add    DWORD PTR [rax],eax
0x140dcdb42: add    DWORD PTR [rax],eax
0x140dcdb44: add    DWORD PTR [rax],eax
0x140dcdb46: add    BYTE PTR [rcx],al
0x140dcdb48: add    DWORD PTR [rcx],eax
0x140dcdb4a: add    DWORD PTR [rcx],eax
0x140dcdb4c: add    DWORD PTR [rcx],eax
0x140dcdb4e: add    BYTE PTR [rax],al
0x140dcdb50: add    DWORD PTR [rcx],eax
0x140dcdb52: add    DWORD PTR [rcx],eax
0x140dcdb54: add    DWORD PTR [rax],eax
0x140dcdb56: add    BYTE PTR [rax],al
0x140dcdb58: add    BYTE PTR [rax],al
0x140dcdb5a: add    DWORD PTR [rcx],eax
0x140dcdb5c: add    DWORD PTR [rcx],eax
0x140dcdb5e: add    DWORD PTR [rcx],eax
0x140dcdb60: add    DWORD PTR [rcx],eax
0x140dcdb62: add    DWORD PTR [rcx],eax
0x140dcdb64: add    DWORD PTR [rcx],eax
0x140dcdb66: add    DWORD PTR [rcx],eax
0x140dcdb68: add    DWORD PTR [rcx],eax
0x140dcdb6a: add    DWORD PTR [rcx],eax
0x140dcdb6c: add    DWORD PTR [rcx],eax
0x140dcdb6e: add    DWORD PTR [rcx],eax
0x140dcdb70: add    DWORD PTR [rcx],eax
0x140dcdb72: add    DWORD PTR [rcx],eax
0x140dcdb74: add    DWORD PTR [rcx],eax
0x140dcdb76: add    DWORD PTR [rcx],eax
0x140dcdb78: add    DWORD PTR [rcx],eax
0x140dcdb7a: add    DWORD PTR [rcx],eax
0x140dcdb7c: add    DWORD PTR [rcx],eax
0x140dcdb7e: add    DWORD PTR [rcx],eax
0x140dcdb80: add    DWORD PTR [rcx],eax
0x140dcdb82: add    DWORD PTR [rcx],eax
0x140dcdb84: add    DWORD PTR [rcx],eax
0x140dcdb86: add    DWORD PTR [rcx],eax
0x140dcdb88: add    DWORD PTR [rcx],eax
0x140dcdb8a: add    DWORD PTR [rcx],eax
0x140dcdb8c: add    DWORD PTR [rcx],eax
0x140dcdb8e: add    DWORD PTR [rcx],eax
0x140dcdb90: add    DWORD PTR [rcx],eax
0x140dcdb92: add    DWORD PTR [rcx],eax
0x140dcdb94: add    DWORD PTR [rcx],eax
0x140dcdb96: add    DWORD PTR [rcx],eax
0x140dcdb98: add    DWORD PTR [rcx],eax
0x140dcdb9a: add    DWORD PTR [rcx],eax
0x140dcdb9c: add    DWORD PTR [rcx],eax
0x140dcdb9e: add    DWORD PTR [rcx],eax
0x140dcdba0: add    DWORD PTR [rcx],eax
0x140dcdba2: add    DWORD PTR [rcx],eax
0x140dcdba4: add    DWORD PTR [rcx],eax
0x140dcdba6: add    DWORD PTR [rcx],eax
0x140dcdba8: add    DWORD PTR [rcx],eax
0x140dcdbaa: add    DWORD PTR [rcx],eax
0x140dcdbac: add    BYTE PTR [rcx],al
0x140dcdbae: add    DWORD PTR [rcx],eax
0x140dcdbb0: add    DWORD PTR [rcx],eax
0x140dcdbb2: add    DWORD PTR [rcx],eax
0x140dcdbb4: add    DWORD PTR [rcx],eax
0x140dcdbb6: add    DWORD PTR [rcx],eax
0x140dcdbb8: add    DWORD PTR [rcx],eax
0x140dcdbba: add    DWORD PTR [rcx],eax
0x140dcdbbc: add    DWORD PTR [rcx],eax
0x140dcdbbe: add    DWORD PTR [rcx],eax
0x140dcdbc0: add    DWORD PTR [rcx],eax
0x140dcdbc2: add    DWORD PTR [rcx],eax
0x140dcdbc4: add    DWORD PTR [rcx],eax
0x140dcdbc6: add    DWORD PTR [rcx],eax
0x140dcdbc8: add    DWORD PTR [rcx],eax
0x140dcdbca: add    DWORD PTR [rcx],eax
0x140dcdbcc: add    DWORD PTR [rcx],eax
0x140dcdbce: add    DWORD PTR [rcx],eax
0x140dcdbd0: add    DWORD PTR [rcx],eax
0x140dcdbd2: add    DWORD PTR [rcx],eax
0x140dcdbd4: add    DWORD PTR [rcx],eax
0x140dcdbd6: add    DWORD PTR [rcx],eax
0x140dcdbd8: add    DWORD PTR [rcx],eax
0x140dcdbda: add    DWORD PTR [rcx],eax
0x140dcdbdc: add    DWORD PTR [rcx],eax
0x140dcdbde: add    DWORD PTR [rcx],eax
0x140dcdbe0: add    DWORD PTR [rcx],eax
0x140dcdbe2: add    DWORD PTR [rax],eax
