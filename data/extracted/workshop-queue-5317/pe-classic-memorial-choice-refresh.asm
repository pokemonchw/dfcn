; classic; PE:6aea11a5:0272d000; 4f833c9d92136e266e56202987dce40845a41990811413c7766fd526a08a0d8f; memorial-choice-refresh; complete unwind owner
0x8d8d50: mov    QWORD PTR [rsp+0x8],rbx
0x8d8d55: mov    QWORD PTR [rsp+0x10],rsi
0x8d8d5a: mov    QWORD PTR [rsp+0x18],rdi
0x8d8d5f: mov    QWORD PTR [rsp+0x20],r14
0x8d8d64: push   rbp
0x8d8d65: mov    rbp,rsp
0x8d8d68: sub    rsp,0x50
0x8d8d6c: mov    rax,QWORD PTR [rip+0xfdf2cd]        # 0x1418b8040
0x8d8d73: xor    rax,rsp
0x8d8d76: mov    QWORD PTR [rbp-0x10],rax
0x8d8d7a: mov    esi,r8d
0x8d8d7d: mov    r14d,edx
0x8d8d80: cmp    DWORD PTR [rcx+0x48],0xd3
0x8d8d87: jne    0x1408d931c
0x8d8d8d: mov    r11d,DWORD PTR [rcx+0x80]
0x8d8d94: mov    r8,QWORD PTR [rip+0x1c3d305]        # 0x1425160a0
0x8d8d9b: mov    rbx,QWORD PTR [rip+0x1c3d2f6]        # 0x142516098
0x8d8da2: sub    r8,rbx
0x8d8da5: sar    r8,0x3
0x8d8da9: test   r8,r8
0x8d8dac: je     0x1408d931c
0x8d8db2: cmp    r11d,0xffffffff
0x8d8db6: je     0x1408d931c
0x8d8dbc: xor    edx,edx
0x8d8dbe: sub    r8d,0x1
0x8d8dc2: js     0x1408d931c
0x8d8dc8: nop    DWORD PTR [rax+rax*1+0x0]
0x8d8dd0: lea    ecx,[r8+rdx*1]
0x8d8dd4: sar    ecx,1
0x8d8dd6: movsxd rax,ecx
0x8d8dd9: mov    r10,QWORD PTR [rbx+rax*8]
0x8d8ddd: cmp    DWORD PTR [r10+0xe0],r11d
0x8d8de4: je     0x1408d8e00
0x8d8de6: lea    eax,[rcx-0x1]
0x8d8de9: cmovle eax,r8d
0x8d8ded: mov    r8d,eax
0x8d8df0: lea    eax,[rcx+0x1]
0x8d8df3: cmovle edx,eax
0x8d8df6: cmp    edx,r8d
0x8d8df9: jle    0x1408d8dd0
0x8d8dfb: jmp    0x1408d931c
0x8d8e00: test   r10,r10
0x8d8e03: je     0x1408d931c
0x8d8e09: mov    r11d,DWORD PTR [r10+0xd8]
0x8d8e10: mov    r8,QWORD PTR [rip+0x1b28621]        # 0x142401438
0x8d8e17: mov    r10,QWORD PTR [rip+0x1b28612]        # 0x142401430
0x8d8e1e: sub    r8,r10
0x8d8e21: sar    r8,0x3
0x8d8e25: test   r8d,r8d
0x8d8e28: je     0x1408d931c
0x8d8e2e: cmp    r11d,0xffffffff
0x8d8e32: je     0x1408d931c
0x8d8e38: xor    edx,edx
0x8d8e3a: sub    r8d,0x1
0x8d8e3e: js     0x1408d8e6a
0x8d8e40: lea    ecx,[rdx+r8*1]
0x8d8e44: sar    ecx,1
0x8d8e46: movsxd rax,ecx
0x8d8e49: mov    rdi,QWORD PTR [r10+rax*8]
0x8d8e4d: cmp    DWORD PTR [rdi+0x130],r11d
0x8d8e54: je     0x1408d8e6c
0x8d8e56: lea    eax,[rcx+0x1]
0x8d8e59: cmovle edx,eax
0x8d8e5c: lea    eax,[rcx-0x1]
0x8d8e5f: cmovle eax,r8d
0x8d8e63: mov    r8d,eax
0x8d8e66: cmp    edx,eax
0x8d8e68: jle    0x1408d8e40
0x8d8e6a: xor    edi,edi
0x8d8e6c: test   rdi,rdi
0x8d8e6f: je     0x1408d931c
0x8d8e75: xor    ebx,ebx
0x8d8e77: lea    rdx,[rip+0x1add50a]        # 0x1423b6388
0x8d8e7e: mov    ecx,DWORD PTR [rdi+0x130]
0x8d8e84: call   0x1400bb380
0x8d8e89: test   rax,rax
0x8d8e8c: je     0x1408d8fb4
0x8d8e92: mov    rax,QWORD PTR [rip+0x1b28f1f]        # 0x142401db8
0x8d8e99: mov    rcx,QWORD PTR [rip+0x1b28f20]        # 0x142401dc0
0x8d8ea0: cmp    rax,rcx
0x8d8ea3: jae    0x1408d8eca
0x8d8ea5: mov    r8,QWORD PTR [rax]
0x8d8ea8: cmp    WORD PTR [r8+0x10c],0x0
0x8d8eb1: jne    0x1408d8ec4
0x8d8eb3: mov    edx,DWORD PTR [rdi+0xc30]
0x8d8eb9: cmp    DWORD PTR [r8+0x108],edx
0x8d8ec0: jne    0x1408d8ec4
0x8d8ec2: inc    ebx
0x8d8ec4: add    rax,0x8
0x8d8ec8: jmp    0x1408d8ea0
0x8d8eca: test   ebx,ebx
0x8d8ecc: jle    0x1408d8fb4
0x8d8ed2: xorps  xmm0,xmm0
0x8d8ed5: movups XMMWORD PTR [rbp-0x30],xmm0
0x8d8ed9: mov    QWORD PTR [rbp-0x20],0x0
0x8d8ee1: mov    QWORD PTR [rbp-0x18],0xf
0x8d8ee9: mov    BYTE PTR [rbp-0x30],0x0
0x8d8eed: cmp    ebx,0x2
0x8d8ef0: jl     0x1408d8f15
0x8d8ef2: lea    rdx,[rbp-0x30]
0x8d8ef6: mov    ecx,ebx
0x8d8ef8: call   0x140542fb0
0x8d8efd: mov    r8d,0xf
0x8d8f03: lea    rdx,[rip+0xe018ce]        # 0x1416da7d8 ; cstring=' slabs engraved'
0x8d8f0a: lea    rcx,[rbp-0x30]
0x8d8f0e: call   0x140070fd0
0x8d8f13: jmp    0x1408d8f41
0x8d8f15: mov    QWORD PTR [rbp-0x20],0xd
0x8d8f1d: movsd  xmm0,QWORD PTR [rip+0xe0187b]        # 0x1416da7a0 ; cstring='Slab engraved'
0x8d8f25: movsd  QWORD PTR [rbp-0x30],xmm0
0x8d8f2a: mov    eax,DWORD PTR [rip+0xe01878]        # 0x1416da7a8 ; cstring='raved'
0x8d8f30: mov    DWORD PTR [rbp-0x28],eax
0x8d8f33: movzx  eax,BYTE PTR [rip+0xe01872]        # 0x1416da7ac ; cstring='d'
0x8d8f3a: mov    BYTE PTR [rbp-0x24],al
0x8d8f3d: mov    BYTE PTR [rbp-0x23],0x0
0x8d8f41: mov    DWORD PTR [rip+0x1d8d8b1],0x1000002        # 0x1426667fc
0x8d8f4b: add    esi,0x2
0x8d8f4e: mov    DWORD PTR [rip+0x1d8d8a0],esi        # 0x1426667f4
0x8d8f54: mov    DWORD PTR [rip+0x1d8d89d],r14d        # 0x1426667f8
0x8d8f5b: xor    r9d,r9d
0x8d8f5e: lea    rdx,[rbp-0x30]
0x8d8f62: lea    rcx,[rip+0x1d8d807]        # 0x142666770
0x8d8f69: call   0x140af0220
0x8d8f6e: nop
0x8d8f6f: mov    rdx,QWORD PTR [rbp-0x18]
0x8d8f73: cmp    rdx,0xf
0x8d8f77: jbe    0x1408d9057
0x8d8f7d: inc    rdx
0x8d8f80: mov    rcx,QWORD PTR [rbp-0x30]
0x8d8f84: mov    rax,rcx
0x8d8f87: cmp    rdx,0x1000
0x8d8f8e: jb     0x1408d9052
0x8d8f94: add    rdx,0x27
0x8d8f98: mov    rcx,QWORD PTR [rcx-0x8]
0x8d8f9c: sub    rax,rcx
0x8d8f9f: add    rax,0xfffffffffffffff8
0x8d8fa3: cmp    rax,0x1f
0x8d8fa7: jbe    0x1408d9052
0x8d8fad: call   QWORD PTR [rip+0xd22b15]        # 0x1415fbac8
0x8d8fb3: int3
0x8d8fb4: mov    DWORD PTR [rip+0x1d8d83e],0x1010006        # 0x1426667fc
0x8d8fbe: add    esi,0x2
0x8d8fc1: mov    DWORD PTR [rip+0x1d8d82d],esi        # 0x1426667f4
0x8d8fc7: mov    DWORD PTR [rip+0x1d8d82a],r14d        # 0x1426667f8
0x8d8fce: xorps  xmm0,xmm0
0x8d8fd1: movups XMMWORD PTR [rbp-0x30],xmm0
0x8d8fd5: mov    ecx,0x20
0x8d8fda: call   0x140071d90
0x8d8fdf: mov    QWORD PTR [rbp-0x30],rax
0x8d8fe3: movdqa xmm0,XMMWORD PTR [rip+0xecd445]        # 0x1417a6430
0x8d8feb: movdqu XMMWORD PTR [rbp-0x20],xmm0
0x8d8ff0: movups xmm0,XMMWORD PTR [rip+0xe017b9]        # 0x1416da7b0 ; vector='No slabs engrave'
0x8d8ff7: movups XMMWORD PTR [rax],xmm0
0x8d8ffa: movzx  ecx,BYTE PTR [rip+0xe017bf]        # 0x1416da7c0 ; cstring='d'
0x8d9001: mov    BYTE PTR [rax+0x10],cl
0x8d9004: mov    BYTE PTR [rax+0x11],0x0
0x8d9008: xor    r9d,r9d
0x8d900b: lea    rdx,[rbp-0x30]
0x8d900f: lea    rcx,[rip+0x1d8d75a]        # 0x142666770
0x8d9016: call   0x140af0220
0x8d901b: nop
0x8d901c: mov    rdx,QWORD PTR [rbp-0x18]
0x8d9020: cmp    rdx,0xf
0x8d9024: jbe    0x1408d9057
0x8d9026: inc    rdx
0x8d9029: mov    rcx,QWORD PTR [rbp-0x30]
0x8d902d: mov    rax,rcx
0x8d9030: cmp    rdx,0x1000
0x8d9037: jb     0x1408d9052
0x8d9039: add    rdx,0x27
0x8d903d: mov    rcx,QWORD PTR [rcx-0x8]
0x8d9041: sub    rax,rcx
0x8d9044: add    rax,0xfffffffffffffff8
0x8d9048: cmp    rax,0x1f
0x8d904c: ja     0x1408d92d1
0x8d9052: call   0x14154de20
0x8d9057: inc    r14d
0x8d905a: mov    rcx,rdi
0x8d905d: call   0x1413e8e20
0x8d9062: movzx  ebx,al
0x8d9065: mov    rcx,rdi
0x8d9068: call   0x1413e8ee0
0x8d906d: xorps  xmm0,xmm0
0x8d9070: movups XMMWORD PTR [rbp-0x30],xmm0
0x8d9074: test   bl,bl
0x8d9076: jne    0x1408d9224
0x8d907c: test   al,al
0x8d907e: jne    0x1408d91d5
0x8d9084: mov    rax,QWORD PTR [rdi+0x380]
0x8d908b: test   rax,rax
0x8d908e: je     0x1408d917c
0x8d9094: test   BYTE PTR [rax+0x1c],0x1
0x8d9098: mov    DWORD PTR [rip+0x1d8d756],esi        # 0x1426667f4
0x8d909e: mov    DWORD PTR [rip+0x1d8d753],r14d        # 0x1426667f8
0x8d90a5: je     0x1408d9130
0x8d90ab: mov    DWORD PTR [rip+0x1d8d747],0x1010004        # 0x1426667fc
0x8d90b5: movdqa xmm1,XMMWORD PTR [rip+0xecd2b3]        # 0x1417a6370
0x8d90bd: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x8d90c2: mov    eax,DWORD PTR [rip+0xe0148c]        # 0x1416da554 ; cstring='Ghost'
0x8d90c8: mov    DWORD PTR [rbp-0x30],eax
0x8d90cb: movzx  eax,BYTE PTR [rip+0xe01486]        # 0x1416da558 ; cstring='t'
0x8d90d2: mov    BYTE PTR [rbp-0x2c],al
0x8d90d5: mov    BYTE PTR [rbp-0x2b],bl
0x8d90d8: xor    r9d,r9d
0x8d90db: lea    rdx,[rbp-0x30]
0x8d90df: lea    rcx,[rip+0x1d8d68a]        # 0x142666770
0x8d90e6: call   0x140af0220
0x8d90eb: nop
0x8d90ec: mov    rdx,QWORD PTR [rbp-0x18]
0x8d90f0: cmp    rdx,0xf
0x8d90f4: jbe    0x1408d931c
0x8d90fa: inc    rdx
0x8d90fd: mov    rcx,QWORD PTR [rbp-0x30]
0x8d9101: cmp    rdx,0x1000
0x8d9108: mov    rax,rcx
0x8d910b: jb     0x1408d9126
0x8d910d: add    rdx,0x27
0x8d9111: mov    rcx,QWORD PTR [rcx-0x8]
0x8d9115: sub    rax,rcx
0x8d9118: add    rax,0xfffffffffffffff8
0x8d911c: cmp    rax,0x1f
0x8d9120: ja     0x1408d92d1
0x8d9126: call   0x14154de20
0x8d912b: jmp    0x1408d931c
0x8d9130: mov    DWORD PTR [rip+0x1d8d6c2],0x1010006        # 0x1426667fc
0x8d913a: mov    ecx,0x20
0x8d913f: call   0x140071d90
0x8d9144: mov    QWORD PTR [rbp-0x30],rax
0x8d9148: movdqa xmm0,XMMWORD PTR [rip+0xecd2d0]        # 0x1417a6420
0x8d9150: movdqu XMMWORD PTR [rbp-0x20],xmm0
0x8d9155: movups xmm0,XMMWORD PTR [rip+0xe013c4]        # 0x1416da520 ; vector='Not memorialized'
0x8d915c: movups XMMWORD PTR [rax],xmm0
0x8d915f: mov    BYTE PTR [rax+0x10],0x0
0x8d9163: xor    r9d,r9d
0x8d9166: lea    rdx,[rbp-0x30]
0x8d916a: lea    rcx,[rip+0x1d8d5ff]        # 0x142666770
0x8d9171: call   0x140af0220
0x8d9176: nop
0x8d9177: jmp    0x1408d9313
0x8d917c: mov    DWORD PTR [rip+0x1d8d676],0x1010006        # 0x1426667fc
0x8d9186: mov    DWORD PTR [rip+0x1d8d668],esi        # 0x1426667f4
0x8d918c: mov    DWORD PTR [rip+0x1d8d665],r14d        # 0x1426667f8
0x8d9193: mov    ecx,0x20
0x8d9198: call   0x140071d90
0x8d919d: mov    QWORD PTR [rbp-0x30],rax
0x8d91a1: movdqa xmm0,XMMWORD PTR [rip+0xecd277]        # 0x1417a6420
0x8d91a9: movdqu XMMWORD PTR [rbp-0x20],xmm0
0x8d91ae: movups xmm0,XMMWORD PTR [rip+0xe0136b]        # 0x1416da520 ; vector='Not memorialized'
0x8d91b5: movups XMMWORD PTR [rax],xmm0
0x8d91b8: mov    BYTE PTR [rax+0x10],0x0
0x8d91bc: xor    r9d,r9d
0x8d91bf: lea    rdx,[rbp-0x30]
0x8d91c3: lea    rcx,[rip+0x1d8d5a6]        # 0x142666770
0x8d91ca: call   0x140af0220
0x8d91cf: nop
0x8d91d0: jmp    0x1408d9313
0x8d91d5: mov    DWORD PTR [rip+0x1d8d61d],0x1010002        # 0x1426667fc
0x8d91df: mov    DWORD PTR [rip+0x1d8d60f],esi        # 0x1426667f4
0x8d91e5: mov    DWORD PTR [rip+0x1d8d60c],r14d        # 0x1426667f8
0x8d91ec: movdqa xmm1,XMMWORD PTR [rip+0xecd1ac]        # 0x1417a63a0
0x8d91f4: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x8d91f9: movabs rax,0x6465626d6f746e45 ; inline='Entombed'
0x8d9203: mov    QWORD PTR [rbp-0x30],rax
0x8d9207: mov    BYTE PTR [rbp-0x28],0x0
0x8d920b: xor    r9d,r9d
0x8d920e: lea    rdx,[rbp-0x30]
0x8d9212: lea    rcx,[rip+0x1d8d557]        # 0x142666770
0x8d9219: call   0x140af0220
0x8d921e: nop
0x8d921f: jmp    0x1408d90ec
0x8d9224: mov    DWORD PTR [rip+0x1d8d5ce],0x1010002        # 0x1426667fc
0x8d922e: mov    DWORD PTR [rip+0x1d8d5c0],esi        # 0x1426667f4
0x8d9234: mov    DWORD PTR [rip+0x1d8d5bd],r14d        # 0x1426667f8
0x8d923b: test   al,al
0x8d923d: je     0x1408d92d8
0x8d9243: mov    ecx,0x20
0x8d9248: call   0x140071d90
0x8d924d: mov    QWORD PTR [rbp-0x30],rax
0x8d9251: movdqa xmm0,XMMWORD PTR [rip+0xecd257]        # 0x1417a64b0
0x8d9259: movdqu XMMWORD PTR [rbp-0x20],xmm0
0x8d925e: movups xmm0,XMMWORD PTR [rip+0xe0150b]        # 0x1416da770 ; vector='Entombed and mem'
0x8d9265: movups XMMWORD PTR [rax],xmm0
0x8d9268: movsd  xmm0,QWORD PTR [rip+0xe01510]        # 0x1416da780 ; cstring='orialized'
0x8d9270: movsd  QWORD PTR [rax+0x10],xmm0
0x8d9275: movzx  ecx,BYTE PTR [rip+0xe0150c]        # 0x1416da788 ; cstring='d'
0x8d927c: mov    BYTE PTR [rax+0x18],cl
0x8d927f: mov    BYTE PTR [rax+0x19],0x0
0x8d9283: xor    r9d,r9d
0x8d9286: lea    rdx,[rbp-0x30]
0x8d928a: lea    rcx,[rip+0x1d8d4df]        # 0x142666770
0x8d9291: call   0x140af0220
0x8d9296: nop
0x8d9297: mov    rdx,QWORD PTR [rbp-0x18]
0x8d929b: cmp    rdx,0xf
0x8d929f: jbe    0x1408d931c
0x8d92a1: inc    rdx
0x8d92a4: mov    rcx,QWORD PTR [rbp-0x30]
0x8d92a8: mov    rax,rcx
0x8d92ab: cmp    rdx,0x1000
0x8d92b2: jb     0x1408d9126
0x8d92b8: add    rdx,0x27
0x8d92bc: mov    rcx,QWORD PTR [rcx-0x8]
0x8d92c0: sub    rax,rcx
0x8d92c3: add    rax,0xfffffffffffffff8
0x8d92c7: cmp    rax,0x1f
0x8d92cb: jbe    0x1408d9126
0x8d92d1: call   QWORD PTR [rip+0xd227f1]        # 0x1415fbac8
0x8d92d7: int3
0x8d92d8: movdqa xmm1,XMMWORD PTR [rip+0xecd100]        # 0x1417a63e0
0x8d92e0: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x8d92e5: movsd  xmm0,QWORD PTR [rip+0xe014a3]        # 0x1416da790 ; cstring='Memorialized'
0x8d92ed: movsd  QWORD PTR [rbp-0x30],xmm0
0x8d92f2: mov    eax,DWORD PTR [rip+0xe014a0]        # 0x1416da798 ; cstring='ized'
0x8d92f8: mov    DWORD PTR [rbp-0x28],eax
0x8d92fb: mov    BYTE PTR [rbp-0x24],0x0
0x8d92ff: xor    r9d,r9d
0x8d9302: lea    rdx,[rbp-0x30]
0x8d9306: lea    rcx,[rip+0x1d8d463]        # 0x142666770
0x8d930d: call   0x140af0220
0x8d9312: nop
0x8d9313: lea    rcx,[rbp-0x30]
0x8d9317: call   0x140070e10
0x8d931c: mov    rcx,QWORD PTR [rbp-0x10]
0x8d9320: xor    rcx,rsp
0x8d9323: call   0x14154de00
0x8d9328: mov    rbx,QWORD PTR [rsp+0x60]
0x8d932d: mov    rsi,QWORD PTR [rsp+0x68]
0x8d9332: mov    rdi,QWORD PTR [rsp+0x70]
0x8d9337: mov    r14,QWORD PTR [rsp+0x78]
0x8d933c: add    rsp,0x50
0x8d9340: pop    rbp
0x8d9341: ret
