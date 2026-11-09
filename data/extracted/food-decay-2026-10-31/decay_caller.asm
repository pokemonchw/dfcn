1408b3170: mov    QWORD PTR [rsp+0x10],rbx
1408b3175: mov    QWORD PTR [rsp+0x18],rsi
1408b317a: mov    QWORD PTR [rsp+0x20],rdi
1408b317f: push   rbp
1408b3180: push   r12
1408b3182: push   r13
1408b3184: push   r14
1408b3186: push   r15
1408b3188: lea    rbp,[rsp-0x50]
1408b318d: sub    rsp,0x150
1408b3194: mov    rax,QWORD PTR [rip+0xfe8ea5]        # 0x14189c040
1408b319b: xor    rax,rsp
1408b319e: mov    QWORD PTR [rbp+0x40],rax
1408b31a2: mov    rdi,rcx
1408b31a5: mov    QWORD PTR [rbp-0x78],rcx
1408b31a9: cmp    BYTE PTR [rip+0x1d974c4],0x0        # 0x14264a674
1408b31b0: jne    0x1408b9175
1408b31b6: mov    eax,DWORD PTR [rip+0x1add40c]        # 0x1423905c8
1408b31bc: and    eax,0xfffffffd
1408b31bf: or     eax,0x1
1408b31c2: mov    DWORD PTR [rip+0x1add400],eax        # 0x1423905c8
1408b31c8: mov    edx,0xffffffff
1408b31cd: lea    r12,[rip+0xfee3fc]        # 0x1418a15d0
1408b31d4: mov    rcx,r12
1408b31d7: call   0x14040b5e0
1408b31dc: lea    rdx,[rip+0xd52085]        # 0x141605268
1408b31e3: lea    rcx,[rbp-0x50]
1408b31e7: call   0x140068150
1408b31ec: nop
1408b31ed: lea    rcx,[rbp-0x50]
1408b31f1: call   0x140283830
1408b31f6: nop
1408b31f7: lea    rcx,[rbp-0x50]
1408b31fb: call   0x140067e30
1408b3200: cmp    BYTE PTR [rdi+0x198],0x0
1408b3207: jne    0x1408b326f
1408b3209: mov    rcx,QWORD PTR [rip+0x1c38948]        # 0x1424ebb58
1408b3210: add    rcx,0x483b0
1408b3217: call   0x14006ee50
1408b321c: sub    eax,0x1
1408b321f: movsxd rbx,eax
1408b3222: js     0x1408b3268
1408b3224: nop    DWORD PTR [rax+0x0]
1408b3228: nop    DWORD PTR [rax+rax*1+0x0]
1408b3230: mov    rax,QWORD PTR [rip+0x1c38921]        # 0x1424ebb58
1408b3237: mov    rcx,QWORD PTR [rax+0x483b0]
1408b323e: mov    rcx,QWORD PTR [rcx+rbx*8]
1408b3242: cmp    DWORD PTR [rcx+0x2a8],0x0
1408b3249: jle    0x1408b3262
1408b324b: mov    rdx,QWORD PTR [rcx+0x2a0]
1408b3252: movzx  eax,BYTE PTR [rdx]
1408b3255: test   al,0x1
1408b3257: je     0x1408b3262
1408b3259: and    al,0xfe
1408b325b: mov    BYTE PTR [rdx],al
1408b325d: call   0x1410821f0
1408b3262: sub    rbx,0x1
1408b3266: jns    0x1408b3230
1408b3268: mov    BYTE PTR [rdi+0x198],0x1
1408b326f: mov    eax,DWORD PTR [rip+0xfe904f]        # 0x14189c2c4
1408b3275: cmp    BYTE PTR [rip+0x1ae6f82],0x0        # 0x14239a1fe
1408b327c: je     0x1408b33dd
1408b3282: cmp    eax,0x4
1408b3285: je     0x1408b33dd
1408b328b: mov    eax,DWORD PTR [rip+0x1ae6f6f]        # 0x14239a200
1408b3291: test   eax,eax
1408b3293: jle    0x1408b32a2
1408b3295: dec    eax
1408b3297: mov    DWORD PTR [rip+0x1ae6f63],eax        # 0x14239a200
1408b329d: jmp    0x1408b9175
1408b32a2: lea    rdx,[rip+0xe0bb2f]        # 0x1416bedd8
1408b32a9: lea    rcx,[rbp-0x20]
1408b32ad: call   0x140068150
1408b32b2: nop
1408b32b3: lea    rdx,[rbp-0x20]
1408b32b7: mov    ecx,DWORD PTR [rip+0xffad0f]        # 0x1418adfcc
1408b32bd: call   0x14052c130
1408b32c2: lea    rdx,[rip+0x1d8b6d7]        # 0x14263e9a0
1408b32c9: lea    rcx,[rbp+0x0]
1408b32cd: call   0x14006f5d0
1408b32d2: nop
1408b32d3: lea    rcx,[rbp+0x20]
1408b32d7: call   0x14006f690
1408b32dc: nop
1408b32dd: lea    rdx,[rip+0xd52abc]        # 0x141605da0
1408b32e4: lea    rcx,[rbp-0x50]
1408b32e8: call   0x140068150
1408b32ed: nop
1408b32ee: mov    DWORD PTR [rsp+0x38],0x3
1408b32f6: lea    rax,[rbp+0x20]
1408b32fa: mov    QWORD PTR [rsp+0x30],rax
1408b32ff: lea    rax,[rbp+0x0]
1408b3303: mov    QWORD PTR [rsp+0x28],rax
1408b3308: lea    rax,[rbp-0x20]
1408b330c: mov    QWORD PTR [rsp+0x20],rax
1408b3311: lea    r9,[rip+0x1ae7038]        # 0x14239a350
1408b3318: lea    r8,[rbp-0x50]
1408b331c: lea    rdx,[rip+0x1ae6ee5]        # 0x14239a208
1408b3323: mov    rcx,r12
1408b3326: call   0x1407b4870
1408b332b: nop
1408b332c: lea    rcx,[rbp-0x50]
1408b3330: call   0x140067e30
1408b3335: cmp    DWORD PTR [rip+0x1ae7014],0x33        # 0x14239a350
1408b333c: jne    0x1408b33bb
1408b333e: mov    r8b,0x1
1408b3341: lea    rdx,[rbp-0x20]
1408b3345: mov    rcx,r12
1408b3348: call   0x140ace5b0
1408b334d: lea    rdx,[rip+0xd4a3cc]        # 0x1415fd720
1408b3354: lea    rcx,[rbp-0x50]
1408b3358: call   0x140068150
1408b335d: nop
1408b335e: lea    rdx,[rbp-0x50]
1408b3362: mov    rcx,r12
1408b3365: call   0x140ace340
1408b336a: nop
1408b336b: lea    rcx,[rbp-0x50]
1408b336f: call   0x140067e30
1408b3374: mov    eax,DWORD PTR [rip+0xffac52]        # 0x1418adfcc
1408b337a: inc    eax
1408b337c: mov    DWORD PTR [rip+0xffac4a],eax        # 0x1418adfcc
1408b3382: cmp    eax,0x4
1408b3385: jl     0x1408b3391
1408b3387: mov    DWORD PTR [rip+0xffac3b],0x1        # 0x1418adfcc
1408b3391: mov    BYTE PTR [rip+0x1ae6e66],0x0        # 0x14239a1fe
1408b3398: mov    BYTE PTR [rip+0x1ae7011],0x0        # 0x14239a3b0
1408b339f: mov    edx,0x6
1408b33a4: lea    rcx,[rip+0x1add8dd]        # 0x142390c88
1408b33ab: call   0x140071f90
1408b33b0: test   al,al
1408b33b2: je     0x1408b33bb
1408b33b4: mov    BYTE PTR [rip+0x187e7a3],0x1        # 0x142131b5e
1408b33bb: lea    rcx,[rbp+0x20]
1408b33bf: call   0x140067e30
1408b33c4: nop
1408b33c5: lea    rcx,[rbp+0x0]
1408b33c9: call   0x140067e30
1408b33ce: nop
1408b33cf: lea    rcx,[rbp-0x20]
1408b33d3: call   0x140067e30
1408b33d8: jmp    0x1408b9175
1408b33dd: cmp    BYTE PTR [rip+0x1ae6fcc],0x0        # 0x14239a3b0
1408b33e4: je     0x1408b3422
1408b33e6: cmp    eax,0x4
1408b33e9: je     0x1408b3422
1408b33eb: lea    rdx,[rip+0x1ae6fc6]        # 0x14239a3b8
1408b33f2: lea    rcx,[rip+0x1b1e0f7]        # 0x1423d14f0
1408b33f9: call   0x141445340
1408b33fe: lea    rcx,[rip+0x1ae6fb3]        # 0x14239a3b8
1408b3405: call   0x14006f370
1408b340a: cmp    DWORD PTR [rip+0x1ae6ffc],eax        # 0x14239a40c
1408b3410: jl     0x1408b9175
1408b3416: mov    BYTE PTR [rip+0x1ae6f93],0x0        # 0x14239a3b0
1408b341d: jmp    0x1408b9175
1408b3422: cmp    BYTE PTR [rip+0xff418f],0x0        # 0x1418a75b8
1408b3429: je     0x1408b3437
1408b342b: lea    rcx,[rip+0xff4186]        # 0x1418a75b8
1408b3432: call   0x1401f1e00
1408b3437: cmp    BYTE PTR [rip+0x1c34c44],0x0        # 0x1424e8082
1408b343e: je     0x1408b344f
1408b3440: mov    rcx,rdi
1408b3443: call   0x1408bf100
1408b3448: mov    BYTE PTR [rip+0x1c34c33],0x0        # 0x1424e8082
1408b344f: call   0x1402839d0
1408b3454: cmp    BYTE PTR [rip+0x1300254],0x0        # 0x141bb36af
1408b345b: je     0x1408b3464
1408b345d: mov    BYTE PTR [rip+0x187e6fa],0x0        # 0x142131b5e
1408b3464: cmp    BYTE PTR [rip+0x1add16a],0x0        # 0x1423905d5
1408b346b: je     0x1408b347d
1408b346d: cmp    BYTE PTR [rip+0x1add15f],0x0        # 0x1423905d3
1408b3474: jne    0x1408b347d
1408b3476: mov    BYTE PTR [rip+0xff9a87],0x0        # 0x1418acf04
1408b347d: cmp    BYTE PTR [rip+0xff466c],0x0        # 0x1418a7af0
1408b3484: je     0x1408b3492
1408b3486: lea    rcx,[rip+0xff4663]        # 0x1418a7af0
1408b348d: call   0x140233e50
1408b3492: cmp    BYTE PTR [rip+0xff3e07],0x0        # 0x1418a72a0
1408b3499: je     0x1408b34c2
1408b349b: lea    r8,[rsp+0x40]
1408b34a0: lea    rdx,[rsp+0x58]
1408b34a5: mov    rcx,r12
1408b34a8: call   0x14041f640
1408b34ad: mov    r8d,DWORD PTR [rsp+0x40]
1408b34b2: mov    edx,DWORD PTR [rsp+0x58]
1408b34b6: lea    rcx,[rip+0xff3de3]        # 0x1418a72a0
1408b34bd: call   0x1401e5640
1408b34c2: mov    ecx,DWORD PTR [rip+0xff5ebc]        # 0x1418a9384
1408b34c8: mov    edi,0x64
1408b34cd: mov    r15d,0x1
1408b34d3: sub    ecx,0x1f
1408b34d6: je     0x1408b34eb
1408b34d8: sub    ecx,r15d
1408b34db: je     0x1408b34eb
1408b34dd: sub    ecx,r15d
1408b34e0: je     0x1408b34eb
1408b34e2: cmp    ecx,r15d
1408b34e5: jne    0x1408b3722
1408b34eb: cmp    DWORD PTR [rip+0x1b1a33e],0x0        # 0x1423cd830
1408b34f2: jle    0x1408b3504
1408b34f4: mov    rax,QWORD PTR [rip+0x1b1a32d]        # 0x1423cd828
1408b34fb: test   BYTE PTR [rax],r15b
1408b34fe: jne    0x1408b3722
1408b3504: xor    edx,edx
1408b3506: lea    rcx,[rip+0x1b1a263]        # 0x1423cd770
1408b350d: call   0x140071f90
1408b3512: test   al,al
1408b3514: je     0x1408b3722
1408b351a: cmp    BYTE PTR [rip+0xfee1b7],0x0        # 0x1418a16d8
1408b3521: jne    0x1408b3542
1408b3523: cmp    BYTE PTR [rip+0xfee1af],0x0        # 0x1418a16d9
1408b352a: jne    0x1408b3542
1408b352c: cmp    BYTE PTR [rip+0xfee1a7],0x0        # 0x1418a16da
1408b3533: jne    0x1408b3542
1408b3535: cmp    BYTE PTR [rip+0xfee19f],0x0        # 0x1418a16db
1408b353c: je     0x1408b3722
1408b3542: cmp    BYTE PTR [rip+0x1add08c],0x0        # 0x1423905d5
1408b3549: je     0x1408b3718
1408b354f: cmp    BYTE PTR [rip+0x1add078],0x0        # 0x1423905ce
1408b3556: je     0x1408b3718
1408b355c: lea    r8,[rsp+0x68]
1408b3561: lea    rdx,[rsp+0x78]
1408b3566: lea    rcx,[rip+0x1d96e83]        # 0x14264a3f0
1408b356d: call   0x1400bb340
1408b3572: lea    r8,[rsp+0x60]
1408b3577: lea    rdx,[rsp+0x50]
1408b357c: lea    rcx,[rip+0x1d96e6d]        # 0x14264a3f0
1408b3583: call   0x14014d5d0
1408b3588: lea    r8,[rsp+0x58]
1408b358d: lea    rdx,[rsp+0x40]
1408b3592: mov    rcx,r12
1408b3595: call   0x14041f640
1408b359a: mov    r9d,DWORD PTR [rsp+0x40]
1408b359f: lea    r8d,[r9+0x1c]
1408b35a3: mov    r10d,DWORD PTR [rsp+0x58]
1408b35a8: lea    eax,[r9+r10*1]
1408b35ac: cdq
1408b35ad: sub    eax,edx
1408b35af: sar    eax,1
1408b35b1: lea    ecx,[rax-0x18]
1408b35b4: mov    eax,ecx
1408b35b6: sub    eax,r8d
1408b35b9: lea    ebx,[r8+0xc]
1408b35bd: cmp    eax,0xc
1408b35c0: cmovge ebx,ecx
1408b35c3: add    ebx,0x2a
1408b35c6: lea    eax,[rbx+0x50]
1408b35c9: cmp    eax,r10d
1408b35cc: jle    0x1408b35d2
1408b35ce: lea    ebx,[r10-0x50]
1408b35d2: cmp    ebx,r9d
1408b35d5: cmovl  ebx,r9d
1408b35d9: cmp    BYTE PTR [rip+0xfee06c],0x0        # 0x1418a164c
1408b35e0: je     0x1408b3722
1408b35e6: lea    r8,[rsp+0x48]
1408b35eb: lea    rdx,[rsp+0x70]
1408b35f0: lea    rcx,[rip+0x1adcc99]        # 0x142390290
1408b35f7: call   0x14014d6f0
1408b35fc: lea    edx,[rbx+0x2d]
1408b35ff: mov    eax,DWORD PTR [rsp+0x70]
1408b3603: imul   edx,eax
1408b3606: add    edx,0x2
1408b3609: add    ebx,0x45
1408b360c: imul   ebx,eax
1408b360f: sub    ebx,0x3
1408b3612: mov    r8d,DWORD PTR [rsp+0x50]
1408b3617: cmp    r8d,edx
1408b361a: jg     0x1408b3621
1408b361c: mov    ebx,r15d
1408b361f: jmp    0x1408b364e
1408b3621: cmp    r8d,ebx
1408b3624: jl     0x1408b362a
1408b3626: mov    ebx,edi
1408b3628: jmp    0x1408b364e
1408b362a: lea    eax,[rax+rax*2]
1408b362d: lea    ecx,[rax*8-0x3]
1408b3634: sub    r8d,edx
1408b3637: imul   eax,r8d,0x63
1408b363b: cdq
1408b363c: idiv   ecx
1408b363e: inc    eax
1408b3640: mov    ebx,r15d
1408b3643: cmp    eax,r15d
1408b3646: cmovge ebx,eax
1408b3649: cmp    ebx,edi
1408b364b: cmovg  ebx,edi
1408b364e: cmp    BYTE PTR [rip+0xfee083],0x0        # 0x1418a16d8
1408b3655: je     0x1408b3680
1408b3657: cmp    DWORD PTR [rip+0x1ae699b],ebx        # 0x142399ff8
1408b365d: je     0x1408b367a
1408b365f: cmp    WORD PTR [rip+0x1d97491],0x2        # 0x14264aaf8
1408b3667: jge    0x1408b367a
1408b3669: mov    edx,0x2
1408b366e: lea    rcx,[rip+0x1d96d7b]        # 0x14264a3f0
1408b3675: call   0x140ae7c00
1408b367a: mov    DWORD PTR [rip+0x1ae6978],ebx        # 0x142399ff8
1408b3680: cmp    BYTE PTR [rip+0xfee052],0x0        # 0x1418a16d9
1408b3687: je     0x1408b36b2
1408b3689: cmp    DWORD PTR [rip+0x1ae696d],ebx        # 0x142399ffc
1408b368f: je     0x1408b36ac
1408b3691: cmp    WORD PTR [rip+0x1d9745f],0x2        # 0x14264aaf8
1408b3699: jge    0x1408b36ac
1408b369b: mov    edx,0x2
1408b36a0: lea    rcx,[rip+0x1d96d49]        # 0x14264a3f0
1408b36a7: call   0x140ae7c00
1408b36ac: mov    DWORD PTR [rip+0x1ae694a],ebx        # 0x142399ffc
1408b36b2: cmp    BYTE PTR [rip+0xfee021],0x0        # 0x1418a16da
1408b36b9: je     0x1408b36e4
1408b36bb: cmp    DWORD PTR [rip+0x1ae693f],ebx        # 0x14239a000
1408b36c1: je     0x1408b36de
1408b36c3: cmp    WORD PTR [rip+0x1d9742d],0x2        # 0x14264aaf8
1408b36cb: jge    0x1408b36de
1408b36cd: mov    edx,0x2
1408b36d2: lea    rcx,[rip+0x1d96d17]        # 0x14264a3f0
1408b36d9: call   0x140ae7c00
1408b36de: mov    DWORD PTR [rip+0x1ae691c],ebx        # 0x14239a000
1408b36e4: cmp    BYTE PTR [rip+0xfedff0],0x0        # 0x1418a16db
1408b36eb: je     0x1408b3722
1408b36ed: cmp    DWORD PTR [rip+0x1ae6911],ebx        # 0x14239a004
1408b36f3: je     0x1408b3710
1408b36f5: cmp    WORD PTR [rip+0x1d973fb],0x2        # 0x14264aaf8
1408b36fd: jge    0x1408b3710
1408b36ff: mov    edx,0x2
1408b3704: lea    rcx,[rip+0x1d96ce5]        # 0x14264a3f0
1408b370b: call   0x140ae7c00
1408b3710: mov    DWORD PTR [rip+0x1ae68ee],ebx        # 0x14239a004
1408b3716: jmp    0x1408b3722
1408b3718: mov    DWORD PTR [rip+0xfedfb6],0x0        # 0x1418a16d8
1408b3722: cmp    BYTE PTR [rip+0xff3b4f],0x0        # 0x1418a7278
1408b3729: je     0x1408b380c
1408b372f: cmp    BYTE PTR [rip+0xff3b4a],0x0        # 0x1418a7280
1408b3736: je     0x1408b380c
1408b373c: cmp    BYTE PTR [rip+0x1adce92],0x0        # 0x1423905d5
1408b3743: je     0x1408b3805
1408b3749: cmp    BYTE PTR [rip+0x1adce7e],0x0        # 0x1423905ce
1408b3750: je     0x1408b3805
1408b3756: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b375e: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b3766: lea    r8,[rsp+0x40]
1408b376b: lea    rdx,[rsp+0x50]
1408b3770: lea    rcx,[rip+0x1d96c79]        # 0x14264a3f0
1408b3777: call   0x1400bb340
1408b377c: lea    r8,[rsp+0x48]
1408b3781: lea    rdx,[rsp+0x60]
1408b3786: mov    rcx,r12
1408b3789: call   0x14041f640
1408b378e: mov    ecx,DWORD PTR [rip+0x1b19ff4]        # 0x1423cd788
1408b3794: add    ecx,0xffffffec
1408b3797: mov    eax,0x2aaaaaab
1408b379c: imul   ecx
1408b379e: mov    esi,edx
1408b37a0: shr    esi,0x1f
1408b37a3: add    esi,edx
1408b37a5: lea    rcx,[rip+0x1ae6834]        # 0x142399fe0
1408b37ac: call   0x14006ee50
1408b37b1: mov    rdi,rax
1408b37b4: lea    ecx,[rsi+rsi*2]
1408b37b7: lea    ebx,[rcx*2+0x9]
1408b37be: lea    rcx,[rbp-0x20]
1408b37c2: call   0x1400bb360
1408b37c7: lea    r9d,[rdi+0xf]
1408b37cb: mov    DWORD PTR [rsp+0x30],ebx
1408b37cf: mov    DWORD PTR [rsp+0x28],0xc
1408b37d7: mov    DWORD PTR [rsp+0x20],esi
1408b37db: xor    r8d,r8d
1408b37de: mov    edx,DWORD PTR [rip+0xff3a98]        # 0x1418a727c
1408b37e4: lea    rcx,[rbp-0x20]
1408b37e8: call   0x1400bb380
1408b37ed: mov    edx,DWORD PTR [rsp+0x40]
1408b37f1: lea    rcx,[rbp-0x20]
1408b37f5: call   0x14140f200
1408b37fa: mov    eax,DWORD PTR [rbp-0x20]
1408b37fd: mov    DWORD PTR [rip+0xff3a79],eax        # 0x1418a727c
1408b3803: jmp    0x1408b380c
1408b3805: mov    BYTE PTR [rip+0xff3a74],0x0        # 0x1418a7280
1408b380c: mov    r14d,0xb
1408b3812: mov    r13d,0x12
1408b3818: cmp    BYTE PTR [rip+0xff0739],0x0        # 0x1418a3f58
1408b381f: je     0x1408b3b6c
1408b3825: cmp    BYTE PTR [rip+0xff37cc],0x0        # 0x1418a6ff8
1408b382c: je     0x1408b383b
1408b382e: cmp    DWORD PTR [rip+0xff3877],0xffffffff        # 0x1418a70ac
1408b3835: jne    0x1408b3b6c
1408b383b: cmp    BYTE PTR [rip+0xff0756],0x0        # 0x1418a3f98
1408b3842: je     0x1408b3950
1408b3848: cmp    BYTE PTR [rip+0xff0751],0x0        # 0x1418a3fa0
1408b384f: je     0x1408b3b6c
1408b3855: cmp    BYTE PTR [rip+0x1adcd79],0x0        # 0x1423905d5
1408b385c: je     0x1408b3944
1408b3862: cmp    BYTE PTR [rip+0x1adcd65],0x0        # 0x1423905ce
1408b3869: je     0x1408b3944
1408b386f: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b3877: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b387f: lea    r8,[rsp+0x40]
1408b3884: lea    rdx,[rsp+0x50]
1408b3889: lea    rcx,[rip+0x1d96b60]        # 0x14264a3f0
1408b3890: call   0x1400bb340
1408b3895: lea    r8,[rsp+0x48]
1408b389a: lea    rdx,[rsp+0x60]
1408b389f: mov    rcx,r12
1408b38a2: call   0x14041f640
1408b38a7: cmp    DWORD PTR [rip+0xff06ae],0x0        # 0x1418a3f5c
1408b38ae: jne    0x1408b38be
1408b38b0: mov    ebx,r13d
1408b38b3: mov    ecx,DWORD PTR [rip+0x1b19ecf]        # 0x1423cd788
1408b38b9: add    ecx,0xfffffffc
1408b38bc: jmp    0x1408b38c6
1408b38be: mov    ebx,DWORD PTR [rsp+0x48]
1408b38c2: mov    ecx,DWORD PTR [rsp+0x48]
1408b38c6: add    ebx,0x5
1408b38c9: add    ecx,0xfffffffb
1408b38cc: sub    ecx,ebx
1408b38ce: inc    ecx
1408b38d0: mov    eax,0x55555556
1408b38d5: imul   ecx
1408b38d7: mov    r14d,edx
1408b38da: shr    r14d,0x1f
1408b38de: add    r14d,edx
1408b38e1: lea    rcx,[rip+0x1ae3f88]        # 0x142397870
1408b38e8: call   0x14006ee50
1408b38ed: mov    rdi,rax
1408b38f0: lea    esi,[rbx+0x1]
1408b38f3: lea    ebx,[rbx+r14*2]
1408b38f7: add    ebx,0xfffffffe
1408b38fa: add    ebx,r14d
1408b38fd: lea    rcx,[rbp-0x20]
1408b3901: call   0x1400bb360
1408b3906: lea    r9d,[rdi-0x1]
1408b390a: mov    DWORD PTR [rsp+0x30],ebx
1408b390e: mov    DWORD PTR [rsp+0x28],esi
1408b3912: mov    DWORD PTR [rsp+0x20],r14d
1408b3917: xor    r8d,r8d
1408b391a: mov    edx,DWORD PTR [rip+0xff067c]        # 0x1418a3f9c
1408b3920: lea    rcx,[rbp-0x20]
1408b3924: call   0x1400bb380
1408b3929: mov    edx,DWORD PTR [rsp+0x40]
1408b392d: lea    rcx,[rbp-0x20]
1408b3931: call   0x14140f200
1408b3936: mov    eax,DWORD PTR [rbp-0x20]
1408b3939: mov    DWORD PTR [rip+0xff065d],eax        # 0x1418a3f9c
1408b393f: jmp    0x1408b3b6c
1408b3944: mov    BYTE PTR [rip+0xff0655],0x0        # 0x1418a3fa0
1408b394b: jmp    0x1408b3b6c
1408b3950: cmp    DWORD PTR [rip+0xff0639],0xffffffff        # 0x1418a3f90
1408b3957: je     0x1408b3a64
1408b395d: cmp    BYTE PTR [rip+0xff0608],0x0        # 0x1418a3f6c
1408b3964: je     0x1408b3b6c
1408b396a: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b3972: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b397a: cmp    BYTE PTR [rip+0x1adcc54],0x0        # 0x1423905d5
1408b3981: je     0x1408b3999
1408b3983: lea    r8,[rsp+0x40]
1408b3988: lea    rdx,[rsp+0x50]
1408b398d: lea    rcx,[rip+0x1d96a5c]        # 0x14264a3f0
1408b3994: call   0x1400bb340
1408b3999: lea    r8,[rsp+0x48]
1408b399e: lea    rdx,[rsp+0x60]
1408b39a3: mov    rcx,r12
1408b39a6: call   0x14041f640
1408b39ab: cmp    DWORD PTR [rip+0xff05aa],0x0        # 0x1418a3f5c
1408b39b2: jne    0x1408b39c2
1408b39b4: mov    ebx,r13d
1408b39b7: mov    edi,DWORD PTR [rip+0x1b19dcb]        # 0x1423cd788
1408b39bd: add    edi,0xfffffffc
1408b39c0: jmp    0x1408b39ca
1408b39c2: mov    ebx,DWORD PTR [rsp+0x48]
1408b39c6: mov    edi,DWORD PTR [rsp+0x48]
1408b39ca: lea    rcx,[rip+0x1ae3e9f]        # 0x142397870
1408b39d1: call   0x14006ee50
1408b39d6: lea    r8d,[rbx+0x5]
1408b39da: lea    ecx,[rdi-0x2]
1408b39dd: sub    ecx,r8d
1408b39e0: inc    ecx
1408b39e2: mov    eax,0x2aaaaaab
1408b39e7: imul   ecx
1408b39e9: mov    esi,edx
1408b39eb: shr    esi,0x1f
1408b39ee: add    esi,edx
1408b39f0: cmp    BYTE PTR [rip+0x1adcbde],0x0        # 0x1423905d5
1408b39f7: je     0x1408b3a58
1408b39f9: cmp    BYTE PTR [rip+0x1adcbce],0x0        # 0x1423905ce
1408b3a00: je     0x1408b3a58
1408b3a02: lea    edi,[r8+0x1]
1408b3a06: lea    eax,[rsi*2-0x1]
1408b3a0d: add    eax,esi
1408b3a0f: lea    ebx,[r8+rax*2]
1408b3a13: lea    rcx,[rbp-0x20]
1408b3a17: call   0x1400bb360
1408b3a1c: mov    DWORD PTR [rsp+0x30],ebx
1408b3a20: mov    DWORD PTR [rsp+0x28],edi
1408b3a24: mov    DWORD PTR [rsp+0x20],esi
1408b3a28: mov    r9d,r14d
1408b3a2b: xor    r8d,r8d
1408b3a2e: mov    edx,DWORD PTR [rip+0xff0534]        # 0x1418a3f68
1408b3a34: lea    rcx,[rbp-0x20]
1408b3a38: call   0x1400bb380
1408b3a3d: mov    edx,DWORD PTR [rsp+0x40]
1408b3a41: lea    rcx,[rbp-0x20]
1408b3a45: call   0x14140f200
1408b3a4a: mov    eax,DWORD PTR [rbp-0x20]
1408b3a4d: mov    DWORD PTR [rip+0xff0515],eax        # 0x1418a3f68
1408b3a53: jmp    0x1408b3b6c
1408b3a58: mov    BYTE PTR [rip+0xff050d],0x0        # 0x1418a3f6c
1408b3a5f: jmp    0x1408b3b6c
1408b3a64: cmp    BYTE PTR [rip+0xff04f9],0x0        # 0x1418a3f64
1408b3a6b: je     0x1408b3b6c
1408b3a71: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b3a79: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b3a81: cmp    BYTE PTR [rip+0x1adcb4d],0x0        # 0x1423905d5
1408b3a88: je     0x1408b3aa0
1408b3a8a: lea    r8,[rsp+0x40]
1408b3a8f: lea    rdx,[rsp+0x50]
1408b3a94: lea    rcx,[rip+0x1d96955]        # 0x14264a3f0
1408b3a9b: call   0x1400bb340
1408b3aa0: lea    r8,[rsp+0x48]
1408b3aa5: lea    rdx,[rsp+0x60]
1408b3aaa: mov    rcx,r12
1408b3aad: call   0x14041f640
1408b3ab2: cmp    DWORD PTR [rip+0xff04a3],0x0        # 0x1418a3f5c
1408b3ab9: jne    0x1408b3ac9
1408b3abb: mov    ebx,r13d
1408b3abe: mov    edi,DWORD PTR [rip+0x1b19cc4]        # 0x1423cd788
1408b3ac4: add    edi,0xfffffffc
1408b3ac7: jmp    0x1408b3ad1
1408b3ac9: mov    ebx,DWORD PTR [rsp+0x48]
1408b3acd: mov    edi,DWORD PTR [rsp+0x48]
1408b3ad1: lea    rcx,[rip+0x1ae3d98]        # 0x142397870
1408b3ad8: call   0x14006ee50
1408b3add: add    ebx,0x5
1408b3ae0: lea    ecx,[rdi-0x2]
1408b3ae3: sub    ecx,ebx
1408b3ae5: inc    ecx
1408b3ae7: mov    eax,0x2aaaaaab
1408b3aec: imul   ecx
1408b3aee: mov    esi,edx
1408b3af0: shr    esi,0x1f
1408b3af3: add    esi,edx
1408b3af5: lea    rcx,[rip+0xff047c]        # 0x1418a3f78
1408b3afc: call   0x14006f370
1408b3b01: mov    r14,rax
1408b3b04: cmp    BYTE PTR [rip+0x1adcaca],0x0        # 0x1423905d5
1408b3b0b: je     0x1408b3b65
1408b3b0d: cmp    BYTE PTR [rip+0x1adcaba],0x0        # 0x1423905ce
1408b3b14: je     0x1408b3b65
1408b3b16: lea    edi,[rbx+0x1]
1408b3b19: lea    ecx,[rsi+rsi*2]
1408b3b1c: lea    ebx,[rbx+rcx*2]
1408b3b1f: add    ebx,0xfffffffe
1408b3b22: lea    rcx,[rbp-0x20]
1408b3b26: call   0x1400bb360
1408b3b2b: lea    r9d,[r14-0x1]
1408b3b2f: mov    DWORD PTR [rsp+0x30],ebx
1408b3b33: mov    DWORD PTR [rsp+0x28],edi
1408b3b37: mov    DWORD PTR [rsp+0x20],esi
1408b3b3b: xor    r8d,r8d
1408b3b3e: mov    edx,DWORD PTR [rip+0xff041c]        # 0x1418a3f60
1408b3b44: lea    rcx,[rbp-0x20]
1408b3b48: call   0x1400bb380
1408b3b4d: mov    edx,DWORD PTR [rsp+0x40]
1408b3b51: lea    rcx,[rbp-0x20]
1408b3b55: call   0x14140f200
1408b3b5a: mov    eax,DWORD PTR [rbp-0x20]
1408b3b5d: mov    DWORD PTR [rip+0xff03fd],eax        # 0x1418a3f60
1408b3b63: jmp    0x1408b3b6c
1408b3b65: mov    BYTE PTR [rip+0xff03f8],0x0        # 0x1418a3f64
1408b3b6c: cmp    BYTE PTR [rip+0xff0035],0x0        # 0x1418a3ba8
1408b3b73: je     0x1408b3b81
1408b3b75: lea    rcx,[rip+0xff002c]        # 0x1418a3ba8
1408b3b7c: call   0x14045de00
1408b3b81: mov    edi,0x34
1408b3b86: cmp    BYTE PTR [rip+0xff364b],0x0        # 0x1418a71d8
1408b3b8d: je     0x1408b3c98
1408b3b93: cmp    BYTE PTR [rip+0xff364a],0x0        # 0x1418a71e4
1408b3b9a: je     0x1408b3c98
1408b3ba0: cmp    BYTE PTR [rip+0x1adca2e],0x0        # 0x1423905d5
1408b3ba7: je     0x1408b3c91
1408b3bad: cmp    BYTE PTR [rip+0x1adca1a],0x0        # 0x1423905ce
1408b3bb4: je     0x1408b3c91
1408b3bba: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b3bc2: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b3bca: lea    r8,[rsp+0x40]
1408b3bcf: lea    rdx,[rsp+0x50]
1408b3bd4: lea    rcx,[rip+0x1d96815]        # 0x14264a3f0
1408b3bdb: call   0x1400bb340
1408b3be0: lea    r8,[rsp+0x48]
1408b3be5: lea    rdx,[rsp+0x60]
1408b3bea: mov    rcx,r12
1408b3bed: call   0x14041f640
1408b3bf2: mov    ecx,DWORD PTR [rip+0xff35e4]        # 0x1418a71dc
1408b3bf8: test   ecx,ecx
1408b3bfa: je     0x1408b3c0b
1408b3bfc: cmp    ecx,r15d
1408b3bff: je     0x1408b3c0b
1408b3c01: mov    ebx,DWORD PTR [rsp+0x48]
1408b3c05: mov    ecx,DWORD PTR [rsp+0x48]
1408b3c09: jmp    0x1408b3c10
1408b3c0b: mov    ecx,edi
1408b3c0d: mov    ebx,r13d
1408b3c10: add    ebx,0x5
1408b3c13: add    ecx,0xfffffffe
1408b3c16: sub    ecx,ebx
1408b3c18: inc    ecx
1408b3c1a: mov    eax,0x55555556
1408b3c1f: imul   ecx
1408b3c21: mov    r14d,edx
1408b3c24: shr    r14d,0x1f
1408b3c28: add    r14d,edx
1408b3c2b: mov    rcx,QWORD PTR [rip+0x1ae65b6]        # 0x14239a1e8
1408b3c32: add    rcx,0xf90
1408b3c39: call   0x14006ee50
1408b3c3e: mov    rsi,rax
1408b3c41: lea    edi,[rbx+0x1]
1408b3c44: lea    ebx,[rbx+r14*2]
1408b3c48: add    ebx,0xfffffffe
1408b3c4b: add    ebx,r14d
1408b3c4e: lea    rcx,[rbp-0x20]
1408b3c52: call   0x1400bb360
1408b3c57: mov    DWORD PTR [rsp+0x30],ebx
1408b3c5b: mov    DWORD PTR [rsp+0x28],edi
1408b3c5f: mov    DWORD PTR [rsp+0x20],r14d
1408b3c64: mov    r9d,esi
1408b3c67: xor    r8d,r8d
1408b3c6a: mov    edx,DWORD PTR [rip+0xff3570]        # 0x1418a71e0
1408b3c70: lea    rcx,[rbp-0x20]
1408b3c74: call   0x1400bb380
1408b3c79: mov    edx,DWORD PTR [rsp+0x40]
1408b3c7d: lea    rcx,[rbp-0x20]
1408b3c81: call   0x14140f200
1408b3c86: mov    eax,DWORD PTR [rbp-0x20]
1408b3c89: mov    DWORD PTR [rip+0xff3551],eax        # 0x1418a71e0
1408b3c8f: jmp    0x1408b3c98
1408b3c91: mov    BYTE PTR [rip+0xff354c],0x0        # 0x1418a71e4
1408b3c98: cmp    BYTE PTR [rip+0xff3489],0x0        # 0x1418a7128
1408b3c9f: je     0x1408b3d69
1408b3ca5: cmp    BYTE PTR [rip+0xff3484],0x0        # 0x1418a7130
1408b3cac: je     0x1408b3d69
1408b3cb2: cmp    BYTE PTR [rip+0x1adc91c],0x0        # 0x1423905d5
1408b3cb9: je     0x1408b3d62
1408b3cbf: cmp    BYTE PTR [rip+0x1adc908],0x0        # 0x1423905ce
1408b3cc6: je     0x1408b3d62
1408b3ccc: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b3cd4: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b3cdc: lea    r8,[rsp+0x40]
1408b3ce1: lea    rdx,[rsp+0x50]
1408b3ce6: lea    rcx,[rip+0x1d96703]        # 0x14264a3f0
1408b3ced: call   0x1400bb340
1408b3cf2: lea    r8,[rsp+0x48]
1408b3cf7: lea    rdx,[rsp+0x60]
1408b3cfc: mov    rcx,r12
1408b3cff: call   0x14041f640
1408b3d04: lea    rcx,[rip+0xff342d]        # 0x1418a7138
1408b3d0b: call   0x14006ee50
1408b3d10: mov    rbx,rax
1408b3d13: lea    rcx,[rbp-0x20]
1408b3d17: call   0x1400bb360
1408b3d1c: lea    r9d,[rbx-0x1]
1408b3d20: mov    DWORD PTR [rsp+0x30],0x30
1408b3d28: mov    DWORD PTR [rsp+0x28],0x18
1408b3d30: mov    DWORD PTR [rsp+0x20],0x9
1408b3d38: xor    r8d,r8d
1408b3d3b: mov    edx,DWORD PTR [rip+0xff33eb]        # 0x1418a712c
1408b3d41: lea    rcx,[rbp-0x20]
1408b3d45: call   0x1400bb380
1408b3d4a: mov    edx,DWORD PTR [rsp+0x40]
1408b3d4e: lea    rcx,[rbp-0x20]
1408b3d52: call   0x14140f200
1408b3d57: mov    eax,DWORD PTR [rbp-0x20]
1408b3d5a: mov    DWORD PTR [rip+0xff33cc],eax        # 0x1418a712c
1408b3d60: jmp    0x1408b3d69
1408b3d62: mov    BYTE PTR [rip+0xff33c7],0x0        # 0x1418a7130
1408b3d69: cmp    BYTE PTR [rip+0xfefe38],0x0        # 0x1418a3ba8
1408b3d70: je     0x1408b4271
1408b3d76: cmp    BYTE PTR [rip+0xfeff70],0x0        # 0x1418a3ced
1408b3d7d: je     0x1408b414e
1408b3d83: cmp    WORD PTR [rip+0xff00b1],0xffff        # 0x1418a3e3c
1408b3d8b: je     0x1408b3e1a
1408b3d91: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b3d99: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b3da1: cmp    BYTE PTR [rip+0x1adc82d],0x0        # 0x1423905d5
1408b3da8: je     0x1408b3dc0
1408b3daa: lea    r8,[rsp+0x40]
1408b3daf: lea    rdx,[rsp+0x50]
1408b3db4: lea    rcx,[rip+0x1d96635]        # 0x14264a3f0
1408b3dbb: call   0x1400bb340
1408b3dc0: lea    r8,[rsp+0x48]
1408b3dc5: lea    rdx,[rsp+0x60]
1408b3dca: mov    rcx,r12
1408b3dcd: call   0x14041f640
1408b3dd2: cmp    DWORD PTR [rip+0xfefdd3],0x0        # 0x1418a3bac
1408b3dd9: jne    0x1408b3de9
1408b3ddb: mov    ecx,r13d
1408b3dde: mov    eax,DWORD PTR [rip+0x1b199a4]        # 0x1423cd788
1408b3de4: add    eax,0xfffffffc
1408b3de7: jmp    0x1408b3df1
1408b3de9: mov    ecx,DWORD PTR [rsp+0x48]
1408b3ded: mov    eax,DWORD PTR [rsp+0x48]
1408b3df1: lea    ebx,[rcx+0x5]
1408b3df4: lea    ecx,[rax-0x5]
1408b3df7: sub    ecx,ebx
1408b3df9: inc    ecx
1408b3dfb: mov    eax,0x55555556
1408b3e00: imul   ecx
1408b3e02: mov    esi,edx
1408b3e04: shr    esi,0x1f
1408b3e07: add    esi,edx
1408b3e09: lea    rcx,[rip+0xff0030]        # 0x1418a3e40
1408b3e10: call   0x14006f450
1408b3e15: jmp    0x1408b3fc7
1408b3e1a: cmp    BYTE PTR [rip+0xff0087],0x0        # 0x1418a3ea8
1408b3e21: je     0x1408b3eb0
1408b3e27: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b3e2f: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b3e37: cmp    BYTE PTR [rip+0x1adc797],0x0        # 0x1423905d5
1408b3e3e: je     0x1408b3e56
1408b3e40: lea    r8,[rsp+0x40]
1408b3e45: lea    rdx,[rsp+0x50]
1408b3e4a: lea    rcx,[rip+0x1d9659f]        # 0x14264a3f0
1408b3e51: call   0x1400bb340
1408b3e56: lea    r8,[rsp+0x48]
1408b3e5b: lea    rdx,[rsp+0x60]
1408b3e60: mov    rcx,r12
1408b3e63: call   0x14041f640
1408b3e68: cmp    DWORD PTR [rip+0xfefd3d],0x0        # 0x1418a3bac
1408b3e6f: jne    0x1408b3e7f
1408b3e71: mov    ecx,r13d
1408b3e74: mov    eax,DWORD PTR [rip+0x1b1990e]        # 0x1423cd788
1408b3e7a: add    eax,0xfffffffc
1408b3e7d: jmp    0x1408b3e87
1408b3e7f: mov    ecx,DWORD PTR [rsp+0x48]
1408b3e83: mov    eax,DWORD PTR [rsp+0x48]
1408b3e87: lea    ebx,[rcx+0x5]
1408b3e8a: lea    ecx,[rax-0x5]
1408b3e8d: sub    ecx,ebx
1408b3e8f: inc    ecx
1408b3e91: mov    eax,0x55555556
1408b3e96: imul   ecx
1408b3e98: mov    esi,edx
1408b3e9a: shr    esi,0x1f
1408b3e9d: add    esi,edx
1408b3e9f: lea    rcx,[rip+0xff000a]        # 0x1418a3eb0
1408b3ea6: call   0x14006f450
1408b3eab: jmp    0x1408b3fc7
1408b3eb0: cmp    BYTE PTR [rip+0xff0041],0x0        # 0x1418a3ef8
1408b3eb7: je     0x1408b3f36
1408b3eb9: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b3ec1: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b3ec9: cmp    BYTE PTR [rip+0x1adc705],0x0        # 0x1423905d5
1408b3ed0: je     0x1408b3ee8
1408b3ed2: lea    r8,[rsp+0x40]
1408b3ed7: lea    rdx,[rsp+0x50]
1408b3edc: lea    rcx,[rip+0x1d9650d]        # 0x14264a3f0
1408b3ee3: call   0x1400bb340
1408b3ee8: lea    r8,[rsp+0x48]
1408b3eed: lea    rdx,[rsp+0x60]
1408b3ef2: mov    rcx,r12
1408b3ef5: call   0x14041f640
1408b3efa: cmp    DWORD PTR [rip+0xfefcab],0x0        # 0x1418a3bac
1408b3f01: jne    0x1408b3f11
1408b3f03: mov    ecx,r13d
1408b3f06: mov    eax,DWORD PTR [rip+0x1b1987c]        # 0x1423cd788
1408b3f0c: add    eax,0xfffffffc
1408b3f0f: jmp    0x1408b3f19
1408b3f11: mov    ecx,DWORD PTR [rsp+0x48]
1408b3f15: mov    eax,DWORD PTR [rsp+0x48]
1408b3f19: lea    ebx,[rcx+0x5]
1408b3f1c: lea    ecx,[rax-0x5]
1408b3f1f: sub    ecx,ebx
1408b3f21: inc    ecx
1408b3f23: mov    eax,0x55555556
1408b3f28: imul   ecx
1408b3f2a: lea    rcx,[rip+0xfeffcf]        # 0x1418a3f00
1408b3f31: jmp    0x1408b3fbb
1408b3f36: cmp    BYTE PTR [rip+0xfefffb],0x0        # 0x1418a3f38
1408b3f3d: je     0x1408b4046
1408b3f43: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b3f4b: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b3f53: cmp    BYTE PTR [rip+0x1adc67b],0x0        # 0x1423905d5
1408b3f5a: je     0x1408b3f72
1408b3f5c: lea    r8,[rsp+0x40]
1408b3f61: lea    rdx,[rsp+0x50]
1408b3f66: lea    rcx,[rip+0x1d96483]        # 0x14264a3f0
1408b3f6d: call   0x1400bb340
1408b3f72: lea    r8,[rsp+0x48]
1408b3f77: lea    rdx,[rsp+0x60]
1408b3f7c: mov    rcx,r12
1408b3f7f: call   0x14041f640
1408b3f84: cmp    DWORD PTR [rip+0xfefc21],0x0        # 0x1418a3bac
1408b3f8b: jne    0x1408b3f9b
1408b3f8d: mov    ecx,r13d
1408b3f90: mov    eax,DWORD PTR [rip+0x1b197f2]        # 0x1423cd788
1408b3f96: add    eax,0xfffffffc
1408b3f99: jmp    0x1408b3fa3
1408b3f9b: mov    ecx,DWORD PTR [rsp+0x48]
1408b3f9f: mov    eax,DWORD PTR [rsp+0x48]
1408b3fa3: lea    ebx,[rcx+0x5]
1408b3fa6: lea    ecx,[rax-0x5]
1408b3fa9: sub    ecx,ebx
1408b3fab: inc    ecx
1408b3fad: mov    eax,0x55555556
1408b3fb2: imul   ecx
1408b3fb4: lea    rcx,[rip+0xfeff85]        # 0x1418a3f40
1408b3fbb: mov    esi,edx
1408b3fbd: shr    esi,0x1f
1408b3fc0: add    esi,edx
1408b3fc2: call   0x14006f370
1408b3fc7: mov    r14,rax
1408b3fca: cmp    BYTE PTR [rip+0xfefd57],0x0        # 0x1418a3d28
1408b3fd1: je     0x1408b4271
1408b3fd7: cmp    BYTE PTR [rip+0x1adc5f7],0x0        # 0x1423905d5
1408b3fde: je     0x1408b403a
1408b3fe0: cmp    BYTE PTR [rip+0x1adc5e7],0x0        # 0x1423905ce
1408b3fe7: je     0x1408b403a
1408b3fe9: lea    edi,[rbx+0x1]
1408b3fec: lea    ebx,[rbx+rsi*2]
1408b3fef: add    ebx,0xfffffffe
1408b3ff2: add    ebx,esi
1408b3ff4: lea    rcx,[rbp-0x20]
1408b3ff8: call   0x1400bb360
1408b3ffd: lea    r9d,[r14-0x1]
1408b4001: mov    DWORD PTR [rsp+0x30],ebx
1408b4005: mov    DWORD PTR [rsp+0x28],edi
1408b4009: mov    DWORD PTR [rsp+0x20],esi
1408b400d: xor    r8d,r8d
1408b4010: mov    edx,DWORD PTR [rip+0xfefd0e]        # 0x1418a3d24
1408b4016: lea    rcx,[rbp-0x20]
1408b401a: call   0x1400bb380
1408b401f: mov    edx,DWORD PTR [rsp+0x40]
1408b4023: lea    rcx,[rbp-0x20]
1408b4027: call   0x14140f200
1408b402c: mov    eax,DWORD PTR [rbp-0x20]
1408b402f: mov    DWORD PTR [rip+0xfefcef],eax        # 0x1418a3d24
1408b4035: jmp    0x1408b4271
1408b403a: mov    BYTE PTR [rip+0xfefce7],0x0        # 0x1418a3d28
1408b4041: jmp    0x1408b4271
1408b4046: cmp    BYTE PTR [rip+0xfefcd3],0x0        # 0x1418a3d20
1408b404d: je     0x1408b4271
1408b4053: cmp    BYTE PTR [rip+0x1adc57b],0x0        # 0x1423905d5
1408b405a: je     0x1408b4142
1408b4060: cmp    BYTE PTR [rip+0x1adc567],0x0        # 0x1423905ce
1408b4067: je     0x1408b4142
1408b406d: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b4075: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b407d: lea    r8,[rsp+0x40]
1408b4082: lea    rdx,[rsp+0x50]
1408b4087: lea    rcx,[rip+0x1d96362]        # 0x14264a3f0
1408b408e: call   0x1400bb340
1408b4093: lea    r8,[rsp+0x48]
1408b4098: lea    rdx,[rsp+0x60]
1408b409d: mov    rcx,r12
1408b40a0: call   0x14041f640
1408b40a5: cmp    DWORD PTR [rip+0xfefb00],0x0        # 0x1418a3bac
1408b40ac: jne    0x1408b40bc
1408b40ae: mov    ebx,r13d
1408b40b1: mov    ecx,DWORD PTR [rip+0x1b196d1]        # 0x1423cd788
1408b40b7: add    ecx,0xfffffffc
1408b40ba: jmp    0x1408b40c4
1408b40bc: mov    ebx,DWORD PTR [rsp+0x48]
1408b40c0: mov    ecx,DWORD PTR [rsp+0x48]
1408b40c4: add    ebx,0x5
1408b40c7: add    ecx,0xfffffff8
1408b40ca: sub    ecx,ebx
1408b40cc: inc    ecx
1408b40ce: mov    eax,0x55555556
1408b40d3: imul   ecx
1408b40d5: mov    r14d,edx
1408b40d8: shr    r14d,0x1f
1408b40dc: add    r14d,edx
1408b40df: lea    rcx,[rip+0xfefc4a]        # 0x1418a3d30
1408b40e6: call   0x14006f450
1408b40eb: mov    rdi,rax
1408b40ee: lea    esi,[rbx+0x1]
1408b40f1: lea    ebx,[rbx+r14*2]
1408b40f5: add    ebx,0xfffffffe
1408b40f8: add    ebx,r14d
1408b40fb: lea    rcx,[rbp-0x20]
1408b40ff: call   0x1400bb360
1408b4104: lea    r9d,[rdi-0x1]
1408b4108: mov    DWORD PTR [rsp+0x30],ebx
1408b410c: mov    DWORD PTR [rsp+0x28],esi
1408b4110: mov    DWORD PTR [rsp+0x20],r14d
1408b4115: xor    r8d,r8d
1408b4118: mov    edx,DWORD PTR [rip+0xfefbfe]        # 0x1418a3d1c
1408b411e: lea    rcx,[rbp-0x20]
1408b4122: call   0x1400bb380
1408b4127: mov    edx,DWORD PTR [rsp+0x40]
1408b412b: lea    rcx,[rbp-0x20]
1408b412f: call   0x14140f200
1408b4134: mov    eax,DWORD PTR [rbp-0x20]
1408b4137: mov    DWORD PTR [rip+0xfefbdf],eax        # 0x1418a3d1c
1408b413d: jmp    0x1408b4271
1408b4142: mov    BYTE PTR [rip+0xfefbd7],0x0        # 0x1418a3d20
1408b4149: jmp    0x1408b4271
1408b414e: call   QWORD PTR [rip+0xd31094]        # 0x1415e51e8
1408b4154: mov    edx,DWORD PTR [rip+0xfefa8e]        # 0x1418a3be8
1408b415a: cmp    eax,edx
1408b415c: jb     0x1408b4165
1408b415e: add    eax,0x64
1408b4161: cmp    eax,edx
1408b4163: jbe    0x1408b4171
1408b4165: lea    rcx,[rip+0xfefa3c]        # 0x1418a3ba8
1408b416c: call   0x14045eb60
1408b4171: cmp    BYTE PTR [rip+0xfefa3c],0x0        # 0x1418a3bb4
1408b4178: je     0x1408b4271
1408b417e: cmp    BYTE PTR [rip+0x1adc450],0x0        # 0x1423905d5
1408b4185: je     0x1408b426a
1408b418b: cmp    BYTE PTR [rip+0x1adc43c],0x0        # 0x1423905ce
1408b4192: je     0x1408b426a
1408b4198: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b41a0: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b41a8: lea    r8,[rsp+0x40]
1408b41ad: lea    rdx,[rsp+0x50]
1408b41b2: lea    rcx,[rip+0x1d96237]        # 0x14264a3f0
1408b41b9: call   0x1400bb340
1408b41be: lea    r8,[rsp+0x48]
1408b41c3: lea    rdx,[rsp+0x60]
1408b41c8: mov    rcx,r12
1408b41cb: call   0x14041f640
1408b41d0: cmp    DWORD PTR [rip+0xfef9d5],0x0        # 0x1418a3bac
1408b41d7: jne    0x1408b41e7
1408b41d9: mov    ebx,r13d
1408b41dc: mov    ecx,DWORD PTR [rip+0x1b195a6]        # 0x1423cd788
1408b41e2: add    ecx,0xfffffffc
1408b41e5: jmp    0x1408b41ef
1408b41e7: mov    ebx,DWORD PTR [rsp+0x48]
1408b41eb: mov    ecx,DWORD PTR [rsp+0x48]
1408b41ef: add    ebx,0x5
1408b41f2: add    ecx,0xfffffffe
1408b41f5: sub    ecx,ebx
1408b41f7: inc    ecx
1408b41f9: mov    eax,0x55555556
1408b41fe: imul   ecx
1408b4200: mov    r14d,edx
1408b4203: shr    r14d,0x1f
1408b4207: add    r14d,edx
1408b420a: lea    rcx,[rip+0xfef9a7]        # 0x1418a3bb8
1408b4211: call   0x14006f370
1408b4216: mov    rdi,rax
1408b4219: lea    esi,[rbx+0x1]
1408b421c: lea    ebx,[rbx+r14*2]
1408b4220: add    ebx,0xfffffffe
1408b4223: add    ebx,r14d
1408b4226: lea    rcx,[rbp-0x20]
1408b422a: call   0x1400bb360
1408b422f: lea    r9d,[rdi-0x1]
1408b4233: mov    DWORD PTR [rsp+0x30],ebx
1408b4237: mov    DWORD PTR [rsp+0x28],esi
1408b423b: mov    DWORD PTR [rsp+0x20],r14d
1408b4240: xor    r8d,r8d
1408b4243: mov    edx,DWORD PTR [rip+0xfef967]        # 0x1418a3bb0
1408b4249: lea    rcx,[rbp-0x20]
1408b424d: call   0x1400bb380
1408b4252: mov    edx,DWORD PTR [rsp+0x40]
1408b4256: lea    rcx,[rbp-0x20]
1408b425a: call   0x14140f200
1408b425f: mov    eax,DWORD PTR [rbp-0x20]
1408b4262: mov    DWORD PTR [rip+0xfef948],eax        # 0x1418a3bb0
1408b4268: jmp    0x1408b4271
1408b426a: mov    BYTE PTR [rip+0xfef943],0x0        # 0x1418a3bb4
1408b4271: xor    r12d,r12d
1408b4274: cmp    BYTE PTR [rip+0xff2d7d],r12b        # 0x1418a6ff8
1408b427b: je     0x1408b466d
1408b4281: cmp    BYTE PTR [rip+0xff2e81],r12b        # 0x1418a7109
1408b4288: jne    0x1408b466d
1408b428e: cmp    DWORD PTR [rip+0xff2e17],0xffffffff        # 0x1418a70ac
1408b4295: je     0x1408b4512
1408b429b: cmp    BYTE PTR [rip+0xff2e3e],r12b        # 0x1418a70e0
1408b42a2: je     0x1408b466d
1408b42a8: cmp    BYTE PTR [rip+0x1adc326],r12b        # 0x1423905d5
1408b42af: je     0x1408b4506
1408b42b5: cmp    BYTE PTR [rip+0x1adc312],r12b        # 0x1423905ce
1408b42bc: je     0x1408b4506
1408b42c2: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b42ca: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b42d2: lea    r8,[rsp+0x40]
1408b42d7: lea    rdx,[rsp+0x50]
1408b42dc: lea    rcx,[rip+0x1d9610d]        # 0x14264a3f0
1408b42e3: call   0x1400bb340
1408b42e8: lea    r8,[rsp+0x48]
1408b42ed: lea    rdx,[rsp+0x60]
1408b42f2: lea    rcx,[rip+0xfed2d7]        # 0x1418a15d0
1408b42f9: call   0x14041f640
1408b42fe: mov    eax,DWORD PTR [rip+0x1b19484]        # 0x1423cd788
1408b4304: lea    r14d,[rax-0xe]
1408b4308: mov    edx,DWORD PTR [rip+0xff2d9e]        # 0x1418a70ac
1408b430e: cmp    edx,0xffffffff
1408b4311: je     0x1408b4317
1408b4313: lea    r14d,[rax-0x8]
1408b4317: movsxd rdi,DWORD PTR [rip+0xff2d92]        # 0x1418a70b0
1408b431e: mov    esi,r12d
1408b4321: cmp    DWORD PTR [rip+0xff2d8c],0xffffffff        # 0x1418a70b4
1408b4328: cmovne esi,DWORD PTR [rip+0xff2d85]        # 0x1418a70b4
1408b432f: lea    rcx,[rip+0x1c2f48a]        # 0x1424e37c0
1408b4336: call   0x140075500
1408b433b: mov    r15,rax
1408b433e: test   rax,rax
1408b4341: je     0x1408b435c
1408b4343: test   edi,edi
1408b4345: js     0x1408b435c
1408b4347: lea    rcx,[rax+0xd0]
1408b434e: call   0x14006ee50
1408b4353: cmp    edi,eax
1408b4355: mov    eax,0x1
1408b435a: jl     0x1408b435f
1408b435c: mov    eax,r12d
1408b435f: test   eax,eax
1408b4361: je     0x1408b44f4
1408b4367: mov    rdx,rdi
1408b436a: lea    rcx,[r15+0xd0]
1408b4371: call   0x14006f220
1408b4376: movsxd rcx,esi
1408b4379: imul   rbx,rcx,0x58
1408b437d: add    rbx,QWORD PTR [rax]
1408b4380: lea    ecx,[r14-0x1f]
1408b4384: mov    eax,0x55555556
1408b4389: imul   ecx
1408b438b: mov    r14d,edx
1408b438e: shr    r14d,0x1f
1408b4392: add    r14d,edx
1408b4395: mov    esi,r12d
1408b4398: lea    rdx,[rsp+0x68]
1408b439d: lea    rcx,[rbx+0x28]
1408b43a1: call   0x14006f240
1408b43a6: lea    rdx,[rsp+0x78]
1408b43ab: lea    rcx,[rbx+0x28]
1408b43af: call   0x14006f230
1408b43b4: mov    rax,QWORD PTR [rsp+0x68]
1408b43b9: mov    r13d,0xff
1408b43bf: nop
1408b43c0: cmp    rax,QWORD PTR [rsp+0x78]
1408b43c5: je     0x1408b4487
1408b43cb: mov    edx,0x1
1408b43d0: cmovb  edx,r13d
1408b43d4: test   dl,dl
1408b43d6: jns    0x1408b4487
1408b43dc: lea    rcx,[rsp+0x68]
1408b43e1: call   0x14006ee10
1408b43e6: mov    rcx,QWORD PTR [rax]
1408b43e9: add    rcx,0x10
1408b43ed: lea    rdx,[rbp+0x0]
1408b43f1: call   0x14013be70
1408b43f6: lea    rcx,[rsp+0x68]
1408b43fb: call   0x14006ee10
1408b4400: mov    rcx,QWORD PTR [rax]
1408b4403: add    rcx,0x10
1408b4407: lea    rdx,[rbp+0x20]
1408b440b: call   0x14013bdf0
1408b4410: lea    r8,[rbp+0x20]
1408b4414: lea    rdx,[rsp+0x70]
1408b4419: lea    rcx,[rbp+0x0]
1408b441d: call   0x14013bd30
1408b4422: xor    edx,edx
1408b4424: movzx  ecx,BYTE PTR [rax]
1408b4427: call   0x1400657b0
1408b442c: test   al,al
1408b442e: je     0x1408b4472
1408b4430: lea    rdx,[rbp-0x20]
1408b4434: lea    rcx,[rbp+0x0]
1408b4438: call   0x14013bd10
1408b443d: mov    rcx,rax
1408b4440: call   0x14013bc90
1408b4445: test   al,al
1408b4447: jne    0x1408b4474
1408b4449: lea    rcx,[rbp+0x0]
1408b444d: call   0x14013bce0
1408b4452: lea    r8,[rbp+0x20]
1408b4456: lea    rdx,[rsp+0x70]
1408b445b: lea    rcx,[rbp+0x0]
1408b445f: call   0x14013bd30
1408b4464: xor    edx,edx
1408b4466: movzx  ecx,BYTE PTR [rax]
1408b4469: call   0x1400657b0
1408b446e: test   al,al
1408b4470: jne    0x1408b4430
1408b4472: inc    esi
1408b4474: mov    rax,QWORD PTR [rsp+0x68]
1408b4479: add    rax,0x8
1408b447d: mov    QWORD PTR [rsp+0x68],rax
1408b4482: jmp    0x1408b43c0
1408b4487: lea    rcx,[r15+0xa0]
1408b448e: call   0x14006ee50
1408b4493: lea    edi,[rax-0x1]
1408b4496: lea    ecx,[r14+0xa]
1408b449a: lea    ebx,[rcx+rcx*2]
1408b449d: lea    rcx,[rbp-0x50]
1408b44a1: call   0x1400bb360
1408b44a6: lea    r9d,[rdi+rsi*1]
1408b44aa: mov    DWORD PTR [rsp+0x30],ebx
1408b44ae: mov    DWORD PTR [rsp+0x28],0x21
1408b44b6: mov    DWORD PTR [rsp+0x20],r14d
1408b44bb: xor    r8d,r8d
1408b44be: mov    edx,DWORD PTR [rip+0xff2c18]        # 0x1418a70dc
1408b44c4: lea    rcx,[rbp-0x50]
1408b44c8: call   0x1400bb380
1408b44cd: mov    edx,DWORD PTR [rsp+0x40]
1408b44d1: lea    rcx,[rbp-0x50]
1408b44d5: call   0x14140f200
1408b44da: mov    eax,DWORD PTR [rbp-0x50]
1408b44dd: mov    DWORD PTR [rip+0xff2bf9],eax        # 0x1418a70dc
1408b44e3: mov    r13d,0x12
1408b44e9: mov    r15d,0x1
1408b44ef: jmp    0x1408b466d
1408b44f4: mov    BYTE PTR [rip+0xff2be5],r12b        # 0x1418a70e0
1408b44fb: mov    r15d,0x1
1408b4501: jmp    0x1408b466d
1408b4506: mov    BYTE PTR [rip+0xff2bd3],r12b        # 0x1418a70e0
1408b450d: jmp    0x1408b466d
1408b4512: cmp    BYTE PTR [rip+0xff2ae7],r12b        # 0x1418a7000
1408b4519: je     0x1408b466d
1408b451f: cmp    BYTE PTR [rip+0x1adc0af],r12b        # 0x1423905d5
1408b4526: je     0x1408b4666
1408b452c: cmp    BYTE PTR [rip+0x1adc09b],r12b        # 0x1423905ce
1408b4533: je     0x1408b4666
1408b4539: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b4541: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b4549: lea    r8,[rsp+0x40]
1408b454e: lea    rdx,[rsp+0x50]
1408b4553: lea    rcx,[rip+0x1d95e96]        # 0x14264a3f0
1408b455a: call   0x1400bb340
1408b455f: lea    r8,[rsp+0x48]
1408b4564: lea    rdx,[rsp+0x60]
1408b4569: lea    rcx,[rip+0xfed060]        # 0x1418a15d0
1408b4570: call   0x14041f640
1408b4575: mov    ecx,DWORD PTR [rip+0x1b1920d]        # 0x1423cd788
1408b457b: lea    ebx,[rcx-0xe]
1408b457e: movsxd rax,DWORD PTR [rip+0xff2abb]        # 0x1418a7040
1408b4585: cmp    eax,0xffffffff
1408b4588: je     0x1408b4627
1408b458e: lea    ebx,[rcx-0xb]
1408b4591: mov    rdx,rax
1408b4594: lea    rcx,[rip+0xff2a6d]        # 0x1418a7008
1408b459b: call   0x14006f360
1408b45a0: mov    edx,DWORD PTR [rax]
1408b45a2: lea    rcx,[rip+0x1c2f217]        # 0x1424e37c0
1408b45a9: call   0x140075500
1408b45ae: mov    r8,rax
1408b45b1: test   rax,rax
1408b45b4: je     0x1408b466d
1408b45ba: lea    ecx,[rbx-0x19]
1408b45bd: mov    eax,0x55555556
1408b45c2: imul   ecx
1408b45c4: mov    esi,edx
1408b45c6: shr    esi,0x1f
1408b45c9: add    esi,edx
1408b45cb: lea    rcx,[r8+0xa0]
1408b45d2: call   0x14006ee50
1408b45d7: mov    rdi,rax
1408b45da: lea    ecx,[rsi+0x8]
1408b45dd: lea    ebx,[rcx+rcx*2]
1408b45e0: lea    rcx,[rbp-0x50]
1408b45e4: call   0x1400bb360
1408b45e9: mov    DWORD PTR [rsp+0x30],ebx
1408b45ed: mov    DWORD PTR [rsp+0x28],0x1b
1408b45f5: lea    r9d,[rdi-0x1]
1408b45f9: mov    DWORD PTR [rsp+0x20],esi
1408b45fd: xor    r8d,r8d
1408b4600: mov    edx,DWORD PTR [rip+0xff29f6]        # 0x1418a6ffc
1408b4606: lea    rcx,[rbp-0x50]
1408b460a: call   0x1400bb380
1408b460f: mov    edx,DWORD PTR [rsp+0x40]
1408b4613: lea    rcx,[rbp-0x50]
1408b4617: call   0x14140f200
1408b461c: mov    eax,DWORD PTR [rbp-0x50]
1408b461f: mov    DWORD PTR [rip+0xff29d7],eax        # 0x1418a6ffc
1408b4625: jmp    0x1408b466d
1408b4627: lea    ecx,[rbx-0x13]
1408b462a: mov    eax,0x2aaaaaab
1408b462f: imul   ecx
1408b4631: mov    esi,edx
1408b4633: shr    esi,0x1f
1408b4636: add    esi,edx
1408b4638: lea    rcx,[rip+0xff29c9]        # 0x1418a7008
1408b463f: call   0x14006f370
1408b4644: mov    rdi,rax
1408b4647: lea    ecx,[rsi+0x3]
1408b464a: lea    ebx,[rcx+rcx*2]
1408b464d: add    ebx,ebx
1408b464f: lea    rcx,[rbp-0x50]
1408b4653: call   0x1400bb360
1408b4658: mov    DWORD PTR [rsp+0x30],ebx
1408b465c: mov    DWORD PTR [rsp+0x28],0x15
1408b4664: jmp    0x1408b45f5
1408b4666: mov    BYTE PTR [rip+0xff2993],r12b        # 0x1418a7000
1408b466d: cmp    BYTE PTR [rip+0xfee684],r12b        # 0x1418a2cf8
1408b4674: jne    0x1408b469d
1408b4676: cmp    BYTE PTR [rip+0xfee8cb],r12b        # 0x1418a2f48
1408b467d: jne    0x1408b469d
1408b467f: cmp    BYTE PTR [rip+0xfed3d2],r12b        # 0x1418a1a58
1408b4686: jne    0x1408b469d
1408b4688: cmp    BYTE PTR [rip+0xfefca1],r12b        # 0x1418a4330
1408b468f: je     0x1408b469d
1408b4691: lea    rcx,[rip+0xfefc98]        # 0x1418a4330
1408b4698: call   0x1408d97b0
1408b469d: cmp    BYTE PTR [rip+0xff3a6c],r12b        # 0x1418a8110
1408b46a4: je     0x1408b46ca
1408b46a6: lea    rdx,[rsp+0x50]
1408b46ab: lea    rcx,[rsp+0x40]
1408b46b0: call   0x140c33370
1408b46b5: mov    r8d,DWORD PTR [rsp+0x50]
1408b46ba: mov    edx,DWORD PTR [rsp+0x40]
1408b46be: lea    rcx,[rip+0xff3a4b]        # 0x1418a8110
1408b46c5: call   0x1400f7750
1408b46ca: cmp    BYTE PTR [rip+0xff3bef],r12b        # 0x1418a82c0
1408b46d1: je     0x1408b46f7
1408b46d3: lea    rdx,[rsp+0x50]
1408b46d8: lea    rcx,[rsp+0x40]
1408b46dd: call   0x140c33370
1408b46e2: mov    r8d,DWORD PTR [rsp+0x50]
1408b46e7: mov    edx,DWORD PTR [rsp+0x40]
1408b46eb: lea    rcx,[rip+0xff3bce]        # 0x1418a82c0
1408b46f2: call   0x1400f9970
1408b46f7: cmp    BYTE PTR [rip+0xff3c5a],r12b        # 0x1418a8358
1408b46fe: je     0x1408b470f
1408b4700: lea    rdx,[rsp+0x48]
1408b4705: lea    rcx,[rsp+0x60]
1408b470a: call   0x140c33370
1408b470f: xor    al,al
1408b4711: cmp    BYTE PTR [rip+0xfee5e1],al        # 0x1418a2cf8
1408b4717: je     0x1408b4727
1408b4719: movzx  eax,al
1408b471c: cmp    DWORD PTR [rip+0xfee5d9],0x3        # 0x1418a2cfc
1408b4723: cmove  eax,r15d
1408b4727: mov    r12d,0xa
1408b472d: mov    r15d,0x26
1408b4733: cmp    BYTE PTR [rip+0xfef9a6],0x0        # 0x1418a40e0
1408b473a: je     0x1408b4892
1408b4740: test   al,al
1408b4742: jne    0x1408b4892
1408b4748: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b4750: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b4758: cmp    BYTE PTR [rip+0x1adbe77],al        # 0x1423905d5
1408b475e: je     0x1408b4776
1408b4760: lea    r8,[rsp+0x40]
1408b4765: lea    rdx,[rsp+0x50]
1408b476a: lea    rcx,[rip+0x1d95c7f]        # 0x14264a3f0
1408b4771: call   0x1400bb340
1408b4776: lea    r8,[rsp+0x48]
1408b477b: lea    rdx,[rsp+0x60]
1408b4780: lea    rcx,[rip+0xfece49]        # 0x1418a15d0
1408b4787: call   0x14041f640
1408b478c: mov    ecx,DWORD PTR [rip+0xfef952]        # 0x1418a40e4
1408b4792: test   ecx,ecx
1408b4794: je     0x1408b47a5
1408b4796: cmp    ecx,0x1
1408b4799: je     0x1408b47a5
1408b479b: mov    ebx,DWORD PTR [rsp+0x48]
1408b479f: mov    edi,DWORD PTR [rsp+0x48]
1408b47a3: jmp    0x1408b47b3
1408b47a5: mov    ebx,0x4
1408b47aa: mov    edi,DWORD PTR [rip+0x1b18fd8]        # 0x1423cd788
1408b47b0: add    edi,0xfffffff8
1408b47b3: add    ebx,0x6
1408b47b6: mov    rcx,QWORD PTR [rip+0xfef92b]        # 0x1418a40e8
1408b47bd: mov    rax,QWORD PTR [rcx]
1408b47c0: call   QWORD PTR [rax]
1408b47c2: movsx  ecx,ax
1408b47c5: sub    ecx,0x2
1408b47c8: je     0x1408b47ed
1408b47ca: sub    ecx,0x6
1408b47cd: je     0x1408b47e8
1408b47cf: sub    ecx,0x1
1408b47d2: je     0x1408b47ed
1408b47d4: sub    ecx,0x2
1408b47d7: je     0x1408b47e3
1408b47d9: cmp    ecx,0x2
1408b47dc: jne    0x1408b47f0
1408b47de: add    ebx,0x1b
1408b47e1: jmp    0x1408b47f0
1408b47e3: add    ebx,0x3
1408b47e6: jmp    0x1408b47f0
1408b47e8: add    ebx,0xc
1408b47eb: jmp    0x1408b47f0
1408b47ed: add    ebx,0xf
1408b47f0: inc    ebx
1408b47f2: lea    ecx,[rdi-0x2]
1408b47f5: sub    ecx,ebx
1408b47f7: inc    ecx
1408b47f9: mov    eax,0x55555556
1408b47fe: imul   ecx
1408b4800: mov    esi,edx
1408b4802: shr    esi,0x1f
1408b4805: add    esi,edx
1408b4807: lea    rcx,[rip+0xfef8f2]        # 0x1418a4100
1408b480e: call   0x14006ee50
1408b4813: mov    r14,rax
1408b4816: cmp    BYTE PTR [rip+0xfef947],0x0        # 0x1418a4164
1408b481d: je     0x1408b4b70
1408b4823: cmp    BYTE PTR [rip+0x1adbdab],0x0        # 0x1423905d5
1408b482a: je     0x1408b4886
1408b482c: cmp    BYTE PTR [rip+0x1adbd9b],0x0        # 0x1423905ce
1408b4833: je     0x1408b4886
1408b4835: lea    edi,[rbx+0x1]
1408b4838: lea    ebx,[rbx+rsi*2]
1408b483b: add    ebx,0xfffffffe
1408b483e: add    ebx,esi
1408b4840: lea    rcx,[rbp-0x50]
1408b4844: call   0x1400bb360
1408b4849: lea    r9d,[r14-0x1]
1408b484d: mov    DWORD PTR [rsp+0x30],ebx
1408b4851: mov    DWORD PTR [rsp+0x28],edi
1408b4855: mov    DWORD PTR [rsp+0x20],esi
1408b4859: xor    r8d,r8d
1408b485c: mov    edx,DWORD PTR [rip+0xfef8fe]        # 0x1418a4160
1408b4862: lea    rcx,[rbp-0x50]
1408b4866: call   0x1400bb380
1408b486b: mov    edx,DWORD PTR [rsp+0x40]
1408b486f: lea    rcx,[rbp-0x50]
1408b4873: call   0x14140f200
1408b4878: mov    eax,DWORD PTR [rbp-0x50]
1408b487b: mov    DWORD PTR [rip+0xfef8df],eax        # 0x1418a4160
1408b4881: jmp    0x1408b4b70
1408b4886: mov    BYTE PTR [rip+0xfef8d7],0x0        # 0x1418a4164
1408b488d: jmp    0x1408b4b70
1408b4892: cmp    BYTE PTR [rip+0xfef7bf],0x0        # 0x1418a4058
1408b4899: je     0x1408b4b70
1408b489f: test   al,al
1408b48a1: jne    0x1408b4b70
1408b48a7: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b48af: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b48b7: cmp    BYTE PTR [rip+0x1adbd18],al        # 0x1423905d5
1408b48bd: je     0x1408b48d5
1408b48bf: lea    r8,[rsp+0x40]
1408b48c4: lea    rdx,[rsp+0x50]
1408b48c9: lea    rcx,[rip+0x1d95b20]        # 0x14264a3f0
1408b48d0: call   0x1400bb340
1408b48d5: lea    r8,[rsp+0x48]
1408b48da: lea    rdx,[rsp+0x60]
1408b48df: lea    rcx,[rip+0xfeccea]        # 0x1418a15d0
1408b48e6: call   0x14041f640
1408b48eb: mov    eax,DWORD PTR [rip+0xfef76b]        # 0x1418a405c
1408b48f1: test   eax,eax
1408b48f3: jne    0x1408b48ff
1408b48f5: mov    ebx,0x4
1408b48fa: mov    edi,r15d
1408b48fd: jmp    0x1408b4907
1408b48ff: mov    ebx,DWORD PTR [rsp+0x48]
1408b4903: mov    edi,DWORD PTR [rsp+0x48]
1408b4907: cmp    BYTE PTR [rip+0xfef797],0x0        # 0x1418a40a5
1408b490e: je     0x1408b49c8
1408b4914: cmp    BYTE PTR [rip+0xfef7c1],0x0        # 0x1418a40dc
1408b491b: je     0x1408b4b70
1408b4921: cmp    BYTE PTR [rip+0x1adbcad],0x0        # 0x1423905d5
1408b4928: je     0x1408b49bc
1408b492e: cmp    BYTE PTR [rip+0x1adbc99],0x0        # 0x1423905ce
1408b4935: je     0x1408b49bc
1408b493b: add    ebx,0x4
1408b493e: lea    ecx,[rdi-0x1]
1408b4941: sub    ecx,ebx
1408b4943: inc    ecx
1408b4945: mov    eax,0x55555556
1408b494a: imul   ecx
1408b494c: mov    esi,edx
1408b494e: shr    esi,0x1f
1408b4951: add    esi,edx
1408b4953: lea    rcx,[rip+0xfef766]        # 0x1418a40c0
1408b495a: call   0x14006f450
1408b495f: lea    edi,[rbx+0x1]
1408b4962: lea    ebx,[rbx+rsi*2]
1408b4965: add    ebx,0xfffffffe
1408b4968: add    ebx,esi
1408b496a: lea    rcx,[rbp-0x50]
1408b496e: call   0x1400bb360
1408b4973: lea    rcx,[rip+0xfef746]        # 0x1418a40c0
1408b497a: call   0x14006f450
1408b497f: lea    r9d,[rax-0x1]
1408b4983: mov    DWORD PTR [rsp+0x30],ebx
1408b4987: mov    DWORD PTR [rsp+0x28],edi
1408b498b: mov    DWORD PTR [rsp+0x20],esi
1408b498f: xor    r8d,r8d
1408b4992: mov    edx,DWORD PTR [rip+0xfef740]        # 0x1418a40d8
1408b4998: lea    rcx,[rbp-0x50]
1408b499c: call   0x1400bb380
1408b49a1: mov    edx,DWORD PTR [rsp+0x40]
1408b49a5: lea    rcx,[rbp-0x50]
1408b49a9: call   0x14140f200
1408b49ae: mov    eax,DWORD PTR [rbp-0x50]
1408b49b1: mov    DWORD PTR [rip+0xfef721],eax        # 0x1418a40d8
1408b49b7: jmp    0x1408b4b70
1408b49bc: mov    BYTE PTR [rip+0xfef719],0x0        # 0x1418a40dc
1408b49c3: jmp    0x1408b4b70
1408b49c8: cmp    BYTE PTR [rip+0xfef6b5],0x0        # 0x1418a4084
1408b49cf: je     0x1408b4a89
1408b49d5: cmp    BYTE PTR [rip+0xfef6c8],0x0        # 0x1418a40a4
1408b49dc: je     0x1408b4b70
1408b49e2: cmp    BYTE PTR [rip+0x1adbbec],0x0        # 0x1423905d5
1408b49e9: je     0x1408b4a7d
1408b49ef: cmp    BYTE PTR [rip+0x1adbbd8],0x0        # 0x1423905ce
1408b49f6: je     0x1408b4a7d
1408b49fc: add    ebx,0x4
1408b49ff: lea    ecx,[rdi-0x1]
1408b4a02: sub    ecx,ebx
1408b4a04: inc    ecx
1408b4a06: mov    eax,0x55555556
1408b4a0b: imul   ecx
1408b4a0d: mov    esi,edx
1408b4a0f: shr    esi,0x1f
1408b4a12: add    esi,edx
1408b4a14: lea    rcx,[rip+0xfef66d]        # 0x1418a4088
1408b4a1b: call   0x14006f370
1408b4a20: lea    edi,[rbx+0x1]
1408b4a23: lea    ebx,[rbx+rsi*2]
1408b4a26: add    ebx,0xfffffffe
1408b4a29: add    ebx,esi
1408b4a2b: lea    rcx,[rbp-0x50]
1408b4a2f: call   0x1400bb360
1408b4a34: lea    rcx,[rip+0xfef64d]        # 0x1418a4088
1408b4a3b: call   0x14006f370
1408b4a40: lea    r9d,[rax-0x1]
1408b4a44: mov    DWORD PTR [rsp+0x30],ebx
1408b4a48: mov    DWORD PTR [rsp+0x28],edi
1408b4a4c: mov    DWORD PTR [rsp+0x20],esi
1408b4a50: xor    r8d,r8d
1408b4a53: mov    edx,DWORD PTR [rip+0xfef647]        # 0x1418a40a0
1408b4a59: lea    rcx,[rbp-0x50]
1408b4a5d: call   0x1400bb380
1408b4a62: mov    edx,DWORD PTR [rsp+0x40]
1408b4a66: lea    rcx,[rbp-0x50]
1408b4a6a: call   0x14140f200
1408b4a6f: mov    eax,DWORD PTR [rbp-0x50]
1408b4a72: mov    DWORD PTR [rip+0xfef628],eax        # 0x1418a40a0
1408b4a78: jmp    0x1408b4b70
1408b4a7d: mov    BYTE PTR [rip+0xfef620],0x0        # 0x1418a40a4
1408b4a84: jmp    0x1408b4b70
1408b4a89: cmp    BYTE PTR [rip+0xfef5ec],0x0        # 0x1418a407c
1408b4a90: je     0x1408b4b70
1408b4a96: cmp    BYTE PTR [rip+0x1adbb38],0x0        # 0x1423905d5
1408b4a9d: je     0x1408b4b69
1408b4aa3: cmp    BYTE PTR [rip+0x1adbb24],0x0        # 0x1423905ce
1408b4aaa: je     0x1408b4b69
1408b4ab0: mov    r14d,0xffffffff
1408b4ab6: test   eax,eax
1408b4ab8: jne    0x1408b4ac8
1408b4aba: mov    rax,QWORD PTR [rip+0xfecd67]        # 0x1418a1828
1408b4ac1: mov    r14d,DWORD PTR [rax+0x118]
1408b4ac8: lea    esi,[rbx+0x4]
1408b4acb: lea    rcx,[rip+0xfef58e]        # 0x1418a4060
1408b4ad2: call   0x14006ee50
1408b4ad7: test   rax,rax
1408b4ada: jne    0x1408b4adf
1408b4adc: lea    esi,[rbx+0xa]
1408b4adf: mov    ebx,0xd
1408b4ae4: cmp    r14d,0xffffffff
1408b4ae8: cmove  ebx,r12d
1408b4aec: add    ebx,esi
1408b4aee: lea    ecx,[rdi-0x1]
1408b4af1: sub    ecx,ebx
1408b4af3: inc    ecx
1408b4af5: mov    eax,0x55555556
1408b4afa: imul   ecx
1408b4afc: mov    esi,edx
1408b4afe: shr    esi,0x1f
1408b4b01: add    esi,edx
1408b4b03: lea    rcx,[rip+0xfef556]        # 0x1418a4060
1408b4b0a: call   0x14006ee50
1408b4b0f: lea    edi,[rbx+0x1]
1408b4b12: lea    ebx,[rbx+rsi*2]
1408b4b15: add    ebx,0xfffffffe
1408b4b18: add    ebx,esi
1408b4b1a: lea    rcx,[rbp-0x50]
1408b4b1e: call   0x1400bb360
1408b4b23: lea    rcx,[rip+0xfef536]        # 0x1418a4060
1408b4b2a: call   0x14006ee50
1408b4b2f: lea    r9d,[rax-0x1]
1408b4b33: mov    DWORD PTR [rsp+0x30],ebx
1408b4b37: mov    DWORD PTR [rsp+0x28],edi
1408b4b3b: mov    DWORD PTR [rsp+0x20],esi
1408b4b3f: xor    r8d,r8d
1408b4b42: mov    edx,DWORD PTR [rip+0xfef530]        # 0x1418a4078
1408b4b48: lea    rcx,[rbp-0x50]
1408b4b4c: call   0x1400bb380
1408b4b51: mov    edx,DWORD PTR [rsp+0x40]
1408b4b55: lea    rcx,[rbp-0x50]
1408b4b59: call   0x14140f200
1408b4b5e: mov    eax,DWORD PTR [rbp-0x50]
1408b4b61: mov    DWORD PTR [rip+0xfef511],eax        # 0x1418a4078
1408b4b67: jmp    0x1408b4b70
1408b4b69: mov    BYTE PTR [rip+0xfef50c],0x0        # 0x1418a407c
1408b4b70: cmp    BYTE PTR [rip+0xfee181],0x0        # 0x1418a2cf8
1408b4b77: je     0x1408b4ba2
1408b4b79: lea    rdx,[rsp+0x50]
1408b4b7e: lea    rcx,[rsp+0x40]
1408b4b83: call   0x140c33370
1408b4b88: mov    r8d,DWORD PTR [rsp+0x50]
1408b4b8d: mov    edx,DWORD PTR [rsp+0x40]
1408b4b91: lea    rcx,[rip+0xfee160]        # 0x1418a2cf8
1408b4b98: call   0x1401ff950
1408b4b9d: jmp    0x1408b4c2a
1408b4ba2: cmp    BYTE PTR [rip+0xfee39f],0x0        # 0x1418a2f48
1408b4ba9: je     0x1408b4bd8
1408b4bab: lea    r8,[rsp+0x50]
1408b4bb0: lea    rdx,[rsp+0x40]
1408b4bb5: lea    rcx,[rip+0xfeca14]        # 0x1418a15d0
1408b4bbc: call   0x14041f640
1408b4bc1: mov    r8d,DWORD PTR [rsp+0x50]
1408b4bc6: mov    edx,DWORD PTR [rsp+0x40]
1408b4bca: lea    rcx,[rip+0xfee377]        # 0x1418a2f48
1408b4bd1: call   0x14020d6a0
1408b4bd6: jmp    0x1408b4c2a
1408b4bd8: cmp    BYTE PTR [rip+0xfece79],0x0        # 0x1418a1a58
1408b4bdf: je     0x1408b4c0e
1408b4be1: lea    r8,[rsp+0x50]
1408b4be6: lea    rdx,[rsp+0x40]
1408b4beb: lea    rcx,[rip+0xfec9de]        # 0x1418a15d0
1408b4bf2: call   0x14041f640
1408b4bf7: mov    r8d,DWORD PTR [rsp+0x50]
1408b4bfc: mov    edx,DWORD PTR [rsp+0x40]
1408b4c00: lea    rcx,[rip+0xfece51]        # 0x1418a1a58
1408b4c07: call   0x14021c3b0
1408b4c0c: jmp    0x1408b4c2a
1408b4c0e: lea    rcx,[rip+0xfedd23]        # 0x1418a2938
1408b4c15: call   0x14030c4a0
1408b4c1a: test   al,al
1408b4c1c: je     0x1408b4c2a
1408b4c1e: lea    rcx,[rip+0xfedd13]        # 0x1418a2938
1408b4c25: call   0x1408b1850
1408b4c2a: cmp    BYTE PTR [rip+0xfeea7f],0x0        # 0x1418a36b0
1408b4c31: je     0x1408b4d7d
1408b4c37: cmp    DWORD PTR [rip+0x1b18b3a],0x0        # 0x1423cd778
1408b4c3e: jle    0x1408b4d7d
1408b4c44: mov    rax,QWORD PTR [rip+0x1b18b25]        # 0x1423cd770
1408b4c4b: test   BYTE PTR [rax],0x1
1408b4c4e: je     0x1408b4d7d
1408b4c54: cmp    BYTE PTR [rip+0xfeea6d],0x0        # 0x1418a36c8
1408b4c5b: je     0x1408b4d7d
1408b4c61: cmp    BYTE PTR [rip+0x1adb96d],0x0        # 0x1423905d5
1408b4c68: je     0x1408b4d76
1408b4c6e: cmp    BYTE PTR [rip+0x1adb959],0x0        # 0x1423905ce
1408b4c75: je     0x1408b4d76
1408b4c7b: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b4c83: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b4c8b: lea    r8,[rsp+0x40]
1408b4c90: lea    rdx,[rsp+0x50]
1408b4c95: lea    rcx,[rip+0x1d95754]        # 0x14264a3f0
1408b4c9c: call   0x1400bb340
1408b4ca1: lea    r8,[rsp+0x48]
1408b4ca6: lea    rdx,[rsp+0x60]
1408b4cab: lea    rcx,[rip+0xfec91e]        # 0x1418a15d0
1408b4cb2: call   0x14041f640
1408b4cb7: mov    ecx,DWORD PTR [rip+0xfee9f7]        # 0x1418a36b4
1408b4cbd: test   ecx,ecx
1408b4cbf: je     0x1408b4ce9
1408b4cc1: sub    ecx,0x1
1408b4cc4: je     0x1408b4cdf
1408b4cc6: cmp    ecx,0x2
1408b4cc9: jne    0x1408b4cd5
1408b4ccb: mov    ebx,r13d
1408b4cce: mov    ecx,0x34
1408b4cd3: jmp    0x1408b4cf1
1408b4cd5: mov    ebx,DWORD PTR [rsp+0x48]
1408b4cd9: mov    ecx,DWORD PTR [rsp+0x48]
1408b4cdd: jmp    0x1408b4cf1
1408b4cdf: mov    ebx,r12d
1408b4ce2: mov    ecx,0x2c
1408b4ce7: jmp    0x1408b4cf1
1408b4ce9: mov    ebx,0x4
1408b4cee: mov    ecx,r15d
1408b4cf1: add    ebx,0x16
1408b4cf4: add    ecx,0xfffffffe
1408b4cf7: sub    ecx,ebx
1408b4cf9: inc    ecx
1408b4cfb: mov    eax,0x55555556
1408b4d00: imul   ecx
1408b4d02: mov    r14d,edx
1408b4d05: shr    r14d,0x1f
1408b4d09: add    r14d,edx
1408b4d0c: lea    rcx,[rip+0x1d9601d]        # 0x14264ad30
1408b4d13: call   0x14006f370
1408b4d18: add    eax,0x5
1408b4d1b: cdq
1408b4d1c: and    edx,0x7
1408b4d1f: lea    edi,[rdx+rax*1]
1408b4d22: sar    edi,0x3
1408b4d25: lea    esi,[rbx+0x1]
1408b4d28: lea    ebx,[rbx+r14*2]
1408b4d2c: add    ebx,0xfffffffe
1408b4d2f: add    ebx,r14d
1408b4d32: lea    rcx,[rbp-0x50]
1408b4d36: call   0x1400bb360
1408b4d3b: lea    r9d,[rdi-0x1]
1408b4d3f: mov    DWORD PTR [rsp+0x30],ebx
1408b4d43: mov    DWORD PTR [rsp+0x28],esi
1408b4d47: mov    DWORD PTR [rsp+0x20],r14d
1408b4d4c: xor    r8d,r8d
1408b4d4f: mov    edx,DWORD PTR [rip+0xfee96f]        # 0x1418a36c4
1408b4d55: lea    rcx,[rbp-0x50]
1408b4d59: call   0x1400bb380
1408b4d5e: mov    edx,DWORD PTR [rsp+0x40]
1408b4d62: lea    rcx,[rbp-0x50]
1408b4d66: call   0x14140f200
1408b4d6b: mov    eax,DWORD PTR [rbp-0x50]
1408b4d6e: mov    DWORD PTR [rip+0xfee950],eax        # 0x1418a36c4
1408b4d74: jmp    0x1408b4d7d
1408b4d76: mov    BYTE PTR [rip+0xfee94b],0x0        # 0x1418a36c8
1408b4d7d: movzx  eax,BYTE PTR [rip+0xfee6fc]        # 0x1418a3480
1408b4d84: and    al,0x3
1408b4d86: cmp    al,0x3
1408b4d88: jne    0x1408b4d9b
1408b4d8a: lea    rcx,[rip+0xfee64f]        # 0x1418a33e0
1408b4d91: mov    rax,QWORD PTR [rip+0xfee648]        # 0x1418a33e0
1408b4d98: call   QWORD PTR [rax+0x10]
1408b4d9b: cmp    BYTE PTR [rip+0xfee7f6],0x0        # 0x1418a3598
1408b4da2: je     0x1408b4ec7
1408b4da8: lea    rdx,[rsp+0x48]
1408b4dad: lea    rcx,[rsp+0x60]
1408b4db2: call   0x140c33370
1408b4db7: cmp    QWORD PTR [rip+0xfee881],0x0        # 0x1418a3640
1408b4dbf: je     0x1408b4df1
1408b4dc1: cmp    DWORD PTR [rip+0xfee8d8],0x50        # 0x1418a36a0
1408b4dc8: jne    0x1408b4ec7
1408b4dce: lea    rcx,[rip+0xfee8b3]        # 0x1418a3688
1408b4dd5: call   0x14006ee50
1408b4dda: lea    rbx,[rip+0xfee8c7]        # 0x1418a36a8
1408b4de1: lea    rcx,[rip+0xfee8c4]        # 0x1418a36ac
1408b4de8: movzx  edx,BYTE PTR [rip+0xfee8bd]        # 0x1418a36ac
1408b4def: jmp    0x1408b4e36
1408b4df1: cmp    BYTE PTR [rip+0xfee7b0],0x0        # 0x1418a35a8
1408b4df8: jne    0x1408b4e08
1408b4dfa: cmp    QWORD PTR [rip+0xfee79e],0x0        # 0x1418a35a0
1408b4e02: je     0x1408b4ec7
1408b4e08: cmp    DWORD PTR [rip+0xfee821],0x50        # 0x1418a3630
1408b4e0f: jne    0x1408b4ec7
1408b4e15: lea    rcx,[rip+0xfee7fc]        # 0x1418a3618
1408b4e1c: call   0x14006ee50
1408b4e21: movzx  edx,BYTE PTR [rip+0xfee814]        # 0x1418a363c
1408b4e28: lea    rcx,[rip+0xfee80d]        # 0x1418a363c
1408b4e2f: lea    rbx,[rip+0xfee802]        # 0x1418a3638
1408b4e36: mov    rdi,rax
1408b4e39: test   dl,dl
1408b4e3b: je     0x1408b4ec7
1408b4e41: cmp    BYTE PTR [rip+0x1adb78d],0x0        # 0x1423905d5
1408b4e48: je     0x1408b4ec4
1408b4e4e: cmp    BYTE PTR [rip+0x1adb779],0x0        # 0x1423905ce
1408b4e55: je     0x1408b4ec4
1408b4e57: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b4e5f: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b4e67: lea    r8,[rsp+0x40]
1408b4e6c: lea    rdx,[rsp+0x50]
1408b4e71: lea    rcx,[rip+0x1d95578]        # 0x14264a3f0
1408b4e78: call   0x1400bb340
1408b4e7d: lea    rcx,[rbp-0x50]
1408b4e81: call   0x1400bb360
1408b4e86: lea    r9d,[rdi-0x1]
1408b4e8a: mov    DWORD PTR [rsp+0x30],0x23
1408b4e92: mov    DWORD PTR [rsp+0x28],0x9
1408b4e9a: mov    DWORD PTR [rsp+0x20],0x1d
1408b4ea2: xor    r8d,r8d
1408b4ea5: mov    edx,DWORD PTR [rbx]
1408b4ea7: lea    rcx,[rbp-0x50]
1408b4eab: call   0x1400bb380
1408b4eb0: mov    edx,DWORD PTR [rsp+0x40]
1408b4eb4: lea    rcx,[rbp-0x50]
1408b4eb8: call   0x14140f200
1408b4ebd: mov    eax,DWORD PTR [rbp-0x50]
1408b4ec0: mov    DWORD PTR [rbx],eax
1408b4ec2: jmp    0x1408b4ec7
1408b4ec4: mov    BYTE PTR [rcx],0x0
1408b4ec7: cmp    BYTE PTR [rip+0xfef142],0x0        # 0x1418a4010
1408b4ece: je     0x1408b4fd6
1408b4ed4: cmp    BYTE PTR [rip+0xfef179],0x0        # 0x1418a4054
1408b4edb: je     0x1408b4fd6
1408b4ee1: cmp    BYTE PTR [rip+0x1adb6ed],0x0        # 0x1423905d5
1408b4ee8: je     0x1408b4fcf
1408b4eee: cmp    BYTE PTR [rip+0x1adb6d9],0x0        # 0x1423905ce
1408b4ef5: je     0x1408b4fcf
1408b4efb: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b4f03: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b4f0b: lea    r8,[rsp+0x40]
1408b4f10: lea    rdx,[rsp+0x50]
1408b4f15: lea    rcx,[rip+0x1d954d4]        # 0x14264a3f0
1408b4f1c: call   0x1400bb340
1408b4f21: lea    r8,[rsp+0x48]
1408b4f26: lea    rdx,[rsp+0x60]
1408b4f2b: lea    rcx,[rip+0xfec69e]        # 0x1418a15d0
1408b4f32: call   0x14041f640
1408b4f37: cmp    DWORD PTR [rip+0xfef0d6],0x0        # 0x1418a4014
1408b4f3e: jne    0x1408b4f4a
1408b4f40: mov    ebx,r13d
1408b4f43: mov    ecx,0x34
1408b4f48: jmp    0x1408b4f52
1408b4f4a: mov    ebx,DWORD PTR [rsp+0x48]
1408b4f4e: mov    ecx,DWORD PTR [rsp+0x48]
1408b4f52: add    ebx,0x4
1408b4f55: dec    ecx
1408b4f57: sub    ecx,ebx
1408b4f59: inc    ecx
1408b4f5b: mov    eax,0x55555556
1408b4f60: imul   ecx
1408b4f62: mov    esi,edx
1408b4f64: shr    esi,0x1f
1408b4f67: add    esi,edx
1408b4f69: lea    rcx,[rip+0xfef0a8]        # 0x1418a4018
1408b4f70: call   0x14006f370
1408b4f75: lea    edi,[rbx+0x1]
1408b4f78: lea    ebx,[rbx+rsi*2]
1408b4f7b: add    ebx,0xfffffffe
1408b4f7e: add    ebx,esi
1408b4f80: lea    rcx,[rbp-0x50]
1408b4f84: call   0x1400bb360
1408b4f89: lea    rcx,[rip+0xfef088]        # 0x1418a4018
1408b4f90: call   0x14006f370
1408b4f95: lea    r9d,[rax-0x1]
1408b4f99: mov    DWORD PTR [rsp+0x30],ebx
1408b4f9d: mov    DWORD PTR [rsp+0x28],edi
1408b4fa1: mov    DWORD PTR [rsp+0x20],esi
1408b4fa5: xor    r8d,r8d
1408b4fa8: mov    edx,DWORD PTR [rip+0xfef0a2]        # 0x1418a4050
1408b4fae: lea    rcx,[rbp-0x50]
1408b4fb2: call   0x1400bb380
1408b4fb7: mov    edx,DWORD PTR [rsp+0x40]
1408b4fbb: lea    rcx,[rbp-0x50]
1408b4fbf: call   0x14140f200
1408b4fc4: mov    eax,DWORD PTR [rbp-0x50]
1408b4fc7: mov    DWORD PTR [rip+0xfef083],eax        # 0x1418a4050
1408b4fcd: jmp    0x1408b4fd6
1408b4fcf: mov    BYTE PTR [rip+0xfef07e],0x0        # 0x1418a4054
1408b4fd6: cmp    BYTE PTR [rip+0xfeeb2b],0x0        # 0x1418a3b08
1408b4fdd: je     0x1408b5182
1408b4fe3: lea    rdx,[rsp+0x48]
1408b4fe8: lea    rcx,[rsp+0x60]
1408b4fed: call   0x140c33370
1408b4ff2: cmp    DWORD PTR [rip+0xfeeb13],0x0        # 0x1418a3b0c
1408b4ff9: jne    0x1408b5002
1408b4ffb: mov    edi,0x34
1408b5000: jmp    0x1408b500b
1408b5002: mov    r13d,DWORD PTR [rsp+0x48]
1408b5007: mov    edi,DWORD PTR [rsp+0x48]
1408b500b: cmp    BYTE PTR [rip+0xfeeb03],0x0        # 0x1418a3b15
1408b5012: je     0x1408b50af
1408b5018: cmp    BYTE PTR [rip+0xfeeaf5],0x0        # 0x1418a3b14
1408b501f: je     0x1408b5182
1408b5025: cmp    BYTE PTR [rip+0x1adb5a9],0x0        # 0x1423905d5
1408b502c: je     0x1408b517b
1408b5032: cmp    BYTE PTR [rip+0x1adb595],0x0        # 0x1423905ce
1408b5039: je     0x1408b517b
1408b503f: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b5047: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b504f: lea    r8,[rsp+0x40]
1408b5054: lea    rdx,[rsp+0x50]
1408b5059: lea    rcx,[rip+0x1d95390]        # 0x14264a3f0
1408b5060: call   0x1400bb340
1408b5065: lea    ebx,[r13+0x4]
1408b5069: lea    ecx,[rdi-0x4]
1408b506c: sub    ecx,ebx
1408b506e: inc    ecx
1408b5070: mov    eax,0x55555556
1408b5075: imul   ecx
1408b5077: mov    esi,edx
1408b5079: shr    esi,0x1f
1408b507c: add    esi,edx
1408b507e: lea    rcx,[rip+0xfeeabb]        # 0x1418a3b40
1408b5085: call   0x14006f450
1408b508a: lea    edi,[rbx+0x1]
1408b508d: lea    ebx,[rbx+rsi*2]
1408b5090: add    ebx,0xfffffffe
1408b5093: add    ebx,esi
1408b5095: lea    rcx,[rbp-0x50]
1408b5099: call   0x1400bb360
1408b509e: lea    rcx,[rip+0xfeea9b]        # 0x1418a3b40
1408b50a5: call   0x14006f450
1408b50aa: jmp    0x1408b5141
1408b50af: cmp    BYTE PTR [rip+0xfeea5e],0x0        # 0x1418a3b14
1408b50b6: je     0x1408b5182
1408b50bc: cmp    BYTE PTR [rip+0x1adb512],0x0        # 0x1423905d5
1408b50c3: je     0x1408b517b
1408b50c9: cmp    BYTE PTR [rip+0x1adb4fe],0x0        # 0x1423905ce
1408b50d0: je     0x1408b517b
1408b50d6: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b50de: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b50e6: lea    r8,[rsp+0x40]
1408b50eb: lea    rdx,[rsp+0x50]
1408b50f0: lea    rcx,[rip+0x1d952f9]        # 0x14264a3f0
1408b50f7: call   0x1400bb340
1408b50fc: lea    ebx,[r13+0x4]
1408b5100: lea    ecx,[rdi-0x4]
1408b5103: sub    ecx,ebx
1408b5105: inc    ecx
1408b5107: mov    eax,0x55555556
1408b510c: imul   ecx
1408b510e: mov    esi,edx
1408b5110: shr    esi,0x1f
1408b5113: add    esi,edx
1408b5115: lea    rcx,[rip+0x1ae264c]        # 0x142397768
1408b511c: call   0x14006ee50
1408b5121: lea    edi,[rbx+0x1]
1408b5124: lea    ebx,[rbx+rsi*2]
1408b5127: add    ebx,0xfffffffe
1408b512a: add    ebx,esi
1408b512c: lea    rcx,[rbp-0x50]
1408b5130: call   0x1400bb360
1408b5135: lea    rcx,[rip+0x1ae262c]        # 0x142397768
1408b513c: call   0x14006ee50
1408b5141: lea    r9d,[rax-0x1]
1408b5145: mov    DWORD PTR [rsp+0x30],ebx
1408b5149: mov    DWORD PTR [rsp+0x28],edi
1408b514d: mov    DWORD PTR [rsp+0x20],esi
1408b5151: xor    r8d,r8d
1408b5154: mov    edx,DWORD PTR [rip+0xfee9b6]        # 0x1418a3b10
1408b515a: lea    rcx,[rbp-0x50]
1408b515e: call   0x1400bb380
1408b5163: mov    edx,DWORD PTR [rsp+0x40]
1408b5167: lea    rcx,[rbp-0x50]
1408b516b: call   0x14140f200
1408b5170: mov    eax,DWORD PTR [rbp-0x50]
1408b5173: mov    DWORD PTR [rip+0xfee997],eax        # 0x1418a3b10
1408b5179: jmp    0x1408b5182
1408b517b: mov    BYTE PTR [rip+0xfee992],0x0        # 0x1418a3b14
1408b5182: cmp    BYTE PTR [rip+0xfeee57],0x0        # 0x1418a3fe0
1408b5189: je     0x1408b529a
1408b518f: cmp    BYTE PTR [rip+0xfeee72],0x0        # 0x1418a4008
1408b5196: je     0x1408b529a
1408b519c: cmp    BYTE PTR [rip+0x1adb432],0x0        # 0x1423905d5
1408b51a3: je     0x1408b5293
1408b51a9: cmp    BYTE PTR [rip+0x1adb41e],0x0        # 0x1423905ce
1408b51b0: je     0x1408b5293
1408b51b6: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b51be: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b51c6: lea    r8,[rsp+0x40]
1408b51cb: lea    rdx,[rsp+0x50]
1408b51d0: lea    rcx,[rip+0x1d95219]        # 0x14264a3f0
1408b51d7: call   0x1400bb340
1408b51dc: lea    r8,[rsp+0x48]
1408b51e1: lea    rdx,[rsp+0x60]
1408b51e6: lea    r13,[rip+0xfec3e3]        # 0x1418a15d0
1408b51ed: mov    rcx,r13
1408b51f0: call   0x14041f640
1408b51f5: mov    ecx,DWORD PTR [rip+0xfeede9]        # 0x1418a3fe4
1408b51fb: test   ecx,ecx
1408b51fd: je     0x1408b520e
1408b51ff: cmp    ecx,0x1
1408b5202: je     0x1408b520e
1408b5204: mov    ebx,DWORD PTR [rsp+0x48]
1408b5208: mov    ecx,DWORD PTR [rsp+0x48]
1408b520c: jmp    0x1408b5216
1408b520e: mov    ebx,0x4
1408b5213: mov    ecx,r15d
1408b5216: add    ebx,0x4
1408b5219: dec    ecx
1408b521b: sub    ecx,ebx
1408b521d: inc    ecx
1408b521f: mov    eax,0x55555556
1408b5224: imul   ecx
1408b5226: mov    esi,edx
1408b5228: shr    esi,0x1f
1408b522b: add    esi,edx
1408b522d: lea    rcx,[rip+0xfeedb4]        # 0x1418a3fe8
1408b5234: call   0x14006f370
1408b5239: lea    edi,[rbx+0x1]
1408b523c: lea    ebx,[rbx+rsi*2]
1408b523f: add    ebx,0xfffffffe
1408b5242: add    ebx,esi
1408b5244: lea    rcx,[rbp-0x50]
1408b5248: call   0x1400bb360
1408b524d: lea    rcx,[rip+0xfeed94]        # 0x1418a3fe8
1408b5254: call   0x14006f370
1408b5259: lea    r9d,[rax-0x1]
1408b525d: mov    DWORD PTR [rsp+0x30],ebx
1408b5261: mov    DWORD PTR [rsp+0x28],edi
1408b5265: mov    DWORD PTR [rsp+0x20],esi
1408b5269: xor    r8d,r8d
1408b526c: mov    edx,DWORD PTR [rip+0xfeed92]        # 0x1418a4004
1408b5272: lea    rcx,[rbp-0x50]
1408b5276: call   0x1400bb380
1408b527b: mov    edx,DWORD PTR [rsp+0x40]
1408b527f: lea    rcx,[rbp-0x50]
1408b5283: call   0x14140f200
1408b5288: mov    eax,DWORD PTR [rbp-0x50]
1408b528b: mov    DWORD PTR [rip+0xfeed73],eax        # 0x1418a4004
1408b5291: jmp    0x1408b52a1
1408b5293: mov    BYTE PTR [rip+0xfeed6e],0x0        # 0x1418a4008
1408b529a: lea    r13,[rip+0xfec32f]        # 0x1418a15d0
1408b52a1: cmp    BYTE PTR [rip+0xfeef40],0x0        # 0x1418a41e8
1408b52a8: je     0x1408b5451
1408b52ae: cmp    BYTE PTR [rip+0xfeef4b],0x0        # 0x1418a4200
1408b52b5: je     0x1408b5451
1408b52bb: cmp    BYTE PTR [rip+0x1adb313],0x0        # 0x1423905d5
1408b52c2: je     0x1408b544a
1408b52c8: cmp    BYTE PTR [rip+0x1adb2ff],0x0        # 0x1423905ce
1408b52cf: je     0x1408b544a
1408b52d5: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b52dd: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b52e5: lea    r8,[rsp+0x40]
1408b52ea: lea    rdx,[rsp+0x50]
1408b52ef: lea    rcx,[rip+0x1d950fa]        # 0x14264a3f0
1408b52f6: call   0x1400bb340
1408b52fb: lea    r8,[rsp+0x48]
1408b5300: lea    rdx,[rsp+0x60]
1408b5305: mov    rcx,r13
1408b5308: call   0x14041f640
1408b530d: mov    edx,DWORD PTR [rip+0xfeeed9]        # 0x1418a41ec
1408b5313: mov    ecx,edx
1408b5315: test   edx,edx
1408b5317: je     0x1408b532d
1408b5319: sub    ecx,0x1
1408b531c: je     0x1408b532d
1408b531e: cmp    ecx,0x1
1408b5321: je     0x1408b532d
1408b5323: mov    esi,DWORD PTR [rsp+0x48]
1408b5327: mov    ebx,DWORD PTR [rsp+0x48]
1408b532b: jmp    0x1408b5335
1408b532d: mov    esi,0x4
1408b5332: mov    ebx,r15d
1408b5335: cmp    BYTE PTR [rip+0xfeeec5],0x0        # 0x1418a4201
1408b533c: je     0x1408b5341
1408b533e: sub    ebx,0x19
1408b5341: xor    r14d,r14d
1408b5344: cmp    edx,0x2
1408b5347: jne    0x1408b5389
1408b5349: lea    rdx,[rip+0x1ae45a0]        # 0x1423998f0
1408b5350: mov    ecx,DWORD PTR [rip+0xfeee9e]        # 0x1418a41f4
1408b5356: call   0x1400b9dc0
1408b535b: test   rax,rax
1408b535e: je     0x1408b53e0
1408b5364: lea    rdx,[rax+0x28]
1408b5368: mov    ecx,DWORD PTR [rip+0xfeee8a]        # 0x1418a41f8
1408b536e: call   0x1400b9dc0
1408b5373: test   rax,rax
1408b5376: je     0x1408b53e0
1408b5378: lea    rcx,[rax+0x828]
1408b537f: call   0x14006ee50
1408b5384: mov    r14,rax
1408b5387: jmp    0x1408b53e0
1408b5389: mov    edx,DWORD PTR [rip+0xfeee61]        # 0x1418a41f0
1408b538f: lea    rcx,[rip+0x1b38b72]        # 0x1423edf08
1408b5396: call   0x140067d50
1408b539b: test   rax,rax
1408b539e: je     0x1408b53e0
1408b53a0: mov    rdx,QWORD PTR [rax]
1408b53a3: mov    rcx,rax
1408b53a6: call   QWORD PTR [rdx+0x18]
1408b53a9: mov    rdi,rax
1408b53ac: test   rax,rax
1408b53af: je     0x1408b53e0
1408b53b1: lea    rcx,[rax+0x48]
1408b53b5: call   0x14006ee50
1408b53ba: mov    r14d,eax
1408b53bd: lea    rcx,[rdi+0x30]
1408b53c1: call   0x14006ee50
1408b53c6: add    r14d,eax
1408b53c9: lea    rcx,[rdi+0x18]
1408b53cd: call   0x14006ee50
1408b53d2: add    r14d,eax
1408b53d5: mov    rcx,rdi
1408b53d8: call   0x14006ee50
1408b53dd: add    r14d,eax
1408b53e0: lea    r8d,[rsi+0x7]
1408b53e4: lea    ecx,[rbx-0x1]
1408b53e7: sub    ecx,r8d
1408b53ea: inc    ecx
1408b53ec: mov    eax,0x55555556
1408b53f1: imul   ecx
1408b53f3: mov    esi,edx
1408b53f5: shr    esi,0x1f
1408b53f8: add    esi,edx
1408b53fa: lea    edi,[r8+0x1]
1408b53fe: lea    ebx,[r8-0x2]
1408b5402: lea    ebx,[rbx+rsi*2]
1408b5405: add    ebx,esi
1408b5407: lea    rcx,[rbp-0x50]
1408b540b: call   0x1400bb360
1408b5410: lea    r9d,[r14-0x1]
1408b5414: mov    DWORD PTR [rsp+0x30],ebx
1408b5418: mov    DWORD PTR [rsp+0x28],edi
1408b541c: mov    DWORD PTR [rsp+0x20],esi
1408b5420: xor    r8d,r8d
1408b5423: mov    edx,DWORD PTR [rip+0xfeedd3]        # 0x1418a41fc
1408b5429: lea    rcx,[rbp-0x50]
1408b542d: call   0x1400bb380
1408b5432: mov    edx,DWORD PTR [rsp+0x40]
1408b5436: lea    rcx,[rbp-0x50]
1408b543a: call   0x14140f200
1408b543f: mov    eax,DWORD PTR [rbp-0x50]
1408b5442: mov    DWORD PTR [rip+0xfeedb4],eax        # 0x1418a41fc
1408b5448: jmp    0x1408b5451
1408b544a: mov    BYTE PTR [rip+0xfeedaf],0x0        # 0x1418a4200
1408b5451: mov    edi,0x14
1408b5456: mov    r15d,0x10
1408b545c: mov    eax,DWORD PTR [rip+0xff3f2a]        # 0x1418a938c
1408b5462: cmp    eax,0x1
1408b5465: jne    0x1408b5577
1408b546b: cmp    BYTE PTR [rip+0xfebfda],0x0        # 0x1418a144c
1408b5472: je     0x1408b5762
1408b5478: cmp    DWORD PTR [rip+0xfeafe9],0x17        # 0x1418a0468
1408b547f: jne    0x1408b5762
1408b5485: cmp    WORD PTR [rip+0xfeafe0],ax        # 0x1418a046c
1408b548c: jne    0x1408b5762
1408b5492: test   BYTE PTR [rip+0xfebf34],al        # 0x1418a13cc
1408b5498: je     0x1408b5762
1408b549e: cmp    BYTE PTR [rip+0x1adb130],0x0        # 0x1423905d5
1408b54a5: je     0x1408b565f
1408b54ab: cmp    BYTE PTR [rip+0x1adb11c],0x0        # 0x1423905ce
1408b54b2: je     0x1408b565f
1408b54b8: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b54c0: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b54c8: lea    r8,[rsp+0x40]
1408b54cd: lea    rdx,[rsp+0x50]
1408b54d2: lea    rcx,[rip+0x1d94f17]        # 0x14264a3f0
1408b54d9: call   0x1400bb340
1408b54de: lea    r8,[rsp+0x48]
1408b54e3: lea    rdx,[rsp+0x60]
1408b54e8: mov    rcx,r13
1408b54eb: call   0x14041f640
1408b54f0: mov    ebx,r15d
1408b54f3: cmp    DWORD PTR [rip+0xfeaf6e],0x17        # 0x1418a0468
1408b54fa: jne    0x1408b5517
1408b54fc: movzx  eax,WORD PTR [rip+0xfeaf69]        # 0x1418a046c
1408b5503: cmp    ax,0x1
1408b5507: jne    0x1408b5510
1408b5509: mov    ebx,0x29
1408b550e: jmp    0x1408b5517
1408b5510: cmp    ax,0x5
1408b5514: cmove  ebx,edi
1408b5517: lea    esi,[rbx-0x1a]
1408b551a: lea    rcx,[rip+0xfebef7]        # 0x1418a1418
1408b5521: call   0x14006f450
1408b5526: mov    rdi,rax
1408b5529: add    ebx,0xfffffffe
1408b552c: lea    rcx,[rbp-0x50]
1408b5530: call   0x1400bb360
1408b5535: lea    r9d,[rdi-0x1]
1408b5539: mov    DWORD PTR [rsp+0x30],ebx
1408b553d: mov    DWORD PTR [rsp+0x28],0x1b
1408b5545: mov    DWORD PTR [rsp+0x20],esi
1408b5549: xor    r8d,r8d
1408b554c: mov    edx,DWORD PTR [rip+0xfebef6]        # 0x1418a1448
1408b5552: lea    rcx,[rbp-0x50]
1408b5556: call   0x1400bb380
1408b555b: mov    edx,DWORD PTR [rsp+0x40]
1408b555f: lea    rcx,[rbp-0x50]
1408b5563: call   0x14140f200
1408b5568: mov    eax,DWORD PTR [rbp-0x50]
1408b556b: mov    DWORD PTR [rip+0xfebed7],eax        # 0x1418a1448
1408b5571: mov    eax,DWORD PTR [rip+0xff3e15]        # 0x1418a938c
1408b5577: cmp    eax,0x7
1408b557a: jne    0x1408b5677
1408b5580: cmp    BYTE PTR [rip+0xfec2f9],0x0        # 0x1418a1880
1408b5587: je     0x1408b5762
1408b558d: cmp    BYTE PTR [rip+0x1adb041],0x0        # 0x1423905d5
1408b5594: je     0x1408b566b
1408b559a: cmp    BYTE PTR [rip+0x1adb02d],0x0        # 0x1423905ce
1408b55a1: je     0x1408b566b
1408b55a7: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b55af: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b55b7: lea    r8,[rsp+0x40]
1408b55bc: lea    rdx,[rsp+0x50]
1408b55c1: lea    rcx,[rip+0x1d94e28]        # 0x14264a3f0
1408b55c8: call   0x1400bb340
1408b55cd: lea    r8,[rsp+0x48]
1408b55d2: lea    rdx,[rsp+0x60]
1408b55d7: mov    rcx,r13
1408b55da: call   0x14041f640
1408b55df: mov    ecx,DWORD PTR [rip+0x1b181a3]        # 0x1423cd788
1408b55e5: add    ecx,0xfffffff1
1408b55e8: mov    eax,0x2aaaaaab
1408b55ed: imul   ecx
1408b55ef: mov    esi,edx
1408b55f1: shr    esi,0x1f
1408b55f4: add    esi,edx
1408b55f6: lea    rcx,[rip+0x1ae21db]        # 0x1423977d8
1408b55fd: call   0x14006ee50
1408b5602: mov    rdi,rax
1408b5605: lea    ecx,[rsi+rsi*2]
1408b5608: lea    ebx,[rcx*2+0x8]
1408b560f: lea    rcx,[rbp-0x50]
1408b5613: call   0x1400bb360
1408b5618: lea    r9d,[rdi-0x1]
1408b561c: mov    DWORD PTR [rsp+0x30],ebx
1408b5620: mov    r14d,0xb
1408b5626: mov    DWORD PTR [rsp+0x28],r14d
1408b562b: mov    DWORD PTR [rsp+0x20],esi
1408b562f: xor    r8d,r8d
1408b5632: mov    edx,DWORD PTR [rip+0xfec244]        # 0x1418a187c
1408b5638: lea    rcx,[rbp-0x50]
1408b563c: call   0x1400bb380
1408b5641: mov    edx,DWORD PTR [rsp+0x40]
1408b5645: lea    rcx,[rbp-0x50]
1408b5649: call   0x14140f200
1408b564e: mov    eax,DWORD PTR [rbp-0x50]
1408b5651: mov    DWORD PTR [rip+0xfec225],eax        # 0x1418a187c
1408b5657: mov    eax,DWORD PTR [rip+0xff3d2f]        # 0x1418a938c
1408b565d: jmp    0x1408b567d
1408b565f: mov    BYTE PTR [rip+0xfebde6],0x0        # 0x1418a144c
1408b5666: jmp    0x1408b5762
1408b566b: mov    BYTE PTR [rip+0xfec20e],0x0        # 0x1418a1880
1408b5672: jmp    0x1408b5762
1408b5677: mov    r14d,0xb
1408b567d: cmp    eax,0x9
1408b5680: jne    0x1408b5762
1408b5686: cmp    BYTE PTR [rip+0x1ae4283],0x0        # 0x142399910
1408b568d: je     0x1408b5762
1408b5693: cmp    BYTE PTR [rip+0x1adaf3b],0x0        # 0x1423905d5
1408b569a: je     0x1408b575b
1408b56a0: cmp    BYTE PTR [rip+0x1adaf27],0x0        # 0x1423905ce
1408b56a7: je     0x1408b575b
1408b56ad: mov    DWORD PTR [rsp+0x50],0xffffffff
1408b56b5: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b56bd: lea    r8,[rsp+0x40]
1408b56c2: lea    rdx,[rsp+0x50]
1408b56c7: lea    rcx,[rip+0x1d94d22]        # 0x14264a3f0
1408b56ce: call   0x1400bb340
1408b56d3: lea    r8,[rsp+0x48]
1408b56d8: lea    rdx,[rsp+0x60]
1408b56dd: mov    rcx,r13
1408b56e0: call   0x14041f640
1408b56e5: mov    ecx,DWORD PTR [rip+0x1b1809d]        # 0x1423cd788
1408b56eb: add    ecx,0xfffffff1
1408b56ee: mov    eax,0x55555556
1408b56f3: imul   ecx
1408b56f5: mov    esi,edx
1408b56f7: shr    esi,0x1f
1408b56fa: add    esi,edx
1408b56fc: lea    rcx,[rip+0x1ae4215]        # 0x142399918
1408b5703: call   0x14006ee50
1408b5708: mov    rdi,rax
1408b570b: lea    ebx,[rsi+0x4]
1408b570e: lea    ebx,[rsi+rbx*2]
1408b5711: lea    rcx,[rbp-0x50]
1408b5715: call   0x1400bb360
1408b571a: lea    r9d,[rdi-0x1]
1408b571e: mov    DWORD PTR [rsp+0x30],ebx
1408b5722: mov    DWORD PTR [rsp+0x28],r14d
1408b5727: mov    DWORD PTR [rsp+0x20],esi
1408b572b: xor    r8d,r8d
1408b572e: mov    edx,DWORD PTR [rip+0x1ae41d8]        # 0x14239990c
1408b5734: lea    rcx,[rbp-0x50]
1408b5738: call   0x1400bb380
1408b573d: mov    edx,DWORD PTR [rsp+0x40]
1408b5741: lea    rcx,[rbp-0x50]
1408b5745: call   0x14140f200
1408b574a: mov    eax,DWORD PTR [rbp-0x50]
1408b574d: mov    DWORD PTR [rip+0x1ae41b9],eax        # 0x14239990c
1408b5753: mov    eax,DWORD PTR [rip+0xff3c33]        # 0x1418a938c
1408b5759: jmp    0x1408b5762
1408b575b: mov    BYTE PTR [rip+0x1ae41ae],0x0        # 0x142399910
1408b5762: cmp    WORD PTR [rip+0x1ae4a8e],0x0        # 0x14239a1f8
1408b576a: jne    0x1408b5986
1408b5770: cmp    eax,0xffffffff
1408b5773: jne    0x1408b5986
1408b5779: cmp    BYTE PTR [rip+0xff1a80],0x0        # 0x1418a7200
1408b5780: jne    0x1408b5986
1408b5786: cmp    BYTE PTR [rip+0xff0beb],0x0        # 0x1418a6378
1408b578d: jne    0x1408b5986
1408b5793: cmp    BYTE PTR [rip+0xff2356],0x0        # 0x1418a7af0
1408b579a: jne    0x1408b5986
1408b57a0: cmp    BYTE PTR [rip+0xfeeb89],0x0        # 0x1418a4330
1408b57a7: jne    0x1408b5986
1408b57ad: cmp    BYTE PTR [rip+0xfec7c4],0x0        # 0x1418a1f78
1408b57b4: jne    0x1408b5986
1408b57ba: cmp    BYTE PTR [rip+0xfec9ef],0x0        # 0x1418a21b0
1408b57c1: jne    0x1408b5986
1408b57c7: cmp    BYTE PTR [rip+0xfecf42],0x0        # 0x1418a2710
1408b57ce: jne    0x1408b5986
1408b57d4: cmp    BYTE PTR [rip+0xfed2ed],0x0        # 0x1418a2ac8
1408b57db: jne    0x1408b5986
1408b57e1: lea    rcx,[rip+0xfed150]        # 0x1418a2938
1408b57e8: call   0x14030c4a0
1408b57ed: test   al,al
1408b57ef: jne    0x1408b5986
1408b57f5: cmp    BYTE PTR [rip+0x1adadda],al        # 0x1423905d5
1408b57fb: je     0x1408b5986
1408b5801: lea    r8,[rsp+0x70]
1408b5806: lea    rdx,[rsp+0x50]
1408b580b: lea    rcx,[rip+0x1d94bde]        # 0x14264a3f0
1408b5812: call   0x1400bb340
1408b5817: lea    r8,[rsp+0x58]
1408b581c: lea    rdx,[rsp+0x40]
1408b5821: lea    rcx,[rip+0x1d94bc8]        # 0x14264a3f0
1408b5828: call   0x14014d5d0
1408b582d: mov    eax,DWORD PTR [rip+0x1d94c3d]        # 0x14264a470
1408b5833: shl    eax,0x5
1408b5836: cdq
1408b5837: and    edx,0x7f
1408b583a: lea    ecx,[rdx+rax*1]
1408b583d: sar    ecx,0x7
1408b5840: mov    eax,DWORD PTR [rsp+0x40]
1408b5844: cdq
1408b5845: idiv   ecx
1408b5847: mov    edi,eax
1408b5849: mov    eax,DWORD PTR [rsp+0x58]
1408b584d: cdq
1408b584e: idiv   ecx
1408b5850: mov    ebx,eax
1408b5852: xor    edx,edx
1408b5854: lea    rcx,[rip+0x1b17f15]        # 0x1423cd770
1408b585b: call   0x140071f90
1408b5860: test   al,al
1408b5862: jne    0x1408b5896
1408b5864: mov    edi,DWORD PTR [rsp+0x50]
1408b5868: mov    ebx,DWORD PTR [rsp+0x70]
1408b586c: cmp    DWORD PTR [rsp+0x40],0x0
1408b5871: jl     0x1408b5986
1408b5877: cmp    edi,DWORD PTR [rip+0x1b17f07]        # 0x1423cd784
1408b587d: jge    0x1408b5986
1408b5883: cmp    DWORD PTR [rsp+0x58],0x0
1408b5888: jl     0x1408b5986
1408b588e: cmp    ebx,DWORD PTR [rip+0x1b17ef4]        # 0x1423cd788
1408b5894: jmp    0x1408b58bf
1408b5896: cmp    DWORD PTR [rsp+0x40],0x0
1408b589b: jl     0x1408b5986
1408b58a1: mov    rax,QWORD PTR [rip+0x1d94b60]        # 0x14264a408
1408b58a8: cmp    edi,DWORD PTR [rax+0x4]
1408b58ab: jge    0x1408b5986
1408b58b1: cmp    DWORD PTR [rsp+0x58],0x0
1408b58b6: jl     0x1408b5986
1408b58bc: cmp    ebx,DWORD PTR [rax+0x8]
1408b58bf: jge    0x1408b5986
1408b58c5: add    ebx,DWORD PTR [rip+0x1abee61]        # 0x14237472c
1408b58cb: add    edi,DWORD PTR [rip+0x1abee57]        # 0x142374728
1408b58d1: js     0x1408b5986
1408b58d7: cmp    edi,DWORD PTR [rip+0x1c327ff]        # 0x1424e80dc
1408b58dd: jge    0x1408b5986
1408b58e3: test   ebx,ebx
1408b58e5: js     0x1408b5986
1408b58eb: cmp    ebx,DWORD PTR [rip+0x1c327ef]        # 0x1424e80e0
1408b58f1: jge    0x1408b5986
1408b58f7: call   QWORD PTR [rip+0xd2f8eb]        # 0x1415e51e8
1408b58fd: mov    edx,eax
1408b58ff: mov    r8d,DWORD PTR [rip+0x1abee1e]        # 0x142374724
1408b5906: mov    eax,DWORD PTR [rip+0xff75e8]        # 0x1418acef4
1408b590c: cmp    edx,eax
1408b590e: jb     0x1408b593c
1408b5910: lea    ecx,[rdx-0x1f4]
1408b5916: cmp    ecx,eax
1408b5918: jae    0x1408b593c
1408b591a: movsx  ecx,WORD PTR [rip+0xff75d7]        # 0x1418acef8
1408b5921: cmp    ecx,edi
1408b5923: jne    0x1408b593c
1408b5925: movsx  ecx,WORD PTR [rip+0xff75ce]        # 0x1418acefa
1408b592c: cmp    ecx,ebx
1408b592e: jne    0x1408b593c
1408b5930: movsx  eax,WORD PTR [rip+0xff75c5]        # 0x1418acefc
1408b5937: cmp    eax,r8d
1408b593a: je     0x1408b598b
1408b593c: mov    DWORD PTR [rip+0xff75b2],edx        # 0x1418acef4
1408b5942: mov    WORD PTR [rip+0xff75af],di        # 0x1418acef8
1408b5949: mov    WORD PTR [rip+0xff75aa],bx        # 0x1418acefa
1408b5950: mov    WORD PTR [rip+0xff75a4],r8w        # 0x1418acefc
1408b5958: mov    edx,0x2
1408b595d: lea    rcx,[rip+0x1d94a8c]        # 0x14264a3f0
1408b5964: call   0x140ae7c00
1408b5969: movzx  r9d,WORD PTR [rip+0x1abedb3]        # 0x142374724
1408b5971: movzx  r8d,bx
1408b5975: movzx  edx,di
1408b5978: lea    rcx,[rip+0x1b1bb71]        # 0x1423d14f0
1408b597f: call   0x1404085f0
1408b5984: jmp    0x1408b598b
1408b5986: call   0x1408bf060
1408b598b: movzx  eax,WORD PTR [rip+0x1ae4866]        # 0x14239a1f8
1408b5992: test   ax,ax
1408b5995: je     0x1408b59bb
1408b5997: cmp    ax,0x1
1408b599b: jne    0x1408b6c85
1408b59a1: cmp    BYTE PTR [rip+0x1ae4b08],0x0        # 0x14239a4b0
1408b59a8: jne    0x1408b6c85
1408b59ae: cmp    BYTE PTR [rip+0x1ae4af3],0x0        # 0x14239a4a8
1408b59b5: jne    0x1408b6c85
1408b59bb: cmp    BYTE PTR [rip+0xff1636],0x0        # 0x1418a6ff8
1408b59c2: je     0x1408b59f8
1408b59c4: cmp    BYTE PTR [rip+0xff16be],0x0        # 0x1418a7089
1408b59cb: jne    0x1408b6c85
1408b59d1: cmp    BYTE PTR [rip+0xff16b0],0x0        # 0x1418a7088
1408b59d8: jne    0x1408b6c85
1408b59de: cmp    BYTE PTR [rip+0xff16c5],0x0        # 0x1418a70aa
1408b59e5: jne    0x1408b6c85
1408b59eb: cmp    BYTE PTR [rip+0xff16b7],0x0        # 0x1418a70a9
1408b59f2: jne    0x1408b6c85
1408b59f8: cmp    BYTE PTR [rip+0xfee931],0x0        # 0x1418a4330
1408b59ff: je     0x1408b5a0e
1408b5a01: cmp    BYTE PTR [rip+0xff0250],0x0        # 0x1418a5c58
1408b5a08: jne    0x1408b6c85
1408b5a0e: cmp    BYTE PTR [rip+0xff17eb],0x0        # 0x1418a7200
1408b5a15: jne    0x1408b6c85
1408b5a1b: cmp    BYTE PTR [rip+0xff0956],0x0        # 0x1418a6378
1408b5a22: jne    0x1408b6c85
1408b5a28: cmp    BYTE PTR [rip+0xfec549],0x0        # 0x1418a1f78
1408b5a2f: jne    0x1408b6c85
1408b5a35: cmp    BYTE PTR [rip+0xfec774],0x0        # 0x1418a21b0
1408b5a3c: jne    0x1408b6c85
1408b5a42: cmp    BYTE PTR [rip+0xfedb4f],0x0        # 0x1418a3598
1408b5a49: jne    0x1408b6c85
1408b5a4f: lea    rcx,[rip+0x1c2de2a]        # 0x1424e3880
1408b5a56: call   0x14006ee50
1408b5a5b: test   rax,rax
1408b5a5e: jne    0x1408b6c85
1408b5a64: cmp    BYTE PTR [rip+0xfecca6],al        # 0x1418a2710
1408b5a6a: jne    0x1408b6c85
1408b5a70: cmp    BYTE PTR [rip+0xfecc6a],al        # 0x1418a26e0
1408b5a76: jne    0x1408b6c85
1408b5a7c: cmp    BYTE PTR [rip+0xfecb0e],al        # 0x1418a2590
1408b5a82: jne    0x1408b6c85
1408b5a88: cmp    BYTE PTR [rip+0xfed26a],al        # 0x1418a2cf8
1408b5a8e: jne    0x1408b6c85
1408b5a94: cmp    BYTE PTR [rip+0xfed4ae],al        # 0x1418a2f48
1408b5a9a: jne    0x1408b6c85
1408b5aa0: cmp    BYTE PTR [rip+0xfee702],al        # 0x1418a41a8
1408b5aa6: jne    0x1408b6c85
1408b5aac: cmp    BYTE PTR [rip+0xfebfa6],al        # 0x1418a1a58
1408b5ab2: jne    0x1408b6c85
1408b5ab8: cmp    BYTE PTR [rip+0xff17e2],al        # 0x1418a72a0
1408b5abe: jne    0x1408b6c85
1408b5ac4: cmp    BYTE PTR [rip+0xfecffe],al        # 0x1418a2ac8
1408b5aca: jne    0x1408b6c85
1408b5ad0: cmp    BYTE PTR [rip+0xfee762],al        # 0x1418a4238
1408b5ad6: jne    0x1408b6c85
1408b5adc: cmp    DWORD PTR [rip+0xff38a9],0x2        # 0x1418a938c
1408b5ae3: je     0x1408b6c85
1408b5ae9: cmp    BYTE PTR [rip+0x187c06f],al        # 0x142131b5e
1408b5aef: jne    0x1408b6c85
1408b5af5: mov    r13,QWORD PTR [rbp-0x78]
1408b5af9: cmp    BYTE PTR [r13+0x205],al
1408b5b00: je     0x1408b5b10
1408b5b02: mov    BYTE PTR [rip+0x187c055],0x1        # 0x142131b5e
1408b5b09: mov    BYTE PTR [r13+0x205],al
1408b5b10: mov    r8d,DWORD PTR [rip+0x1ad24ad]        # 0x142387fc4
1408b5b17: mov    eax,0x51eb851f
1408b5b1c: imul   r8d
1408b5b1f: sar    edx,0x5
1408b5b22: mov    eax,edx
1408b5b24: shr    eax,0x1f
1408b5b27: add    edx,eax
1408b5b29: imul   ecx,edx,0x64
1408b5b2c: cmp    r8d,ecx
1408b5b2f: jne    0x1408b5b41
1408b5b31: mov    BYTE PTR [rip+0x187c037],0x1        # 0x142131b6f
1408b5b38: mov    BYTE PTR [rip+0x187c02f],0x1        # 0x142131b6e
1408b5b3f: jmp    0x1408b5b4a
1408b5b41: cmp    BYTE PTR [rip+0x187c026],0x0        # 0x142131b6e
1408b5b48: je     0x1408b5b56
1408b5b4a: call   0x140a80510
1408b5b4f: mov    r8d,DWORD PTR [rip+0x1ad246e]        # 0x142387fc4
1408b5b56: cmp    BYTE PTR [rip+0x187c012],0x0        # 0x142131b6f
1408b5b5d: je     0x1408b5b72
1408b5b5f: lea    rcx,[rip+0x1b1b98a]        # 0x1423d14f0
1408b5b66: call   0x141482410
1408b5b6b: mov    r8d,DWORD PTR [rip+0x1ad2452]        # 0x142387fc4
1408b5b72: mov    ecx,DWORD PTR [rip+0x1abebbc]        # 0x142374734
1408b5b78: add    ecx,0x90
1408b5b7e: mov    eax,0x24fc9f6f
1408b5b83: imul   ecx
1408b5b85: sar    edx,0x15
1408b5b88: mov    eax,edx
1408b5b8a: shr    eax,0x1f
1408b5b8d: add    edx,eax
1408b5b8f: imul   eax,edx,0xdd7c00
1408b5b95: sub    ecx,eax
1408b5b97: mov    DWORD PTR [rip+0x1abeb97],ecx        # 0x142374734
1408b5b9d: lea    ecx,[r8+0x1]
1408b5ba1: mov    eax,0x299c335d
1408b5ba6: imul   ecx
1408b5ba8: sar    edx,0x10
1408b5bab: mov    eax,edx
1408b5bad: shr    eax,0x1f
1408b5bb0: add    edx,eax
1408b5bb2: imul   eax,edx,0x62700
1408b5bb8: sub    ecx,eax
1408b5bba: mov    DWORD PTR [rip+0x1ad2404],ecx        # 0x142387fc4
1408b5bc0: cmp    DWORD PTR [rip+0xfe66fd],0x4        # 0x14189c2c4
1408b5bc7: jne    0x1408b61e3
1408b5bcd: mov    eax,0x66666667
1408b5bd2: imul   ecx
1408b5bd4: sar    edx,0x2
1408b5bd7: mov    eax,edx
1408b5bd9: shr    eax,0x1f
1408b5bdc: add    edx,eax
1408b5bde: lea    eax,[rdx+rdx*4]
1408b5be1: add    eax,eax
1408b5be3: xor    r15d,r15d
1408b5be6: cmp    ecx,eax
1408b5be8: jne    0x1408b5c4e
1408b5bea: mov    esi,r15d
1408b5bed: mov    r14d,0x13
1408b5bf3: nop    DWORD PTR [rax+0x0]
1408b5bf7: nop    WORD PTR [rax+rax*1+0x0]
1408b5c00: lea    rdx,[rsi+0x1]
1408b5c04: lea    rcx,[rip+0x1ddfeb5]        # 0x142695ac0
1408b5c0b: call   0x14006f250
1408b5c10: mov    ebx,DWORD PTR [rax]
1408b5c12: mov    rdx,rsi
1408b5c15: lea    rcx,[rip+0x1ddfea4]        # 0x142695ac0
1408b5c1c: call   0x14006f250
1408b5c21: mov    DWORD PTR [rax],ebx
1408b5c23: inc    rsi
1408b5c26: sub    r14,0x1
1408b5c2a: jne    0x1408b5c00
1408b5c2c: mov    edx,0x13
1408b5c31: lea    rcx,[rip+0x1ddfe88]        # 0x142695ac0
1408b5c38: call   0x14006f250
1408b5c3d: mov    DWORD PTR [rax],r15d
1408b5c40: xor    edx,edx
1408b5c42: lea    rcx,[rip+0x1b1b8a7]        # 0x1423d14f0
1408b5c49: call   0x141449dc0
1408b5c4e: lea    rcx,[rip+0x1b1b89b]        # 0x1423d14f0
1408b5c55: call   0x14145de60
1408b5c5a: lea    rcx,[rip+0x1b1b88f]        # 0x1423d14f0
1408b5c61: call   0x140ab6840
1408b5c66: lea    rcx,[rip+0x1b1b883]        # 0x1423d14f0
1408b5c6d: call   0x140a539e0
1408b5c72: lea    rcx,[rip+0x1b1b877]        # 0x1423d14f0
1408b5c79: call   0x1414d1670
1408b5c7e: mov    eax,DWORD PTR [rip+0x1ae3f48]        # 0x142399bcc
1408b5c84: test   eax,eax
1408b5c86: jle    0x1408b5d54
1408b5c8c: mov    ebx,r15d
1408b5c8f: lea    r11,[rip+0x1ae3f0e]        # 0x142399ba4
1408b5c96: lea    rdi,[rip+0x1ae3e53]        # 0x142399af0
1408b5c9d: lea    rsi,[rip+0x1ae3ec4]        # 0x142399b68
1408b5ca4: nop    DWORD PTR [rax+0x0]
1408b5ca8: nop    DWORD PTR [rax+rax*1+0x0]
1408b5cb0: inc    DWORD PTR [r11]
1408b5cb3: mov    eax,DWORD PTR [rip+0x1ae3f13]        # 0x142399bcc
1408b5cb9: cmp    DWORD PTR [r11],0x28
1408b5cbd: jl     0x1408b5d3e
1408b5cbf: lea    r10d,[rbx+0x1]
1408b5cc3: cmp    r10d,eax
1408b5cc6: jge    0x1408b5d28
1408b5cc8: mov    r9,rsi
1408b5ccb: mov    r8,rdi
1408b5cce: xchg   ax,ax
1408b5cd0: mov    eax,DWORD PTR [r8+0x4]
1408b5cd4: mov    DWORD PTR [r8],eax
1408b5cd7: mov    eax,DWORD PTR [r8+0x2c]
1408b5cdb: mov    DWORD PTR [r8+0x28],eax
1408b5cdf: mov    eax,DWORD PTR [r8+0x54]
1408b5ce3: mov    DWORD PTR [r8+0x50],eax
1408b5ce7: movzx  eax,WORD PTR [r9+0x2]
1408b5cec: mov    WORD PTR [r9],ax
1408b5cf0: movzx  eax,WORD PTR [r9+0x16]
1408b5cf5: mov    WORD PTR [r9+0x14],ax
1408b5cfa: movzx  eax,WORD PTR [r9+0x2a]
1408b5cff: mov    WORD PTR [r9+0x28],ax
1408b5d04: mov    eax,DWORD PTR [r8+0xb8]
1408b5d0b: mov    DWORD PTR [r8+0xb4],eax
1408b5d12: inc    r10d
1408b5d15: lea    r9,[r9+0x2]
1408b5d19: lea    r8,[r8+0x4]
1408b5d1d: mov    eax,DWORD PTR [rip+0x1ae3ea9]        # 0x142399bcc
1408b5d23: cmp    r10d,eax
1408b5d26: jl     0x1408b5cd0
1408b5d28: dec    ebx
1408b5d2a: sub    r11,0x4
1408b5d2e: sub    rsi,0x2
1408b5d32: sub    rdi,0x4
1408b5d36: dec    eax
1408b5d38: mov    DWORD PTR [rip+0x1ae3e8e],eax        # 0x142399bcc
1408b5d3e: inc    ebx
1408b5d40: add    r11,0x4
1408b5d44: add    rsi,0x2
1408b5d48: add    rdi,0x4
1408b5d4c: cmp    ebx,eax
1408b5d4e: jl     0x1408b5cb0
1408b5d54: mov    eax,DWORD PTR [rip+0x1ae3f02]        # 0x142399c5c
1408b5d5a: test   eax,eax
1408b5d5c: jle    0x1408b5e0e
1408b5d62: mov    ebx,r15d
1408b5d65: lea    r11,[rip+0x1ae3ec8]        # 0x142399c34
1408b5d6c: lea    rdi,[rip+0x1ae3e5d]        # 0x142399bd0
1408b5d73: lea    rsi,[rip+0x1ae3e7e]        # 0x142399bf8
1408b5d7a: nop    WORD PTR [rax+rax*1+0x0]
1408b5d80: inc    DWORD PTR [r11]
1408b5d83: mov    eax,DWORD PTR [rip+0x1ae3ed3]        # 0x142399c5c
1408b5d89: cmp    DWORD PTR [r11],0x28
1408b5d8d: jl     0x1408b5df8
1408b5d8f: lea    r10d,[rbx+0x1]
1408b5d93: cmp    r10d,eax
1408b5d96: jge    0x1408b5de2
1408b5d98: mov    r8,rsi
1408b5d9b: mov    r9,rdi
1408b5d9e: xchg   ax,ax
1408b5da0: mov    eax,DWORD PTR [r9+0x4]
1408b5da4: mov    DWORD PTR [r9],eax
1408b5da7: movzx  eax,WORD PTR [r8+0x2]
1408b5dac: mov    WORD PTR [r8],ax
1408b5db0: movzx  eax,WORD PTR [r8+0x16]
1408b5db5: mov    WORD PTR [r8+0x14],ax
1408b5dba: movzx  eax,WORD PTR [r8+0x2a]
1408b5dbf: mov    WORD PTR [r8+0x28],ax
1408b5dc4: mov    eax,DWORD PTR [r9+0x68]
1408b5dc8: mov    DWORD PTR [r9+0x64],eax
1408b5dcc: inc    r10d
1408b5dcf: lea    r8,[r8+0x2]
1408b5dd3: lea    r9,[r9+0x4]
1408b5dd7: mov    eax,DWORD PTR [rip+0x1ae3e7f]        # 0x142399c5c
1408b5ddd: cmp    r10d,eax
1408b5de0: jl     0x1408b5da0
1408b5de2: dec    ebx
1408b5de4: sub    r11,0x4
1408b5de8: sub    rsi,0x2
1408b5dec: sub    rdi,0x4
1408b5df0: dec    eax
1408b5df2: mov    DWORD PTR [rip+0x1ae3e64],eax        # 0x142399c5c
1408b5df8: inc    ebx
1408b5dfa: add    r11,0x4
1408b5dfe: add    rsi,0x2
1408b5e02: add    rdi,0x4
1408b5e06: cmp    ebx,eax
1408b5e08: jl     0x1408b5d80
1408b5e0e: test   BYTE PTR [rip+0x1add853],0x2        # 0x142393668
1408b5e15: je     0x1408b5ea3
1408b5e1b: lea    rcx,[rip+0x1add716]        # 0x142393538
1408b5e22: call   0x14006f370
1408b5e27: mov    rdi,rax
1408b5e2a: sub    edi,0x1
1408b5e2d: js     0x1408b5e9c
1408b5e2f: movsxd rsi,edi
1408b5e32: mov    r14d,0x3
1408b5e38: nop    DWORD PTR [rax+rax*1+0x0]
1408b5e40: mov    rdx,rsi
1408b5e43: lea    rcx,[rip+0x1add6ee]        # 0x142393538
1408b5e4a: call   0x14006f360
1408b5e4f: mov    edx,DWORD PTR [rax]
1408b5e51: lea    rcx,[rip+0x1b2f258]        # 0x1423e50b0
1408b5e58: call   0x140073b70
1408b5e5d: mov    rbx,rax
1408b5e60: test   rax,rax
1408b5e63: je     0x1408b5e94
1408b5e65: xor    edx,edx
1408b5e67: mov    rcx,rax
1408b5e6a: call   0x1400fdcf0
1408b5e6f: mov    edx,0x1
1408b5e74: mov    rcx,rbx
1408b5e77: call   0x1400fdcf0
1408b5e7c: mov    edx,0x2
1408b5e81: mov    rcx,rbx
1408b5e84: call   0x1400fdcf0
1408b5e89: mov    edx,r14d
1408b5e8c: mov    rcx,rbx
1408b5e8f: call   0x1400fdcf0
1408b5e94: dec    rsi
1408b5e97: sub    edi,0x1
1408b5e9a: jns    0x1408b5e40
1408b5e9c: and    DWORD PTR [rip+0x1add7c5],0xfffffffd        # 0x142393668
1408b5ea3: mov    ebx,DWORD PTR [rip+0x1ad211b]        # 0x142387fc4
1408b5ea9: mov    eax,0x51eb851f
1408b5eae: imul   ebx
1408b5eb0: sar    edx,0x5
1408b5eb3: mov    eax,edx
1408b5eb5: shr    eax,0x1f
1408b5eb8: add    edx,eax
1408b5eba: imul   eax,edx,0x64
1408b5ebd: mov    ecx,ebx
1408b5ebf: sub    ecx,eax
1408b5ec1: cmp    ecx,0x28
1408b5ec4: jne    0x1408b5f93
1408b5eca: lea    rcx,[rip+0x1b2f1f7]        # 0x1423e50c8
1408b5ed1: call   0x14006ee50
1408b5ed6: test   rax,rax
1408b5ed9: je     0x1408b5f8d
1408b5edf: mov    rbx,r15
1408b5ee2: nop    DWORD PTR [rax+0x0]
1408b5ee6: data16 nop WORD PTR [rax+rax*1+0x0]
1408b5ef0: mov    rdx,rbx
1408b5ef3: lea    rcx,[rip+0x1b2f1ce]        # 0x1423e50c8
1408b5efa: call   0x14006f220
1408b5eff: mov    rcx,QWORD PTR [rax]
1408b5f02: test   BYTE PTR [rcx+0x110],0x2
1408b5f09: jne    0x1408b5f29
1408b5f0b: mov    rdx,rbx
1408b5f0e: lea    rcx,[rip+0x1b2f1b3]        # 0x1423e50c8
1408b5f15: call   0x14006f220
1408b5f1a: mov    rcx,QWORD PTR [rax]
1408b5f1d: test   DWORD PTR [rcx+0x118],0x1000
1408b5f27: je     0x1408b5f72
1408b5f29: mov    rdx,rbx
1408b5f2c: lea    rcx,[rip+0x1b2f195]        # 0x1423e50c8
1408b5f33: call   0x14006f220
1408b5f38: mov    rdx,QWORD PTR [rax]
1408b5f3b: mov    edx,DWORD PTR [rdx+0x7f8]
1408b5f41: lea    rcx,[rip+0x1c31dd0]        # 0x1424e7d18
1408b5f48: call   0x140072570
1408b5f4d: test   rax,rax
1408b5f50: je     0x1408b5f5b
1408b5f52: test   BYTE PTR [rax+0xec],0x2
1408b5f59: je     0x1408b5f72
1408b5f5b: mov    rdx,rbx
1408b5f5e: lea    rcx,[rip+0x1b2f163]        # 0x1423e50c8
1408b5f65: call   0x14006f220
1408b5f6a: mov    rcx,QWORD PTR [rax]
1408b5f6d: call   0x14136f750
1408b5f72: inc    r15d
1408b5f75: movsxd rbx,r15d
1408b5f78: lea    rcx,[rip+0x1b2f149]        # 0x1423e50c8
1408b5f7f: call   0x14006ee50
1408b5f84: cmp    rbx,rax
1408b5f87: jb     0x1408b5ef0
1408b5f8d: mov    ebx,DWORD PTR [rip+0x1ad2031]        # 0x142387fc4
1408b5f93: mov    eax,0x51eb851f
1408b5f98: imul   ebx
1408b5f9a: sar    edx,0x5
1408b5f9d: mov    eax,edx
1408b5f9f: shr    eax,0x1f
1408b5fa2: add    edx,eax
1408b5fa4: imul   eax,edx,0x64
1408b5fa7: sub    ebx,eax
1408b5fa9: lea    rdx,[rbp-0x80]
1408b5fad: lea    rcx,[rip+0x1b2f114]        # 0x1423e50c8
1408b5fb4: call   0x14006f240
1408b5fb9: lea    rdx,[rbp-0x70]
1408b5fbd: lea    rcx,[rip+0x1b2f104]        # 0x1423e50c8
1408b5fc4: call   0x14006f230
1408b5fc9: lea    r8,[rbp-0x70]
1408b5fcd: lea    rdx,[rsp+0x58]
1408b5fd2: lea    rcx,[rbp-0x80]
1408b5fd6: call   0x14006ee20
1408b5fdb: xor    edx,edx
1408b5fdd: movzx  ecx,BYTE PTR [rax]
1408b5fe0: call   0x1400657b0
1408b5fe5: test   al,al
1408b5fe7: je     0x1408b60a4
1408b5fed: nop    DWORD PTR [rax]
1408b5ff0: lea    rcx,[rbp-0x80]
1408b5ff4: call   0x14006ee10
1408b5ff9: mov    rcx,QWORD PTR [rax]
1408b5ffc: test   BYTE PTR [rcx+0x110],0x2
1408b6003: jne    0x1408b6077
1408b6005: lea    rcx,[rbp-0x80]
1408b6009: call   0x14006ee10
1408b600e: mov    rcx,QWORD PTR [rax]
1408b6011: test   DWORD PTR [rcx+0x110],0x2000000
1408b601b: jne    0x1408b6035
1408b601d: lea    rcx,[rbp-0x80]
1408b6021: call   0x14006ee10
1408b6026: mov    rcx,QWORD PTR [rax]
1408b6029: test   DWORD PTR [rcx+0x110],0x8000000
1408b6033: je     0x1408b6077
1408b6035: cmp    ebx,0x50
1408b6038: jne    0x1408b6066
1408b603a: lea    rcx,[rbp-0x50]
1408b603e: call   0x140072510
1408b6043: mov    DWORD PTR [rbp-0x50],0x81
1408b604a: mov    DWORD PTR [rbp-0x44],0x64
1408b6051: lea    rcx,[rbp-0x80]
1408b6055: call   0x14006ee10
1408b605a: lea    rdx,[rbp-0x50]
1408b605e: mov    rcx,QWORD PTR [rax]
1408b6061: call   0x1413eff80
1408b6066: lea    rcx,[rbp-0x80]
1408b606a: call   0x14006ee10
1408b606f: mov    rcx,QWORD PTR [rax]
1408b6072: call   0x14136eb90
1408b6077: lea    rcx,[rbp-0x80]
1408b607b: call   0x14006ee00
1408b6080: lea    r8,[rbp-0x70]
1408b6084: lea    rdx,[rsp+0x58]
1408b6089: lea    rcx,[rbp-0x80]
1408b608d: call   0x14006ee20
1408b6092: xor    edx,edx
1408b6094: movzx  ecx,BYTE PTR [rax]
1408b6097: call   0x1400657b0
1408b609c: test   al,al
1408b609e: jne    0x1408b5ff0
1408b60a4: call   0x140accde0
1408b60a9: mov    r8d,DWORD PTR [rip+0x1ad1f14]        # 0x142387fc4
1408b60b0: mov    eax,0x51eb851f
1408b60b5: imul   r8d
1408b60b8: sar    edx,0x4
1408b60bb: mov    eax,edx
1408b60bd: shr    eax,0x1f
1408b60c0: add    edx,eax
1408b60c2: imul   eax,edx,0x32
1408b60c5: mov    ecx,r8d
1408b60c8: sub    ecx,eax
1408b60ca: cmp    ecx,r12d
1408b60cd: jne    0x1408b60e2
1408b60cf: lea    rcx,[rip+0x1b1b41a]        # 0x1423d14f0
1408b60d6: call   0x1400b6a40
1408b60db: mov    r8d,DWORD PTR [rip+0x1ad1ee2]        # 0x142387fc4
1408b60e2: mov    eax,0x51eb851f
1408b60e7: imul   r8d
1408b60ea: sar    edx,0x4
1408b60ed: mov    eax,edx
1408b60ef: shr    eax,0x1f
1408b60f2: add    edx,eax
1408b60f4: imul   eax,edx,0x32
1408b60f7: mov    ecx,r8d
1408b60fa: sub    ecx,eax
1408b60fc: cmp    ecx,0x19
1408b60ff: jne    0x1408b6114
1408b6101: lea    rcx,[rip+0x1b39060]        # 0x1423ef168
1408b6108: call   0x1410f3750
1408b610d: mov    r8d,DWORD PTR [rip+0x1ad1eb0]        # 0x142387fc4
1408b6114: mov    eax,0x51eb851f
1408b6119: imul   r8d
1408b611c: sar    edx,0x4
1408b611f: mov    eax,edx
1408b6121: shr    eax,0x1f
1408b6124: add    edx,eax
1408b6126: imul   eax,edx,0x32
1408b6129: sub    r8d,eax
1408b612c: cmp    r8d,0x2d
1408b6130: jne    0x1408b613e
1408b6132: lea    rcx,[rip+0x1b3902f]        # 0x1423ef168
1408b6139: call   0x1410f5a80
1408b613e: lea    rcx,[rbp-0x68]
1408b6142: call   0x140072230
1408b6147: mov    ebx,DWORD PTR [rip+0x1ad1e77]        # 0x142387fc4
1408b614d: mov    eax,0x51eb851f
1408b6152: imul   ebx
1408b6154: sar    edx,0x4
1408b6157: mov    eax,edx
1408b6159: shr    eax,0x1f
1408b615c: add    edx,eax
1408b615e: imul   eax,edx,0x32
1408b6161: sub    ebx,eax
1408b6163: lea    rcx,[rip+0x1b2f2fe]        # 0x1423e5468
1408b616a: call   0x14006ee50
1408b616f: not    ebx
1408b6171: add    eax,ebx
1408b6173: js     0x1408b663b
1408b6179: movsxd rdi,eax
1408b617c: lea    ecx,[rax+0x32]
1408b617f: mov    eax,0x51eb851f
1408b6184: mul    ecx
1408b6186: shr    edx,0x4
1408b6189: mov    esi,edx
1408b618b: nop    DWORD PTR [rax+rax*1+0x0]
1408b6190: mov    rdx,rdi
1408b6193: lea    rcx,[rip+0x1b2f2ce]        # 0x1423e5468
1408b619a: call   0x14006f220
1408b619f: mov    rbx,QWORD PTR [rax]
1408b61a2: movzx  eax,BYTE PTR [rbx+0x58]
1408b61a6: test   al,al
1408b61a8: jg     0x1408b6623
1408b61ae: xor    r9d,r9d
1408b61b1: xor    r8d,r8d
1408b61b4: lea    rdx,[rbp-0x20]
1408b61b8: mov    rcx,rbx
1408b61bb: call   0x140c93420
1408b61c0: mov    ecx,0x14
1408b61c5: call   0x140071f30
1408b61ca: add    al,BYTE PTR [rbx+0x59]
1408b61cd: mov    BYTE PTR [rbx+0x59],al
1408b61d0: cmp    al,0x64
1408b61d2: jle    0x1408b6625
1408b61d8: mov    BYTE PTR [rbx+0x59],0x50
1408b61dc: mov    al,0x50
1408b61de: jmp    0x1408b6625
1408b61e3: mov    eax,0x51eb851f
1408b61e8: imul   ecx
1408b61ea: sar    edx,0x5
1408b61ed: mov    eax,edx
1408b61ef: shr    eax,0x1f
1408b61f2: add    edx,eax
1408b61f4: imul   eax,edx,0x64
1408b61f7: cmp    ecx,eax
1408b61f9: jne    0x1408b6200
1408b61fb: call   0x140a94eb0
1408b6200: lea    rcx,[rip+0x1b1b2e9]        # 0x1423d14f0
1408b6207: call   0x141510a30
1408b620c: sub    r15,0x1
1408b6210: jne    0x1408b6200
1408b6212: mov    ecx,DWORD PTR [rip+0x1ad1dac]        # 0x142387fc4
1408b6218: mov    eax,0x51eb851f
1408b621d: imul   ecx
1408b621f: sar    edx,0x5
1408b6222: mov    eax,edx
1408b6224: shr    eax,0x1f
1408b6227: add    edx,eax
1408b6229: imul   eax,edx,0x64
1408b622c: mov    edx,ecx
1408b622e: sub    edx,eax
1408b6230: jne    0x1408b623d
1408b6232: mov    WORD PTR [rip+0xff7325],0x101        # 0x1418ad560
1408b623b: jmp    0x1408b6254
1408b623d: cmp    edx,0x23
1408b6240: jne    0x1408b6254
1408b6242: lea    rcx,[rip+0x1b1b2a7]        # 0x1423d14f0
1408b6249: call   0x140d0d4d0
1408b624e: mov    ecx,DWORD PTR [rip+0x1ad1d70]        # 0x142387fc4
1408b6254: mov    eax,0x66666667
1408b6259: imul   ecx
1408b625b: sar    edx,0x2
1408b625e: mov    eax,edx
1408b6260: shr    eax,0x1f
1408b6263: add    edx,eax
1408b6265: lea    eax,[rdx+rdx*4]
1408b6268: add    eax,eax
1408b626a: xor    r15d,r15d
1408b626d: cmp    ecx,eax
1408b626f: jne    0x1408b5c4e
1408b6275: mov    esi,r15d
1408b6278: mov    r14d,0x13
1408b627e: xchg   ax,ax
1408b6280: lea    rdx,[rsi+0x1]
1408b6284: lea    rcx,[rip+0x1ddf835]        # 0x142695ac0
1408b628b: call   0x14006f250
1408b6290: mov    ebx,DWORD PTR [rax]
1408b6292: mov    rdx,rsi
1408b6295: lea    rcx,[rip+0x1ddf824]        # 0x142695ac0
1408b629c: call   0x14006f250
1408b62a1: mov    DWORD PTR [rax],ebx
1408b62a3: inc    rsi
1408b62a6: sub    r14,0x1
1408b62aa: jne    0x1408b6280
1408b62ac: mov    edx,0x13
1408b62b1: lea    rcx,[rip+0x1ddf808]        # 0x142695ac0
1408b62b8: call   0x14006f250
1408b62bd: mov    DWORD PTR [rax],r15d
1408b62c0: mov    rcx,r13
1408b62c3: call   0x1408be1d0
1408b62c8: call   0x140e39910
1408b62cd: lea    rdx,[rsp+0x48]
1408b62d2: lea    rcx,[rip+0x1b2edef]        # 0x1423e50c8
1408b62d9: call   0x14006f240
1408b62de: lea    rdx,[rsp+0x78]
1408b62e3: lea    rcx,[rip+0x1b2edde]        # 0x1423e50c8
1408b62ea: call   0x14006f230
1408b62ef: lea    r8,[rsp+0x78]
1408b62f4: lea    rdx,[rsp+0x70]
1408b62f9: lea    rcx,[rsp+0x48]
1408b62fe: call   0x14006ee20
1408b6303: xor    edx,edx
1408b6305: movzx  ecx,BYTE PTR [rax]
1408b6308: call   0x1400657b0
1408b630d: test   al,al
1408b630f: je     0x1408b6440
1408b6315: lea    rcx,[rsp+0x48]
1408b631a: call   0x14006ee10
1408b631f: mov    rbx,QWORD PTR [rax]
1408b6322: test   BYTE PTR [rbx+0x110],0x2
1408b6329: jne    0x1408b6410
1408b632f: cmp    WORD PTR [rbx+0x360],0x7
1408b6337: je     0x1408b6410
1408b633d: mov    edx,0xa1
1408b6342: mov    rcx,rbx
1408b6345: call   0x140073230
1408b634a: test   al,al
1408b634c: je     0x1408b6360
1408b634e: mov    eax,DWORD PTR [rbx+0xd90]
1408b6354: cmp    DWORD PTR [rbx+0xd88],eax
1408b635a: je     0x1408b6410
1408b6360: mov    rcx,rbx
1408b6363: call   0x1400fdd70
1408b6368: test   al,al
1408b636a: jne    0x1408b6410
1408b6370: cmp    QWORD PTR [rbx+0xd80],r15
1408b6377: jne    0x1408b6410
1408b637d: test   DWORD PTR [rbx+0x118],0x1000
1408b6387: jne    0x1408b6410
1408b638d: mov    eax,DWORD PTR [rbx+0x110]
1408b6393: test   eax,0xa08d0
1408b6398: jne    0x1408b6410
1408b639a: bt     eax,0x1a
1408b639e: jb     0x1408b63d2
1408b63a0: mov    eax,DWORD PTR [rbx+0x114]
1408b63a6: test   eax,0x4c0000
1408b63ab: jne    0x1408b6410
1408b63ad: test   DWORD PTR [rbx+0x11c],0x1000
1408b63b7: jne    0x1408b6410
1408b63b9: bt     eax,0x17
1408b63bd: jb     0x1408b6410
1408b63bf: mov    eax,DWORD PTR [rbx+0x140]
1408b63c5: cmp    eax,0xffffffff
1408b63c8: je     0x1408b6410
1408b63ca: cmp    eax,DWORD PTR [rip+0x1add2a0]        # 0x142393670
1408b63d0: jne    0x1408b6410
1408b63d2: mov    edx,0x3a
1408b63d7: mov    rcx,rbx
1408b63da: call   0x140073230
1408b63df: test   al,al
1408b63e1: jne    0x1408b6600
1408b63e7: mov    r9d,0x3a
1408b63ed: movzx  r8d,WORD PTR [rbx+0xd94]
1408b63f5: movzx  edx,WORD PTR [rbx+0xd90]
1408b63fc: lea    rcx,[rip+0x1c36645]        # 0x1424eca48
1408b6403: call   0x140072850
1408b6408: test   al,al
1408b640a: jne    0x1408b6600
1408b6410: lea    rcx,[rsp+0x48]
1408b6415: call   0x14006ee00
1408b641a: lea    r8,[rsp+0x78]
1408b641f: lea    rdx,[rsp+0x70]
1408b6424: lea    rcx,[rsp+0x48]
1408b6429: call   0x14006ee20
1408b642e: xor    edx,edx
1408b6430: movzx  ecx,BYTE PTR [rax]
1408b6433: call   0x1400657b0
1408b6438: test   al,al
1408b643a: jne    0x1408b6315
1408b6440: mov    rcx,QWORD PTR [rip+0x1ae3da1]        # 0x14239a1e8
1408b6447: add    rcx,0x1450
1408b644e: lea    rdx,[rsp+0x68]
1408b6453: call   0x14006f240
1408b6458: mov    rcx,QWORD PTR [rip+0x1ae3d89]        # 0x14239a1e8
1408b645f: add    rcx,0x1450
1408b6466: lea    rdx,[rsp+0x40]
1408b646b: call   0x14006f230
1408b6470: lea    r8,[rsp+0x40]
1408b6475: lea    rdx,[rsp+0x58]
1408b647a: lea    rcx,[rsp+0x68]
1408b647f: call   0x14006ee20
1408b6484: xor    edx,edx
1408b6486: movzx  ecx,BYTE PTR [rax]
1408b6489: call   0x1400657b0
1408b648e: test   al,al
1408b6490: je     0x1408b65e5
1408b6496: lea    rcx,[rsp+0x68]
1408b649b: call   0x14006ee10
1408b64a0: mov    rbx,QWORD PTR [rax]
1408b64a3: xor    edx,edx
1408b64a5: mov    rcx,rbx
1408b64a8: call   0x140dde130
1408b64ad: test   al,al
1408b64af: je     0x1408b65b5
1408b64b5: mov    edx,0x6
1408b64ba: mov    r8d,0xffffffff
1408b64c0: mov    rcx,QWORD PTR [rbx+0x10]
1408b64c4: call   0x140b973c0
1408b64c9: test   ax,ax
1408b64cc: jne    0x1408b65b5
1408b64d2: mov    edx,0x4
1408b64d7: mov    r8d,0xffffffff
1408b64dd: mov    rcx,QWORD PTR [rbx+0x10]
1408b64e1: call   0x140b973c0
1408b64e6: test   ax,ax
1408b64e9: jne    0x1408b65b5
1408b64ef: mov    rcx,QWORD PTR [rbx+0x10]
1408b64f3: add    rcx,0xc8
1408b64fa: mov    edx,0x7
1408b64ff: call   0x140071f90
1408b6504: test   al,al
1408b6506: jne    0x1408b65b5
1408b650c: mov    rax,QWORD PTR [rbx+0x10]
1408b6510: mov    rcx,QWORD PTR [rax+0x130]
1408b6517: test   rcx,rcx
1408b651a: je     0x1408b6600
1408b6520: mov    rbx,QWORD PTR [rcx+0x48]
1408b6524: test   rbx,rbx
1408b6527: je     0x1408b6600
1408b652d: lea    rdx,[rsp+0x60]
1408b6532: lea    rcx,[rbx+0x18]
1408b6536: call   0x14006f240
1408b653b: lea    rdx,[rsp+0x50]
1408b6540: lea    rcx,[rbx+0x18]
1408b6544: call   0x14006f230
1408b6549: lea    r8,[rsp+0x50]
1408b654e: lea    rdx,[rsp+0x70]
1408b6553: lea    rcx,[rsp+0x60]
1408b6558: call   0x14006ee20
1408b655d: xor    edx,edx
1408b655f: movzx  ecx,BYTE PTR [rax]
1408b6562: call   0x1400657b0
1408b6567: test   al,al
1408b6569: je     0x1408b6600
1408b656f: nop
1408b6570: lea    rcx,[rsp+0x60]
1408b6575: call   0x14006ee10
1408b657a: mov    rcx,QWORD PTR [rax]
1408b657d: mov    rax,QWORD PTR [rcx]
1408b6580: call   QWORD PTR [rax]
1408b6582: test   ax,ax
1408b6585: je     0x1408b65b5
1408b6587: lea    rcx,[rsp+0x60]
1408b658c: call   0x14006ee00
1408b6591: lea    r8,[rsp+0x50]
1408b6596: lea    rdx,[rsp+0x70]
1408b659b: lea    rcx,[rsp+0x60]
1408b65a0: call   0x14006ee20
1408b65a5: xor    edx,edx
1408b65a7: movzx  ecx,BYTE PTR [rax]
1408b65aa: call   0x1400657b0
1408b65af: test   al,al
1408b65b1: jne    0x1408b6570
1408b65b3: jmp    0x1408b6600
1408b65b5: lea    rcx,[rsp+0x68]
1408b65ba: call   0x14006ee00
1408b65bf: lea    r8,[rsp+0x40]
1408b65c4: lea    rdx,[rsp+0x58]
1408b65c9: lea    rcx,[rsp+0x68]
1408b65ce: call   0x14006ee20
1408b65d3: xor    edx,edx
1408b65d5: movzx  ecx,BYTE PTR [rax]
1408b65d8: call   0x1400657b0
1408b65dd: test   al,al
1408b65df: jne    0x1408b6496
1408b65e5: mov    BYTE PTR [rip+0x1adcf64],0x1        # 0x142393550
1408b65ec: xor    r8d,r8d
1408b65ef: mov    edx,0x1
1408b65f4: lea    rcx,[rip+0x1adac35]        # 0x142391230
1408b65fb: call   0x1408d9420
1408b6600: cmp    BYTE PTR [rip+0x1adcf49],r15b        # 0x142393550
1408b6607: je     0x1408b5c4e
1408b660d: mov    edx,0x1
1408b6612: lea    rcx,[rip+0xff0c87]        # 0x1418a72a0
1408b6619: call   0x1401e65a0
1408b661e: jmp    0x1408b9175
1408b6623: dec    al
1408b6625: mov    ecx,0x58
1408b662a: mov    BYTE PTR [rbx+rcx*1],al
1408b662d: sub    rdi,0x32
1408b6631: sub    rsi,0x1
1408b6635: jne    0x1408b6190
1408b663b: mov    r8d,DWORD PTR [rip+0x1ad1982]        # 0x142387fc4
1408b6642: mov    eax,0x51eb851f
1408b6647: imul   r8d
1408b664a: sar    edx,0x4
1408b664d: mov    eax,edx
1408b664f: shr    eax,0x1f
1408b6652: add    edx,eax
1408b6654: imul   eax,edx,0x32
1408b6657: mov    ecx,r8d
1408b665a: sub    ecx,eax
1408b665c: mov    esi,0xffff8ad0
1408b6661: cmp    ecx,0x23
1408b6664: jne    0x1408b68cd
1408b666a: lea    rcx,[rip+0x1b2f427]        # 0x1423e5a98
1408b6671: call   0x14006ee50
1408b6676: mov    rdi,rax
1408b6679: sub    edi,0x1
1408b667c: js     0x1408b68c6
1408b6682: movsxd rbx,edi
1408b6685: mov    r14d,0xb
1408b668b: nop    DWORD PTR [rax+rax*1+0x0]
1408b6690: mov    rdx,rbx
1408b6693: lea    rcx,[rip+0x1b2f3fe]        # 0x1423e5a98
1408b669a: call   0x14006f220
1408b669f: mov    rcx,QWORD PTR [rax]
1408b66a2: test   DWORD PTR [rcx+0x10],0x8000
1408b66a9: jne    0x1408b68ba
1408b66af: mov    rdx,rbx
1408b66b2: lea    rcx,[rip+0x1b2f3df]        # 0x1423e5a98
1408b66b9: call   0x14006f220
1408b66be: mov    rcx,QWORD PTR [rax]
1408b66c1: call   0x140072610
1408b66c6: test   al,al
1408b66c8: je     0x1408b68ba
1408b66ce: mov    rdx,rbx
1408b66d1: lea    rcx,[rip+0x1b2f3c0]        # 0x1423e5a98
1408b66d8: call   0x14006f220
1408b66dd: mov    rcx,QWORD PTR [rax]
1408b66e0: test   BYTE PTR [rcx+0x10],0x20
1408b66e4: jne    0x1408b68ba
1408b66ea: mov    rdx,rbx
1408b66ed: lea    rcx,[rip+0x1b2f3a4]        # 0x1423e5a98
1408b66f4: call   0x14006f220
1408b66f9: mov    rcx,QWORD PTR [rax]
1408b66fc: test   BYTE PTR [rcx+0x14],0x8
1408b6700: jne    0x1408b68ba
1408b6706: mov    rdx,rbx
1408b6709: lea    rcx,[rip+0x1b2f388]        # 0x1423e5a98
1408b6710: call   0x14006f220
1408b6715: mov    rcx,QWORD PTR [rax]
1408b6718: test   BYTE PTR [rcx+0x10],0x10
1408b671c: jne    0x1408b68ba
1408b6722: mov    rdx,rbx
1408b6725: lea    rcx,[rip+0x1b2f36c]        # 0x1423e5a98
1408b672c: call   0x14006f220
1408b6731: mov    rcx,QWORD PTR [rax]
1408b6734: test   DWORD PTR [rcx+0x10],0x10000
1408b673b: jne    0x1408b68ba
1408b6741: mov    rdx,rbx
1408b6744: lea    rcx,[rip+0x1b2f34d]        # 0x1423e5a98
1408b674b: call   0x14006f220
1408b6750: mov    rcx,QWORD PTR [rax]
1408b6753: test   DWORD PTR [rcx+0x10],0x400
1408b675a: jne    0x1408b68ba
1408b6760: mov    rdx,rbx
1408b6763: lea    rcx,[rip+0x1b2f32e]        # 0x1423e5a98
1408b676a: call   0x14006f220
1408b676f: mov    rcx,QWORD PTR [rax]
1408b6772: test   DWORD PTR [rcx+0x10],0x200000
1408b6779: jne    0x1408b68ba
1408b677f: mov    rdx,rbx
1408b6782: lea    rcx,[rip+0x1b2f30f]        # 0x1423e5a98
1408b6789: call   0x14006f220
1408b678e: mov    rcx,QWORD PTR [rax]
1408b6791: test   DWORD PTR [rcx+0x10],0x800000
1408b6798: jne    0x1408b68ba
1408b679e: mov    rdx,rbx
1408b67a1: lea    rcx,[rip+0x1b2f2f0]        # 0x1423e5a98
1408b67a8: call   0x14006f220
1408b67ad: mov    rcx,QWORD PTR [rax]
1408b67b0: test   DWORD PTR [rcx+0x10],0x800
1408b67b7: jne    0x1408b68ba
1408b67bd: mov    rdx,rbx
1408b67c0: lea    rcx,[rip+0x1b2f2d1]        # 0x1423e5a98
1408b67c7: call   0x14006f220
1408b67cc: mov    rcx,QWORD PTR [rax]
1408b67cf: test   DWORD PTR [rcx+0x10],0x400000
1408b67d6: jne    0x1408b68ba
1408b67dc: mov    rdx,rbx
1408b67df: lea    rcx,[rip+0x1b2f2b2]        # 0x1423e5a98
1408b67e6: call   0x14006f220
1408b67eb: mov    rcx,QWORD PTR [rax]
1408b67ee: test   DWORD PTR [rcx+0x10],0x80000
1408b67f5: jne    0x1408b68ba
1408b67fb: mov    rdx,rbx
1408b67fe: lea    rcx,[rip+0x1b2f293]        # 0x1423e5a98
1408b6805: call   0x14006f220
1408b680a: mov    rcx,QWORD PTR [rax]
1408b680d: test   BYTE PTR [rcx+0x10],0x2
1408b6811: jne    0x1408b68ba
1408b6817: mov    rdx,rbx
1408b681a: lea    rcx,[rip+0x1b2f277]        # 0x1423e5a98
1408b6821: call   0x14006f220
1408b6826: mov    edx,r14d
1408b6829: mov    rcx,QWORD PTR [rax]
1408b682c: call   0x140cb15d0
1408b6831: test   rax,rax
1408b6834: je     0x1408b68ba
1408b683a: mov    rdx,QWORD PTR [rax]
1408b683d: mov    rcx,rax
1408b6840: call   QWORD PTR [rdx]
1408b6842: cmp    ax,0x11
1408b6846: jne    0x1408b68ba
1408b6848: mov    rdx,rbx
1408b684b: lea    rcx,[rip+0x1b2f246]        # 0x1423e5a98
1408b6852: call   0x14006f220
1408b6857: lea    r9,[rsp+0x40]
1408b685c: lea    r8,[rsp+0x70]
1408b6861: lea    rdx,[rsp+0x58]
1408b6866: mov    rcx,QWORD PTR [rax]
1408b6869: call   0x140c8baa0
1408b686e: cmp    WORD PTR [rsp+0x58],si
1408b6873: je     0x1408b68ba
1408b6875: mov    rdx,rbx
1408b6878: lea    rcx,[rip+0x1b2f219]        # 0x1423e5a98
1408b687f: call   0x14006f220
1408b6884: mov    dl,0x2
1408b6886: mov    rcx,QWORD PTR [rax]
1408b6889: call   0x140c634f0
1408b688e: mov    rdx,rbx
1408b6891: lea    rcx,[rip+0x1b2f200]        # 0x1423e5a98
1408b6898: call   0x14006f220
1408b689d: mov    rcx,QWORD PTR [rax]
1408b68a0: mov    rax,QWORD PTR [rcx]
1408b68a3: movsx  r9d,WORD PTR [rsp+0x40]
1408b68a9: movsx  r8d,WORD PTR [rsp+0x70]
1408b68af: movsx  edx,WORD PTR [rsp+0x58]
1408b68b4: call   QWORD PTR [rax+0x320]
1408b68ba: dec    rbx
1408b68bd: sub    edi,0x1
1408b68c0: jns    0x1408b6690
1408b68c6: mov    r8d,DWORD PTR [rip+0x1ad16f7]        # 0x142387fc4
1408b68cd: mov    eax,0x10624dd3
1408b68d2: imul   r8d
1408b68d5: sar    edx,0x6
1408b68d8: mov    eax,edx
1408b68da: shr    eax,0x1f
1408b68dd: add    edx,eax
1408b68df: imul   eax,edx,0x3e8
1408b68e5: mov    ecx,r8d
1408b68e8: sub    ecx,eax
1408b68ea: cmp    ecx,0x28
1408b68ed: jne    0x1408b6902
1408b68ef: lea    rcx,[rip+0x1b1abfa]        # 0x1423d14f0
1408b68f6: call   0x141513080
1408b68fb: mov    r8d,DWORD PTR [rip+0x1ad16c2]        # 0x142387fc4
1408b6902: mov    eax,0x51eb851f
1408b6907: imul   r8d
1408b690a: sar    edx,0x4
1408b690d: mov    eax,edx
1408b690f: shr    eax,0x1f
1408b6912: add    edx,eax
1408b6914: imul   eax,edx,0x32
1408b6917: mov    ecx,r8d
1408b691a: sub    ecx,eax
1408b691c: cmp    ecx,0x28
1408b691f: jne    0x1408b6934
1408b6921: lea    rcx,[rip+0x1b1abc8]        # 0x1423d14f0
1408b6928: call   0x141513940
1408b692d: mov    r8d,DWORD PTR [rip+0x1ad1690]        # 0x142387fc4
1408b6934: mov    eax,0x51eb851f
1408b6939: imul   r8d
1408b693c: sar    edx,0x4
1408b693f: mov    eax,edx
1408b6941: shr    eax,0x1f
1408b6944: add    edx,eax
1408b6946: imul   eax,edx,0x32
1408b6949: sub    r8d,eax
1408b694c: cmp    r8d,0x14
1408b6950: jne    0x1408b695e
1408b6952: lea    rcx,[rip+0x1c42e1f]        # 0x1424f9778
1408b6959: call   0x1405bdfe0
1408b695e: call   0x140eb4700
1408b6963: lea    rcx,[rip+0x1b1ab86]        # 0x1423d14f0
1408b696a: call   0x1400ac470
1408b696f: lea    rcx,[rip+0x1b1ab7a]        # 0x1423d14f0
1408b6976: call   0x140da6200
1408b697b: mov    eax,0x51eb851f
1408b6980: imul   DWORD PTR [rip+0x1ad163e]        # 0x142387fc4
1408b6986: sar    edx,0x5
1408b6989: mov    eax,edx
1408b698b: shr    eax,0x1f
1408b698e: add    edx,eax
1408b6990: imul   eax,edx,0x64
1408b6993: cmp    DWORD PTR [rip+0x1ad162b],eax        # 0x142387fc4
1408b6999: jne    0x1408b69a7
1408b699b: lea    rcx,[rip+0x1b1ab4e]        # 0x1423d14f0
1408b69a2: call   0x140ababb0
1408b69a7: lea    rcx,[rip+0x1b1ab42]        # 0x1423d14f0
1408b69ae: call   0x1414638e0
1408b69b3: call   0x14055f460
1408b69b8: lea    rcx,[rip+0x1b1ab31]        # 0x1423d14f0
1408b69bf: call   0x14141cef0
1408b69c4: lea    rcx,[rip+0x1b1ab25]        # 0x1423d14f0
1408b69cb: call   0x14141c820
1408b69d0: cmp    BYTE PTR [rip+0x187b197],0x0        # 0x142131b6e
1408b69d7: je     0x1408b69de
1408b69d9: call   0x140a80510
1408b69de: cmp    BYTE PTR [rip+0x187b18a],0x0        # 0x142131b6f
1408b69e5: je     0x1408b69f3
1408b69e7: lea    rcx,[rip+0x1b1ab02]        # 0x1423d14f0
1408b69ee: call   0x141482410
1408b69f3: lea    rcx,[rip+0x1b1aaf6]        # 0x1423d14f0
1408b69fa: call   0x1414632d0
1408b69ff: cmp    WORD PTR [rip+0x1ae37f1],0x0        # 0x14239a1f8
1408b6a07: jne    0x1408b9175
1408b6a0d: mov    edi,0x2e
1408b6a12: mov    edx,DWORD PTR [rip+0x1ae3b08]        # 0x14239a520
1408b6a18: cmp    edx,0xffffffff
1408b6a1b: je     0x1408b6b3d
1408b6a21: lea    rcx,[rip+0x1b2e688]        # 0x1423e50b0
1408b6a28: call   0x140073b70
1408b6a2d: mov    rbx,rax
1408b6a30: test   rax,rax
1408b6a33: je     0x1408b6b33
1408b6a39: lea    r9,[rsp+0x70]
1408b6a3e: lea    r8,[rsp+0x40]
1408b6a43: lea    rdx,[rsp+0x58]
1408b6a48: mov    rcx,rax
1408b6a4b: call   0x141367430
1408b6a50: cmp    WORD PTR [rsp+0x58],si
1408b6a55: je     0x1408b6b33
1408b6a5b: test   BYTE PTR [rbx+0x110],0x2
1408b6a62: jne    0x1408b6b33
1408b6a68: mov    rcx,rbx
1408b6a6b: call   0x14137bd50
1408b6a70: test   al,al
1408b6a72: jne    0x1408b6b33
1408b6a78: lea    r8,[rsp+0x68]
1408b6a7d: lea    rdx,[rsp+0x78]
1408b6a82: lea    rcx,[rip+0x1d93967]        # 0x14264a3f0
1408b6a89: call   0x140af0fe0
1408b6a8e: lea    r8,[rsp+0x48]
1408b6a93: lea    rdx,[rsp+0x50]
1408b6a98: lea    rcx,[rip+0x1ad97f1]        # 0x142390290
1408b6a9f: call   0x14014d6f0
1408b6aa4: mov    eax,DWORD PTR [rip+0x1d939c6]        # 0x14264a470
1408b6aaa: shl    eax,0x5
1408b6aad: cdq
1408b6aae: and    edx,0x7f
1408b6ab1: lea    ecx,[rdx+rax*1]
1408b6ab4: sar    ecx,0x7
1408b6ab7: imul   eax,DWORD PTR [rsp+0x50],0x2e
1408b6abc: cdq
1408b6abd: idiv   ecx
1408b6abf: mov    ebx,eax
1408b6ac1: xor    edx,edx
1408b6ac3: lea    rcx,[rip+0x1b16ca6]        # 0x1423cd770
1408b6aca: call   0x140071f90
1408b6acf: test   al,al
1408b6ad1: cmove  ebx,edi
1408b6ad4: mov    ecx,DWORD PTR [rsp+0x78]
1408b6ad8: sar    ecx,1
1408b6ada: movsx  edx,WORD PTR [rsp+0x58]
1408b6adf: sub    edx,ecx
1408b6ae1: add    edx,ebx
1408b6ae3: mov    DWORD PTR [rip+0x1abdc3f],edx        # 0x142374728
1408b6ae9: mov    ecx,DWORD PTR [rsp+0x68]
1408b6aed: sar    ecx,1
1408b6aef: movsx  eax,WORD PTR [rsp+0x40]
1408b6af4: sub    eax,ecx
1408b6af6: mov    DWORD PTR [rip+0x1abdc30],eax        # 0x14237472c
1408b6afc: movsx  eax,WORD PTR [rsp+0x70]
1408b6b01: cmp    DWORD PTR [rip+0x1abdc1d],eax        # 0x142374724
1408b6b07: je     0x1408b6b12
1408b6b09: mov    WORD PTR [rip+0xff6a4e],0x101        # 0x1418ad560
1408b6b12: mov    DWORD PTR [rip+0x1abdc0c],eax        # 0x142374724
1408b6b18: mov    DWORD PTR [rip+0xfe57aa],esi        # 0x14189c2c8
1408b6b1e: mov    DWORD PTR [rip+0xfe57a8],esi        # 0x14189c2cc
1408b6b24: mov    DWORD PTR [rip+0xfe57a6],esi        # 0x14189c2d0
1408b6b2a: xor    ecx,ecx
1408b6b2c: call   0x1408bee30
1408b6b31: jmp    0x1408b6b3d
1408b6b33: mov    DWORD PTR [rip+0x1ae39e3],0xffffffff        # 0x14239a520
1408b6b3d: mov    edx,DWORD PTR [rip+0x1ae39e1]        # 0x14239a524
1408b6b43: cmp    edx,0xffffffff
1408b6b46: je     0x1408b9175
1408b6b4c: lea    rcx,[rip+0x1b2e8fd]        # 0x1423e5450
1408b6b53: call   0x1400726e0
1408b6b58: mov    rbx,rax
1408b6b5b: test   rax,rax
1408b6b5e: je     0x1408b6c76
1408b6b64: lea    r9,[rsp+0x40]
1408b6b69: lea    r8,[rsp+0x70]
1408b6b6e: lea    rdx,[rsp+0x58]
1408b6b73: mov    rcx,rax
1408b6b76: call   0x140c8baa0
1408b6b7b: movzx  edx,WORD PTR [rsp+0x58]
1408b6b80: cmp    dx,si
1408b6b83: je     0x1408b6c76
1408b6b89: test   BYTE PTR [rbx+0x10],0x10
1408b6b8d: jne    0x1408b6c76
1408b6b93: movzx  r9d,WORD PTR [rsp+0x40]
1408b6b99: movzx  r8d,WORD PTR [rsp+0x70]
1408b6b9f: lea    rcx,[rip+0x1b1a94a]        # 0x1423d14f0
1408b6ba6: call   0x14007dc40
1408b6bab: bt     eax,0x9
1408b6baf: jb     0x1408b6c76
1408b6bb5: lea    r8,[rsp+0x50]
1408b6bba: lea    rdx,[rsp+0x78]
1408b6bbf: lea    rcx,[rip+0x1d9382a]        # 0x14264a3f0
1408b6bc6: call   0x140af0fe0
1408b6bcb: lea    r8,[rsp+0x48]
1408b6bd0: lea    rdx,[rsp+0x68]
1408b6bd5: lea    rcx,[rip+0x1ad96b4]        # 0x142390290
1408b6bdc: call   0x14014d6f0
1408b6be1: mov    eax,DWORD PTR [rip+0x1d93889]        # 0x14264a470
1408b6be7: shl    eax,0x5
1408b6bea: cdq
1408b6beb: and    edx,0x7f
1408b6bee: lea    r8d,[rdx+rax*1]
1408b6bf2: sar    r8d,0x7
1408b6bf6: imul   eax,DWORD PTR [rsp+0x68],0x2e
1408b6bfb: cdq
1408b6bfc: idiv   r8d
1408b6bff: mov    ebx,eax
1408b6c01: xor    edx,edx
1408b6c03: lea    rcx,[rip+0x1b16b66]        # 0x1423cd770
1408b6c0a: call   0x140071f90
1408b6c0f: test   al,al
1408b6c11: cmove  ebx,edi
1408b6c14: mov    ecx,DWORD PTR [rsp+0x78]
1408b6c18: sar    ecx,1
1408b6c1a: movsx  edx,WORD PTR [rsp+0x58]
1408b6c1f: sub    edx,ecx
1408b6c21: add    edx,ebx
1408b6c23: mov    DWORD PTR [rip+0x1abdaff],edx        # 0x142374728
1408b6c29: mov    ecx,DWORD PTR [rsp+0x50]
1408b6c2d: sar    ecx,1
1408b6c2f: movsx  eax,WORD PTR [rsp+0x70]
1408b6c34: sub    eax,ecx
1408b6c36: mov    DWORD PTR [rip+0x1abdaf0],eax        # 0x14237472c
1408b6c3c: movsx  eax,WORD PTR [rsp+0x40]
1408b6c41: cmp    DWORD PTR [rip+0x1abdadd],eax        # 0x142374724
1408b6c47: je     0x1408b6c52
1408b6c49: mov    WORD PTR [rip+0xff690e],0x101        # 0x1418ad560
1408b6c52: mov    DWORD PTR [rip+0x1abdacc],eax        # 0x142374724
1408b6c58: mov    DWORD PTR [rip+0xfe566a],esi        # 0x14189c2c8
1408b6c5e: mov    DWORD PTR [rip+0xfe5668],esi        # 0x14189c2cc
1408b6c64: mov    DWORD PTR [rip+0xfe5666],esi        # 0x14189c2d0
1408b6c6a: xor    ecx,ecx
1408b6c6c: call   0x1408bee30
1408b6c71: jmp    0x1408b9175
1408b6c76: mov    DWORD PTR [rip+0x1ae38a4],0xffffffff        # 0x14239a524
1408b6c80: jmp    0x1408b9175
1408b6c85: mov    esi,0xffffffff
1408b6c8a: cmp    BYTE PTR [rip+0x1ad9944],0x0        # 0x1423905d5
1408b6c91: cmovne esi,DWORD PTR [rip+0x1d9391c]        # 0x14264a5b4
1408b6c98: lea    rdx,[rsp+0x50]
1408b6c9d: lea    rcx,[rsp+0x78]
1408b6ca2: call   0x140c33370
1408b6ca7: mov    eax,DWORD PTR [rip+0x1b16adb]        # 0x1423cd788
1408b6cad: cmp    BYTE PTR [rip+0xfeb8dc],0x0        # 0x1418a2590
1408b6cb4: je     0x1408b6fec
1408b6cba: cmp    BYTE PTR [rip+0xfeb93f],0x0        # 0x1418a2600
1408b6cc1: je     0x1408b6dfb
1408b6cc7: cmp    BYTE PTR [rip+0xfeb996],0x0        # 0x1418a2664
1408b6cce: jne    0x1408b6cdd
1408b6cd0: cmp    BYTE PTR [rip+0xfeb995],0x0        # 0x1418a266c
1408b6cd7: je     0x1408b6fec
1408b6cdd: lea    ecx,[rax-0x11]
1408b6ce0: mov    eax,0x55555556
1408b6ce5: imul   ecx
1408b6ce7: mov    edi,edx
1408b6ce9: shr    edi,0x1f
1408b6cec: add    edi,edx
1408b6cee: lea    rcx,[rip+0xfeb923]        # 0x1418a2618
1408b6cf5: call   0x14006f370
1408b6cfa: mov    r14,rax
1408b6cfd: lea    rcx,[rip+0xfeb944]        # 0x1418a2648
1408b6d04: call   0x14006f370
1408b6d09: mov    r12,rax
1408b6d0c: cmp    BYTE PTR [rip+0xfeb951],0x0        # 0x1418a2664
1408b6d13: je     0x1408b6d79
1408b6d15: cmp    BYTE PTR [rip+0x1ad98b9],0x0        # 0x1423905d5
1408b6d1c: je     0x1408b6d72
1408b6d1e: cmp    BYTE PTR [rip+0x1ad98a9],0x0        # 0x1423905ce
1408b6d25: je     0x1408b6d72
1408b6d27: lea    ecx,[rdi+0x2]
1408b6d2a: lea    ebx,[rcx+rcx*2]
1408b6d2d: lea    rcx,[rbp-0x50]
1408b6d31: call   0x1400bb360
1408b6d36: lea    r9d,[r14-0x1]
1408b6d3a: mov    DWORD PTR [rsp+0x30],ebx
1408b6d3e: mov    DWORD PTR [rsp+0x28],0x9
1408b6d46: mov    DWORD PTR [rsp+0x20],edi
1408b6d4a: xor    r8d,r8d
1408b6d4d: mov    edx,DWORD PTR [rip+0xfeb90d]        # 0x1418a2660
1408b6d53: lea    rcx,[rbp-0x50]
1408b6d57: call   0x1400bb380
1408b6d5c: mov    edx,esi
1408b6d5e: lea    rcx,[rbp-0x50]
1408b6d62: call   0x14140f200
1408b6d67: mov    eax,DWORD PTR [rbp-0x50]
1408b6d6a: mov    DWORD PTR [rip+0xfeb8f0],eax        # 0x1418a2660
1408b6d70: jmp    0x1408b6d79
1408b6d72: mov    BYTE PTR [rip+0xfeb8eb],0x0        # 0x1418a2664
1408b6d79: cmp    BYTE PTR [rip+0xfeb8ec],0x0        # 0x1418a266c
1408b6d80: je     0x1408b6df0
1408b6d82: cmp    BYTE PTR [rip+0x1ad984c],0x0        # 0x1423905d5
1408b6d89: je     0x1408b6de9
1408b6d8b: cmp    BYTE PTR [rip+0x1ad983c],0x0        # 0x1423905ce
1408b6d92: je     0x1408b6de9
1408b6d94: lea    eax,[rdi+0x2]
1408b6d97: lea    ebx,[rax+rax*2]
1408b6d9a: lea    rcx,[rbp-0x50]
1408b6d9e: call   0x1400bb360
1408b6da3: lea    r9d,[r12-0x1]
1408b6da8: mov    DWORD PTR [rsp+0x30],ebx
1408b6dac: mov    DWORD PTR [rsp+0x28],0x9
1408b6db4: mov    DWORD PTR [rsp+0x20],edi
1408b6db8: xor    r8d,r8d
1408b6dbb: mov    edx,DWORD PTR [rip+0xfeb8a7]        # 0x1418a2668
1408b6dc1: lea    rcx,[rbp-0x50]
1408b6dc5: call   0x1400bb380
1408b6dca: mov    edx,esi
1408b6dcc: lea    rcx,[rbp-0x50]
1408b6dd0: call   0x14140f200
1408b6dd5: mov    eax,DWORD PTR [rbp-0x50]
1408b6dd8: mov    DWORD PTR [rip+0xfeb88a],eax        # 0x1418a2668
1408b6dde: mov    r12d,0xa
1408b6de4: jmp    0x1408b6fec
1408b6de9: mov    BYTE PTR [rip+0xfeb87c],0x0        # 0x1418a266c
1408b6df0: mov    r12d,0xa
1408b6df6: jmp    0x1408b6fec
1408b6dfb: cmp    BYTE PTR [rip+0xfeb7ff],0x0        # 0x1418a2601
1408b6e02: je     0x1408b6f6a
1408b6e08: cmp    BYTE PTR [rip+0xfeb885],0x0        # 0x1418a2694
1408b6e0f: jne    0x1408b6e1e
1408b6e11: cmp    BYTE PTR [rip+0xfeb884],0x0        # 0x1418a269c
1408b6e18: je     0x1408b6fec
1408b6e1e: lea    ecx,[rax-0x11]
1408b6e21: mov    eax,0x55555556
1408b6e26: imul   ecx
1408b6e28: mov    edi,edx
1408b6e2a: shr    edi,0x1f
1408b6e2d: add    edi,edx
1408b6e2f: lea    rcx,[rip+0xfeb842]        # 0x1418a2678
1408b6e36: call   0x14006f450
1408b6e3b: mov    r14,rax
1408b6e3e: xor    r13d,r13d
1408b6e41: movsxd r8,DWORD PTR [rip+0xfeb858]        # 0x1418a26a0
1408b6e48: test   r8d,r8d
1408b6e4b: js     0x1408b6e84
1408b6e4d: cmp    r8d,r14d
1408b6e50: jge    0x1408b6e84
1408b6e52: mov    rdx,QWORD PTR [rip+0xfeb857]        # 0x1418a26b0
1408b6e59: mov    rbx,QWORD PTR [rdx+0x40]
1408b6e5d: mov    rdx,r8
1408b6e60: lea    rcx,[rip+0xfeb811]        # 0x1418a2678
1408b6e67: call   0x14006f440
1408b6e6c: movsx  rcx,WORD PTR [rax]
1408b6e70: lea    rcx,[rcx+rcx*2]
1408b6e74: shl    rcx,0x3
1408b6e78: add    rcx,rbx
1408b6e7b: call   0x1402240f0
1408b6e80: movsx  r13d,ax
1408b6e84: cmp    BYTE PTR [rip+0xfeb809],0x0        # 0x1418a2694
1408b6e8b: je     0x1408b6ef1
1408b6e8d: cmp    BYTE PTR [rip+0x1ad9741],0x0        # 0x1423905d5
1408b6e94: je     0x1408b6eea
1408b6e96: cmp    BYTE PTR [rip+0x1ad9731],0x0        # 0x1423905ce
1408b6e9d: je     0x1408b6eea
1408b6e9f: lea    eax,[rdi+0x2]
1408b6ea2: lea    ebx,[rax+rax*2]
1408b6ea5: lea    rcx,[rbp-0x50]
1408b6ea9: call   0x1400bb360
1408b6eae: lea    r9d,[r14-0x1]
1408b6eb2: mov    DWORD PTR [rsp+0x30],ebx
1408b6eb6: mov    DWORD PTR [rsp+0x28],0x9
1408b6ebe: mov    DWORD PTR [rsp+0x20],edi
1408b6ec2: xor    r8d,r8d
1408b6ec5: mov    edx,DWORD PTR [rip+0xfeb7c5]        # 0x1418a2690
1408b6ecb: lea    rcx,[rbp-0x50]
1408b6ecf: call   0x1400bb380
1408b6ed4: mov    edx,esi
1408b6ed6: lea    rcx,[rbp-0x50]
1408b6eda: call   0x14140f200
1408b6edf: mov    eax,DWORD PTR [rbp-0x50]
1408b6ee2: mov    DWORD PTR [rip+0xfeb7a8],eax        # 0x1418a2690
1408b6ee8: jmp    0x1408b6ef1
1408b6eea: mov    BYTE PTR [rip+0xfeb7a3],0x0        # 0x1418a2694
1408b6ef1: cmp    BYTE PTR [rip+0xfeb7a4],0x0        # 0x1418a269c
1408b6ef8: je     0x1408b6fec
1408b6efe: cmp    BYTE PTR [rip+0x1ad96d0],0x0        # 0x1423905d5
1408b6f05: je     0x1408b6f5e
1408b6f07: cmp    BYTE PTR [rip+0x1ad96c0],0x0        # 0x1423905ce
1408b6f0e: je     0x1408b6f5e
1408b6f10: lea    eax,[rdi+0x2]
1408b6f13: lea    ebx,[rax+rax*2]
1408b6f16: lea    rcx,[rbp-0x50]
1408b6f1a: call   0x1400bb360
1408b6f1f: lea    r9d,[r13-0x1]
1408b6f23: mov    DWORD PTR [rsp+0x30],ebx
1408b6f27: mov    DWORD PTR [rsp+0x28],0x9
1408b6f2f: mov    DWORD PTR [rsp+0x20],edi
1408b6f33: xor    r8d,r8d
1408b6f36: mov    edx,DWORD PTR [rip+0xfeb75c]        # 0x1418a2698
1408b6f3c: lea    rcx,[rbp-0x50]
1408b6f40: call   0x1400bb380
1408b6f45: mov    edx,esi
1408b6f47: lea    rcx,[rbp-0x50]
1408b6f4b: call   0x14140f200
1408b6f50: mov    eax,DWORD PTR [rbp-0x50]
1408b6f53: mov    DWORD PTR [rip+0xfeb73f],eax        # 0x1418a2698
1408b6f59: jmp    0x1408b6fec
1408b6f5e: mov    BYTE PTR [rip+0xfeb737],0x0        # 0x1418a269c
1408b6f65: jmp    0x1408b6fec
1408b6f6a: add    eax,0xfffffff2
1408b6f6d: mov    ecx,DWORD PTR [rip+0xfeb681]        # 0x1418a25f4
1408b6f73: lea    edi,[rcx+0x6]
1408b6f76: cmp    eax,edi
1408b6f78: cmovle edi,eax
1408b6f7b: sub    edi,0x5
1408b6f7e: lea    r14d,[rcx+0x1]
1408b6f82: cmp    BYTE PTR [rip+0xfeb71f],0x0        # 0x1418a26a8
1408b6f89: je     0x1408b6fec
1408b6f8b: cmp    BYTE PTR [rip+0x1ad9643],0x0        # 0x1423905d5
1408b6f92: je     0x1408b6fe5
1408b6f94: cmp    BYTE PTR [rip+0x1ad9633],0x0        # 0x1423905ce
1408b6f9b: je     0x1408b6fe5
1408b6f9d: lea    ebx,[rdi+0x4]
1408b6fa0: lea    rcx,[rbp-0x50]
1408b6fa4: call   0x1400bb360
1408b6fa9: lea    r9d,[r14-0x1]
1408b6fad: mov    DWORD PTR [rsp+0x30],ebx
1408b6fb1: mov    DWORD PTR [rsp+0x28],0x7
1408b6fb9: mov    DWORD PTR [rsp+0x20],edi
1408b6fbd: xor    r8d,r8d
1408b6fc0: mov    edx,DWORD PTR [rip+0xfeb6de]        # 0x1418a26a4
1408b6fc6: lea    rcx,[rbp-0x50]
1408b6fca: call   0x1400bb380
1408b6fcf: mov    edx,esi
1408b6fd1: lea    rcx,[rbp-0x50]
1408b6fd5: call   0x14140f200
1408b6fda: mov    eax,DWORD PTR [rbp-0x50]
1408b6fdd: mov    DWORD PTR [rip+0xfeb6c1],eax        # 0x1418a26a4
1408b6fe3: jmp    0x1408b6fec
1408b6fe5: mov    BYTE PTR [rip+0xfeb6bc],0x0        # 0x1418a26a8
1408b6fec: cmp    BYTE PTR [rip+0xfeb6ed],0x0        # 0x1418a26e0
1408b6ff3: je     0x1408b70bd
1408b6ff9: cmp    BYTE PTR [rip+0xfeb708],0x0        # 0x1418a2708
1408b7000: je     0x1408b70bd
1408b7006: cmp    BYTE PTR [rip+0x1ad95c8],0x0        # 0x1423905d5
1408b700d: je     0x1408b70b6
1408b7013: cmp    BYTE PTR [rip+0x1ad95b4],0x0        # 0x1423905ce
1408b701a: je     0x1408b70b6
1408b7020: mov    DWORD PTR [rsp+0x68],0xffffffff
1408b7028: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b7030: lea    r8,[rsp+0x40]
1408b7035: lea    rdx,[rsp+0x68]
1408b703a: lea    rcx,[rip+0x1d933af]        # 0x14264a3f0
1408b7041: call   0x1400bb340
1408b7046: mov    ecx,DWORD PTR [rip+0x1b1673c]        # 0x1423cd788
1408b704c: add    ecx,0xfffffff5
1408b704f: mov    eax,0x55555556
1408b7054: imul   ecx
1408b7056: mov    esi,edx
1408b7058: shr    esi,0x1f
1408b705b: add    esi,edx
1408b705d: lea    rcx,[rip+0xfeb684]        # 0x1418a26e8
1408b7064: call   0x14006f370
1408b7069: mov    rdi,rax
1408b706c: lea    ebx,[rsi+0x4]
1408b706f: lea    rcx,[rbp-0x50]
1408b7073: call   0x1400bb360
1408b7078: lea    r9d,[rdi-0x1]
1408b707c: mov    DWORD PTR [rsp+0x30],ebx
1408b7080: mov    DWORD PTR [rsp+0x28],0x7
1408b7088: mov    DWORD PTR [rsp+0x20],esi
1408b708c: xor    r8d,r8d
1408b708f: mov    edx,DWORD PTR [rip+0xfeb66f]        # 0x1418a2704
1408b7095: lea    rcx,[rbp-0x50]
1408b7099: call   0x1400bb380
1408b709e: mov    edx,DWORD PTR [rsp+0x40]
1408b70a2: lea    rcx,[rbp-0x50]
1408b70a6: call   0x14140f200
1408b70ab: mov    eax,DWORD PTR [rbp-0x50]
1408b70ae: mov    DWORD PTR [rip+0xfeb650],eax        # 0x1418a2704
1408b70b4: jmp    0x1408b70bd
1408b70b6: mov    BYTE PTR [rip+0xfeb64b],0x0        # 0x1418a2708
1408b70bd: cmp    BYTE PTR [rip+0xfed0cc],0x0        # 0x1418a4190
1408b70c4: je     0x1408b71fe
1408b70ca: cmp    BYTE PTR [rip+0xfed0d3],0x0        # 0x1418a41a4
1408b70d1: je     0x1408b71fe
1408b70d7: cmp    BYTE PTR [rip+0x1ad94f7],0x0        # 0x1423905d5
1408b70de: je     0x1408b71f7
1408b70e4: cmp    BYTE PTR [rip+0x1ad94e3],0x0        # 0x1423905ce
1408b70eb: je     0x1408b71f7
1408b70f1: lea    rdx,[rip+0x1ae27f8]        # 0x1423998f0
1408b70f8: mov    ecx,DWORD PTR [rip+0xfed09a]        # 0x1418a4198
1408b70fe: call   0x1400b9dc0
1408b7103: test   rax,rax
1408b7106: je     0x1408b71f7
1408b710c: lea    rdx,[rax+0x28]
1408b7110: mov    ecx,DWORD PTR [rip+0xfed086]        # 0x1418a419c
1408b7116: call   0x1400b9dc0
1408b711b: mov    rdi,rax
1408b711e: test   rax,rax
1408b7121: je     0x1408b71f7
1408b7127: mov    DWORD PTR [rsp+0x68],0xffffffff
1408b712f: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b7137: cmp    BYTE PTR [rip+0x1ad9497],0x0        # 0x1423905d5
1408b713e: je     0x1408b7156
1408b7140: lea    r8,[rsp+0x40]
1408b7145: lea    rdx,[rsp+0x68]
1408b714a: lea    rcx,[rip+0x1d9329f]        # 0x14264a3f0
1408b7151: call   0x1400bb340
1408b7156: mov    r13d,0x26
1408b715c: cmp    DWORD PTR [rip+0xfed031],0x0        # 0x1418a4194
1408b7163: jne    0x1408b716f
1408b7165: mov    ebx,0x4
1408b716a: mov    ecx,r13d
1408b716d: jmp    0x1408b7177
1408b716f: mov    ebx,DWORD PTR [rsp+0x48]
1408b7173: mov    ecx,DWORD PTR [rsp+0x48]
1408b7177: add    ebx,0x9
1408b717a: dec    ecx
1408b717c: sub    ecx,ebx
1408b717e: inc    ecx
1408b7180: mov    eax,0x92492493
1408b7185: imul   ecx
1408b7187: lea    r14d,[rcx+rdx*1]
1408b718b: sar    r14d,0x2
1408b718f: mov    eax,r14d
1408b7192: shr    eax,0x1f
1408b7195: add    r14d,eax
1408b7198: lea    rcx,[rdi+0x810]
1408b719f: call   0x14006ee50
1408b71a4: mov    rdi,rax
1408b71a7: lea    esi,[rbx+0x1]
1408b71aa: imul   ecx,r14d,0x7
1408b71ae: add    ecx,0xfffffffe
1408b71b1: add    ebx,ecx
1408b71b3: lea    rcx,[rbp-0x50]
1408b71b7: call   0x1400bb360
1408b71bc: lea    r9d,[rdi-0x1]
1408b71c0: mov    DWORD PTR [rsp+0x30],ebx
1408b71c4: mov    DWORD PTR [rsp+0x28],esi
1408b71c8: mov    DWORD PTR [rsp+0x20],r14d
1408b71cd: xor    r8d,r8d
1408b71d0: mov    edx,DWORD PTR [rip+0xfecfca]        # 0x1418a41a0
1408b71d6: lea    rcx,[rbp-0x50]
1408b71da: call   0x1400bb380
1408b71df: mov    edx,DWORD PTR [rsp+0x40]
1408b71e3: lea    rcx,[rbp-0x50]
1408b71e7: call   0x14140f200
1408b71ec: mov    eax,DWORD PTR [rbp-0x50]
1408b71ef: mov    DWORD PTR [rip+0xfecfab],eax        # 0x1418a41a0
1408b71f5: jmp    0x1408b7204
1408b71f7: mov    BYTE PTR [rip+0xfecfa6],0x0        # 0x1418a41a4
1408b71fe: mov    r13d,0x26
1408b7204: cmp    BYTE PTR [rip+0xfecf9d],0x0        # 0x1418a41a8
1408b720b: je     0x1408b72fa
1408b7211: cmp    BYTE PTR [rip+0xfecfb8],0x0        # 0x1418a41d0
1408b7218: je     0x1408b72fa
1408b721e: cmp    BYTE PTR [rip+0x1ad93b0],0x0        # 0x1423905d5
1408b7225: je     0x1408b72f3
1408b722b: cmp    BYTE PTR [rip+0x1ad939c],0x0        # 0x1423905ce
1408b7232: je     0x1408b72f3
1408b7238: mov    DWORD PTR [rsp+0x68],0xffffffff
1408b7240: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b7248: lea    r8,[rsp+0x40]
1408b724d: lea    rdx,[rsp+0x68]
1408b7252: lea    rcx,[rip+0x1d93197]        # 0x14264a3f0
1408b7259: call   0x1400bb340
1408b725e: cmp    DWORD PTR [rip+0xfecf47],0x0        # 0x1418a41ac
1408b7265: jne    0x1408b726e
1408b7267: mov    ebx,0x4
1408b726c: jmp    0x1408b7277
1408b726e: mov    ebx,DWORD PTR [rsp+0x48]
1408b7272: mov    r13d,DWORD PTR [rsp+0x48]
1408b7277: add    ebx,0x4
1408b727a: lea    ecx,[r13-0x1]
1408b727e: sub    ecx,ebx
1408b7280: inc    ecx
1408b7282: mov    eax,0x55555556
1408b7287: imul   ecx
1408b7289: mov    r14d,edx
1408b728c: shr    r14d,0x1f
1408b7290: add    r14d,edx
1408b7293: lea    rcx,[rip+0xfecf16]        # 0x1418a41b0
1408b729a: call   0x14006ee50
1408b729f: mov    rdi,rax
1408b72a2: lea    esi,[rbx+0x1]
1408b72a5: lea    ebx,[rbx+r14*2]
1408b72a9: add    ebx,0xfffffffe
1408b72ac: add    ebx,r14d
1408b72af: lea    rcx,[rbp-0x50]
1408b72b3: call   0x1400bb360
1408b72b8: lea    r9d,[rdi-0x1]
1408b72bc: mov    DWORD PTR [rsp+0x30],ebx
1408b72c0: mov    DWORD PTR [rsp+0x28],esi
1408b72c4: mov    DWORD PTR [rsp+0x20],r14d
1408b72c9: xor    r8d,r8d
1408b72cc: mov    edx,DWORD PTR [rip+0xfecefa]        # 0x1418a41cc
1408b72d2: lea    rcx,[rbp-0x50]
1408b72d6: call   0x1400bb380
1408b72db: mov    edx,DWORD PTR [rsp+0x40]
1408b72df: lea    rcx,[rbp-0x50]
1408b72e3: call   0x14140f200
1408b72e8: mov    eax,DWORD PTR [rbp-0x50]
1408b72eb: mov    DWORD PTR [rip+0xfecedb],eax        # 0x1418a41cc
1408b72f1: jmp    0x1408b72fa
1408b72f3: mov    BYTE PTR [rip+0xfeced6],0x0        # 0x1418a41d0
1408b72fa: mov    r11d,0xe
1408b7300: cmp    BYTE PTR [rip+0xfeb7c1],0x0        # 0x1418a2ac8
1408b7307: je     0x1408b7454
1408b730d: mov    DWORD PTR [rsp+0x68],0xffffffff
1408b7315: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b731d: cmp    BYTE PTR [rip+0x1ad92b1],0x0        # 0x1423905d5
1408b7324: je     0x1408b733c
1408b7326: lea    r8,[rsp+0x40]
1408b732b: lea    rdx,[rsp+0x68]
1408b7330: lea    rcx,[rip+0x1d930b9]        # 0x14264a3f0
1408b7337: call   0x1400bb340
1408b733c: mov    rdi,QWORD PTR [rip+0xfeb7cd]        # 0x1418a2b10
1408b7343: sub    rdi,QWORD PTR [rip+0xfeb7be]        # 0x1418a2b08
1408b734a: sar    rdi,1
1408b734d: mov    ecx,DWORD PTR [rip+0x1b16435]        # 0x1423cd788
1408b7353: add    ecx,0xfffffff5
1408b7356: mov    eax,0x55555556
1408b735b: imul   ecx
1408b735d: mov    ebx,edx
1408b735f: shr    ebx,0x1f
1408b7362: add    ebx,edx
1408b7364: cmp    BYTE PTR [rip+0xfeb7c1],0x0        # 0x1418a2b2c
1408b736b: je     0x1408b73d3
1408b736d: cmp    BYTE PTR [rip+0x1ad9261],0x0        # 0x1423905d5
1408b7374: je     0x1408b73cc
1408b7376: cmp    BYTE PTR [rip+0x1ad9251],0x0        # 0x1423905ce
1408b737d: je     0x1408b73cc
1408b737f: lea    rcx,[rbp-0x50]
1408b7383: call   0x1400bb360
1408b7388: lea    eax,[rbx+0x2]
1408b738b: lea    eax,[rbx+rax*2]
1408b738e: lea    r9d,[rdi-0x1]
1408b7392: mov    DWORD PTR [rsp+0x30],eax
1408b7396: mov    DWORD PTR [rsp+0x28],0x7
1408b739e: mov    DWORD PTR [rsp+0x20],ebx
1408b73a2: xor    r8d,r8d
1408b73a5: mov    edx,DWORD PTR [rip+0xfeb779]        # 0x1418a2b24
1408b73ab: lea    rcx,[rbp-0x50]
1408b73af: call   0x1400bb380
1408b73b4: mov    edx,DWORD PTR [rsp+0x40]
1408b73b8: lea    rcx,[rbp-0x50]
1408b73bc: call   0x14140f200
1408b73c1: mov    eax,DWORD PTR [rbp-0x50]
1408b73c4: mov    DWORD PTR [rip+0xfeb75a],eax        # 0x1418a2b24
1408b73ca: jmp    0x1408b73d3
1408b73cc: mov    BYTE PTR [rip+0xfeb759],0x0        # 0x1418a2b2c
1408b73d3: cmp    BYTE PTR [rip+0xfeb753],0x0        # 0x1418a2b2d
1408b73da: je     0x1408b9049
1408b73e0: cmp    BYTE PTR [rip+0x1ad91ee],0x0        # 0x1423905d5
1408b73e7: je     0x1408b7448
1408b73e9: cmp    BYTE PTR [rip+0x1ad91de],0x0        # 0x1423905ce
1408b73f0: je     0x1408b7448
1408b73f2: lea    rcx,[rbp-0x50]
1408b73f6: call   0x1400bb360
1408b73fb: lea    ecx,[rbx-0x1]
1408b73fe: lea    ecx,[rcx+rcx*2]
1408b7401: lea    eax,[rcx+0x7]
1408b7404: mov    r9d,DWORD PTR [rip+0xfeb82d]        # 0x1418a2c38
1408b740b: dec    r9d
1408b740e: mov    DWORD PTR [rsp+0x30],eax
1408b7412: mov    DWORD PTR [rsp+0x28],r12d
1408b7417: mov    DWORD PTR [rsp+0x20],ecx
1408b741b: xor    r8d,r8d
1408b741e: mov    edx,DWORD PTR [rip+0xfeb704]        # 0x1418a2b28
1408b7424: lea    rcx,[rbp-0x50]
1408b7428: call   0x1400bb380
1408b742d: mov    edx,DWORD PTR [rsp+0x40]
1408b7431: lea    rcx,[rbp-0x50]
1408b7435: call   0x14140f200
1408b743a: mov    eax,DWORD PTR [rbp-0x50]
1408b743d: mov    DWORD PTR [rip+0xfeb6e5],eax        # 0x1418a2b28
1408b7443: jmp    0x1408b9049
1408b7448: mov    BYTE PTR [rip+0xfeb6de],0x0        # 0x1418a2b2d
1408b744f: jmp    0x1408b9049
1408b7454: cmp    BYTE PTR [rip+0xfead55],0x0        # 0x1418a21b0
1408b745b: je     0x1408b7840
1408b7461: cmp    BYTE PTR [rip+0xfead49],0x0        # 0x1418a21b1
1408b7468: je     0x1408b753e
1408b746e: mov    DWORD PTR [rsp+0x68],0xffffffff
1408b7476: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b747e: cmp    BYTE PTR [rip+0x1ad9150],0x0        # 0x1423905d5
1408b7485: je     0x1408b749d
1408b7487: lea    r8,[rsp+0x40]
1408b748c: lea    rdx,[rsp+0x68]
1408b7491: lea    rcx,[rip+0x1d92f58]        # 0x14264a3f0
1408b7498: call   0x1400bb340
1408b749d: mov    ecx,DWORD PTR [rip+0x1b162e5]        # 0x1423cd788
1408b74a3: add    ecx,0xfffffff3
1408b74a6: mov    eax,0x55555556
1408b74ab: imul   ecx
1408b74ad: mov    ebx,edx
1408b74af: shr    ebx,0x1f
1408b74b2: add    ebx,edx
1408b74b4: lea    rcx,[rip+0xfeacfd]        # 0x1418a21b8
1408b74bb: call   0x14006ee50
1408b74c0: mov    rdi,rax
1408b74c3: cmp    BYTE PTR [rip+0xfead0a],0x0        # 0x1418a21d4
1408b74ca: je     0x1408b9049
1408b74d0: cmp    BYTE PTR [rip+0x1ad90fe],0x0        # 0x1423905d5
1408b74d7: je     0x1408b7532
1408b74d9: cmp    BYTE PTR [rip+0x1ad90ee],0x0        # 0x1423905ce
1408b74e0: je     0x1408b7532
1408b74e2: lea    rcx,[rbp-0x50]
1408b74e6: call   0x1400bb360
1408b74eb: lea    ecx,[rbx+0x2]
1408b74ee: lea    eax,[rcx+rcx*2]
1408b74f1: lea    r9d,[rdi-0x1]
1408b74f5: mov    DWORD PTR [rsp+0x30],eax
1408b74f9: mov    DWORD PTR [rsp+0x28],0x9
1408b7501: mov    DWORD PTR [rsp+0x20],ebx
1408b7505: xor    r8d,r8d
1408b7508: mov    edx,DWORD PTR [rip+0xfeacc2]        # 0x1418a21d0
1408b750e: lea    rcx,[rbp-0x50]
1408b7512: call   0x1400bb380
1408b7517: mov    edx,DWORD PTR [rsp+0x40]
1408b751b: lea    rcx,[rbp-0x50]
1408b751f: call   0x14140f200
1408b7524: mov    eax,DWORD PTR [rbp-0x50]
1408b7527: mov    DWORD PTR [rip+0xfeaca3],eax        # 0x1418a21d0
1408b752d: jmp    0x1408b9049
1408b7532: mov    BYTE PTR [rip+0xfeac9b],0x0        # 0x1418a21d4
1408b7539: jmp    0x1408b9049
1408b753e: cmp    BYTE PTR [rip+0xfeaf9b],0x0        # 0x1418a24e0
1408b7545: jne    0x1408b758c
1408b7547: cmp    BYTE PTR [rip+0xfeaf93],0x0        # 0x1418a24e1
1408b754e: jne    0x1408b758c
1408b7550: lea    rcx,[rip+0xfeb019]        # 0x1418a2570
1408b7557: call   0x14006ee50
1408b755c: test   rax,rax
1408b755f: je     0x1408b756a
1408b7561: cmp    BYTE PTR [rip+0xfeb024],0x0        # 0x1418a258c
1408b7568: jne    0x1408b758c
1408b756a: lea    rcx,[rip+0xfeafbf]        # 0x1418a2530
1408b7571: call   0x14006ee50
1408b7576: test   rax,rax
1408b7579: je     0x1408b9049
1408b757f: cmp    BYTE PTR [rip+0xfeafc6],0x0        # 0x1418a254c
1408b7586: je     0x1408b9049
1408b758c: mov    DWORD PTR [rsp+0x68],0xffffffff
1408b7594: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b759c: cmp    BYTE PTR [rip+0x1ad9032],0x0        # 0x1423905d5
1408b75a3: je     0x1408b75bb
1408b75a5: lea    r8,[rsp+0x40]
1408b75aa: lea    rdx,[rsp+0x68]
1408b75af: lea    rcx,[rip+0x1d92e3a]        # 0x14264a3f0
1408b75b6: call   0x1400bb340
1408b75bb: mov    ebx,DWORD PTR [rip+0x1b161c7]        # 0x1423cd788
1408b75c1: add    ebx,0xfffffffc
1408b75c4: cmp    WORD PTR [rip+0xfeaf5e],0xffff        # 0x1418a252a
1408b75cc: jne    0x1408b7601
1408b75ce: lea    rcx,[rip+0xfeaf9b]        # 0x1418a2570
1408b75d5: call   0x14006ee50
1408b75da: test   rax,rax
1408b75dd: je     0x1408b7601
1408b75df: lea    rcx,[rip+0xfeaf8a]        # 0x1418a2570
1408b75e6: call   0x14006ee50
1408b75eb: xor    ecx,ecx
1408b75ed: add    eax,0xfffffffe
1408b75f0: cmovns ecx,eax
1408b75f3: mov    edx,0x5
1408b75f8: cmp    ecx,edx
1408b75fa: cmovg  ecx,edx
1408b75fd: lea    r12d,[rcx+0xa]
1408b7601: lea    esi,[r12+0x2]
1408b7606: sub    ebx,esi
1408b7608: sub    ebx,0x7
1408b760b: mov    eax,0x55555556
1408b7610: imul   ebx
1408b7612: mov    edi,edx
1408b7614: shr    edi,0x1f
1408b7617: add    edi,edx
1408b7619: lea    rcx,[rip+0xfeaf50]        # 0x1418a2570
1408b7620: call   0x14006ee50
1408b7625: test   rax,rax
1408b7628: je     0x1408b76a7
1408b762a: cmp    BYTE PTR [rip+0xfeaf5b],0x0        # 0x1418a258c
1408b7631: je     0x1408b76a7
1408b7633: cmp    BYTE PTR [rip+0x1ad8f9b],0x0        # 0x1423905d5
1408b763a: je     0x1408b76a0
1408b763c: cmp    BYTE PTR [rip+0x1ad8f8b],0x0        # 0x1423905ce
1408b7643: je     0x1408b76a0
1408b7645: lea    ebx,[r12-0x1]
1408b764a: lea    rcx,[rbp-0x50]
1408b764e: call   0x1400bb360
1408b7653: lea    rcx,[rip+0xfeaf16]        # 0x1418a2570
1408b765a: call   0x14006ee50
1408b765f: lea    r9d,[rax-0x1]
1408b7663: lea    ecx,[rbx-0x6]
1408b7666: mov    DWORD PTR [rsp+0x30],ebx
1408b766a: mov    DWORD PTR [rsp+0x28],0x7
1408b7672: mov    DWORD PTR [rsp+0x20],ecx
1408b7676: xor    r8d,r8d
1408b7679: mov    edx,DWORD PTR [rip+0xfeaf09]        # 0x1418a2588
1408b767f: lea    rcx,[rbp-0x50]
1408b7683: call   0x1400bb380
1408b7688: mov    edx,DWORD PTR [rsp+0x40]
1408b768c: lea    rcx,[rbp-0x50]
1408b7690: call   0x14140f200
1408b7695: mov    eax,DWORD PTR [rbp-0x50]
1408b7698: mov    DWORD PTR [rip+0xfeaeea],eax        # 0x1418a2588
1408b769e: jmp    0x1408b76a7
1408b76a0: mov    BYTE PTR [rip+0xfeaee5],0x0        # 0x1418a258c
1408b76a7: lea    rcx,[rip+0xfeae82]        # 0x1418a2530
1408b76ae: call   0x14006ee50
1408b76b3: test   rax,rax
1408b76b6: je     0x1408b7742
1408b76bc: cmp    BYTE PTR [rip+0xfeae89],0x0        # 0x1418a254c
1408b76c3: je     0x1408b7742
1408b76c5: cmp    BYTE PTR [rip+0x1ad8f09],0x0        # 0x1423905d5
1408b76cc: je     0x1408b773b
1408b76ce: cmp    BYTE PTR [rip+0x1ad8ef9],0x0        # 0x1423905ce
1408b76d5: je     0x1408b773b
1408b76d7: lea    rcx,[rbp-0x50]
1408b76db: call   0x1400bb360
1408b76e0: lea    rcx,[rip+0xfeae49]        # 0x1418a2530
1408b76e7: call   0x14006ee50
1408b76ec: lea    r9d,[rax*2-0x1]
1408b76f4: add    r9d,eax
1408b76f7: lea    edx,[rdi-0x1]
1408b76fa: lea    edx,[rdx+rdx*2]
1408b76fd: lea    eax,[rdx+0x1]
1408b7700: add    eax,esi
1408b7702: lea    ecx,[rsi+0x4]
1408b7705: mov    DWORD PTR [rsp+0x30],eax
1408b7709: mov    DWORD PTR [rsp+0x28],ecx
1408b770d: mov    DWORD PTR [rsp+0x20],edx
1408b7711: xor    r8d,r8d
1408b7714: mov    edx,DWORD PTR [rip+0xfeae2e]        # 0x1418a2548
1408b771a: lea    rcx,[rbp-0x50]
1408b771e: call   0x1400bb380
1408b7723: mov    edx,DWORD PTR [rsp+0x40]
1408b7727: lea    rcx,[rbp-0x50]
1408b772b: call   0x14140f200
1408b7730: mov    eax,DWORD PTR [rbp-0x50]
1408b7733: mov    DWORD PTR [rip+0xfeae0f],eax        # 0x1418a2548
1408b7739: jmp    0x1408b7742
1408b773b: mov    BYTE PTR [rip+0xfeae0a],0x0        # 0x1418a254c
1408b7742: cmp    BYTE PTR [rip+0xfead97],0x0        # 0x1418a24e0
1408b7749: je     0x1408b77bb
1408b774b: cmp    BYTE PTR [rip+0x1ad8e83],0x0        # 0x1423905d5
1408b7752: je     0x1408b77b4
1408b7754: cmp    BYTE PTR [rip+0x1ad8e73],0x0        # 0x1423905ce
1408b775b: je     0x1408b77b4
1408b775d: lea    rcx,[rbp-0x20]
1408b7761: call   0x1400bb360
1408b7766: lea    edx,[rdi-0x1]
1408b7769: lea    edx,[rdx+rdx*2]
1408b776c: lea    eax,[rdx+0x1]
1408b776f: add    eax,esi
1408b7771: lea    ecx,[rsi+0x4]
1408b7774: mov    r9d,DWORD PTR [rip+0xfeaba5]        # 0x1418a2320
1408b777b: dec    r9d
1408b777e: mov    DWORD PTR [rsp+0x30],eax
1408b7782: mov    DWORD PTR [rsp+0x28],ecx
1408b7786: mov    DWORD PTR [rsp+0x20],edx
1408b778a: xor    r8d,r8d
1408b778d: mov    edx,DWORD PTR [rip+0xfead45]        # 0x1418a24d8
1408b7793: lea    rcx,[rbp-0x20]
1408b7797: call   0x1400bb380
1408b779c: mov    edx,DWORD PTR [rsp+0x40]
1408b77a0: lea    rcx,[rbp-0x20]
1408b77a4: call   0x14140f200
1408b77a9: mov    eax,DWORD PTR [rbp-0x20]
1408b77ac: mov    DWORD PTR [rip+0xfead26],eax        # 0x1418a24d8
1408b77b2: jmp    0x1408b77bb
1408b77b4: mov    BYTE PTR [rip+0xfead25],0x0        # 0x1418a24e0
1408b77bb: cmp    BYTE PTR [rip+0xfead1f],0x0        # 0x1418a24e1
1408b77c2: je     0x1408b9049
1408b77c8: cmp    BYTE PTR [rip+0x1ad8e06],0x0        # 0x1423905d5
1408b77cf: je     0x1408b7834
1408b77d1: cmp    BYTE PTR [rip+0x1ad8df6],0x0        # 0x1423905ce
1408b77d8: je     0x1408b7834
1408b77da: lea    rcx,[rbp-0x20]
1408b77de: call   0x1400bb360
1408b77e3: lea    edx,[rdi-0x1]
1408b77e6: lea    edx,[rdx+rdx*2]
1408b77e9: lea    eax,[rdx+0x1]
1408b77ec: add    eax,esi
1408b77ee: lea    ecx,[rsi+0x4]
1408b77f1: mov    r9d,DWORD PTR [rip+0xfeab2c]        # 0x1418a2324
1408b77f8: dec    r9d
1408b77fb: mov    DWORD PTR [rsp+0x30],eax
1408b77ff: mov    DWORD PTR [rsp+0x28],ecx
1408b7803: mov    DWORD PTR [rsp+0x20],edx
1408b7807: xor    r8d,r8d
1408b780a: mov    edx,DWORD PTR [rip+0xfeaccc]        # 0x1418a24dc
1408b7810: lea    rcx,[rbp-0x20]
1408b7814: call   0x1400bb380
1408b7819: mov    edx,DWORD PTR [rsp+0x40]
1408b781d: lea    rcx,[rbp-0x20]
1408b7821: call   0x14140f200
1408b7826: mov    eax,DWORD PTR [rbp-0x20]
1408b7829: mov    DWORD PTR [rip+0xfeacad],eax        # 0x1418a24dc
1408b782f: jmp    0x1408b9049
1408b7834: mov    BYTE PTR [rip+0xfeaca6],0x0        # 0x1418a24e1
1408b783b: jmp    0x1408b9049
1408b7840: cmp    BYTE PTR [rip+0xfea731],0x0        # 0x1418a1f78
1408b7847: je     0x1408b7992
1408b784d: mov    DWORD PTR [rsp+0x68],0xffffffff
1408b7855: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b785d: cmp    BYTE PTR [rip+0x1ad8d71],0x0        # 0x1423905d5
1408b7864: je     0x1408b787c
1408b7866: lea    r8,[rsp+0x40]
1408b786b: lea    rdx,[rsp+0x68]
1408b7870: lea    rcx,[rip+0x1d92b79]        # 0x14264a3f0
1408b7877: call   0x1400bb340
1408b787c: lea    rcx,[rip+0xfea71d]        # 0x1418a1fa0
1408b7883: call   0x14006f450
1408b7888: mov    rdi,rax
1408b788b: mov    ecx,DWORD PTR [rip+0x1b15ef7]        # 0x1423cd788
1408b7891: add    ecx,0xfffffff5
1408b7894: mov    eax,0x55555556
1408b7899: imul   ecx
1408b789b: mov    ebx,edx
1408b789d: shr    ebx,0x1f
1408b78a0: add    ebx,edx
1408b78a2: cmp    BYTE PTR [rip+0xfea71b],0x0        # 0x1418a1fc4
1408b78a9: je     0x1408b7911
1408b78ab: cmp    BYTE PTR [rip+0x1ad8d23],0x0        # 0x1423905d5
1408b78b2: je     0x1408b790a
1408b78b4: cmp    BYTE PTR [rip+0x1ad8d13],0x0        # 0x1423905ce
1408b78bb: je     0x1408b790a
1408b78bd: lea    rcx,[rbp-0x50]
1408b78c1: call   0x1400bb360
1408b78c6: lea    eax,[rbx+0x2]
1408b78c9: lea    eax,[rbx+rax*2]
1408b78cc: lea    r9d,[rdi-0x1]
1408b78d0: mov    DWORD PTR [rsp+0x30],eax
1408b78d4: mov    DWORD PTR [rsp+0x28],0x7
1408b78dc: mov    DWORD PTR [rsp+0x20],ebx
1408b78e0: xor    r8d,r8d
1408b78e3: mov    edx,DWORD PTR [rip+0xfea6d3]        # 0x1418a1fbc
1408b78e9: lea    rcx,[rbp-0x50]
1408b78ed: call   0x1400bb380
1408b78f2: mov    edx,DWORD PTR [rsp+0x40]
1408b78f6: lea    rcx,[rbp-0x50]
1408b78fa: call   0x14140f200
1408b78ff: mov    eax,DWORD PTR [rbp-0x50]
1408b7902: mov    DWORD PTR [rip+0xfea6b4],eax        # 0x1418a1fbc
1408b7908: jmp    0x1408b7911
1408b790a: mov    BYTE PTR [rip+0xfea6b3],0x0        # 0x1418a1fc4
1408b7911: cmp    BYTE PTR [rip+0xfea6ad],0x0        # 0x1418a1fc5
1408b7918: je     0x1408b9049
1408b791e: cmp    BYTE PTR [rip+0x1ad8cb0],0x0        # 0x1423905d5
1408b7925: je     0x1408b7986
1408b7927: cmp    BYTE PTR [rip+0x1ad8ca0],0x0        # 0x1423905ce
1408b792e: je     0x1408b7986
1408b7930: lea    rcx,[rbp-0x50]
1408b7934: call   0x1400bb360
1408b7939: lea    ecx,[rbx-0x1]
1408b793c: lea    ecx,[rcx+rcx*2]
1408b793f: lea    eax,[rcx+0x7]
1408b7942: mov    r9d,DWORD PTR [rip+0xfea787]        # 0x1418a20d0
1408b7949: dec    r9d
1408b794c: mov    DWORD PTR [rsp+0x30],eax
1408b7950: mov    DWORD PTR [rsp+0x28],r12d
1408b7955: mov    DWORD PTR [rsp+0x20],ecx
1408b7959: xor    r8d,r8d
1408b795c: mov    edx,DWORD PTR [rip+0xfea65e]        # 0x1418a1fc0
1408b7962: lea    rcx,[rbp-0x50]
1408b7966: call   0x1400bb380
1408b796b: mov    edx,DWORD PTR [rsp+0x40]
1408b796f: lea    rcx,[rbp-0x50]
1408b7973: call   0x14140f200
1408b7978: mov    eax,DWORD PTR [rbp-0x50]
1408b797b: mov    DWORD PTR [rip+0xfea63f],eax        # 0x1418a1fc0
1408b7981: jmp    0x1408b9049
1408b7986: mov    BYTE PTR [rip+0xfea638],0x0        # 0x1418a1fc5
1408b798d: jmp    0x1408b9049
1408b7992: movzx  eax,BYTE PTR [rip+0xfeb5af]        # 0x1418a2f48
1408b7999: movzx  edx,BYTE PTR [rip+0xfeb358]        # 0x1418a2cf8
1408b79a0: movzx  ecx,BYTE PTR [rip+0xfea0b1]        # 0x1418a1a58
1408b79a7: cmp    BYTE PTR [rip+0xfef852],0x0        # 0x1418a7200
1408b79ae: je     0x1408b7be8
1408b79b4: test   dl,dl
1408b79b6: jne    0x1408b7be8
1408b79bc: test   al,al
1408b79be: jne    0x1408b7be8
1408b79c4: test   cl,cl
1408b79c6: jne    0x1408b7be8
1408b79cc: mov    DWORD PTR [rsp+0x68],0xffffffff
1408b79d4: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b79dc: cmp    BYTE PTR [rip+0x1ad8bf3],cl        # 0x1423905d5
1408b79e2: je     0x1408b79fa
1408b79e4: lea    r8,[rsp+0x40]
1408b79e9: lea    rdx,[rsp+0x68]
1408b79ee: lea    rcx,[rip+0x1d929fb]        # 0x14264a3f0
1408b79f5: call   0x1400bb340
1408b79fa: mov    ecx,DWORD PTR [rip+0x1b15d88]        # 0x1423cd788
1408b7a00: cmp    BYTE PTR [rip+0xfef835],0x0        # 0x1418a723c
1408b7a07: je     0x1408b7a9b
1408b7a0d: add    ecx,0xfffffff5
1408b7a10: mov    eax,0x55555556
1408b7a15: imul   ecx
1408b7a17: mov    ebx,edx
1408b7a19: shr    ebx,0x1f
1408b7a1c: add    ebx,edx
1408b7a1e: lea    rcx,[rip+0xfef7fb]        # 0x1418a7220
1408b7a25: call   0x14006ee50
1408b7a2a: mov    rdi,rax
1408b7a2d: cmp    BYTE PTR [rip+0x1ad8ba1],0x0        # 0x1423905d5
1408b7a34: je     0x1408b7a8f
1408b7a36: cmp    BYTE PTR [rip+0x1ad8b91],0x0        # 0x1423905ce
1408b7a3d: je     0x1408b7a8f
1408b7a3f: lea    rcx,[rbp-0x50]
1408b7a43: call   0x1400bb360
1408b7a48: lea    ecx,[rbx+0x2]
1408b7a4b: lea    ecx,[rbx+rcx*2]
1408b7a4e: lea    r9d,[rdi-0x1]
1408b7a52: mov    DWORD PTR [rsp+0x30],ecx
1408b7a56: mov    DWORD PTR [rsp+0x28],0x7
1408b7a5e: mov    DWORD PTR [rsp+0x20],ebx
1408b7a62: xor    r8d,r8d
1408b7a65: mov    edx,DWORD PTR [rip+0xfef7cd]        # 0x1418a7238
1408b7a6b: lea    rcx,[rbp-0x50]
1408b7a6f: call   0x1400bb380
1408b7a74: mov    edx,DWORD PTR [rsp+0x40]
1408b7a78: lea    rcx,[rbp-0x50]
1408b7a7c: call   0x14140f200
1408b7a81: mov    eax,DWORD PTR [rbp-0x50]
1408b7a84: mov    DWORD PTR [rip+0xfef7ae],eax        # 0x1418a7238
1408b7a8a: jmp    0x1408b9049
1408b7a8f: mov    BYTE PTR [rip+0xfef7a6],0x0        # 0x1418a723c
1408b7a96: jmp    0x1408b9049
1408b7a9b: cmp    BYTE PTR [rip+0xfef7a6],0x0        # 0x1418a7248
1408b7aa2: je     0x1408b9049
1408b7aa8: add    ecx,0xfffffff2
1408b7aab: mov    eax,0x55555556
1408b7ab0: imul   ecx
1408b7ab2: mov    esi,edx
1408b7ab4: shr    esi,0x1f
1408b7ab7: add    esi,edx
1408b7ab9: xor    edi,edi
1408b7abb: cmp    DWORD PTR [rip+0xfef77f],edi        # 0x1418a7240
1408b7ac1: jl     0x1408b7b7a
1408b7ac7: lea    rcx,[rip+0xfef752]        # 0x1418a7220
1408b7ace: call   0x14006ee50
1408b7ad3: movsxd rcx,DWORD PTR [rip+0xfef766]        # 0x1418a7240
1408b7ada: cmp    ecx,eax
1408b7adc: jge    0x1408b7b7a
1408b7ae2: mov    rdx,rcx
1408b7ae5: lea    rcx,[rip+0xfef734]        # 0x1418a7220
1408b7aec: call   0x14006f220
1408b7af1: mov    rbx,QWORD PTR [rax]
1408b7af4: lea    rdx,[rsp+0x48]
1408b7af9: lea    rcx,[rbx+0x10]
1408b7afd: call   0x14006f240
1408b7b02: lea    rdx,[rsp+0x60]
1408b7b07: lea    rcx,[rbx+0x10]
1408b7b0b: call   0x14006f230
1408b7b10: lea    r8,[rsp+0x60]
1408b7b15: lea    rdx,[rsp+0x58]
1408b7b1a: lea    rcx,[rsp+0x48]
1408b7b1f: call   0x14006ee20
1408b7b24: xor    edx,edx
1408b7b26: movzx  ecx,BYTE PTR [rax]
1408b7b29: call   0x1400657b0
1408b7b2e: test   al,al
1408b7b30: je     0x1408b7b7a
1408b7b32: lea    rcx,[rsp+0x48]
1408b7b37: call   0x14006ee10
1408b7b3c: mov    rcx,QWORD PTR [rax]
1408b7b3f: lea    eax,[rdi+0x1]
1408b7b42: cmp    BYTE PTR [rcx+0x90],0x0
1408b7b49: cmove  eax,edi
1408b7b4c: mov    edi,eax
1408b7b4e: lea    rcx,[rsp+0x48]
1408b7b53: call   0x14006ee00
1408b7b58: lea    r8,[rsp+0x60]
1408b7b5d: lea    rdx,[rsp+0x58]
1408b7b62: lea    rcx,[rsp+0x48]
1408b7b67: call   0x14006ee20
1408b7b6c: xor    edx,edx
1408b7b6e: movzx  ecx,BYTE PTR [rax]
1408b7b71: call   0x1400657b0
1408b7b76: test   al,al
1408b7b78: jne    0x1408b7b32
1408b7b7a: cmp    BYTE PTR [rip+0x1ad8a54],0x0        # 0x1423905d5
1408b7b81: je     0x1408b7bdc
1408b7b83: cmp    BYTE PTR [rip+0x1ad8a44],0x0        # 0x1423905ce
1408b7b8a: je     0x1408b7bdc
1408b7b8c: lea    rcx,[rbp-0x50]
1408b7b90: call   0x1400bb360
1408b7b95: lea    eax,[rsi*2+0x7]
1408b7b9c: add    eax,esi
1408b7b9e: lea    r9d,[rdi-0x1]
1408b7ba2: mov    DWORD PTR [rsp+0x30],eax
1408b7ba6: mov    DWORD PTR [rsp+0x28],r12d
1408b7bab: mov    DWORD PTR [rsp+0x20],esi
1408b7baf: xor    r8d,r8d
1408b7bb2: mov    edx,DWORD PTR [rip+0xfef68c]        # 0x1418a7244
1408b7bb8: lea    rcx,[rbp-0x50]
1408b7bbc: call   0x1400bb380
1408b7bc1: mov    edx,DWORD PTR [rsp+0x40]
1408b7bc5: lea    rcx,[rbp-0x50]
1408b7bc9: call   0x14140f200
1408b7bce: mov    eax,DWORD PTR [rbp-0x50]
1408b7bd1: mov    DWORD PTR [rip+0xfef66d],eax        # 0x1418a7244
1408b7bd7: jmp    0x1408b9049
1408b7bdc: mov    BYTE PTR [rip+0xfef665],0x0        # 0x1418a7248
1408b7be3: jmp    0x1408b9049
1408b7be8: cmp    BYTE PTR [rip+0xfee789],0x0        # 0x1418a6378
1408b7bef: je     0x1408b8d32
1408b7bf5: test   dl,dl
1408b7bf7: jne    0x1408b8d32
1408b7bfd: test   al,al
1408b7bff: jne    0x1408b8d32
1408b7c05: test   cl,cl
1408b7c07: jne    0x1408b8d32
1408b7c0d: mov    DWORD PTR [rsp+0x68],0xffffffff
1408b7c15: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b7c1d: cmp    BYTE PTR [rip+0x1ad89b2],cl        # 0x1423905d5
1408b7c23: je     0x1408b7c48
1408b7c25: lea    r8,[rsp+0x40]
1408b7c2a: lea    rdx,[rsp+0x68]
1408b7c2f: lea    rcx,[rip+0x1d927ba]        # 0x14264a3f0
1408b7c36: call   0x1400bb340
1408b7c3b: movzx  edx,BYTE PTR [rip+0xfeb0b6]        # 0x1418a2cf8
1408b7c42: mov    r11d,0xe
1408b7c48: mov    r8d,DWORD PTR [rsp+0x78]
1408b7c4d: lea    r13d,[r8+0x4]
1408b7c51: mov    r9d,DWORD PTR [rsp+0x50]
1408b7c56: lea    esi,[r9-0x1c]
1408b7c5a: mov    edi,DWORD PTR [rip+0x1b15b28]        # 0x1423cd788
1408b7c60: add    edi,0xfffffffc
1408b7c63: lea    ebx,[r13+0x79]
1408b7c67: lea    r14d,[rsi-0x1]
1408b7c6b: mov    eax,DWORD PTR [rip+0xfee70b]        # 0x1418a637c
1408b7c71: dec    eax
1408b7c73: cmp    eax,0x6
1408b7c76: ja     0x1408b9049
1408b7c7c: cdqe
1408b7c7e: lea    r10,[rip+0xffffffffff74837b]        # 0x140000000
1408b7c85: mov    ecx,DWORD PTR [r10+rax*4+0x8b91a4]
1408b7c8d: add    rcx,r10
1408b7c90: jmp    rcx
1408b7c92: lea    rcx,[rip+0xfee8a7]        # 0x1418a6540
1408b7c99: call   0x14006ee50
1408b7c9e: mov    rsi,rax
1408b7ca1: mov    ecx,0x8
1408b7ca6: cmp    ebx,r14d
1408b7ca9: cmovle r12d,ecx
1408b7cad: sub    edi,r12d
1408b7cb0: dec    edi
1408b7cb2: mov    eax,0x55555556
1408b7cb7: imul   edi
1408b7cb9: mov    ebx,edx
1408b7cbb: shr    ebx,0x1f
1408b7cbe: add    ebx,edx
1408b7cc0: cmp    BYTE PTR [rip+0xfee891],0x0        # 0x1418a6558
1408b7cc7: je     0x1408b9049
1408b7ccd: cmp    BYTE PTR [rip+0x1ad8901],0x0        # 0x1423905d5
1408b7cd4: je     0x1408b7d33
1408b7cd6: cmp    BYTE PTR [rip+0x1ad88f1],0x0        # 0x1423905ce
1408b7cdd: je     0x1408b7d33
1408b7cdf: lea    rcx,[rbp-0x50]
1408b7ce3: call   0x1400bb360
1408b7ce8: lea    ecx,[rbx-0x1]
1408b7ceb: lea    ecx,[r12+rcx*2]
1408b7cef: add    ecx,ebx
1408b7cf1: lea    eax,[r12+0x1]
1408b7cf6: lea    r9d,[rsi-0x1]
1408b7cfa: mov    DWORD PTR [rsp+0x30],ecx
1408b7cfe: mov    DWORD PTR [rsp+0x28],eax
1408b7d02: mov    DWORD PTR [rsp+0x20],ebx
1408b7d06: xor    r8d,r8d
1408b7d09: mov    edx,DWORD PTR [rip+0xfee84d]        # 0x1418a655c
1408b7d0f: lea    rcx,[rbp-0x50]
1408b7d13: call   0x1400bb380
1408b7d18: mov    edx,DWORD PTR [rsp+0x40]
1408b7d1c: lea    rcx,[rbp-0x50]
1408b7d20: call   0x14140f200
1408b7d25: mov    eax,DWORD PTR [rbp-0x50]
1408b7d28: mov    DWORD PTR [rip+0xfee82e],eax        # 0x1418a655c
1408b7d2e: jmp    0x1408b9049
1408b7d33: mov    BYTE PTR [rip+0xfee81e],0x0        # 0x1418a6558
1408b7d3a: jmp    0x1408b9049
1408b7d3f: cmp    ebx,r14d
1408b7d42: mov    esi,0xc
1408b7d47: cmovle esi,r12d
1408b7d4b: mov    ebx,esi
1408b7d4d: cmp    DWORD PTR [rip+0xfee80c],0x5        # 0x1418a6560
1408b7d54: jne    0x1408b7d6a
1408b7d56: lea    rcx,[rip+0xfee883]        # 0x1418a65e0
1408b7d5d: call   0x14006ee50
1408b7d62: test   rax,rax
1408b7d65: je     0x1408b7d6a
1408b7d67: lea    ebx,[rsi+0x4]
1408b7d6a: sub    edi,ebx
1408b7d6c: dec    edi
1408b7d6e: mov    eax,0x55555556
1408b7d73: imul   edi
1408b7d75: mov    edi,edx
1408b7d77: shr    edi,0x1f
1408b7d7a: add    edi,edx
1408b7d7c: movsxd rax,DWORD PTR [rip+0xfee7dd]        # 0x1418a6560
1408b7d83: add    rax,0x351
1408b7d89: lea    rcx,[rax+rax*2]
1408b7d8d: lea    r14,[rip+0xfe983c]        # 0x1418a15d0
1408b7d94: lea    rcx,[r14+rcx*8]
1408b7d98: call   0x14006ee50
1408b7d9d: mov    rsi,rax
1408b7da0: movsxd rdx,DWORD PTR [rip+0xfee7b9]        # 0x1418a6560
1408b7da7: cmp    BYTE PTR [rdx+r14*1+0x5040],0x0
1408b7db0: je     0x1408b9049
1408b7db6: cmp    BYTE PTR [rip+0x1ad8818],0x0        # 0x1423905d5
1408b7dbd: je     0x1408b7e2b
1408b7dbf: cmp    BYTE PTR [rip+0x1ad8808],0x0        # 0x1423905ce
1408b7dc6: je     0x1408b7e2b
1408b7dc8: lea    rcx,[rbp-0x50]
1408b7dcc: call   0x1400bb360
1408b7dd1: lea    ecx,[rdi-0x1]
1408b7dd4: lea    ecx,[rbx+rcx*2]
1408b7dd7: add    ecx,edi
1408b7dd9: lea    eax,[rbx+0x1]
1408b7ddc: lea    r9d,[rsi-0x1]
1408b7de0: movsxd rdx,DWORD PTR [rip+0xfee779]        # 0x1418a6560
1408b7de7: mov    DWORD PTR [rsp+0x30],ecx
1408b7deb: mov    DWORD PTR [rsp+0x28],eax
1408b7def: mov    DWORD PTR [rsp+0x20],edi
1408b7df3: xor    r8d,r8d
1408b7df6: mov    edx,DWORD PTR [r14+rdx*4+0x5028]
1408b7dfe: lea    rcx,[rbp-0x50]
1408b7e02: call   0x1400bb380
1408b7e07: mov    edx,DWORD PTR [rsp+0x40]
1408b7e0b: lea    rcx,[rbp-0x50]
1408b7e0f: call   0x14140f200
1408b7e14: movsxd rcx,DWORD PTR [rip+0xfee745]        # 0x1418a6560
1408b7e1b: mov    eax,DWORD PTR [rbp-0x50]
1408b7e1e: mov    DWORD PTR [r14+rcx*4+0x5028],eax
1408b7e26: jmp    0x1408b9049
1408b7e2b: mov    BYTE PTR [rdx+r14*1+0x5040],0x0
1408b7e34: jmp    0x1408b9049
1408b7e39: lea    rdx,[rip+0xd3f300]        # 0x1415f7140
1408b7e40: lea    rcx,[rbp-0x50]
1408b7e44: call   0x140068150
1408b7e49: nop
1408b7e4a: lea    r8,[rbp-0x50]
1408b7e4e: lea    rdx,[rbp+0x0]
1408b7e52: lea    rcx,[rip+0xfee7bf]        # 0x1418a6618
1408b7e59: call   0x1400f0000
1408b7e5e: nop
1408b7e5f: lea    rcx,[rbp-0x50]
1408b7e63: call   0x140067e30
1408b7e68: lea    rcx,[rbp+0x0]
1408b7e6c: call   0x1408dc340
1408b7e71: test   al,al
1408b7e73: je     0x1408b7ed6
1408b7e75: lea    rcx,[rbp+0x0]
1408b7e79: call   0x14006ee10
1408b7e7e: mov    rcx,rax
1408b7e81: call   0x140224130
1408b7e86: cmp    rax,0x1
1408b7e8a: jne    0x1408b7eaa
1408b7e8c: lea    rcx,[rip+0xfee90d]        # 0x1418a67a0
1408b7e93: call   0x1408dc340
1408b7e98: test   al,al
1408b7e9a: je     0x1408b7ed6
1408b7e9c: lea    rcx,[rip+0xfee8fd]        # 0x1418a67a0
1408b7ea3: call   0x14006ee10
1408b7ea8: jmp    0x1408b7ecc
1408b7eaa: cmp    rax,0x3
1408b7eae: jne    0x1408b7ed6
1408b7eb0: lea    rcx,[rip+0xfee909]        # 0x1418a67c0
1408b7eb7: call   0x1408dc340
1408b7ebc: test   al,al
1408b7ebe: je     0x1408b7ed6
1408b7ec0: lea    rcx,[rip+0xfee8f9]        # 0x1418a67c0
1408b7ec7: call   0x14006ee10
1408b7ecc: mov    rdx,QWORD PTR [rax]
1408b7ecf: mov    rcx,rax
1408b7ed2: call   QWORD PTR [rdx+0x10]
1408b7ed5: nop
1408b7ed6: lea    rcx,[rbp+0x0]
1408b7eda: call   0x1400e10e0
1408b7edf: jmp    0x1408b9049
1408b7ee4: cmp    BYTE PTR [rip+0xfee8ed],0x0        # 0x1418a67d8
1408b7eeb: je     0x1408b838b
1408b7ef1: lea    eax,[r8+0x7d]
1408b7ef5: lea    edx,[r9-0x1d]
1408b7ef9: mov    ecx,DWORD PTR [rip+0xfee989]        # 0x1418a6888
1408b7eff: test   ecx,ecx
1408b7f01: js     0x1408b8176
1408b7f07: cmp    eax,edx
1408b7f09: cmovle r15d,r11d
1408b7f0d: sub    edi,r15d
1408b7f10: dec    edi
1408b7f12: mov    eax,0x55555556
1408b7f17: imul   edi
1408b7f19: mov    edi,edx
1408b7f1b: shr    edi,0x1f
1408b7f1e: add    edi,edx
1408b7f20: xor    ebx,ebx
1408b7f22: test   ecx,ecx
1408b7f24: je     0x1408b806d
1408b7f2a: sub    ecx,0x1
1408b7f2d: je     0x1408b7fd1
1408b7f33: cmp    ecx,0x1
1408b7f36: jne    0x1408b80f8
1408b7f3c: lea    rdx,[rsp+0x48]
1408b7f41: lea    rcx,[rip+0xfeea10]        # 0x1418a6958
1408b7f48: call   0x14006f240
1408b7f4d: lea    rdx,[rsp+0x60]
1408b7f52: lea    rcx,[rip+0xfee9ff]        # 0x1418a6958
1408b7f59: call   0x14006f230
1408b7f5e: lea    r8,[rsp+0x60]
1408b7f63: lea    rdx,[rsp+0x58]
1408b7f68: lea    rcx,[rsp+0x48]
1408b7f6d: call   0x14006ee20
1408b7f72: xor    edx,edx
1408b7f74: movzx  ecx,BYTE PTR [rax]
1408b7f77: call   0x1400657b0
1408b7f7c: test   al,al
1408b7f7e: je     0x1408b80f8
1408b7f84: lea    rcx,[rsp+0x48]
1408b7f89: call   0x14006ee10
1408b7f8e: mov    rcx,QWORD PTR [rax]
1408b7f91: lea    eax,[rbx+0x1]
1408b7f94: cmp    BYTE PTR [rcx+0x80],0x0
1408b7f9b: cmove  eax,ebx
1408b7f9e: mov    ebx,eax
1408b7fa0: lea    rcx,[rsp+0x48]
1408b7fa5: call   0x14006ee00
1408b7faa: lea    r8,[rsp+0x60]
1408b7faf: lea    rdx,[rsp+0x58]
1408b7fb4: lea    rcx,[rsp+0x48]
1408b7fb9: call   0x14006ee20
1408b7fbe: xor    edx,edx
1408b7fc0: movzx  ecx,BYTE PTR [rax]
1408b7fc3: call   0x1400657b0
1408b7fc8: test   al,al
1408b7fca: jne    0x1408b7f84
1408b7fcc: jmp    0x1408b80f8
1408b7fd1: lea    rdx,[rbp+0x0]
1408b7fd5: lea    rcx,[rip+0xfee95c]        # 0x1418a6938
1408b7fdc: call   0x14013be70
1408b7fe1: lea    rdx,[rbp+0x20]
1408b7fe5: lea    rcx,[rip+0xfee94c]        # 0x1418a6938
1408b7fec: call   0x14013bdf0
1408b7ff1: lea    r8,[rbp+0x20]
1408b7ff5: lea    rdx,[rsp+0x58]
1408b7ffa: lea    rcx,[rbp+0x0]
1408b7ffe: call   0x14013bd30
1408b8003: xor    edx,edx
1408b8005: movzx  ecx,BYTE PTR [rax]
1408b8008: call   0x1400657b0
1408b800d: test   al,al
1408b800f: je     0x1408b80f8
1408b8015: data16 data16 nop WORD PTR [rax+rax*1+0x0]
1408b8020: lea    rdx,[rbp-0x20]
1408b8024: lea    rcx,[rbp+0x0]
1408b8028: call   0x14013bd10
1408b802d: mov    rcx,rax
1408b8030: call   0x14013bc90
1408b8035: lea    ecx,[rbx+0x1]
1408b8038: test   al,al
1408b803a: cmove  ecx,ebx
1408b803d: mov    ebx,ecx
1408b803f: lea    rcx,[rbp+0x0]
1408b8043: call   0x14013bce0
1408b8048: lea    r8,[rbp+0x20]
1408b804c: lea    rdx,[rsp+0x58]
1408b8051: lea    rcx,[rbp+0x0]
1408b8055: call   0x14013bd30
1408b805a: xor    edx,edx
1408b805c: movzx  ecx,BYTE PTR [rax]
1408b805f: call   0x1400657b0
1408b8064: test   al,al
1408b8066: jne    0x1408b8020
1408b8068: jmp    0x1408b80f8
1408b806d: lea    rdx,[rbp+0x0]
1408b8071: lea    rcx,[rip+0xfee858]        # 0x1418a68d0
1408b8078: call   0x14013be70
1408b807d: lea    rdx,[rbp+0x20]
1408b8081: lea    rcx,[rip+0xfee848]        # 0x1418a68d0
1408b8088: call   0x14013bdf0
1408b808d: lea    r8,[rbp+0x20]
1408b8091: lea    rdx,[rsp+0x58]
1408b8096: lea    rcx,[rbp+0x0]
1408b809a: call   0x14013bd30
1408b809f: xor    edx,edx
1408b80a1: movzx  ecx,BYTE PTR [rax]
1408b80a4: call   0x1400657b0
1408b80a9: test   al,al
1408b80ab: je     0x1408b80f8
1408b80ad: nop    DWORD PTR [rax]
1408b80b0: lea    rdx,[rbp-0x20]
1408b80b4: lea    rcx,[rbp+0x0]
1408b80b8: call   0x14013bd10
1408b80bd: mov    rcx,rax
1408b80c0: call   0x14013bc90
1408b80c5: lea    ecx,[rbx+0x1]
1408b80c8: test   al,al
1408b80ca: cmove  ecx,ebx
1408b80cd: mov    ebx,ecx
1408b80cf: lea    rcx,[rbp+0x0]
1408b80d3: call   0x14013bce0
1408b80d8: lea    r8,[rbp+0x20]
1408b80dc: lea    rdx,[rsp+0x58]
1408b80e1: lea    rcx,[rbp+0x0]
1408b80e5: call   0x14013bd30
1408b80ea: xor    edx,edx
1408b80ec: movzx  ecx,BYTE PTR [rax]
1408b80ef: call   0x1400657b0
1408b80f4: test   al,al
1408b80f6: jne    0x1408b80b0
1408b80f8: cmp    BYTE PTR [rip+0xfee79d],0x0        # 0x1418a689c
1408b80ff: je     0x1408b9049
1408b8105: cmp    BYTE PTR [rip+0x1ad84c9],0x0        # 0x1423905d5
1408b810c: je     0x1408b816a
1408b810e: cmp    BYTE PTR [rip+0x1ad84b9],0x0        # 0x1423905ce
1408b8115: je     0x1408b816a
1408b8117: lea    rcx,[rbp-0x50]
1408b811b: call   0x1400bb360
1408b8120: lea    ecx,[rdi-0x1]
1408b8123: lea    ecx,[r15+rcx*2]
1408b8127: add    ecx,edi
1408b8129: lea    eax,[r15+0x1]
1408b812d: lea    r9d,[rbx-0x1]
1408b8131: mov    DWORD PTR [rsp+0x30],ecx
1408b8135: mov    DWORD PTR [rsp+0x28],eax
1408b8139: mov    DWORD PTR [rsp+0x20],edi
1408b813d: xor    r8d,r8d
1408b8140: mov    edx,DWORD PTR [rip+0xfee752]        # 0x1418a6898
1408b8146: lea    rcx,[rbp-0x50]
1408b814a: call   0x1400bb380
1408b814f: mov    edx,DWORD PTR [rsp+0x40]
1408b8153: lea    rcx,[rbp-0x50]
1408b8157: call   0x14140f200
1408b815c: mov    eax,DWORD PTR [rbp-0x50]
1408b815f: mov    DWORD PTR [rip+0xfee733],eax        # 0x1418a6898
1408b8165: jmp    0x1408b9049
1408b816a: mov    BYTE PTR [rip+0xfee72b],0x0        # 0x1418a689c
1408b8171: jmp    0x1408b9049
1408b8176: cmp    BYTE PTR [rip+0xfee7f3],0x0        # 0x1418a6970
1408b817d: je     0x1408b8229
1408b8183: cmp    eax,edx
1408b8185: cmovle r15d,r11d
1408b8189: sub    edi,r15d
1408b818c: dec    edi
1408b818e: mov    eax,0x55555556
1408b8193: imul   edi
1408b8195: mov    ebx,edx
1408b8197: shr    ebx,0x1f
1408b819a: add    ebx,edx
1408b819c: lea    rcx,[rip+0xfee7d5]        # 0x1418a6978
1408b81a3: call   0x14006ee50
1408b81a8: mov    rdi,rax
1408b81ab: cmp    BYTE PTR [rip+0xfee7e2],0x0        # 0x1418a6994
1408b81b2: je     0x1408b9049
1408b81b8: cmp    BYTE PTR [rip+0x1ad8416],0x0        # 0x1423905d5
1408b81bf: je     0x1408b821d
1408b81c1: cmp    BYTE PTR [rip+0x1ad8406],0x0        # 0x1423905ce
1408b81c8: je     0x1408b821d
1408b81ca: lea    rcx,[rbp-0x50]
1408b81ce: call   0x1400bb360
1408b81d3: lea    ecx,[rbx-0x1]
1408b81d6: lea    ecx,[r15+rcx*2]
1408b81da: add    ecx,ebx
1408b81dc: lea    eax,[r15+0x1]
1408b81e0: lea    r9d,[rdi-0x1]
1408b81e4: mov    DWORD PTR [rsp+0x30],ecx
1408b81e8: mov    DWORD PTR [rsp+0x28],eax
1408b81ec: mov    DWORD PTR [rsp+0x20],ebx
1408b81f0: xor    r8d,r8d
1408b81f3: mov    edx,DWORD PTR [rip+0xfee797]        # 0x1418a6990
1408b81f9: lea    rcx,[rbp-0x50]
1408b81fd: call   0x1400bb380
1408b8202: mov    edx,DWORD PTR [rsp+0x40]
1408b8206: lea    rcx,[rbp-0x50]
1408b820a: call   0x14140f200
1408b820f: mov    eax,DWORD PTR [rbp-0x50]
1408b8212: mov    DWORD PTR [rip+0xfee778],eax        # 0x1418a6990
1408b8218: jmp    0x1408b9049
1408b821d: mov    BYTE PTR [rip+0xfee770],0x0        # 0x1418a6994
1408b8224: jmp    0x1408b9049
1408b8229: cmp    eax,edx
1408b822b: mov    r15d,0xd
1408b8231: mov    r14d,0xb
1408b8237: cmovle r15d,r14d
1408b823b: lea    ecx,[rdi-0x10]
1408b823e: sub    ecx,r15d
1408b8241: mov    eax,0x55555556
1408b8246: imul   ecx
1408b8248: mov    ebx,edx
1408b824a: shr    ebx,0x1f
1408b824d: add    ebx,edx
1408b824f: mov    rcx,QWORD PTR [rip+0xfee58a]        # 0x1418a67e0
1408b8256: add    rcx,0x88
1408b825d: call   0x14006ee50
1408b8262: mov    rsi,rax
1408b8265: mov    rcx,QWORD PTR [rip+0xfee574]        # 0x1418a67e0
1408b826c: add    rcx,0x70
1408b8270: call   0x14006ee50
1408b8275: add    esi,eax
1408b8277: mov    rcx,QWORD PTR [rip+0xfee562]        # 0x1418a67e0
1408b827e: add    rcx,0x70
1408b8282: call   0x14006ee50
1408b8287: lea    rcx,[rip+0xfee5a2]        # 0x1418a6830
1408b828e: call   0x14006ee50
1408b8293: mov    r14,rax
1408b8296: cmp    BYTE PTR [rip+0xfee58f],0x0        # 0x1418a682c
1408b829d: je     0x1408b8310
1408b829f: cmp    BYTE PTR [rip+0x1ad832f],0x0        # 0x1423905d5
1408b82a6: je     0x1408b8304
1408b82a8: cmp    BYTE PTR [rip+0x1ad831f],0x0        # 0x1423905ce
1408b82af: je     0x1408b8304
1408b82b1: lea    rcx,[rbp-0x50]
1408b82b5: call   0x1400bb360
1408b82ba: lea    ecx,[r15-0x2]
1408b82be: lea    ecx,[rcx+rbx*2]
1408b82c1: add    ecx,ebx
1408b82c3: lea    eax,[r15+0x1]
1408b82c7: lea    r9d,[rsi-0x1]
1408b82cb: mov    DWORD PTR [rsp+0x30],ecx
1408b82cf: mov    DWORD PTR [rsp+0x28],eax
1408b82d3: mov    DWORD PTR [rsp+0x20],ebx
1408b82d7: xor    r8d,r8d
1408b82da: mov    edx,DWORD PTR [rip+0xfee548]        # 0x1418a6828
1408b82e0: lea    rcx,[rbp-0x50]
1408b82e4: call   0x1400bb380
1408b82e9: mov    edx,DWORD PTR [rsp+0x40]
1408b82ed: lea    rcx,[rbp-0x50]
1408b82f1: call   0x14140f200
1408b82f6: mov    eax,DWORD PTR [rbp-0x50]
1408b82f9: mov    DWORD PTR [rip+0xfee529],eax        # 0x1418a6828
1408b82ff: jmp    0x1408b9049
1408b8304: mov    BYTE PTR [rip+0xfee521],0x0        # 0x1418a682c
1408b830b: jmp    0x1408b9049
1408b8310: cmp    BYTE PTR [rip+0xfee535],0x0        # 0x1418a684c
1408b8317: je     0x1408b9049
1408b831d: cmp    BYTE PTR [rip+0x1ad82b1],0x0        # 0x1423905d5
1408b8324: je     0x1408b837f
1408b8326: cmp    BYTE PTR [rip+0x1ad82a1],0x0        # 0x1423905ce
1408b832d: je     0x1408b837f
1408b832f: lea    rcx,[rbp-0x50]
1408b8333: call   0x1400bb360
1408b8338: lea    eax,[rdi-0x5]
1408b833b: lea    ecx,[rdi-0xe]
1408b833e: lea    r9d,[r14-0x1]
1408b8342: mov    DWORD PTR [rsp+0x30],eax
1408b8346: mov    DWORD PTR [rsp+0x28],ecx
1408b834a: mov    DWORD PTR [rsp+0x20],0x4
1408b8352: xor    r8d,r8d
1408b8355: mov    edx,DWORD PTR [rip+0xfee4ed]        # 0x1418a6848
1408b835b: lea    rcx,[rbp-0x50]
1408b835f: call   0x1400bb380
1408b8364: mov    edx,DWORD PTR [rsp+0x40]
1408b8368: lea    rcx,[rbp-0x50]
1408b836c: call   0x14140f200
1408b8371: mov    eax,DWORD PTR [rbp-0x50]
1408b8374: mov    DWORD PTR [rip+0xfee4ce],eax        # 0x1418a6848
1408b837a: jmp    0x1408b9049
1408b837f: mov    BYTE PTR [rip+0xfee4c6],0x0        # 0x1418a684c
1408b8386: jmp    0x1408b9049
1408b838b: mov    ecx,DWORD PTR [rip+0x1b153f7]        # 0x1423cd788
1408b8391: add    ecx,0xfffffff1
1408b8394: mov    eax,0x55555556
1408b8399: imul   ecx
1408b839b: mov    ebx,edx
1408b839d: shr    ebx,0x1f
1408b83a0: add    ebx,edx
1408b83a2: lea    rcx,[rip+0x1b19417]        # 0x1423d17c0
1408b83a9: call   0x14006ee50
1408b83ae: mov    rdi,rax
1408b83b1: cmp    BYTE PTR [rip+0xfee41c],0x0        # 0x1418a67d4
1408b83b8: je     0x1408b9049
1408b83be: cmp    BYTE PTR [rip+0x1ad8210],0x0        # 0x1423905d5
1408b83c5: je     0x1408b8420
1408b83c7: cmp    BYTE PTR [rip+0x1ad8200],0x0        # 0x1423905ce
1408b83ce: je     0x1408b8420
1408b83d0: lea    rcx,[rbp-0x50]
1408b83d4: call   0x1400bb360
1408b83d9: lea    eax,[rbx+0x2]
1408b83dc: lea    eax,[rbx+rax*2]
1408b83df: lea    r9d,[rdi-0x1]
1408b83e3: mov    DWORD PTR [rsp+0x30],eax
1408b83e7: mov    DWORD PTR [rsp+0x28],0x7
1408b83ef: mov    DWORD PTR [rsp+0x20],ebx
1408b83f3: xor    r8d,r8d
1408b83f6: mov    edx,DWORD PTR [rip+0xfee3d4]        # 0x1418a67d0
1408b83fc: lea    rcx,[rbp-0x50]
1408b8400: call   0x1400bb380
1408b8405: mov    edx,DWORD PTR [rsp+0x40]
1408b8409: lea    rcx,[rbp-0x50]
1408b840d: call   0x14140f200
1408b8412: mov    eax,DWORD PTR [rbp-0x50]
1408b8415: mov    DWORD PTR [rip+0xfee3b5],eax        # 0x1418a67d0
1408b841b: jmp    0x1408b9049
1408b8420: mov    BYTE PTR [rip+0xfee3ad],0x0        # 0x1418a67d4
1408b8427: jmp    0x1408b9049
1408b842c: movsxd rax,DWORD PTR [rip+0xfee715]        # 0x1418a6b48
1408b8433: cmp    eax,0xffffffff
1408b8436: je     0x1408b8536
1408b843c: test   dl,dl
1408b843e: jne    0x1408b9049
1408b8444: mov    rdx,rax
1408b8447: lea    rcx,[rip+0xfee692]        # 0x1418a6ae0
1408b844e: call   0x14006f220
1408b8453: mov    rdi,QWORD PTR [rax]
1408b8456: mov    edx,DWORD PTR [rip+0x1adb214]        # 0x142393670
1408b845c: lea    rcx,[rip+0x1b19395]        # 0x1423d17f8
1408b8463: call   0x14007daf0
1408b8468: mov    rsi,rax
1408b846b: test   rax,rax
1408b846e: je     0x1408b8525
1408b8474: mov    rdx,QWORD PTR [rdi]
1408b8477: mov    rcx,rdi
1408b847a: call   QWORD PTR [rdx+0x330]
1408b8480: call   0x1400727b0
1408b8485: mov    rbx,rax
1408b8488: mov    QWORD PTR [rax+0x90],rdi
1408b848f: mov    r8d,DWORD PTR [rax]
1408b8492: mov    edx,0x1
1408b8497: mov    rcx,rdi
1408b849a: call   0x140072660
1408b849f: or     DWORD PTR [rdi+0x10],0x40000
1408b84a6: mov    r8,QWORD PTR [rdi]
1408b84a9: mov    dl,0x1
1408b84ab: mov    rcx,rdi
1408b84ae: call   QWORD PTR [r8+0x328]
1408b84b5: call   0x14007d170
1408b84ba: mov    ecx,DWORD PTR [rip+0x1abc234]        # 0x1423746f4
1408b84c0: mov    DWORD PTR [rax+0x8],ecx
1408b84c3: mov    ecx,DWORD PTR [rip+0x1acfafb]        # 0x142387fc4
1408b84c9: mov    DWORD PTR [rax+0xc],ecx
1408b84cc: mov    ecx,DWORD PTR [rbx]
1408b84ce: mov    DWORD PTR [rax+0x28],ecx
1408b84d1: mov    ecx,DWORD PTR [rip+0x1adb1a1]        # 0x142393678
1408b84d7: mov    DWORD PTR [rax+0x34],ecx
1408b84da: mov    ecx,DWORD PTR [rip+0x1adb194]        # 0x142393674
1408b84e0: mov    DWORD PTR [rax+0x38],ecx
1408b84e3: or     DWORD PTR [rax+0x3c],0x1
1408b84e7: mov    rdx,QWORD PTR [rax]
1408b84ea: mov    rcx,rax
1408b84ed: call   QWORD PTR [rdx+0x128]
1408b84f3: mov    r8d,0x1
1408b84f9: lea    rdx,[rbx+0x8]
1408b84fd: mov    rcx,rsi
1408b8500: call   0x140931860
1408b8505: mov    QWORD PTR [rsp+0x20],rsi
1408b850a: mov    r9d,0x1
1408b8510: lea    r8,[rbx+0x8]
1408b8514: mov    edx,0x5
1408b8519: lea    rcx,[rip+0xfea7d8]        # 0x1418a2cf8
1408b8520: call   0x1401fc150
1408b8525: lea    rcx,[rip+0xfee4f4]        # 0x1418a6a20
1408b852c: call   0x1404227b0
1408b8531: jmp    0x1408b9049
1408b8536: cmp    BYTE PTR [rip+0xfee598],0x0        # 0x1418a6ad5
1408b853d: je     0x1408b85f6
1408b8543: cmp    BYTE PTR [rip+0xfee5fa],0x0        # 0x1418a6b44
1408b854a: je     0x1408b9049
1408b8550: cmp    BYTE PTR [rip+0x1ad807e],0x0        # 0x1423905d5
1408b8557: je     0x1408b85ea
1408b855d: cmp    BYTE PTR [rip+0x1ad806a],0x0        # 0x1423905ce
1408b8564: je     0x1408b85ea
1408b856a: mov    esi,r11d
1408b856d: cmp    ebx,r14d
1408b8570: mov    eax,0xc
1408b8575: cmovle esi,eax
1408b8578: sub    edi,esi
1408b857a: dec    edi
1408b857c: mov    eax,0x55555556
1408b8581: imul   edi
1408b8583: mov    edi,edx
1408b8585: shr    edi,0x1f
1408b8588: add    edi,edx
1408b858a: lea    rcx,[rip+0xfee54f]        # 0x1418a6ae0
1408b8591: call   0x14006ee50
1408b8596: mov    rbx,rax
1408b8599: lea    rcx,[rbp-0x50]
1408b859d: call   0x1400bb360
1408b85a2: lea    edx,[rdi-0x1]
1408b85a5: lea    edx,[rsi+rdx*2]
1408b85a8: add    edx,edi
1408b85aa: lea    ecx,[rsi+0x1]
1408b85ad: lea    r9d,[rbx-0x1]
1408b85b1: mov    DWORD PTR [rsp+0x30],edx
1408b85b5: mov    DWORD PTR [rsp+0x28],ecx
1408b85b9: mov    DWORD PTR [rsp+0x20],edi
1408b85bd: xor    r8d,r8d
1408b85c0: mov    edx,DWORD PTR [rip+0xfee57a]        # 0x1418a6b40
1408b85c6: lea    rcx,[rbp-0x50]
1408b85ca: call   0x1400bb380
1408b85cf: mov    edx,DWORD PTR [rsp+0x40]
1408b85d3: lea    rcx,[rbp-0x50]
1408b85d7: call   0x14140f200
1408b85dc: mov    eax,DWORD PTR [rbp-0x50]
1408b85df: mov    DWORD PTR [rip+0xfee55b],eax        # 0x1418a6b40
1408b85e5: jmp    0x1408b9049
1408b85ea: mov    BYTE PTR [rip+0xfee553],0x0        # 0x1418a6b44
1408b85f1: jmp    0x1408b9049
1408b85f6: cmp    BYTE PTR [rip+0xfee4af],0x0        # 0x1418a6aac
1408b85fd: je     0x1408b86bb
1408b8603: cmp    BYTE PTR [rip+0xfee4ca],0x0        # 0x1418a6ad4
1408b860a: je     0x1408b9049
1408b8610: cmp    BYTE PTR [rip+0x1ad7fbe],0x0        # 0x1423905d5
1408b8617: je     0x1408b86af
1408b861d: cmp    BYTE PTR [rip+0x1ad7faa],0x0        # 0x1423905ce
1408b8624: je     0x1408b86af
1408b862a: mov    ecx,0x8
1408b862f: cmp    ebx,r14d
1408b8632: cmovle r12d,ecx
1408b8636: sub    edi,r12d
1408b8639: dec    edi
1408b863b: mov    eax,0x55555556
1408b8640: imul   edi
1408b8642: mov    edi,edx
1408b8644: shr    edi,0x1f
1408b8647: add    edi,edx
1408b8649: lea    rcx,[rip+0xfee468]        # 0x1418a6ab8
1408b8650: call   0x14006ee50
1408b8655: mov    rbx,rax
1408b8658: lea    rcx,[rbp-0x50]
1408b865c: call   0x1400bb360
1408b8661: lea    r8d,[rdi-0x1]
1408b8665: lea    r8d,[r12+r8*2]
1408b8669: add    r8d,edi
1408b866c: lea    ecx,[r12+0x1]
1408b8671: lea    r9d,[rbx-0x1]
1408b8675: mov    DWORD PTR [rsp+0x30],r8d
1408b867a: mov    DWORD PTR [rsp+0x28],ecx
1408b867e: mov    DWORD PTR [rsp+0x20],edi
1408b8682: xor    r8d,r8d
1408b8685: mov    edx,DWORD PTR [rip+0xfee445]        # 0x1418a6ad0
1408b868b: lea    rcx,[rbp-0x50]
1408b868f: call   0x1400bb380
1408b8694: mov    edx,DWORD PTR [rsp+0x40]
1408b8698: lea    rcx,[rbp-0x50]
1408b869c: call   0x14140f200
1408b86a1: mov    eax,DWORD PTR [rbp-0x50]
1408b86a4: mov    DWORD PTR [rip+0xfee426],eax        # 0x1418a6ad0
1408b86aa: jmp    0x1408b9049
1408b86af: mov    BYTE PTR [rip+0xfee41e],0x0        # 0x1418a6ad4
1408b86b6: jmp    0x1408b9049
1408b86bb: cmp    BYTE PTR [rip+0xfee3c2],0x0        # 0x1418a6a84
1408b86c2: je     0x1408b9049
1408b86c8: cmp    BYTE PTR [rip+0x1ad7f06],0x0        # 0x1423905d5
1408b86cf: je     0x1408b8766
1408b86d5: cmp    BYTE PTR [rip+0x1ad7ef2],0x0        # 0x1423905ce
1408b86dc: je     0x1408b8766
1408b86e2: cmp    ebx,r14d
1408b86e5: mov    esi,0xd
1408b86ea: mov    r14d,0xb
1408b86f0: cmovle esi,r14d
1408b86f4: sub    edi,esi
1408b86f6: dec    edi
1408b86f8: mov    eax,0x55555556
1408b86fd: imul   edi
1408b86ff: mov    edi,edx
1408b8701: shr    edi,0x1f
1408b8704: add    edi,edx
1408b8706: lea    rcx,[rip+0xfee313]        # 0x1418a6a20
1408b870d: call   0x14006ee50
1408b8712: mov    rbx,rax
1408b8715: lea    rcx,[rbp-0x50]
1408b8719: call   0x1400bb360
1408b871e: lea    edx,[rsi-0x2]
1408b8721: lea    edx,[rdx+rdi*2]
1408b8724: add    edx,edi
1408b8726: lea    ecx,[rsi+0x1]
1408b8729: lea    r9d,[rbx-0x1]
1408b872d: mov    DWORD PTR [rsp+0x30],edx
1408b8731: mov    DWORD PTR [rsp+0x28],ecx
1408b8735: mov    DWORD PTR [rsp+0x20],edi
1408b8739: xor    r8d,r8d
1408b873c: mov    edx,DWORD PTR [rip+0xfee33e]        # 0x1418a6a80
1408b8742: lea    rcx,[rbp-0x50]
1408b8746: call   0x1400bb380
1408b874b: mov    edx,DWORD PTR [rsp+0x40]
1408b874f: lea    rcx,[rbp-0x50]
1408b8753: call   0x14140f200
1408b8758: mov    eax,DWORD PTR [rbp-0x50]
1408b875b: mov    DWORD PTR [rip+0xfee31f],eax        # 0x1418a6a80
1408b8761: jmp    0x1408b9049
1408b8766: mov    BYTE PTR [rip+0xfee317],0x0        # 0x1418a6a84
1408b876d: jmp    0x1408b9049
1408b8772: cmp    ebx,r14d
1408b8775: mov    esi,0xc
1408b877a: cmovle esi,r12d
1408b877e: sub    edi,esi
1408b8780: dec    edi
1408b8782: mov    eax,0x55555556
1408b8787: imul   edi
1408b8789: mov    ebx,edx
1408b878b: shr    ebx,0x1f
1408b878e: add    ebx,edx
1408b8790: movsxd rax,DWORD PTR [rip+0xfee3b9]        # 0x1418a6b50
1408b8797: lea    rcx,[rax*2+0xab1]
1408b879f: lea    r14,[rip+0xfe8e2a]        # 0x1418a15d0
1408b87a6: add    rcx,rax
1408b87a9: lea    rcx,[r14+rcx*8]
1408b87ad: call   0x14006ee50
1408b87b2: mov    rdi,rax
1408b87b5: movsxd rdx,DWORD PTR [rip+0xfee394]        # 0x1418a6b50
1408b87bc: cmp    BYTE PTR [rdx+r14*1+0x55f8],0x0
1408b87c5: je     0x1408b9049
1408b87cb: cmp    BYTE PTR [rip+0x1ad7e03],0x0        # 0x1423905d5
1408b87d2: je     0x1408b8840
1408b87d4: cmp    BYTE PTR [rip+0x1ad7df3],0x0        # 0x1423905ce
1408b87db: je     0x1408b8840
1408b87dd: lea    rcx,[rbp-0x50]
1408b87e1: call   0x1400bb360
1408b87e6: lea    ecx,[rbx-0x1]
1408b87e9: lea    ecx,[rsi+rcx*2]
1408b87ec: add    ecx,ebx
1408b87ee: lea    eax,[rsi+0x1]
1408b87f1: lea    r9d,[rdi-0x1]
1408b87f5: movsxd rdx,DWORD PTR [rip+0xfee354]        # 0x1418a6b50
1408b87fc: mov    DWORD PTR [rsp+0x30],ecx
1408b8800: mov    DWORD PTR [rsp+0x28],eax
1408b8804: mov    DWORD PTR [rsp+0x20],ebx
1408b8808: xor    r8d,r8d
1408b880b: mov    edx,DWORD PTR [r14+rdx*4+0x55e8]
1408b8813: lea    rcx,[rbp-0x50]
1408b8817: call   0x1400bb380
1408b881c: mov    edx,DWORD PTR [rsp+0x40]
1408b8820: lea    rcx,[rbp-0x50]
1408b8824: call   0x14140f200
1408b8829: movsxd rcx,DWORD PTR [rip+0xfee320]        # 0x1418a6b50
1408b8830: mov    eax,DWORD PTR [rbp-0x50]
1408b8833: mov    DWORD PTR [r14+rcx*4+0x55e8],eax
1408b883b: jmp    0x1408b9049
1408b8840: mov    BYTE PTR [rdx+r14*1+0x55f8],0x0
1408b8849: jmp    0x1408b9049
1408b884e: mov    ecx,0x8
1408b8853: cmp    ebx,r14d
1408b8856: cmovle r12d,ecx
1408b885a: lea    r15d,[r12+0x2]
1408b885f: cmovle r15d,r12d
1408b8863: lea    rdx,[rip+0xd3e8d6]        # 0x1415f7140
1408b886a: lea    rcx,[rbp-0x50]
1408b886e: call   0x140068150
1408b8873: nop
1408b8874: lea    r8,[rbp-0x50]
1408b8878: lea    rdx,[rbp+0x20]
1408b887c: lea    rcx,[rip+0xfee34d]        # 0x1418a6bd0
1408b8883: call   0x1400f0000
1408b8888: nop
1408b8889: mov    rcx,rax
1408b888c: call   0x14006ee10
1408b8891: lea    rdx,[rbp-0x20]
1408b8895: mov    rcx,rax
1408b8898: call   0x1401bb1b0
1408b889d: lea    rdx,[rip+0xd868e4]        # 0x14163f188
1408b88a4: mov    rcx,rax
1408b88a7: call   0x14006fe80
1408b88ac: movzx  ebx,al
1408b88af: lea    rcx,[rbp-0x20]
1408b88b3: call   0x140067e30
1408b88b8: nop
1408b88b9: lea    rcx,[rbp+0x20]
1408b88bd: call   0x1400e10e0
1408b88c2: nop
1408b88c3: lea    rcx,[rbp-0x50]
1408b88c7: call   0x140067e30
1408b88cc: test   bl,bl
1408b88ce: je     0x1408b9049
1408b88d4: lea    rcx,[rip+0xfee53d]        # 0x1418a6e18
1408b88db: call   0x14006ee50
1408b88e0: test   rax,rax
1408b88e3: jne    0x1408b890b
1408b88e5: lea    rcx,[rip+0xfee544]        # 0x1418a6e30
1408b88ec: call   0x14006ee50
1408b88f1: test   rax,rax
1408b88f4: jne    0x1408b890b
1408b88f6: lea    rcx,[rip+0xfee54b]        # 0x1418a6e48
1408b88fd: call   0x14006ee50
1408b8902: test   rax,rax
1408b8905: je     0x1408b9049
1408b890b: mov    ecx,DWORD PTR [rip+0xfee54f]        # 0x1418a6e60
1408b8911: test   ecx,ecx
1408b8913: je     0x1408b8ad4
1408b8919: sub    ecx,0x1
1408b891c: je     0x1408b89ed
1408b8922: sub    ecx,0x1
1408b8925: je     0x1408b8981
1408b8927: cmp    ecx,0x1
1408b892a: jne    0x1408b9049
1408b8930: add    r15d,0x4
1408b8934: sub    edi,r15d
1408b8937: dec    edi
1408b8939: lea    rcx,[rip+0xfee5d8]        # 0x1418a6f18
1408b8940: call   0x14006ee50
1408b8945: lea    ebx,[rax+rax*4]
1408b8948: cmp    BYTE PTR [rip+0xfee54d],0x0        # 0x1418a6e9c
1408b894f: je     0x1408b9049
1408b8955: cmp    BYTE PTR [rip+0x1ad7c79],0x0        # 0x1423905d5
1408b895c: je     0x1408b8ac8
1408b8962: cmp    BYTE PTR [rip+0x1ad7c65],0x0        # 0x1423905ce
1408b8969: je     0x1408b8ac8
1408b896f: lea    rcx,[rbp-0x50]
1408b8973: call   0x1400bb360
1408b8978: lea    r9d,[rbx-0x1]
1408b897c: jmp    0x1408b8a85
1408b8981: add    r15d,0x4
1408b8985: add    edi,0xfffffffe
1408b8988: lea    rcx,[rip+0xfee571]        # 0x1418a6f00
1408b898f: call   0x14006ee50
1408b8994: lea    esi,[rax+rax*4]
1408b8997: cmp    DWORD PTR [rip+0xfee4c6],0x0        # 0x1418a6e64
1408b899e: jl     0x1408b89e6
1408b89a0: lea    rcx,[rip+0xfee541]        # 0x1418a6ee8
1408b89a7: call   0x14006ee50
1408b89ac: movsxd rdx,DWORD PTR [rip+0xfee4b1]        # 0x1418a6e64
1408b89b3: cmp    edx,eax
1408b89b5: jge    0x1408b89e6
1408b89b7: lea    rcx,[rip+0xfee542]        # 0x1418a6f00
1408b89be: call   0x14006f220
1408b89c3: mov    rbx,QWORD PTR [rax]
1408b89c6: mov    rcx,rbx
1408b89c9: call   0x1400d1650
1408b89ce: mov    rcx,rbx
1408b89d1: call   0x14006ee50
1408b89d6: cmp    rax,0x1
1408b89da: jb     0x1408b89e6
1408b89dc: mov    eax,edi
1408b89de: sub    eax,r15d
1408b89e1: add    esi,0xfffffff5
1408b89e4: add    esi,eax
1408b89e6: sub    edi,r15d
1408b89e9: inc    edi
1408b89eb: jmp    0x1408b8a59
1408b89ed: lea    rcx,[rip+0xfee4f4]        # 0x1418a6ee8
1408b89f4: call   0x14006ee50
1408b89f9: lea    esi,[rax+rax*4]
1408b89fc: cmp    DWORD PTR [rip+0xfee461],0x0        # 0x1418a6e64
1408b8a03: jl     0x1408b8a50
1408b8a05: lea    rcx,[rip+0xfee4dc]        # 0x1418a6ee8
1408b8a0c: call   0x14006ee50
1408b8a11: movsxd rcx,DWORD PTR [rip+0xfee44c]        # 0x1418a6e64
1408b8a18: cmp    ecx,eax
1408b8a1a: jge    0x1408b8a50
1408b8a1c: mov    rdx,rcx
1408b8a1f: lea    rcx,[rip+0xfee4c2]        # 0x1418a6ee8
1408b8a26: call   0x14006f220
1408b8a2b: mov    rbx,QWORD PTR [rax]
1408b8a2e: mov    rcx,rbx
1408b8a31: call   0x1400d1840
1408b8a36: lea    rcx,[rbx+0x78]
1408b8a3a: call   0x14006ee50
1408b8a3f: mov    r14d,0x3
1408b8a45: cmp    eax,r14d
1408b8a48: cmovl  eax,r14d
1408b8a4c: dec    esi
1408b8a4e: add    esi,eax
1408b8a50: add    r15d,0x4
1408b8a54: sub    edi,r15d
1408b8a57: dec    edi
1408b8a59: cmp    BYTE PTR [rip+0xfee43c],0x0        # 0x1418a6e9c
1408b8a60: je     0x1408b9049
1408b8a66: cmp    BYTE PTR [rip+0x1ad7b68],0x0        # 0x1423905d5
1408b8a6d: je     0x1408b8ac8
1408b8a6f: cmp    BYTE PTR [rip+0x1ad7b58],0x0        # 0x1423905ce
1408b8a76: je     0x1408b8ac8
1408b8a78: lea    rcx,[rbp-0x50]
1408b8a7c: call   0x1400bb360
1408b8a81: lea    r9d,[rsi-0x1]
1408b8a85: lea    eax,[rdi-0x2]
1408b8a88: add    eax,r15d
1408b8a8b: lea    ecx,[r15+0x1]
1408b8a8f: mov    DWORD PTR [rsp+0x30],eax
1408b8a93: mov    DWORD PTR [rsp+0x28],ecx
1408b8a97: mov    DWORD PTR [rsp+0x20],edi
1408b8a9b: xor    r8d,r8d
1408b8a9e: mov    edx,DWORD PTR [rip+0xfee3f4]        # 0x1418a6e98
1408b8aa4: lea    rcx,[rbp-0x50]
1408b8aa8: call   0x1400bb380
1408b8aad: mov    edx,DWORD PTR [rsp+0x40]
1408b8ab1: lea    rcx,[rbp-0x50]
1408b8ab5: call   0x14140f200
1408b8aba: mov    eax,DWORD PTR [rbp-0x50]
1408b8abd: mov    DWORD PTR [rip+0xfee3d5],eax        # 0x1418a6e98
1408b8ac3: jmp    0x1408b9049
1408b8ac8: mov    BYTE PTR [rip+0xfee3cd],0x0        # 0x1418a6e9c
1408b8acf: jmp    0x1408b9049
1408b8ad4: cmp    QWORD PTR [rip+0xfee324],0x0        # 0x1418a6e00
1408b8adc: je     0x1408b8c8e
1408b8ae2: sub    esi,r13d
1408b8ae5: sub    esi,0x5
1408b8ae8: cmp    DWORD PTR [rip+0xfee2f2],esi        # 0x1418a6de0
1408b8aee: je     0x1408b8bfb
1408b8af4: lea    rcx,[rip+0xfee2cd]        # 0x1418a6dc8
1408b8afb: call   0x14014d6e0
1408b8b00: mov    DWORD PTR [rip+0xfee2da],esi        # 0x1418a6de0
1408b8b06: mov    r8d,esi
1408b8b09: mov    rdx,QWORD PTR [rip+0xfee2f0]        # 0x1418a6e00
1408b8b10: lea    rcx,[rip+0xfee2b1]        # 0x1418a6dc8
1408b8b17: call   0x1408e7310
1408b8b1c: mov    rdx,QWORD PTR [rip+0xfee2dd]        # 0x1418a6e00
1408b8b23: add    rdx,0x28
1408b8b27: mov    r8d,esi
1408b8b2a: lea    rcx,[rip+0xfee297]        # 0x1418a6dc8
1408b8b31: call   0x1408e7310
1408b8b36: lea    rdx,[rip+0xd329bb]        # 0x1415eb4f8
1408b8b3d: lea    rcx,[rip+0xfee284]        # 0x1418a6dc8
1408b8b44: call   0x1400bb8e0
1408b8b49: mov    rcx,QWORD PTR [rip+0xfee2b0]        # 0x1418a6e00
1408b8b50: add    rcx,0x110
1408b8b57: lea    rdx,[rsp+0x48]
1408b8b5c: call   0x14006f240
1408b8b61: mov    rcx,QWORD PTR [rip+0xfee298]        # 0x1418a6e00
1408b8b68: add    rcx,0x110
1408b8b6f: lea    rdx,[rsp+0x60]
1408b8b74: call   0x14006f230
1408b8b79: lea    r8,[rsp+0x60]
1408b8b7e: lea    rdx,[rsp+0x58]
1408b8b83: lea    rcx,[rsp+0x48]
1408b8b88: call   0x14006ee20
1408b8b8d: xor    edx,edx
1408b8b8f: movzx  ecx,BYTE PTR [rax]
1408b8b92: call   0x1400657b0
1408b8b97: test   al,al
1408b8b99: je     0x1408b8bfb
1408b8b9b: nop    DWORD PTR [rax+rax*1+0x0]
1408b8ba0: lea    rdx,[rip+0xd32951]        # 0x1415eb4f8
1408b8ba7: lea    rcx,[rip+0xfee21a]        # 0x1418a6dc8
1408b8bae: call   0x1400bb8e0
1408b8bb3: lea    rcx,[rsp+0x48]
1408b8bb8: call   0x14006ee10
1408b8bbd: mov    r8d,esi
1408b8bc0: mov    rdx,QWORD PTR [rax]
1408b8bc3: lea    rcx,[rip+0xfee1fe]        # 0x1418a6dc8
1408b8bca: call   0x1408e7310
1408b8bcf: lea    rcx,[rsp+0x48]
1408b8bd4: call   0x14006ee00
1408b8bd9: lea    r8,[rsp+0x60]
1408b8bde: lea    rdx,[rsp+0x58]
1408b8be3: lea    rcx,[rsp+0x48]
1408b8be8: call   0x14006ee20
1408b8bed: xor    edx,edx
1408b8bef: movzx  ecx,BYTE PTR [rax]
1408b8bf2: call   0x1400657b0
1408b8bf7: test   al,al
1408b8bf9: jne    0x1408b8ba0
1408b8bfb: add    r15d,0x4
1408b8bff: sub    edi,r15d
1408b8c02: dec    edi
1408b8c04: lea    rcx,[rip+0xfee1bd]        # 0x1418a6dc8
1408b8c0b: call   0x14006ee50
1408b8c10: mov    rbx,rax
1408b8c13: cmp    BYTE PTR [rip+0xfee1fa],0x0        # 0x1418a6e14
1408b8c1a: je     0x1408b9049
1408b8c20: cmp    BYTE PTR [rip+0x1ad79ae],0x0        # 0x1423905d5
1408b8c27: je     0x1408b8c82
1408b8c29: cmp    BYTE PTR [rip+0x1ad799e],0x0        # 0x1423905ce
1408b8c30: je     0x1408b8c82
1408b8c32: lea    rcx,[rbp-0x50]
1408b8c36: call   0x1400bb360
1408b8c3b: lea    ecx,[rdi-0x2]
1408b8c3e: add    ecx,r15d
1408b8c41: lea    eax,[r15+0x1]
1408b8c45: lea    r9d,[rbx-0x1]
1408b8c49: mov    DWORD PTR [rsp+0x30],ecx
1408b8c4d: mov    DWORD PTR [rsp+0x28],eax
1408b8c51: mov    DWORD PTR [rsp+0x20],edi
1408b8c55: xor    r8d,r8d
1408b8c58: mov    edx,DWORD PTR [rip+0xfee1b2]        # 0x1418a6e10
1408b8c5e: lea    rcx,[rbp-0x50]
1408b8c62: call   0x1400bb380
1408b8c67: mov    edx,DWORD PTR [rsp+0x40]
1408b8c6b: lea    rcx,[rbp-0x50]
1408b8c6f: call   0x14140f200
1408b8c74: mov    eax,DWORD PTR [rbp-0x50]
1408b8c77: mov    DWORD PTR [rip+0xfee193],eax        # 0x1418a6e10
1408b8c7d: jmp    0x1408b9049
1408b8c82: mov    BYTE PTR [rip+0xfee18b],0x0        # 0x1418a6e14
1408b8c89: jmp    0x1408b9049
1408b8c8e: add    r15d,0x4
1408b8c92: sub    edi,r15d
1408b8c95: dec    edi
1408b8c97: mov    eax,0x55555556
1408b8c9c: imul   edi
1408b8c9e: mov    ebx,edx
1408b8ca0: shr    ebx,0x1f
1408b8ca3: add    ebx,edx
1408b8ca5: lea    rcx,[rip+0xfee13c]        # 0x1418a6de8
1408b8cac: call   0x14006ee50
1408b8cb1: mov    rdi,rax
1408b8cb4: cmp    BYTE PTR [rip+0xfee151],0x0        # 0x1418a6e0c
1408b8cbb: je     0x1408b9049
1408b8cc1: cmp    BYTE PTR [rip+0x1ad790d],0x0        # 0x1423905d5
1408b8cc8: je     0x1408b8d26
1408b8cca: cmp    BYTE PTR [rip+0x1ad78fd],0x0        # 0x1423905ce
1408b8cd1: je     0x1408b8d26
1408b8cd3: lea    rcx,[rbp-0x50]
1408b8cd7: call   0x1400bb360
1408b8cdc: lea    ecx,[rbx-0x1]
1408b8cdf: lea    ecx,[r15+rcx*2]
1408b8ce3: add    ecx,ebx
1408b8ce5: lea    eax,[r15+0x1]
1408b8ce9: lea    r9d,[rdi-0x1]
1408b8ced: mov    DWORD PTR [rsp+0x30],ecx
1408b8cf1: mov    DWORD PTR [rsp+0x28],eax
1408b8cf5: mov    DWORD PTR [rsp+0x20],ebx
1408b8cf9: xor    r8d,r8d
1408b8cfc: mov    edx,DWORD PTR [rip+0xfee106]        # 0x1418a6e08
1408b8d02: lea    rcx,[rbp-0x50]
1408b8d06: call   0x1400bb380
1408b8d0b: mov    edx,DWORD PTR [rsp+0x40]
1408b8d0f: lea    rcx,[rbp-0x50]
1408b8d13: call   0x14140f200
1408b8d18: mov    eax,DWORD PTR [rbp-0x50]
1408b8d1b: mov    DWORD PTR [rip+0xfee0e7],eax        # 0x1418a6e08
1408b8d21: jmp    0x1408b9049
1408b8d26: mov    BYTE PTR [rip+0xfee0df],0x0        # 0x1418a6e0c
1408b8d2d: jmp    0x1408b9049
1408b8d32: cmp    BYTE PTR [rip+0xfe99d7],0x0        # 0x1418a2710
1408b8d39: je     0x1408b8e84
1408b8d3f: mov    DWORD PTR [rsp+0x68],0xffffffff
1408b8d47: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b8d4f: cmp    BYTE PTR [rip+0x1ad787f],0x0        # 0x1423905d5
1408b8d56: je     0x1408b8d6e
1408b8d58: lea    r8,[rsp+0x40]
1408b8d5d: lea    rdx,[rsp+0x68]
1408b8d62: lea    rcx,[rip+0x1d91687]        # 0x14264a3f0
1408b8d69: call   0x1400bb340
1408b8d6e: lea    rcx,[rip+0xfe99bb]        # 0x1418a2730
1408b8d75: call   0x14006f450
1408b8d7a: mov    rdi,rax
1408b8d7d: mov    ecx,DWORD PTR [rip+0x1b14a05]        # 0x1423cd788
1408b8d83: add    ecx,0xfffffff5
1408b8d86: mov    eax,0x55555556
1408b8d8b: imul   ecx
1408b8d8d: mov    ebx,edx
1408b8d8f: shr    ebx,0x1f
1408b8d92: add    ebx,edx
1408b8d94: cmp    BYTE PTR [rip+0xfe99b9],0x0        # 0x1418a2754
1408b8d9b: je     0x1408b8e03
1408b8d9d: cmp    BYTE PTR [rip+0x1ad7831],0x0        # 0x1423905d5
1408b8da4: je     0x1408b8dfc
1408b8da6: cmp    BYTE PTR [rip+0x1ad7821],0x0        # 0x1423905ce
1408b8dad: je     0x1408b8dfc
1408b8daf: lea    rcx,[rbp-0x50]
1408b8db3: call   0x1400bb360
1408b8db8: lea    eax,[rbx+0x2]
1408b8dbb: lea    eax,[rbx+rax*2]
1408b8dbe: lea    r9d,[rdi-0x1]
1408b8dc2: mov    DWORD PTR [rsp+0x30],eax
1408b8dc6: mov    DWORD PTR [rsp+0x28],0x7
1408b8dce: mov    DWORD PTR [rsp+0x20],ebx
1408b8dd2: xor    r8d,r8d
1408b8dd5: mov    edx,DWORD PTR [rip+0xfe9971]        # 0x1418a274c
1408b8ddb: lea    rcx,[rbp-0x50]
1408b8ddf: call   0x1400bb380
1408b8de4: mov    edx,DWORD PTR [rsp+0x40]
1408b8de8: lea    rcx,[rbp-0x50]
1408b8dec: call   0x14140f200
1408b8df1: mov    eax,DWORD PTR [rbp-0x50]
1408b8df4: mov    DWORD PTR [rip+0xfe9952],eax        # 0x1418a274c
1408b8dfa: jmp    0x1408b8e03
1408b8dfc: mov    BYTE PTR [rip+0xfe9951],0x0        # 0x1418a2754
1408b8e03: cmp    BYTE PTR [rip+0xfe994b],0x0        # 0x1418a2755
1408b8e0a: je     0x1408b9049
1408b8e10: cmp    BYTE PTR [rip+0x1ad77be],0x0        # 0x1423905d5
1408b8e17: je     0x1408b8e78
1408b8e19: cmp    BYTE PTR [rip+0x1ad77ae],0x0        # 0x1423905ce
1408b8e20: je     0x1408b8e78
1408b8e22: lea    rcx,[rbp-0x50]
1408b8e26: call   0x1400bb360
1408b8e2b: lea    ecx,[rbx-0x1]
1408b8e2e: lea    ecx,[rcx+rcx*2]
1408b8e31: lea    eax,[rcx+0x7]
1408b8e34: mov    r9d,DWORD PTR [rip+0xfe9a25]        # 0x1418a2860
1408b8e3b: dec    r9d
1408b8e3e: mov    DWORD PTR [rsp+0x30],eax
1408b8e42: mov    DWORD PTR [rsp+0x28],r12d
1408b8e47: mov    DWORD PTR [rsp+0x20],ecx
1408b8e4b: xor    r8d,r8d
1408b8e4e: mov    edx,DWORD PTR [rip+0xfe98fc]        # 0x1418a2750
1408b8e54: lea    rcx,[rbp-0x50]
1408b8e58: call   0x1400bb380
1408b8e5d: mov    edx,DWORD PTR [rsp+0x40]
1408b8e61: lea    rcx,[rbp-0x50]
1408b8e65: call   0x14140f200
1408b8e6a: mov    eax,DWORD PTR [rbp-0x50]
1408b8e6d: mov    DWORD PTR [rip+0xfe98dd],eax        # 0x1418a2750
1408b8e73: jmp    0x1408b9049
1408b8e78: mov    BYTE PTR [rip+0xfe98d6],0x0        # 0x1418a2755
1408b8e7f: jmp    0x1408b9049
1408b8e84: cmp    BYTE PTR [rip+0xfeb3ad],0x0        # 0x1418a4238
1408b8e8b: je     0x1408b9049
1408b8e91: mov    DWORD PTR [rsp+0x68],0xffffffff
1408b8e99: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b8ea1: cmp    BYTE PTR [rip+0x1ad772d],0x0        # 0x1423905d5
1408b8ea8: je     0x1408b8ec0
1408b8eaa: lea    r8,[rsp+0x40]
1408b8eaf: lea    rdx,[rsp+0x68]
1408b8eb4: lea    rcx,[rip+0x1d91535]        # 0x14264a3f0
1408b8ebb: call   0x1400bb340
1408b8ec0: lea    rcx,[rip+0xfeb3d1]        # 0x1418a4298
1408b8ec7: call   0x14006f370
1408b8ecc: mov    rdi,rax
1408b8ecf: lea    rcx,[rip+0xfeb3f2]        # 0x1418a42c8
1408b8ed6: call   0x14006f370
1408b8edb: mov    rsi,rax
1408b8ede: mov    r14d,DWORD PTR [rip+0xfeb447]        # 0x1418a432c
1408b8ee5: mov    ecx,DWORD PTR [rip+0x1b1489d]        # 0x1423cd788
1408b8eeb: add    ecx,0xfffffff0
1408b8eee: mov    eax,0x55555556
1408b8ef3: imul   ecx
1408b8ef5: mov    ebx,edx
1408b8ef7: shr    ebx,0x1f
1408b8efa: add    ebx,edx
1408b8efc: cmp    BYTE PTR [rip+0xfeb345],0x0        # 0x1418a4248
1408b8f03: je     0x1408b8f6b
1408b8f05: cmp    BYTE PTR [rip+0x1ad76c9],0x0        # 0x1423905d5
1408b8f0c: je     0x1408b8f64
1408b8f0e: cmp    BYTE PTR [rip+0x1ad76b9],0x0        # 0x1423905ce
1408b8f15: je     0x1408b8f64
1408b8f17: lea    rcx,[rbp-0x50]
1408b8f1b: call   0x1400bb360
1408b8f20: lea    eax,[rbx*2+0x7]
1408b8f27: add    eax,ebx
1408b8f29: lea    r9d,[rdi-0x1]
1408b8f2d: mov    DWORD PTR [rsp+0x30],eax
1408b8f31: mov    DWORD PTR [rsp+0x28],r12d
1408b8f36: mov    DWORD PTR [rsp+0x20],ebx
1408b8f3a: xor    r8d,r8d
1408b8f3d: mov    edx,DWORD PTR [rip+0xfeb2f9]        # 0x1418a423c
1408b8f43: lea    rcx,[rbp-0x50]
1408b8f47: call   0x1400bb380
1408b8f4c: mov    edx,DWORD PTR [rsp+0x40]
1408b8f50: lea    rcx,[rbp-0x50]
1408b8f54: call   0x14140f200
1408b8f59: mov    eax,DWORD PTR [rbp-0x50]
1408b8f5c: mov    DWORD PTR [rip+0xfeb2da],eax        # 0x1418a423c
1408b8f62: jmp    0x1408b8f6b
1408b8f64: mov    BYTE PTR [rip+0xfeb2dd],0x0        # 0x1418a4248
1408b8f6b: cmp    BYTE PTR [rip+0xfeb2d7],0x0        # 0x1418a4249
1408b8f72: je     0x1408b8fda
1408b8f74: cmp    BYTE PTR [rip+0x1ad765a],0x0        # 0x1423905d5
1408b8f7b: je     0x1408b8fd3
1408b8f7d: cmp    BYTE PTR [rip+0x1ad764a],0x0        # 0x1423905ce
1408b8f84: je     0x1408b8fd3
1408b8f86: lea    rcx,[rbp-0x50]
1408b8f8a: call   0x1400bb360
1408b8f8f: lea    eax,[rbx*2+0x7]
1408b8f96: add    eax,ebx
1408b8f98: lea    r9d,[rsi-0x1]
1408b8f9c: mov    DWORD PTR [rsp+0x30],eax
1408b8fa0: mov    DWORD PTR [rsp+0x28],r12d
1408b8fa5: mov    DWORD PTR [rsp+0x20],ebx
1408b8fa9: xor    r8d,r8d
1408b8fac: mov    edx,DWORD PTR [rip+0xfeb28e]        # 0x1418a4240
1408b8fb2: lea    rcx,[rbp-0x50]
1408b8fb6: call   0x1400bb380
1408b8fbb: mov    edx,DWORD PTR [rsp+0x40]
1408b8fbf: lea    rcx,[rbp-0x50]
1408b8fc3: call   0x14140f200
1408b8fc8: mov    eax,DWORD PTR [rbp-0x50]
1408b8fcb: mov    DWORD PTR [rip+0xfeb26f],eax        # 0x1418a4240
1408b8fd1: jmp    0x1408b8fda
1408b8fd3: mov    BYTE PTR [rip+0xfeb26f],0x0        # 0x1418a4249
1408b8fda: cmp    BYTE PTR [rip+0xfeb269],0x0        # 0x1418a424a
1408b8fe1: je     0x1408b9049
1408b8fe3: cmp    BYTE PTR [rip+0x1ad75eb],0x0        # 0x1423905d5
1408b8fea: je     0x1408b9042
1408b8fec: cmp    BYTE PTR [rip+0x1ad75db],0x0        # 0x1423905ce
1408b8ff3: je     0x1408b9042
1408b8ff5: lea    rcx,[rbp-0x50]
1408b8ff9: call   0x1400bb360
1408b8ffe: lea    eax,[rbx*2+0x7]
1408b9005: add    eax,ebx
1408b9007: lea    r9d,[r14-0x1]
1408b900b: mov    DWORD PTR [rsp+0x30],eax
1408b900f: mov    DWORD PTR [rsp+0x28],r12d
1408b9014: mov    DWORD PTR [rsp+0x20],ebx
1408b9018: xor    r8d,r8d
1408b901b: mov    edx,DWORD PTR [rip+0xfeb223]        # 0x1418a4244
1408b9021: lea    rcx,[rbp-0x50]
1408b9025: call   0x1400bb380
1408b902a: mov    edx,DWORD PTR [rsp+0x40]
1408b902e: lea    rcx,[rbp-0x50]
1408b9032: call   0x14140f200
1408b9037: mov    eax,DWORD PTR [rbp-0x50]
1408b903a: mov    DWORD PTR [rip+0xfeb204],eax        # 0x1418a4244
1408b9040: jmp    0x1408b9049
1408b9042: mov    BYTE PTR [rip+0xfeb201],0x0        # 0x1418a424a
1408b9049: cmp    DWORD PTR [rip+0xff033c],0x2        # 0x1418a938c
1408b9050: jne    0x1408b9175
1408b9056: cmp    BYTE PTR [rip+0xfe87b4],0x0        # 0x1418a1811
1408b905d: je     0x1408b9175
1408b9063: cmp    BYTE PTR [rip+0x1ad756b],0x0        # 0x1423905d5
1408b906a: je     0x1408b916e
1408b9070: cmp    BYTE PTR [rip+0x1ad7557],0x0        # 0x1423905ce
1408b9077: je     0x1408b916e
1408b907d: mov    DWORD PTR [rsp+0x68],0xffffffff
1408b9085: mov    DWORD PTR [rsp+0x40],0xffffffff
1408b908d: lea    r8,[rsp+0x40]
1408b9092: lea    rdx,[rsp+0x68]
1408b9097: lea    rcx,[rip+0x1d91352]        # 0x14264a3f0
1408b909e: call   0x1400bb340
1408b90a3: xor    ebx,ebx
1408b90a5: lea    rdx,[rsp+0x48]
1408b90aa: lea    rcx,[rip+0xfe739f]        # 0x1418a0450
1408b90b1: call   0x14006f240
1408b90b6: lea    rdx,[rbp-0x78]
1408b90ba: lea    rcx,[rip+0xfe738f]        # 0x1418a0450
1408b90c1: call   0x14006f230
1408b90c6: mov    rcx,QWORD PTR [rbp-0x78]
1408b90ca: mov    rax,QWORD PTR [rsp+0x48]
1408b90cf: mov    r8d,0xff
1408b90d5: cmp    rax,rcx
1408b90d8: je     0x1408b90fd
1408b90da: mov    edx,0x1
1408b90df: cmovb  edx,r8d
1408b90e3: test   dl,dl
1408b90e5: jns    0x1408b90fd
1408b90e7: mov    rdx,QWORD PTR [rax]
1408b90ea: cmp    BYTE PTR [rdx+0xc],0x0
1408b90ee: je     0x1408b90f2
1408b90f0: inc    ebx
1408b90f2: add    rax,0x8
1408b90f6: mov    QWORD PTR [rsp+0x48],rax
1408b90fb: jmp    0x1408b90d5
1408b90fd: mov    QWORD PTR [rbp-0x8],0x0
1408b9105: mov    ecx,DWORD PTR [rip+0xfe8709]        # 0x1418a1814
1408b910b: mov    DWORD PTR [rbp-0x20],ecx
1408b910e: mov    DWORD PTR [rbp-0x1c],0x0
1408b9115: lea    ecx,[rbx*2-0x1]
1408b911c: add    ecx,ebx
1408b911e: mov    DWORD PTR [rbp-0x18],ecx
1408b9121: mov    DWORD PTR [rbp-0x10],0xe
1408b9128: mov    ecx,DWORD PTR [rip+0x1b1465a]        # 0x1423cd788
1408b912e: add    ecx,0xfffffff1
1408b9131: mov    eax,0x55555556
1408b9136: imul   ecx
1408b9138: mov    eax,edx
1408b913a: shr    eax,0x1f
1408b913d: dec    edx
1408b913f: add    edx,eax
1408b9141: lea    ecx,[rdx+rdx*2]
1408b9144: lea    eax,[rcx+0xb]
1408b9147: mov    DWORD PTR [rbp-0xc],eax
1408b914a: mov    DWORD PTR [rbp-0x14],ecx
1408b914d: lea    rcx,[rbp-0x20]
1408b9151: call   0x1400bb3b0
1408b9156: mov    edx,DWORD PTR [rsp+0x40]
1408b915a: lea    rcx,[rbp-0x20]
1408b915e: call   0x14140f200
1408b9163: mov    eax,DWORD PTR [rbp-0x20]
1408b9166: mov    DWORD PTR [rip+0xfe86a8],eax        # 0x1418a1814
1408b916c: jmp    0x1408b9175
1408b916e: mov    BYTE PTR [rip+0xfe869c],0x0        # 0x1418a1811
1408b9175: mov    rcx,QWORD PTR [rbp+0x40]
1408b9179: xor    rcx,rsp
1408b917c: call   0x141539660
1408b9181: lea    r11,[rsp+0x150]
1408b9189: mov    rbx,QWORD PTR [r11+0x38]
1408b918d: mov    rsi,QWORD PTR [r11+0x40]
1408b9191: mov    rdi,QWORD PTR [r11+0x48]
1408b9195: mov    rsp,r11
1408b9198: pop    r15
1408b919a: pop    r14
1408b919c: pop    r13
1408b919e: pop    r12
1408b91a0: pop    rbp
1408b91a1: ret
1408b91a2: xchg   ax,ax
1408b91a4: xchg   edx,eax
1408b91a5: jl     0x1408b9132
1408b91a7: add    BYTE PTR [rdi],bh
1408b91a9: jge    0x1408b9136
1408b91ab: add    BYTE PTR [rcx],bh
1408b91ad: jle    0x1408b913a
1408b91af: add    ah,ah
1408b91b1: jle    0x1408b913e
1408b91b3: add    BYTE PTR [rsp+rax*4],ch
1408b91b6: mov    eax,DWORD PTR [rax]
1408b91b8: jb     0x1408b9141
1408b91ba: mov    eax,DWORD PTR [rax]
1408b91bc: rex.WRX
1408b91bd: .byte 0x88
1408b91be: mov    eax,DWORD PTR [rax]