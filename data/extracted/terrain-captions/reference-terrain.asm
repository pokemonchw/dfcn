; reference; PE:6a70a6d9:02711000; terrain; RVA 0xe7d330..0xe834fd
0x00e7d330: rex push rbp
0x00e7d332: push   rbx
0x00e7d333: push   rsi
0x00e7d334: push   rdi
0x00e7d335: push   r12
0x00e7d337: push   r13
0x00e7d339: push   r14
0x00e7d33b: push   r15
0x00e7d33d: lea    rbp,[rsp-0x58]
0x00e7d342: sub    rsp,0x158
0x00e7d349: mov    rax,QWORD PTR [rip+0xa1ecf0]        # 0x14189c040
0x00e7d350: xor    rax,rsp
0x00e7d353: mov    QWORD PTR [rbp+0x40],rax
0x00e7d357: movsx  r14,r9w
0x00e7d35b: movsx  rsi,r8w
0x00e7d35f: mov    rbx,rdx
0x00e7d362: mov    rdi,rcx
0x00e7d365: movsx  r15,WORD PTR [rbp+0xc0]
0x00e7d36d: movzx  edx,BYTE PTR [rsp+0x54]
0x00e7d372: lea    rcx,[rbp+0x0]
0x00e7d376: call   0x140068190
0x00e7d37b: lea    rcx,[rbp+0x0]
0x00e7d37f: call   0x14006fb80
0x00e7d384: nop
0x00e7d385: xor    edx,edx
0x00e7d387: mov    rcx,rbx
0x00e7d38a: call   0x14006f8b0
0x00e7d38f: mov    BYTE PTR [rsp+0x58],0x0
0x00e7d394: xor    r12d,r12d
0x00e7d397: mov    WORD PTR [rsp+0x54],r12w
0x00e7d39d: mov    rax,QWORD PTR [rdi+0x78]
0x00e7d3a1: mov    rcx,QWORD PTR [rdi+0x80]
0x00e7d3a8: sub    rcx,rax
0x00e7d3ab: sar    rcx,0x3
0x00e7d3af: sub    ecx,0x1
0x00e7d3b2: js     0x140e7d3fe
0x00e7d3b4: movsxd rdx,ecx
0x00e7d3b7: lea    r8,[rax+rdx*8]
0x00e7d3bb: nop    DWORD PTR [rax+rax*1+0x0]
0x00e7d3c0: mov    rax,QWORD PTR [r8]
0x00e7d3c3: cmp    WORD PTR [rax+0xc],si
0x00e7d3c7: jne    0x140e7d3d7
0x00e7d3c9: cmp    WORD PTR [rax+0xe],r14w
0x00e7d3ce: jne    0x140e7d3d7
0x00e7d3d0: cmp    WORD PTR [rax+0x10],r15w
0x00e7d3d5: je     0x140e7d3e5
0x00e7d3d7: dec    ecx
0x00e7d3d9: sub    r8,0x8
0x00e7d3dd: sub    rdx,0x1
0x00e7d3e1: jns    0x140e7d3c0
0x00e7d3e3: jmp    0x140e7d3fe
0x00e7d3e5: mov    BYTE PTR [rsp+0x58],0x1
0x00e7d3ea: movsxd rcx,ecx
0x00e7d3ed: mov    rax,QWORD PTR [rdi+0x78]
0x00e7d3f1: mov    rcx,QWORD PTR [rax+rcx*8]
0x00e7d3f5: movzx  eax,WORD PTR [rcx+0x22]
0x00e7d3f9: mov    WORD PTR [rsp+0x54],ax
0x00e7d3fe: movzx  r9d,r15w
0x00e7d402: movzx  r8d,r14w
0x00e7d406: movzx  edx,si
0x00e7d409: mov    rcx,rdi
0x00e7d40c: call   0x140067f80
0x00e7d411: movzx  r13d,ax
0x00e7d415: mov    edx,r13d
0x00e7d418: mov    DWORD PTR [rsp+0x78],edx
0x00e7d41c: mov    eax,r13d
0x00e7d41f: lea    r8,[rip+0xffffffffff182bda]        # 0x140000000
0x00e7d426: mov    r9d,0x1eb
0x00e7d42c: sub    eax,0xd7
0x00e7d431: je     0x140e82df3
0x00e7d437: sub    eax,0x70
0x00e7d43a: je     0x140e82df3
0x00e7d440: sub    eax,0x4
0x00e7d443: je     0x140e82df3
0x00e7d449: sub    eax,0x1d
0x00e7d44c: je     0x140e82df3
0x00e7d452: cmp    eax,0x4c
0x00e7d455: je     0x140e82df3
0x00e7d45b: mov    ecx,edx
0x00e7d45d: cmp    edx,0x144
0x00e7d463: ja     0x140e7d511
0x00e7d469: je     0x140e82df3
0x00e7d46f: sub    ecx,0xac
0x00e7d475: je     0x140e82df3
0x00e7d47b: sub    ecx,0x1
0x00e7d47e: je     0x140e82df3
0x00e7d484: cmp    ecx,0x1
0x00e7d487: je     0x140e82df3
0x00e7d48d: mov    ecx,edx
0x00e7d48f: sub    ecx,0x165
0x00e7d495: je     0x140e82df3
0x00e7d49b: sub    ecx,0x1
0x00e7d49e: je     0x140e82df3
0x00e7d4a4: cmp    ecx,0x1
0x00e7d4a7: je     0x140e82df3
0x00e7d4ad: cmp    r13d,0x53
0x00e7d4b1: je     0x140e82df3
0x00e7d4b7: mov    ecx,edx
0x00e7d4b9: sub    ecx,0x4f
0x00e7d4bc: je     0x140e82df3
0x00e7d4c2: sub    ecx,0x1
0x00e7d4c5: je     0x140e82df3
0x00e7d4cb: sub    ecx,0x1
0x00e7d4ce: je     0x140e82df3
0x00e7d4d4: cmp    ecx,0x1
0x00e7d4d7: je     0x140e82df3
0x00e7d4dd: cmp    r13w,r9w
0x00e7d4e1: je     0x140e82df3
0x00e7d4e7: cmp    edx,0x164
0x00e7d4ed: ja     0x140e7d539
0x00e7d4ef: je     0x140e82df3
0x00e7d4f5: mov    ecx,edx
0x00e7d4f7: sub    ecx,0x41
0x00e7d4fa: je     0x140e82df3
0x00e7d500: sub    ecx,0x101
0x00e7d506: je     0x140e82df3
0x00e7d50c: cmp    ecx,0x1
0x00e7d50f: jmp    0x140e7d54a
0x00e7d511: sub    ecx,0x145
0x00e7d517: cmp    ecx,0x6e
0x00e7d51a: ja     0x140e7d48d
0x00e7d520: movsxd rax,ecx
0x00e7d523: movzx  eax,BYTE PTR [r8+rax*1+0xe83508]
0x00e7d52c: mov    ecx,DWORD PTR [r8+rax*4+0xe83500]
0x00e7d534: add    rcx,r8
0x00e7d537: jmp    rcx
0x00e7d539: mov    ecx,edx
0x00e7d53b: sub    ecx,0x1b0
0x00e7d541: je     0x140e82df3
0x00e7d547: cmp    ecx,0x3a
0x00e7d54a: je     0x140e82df3
0x00e7d550: lea    eax,[r13-0x109]
0x00e7d557: cmp    eax,0xf5
0x00e7d55c: ja     0x140e7d576
0x00e7d55e: cdqe
0x00e7d560: movzx  eax,BYTE PTR [r8+rax*1+0xe83580]
0x00e7d569: mov    ecx,DWORD PTR [r8+rax*4+0xe83578]
0x00e7d571: add    rcx,r8
0x00e7d574: jmp    rcx
0x00e7d576: mov    eax,0x105
0x00e7d57b: cmp    r13w,ax
0x00e7d57f: je     0x140e82df3
0x00e7d585: movzx  r9d,r15w
0x00e7d589: movzx  r8d,r14w
0x00e7d58d: movzx  edx,si
0x00e7d590: mov    rcx,rdi
0x00e7d593: call   0x140067f10
0x00e7d598: mov    r10,rax
0x00e7d59b: mov    ecx,r14d
0x00e7d59e: mov    edx,esi
0x00e7d5a0: mov    eax,0xffffffff
0x00e7d5a5: test   r10,r10
0x00e7d5a8: je     0x140e7d5fc
0x00e7d5aa: mov    r9d,0xc
0x00e7d5b0: and    ecx,0x8000000f
0x00e7d5b6: jge    0x140e7d5bf
0x00e7d5b8: dec    ecx
0x00e7d5ba: or     ecx,0xfffffff0
0x00e7d5bd: inc    ecx
0x00e7d5bf: and    edx,0x8000000f
0x00e7d5c5: jge    0x140e7d5ce
0x00e7d5c7: dec    edx
0x00e7d5c9: or     edx,0xfffffff0
0x00e7d5cc: inc    edx
0x00e7d5ce: mov    WORD PTR [rsp+0x28],ax
0x00e7d5d3: mov    DWORD PTR [rsp+0x20],eax
0x00e7d5d7: movzx  r8d,cx
0x00e7d5db: mov    rcx,r10
0x00e7d5de: call   0x140542e80
0x00e7d5e3: test   eax,eax
0x00e7d5e5: je     0x140e7d5fc
0x00e7d5e7: mov    r8d,0x6
0x00e7d5ed: lea    rdx,[rip+0x8b3d38]        # 0x14173132c ; literal="Muddy "
0x00e7d5f4: mov    rcx,rbx
0x00e7d5f7: call   0x14006fa10
0x00e7d5fc: movzx  r9d,r15w
0x00e7d600: movzx  r8d,r14w
0x00e7d604: movzx  edx,si
0x00e7d607: mov    rcx,rdi
0x00e7d60a: call   0x140067f10
0x00e7d60f: mov    r10,rax
0x00e7d612: test   rax,rax
0x00e7d615: je     0x140e7d676
0x00e7d617: mov    eax,r14d
0x00e7d61a: and    eax,0x8000000f
0x00e7d61f: jge    0x140e7d628
0x00e7d621: dec    eax
0x00e7d623: or     eax,0xfffffff0
0x00e7d626: inc    eax
0x00e7d628: mov    ecx,esi
0x00e7d62a: and    ecx,0x8000000f
0x00e7d630: jge    0x140e7d639
0x00e7d632: dec    ecx
0x00e7d634: or     ecx,0xfffffff0
0x00e7d637: inc    ecx
0x00e7d639: mov    WORD PTR [rsp+0x28],0x3
0x00e7d640: mov    DWORD PTR [rsp+0x20],0xffffffff
0x00e7d648: mov    r9d,0x6
0x00e7d64e: movzx  r8d,ax
0x00e7d652: movzx  edx,cx
0x00e7d655: mov    rcx,r10
0x00e7d658: call   0x140542e80
0x00e7d65d: test   eax,eax
0x00e7d65f: je     0x140e7d676
0x00e7d661: mov    r8d,0xd
0x00e7d667: lea    rdx,[rip+0x8b3d02]        # 0x141731370 ; literal="Snow-covered "
0x00e7d66e: mov    rcx,rbx
0x00e7d671: call   0x14006fa10
0x00e7d676: movzx  r9d,r15w
0x00e7d67a: movzx  r8d,r14w
0x00e7d67e: movzx  edx,si
0x00e7d681: mov    rcx,rdi
0x00e7d684: call   0x140068010
0x00e7d689: test   al,al
0x00e7d68b: jns    0x140e7d6a2
0x00e7d68d: mov    r8d,0x6
0x00e7d693: lea    rdx,[rip+0x8b3ce6]        # 0x141731380 ; literal="Mossy "
0x00e7d69a: mov    rcx,rbx
0x00e7d69d: call   0x14006fa10
0x00e7d6a2: lea    eax,[r13-0x1]
0x00e7d6a6: cmp    eax,0x2b5
0x00e7d6ab: ja     0x140e82de1
0x00e7d6b1: cdqe
0x00e7d6b3: lea    rdx,[rip+0xffffffffff182946]        # 0x140000000
0x00e7d6ba: movzx  eax,BYTE PTR [rdx+rax*1+0xe838bc]
0x00e7d6c2: mov    ecx,DWORD PTR [rdx+rax*4+0xe83678]
0x00e7d6c9: add    rcx,rdx
0x00e7d6cc: jmp    rcx
0x00e7d6ce: lea    rcx,[rdi+0x1ddd8]
0x00e7d6d5: movzx  r9d,r15w
0x00e7d6d9: movzx  r8d,r14w
0x00e7d6dd: movzx  edx,si
0x00e7d6e0: call   0x1413ffaf0
0x00e7d6e5: mov    QWORD PTR [rbp-0x80],rax
0x00e7d6e9: test   rax,rax
0x00e7d6ec: je     0x140e7d75d
0x00e7d6ee: cmp    DWORD PTR [rax+0x1c],0xffffffff
0x00e7d6f2: je     0x140e7d75d
0x00e7d6f4: mov    edx,DWORD PTR [rax+0x1c]
0x00e7d6f7: mov    rcx,QWORD PTR [rdi+0x11a668]
0x00e7d6fe: call   0x14007db20
0x00e7d703: test   rax,rax
0x00e7d706: je     0x140e7d75d
0x00e7d708: cmp    QWORD PTR [rax+0x308],r12
0x00e7d70f: je     0x140e7d75d
0x00e7d711: mov    rdx,QWORD PTR [rax+0x308]
0x00e7d718: mov    rcx,QWORD PTR [rbp-0x80]
0x00e7d71c: mov    ecx,DWORD PTR [rcx+0x20]
0x00e7d71f: call   0x1400b9dc0
0x00e7d724: test   rax,rax
0x00e7d727: je     0x140e7d75d
0x00e7d729: cmp    DWORD PTR [rax+0x4],0x11
0x00e7d72d: jne    0x140e7d75d
0x00e7d72f: mov    rcx,QWORD PTR [rax+0x58]
0x00e7d733: cmp    BYTE PTR [rcx+0x82],r12b
0x00e7d73a: je     0x140e7d75d
0x00e7d73c: add    rcx,0x10
0x00e7d740: xor    r9d,r9d
0x00e7d743: mov    r8b,0x1
0x00e7d746: mov    rdx,rbx
0x00e7d749: call   0x140a946e0
0x00e7d74e: lea    rdx,[rip+0x76b983]        # 0x1415e90d8 ; literal=", "
0x00e7d755: mov    rcx,rbx
0x00e7d758: call   0x14006f560
0x00e7d75d: mov    BYTE PTR [rsp+0x58],r12b
0x00e7d762: lea    eax,[r13-0x1f]
0x00e7d766: cmp    eax,0xc3
0x00e7d76b: ja     0x140e7d7a4
0x00e7d76d: cdqe
0x00e7d76f: lea    rdx,[rip+0xffffffffff18288a]        # 0x140000000
0x00e7d776: movzx  eax,BYTE PTR [rdx+rax*1+0xe83b7c]
0x00e7d77e: mov    ecx,DWORD PTR [rdx+rax*4+0xe83b74]
0x00e7d785: add    rcx,rdx
0x00e7d788: jmp    rcx
0x00e7d78a: mov    BYTE PTR [rsp+0x58],0x1
0x00e7d78f: mov    r8d,0x5
0x00e7d795: lea    rdx,[rip+0x8b3c44]        # 0x1417313e0 ; literal="Dead "
0x00e7d79c: mov    rcx,rbx
0x00e7d79f: call   0x14006fa10
0x00e7d7a4: cmp    QWORD PTR [rbp-0x80],r12
0x00e7d7a8: je     0x140e7dd4c
0x00e7d7ae: movzx  edx,BYTE PTR [rsp+0x54]
0x00e7d7b3: lea    rcx,[rbp+0x20]
0x00e7d7b7: call   0x140068190
0x00e7d7bc: lea    rcx,[rbp+0x20]
0x00e7d7c0: call   0x14006fb80
0x00e7d7c5: nop
0x00e7d7c6: movzx  r8d,r13w
0x00e7d7ca: lea    rdx,[rbp+0x20]
0x00e7d7ce: mov    r13,QWORD PTR [rbp-0x80]
0x00e7d7d2: mov    rcx,r13
0x00e7d7d5: call   0x1413ffd20
0x00e7d7da: lea    rdx,[rbp+0x20]
0x00e7d7de: mov    rcx,rbx
0x00e7d7e1: call   0x1400b9d10
0x00e7d7e6: cmp    BYTE PTR [rbp+0xc8],0x0
0x00e7d7ed: je     0x140e7dd3e
0x00e7d7f3: lea    rcx,[rdi+0x11b408]
0x00e7d7fa: movsx  edx,WORD PTR [r13+0x2]
0x00e7d7ff: call   0x14014d850
0x00e7d804: mov    rdi,rax
0x00e7d807: test   rax,rax
0x00e7d80a: je     0x140e7dd3e
0x00e7d810: movsxd rcx,DWORD PTR [rip+0x166a8d1]        # 0x1424e80e8
0x00e7d817: lea    r8,[rcx+rcx*2]
0x00e7d81b: shl    r8,0x4
0x00e7d81f: add    r8,rsi
0x00e7d822: movsxd rcx,DWORD PTR [rip+0x166a8c3]        # 0x1424e80ec
0x00e7d829: lea    rdx,[rcx+rcx*2]
0x00e7d82d: shl    rdx,0x4
0x00e7d831: add    rdx,r14
0x00e7d834: movsxd rcx,DWORD PTR [rip+0x166a8b5]        # 0x1424e80f0
0x00e7d83b: add    rcx,r15
0x00e7d83e: imul   rax,rcx,0x2710
0x00e7d845: add    rax,rdx
0x00e7d848: imul   rcx,rax,0x2710
0x00e7d84f: movabs rax,0x9e3779b97f4a7c15
0x00e7d859: add    rcx,rax
0x00e7d85c: add    rcx,r8
0x00e7d85f: mov    QWORD PTR [rip+0xa30732],rcx        # 0x1418adf98
0x00e7d866: mov    rax,rcx
0x00e7d869: shr    rax,0x1e
0x00e7d86d: xor    rax,rcx
0x00e7d870: movabs rcx,0xbf58476d1ce4e5b9
0x00e7d87a: imul   rax,rcx
0x00e7d87e: mov    rcx,rax
0x00e7d881: shr    rcx,0x1b
0x00e7d885: xor    rcx,rax
0x00e7d888: movabs rax,0x94d049bb133111eb
0x00e7d892: imul   rcx,rax
0x00e7d896: mov    r8,rcx
0x00e7d899: shr    r8,0x3f
0x00e7d89d: shr    rcx,0x20
0x00e7d8a1: xor    r8d,ecx
0x00e7d8a4: mov    eax,0x10624dd3
0x00e7d8a9: mul    r8d
0x00e7d8ac: shr    edx,0x7
0x00e7d8af: imul   eax,edx,0x7d0
0x00e7d8b5: sub    r8d,eax
0x00e7d8b8: mov    ecx,DWORD PTR [rip+0x150a706]        # 0x142387fc4
0x00e7d8be: add    ecx,r8d
0x00e7d8c1: mov    eax,0x299c335d
0x00e7d8c6: imul   ecx
0x00e7d8c8: sar    edx,0x10
0x00e7d8cb: mov    eax,edx
0x00e7d8cd: shr    eax,0x1f
0x00e7d8d0: add    edx,eax
0x00e7d8d2: imul   eax,edx,0x62700
0x00e7d8d8: sub    ecx,eax
0x00e7d8da: mov    DWORD PTR [rsp+0x5c],ecx
0x00e7d8de: cmp    BYTE PTR [rsp+0x58],0x0
0x00e7d8e3: jne    0x140e7dd3e
0x00e7d8e9: lea    r8,[rdi+0x658]
0x00e7d8f0: mov    rdx,QWORD PTR [rdi+0x658]
0x00e7d8f7: lea    rcx,[rsp+0x70]
0x00e7d8fc: call   0x14006f740
0x00e7d901: lea    r8,[rdi+0x658]
0x00e7d908: mov    rdx,QWORD PTR [rdi+0x660]
0x00e7d90f: lea    rcx,[rbp-0x40]
0x00e7d913: call   0x14006f740
0x00e7d918: mov    r11d,0xffffd8f0
0x00e7d91e: mov    rcx,QWORD PTR [rsp+0x70]
0x00e7d923: mov    r8d,0xff
0x00e7d929: mov    edi,0x2710
0x00e7d92e: cmp    rcx,QWORD PTR [rbp-0x40]
0x00e7d932: je     0x140e7dd3e
0x00e7d938: mov    edx,0x1
0x00e7d93d: cmovb  edx,r8d
0x00e7d941: test   dl,dl
0x00e7d943: jns    0x140e7dd3e
0x00e7d949: mov    r13,QWORD PTR [rcx]
0x00e7d94c: cmp    WORD PTR [r13+0x100],0xffff
0x00e7d955: je     0x140e7dd2d
0x00e7d95b: mov    eax,DWORD PTR [rsp+0x78]
0x00e7d95f: add    eax,0xfffffff9
0x00e7d962: cmp    eax,0xdc
0x00e7d967: ja     0x140e7dd2d
0x00e7d96d: cdqe
0x00e7d96f: lea    r8,[rip+0xffffffffff18268a]        # 0x140000000
0x00e7d976: movzx  eax,BYTE PTR [r8+rax*1+0xe83c60]
0x00e7d97f: mov    edx,DWORD PTR [r8+rax*4+0xe83c40]
0x00e7d987: add    rdx,r8
0x00e7d98a: jmp    rdx
0x00e7d98c: mov    eax,DWORD PTR [r13+0x144]
0x00e7d993: shr    eax,0x4
0x00e7d996: and    al,0x1
0x00e7d998: test   al,al
0x00e7d99a: jmp    0x140e7d9f1
0x00e7d99c: mov    eax,DWORD PTR [r13+0x144]
0x00e7d9a3: shr    eax,0x6
0x00e7d9a6: and    al,0x1
0x00e7d9a8: test   al,al
0x00e7d9aa: jmp    0x140e7d9f1
0x00e7d9ac: mov    eax,DWORD PTR [r13+0x144]
0x00e7d9b3: shr    eax,0x3
0x00e7d9b6: and    al,0x1
0x00e7d9b8: test   al,al
0x00e7d9ba: jmp    0x140e7d9f1
0x00e7d9bc: mov    eax,DWORD PTR [r13+0x144]
0x00e7d9c3: shr    eax,0x2
0x00e7d9c6: and    al,0x1
0x00e7d9c8: test   al,al
0x00e7d9ca: jmp    0x140e7d9f1
0x00e7d9cc: mov    eax,DWORD PTR [r13+0x144]
0x00e7d9d3: shr    eax,1
0x00e7d9d5: and    al,0x1
0x00e7d9d7: test   al,al
0x00e7d9d9: jmp    0x140e7d9f1
0x00e7d9db: movzx  eax,BYTE PTR [r13+0x144]
0x00e7d9e3: and    al,0x1
0x00e7d9e5: test   al,al
0x00e7d9e7: jmp    0x140e7d9f1
0x00e7d9e9: test   BYTE PTR [r13+0x144],0x20
0x00e7d9f1: je     0x140e7dd2d
0x00e7d9f7: mov    eax,DWORD PTR [r13+0x150]
0x00e7d9fe: cmp    eax,0xffffffff
0x00e7da01: jne    0x140e7da10
0x00e7da03: cmp    DWORD PTR [r13+0x154],eax
0x00e7da0a: je     0x140e7da96
0x00e7da10: mov    rdx,QWORD PTR [rbp-0x80]
0x00e7da14: mov    r10,QWORD PTR [rdx+0x40]
0x00e7da18: test   r10,r10
0x00e7da1b: je     0x140e7da96
0x00e7da1d: cmp    WORD PTR [r10+0x44],0x0
0x00e7da23: jle    0x140e7da96
0x00e7da25: movzx  r9d,r15w
0x00e7da29: sub    r9w,WORD PTR [rdx+0x8]
0x00e7da2e: cmp    eax,0xffffffff
0x00e7da31: je     0x140e7da54
0x00e7da33: movsx  edx,WORD PTR [r10+0x44]
0x00e7da38: imul   edx,eax
0x00e7da3b: mov    eax,0x51eb851f
0x00e7da40: imul   edx
0x00e7da42: mov    r8d,edx
0x00e7da45: sar    r8d,0x5
0x00e7da49: mov    eax,r8d
0x00e7da4c: shr    eax,0x1f
0x00e7da4f: add    r8d,eax
0x00e7da52: jmp    0x140e7da58
0x00e7da54: movzx  r8d,r11w
0x00e7da58: mov    eax,DWORD PTR [r13+0x154]
0x00e7da5f: cmp    eax,0xffffffff
0x00e7da62: je     0x140e7da7f
0x00e7da64: movsx  edx,WORD PTR [r10+0x44]
0x00e7da69: imul   edx,eax
0x00e7da6c: mov    eax,0x51eb851f
0x00e7da71: imul   edx
0x00e7da73: sar    edx,0x5
0x00e7da76: mov    eax,edx
0x00e7da78: shr    eax,0x1f
0x00e7da7b: add    edx,eax
0x00e7da7d: jmp    0x140e7da82
0x00e7da7f: movzx  edx,di
0x00e7da82: cmp    r9w,r8w
0x00e7da86: jl     0x140e7dd2d
0x00e7da8c: cmp    r9w,dx
0x00e7da90: jg     0x140e7dd2d
0x00e7da96: mov    eax,DWORD PTR [r13+0x13c]
0x00e7da9d: cmp    eax,0xffffffff
0x00e7daa0: je     0x140e7dadf
0x00e7daa2: mov    edx,DWORD PTR [r13+0x140]
0x00e7daa9: mov    r8d,DWORD PTR [rsp+0x5c]
0x00e7daae: cmp    eax,edx
0x00e7dab0: jg     0x140e7dad1
0x00e7dab2: cmp    r8d,eax
0x00e7dab5: jl     0x140e7dd2d
0x00e7dabb: cmp    edx,r8d
0x00e7dabe: jge    0x140e7dadf
0x00e7dac0: add    rcx,0x8
0x00e7dac4: mov    QWORD PTR [rsp+0x70],rcx
0x00e7dac9: inc    r12d
0x00e7dacc: jmp    0x140e7d923
0x00e7dad1: cmp    edx,r8d
0x00e7dad4: jle    0x140e7dadf
0x00e7dad6: cmp    r8d,eax
0x00e7dad9: jl     0x140e7dd2d
0x00e7dadf: mov    r8d,r14d
0x00e7dae2: mov    eax,0x2aaaaaab
0x00e7dae7: imul   r14d
0x00e7daea: mov    ecx,edx
0x00e7daec: sar    ecx,0x3
0x00e7daef: mov    eax,ecx
0x00e7daf1: shr    eax,0x1f
0x00e7daf4: add    ecx,eax
0x00e7daf6: lea    eax,[rcx+rcx*2]
0x00e7daf9: shl    eax,0x4
0x00e7dafc: sub    r8d,eax
0x00e7daff: mov    DWORD PTR [rsp+0x58],r8d
0x00e7db04: mov    r9d,esi
0x00e7db07: mov    eax,0x2aaaaaab
0x00e7db0c: imul   esi
0x00e7db0e: mov    r8d,edx
0x00e7db11: sar    r8d,0x3
0x00e7db15: mov    eax,r8d
0x00e7db18: shr    eax,0x1f
0x00e7db1b: add    r8d,eax
0x00e7db1e: lea    eax,[r8+r8*2]
0x00e7db22: shl    eax,0x4
0x00e7db25: sub    r9d,eax
0x00e7db28: mov    DWORD PTR [rsp+0x54],r9d
0x00e7db2d: add    ecx,DWORD PTR [rip+0x166a5b9]        # 0x1424e80ec
0x00e7db33: mov    rdx,QWORD PTR [rip+0x166e01e]        # 0x1424ebb58
0x00e7db3a: imul   ecx,DWORD PTR [rdx+0xa0]
0x00e7db41: shl    ecx,0x4
0x00e7db44: add    ecx,r8d
0x00e7db47: add    ecx,DWORD PTR [rip+0x166a59b]        # 0x1424e80e8
0x00e7db4d: add    rdx,0x208
0x00e7db54: call   0x1400b9dc0
0x00e7db59: mov    QWORD PTR [rsp+0x60],rax
0x00e7db5e: test   rax,rax
0x00e7db61: je     0x140e7dd01
0x00e7db67: movzx  ecx,r15w
0x00e7db6b: add    cx,WORD PTR [rip+0x166a57e]        # 0x1424e80f0
0x00e7db72: mov    WORD PTR [rsp+0x50],cx
0x00e7db77: lea    rdi,[rax+0x120]
0x00e7db7e: lea    rdx,[rsp+0x68]
0x00e7db83: mov    rcx,rdi
0x00e7db86: call   0x14006f240
0x00e7db8b: lea    rdx,[rbp-0x70]
0x00e7db8f: mov    rcx,rdi
0x00e7db92: call   0x14006f230
0x00e7db97: mov    rdi,QWORD PTR [rsp+0x60]
0x00e7db9c: lea    rdx,[rbp-0x68]
0x00e7dba0: lea    rcx,[rdi+0x138]
0x00e7dba7: call   0x14006f240
0x00e7dbac: lea    rdx,[rbp-0x28]
0x00e7dbb0: lea    rcx,[rdi+0x138]
0x00e7dbb7: call   0x14006f230
0x00e7dbbc: lea    rdx,[rbp-0x60]
0x00e7dbc0: lea    rcx,[rdi+0x150]
0x00e7dbc7: call   0x14006f240
0x00e7dbcc: lea    rdx,[rbp-0x20]
0x00e7dbd0: lea    rcx,[rdi+0x150]
0x00e7dbd7: call   0x14006f230
0x00e7dbdc: lea    rdx,[rbp-0x58]
0x00e7dbe0: lea    rcx,[rdi+0x168]
0x00e7dbe7: call   0x14006f240
0x00e7dbec: lea    rdx,[rbp-0x18]
0x00e7dbf0: lea    rcx,[rdi+0x168]
0x00e7dbf7: call   0x14006f230
0x00e7dbfc: lea    rdx,[rbp-0x50]
0x00e7dc00: lea    rcx,[rdi+0x180]
0x00e7dc07: call   0x14006f240
0x00e7dc0c: lea    rdx,[rbp-0x10]
0x00e7dc10: lea    rcx,[rdi+0x180]
0x00e7dc17: call   0x14006f230
0x00e7dc1c: lea    rdx,[rbp-0x78]
0x00e7dc20: lea    rcx,[rdi+0x198]
0x00e7dc27: call   0x14006f240
0x00e7dc2c: lea    rdx,[rbp-0x8]
0x00e7dc30: lea    rcx,[rdi+0x198]
0x00e7dc37: call   0x14006f230
0x00e7dc3c: mov    rax,QWORD PTR [rsp+0x68]
0x00e7dc41: mov    rdx,QWORD PTR [rbp-0x70]
0x00e7dc45: mov    rcx,QWORD PTR [rbp-0x68]
0x00e7dc49: mov    edi,0xff
0x00e7dc4e: xchg   ax,ax
0x00e7dc50: cmp    rax,rdx
0x00e7dc53: je     0x140e7dd01
0x00e7dc59: mov    r8d,0x1
0x00e7dc5f: cmovb  r8d,edi
0x00e7dc63: test   r8b,r8b
0x00e7dc66: jns    0x140e7dd01
0x00e7dc6c: mov    r8d,DWORD PTR [rsp+0x54]
0x00e7dc71: cmp    WORD PTR [rax],r8w
0x00e7dc75: jne    0x140e7dcd7
0x00e7dc77: mov    r8d,DWORD PTR [rsp+0x58]
0x00e7dc7c: cmp    WORD PTR [rcx],r8w
0x00e7dc80: jne    0x140e7dcd7
0x00e7dc82: lea    rcx,[rbp-0x60]
0x00e7dc86: call   0x14006ee10
0x00e7dc8b: movzx  ecx,WORD PTR [rsp+0x50]
0x00e7dc90: cmp    WORD PTR [rax],cx
0x00e7dc93: jne    0x140e7dcca
0x00e7dc95: lea    rcx,[rbp-0x58]
0x00e7dc99: call   0x14006ee10
0x00e7dc9e: cmp    DWORD PTR [rax],r12d
0x00e7dca1: jne    0x140e7dcca
0x00e7dca3: lea    rcx,[rbp-0x50]
0x00e7dca7: call   0x14006ee10
0x00e7dcac: mov    ecx,DWORD PTR [r13+0x148]
0x00e7dcb3: cmp    DWORD PTR [rax],ecx
0x00e7dcb5: jl     0x140e7dcca
0x00e7dcb7: lea    rcx,[rbp-0x78]
0x00e7dcbb: call   0x14006ee10
0x00e7dcc0: mov    ecx,DWORD PTR [rip+0x14f6a2e]        # 0x1423746f4
0x00e7dcc6: cmp    DWORD PTR [rax],ecx
0x00e7dcc8: je     0x140e7dd22
0x00e7dcca: mov    rax,QWORD PTR [rsp+0x68]
0x00e7dccf: mov    rdx,QWORD PTR [rbp-0x70]
0x00e7dcd3: mov    rcx,QWORD PTR [rbp-0x68]
0x00e7dcd7: add    rax,0x2
0x00e7dcdb: mov    QWORD PTR [rsp+0x68],rax
0x00e7dce0: add    rcx,0x2
0x00e7dce4: mov    QWORD PTR [rbp-0x68],rcx
0x00e7dce8: add    QWORD PTR [rbp-0x60],0x2
0x00e7dced: add    QWORD PTR [rbp-0x58],0x4
0x00e7dcf2: add    QWORD PTR [rbp-0x50],0x4
0x00e7dcf7: add    QWORD PTR [rbp-0x78],0x4
0x00e7dcfc: jmp    0x140e7dc50
0x00e7dd01: mov    r8d,0x2
0x00e7dd07: lea    rdx,[rip+0x76b3ca]        # 0x1415e90d8 ; literal=", "
0x00e7dd0e: mov    rcx,rbx
0x00e7dd11: call   0x14006fa10
0x00e7dd16: lea    rdx,[r13+0x40]
0x00e7dd1a: mov    rcx,rbx
0x00e7dd1d: call   0x1400b9d10
0x00e7dd22: mov    r11d,0xffffd8f0
0x00e7dd28: mov    rcx,QWORD PTR [rsp+0x70]
0x00e7dd2d: add    rcx,0x8
0x00e7dd31: mov    QWORD PTR [rsp+0x70],rcx
0x00e7dd36: inc    r12d
0x00e7dd39: jmp    0x140e7d923
0x00e7dd3e: lea    rcx,[rbp+0x20]
0x00e7dd42: call   0x14006f850
0x00e7dd47: jmp    0x140e834d4
0x00e7dd4c: mov    r8d,0x4
0x00e7dd52: lea    rdx,[rip+0x7979ab]        # 0x141615704 ; literal="Tree"
0x00e7dd59: jmp    0x140e834cb
0x00e7dd5e: movzx  r9d,r15w
0x00e7dd62: movzx  r8d,r14w
0x00e7dd66: movzx  edx,si
0x00e7dd69: mov    rcx,rdi
0x00e7dd6c: call   0x140067f10
0x00e7dd71: test   rax,rax
0x00e7dd74: je     0x140e7e208
0x00e7dd7a: mov    r8d,r14d
0x00e7dd7d: and    r8d,0x8000000f
0x00e7dd84: jge    0x140e7dd90
0x00e7dd86: dec    r8d
0x00e7dd89: or     r8d,0xfffffff0
0x00e7dd8d: inc    r8d
0x00e7dd90: mov    edx,esi
0x00e7dd92: and    edx,0x8000000f
0x00e7dd98: jge    0x140e7dda1
0x00e7dd9a: dec    edx
0x00e7dd9c: or     edx,0xfffffff0
0x00e7dd9f: inc    edx
0x00e7dda1: mov    rcx,rax
0x00e7dda4: call   0x1405316f0
0x00e7dda9: mov    r13,rax
0x00e7ddac: test   rax,rax
0x00e7ddaf: je     0x140e7e208
0x00e7ddb5: lea    rcx,[rdi+0x11b408]
0x00e7ddbc: mov    edx,DWORD PTR [rax+0x8]
0x00e7ddbf: call   0x14014d850
0x00e7ddc4: mov    rdi,rax
0x00e7ddc7: test   rax,rax
0x00e7ddca: je     0x140e7e208
0x00e7ddd0: mov    ecx,esi
0x00e7ddd2: and    ecx,0x8000000f
0x00e7ddd8: jge    0x140e7dde1
0x00e7ddda: dec    ecx
0x00e7dddc: or     ecx,0xfffffff0
0x00e7dddf: inc    ecx
0x00e7dde1: mov    edx,r14d
0x00e7dde4: and    edx,0x8000000f
0x00e7ddea: jge    0x140e7ddf3
0x00e7ddec: dec    edx
0x00e7ddee: or     edx,0xfffffff0
0x00e7ddf1: inc    edx
0x00e7ddf3: movsx  rax,cx
0x00e7ddf7: shl    rax,0x4
0x00e7ddfb: movsx  rcx,dx
0x00e7ddff: add    rax,r13
0x00e7de02: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e7de07: cmp    dl,0x43
0x00e7de0a: jb     0x140e7de15
0x00e7de0c: lea    rdx,[rip+0x8b35d5]        # 0x1417313e8 ; literal="Dense "
0x00e7de13: jmp    0x140e7de21
0x00e7de15: cmp    dl,0x21
0x00e7de18: ja     0x140e7de29
0x00e7de1a: lea    rdx,[rip+0x8b3587]        # 0x1417313a8 ; literal="Sparse "
0x00e7de21: mov    rcx,rbx
0x00e7de24: call   0x14006f560
0x00e7de29: lea    rdx,[rdi+0x50]
0x00e7de2d: mov    rcx,rbx
0x00e7de30: call   0x1400b9d10
0x00e7de35: cmp    BYTE PTR [rbp+0xc8],r12b
0x00e7de3c: je     0x140e834d4
0x00e7de42: movsxd rax,DWORD PTR [rip+0x166a29f]        # 0x1424e80e8
0x00e7de49: lea    r8,[rax+rax*2]
0x00e7de4d: shl    r8,0x4
0x00e7de51: add    r8,rsi
0x00e7de54: movsxd rax,DWORD PTR [rip+0x166a291]        # 0x1424e80ec
0x00e7de5b: lea    rdx,[rax+rax*2]
0x00e7de5f: shl    rdx,0x4
0x00e7de63: add    rdx,r14
0x00e7de66: movsxd rcx,DWORD PTR [rip+0x166a283]        # 0x1424e80f0
0x00e7de6d: add    rcx,r15
0x00e7de70: mov    r13d,DWORD PTR [rip+0x150a14d]        # 0x142387fc4
0x00e7de77: imul   rax,rcx,0x2710
0x00e7de7e: add    rax,rdx
0x00e7de81: imul   rcx,rax,0x2710
0x00e7de88: add    rcx,r8
0x00e7de8b: mov    QWORD PTR [rip+0xa30106],rcx        # 0x1418adf98
0x00e7de92: lea    rcx,[rip+0xa300ff]        # 0x1418adf98
0x00e7de99: call   0x1402471c0
0x00e7de9e: mov    r8,rax
0x00e7dea1: shr    r8,0x20
0x00e7dea5: mov    eax,0x10624dd3
0x00e7deaa: mul    r8d
0x00e7dead: shr    edx,0x7
0x00e7deb0: imul   ecx,edx,0x7d0
0x00e7deb6: sub    r8d,ecx
0x00e7deb9: add    r13d,r8d
0x00e7debc: mov    eax,0x299c335d
0x00e7dec1: imul   r13d
0x00e7dec4: sar    edx,0x10
0x00e7dec7: mov    eax,edx
0x00e7dec9: shr    eax,0x1f
0x00e7decc: add    edx,eax
0x00e7dece: imul   eax,edx,0x62700
0x00e7ded4: sub    r13d,eax
0x00e7ded7: mov    DWORD PTR [rsp+0x54],r13d
0x00e7dedc: lea    rdx,[rsp+0x70]
0x00e7dee1: lea    rcx,[rdi+0x658]
0x00e7dee8: call   0x14006f240
0x00e7deed: lea    rdx,[rsp+0x68]
0x00e7def2: lea    rcx,[rdi+0x658]
0x00e7def9: call   0x14006f230
0x00e7defe: mov    edi,esi
0x00e7df00: mov    DWORD PTR [rsp+0x58],esi
0x00e7df04: mov    DWORD PTR [rsp+0x5c],r14d
0x00e7df09: mov    r14d,0xff
0x00e7df0f: mov    rax,QWORD PTR [rsp+0x70]
0x00e7df14: cmp    rax,QWORD PTR [rsp+0x68]
0x00e7df19: je     0x140e834d4
0x00e7df1f: mov    edx,0x1
0x00e7df24: cmovb  edx,r14d
0x00e7df28: test   dl,dl
0x00e7df2a: jns    0x140e834d4
0x00e7df30: lea    rcx,[rsp+0x70]
0x00e7df35: call   0x14006ee10
0x00e7df3a: mov    rsi,QWORD PTR [rax]
0x00e7df3d: cmp    WORD PTR [rsi+0x100],0xffff
0x00e7df45: je     0x140e7e1e9
0x00e7df4b: mov    eax,DWORD PTR [rsi+0x13c]
0x00e7df51: cmp    eax,0xffffffff
0x00e7df54: je     0x140e7df81
0x00e7df56: mov    ecx,DWORD PTR [rsi+0x140]
0x00e7df5c: cmp    eax,ecx
0x00e7df5e: jg     0x140e7df73
0x00e7df60: cmp    r13d,eax
0x00e7df63: jl     0x140e7e1e9
0x00e7df69: cmp    ecx,r13d
0x00e7df6c: jge    0x140e7df81
0x00e7df6e: jmp    0x140e7e1e9
0x00e7df73: cmp    ecx,r13d
0x00e7df76: jle    0x140e7df81
0x00e7df78: cmp    r13d,eax
0x00e7df7b: jl     0x140e7e1e9
0x00e7df81: mov    eax,0x2aaaaaab
0x00e7df86: imul   DWORD PTR [rsp+0x5c]
0x00e7df8a: mov    r9d,edx
0x00e7df8d: sar    r9d,0x3
0x00e7df91: mov    eax,r9d
0x00e7df94: shr    eax,0x1f
0x00e7df97: add    r9d,eax
0x00e7df9a: add    r9d,DWORD PTR [rip+0x166a14b]        # 0x1424e80ec
0x00e7dfa1: mov    rcx,QWORD PTR [rip+0x166dbb0]        # 0x1424ebb58
0x00e7dfa8: imul   r9d,DWORD PTR [rcx+0xa0]
0x00e7dfb0: shl    r9d,0x4
0x00e7dfb4: mov    eax,0x2aaaaaab
0x00e7dfb9: imul   edi
0x00e7dfbb: mov    r8d,edx
0x00e7dfbe: sar    r8d,0x3
0x00e7dfc2: mov    eax,r8d
0x00e7dfc5: shr    eax,0x1f
0x00e7dfc8: add    r8d,eax
0x00e7dfcb: mov    edx,DWORD PTR [rip+0x166a117]        # 0x1424e80e8
0x00e7dfd1: add    edx,r9d
0x00e7dfd4: add    edx,r8d
0x00e7dfd7: call   0x14010aab0
0x00e7dfdc: mov    r8,rax
0x00e7dfdf: mov    QWORD PTR [rsp+0x60],rax
0x00e7dfe4: test   rax,rax
0x00e7dfe7: je     0x140e7e1ce
0x00e7dfed: mov    eax,0x2aaaaaab
0x00e7dff2: imul   edi
0x00e7dff4: sar    edx,0x3
0x00e7dff7: mov    ecx,edx
0x00e7dff9: shr    ecx,0x1f
0x00e7dffc: add    edx,ecx
0x00e7dffe: lea    eax,[rdx+rdx*2]
0x00e7e001: shl    eax,0x4
0x00e7e004: mov    r13d,edi
0x00e7e007: sub    r13d,eax
0x00e7e00a: mov    eax,0x2aaaaaab
0x00e7e00f: mov    ecx,DWORD PTR [rsp+0x5c]
0x00e7e013: imul   ecx
0x00e7e015: sar    edx,0x3
0x00e7e018: mov    eax,edx
0x00e7e01a: shr    eax,0x1f
0x00e7e01d: add    edx,eax
0x00e7e01f: lea    eax,[rdx+rdx*2]
0x00e7e022: shl    eax,0x4
0x00e7e025: sub    ecx,eax
0x00e7e027: mov    DWORD PTR [rsp+0x78],ecx
0x00e7e02b: movzx  eax,r15w
0x00e7e02f: add    ax,WORD PTR [rip+0x166a0ba]        # 0x1424e80f0
0x00e7e036: mov    WORD PTR [rsp+0x50],ax
0x00e7e03b: lea    rdi,[r8+0x120]
0x00e7e042: lea    rdx,[rbp-0x78]
0x00e7e046: mov    rcx,rdi
0x00e7e049: call   0x14006f240
0x00e7e04e: lea    rdx,[rbp-0x40]
0x00e7e052: mov    rcx,rdi
0x00e7e055: call   0x14006f230
0x00e7e05a: mov    rdi,QWORD PTR [rsp+0x60]
0x00e7e05f: lea    rdx,[rbp-0x70]
0x00e7e063: lea    rcx,[rdi+0x138]
0x00e7e06a: call   0x14006f240
0x00e7e06f: lea    rdx,[rbp-0x8]
0x00e7e073: lea    rcx,[rdi+0x138]
0x00e7e07a: call   0x14006f230
0x00e7e07f: lea    rdx,[rbp-0x50]
0x00e7e083: lea    rcx,[rdi+0x150]
0x00e7e08a: call   0x14006f240
0x00e7e08f: lea    rdx,[rbp-0x10]
0x00e7e093: lea    rcx,[rdi+0x150]
0x00e7e09a: call   0x14006f230
0x00e7e09f: lea    rdx,[rbp-0x58]
0x00e7e0a3: lea    rcx,[rdi+0x168]
0x00e7e0aa: call   0x14006f240
0x00e7e0af: lea    rdx,[rbp-0x18]
0x00e7e0b3: lea    rcx,[rdi+0x168]
0x00e7e0ba: call   0x14006f230
0x00e7e0bf: lea    rdx,[rbp-0x60]
0x00e7e0c3: lea    rcx,[rdi+0x180]
0x00e7e0ca: call   0x14006f240
0x00e7e0cf: lea    rdx,[rbp-0x20]
0x00e7e0d3: lea    rcx,[rdi+0x180]
0x00e7e0da: call   0x14006f230
0x00e7e0df: lea    rdx,[rbp-0x68]
0x00e7e0e3: lea    rcx,[rdi+0x198]
0x00e7e0ea: call   0x14006f240
0x00e7e0ef: lea    rdx,[rbp-0x28]
0x00e7e0f3: lea    rcx,[rdi+0x198]
0x00e7e0fa: call   0x14006f230
0x00e7e0ff: mov    edi,DWORD PTR [rsp+0x78]
0x00e7e103: nop    DWORD PTR [rax+0x0]
0x00e7e107: nop    WORD PTR [rax+rax*1+0x0]
0x00e7e110: mov    rax,QWORD PTR [rbp-0x78]
0x00e7e114: cmp    rax,QWORD PTR [rbp-0x40]
0x00e7e118: je     0x140e7e1ce
0x00e7e11e: mov    edx,0x1
0x00e7e123: cmovb  edx,r14d
0x00e7e127: test   dl,dl
0x00e7e129: jns    0x140e7e1ce
0x00e7e12f: lea    rcx,[rbp-0x78]
0x00e7e133: call   0x14006ee10
0x00e7e138: cmp    WORD PTR [rax],r13w
0x00e7e13c: jne    0x140e7e193
0x00e7e13e: lea    rcx,[rbp-0x70]
0x00e7e142: call   0x14006ee10
0x00e7e147: cmp    WORD PTR [rax],di
0x00e7e14a: jne    0x140e7e193
0x00e7e14c: lea    rcx,[rbp-0x50]
0x00e7e150: call   0x14006ee10
0x00e7e155: movzx  ecx,WORD PTR [rsp+0x50]
0x00e7e15a: cmp    WORD PTR [rax],cx
0x00e7e15d: jne    0x140e7e193
0x00e7e15f: lea    rcx,[rbp-0x58]
0x00e7e163: call   0x14006ee10
0x00e7e168: cmp    DWORD PTR [rax],r12d
0x00e7e16b: jne    0x140e7e193
0x00e7e16d: lea    rcx,[rbp-0x60]
0x00e7e171: call   0x14006ee10
0x00e7e176: mov    ecx,DWORD PTR [rsi+0x148]
0x00e7e17c: cmp    DWORD PTR [rax],ecx
0x00e7e17e: jl     0x140e7e193
0x00e7e180: lea    rcx,[rbp-0x68]
0x00e7e184: call   0x14006ee10
0x00e7e189: mov    ecx,DWORD PTR [rip+0x14f6565]        # 0x1423746f4
0x00e7e18f: cmp    DWORD PTR [rax],ecx
0x00e7e191: je     0x140e7e1e9
0x00e7e193: lea    rcx,[rbp-0x78]
0x00e7e197: call   0x14006f430
0x00e7e19c: lea    rcx,[rbp-0x70]
0x00e7e1a0: call   0x14006f430
0x00e7e1a5: lea    rcx,[rbp-0x50]
0x00e7e1a9: call   0x14006f430
0x00e7e1ae: lea    rcx,[rbp-0x58]
0x00e7e1b2: call   0x14006f350
0x00e7e1b7: lea    rcx,[rbp-0x60]
0x00e7e1bb: call   0x14006f350
0x00e7e1c0: lea    rcx,[rbp-0x68]
0x00e7e1c4: call   0x14006f350
0x00e7e1c9: jmp    0x140e7e110
0x00e7e1ce: lea    rdx,[rip+0x76af03]        # 0x1415e90d8 ; literal=", "
0x00e7e1d5: mov    rcx,rbx
0x00e7e1d8: call   0x14006f560
0x00e7e1dd: lea    rdx,[rsi+0x40]
0x00e7e1e1: mov    rcx,rbx
0x00e7e1e4: call   0x1400b9d10
0x00e7e1e9: mov    rax,QWORD PTR [rsp+0x70]
0x00e7e1ee: add    rax,0x8
0x00e7e1f2: mov    QWORD PTR [rsp+0x70],rax
0x00e7e1f7: inc    r12d
0x00e7e1fa: mov    r13d,DWORD PTR [rsp+0x54]
0x00e7e1ff: mov    edi,DWORD PTR [rsp+0x58]
0x00e7e203: jmp    0x140e7df14
0x00e7e208: mov    r8d,0x5
0x00e7e20e: lea    rdx,[rip+0x8b319b]        # 0x1417313b0 ; literal="Grass"
0x00e7e215: jmp    0x140e834cb
0x00e7e21a: movzx  r9d,r15w
0x00e7e21e: movzx  r8d,r14w
0x00e7e222: movzx  edx,si
0x00e7e225: mov    rcx,rdi
0x00e7e228: call   0x1414d1330
0x00e7e22d: mov    r13,rax
0x00e7e230: test   rax,rax
0x00e7e233: je     0x140e7e6c8
0x00e7e239: lea    rcx,[rdi+0x11b408]
0x00e7e240: mov    edx,DWORD PTR [rax+0x8]
0x00e7e243: call   0x14014d850
0x00e7e248: mov    rdi,rax
0x00e7e24b: test   rax,rax
0x00e7e24e: je     0x140e7e6c8
0x00e7e254: mov    ecx,esi
0x00e7e256: and    ecx,0x8000000f
0x00e7e25c: jge    0x140e7e265
0x00e7e25e: dec    ecx
0x00e7e260: or     ecx,0xfffffff0
0x00e7e263: inc    ecx
0x00e7e265: mov    edx,r14d
0x00e7e268: and    edx,0x8000000f
0x00e7e26e: jge    0x140e7e277
0x00e7e270: dec    edx
0x00e7e272: or     edx,0xfffffff0
0x00e7e275: inc    edx
0x00e7e277: movsx  rax,cx
0x00e7e27b: shl    rax,0x4
0x00e7e27f: movsx  rcx,dx
0x00e7e283: add    rax,r13
0x00e7e286: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e7e28b: cmp    dl,0x43
0x00e7e28e: jb     0x140e7e299
0x00e7e290: lea    rdx,[rip+0x8b3151]        # 0x1417313e8 ; literal="Dense "
0x00e7e297: jmp    0x140e7e2a5
0x00e7e299: cmp    dl,0x21
0x00e7e29c: ja     0x140e7e2ad
0x00e7e29e: lea    rdx,[rip+0x8b3103]        # 0x1417313a8 ; literal="Sparse "
0x00e7e2a5: mov    rcx,rbx
0x00e7e2a8: call   0x14006f560
0x00e7e2ad: lea    rdx,[rip+0x8b3104]        # 0x1417313b8 ; literal="Dry "
0x00e7e2b4: mov    rcx,rbx
0x00e7e2b7: call   0x14006f560
0x00e7e2bc: lea    rdx,[rdi+0x50]
0x00e7e2c0: mov    rcx,rbx
0x00e7e2c3: call   0x1400b9d10
0x00e7e2c8: cmp    BYTE PTR [rbp+0xc8],r12b
0x00e7e2cf: je     0x140e834d4
0x00e7e2d5: movsxd rax,DWORD PTR [rip+0x1669e0c]        # 0x1424e80e8
0x00e7e2dc: lea    r8,[rax+rax*2]
0x00e7e2e0: shl    r8,0x4
0x00e7e2e4: add    r8,rsi
0x00e7e2e7: movsxd rax,DWORD PTR [rip+0x1669dfe]        # 0x1424e80ec
0x00e7e2ee: lea    rdx,[rax+rax*2]
0x00e7e2f2: shl    rdx,0x4
0x00e7e2f6: add    rdx,r14
0x00e7e2f9: movsxd rcx,DWORD PTR [rip+0x1669df0]        # 0x1424e80f0
0x00e7e300: add    rcx,r15
0x00e7e303: mov    r13d,DWORD PTR [rip+0x1509cba]        # 0x142387fc4
0x00e7e30a: imul   rax,rcx,0x2710
0x00e7e311: add    rax,rdx
0x00e7e314: imul   rcx,rax,0x2710
0x00e7e31b: add    rcx,r8
0x00e7e31e: mov    QWORD PTR [rip+0xa2fc73],rcx        # 0x1418adf98
0x00e7e325: lea    rcx,[rip+0xa2fc6c]        # 0x1418adf98
0x00e7e32c: call   0x1402471c0
0x00e7e331: mov    r8,rax
0x00e7e334: shr    r8,0x20
0x00e7e338: mov    eax,0x10624dd3
0x00e7e33d: mul    r8d
0x00e7e340: shr    edx,0x7
0x00e7e343: imul   ecx,edx,0x7d0
0x00e7e349: sub    r8d,ecx
0x00e7e34c: add    r13d,r8d
0x00e7e34f: mov    eax,0x299c335d
0x00e7e354: imul   r13d
0x00e7e357: sar    edx,0x10
0x00e7e35a: mov    eax,edx
0x00e7e35c: shr    eax,0x1f
0x00e7e35f: add    edx,eax
0x00e7e361: imul   eax,edx,0x62700
0x00e7e367: sub    r13d,eax
0x00e7e36a: mov    DWORD PTR [rsp+0x5c],r13d
0x00e7e36f: lea    rdx,[rsp+0x68]
0x00e7e374: lea    rcx,[rdi+0x658]
0x00e7e37b: call   0x14006f240
0x00e7e380: lea    rdx,[rbp-0x40]
0x00e7e384: lea    rcx,[rdi+0x658]
0x00e7e38b: call   0x14006f230
0x00e7e390: lea    r8,[rbp-0x40]
0x00e7e394: lea    rdx,[rsp+0x54]
0x00e7e399: lea    rcx,[rsp+0x68]
0x00e7e39e: call   0x14006ee20
0x00e7e3a3: xor    edx,edx
0x00e7e3a5: movzx  ecx,BYTE PTR [rax]
0x00e7e3a8: call   0x1400657b0
0x00e7e3ad: test   al,al
0x00e7e3af: je     0x140e834d4
0x00e7e3b5: mov    edi,esi
0x00e7e3b7: mov    DWORD PTR [rsp+0x60],esi
0x00e7e3bb: mov    DWORD PTR [rsp+0x78],r14d
0x00e7e3c0: lea    rcx,[rsp+0x68]
0x00e7e3c5: call   0x14006ee10
0x00e7e3ca: mov    rsi,QWORD PTR [rax]
0x00e7e3cd: cmp    WORD PTR [rsi+0x100],0xffff
0x00e7e3d5: je     0x140e7e688
0x00e7e3db: mov    eax,DWORD PTR [rsi+0x13c]
0x00e7e3e1: cmp    eax,0xffffffff
0x00e7e3e4: je     0x140e7e411
0x00e7e3e6: mov    ecx,DWORD PTR [rsi+0x140]
0x00e7e3ec: cmp    eax,ecx
0x00e7e3ee: jg     0x140e7e403
0x00e7e3f0: cmp    r13d,eax
0x00e7e3f3: jl     0x140e7e688
0x00e7e3f9: cmp    ecx,r13d
0x00e7e3fc: jge    0x140e7e411
0x00e7e3fe: jmp    0x140e7e688
0x00e7e403: cmp    ecx,r13d
0x00e7e406: jle    0x140e7e411
0x00e7e408: cmp    r13d,eax
0x00e7e40b: jl     0x140e7e688
0x00e7e411: mov    eax,0x2aaaaaab
0x00e7e416: imul   edi
0x00e7e418: mov    r8d,edx
0x00e7e41b: sar    r8d,0x3
0x00e7e41f: mov    eax,r8d
0x00e7e422: shr    eax,0x1f
0x00e7e425: add    r8d,eax
0x00e7e428: add    r8d,DWORD PTR [rip+0x1669cb9]        # 0x1424e80e8
0x00e7e42f: mov    eax,0x2aaaaaab
0x00e7e434: mov    r13d,DWORD PTR [rsp+0x78]
0x00e7e439: imul   r13d
0x00e7e43c: sar    edx,0x3
0x00e7e43f: mov    eax,edx
0x00e7e441: shr    eax,0x1f
0x00e7e444: add    edx,eax
0x00e7e446: add    edx,DWORD PTR [rip+0x1669ca0]        # 0x1424e80ec
0x00e7e44c: mov    rcx,QWORD PTR [rip+0x166d705]        # 0x1424ebb58
0x00e7e453: imul   edx,DWORD PTR [rcx+0xa0]
0x00e7e45a: shl    edx,0x4
0x00e7e45d: add    edx,r8d
0x00e7e460: call   0x14010aab0
0x00e7e465: mov    r8,rax
0x00e7e468: mov    QWORD PTR [rbp-0x80],rax
0x00e7e46c: test   rax,rax
0x00e7e46f: je     0x140e7e66d
0x00e7e475: mov    eax,0x2aaaaaab
0x00e7e47a: imul   edi
0x00e7e47c: sar    edx,0x3
0x00e7e47f: mov    ecx,edx
0x00e7e481: shr    ecx,0x1f
0x00e7e484: add    edx,ecx
0x00e7e486: lea    eax,[rdx+rdx*2]
0x00e7e489: shl    eax,0x4
0x00e7e48c: mov    r14d,edi
0x00e7e48f: sub    r14d,eax
0x00e7e492: mov    eax,0x2aaaaaab
0x00e7e497: imul   r13d
0x00e7e49a: sar    edx,0x3
0x00e7e49d: mov    eax,edx
0x00e7e49f: shr    eax,0x1f
0x00e7e4a2: add    edx,eax
0x00e7e4a4: lea    eax,[rdx+rdx*2]
0x00e7e4a7: shl    eax,0x4
0x00e7e4aa: sub    r13d,eax
0x00e7e4ad: movzx  eax,r15w
0x00e7e4b1: add    ax,WORD PTR [rip+0x1669c38]        # 0x1424e80f0
0x00e7e4b8: mov    WORD PTR [rsp+0x50],ax
0x00e7e4bd: lea    rdi,[r8+0x120]
0x00e7e4c4: lea    rdx,[rsp+0x70]
0x00e7e4c9: mov    rcx,rdi
0x00e7e4cc: call   0x14006f240
0x00e7e4d1: lea    rdx,[rbp-0x68]
0x00e7e4d5: mov    rcx,rdi
0x00e7e4d8: call   0x14006f230
0x00e7e4dd: mov    rdi,QWORD PTR [rbp-0x80]
0x00e7e4e1: lea    rdx,[rbp-0x70]
0x00e7e4e5: lea    rcx,[rdi+0x138]
0x00e7e4ec: call   0x14006f240
0x00e7e4f1: lea    rdx,[rbp-0x8]
0x00e7e4f5: lea    rcx,[rdi+0x138]
0x00e7e4fc: call   0x14006f230
0x00e7e501: lea    rdx,[rbp-0x78]
0x00e7e505: lea    rcx,[rdi+0x150]
0x00e7e50c: call   0x14006f240
0x00e7e511: lea    rdx,[rbp-0x10]
0x00e7e515: lea    rcx,[rdi+0x150]
0x00e7e51c: call   0x14006f230
0x00e7e521: lea    rdx,[rbp-0x50]
0x00e7e525: lea    rcx,[rdi+0x168]
0x00e7e52c: call   0x14006f240
0x00e7e531: lea    rdx,[rbp-0x18]
0x00e7e535: lea    rcx,[rdi+0x168]
0x00e7e53c: call   0x14006f230
0x00e7e541: lea    rdx,[rbp-0x58]
0x00e7e545: lea    rcx,[rdi+0x180]
0x00e7e54c: call   0x14006f240
0x00e7e551: lea    rdx,[rbp-0x20]
0x00e7e555: lea    rcx,[rdi+0x180]
0x00e7e55c: call   0x14006f230
0x00e7e561: lea    rdx,[rbp-0x60]
0x00e7e565: lea    rcx,[rdi+0x198]
0x00e7e56c: call   0x14006f240
0x00e7e571: lea    rdx,[rbp-0x28]
0x00e7e575: lea    rcx,[rdi+0x198]
0x00e7e57c: call   0x14006f230
0x00e7e581: lea    r8,[rbp-0x68]
0x00e7e585: lea    rdx,[rsp+0x58]
0x00e7e58a: lea    rcx,[rsp+0x70]
0x00e7e58f: call   0x14006ee20
0x00e7e594: xor    edx,edx
0x00e7e596: movzx  ecx,BYTE PTR [rax]
0x00e7e599: call   0x1400657b0
0x00e7e59e: test   al,al
0x00e7e5a0: je     0x140e7e66d
0x00e7e5a6: movzx  edi,WORD PTR [rsp+0x50]
0x00e7e5ab: nop    DWORD PTR [rax+rax*1+0x0]
0x00e7e5b0: lea    rcx,[rsp+0x70]
0x00e7e5b5: call   0x14006ee10
0x00e7e5ba: cmp    WORD PTR [rax],r14w
0x00e7e5be: jne    0x140e7e611
0x00e7e5c0: lea    rcx,[rbp-0x70]
0x00e7e5c4: call   0x14006ee10
0x00e7e5c9: cmp    WORD PTR [rax],r13w
0x00e7e5cd: jne    0x140e7e611
0x00e7e5cf: lea    rcx,[rbp-0x78]
0x00e7e5d3: call   0x14006ee10
0x00e7e5d8: cmp    WORD PTR [rax],di
0x00e7e5db: jne    0x140e7e611
0x00e7e5dd: lea    rcx,[rbp-0x50]
0x00e7e5e1: call   0x14006ee10
0x00e7e5e6: cmp    DWORD PTR [rax],r12d
0x00e7e5e9: jne    0x140e7e611
0x00e7e5eb: lea    rcx,[rbp-0x58]
0x00e7e5ef: call   0x14006ee10
0x00e7e5f4: mov    ecx,DWORD PTR [rsi+0x148]
0x00e7e5fa: cmp    DWORD PTR [rax],ecx
0x00e7e5fc: jl     0x140e7e611
0x00e7e5fe: lea    rcx,[rbp-0x60]
0x00e7e602: call   0x14006ee10
0x00e7e607: mov    ecx,DWORD PTR [rip+0x14f60e7]        # 0x1423746f4
0x00e7e60d: cmp    DWORD PTR [rax],ecx
0x00e7e60f: je     0x140e7e688
0x00e7e611: lea    rcx,[rsp+0x70]
0x00e7e616: call   0x14006f430
0x00e7e61b: lea    rcx,[rbp-0x70]
0x00e7e61f: call   0x14006f430
0x00e7e624: lea    rcx,[rbp-0x78]
0x00e7e628: call   0x14006f430
0x00e7e62d: lea    rcx,[rbp-0x50]
0x00e7e631: call   0x14006f350
0x00e7e636: lea    rcx,[rbp-0x58]
0x00e7e63a: call   0x14006f350
0x00e7e63f: lea    rcx,[rbp-0x60]
0x00e7e643: call   0x14006f350
0x00e7e648: lea    r8,[rbp-0x68]
0x00e7e64c: lea    rdx,[rsp+0x58]
0x00e7e651: lea    rcx,[rsp+0x70]
0x00e7e656: call   0x14006ee20
0x00e7e65b: xor    edx,edx
0x00e7e65d: movzx  ecx,BYTE PTR [rax]
0x00e7e660: call   0x1400657b0
0x00e7e665: test   al,al
0x00e7e667: jne    0x140e7e5b0
0x00e7e66d: lea    rdx,[rip+0x76aa64]        # 0x1415e90d8 ; literal=", "
0x00e7e674: mov    rcx,rbx
0x00e7e677: call   0x14006f560
0x00e7e67c: lea    rdx,[rsi+0x40]
0x00e7e680: mov    rcx,rbx
0x00e7e683: call   0x1400b9d10
0x00e7e688: lea    rcx,[rsp+0x68]
0x00e7e68d: call   0x14006ee00
0x00e7e692: inc    r12d
0x00e7e695: lea    r8,[rbp-0x40]
0x00e7e699: lea    rdx,[rsp+0x54]
0x00e7e69e: lea    rcx,[rsp+0x68]
0x00e7e6a3: call   0x14006ee20
0x00e7e6a8: xor    edx,edx
0x00e7e6aa: movzx  ecx,BYTE PTR [rax]
0x00e7e6ad: call   0x1400657b0
0x00e7e6b2: test   al,al
0x00e7e6b4: mov    r13d,DWORD PTR [rsp+0x5c]
0x00e7e6b9: mov    edi,DWORD PTR [rsp+0x60]
0x00e7e6bd: jne    0x140e7e3c0
0x00e7e6c3: jmp    0x140e834d4
0x00e7e6c8: lea    rdx,[rip+0x8b2cf1]        # 0x1417313c0 ; literal="Dry Grass"
0x00e7e6cf: mov    rcx,rbx
0x00e7e6d2: call   0x14006f560
0x00e7e6d7: jmp    0x140e834d4
0x00e7e6dc: movzx  r9d,r15w
0x00e7e6e0: movzx  r8d,r14w
0x00e7e6e4: movzx  edx,si
0x00e7e6e7: mov    rcx,rdi
0x00e7e6ea: call   0x1414d1330
0x00e7e6ef: mov    r15,rax
0x00e7e6f2: test   rax,rax
0x00e7e6f5: je     0x140e7e78b
0x00e7e6fb: lea    rcx,[rdi+0x11b408]
0x00e7e702: mov    edx,DWORD PTR [rax+0x8]
0x00e7e705: call   0x14014d850
0x00e7e70a: mov    rdi,rax
0x00e7e70d: test   rax,rax
0x00e7e710: je     0x140e7e78b
0x00e7e712: mov    edx,esi
0x00e7e714: and    edx,0x8000000f
0x00e7e71a: jge    0x140e7e723
0x00e7e71c: dec    edx
0x00e7e71e: or     edx,0xfffffff0
0x00e7e721: inc    edx
0x00e7e723: mov    ecx,r14d
0x00e7e726: and    ecx,0x8000000f
0x00e7e72c: jge    0x140e7e735
0x00e7e72e: dec    ecx
0x00e7e730: or     ecx,0xfffffff0
0x00e7e733: inc    ecx
0x00e7e735: movsx  rax,dx
0x00e7e739: shl    rax,0x4
0x00e7e73d: movsx  rcx,cx
0x00e7e741: add    rax,r15
0x00e7e744: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e7e749: cmp    dl,0x43
0x00e7e74c: jb     0x140e7e757
0x00e7e74e: lea    rdx,[rip+0x8b2c93]        # 0x1417313e8 ; literal="Dense "
0x00e7e755: jmp    0x140e7e763
0x00e7e757: cmp    dl,0x21
0x00e7e75a: ja     0x140e7e76b
0x00e7e75c: lea    rdx,[rip+0x8b2c45]        # 0x1417313a8 ; literal="Sparse "
0x00e7e763: mov    rcx,rbx
0x00e7e766: call   0x14006f560
0x00e7e76b: lea    rdx,[rip+0x8b2c6e]        # 0x1417313e0 ; literal="Dead "
0x00e7e772: mov    rcx,rbx
0x00e7e775: call   0x14006f560
0x00e7e77a: lea    rdx,[rdi+0x50]
0x00e7e77e: mov    rcx,rbx
0x00e7e781: call   0x1400b9d10
0x00e7e786: jmp    0x140e834d4
0x00e7e78b: lea    rdx,[rip+0x8b2c96]        # 0x141731428 ; literal="Dead Grass"
0x00e7e792: mov    rcx,rbx
0x00e7e795: call   0x14006f560
0x00e7e79a: jmp    0x140e834d4
0x00e7e79f: lea    rax,[rip+0x8b2c8e]        # 0x141731434 ; literal="Level"
0x00e7e7a6: lea    rdx,[rip+0x8b2bdb]        # 0x141731388 ; literal="Sculpted"
0x00e7e7ad: cmp    BYTE PTR [rsp+0x58],r12b
0x00e7e7b2: cmove  rdx,rax
0x00e7e7b6: mov    rcx,rbx
0x00e7e7b9: call   0x14006f560
0x00e7e7be: lea    rdx,[rip+0x8b2c7b]        # 0x141731440 ; literal=" Ice Floor"
0x00e7e7c5: mov    rcx,rbx
0x00e7e7c8: call   0x14006f560
0x00e7e7cd: jmp    0x140e834d4
0x00e7e7d2: lea    rdx,[rip+0x8b2c17]        # 0x1417313f0 ; literal="Shoddy "
0x00e7e7d9: mov    rcx,rbx
0x00e7e7dc: call   0x14006f560
0x00e7e7e1: mov    BYTE PTR [rsp+0x28],0x1
0x00e7e7e6: mov    QWORD PTR [rsp+0x20],rbx
0x00e7e7eb: movzx  r9d,r15w
0x00e7e7ef: movzx  r8d,r14w
0x00e7e7f3: movzx  edx,si
0x00e7e7f6: mov    rcx,rdi
0x00e7e7f9: call   0x140a46f20
0x00e7e7fe: lea    rdx,[rip+0x8b2c47]        # 0x14173144c ; literal=" Floor"
0x00e7e805: mov    rcx,rbx
0x00e7e808: call   0x14006f560
0x00e7e80d: jmp    0x140e834d4
0x00e7e812: lea    rax,[rsp+0x50]
0x00e7e817: mov    QWORD PTR [rsp+0x40],rax
0x00e7e81c: lea    rax,[rsp+0x60]
0x00e7e821: mov    QWORD PTR [rsp+0x38],rax
0x00e7e826: lea    rax,[rsp+0x54]
0x00e7e82b: mov    QWORD PTR [rsp+0x30],rax
0x00e7e830: lea    rax,[rsp+0x58]
0x00e7e835: mov    QWORD PTR [rsp+0x28],rax
0x00e7e83a: lea    rax,[rsp+0x5c]
0x00e7e83f: mov    QWORD PTR [rsp+0x20],rax
0x00e7e844: movzx  r9d,r15w
0x00e7e848: movzx  r8d,r14w
0x00e7e84c: movzx  edx,si
0x00e7e84f: mov    rcx,rdi
0x00e7e852: call   0x1414d0c70
0x00e7e857: movzx  eax,WORD PTR [rsp+0x50]
0x00e7e85c: mov    WORD PTR [rsp+0x30],ax
0x00e7e861: mov    BYTE PTR [rsp+0x28],r12b
0x00e7e866: mov    DWORD PTR [rsp+0x20],r12d
0x00e7e86b: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7e870: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7e876: lea    rdx,[rbp+0x0]
0x00e7e87a: mov    rcx,rdi
0x00e7e87d: call   0x1414d1920
0x00e7e882: lea    rdx,[rbp+0x0]
0x00e7e886: mov    rcx,rbx
0x00e7e889: call   0x1400b9d10
0x00e7e88e: lea    rdx,[rip+0x8b2b63]        # 0x1417313f8 ; literal=" Track (N)"
0x00e7e895: mov    rcx,rbx
0x00e7e898: call   0x14006f560
0x00e7e89d: jmp    0x140e834d4
0x00e7e8a2: mov    BYTE PTR [rsp+0x28],0x1
0x00e7e8a7: mov    QWORD PTR [rsp+0x20],rbx
0x00e7e8ac: movzx  r9d,r15w
0x00e7e8b0: movzx  r8d,r14w
0x00e7e8b4: movzx  edx,si
0x00e7e8b7: mov    rcx,rdi
0x00e7e8ba: call   0x140a46f20
0x00e7e8bf: lea    rdx,[rip+0x8b2b32]        # 0x1417313f8 ; literal=" Track (N)"
0x00e7e8c6: mov    rcx,rbx
0x00e7e8c9: call   0x14006f560
0x00e7e8ce: jmp    0x140e834d4
0x00e7e8d3: lea    rdx,[rip+0x8b2b2e]        # 0x141731408 ; literal="Ice Track (N)"
0x00e7e8da: mov    rcx,rbx
0x00e7e8dd: call   0x14006f560
0x00e7e8e2: jmp    0x140e834d4
0x00e7e8e7: lea    rax,[rsp+0x50]
0x00e7e8ec: mov    QWORD PTR [rsp+0x40],rax
0x00e7e8f1: lea    rax,[rsp+0x60]
0x00e7e8f6: mov    QWORD PTR [rsp+0x38],rax
0x00e7e8fb: lea    rax,[rsp+0x54]
0x00e7e900: mov    QWORD PTR [rsp+0x30],rax
0x00e7e905: lea    rax,[rsp+0x5c]
0x00e7e90a: mov    QWORD PTR [rsp+0x28],rax
0x00e7e90f: lea    rax,[rsp+0x58]
0x00e7e914: mov    QWORD PTR [rsp+0x20],rax
0x00e7e919: movzx  r9d,r15w
0x00e7e91d: movzx  r8d,r14w
0x00e7e921: movzx  edx,si
0x00e7e924: mov    rcx,rdi
0x00e7e927: call   0x1414d0c70
0x00e7e92c: movzx  eax,WORD PTR [rsp+0x50]
0x00e7e931: mov    WORD PTR [rsp+0x30],ax
0x00e7e936: mov    BYTE PTR [rsp+0x28],r12b
0x00e7e93b: mov    DWORD PTR [rsp+0x20],r12d
0x00e7e940: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7e945: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7e94b: lea    rdx,[rbp+0x0]
0x00e7e94f: mov    rcx,rdi
0x00e7e952: call   0x1414d1920
0x00e7e957: lea    rdx,[rbp+0x0]
0x00e7e95b: mov    rcx,rbx
0x00e7e95e: call   0x1400b9d10
0x00e7e963: lea    rdx,[rip+0x8b2aae]        # 0x141731418 ; literal=" Track (S)"
0x00e7e96a: mov    rcx,rbx
0x00e7e96d: call   0x14006f560
0x00e7e972: jmp    0x140e834d4
0x00e7e977: mov    BYTE PTR [rsp+0x28],0x1
0x00e7e97c: mov    QWORD PTR [rsp+0x20],rbx
0x00e7e981: movzx  r9d,r15w
0x00e7e985: movzx  r8d,r14w
0x00e7e989: movzx  edx,si
0x00e7e98c: mov    rcx,rdi
0x00e7e98f: call   0x140a46f20
0x00e7e994: lea    rdx,[rip+0x8b2a7d]        # 0x141731418 ; literal=" Track (S)"
0x00e7e99b: mov    rcx,rbx
0x00e7e99e: call   0x14006f560
0x00e7e9a3: jmp    0x140e834d4
0x00e7e9a8: lea    rdx,[rip+0x8b2ae9]        # 0x141731498 ; literal="Ice Track (S)"
0x00e7e9af: mov    rcx,rbx
0x00e7e9b2: call   0x14006f560
0x00e7e9b7: jmp    0x140e834d4
0x00e7e9bc: lea    rax,[rsp+0x50]
0x00e7e9c1: mov    QWORD PTR [rsp+0x40],rax
0x00e7e9c6: lea    rax,[rsp+0x60]
0x00e7e9cb: mov    QWORD PTR [rsp+0x38],rax
0x00e7e9d0: lea    rax,[rsp+0x54]
0x00e7e9d5: mov    QWORD PTR [rsp+0x30],rax
0x00e7e9da: lea    rax,[rsp+0x5c]
0x00e7e9df: mov    QWORD PTR [rsp+0x28],rax
0x00e7e9e4: lea    rax,[rsp+0x58]
0x00e7e9e9: mov    QWORD PTR [rsp+0x20],rax
0x00e7e9ee: movzx  r9d,r15w
0x00e7e9f2: movzx  r8d,r14w
0x00e7e9f6: movzx  edx,si
0x00e7e9f9: mov    rcx,rdi
0x00e7e9fc: call   0x1414d0c70
0x00e7ea01: movzx  eax,WORD PTR [rsp+0x50]
0x00e7ea06: mov    WORD PTR [rsp+0x30],ax
0x00e7ea0b: mov    BYTE PTR [rsp+0x28],r12b
0x00e7ea10: mov    DWORD PTR [rsp+0x20],r12d
0x00e7ea15: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7ea1a: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7ea20: lea    rdx,[rbp+0x0]
0x00e7ea24: mov    rcx,rdi
0x00e7ea27: call   0x1414d1920
0x00e7ea2c: lea    rdx,[rbp+0x0]
0x00e7ea30: mov    rcx,rbx
0x00e7ea33: call   0x1400b9d10
0x00e7ea38: lea    rdx,[rip+0x8b2a69]        # 0x1417314a8 ; literal=" Track (E)"
0x00e7ea3f: mov    rcx,rbx
0x00e7ea42: call   0x14006f560
0x00e7ea47: jmp    0x140e834d4
0x00e7ea4c: mov    BYTE PTR [rsp+0x28],0x1
0x00e7ea51: mov    QWORD PTR [rsp+0x20],rbx
0x00e7ea56: movzx  r9d,r15w
0x00e7ea5a: movzx  r8d,r14w
0x00e7ea5e: movzx  edx,si
0x00e7ea61: mov    rcx,rdi
0x00e7ea64: call   0x140a46f20
0x00e7ea69: lea    rdx,[rip+0x8b2a38]        # 0x1417314a8 ; literal=" Track (E)"
0x00e7ea70: mov    rcx,rbx
0x00e7ea73: call   0x14006f560
0x00e7ea78: jmp    0x140e834d4
0x00e7ea7d: lea    rdx,[rip+0x8b2a34]        # 0x1417314b8 ; literal="Ice Track (E)"
0x00e7ea84: mov    rcx,rbx
0x00e7ea87: call   0x14006f560
0x00e7ea8c: jmp    0x140e834d4
0x00e7ea91: lea    rax,[rsp+0x50]
0x00e7ea96: mov    QWORD PTR [rsp+0x40],rax
0x00e7ea9b: lea    rax,[rsp+0x60]
0x00e7eaa0: mov    QWORD PTR [rsp+0x38],rax
0x00e7eaa5: lea    rax,[rsp+0x54]
0x00e7eaaa: mov    QWORD PTR [rsp+0x30],rax
0x00e7eaaf: lea    rax,[rsp+0x5c]
0x00e7eab4: mov    QWORD PTR [rsp+0x28],rax
0x00e7eab9: lea    rax,[rsp+0x58]
0x00e7eabe: mov    QWORD PTR [rsp+0x20],rax
0x00e7eac3: movzx  r9d,r15w
0x00e7eac7: movzx  r8d,r14w
0x00e7eacb: movzx  edx,si
0x00e7eace: mov    rcx,rdi
0x00e7ead1: call   0x1414d0c70
0x00e7ead6: movzx  eax,WORD PTR [rsp+0x50]
0x00e7eadb: mov    WORD PTR [rsp+0x30],ax
0x00e7eae0: mov    BYTE PTR [rsp+0x28],r12b
0x00e7eae5: mov    DWORD PTR [rsp+0x20],r12d
0x00e7eaea: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7eaef: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7eaf5: lea    rdx,[rbp+0x0]
0x00e7eaf9: mov    rcx,rdi
0x00e7eafc: call   0x1414d1920
0x00e7eb01: lea    rdx,[rbp+0x0]
0x00e7eb05: mov    rcx,rbx
0x00e7eb08: call   0x1400b9d10
0x00e7eb0d: lea    rdx,[rip+0x8b29b4]        # 0x1417314c8 ; literal=" Track (W)"
0x00e7eb14: mov    rcx,rbx
0x00e7eb17: call   0x14006f560
0x00e7eb1c: jmp    0x140e834d4
0x00e7eb21: mov    BYTE PTR [rsp+0x28],0x1
0x00e7eb26: mov    QWORD PTR [rsp+0x20],rbx
0x00e7eb2b: movzx  r9d,r15w
0x00e7eb2f: movzx  r8d,r14w
0x00e7eb33: movzx  edx,si
0x00e7eb36: mov    rcx,rdi
0x00e7eb39: call   0x140a46f20
0x00e7eb3e: lea    rdx,[rip+0x8b2983]        # 0x1417314c8 ; literal=" Track (W)"
0x00e7eb45: mov    rcx,rbx
0x00e7eb48: call   0x14006f560
0x00e7eb4d: jmp    0x140e834d4
0x00e7eb52: lea    rdx,[rip+0x8b28ff]        # 0x141731458 ; literal="Ice Track (W)"
0x00e7eb59: mov    rcx,rbx
0x00e7eb5c: call   0x14006f560
0x00e7eb61: jmp    0x140e834d4
0x00e7eb66: lea    rax,[rsp+0x50]
0x00e7eb6b: mov    QWORD PTR [rsp+0x40],rax
0x00e7eb70: lea    rax,[rsp+0x60]
0x00e7eb75: mov    QWORD PTR [rsp+0x38],rax
0x00e7eb7a: lea    rax,[rsp+0x54]
0x00e7eb7f: mov    QWORD PTR [rsp+0x30],rax
0x00e7eb84: lea    rax,[rsp+0x5c]
0x00e7eb89: mov    QWORD PTR [rsp+0x28],rax
0x00e7eb8e: lea    rax,[rsp+0x58]
0x00e7eb93: mov    QWORD PTR [rsp+0x20],rax
0x00e7eb98: movzx  r9d,r15w
0x00e7eb9c: movzx  r8d,r14w
0x00e7eba0: movzx  edx,si
0x00e7eba3: mov    rcx,rdi
0x00e7eba6: call   0x1414d0c70
0x00e7ebab: movzx  eax,WORD PTR [rsp+0x50]
0x00e7ebb0: mov    WORD PTR [rsp+0x30],ax
0x00e7ebb5: mov    BYTE PTR [rsp+0x28],r12b
0x00e7ebba: mov    DWORD PTR [rsp+0x20],r12d
0x00e7ebbf: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7ebc4: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7ebca: lea    rdx,[rbp+0x0]
0x00e7ebce: mov    rcx,rdi
0x00e7ebd1: call   0x1414d1920
0x00e7ebd6: lea    rdx,[rbp+0x0]
0x00e7ebda: mov    rcx,rbx
0x00e7ebdd: call   0x1400b9d10
0x00e7ebe2: lea    rdx,[rip+0x8b287f]        # 0x141731468 ; literal=" Track (NS)"
0x00e7ebe9: mov    rcx,rbx
0x00e7ebec: call   0x14006f560
0x00e7ebf1: jmp    0x140e834d4
0x00e7ebf6: mov    BYTE PTR [rsp+0x28],0x1
0x00e7ebfb: mov    QWORD PTR [rsp+0x20],rbx
0x00e7ec00: movzx  r9d,r15w
0x00e7ec04: movzx  r8d,r14w
0x00e7ec08: movzx  edx,si
0x00e7ec0b: mov    rcx,rdi
0x00e7ec0e: call   0x140a46f20
0x00e7ec13: lea    rdx,[rip+0x8b284e]        # 0x141731468 ; literal=" Track (NS)"
0x00e7ec1a: mov    rcx,rbx
0x00e7ec1d: call   0x14006f560
0x00e7ec22: jmp    0x140e834d4
0x00e7ec27: lea    rdx,[rip+0x8b284a]        # 0x141731478 ; literal="Ice Track (NS)"
0x00e7ec2e: mov    rcx,rbx
0x00e7ec31: call   0x14006f560
0x00e7ec36: jmp    0x140e834d4
0x00e7ec3b: lea    rax,[rsp+0x50]
0x00e7ec40: mov    QWORD PTR [rsp+0x40],rax
0x00e7ec45: lea    rax,[rsp+0x60]
0x00e7ec4a: mov    QWORD PTR [rsp+0x38],rax
0x00e7ec4f: lea    rax,[rsp+0x54]
0x00e7ec54: mov    QWORD PTR [rsp+0x30],rax
0x00e7ec59: lea    rax,[rsp+0x5c]
0x00e7ec5e: mov    QWORD PTR [rsp+0x28],rax
0x00e7ec63: lea    rax,[rsp+0x58]
0x00e7ec68: mov    QWORD PTR [rsp+0x20],rax
0x00e7ec6d: movzx  r9d,r15w
0x00e7ec71: movzx  r8d,r14w
0x00e7ec75: movzx  edx,si
0x00e7ec78: mov    rcx,rdi
0x00e7ec7b: call   0x1414d0c70
0x00e7ec80: movzx  eax,WORD PTR [rsp+0x50]
0x00e7ec85: mov    WORD PTR [rsp+0x30],ax
0x00e7ec8a: mov    BYTE PTR [rsp+0x28],r12b
0x00e7ec8f: mov    DWORD PTR [rsp+0x20],r12d
0x00e7ec94: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7ec99: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7ec9f: lea    rdx,[rbp+0x0]
0x00e7eca3: mov    rcx,rdi
0x00e7eca6: call   0x1414d1920
0x00e7ecab: lea    rdx,[rbp+0x0]
0x00e7ecaf: mov    rcx,rbx
0x00e7ecb2: call   0x1400b9d10
0x00e7ecb7: lea    rdx,[rip+0x8b27ca]        # 0x141731488 ; literal=" Track (NE)"
0x00e7ecbe: mov    rcx,rbx
0x00e7ecc1: call   0x14006f560
0x00e7ecc6: jmp    0x140e834d4
0x00e7eccb: mov    BYTE PTR [rsp+0x28],0x1
0x00e7ecd0: mov    QWORD PTR [rsp+0x20],rbx
0x00e7ecd5: movzx  r9d,r15w
0x00e7ecd9: movzx  r8d,r14w
0x00e7ecdd: movzx  edx,si
0x00e7ece0: mov    rcx,rdi
0x00e7ece3: call   0x140a46f20
0x00e7ece8: lea    rdx,[rip+0x8b2799]        # 0x141731488 ; literal=" Track (NE)"
0x00e7ecef: mov    rcx,rbx
0x00e7ecf2: call   0x14006f560
0x00e7ecf7: jmp    0x140e834d4
0x00e7ecfc: lea    rdx,[rip+0x8b2815]        # 0x141731518 ; literal="Ice Track (NE)"
0x00e7ed03: mov    rcx,rbx
0x00e7ed06: call   0x14006f560
0x00e7ed0b: jmp    0x140e834d4
0x00e7ed10: lea    rax,[rsp+0x50]
0x00e7ed15: mov    QWORD PTR [rsp+0x40],rax
0x00e7ed1a: lea    rax,[rsp+0x60]
0x00e7ed1f: mov    QWORD PTR [rsp+0x38],rax
0x00e7ed24: lea    rax,[rsp+0x54]
0x00e7ed29: mov    QWORD PTR [rsp+0x30],rax
0x00e7ed2e: lea    rax,[rsp+0x5c]
0x00e7ed33: mov    QWORD PTR [rsp+0x28],rax
0x00e7ed38: lea    rax,[rsp+0x58]
0x00e7ed3d: mov    QWORD PTR [rsp+0x20],rax
0x00e7ed42: movzx  r9d,r15w
0x00e7ed46: movzx  r8d,r14w
0x00e7ed4a: movzx  edx,si
0x00e7ed4d: mov    rcx,rdi
0x00e7ed50: call   0x1414d0c70
0x00e7ed55: movzx  eax,WORD PTR [rsp+0x50]
0x00e7ed5a: mov    WORD PTR [rsp+0x30],ax
0x00e7ed5f: mov    BYTE PTR [rsp+0x28],r12b
0x00e7ed64: mov    DWORD PTR [rsp+0x20],r12d
0x00e7ed69: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7ed6e: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7ed74: lea    rdx,[rbp+0x0]
0x00e7ed78: mov    rcx,rdi
0x00e7ed7b: call   0x1414d1920
0x00e7ed80: lea    rdx,[rbp+0x0]
0x00e7ed84: mov    rcx,rbx
0x00e7ed87: call   0x1400b9d10
0x00e7ed8c: lea    rdx,[rip+0x8b2795]        # 0x141731528 ; literal=" Track (NW)"
0x00e7ed93: mov    rcx,rbx
0x00e7ed96: call   0x14006f560
0x00e7ed9b: jmp    0x140e834d4
0x00e7eda0: mov    BYTE PTR [rsp+0x28],0x1
0x00e7eda5: mov    QWORD PTR [rsp+0x20],rbx
0x00e7edaa: movzx  r9d,r15w
0x00e7edae: movzx  r8d,r14w
0x00e7edb2: movzx  edx,si
0x00e7edb5: mov    rcx,rdi
0x00e7edb8: call   0x140a46f20
0x00e7edbd: lea    rdx,[rip+0x8b2764]        # 0x141731528 ; literal=" Track (NW)"
0x00e7edc4: mov    rcx,rbx
0x00e7edc7: call   0x14006f560
0x00e7edcc: jmp    0x140e834d4
0x00e7edd1: lea    rdx,[rip+0x8b2760]        # 0x141731538 ; literal="Ice Track (NW)"
0x00e7edd8: mov    rcx,rbx
0x00e7eddb: call   0x14006f560
0x00e7ede0: jmp    0x140e834d4
0x00e7ede5: lea    rax,[rsp+0x50]
0x00e7edea: mov    QWORD PTR [rsp+0x40],rax
0x00e7edef: lea    rax,[rsp+0x60]
0x00e7edf4: mov    QWORD PTR [rsp+0x38],rax
0x00e7edf9: lea    rax,[rsp+0x54]
0x00e7edfe: mov    QWORD PTR [rsp+0x30],rax
0x00e7ee03: lea    rax,[rsp+0x5c]
0x00e7ee08: mov    QWORD PTR [rsp+0x28],rax
0x00e7ee0d: lea    rax,[rsp+0x58]
0x00e7ee12: mov    QWORD PTR [rsp+0x20],rax
0x00e7ee17: movzx  r9d,r15w
0x00e7ee1b: movzx  r8d,r14w
0x00e7ee1f: movzx  edx,si
0x00e7ee22: mov    rcx,rdi
0x00e7ee25: call   0x1414d0c70
0x00e7ee2a: movzx  eax,WORD PTR [rsp+0x50]
0x00e7ee2f: mov    WORD PTR [rsp+0x30],ax
0x00e7ee34: mov    BYTE PTR [rsp+0x28],r12b
0x00e7ee39: mov    DWORD PTR [rsp+0x20],r12d
0x00e7ee3e: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7ee43: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7ee49: lea    rdx,[rbp+0x0]
0x00e7ee4d: mov    rcx,rdi
0x00e7ee50: call   0x1414d1920
0x00e7ee55: lea    rdx,[rbp+0x0]
0x00e7ee59: mov    rcx,rbx
0x00e7ee5c: call   0x1400b9d10
0x00e7ee61: lea    rdx,[rip+0x8b26e0]        # 0x141731548 ; literal=" Track (SE)"
0x00e7ee68: mov    rcx,rbx
0x00e7ee6b: call   0x14006f560
0x00e7ee70: jmp    0x140e834d4
0x00e7ee75: mov    BYTE PTR [rsp+0x28],0x1
0x00e7ee7a: mov    QWORD PTR [rsp+0x20],rbx
0x00e7ee7f: movzx  r9d,r15w
0x00e7ee83: movzx  r8d,r14w
0x00e7ee87: movzx  edx,si
0x00e7ee8a: mov    rcx,rdi
0x00e7ee8d: call   0x140a46f20
0x00e7ee92: lea    rdx,[rip+0x8b26af]        # 0x141731548 ; literal=" Track (SE)"
0x00e7ee99: mov    rcx,rbx
0x00e7ee9c: call   0x14006f560
0x00e7eea1: jmp    0x140e834d4
0x00e7eea6: lea    rdx,[rip+0x8b262b]        # 0x1417314d8 ; literal="Ice Track (SE)"
0x00e7eead: mov    rcx,rbx
0x00e7eeb0: call   0x14006f560
0x00e7eeb5: jmp    0x140e834d4
0x00e7eeba: lea    rax,[rsp+0x50]
0x00e7eebf: mov    QWORD PTR [rsp+0x40],rax
0x00e7eec4: lea    rax,[rsp+0x60]
0x00e7eec9: mov    QWORD PTR [rsp+0x38],rax
0x00e7eece: lea    rax,[rsp+0x54]
0x00e7eed3: mov    QWORD PTR [rsp+0x30],rax
0x00e7eed8: lea    rax,[rsp+0x5c]
0x00e7eedd: mov    QWORD PTR [rsp+0x28],rax
0x00e7eee2: lea    rax,[rsp+0x58]
0x00e7eee7: mov    QWORD PTR [rsp+0x20],rax
0x00e7eeec: movzx  r9d,r15w
0x00e7eef0: movzx  r8d,r14w
0x00e7eef4: movzx  edx,si
0x00e7eef7: mov    rcx,rdi
0x00e7eefa: call   0x1414d0c70
0x00e7eeff: movzx  eax,WORD PTR [rsp+0x50]
0x00e7ef04: mov    WORD PTR [rsp+0x30],ax
0x00e7ef09: mov    BYTE PTR [rsp+0x28],r12b
0x00e7ef0e: mov    DWORD PTR [rsp+0x20],r12d
0x00e7ef13: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7ef18: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7ef1e: lea    rdx,[rbp+0x0]
0x00e7ef22: mov    rcx,rdi
0x00e7ef25: call   0x1414d1920
0x00e7ef2a: lea    rdx,[rbp+0x0]
0x00e7ef2e: mov    rcx,rbx
0x00e7ef31: call   0x1400b9d10
0x00e7ef36: lea    rdx,[rip+0x8b25ab]        # 0x1417314e8 ; literal=" Track (SW)"
0x00e7ef3d: mov    rcx,rbx
0x00e7ef40: call   0x14006f560
0x00e7ef45: jmp    0x140e834d4
0x00e7ef4a: mov    BYTE PTR [rsp+0x28],0x1
0x00e7ef4f: mov    QWORD PTR [rsp+0x20],rbx
0x00e7ef54: movzx  r9d,r15w
0x00e7ef58: movzx  r8d,r14w
0x00e7ef5c: movzx  edx,si
0x00e7ef5f: mov    rcx,rdi
0x00e7ef62: call   0x140a46f20
0x00e7ef67: lea    rdx,[rip+0x8b257a]        # 0x1417314e8 ; literal=" Track (SW)"
0x00e7ef6e: mov    rcx,rbx
0x00e7ef71: call   0x14006f560
0x00e7ef76: jmp    0x140e834d4
0x00e7ef7b: lea    rdx,[rip+0x8b2576]        # 0x1417314f8 ; literal="Ice Track (SW)"
0x00e7ef82: mov    rcx,rbx
0x00e7ef85: call   0x14006f560
0x00e7ef8a: jmp    0x140e834d4
0x00e7ef8f: lea    rax,[rsp+0x50]
0x00e7ef94: mov    QWORD PTR [rsp+0x40],rax
0x00e7ef99: lea    rax,[rsp+0x60]
0x00e7ef9e: mov    QWORD PTR [rsp+0x38],rax
0x00e7efa3: lea    rax,[rsp+0x54]
0x00e7efa8: mov    QWORD PTR [rsp+0x30],rax
0x00e7efad: lea    rax,[rsp+0x5c]
0x00e7efb2: mov    QWORD PTR [rsp+0x28],rax
0x00e7efb7: lea    rax,[rsp+0x58]
0x00e7efbc: mov    QWORD PTR [rsp+0x20],rax
0x00e7efc1: movzx  r9d,r15w
0x00e7efc5: movzx  r8d,r14w
0x00e7efc9: movzx  edx,si
0x00e7efcc: mov    rcx,rdi
0x00e7efcf: call   0x1414d0c70
0x00e7efd4: movzx  eax,WORD PTR [rsp+0x50]
0x00e7efd9: mov    WORD PTR [rsp+0x30],ax
0x00e7efde: mov    BYTE PTR [rsp+0x28],r12b
0x00e7efe3: mov    DWORD PTR [rsp+0x20],r12d
0x00e7efe8: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7efed: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7eff3: lea    rdx,[rbp+0x0]
0x00e7eff7: mov    rcx,rdi
0x00e7effa: call   0x1414d1920
0x00e7efff: lea    rdx,[rbp+0x0]
0x00e7f003: mov    rcx,rbx
0x00e7f006: call   0x1400b9d10
0x00e7f00b: lea    rdx,[rip+0x8b24f6]        # 0x141731508 ; literal=" Track (EW)"
0x00e7f012: mov    rcx,rbx
0x00e7f015: call   0x14006f560
0x00e7f01a: jmp    0x140e834d4
0x00e7f01f: mov    BYTE PTR [rsp+0x28],0x1
0x00e7f024: mov    QWORD PTR [rsp+0x20],rbx
0x00e7f029: movzx  r9d,r15w
0x00e7f02d: movzx  r8d,r14w
0x00e7f031: movzx  edx,si
0x00e7f034: mov    rcx,rdi
0x00e7f037: call   0x140a46f20
0x00e7f03c: lea    rdx,[rip+0x8b24c5]        # 0x141731508 ; literal=" Track (EW)"
0x00e7f043: mov    rcx,rbx
0x00e7f046: call   0x14006f560
0x00e7f04b: jmp    0x140e834d4
0x00e7f050: lea    rdx,[rip+0x8b2541]        # 0x141731598 ; literal="Ice Track (EW)"
0x00e7f057: mov    rcx,rbx
0x00e7f05a: call   0x14006f560
0x00e7f05f: jmp    0x140e834d4
0x00e7f064: lea    rax,[rsp+0x50]
0x00e7f069: mov    QWORD PTR [rsp+0x40],rax
0x00e7f06e: lea    rax,[rsp+0x60]
0x00e7f073: mov    QWORD PTR [rsp+0x38],rax
0x00e7f078: lea    rax,[rsp+0x54]
0x00e7f07d: mov    QWORD PTR [rsp+0x30],rax
0x00e7f082: lea    rax,[rsp+0x5c]
0x00e7f087: mov    QWORD PTR [rsp+0x28],rax
0x00e7f08c: lea    rax,[rsp+0x58]
0x00e7f091: mov    QWORD PTR [rsp+0x20],rax
0x00e7f096: movzx  r9d,r15w
0x00e7f09a: movzx  r8d,r14w
0x00e7f09e: movzx  edx,si
0x00e7f0a1: mov    rcx,rdi
0x00e7f0a4: call   0x1414d0c70
0x00e7f0a9: movzx  eax,WORD PTR [rsp+0x50]
0x00e7f0ae: mov    WORD PTR [rsp+0x30],ax
0x00e7f0b3: mov    BYTE PTR [rsp+0x28],r12b
0x00e7f0b8: mov    DWORD PTR [rsp+0x20],r12d
0x00e7f0bd: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7f0c2: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7f0c8: lea    rdx,[rbp+0x0]
0x00e7f0cc: mov    rcx,rdi
0x00e7f0cf: call   0x1414d1920
0x00e7f0d4: lea    rdx,[rbp+0x0]
0x00e7f0d8: mov    rcx,rbx
0x00e7f0db: call   0x1400b9d10
0x00e7f0e0: lea    rdx,[rip+0x8b24c1]        # 0x1417315a8 ; literal=" Track (NSE)"
0x00e7f0e7: mov    rcx,rbx
0x00e7f0ea: call   0x14006f560
0x00e7f0ef: jmp    0x140e834d4
0x00e7f0f4: mov    BYTE PTR [rsp+0x28],0x1
0x00e7f0f9: mov    QWORD PTR [rsp+0x20],rbx
0x00e7f0fe: movzx  r9d,r15w
0x00e7f102: movzx  r8d,r14w
0x00e7f106: movzx  edx,si
0x00e7f109: mov    rcx,rdi
0x00e7f10c: call   0x140a46f20
0x00e7f111: lea    rdx,[rip+0x8b2490]        # 0x1417315a8 ; literal=" Track (NSE)"
0x00e7f118: mov    rcx,rbx
0x00e7f11b: call   0x14006f560
0x00e7f120: jmp    0x140e834d4
0x00e7f125: lea    rdx,[rip+0x8b248c]        # 0x1417315b8 ; literal="Ice Track (NSE)"
0x00e7f12c: mov    rcx,rbx
0x00e7f12f: call   0x14006f560
0x00e7f134: jmp    0x140e834d4
0x00e7f139: lea    rax,[rsp+0x50]
0x00e7f13e: mov    QWORD PTR [rsp+0x40],rax
0x00e7f143: lea    rax,[rsp+0x60]
0x00e7f148: mov    QWORD PTR [rsp+0x38],rax
0x00e7f14d: lea    rax,[rsp+0x54]
0x00e7f152: mov    QWORD PTR [rsp+0x30],rax
0x00e7f157: lea    rax,[rsp+0x5c]
0x00e7f15c: mov    QWORD PTR [rsp+0x28],rax
0x00e7f161: lea    rax,[rsp+0x58]
0x00e7f166: mov    QWORD PTR [rsp+0x20],rax
0x00e7f16b: movzx  r9d,r15w
0x00e7f16f: movzx  r8d,r14w
0x00e7f173: movzx  edx,si
0x00e7f176: mov    rcx,rdi
0x00e7f179: call   0x1414d0c70
0x00e7f17e: movzx  eax,WORD PTR [rsp+0x50]
0x00e7f183: mov    WORD PTR [rsp+0x30],ax
0x00e7f188: mov    BYTE PTR [rsp+0x28],r12b
0x00e7f18d: mov    DWORD PTR [rsp+0x20],r12d
0x00e7f192: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7f197: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7f19d: lea    rdx,[rbp+0x0]
0x00e7f1a1: mov    rcx,rdi
0x00e7f1a4: call   0x1414d1920
0x00e7f1a9: lea    rdx,[rbp+0x0]
0x00e7f1ad: mov    rcx,rbx
0x00e7f1b0: call   0x1400b9d10
0x00e7f1b5: lea    rdx,[rip+0x8b240c]        # 0x1417315c8 ; literal=" Track (NSW)"
0x00e7f1bc: mov    rcx,rbx
0x00e7f1bf: call   0x14006f560
0x00e7f1c4: jmp    0x140e834d4
0x00e7f1c9: mov    BYTE PTR [rsp+0x28],0x1
0x00e7f1ce: mov    QWORD PTR [rsp+0x20],rbx
0x00e7f1d3: movzx  r9d,r15w
0x00e7f1d7: movzx  r8d,r14w
0x00e7f1db: movzx  edx,si
0x00e7f1de: mov    rcx,rdi
0x00e7f1e1: call   0x140a46f20
0x00e7f1e6: lea    rdx,[rip+0x8b23db]        # 0x1417315c8 ; literal=" Track (NSW)"
0x00e7f1ed: mov    rcx,rbx
0x00e7f1f0: call   0x14006f560
0x00e7f1f5: jmp    0x140e834d4
0x00e7f1fa: lea    rdx,[rip+0x8b2357]        # 0x141731558 ; literal="Ice Track (NSW)"
0x00e7f201: mov    rcx,rbx
0x00e7f204: call   0x14006f560
0x00e7f209: jmp    0x140e834d4
0x00e7f20e: lea    rax,[rsp+0x50]
0x00e7f213: mov    QWORD PTR [rsp+0x40],rax
0x00e7f218: lea    rax,[rsp+0x60]
0x00e7f21d: mov    QWORD PTR [rsp+0x38],rax
0x00e7f222: lea    rax,[rsp+0x54]
0x00e7f227: mov    QWORD PTR [rsp+0x30],rax
0x00e7f22c: lea    rax,[rsp+0x5c]
0x00e7f231: mov    QWORD PTR [rsp+0x28],rax
0x00e7f236: lea    rax,[rsp+0x58]
0x00e7f23b: mov    QWORD PTR [rsp+0x20],rax
0x00e7f240: movzx  r9d,r15w
0x00e7f244: movzx  r8d,r14w
0x00e7f248: movzx  edx,si
0x00e7f24b: mov    rcx,rdi
0x00e7f24e: call   0x1414d0c70
0x00e7f253: movzx  eax,WORD PTR [rsp+0x50]
0x00e7f258: mov    WORD PTR [rsp+0x30],ax
0x00e7f25d: mov    BYTE PTR [rsp+0x28],r12b
0x00e7f262: mov    DWORD PTR [rsp+0x20],r12d
0x00e7f267: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7f26c: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7f272: lea    rdx,[rbp+0x0]
0x00e7f276: mov    rcx,rdi
0x00e7f279: call   0x1414d1920
0x00e7f27e: lea    rdx,[rbp+0x0]
0x00e7f282: mov    rcx,rbx
0x00e7f285: call   0x1400b9d10
0x00e7f28a: lea    rdx,[rip+0x8b22d7]        # 0x141731568 ; literal=" Track (NEW)"
0x00e7f291: mov    rcx,rbx
0x00e7f294: call   0x14006f560
0x00e7f299: jmp    0x140e834d4
0x00e7f29e: mov    BYTE PTR [rsp+0x28],0x1
0x00e7f2a3: mov    QWORD PTR [rsp+0x20],rbx
0x00e7f2a8: movzx  r9d,r15w
0x00e7f2ac: movzx  r8d,r14w
0x00e7f2b0: movzx  edx,si
0x00e7f2b3: mov    rcx,rdi
0x00e7f2b6: call   0x140a46f20
0x00e7f2bb: lea    rdx,[rip+0x8b22a6]        # 0x141731568 ; literal=" Track (NEW)"
0x00e7f2c2: mov    rcx,rbx
0x00e7f2c5: call   0x14006f560
0x00e7f2ca: jmp    0x140e834d4
0x00e7f2cf: lea    rdx,[rip+0x8b22a2]        # 0x141731578 ; literal="Ice Track (NEW)"
0x00e7f2d6: mov    rcx,rbx
0x00e7f2d9: call   0x14006f560
0x00e7f2de: jmp    0x140e834d4
0x00e7f2e3: lea    rax,[rsp+0x50]
0x00e7f2e8: mov    QWORD PTR [rsp+0x40],rax
0x00e7f2ed: lea    rax,[rsp+0x60]
0x00e7f2f2: mov    QWORD PTR [rsp+0x38],rax
0x00e7f2f7: lea    rax,[rsp+0x54]
0x00e7f2fc: mov    QWORD PTR [rsp+0x30],rax
0x00e7f301: lea    rax,[rsp+0x5c]
0x00e7f306: mov    QWORD PTR [rsp+0x28],rax
0x00e7f30b: lea    rax,[rsp+0x58]
0x00e7f310: mov    QWORD PTR [rsp+0x20],rax
0x00e7f315: movzx  r9d,r15w
0x00e7f319: movzx  r8d,r14w
0x00e7f31d: movzx  edx,si
0x00e7f320: mov    rcx,rdi
0x00e7f323: call   0x1414d0c70
0x00e7f328: movzx  eax,WORD PTR [rsp+0x50]
0x00e7f32d: mov    WORD PTR [rsp+0x30],ax
0x00e7f332: mov    BYTE PTR [rsp+0x28],r12b
0x00e7f337: mov    DWORD PTR [rsp+0x20],r12d
0x00e7f33c: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7f341: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7f347: lea    rdx,[rbp+0x0]
0x00e7f34b: mov    rcx,rdi
0x00e7f34e: call   0x1414d1920
0x00e7f353: lea    rdx,[rbp+0x0]
0x00e7f357: mov    rcx,rbx
0x00e7f35a: call   0x1400b9d10
0x00e7f35f: lea    rdx,[rip+0x8b2222]        # 0x141731588 ; literal=" Track (SEW)"
0x00e7f366: mov    rcx,rbx
0x00e7f369: call   0x14006f560
0x00e7f36e: jmp    0x140e834d4
0x00e7f373: mov    BYTE PTR [rsp+0x28],0x1
0x00e7f378: mov    QWORD PTR [rsp+0x20],rbx
0x00e7f37d: movzx  r9d,r15w
0x00e7f381: movzx  r8d,r14w
0x00e7f385: movzx  edx,si
0x00e7f388: mov    rcx,rdi
0x00e7f38b: call   0x140a46f20
0x00e7f390: lea    rdx,[rip+0x8b21f1]        # 0x141731588 ; literal=" Track (SEW)"
0x00e7f397: mov    rcx,rbx
0x00e7f39a: call   0x14006f560
0x00e7f39f: jmp    0x140e834d4
0x00e7f3a4: lea    rdx,[rip+0x8b26dd]        # 0x141731a88 ; literal="Ice Track (SEW)"
0x00e7f3ab: mov    rcx,rbx
0x00e7f3ae: call   0x14006f560
0x00e7f3b3: jmp    0x140e834d4
0x00e7f3b8: lea    rax,[rsp+0x50]
0x00e7f3bd: mov    QWORD PTR [rsp+0x40],rax
0x00e7f3c2: lea    rax,[rsp+0x60]
0x00e7f3c7: mov    QWORD PTR [rsp+0x38],rax
0x00e7f3cc: lea    rax,[rsp+0x54]
0x00e7f3d1: mov    QWORD PTR [rsp+0x30],rax
0x00e7f3d6: lea    rax,[rsp+0x5c]
0x00e7f3db: mov    QWORD PTR [rsp+0x28],rax
0x00e7f3e0: lea    rax,[rsp+0x58]
0x00e7f3e5: mov    QWORD PTR [rsp+0x20],rax
0x00e7f3ea: movzx  r9d,r15w
0x00e7f3ee: movzx  r8d,r14w
0x00e7f3f2: movzx  edx,si
0x00e7f3f5: mov    rcx,rdi
0x00e7f3f8: call   0x1414d0c70
0x00e7f3fd: movzx  eax,WORD PTR [rsp+0x50]
0x00e7f402: mov    WORD PTR [rsp+0x30],ax
0x00e7f407: mov    BYTE PTR [rsp+0x28],r12b
0x00e7f40c: mov    DWORD PTR [rsp+0x20],r12d
0x00e7f411: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7f416: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7f41c: lea    rdx,[rbp+0x0]
0x00e7f420: mov    rcx,rdi
0x00e7f423: call   0x1414d1920
0x00e7f428: lea    rdx,[rbp+0x0]
0x00e7f42c: mov    rcx,rbx
0x00e7f42f: call   0x1400b9d10
0x00e7f434: lea    rdx,[rip+0x8b265d]        # 0x141731a98 ; literal=" Track (NSEW)"
0x00e7f43b: mov    rcx,rbx
0x00e7f43e: call   0x14006f560
0x00e7f443: jmp    0x140e834d4
0x00e7f448: mov    BYTE PTR [rsp+0x28],0x1
0x00e7f44d: mov    QWORD PTR [rsp+0x20],rbx
0x00e7f452: movzx  r9d,r15w
0x00e7f456: movzx  r8d,r14w
0x00e7f45a: movzx  edx,si
0x00e7f45d: mov    rcx,rdi
0x00e7f460: call   0x140a46f20
0x00e7f465: lea    rdx,[rip+0x8b262c]        # 0x141731a98 ; literal=" Track (NSEW)"
0x00e7f46c: mov    rcx,rbx
0x00e7f46f: call   0x14006f560
0x00e7f474: jmp    0x140e834d4
0x00e7f479: lea    rdx,[rip+0x8b2628]        # 0x141731aa8 ; literal="Ice Track (NSEW)"
0x00e7f480: mov    rcx,rbx
0x00e7f483: call   0x14006f560
0x00e7f488: jmp    0x140e834d4
0x00e7f48d: cmp    BYTE PTR [rsp+0x58],r12b
0x00e7f492: je     0x140e7f5ea
0x00e7f498: movsx  r13d,WORD PTR [rsp+0x54]
0x00e7f49e: mov    ecx,r13d
0x00e7f4a1: sub    ecx,0x1
0x00e7f4a4: je     0x140e7f5be
0x00e7f4aa: sub    ecx,0x1
0x00e7f4ad: je     0x140e7f592
0x00e7f4b3: sub    ecx,0x1
0x00e7f4b6: je     0x140e7f566
0x00e7f4bc: sub    ecx,0x1
0x00e7f4bf: je     0x140e7f537
0x00e7f4c1: cmp    ecx,0x1
0x00e7f4c4: mov    rcx,rbx
0x00e7f4c7: je     0x140e7f50b
0x00e7f4c9: lea    rdx,[rip+0x8b1ec8]        # 0x141731398 ; literal="Detailed"
0x00e7f4d0: call   0x14006f560
0x00e7f4d5: sub    r13d,0x1
0x00e7f4d9: je     0x140e7f5d7
0x00e7f4df: sub    r13d,0x1
0x00e7f4e3: je     0x140e7f5ab
0x00e7f4e9: sub    r13d,0x1
0x00e7f4ed: je     0x140e7f57f
0x00e7f4f3: sub    r13d,0x1
0x00e7f4f7: je     0x140e7f550
0x00e7f4f9: cmp    r13d,0x1
0x00e7f4fd: je     0x140e7f521
0x00e7f4ff: lea    rdx,[rip+0x769236]        # 0x1415e873c ; literal=" "
0x00e7f506: jmp    0x140e7f5f1
0x00e7f50b: mov    dl,0xf
0x00e7f50d: call   0x1400b9d30
0x00e7f512: lea    rdx,[rip+0x8b1e7f]        # 0x141731398 ; literal="Detailed"
0x00e7f519: mov    rcx,rbx
0x00e7f51c: call   0x14006f560
0x00e7f521: mov    dl,0xf
0x00e7f523: mov    rcx,rbx
0x00e7f526: call   0x1400b9d30
0x00e7f52b: lea    rdx,[rip+0x76920a]        # 0x1415e873c ; literal=" "
0x00e7f532: jmp    0x140e7f5f1
0x00e7f537: mov    dl,0xf0
0x00e7f539: mov    rcx,rbx
0x00e7f53c: call   0x1400b9d30
0x00e7f541: lea    rdx,[rip+0x8b1e50]        # 0x141731398 ; literal="Detailed"
0x00e7f548: mov    rcx,rbx
0x00e7f54b: call   0x14006f560
0x00e7f550: mov    dl,0xf0
0x00e7f552: mov    rcx,rbx
0x00e7f555: call   0x1400b9d30
0x00e7f55a: lea    rdx,[rip+0x7691db]        # 0x1415e873c ; literal=" "
0x00e7f561: jmp    0x140e7f5f1
0x00e7f566: mov    dl,0x2a
0x00e7f568: mov    rcx,rbx
0x00e7f56b: call   0x1400b9d30
0x00e7f570: lea    rdx,[rip+0x8b1e21]        # 0x141731398 ; literal="Detailed"
0x00e7f577: mov    rcx,rbx
0x00e7f57a: call   0x14006f560
0x00e7f57f: mov    dl,0x2a
0x00e7f581: mov    rcx,rbx
0x00e7f584: call   0x1400b9d30
0x00e7f589: lea    rdx,[rip+0x7691ac]        # 0x1415e873c ; literal=" "
0x00e7f590: jmp    0x140e7f5f1
0x00e7f592: mov    dl,0x2b
0x00e7f594: mov    rcx,rbx
0x00e7f597: call   0x1400b9d30
0x00e7f59c: lea    rdx,[rip+0x8b1df5]        # 0x141731398 ; literal="Detailed"
0x00e7f5a3: mov    rcx,rbx
0x00e7f5a6: call   0x14006f560
0x00e7f5ab: mov    dl,0x2b
0x00e7f5ad: mov    rcx,rbx
0x00e7f5b0: call   0x1400b9d30
0x00e7f5b5: lea    rdx,[rip+0x769180]        # 0x1415e873c ; literal=" "
0x00e7f5bc: jmp    0x140e7f5f1
0x00e7f5be: mov    dl,0x2d
0x00e7f5c0: mov    rcx,rbx
0x00e7f5c3: call   0x1400b9d30
0x00e7f5c8: lea    rdx,[rip+0x8b1dc9]        # 0x141731398 ; literal="Detailed"
0x00e7f5cf: mov    rcx,rbx
0x00e7f5d2: call   0x14006f560
0x00e7f5d7: mov    dl,0x2d
0x00e7f5d9: mov    rcx,rbx
0x00e7f5dc: call   0x1400b9d30
0x00e7f5e1: lea    rdx,[rip+0x769154]        # 0x1415e873c ; literal=" "
0x00e7f5e8: jmp    0x140e7f5f1
0x00e7f5ea: lea    rdx,[rip+0x8b1d67]        # 0x141731358 ; literal="Smooth "
0x00e7f5f1: mov    rcx,rbx
0x00e7f5f4: call   0x14006f560
0x00e7f5f9: lea    rax,[rsp+0x50]
0x00e7f5fe: mov    QWORD PTR [rsp+0x40],rax
0x00e7f603: lea    rax,[rsp+0x60]
0x00e7f608: mov    QWORD PTR [rsp+0x38],rax
0x00e7f60d: lea    rax,[rsp+0x54]
0x00e7f612: mov    QWORD PTR [rsp+0x30],rax
0x00e7f617: lea    rax,[rsp+0x5c]
0x00e7f61c: mov    QWORD PTR [rsp+0x28],rax
0x00e7f621: lea    rax,[rsp+0x58]
0x00e7f626: mov    QWORD PTR [rsp+0x20],rax
0x00e7f62b: movzx  r9d,r15w
0x00e7f62f: movzx  r8d,r14w
0x00e7f633: movzx  edx,si
0x00e7f636: mov    rcx,rdi
0x00e7f639: call   0x1414d0c70
0x00e7f63e: movzx  eax,WORD PTR [rsp+0x50]
0x00e7f643: mov    WORD PTR [rsp+0x30],ax
0x00e7f648: mov    BYTE PTR [rsp+0x28],r12b
0x00e7f64d: mov    DWORD PTR [rsp+0x20],r12d
0x00e7f652: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7f657: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7f65d: lea    rdx,[rbp+0x0]
0x00e7f661: mov    rcx,rdi
0x00e7f664: call   0x1414d1920
0x00e7f669: lea    rdx,[rbp+0x0]
0x00e7f66d: mov    rcx,rbx
0x00e7f670: call   0x1400b9d10
0x00e7f675: movzx  r9d,r15w
0x00e7f679: movzx  r8d,r14w
0x00e7f67d: movzx  edx,si
0x00e7f680: mov    rcx,rdi
0x00e7f683: call   0x14007dc40
0x00e7f688: bt     eax,0xf
0x00e7f68c: jae    0x140e834d4
0x00e7f692: lea    rdx,[rip+0x8b1db3]        # 0x14173144c ; literal=" Floor"
0x00e7f699: mov    rcx,rbx
0x00e7f69c: call   0x14006f560
0x00e7f6a1: jmp    0x140e834d4
0x00e7f6a6: lea    rax,[rsp+0x50]
0x00e7f6ab: mov    QWORD PTR [rsp+0x40],rax
0x00e7f6b0: lea    rax,[rsp+0x60]
0x00e7f6b5: mov    QWORD PTR [rsp+0x38],rax
0x00e7f6ba: lea    rax,[rsp+0x54]
0x00e7f6bf: mov    QWORD PTR [rsp+0x30],rax
0x00e7f6c4: lea    rax,[rsp+0x5c]
0x00e7f6c9: mov    QWORD PTR [rsp+0x28],rax
0x00e7f6ce: lea    rax,[rsp+0x58]
0x00e7f6d3: mov    QWORD PTR [rsp+0x20],rax
0x00e7f6d8: movzx  r9d,r15w
0x00e7f6dc: movzx  r8d,r14w
0x00e7f6e0: movzx  edx,si
0x00e7f6e3: mov    rcx,rdi
0x00e7f6e6: call   0x1414d0c70
0x00e7f6eb: movzx  eax,WORD PTR [rsp+0x50]
0x00e7f6f0: mov    WORD PTR [rsp+0x30],ax
0x00e7f6f5: mov    BYTE PTR [rsp+0x28],r12b
0x00e7f6fa: mov    DWORD PTR [rsp+0x20],r12d
0x00e7f6ff: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7f704: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7f70a: lea    rdx,[rbp+0x0]
0x00e7f70e: mov    rcx,rdi
0x00e7f711: call   0x1414d1920
0x00e7f716: lea    rdx,[rbp+0x0]
0x00e7f71a: mov    rcx,rbx
0x00e7f71d: call   0x1400b9d10
0x00e7f722: lea    rdx,[rip+0x8b2397]        # 0x141731ac0 ; literal=" Boulder"
0x00e7f729: mov    rcx,rbx
0x00e7f72c: call   0x14006f560
0x00e7f731: jmp    0x140e834d4
0x00e7f736: lea    rdx,[rip+0x8b2313]        # 0x141731a50 ; literal="Driftwood"
0x00e7f73d: mov    rcx,rbx
0x00e7f740: call   0x14006f560
0x00e7f745: jmp    0x140e834d4
0x00e7f74a: lea    rax,[rsp+0x50]
0x00e7f74f: mov    QWORD PTR [rsp+0x40],rax
0x00e7f754: lea    rax,[rsp+0x60]
0x00e7f759: mov    QWORD PTR [rsp+0x38],rax
0x00e7f75e: lea    rax,[rsp+0x54]
0x00e7f763: mov    QWORD PTR [rsp+0x30],rax
0x00e7f768: lea    rax,[rsp+0x5c]
0x00e7f76d: mov    QWORD PTR [rsp+0x28],rax
0x00e7f772: lea    rax,[rsp+0x58]
0x00e7f777: mov    QWORD PTR [rsp+0x20],rax
0x00e7f77c: movzx  r9d,r15w
0x00e7f780: movzx  r8d,r14w
0x00e7f784: movzx  edx,si
0x00e7f787: mov    rcx,rdi
0x00e7f78a: call   0x1414d0c70
0x00e7f78f: movzx  eax,WORD PTR [rsp+0x50]
0x00e7f794: mov    WORD PTR [rsp+0x30],ax
0x00e7f799: mov    BYTE PTR [rsp+0x28],r12b
0x00e7f79e: mov    DWORD PTR [rsp+0x20],r12d
0x00e7f7a3: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7f7a8: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7f7ae: lea    rdx,[rbp+0x0]
0x00e7f7b2: mov    rcx,rdi
0x00e7f7b5: call   0x1414d1920
0x00e7f7ba: lea    rdx,[rbp+0x0]
0x00e7f7be: mov    rcx,rbx
0x00e7f7c1: call   0x1400b9d10
0x00e7f7c6: mov    r8d,0x8
0x00e7f7cc: lea    rdx,[rip+0x8b228d]        # 0x141731a60 ; literal=" Pebbles"
0x00e7f7d3: jmp    0x140e834cb
0x00e7f7d8: lea    rax,[rsp+0x50]
0x00e7f7dd: mov    QWORD PTR [rsp+0x40],rax
0x00e7f7e2: lea    rax,[rsp+0x60]
0x00e7f7e7: mov    QWORD PTR [rsp+0x38],rax
0x00e7f7ec: lea    rax,[rsp+0x54]
0x00e7f7f1: mov    QWORD PTR [rsp+0x30],rax
0x00e7f7f6: lea    rax,[rsp+0x5c]
0x00e7f7fb: mov    QWORD PTR [rsp+0x28],rax
0x00e7f800: lea    rax,[rsp+0x58]
0x00e7f805: mov    QWORD PTR [rsp+0x20],rax
0x00e7f80a: movzx  r9d,r15w
0x00e7f80e: movzx  r8d,r14w
0x00e7f812: movzx  edx,si
0x00e7f815: mov    rcx,rdi
0x00e7f818: call   0x1414d0c70
0x00e7f81d: movzx  eax,WORD PTR [rsp+0x50]
0x00e7f822: mov    WORD PTR [rsp+0x30],ax
0x00e7f827: mov    BYTE PTR [rsp+0x28],r12b
0x00e7f82c: mov    DWORD PTR [rsp+0x20],r12d
0x00e7f831: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7f836: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7f83c: lea    rdx,[rbp+0x0]
0x00e7f840: mov    rcx,rdi
0x00e7f843: call   0x1414d1920
0x00e7f848: lea    rdx,[rbp+0x0]
0x00e7f84c: mov    rcx,rbx
0x00e7f84f: call   0x1400b9d10
0x00e7f854: movzx  r9d,r15w
0x00e7f858: movzx  r8d,r14w
0x00e7f85c: movzx  edx,si
0x00e7f85f: mov    rcx,rdi
0x00e7f862: call   0x14007dc40
0x00e7f867: bt     eax,0xf
0x00e7f86b: jae    0x140e834d4
0x00e7f871: mov    r8d,0xd
0x00e7f877: lea    rdx,[rip+0x8b21f2]        # 0x141731a70 ; literal=" Cavern Floor"
0x00e7f87e: jmp    0x140e834cb
0x00e7f883: lea    rdx,[rip+0x8b21f6]        # 0x141731a80 ; literal="Wet "
0x00e7f88a: mov    rcx,rbx
0x00e7f88d: call   0x14006f560
0x00e7f892: lea    rax,[rsp+0x50]
0x00e7f897: mov    QWORD PTR [rsp+0x40],rax
0x00e7f89c: lea    rax,[rsp+0x60]
0x00e7f8a1: mov    QWORD PTR [rsp+0x38],rax
0x00e7f8a6: lea    rax,[rsp+0x54]
0x00e7f8ab: mov    QWORD PTR [rsp+0x30],rax
0x00e7f8b0: lea    rax,[rsp+0x5c]
0x00e7f8b5: mov    QWORD PTR [rsp+0x28],rax
0x00e7f8ba: lea    rax,[rsp+0x58]
0x00e7f8bf: mov    QWORD PTR [rsp+0x20],rax
0x00e7f8c4: movzx  r9d,r15w
0x00e7f8c8: movzx  r8d,r14w
0x00e7f8cc: movzx  edx,si
0x00e7f8cf: mov    rcx,rdi
0x00e7f8d2: call   0x1414d0c70
0x00e7f8d7: movzx  eax,WORD PTR [rsp+0x50]
0x00e7f8dc: mov    WORD PTR [rsp+0x30],ax
0x00e7f8e1: mov    BYTE PTR [rsp+0x28],r12b
0x00e7f8e6: mov    DWORD PTR [rsp+0x20],r12d
0x00e7f8eb: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7f8f0: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7f8f6: lea    rdx,[rbp+0x0]
0x00e7f8fa: mov    rcx,rdi
0x00e7f8fd: call   0x1414d1920
0x00e7f902: lea    rdx,[rbp+0x0]
0x00e7f906: mov    rcx,rbx
0x00e7f909: call   0x1400b9d10
0x00e7f90e: movzx  r9d,r15w
0x00e7f912: movzx  r8d,r14w
0x00e7f916: movzx  edx,si
0x00e7f919: mov    rcx,rdi
0x00e7f91c: call   0x14007dc40
0x00e7f921: bt     eax,0xf
0x00e7f925: jae    0x140e834d4
0x00e7f92b: lea    rdx,[rip+0x8b213e]        # 0x141731a70 ; literal=" Cavern Floor"
0x00e7f932: mov    rcx,rbx
0x00e7f935: call   0x14006f560
0x00e7f93a: jmp    0x140e834d4
0x00e7f93f: lea    rcx,[rdi+0x1ddd8]
0x00e7f946: movzx  r9d,r15w
0x00e7f94a: movzx  r8d,r14w
0x00e7f94e: movzx  edx,si
0x00e7f951: call   0x1413ffaf0
0x00e7f956: mov    rsi,rax
0x00e7f959: test   rax,rax
0x00e7f95c: je     0x140e7f9c9
0x00e7f95e: cmp    DWORD PTR [rax+0x1c],0xffffffff
0x00e7f962: je     0x140e7f9c9
0x00e7f964: mov    edx,DWORD PTR [rax+0x1c]
0x00e7f967: mov    rcx,QWORD PTR [rdi+0x11a668]
0x00e7f96e: call   0x14007db20
0x00e7f973: test   rax,rax
0x00e7f976: je     0x140e7f9c9
0x00e7f978: cmp    QWORD PTR [rax+0x308],r12
0x00e7f97f: je     0x140e7f9c9
0x00e7f981: mov    rdx,QWORD PTR [rax+0x308]
0x00e7f988: mov    ecx,DWORD PTR [rsi+0x20]
0x00e7f98b: call   0x1400b9dc0
0x00e7f990: test   rax,rax
0x00e7f993: je     0x140e7f9c9
0x00e7f995: cmp    DWORD PTR [rax+0x4],0x11
0x00e7f999: jne    0x140e7f9c9
0x00e7f99b: mov    rcx,QWORD PTR [rax+0x58]
0x00e7f99f: cmp    BYTE PTR [rcx+0x82],r12b
0x00e7f9a6: je     0x140e7f9c9
0x00e7f9a8: add    rcx,0x10
0x00e7f9ac: xor    r9d,r9d
0x00e7f9af: mov    r8b,0x1
0x00e7f9b2: mov    rdx,rbx
0x00e7f9b5: call   0x140a946e0
0x00e7f9ba: lea    rdx,[rip+0x769717]        # 0x1415e90d8 ; literal=", "
0x00e7f9c1: mov    rcx,rbx
0x00e7f9c4: call   0x14006f560
0x00e7f9c9: mov    eax,0x184
0x00e7f9ce: cmp    r13w,ax
0x00e7f9d2: jne    0x140e7f9e3
0x00e7f9d4: lea    rdx,[rip+0x8b1a05]        # 0x1417313e0 ; literal="Dead "
0x00e7f9db: mov    rcx,rbx
0x00e7f9de: call   0x14006f560
0x00e7f9e3: test   rsi,rsi
0x00e7f9e6: je     0x140e7fa7f
0x00e7f9ec: cmp    WORD PTR [rsi],0x1
0x00e7f9f0: ja     0x140e7fa1b
0x00e7f9f2: lea    rcx,[rdi+0x11b408]
0x00e7f9f9: movsx  edx,WORD PTR [rsi+0x2]
0x00e7f9fd: mov    r8d,0x4d
0x00e7fa03: call   0x14014d880
0x00e7fa08: test   al,al
0x00e7fa0a: jne    0x140e7fa1b
0x00e7fa0c: lea    rdx,[rip+0x8b20f5]        # 0x141731b08 ; literal="Young "
0x00e7fa13: mov    rcx,rbx
0x00e7fa16: call   0x14006f560
0x00e7fa1b: lea    rcx,[rbp+0x20]
0x00e7fa1f: call   0x14006f690
0x00e7fa24: nop
0x00e7fa25: movzx  r8d,r13w
0x00e7fa29: lea    rdx,[rbp+0x20]
0x00e7fa2d: mov    rcx,rsi
0x00e7fa30: call   0x1413ffd20
0x00e7fa35: lea    rdx,[rbp+0x20]
0x00e7fa39: mov    rcx,rbx
0x00e7fa3c: call   0x1400b9d10
0x00e7fa41: cmp    WORD PTR [rsi],0x1
0x00e7fa45: ja     0x140e7fa71
0x00e7fa47: lea    rcx,[rdi+0x11b408]
0x00e7fa4e: movsx  edx,WORD PTR [rsi+0x2]
0x00e7fa52: mov    r8d,0x4d
0x00e7fa58: call   0x14014d880
0x00e7fa5d: test   al,al
0x00e7fa5f: je     0x140e7fa71
0x00e7fa61: lea    rdx,[rip+0x8b20a8]        # 0x141731b10 ; literal=" Sapling"
0x00e7fa68: mov    rcx,rbx
0x00e7fa6b: call   0x14006f560
0x00e7fa70: nop
0x00e7fa71: lea    rcx,[rbp+0x20]
0x00e7fa75: call   0x140067e30
0x00e7fa7a: jmp    0x140e834d4
0x00e7fa7f: lea    rdx,[rip+0x8b209a]        # 0x141731b20 ; literal="Sapling"
0x00e7fa86: mov    rcx,rbx
0x00e7fa89: call   0x14006f560
0x00e7fa8e: jmp    0x140e834d4
0x00e7fa93: lea    rcx,[rdi+0x1ddd8]
0x00e7fa9a: movzx  r9d,r15w
0x00e7fa9e: movzx  r8d,r14w
0x00e7faa2: movzx  edx,si
0x00e7faa5: call   0x1413ffaf0
0x00e7faaa: mov    QWORD PTR [rsp+0x68],rax
0x00e7faaf: test   rax,rax
0x00e7fab2: je     0x140e7fb24
0x00e7fab4: cmp    DWORD PTR [rax+0x1c],0xffffffff
0x00e7fab8: je     0x140e7fb24
0x00e7faba: mov    edx,DWORD PTR [rax+0x1c]
0x00e7fabd: mov    rcx,QWORD PTR [rdi+0x11a668]
0x00e7fac4: call   0x14007db20
0x00e7fac9: test   rax,rax
0x00e7facc: je     0x140e7fb24
0x00e7face: cmp    QWORD PTR [rax+0x308],r12
0x00e7fad5: je     0x140e7fb24
0x00e7fad7: mov    rdx,QWORD PTR [rax+0x308]
0x00e7fade: mov    rcx,QWORD PTR [rsp+0x68]
0x00e7fae3: mov    ecx,DWORD PTR [rcx+0x20]
0x00e7fae6: call   0x1400b9dc0
0x00e7faeb: test   rax,rax
0x00e7faee: je     0x140e7fb24
0x00e7faf0: cmp    DWORD PTR [rax+0x4],0x11
0x00e7faf4: jne    0x140e7fb24
0x00e7faf6: mov    rcx,QWORD PTR [rax+0x58]
0x00e7fafa: cmp    BYTE PTR [rcx+0x82],r12b
0x00e7fb01: je     0x140e7fb24
0x00e7fb03: add    rcx,0x10
0x00e7fb07: xor    r9d,r9d
0x00e7fb0a: mov    r8b,0x1
0x00e7fb0d: mov    rdx,rbx
0x00e7fb10: call   0x140a946e0
0x00e7fb15: lea    rdx,[rip+0x7695bc]        # 0x1415e90d8 ; literal=", "
0x00e7fb1c: mov    rcx,rbx
0x00e7fb1f: call   0x14006f560
0x00e7fb24: mov    eax,0x185
0x00e7fb29: cmp    r13w,ax
0x00e7fb2d: jne    0x140e7fb3e
0x00e7fb2f: lea    rdx,[rip+0x8b18aa]        # 0x1417313e0 ; literal="Dead "
0x00e7fb36: mov    rcx,rbx
0x00e7fb39: call   0x14006f560
0x00e7fb3e: cmp    QWORD PTR [rsp+0x68],r12
0x00e7fb43: je     0x140e7ffa4
0x00e7fb49: lea    rcx,[rbp+0x20]
0x00e7fb4d: call   0x14006f690
0x00e7fb52: nop
0x00e7fb53: movzx  r8d,r13w
0x00e7fb57: lea    rdx,[rbp+0x20]
0x00e7fb5b: mov    rcx,QWORD PTR [rsp+0x68]
0x00e7fb60: call   0x1413ffd20
0x00e7fb65: lea    rdx,[rbp+0x20]
0x00e7fb69: mov    rcx,rbx
0x00e7fb6c: call   0x1400b9d10
0x00e7fb71: cmp    BYTE PTR [rbp+0xc8],0x0
0x00e7fb78: je     0x140e7ff96
0x00e7fb7e: mov    eax,0x185
0x00e7fb83: cmp    r13w,ax
0x00e7fb87: je     0x140e7ff96
0x00e7fb8d: lea    rcx,[rdi+0x11b408]
0x00e7fb94: mov    rax,QWORD PTR [rsp+0x68]
0x00e7fb99: movsx  edx,WORD PTR [rax+0x2]
0x00e7fb9d: call   0x14014d850
0x00e7fba2: mov    r13,rax
0x00e7fba5: test   rax,rax
0x00e7fba8: je     0x140e7ff96
0x00e7fbae: movsxd rcx,DWORD PTR [rip+0x1668533]        # 0x1424e80e8
0x00e7fbb5: lea    r8,[rcx+rcx*2]
0x00e7fbb9: shl    r8,0x4
0x00e7fbbd: add    r8,rsi
0x00e7fbc0: movsxd rcx,DWORD PTR [rip+0x1668525]        # 0x1424e80ec
0x00e7fbc7: lea    rdx,[rcx+rcx*2]
0x00e7fbcb: shl    rdx,0x4
0x00e7fbcf: add    rdx,r14
0x00e7fbd2: movsxd rcx,DWORD PTR [rip+0x1668517]        # 0x1424e80f0
0x00e7fbd9: add    rcx,r15
0x00e7fbdc: mov    edi,DWORD PTR [rip+0x15083e2]        # 0x142387fc4
0x00e7fbe2: imul   rax,rcx,0x2710
0x00e7fbe9: add    rax,rdx
0x00e7fbec: imul   rcx,rax,0x2710
0x00e7fbf3: add    rcx,r8
0x00e7fbf6: mov    QWORD PTR [rip+0xa2e39b],rcx        # 0x1418adf98
0x00e7fbfd: lea    rcx,[rip+0xa2e394]        # 0x1418adf98
0x00e7fc04: call   0x1402471c0
0x00e7fc09: mov    r8,rax
0x00e7fc0c: shr    r8,0x20
0x00e7fc10: mov    eax,0x10624dd3
0x00e7fc15: mul    r8d
0x00e7fc18: shr    edx,0x7
0x00e7fc1b: imul   ecx,edx,0x7d0
0x00e7fc21: sub    r8d,ecx
0x00e7fc24: lea    ecx,[r8+rdi*1]
0x00e7fc28: mov    eax,0x299c335d
0x00e7fc2d: imul   ecx
0x00e7fc2f: sar    edx,0x10
0x00e7fc32: mov    eax,edx
0x00e7fc34: shr    eax,0x1f
0x00e7fc37: add    edx,eax
0x00e7fc39: imul   eax,edx,0x62700
0x00e7fc3f: sub    ecx,eax
0x00e7fc41: mov    DWORD PTR [rsp+0x78],ecx
0x00e7fc45: lea    rdx,[rsp+0x70]
0x00e7fc4a: lea    rcx,[r13+0x658]
0x00e7fc51: call   0x14006f240
0x00e7fc56: lea    rdx,[rbp-0x68]
0x00e7fc5a: lea    rcx,[r13+0x658]
0x00e7fc61: call   0x14006f230
0x00e7fc66: lea    r8,[rbp-0x68]
0x00e7fc6a: lea    rdx,[rsp+0x58]
0x00e7fc6f: lea    rcx,[rsp+0x70]
0x00e7fc74: call   0x14006ee20
0x00e7fc79: xor    edx,edx
0x00e7fc7b: movzx  ecx,BYTE PTR [rax]
0x00e7fc7e: call   0x1400657b0
0x00e7fc83: test   al,al
0x00e7fc85: je     0x140e7ff96
0x00e7fc8b: nop    DWORD PTR [rax+rax*1+0x0]
0x00e7fc90: lea    rcx,[rsp+0x70]
0x00e7fc95: call   0x14006ee10
0x00e7fc9a: mov    r13,QWORD PTR [rax]
0x00e7fc9d: cmp    WORD PTR [r13+0x100],0xffff
0x00e7fca6: je     0x140e7ff64
0x00e7fcac: mov    eax,DWORD PTR [r13+0x13c]
0x00e7fcb3: cmp    eax,0xffffffff
0x00e7fcb6: je     0x140e7fce4
0x00e7fcb8: mov    ecx,DWORD PTR [r13+0x140]
0x00e7fcbf: mov    edi,DWORD PTR [rsp+0x78]
0x00e7fcc3: cmp    eax,ecx
0x00e7fcc5: jg     0x140e7fcd8
0x00e7fcc7: cmp    edi,eax
0x00e7fcc9: jl     0x140e7ff64
0x00e7fccf: cmp    ecx,edi
0x00e7fcd1: jge    0x140e7fce4
0x00e7fcd3: jmp    0x140e7ff64
0x00e7fcd8: cmp    ecx,edi
0x00e7fcda: jle    0x140e7fce4
0x00e7fcdc: cmp    edi,eax
0x00e7fcde: jl     0x140e7ff64
0x00e7fce4: mov    edi,esi
0x00e7fce6: mov    eax,0x2aaaaaab
0x00e7fceb: imul   esi
0x00e7fced: mov    r8d,edx
0x00e7fcf0: sar    r8d,0x3
0x00e7fcf4: mov    eax,r8d
0x00e7fcf7: shr    eax,0x1f
0x00e7fcfa: add    r8d,eax
0x00e7fcfd: add    r8d,DWORD PTR [rip+0x16683e4]        # 0x1424e80e8
0x00e7fd04: mov    DWORD PTR [rsp+0x5c],r14d
0x00e7fd09: mov    eax,0x2aaaaaab
0x00e7fd0e: imul   r14d
0x00e7fd11: sar    edx,0x3
0x00e7fd14: mov    eax,edx
0x00e7fd16: shr    eax,0x1f
0x00e7fd19: add    edx,eax
0x00e7fd1b: add    edx,DWORD PTR [rip+0x16683cb]        # 0x1424e80ec
0x00e7fd21: mov    rcx,QWORD PTR [rip+0x166be30]        # 0x1424ebb58
0x00e7fd28: imul   edx,DWORD PTR [rcx+0xa0]
0x00e7fd2f: shl    edx,0x4
0x00e7fd32: add    edx,r8d
0x00e7fd35: call   0x14010aab0
0x00e7fd3a: mov    r8,rax
0x00e7fd3d: mov    QWORD PTR [rbp-0x80],rax
0x00e7fd41: test   rax,rax
0x00e7fd44: je     0x140e7ff49
0x00e7fd4a: mov    eax,0x2aaaaaab
0x00e7fd4f: imul   edi
0x00e7fd51: sar    edx,0x3
0x00e7fd54: mov    ecx,edx
0x00e7fd56: shr    ecx,0x1f
0x00e7fd59: add    edx,ecx
0x00e7fd5b: lea    eax,[rdx+rdx*2]
0x00e7fd5e: shl    eax,0x4
0x00e7fd61: sub    edi,eax
0x00e7fd63: mov    DWORD PTR [rsp+0x60],edi
0x00e7fd67: mov    eax,0x2aaaaaab
0x00e7fd6c: mov    ecx,r14d
0x00e7fd6f: imul   ecx
0x00e7fd71: sar    edx,0x3
0x00e7fd74: mov    eax,edx
0x00e7fd76: shr    eax,0x1f
0x00e7fd79: add    edx,eax
0x00e7fd7b: lea    eax,[rdx+rdx*2]
0x00e7fd7e: shl    eax,0x4
0x00e7fd81: sub    ecx,eax
0x00e7fd83: mov    DWORD PTR [rsp+0x5c],ecx
0x00e7fd87: movzx  eax,r15w
0x00e7fd8b: add    ax,WORD PTR [rip+0x166835e]        # 0x1424e80f0
0x00e7fd92: mov    WORD PTR [rsp+0x50],ax
0x00e7fd97: lea    rdi,[r8+0x120]
0x00e7fd9e: lea    rdx,[rsp+0x68]
0x00e7fda3: mov    rcx,rdi
0x00e7fda6: call   0x14006f240
0x00e7fdab: lea    rdx,[rbp-0x60]
0x00e7fdaf: mov    rcx,rdi
0x00e7fdb2: call   0x14006f230
0x00e7fdb7: mov    rdi,QWORD PTR [rbp-0x80]
0x00e7fdbb: lea    rdx,[rbp-0x40]
0x00e7fdbf: lea    rcx,[rdi+0x138]
0x00e7fdc6: call   0x14006f240
0x00e7fdcb: lea    rdx,[rbp-0x8]
0x00e7fdcf: lea    rcx,[rdi+0x138]
0x00e7fdd6: call   0x14006f230
0x00e7fddb: lea    rdx,[rbp-0x70]
0x00e7fddf: lea    rcx,[rdi+0x150]
0x00e7fde6: call   0x14006f240
0x00e7fdeb: lea    rdx,[rbp-0x10]
0x00e7fdef: lea    rcx,[rdi+0x150]
0x00e7fdf6: call   0x14006f230
0x00e7fdfb: lea    rdx,[rbp-0x78]
0x00e7fdff: lea    rcx,[rdi+0x168]
0x00e7fe06: call   0x14006f240
0x00e7fe0b: lea    rdx,[rbp-0x18]
0x00e7fe0f: lea    rcx,[rdi+0x168]
0x00e7fe16: call   0x14006f230
0x00e7fe1b: lea    rdx,[rbp-0x50]
0x00e7fe1f: lea    rcx,[rdi+0x180]
0x00e7fe26: call   0x14006f240
0x00e7fe2b: lea    rdx,[rbp-0x20]
0x00e7fe2f: lea    rcx,[rdi+0x180]
0x00e7fe36: call   0x14006f230
0x00e7fe3b: lea    rdx,[rbp-0x58]
0x00e7fe3f: lea    rcx,[rdi+0x198]
0x00e7fe46: call   0x14006f240
0x00e7fe4b: lea    rdx,[rbp-0x28]
0x00e7fe4f: lea    rcx,[rdi+0x198]
0x00e7fe56: call   0x14006f230
0x00e7fe5b: lea    r8,[rbp-0x60]
0x00e7fe5f: lea    rdx,[rsp+0x54]
0x00e7fe64: lea    rcx,[rsp+0x68]
0x00e7fe69: call   0x14006ee20
0x00e7fe6e: xor    edx,edx
0x00e7fe70: movzx  ecx,BYTE PTR [rax]
0x00e7fe73: call   0x1400657b0
0x00e7fe78: test   al,al
0x00e7fe7a: je     0x140e7ff49
0x00e7fe80: mov    edi,DWORD PTR [rsp+0x60]
0x00e7fe84: lea    rcx,[rsp+0x68]
0x00e7fe89: call   0x14006ee10
0x00e7fe8e: cmp    WORD PTR [rax],di
0x00e7fe91: jne    0x140e7feed
0x00e7fe93: lea    rcx,[rbp-0x40]
0x00e7fe97: call   0x14006ee10
0x00e7fe9c: mov    ecx,DWORD PTR [rsp+0x5c]
0x00e7fea0: cmp    WORD PTR [rax],cx
0x00e7fea3: jne    0x140e7feed
0x00e7fea5: lea    rcx,[rbp-0x70]
0x00e7fea9: call   0x14006ee10
0x00e7feae: movzx  ecx,WORD PTR [rsp+0x50]
0x00e7feb3: cmp    WORD PTR [rax],cx
0x00e7feb6: jne    0x140e7feed
0x00e7feb8: lea    rcx,[rbp-0x78]
0x00e7febc: call   0x14006ee10
0x00e7fec1: cmp    DWORD PTR [rax],r12d
0x00e7fec4: jne    0x140e7feed
0x00e7fec6: lea    rcx,[rbp-0x50]
0x00e7feca: call   0x14006ee10
0x00e7fecf: mov    ecx,DWORD PTR [r13+0x148]
0x00e7fed6: cmp    DWORD PTR [rax],ecx
0x00e7fed8: jl     0x140e7feed
0x00e7feda: lea    rcx,[rbp-0x58]
0x00e7fede: call   0x14006ee10
0x00e7fee3: mov    ecx,DWORD PTR [rip+0x14f480b]        # 0x1423746f4
0x00e7fee9: cmp    DWORD PTR [rax],ecx
0x00e7feeb: je     0x140e7ff64
0x00e7feed: lea    rcx,[rsp+0x68]
0x00e7fef2: call   0x14006f430
0x00e7fef7: lea    rcx,[rbp-0x40]
0x00e7fefb: call   0x14006f430
0x00e7ff00: lea    rcx,[rbp-0x70]
0x00e7ff04: call   0x14006f430
0x00e7ff09: lea    rcx,[rbp-0x78]
0x00e7ff0d: call   0x14006f350
0x00e7ff12: lea    rcx,[rbp-0x50]
0x00e7ff16: call   0x14006f350
0x00e7ff1b: lea    rcx,[rbp-0x58]
0x00e7ff1f: call   0x14006f350
0x00e7ff24: lea    r8,[rbp-0x60]
0x00e7ff28: lea    rdx,[rsp+0x54]
0x00e7ff2d: lea    rcx,[rsp+0x68]
0x00e7ff32: call   0x14006ee20
0x00e7ff37: xor    edx,edx
0x00e7ff39: movzx  ecx,BYTE PTR [rax]
0x00e7ff3c: call   0x1400657b0
0x00e7ff41: test   al,al
0x00e7ff43: jne    0x140e7fe84
0x00e7ff49: lea    rdx,[rip+0x769188]        # 0x1415e90d8 ; literal=", "
0x00e7ff50: mov    rcx,rbx
0x00e7ff53: call   0x14006f560
0x00e7ff58: lea    rdx,[r13+0x40]
0x00e7ff5c: mov    rcx,rbx
0x00e7ff5f: call   0x1400b9d10
0x00e7ff64: lea    rcx,[rsp+0x70]
0x00e7ff69: call   0x14006ee00
0x00e7ff6e: inc    r12d
0x00e7ff71: lea    r8,[rbp-0x68]
0x00e7ff75: lea    rdx,[rsp+0x58]
0x00e7ff7a: lea    rcx,[rsp+0x70]
0x00e7ff7f: call   0x14006ee20
0x00e7ff84: xor    edx,edx
0x00e7ff86: movzx  ecx,BYTE PTR [rax]
0x00e7ff89: call   0x1400657b0
0x00e7ff8e: test   al,al
0x00e7ff90: jne    0x140e7fc90
0x00e7ff96: lea    rcx,[rbp+0x20]
0x00e7ff9a: call   0x140067e30
0x00e7ff9f: jmp    0x140e834d4
0x00e7ffa4: lea    rdx,[rip+0x8b1b7d]        # 0x141731b28 ; literal="Shrub"
0x00e7ffab: mov    rcx,rbx
0x00e7ffae: call   0x14006f560
0x00e7ffb3: jmp    0x140e834d4
0x00e7ffb8: lea    rdx,[rip+0x8b1b11]        # 0x141731ad0 ; literal="Furrowed "
0x00e7ffbf: mov    rcx,rbx
0x00e7ffc2: call   0x14006f560
0x00e7ffc7: lea    rax,[rbp-0x38]
0x00e7ffcb: mov    QWORD PTR [rsp+0x40],rax
0x00e7ffd0: lea    rax,[rbp-0x2c]
0x00e7ffd4: mov    QWORD PTR [rsp+0x38],rax
0x00e7ffd9: lea    rax,[rbp-0x48]
0x00e7ffdd: mov    QWORD PTR [rsp+0x30],rax
0x00e7ffe2: lea    rax,[rbp-0x34]
0x00e7ffe6: mov    QWORD PTR [rsp+0x28],rax
0x00e7ffeb: lea    rax,[rbp-0x30]
0x00e7ffef: mov    QWORD PTR [rsp+0x20],rax
0x00e7fff4: movzx  r9d,r15w
0x00e7fff8: movzx  r8d,r14w
0x00e7fffc: movzx  edx,si
0x00e7ffff: mov    rcx,rdi
0x00e80002: call   0x1414d0c70
0x00e80007: movzx  eax,WORD PTR [rbp-0x38]
0x00e8000b: mov    WORD PTR [rsp+0x30],ax
0x00e80010: mov    BYTE PTR [rsp+0x28],r12b
0x00e80015: mov    DWORD PTR [rsp+0x20],r12d
0x00e8001a: mov    r9d,DWORD PTR [rbp-0x2c]
0x00e8001e: movzx  r8d,WORD PTR [rbp-0x48]
0x00e80023: lea    rdx,[rbp+0x0]
0x00e80027: mov    rcx,rdi
0x00e8002a: call   0x1414d1920
0x00e8002f: lea    rdx,[rbp+0x0]
0x00e80033: mov    rcx,rbx
0x00e80036: call   0x1400b9d10
0x00e8003b: jmp    0x140e834d4
0x00e80040: mov    r8d,0x5
0x00e80046: lea    rdx,[rip+0x8b1a8f]        # 0x141731adc ; literal="Ashes"
0x00e8004d: jmp    0x140e834cb
0x00e80052: lea    rdx,[rip+0x8b1a8f]        # 0x141731ae8 ; literal="Waterfall"
0x00e80059: mov    rcx,rbx
0x00e8005c: call   0x14006f560
0x00e80061: jmp    0x140e834d4
0x00e80066: lea    rdx,[rip+0x8b1a8b]        # 0x141731af8 ; literal="River Source"
0x00e8006d: mov    rcx,rbx
0x00e80070: call   0x14006f560
0x00e80075: jmp    0x140e834d4
0x00e8007a: lea    rdx,[rip+0x8b1af3]        # 0x141731b74 ; literal="Chasm"
0x00e80081: mov    rcx,rbx
0x00e80084: call   0x14006f560
0x00e80089: jmp    0x140e834d4
0x00e8008e: lea    rdx,[rip+0x8b1aeb]        # 0x141731b80 ; literal="Eerie Glowing Pit"
0x00e80095: mov    rcx,rbx
0x00e80098: call   0x14006f560
0x00e8009d: jmp    0x140e834d4
0x00e800a2: lea    rdx,[rip+0x8a0fa7]        # 0x141721050 ; literal="Ice"
0x00e800a9: mov    rcx,rbx
0x00e800ac: call   0x14006f560
0x00e800b1: jmp    0x140e834d4
0x00e800b6: lea    rdx,[rip+0x8b1adb]        # 0x141731b98 ; literal="Glowing Floor"
0x00e800bd: mov    rcx,rbx
0x00e800c0: call   0x14006f560
0x00e800c5: jmp    0x140e834d4
0x00e800ca: lea    rdx,[rip+0x8b1ad7]        # 0x141731ba8 ; literal="Glowing Barrier"
0x00e800d1: mov    rcx,rbx
0x00e800d4: call   0x14006f560
0x00e800d9: jmp    0x140e834d4
0x00e800de: lea    rdx,[rip+0x8b1a4b]        # 0x141731b30 ; literal="Semi-molten Rock"
0x00e800e5: mov    rcx,rbx
0x00e800e8: call   0x14006f560
0x00e800ed: jmp    0x140e834d4
0x00e800f2: movzx  r9d,r15w
0x00e800f6: movzx  r8d,r14w
0x00e800fa: movzx  edx,si
0x00e800fd: mov    rcx,rdi
0x00e80100: call   0x14007dc40
0x00e80105: mov    rcx,rbx
0x00e80108: bt     eax,0xf
0x00e8010c: jb     0x140e8011f
0x00e8010e: lea    rdx,[rip+0x8b1a33]        # 0x141731b48 ; literal="Lava Flow"
0x00e80115: call   0x14006f560
0x00e8011a: jmp    0x140e834d4
0x00e8011f: lea    rdx,[rip+0x8b1a32]        # 0x141731b58 ; literal="Magma Flow"
0x00e80126: call   0x14006f560
0x00e8012b: jmp    0x140e834d4
0x00e80130: lea    rdx,[rip+0x8b1a31]        # 0x141731b68 ; literal="Murky Pool"
0x00e80137: mov    rcx,rbx
0x00e8013a: call   0x14006f560
0x00e8013f: jmp    0x140e834d4
0x00e80144: movzx  r9d,r15w
0x00e80148: movzx  r8d,r14w
0x00e8014c: movzx  edx,si
0x00e8014f: mov    rcx,rdi
0x00e80152: call   0x140e7ced0
0x00e80157: test   al,al
0x00e80159: jne    0x140e8016a
0x00e8015b: lea    rdx,[rip+0x8b1ab6]        # 0x141731c18 ; literal="Unusable "
0x00e80162: mov    rcx,rbx
0x00e80165: call   0x14006f560
0x00e8016a: lea    rdx,[rip+0x8b1ab7]        # 0x141731c28 ; literal="Murky Pool Slope"
0x00e80171: mov    rcx,rbx
0x00e80174: call   0x14006f560
0x00e80179: jmp    0x140e834d4
0x00e8017e: mov    r8d,0x5
0x00e80184: lea    rdx,[rip+0x8b1ab1]        # 0x141731c3c ; literal="River"
0x00e8018b: jmp    0x140e834cb
0x00e80190: mov    r8d,0x5
0x00e80196: lea    rdx,[rip+0x8b1aa7]        # 0x141731c44 ; literal="Brook"
0x00e8019d: jmp    0x140e834cb
0x00e801a2: movzx  r9d,r15w
0x00e801a6: movzx  r8d,r14w
0x00e801aa: movzx  edx,si
0x00e801ad: mov    rcx,rdi
0x00e801b0: call   0x1414d1330
0x00e801b5: mov    r15,rax
0x00e801b8: test   rax,rax
0x00e801bb: je     0x140e80254
0x00e801c1: lea    rcx,[rdi+0x11b408]
0x00e801c8: mov    edx,DWORD PTR [rax+0x8]
0x00e801cb: call   0x14014d850
0x00e801d0: mov    rdi,rax
0x00e801d3: test   rax,rax
0x00e801d6: je     0x140e80254
0x00e801d8: mov    edx,esi
0x00e801da: and    edx,0x8000000f
0x00e801e0: jge    0x140e801e9
0x00e801e2: dec    edx
0x00e801e4: or     edx,0xfffffff0
0x00e801e7: inc    edx
0x00e801e9: mov    ecx,r14d
0x00e801ec: and    ecx,0x8000000f
0x00e801f2: jge    0x140e801fb
0x00e801f4: dec    ecx
0x00e801f6: or     ecx,0xfffffff0
0x00e801f9: inc    ecx
0x00e801fb: movsx  rax,dx
0x00e801ff: shl    rax,0x4
0x00e80203: movsx  rcx,cx
0x00e80207: add    rax,r15
0x00e8020a: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e8020f: cmp    dl,0x43
0x00e80212: jb     0x140e8021d
0x00e80214: lea    rdx,[rip+0x8b11cd]        # 0x1417313e8 ; literal="Dense "
0x00e8021b: jmp    0x140e80229
0x00e8021d: cmp    dl,0x21
0x00e80220: ja     0x140e80231
0x00e80222: lea    rdx,[rip+0x8b117f]        # 0x1417313a8 ; literal="Sparse "
0x00e80229: mov    rcx,rbx
0x00e8022c: call   0x14006f560
0x00e80231: lea    rdx,[rdi+0x90]
0x00e80238: mov    rcx,rbx
0x00e8023b: call   0x1400b9d10
0x00e80240: lea    rdx,[rip+0x8b1971]        # 0x141731bb8 ; literal=" Upward Stairway"
0x00e80247: mov    rcx,rbx
0x00e8024a: call   0x14006f560
0x00e8024f: jmp    0x140e834d4
0x00e80254: lea    rdx,[rip+0x8b1975]        # 0x141731bd0 ; literal="Grassy Upward Stairway"
0x00e8025b: mov    rcx,rbx
0x00e8025e: call   0x14006f560
0x00e80263: jmp    0x140e834d4
0x00e80268: movzx  r9d,r15w
0x00e8026c: movzx  r8d,r14w
0x00e80270: movzx  edx,si
0x00e80273: mov    rcx,rdi
0x00e80276: call   0x1414d1330
0x00e8027b: mov    r15,rax
0x00e8027e: test   rax,rax
0x00e80281: je     0x140e8031a
0x00e80287: lea    rcx,[rdi+0x11b408]
0x00e8028e: mov    edx,DWORD PTR [rax+0x8]
0x00e80291: call   0x14014d850
0x00e80296: mov    rdi,rax
0x00e80299: test   rax,rax
0x00e8029c: je     0x140e8031a
0x00e8029e: mov    edx,esi
0x00e802a0: and    edx,0x8000000f
0x00e802a6: jge    0x140e802af
0x00e802a8: dec    edx
0x00e802aa: or     edx,0xfffffff0
0x00e802ad: inc    edx
0x00e802af: mov    ecx,r14d
0x00e802b2: and    ecx,0x8000000f
0x00e802b8: jge    0x140e802c1
0x00e802ba: dec    ecx
0x00e802bc: or     ecx,0xfffffff0
0x00e802bf: inc    ecx
0x00e802c1: movsx  rax,dx
0x00e802c5: shl    rax,0x4
0x00e802c9: movsx  rcx,cx
0x00e802cd: add    rax,r15
0x00e802d0: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e802d5: cmp    dl,0x43
0x00e802d8: jb     0x140e802e3
0x00e802da: lea    rdx,[rip+0x8b1107]        # 0x1417313e8 ; literal="Dense "
0x00e802e1: jmp    0x140e802ef
0x00e802e3: cmp    dl,0x21
0x00e802e6: ja     0x140e802f7
0x00e802e8: lea    rdx,[rip+0x8b10b9]        # 0x1417313a8 ; literal="Sparse "
0x00e802ef: mov    rcx,rbx
0x00e802f2: call   0x14006f560
0x00e802f7: lea    rdx,[rdi+0x90]
0x00e802fe: mov    rcx,rbx
0x00e80301: call   0x1400b9d10
0x00e80306: lea    rdx,[rip+0x8b18db]        # 0x141731be8 ; literal=" Up/Down Stairway"
0x00e8030d: mov    rcx,rbx
0x00e80310: call   0x14006f560
0x00e80315: jmp    0x140e834d4
0x00e8031a: lea    rdx,[rip+0x8b18df]        # 0x141731c00 ; literal="Grassy Up/Down Stairway"
0x00e80321: mov    rcx,rbx
0x00e80324: call   0x14006f560
0x00e80329: jmp    0x140e834d4
0x00e8032e: movzx  r9d,r15w
0x00e80332: movzx  r8d,r14w
0x00e80336: movzx  edx,si
0x00e80339: mov    rcx,rdi
0x00e8033c: call   0x1414d1330
0x00e80341: mov    r15,rax
0x00e80344: test   rax,rax
0x00e80347: je     0x140e803e0
0x00e8034d: lea    rcx,[rdi+0x11b408]
0x00e80354: mov    edx,DWORD PTR [rax+0x8]
0x00e80357: call   0x14014d850
0x00e8035c: mov    rdi,rax
0x00e8035f: test   rax,rax
0x00e80362: je     0x140e803e0
0x00e80364: mov    edx,esi
0x00e80366: and    edx,0x8000000f
0x00e8036c: jge    0x140e80375
0x00e8036e: dec    edx
0x00e80370: or     edx,0xfffffff0
0x00e80373: inc    edx
0x00e80375: mov    ecx,r14d
0x00e80378: and    ecx,0x8000000f
0x00e8037e: jge    0x140e80387
0x00e80380: dec    ecx
0x00e80382: or     ecx,0xfffffff0
0x00e80385: inc    ecx
0x00e80387: movsx  rax,dx
0x00e8038b: shl    rax,0x4
0x00e8038f: movsx  rcx,cx
0x00e80393: add    rax,r15
0x00e80396: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e8039b: cmp    dl,0x43
0x00e8039e: jb     0x140e803a9
0x00e803a0: lea    rdx,[rip+0x8b1041]        # 0x1417313e8 ; literal="Dense "
0x00e803a7: jmp    0x140e803b5
0x00e803a9: cmp    dl,0x21
0x00e803ac: ja     0x140e803bd
0x00e803ae: lea    rdx,[rip+0x8b0ff3]        # 0x1417313a8 ; literal="Sparse "
0x00e803b5: mov    rcx,rbx
0x00e803b8: call   0x14006f560
0x00e803bd: lea    rdx,[rdi+0x90]
0x00e803c4: mov    rcx,rbx
0x00e803c7: call   0x1400b9d10
0x00e803cc: lea    rdx,[rip+0x8b18d5]        # 0x141731ca8 ; literal=" Downward Stairway"
0x00e803d3: mov    rcx,rbx
0x00e803d6: call   0x14006f560
0x00e803db: jmp    0x140e834d4
0x00e803e0: lea    rdx,[rip+0x8b18d9]        # 0x141731cc0 ; literal="Grassy Downward Stairway"
0x00e803e7: mov    rcx,rbx
0x00e803ea: call   0x14006f560
0x00e803ef: jmp    0x140e834d4
0x00e803f4: lea    rdx,[rip+0x8b0ff5]        # 0x1417313f0 ; literal="Shoddy "
0x00e803fb: mov    rcx,rbx
0x00e803fe: call   0x14006f560
0x00e80403: mov    BYTE PTR [rsp+0x28],0x1
0x00e80408: mov    QWORD PTR [rsp+0x20],rbx
0x00e8040d: movzx  r9d,r15w
0x00e80411: movzx  r8d,r14w
0x00e80415: movzx  edx,si
0x00e80418: mov    rcx,rdi
0x00e8041b: call   0x140a46f20
0x00e80420: lea    rdx,[rip+0x8b17c1]        # 0x141731be8 ; literal=" Up/Down Stairway"
0x00e80427: mov    rcx,rbx
0x00e8042a: call   0x14006f560
0x00e8042f: jmp    0x140e834d4
0x00e80434: lea    rax,[rsp+0x50]
0x00e80439: mov    QWORD PTR [rsp+0x40],rax
0x00e8043e: lea    rax,[rsp+0x60]
0x00e80443: mov    QWORD PTR [rsp+0x38],rax
0x00e80448: lea    rax,[rsp+0x54]
0x00e8044d: mov    QWORD PTR [rsp+0x30],rax
0x00e80452: lea    rax,[rsp+0x5c]
0x00e80457: mov    QWORD PTR [rsp+0x28],rax
0x00e8045c: lea    rax,[rsp+0x58]
0x00e80461: mov    QWORD PTR [rsp+0x20],rax
0x00e80466: movzx  r9d,r15w
0x00e8046a: movzx  r8d,r14w
0x00e8046e: movzx  edx,si
0x00e80471: mov    rcx,rdi
0x00e80474: call   0x1414d0c70
0x00e80479: movzx  eax,WORD PTR [rsp+0x50]
0x00e8047e: mov    WORD PTR [rsp+0x30],ax
0x00e80483: mov    BYTE PTR [rsp+0x28],r12b
0x00e80488: mov    DWORD PTR [rsp+0x20],r12d
0x00e8048d: mov    r9d,DWORD PTR [rsp+0x60]
0x00e80492: movzx  r8d,WORD PTR [rsp+0x54]
0x00e80498: lea    rdx,[rbp+0x0]
0x00e8049c: mov    rcx,rdi
0x00e8049f: call   0x1414d1920
0x00e804a4: lea    rdx,[rbp+0x0]
0x00e804a8: jmp    0x140e802fe
0x00e804ad: lea    rdx,[rip+0x8b0f3c]        # 0x1417313f0 ; literal="Shoddy "
0x00e804b4: mov    rcx,rbx
0x00e804b7: call   0x14006f560
0x00e804bc: mov    BYTE PTR [rsp+0x28],0x1
0x00e804c1: mov    QWORD PTR [rsp+0x20],rbx
0x00e804c6: movzx  r9d,r15w
0x00e804ca: movzx  r8d,r14w
0x00e804ce: movzx  edx,si
0x00e804d1: mov    rcx,rdi
0x00e804d4: call   0x140a46f20
0x00e804d9: lea    rdx,[rip+0x8b17c8]        # 0x141731ca8 ; literal=" Downward Stairway"
0x00e804e0: mov    rcx,rbx
0x00e804e3: call   0x14006f560
0x00e804e8: jmp    0x140e834d4
0x00e804ed: lea    rax,[rsp+0x50]
0x00e804f2: mov    QWORD PTR [rsp+0x40],rax
0x00e804f7: lea    rax,[rsp+0x60]
0x00e804fc: mov    QWORD PTR [rsp+0x38],rax
0x00e80501: lea    rax,[rsp+0x54]
0x00e80506: mov    QWORD PTR [rsp+0x30],rax
0x00e8050b: lea    rax,[rsp+0x5c]
0x00e80510: mov    QWORD PTR [rsp+0x28],rax
0x00e80515: lea    rax,[rsp+0x58]
0x00e8051a: mov    QWORD PTR [rsp+0x20],rax
0x00e8051f: movzx  r9d,r15w
0x00e80523: movzx  r8d,r14w
0x00e80527: movzx  edx,si
0x00e8052a: mov    rcx,rdi
0x00e8052d: call   0x1414d0c70
0x00e80532: movzx  eax,WORD PTR [rsp+0x50]
0x00e80537: mov    WORD PTR [rsp+0x30],ax
0x00e8053c: mov    BYTE PTR [rsp+0x28],r12b
0x00e80541: mov    DWORD PTR [rsp+0x20],r12d
0x00e80546: mov    r9d,DWORD PTR [rsp+0x60]
0x00e8054b: movzx  r8d,WORD PTR [rsp+0x54]
0x00e80551: lea    rdx,[rbp+0x0]
0x00e80555: mov    rcx,rdi
0x00e80558: call   0x1414d1920
0x00e8055d: lea    rdx,[rbp+0x0]
0x00e80561: mov    rcx,rbx
0x00e80564: call   0x1400b9d10
0x00e80569: lea    rdx,[rip+0x8b1738]        # 0x141731ca8 ; literal=" Downward Stairway"
0x00e80570: mov    rcx,rbx
0x00e80573: call   0x14006f560
0x00e80578: jmp    0x140e834d4
0x00e8057d: lea    rdx,[rip+0x8b0e6c]        # 0x1417313f0 ; literal="Shoddy "
0x00e80584: mov    rcx,rbx
0x00e80587: call   0x14006f560
0x00e8058c: mov    BYTE PTR [rsp+0x28],0x1
0x00e80591: mov    QWORD PTR [rsp+0x20],rbx
0x00e80596: movzx  r9d,r15w
0x00e8059a: movzx  r8d,r14w
0x00e8059e: movzx  edx,si
0x00e805a1: mov    rcx,rdi
0x00e805a4: call   0x140a46f20
0x00e805a9: lea    rdx,[rip+0x8b1608]        # 0x141731bb8 ; literal=" Upward Stairway"
0x00e805b0: mov    rcx,rbx
0x00e805b3: call   0x14006f560
0x00e805b8: jmp    0x140e834d4
0x00e805bd: lea    rdx,[rip+0x8b171c]        # 0x141731ce0 ; literal="Underworld Gate"
0x00e805c4: mov    rcx,rbx
0x00e805c7: call   0x14006f560
0x00e805cc: jmp    0x140e834d4
0x00e805d1: lea    rax,[rsp+0x50]
0x00e805d6: mov    QWORD PTR [rsp+0x40],rax
0x00e805db: lea    rax,[rsp+0x60]
0x00e805e0: mov    QWORD PTR [rsp+0x38],rax
0x00e805e5: lea    rax,[rsp+0x54]
0x00e805ea: mov    QWORD PTR [rsp+0x30],rax
0x00e805ef: lea    rax,[rsp+0x5c]
0x00e805f4: mov    QWORD PTR [rsp+0x28],rax
0x00e805f9: lea    rax,[rsp+0x58]
0x00e805fe: mov    QWORD PTR [rsp+0x20],rax
0x00e80603: movzx  r9d,r15w
0x00e80607: movzx  r8d,r14w
0x00e8060b: movzx  edx,si
0x00e8060e: mov    rcx,rdi
0x00e80611: call   0x1414d0c70
0x00e80616: movzx  eax,WORD PTR [rsp+0x50]
0x00e8061b: mov    WORD PTR [rsp+0x30],ax
0x00e80620: mov    BYTE PTR [rsp+0x28],r12b
0x00e80625: mov    DWORD PTR [rsp+0x20],r12d
0x00e8062a: mov    r9d,DWORD PTR [rsp+0x60]
0x00e8062f: movzx  r8d,WORD PTR [rsp+0x54]
0x00e80635: lea    rdx,[rbp+0x0]
0x00e80639: mov    rcx,rdi
0x00e8063c: call   0x1414d1920
0x00e80641: lea    rdx,[rbp+0x0]
0x00e80645: jmp    0x140e80238
0x00e8064a: lea    rdx,[rip+0x8b169f]        # 0x141731cf0 ; literal="Ice Up/Down Stairway"
0x00e80651: mov    rcx,rbx
0x00e80654: call   0x14006f560
0x00e80659: jmp    0x140e834d4
0x00e8065e: lea    rdx,[rip+0x8b15eb]        # 0x141731c50 ; literal="Ice Downward Stairway"
0x00e80665: mov    rcx,rbx
0x00e80668: call   0x14006f560
0x00e8066d: jmp    0x140e834d4
0x00e80672: lea    rdx,[rip+0x8b15ef]        # 0x141731c68 ; literal="Ice Upward Stairway"
0x00e80679: mov    rcx,rbx
0x00e8067c: call   0x14006f560
0x00e80681: jmp    0x140e834d4
0x00e80686: movzx  r9d,r15w
0x00e8068a: movzx  r8d,r14w
0x00e8068e: movzx  edx,si
0x00e80691: mov    rcx,rdi
0x00e80694: call   0x140e7ced0
0x00e80699: test   al,al
0x00e8069b: jne    0x140e806ac
0x00e8069d: lea    rdx,[rip+0x8b1574]        # 0x141731c18 ; literal="Unusable "
0x00e806a4: mov    rcx,rbx
0x00e806a7: call   0x14006f560
0x00e806ac: movzx  r9d,r15w
0x00e806b0: movzx  r8d,r14w
0x00e806b4: movzx  edx,si
0x00e806b7: mov    rcx,rdi
0x00e806ba: call   0x1414d1330
0x00e806bf: mov    r15,rax
0x00e806c2: test   rax,rax
0x00e806c5: je     0x140e8075e
0x00e806cb: lea    rcx,[rdi+0x11b408]
0x00e806d2: mov    edx,DWORD PTR [rax+0x8]
0x00e806d5: call   0x14014d850
0x00e806da: mov    rdi,rax
0x00e806dd: test   rax,rax
0x00e806e0: je     0x140e8075e
0x00e806e2: mov    edx,esi
0x00e806e4: and    edx,0x8000000f
0x00e806ea: jge    0x140e806f3
0x00e806ec: dec    edx
0x00e806ee: or     edx,0xfffffff0
0x00e806f1: inc    edx
0x00e806f3: mov    ecx,r14d
0x00e806f6: and    ecx,0x8000000f
0x00e806fc: jge    0x140e80705
0x00e806fe: dec    ecx
0x00e80700: or     ecx,0xfffffff0
0x00e80703: inc    ecx
0x00e80705: movsx  rax,dx
0x00e80709: shl    rax,0x4
0x00e8070d: movsx  rcx,cx
0x00e80711: add    rax,r15
0x00e80714: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e80719: cmp    dl,0x43
0x00e8071c: jb     0x140e80727
0x00e8071e: lea    rdx,[rip+0x8b0cc3]        # 0x1417313e8 ; literal="Dense "
0x00e80725: jmp    0x140e80733
0x00e80727: cmp    dl,0x21
0x00e8072a: ja     0x140e8073b
0x00e8072c: lea    rdx,[rip+0x8b0c75]        # 0x1417313a8 ; literal="Sparse "
0x00e80733: mov    rcx,rbx
0x00e80736: call   0x14006f560
0x00e8073b: lea    rdx,[rdi+0x90]
0x00e80742: mov    rcx,rbx
0x00e80745: call   0x1400b9d10
0x00e8074a: lea    rdx,[rip+0x8b152f]        # 0x141731c80 ; literal=" Upward Slope"
0x00e80751: mov    rcx,rbx
0x00e80754: call   0x14006f560
0x00e80759: jmp    0x140e834d4
0x00e8075e: lea    rdx,[rip+0x8b152b]        # 0x141731c90 ; literal="Grassy Upward Slope"
0x00e80765: mov    rcx,rbx
0x00e80768: call   0x14006f560
0x00e8076d: jmp    0x140e834d4
0x00e80772: movzx  r9d,r15w
0x00e80776: movzx  r8d,r14w
0x00e8077a: movzx  edx,si
0x00e8077d: mov    rcx,rdi
0x00e80780: call   0x140e7ced0
0x00e80785: test   al,al
0x00e80787: jne    0x140e80798
0x00e80789: lea    rdx,[rip+0x8b1488]        # 0x141731c18 ; literal="Unusable "
0x00e80790: mov    rcx,rbx
0x00e80793: call   0x14006f560
0x00e80798: movzx  r9d,r15w
0x00e8079c: movzx  r8d,r14w
0x00e807a0: movzx  edx,si
0x00e807a3: mov    rcx,rdi
0x00e807a6: call   0x1414d1330
0x00e807ab: mov    r15,rax
0x00e807ae: test   rax,rax
0x00e807b1: je     0x140e80845
0x00e807b7: lea    rcx,[rdi+0x11b408]
0x00e807be: mov    edx,DWORD PTR [rax+0x8]
0x00e807c1: call   0x14014d850
0x00e807c6: mov    rdi,rax
0x00e807c9: test   rax,rax
0x00e807cc: je     0x140e80845
0x00e807ce: mov    edx,esi
0x00e807d0: and    edx,0x8000000f
0x00e807d6: jge    0x140e807df
0x00e807d8: dec    edx
0x00e807da: or     edx,0xfffffff0
0x00e807dd: inc    edx
0x00e807df: mov    ecx,r14d
0x00e807e2: and    ecx,0x8000000f
0x00e807e8: jge    0x140e807f1
0x00e807ea: dec    ecx
0x00e807ec: or     ecx,0xfffffff0
0x00e807ef: inc    ecx
0x00e807f1: movsx  rax,dx
0x00e807f5: shl    rax,0x4
0x00e807f9: movsx  rcx,cx
0x00e807fd: add    rax,r15
0x00e80800: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e80805: cmp    dl,0x43
0x00e80808: jb     0x140e80825
0x00e8080a: lea    rdx,[rip+0x8b0bd7]        # 0x1417313e8 ; literal="Dense "
0x00e80811: mov    rcx,rbx
0x00e80814: call   0x14006f560
0x00e80819: lea    rdx,[rip+0x8b0b98]        # 0x1417313b8 ; literal="Dry "
0x00e80820: jmp    0x140e80733
0x00e80825: cmp    dl,0x21
0x00e80828: ja     0x140e80839
0x00e8082a: lea    rdx,[rip+0x8b0b77]        # 0x1417313a8 ; literal="Sparse "
0x00e80831: mov    rcx,rbx
0x00e80834: call   0x14006f560
0x00e80839: lea    rdx,[rip+0x8b0b78]        # 0x1417313b8 ; literal="Dry "
0x00e80840: jmp    0x140e80733
0x00e80845: lea    rdx,[rip+0x8b151c]        # 0x141731d68 ; literal="Dry Grass Upward Slope"
0x00e8084c: mov    rcx,rbx
0x00e8084f: call   0x14006f560
0x00e80854: jmp    0x140e834d4
0x00e80859: movzx  r9d,r15w
0x00e8085d: movzx  r8d,r14w
0x00e80861: movzx  edx,si
0x00e80864: mov    rcx,rdi
0x00e80867: call   0x140e7ced0
0x00e8086c: test   al,al
0x00e8086e: jne    0x140e8087f
0x00e80870: lea    rdx,[rip+0x8b13a1]        # 0x141731c18 ; literal="Unusable "
0x00e80877: mov    rcx,rbx
0x00e8087a: call   0x14006f560
0x00e8087f: movzx  r9d,r15w
0x00e80883: movzx  r8d,r14w
0x00e80887: movzx  edx,si
0x00e8088a: mov    rcx,rdi
0x00e8088d: call   0x1414d1330
0x00e80892: mov    r15,rax
0x00e80895: test   rax,rax
0x00e80898: je     0x140e8092c
0x00e8089e: lea    rcx,[rdi+0x11b408]
0x00e808a5: mov    edx,DWORD PTR [rax+0x8]
0x00e808a8: call   0x14014d850
0x00e808ad: mov    rdi,rax
0x00e808b0: test   rax,rax
0x00e808b3: je     0x140e8092c
0x00e808b5: mov    edx,esi
0x00e808b7: and    edx,0x8000000f
0x00e808bd: jge    0x140e808c6
0x00e808bf: dec    edx
0x00e808c1: or     edx,0xfffffff0
0x00e808c4: inc    edx
0x00e808c6: mov    ecx,r14d
0x00e808c9: and    ecx,0x8000000f
0x00e808cf: jge    0x140e808d8
0x00e808d1: dec    ecx
0x00e808d3: or     ecx,0xfffffff0
0x00e808d6: inc    ecx
0x00e808d8: movsx  rax,dx
0x00e808dc: shl    rax,0x4
0x00e808e0: movsx  rcx,cx
0x00e808e4: add    rax,r15
0x00e808e7: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e808ec: cmp    dl,0x43
0x00e808ef: jb     0x140e8090c
0x00e808f1: lea    rdx,[rip+0x8b0af0]        # 0x1417313e8 ; literal="Dense "
0x00e808f8: mov    rcx,rbx
0x00e808fb: call   0x14006f560
0x00e80900: lea    rdx,[rip+0x8b0ad9]        # 0x1417313e0 ; literal="Dead "
0x00e80907: jmp    0x140e80733
0x00e8090c: cmp    dl,0x21
0x00e8090f: ja     0x140e80920
0x00e80911: lea    rdx,[rip+0x8b0a90]        # 0x1417313a8 ; literal="Sparse "
0x00e80918: mov    rcx,rbx
0x00e8091b: call   0x14006f560
0x00e80920: lea    rdx,[rip+0x8b0ab9]        # 0x1417313e0 ; literal="Dead "
0x00e80927: jmp    0x140e80733
0x00e8092c: lea    rdx,[rip+0x8b144d]        # 0x141731d80 ; literal="Dead Grass Upward Slope"
0x00e80933: mov    rcx,rbx
0x00e80936: call   0x14006f560
0x00e8093b: jmp    0x140e834d4
0x00e80940: movzx  r9d,r15w
0x00e80944: movzx  r8d,r14w
0x00e80948: movzx  edx,si
0x00e8094b: mov    rcx,rdi
0x00e8094e: call   0x140e7ced0
0x00e80953: test   al,al
0x00e80955: jne    0x140e80966
0x00e80957: lea    rdx,[rip+0x8b12ba]        # 0x141731c18 ; literal="Unusable "
0x00e8095e: mov    rcx,rbx
0x00e80961: call   0x14006f560
0x00e80966: lea    rax,[rsp+0x50]
0x00e8096b: mov    QWORD PTR [rsp+0x40],rax
0x00e80970: lea    rax,[rsp+0x60]
0x00e80975: mov    QWORD PTR [rsp+0x38],rax
0x00e8097a: lea    rax,[rsp+0x54]
0x00e8097f: mov    QWORD PTR [rsp+0x30],rax
0x00e80984: lea    rax,[rsp+0x5c]
0x00e80989: mov    QWORD PTR [rsp+0x28],rax
0x00e8098e: lea    rax,[rsp+0x58]
0x00e80993: mov    QWORD PTR [rsp+0x20],rax
0x00e80998: movzx  r9d,r15w
0x00e8099c: movzx  r8d,r14w
0x00e809a0: movzx  edx,si
0x00e809a3: mov    rcx,rdi
0x00e809a6: call   0x1414d0c70
0x00e809ab: movzx  eax,WORD PTR [rsp+0x50]
0x00e809b0: mov    WORD PTR [rsp+0x30],ax
0x00e809b5: mov    BYTE PTR [rsp+0x28],r12b
0x00e809ba: mov    DWORD PTR [rsp+0x20],r12d
0x00e809bf: mov    r9d,DWORD PTR [rsp+0x60]
0x00e809c4: movzx  r8d,WORD PTR [rsp+0x54]
0x00e809ca: lea    rdx,[rbp+0x0]
0x00e809ce: mov    rcx,rdi
0x00e809d1: call   0x1414d1920
0x00e809d6: lea    rdx,[rbp+0x0]
0x00e809da: mov    rcx,rbx
0x00e809dd: call   0x1400b9d10
0x00e809e2: lea    rdx,[rip+0x8b13af]        # 0x141731d98 ; literal=" Upward Track (N)"
0x00e809e9: mov    rcx,rbx
0x00e809ec: call   0x14006f560
0x00e809f1: jmp    0x140e834d4
0x00e809f6: movzx  r9d,r15w
0x00e809fa: movzx  r8d,r14w
0x00e809fe: movzx  edx,si
0x00e80a01: mov    rcx,rdi
0x00e80a04: call   0x140e7ced0
0x00e80a09: test   al,al
0x00e80a0b: jne    0x140e80a1c
0x00e80a0d: lea    rdx,[rip+0x8b1204]        # 0x141731c18 ; literal="Unusable "
0x00e80a14: mov    rcx,rbx
0x00e80a17: call   0x14006f560
0x00e80a1c: mov    BYTE PTR [rsp+0x28],0x1
0x00e80a21: mov    QWORD PTR [rsp+0x20],rbx
0x00e80a26: movzx  r9d,r15w
0x00e80a2a: movzx  r8d,r14w
0x00e80a2e: movzx  edx,si
0x00e80a31: mov    rcx,rdi
0x00e80a34: call   0x140a46f20
0x00e80a39: lea    rdx,[rip+0x8b1358]        # 0x141731d98 ; literal=" Upward Track (N)"
0x00e80a40: mov    rcx,rbx
0x00e80a43: call   0x14006f560
0x00e80a48: jmp    0x140e834d4
0x00e80a4d: movzx  r9d,r15w
0x00e80a51: movzx  r8d,r14w
0x00e80a55: movzx  edx,si
0x00e80a58: mov    rcx,rdi
0x00e80a5b: call   0x140e7ced0
0x00e80a60: test   al,al
0x00e80a62: jne    0x140e80a73
0x00e80a64: lea    rdx,[rip+0x8b11ad]        # 0x141731c18 ; literal="Unusable "
0x00e80a6b: mov    rcx,rbx
0x00e80a6e: call   0x14006f560
0x00e80a73: lea    rdx,[rip+0x8b1336]        # 0x141731db0 ; literal="Ice Upward Track (N)"
0x00e80a7a: mov    rcx,rbx
0x00e80a7d: call   0x14006f560
0x00e80a82: jmp    0x140e834d4
0x00e80a87: movzx  r9d,r15w
0x00e80a8b: movzx  r8d,r14w
0x00e80a8f: movzx  edx,si
0x00e80a92: mov    rcx,rdi
0x00e80a95: call   0x140e7ced0
0x00e80a9a: test   al,al
0x00e80a9c: jne    0x140e80aad
0x00e80a9e: lea    rdx,[rip+0x8b1173]        # 0x141731c18 ; literal="Unusable "
0x00e80aa5: mov    rcx,rbx
0x00e80aa8: call   0x14006f560
0x00e80aad: lea    rax,[rsp+0x50]
0x00e80ab2: mov    QWORD PTR [rsp+0x40],rax
0x00e80ab7: lea    rax,[rsp+0x60]
0x00e80abc: mov    QWORD PTR [rsp+0x38],rax
0x00e80ac1: lea    rax,[rsp+0x54]
0x00e80ac6: mov    QWORD PTR [rsp+0x30],rax
0x00e80acb: lea    rax,[rsp+0x5c]
0x00e80ad0: mov    QWORD PTR [rsp+0x28],rax
0x00e80ad5: lea    rax,[rsp+0x58]
0x00e80ada: mov    QWORD PTR [rsp+0x20],rax
0x00e80adf: movzx  r9d,r15w
0x00e80ae3: movzx  r8d,r14w
0x00e80ae7: movzx  edx,si
0x00e80aea: mov    rcx,rdi
0x00e80aed: call   0x1414d0c70
0x00e80af2: movzx  eax,WORD PTR [rsp+0x50]
0x00e80af7: mov    WORD PTR [rsp+0x30],ax
0x00e80afc: mov    BYTE PTR [rsp+0x28],r12b
0x00e80b01: mov    DWORD PTR [rsp+0x20],r12d
0x00e80b06: mov    r9d,DWORD PTR [rsp+0x60]
0x00e80b0b: movzx  r8d,WORD PTR [rsp+0x54]
0x00e80b11: lea    rdx,[rbp+0x0]
0x00e80b15: mov    rcx,rdi
0x00e80b18: call   0x1414d1920
0x00e80b1d: lea    rdx,[rbp+0x0]
0x00e80b21: mov    rcx,rbx
0x00e80b24: call   0x1400b9d10
0x00e80b29: lea    rdx,[rip+0x8b11d8]        # 0x141731d08 ; literal=" Upward Track (S)"
0x00e80b30: mov    rcx,rbx
0x00e80b33: call   0x14006f560
0x00e80b38: jmp    0x140e834d4
0x00e80b3d: movzx  r9d,r15w
0x00e80b41: movzx  r8d,r14w
0x00e80b45: movzx  edx,si
0x00e80b48: mov    rcx,rdi
0x00e80b4b: call   0x140e7ced0
0x00e80b50: test   al,al
0x00e80b52: jne    0x140e80b63
0x00e80b54: lea    rdx,[rip+0x8b10bd]        # 0x141731c18 ; literal="Unusable "
0x00e80b5b: mov    rcx,rbx
0x00e80b5e: call   0x14006f560
0x00e80b63: mov    BYTE PTR [rsp+0x28],0x1
0x00e80b68: mov    QWORD PTR [rsp+0x20],rbx
0x00e80b6d: movzx  r9d,r15w
0x00e80b71: movzx  r8d,r14w
0x00e80b75: movzx  edx,si
0x00e80b78: mov    rcx,rdi
0x00e80b7b: call   0x140a46f20
0x00e80b80: lea    rdx,[rip+0x8b1181]        # 0x141731d08 ; literal=" Upward Track (S)"
0x00e80b87: mov    rcx,rbx
0x00e80b8a: call   0x14006f560
0x00e80b8f: jmp    0x140e834d4
0x00e80b94: movzx  r9d,r15w
0x00e80b98: movzx  r8d,r14w
0x00e80b9c: movzx  edx,si
0x00e80b9f: mov    rcx,rdi
0x00e80ba2: call   0x140e7ced0
0x00e80ba7: test   al,al
0x00e80ba9: jne    0x140e80bba
0x00e80bab: lea    rdx,[rip+0x8b1066]        # 0x141731c18 ; literal="Unusable "
0x00e80bb2: mov    rcx,rbx
0x00e80bb5: call   0x14006f560
0x00e80bba: lea    rdx,[rip+0x8b115f]        # 0x141731d20 ; literal="Ice Upward Track (S)"
0x00e80bc1: mov    rcx,rbx
0x00e80bc4: call   0x14006f560
0x00e80bc9: jmp    0x140e834d4
0x00e80bce: movzx  r9d,r15w
0x00e80bd2: movzx  r8d,r14w
0x00e80bd6: movzx  edx,si
0x00e80bd9: mov    rcx,rdi
0x00e80bdc: call   0x140e7ced0
0x00e80be1: test   al,al
0x00e80be3: jne    0x140e80bf4
0x00e80be5: lea    rdx,[rip+0x8b102c]        # 0x141731c18 ; literal="Unusable "
0x00e80bec: mov    rcx,rbx
0x00e80bef: call   0x14006f560
0x00e80bf4: lea    rax,[rsp+0x50]
0x00e80bf9: mov    QWORD PTR [rsp+0x40],rax
0x00e80bfe: lea    rax,[rsp+0x60]
0x00e80c03: mov    QWORD PTR [rsp+0x38],rax
0x00e80c08: lea    rax,[rsp+0x54]
0x00e80c0d: mov    QWORD PTR [rsp+0x30],rax
0x00e80c12: lea    rax,[rsp+0x5c]
0x00e80c17: mov    QWORD PTR [rsp+0x28],rax
0x00e80c1c: lea    rax,[rsp+0x58]
0x00e80c21: mov    QWORD PTR [rsp+0x20],rax
0x00e80c26: movzx  r9d,r15w
0x00e80c2a: movzx  r8d,r14w
0x00e80c2e: movzx  edx,si
0x00e80c31: mov    rcx,rdi
0x00e80c34: call   0x1414d0c70
0x00e80c39: movzx  eax,WORD PTR [rsp+0x50]
0x00e80c3e: mov    WORD PTR [rsp+0x30],ax
0x00e80c43: mov    BYTE PTR [rsp+0x28],r12b
0x00e80c48: mov    DWORD PTR [rsp+0x20],r12d
0x00e80c4d: mov    r9d,DWORD PTR [rsp+0x60]
0x00e80c52: movzx  r8d,WORD PTR [rsp+0x54]
0x00e80c58: lea    rdx,[rbp+0x0]
0x00e80c5c: mov    rcx,rdi
0x00e80c5f: call   0x1414d1920
0x00e80c64: lea    rdx,[rbp+0x0]
0x00e80c68: mov    rcx,rbx
0x00e80c6b: call   0x1400b9d10
0x00e80c70: lea    rdx,[rip+0x8b10c1]        # 0x141731d38 ; literal=" Upward Track (E)"
0x00e80c77: mov    rcx,rbx
0x00e80c7a: call   0x14006f560
0x00e80c7f: jmp    0x140e834d4
0x00e80c84: movzx  r9d,r15w
0x00e80c88: movzx  r8d,r14w
0x00e80c8c: movzx  edx,si
0x00e80c8f: mov    rcx,rdi
0x00e80c92: call   0x140e7ced0
0x00e80c97: test   al,al
0x00e80c99: jne    0x140e80caa
0x00e80c9b: lea    rdx,[rip+0x8b0f76]        # 0x141731c18 ; literal="Unusable "
0x00e80ca2: mov    rcx,rbx
0x00e80ca5: call   0x14006f560
0x00e80caa: mov    BYTE PTR [rsp+0x28],0x1
0x00e80caf: mov    QWORD PTR [rsp+0x20],rbx
0x00e80cb4: movzx  r9d,r15w
0x00e80cb8: movzx  r8d,r14w
0x00e80cbc: movzx  edx,si
0x00e80cbf: mov    rcx,rdi
0x00e80cc2: call   0x140a46f20
0x00e80cc7: lea    rdx,[rip+0x8b106a]        # 0x141731d38 ; literal=" Upward Track (E)"
0x00e80cce: mov    rcx,rbx
0x00e80cd1: call   0x14006f560
0x00e80cd6: jmp    0x140e834d4
0x00e80cdb: movzx  r9d,r15w
0x00e80cdf: movzx  r8d,r14w
0x00e80ce3: movzx  edx,si
0x00e80ce6: mov    rcx,rdi
0x00e80ce9: call   0x140e7ced0
0x00e80cee: test   al,al
0x00e80cf0: jne    0x140e80d01
0x00e80cf2: lea    rdx,[rip+0x8b0f1f]        # 0x141731c18 ; literal="Unusable "
0x00e80cf9: mov    rcx,rbx
0x00e80cfc: call   0x14006f560
0x00e80d01: lea    rdx,[rip+0x8b1048]        # 0x141731d50 ; literal="Ice Upward Track (E)"
0x00e80d08: mov    rcx,rbx
0x00e80d0b: call   0x14006f560
0x00e80d10: jmp    0x140e834d4
0x00e80d15: movzx  r9d,r15w
0x00e80d19: movzx  r8d,r14w
0x00e80d1d: movzx  edx,si
0x00e80d20: mov    rcx,rdi
0x00e80d23: call   0x140e7ced0
0x00e80d28: test   al,al
0x00e80d2a: jne    0x140e80d3b
0x00e80d2c: lea    rdx,[rip+0x8b0ee5]        # 0x141731c18 ; literal="Unusable "
0x00e80d33: mov    rcx,rbx
0x00e80d36: call   0x14006f560
0x00e80d3b: lea    rax,[rsp+0x50]
0x00e80d40: mov    QWORD PTR [rsp+0x40],rax
0x00e80d45: lea    rax,[rsp+0x60]
0x00e80d4a: mov    QWORD PTR [rsp+0x38],rax
0x00e80d4f: lea    rax,[rsp+0x54]
0x00e80d54: mov    QWORD PTR [rsp+0x30],rax
0x00e80d59: lea    rax,[rsp+0x5c]
0x00e80d5e: mov    QWORD PTR [rsp+0x28],rax
0x00e80d63: lea    rax,[rsp+0x58]
0x00e80d68: mov    QWORD PTR [rsp+0x20],rax
0x00e80d6d: movzx  r9d,r15w
0x00e80d71: movzx  r8d,r14w
0x00e80d75: movzx  edx,si
0x00e80d78: mov    rcx,rdi
0x00e80d7b: call   0x1414d0c70
0x00e80d80: movzx  eax,WORD PTR [rsp+0x50]
0x00e80d85: mov    WORD PTR [rsp+0x30],ax
0x00e80d8a: mov    BYTE PTR [rsp+0x28],r12b
0x00e80d8f: mov    DWORD PTR [rsp+0x20],r12d
0x00e80d94: mov    r9d,DWORD PTR [rsp+0x60]
0x00e80d99: movzx  r8d,WORD PTR [rsp+0x54]
0x00e80d9f: lea    rdx,[rbp+0x0]
0x00e80da3: mov    rcx,rdi
0x00e80da6: call   0x1414d1920
0x00e80dab: lea    rdx,[rbp+0x0]
0x00e80daf: mov    rcx,rbx
0x00e80db2: call   0x1400b9d10
0x00e80db7: lea    rdx,[rip+0x8b106a]        # 0x141731e28 ; literal=" Upward Track (W)"
0x00e80dbe: mov    rcx,rbx
0x00e80dc1: call   0x14006f560
0x00e80dc6: jmp    0x140e834d4
0x00e80dcb: movzx  r9d,r15w
0x00e80dcf: movzx  r8d,r14w
0x00e80dd3: movzx  edx,si
0x00e80dd6: mov    rcx,rdi
0x00e80dd9: call   0x140e7ced0
0x00e80dde: test   al,al
0x00e80de0: jne    0x140e80df1
0x00e80de2: lea    rdx,[rip+0x8b0e2f]        # 0x141731c18 ; literal="Unusable "
0x00e80de9: mov    rcx,rbx
0x00e80dec: call   0x14006f560
0x00e80df1: mov    BYTE PTR [rsp+0x28],0x1
0x00e80df6: mov    QWORD PTR [rsp+0x20],rbx
0x00e80dfb: movzx  r9d,r15w
0x00e80dff: movzx  r8d,r14w
0x00e80e03: movzx  edx,si
0x00e80e06: mov    rcx,rdi
0x00e80e09: call   0x140a46f20
0x00e80e0e: lea    rdx,[rip+0x8b1013]        # 0x141731e28 ; literal=" Upward Track (W)"
0x00e80e15: mov    rcx,rbx
0x00e80e18: call   0x14006f560
0x00e80e1d: jmp    0x140e834d4
0x00e80e22: movzx  r9d,r15w
0x00e80e26: movzx  r8d,r14w
0x00e80e2a: movzx  edx,si
0x00e80e2d: mov    rcx,rdi
0x00e80e30: call   0x140e7ced0
0x00e80e35: test   al,al
0x00e80e37: jne    0x140e80e48
0x00e80e39: lea    rdx,[rip+0x8b0dd8]        # 0x141731c18 ; literal="Unusable "
0x00e80e40: mov    rcx,rbx
0x00e80e43: call   0x14006f560
0x00e80e48: lea    rdx,[rip+0x8b0ff1]        # 0x141731e40 ; literal="Ice Upward Track (W)"
0x00e80e4f: mov    rcx,rbx
0x00e80e52: call   0x14006f560
0x00e80e57: jmp    0x140e834d4
0x00e80e5c: movzx  r9d,r15w
0x00e80e60: movzx  r8d,r14w
0x00e80e64: movzx  edx,si
0x00e80e67: mov    rcx,rdi
0x00e80e6a: call   0x140e7ced0
0x00e80e6f: test   al,al
0x00e80e71: jne    0x140e80e82
0x00e80e73: lea    rdx,[rip+0x8b0d9e]        # 0x141731c18 ; literal="Unusable "
0x00e80e7a: mov    rcx,rbx
0x00e80e7d: call   0x14006f560
0x00e80e82: lea    rax,[rsp+0x50]
0x00e80e87: mov    QWORD PTR [rsp+0x40],rax
0x00e80e8c: lea    rax,[rsp+0x60]
0x00e80e91: mov    QWORD PTR [rsp+0x38],rax
0x00e80e96: lea    rax,[rsp+0x54]
0x00e80e9b: mov    QWORD PTR [rsp+0x30],rax
0x00e80ea0: lea    rax,[rsp+0x5c]
0x00e80ea5: mov    QWORD PTR [rsp+0x28],rax
0x00e80eaa: lea    rax,[rsp+0x58]
0x00e80eaf: mov    QWORD PTR [rsp+0x20],rax
0x00e80eb4: movzx  r9d,r15w
0x00e80eb8: movzx  r8d,r14w
0x00e80ebc: movzx  edx,si
0x00e80ebf: mov    rcx,rdi
0x00e80ec2: call   0x1414d0c70
0x00e80ec7: movzx  eax,WORD PTR [rsp+0x50]
0x00e80ecc: mov    WORD PTR [rsp+0x30],ax
0x00e80ed1: mov    BYTE PTR [rsp+0x28],r12b
0x00e80ed6: mov    DWORD PTR [rsp+0x20],r12d
0x00e80edb: mov    r9d,DWORD PTR [rsp+0x60]
0x00e80ee0: movzx  r8d,WORD PTR [rsp+0x54]
0x00e80ee6: lea    rdx,[rbp+0x0]
0x00e80eea: mov    rcx,rdi
0x00e80eed: call   0x1414d1920
0x00e80ef2: lea    rdx,[rbp+0x0]
0x00e80ef6: mov    rcx,rbx
0x00e80ef9: call   0x1400b9d10
0x00e80efe: lea    rdx,[rip+0x8b0f53]        # 0x141731e58 ; literal=" Upward Track (NS)"
0x00e80f05: mov    rcx,rbx
0x00e80f08: call   0x14006f560
0x00e80f0d: jmp    0x140e834d4
0x00e80f12: movzx  r9d,r15w
0x00e80f16: movzx  r8d,r14w
0x00e80f1a: movzx  edx,si
0x00e80f1d: mov    rcx,rdi
0x00e80f20: call   0x140e7ced0
0x00e80f25: test   al,al
0x00e80f27: jne    0x140e80f38
0x00e80f29: lea    rdx,[rip+0x8b0ce8]        # 0x141731c18 ; literal="Unusable "
0x00e80f30: mov    rcx,rbx
0x00e80f33: call   0x14006f560
0x00e80f38: mov    BYTE PTR [rsp+0x28],0x1
0x00e80f3d: mov    QWORD PTR [rsp+0x20],rbx
0x00e80f42: movzx  r9d,r15w
0x00e80f46: movzx  r8d,r14w
0x00e80f4a: movzx  edx,si
0x00e80f4d: mov    rcx,rdi
0x00e80f50: call   0x140a46f20
0x00e80f55: lea    rdx,[rip+0x8b0efc]        # 0x141731e58 ; literal=" Upward Track (NS)"
0x00e80f5c: mov    rcx,rbx
0x00e80f5f: call   0x14006f560
0x00e80f64: jmp    0x140e834d4
0x00e80f69: movzx  r9d,r15w
0x00e80f6d: movzx  r8d,r14w
0x00e80f71: movzx  edx,si
0x00e80f74: mov    rcx,rdi
0x00e80f77: call   0x140e7ced0
0x00e80f7c: test   al,al
0x00e80f7e: jne    0x140e80f8f
0x00e80f80: lea    rdx,[rip+0x8b0c91]        # 0x141731c18 ; literal="Unusable "
0x00e80f87: mov    rcx,rbx
0x00e80f8a: call   0x14006f560
0x00e80f8f: lea    rdx,[rip+0x8b0eda]        # 0x141731e70 ; literal="Ice Upward Track (NS)"
0x00e80f96: mov    rcx,rbx
0x00e80f99: call   0x14006f560
0x00e80f9e: jmp    0x140e834d4
0x00e80fa3: movzx  r9d,r15w
0x00e80fa7: movzx  r8d,r14w
0x00e80fab: movzx  edx,si
0x00e80fae: mov    rcx,rdi
0x00e80fb1: call   0x140e7ced0
0x00e80fb6: test   al,al
0x00e80fb8: jne    0x140e80fc9
0x00e80fba: lea    rdx,[rip+0x8b0c57]        # 0x141731c18 ; literal="Unusable "
0x00e80fc1: mov    rcx,rbx
0x00e80fc4: call   0x14006f560
0x00e80fc9: lea    rax,[rsp+0x50]
0x00e80fce: mov    QWORD PTR [rsp+0x40],rax
0x00e80fd3: lea    rax,[rsp+0x60]
0x00e80fd8: mov    QWORD PTR [rsp+0x38],rax
0x00e80fdd: lea    rax,[rsp+0x54]
0x00e80fe2: mov    QWORD PTR [rsp+0x30],rax
0x00e80fe7: lea    rax,[rsp+0x5c]
0x00e80fec: mov    QWORD PTR [rsp+0x28],rax
0x00e80ff1: lea    rax,[rsp+0x58]
0x00e80ff6: mov    QWORD PTR [rsp+0x20],rax
0x00e80ffb: movzx  r9d,r15w
0x00e80fff: movzx  r8d,r14w
0x00e81003: movzx  edx,si
0x00e81006: mov    rcx,rdi
0x00e81009: call   0x1414d0c70
0x00e8100e: movzx  eax,WORD PTR [rsp+0x50]
0x00e81013: mov    WORD PTR [rsp+0x30],ax
0x00e81018: mov    BYTE PTR [rsp+0x28],r12b
0x00e8101d: mov    DWORD PTR [rsp+0x20],r12d
0x00e81022: mov    r9d,DWORD PTR [rsp+0x60]
0x00e81027: movzx  r8d,WORD PTR [rsp+0x54]
0x00e8102d: lea    rdx,[rbp+0x0]
0x00e81031: mov    rcx,rdi
0x00e81034: call   0x1414d1920
0x00e81039: lea    rdx,[rbp+0x0]
0x00e8103d: mov    rcx,rbx
0x00e81040: call   0x1400b9d10
0x00e81045: lea    rdx,[rip+0x8b0d7c]        # 0x141731dc8 ; literal=" Upward Track (NE)"
0x00e8104c: mov    rcx,rbx
0x00e8104f: call   0x14006f560
0x00e81054: jmp    0x140e834d4
0x00e81059: movzx  r9d,r15w
0x00e8105d: movzx  r8d,r14w
0x00e81061: movzx  edx,si
0x00e81064: mov    rcx,rdi
0x00e81067: call   0x140e7ced0
0x00e8106c: test   al,al
0x00e8106e: jne    0x140e8107f
0x00e81070: lea    rdx,[rip+0x8b0ba1]        # 0x141731c18 ; literal="Unusable "
0x00e81077: mov    rcx,rbx
0x00e8107a: call   0x14006f560
0x00e8107f: mov    BYTE PTR [rsp+0x28],0x1
0x00e81084: mov    QWORD PTR [rsp+0x20],rbx
0x00e81089: movzx  r9d,r15w
0x00e8108d: movzx  r8d,r14w
0x00e81091: movzx  edx,si
0x00e81094: mov    rcx,rdi
0x00e81097: call   0x140a46f20
0x00e8109c: lea    rdx,[rip+0x8b0d25]        # 0x141731dc8 ; literal=" Upward Track (NE)"
0x00e810a3: mov    rcx,rbx
0x00e810a6: call   0x14006f560
0x00e810ab: jmp    0x140e834d4
0x00e810b0: movzx  r9d,r15w
0x00e810b4: movzx  r8d,r14w
0x00e810b8: movzx  edx,si
0x00e810bb: mov    rcx,rdi
0x00e810be: call   0x140e7ced0
0x00e810c3: test   al,al
0x00e810c5: jne    0x140e810d6
0x00e810c7: lea    rdx,[rip+0x8b0b4a]        # 0x141731c18 ; literal="Unusable "
0x00e810ce: mov    rcx,rbx
0x00e810d1: call   0x14006f560
0x00e810d6: lea    rdx,[rip+0x8b0d03]        # 0x141731de0 ; literal="Ice Upward Track (NE)"
0x00e810dd: mov    rcx,rbx
0x00e810e0: call   0x14006f560
0x00e810e5: jmp    0x140e834d4
0x00e810ea: movzx  r9d,r15w
0x00e810ee: movzx  r8d,r14w
0x00e810f2: movzx  edx,si
0x00e810f5: mov    rcx,rdi
0x00e810f8: call   0x140e7ced0
0x00e810fd: test   al,al
0x00e810ff: jne    0x140e81110
0x00e81101: lea    rdx,[rip+0x8b0b10]        # 0x141731c18 ; literal="Unusable "
0x00e81108: mov    rcx,rbx
0x00e8110b: call   0x14006f560
0x00e81110: lea    rax,[rsp+0x50]
0x00e81115: mov    QWORD PTR [rsp+0x40],rax
0x00e8111a: lea    rax,[rsp+0x60]
0x00e8111f: mov    QWORD PTR [rsp+0x38],rax
0x00e81124: lea    rax,[rsp+0x54]
0x00e81129: mov    QWORD PTR [rsp+0x30],rax
0x00e8112e: lea    rax,[rsp+0x5c]
0x00e81133: mov    QWORD PTR [rsp+0x28],rax
0x00e81138: lea    rax,[rsp+0x58]
0x00e8113d: mov    QWORD PTR [rsp+0x20],rax
0x00e81142: movzx  r9d,r15w
0x00e81146: movzx  r8d,r14w
0x00e8114a: movzx  edx,si
0x00e8114d: mov    rcx,rdi
0x00e81150: call   0x1414d0c70
0x00e81155: movzx  eax,WORD PTR [rsp+0x50]
0x00e8115a: mov    WORD PTR [rsp+0x30],ax
0x00e8115f: mov    BYTE PTR [rsp+0x28],r12b
0x00e81164: mov    DWORD PTR [rsp+0x20],r12d
0x00e81169: mov    r9d,DWORD PTR [rsp+0x60]
0x00e8116e: movzx  r8d,WORD PTR [rsp+0x54]
0x00e81174: lea    rdx,[rbp+0x0]
0x00e81178: mov    rcx,rdi
0x00e8117b: call   0x1414d1920
0x00e81180: lea    rdx,[rbp+0x0]
0x00e81184: mov    rcx,rbx
0x00e81187: call   0x1400b9d10
0x00e8118c: lea    rdx,[rip+0x8b0c65]        # 0x141731df8 ; literal=" Upward Track (NW)"
0x00e81193: mov    rcx,rbx
0x00e81196: call   0x14006f560
0x00e8119b: jmp    0x140e834d4
0x00e811a0: movzx  r9d,r15w
0x00e811a4: movzx  r8d,r14w
0x00e811a8: movzx  edx,si
0x00e811ab: mov    rcx,rdi
0x00e811ae: call   0x140e7ced0
0x00e811b3: test   al,al
0x00e811b5: jne    0x140e811c6
0x00e811b7: lea    rdx,[rip+0x8b0a5a]        # 0x141731c18 ; literal="Unusable "
0x00e811be: mov    rcx,rbx
0x00e811c1: call   0x14006f560
0x00e811c6: mov    BYTE PTR [rsp+0x28],0x1
0x00e811cb: mov    QWORD PTR [rsp+0x20],rbx
0x00e811d0: movzx  r9d,r15w
0x00e811d4: movzx  r8d,r14w
0x00e811d8: movzx  edx,si
0x00e811db: mov    rcx,rdi
0x00e811de: call   0x140a46f20
0x00e811e3: lea    rdx,[rip+0x8b0c0e]        # 0x141731df8 ; literal=" Upward Track (NW)"
0x00e811ea: mov    rcx,rbx
0x00e811ed: call   0x14006f560
0x00e811f2: jmp    0x140e834d4
0x00e811f7: movzx  r9d,r15w
0x00e811fb: movzx  r8d,r14w
0x00e811ff: movzx  edx,si
0x00e81202: mov    rcx,rdi
0x00e81205: call   0x140e7ced0
0x00e8120a: test   al,al
0x00e8120c: jne    0x140e8121d
0x00e8120e: lea    rdx,[rip+0x8b0a03]        # 0x141731c18 ; literal="Unusable "
0x00e81215: mov    rcx,rbx
0x00e81218: call   0x14006f560
0x00e8121d: lea    rdx,[rip+0x8b0bec]        # 0x141731e10 ; literal="Ice Upward Track (NW)"
0x00e81224: mov    rcx,rbx
0x00e81227: call   0x14006f560
0x00e8122c: jmp    0x140e834d4
0x00e81231: movzx  r9d,r15w
0x00e81235: movzx  r8d,r14w
0x00e81239: movzx  edx,si
0x00e8123c: mov    rcx,rdi
0x00e8123f: call   0x140e7ced0
0x00e81244: test   al,al
0x00e81246: jne    0x140e81257
0x00e81248: lea    rdx,[rip+0x8b09c9]        # 0x141731c18 ; literal="Unusable "
0x00e8124f: mov    rcx,rbx
0x00e81252: call   0x14006f560
0x00e81257: lea    rax,[rsp+0x50]
0x00e8125c: mov    QWORD PTR [rsp+0x40],rax
0x00e81261: lea    rax,[rsp+0x60]
0x00e81266: mov    QWORD PTR [rsp+0x38],rax
0x00e8126b: lea    rax,[rsp+0x54]
0x00e81270: mov    QWORD PTR [rsp+0x30],rax
0x00e81275: lea    rax,[rsp+0x5c]
0x00e8127a: mov    QWORD PTR [rsp+0x28],rax
0x00e8127f: lea    rax,[rsp+0x58]
0x00e81284: mov    QWORD PTR [rsp+0x20],rax
0x00e81289: movzx  r9d,r15w
0x00e8128d: movzx  r8d,r14w
0x00e81291: movzx  edx,si
0x00e81294: mov    rcx,rdi
0x00e81297: call   0x1414d0c70
0x00e8129c: movzx  eax,WORD PTR [rsp+0x50]
0x00e812a1: mov    WORD PTR [rsp+0x30],ax
0x00e812a6: mov    BYTE PTR [rsp+0x28],r12b
0x00e812ab: mov    DWORD PTR [rsp+0x20],r12d
0x00e812b0: mov    r9d,DWORD PTR [rsp+0x60]
0x00e812b5: movzx  r8d,WORD PTR [rsp+0x54]
0x00e812bb: lea    rdx,[rbp+0x0]
0x00e812bf: mov    rcx,rdi
0x00e812c2: call   0x1414d1920
0x00e812c7: lea    rdx,[rbp+0x0]
0x00e812cb: mov    rcx,rbx
0x00e812ce: call   0x1400b9d10
0x00e812d3: lea    rdx,[rip+0x8b0c0e]        # 0x141731ee8 ; literal=" Upward Track (SE)"
0x00e812da: mov    rcx,rbx
0x00e812dd: call   0x14006f560
0x00e812e2: jmp    0x140e834d4
0x00e812e7: movzx  r9d,r15w
0x00e812eb: movzx  r8d,r14w
0x00e812ef: movzx  edx,si
0x00e812f2: mov    rcx,rdi
0x00e812f5: call   0x140e7ced0
0x00e812fa: test   al,al
0x00e812fc: jne    0x140e8130d
0x00e812fe: lea    rdx,[rip+0x8b0913]        # 0x141731c18 ; literal="Unusable "
0x00e81305: mov    rcx,rbx
0x00e81308: call   0x14006f560
0x00e8130d: mov    BYTE PTR [rsp+0x28],0x1
0x00e81312: mov    QWORD PTR [rsp+0x20],rbx
0x00e81317: movzx  r9d,r15w
0x00e8131b: movzx  r8d,r14w
0x00e8131f: movzx  edx,si
0x00e81322: mov    rcx,rdi
0x00e81325: call   0x140a46f20
0x00e8132a: lea    rdx,[rip+0x8b0bb7]        # 0x141731ee8 ; literal=" Upward Track (SE)"
0x00e81331: mov    rcx,rbx
0x00e81334: call   0x14006f560
0x00e81339: jmp    0x140e834d4
0x00e8133e: movzx  r9d,r15w
0x00e81342: movzx  r8d,r14w
0x00e81346: movzx  edx,si
0x00e81349: mov    rcx,rdi
0x00e8134c: call   0x140e7ced0
0x00e81351: test   al,al
0x00e81353: jne    0x140e81364
0x00e81355: lea    rdx,[rip+0x8b08bc]        # 0x141731c18 ; literal="Unusable "
0x00e8135c: mov    rcx,rbx
0x00e8135f: call   0x14006f560
0x00e81364: lea    rdx,[rip+0x8b0b95]        # 0x141731f00 ; literal="Ice Upward Track (SE)"
0x00e8136b: mov    rcx,rbx
0x00e8136e: call   0x14006f560
0x00e81373: jmp    0x140e834d4
0x00e81378: movzx  r9d,r15w
0x00e8137c: movzx  r8d,r14w
0x00e81380: movzx  edx,si
0x00e81383: mov    rcx,rdi
0x00e81386: call   0x140e7ced0
0x00e8138b: test   al,al
0x00e8138d: jne    0x140e8139e
0x00e8138f: lea    rdx,[rip+0x8b0882]        # 0x141731c18 ; literal="Unusable "
0x00e81396: mov    rcx,rbx
0x00e81399: call   0x14006f560
0x00e8139e: lea    rax,[rsp+0x50]
0x00e813a3: mov    QWORD PTR [rsp+0x40],rax
0x00e813a8: lea    rax,[rsp+0x60]
0x00e813ad: mov    QWORD PTR [rsp+0x38],rax
0x00e813b2: lea    rax,[rsp+0x54]
0x00e813b7: mov    QWORD PTR [rsp+0x30],rax
0x00e813bc: lea    rax,[rsp+0x5c]
0x00e813c1: mov    QWORD PTR [rsp+0x28],rax
0x00e813c6: lea    rax,[rsp+0x58]
0x00e813cb: mov    QWORD PTR [rsp+0x20],rax
0x00e813d0: movzx  r9d,r15w
0x00e813d4: movzx  r8d,r14w
0x00e813d8: movzx  edx,si
0x00e813db: mov    rcx,rdi
0x00e813de: call   0x1414d0c70
0x00e813e3: movzx  eax,WORD PTR [rsp+0x50]
0x00e813e8: mov    WORD PTR [rsp+0x30],ax
0x00e813ed: mov    BYTE PTR [rsp+0x28],r12b
0x00e813f2: mov    DWORD PTR [rsp+0x20],r12d
0x00e813f7: mov    r9d,DWORD PTR [rsp+0x60]
0x00e813fc: movzx  r8d,WORD PTR [rsp+0x54]
0x00e81402: lea    rdx,[rbp+0x0]
0x00e81406: mov    rcx,rdi
0x00e81409: call   0x1414d1920
0x00e8140e: lea    rdx,[rbp+0x0]
0x00e81412: mov    rcx,rbx
0x00e81415: call   0x1400b9d10
0x00e8141a: lea    rdx,[rip+0x8b0af7]        # 0x141731f18 ; literal=" Upward Track (SW)"
0x00e81421: mov    rcx,rbx
0x00e81424: call   0x14006f560
0x00e81429: jmp    0x140e834d4
0x00e8142e: movzx  r9d,r15w
0x00e81432: movzx  r8d,r14w
0x00e81436: movzx  edx,si
0x00e81439: mov    rcx,rdi
0x00e8143c: call   0x140e7ced0
0x00e81441: test   al,al
0x00e81443: jne    0x140e81454
0x00e81445: lea    rdx,[rip+0x8b07cc]        # 0x141731c18 ; literal="Unusable "
0x00e8144c: mov    rcx,rbx
0x00e8144f: call   0x14006f560
0x00e81454: mov    BYTE PTR [rsp+0x28],0x1
0x00e81459: mov    QWORD PTR [rsp+0x20],rbx
0x00e8145e: movzx  r9d,r15w
0x00e81462: movzx  r8d,r14w
0x00e81466: movzx  edx,si
0x00e81469: mov    rcx,rdi
0x00e8146c: call   0x140a46f20
0x00e81471: lea    rdx,[rip+0x8b0aa0]        # 0x141731f18 ; literal=" Upward Track (SW)"
0x00e81478: mov    rcx,rbx
0x00e8147b: call   0x14006f560
0x00e81480: jmp    0x140e834d4
0x00e81485: movzx  r9d,r15w
0x00e81489: movzx  r8d,r14w
0x00e8148d: movzx  edx,si
0x00e81490: mov    rcx,rdi
0x00e81493: call   0x140e7ced0
0x00e81498: test   al,al
0x00e8149a: jne    0x140e814ab
0x00e8149c: lea    rdx,[rip+0x8b0775]        # 0x141731c18 ; literal="Unusable "
0x00e814a3: mov    rcx,rbx
0x00e814a6: call   0x14006f560
0x00e814ab: lea    rdx,[rip+0x8b0a7e]        # 0x141731f30 ; literal="Ice Upward Track (SW)"
0x00e814b2: mov    rcx,rbx
0x00e814b5: call   0x14006f560
0x00e814ba: jmp    0x140e834d4
0x00e814bf: movzx  r9d,r15w
0x00e814c3: movzx  r8d,r14w
0x00e814c7: movzx  edx,si
0x00e814ca: mov    rcx,rdi
0x00e814cd: call   0x140e7ced0
0x00e814d2: test   al,al
0x00e814d4: jne    0x140e814e5
0x00e814d6: lea    rdx,[rip+0x8b073b]        # 0x141731c18 ; literal="Unusable "
0x00e814dd: mov    rcx,rbx
0x00e814e0: call   0x14006f560
0x00e814e5: lea    rax,[rsp+0x50]
0x00e814ea: mov    QWORD PTR [rsp+0x40],rax
0x00e814ef: lea    rax,[rsp+0x60]
0x00e814f4: mov    QWORD PTR [rsp+0x38],rax
0x00e814f9: lea    rax,[rsp+0x54]
0x00e814fe: mov    QWORD PTR [rsp+0x30],rax
0x00e81503: lea    rax,[rsp+0x5c]
0x00e81508: mov    QWORD PTR [rsp+0x28],rax
0x00e8150d: lea    rax,[rsp+0x58]
0x00e81512: mov    QWORD PTR [rsp+0x20],rax
0x00e81517: movzx  r9d,r15w
0x00e8151b: movzx  r8d,r14w
0x00e8151f: movzx  edx,si
0x00e81522: mov    rcx,rdi
0x00e81525: call   0x1414d0c70
0x00e8152a: movzx  eax,WORD PTR [rsp+0x50]
0x00e8152f: mov    WORD PTR [rsp+0x30],ax
0x00e81534: mov    BYTE PTR [rsp+0x28],r12b
0x00e81539: mov    DWORD PTR [rsp+0x20],r12d
0x00e8153e: mov    r9d,DWORD PTR [rsp+0x60]
0x00e81543: movzx  r8d,WORD PTR [rsp+0x54]
0x00e81549: lea    rdx,[rbp+0x0]
0x00e8154d: mov    rcx,rdi
0x00e81550: call   0x1414d1920
0x00e81555: lea    rdx,[rbp+0x0]
0x00e81559: mov    rcx,rbx
0x00e8155c: call   0x1400b9d10
0x00e81561: lea    rdx,[rip+0x8b0920]        # 0x141731e88 ; literal=" Upward Track (EW)"
0x00e81568: mov    rcx,rbx
0x00e8156b: call   0x14006f560
0x00e81570: jmp    0x140e834d4
0x00e81575: movzx  r9d,r15w
0x00e81579: movzx  r8d,r14w
0x00e8157d: movzx  edx,si
0x00e81580: mov    rcx,rdi
0x00e81583: call   0x140e7ced0
0x00e81588: test   al,al
0x00e8158a: jne    0x140e8159b
0x00e8158c: lea    rdx,[rip+0x8b0685]        # 0x141731c18 ; literal="Unusable "
0x00e81593: mov    rcx,rbx
0x00e81596: call   0x14006f560
0x00e8159b: mov    BYTE PTR [rsp+0x28],0x1
0x00e815a0: mov    QWORD PTR [rsp+0x20],rbx
0x00e815a5: movzx  r9d,r15w
0x00e815a9: movzx  r8d,r14w
0x00e815ad: movzx  edx,si
0x00e815b0: mov    rcx,rdi
0x00e815b3: call   0x140a46f20
0x00e815b8: lea    rdx,[rip+0x8b08c9]        # 0x141731e88 ; literal=" Upward Track (EW)"
0x00e815bf: mov    rcx,rbx
0x00e815c2: call   0x14006f560
0x00e815c7: jmp    0x140e834d4
0x00e815cc: movzx  r9d,r15w
0x00e815d0: movzx  r8d,r14w
0x00e815d4: movzx  edx,si
0x00e815d7: mov    rcx,rdi
0x00e815da: call   0x140e7ced0
0x00e815df: test   al,al
0x00e815e1: jne    0x140e815f2
0x00e815e3: lea    rdx,[rip+0x8b062e]        # 0x141731c18 ; literal="Unusable "
0x00e815ea: mov    rcx,rbx
0x00e815ed: call   0x14006f560
0x00e815f2: lea    rdx,[rip+0x8b08a7]        # 0x141731ea0 ; literal="Ice Upward Track (EW)"
0x00e815f9: mov    rcx,rbx
0x00e815fc: call   0x14006f560
0x00e81601: jmp    0x140e834d4
0x00e81606: movzx  r9d,r15w
0x00e8160a: movzx  r8d,r14w
0x00e8160e: movzx  edx,si
0x00e81611: mov    rcx,rdi
0x00e81614: call   0x140e7ced0
0x00e81619: test   al,al
0x00e8161b: jne    0x140e8162c
0x00e8161d: lea    rdx,[rip+0x8b05f4]        # 0x141731c18 ; literal="Unusable "
0x00e81624: mov    rcx,rbx
0x00e81627: call   0x14006f560
0x00e8162c: lea    rax,[rsp+0x50]
0x00e81631: mov    QWORD PTR [rsp+0x40],rax
0x00e81636: lea    rax,[rsp+0x60]
0x00e8163b: mov    QWORD PTR [rsp+0x38],rax
0x00e81640: lea    rax,[rsp+0x54]
0x00e81645: mov    QWORD PTR [rsp+0x30],rax
0x00e8164a: lea    rax,[rsp+0x5c]
0x00e8164f: mov    QWORD PTR [rsp+0x28],rax
0x00e81654: lea    rax,[rsp+0x58]
0x00e81659: mov    QWORD PTR [rsp+0x20],rax
0x00e8165e: movzx  r9d,r15w
0x00e81662: movzx  r8d,r14w
0x00e81666: movzx  edx,si
0x00e81669: mov    rcx,rdi
0x00e8166c: call   0x1414d0c70
0x00e81671: movzx  eax,WORD PTR [rsp+0x50]
0x00e81676: mov    WORD PTR [rsp+0x30],ax
0x00e8167b: mov    BYTE PTR [rsp+0x28],r12b
0x00e81680: mov    DWORD PTR [rsp+0x20],r12d
0x00e81685: mov    r9d,DWORD PTR [rsp+0x60]
0x00e8168a: movzx  r8d,WORD PTR [rsp+0x54]
0x00e81690: lea    rdx,[rbp+0x0]
0x00e81694: mov    rcx,rdi
0x00e81697: call   0x1414d1920
0x00e8169c: lea    rdx,[rbp+0x0]
0x00e816a0: mov    rcx,rbx
0x00e816a3: call   0x1400b9d10
0x00e816a8: lea    rdx,[rip+0x8b0809]        # 0x141731eb8 ; literal=" Upward Track (NSE)"
0x00e816af: mov    rcx,rbx
0x00e816b2: call   0x14006f560
0x00e816b7: jmp    0x140e834d4
0x00e816bc: movzx  r9d,r15w
0x00e816c0: movzx  r8d,r14w
0x00e816c4: movzx  edx,si
0x00e816c7: mov    rcx,rdi
0x00e816ca: call   0x140e7ced0
0x00e816cf: test   al,al
0x00e816d1: jne    0x140e816e2
0x00e816d3: lea    rdx,[rip+0x8b053e]        # 0x141731c18 ; literal="Unusable "
0x00e816da: mov    rcx,rbx
0x00e816dd: call   0x14006f560
0x00e816e2: mov    BYTE PTR [rsp+0x28],0x1
0x00e816e7: mov    QWORD PTR [rsp+0x20],rbx
0x00e816ec: movzx  r9d,r15w
0x00e816f0: movzx  r8d,r14w
0x00e816f4: movzx  edx,si
0x00e816f7: mov    rcx,rdi
0x00e816fa: call   0x140a46f20
0x00e816ff: lea    rdx,[rip+0x8b07b2]        # 0x141731eb8 ; literal=" Upward Track (NSE)"
0x00e81706: mov    rcx,rbx
0x00e81709: call   0x14006f560
0x00e8170e: jmp    0x140e834d4
0x00e81713: movzx  r9d,r15w
0x00e81717: movzx  r8d,r14w
0x00e8171b: movzx  edx,si
0x00e8171e: mov    rcx,rdi
0x00e81721: call   0x140e7ced0
0x00e81726: test   al,al
0x00e81728: jne    0x140e81739
0x00e8172a: lea    rdx,[rip+0x8b04e7]        # 0x141731c18 ; literal="Unusable "
0x00e81731: mov    rcx,rbx
0x00e81734: call   0x14006f560
0x00e81739: lea    rdx,[rip+0x8b0790]        # 0x141731ed0 ; literal="Ice Upward Track (NSE)"
0x00e81740: mov    rcx,rbx
0x00e81743: call   0x14006f560
0x00e81748: jmp    0x140e834d4
0x00e8174d: movzx  r9d,r15w
0x00e81751: movzx  r8d,r14w
0x00e81755: movzx  edx,si
0x00e81758: mov    rcx,rdi
0x00e8175b: call   0x140e7ced0
0x00e81760: test   al,al
0x00e81762: jne    0x140e81773
0x00e81764: lea    rdx,[rip+0x8b04ad]        # 0x141731c18 ; literal="Unusable "
0x00e8176b: mov    rcx,rbx
0x00e8176e: call   0x14006f560
0x00e81773: lea    rax,[rsp+0x50]
0x00e81778: mov    QWORD PTR [rsp+0x40],rax
0x00e8177d: lea    rax,[rsp+0x60]
0x00e81782: mov    QWORD PTR [rsp+0x38],rax
0x00e81787: lea    rax,[rsp+0x54]
0x00e8178c: mov    QWORD PTR [rsp+0x30],rax
0x00e81791: lea    rax,[rsp+0x5c]
0x00e81796: mov    QWORD PTR [rsp+0x28],rax
0x00e8179b: lea    rax,[rsp+0x58]
0x00e817a0: mov    QWORD PTR [rsp+0x20],rax
0x00e817a5: movzx  r9d,r15w
0x00e817a9: movzx  r8d,r14w
0x00e817ad: movzx  edx,si
0x00e817b0: mov    rcx,rdi
0x00e817b3: call   0x1414d0c70
0x00e817b8: movzx  eax,WORD PTR [rsp+0x50]
0x00e817bd: mov    WORD PTR [rsp+0x30],ax
0x00e817c2: mov    BYTE PTR [rsp+0x28],r12b
0x00e817c7: mov    DWORD PTR [rsp+0x20],r12d
0x00e817cc: mov    r9d,DWORD PTR [rsp+0x60]
0x00e817d1: movzx  r8d,WORD PTR [rsp+0x54]
0x00e817d7: lea    rdx,[rbp+0x0]
0x00e817db: mov    rcx,rdi
0x00e817de: call   0x1414d1920
0x00e817e3: lea    rdx,[rbp+0x0]
0x00e817e7: mov    rcx,rbx
0x00e817ea: call   0x1400b9d10
0x00e817ef: lea    rdx,[rip+0x8afe42]        # 0x141731638 ; literal=" Upward Track (NSW)"
0x00e817f6: mov    rcx,rbx
0x00e817f9: call   0x14006f560
0x00e817fe: jmp    0x140e834d4
0x00e81803: movzx  r9d,r15w
0x00e81807: movzx  r8d,r14w
0x00e8180b: movzx  edx,si
0x00e8180e: mov    rcx,rdi
0x00e81811: call   0x140e7ced0
0x00e81816: test   al,al
0x00e81818: jne    0x140e81829
0x00e8181a: lea    rdx,[rip+0x8b03f7]        # 0x141731c18 ; literal="Unusable "
0x00e81821: mov    rcx,rbx
0x00e81824: call   0x14006f560
0x00e81829: mov    BYTE PTR [rsp+0x28],0x1
0x00e8182e: mov    QWORD PTR [rsp+0x20],rbx
0x00e81833: movzx  r9d,r15w
0x00e81837: movzx  r8d,r14w
0x00e8183b: movzx  edx,si
0x00e8183e: mov    rcx,rdi
0x00e81841: call   0x140a46f20
0x00e81846: lea    rdx,[rip+0x8afdeb]        # 0x141731638 ; literal=" Upward Track (NSW)"
0x00e8184d: mov    rcx,rbx
0x00e81850: call   0x14006f560
0x00e81855: jmp    0x140e834d4
0x00e8185a: movzx  r9d,r15w
0x00e8185e: movzx  r8d,r14w
0x00e81862: movzx  edx,si
0x00e81865: mov    rcx,rdi
0x00e81868: call   0x140e7ced0
0x00e8186d: test   al,al
0x00e8186f: jne    0x140e81880
0x00e81871: lea    rdx,[rip+0x8b03a0]        # 0x141731c18 ; literal="Unusable "
0x00e81878: mov    rcx,rbx
0x00e8187b: call   0x14006f560
0x00e81880: lea    rdx,[rip+0x8afdc9]        # 0x141731650 ; literal="Ice Upward Track (NSW)"
0x00e81887: mov    rcx,rbx
0x00e8188a: call   0x14006f560
0x00e8188f: jmp    0x140e834d4
0x00e81894: movzx  r9d,r15w
0x00e81898: movzx  r8d,r14w
0x00e8189c: movzx  edx,si
0x00e8189f: mov    rcx,rdi
0x00e818a2: call   0x140e7ced0
0x00e818a7: test   al,al
0x00e818a9: jne    0x140e818ba
0x00e818ab: lea    rdx,[rip+0x8b0366]        # 0x141731c18 ; literal="Unusable "
0x00e818b2: mov    rcx,rbx
0x00e818b5: call   0x14006f560
0x00e818ba: lea    rax,[rsp+0x50]
0x00e818bf: mov    QWORD PTR [rsp+0x40],rax
0x00e818c4: lea    rax,[rsp+0x60]
0x00e818c9: mov    QWORD PTR [rsp+0x38],rax
0x00e818ce: lea    rax,[rsp+0x54]
0x00e818d3: mov    QWORD PTR [rsp+0x30],rax
0x00e818d8: lea    rax,[rsp+0x5c]
0x00e818dd: mov    QWORD PTR [rsp+0x28],rax
0x00e818e2: lea    rax,[rsp+0x58]
0x00e818e7: mov    QWORD PTR [rsp+0x20],rax
0x00e818ec: movzx  r9d,r15w
0x00e818f0: movzx  r8d,r14w
0x00e818f4: movzx  edx,si
0x00e818f7: mov    rcx,rdi
0x00e818fa: call   0x1414d0c70
0x00e818ff: movzx  eax,WORD PTR [rsp+0x50]
0x00e81904: mov    WORD PTR [rsp+0x30],ax
0x00e81909: mov    BYTE PTR [rsp+0x28],r12b
0x00e8190e: mov    DWORD PTR [rsp+0x20],r12d
0x00e81913: mov    r9d,DWORD PTR [rsp+0x60]
0x00e81918: movzx  r8d,WORD PTR [rsp+0x54]
0x00e8191e: lea    rdx,[rbp+0x0]
0x00e81922: mov    rcx,rdi
0x00e81925: call   0x1414d1920
0x00e8192a: lea    rdx,[rbp+0x0]
0x00e8192e: mov    rcx,rbx
0x00e81931: call   0x1400b9d10
0x00e81936: lea    rdx,[rip+0x8afd2b]        # 0x141731668 ; literal=" Upward Track (NEW)"
0x00e8193d: mov    rcx,rbx
0x00e81940: call   0x14006f560
0x00e81945: jmp    0x140e834d4
0x00e8194a: movzx  r9d,r15w
0x00e8194e: movzx  r8d,r14w
0x00e81952: movzx  edx,si
0x00e81955: mov    rcx,rdi
0x00e81958: call   0x140e7ced0
0x00e8195d: test   al,al
0x00e8195f: jne    0x140e81970
0x00e81961: lea    rdx,[rip+0x8b02b0]        # 0x141731c18 ; literal="Unusable "
0x00e81968: mov    rcx,rbx
0x00e8196b: call   0x14006f560
0x00e81970: mov    BYTE PTR [rsp+0x28],0x1
0x00e81975: mov    QWORD PTR [rsp+0x20],rbx
0x00e8197a: movzx  r9d,r15w
0x00e8197e: movzx  r8d,r14w
0x00e81982: movzx  edx,si
0x00e81985: mov    rcx,rdi
0x00e81988: call   0x140a46f20
0x00e8198d: lea    rdx,[rip+0x8afcd4]        # 0x141731668 ; literal=" Upward Track (NEW)"
0x00e81994: mov    rcx,rbx
0x00e81997: call   0x14006f560
0x00e8199c: jmp    0x140e834d4
0x00e819a1: movzx  r9d,r15w
0x00e819a5: movzx  r8d,r14w
0x00e819a9: movzx  edx,si
0x00e819ac: mov    rcx,rdi
0x00e819af: call   0x140e7ced0
0x00e819b4: test   al,al
0x00e819b6: jne    0x140e819c7
0x00e819b8: lea    rdx,[rip+0x8b0259]        # 0x141731c18 ; literal="Unusable "
0x00e819bf: mov    rcx,rbx
0x00e819c2: call   0x14006f560
0x00e819c7: lea    rdx,[rip+0x8afcb2]        # 0x141731680 ; literal="Ice Upward Track (NEW)"
0x00e819ce: mov    rcx,rbx
0x00e819d1: call   0x14006f560
0x00e819d6: jmp    0x140e834d4
0x00e819db: movzx  r9d,r15w
0x00e819df: movzx  r8d,r14w
0x00e819e3: movzx  edx,si
0x00e819e6: mov    rcx,rdi
0x00e819e9: call   0x140e7ced0
0x00e819ee: test   al,al
0x00e819f0: jne    0x140e81a01
0x00e819f2: lea    rdx,[rip+0x8b021f]        # 0x141731c18 ; literal="Unusable "
0x00e819f9: mov    rcx,rbx
0x00e819fc: call   0x14006f560
0x00e81a01: lea    rax,[rsp+0x50]
0x00e81a06: mov    QWORD PTR [rsp+0x40],rax
0x00e81a0b: lea    rax,[rsp+0x60]
0x00e81a10: mov    QWORD PTR [rsp+0x38],rax
0x00e81a15: lea    rax,[rsp+0x54]
0x00e81a1a: mov    QWORD PTR [rsp+0x30],rax
0x00e81a1f: lea    rax,[rsp+0x5c]
0x00e81a24: mov    QWORD PTR [rsp+0x28],rax
0x00e81a29: lea    rax,[rsp+0x58]
0x00e81a2e: mov    QWORD PTR [rsp+0x20],rax
0x00e81a33: movzx  r9d,r15w
0x00e81a37: movzx  r8d,r14w
0x00e81a3b: movzx  edx,si
0x00e81a3e: mov    rcx,rdi
0x00e81a41: call   0x1414d0c70
0x00e81a46: movzx  eax,WORD PTR [rsp+0x50]
0x00e81a4b: mov    WORD PTR [rsp+0x30],ax
0x00e81a50: mov    BYTE PTR [rsp+0x28],r12b
0x00e81a55: mov    DWORD PTR [rsp+0x20],r12d
0x00e81a5a: mov    r9d,DWORD PTR [rsp+0x60]
0x00e81a5f: movzx  r8d,WORD PTR [rsp+0x54]
0x00e81a65: lea    rdx,[rbp+0x0]
0x00e81a69: mov    rcx,rdi
0x00e81a6c: call   0x1414d1920
0x00e81a71: lea    rdx,[rbp+0x0]
0x00e81a75: mov    rcx,rbx
0x00e81a78: call   0x1400b9d10
0x00e81a7d: lea    rdx,[rip+0x8afb54]        # 0x1417315d8 ; literal=" Upward Track (SEW)"
0x00e81a84: mov    rcx,rbx
0x00e81a87: call   0x14006f560
0x00e81a8c: jmp    0x140e834d4
0x00e81a91: movzx  r9d,r15w
0x00e81a95: movzx  r8d,r14w
0x00e81a99: movzx  edx,si
0x00e81a9c: mov    rcx,rdi
0x00e81a9f: call   0x140e7ced0
0x00e81aa4: test   al,al
0x00e81aa6: jne    0x140e81ab7
0x00e81aa8: lea    rdx,[rip+0x8b0169]        # 0x141731c18 ; literal="Unusable "
0x00e81aaf: mov    rcx,rbx
0x00e81ab2: call   0x14006f560
0x00e81ab7: mov    BYTE PTR [rsp+0x28],0x1
0x00e81abc: mov    QWORD PTR [rsp+0x20],rbx
0x00e81ac1: movzx  r9d,r15w
0x00e81ac5: movzx  r8d,r14w
0x00e81ac9: movzx  edx,si
0x00e81acc: mov    rcx,rdi
0x00e81acf: call   0x140a46f20
0x00e81ad4: lea    rdx,[rip+0x8afafd]        # 0x1417315d8 ; literal=" Upward Track (SEW)"
0x00e81adb: mov    rcx,rbx
0x00e81ade: call   0x14006f560
0x00e81ae3: jmp    0x140e834d4
0x00e81ae8: movzx  r9d,r15w
0x00e81aec: movzx  r8d,r14w
0x00e81af0: movzx  edx,si
0x00e81af3: mov    rcx,rdi
0x00e81af6: call   0x140e7ced0
0x00e81afb: test   al,al
0x00e81afd: jne    0x140e81b0e
0x00e81aff: lea    rdx,[rip+0x8b0112]        # 0x141731c18 ; literal="Unusable "
0x00e81b06: mov    rcx,rbx
0x00e81b09: call   0x14006f560
0x00e81b0e: lea    rdx,[rip+0x8afadb]        # 0x1417315f0 ; literal="Ice Upward Track (SEW)"
0x00e81b15: mov    rcx,rbx
0x00e81b18: call   0x14006f560
0x00e81b1d: jmp    0x140e834d4
0x00e81b22: movzx  r9d,r15w
0x00e81b26: movzx  r8d,r14w
0x00e81b2a: movzx  edx,si
0x00e81b2d: mov    rcx,rdi
0x00e81b30: call   0x140e7ced0
0x00e81b35: test   al,al
0x00e81b37: jne    0x140e81b48
0x00e81b39: lea    rdx,[rip+0x8b00d8]        # 0x141731c18 ; literal="Unusable "
0x00e81b40: mov    rcx,rbx
0x00e81b43: call   0x14006f560
0x00e81b48: lea    rax,[rsp+0x50]
0x00e81b4d: mov    QWORD PTR [rsp+0x40],rax
0x00e81b52: lea    rax,[rsp+0x60]
0x00e81b57: mov    QWORD PTR [rsp+0x38],rax
0x00e81b5c: lea    rax,[rsp+0x54]
0x00e81b61: mov    QWORD PTR [rsp+0x30],rax
0x00e81b66: lea    rax,[rsp+0x5c]
0x00e81b6b: mov    QWORD PTR [rsp+0x28],rax
0x00e81b70: lea    rax,[rsp+0x58]
0x00e81b75: mov    QWORD PTR [rsp+0x20],rax
0x00e81b7a: movzx  r9d,r15w
0x00e81b7e: movzx  r8d,r14w
0x00e81b82: movzx  edx,si
0x00e81b85: mov    rcx,rdi
0x00e81b88: call   0x1414d0c70
0x00e81b8d: movzx  eax,WORD PTR [rsp+0x50]
0x00e81b92: mov    WORD PTR [rsp+0x30],ax
0x00e81b97: mov    BYTE PTR [rsp+0x28],r12b
0x00e81b9c: mov    DWORD PTR [rsp+0x20],r12d
0x00e81ba1: mov    r9d,DWORD PTR [rsp+0x60]
0x00e81ba6: movzx  r8d,WORD PTR [rsp+0x54]
0x00e81bac: lea    rdx,[rbp+0x0]
0x00e81bb0: mov    rcx,rdi
0x00e81bb3: call   0x1414d1920
0x00e81bb8: lea    rdx,[rbp+0x0]
0x00e81bbc: mov    rcx,rbx
0x00e81bbf: call   0x1400b9d10
0x00e81bc4: lea    rdx,[rip+0x8afa3d]        # 0x141731608 ; literal=" Upward Track (NSEW)"
0x00e81bcb: mov    rcx,rbx
0x00e81bce: call   0x14006f560
0x00e81bd3: jmp    0x140e834d4
0x00e81bd8: movzx  r9d,r15w
0x00e81bdc: movzx  r8d,r14w
0x00e81be0: movzx  edx,si
0x00e81be3: mov    rcx,rdi
0x00e81be6: call   0x140e7ced0
0x00e81beb: test   al,al
0x00e81bed: jne    0x140e81bfe
0x00e81bef: lea    rdx,[rip+0x8b0022]        # 0x141731c18 ; literal="Unusable "
0x00e81bf6: mov    rcx,rbx
0x00e81bf9: call   0x14006f560
0x00e81bfe: mov    BYTE PTR [rsp+0x28],0x1
0x00e81c03: mov    QWORD PTR [rsp+0x20],rbx
0x00e81c08: movzx  r9d,r15w
0x00e81c0c: movzx  r8d,r14w
0x00e81c10: movzx  edx,si
0x00e81c13: mov    rcx,rdi
0x00e81c16: call   0x140a46f20
0x00e81c1b: lea    rdx,[rip+0x8af9e6]        # 0x141731608 ; literal=" Upward Track (NSEW)"
0x00e81c22: mov    rcx,rbx
0x00e81c25: call   0x14006f560
0x00e81c2a: jmp    0x140e834d4
0x00e81c2f: movzx  r9d,r15w
0x00e81c33: movzx  r8d,r14w
0x00e81c37: movzx  edx,si
0x00e81c3a: mov    rcx,rdi
0x00e81c3d: call   0x140e7ced0
0x00e81c42: test   al,al
0x00e81c44: jne    0x140e81c55
0x00e81c46: lea    rdx,[rip+0x8affcb]        # 0x141731c18 ; literal="Unusable "
0x00e81c4d: mov    rcx,rbx
0x00e81c50: call   0x14006f560
0x00e81c55: lea    rdx,[rip+0x8af9c4]        # 0x141731620 ; literal="Ice Upward Track (NSEW)"
0x00e81c5c: mov    rcx,rbx
0x00e81c5f: call   0x14006f560
0x00e81c64: jmp    0x140e834d4
0x00e81c69: movzx  r9d,r15w
0x00e81c6d: movzx  r8d,r14w
0x00e81c71: movzx  edx,si
0x00e81c74: mov    rcx,rdi
0x00e81c77: call   0x140e7ced0
0x00e81c7c: test   al,al
0x00e81c7e: jne    0x140e81c8f
0x00e81c80: lea    rdx,[rip+0x8aff91]        # 0x141731c18 ; literal="Unusable "
0x00e81c87: mov    rcx,rbx
0x00e81c8a: call   0x14006f560
0x00e81c8f: lea    rax,[rsp+0x50]
0x00e81c94: mov    QWORD PTR [rsp+0x40],rax
0x00e81c99: lea    rax,[rsp+0x60]
0x00e81c9e: mov    QWORD PTR [rsp+0x38],rax
0x00e81ca3: lea    rax,[rsp+0x54]
0x00e81ca8: mov    QWORD PTR [rsp+0x30],rax
0x00e81cad: lea    rax,[rsp+0x5c]
0x00e81cb2: mov    QWORD PTR [rsp+0x28],rax
0x00e81cb7: lea    rax,[rsp+0x58]
0x00e81cbc: mov    QWORD PTR [rsp+0x20],rax
0x00e81cc1: movzx  r9d,r15w
0x00e81cc5: movzx  r8d,r14w
0x00e81cc9: movzx  edx,si
0x00e81ccc: mov    rcx,rdi
0x00e81ccf: call   0x1414d0c70
0x00e81cd4: movzx  eax,WORD PTR [rsp+0x50]
0x00e81cd9: mov    WORD PTR [rsp+0x30],ax
0x00e81cde: mov    BYTE PTR [rsp+0x28],r12b
0x00e81ce3: mov    DWORD PTR [rsp+0x20],r12d
0x00e81ce8: mov    r9d,DWORD PTR [rsp+0x60]
0x00e81ced: movzx  r8d,WORD PTR [rsp+0x54]
0x00e81cf3: lea    rdx,[rbp+0x0]
0x00e81cf7: mov    rcx,rdi
0x00e81cfa: call   0x1414d1920
0x00e81cff: lea    rdx,[rbp+0x0]
0x00e81d03: jmp    0x140e80742
0x00e81d08: movzx  r9d,r15w
0x00e81d0c: movzx  r8d,r14w
0x00e81d10: movzx  edx,si
0x00e81d13: mov    rcx,rdi
0x00e81d16: call   0x140e7ced0
0x00e81d1b: test   al,al
0x00e81d1d: jne    0x140e81d2e
0x00e81d1f: lea    rdx,[rip+0x8afef2]        # 0x141731c18 ; literal="Unusable "
0x00e81d26: mov    rcx,rbx
0x00e81d29: call   0x14006f560
0x00e81d2e: mov    BYTE PTR [rsp+0x28],0x1
0x00e81d33: mov    QWORD PTR [rsp+0x20],rbx
0x00e81d38: movzx  r9d,r15w
0x00e81d3c: movzx  r8d,r14w
0x00e81d40: movzx  edx,si
0x00e81d43: mov    rcx,rdi
0x00e81d46: call   0x140a46f20
0x00e81d4b: lea    rdx,[rip+0x8aff2e]        # 0x141731c80 ; literal=" Upward Slope"
0x00e81d52: mov    rcx,rbx
0x00e81d55: call   0x14006f560
0x00e81d5a: jmp    0x140e834d4
0x00e81d5f: movzx  r9d,r15w
0x00e81d63: movzx  r8d,r14w
0x00e81d67: movzx  edx,si
0x00e81d6a: mov    rcx,rdi
0x00e81d6d: call   0x140e7ced0
0x00e81d72: test   al,al
0x00e81d74: jne    0x140e81d85
0x00e81d76: lea    rdx,[rip+0x8afe9b]        # 0x141731c18 ; literal="Unusable "
0x00e81d7d: mov    rcx,rbx
0x00e81d80: call   0x14006f560
0x00e81d85: lea    rdx,[rip+0x8af974]        # 0x141731700 ; literal="Glacial Upward Slope"
0x00e81d8c: mov    rcx,rbx
0x00e81d8f: call   0x14006f560
0x00e81d94: jmp    0x140e834d4
0x00e81d99: dec    r15w
0x00e81d9d: movzx  r9d,r15w
0x00e81da1: movzx  r8d,r14w
0x00e81da5: movzx  edx,si
0x00e81da8: mov    rcx,rdi
0x00e81dab: call   0x140e7ced0
0x00e81db0: test   al,al
0x00e81db2: jne    0x140e81dc3
0x00e81db4: lea    rdx,[rip+0x8afe5d]        # 0x141731c18 ; literal="Unusable "
0x00e81dbb: mov    rcx,rbx
0x00e81dbe: call   0x14006f560
0x00e81dc3: movzx  r9d,r15w
0x00e81dc7: movzx  r8d,r14w
0x00e81dcb: movzx  edx,si
0x00e81dce: mov    rcx,rdi
0x00e81dd1: call   0x140067f80
0x00e81dd6: movzx  eax,ax
0x00e81dd9: cmp    eax,0x202
0x00e81dde: ja     0x140e82113
0x00e81de4: je     0x140e820e2
0x00e81dea: sub    eax,0xe5
0x00e81def: cmp    eax,0xc
0x00e81df2: ja     0x140e82db9
0x00e81df8: cdqe
0x00e81dfa: lea    rdx,[rip+0xffffffffff17e1ff]        # 0x140000000
0x00e81e01: mov    ecx,DWORD PTR [rdx+rax*4+0xe83d40]
0x00e81e08: add    rcx,rdx
0x00e81e0b: jmp    rcx
0x00e81e0d: movzx  r9d,r15w
0x00e81e11: movzx  r8d,r14w
0x00e81e15: movzx  edx,si
0x00e81e18: mov    rcx,rdi
0x00e81e1b: call   0x1414d1330
0x00e81e20: mov    r15,rax
0x00e81e23: test   rax,rax
0x00e81e26: je     0x140e81ebf
0x00e81e2c: lea    rcx,[rdi+0x11b408]
0x00e81e33: mov    edx,DWORD PTR [rax+0x8]
0x00e81e36: call   0x14014d850
0x00e81e3b: mov    rdi,rax
0x00e81e3e: test   rax,rax
0x00e81e41: je     0x140e81ebf
0x00e81e43: mov    edx,esi
0x00e81e45: and    edx,0x8000000f
0x00e81e4b: jge    0x140e81e54
0x00e81e4d: dec    edx
0x00e81e4f: or     edx,0xfffffff0
0x00e81e52: inc    edx
0x00e81e54: mov    ecx,r14d
0x00e81e57: and    ecx,0x8000000f
0x00e81e5d: jge    0x140e81e66
0x00e81e5f: dec    ecx
0x00e81e61: or     ecx,0xfffffff0
0x00e81e64: inc    ecx
0x00e81e66: movsx  rax,dx
0x00e81e6a: shl    rax,0x4
0x00e81e6e: movsx  rcx,cx
0x00e81e72: add    rax,r15
0x00e81e75: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e81e7a: cmp    dl,0x43
0x00e81e7d: jb     0x140e81e88
0x00e81e7f: lea    rdx,[rip+0x8af562]        # 0x1417313e8 ; literal="Dense "
0x00e81e86: jmp    0x140e81e94
0x00e81e88: cmp    dl,0x21
0x00e81e8b: ja     0x140e81e9c
0x00e81e8d: lea    rdx,[rip+0x8af514]        # 0x1417313a8 ; literal="Sparse "
0x00e81e94: mov    rcx,rbx
0x00e81e97: call   0x14006f560
0x00e81e9c: lea    rdx,[rdi+0x90]
0x00e81ea3: mov    rcx,rbx
0x00e81ea6: call   0x1400b9d10
0x00e81eab: lea    rdx,[rip+0x8af866]        # 0x141731718 ; literal=" Downward Slope"
0x00e81eb2: mov    rcx,rbx
0x00e81eb5: call   0x14006f560
0x00e81eba: jmp    0x140e834d4
0x00e81ebf: lea    rdx,[rip+0x8af862]        # 0x141731728 ; literal="Grassy Downward Slope"
0x00e81ec6: mov    rcx,rbx
0x00e81ec9: call   0x14006f560
0x00e81ece: jmp    0x140e834d4
0x00e81ed3: movzx  r9d,r15w
0x00e81ed7: movzx  r8d,r14w
0x00e81edb: movzx  edx,si
0x00e81ede: mov    rcx,rdi
0x00e81ee1: call   0x1414d1330
0x00e81ee6: mov    r15,rax
0x00e81ee9: test   rax,rax
0x00e81eec: je     0x140e81f80
0x00e81ef2: lea    rcx,[rdi+0x11b408]
0x00e81ef9: mov    edx,DWORD PTR [rax+0x8]
0x00e81efc: call   0x14014d850
0x00e81f01: mov    rdi,rax
0x00e81f04: test   rax,rax
0x00e81f07: je     0x140e81f80
0x00e81f09: mov    edx,esi
0x00e81f0b: and    edx,0x8000000f
0x00e81f11: jge    0x140e81f1a
0x00e81f13: dec    edx
0x00e81f15: or     edx,0xfffffff0
0x00e81f18: inc    edx
0x00e81f1a: mov    ecx,r14d
0x00e81f1d: and    ecx,0x8000000f
0x00e81f23: jge    0x140e81f2c
0x00e81f25: dec    ecx
0x00e81f27: or     ecx,0xfffffff0
0x00e81f2a: inc    ecx
0x00e81f2c: movsx  rax,dx
0x00e81f30: shl    rax,0x4
0x00e81f34: movsx  rcx,cx
0x00e81f38: add    rax,r15
0x00e81f3b: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e81f40: cmp    dl,0x43
0x00e81f43: jb     0x140e81f60
0x00e81f45: lea    rdx,[rip+0x8af49c]        # 0x1417313e8 ; literal="Dense "
0x00e81f4c: mov    rcx,rbx
0x00e81f4f: call   0x14006f560
0x00e81f54: lea    rdx,[rip+0x8af45d]        # 0x1417313b8 ; literal="Dry "
0x00e81f5b: jmp    0x140e81e94
0x00e81f60: cmp    dl,0x21
0x00e81f63: ja     0x140e81f74
0x00e81f65: lea    rdx,[rip+0x8af43c]        # 0x1417313a8 ; literal="Sparse "
0x00e81f6c: mov    rcx,rbx
0x00e81f6f: call   0x14006f560
0x00e81f74: lea    rdx,[rip+0x8af43d]        # 0x1417313b8 ; literal="Dry "
0x00e81f7b: jmp    0x140e81e94
0x00e81f80: lea    rdx,[rip+0x8af7b9]        # 0x141731740 ; literal="Dry Grass Downward Slope"
0x00e81f87: mov    rcx,rbx
0x00e81f8a: call   0x14006f560
0x00e81f8f: jmp    0x140e834d4
0x00e81f94: movzx  r9d,r15w
0x00e81f98: movzx  r8d,r14w
0x00e81f9c: movzx  edx,si
0x00e81f9f: mov    rcx,rdi
0x00e81fa2: call   0x1414d1330
0x00e81fa7: mov    r15,rax
0x00e81faa: test   rax,rax
0x00e81fad: je     0x140e82041
0x00e81fb3: lea    rcx,[rdi+0x11b408]
0x00e81fba: mov    edx,DWORD PTR [rax+0x8]
0x00e81fbd: call   0x14014d850
0x00e81fc2: mov    rdi,rax
0x00e81fc5: test   rax,rax
0x00e81fc8: je     0x140e82041
0x00e81fca: mov    edx,esi
0x00e81fcc: and    edx,0x8000000f
0x00e81fd2: jge    0x140e81fdb
0x00e81fd4: dec    edx
0x00e81fd6: or     edx,0xfffffff0
0x00e81fd9: inc    edx
0x00e81fdb: mov    ecx,r14d
0x00e81fde: and    ecx,0x8000000f
0x00e81fe4: jge    0x140e81fed
0x00e81fe6: dec    ecx
0x00e81fe8: or     ecx,0xfffffff0
0x00e81feb: inc    ecx
0x00e81fed: movsx  rax,dx
0x00e81ff1: shl    rax,0x4
0x00e81ff5: movsx  rcx,cx
0x00e81ff9: add    rax,r15
0x00e81ffc: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e82001: cmp    dl,0x43
0x00e82004: jb     0x140e82021
0x00e82006: lea    rdx,[rip+0x8af3db]        # 0x1417313e8 ; literal="Dense "
0x00e8200d: mov    rcx,rbx
0x00e82010: call   0x14006f560
0x00e82015: lea    rdx,[rip+0x8af3c4]        # 0x1417313e0 ; literal="Dead "
0x00e8201c: jmp    0x140e81e94
0x00e82021: cmp    dl,0x21
0x00e82024: ja     0x140e82035
0x00e82026: lea    rdx,[rip+0x8af37b]        # 0x1417313a8 ; literal="Sparse "
0x00e8202d: mov    rcx,rbx
0x00e82030: call   0x14006f560
0x00e82035: lea    rdx,[rip+0x8af3a4]        # 0x1417313e0 ; literal="Dead "
0x00e8203c: jmp    0x140e81e94
0x00e82041: lea    rdx,[rip+0x8af650]        # 0x141731698 ; literal="Dead Grass Downward Slope"
0x00e82048: mov    rcx,rbx
0x00e8204b: call   0x14006f560
0x00e82050: jmp    0x140e834d4
0x00e82055: lea    rax,[rsp+0x50]
0x00e8205a: mov    QWORD PTR [rsp+0x40],rax
0x00e8205f: lea    rax,[rsp+0x60]
0x00e82064: mov    QWORD PTR [rsp+0x38],rax
0x00e82069: lea    rax,[rsp+0x54]
0x00e8206e: mov    QWORD PTR [rsp+0x30],rax
0x00e82073: lea    rax,[rsp+0x5c]
0x00e82078: mov    QWORD PTR [rsp+0x28],rax
0x00e8207d: lea    rax,[rsp+0x58]
0x00e82082: mov    QWORD PTR [rsp+0x20],rax
0x00e82087: movzx  r9d,r15w
0x00e8208b: movzx  r8d,r14w
0x00e8208f: movzx  edx,si
0x00e82092: mov    rcx,rdi
0x00e82095: call   0x1414d0c70
0x00e8209a: movzx  eax,WORD PTR [rsp+0x50]
0x00e8209f: mov    WORD PTR [rsp+0x30],ax
0x00e820a4: mov    BYTE PTR [rsp+0x28],r12b
0x00e820a9: mov    DWORD PTR [rsp+0x20],r12d
0x00e820ae: mov    r9d,DWORD PTR [rsp+0x60]
0x00e820b3: movzx  r8d,WORD PTR [rsp+0x54]
0x00e820b9: lea    rdx,[rbp+0x0]
0x00e820bd: mov    rcx,rdi
0x00e820c0: call   0x1414d1920
0x00e820c5: lea    rdx,[rbp+0x0]
0x00e820c9: jmp    0x140e81ea3
0x00e820ce: lea    rdx,[rip+0x8af95b]        # 0x141731a30 ; literal="Glacial Downward Slope"
0x00e820d5: mov    rcx,rbx
0x00e820d8: call   0x14006f560
0x00e820dd: jmp    0x140e834d4
0x00e820e2: mov    BYTE PTR [rsp+0x28],0x1
0x00e820e7: mov    QWORD PTR [rsp+0x20],rbx
0x00e820ec: movzx  r9d,r15w
0x00e820f0: movzx  r8d,r14w
0x00e820f4: movzx  edx,si
0x00e820f7: mov    rcx,rdi
0x00e820fa: call   0x140a46f20
0x00e820ff: lea    rdx,[rip+0x8af612]        # 0x141731718 ; literal=" Downward Slope"
0x00e82106: mov    rcx,rbx
0x00e82109: call   0x14006f560
0x00e8210e: jmp    0x140e834d4
0x00e82113: sub    eax,0x25d
0x00e82118: cmp    eax,0x59
0x00e8211b: ja     0x140e82db9
0x00e82121: cdqe
0x00e82123: lea    rdx,[rip+0xffffffffff17ded6]        # 0x140000000
0x00e8212a: movzx  eax,BYTE PTR [rdx+rax*1+0xe83e28]
0x00e82132: mov    ecx,DWORD PTR [rdx+rax*4+0xe83d74]
0x00e82139: add    rcx,rdx
0x00e8213c: jmp    rcx
0x00e8213e: lea    rax,[rsp+0x50]
0x00e82143: mov    QWORD PTR [rsp+0x40],rax
0x00e82148: lea    rax,[rsp+0x60]
0x00e8214d: mov    QWORD PTR [rsp+0x38],rax
0x00e82152: lea    rax,[rsp+0x54]
0x00e82157: mov    QWORD PTR [rsp+0x30],rax
0x00e8215c: lea    rax,[rsp+0x5c]
0x00e82161: mov    QWORD PTR [rsp+0x28],rax
0x00e82166: lea    rax,[rsp+0x58]
0x00e8216b: mov    QWORD PTR [rsp+0x20],rax
0x00e82170: movzx  r9d,r15w
0x00e82174: movzx  r8d,r14w
0x00e82178: movzx  edx,si
0x00e8217b: mov    rcx,rdi
0x00e8217e: call   0x1414d0c70
0x00e82183: movzx  eax,WORD PTR [rsp+0x50]
0x00e82188: mov    WORD PTR [rsp+0x30],ax
0x00e8218d: mov    BYTE PTR [rsp+0x28],r12b
0x00e82192: mov    DWORD PTR [rsp+0x20],r12d
0x00e82197: mov    r9d,DWORD PTR [rsp+0x60]
0x00e8219c: movzx  r8d,WORD PTR [rsp+0x54]
0x00e821a2: lea    rdx,[rbp+0x0]
0x00e821a6: mov    rcx,rdi
0x00e821a9: call   0x1414d1920
0x00e821ae: lea    rdx,[rbp+0x0]
0x00e821b2: mov    rcx,rbx
0x00e821b5: call   0x1400b9d10
0x00e821ba: lea    rdx,[rip+0x8af4f7]        # 0x1417316b8 ; literal=" Downward Track (N)"
0x00e821c1: mov    rcx,rbx
0x00e821c4: call   0x14006f560
0x00e821c9: jmp    0x140e834d4
0x00e821ce: mov    BYTE PTR [rsp+0x28],0x1
0x00e821d3: mov    QWORD PTR [rsp+0x20],rbx
0x00e821d8: movzx  r9d,r15w
0x00e821dc: movzx  r8d,r14w
0x00e821e0: movzx  edx,si
0x00e821e3: mov    rcx,rdi
0x00e821e6: call   0x140a46f20
0x00e821eb: lea    rdx,[rip+0x8af4c6]        # 0x1417316b8 ; literal=" Downward Track (N)"
0x00e821f2: mov    rcx,rbx
0x00e821f5: call   0x14006f560
0x00e821fa: jmp    0x140e834d4
0x00e821ff: lea    rdx,[rip+0x8af4ca]        # 0x1417316d0 ; literal="Ice Downward Track (N)"
0x00e82206: mov    rcx,rbx
0x00e82209: call   0x14006f560
0x00e8220e: jmp    0x140e834d4
0x00e82213: lea    rax,[rsp+0x50]
0x00e82218: mov    QWORD PTR [rsp+0x40],rax
0x00e8221d: lea    rax,[rsp+0x60]
0x00e82222: mov    QWORD PTR [rsp+0x38],rax
0x00e82227: lea    rax,[rsp+0x54]
0x00e8222c: mov    QWORD PTR [rsp+0x30],rax
0x00e82231: lea    rax,[rsp+0x5c]
0x00e82236: mov    QWORD PTR [rsp+0x28],rax
0x00e8223b: lea    rax,[rsp+0x58]
0x00e82240: mov    QWORD PTR [rsp+0x20],rax
0x00e82245: movzx  r9d,r15w
0x00e82249: movzx  r8d,r14w
0x00e8224d: movzx  edx,si
0x00e82250: mov    rcx,rdi
0x00e82253: call   0x1414d0c70
0x00e82258: movzx  eax,WORD PTR [rsp+0x50]
0x00e8225d: mov    WORD PTR [rsp+0x30],ax
0x00e82262: mov    BYTE PTR [rsp+0x28],r12b
0x00e82267: mov    DWORD PTR [rsp+0x20],r12d
0x00e8226c: mov    r9d,DWORD PTR [rsp+0x60]
0x00e82271: movzx  r8d,WORD PTR [rsp+0x54]
0x00e82277: lea    rdx,[rbp+0x0]
0x00e8227b: mov    rcx,rdi
0x00e8227e: call   0x1414d1920
0x00e82283: lea    rdx,[rbp+0x0]
0x00e82287: mov    rcx,rbx
0x00e8228a: call   0x1400b9d10
0x00e8228f: lea    rdx,[rip+0x8af452]        # 0x1417316e8 ; literal=" Downward Track (S)"
0x00e82296: mov    rcx,rbx
0x00e82299: call   0x14006f560
0x00e8229e: jmp    0x140e834d4
0x00e822a3: mov    BYTE PTR [rsp+0x28],0x1
0x00e822a8: mov    QWORD PTR [rsp+0x20],rbx
0x00e822ad: movzx  r9d,r15w
0x00e822b1: movzx  r8d,r14w
0x00e822b5: movzx  edx,si
0x00e822b8: mov    rcx,rdi
0x00e822bb: call   0x140a46f20
0x00e822c0: lea    rdx,[rip+0x8af421]        # 0x1417316e8 ; literal=" Downward Track (S)"
0x00e822c7: mov    rcx,rbx
0x00e822ca: call   0x14006f560
0x00e822cf: jmp    0x140e834d4
0x00e822d4: lea    rdx,[rip+0x8af4e5]        # 0x1417317c0 ; literal="Ice Downward Track (S)"
0x00e822db: mov    rcx,rbx
0x00e822de: call   0x14006f560
0x00e822e3: jmp    0x140e834d4
0x00e822e8: lea    rax,[rsp+0x50]
0x00e822ed: mov    QWORD PTR [rsp+0x40],rax
0x00e822f2: lea    rax,[rsp+0x60]
0x00e822f7: mov    QWORD PTR [rsp+0x38],rax
0x00e822fc: lea    rax,[rsp+0x54]
0x00e82301: mov    QWORD PTR [rsp+0x30],rax
0x00e82306: lea    rax,[rsp+0x5c]
0x00e8230b: mov    QWORD PTR [rsp+0x28],rax
0x00e82310: lea    rax,[rsp+0x58]
0x00e82315: mov    QWORD PTR [rsp+0x20],rax
0x00e8231a: movzx  r9d,r15w
0x00e8231e: movzx  r8d,r14w
0x00e82322: movzx  edx,si
0x00e82325: mov    rcx,rdi
0x00e82328: call   0x1414d0c70
0x00e8232d: movzx  eax,WORD PTR [rsp+0x50]
0x00e82332: mov    WORD PTR [rsp+0x30],ax
0x00e82337: mov    BYTE PTR [rsp+0x28],r12b
0x00e8233c: mov    DWORD PTR [rsp+0x20],r12d
0x00e82341: mov    r9d,DWORD PTR [rsp+0x60]
0x00e82346: movzx  r8d,WORD PTR [rsp+0x54]
0x00e8234c: lea    rdx,[rbp+0x0]
0x00e82350: mov    rcx,rdi
0x00e82353: call   0x1414d1920
0x00e82358: lea    rdx,[rbp+0x0]
0x00e8235c: mov    rcx,rbx
0x00e8235f: call   0x1400b9d10
0x00e82364: lea    rdx,[rip+0x8af46d]        # 0x1417317d8 ; literal=" Downward Track (E)"
0x00e8236b: mov    rcx,rbx
0x00e8236e: call   0x14006f560
0x00e82373: jmp    0x140e834d4
0x00e82378: mov    BYTE PTR [rsp+0x28],0x1
0x00e8237d: mov    QWORD PTR [rsp+0x20],rbx
0x00e82382: movzx  r9d,r15w
0x00e82386: movzx  r8d,r14w
0x00e8238a: movzx  edx,si
0x00e8238d: mov    rcx,rdi
0x00e82390: call   0x140a46f20
0x00e82395: lea    rdx,[rip+0x8af43c]        # 0x1417317d8 ; literal=" Downward Track (E)"
0x00e8239c: mov    rcx,rbx
0x00e8239f: call   0x14006f560
0x00e823a4: jmp    0x140e834d4
0x00e823a9: lea    rdx,[rip+0x8af440]        # 0x1417317f0 ; literal="Ice Downward Track (E)"
0x00e823b0: mov    rcx,rbx
0x00e823b3: call   0x14006f560
0x00e823b8: jmp    0x140e834d4
0x00e823bd: lea    rax,[rsp+0x50]
0x00e823c2: mov    QWORD PTR [rsp+0x40],rax
0x00e823c7: lea    rax,[rsp+0x60]
0x00e823cc: mov    QWORD PTR [rsp+0x38],rax
0x00e823d1: lea    rax,[rsp+0x54]
0x00e823d6: mov    QWORD PTR [rsp+0x30],rax
0x00e823db: lea    rax,[rsp+0x5c]
0x00e823e0: mov    QWORD PTR [rsp+0x28],rax
0x00e823e5: lea    rax,[rsp+0x58]
0x00e823ea: mov    QWORD PTR [rsp+0x20],rax
0x00e823ef: movzx  r9d,r15w
0x00e823f3: movzx  r8d,r14w
0x00e823f7: movzx  edx,si
0x00e823fa: mov    rcx,rdi
0x00e823fd: call   0x1414d0c70
0x00e82402: movzx  eax,WORD PTR [rsp+0x50]
0x00e82407: mov    WORD PTR [rsp+0x30],ax
0x00e8240c: mov    BYTE PTR [rsp+0x28],r12b
0x00e82411: mov    DWORD PTR [rsp+0x20],r12d
0x00e82416: mov    r9d,DWORD PTR [rsp+0x60]
0x00e8241b: movzx  r8d,WORD PTR [rsp+0x54]
0x00e82421: lea    rdx,[rbp+0x0]
0x00e82425: mov    rcx,rdi
0x00e82428: call   0x1414d1920
0x00e8242d: lea    rdx,[rbp+0x0]
0x00e82431: mov    rcx,rbx
0x00e82434: call   0x1400b9d10
0x00e82439: lea    rdx,[rip+0x8af3c8]        # 0x141731808 ; literal=" Downward Track (W)"
0x00e82440: mov    rcx,rbx
0x00e82443: call   0x14006f560
0x00e82448: jmp    0x140e834d4
0x00e8244d: mov    BYTE PTR [rsp+0x28],0x1
0x00e82452: mov    QWORD PTR [rsp+0x20],rbx
0x00e82457: movzx  r9d,r15w
0x00e8245b: movzx  r8d,r14w
0x00e8245f: movzx  edx,si
0x00e82462: mov    rcx,rdi
0x00e82465: call   0x140a46f20
0x00e8246a: lea    rdx,[rip+0x8af397]        # 0x141731808 ; literal=" Downward Track (W)"
0x00e82471: mov    rcx,rbx
0x00e82474: call   0x14006f560
0x00e82479: jmp    0x140e834d4
0x00e8247e: lea    rdx,[rip+0x8af2db]        # 0x141731760 ; literal="Ice Downward Track (W)"
0x00e82485: mov    rcx,rbx
0x00e82488: call   0x14006f560
0x00e8248d: jmp    0x140e834d4
0x00e82492: lea    rax,[rsp+0x50]
0x00e82497: mov    QWORD PTR [rsp+0x40],rax
0x00e8249c: lea    rax,[rsp+0x60]
0x00e824a1: mov    QWORD PTR [rsp+0x38],rax
0x00e824a6: lea    rax,[rsp+0x54]
0x00e824ab: mov    QWORD PTR [rsp+0x30],rax
0x00e824b0: lea    rax,[rsp+0x5c]
0x00e824b5: mov    QWORD PTR [rsp+0x28],rax
0x00e824ba: lea    rax,[rsp+0x58]
0x00e824bf: mov    QWORD PTR [rsp+0x20],rax
0x00e824c4: movzx  r9d,r15w
0x00e824c8: movzx  r8d,r14w
0x00e824cc: movzx  edx,si
0x00e824cf: mov    rcx,rdi
0x00e824d2: call   0x1414d0c70
0x00e824d7: movzx  eax,WORD PTR [rsp+0x50]
0x00e824dc: mov    WORD PTR [rsp+0x30],ax
0x00e824e1: mov    BYTE PTR [rsp+0x28],r12b
0x00e824e6: mov    DWORD PTR [rsp+0x20],r12d
0x00e824eb: mov    r9d,DWORD PTR [rsp+0x60]
0x00e824f0: movzx  r8d,WORD PTR [rsp+0x54]
0x00e824f6: lea    rdx,[rbp+0x0]
0x00e824fa: mov    rcx,rdi
0x00e824fd: call   0x1414d1920
0x00e82502: lea    rdx,[rbp+0x0]
0x00e82506: mov    rcx,rbx
0x00e82509: call   0x1400b9d10
0x00e8250e: lea    rdx,[rip+0x8af263]        # 0x141731778 ; literal=" Downward Track (NS)"
0x00e82515: mov    rcx,rbx
0x00e82518: call   0x14006f560
0x00e8251d: jmp    0x140e834d4
0x00e82522: mov    BYTE PTR [rsp+0x28],0x1
0x00e82527: mov    QWORD PTR [rsp+0x20],rbx
0x00e8252c: movzx  r9d,r15w
0x00e82530: movzx  r8d,r14w
0x00e82534: movzx  edx,si
0x00e82537: mov    rcx,rdi
0x00e8253a: call   0x140a46f20
0x00e8253f: lea    rdx,[rip+0x8af232]        # 0x141731778 ; literal=" Downward Track (NS)"
0x00e82546: mov    rcx,rbx
0x00e82549: call   0x14006f560
0x00e8254e: jmp    0x140e834d4
0x00e82553: lea    rdx,[rip+0x8af236]        # 0x141731790 ; literal="Ice Downward Track (NS)"
0x00e8255a: mov    rcx,rbx
0x00e8255d: call   0x14006f560
0x00e82562: jmp    0x140e834d4
0x00e82567: lea    rax,[rsp+0x50]
0x00e8256c: mov    QWORD PTR [rsp+0x40],rax
0x00e82571: lea    rax,[rsp+0x60]
0x00e82576: mov    QWORD PTR [rsp+0x38],rax
0x00e8257b: lea    rax,[rsp+0x54]
0x00e82580: mov    QWORD PTR [rsp+0x30],rax
0x00e82585: lea    rax,[rsp+0x5c]
0x00e8258a: mov    QWORD PTR [rsp+0x28],rax
0x00e8258f: lea    rax,[rsp+0x58]
0x00e82594: mov    QWORD PTR [rsp+0x20],rax
0x00e82599: movzx  r9d,r15w
0x00e8259d: movzx  r8d,r14w
0x00e825a1: movzx  edx,si
0x00e825a4: mov    rcx,rdi
0x00e825a7: call   0x1414d0c70
0x00e825ac: movzx  eax,WORD PTR [rsp+0x50]
0x00e825b1: mov    WORD PTR [rsp+0x30],ax
0x00e825b6: mov    BYTE PTR [rsp+0x28],r12b
0x00e825bb: mov    DWORD PTR [rsp+0x20],r12d
0x00e825c0: mov    r9d,DWORD PTR [rsp+0x60]
0x00e825c5: movzx  r8d,WORD PTR [rsp+0x54]
0x00e825cb: lea    rdx,[rbp+0x0]
0x00e825cf: mov    rcx,rdi
0x00e825d2: call   0x1414d1920
0x00e825d7: lea    rdx,[rbp+0x0]
0x00e825db: mov    rcx,rbx
0x00e825de: call   0x1400b9d10
0x00e825e3: lea    rdx,[rip+0x8af1be]        # 0x1417317a8 ; literal=" Downward Track (NE)"
0x00e825ea: mov    rcx,rbx
0x00e825ed: call   0x14006f560
0x00e825f2: jmp    0x140e834d4
0x00e825f7: mov    BYTE PTR [rsp+0x28],0x1
0x00e825fc: mov    QWORD PTR [rsp+0x20],rbx
0x00e82601: movzx  r9d,r15w
0x00e82605: movzx  r8d,r14w
0x00e82609: movzx  edx,si
0x00e8260c: mov    rcx,rdi
0x00e8260f: call   0x140a46f20
0x00e82614: lea    rdx,[rip+0x8af18d]        # 0x1417317a8 ; literal=" Downward Track (NE)"
0x00e8261b: mov    rcx,rbx
0x00e8261e: call   0x14006f560
0x00e82623: jmp    0x140e834d4
0x00e82628: lea    rdx,[rip+0x8af251]        # 0x141731880 ; literal="Ice Downward Track (NE)"
0x00e8262f: mov    rcx,rbx
0x00e82632: call   0x14006f560
0x00e82637: jmp    0x140e834d4
0x00e8263c: lea    rax,[rsp+0x50]
0x00e82641: mov    QWORD PTR [rsp+0x40],rax
0x00e82646: lea    rax,[rsp+0x60]
0x00e8264b: mov    QWORD PTR [rsp+0x38],rax
0x00e82650: lea    rax,[rsp+0x54]
0x00e82655: mov    QWORD PTR [rsp+0x30],rax
0x00e8265a: lea    rax,[rsp+0x5c]
0x00e8265f: mov    QWORD PTR [rsp+0x28],rax
0x00e82664: lea    rax,[rsp+0x58]
0x00e82669: mov    QWORD PTR [rsp+0x20],rax
0x00e8266e: movzx  r9d,r15w
0x00e82672: movzx  r8d,r14w
0x00e82676: movzx  edx,si
0x00e82679: mov    rcx,rdi
0x00e8267c: call   0x1414d0c70
0x00e82681: movzx  eax,WORD PTR [rsp+0x50]
0x00e82686: mov    WORD PTR [rsp+0x30],ax
0x00e8268b: mov    BYTE PTR [rsp+0x28],r12b
0x00e82690: mov    DWORD PTR [rsp+0x20],r12d
0x00e82695: mov    r9d,DWORD PTR [rsp+0x60]
0x00e8269a: movzx  r8d,WORD PTR [rsp+0x54]
0x00e826a0: lea    rdx,[rbp+0x0]
0x00e826a4: mov    rcx,rdi
0x00e826a7: call   0x1414d1920
0x00e826ac: lea    rdx,[rbp+0x0]
0x00e826b0: mov    rcx,rbx
0x00e826b3: call   0x1400b9d10
0x00e826b8: lea    rdx,[rip+0x8af1d9]        # 0x141731898 ; literal=" Downward Track (NW)"
0x00e826bf: mov    rcx,rbx
0x00e826c2: call   0x14006f560
0x00e826c7: jmp    0x140e834d4
0x00e826cc: mov    BYTE PTR [rsp+0x28],0x1
0x00e826d1: mov    QWORD PTR [rsp+0x20],rbx
0x00e826d6: movzx  r9d,r15w
0x00e826da: movzx  r8d,r14w
0x00e826de: movzx  edx,si
0x00e826e1: mov    rcx,rdi
0x00e826e4: call   0x140a46f20
0x00e826e9: lea    rdx,[rip+0x8af1a8]        # 0x141731898 ; literal=" Downward Track (NW)"
0x00e826f0: mov    rcx,rbx
0x00e826f3: call   0x14006f560
0x00e826f8: jmp    0x140e834d4
0x00e826fd: lea    rdx,[rip+0x8af1ac]        # 0x1417318b0 ; literal="Ice Downward Track (NW)"
0x00e82704: mov    rcx,rbx
0x00e82707: call   0x14006f560
0x00e8270c: jmp    0x140e834d4
0x00e82711: lea    rax,[rsp+0x50]
0x00e82716: mov    QWORD PTR [rsp+0x40],rax
0x00e8271b: lea    rax,[rsp+0x60]
0x00e82720: mov    QWORD PTR [rsp+0x38],rax
0x00e82725: lea    rax,[rsp+0x54]
0x00e8272a: mov    QWORD PTR [rsp+0x30],rax
0x00e8272f: lea    rax,[rsp+0x5c]
0x00e82734: mov    QWORD PTR [rsp+0x28],rax
0x00e82739: lea    rax,[rsp+0x58]
0x00e8273e: mov    QWORD PTR [rsp+0x20],rax
0x00e82743: movzx  r9d,r15w
0x00e82747: movzx  r8d,r14w
0x00e8274b: movzx  edx,si
0x00e8274e: mov    rcx,rdi
0x00e82751: call   0x1414d0c70
0x00e82756: movzx  eax,WORD PTR [rsp+0x50]
0x00e8275b: mov    WORD PTR [rsp+0x30],ax
0x00e82760: mov    BYTE PTR [rsp+0x28],r12b
0x00e82765: mov    DWORD PTR [rsp+0x20],r12d
0x00e8276a: mov    r9d,DWORD PTR [rsp+0x60]
0x00e8276f: movzx  r8d,WORD PTR [rsp+0x54]
0x00e82775: lea    rdx,[rbp+0x0]
0x00e82779: mov    rcx,rdi
0x00e8277c: call   0x1414d1920
0x00e82781: lea    rdx,[rbp+0x0]
0x00e82785: mov    rcx,rbx
0x00e82788: call   0x1400b9d10
0x00e8278d: lea    rdx,[rip+0x8af134]        # 0x1417318c8 ; literal=" Downward Track (SE)"
0x00e82794: mov    rcx,rbx
0x00e82797: call   0x14006f560
0x00e8279c: jmp    0x140e834d4
0x00e827a1: mov    BYTE PTR [rsp+0x28],0x1
0x00e827a6: mov    QWORD PTR [rsp+0x20],rbx
0x00e827ab: movzx  r9d,r15w
0x00e827af: movzx  r8d,r14w
0x00e827b3: movzx  edx,si
0x00e827b6: mov    rcx,rdi
0x00e827b9: call   0x140a46f20
0x00e827be: lea    rdx,[rip+0x8af103]        # 0x1417318c8 ; literal=" Downward Track (SE)"
0x00e827c5: mov    rcx,rbx
0x00e827c8: call   0x14006f560
0x00e827cd: jmp    0x140e834d4
0x00e827d2: lea    rdx,[rip+0x8af047]        # 0x141731820 ; literal="Ice Downward Track (SE)"
0x00e827d9: mov    rcx,rbx
0x00e827dc: call   0x14006f560
0x00e827e1: jmp    0x140e834d4
0x00e827e6: lea    rax,[rsp+0x50]
0x00e827eb: mov    QWORD PTR [rsp+0x40],rax
0x00e827f0: lea    rax,[rsp+0x60]
0x00e827f5: mov    QWORD PTR [rsp+0x38],rax
0x00e827fa: lea    rax,[rsp+0x54]
0x00e827ff: mov    QWORD PTR [rsp+0x30],rax
0x00e82804: lea    rax,[rsp+0x5c]
0x00e82809: mov    QWORD PTR [rsp+0x28],rax
0x00e8280e: lea    rax,[rsp+0x58]
0x00e82813: mov    QWORD PTR [rsp+0x20],rax
0x00e82818: movzx  r9d,r15w
0x00e8281c: movzx  r8d,r14w
0x00e82820: movzx  edx,si
0x00e82823: mov    rcx,rdi
0x00e82826: call   0x1414d0c70
0x00e8282b: movzx  eax,WORD PTR [rsp+0x50]
0x00e82830: mov    WORD PTR [rsp+0x30],ax
0x00e82835: mov    BYTE PTR [rsp+0x28],r12b
0x00e8283a: mov    DWORD PTR [rsp+0x20],r12d
0x00e8283f: mov    r9d,DWORD PTR [rsp+0x60]
0x00e82844: movzx  r8d,WORD PTR [rsp+0x54]
0x00e8284a: lea    rdx,[rbp+0x0]
0x00e8284e: mov    rcx,rdi
0x00e82851: call   0x1414d1920
0x00e82856: lea    rdx,[rbp+0x0]
0x00e8285a: mov    rcx,rbx
0x00e8285d: call   0x1400b9d10
0x00e82862: lea    rdx,[rip+0x8aefcf]        # 0x141731838 ; literal=" Downward Track (SW)"
0x00e82869: mov    rcx,rbx
0x00e8286c: call   0x14006f560
0x00e82871: jmp    0x140e834d4
0x00e82876: mov    BYTE PTR [rsp+0x28],0x1
0x00e8287b: mov    QWORD PTR [rsp+0x20],rbx
0x00e82880: movzx  r9d,r15w
0x00e82884: movzx  r8d,r14w
0x00e82888: movzx  edx,si
0x00e8288b: mov    rcx,rdi
0x00e8288e: call   0x140a46f20
0x00e82893: lea    rdx,[rip+0x8aef9e]        # 0x141731838 ; literal=" Downward Track (SW)"
0x00e8289a: mov    rcx,rbx
0x00e8289d: call   0x14006f560
0x00e828a2: jmp    0x140e834d4
0x00e828a7: lea    rdx,[rip+0x8aefa2]        # 0x141731850 ; literal="Ice Downward Track (SW)"
0x00e828ae: mov    rcx,rbx
0x00e828b1: call   0x14006f560
0x00e828b6: jmp    0x140e834d4
0x00e828bb: lea    rax,[rsp+0x50]
0x00e828c0: mov    QWORD PTR [rsp+0x40],rax
0x00e828c5: lea    rax,[rsp+0x60]
0x00e828ca: mov    QWORD PTR [rsp+0x38],rax
0x00e828cf: lea    rax,[rsp+0x54]
0x00e828d4: mov    QWORD PTR [rsp+0x30],rax
0x00e828d9: lea    rax,[rsp+0x5c]
0x00e828de: mov    QWORD PTR [rsp+0x28],rax
0x00e828e3: lea    rax,[rsp+0x58]
0x00e828e8: mov    QWORD PTR [rsp+0x20],rax
0x00e828ed: movzx  r9d,r15w
0x00e828f1: movzx  r8d,r14w
0x00e828f5: movzx  edx,si
0x00e828f8: mov    rcx,rdi
0x00e828fb: call   0x1414d0c70
0x00e82900: movzx  eax,WORD PTR [rsp+0x50]
0x00e82905: mov    WORD PTR [rsp+0x30],ax
0x00e8290a: mov    BYTE PTR [rsp+0x28],r12b
0x00e8290f: mov    DWORD PTR [rsp+0x20],r12d
0x00e82914: mov    r9d,DWORD PTR [rsp+0x60]
0x00e82919: movzx  r8d,WORD PTR [rsp+0x54]
0x00e8291f: lea    rdx,[rbp+0x0]
0x00e82923: mov    rcx,rdi
0x00e82926: call   0x1414d1920
0x00e8292b: lea    rdx,[rbp+0x0]
0x00e8292f: mov    rcx,rbx
0x00e82932: call   0x1400b9d10
0x00e82937: lea    rdx,[rip+0x8aef2a]        # 0x141731868 ; literal=" Downward Track (EW)"
0x00e8293e: mov    rcx,rbx
0x00e82941: call   0x14006f560
0x00e82946: jmp    0x140e834d4
0x00e8294b: mov    BYTE PTR [rsp+0x28],0x1
0x00e82950: mov    QWORD PTR [rsp+0x20],rbx
0x00e82955: movzx  r9d,r15w
0x00e82959: movzx  r8d,r14w
0x00e8295d: movzx  edx,si
0x00e82960: mov    rcx,rdi
0x00e82963: call   0x140a46f20
0x00e82968: lea    rdx,[rip+0x8aeef9]        # 0x141731868 ; literal=" Downward Track (EW)"
0x00e8296f: mov    rcx,rbx
0x00e82972: call   0x14006f560
0x00e82977: jmp    0x140e834d4
0x00e8297c: lea    rdx,[rip+0x8aefcd]        # 0x141731950 ; literal="Ice Downward Track (EW)"
0x00e82983: mov    rcx,rbx
0x00e82986: call   0x14006f560
0x00e8298b: jmp    0x140e834d4
0x00e82990: lea    rax,[rsp+0x50]
0x00e82995: mov    QWORD PTR [rsp+0x40],rax
0x00e8299a: lea    rax,[rsp+0x60]
0x00e8299f: mov    QWORD PTR [rsp+0x38],rax
0x00e829a4: lea    rax,[rsp+0x54]
0x00e829a9: mov    QWORD PTR [rsp+0x30],rax
0x00e829ae: lea    rax,[rsp+0x5c]
0x00e829b3: mov    QWORD PTR [rsp+0x28],rax
0x00e829b8: lea    rax,[rsp+0x58]
0x00e829bd: mov    QWORD PTR [rsp+0x20],rax
0x00e829c2: movzx  r9d,r15w
0x00e829c6: movzx  r8d,r14w
0x00e829ca: movzx  edx,si
0x00e829cd: mov    rcx,rdi
0x00e829d0: call   0x1414d0c70
0x00e829d5: movzx  eax,WORD PTR [rsp+0x50]
0x00e829da: mov    WORD PTR [rsp+0x30],ax
0x00e829df: mov    BYTE PTR [rsp+0x28],r12b
0x00e829e4: mov    DWORD PTR [rsp+0x20],r12d
0x00e829e9: mov    r9d,DWORD PTR [rsp+0x60]
0x00e829ee: movzx  r8d,WORD PTR [rsp+0x54]
0x00e829f4: lea    rdx,[rbp+0x0]
0x00e829f8: mov    rcx,rdi
0x00e829fb: call   0x1414d1920
0x00e82a00: lea    rdx,[rbp+0x0]
0x00e82a04: mov    rcx,rbx
0x00e82a07: call   0x1400b9d10
0x00e82a0c: lea    rdx,[rip+0x8aef55]        # 0x141731968 ; literal=" Downward Track (NSE)"
0x00e82a13: mov    rcx,rbx
0x00e82a16: call   0x14006f560
0x00e82a1b: jmp    0x140e834d4
0x00e82a20: mov    BYTE PTR [rsp+0x28],0x1
0x00e82a25: mov    QWORD PTR [rsp+0x20],rbx
0x00e82a2a: movzx  r9d,r15w
0x00e82a2e: movzx  r8d,r14w
0x00e82a32: movzx  edx,si
0x00e82a35: mov    rcx,rdi
0x00e82a38: call   0x140a46f20
0x00e82a3d: lea    rdx,[rip+0x8aef24]        # 0x141731968 ; literal=" Downward Track (NSE)"
0x00e82a44: mov    rcx,rbx
0x00e82a47: call   0x14006f560
0x00e82a4c: jmp    0x140e834d4
0x00e82a51: lea    rdx,[rip+0x8aef28]        # 0x141731980 ; literal="Ice Downward Track (NSE)"
0x00e82a58: mov    rcx,rbx
0x00e82a5b: call   0x14006f560
0x00e82a60: jmp    0x140e834d4
0x00e82a65: lea    rax,[rsp+0x50]
0x00e82a6a: mov    QWORD PTR [rsp+0x40],rax
0x00e82a6f: lea    rax,[rsp+0x60]
0x00e82a74: mov    QWORD PTR [rsp+0x38],rax
0x00e82a79: lea    rax,[rsp+0x54]
0x00e82a7e: mov    QWORD PTR [rsp+0x30],rax
0x00e82a83: lea    rax,[rsp+0x5c]
0x00e82a88: mov    QWORD PTR [rsp+0x28],rax
0x00e82a8d: lea    rax,[rsp+0x58]
0x00e82a92: mov    QWORD PTR [rsp+0x20],rax
0x00e82a97: movzx  r9d,r15w
0x00e82a9b: movzx  r8d,r14w
0x00e82a9f: movzx  edx,si
0x00e82aa2: mov    rcx,rdi
0x00e82aa5: call   0x1414d0c70
0x00e82aaa: movzx  eax,WORD PTR [rsp+0x50]
0x00e82aaf: mov    WORD PTR [rsp+0x30],ax
0x00e82ab4: mov    BYTE PTR [rsp+0x28],r12b
0x00e82ab9: mov    DWORD PTR [rsp+0x20],r12d
0x00e82abe: mov    r9d,DWORD PTR [rsp+0x60]
0x00e82ac3: movzx  r8d,WORD PTR [rsp+0x54]
0x00e82ac9: lea    rdx,[rbp+0x0]
0x00e82acd: mov    rcx,rdi
0x00e82ad0: call   0x1414d1920
0x00e82ad5: lea    rdx,[rbp+0x0]
0x00e82ad9: mov    rcx,rbx
0x00e82adc: call   0x1400b9d10
0x00e82ae1: lea    rdx,[rip+0x8aeeb8]        # 0x1417319a0 ; literal=" Downward Track (NSW)"
0x00e82ae8: mov    rcx,rbx
0x00e82aeb: call   0x14006f560
0x00e82af0: jmp    0x140e834d4
0x00e82af5: mov    BYTE PTR [rsp+0x28],0x1
0x00e82afa: mov    QWORD PTR [rsp+0x20],rbx
0x00e82aff: movzx  r9d,r15w
0x00e82b03: movzx  r8d,r14w
0x00e82b07: movzx  edx,si
0x00e82b0a: mov    rcx,rdi
0x00e82b0d: call   0x140a46f20
0x00e82b12: lea    rdx,[rip+0x8aee87]        # 0x1417319a0 ; literal=" Downward Track (NSW)"
0x00e82b19: mov    rcx,rbx
0x00e82b1c: call   0x14006f560
0x00e82b21: jmp    0x140e834d4
0x00e82b26: lea    rdx,[rip+0x8aedb3]        # 0x1417318e0 ; literal="Ice Downward Track (NSW)"
0x00e82b2d: mov    rcx,rbx
0x00e82b30: call   0x14006f560
0x00e82b35: jmp    0x140e834d4
0x00e82b3a: lea    rax,[rsp+0x50]
0x00e82b3f: mov    QWORD PTR [rsp+0x40],rax
0x00e82b44: lea    rax,[rsp+0x60]
0x00e82b49: mov    QWORD PTR [rsp+0x38],rax
0x00e82b4e: lea    rax,[rsp+0x54]
0x00e82b53: mov    QWORD PTR [rsp+0x30],rax
0x00e82b58: lea    rax,[rsp+0x5c]
0x00e82b5d: mov    QWORD PTR [rsp+0x28],rax
0x00e82b62: lea    rax,[rsp+0x58]
0x00e82b67: mov    QWORD PTR [rsp+0x20],rax
0x00e82b6c: movzx  r9d,r15w
0x00e82b70: movzx  r8d,r14w
0x00e82b74: movzx  edx,si
0x00e82b77: mov    rcx,rdi
0x00e82b7a: call   0x1414d0c70
0x00e82b7f: movzx  eax,WORD PTR [rsp+0x50]
0x00e82b84: mov    WORD PTR [rsp+0x30],ax
0x00e82b89: mov    BYTE PTR [rsp+0x28],r12b
0x00e82b8e: mov    DWORD PTR [rsp+0x20],r12d
0x00e82b93: mov    r9d,DWORD PTR [rsp+0x60]
0x00e82b98: movzx  r8d,WORD PTR [rsp+0x54]
0x00e82b9e: lea    rdx,[rbp+0x0]
0x00e82ba2: mov    rcx,rdi
0x00e82ba5: call   0x1414d1920
0x00e82baa: lea    rdx,[rbp+0x0]
0x00e82bae: mov    rcx,rbx
0x00e82bb1: call   0x1400b9d10
0x00e82bb6: lea    rdx,[rip+0x8aed43]        # 0x141731900 ; literal=" Downward Track (NEW)"
0x00e82bbd: mov    rcx,rbx
0x00e82bc0: call   0x14006f560
0x00e82bc5: jmp    0x140e834d4
0x00e82bca: mov    BYTE PTR [rsp+0x28],0x1
0x00e82bcf: mov    QWORD PTR [rsp+0x20],rbx
0x00e82bd4: movzx  r9d,r15w
0x00e82bd8: movzx  r8d,r14w
0x00e82bdc: movzx  edx,si
0x00e82bdf: mov    rcx,rdi
0x00e82be2: call   0x140a46f20
0x00e82be7: lea    rdx,[rip+0x8aed12]        # 0x141731900 ; literal=" Downward Track (NEW)"
0x00e82bee: mov    rcx,rbx
0x00e82bf1: call   0x14006f560
0x00e82bf6: jmp    0x140e834d4
0x00e82bfb: lea    rdx,[rip+0x8aed16]        # 0x141731918 ; literal="Ice Downward Track (NEW)"
0x00e82c02: mov    rcx,rbx
0x00e82c05: call   0x14006f560
0x00e82c0a: jmp    0x140e834d4
0x00e82c0f: lea    rax,[rsp+0x50]
0x00e82c14: mov    QWORD PTR [rsp+0x40],rax
0x00e82c19: lea    rax,[rsp+0x60]
0x00e82c1e: mov    QWORD PTR [rsp+0x38],rax
0x00e82c23: lea    rax,[rsp+0x54]
0x00e82c28: mov    QWORD PTR [rsp+0x30],rax
0x00e82c2d: lea    rax,[rsp+0x5c]
0x00e82c32: mov    QWORD PTR [rsp+0x28],rax
0x00e82c37: lea    rax,[rsp+0x58]
0x00e82c3c: mov    QWORD PTR [rsp+0x20],rax
0x00e82c41: movzx  r9d,r15w
0x00e82c45: movzx  r8d,r14w
0x00e82c49: movzx  edx,si
0x00e82c4c: mov    rcx,rdi
0x00e82c4f: call   0x1414d0c70
0x00e82c54: movzx  eax,WORD PTR [rsp+0x50]
0x00e82c59: mov    WORD PTR [rsp+0x30],ax
0x00e82c5e: mov    BYTE PTR [rsp+0x28],r12b
0x00e82c63: mov    DWORD PTR [rsp+0x20],r12d
0x00e82c68: mov    r9d,DWORD PTR [rsp+0x60]
0x00e82c6d: movzx  r8d,WORD PTR [rsp+0x54]
0x00e82c73: lea    rdx,[rbp+0x0]
0x00e82c77: mov    rcx,rdi
0x00e82c7a: call   0x1414d1920
0x00e82c7f: lea    rdx,[rbp+0x0]
0x00e82c83: mov    rcx,rbx
0x00e82c86: call   0x1400b9d10
0x00e82c8b: lea    rdx,[rip+0x8aeca6]        # 0x141731938 ; literal=" Downward Track (SEW)"
0x00e82c92: mov    rcx,rbx
0x00e82c95: call   0x14006f560
0x00e82c9a: jmp    0x140e834d4
0x00e82c9f: mov    BYTE PTR [rsp+0x28],0x1
0x00e82ca4: mov    QWORD PTR [rsp+0x20],rbx
0x00e82ca9: movzx  r9d,r15w
0x00e82cad: movzx  r8d,r14w
0x00e82cb1: movzx  edx,si
0x00e82cb4: mov    rcx,rdi
0x00e82cb7: call   0x140a46f20
0x00e82cbc: lea    rdx,[rip+0x8aec75]        # 0x141731938 ; literal=" Downward Track (SEW)"
0x00e82cc3: mov    rcx,rbx
0x00e82cc6: call   0x14006f560
0x00e82ccb: jmp    0x140e834d4
0x00e82cd0: lea    rdx,[rip+0x8aed01]        # 0x1417319d8 ; literal="Ice Downward Track (SEW)"
0x00e82cd7: mov    rcx,rbx
0x00e82cda: call   0x14006f560
0x00e82cdf: jmp    0x140e834d4
0x00e82ce4: lea    rax,[rsp+0x50]
0x00e82ce9: mov    QWORD PTR [rsp+0x40],rax
0x00e82cee: lea    rax,[rsp+0x60]
0x00e82cf3: mov    QWORD PTR [rsp+0x38],rax
0x00e82cf8: lea    rax,[rsp+0x54]
0x00e82cfd: mov    QWORD PTR [rsp+0x30],rax
0x00e82d02: lea    rax,[rsp+0x5c]
0x00e82d07: mov    QWORD PTR [rsp+0x28],rax
0x00e82d0c: lea    rax,[rsp+0x58]
0x00e82d11: mov    QWORD PTR [rsp+0x20],rax
0x00e82d16: movzx  r9d,r15w
0x00e82d1a: movzx  r8d,r14w
0x00e82d1e: movzx  edx,si
0x00e82d21: mov    rcx,rdi
0x00e82d24: call   0x1414d0c70
0x00e82d29: movzx  eax,WORD PTR [rsp+0x50]
0x00e82d2e: mov    WORD PTR [rsp+0x30],ax
0x00e82d33: mov    BYTE PTR [rsp+0x28],r12b
0x00e82d38: mov    DWORD PTR [rsp+0x20],r12d
0x00e82d3d: mov    r9d,DWORD PTR [rsp+0x60]
0x00e82d42: movzx  r8d,WORD PTR [rsp+0x54]
0x00e82d48: lea    rdx,[rbp+0x0]
0x00e82d4c: mov    rcx,rdi
0x00e82d4f: call   0x1414d1920
0x00e82d54: lea    rdx,[rbp+0x0]
0x00e82d58: mov    rcx,rbx
0x00e82d5b: call   0x1400b9d10
0x00e82d60: lea    rdx,[rip+0x8aec91]        # 0x1417319f8 ; literal=" Downward Track (NSEW)"
0x00e82d67: mov    rcx,rbx
0x00e82d6a: call   0x14006f560
0x00e82d6f: jmp    0x140e834d4
0x00e82d74: mov    BYTE PTR [rsp+0x28],0x1
0x00e82d79: mov    QWORD PTR [rsp+0x20],rbx
0x00e82d7e: movzx  r9d,r15w
0x00e82d82: movzx  r8d,r14w
0x00e82d86: movzx  edx,si
0x00e82d89: mov    rcx,rdi
0x00e82d8c: call   0x140a46f20
0x00e82d91: lea    rdx,[rip+0x8aec60]        # 0x1417319f8 ; literal=" Downward Track (NSEW)"
0x00e82d98: mov    rcx,rbx
0x00e82d9b: call   0x14006f560
0x00e82da0: jmp    0x140e834d4
0x00e82da5: lea    rdx,[rip+0x8aec64]        # 0x141731a10 ; literal="Ice Downward Track (NSEW)"
0x00e82dac: mov    rcx,rbx
0x00e82daf: call   0x14006f560
0x00e82db4: jmp    0x140e834d4
0x00e82db9: lea    rdx,[rip+0x8aebf8]        # 0x1417319b8 ; literal="Downward Slope"
0x00e82dc0: mov    rcx,rbx
0x00e82dc3: call   0x14006f560
0x00e82dc8: jmp    0x140e834d4
0x00e82dcd: lea    rdx,[rip+0x8aebf4]        # 0x1417319c8 ; literal="Open Space"
0x00e82dd4: mov    rcx,rbx
0x00e82dd7: call   0x14006f560
0x00e82ddc: jmp    0x140e834d4
0x00e82de1: mov    r8d,0x7
0x00e82de7: lea    rdx,[rip+0x7693f2]        # 0x1415ec1e0 ; literal="Unknown"
0x00e82dee: jmp    0x140e834cb
0x00e82df3: movzx  r9d,r15w
0x00e82df7: movzx  r8d,r14w
0x00e82dfb: movzx  edx,si
0x00e82dfe: mov    rcx,rdi
0x00e82e01: call   0x140247cf0
0x00e82e06: mov    ecx,0x275b
0x00e82e0b: cmp    ax,cx
0x00e82e0e: jb     0x140e82e25
0x00e82e10: mov    r8d,0x5
0x00e82e16: lea    rdx,[rip+0x8ae4ff]        # 0x14173131c ; literal="Warm "
0x00e82e1d: mov    rcx,rbx
0x00e82e20: call   0x14006fa10
0x00e82e25: movzx  r9d,r15w
0x00e82e29: movzx  r8d,r14w
0x00e82e2d: movzx  edx,si
0x00e82e30: mov    rcx,rdi
0x00e82e33: call   0x14149f0b0
0x00e82e38: test   al,al
0x00e82e3a: je     0x140e82e51
0x00e82e3c: mov    r8d,0x5
0x00e82e42: lea    rdx,[rip+0x8ae4db]        # 0x141731324 ; literal="Damp "
0x00e82e49: mov    rcx,rbx
0x00e82e4c: call   0x14006fa10
0x00e82e51: movzx  r9d,r15w
0x00e82e55: movzx  r8d,r14w
0x00e82e59: movzx  edx,si
0x00e82e5c: mov    rcx,rdi
0x00e82e5f: call   0x140067f10
0x00e82e64: mov    rcx,rax
0x00e82e67: mov    eax,0xffffffff
0x00e82e6c: test   rcx,rcx
0x00e82e6f: je     0x140e82ec5
0x00e82e71: mov    r9d,0xc
0x00e82e77: mov    r8d,r14d
0x00e82e7a: and    r8d,0x8000000f
0x00e82e81: jge    0x140e82e8d
0x00e82e83: dec    r8d
0x00e82e86: or     r8d,0xfffffff0
0x00e82e8a: inc    r8d
0x00e82e8d: mov    edx,esi
0x00e82e8f: and    edx,0x8000000f
0x00e82e95: jge    0x140e82e9e
0x00e82e97: dec    edx
0x00e82e99: or     edx,0xfffffff0
0x00e82e9c: inc    edx
0x00e82e9e: mov    WORD PTR [rsp+0x28],ax
0x00e82ea3: mov    DWORD PTR [rsp+0x20],eax
0x00e82ea7: call   0x140542e80
0x00e82eac: test   eax,eax
0x00e82eae: je     0x140e82ec5
0x00e82eb0: mov    r8d,0x6
0x00e82eb6: lea    rdx,[rip+0x8ae46f]        # 0x14173132c ; literal="Muddy "
0x00e82ebd: mov    rcx,rbx
0x00e82ec0: call   0x14006fa10
0x00e82ec5: movzx  r9d,r15w
0x00e82ec9: movzx  r8d,r14w
0x00e82ecd: movzx  edx,si
0x00e82ed0: mov    rcx,rdi
0x00e82ed3: call   0x140067f10
0x00e82ed8: test   rax,rax
0x00e82edb: je     0x140e82f3a
0x00e82edd: mov    r8d,r14d
0x00e82ee0: and    r8d,0x8000000f
0x00e82ee7: jge    0x140e82ef3
0x00e82ee9: dec    r8d
0x00e82eec: or     r8d,0xfffffff0
0x00e82ef0: inc    r8d
0x00e82ef3: mov    edx,esi
0x00e82ef5: and    edx,0x8000000f
0x00e82efb: jge    0x140e82f04
0x00e82efd: dec    edx
0x00e82eff: or     edx,0xfffffff0
0x00e82f02: inc    edx
0x00e82f04: mov    WORD PTR [rsp+0x28],0x3
0x00e82f0b: mov    DWORD PTR [rsp+0x20],0xffffffff
0x00e82f13: mov    r9d,0x6
0x00e82f19: mov    rcx,rax
0x00e82f1c: call   0x140542e80
0x00e82f21: test   eax,eax
0x00e82f23: je     0x140e82f3a
0x00e82f25: mov    r8d,0xd
0x00e82f2b: lea    rdx,[rip+0x8ae43e]        # 0x141731370 ; literal="Snow-covered "
0x00e82f32: mov    rcx,rbx
0x00e82f35: call   0x14006fa10
0x00e82f3a: movzx  r9d,r15w
0x00e82f3e: movzx  r8d,r14w
0x00e82f42: movzx  edx,si
0x00e82f45: mov    rcx,rdi
0x00e82f48: call   0x140068010
0x00e82f4d: test   al,al
0x00e82f4f: jns    0x140e82f66
0x00e82f51: mov    r8d,0x6
0x00e82f57: lea    rdx,[rip+0x8ae422]        # 0x141731380 ; literal="Mossy "
0x00e82f5e: mov    rcx,rbx
0x00e82f61: call   0x14006fa10
0x00e82f66: lea    rax,[rbp-0x30]
0x00e82f6a: mov    QWORD PTR [rsp+0x40],rax
0x00e82f6f: lea    rax,[rbp-0x48]
0x00e82f73: mov    QWORD PTR [rsp+0x38],rax
0x00e82f78: lea    rax,[rsp+0x50]
0x00e82f7d: mov    QWORD PTR [rsp+0x30],rax
0x00e82f82: lea    rax,[rbp-0x34]
0x00e82f86: mov    QWORD PTR [rsp+0x28],rax
0x00e82f8b: lea    rax,[rsp+0x5c]
0x00e82f90: mov    QWORD PTR [rsp+0x20],rax
0x00e82f95: movzx  r9d,r15w
0x00e82f99: movzx  r8d,r14w
0x00e82f9d: movzx  edx,si
0x00e82fa0: mov    rcx,rdi
0x00e82fa3: call   0x1414d0c70
0x00e82fa8: cmp    BYTE PTR [rsp+0x58],r12b
0x00e82fad: je     0x140e830e3
0x00e82fb3: movsx  ecx,WORD PTR [rsp+0x54]
0x00e82fb8: sub    ecx,0x1
0x00e82fbb: je     0x140e82fe1
0x00e82fbd: sub    ecx,0x1
0x00e82fc0: je     0x140e82fdd
0x00e82fc2: sub    ecx,0x1
0x00e82fc5: je     0x140e82fd9
0x00e82fc7: sub    ecx,0x1
0x00e82fca: je     0x140e82fd5
0x00e82fcc: cmp    ecx,0x1
0x00e82fcf: jne    0x140e82feb
0x00e82fd1: mov    dl,0xf
0x00e82fd3: jmp    0x140e82fe3
0x00e82fd5: mov    dl,0xf0
0x00e82fd7: jmp    0x140e82fe3
0x00e82fd9: mov    dl,0x2a
0x00e82fdb: jmp    0x140e82fe3
0x00e82fdd: mov    dl,0x2b
0x00e82fdf: jmp    0x140e82fe3
0x00e82fe1: mov    dl,0x2d
0x00e82fe3: mov    rcx,rbx
0x00e82fe6: call   0x1400b9b80
0x00e82feb: mov    eax,r13d
0x00e82fee: cmp    r13d,0x164
0x00e82ff5: ja     0x140e83020
0x00e82ff7: je     0x140e83071
0x00e82ff9: sub    eax,0x19
0x00e82ffc: cmp    eax,0xe9
0x00e83001: ja     0x140e83075
0x00e83003: cdqe
0x00e83005: lea    rdx,[rip+0xffffffffff17cff4]        # 0x140000000
0x00e8300c: movzx  eax,BYTE PTR [rdx+rax*1+0xe83e8c]
0x00e83014: mov    ecx,DWORD PTR [rdx+rax*4+0xe83e84]
0x00e8301b: add    rcx,rdx
0x00e8301e: jmp    rcx
0x00e83020: cmp    eax,0x299
0x00e83025: ja     0x140e83052
0x00e83027: je     0x140e83071
0x00e83029: sub    eax,0x165
0x00e8302e: cmp    eax,0xe8
0x00e83033: ja     0x140e83075
0x00e83035: cdqe
0x00e83037: lea    rdx,[rip+0xffffffffff17cfc2]        # 0x140000000
0x00e8303e: movzx  eax,BYTE PTR [rdx+rax*1+0xe83f80]
0x00e83046: mov    ecx,DWORD PTR [rdx+rax*4+0xe83f78]
0x00e8304d: add    rcx,rdx
0x00e83050: jmp    rcx
0x00e83052: sub    eax,0x29a
0x00e83057: cmp    eax,0xd
0x00e8305a: ja     0x140e83075
0x00e8305c: cdqe
0x00e8305e: lea    rdx,[rip+0xffffffffff17cf9b]        # 0x140000000
0x00e83065: mov    ecx,DWORD PTR [rdx+rax*4+0xe8406c]
0x00e8306c: add    rcx,rdx
0x00e8306f: jmp    rcx
0x00e83071: mov    cl,0x1
0x00e83073: jmp    0x140e83077
0x00e83075: xor    cl,cl
0x00e83077: lea    rax,[rip+0x8ae31a]        # 0x141731398 ; literal="Detailed"
0x00e8307e: lea    rdx,[rip+0x8ae303]        # 0x141731388 ; literal="Sculpted"
0x00e83085: test   cl,cl
0x00e83087: cmove  rdx,rax
0x00e8308b: mov    r8d,0x8
0x00e83091: mov    rcx,rbx
0x00e83094: call   0x14006fa10
0x00e83099: movsx  ecx,WORD PTR [rsp+0x54]
0x00e8309e: sub    ecx,0x1
0x00e830a1: je     0x140e830c7
0x00e830a3: sub    ecx,0x1
0x00e830a6: je     0x140e830c3
0x00e830a8: sub    ecx,0x1
0x00e830ab: je     0x140e830bf
0x00e830ad: sub    ecx,0x1
0x00e830b0: je     0x140e830bb
0x00e830b2: cmp    ecx,0x1
0x00e830b5: jne    0x140e830d1
0x00e830b7: mov    dl,0xf
0x00e830b9: jmp    0x140e830c9
0x00e830bb: mov    dl,0xf0
0x00e830bd: jmp    0x140e830c9
0x00e830bf: mov    dl,0x2a
0x00e830c1: jmp    0x140e830c9
0x00e830c3: mov    dl,0x2b
0x00e830c5: jmp    0x140e830c9
0x00e830c7: mov    dl,0x2d
0x00e830c9: mov    rcx,rbx
0x00e830cc: call   0x1400b9b80
0x00e830d1: mov    r8d,0x1
0x00e830d7: lea    rdx,[rip+0x76565e]        # 0x1415e873c ; literal=" "
0x00e830de: jmp    0x140e832a3
0x00e830e3: lea    eax,[r13-0x1d9]
0x00e830ea: lea    rdx,[rip+0xffffffffff17cf0f]        # 0x140000000
0x00e830f1: cmp    eax,0xdd
0x00e830f6: ja     0x140e8311a
0x00e830f8: cdqe
0x00e830fa: movzx  eax,BYTE PTR [rdx+rax*1+0xe840ac]
0x00e83102: mov    ecx,DWORD PTR [rdx+rax*4+0xe840a4]
0x00e83109: add    rcx,rdx
0x00e8310c: jmp    rcx
0x00e8310e: lea    eax,[r13-0x1d9]
0x00e83115: jmp    0x140e832c0
0x00e8311a: mov    ecx,r13d
0x00e8311d: sub    ecx,0xd7
0x00e83123: je     0x140e83296
0x00e83129: sub    ecx,0x70
0x00e8312c: je     0x140e83296
0x00e83132: sub    ecx,0x4
0x00e83135: je     0x140e83296
0x00e8313b: cmp    ecx,0x69
0x00e8313e: je     0x140e83296
0x00e83144: mov    ecx,r13d
0x00e83147: cmp    r13d,0x144
0x00e8314e: ja     0x140e8319c
0x00e83150: je     0x140e83296
0x00e83156: sub    ecx,0xac
0x00e8315c: je     0x140e83296
0x00e83162: sub    ecx,0x1
0x00e83165: je     0x140e83296
0x00e8316b: cmp    ecx,0x1
0x00e8316e: je     0x140e83296
0x00e83174: lea    eax,[r13-0x109]
0x00e8317b: cmp    eax,0xf5
0x00e83180: ja     0x140e83257
0x00e83186: cdqe
0x00e83188: movzx  eax,BYTE PTR [rdx+rax*1+0xe84194]
0x00e83190: mov    ecx,DWORD PTR [rdx+rax*4+0xe8418c]
0x00e83197: add    rcx,rdx
0x00e8319a: jmp    rcx
0x00e8319c: sub    ecx,0x145
0x00e831a2: cmp    ecx,0x6e
0x00e831a5: ja     0x140e83174
0x00e831a7: movsxd rax,ecx
0x00e831aa: movzx  eax,BYTE PTR [rdx+rax*1+0xe84294]
0x00e831b2: mov    ecx,DWORD PTR [rdx+rax*4+0xe8428c]
0x00e831b9: add    rcx,rdx
0x00e831bc: jmp    rcx
0x00e831be: mov    eax,r13d
0x00e831c1: cmp    r13d,0x164
0x00e831c8: ja     0x140e831ec
0x00e831ca: je     0x140e8322f
0x00e831cc: sub    eax,0x19
0x00e831cf: cmp    eax,0xe9
0x00e831d4: ja     0x140e83233
0x00e831d6: cdqe
0x00e831d8: movzx  eax,BYTE PTR [rdx+rax*1+0xe8430c]
0x00e831e0: mov    ecx,DWORD PTR [rdx+rax*4+0xe84304]
0x00e831e7: add    rcx,rdx
0x00e831ea: jmp    rcx
0x00e831ec: cmp    eax,0x299
0x00e831f1: ja     0x140e83217
0x00e831f3: je     0x140e8322f
0x00e831f5: sub    eax,0x165
0x00e831fa: cmp    eax,0xe8
0x00e831ff: ja     0x140e83233
0x00e83201: cdqe
0x00e83203: movzx  eax,BYTE PTR [rdx+rax*1+0xe84400]
0x00e8320b: mov    ecx,DWORD PTR [rdx+rax*4+0xe843f8]
0x00e83212: add    rcx,rdx
0x00e83215: jmp    rcx
0x00e83217: sub    eax,0x29a
0x00e8321c: cmp    eax,0xd
0x00e8321f: ja     0x140e83233
0x00e83221: cdqe
0x00e83223: mov    ecx,DWORD PTR [rdx+rax*4+0xe844ec]
0x00e8322a: add    rcx,rdx
0x00e8322d: jmp    rcx
0x00e8322f: mov    cl,0x1
0x00e83231: jmp    0x140e83235
0x00e83233: xor    cl,cl
0x00e83235: movzx  r8d,cl
0x00e83239: lea    r8,[r8*2+0x7]
0x00e83241: lea    rax,[rip+0x8ae110]        # 0x141731358 ; literal="Smooth "
0x00e83248: lea    rdx,[rip+0x8ae0f9]        # 0x141731348 ; literal="Straight "
0x00e8324f: test   cl,cl
0x00e83251: cmove  rdx,rax
0x00e83255: jmp    0x140e832a3
0x00e83257: cmp    WORD PTR [rsp+0x50],r12w
0x00e8325d: jne    0x140e832ab
0x00e8325f: xor    edx,edx
0x00e83261: mov    r8d,DWORD PTR [rbp-0x48]
0x00e83265: mov    rcx,rdi
0x00e83268: call   0x1414add70
0x00e8326d: test   rax,rax
0x00e83270: je     0x140e832ab
0x00e83272: lea    rcx,[rax+0x290]
0x00e83279: mov    edx,0x30
0x00e8327e: call   0x140071f90
0x00e83283: test   al,al
0x00e83285: je     0x140e832ab
0x00e83287: mov    r8d,0x8
0x00e8328d: lea    rdx,[rip+0x8ae0cc]        # 0x141731360 ; literal="Exposed "
0x00e83294: jmp    0x140e832a3
0x00e83296: mov    r8d,0xb
0x00e8329c: lea    rdx,[rip+0x8ae095]        # 0x141731338 ; literal="Rough-hewn "
0x00e832a3: mov    rcx,rbx
0x00e832a6: call   0x14006fa10
0x00e832ab: lea    eax,[r13-0x1d9]
0x00e832b2: lea    rdx,[rip+0xffffffffff17cd47]        # 0x140000000
0x00e832b9: cmp    eax,0xdd
0x00e832be: ja     0x140e832f8
0x00e832c0: cdqe
0x00e832c2: movzx  eax,BYTE PTR [rdx+rax*1+0xe8452c]
0x00e832ca: mov    ecx,DWORD PTR [rdx+rax*4+0xe84524]
0x00e832d1: add    rcx,rdx
0x00e832d4: jmp    rcx
0x00e832d6: mov    BYTE PTR [rsp+0x28],0x1
0x00e832db: mov    QWORD PTR [rsp+0x20],rbx
0x00e832e0: movzx  r9d,r15w
0x00e832e4: movzx  r8d,r14w
0x00e832e8: movzx  edx,si
0x00e832eb: mov    rcx,rdi
0x00e832ee: call   0x140a46f20
0x00e832f3: jmp    0x140e833bb
0x00e832f8: mov    eax,r13d
0x00e832fb: cmp    r13d,0x164
0x00e83302: ja     0x140e83326
0x00e83304: je     0x140e83369
0x00e83306: sub    eax,0x19
0x00e83309: cmp    eax,0xe9
0x00e8330e: ja     0x140e83380
0x00e83310: cdqe
0x00e83312: movzx  eax,BYTE PTR [rdx+rax*1+0xe84614]
0x00e8331a: mov    ecx,DWORD PTR [rdx+rax*4+0xe8460c]
0x00e83321: add    rcx,rdx
0x00e83324: jmp    rcx
0x00e83326: cmp    eax,0x299
0x00e8332b: ja     0x140e83351
0x00e8332d: je     0x140e83369
0x00e8332f: sub    eax,0x165
0x00e83334: cmp    eax,0xe8
0x00e83339: ja     0x140e83380
0x00e8333b: cdqe
0x00e8333d: movzx  eax,BYTE PTR [rdx+rax*1+0xe84708]
0x00e83345: mov    ecx,DWORD PTR [rdx+rax*4+0xe84700]
0x00e8334c: add    rcx,rdx
0x00e8334f: jmp    rcx
0x00e83351: sub    eax,0x29a
0x00e83356: cmp    eax,0xd
0x00e83359: ja     0x140e83380
0x00e8335b: cdqe
0x00e8335d: mov    ecx,DWORD PTR [rdx+rax*4+0xe847f4]
0x00e83364: add    rcx,rdx
0x00e83367: jmp    rcx
0x00e83369: mov    r8d,0x3
0x00e8336f: lea    rdx,[rip+0x89dcda]        # 0x141721050 ; literal="Ice"
0x00e83376: mov    rcx,rbx
0x00e83379: call   0x14006fa10
0x00e8337e: jmp    0x140e833bb
0x00e83380: mov    WORD PTR [rsp+0x30],r12w
0x00e83386: mov    BYTE PTR [rsp+0x28],r12b
0x00e8338b: mov    DWORD PTR [rsp+0x20],r12d
0x00e83390: mov    r9d,DWORD PTR [rbp-0x48]
0x00e83394: movzx  r8d,WORD PTR [rsp+0x50]
0x00e8339a: lea    rdx,[rbp+0x0]
0x00e8339e: mov    rcx,rdi
0x00e833a1: call   0x1414d1920
0x00e833a6: lea    rcx,[rbp+0x0]
0x00e833aa: call   0x14052d3c0
0x00e833af: lea    rdx,[rbp+0x0]
0x00e833b3: mov    rcx,rbx
0x00e833b6: call   0x1400b9d10
0x00e833bb: mov    r8d,0x1
0x00e833c1: lea    rdx,[rip+0x765374]        # 0x1415e873c ; literal=" "
0x00e833c8: mov    rcx,rbx
0x00e833cb: call   0x14006fa10
0x00e833d0: cmp    r13d,0x53
0x00e833d4: je     0x140e834be
0x00e833da: mov    ecx,r13d
0x00e833dd: sub    ecx,0x4f
0x00e833e0: je     0x140e834be
0x00e833e6: sub    ecx,0x1
0x00e833e9: je     0x140e834be
0x00e833ef: sub    ecx,0x1
0x00e833f2: je     0x140e834be
0x00e833f8: cmp    ecx,0x1
0x00e833fb: je     0x140e834be
0x00e83401: mov    eax,0x1eb
0x00e83406: cmp    r13w,ax
0x00e8340a: je     0x140e834be
0x00e83410: mov    ecx,r13d
0x00e83413: cmp    r13d,0x164
0x00e8341a: ja     0x140e83438
0x00e8341c: je     0x140e834af
0x00e83422: sub    ecx,0x41
0x00e83425: je     0x140e834af
0x00e8342b: sub    ecx,0x101
0x00e83431: je     0x140e834af
0x00e83433: cmp    ecx,0x1
0x00e83436: jmp    0x140e83443
0x00e83438: sub    ecx,0x1b0
0x00e8343e: je     0x140e834af
0x00e83440: cmp    ecx,0x3a
0x00e83443: je     0x140e834af
0x00e83445: cmp    WORD PTR [rsp+0x50],r12w
0x00e8344b: jne    0x140e834a0
0x00e8344d: xor    edx,edx
0x00e8344f: mov    r8d,DWORD PTR [rbp-0x48]
0x00e83453: mov    rcx,rdi
0x00e83456: call   0x1414add70
0x00e8345b: test   rax,rax
0x00e8345e: je     0x140e83476
0x00e83460: lea    rcx,[rax+0x290]
0x00e83467: mov    edx,0x30
0x00e8346c: call   0x140071f90
0x00e83471: movzx  ecx,al
0x00e83474: jmp    0x140e83478
0x00e83476: xor    cl,cl
0x00e83478: mov    eax,0x7
0x00e8347d: mov    r8d,0x4
0x00e83483: test   cl,cl
0x00e83485: cmove  eax,r8d
0x00e83489: lea    r9,[rip+0x7a95dc]        # 0x14162ca6c ; literal="Wall"
0x00e83490: lea    rdx,[rip+0x8adf41]        # 0x1417313d8 ; literal="Cluster"
0x00e83497: cmove  rdx,r9
0x00e8349b: mov    r8d,eax
0x00e8349e: jmp    0x140e834cb
0x00e834a0: mov    r8d,0x4
0x00e834a6: lea    rdx,[rip+0x7a95bf]        # 0x14162ca6c ; literal="Wall"
0x00e834ad: jmp    0x140e834cb
0x00e834af: mov    r8d,0xd
0x00e834b5: lea    rdx,[rip+0x7a984c]        # 0x14162cd08 ; literal="Fortification"
0x00e834bc: jmp    0x140e834cb
0x00e834be: mov    r8d,0x6
0x00e834c4: lea    rdx,[rip+0x8adf01]        # 0x1417313cc ; literal="Pillar"
0x00e834cb: mov    rcx,rbx
0x00e834ce: call   0x14006fa10
0x00e834d3: nop
0x00e834d4: lea    rcx,[rbp+0x0]
0x00e834d8: call   0x14006f850
0x00e834dd: mov    rcx,QWORD PTR [rbp+0x40]
0x00e834e1: xor    rcx,rsp
0x00e834e4: call   0x141539660
0x00e834e9: add    rsp,0x158
0x00e834f0: pop    r15
0x00e834f2: pop    r14
0x00e834f4: pop    r13
0x00e834f6: pop    r12
0x00e834f8: pop    rdi
0x00e834f9: pop    rsi
0x00e834fa: pop    rbx
0x00e834fb: pop    rbp
0x00e834fc: ret
