; classic; PE:6a70b91c:0270a000; fortress-render-wrapper; RVA 0x8ba4f0..0x8bba48
0x008ba4f0: mov    QWORD PTR [rsp+0x18],rbx
0x008ba4f5: mov    QWORD PTR [rsp+0x20],rsi
0x008ba4fa: push   rbp
0x008ba4fb: push   rdi
0x008ba4fc: push   r13
0x008ba4fe: push   r14
0x008ba500: push   r15
0x008ba502: mov    rbp,rsp
0x008ba505: sub    rsp,0x80
0x008ba50c: mov    rax,QWORD PTR [rip+0xfdbb2d]        # 0x141896040
0x008ba513: xor    rax,rsp
0x008ba516: mov    QWORD PTR [rbp-0x10],rax
0x008ba51a: cmp    BYTE PTR [rip+0x1d8a043],0x0        # 0x142644564
0x008ba521: jne    0x1408ba8e8
0x008ba527: mov    BYTE PTR [rip+0x1d8a01a],0x0        # 0x142644548
0x008ba52e: mov    DWORD PTR [rip+0x1d8a014],0xffffffff        # 0x14264454c
0x008ba538: cmp    BYTE PTR [rip+0xfe7049],0x0        # 0x1418a1588
0x008ba53f: setne  BYTE PTR [rip+0x1d89fba]        # 0x142644500
0x008ba546: call   0x1403d4510
0x008ba54b: mov    eax,DWORD PTR [rip+0xfdbd43]        # 0x141896294
0x008ba551: cmp    BYTE PTR [rip+0x1ad9b96],0x0        # 0x1423940ee
0x008ba558: je     0x1408bb6ed
0x008ba55e: cmp    eax,0x4
0x008ba561: je     0x1408bb6ed
0x008ba567: lea    rdx,[rbp-0x5c]
0x008ba56b: lea    rcx,[rbp-0x60]
0x008ba56f: call   0x140c303b0
0x008ba574: mov    esi,DWORD PTR [rbp-0x60]
0x008ba577: add    esi,0x5
0x008ba57a: mov    ebx,DWORD PTR [rbp-0x5c]
0x008ba57d: add    ebx,0xfffffffb
0x008ba580: mov    eax,DWORD PTR [rip+0x1b0d0f2]        # 0x1423c7678
0x008ba586: cdq
0x008ba587: sub    eax,edx
0x008ba589: sar    eax,1
0x008ba58b: mov    r13d,eax
0x008ba58e: lea    r15d,[rax-0x5]
0x008ba592: lea    r14d,[rax+0x4]
0x008ba596: mov    DWORD PTR [rip+0x1d89dcc],0x1000006        # 0x14264436c
0x008ba5a0: mov    edi,r15d
0x008ba5a3: cmp    r15d,r14d
0x008ba5a6: jg     0x1408ba66a
0x008ba5ac: nop    DWORD PTR [rax+0x0]
0x008ba5b0: mov    r11d,esi
0x008ba5b3: cmp    esi,ebx
0x008ba5b5: jg     0x1408ba65f
0x008ba5bb: nop    DWORD PTR [rax+rax*1+0x0]
0x008ba5c0: mov    DWORD PTR [rip+0x1d89d9d],r11d        # 0x142644364
0x008ba5c7: mov    DWORD PTR [rip+0x1d89d9b],edi        # 0x142644368
0x008ba5cd: cmp    edi,r15d
0x008ba5d0: jne    0x1408ba5fb
0x008ba5d2: cmp    r11d,esi
0x008ba5d5: jne    0x1408ba5df
0x008ba5d7: mov    edx,DWORD PTR [rip+0x1b105b7]        # 0x1423cab94
0x008ba5dd: jmp    0x1408ba647
0x008ba5df: lea    rcx,[rip+0x1d89cfa]        # 0x1426442e0
0x008ba5e6: cmp    r11d,ebx
0x008ba5e9: jne    0x1408ba5f3
0x008ba5eb: mov    edx,DWORD PTR [rip+0x1b105ab]        # 0x1423cab9c
0x008ba5f1: jmp    0x1408ba64e
0x008ba5f3: mov    edx,DWORD PTR [rip+0x1b1059f]        # 0x1423cab98
0x008ba5f9: jmp    0x1408ba64e
0x008ba5fb: cmp    edi,r14d
0x008ba5fe: jne    0x1408ba629
0x008ba600: cmp    r11d,esi
0x008ba603: jne    0x1408ba60d
0x008ba605: mov    edx,DWORD PTR [rip+0x1b105a1]        # 0x1423cabac
0x008ba60b: jmp    0x1408ba647
0x008ba60d: lea    rcx,[rip+0x1d89ccc]        # 0x1426442e0
0x008ba614: cmp    r11d,ebx
0x008ba617: jne    0x1408ba621
0x008ba619: mov    edx,DWORD PTR [rip+0x1b10595]        # 0x1423cabb4
0x008ba61f: jmp    0x1408ba64e
0x008ba621: mov    edx,DWORD PTR [rip+0x1b10589]        # 0x1423cabb0
0x008ba627: jmp    0x1408ba64e
0x008ba629: cmp    r11d,esi
0x008ba62c: jne    0x1408ba636
0x008ba62e: mov    edx,DWORD PTR [rip+0x1b1056c]        # 0x1423caba0
0x008ba634: jmp    0x1408ba647
0x008ba636: cmp    r11d,ebx
0x008ba639: mov    edx,DWORD PTR [rip+0x1b10569]        # 0x1423caba8
0x008ba63f: je     0x1408ba647
0x008ba641: mov    edx,DWORD PTR [rip+0x1b1055d]        # 0x1423caba4
0x008ba647: lea    rcx,[rip+0x1d89c92]        # 0x1426442e0
0x008ba64e: call   0x140ad7b10
0x008ba653: inc    r11d
0x008ba656: cmp    r11d,ebx
0x008ba659: jle    0x1408ba5c0
0x008ba65f: inc    edi
0x008ba661: cmp    edi,r14d
0x008ba664: jle    0x1408ba5b0
0x008ba66a: mov    DWORD PTR [rip+0x1d89cf8],0x1010007        # 0x14264436c
0x008ba674: mov    r9d,DWORD PTR [rip+0x1ad9bc5]        # 0x142394240
0x008ba67b: mov    r8,QWORD PTR [rip+0x1ad9bfe]        # 0x142394280
0x008ba682: mov    r10,QWORD PTR [rip+0x1ad9bef]        # 0x142394278
0x008ba689: cmp    r9d,0x3
0x008ba68d: jne    0x1408ba6ad
0x008ba68f: mov    ecx,DWORD PTR [rip+0x1ad9c07]        # 0x14239429c
0x008ba695: cmp    ecx,0xffffffff
0x008ba698: je     0x1408ba6cd
0x008ba69a: mov    eax,0x10624dd3
0x008ba69f: imul   ecx
0x008ba6a1: sar    edx,0x6
0x008ba6a4: mov    eax,edx
0x008ba6a6: shr    eax,0x1f
0x008ba6a9: add    edx,eax
0x008ba6ab: jmp    0x1408ba6ca
0x008ba6ad: jle    0x1408ba6cd
0x008ba6af: mov    rcx,r8
0x008ba6b2: sub    rcx,r10
0x008ba6b5: sar    rcx,0x3
0x008ba6b9: mov    eax,0x10624dd3
0x008ba6be: imul   ecx
0x008ba6c0: sar    edx,0x6
0x008ba6c3: mov    ecx,edx
0x008ba6c5: shr    ecx,0x1f
0x008ba6c8: add    edx,ecx
0x008ba6ca: add    r9d,edx
0x008ba6cd: sub    r8,r10
0x008ba6d0: sar    r8,0x3
0x008ba6d4: mov    eax,0x10624dd3
0x008ba6d9: imul   r8d
0x008ba6dc: sar    edx,0x6
0x008ba6df: mov    r8d,edx
0x008ba6e2: shr    r8d,0x1f
0x008ba6e6: add    edx,0x36
0x008ba6e9: add    r8d,edx
0x008ba6ec: add    esi,0x5
0x008ba6ef: add    ebx,0xfffffffa
0x008ba6f2: mov    ecx,ebx
0x008ba6f4: sub    ecx,esi
0x008ba6f6: xor    eax,eax
0x008ba6f8: test   r9d,r9d
0x008ba6fb: cmovns eax,r9d
0x008ba6ff: imul   eax,ecx
0x008ba702: cdq
0x008ba703: idiv   r8d
0x008ba706: add    eax,esi
0x008ba708: mov    ecx,esi
0x008ba70a: cmp    eax,esi
0x008ba70c: cmovge ecx,eax
0x008ba70f: lea    edi,[rbx-0x1]
0x008ba712: cmp    ecx,edi
0x008ba714: cmovle edi,ecx
0x008ba717: add    r14d,0xfffffffe
0x008ba71b: mov    r11d,esi
0x008ba71e: cmp    esi,ebx
0x008ba720: jg     0x1408ba796
0x008ba722: mov    DWORD PTR [rip+0x1d89c3b],r11d        # 0x142644364
0x008ba729: mov    DWORD PTR [rip+0x1d89c38],r14d        # 0x142644368
0x008ba730: cmp    r11d,edi
0x008ba733: jg     0x1408ba761
0x008ba735: cmp    r11d,esi
0x008ba738: jne    0x1408ba742
0x008ba73a: mov    edx,DWORD PTR [rip+0x1b10040]        # 0x1423ca780
0x008ba740: jmp    0x1408ba77f
0x008ba742: xor    r8d,r8d
0x008ba745: lea    rcx,[rip+0x1d89b94]        # 0x1426442e0
0x008ba74c: cmp    r11d,ebx
0x008ba74f: jne    0x1408ba759
0x008ba751: mov    edx,DWORD PTR [rip+0x1b10031]        # 0x1423ca788
0x008ba757: jmp    0x1408ba789
0x008ba759: mov    edx,DWORD PTR [rip+0x1b10025]        # 0x1423ca784
0x008ba75f: jmp    0x1408ba789
0x008ba761: cmp    r11d,esi
0x008ba764: jne    0x1408ba76e
0x008ba766: mov    edx,DWORD PTR [rip+0x1b10020]        # 0x1423ca78c
0x008ba76c: jmp    0x1408ba77f
0x008ba76e: cmp    r11d,ebx
0x008ba771: mov    edx,DWORD PTR [rip+0x1b1001d]        # 0x1423ca794
0x008ba777: je     0x1408ba77f
0x008ba779: mov    edx,DWORD PTR [rip+0x1b10011]        # 0x1423ca790
0x008ba77f: xor    r8d,r8d
0x008ba782: lea    rcx,[rip+0x1d89b57]        # 0x1426442e0
0x008ba789: call   0x140ad8140
0x008ba78e: inc    r11d
0x008ba791: cmp    r11d,ebx
0x008ba794: jle    0x1408ba722
0x008ba796: mov    DWORD PTR [rip+0x1d89bcc],0x1010007        # 0x14264436c
0x008ba7a0: mov    DWORD PTR [rip+0x1d89bbe],esi        # 0x142644364
0x008ba7a6: lea    eax,[r14-0x5]
0x008ba7aa: mov    DWORD PTR [rip+0x1d89bb8],eax        # 0x142644368
0x008ba7b0: xorps  xmm0,xmm0
0x008ba7b3: movups XMMWORD PTR [rbp-0x30],xmm0
0x008ba7b7: movdqa xmm1,XMMWORD PTR [rip+0xecb311]        # 0x141785ad0
0x008ba7bf: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x008ba7c4: movsd  xmm0,QWORD PTR [rip+0xd44d5c]        # 0x1415ff528
0x008ba7cc: movsd  QWORD PTR [rbp-0x30],xmm0
0x008ba7d1: movzx  eax,WORD PTR [rip+0xd44d58]        # 0x1415ff530
0x008ba7d8: mov    WORD PTR [rbp-0x28],ax
0x008ba7dc: movzx  eax,BYTE PTR [rip+0xd44d4f]        # 0x1415ff532
0x008ba7e3: mov    BYTE PTR [rbp-0x26],al
0x008ba7e6: mov    BYTE PTR [rbp-0x25],0x0
0x008ba7ea: xor    r9d,r9d
0x008ba7ed: lea    rdx,[rbp-0x30]
0x008ba7f1: lea    rcx,[rip+0x1d89ae8]        # 0x1426442e0
0x008ba7f8: call   0x140ad69a0
0x008ba7fd: nop
0x008ba7fe: lea    rcx,[rbp-0x30]
0x008ba802: call   0x14006f7e0
0x008ba807: mov    DWORD PTR [rip+0x1d89b5b],0x1010007        # 0x14264436c
0x008ba811: mov    DWORD PTR [rip+0x1d89b4d],esi        # 0x142644364
0x008ba817: mov    DWORD PTR [rip+0x1d89b4a],r13d        # 0x142644368
0x008ba81e: movsxd rax,DWORD PTR [rip+0x1ad9a1b]        # 0x142394240
0x008ba825: cmp    eax,0x33
0x008ba828: ja     0x1408ba8d3
0x008ba82e: lea    rdx,[rip+0xffffffffff7457cb]        # 0x140000000
0x008ba835: mov    ecx,DWORD PTR [rdx+rax*4+0x8bb978]
0x008ba83c: add    rcx,rdx
0x008ba83f: jmp    rcx
0x008ba841: xorps  xmm0,xmm0
0x008ba844: movups XMMWORD PTR [rbp-0x30],xmm0
0x008ba848: movdqa xmm1,XMMWORD PTR [rip+0xecb2c0]        # 0x141785b10
0x008ba850: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x008ba855: movsd  xmm0,QWORD PTR [rip+0xd44cdb]        # 0x1415ff538
0x008ba85d: movsd  QWORD PTR [rbp-0x30],xmm0
0x008ba862: mov    eax,DWORD PTR [rip+0xd44cd8]        # 0x1415ff540
0x008ba868: mov    DWORD PTR [rbp-0x28],eax
0x008ba86b: movzx  eax,WORD PTR [rip+0xd44cd2]        # 0x1415ff544
0x008ba872: mov    WORD PTR [rbp-0x24],ax
0x008ba876: movzx  eax,BYTE PTR [rip+0xd44cc9]        # 0x1415ff546
0x008ba87d: mov    BYTE PTR [rbp-0x22],al
0x008ba880: mov    BYTE PTR [rbp-0x21],0x0
0x008ba884: xor    r9d,r9d
0x008ba887: lea    rdx,[rbp-0x30]
0x008ba88b: lea    rcx,[rip+0x1d89a4e]        # 0x1426442e0
0x008ba892: call   0x140ad69a0
0x008ba897: nop
0x008ba898: mov    rdx,QWORD PTR [rbp-0x18]
0x008ba89c: cmp    rdx,0xf
0x008ba8a0: jbe    0x1408ba8d3
0x008ba8a2: inc    rdx
0x008ba8a5: mov    rcx,QWORD PTR [rbp-0x30]
0x008ba8a9: mov    rax,rcx
0x008ba8ac: cmp    rdx,0x1000
0x008ba8b3: jb     0x1408ba8ce
0x008ba8b5: add    rdx,0x27
0x008ba8b9: mov    rcx,QWORD PTR [rcx-0x8]
0x008ba8bd: sub    rax,rcx
0x008ba8c0: add    rax,0xfffffffffffffff8
0x008ba8c4: cmp    rax,0x1f
0x008ba8c8: ja     0x1408bb970
0x008ba8ce: call   0x1415345f0
0x008ba8d3: cmp    BYTE PTR [rip+0xfe6cae],0x0        # 0x1418a1588
0x008ba8da: je     0x1408ba8e8
0x008ba8dc: lea    rcx,[rip+0xfe6ca5]        # 0x1418a1588
0x008ba8e3: call   0x1401e8ab0
0x008ba8e8: mov    rcx,QWORD PTR [rbp-0x10]
0x008ba8ec: xor    rcx,rsp
0x008ba8ef: call   0x1415345d0
0x008ba8f4: lea    r11,[rsp+0x80]
0x008ba8fc: mov    rbx,QWORD PTR [r11+0x40]
0x008ba900: mov    rsi,QWORD PTR [r11+0x48]
0x008ba904: mov    rsp,r11
0x008ba907: pop    r15
0x008ba909: pop    r14
0x008ba90b: pop    r13
0x008ba90d: pop    rdi
0x008ba90e: pop    rbp
0x008ba90f: ret
0x008ba910: lea    rdx,[rip+0xd44c31]        # 0x1415ff548
0x008ba917: lea    rcx,[rbp-0x58]
0x008ba91b: call   0x1400680e0
0x008ba920: nop
0x008ba921: xor    r9d,r9d
0x008ba924: lea    rdx,[rbp-0x58]
0x008ba928: lea    rcx,[rip+0x1d899b1]        # 0x1426442e0
0x008ba92f: call   0x140ad69a0
0x008ba934: nop
0x008ba935: lea    rcx,[rbp-0x58]
0x008ba939: call   0x14006f7e0
0x008ba93e: jmp    0x1408ba8d3
0x008ba940: lea    rdx,[rip+0xd44c21]        # 0x1415ff568
0x008ba947: lea    rcx,[rbp-0x58]
0x008ba94b: call   0x1400680e0
0x008ba950: nop
0x008ba951: xor    r9d,r9d
0x008ba954: lea    rdx,[rbp-0x58]
0x008ba958: lea    rcx,[rip+0x1d89981]        # 0x1426442e0
0x008ba95f: call   0x140ad69a0
0x008ba964: nop
0x008ba965: lea    rcx,[rbp-0x58]
0x008ba969: call   0x14006f7e0
0x008ba96e: jmp    0x1408ba8d3
0x008ba973: lea    rdx,[rip+0xd44c06]        # 0x1415ff580
0x008ba97a: lea    rcx,[rbp-0x58]
0x008ba97e: call   0x1400680e0
0x008ba983: nop
0x008ba984: xor    r9d,r9d
0x008ba987: lea    rdx,[rbp-0x58]
0x008ba98b: lea    rcx,[rip+0x1d8994e]        # 0x1426442e0
0x008ba992: call   0x140ad69a0
0x008ba997: nop
0x008ba998: lea    rcx,[rbp-0x58]
0x008ba99c: call   0x14006f7e0
0x008ba9a1: cmp    DWORD PTR [rip+0x1ad98f4],0xffffffff        # 0x14239429c
0x008ba9a8: je     0x1408ba8d3
0x008ba9ae: lea    rcx,[rbp-0x58]
0x008ba9b2: call   0x14006f620
0x008ba9b7: nop
0x008ba9b8: lea    rdx,[rbp-0x58]
0x008ba9bc: mov    ecx,DWORD PTR [rip+0x1ad98da]        # 0x14239429c
0x008ba9c2: call   0x140529db0
0x008ba9c7: xor    r9d,r9d
0x008ba9ca: lea    rdx,[rbp-0x58]
0x008ba9ce: lea    rcx,[rip+0x1d8990b]        # 0x1426442e0
0x008ba9d5: call   0x140ad69a0
0x008ba9da: mov    r8b,0x1
0x008ba9dd: mov    dl,0x2f
0x008ba9df: lea    rcx,[rip+0x1d898fa]        # 0x1426442e0
0x008ba9e6: call   0x1400bb120
0x008ba9eb: mov    rcx,QWORD PTR [rip+0x1ad988e]        # 0x142394280
0x008ba9f2: sub    rcx,QWORD PTR [rip+0x1ad987f]        # 0x142394278
0x008ba9f9: sar    rcx,0x3
0x008ba9fd: lea    rdx,[rbp-0x58]
0x008baa01: call   0x140529db0
0x008baa06: xor    r9d,r9d
0x008baa09: lea    rdx,[rbp-0x58]
0x008baa0d: lea    rcx,[rip+0x1d898cc]        # 0x1426442e0
0x008baa14: call   0x140ad69a0
0x008baa19: nop
0x008baa1a: lea    rcx,[rbp-0x58]
0x008baa1e: call   0x14006f7e0
0x008baa23: jmp    0x1408ba8d3
0x008baa28: lea    rdx,[rip+0xd44b69]        # 0x1415ff598
0x008baa2f: lea    rcx,[rbp-0x58]
0x008baa33: call   0x1400680e0
0x008baa38: nop
0x008baa39: xor    r9d,r9d
0x008baa3c: lea    rdx,[rbp-0x58]
0x008baa40: lea    rcx,[rip+0x1d89899]        # 0x1426442e0
0x008baa47: call   0x140ad69a0
0x008baa4c: nop
0x008baa4d: lea    rcx,[rbp-0x58]
0x008baa51: call   0x14006f7e0
0x008baa56: jmp    0x1408ba8d3
0x008baa5b: lea    rdx,[rip+0xd44b4e]        # 0x1415ff5b0
0x008baa62: lea    rcx,[rbp-0x58]
0x008baa66: call   0x1400680e0
0x008baa6b: nop
0x008baa6c: xor    r9d,r9d
0x008baa6f: lea    rdx,[rbp-0x58]
0x008baa73: lea    rcx,[rip+0x1d89866]        # 0x1426442e0
0x008baa7a: call   0x140ad69a0
0x008baa7f: nop
0x008baa80: lea    rcx,[rbp-0x58]
0x008baa84: call   0x14006f7e0
0x008baa89: jmp    0x1408ba8d3
0x008baa8e: xorps  xmm0,xmm0
0x008baa91: movups XMMWORD PTR [rbp-0x58],xmm0
0x008baa95: mov    ecx,0x20
0x008baa9a: call   0x140070760
0x008baa9f: mov    QWORD PTR [rbp-0x58],rax
0x008baaa3: movdqa xmm0,XMMWORD PTR [rip+0xecb115]        # 0x141785bc0
0x008baaab: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008baab0: movups xmm0,XMMWORD PTR [rip+0xd44b09]        # 0x1415ff5c0
0x008baab7: movups XMMWORD PTR [rax],xmm0
0x008baaba: movsd  xmm0,QWORD PTR [rip+0xd44b0e]        # 0x1415ff5d0
0x008baac2: movsd  QWORD PTR [rax+0x10],xmm0
0x008baac7: movzx  ecx,WORD PTR [rip+0xd44b0a]        # 0x1415ff5d8
0x008baace: mov    WORD PTR [rax+0x18],cx
0x008baad2: mov    BYTE PTR [rax+0x1a],0x0
0x008baad6: xor    r9d,r9d
0x008baad9: lea    rdx,[rbp-0x58]
0x008baadd: lea    rcx,[rip+0x1d897fc]        # 0x1426442e0
0x008baae4: call   0x140ad69a0
0x008baae9: nop
0x008baaea: jmp    0x1408bacb0
0x008baaef: xorps  xmm0,xmm0
0x008baaf2: movups XMMWORD PTR [rbp-0x58],xmm0
0x008baaf6: mov    ecx,0x20
0x008baafb: call   0x140070760
0x008bab00: mov    QWORD PTR [rbp-0x58],rax
0x008bab04: movdqa xmm0,XMMWORD PTR [rip+0xecb044]        # 0x141785b50
0x008bab0c: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bab11: movups xmm0,XMMWORD PTR [rip+0xd44ac8]        # 0x1415ff5e0
0x008bab18: movups XMMWORD PTR [rax],xmm0
0x008bab1b: movzx  ecx,WORD PTR [rip+0xd44ace]        # 0x1415ff5f0
0x008bab22: mov    WORD PTR [rax+0x10],cx
0x008bab26: movzx  ecx,BYTE PTR [rip+0xd44ac5]        # 0x1415ff5f2
0x008bab2d: mov    BYTE PTR [rax+0x12],cl
0x008bab30: mov    BYTE PTR [rax+0x13],0x0
0x008bab34: xor    r9d,r9d
0x008bab37: lea    rdx,[rbp-0x58]
0x008bab3b: lea    rcx,[rip+0x1d8979e]        # 0x1426442e0
0x008bab42: call   0x140ad69a0
0x008bab47: nop
0x008bab48: jmp    0x1408bacb0
0x008bab4d: xorps  xmm0,xmm0
0x008bab50: movups XMMWORD PTR [rbp-0x30],xmm0
0x008bab54: movdqa xmm1,XMMWORD PTR [rip+0xecafb4]        # 0x141785b10
0x008bab5c: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x008bab61: movsd  xmm0,QWORD PTR [rip+0xd44a8f]        # 0x1415ff5f8
0x008bab69: movsd  QWORD PTR [rbp-0x30],xmm0
0x008bab6e: mov    eax,DWORD PTR [rip+0xd44a8c]        # 0x1415ff600
0x008bab74: mov    DWORD PTR [rbp-0x28],eax
0x008bab77: movzx  eax,WORD PTR [rip+0xd44a86]        # 0x1415ff604
0x008bab7e: mov    WORD PTR [rbp-0x24],ax
0x008bab82: movzx  eax,BYTE PTR [rip+0xd44a7d]        # 0x1415ff606
0x008bab89: mov    BYTE PTR [rbp-0x22],al
0x008bab8c: mov    BYTE PTR [rbp-0x21],0x0
0x008bab90: xor    r9d,r9d
0x008bab93: lea    rdx,[rbp-0x30]
0x008bab97: lea    rcx,[rip+0x1d89742]        # 0x1426442e0
0x008bab9e: call   0x140ad69a0
0x008baba3: nop
0x008baba4: jmp    0x1408ba898
0x008baba9: xorps  xmm0,xmm0
0x008babac: movups XMMWORD PTR [rbp-0x30],xmm0
0x008babb0: movdqa xmm1,XMMWORD PTR [rip+0xecaf58]        # 0x141785b10
0x008babb8: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x008babbd: movsd  xmm0,QWORD PTR [rip+0xd44d9b]        # 0x1415ff960
0x008babc5: movsd  QWORD PTR [rbp-0x30],xmm0
0x008babca: mov    eax,DWORD PTR [rip+0xd44d98]        # 0x1415ff968
0x008babd0: mov    DWORD PTR [rbp-0x28],eax
0x008babd3: movzx  eax,WORD PTR [rip+0xd44d92]        # 0x1415ff96c
0x008babda: mov    WORD PTR [rbp-0x24],ax
0x008babde: movzx  eax,BYTE PTR [rip+0xd44d89]        # 0x1415ff96e
0x008babe5: mov    BYTE PTR [rbp-0x22],al
0x008babe8: mov    BYTE PTR [rbp-0x21],0x0
0x008babec: xor    r9d,r9d
0x008babef: lea    rdx,[rbp-0x30]
0x008babf3: lea    rcx,[rip+0x1d896e6]        # 0x1426442e0
0x008babfa: call   0x140ad69a0
0x008babff: nop
0x008bac00: jmp    0x1408ba898
0x008bac05: xorps  xmm0,xmm0
0x008bac08: movups XMMWORD PTR [rbp-0x30],xmm0
0x008bac0c: movdqa xmm1,XMMWORD PTR [rip+0xecaeec]        # 0x141785b00
0x008bac14: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x008bac19: movsd  xmm0,QWORD PTR [rip+0xd44d4f]        # 0x1415ff970
0x008bac21: movsd  QWORD PTR [rbp-0x30],xmm0
0x008bac26: mov    eax,DWORD PTR [rip+0xd44d4c]        # 0x1415ff978
0x008bac2c: mov    DWORD PTR [rbp-0x28],eax
0x008bac2f: movzx  eax,WORD PTR [rip+0xd44d46]        # 0x1415ff97c
0x008bac36: mov    WORD PTR [rbp-0x24],ax
0x008bac3a: mov    BYTE PTR [rbp-0x22],0x0
0x008bac3e: xor    r9d,r9d
0x008bac41: lea    rdx,[rbp-0x30]
0x008bac45: lea    rcx,[rip+0x1d89694]        # 0x1426442e0
0x008bac4c: call   0x140ad69a0
0x008bac51: nop
0x008bac52: jmp    0x1408ba898
0x008bac57: xorps  xmm0,xmm0
0x008bac5a: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bac5e: mov    ecx,0x20
0x008bac63: call   0x140070760
0x008bac68: mov    QWORD PTR [rbp-0x58],rax
0x008bac6c: movdqa xmm0,XMMWORD PTR [rip+0xecaedc]        # 0x141785b50
0x008bac74: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bac79: movups xmm0,XMMWORD PTR [rip+0xd44d00]        # 0x1415ff980
0x008bac80: movups XMMWORD PTR [rax],xmm0
0x008bac83: movzx  ecx,WORD PTR [rip+0xd44d06]        # 0x1415ff990
0x008bac8a: mov    WORD PTR [rax+0x10],cx
0x008bac8e: movzx  ecx,BYTE PTR [rip+0xd44cfd]        # 0x1415ff992
0x008bac95: mov    BYTE PTR [rax+0x12],cl
0x008bac98: mov    BYTE PTR [rax+0x13],0x0
0x008bac9c: xor    r9d,r9d
0x008bac9f: lea    rdx,[rbp-0x58]
0x008baca3: lea    rcx,[rip+0x1d89636]        # 0x1426442e0
0x008bacaa: call   0x140ad69a0
0x008bacaf: nop
0x008bacb0: mov    rdx,QWORD PTR [rbp-0x40]
0x008bacb4: cmp    rdx,0xf
0x008bacb8: jbe    0x1408ba8d3
0x008bacbe: inc    rdx
0x008bacc1: mov    rcx,QWORD PTR [rbp-0x58]
0x008bacc5: jmp    0x1408ba8a9
0x008bacca: xorps  xmm0,xmm0
0x008baccd: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bacd1: mov    ecx,0x20
0x008bacd6: call   0x140070760
0x008bacdb: mov    QWORD PTR [rbp-0x58],rax
0x008bacdf: movdqa xmm0,XMMWORD PTR [rip+0xecae89]        # 0x141785b70
0x008bace7: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bacec: movups xmm0,XMMWORD PTR [rip+0xd44ca5]        # 0x1415ff998
0x008bacf3: movups XMMWORD PTR [rax],xmm0
0x008bacf6: mov    ecx,DWORD PTR [rip+0xd44cac]        # 0x1415ff9a8
0x008bacfc: mov    DWORD PTR [rax+0x10],ecx
0x008bacff: movzx  ecx,BYTE PTR [rip+0xd44ca6]        # 0x1415ff9ac
0x008bad06: mov    BYTE PTR [rax+0x14],cl
0x008bad09: mov    BYTE PTR [rax+0x15],0x0
0x008bad0d: xor    r9d,r9d
0x008bad10: lea    rdx,[rbp-0x58]
0x008bad14: lea    rcx,[rip+0x1d895c5]        # 0x1426442e0
0x008bad1b: call   0x140ad69a0
0x008bad20: nop
0x008bad21: jmp    0x1408bacb0
0x008bad23: xorps  xmm0,xmm0
0x008bad26: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bad2a: mov    ecx,0x20
0x008bad2f: call   0x140070760
0x008bad34: mov    QWORD PTR [rbp-0x58],rax
0x008bad38: movdqa xmm0,XMMWORD PTR [rip+0xecae10]        # 0x141785b50
0x008bad40: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bad45: movups xmm0,XMMWORD PTR [rip+0xd44c64]        # 0x1415ff9b0
0x008bad4c: movups XMMWORD PTR [rax],xmm0
0x008bad4f: movzx  ecx,WORD PTR [rip+0xd44c6a]        # 0x1415ff9c0
0x008bad56: mov    WORD PTR [rax+0x10],cx
0x008bad5a: movzx  ecx,BYTE PTR [rip+0xd44c61]        # 0x1415ff9c2
0x008bad61: mov    BYTE PTR [rax+0x12],cl
0x008bad64: mov    BYTE PTR [rax+0x13],0x0
0x008bad68: xor    r9d,r9d
0x008bad6b: lea    rdx,[rbp-0x58]
0x008bad6f: lea    rcx,[rip+0x1d8956a]        # 0x1426442e0
0x008bad76: call   0x140ad69a0
0x008bad7b: nop
0x008bad7c: jmp    0x1408bacb0
0x008bad81: xorps  xmm0,xmm0
0x008bad84: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bad88: mov    ecx,0x20
0x008bad8d: call   0x140070760
0x008bad92: mov    QWORD PTR [rbp-0x58],rax
0x008bad96: movdqa xmm0,XMMWORD PTR [rip+0xecada2]        # 0x141785b40
0x008bad9e: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bada3: movups xmm0,XMMWORD PTR [rip+0xd44c1e]        # 0x1415ff9c8
0x008badaa: movups XMMWORD PTR [rax],xmm0
0x008badad: movzx  ecx,WORD PTR [rip+0xd44c24]        # 0x1415ff9d8
0x008badb4: mov    WORD PTR [rax+0x10],cx
0x008badb8: mov    BYTE PTR [rax+0x12],0x0
0x008badbc: xor    r9d,r9d
0x008badbf: lea    rdx,[rbp-0x58]
0x008badc3: lea    rcx,[rip+0x1d89516]        # 0x1426442e0
0x008badca: call   0x140ad69a0
0x008badcf: nop
0x008badd0: jmp    0x1408bacb0
0x008badd5: xorps  xmm0,xmm0
0x008badd8: movups XMMWORD PTR [rbp-0x58],xmm0
0x008baddc: mov    ecx,0x20
0x008bade1: call   0x140070760
0x008bade6: mov    QWORD PTR [rbp-0x58],rax
0x008badea: movdqa xmm0,XMMWORD PTR [rip+0xecad7e]        # 0x141785b70
0x008badf2: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008badf7: movups xmm0,XMMWORD PTR [rip+0xd44be2]        # 0x1415ff9e0
0x008badfe: movups XMMWORD PTR [rax],xmm0
0x008bae01: mov    ecx,DWORD PTR [rip+0xd44be9]        # 0x1415ff9f0
0x008bae07: mov    DWORD PTR [rax+0x10],ecx
0x008bae0a: movzx  ecx,BYTE PTR [rip+0xd44be3]        # 0x1415ff9f4
0x008bae11: mov    BYTE PTR [rax+0x14],cl
0x008bae14: mov    BYTE PTR [rax+0x15],0x0
0x008bae18: xor    r9d,r9d
0x008bae1b: lea    rdx,[rbp-0x58]
0x008bae1f: lea    rcx,[rip+0x1d894ba]        # 0x1426442e0
0x008bae26: call   0x140ad69a0
0x008bae2b: nop
0x008bae2c: jmp    0x1408bacb0
0x008bae31: xorps  xmm0,xmm0
0x008bae34: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bae38: mov    ecx,0x20
0x008bae3d: call   0x140070760
0x008bae42: mov    QWORD PTR [rbp-0x58],rax
0x008bae46: movdqa xmm0,XMMWORD PTR [rip+0xecace2]        # 0x141785b30
0x008bae4e: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bae53: movups xmm0,XMMWORD PTR [rip+0xd44b9e]        # 0x1415ff9f8
0x008bae5a: movups XMMWORD PTR [rax],xmm0
0x008bae5d: movzx  ecx,BYTE PTR [rip+0xd44ba4]        # 0x1415ffa08
0x008bae64: mov    BYTE PTR [rax+0x10],cl
0x008bae67: mov    BYTE PTR [rax+0x11],0x0
0x008bae6b: xor    r9d,r9d
0x008bae6e: lea    rdx,[rbp-0x58]
0x008bae72: lea    rcx,[rip+0x1d89467]        # 0x1426442e0
0x008bae79: call   0x140ad69a0
0x008bae7e: nop
0x008bae7f: jmp    0x1408bacb0
0x008bae84: xorps  xmm0,xmm0
0x008bae87: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bae8b: mov    ecx,0x20
0x008bae90: call   0x140070760
0x008bae95: mov    QWORD PTR [rbp-0x58],rax
0x008bae99: movdqa xmm0,XMMWORD PTR [rip+0xecac9f]        # 0x141785b40
0x008baea1: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008baea6: movups xmm0,XMMWORD PTR [rip+0xd44b63]        # 0x1415ffa10
0x008baead: movups XMMWORD PTR [rax],xmm0
0x008baeb0: movzx  ecx,WORD PTR [rip+0xd44b69]        # 0x1415ffa20
0x008baeb7: mov    WORD PTR [rax+0x10],cx
0x008baebb: mov    BYTE PTR [rax+0x12],0x0
0x008baebf: xor    r9d,r9d
0x008baec2: lea    rdx,[rbp-0x58]
0x008baec6: lea    rcx,[rip+0x1d89413]        # 0x1426442e0
0x008baecd: call   0x140ad69a0
0x008baed2: nop
0x008baed3: jmp    0x1408bacb0
0x008baed8: xorps  xmm0,xmm0
0x008baedb: movups XMMWORD PTR [rbp-0x58],xmm0
0x008baedf: mov    ecx,0x30
0x008baee4: call   0x140070760
0x008baee9: mov    QWORD PTR [rbp-0x58],rax
0x008baeed: movdqa xmm0,XMMWORD PTR [rip+0xecad4b]        # 0x141785c40
0x008baef5: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008baefa: movups xmm0,XMMWORD PTR [rip+0xd44b27]        # 0x1415ffa28
0x008baf01: movups XMMWORD PTR [rax],xmm0
0x008baf04: movups xmm1,XMMWORD PTR [rip+0xd44b2d]        # 0x1415ffa38
0x008baf0b: movups XMMWORD PTR [rax+0x10],xmm1
0x008baf0f: movzx  ecx,WORD PTR [rip+0xd44b32]        # 0x1415ffa48
0x008baf16: mov    WORD PTR [rax+0x20],cx
0x008baf1a: mov    BYTE PTR [rax+0x22],0x0
0x008baf1e: xor    r9d,r9d
0x008baf21: lea    rdx,[rbp-0x58]
0x008baf25: lea    rcx,[rip+0x1d893b4]        # 0x1426442e0
0x008baf2c: call   0x140ad69a0
0x008baf31: nop
0x008baf32: jmp    0x1408bacb0
0x008baf37: xorps  xmm0,xmm0
0x008baf3a: movups XMMWORD PTR [rbp-0x58],xmm0
0x008baf3e: mov    ecx,0x20
0x008baf43: call   0x140070760
0x008baf48: mov    QWORD PTR [rbp-0x58],rax
0x008baf4c: movdqa xmm0,XMMWORD PTR [rip+0xecabcc]        # 0x141785b20
0x008baf54: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008baf59: movups xmm0,XMMWORD PTR [rip+0xd44af0]        # 0x1415ffa50
0x008baf60: movups XMMWORD PTR [rax],xmm0
0x008baf63: mov    BYTE PTR [rax+0x10],0x0
0x008baf67: xor    r9d,r9d
0x008baf6a: lea    rdx,[rbp-0x58]
0x008baf6e: lea    rcx,[rip+0x1d8936b]        # 0x1426442e0
0x008baf75: call   0x140ad69a0
0x008baf7a: nop
0x008baf7b: jmp    0x1408bacb0
0x008baf80: xorps  xmm0,xmm0
0x008baf83: movups XMMWORD PTR [rbp-0x58],xmm0
0x008baf87: mov    ecx,0x20
0x008baf8c: call   0x140070760
0x008baf91: mov    QWORD PTR [rbp-0x58],rax
0x008baf95: movdqa xmm0,XMMWORD PTR [rip+0xecaba3]        # 0x141785b40
0x008baf9d: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bafa2: movups xmm0,XMMWORD PTR [rip+0xd44abf]        # 0x1415ffa68
0x008bafa9: movups XMMWORD PTR [rax],xmm0
0x008bafac: movzx  ecx,WORD PTR [rip+0xd44ac5]        # 0x1415ffa78
0x008bafb3: mov    WORD PTR [rax+0x10],cx
0x008bafb7: mov    BYTE PTR [rax+0x12],0x0
0x008bafbb: xor    r9d,r9d
0x008bafbe: lea    rdx,[rbp-0x58]
0x008bafc2: lea    rcx,[rip+0x1d89317]        # 0x1426442e0
0x008bafc9: call   0x140ad69a0
0x008bafce: nop
0x008bafcf: jmp    0x1408bacb0
0x008bafd4: xorps  xmm0,xmm0
0x008bafd7: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bafdb: mov    ecx,0x20
0x008bafe0: call   0x140070760
0x008bafe5: mov    QWORD PTR [rbp-0x58],rax
0x008bafe9: movdqa xmm0,XMMWORD PTR [rip+0xecab7f]        # 0x141785b70
0x008baff1: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008baff6: movups xmm0,XMMWORD PTR [rip+0xd44a83]        # 0x1415ffa80
0x008baffd: movups XMMWORD PTR [rax],xmm0
0x008bb000: mov    ecx,DWORD PTR [rip+0xd44a8a]        # 0x1415ffa90
0x008bb006: mov    DWORD PTR [rax+0x10],ecx
0x008bb009: movzx  ecx,BYTE PTR [rip+0xd44a84]        # 0x1415ffa94
0x008bb010: mov    BYTE PTR [rax+0x14],cl
0x008bb013: mov    BYTE PTR [rax+0x15],0x0
0x008bb017: xor    r9d,r9d
0x008bb01a: lea    rdx,[rbp-0x58]
0x008bb01e: lea    rcx,[rip+0x1d892bb]        # 0x1426442e0
0x008bb025: call   0x140ad69a0
0x008bb02a: nop
0x008bb02b: jmp    0x1408bacb0
0x008bb030: xorps  xmm0,xmm0
0x008bb033: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bb037: mov    ecx,0x20
0x008bb03c: call   0x140070760
0x008bb041: mov    QWORD PTR [rbp-0x58],rax
0x008bb045: movdqa xmm0,XMMWORD PTR [rip+0xecab33]        # 0x141785b80
0x008bb04d: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bb052: movups xmm0,XMMWORD PTR [rip+0xd44a3f]        # 0x1415ffa98
0x008bb059: movups XMMWORD PTR [rax],xmm0
0x008bb05c: mov    ecx,DWORD PTR [rip+0xd44a46]        # 0x1415ffaa8
0x008bb062: mov    DWORD PTR [rax+0x10],ecx
0x008bb065: movzx  ecx,WORD PTR [rip+0xd44a40]        # 0x1415ffaac
0x008bb06c: mov    WORD PTR [rax+0x14],cx
0x008bb070: mov    BYTE PTR [rax+0x16],0x0
0x008bb074: xor    r9d,r9d
0x008bb077: lea    rdx,[rbp-0x58]
0x008bb07b: lea    rcx,[rip+0x1d8925e]        # 0x1426442e0
0x008bb082: call   0x140ad69a0
0x008bb087: nop
0x008bb088: jmp    0x1408bacb0
0x008bb08d: xorps  xmm0,xmm0
0x008bb090: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bb094: mov    ecx,0x20
0x008bb099: call   0x140070760
0x008bb09e: mov    QWORD PTR [rbp-0x58],rax
0x008bb0a2: movdqa xmm0,XMMWORD PTR [rip+0xecab16]        # 0x141785bc0
0x008bb0aa: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bb0af: movups xmm0,XMMWORD PTR [rip+0xd449fa]        # 0x1415ffab0
0x008bb0b6: movups XMMWORD PTR [rax],xmm0
0x008bb0b9: movsd  xmm0,QWORD PTR [rip+0xd449ff]        # 0x1415ffac0
0x008bb0c1: movsd  QWORD PTR [rax+0x10],xmm0
0x008bb0c6: movzx  ecx,WORD PTR [rip+0xd449fb]        # 0x1415ffac8
0x008bb0cd: mov    WORD PTR [rax+0x18],cx
0x008bb0d1: mov    BYTE PTR [rax+0x1a],0x0
0x008bb0d5: xor    r9d,r9d
0x008bb0d8: lea    rdx,[rbp-0x58]
0x008bb0dc: lea    rcx,[rip+0x1d891fd]        # 0x1426442e0
0x008bb0e3: call   0x140ad69a0
0x008bb0e8: nop
0x008bb0e9: jmp    0x1408bacb0
0x008bb0ee: xorps  xmm0,xmm0
0x008bb0f1: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bb0f5: mov    ecx,0x20
0x008bb0fa: call   0x140070760
0x008bb0ff: mov    QWORD PTR [rbp-0x58],rax
0x008bb103: movdqa xmm0,XMMWORD PTR [rip+0xecaa15]        # 0x141785b20
0x008bb10b: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bb110: movups xmm0,XMMWORD PTR [rip+0xd449b9]        # 0x1415ffad0
0x008bb117: movups XMMWORD PTR [rax],xmm0
0x008bb11a: mov    BYTE PTR [rax+0x10],0x0
0x008bb11e: xor    r9d,r9d
0x008bb121: lea    rdx,[rbp-0x58]
0x008bb125: lea    rcx,[rip+0x1d891b4]        # 0x1426442e0
0x008bb12c: call   0x140ad69a0
0x008bb131: nop
0x008bb132: jmp    0x1408bacb0
0x008bb137: xorps  xmm0,xmm0
0x008bb13a: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bb13e: mov    ecx,0x20
0x008bb143: call   0x140070760
0x008bb148: mov    QWORD PTR [rbp-0x58],rax
0x008bb14c: movdqa xmm0,XMMWORD PTR [rip+0xecaa0c]        # 0x141785b60
0x008bb154: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bb159: movups xmm0,XMMWORD PTR [rip+0xd44658]        # 0x1415ff7b8
0x008bb160: movups XMMWORD PTR [rax],xmm0
0x008bb163: mov    ecx,DWORD PTR [rip+0xd4465f]        # 0x1415ff7c8
0x008bb169: mov    DWORD PTR [rax+0x10],ecx
0x008bb16c: mov    BYTE PTR [rax+0x14],0x0
0x008bb170: xor    r9d,r9d
0x008bb173: lea    rdx,[rbp-0x58]
0x008bb177: lea    rcx,[rip+0x1d89162]        # 0x1426442e0
0x008bb17e: call   0x140ad69a0
0x008bb183: nop
0x008bb184: jmp    0x1408bacb0
0x008bb189: xorps  xmm0,xmm0
0x008bb18c: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bb190: mov    ecx,0x20
0x008bb195: call   0x140070760
0x008bb19a: mov    QWORD PTR [rbp-0x58],rax
0x008bb19e: movdqa xmm0,XMMWORD PTR [rip+0xeca9ba]        # 0x141785b60
0x008bb1a6: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bb1ab: movups xmm0,XMMWORD PTR [rip+0xd4461e]        # 0x1415ff7d0
0x008bb1b2: movups XMMWORD PTR [rax],xmm0
0x008bb1b5: mov    ecx,DWORD PTR [rip+0xd44625]        # 0x1415ff7e0
0x008bb1bb: mov    DWORD PTR [rax+0x10],ecx
0x008bb1be: mov    BYTE PTR [rax+0x14],0x0
0x008bb1c2: xor    r9d,r9d
0x008bb1c5: lea    rdx,[rbp-0x58]
0x008bb1c9: lea    rcx,[rip+0x1d89110]        # 0x1426442e0
0x008bb1d0: call   0x140ad69a0
0x008bb1d5: nop
0x008bb1d6: jmp    0x1408bacb0
0x008bb1db: lea    rcx,[rbp-0x58]
0x008bb1df: call   0x140068140
0x008bb1e4: xorps  xmm1,xmm1
0x008bb1e7: movdqu XMMWORD PTR [rbp-0x48],xmm1
0x008bb1ec: mov    r8d,0x16
0x008bb1f2: lea    rdx,[rip+0xd445ef]        # 0x1415ff7e8
0x008bb1f9: lea    rcx,[rbp-0x58]
0x008bb1fd: call   0x140068180
0x008bb202: nop
0x008bb203: xor    r9d,r9d
0x008bb206: lea    rdx,[rbp-0x58]
0x008bb20a: lea    rcx,[rip+0x1d890cf]        # 0x1426442e0
0x008bb211: call   0x140ad69a0
0x008bb216: nop
0x008bb217: lea    rcx,[rbp-0x58]
0x008bb21b: call   0x14006f7e0
0x008bb220: jmp    0x1408ba8d3
0x008bb225: lea    rdx,[rip+0xd445d4]        # 0x1415ff800
0x008bb22c: lea    rcx,[rbp-0x58]
0x008bb230: call   0x1400680e0
0x008bb235: nop
0x008bb236: xor    r9d,r9d
0x008bb239: lea    rdx,[rbp-0x58]
0x008bb23d: lea    rcx,[rip+0x1d8909c]        # 0x1426442e0
0x008bb244: call   0x140ad69a0
0x008bb249: nop
0x008bb24a: lea    rcx,[rbp-0x58]
0x008bb24e: call   0x14006f7e0
0x008bb253: jmp    0x1408ba8d3
0x008bb258: lea    rdx,[rip+0xd445c1]        # 0x1415ff820
0x008bb25f: lea    rcx,[rbp-0x58]
0x008bb263: call   0x1400680e0
0x008bb268: nop
0x008bb269: xor    r9d,r9d
0x008bb26c: lea    rdx,[rbp-0x58]
0x008bb270: lea    rcx,[rip+0x1d89069]        # 0x1426442e0
0x008bb277: call   0x140ad69a0
0x008bb27c: nop
0x008bb27d: lea    rcx,[rbp-0x58]
0x008bb281: call   0x14006f7e0
0x008bb286: jmp    0x1408ba8d3
0x008bb28b: lea    rdx,[rip+0xd445a6]        # 0x1415ff838
0x008bb292: lea    rcx,[rbp-0x58]
0x008bb296: call   0x1400680e0
0x008bb29b: nop
0x008bb29c: xor    r9d,r9d
0x008bb29f: lea    rdx,[rbp-0x58]
0x008bb2a3: lea    rcx,[rip+0x1d89036]        # 0x1426442e0
0x008bb2aa: call   0x140ad69a0
0x008bb2af: nop
0x008bb2b0: lea    rcx,[rbp-0x58]
0x008bb2b4: call   0x14006f7e0
0x008bb2b9: jmp    0x1408ba8d3
0x008bb2be: lea    rdx,[rip+0xd4458b]        # 0x1415ff850
0x008bb2c5: lea    rcx,[rbp-0x58]
0x008bb2c9: call   0x1400680e0
0x008bb2ce: nop
0x008bb2cf: xor    r9d,r9d
0x008bb2d2: lea    rdx,[rbp-0x58]
0x008bb2d6: lea    rcx,[rip+0x1d89003]        # 0x1426442e0
0x008bb2dd: call   0x140ad69a0
0x008bb2e2: nop
0x008bb2e3: lea    rcx,[rbp-0x58]
0x008bb2e7: call   0x14006f7e0
0x008bb2ec: jmp    0x1408ba8d3
0x008bb2f1: lea    rdx,[rip+0xd44570]        # 0x1415ff868
0x008bb2f8: lea    rcx,[rbp-0x58]
0x008bb2fc: call   0x1400680e0
0x008bb301: nop
0x008bb302: xor    r9d,r9d
0x008bb305: lea    rdx,[rbp-0x58]
0x008bb309: lea    rcx,[rip+0x1d88fd0]        # 0x1426442e0
0x008bb310: call   0x140ad69a0
0x008bb315: nop
0x008bb316: lea    rcx,[rbp-0x58]
0x008bb31a: call   0x14006f7e0
0x008bb31f: jmp    0x1408ba8d3
0x008bb324: lea    rdx,[rip+0xd44555]        # 0x1415ff880
0x008bb32b: lea    rcx,[rbp-0x58]
0x008bb32f: call   0x1400680e0
0x008bb334: nop
0x008bb335: xor    r9d,r9d
0x008bb338: lea    rdx,[rbp-0x58]
0x008bb33c: lea    rcx,[rip+0x1d88f9d]        # 0x1426442e0
0x008bb343: call   0x140ad69a0
0x008bb348: nop
0x008bb349: lea    rcx,[rbp-0x58]
0x008bb34d: call   0x14006f7e0
0x008bb352: jmp    0x1408ba8d3
0x008bb357: lea    rdx,[rip+0xd4453a]        # 0x1415ff898
0x008bb35e: lea    rcx,[rbp-0x58]
0x008bb362: call   0x1400680e0
0x008bb367: nop
0x008bb368: xor    r9d,r9d
0x008bb36b: lea    rdx,[rbp-0x58]
0x008bb36f: lea    rcx,[rip+0x1d88f6a]        # 0x1426442e0
0x008bb376: call   0x140ad69a0
0x008bb37b: nop
0x008bb37c: lea    rcx,[rbp-0x58]
0x008bb380: call   0x14006f7e0
0x008bb385: jmp    0x1408ba8d3
0x008bb38a: lea    rdx,[rip+0xd44527]        # 0x1415ff8b8
0x008bb391: lea    rcx,[rbp-0x58]
0x008bb395: call   0x1400680e0
0x008bb39a: nop
0x008bb39b: xor    r9d,r9d
0x008bb39e: lea    rdx,[rbp-0x58]
0x008bb3a2: lea    rcx,[rip+0x1d88f37]        # 0x1426442e0
0x008bb3a9: call   0x140ad69a0
0x008bb3ae: nop
0x008bb3af: lea    rcx,[rbp-0x58]
0x008bb3b3: call   0x14006f7e0
0x008bb3b8: jmp    0x1408ba8d3
0x008bb3bd: lea    rdx,[rip+0xd44514]        # 0x1415ff8d8
0x008bb3c4: lea    rcx,[rbp-0x58]
0x008bb3c8: call   0x1400680e0
0x008bb3cd: nop
0x008bb3ce: xor    r9d,r9d
0x008bb3d1: lea    rdx,[rbp-0x58]
0x008bb3d5: lea    rcx,[rip+0x1d88f04]        # 0x1426442e0
0x008bb3dc: call   0x140ad69a0
0x008bb3e1: nop
0x008bb3e2: lea    rcx,[rbp-0x58]
0x008bb3e6: call   0x14006f7e0
0x008bb3eb: jmp    0x1408ba8d3
0x008bb3f0: lea    rdx,[rip+0xd44501]        # 0x1415ff8f8
0x008bb3f7: lea    rcx,[rbp-0x58]
0x008bb3fb: call   0x1400680e0
0x008bb400: nop
0x008bb401: xor    r9d,r9d
0x008bb404: lea    rdx,[rbp-0x58]
0x008bb408: lea    rcx,[rip+0x1d88ed1]        # 0x1426442e0
0x008bb40f: call   0x140ad69a0
0x008bb414: nop
0x008bb415: lea    rcx,[rbp-0x58]
0x008bb419: call   0x14006f7e0
0x008bb41e: jmp    0x1408ba8d3
0x008bb423: lea    rdx,[rip+0xd444e6]        # 0x1415ff910
0x008bb42a: lea    rcx,[rbp-0x58]
0x008bb42e: call   0x1400680e0
0x008bb433: nop
0x008bb434: xor    r9d,r9d
0x008bb437: lea    rdx,[rbp-0x58]
0x008bb43b: lea    rcx,[rip+0x1d88e9e]        # 0x1426442e0
0x008bb442: call   0x140ad69a0
0x008bb447: nop
0x008bb448: lea    rcx,[rbp-0x58]
0x008bb44c: call   0x14006f7e0
0x008bb451: jmp    0x1408ba8d3
0x008bb456: lea    rdx,[rip+0xd444cb]        # 0x1415ff928
0x008bb45d: lea    rcx,[rbp-0x58]
0x008bb461: call   0x1400680e0
0x008bb466: nop
0x008bb467: xor    r9d,r9d
0x008bb46a: lea    rdx,[rbp-0x58]
0x008bb46e: lea    rcx,[rip+0x1d88e6b]        # 0x1426442e0
0x008bb475: call   0x140ad69a0
0x008bb47a: nop
0x008bb47b: lea    rcx,[rbp-0x58]
0x008bb47f: call   0x14006f7e0
0x008bb484: jmp    0x1408ba8d3
0x008bb489: lea    rdx,[rip+0xd444b0]        # 0x1415ff940
0x008bb490: lea    rcx,[rbp-0x58]
0x008bb494: call   0x1400680e0
0x008bb499: nop
0x008bb49a: xor    r9d,r9d
0x008bb49d: lea    rdx,[rbp-0x58]
0x008bb4a1: lea    rcx,[rip+0x1d88e38]        # 0x1426442e0
0x008bb4a8: call   0x140ad69a0
0x008bb4ad: nop
0x008bb4ae: lea    rcx,[rbp-0x58]
0x008bb4b2: call   0x14006f7e0
0x008bb4b7: jmp    0x1408ba8d3
0x008bb4bc: lea    rdx,[rip+0xd4476d]        # 0x1415ffc30
0x008bb4c3: lea    rcx,[rbp-0x58]
0x008bb4c7: call   0x1400680e0
0x008bb4cc: nop
0x008bb4cd: xor    r9d,r9d
0x008bb4d0: lea    rdx,[rbp-0x58]
0x008bb4d4: lea    rcx,[rip+0x1d88e05]        # 0x1426442e0
0x008bb4db: call   0x140ad69a0
0x008bb4e0: nop
0x008bb4e1: lea    rcx,[rbp-0x58]
0x008bb4e5: call   0x14006f7e0
0x008bb4ea: jmp    0x1408ba8d3
0x008bb4ef: lea    rdx,[rip+0xd44752]        # 0x1415ffc48
0x008bb4f6: lea    rcx,[rbp-0x58]
0x008bb4fa: call   0x1400680e0
0x008bb4ff: nop
0x008bb500: xor    r9d,r9d
0x008bb503: lea    rdx,[rbp-0x58]
0x008bb507: lea    rcx,[rip+0x1d88dd2]        # 0x1426442e0
0x008bb50e: call   0x140ad69a0
0x008bb513: nop
0x008bb514: lea    rcx,[rbp-0x58]
0x008bb518: call   0x14006f7e0
0x008bb51d: jmp    0x1408ba8d3
0x008bb522: lea    rdx,[rip+0xd4473f]        # 0x1415ffc68
0x008bb529: lea    rcx,[rbp-0x58]
0x008bb52d: call   0x1400680e0
0x008bb532: nop
0x008bb533: xor    r9d,r9d
0x008bb536: lea    rdx,[rbp-0x58]
0x008bb53a: lea    rcx,[rip+0x1d88d9f]        # 0x1426442e0
0x008bb541: call   0x140ad69a0
0x008bb546: nop
0x008bb547: lea    rcx,[rbp-0x58]
0x008bb54b: call   0x14006f7e0
0x008bb550: jmp    0x1408ba8d3
0x008bb555: lea    rdx,[rip+0xd44724]        # 0x1415ffc80
0x008bb55c: lea    rcx,[rbp-0x58]
0x008bb560: call   0x1400680e0
0x008bb565: nop
0x008bb566: xor    r9d,r9d
0x008bb569: lea    rdx,[rbp-0x58]
0x008bb56d: lea    rcx,[rip+0x1d88d6c]        # 0x1426442e0
0x008bb574: call   0x140ad69a0
0x008bb579: nop
0x008bb57a: lea    rcx,[rbp-0x58]
0x008bb57e: call   0x14006f7e0
0x008bb583: jmp    0x1408ba8d3
0x008bb588: lea    rdx,[rip+0xd44711]        # 0x1415ffca0
0x008bb58f: lea    rcx,[rbp-0x58]
0x008bb593: call   0x1400680e0
0x008bb598: nop
0x008bb599: xor    r9d,r9d
0x008bb59c: lea    rdx,[rbp-0x58]
0x008bb5a0: lea    rcx,[rip+0x1d88d39]        # 0x1426442e0
0x008bb5a7: call   0x140ad69a0
0x008bb5ac: nop
0x008bb5ad: lea    rcx,[rbp-0x58]
0x008bb5b1: call   0x14006f7e0
0x008bb5b6: jmp    0x1408ba8d3
0x008bb5bb: lea    rdx,[rip+0xd446fe]        # 0x1415ffcc0
0x008bb5c2: lea    rcx,[rbp-0x58]
0x008bb5c6: call   0x1400680e0
0x008bb5cb: nop
0x008bb5cc: xor    r9d,r9d
0x008bb5cf: lea    rdx,[rbp-0x58]
0x008bb5d3: lea    rcx,[rip+0x1d88d06]        # 0x1426442e0
0x008bb5da: call   0x140ad69a0
0x008bb5df: nop
0x008bb5e0: lea    rcx,[rbp-0x58]
0x008bb5e4: call   0x14006f7e0
0x008bb5e9: jmp    0x1408ba8d3
0x008bb5ee: lea    rdx,[rip+0xd446e3]        # 0x1415ffcd8
0x008bb5f5: lea    rcx,[rbp-0x58]
0x008bb5f9: call   0x1400680e0
0x008bb5fe: nop
0x008bb5ff: xor    r9d,r9d
0x008bb602: lea    rdx,[rbp-0x58]
0x008bb606: lea    rcx,[rip+0x1d88cd3]        # 0x1426442e0
0x008bb60d: call   0x140ad69a0
0x008bb612: nop
0x008bb613: lea    rcx,[rbp-0x58]
0x008bb617: call   0x14006f7e0
0x008bb61c: jmp    0x1408ba8d3
0x008bb621: lea    rdx,[rip+0xd446d8]        # 0x1415ffd00
0x008bb628: lea    rcx,[rbp-0x58]
0x008bb62c: call   0x1400680e0
0x008bb631: nop
0x008bb632: xor    r9d,r9d
0x008bb635: lea    rdx,[rbp-0x58]
0x008bb639: lea    rcx,[rip+0x1d88ca0]        # 0x1426442e0
0x008bb640: call   0x140ad69a0
0x008bb645: nop
0x008bb646: lea    rcx,[rbp-0x58]
0x008bb64a: call   0x14006f7e0
0x008bb64f: jmp    0x1408ba8d3
0x008bb654: lea    rdx,[rip+0xd446c5]        # 0x1415ffd20
0x008bb65b: lea    rcx,[rbp-0x58]
0x008bb65f: call   0x1400680e0
0x008bb664: nop
0x008bb665: xor    r9d,r9d
0x008bb668: lea    rdx,[rbp-0x58]
0x008bb66c: lea    rcx,[rip+0x1d88c6d]        # 0x1426442e0
0x008bb673: call   0x140ad69a0
0x008bb678: nop
0x008bb679: lea    rcx,[rbp-0x58]
0x008bb67d: call   0x14006f7e0
0x008bb682: jmp    0x1408ba8d3
0x008bb687: lea    rdx,[rip+0xd446b2]        # 0x1415ffd40
0x008bb68e: lea    rcx,[rbp-0x58]
0x008bb692: call   0x1400680e0
0x008bb697: nop
0x008bb698: xor    r9d,r9d
0x008bb69b: lea    rdx,[rbp-0x58]
0x008bb69f: lea    rcx,[rip+0x1d88c3a]        # 0x1426442e0
0x008bb6a6: call   0x140ad69a0
0x008bb6ab: nop
0x008bb6ac: lea    rcx,[rbp-0x58]
0x008bb6b0: call   0x14006f7e0
0x008bb6b5: jmp    0x1408ba8d3
0x008bb6ba: lea    rdx,[rip+0xd4468f]        # 0x1415ffd50
0x008bb6c1: lea    rcx,[rbp-0x58]
0x008bb6c5: call   0x1400680e0
0x008bb6ca: nop
0x008bb6cb: xor    r9d,r9d
0x008bb6ce: lea    rdx,[rbp-0x58]
0x008bb6d2: lea    rcx,[rip+0x1d88c07]        # 0x1426442e0
0x008bb6d9: call   0x140ad69a0
0x008bb6de: nop
0x008bb6df: lea    rcx,[rbp-0x58]
0x008bb6e3: call   0x14006f7e0
0x008bb6e8: jmp    0x1408ba8d3
0x008bb6ed: cmp    BYTE PTR [rip+0x1ad8bac],0x0        # 0x1423942a0
0x008bb6f4: je     0x1408ba8d3
0x008bb6fa: cmp    eax,0x4
0x008bb6fd: je     0x1408ba8d3
0x008bb703: mov    DWORD PTR [rip+0x1d88c5f],0x1010303        # 0x14264436c
0x008bb70d: mov    DWORD PTR [rip+0x1d88c4d],0x14        # 0x142644364
0x008bb717: mov    DWORD PTR [rip+0x1d88c47],0xc        # 0x142644368
0x008bb721: xorps  xmm0,xmm0
0x008bb724: mov    ecx,0x20
0x008bb729: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bb72d: cmp    DWORD PTR [rip+0x1ad8bc8],0xffffffff        # 0x1423942fc
0x008bb734: je     0x1408bb8d9
0x008bb73a: call   0x140070760
0x008bb73f: mov    QWORD PTR [rbp-0x58],rax
0x008bb743: movdqa xmm0,XMMWORD PTR [rip+0xeca435]        # 0x141785b80
0x008bb74b: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bb750: movups xmm0,XMMWORD PTR [rip+0xdfe321]        # 0x1416b9a78
0x008bb757: movups XMMWORD PTR [rax],xmm0
0x008bb75a: mov    ecx,DWORD PTR [rip+0xdfe328]        # 0x1416b9a88
0x008bb760: mov    DWORD PTR [rax+0x10],ecx
0x008bb763: movzx  ecx,WORD PTR [rip+0xdfe322]        # 0x1416b9a8c
0x008bb76a: mov    WORD PTR [rax+0x14],cx
0x008bb76e: mov    BYTE PTR [rax+0x16],0x0
0x008bb772: xor    r9d,r9d
0x008bb775: lea    rdx,[rbp-0x58]
0x008bb779: lea    rcx,[rip+0x1d88b60]        # 0x1426442e0
0x008bb780: call   0x140ad69a0
0x008bb785: nop
0x008bb786: lea    rcx,[rbp-0x58]
0x008bb78a: call   0x14006f7e0
0x008bb78f: xorps  xmm0,xmm0
0x008bb792: movups XMMWORD PTR [rbp-0x30],xmm0
0x008bb796: movdqa xmm1,XMMWORD PTR [rip+0xeca282]        # 0x141785a20
0x008bb79e: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x008bb7a3: mov    BYTE PTR [rbp-0x30],0x0
0x008bb7a7: lea    rdx,[rbp-0x30]
0x008bb7ab: mov    ecx,DWORD PTR [rip+0x1ad8b4b]        # 0x1423942fc
0x008bb7b1: call   0x140529db0
0x008bb7b6: xor    r9d,r9d
0x008bb7b9: lea    rdx,[rbp-0x30]
0x008bb7bd: lea    rcx,[rip+0x1d88b1c]        # 0x1426442e0
0x008bb7c4: call   0x140ad69a0
0x008bb7c9: xorps  xmm0,xmm0
0x008bb7cc: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bb7d0: movdqa xmm1,XMMWORD PTR [rip+0xeca258]        # 0x141785a30
0x008bb7d8: movdqu XMMWORD PTR [rbp-0x48],xmm1
0x008bb7dd: mov    WORD PTR [rbp-0x58],0x2f
0x008bb7e3: xor    r9d,r9d
0x008bb7e6: lea    rdx,[rbp-0x58]
0x008bb7ea: lea    rcx,[rip+0x1d88aef]        # 0x1426442e0
0x008bb7f1: call   0x140ad69a0
0x008bb7f6: nop
0x008bb7f7: mov    rdx,QWORD PTR [rbp-0x40]
0x008bb7fb: cmp    rdx,0xf
0x008bb7ff: jbe    0x1408bb832
0x008bb801: inc    rdx
0x008bb804: mov    rcx,QWORD PTR [rbp-0x58]
0x008bb808: mov    rax,rcx
0x008bb80b: cmp    rdx,0x1000
0x008bb812: jb     0x1408bb82d
0x008bb814: add    rdx,0x27
0x008bb818: mov    rcx,QWORD PTR [rcx-0x8]
0x008bb81c: sub    rax,rcx
0x008bb81f: add    rax,0xfffffffffffffff8
0x008bb823: cmp    rax,0x1f
0x008bb827: ja     0x1408bb8c7
0x008bb82d: call   0x1415345f0
0x008bb832: mov    rcx,QWORD PTR [rip+0x1ad8aa7]        # 0x1423942e0
0x008bb839: sub    rcx,QWORD PTR [rip+0x1ad8a98]        # 0x1423942d8
0x008bb840: sar    rcx,0x3
0x008bb844: lea    rdx,[rbp-0x30]
0x008bb848: call   0x140529db0
0x008bb84d: xor    r9d,r9d
0x008bb850: lea    rdx,[rbp-0x30]
0x008bb854: lea    rcx,[rip+0x1d88a85]        # 0x1426442e0
0x008bb85b: call   0x140ad69a0
0x008bb860: xorps  xmm0,xmm0
0x008bb863: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bb867: movdqa xmm1,XMMWORD PTR [rip+0xeca1d1]        # 0x141785a40
0x008bb86f: movdqu XMMWORD PTR [rbp-0x48],xmm1
0x008bb874: mov    eax,0x2020
0x008bb879: mov    WORD PTR [rbp-0x58],ax
0x008bb87d: mov    BYTE PTR [rbp-0x56],0x0
0x008bb881: xor    r9d,r9d
0x008bb884: lea    rdx,[rbp-0x58]
0x008bb888: lea    rcx,[rip+0x1d88a51]        # 0x1426442e0
0x008bb88f: call   0x140ad69a0
0x008bb894: nop
0x008bb895: mov    rdx,QWORD PTR [rbp-0x40]
0x008bb899: cmp    rdx,0xf
0x008bb89d: jbe    0x1408bb8d4
0x008bb89f: inc    rdx
0x008bb8a2: mov    rcx,QWORD PTR [rbp-0x58]
0x008bb8a6: mov    rax,rcx
0x008bb8a9: cmp    rdx,0x1000
0x008bb8b0: jb     0x1408bb8ce
0x008bb8b2: add    rdx,0x27
0x008bb8b6: mov    rcx,QWORD PTR [rcx-0x8]
0x008bb8ba: sub    rax,rcx
0x008bb8bd: add    rax,0xfffffffffffffff8
0x008bb8c1: cmp    rax,0x1f
0x008bb8c5: jbe    0x1408bb8ce
0x008bb8c7: call   QWORD PTR [rip+0xd251d3]        # 0x1415e0aa0
0x008bb8cd: int3
0x008bb8ce: call   0x1415345f0
0x008bb8d3: nop
0x008bb8d4: jmp    0x1408ba898
0x008bb8d9: call   0x140070760
0x008bb8de: mov    rdx,rax
0x008bb8e1: mov    QWORD PTR [rbp-0x58],rax
0x008bb8e5: movdqa xmm0,XMMWORD PTR [rip+0xeca2a3]        # 0x141785b90
0x008bb8ed: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bb8f2: movups xmm0,XMMWORD PTR [rip+0xdfe197]        # 0x1416b9a90
0x008bb8f9: movups XMMWORD PTR [rax],xmm0
0x008bb8fc: mov    ecx,DWORD PTR [rip+0xdfe19e]        # 0x1416b9aa0
0x008bb902: mov    DWORD PTR [rax+0x10],ecx
0x008bb905: movzx  ecx,WORD PTR [rip+0xdfe198]        # 0x1416b9aa4
0x008bb90c: mov    WORD PTR [rax+0x14],cx
0x008bb910: movzx  eax,BYTE PTR [rip+0xdfe18f]        # 0x1416b9aa6
0x008bb917: mov    BYTE PTR [rdx+0x16],al
0x008bb91a: mov    BYTE PTR [rdx+0x17],0x0
0x008bb91e: xor    r9d,r9d
0x008bb921: lea    rdx,[rbp-0x58]
0x008bb925: lea    rcx,[rip+0x1d889b4]        # 0x1426442e0
0x008bb92c: call   0x140ad69a0
0x008bb931: nop
0x008bb932: mov    rdx,QWORD PTR [rbp-0x40]
0x008bb936: cmp    rdx,0xf
0x008bb93a: jbe    0x1408ba8d3
0x008bb940: inc    rdx
0x008bb943: mov    rcx,QWORD PTR [rbp-0x58]
0x008bb947: mov    rax,rcx
0x008bb94a: cmp    rdx,0x1000
0x008bb951: jb     0x1408ba8ce
0x008bb957: add    rdx,0x27
0x008bb95b: mov    rcx,QWORD PTR [rcx-0x8]
0x008bb95f: sub    rax,rcx
0x008bb962: add    rax,0xfffffffffffffff8
0x008bb966: cmp    rax,0x1f
0x008bb96a: jbe    0x1408ba8ce
0x008bb970: call   QWORD PTR [rip+0xd2512a]        # 0x1415e0aa0
0x008bb976: int3
0x008bb977: nop
0x008bb978: rex.B test al,0x8b
0x008bb97b: add    BYTE PTR [rax],dl
0x008bb97d: test   eax,0xa940008b
0x008bb982: mov    eax,DWORD PTR [rax]
0x008bb984: jae    0x1408bb92f
0x008bb986: mov    eax,DWORD PTR [rax]
0x008bb988: sub    BYTE PTR [rdx-0x55a4ff75],ch
0x008bb98e: mov    eax,DWORD PTR [rax]
0x008bb990: mov    gs,WORD PTR [rdx-0x5510ff75]
0x008bb996: mov    eax,DWORD PTR [rax]
0x008bb998: rex.WRB stos QWORD PTR [rdi],rax
0x008bb99a: mov    eax,DWORD PTR [rax]
0x008bb99c: test   eax,0x5008bab
0x008bb9a1: lods   al,BYTE PTR [rsi]
0x008bb9a2: mov    eax,DWORD PTR [rax]
0x008bb9a4: push   rdi
0x008bb9a5: lods   al,BYTE PTR [rsi]
0x008bb9a6: mov    eax,DWORD PTR [rax]
0x008bb9a8: retf   0x8bac
0x008bb9ab: add    BYTE PTR [rbx],ah
0x008bb9ad: lods   eax,DWORD PTR [rsi]
0x008bb9ae: mov    eax,DWORD PTR [rax]
0x008bb9b0: sub    DWORD PTR [rbp-0x522aff75],0xae31008b
0x008bb9ba: mov    eax,DWORD PTR [rax]
0x008bb9bc: test   BYTE PTR [rsi-0x5127ff75],ch
0x008bb9c2: mov    eax,DWORD PTR [rax]
0x008bb9c4: (bad)
0x008bb9c5: scas   eax,DWORD PTR [rdi]
0x008bb9c6: mov    eax,DWORD PTR [rax]
0x008bb9c8: sub    BYTE PTR [rdi-0x502bff75],0x8b
0x008bb9cf: add    BYTE PTR [rax],dh
0x008bb9d1: mov    al,0x8b
0x008bb9d3: add    BYTE PTR [rbp-0x11ff7450],cl
0x008bb9d9: mov    al,0x8b
0x008bb9db: add    BYTE PTR [rdi],dh
0x008bb9dd: mov    cl,0x8b
0x008bb9df: add    BYTE PTR [rcx-0x24ff744f],cl
0x008bb9e5: mov    cl,0x8b
0x008bb9e7: add    BYTE PTR [rip+0x58008bb2],ah        # 0x1988c459f
0x008bb9ed: mov    dl,0x8b
0x008bb9ef: add    BYTE PTR [rbx-0x41ff744e],cl
0x008bb9f5: mov    dl,0x8b
0x008bb9f7: add    cl,dh
0x008bb9f9: mov    dl,0x8b
0x008bb9fb: add    BYTE PTR [rbx+rsi*4],ah
0x008bb9fe: mov    eax,DWORD PTR [rax]
0x008bba00: push   rdi
0x008bba01: mov    bl,0x8b
0x008bba03: add    BYTE PTR [rdx-0x42ff744d],cl
0x008bba09: mov    bl,0x8b
0x008bba0b: add    al,dh
0x008bba0d: mov    bl,0x8b
0x008bba0f: add    BYTE PTR [rbx],ah
0x008bba11: mov    ah,0x8b
0x008bba13: add    BYTE PTR [rsi-0x4c],dl
0x008bba16: mov    eax,DWORD PTR [rax]
0x008bba18: mov    DWORD PTR [rbx+rcx*4-0x744b4400],esi
0x008bba1f: add    bh,ch
0x008bba21: mov    ah,0x8b
0x008bba23: add    BYTE PTR [rdx],ah
0x008bba25: mov    ch,0x8b
0x008bba27: add    BYTE PTR [rbp-0x4b],dl
0x008bba2a: mov    eax,DWORD PTR [rax]
0x008bba2c: mov    BYTE PTR [rbp-0x4a44ff75],dh
0x008bba32: mov    eax,DWORD PTR [rax]
0x008bba34: out    dx,al
0x008bba35: mov    ch,0x8b
0x008bba37: add    BYTE PTR [rcx],ah
0x008bba39: mov    dh,0x8b
0x008bba3b: add    BYTE PTR [rsi+rsi*4-0x75],dl
0x008bba3f: add    BYTE PTR [rdi-0x45ff744a],al
0x008bba45: mov    dh,0x8b
