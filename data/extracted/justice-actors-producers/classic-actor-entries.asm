# classic PE:6a70b91c:0270a000; actor-entries; RVA 0x2b4320..0x2b6c00
0x002b4320: mov    QWORD PTR [rsp+0x8],rbx
0x002b4325: push   rbp
0x002b4326: push   rsi
0x002b4327: push   rdi
0x002b4328: push   r12
0x002b432a: push   r13
0x002b432c: push   r14
0x002b432e: push   r15
0x002b4330: lea    rbp,[rsp-0x200]
0x002b4338: sub    rsp,0x300
0x002b433f: movaps XMMWORD PTR [rsp+0x2f0],xmm6
0x002b4347: mov    rax,QWORD PTR [rip+0x15e1cf2]        # 0x141896040
0x002b434e: xor    rax,rsp
0x002b4351: mov    QWORD PTR [rbp+0x1e0],rax
0x002b4358: mov    QWORD PTR [rbp+0x48],r8
0x002b435c: mov    r15,rdx
0x002b435f: mov    QWORD PTR [rbp-0x18],rdx
0x002b4363: test   r8,r8
0x002b4366: je     0x1402b4378
0x002b4368: mov    rax,QWORD PTR [rip+0x20dfd69]        # 0x1423940d8
0x002b436f: mov    r12,QWORD PTR [rax+0x1358]
0x002b4376: jmp    0x1402b4388
0x002b4378: test   rdx,rdx
0x002b437b: je     0x1402b6ad3
0x002b4381: lea    r12,[rdx+0x1e0]
0x002b4388: mov    QWORD PTR [rbp-0x28],r12
0x002b438c: test   r12,r12
0x002b438f: je     0x1402b6ad3
0x002b4395: test   r8,r8
0x002b4398: je     0x1402b43b1
0x002b439a: lea    rcx,[r8+0x248]
0x002b43a1: lea    r13,[r8+0x278]
0x002b43a8: lea    rax,[r8+0x260]
0x002b43af: jmp    0x1402b43cf
0x002b43b1: test   rdx,rdx
0x002b43b4: je     0x1402b6ad3
0x002b43ba: lea    rcx,[rdx+0x198]
0x002b43c1: lea    r13,[rdx+0x1c8]
0x002b43c8: lea    rax,[rdx+0x1b0]
0x002b43cf: mov    QWORD PTR [rbp+0x68],r13
0x002b43d3: mov    QWORD PTR [rbp+0x0],rcx
0x002b43d7: test   rcx,rcx
0x002b43da: je     0x1402b6ad3
0x002b43e0: test   r13,r13
0x002b43e3: je     0x1402b6ad3
0x002b43e9: test   rax,rax
0x002b43ec: je     0x1402b6ad3
0x002b43f2: mov    rbx,QWORD PTR [r12]
0x002b43f6: mov    rdi,QWORD PTR [r12+0x8]
0x002b43fb: xor    r13d,r13d
0x002b43fe: xchg   ax,ax
0x002b4400: cmp    rbx,rdi
0x002b4403: jae    0x1402b45c9
0x002b4409: mov    r15,QWORD PTR [rbx]
0x002b440c: mov    DWORD PTR [r15+0x98],r13d
0x002b4413: mov    r10d,DWORD PTR [r15]
0x002b4416: mov    rcx,QWORD PTR [rip+0x223f7f3]        # 0x1424f3c10
0x002b441d: mov    rsi,QWORD PTR [rip+0x223f7e4]        # 0x1424f3c08
0x002b4424: sub    rcx,rsi
0x002b4427: sar    rcx,0x3
0x002b442b: test   rcx,rcx
0x002b442e: je     0x1402b446d
0x002b4430: cmp    r10d,0xffffffff
0x002b4434: je     0x1402b446d
0x002b4436: mov    edx,r13d
0x002b4439: sub    ecx,0x1
0x002b443c: js     0x1402b446d
0x002b443e: xchg   ax,ax
0x002b4440: mov    r11d,ecx
0x002b4443: lea    r8d,[rcx+rdx*1]
0x002b4447: sar    r8d,1
0x002b444a: movsxd rax,r8d
0x002b444d: mov    r14,QWORD PTR [rsi+rax*8]
0x002b4451: cmp    DWORD PTR [r14+0xe0],r10d
0x002b4458: je     0x1402b4477
0x002b445a: lea    ecx,[r8-0x1]
0x002b445e: cmovle ecx,r11d
0x002b4462: lea    eax,[r8+0x1]
0x002b4466: cmovle edx,eax
0x002b4469: cmp    edx,ecx
0x002b446b: jle    0x1402b4440
0x002b446d: mov    r15,QWORD PTR [rbp-0x18]
0x002b4471: add    rbx,0x8
0x002b4475: jmp    0x1402b4400
0x002b4477: test   r14,r14
0x002b447a: je     0x1402b446d
0x002b447c: mov    ecx,0xf8
0x002b4481: call   0x141534600
0x002b4486: mov    QWORD PTR [rbp+0x90],rax
0x002b448d: mov    rcx,rax
0x002b4490: call   0x1402b4260
0x002b4495: mov    rsi,rax
0x002b4498: mov    QWORD PTR [rax],r14
0x002b449b: test   BYTE PTR [r15+0x4],0x8
0x002b44a0: je     0x1402b44de
0x002b44a2: cmp    BYTE PTR [r14+0xaa],r13b
0x002b44a9: je     0x1402b44ce
0x002b44ab: lea    rcx,[r14+0x38]
0x002b44af: xor    r9d,r9d
0x002b44b2: mov    r8b,0x1
0x002b44b5: lea    rdx,[rax+0x18]
0x002b44b9: call   0x140a91760
0x002b44be: mov    rax,QWORD PTR [rsi]
0x002b44c1: add    rax,0x38
0x002b44c5: mov    QWORD PTR [rsi+0x10],rax
0x002b44c9: jmp    0x1402b456f
0x002b44ce: lea    rdx,[rip+0x136f9eb]        # 0x141623ec0 ; literal="Nameless"
0x002b44d5: lea    rcx,[rax+0x18]
0x002b44d9: jmp    0x1402b456a
0x002b44de: mov    rdx,QWORD PTR [r15+0x80]
0x002b44e5: mov    rax,QWORD PTR [r15+0x88]
0x002b44ec: sub    rax,rdx
0x002b44ef: sar    rax,0x2
0x002b44f3: test   rax,rax
0x002b44f6: je     0x1402b455f
0x002b44f8: mov    edx,DWORD PTR [rdx]
0x002b44fa: lea    rcx,[rip+0x222d6d7]        # 0x1424e1bd8
0x002b4501: call   0x140072500
0x002b4506: mov    r12,rax
0x002b4509: test   rax,rax
0x002b450c: je     0x1402b4556
0x002b450e: mov    rcx,rax
0x002b4511: call   0x140c37530
0x002b4516: mov    r14,rax
0x002b4519: test   rax,rax
0x002b451c: je     0x1402b4540
0x002b451e: cmp    BYTE PTR [rax+0x72],r13b
0x002b4522: je     0x1402b4540
0x002b4524: lea    rdx,[rsi+0x18]
0x002b4528: xor    r9d,r9d
0x002b452b: mov    r8b,0x1
0x002b452e: mov    rcx,rax
0x002b4531: call   0x140a91760
0x002b4536: mov    QWORD PTR [rsi+0x10],r14
0x002b453a: mov    QWORD PTR [rsi+0x8],r12
0x002b453e: jmp    0x1402b456f
0x002b4540: lea    rcx,[rsi+0x18]
0x002b4544: lea    rdx,[rip+0x136f975]        # 0x141623ec0 ; literal="Nameless"
0x002b454b: call   0x14006f510
0x002b4550: mov    QWORD PTR [rsi+0x8],r12
0x002b4554: jmp    0x1402b456f
0x002b4556: lea    rdx,[rip+0x136f963]        # 0x141623ec0 ; literal="Nameless"
0x002b455d: jmp    0x1402b4566
0x002b455f: lea    rdx,[rip+0x136f9ba]        # 0x141623f20 ; literal="Unidentified"
0x002b4566: lea    rcx,[rsi+0x18]
0x002b456a: call   0x14006f510
0x002b456f: mov    eax,0x80
0x002b4574: lea    rdx,[rax+r15*1]
0x002b4578: mov    rax,QWORD PTR [rdx+0x8]
0x002b457c: sub    rax,QWORD PTR [rdx]
0x002b457f: sar    rax,0x2
0x002b4583: test   rax,rax
0x002b4586: je     0x1402b4594
0x002b4588: lea    rcx,[rsi+0xa0]
0x002b458f: call   0x140071f60
0x002b4594: mov    r14,QWORD PTR [rbp+0x48]
0x002b4598: test   r14,r14
0x002b459b: je     0x1402b45a8
0x002b459d: mov    rdx,rsi
0x002b45a0: mov    rcx,r14
0x002b45a3: call   0x1404775e0
0x002b45a8: mov    r15,QWORD PTR [rbp-0x18]
0x002b45ac: test   r15,r15
0x002b45af: je     0x1402b4471
0x002b45b5: mov    rdx,rsi
0x002b45b8: mov    rcx,r15
0x002b45bb: call   0x1400cce20
0x002b45c0: add    rbx,0x8
0x002b45c4: jmp    0x1402b4400
0x002b45c9: mov    r12,QWORD PTR [rbp-0x28]
0x002b45cd: mov    rbx,QWORD PTR [r12+0x18]
0x002b45d2: mov    rax,QWORD PTR [r12+0x20]
0x002b45d7: mov    QWORD PTR [rbp+0x40],rax
0x002b45db: mov    rdi,QWORD PTR [rip+0x222d7a6]        # 0x1424e1d88
0x002b45e2: mov    QWORD PTR [rbp+0x38],rbx
0x002b45e6: cmp    rbx,rax
0x002b45e9: jae    0x1402b5264
0x002b45ef: mov    esi,DWORD PTR [rbx]
0x002b45f1: mov    r11,QWORD PTR [rip+0x222d798]        # 0x1424e1d90
0x002b45f8: sub    r11,rdi
0x002b45fb: sar    r11,0x3
0x002b45ff: test   r11d,r11d
0x002b4602: jne    0x1402b460e
0x002b4604: mov    ecx,0xffffffff
0x002b4609: mov    r10d,ecx
0x002b460c: jmp    0x1402b4647
0x002b460e: mov    r10d,r13d
0x002b4611: cmp    r11d,0x40
0x002b4615: jle    0x1402b4643
0x002b4617: nop    WORD PTR [rax+rax*1+0x0]
0x002b4620: mov    r9d,r11d
0x002b4623: shr    r9d,1
0x002b4626: lea    r8d,[r9+r10*1]
0x002b462a: movsxd rcx,r8d
0x002b462d: mov    rdx,QWORD PTR [rdi+rcx*8]
0x002b4631: cmp    esi,DWORD PTR [rdx]
0x002b4633: cmovl  r8d,r10d
0x002b4637: mov    r10d,r8d
0x002b463a: sub    r11d,r9d
0x002b463d: cmp    r11d,0x40
0x002b4641: jg     0x1402b4620
0x002b4643: lea    ecx,[r10+r11*1]
0x002b4647: cmp    ecx,0xffffffff
0x002b464a: je     0x1402b466a
0x002b464c: cmp    r10d,ecx
0x002b464f: jge    0x1402b466a
0x002b4651: movsxd rdx,r10d
0x002b4654: movsxd r8,ecx
0x002b4657: mov    rcx,QWORD PTR [rdi+rdx*8]
0x002b465b: cmp    esi,DWORD PTR [rcx]
0x002b465d: je     0x1402b4687
0x002b465f: inc    r10d
0x002b4662: inc    rdx
0x002b4665: cmp    rdx,r8
0x002b4668: jl     0x1402b4657
0x002b466a: mov    QWORD PTR [rbp+0x58],r13
0x002b466e: mov    DWORD PTR [rbp+0x50],0xffffffff
0x002b4675: movaps xmm0,XMMWORD PTR [rbp+0x50]
0x002b4679: movdqa XMMWORD PTR [rbp-0x70],xmm0
0x002b467e: add    rbx,0x4
0x002b4682: jmp    0x1402b45e2
0x002b4687: mov    DWORD PTR [rbp+0x70],r10d
0x002b468b: movsxd rcx,r10d
0x002b468e: mov    r14,QWORD PTR [rdi+rcx*8]
0x002b4692: mov    QWORD PTR [rbp+0x78],r14
0x002b4696: mov    DWORD PTR [rbp+0x50],0xffffffff
0x002b469d: mov    QWORD PTR [rbp+0x58],r13
0x002b46a1: movaps xmm6,XMMWORD PTR [rbp+0x70]
0x002b46a5: test   r14,r14
0x002b46a8: je     0x1402b467e
0x002b46aa: mov    ecx,0x90
0x002b46af: call   0x141534600
0x002b46b4: mov    r13,rax
0x002b46b7: mov    QWORD PTR [rbp+0x30],rax
0x002b46bb: xorps  xmm0,xmm0
0x002b46be: movups XMMWORD PTR [rax],xmm0
0x002b46c1: xor    edi,edi
0x002b46c3: mov    QWORD PTR [rax+0x10],rdi
0x002b46c7: mov    QWORD PTR [rax+0x18],0xf
0x002b46cf: mov    BYTE PTR [rax],dil
0x002b46d2: movups XMMWORD PTR [rax+0x20],xmm0
0x002b46d6: mov    QWORD PTR [rax+0x30],rdi
0x002b46da: mov    QWORD PTR [rax+0x38],0xf
0x002b46e2: mov    BYTE PTR [rax+0x20],dil
0x002b46e6: movups XMMWORD PTR [rax+0x40],xmm0
0x002b46ea: mov    QWORD PTR [rax+0x50],rdi
0x002b46ee: mov    QWORD PTR [rax+0x58],0xf
0x002b46f6: mov    BYTE PTR [rax+0x40],dil
0x002b46fa: movups XMMWORD PTR [rax+0x70],xmm0
0x002b46fe: mov    QWORD PTR [rax+0x80],rdi
0x002b4705: mov    QWORD PTR [rax+0x88],0xf
0x002b4710: mov    BYTE PTR [rax+0x70],dil
0x002b4714: mov    DWORD PTR [rax+0x68],0xffffffff
0x002b471b: mov    QWORD PTR [rbp-0x50],rax
0x002b471f: psrldq xmm6,0x8
0x002b4724: movq   QWORD PTR [rax+0x60],xmm6
0x002b4729: mov    r8d,0x6
0x002b472f: lea    rdx,[rip+0x136f7de]        # 0x141623f14 ; literal="A plot"
0x002b4736: mov    rcx,rax
0x002b4739: call   0x14006f860
0x002b473e: mov    rcx,QWORD PTR [r14+0x28]
0x002b4742: mov    rax,QWORD PTR [r14+0x30]
0x002b4746: sub    rax,rcx
0x002b4749: sar    rax,0x3
0x002b474d: test   rax,rax
0x002b4750: je     0x1402b4b7e
0x002b4756: mov    rdx,QWORD PTR [rcx]
0x002b4759: mov    eax,DWORD PTR [rdx+0x18]
0x002b475c: add    eax,0xfffffffb
0x002b475f: cmp    eax,0xa
0x002b4762: ja     0x1402b4b7e
0x002b4768: cdqe
0x002b476a: lea    r8,[rip+0xffffffffffd4b88f]        # 0x140000000
0x002b4771: mov    ecx,DWORD PTR [r8+rax*4+0x2b6b08]
0x002b4779: add    rcx,r8
0x002b477c: jmp    rcx
0x002b477e: lea    rdx,[rip+0x136f783]        # 0x141623f08 ; literal="Sabotage"
0x002b4785: mov    rcx,r13
0x002b4788: call   0x14006f510
0x002b478d: mov    rax,QWORD PTR [r14+0x28]
0x002b4791: mov    rcx,QWORD PTR [rax]
0x002b4794: mov    rax,QWORD PTR [rcx+0x10]
0x002b4798: cmp    DWORD PTR [rax+0x10],0xffffffff
0x002b479c: je     0x1402b47db
0x002b479e: lea    rdx,[rip+0x132ef7b]        # 0x1415e3720 ; literal=" "
0x002b47a5: mov    rcx,r13
0x002b47a8: call   0x14006f4f0
0x002b47ad: mov    rax,QWORD PTR [r14+0x28]
0x002b47b1: mov    rcx,QWORD PTR [rax]
0x002b47b4: mov    rax,QWORD PTR [rcx+0x10]
0x002b47b8: mov    r8d,DWORD PTR [rax+0x10]
0x002b47bc: jmp    0x1402b4b52
0x002b47c1: lea    rdx,[rip+0x136f724]        # 0x141623eec ; literal="Abduct"
0x002b47c8: mov    rcx,r13
0x002b47cb: call   0x14006f510
0x002b47d0: mov    rax,QWORD PTR [r14+0x28]
0x002b47d4: mov    rcx,QWORD PTR [rax]
0x002b47d7: mov    rax,QWORD PTR [rcx+0x10]
0x002b47db: cmp    DWORD PTR [rax+0xc],0xffffffff
0x002b47df: je     0x1402b4b5d
0x002b47e5: lea    rdx,[rip+0x132ef34]        # 0x1415e3720 ; literal=" "
0x002b47ec: mov    rcx,r13
0x002b47ef: call   0x14006f4f0
0x002b47f4: lea    rcx,[rbp+0xf0]
0x002b47fb: call   0x140072010
0x002b4800: mov    rax,QWORD PTR [r14+0x28]
0x002b4804: mov    rcx,QWORD PTR [rax]
0x002b4807: mov    rax,QWORD PTR [rcx+0x10]
0x002b480b: mov    r8d,DWORD PTR [rax+0xc]
0x002b480f: mov    ecx,0x1
0x002b4814: mov    WORD PTR [rsp+0x28],cx
0x002b4819: lea    r9,[rbp+0xf0]
0x002b4820: mov    WORD PTR [rsp+0x20],cx
0x002b4825: mov    rdx,r13
0x002b4828: lea    rcx,[rip+0x223f379]        # 0x1424f3ba8
0x002b482f: call   0x140b8ff50
0x002b4834: jmp    0x1402b4b5d
0x002b4839: lea    rdx,[rip+0x136f6a0]        # 0x141623ee0 ; literal="Assassinate"
0x002b4840: jmp    0x1402b47c8
0x002b4842: lea    rdx,[rip+0x136f68f]        # 0x141623ed8 ; literal="Steal"
0x002b4849: mov    rcx,r13
0x002b484c: call   0x14006f510
0x002b4851: mov    rax,QWORD PTR [r14+0x28]
0x002b4855: mov    rcx,QWORD PTR [rax]
0x002b4858: mov    rax,QWORD PTR [rcx+0x10]
0x002b485c: cmp    DWORD PTR [rax+0xc],0xffffffff
0x002b4860: je     0x1402b4b5d
0x002b4866: lea    rdx,[rip+0x132eeb3]        # 0x1415e3720 ; literal=" "
0x002b486d: mov    rcx,r13
0x002b4870: call   0x14006f4f0
0x002b4875: mov    rax,QWORD PTR [r14+0x28]
0x002b4879: mov    rcx,QWORD PTR [rax]
0x002b487c: mov    rax,QWORD PTR [rcx+0x10]
0x002b4880: xor    r9d,r9d
0x002b4883: mov    r8d,DWORD PTR [rax+0xc]
0x002b4887: mov    rdx,r13
0x002b488a: call   0x140b91440
0x002b488f: jmp    0x1402b4b5d
0x002b4894: lea    rdx,[rip+0x136f635]        # 0x141623ed0 ; literal="Corrupt"
0x002b489b: mov    rcx,r13
0x002b489e: call   0x14006f510
0x002b48a3: mov    rax,QWORD PTR [r14+0x28]
0x002b48a7: mov    rcx,QWORD PTR [rax]
0x002b48aa: mov    rax,QWORD PTR [rcx+0x10]
0x002b48ae: cmp    DWORD PTR [rax+0x14],0xffffffff
0x002b48b2: je     0x1402b4b5d
0x002b48b8: cmp    DWORD PTR [rax+0x10],0xffffffff
0x002b48bc: je     0x1402b4b5d
0x002b48c2: lea    rdx,[rip+0x132ee57]        # 0x1415e3720 ; literal=" "
0x002b48c9: mov    rcx,r13
0x002b48cc: call   0x14006f4f0
0x002b48d1: mov    rax,QWORD PTR [r14+0x28]
0x002b48d5: mov    rcx,QWORD PTR [rax]
0x002b48d8: mov    rdi,QWORD PTR [rcx+0x10]
0x002b48dc: mov    edx,DWORD PTR [rdi+0x10]
0x002b48df: lea    rcx,[rip+0x2116e02]        # 0x1423cb6e8
0x002b48e6: call   0x14007da80
0x002b48eb: mov    rbx,rax
0x002b48ee: test   rax,rax
0x002b48f1: je     0x1402b496e
0x002b48f3: lea    rdx,[rax+0x1110]
0x002b48fa: mov    ecx,DWORD PTR [rdi+0x14]
0x002b48fd: call   0x1400b9d50
0x002b4902: test   rax,rax
0x002b4905: je     0x1402b496e
0x002b4907: mov    rdx,rax
0x002b490a: mov    rcx,rbx
0x002b490d: call   0x1400bbdd0
0x002b4912: test   rax,rax
0x002b4915: je     0x1402b496e
0x002b4917: xor    r9d,r9d
0x002b491a: xor    r8d,r8d
0x002b491d: mov    dl,0xff
0x002b491f: mov    rcx,rax
0x002b4922: call   0x140997bf0
0x002b4927: mov    rdx,rax
0x002b492a: lea    rcx,[rbp+0x1c0]
0x002b4931: call   0x14006f560
0x002b4936: nop
0x002b4937: lea    rcx,[rbp+0x1c0]
0x002b493e: call   0x14052ade0
0x002b4943: lea    rdx,[rbp+0x1c0]
0x002b494a: mov    rcx,r13
0x002b494d: call   0x1400b9ca0
0x002b4952: lea    rdx,[rip+0x136f4ab]        # 0x141623e04 ; literal=" of"
0x002b4959: mov    rcx,r13
0x002b495c: call   0x14006f4f0
0x002b4961: nop
0x002b4962: lea    rcx,[rbp+0x1c0]
0x002b4969: call   0x14006f7e0
0x002b496e: lea    rdx,[rip+0x132edab]        # 0x1415e3720 ; literal=" "
0x002b4975: mov    rcx,r13
0x002b4978: call   0x14006f4f0
0x002b497d: mov    rax,QWORD PTR [r14+0x28]
0x002b4981: mov    rcx,QWORD PTR [rax]
0x002b4984: mov    rax,QWORD PTR [rcx+0x10]
0x002b4988: xor    r9d,r9d
0x002b498b: mov    r8d,DWORD PTR [rax+0x10]
0x002b498f: mov    rdx,r13
0x002b4992: call   0x140b8f940
0x002b4997: xor    edi,edi
0x002b4999: jmp    0x1402b4b5d
0x002b499e: lea    rdx,[rip+0x136f78b]        # 0x141624130 ; literal="Provide Position"
0x002b49a5: mov    rcx,r13
0x002b49a8: call   0x14006f510
0x002b49ad: mov    rax,QWORD PTR [r14+0x28]
0x002b49b1: mov    rcx,QWORD PTR [rax]
0x002b49b4: mov    rax,QWORD PTR [rcx+0x10]
0x002b49b8: cmp    DWORD PTR [rax+0x28],0xffffffff
0x002b49bc: je     0x1402b4b5d
0x002b49c2: lea    rdx,[rip+0x1333563]        # 0x1415e7f2c ; literal=" in "
0x002b49c9: mov    rcx,r13
0x002b49cc: call   0x14006f4f0
0x002b49d1: mov    rax,QWORD PTR [r14+0x28]
0x002b49d5: mov    rcx,QWORD PTR [rax]
0x002b49d8: mov    rax,QWORD PTR [rcx+0x10]
0x002b49dc: mov    r8d,DWORD PTR [rax+0x28]
0x002b49e0: jmp    0x1402b4b52
0x002b49e5: mov    rcx,QWORD PTR [rdx+0x10]
0x002b49e9: mov    edx,DWORD PTR [rcx+0x18]
0x002b49ec: test   edx,edx
0x002b49ee: je     0x1402b4a30
0x002b49f0: sub    edx,0x2
0x002b49f3: je     0x1402b4a15
0x002b49f5: cmp    edx,0x1
0x002b49f8: jne    0x1402b4a3f
0x002b49fa: lea    rdx,[rip+0x136f6e7]        # 0x1416240e8 ; literal="Attempted Embezzlement"
0x002b4a01: mov    rcx,r13
0x002b4a04: call   0x14006f510
0x002b4a09: lea    rdx,[rip+0x133351c]        # 0x1415e7f2c ; literal=" in "
0x002b4a10: jmp    0x1402b4b64
0x002b4a15: lea    rdx,[rip+0x136f6e4]        # 0x141624100 ; literal="Attempted Espionage"
0x002b4a1c: mov    rcx,r13
0x002b4a1f: call   0x14006f510
0x002b4a24: lea    rdx,[rip+0x1333501]        # 0x1415e7f2c ; literal=" in "
0x002b4a2b: jmp    0x1402b4b64
0x002b4a30: lea    rdx,[rip+0x136f6e1]        # 0x141624118 ; literal="Attempted Bribery"
0x002b4a37: mov    rcx,r13
0x002b4a3a: call   0x14006f510
0x002b4a3f: lea    rdx,[rip+0x13334e6]        # 0x1415e7f2c ; literal=" in "
0x002b4a46: jmp    0x1402b4b64
0x002b4a4b: lea    rdx,[rip+0x136f686]        # 0x1416240d8 ; literal="Infiltrate"
0x002b4a52: mov    rcx,r13
0x002b4a55: call   0x14006f510
0x002b4a5a: mov    rax,QWORD PTR [r14+0x28]
0x002b4a5e: mov    rcx,QWORD PTR [rax]
0x002b4a61: mov    rax,QWORD PTR [rcx+0x10]
0x002b4a65: cmp    DWORD PTR [rax+0x8],0xffffffff
0x002b4a69: je     0x1402b4b5d
0x002b4a6f: lea    rdx,[rip+0x132ecaa]        # 0x1415e3720 ; literal=" "
0x002b4a76: mov    rcx,r13
0x002b4a79: call   0x14006f4f0
0x002b4a7e: mov    rax,QWORD PTR [r14+0x28]
0x002b4a82: mov    rcx,QWORD PTR [rax]
0x002b4a85: mov    rax,QWORD PTR [rcx+0x10]
0x002b4a89: mov    r8d,DWORD PTR [rax+0x8]
0x002b4a8d: jmp    0x1402b4b52
0x002b4a92: lea    rdx,[rip+0x136f633]        # 0x1416240cc ; literal="Frame"
0x002b4a99: mov    rcx,r13
0x002b4a9c: call   0x14006f510
0x002b4aa1: mov    rax,QWORD PTR [r14+0x28]
0x002b4aa5: mov    rcx,QWORD PTR [rax]
0x002b4aa8: mov    rax,QWORD PTR [rcx+0x10]
0x002b4aac: cmp    DWORD PTR [rax+0x8],0xffffffff
0x002b4ab0: je     0x1402b4b5d
0x002b4ab6: lea    rdx,[rip+0x132ec63]        # 0x1415e3720 ; literal=" "
0x002b4abd: mov    rcx,r13
0x002b4ac0: call   0x14006f4f0
0x002b4ac5: lea    rcx,[rbp+0xf0]
0x002b4acc: call   0x140072010
0x002b4ad1: mov    rax,QWORD PTR [r14+0x28]
0x002b4ad5: mov    rcx,QWORD PTR [rax]
0x002b4ad8: mov    rax,QWORD PTR [rcx+0x10]
0x002b4adc: mov    r8d,DWORD PTR [rax+0x8]
0x002b4ae0: jmp    0x1402b480f
0x002b4ae5: lea    rdx,[rip+0x136f5d4]        # 0x1416240c0 ; literal="Start War"
0x002b4aec: mov    rcx,r13
0x002b4aef: call   0x14006f510
0x002b4af4: mov    rax,QWORD PTR [r14+0x28]
0x002b4af8: mov    rcx,QWORD PTR [rax]
0x002b4afb: mov    rax,QWORD PTR [rcx+0x10]
0x002b4aff: cmp    DWORD PTR [rax+0x8],0xffffffff
0x002b4b03: je     0x1402b4b5d
0x002b4b05: cmp    DWORD PTR [rax+0xc],0xffffffff
0x002b4b09: je     0x1402b4b5d
0x002b4b0b: lea    rdx,[rip+0x136f59e]        # 0x1416240b0 ; literal=" between "
0x002b4b12: mov    rcx,r13
0x002b4b15: call   0x14006f4f0
0x002b4b1a: mov    rax,QWORD PTR [r14+0x28]
0x002b4b1e: mov    rcx,QWORD PTR [rax]
0x002b4b21: mov    rax,QWORD PTR [rcx+0x10]
0x002b4b25: xor    r9d,r9d
0x002b4b28: mov    r8d,DWORD PTR [rax+0x8]
0x002b4b2c: mov    rdx,r13
0x002b4b2f: call   0x140b8f940
0x002b4b34: lea    rdx,[rip+0x132f581]        # 0x1415e40bc ; literal=" and "
0x002b4b3b: mov    rcx,r13
0x002b4b3e: call   0x14006f4f0
0x002b4b43: mov    rax,QWORD PTR [r14+0x28]
0x002b4b47: mov    rcx,QWORD PTR [rax]
0x002b4b4a: mov    rax,QWORD PTR [rcx+0x10]
0x002b4b4e: mov    r8d,DWORD PTR [rax+0xc]
0x002b4b52: xor    r9d,r9d
0x002b4b55: mov    rdx,r13
0x002b4b58: call   0x140b8f940
0x002b4b5d: lea    rdx,[rip+0x136f394]        # 0x141623ef8 ; literal=", agreed in "
0x002b4b64: mov    rcx,r13
0x002b4b67: call   0x14006f4f0
0x002b4b6c: mov    rax,QWORD PTR [r14+0x28]
0x002b4b70: mov    rcx,QWORD PTR [rax]
0x002b4b73: mov    rdx,r13
0x002b4b76: mov    ecx,DWORD PTR [rcx+0x4]
0x002b4b79: call   0x140529cf0
0x002b4b7e: mov    rax,QWORD PTR [rbp+0x48]
0x002b4b82: test   rax,rax
0x002b4b85: je     0x1402b4b92
0x002b4b87: mov    rdx,r13
0x002b4b8a: mov    rcx,rax
0x002b4b8d: call   0x140477920
0x002b4b92: test   r15,r15
0x002b4b95: je     0x1402b4ba2
0x002b4b97: mov    rdx,r13
0x002b4b9a: mov    rcx,r15
0x002b4b9d: call   0x1400cd160
0x002b4ba2: xorps  xmm0,xmm0
0x002b4ba5: movdqu XMMWORD PTR [rbp+0x10],xmm0
0x002b4baa: mov    QWORD PTR [rbp+0x20],rdi
0x002b4bae: movdqu XMMWORD PTR [rsp+0x68],xmm0
0x002b4bb4: mov    QWORD PTR [rsp+0x78],rdi
0x002b4bb9: movdqu XMMWORD PTR [rbp-0x70],xmm0
0x002b4bbe: mov    QWORD PTR [rbp-0x60],rdi
0x002b4bc2: mov    rsi,QWORD PTR [r14+0x28]
0x002b4bc6: mov    r14,QWORD PTR [r14+0x30]
0x002b4bca: mov    r9,QWORD PTR [rsp+0x70]
0x002b4bcf: mov    QWORD PTR [rsp+0x48],r9
0x002b4bd4: mov    r10,QWORD PTR [rbp-0x68]
0x002b4bd8: mov    QWORD PTR [rsp+0x30],r10
0x002b4bdd: lea    r12,[rip+0xffffffffffd4b41c]        # 0x140000000
0x002b4be4: cmp    rsi,r14
0x002b4be7: jae    0x1402b4e7d
0x002b4bed: mov    rdx,QWORD PTR [rsi]
0x002b4bf0: mov    eax,DWORD PTR [rdx+0x18]
0x002b4bf3: add    eax,0xfffffffb
0x002b4bf6: cmp    eax,0xa
0x002b4bf9: ja     0x1402b4cd0
0x002b4bff: cdqe
0x002b4c01: mov    ecx,DWORD PTR [r12+rax*4+0x2b6b34]
0x002b4c09: add    rcx,r12
0x002b4c0c: jmp    rcx
0x002b4c0e: mov    rbx,QWORD PTR [rdx+0x10]
0x002b4c12: lea    rdx,[rbx+0x4]
0x002b4c16: cmp    DWORD PTR [rdx],0xffffffff
0x002b4c19: je     0x1402b4c24
0x002b4c1b: lea    rcx,[rbp+0x10]
0x002b4c1f: call   0x14006f3a0
0x002b4c24: lea    rdx,[rbx+0x8]
0x002b4c28: cmp    DWORD PTR [rdx],0xffffffff
0x002b4c2b: je     0x1402b4c41
0x002b4c2d: lea    rcx,[rsp+0x68]
0x002b4c32: call   0x14006f3a0
0x002b4c37: mov    rax,QWORD PTR [rsp+0x70]
0x002b4c3c: mov    QWORD PTR [rsp+0x48],rax
0x002b4c41: cmp    DWORD PTR [rbx],0xffffffff
0x002b4c44: je     0x1402b4ccb
0x002b4c4a: mov    rdx,rbx
0x002b4c4d: lea    rcx,[rbp-0x70]
0x002b4c51: call   0x14006f3a0
0x002b4c56: mov    r10,QWORD PTR [rbp-0x68]
0x002b4c5a: mov    QWORD PTR [rsp+0x30],r10
0x002b4c5f: add    rsi,0x8
0x002b4c63: mov    r9,QWORD PTR [rsp+0x48]
0x002b4c68: jmp    0x1402b4be4
0x002b4c6d: mov    rbx,QWORD PTR [rdx+0x10]
0x002b4c71: lea    rdx,[rbx+0x4]
0x002b4c75: cmp    DWORD PTR [rdx],0xffffffff
0x002b4c78: je     0x1402b4c88
0x002b4c7a: lea    rcx,[rbp+0x10]
0x002b4c7e: call   0x14006f3a0
0x002b4c83: mov    r10,QWORD PTR [rsp+0x30]
0x002b4c88: cmp    DWORD PTR [rbx],0xffffffff
0x002b4c8b: je     0x1402b4cd0
0x002b4c8d: jmp    0x1402b4c4a
0x002b4c8f: mov    rbx,QWORD PTR [rdx+0x10]
0x002b4c93: lea    rdx,[rbx+0x8]
0x002b4c97: cmp    DWORD PTR [rdx],0xffffffff
0x002b4c9a: je     0x1402b4ca5
0x002b4c9c: lea    rcx,[rbp+0x10]
0x002b4ca0: call   0x14006f3a0
0x002b4ca5: lea    rdx,[rbx+0xc]
0x002b4ca9: cmp    DWORD PTR [rdx],0xffffffff
0x002b4cac: je     0x1402b4cc2
0x002b4cae: lea    rcx,[rsp+0x68]
0x002b4cb3: call   0x14006f3a0
0x002b4cb8: mov    rax,QWORD PTR [rsp+0x70]
0x002b4cbd: mov    QWORD PTR [rsp+0x48],rax
0x002b4cc2: lea    rdx,[rbx+0x4]
0x002b4cc6: cmp    DWORD PTR [rdx],0xffffffff
0x002b4cc9: jne    0x1402b4c4d
0x002b4ccb: mov    r10,QWORD PTR [rsp+0x30]
0x002b4cd0: add    rsi,0x8
0x002b4cd4: mov    r9,QWORD PTR [rsp+0x48]
0x002b4cd9: jmp    0x1402b4be4
0x002b4cde: mov    r15,QWORD PTR [rdx+0x10]
0x002b4ce2: lea    rdx,[r15+0xc]
0x002b4ce6: cmp    DWORD PTR [rdx],0xffffffff
0x002b4ce9: je     0x1402b4cf9
0x002b4ceb: lea    rcx,[rbp+0x10]
0x002b4cef: call   0x14006f3a0
0x002b4cf4: mov    r9,QWORD PTR [rsp+0x48]
0x002b4cf9: mov    rbx,QWORD PTR [r15+0x10]
0x002b4cfd: mov    rdi,QWORD PTR [r15+0x18]
0x002b4d01: cmp    rbx,rdi
0x002b4d04: jae    0x1402b4d3c
0x002b4d06: cmp    r9,QWORD PTR [rsp+0x78]
0x002b4d0b: je     0x1402b4d21
0x002b4d0d: mov    eax,DWORD PTR [rbx]
0x002b4d0f: mov    DWORD PTR [r9],eax
0x002b4d12: add    r9,0x4
0x002b4d16: mov    QWORD PTR [rsp+0x70],r9
0x002b4d1b: add    rbx,0x4
0x002b4d1f: jmp    0x1402b4d01
0x002b4d21: mov    r8,rbx
0x002b4d24: mov    rdx,r9
0x002b4d27: lea    rcx,[rsp+0x68]
0x002b4d2c: call   0x140070db0
0x002b4d31: mov    r9,QWORD PTR [rsp+0x70]
0x002b4d36: add    rbx,0x4
0x002b4d3a: jmp    0x1402b4d01
0x002b4d3c: mov    QWORD PTR [rsp+0x48],r9
0x002b4d41: lea    r8,[r15+0x8]
0x002b4d45: mov    eax,DWORD PTR [r8]
0x002b4d48: mov    r10,QWORD PTR [rsp+0x30]
0x002b4d4d: cmp    eax,0xffffffff
0x002b4d50: je     0x1402b4d7a
0x002b4d52: cmp    r10,QWORD PTR [rbp-0x60]
0x002b4d56: je     0x1402b4d65
0x002b4d58: mov    DWORD PTR [r10],eax
0x002b4d5b: add    r10,0x4
0x002b4d5f: mov    QWORD PTR [rbp-0x68],r10
0x002b4d63: jmp    0x1402b4d75
0x002b4d65: mov    rdx,r10
0x002b4d68: lea    rcx,[rbp-0x70]
0x002b4d6c: call   0x140070db0
0x002b4d71: mov    r10,QWORD PTR [rbp-0x68]
0x002b4d75: mov    QWORD PTR [rsp+0x30],r10
0x002b4d7a: lea    r8,[r15+0x4]
0x002b4d7e: mov    eax,DWORD PTR [r8]
0x002b4d81: cmp    eax,0xffffffff
0x002b4d84: je     0x1402b4dae
0x002b4d86: cmp    r10,QWORD PTR [rbp-0x60]
0x002b4d8a: je     0x1402b4d99
0x002b4d8c: mov    DWORD PTR [r10],eax
0x002b4d8f: add    r10,0x4
0x002b4d93: mov    QWORD PTR [rbp-0x68],r10
0x002b4d97: jmp    0x1402b4da9
0x002b4d99: mov    rdx,r10
0x002b4d9c: lea    rcx,[rbp-0x70]
0x002b4da0: call   0x140070db0
0x002b4da5: mov    r10,QWORD PTR [rbp-0x68]
0x002b4da9: mov    QWORD PTR [rsp+0x30],r10
0x002b4dae: mov    eax,DWORD PTR [r15]
0x002b4db1: cmp    eax,0xffffffff
0x002b4db4: je     0x1402b4cd0
0x002b4dba: cmp    r10,QWORD PTR [rbp-0x60]
0x002b4dbe: je     0x1402b4dde
0x002b4dc0: mov    DWORD PTR [r10],eax
0x002b4dc3: add    r10,0x4
0x002b4dc7: mov    QWORD PTR [rsp+0x30],r10
0x002b4dcc: mov    QWORD PTR [rbp-0x68],r10
0x002b4dd0: add    rsi,0x8
0x002b4dd4: mov    r9,QWORD PTR [rsp+0x48]
0x002b4dd9: jmp    0x1402b4be4
0x002b4dde: mov    r8,r15
0x002b4de1: mov    rdx,r10
0x002b4de4: lea    rcx,[rbp-0x70]
0x002b4de8: call   0x140070db0
0x002b4ded: jmp    0x1402b4c56
0x002b4df2: mov    rdi,QWORD PTR [rdx+0x10]
0x002b4df6: mov    rbx,QWORD PTR [rdi]
0x002b4df9: mov    rdi,QWORD PTR [rdi+0x8]
0x002b4dfd: nop    DWORD PTR [rax]
0x002b4e00: cmp    rbx,rdi
0x002b4e03: jae    0x1402b4cd0
0x002b4e09: cmp    r10,QWORD PTR [rbp-0x60]
0x002b4e0d: je     0x1402b4e27
0x002b4e0f: mov    eax,DWORD PTR [rbx]
0x002b4e11: mov    DWORD PTR [r10],eax
0x002b4e14: add    r10,0x4
0x002b4e18: mov    QWORD PTR [rbp-0x68],r10
0x002b4e1c: mov    QWORD PTR [rsp+0x30],r10
0x002b4e21: add    rbx,0x4
0x002b4e25: jmp    0x1402b4e00
0x002b4e27: mov    r8,rbx
0x002b4e2a: mov    rdx,r10
0x002b4e2d: lea    rcx,[rbp-0x70]
0x002b4e31: call   0x140070db0
0x002b4e36: mov    r10,QWORD PTR [rbp-0x68]
0x002b4e3a: mov    QWORD PTR [rsp+0x30],r10
0x002b4e3f: add    rbx,0x4
0x002b4e43: jmp    0x1402b4e00
0x002b4e45: mov    rdi,QWORD PTR [rdx+0x10]
0x002b4e49: cmp    DWORD PTR [rdi+0x4],0xffffffff
0x002b4e4d: je     0x1402b4e61
0x002b4e4f: lea    rdx,[rdi+0x4]
0x002b4e53: lea    rcx,[rbp+0x10]
0x002b4e57: call   0x14006f3a0
0x002b4e5c: mov    r10,QWORD PTR [rsp+0x30]
0x002b4e61: mov    eax,DWORD PTR [rdi]
0x002b4e63: cmp    eax,0xffffffff
0x002b4e66: je     0x1402b4cd0
0x002b4e6c: cmp    eax,DWORD PTR [rdi+0x4]
0x002b4e6f: je     0x1402b4cd0
0x002b4e75: mov    rdx,rdi
0x002b4e78: jmp    0x1402b4c4d
0x002b4e7d: mov    rcx,QWORD PTR [rbp+0x18]
0x002b4e81: mov    r14,rcx
0x002b4e84: mov    r15,QWORD PTR [rbp+0x10]
0x002b4e88: sub    r14,r15
0x002b4e8b: sar    r14,0x2
0x002b4e8f: test   r14,r14
0x002b4e92: mov    r12,QWORD PTR [rbp-0x28]
0x002b4e96: movq   rbx,xmm6
0x002b4e9b: je     0x1402b4ef9
0x002b4e9d: mov    rsi,r15
0x002b4ea0: cmp    rsi,rcx
0x002b4ea3: jae    0x1402b4eef
0x002b4ea5: lea    rdx,[rbx+0x8]
0x002b4ea9: mov    ecx,DWORD PTR [rsi]
0x002b4eab: call   0x1400b9d50
0x002b4eb0: test   rax,rax
0x002b4eb3: je     0x1402b4ee5
0x002b4eb5: mov    rbx,QWORD PTR [rax+0x8]
0x002b4eb9: mov    rdi,QWORD PTR [rax+0x10]
0x002b4ebd: nop    DWORD PTR [rax]
0x002b4ec0: cmp    rbx,rdi
0x002b4ec3: jae    0x1402b4ee0
0x002b4ec5: mov    rdx,r12
0x002b4ec8: mov    ecx,DWORD PTR [rbx]
0x002b4eca: call   0x1400b9d50
0x002b4ecf: test   rax,rax
0x002b4ed2: jne    0x1402b4eda
0x002b4ed4: add    rbx,0x4
0x002b4ed8: jmp    0x1402b4ec0
0x002b4eda: mov    eax,DWORD PTR [rax]
0x002b4edc: mov    DWORD PTR [r13+0x68],eax
0x002b4ee0: movq   rbx,xmm6
0x002b4ee5: add    rsi,0x4
0x002b4ee9: mov    rcx,QWORD PTR [rbp+0x18]
0x002b4eed: jmp    0x1402b4ea0
0x002b4eef: mov    r9,QWORD PTR [rsp+0x48]
0x002b4ef4: mov    r10,QWORD PTR [rsp+0x30]
0x002b4ef9: mov    r12,QWORD PTR [rsp+0x68]
0x002b4efe: mov    QWORD PTR [rbp-0x30],r12
0x002b4f02: cmp    DWORD PTR [r13+0x68],0xffffffff
0x002b4f07: jne    0x1402b4f7a
0x002b4f09: mov    rax,r9
0x002b4f0c: sub    rax,r12
0x002b4f0f: sar    rax,0x2
0x002b4f13: test   rax,rax
0x002b4f16: je     0x1402b4f7a
0x002b4f18: mov    rsi,r12
0x002b4f1b: nop    DWORD PTR [rax+rax*1+0x0]
0x002b4f20: cmp    rsi,r9
0x002b4f23: jae    0x1402b4f71
0x002b4f25: lea    rdx,[rbx+0x8]
0x002b4f29: mov    ecx,DWORD PTR [rsi]
0x002b4f2b: call   0x1400b9d50
0x002b4f30: test   rax,rax
0x002b4f33: je     0x1402b4f66
0x002b4f35: mov    rbx,QWORD PTR [rax+0x8]
0x002b4f39: mov    rdi,QWORD PTR [rax+0x10]
0x002b4f3d: nop    DWORD PTR [rax]
0x002b4f40: cmp    rbx,rdi
0x002b4f43: jae    0x1402b4f61
0x002b4f45: mov    rdx,QWORD PTR [rbp-0x28]
0x002b4f49: mov    ecx,DWORD PTR [rbx]
0x002b4f4b: call   0x1400b9d50
0x002b4f50: test   rax,rax
0x002b4f53: jne    0x1402b4f5b
0x002b4f55: add    rbx,0x4
0x002b4f59: jmp    0x1402b4f40
0x002b4f5b: mov    eax,DWORD PTR [rax]
0x002b4f5d: mov    DWORD PTR [r13+0x68],eax
0x002b4f61: movq   rbx,xmm6
0x002b4f66: add    rsi,0x4
0x002b4f6a: mov    r9,QWORD PTR [rsp+0x48]
0x002b4f6f: jmp    0x1402b4f20
0x002b4f71: mov    rcx,QWORD PTR [rbp+0x18]
0x002b4f75: mov    r10,QWORD PTR [rsp+0x30]
0x002b4f7a: test   r14,r14
0x002b4f7d: jne    0x1402b4f92
0x002b4f7f: mov    rax,r9
0x002b4f82: sub    rax,r12
0x002b4f85: sar    rax,0x2
0x002b4f89: test   rax,rax
0x002b4f8c: je     0x1402b5223
0x002b4f92: mov    rax,r10
0x002b4f95: mov    r13,QWORD PTR [rbp-0x70]
0x002b4f99: mov    QWORD PTR [rbp-0x20],r13
0x002b4f9d: sub    rax,r13
0x002b4fa0: sar    rax,0x2
0x002b4fa4: test   rax,rax
0x002b4fa7: je     0x1402b5223
0x002b4fad: xor    al,al
0x002b4faf: mov    BYTE PTR [rsp+0x40],al
0x002b4fb3: mov    r12,QWORD PTR [rbp-0x28]
0x002b4fb7: cmp    r15,rcx
0x002b4fba: jae    0x1402b5070
0x002b4fc0: lea    rdx,[rbx+0x8]
0x002b4fc4: mov    ecx,DWORD PTR [r15]
0x002b4fc7: call   0x1400b9d50
0x002b4fcc: test   rax,rax
0x002b4fcf: je     0x1402b5063
0x002b4fd5: mov    rsi,QWORD PTR [rax+0x8]
0x002b4fd9: mov    r14,QWORD PTR [rax+0x10]
0x002b4fdd: mov    QWORD PTR [rbp-0x8],r14
0x002b4fe1: mov    r13,QWORD PTR [rbp+0x0]
0x002b4fe5: cmp    rsi,r14
0x002b4fe8: jae    0x1402b505e
0x002b4fea: mov    rdx,r12
0x002b4fed: mov    ecx,DWORD PTR [rsi]
0x002b4fef: call   0x1400b9d50
0x002b4ff4: test   rax,rax
0x002b4ff7: je     0x1402b5058
0x002b4ff9: or     DWORD PTR [rax+0x98],0x2
0x002b5000: mov    BYTE PTR [rsp+0x40],0x1
0x002b5005: mov    rbx,QWORD PTR [r13+0x0]
0x002b5009: mov    rdi,QWORD PTR [r13+0x8]
0x002b500d: mov    r14,QWORD PTR [rbp+0x30]
0x002b5011: cmp    rbx,rdi
0x002b5014: jae    0x1402b5054
0x002b5016: mov    rdx,QWORD PTR [rbx]
0x002b5019: mov    rcx,QWORD PTR [rdx]
0x002b501c: mov    eax,DWORD PTR [rsi]
0x002b501e: cmp    DWORD PTR [rcx+0xe0],eax
0x002b5024: jne    0x1402b504e
0x002b5026: lea    rcx,[rdx+0xd8]
0x002b502d: mov    rdx,QWORD PTR [rcx+0x8]
0x002b5031: cmp    rdx,QWORD PTR [rcx+0x10]
0x002b5035: je     0x1402b5045
0x002b5037: mov    QWORD PTR [rdx],r14
0x002b503a: add    QWORD PTR [rcx+0x8],0x8
0x002b503f: add    rbx,0x8
0x002b5043: jmp    0x1402b5011
0x002b5045: lea    r8,[rbp-0x50]
0x002b5049: call   0x140070b60
0x002b504e: add    rbx,0x8
0x002b5052: jmp    0x1402b5011
0x002b5054: mov    r14,QWORD PTR [rbp-0x8]
0x002b5058: add    rsi,0x4
0x002b505c: jmp    0x1402b4fe5
0x002b505e: movq   rbx,xmm6
0x002b5063: add    r15,0x4
0x002b5067: mov    rcx,QWORD PTR [rbp+0x18]
0x002b506b: jmp    0x1402b4fb7
0x002b5070: mov    r12,QWORD PTR [rbp-0x30]
0x002b5074: mov    r13,QWORD PTR [rbp+0x0]
0x002b5078: nop    DWORD PTR [rax+rax*1+0x0]
0x002b5080: cmp    r12,QWORD PTR [rsp+0x48]
0x002b5085: jae    0x1402b5156
0x002b508b: lea    rdx,[rbx+0x8]
0x002b508f: mov    ecx,DWORD PTR [r12]
0x002b5093: call   0x1400b9d50
0x002b5098: test   rax,rax
0x002b509b: je     0x1402b5149
0x002b50a1: mov    rsi,QWORD PTR [rax+0x8]
0x002b50a5: mov    r14,QWORD PTR [rax+0x10]
0x002b50a9: mov    QWORD PTR [rbp-0x8],r14
0x002b50ad: mov    r12,QWORD PTR [rbp-0x28]
0x002b50b1: cmp    rsi,r14
0x002b50b4: jae    0x1402b5140
0x002b50ba: mov    rdx,r12
0x002b50bd: mov    ecx,DWORD PTR [rsi]
0x002b50bf: call   0x1400b9d50
0x002b50c4: test   rax,rax
0x002b50c7: je     0x1402b5137
0x002b50c9: lea    rcx,[rax+0x98]
0x002b50d0: mov    eax,DWORD PTR [rcx]
0x002b50d2: cmp    BYTE PTR [rsp+0x40],0x0
0x002b50d7: je     0x1402b50de
0x002b50d9: or     eax,0x1
0x002b50dc: jmp    0x1402b50e1
0x002b50de: or     eax,0x2
0x002b50e1: mov    DWORD PTR [rcx],eax
0x002b50e3: mov    rbx,QWORD PTR [r13+0x0]
0x002b50e7: mov    rdi,QWORD PTR [r13+0x8]
0x002b50eb: mov    r14,QWORD PTR [rbp+0x30]
0x002b50ef: nop
0x002b50f0: cmp    rbx,rdi
0x002b50f3: jae    0x1402b5133
0x002b50f5: mov    rdx,QWORD PTR [rbx]
0x002b50f8: mov    rcx,QWORD PTR [rdx]
0x002b50fb: mov    eax,DWORD PTR [rsi]
0x002b50fd: cmp    DWORD PTR [rcx+0xe0],eax
0x002b5103: jne    0x1402b512d
0x002b5105: lea    rcx,[rdx+0xd8]
0x002b510c: mov    rdx,QWORD PTR [rcx+0x8]
0x002b5110: cmp    rdx,QWORD PTR [rcx+0x10]
0x002b5114: je     0x1402b5124
0x002b5116: mov    QWORD PTR [rdx],r14
0x002b5119: add    QWORD PTR [rcx+0x8],0x8
0x002b511e: add    rbx,0x8
0x002b5122: jmp    0x1402b50f0
0x002b5124: lea    r8,[rbp-0x50]
0x002b5128: call   0x140070b60
0x002b512d: add    rbx,0x8
0x002b5131: jmp    0x1402b50f0
0x002b5133: mov    r14,QWORD PTR [rbp-0x8]
0x002b5137: add    rsi,0x4
0x002b513b: jmp    0x1402b50b1
0x002b5140: mov    r12,QWORD PTR [rbp-0x30]
0x002b5144: movq   rbx,xmm6
0x002b5149: add    r12,0x4
0x002b514d: mov    QWORD PTR [rbp-0x30],r12
0x002b5151: jmp    0x1402b5080
0x002b5156: mov    r13,QWORD PTR [rbp-0x20]
0x002b515a: nop    WORD PTR [rax+rax*1+0x0]
0x002b5160: cmp    r13,QWORD PTR [rsp+0x30]
0x002b5165: jae    0x1402b5223
0x002b516b: lea    rdx,[rbx+0x8]
0x002b516f: mov    ecx,DWORD PTR [r13+0x0]
0x002b5173: call   0x1400b9d50
0x002b5178: test   rax,rax
0x002b517b: je     0x1402b5216
0x002b5181: mov    rsi,QWORD PTR [rax+0x8]
0x002b5185: mov    r14,QWORD PTR [rax+0x10]
0x002b5189: mov    QWORD PTR [rbp-0x8],r14
0x002b518d: mov    r13,QWORD PTR [rbp+0x0]
0x002b5191: cmp    rsi,r14
0x002b5194: jae    0x1402b520d
0x002b5196: mov    rdx,QWORD PTR [rbp-0x28]
0x002b519a: mov    ecx,DWORD PTR [rsi]
0x002b519c: call   0x1400b9d50
0x002b51a1: test   rax,rax
0x002b51a4: je     0x1402b5207
0x002b51a6: or     DWORD PTR [rax+0x98],0x1
0x002b51ad: mov    rbx,QWORD PTR [r13+0x0]
0x002b51b1: mov    rdi,QWORD PTR [r13+0x8]
0x002b51b5: mov    r14,QWORD PTR [rbp+0x30]
0x002b51b9: nop    DWORD PTR [rax+0x0]
0x002b51c0: cmp    rbx,rdi
0x002b51c3: jae    0x1402b5203
0x002b51c5: mov    rdx,QWORD PTR [rbx]
0x002b51c8: mov    rcx,QWORD PTR [rdx]
0x002b51cb: mov    eax,DWORD PTR [rsi]
0x002b51cd: cmp    DWORD PTR [rcx+0xe0],eax
0x002b51d3: jne    0x1402b51fd
0x002b51d5: lea    rcx,[rdx+0xd8]
0x002b51dc: mov    rdx,QWORD PTR [rcx+0x8]
0x002b51e0: cmp    rdx,QWORD PTR [rcx+0x10]
0x002b51e4: je     0x1402b51f4
0x002b51e6: mov    QWORD PTR [rdx],r14
0x002b51e9: add    QWORD PTR [rcx+0x8],0x8
0x002b51ee: add    rbx,0x8
0x002b51f2: jmp    0x1402b51c0
0x002b51f4: lea    r8,[rbp-0x50]
0x002b51f8: call   0x140070b60
0x002b51fd: add    rbx,0x8
0x002b5201: jmp    0x1402b51c0
0x002b5203: mov    r14,QWORD PTR [rbp-0x8]
0x002b5207: add    rsi,0x4
0x002b520b: jmp    0x1402b5191
0x002b520d: mov    r13,QWORD PTR [rbp-0x20]
0x002b5211: movq   rbx,xmm6
0x002b5216: add    r13,0x4
0x002b521a: mov    QWORD PTR [rbp-0x20],r13
0x002b521e: jmp    0x1402b5160
0x002b5223: lea    rcx,[rbp-0x70]
0x002b5227: call   0x14006f6e0
0x002b522c: nop
0x002b522d: lea    rcx,[rsp+0x68]
0x002b5232: call   0x14006f6e0
0x002b5237: nop
0x002b5238: lea    rcx,[rbp+0x10]
0x002b523c: call   0x14006f6e0
0x002b5241: mov    rdi,QWORD PTR [rip+0x222cb40]        # 0x1424e1d88
0x002b5248: mov    rbx,QWORD PTR [rbp+0x38]
0x002b524c: mov    rax,QWORD PTR [rbp+0x40]
0x002b5250: mov    r12,QWORD PTR [rbp-0x28]
0x002b5254: mov    r15,QWORD PTR [rbp-0x18]
0x002b5258: xor    r13d,r13d
0x002b525b: add    rbx,0x4
0x002b525f: jmp    0x1402b45e2
0x002b5264: mov    DWORD PTR [rbp+0x30],r13d
0x002b5268: mov    rcx,QWORD PTR [rbp+0x0]
0x002b526c: mov    rsi,QWORD PTR [rcx]
0x002b526f: mov    rax,QWORD PTR [rcx+0x8]
0x002b5273: mov    QWORD PTR [rbp+0x90],rax
0x002b527a: mov    QWORD PTR [rbp-0x8],rsi
0x002b527e: cmp    rsi,rax
0x002b5281: jae    0x1402b694d
0x002b5287: mov    r15,QWORD PTR [rsi]
0x002b528a: mov    rcx,QWORD PTR [r15]
0x002b528d: mov    rdx,r12
0x002b5290: mov    ecx,DWORD PTR [rcx+0xe0]
0x002b5296: call   0x1400b9d50
0x002b529b: mov    r14,rax
0x002b529e: test   rax,rax
0x002b52a1: je     0x1402b692f
0x002b52a7: mov    ecx,DWORD PTR [rax+0x98]
0x002b52ad: test   cl,0x1
0x002b52b0: jne    0x1402b692f
0x002b52b6: test   cl,0x2
0x002b52b9: je     0x1402b692f
0x002b52bf: mov    ecx,0xa0
0x002b52c4: call   0x141534600
0x002b52c9: mov    r12,rax
0x002b52cc: mov    QWORD PTR [rbp-0x20],rax
0x002b52d0: mov    QWORD PTR [rax],r13
0x002b52d3: mov    QWORD PTR [rax+0x8],r13
0x002b52d7: mov    QWORD PTR [rax+0x10],r13
0x002b52db: xorps  xmm0,xmm0
0x002b52de: movups XMMWORD PTR [rax+0x18],xmm0
0x002b52e2: mov    QWORD PTR [rax+0x28],r13
0x002b52e6: mov    QWORD PTR [rax+0x30],0xf
0x002b52ee: mov    BYTE PTR [rax+0x18],0x0
0x002b52f2: movups XMMWORD PTR [rax+0x38],xmm0
0x002b52f6: mov    QWORD PTR [rax+0x48],r13
0x002b52fa: mov    QWORD PTR [rax+0x50],0xf
0x002b5302: mov    BYTE PTR [rax+0x38],0x0
0x002b5306: movups XMMWORD PTR [rax+0x58],xmm0
0x002b530a: mov    QWORD PTR [rax+0x68],r13
0x002b530e: mov    QWORD PTR [rax+0x70],0xf
0x002b5316: mov    BYTE PTR [rax+0x58],0x0
0x002b531a: mov    QWORD PTR [rax+0x78],r13
0x002b531e: mov    QWORD PTR [rax+0x80],r13
0x002b5325: mov    QWORD PTR [rax+0x88],r13
0x002b532c: mov    QWORD PTR [rax+0x90],r13
0x002b5333: mov    DWORD PTR [rax+0x98],r13d
0x002b533a: mov    QWORD PTR [rbp+0xd0],rax
0x002b5341: mov    ecx,0x88
0x002b5346: call   0x141534600
0x002b534b: mov    rbx,rax
0x002b534e: mov    QWORD PTR [rbp+0x88],rax
0x002b5355: lea    rcx,[rax+0x20]
0x002b5359: xorps  xmm0,xmm0
0x002b535c: movups XMMWORD PTR [rcx],xmm0
0x002b535f: mov    QWORD PTR [rcx+0x10],r13
0x002b5363: mov    QWORD PTR [rcx+0x18],0xf
0x002b536b: mov    BYTE PTR [rcx],0x0
0x002b536e: lea    rdi,[rax+0x48]
0x002b5372: movups XMMWORD PTR [rdi],xmm0
0x002b5375: mov    QWORD PTR [rdi+0x10],r13
0x002b5379: mov    QWORD PTR [rdi+0x18],0xf
0x002b5381: mov    BYTE PTR [rdi],0x0
0x002b5384: movups XMMWORD PTR [rax+0x68],xmm0
0x002b5388: mov    QWORD PTR [rax+0x78],r13
0x002b538c: mov    QWORD PTR [rax+0x80],0xf
0x002b5397: mov    BYTE PTR [rax+0x68],0x0
0x002b539b: mov    QWORD PTR [rax+0x8],r13
0x002b539f: mov    DWORD PTR [rax+0x10],r13d
0x002b53a3: mov    eax,0x1
0x002b53a8: mov    QWORD PTR [rbx+0x14],rax
0x002b53ac: mov    QWORD PTR [rbx+0x18],0x0
0x002b53b4: mov    QWORD PTR [rbp+0x40],rbx
0x002b53b8: mov    QWORD PTR [rbx],r15
0x002b53bb: mov    QWORD PTR [rbx+0x8],r13
0x002b53bf: mov    DWORD PTR [rbx+0x14],eax
0x002b53c2: mov    r8d,0x4
0x002b53c8: lea    rdx,[rip+0x136eda9]        # 0x141624178 ; literal="Boss"
0x002b53cf: call   0x14006f860
0x002b53d4: mov    DWORD PTR [rbx+0x40],0x5
0x002b53db: mov    BYTE PTR [rbx+0x44],0x1
0x002b53df: mov    rdx,QWORD PTR [r15+0x10]
0x002b53e3: test   rdx,rdx
0x002b53e6: je     0x1402b5536
0x002b53ec: cmp    QWORD PTR [rdx+0x10],0x0
0x002b53f1: je     0x1402b5408
0x002b53f3: cmp    QWORD PTR [rdx+0x18],0xf
0x002b53f8: jbe    0x1402b53fd
0x002b53fa: mov    rdx,QWORD PTR [rdx]
0x002b53fd: movzx  edx,BYTE PTR [rdx]
0x002b5400: mov    rcx,rdi
0x002b5403: call   0x1400b9b10
0x002b5408: mov    rax,QWORD PTR [r15+0x10]
0x002b540c: mov    edx,DWORD PTR [rax+0x40]
0x002b540f: cmp    edx,0xffffffff
0x002b5412: jne    0x1402b541d
0x002b5414: cmp    DWORD PTR [rax+0x44],edx
0x002b5417: je     0x1402b54f5
0x002b541d: xorps  xmm0,xmm0
0x002b5420: movups XMMWORD PTR [rbp+0x1c0],xmm0
0x002b5427: mov    QWORD PTR [rbp+0x1d0],r13
0x002b542e: mov    QWORD PTR [rbp+0x1d8],0xf
0x002b5439: mov    BYTE PTR [rbp+0x1c0],0x0
0x002b5440: movsx  eax,WORD PTR [rax+0x5c]
0x002b5444: mov    DWORD PTR [rsp+0x20],eax
0x002b5448: lea    r8,[rbp+0x1c0]
0x002b544f: call   0x140d29b90
0x002b5454: mov    rdx,QWORD PTR [r15+0x10]
0x002b5458: movsx  eax,WORD PTR [rdx+0x5e]
0x002b545c: mov    DWORD PTR [rsp+0x20],eax
0x002b5460: lea    r8,[rbp+0x1c0]
0x002b5467: mov    edx,DWORD PTR [rdx+0x44]
0x002b546a: call   0x140d29b90
0x002b546f: cmp    QWORD PTR [rbp+0x1d0],0x0
0x002b5477: je     0x1402b54b4
0x002b5479: cmp    QWORD PTR [rbx+0x58],0x0
0x002b547e: je     0x1402b5490
0x002b5480: lea    rcx,[rbx+0x48]
0x002b5484: lea    rdx,[rip+0x132e295]        # 0x1415e3720 ; literal=" "
0x002b548b: call   0x14006f4f0
0x002b5490: lea    rdx,[rbp+0x1c0]
0x002b5497: cmp    QWORD PTR [rbp+0x1d8],0xf
0x002b549f: cmova  rdx,QWORD PTR [rbp+0x1c0]
0x002b54a7: lea    rcx,[rbx+0x48]
0x002b54ab: movzx  edx,BYTE PTR [rdx]
0x002b54ae: call   0x1400b9b10
0x002b54b3: nop
0x002b54b4: mov    rdx,QWORD PTR [rbp+0x1d8]
0x002b54bb: cmp    rdx,0xf
0x002b54bf: jbe    0x1402b54f5
0x002b54c1: inc    rdx
0x002b54c4: mov    rcx,QWORD PTR [rbp+0x1c0]
0x002b54cb: mov    rax,rcx
0x002b54ce: cmp    rdx,0x1000
0x002b54d5: jb     0x1402b54f0
0x002b54d7: add    rdx,0x27
0x002b54db: mov    rcx,QWORD PTR [rcx-0x8]
0x002b54df: sub    rax,rcx
0x002b54e2: add    rax,0xfffffffffffffff8
0x002b54e6: cmp    rax,0x1f
0x002b54ea: ja     0x1402b693f
0x002b54f0: call   0x1415345f0
0x002b54f5: mov    esi,0x3
0x002b54fa: lea    rcx,[rbx+0x48]
0x002b54fe: call   0x14052ade0
0x002b5503: mov    rcx,QWORD PTR [r15]
0x002b5506: cmp    DWORD PTR [rcx+0x30],0xffffffff
0x002b550a: je     0x1402b551f
0x002b550c: lea    rcx,[rbx+0x68]
0x002b5510: mov    r8,rsi
0x002b5513: lea    rdx,[rip+0x136ec5a]        # 0x141624174 ; literal="RIP"
0x002b551a: call   0x14006f860
0x002b551f: mov    rdx,QWORD PTR [r12+0x8]
0x002b5524: cmp    rdx,QWORD PTR [r12+0x10]
0x002b5529: je     0x1402b5597
0x002b552b: mov    QWORD PTR [rdx],rbx
0x002b552e: add    QWORD PTR [r12+0x8],0x8
0x002b5534: jmp    0x1402b55a3
0x002b5536: lea    rdx,[r15+0x18]
0x002b553a: cmp    rdi,rdx
0x002b553d: je     0x1402b5555
0x002b553f: mov    r8,QWORD PTR [rdx+0x10]
0x002b5543: cmp    QWORD PTR [rdx+0x18],0xf
0x002b5548: jbe    0x1402b554d
0x002b554a: mov    rdx,QWORD PTR [rdx]
0x002b554d: mov    rcx,rdi
0x002b5550: call   0x14006f860
0x002b5555: cmp    QWORD PTR [rbx+0x58],0x4
0x002b555a: jb     0x1402b54f5
0x002b555c: mov    rax,QWORD PTR [rdi+0x10]
0x002b5560: mov    esi,0x3
0x002b5565: cmp    rax,rsi
0x002b5568: jb     0x1402b5581
0x002b556a: mov    QWORD PTR [rdi+0x10],rsi
0x002b556e: cmp    QWORD PTR [rdi+0x18],0xf
0x002b5573: jbe    0x1402b5578
0x002b5575: mov    rdi,QWORD PTR [rdi]
0x002b5578: mov    BYTE PTR [rdi+0x3],0x0
0x002b557c: jmp    0x1402b54fa
0x002b5581: mov    rdx,rsi
0x002b5584: sub    rdx,rax
0x002b5587: xor    r8d,r8d
0x002b558a: mov    rcx,rdi
0x002b558d: call   0x1400e1240
0x002b5592: jmp    0x1402b54fa
0x002b5597: lea    r8,[rbp+0x40]
0x002b559b: mov    rcx,r12
0x002b559e: call   0x140070b60
0x002b55a3: test   BYTE PTR [r14+0x4],0x8
0x002b55a8: je     0x1402b55de
0x002b55aa: mov    rcx,QWORD PTR [r15]
0x002b55ad: cmp    BYTE PTR [rcx+0xaa],0x0
0x002b55b4: je     0x1402b55cf
0x002b55b6: lea    rdx,[r12+0x18]
0x002b55bb: add    rcx,0x38
0x002b55bf: xor    r9d,r9d
0x002b55c2: mov    r8b,0x1
0x002b55c5: call   0x140a91760
0x002b55ca: jmp    0x1402b565d
0x002b55cf: mov    r8d,0x8
0x002b55d5: lea    rdx,[rip+0x136e8e4]        # 0x141623ec0 ; literal="Nameless"
0x002b55dc: jmp    0x1402b5653
0x002b55de: mov    rdx,QWORD PTR [r14+0x80]
0x002b55e5: mov    rax,QWORD PTR [r14+0x88]
0x002b55ec: sub    rax,rdx
0x002b55ef: sar    rax,0x2
0x002b55f3: test   rax,rax
0x002b55f6: je     0x1402b5646
0x002b55f8: mov    edx,DWORD PTR [rdx]
0x002b55fa: lea    rcx,[rip+0x222c5d7]        # 0x1424e1bd8
0x002b5601: call   0x140072500
0x002b5606: test   rax,rax
0x002b5609: je     0x1402b5633
0x002b560b: mov    rcx,rax
0x002b560e: call   0x140c37530
0x002b5613: test   rax,rax
0x002b5616: je     0x1402b5633
0x002b5618: cmp    BYTE PTR [rax+0x72],0x0
0x002b561c: je     0x1402b5633
0x002b561e: lea    rdx,[r12+0x18]
0x002b5623: xor    r9d,r9d
0x002b5626: mov    r8b,0x1
0x002b5629: mov    rcx,rax
0x002b562c: call   0x140a91760
0x002b5631: jmp    0x1402b565d
0x002b5633: lea    rcx,[r12+0x18]
0x002b5638: lea    rdx,[rip+0x136e881]        # 0x141623ec0 ; literal="Nameless"
0x002b563f: call   0x14006f510
0x002b5644: jmp    0x1402b565d
0x002b5646: mov    r8d,0xc
0x002b564c: lea    rdx,[rip+0x136e8cd]        # 0x141623f20 ; literal="Unidentified"
0x002b5653: lea    rcx,[r12+0x18]
0x002b5658: call   0x14006f860
0x002b565d: mov    QWORD PTR [r12+0x90],r15
0x002b5665: mov    QWORD PTR [r15+0xb8],r12
0x002b566c: mov    r14,QWORD PTR [rbp+0x48]
0x002b5670: test   r14,r14
0x002b5673: je     0x1402b5680
0x002b5675: mov    rdx,r12
0x002b5678: mov    rcx,r14
0x002b567b: call   0x140477780
0x002b5680: mov    rax,QWORD PTR [rbp-0x18]
0x002b5684: test   rax,rax
0x002b5687: je     0x1402b5694
0x002b5689: mov    rdx,r12
0x002b568c: mov    rcx,rax
0x002b568f: call   0x1400ccfc0
0x002b5694: mov    r13,QWORD PTR [rbp+0x68]
0x002b5698: mov    rbx,QWORD PTR [r13+0x0]
0x002b569c: mov    rdi,QWORD PTR [r13+0x8]
0x002b56a0: lea    rsi,[r12+0x18]
0x002b56a5: cmp    rbx,rdi
0x002b56a8: jae    0x1402b5742
0x002b56ae: mov    rdx,QWORD PTR [rbx]
0x002b56b1: mov    rax,QWORD PTR [r15]
0x002b56b4: mov    ecx,DWORD PTR [rax+0xe0]
0x002b56ba: cmp    DWORD PTR [rdx+0x68],ecx
0x002b56bd: jne    0x1402b5739
0x002b56bf: lea    rcx,[rdx+0x70]
0x002b56c3: cmp    rcx,rsi
0x002b56c6: je     0x1402b56de
0x002b56c8: mov    rdx,rsi
0x002b56cb: cmp    QWORD PTR [rsi+0x18],0xf
0x002b56d0: jbe    0x1402b56d5
0x002b56d2: mov    rdx,QWORD PTR [rsi]
0x002b56d5: mov    r8,QWORD PTR [rsi+0x10]
0x002b56d9: call   0x14006f860
0x002b56de: mov    eax,DWORD PTR [rip+0x2111f90]        # 0x1423c7674
0x002b56e4: lea    ecx,[rax-0x17]
0x002b56e7: cmp    DWORD PTR [rip+0x15e0b7a],0x0        # 0x141896268
0x002b56ee: jne    0x1402b56f3
0x002b56f0: lea    ecx,[rax-0x4]
0x002b56f3: mov    rax,QWORD PTR [rbx]
0x002b56f6: movsxd rdx,ecx
0x002b56f9: sub    rdx,0x5
0x002b56fd: cmp    QWORD PTR [rax+0x80],rdx
0x002b5704: jbe    0x1402b5739
0x002b5706: lea    rcx,[rax+0x70]
0x002b570a: mov    rax,QWORD PTR [rcx+0x10]
0x002b570e: cmp    rdx,rax
0x002b5711: ja     0x1402b572e
0x002b5713: mov    QWORD PTR [rcx+0x10],rdx
0x002b5717: cmp    QWORD PTR [rcx+0x18],0xf
0x002b571c: jbe    0x1402b5721
0x002b571e: mov    rcx,QWORD PTR [rcx]
0x002b5721: mov    BYTE PTR [rcx+rdx*1],0x0
0x002b5725: add    rbx,0x8
0x002b5729: jmp    0x1402b56a5
0x002b572e: sub    rdx,rax
0x002b5731: xor    r8d,r8d
0x002b5734: call   0x1400e1240
0x002b5739: add    rbx,0x8
0x002b573d: jmp    0x1402b56a5
0x002b5742: mov    rcx,QWORD PTR [rbp+0x0]
0x002b5746: mov    rax,QWORD PTR [rcx]
0x002b5749: mov    rcx,QWORD PTR [rcx+0x8]
0x002b574d: nop    DWORD PTR [rax]
0x002b5750: cmp    rax,rcx
0x002b5753: jae    0x1402b5765
0x002b5755: mov    rdx,QWORD PTR [rax]
0x002b5758: and    DWORD PTR [rdx+0xf0],0xfffffffe
0x002b575f: add    rax,0x8
0x002b5763: jmp    0x1402b5750
0x002b5765: or     DWORD PTR [r15+0xf0],0x1
0x002b576d: mov    edx,0x1
0x002b5772: mov    DWORD PTR [rbp-0x80],edx
0x002b5775: xor    al,al
0x002b5777: mov    BYTE PTR [rsp+0x40],al
0x002b577b: xorps  xmm0,xmm0
0x002b577e: movdqu XMMWORD PTR [rbp+0xa8],xmm0
0x002b5786: xor    r8d,r8d
0x002b5789: mov    QWORD PTR [rbp+0xb8],r8
0x002b5790: mov    r13,QWORD PTR [r12]
0x002b5794: mov    rax,QWORD PTR [r12+0x8]
0x002b5799: mov    QWORD PTR [rbp+0x40],rax
0x002b579d: mov    r11,QWORD PTR [rip+0x222c5e4]        # 0x1424e1d88
0x002b57a4: mov    QWORD PTR [rbp+0x38],r13
0x002b57a8: cmp    r13,rax
0x002b57ab: jae    0x1402b68c1
0x002b57b1: mov    rcx,QWORD PTR [r13+0x0]
0x002b57b5: mov    QWORD PTR [rbp+0x60],rcx
0x002b57b9: cmp    DWORD PTR [rcx+0x14],edx
0x002b57bc: jne    0x1402b68b8
0x002b57c2: mov    rax,QWORD PTR [rbp-0x28]
0x002b57c6: mov    r15,QWORD PTR [rax+0x18]
0x002b57ca: mov    r12,QWORD PTR [rax+0x20]
0x002b57ce: mov    QWORD PTR [rbp+0x88],r12
0x002b57d5: mov    QWORD PTR [rbp-0x10],r15
0x002b57d9: cmp    r15,r12
0x002b57dc: jae    0x1402b68b1
0x002b57e2: mov    ebx,DWORD PTR [r15]
0x002b57e5: mov    r10,QWORD PTR [rip+0x222c5a4]        # 0x1424e1d90
0x002b57ec: sub    r10,r11
0x002b57ef: sar    r10,0x3
0x002b57f3: test   r10d,r10d
0x002b57f6: jne    0x1402b5802
0x002b57f8: mov    eax,0xffffffff
0x002b57fd: mov    r9d,eax
0x002b5800: jmp    0x1402b583a
0x002b5802: mov    r9d,r8d
0x002b5805: cmp    r10d,0x40
0x002b5809: jle    0x1402b5836
0x002b580b: nop    DWORD PTR [rax+rax*1+0x0]
0x002b5810: mov    r8d,r10d
0x002b5813: shr    r8d,1
0x002b5816: lea    edx,[r8+r9*1]
0x002b581a: movsxd rax,edx
0x002b581d: mov    rcx,QWORD PTR [r11+rax*8]
0x002b5821: cmp    ebx,DWORD PTR [rcx]
0x002b5823: cmovl  edx,r9d
0x002b5827: mov    r9d,edx
0x002b582a: sub    r10d,r8d
0x002b582d: cmp    r10d,0x40
0x002b5831: jg     0x1402b5810
0x002b5833: xor    r8d,r8d
0x002b5836: lea    eax,[r9+r10*1]
0x002b583a: cmp    eax,0xffffffff
0x002b583d: je     0x1402b5863
0x002b583f: cmp    r9d,eax
0x002b5842: jge    0x1402b5863
0x002b5844: movsxd rcx,r9d
0x002b5847: movsxd rdx,eax
0x002b584a: nop    WORD PTR [rax+rax*1+0x0]
0x002b5850: mov    rax,QWORD PTR [r11+rcx*8]
0x002b5854: cmp    ebx,DWORD PTR [rax]
0x002b5856: je     0x1402b5880
0x002b5858: inc    r9d
0x002b585b: inc    rcx
0x002b585e: cmp    rcx,rdx
0x002b5861: jl     0x1402b5850
0x002b5863: mov    QWORD PTR [rbp+0x18],r8
0x002b5867: mov    DWORD PTR [rbp+0x10],0xffffffff
0x002b586e: movaps xmm0,XMMWORD PTR [rbp+0x10]
0x002b5872: movdqa XMMWORD PTR [rbp+0x70],xmm0
0x002b5877: add    r15,0x4
0x002b587b: jmp    0x1402b57d5
0x002b5880: mov    DWORD PTR [rbp-0x70],r9d
0x002b5884: movsxd rax,r9d
0x002b5887: mov    r9,QWORD PTR [r11+rax*8]
0x002b588b: mov    QWORD PTR [rsp+0x30],r9
0x002b5890: mov    QWORD PTR [rbp-0x68],r9
0x002b5894: mov    DWORD PTR [rbp+0x10],0xffffffff
0x002b589b: mov    QWORD PTR [rbp+0x18],r8
0x002b589f: movaps xmm0,XMMWORD PTR [rbp-0x70]
0x002b58a3: movdqa XMMWORD PTR [rbp+0x70],xmm0
0x002b58a8: test   r9,r9
0x002b58ab: je     0x1402b5877
0x002b58ad: mov    r14,QWORD PTR [r9+0x30]
0x002b58b1: mov    rsi,QWORD PTR [r9+0x28]
0x002b58b5: mov    rax,r14
0x002b58b8: sub    rax,rsi
0x002b58bb: test   rax,0xfffffffffffffff8
0x002b58c1: je     0x1402b5877
0x002b58c3: xorps  xmm0,xmm0
0x002b58c6: movdqu XMMWORD PTR [rsp+0x68],xmm0
0x002b58cc: mov    r10,r8
0x002b58cf: mov    QWORD PTR [rsp+0x78],r8
0x002b58d4: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x002b58d9: mov    r11,r8
0x002b58dc: mov    QWORD PTR [rbp-0x38],r8
0x002b58e0: movdqu XMMWORD PTR [rsp+0x50],xmm0
0x002b58e6: mov    r15,r8
0x002b58e9: mov    QWORD PTR [rsp+0x60],r8
0x002b58ee: mov    r13,QWORD PTR [rbp-0x40]
0x002b58f2: mov    QWORD PTR [rsp+0x48],r13
0x002b58f7: mov    rdx,QWORD PTR [rsp+0x58]
0x002b58fc: mov    QWORD PTR [rsp+0x38],rdx
0x002b5901: mov    r12,QWORD PTR [rsp+0x70]
0x002b5906: data16 nop WORD PTR [rax+rax*1+0x0]
0x002b5910: mov    rdi,r9
0x002b5913: mov    QWORD PTR [rsp+0x48],r9
0x002b5918: cmp    rsi,r14
0x002b591b: jae    0x1402b5f52
0x002b5921: mov    r8,QWORD PTR [rsi]
0x002b5924: mov    eax,DWORD PTR [r8+0x18]
0x002b5928: add    eax,0xfffffffb
0x002b592b: mov    QWORD PTR [rsp+0x30],r9
0x002b5930: cmp    eax,0xa
0x002b5933: ja     0x1402b5cc0
0x002b5939: mov    QWORD PTR [rsp+0x30],r9
0x002b593e: cdqe
0x002b5940: lea    rbx,[rip+0xffffffffffd4a6b9]        # 0x140000000
0x002b5947: mov    ecx,DWORD PTR [rbx+rax*4+0x2b6b60]
0x002b594e: add    rcx,rbx
0x002b5951: jmp    rcx
0x002b5953: mov    rbx,QWORD PTR [r8+0x10]
0x002b5957: lea    r8,[rbx+0x4]
0x002b595b: mov    eax,DWORD PTR [r8]
0x002b595e: cmp    eax,0xffffffff
0x002b5961: je     0x1402b598d
0x002b5963: cmp    r12,r10
0x002b5966: je     0x1402b5977
0x002b5968: mov    DWORD PTR [r12],eax
0x002b596c: add    r12,0x4
0x002b5970: mov    QWORD PTR [rsp+0x70],r12
0x002b5975: jmp    0x1402b598d
0x002b5977: mov    rdx,r12
0x002b597a: lea    rcx,[rsp+0x68]
0x002b597f: call   0x140070db0
0x002b5984: mov    r12,QWORD PTR [rsp+0x70]
0x002b5989: mov    r11,QWORD PTR [rbp-0x38]
0x002b598d: lea    r8,[rbx+0x8]
0x002b5991: mov    eax,DWORD PTR [r8]
0x002b5994: cmp    eax,0xffffffff
0x002b5997: je     0x1402b59bc
0x002b5999: cmp    r13,r11
0x002b599c: je     0x1402b59ac
0x002b599e: mov    DWORD PTR [r13+0x0],eax
0x002b59a2: add    r13,0x4
0x002b59a6: mov    QWORD PTR [rbp-0x40],r13
0x002b59aa: jmp    0x1402b59bc
0x002b59ac: mov    rdx,r13
0x002b59af: lea    rcx,[rbp-0x48]
0x002b59b3: call   0x140070db0
0x002b59b8: mov    r13,QWORD PTR [rbp-0x40]
0x002b59bc: mov    ecx,DWORD PTR [rbx]
0x002b59be: cmp    ecx,0xffffffff
0x002b59c1: je     0x1402b5a19
0x002b59c3: mov    rax,QWORD PTR [rsp+0x38]
0x002b59c8: cmp    rax,r15
0x002b59cb: je     0x1402b59fa
0x002b59cd: mov    DWORD PTR [rax],ecx
0x002b59cf: add    rax,0x4
0x002b59d3: mov    QWORD PTR [rsp+0x58],rax
0x002b59d8: mov    QWORD PTR [rsp+0x38],rax
0x002b59dd: mov    r9,rdi
0x002b59e0: mov    QWORD PTR [rsp+0x30],rdi
0x002b59e5: mov    rdx,rax
0x002b59e8: add    rsi,0x8
0x002b59ec: mov    r10,QWORD PTR [rsp+0x78]
0x002b59f1: mov    r11,QWORD PTR [rbp-0x38]
0x002b59f5: jmp    0x1402b5910
0x002b59fa: mov    r8,rbx
0x002b59fd: mov    rdx,rax
0x002b5a00: lea    rcx,[rsp+0x50]
0x002b5a05: call   0x140070db0
0x002b5a0a: mov    rax,QWORD PTR [rsp+0x58]
0x002b5a0f: mov    r15,QWORD PTR [rsp+0x60]
0x002b5a14: mov    QWORD PTR [rsp+0x38],rax
0x002b5a19: mov    r9,rdi
0x002b5a1c: mov    QWORD PTR [rsp+0x30],rdi
0x002b5a21: mov    rdx,QWORD PTR [rsp+0x38]
0x002b5a26: add    rsi,0x8
0x002b5a2a: mov    r10,QWORD PTR [rsp+0x78]
0x002b5a2f: mov    r11,QWORD PTR [rbp-0x38]
0x002b5a33: jmp    0x1402b5910
0x002b5a38: mov    rbx,QWORD PTR [r8+0x10]
0x002b5a3c: lea    r8,[rbx+0x4]
0x002b5a40: mov    eax,DWORD PTR [r8]
0x002b5a43: cmp    eax,0xffffffff
0x002b5a46: je     0x1402b5a73
0x002b5a48: cmp    r12,r10
0x002b5a4b: je     0x1402b5a5c
0x002b5a4d: mov    DWORD PTR [r12],eax
0x002b5a51: add    r12,0x4
0x002b5a55: mov    QWORD PTR [rsp+0x70],r12
0x002b5a5a: jmp    0x1402b5a73
0x002b5a5c: mov    rdx,r12
0x002b5a5f: lea    rcx,[rsp+0x68]
0x002b5a64: call   0x140070db0
0x002b5a69: mov    rdx,QWORD PTR [rsp+0x38]
0x002b5a6e: mov    r12,QWORD PTR [rsp+0x70]
0x002b5a73: mov    eax,DWORD PTR [rbx]
0x002b5a75: cmp    eax,0xffffffff
0x002b5a78: je     0x1402b5ac5
0x002b5a7a: cmp    rdx,r15
0x002b5a7d: je     0x1402b5aa9
0x002b5a7f: mov    DWORD PTR [rdx],eax
0x002b5a81: add    rdx,0x4
0x002b5a85: mov    QWORD PTR [rsp+0x58],rdx
0x002b5a8a: mov    QWORD PTR [rsp+0x38],rdx
0x002b5a8f: mov    r9,rdi
0x002b5a92: mov    QWORD PTR [rsp+0x30],rdi
0x002b5a97: add    rsi,0x8
0x002b5a9b: mov    r10,QWORD PTR [rsp+0x78]
0x002b5aa0: mov    r11,QWORD PTR [rbp-0x38]
0x002b5aa4: jmp    0x1402b5910
0x002b5aa9: mov    r8,rbx
0x002b5aac: lea    rcx,[rsp+0x50]
0x002b5ab1: call   0x140070db0
0x002b5ab6: mov    rdx,QWORD PTR [rsp+0x58]
0x002b5abb: mov    r15,QWORD PTR [rsp+0x60]
0x002b5ac0: mov    QWORD PTR [rsp+0x38],rdx
0x002b5ac5: mov    r9,rdi
0x002b5ac8: mov    QWORD PTR [rsp+0x30],rdi
0x002b5acd: add    rsi,0x8
0x002b5ad1: mov    r10,QWORD PTR [rsp+0x78]
0x002b5ad6: mov    r11,QWORD PTR [rbp-0x38]
0x002b5ada: jmp    0x1402b5910
0x002b5adf: mov    rbx,QWORD PTR [r8+0x10]
0x002b5ae3: lea    r8,[rbx+0x8]
0x002b5ae7: mov    eax,DWORD PTR [r8]
0x002b5aea: cmp    eax,0xffffffff
0x002b5aed: je     0x1402b5b19
0x002b5aef: cmp    r12,r10
0x002b5af2: je     0x1402b5b03
0x002b5af4: mov    DWORD PTR [r12],eax
0x002b5af8: add    r12,0x4
0x002b5afc: mov    QWORD PTR [rsp+0x70],r12
0x002b5b01: jmp    0x1402b5b19
0x002b5b03: mov    rdx,r12
0x002b5b06: lea    rcx,[rsp+0x68]
0x002b5b0b: call   0x140070db0
0x002b5b10: mov    r12,QWORD PTR [rsp+0x70]
0x002b5b15: mov    r11,QWORD PTR [rbp-0x38]
0x002b5b19: lea    r8,[rbx+0xc]
0x002b5b1d: mov    eax,DWORD PTR [r8]
0x002b5b20: cmp    eax,0xffffffff
0x002b5b23: je     0x1402b5b48
0x002b5b25: cmp    r13,r11
0x002b5b28: je     0x1402b5b38
0x002b5b2a: mov    DWORD PTR [r13+0x0],eax
0x002b5b2e: add    r13,0x4
0x002b5b32: mov    QWORD PTR [rbp-0x40],r13
0x002b5b36: jmp    0x1402b5b48
0x002b5b38: mov    rdx,r13
0x002b5b3b: lea    rcx,[rbp-0x48]
0x002b5b3f: call   0x140070db0
0x002b5b44: mov    r13,QWORD PTR [rbp-0x40]
0x002b5b48: lea    r8,[rbx+0x4]
0x002b5b4c: mov    ecx,DWORD PTR [r8]
0x002b5b4f: cmp    ecx,0xffffffff
0x002b5b52: je     0x1402b5a19
0x002b5b58: mov    rax,QWORD PTR [rsp+0x38]
0x002b5b5d: cmp    rax,r15
0x002b5b60: je     0x1402b59fd
0x002b5b66: mov    DWORD PTR [rax],ecx
0x002b5b68: add    rax,0x4
0x002b5b6c: mov    QWORD PTR [rsp+0x58],rax
0x002b5b71: jmp    0x1402b5a14
0x002b5b76: mov    rcx,QWORD PTR [r8+0x10]
0x002b5b7a: mov    QWORD PTR [rbp-0x30],rcx
0x002b5b7e: lea    r8,[rcx+0xc]
0x002b5b82: mov    eax,DWORD PTR [r8]
0x002b5b85: cmp    eax,0xffffffff
0x002b5b88: je     0x1402b5bb8
0x002b5b8a: cmp    r12,r10
0x002b5b8d: je     0x1402b5b9e
0x002b5b8f: mov    DWORD PTR [r12],eax
0x002b5b93: add    r12,0x4
0x002b5b97: mov    QWORD PTR [rsp+0x70],r12
0x002b5b9c: jmp    0x1402b5bb8
0x002b5b9e: mov    rdx,r12
0x002b5ba1: lea    rcx,[rsp+0x68]
0x002b5ba6: call   0x140070db0
0x002b5bab: mov    r12,QWORD PTR [rsp+0x70]
0x002b5bb0: mov    rcx,QWORD PTR [rbp-0x30]
0x002b5bb4: mov    r11,QWORD PTR [rbp-0x38]
0x002b5bb8: mov    rbx,QWORD PTR [rcx+0x10]
0x002b5bbc: mov    rdi,QWORD PTR [rcx+0x18]
0x002b5bc0: mov    rax,QWORD PTR [rsp+0x48]
0x002b5bc5: mov    QWORD PTR [rsp+0x30],rax
0x002b5bca: mov    QWORD PTR [rsp+0x48],rax
0x002b5bcf: cmp    rbx,rdi
0x002b5bd2: je     0x1402b5c1b
0x002b5bd4: mov    QWORD PTR [rsp+0x30],rax
0x002b5bd9: jae    0x1402b5c1b
0x002b5bdb: cmp    r13,r11
0x002b5bde: je     0x1402b5bf9
0x002b5be0: mov    eax,DWORD PTR [rbx]
0x002b5be2: mov    DWORD PTR [r13+0x0],eax
0x002b5be6: add    r13,0x4
0x002b5bea: mov    QWORD PTR [rbp-0x40],r13
0x002b5bee: add    rbx,0x4
0x002b5bf2: mov    rax,QWORD PTR [rsp+0x48]
0x002b5bf7: jmp    0x1402b5bc5
0x002b5bf9: mov    r8,rbx
0x002b5bfc: mov    rdx,r13
0x002b5bff: lea    rcx,[rbp-0x48]
0x002b5c03: call   0x140070db0
0x002b5c08: mov    r13,QWORD PTR [rbp-0x40]
0x002b5c0c: mov    r11,QWORD PTR [rbp-0x38]
0x002b5c10: add    rbx,0x4
0x002b5c14: mov    rax,QWORD PTR [rsp+0x48]
0x002b5c19: jmp    0x1402b5bc5
0x002b5c1b: mov    QWORD PTR [rsp+0x48],r13
0x002b5c20: mov    rcx,QWORD PTR [rbp-0x30]
0x002b5c24: lea    r8,[rcx+0x8]
0x002b5c28: mov    eax,DWORD PTR [r8]
0x002b5c2b: mov    rdx,QWORD PTR [rsp+0x38]
0x002b5c30: cmp    eax,0xffffffff
0x002b5c33: je     0x1402b5c64
0x002b5c35: cmp    rdx,r15
0x002b5c38: je     0x1402b5c47
0x002b5c3a: mov    DWORD PTR [rdx],eax
0x002b5c3c: add    rdx,0x4
0x002b5c40: mov    QWORD PTR [rsp+0x58],rdx
0x002b5c45: jmp    0x1402b5c5f
0x002b5c47: lea    rcx,[rsp+0x50]
0x002b5c4c: call   0x140070db0
0x002b5c51: mov    rdx,QWORD PTR [rsp+0x58]
0x002b5c56: mov    rcx,QWORD PTR [rbp-0x30]
0x002b5c5a: mov    r15,QWORD PTR [rsp+0x60]
0x002b5c5f: mov    QWORD PTR [rsp+0x38],rdx
0x002b5c64: lea    r8,[rcx+0x4]
0x002b5c68: mov    eax,DWORD PTR [r8]
0x002b5c6b: cmp    eax,0xffffffff
0x002b5c6e: je     0x1402b5c9f
0x002b5c70: cmp    rdx,r15
0x002b5c73: je     0x1402b5c82
0x002b5c75: mov    DWORD PTR [rdx],eax
0x002b5c77: add    rdx,0x4
0x002b5c7b: mov    QWORD PTR [rsp+0x58],rdx
0x002b5c80: jmp    0x1402b5c9a
0x002b5c82: lea    rcx,[rsp+0x50]
0x002b5c87: call   0x140070db0
0x002b5c8c: mov    rdx,QWORD PTR [rsp+0x58]
0x002b5c91: mov    rcx,QWORD PTR [rbp-0x30]
0x002b5c95: mov    r15,QWORD PTR [rsp+0x60]
0x002b5c9a: mov    QWORD PTR [rsp+0x38],rdx
0x002b5c9f: mov    eax,DWORD PTR [rcx]
0x002b5ca1: cmp    eax,0xffffffff
0x002b5ca4: je     0x1402b5cbb
0x002b5ca6: cmp    rdx,r15
0x002b5ca9: je     0x1402b5cd2
0x002b5cab: mov    DWORD PTR [rdx],eax
0x002b5cad: add    rdx,0x4
0x002b5cb1: mov    QWORD PTR [rsp+0x38],rdx
0x002b5cb6: mov    QWORD PTR [rsp+0x58],rdx
0x002b5cbb: mov    r9,QWORD PTR [rsp+0x30]
0x002b5cc0: add    rsi,0x8
0x002b5cc4: mov    r10,QWORD PTR [rsp+0x78]
0x002b5cc9: mov    r11,QWORD PTR [rbp-0x38]
0x002b5ccd: jmp    0x1402b5910
0x002b5cd2: mov    r8,rcx
0x002b5cd5: lea    rcx,[rsp+0x50]
0x002b5cda: call   0x140070db0
0x002b5cdf: mov    rdx,QWORD PTR [rsp+0x58]
0x002b5ce4: mov    QWORD PTR [rsp+0x38],rdx
0x002b5ce9: mov    r15,QWORD PTR [rsp+0x60]
0x002b5cee: jmp    0x1402b5cbb
0x002b5cf0: mov    rbx,QWORD PTR [r8+0x10]
0x002b5cf4: lea    r8,[rbx+0x4]
0x002b5cf8: mov    eax,DWORD PTR [r8]
0x002b5cfb: cmp    eax,0xffffffff
0x002b5cfe: je     0x1402b5d2a
0x002b5d00: cmp    r12,r10
0x002b5d03: je     0x1402b5d14
0x002b5d05: mov    DWORD PTR [r12],eax
0x002b5d09: add    r12,0x4
0x002b5d0d: mov    QWORD PTR [rsp+0x70],r12
0x002b5d12: jmp    0x1402b5d2a
0x002b5d14: mov    rdx,r12
0x002b5d17: lea    rcx,[rsp+0x68]
0x002b5d1c: call   0x140070db0
0x002b5d21: mov    r12,QWORD PTR [rsp+0x70]
0x002b5d26: mov    r11,QWORD PTR [rbp-0x38]
0x002b5d2a: lea    r8,[rbx+0x8]
0x002b5d2e: mov    eax,DWORD PTR [r8]
0x002b5d31: cmp    eax,0xffffffff
0x002b5d34: je     0x1402b5d59
0x002b5d36: cmp    r13,r11
0x002b5d39: je     0x1402b5d49
0x002b5d3b: mov    DWORD PTR [r13+0x0],eax
0x002b5d3f: add    r13,0x4
0x002b5d43: mov    QWORD PTR [rbp-0x40],r13
0x002b5d47: jmp    0x1402b5d59
0x002b5d49: mov    rdx,r13
0x002b5d4c: lea    rcx,[rbp-0x48]
0x002b5d50: call   0x140070db0
0x002b5d55: mov    r13,QWORD PTR [rbp-0x40]
0x002b5d59: mov    eax,DWORD PTR [rbx]
0x002b5d5b: mov    rdx,QWORD PTR [rsp+0x38]
0x002b5d60: cmp    eax,0xffffffff
0x002b5d63: je     0x1402b5ac5
0x002b5d69: cmp    rdx,r15
0x002b5d6c: je     0x1402b5aa9
0x002b5d72: mov    DWORD PTR [rdx],eax
0x002b5d74: add    rdx,0x4
0x002b5d78: mov    QWORD PTR [rsp+0x58],rdx
0x002b5d7d: jmp    0x1402b5ac0
0x002b5d82: mov    rdi,QWORD PTR [r8+0x10]
0x002b5d86: mov    rbx,QWORD PTR [rdi]
0x002b5d89: mov    rdi,QWORD PTR [rdi+0x8]
0x002b5d8d: mov    QWORD PTR [rsp+0x30],r9
0x002b5d92: mov    rax,r9
0x002b5d95: mov    QWORD PTR [rsp+0x48],rax
0x002b5d9a: cmp    rbx,rdi
0x002b5d9d: je     0x1402b5cc0
0x002b5da3: mov    QWORD PTR [rsp+0x30],rax
0x002b5da8: jae    0x1402b5cc0
0x002b5dae: cmp    rdx,r15
0x002b5db1: je     0x1402b5dcb
0x002b5db3: mov    eax,DWORD PTR [rbx]
0x002b5db5: mov    DWORD PTR [rdx],eax
0x002b5db7: add    rdx,0x4
0x002b5dbb: mov    QWORD PTR [rsp+0x58],rdx
0x002b5dc0: mov    QWORD PTR [rsp+0x38],rdx
0x002b5dc5: add    rbx,0x4
0x002b5dc9: jmp    0x1402b5d8d
0x002b5dcb: mov    r8,rbx
0x002b5dce: lea    rcx,[rsp+0x50]
0x002b5dd3: call   0x140070db0
0x002b5dd8: mov    rdx,QWORD PTR [rsp+0x58]
0x002b5ddd: mov    r15,QWORD PTR [rsp+0x60]
0x002b5de2: mov    QWORD PTR [rsp+0x38],rdx
0x002b5de7: add    rbx,0x4
0x002b5deb: mov    r9,QWORD PTR [rsp+0x48]
0x002b5df0: jmp    0x1402b5d8d
0x002b5df2: mov    rdi,QWORD PTR [r8+0x10]
0x002b5df6: mov    eax,DWORD PTR [rdi+0x4]
0x002b5df9: cmp    eax,0xffffffff
0x002b5dfc: je     0x1402b5e2d
0x002b5dfe: cmp    r12,r10
0x002b5e01: je     0x1402b5e12
0x002b5e03: mov    DWORD PTR [r12],eax
0x002b5e07: add    r12,0x4
0x002b5e0b: mov    QWORD PTR [rsp+0x70],r12
0x002b5e10: jmp    0x1402b5e2d
0x002b5e12: lea    r8,[rdi+0x4]
0x002b5e16: mov    rdx,r12
0x002b5e19: lea    rcx,[rsp+0x68]
0x002b5e1e: call   0x140070db0
0x002b5e23: mov    rdx,QWORD PTR [rsp+0x38]
0x002b5e28: mov    r12,QWORD PTR [rsp+0x70]
0x002b5e2d: mov    eax,DWORD PTR [rdi]
0x002b5e2f: cmp    eax,0xffffffff
0x002b5e32: je     0x1402b5e86
0x002b5e34: cmp    eax,DWORD PTR [rdi+0x4]
0x002b5e37: je     0x1402b5e86
0x002b5e39: cmp    rdx,r15
0x002b5e3c: je     0x1402b5e6a
0x002b5e3e: mov    DWORD PTR [rdx],eax
0x002b5e40: add    rdx,0x4
0x002b5e44: mov    QWORD PTR [rsp+0x58],rdx
0x002b5e49: mov    QWORD PTR [rsp+0x38],rdx
0x002b5e4e: mov    r9,QWORD PTR [rsp+0x48]
0x002b5e53: mov    QWORD PTR [rsp+0x30],r9
0x002b5e58: add    rsi,0x8
0x002b5e5c: mov    r10,QWORD PTR [rsp+0x78]
0x002b5e61: mov    r11,QWORD PTR [rbp-0x38]
0x002b5e65: jmp    0x1402b5910
0x002b5e6a: mov    r8,rdi
0x002b5e6d: lea    rcx,[rsp+0x50]
0x002b5e72: call   0x140070db0
0x002b5e77: mov    rdx,QWORD PTR [rsp+0x58]
0x002b5e7c: mov    r15,QWORD PTR [rsp+0x60]
0x002b5e81: mov    QWORD PTR [rsp+0x38],rdx
0x002b5e86: mov    r9,QWORD PTR [rsp+0x48]
0x002b5e8b: mov    QWORD PTR [rsp+0x30],r9
0x002b5e90: add    rsi,0x8
0x002b5e94: mov    r10,QWORD PTR [rsp+0x78]
0x002b5e99: mov    r11,QWORD PTR [rbp-0x38]
0x002b5e9d: jmp    0x1402b5910
0x002b5ea2: mov    rbx,QWORD PTR [r8+0x10]
0x002b5ea6: lea    r8,[rbx+0x4]
0x002b5eaa: mov    eax,DWORD PTR [r8]
0x002b5ead: cmp    eax,0xffffffff
0x002b5eb0: je     0x1402b5edd
0x002b5eb2: cmp    r12,r10
0x002b5eb5: je     0x1402b5ec6
0x002b5eb7: mov    DWORD PTR [r12],eax
0x002b5ebb: add    r12,0x4
0x002b5ebf: mov    QWORD PTR [rsp+0x70],r12
0x002b5ec4: jmp    0x1402b5edd
0x002b5ec6: mov    rdx,r12
0x002b5ec9: lea    rcx,[rsp+0x68]
0x002b5ece: call   0x140070db0
0x002b5ed3: mov    rdx,QWORD PTR [rsp+0x38]
0x002b5ed8: mov    r12,QWORD PTR [rsp+0x70]
0x002b5edd: mov    eax,DWORD PTR [rbx]
0x002b5edf: mov    r9,rdi
0x002b5ee2: mov    QWORD PTR [rsp+0x30],rdi
0x002b5ee7: cmp    eax,0xffffffff
0x002b5eea: je     0x1402b5cc0
0x002b5ef0: cmp    rdx,r15
0x002b5ef3: je     0x1402b5f1c
0x002b5ef5: mov    DWORD PTR [rdx],eax
0x002b5ef7: add    rdx,0x4
0x002b5efb: mov    QWORD PTR [rsp+0x38],rdx
0x002b5f00: mov    QWORD PTR [rsp+0x58],rdx
0x002b5f05: mov    QWORD PTR [rsp+0x30],rdi
0x002b5f0a: add    rsi,0x8
0x002b5f0e: mov    r10,QWORD PTR [rsp+0x78]
0x002b5f13: mov    r11,QWORD PTR [rbp-0x38]
0x002b5f17: jmp    0x1402b5910
0x002b5f1c: mov    r8,rbx
0x002b5f1f: lea    rcx,[rsp+0x50]
0x002b5f24: call   0x140070db0
0x002b5f29: mov    r9,rdi
0x002b5f2c: mov    QWORD PTR [rsp+0x30],rdi
0x002b5f31: mov    rdx,QWORD PTR [rsp+0x58]
0x002b5f36: mov    QWORD PTR [rsp+0x38],rdx
0x002b5f3b: mov    r15,QWORD PTR [rsp+0x60]
0x002b5f40: add    rsi,0x8
0x002b5f44: mov    r10,QWORD PTR [rsp+0x78]
0x002b5f49: mov    r11,QWORD PTR [rbp-0x38]
0x002b5f4d: jmp    0x1402b5910
0x002b5f52: mov    QWORD PTR [rsp+0x48],r13
0x002b5f57: xor    sil,sil
0x002b5f5a: mov    DWORD PTR [rbp-0x50],esi
0x002b5f5d: xor    r14b,r14b
0x002b5f60: mov    DWORD PTR [rbp-0x30],r14d
0x002b5f64: mov    rbx,QWORD PTR [rsp+0x68]
0x002b5f69: mov    rdi,QWORD PTR [rsp+0x70]
0x002b5f6e: mov    r12,QWORD PTR [rbp+0x78]
0x002b5f72: mov    r14,QWORD PTR [rbp+0x60]
0x002b5f76: cmp    rbx,rdi
0x002b5f79: jae    0x1402b6006
0x002b5f7f: lea    rdx,[r12+0x8]
0x002b5f84: mov    ecx,DWORD PTR [rbx]
0x002b5f86: call   0x1400b9d50
0x002b5f8b: test   rax,rax
0x002b5f8e: je     0x1402b5ff3
0x002b5f90: lea    rdx,[rax+0x8]
0x002b5f94: mov    rax,QWORD PTR [rdx+0x8]
0x002b5f98: sub    rax,QWORD PTR [rdx]
0x002b5f9b: test   rax,0xfffffffffffffffc
0x002b5fa1: je     0x1402b5ff3
0x002b5fa3: mov    rax,QWORD PTR [r14]
0x002b5fa6: mov    r8,QWORD PTR [rax]
0x002b5fa9: mov    r8d,DWORD PTR [r8+0xe0]
0x002b5fb0: lea    rcx,[rbp+0xd8]
0x002b5fb7: call   0x1400bab70
0x002b5fbc: mov    DWORD PTR [rbp+0xa0],0xffffffff
0x002b5fc6: xor    eax,eax
0x002b5fc8: mov    DWORD PTR [rbp+0xa4],eax
0x002b5fce: mov    rax,QWORD PTR [rbp+0xa0]
0x002b5fd5: cmp    BYTE PTR [rbp+0xe0],0x0
0x002b5fdc: cmovne rax,QWORD PTR [rbp+0xd8]
0x002b5fe4: movzx  esi,sil
0x002b5fe8: cmp    eax,0xffffffff
0x002b5feb: mov    eax,0x1
0x002b5ff0: cmovne esi,eax
0x002b5ff3: add    rbx,0x4
0x002b5ff7: mov    r9,QWORD PTR [rsp+0x30]
0x002b5ffc: mov    QWORD PTR [rsp+0x30],r9
0x002b6001: jmp    0x1402b5f76
0x002b6006: mov    DWORD PTR [rbp-0x50],esi
0x002b6009: mov    rbx,QWORD PTR [rbp-0x48]
0x002b600d: mov    r14d,DWORD PTR [rbp-0x30]
0x002b6011: mov    rdi,QWORD PTR [rsp+0x48]
0x002b6016: mov    r13,QWORD PTR [rbp+0x78]
0x002b601a: mov    r15,QWORD PTR [rbp+0x60]
0x002b601e: xor    r12d,r12d
0x002b6021: mov    esi,0x1
0x002b6026: cmp    rbx,rdi
0x002b6029: jae    0x1402b60b0
0x002b602f: lea    rdx,[r13+0x8]
0x002b6033: mov    ecx,DWORD PTR [rbx]
0x002b6035: call   0x1400b9d50
0x002b603a: test   rax,rax
0x002b603d: je     0x1402b609d
0x002b603f: lea    rdx,[rax+0x8]
0x002b6043: mov    rax,QWORD PTR [rdx+0x8]
0x002b6047: sub    rax,QWORD PTR [rdx]
0x002b604a: test   rax,0xfffffffffffffffc
0x002b6050: je     0x1402b609d
0x002b6052: mov    rax,QWORD PTR [r15]
0x002b6055: mov    r8,QWORD PTR [rax]
0x002b6058: mov    r8d,DWORD PTR [r8+0xe0]
0x002b605f: lea    rcx,[rbp+0xc0]
0x002b6066: call   0x1400bab70
0x002b606b: mov    DWORD PTR [rbp+0x80],0xffffffff
0x002b6075: mov    DWORD PTR [rbp+0x84],r12d
0x002b607c: mov    rax,QWORD PTR [rbp+0x80]
0x002b6083: cmp    BYTE PTR [rbp+0xc8],r12b
0x002b608a: cmovne rax,QWORD PTR [rbp+0xc0]
0x002b6092: movzx  r14d,r14b
0x002b6096: cmp    eax,0xffffffff
0x002b6099: cmovne r14d,esi
0x002b609d: add    rbx,0x4
0x002b60a1: mov    r9,QWORD PTR [rsp+0x30]
0x002b60a6: mov    QWORD PTR [rsp+0x30],r9
0x002b60ab: jmp    0x1402b6026
0x002b60b0: cmp    BYTE PTR [rbp-0x50],r12b
0x002b60b4: mov    r15,QWORD PTR [rbp-0x10]
0x002b60b8: mov    r12,QWORD PTR [rbp+0x88]
0x002b60bf: mov    r13,QWORD PTR [rbp+0x38]
0x002b60c3: je     0x1402b60d8
0x002b60c5: sub    rdi,QWORD PTR [rbp-0x48]
0x002b60c9: sar    rdi,0x2
0x002b60cd: test   rdi,rdi
0x002b60d0: je     0x1402b60e1
0x002b60d2: lea    rdx,[rbp-0x48]
0x002b60d6: jmp    0x1402b60fd
0x002b60d8: test   r14b,r14b
0x002b60db: je     0x1402b687f
0x002b60e1: mov    rax,QWORD PTR [rsp+0x38]
0x002b60e6: sub    rax,QWORD PTR [rsp+0x50]
0x002b60eb: sar    rax,0x2
0x002b60ef: test   rax,rax
0x002b60f2: je     0x1402b687f
0x002b60f8: lea    rdx,[rsp+0x50]
0x002b60fd: mov    QWORD PTR [rsp+0x48],rdx
0x002b6102: mov    r8,QWORD PTR [rbp+0x0]
0x002b6106: mov    rsi,QWORD PTR [r8]
0x002b6109: mov    r14,QWORD PTR [r8+0x8]
0x002b610d: nop    DWORD PTR [rax]
0x002b6110: cmp    rsi,r14
0x002b6113: jae    0x1402b687f
0x002b6119: mov    rcx,QWORD PTR [rsi]
0x002b611c: test   BYTE PTR [rcx+0xf0],0x1
0x002b6123: jne    0x1402b6871
0x002b6129: xor    cl,cl
0x002b612b: mov    DWORD PTR [rbp-0x50],ecx
0x002b612e: mov    rbx,QWORD PTR [rdx]
0x002b6131: mov    rdi,QWORD PTR [rdx+0x8]
0x002b6135: mov    QWORD PTR [rsp+0x30],r9
0x002b613a: cmp    rbx,rdi
0x002b613d: jae    0x1402b61d5
0x002b6143: mov    rdx,QWORD PTR [rbp+0x78]
0x002b6147: add    rdx,0x8
0x002b614b: mov    ecx,DWORD PTR [rbx]
0x002b614d: call   0x1400b9d50
0x002b6152: test   rax,rax
0x002b6155: je     0x1402b61c4
0x002b6157: lea    rdx,[rax+0x8]
0x002b615b: mov    rax,QWORD PTR [rdx+0x8]
0x002b615f: sub    rax,QWORD PTR [rdx]
0x002b6162: test   rax,0xfffffffffffffffc
0x002b6168: je     0x1402b61c4
0x002b616a: mov    rax,QWORD PTR [rsi]
0x002b616d: mov    r8,QWORD PTR [rax]
0x002b6170: mov    r8d,DWORD PTR [r8+0xe0]
0x002b6177: lea    rcx,[rbp+0x50]
0x002b617b: call   0x1400bab70
0x002b6180: mov    DWORD PTR [rbp+0x98],0xffffffff
0x002b618a: xor    eax,eax
0x002b618c: mov    DWORD PTR [rbp+0x9c],eax
0x002b6192: mov    rax,QWORD PTR [rbp+0x98]
0x002b6199: cmp    BYTE PTR [rbp+0x58],0x0
0x002b619d: cmovne rax,QWORD PTR [rbp+0x50]
0x002b61a2: mov    ecx,DWORD PTR [rbp-0x50]
0x002b61a5: movzx  ecx,cl
0x002b61a8: cmp    eax,0xffffffff
0x002b61ab: mov    eax,0x1
0x002b61b0: cmovne ecx,eax
0x002b61b3: mov    DWORD PTR [rbp-0x50],ecx
0x002b61b6: add    rbx,0x4
0x002b61ba: mov    r9,QWORD PTR [rsp+0x30]
0x002b61bf: jmp    0x1402b6135
0x002b61c4: mov    ecx,DWORD PTR [rbp-0x50]
0x002b61c7: add    rbx,0x4
0x002b61cb: mov    r9,QWORD PTR [rsp+0x30]
0x002b61d0: jmp    0x1402b6135
0x002b61d5: test   cl,cl
0x002b61d7: je     0x1402b6871
0x002b61dd: mov    rax,QWORD PTR [rsi]
0x002b61e0: mov    QWORD PTR [rsp+0x38],rax
0x002b61e5: mov    ecx,0x88
0x002b61ea: call   0x141534600
0x002b61ef: mov    rbx,rax
0x002b61f2: mov    QWORD PTR [rbp-0x10],rax
0x002b61f6: xorps  xmm0,xmm0
0x002b61f9: movups XMMWORD PTR [rax+0x20],xmm0
0x002b61fd: xor    ecx,ecx
0x002b61ff: mov    QWORD PTR [rax+0x30],rcx
0x002b6203: mov    QWORD PTR [rax+0x38],0xf
0x002b620b: mov    BYTE PTR [rax+0x20],cl
0x002b620e: movups XMMWORD PTR [rax+0x48],xmm0
0x002b6212: mov    QWORD PTR [rax+0x58],rcx
0x002b6216: mov    QWORD PTR [rax+0x60],0xf
0x002b621e: mov    BYTE PTR [rax+0x48],cl
0x002b6221: movups XMMWORD PTR [rax+0x68],xmm0
0x002b6225: mov    QWORD PTR [rax+0x78],rcx
0x002b6229: mov    QWORD PTR [rax+0x80],0xf
0x002b6234: mov    BYTE PTR [rax+0x68],cl
0x002b6237: mov    QWORD PTR [rax+0x8],rcx
0x002b623b: mov    DWORD PTR [rax+0x10],ecx
0x002b623e: mov    QWORD PTR [rax+0x14],0x1
0x002b6246: mov    DWORD PTR [rax+0x1c],ecx
0x002b6249: mov    QWORD PTR [rbp-0x10],rax
0x002b624d: mov    rax,QWORD PTR [rsp+0x38]
0x002b6252: mov    QWORD PTR [rbx],rax
0x002b6255: mov    rax,QWORD PTR [rbp+0x60]
0x002b6259: mov    QWORD PTR [rbx+0x8],rax
0x002b625d: mov    eax,DWORD PTR [rbp-0x80]
0x002b6260: inc    eax
0x002b6262: mov    DWORD PTR [rbx+0x14],eax
0x002b6265: mov    eax,DWORD PTR [rbp+0x30]
0x002b6268: mov    DWORD PTR [rbx+0x10],eax
0x002b626b: inc    eax
0x002b626d: mov    DWORD PTR [rbp+0x30],eax
0x002b6270: mov    r8d,0x5
0x002b6276: lea    rdx,[rip+0x136deef]        # 0x14162416c ; literal="Membr"
0x002b627d: lea    rcx,[rbx+0x20]
0x002b6281: call   0x14006f860
0x002b6286: mov    DWORD PTR [rbx+0x40],0x6
0x002b628d: mov    BYTE PTR [rbx+0x44],0x1
0x002b6291: mov    rax,QWORD PTR [rsp+0x30]
0x002b6296: mov    rax,QWORD PTR [rax+0x28]
0x002b629a: mov    rcx,QWORD PTR [rax]
0x002b629d: mov    eax,DWORD PTR [rcx+0x18]
0x002b62a0: add    eax,0xfffffffb
0x002b62a3: cmp    eax,0xa
0x002b62a6: ja     0x1402b63e7
0x002b62ac: cdqe
0x002b62ae: lea    rdx,[rip+0xffffffffffd49d4b]        # 0x140000000
0x002b62b5: mov    ecx,DWORD PTR [rdx+rax*4+0x2b6b8c]
0x002b62bc: add    rcx,rdx
0x002b62bf: jmp    rcx
0x002b62c1: lea    rax,[rsp+0x50]
0x002b62c6: cmp    QWORD PTR [rsp+0x48],rax
0x002b62cb: jne    0x1402b63e7
0x002b62d1: lea    rdx,[rip+0x1344ec4]        # 0x1415fb19c ; literal="Thief"
0x002b62d8: mov    r8d,0x5
0x002b62de: lea    rcx,[rbx+0x20]
0x002b62e2: call   0x14006f860
0x002b62e7: mov    DWORD PTR [rbx+0x40],0x7
0x002b62ee: jmp    0x1402b63e3
0x002b62f3: lea    rax,[rsp+0x50]
0x002b62f8: cmp    QWORD PTR [rsp+0x48],rax
0x002b62fd: jne    0x1402b63e7
0x002b6303: mov    r8d,0x5
0x002b6309: lea    rdx,[rip+0x136de4c]        # 0x14162415c ; literal="Crrpt"
0x002b6310: lea    rcx,[rbx+0x20]
0x002b6314: call   0x14006f860
0x002b6319: mov    DWORD PTR [rbx+0x40],0x3
0x002b6320: mov    BYTE PTR [rbx+0x44],0x0
0x002b6324: jmp    0x1402b63e7
0x002b6329: lea    rax,[rsp+0x50]
0x002b632e: cmp    QWORD PTR [rsp+0x48],rax
0x002b6333: jne    0x1402b63e7
0x002b6339: mov    r8d,0x5
0x002b633f: lea    rdx,[rip+0x136de0e]        # 0x141624154 ; literal="Assas"
0x002b6346: lea    rcx,[rbx+0x20]
0x002b634a: call   0x14006f860
0x002b634f: mov    DWORD PTR [rbx+0x40],0x5
0x002b6356: mov    BYTE PTR [rbx+0x44],0x0
0x002b635a: jmp    0x1402b63e7
0x002b635f: lea    rax,[rsp+0x50]
0x002b6364: cmp    QWORD PTR [rsp+0x48],rax
0x002b6369: jne    0x1402b63e7
0x002b636b: mov    r8d,0x5
0x002b6371: lea    rdx,[rip+0x136ddd4]        # 0x14162414c ; literal="Snatc"
0x002b6378: lea    rcx,[rbx+0x20]
0x002b637c: call   0x14006f860
0x002b6381: mov    DWORD PTR [rbx+0x40],0x1
0x002b6388: jmp    0x1402b63e3
0x002b638a: lea    rax,[rsp+0x50]
0x002b638f: cmp    QWORD PTR [rsp+0x48],rax
0x002b6394: jne    0x1402b63e7
0x002b6396: lea    rdx,[rip+0x136dda7]        # 0x141624144 ; literal="Sabtr"
0x002b639d: jmp    0x1402b62d8
0x002b63a2: lea    rax,[rsp+0x50]
0x002b63a7: cmp    QWORD PTR [rsp+0x48],rax
0x002b63ac: jne    0x1402b63e7
0x002b63ae: lea    rdx,[rip+0x136dc3b]        # 0x141623ff0 ; literal="Framr"
0x002b63b5: jmp    0x1402b62d8
0x002b63ba: lea    rax,[rsp+0x50]
0x002b63bf: cmp    QWORD PTR [rsp+0x48],rax
0x002b63c4: jne    0x1402b63e7
0x002b63c6: mov    r8d,0x5
0x002b63cc: lea    rdx,[rip+0x136dd91]        # 0x141624164 ; literal="Asset"
0x002b63d3: lea    rcx,[rbx+0x20]
0x002b63d7: call   0x14006f860
0x002b63dc: mov    DWORD PTR [rbx+0x40],0x3
0x002b63e3: mov    BYTE PTR [rbx+0x44],0x1
0x002b63e7: mov    rdi,QWORD PTR [rsp+0x38]
0x002b63ec: mov    rdx,QWORD PTR [rdi+0x10]
0x002b63f0: test   rdx,rdx
0x002b63f3: je     0x1402b6687
0x002b63f9: cmp    QWORD PTR [rdx+0x10],0x0
0x002b63fe: je     0x1402b6416
0x002b6400: cmp    QWORD PTR [rdx+0x18],0xf
0x002b6405: jbe    0x1402b640a
0x002b6407: mov    rdx,QWORD PTR [rdx]
0x002b640a: lea    rcx,[rbx+0x48]
0x002b640e: movzx  edx,BYTE PTR [rdx]
0x002b6411: call   0x1400b9b10
0x002b6416: mov    rax,QWORD PTR [rdi+0x10]
0x002b641a: movsxd rcx,DWORD PTR [rax+0x40]
0x002b641e: cmp    ecx,0xffffffff
0x002b6421: jne    0x1402b642c
0x002b6423: cmp    DWORD PTR [rax+0x44],ecx
0x002b6426: je     0x1402b66e5
0x002b642c: xorps  xmm0,xmm0
0x002b642f: movups XMMWORD PTR [rbp+0x1c0],xmm0
0x002b6436: mov    QWORD PTR [rbp+0x1d0],0x0
0x002b6441: mov    QWORD PTR [rbp+0x1d8],0xf
0x002b644c: mov    BYTE PTR [rbp+0x1c0],0x0
0x002b6453: movsx  r9,WORD PTR [rax+0x5c]
0x002b6458: mov    rdx,QWORD PTR [rip+0x2231201]        # 0x1424e7660
0x002b645f: lea    r10,[rip+0xffffffffffd49b9a]        # 0x140000000
0x002b6466: test   ecx,ecx
0x002b6468: js     0x1402b652e
0x002b646e: mov    r8,rcx
0x002b6471: mov    rax,QWORD PTR [rip+0x22311f0]        # 0x1424e7668
0x002b6478: sub    rax,rdx
0x002b647b: sar    rax,0x3
0x002b647f: cmp    rcx,rax
0x002b6482: jae    0x1402b652e
0x002b6488: cmp    r9d,0x8
0x002b648c: ja     0x1402b652e
0x002b6492: mov    ecx,DWORD PTR [r10+r9*4+0x2b6bb8]
0x002b649a: add    rcx,r10
0x002b649d: jmp    rcx
0x002b649f: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b64a3: add    rdx,0x20
0x002b64a7: jmp    0x1402b6506
0x002b64a9: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b64ad: add    rdx,0x40
0x002b64b1: jmp    0x1402b6506
0x002b64b3: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b64b7: sub    rdx,0xffffffffffffff80
0x002b64bb: jmp    0x1402b6506
0x002b64bd: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b64c1: add    rdx,0x60
0x002b64c5: jmp    0x1402b6506
0x002b64c7: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b64cb: add    rdx,0xa0
0x002b64d2: jmp    0x1402b6506
0x002b64d4: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b64d8: add    rdx,0xc0
0x002b64df: jmp    0x1402b6506
0x002b64e1: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b64e5: add    rdx,0xe0
0x002b64ec: jmp    0x1402b6506
0x002b64ee: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b64f2: add    rdx,0x100
0x002b64f9: jmp    0x1402b6506
0x002b64fb: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b64ff: add    rdx,0x120
0x002b6506: mov    r8,QWORD PTR [rdx+0x10]
0x002b650a: cmp    QWORD PTR [rdx+0x18],0xf
0x002b650f: jbe    0x1402b6514
0x002b6511: mov    rdx,QWORD PTR [rdx]
0x002b6514: lea    rcx,[rbp+0x1c0]
0x002b651b: call   0x14006f9a0
0x002b6520: lea    r10,[rip+0xffffffffffd49ad9]        # 0x140000000
0x002b6527: mov    rdx,QWORD PTR [rip+0x2231132]        # 0x1424e7660
0x002b652e: mov    rax,QWORD PTR [rdi+0x10]
0x002b6532: movsx  r9,WORD PTR [rax+0x5e]
0x002b6537: movsxd rcx,DWORD PTR [rax+0x44]
0x002b653b: test   ecx,ecx
0x002b653d: js     0x1402b65f5
0x002b6543: mov    r8,rcx
0x002b6546: mov    rax,QWORD PTR [rip+0x223111b]        # 0x1424e7668
0x002b654d: sub    rax,rdx
0x002b6550: sar    rax,0x3
0x002b6554: cmp    rcx,rax
0x002b6557: jae    0x1402b65f5
0x002b655d: cmp    r9d,0x8
0x002b6561: ja     0x1402b65f5
0x002b6567: mov    ecx,DWORD PTR [r10+r9*4+0x2b6bdc]
0x002b656f: add    rcx,r10
0x002b6572: jmp    rcx
0x002b6574: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b6578: add    rdx,0x20
0x002b657c: jmp    0x1402b65db
0x002b657e: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b6582: add    rdx,0x40
0x002b6586: jmp    0x1402b65db
0x002b6588: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b658c: sub    rdx,0xffffffffffffff80
0x002b6590: jmp    0x1402b65db
0x002b6592: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b6596: add    rdx,0x60
0x002b659a: jmp    0x1402b65db
0x002b659c: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b65a0: add    rdx,0xa0
0x002b65a7: jmp    0x1402b65db
0x002b65a9: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b65ad: add    rdx,0xc0
0x002b65b4: jmp    0x1402b65db
0x002b65b6: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b65ba: add    rdx,0xe0
0x002b65c1: jmp    0x1402b65db
0x002b65c3: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b65c7: add    rdx,0x100
0x002b65ce: jmp    0x1402b65db
0x002b65d0: mov    rdx,QWORD PTR [rdx+r8*8]
0x002b65d4: add    rdx,0x120
0x002b65db: mov    r8,QWORD PTR [rdx+0x10]
0x002b65df: cmp    QWORD PTR [rdx+0x18],0xf
0x002b65e4: jbe    0x1402b65e9
0x002b65e6: mov    rdx,QWORD PTR [rdx]
0x002b65e9: lea    rcx,[rbp+0x1c0]
0x002b65f0: call   0x14006f9a0
0x002b65f5: cmp    QWORD PTR [rbp+0x1d0],0x0
0x002b65fd: je     0x1402b6640
0x002b65ff: cmp    QWORD PTR [rbx+0x58],0x0
0x002b6604: je     0x1402b661c
0x002b6606: lea    rcx,[rbx+0x48]
0x002b660a: mov    r8d,0x1
0x002b6610: lea    rdx,[rip+0x132d109]        # 0x1415e3720 ; literal=" "
0x002b6617: call   0x14006f9a0
0x002b661c: lea    rdx,[rbp+0x1c0]
0x002b6623: cmp    QWORD PTR [rbp+0x1d8],0xf
0x002b662b: cmova  rdx,QWORD PTR [rbp+0x1c0]
0x002b6633: lea    rcx,[rbx+0x48]
0x002b6637: movzx  edx,BYTE PTR [rdx]
0x002b663a: call   0x1400b9b10
0x002b663f: nop
0x002b6640: mov    rdx,QWORD PTR [rbp+0x1d8]
0x002b6647: cmp    rdx,0xf
0x002b664b: jbe    0x1402b66e5
0x002b6651: inc    rdx
0x002b6654: mov    rcx,QWORD PTR [rbp+0x1c0]
0x002b665b: mov    rax,rcx
0x002b665e: cmp    rdx,0x1000
0x002b6665: jb     0x1402b6680
0x002b6667: add    rdx,0x27
0x002b666b: mov    rcx,QWORD PTR [rcx-0x8]
0x002b666f: sub    rax,rcx
0x002b6672: add    rax,0xfffffffffffffff8
0x002b6676: cmp    rax,0x1f
0x002b667a: ja     0x1402b6946
0x002b6680: call   0x1415345f0
0x002b6685: jmp    0x1402b66e5
0x002b6687: lea    rdx,[rdi+0x18]
0x002b668b: lea    rcx,[rbx+0x48]
0x002b668f: cmp    rcx,rdx
0x002b6692: je     0x1402b66a7
0x002b6694: mov    r8,QWORD PTR [rdx+0x10]
0x002b6698: cmp    QWORD PTR [rdx+0x18],0xf
0x002b669d: jbe    0x1402b66a2
0x002b669f: mov    rdx,QWORD PTR [rdx]
0x002b66a2: call   0x14006f860
0x002b66a7: cmp    QWORD PTR [rbx+0x58],0x4
0x002b66ac: jb     0x1402b66e5
0x002b66ae: lea    rcx,[rbx+0x48]
0x002b66b2: mov    rax,QWORD PTR [rcx+0x10]
0x002b66b6: cmp    rax,0x3
0x002b66ba: jb     0x1402b66d5
0x002b66bc: mov    eax,0x3
0x002b66c1: mov    QWORD PTR [rcx+0x10],rax
0x002b66c5: cmp    QWORD PTR [rcx+0x18],0xf
0x002b66ca: jbe    0x1402b66cf
0x002b66cc: mov    rcx,QWORD PTR [rcx]
0x002b66cf: mov    BYTE PTR [rcx+0x3],0x0
0x002b66d3: jmp    0x1402b66e5
0x002b66d5: mov    edx,0x3
0x002b66da: sub    rdx,rax
0x002b66dd: xor    r8d,r8d
0x002b66e0: call   0x1400e1240
0x002b66e5: lea    rcx,[rbx+0x48]
0x002b66e9: call   0x14052ade0
0x002b66ee: mov    rcx,QWORD PTR [rdi]
0x002b66f1: cmp    DWORD PTR [rcx+0x30],0xffffffff
0x002b66f5: je     0x1402b670d
0x002b66f7: lea    rcx,[rbx+0x68]
0x002b66fb: mov    r8d,0x3
0x002b6701: lea    rdx,[rip+0x136da6c]        # 0x141624174 ; literal="RIP"
0x002b6708: call   0x14006f860
0x002b670d: mov    rax,QWORD PTR [rbp+0xb0]
0x002b6714: cmp    rax,QWORD PTR [rbp+0xb8]
0x002b671b: je     0x1402b672d
0x002b671d: mov    QWORD PTR [rax],rbx
0x002b6720: add    rax,0x8
0x002b6724: mov    QWORD PTR [rbp+0xb0],rax
0x002b672b: jmp    0x1402b6740
0x002b672d: lea    r8,[rbp-0x10]
0x002b6731: mov    rdx,rax
0x002b6734: lea    rcx,[rbp+0xa8]
0x002b673b: call   0x140070b60
0x002b6740: mov    r8,QWORD PTR [rbp-0x20]
0x002b6744: cmp    QWORD PTR [rdi+0xb8],0x0
0x002b674c: jne    0x1402b6755
0x002b674e: mov    QWORD PTR [rdi+0xb8],r8
0x002b6755: or     DWORD PTR [rdi+0xf0],0x1
0x002b675c: lea    rcx,[rdi+0xc0]
0x002b6763: mov    rdx,QWORD PTR [rcx+0x8]
0x002b6767: cmp    rdx,QWORD PTR [rcx+0x10]
0x002b676b: je     0x1402b6777
0x002b676d: mov    QWORD PTR [rdx],r8
0x002b6770: add    QWORD PTR [rcx+0x8],0x8
0x002b6775: jmp    0x1402b6787
0x002b6777: lea    r8,[rbp+0xd0]
0x002b677e: call   0x140070b60
0x002b6783: mov    r8,QWORD PTR [rbp-0x20]
0x002b6787: mov    rax,QWORD PTR [rbp+0x68]
0x002b678b: mov    rbx,QWORD PTR [rax]
0x002b678e: mov    rdi,QWORD PTR [rax+0x8]
0x002b6792: mov    r9,QWORD PTR [rsp+0x30]
0x002b6797: nop    WORD PTR [rax+rax*1+0x0]
0x002b67a0: mov    QWORD PTR [rbp-0x10],r9
0x002b67a4: cmp    rbx,rdi
0x002b67a7: jae    0x1402b686c
0x002b67ad: mov    rdx,QWORD PTR [rbx]
0x002b67b0: cmp    QWORD PTR [rdx+0x80],0x0
0x002b67b8: jne    0x1402b685b
0x002b67be: mov    rax,QWORD PTR [rsp+0x38]
0x002b67c3: mov    rax,QWORD PTR [rax]
0x002b67c6: mov    ecx,DWORD PTR [rax+0xe0]
0x002b67cc: cmp    DWORD PTR [rdx+0x68],ecx
0x002b67cf: jne    0x1402b685b
0x002b67d5: lea    rcx,[rdx+0x70]
0x002b67d9: lea    rax,[r8+0x18]
0x002b67dd: cmp    rcx,rax
0x002b67e0: je     0x1402b67f8
0x002b67e2: mov    rdx,rax
0x002b67e5: cmp    QWORD PTR [rax+0x18],0xf
0x002b67ea: jbe    0x1402b67ef
0x002b67ec: mov    rdx,QWORD PTR [rax]
0x002b67ef: mov    r8,QWORD PTR [rax+0x10]
0x002b67f3: call   0x14006f860
0x002b67f8: mov    eax,DWORD PTR [rip+0x2110e76]        # 0x1423c7674
0x002b67fe: lea    ecx,[rax-0x17]
0x002b6801: cmp    DWORD PTR [rip+0x15dfa60],0x0        # 0x141896268
0x002b6808: jne    0x1402b680d
0x002b680a: lea    ecx,[rax-0x4]
0x002b680d: mov    rax,QWORD PTR [rbx]
0x002b6810: movsxd rdx,ecx
0x002b6813: sub    rdx,0x5
0x002b6817: cmp    QWORD PTR [rax+0x80],rdx
0x002b681e: jbe    0x1402b685b
0x002b6820: lea    rcx,[rax+0x70]
0x002b6824: mov    rax,QWORD PTR [rcx+0x10]
0x002b6828: cmp    rdx,rax
0x002b682b: ja     0x1402b6850
0x002b682d: mov    QWORD PTR [rcx+0x10],rdx
0x002b6831: cmp    QWORD PTR [rcx+0x18],0xf
0x002b6836: jbe    0x1402b683b
0x002b6838: mov    rcx,QWORD PTR [rcx]
0x002b683b: mov    BYTE PTR [rcx+rdx*1],0x0
0x002b683f: add    rbx,0x8
0x002b6843: mov    r9,QWORD PTR [rbp-0x10]
0x002b6847: mov    r8,QWORD PTR [rbp-0x20]
0x002b684b: jmp    0x1402b67a0
0x002b6850: sub    rdx,rax
0x002b6853: xor    r8d,r8d
0x002b6856: call   0x1400e1240
0x002b685b: add    rbx,0x8
0x002b685f: mov    r9,QWORD PTR [rbp-0x10]
0x002b6863: mov    r8,QWORD PTR [rbp-0x20]
0x002b6867: jmp    0x1402b67a0
0x002b686c: mov    BYTE PTR [rsp+0x40],0x1
0x002b6871: add    rsi,0x8
0x002b6875: mov    rdx,QWORD PTR [rsp+0x48]
0x002b687a: jmp    0x1402b6110
0x002b687f: lea    rcx,[rsp+0x50]
0x002b6884: call   0x14006f6e0
0x002b6889: nop
0x002b688a: lea    rcx,[rbp-0x48]
0x002b688e: call   0x14006f6e0
0x002b6893: nop
0x002b6894: lea    rcx,[rsp+0x68]
0x002b6899: call   0x14006f6e0
0x002b689e: mov    r11,QWORD PTR [rip+0x222b4e3]        # 0x1424e1d88
0x002b68a5: xor    r8d,r8d
0x002b68a8: add    r15,0x4
0x002b68ac: jmp    0x1402b57d5
0x002b68b1: mov    edx,DWORD PTR [rbp-0x80]
0x002b68b4: mov    rax,QWORD PTR [rbp+0x40]
0x002b68b8: add    r13,0x8
0x002b68bc: jmp    0x1402b57a4
0x002b68c1: mov    rbx,QWORD PTR [rbp+0xa8]
0x002b68c8: mov    rdi,QWORD PTR [rbp+0xb0]
0x002b68cf: mov    r12,QWORD PTR [rbp-0x20]
0x002b68d3: cmp    rbx,rdi
0x002b68d6: jae    0x1402b6907
0x002b68d8: mov    rdx,QWORD PTR [r12+0x8]
0x002b68dd: cmp    rdx,QWORD PTR [r12+0x10]
0x002b68e2: je     0x1402b68f6
0x002b68e4: mov    rax,QWORD PTR [rbx]
0x002b68e7: mov    QWORD PTR [rdx],rax
0x002b68ea: add    QWORD PTR [r12+0x8],0x8
0x002b68f0: add    rbx,0x8
0x002b68f4: jmp    0x1402b68d3
0x002b68f6: mov    r8,rbx
0x002b68f9: mov    rcx,r12
0x002b68fc: call   0x140070b60
0x002b6901: add    rbx,0x8
0x002b6905: jmp    0x1402b68d3
0x002b6907: inc    DWORD PTR [rbp-0x80]
0x002b690a: lea    rcx,[rbp+0xa8]
0x002b6911: call   0x140066b00
0x002b6916: cmp    BYTE PTR [rsp+0x40],0x0
0x002b691b: mov    edx,DWORD PTR [rbp-0x80]
0x002b691e: jne    0x1402b5775
0x002b6924: mov    rsi,QWORD PTR [rbp-0x8]
0x002b6928: mov    r12,QWORD PTR [rbp-0x28]
0x002b692c: xor    r13d,r13d
0x002b692f: add    rsi,0x8
0x002b6933: mov    rax,QWORD PTR [rbp+0x90]
0x002b693a: jmp    0x1402b527a
0x002b693f: call   QWORD PTR [rip+0x132a15b]        # 0x1415e0aa0
0x002b6945: nop
0x002b6946: call   QWORD PTR [rip+0x132a154]        # 0x1415e0aa0
0x002b694c: nop
0x002b694d: mov    r15,QWORD PTR [rbp-0x18]
0x002b6951: test   r15,r15
0x002b6954: je     0x1402b69d1
0x002b6956: mov    rbx,QWORD PTR [r15+0x1a0]
0x002b695d: sub    rbx,QWORD PTR [r15+0x198]
0x002b6964: sar    rbx,0x3
0x002b6968: sub    ebx,0x1
0x002b696b: js     0x1402b69d1
0x002b696d: movsxd rax,ebx
0x002b6970: lea    rdi,[rax*8+0x0]
0x002b6978: mov    rsi,rdi
0x002b697b: nop    DWORD PTR [rax+rax*1+0x0]
0x002b6980: mov    rax,QWORD PTR [r15+0x198]
0x002b6987: mov    rcx,QWORD PTR [rdi+rax*1]
0x002b698b: cmp    QWORD PTR [rcx+0xb8],0x0
0x002b6993: jne    0x1402b69c4
0x002b6995: test   rcx,rcx
0x002b6998: je     0x1402b699f
0x002b699a: call   0x1400bc0c0
0x002b699f: mov    rcx,QWORD PTR [r15+0x198]
0x002b69a6: add    rcx,rsi
0x002b69a9: mov    r8,QWORD PTR [r15+0x1a0]
0x002b69b0: lea    rdx,[rcx+0x8]
0x002b69b4: sub    r8,rdx
0x002b69b7: call   0x141535d8a
0x002b69bc: add    QWORD PTR [r15+0x1a0],0xfffffffffffffff8
0x002b69c4: sub    rsi,0x8
0x002b69c8: sub    rdi,0x8
0x002b69cc: sub    ebx,0x1
0x002b69cf: jns    0x1402b6980
0x002b69d1: mov    r14,QWORD PTR [rbp+0x48]
0x002b69d5: test   r14,r14
0x002b69d8: je     0x1402b6abe
0x002b69de: cmp    DWORD PTR [r14+0x294],0xffffffff
0x002b69e6: je     0x1402b6a5a
0x002b69e8: lea    r8,[r14+0x248]
0x002b69ef: lea    rcx,[r14+0x2d0]
0x002b69f6: cmp    rcx,r8
0x002b69f9: je     0x1402b6a0e
0x002b69fb: mov    rdx,QWORD PTR [r8]
0x002b69fe: mov    r8,QWORD PTR [r8+0x8]
0x002b6a02: sub    r8,rdx
0x002b6a05: sar    r8,0x3
0x002b6a09: call   0x1400e1640
0x002b6a0e: lea    r8,[r14+0x260]
0x002b6a15: lea    rcx,[r14+0x2e8]
0x002b6a1c: cmp    rcx,r8
0x002b6a1f: je     0x1402b6a34
0x002b6a21: mov    rdx,QWORD PTR [r8]
0x002b6a24: mov    r8,QWORD PTR [r8+0x8]
0x002b6a28: sub    r8,rdx
0x002b6a2b: sar    r8,0x3
0x002b6a2f: call   0x1400e1640
0x002b6a34: lea    r8,[r14+0x278]
0x002b6a3b: lea    rcx,[r14+0x300]
0x002b6a42: cmp    rcx,r8
0x002b6a45: je     0x1402b6a5a
0x002b6a47: mov    rdx,QWORD PTR [r8]
0x002b6a4a: mov    r8,QWORD PTR [r8+0x8]
0x002b6a4e: sub    r8,rdx
0x002b6a51: sar    r8,0x3
0x002b6a55: call   0x1400e1640
0x002b6a5a: lea    rax,[r14+0x298]
0x002b6a61: mov    QWORD PTR [rax+0x10],r13
0x002b6a65: cmp    QWORD PTR [rax+0x18],0xf
0x002b6a6a: jbe    0x1402b6a6f
0x002b6a6c: mov    rax,QWORD PTR [rax]
0x002b6a6f: mov    BYTE PTR [rax],0x0
0x002b6a72: mov    DWORD PTR [r14+0x294],r13d
0x002b6a79: mov    QWORD PTR [r14+0x2c0],r13
0x002b6a80: mov    DWORD PTR [r14+0x2c8],r13d
0x002b6a87: mov    BYTE PTR [r14+0x2cc],0x0
0x002b6a8f: mov    QWORD PTR [r14+0x230],r13
0x002b6a96: mov    DWORD PTR [r14+0x238],r13d
0x002b6a9d: mov    BYTE PTR [r14+0x23c],0x0
0x002b6aa5: mov    DWORD PTR [r14+0x240],r13d
0x002b6aac: mov    BYTE PTR [r14+0x244],0x0
0x002b6ab4: mov    rcx,r14
0x002b6ab7: call   0x140476ef0
0x002b6abc: jmp    0x1402b6ad3
0x002b6abe: test   r15,r15
0x002b6ac1: je     0x1402b6ad3
0x002b6ac3: mov    rcx,r15
0x002b6ac6: call   0x1400bfe20
0x002b6acb: mov    rcx,r15
0x002b6ace: call   0x1400be3a0
0x002b6ad3: mov    rcx,QWORD PTR [rbp+0x1e0]
0x002b6ada: xor    rcx,rsp
0x002b6add: call   0x1415345d0
0x002b6ae2: mov    rbx,QWORD PTR [rsp+0x340]
0x002b6aea: movaps xmm6,XMMWORD PTR [rsp+0x2f0]
0x002b6af2: add    rsp,0x300
0x002b6af9: pop    r15
0x002b6afb: pop    r14
0x002b6afd: pop    r13
0x002b6aff: pop    r12
0x002b6b01: pop    rdi
0x002b6b02: pop    rsi
0x002b6b03: pop    rbp
0x002b6b04: ret
0x002b6b05: nop    DWORD PTR [rax]
0x002b6b08: xchg   esp,eax
0x002b6b09: sub    rax,QWORD PTR [rax]
0x002b6b0c: rex.X
0x002b6b0d: sub    rax,QWORD PTR [rax]
0x002b6b10: sahf
0x002b6b11: sub    rax,QWORD PTR [r8]
0x002b6b14: cmp    DWORD PTR [rax+0x2b],ecx
0x002b6b17: add    cl,al
0x002b6b19: rex.RXB sub r8d,DWORD PTR [r8]
0x002b6b1c: jle    0x1402b6b65
0x002b6b1e: sub    eax,DWORD PTR [rax]
0x002b6b20: in     eax,0x49
0x002b6b22: sub    eax,DWORD PTR [rax]
0x002b6b24: jle    0x1402b6b71
0x002b6b26: sub    eax,DWORD PTR [rax]
0x002b6b28: rex.WXB
0x002b6b29: rex.WX sub rax,QWORD PTR [rax]
0x002b6b2c: xchg   edx,eax
0x002b6b2d: rex.WX sub rax,QWORD PTR [rax]
0x002b6b30: in     eax,0x4a
0x002b6b32: sub    eax,DWORD PTR [rax]
0x002b6b34: (bad)
0x002b6b35: sub    r8,QWORD PTR [rax]
0x002b6b38: (bad)
0x002b6b39: sub    r8,QWORD PTR [rax]
0x002b6b3c: fimul  WORD PTR [rbx+rbp*1+0x0]
0x002b6b40: (bad)
0x002b6b41: sub    r8,QWORD PTR [rax]
0x002b6b44: (bad)
0x002b6b45: sub    r8,QWORD PTR [rax]
0x002b6b48: (bad)
0x002b6b49: sub    r8,QWORD PTR [rax]
0x002b6b4c: repnz sub r8,QWORD PTR [r8]
0x002b6b50: ror    BYTE PTR [rbx+rbp*1+0x0],1
0x002b6b54: ins    DWORD PTR [rdi],dx
0x002b6b55: sub    r8,QWORD PTR [rax]
0x002b6b58: rex.RB
0x002b6b59: rex.WRX sub r8,QWORD PTR [rax]
0x002b6b5c: ins    DWORD PTR [rdi],dx
0x002b6b5d: sub    r8,QWORD PTR [rax]
0x002b6b60: fistp  WORD PTR [rdx+0x2b]
0x002b6b63: add    BYTE PTR [rbx+0x59],dl
0x002b6b66: sub    eax,DWORD PTR [rax]
0x002b6b68: jbe    0x1402b6bc5
0x002b6b6a: sub    eax,DWORD PTR [rax]
0x002b6b6c: lock pop rsp
0x002b6b6e: sub    eax,DWORD PTR [rax]
0x002b6b70: lock pop rsp
0x002b6b72: sub    eax,DWORD PTR [rax]
0x002b6b74: lock pop rsp
0x002b6b76: sub    eax,DWORD PTR [rax]
0x002b6b78: (bad)
0x002b6b79: pop    rbp
0x002b6b7a: sub    eax,DWORD PTR [rax]
0x002b6b7c: rcr    BYTE PTR [rbx+rbp*1+0x0],0x38
0x002b6b81: pop    rdx
0x002b6b82: sub    eax,DWORD PTR [rax]
0x002b6b84: repnz pop rbp
0x002b6b86: sub    eax,DWORD PTR [rax]
0x002b6b88: movabs ds:0xc1002b63ba002b5e,al
0x002b6b91: (bad)
0x002b6b96: sub    eax,DWORD PTR [rax]
0x002b6b98: sub    DWORD PTR [rbx+0x2b],esp
0x002b6b9b: add    BYTE PTR [rdi+0x63],bl
0x002b6b9e: sub    eax,DWORD PTR [rax]
0x002b6ba0: mov    ah,BYTE PTR [rbx+0x2b]
0x002b6ba3: add    bl,dh
0x002b6ba5: (bad)
0x002b6baa: sub    eax,DWORD PTR [rax]
0x002b6bac: out    0x63,eax
0x002b6bae: sub    eax,DWORD PTR [rax]
0x002b6bb0: movabs ds:0x9f002b63ba002b63,al
0x002b6bb9: sub    eax,DWORD PTR fs:[rax]
0x002b6bbc: test   eax,0xbd002b64
0x002b6bc1: sub    eax,DWORD PTR fs:[rax]
0x002b6bc4: mov    bl,0x64
0x002b6bc6: sub    eax,DWORD PTR [rax]
0x002b6bc8: (bad)
0x002b6bc9: sub    eax,DWORD PTR fs:[rax]
0x002b6bcc: (bad)
0x002b6bcd: sub    eax,DWORD PTR fs:[rax]
0x002b6bd0: loope  0x1402b6c36
0x002b6bd2: sub    eax,DWORD PTR [rax]
0x002b6bd4: out    dx,al
0x002b6bd5: sub    eax,DWORD PTR fs:[rax]
0x002b6bd8: sti
0x002b6bd9: sub    eax,DWORD PTR fs:[rax]
0x002b6bdc: je     0x1402b6c43
0x002b6bde: sub    eax,DWORD PTR [rax]
0x002b6be0: jle    0x1402b6c47
0x002b6be2: sub    eax,DWORD PTR [rax]
0x002b6be4: xchg   edx,eax
0x002b6be5: sub    eax,DWORD PTR gs:[rax]
0x002b6be8: mov    BYTE PTR [rbp+0x2b],ah
0x002b6beb: add    BYTE PTR [rbp+riz*2+0x65a9002b],bl
0x002b6bf2: sub    eax,DWORD PTR [rax]
0x002b6bf4: mov    dh,0x65
0x002b6bf6: sub    eax,DWORD PTR [rax]
0x002b6bf8: ret
0x002b6bf9: sub    eax,DWORD PTR gs:[rax]
0x002b6bfc: shl    BYTE PTR [rbp+0x2b],1
