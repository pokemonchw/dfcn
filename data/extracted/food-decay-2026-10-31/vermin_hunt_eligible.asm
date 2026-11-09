140a45470: movsx  r8,WORD PTR [rcx]
140a45474: mov    r11,rcx
140a45477: movsx  r10,WORD PTR [rcx+0x2]
140a4547c: mov    rdx,QWORD PTR [rip+0x1aa75ed]        # 0x1424eca70
140a45483: mov    r9,QWORD PTR [rip+0x1aa75de]        # 0x1424eca68
140a4548a: test   r8w,r8w
140a4548e: js     0x140a4552b
140a45494: mov    rax,rdx
140a45497: sub    rax,r9
140a4549a: sar    rax,0x3
140a4549e: cmp    r8,rax
140a454a1: jae    0x140a454f0
140a454a3: test   r10w,r10w
140a454a7: js     0x140a454eb
140a454a9: mov    rax,QWORD PTR [r9+r8*8]
140a454ad: mov    rcx,QWORD PTR [rax+0x178]
140a454b4: mov    rax,QWORD PTR [rax+0x180]
140a454bb: sub    rax,rcx
140a454be: sar    rax,0x3
140a454c2: cmp    r10,rax
140a454c5: jae    0x140a454eb
140a454c7: mov    rax,QWORD PTR [rcx+r10*8]
140a454cb: cmp    DWORD PTR [rax+0x6b0],0xc
140a454d2: jle    0x140a454e5
140a454d4: mov    rax,QWORD PTR [rax+0x6a8]
140a454db: cmp    BYTE PTR [rax+0xc],0x0
140a454df: jge    0x140a454e5
140a454e1: mov    al,0x1
140a454e3: jmp    0x140a454e7
140a454e5: xor    al,al
140a454e7: test   al,al
140a454e9: jne    0x140a45566
140a454eb: mov    rcx,r8
140a454ee: jmp    0x140a45508
140a454f0: test   r8w,r8w
140a454f4: js     0x140a4552b
140a454f6: mov    rax,rdx
140a454f9: mov    rcx,r8
140a454fc: sub    rax,r9
140a454ff: sar    rax,0x3
140a45503: cmp    r8,rax
140a45506: jae    0x140a4552b
140a45508: mov    rax,QWORD PTR [r9+rcx*8]
140a4550c: cmp    DWORD PTR [rax+0x1b0],0x0
140a45513: jle    0x140a45525
140a45515: mov    rax,QWORD PTR [rax+0x1a8]
140a4551c: test   BYTE PTR [rax],0x40
140a4551f: je     0x140a45525
140a45521: mov    al,0x1
140a45523: jmp    0x140a45527
140a45525: xor    al,al
140a45527: test   al,al
140a45529: jne    0x140a45566
140a4552b: movsx  rcx,WORD PTR [r11]
140a4552f: test   cx,cx
140a45532: js     0x140a45569
140a45534: mov    rax,rdx
140a45537: sub    rax,r9
140a4553a: sar    rax,0x3
140a4553e: cmp    rcx,rax
140a45541: jae    0x140a45569
140a45543: mov    rax,QWORD PTR [r9+rcx*8]
140a45547: cmp    DWORD PTR [rax+0x1b0],0x0
140a4554e: jle    0x140a45560
140a45550: mov    rax,QWORD PTR [rax+0x1a8]
140a45557: cmp    BYTE PTR [rax],0x0
140a4555a: jge    0x140a45560
140a4555c: mov    al,0x1
140a4555e: jmp    0x140a45562
140a45560: xor    al,al
140a45562: test   al,al
140a45564: je     0x140a45569
140a45566: xor    al,al
140a45568: ret
140a45569: movsx  r8,WORD PTR [r11+0x2]
140a4556e: test   cx,cx
140a45571: js     0x140a455bd
140a45573: sub    rdx,r9
140a45576: sar    rdx,0x3
140a4557a: cmp    rcx,rdx
140a4557d: jae    0x140a455bd
140a4557f: test   r8w,r8w
140a45583: js     0x140a455bd
140a45585: mov    rax,QWORD PTR [r9+rcx*8]
140a45589: mov    rcx,QWORD PTR [rax+0x178]
140a45590: mov    rax,QWORD PTR [rax+0x180]
140a45597: sub    rax,rcx
140a4559a: sar    rax,0x3
140a4559e: cmp    r8,rax
140a455a1: jae    0x140a455bd
140a455a3: mov    rax,QWORD PTR [rcx+r8*8]
140a455a7: cmp    DWORD PTR [rax+0x6b0],0x9
140a455ae: jle    0x140a455bd
140a455b0: mov    rax,QWORD PTR [rax+0x6a8]
140a455b7: test   BYTE PTR [rax+0x9],0x40
140a455bb: jne    0x140a45566
140a455bd: mov    al,0x1
140a455bf: ret
