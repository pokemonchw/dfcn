; classic; PE:6a70b91c:0270a000; terrain; RVA 0xe782a0..0xe7e46d
0x00e782a0: rex push rbp
0x00e782a2: push   rbx
0x00e782a3: push   rsi
0x00e782a4: push   rdi
0x00e782a5: push   r12
0x00e782a7: push   r13
0x00e782a9: push   r14
0x00e782ab: push   r15
0x00e782ad: lea    rbp,[rsp-0x58]
0x00e782b2: sub    rsp,0x158
0x00e782b9: mov    rax,QWORD PTR [rip+0xa1dd80]        # 0x141896040
0x00e782c0: xor    rax,rsp
0x00e782c3: mov    QWORD PTR [rbp+0x40],rax
0x00e782c7: movsx  r14,r9w
0x00e782cb: movsx  rsi,r8w
0x00e782cf: mov    rbx,rdx
0x00e782d2: mov    rdi,rcx
0x00e782d5: movsx  r15,WORD PTR [rbp+0xc0]
0x00e782dd: movzx  edx,BYTE PTR [rsp+0x54]
0x00e782e2: lea    rcx,[rbp+0x0]
0x00e782e6: call   0x140068120
0x00e782eb: lea    rcx,[rbp+0x0]
0x00e782ef: call   0x14006fb10
0x00e782f4: nop
0x00e782f5: xor    edx,edx
0x00e782f7: mov    rcx,rbx
0x00e782fa: call   0x14006f840
0x00e782ff: mov    BYTE PTR [rsp+0x58],0x0
0x00e78304: xor    r12d,r12d
0x00e78307: mov    WORD PTR [rsp+0x54],r12w
0x00e7830d: mov    rax,QWORD PTR [rdi+0x78]
0x00e78311: mov    rcx,QWORD PTR [rdi+0x80]
0x00e78318: sub    rcx,rax
0x00e7831b: sar    rcx,0x3
0x00e7831f: sub    ecx,0x1
0x00e78322: js     0x140e7836e
0x00e78324: movsxd rdx,ecx
0x00e78327: lea    r8,[rax+rdx*8]
0x00e7832b: nop    DWORD PTR [rax+rax*1+0x0]
0x00e78330: mov    rax,QWORD PTR [r8]
0x00e78333: cmp    WORD PTR [rax+0xc],si
0x00e78337: jne    0x140e78347
0x00e78339: cmp    WORD PTR [rax+0xe],r14w
0x00e7833e: jne    0x140e78347
0x00e78340: cmp    WORD PTR [rax+0x10],r15w
0x00e78345: je     0x140e78355
0x00e78347: dec    ecx
0x00e78349: sub    r8,0x8
0x00e7834d: sub    rdx,0x1
0x00e78351: jns    0x140e78330
0x00e78353: jmp    0x140e7836e
0x00e78355: mov    BYTE PTR [rsp+0x58],0x1
0x00e7835a: movsxd rcx,ecx
0x00e7835d: mov    rax,QWORD PTR [rdi+0x78]
0x00e78361: mov    rcx,QWORD PTR [rax+rcx*8]
0x00e78365: movzx  eax,WORD PTR [rcx+0x22]
0x00e78369: mov    WORD PTR [rsp+0x54],ax
0x00e7836e: movzx  r9d,r15w
0x00e78372: movzx  r8d,r14w
0x00e78376: movzx  edx,si
0x00e78379: mov    rcx,rdi
0x00e7837c: call   0x140067f10
0x00e78381: movzx  r13d,ax
0x00e78385: mov    edx,r13d
0x00e78388: mov    DWORD PTR [rsp+0x78],edx
0x00e7838c: mov    eax,r13d
0x00e7838f: lea    r8,[rip+0xffffffffff187c6a]        # 0x140000000
0x00e78396: mov    r9d,0x1eb
0x00e7839c: sub    eax,0xd7
0x00e783a1: je     0x140e7dd63
0x00e783a7: sub    eax,0x70
0x00e783aa: je     0x140e7dd63
0x00e783b0: sub    eax,0x4
0x00e783b3: je     0x140e7dd63
0x00e783b9: sub    eax,0x1d
0x00e783bc: je     0x140e7dd63
0x00e783c2: cmp    eax,0x4c
0x00e783c5: je     0x140e7dd63
0x00e783cb: mov    ecx,edx
0x00e783cd: cmp    edx,0x144
0x00e783d3: ja     0x140e78481
0x00e783d9: je     0x140e7dd63
0x00e783df: sub    ecx,0xac
0x00e783e5: je     0x140e7dd63
0x00e783eb: sub    ecx,0x1
0x00e783ee: je     0x140e7dd63
0x00e783f4: cmp    ecx,0x1
0x00e783f7: je     0x140e7dd63
0x00e783fd: mov    ecx,edx
0x00e783ff: sub    ecx,0x165
0x00e78405: je     0x140e7dd63
0x00e7840b: sub    ecx,0x1
0x00e7840e: je     0x140e7dd63
0x00e78414: cmp    ecx,0x1
0x00e78417: je     0x140e7dd63
0x00e7841d: cmp    r13d,0x53
0x00e78421: je     0x140e7dd63
0x00e78427: mov    ecx,edx
0x00e78429: sub    ecx,0x4f
0x00e7842c: je     0x140e7dd63
0x00e78432: sub    ecx,0x1
0x00e78435: je     0x140e7dd63
0x00e7843b: sub    ecx,0x1
0x00e7843e: je     0x140e7dd63
0x00e78444: cmp    ecx,0x1
0x00e78447: je     0x140e7dd63
0x00e7844d: cmp    r13w,r9w
0x00e78451: je     0x140e7dd63
0x00e78457: cmp    edx,0x164
0x00e7845d: ja     0x140e784a9
0x00e7845f: je     0x140e7dd63
0x00e78465: mov    ecx,edx
0x00e78467: sub    ecx,0x41
0x00e7846a: je     0x140e7dd63
0x00e78470: sub    ecx,0x101
0x00e78476: je     0x140e7dd63
0x00e7847c: cmp    ecx,0x1
0x00e7847f: jmp    0x140e784ba
0x00e78481: sub    ecx,0x145
0x00e78487: cmp    ecx,0x6e
0x00e7848a: ja     0x140e783fd
0x00e78490: movsxd rax,ecx
0x00e78493: movzx  eax,BYTE PTR [r8+rax*1+0xe7e478]
0x00e7849c: mov    ecx,DWORD PTR [r8+rax*4+0xe7e470]
0x00e784a4: add    rcx,r8
0x00e784a7: jmp    rcx
0x00e784a9: mov    ecx,edx
0x00e784ab: sub    ecx,0x1b0
0x00e784b1: je     0x140e7dd63
0x00e784b7: cmp    ecx,0x3a
0x00e784ba: je     0x140e7dd63
0x00e784c0: lea    eax,[r13-0x109]
0x00e784c7: cmp    eax,0xf5
0x00e784cc: ja     0x140e784e6
0x00e784ce: cdqe
0x00e784d0: movzx  eax,BYTE PTR [r8+rax*1+0xe7e4f0]
0x00e784d9: mov    ecx,DWORD PTR [r8+rax*4+0xe7e4e8]
0x00e784e1: add    rcx,r8
0x00e784e4: jmp    rcx
0x00e784e6: mov    eax,0x105
0x00e784eb: cmp    r13w,ax
0x00e784ef: je     0x140e7dd63
0x00e784f5: movzx  r9d,r15w
0x00e784f9: movzx  r8d,r14w
0x00e784fd: movzx  edx,si
0x00e78500: mov    rcx,rdi
0x00e78503: call   0x140067ea0
0x00e78508: mov    r10,rax
0x00e7850b: mov    ecx,r14d
0x00e7850e: mov    edx,esi
0x00e78510: mov    eax,0xffffffff
0x00e78515: test   r10,r10
0x00e78518: je     0x140e7856c
0x00e7851a: mov    r9d,0xc
0x00e78520: and    ecx,0x8000000f
0x00e78526: jge    0x140e7852f
0x00e78528: dec    ecx
0x00e7852a: or     ecx,0xfffffff0
0x00e7852d: inc    ecx
0x00e7852f: and    edx,0x8000000f
0x00e78535: jge    0x140e7853e
0x00e78537: dec    edx
0x00e78539: or     edx,0xfffffff0
0x00e7853c: inc    edx
0x00e7853e: mov    WORD PTR [rsp+0x28],ax
0x00e78543: mov    DWORD PTR [rsp+0x20],eax
0x00e78547: movzx  r8d,cx
0x00e7854b: mov    rcx,r10
0x00e7854e: call   0x1405408a0
0x00e78553: test   eax,eax
0x00e78555: je     0x140e7856c
0x00e78557: mov    r8d,0x6
0x00e7855d: lea    rdx,[rip+0x8b3c64]        # 0x14172c1c8 ; literal="Muddy "
0x00e78564: mov    rcx,rbx
0x00e78567: call   0x14006f9a0
0x00e7856c: movzx  r9d,r15w
0x00e78570: movzx  r8d,r14w
0x00e78574: movzx  edx,si
0x00e78577: mov    rcx,rdi
0x00e7857a: call   0x140067ea0
0x00e7857f: mov    r10,rax
0x00e78582: test   rax,rax
0x00e78585: je     0x140e785e6
0x00e78587: mov    eax,r14d
0x00e7858a: and    eax,0x8000000f
0x00e7858f: jge    0x140e78598
0x00e78591: dec    eax
0x00e78593: or     eax,0xfffffff0
0x00e78596: inc    eax
0x00e78598: mov    ecx,esi
0x00e7859a: and    ecx,0x8000000f
0x00e785a0: jge    0x140e785a9
0x00e785a2: dec    ecx
0x00e785a4: or     ecx,0xfffffff0
0x00e785a7: inc    ecx
0x00e785a9: mov    WORD PTR [rsp+0x28],0x3
0x00e785b0: mov    DWORD PTR [rsp+0x20],0xffffffff
0x00e785b8: mov    r9d,0x6
0x00e785be: movzx  r8d,ax
0x00e785c2: movzx  edx,cx
0x00e785c5: mov    rcx,r10
0x00e785c8: call   0x1405408a0
0x00e785cd: test   eax,eax
0x00e785cf: je     0x140e785e6
0x00e785d1: mov    r8d,0xd
0x00e785d7: lea    rdx,[rip+0x8b3bf2]        # 0x14172c1d0 ; literal="Snow-covered "
0x00e785de: mov    rcx,rbx
0x00e785e1: call   0x14006f9a0
0x00e785e6: movzx  r9d,r15w
0x00e785ea: movzx  r8d,r14w
0x00e785ee: movzx  edx,si
0x00e785f1: mov    rcx,rdi
0x00e785f4: call   0x140067fa0
0x00e785f9: test   al,al
0x00e785fb: jns    0x140e78612
0x00e785fd: mov    r8d,0x6
0x00e78603: lea    rdx,[rip+0x8b3bd6]        # 0x14172c1e0 ; literal="Mossy "
0x00e7860a: mov    rcx,rbx
0x00e7860d: call   0x14006f9a0
0x00e78612: lea    eax,[r13-0x1]
0x00e78616: cmp    eax,0x2b5
0x00e7861b: ja     0x140e7dd51
0x00e78621: cdqe
0x00e78623: lea    rdx,[rip+0xffffffffff1879d6]        # 0x140000000
0x00e7862a: movzx  eax,BYTE PTR [rdx+rax*1+0xe7e82c]
0x00e78632: mov    ecx,DWORD PTR [rdx+rax*4+0xe7e5e8]
0x00e78639: add    rcx,rdx
0x00e7863c: jmp    rcx
0x00e7863e: lea    rcx,[rdi+0x1ddd8]
0x00e78645: movzx  r9d,r15w
0x00e78649: movzx  r8d,r14w
0x00e7864d: movzx  edx,si
0x00e78650: call   0x1413faa60
0x00e78655: mov    QWORD PTR [rbp-0x80],rax
0x00e78659: test   rax,rax
0x00e7865c: je     0x140e786cd
0x00e7865e: cmp    DWORD PTR [rax+0x1c],0xffffffff
0x00e78662: je     0x140e786cd
0x00e78664: mov    edx,DWORD PTR [rax+0x1c]
0x00e78667: mov    rcx,QWORD PTR [rdi+0x11a668]
0x00e7866e: call   0x14007dab0
0x00e78673: test   rax,rax
0x00e78676: je     0x140e786cd
0x00e78678: cmp    QWORD PTR [rax+0x308],r12
0x00e7867f: je     0x140e786cd
0x00e78681: mov    rdx,QWORD PTR [rax+0x308]
0x00e78688: mov    rcx,QWORD PTR [rbp-0x80]
0x00e7868c: mov    ecx,DWORD PTR [rcx+0x20]
0x00e7868f: call   0x1400b9d50
0x00e78694: test   rax,rax
0x00e78697: je     0x140e786cd
0x00e78699: cmp    DWORD PTR [rax+0x4],0x11
0x00e7869d: jne    0x140e786cd
0x00e7869f: mov    rcx,QWORD PTR [rax+0x58]
0x00e786a3: cmp    BYTE PTR [rcx+0x82],r12b
0x00e786aa: je     0x140e786cd
0x00e786ac: add    rcx,0x10
0x00e786b0: xor    r9d,r9d
0x00e786b3: mov    r8b,0x1
0x00e786b6: mov    rdx,rbx
0x00e786b9: call   0x140a91760
0x00e786be: lea    rdx,[rip+0x76b9ff]        # 0x1415e40c4 ; literal=", "
0x00e786c5: mov    rcx,rbx
0x00e786c8: call   0x14006f4f0
0x00e786cd: mov    BYTE PTR [rsp+0x58],r12b
0x00e786d2: lea    eax,[r13-0x1f]
0x00e786d6: cmp    eax,0xc3
0x00e786db: ja     0x140e78714
0x00e786dd: cdqe
0x00e786df: lea    rdx,[rip+0xffffffffff18791a]        # 0x140000000
0x00e786e6: movzx  eax,BYTE PTR [rdx+rax*1+0xe7eaec]
0x00e786ee: mov    ecx,DWORD PTR [rdx+rax*4+0xe7eae4]
0x00e786f5: add    rcx,rdx
0x00e786f8: jmp    rcx
0x00e786fa: mov    BYTE PTR [rsp+0x58],0x1
0x00e786ff: mov    r8d,0x5
0x00e78705: lea    rdx,[rip+0x8b3b78]        # 0x14172c284 ; literal="Dead "
0x00e7870c: mov    rcx,rbx
0x00e7870f: call   0x14006f9a0
0x00e78714: cmp    QWORD PTR [rbp-0x80],r12
0x00e78718: je     0x140e78cbc
0x00e7871e: movzx  edx,BYTE PTR [rsp+0x54]
0x00e78723: lea    rcx,[rbp+0x20]
0x00e78727: call   0x140068120
0x00e7872c: lea    rcx,[rbp+0x20]
0x00e78730: call   0x14006fb10
0x00e78735: nop
0x00e78736: movzx  r8d,r13w
0x00e7873a: lea    rdx,[rbp+0x20]
0x00e7873e: mov    r13,QWORD PTR [rbp-0x80]
0x00e78742: mov    rcx,r13
0x00e78745: call   0x1413fac90
0x00e7874a: lea    rdx,[rbp+0x20]
0x00e7874e: mov    rcx,rbx
0x00e78751: call   0x1400b9ca0
0x00e78756: cmp    BYTE PTR [rbp+0xc8],0x0
0x00e7875d: je     0x140e78cae
0x00e78763: lea    rcx,[rdi+0x11b408]
0x00e7876a: movsx  edx,WORD PTR [r13+0x2]
0x00e7876f: call   0x14014d7e0
0x00e78774: mov    rdi,rax
0x00e78777: test   rax,rax
0x00e7877a: je     0x140e78cae
0x00e78780: movsxd rcx,DWORD PTR [rip+0x1669851]        # 0x1424e1fd8
0x00e78787: lea    r8,[rcx+rcx*2]
0x00e7878b: shl    r8,0x4
0x00e7878f: add    r8,rsi
0x00e78792: movsxd rcx,DWORD PTR [rip+0x1669843]        # 0x1424e1fdc
0x00e78799: lea    rdx,[rcx+rcx*2]
0x00e7879d: shl    rdx,0x4
0x00e787a1: add    rdx,r14
0x00e787a4: movsxd rcx,DWORD PTR [rip+0x1669835]        # 0x1424e1fe0
0x00e787ab: add    rcx,r15
0x00e787ae: imul   rax,rcx,0x2710
0x00e787b5: add    rax,rdx
0x00e787b8: imul   rcx,rax,0x2710
0x00e787bf: movabs rax,0x9e3779b97f4a7c15
0x00e787c9: add    rcx,rax
0x00e787cc: add    rcx,r8
0x00e787cf: mov    QWORD PTR [rip+0xa2f792],rcx        # 0x1418a7f68
0x00e787d6: mov    rax,rcx
0x00e787d9: shr    rax,0x1e
0x00e787dd: xor    rax,rcx
0x00e787e0: movabs rcx,0xbf58476d1ce4e5b9
0x00e787ea: imul   rax,rcx
0x00e787ee: mov    rcx,rax
0x00e787f1: shr    rcx,0x1b
0x00e787f5: xor    rcx,rax
0x00e787f8: movabs rax,0x94d049bb133111eb
0x00e78802: imul   rcx,rax
0x00e78806: mov    r8,rcx
0x00e78809: shr    r8,0x3f
0x00e7880d: shr    rcx,0x20
0x00e78811: xor    r8d,ecx
0x00e78814: mov    eax,0x10624dd3
0x00e78819: mul    r8d
0x00e7881c: shr    edx,0x7
0x00e7881f: imul   eax,edx,0x7d0
0x00e78825: sub    r8d,eax
0x00e78828: mov    ecx,DWORD PTR [rip+0x15096b6]        # 0x142381ee4
0x00e7882e: add    ecx,r8d
0x00e78831: mov    eax,0x299c335d
0x00e78836: imul   ecx
0x00e78838: sar    edx,0x10
0x00e7883b: mov    eax,edx
0x00e7883d: shr    eax,0x1f
0x00e78840: add    edx,eax
0x00e78842: imul   eax,edx,0x62700
0x00e78848: sub    ecx,eax
0x00e7884a: mov    DWORD PTR [rsp+0x5c],ecx
0x00e7884e: cmp    BYTE PTR [rsp+0x58],0x0
0x00e78853: jne    0x140e78cae
0x00e78859: lea    r8,[rdi+0x658]
0x00e78860: mov    rdx,QWORD PTR [rdi+0x658]
0x00e78867: lea    rcx,[rsp+0x70]
0x00e7886c: call   0x14006f6d0
0x00e78871: lea    r8,[rdi+0x658]
0x00e78878: mov    rdx,QWORD PTR [rdi+0x660]
0x00e7887f: lea    rcx,[rbp-0x40]
0x00e78883: call   0x14006f6d0
0x00e78888: mov    r11d,0xffffd8f0
0x00e7888e: mov    rcx,QWORD PTR [rsp+0x70]
0x00e78893: mov    r8d,0xff
0x00e78899: mov    edi,0x2710
0x00e7889e: cmp    rcx,QWORD PTR [rbp-0x40]
0x00e788a2: je     0x140e78cae
0x00e788a8: mov    edx,0x1
0x00e788ad: cmovb  edx,r8d
0x00e788b1: test   dl,dl
0x00e788b3: jns    0x140e78cae
0x00e788b9: mov    r13,QWORD PTR [rcx]
0x00e788bc: cmp    WORD PTR [r13+0x100],0xffff
0x00e788c5: je     0x140e78c9d
0x00e788cb: mov    eax,DWORD PTR [rsp+0x78]
0x00e788cf: add    eax,0xfffffff9
0x00e788d2: cmp    eax,0xdc
0x00e788d7: ja     0x140e78c9d
0x00e788dd: cdqe
0x00e788df: lea    r8,[rip+0xffffffffff18771a]        # 0x140000000
0x00e788e6: movzx  eax,BYTE PTR [r8+rax*1+0xe7ebd0]
0x00e788ef: mov    edx,DWORD PTR [r8+rax*4+0xe7ebb0]
0x00e788f7: add    rdx,r8
0x00e788fa: jmp    rdx
0x00e788fc: mov    eax,DWORD PTR [r13+0x144]
0x00e78903: shr    eax,0x4
0x00e78906: and    al,0x1
0x00e78908: test   al,al
0x00e7890a: jmp    0x140e78961
0x00e7890c: mov    eax,DWORD PTR [r13+0x144]
0x00e78913: shr    eax,0x6
0x00e78916: and    al,0x1
0x00e78918: test   al,al
0x00e7891a: jmp    0x140e78961
0x00e7891c: mov    eax,DWORD PTR [r13+0x144]
0x00e78923: shr    eax,0x3
0x00e78926: and    al,0x1
0x00e78928: test   al,al
0x00e7892a: jmp    0x140e78961
0x00e7892c: mov    eax,DWORD PTR [r13+0x144]
0x00e78933: shr    eax,0x2
0x00e78936: and    al,0x1
0x00e78938: test   al,al
0x00e7893a: jmp    0x140e78961
0x00e7893c: mov    eax,DWORD PTR [r13+0x144]
0x00e78943: shr    eax,1
0x00e78945: and    al,0x1
0x00e78947: test   al,al
0x00e78949: jmp    0x140e78961
0x00e7894b: movzx  eax,BYTE PTR [r13+0x144]
0x00e78953: and    al,0x1
0x00e78955: test   al,al
0x00e78957: jmp    0x140e78961
0x00e78959: test   BYTE PTR [r13+0x144],0x20
0x00e78961: je     0x140e78c9d
0x00e78967: mov    eax,DWORD PTR [r13+0x150]
0x00e7896e: cmp    eax,0xffffffff
0x00e78971: jne    0x140e78980
0x00e78973: cmp    DWORD PTR [r13+0x154],eax
0x00e7897a: je     0x140e78a06
0x00e78980: mov    rdx,QWORD PTR [rbp-0x80]
0x00e78984: mov    r10,QWORD PTR [rdx+0x40]
0x00e78988: test   r10,r10
0x00e7898b: je     0x140e78a06
0x00e7898d: cmp    WORD PTR [r10+0x44],0x0
0x00e78993: jle    0x140e78a06
0x00e78995: movzx  r9d,r15w
0x00e78999: sub    r9w,WORD PTR [rdx+0x8]
0x00e7899e: cmp    eax,0xffffffff
0x00e789a1: je     0x140e789c4
0x00e789a3: movsx  edx,WORD PTR [r10+0x44]
0x00e789a8: imul   edx,eax
0x00e789ab: mov    eax,0x51eb851f
0x00e789b0: imul   edx
0x00e789b2: mov    r8d,edx
0x00e789b5: sar    r8d,0x5
0x00e789b9: mov    eax,r8d
0x00e789bc: shr    eax,0x1f
0x00e789bf: add    r8d,eax
0x00e789c2: jmp    0x140e789c8
0x00e789c4: movzx  r8d,r11w
0x00e789c8: mov    eax,DWORD PTR [r13+0x154]
0x00e789cf: cmp    eax,0xffffffff
0x00e789d2: je     0x140e789ef
0x00e789d4: movsx  edx,WORD PTR [r10+0x44]
0x00e789d9: imul   edx,eax
0x00e789dc: mov    eax,0x51eb851f
0x00e789e1: imul   edx
0x00e789e3: sar    edx,0x5
0x00e789e6: mov    eax,edx
0x00e789e8: shr    eax,0x1f
0x00e789eb: add    edx,eax
0x00e789ed: jmp    0x140e789f2
0x00e789ef: movzx  edx,di
0x00e789f2: cmp    r9w,r8w
0x00e789f6: jl     0x140e78c9d
0x00e789fc: cmp    r9w,dx
0x00e78a00: jg     0x140e78c9d
0x00e78a06: mov    eax,DWORD PTR [r13+0x13c]
0x00e78a0d: cmp    eax,0xffffffff
0x00e78a10: je     0x140e78a4f
0x00e78a12: mov    edx,DWORD PTR [r13+0x140]
0x00e78a19: mov    r8d,DWORD PTR [rsp+0x5c]
0x00e78a1e: cmp    eax,edx
0x00e78a20: jg     0x140e78a41
0x00e78a22: cmp    r8d,eax
0x00e78a25: jl     0x140e78c9d
0x00e78a2b: cmp    edx,r8d
0x00e78a2e: jge    0x140e78a4f
0x00e78a30: add    rcx,0x8
0x00e78a34: mov    QWORD PTR [rsp+0x70],rcx
0x00e78a39: inc    r12d
0x00e78a3c: jmp    0x140e78893
0x00e78a41: cmp    edx,r8d
0x00e78a44: jle    0x140e78a4f
0x00e78a46: cmp    r8d,eax
0x00e78a49: jl     0x140e78c9d
0x00e78a4f: mov    r8d,r14d
0x00e78a52: mov    eax,0x2aaaaaab
0x00e78a57: imul   r14d
0x00e78a5a: mov    ecx,edx
0x00e78a5c: sar    ecx,0x3
0x00e78a5f: mov    eax,ecx
0x00e78a61: shr    eax,0x1f
0x00e78a64: add    ecx,eax
0x00e78a66: lea    eax,[rcx+rcx*2]
0x00e78a69: shl    eax,0x4
0x00e78a6c: sub    r8d,eax
0x00e78a6f: mov    DWORD PTR [rsp+0x58],r8d
0x00e78a74: mov    r9d,esi
0x00e78a77: mov    eax,0x2aaaaaab
0x00e78a7c: imul   esi
0x00e78a7e: mov    r8d,edx
0x00e78a81: sar    r8d,0x3
0x00e78a85: mov    eax,r8d
0x00e78a88: shr    eax,0x1f
0x00e78a8b: add    r8d,eax
0x00e78a8e: lea    eax,[r8+r8*2]
0x00e78a92: shl    eax,0x4
0x00e78a95: sub    r9d,eax
0x00e78a98: mov    DWORD PTR [rsp+0x54],r9d
0x00e78a9d: add    ecx,DWORD PTR [rip+0x1669539]        # 0x1424e1fdc
0x00e78aa3: mov    rdx,QWORD PTR [rip+0x166cf9e]        # 0x1424e5a48
0x00e78aaa: imul   ecx,DWORD PTR [rdx+0xa0]
0x00e78ab1: shl    ecx,0x4
0x00e78ab4: add    ecx,r8d
0x00e78ab7: add    ecx,DWORD PTR [rip+0x166951b]        # 0x1424e1fd8
0x00e78abd: add    rdx,0x208
0x00e78ac4: call   0x1400b9d50
0x00e78ac9: mov    QWORD PTR [rsp+0x60],rax
0x00e78ace: test   rax,rax
0x00e78ad1: je     0x140e78c71
0x00e78ad7: movzx  ecx,r15w
0x00e78adb: add    cx,WORD PTR [rip+0x16694fe]        # 0x1424e1fe0
0x00e78ae2: mov    WORD PTR [rsp+0x50],cx
0x00e78ae7: lea    rdi,[rax+0x120]
0x00e78aee: lea    rdx,[rsp+0x68]
0x00e78af3: mov    rcx,rdi
0x00e78af6: call   0x14006f1d0
0x00e78afb: lea    rdx,[rbp-0x70]
0x00e78aff: mov    rcx,rdi
0x00e78b02: call   0x14006f1c0
0x00e78b07: mov    rdi,QWORD PTR [rsp+0x60]
0x00e78b0c: lea    rdx,[rbp-0x68]
0x00e78b10: lea    rcx,[rdi+0x138]
0x00e78b17: call   0x14006f1d0
0x00e78b1c: lea    rdx,[rbp-0x28]
0x00e78b20: lea    rcx,[rdi+0x138]
0x00e78b27: call   0x14006f1c0
0x00e78b2c: lea    rdx,[rbp-0x60]
0x00e78b30: lea    rcx,[rdi+0x150]
0x00e78b37: call   0x14006f1d0
0x00e78b3c: lea    rdx,[rbp-0x20]
0x00e78b40: lea    rcx,[rdi+0x150]
0x00e78b47: call   0x14006f1c0
0x00e78b4c: lea    rdx,[rbp-0x58]
0x00e78b50: lea    rcx,[rdi+0x168]
0x00e78b57: call   0x14006f1d0
0x00e78b5c: lea    rdx,[rbp-0x18]
0x00e78b60: lea    rcx,[rdi+0x168]
0x00e78b67: call   0x14006f1c0
0x00e78b6c: lea    rdx,[rbp-0x50]
0x00e78b70: lea    rcx,[rdi+0x180]
0x00e78b77: call   0x14006f1d0
0x00e78b7c: lea    rdx,[rbp-0x10]
0x00e78b80: lea    rcx,[rdi+0x180]
0x00e78b87: call   0x14006f1c0
0x00e78b8c: lea    rdx,[rbp-0x78]
0x00e78b90: lea    rcx,[rdi+0x198]
0x00e78b97: call   0x14006f1d0
0x00e78b9c: lea    rdx,[rbp-0x8]
0x00e78ba0: lea    rcx,[rdi+0x198]
0x00e78ba7: call   0x14006f1c0
0x00e78bac: mov    rax,QWORD PTR [rsp+0x68]
0x00e78bb1: mov    rdx,QWORD PTR [rbp-0x70]
0x00e78bb5: mov    rcx,QWORD PTR [rbp-0x68]
0x00e78bb9: mov    edi,0xff
0x00e78bbe: xchg   ax,ax
0x00e78bc0: cmp    rax,rdx
0x00e78bc3: je     0x140e78c71
0x00e78bc9: mov    r8d,0x1
0x00e78bcf: cmovb  r8d,edi
0x00e78bd3: test   r8b,r8b
0x00e78bd6: jns    0x140e78c71
0x00e78bdc: mov    r8d,DWORD PTR [rsp+0x54]
0x00e78be1: cmp    WORD PTR [rax],r8w
0x00e78be5: jne    0x140e78c47
0x00e78be7: mov    r8d,DWORD PTR [rsp+0x58]
0x00e78bec: cmp    WORD PTR [rcx],r8w
0x00e78bf0: jne    0x140e78c47
0x00e78bf2: lea    rcx,[rbp-0x60]
0x00e78bf6: call   0x14006eda0
0x00e78bfb: movzx  ecx,WORD PTR [rsp+0x50]
0x00e78c00: cmp    WORD PTR [rax],cx
0x00e78c03: jne    0x140e78c3a
0x00e78c05: lea    rcx,[rbp-0x58]
0x00e78c09: call   0x14006eda0
0x00e78c0e: cmp    DWORD PTR [rax],r12d
0x00e78c11: jne    0x140e78c3a
0x00e78c13: lea    rcx,[rbp-0x50]
0x00e78c17: call   0x14006eda0
0x00e78c1c: mov    ecx,DWORD PTR [r13+0x148]
0x00e78c23: cmp    DWORD PTR [rax],ecx
0x00e78c25: jl     0x140e78c3a
0x00e78c27: lea    rcx,[rbp-0x78]
0x00e78c2b: call   0x14006eda0
0x00e78c30: mov    ecx,DWORD PTR [rip+0x14f59ce]        # 0x14236e604
0x00e78c36: cmp    DWORD PTR [rax],ecx
0x00e78c38: je     0x140e78c92
0x00e78c3a: mov    rax,QWORD PTR [rsp+0x68]
0x00e78c3f: mov    rdx,QWORD PTR [rbp-0x70]
0x00e78c43: mov    rcx,QWORD PTR [rbp-0x68]
0x00e78c47: add    rax,0x2
0x00e78c4b: mov    QWORD PTR [rsp+0x68],rax
0x00e78c50: add    rcx,0x2
0x00e78c54: mov    QWORD PTR [rbp-0x68],rcx
0x00e78c58: add    QWORD PTR [rbp-0x60],0x2
0x00e78c5d: add    QWORD PTR [rbp-0x58],0x4
0x00e78c62: add    QWORD PTR [rbp-0x50],0x4
0x00e78c67: add    QWORD PTR [rbp-0x78],0x4
0x00e78c6c: jmp    0x140e78bc0
0x00e78c71: mov    r8d,0x2
0x00e78c77: lea    rdx,[rip+0x76b446]        # 0x1415e40c4 ; literal=", "
0x00e78c7e: mov    rcx,rbx
0x00e78c81: call   0x14006f9a0
0x00e78c86: lea    rdx,[r13+0x40]
0x00e78c8a: mov    rcx,rbx
0x00e78c8d: call   0x1400b9ca0
0x00e78c92: mov    r11d,0xffffd8f0
0x00e78c98: mov    rcx,QWORD PTR [rsp+0x70]
0x00e78c9d: add    rcx,0x8
0x00e78ca1: mov    QWORD PTR [rsp+0x70],rcx
0x00e78ca6: inc    r12d
0x00e78ca9: jmp    0x140e78893
0x00e78cae: lea    rcx,[rbp+0x20]
0x00e78cb2: call   0x14006f7e0
0x00e78cb7: jmp    0x140e7e444
0x00e78cbc: mov    r8d,0x4
0x00e78cc2: lea    rdx,[rip+0x79776b]        # 0x141610434 ; literal="Tree"
0x00e78cc9: jmp    0x140e7e43b
0x00e78cce: movzx  r9d,r15w
0x00e78cd2: movzx  r8d,r14w
0x00e78cd6: movzx  edx,si
0x00e78cd9: mov    rcx,rdi
0x00e78cdc: call   0x140067ea0
0x00e78ce1: test   rax,rax
0x00e78ce4: je     0x140e79178
0x00e78cea: mov    r8d,r14d
0x00e78ced: and    r8d,0x8000000f
0x00e78cf4: jge    0x140e78d00
0x00e78cf6: dec    r8d
0x00e78cf9: or     r8d,0xfffffff0
0x00e78cfd: inc    r8d
0x00e78d00: mov    edx,esi
0x00e78d02: and    edx,0x8000000f
0x00e78d08: jge    0x140e78d11
0x00e78d0a: dec    edx
0x00e78d0c: or     edx,0xfffffff0
0x00e78d0f: inc    edx
0x00e78d11: mov    rcx,rax
0x00e78d14: call   0x14052f110
0x00e78d19: mov    r13,rax
0x00e78d1c: test   rax,rax
0x00e78d1f: je     0x140e79178
0x00e78d25: lea    rcx,[rdi+0x11b408]
0x00e78d2c: mov    edx,DWORD PTR [rax+0x8]
0x00e78d2f: call   0x14014d7e0
0x00e78d34: mov    rdi,rax
0x00e78d37: test   rax,rax
0x00e78d3a: je     0x140e79178
0x00e78d40: mov    ecx,esi
0x00e78d42: and    ecx,0x8000000f
0x00e78d48: jge    0x140e78d51
0x00e78d4a: dec    ecx
0x00e78d4c: or     ecx,0xfffffff0
0x00e78d4f: inc    ecx
0x00e78d51: mov    edx,r14d
0x00e78d54: and    edx,0x8000000f
0x00e78d5a: jge    0x140e78d63
0x00e78d5c: dec    edx
0x00e78d5e: or     edx,0xfffffff0
0x00e78d61: inc    edx
0x00e78d63: movsx  rax,cx
0x00e78d67: shl    rax,0x4
0x00e78d6b: movsx  rcx,dx
0x00e78d6f: add    rax,r13
0x00e78d72: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e78d77: cmp    dl,0x43
0x00e78d7a: jb     0x140e78d85
0x00e78d7c: lea    rdx,[rip+0x8b3509]        # 0x14172c28c ; literal="Dense "
0x00e78d83: jmp    0x140e78d91
0x00e78d85: cmp    dl,0x21
0x00e78d88: ja     0x140e78d99
0x00e78d8a: lea    rdx,[rip+0x8b3507]        # 0x14172c298 ; literal="Sparse "
0x00e78d91: mov    rcx,rbx
0x00e78d94: call   0x14006f4f0
0x00e78d99: lea    rdx,[rdi+0x50]
0x00e78d9d: mov    rcx,rbx
0x00e78da0: call   0x1400b9ca0
0x00e78da5: cmp    BYTE PTR [rbp+0xc8],r12b
0x00e78dac: je     0x140e7e444
0x00e78db2: movsxd rax,DWORD PTR [rip+0x166921f]        # 0x1424e1fd8
0x00e78db9: lea    r8,[rax+rax*2]
0x00e78dbd: shl    r8,0x4
0x00e78dc1: add    r8,rsi
0x00e78dc4: movsxd rax,DWORD PTR [rip+0x1669211]        # 0x1424e1fdc
0x00e78dcb: lea    rdx,[rax+rax*2]
0x00e78dcf: shl    rdx,0x4
0x00e78dd3: add    rdx,r14
0x00e78dd6: movsxd rcx,DWORD PTR [rip+0x1669203]        # 0x1424e1fe0
0x00e78ddd: add    rcx,r15
0x00e78de0: mov    r13d,DWORD PTR [rip+0x15090fd]        # 0x142381ee4
0x00e78de7: imul   rax,rcx,0x2710
0x00e78dee: add    rax,rdx
0x00e78df1: imul   rcx,rax,0x2710
0x00e78df8: add    rcx,r8
0x00e78dfb: mov    QWORD PTR [rip+0xa2f166],rcx        # 0x1418a7f68
0x00e78e02: lea    rcx,[rip+0xa2f15f]        # 0x1418a7f68
0x00e78e09: call   0x140247150
0x00e78e0e: mov    r8,rax
0x00e78e11: shr    r8,0x20
0x00e78e15: mov    eax,0x10624dd3
0x00e78e1a: mul    r8d
0x00e78e1d: shr    edx,0x7
0x00e78e20: imul   ecx,edx,0x7d0
0x00e78e26: sub    r8d,ecx
0x00e78e29: add    r13d,r8d
0x00e78e2c: mov    eax,0x299c335d
0x00e78e31: imul   r13d
0x00e78e34: sar    edx,0x10
0x00e78e37: mov    eax,edx
0x00e78e39: shr    eax,0x1f
0x00e78e3c: add    edx,eax
0x00e78e3e: imul   eax,edx,0x62700
0x00e78e44: sub    r13d,eax
0x00e78e47: mov    DWORD PTR [rsp+0x54],r13d
0x00e78e4c: lea    rdx,[rsp+0x70]
0x00e78e51: lea    rcx,[rdi+0x658]
0x00e78e58: call   0x14006f1d0
0x00e78e5d: lea    rdx,[rsp+0x68]
0x00e78e62: lea    rcx,[rdi+0x658]
0x00e78e69: call   0x14006f1c0
0x00e78e6e: mov    edi,esi
0x00e78e70: mov    DWORD PTR [rsp+0x58],esi
0x00e78e74: mov    DWORD PTR [rsp+0x5c],r14d
0x00e78e79: mov    r14d,0xff
0x00e78e7f: mov    rax,QWORD PTR [rsp+0x70]
0x00e78e84: cmp    rax,QWORD PTR [rsp+0x68]
0x00e78e89: je     0x140e7e444
0x00e78e8f: mov    edx,0x1
0x00e78e94: cmovb  edx,r14d
0x00e78e98: test   dl,dl
0x00e78e9a: jns    0x140e7e444
0x00e78ea0: lea    rcx,[rsp+0x70]
0x00e78ea5: call   0x14006eda0
0x00e78eaa: mov    rsi,QWORD PTR [rax]
0x00e78ead: cmp    WORD PTR [rsi+0x100],0xffff
0x00e78eb5: je     0x140e79159
0x00e78ebb: mov    eax,DWORD PTR [rsi+0x13c]
0x00e78ec1: cmp    eax,0xffffffff
0x00e78ec4: je     0x140e78ef1
0x00e78ec6: mov    ecx,DWORD PTR [rsi+0x140]
0x00e78ecc: cmp    eax,ecx
0x00e78ece: jg     0x140e78ee3
0x00e78ed0: cmp    r13d,eax
0x00e78ed3: jl     0x140e79159
0x00e78ed9: cmp    ecx,r13d
0x00e78edc: jge    0x140e78ef1
0x00e78ede: jmp    0x140e79159
0x00e78ee3: cmp    ecx,r13d
0x00e78ee6: jle    0x140e78ef1
0x00e78ee8: cmp    r13d,eax
0x00e78eeb: jl     0x140e79159
0x00e78ef1: mov    eax,0x2aaaaaab
0x00e78ef6: imul   DWORD PTR [rsp+0x5c]
0x00e78efa: mov    r9d,edx
0x00e78efd: sar    r9d,0x3
0x00e78f01: mov    eax,r9d
0x00e78f04: shr    eax,0x1f
0x00e78f07: add    r9d,eax
0x00e78f0a: add    r9d,DWORD PTR [rip+0x16690cb]        # 0x1424e1fdc
0x00e78f11: mov    rcx,QWORD PTR [rip+0x166cb30]        # 0x1424e5a48
0x00e78f18: imul   r9d,DWORD PTR [rcx+0xa0]
0x00e78f20: shl    r9d,0x4
0x00e78f24: mov    eax,0x2aaaaaab
0x00e78f29: imul   edi
0x00e78f2b: mov    r8d,edx
0x00e78f2e: sar    r8d,0x3
0x00e78f32: mov    eax,r8d
0x00e78f35: shr    eax,0x1f
0x00e78f38: add    r8d,eax
0x00e78f3b: mov    edx,DWORD PTR [rip+0x1669097]        # 0x1424e1fd8
0x00e78f41: add    edx,r9d
0x00e78f44: add    edx,r8d
0x00e78f47: call   0x14010aa40
0x00e78f4c: mov    r8,rax
0x00e78f4f: mov    QWORD PTR [rsp+0x60],rax
0x00e78f54: test   rax,rax
0x00e78f57: je     0x140e7913e
0x00e78f5d: mov    eax,0x2aaaaaab
0x00e78f62: imul   edi
0x00e78f64: sar    edx,0x3
0x00e78f67: mov    ecx,edx
0x00e78f69: shr    ecx,0x1f
0x00e78f6c: add    edx,ecx
0x00e78f6e: lea    eax,[rdx+rdx*2]
0x00e78f71: shl    eax,0x4
0x00e78f74: mov    r13d,edi
0x00e78f77: sub    r13d,eax
0x00e78f7a: mov    eax,0x2aaaaaab
0x00e78f7f: mov    ecx,DWORD PTR [rsp+0x5c]
0x00e78f83: imul   ecx
0x00e78f85: sar    edx,0x3
0x00e78f88: mov    eax,edx
0x00e78f8a: shr    eax,0x1f
0x00e78f8d: add    edx,eax
0x00e78f8f: lea    eax,[rdx+rdx*2]
0x00e78f92: shl    eax,0x4
0x00e78f95: sub    ecx,eax
0x00e78f97: mov    DWORD PTR [rsp+0x78],ecx
0x00e78f9b: movzx  eax,r15w
0x00e78f9f: add    ax,WORD PTR [rip+0x166903a]        # 0x1424e1fe0
0x00e78fa6: mov    WORD PTR [rsp+0x50],ax
0x00e78fab: lea    rdi,[r8+0x120]
0x00e78fb2: lea    rdx,[rbp-0x78]
0x00e78fb6: mov    rcx,rdi
0x00e78fb9: call   0x14006f1d0
0x00e78fbe: lea    rdx,[rbp-0x40]
0x00e78fc2: mov    rcx,rdi
0x00e78fc5: call   0x14006f1c0
0x00e78fca: mov    rdi,QWORD PTR [rsp+0x60]
0x00e78fcf: lea    rdx,[rbp-0x70]
0x00e78fd3: lea    rcx,[rdi+0x138]
0x00e78fda: call   0x14006f1d0
0x00e78fdf: lea    rdx,[rbp-0x8]
0x00e78fe3: lea    rcx,[rdi+0x138]
0x00e78fea: call   0x14006f1c0
0x00e78fef: lea    rdx,[rbp-0x50]
0x00e78ff3: lea    rcx,[rdi+0x150]
0x00e78ffa: call   0x14006f1d0
0x00e78fff: lea    rdx,[rbp-0x10]
0x00e79003: lea    rcx,[rdi+0x150]
0x00e7900a: call   0x14006f1c0
0x00e7900f: lea    rdx,[rbp-0x58]
0x00e79013: lea    rcx,[rdi+0x168]
0x00e7901a: call   0x14006f1d0
0x00e7901f: lea    rdx,[rbp-0x18]
0x00e79023: lea    rcx,[rdi+0x168]
0x00e7902a: call   0x14006f1c0
0x00e7902f: lea    rdx,[rbp-0x60]
0x00e79033: lea    rcx,[rdi+0x180]
0x00e7903a: call   0x14006f1d0
0x00e7903f: lea    rdx,[rbp-0x20]
0x00e79043: lea    rcx,[rdi+0x180]
0x00e7904a: call   0x14006f1c0
0x00e7904f: lea    rdx,[rbp-0x68]
0x00e79053: lea    rcx,[rdi+0x198]
0x00e7905a: call   0x14006f1d0
0x00e7905f: lea    rdx,[rbp-0x28]
0x00e79063: lea    rcx,[rdi+0x198]
0x00e7906a: call   0x14006f1c0
0x00e7906f: mov    edi,DWORD PTR [rsp+0x78]
0x00e79073: nop    DWORD PTR [rax+0x0]
0x00e79077: nop    WORD PTR [rax+rax*1+0x0]
0x00e79080: mov    rax,QWORD PTR [rbp-0x78]
0x00e79084: cmp    rax,QWORD PTR [rbp-0x40]
0x00e79088: je     0x140e7913e
0x00e7908e: mov    edx,0x1
0x00e79093: cmovb  edx,r14d
0x00e79097: test   dl,dl
0x00e79099: jns    0x140e7913e
0x00e7909f: lea    rcx,[rbp-0x78]
0x00e790a3: call   0x14006eda0
0x00e790a8: cmp    WORD PTR [rax],r13w
0x00e790ac: jne    0x140e79103
0x00e790ae: lea    rcx,[rbp-0x70]
0x00e790b2: call   0x14006eda0
0x00e790b7: cmp    WORD PTR [rax],di
0x00e790ba: jne    0x140e79103
0x00e790bc: lea    rcx,[rbp-0x50]
0x00e790c0: call   0x14006eda0
0x00e790c5: movzx  ecx,WORD PTR [rsp+0x50]
0x00e790ca: cmp    WORD PTR [rax],cx
0x00e790cd: jne    0x140e79103
0x00e790cf: lea    rcx,[rbp-0x58]
0x00e790d3: call   0x14006eda0
0x00e790d8: cmp    DWORD PTR [rax],r12d
0x00e790db: jne    0x140e79103
0x00e790dd: lea    rcx,[rbp-0x60]
0x00e790e1: call   0x14006eda0
0x00e790e6: mov    ecx,DWORD PTR [rsi+0x148]
0x00e790ec: cmp    DWORD PTR [rax],ecx
0x00e790ee: jl     0x140e79103
0x00e790f0: lea    rcx,[rbp-0x68]
0x00e790f4: call   0x14006eda0
0x00e790f9: mov    ecx,DWORD PTR [rip+0x14f5505]        # 0x14236e604
0x00e790ff: cmp    DWORD PTR [rax],ecx
0x00e79101: je     0x140e79159
0x00e79103: lea    rcx,[rbp-0x78]
0x00e79107: call   0x14006f3c0
0x00e7910c: lea    rcx,[rbp-0x70]
0x00e79110: call   0x14006f3c0
0x00e79115: lea    rcx,[rbp-0x50]
0x00e79119: call   0x14006f3c0
0x00e7911e: lea    rcx,[rbp-0x58]
0x00e79122: call   0x14006f2e0
0x00e79127: lea    rcx,[rbp-0x60]
0x00e7912b: call   0x14006f2e0
0x00e79130: lea    rcx,[rbp-0x68]
0x00e79134: call   0x14006f2e0
0x00e79139: jmp    0x140e79080
0x00e7913e: lea    rdx,[rip+0x76af7f]        # 0x1415e40c4 ; literal=", "
0x00e79145: mov    rcx,rbx
0x00e79148: call   0x14006f4f0
0x00e7914d: lea    rdx,[rsi+0x40]
0x00e79151: mov    rcx,rbx
0x00e79154: call   0x1400b9ca0
0x00e79159: mov    rax,QWORD PTR [rsp+0x70]
0x00e7915e: add    rax,0x8
0x00e79162: mov    QWORD PTR [rsp+0x70],rax
0x00e79167: inc    r12d
0x00e7916a: mov    r13d,DWORD PTR [rsp+0x54]
0x00e7916f: mov    edi,DWORD PTR [rsp+0x58]
0x00e79173: jmp    0x140e78e84
0x00e79178: mov    r8d,0x5
0x00e7917e: lea    rdx,[rip+0x8b311b]        # 0x14172c2a0 ; literal="Grass"
0x00e79185: jmp    0x140e7e43b
0x00e7918a: movzx  r9d,r15w
0x00e7918e: movzx  r8d,r14w
0x00e79192: movzx  edx,si
0x00e79195: mov    rcx,rdi
0x00e79198: call   0x1414cc2a0
0x00e7919d: mov    r13,rax
0x00e791a0: test   rax,rax
0x00e791a3: je     0x140e79638
0x00e791a9: lea    rcx,[rdi+0x11b408]
0x00e791b0: mov    edx,DWORD PTR [rax+0x8]
0x00e791b3: call   0x14014d7e0
0x00e791b8: mov    rdi,rax
0x00e791bb: test   rax,rax
0x00e791be: je     0x140e79638
0x00e791c4: mov    ecx,esi
0x00e791c6: and    ecx,0x8000000f
0x00e791cc: jge    0x140e791d5
0x00e791ce: dec    ecx
0x00e791d0: or     ecx,0xfffffff0
0x00e791d3: inc    ecx
0x00e791d5: mov    edx,r14d
0x00e791d8: and    edx,0x8000000f
0x00e791de: jge    0x140e791e7
0x00e791e0: dec    edx
0x00e791e2: or     edx,0xfffffff0
0x00e791e5: inc    edx
0x00e791e7: movsx  rax,cx
0x00e791eb: shl    rax,0x4
0x00e791ef: movsx  rcx,dx
0x00e791f3: add    rax,r13
0x00e791f6: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e791fb: cmp    dl,0x43
0x00e791fe: jb     0x140e79209
0x00e79200: lea    rdx,[rip+0x8b3085]        # 0x14172c28c ; literal="Dense "
0x00e79207: jmp    0x140e79215
0x00e79209: cmp    dl,0x21
0x00e7920c: ja     0x140e7921d
0x00e7920e: lea    rdx,[rip+0x8b3083]        # 0x14172c298 ; literal="Sparse "
0x00e79215: mov    rcx,rbx
0x00e79218: call   0x14006f4f0
0x00e7921d: lea    rdx,[rip+0x8b3030]        # 0x14172c254 ; literal="Dry "
0x00e79224: mov    rcx,rbx
0x00e79227: call   0x14006f4f0
0x00e7922c: lea    rdx,[rdi+0x50]
0x00e79230: mov    rcx,rbx
0x00e79233: call   0x1400b9ca0
0x00e79238: cmp    BYTE PTR [rbp+0xc8],r12b
0x00e7923f: je     0x140e7e444
0x00e79245: movsxd rax,DWORD PTR [rip+0x1668d8c]        # 0x1424e1fd8
0x00e7924c: lea    r8,[rax+rax*2]
0x00e79250: shl    r8,0x4
0x00e79254: add    r8,rsi
0x00e79257: movsxd rax,DWORD PTR [rip+0x1668d7e]        # 0x1424e1fdc
0x00e7925e: lea    rdx,[rax+rax*2]
0x00e79262: shl    rdx,0x4
0x00e79266: add    rdx,r14
0x00e79269: movsxd rcx,DWORD PTR [rip+0x1668d70]        # 0x1424e1fe0
0x00e79270: add    rcx,r15
0x00e79273: mov    r13d,DWORD PTR [rip+0x1508c6a]        # 0x142381ee4
0x00e7927a: imul   rax,rcx,0x2710
0x00e79281: add    rax,rdx
0x00e79284: imul   rcx,rax,0x2710
0x00e7928b: add    rcx,r8
0x00e7928e: mov    QWORD PTR [rip+0xa2ecd3],rcx        # 0x1418a7f68
0x00e79295: lea    rcx,[rip+0xa2eccc]        # 0x1418a7f68
0x00e7929c: call   0x140247150
0x00e792a1: mov    r8,rax
0x00e792a4: shr    r8,0x20
0x00e792a8: mov    eax,0x10624dd3
0x00e792ad: mul    r8d
0x00e792b0: shr    edx,0x7
0x00e792b3: imul   ecx,edx,0x7d0
0x00e792b9: sub    r8d,ecx
0x00e792bc: add    r13d,r8d
0x00e792bf: mov    eax,0x299c335d
0x00e792c4: imul   r13d
0x00e792c7: sar    edx,0x10
0x00e792ca: mov    eax,edx
0x00e792cc: shr    eax,0x1f
0x00e792cf: add    edx,eax
0x00e792d1: imul   eax,edx,0x62700
0x00e792d7: sub    r13d,eax
0x00e792da: mov    DWORD PTR [rsp+0x5c],r13d
0x00e792df: lea    rdx,[rsp+0x68]
0x00e792e4: lea    rcx,[rdi+0x658]
0x00e792eb: call   0x14006f1d0
0x00e792f0: lea    rdx,[rbp-0x40]
0x00e792f4: lea    rcx,[rdi+0x658]
0x00e792fb: call   0x14006f1c0
0x00e79300: lea    r8,[rbp-0x40]
0x00e79304: lea    rdx,[rsp+0x54]
0x00e79309: lea    rcx,[rsp+0x68]
0x00e7930e: call   0x14006edb0
0x00e79313: xor    edx,edx
0x00e79315: movzx  ecx,BYTE PTR [rax]
0x00e79318: call   0x140065740
0x00e7931d: test   al,al
0x00e7931f: je     0x140e7e444
0x00e79325: mov    edi,esi
0x00e79327: mov    DWORD PTR [rsp+0x60],esi
0x00e7932b: mov    DWORD PTR [rsp+0x78],r14d
0x00e79330: lea    rcx,[rsp+0x68]
0x00e79335: call   0x14006eda0
0x00e7933a: mov    rsi,QWORD PTR [rax]
0x00e7933d: cmp    WORD PTR [rsi+0x100],0xffff
0x00e79345: je     0x140e795f8
0x00e7934b: mov    eax,DWORD PTR [rsi+0x13c]
0x00e79351: cmp    eax,0xffffffff
0x00e79354: je     0x140e79381
0x00e79356: mov    ecx,DWORD PTR [rsi+0x140]
0x00e7935c: cmp    eax,ecx
0x00e7935e: jg     0x140e79373
0x00e79360: cmp    r13d,eax
0x00e79363: jl     0x140e795f8
0x00e79369: cmp    ecx,r13d
0x00e7936c: jge    0x140e79381
0x00e7936e: jmp    0x140e795f8
0x00e79373: cmp    ecx,r13d
0x00e79376: jle    0x140e79381
0x00e79378: cmp    r13d,eax
0x00e7937b: jl     0x140e795f8
0x00e79381: mov    eax,0x2aaaaaab
0x00e79386: imul   edi
0x00e79388: mov    r8d,edx
0x00e7938b: sar    r8d,0x3
0x00e7938f: mov    eax,r8d
0x00e79392: shr    eax,0x1f
0x00e79395: add    r8d,eax
0x00e79398: add    r8d,DWORD PTR [rip+0x1668c39]        # 0x1424e1fd8
0x00e7939f: mov    eax,0x2aaaaaab
0x00e793a4: mov    r13d,DWORD PTR [rsp+0x78]
0x00e793a9: imul   r13d
0x00e793ac: sar    edx,0x3
0x00e793af: mov    eax,edx
0x00e793b1: shr    eax,0x1f
0x00e793b4: add    edx,eax
0x00e793b6: add    edx,DWORD PTR [rip+0x1668c20]        # 0x1424e1fdc
0x00e793bc: mov    rcx,QWORD PTR [rip+0x166c685]        # 0x1424e5a48
0x00e793c3: imul   edx,DWORD PTR [rcx+0xa0]
0x00e793ca: shl    edx,0x4
0x00e793cd: add    edx,r8d
0x00e793d0: call   0x14010aa40
0x00e793d5: mov    r8,rax
0x00e793d8: mov    QWORD PTR [rbp-0x80],rax
0x00e793dc: test   rax,rax
0x00e793df: je     0x140e795dd
0x00e793e5: mov    eax,0x2aaaaaab
0x00e793ea: imul   edi
0x00e793ec: sar    edx,0x3
0x00e793ef: mov    ecx,edx
0x00e793f1: shr    ecx,0x1f
0x00e793f4: add    edx,ecx
0x00e793f6: lea    eax,[rdx+rdx*2]
0x00e793f9: shl    eax,0x4
0x00e793fc: mov    r14d,edi
0x00e793ff: sub    r14d,eax
0x00e79402: mov    eax,0x2aaaaaab
0x00e79407: imul   r13d
0x00e7940a: sar    edx,0x3
0x00e7940d: mov    eax,edx
0x00e7940f: shr    eax,0x1f
0x00e79412: add    edx,eax
0x00e79414: lea    eax,[rdx+rdx*2]
0x00e79417: shl    eax,0x4
0x00e7941a: sub    r13d,eax
0x00e7941d: movzx  eax,r15w
0x00e79421: add    ax,WORD PTR [rip+0x1668bb8]        # 0x1424e1fe0
0x00e79428: mov    WORD PTR [rsp+0x50],ax
0x00e7942d: lea    rdi,[r8+0x120]
0x00e79434: lea    rdx,[rsp+0x70]
0x00e79439: mov    rcx,rdi
0x00e7943c: call   0x14006f1d0
0x00e79441: lea    rdx,[rbp-0x68]
0x00e79445: mov    rcx,rdi
0x00e79448: call   0x14006f1c0
0x00e7944d: mov    rdi,QWORD PTR [rbp-0x80]
0x00e79451: lea    rdx,[rbp-0x70]
0x00e79455: lea    rcx,[rdi+0x138]
0x00e7945c: call   0x14006f1d0
0x00e79461: lea    rdx,[rbp-0x8]
0x00e79465: lea    rcx,[rdi+0x138]
0x00e7946c: call   0x14006f1c0
0x00e79471: lea    rdx,[rbp-0x78]
0x00e79475: lea    rcx,[rdi+0x150]
0x00e7947c: call   0x14006f1d0
0x00e79481: lea    rdx,[rbp-0x10]
0x00e79485: lea    rcx,[rdi+0x150]
0x00e7948c: call   0x14006f1c0
0x00e79491: lea    rdx,[rbp-0x50]
0x00e79495: lea    rcx,[rdi+0x168]
0x00e7949c: call   0x14006f1d0
0x00e794a1: lea    rdx,[rbp-0x18]
0x00e794a5: lea    rcx,[rdi+0x168]
0x00e794ac: call   0x14006f1c0
0x00e794b1: lea    rdx,[rbp-0x58]
0x00e794b5: lea    rcx,[rdi+0x180]
0x00e794bc: call   0x14006f1d0
0x00e794c1: lea    rdx,[rbp-0x20]
0x00e794c5: lea    rcx,[rdi+0x180]
0x00e794cc: call   0x14006f1c0
0x00e794d1: lea    rdx,[rbp-0x60]
0x00e794d5: lea    rcx,[rdi+0x198]
0x00e794dc: call   0x14006f1d0
0x00e794e1: lea    rdx,[rbp-0x28]
0x00e794e5: lea    rcx,[rdi+0x198]
0x00e794ec: call   0x14006f1c0
0x00e794f1: lea    r8,[rbp-0x68]
0x00e794f5: lea    rdx,[rsp+0x58]
0x00e794fa: lea    rcx,[rsp+0x70]
0x00e794ff: call   0x14006edb0
0x00e79504: xor    edx,edx
0x00e79506: movzx  ecx,BYTE PTR [rax]
0x00e79509: call   0x140065740
0x00e7950e: test   al,al
0x00e79510: je     0x140e795dd
0x00e79516: movzx  edi,WORD PTR [rsp+0x50]
0x00e7951b: nop    DWORD PTR [rax+rax*1+0x0]
0x00e79520: lea    rcx,[rsp+0x70]
0x00e79525: call   0x14006eda0
0x00e7952a: cmp    WORD PTR [rax],r14w
0x00e7952e: jne    0x140e79581
0x00e79530: lea    rcx,[rbp-0x70]
0x00e79534: call   0x14006eda0
0x00e79539: cmp    WORD PTR [rax],r13w
0x00e7953d: jne    0x140e79581
0x00e7953f: lea    rcx,[rbp-0x78]
0x00e79543: call   0x14006eda0
0x00e79548: cmp    WORD PTR [rax],di
0x00e7954b: jne    0x140e79581
0x00e7954d: lea    rcx,[rbp-0x50]
0x00e79551: call   0x14006eda0
0x00e79556: cmp    DWORD PTR [rax],r12d
0x00e79559: jne    0x140e79581
0x00e7955b: lea    rcx,[rbp-0x58]
0x00e7955f: call   0x14006eda0
0x00e79564: mov    ecx,DWORD PTR [rsi+0x148]
0x00e7956a: cmp    DWORD PTR [rax],ecx
0x00e7956c: jl     0x140e79581
0x00e7956e: lea    rcx,[rbp-0x60]
0x00e79572: call   0x14006eda0
0x00e79577: mov    ecx,DWORD PTR [rip+0x14f5087]        # 0x14236e604
0x00e7957d: cmp    DWORD PTR [rax],ecx
0x00e7957f: je     0x140e795f8
0x00e79581: lea    rcx,[rsp+0x70]
0x00e79586: call   0x14006f3c0
0x00e7958b: lea    rcx,[rbp-0x70]
0x00e7958f: call   0x14006f3c0
0x00e79594: lea    rcx,[rbp-0x78]
0x00e79598: call   0x14006f3c0
0x00e7959d: lea    rcx,[rbp-0x50]
0x00e795a1: call   0x14006f2e0
0x00e795a6: lea    rcx,[rbp-0x58]
0x00e795aa: call   0x14006f2e0
0x00e795af: lea    rcx,[rbp-0x60]
0x00e795b3: call   0x14006f2e0
0x00e795b8: lea    r8,[rbp-0x68]
0x00e795bc: lea    rdx,[rsp+0x58]
0x00e795c1: lea    rcx,[rsp+0x70]
0x00e795c6: call   0x14006edb0
0x00e795cb: xor    edx,edx
0x00e795cd: movzx  ecx,BYTE PTR [rax]
0x00e795d0: call   0x140065740
0x00e795d5: test   al,al
0x00e795d7: jne    0x140e79520
0x00e795dd: lea    rdx,[rip+0x76aae0]        # 0x1415e40c4 ; literal=", "
0x00e795e4: mov    rcx,rbx
0x00e795e7: call   0x14006f4f0
0x00e795ec: lea    rdx,[rsi+0x40]
0x00e795f0: mov    rcx,rbx
0x00e795f3: call   0x1400b9ca0
0x00e795f8: lea    rcx,[rsp+0x68]
0x00e795fd: call   0x14006ed90
0x00e79602: inc    r12d
0x00e79605: lea    r8,[rbp-0x40]
0x00e79609: lea    rdx,[rsp+0x54]
0x00e7960e: lea    rcx,[rsp+0x68]
0x00e79613: call   0x14006edb0
0x00e79618: xor    edx,edx
0x00e7961a: movzx  ecx,BYTE PTR [rax]
0x00e7961d: call   0x140065740
0x00e79622: test   al,al
0x00e79624: mov    r13d,DWORD PTR [rsp+0x5c]
0x00e79629: mov    edi,DWORD PTR [rsp+0x60]
0x00e7962d: jne    0x140e79330
0x00e79633: jmp    0x140e7e444
0x00e79638: lea    rdx,[rip+0x8b2c21]        # 0x14172c260 ; literal="Dry Grass"
0x00e7963f: mov    rcx,rbx
0x00e79642: call   0x14006f4f0
0x00e79647: jmp    0x140e7e444
0x00e7964c: movzx  r9d,r15w
0x00e79650: movzx  r8d,r14w
0x00e79654: movzx  edx,si
0x00e79657: mov    rcx,rdi
0x00e7965a: call   0x1414cc2a0
0x00e7965f: mov    r15,rax
0x00e79662: test   rax,rax
0x00e79665: je     0x140e796fb
0x00e7966b: lea    rcx,[rdi+0x11b408]
0x00e79672: mov    edx,DWORD PTR [rax+0x8]
0x00e79675: call   0x14014d7e0
0x00e7967a: mov    rdi,rax
0x00e7967d: test   rax,rax
0x00e79680: je     0x140e796fb
0x00e79682: mov    edx,esi
0x00e79684: and    edx,0x8000000f
0x00e7968a: jge    0x140e79693
0x00e7968c: dec    edx
0x00e7968e: or     edx,0xfffffff0
0x00e79691: inc    edx
0x00e79693: mov    ecx,r14d
0x00e79696: and    ecx,0x8000000f
0x00e7969c: jge    0x140e796a5
0x00e7969e: dec    ecx
0x00e796a0: or     ecx,0xfffffff0
0x00e796a3: inc    ecx
0x00e796a5: movsx  rax,dx
0x00e796a9: shl    rax,0x4
0x00e796ad: movsx  rcx,cx
0x00e796b1: add    rax,r15
0x00e796b4: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e796b9: cmp    dl,0x43
0x00e796bc: jb     0x140e796c7
0x00e796be: lea    rdx,[rip+0x8b2bc7]        # 0x14172c28c ; literal="Dense "
0x00e796c5: jmp    0x140e796d3
0x00e796c7: cmp    dl,0x21
0x00e796ca: ja     0x140e796db
0x00e796cc: lea    rdx,[rip+0x8b2bc5]        # 0x14172c298 ; literal="Sparse "
0x00e796d3: mov    rcx,rbx
0x00e796d6: call   0x14006f4f0
0x00e796db: lea    rdx,[rip+0x8b2ba2]        # 0x14172c284 ; literal="Dead "
0x00e796e2: mov    rcx,rbx
0x00e796e5: call   0x14006f4f0
0x00e796ea: lea    rdx,[rdi+0x50]
0x00e796ee: mov    rcx,rbx
0x00e796f1: call   0x1400b9ca0
0x00e796f6: jmp    0x140e7e444
0x00e796fb: lea    rdx,[rip+0x8b2b6e]        # 0x14172c270 ; literal="Dead Grass"
0x00e79702: mov    rcx,rbx
0x00e79705: call   0x14006f4f0
0x00e7970a: jmp    0x140e7e444
0x00e7970f: lea    rax,[rip+0x8b2b66]        # 0x14172c27c ; literal="Level"
0x00e79716: lea    rdx,[rip+0x8b2afb]        # 0x14172c218 ; literal="Sculpted"
0x00e7971d: cmp    BYTE PTR [rsp+0x58],r12b
0x00e79722: cmove  rdx,rax
0x00e79726: mov    rcx,rbx
0x00e79729: call   0x14006f4f0
0x00e7972e: lea    rdx,[rip+0x8b2bb3]        # 0x14172c2e8 ; literal=" Ice Floor"
0x00e79735: mov    rcx,rbx
0x00e79738: call   0x14006f4f0
0x00e7973d: jmp    0x140e7e444
0x00e79742: lea    rdx,[rip+0x8b2bb7]        # 0x14172c300 ; literal="Shoddy "
0x00e79749: mov    rcx,rbx
0x00e7974c: call   0x14006f4f0
0x00e79751: mov    BYTE PTR [rsp+0x28],0x1
0x00e79756: mov    QWORD PTR [rsp+0x20],rbx
0x00e7975b: movzx  r9d,r15w
0x00e7975f: movzx  r8d,r14w
0x00e79763: movzx  edx,si
0x00e79766: mov    rcx,rdi
0x00e79769: call   0x140a44750
0x00e7976e: lea    rdx,[rip+0x8b2b7f]        # 0x14172c2f4 ; literal=" Floor"
0x00e79775: mov    rcx,rbx
0x00e79778: call   0x14006f4f0
0x00e7977d: jmp    0x140e7e444
0x00e79782: lea    rax,[rsp+0x50]
0x00e79787: mov    QWORD PTR [rsp+0x40],rax
0x00e7978c: lea    rax,[rsp+0x60]
0x00e79791: mov    QWORD PTR [rsp+0x38],rax
0x00e79796: lea    rax,[rsp+0x54]
0x00e7979b: mov    QWORD PTR [rsp+0x30],rax
0x00e797a0: lea    rax,[rsp+0x58]
0x00e797a5: mov    QWORD PTR [rsp+0x28],rax
0x00e797aa: lea    rax,[rsp+0x5c]
0x00e797af: mov    QWORD PTR [rsp+0x20],rax
0x00e797b4: movzx  r9d,r15w
0x00e797b8: movzx  r8d,r14w
0x00e797bc: movzx  edx,si
0x00e797bf: mov    rcx,rdi
0x00e797c2: call   0x1414cbbe0
0x00e797c7: movzx  eax,WORD PTR [rsp+0x50]
0x00e797cc: mov    WORD PTR [rsp+0x30],ax
0x00e797d1: mov    BYTE PTR [rsp+0x28],r12b
0x00e797d6: mov    DWORD PTR [rsp+0x20],r12d
0x00e797db: mov    r9d,DWORD PTR [rsp+0x60]
0x00e797e0: movzx  r8d,WORD PTR [rsp+0x54]
0x00e797e6: lea    rdx,[rbp+0x0]
0x00e797ea: mov    rcx,rdi
0x00e797ed: call   0x1414cc890
0x00e797f2: lea    rdx,[rbp+0x0]
0x00e797f6: mov    rcx,rbx
0x00e797f9: call   0x1400b9ca0
0x00e797fe: lea    rdx,[rip+0x8b2b03]        # 0x14172c308 ; literal=" Track (N)"
0x00e79805: mov    rcx,rbx
0x00e79808: call   0x14006f4f0
0x00e7980d: jmp    0x140e7e444
0x00e79812: mov    BYTE PTR [rsp+0x28],0x1
0x00e79817: mov    QWORD PTR [rsp+0x20],rbx
0x00e7981c: movzx  r9d,r15w
0x00e79820: movzx  r8d,r14w
0x00e79824: movzx  edx,si
0x00e79827: mov    rcx,rdi
0x00e7982a: call   0x140a44750
0x00e7982f: lea    rdx,[rip+0x8b2ad2]        # 0x14172c308 ; literal=" Track (N)"
0x00e79836: mov    rcx,rbx
0x00e79839: call   0x14006f4f0
0x00e7983e: jmp    0x140e7e444
0x00e79843: lea    rdx,[rip+0x8b2a5e]        # 0x14172c2a8 ; literal="Ice Track (N)"
0x00e7984a: mov    rcx,rbx
0x00e7984d: call   0x14006f4f0
0x00e79852: jmp    0x140e7e444
0x00e79857: lea    rax,[rsp+0x50]
0x00e7985c: mov    QWORD PTR [rsp+0x40],rax
0x00e79861: lea    rax,[rsp+0x60]
0x00e79866: mov    QWORD PTR [rsp+0x38],rax
0x00e7986b: lea    rax,[rsp+0x54]
0x00e79870: mov    QWORD PTR [rsp+0x30],rax
0x00e79875: lea    rax,[rsp+0x5c]
0x00e7987a: mov    QWORD PTR [rsp+0x28],rax
0x00e7987f: lea    rax,[rsp+0x58]
0x00e79884: mov    QWORD PTR [rsp+0x20],rax
0x00e79889: movzx  r9d,r15w
0x00e7988d: movzx  r8d,r14w
0x00e79891: movzx  edx,si
0x00e79894: mov    rcx,rdi
0x00e79897: call   0x1414cbbe0
0x00e7989c: movzx  eax,WORD PTR [rsp+0x50]
0x00e798a1: mov    WORD PTR [rsp+0x30],ax
0x00e798a6: mov    BYTE PTR [rsp+0x28],r12b
0x00e798ab: mov    DWORD PTR [rsp+0x20],r12d
0x00e798b0: mov    r9d,DWORD PTR [rsp+0x60]
0x00e798b5: movzx  r8d,WORD PTR [rsp+0x54]
0x00e798bb: lea    rdx,[rbp+0x0]
0x00e798bf: mov    rcx,rdi
0x00e798c2: call   0x1414cc890
0x00e798c7: lea    rdx,[rbp+0x0]
0x00e798cb: mov    rcx,rbx
0x00e798ce: call   0x1400b9ca0
0x00e798d3: lea    rdx,[rip+0x8b29de]        # 0x14172c2b8 ; literal=" Track (S)"
0x00e798da: mov    rcx,rbx
0x00e798dd: call   0x14006f4f0
0x00e798e2: jmp    0x140e7e444
0x00e798e7: mov    BYTE PTR [rsp+0x28],0x1
0x00e798ec: mov    QWORD PTR [rsp+0x20],rbx
0x00e798f1: movzx  r9d,r15w
0x00e798f5: movzx  r8d,r14w
0x00e798f9: movzx  edx,si
0x00e798fc: mov    rcx,rdi
0x00e798ff: call   0x140a44750
0x00e79904: lea    rdx,[rip+0x8b29ad]        # 0x14172c2b8 ; literal=" Track (S)"
0x00e7990b: mov    rcx,rbx
0x00e7990e: call   0x14006f4f0
0x00e79913: jmp    0x140e7e444
0x00e79918: lea    rdx,[rip+0x8b29a9]        # 0x14172c2c8 ; literal="Ice Track (S)"
0x00e7991f: mov    rcx,rbx
0x00e79922: call   0x14006f4f0
0x00e79927: jmp    0x140e7e444
0x00e7992c: lea    rax,[rsp+0x50]
0x00e79931: mov    QWORD PTR [rsp+0x40],rax
0x00e79936: lea    rax,[rsp+0x60]
0x00e7993b: mov    QWORD PTR [rsp+0x38],rax
0x00e79940: lea    rax,[rsp+0x54]
0x00e79945: mov    QWORD PTR [rsp+0x30],rax
0x00e7994a: lea    rax,[rsp+0x5c]
0x00e7994f: mov    QWORD PTR [rsp+0x28],rax
0x00e79954: lea    rax,[rsp+0x58]
0x00e79959: mov    QWORD PTR [rsp+0x20],rax
0x00e7995e: movzx  r9d,r15w
0x00e79962: movzx  r8d,r14w
0x00e79966: movzx  edx,si
0x00e79969: mov    rcx,rdi
0x00e7996c: call   0x1414cbbe0
0x00e79971: movzx  eax,WORD PTR [rsp+0x50]
0x00e79976: mov    WORD PTR [rsp+0x30],ax
0x00e7997b: mov    BYTE PTR [rsp+0x28],r12b
0x00e79980: mov    DWORD PTR [rsp+0x20],r12d
0x00e79985: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7998a: movzx  r8d,WORD PTR [rsp+0x54]
0x00e79990: lea    rdx,[rbp+0x0]
0x00e79994: mov    rcx,rdi
0x00e79997: call   0x1414cc890
0x00e7999c: lea    rdx,[rbp+0x0]
0x00e799a0: mov    rcx,rbx
0x00e799a3: call   0x1400b9ca0
0x00e799a8: lea    rdx,[rip+0x8b2929]        # 0x14172c2d8 ; literal=" Track (E)"
0x00e799af: mov    rcx,rbx
0x00e799b2: call   0x14006f4f0
0x00e799b7: jmp    0x140e7e444
0x00e799bc: mov    BYTE PTR [rsp+0x28],0x1
0x00e799c1: mov    QWORD PTR [rsp+0x20],rbx
0x00e799c6: movzx  r9d,r15w
0x00e799ca: movzx  r8d,r14w
0x00e799ce: movzx  edx,si
0x00e799d1: mov    rcx,rdi
0x00e799d4: call   0x140a44750
0x00e799d9: lea    rdx,[rip+0x8b28f8]        # 0x14172c2d8 ; literal=" Track (E)"
0x00e799e0: mov    rcx,rbx
0x00e799e3: call   0x14006f4f0
0x00e799e8: jmp    0x140e7e444
0x00e799ed: lea    rdx,[rip+0x8b2964]        # 0x14172c358 ; literal="Ice Track (E)"
0x00e799f4: mov    rcx,rbx
0x00e799f7: call   0x14006f4f0
0x00e799fc: jmp    0x140e7e444
0x00e79a01: lea    rax,[rsp+0x50]
0x00e79a06: mov    QWORD PTR [rsp+0x40],rax
0x00e79a0b: lea    rax,[rsp+0x60]
0x00e79a10: mov    QWORD PTR [rsp+0x38],rax
0x00e79a15: lea    rax,[rsp+0x54]
0x00e79a1a: mov    QWORD PTR [rsp+0x30],rax
0x00e79a1f: lea    rax,[rsp+0x5c]
0x00e79a24: mov    QWORD PTR [rsp+0x28],rax
0x00e79a29: lea    rax,[rsp+0x58]
0x00e79a2e: mov    QWORD PTR [rsp+0x20],rax
0x00e79a33: movzx  r9d,r15w
0x00e79a37: movzx  r8d,r14w
0x00e79a3b: movzx  edx,si
0x00e79a3e: mov    rcx,rdi
0x00e79a41: call   0x1414cbbe0
0x00e79a46: movzx  eax,WORD PTR [rsp+0x50]
0x00e79a4b: mov    WORD PTR [rsp+0x30],ax
0x00e79a50: mov    BYTE PTR [rsp+0x28],r12b
0x00e79a55: mov    DWORD PTR [rsp+0x20],r12d
0x00e79a5a: mov    r9d,DWORD PTR [rsp+0x60]
0x00e79a5f: movzx  r8d,WORD PTR [rsp+0x54]
0x00e79a65: lea    rdx,[rbp+0x0]
0x00e79a69: mov    rcx,rdi
0x00e79a6c: call   0x1414cc890
0x00e79a71: lea    rdx,[rbp+0x0]
0x00e79a75: mov    rcx,rbx
0x00e79a78: call   0x1400b9ca0
0x00e79a7d: lea    rdx,[rip+0x8b28e4]        # 0x14172c368 ; literal=" Track (W)"
0x00e79a84: mov    rcx,rbx
0x00e79a87: call   0x14006f4f0
0x00e79a8c: jmp    0x140e7e444
0x00e79a91: mov    BYTE PTR [rsp+0x28],0x1
0x00e79a96: mov    QWORD PTR [rsp+0x20],rbx
0x00e79a9b: movzx  r9d,r15w
0x00e79a9f: movzx  r8d,r14w
0x00e79aa3: movzx  edx,si
0x00e79aa6: mov    rcx,rdi
0x00e79aa9: call   0x140a44750
0x00e79aae: lea    rdx,[rip+0x8b28b3]        # 0x14172c368 ; literal=" Track (W)"
0x00e79ab5: mov    rcx,rbx
0x00e79ab8: call   0x14006f4f0
0x00e79abd: jmp    0x140e7e444
0x00e79ac2: lea    rdx,[rip+0x8b28af]        # 0x14172c378 ; literal="Ice Track (W)"
0x00e79ac9: mov    rcx,rbx
0x00e79acc: call   0x14006f4f0
0x00e79ad1: jmp    0x140e7e444
0x00e79ad6: lea    rax,[rsp+0x50]
0x00e79adb: mov    QWORD PTR [rsp+0x40],rax
0x00e79ae0: lea    rax,[rsp+0x60]
0x00e79ae5: mov    QWORD PTR [rsp+0x38],rax
0x00e79aea: lea    rax,[rsp+0x54]
0x00e79aef: mov    QWORD PTR [rsp+0x30],rax
0x00e79af4: lea    rax,[rsp+0x5c]
0x00e79af9: mov    QWORD PTR [rsp+0x28],rax
0x00e79afe: lea    rax,[rsp+0x58]
0x00e79b03: mov    QWORD PTR [rsp+0x20],rax
0x00e79b08: movzx  r9d,r15w
0x00e79b0c: movzx  r8d,r14w
0x00e79b10: movzx  edx,si
0x00e79b13: mov    rcx,rdi
0x00e79b16: call   0x1414cbbe0
0x00e79b1b: movzx  eax,WORD PTR [rsp+0x50]
0x00e79b20: mov    WORD PTR [rsp+0x30],ax
0x00e79b25: mov    BYTE PTR [rsp+0x28],r12b
0x00e79b2a: mov    DWORD PTR [rsp+0x20],r12d
0x00e79b2f: mov    r9d,DWORD PTR [rsp+0x60]
0x00e79b34: movzx  r8d,WORD PTR [rsp+0x54]
0x00e79b3a: lea    rdx,[rbp+0x0]
0x00e79b3e: mov    rcx,rdi
0x00e79b41: call   0x1414cc890
0x00e79b46: lea    rdx,[rbp+0x0]
0x00e79b4a: mov    rcx,rbx
0x00e79b4d: call   0x1400b9ca0
0x00e79b52: lea    rdx,[rip+0x8b282f]        # 0x14172c388 ; literal=" Track (NS)"
0x00e79b59: mov    rcx,rbx
0x00e79b5c: call   0x14006f4f0
0x00e79b61: jmp    0x140e7e444
0x00e79b66: mov    BYTE PTR [rsp+0x28],0x1
0x00e79b6b: mov    QWORD PTR [rsp+0x20],rbx
0x00e79b70: movzx  r9d,r15w
0x00e79b74: movzx  r8d,r14w
0x00e79b78: movzx  edx,si
0x00e79b7b: mov    rcx,rdi
0x00e79b7e: call   0x140a44750
0x00e79b83: lea    rdx,[rip+0x8b27fe]        # 0x14172c388 ; literal=" Track (NS)"
0x00e79b8a: mov    rcx,rbx
0x00e79b8d: call   0x14006f4f0
0x00e79b92: jmp    0x140e7e444
0x00e79b97: lea    rdx,[rip+0x8b277a]        # 0x14172c318 ; literal="Ice Track (NS)"
0x00e79b9e: mov    rcx,rbx
0x00e79ba1: call   0x14006f4f0
0x00e79ba6: jmp    0x140e7e444
0x00e79bab: lea    rax,[rsp+0x50]
0x00e79bb0: mov    QWORD PTR [rsp+0x40],rax
0x00e79bb5: lea    rax,[rsp+0x60]
0x00e79bba: mov    QWORD PTR [rsp+0x38],rax
0x00e79bbf: lea    rax,[rsp+0x54]
0x00e79bc4: mov    QWORD PTR [rsp+0x30],rax
0x00e79bc9: lea    rax,[rsp+0x5c]
0x00e79bce: mov    QWORD PTR [rsp+0x28],rax
0x00e79bd3: lea    rax,[rsp+0x58]
0x00e79bd8: mov    QWORD PTR [rsp+0x20],rax
0x00e79bdd: movzx  r9d,r15w
0x00e79be1: movzx  r8d,r14w
0x00e79be5: movzx  edx,si
0x00e79be8: mov    rcx,rdi
0x00e79beb: call   0x1414cbbe0
0x00e79bf0: movzx  eax,WORD PTR [rsp+0x50]
0x00e79bf5: mov    WORD PTR [rsp+0x30],ax
0x00e79bfa: mov    BYTE PTR [rsp+0x28],r12b
0x00e79bff: mov    DWORD PTR [rsp+0x20],r12d
0x00e79c04: mov    r9d,DWORD PTR [rsp+0x60]
0x00e79c09: movzx  r8d,WORD PTR [rsp+0x54]
0x00e79c0f: lea    rdx,[rbp+0x0]
0x00e79c13: mov    rcx,rdi
0x00e79c16: call   0x1414cc890
0x00e79c1b: lea    rdx,[rbp+0x0]
0x00e79c1f: mov    rcx,rbx
0x00e79c22: call   0x1400b9ca0
0x00e79c27: lea    rdx,[rip+0x8b26fa]        # 0x14172c328 ; literal=" Track (NE)"
0x00e79c2e: mov    rcx,rbx
0x00e79c31: call   0x14006f4f0
0x00e79c36: jmp    0x140e7e444
0x00e79c3b: mov    BYTE PTR [rsp+0x28],0x1
0x00e79c40: mov    QWORD PTR [rsp+0x20],rbx
0x00e79c45: movzx  r9d,r15w
0x00e79c49: movzx  r8d,r14w
0x00e79c4d: movzx  edx,si
0x00e79c50: mov    rcx,rdi
0x00e79c53: call   0x140a44750
0x00e79c58: lea    rdx,[rip+0x8b26c9]        # 0x14172c328 ; literal=" Track (NE)"
0x00e79c5f: mov    rcx,rbx
0x00e79c62: call   0x14006f4f0
0x00e79c67: jmp    0x140e7e444
0x00e79c6c: lea    rdx,[rip+0x8b26c5]        # 0x14172c338 ; literal="Ice Track (NE)"
0x00e79c73: mov    rcx,rbx
0x00e79c76: call   0x14006f4f0
0x00e79c7b: jmp    0x140e7e444
0x00e79c80: lea    rax,[rsp+0x50]
0x00e79c85: mov    QWORD PTR [rsp+0x40],rax
0x00e79c8a: lea    rax,[rsp+0x60]
0x00e79c8f: mov    QWORD PTR [rsp+0x38],rax
0x00e79c94: lea    rax,[rsp+0x54]
0x00e79c99: mov    QWORD PTR [rsp+0x30],rax
0x00e79c9e: lea    rax,[rsp+0x5c]
0x00e79ca3: mov    QWORD PTR [rsp+0x28],rax
0x00e79ca8: lea    rax,[rsp+0x58]
0x00e79cad: mov    QWORD PTR [rsp+0x20],rax
0x00e79cb2: movzx  r9d,r15w
0x00e79cb6: movzx  r8d,r14w
0x00e79cba: movzx  edx,si
0x00e79cbd: mov    rcx,rdi
0x00e79cc0: call   0x1414cbbe0
0x00e79cc5: movzx  eax,WORD PTR [rsp+0x50]
0x00e79cca: mov    WORD PTR [rsp+0x30],ax
0x00e79ccf: mov    BYTE PTR [rsp+0x28],r12b
0x00e79cd4: mov    DWORD PTR [rsp+0x20],r12d
0x00e79cd9: mov    r9d,DWORD PTR [rsp+0x60]
0x00e79cde: movzx  r8d,WORD PTR [rsp+0x54]
0x00e79ce4: lea    rdx,[rbp+0x0]
0x00e79ce8: mov    rcx,rdi
0x00e79ceb: call   0x1414cc890
0x00e79cf0: lea    rdx,[rbp+0x0]
0x00e79cf4: mov    rcx,rbx
0x00e79cf7: call   0x1400b9ca0
0x00e79cfc: lea    rdx,[rip+0x8b2645]        # 0x14172c348 ; literal=" Track (NW)"
0x00e79d03: mov    rcx,rbx
0x00e79d06: call   0x14006f4f0
0x00e79d0b: jmp    0x140e7e444
0x00e79d10: mov    BYTE PTR [rsp+0x28],0x1
0x00e79d15: mov    QWORD PTR [rsp+0x20],rbx
0x00e79d1a: movzx  r9d,r15w
0x00e79d1e: movzx  r8d,r14w
0x00e79d22: movzx  edx,si
0x00e79d25: mov    rcx,rdi
0x00e79d28: call   0x140a44750
0x00e79d2d: lea    rdx,[rip+0x8b2614]        # 0x14172c348 ; literal=" Track (NW)"
0x00e79d34: mov    rcx,rbx
0x00e79d37: call   0x14006f4f0
0x00e79d3c: jmp    0x140e7e444
0x00e79d41: lea    rdx,[rip+0x8b2690]        # 0x14172c3d8 ; literal="Ice Track (NW)"
0x00e79d48: mov    rcx,rbx
0x00e79d4b: call   0x14006f4f0
0x00e79d50: jmp    0x140e7e444
0x00e79d55: lea    rax,[rsp+0x50]
0x00e79d5a: mov    QWORD PTR [rsp+0x40],rax
0x00e79d5f: lea    rax,[rsp+0x60]
0x00e79d64: mov    QWORD PTR [rsp+0x38],rax
0x00e79d69: lea    rax,[rsp+0x54]
0x00e79d6e: mov    QWORD PTR [rsp+0x30],rax
0x00e79d73: lea    rax,[rsp+0x5c]
0x00e79d78: mov    QWORD PTR [rsp+0x28],rax
0x00e79d7d: lea    rax,[rsp+0x58]
0x00e79d82: mov    QWORD PTR [rsp+0x20],rax
0x00e79d87: movzx  r9d,r15w
0x00e79d8b: movzx  r8d,r14w
0x00e79d8f: movzx  edx,si
0x00e79d92: mov    rcx,rdi
0x00e79d95: call   0x1414cbbe0
0x00e79d9a: movzx  eax,WORD PTR [rsp+0x50]
0x00e79d9f: mov    WORD PTR [rsp+0x30],ax
0x00e79da4: mov    BYTE PTR [rsp+0x28],r12b
0x00e79da9: mov    DWORD PTR [rsp+0x20],r12d
0x00e79dae: mov    r9d,DWORD PTR [rsp+0x60]
0x00e79db3: movzx  r8d,WORD PTR [rsp+0x54]
0x00e79db9: lea    rdx,[rbp+0x0]
0x00e79dbd: mov    rcx,rdi
0x00e79dc0: call   0x1414cc890
0x00e79dc5: lea    rdx,[rbp+0x0]
0x00e79dc9: mov    rcx,rbx
0x00e79dcc: call   0x1400b9ca0
0x00e79dd1: lea    rdx,[rip+0x8b2610]        # 0x14172c3e8 ; literal=" Track (SE)"
0x00e79dd8: mov    rcx,rbx
0x00e79ddb: call   0x14006f4f0
0x00e79de0: jmp    0x140e7e444
0x00e79de5: mov    BYTE PTR [rsp+0x28],0x1
0x00e79dea: mov    QWORD PTR [rsp+0x20],rbx
0x00e79def: movzx  r9d,r15w
0x00e79df3: movzx  r8d,r14w
0x00e79df7: movzx  edx,si
0x00e79dfa: mov    rcx,rdi
0x00e79dfd: call   0x140a44750
0x00e79e02: lea    rdx,[rip+0x8b25df]        # 0x14172c3e8 ; literal=" Track (SE)"
0x00e79e09: mov    rcx,rbx
0x00e79e0c: call   0x14006f4f0
0x00e79e11: jmp    0x140e7e444
0x00e79e16: lea    rdx,[rip+0x8b25db]        # 0x14172c3f8 ; literal="Ice Track (SE)"
0x00e79e1d: mov    rcx,rbx
0x00e79e20: call   0x14006f4f0
0x00e79e25: jmp    0x140e7e444
0x00e79e2a: lea    rax,[rsp+0x50]
0x00e79e2f: mov    QWORD PTR [rsp+0x40],rax
0x00e79e34: lea    rax,[rsp+0x60]
0x00e79e39: mov    QWORD PTR [rsp+0x38],rax
0x00e79e3e: lea    rax,[rsp+0x54]
0x00e79e43: mov    QWORD PTR [rsp+0x30],rax
0x00e79e48: lea    rax,[rsp+0x5c]
0x00e79e4d: mov    QWORD PTR [rsp+0x28],rax
0x00e79e52: lea    rax,[rsp+0x58]
0x00e79e57: mov    QWORD PTR [rsp+0x20],rax
0x00e79e5c: movzx  r9d,r15w
0x00e79e60: movzx  r8d,r14w
0x00e79e64: movzx  edx,si
0x00e79e67: mov    rcx,rdi
0x00e79e6a: call   0x1414cbbe0
0x00e79e6f: movzx  eax,WORD PTR [rsp+0x50]
0x00e79e74: mov    WORD PTR [rsp+0x30],ax
0x00e79e79: mov    BYTE PTR [rsp+0x28],r12b
0x00e79e7e: mov    DWORD PTR [rsp+0x20],r12d
0x00e79e83: mov    r9d,DWORD PTR [rsp+0x60]
0x00e79e88: movzx  r8d,WORD PTR [rsp+0x54]
0x00e79e8e: lea    rdx,[rbp+0x0]
0x00e79e92: mov    rcx,rdi
0x00e79e95: call   0x1414cc890
0x00e79e9a: lea    rdx,[rbp+0x0]
0x00e79e9e: mov    rcx,rbx
0x00e79ea1: call   0x1400b9ca0
0x00e79ea6: lea    rdx,[rip+0x8b255b]        # 0x14172c408 ; literal=" Track (SW)"
0x00e79ead: mov    rcx,rbx
0x00e79eb0: call   0x14006f4f0
0x00e79eb5: jmp    0x140e7e444
0x00e79eba: mov    BYTE PTR [rsp+0x28],0x1
0x00e79ebf: mov    QWORD PTR [rsp+0x20],rbx
0x00e79ec4: movzx  r9d,r15w
0x00e79ec8: movzx  r8d,r14w
0x00e79ecc: movzx  edx,si
0x00e79ecf: mov    rcx,rdi
0x00e79ed2: call   0x140a44750
0x00e79ed7: lea    rdx,[rip+0x8b252a]        # 0x14172c408 ; literal=" Track (SW)"
0x00e79ede: mov    rcx,rbx
0x00e79ee1: call   0x14006f4f0
0x00e79ee6: jmp    0x140e7e444
0x00e79eeb: lea    rdx,[rip+0x8b24a6]        # 0x14172c398 ; literal="Ice Track (SW)"
0x00e79ef2: mov    rcx,rbx
0x00e79ef5: call   0x14006f4f0
0x00e79efa: jmp    0x140e7e444
0x00e79eff: lea    rax,[rsp+0x50]
0x00e79f04: mov    QWORD PTR [rsp+0x40],rax
0x00e79f09: lea    rax,[rsp+0x60]
0x00e79f0e: mov    QWORD PTR [rsp+0x38],rax
0x00e79f13: lea    rax,[rsp+0x54]
0x00e79f18: mov    QWORD PTR [rsp+0x30],rax
0x00e79f1d: lea    rax,[rsp+0x5c]
0x00e79f22: mov    QWORD PTR [rsp+0x28],rax
0x00e79f27: lea    rax,[rsp+0x58]
0x00e79f2c: mov    QWORD PTR [rsp+0x20],rax
0x00e79f31: movzx  r9d,r15w
0x00e79f35: movzx  r8d,r14w
0x00e79f39: movzx  edx,si
0x00e79f3c: mov    rcx,rdi
0x00e79f3f: call   0x1414cbbe0
0x00e79f44: movzx  eax,WORD PTR [rsp+0x50]
0x00e79f49: mov    WORD PTR [rsp+0x30],ax
0x00e79f4e: mov    BYTE PTR [rsp+0x28],r12b
0x00e79f53: mov    DWORD PTR [rsp+0x20],r12d
0x00e79f58: mov    r9d,DWORD PTR [rsp+0x60]
0x00e79f5d: movzx  r8d,WORD PTR [rsp+0x54]
0x00e79f63: lea    rdx,[rbp+0x0]
0x00e79f67: mov    rcx,rdi
0x00e79f6a: call   0x1414cc890
0x00e79f6f: lea    rdx,[rbp+0x0]
0x00e79f73: mov    rcx,rbx
0x00e79f76: call   0x1400b9ca0
0x00e79f7b: lea    rdx,[rip+0x8b2426]        # 0x14172c3a8 ; literal=" Track (EW)"
0x00e79f82: mov    rcx,rbx
0x00e79f85: call   0x14006f4f0
0x00e79f8a: jmp    0x140e7e444
0x00e79f8f: mov    BYTE PTR [rsp+0x28],0x1
0x00e79f94: mov    QWORD PTR [rsp+0x20],rbx
0x00e79f99: movzx  r9d,r15w
0x00e79f9d: movzx  r8d,r14w
0x00e79fa1: movzx  edx,si
0x00e79fa4: mov    rcx,rdi
0x00e79fa7: call   0x140a44750
0x00e79fac: lea    rdx,[rip+0x8b23f5]        # 0x14172c3a8 ; literal=" Track (EW)"
0x00e79fb3: mov    rcx,rbx
0x00e79fb6: call   0x14006f4f0
0x00e79fbb: jmp    0x140e7e444
0x00e79fc0: lea    rdx,[rip+0x8b23f1]        # 0x14172c3b8 ; literal="Ice Track (EW)"
0x00e79fc7: mov    rcx,rbx
0x00e79fca: call   0x14006f4f0
0x00e79fcf: jmp    0x140e7e444
0x00e79fd4: lea    rax,[rsp+0x50]
0x00e79fd9: mov    QWORD PTR [rsp+0x40],rax
0x00e79fde: lea    rax,[rsp+0x60]
0x00e79fe3: mov    QWORD PTR [rsp+0x38],rax
0x00e79fe8: lea    rax,[rsp+0x54]
0x00e79fed: mov    QWORD PTR [rsp+0x30],rax
0x00e79ff2: lea    rax,[rsp+0x5c]
0x00e79ff7: mov    QWORD PTR [rsp+0x28],rax
0x00e79ffc: lea    rax,[rsp+0x58]
0x00e7a001: mov    QWORD PTR [rsp+0x20],rax
0x00e7a006: movzx  r9d,r15w
0x00e7a00a: movzx  r8d,r14w
0x00e7a00e: movzx  edx,si
0x00e7a011: mov    rcx,rdi
0x00e7a014: call   0x1414cbbe0
0x00e7a019: movzx  eax,WORD PTR [rsp+0x50]
0x00e7a01e: mov    WORD PTR [rsp+0x30],ax
0x00e7a023: mov    BYTE PTR [rsp+0x28],r12b
0x00e7a028: mov    DWORD PTR [rsp+0x20],r12d
0x00e7a02d: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7a032: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7a038: lea    rdx,[rbp+0x0]
0x00e7a03c: mov    rcx,rdi
0x00e7a03f: call   0x1414cc890
0x00e7a044: lea    rdx,[rbp+0x0]
0x00e7a048: mov    rcx,rbx
0x00e7a04b: call   0x1400b9ca0
0x00e7a050: lea    rdx,[rip+0x8b2371]        # 0x14172c3c8 ; literal=" Track (NSE)"
0x00e7a057: mov    rcx,rbx
0x00e7a05a: call   0x14006f4f0
0x00e7a05f: jmp    0x140e7e444
0x00e7a064: mov    BYTE PTR [rsp+0x28],0x1
0x00e7a069: mov    QWORD PTR [rsp+0x20],rbx
0x00e7a06e: movzx  r9d,r15w
0x00e7a072: movzx  r8d,r14w
0x00e7a076: movzx  edx,si
0x00e7a079: mov    rcx,rdi
0x00e7a07c: call   0x140a44750
0x00e7a081: lea    rdx,[rip+0x8b2340]        # 0x14172c3c8 ; literal=" Track (NSE)"
0x00e7a088: mov    rcx,rbx
0x00e7a08b: call   0x14006f4f0
0x00e7a090: jmp    0x140e7e444
0x00e7a095: lea    rdx,[rip+0x8b23bc]        # 0x14172c458 ; literal="Ice Track (NSE)"
0x00e7a09c: mov    rcx,rbx
0x00e7a09f: call   0x14006f4f0
0x00e7a0a4: jmp    0x140e7e444
0x00e7a0a9: lea    rax,[rsp+0x50]
0x00e7a0ae: mov    QWORD PTR [rsp+0x40],rax
0x00e7a0b3: lea    rax,[rsp+0x60]
0x00e7a0b8: mov    QWORD PTR [rsp+0x38],rax
0x00e7a0bd: lea    rax,[rsp+0x54]
0x00e7a0c2: mov    QWORD PTR [rsp+0x30],rax
0x00e7a0c7: lea    rax,[rsp+0x5c]
0x00e7a0cc: mov    QWORD PTR [rsp+0x28],rax
0x00e7a0d1: lea    rax,[rsp+0x58]
0x00e7a0d6: mov    QWORD PTR [rsp+0x20],rax
0x00e7a0db: movzx  r9d,r15w
0x00e7a0df: movzx  r8d,r14w
0x00e7a0e3: movzx  edx,si
0x00e7a0e6: mov    rcx,rdi
0x00e7a0e9: call   0x1414cbbe0
0x00e7a0ee: movzx  eax,WORD PTR [rsp+0x50]
0x00e7a0f3: mov    WORD PTR [rsp+0x30],ax
0x00e7a0f8: mov    BYTE PTR [rsp+0x28],r12b
0x00e7a0fd: mov    DWORD PTR [rsp+0x20],r12d
0x00e7a102: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7a107: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7a10d: lea    rdx,[rbp+0x0]
0x00e7a111: mov    rcx,rdi
0x00e7a114: call   0x1414cc890
0x00e7a119: lea    rdx,[rbp+0x0]
0x00e7a11d: mov    rcx,rbx
0x00e7a120: call   0x1400b9ca0
0x00e7a125: lea    rdx,[rip+0x8b233c]        # 0x14172c468 ; literal=" Track (NSW)"
0x00e7a12c: mov    rcx,rbx
0x00e7a12f: call   0x14006f4f0
0x00e7a134: jmp    0x140e7e444
0x00e7a139: mov    BYTE PTR [rsp+0x28],0x1
0x00e7a13e: mov    QWORD PTR [rsp+0x20],rbx
0x00e7a143: movzx  r9d,r15w
0x00e7a147: movzx  r8d,r14w
0x00e7a14b: movzx  edx,si
0x00e7a14e: mov    rcx,rdi
0x00e7a151: call   0x140a44750
0x00e7a156: lea    rdx,[rip+0x8b230b]        # 0x14172c468 ; literal=" Track (NSW)"
0x00e7a15d: mov    rcx,rbx
0x00e7a160: call   0x14006f4f0
0x00e7a165: jmp    0x140e7e444
0x00e7a16a: lea    rdx,[rip+0x8b2307]        # 0x14172c478 ; literal="Ice Track (NSW)"
0x00e7a171: mov    rcx,rbx
0x00e7a174: call   0x14006f4f0
0x00e7a179: jmp    0x140e7e444
0x00e7a17e: lea    rax,[rsp+0x50]
0x00e7a183: mov    QWORD PTR [rsp+0x40],rax
0x00e7a188: lea    rax,[rsp+0x60]
0x00e7a18d: mov    QWORD PTR [rsp+0x38],rax
0x00e7a192: lea    rax,[rsp+0x54]
0x00e7a197: mov    QWORD PTR [rsp+0x30],rax
0x00e7a19c: lea    rax,[rsp+0x5c]
0x00e7a1a1: mov    QWORD PTR [rsp+0x28],rax
0x00e7a1a6: lea    rax,[rsp+0x58]
0x00e7a1ab: mov    QWORD PTR [rsp+0x20],rax
0x00e7a1b0: movzx  r9d,r15w
0x00e7a1b4: movzx  r8d,r14w
0x00e7a1b8: movzx  edx,si
0x00e7a1bb: mov    rcx,rdi
0x00e7a1be: call   0x1414cbbe0
0x00e7a1c3: movzx  eax,WORD PTR [rsp+0x50]
0x00e7a1c8: mov    WORD PTR [rsp+0x30],ax
0x00e7a1cd: mov    BYTE PTR [rsp+0x28],r12b
0x00e7a1d2: mov    DWORD PTR [rsp+0x20],r12d
0x00e7a1d7: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7a1dc: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7a1e2: lea    rdx,[rbp+0x0]
0x00e7a1e6: mov    rcx,rdi
0x00e7a1e9: call   0x1414cc890
0x00e7a1ee: lea    rdx,[rbp+0x0]
0x00e7a1f2: mov    rcx,rbx
0x00e7a1f5: call   0x1400b9ca0
0x00e7a1fa: lea    rdx,[rip+0x8b2287]        # 0x14172c488 ; literal=" Track (NEW)"
0x00e7a201: mov    rcx,rbx
0x00e7a204: call   0x14006f4f0
0x00e7a209: jmp    0x140e7e444
0x00e7a20e: mov    BYTE PTR [rsp+0x28],0x1
0x00e7a213: mov    QWORD PTR [rsp+0x20],rbx
0x00e7a218: movzx  r9d,r15w
0x00e7a21c: movzx  r8d,r14w
0x00e7a220: movzx  edx,si
0x00e7a223: mov    rcx,rdi
0x00e7a226: call   0x140a44750
0x00e7a22b: lea    rdx,[rip+0x8b2256]        # 0x14172c488 ; literal=" Track (NEW)"
0x00e7a232: mov    rcx,rbx
0x00e7a235: call   0x14006f4f0
0x00e7a23a: jmp    0x140e7e444
0x00e7a23f: lea    rdx,[rip+0x8b21d2]        # 0x14172c418 ; literal="Ice Track (NEW)"
0x00e7a246: mov    rcx,rbx
0x00e7a249: call   0x14006f4f0
0x00e7a24e: jmp    0x140e7e444
0x00e7a253: lea    rax,[rsp+0x50]
0x00e7a258: mov    QWORD PTR [rsp+0x40],rax
0x00e7a25d: lea    rax,[rsp+0x60]
0x00e7a262: mov    QWORD PTR [rsp+0x38],rax
0x00e7a267: lea    rax,[rsp+0x54]
0x00e7a26c: mov    QWORD PTR [rsp+0x30],rax
0x00e7a271: lea    rax,[rsp+0x5c]
0x00e7a276: mov    QWORD PTR [rsp+0x28],rax
0x00e7a27b: lea    rax,[rsp+0x58]
0x00e7a280: mov    QWORD PTR [rsp+0x20],rax
0x00e7a285: movzx  r9d,r15w
0x00e7a289: movzx  r8d,r14w
0x00e7a28d: movzx  edx,si
0x00e7a290: mov    rcx,rdi
0x00e7a293: call   0x1414cbbe0
0x00e7a298: movzx  eax,WORD PTR [rsp+0x50]
0x00e7a29d: mov    WORD PTR [rsp+0x30],ax
0x00e7a2a2: mov    BYTE PTR [rsp+0x28],r12b
0x00e7a2a7: mov    DWORD PTR [rsp+0x20],r12d
0x00e7a2ac: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7a2b1: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7a2b7: lea    rdx,[rbp+0x0]
0x00e7a2bb: mov    rcx,rdi
0x00e7a2be: call   0x1414cc890
0x00e7a2c3: lea    rdx,[rbp+0x0]
0x00e7a2c7: mov    rcx,rbx
0x00e7a2ca: call   0x1400b9ca0
0x00e7a2cf: lea    rdx,[rip+0x8b2152]        # 0x14172c428 ; literal=" Track (SEW)"
0x00e7a2d6: mov    rcx,rbx
0x00e7a2d9: call   0x14006f4f0
0x00e7a2de: jmp    0x140e7e444
0x00e7a2e3: mov    BYTE PTR [rsp+0x28],0x1
0x00e7a2e8: mov    QWORD PTR [rsp+0x20],rbx
0x00e7a2ed: movzx  r9d,r15w
0x00e7a2f1: movzx  r8d,r14w
0x00e7a2f5: movzx  edx,si
0x00e7a2f8: mov    rcx,rdi
0x00e7a2fb: call   0x140a44750
0x00e7a300: lea    rdx,[rip+0x8b2121]        # 0x14172c428 ; literal=" Track (SEW)"
0x00e7a307: mov    rcx,rbx
0x00e7a30a: call   0x14006f4f0
0x00e7a30f: jmp    0x140e7e444
0x00e7a314: lea    rdx,[rip+0x8b211d]        # 0x14172c438 ; literal="Ice Track (SEW)"
0x00e7a31b: mov    rcx,rbx
0x00e7a31e: call   0x14006f4f0
0x00e7a323: jmp    0x140e7e444
0x00e7a328: lea    rax,[rsp+0x50]
0x00e7a32d: mov    QWORD PTR [rsp+0x40],rax
0x00e7a332: lea    rax,[rsp+0x60]
0x00e7a337: mov    QWORD PTR [rsp+0x38],rax
0x00e7a33c: lea    rax,[rsp+0x54]
0x00e7a341: mov    QWORD PTR [rsp+0x30],rax
0x00e7a346: lea    rax,[rsp+0x5c]
0x00e7a34b: mov    QWORD PTR [rsp+0x28],rax
0x00e7a350: lea    rax,[rsp+0x58]
0x00e7a355: mov    QWORD PTR [rsp+0x20],rax
0x00e7a35a: movzx  r9d,r15w
0x00e7a35e: movzx  r8d,r14w
0x00e7a362: movzx  edx,si
0x00e7a365: mov    rcx,rdi
0x00e7a368: call   0x1414cbbe0
0x00e7a36d: movzx  eax,WORD PTR [rsp+0x50]
0x00e7a372: mov    WORD PTR [rsp+0x30],ax
0x00e7a377: mov    BYTE PTR [rsp+0x28],r12b
0x00e7a37c: mov    DWORD PTR [rsp+0x20],r12d
0x00e7a381: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7a386: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7a38c: lea    rdx,[rbp+0x0]
0x00e7a390: mov    rcx,rdi
0x00e7a393: call   0x1414cc890
0x00e7a398: lea    rdx,[rbp+0x0]
0x00e7a39c: mov    rcx,rbx
0x00e7a39f: call   0x1400b9ca0
0x00e7a3a4: lea    rdx,[rip+0x8b209d]        # 0x14172c448 ; literal=" Track (NSEW)"
0x00e7a3ab: mov    rcx,rbx
0x00e7a3ae: call   0x14006f4f0
0x00e7a3b3: jmp    0x140e7e444
0x00e7a3b8: mov    BYTE PTR [rsp+0x28],0x1
0x00e7a3bd: mov    QWORD PTR [rsp+0x20],rbx
0x00e7a3c2: movzx  r9d,r15w
0x00e7a3c6: movzx  r8d,r14w
0x00e7a3ca: movzx  edx,si
0x00e7a3cd: mov    rcx,rdi
0x00e7a3d0: call   0x140a44750
0x00e7a3d5: lea    rdx,[rip+0x8b206c]        # 0x14172c448 ; literal=" Track (NSEW)"
0x00e7a3dc: mov    rcx,rbx
0x00e7a3df: call   0x14006f4f0
0x00e7a3e4: jmp    0x140e7e444
0x00e7a3e9: lea    rdx,[rip+0x8b20d8]        # 0x14172c4c8 ; literal="Ice Track (NSEW)"
0x00e7a3f0: mov    rcx,rbx
0x00e7a3f3: call   0x14006f4f0
0x00e7a3f8: jmp    0x140e7e444
0x00e7a3fd: cmp    BYTE PTR [rsp+0x58],r12b
0x00e7a402: je     0x140e7a55a
0x00e7a408: movsx  r13d,WORD PTR [rsp+0x54]
0x00e7a40e: mov    ecx,r13d
0x00e7a411: sub    ecx,0x1
0x00e7a414: je     0x140e7a52e
0x00e7a41a: sub    ecx,0x1
0x00e7a41d: je     0x140e7a502
0x00e7a423: sub    ecx,0x1
0x00e7a426: je     0x140e7a4d6
0x00e7a42c: sub    ecx,0x1
0x00e7a42f: je     0x140e7a4a7
0x00e7a431: cmp    ecx,0x1
0x00e7a434: mov    rcx,rbx
0x00e7a437: je     0x140e7a47b
0x00e7a439: lea    rdx,[rip+0x8b1de8]        # 0x14172c228 ; literal="Detailed"
0x00e7a440: call   0x14006f4f0
0x00e7a445: sub    r13d,0x1
0x00e7a449: je     0x140e7a547
0x00e7a44f: sub    r13d,0x1
0x00e7a453: je     0x140e7a51b
0x00e7a459: sub    r13d,0x1
0x00e7a45d: je     0x140e7a4ef
0x00e7a463: sub    r13d,0x1
0x00e7a467: je     0x140e7a4c0
0x00e7a469: cmp    r13d,0x1
0x00e7a46d: je     0x140e7a491
0x00e7a46f: lea    rdx,[rip+0x7692aa]        # 0x1415e3720 ; literal=" "
0x00e7a476: jmp    0x140e7a561
0x00e7a47b: mov    dl,0xf
0x00e7a47d: call   0x1400b9cc0
0x00e7a482: lea    rdx,[rip+0x8b1d9f]        # 0x14172c228 ; literal="Detailed"
0x00e7a489: mov    rcx,rbx
0x00e7a48c: call   0x14006f4f0
0x00e7a491: mov    dl,0xf
0x00e7a493: mov    rcx,rbx
0x00e7a496: call   0x1400b9cc0
0x00e7a49b: lea    rdx,[rip+0x76927e]        # 0x1415e3720 ; literal=" "
0x00e7a4a2: jmp    0x140e7a561
0x00e7a4a7: mov    dl,0xf0
0x00e7a4a9: mov    rcx,rbx
0x00e7a4ac: call   0x1400b9cc0
0x00e7a4b1: lea    rdx,[rip+0x8b1d70]        # 0x14172c228 ; literal="Detailed"
0x00e7a4b8: mov    rcx,rbx
0x00e7a4bb: call   0x14006f4f0
0x00e7a4c0: mov    dl,0xf0
0x00e7a4c2: mov    rcx,rbx
0x00e7a4c5: call   0x1400b9cc0
0x00e7a4ca: lea    rdx,[rip+0x76924f]        # 0x1415e3720 ; literal=" "
0x00e7a4d1: jmp    0x140e7a561
0x00e7a4d6: mov    dl,0x2a
0x00e7a4d8: mov    rcx,rbx
0x00e7a4db: call   0x1400b9cc0
0x00e7a4e0: lea    rdx,[rip+0x8b1d41]        # 0x14172c228 ; literal="Detailed"
0x00e7a4e7: mov    rcx,rbx
0x00e7a4ea: call   0x14006f4f0
0x00e7a4ef: mov    dl,0x2a
0x00e7a4f1: mov    rcx,rbx
0x00e7a4f4: call   0x1400b9cc0
0x00e7a4f9: lea    rdx,[rip+0x769220]        # 0x1415e3720 ; literal=" "
0x00e7a500: jmp    0x140e7a561
0x00e7a502: mov    dl,0x2b
0x00e7a504: mov    rcx,rbx
0x00e7a507: call   0x1400b9cc0
0x00e7a50c: lea    rdx,[rip+0x8b1d15]        # 0x14172c228 ; literal="Detailed"
0x00e7a513: mov    rcx,rbx
0x00e7a516: call   0x14006f4f0
0x00e7a51b: mov    dl,0x2b
0x00e7a51d: mov    rcx,rbx
0x00e7a520: call   0x1400b9cc0
0x00e7a525: lea    rdx,[rip+0x7691f4]        # 0x1415e3720 ; literal=" "
0x00e7a52c: jmp    0x140e7a561
0x00e7a52e: mov    dl,0x2d
0x00e7a530: mov    rcx,rbx
0x00e7a533: call   0x1400b9cc0
0x00e7a538: lea    rdx,[rip+0x8b1ce9]        # 0x14172c228 ; literal="Detailed"
0x00e7a53f: mov    rcx,rbx
0x00e7a542: call   0x14006f4f0
0x00e7a547: mov    dl,0x2d
0x00e7a549: mov    rcx,rbx
0x00e7a54c: call   0x1400b9cc0
0x00e7a551: lea    rdx,[rip+0x7691c8]        # 0x1415e3720 ; literal=" "
0x00e7a558: jmp    0x140e7a561
0x00e7a55a: lea    rdx,[rip+0x8b1c8f]        # 0x14172c1f0 ; literal="Smooth "
0x00e7a561: mov    rcx,rbx
0x00e7a564: call   0x14006f4f0
0x00e7a569: lea    rax,[rsp+0x50]
0x00e7a56e: mov    QWORD PTR [rsp+0x40],rax
0x00e7a573: lea    rax,[rsp+0x60]
0x00e7a578: mov    QWORD PTR [rsp+0x38],rax
0x00e7a57d: lea    rax,[rsp+0x54]
0x00e7a582: mov    QWORD PTR [rsp+0x30],rax
0x00e7a587: lea    rax,[rsp+0x5c]
0x00e7a58c: mov    QWORD PTR [rsp+0x28],rax
0x00e7a591: lea    rax,[rsp+0x58]
0x00e7a596: mov    QWORD PTR [rsp+0x20],rax
0x00e7a59b: movzx  r9d,r15w
0x00e7a59f: movzx  r8d,r14w
0x00e7a5a3: movzx  edx,si
0x00e7a5a6: mov    rcx,rdi
0x00e7a5a9: call   0x1414cbbe0
0x00e7a5ae: movzx  eax,WORD PTR [rsp+0x50]
0x00e7a5b3: mov    WORD PTR [rsp+0x30],ax
0x00e7a5b8: mov    BYTE PTR [rsp+0x28],r12b
0x00e7a5bd: mov    DWORD PTR [rsp+0x20],r12d
0x00e7a5c2: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7a5c7: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7a5cd: lea    rdx,[rbp+0x0]
0x00e7a5d1: mov    rcx,rdi
0x00e7a5d4: call   0x1414cc890
0x00e7a5d9: lea    rdx,[rbp+0x0]
0x00e7a5dd: mov    rcx,rbx
0x00e7a5e0: call   0x1400b9ca0
0x00e7a5e5: movzx  r9d,r15w
0x00e7a5e9: movzx  r8d,r14w
0x00e7a5ed: movzx  edx,si
0x00e7a5f0: mov    rcx,rdi
0x00e7a5f3: call   0x14007dbd0
0x00e7a5f8: bt     eax,0xf
0x00e7a5fc: jae    0x140e7e444
0x00e7a602: lea    rdx,[rip+0x8b1ceb]        # 0x14172c2f4 ; literal=" Floor"
0x00e7a609: mov    rcx,rbx
0x00e7a60c: call   0x14006f4f0
0x00e7a611: jmp    0x140e7e444
0x00e7a616: lea    rax,[rsp+0x50]
0x00e7a61b: mov    QWORD PTR [rsp+0x40],rax
0x00e7a620: lea    rax,[rsp+0x60]
0x00e7a625: mov    QWORD PTR [rsp+0x38],rax
0x00e7a62a: lea    rax,[rsp+0x54]
0x00e7a62f: mov    QWORD PTR [rsp+0x30],rax
0x00e7a634: lea    rax,[rsp+0x5c]
0x00e7a639: mov    QWORD PTR [rsp+0x28],rax
0x00e7a63e: lea    rax,[rsp+0x58]
0x00e7a643: mov    QWORD PTR [rsp+0x20],rax
0x00e7a648: movzx  r9d,r15w
0x00e7a64c: movzx  r8d,r14w
0x00e7a650: movzx  edx,si
0x00e7a653: mov    rcx,rdi
0x00e7a656: call   0x1414cbbe0
0x00e7a65b: movzx  eax,WORD PTR [rsp+0x50]
0x00e7a660: mov    WORD PTR [rsp+0x30],ax
0x00e7a665: mov    BYTE PTR [rsp+0x28],r12b
0x00e7a66a: mov    DWORD PTR [rsp+0x20],r12d
0x00e7a66f: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7a674: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7a67a: lea    rdx,[rbp+0x0]
0x00e7a67e: mov    rcx,rdi
0x00e7a681: call   0x1414cc890
0x00e7a686: lea    rdx,[rbp+0x0]
0x00e7a68a: mov    rcx,rbx
0x00e7a68d: call   0x1400b9ca0
0x00e7a692: lea    rdx,[rip+0x8b1e47]        # 0x14172c4e0 ; literal=" Boulder"
0x00e7a699: mov    rcx,rbx
0x00e7a69c: call   0x14006f4f0
0x00e7a6a1: jmp    0x140e7e444
0x00e7a6a6: lea    rdx,[rip+0x8b1e43]        # 0x14172c4f0 ; literal="Driftwood"
0x00e7a6ad: mov    rcx,rbx
0x00e7a6b0: call   0x14006f4f0
0x00e7a6b5: jmp    0x140e7e444
0x00e7a6ba: lea    rax,[rsp+0x50]
0x00e7a6bf: mov    QWORD PTR [rsp+0x40],rax
0x00e7a6c4: lea    rax,[rsp+0x60]
0x00e7a6c9: mov    QWORD PTR [rsp+0x38],rax
0x00e7a6ce: lea    rax,[rsp+0x54]
0x00e7a6d3: mov    QWORD PTR [rsp+0x30],rax
0x00e7a6d8: lea    rax,[rsp+0x5c]
0x00e7a6dd: mov    QWORD PTR [rsp+0x28],rax
0x00e7a6e2: lea    rax,[rsp+0x58]
0x00e7a6e7: mov    QWORD PTR [rsp+0x20],rax
0x00e7a6ec: movzx  r9d,r15w
0x00e7a6f0: movzx  r8d,r14w
0x00e7a6f4: movzx  edx,si
0x00e7a6f7: mov    rcx,rdi
0x00e7a6fa: call   0x1414cbbe0
0x00e7a6ff: movzx  eax,WORD PTR [rsp+0x50]
0x00e7a704: mov    WORD PTR [rsp+0x30],ax
0x00e7a709: mov    BYTE PTR [rsp+0x28],r12b
0x00e7a70e: mov    DWORD PTR [rsp+0x20],r12d
0x00e7a713: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7a718: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7a71e: lea    rdx,[rbp+0x0]
0x00e7a722: mov    rcx,rdi
0x00e7a725: call   0x1414cc890
0x00e7a72a: lea    rdx,[rbp+0x0]
0x00e7a72e: mov    rcx,rbx
0x00e7a731: call   0x1400b9ca0
0x00e7a736: mov    r8d,0x8
0x00e7a73c: lea    rdx,[rip+0x8b1dbd]        # 0x14172c500 ; literal=" Pebbles"
0x00e7a743: jmp    0x140e7e43b
0x00e7a748: lea    rax,[rsp+0x50]
0x00e7a74d: mov    QWORD PTR [rsp+0x40],rax
0x00e7a752: lea    rax,[rsp+0x60]
0x00e7a757: mov    QWORD PTR [rsp+0x38],rax
0x00e7a75c: lea    rax,[rsp+0x54]
0x00e7a761: mov    QWORD PTR [rsp+0x30],rax
0x00e7a766: lea    rax,[rsp+0x5c]
0x00e7a76b: mov    QWORD PTR [rsp+0x28],rax
0x00e7a770: lea    rax,[rsp+0x58]
0x00e7a775: mov    QWORD PTR [rsp+0x20],rax
0x00e7a77a: movzx  r9d,r15w
0x00e7a77e: movzx  r8d,r14w
0x00e7a782: movzx  edx,si
0x00e7a785: mov    rcx,rdi
0x00e7a788: call   0x1414cbbe0
0x00e7a78d: movzx  eax,WORD PTR [rsp+0x50]
0x00e7a792: mov    WORD PTR [rsp+0x30],ax
0x00e7a797: mov    BYTE PTR [rsp+0x28],r12b
0x00e7a79c: mov    DWORD PTR [rsp+0x20],r12d
0x00e7a7a1: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7a7a6: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7a7ac: lea    rdx,[rbp+0x0]
0x00e7a7b0: mov    rcx,rdi
0x00e7a7b3: call   0x1414cc890
0x00e7a7b8: lea    rdx,[rbp+0x0]
0x00e7a7bc: mov    rcx,rbx
0x00e7a7bf: call   0x1400b9ca0
0x00e7a7c4: movzx  r9d,r15w
0x00e7a7c8: movzx  r8d,r14w
0x00e7a7cc: movzx  edx,si
0x00e7a7cf: mov    rcx,rdi
0x00e7a7d2: call   0x14007dbd0
0x00e7a7d7: bt     eax,0xf
0x00e7a7db: jae    0x140e7e444
0x00e7a7e1: mov    r8d,0xd
0x00e7a7e7: lea    rdx,[rip+0x8b1caa]        # 0x14172c498 ; literal=" Cavern Floor"
0x00e7a7ee: jmp    0x140e7e43b
0x00e7a7f3: lea    rdx,[rip+0x8b1cae]        # 0x14172c4a8 ; literal="Wet "
0x00e7a7fa: mov    rcx,rbx
0x00e7a7fd: call   0x14006f4f0
0x00e7a802: lea    rax,[rsp+0x50]
0x00e7a807: mov    QWORD PTR [rsp+0x40],rax
0x00e7a80c: lea    rax,[rsp+0x60]
0x00e7a811: mov    QWORD PTR [rsp+0x38],rax
0x00e7a816: lea    rax,[rsp+0x54]
0x00e7a81b: mov    QWORD PTR [rsp+0x30],rax
0x00e7a820: lea    rax,[rsp+0x5c]
0x00e7a825: mov    QWORD PTR [rsp+0x28],rax
0x00e7a82a: lea    rax,[rsp+0x58]
0x00e7a82f: mov    QWORD PTR [rsp+0x20],rax
0x00e7a834: movzx  r9d,r15w
0x00e7a838: movzx  r8d,r14w
0x00e7a83c: movzx  edx,si
0x00e7a83f: mov    rcx,rdi
0x00e7a842: call   0x1414cbbe0
0x00e7a847: movzx  eax,WORD PTR [rsp+0x50]
0x00e7a84c: mov    WORD PTR [rsp+0x30],ax
0x00e7a851: mov    BYTE PTR [rsp+0x28],r12b
0x00e7a856: mov    DWORD PTR [rsp+0x20],r12d
0x00e7a85b: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7a860: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7a866: lea    rdx,[rbp+0x0]
0x00e7a86a: mov    rcx,rdi
0x00e7a86d: call   0x1414cc890
0x00e7a872: lea    rdx,[rbp+0x0]
0x00e7a876: mov    rcx,rbx
0x00e7a879: call   0x1400b9ca0
0x00e7a87e: movzx  r9d,r15w
0x00e7a882: movzx  r8d,r14w
0x00e7a886: movzx  edx,si
0x00e7a889: mov    rcx,rdi
0x00e7a88c: call   0x14007dbd0
0x00e7a891: bt     eax,0xf
0x00e7a895: jae    0x140e7e444
0x00e7a89b: lea    rdx,[rip+0x8b1bf6]        # 0x14172c498 ; literal=" Cavern Floor"
0x00e7a8a2: mov    rcx,rbx
0x00e7a8a5: call   0x14006f4f0
0x00e7a8aa: jmp    0x140e7e444
0x00e7a8af: lea    rcx,[rdi+0x1ddd8]
0x00e7a8b6: movzx  r9d,r15w
0x00e7a8ba: movzx  r8d,r14w
0x00e7a8be: movzx  edx,si
0x00e7a8c1: call   0x1413faa60
0x00e7a8c6: mov    rsi,rax
0x00e7a8c9: test   rax,rax
0x00e7a8cc: je     0x140e7a939
0x00e7a8ce: cmp    DWORD PTR [rax+0x1c],0xffffffff
0x00e7a8d2: je     0x140e7a939
0x00e7a8d4: mov    edx,DWORD PTR [rax+0x1c]
0x00e7a8d7: mov    rcx,QWORD PTR [rdi+0x11a668]
0x00e7a8de: call   0x14007dab0
0x00e7a8e3: test   rax,rax
0x00e7a8e6: je     0x140e7a939
0x00e7a8e8: cmp    QWORD PTR [rax+0x308],r12
0x00e7a8ef: je     0x140e7a939
0x00e7a8f1: mov    rdx,QWORD PTR [rax+0x308]
0x00e7a8f8: mov    ecx,DWORD PTR [rsi+0x20]
0x00e7a8fb: call   0x1400b9d50
0x00e7a900: test   rax,rax
0x00e7a903: je     0x140e7a939
0x00e7a905: cmp    DWORD PTR [rax+0x4],0x11
0x00e7a909: jne    0x140e7a939
0x00e7a90b: mov    rcx,QWORD PTR [rax+0x58]
0x00e7a90f: cmp    BYTE PTR [rcx+0x82],r12b
0x00e7a916: je     0x140e7a939
0x00e7a918: add    rcx,0x10
0x00e7a91c: xor    r9d,r9d
0x00e7a91f: mov    r8b,0x1
0x00e7a922: mov    rdx,rbx
0x00e7a925: call   0x140a91760
0x00e7a92a: lea    rdx,[rip+0x769793]        # 0x1415e40c4 ; literal=", "
0x00e7a931: mov    rcx,rbx
0x00e7a934: call   0x14006f4f0
0x00e7a939: mov    eax,0x184
0x00e7a93e: cmp    r13w,ax
0x00e7a942: jne    0x140e7a953
0x00e7a944: lea    rdx,[rip+0x8b1939]        # 0x14172c284 ; literal="Dead "
0x00e7a94b: mov    rcx,rbx
0x00e7a94e: call   0x14006f4f0
0x00e7a953: test   rsi,rsi
0x00e7a956: je     0x140e7a9ef
0x00e7a95c: cmp    WORD PTR [rsi],0x1
0x00e7a960: ja     0x140e7a98b
0x00e7a962: lea    rcx,[rdi+0x11b408]
0x00e7a969: movsx  edx,WORD PTR [rsi+0x2]
0x00e7a96d: mov    r8d,0x4d
0x00e7a973: call   0x14014d810
0x00e7a978: test   al,al
0x00e7a97a: jne    0x140e7a98b
0x00e7a97c: lea    rdx,[rip+0x8b1b2d]        # 0x14172c4b0 ; literal="Young "
0x00e7a983: mov    rcx,rbx
0x00e7a986: call   0x14006f4f0
0x00e7a98b: lea    rcx,[rbp+0x20]
0x00e7a98f: call   0x14006f620
0x00e7a994: nop
0x00e7a995: movzx  r8d,r13w
0x00e7a999: lea    rdx,[rbp+0x20]
0x00e7a99d: mov    rcx,rsi
0x00e7a9a0: call   0x1413fac90
0x00e7a9a5: lea    rdx,[rbp+0x20]
0x00e7a9a9: mov    rcx,rbx
0x00e7a9ac: call   0x1400b9ca0
0x00e7a9b1: cmp    WORD PTR [rsi],0x1
0x00e7a9b5: ja     0x140e7a9e1
0x00e7a9b7: lea    rcx,[rdi+0x11b408]
0x00e7a9be: movsx  edx,WORD PTR [rsi+0x2]
0x00e7a9c2: mov    r8d,0x4d
0x00e7a9c8: call   0x14014d810
0x00e7a9cd: test   al,al
0x00e7a9cf: je     0x140e7a9e1
0x00e7a9d1: lea    rdx,[rip+0x8b1ae0]        # 0x14172c4b8 ; literal=" Sapling"
0x00e7a9d8: mov    rcx,rbx
0x00e7a9db: call   0x14006f4f0
0x00e7a9e0: nop
0x00e7a9e1: lea    rcx,[rbp+0x20]
0x00e7a9e5: call   0x140067dc0
0x00e7a9ea: jmp    0x140e7e444
0x00e7a9ef: lea    rdx,[rip+0x8b12c2]        # 0x14172bcb8 ; literal="Sapling"
0x00e7a9f6: mov    rcx,rbx
0x00e7a9f9: call   0x14006f4f0
0x00e7a9fe: jmp    0x140e7e444
0x00e7aa03: lea    rcx,[rdi+0x1ddd8]
0x00e7aa0a: movzx  r9d,r15w
0x00e7aa0e: movzx  r8d,r14w
0x00e7aa12: movzx  edx,si
0x00e7aa15: call   0x1413faa60
0x00e7aa1a: mov    QWORD PTR [rsp+0x68],rax
0x00e7aa1f: test   rax,rax
0x00e7aa22: je     0x140e7aa94
0x00e7aa24: cmp    DWORD PTR [rax+0x1c],0xffffffff
0x00e7aa28: je     0x140e7aa94
0x00e7aa2a: mov    edx,DWORD PTR [rax+0x1c]
0x00e7aa2d: mov    rcx,QWORD PTR [rdi+0x11a668]
0x00e7aa34: call   0x14007dab0
0x00e7aa39: test   rax,rax
0x00e7aa3c: je     0x140e7aa94
0x00e7aa3e: cmp    QWORD PTR [rax+0x308],r12
0x00e7aa45: je     0x140e7aa94
0x00e7aa47: mov    rdx,QWORD PTR [rax+0x308]
0x00e7aa4e: mov    rcx,QWORD PTR [rsp+0x68]
0x00e7aa53: mov    ecx,DWORD PTR [rcx+0x20]
0x00e7aa56: call   0x1400b9d50
0x00e7aa5b: test   rax,rax
0x00e7aa5e: je     0x140e7aa94
0x00e7aa60: cmp    DWORD PTR [rax+0x4],0x11
0x00e7aa64: jne    0x140e7aa94
0x00e7aa66: mov    rcx,QWORD PTR [rax+0x58]
0x00e7aa6a: cmp    BYTE PTR [rcx+0x82],r12b
0x00e7aa71: je     0x140e7aa94
0x00e7aa73: add    rcx,0x10
0x00e7aa77: xor    r9d,r9d
0x00e7aa7a: mov    r8b,0x1
0x00e7aa7d: mov    rdx,rbx
0x00e7aa80: call   0x140a91760
0x00e7aa85: lea    rdx,[rip+0x769638]        # 0x1415e40c4 ; literal=", "
0x00e7aa8c: mov    rcx,rbx
0x00e7aa8f: call   0x14006f4f0
0x00e7aa94: mov    eax,0x185
0x00e7aa99: cmp    r13w,ax
0x00e7aa9d: jne    0x140e7aaae
0x00e7aa9f: lea    rdx,[rip+0x8b17de]        # 0x14172c284 ; literal="Dead "
0x00e7aaa6: mov    rcx,rbx
0x00e7aaa9: call   0x14006f4f0
0x00e7aaae: cmp    QWORD PTR [rsp+0x68],r12
0x00e7aab3: je     0x140e7af14
0x00e7aab9: lea    rcx,[rbp+0x20]
0x00e7aabd: call   0x14006f620
0x00e7aac2: nop
0x00e7aac3: movzx  r8d,r13w
0x00e7aac7: lea    rdx,[rbp+0x20]
0x00e7aacb: mov    rcx,QWORD PTR [rsp+0x68]
0x00e7aad0: call   0x1413fac90
0x00e7aad5: lea    rdx,[rbp+0x20]
0x00e7aad9: mov    rcx,rbx
0x00e7aadc: call   0x1400b9ca0
0x00e7aae1: cmp    BYTE PTR [rbp+0xc8],0x0
0x00e7aae8: je     0x140e7af06
0x00e7aaee: mov    eax,0x185
0x00e7aaf3: cmp    r13w,ax
0x00e7aaf7: je     0x140e7af06
0x00e7aafd: lea    rcx,[rdi+0x11b408]
0x00e7ab04: mov    rax,QWORD PTR [rsp+0x68]
0x00e7ab09: movsx  edx,WORD PTR [rax+0x2]
0x00e7ab0d: call   0x14014d7e0
0x00e7ab12: mov    r13,rax
0x00e7ab15: test   rax,rax
0x00e7ab18: je     0x140e7af06
0x00e7ab1e: movsxd rcx,DWORD PTR [rip+0x16674b3]        # 0x1424e1fd8
0x00e7ab25: lea    r8,[rcx+rcx*2]
0x00e7ab29: shl    r8,0x4
0x00e7ab2d: add    r8,rsi
0x00e7ab30: movsxd rcx,DWORD PTR [rip+0x16674a5]        # 0x1424e1fdc
0x00e7ab37: lea    rdx,[rcx+rcx*2]
0x00e7ab3b: shl    rdx,0x4
0x00e7ab3f: add    rdx,r14
0x00e7ab42: movsxd rcx,DWORD PTR [rip+0x1667497]        # 0x1424e1fe0
0x00e7ab49: add    rcx,r15
0x00e7ab4c: mov    edi,DWORD PTR [rip+0x1507392]        # 0x142381ee4
0x00e7ab52: imul   rax,rcx,0x2710
0x00e7ab59: add    rax,rdx
0x00e7ab5c: imul   rcx,rax,0x2710
0x00e7ab63: add    rcx,r8
0x00e7ab66: mov    QWORD PTR [rip+0xa2d3fb],rcx        # 0x1418a7f68
0x00e7ab6d: lea    rcx,[rip+0xa2d3f4]        # 0x1418a7f68
0x00e7ab74: call   0x140247150
0x00e7ab79: mov    r8,rax
0x00e7ab7c: shr    r8,0x20
0x00e7ab80: mov    eax,0x10624dd3
0x00e7ab85: mul    r8d
0x00e7ab88: shr    edx,0x7
0x00e7ab8b: imul   ecx,edx,0x7d0
0x00e7ab91: sub    r8d,ecx
0x00e7ab94: lea    ecx,[r8+rdi*1]
0x00e7ab98: mov    eax,0x299c335d
0x00e7ab9d: imul   ecx
0x00e7ab9f: sar    edx,0x10
0x00e7aba2: mov    eax,edx
0x00e7aba4: shr    eax,0x1f
0x00e7aba7: add    edx,eax
0x00e7aba9: imul   eax,edx,0x62700
0x00e7abaf: sub    ecx,eax
0x00e7abb1: mov    DWORD PTR [rsp+0x78],ecx
0x00e7abb5: lea    rdx,[rsp+0x70]
0x00e7abba: lea    rcx,[r13+0x658]
0x00e7abc1: call   0x14006f1d0
0x00e7abc6: lea    rdx,[rbp-0x68]
0x00e7abca: lea    rcx,[r13+0x658]
0x00e7abd1: call   0x14006f1c0
0x00e7abd6: lea    r8,[rbp-0x68]
0x00e7abda: lea    rdx,[rsp+0x58]
0x00e7abdf: lea    rcx,[rsp+0x70]
0x00e7abe4: call   0x14006edb0
0x00e7abe9: xor    edx,edx
0x00e7abeb: movzx  ecx,BYTE PTR [rax]
0x00e7abee: call   0x140065740
0x00e7abf3: test   al,al
0x00e7abf5: je     0x140e7af06
0x00e7abfb: nop    DWORD PTR [rax+rax*1+0x0]
0x00e7ac00: lea    rcx,[rsp+0x70]
0x00e7ac05: call   0x14006eda0
0x00e7ac0a: mov    r13,QWORD PTR [rax]
0x00e7ac0d: cmp    WORD PTR [r13+0x100],0xffff
0x00e7ac16: je     0x140e7aed4
0x00e7ac1c: mov    eax,DWORD PTR [r13+0x13c]
0x00e7ac23: cmp    eax,0xffffffff
0x00e7ac26: je     0x140e7ac54
0x00e7ac28: mov    ecx,DWORD PTR [r13+0x140]
0x00e7ac2f: mov    edi,DWORD PTR [rsp+0x78]
0x00e7ac33: cmp    eax,ecx
0x00e7ac35: jg     0x140e7ac48
0x00e7ac37: cmp    edi,eax
0x00e7ac39: jl     0x140e7aed4
0x00e7ac3f: cmp    ecx,edi
0x00e7ac41: jge    0x140e7ac54
0x00e7ac43: jmp    0x140e7aed4
0x00e7ac48: cmp    ecx,edi
0x00e7ac4a: jle    0x140e7ac54
0x00e7ac4c: cmp    edi,eax
0x00e7ac4e: jl     0x140e7aed4
0x00e7ac54: mov    edi,esi
0x00e7ac56: mov    eax,0x2aaaaaab
0x00e7ac5b: imul   esi
0x00e7ac5d: mov    r8d,edx
0x00e7ac60: sar    r8d,0x3
0x00e7ac64: mov    eax,r8d
0x00e7ac67: shr    eax,0x1f
0x00e7ac6a: add    r8d,eax
0x00e7ac6d: add    r8d,DWORD PTR [rip+0x1667364]        # 0x1424e1fd8
0x00e7ac74: mov    DWORD PTR [rsp+0x5c],r14d
0x00e7ac79: mov    eax,0x2aaaaaab
0x00e7ac7e: imul   r14d
0x00e7ac81: sar    edx,0x3
0x00e7ac84: mov    eax,edx
0x00e7ac86: shr    eax,0x1f
0x00e7ac89: add    edx,eax
0x00e7ac8b: add    edx,DWORD PTR [rip+0x166734b]        # 0x1424e1fdc
0x00e7ac91: mov    rcx,QWORD PTR [rip+0x166adb0]        # 0x1424e5a48
0x00e7ac98: imul   edx,DWORD PTR [rcx+0xa0]
0x00e7ac9f: shl    edx,0x4
0x00e7aca2: add    edx,r8d
0x00e7aca5: call   0x14010aa40
0x00e7acaa: mov    r8,rax
0x00e7acad: mov    QWORD PTR [rbp-0x80],rax
0x00e7acb1: test   rax,rax
0x00e7acb4: je     0x140e7aeb9
0x00e7acba: mov    eax,0x2aaaaaab
0x00e7acbf: imul   edi
0x00e7acc1: sar    edx,0x3
0x00e7acc4: mov    ecx,edx
0x00e7acc6: shr    ecx,0x1f
0x00e7acc9: add    edx,ecx
0x00e7accb: lea    eax,[rdx+rdx*2]
0x00e7acce: shl    eax,0x4
0x00e7acd1: sub    edi,eax
0x00e7acd3: mov    DWORD PTR [rsp+0x60],edi
0x00e7acd7: mov    eax,0x2aaaaaab
0x00e7acdc: mov    ecx,r14d
0x00e7acdf: imul   ecx
0x00e7ace1: sar    edx,0x3
0x00e7ace4: mov    eax,edx
0x00e7ace6: shr    eax,0x1f
0x00e7ace9: add    edx,eax
0x00e7aceb: lea    eax,[rdx+rdx*2]
0x00e7acee: shl    eax,0x4
0x00e7acf1: sub    ecx,eax
0x00e7acf3: mov    DWORD PTR [rsp+0x5c],ecx
0x00e7acf7: movzx  eax,r15w
0x00e7acfb: add    ax,WORD PTR [rip+0x16672de]        # 0x1424e1fe0
0x00e7ad02: mov    WORD PTR [rsp+0x50],ax
0x00e7ad07: lea    rdi,[r8+0x120]
0x00e7ad0e: lea    rdx,[rsp+0x68]
0x00e7ad13: mov    rcx,rdi
0x00e7ad16: call   0x14006f1d0
0x00e7ad1b: lea    rdx,[rbp-0x60]
0x00e7ad1f: mov    rcx,rdi
0x00e7ad22: call   0x14006f1c0
0x00e7ad27: mov    rdi,QWORD PTR [rbp-0x80]
0x00e7ad2b: lea    rdx,[rbp-0x40]
0x00e7ad2f: lea    rcx,[rdi+0x138]
0x00e7ad36: call   0x14006f1d0
0x00e7ad3b: lea    rdx,[rbp-0x8]
0x00e7ad3f: lea    rcx,[rdi+0x138]
0x00e7ad46: call   0x14006f1c0
0x00e7ad4b: lea    rdx,[rbp-0x70]
0x00e7ad4f: lea    rcx,[rdi+0x150]
0x00e7ad56: call   0x14006f1d0
0x00e7ad5b: lea    rdx,[rbp-0x10]
0x00e7ad5f: lea    rcx,[rdi+0x150]
0x00e7ad66: call   0x14006f1c0
0x00e7ad6b: lea    rdx,[rbp-0x78]
0x00e7ad6f: lea    rcx,[rdi+0x168]
0x00e7ad76: call   0x14006f1d0
0x00e7ad7b: lea    rdx,[rbp-0x18]
0x00e7ad7f: lea    rcx,[rdi+0x168]
0x00e7ad86: call   0x14006f1c0
0x00e7ad8b: lea    rdx,[rbp-0x50]
0x00e7ad8f: lea    rcx,[rdi+0x180]
0x00e7ad96: call   0x14006f1d0
0x00e7ad9b: lea    rdx,[rbp-0x20]
0x00e7ad9f: lea    rcx,[rdi+0x180]
0x00e7ada6: call   0x14006f1c0
0x00e7adab: lea    rdx,[rbp-0x58]
0x00e7adaf: lea    rcx,[rdi+0x198]
0x00e7adb6: call   0x14006f1d0
0x00e7adbb: lea    rdx,[rbp-0x28]
0x00e7adbf: lea    rcx,[rdi+0x198]
0x00e7adc6: call   0x14006f1c0
0x00e7adcb: lea    r8,[rbp-0x60]
0x00e7adcf: lea    rdx,[rsp+0x54]
0x00e7add4: lea    rcx,[rsp+0x68]
0x00e7add9: call   0x14006edb0
0x00e7adde: xor    edx,edx
0x00e7ade0: movzx  ecx,BYTE PTR [rax]
0x00e7ade3: call   0x140065740
0x00e7ade8: test   al,al
0x00e7adea: je     0x140e7aeb9
0x00e7adf0: mov    edi,DWORD PTR [rsp+0x60]
0x00e7adf4: lea    rcx,[rsp+0x68]
0x00e7adf9: call   0x14006eda0
0x00e7adfe: cmp    WORD PTR [rax],di
0x00e7ae01: jne    0x140e7ae5d
0x00e7ae03: lea    rcx,[rbp-0x40]
0x00e7ae07: call   0x14006eda0
0x00e7ae0c: mov    ecx,DWORD PTR [rsp+0x5c]
0x00e7ae10: cmp    WORD PTR [rax],cx
0x00e7ae13: jne    0x140e7ae5d
0x00e7ae15: lea    rcx,[rbp-0x70]
0x00e7ae19: call   0x14006eda0
0x00e7ae1e: movzx  ecx,WORD PTR [rsp+0x50]
0x00e7ae23: cmp    WORD PTR [rax],cx
0x00e7ae26: jne    0x140e7ae5d
0x00e7ae28: lea    rcx,[rbp-0x78]
0x00e7ae2c: call   0x14006eda0
0x00e7ae31: cmp    DWORD PTR [rax],r12d
0x00e7ae34: jne    0x140e7ae5d
0x00e7ae36: lea    rcx,[rbp-0x50]
0x00e7ae3a: call   0x14006eda0
0x00e7ae3f: mov    ecx,DWORD PTR [r13+0x148]
0x00e7ae46: cmp    DWORD PTR [rax],ecx
0x00e7ae48: jl     0x140e7ae5d
0x00e7ae4a: lea    rcx,[rbp-0x58]
0x00e7ae4e: call   0x14006eda0
0x00e7ae53: mov    ecx,DWORD PTR [rip+0x14f37ab]        # 0x14236e604
0x00e7ae59: cmp    DWORD PTR [rax],ecx
0x00e7ae5b: je     0x140e7aed4
0x00e7ae5d: lea    rcx,[rsp+0x68]
0x00e7ae62: call   0x14006f3c0
0x00e7ae67: lea    rcx,[rbp-0x40]
0x00e7ae6b: call   0x14006f3c0
0x00e7ae70: lea    rcx,[rbp-0x70]
0x00e7ae74: call   0x14006f3c0
0x00e7ae79: lea    rcx,[rbp-0x78]
0x00e7ae7d: call   0x14006f2e0
0x00e7ae82: lea    rcx,[rbp-0x50]
0x00e7ae86: call   0x14006f2e0
0x00e7ae8b: lea    rcx,[rbp-0x58]
0x00e7ae8f: call   0x14006f2e0
0x00e7ae94: lea    r8,[rbp-0x60]
0x00e7ae98: lea    rdx,[rsp+0x54]
0x00e7ae9d: lea    rcx,[rsp+0x68]
0x00e7aea2: call   0x14006edb0
0x00e7aea7: xor    edx,edx
0x00e7aea9: movzx  ecx,BYTE PTR [rax]
0x00e7aeac: call   0x140065740
0x00e7aeb1: test   al,al
0x00e7aeb3: jne    0x140e7adf4
0x00e7aeb9: lea    rdx,[rip+0x769204]        # 0x1415e40c4 ; literal=", "
0x00e7aec0: mov    rcx,rbx
0x00e7aec3: call   0x14006f4f0
0x00e7aec8: lea    rdx,[r13+0x40]
0x00e7aecc: mov    rcx,rbx
0x00e7aecf: call   0x1400b9ca0
0x00e7aed4: lea    rcx,[rsp+0x70]
0x00e7aed9: call   0x14006ed90
0x00e7aede: inc    r12d
0x00e7aee1: lea    r8,[rbp-0x68]
0x00e7aee5: lea    rdx,[rsp+0x58]
0x00e7aeea: lea    rcx,[rsp+0x70]
0x00e7aeef: call   0x14006edb0
0x00e7aef4: xor    edx,edx
0x00e7aef6: movzx  ecx,BYTE PTR [rax]
0x00e7aef9: call   0x140065740
0x00e7aefe: test   al,al
0x00e7af00: jne    0x140e7ac00
0x00e7af06: lea    rcx,[rbp+0x20]
0x00e7af0a: call   0x140067dc0
0x00e7af0f: jmp    0x140e7e444
0x00e7af14: lea    rdx,[rip+0x8b0da5]        # 0x14172bcc0 ; literal="Shrub"
0x00e7af1b: mov    rcx,rbx
0x00e7af1e: call   0x14006f4f0
0x00e7af23: jmp    0x140e7e444
0x00e7af28: lea    rdx,[rip+0x8b0d99]        # 0x14172bcc8 ; literal="Furrowed "
0x00e7af2f: mov    rcx,rbx
0x00e7af32: call   0x14006f4f0
0x00e7af37: lea    rax,[rbp-0x38]
0x00e7af3b: mov    QWORD PTR [rsp+0x40],rax
0x00e7af40: lea    rax,[rbp-0x2c]
0x00e7af44: mov    QWORD PTR [rsp+0x38],rax
0x00e7af49: lea    rax,[rbp-0x48]
0x00e7af4d: mov    QWORD PTR [rsp+0x30],rax
0x00e7af52: lea    rax,[rbp-0x34]
0x00e7af56: mov    QWORD PTR [rsp+0x28],rax
0x00e7af5b: lea    rax,[rbp-0x30]
0x00e7af5f: mov    QWORD PTR [rsp+0x20],rax
0x00e7af64: movzx  r9d,r15w
0x00e7af68: movzx  r8d,r14w
0x00e7af6c: movzx  edx,si
0x00e7af6f: mov    rcx,rdi
0x00e7af72: call   0x1414cbbe0
0x00e7af77: movzx  eax,WORD PTR [rbp-0x38]
0x00e7af7b: mov    WORD PTR [rsp+0x30],ax
0x00e7af80: mov    BYTE PTR [rsp+0x28],r12b
0x00e7af85: mov    DWORD PTR [rsp+0x20],r12d
0x00e7af8a: mov    r9d,DWORD PTR [rbp-0x2c]
0x00e7af8e: movzx  r8d,WORD PTR [rbp-0x48]
0x00e7af93: lea    rdx,[rbp+0x0]
0x00e7af97: mov    rcx,rdi
0x00e7af9a: call   0x1414cc890
0x00e7af9f: lea    rdx,[rbp+0x0]
0x00e7afa3: mov    rcx,rbx
0x00e7afa6: call   0x1400b9ca0
0x00e7afab: jmp    0x140e7e444
0x00e7afb0: mov    r8d,0x5
0x00e7afb6: lea    rdx,[rip+0x8b0d17]        # 0x14172bcd4 ; literal="Ashes"
0x00e7afbd: jmp    0x140e7e43b
0x00e7afc2: lea    rdx,[rip+0x8b0caf]        # 0x14172bc78 ; literal="Waterfall"
0x00e7afc9: mov    rcx,rbx
0x00e7afcc: call   0x14006f4f0
0x00e7afd1: jmp    0x140e7e444
0x00e7afd6: lea    rdx,[rip+0x8b0cab]        # 0x14172bc88 ; literal="River Source"
0x00e7afdd: mov    rcx,rbx
0x00e7afe0: call   0x14006f4f0
0x00e7afe5: jmp    0x140e7e444
0x00e7afea: lea    rdx,[rip+0x8b0ca7]        # 0x14172bc98 ; literal="Chasm"
0x00e7aff1: mov    rcx,rbx
0x00e7aff4: call   0x14006f4f0
0x00e7aff9: jmp    0x140e7e444
0x00e7affe: lea    rdx,[rip+0x8b0c9b]        # 0x14172bca0 ; literal="Eerie Glowing Pit"
0x00e7b005: mov    rcx,rbx
0x00e7b008: call   0x14006f4f0
0x00e7b00d: jmp    0x140e7e444
0x00e7b012: lea    rdx,[rip+0x8a0aeb]        # 0x14171bb04 ; literal="Ice"
0x00e7b019: mov    rcx,rbx
0x00e7b01c: call   0x14006f4f0
0x00e7b021: jmp    0x140e7e444
0x00e7b026: lea    rdx,[rip+0x8b0cfb]        # 0x14172bd28 ; literal="Glowing Floor"
0x00e7b02d: mov    rcx,rbx
0x00e7b030: call   0x14006f4f0
0x00e7b035: jmp    0x140e7e444
0x00e7b03a: lea    rdx,[rip+0x8b0cf7]        # 0x14172bd38 ; literal="Glowing Barrier"
0x00e7b041: mov    rcx,rbx
0x00e7b044: call   0x14006f4f0
0x00e7b049: jmp    0x140e7e444
0x00e7b04e: lea    rdx,[rip+0x8b0cf3]        # 0x14172bd48 ; literal="Semi-molten Rock"
0x00e7b055: mov    rcx,rbx
0x00e7b058: call   0x14006f4f0
0x00e7b05d: jmp    0x140e7e444
0x00e7b062: movzx  r9d,r15w
0x00e7b066: movzx  r8d,r14w
0x00e7b06a: movzx  edx,si
0x00e7b06d: mov    rcx,rdi
0x00e7b070: call   0x14007dbd0
0x00e7b075: mov    rcx,rbx
0x00e7b078: bt     eax,0xf
0x00e7b07c: jb     0x140e7b08f
0x00e7b07e: lea    rdx,[rip+0x8b0cdb]        # 0x14172bd60 ; literal="Lava Flow"
0x00e7b085: call   0x14006f4f0
0x00e7b08a: jmp    0x140e7e444
0x00e7b08f: lea    rdx,[rip+0x8b0c4a]        # 0x14172bce0 ; literal="Magma Flow"
0x00e7b096: call   0x14006f4f0
0x00e7b09b: jmp    0x140e7e444
0x00e7b0a0: lea    rdx,[rip+0x8b0c49]        # 0x14172bcf0 ; literal="Murky Pool"
0x00e7b0a7: mov    rcx,rbx
0x00e7b0aa: call   0x14006f4f0
0x00e7b0af: jmp    0x140e7e444
0x00e7b0b4: movzx  r9d,r15w
0x00e7b0b8: movzx  r8d,r14w
0x00e7b0bc: movzx  edx,si
0x00e7b0bf: mov    rcx,rdi
0x00e7b0c2: call   0x140e77e40
0x00e7b0c7: test   al,al
0x00e7b0c9: jne    0x140e7b0da
0x00e7b0cb: lea    rdx,[rip+0x8b0c2e]        # 0x14172bd00 ; literal="Unusable "
0x00e7b0d2: mov    rcx,rbx
0x00e7b0d5: call   0x14006f4f0
0x00e7b0da: lea    rdx,[rip+0x8b0c2f]        # 0x14172bd10 ; literal="Murky Pool Slope"
0x00e7b0e1: mov    rcx,rbx
0x00e7b0e4: call   0x14006f4f0
0x00e7b0e9: jmp    0x140e7e444
0x00e7b0ee: mov    r8d,0x5
0x00e7b0f4: lea    rdx,[rip+0x8b0cd9]        # 0x14172bdd4 ; literal="River"
0x00e7b0fb: jmp    0x140e7e43b
0x00e7b100: mov    r8d,0x5
0x00e7b106: lea    rdx,[rip+0x8b0ccf]        # 0x14172bddc ; literal="Brook"
0x00e7b10d: jmp    0x140e7e43b
0x00e7b112: movzx  r9d,r15w
0x00e7b116: movzx  r8d,r14w
0x00e7b11a: movzx  edx,si
0x00e7b11d: mov    rcx,rdi
0x00e7b120: call   0x1414cc2a0
0x00e7b125: mov    r15,rax
0x00e7b128: test   rax,rax
0x00e7b12b: je     0x140e7b1c4
0x00e7b131: lea    rcx,[rdi+0x11b408]
0x00e7b138: mov    edx,DWORD PTR [rax+0x8]
0x00e7b13b: call   0x14014d7e0
0x00e7b140: mov    rdi,rax
0x00e7b143: test   rax,rax
0x00e7b146: je     0x140e7b1c4
0x00e7b148: mov    edx,esi
0x00e7b14a: and    edx,0x8000000f
0x00e7b150: jge    0x140e7b159
0x00e7b152: dec    edx
0x00e7b154: or     edx,0xfffffff0
0x00e7b157: inc    edx
0x00e7b159: mov    ecx,r14d
0x00e7b15c: and    ecx,0x8000000f
0x00e7b162: jge    0x140e7b16b
0x00e7b164: dec    ecx
0x00e7b166: or     ecx,0xfffffff0
0x00e7b169: inc    ecx
0x00e7b16b: movsx  rax,dx
0x00e7b16f: shl    rax,0x4
0x00e7b173: movsx  rcx,cx
0x00e7b177: add    rax,r15
0x00e7b17a: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e7b17f: cmp    dl,0x43
0x00e7b182: jb     0x140e7b18d
0x00e7b184: lea    rdx,[rip+0x8b1101]        # 0x14172c28c ; literal="Dense "
0x00e7b18b: jmp    0x140e7b199
0x00e7b18d: cmp    dl,0x21
0x00e7b190: ja     0x140e7b1a1
0x00e7b192: lea    rdx,[rip+0x8b10ff]        # 0x14172c298 ; literal="Sparse "
0x00e7b199: mov    rcx,rbx
0x00e7b19c: call   0x14006f4f0
0x00e7b1a1: lea    rdx,[rdi+0x90]
0x00e7b1a8: mov    rcx,rbx
0x00e7b1ab: call   0x1400b9ca0
0x00e7b1b0: lea    rdx,[rip+0x8b0c31]        # 0x14172bde8 ; literal=" Upward Stairway"
0x00e7b1b7: mov    rcx,rbx
0x00e7b1ba: call   0x14006f4f0
0x00e7b1bf: jmp    0x140e7e444
0x00e7b1c4: lea    rdx,[rip+0x8b0c35]        # 0x14172be00 ; literal="Grassy Upward Stairway"
0x00e7b1cb: mov    rcx,rbx
0x00e7b1ce: call   0x14006f4f0
0x00e7b1d3: jmp    0x140e7e444
0x00e7b1d8: movzx  r9d,r15w
0x00e7b1dc: movzx  r8d,r14w
0x00e7b1e0: movzx  edx,si
0x00e7b1e3: mov    rcx,rdi
0x00e7b1e6: call   0x1414cc2a0
0x00e7b1eb: mov    r15,rax
0x00e7b1ee: test   rax,rax
0x00e7b1f1: je     0x140e7b28a
0x00e7b1f7: lea    rcx,[rdi+0x11b408]
0x00e7b1fe: mov    edx,DWORD PTR [rax+0x8]
0x00e7b201: call   0x14014d7e0
0x00e7b206: mov    rdi,rax
0x00e7b209: test   rax,rax
0x00e7b20c: je     0x140e7b28a
0x00e7b20e: mov    edx,esi
0x00e7b210: and    edx,0x8000000f
0x00e7b216: jge    0x140e7b21f
0x00e7b218: dec    edx
0x00e7b21a: or     edx,0xfffffff0
0x00e7b21d: inc    edx
0x00e7b21f: mov    ecx,r14d
0x00e7b222: and    ecx,0x8000000f
0x00e7b228: jge    0x140e7b231
0x00e7b22a: dec    ecx
0x00e7b22c: or     ecx,0xfffffff0
0x00e7b22f: inc    ecx
0x00e7b231: movsx  rax,dx
0x00e7b235: shl    rax,0x4
0x00e7b239: movsx  rcx,cx
0x00e7b23d: add    rax,r15
0x00e7b240: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e7b245: cmp    dl,0x43
0x00e7b248: jb     0x140e7b253
0x00e7b24a: lea    rdx,[rip+0x8b103b]        # 0x14172c28c ; literal="Dense "
0x00e7b251: jmp    0x140e7b25f
0x00e7b253: cmp    dl,0x21
0x00e7b256: ja     0x140e7b267
0x00e7b258: lea    rdx,[rip+0x8b1039]        # 0x14172c298 ; literal="Sparse "
0x00e7b25f: mov    rcx,rbx
0x00e7b262: call   0x14006f4f0
0x00e7b267: lea    rdx,[rdi+0x90]
0x00e7b26e: mov    rcx,rbx
0x00e7b271: call   0x1400b9ca0
0x00e7b276: lea    rdx,[rip+0x8b0af3]        # 0x14172bd70 ; literal=" Up/Down Stairway"
0x00e7b27d: mov    rcx,rbx
0x00e7b280: call   0x14006f4f0
0x00e7b285: jmp    0x140e7e444
0x00e7b28a: lea    rdx,[rip+0x8b0af7]        # 0x14172bd88 ; literal="Grassy Up/Down Stairway"
0x00e7b291: mov    rcx,rbx
0x00e7b294: call   0x14006f4f0
0x00e7b299: jmp    0x140e7e444
0x00e7b29e: movzx  r9d,r15w
0x00e7b2a2: movzx  r8d,r14w
0x00e7b2a6: movzx  edx,si
0x00e7b2a9: mov    rcx,rdi
0x00e7b2ac: call   0x1414cc2a0
0x00e7b2b1: mov    r15,rax
0x00e7b2b4: test   rax,rax
0x00e7b2b7: je     0x140e7b350
0x00e7b2bd: lea    rcx,[rdi+0x11b408]
0x00e7b2c4: mov    edx,DWORD PTR [rax+0x8]
0x00e7b2c7: call   0x14014d7e0
0x00e7b2cc: mov    rdi,rax
0x00e7b2cf: test   rax,rax
0x00e7b2d2: je     0x140e7b350
0x00e7b2d4: mov    edx,esi
0x00e7b2d6: and    edx,0x8000000f
0x00e7b2dc: jge    0x140e7b2e5
0x00e7b2de: dec    edx
0x00e7b2e0: or     edx,0xfffffff0
0x00e7b2e3: inc    edx
0x00e7b2e5: mov    ecx,r14d
0x00e7b2e8: and    ecx,0x8000000f
0x00e7b2ee: jge    0x140e7b2f7
0x00e7b2f0: dec    ecx
0x00e7b2f2: or     ecx,0xfffffff0
0x00e7b2f5: inc    ecx
0x00e7b2f7: movsx  rax,dx
0x00e7b2fb: shl    rax,0x4
0x00e7b2ff: movsx  rcx,cx
0x00e7b303: add    rax,r15
0x00e7b306: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e7b30b: cmp    dl,0x43
0x00e7b30e: jb     0x140e7b319
0x00e7b310: lea    rdx,[rip+0x8b0f75]        # 0x14172c28c ; literal="Dense "
0x00e7b317: jmp    0x140e7b325
0x00e7b319: cmp    dl,0x21
0x00e7b31c: ja     0x140e7b32d
0x00e7b31e: lea    rdx,[rip+0x8b0f73]        # 0x14172c298 ; literal="Sparse "
0x00e7b325: mov    rcx,rbx
0x00e7b328: call   0x14006f4f0
0x00e7b32d: lea    rdx,[rdi+0x90]
0x00e7b334: mov    rcx,rbx
0x00e7b337: call   0x1400b9ca0
0x00e7b33c: lea    rdx,[rip+0x8b0a5d]        # 0x14172bda0 ; literal=" Downward Stairway"
0x00e7b343: mov    rcx,rbx
0x00e7b346: call   0x14006f4f0
0x00e7b34b: jmp    0x140e7e444
0x00e7b350: lea    rdx,[rip+0x8b0a61]        # 0x14172bdb8 ; literal="Grassy Downward Stairway"
0x00e7b357: mov    rcx,rbx
0x00e7b35a: call   0x14006f4f0
0x00e7b35f: jmp    0x140e7e444
0x00e7b364: lea    rdx,[rip+0x8b0f95]        # 0x14172c300 ; literal="Shoddy "
0x00e7b36b: mov    rcx,rbx
0x00e7b36e: call   0x14006f4f0
0x00e7b373: mov    BYTE PTR [rsp+0x28],0x1
0x00e7b378: mov    QWORD PTR [rsp+0x20],rbx
0x00e7b37d: movzx  r9d,r15w
0x00e7b381: movzx  r8d,r14w
0x00e7b385: movzx  edx,si
0x00e7b388: mov    rcx,rdi
0x00e7b38b: call   0x140a44750
0x00e7b390: lea    rdx,[rip+0x8b09d9]        # 0x14172bd70 ; literal=" Up/Down Stairway"
0x00e7b397: mov    rcx,rbx
0x00e7b39a: call   0x14006f4f0
0x00e7b39f: jmp    0x140e7e444
0x00e7b3a4: lea    rax,[rsp+0x50]
0x00e7b3a9: mov    QWORD PTR [rsp+0x40],rax
0x00e7b3ae: lea    rax,[rsp+0x60]
0x00e7b3b3: mov    QWORD PTR [rsp+0x38],rax
0x00e7b3b8: lea    rax,[rsp+0x54]
0x00e7b3bd: mov    QWORD PTR [rsp+0x30],rax
0x00e7b3c2: lea    rax,[rsp+0x5c]
0x00e7b3c7: mov    QWORD PTR [rsp+0x28],rax
0x00e7b3cc: lea    rax,[rsp+0x58]
0x00e7b3d1: mov    QWORD PTR [rsp+0x20],rax
0x00e7b3d6: movzx  r9d,r15w
0x00e7b3da: movzx  r8d,r14w
0x00e7b3de: movzx  edx,si
0x00e7b3e1: mov    rcx,rdi
0x00e7b3e4: call   0x1414cbbe0
0x00e7b3e9: movzx  eax,WORD PTR [rsp+0x50]
0x00e7b3ee: mov    WORD PTR [rsp+0x30],ax
0x00e7b3f3: mov    BYTE PTR [rsp+0x28],r12b
0x00e7b3f8: mov    DWORD PTR [rsp+0x20],r12d
0x00e7b3fd: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7b402: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7b408: lea    rdx,[rbp+0x0]
0x00e7b40c: mov    rcx,rdi
0x00e7b40f: call   0x1414cc890
0x00e7b414: lea    rdx,[rbp+0x0]
0x00e7b418: jmp    0x140e7b26e
0x00e7b41d: lea    rdx,[rip+0x8b0edc]        # 0x14172c300 ; literal="Shoddy "
0x00e7b424: mov    rcx,rbx
0x00e7b427: call   0x14006f4f0
0x00e7b42c: mov    BYTE PTR [rsp+0x28],0x1
0x00e7b431: mov    QWORD PTR [rsp+0x20],rbx
0x00e7b436: movzx  r9d,r15w
0x00e7b43a: movzx  r8d,r14w
0x00e7b43e: movzx  edx,si
0x00e7b441: mov    rcx,rdi
0x00e7b444: call   0x140a44750
0x00e7b449: lea    rdx,[rip+0x8b0950]        # 0x14172bda0 ; literal=" Downward Stairway"
0x00e7b450: mov    rcx,rbx
0x00e7b453: call   0x14006f4f0
0x00e7b458: jmp    0x140e7e444
0x00e7b45d: lea    rax,[rsp+0x50]
0x00e7b462: mov    QWORD PTR [rsp+0x40],rax
0x00e7b467: lea    rax,[rsp+0x60]
0x00e7b46c: mov    QWORD PTR [rsp+0x38],rax
0x00e7b471: lea    rax,[rsp+0x54]
0x00e7b476: mov    QWORD PTR [rsp+0x30],rax
0x00e7b47b: lea    rax,[rsp+0x5c]
0x00e7b480: mov    QWORD PTR [rsp+0x28],rax
0x00e7b485: lea    rax,[rsp+0x58]
0x00e7b48a: mov    QWORD PTR [rsp+0x20],rax
0x00e7b48f: movzx  r9d,r15w
0x00e7b493: movzx  r8d,r14w
0x00e7b497: movzx  edx,si
0x00e7b49a: mov    rcx,rdi
0x00e7b49d: call   0x1414cbbe0
0x00e7b4a2: movzx  eax,WORD PTR [rsp+0x50]
0x00e7b4a7: mov    WORD PTR [rsp+0x30],ax
0x00e7b4ac: mov    BYTE PTR [rsp+0x28],r12b
0x00e7b4b1: mov    DWORD PTR [rsp+0x20],r12d
0x00e7b4b6: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7b4bb: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7b4c1: lea    rdx,[rbp+0x0]
0x00e7b4c5: mov    rcx,rdi
0x00e7b4c8: call   0x1414cc890
0x00e7b4cd: lea    rdx,[rbp+0x0]
0x00e7b4d1: mov    rcx,rbx
0x00e7b4d4: call   0x1400b9ca0
0x00e7b4d9: lea    rdx,[rip+0x8b08c0]        # 0x14172bda0 ; literal=" Downward Stairway"
0x00e7b4e0: mov    rcx,rbx
0x00e7b4e3: call   0x14006f4f0
0x00e7b4e8: jmp    0x140e7e444
0x00e7b4ed: lea    rdx,[rip+0x8b0e0c]        # 0x14172c300 ; literal="Shoddy "
0x00e7b4f4: mov    rcx,rbx
0x00e7b4f7: call   0x14006f4f0
0x00e7b4fc: mov    BYTE PTR [rsp+0x28],0x1
0x00e7b501: mov    QWORD PTR [rsp+0x20],rbx
0x00e7b506: movzx  r9d,r15w
0x00e7b50a: movzx  r8d,r14w
0x00e7b50e: movzx  edx,si
0x00e7b511: mov    rcx,rdi
0x00e7b514: call   0x140a44750
0x00e7b519: lea    rdx,[rip+0x8b08c8]        # 0x14172bde8 ; literal=" Upward Stairway"
0x00e7b520: mov    rcx,rbx
0x00e7b523: call   0x14006f4f0
0x00e7b528: jmp    0x140e7e444
0x00e7b52d: lea    rdx,[rip+0x8b093c]        # 0x14172be70 ; literal="Underworld Gate"
0x00e7b534: mov    rcx,rbx
0x00e7b537: call   0x14006f4f0
0x00e7b53c: jmp    0x140e7e444
0x00e7b541: lea    rax,[rsp+0x50]
0x00e7b546: mov    QWORD PTR [rsp+0x40],rax
0x00e7b54b: lea    rax,[rsp+0x60]
0x00e7b550: mov    QWORD PTR [rsp+0x38],rax
0x00e7b555: lea    rax,[rsp+0x54]
0x00e7b55a: mov    QWORD PTR [rsp+0x30],rax
0x00e7b55f: lea    rax,[rsp+0x5c]
0x00e7b564: mov    QWORD PTR [rsp+0x28],rax
0x00e7b569: lea    rax,[rsp+0x58]
0x00e7b56e: mov    QWORD PTR [rsp+0x20],rax
0x00e7b573: movzx  r9d,r15w
0x00e7b577: movzx  r8d,r14w
0x00e7b57b: movzx  edx,si
0x00e7b57e: mov    rcx,rdi
0x00e7b581: call   0x1414cbbe0
0x00e7b586: movzx  eax,WORD PTR [rsp+0x50]
0x00e7b58b: mov    WORD PTR [rsp+0x30],ax
0x00e7b590: mov    BYTE PTR [rsp+0x28],r12b
0x00e7b595: mov    DWORD PTR [rsp+0x20],r12d
0x00e7b59a: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7b59f: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7b5a5: lea    rdx,[rbp+0x0]
0x00e7b5a9: mov    rcx,rdi
0x00e7b5ac: call   0x1414cc890
0x00e7b5b1: lea    rdx,[rbp+0x0]
0x00e7b5b5: jmp    0x140e7b1a8
0x00e7b5ba: lea    rdx,[rip+0x8b08bf]        # 0x14172be80 ; literal="Ice Up/Down Stairway"
0x00e7b5c1: mov    rcx,rbx
0x00e7b5c4: call   0x14006f4f0
0x00e7b5c9: jmp    0x140e7e444
0x00e7b5ce: lea    rdx,[rip+0x8b08c3]        # 0x14172be98 ; literal="Ice Downward Stairway"
0x00e7b5d5: mov    rcx,rbx
0x00e7b5d8: call   0x14006f4f0
0x00e7b5dd: jmp    0x140e7e444
0x00e7b5e2: lea    rdx,[rip+0x8b08c7]        # 0x14172beb0 ; literal="Ice Upward Stairway"
0x00e7b5e9: mov    rcx,rbx
0x00e7b5ec: call   0x14006f4f0
0x00e7b5f1: jmp    0x140e7e444
0x00e7b5f6: movzx  r9d,r15w
0x00e7b5fa: movzx  r8d,r14w
0x00e7b5fe: movzx  edx,si
0x00e7b601: mov    rcx,rdi
0x00e7b604: call   0x140e77e40
0x00e7b609: test   al,al
0x00e7b60b: jne    0x140e7b61c
0x00e7b60d: lea    rdx,[rip+0x8b06ec]        # 0x14172bd00 ; literal="Unusable "
0x00e7b614: mov    rcx,rbx
0x00e7b617: call   0x14006f4f0
0x00e7b61c: movzx  r9d,r15w
0x00e7b620: movzx  r8d,r14w
0x00e7b624: movzx  edx,si
0x00e7b627: mov    rcx,rdi
0x00e7b62a: call   0x1414cc2a0
0x00e7b62f: mov    r15,rax
0x00e7b632: test   rax,rax
0x00e7b635: je     0x140e7b6ce
0x00e7b63b: lea    rcx,[rdi+0x11b408]
0x00e7b642: mov    edx,DWORD PTR [rax+0x8]
0x00e7b645: call   0x14014d7e0
0x00e7b64a: mov    rdi,rax
0x00e7b64d: test   rax,rax
0x00e7b650: je     0x140e7b6ce
0x00e7b652: mov    edx,esi
0x00e7b654: and    edx,0x8000000f
0x00e7b65a: jge    0x140e7b663
0x00e7b65c: dec    edx
0x00e7b65e: or     edx,0xfffffff0
0x00e7b661: inc    edx
0x00e7b663: mov    ecx,r14d
0x00e7b666: and    ecx,0x8000000f
0x00e7b66c: jge    0x140e7b675
0x00e7b66e: dec    ecx
0x00e7b670: or     ecx,0xfffffff0
0x00e7b673: inc    ecx
0x00e7b675: movsx  rax,dx
0x00e7b679: shl    rax,0x4
0x00e7b67d: movsx  rcx,cx
0x00e7b681: add    rax,r15
0x00e7b684: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e7b689: cmp    dl,0x43
0x00e7b68c: jb     0x140e7b697
0x00e7b68e: lea    rdx,[rip+0x8b0bf7]        # 0x14172c28c ; literal="Dense "
0x00e7b695: jmp    0x140e7b6a3
0x00e7b697: cmp    dl,0x21
0x00e7b69a: ja     0x140e7b6ab
0x00e7b69c: lea    rdx,[rip+0x8b0bf5]        # 0x14172c298 ; literal="Sparse "
0x00e7b6a3: mov    rcx,rbx
0x00e7b6a6: call   0x14006f4f0
0x00e7b6ab: lea    rdx,[rdi+0x90]
0x00e7b6b2: mov    rcx,rbx
0x00e7b6b5: call   0x1400b9ca0
0x00e7b6ba: lea    rdx,[rip+0x8b0757]        # 0x14172be18 ; literal=" Upward Slope"
0x00e7b6c1: mov    rcx,rbx
0x00e7b6c4: call   0x14006f4f0
0x00e7b6c9: jmp    0x140e7e444
0x00e7b6ce: lea    rdx,[rip+0x8b0753]        # 0x14172be28 ; literal="Grassy Upward Slope"
0x00e7b6d5: mov    rcx,rbx
0x00e7b6d8: call   0x14006f4f0
0x00e7b6dd: jmp    0x140e7e444
0x00e7b6e2: movzx  r9d,r15w
0x00e7b6e6: movzx  r8d,r14w
0x00e7b6ea: movzx  edx,si
0x00e7b6ed: mov    rcx,rdi
0x00e7b6f0: call   0x140e77e40
0x00e7b6f5: test   al,al
0x00e7b6f7: jne    0x140e7b708
0x00e7b6f9: lea    rdx,[rip+0x8b0600]        # 0x14172bd00 ; literal="Unusable "
0x00e7b700: mov    rcx,rbx
0x00e7b703: call   0x14006f4f0
0x00e7b708: movzx  r9d,r15w
0x00e7b70c: movzx  r8d,r14w
0x00e7b710: movzx  edx,si
0x00e7b713: mov    rcx,rdi
0x00e7b716: call   0x1414cc2a0
0x00e7b71b: mov    r15,rax
0x00e7b71e: test   rax,rax
0x00e7b721: je     0x140e7b7b5
0x00e7b727: lea    rcx,[rdi+0x11b408]
0x00e7b72e: mov    edx,DWORD PTR [rax+0x8]
0x00e7b731: call   0x14014d7e0
0x00e7b736: mov    rdi,rax
0x00e7b739: test   rax,rax
0x00e7b73c: je     0x140e7b7b5
0x00e7b73e: mov    edx,esi
0x00e7b740: and    edx,0x8000000f
0x00e7b746: jge    0x140e7b74f
0x00e7b748: dec    edx
0x00e7b74a: or     edx,0xfffffff0
0x00e7b74d: inc    edx
0x00e7b74f: mov    ecx,r14d
0x00e7b752: and    ecx,0x8000000f
0x00e7b758: jge    0x140e7b761
0x00e7b75a: dec    ecx
0x00e7b75c: or     ecx,0xfffffff0
0x00e7b75f: inc    ecx
0x00e7b761: movsx  rax,dx
0x00e7b765: shl    rax,0x4
0x00e7b769: movsx  rcx,cx
0x00e7b76d: add    rax,r15
0x00e7b770: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e7b775: cmp    dl,0x43
0x00e7b778: jb     0x140e7b795
0x00e7b77a: lea    rdx,[rip+0x8b0b0b]        # 0x14172c28c ; literal="Dense "
0x00e7b781: mov    rcx,rbx
0x00e7b784: call   0x14006f4f0
0x00e7b789: lea    rdx,[rip+0x8b0ac4]        # 0x14172c254 ; literal="Dry "
0x00e7b790: jmp    0x140e7b6a3
0x00e7b795: cmp    dl,0x21
0x00e7b798: ja     0x140e7b7a9
0x00e7b79a: lea    rdx,[rip+0x8b0af7]        # 0x14172c298 ; literal="Sparse "
0x00e7b7a1: mov    rcx,rbx
0x00e7b7a4: call   0x14006f4f0
0x00e7b7a9: lea    rdx,[rip+0x8b0aa4]        # 0x14172c254 ; literal="Dry "
0x00e7b7b0: jmp    0x140e7b6a3
0x00e7b7b5: lea    rdx,[rip+0x8b0684]        # 0x14172be40 ; literal="Dry Grass Upward Slope"
0x00e7b7bc: mov    rcx,rbx
0x00e7b7bf: call   0x14006f4f0
0x00e7b7c4: jmp    0x140e7e444
0x00e7b7c9: movzx  r9d,r15w
0x00e7b7cd: movzx  r8d,r14w
0x00e7b7d1: movzx  edx,si
0x00e7b7d4: mov    rcx,rdi
0x00e7b7d7: call   0x140e77e40
0x00e7b7dc: test   al,al
0x00e7b7de: jne    0x140e7b7ef
0x00e7b7e0: lea    rdx,[rip+0x8b0519]        # 0x14172bd00 ; literal="Unusable "
0x00e7b7e7: mov    rcx,rbx
0x00e7b7ea: call   0x14006f4f0
0x00e7b7ef: movzx  r9d,r15w
0x00e7b7f3: movzx  r8d,r14w
0x00e7b7f7: movzx  edx,si
0x00e7b7fa: mov    rcx,rdi
0x00e7b7fd: call   0x1414cc2a0
0x00e7b802: mov    r15,rax
0x00e7b805: test   rax,rax
0x00e7b808: je     0x140e7b89c
0x00e7b80e: lea    rcx,[rdi+0x11b408]
0x00e7b815: mov    edx,DWORD PTR [rax+0x8]
0x00e7b818: call   0x14014d7e0
0x00e7b81d: mov    rdi,rax
0x00e7b820: test   rax,rax
0x00e7b823: je     0x140e7b89c
0x00e7b825: mov    edx,esi
0x00e7b827: and    edx,0x8000000f
0x00e7b82d: jge    0x140e7b836
0x00e7b82f: dec    edx
0x00e7b831: or     edx,0xfffffff0
0x00e7b834: inc    edx
0x00e7b836: mov    ecx,r14d
0x00e7b839: and    ecx,0x8000000f
0x00e7b83f: jge    0x140e7b848
0x00e7b841: dec    ecx
0x00e7b843: or     ecx,0xfffffff0
0x00e7b846: inc    ecx
0x00e7b848: movsx  rax,dx
0x00e7b84c: shl    rax,0x4
0x00e7b850: movsx  rcx,cx
0x00e7b854: add    rax,r15
0x00e7b857: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e7b85c: cmp    dl,0x43
0x00e7b85f: jb     0x140e7b87c
0x00e7b861: lea    rdx,[rip+0x8b0a24]        # 0x14172c28c ; literal="Dense "
0x00e7b868: mov    rcx,rbx
0x00e7b86b: call   0x14006f4f0
0x00e7b870: lea    rdx,[rip+0x8b0a0d]        # 0x14172c284 ; literal="Dead "
0x00e7b877: jmp    0x140e7b6a3
0x00e7b87c: cmp    dl,0x21
0x00e7b87f: ja     0x140e7b890
0x00e7b881: lea    rdx,[rip+0x8b0a10]        # 0x14172c298 ; literal="Sparse "
0x00e7b888: mov    rcx,rbx
0x00e7b88b: call   0x14006f4f0
0x00e7b890: lea    rdx,[rip+0x8b09ed]        # 0x14172c284 ; literal="Dead "
0x00e7b897: jmp    0x140e7b6a3
0x00e7b89c: lea    rdx,[rip+0x8b05b5]        # 0x14172be58 ; literal="Dead Grass Upward Slope"
0x00e7b8a3: mov    rcx,rbx
0x00e7b8a6: call   0x14006f4f0
0x00e7b8ab: jmp    0x140e7e444
0x00e7b8b0: movzx  r9d,r15w
0x00e7b8b4: movzx  r8d,r14w
0x00e7b8b8: movzx  edx,si
0x00e7b8bb: mov    rcx,rdi
0x00e7b8be: call   0x140e77e40
0x00e7b8c3: test   al,al
0x00e7b8c5: jne    0x140e7b8d6
0x00e7b8c7: lea    rdx,[rip+0x8b0432]        # 0x14172bd00 ; literal="Unusable "
0x00e7b8ce: mov    rcx,rbx
0x00e7b8d1: call   0x14006f4f0
0x00e7b8d6: lea    rax,[rsp+0x50]
0x00e7b8db: mov    QWORD PTR [rsp+0x40],rax
0x00e7b8e0: lea    rax,[rsp+0x60]
0x00e7b8e5: mov    QWORD PTR [rsp+0x38],rax
0x00e7b8ea: lea    rax,[rsp+0x54]
0x00e7b8ef: mov    QWORD PTR [rsp+0x30],rax
0x00e7b8f4: lea    rax,[rsp+0x5c]
0x00e7b8f9: mov    QWORD PTR [rsp+0x28],rax
0x00e7b8fe: lea    rax,[rsp+0x58]
0x00e7b903: mov    QWORD PTR [rsp+0x20],rax
0x00e7b908: movzx  r9d,r15w
0x00e7b90c: movzx  r8d,r14w
0x00e7b910: movzx  edx,si
0x00e7b913: mov    rcx,rdi
0x00e7b916: call   0x1414cbbe0
0x00e7b91b: movzx  eax,WORD PTR [rsp+0x50]
0x00e7b920: mov    WORD PTR [rsp+0x30],ax
0x00e7b925: mov    BYTE PTR [rsp+0x28],r12b
0x00e7b92a: mov    DWORD PTR [rsp+0x20],r12d
0x00e7b92f: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7b934: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7b93a: lea    rdx,[rbp+0x0]
0x00e7b93e: mov    rcx,rdi
0x00e7b941: call   0x1414cc890
0x00e7b946: lea    rdx,[rbp+0x0]
0x00e7b94a: mov    rcx,rbx
0x00e7b94d: call   0x1400b9ca0
0x00e7b952: lea    rdx,[rip+0x8b05cf]        # 0x14172bf28 ; literal=" Upward Track (N)"
0x00e7b959: mov    rcx,rbx
0x00e7b95c: call   0x14006f4f0
0x00e7b961: jmp    0x140e7e444
0x00e7b966: movzx  r9d,r15w
0x00e7b96a: movzx  r8d,r14w
0x00e7b96e: movzx  edx,si
0x00e7b971: mov    rcx,rdi
0x00e7b974: call   0x140e77e40
0x00e7b979: test   al,al
0x00e7b97b: jne    0x140e7b98c
0x00e7b97d: lea    rdx,[rip+0x8b037c]        # 0x14172bd00 ; literal="Unusable "
0x00e7b984: mov    rcx,rbx
0x00e7b987: call   0x14006f4f0
0x00e7b98c: mov    BYTE PTR [rsp+0x28],0x1
0x00e7b991: mov    QWORD PTR [rsp+0x20],rbx
0x00e7b996: movzx  r9d,r15w
0x00e7b99a: movzx  r8d,r14w
0x00e7b99e: movzx  edx,si
0x00e7b9a1: mov    rcx,rdi
0x00e7b9a4: call   0x140a44750
0x00e7b9a9: lea    rdx,[rip+0x8b0578]        # 0x14172bf28 ; literal=" Upward Track (N)"
0x00e7b9b0: mov    rcx,rbx
0x00e7b9b3: call   0x14006f4f0
0x00e7b9b8: jmp    0x140e7e444
0x00e7b9bd: movzx  r9d,r15w
0x00e7b9c1: movzx  r8d,r14w
0x00e7b9c5: movzx  edx,si
0x00e7b9c8: mov    rcx,rdi
0x00e7b9cb: call   0x140e77e40
0x00e7b9d0: test   al,al
0x00e7b9d2: jne    0x140e7b9e3
0x00e7b9d4: lea    rdx,[rip+0x8b0325]        # 0x14172bd00 ; literal="Unusable "
0x00e7b9db: mov    rcx,rbx
0x00e7b9de: call   0x14006f4f0
0x00e7b9e3: lea    rdx,[rip+0x8b0556]        # 0x14172bf40 ; literal="Ice Upward Track (N)"
0x00e7b9ea: mov    rcx,rbx
0x00e7b9ed: call   0x14006f4f0
0x00e7b9f2: jmp    0x140e7e444
0x00e7b9f7: movzx  r9d,r15w
0x00e7b9fb: movzx  r8d,r14w
0x00e7b9ff: movzx  edx,si
0x00e7ba02: mov    rcx,rdi
0x00e7ba05: call   0x140e77e40
0x00e7ba0a: test   al,al
0x00e7ba0c: jne    0x140e7ba1d
0x00e7ba0e: lea    rdx,[rip+0x8b02eb]        # 0x14172bd00 ; literal="Unusable "
0x00e7ba15: mov    rcx,rbx
0x00e7ba18: call   0x14006f4f0
0x00e7ba1d: lea    rax,[rsp+0x50]
0x00e7ba22: mov    QWORD PTR [rsp+0x40],rax
0x00e7ba27: lea    rax,[rsp+0x60]
0x00e7ba2c: mov    QWORD PTR [rsp+0x38],rax
0x00e7ba31: lea    rax,[rsp+0x54]
0x00e7ba36: mov    QWORD PTR [rsp+0x30],rax
0x00e7ba3b: lea    rax,[rsp+0x5c]
0x00e7ba40: mov    QWORD PTR [rsp+0x28],rax
0x00e7ba45: lea    rax,[rsp+0x58]
0x00e7ba4a: mov    QWORD PTR [rsp+0x20],rax
0x00e7ba4f: movzx  r9d,r15w
0x00e7ba53: movzx  r8d,r14w
0x00e7ba57: movzx  edx,si
0x00e7ba5a: mov    rcx,rdi
0x00e7ba5d: call   0x1414cbbe0
0x00e7ba62: movzx  eax,WORD PTR [rsp+0x50]
0x00e7ba67: mov    WORD PTR [rsp+0x30],ax
0x00e7ba6c: mov    BYTE PTR [rsp+0x28],r12b
0x00e7ba71: mov    DWORD PTR [rsp+0x20],r12d
0x00e7ba76: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7ba7b: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7ba81: lea    rdx,[rbp+0x0]
0x00e7ba85: mov    rcx,rdi
0x00e7ba88: call   0x1414cc890
0x00e7ba8d: lea    rdx,[rbp+0x0]
0x00e7ba91: mov    rcx,rbx
0x00e7ba94: call   0x1400b9ca0
0x00e7ba99: lea    rdx,[rip+0x8b04b8]        # 0x14172bf58 ; literal=" Upward Track (S)"
0x00e7baa0: mov    rcx,rbx
0x00e7baa3: call   0x14006f4f0
0x00e7baa8: jmp    0x140e7e444
0x00e7baad: movzx  r9d,r15w
0x00e7bab1: movzx  r8d,r14w
0x00e7bab5: movzx  edx,si
0x00e7bab8: mov    rcx,rdi
0x00e7babb: call   0x140e77e40
0x00e7bac0: test   al,al
0x00e7bac2: jne    0x140e7bad3
0x00e7bac4: lea    rdx,[rip+0x8b0235]        # 0x14172bd00 ; literal="Unusable "
0x00e7bacb: mov    rcx,rbx
0x00e7bace: call   0x14006f4f0
0x00e7bad3: mov    BYTE PTR [rsp+0x28],0x1
0x00e7bad8: mov    QWORD PTR [rsp+0x20],rbx
0x00e7badd: movzx  r9d,r15w
0x00e7bae1: movzx  r8d,r14w
0x00e7bae5: movzx  edx,si
0x00e7bae8: mov    rcx,rdi
0x00e7baeb: call   0x140a44750
0x00e7baf0: lea    rdx,[rip+0x8b0461]        # 0x14172bf58 ; literal=" Upward Track (S)"
0x00e7baf7: mov    rcx,rbx
0x00e7bafa: call   0x14006f4f0
0x00e7baff: jmp    0x140e7e444
0x00e7bb04: movzx  r9d,r15w
0x00e7bb08: movzx  r8d,r14w
0x00e7bb0c: movzx  edx,si
0x00e7bb0f: mov    rcx,rdi
0x00e7bb12: call   0x140e77e40
0x00e7bb17: test   al,al
0x00e7bb19: jne    0x140e7bb2a
0x00e7bb1b: lea    rdx,[rip+0x8b01de]        # 0x14172bd00 ; literal="Unusable "
0x00e7bb22: mov    rcx,rbx
0x00e7bb25: call   0x14006f4f0
0x00e7bb2a: lea    rdx,[rip+0x8b043f]        # 0x14172bf70 ; literal="Ice Upward Track (S)"
0x00e7bb31: mov    rcx,rbx
0x00e7bb34: call   0x14006f4f0
0x00e7bb39: jmp    0x140e7e444
0x00e7bb3e: movzx  r9d,r15w
0x00e7bb42: movzx  r8d,r14w
0x00e7bb46: movzx  edx,si
0x00e7bb49: mov    rcx,rdi
0x00e7bb4c: call   0x140e77e40
0x00e7bb51: test   al,al
0x00e7bb53: jne    0x140e7bb64
0x00e7bb55: lea    rdx,[rip+0x8b01a4]        # 0x14172bd00 ; literal="Unusable "
0x00e7bb5c: mov    rcx,rbx
0x00e7bb5f: call   0x14006f4f0
0x00e7bb64: lea    rax,[rsp+0x50]
0x00e7bb69: mov    QWORD PTR [rsp+0x40],rax
0x00e7bb6e: lea    rax,[rsp+0x60]
0x00e7bb73: mov    QWORD PTR [rsp+0x38],rax
0x00e7bb78: lea    rax,[rsp+0x54]
0x00e7bb7d: mov    QWORD PTR [rsp+0x30],rax
0x00e7bb82: lea    rax,[rsp+0x5c]
0x00e7bb87: mov    QWORD PTR [rsp+0x28],rax
0x00e7bb8c: lea    rax,[rsp+0x58]
0x00e7bb91: mov    QWORD PTR [rsp+0x20],rax
0x00e7bb96: movzx  r9d,r15w
0x00e7bb9a: movzx  r8d,r14w
0x00e7bb9e: movzx  edx,si
0x00e7bba1: mov    rcx,rdi
0x00e7bba4: call   0x1414cbbe0
0x00e7bba9: movzx  eax,WORD PTR [rsp+0x50]
0x00e7bbae: mov    WORD PTR [rsp+0x30],ax
0x00e7bbb3: mov    BYTE PTR [rsp+0x28],r12b
0x00e7bbb8: mov    DWORD PTR [rsp+0x20],r12d
0x00e7bbbd: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7bbc2: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7bbc8: lea    rdx,[rbp+0x0]
0x00e7bbcc: mov    rcx,rdi
0x00e7bbcf: call   0x1414cc890
0x00e7bbd4: lea    rdx,[rbp+0x0]
0x00e7bbd8: mov    rcx,rbx
0x00e7bbdb: call   0x1400b9ca0
0x00e7bbe0: lea    rdx,[rip+0x8b02e1]        # 0x14172bec8 ; literal=" Upward Track (E)"
0x00e7bbe7: mov    rcx,rbx
0x00e7bbea: call   0x14006f4f0
0x00e7bbef: jmp    0x140e7e444
0x00e7bbf4: movzx  r9d,r15w
0x00e7bbf8: movzx  r8d,r14w
0x00e7bbfc: movzx  edx,si
0x00e7bbff: mov    rcx,rdi
0x00e7bc02: call   0x140e77e40
0x00e7bc07: test   al,al
0x00e7bc09: jne    0x140e7bc1a
0x00e7bc0b: lea    rdx,[rip+0x8b00ee]        # 0x14172bd00 ; literal="Unusable "
0x00e7bc12: mov    rcx,rbx
0x00e7bc15: call   0x14006f4f0
0x00e7bc1a: mov    BYTE PTR [rsp+0x28],0x1
0x00e7bc1f: mov    QWORD PTR [rsp+0x20],rbx
0x00e7bc24: movzx  r9d,r15w
0x00e7bc28: movzx  r8d,r14w
0x00e7bc2c: movzx  edx,si
0x00e7bc2f: mov    rcx,rdi
0x00e7bc32: call   0x140a44750
0x00e7bc37: lea    rdx,[rip+0x8b028a]        # 0x14172bec8 ; literal=" Upward Track (E)"
0x00e7bc3e: mov    rcx,rbx
0x00e7bc41: call   0x14006f4f0
0x00e7bc46: jmp    0x140e7e444
0x00e7bc4b: movzx  r9d,r15w
0x00e7bc4f: movzx  r8d,r14w
0x00e7bc53: movzx  edx,si
0x00e7bc56: mov    rcx,rdi
0x00e7bc59: call   0x140e77e40
0x00e7bc5e: test   al,al
0x00e7bc60: jne    0x140e7bc71
0x00e7bc62: lea    rdx,[rip+0x8b0097]        # 0x14172bd00 ; literal="Unusable "
0x00e7bc69: mov    rcx,rbx
0x00e7bc6c: call   0x14006f4f0
0x00e7bc71: lea    rdx,[rip+0x8b0268]        # 0x14172bee0 ; literal="Ice Upward Track (E)"
0x00e7bc78: mov    rcx,rbx
0x00e7bc7b: call   0x14006f4f0
0x00e7bc80: jmp    0x140e7e444
0x00e7bc85: movzx  r9d,r15w
0x00e7bc89: movzx  r8d,r14w
0x00e7bc8d: movzx  edx,si
0x00e7bc90: mov    rcx,rdi
0x00e7bc93: call   0x140e77e40
0x00e7bc98: test   al,al
0x00e7bc9a: jne    0x140e7bcab
0x00e7bc9c: lea    rdx,[rip+0x8b005d]        # 0x14172bd00 ; literal="Unusable "
0x00e7bca3: mov    rcx,rbx
0x00e7bca6: call   0x14006f4f0
0x00e7bcab: lea    rax,[rsp+0x50]
0x00e7bcb0: mov    QWORD PTR [rsp+0x40],rax
0x00e7bcb5: lea    rax,[rsp+0x60]
0x00e7bcba: mov    QWORD PTR [rsp+0x38],rax
0x00e7bcbf: lea    rax,[rsp+0x54]
0x00e7bcc4: mov    QWORD PTR [rsp+0x30],rax
0x00e7bcc9: lea    rax,[rsp+0x5c]
0x00e7bcce: mov    QWORD PTR [rsp+0x28],rax
0x00e7bcd3: lea    rax,[rsp+0x58]
0x00e7bcd8: mov    QWORD PTR [rsp+0x20],rax
0x00e7bcdd: movzx  r9d,r15w
0x00e7bce1: movzx  r8d,r14w
0x00e7bce5: movzx  edx,si
0x00e7bce8: mov    rcx,rdi
0x00e7bceb: call   0x1414cbbe0
0x00e7bcf0: movzx  eax,WORD PTR [rsp+0x50]
0x00e7bcf5: mov    WORD PTR [rsp+0x30],ax
0x00e7bcfa: mov    BYTE PTR [rsp+0x28],r12b
0x00e7bcff: mov    DWORD PTR [rsp+0x20],r12d
0x00e7bd04: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7bd09: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7bd0f: lea    rdx,[rbp+0x0]
0x00e7bd13: mov    rcx,rdi
0x00e7bd16: call   0x1414cc890
0x00e7bd1b: lea    rdx,[rbp+0x0]
0x00e7bd1f: mov    rcx,rbx
0x00e7bd22: call   0x1400b9ca0
0x00e7bd27: lea    rdx,[rip+0x8b01ca]        # 0x14172bef8 ; literal=" Upward Track (W)"
0x00e7bd2e: mov    rcx,rbx
0x00e7bd31: call   0x14006f4f0
0x00e7bd36: jmp    0x140e7e444
0x00e7bd3b: movzx  r9d,r15w
0x00e7bd3f: movzx  r8d,r14w
0x00e7bd43: movzx  edx,si
0x00e7bd46: mov    rcx,rdi
0x00e7bd49: call   0x140e77e40
0x00e7bd4e: test   al,al
0x00e7bd50: jne    0x140e7bd61
0x00e7bd52: lea    rdx,[rip+0x8affa7]        # 0x14172bd00 ; literal="Unusable "
0x00e7bd59: mov    rcx,rbx
0x00e7bd5c: call   0x14006f4f0
0x00e7bd61: mov    BYTE PTR [rsp+0x28],0x1
0x00e7bd66: mov    QWORD PTR [rsp+0x20],rbx
0x00e7bd6b: movzx  r9d,r15w
0x00e7bd6f: movzx  r8d,r14w
0x00e7bd73: movzx  edx,si
0x00e7bd76: mov    rcx,rdi
0x00e7bd79: call   0x140a44750
0x00e7bd7e: lea    rdx,[rip+0x8b0173]        # 0x14172bef8 ; literal=" Upward Track (W)"
0x00e7bd85: mov    rcx,rbx
0x00e7bd88: call   0x14006f4f0
0x00e7bd8d: jmp    0x140e7e444
0x00e7bd92: movzx  r9d,r15w
0x00e7bd96: movzx  r8d,r14w
0x00e7bd9a: movzx  edx,si
0x00e7bd9d: mov    rcx,rdi
0x00e7bda0: call   0x140e77e40
0x00e7bda5: test   al,al
0x00e7bda7: jne    0x140e7bdb8
0x00e7bda9: lea    rdx,[rip+0x8aff50]        # 0x14172bd00 ; literal="Unusable "
0x00e7bdb0: mov    rcx,rbx
0x00e7bdb3: call   0x14006f4f0
0x00e7bdb8: lea    rdx,[rip+0x8b0151]        # 0x14172bf10 ; literal="Ice Upward Track (W)"
0x00e7bdbf: mov    rcx,rbx
0x00e7bdc2: call   0x14006f4f0
0x00e7bdc7: jmp    0x140e7e444
0x00e7bdcc: movzx  r9d,r15w
0x00e7bdd0: movzx  r8d,r14w
0x00e7bdd4: movzx  edx,si
0x00e7bdd7: mov    rcx,rdi
0x00e7bdda: call   0x140e77e40
0x00e7bddf: test   al,al
0x00e7bde1: jne    0x140e7bdf2
0x00e7bde3: lea    rdx,[rip+0x8aff16]        # 0x14172bd00 ; literal="Unusable "
0x00e7bdea: mov    rcx,rbx
0x00e7bded: call   0x14006f4f0
0x00e7bdf2: lea    rax,[rsp+0x50]
0x00e7bdf7: mov    QWORD PTR [rsp+0x40],rax
0x00e7bdfc: lea    rax,[rsp+0x60]
0x00e7be01: mov    QWORD PTR [rsp+0x38],rax
0x00e7be06: lea    rax,[rsp+0x54]
0x00e7be0b: mov    QWORD PTR [rsp+0x30],rax
0x00e7be10: lea    rax,[rsp+0x5c]
0x00e7be15: mov    QWORD PTR [rsp+0x28],rax
0x00e7be1a: lea    rax,[rsp+0x58]
0x00e7be1f: mov    QWORD PTR [rsp+0x20],rax
0x00e7be24: movzx  r9d,r15w
0x00e7be28: movzx  r8d,r14w
0x00e7be2c: movzx  edx,si
0x00e7be2f: mov    rcx,rdi
0x00e7be32: call   0x1414cbbe0
0x00e7be37: movzx  eax,WORD PTR [rsp+0x50]
0x00e7be3c: mov    WORD PTR [rsp+0x30],ax
0x00e7be41: mov    BYTE PTR [rsp+0x28],r12b
0x00e7be46: mov    DWORD PTR [rsp+0x20],r12d
0x00e7be4b: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7be50: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7be56: lea    rdx,[rbp+0x0]
0x00e7be5a: mov    rcx,rdi
0x00e7be5d: call   0x1414cc890
0x00e7be62: lea    rdx,[rbp+0x0]
0x00e7be66: mov    rcx,rbx
0x00e7be69: call   0x1400b9ca0
0x00e7be6e: lea    rdx,[rip+0x8b0173]        # 0x14172bfe8 ; literal=" Upward Track (NS)"
0x00e7be75: mov    rcx,rbx
0x00e7be78: call   0x14006f4f0
0x00e7be7d: jmp    0x140e7e444
0x00e7be82: movzx  r9d,r15w
0x00e7be86: movzx  r8d,r14w
0x00e7be8a: movzx  edx,si
0x00e7be8d: mov    rcx,rdi
0x00e7be90: call   0x140e77e40
0x00e7be95: test   al,al
0x00e7be97: jne    0x140e7bea8
0x00e7be99: lea    rdx,[rip+0x8afe60]        # 0x14172bd00 ; literal="Unusable "
0x00e7bea0: mov    rcx,rbx
0x00e7bea3: call   0x14006f4f0
0x00e7bea8: mov    BYTE PTR [rsp+0x28],0x1
0x00e7bead: mov    QWORD PTR [rsp+0x20],rbx
0x00e7beb2: movzx  r9d,r15w
0x00e7beb6: movzx  r8d,r14w
0x00e7beba: movzx  edx,si
0x00e7bebd: mov    rcx,rdi
0x00e7bec0: call   0x140a44750
0x00e7bec5: lea    rdx,[rip+0x8b011c]        # 0x14172bfe8 ; literal=" Upward Track (NS)"
0x00e7becc: mov    rcx,rbx
0x00e7becf: call   0x14006f4f0
0x00e7bed4: jmp    0x140e7e444
0x00e7bed9: movzx  r9d,r15w
0x00e7bedd: movzx  r8d,r14w
0x00e7bee1: movzx  edx,si
0x00e7bee4: mov    rcx,rdi
0x00e7bee7: call   0x140e77e40
0x00e7beec: test   al,al
0x00e7beee: jne    0x140e7beff
0x00e7bef0: lea    rdx,[rip+0x8afe09]        # 0x14172bd00 ; literal="Unusable "
0x00e7bef7: mov    rcx,rbx
0x00e7befa: call   0x14006f4f0
0x00e7beff: lea    rdx,[rip+0x8b00fa]        # 0x14172c000 ; literal="Ice Upward Track (NS)"
0x00e7bf06: mov    rcx,rbx
0x00e7bf09: call   0x14006f4f0
0x00e7bf0e: jmp    0x140e7e444
0x00e7bf13: movzx  r9d,r15w
0x00e7bf17: movzx  r8d,r14w
0x00e7bf1b: movzx  edx,si
0x00e7bf1e: mov    rcx,rdi
0x00e7bf21: call   0x140e77e40
0x00e7bf26: test   al,al
0x00e7bf28: jne    0x140e7bf39
0x00e7bf2a: lea    rdx,[rip+0x8afdcf]        # 0x14172bd00 ; literal="Unusable "
0x00e7bf31: mov    rcx,rbx
0x00e7bf34: call   0x14006f4f0
0x00e7bf39: lea    rax,[rsp+0x50]
0x00e7bf3e: mov    QWORD PTR [rsp+0x40],rax
0x00e7bf43: lea    rax,[rsp+0x60]
0x00e7bf48: mov    QWORD PTR [rsp+0x38],rax
0x00e7bf4d: lea    rax,[rsp+0x54]
0x00e7bf52: mov    QWORD PTR [rsp+0x30],rax
0x00e7bf57: lea    rax,[rsp+0x5c]
0x00e7bf5c: mov    QWORD PTR [rsp+0x28],rax
0x00e7bf61: lea    rax,[rsp+0x58]
0x00e7bf66: mov    QWORD PTR [rsp+0x20],rax
0x00e7bf6b: movzx  r9d,r15w
0x00e7bf6f: movzx  r8d,r14w
0x00e7bf73: movzx  edx,si
0x00e7bf76: mov    rcx,rdi
0x00e7bf79: call   0x1414cbbe0
0x00e7bf7e: movzx  eax,WORD PTR [rsp+0x50]
0x00e7bf83: mov    WORD PTR [rsp+0x30],ax
0x00e7bf88: mov    BYTE PTR [rsp+0x28],r12b
0x00e7bf8d: mov    DWORD PTR [rsp+0x20],r12d
0x00e7bf92: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7bf97: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7bf9d: lea    rdx,[rbp+0x0]
0x00e7bfa1: mov    rcx,rdi
0x00e7bfa4: call   0x1414cc890
0x00e7bfa9: lea    rdx,[rbp+0x0]
0x00e7bfad: mov    rcx,rbx
0x00e7bfb0: call   0x1400b9ca0
0x00e7bfb5: lea    rdx,[rip+0x8b005c]        # 0x14172c018 ; literal=" Upward Track (NE)"
0x00e7bfbc: mov    rcx,rbx
0x00e7bfbf: call   0x14006f4f0
0x00e7bfc4: jmp    0x140e7e444
0x00e7bfc9: movzx  r9d,r15w
0x00e7bfcd: movzx  r8d,r14w
0x00e7bfd1: movzx  edx,si
0x00e7bfd4: mov    rcx,rdi
0x00e7bfd7: call   0x140e77e40
0x00e7bfdc: test   al,al
0x00e7bfde: jne    0x140e7bfef
0x00e7bfe0: lea    rdx,[rip+0x8afd19]        # 0x14172bd00 ; literal="Unusable "
0x00e7bfe7: mov    rcx,rbx
0x00e7bfea: call   0x14006f4f0
0x00e7bfef: mov    BYTE PTR [rsp+0x28],0x1
0x00e7bff4: mov    QWORD PTR [rsp+0x20],rbx
0x00e7bff9: movzx  r9d,r15w
0x00e7bffd: movzx  r8d,r14w
0x00e7c001: movzx  edx,si
0x00e7c004: mov    rcx,rdi
0x00e7c007: call   0x140a44750
0x00e7c00c: lea    rdx,[rip+0x8b0005]        # 0x14172c018 ; literal=" Upward Track (NE)"
0x00e7c013: mov    rcx,rbx
0x00e7c016: call   0x14006f4f0
0x00e7c01b: jmp    0x140e7e444
0x00e7c020: movzx  r9d,r15w
0x00e7c024: movzx  r8d,r14w
0x00e7c028: movzx  edx,si
0x00e7c02b: mov    rcx,rdi
0x00e7c02e: call   0x140e77e40
0x00e7c033: test   al,al
0x00e7c035: jne    0x140e7c046
0x00e7c037: lea    rdx,[rip+0x8afcc2]        # 0x14172bd00 ; literal="Unusable "
0x00e7c03e: mov    rcx,rbx
0x00e7c041: call   0x14006f4f0
0x00e7c046: lea    rdx,[rip+0x8affe3]        # 0x14172c030 ; literal="Ice Upward Track (NE)"
0x00e7c04d: mov    rcx,rbx
0x00e7c050: call   0x14006f4f0
0x00e7c055: jmp    0x140e7e444
0x00e7c05a: movzx  r9d,r15w
0x00e7c05e: movzx  r8d,r14w
0x00e7c062: movzx  edx,si
0x00e7c065: mov    rcx,rdi
0x00e7c068: call   0x140e77e40
0x00e7c06d: test   al,al
0x00e7c06f: jne    0x140e7c080
0x00e7c071: lea    rdx,[rip+0x8afc88]        # 0x14172bd00 ; literal="Unusable "
0x00e7c078: mov    rcx,rbx
0x00e7c07b: call   0x14006f4f0
0x00e7c080: lea    rax,[rsp+0x50]
0x00e7c085: mov    QWORD PTR [rsp+0x40],rax
0x00e7c08a: lea    rax,[rsp+0x60]
0x00e7c08f: mov    QWORD PTR [rsp+0x38],rax
0x00e7c094: lea    rax,[rsp+0x54]
0x00e7c099: mov    QWORD PTR [rsp+0x30],rax
0x00e7c09e: lea    rax,[rsp+0x5c]
0x00e7c0a3: mov    QWORD PTR [rsp+0x28],rax
0x00e7c0a8: lea    rax,[rsp+0x58]
0x00e7c0ad: mov    QWORD PTR [rsp+0x20],rax
0x00e7c0b2: movzx  r9d,r15w
0x00e7c0b6: movzx  r8d,r14w
0x00e7c0ba: movzx  edx,si
0x00e7c0bd: mov    rcx,rdi
0x00e7c0c0: call   0x1414cbbe0
0x00e7c0c5: movzx  eax,WORD PTR [rsp+0x50]
0x00e7c0ca: mov    WORD PTR [rsp+0x30],ax
0x00e7c0cf: mov    BYTE PTR [rsp+0x28],r12b
0x00e7c0d4: mov    DWORD PTR [rsp+0x20],r12d
0x00e7c0d9: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7c0de: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7c0e4: lea    rdx,[rbp+0x0]
0x00e7c0e8: mov    rcx,rdi
0x00e7c0eb: call   0x1414cc890
0x00e7c0f0: lea    rdx,[rbp+0x0]
0x00e7c0f4: mov    rcx,rbx
0x00e7c0f7: call   0x1400b9ca0
0x00e7c0fc: lea    rdx,[rip+0x8afe85]        # 0x14172bf88 ; literal=" Upward Track (NW)"
0x00e7c103: mov    rcx,rbx
0x00e7c106: call   0x14006f4f0
0x00e7c10b: jmp    0x140e7e444
0x00e7c110: movzx  r9d,r15w
0x00e7c114: movzx  r8d,r14w
0x00e7c118: movzx  edx,si
0x00e7c11b: mov    rcx,rdi
0x00e7c11e: call   0x140e77e40
0x00e7c123: test   al,al
0x00e7c125: jne    0x140e7c136
0x00e7c127: lea    rdx,[rip+0x8afbd2]        # 0x14172bd00 ; literal="Unusable "
0x00e7c12e: mov    rcx,rbx
0x00e7c131: call   0x14006f4f0
0x00e7c136: mov    BYTE PTR [rsp+0x28],0x1
0x00e7c13b: mov    QWORD PTR [rsp+0x20],rbx
0x00e7c140: movzx  r9d,r15w
0x00e7c144: movzx  r8d,r14w
0x00e7c148: movzx  edx,si
0x00e7c14b: mov    rcx,rdi
0x00e7c14e: call   0x140a44750
0x00e7c153: lea    rdx,[rip+0x8afe2e]        # 0x14172bf88 ; literal=" Upward Track (NW)"
0x00e7c15a: mov    rcx,rbx
0x00e7c15d: call   0x14006f4f0
0x00e7c162: jmp    0x140e7e444
0x00e7c167: movzx  r9d,r15w
0x00e7c16b: movzx  r8d,r14w
0x00e7c16f: movzx  edx,si
0x00e7c172: mov    rcx,rdi
0x00e7c175: call   0x140e77e40
0x00e7c17a: test   al,al
0x00e7c17c: jne    0x140e7c18d
0x00e7c17e: lea    rdx,[rip+0x8afb7b]        # 0x14172bd00 ; literal="Unusable "
0x00e7c185: mov    rcx,rbx
0x00e7c188: call   0x14006f4f0
0x00e7c18d: lea    rdx,[rip+0x8afe0c]        # 0x14172bfa0 ; literal="Ice Upward Track (NW)"
0x00e7c194: mov    rcx,rbx
0x00e7c197: call   0x14006f4f0
0x00e7c19c: jmp    0x140e7e444
0x00e7c1a1: movzx  r9d,r15w
0x00e7c1a5: movzx  r8d,r14w
0x00e7c1a9: movzx  edx,si
0x00e7c1ac: mov    rcx,rdi
0x00e7c1af: call   0x140e77e40
0x00e7c1b4: test   al,al
0x00e7c1b6: jne    0x140e7c1c7
0x00e7c1b8: lea    rdx,[rip+0x8afb41]        # 0x14172bd00 ; literal="Unusable "
0x00e7c1bf: mov    rcx,rbx
0x00e7c1c2: call   0x14006f4f0
0x00e7c1c7: lea    rax,[rsp+0x50]
0x00e7c1cc: mov    QWORD PTR [rsp+0x40],rax
0x00e7c1d1: lea    rax,[rsp+0x60]
0x00e7c1d6: mov    QWORD PTR [rsp+0x38],rax
0x00e7c1db: lea    rax,[rsp+0x54]
0x00e7c1e0: mov    QWORD PTR [rsp+0x30],rax
0x00e7c1e5: lea    rax,[rsp+0x5c]
0x00e7c1ea: mov    QWORD PTR [rsp+0x28],rax
0x00e7c1ef: lea    rax,[rsp+0x58]
0x00e7c1f4: mov    QWORD PTR [rsp+0x20],rax
0x00e7c1f9: movzx  r9d,r15w
0x00e7c1fd: movzx  r8d,r14w
0x00e7c201: movzx  edx,si
0x00e7c204: mov    rcx,rdi
0x00e7c207: call   0x1414cbbe0
0x00e7c20c: movzx  eax,WORD PTR [rsp+0x50]
0x00e7c211: mov    WORD PTR [rsp+0x30],ax
0x00e7c216: mov    BYTE PTR [rsp+0x28],r12b
0x00e7c21b: mov    DWORD PTR [rsp+0x20],r12d
0x00e7c220: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7c225: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7c22b: lea    rdx,[rbp+0x0]
0x00e7c22f: mov    rcx,rdi
0x00e7c232: call   0x1414cc890
0x00e7c237: lea    rdx,[rbp+0x0]
0x00e7c23b: mov    rcx,rbx
0x00e7c23e: call   0x1400b9ca0
0x00e7c243: lea    rdx,[rip+0x8afd6e]        # 0x14172bfb8 ; literal=" Upward Track (SE)"
0x00e7c24a: mov    rcx,rbx
0x00e7c24d: call   0x14006f4f0
0x00e7c252: jmp    0x140e7e444
0x00e7c257: movzx  r9d,r15w
0x00e7c25b: movzx  r8d,r14w
0x00e7c25f: movzx  edx,si
0x00e7c262: mov    rcx,rdi
0x00e7c265: call   0x140e77e40
0x00e7c26a: test   al,al
0x00e7c26c: jne    0x140e7c27d
0x00e7c26e: lea    rdx,[rip+0x8afa8b]        # 0x14172bd00 ; literal="Unusable "
0x00e7c275: mov    rcx,rbx
0x00e7c278: call   0x14006f4f0
0x00e7c27d: mov    BYTE PTR [rsp+0x28],0x1
0x00e7c282: mov    QWORD PTR [rsp+0x20],rbx
0x00e7c287: movzx  r9d,r15w
0x00e7c28b: movzx  r8d,r14w
0x00e7c28f: movzx  edx,si
0x00e7c292: mov    rcx,rdi
0x00e7c295: call   0x140a44750
0x00e7c29a: lea    rdx,[rip+0x8afd17]        # 0x14172bfb8 ; literal=" Upward Track (SE)"
0x00e7c2a1: mov    rcx,rbx
0x00e7c2a4: call   0x14006f4f0
0x00e7c2a9: jmp    0x140e7e444
0x00e7c2ae: movzx  r9d,r15w
0x00e7c2b2: movzx  r8d,r14w
0x00e7c2b6: movzx  edx,si
0x00e7c2b9: mov    rcx,rdi
0x00e7c2bc: call   0x140e77e40
0x00e7c2c1: test   al,al
0x00e7c2c3: jne    0x140e7c2d4
0x00e7c2c5: lea    rdx,[rip+0x8afa34]        # 0x14172bd00 ; literal="Unusable "
0x00e7c2cc: mov    rcx,rbx
0x00e7c2cf: call   0x14006f4f0
0x00e7c2d4: lea    rdx,[rip+0x8afcf5]        # 0x14172bfd0 ; literal="Ice Upward Track (SE)"
0x00e7c2db: mov    rcx,rbx
0x00e7c2de: call   0x14006f4f0
0x00e7c2e3: jmp    0x140e7e444
0x00e7c2e8: movzx  r9d,r15w
0x00e7c2ec: movzx  r8d,r14w
0x00e7c2f0: movzx  edx,si
0x00e7c2f3: mov    rcx,rdi
0x00e7c2f6: call   0x140e77e40
0x00e7c2fb: test   al,al
0x00e7c2fd: jne    0x140e7c30e
0x00e7c2ff: lea    rdx,[rip+0x8af9fa]        # 0x14172bd00 ; literal="Unusable "
0x00e7c306: mov    rcx,rbx
0x00e7c309: call   0x14006f4f0
0x00e7c30e: lea    rax,[rsp+0x50]
0x00e7c313: mov    QWORD PTR [rsp+0x40],rax
0x00e7c318: lea    rax,[rsp+0x60]
0x00e7c31d: mov    QWORD PTR [rsp+0x38],rax
0x00e7c322: lea    rax,[rsp+0x54]
0x00e7c327: mov    QWORD PTR [rsp+0x30],rax
0x00e7c32c: lea    rax,[rsp+0x5c]
0x00e7c331: mov    QWORD PTR [rsp+0x28],rax
0x00e7c336: lea    rax,[rsp+0x58]
0x00e7c33b: mov    QWORD PTR [rsp+0x20],rax
0x00e7c340: movzx  r9d,r15w
0x00e7c344: movzx  r8d,r14w
0x00e7c348: movzx  edx,si
0x00e7c34b: mov    rcx,rdi
0x00e7c34e: call   0x1414cbbe0
0x00e7c353: movzx  eax,WORD PTR [rsp+0x50]
0x00e7c358: mov    WORD PTR [rsp+0x30],ax
0x00e7c35d: mov    BYTE PTR [rsp+0x28],r12b
0x00e7c362: mov    DWORD PTR [rsp+0x20],r12d
0x00e7c367: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7c36c: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7c372: lea    rdx,[rbp+0x0]
0x00e7c376: mov    rcx,rdi
0x00e7c379: call   0x1414cc890
0x00e7c37e: lea    rdx,[rbp+0x0]
0x00e7c382: mov    rcx,rbx
0x00e7c385: call   0x1400b9ca0
0x00e7c38a: lea    rdx,[rip+0x8afd17]        # 0x14172c0a8 ; literal=" Upward Track (SW)"
0x00e7c391: mov    rcx,rbx
0x00e7c394: call   0x14006f4f0
0x00e7c399: jmp    0x140e7e444
0x00e7c39e: movzx  r9d,r15w
0x00e7c3a2: movzx  r8d,r14w
0x00e7c3a6: movzx  edx,si
0x00e7c3a9: mov    rcx,rdi
0x00e7c3ac: call   0x140e77e40
0x00e7c3b1: test   al,al
0x00e7c3b3: jne    0x140e7c3c4
0x00e7c3b5: lea    rdx,[rip+0x8af944]        # 0x14172bd00 ; literal="Unusable "
0x00e7c3bc: mov    rcx,rbx
0x00e7c3bf: call   0x14006f4f0
0x00e7c3c4: mov    BYTE PTR [rsp+0x28],0x1
0x00e7c3c9: mov    QWORD PTR [rsp+0x20],rbx
0x00e7c3ce: movzx  r9d,r15w
0x00e7c3d2: movzx  r8d,r14w
0x00e7c3d6: movzx  edx,si
0x00e7c3d9: mov    rcx,rdi
0x00e7c3dc: call   0x140a44750
0x00e7c3e1: lea    rdx,[rip+0x8afcc0]        # 0x14172c0a8 ; literal=" Upward Track (SW)"
0x00e7c3e8: mov    rcx,rbx
0x00e7c3eb: call   0x14006f4f0
0x00e7c3f0: jmp    0x140e7e444
0x00e7c3f5: movzx  r9d,r15w
0x00e7c3f9: movzx  r8d,r14w
0x00e7c3fd: movzx  edx,si
0x00e7c400: mov    rcx,rdi
0x00e7c403: call   0x140e77e40
0x00e7c408: test   al,al
0x00e7c40a: jne    0x140e7c41b
0x00e7c40c: lea    rdx,[rip+0x8af8ed]        # 0x14172bd00 ; literal="Unusable "
0x00e7c413: mov    rcx,rbx
0x00e7c416: call   0x14006f4f0
0x00e7c41b: lea    rdx,[rip+0x8afc9e]        # 0x14172c0c0 ; literal="Ice Upward Track (SW)"
0x00e7c422: mov    rcx,rbx
0x00e7c425: call   0x14006f4f0
0x00e7c42a: jmp    0x140e7e444
0x00e7c42f: movzx  r9d,r15w
0x00e7c433: movzx  r8d,r14w
0x00e7c437: movzx  edx,si
0x00e7c43a: mov    rcx,rdi
0x00e7c43d: call   0x140e77e40
0x00e7c442: test   al,al
0x00e7c444: jne    0x140e7c455
0x00e7c446: lea    rdx,[rip+0x8af8b3]        # 0x14172bd00 ; literal="Unusable "
0x00e7c44d: mov    rcx,rbx
0x00e7c450: call   0x14006f4f0
0x00e7c455: lea    rax,[rsp+0x50]
0x00e7c45a: mov    QWORD PTR [rsp+0x40],rax
0x00e7c45f: lea    rax,[rsp+0x60]
0x00e7c464: mov    QWORD PTR [rsp+0x38],rax
0x00e7c469: lea    rax,[rsp+0x54]
0x00e7c46e: mov    QWORD PTR [rsp+0x30],rax
0x00e7c473: lea    rax,[rsp+0x5c]
0x00e7c478: mov    QWORD PTR [rsp+0x28],rax
0x00e7c47d: lea    rax,[rsp+0x58]
0x00e7c482: mov    QWORD PTR [rsp+0x20],rax
0x00e7c487: movzx  r9d,r15w
0x00e7c48b: movzx  r8d,r14w
0x00e7c48f: movzx  edx,si
0x00e7c492: mov    rcx,rdi
0x00e7c495: call   0x1414cbbe0
0x00e7c49a: movzx  eax,WORD PTR [rsp+0x50]
0x00e7c49f: mov    WORD PTR [rsp+0x30],ax
0x00e7c4a4: mov    BYTE PTR [rsp+0x28],r12b
0x00e7c4a9: mov    DWORD PTR [rsp+0x20],r12d
0x00e7c4ae: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7c4b3: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7c4b9: lea    rdx,[rbp+0x0]
0x00e7c4bd: mov    rcx,rdi
0x00e7c4c0: call   0x1414cc890
0x00e7c4c5: lea    rdx,[rbp+0x0]
0x00e7c4c9: mov    rcx,rbx
0x00e7c4cc: call   0x1400b9ca0
0x00e7c4d1: lea    rdx,[rip+0x8afc00]        # 0x14172c0d8 ; literal=" Upward Track (EW)"
0x00e7c4d8: mov    rcx,rbx
0x00e7c4db: call   0x14006f4f0
0x00e7c4e0: jmp    0x140e7e444
0x00e7c4e5: movzx  r9d,r15w
0x00e7c4e9: movzx  r8d,r14w
0x00e7c4ed: movzx  edx,si
0x00e7c4f0: mov    rcx,rdi
0x00e7c4f3: call   0x140e77e40
0x00e7c4f8: test   al,al
0x00e7c4fa: jne    0x140e7c50b
0x00e7c4fc: lea    rdx,[rip+0x8af7fd]        # 0x14172bd00 ; literal="Unusable "
0x00e7c503: mov    rcx,rbx
0x00e7c506: call   0x14006f4f0
0x00e7c50b: mov    BYTE PTR [rsp+0x28],0x1
0x00e7c510: mov    QWORD PTR [rsp+0x20],rbx
0x00e7c515: movzx  r9d,r15w
0x00e7c519: movzx  r8d,r14w
0x00e7c51d: movzx  edx,si
0x00e7c520: mov    rcx,rdi
0x00e7c523: call   0x140a44750
0x00e7c528: lea    rdx,[rip+0x8afba9]        # 0x14172c0d8 ; literal=" Upward Track (EW)"
0x00e7c52f: mov    rcx,rbx
0x00e7c532: call   0x14006f4f0
0x00e7c537: jmp    0x140e7e444
0x00e7c53c: movzx  r9d,r15w
0x00e7c540: movzx  r8d,r14w
0x00e7c544: movzx  edx,si
0x00e7c547: mov    rcx,rdi
0x00e7c54a: call   0x140e77e40
0x00e7c54f: test   al,al
0x00e7c551: jne    0x140e7c562
0x00e7c553: lea    rdx,[rip+0x8af7a6]        # 0x14172bd00 ; literal="Unusable "
0x00e7c55a: mov    rcx,rbx
0x00e7c55d: call   0x14006f4f0
0x00e7c562: lea    rdx,[rip+0x8afb87]        # 0x14172c0f0 ; literal="Ice Upward Track (EW)"
0x00e7c569: mov    rcx,rbx
0x00e7c56c: call   0x14006f4f0
0x00e7c571: jmp    0x140e7e444
0x00e7c576: movzx  r9d,r15w
0x00e7c57a: movzx  r8d,r14w
0x00e7c57e: movzx  edx,si
0x00e7c581: mov    rcx,rdi
0x00e7c584: call   0x140e77e40
0x00e7c589: test   al,al
0x00e7c58b: jne    0x140e7c59c
0x00e7c58d: lea    rdx,[rip+0x8af76c]        # 0x14172bd00 ; literal="Unusable "
0x00e7c594: mov    rcx,rbx
0x00e7c597: call   0x14006f4f0
0x00e7c59c: lea    rax,[rsp+0x50]
0x00e7c5a1: mov    QWORD PTR [rsp+0x40],rax
0x00e7c5a6: lea    rax,[rsp+0x60]
0x00e7c5ab: mov    QWORD PTR [rsp+0x38],rax
0x00e7c5b0: lea    rax,[rsp+0x54]
0x00e7c5b5: mov    QWORD PTR [rsp+0x30],rax
0x00e7c5ba: lea    rax,[rsp+0x5c]
0x00e7c5bf: mov    QWORD PTR [rsp+0x28],rax
0x00e7c5c4: lea    rax,[rsp+0x58]
0x00e7c5c9: mov    QWORD PTR [rsp+0x20],rax
0x00e7c5ce: movzx  r9d,r15w
0x00e7c5d2: movzx  r8d,r14w
0x00e7c5d6: movzx  edx,si
0x00e7c5d9: mov    rcx,rdi
0x00e7c5dc: call   0x1414cbbe0
0x00e7c5e1: movzx  eax,WORD PTR [rsp+0x50]
0x00e7c5e6: mov    WORD PTR [rsp+0x30],ax
0x00e7c5eb: mov    BYTE PTR [rsp+0x28],r12b
0x00e7c5f0: mov    DWORD PTR [rsp+0x20],r12d
0x00e7c5f5: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7c5fa: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7c600: lea    rdx,[rbp+0x0]
0x00e7c604: mov    rcx,rdi
0x00e7c607: call   0x1414cc890
0x00e7c60c: lea    rdx,[rbp+0x0]
0x00e7c610: mov    rcx,rbx
0x00e7c613: call   0x1400b9ca0
0x00e7c618: lea    rdx,[rip+0x8afa29]        # 0x14172c048 ; literal=" Upward Track (NSE)"
0x00e7c61f: mov    rcx,rbx
0x00e7c622: call   0x14006f4f0
0x00e7c627: jmp    0x140e7e444
0x00e7c62c: movzx  r9d,r15w
0x00e7c630: movzx  r8d,r14w
0x00e7c634: movzx  edx,si
0x00e7c637: mov    rcx,rdi
0x00e7c63a: call   0x140e77e40
0x00e7c63f: test   al,al
0x00e7c641: jne    0x140e7c652
0x00e7c643: lea    rdx,[rip+0x8af6b6]        # 0x14172bd00 ; literal="Unusable "
0x00e7c64a: mov    rcx,rbx
0x00e7c64d: call   0x14006f4f0
0x00e7c652: mov    BYTE PTR [rsp+0x28],0x1
0x00e7c657: mov    QWORD PTR [rsp+0x20],rbx
0x00e7c65c: movzx  r9d,r15w
0x00e7c660: movzx  r8d,r14w
0x00e7c664: movzx  edx,si
0x00e7c667: mov    rcx,rdi
0x00e7c66a: call   0x140a44750
0x00e7c66f: lea    rdx,[rip+0x8af9d2]        # 0x14172c048 ; literal=" Upward Track (NSE)"
0x00e7c676: mov    rcx,rbx
0x00e7c679: call   0x14006f4f0
0x00e7c67e: jmp    0x140e7e444
0x00e7c683: movzx  r9d,r15w
0x00e7c687: movzx  r8d,r14w
0x00e7c68b: movzx  edx,si
0x00e7c68e: mov    rcx,rdi
0x00e7c691: call   0x140e77e40
0x00e7c696: test   al,al
0x00e7c698: jne    0x140e7c6a9
0x00e7c69a: lea    rdx,[rip+0x8af65f]        # 0x14172bd00 ; literal="Unusable "
0x00e7c6a1: mov    rcx,rbx
0x00e7c6a4: call   0x14006f4f0
0x00e7c6a9: lea    rdx,[rip+0x8af9b0]        # 0x14172c060 ; literal="Ice Upward Track (NSE)"
0x00e7c6b0: mov    rcx,rbx
0x00e7c6b3: call   0x14006f4f0
0x00e7c6b8: jmp    0x140e7e444
0x00e7c6bd: movzx  r9d,r15w
0x00e7c6c1: movzx  r8d,r14w
0x00e7c6c5: movzx  edx,si
0x00e7c6c8: mov    rcx,rdi
0x00e7c6cb: call   0x140e77e40
0x00e7c6d0: test   al,al
0x00e7c6d2: jne    0x140e7c6e3
0x00e7c6d4: lea    rdx,[rip+0x8af625]        # 0x14172bd00 ; literal="Unusable "
0x00e7c6db: mov    rcx,rbx
0x00e7c6de: call   0x14006f4f0
0x00e7c6e3: lea    rax,[rsp+0x50]
0x00e7c6e8: mov    QWORD PTR [rsp+0x40],rax
0x00e7c6ed: lea    rax,[rsp+0x60]
0x00e7c6f2: mov    QWORD PTR [rsp+0x38],rax
0x00e7c6f7: lea    rax,[rsp+0x54]
0x00e7c6fc: mov    QWORD PTR [rsp+0x30],rax
0x00e7c701: lea    rax,[rsp+0x5c]
0x00e7c706: mov    QWORD PTR [rsp+0x28],rax
0x00e7c70b: lea    rax,[rsp+0x58]
0x00e7c710: mov    QWORD PTR [rsp+0x20],rax
0x00e7c715: movzx  r9d,r15w
0x00e7c719: movzx  r8d,r14w
0x00e7c71d: movzx  edx,si
0x00e7c720: mov    rcx,rdi
0x00e7c723: call   0x1414cbbe0
0x00e7c728: movzx  eax,WORD PTR [rsp+0x50]
0x00e7c72d: mov    WORD PTR [rsp+0x30],ax
0x00e7c732: mov    BYTE PTR [rsp+0x28],r12b
0x00e7c737: mov    DWORD PTR [rsp+0x20],r12d
0x00e7c73c: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7c741: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7c747: lea    rdx,[rbp+0x0]
0x00e7c74b: mov    rcx,rdi
0x00e7c74e: call   0x1414cc890
0x00e7c753: lea    rdx,[rbp+0x0]
0x00e7c757: mov    rcx,rbx
0x00e7c75a: call   0x1400b9ca0
0x00e7c75f: lea    rdx,[rip+0x8af912]        # 0x14172c078 ; literal=" Upward Track (NSW)"
0x00e7c766: mov    rcx,rbx
0x00e7c769: call   0x14006f4f0
0x00e7c76e: jmp    0x140e7e444
0x00e7c773: movzx  r9d,r15w
0x00e7c777: movzx  r8d,r14w
0x00e7c77b: movzx  edx,si
0x00e7c77e: mov    rcx,rdi
0x00e7c781: call   0x140e77e40
0x00e7c786: test   al,al
0x00e7c788: jne    0x140e7c799
0x00e7c78a: lea    rdx,[rip+0x8af56f]        # 0x14172bd00 ; literal="Unusable "
0x00e7c791: mov    rcx,rbx
0x00e7c794: call   0x14006f4f0
0x00e7c799: mov    BYTE PTR [rsp+0x28],0x1
0x00e7c79e: mov    QWORD PTR [rsp+0x20],rbx
0x00e7c7a3: movzx  r9d,r15w
0x00e7c7a7: movzx  r8d,r14w
0x00e7c7ab: movzx  edx,si
0x00e7c7ae: mov    rcx,rdi
0x00e7c7b1: call   0x140a44750
0x00e7c7b6: lea    rdx,[rip+0x8af8bb]        # 0x14172c078 ; literal=" Upward Track (NSW)"
0x00e7c7bd: mov    rcx,rbx
0x00e7c7c0: call   0x14006f4f0
0x00e7c7c5: jmp    0x140e7e444
0x00e7c7ca: movzx  r9d,r15w
0x00e7c7ce: movzx  r8d,r14w
0x00e7c7d2: movzx  edx,si
0x00e7c7d5: mov    rcx,rdi
0x00e7c7d8: call   0x140e77e40
0x00e7c7dd: test   al,al
0x00e7c7df: jne    0x140e7c7f0
0x00e7c7e1: lea    rdx,[rip+0x8af518]        # 0x14172bd00 ; literal="Unusable "
0x00e7c7e8: mov    rcx,rbx
0x00e7c7eb: call   0x14006f4f0
0x00e7c7f0: lea    rdx,[rip+0x8af899]        # 0x14172c090 ; literal="Ice Upward Track (NSW)"
0x00e7c7f7: mov    rcx,rbx
0x00e7c7fa: call   0x14006f4f0
0x00e7c7ff: jmp    0x140e7e444
0x00e7c804: movzx  r9d,r15w
0x00e7c808: movzx  r8d,r14w
0x00e7c80c: movzx  edx,si
0x00e7c80f: mov    rcx,rdi
0x00e7c812: call   0x140e77e40
0x00e7c817: test   al,al
0x00e7c819: jne    0x140e7c82a
0x00e7c81b: lea    rdx,[rip+0x8af4de]        # 0x14172bd00 ; literal="Unusable "
0x00e7c822: mov    rcx,rbx
0x00e7c825: call   0x14006f4f0
0x00e7c82a: lea    rax,[rsp+0x50]
0x00e7c82f: mov    QWORD PTR [rsp+0x40],rax
0x00e7c834: lea    rax,[rsp+0x60]
0x00e7c839: mov    QWORD PTR [rsp+0x38],rax
0x00e7c83e: lea    rax,[rsp+0x54]
0x00e7c843: mov    QWORD PTR [rsp+0x30],rax
0x00e7c848: lea    rax,[rsp+0x5c]
0x00e7c84d: mov    QWORD PTR [rsp+0x28],rax
0x00e7c852: lea    rax,[rsp+0x58]
0x00e7c857: mov    QWORD PTR [rsp+0x20],rax
0x00e7c85c: movzx  r9d,r15w
0x00e7c860: movzx  r8d,r14w
0x00e7c864: movzx  edx,si
0x00e7c867: mov    rcx,rdi
0x00e7c86a: call   0x1414cbbe0
0x00e7c86f: movzx  eax,WORD PTR [rsp+0x50]
0x00e7c874: mov    WORD PTR [rsp+0x30],ax
0x00e7c879: mov    BYTE PTR [rsp+0x28],r12b
0x00e7c87e: mov    DWORD PTR [rsp+0x20],r12d
0x00e7c883: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7c888: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7c88e: lea    rdx,[rbp+0x0]
0x00e7c892: mov    rcx,rdi
0x00e7c895: call   0x1414cc890
0x00e7c89a: lea    rdx,[rbp+0x0]
0x00e7c89e: mov    rcx,rbx
0x00e7c8a1: call   0x1400b9ca0
0x00e7c8a6: lea    rdx,[rip+0x8af8b3]        # 0x14172c160 ; literal=" Upward Track (NEW)"
0x00e7c8ad: mov    rcx,rbx
0x00e7c8b0: call   0x14006f4f0
0x00e7c8b5: jmp    0x140e7e444
0x00e7c8ba: movzx  r9d,r15w
0x00e7c8be: movzx  r8d,r14w
0x00e7c8c2: movzx  edx,si
0x00e7c8c5: mov    rcx,rdi
0x00e7c8c8: call   0x140e77e40
0x00e7c8cd: test   al,al
0x00e7c8cf: jne    0x140e7c8e0
0x00e7c8d1: lea    rdx,[rip+0x8af428]        # 0x14172bd00 ; literal="Unusable "
0x00e7c8d8: mov    rcx,rbx
0x00e7c8db: call   0x14006f4f0
0x00e7c8e0: mov    BYTE PTR [rsp+0x28],0x1
0x00e7c8e5: mov    QWORD PTR [rsp+0x20],rbx
0x00e7c8ea: movzx  r9d,r15w
0x00e7c8ee: movzx  r8d,r14w
0x00e7c8f2: movzx  edx,si
0x00e7c8f5: mov    rcx,rdi
0x00e7c8f8: call   0x140a44750
0x00e7c8fd: lea    rdx,[rip+0x8af85c]        # 0x14172c160 ; literal=" Upward Track (NEW)"
0x00e7c904: mov    rcx,rbx
0x00e7c907: call   0x14006f4f0
0x00e7c90c: jmp    0x140e7e444
0x00e7c911: movzx  r9d,r15w
0x00e7c915: movzx  r8d,r14w
0x00e7c919: movzx  edx,si
0x00e7c91c: mov    rcx,rdi
0x00e7c91f: call   0x140e77e40
0x00e7c924: test   al,al
0x00e7c926: jne    0x140e7c937
0x00e7c928: lea    rdx,[rip+0x8af3d1]        # 0x14172bd00 ; literal="Unusable "
0x00e7c92f: mov    rcx,rbx
0x00e7c932: call   0x14006f4f0
0x00e7c937: lea    rdx,[rip+0x8af83a]        # 0x14172c178 ; literal="Ice Upward Track (NEW)"
0x00e7c93e: mov    rcx,rbx
0x00e7c941: call   0x14006f4f0
0x00e7c946: jmp    0x140e7e444
0x00e7c94b: movzx  r9d,r15w
0x00e7c94f: movzx  r8d,r14w
0x00e7c953: movzx  edx,si
0x00e7c956: mov    rcx,rdi
0x00e7c959: call   0x140e77e40
0x00e7c95e: test   al,al
0x00e7c960: jne    0x140e7c971
0x00e7c962: lea    rdx,[rip+0x8af397]        # 0x14172bd00 ; literal="Unusable "
0x00e7c969: mov    rcx,rbx
0x00e7c96c: call   0x14006f4f0
0x00e7c971: lea    rax,[rsp+0x50]
0x00e7c976: mov    QWORD PTR [rsp+0x40],rax
0x00e7c97b: lea    rax,[rsp+0x60]
0x00e7c980: mov    QWORD PTR [rsp+0x38],rax
0x00e7c985: lea    rax,[rsp+0x54]
0x00e7c98a: mov    QWORD PTR [rsp+0x30],rax
0x00e7c98f: lea    rax,[rsp+0x5c]
0x00e7c994: mov    QWORD PTR [rsp+0x28],rax
0x00e7c999: lea    rax,[rsp+0x58]
0x00e7c99e: mov    QWORD PTR [rsp+0x20],rax
0x00e7c9a3: movzx  r9d,r15w
0x00e7c9a7: movzx  r8d,r14w
0x00e7c9ab: movzx  edx,si
0x00e7c9ae: mov    rcx,rdi
0x00e7c9b1: call   0x1414cbbe0
0x00e7c9b6: movzx  eax,WORD PTR [rsp+0x50]
0x00e7c9bb: mov    WORD PTR [rsp+0x30],ax
0x00e7c9c0: mov    BYTE PTR [rsp+0x28],r12b
0x00e7c9c5: mov    DWORD PTR [rsp+0x20],r12d
0x00e7c9ca: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7c9cf: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7c9d5: lea    rdx,[rbp+0x0]
0x00e7c9d9: mov    rcx,rdi
0x00e7c9dc: call   0x1414cc890
0x00e7c9e1: lea    rdx,[rbp+0x0]
0x00e7c9e5: mov    rcx,rbx
0x00e7c9e8: call   0x1400b9ca0
0x00e7c9ed: lea    rdx,[rip+0x8af79c]        # 0x14172c190 ; literal=" Upward Track (SEW)"
0x00e7c9f4: mov    rcx,rbx
0x00e7c9f7: call   0x14006f4f0
0x00e7c9fc: jmp    0x140e7e444
0x00e7ca01: movzx  r9d,r15w
0x00e7ca05: movzx  r8d,r14w
0x00e7ca09: movzx  edx,si
0x00e7ca0c: mov    rcx,rdi
0x00e7ca0f: call   0x140e77e40
0x00e7ca14: test   al,al
0x00e7ca16: jne    0x140e7ca27
0x00e7ca18: lea    rdx,[rip+0x8af2e1]        # 0x14172bd00 ; literal="Unusable "
0x00e7ca1f: mov    rcx,rbx
0x00e7ca22: call   0x14006f4f0
0x00e7ca27: mov    BYTE PTR [rsp+0x28],0x1
0x00e7ca2c: mov    QWORD PTR [rsp+0x20],rbx
0x00e7ca31: movzx  r9d,r15w
0x00e7ca35: movzx  r8d,r14w
0x00e7ca39: movzx  edx,si
0x00e7ca3c: mov    rcx,rdi
0x00e7ca3f: call   0x140a44750
0x00e7ca44: lea    rdx,[rip+0x8af745]        # 0x14172c190 ; literal=" Upward Track (SEW)"
0x00e7ca4b: mov    rcx,rbx
0x00e7ca4e: call   0x14006f4f0
0x00e7ca53: jmp    0x140e7e444
0x00e7ca58: movzx  r9d,r15w
0x00e7ca5c: movzx  r8d,r14w
0x00e7ca60: movzx  edx,si
0x00e7ca63: mov    rcx,rdi
0x00e7ca66: call   0x140e77e40
0x00e7ca6b: test   al,al
0x00e7ca6d: jne    0x140e7ca7e
0x00e7ca6f: lea    rdx,[rip+0x8af28a]        # 0x14172bd00 ; literal="Unusable "
0x00e7ca76: mov    rcx,rbx
0x00e7ca79: call   0x14006f4f0
0x00e7ca7e: lea    rdx,[rip+0x8af723]        # 0x14172c1a8 ; literal="Ice Upward Track (SEW)"
0x00e7ca85: mov    rcx,rbx
0x00e7ca88: call   0x14006f4f0
0x00e7ca8d: jmp    0x140e7e444
0x00e7ca92: movzx  r9d,r15w
0x00e7ca96: movzx  r8d,r14w
0x00e7ca9a: movzx  edx,si
0x00e7ca9d: mov    rcx,rdi
0x00e7caa0: call   0x140e77e40
0x00e7caa5: test   al,al
0x00e7caa7: jne    0x140e7cab8
0x00e7caa9: lea    rdx,[rip+0x8af250]        # 0x14172bd00 ; literal="Unusable "
0x00e7cab0: mov    rcx,rbx
0x00e7cab3: call   0x14006f4f0
0x00e7cab8: lea    rax,[rsp+0x50]
0x00e7cabd: mov    QWORD PTR [rsp+0x40],rax
0x00e7cac2: lea    rax,[rsp+0x60]
0x00e7cac7: mov    QWORD PTR [rsp+0x38],rax
0x00e7cacc: lea    rax,[rsp+0x54]
0x00e7cad1: mov    QWORD PTR [rsp+0x30],rax
0x00e7cad6: lea    rax,[rsp+0x5c]
0x00e7cadb: mov    QWORD PTR [rsp+0x28],rax
0x00e7cae0: lea    rax,[rsp+0x58]
0x00e7cae5: mov    QWORD PTR [rsp+0x20],rax
0x00e7caea: movzx  r9d,r15w
0x00e7caee: movzx  r8d,r14w
0x00e7caf2: movzx  edx,si
0x00e7caf5: mov    rcx,rdi
0x00e7caf8: call   0x1414cbbe0
0x00e7cafd: movzx  eax,WORD PTR [rsp+0x50]
0x00e7cb02: mov    WORD PTR [rsp+0x30],ax
0x00e7cb07: mov    BYTE PTR [rsp+0x28],r12b
0x00e7cb0c: mov    DWORD PTR [rsp+0x20],r12d
0x00e7cb11: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7cb16: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7cb1c: lea    rdx,[rbp+0x0]
0x00e7cb20: mov    rcx,rdi
0x00e7cb23: call   0x1414cc890
0x00e7cb28: lea    rdx,[rbp+0x0]
0x00e7cb2c: mov    rcx,rbx
0x00e7cb2f: call   0x1400b9ca0
0x00e7cb34: lea    rdx,[rip+0x8af5cd]        # 0x14172c108 ; literal=" Upward Track (NSEW)"
0x00e7cb3b: mov    rcx,rbx
0x00e7cb3e: call   0x14006f4f0
0x00e7cb43: jmp    0x140e7e444
0x00e7cb48: movzx  r9d,r15w
0x00e7cb4c: movzx  r8d,r14w
0x00e7cb50: movzx  edx,si
0x00e7cb53: mov    rcx,rdi
0x00e7cb56: call   0x140e77e40
0x00e7cb5b: test   al,al
0x00e7cb5d: jne    0x140e7cb6e
0x00e7cb5f: lea    rdx,[rip+0x8af19a]        # 0x14172bd00 ; literal="Unusable "
0x00e7cb66: mov    rcx,rbx
0x00e7cb69: call   0x14006f4f0
0x00e7cb6e: mov    BYTE PTR [rsp+0x28],0x1
0x00e7cb73: mov    QWORD PTR [rsp+0x20],rbx
0x00e7cb78: movzx  r9d,r15w
0x00e7cb7c: movzx  r8d,r14w
0x00e7cb80: movzx  edx,si
0x00e7cb83: mov    rcx,rdi
0x00e7cb86: call   0x140a44750
0x00e7cb8b: lea    rdx,[rip+0x8af576]        # 0x14172c108 ; literal=" Upward Track (NSEW)"
0x00e7cb92: mov    rcx,rbx
0x00e7cb95: call   0x14006f4f0
0x00e7cb9a: jmp    0x140e7e444
0x00e7cb9f: movzx  r9d,r15w
0x00e7cba3: movzx  r8d,r14w
0x00e7cba7: movzx  edx,si
0x00e7cbaa: mov    rcx,rdi
0x00e7cbad: call   0x140e77e40
0x00e7cbb2: test   al,al
0x00e7cbb4: jne    0x140e7cbc5
0x00e7cbb6: lea    rdx,[rip+0x8af143]        # 0x14172bd00 ; literal="Unusable "
0x00e7cbbd: mov    rcx,rbx
0x00e7cbc0: call   0x14006f4f0
0x00e7cbc5: lea    rdx,[rip+0x8af554]        # 0x14172c120 ; literal="Ice Upward Track (NSEW)"
0x00e7cbcc: mov    rcx,rbx
0x00e7cbcf: call   0x14006f4f0
0x00e7cbd4: jmp    0x140e7e444
0x00e7cbd9: movzx  r9d,r15w
0x00e7cbdd: movzx  r8d,r14w
0x00e7cbe1: movzx  edx,si
0x00e7cbe4: mov    rcx,rdi
0x00e7cbe7: call   0x140e77e40
0x00e7cbec: test   al,al
0x00e7cbee: jne    0x140e7cbff
0x00e7cbf0: lea    rdx,[rip+0x8af109]        # 0x14172bd00 ; literal="Unusable "
0x00e7cbf7: mov    rcx,rbx
0x00e7cbfa: call   0x14006f4f0
0x00e7cbff: lea    rax,[rsp+0x50]
0x00e7cc04: mov    QWORD PTR [rsp+0x40],rax
0x00e7cc09: lea    rax,[rsp+0x60]
0x00e7cc0e: mov    QWORD PTR [rsp+0x38],rax
0x00e7cc13: lea    rax,[rsp+0x54]
0x00e7cc18: mov    QWORD PTR [rsp+0x30],rax
0x00e7cc1d: lea    rax,[rsp+0x5c]
0x00e7cc22: mov    QWORD PTR [rsp+0x28],rax
0x00e7cc27: lea    rax,[rsp+0x58]
0x00e7cc2c: mov    QWORD PTR [rsp+0x20],rax
0x00e7cc31: movzx  r9d,r15w
0x00e7cc35: movzx  r8d,r14w
0x00e7cc39: movzx  edx,si
0x00e7cc3c: mov    rcx,rdi
0x00e7cc3f: call   0x1414cbbe0
0x00e7cc44: movzx  eax,WORD PTR [rsp+0x50]
0x00e7cc49: mov    WORD PTR [rsp+0x30],ax
0x00e7cc4e: mov    BYTE PTR [rsp+0x28],r12b
0x00e7cc53: mov    DWORD PTR [rsp+0x20],r12d
0x00e7cc58: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7cc5d: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7cc63: lea    rdx,[rbp+0x0]
0x00e7cc67: mov    rcx,rdi
0x00e7cc6a: call   0x1414cc890
0x00e7cc6f: lea    rdx,[rbp+0x0]
0x00e7cc73: jmp    0x140e7b6b2
0x00e7cc78: movzx  r9d,r15w
0x00e7cc7c: movzx  r8d,r14w
0x00e7cc80: movzx  edx,si
0x00e7cc83: mov    rcx,rdi
0x00e7cc86: call   0x140e77e40
0x00e7cc8b: test   al,al
0x00e7cc8d: jne    0x140e7cc9e
0x00e7cc8f: lea    rdx,[rip+0x8af06a]        # 0x14172bd00 ; literal="Unusable "
0x00e7cc96: mov    rcx,rbx
0x00e7cc99: call   0x14006f4f0
0x00e7cc9e: mov    BYTE PTR [rsp+0x28],0x1
0x00e7cca3: mov    QWORD PTR [rsp+0x20],rbx
0x00e7cca8: movzx  r9d,r15w
0x00e7ccac: movzx  r8d,r14w
0x00e7ccb0: movzx  edx,si
0x00e7ccb3: mov    rcx,rdi
0x00e7ccb6: call   0x140a44750
0x00e7ccbb: lea    rdx,[rip+0x8af156]        # 0x14172be18 ; literal=" Upward Slope"
0x00e7ccc2: mov    rcx,rbx
0x00e7ccc5: call   0x14006f4f0
0x00e7ccca: jmp    0x140e7e444
0x00e7cccf: movzx  r9d,r15w
0x00e7ccd3: movzx  r8d,r14w
0x00e7ccd7: movzx  edx,si
0x00e7ccda: mov    rcx,rdi
0x00e7ccdd: call   0x140e77e40
0x00e7cce2: test   al,al
0x00e7cce4: jne    0x140e7ccf5
0x00e7cce6: lea    rdx,[rip+0x8af013]        # 0x14172bd00 ; literal="Unusable "
0x00e7cced: mov    rcx,rbx
0x00e7ccf0: call   0x14006f4f0
0x00e7ccf5: lea    rdx,[rip+0x8af43c]        # 0x14172c138 ; literal="Glacial Upward Slope"
0x00e7ccfc: mov    rcx,rbx
0x00e7ccff: call   0x14006f4f0
0x00e7cd04: jmp    0x140e7e444
0x00e7cd09: dec    r15w
0x00e7cd0d: movzx  r9d,r15w
0x00e7cd11: movzx  r8d,r14w
0x00e7cd15: movzx  edx,si
0x00e7cd18: mov    rcx,rdi
0x00e7cd1b: call   0x140e77e40
0x00e7cd20: test   al,al
0x00e7cd22: jne    0x140e7cd33
0x00e7cd24: lea    rdx,[rip+0x8aefd5]        # 0x14172bd00 ; literal="Unusable "
0x00e7cd2b: mov    rcx,rbx
0x00e7cd2e: call   0x14006f4f0
0x00e7cd33: movzx  r9d,r15w
0x00e7cd37: movzx  r8d,r14w
0x00e7cd3b: movzx  edx,si
0x00e7cd3e: mov    rcx,rdi
0x00e7cd41: call   0x140067f10
0x00e7cd46: movzx  eax,ax
0x00e7cd49: cmp    eax,0x202
0x00e7cd4e: ja     0x140e7d083
0x00e7cd54: je     0x140e7d052
0x00e7cd5a: sub    eax,0xe5
0x00e7cd5f: cmp    eax,0xc
0x00e7cd62: ja     0x140e7dd29
0x00e7cd68: cdqe
0x00e7cd6a: lea    rdx,[rip+0xffffffffff18328f]        # 0x140000000
0x00e7cd71: mov    ecx,DWORD PTR [rdx+rax*4+0xe7ecb0]
0x00e7cd78: add    rcx,rdx
0x00e7cd7b: jmp    rcx
0x00e7cd7d: movzx  r9d,r15w
0x00e7cd81: movzx  r8d,r14w
0x00e7cd85: movzx  edx,si
0x00e7cd88: mov    rcx,rdi
0x00e7cd8b: call   0x1414cc2a0
0x00e7cd90: mov    r15,rax
0x00e7cd93: test   rax,rax
0x00e7cd96: je     0x140e7ce2f
0x00e7cd9c: lea    rcx,[rdi+0x11b408]
0x00e7cda3: mov    edx,DWORD PTR [rax+0x8]
0x00e7cda6: call   0x14014d7e0
0x00e7cdab: mov    rdi,rax
0x00e7cdae: test   rax,rax
0x00e7cdb1: je     0x140e7ce2f
0x00e7cdb3: mov    edx,esi
0x00e7cdb5: and    edx,0x8000000f
0x00e7cdbb: jge    0x140e7cdc4
0x00e7cdbd: dec    edx
0x00e7cdbf: or     edx,0xfffffff0
0x00e7cdc2: inc    edx
0x00e7cdc4: mov    ecx,r14d
0x00e7cdc7: and    ecx,0x8000000f
0x00e7cdcd: jge    0x140e7cdd6
0x00e7cdcf: dec    ecx
0x00e7cdd1: or     ecx,0xfffffff0
0x00e7cdd4: inc    ecx
0x00e7cdd6: movsx  rax,dx
0x00e7cdda: shl    rax,0x4
0x00e7cdde: movsx  rcx,cx
0x00e7cde2: add    rax,r15
0x00e7cde5: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e7cdea: cmp    dl,0x43
0x00e7cded: jb     0x140e7cdf8
0x00e7cdef: lea    rdx,[rip+0x8af496]        # 0x14172c28c ; literal="Dense "
0x00e7cdf6: jmp    0x140e7ce04
0x00e7cdf8: cmp    dl,0x21
0x00e7cdfb: ja     0x140e7ce0c
0x00e7cdfd: lea    rdx,[rip+0x8af494]        # 0x14172c298 ; literal="Sparse "
0x00e7ce04: mov    rcx,rbx
0x00e7ce07: call   0x14006f4f0
0x00e7ce0c: lea    rdx,[rdi+0x90]
0x00e7ce13: mov    rcx,rbx
0x00e7ce16: call   0x1400b9ca0
0x00e7ce1b: lea    rdx,[rip+0x8af32e]        # 0x14172c150 ; literal=" Downward Slope"
0x00e7ce22: mov    rcx,rbx
0x00e7ce25: call   0x14006f4f0
0x00e7ce2a: jmp    0x140e7e444
0x00e7ce2f: lea    rdx,[rip+0x8af73a]        # 0x14172c570 ; literal="Grassy Downward Slope"
0x00e7ce36: mov    rcx,rbx
0x00e7ce39: call   0x14006f4f0
0x00e7ce3e: jmp    0x140e7e444
0x00e7ce43: movzx  r9d,r15w
0x00e7ce47: movzx  r8d,r14w
0x00e7ce4b: movzx  edx,si
0x00e7ce4e: mov    rcx,rdi
0x00e7ce51: call   0x1414cc2a0
0x00e7ce56: mov    r15,rax
0x00e7ce59: test   rax,rax
0x00e7ce5c: je     0x140e7cef0
0x00e7ce62: lea    rcx,[rdi+0x11b408]
0x00e7ce69: mov    edx,DWORD PTR [rax+0x8]
0x00e7ce6c: call   0x14014d7e0
0x00e7ce71: mov    rdi,rax
0x00e7ce74: test   rax,rax
0x00e7ce77: je     0x140e7cef0
0x00e7ce79: mov    edx,esi
0x00e7ce7b: and    edx,0x8000000f
0x00e7ce81: jge    0x140e7ce8a
0x00e7ce83: dec    edx
0x00e7ce85: or     edx,0xfffffff0
0x00e7ce88: inc    edx
0x00e7ce8a: mov    ecx,r14d
0x00e7ce8d: and    ecx,0x8000000f
0x00e7ce93: jge    0x140e7ce9c
0x00e7ce95: dec    ecx
0x00e7ce97: or     ecx,0xfffffff0
0x00e7ce9a: inc    ecx
0x00e7ce9c: movsx  rax,dx
0x00e7cea0: shl    rax,0x4
0x00e7cea4: movsx  rcx,cx
0x00e7cea8: add    rax,r15
0x00e7ceab: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e7ceb0: cmp    dl,0x43
0x00e7ceb3: jb     0x140e7ced0
0x00e7ceb5: lea    rdx,[rip+0x8af3d0]        # 0x14172c28c ; literal="Dense "
0x00e7cebc: mov    rcx,rbx
0x00e7cebf: call   0x14006f4f0
0x00e7cec4: lea    rdx,[rip+0x8af389]        # 0x14172c254 ; literal="Dry "
0x00e7cecb: jmp    0x140e7ce04
0x00e7ced0: cmp    dl,0x21
0x00e7ced3: ja     0x140e7cee4
0x00e7ced5: lea    rdx,[rip+0x8af3bc]        # 0x14172c298 ; literal="Sparse "
0x00e7cedc: mov    rcx,rbx
0x00e7cedf: call   0x14006f4f0
0x00e7cee4: lea    rdx,[rip+0x8af369]        # 0x14172c254 ; literal="Dry "
0x00e7ceeb: jmp    0x140e7ce04
0x00e7cef0: lea    rdx,[rip+0x8af691]        # 0x14172c588 ; literal="Dry Grass Downward Slope"
0x00e7cef7: mov    rcx,rbx
0x00e7cefa: call   0x14006f4f0
0x00e7ceff: jmp    0x140e7e444
0x00e7cf04: movzx  r9d,r15w
0x00e7cf08: movzx  r8d,r14w
0x00e7cf0c: movzx  edx,si
0x00e7cf0f: mov    rcx,rdi
0x00e7cf12: call   0x1414cc2a0
0x00e7cf17: mov    r15,rax
0x00e7cf1a: test   rax,rax
0x00e7cf1d: je     0x140e7cfb1
0x00e7cf23: lea    rcx,[rdi+0x11b408]
0x00e7cf2a: mov    edx,DWORD PTR [rax+0x8]
0x00e7cf2d: call   0x14014d7e0
0x00e7cf32: mov    rdi,rax
0x00e7cf35: test   rax,rax
0x00e7cf38: je     0x140e7cfb1
0x00e7cf3a: mov    edx,esi
0x00e7cf3c: and    edx,0x8000000f
0x00e7cf42: jge    0x140e7cf4b
0x00e7cf44: dec    edx
0x00e7cf46: or     edx,0xfffffff0
0x00e7cf49: inc    edx
0x00e7cf4b: mov    ecx,r14d
0x00e7cf4e: and    ecx,0x8000000f
0x00e7cf54: jge    0x140e7cf5d
0x00e7cf56: dec    ecx
0x00e7cf58: or     ecx,0xfffffff0
0x00e7cf5b: inc    ecx
0x00e7cf5d: movsx  rax,dx
0x00e7cf61: shl    rax,0x4
0x00e7cf65: movsx  rcx,cx
0x00e7cf69: add    rax,r15
0x00e7cf6c: movzx  edx,BYTE PTR [rcx+rax*1+0xc]
0x00e7cf71: cmp    dl,0x43
0x00e7cf74: jb     0x140e7cf91
0x00e7cf76: lea    rdx,[rip+0x8af30f]        # 0x14172c28c ; literal="Dense "
0x00e7cf7d: mov    rcx,rbx
0x00e7cf80: call   0x14006f4f0
0x00e7cf85: lea    rdx,[rip+0x8af2f8]        # 0x14172c284 ; literal="Dead "
0x00e7cf8c: jmp    0x140e7ce04
0x00e7cf91: cmp    dl,0x21
0x00e7cf94: ja     0x140e7cfa5
0x00e7cf96: lea    rdx,[rip+0x8af2fb]        # 0x14172c298 ; literal="Sparse "
0x00e7cf9d: mov    rcx,rbx
0x00e7cfa0: call   0x14006f4f0
0x00e7cfa5: lea    rdx,[rip+0x8af2d8]        # 0x14172c284 ; literal="Dead "
0x00e7cfac: jmp    0x140e7ce04
0x00e7cfb1: lea    rdx,[rip+0x8af5f0]        # 0x14172c5a8 ; literal="Dead Grass Downward Slope"
0x00e7cfb8: mov    rcx,rbx
0x00e7cfbb: call   0x14006f4f0
0x00e7cfc0: jmp    0x140e7e444
0x00e7cfc5: lea    rax,[rsp+0x50]
0x00e7cfca: mov    QWORD PTR [rsp+0x40],rax
0x00e7cfcf: lea    rax,[rsp+0x60]
0x00e7cfd4: mov    QWORD PTR [rsp+0x38],rax
0x00e7cfd9: lea    rax,[rsp+0x54]
0x00e7cfde: mov    QWORD PTR [rsp+0x30],rax
0x00e7cfe3: lea    rax,[rsp+0x5c]
0x00e7cfe8: mov    QWORD PTR [rsp+0x28],rax
0x00e7cfed: lea    rax,[rsp+0x58]
0x00e7cff2: mov    QWORD PTR [rsp+0x20],rax
0x00e7cff7: movzx  r9d,r15w
0x00e7cffb: movzx  r8d,r14w
0x00e7cfff: movzx  edx,si
0x00e7d002: mov    rcx,rdi
0x00e7d005: call   0x1414cbbe0
0x00e7d00a: movzx  eax,WORD PTR [rsp+0x50]
0x00e7d00f: mov    WORD PTR [rsp+0x30],ax
0x00e7d014: mov    BYTE PTR [rsp+0x28],r12b
0x00e7d019: mov    DWORD PTR [rsp+0x20],r12d
0x00e7d01e: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7d023: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7d029: lea    rdx,[rbp+0x0]
0x00e7d02d: mov    rcx,rdi
0x00e7d030: call   0x1414cc890
0x00e7d035: lea    rdx,[rbp+0x0]
0x00e7d039: jmp    0x140e7ce13
0x00e7d03e: lea    rdx,[rip+0x8af81b]        # 0x14172c860 ; literal="Glacial Downward Slope"
0x00e7d045: mov    rcx,rbx
0x00e7d048: call   0x14006f4f0
0x00e7d04d: jmp    0x140e7e444
0x00e7d052: mov    BYTE PTR [rsp+0x28],0x1
0x00e7d057: mov    QWORD PTR [rsp+0x20],rbx
0x00e7d05c: movzx  r9d,r15w
0x00e7d060: movzx  r8d,r14w
0x00e7d064: movzx  edx,si
0x00e7d067: mov    rcx,rdi
0x00e7d06a: call   0x140a44750
0x00e7d06f: lea    rdx,[rip+0x8af0da]        # 0x14172c150 ; literal=" Downward Slope"
0x00e7d076: mov    rcx,rbx
0x00e7d079: call   0x14006f4f0
0x00e7d07e: jmp    0x140e7e444
0x00e7d083: sub    eax,0x25d
0x00e7d088: cmp    eax,0x59
0x00e7d08b: ja     0x140e7dd29
0x00e7d091: cdqe
0x00e7d093: lea    rdx,[rip+0xffffffffff182f66]        # 0x140000000
0x00e7d09a: movzx  eax,BYTE PTR [rdx+rax*1+0xe7ed98]
0x00e7d0a2: mov    ecx,DWORD PTR [rdx+rax*4+0xe7ece4]
0x00e7d0a9: add    rcx,rdx
0x00e7d0ac: jmp    rcx
0x00e7d0ae: lea    rax,[rsp+0x50]
0x00e7d0b3: mov    QWORD PTR [rsp+0x40],rax
0x00e7d0b8: lea    rax,[rsp+0x60]
0x00e7d0bd: mov    QWORD PTR [rsp+0x38],rax
0x00e7d0c2: lea    rax,[rsp+0x54]
0x00e7d0c7: mov    QWORD PTR [rsp+0x30],rax
0x00e7d0cc: lea    rax,[rsp+0x5c]
0x00e7d0d1: mov    QWORD PTR [rsp+0x28],rax
0x00e7d0d6: lea    rax,[rsp+0x58]
0x00e7d0db: mov    QWORD PTR [rsp+0x20],rax
0x00e7d0e0: movzx  r9d,r15w
0x00e7d0e4: movzx  r8d,r14w
0x00e7d0e8: movzx  edx,si
0x00e7d0eb: mov    rcx,rdi
0x00e7d0ee: call   0x1414cbbe0
0x00e7d0f3: movzx  eax,WORD PTR [rsp+0x50]
0x00e7d0f8: mov    WORD PTR [rsp+0x30],ax
0x00e7d0fd: mov    BYTE PTR [rsp+0x28],r12b
0x00e7d102: mov    DWORD PTR [rsp+0x20],r12d
0x00e7d107: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7d10c: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7d112: lea    rdx,[rbp+0x0]
0x00e7d116: mov    rcx,rdi
0x00e7d119: call   0x1414cc890
0x00e7d11e: lea    rdx,[rbp+0x0]
0x00e7d122: mov    rcx,rbx
0x00e7d125: call   0x1400b9ca0
0x00e7d12a: lea    rdx,[rip+0x8af497]        # 0x14172c5c8 ; literal=" Downward Track (N)"
0x00e7d131: mov    rcx,rbx
0x00e7d134: call   0x14006f4f0
0x00e7d139: jmp    0x140e7e444
0x00e7d13e: mov    BYTE PTR [rsp+0x28],0x1
0x00e7d143: mov    QWORD PTR [rsp+0x20],rbx
0x00e7d148: movzx  r9d,r15w
0x00e7d14c: movzx  r8d,r14w
0x00e7d150: movzx  edx,si
0x00e7d153: mov    rcx,rdi
0x00e7d156: call   0x140a44750
0x00e7d15b: lea    rdx,[rip+0x8af466]        # 0x14172c5c8 ; literal=" Downward Track (N)"
0x00e7d162: mov    rcx,rbx
0x00e7d165: call   0x14006f4f0
0x00e7d16a: jmp    0x140e7e444
0x00e7d16f: lea    rdx,[rip+0x8af39a]        # 0x14172c510 ; literal="Ice Downward Track (N)"
0x00e7d176: mov    rcx,rbx
0x00e7d179: call   0x14006f4f0
0x00e7d17e: jmp    0x140e7e444
0x00e7d183: lea    rax,[rsp+0x50]
0x00e7d188: mov    QWORD PTR [rsp+0x40],rax
0x00e7d18d: lea    rax,[rsp+0x60]
0x00e7d192: mov    QWORD PTR [rsp+0x38],rax
0x00e7d197: lea    rax,[rsp+0x54]
0x00e7d19c: mov    QWORD PTR [rsp+0x30],rax
0x00e7d1a1: lea    rax,[rsp+0x5c]
0x00e7d1a6: mov    QWORD PTR [rsp+0x28],rax
0x00e7d1ab: lea    rax,[rsp+0x58]
0x00e7d1b0: mov    QWORD PTR [rsp+0x20],rax
0x00e7d1b5: movzx  r9d,r15w
0x00e7d1b9: movzx  r8d,r14w
0x00e7d1bd: movzx  edx,si
0x00e7d1c0: mov    rcx,rdi
0x00e7d1c3: call   0x1414cbbe0
0x00e7d1c8: movzx  eax,WORD PTR [rsp+0x50]
0x00e7d1cd: mov    WORD PTR [rsp+0x30],ax
0x00e7d1d2: mov    BYTE PTR [rsp+0x28],r12b
0x00e7d1d7: mov    DWORD PTR [rsp+0x20],r12d
0x00e7d1dc: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7d1e1: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7d1e7: lea    rdx,[rbp+0x0]
0x00e7d1eb: mov    rcx,rdi
0x00e7d1ee: call   0x1414cc890
0x00e7d1f3: lea    rdx,[rbp+0x0]
0x00e7d1f7: mov    rcx,rbx
0x00e7d1fa: call   0x1400b9ca0
0x00e7d1ff: lea    rdx,[rip+0x8af322]        # 0x14172c528 ; literal=" Downward Track (S)"
0x00e7d206: mov    rcx,rbx
0x00e7d209: call   0x14006f4f0
0x00e7d20e: jmp    0x140e7e444
0x00e7d213: mov    BYTE PTR [rsp+0x28],0x1
0x00e7d218: mov    QWORD PTR [rsp+0x20],rbx
0x00e7d21d: movzx  r9d,r15w
0x00e7d221: movzx  r8d,r14w
0x00e7d225: movzx  edx,si
0x00e7d228: mov    rcx,rdi
0x00e7d22b: call   0x140a44750
0x00e7d230: lea    rdx,[rip+0x8af2f1]        # 0x14172c528 ; literal=" Downward Track (S)"
0x00e7d237: mov    rcx,rbx
0x00e7d23a: call   0x14006f4f0
0x00e7d23f: jmp    0x140e7e444
0x00e7d244: lea    rdx,[rip+0x8af2f5]        # 0x14172c540 ; literal="Ice Downward Track (S)"
0x00e7d24b: mov    rcx,rbx
0x00e7d24e: call   0x14006f4f0
0x00e7d253: jmp    0x140e7e444
0x00e7d258: lea    rax,[rsp+0x50]
0x00e7d25d: mov    QWORD PTR [rsp+0x40],rax
0x00e7d262: lea    rax,[rsp+0x60]
0x00e7d267: mov    QWORD PTR [rsp+0x38],rax
0x00e7d26c: lea    rax,[rsp+0x54]
0x00e7d271: mov    QWORD PTR [rsp+0x30],rax
0x00e7d276: lea    rax,[rsp+0x5c]
0x00e7d27b: mov    QWORD PTR [rsp+0x28],rax
0x00e7d280: lea    rax,[rsp+0x58]
0x00e7d285: mov    QWORD PTR [rsp+0x20],rax
0x00e7d28a: movzx  r9d,r15w
0x00e7d28e: movzx  r8d,r14w
0x00e7d292: movzx  edx,si
0x00e7d295: mov    rcx,rdi
0x00e7d298: call   0x1414cbbe0
0x00e7d29d: movzx  eax,WORD PTR [rsp+0x50]
0x00e7d2a2: mov    WORD PTR [rsp+0x30],ax
0x00e7d2a7: mov    BYTE PTR [rsp+0x28],r12b
0x00e7d2ac: mov    DWORD PTR [rsp+0x20],r12d
0x00e7d2b1: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7d2b6: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7d2bc: lea    rdx,[rbp+0x0]
0x00e7d2c0: mov    rcx,rdi
0x00e7d2c3: call   0x1414cc890
0x00e7d2c8: lea    rdx,[rbp+0x0]
0x00e7d2cc: mov    rcx,rbx
0x00e7d2cf: call   0x1400b9ca0
0x00e7d2d4: lea    rdx,[rip+0x8af27d]        # 0x14172c558 ; literal=" Downward Track (E)"
0x00e7d2db: mov    rcx,rbx
0x00e7d2de: call   0x14006f4f0
0x00e7d2e3: jmp    0x140e7e444
0x00e7d2e8: mov    BYTE PTR [rsp+0x28],0x1
0x00e7d2ed: mov    QWORD PTR [rsp+0x20],rbx
0x00e7d2f2: movzx  r9d,r15w
0x00e7d2f6: movzx  r8d,r14w
0x00e7d2fa: movzx  edx,si
0x00e7d2fd: mov    rcx,rdi
0x00e7d300: call   0x140a44750
0x00e7d305: lea    rdx,[rip+0x8af24c]        # 0x14172c558 ; literal=" Downward Track (E)"
0x00e7d30c: mov    rcx,rbx
0x00e7d30f: call   0x14006f4f0
0x00e7d314: jmp    0x140e7e444
0x00e7d319: lea    rdx,[rip+0x8af320]        # 0x14172c640 ; literal="Ice Downward Track (E)"
0x00e7d320: mov    rcx,rbx
0x00e7d323: call   0x14006f4f0
0x00e7d328: jmp    0x140e7e444
0x00e7d32d: lea    rax,[rsp+0x50]
0x00e7d332: mov    QWORD PTR [rsp+0x40],rax
0x00e7d337: lea    rax,[rsp+0x60]
0x00e7d33c: mov    QWORD PTR [rsp+0x38],rax
0x00e7d341: lea    rax,[rsp+0x54]
0x00e7d346: mov    QWORD PTR [rsp+0x30],rax
0x00e7d34b: lea    rax,[rsp+0x5c]
0x00e7d350: mov    QWORD PTR [rsp+0x28],rax
0x00e7d355: lea    rax,[rsp+0x58]
0x00e7d35a: mov    QWORD PTR [rsp+0x20],rax
0x00e7d35f: movzx  r9d,r15w
0x00e7d363: movzx  r8d,r14w
0x00e7d367: movzx  edx,si
0x00e7d36a: mov    rcx,rdi
0x00e7d36d: call   0x1414cbbe0
0x00e7d372: movzx  eax,WORD PTR [rsp+0x50]
0x00e7d377: mov    WORD PTR [rsp+0x30],ax
0x00e7d37c: mov    BYTE PTR [rsp+0x28],r12b
0x00e7d381: mov    DWORD PTR [rsp+0x20],r12d
0x00e7d386: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7d38b: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7d391: lea    rdx,[rbp+0x0]
0x00e7d395: mov    rcx,rdi
0x00e7d398: call   0x1414cc890
0x00e7d39d: lea    rdx,[rbp+0x0]
0x00e7d3a1: mov    rcx,rbx
0x00e7d3a4: call   0x1400b9ca0
0x00e7d3a9: lea    rdx,[rip+0x8af2a8]        # 0x14172c658 ; literal=" Downward Track (W)"
0x00e7d3b0: mov    rcx,rbx
0x00e7d3b3: call   0x14006f4f0
0x00e7d3b8: jmp    0x140e7e444
0x00e7d3bd: mov    BYTE PTR [rsp+0x28],0x1
0x00e7d3c2: mov    QWORD PTR [rsp+0x20],rbx
0x00e7d3c7: movzx  r9d,r15w
0x00e7d3cb: movzx  r8d,r14w
0x00e7d3cf: movzx  edx,si
0x00e7d3d2: mov    rcx,rdi
0x00e7d3d5: call   0x140a44750
0x00e7d3da: lea    rdx,[rip+0x8af277]        # 0x14172c658 ; literal=" Downward Track (W)"
0x00e7d3e1: mov    rcx,rbx
0x00e7d3e4: call   0x14006f4f0
0x00e7d3e9: jmp    0x140e7e444
0x00e7d3ee: lea    rdx,[rip+0x8af27b]        # 0x14172c670 ; literal="Ice Downward Track (W)"
0x00e7d3f5: mov    rcx,rbx
0x00e7d3f8: call   0x14006f4f0
0x00e7d3fd: jmp    0x140e7e444
0x00e7d402: lea    rax,[rsp+0x50]
0x00e7d407: mov    QWORD PTR [rsp+0x40],rax
0x00e7d40c: lea    rax,[rsp+0x60]
0x00e7d411: mov    QWORD PTR [rsp+0x38],rax
0x00e7d416: lea    rax,[rsp+0x54]
0x00e7d41b: mov    QWORD PTR [rsp+0x30],rax
0x00e7d420: lea    rax,[rsp+0x5c]
0x00e7d425: mov    QWORD PTR [rsp+0x28],rax
0x00e7d42a: lea    rax,[rsp+0x58]
0x00e7d42f: mov    QWORD PTR [rsp+0x20],rax
0x00e7d434: movzx  r9d,r15w
0x00e7d438: movzx  r8d,r14w
0x00e7d43c: movzx  edx,si
0x00e7d43f: mov    rcx,rdi
0x00e7d442: call   0x1414cbbe0
0x00e7d447: movzx  eax,WORD PTR [rsp+0x50]
0x00e7d44c: mov    WORD PTR [rsp+0x30],ax
0x00e7d451: mov    BYTE PTR [rsp+0x28],r12b
0x00e7d456: mov    DWORD PTR [rsp+0x20],r12d
0x00e7d45b: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7d460: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7d466: lea    rdx,[rbp+0x0]
0x00e7d46a: mov    rcx,rdi
0x00e7d46d: call   0x1414cc890
0x00e7d472: lea    rdx,[rbp+0x0]
0x00e7d476: mov    rcx,rbx
0x00e7d479: call   0x1400b9ca0
0x00e7d47e: lea    rdx,[rip+0x8af203]        # 0x14172c688 ; literal=" Downward Track (NS)"
0x00e7d485: mov    rcx,rbx
0x00e7d488: call   0x14006f4f0
0x00e7d48d: jmp    0x140e7e444
0x00e7d492: mov    BYTE PTR [rsp+0x28],0x1
0x00e7d497: mov    QWORD PTR [rsp+0x20],rbx
0x00e7d49c: movzx  r9d,r15w
0x00e7d4a0: movzx  r8d,r14w
0x00e7d4a4: movzx  edx,si
0x00e7d4a7: mov    rcx,rdi
0x00e7d4aa: call   0x140a44750
0x00e7d4af: lea    rdx,[rip+0x8af1d2]        # 0x14172c688 ; literal=" Downward Track (NS)"
0x00e7d4b6: mov    rcx,rbx
0x00e7d4b9: call   0x14006f4f0
0x00e7d4be: jmp    0x140e7e444
0x00e7d4c3: lea    rdx,[rip+0x8af116]        # 0x14172c5e0 ; literal="Ice Downward Track (NS)"
0x00e7d4ca: mov    rcx,rbx
0x00e7d4cd: call   0x14006f4f0
0x00e7d4d2: jmp    0x140e7e444
0x00e7d4d7: lea    rax,[rsp+0x50]
0x00e7d4dc: mov    QWORD PTR [rsp+0x40],rax
0x00e7d4e1: lea    rax,[rsp+0x60]
0x00e7d4e6: mov    QWORD PTR [rsp+0x38],rax
0x00e7d4eb: lea    rax,[rsp+0x54]
0x00e7d4f0: mov    QWORD PTR [rsp+0x30],rax
0x00e7d4f5: lea    rax,[rsp+0x5c]
0x00e7d4fa: mov    QWORD PTR [rsp+0x28],rax
0x00e7d4ff: lea    rax,[rsp+0x58]
0x00e7d504: mov    QWORD PTR [rsp+0x20],rax
0x00e7d509: movzx  r9d,r15w
0x00e7d50d: movzx  r8d,r14w
0x00e7d511: movzx  edx,si
0x00e7d514: mov    rcx,rdi
0x00e7d517: call   0x1414cbbe0
0x00e7d51c: movzx  eax,WORD PTR [rsp+0x50]
0x00e7d521: mov    WORD PTR [rsp+0x30],ax
0x00e7d526: mov    BYTE PTR [rsp+0x28],r12b
0x00e7d52b: mov    DWORD PTR [rsp+0x20],r12d
0x00e7d530: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7d535: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7d53b: lea    rdx,[rbp+0x0]
0x00e7d53f: mov    rcx,rdi
0x00e7d542: call   0x1414cc890
0x00e7d547: lea    rdx,[rbp+0x0]
0x00e7d54b: mov    rcx,rbx
0x00e7d54e: call   0x1400b9ca0
0x00e7d553: lea    rdx,[rip+0x8af09e]        # 0x14172c5f8 ; literal=" Downward Track (NE)"
0x00e7d55a: mov    rcx,rbx
0x00e7d55d: call   0x14006f4f0
0x00e7d562: jmp    0x140e7e444
0x00e7d567: mov    BYTE PTR [rsp+0x28],0x1
0x00e7d56c: mov    QWORD PTR [rsp+0x20],rbx
0x00e7d571: movzx  r9d,r15w
0x00e7d575: movzx  r8d,r14w
0x00e7d579: movzx  edx,si
0x00e7d57c: mov    rcx,rdi
0x00e7d57f: call   0x140a44750
0x00e7d584: lea    rdx,[rip+0x8af06d]        # 0x14172c5f8 ; literal=" Downward Track (NE)"
0x00e7d58b: mov    rcx,rbx
0x00e7d58e: call   0x14006f4f0
0x00e7d593: jmp    0x140e7e444
0x00e7d598: lea    rdx,[rip+0x8af071]        # 0x14172c610 ; literal="Ice Downward Track (NE)"
0x00e7d59f: mov    rcx,rbx
0x00e7d5a2: call   0x14006f4f0
0x00e7d5a7: jmp    0x140e7e444
0x00e7d5ac: lea    rax,[rsp+0x50]
0x00e7d5b1: mov    QWORD PTR [rsp+0x40],rax
0x00e7d5b6: lea    rax,[rsp+0x60]
0x00e7d5bb: mov    QWORD PTR [rsp+0x38],rax
0x00e7d5c0: lea    rax,[rsp+0x54]
0x00e7d5c5: mov    QWORD PTR [rsp+0x30],rax
0x00e7d5ca: lea    rax,[rsp+0x5c]
0x00e7d5cf: mov    QWORD PTR [rsp+0x28],rax
0x00e7d5d4: lea    rax,[rsp+0x58]
0x00e7d5d9: mov    QWORD PTR [rsp+0x20],rax
0x00e7d5de: movzx  r9d,r15w
0x00e7d5e2: movzx  r8d,r14w
0x00e7d5e6: movzx  edx,si
0x00e7d5e9: mov    rcx,rdi
0x00e7d5ec: call   0x1414cbbe0
0x00e7d5f1: movzx  eax,WORD PTR [rsp+0x50]
0x00e7d5f6: mov    WORD PTR [rsp+0x30],ax
0x00e7d5fb: mov    BYTE PTR [rsp+0x28],r12b
0x00e7d600: mov    DWORD PTR [rsp+0x20],r12d
0x00e7d605: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7d60a: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7d610: lea    rdx,[rbp+0x0]
0x00e7d614: mov    rcx,rdi
0x00e7d617: call   0x1414cc890
0x00e7d61c: lea    rdx,[rbp+0x0]
0x00e7d620: mov    rcx,rbx
0x00e7d623: call   0x1400b9ca0
0x00e7d628: lea    rdx,[rip+0x8aeff9]        # 0x14172c628 ; literal=" Downward Track (NW)"
0x00e7d62f: mov    rcx,rbx
0x00e7d632: call   0x14006f4f0
0x00e7d637: jmp    0x140e7e444
0x00e7d63c: mov    BYTE PTR [rsp+0x28],0x1
0x00e7d641: mov    QWORD PTR [rsp+0x20],rbx
0x00e7d646: movzx  r9d,r15w
0x00e7d64a: movzx  r8d,r14w
0x00e7d64e: movzx  edx,si
0x00e7d651: mov    rcx,rdi
0x00e7d654: call   0x140a44750
0x00e7d659: lea    rdx,[rip+0x8aefc8]        # 0x14172c628 ; literal=" Downward Track (NW)"
0x00e7d660: mov    rcx,rbx
0x00e7d663: call   0x14006f4f0
0x00e7d668: jmp    0x140e7e444
0x00e7d66d: lea    rdx,[rip+0x8af08c]        # 0x14172c700 ; literal="Ice Downward Track (NW)"
0x00e7d674: mov    rcx,rbx
0x00e7d677: call   0x14006f4f0
0x00e7d67c: jmp    0x140e7e444
0x00e7d681: lea    rax,[rsp+0x50]
0x00e7d686: mov    QWORD PTR [rsp+0x40],rax
0x00e7d68b: lea    rax,[rsp+0x60]
0x00e7d690: mov    QWORD PTR [rsp+0x38],rax
0x00e7d695: lea    rax,[rsp+0x54]
0x00e7d69a: mov    QWORD PTR [rsp+0x30],rax
0x00e7d69f: lea    rax,[rsp+0x5c]
0x00e7d6a4: mov    QWORD PTR [rsp+0x28],rax
0x00e7d6a9: lea    rax,[rsp+0x58]
0x00e7d6ae: mov    QWORD PTR [rsp+0x20],rax
0x00e7d6b3: movzx  r9d,r15w
0x00e7d6b7: movzx  r8d,r14w
0x00e7d6bb: movzx  edx,si
0x00e7d6be: mov    rcx,rdi
0x00e7d6c1: call   0x1414cbbe0
0x00e7d6c6: movzx  eax,WORD PTR [rsp+0x50]
0x00e7d6cb: mov    WORD PTR [rsp+0x30],ax
0x00e7d6d0: mov    BYTE PTR [rsp+0x28],r12b
0x00e7d6d5: mov    DWORD PTR [rsp+0x20],r12d
0x00e7d6da: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7d6df: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7d6e5: lea    rdx,[rbp+0x0]
0x00e7d6e9: mov    rcx,rdi
0x00e7d6ec: call   0x1414cc890
0x00e7d6f1: lea    rdx,[rbp+0x0]
0x00e7d6f5: mov    rcx,rbx
0x00e7d6f8: call   0x1400b9ca0
0x00e7d6fd: lea    rdx,[rip+0x8af014]        # 0x14172c718 ; literal=" Downward Track (SE)"
0x00e7d704: mov    rcx,rbx
0x00e7d707: call   0x14006f4f0
0x00e7d70c: jmp    0x140e7e444
0x00e7d711: mov    BYTE PTR [rsp+0x28],0x1
0x00e7d716: mov    QWORD PTR [rsp+0x20],rbx
0x00e7d71b: movzx  r9d,r15w
0x00e7d71f: movzx  r8d,r14w
0x00e7d723: movzx  edx,si
0x00e7d726: mov    rcx,rdi
0x00e7d729: call   0x140a44750
0x00e7d72e: lea    rdx,[rip+0x8aefe3]        # 0x14172c718 ; literal=" Downward Track (SE)"
0x00e7d735: mov    rcx,rbx
0x00e7d738: call   0x14006f4f0
0x00e7d73d: jmp    0x140e7e444
0x00e7d742: lea    rdx,[rip+0x8aefe7]        # 0x14172c730 ; literal="Ice Downward Track (SE)"
0x00e7d749: mov    rcx,rbx
0x00e7d74c: call   0x14006f4f0
0x00e7d751: jmp    0x140e7e444
0x00e7d756: lea    rax,[rsp+0x50]
0x00e7d75b: mov    QWORD PTR [rsp+0x40],rax
0x00e7d760: lea    rax,[rsp+0x60]
0x00e7d765: mov    QWORD PTR [rsp+0x38],rax
0x00e7d76a: lea    rax,[rsp+0x54]
0x00e7d76f: mov    QWORD PTR [rsp+0x30],rax
0x00e7d774: lea    rax,[rsp+0x5c]
0x00e7d779: mov    QWORD PTR [rsp+0x28],rax
0x00e7d77e: lea    rax,[rsp+0x58]
0x00e7d783: mov    QWORD PTR [rsp+0x20],rax
0x00e7d788: movzx  r9d,r15w
0x00e7d78c: movzx  r8d,r14w
0x00e7d790: movzx  edx,si
0x00e7d793: mov    rcx,rdi
0x00e7d796: call   0x1414cbbe0
0x00e7d79b: movzx  eax,WORD PTR [rsp+0x50]
0x00e7d7a0: mov    WORD PTR [rsp+0x30],ax
0x00e7d7a5: mov    BYTE PTR [rsp+0x28],r12b
0x00e7d7aa: mov    DWORD PTR [rsp+0x20],r12d
0x00e7d7af: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7d7b4: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7d7ba: lea    rdx,[rbp+0x0]
0x00e7d7be: mov    rcx,rdi
0x00e7d7c1: call   0x1414cc890
0x00e7d7c6: lea    rdx,[rbp+0x0]
0x00e7d7ca: mov    rcx,rbx
0x00e7d7cd: call   0x1400b9ca0
0x00e7d7d2: lea    rdx,[rip+0x8aef6f]        # 0x14172c748 ; literal=" Downward Track (SW)"
0x00e7d7d9: mov    rcx,rbx
0x00e7d7dc: call   0x14006f4f0
0x00e7d7e1: jmp    0x140e7e444
0x00e7d7e6: mov    BYTE PTR [rsp+0x28],0x1
0x00e7d7eb: mov    QWORD PTR [rsp+0x20],rbx
0x00e7d7f0: movzx  r9d,r15w
0x00e7d7f4: movzx  r8d,r14w
0x00e7d7f8: movzx  edx,si
0x00e7d7fb: mov    rcx,rdi
0x00e7d7fe: call   0x140a44750
0x00e7d803: lea    rdx,[rip+0x8aef3e]        # 0x14172c748 ; literal=" Downward Track (SW)"
0x00e7d80a: mov    rcx,rbx
0x00e7d80d: call   0x14006f4f0
0x00e7d812: jmp    0x140e7e444
0x00e7d817: lea    rdx,[rip+0x8aee82]        # 0x14172c6a0 ; literal="Ice Downward Track (SW)"
0x00e7d81e: mov    rcx,rbx
0x00e7d821: call   0x14006f4f0
0x00e7d826: jmp    0x140e7e444
0x00e7d82b: lea    rax,[rsp+0x50]
0x00e7d830: mov    QWORD PTR [rsp+0x40],rax
0x00e7d835: lea    rax,[rsp+0x60]
0x00e7d83a: mov    QWORD PTR [rsp+0x38],rax
0x00e7d83f: lea    rax,[rsp+0x54]
0x00e7d844: mov    QWORD PTR [rsp+0x30],rax
0x00e7d849: lea    rax,[rsp+0x5c]
0x00e7d84e: mov    QWORD PTR [rsp+0x28],rax
0x00e7d853: lea    rax,[rsp+0x58]
0x00e7d858: mov    QWORD PTR [rsp+0x20],rax
0x00e7d85d: movzx  r9d,r15w
0x00e7d861: movzx  r8d,r14w
0x00e7d865: movzx  edx,si
0x00e7d868: mov    rcx,rdi
0x00e7d86b: call   0x1414cbbe0
0x00e7d870: movzx  eax,WORD PTR [rsp+0x50]
0x00e7d875: mov    WORD PTR [rsp+0x30],ax
0x00e7d87a: mov    BYTE PTR [rsp+0x28],r12b
0x00e7d87f: mov    DWORD PTR [rsp+0x20],r12d
0x00e7d884: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7d889: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7d88f: lea    rdx,[rbp+0x0]
0x00e7d893: mov    rcx,rdi
0x00e7d896: call   0x1414cc890
0x00e7d89b: lea    rdx,[rbp+0x0]
0x00e7d89f: mov    rcx,rbx
0x00e7d8a2: call   0x1400b9ca0
0x00e7d8a7: lea    rdx,[rip+0x8aee0a]        # 0x14172c6b8 ; literal=" Downward Track (EW)"
0x00e7d8ae: mov    rcx,rbx
0x00e7d8b1: call   0x14006f4f0
0x00e7d8b6: jmp    0x140e7e444
0x00e7d8bb: mov    BYTE PTR [rsp+0x28],0x1
0x00e7d8c0: mov    QWORD PTR [rsp+0x20],rbx
0x00e7d8c5: movzx  r9d,r15w
0x00e7d8c9: movzx  r8d,r14w
0x00e7d8cd: movzx  edx,si
0x00e7d8d0: mov    rcx,rdi
0x00e7d8d3: call   0x140a44750
0x00e7d8d8: lea    rdx,[rip+0x8aedd9]        # 0x14172c6b8 ; literal=" Downward Track (EW)"
0x00e7d8df: mov    rcx,rbx
0x00e7d8e2: call   0x14006f4f0
0x00e7d8e7: jmp    0x140e7e444
0x00e7d8ec: lea    rdx,[rip+0x8aeddd]        # 0x14172c6d0 ; literal="Ice Downward Track (EW)"
0x00e7d8f3: mov    rcx,rbx
0x00e7d8f6: call   0x14006f4f0
0x00e7d8fb: jmp    0x140e7e444
0x00e7d900: lea    rax,[rsp+0x50]
0x00e7d905: mov    QWORD PTR [rsp+0x40],rax
0x00e7d90a: lea    rax,[rsp+0x60]
0x00e7d90f: mov    QWORD PTR [rsp+0x38],rax
0x00e7d914: lea    rax,[rsp+0x54]
0x00e7d919: mov    QWORD PTR [rsp+0x30],rax
0x00e7d91e: lea    rax,[rsp+0x5c]
0x00e7d923: mov    QWORD PTR [rsp+0x28],rax
0x00e7d928: lea    rax,[rsp+0x58]
0x00e7d92d: mov    QWORD PTR [rsp+0x20],rax
0x00e7d932: movzx  r9d,r15w
0x00e7d936: movzx  r8d,r14w
0x00e7d93a: movzx  edx,si
0x00e7d93d: mov    rcx,rdi
0x00e7d940: call   0x1414cbbe0
0x00e7d945: movzx  eax,WORD PTR [rsp+0x50]
0x00e7d94a: mov    WORD PTR [rsp+0x30],ax
0x00e7d94f: mov    BYTE PTR [rsp+0x28],r12b
0x00e7d954: mov    DWORD PTR [rsp+0x20],r12d
0x00e7d959: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7d95e: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7d964: lea    rdx,[rbp+0x0]
0x00e7d968: mov    rcx,rdi
0x00e7d96b: call   0x1414cc890
0x00e7d970: lea    rdx,[rbp+0x0]
0x00e7d974: mov    rcx,rbx
0x00e7d977: call   0x1400b9ca0
0x00e7d97c: lea    rdx,[rip+0x8aed65]        # 0x14172c6e8 ; literal=" Downward Track (NSE)"
0x00e7d983: mov    rcx,rbx
0x00e7d986: call   0x14006f4f0
0x00e7d98b: jmp    0x140e7e444
0x00e7d990: mov    BYTE PTR [rsp+0x28],0x1
0x00e7d995: mov    QWORD PTR [rsp+0x20],rbx
0x00e7d99a: movzx  r9d,r15w
0x00e7d99e: movzx  r8d,r14w
0x00e7d9a2: movzx  edx,si
0x00e7d9a5: mov    rcx,rdi
0x00e7d9a8: call   0x140a44750
0x00e7d9ad: lea    rdx,[rip+0x8aed34]        # 0x14172c6e8 ; literal=" Downward Track (NSE)"
0x00e7d9b4: mov    rcx,rbx
0x00e7d9b7: call   0x14006f4f0
0x00e7d9bc: jmp    0x140e7e444
0x00e7d9c1: lea    rdx,[rip+0x8aee08]        # 0x14172c7d0 ; literal="Ice Downward Track (NSE)"
0x00e7d9c8: mov    rcx,rbx
0x00e7d9cb: call   0x14006f4f0
0x00e7d9d0: jmp    0x140e7e444
0x00e7d9d5: lea    rax,[rsp+0x50]
0x00e7d9da: mov    QWORD PTR [rsp+0x40],rax
0x00e7d9df: lea    rax,[rsp+0x60]
0x00e7d9e4: mov    QWORD PTR [rsp+0x38],rax
0x00e7d9e9: lea    rax,[rsp+0x54]
0x00e7d9ee: mov    QWORD PTR [rsp+0x30],rax
0x00e7d9f3: lea    rax,[rsp+0x5c]
0x00e7d9f8: mov    QWORD PTR [rsp+0x28],rax
0x00e7d9fd: lea    rax,[rsp+0x58]
0x00e7da02: mov    QWORD PTR [rsp+0x20],rax
0x00e7da07: movzx  r9d,r15w
0x00e7da0b: movzx  r8d,r14w
0x00e7da0f: movzx  edx,si
0x00e7da12: mov    rcx,rdi
0x00e7da15: call   0x1414cbbe0
0x00e7da1a: movzx  eax,WORD PTR [rsp+0x50]
0x00e7da1f: mov    WORD PTR [rsp+0x30],ax
0x00e7da24: mov    BYTE PTR [rsp+0x28],r12b
0x00e7da29: mov    DWORD PTR [rsp+0x20],r12d
0x00e7da2e: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7da33: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7da39: lea    rdx,[rbp+0x0]
0x00e7da3d: mov    rcx,rdi
0x00e7da40: call   0x1414cc890
0x00e7da45: lea    rdx,[rbp+0x0]
0x00e7da49: mov    rcx,rbx
0x00e7da4c: call   0x1400b9ca0
0x00e7da51: lea    rdx,[rip+0x8aed98]        # 0x14172c7f0 ; literal=" Downward Track (NSW)"
0x00e7da58: mov    rcx,rbx
0x00e7da5b: call   0x14006f4f0
0x00e7da60: jmp    0x140e7e444
0x00e7da65: mov    BYTE PTR [rsp+0x28],0x1
0x00e7da6a: mov    QWORD PTR [rsp+0x20],rbx
0x00e7da6f: movzx  r9d,r15w
0x00e7da73: movzx  r8d,r14w
0x00e7da77: movzx  edx,si
0x00e7da7a: mov    rcx,rdi
0x00e7da7d: call   0x140a44750
0x00e7da82: lea    rdx,[rip+0x8aed67]        # 0x14172c7f0 ; literal=" Downward Track (NSW)"
0x00e7da89: mov    rcx,rbx
0x00e7da8c: call   0x14006f4f0
0x00e7da91: jmp    0x140e7e444
0x00e7da96: lea    rdx,[rip+0x8aed6b]        # 0x14172c808 ; literal="Ice Downward Track (NSW)"
0x00e7da9d: mov    rcx,rbx
0x00e7daa0: call   0x14006f4f0
0x00e7daa5: jmp    0x140e7e444
0x00e7daaa: lea    rax,[rsp+0x50]
0x00e7daaf: mov    QWORD PTR [rsp+0x40],rax
0x00e7dab4: lea    rax,[rsp+0x60]
0x00e7dab9: mov    QWORD PTR [rsp+0x38],rax
0x00e7dabe: lea    rax,[rsp+0x54]
0x00e7dac3: mov    QWORD PTR [rsp+0x30],rax
0x00e7dac8: lea    rax,[rsp+0x5c]
0x00e7dacd: mov    QWORD PTR [rsp+0x28],rax
0x00e7dad2: lea    rax,[rsp+0x58]
0x00e7dad7: mov    QWORD PTR [rsp+0x20],rax
0x00e7dadc: movzx  r9d,r15w
0x00e7dae0: movzx  r8d,r14w
0x00e7dae4: movzx  edx,si
0x00e7dae7: mov    rcx,rdi
0x00e7daea: call   0x1414cbbe0
0x00e7daef: movzx  eax,WORD PTR [rsp+0x50]
0x00e7daf4: mov    WORD PTR [rsp+0x30],ax
0x00e7daf9: mov    BYTE PTR [rsp+0x28],r12b
0x00e7dafe: mov    DWORD PTR [rsp+0x20],r12d
0x00e7db03: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7db08: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7db0e: lea    rdx,[rbp+0x0]
0x00e7db12: mov    rcx,rdi
0x00e7db15: call   0x1414cc890
0x00e7db1a: lea    rdx,[rbp+0x0]
0x00e7db1e: mov    rcx,rbx
0x00e7db21: call   0x1400b9ca0
0x00e7db26: lea    rdx,[rip+0x8aecfb]        # 0x14172c828 ; literal=" Downward Track (NEW)"
0x00e7db2d: mov    rcx,rbx
0x00e7db30: call   0x14006f4f0
0x00e7db35: jmp    0x140e7e444
0x00e7db3a: mov    BYTE PTR [rsp+0x28],0x1
0x00e7db3f: mov    QWORD PTR [rsp+0x20],rbx
0x00e7db44: movzx  r9d,r15w
0x00e7db48: movzx  r8d,r14w
0x00e7db4c: movzx  edx,si
0x00e7db4f: mov    rcx,rdi
0x00e7db52: call   0x140a44750
0x00e7db57: lea    rdx,[rip+0x8aecca]        # 0x14172c828 ; literal=" Downward Track (NEW)"
0x00e7db5e: mov    rcx,rbx
0x00e7db61: call   0x14006f4f0
0x00e7db66: jmp    0x140e7e444
0x00e7db6b: lea    rdx,[rip+0x8aebee]        # 0x14172c760 ; literal="Ice Downward Track (NEW)"
0x00e7db72: mov    rcx,rbx
0x00e7db75: call   0x14006f4f0
0x00e7db7a: jmp    0x140e7e444
0x00e7db7f: lea    rax,[rsp+0x50]
0x00e7db84: mov    QWORD PTR [rsp+0x40],rax
0x00e7db89: lea    rax,[rsp+0x60]
0x00e7db8e: mov    QWORD PTR [rsp+0x38],rax
0x00e7db93: lea    rax,[rsp+0x54]
0x00e7db98: mov    QWORD PTR [rsp+0x30],rax
0x00e7db9d: lea    rax,[rsp+0x5c]
0x00e7dba2: mov    QWORD PTR [rsp+0x28],rax
0x00e7dba7: lea    rax,[rsp+0x58]
0x00e7dbac: mov    QWORD PTR [rsp+0x20],rax
0x00e7dbb1: movzx  r9d,r15w
0x00e7dbb5: movzx  r8d,r14w
0x00e7dbb9: movzx  edx,si
0x00e7dbbc: mov    rcx,rdi
0x00e7dbbf: call   0x1414cbbe0
0x00e7dbc4: movzx  eax,WORD PTR [rsp+0x50]
0x00e7dbc9: mov    WORD PTR [rsp+0x30],ax
0x00e7dbce: mov    BYTE PTR [rsp+0x28],r12b
0x00e7dbd3: mov    DWORD PTR [rsp+0x20],r12d
0x00e7dbd8: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7dbdd: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7dbe3: lea    rdx,[rbp+0x0]
0x00e7dbe7: mov    rcx,rdi
0x00e7dbea: call   0x1414cc890
0x00e7dbef: lea    rdx,[rbp+0x0]
0x00e7dbf3: mov    rcx,rbx
0x00e7dbf6: call   0x1400b9ca0
0x00e7dbfb: lea    rdx,[rip+0x8aeb7e]        # 0x14172c780 ; literal=" Downward Track (SEW)"
0x00e7dc02: mov    rcx,rbx
0x00e7dc05: call   0x14006f4f0
0x00e7dc0a: jmp    0x140e7e444
0x00e7dc0f: mov    BYTE PTR [rsp+0x28],0x1
0x00e7dc14: mov    QWORD PTR [rsp+0x20],rbx
0x00e7dc19: movzx  r9d,r15w
0x00e7dc1d: movzx  r8d,r14w
0x00e7dc21: movzx  edx,si
0x00e7dc24: mov    rcx,rdi
0x00e7dc27: call   0x140a44750
0x00e7dc2c: lea    rdx,[rip+0x8aeb4d]        # 0x14172c780 ; literal=" Downward Track (SEW)"
0x00e7dc33: mov    rcx,rbx
0x00e7dc36: call   0x14006f4f0
0x00e7dc3b: jmp    0x140e7e444
0x00e7dc40: lea    rdx,[rip+0x8aeb51]        # 0x14172c798 ; literal="Ice Downward Track (SEW)"
0x00e7dc47: mov    rcx,rbx
0x00e7dc4a: call   0x14006f4f0
0x00e7dc4f: jmp    0x140e7e444
0x00e7dc54: lea    rax,[rsp+0x50]
0x00e7dc59: mov    QWORD PTR [rsp+0x40],rax
0x00e7dc5e: lea    rax,[rsp+0x60]
0x00e7dc63: mov    QWORD PTR [rsp+0x38],rax
0x00e7dc68: lea    rax,[rsp+0x54]
0x00e7dc6d: mov    QWORD PTR [rsp+0x30],rax
0x00e7dc72: lea    rax,[rsp+0x5c]
0x00e7dc77: mov    QWORD PTR [rsp+0x28],rax
0x00e7dc7c: lea    rax,[rsp+0x58]
0x00e7dc81: mov    QWORD PTR [rsp+0x20],rax
0x00e7dc86: movzx  r9d,r15w
0x00e7dc8a: movzx  r8d,r14w
0x00e7dc8e: movzx  edx,si
0x00e7dc91: mov    rcx,rdi
0x00e7dc94: call   0x1414cbbe0
0x00e7dc99: movzx  eax,WORD PTR [rsp+0x50]
0x00e7dc9e: mov    WORD PTR [rsp+0x30],ax
0x00e7dca3: mov    BYTE PTR [rsp+0x28],r12b
0x00e7dca8: mov    DWORD PTR [rsp+0x20],r12d
0x00e7dcad: mov    r9d,DWORD PTR [rsp+0x60]
0x00e7dcb2: movzx  r8d,WORD PTR [rsp+0x54]
0x00e7dcb8: lea    rdx,[rbp+0x0]
0x00e7dcbc: mov    rcx,rdi
0x00e7dcbf: call   0x1414cc890
0x00e7dcc4: lea    rdx,[rbp+0x0]
0x00e7dcc8: mov    rcx,rbx
0x00e7dccb: call   0x1400b9ca0
0x00e7dcd0: lea    rdx,[rip+0x8aeae1]        # 0x14172c7b8 ; literal=" Downward Track (NSEW)"
0x00e7dcd7: mov    rcx,rbx
0x00e7dcda: call   0x14006f4f0
0x00e7dcdf: jmp    0x140e7e444
0x00e7dce4: mov    BYTE PTR [rsp+0x28],0x1
0x00e7dce9: mov    QWORD PTR [rsp+0x20],rbx
0x00e7dcee: movzx  r9d,r15w
0x00e7dcf2: movzx  r8d,r14w
0x00e7dcf6: movzx  edx,si
0x00e7dcf9: mov    rcx,rdi
0x00e7dcfc: call   0x140a44750
0x00e7dd01: lea    rdx,[rip+0x8aeab0]        # 0x14172c7b8 ; literal=" Downward Track (NSEW)"
0x00e7dd08: mov    rcx,rbx
0x00e7dd0b: call   0x14006f4f0
0x00e7dd10: jmp    0x140e7e444
0x00e7dd15: lea    rdx,[rip+0x8aeb24]        # 0x14172c840 ; literal="Ice Downward Track (NSEW)"
0x00e7dd1c: mov    rcx,rbx
0x00e7dd1f: call   0x14006f4f0
0x00e7dd24: jmp    0x140e7e444
0x00e7dd29: lea    rdx,[rip+0x8aeb48]        # 0x14172c878 ; literal="Downward Slope"
0x00e7dd30: mov    rcx,rbx
0x00e7dd33: call   0x14006f4f0
0x00e7dd38: jmp    0x140e7e444
0x00e7dd3d: lea    rdx,[rip+0x8aeb44]        # 0x14172c888 ; literal="Open Space"
0x00e7dd44: mov    rcx,rbx
0x00e7dd47: call   0x14006f4f0
0x00e7dd4c: jmp    0x140e7e444
0x00e7dd51: mov    r8d,0x7
0x00e7dd57: lea    rdx,[rip+0x769402]        # 0x1415e7160 ; literal="Unknown"
0x00e7dd5e: jmp    0x140e7e43b
0x00e7dd63: movzx  r9d,r15w
0x00e7dd67: movzx  r8d,r14w
0x00e7dd6b: movzx  edx,si
0x00e7dd6e: mov    rcx,rdi
0x00e7dd71: call   0x140247c80
0x00e7dd76: mov    ecx,0x275b
0x00e7dd7b: cmp    ax,cx
0x00e7dd7e: jb     0x140e7dd95
0x00e7dd80: mov    r8d,0x5
0x00e7dd86: lea    rdx,[rip+0x8ae45b]        # 0x14172c1e8 ; literal="Warm "
0x00e7dd8d: mov    rcx,rbx
0x00e7dd90: call   0x14006f9a0
0x00e7dd95: movzx  r9d,r15w
0x00e7dd99: movzx  r8d,r14w
0x00e7dd9d: movzx  edx,si
0x00e7dda0: mov    rcx,rdi
0x00e7dda3: call   0x14149a020
0x00e7dda8: test   al,al
0x00e7ddaa: je     0x140e7ddc1
0x00e7ddac: mov    r8d,0x5
0x00e7ddb2: lea    rdx,[rip+0x8ae407]        # 0x14172c1c0 ; literal="Damp "
0x00e7ddb9: mov    rcx,rbx
0x00e7ddbc: call   0x14006f9a0
0x00e7ddc1: movzx  r9d,r15w
0x00e7ddc5: movzx  r8d,r14w
0x00e7ddc9: movzx  edx,si
0x00e7ddcc: mov    rcx,rdi
0x00e7ddcf: call   0x140067ea0
0x00e7ddd4: mov    rcx,rax
0x00e7ddd7: mov    eax,0xffffffff
0x00e7dddc: test   rcx,rcx
0x00e7dddf: je     0x140e7de35
0x00e7dde1: mov    r9d,0xc
0x00e7dde7: mov    r8d,r14d
0x00e7ddea: and    r8d,0x8000000f
0x00e7ddf1: jge    0x140e7ddfd
0x00e7ddf3: dec    r8d
0x00e7ddf6: or     r8d,0xfffffff0
0x00e7ddfa: inc    r8d
0x00e7ddfd: mov    edx,esi
0x00e7ddff: and    edx,0x8000000f
0x00e7de05: jge    0x140e7de0e
0x00e7de07: dec    edx
0x00e7de09: or     edx,0xfffffff0
0x00e7de0c: inc    edx
0x00e7de0e: mov    WORD PTR [rsp+0x28],ax
0x00e7de13: mov    DWORD PTR [rsp+0x20],eax
0x00e7de17: call   0x1405408a0
0x00e7de1c: test   eax,eax
0x00e7de1e: je     0x140e7de35
0x00e7de20: mov    r8d,0x6
0x00e7de26: lea    rdx,[rip+0x8ae39b]        # 0x14172c1c8 ; literal="Muddy "
0x00e7de2d: mov    rcx,rbx
0x00e7de30: call   0x14006f9a0
0x00e7de35: movzx  r9d,r15w
0x00e7de39: movzx  r8d,r14w
0x00e7de3d: movzx  edx,si
0x00e7de40: mov    rcx,rdi
0x00e7de43: call   0x140067ea0
0x00e7de48: test   rax,rax
0x00e7de4b: je     0x140e7deaa
0x00e7de4d: mov    r8d,r14d
0x00e7de50: and    r8d,0x8000000f
0x00e7de57: jge    0x140e7de63
0x00e7de59: dec    r8d
0x00e7de5c: or     r8d,0xfffffff0
0x00e7de60: inc    r8d
0x00e7de63: mov    edx,esi
0x00e7de65: and    edx,0x8000000f
0x00e7de6b: jge    0x140e7de74
0x00e7de6d: dec    edx
0x00e7de6f: or     edx,0xfffffff0
0x00e7de72: inc    edx
0x00e7de74: mov    WORD PTR [rsp+0x28],0x3
0x00e7de7b: mov    DWORD PTR [rsp+0x20],0xffffffff
0x00e7de83: mov    r9d,0x6
0x00e7de89: mov    rcx,rax
0x00e7de8c: call   0x1405408a0
0x00e7de91: test   eax,eax
0x00e7de93: je     0x140e7deaa
0x00e7de95: mov    r8d,0xd
0x00e7de9b: lea    rdx,[rip+0x8ae32e]        # 0x14172c1d0 ; literal="Snow-covered "
0x00e7dea2: mov    rcx,rbx
0x00e7dea5: call   0x14006f9a0
0x00e7deaa: movzx  r9d,r15w
0x00e7deae: movzx  r8d,r14w
0x00e7deb2: movzx  edx,si
0x00e7deb5: mov    rcx,rdi
0x00e7deb8: call   0x140067fa0
0x00e7debd: test   al,al
0x00e7debf: jns    0x140e7ded6
0x00e7dec1: mov    r8d,0x6
0x00e7dec7: lea    rdx,[rip+0x8ae312]        # 0x14172c1e0 ; literal="Mossy "
0x00e7dece: mov    rcx,rbx
0x00e7ded1: call   0x14006f9a0
0x00e7ded6: lea    rax,[rbp-0x30]
0x00e7deda: mov    QWORD PTR [rsp+0x40],rax
0x00e7dedf: lea    rax,[rbp-0x48]
0x00e7dee3: mov    QWORD PTR [rsp+0x38],rax
0x00e7dee8: lea    rax,[rsp+0x50]
0x00e7deed: mov    QWORD PTR [rsp+0x30],rax
0x00e7def2: lea    rax,[rbp-0x34]
0x00e7def6: mov    QWORD PTR [rsp+0x28],rax
0x00e7defb: lea    rax,[rsp+0x5c]
0x00e7df00: mov    QWORD PTR [rsp+0x20],rax
0x00e7df05: movzx  r9d,r15w
0x00e7df09: movzx  r8d,r14w
0x00e7df0d: movzx  edx,si
0x00e7df10: mov    rcx,rdi
0x00e7df13: call   0x1414cbbe0
0x00e7df18: cmp    BYTE PTR [rsp+0x58],r12b
0x00e7df1d: je     0x140e7e053
0x00e7df23: movsx  ecx,WORD PTR [rsp+0x54]
0x00e7df28: sub    ecx,0x1
0x00e7df2b: je     0x140e7df51
0x00e7df2d: sub    ecx,0x1
0x00e7df30: je     0x140e7df4d
0x00e7df32: sub    ecx,0x1
0x00e7df35: je     0x140e7df49
0x00e7df37: sub    ecx,0x1
0x00e7df3a: je     0x140e7df45
0x00e7df3c: cmp    ecx,0x1
0x00e7df3f: jne    0x140e7df5b
0x00e7df41: mov    dl,0xf
0x00e7df43: jmp    0x140e7df53
0x00e7df45: mov    dl,0xf0
0x00e7df47: jmp    0x140e7df53
0x00e7df49: mov    dl,0x2a
0x00e7df4b: jmp    0x140e7df53
0x00e7df4d: mov    dl,0x2b
0x00e7df4f: jmp    0x140e7df53
0x00e7df51: mov    dl,0x2d
0x00e7df53: mov    rcx,rbx
0x00e7df56: call   0x1400b9b10
0x00e7df5b: mov    eax,r13d
0x00e7df5e: cmp    r13d,0x164
0x00e7df65: ja     0x140e7df90
0x00e7df67: je     0x140e7dfe1
0x00e7df69: sub    eax,0x19
0x00e7df6c: cmp    eax,0xe9
0x00e7df71: ja     0x140e7dfe5
0x00e7df73: cdqe
0x00e7df75: lea    rdx,[rip+0xffffffffff182084]        # 0x140000000
0x00e7df7c: movzx  eax,BYTE PTR [rdx+rax*1+0xe7edfc]
0x00e7df84: mov    ecx,DWORD PTR [rdx+rax*4+0xe7edf4]
0x00e7df8b: add    rcx,rdx
0x00e7df8e: jmp    rcx
0x00e7df90: cmp    eax,0x299
0x00e7df95: ja     0x140e7dfc2
0x00e7df97: je     0x140e7dfe1
0x00e7df99: sub    eax,0x165
0x00e7df9e: cmp    eax,0xe8
0x00e7dfa3: ja     0x140e7dfe5
0x00e7dfa5: cdqe
0x00e7dfa7: lea    rdx,[rip+0xffffffffff182052]        # 0x140000000
0x00e7dfae: movzx  eax,BYTE PTR [rdx+rax*1+0xe7eef0]
0x00e7dfb6: mov    ecx,DWORD PTR [rdx+rax*4+0xe7eee8]
0x00e7dfbd: add    rcx,rdx
0x00e7dfc0: jmp    rcx
0x00e7dfc2: sub    eax,0x29a
0x00e7dfc7: cmp    eax,0xd
0x00e7dfca: ja     0x140e7dfe5
0x00e7dfcc: cdqe
0x00e7dfce: lea    rdx,[rip+0xffffffffff18202b]        # 0x140000000
0x00e7dfd5: mov    ecx,DWORD PTR [rdx+rax*4+0xe7efdc]
0x00e7dfdc: add    rcx,rdx
0x00e7dfdf: jmp    rcx
0x00e7dfe1: mov    cl,0x1
0x00e7dfe3: jmp    0x140e7dfe7
0x00e7dfe5: xor    cl,cl
0x00e7dfe7: lea    rax,[rip+0x8ae23a]        # 0x14172c228 ; literal="Detailed"
0x00e7dfee: lea    rdx,[rip+0x8ae223]        # 0x14172c218 ; literal="Sculpted"
0x00e7dff5: test   cl,cl
0x00e7dff7: cmove  rdx,rax
0x00e7dffb: mov    r8d,0x8
0x00e7e001: mov    rcx,rbx
0x00e7e004: call   0x14006f9a0
0x00e7e009: movsx  ecx,WORD PTR [rsp+0x54]
0x00e7e00e: sub    ecx,0x1
0x00e7e011: je     0x140e7e037
0x00e7e013: sub    ecx,0x1
0x00e7e016: je     0x140e7e033
0x00e7e018: sub    ecx,0x1
0x00e7e01b: je     0x140e7e02f
0x00e7e01d: sub    ecx,0x1
0x00e7e020: je     0x140e7e02b
0x00e7e022: cmp    ecx,0x1
0x00e7e025: jne    0x140e7e041
0x00e7e027: mov    dl,0xf
0x00e7e029: jmp    0x140e7e039
0x00e7e02b: mov    dl,0xf0
0x00e7e02d: jmp    0x140e7e039
0x00e7e02f: mov    dl,0x2a
0x00e7e031: jmp    0x140e7e039
0x00e7e033: mov    dl,0x2b
0x00e7e035: jmp    0x140e7e039
0x00e7e037: mov    dl,0x2d
0x00e7e039: mov    rcx,rbx
0x00e7e03c: call   0x1400b9b10
0x00e7e041: mov    r8d,0x1
0x00e7e047: lea    rdx,[rip+0x7656d2]        # 0x1415e3720 ; literal=" "
0x00e7e04e: jmp    0x140e7e213
0x00e7e053: lea    eax,[r13-0x1d9]
0x00e7e05a: lea    rdx,[rip+0xffffffffff181f9f]        # 0x140000000
0x00e7e061: cmp    eax,0xdd
0x00e7e066: ja     0x140e7e08a
0x00e7e068: cdqe
0x00e7e06a: movzx  eax,BYTE PTR [rdx+rax*1+0xe7f01c]
0x00e7e072: mov    ecx,DWORD PTR [rdx+rax*4+0xe7f014]
0x00e7e079: add    rcx,rdx
0x00e7e07c: jmp    rcx
0x00e7e07e: lea    eax,[r13-0x1d9]
0x00e7e085: jmp    0x140e7e230
0x00e7e08a: mov    ecx,r13d
0x00e7e08d: sub    ecx,0xd7
0x00e7e093: je     0x140e7e206
0x00e7e099: sub    ecx,0x70
0x00e7e09c: je     0x140e7e206
0x00e7e0a2: sub    ecx,0x4
0x00e7e0a5: je     0x140e7e206
0x00e7e0ab: cmp    ecx,0x69
0x00e7e0ae: je     0x140e7e206
0x00e7e0b4: mov    ecx,r13d
0x00e7e0b7: cmp    r13d,0x144
0x00e7e0be: ja     0x140e7e10c
0x00e7e0c0: je     0x140e7e206
0x00e7e0c6: sub    ecx,0xac
0x00e7e0cc: je     0x140e7e206
0x00e7e0d2: sub    ecx,0x1
0x00e7e0d5: je     0x140e7e206
0x00e7e0db: cmp    ecx,0x1
0x00e7e0de: je     0x140e7e206
0x00e7e0e4: lea    eax,[r13-0x109]
0x00e7e0eb: cmp    eax,0xf5
0x00e7e0f0: ja     0x140e7e1c7
0x00e7e0f6: cdqe
0x00e7e0f8: movzx  eax,BYTE PTR [rdx+rax*1+0xe7f104]
0x00e7e100: mov    ecx,DWORD PTR [rdx+rax*4+0xe7f0fc]
0x00e7e107: add    rcx,rdx
0x00e7e10a: jmp    rcx
0x00e7e10c: sub    ecx,0x145
0x00e7e112: cmp    ecx,0x6e
0x00e7e115: ja     0x140e7e0e4
0x00e7e117: movsxd rax,ecx
0x00e7e11a: movzx  eax,BYTE PTR [rdx+rax*1+0xe7f204]
0x00e7e122: mov    ecx,DWORD PTR [rdx+rax*4+0xe7f1fc]
0x00e7e129: add    rcx,rdx
0x00e7e12c: jmp    rcx
0x00e7e12e: mov    eax,r13d
0x00e7e131: cmp    r13d,0x164
0x00e7e138: ja     0x140e7e15c
0x00e7e13a: je     0x140e7e19f
0x00e7e13c: sub    eax,0x19
0x00e7e13f: cmp    eax,0xe9
0x00e7e144: ja     0x140e7e1a3
0x00e7e146: cdqe
0x00e7e148: movzx  eax,BYTE PTR [rdx+rax*1+0xe7f27c]
0x00e7e150: mov    ecx,DWORD PTR [rdx+rax*4+0xe7f274]
0x00e7e157: add    rcx,rdx
0x00e7e15a: jmp    rcx
0x00e7e15c: cmp    eax,0x299
0x00e7e161: ja     0x140e7e187
0x00e7e163: je     0x140e7e19f
0x00e7e165: sub    eax,0x165
0x00e7e16a: cmp    eax,0xe8
0x00e7e16f: ja     0x140e7e1a3
0x00e7e171: cdqe
0x00e7e173: movzx  eax,BYTE PTR [rdx+rax*1+0xe7f370]
0x00e7e17b: mov    ecx,DWORD PTR [rdx+rax*4+0xe7f368]
0x00e7e182: add    rcx,rdx
0x00e7e185: jmp    rcx
0x00e7e187: sub    eax,0x29a
0x00e7e18c: cmp    eax,0xd
0x00e7e18f: ja     0x140e7e1a3
0x00e7e191: cdqe
0x00e7e193: mov    ecx,DWORD PTR [rdx+rax*4+0xe7f45c]
0x00e7e19a: add    rcx,rdx
0x00e7e19d: jmp    rcx
0x00e7e19f: mov    cl,0x1
0x00e7e1a1: jmp    0x140e7e1a5
0x00e7e1a3: xor    cl,cl
0x00e7e1a5: movzx  r8d,cl
0x00e7e1a9: lea    r8,[r8*2+0x7]
0x00e7e1b1: lea    rax,[rip+0x8ae038]        # 0x14172c1f0 ; literal="Smooth "
0x00e7e1b8: lea    rdx,[rip+0x8ae089]        # 0x14172c248 ; literal="Straight "
0x00e7e1bf: test   cl,cl
0x00e7e1c1: cmove  rdx,rax
0x00e7e1c5: jmp    0x140e7e213
0x00e7e1c7: cmp    WORD PTR [rsp+0x50],r12w
0x00e7e1cd: jne    0x140e7e21b
0x00e7e1cf: xor    edx,edx
0x00e7e1d1: mov    r8d,DWORD PTR [rbp-0x48]
0x00e7e1d5: mov    rcx,rdi
0x00e7e1d8: call   0x1414a8ce0
0x00e7e1dd: test   rax,rax
0x00e7e1e0: je     0x140e7e21b
0x00e7e1e2: lea    rcx,[rax+0x290]
0x00e7e1e9: mov    edx,0x30
0x00e7e1ee: call   0x140071f20
0x00e7e1f3: test   al,al
0x00e7e1f5: je     0x140e7e21b
0x00e7e1f7: mov    r8d,0x8
0x00e7e1fd: lea    rdx,[rip+0x8adff4]        # 0x14172c1f8 ; literal="Exposed "
0x00e7e204: jmp    0x140e7e213
0x00e7e206: mov    r8d,0xb
0x00e7e20c: lea    rdx,[rip+0x8ae025]        # 0x14172c238 ; literal="Rough-hewn "
0x00e7e213: mov    rcx,rbx
0x00e7e216: call   0x14006f9a0
0x00e7e21b: lea    eax,[r13-0x1d9]
0x00e7e222: lea    rdx,[rip+0xffffffffff181dd7]        # 0x140000000
0x00e7e229: cmp    eax,0xdd
0x00e7e22e: ja     0x140e7e268
0x00e7e230: cdqe
0x00e7e232: movzx  eax,BYTE PTR [rdx+rax*1+0xe7f49c]
0x00e7e23a: mov    ecx,DWORD PTR [rdx+rax*4+0xe7f494]
0x00e7e241: add    rcx,rdx
0x00e7e244: jmp    rcx
0x00e7e246: mov    BYTE PTR [rsp+0x28],0x1
0x00e7e24b: mov    QWORD PTR [rsp+0x20],rbx
0x00e7e250: movzx  r9d,r15w
0x00e7e254: movzx  r8d,r14w
0x00e7e258: movzx  edx,si
0x00e7e25b: mov    rcx,rdi
0x00e7e25e: call   0x140a44750
0x00e7e263: jmp    0x140e7e32b
0x00e7e268: mov    eax,r13d
0x00e7e26b: cmp    r13d,0x164
0x00e7e272: ja     0x140e7e296
0x00e7e274: je     0x140e7e2d9
0x00e7e276: sub    eax,0x19
0x00e7e279: cmp    eax,0xe9
0x00e7e27e: ja     0x140e7e2f0
0x00e7e280: cdqe
0x00e7e282: movzx  eax,BYTE PTR [rdx+rax*1+0xe7f584]
0x00e7e28a: mov    ecx,DWORD PTR [rdx+rax*4+0xe7f57c]
0x00e7e291: add    rcx,rdx
0x00e7e294: jmp    rcx
0x00e7e296: cmp    eax,0x299
0x00e7e29b: ja     0x140e7e2c1
0x00e7e29d: je     0x140e7e2d9
0x00e7e29f: sub    eax,0x165
0x00e7e2a4: cmp    eax,0xe8
0x00e7e2a9: ja     0x140e7e2f0
0x00e7e2ab: cdqe
0x00e7e2ad: movzx  eax,BYTE PTR [rdx+rax*1+0xe7f678]
0x00e7e2b5: mov    ecx,DWORD PTR [rdx+rax*4+0xe7f670]
0x00e7e2bc: add    rcx,rdx
0x00e7e2bf: jmp    rcx
0x00e7e2c1: sub    eax,0x29a
0x00e7e2c6: cmp    eax,0xd
0x00e7e2c9: ja     0x140e7e2f0
0x00e7e2cb: cdqe
0x00e7e2cd: mov    ecx,DWORD PTR [rdx+rax*4+0xe7f764]
0x00e7e2d4: add    rcx,rdx
0x00e7e2d7: jmp    rcx
0x00e7e2d9: mov    r8d,0x3
0x00e7e2df: lea    rdx,[rip+0x89d81e]        # 0x14171bb04 ; literal="Ice"
0x00e7e2e6: mov    rcx,rbx
0x00e7e2e9: call   0x14006f9a0
0x00e7e2ee: jmp    0x140e7e32b
0x00e7e2f0: mov    WORD PTR [rsp+0x30],r12w
0x00e7e2f6: mov    BYTE PTR [rsp+0x28],r12b
0x00e7e2fb: mov    DWORD PTR [rsp+0x20],r12d
0x00e7e300: mov    r9d,DWORD PTR [rbp-0x48]
0x00e7e304: movzx  r8d,WORD PTR [rsp+0x50]
0x00e7e30a: lea    rdx,[rbp+0x0]
0x00e7e30e: mov    rcx,rdi
0x00e7e311: call   0x1414cc890
0x00e7e316: lea    rcx,[rbp+0x0]
0x00e7e31a: call   0x14052ade0
0x00e7e31f: lea    rdx,[rbp+0x0]
0x00e7e323: mov    rcx,rbx
0x00e7e326: call   0x1400b9ca0
0x00e7e32b: mov    r8d,0x1
0x00e7e331: lea    rdx,[rip+0x7653e8]        # 0x1415e3720 ; literal=" "
0x00e7e338: mov    rcx,rbx
0x00e7e33b: call   0x14006f9a0
0x00e7e340: cmp    r13d,0x53
0x00e7e344: je     0x140e7e42e
0x00e7e34a: mov    ecx,r13d
0x00e7e34d: sub    ecx,0x4f
0x00e7e350: je     0x140e7e42e
0x00e7e356: sub    ecx,0x1
0x00e7e359: je     0x140e7e42e
0x00e7e35f: sub    ecx,0x1
0x00e7e362: je     0x140e7e42e
0x00e7e368: cmp    ecx,0x1
0x00e7e36b: je     0x140e7e42e
0x00e7e371: mov    eax,0x1eb
0x00e7e376: cmp    r13w,ax
0x00e7e37a: je     0x140e7e42e
0x00e7e380: mov    ecx,r13d
0x00e7e383: cmp    r13d,0x164
0x00e7e38a: ja     0x140e7e3a8
0x00e7e38c: je     0x140e7e41f
0x00e7e392: sub    ecx,0x41
0x00e7e395: je     0x140e7e41f
0x00e7e39b: sub    ecx,0x101
0x00e7e3a1: je     0x140e7e41f
0x00e7e3a3: cmp    ecx,0x1
0x00e7e3a6: jmp    0x140e7e3b3
0x00e7e3a8: sub    ecx,0x1b0
0x00e7e3ae: je     0x140e7e41f
0x00e7e3b0: cmp    ecx,0x3a
0x00e7e3b3: je     0x140e7e41f
0x00e7e3b5: cmp    WORD PTR [rsp+0x50],r12w
0x00e7e3bb: jne    0x140e7e410
0x00e7e3bd: xor    edx,edx
0x00e7e3bf: mov    r8d,DWORD PTR [rbp-0x48]
0x00e7e3c3: mov    rcx,rdi
0x00e7e3c6: call   0x1414a8ce0
0x00e7e3cb: test   rax,rax
0x00e7e3ce: je     0x140e7e3e6
0x00e7e3d0: lea    rcx,[rax+0x290]
0x00e7e3d7: mov    edx,0x30
0x00e7e3dc: call   0x140071f20
0x00e7e3e1: movzx  ecx,al
0x00e7e3e4: jmp    0x140e7e3e8
0x00e7e3e6: xor    cl,cl
0x00e7e3e8: mov    eax,0x7
0x00e7e3ed: mov    r8d,0x4
0x00e7e3f3: test   cl,cl
0x00e7e3f5: cmove  eax,r8d
0x00e7e3f9: lea    r9,[rip+0x7a9d70]        # 0x141628170 ; literal="Wall"
0x00e7e400: lea    rdx,[rip+0x8ade09]        # 0x14172c210 ; literal="Cluster"
0x00e7e407: cmove  rdx,r9
0x00e7e40b: mov    r8d,eax
0x00e7e40e: jmp    0x140e7e43b
0x00e7e410: mov    r8d,0x4
0x00e7e416: lea    rdx,[rip+0x7a9d53]        # 0x141628170 ; literal="Wall"
0x00e7e41d: jmp    0x140e7e43b
0x00e7e41f: mov    r8d,0xd
0x00e7e425: lea    rdx,[rip+0x7a9cd4]        # 0x141628100 ; literal="Fortification"
0x00e7e42c: jmp    0x140e7e43b
0x00e7e42e: mov    r8d,0x6
0x00e7e434: lea    rdx,[rip+0x8addc9]        # 0x14172c204 ; literal="Pillar"
0x00e7e43b: mov    rcx,rbx
0x00e7e43e: call   0x14006f9a0
0x00e7e443: nop
0x00e7e444: lea    rcx,[rbp+0x0]
0x00e7e448: call   0x14006f7e0
0x00e7e44d: mov    rcx,QWORD PTR [rbp+0x40]
0x00e7e451: xor    rcx,rsp
0x00e7e454: call   0x1415345d0
0x00e7e459: add    rsp,0x158
0x00e7e460: pop    r15
0x00e7e462: pop    r14
0x00e7e464: pop    r13
0x00e7e466: pop    r12
0x00e7e468: pop    rdi
0x00e7e469: pop    rsi
0x00e7e46a: pop    rbx
0x00e7e46b: pop    rbp
0x00e7e46c: ret
